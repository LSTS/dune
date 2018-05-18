//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 66a9fcd055dc1d1843f251836a38c6bc                            *
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
    msg.setTimeStamp(0.0572277487266);
    msg.setSource(28933U);
    msg.setSourceEntity(47U);
    msg.setDestination(63208U);
    msg.setDestinationEntity(18U);
    msg.state = 229U;
    msg.flags = 237U;
    msg.description.assign("XMASMULDBAPMKMUWCMHZEBDXBFMIXROKLKCSUWVMZYCEAJNADPZAREIXETDRNZNEOHAPJNBNTKFMCLAIWOTUNMSYQUIKCSKLYFPRJHHGLGTAWGR");

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
    msg.setTimeStamp(0.611406342031);
    msg.setSource(12618U);
    msg.setSourceEntity(234U);
    msg.setDestination(21361U);
    msg.setDestinationEntity(33U);
    msg.state = 24U;
    msg.flags = 71U;
    msg.description.assign("MGKVRNGNKVEONHYPSEVLZBWIREFKMUYMWYQCXVCUQOHWAQKGERBIAIDMHXJPUTUZUTJWWDOKFDHTYOCUZ");

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
    msg.setTimeStamp(0.377175146334);
    msg.setSource(44494U);
    msg.setSourceEntity(180U);
    msg.setDestination(21075U);
    msg.setDestinationEntity(237U);
    msg.state = 15U;
    msg.flags = 197U;
    msg.description.assign("SKSRQXQTZQQSTGRPQYQGXWQPRMZEJIBIPFZXXOQDVBAIAWUVUBDOWFJMDJKSXUEXHYJIPVLKUIVWCZCUAMJL");

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
    msg.setTimeStamp(0.528796317771);
    msg.setSource(63788U);
    msg.setSourceEntity(53U);
    msg.setDestination(48420U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.12948371236);
    msg.setSource(34039U);
    msg.setSourceEntity(254U);
    msg.setDestination(37101U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.696556432414);
    msg.setSource(42544U);
    msg.setSourceEntity(166U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.73724217603);
    msg.setSource(57889U);
    msg.setSourceEntity(44U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(69U);
    msg.id = 241U;
    msg.label.assign("EEKGGMRXWFHOHYXNQARUPEZDQBMQJISTTJMKKKBHEWKLOBCUWSMICNIXVRIWZVKSPJJSPAQKFLOZPJSPAAIYAATPUQUGSBWVDHSYLRQFSPLOVBGCXTYPXINIYYPZFVIAEXIRMXYKDNBUOGYGGLNFZAOOMEVHHNDZMNWJZYFKRJ");
    msg.component.assign("VMYTIUIDXDRGOUCYWHQIIOPYRSSAOIXCIPYOLDDNBZGBIKVLJLYPBUJEGC");
    msg.act_time = 33761U;
    msg.deact_time = 45948U;

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
    msg.setTimeStamp(0.304665338274);
    msg.setSource(30693U);
    msg.setSourceEntity(43U);
    msg.setDestination(37811U);
    msg.setDestinationEntity(236U);
    msg.id = 190U;
    msg.label.assign("KFENRASFXKONDULMYSFXCEUZIJVPXXJDPTWOUTMZRGQANHDBOZLMLPWDXKYMCHKSYJUSEIVMZATQVGRVAYWYZISFPWOJQAGXBUHTIOBKGIRRTKCMISCVXJWLBHTWOLNSQ");
    msg.component.assign("XLBBJCWQDINNTGMLYRVTMUKTZDZHJSUYLYKVGKBUQTVWIGYHCOKSBXPDBWWVLNADZBSLSJCEWFNQZEJHIGCXSCCNBT");
    msg.act_time = 30130U;
    msg.deact_time = 36218U;

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
    msg.setTimeStamp(0.656259354573);
    msg.setSource(30356U);
    msg.setSourceEntity(209U);
    msg.setDestination(51880U);
    msg.setDestinationEntity(45U);
    msg.id = 52U;
    msg.label.assign("KQOGTBKFTJWOGCRUAVCNWJLNTIYUIOISGUXPVYWMWXANYKIOKCYIOTBNLDFOYOUUJVVJKBHWLLROFFPGHMVRDVDJTRMUDRWVMSEIWOIACSUFZGEH");
    msg.component.assign("UDAYXPUQRGGYLMVGBMJKBOKBKCMSOUDJVPDLZBGQEANFIKYRLEDVFYSMMLAAPAMGEHCOHNLCYUVXNCJFFRJKNINSVMWTJBJSREPBUIBMZUKDLGSFNRWFWDKLOTYXNVCHXFFCKIBEHPQAENQRHJYUQWWDXZAONSTLTAOREYIUURXZXZWPSPRQGYEHKJITGQMQTWALVCBHSTRXIEPOOEZHHOTVZZWCFVCO");
    msg.act_time = 44444U;
    msg.deact_time = 60711U;

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
    msg.setTimeStamp(0.38548364371);
    msg.setSource(31838U);
    msg.setSourceEntity(12U);
    msg.setDestination(59560U);
    msg.setDestinationEntity(163U);
    msg.id = 120U;

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
    msg.setTimeStamp(0.347643795584);
    msg.setSource(56611U);
    msg.setSourceEntity(170U);
    msg.setDestination(59575U);
    msg.setDestinationEntity(218U);
    msg.id = 35U;

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
    msg.setTimeStamp(0.385672911928);
    msg.setSource(26189U);
    msg.setSourceEntity(213U);
    msg.setDestination(60221U);
    msg.setDestinationEntity(225U);
    msg.id = 158U;

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
    msg.setTimeStamp(0.0149240137204);
    msg.setSource(3781U);
    msg.setSourceEntity(193U);
    msg.setDestination(2153U);
    msg.setDestinationEntity(57U);
    msg.op = 76U;
    msg.list.assign("VTZUCCONORIANMHXFQLGAAVWBRACQJQRUTXIVSUCBGXEYVLQZLOAHJLYMDHRVMKRQMWTNTMIEXKNKOODCBEPSSNICYUOEQFJAPAIAFPDLBIKMBHCMVGGFIHRLILPQSSDEYSIRTKIWYNPWVTUKGLOLNSEGYDWZZCURRHWBQDSFQVSAEVOKEFJMJBKTJGJUXGFHW");

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
    msg.setTimeStamp(0.102053347199);
    msg.setSource(48347U);
    msg.setSourceEntity(177U);
    msg.setDestination(22575U);
    msg.setDestinationEntity(27U);
    msg.op = 224U;
    msg.list.assign("DDEYLDYOWBFPIUJCKJSXTQGHNVBUAGLWGCIZVOIMINVYDNEYGBQRVQUNYERIMDKJSLCLNOQJTOHXVFUJVOLCDRIXMAPQYAAFCPRBFLFTIUEJWJAAJWUDUMDTVWKZPAOXXMFWQSRMNMHAGPMSQBVKMHSZAXCOKGCNQONFOIZVBEWWJKUXZ");

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
    msg.setTimeStamp(0.932010684002);
    msg.setSource(28174U);
    msg.setSourceEntity(28U);
    msg.setDestination(5118U);
    msg.setDestinationEntity(86U);
    msg.op = 48U;
    msg.list.assign("LDCSFHWEOMWSQTJPTRMAASOJGMEKIOAEGOXXBZCSEOOHVWWGBJCUDYDSBTNZG");

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
    msg.setTimeStamp(0.575007613513);
    msg.setSource(21720U);
    msg.setSourceEntity(184U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(98U);
    msg.value = 53U;

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
    msg.setTimeStamp(0.892031221132);
    msg.setSource(49587U);
    msg.setSourceEntity(248U);
    msg.setDestination(13120U);
    msg.setDestinationEntity(126U);
    msg.value = 117U;

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
    msg.setTimeStamp(0.0221394385342);
    msg.setSource(41784U);
    msg.setSourceEntity(0U);
    msg.setDestination(19331U);
    msg.setDestinationEntity(234U);
    msg.value = 11U;

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
    msg.setTimeStamp(0.477015262069);
    msg.setSource(25967U);
    msg.setSourceEntity(127U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(70U);
    msg.consumer.assign("CYTDORCOSQKLBPMFAMENUVCZIQKRIJIMSUVNAKJGPZOUJFIQDVXKIDAFLGVKSUGXJEVIPRKBWJZTLXLAASNTOMWOUEEHFFGMMUDAHYIFYRLJTXUNCSXUNYTDLBDSJZHWDWFYHNOPNGBEXWGYFZCWHQZFQJTTXBXVRYASLPMZPRQXSFCQHIVWGMEGKWJQWCYEKLZYTLJABKROUMCSIZDBHHGKVBGBONRHWADXEPNSOEPCVRPME");
    msg.message_id = 18030U;

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
    msg.setTimeStamp(0.548565756689);
    msg.setSource(1215U);
    msg.setSourceEntity(170U);
    msg.setDestination(7998U);
    msg.setDestinationEntity(32U);
    msg.consumer.assign("GSDTZXBMCBCCOEYSIFPEAHOTHENWBJLOHGXMNDOEFHVCYKRJWXIZJQGBUDNNCQFSETLLSETDGCLKVYBMFYFIUY");
    msg.message_id = 37157U;

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
    msg.setTimeStamp(0.454656005471);
    msg.setSource(63859U);
    msg.setSourceEntity(218U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(183U);
    msg.consumer.assign("THVFBMAIOVIYLYROUPFDNNSJQPTJUJKRMCNYKLEABDPVLTKRCRRAFESFNGBREYOHTFJASDBCCDMQFWRYUQPEJYHOBGGGWVGYMKCDQZAVIDOBONAMJMHQTFWKVXQLWEDXGHQACSPQCLWAOXEWDZSZQKJI");
    msg.message_id = 25790U;

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
    msg.setTimeStamp(0.298510117814);
    msg.setSource(17374U);
    msg.setSourceEntity(42U);
    msg.setDestination(3564U);
    msg.setDestinationEntity(150U);
    msg.type = 30U;

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
    msg.setTimeStamp(0.243246792438);
    msg.setSource(48552U);
    msg.setSourceEntity(182U);
    msg.setDestination(4994U);
    msg.setDestinationEntity(93U);
    msg.type = 27U;

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
    msg.setTimeStamp(0.921482333743);
    msg.setSource(35233U);
    msg.setSourceEntity(173U);
    msg.setDestination(30060U);
    msg.setDestinationEntity(238U);
    msg.type = 60U;

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
    msg.setTimeStamp(0.99475340518);
    msg.setSource(14806U);
    msg.setSourceEntity(102U);
    msg.setDestination(62265U);
    msg.setDestinationEntity(107U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.00546016246839);
    msg.setSource(17822U);
    msg.setSourceEntity(175U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(59U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.387318876797);
    msg.setSource(41749U);
    msg.setSourceEntity(93U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(196U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.353266216928);
    msg.setSource(42056U);
    msg.setSourceEntity(100U);
    msg.setDestination(10953U);
    msg.setDestinationEntity(212U);
    msg.total_steps = 12U;
    msg.step_number = 42U;
    msg.step.assign("LZLKLTXEPUJHSANPDYHVWZBUOKFWRICMBFKVGHUXQFEIMGDIWAGVRBSAROEBMYBPNSRGTYTQXBAZLGXYZPIKJPPTJWKHW");
    msg.flags = 168U;

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
    msg.setTimeStamp(0.422120595613);
    msg.setSource(58082U);
    msg.setSourceEntity(170U);
    msg.setDestination(51301U);
    msg.setDestinationEntity(44U);
    msg.total_steps = 176U;
    msg.step_number = 97U;
    msg.step.assign("ZYEYCJKDQGXSZMQIHCZNHSBGSZLMAGHEUSRNUGWDCMABSSYLIXXQBYDVQOBLHXGVNFXWIKKTPTOBILFESGGHCDJPVERBFNCROIUDDTIWXBIXTVNFQMXOUHESRGLNSWTAOCNUEVAQZPSFHLRVENJYBWPPYOCAKDKJMAVQIWJEBWPLYEOJFUYXDFKEHOARCQVZKTQRMFUVUZMCZTJPGYDMDCVWTJLRORJIFRPWPWNXZKLITHYHJNKM");
    msg.flags = 22U;

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
    msg.setTimeStamp(0.823899584769);
    msg.setSource(20909U);
    msg.setSourceEntity(185U);
    msg.setDestination(60894U);
    msg.setDestinationEntity(150U);
    msg.total_steps = 148U;
    msg.step_number = 62U;
    msg.step.assign("NSSCDREMETOWJPDPSUJYYYKDUEMIVOTDPOFKJYUKZZGAVQEMKAXQVGTVOHLPRXHAHVPQDDJOCEGHHRANQLPKQNBNCNMUGCLSZACWKWMTINIXJJIEMJRPUYGFEDMCXVIVNKRRSZWATSGRUVEZKHOBAVDUVFTQRMGKWQIJU");
    msg.flags = 96U;

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
    msg.setTimeStamp(0.264183461486);
    msg.setSource(57438U);
    msg.setSourceEntity(114U);
    msg.setDestination(43435U);
    msg.setDestinationEntity(177U);
    msg.state = 237U;
    msg.error.assign("CFTYALJXMZXYCFTUPUOCZDPOZIKVVZTWEQEGVDVQOUIERNBCGCZKACIBPLVGPTMTOFXKGWINFMIFERRSDQPYUPVGXNFHSNJZPUZAEUDLEBAWYUOYPAVMKOGSETBQSMHZUCOLATMIRWLEWKNJRCBLNNTURBJVFXIMCGOJYHYENMBGHQKXSRXWYBGHNKQQLDBLTFMPKDJJZLSRPJWAXGDQJSKOFRHOJDBFWDAAHMQUXHRAWQWCETVZYDSS");

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
    msg.setTimeStamp(0.983154752446);
    msg.setSource(31932U);
    msg.setSourceEntity(4U);
    msg.setDestination(8258U);
    msg.setDestinationEntity(95U);
    msg.state = 77U;
    msg.error.assign("RFHYDSNRSGLVZKXSEIIODYGPQDOXRDASVHGEUPNHWLCHQATOFYUXHYOCBTSXGLWESJCQZCSHCMGJFXBIFJEBGDNIVJKZWZYUPMRKQPUOFMPIWRFVL");

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
    msg.setTimeStamp(0.451063717062);
    msg.setSource(45849U);
    msg.setSourceEntity(171U);
    msg.setDestination(31119U);
    msg.setDestinationEntity(166U);
    msg.state = 169U;
    msg.error.assign("ELVWSRYJZLFYSYKMDRSUINFBVSSVOQUJEJGNVRXNTBMQDWTGXIOLMBTMCSTPMICWDEEGHWEASHOWPYUGZOVEDKRDXAHYGAPTNOPJXSIWFUPHNKYRECVFNLEVEAWJSLQHGQBOMWHNUXXWUZDGUPDFUHPMJBZKGUHAYRTDXBJRTAQQLCOVAGKNJYIZMRHUQRFLBKTKMDXFTCXYZQACDBALZGFOJNIKOQVZEICOFZBWMLKFKQLPCNIYHZVCARI");

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
    msg.setTimeStamp(0.484775890842);
    msg.setSource(19852U);
    msg.setSourceEntity(135U);
    msg.setDestination(32919U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.743180215434);
    msg.setSource(19544U);
    msg.setSourceEntity(254U);
    msg.setDestination(29514U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.225339778503);
    msg.setSource(26773U);
    msg.setSourceEntity(139U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.879453795527);
    msg.setSource(37577U);
    msg.setSourceEntity(11U);
    msg.setDestination(30992U);
    msg.setDestinationEntity(137U);
    msg.op = 226U;
    msg.speed_min = 0.734535203381;
    msg.speed_max = 0.282276206526;
    msg.long_accel = 0.286609324303;
    msg.alt_max_msl = 0.543669732239;
    msg.dive_fraction_max = 0.322961900389;
    msg.climb_fraction_max = 0.438711741228;
    msg.bank_max = 0.215221456918;
    msg.p_max = 0.809437913246;
    msg.pitch_min = 0.0126004890639;
    msg.pitch_max = 0.837395777247;
    msg.q_max = 0.315512257038;
    msg.g_min = 0.905242903316;
    msg.g_max = 0.21905537497;
    msg.g_lat_max = 0.408959804358;
    msg.rpm_min = 0.501075848761;
    msg.rpm_max = 0.143976297572;
    msg.rpm_rate_max = 0.722656239242;

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
    msg.setTimeStamp(0.742720508573);
    msg.setSource(59596U);
    msg.setSourceEntity(199U);
    msg.setDestination(60172U);
    msg.setDestinationEntity(186U);
    msg.op = 168U;
    msg.speed_min = 0.331103866013;
    msg.speed_max = 0.104148843509;
    msg.long_accel = 0.120287857306;
    msg.alt_max_msl = 0.638975543458;
    msg.dive_fraction_max = 0.920526705533;
    msg.climb_fraction_max = 0.0284250036823;
    msg.bank_max = 0.820412328404;
    msg.p_max = 0.196280477154;
    msg.pitch_min = 0.00804604691218;
    msg.pitch_max = 0.0071641870319;
    msg.q_max = 0.472566756803;
    msg.g_min = 0.485914498034;
    msg.g_max = 0.067259776122;
    msg.g_lat_max = 0.617111856954;
    msg.rpm_min = 0.935566235828;
    msg.rpm_max = 0.28417068682;
    msg.rpm_rate_max = 0.323844395318;

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
    msg.setTimeStamp(0.892688476618);
    msg.setSource(44293U);
    msg.setSourceEntity(26U);
    msg.setDestination(20230U);
    msg.setDestinationEntity(4U);
    msg.op = 179U;
    msg.speed_min = 0.418930342461;
    msg.speed_max = 0.916624917798;
    msg.long_accel = 0.711256910431;
    msg.alt_max_msl = 0.485046146634;
    msg.dive_fraction_max = 0.725341593282;
    msg.climb_fraction_max = 0.155526058933;
    msg.bank_max = 0.509081755627;
    msg.p_max = 0.685709129642;
    msg.pitch_min = 0.353862032902;
    msg.pitch_max = 0.828749068092;
    msg.q_max = 0.482829587051;
    msg.g_min = 0.827737363404;
    msg.g_max = 0.591505714406;
    msg.g_lat_max = 0.359331463748;
    msg.rpm_min = 0.83686774169;
    msg.rpm_max = 0.509295706074;
    msg.rpm_rate_max = 0.534376066369;

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
    msg.setTimeStamp(0.927043510053);
    msg.setSource(20824U);
    msg.setSourceEntity(144U);
    msg.setDestination(60386U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.151016715022);
    msg.setSource(21237U);
    msg.setSourceEntity(136U);
    msg.setDestination(56078U);
    msg.setDestinationEntity(198U);
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 95U;
    tmp_msg_0.value = 0.43604460363;
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
    msg.setTimeStamp(0.506666974494);
    msg.setSource(51128U);
    msg.setSourceEntity(231U);
    msg.setDestination(58395U);
    msg.setDestinationEntity(41U);
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 30U;
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
    msg.setTimeStamp(0.570403577418);
    msg.setSource(6616U);
    msg.setSourceEntity(154U);
    msg.setDestination(32811U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.404373361669;
    msg.lon = 0.460525955523;
    msg.height = 0.479287142494;
    msg.x = 0.875349996755;
    msg.y = 0.368701073364;
    msg.z = 0.83090958771;
    msg.phi = 0.0557671645366;
    msg.theta = 0.394606568168;
    msg.psi = 0.1385818581;
    msg.u = 0.775529387996;
    msg.v = 0.0464853653545;
    msg.w = 0.363743009146;
    msg.p = 0.293906856195;
    msg.q = 0.819189203299;
    msg.r = 0.548312341346;
    msg.svx = 0.9490235806;
    msg.svy = 0.494273524772;
    msg.svz = 0.75510882938;

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
    msg.setTimeStamp(0.848072691425);
    msg.setSource(40478U);
    msg.setSourceEntity(212U);
    msg.setDestination(29044U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.622410916755;
    msg.lon = 0.574341370725;
    msg.height = 0.0559412639204;
    msg.x = 0.913040507283;
    msg.y = 0.372545196498;
    msg.z = 0.0801907487255;
    msg.phi = 0.28647031941;
    msg.theta = 0.935923972511;
    msg.psi = 0.97191401341;
    msg.u = 0.676496638225;
    msg.v = 0.537784418238;
    msg.w = 0.173380704929;
    msg.p = 0.174884609025;
    msg.q = 0.537067099256;
    msg.r = 0.133967138053;
    msg.svx = 0.351745787688;
    msg.svy = 0.911985478758;
    msg.svz = 0.40287636001;

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
    msg.setTimeStamp(0.499619163026);
    msg.setSource(26244U);
    msg.setSourceEntity(6U);
    msg.setDestination(53466U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.137122137726;
    msg.lon = 0.0843768778081;
    msg.height = 0.528515795792;
    msg.x = 0.440346811577;
    msg.y = 0.791979681717;
    msg.z = 0.0484721032065;
    msg.phi = 0.654155745393;
    msg.theta = 0.966795285492;
    msg.psi = 0.893305155036;
    msg.u = 0.937080739895;
    msg.v = 0.23627550203;
    msg.w = 0.91512597625;
    msg.p = 0.827966513432;
    msg.q = 0.605375692999;
    msg.r = 0.0214143830458;
    msg.svx = 0.827162139792;
    msg.svy = 0.16668531577;
    msg.svz = 0.320563263497;

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
    msg.setTimeStamp(0.420028405612);
    msg.setSource(49650U);
    msg.setSourceEntity(110U);
    msg.setDestination(36081U);
    msg.setDestinationEntity(18U);
    msg.op = 71U;
    msg.entities.assign("ARVBITXWFODUYCGKQNYGNBZHRERZTSXQANHRGXM");

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
    msg.setTimeStamp(0.973042248365);
    msg.setSource(40933U);
    msg.setSourceEntity(60U);
    msg.setDestination(44263U);
    msg.setDestinationEntity(81U);
    msg.op = 57U;
    msg.entities.assign("SDWIKIWWLFPGZQJSATTOJMBLTSUFDEXVVWGTNXJWPNMLZBJAKOCXDTOFQQHSLSIZOG");

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
    msg.setTimeStamp(0.602863662114);
    msg.setSource(23584U);
    msg.setSourceEntity(92U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(119U);
    msg.op = 184U;
    msg.entities.assign("COBIYQFTYJMAKQDOIDVNOFHUUVWTTCLREAVJNMPDIDVQSOGPNVETJNBRLBETRZZPMYUPNQTPUOJAPOMOCWTYXUYNEGGFSOIMLCRDPRKQWRABXMWWQISIZYQIH");

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
    msg.setTimeStamp(0.46313030858);
    msg.setSource(20589U);
    msg.setSourceEntity(81U);
    msg.setDestination(29214U);
    msg.setDestinationEntity(66U);
    msg.type = 249U;
    msg.speed = 21056U;
    const char tmp_msg_0[] = {-57, 44, -34, -97, 44, -15, 100, 33, -25, -9, 87, -87, -112, -37, -47, -81, -27, -123, -112, 99, -125, -61, 30, -107, 2, -77, -121, -104, 72, 123, 108, 68, -23, 8, 108, -9, -19, 46, 77, 123, -33, 51, -112, 33, -83, -78, 4, -67, 46, -126, 35, 84, -52, -100, -37, -69, 30, -96, 106, 91, 78, -35, 90, 110, 7, -96, -107, 98, 53, -108, -47, -32, 89, 49, 68, 90, -68, 99, 16, 118, -87, 18, -107, -55, 13, 99, 54, 36, 80, -48, 19, -114, 12, -124, -45, -14, 75, 92, 26, -48, 68, -64, -97, -16, 5, -88, -115, -114, 99, 33, 119, -124, 113, -114, 117, 88, -88, 91, 65, 23, -4, -118, 55, -80, -6, -79, -35, -27, -45, -26, -15, -63, 22, -62, -6, 4, 34, 108, 42, -39, -120, -76, 108, 2, 13, 44, -68, -68, -90, -51, 99, 68, -72, 78, -26, -111, 74, 106, 44, 6, -97, 2, -67, -84, -7, -84, 70, -115, 95, -24, -77, 86, -67, 98, 122, 17, -45, -127, 10, 81, 39, 99, 70, 116, -58, 66, 23, 37, 54, 44, 94, 80, 121, -13, 24, 2, -103, 67, -9, 11, -47, 27, 51, -9, 76, 104, 112, -111, -87, 66, 51, -48, -21, 122, -83, -98, 91, 121, 29, 67, 16, 70, 71, 99, 58, 109, 36, 27, -85, -61, 87, -31, 10, -78, 66, -29, -37, 100, 93};
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
    msg.setTimeStamp(0.520314223629);
    msg.setSource(57779U);
    msg.setSourceEntity(84U);
    msg.setDestination(13546U);
    msg.setDestinationEntity(253U);
    msg.type = 82U;
    msg.speed = 35455U;
    const char tmp_msg_0[] = {109, -83, -69, -86, -44, 34, -16, -55, 10, 60, 8, -94, -42, -97, 2, -54, -47, 80, 89, -53, 125, -63, -124, -34, 36, 78, -106, 28, -116, -73, -6, -41, -118, -124, -25, -65, 5, 5, -14, -75, 103, -22, -50, 29, 10, -67, -48, 70, -23, 69, -26, -88, -30, -74, 13, -76, -52, -59, -23, -34, 4, 114, -33, -25, -85, -77, -53, -27, 58, 63, -42, 0, -2, -28, 5, 15, -10, -78, -15, -27, 42, 24, -68, -1, 115, -22, 16, -126, 19, -17, 100, -70, 98, 10, -56, -9, 88, 50, -13, 18, -90, 48, -124, 47, -25, -84, -57, 52, 108, 76, 63, 104, -2, 76, 41, -90, 9, 9, -105, -64, -35, 12, 37, -54, 5, -96, -47, 23, 88, 75, -64, 10, 87, -25, 55, 86, -15, -11, -67, -126, 13};
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
    msg.setTimeStamp(0.676189891617);
    msg.setSource(7089U);
    msg.setSourceEntity(5U);
    msg.setDestination(44790U);
    msg.setDestinationEntity(37U);
    msg.type = 205U;
    msg.speed = 10068U;
    const char tmp_msg_0[] = {-55, 47, 103, 96, -82, 99, 71, -16, 39, -108, -115, -94, 41, 36, 118, -121, -104, -100, 28, 116, -17, 102, -85, 30, -60, -61, -104, 85, 113, -94, 75, 18, -119, -85, -69, 105, -118, -42, -55, 76, 58, 106, 103, -36, 47, 28, 108, -9, -91, 76, 48, 22, 60, 22, 41, -13, 28, 109, -110, 4, -119, 62, -28, -58, 115, 69, -67, -100, -36, 36, -57, -9, -17, -39, 84, 64, 36, -35, 52, 111, -44, 22, -36, -91, -48, 48, -13, 7, 2, 67, -73, -93, -125, 81, 51, -9, 6, -90, -12, -105, -1, -11, -127, 118, 14, 67, 51, 62, 2, 84, 16, 42, -1, 102, -75, -61, -67, 94, -53, 74, -8, -1, -73, 57, 90, 56, -65, -16, 5, 7, 54, 124, 91, 61, 16, -33, 47, -107, 2, 23, 79, 13, 7, 58, -102, 101, 45, 37, -15, 125, 81, 66, 92, -1, -118, 96, 53, 90, 81, 70, -66, -117, -59, -92, 36, 24, -26, -115, 123, -82, -44, 11, -5, -85, -17, -82, -103, 125, 64, 32};
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
    msg.setTimeStamp(0.170103831311);
    msg.setSource(63241U);
    msg.setSourceEntity(41U);
    msg.setDestination(48408U);
    msg.setDestinationEntity(71U);
    msg.op = 143U;
    msg.tas2acc_pgain = 0.107356947685;
    msg.bank2p_pgain = 0.430270931803;

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
    msg.setTimeStamp(0.823706720408);
    msg.setSource(24198U);
    msg.setSourceEntity(116U);
    msg.setDestination(65087U);
    msg.setDestinationEntity(207U);
    msg.op = 116U;
    msg.tas2acc_pgain = 0.19178237195;
    msg.bank2p_pgain = 0.938363529215;

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
    msg.setTimeStamp(0.169300025912);
    msg.setSource(14047U);
    msg.setSourceEntity(242U);
    msg.setDestination(11534U);
    msg.setDestinationEntity(60U);
    msg.op = 109U;
    msg.tas2acc_pgain = 0.751526896072;
    msg.bank2p_pgain = 0.666826787584;

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
    msg.setTimeStamp(0.938048260863);
    msg.setSource(19863U);
    msg.setSourceEntity(11U);
    msg.setDestination(35083U);
    msg.setDestinationEntity(214U);
    msg.available = 3955150643U;
    msg.value = 5U;

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
    msg.setTimeStamp(0.789666428279);
    msg.setSource(5150U);
    msg.setSourceEntity(12U);
    msg.setDestination(46832U);
    msg.setDestinationEntity(142U);
    msg.available = 357278421U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.704747558009);
    msg.setSource(6339U);
    msg.setSourceEntity(58U);
    msg.setDestination(52168U);
    msg.setDestinationEntity(30U);
    msg.available = 695209583U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.37597526045);
    msg.setSource(34731U);
    msg.setSourceEntity(41U);
    msg.setDestination(21630U);
    msg.setDestinationEntity(165U);
    msg.op = 85U;
    msg.snapshot.assign("ARPIZHXXVWMBJMNDFHKGJTNTYOPVSQAYAGCZMZOIRFDDQWZRHJMTYOYJBYKSSRC");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.481700082403;
    tmp_msg_0.i = 0.380463946272;
    tmp_msg_0.d = 0.476598798262;
    tmp_msg_0.a = 0.479044636898;
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
    msg.setTimeStamp(0.303145668301);
    msg.setSource(46717U);
    msg.setSourceEntity(187U);
    msg.setDestination(2749U);
    msg.setDestinationEntity(72U);
    msg.op = 243U;
    msg.snapshot.assign("PRSQEPFKRUXEZOGZFIQLHDNIAYQMKNGWGEJQZHGDCMIGIDBYRWJCILMRTLTVQEOWBUPTUNLYHFNTL");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WRCGWQHIVWMTPELPPUEUURQXCD");
    tmp_msg_0.dist = 0.474815530906;
    tmp_msg_0.err = 0.573362708645;
    tmp_msg_0.ctrl_imp = 0.105763251642;
    tmp_msg_0.rel_dir_x = 0.544747795841;
    tmp_msg_0.rel_dir_y = 0.484292199817;
    tmp_msg_0.rel_dir_z = 0.0940374497827;
    tmp_msg_0.err_x = 0.825880019347;
    tmp_msg_0.err_y = 0.877558660139;
    tmp_msg_0.err_z = 0.300151611663;
    tmp_msg_0.rf_err_x = 0.860465824828;
    tmp_msg_0.rf_err_y = 0.36203687969;
    tmp_msg_0.rf_err_z = 0.647491233079;
    tmp_msg_0.rf_err_vx = 0.0913359998961;
    tmp_msg_0.rf_err_vy = 0.70655553284;
    tmp_msg_0.rf_err_vz = 0.731469469731;
    tmp_msg_0.ss_x = 0.560757507436;
    tmp_msg_0.ss_y = 0.554421245677;
    tmp_msg_0.ss_z = 0.973235310919;
    tmp_msg_0.virt_err_x = 0.705459246125;
    tmp_msg_0.virt_err_y = 0.862206404777;
    tmp_msg_0.virt_err_z = 0.549887226825;
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
    msg.setTimeStamp(0.952230777525);
    msg.setSource(53622U);
    msg.setSourceEntity(192U);
    msg.setDestination(63147U);
    msg.setDestinationEntity(80U);
    msg.op = 220U;
    msg.snapshot.assign("CVVHPQRUWYFIDEUZVCKMQRLKQYDEPBUBGCGHKAMMCGTJINCOGWNJWTTNQNVEOUWDSSWDTQORZ");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.0750971713095;
    tmp_msg_0.y = 0.137580308823;
    tmp_msg_0.z = 0.278279936741;
    tmp_msg_0.k = 0.361319597135;
    tmp_msg_0.m = 0.508300698101;
    tmp_msg_0.n = 0.761127321283;
    tmp_msg_0.flags = 32U;
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
    msg.setTimeStamp(0.819148289808);
    msg.setSource(30607U);
    msg.setSourceEntity(112U);
    msg.setDestination(4626U);
    msg.setDestinationEntity(229U);
    msg.op = 65U;
    msg.name.assign("ZAUAVOICZOOZMPNAAFUTEPVNXSILJADRVUXVYKTWYLIWJBMITILYBRXWLHSSRLABPSZVERLHKVEEZFWVSGECUHTQMZVFTHZWCXHGVDHSAOUBYHBORMTGTWQZQWCOEZCJDEGKEENRLPNAFPBCRDTTNKGCXUBBQKWDIUDPWZLXSGYQCAXJQJSRKPMRAUDLGDGNXFCMGJKOKIJYSJXRHCMBQEKMFNFDSOKBGIYOJMJFUXQWQYFMPIYQNNN");

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
    msg.setTimeStamp(0.799756948483);
    msg.setSource(2586U);
    msg.setSourceEntity(151U);
    msg.setDestination(61124U);
    msg.setDestinationEntity(173U);
    msg.op = 92U;
    msg.name.assign("RRBELEPWNTYHDCIVQAEMNSVKMMNIKGCGEXXRQXRDDTIFSJXKIYSIHRGDUNCRDKLWFUCSXQTWYGTZAMLHDKRWFSJHWWRYVEYDBZIOXEFSLVIMAELAIFMMVPOZBFQBEBULAOOOTDS");

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
    msg.setTimeStamp(0.076622188671);
    msg.setSource(56495U);
    msg.setSourceEntity(20U);
    msg.setDestination(51085U);
    msg.setDestinationEntity(60U);
    msg.op = 212U;
    msg.name.assign("XADYFIRHDAMDSUFELKLCQOAGYMBBMFNSLEZZMVUJSRPGKDOOPADQLHAZVQCXVINYUHXIMPWCYMNJBHCXPSOOGRMHZQBHXFPLVGWERQEQYBYKYAEZAAUNRTLZXCKRKPFRZNIRSPJWSSSXTDDFVOWTVIBEFJQPXPMFVHAJTAGUGDHENTKZIWGVWOBYTWHITBJMKWQRUKHWJEJUFYX");

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
    msg.setTimeStamp(0.70362647412);
    msg.setSource(58679U);
    msg.setSourceEntity(45U);
    msg.setDestination(23283U);
    msg.setDestinationEntity(136U);
    msg.type = 7U;
    msg.htime = 0.742280409882;
    msg.context.assign("BHMVTXNQTHENLGMXJMPPQMVYCNBMVSLAZKUAZUJPDSDCWOAZALMTCVGJDZHGKWISPBDMCOURSXWIROVRLBJLJEQZHXMIZIEOJTUEXOEZORUGSWHJKFTOKYGFRWACFQEFBTISUMSKYRYCXGNAKFXYHWPTNAFPXUEXDBIE");
    msg.text.assign("YPVBXTTAPTEAVQWYVHRWDLONGPOPJPUQAZKGN");

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
    msg.setTimeStamp(0.19211831973);
    msg.setSource(43664U);
    msg.setSourceEntity(176U);
    msg.setDestination(48393U);
    msg.setDestinationEntity(227U);
    msg.type = 28U;
    msg.htime = 0.619505762944;
    msg.context.assign("MXCIKQOCZNWETPOLTLAXICOACAEBAYSHBVYCTRJBDLYBBUASWDGPBKASKVBMYENTTLUUGUFDECEGOPJFMKNRHJWUYHRRQQAQZHRIIPDJQHNQJFGIUNNMSLLGBVWRMLUVAXRSNLSUBGGEOHIFXQZVZXIGPCZLDYTIEHOGKAJIJA");
    msg.text.assign("TDMKMLTDDXWHNEEQISSNORKHVSUNLJGKDOKUHOAVGLWIFSWJYFRYUUPKBFFVVYXGSJCJAENRAZABNBXUPGXEFKRAXTHNZWPCOZVGI");

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
    msg.setTimeStamp(0.961847665763);
    msg.setSource(56719U);
    msg.setSourceEntity(198U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(251U);
    msg.type = 225U;
    msg.htime = 0.0260351262666;
    msg.context.assign("PYAMWCDIJFKHJLYQOYKBKVVNYQUNNYMGBVPXNDFCPMXQL");
    msg.text.assign("PQPKQDFCZYSYPDBZYLEFPQLWAQSLUXOZSZTRZLVJKCUJRVTHVJFPIXGCHWJWKPMSRMGNHKTGYDOAULTJVNKJROJXNGJYXAOCQWNBRIONUFVVHXUFQXMYCKDUVOWGEQOZXTTYNGYCEMIJNLKOHSIVZSTAITEZEBCGCKEBHES");

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
    msg.setTimeStamp(0.364684806055);
    msg.setSource(55418U);
    msg.setSourceEntity(104U);
    msg.setDestination(62019U);
    msg.setDestinationEntity(152U);
    msg.command = 37U;
    msg.htime = 0.138484372226;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 101U;
    tmp_msg_0.htime = 0.439047105608;
    tmp_msg_0.context.assign("MKDAHKEMGZRASINAMSP");
    tmp_msg_0.text.assign("SJECUTEULVBXHJXCLJAASRTAVHAIBZDHDKEQFQVIKWVUGYGATCMAVELGXQZSMDBAPGCBMZIYDRRRSTZPPGHJMIXZDFHBIYHYFXWGTMXJSOXOAZAQCEXRICD");
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
    msg.setTimeStamp(0.660994526745);
    msg.setSource(16488U);
    msg.setSourceEntity(58U);
    msg.setDestination(8218U);
    msg.setDestinationEntity(222U);
    msg.command = 231U;
    msg.htime = 0.351623007215;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 220U;
    tmp_msg_0.htime = 0.94675659234;
    tmp_msg_0.context.assign("DHKULDKRROOQGBFLGNIGBIJXGCSJECERIYUJCHRWBZUNVKTVNKWAFFKWATZNCSSLRQEFPKBBZLXYQSSNECWZXFTXLOQWTTAJHYSVHITMSBBOUPPHICGFNWYUQLANCQIYVBSHOGFUPPIUOMRERMYLIAMMWVZYCJDZUYQHMVDRLRNTDWIVZZEXJQLMKAPUMCQPGIAJFVDHDGYTEMKHKC");
    tmp_msg_0.text.assign("QXECLKMWLSMHEWDDACFDCUKRCGLIUWZDXQOWSMYJDHGLQXWVETBVUCXLSAYXBJJGKHNFEHDKVVHAHVAFVACOIGAINBKKDQNOZPTJIJVKSPNUOPRQJMQDATQYJORFABSBSMSIXOOCKTEOUTYLGWTIECEQRYFRZFIAPTPNYPRRHMKFZNZXZLGRSVNZYFMTMEJXXPDIOBD");
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
    msg.setTimeStamp(0.194749585454);
    msg.setSource(59987U);
    msg.setSourceEntity(144U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(19U);
    msg.command = 233U;
    msg.htime = 0.41890301754;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 27U;
    tmp_msg_0.htime = 0.480967440189;
    tmp_msg_0.context.assign("QEYGNTWRELMBMBNHZCPOVWBBWPLTDWOGSOISUFUVZWTOZQZVVRJYCRMIPDRLGAUHAOSKPNTAJXOYPTEZLSCVUAKIWMTHPJHRMMCIAQKDKVGLE");
    tmp_msg_0.text.assign("TPCGDITSBKRKYNXFAEFCHWUAEARDTWBBNSIMGZGVOGKCFWHKGSUTHHVFEOEMHQJYVJQDWMFLFBZPRNTKCWIYJSRQLQVEAIXEJSMGHXYZDKB");
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
    msg.setTimeStamp(0.359720158768);
    msg.setSource(42420U);
    msg.setSourceEntity(172U);
    msg.setDestination(988U);
    msg.setDestinationEntity(104U);
    msg.op = 219U;
    msg.file.assign("WRGYAWAYIMZPCWXSTHOYIQAMHCRTHUCBZKJLZWZKVAZEQAGEKVOSGHBPPQWMMFJNNXLEDBNXIPVLTDUKCUBYBJUEVPLQUXTDSJWAXDNXFJFTTPHFDYJQDVXPWCMJUGPSNIORYQKQVJPHDFRTVFBHYNZGBGOBLEFKUDKOPHMURTMYFDALTUFCWCOXBIZBUMHFQEVSKAHNLKECLJMRACKYGVIOGSS");

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
    msg.setTimeStamp(0.158948871655);
    msg.setSource(15714U);
    msg.setSourceEntity(104U);
    msg.setDestination(17679U);
    msg.setDestinationEntity(111U);
    msg.op = 127U;
    msg.file.assign("FXRNPYNLLDVGKNOCBCWBHJZEHHMNRFGCDSJGBKHGZHCRHBOIWJKMECHMAWVVWZPFVYKBVJMGMLQIXSETZDWQITYXDXIWRDUQMCUZKTPFFAKEVXDPBQYROCEJBCXPNNZYSWURAQQIQVUIOJSOUUGLAFXLAGORUDMRYIJENEKVNOQLWRSBZFLBYISZGTXLILTHXSTESOMKOAG");

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
    msg.setTimeStamp(0.514265663227);
    msg.setSource(1803U);
    msg.setSourceEntity(135U);
    msg.setDestination(53075U);
    msg.setDestinationEntity(208U);
    msg.op = 68U;
    msg.file.assign("DPUXJKVXTCDUGRMEZFOSOBVCNUMNHDSFQKBNOJIBOXXPGJQTJNKCARPSRIXBGVCCEPBYEHWTULWBJWPLGFJWFRYNAYRHQYOUSWALIOSQMNGGKCEWDIAXFUSNZAQUISVTAVZZMLELCZHXGLZITTCVUPWTAVOBULLHIAWNRHYSQBMLORVDOCJPHEQDYVVJYAYTMIZSMXFKIFPRRZYFGZMZOQINHNBWD");

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
    msg.setTimeStamp(0.922461669511);
    msg.setSource(39375U);
    msg.setSourceEntity(237U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(114U);
    msg.op = 30U;
    msg.clock = 0.261142226344;
    msg.tz = 54;

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
    msg.setTimeStamp(0.582888986049);
    msg.setSource(9771U);
    msg.setSourceEntity(149U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(66U);
    msg.op = 5U;
    msg.clock = 0.982181828477;
    msg.tz = -122;

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
    msg.setTimeStamp(0.187552664353);
    msg.setSource(34531U);
    msg.setSourceEntity(206U);
    msg.setDestination(58039U);
    msg.setDestinationEntity(240U);
    msg.op = 215U;
    msg.clock = 0.73116106109;
    msg.tz = 70;

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
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.407886501475);
    msg.setSource(36658U);
    msg.setSourceEntity(53U);
    msg.setDestination(29627U);
    msg.setDestinationEntity(182U);
    msg.conductivity = 0.974328318556;
    msg.temperature = 0.146766570377;
    msg.depth = 0.834503726844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.731254065);
    msg.setSource(49910U);
    msg.setSourceEntity(52U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(5U);
    msg.conductivity = 0.447070134062;
    msg.temperature = 0.0698869824284;
    msg.depth = 0.255964755219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.0400560942309);
    msg.setSource(53749U);
    msg.setSourceEntity(125U);
    msg.setDestination(61482U);
    msg.setDestinationEntity(245U);
    msg.conductivity = 0.397851684264;
    msg.temperature = 0.358658369332;
    msg.depth = 0.403248578813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.602561049186);
    msg.setSource(11841U);
    msg.setSourceEntity(34U);
    msg.setDestination(43458U);
    msg.setDestinationEntity(103U);
    msg.altitude = 0.649696776301;
    msg.roll = 51527U;
    msg.pitch = 34251U;
    msg.yaw = 47259U;
    msg.speed = 28603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.762726797468);
    msg.setSource(18234U);
    msg.setSourceEntity(113U);
    msg.setDestination(36188U);
    msg.setDestinationEntity(92U);
    msg.altitude = 0.315944102874;
    msg.roll = 55940U;
    msg.pitch = 26719U;
    msg.yaw = 31436U;
    msg.speed = -2579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.883168259728);
    msg.setSource(31515U);
    msg.setSourceEntity(31U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(10U);
    msg.altitude = 0.838528220722;
    msg.roll = 15837U;
    msg.pitch = 12480U;
    msg.yaw = 29884U;
    msg.speed = 2821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.53399048127);
    msg.setSource(46801U);
    msg.setSourceEntity(80U);
    msg.setDestination(38645U);
    msg.setDestinationEntity(103U);
    msg.altitude = 0.949208940258;
    msg.width = 0.760082739268;
    msg.length = 0.0569595326371;
    msg.bearing = 0.539273133217;
    msg.pxl = 811;
    msg.encoding = 98U;
    const char tmp_msg_0[] = {46, -2, -55, -11, -18, 23, 43, 101, 13, -10, 101, 66, 78, 73, 121, -84, 90, -20, 36, -38, -91, 65, -58, 34, 124, 62, 103, -38, 49};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.0655043331954);
    msg.setSource(59551U);
    msg.setSourceEntity(215U);
    msg.setDestination(6969U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.48256026077;
    msg.width = 0.540041958528;
    msg.length = 0.618620307224;
    msg.bearing = 0.272733105742;
    msg.pxl = -28859;
    msg.encoding = 97U;
    const char tmp_msg_0[] = {-82, -74, -106, -74, -3, -108, 42, 109, 102, -28, 24, 90, 124, -62, -120, -53, 46, -20, 70, -13, -87, 94, 114, 59, -69, 103, 75, 56, 108, 37, -81, -71, -48, -116, -40, -103, -105, -110, 2, -100, -63, -123, -70, -28, -85, 100, -56, -65, -89, 14, -92, -57, 45, -9, -99, -104, 71, -5, 123, -93, -102, -97, -39, 37, -97, 104, -64, -33, 39, -68, -37, 104, 93, 19, 125, -106, 74, 53, 30, -89, -69, -128, -27, 113, 36, 43, -6, -110, 101, 20, 84, -69, -105, 10, 63, 7, 75, 9, 87, -111, -75, 76, -89, -22, -119, 85, 61, 59, -124, 5, -49, -76, -57, -74, -100, 82, 58, -124, -43, -69, -101, -73, -16, 32, -75, -94, 125, -28, -48, 53, 7, -64, 2, 119, -85, -40, 2, -42, -105, -41, -10, 8, -85, -37, 43, -43, -83, -73, -13, -47, -27, 103, 102, 85, 123, 112, -108, 112, 16, 54, -40, -9, -74, -121, 21, 56, 22, 110, 80, -97, 125, -118, -45, 52, 82, 123, -3, 42, 77, 14, 103, 126, 126, -35, -73, -23, 37, 37, -7, -77, 122, -78, -99, -9, 119, -104, -96, 26, 62, 68, -1, 9, -22, -20, 125, 119, 121, -98, 112, 5, -86, -58, -110, -99, -3, -83, -31, 8, -13, 24, 9, -26, 124, 16, 45, -40, -31};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.225765287332);
    msg.setSource(28811U);
    msg.setSourceEntity(121U);
    msg.setDestination(18276U);
    msg.setDestinationEntity(245U);
    msg.altitude = 0.0430205970958;
    msg.width = 0.987780136923;
    msg.length = 0.91652783945;
    msg.bearing = 0.0948651585487;
    msg.pxl = 8063;
    msg.encoding = 18U;
    const char tmp_msg_0[] = {-90, 23, -63, -103, -79, 31, -66, -24, -29, 119, 11, 117, -101, 46, 101, -94, 126, -55, -38, 82, -37, 1, 64, 68, 109, 30, -63, 81, 93, -122, -21, -35, -44};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.845529989898);
    msg.setSource(6448U);
    msg.setSourceEntity(180U);
    msg.setDestination(22440U);
    msg.setDestinationEntity(150U);
    msg.text.assign("NMVBPIKQJLNJBQIJLDFGGSGNHWHILANQMYUYMAFAGWRRSMM");
    msg.type = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.53403856391);
    msg.setSource(44422U);
    msg.setSourceEntity(221U);
    msg.setDestination(29300U);
    msg.setDestinationEntity(3U);
    msg.text.assign("THXQVNCQONAGSXCQCZMQDBWYNQAXFZFXXUNEOCVNISBKEZANIXPMMIMZBEPEPUHVTYWQJMJONZYVMHDCUYV");
    msg.type = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.0893785595943);
    msg.setSource(24673U);
    msg.setSourceEntity(167U);
    msg.setDestination(59671U);
    msg.setDestinationEntity(41U);
    msg.text.assign("UPVPFMVMEZJCMMUQSQMAXFVHTAQUPNTBPWQRQVFSZWPDHZGHNNQDMXVONZNFIOIHHBCKGBAZCNJIEBWYJFMGVGYLWODJOSXRNSWLYLHITJDEGAZENXADTXDAQPQXPXUASVHECKLLTOILRWFZIKYHKRLOHCKIKOZPBRYEOUMBFVJYIHSCBTFBQUYSRXOITJ");
    msg.type = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.819326734304);
    msg.setSource(28832U);
    msg.setSourceEntity(220U);
    msg.setDestination(30175U);
    msg.setDestinationEntity(158U);
    msg.parameter = 30U;
    msg.numsamples = 172U;
    msg.lat = 0.368609920861;
    msg.lon = 0.571500360711;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.572760760297);
    msg.setSource(13181U);
    msg.setSourceEntity(71U);
    msg.setDestination(30218U);
    msg.setDestinationEntity(238U);
    msg.parameter = 245U;
    msg.numsamples = 44U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 47834U;
    tmp_msg_0.avg = 0.129556183337;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.721399568433;
    msg.lon = 0.911749939006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.348704879006);
    msg.setSource(20441U);
    msg.setSourceEntity(160U);
    msg.setDestination(59117U);
    msg.setDestinationEntity(179U);
    msg.parameter = 141U;
    msg.numsamples = 25U;
    msg.lat = 0.529836505707;
    msg.lon = 0.349789329086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.357028010604);
    msg.setSource(23904U);
    msg.setSourceEntity(166U);
    msg.setDestination(33583U);
    msg.setDestinationEntity(62U);
    msg.depth = 30687U;
    msg.avg = 0.854782563837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.370529440457);
    msg.setSource(64500U);
    msg.setSourceEntity(216U);
    msg.setDestination(31239U);
    msg.setDestinationEntity(214U);
    msg.depth = 27873U;
    msg.avg = 0.80605449107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.429235227925);
    msg.setSource(20963U);
    msg.setSourceEntity(127U);
    msg.setDestination(25783U);
    msg.setDestinationEntity(70U);
    msg.depth = 64982U;
    msg.avg = 0.760280700925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
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
    msg.setTimeStamp(0.11944886006);
    msg.setSource(58401U);
    msg.setSourceEntity(97U);
    msg.setDestination(20010U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.795659166687);
    msg.setSource(60396U);
    msg.setSourceEntity(243U);
    msg.setDestination(11814U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.862553700537);
    msg.setSource(38300U);
    msg.setSourceEntity(130U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.795854799705);
    msg.setSource(8053U);
    msg.setSourceEntity(218U);
    msg.setDestination(9200U);
    msg.setDestinationEntity(108U);
    msg.sys_name.assign("RHESUIOJJYPZEEOMAJUHOSFDZMRJSFYBRF");
    msg.sys_type = 44U;
    msg.owner = 48761U;
    msg.lat = 0.526417350835;
    msg.lon = 0.298834770053;
    msg.height = 0.777572853497;
    msg.services.assign("WAGCJLKLBENYTZZIUYMWZJTOHFECTUPYBQLGWPTFUEZCRTRYDJJSGDZQHUPSQGBXBSKQEUDWVROXYTISMAMFPIFPUKDHRSTBDCRWWJKOETAFAJKGRKSNOSAFDCMLVNEIOIHNHDQDCTXLMWNQFDGVUQWNHILDULZMPJJXROICCXELATMYQGVNBYZPVZOXBXAXQXSKBECGKRGROVHFAWOLY");

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
    msg.setTimeStamp(0.294156572036);
    msg.setSource(1187U);
    msg.setSourceEntity(105U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(207U);
    msg.sys_name.assign("CBZANBKHKLIJMBVZTNFHTRYDIRFUMODJQPZIZHNJSNCMDTGFPNTHQPOPUARIZIROXELFPXKKUMHWDJYRMEQNSMZGGKLSONFCCULHPCMYTWKLADWVSXU");
    msg.sys_type = 168U;
    msg.owner = 14944U;
    msg.lat = 0.0517232359899;
    msg.lon = 0.866216057645;
    msg.height = 0.483197674624;
    msg.services.assign("QBDZSEFKRIWUHPZCRUTJFVJGUSYTFVBNHOAGWBAQAZXDXWPQSTWFVLOEINCNKKAPEZYVVZLMEAPGOUGTONDGMFBENCEFZXNBILLMULYHHKTQDHACIYHYIJUDMPRYSHULMXCHKCRVNJCFXPDYRIGNTFNQROKSOVARIPOAYBLSTICGIEEFLOJQFQQYJWDORQWZJJSAMWKVHGTDUWWQMPXPDEGUCBBXHAKRZZYESVMIL");

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
    msg.setTimeStamp(0.0221433578709);
    msg.setSource(38082U);
    msg.setSourceEntity(150U);
    msg.setDestination(5149U);
    msg.setDestinationEntity(128U);
    msg.sys_name.assign("ZXYDZLBJOUZCZFAIYNKUFUMVCZGKSWVPEKNDLABKCJGAVOQQLFZMBLRNIHDKIMWXPELTHUDKKZVCNAMGQXWSWOTWCBLIJEWYPWXPDZWRICQJPVHRTBLGHNXBJLDIGBKMEODESUVJUXOSFDBSYGHIXISHLHSDQXEEYGSCUMONWXPKMDQBPVPZTSBYENFQFMTEJRAFEJTYP");
    msg.sys_type = 88U;
    msg.owner = 51161U;
    msg.lat = 0.270127205521;
    msg.lon = 0.650664609987;
    msg.height = 0.28259198881;
    msg.services.assign("QPFBAWDEGMHQFDYQUJJGPRNEYSQOIORSTOKJAGRCJRTVPWGRBMODTSMEGRHYTVKFADULESHLUUXXDJQLTPTKRDDWMMZJIERBAXVTCYILXMLJWIPCIOWKCQFUXWWBDNPZNHHYENCRKCMPLSOOUHIGEZOX");

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
    msg.setTimeStamp(0.871729576704);
    msg.setSource(61828U);
    msg.setSourceEntity(243U);
    msg.setDestination(39332U);
    msg.setDestinationEntity(69U);
    msg.service.assign("YHSEOZFBABSJLAUPJQTAZLQGXMEBCEZWPSMYZEHFSYTFSCPNUGDGCMVDBJVBHNWGLDQFPXOLXYXYRNTYXSQ");
    msg.service_type = 10U;

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
    msg.setTimeStamp(0.400897928389);
    msg.setSource(63690U);
    msg.setSourceEntity(32U);
    msg.setDestination(56568U);
    msg.setDestinationEntity(190U);
    msg.service.assign("LRPBMUCWRAGBZICUALFGKWXDZBRPWBEUYMFEGKQGVSURUYYTPXHMCUOQSORBLWLIFXVPKTRWQYTGRKCKSNHNDSEWZKXWEFVXRIOHESTZBHUDUJWSHTFXQNPYRKCWNPQTHJFFEHXJMBAJZ");
    msg.service_type = 140U;

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
    msg.setTimeStamp(0.400805935218);
    msg.setSource(16467U);
    msg.setSourceEntity(41U);
    msg.setDestination(58256U);
    msg.setDestinationEntity(112U);
    msg.service.assign("NQOCRUYHVCTTYTADNEMOQOS");
    msg.service_type = 245U;

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
    msg.setTimeStamp(0.38058596291);
    msg.setSource(35703U);
    msg.setSourceEntity(223U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(214U);
    msg.value = 0.536588523703;

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
    msg.setTimeStamp(0.537499784108);
    msg.setSource(60954U);
    msg.setSourceEntity(247U);
    msg.setDestination(10558U);
    msg.setDestinationEntity(89U);
    msg.value = 0.587702445984;

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
    msg.setTimeStamp(0.995982444798);
    msg.setSource(11197U);
    msg.setSourceEntity(112U);
    msg.setDestination(33231U);
    msg.setDestinationEntity(74U);
    msg.value = 0.252278422765;

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
    msg.setTimeStamp(0.0793056802385);
    msg.setSource(58346U);
    msg.setSourceEntity(91U);
    msg.setDestination(34042U);
    msg.setDestinationEntity(241U);
    msg.value = 0.485612005616;

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
    msg.setTimeStamp(0.60642761503);
    msg.setSource(2219U);
    msg.setSourceEntity(168U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(170U);
    msg.value = 0.419896091421;

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
    msg.setTimeStamp(0.548793054314);
    msg.setSource(21224U);
    msg.setSourceEntity(229U);
    msg.setDestination(34284U);
    msg.setDestinationEntity(81U);
    msg.value = 0.879259448295;

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
    msg.setTimeStamp(0.217788965107);
    msg.setSource(26259U);
    msg.setSourceEntity(99U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(4U);
    msg.value = 0.45003679167;

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
    msg.setTimeStamp(0.631952625914);
    msg.setSource(4664U);
    msg.setSourceEntity(94U);
    msg.setDestination(56234U);
    msg.setDestinationEntity(252U);
    msg.value = 0.748593909404;

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
    msg.setTimeStamp(0.330831495886);
    msg.setSource(52313U);
    msg.setSourceEntity(131U);
    msg.setDestination(59824U);
    msg.setDestinationEntity(130U);
    msg.value = 0.855963107286;

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
    msg.setTimeStamp(0.340340695552);
    msg.setSource(23759U);
    msg.setSourceEntity(199U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(57U);
    msg.number.assign("KTVQRKKAXDEHPFEZYPYVCTIRGCGBMJZEVIPXZYEDJLIEGWRUSBFKOKKEHDHYMMIBVUMGQUQBNTVWZPCRPOJWJIJLUZHHFHUCGXDXCQAFZOVNUMEKSILOYSWIYASFDCMWHUAQYDJDPRSSIJXNSTQFMUATXHTQGRYBVNNFXLMM");
    msg.timeout = 4077U;
    msg.contents.assign("XUMRANPNCDOXGWWYDFRLTCVWRACNYDWYTELTTUWKZAMLTUFZKRIZTORWUYNAULGGQIQYKSENLCEFSLZZDDCMOLJKHRHSTQFYSCPOEGJTBKIVMEJYXQORJEGFXRZLBAQMVOWFHGFQWDCUAUNCHHJQPGUSPZKLEXHJMCA");

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
    msg.setTimeStamp(0.70012263436);
    msg.setSource(4999U);
    msg.setSourceEntity(142U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(150U);
    msg.number.assign("QPWQUVHSWMYWYLBWRTHFTJXZORMDBRHPTVMAXIRCJTLEABCLZCGRVFRRDZKKELRVZINMBUCUBKHZENNPGJYTNUIKMJWMQNOBGZOPMVSTBFJASWUKDIWYSMDVXGHIFLIQOEDDBHRBYXYLKNEJTAPMAMUQOQTO");
    msg.timeout = 25794U;
    msg.contents.assign("BVNOAPZFDSKEBNHRAMGIVPPEDTIGVKMPRFUBTXKPRVLYMZUBLFWTJSYYKXLAOKEMMAQFQYYGMIPKIHFQNNHDPEVYUUJKRQSETDGAWWWSBILBAD");

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
    msg.setTimeStamp(0.764439355065);
    msg.setSource(25956U);
    msg.setSourceEntity(93U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(60U);
    msg.number.assign("MTJWXAVDYKWHYCWFRAMRCGIRCEMCOAZSXHPYKUSPUJGKHEUKOZYLSBPVRANZELLTJLLQDMNJXONZXRQHIEVXYWBOMNBHINQGHMFUFOKNLYWNIULQTHASCTFFMBJIJRGZRPWDDBGRWWMCCQNLJKYDZSTPWGUSTBSVGI");
    msg.timeout = 50545U;
    msg.contents.assign("DWHPBYWRJRLZMOTOFOFZAXJQKVBJCRKDWLHKODBKNIQJPDVHCVITYCCVGRYXAJVRLBDPATRNHUYLVKSECAVXXGQDLGLYSEUSHHTCGLCCABGEIJTIOSDMTGQOYXUPFZPSQF");

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
    msg.setTimeStamp(0.00751088672496);
    msg.setSource(59777U);
    msg.setSourceEntity(236U);
    msg.setDestination(29851U);
    msg.setDestinationEntity(152U);
    msg.seq = 2797980202U;
    msg.destination.assign("QXVHQXTUBURGYERDKLSN");
    msg.timeout = 35917U;
    const char tmp_msg_0[] = {96, -87, -85, 124, 57, 14, -87, -127, 64, 42, 58, 6, 10, 32, 43, 84, 86, 78, 46, -83, -111, -102, 65, 109, -40, -25, -47, -31, -94, 17, -37, 87, 75, 73, 22, 24, 119, -57, -13, 90, 50, -30, 105, 53, -72, -105, -16, -87, 90, 73, -34, 45, 75, -16, -40, -70, 98, -30, -44, 9, 116, -24, 125, -94, -82, 115, 79, -97, -81, -100, -32, 19, -48, -113, -57, -63, 73, -61, 61, 124, 41, 84, -51, -116, 50, 46, 90, -58, 121, -81, 115, 67, -41, 66, 119, -127, -26, -40, -45, 16, -35, -75, 67, -127, -40, 26, -70, 79, -95, 30, -42, -59, -10, -62, 45, 22, 82, 25, 92, -97, 20, -17, 93, 34, 49, 5, -28, 89, -62, 56, -85, 2, -43, 88, 104, -44, 108, -109, -125, 33, 122, -115, 107, -41, -66, 105, -38, 33, 32, 112, -94, -77, -42, -35, -68, -41, 9, -46, -21, 77, -53, -68, -99, 30, -42, -66, -23, 48, -77, 125, -118, 24, -50, 92, 17, -104, 85, 124, 121, 21, -17, 67, -12, -86, -74, -38, -17, -1, -46, 82, 42, -5, -22, -23, 5, 121, -60, -107, -64, -28, 101, -33, -47, -116, -68, -20, 101, -74, 9, -1, 3, -42, 66, 30, 121, -82, -51, 100, -90, 27, 3, 107, -70, 17, 113, 73, -117, 53, 104, -117, 82, 106, 29, 5, 101, -106, 58, -5};
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
    msg.setTimeStamp(0.927283479509);
    msg.setSource(61426U);
    msg.setSourceEntity(216U);
    msg.setDestination(18612U);
    msg.setDestinationEntity(235U);
    msg.seq = 1265317828U;
    msg.destination.assign("DODSKTNRIKFPKGBXIWDAJLRAFVWCNLOBBRMCZDIYGQXAZCOAYXYOFEUDMMAVBGQUFUAIHGXCWLPDZUHTVLPSTNOZXBZCLKIVYREXGJUCMOJXHMBUZIMBJWSGFZGDCLJTWHQKJHNZVRCSJXNXEHECTATTXTYMSENRODMLL");
    msg.timeout = 63470U;
    const char tmp_msg_0[] = {-17, 120, -89, -71, 17, -3, 125, 114, -83, -57, -82, -5, 110, 84, 46, 107, 29, 21, 99, -23, -53, -46, -82, 28, 34, 93, 15, -52, -25, -38, -86, 69, -25, -57, -4, -72, 41, -77, 84, 22, -74, -57, 111, 25};
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
    msg.setTimeStamp(0.0378283273443);
    msg.setSource(14922U);
    msg.setSourceEntity(17U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(152U);
    msg.seq = 1331097387U;
    msg.destination.assign("RVUQZMUGNIIULMCJEFWIQGEXYLJ");
    msg.timeout = 45230U;
    const char tmp_msg_0[] = {-49, -43, -10, 110, 28, -68, 102, 26, 34, -67, 62, 37, 12, 110, 53, -39, 87, -127, 108, -86, -102, 99, 45, -66, -11, -118, -86, 88, 53, -7, 31, -43, 107, -122, 86, -114, -10, -74, -102, -61, -22, 7, -3, 105, -52, 62, -86, 115, -22, 118, -87, 77, 84, 105, -7, -8, 75, 4, 31, 88, -25, -72, 77, -30, -118, -18, 1, 72, -65, -114, -40, 2, -23, 65, 64, -29, -96, -59, 53, 115, -77, -49, -114, 77, -105, 121, 97, -32, -30, 11, -38, 6, -85, 44, 43, -119, 121, -21, -91, -88, 11, 52, 118, 100, 70, 119, 74, 10, -86, -128, 15, -119, 55, -72, 66, -16, -32, 126, -26, 12, -37, -128, -66, -91, 115, 89, -24, -56, 67, -44, 67, -82, 108, 84, 95, -40, -48, -118, -65, -17, 14, 97, 88, -29, -92, 76, 24, 59, 102, -109, -116, -7, 33, 6, -90, -37, -82, -11, -119, 1, -11, 59, 65, 110, -41, 95, 24, 66, 98, 72, 55, 113, -19, 112, -67, 57, -121, -83, -20, 29, -1, 31, 86, 107, -43, -6, 6, -75, 87, -66, -111, 112, -68, 104, 63, 126, 105, -20, -98, -94, 72, 64, 110, 118, 18, 86, -128, 25, -5, 126, 18, -119, -29, -113, -11, 103, 4, 79};
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
    msg.setTimeStamp(0.0986136850199);
    msg.setSource(46137U);
    msg.setSourceEntity(125U);
    msg.setDestination(52233U);
    msg.setDestinationEntity(28U);
    msg.source.assign("KHHFJZEMYFISEPAUBPPFBZZQTAFESTIRJHWRVYCYYXJOKKMMOWERIBRGNQMPVFZVLGSTBLEYXPTFKVALZLMGDFMJIGCBYCGJXAUXFUDQZLKMMBFUWLLGGGETQVQWFSYARYMNEIH");
    const char tmp_msg_0[] = {39, -47, 92, 67, -53, 80, 58, -118, -128, 79, 28, -35, 86, 110, 108, 46, 7, -8, 115, -13, 69, 17, -105, 54, 116, 82, -127, -7, -54, -33, -31, -15, -53, 96, -39, -126, -97, -106, -46, 40, -79, -127, 77, 89, -26, -61, 47, -11, 90, 31, 126, 58, -80, -92, 30, 64, 75, -59, -2, -65, 27, 119, 23, 51, 64, 53, -122, 91, -124, 47, 92, 40, -78, 111, -63, -124, 123, -10, 55, -69, -44, -50, 46, 54, -117, -42, -86, -105, -47};
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
    msg.setTimeStamp(0.829011213159);
    msg.setSource(39221U);
    msg.setSourceEntity(25U);
    msg.setDestination(8117U);
    msg.setDestinationEntity(81U);
    msg.source.assign("CIEBRVTNFUOUWBZSZULELMJCMKKVAXXRFOTKQCXAQNVZFQPWFFBBRYUJKOJLZGMRIYHIWHUIA");
    const char tmp_msg_0[] = {-97, -54, -123, 34, -29, -20, 117, 63, -43, 23, 1, -12, 6, 13, -79, -110, -67, -107, 84, -4, 73, -66, 63, -21, -99, -123, -8, -10, 120, 75, 123, -105, -112, -22, 82, 121, 10, -50, 84, 43, -125, -106, -38, -23, 15, -33, 88, -42, 25, 40, -62, 114, -113, 125, 37, 66, -98, -1, -101, -80, -68, 123, -6, 15, -33, 49, -30, 23, -112, 23, 116, 92, -53, 12, 5, 10, 10, -21, 111, -37, -123, -122, 121, 4, -48, -62, 126, -51, -21, 52, -2, 48, -50, -48, -76, -53, 40, 69, -40, 60, -107, 32, 78, -82, -71, 88, 26, 78, -8, -123, 52, 22, 66, 100, 42, -34, -3, -4, -48, -9, 44, 3, -107, 13, -19, 86, 124, 103, -113, 10, -4, -33, -66, -33, -115, -91, -91, 111, 8, -38, 6, 121, 9, 30, 32, -108, -127, 101, 18, -81, -56, -14, -30, 77, 108, -22, 79, -69, -96, 41, 88, 72, 60, -11, -18, 25, 108, 16, 104, 12, -78, -15, -6, -83, 42, -83, -82, 12, -59, 73, 29, 74, -76, 40, -62, -104, 104, -50, 95, 72, -75, -74, -121, 89};
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
    msg.setTimeStamp(0.620161436197);
    msg.setSource(51818U);
    msg.setSourceEntity(203U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(59U);
    msg.source.assign("UUOLZUEKQROTJGKWXLDHLXGKLUSBVKFWZEPXAFVMAOFDYYKVPEAQKRVCRQDNKLWHATXPOIPCOQFZEJTBNUIZEKWJCYYBKVMDSSWOWNCIEVBYLDDQJFTFMJBXNDVTIWXCYUNXAIHIVXIFMBUZHASJUBPDAMFZMGSGQYTG");
    const char tmp_msg_0[] = {57, 88, 103, -55, 96, -92, -30, 97, 99, -41, 88, -19, -87, 85, -67, 108, 24, 10, 123, 116, 78, -65, 81, -50, -26, 31, 67, 1, -109, 4, 83, -54, 1, -90, 37, -53, 51, 52, -33, 63, 12, -39, 111, -100, 24, 63, -79, -8, 17, 10, 92, 71, 57, -70, 118, -51, -28, 53, 82, 91, -24, -46, -117, 102, 19, 25, 85, 6, 77, 25, 74, 30, 6, 20, 48, -22, 86, 121, -94, 112, -24, -43, -65, 65, 101, -12, -102, -69, -55, 1, 45, -98, -38, 31, 6, 68, -43, 110, 83, -54, 15, 15, 30, 68, 53, 121, -103, 2, -128, -26, -49, -117, 15, 32, 24, -101, 65, -3, 23, 58, -84, 7, -94, -88, 71, 108, -13, -117, -2, 95, 113, 65, 49, 76, -19, -60, -72, -121, 31, 39, -60, -30, 9, 121, -71, 80, -81, -47, -84, 58, -83, 24, -20, -29, 48, -14, 44, -72, -104, 118, 44};
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
    msg.setTimeStamp(0.349364034178);
    msg.setSource(37226U);
    msg.setSourceEntity(85U);
    msg.setDestination(47822U);
    msg.setDestinationEntity(170U);
    msg.seq = 3192341359U;
    msg.state = 140U;
    msg.error.assign("JRVDWECYSHOTUNTDEDOZQAQXUZRKMMGOGWCRJGEIAABDNPHKUCECUYIAIEWLGJOTILLTLTHLMYPXABNJBIAHERMMZDXEYMZDUSDNZYPUQTIYLPFAVWCTPDESBBVPLWNVDFNFSX");

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
    msg.setTimeStamp(0.446364520288);
    msg.setSource(1106U);
    msg.setSourceEntity(219U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(78U);
    msg.seq = 3273485777U;
    msg.state = 74U;
    msg.error.assign("UVNPZZESBZGUWJQGJLQVMCTGHCCIYKEVOLVUDMZATJEQHNJCZBSABELYKQGFUNELGRXEHOWAHFUENIAUXGMKWRLVAIWCCZXJHMDIFLAUKEPWLLOWGIWJFYJSUNGWPYWASOPTZVFNXQZRKKEDDPVXXRKTFPMSFTYLRHFBSFCOGHYQMYPXTV");

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
    msg.setTimeStamp(0.175477340183);
    msg.setSource(6156U);
    msg.setSourceEntity(34U);
    msg.setDestination(53948U);
    msg.setDestinationEntity(21U);
    msg.seq = 1766031136U;
    msg.state = 25U;
    msg.error.assign("RBAFWWKKODYNESAGPTBBQFKFWPJNYBZGVCOCCHEPKUQMSIJRQLOZVBWXBXTTUKWZXDZXOBTELEMMDVMFRURLUMVTSJOPIFOIRAVQQKZISZJESGKKENFLLJEQPIMKHFXNPYSAHTGABJDMZHJWBCUZWUGJHMEYRIULIGRNNCNWLOXIECLZRVMQDTGADJHOTRBYAXNYGAGXDGQQXTVXHVVHISKPAUHIYHRYFPVCT");

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
    msg.setTimeStamp(0.865644793144);
    msg.setSource(11701U);
    msg.setSourceEntity(241U);
    msg.setDestination(64646U);
    msg.setDestinationEntity(154U);
    msg.origin.assign("VKSDTYDUENRGJRAGPBQZGQAZDPXDXHLVBSJXJVGFTAUTETUEBPSORSDYBBXEGRORLQNKZQPWFHJWXLHQZKBUFLXGIVMATZGXJGNOHHHWTVWIMWSILYSNGUVRKMRYIJZDSDHDYWCABIZFBEQWMTQQOPNQKSHYILUMKRIC");
    msg.text.assign("FYIMRPSIPMSWQQNVWXHBVKINEJWVFKUBKDBVYBLWUYGDZYIWPRFDMNTEDCJUVUXRZHZTQRABDMIFRFX");

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
    msg.setTimeStamp(0.75519742041);
    msg.setSource(35510U);
    msg.setSourceEntity(221U);
    msg.setDestination(38209U);
    msg.setDestinationEntity(40U);
    msg.origin.assign("VVUORMRDFJWJNJBZMPFQDKTTNBIWTKSHXIULCQWWRYEYQBPLTMGQCVXRUCVHMVIIXKUWLOCDTJOPHGDJXSZYVVTAMIRYTPOAHEGAWXILYEIWYGOUMHFOUYMKSYDVXWERTQEGEJQECGOMXPARBDCRDZKBNABKFCTAFDFZSWZESOIQWGEBJIJVSHZLQNUNUARPBGHH");
    msg.text.assign("IOWTWKSLLUJIPYPJKZRQCMMWDNQUEQPLBHXQEIRAGEBXFPQVZWOUOBSVJRG");

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
    msg.setTimeStamp(0.888485341494);
    msg.setSource(43218U);
    msg.setSourceEntity(219U);
    msg.setDestination(36579U);
    msg.setDestinationEntity(237U);
    msg.origin.assign("XDCDBZEIWKGDGONMPTXICCAGEYIAEGIEGSLRDNPKRVOFQFIVVQVDVQJQRLSEKDWCRBKXSPNWYPSTMCPJOGJAHYINTOXUFOCVYULPESUZMICQWSEZNKYHSPNUTHZMKFQBHWMRHKZANCGWBAJQPCBRUAVMFHOIHTLBJJLJFVOFBODAAWNJGUMOJHFKZWPHXABUFGAIBBUVCLSLYZWDTN");
    msg.text.assign("TIFLCMHMKCEBSVUGBZTVREEHYVICNHBOINWJ");

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
    msg.setTimeStamp(0.122611515373);
    msg.setSource(35836U);
    msg.setSourceEntity(68U);
    msg.setDestination(19828U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("KQTEUWTRZPDMOVQAYBYFXMBSXKCQTZSNNXGNFGCEVPEQCRTYABPOAYPMJCONVKDWCBWNWHOLZLRYGSHIFLEWQFCWMMSMJKHGXZVOYRYLRDMATGHMCJOUJDIMFFXFLRTVV");
    msg.htime = 0.363389010412;
    msg.lat = 0.156697188432;
    msg.lon = 0.184572659056;
    const char tmp_msg_0[] = {58, -29, 63, -10, 15, -122, 23, -122, 25, 11, 122, -123, -90, -9, 118, -106, -2, 84, 92, 18, -42, 85, -116, -57, -34, 41, 12, 120, 82, -6, 18, 63, 33, 116, 122, 71, 116, -104, -48, 94, 15, -8, -26, -10, 68, -79, -51, 23, -55, 36, 11, 75, -33, -30, -92, 18, 18, -74, 53, -70, 123, 42, -67, -58, 37, 87, 59, 57, -124, -58, 43, -55, -121};
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
    msg.setTimeStamp(0.527294066988);
    msg.setSource(46652U);
    msg.setSourceEntity(227U);
    msg.setDestination(19294U);
    msg.setDestinationEntity(146U);
    msg.origin.assign("IYGCSBMJPUTGIXUBDJHZHPTNVKMKYBXEIOLFGVKPVNQFRUUWOXMLOWZKRAKLNCJMEOLVWMYKAVUIGIDWBQUHYPLDNCZXJRYZHCGBJWUMXVTXCZHHNJFZZCRKQQWFSGQIBDYIAOMXWXINEZATSLYQPFKPQJRYLHVVSUTNTCGSDPAJHODQ");
    msg.htime = 0.65423877163;
    msg.lat = 0.0891828052412;
    msg.lon = 0.214844936599;
    const char tmp_msg_0[] = {25, -6, -38, 113, 81, 31, -16, -24, 69, 4, 1, -33, 57, -4, 5, 84, -68, -108, -45, -81, 76, 61, 121, 99, -47, -3, -3, -13, 24, 76, -1, -35, -53, 89, 50, 106, -57, 74, 93, 35, -124, -85, 14, 42, 42, -125, -28, 125, 28, 57, 43, 80, 55, -33, -4, 39, -72, -117, 57, -17, 84, -89, -84, -125, 7, 116, 101, 31, 31, 91, -56, -13, 11, -78, 111, 4, -70, 54, 126, -83, 96, -64, -122, -41, -61, 86, 73, -98, -112, -20, 27, -87, -64, -49, -22, -34, -25, -106, -42, 67, 65, 36, 14, 79, 8, -71, -81, 119, 43, -22, -69, -118, -57, -101, -110, -46, 67, 86, 7, 124, -40, -101, 93, -13, 63, -116, -48, 73, 17, 113, 41, 13, -57, -90, 63, -57, -89, -90, -9, 115, -107, 120, -12, 87, 71, 78, 64, 49, 19, 28, -8, -64, -42, -7, -120, -14, 77, 105, -19, -12, -67, -37, -66, -89, -49, -96, 101, -38, -46, 11, -10, 116, -17, 104, 90, -78, 117, -2, -39, 93, -62, -112, -85, -31, 32, -77, 6, -67, 118, 50, -25, 21, 77, 47, -90, 36, 31, -57, -96, 77, -68, 75, -13, -8, 47, -122, -32, -91, 105, -13, -32, 63, 11, -32, -122, -109, -35};
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
    msg.setTimeStamp(0.968077007998);
    msg.setSource(62908U);
    msg.setSourceEntity(250U);
    msg.setDestination(1259U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("POLHHMRUXLYWURLVUWKCKYHUZCVOQD");
    msg.htime = 0.854788436856;
    msg.lat = 0.476809271547;
    msg.lon = 0.753117233345;
    const char tmp_msg_0[] = {-127, -25, 52, 59, 94, 70, -112, -115, -83, 70, 41, -128, -126, 126, -63, 71, -63, 31, 117, -106, -106, -54, 80, -50, -126, -104, -23, 116, 55, 77, -17, -37, -62, 73, 95, -94, -90, -78, 100, -23, 11, 93, 24, 113, 18, 7, 38, -15, 11, -15, 14, 124, 78, 26, 25, 14, 101, 35, -19, -48, 21, -30, -93, 52, 116, -124, -73, 14, -71, -31, -109, -57, -95, -36, -47, 124, 18, -54, 24, 24, -3, 93, 27, 89, 28, 49, -52, -115, 41, 10, -117, 62, 69, -87, 107, 13, 72, 82, 44, 0, 107, 114, 12, -100, -69, -24, 5, -91, -44, 12, 25, 29, -3, -98, 22, 100, -83, 81, -24, 82, 91, 126, 55, 107, 98, 8, 95, 65, -52, 28, 33, -104, -72, -36, -11, 33, -9, -45, 44, 110, -7, -14, -91, 10, 66, -19, 25, -89, 11, 78, -32, -98, -85, 107, 51, 35, -67, 96, 77, -80, -75, -113, -37, 103, 97, -40, 7, -90, -43, -9, 97, 0, 86, -82, -42, 26, 77, -30, 109, 74, -20, -91, -95, 15, -13, -56};
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
    msg.setTimeStamp(0.0551124148538);
    msg.setSource(44763U);
    msg.setSourceEntity(194U);
    msg.setDestination(17683U);
    msg.setDestinationEntity(139U);
    msg.req_id = 12549U;
    msg.ttl = 43692U;
    msg.destination.assign("CGXXZXOKFMWSQSQYHXFKGBKKRSEVQLRPBACEQDVYTKPRVJBMDUYIHLXYWVAORGUSXMOHFUSBCVPZALHAHXDNXBQCEEFOJITXHPZUVOIWZPPAPOKQNWCPLVWARTIFQIDBWHMBJSZQYAWRDYBUJS");
    const char tmp_msg_0[] = {78, 61, -83, -105, 114, 33, 85, -104, 23, -104, -108, 104, 3, 41, -127, 125, -29, 78, -40, -68, -55, -52, -22, 55, -78, -3, -79, -35, 123, 52, -2, -110, 80, -26, 33, 90, 85, -106, 43, -86, 51, 29, 96, -20, -123, -45, 43, 88, 44, -43, 120, 68, -40, 38, -79, 24, -8, -42, -95, 126, -30, 96, -96, -69, 28, -11, -118, 5, 71, -34, -53, 89, -13, -5, -86, 32, -41, -19, 70, 107, 112, -86, 41, -41, -92, 3, 114, -43, 73, 9, -1, 114, 104, 94, -2, 75, 71, 39, 66, -8, 36, -95, 13, 8, -13, -54, 57, -77, 88, -115, -3, -100, -30, -123, 7, 47, 47, -103, -124, -24, -55, 86, -9, 31, -91, 121, 95, -29, -81, 29, 89, 66, 64, 23, -38, 122, 120, 75, 71, 90, -114, -41, -5, 99, -97, 31, -89, -125, -59, -104, -31, -24, 54, 26, 109, 103, 101, -120, -35, 112, 76, 102, 14, -81};
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
    msg.setTimeStamp(0.225996049367);
    msg.setSource(31793U);
    msg.setSourceEntity(94U);
    msg.setDestination(708U);
    msg.setDestinationEntity(26U);
    msg.req_id = 38144U;
    msg.ttl = 16321U;
    msg.destination.assign("TRUETGNELXDHIFINO");
    const char tmp_msg_0[] = {52, -58, 114, 56, -64, -80, -124, 31, 92, -124, 111, 91, 29, -31, 0, 89, 122, -15, 108, 94, -108, 57, 123, -89, -80, 41, 22, 19, 83, 9, -67, 93, -115, -97, -59, -115, 101, 107, -46, -92, -51, 122, -14, -43, -93, -84, 6, -73, -28, -68, 115, -6, -27, -35, 6, -103, 38, -75, 119, 113, 87, 41, 53, -35, 1, 38, -40, 121, 17, -18, 84, -56, -25, -7, -23, 92, 13, 60, -83, -92, 102, -116, -11, 4, 53, -72, -99, -106, 32, -21, -18, 55, 64, 119, -85, -121, 125, 55, 101, 102, -82, -117, -62, -105, -106, -15, -4, -48, -35, -8, -5, 103, -76, -41, -105, -32, 65, -19, 5, -32, -17, -81, 88, -43, -63, 120, 82, 83, 94, 16, 17, -52, 7, 77, -51, 65, -10, 84, 71, -108, 21, -21, -22, 113, -69, 88, -50, 55, -101, 118, 111, -39, -77, 114, 39, 74, 44, -49, -93, 126, -127, -61, -9, 96, 59, -43, 2};
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
    msg.setTimeStamp(0.247933138583);
    msg.setSource(25370U);
    msg.setSourceEntity(251U);
    msg.setDestination(22326U);
    msg.setDestinationEntity(70U);
    msg.req_id = 15333U;
    msg.ttl = 16379U;
    msg.destination.assign("XZRIXCOWKSAUNJBQNLLXYBKARAZRFQJNVHIICSRCCYTPOOGHZMPRSHDHTTOHDBYXYGLNFDZOHRDNVDMUMZQVUIKKIXNTVMWKBCIUJZADXWWEUXOPJCTLQQHIVOHOFLXGWBLGSABSJEMVBIRCADKPKFJVCSFDTBQANEYZYMFVAQXEALHPDUFTNSBNMVQYEGKXUPWEZFKCPAURQPOWWTPKZIDORCFYQE");
    const char tmp_msg_0[] = {-126, 66, -42, 42, 124, 7, 30, -37, 1, 36, 45, 104, 35, 79, 32, -26, 40, 42, 87, -82, -62, -99, -5, -45, 18, -15, -99, -54, 92, 34, 12, 107, -96, -34, 23, -85, 77, 36, -118, 97, -20, 0, -81, 71, -87, -110, -101, -81, -5, -95, 72, -2, -57, -3, 8, 78, 111, -114, -23, -66, -45, -40, 106, -30, -52, 51, 53, 114, -109};
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
    msg.setTimeStamp(0.23305750056);
    msg.setSource(16135U);
    msg.setSourceEntity(45U);
    msg.setDestination(8597U);
    msg.setDestinationEntity(95U);
    msg.req_id = 21815U;
    msg.status = 193U;
    msg.text.assign("EVVMXNQGGDVVAYHRHMJLAPSSUAOSLZWJUHHKXFBAOROCFWRCXLVNNERFJWHOCXGJCNYZNEQPEDUVQDXKITEIZRVKRAPDIBE");

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
    msg.setTimeStamp(0.896960675095);
    msg.setSource(55873U);
    msg.setSourceEntity(110U);
    msg.setDestination(35211U);
    msg.setDestinationEntity(35U);
    msg.req_id = 51518U;
    msg.status = 46U;
    msg.text.assign("IBDUFRAHKVYXYSCUEPZRJBTXKLN");

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
    msg.setTimeStamp(0.0058872099454);
    msg.setSource(59880U);
    msg.setSourceEntity(25U);
    msg.setDestination(15442U);
    msg.setDestinationEntity(42U);
    msg.req_id = 40921U;
    msg.status = 182U;
    msg.text.assign("UTKQNVIVRCLCHUDIFQZYSFXFLQBSEBORKRQMGPPUIEDWFYJQDSLJDSQYNUOMOXNFBWZFKHTUBAOJMGBHGLKYYZYPTQJWZVZCWKOHSRT");

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
    msg.setTimeStamp(0.834645404811);
    msg.setSource(62012U);
    msg.setSourceEntity(155U);
    msg.setDestination(21U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("CMGSJAXURCXYOSLBQBSOFQCDSPIIUVTQPRGMXFQKEVRNOWKTWDUIGDSTNGEOCDXEDZYUGMBSGHYFLTJHNCOBJGAPYFHDHMLAUCULZVGCAZMBDNSVPCNXUBIXSWUIDQNOTRYIZLAOUFLKANJNWAJPXBTYELHORPSNQBMPVTUHVWWPKXZFMTBIJ");
    msg.links = 2559804985U;

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
    msg.setTimeStamp(0.835471903876);
    msg.setSource(35444U);
    msg.setSourceEntity(237U);
    msg.setDestination(25403U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("TCNVOMPSQDUVAMGYLRCEKPGOSZDLVQKIUOXZWRJRIONEYPRAR");
    msg.links = 2085816836U;

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
    msg.setTimeStamp(0.380976665621);
    msg.setSource(53015U);
    msg.setSourceEntity(47U);
    msg.setDestination(54580U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("QYFTVRLLFLNCSPMOIUEUGDCWNZUBNHQXGOGWXGCSLNJGWWICXOIBRXNFZEBTGZMAJBLEYQQHOBVLHONPIJHWFIUHKMNYRVBSSODWNAJVJAAERLSFKHQTPMWXCGUWJZPVMSVLDJYVPQHHMTQETOXEZXZWEUTPYIKRMVAAIZVDAOBYUGMDNWPCZCYIRRGJQDZJUOKIZPTEXRBHFFYCMDSQTMCDVHPUTXJDQOXEFCKKR");
    msg.links = 3441646879U;

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
    msg.setTimeStamp(0.835215925304);
    msg.setSource(13323U);
    msg.setSourceEntity(38U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(121U);
    msg.groupname.assign("RWTSICCHAPGBDDRKMWJKZELGUBJGGYXEEQVHCGCYKLDMGTAWOJPBDKVTCJPEFVSWPJYIKWQLCCUNRMXXDZOFMFGYNCCNYQ");
    msg.action = 198U;
    msg.grouplist.assign("XKSPCCYGZWGFVIKYNTIINMY");

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
    msg.setTimeStamp(0.593220057261);
    msg.setSource(3442U);
    msg.setSourceEntity(1U);
    msg.setDestination(30829U);
    msg.setDestinationEntity(221U);
    msg.groupname.assign("NTQJNVZVFJXVBDCJQTWAQWXEBXIOOJDCRWCPYPLAHDBVVBHMLMKLSARMLPSETWADZIXLJTUOBNZAFKZDDUVBJMEJUOJSFJQFZSMMPKRSACALGPHKKEXNEWFDQIHIZRYOVOXTMBYYZO");
    msg.action = 220U;
    msg.grouplist.assign("ZTAYZWXFXVCRDXEERHHQVQZBMUJUQZTMRQJWTLETDQXDIROGCXCSAIGZLRQNBGCPDJSTPFHERPPUVKAMTXPYAOQCUNKVWMBEYOOPPPGDZVNXTEJNJEKDSQNSTRWVMOXJOVLLMFOANHLWLNOBPZAPCWADBFKXVGJCJYNKOWBIIYIMLCWUZTFIWHDSAGIYKGFUKBLFHGFSGHUUAJBQVFIRDYWBHMENNUIVMEKYEFORBSYJSIRZHCDKYLMHS");

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
    msg.setTimeStamp(0.529383506065);
    msg.setSource(64531U);
    msg.setSourceEntity(38U);
    msg.setDestination(19960U);
    msg.setDestinationEntity(15U);
    msg.groupname.assign("BPVZKIQEBPCAFYCCJLDWLSXDMLNQAQZEHYNEXQZWAGKONRBQYFLUHOUISJGMRPYELOHAXMJZTIHLTFEHDETFTKLAGNUMUPOLVMYXJHOWKVMUJX");
    msg.action = 225U;
    msg.grouplist.assign("NZIGTGWOHVZCZZVXVHMWAPOHQBXDXTCQJXRKJXRHEHLNAYFSAPRPGWEXAIFOQRFEDQYQHKBYTSTUEWNSWMFNRDALVCOVOJ");

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
    msg.setTimeStamp(0.939092884236);
    msg.setSource(22555U);
    msg.setSourceEntity(248U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(15U);
    msg.value = 0.485928384839;
    msg.sys_src = 6771U;

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
    msg.setTimeStamp(0.194428171834);
    msg.setSource(12164U);
    msg.setSourceEntity(189U);
    msg.setDestination(60474U);
    msg.setDestinationEntity(41U);
    msg.value = 0.279532604297;
    msg.sys_src = 15452U;

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
    msg.setTimeStamp(0.504358773772);
    msg.setSource(1809U);
    msg.setSourceEntity(237U);
    msg.setDestination(15499U);
    msg.setDestinationEntity(124U);
    msg.value = 0.657203651475;
    msg.sys_src = 43955U;

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
    msg.setTimeStamp(0.585864789562);
    msg.setSource(62618U);
    msg.setSourceEntity(19U);
    msg.setDestination(33727U);
    msg.setDestinationEntity(40U);
    msg.value = 0.38198769359;
    msg.units = 228U;

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
    msg.setTimeStamp(0.342779209435);
    msg.setSource(41476U);
    msg.setSourceEntity(15U);
    msg.setDestination(26844U);
    msg.setDestinationEntity(115U);
    msg.value = 0.297265520884;
    msg.units = 177U;

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
    msg.setTimeStamp(0.0264384534185);
    msg.setSource(57274U);
    msg.setSourceEntity(118U);
    msg.setDestination(20096U);
    msg.setDestinationEntity(113U);
    msg.value = 0.73852653857;
    msg.units = 128U;

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
    msg.setTimeStamp(0.268887786326);
    msg.setSource(26397U);
    msg.setSourceEntity(234U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(22U);
    msg.base_lat = 0.91093794846;
    msg.base_lon = 0.903440266329;
    msg.base_time = 0.947883357167;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 39221U;
    tmp_msg_0.destination = 4984U;
    tmp_msg_0.timeout = 0.542648681155;
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.531856265662);
    msg.setSource(41747U);
    msg.setSourceEntity(138U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(34U);
    msg.base_lat = 0.0916982643791;
    msg.base_lon = 0.0138152393077;
    msg.base_time = 0.41344830092;

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
    msg.setTimeStamp(0.843259446026);
    msg.setSource(53344U);
    msg.setSourceEntity(117U);
    msg.setDestination(27135U);
    msg.setDestinationEntity(45U);
    msg.base_lat = 0.955050609405;
    msg.base_lon = 0.497207406003;
    msg.base_time = 0.852380347751;

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
    msg.setTimeStamp(0.39460091791);
    msg.setSource(8081U);
    msg.setSourceEntity(26U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(105U);
    msg.base_lat = 0.121174403934;
    msg.base_lon = 0.28382515974;
    msg.base_time = 0.495640395885;
    const char tmp_msg_0[] = {-63, -4, -2, 55, 93, 1, 35, -99, 7, -106, 59, -115, -40, -102, 84, -41, 26, 40, -61, -113, 51, 24, -18, 8, -119, 37, -36, -48, 85, -40, 47, -88, -37, -4, 70, -3, 74, -73, -74, 89, 125, -89, -44, -122, 82, 61, 92, -74, 10, -26, 68, -50, -93, 113, 95, -39, -34, -56, 1, 91, 118, -91, 10, 96, 63, 66, 57, 116, -72, 43, 43, -26, -81, 113, -126, -32, 125, -12, -79, 113, 89, -3, -56, 54, 77, 84, 76, -29, -23, -33, -31, -51, 6, 108, 85, 80, -23, 56, 14, -45, 95, -45, 11, -56, 54, 120, -6, -58};
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
    msg.setTimeStamp(0.554667828151);
    msg.setSource(41580U);
    msg.setSourceEntity(185U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(193U);
    msg.base_lat = 0.165774295004;
    msg.base_lon = 0.568653105944;
    msg.base_time = 0.0303646321692;
    const char tmp_msg_0[] = {124, 94, 50, -122, -119, -6, -51, -122, 3, 0, 53, 61, -101, 85, 32, -127, 53, 76, -117, -29, -83, 31, 17, -126, 104, 21, -13, 97, 92, 38, -91, 77, -81, -14, 118, -93, -75, -3, 112, -87, -24, 75, 91, 67, 59, 93, 46, 4, -36, -127, -41, 34, 99, 118, -71, -96, 25, 27, 0, 64, -62, 114, -77, 33, -3, 11, 55, 20, 84, 1, 5, 51, -89, 25, -5, 50, -7, -124, -97, 74, 86, -106, 44, -11, 116, -42, -117, -78, 50, -78, 3, 87, -21, 99, 25, -93, -67, 12, 55, -43, 54, -70, 120, -38, 116, -17, -61, 72, -59, -128, -97, -19, -42, -93, -64, -112, 64, 62, 119, 0, -21, -55, -89, 42, -29, -119, -16, 87, -95, -41, 112, 123, 119, -128, 105, 50, -44, 58, 120, -56, -63, 47, -24, 52, -72, 63, -23, -5, 35, 105, 32, -65, -24, -58, -82, -69, -128, -91, 48, 22, 63, 116, 0, -25, 23, -40, 51, -85, -39, 106, 38, -84, 108, -49, 28, -92, -84, -108, -123, -90, -121, -128, -109, -50, -38, -43, -19, -42, -76, 61, -103, 36, -69, 90, -40, -58, -47, 108, -103, 54, 103, 125, 87, -122, 77, 5, 6, -87, -124, -31, 116, 124, -45, -56, 41, 116, 6, -32, -88, 122};
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
    msg.setTimeStamp(0.211276187249);
    msg.setSource(57188U);
    msg.setSourceEntity(64U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.502349635362;
    msg.base_lon = 0.80827053876;
    msg.base_time = 0.807734444269;
    const char tmp_msg_0[] = {-105, 2, -99, -82, -96, 24, -36, -42, 53, -24, 66, 53, 41, 39, -76, 64, -27, 52, -69, 20, 84, 66, -81, 99, -14, -3, -9, -110, -103, -35, -32, -7, -108, 116, -119, -115, 71, -79, 14, 34, 112, 92, 82, -59, 55, -123, -57, 87, -52, 119, -55, -92, -102, -127, 26, 82, 85};
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
    msg.setTimeStamp(0.203307437239);
    msg.setSource(24647U);
    msg.setSourceEntity(12U);
    msg.setDestination(26290U);
    msg.setDestinationEntity(135U);
    msg.sys_id = 31325U;
    msg.priority = -2;
    msg.x = 11209;
    msg.y = 27744;
    msg.z = 19906;
    msg.t = 12532;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 4205449348U;
    tmp_msg_0.start_lat = 0.586064044237;
    tmp_msg_0.start_lon = 0.817426223448;
    tmp_msg_0.start_z = 0.25055697059;
    tmp_msg_0.start_z_units = 199U;
    tmp_msg_0.end_lat = 0.339273250539;
    tmp_msg_0.end_lon = 0.410644126967;
    tmp_msg_0.end_z = 0.0549486738815;
    tmp_msg_0.end_z_units = 88U;
    tmp_msg_0.lradius = 0.889056694707;
    tmp_msg_0.flags = 128U;
    tmp_msg_0.x = 0.388832721133;
    tmp_msg_0.y = 0.0860242367186;
    tmp_msg_0.z = 0.430667930587;
    tmp_msg_0.vx = 0.0276889488814;
    tmp_msg_0.vy = 0.656027331477;
    tmp_msg_0.vz = 0.554358764122;
    tmp_msg_0.course_error = 0.489168142201;
    tmp_msg_0.eta = 40213U;
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
    msg.setTimeStamp(0.920227830215);
    msg.setSource(6054U);
    msg.setSourceEntity(191U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(29U);
    msg.sys_id = 2794U;
    msg.priority = -85;
    msg.x = 13659;
    msg.y = -27492;
    msg.z = -10186;
    msg.t = -27321;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("ZXGTTKEKDJAQVVDINZIIWCHSPBXTUTSEMQFXOUAONZADNMRYKREGGWVRTHQWOFIDJQAZQUSJDJXQFVBUHEEYWAGEPCBORAPGAMREQLIGDVFKPLCUTMJXBPMNEHFKMWPZMEWZPWLKUBDHOYDDNJLBVRLZALWHNMNUMZPLOFPGSYEBNVXISSJLRSUZJHKXQIXBHWRDNJGLQWYTFXTVGMCFSORKSCICVCFO");
    tmp_msg_0.rssi = 0.514799840985;
    tmp_msg_0.integrity = 25309U;
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
    msg.setTimeStamp(0.0693374162177);
    msg.setSource(37301U);
    msg.setSourceEntity(90U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(234U);
    msg.sys_id = 34449U;
    msg.priority = 48;
    msg.x = -12319;
    msg.y = -23080;
    msg.z = -6533;
    msg.t = 9489;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -32;
    tmp_msg_0.value = 1158268301;
    tmp_msg_0.gain = 78U;
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
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.954819446945);
    msg.setSource(59627U);
    msg.setSourceEntity(201U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(141U);
    msg.req_id = 23937U;
    msg.type = 93U;
    msg.max_size = 64041U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.591340295183;
    tmp_msg_0.base_lon = 0.312344057683;
    tmp_msg_0.base_time = 0.67226459869;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 25374U;
    tmp_tmp_msg_0_0.priority = -45;
    tmp_tmp_msg_0_0.x = -12436;
    tmp_tmp_msg_0_0.y = 5398;
    tmp_tmp_msg_0_0.z = -10558;
    tmp_tmp_msg_0_0.t = 4174;
    IMC::SessionSubscription tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 794088150U;
    tmp_tmp_tmp_msg_0_0_0.messages.assign("BEBJFDIDMIBCJSTCNKCSWBJXNHPRTMTZZSKKLTAGONJNPPJQCNQUDRWRKXOBAIGYQKNSPNHHRIAIHSTOGFUFCDYMAOGYGERYKFFKLSTXFNXIJFUZAZPUQVGXYRDXLGZXPTIUVWQVLHKWYLKONFJY");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.409970406402);
    msg.setSource(39013U);
    msg.setSourceEntity(172U);
    msg.setDestination(37757U);
    msg.setDestinationEntity(119U);
    msg.req_id = 19542U;
    msg.type = 128U;
    msg.max_size = 20687U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.760808003405;
    tmp_msg_0.base_lon = 0.578104919469;
    tmp_msg_0.base_time = 0.866608163582;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.553219282549);
    msg.setSource(9660U);
    msg.setSourceEntity(83U);
    msg.setDestination(59793U);
    msg.setDestinationEntity(41U);
    msg.req_id = 15877U;
    msg.type = 189U;
    msg.max_size = 44916U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.571869524639;
    tmp_msg_0.base_lon = 0.898984526279;
    tmp_msg_0.base_time = 0.170994825949;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 8860U;
    tmp_tmp_msg_0_0.priority = -15;
    tmp_tmp_msg_0_0.x = -21868;
    tmp_tmp_msg_0_0.y = 29307;
    tmp_tmp_msg_0_0.z = -5226;
    tmp_tmp_msg_0_0.t = -18463;
    IMC::UsblModem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ESTUNUZQVCHZJQXPGDEGSVFTSYWRWWWIWMQQTAXTPFLIPLDBVFGXQAERUTOGRSEVKMUHTRWDRERZUMCIKXFGAPMNVHHBPECBDOCSZHIYSFDKUOBUKUDMUNILKMLTFIENQPJSPZMFBVJJDTNLKNOLWPJWHCAHYQLNZGOJZANOVHYGYMOMTKUDBJPKCILWVAACXNJQQXWSYZZPYXYFL");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.672488836193;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.361673601235;
    tmp_tmp_tmp_msg_0_0_0.z = 0.44136663031;
    tmp_tmp_tmp_msg_0_0_0.z_units = 233U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.891039407003);
    msg.setSource(6863U);
    msg.setSourceEntity(119U);
    msg.setDestination(42658U);
    msg.setDestinationEntity(187U);
    msg.original_source = 12599U;
    msg.destination = 12397U;
    msg.timeout = 0.106009882096;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 221U;
    tmp_msg_0.name.assign("PISRGQMVALNBDVXJUCITZQSKTAZUQUPLRBENKHBWHUMNEYNWHWEWJAPISIFVADBVLETDVMYPBBUYULTHSCEJFZOECDDJNQYICKB");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.882769640143);
    msg.setSource(39610U);
    msg.setSourceEntity(8U);
    msg.setDestination(63488U);
    msg.setDestinationEntity(32U);
    msg.original_source = 58263U;
    msg.destination = 43066U;
    msg.timeout = 0.689405502971;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.631124180862;
    tmp_msg_0.speed = 0.704890957957;
    tmp_msg_0.turbulence = 0.527996495046;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.596535981954);
    msg.setSource(64011U);
    msg.setSourceEntity(237U);
    msg.setDestination(40192U);
    msg.setDestinationEntity(207U);
    msg.original_source = 44244U;
    msg.destination = 33329U;
    msg.timeout = 0.704609027406;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.2056471969;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
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
    msg.setTimeStamp(0.317758369253);
    msg.setSource(17736U);
    msg.setSourceEntity(82U);
    msg.setDestination(3491U);
    msg.setDestinationEntity(201U);
    msg.id = 131U;
    msg.range = 0.0812556639807;

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
    msg.setTimeStamp(0.96729766467);
    msg.setSource(12700U);
    msg.setSourceEntity(3U);
    msg.setDestination(8455U);
    msg.setDestinationEntity(191U);
    msg.id = 238U;
    msg.range = 0.59776683327;

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
    msg.setTimeStamp(0.336894438905);
    msg.setSource(58226U);
    msg.setSourceEntity(196U);
    msg.setDestination(3391U);
    msg.setDestinationEntity(230U);
    msg.id = 81U;
    msg.range = 0.475766142459;

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
    msg.setTimeStamp(0.427534530665);
    msg.setSource(32149U);
    msg.setSourceEntity(46U);
    msg.setDestination(38459U);
    msg.setDestinationEntity(47U);
    msg.beacon.assign("NNVXYLGUEDJEFETCUNISPAKQYJROGWRILSPMQVPKXCWRPHOTIQABLNLWEAFBRLEQVHDNMMFYYLCRXBZFYVPCXWKVASOOCGYCZSXDPDJXQUGZMUKMGGJBZYDHLZGQTSMURRBUKOHBFDCREZESOELVDOTFQXV");
    msg.lat = 0.672695456498;
    msg.lon = 0.72017096436;
    msg.depth = 0.516500666349;
    msg.query_channel = 164U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 225U;

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
    msg.setTimeStamp(0.85155972022);
    msg.setSource(49638U);
    msg.setSourceEntity(1U);
    msg.setDestination(13870U);
    msg.setDestinationEntity(127U);
    msg.beacon.assign("JKUWVEIEMIKTAJROHOTFGPDEEJVGNFZTFGJHKKKHFSWZNYOWCLNCUHCPLPIQWVMTOTBDMUTQAVYGKUXBSSCOXDZTKSIEWOLZMMQWLBIYENXGSMJFIXHDHGYIJAYQLUSJRVBDCVZRQI");
    msg.lat = 0.265213977256;
    msg.lon = 0.862590631651;
    msg.depth = 0.447310273977;
    msg.query_channel = 182U;
    msg.reply_channel = 229U;
    msg.transponder_delay = 225U;

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
    msg.setTimeStamp(0.594956424122);
    msg.setSource(17235U);
    msg.setSourceEntity(104U);
    msg.setDestination(995U);
    msg.setDestinationEntity(75U);
    msg.beacon.assign("IKCYHSLSATNXFMIRVCOONEHFLAWFGGNTYCCUFLUZRPHEOMHTCUQMJPBDOVVFVTXFVWUDPJZDJYJZQDQKCZHPWJFRPDGWMQORWGBYDKYEIGSRKOSERNXAUQGWLMDBAIVXFBJMEKSSMCBSIOEYZQEWMDSTUUDHBYLNFEEGYQIGINHOQCPXKXRTZLETPKALHFYPYIBWIXICKBVAMGJUNALVSORNJTZJKGNPLCVHOVN");
    msg.lat = 0.086527164377;
    msg.lon = 0.0761076577143;
    msg.depth = 0.768495747878;
    msg.query_channel = 124U;
    msg.reply_channel = 50U;
    msg.transponder_delay = 205U;

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
    msg.setTimeStamp(0.854087190878);
    msg.setSource(17189U);
    msg.setSourceEntity(44U);
    msg.setDestination(37457U);
    msg.setDestinationEntity(33U);
    msg.op = 234U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZKTUHBINLCTNEQLLGFXGSMTASPOLJVBNLSMUBYTUNLEJFOXUQOSPFTHIAGFWQPCDJZTBMXHDYQZYXUZKLYSYELDX");
    tmp_msg_0.lat = 0.705220988421;
    tmp_msg_0.lon = 0.592372361407;
    tmp_msg_0.depth = 0.346525397805;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 73U;
    tmp_msg_0.transponder_delay = 143U;
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
    msg.setTimeStamp(0.925980359342);
    msg.setSource(50032U);
    msg.setSourceEntity(61U);
    msg.setDestination(32894U);
    msg.setDestinationEntity(22U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.68212570204);
    msg.setSource(53983U);
    msg.setSourceEntity(18U);
    msg.setDestination(2706U);
    msg.setDestinationEntity(136U);
    msg.op = 67U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KBFDUCTBKDTWPERGGUAKJRZSVPGCYJLBMYAQFNPZAPRZTNOGHLRAXLNOWVOCCZCFWFGYNRXSURAYDBPJTMOPNCSLEFGNNHBOYUZEKLMFUBOLAKIDVUZMVWBKDPIHYBQIME");
    tmp_msg_0.lat = 0.433347208209;
    tmp_msg_0.lon = 0.755638065356;
    tmp_msg_0.depth = 0.394393069224;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 25U;
    tmp_msg_0.transponder_delay = 83U;
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
    msg.setTimeStamp(0.465111030948);
    msg.setSource(32086U);
    msg.setSourceEntity(231U);
    msg.setDestination(18167U);
    msg.setDestinationEntity(26U);
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("VOIFWGANPZHQKEROMWFWGDFJRFBUROZQCBBCIYYFGSMTUJNYADKKNITXHTEFLLOGHQAMVNRILZLPCSANQMEULCKERKMDNUZYMLXHXBRYBSTYCIZCKCVOAHOJKHCATGICBCHJHHGYPWRMZJDLZGAWTEWIMVWKTNJEEVZJPYOVXULGDVXBWDXUQMLVBJPYQUXUWKHXPGDKZUMESRSSEOBSRJXOPRNVXAEGIUPTFPYFWJI");
    tmp_msg_0.plan_size = 18337U;
    tmp_msg_0.change_time = 0.925911859639;
    tmp_msg_0.change_sid = 2746U;
    tmp_msg_0.change_sname.assign("NXECHEZJYTIJQBIIYDECPNZDYYWURHBRZHFKGFNHYKIZLLYZYTOXOMODEOGXHWJNVABUWAHMRPTNCAFQJAFGUVTNRGKXHTEUQAWM");
    const char tmp_tmp_msg_0_0[] = {105, -52, 45, -77, 121, -93, 48, 77, 109, -33, -123, -59, -112, -13, -53, 59, -115, 36, 85, 77, 82, -27, 28, -19, -103, -55, 117, -47, 37, 56, -92, 65, -120, -61, 107, -37, 116, -106, 76, -15, 110, 86, 30, 88, 24, 23, 77, 48, -64, -84, -82, 7, -110, 117, -36, 59, -11, 37, -23, 24, 55, 28, -31, -12, 67, -28, -19, 12, 19, -71, 31, -49, 72, 37, -18, -57, -34, 22, -14, 25, 109, -101, 115, 9, 108, -97, 73, -102, -111, 111, 40, -8, 48, 51, -15, -28, 42, -49, 99, -66, -17, -15, -67, -43, 29, -21, 117, -15, 43, 124, 123, -9, -111, -40, 120, -34, 30, 105, 91, -128, 112, -45, -11, 101, -45, -61, -33, -39, 83, 12, -74, 74, -119, 91, -3, 31, 93, 119, 50, 30, -99, -94, -125, -10, -41, -88, 79, -34, -39, -32, -13, 31, -19, 102, -82, 116, 34, 68, -116, -25, -100, 64, 71, 37, -51, -100, -22, 35, 107, -14, 111, 40, 8, 41, 112, -44, 47, -50, 53, -74, 86, -7, -51, 28};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.567894799074);
    msg.setSource(58074U);
    msg.setSourceEntity(48U);
    msg.setDestination(18935U);
    msg.setDestinationEntity(64U);
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 8317U;
    tmp_msg_0.destination = 20823U;
    tmp_msg_0.timeout = 0.766791720813;
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 10846U;
    tmp_tmp_msg_0_0.rpm = 0.17544123907;
    tmp_tmp_msg_0_0.direction = 199U;
    tmp_tmp_msg_0_0.custom.assign("ERQRCVYWMURFCRAVTPHRCMJJKGTGZTCOLWKBXWLKDZSSSOXCURLAUIHZDVXVGAUNAHPLBMJPFTJHBPT");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.688214417724);
    msg.setSource(3661U);
    msg.setSourceEntity(122U);
    msg.setDestination(40558U);
    msg.setDestinationEntity(192U);
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.295131888475;
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
    msg.setTimeStamp(0.845764017988);
    msg.setSource(23604U);
    msg.setSourceEntity(14U);
    msg.setDestination(32952U);
    msg.setDestinationEntity(126U);
    msg.op = 211U;
    msg.system.assign("JXNZGCXQTAIEGJFOSXQQPYJFFODUFNRTHENKIEZMIMENWEDRHZNDQLO");
    msg.range = 0.584793396755;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.252134867036;
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
    msg.setTimeStamp(0.757031978435);
    msg.setSource(846U);
    msg.setSourceEntity(32U);
    msg.setDestination(18689U);
    msg.setDestinationEntity(135U);
    msg.op = 60U;
    msg.system.assign("LHPHLZDQYEEMGTCUWXKRZBPBNVVGRSCGYBKPFYHDRVCCNJEKPGGWYC");
    msg.range = 0.437618219889;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0294340004545;
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
    msg.setTimeStamp(0.816475481329);
    msg.setSource(29411U);
    msg.setSourceEntity(168U);
    msg.setDestination(42937U);
    msg.setDestinationEntity(227U);
    msg.op = 210U;
    msg.system.assign("IMVXHOQFTNJARTFWYKEKCGZJOVAJSDDRDUALWWFNIKPVZMULDPIKSLNBAYUIKCETYCJQVFMIXEOXPWXBOWRBUCYHOPGLFTIIYBUKUJVERFZJDBWZEWHCVNAXOSUDOQXWDSQZECSHRECTYGQHKDFLYWHGNJCMTUSXBXWBOLHMIJEDVSIAFGHETALQSFGGRSYEQBNORPQUPAGZFPMABZHPNRNPMVYNQYQTHDTJ");
    msg.range = 0.787820452772;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 95U;
    tmp_msg_0.eta = 47385U;
    tmp_msg_0.info.assign("XWHTXSYTZK");
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
    msg.setTimeStamp(0.475830503628);
    msg.setSource(34653U);
    msg.setSourceEntity(138U);
    msg.setDestination(4111U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.58245537549);
    msg.setSource(1726U);
    msg.setSourceEntity(154U);
    msg.setDestination(57559U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.0958721045812);
    msg.setSource(24565U);
    msg.setSourceEntity(179U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.249007229992);
    msg.setSource(55112U);
    msg.setSourceEntity(98U);
    msg.setDestination(18962U);
    msg.setDestinationEntity(124U);
    msg.list.assign("TBXLEOZVPXGHYDMFSPYFDRZKAYFNZYNPGFWQAGULKALSHVQQQCITHRCFRASZBWBTOFGKYHLDSEQDLTBMZUUJOUATAHBDZWTMXUOMCDRFZUKXTJGAVCJISIOSJYDRMSYBRGVQOQCZMIMNCUWKSVOAVTSCXMHTWIB");

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
    msg.setTimeStamp(0.594449124913);
    msg.setSource(15661U);
    msg.setSourceEntity(105U);
    msg.setDestination(28367U);
    msg.setDestinationEntity(164U);
    msg.list.assign("KGZRVSCARYUPNITKNPVXCELBQEBRJBKIGVXWOTOBZPXPTQYEKRGDZAHPCOAVZOBSIXESWEDGMINPDUYZFDPLFQIDJFXWHGHXOUEHVTLNYHNSYBWXLUBCJOAKAWIRJTNMCVTJCDJDBRUJQEZVDMLSZJGYQILMMJWFMPEYNAKNLWHUUWMVSGUAAFIMXPCKVTOQOGYRUQSZFROMYOLBHXCKAGNIXCSZHHGMAFHSLPRFFU");

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
    msg.setTimeStamp(0.802328449437);
    msg.setSource(49960U);
    msg.setSourceEntity(172U);
    msg.setDestination(43661U);
    msg.setDestinationEntity(250U);
    msg.list.assign("CLGSIKZLEGWEXOMYLDPRDQBHLQHMUJKZVOLCTUZBWVHIJIGDWVLNJSZGSOPKQPMINTESCWEGJJXWSAPOYKSFEQBMELSOGFKKTRIJBSZDAAHRUUMVNPYBULKUUPIRPQXHTYKODNWCHXXNCCTSZMYZAZEAFXNUMONLUJTBKEGBYTVHIOTIFHHWGDRAFHYGDYQE");

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
    msg.setTimeStamp(0.204132837052);
    msg.setSource(22794U);
    msg.setSourceEntity(241U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(51U);
    msg.peer.assign("FZFNHGCLEAULTYRKMTZIMXOIJKSOJMNEOHTRJDIJLWCPLHIMTFPRNTVLDVDAQWEOAESJQIPBSBGDDFQVXWFHIIKKNOXXSWAMFJLPYEJGEAHQYHXUAXPZUUGVWPACUWOGLVNOHKXLHRESTZBINAMCDTGIYUYYZDFHBVQBCZGLLTYWVDQPKNZKEMGEEXWRJYKRRVXZPBOJQUAFSBDXCQDYCCTSKNRPWKCVAJSRSZSUVFQWQM");
    msg.rssi = 0.233360415027;
    msg.integrity = 7672U;

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
    msg.setTimeStamp(0.581752163411);
    msg.setSource(22627U);
    msg.setSourceEntity(219U);
    msg.setDestination(50496U);
    msg.setDestinationEntity(69U);
    msg.peer.assign("FNBXRCSOHNQUYHDROBDDUSWAJFWHWGRJNLRMDDLHDYPPOMUOIEFQYFVFVAJYAFLLXPCEGFUXKIVSAKOQGYOAPGCFIHNKNLMILYKMJZHMPQUVRJSSTAXBOLWGZZSZBEC");
    msg.rssi = 0.103803628156;
    msg.integrity = 46447U;

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
    msg.setTimeStamp(0.752134758078);
    msg.setSource(62767U);
    msg.setSourceEntity(139U);
    msg.setDestination(30994U);
    msg.setDestinationEntity(95U);
    msg.peer.assign("WVDCXLKPLHBGPLRSDCQWNKVZQCTNERUTGZBEJMJAUIKWIRJGDBJNYAAXAUWSGFGBCOLVEKURHOKLMICO");
    msg.rssi = 0.137059777099;
    msg.integrity = 21393U;

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
    msg.setTimeStamp(0.0378262061299);
    msg.setSource(9427U);
    msg.setSourceEntity(150U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(61U);
    msg.value = 31348;

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
    msg.setTimeStamp(0.889302619655);
    msg.setSource(43586U);
    msg.setSourceEntity(45U);
    msg.setDestination(28724U);
    msg.setDestinationEntity(210U);
    msg.value = 20218;

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
    msg.setTimeStamp(0.689242766555);
    msg.setSource(18960U);
    msg.setSourceEntity(233U);
    msg.setDestination(2284U);
    msg.setDestinationEntity(126U);
    msg.value = 11213;

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
    msg.setTimeStamp(0.782756487593);
    msg.setSource(52748U);
    msg.setSourceEntity(78U);
    msg.setDestination(36475U);
    msg.setDestinationEntity(32U);
    msg.value = 0.806231176318;

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
    msg.setTimeStamp(0.372573278727);
    msg.setSource(47469U);
    msg.setSourceEntity(149U);
    msg.setDestination(54044U);
    msg.setDestinationEntity(74U);
    msg.value = 0.0320330681293;

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
    msg.setTimeStamp(0.381390471359);
    msg.setSource(49586U);
    msg.setSourceEntity(7U);
    msg.setDestination(35451U);
    msg.setDestinationEntity(245U);
    msg.value = 0.255006093404;

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
    msg.setTimeStamp(0.898321578827);
    msg.setSource(6819U);
    msg.setSourceEntity(29U);
    msg.setDestination(27660U);
    msg.setDestinationEntity(133U);
    msg.value = 0.119405578746;

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
    msg.setTimeStamp(0.0722538311525);
    msg.setSource(48472U);
    msg.setSourceEntity(190U);
    msg.setDestination(39092U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0831925236812;

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
    msg.setTimeStamp(0.0167724155501);
    msg.setSource(41726U);
    msg.setSourceEntity(56U);
    msg.setDestination(29637U);
    msg.setDestinationEntity(113U);
    msg.value = 0.619718997397;

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
    msg.setTimeStamp(0.953835685115);
    msg.setSource(34726U);
    msg.setSourceEntity(46U);
    msg.setDestination(40845U);
    msg.setDestinationEntity(250U);
    msg.validity = 33355U;
    msg.type = 254U;
    msg.utc_year = 18412U;
    msg.utc_month = 133U;
    msg.utc_day = 2U;
    msg.utc_time = 0.862584349373;
    msg.lat = 0.220234511418;
    msg.lon = 0.517403759728;
    msg.height = 0.556670138437;
    msg.satellites = 147U;
    msg.cog = 0.757464474886;
    msg.sog = 0.371714250934;
    msg.hdop = 0.595960417323;
    msg.vdop = 0.668947660795;
    msg.hacc = 0.152694345928;
    msg.vacc = 0.235254479776;

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
    msg.setTimeStamp(0.592301284809);
    msg.setSource(30754U);
    msg.setSourceEntity(186U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(48U);
    msg.validity = 21854U;
    msg.type = 99U;
    msg.utc_year = 9378U;
    msg.utc_month = 53U;
    msg.utc_day = 201U;
    msg.utc_time = 0.314644401347;
    msg.lat = 0.636194839156;
    msg.lon = 0.326360468973;
    msg.height = 0.479479812954;
    msg.satellites = 246U;
    msg.cog = 0.961422653024;
    msg.sog = 0.152527409822;
    msg.hdop = 0.783365016299;
    msg.vdop = 0.848855967977;
    msg.hacc = 0.638256224687;
    msg.vacc = 0.568988507642;

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
    msg.setTimeStamp(0.182359035517);
    msg.setSource(25853U);
    msg.setSourceEntity(63U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(236U);
    msg.validity = 31692U;
    msg.type = 130U;
    msg.utc_year = 17655U;
    msg.utc_month = 29U;
    msg.utc_day = 252U;
    msg.utc_time = 0.121722170126;
    msg.lat = 0.432107772674;
    msg.lon = 0.531769340532;
    msg.height = 0.872324172584;
    msg.satellites = 216U;
    msg.cog = 0.246961338432;
    msg.sog = 0.895184766557;
    msg.hdop = 0.539691852601;
    msg.vdop = 0.627308606412;
    msg.hacc = 0.0213693654164;
    msg.vacc = 0.805643120443;

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
    msg.setTimeStamp(0.203747257864);
    msg.setSource(6568U);
    msg.setSourceEntity(231U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(52U);
    msg.time = 0.583990774906;
    msg.phi = 0.546594175531;
    msg.theta = 0.688378412909;
    msg.psi = 0.834136694722;
    msg.psi_magnetic = 0.390338576089;

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
    msg.setTimeStamp(0.847680427234);
    msg.setSource(6925U);
    msg.setSourceEntity(253U);
    msg.setDestination(5032U);
    msg.setDestinationEntity(98U);
    msg.time = 0.808104735327;
    msg.phi = 0.368590826573;
    msg.theta = 0.0510532478071;
    msg.psi = 0.810442890155;
    msg.psi_magnetic = 0.554169197613;

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
    msg.setTimeStamp(0.681938587483);
    msg.setSource(38309U);
    msg.setSourceEntity(165U);
    msg.setDestination(55530U);
    msg.setDestinationEntity(24U);
    msg.time = 0.102593375504;
    msg.phi = 0.0165467497607;
    msg.theta = 0.0276253230253;
    msg.psi = 0.791405593853;
    msg.psi_magnetic = 0.41518138257;

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
    msg.setTimeStamp(0.520616353224);
    msg.setSource(8533U);
    msg.setSourceEntity(141U);
    msg.setDestination(1391U);
    msg.setDestinationEntity(25U);
    msg.time = 0.709696553346;
    msg.x = 0.258408412639;
    msg.y = 0.948485536472;
    msg.z = 0.527390452669;
    msg.timestep = 0.303728964029;

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
    msg.setTimeStamp(0.724555763862);
    msg.setSource(19461U);
    msg.setSourceEntity(71U);
    msg.setDestination(27077U);
    msg.setDestinationEntity(2U);
    msg.time = 0.85566673131;
    msg.x = 0.261302332634;
    msg.y = 0.31798795138;
    msg.z = 0.842205081936;
    msg.timestep = 0.320486939478;

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
    msg.setTimeStamp(0.794221815411);
    msg.setSource(33694U);
    msg.setSourceEntity(249U);
    msg.setDestination(34638U);
    msg.setDestinationEntity(244U);
    msg.time = 0.342702768165;
    msg.x = 0.770428592312;
    msg.y = 0.81960256241;
    msg.z = 0.164347969892;
    msg.timestep = 0.890069554751;

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
    msg.setTimeStamp(0.851356474053);
    msg.setSource(13185U);
    msg.setSourceEntity(246U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(89U);
    msg.time = 0.889424748638;
    msg.x = 0.913152960395;
    msg.y = 0.0665412597811;
    msg.z = 0.224696333815;

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
    msg.setTimeStamp(0.237835370952);
    msg.setSource(19517U);
    msg.setSourceEntity(204U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(184U);
    msg.time = 0.846641472913;
    msg.x = 0.671456204858;
    msg.y = 0.169010480236;
    msg.z = 0.680237198477;

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
    msg.setTimeStamp(0.798800370528);
    msg.setSource(55399U);
    msg.setSourceEntity(249U);
    msg.setDestination(57285U);
    msg.setDestinationEntity(144U);
    msg.time = 0.409214729524;
    msg.x = 0.637857947623;
    msg.y = 0.500601675363;
    msg.z = 0.721200530787;

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
    msg.setTimeStamp(0.191724851683);
    msg.setSource(15993U);
    msg.setSourceEntity(57U);
    msg.setDestination(17881U);
    msg.setDestinationEntity(246U);
    msg.time = 0.771191619253;
    msg.x = 0.928662507678;
    msg.y = 0.921064485582;
    msg.z = 0.940247234978;

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
    msg.setTimeStamp(0.300788556608);
    msg.setSource(19288U);
    msg.setSourceEntity(24U);
    msg.setDestination(24424U);
    msg.setDestinationEntity(11U);
    msg.time = 0.909328798127;
    msg.x = 0.399338558653;
    msg.y = 0.989659647462;
    msg.z = 0.722233848575;

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
    msg.setTimeStamp(0.0856447681534);
    msg.setSource(11261U);
    msg.setSourceEntity(119U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(236U);
    msg.time = 0.750593855389;
    msg.x = 0.44272155921;
    msg.y = 0.0398036900425;
    msg.z = 0.934393449779;

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
    msg.setTimeStamp(0.0980698707551);
    msg.setSource(12533U);
    msg.setSourceEntity(93U);
    msg.setDestination(52796U);
    msg.setDestinationEntity(162U);
    msg.time = 0.489448650338;
    msg.x = 0.822729623022;
    msg.y = 0.409883327589;
    msg.z = 0.687893906638;

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
    msg.setTimeStamp(0.0473115106759);
    msg.setSource(9464U);
    msg.setSourceEntity(180U);
    msg.setDestination(28243U);
    msg.setDestinationEntity(253U);
    msg.time = 0.051563223631;
    msg.x = 0.0657442723344;
    msg.y = 0.275679600281;
    msg.z = 0.424467948721;

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
    msg.setTimeStamp(0.0755841224593);
    msg.setSource(40549U);
    msg.setSourceEntity(140U);
    msg.setDestination(64077U);
    msg.setDestinationEntity(238U);
    msg.time = 0.223064232084;
    msg.x = 0.705417616514;
    msg.y = 0.961982061044;
    msg.z = 0.628299594851;

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
    msg.setTimeStamp(0.969896922854);
    msg.setSource(57940U);
    msg.setSourceEntity(243U);
    msg.setDestination(36933U);
    msg.setDestinationEntity(215U);
    msg.validity = 182U;
    msg.x = 0.17369422606;
    msg.y = 0.779751359548;
    msg.z = 0.772944268751;

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
    msg.setTimeStamp(0.668976161319);
    msg.setSource(15161U);
    msg.setSourceEntity(108U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(89U);
    msg.validity = 42U;
    msg.x = 0.488183079965;
    msg.y = 0.575768582232;
    msg.z = 0.735929049245;

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
    msg.setTimeStamp(0.782105362738);
    msg.setSource(36829U);
    msg.setSourceEntity(85U);
    msg.setDestination(57731U);
    msg.setDestinationEntity(148U);
    msg.validity = 245U;
    msg.x = 0.625516917361;
    msg.y = 0.71638607314;
    msg.z = 0.745733794081;

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
    msg.setTimeStamp(0.766588021229);
    msg.setSource(22699U);
    msg.setSourceEntity(204U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(133U);
    msg.validity = 182U;
    msg.x = 0.471736983176;
    msg.y = 0.997408626001;
    msg.z = 0.753135852348;

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
    msg.setTimeStamp(0.694705207654);
    msg.setSource(42940U);
    msg.setSourceEntity(171U);
    msg.setDestination(62084U);
    msg.setDestinationEntity(98U);
    msg.validity = 228U;
    msg.x = 0.212198875153;
    msg.y = 0.733413997646;
    msg.z = 0.0549107578632;

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
    msg.setTimeStamp(0.546915752591);
    msg.setSource(8642U);
    msg.setSourceEntity(184U);
    msg.setDestination(59868U);
    msg.setDestinationEntity(207U);
    msg.validity = 121U;
    msg.x = 0.405754135349;
    msg.y = 0.88068614906;
    msg.z = 0.871181402464;

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
    msg.setTimeStamp(0.544564635819);
    msg.setSource(48171U);
    msg.setSourceEntity(184U);
    msg.setDestination(15938U);
    msg.setDestinationEntity(159U);
    msg.time = 0.973663905663;
    msg.x = 0.463765520693;
    msg.y = 0.328995051421;
    msg.z = 0.854205361533;

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
    msg.setTimeStamp(0.549076927007);
    msg.setSource(37263U);
    msg.setSourceEntity(27U);
    msg.setDestination(39420U);
    msg.setDestinationEntity(139U);
    msg.time = 0.939390121989;
    msg.x = 0.0764114483271;
    msg.y = 0.489095291683;
    msg.z = 0.545502351774;

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
    msg.setTimeStamp(0.879997624741);
    msg.setSource(26895U);
    msg.setSourceEntity(118U);
    msg.setDestination(4889U);
    msg.setDestinationEntity(66U);
    msg.time = 0.0456358918702;
    msg.x = 0.223468076179;
    msg.y = 0.077349640742;
    msg.z = 0.058939064034;

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
    msg.setTimeStamp(0.691376974685);
    msg.setSource(4992U);
    msg.setSourceEntity(130U);
    msg.setDestination(61688U);
    msg.setDestinationEntity(203U);
    msg.validity = 70U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.451201862054;
    tmp_msg_0.y = 0.983111384648;
    tmp_msg_0.z = 0.0940179837464;
    tmp_msg_0.phi = 0.432366880068;
    tmp_msg_0.theta = 0.591810872091;
    tmp_msg_0.psi = 0.00308319732567;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.292407586873;

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
    msg.setTimeStamp(0.511015016448);
    msg.setSource(64286U);
    msg.setSourceEntity(245U);
    msg.setDestination(5650U);
    msg.setDestinationEntity(205U);
    msg.validity = 237U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.788400295238;
    tmp_msg_0.y = 0.0922928697796;
    tmp_msg_0.z = 0.651518365512;
    tmp_msg_0.phi = 0.037331952753;
    tmp_msg_0.theta = 0.907376693356;
    tmp_msg_0.psi = 0.0969910145615;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.982902967239;
    tmp_msg_1.beam_height = 0.787399151861;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.493395476131;

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
    msg.setTimeStamp(0.378527749502);
    msg.setSource(11483U);
    msg.setSourceEntity(162U);
    msg.setDestination(14333U);
    msg.setDestinationEntity(123U);
    msg.validity = 130U;
    msg.value = 0.932488195057;

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
    msg.setTimeStamp(0.51885627448);
    msg.setSource(31795U);
    msg.setSourceEntity(251U);
    msg.setDestination(26837U);
    msg.setDestinationEntity(7U);
    msg.value = 0.143624945959;

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
    msg.setTimeStamp(0.560845136026);
    msg.setSource(10454U);
    msg.setSourceEntity(5U);
    msg.setDestination(19457U);
    msg.setDestinationEntity(108U);
    msg.value = 0.148597674841;

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
    msg.setTimeStamp(0.75170625259);
    msg.setSource(17456U);
    msg.setSourceEntity(8U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(80U);
    msg.value = 0.244142093913;

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
    msg.setTimeStamp(0.723151174902);
    msg.setSource(42697U);
    msg.setSourceEntity(238U);
    msg.setDestination(36407U);
    msg.setDestinationEntity(127U);
    msg.value = 0.931113517998;

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
    msg.setTimeStamp(0.726893705981);
    msg.setSource(15702U);
    msg.setSourceEntity(108U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(100U);
    msg.value = 0.235264224088;

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
    msg.setTimeStamp(0.591568918894);
    msg.setSource(4218U);
    msg.setSourceEntity(216U);
    msg.setDestination(43180U);
    msg.setDestinationEntity(72U);
    msg.value = 0.964269817463;

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
    msg.setTimeStamp(0.0381337906758);
    msg.setSource(47512U);
    msg.setSourceEntity(175U);
    msg.setDestination(24721U);
    msg.setDestinationEntity(156U);
    msg.value = 0.994456478083;

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
    msg.setTimeStamp(0.574037231442);
    msg.setSource(29753U);
    msg.setSourceEntity(82U);
    msg.setDestination(48173U);
    msg.setDestinationEntity(113U);
    msg.value = 0.495493828538;

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
    msg.setTimeStamp(0.908880013159);
    msg.setSource(33595U);
    msg.setSourceEntity(113U);
    msg.setDestination(17370U);
    msg.setDestinationEntity(237U);
    msg.value = 0.801463225825;

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
    msg.setTimeStamp(0.846956705691);
    msg.setSource(47821U);
    msg.setSourceEntity(60U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(62U);
    msg.value = 0.657043490384;

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
    msg.setTimeStamp(0.75129859514);
    msg.setSource(51222U);
    msg.setSourceEntity(55U);
    msg.setDestination(27789U);
    msg.setDestinationEntity(129U);
    msg.value = 0.481767866873;

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
    msg.setTimeStamp(0.132161450828);
    msg.setSource(45015U);
    msg.setSourceEntity(111U);
    msg.setDestination(29705U);
    msg.setDestinationEntity(44U);
    msg.value = 0.270882412422;

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
    msg.setTimeStamp(0.408327893049);
    msg.setSource(22789U);
    msg.setSourceEntity(18U);
    msg.setDestination(19344U);
    msg.setDestinationEntity(171U);
    msg.value = 0.753197751517;

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
    msg.setTimeStamp(0.283296826427);
    msg.setSource(46770U);
    msg.setSourceEntity(231U);
    msg.setDestination(1865U);
    msg.setDestinationEntity(53U);
    msg.value = 0.747700387991;

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
    msg.setTimeStamp(0.370582990886);
    msg.setSource(83U);
    msg.setSourceEntity(56U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(223U);
    msg.value = 0.957662507893;

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
    msg.setTimeStamp(0.0971642973851);
    msg.setSource(55187U);
    msg.setSourceEntity(183U);
    msg.setDestination(42675U);
    msg.setDestinationEntity(203U);
    msg.value = 0.546746020145;

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
    msg.setTimeStamp(0.692913062134);
    msg.setSource(35894U);
    msg.setSourceEntity(60U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0904571380818;

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
    msg.setTimeStamp(0.167136292633);
    msg.setSource(4034U);
    msg.setSourceEntity(19U);
    msg.setDestination(29375U);
    msg.setDestinationEntity(198U);
    msg.value = 0.423958620221;

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
    msg.setTimeStamp(0.885864781807);
    msg.setSource(64798U);
    msg.setSourceEntity(82U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(170U);
    msg.value = 0.929866638021;

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
    msg.setTimeStamp(0.0559054823677);
    msg.setSource(37604U);
    msg.setSourceEntity(117U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(77U);
    msg.value = 0.689921474555;

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
    msg.setTimeStamp(0.396291420041);
    msg.setSource(29321U);
    msg.setSourceEntity(83U);
    msg.setDestination(30375U);
    msg.setDestinationEntity(11U);
    msg.value = 0.264105186271;

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
    msg.setTimeStamp(0.631288198397);
    msg.setSource(12289U);
    msg.setSourceEntity(27U);
    msg.setDestination(8210U);
    msg.setDestinationEntity(189U);
    msg.value = 0.939528951148;

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
    msg.setTimeStamp(0.00748073353751);
    msg.setSource(8901U);
    msg.setSourceEntity(35U);
    msg.setDestination(64569U);
    msg.setDestinationEntity(47U);
    msg.value = 0.109999820321;

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
    msg.setTimeStamp(0.427805665282);
    msg.setSource(58240U);
    msg.setSourceEntity(139U);
    msg.setDestination(54841U);
    msg.setDestinationEntity(94U);
    msg.value = 0.101479944957;

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
    msg.setTimeStamp(0.576506589674);
    msg.setSource(37188U);
    msg.setSourceEntity(149U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(46U);
    msg.direction = 0.0245393735431;
    msg.speed = 0.862686639721;
    msg.turbulence = 0.875888336141;

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
    msg.setTimeStamp(0.850612466424);
    msg.setSource(20376U);
    msg.setSourceEntity(115U);
    msg.setDestination(34220U);
    msg.setDestinationEntity(183U);
    msg.direction = 0.236524580856;
    msg.speed = 0.948680931946;
    msg.turbulence = 0.0375230863059;

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
    msg.setTimeStamp(0.996493927943);
    msg.setSource(60453U);
    msg.setSourceEntity(83U);
    msg.setDestination(18544U);
    msg.setDestinationEntity(124U);
    msg.direction = 0.23752738957;
    msg.speed = 0.0114063783922;
    msg.turbulence = 0.751534160543;

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
    msg.setTimeStamp(0.979524261929);
    msg.setSource(39895U);
    msg.setSourceEntity(158U);
    msg.setDestination(5872U);
    msg.setDestinationEntity(141U);
    msg.value = 0.515530340755;

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
    msg.setTimeStamp(0.526323889629);
    msg.setSource(45205U);
    msg.setSourceEntity(204U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(119U);
    msg.value = 0.643132425993;

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
    msg.setTimeStamp(0.512590570488);
    msg.setSource(59090U);
    msg.setSourceEntity(246U);
    msg.setDestination(706U);
    msg.setDestinationEntity(152U);
    msg.value = 0.984513250528;

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
    msg.setTimeStamp(0.782989805891);
    msg.setSource(2822U);
    msg.setSourceEntity(11U);
    msg.setDestination(49993U);
    msg.setDestinationEntity(221U);
    msg.value.assign("EJIKYLMAJDDKEZECJNIUWBMQBGFWACBQBDXRCPQCJIVMMJMSEZUSPRVKKOGHTLKWTAAJPSLYWNCSPTFGFSBVQUVRDTUICQHVGOBWYMCXWRNUIVOZXAQUNHOTHREJMPLNCJXKNEABHKPCDEIVOWEHYPFPHYIOSQAXTFBLRGFYZLXJAFNSSGWVGODY");

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
    msg.setTimeStamp(0.557920320617);
    msg.setSource(14852U);
    msg.setSourceEntity(40U);
    msg.setDestination(7929U);
    msg.setDestinationEntity(113U);
    msg.value.assign("NBKNIIVOHUGF");

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
    msg.setTimeStamp(0.101763865425);
    msg.setSource(109U);
    msg.setSourceEntity(167U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(252U);
    msg.value.assign("DTALBDFOINLMUNIOHSCIJGEHYOKDLJFGWDBHHONIHCYGFFXRDPWKYIWDZEJPJNUTRZWVIZWWMQPLWGHYMAASQSOUXEQRVMFBPRZYHJBFGRUTCLPUUASSFJELJNYKYWTBBCUSZVXQJNUCEDPPGAMANYGMDNGHIXPJKZBKZUJSBTAEWCECOTXGSCTEOZKAINTMSFTVLEYRXKGCDKRMQREKZAHS");

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
    msg.setTimeStamp(0.938288388776);
    msg.setSource(9073U);
    msg.setSourceEntity(123U);
    msg.setDestination(50927U);
    msg.setDestinationEntity(253U);
    const char tmp_msg_0[] = {-39, -8, 92, -115, 53, -45, -90, 54, 0, 65, 107, -101, 124, -20, -109, -81, -109, 70, 51, 125, -122, 46, 98, -5, 63, 51, 23, -127, 77, -71, -87, -22, -70, 47, 54, -59, -49, -102, -105, 125, 2, -81, 87, -111, -61, 110, -56, 45, -110, 77, 92, 87, -76, -110, 68, -82, -73, 92, 87, -26, 14, -56, -37, -97, 29, -78, -56, -76, -94, 37, 123, -128, -101, 83, -25, -25, -35, -90, 21, -2, 24, 124, -89, 18, -83, -6, 22, -27, -116, 75, -21, -16, -114, -111, 84, -95, -12, -124, -1, -24, 126, 48, -85, 63, 103, -121, 64, -32, -28, 122, -5, 104, -20, 3, 58, 1, -49, -97, 11, -78, 106, 99, -108, -65, 68, -4, 73, -119, 27, 30, 95, -64, 24, -46, 31, -50, -101, -85, -12, -124, 68, 121, 20, -121, -122, 68, 125, -84, 37, 2, -49, -78, -69, 48, -73, 43, -100, -111, 109, 45, 66, -44, -31, -115, -23, -80, 27, -25, -68, 61, -61, 3, -39, -83, 55, 15, -78, -116, 32, 20, -66, -97, -58, 96, -112, 28, -23};
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
    msg.setTimeStamp(0.214127527177);
    msg.setSource(25763U);
    msg.setSourceEntity(58U);
    msg.setDestination(26091U);
    msg.setDestinationEntity(36U);
    const char tmp_msg_0[] = {55, 8, -42, -92, 52, 91, -61, 46, 74, 73, 126, -118, -32, 120, -21, 118, -113, 2, 118, -55, 40, 100, -115, 80, 100, -120, 95, 77, -127, 16, -62, 47, 74, -88, 126, 34, 53, -43, -124, 89, -78, 39, 100, -37, 24, 97, 10, 95, -35, 32, -32, 102, 58, -60, -46, -23, 110, 12, 61, 83, -124, 19, 0, -60, 103, -48, 120, 116, 95, -126, -52, 19, 120, -96, -6, -126, 110};
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
    msg.setTimeStamp(0.446422921197);
    msg.setSource(50792U);
    msg.setSourceEntity(43U);
    msg.setDestination(62319U);
    msg.setDestinationEntity(171U);
    const char tmp_msg_0[] = {-87, 56, -20, -50, -95, 78, -16, -99, 123, -68, -63, 48, 72, -34, 123, 86, -22, -113, 50, -31, -94, -8, 87, 84, 114, -66, -115, 1, 12, 20, 32, 39, 21, 37, 85, 14, -21, 117, -116, -13, -57, 105, 97, -13, 108, 126, 31, 85, 102};
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
    IMC::Force msg;
    msg.setTimeStamp(0.524007104762);
    msg.setSource(48641U);
    msg.setSourceEntity(151U);
    msg.setDestination(20075U);
    msg.setDestinationEntity(172U);
    msg.value = 0.339527748549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.358797363877);
    msg.setSource(33831U);
    msg.setSourceEntity(45U);
    msg.setDestination(47500U);
    msg.setDestinationEntity(143U);
    msg.value = 0.818028926279;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.639336264972);
    msg.setSource(24140U);
    msg.setSourceEntity(3U);
    msg.setDestination(31005U);
    msg.setDestinationEntity(110U);
    msg.value = 0.972493806926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
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
    msg.setTimeStamp(0.362773083996);
    msg.setSource(10122U);
    msg.setSourceEntity(32U);
    msg.setDestination(13003U);
    msg.setDestinationEntity(247U);
    msg.type = 56U;
    msg.frequency = 2451139480U;
    msg.min_range = 50895U;
    msg.max_range = 9788U;
    msg.bits_per_point = 165U;
    msg.scale_factor = 0.578748606656;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.470099766339;
    tmp_msg_0.beam_height = 0.285504228378;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {121, 32, 110, -39, 55, 107, -119, 124, -28, -52, -118, 4, -69, 20, -85, 109, -91, 10, -121, 81, 98, 1, -38, -114, 8, -105, 76, -67, -79, -15, 38, -22, 58, 26, -43, -11, 105, -16, 23, 23, 73, 21, 12, -103, -87, 113, 16, 25, 37, -88, -61, -38, -108, -120, 76, 9, -53, 109, 15, -44, 26, -16, 48, -95, -64, -117, 126, 43, 87, -32, -41, 126, 30, -23, 20, -17, -16, -99, 78, 0, 11, -52, 16, 74, -34, 91, -23, 59, 72, -28, 28, 52, -21, 118, -29, -84, 7, -122, -119, -122, -22, 26, -46, 33, 72, -126, 84, 52, 89, 113, -91, 26, -4, 28, 28, -84, -64, -17, -26, 121, -15, 14, 9, 90, -128, -64, 120, 3, 104, -117};
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
    msg.setTimeStamp(0.911584176845);
    msg.setSource(33810U);
    msg.setSourceEntity(199U);
    msg.setDestination(18333U);
    msg.setDestinationEntity(189U);
    msg.type = 145U;
    msg.frequency = 1992244363U;
    msg.min_range = 48027U;
    msg.max_range = 63481U;
    msg.bits_per_point = 203U;
    msg.scale_factor = 0.133637778154;
    const char tmp_msg_0[] = {-80, 104, 59, 126, 42, -51, 51, 111, 75, 39, 63, 32, 60, -121, -71, -107, -109, -105, -37, 43, 95, -8, -82, 91, 72, 8, -103, -46, -91, -84, -74, -2, -91, 106, 59, 4, 28, -18, 8, 94, -118, 24, 44, 42, -59, -90, -55, 54, -25, 20, 69, 37, -78, 47, 29, 48, -72, 33, 65, 64, -111, -59, 4, 85, 125, -116, 100, -16, 4, -87, 17, -96, 115, 95, -71, -104, 31, 52, 71, 121, 84, 60, 41, -24, 89, -97, 31, 65, -126, 68, 94, -66, 74, 29, 37, -79, -38, 80, 123, -79, -60, -107, 72, 106, -126, 14, -56, -88, 18, -32, -20, -59, 44, 65, 95, -9};
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
    msg.setTimeStamp(0.402153116705);
    msg.setSource(21596U);
    msg.setSourceEntity(2U);
    msg.setDestination(25053U);
    msg.setDestinationEntity(84U);
    msg.type = 239U;
    msg.frequency = 394342614U;
    msg.min_range = 49226U;
    msg.max_range = 6020U;
    msg.bits_per_point = 42U;
    msg.scale_factor = 0.00437555173729;
    const char tmp_msg_0[] = {-76, -100, -2, 4, 126, -86, 87, 17, 119, 54, 28, -62, 1, -23, -118, 36, 36, -93, -119, -38, -61, -24, -23, 22, -57, -46, 64, -101, -40, 48, -50, 35, 117, 88, -71, 40, -40, 1, 108, -107, 38, -67, 54, -24, -73, -110, -89, 0, 110, -63, -37, -124, -107, -14, -21, 111, 21, -29, -5, 109, 96, -107, -108, -118, 10, -119, 123, -92, -87, 51, -15, -112, 23, 49, 92, -3, 67, -16, 91, -33, 1, -9, 63, -127, 124, 113, -41, -41, 106, 6, 104, 90, 118, -2, -111, -19, -87, -48, 25, -104, -6, 1, -96, -49, 20, -26, -6, -28, -99, -113, 30, -59, -93, 120, 48, -108, -91, 53, -11, -99, -38, 93, -13, 74, 25, -88, -35, 69};
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
    msg.setTimeStamp(0.111545501224);
    msg.setSource(45581U);
    msg.setSourceEntity(55U);
    msg.setDestination(9648U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.976224014676);
    msg.setSource(44107U);
    msg.setSourceEntity(45U);
    msg.setDestination(52982U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.506166078368);
    msg.setSource(60580U);
    msg.setSourceEntity(181U);
    msg.setDestination(51762U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.0840028567288);
    msg.setSource(64630U);
    msg.setSourceEntity(118U);
    msg.setDestination(50765U);
    msg.setDestinationEntity(170U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.344091978251);
    msg.setSource(29363U);
    msg.setSourceEntity(105U);
    msg.setDestination(35732U);
    msg.setDestinationEntity(133U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.273778603487);
    msg.setSource(61079U);
    msg.setSourceEntity(99U);
    msg.setDestination(9724U);
    msg.setDestinationEntity(195U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.73857561329);
    msg.setSource(29434U);
    msg.setSourceEntity(57U);
    msg.setDestination(44231U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0845043129151;
    msg.confidence = 0.86330423895;
    msg.opmodes.assign("ZKFZQHHWHFUFLLKEMSLVGVBHJTZQLSUKDSBCXWTLZIJLUCCIMTFYDEOHXVRGBDDFUQADFGEECNUQZKOJMCFNCZASXTRGANUNKEICQKQFNBHEETXRMWGASNYGMZSJDTKMATAJUPDYYYEXYRONT");

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
    msg.setTimeStamp(0.68074931651);
    msg.setSource(35923U);
    msg.setSourceEntity(47U);
    msg.setDestination(12203U);
    msg.setDestinationEntity(200U);
    msg.value = 0.132229479271;
    msg.confidence = 0.269715468682;
    msg.opmodes.assign("MZCSOKHYNGXLREEPVFMORDTSNQXLLMSOUNHDBUYWVUQSHOXZCEKUEWOXHEIQFBFQALIY");

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
    msg.setTimeStamp(0.401956201713);
    msg.setSource(27330U);
    msg.setSourceEntity(35U);
    msg.setDestination(32474U);
    msg.setDestinationEntity(204U);
    msg.value = 0.817501836175;
    msg.confidence = 0.880136283232;
    msg.opmodes.assign("EZLYLRIEDJPZFZZLIUXKBMSTOVQSHYAIGYFJGGEQGRDNUVGDXABLONQPQNSIAWLZFIMVCCPUTTSPUZBXYNCBCLRERVAKBIMVABTMXPTOECABWJUHFREL");

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
    msg.setTimeStamp(0.961294594004);
    msg.setSource(54705U);
    msg.setSourceEntity(177U);
    msg.setDestination(16752U);
    msg.setDestinationEntity(147U);
    msg.itow = 1848675006U;
    msg.lat = 0.361173951986;
    msg.lon = 0.595286281396;
    msg.height_ell = 0.399538677566;
    msg.height_sea = 0.363877812902;
    msg.hacc = 0.42538596947;
    msg.vacc = 0.357481879942;
    msg.vel_n = 0.808380936281;
    msg.vel_e = 0.318102816205;
    msg.vel_d = 0.881567640518;
    msg.speed = 0.875865197374;
    msg.gspeed = 0.807362633204;
    msg.heading = 0.903406871284;
    msg.sacc = 0.671072124924;
    msg.cacc = 0.995622546629;

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
    msg.setTimeStamp(0.56742266805);
    msg.setSource(45015U);
    msg.setSourceEntity(45U);
    msg.setDestination(39987U);
    msg.setDestinationEntity(226U);
    msg.itow = 2383884270U;
    msg.lat = 0.242116919417;
    msg.lon = 0.829293001923;
    msg.height_ell = 0.633695269375;
    msg.height_sea = 0.898032882533;
    msg.hacc = 0.278658986336;
    msg.vacc = 0.072828554521;
    msg.vel_n = 0.48092020576;
    msg.vel_e = 0.573724570071;
    msg.vel_d = 0.771278317682;
    msg.speed = 0.859344133199;
    msg.gspeed = 0.6028054589;
    msg.heading = 0.858345194748;
    msg.sacc = 0.54157846393;
    msg.cacc = 0.948562976181;

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
    msg.setTimeStamp(0.956635327335);
    msg.setSource(59698U);
    msg.setSourceEntity(161U);
    msg.setDestination(49003U);
    msg.setDestinationEntity(200U);
    msg.itow = 335612909U;
    msg.lat = 0.760363634101;
    msg.lon = 0.948101194567;
    msg.height_ell = 0.481155786459;
    msg.height_sea = 0.821001835806;
    msg.hacc = 0.720174898559;
    msg.vacc = 0.967127240475;
    msg.vel_n = 0.16935438975;
    msg.vel_e = 0.648676445524;
    msg.vel_d = 0.521629464167;
    msg.speed = 0.075895337326;
    msg.gspeed = 0.85537984203;
    msg.heading = 0.98579452298;
    msg.sacc = 0.661846411836;
    msg.cacc = 0.28399881565;

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
    msg.setTimeStamp(0.233854277739);
    msg.setSource(31239U);
    msg.setSourceEntity(247U);
    msg.setDestination(31041U);
    msg.setDestinationEntity(116U);
    msg.id = 187U;
    msg.value = 0.454526054619;

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
    msg.setTimeStamp(0.120882557968);
    msg.setSource(56311U);
    msg.setSourceEntity(39U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(193U);
    msg.id = 87U;
    msg.value = 0.730959305757;

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
    msg.setTimeStamp(0.201264255577);
    msg.setSource(31112U);
    msg.setSourceEntity(65U);
    msg.setDestination(31463U);
    msg.setDestinationEntity(172U);
    msg.id = 111U;
    msg.value = 0.0992988915457;

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
    msg.setTimeStamp(0.358396925443);
    msg.setSource(48781U);
    msg.setSourceEntity(90U);
    msg.setDestination(62133U);
    msg.setDestinationEntity(27U);
    msg.x = 0.658011692265;
    msg.y = 0.423257678728;
    msg.z = 0.35882264587;
    msg.phi = 0.131742235257;
    msg.theta = 0.100545687312;
    msg.psi = 0.242705097233;

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
    msg.setTimeStamp(0.616631737361);
    msg.setSource(57393U);
    msg.setSourceEntity(30U);
    msg.setDestination(35268U);
    msg.setDestinationEntity(91U);
    msg.x = 0.776164475143;
    msg.y = 0.470856035445;
    msg.z = 0.329378242882;
    msg.phi = 0.198384133108;
    msg.theta = 0.524967326956;
    msg.psi = 0.181238187588;

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
    msg.setTimeStamp(0.488611610909);
    msg.setSource(24169U);
    msg.setSourceEntity(70U);
    msg.setDestination(53313U);
    msg.setDestinationEntity(4U);
    msg.x = 0.144983071024;
    msg.y = 0.233758207749;
    msg.z = 0.151470580886;
    msg.phi = 0.533278934519;
    msg.theta = 0.97873711871;
    msg.psi = 0.123428103184;

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
    msg.setTimeStamp(0.343333911457);
    msg.setSource(59761U);
    msg.setSourceEntity(169U);
    msg.setDestination(29207U);
    msg.setDestinationEntity(178U);
    msg.beam_width = 0.166086288416;
    msg.beam_height = 0.959487964116;

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
    msg.setTimeStamp(0.87260896377);
    msg.setSource(36689U);
    msg.setSourceEntity(165U);
    msg.setDestination(44098U);
    msg.setDestinationEntity(201U);
    msg.beam_width = 0.673514565579;
    msg.beam_height = 0.643363096338;

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
    msg.setTimeStamp(0.296727528608);
    msg.setSource(6122U);
    msg.setSourceEntity(116U);
    msg.setDestination(48858U);
    msg.setDestinationEntity(223U);
    msg.beam_width = 0.459947756443;
    msg.beam_height = 0.0182375608383;

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
    msg.setTimeStamp(0.186379210427);
    msg.setSource(25524U);
    msg.setSourceEntity(166U);
    msg.setDestination(17876U);
    msg.setDestinationEntity(149U);
    msg.sane = 102U;

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
    msg.setTimeStamp(0.536589480872);
    msg.setSource(9794U);
    msg.setSourceEntity(121U);
    msg.setDestination(1479U);
    msg.setDestinationEntity(40U);
    msg.sane = 239U;

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
    msg.setTimeStamp(0.676418067837);
    msg.setSource(3678U);
    msg.setSourceEntity(140U);
    msg.setDestination(7881U);
    msg.setDestinationEntity(40U);
    msg.sane = 25U;

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
    msg.setTimeStamp(0.072230355021);
    msg.setSource(22817U);
    msg.setSourceEntity(104U);
    msg.setDestination(18071U);
    msg.setDestinationEntity(2U);
    msg.value = 0.978478157677;

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
    msg.setTimeStamp(0.868764072968);
    msg.setSource(60931U);
    msg.setSourceEntity(208U);
    msg.setDestination(2560U);
    msg.setDestinationEntity(102U);
    msg.value = 0.32955366977;

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
    msg.setTimeStamp(0.266662962766);
    msg.setSource(36940U);
    msg.setSourceEntity(117U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(242U);
    msg.value = 0.40442338242;

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
    msg.setTimeStamp(0.433236995547);
    msg.setSource(46558U);
    msg.setSourceEntity(131U);
    msg.setDestination(39889U);
    msg.setDestinationEntity(230U);
    msg.value = 0.879736597641;

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
    msg.setTimeStamp(0.576247488136);
    msg.setSource(27090U);
    msg.setSourceEntity(191U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(48U);
    msg.value = 0.134371008838;

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
    msg.setTimeStamp(0.128890594759);
    msg.setSource(38930U);
    msg.setSourceEntity(150U);
    msg.setDestination(57232U);
    msg.setDestinationEntity(28U);
    msg.value = 0.838521692604;

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
    msg.setTimeStamp(0.734574135803);
    msg.setSource(40279U);
    msg.setSourceEntity(78U);
    msg.setDestination(36359U);
    msg.setDestinationEntity(207U);
    msg.value = 0.381516196151;

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
    msg.setTimeStamp(0.986924641245);
    msg.setSource(29110U);
    msg.setSourceEntity(182U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(210U);
    msg.value = 0.145133381227;

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
    msg.setTimeStamp(0.0442769955657);
    msg.setSource(12192U);
    msg.setSourceEntity(55U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(111U);
    msg.value = 0.558346874257;

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
    msg.setTimeStamp(0.838377333349);
    msg.setSource(51998U);
    msg.setSourceEntity(209U);
    msg.setDestination(28410U);
    msg.setDestinationEntity(229U);
    msg.value = 0.986414800731;

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
    msg.setTimeStamp(0.16129112925);
    msg.setSource(23935U);
    msg.setSourceEntity(58U);
    msg.setDestination(52026U);
    msg.setDestinationEntity(95U);
    msg.value = 0.464407832241;

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
    msg.setTimeStamp(0.496999567305);
    msg.setSource(62206U);
    msg.setSourceEntity(28U);
    msg.setDestination(38451U);
    msg.setDestinationEntity(127U);
    msg.value = 0.762990588894;

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
    msg.setTimeStamp(0.670844419203);
    msg.setSource(63588U);
    msg.setSourceEntity(61U);
    msg.setDestination(54812U);
    msg.setDestinationEntity(132U);
    msg.value = 0.620341100267;

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
    msg.setTimeStamp(0.412149362584);
    msg.setSource(29062U);
    msg.setSourceEntity(71U);
    msg.setDestination(30865U);
    msg.setDestinationEntity(214U);
    msg.value = 0.490252089122;

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
    msg.setTimeStamp(0.385205179086);
    msg.setSource(43152U);
    msg.setSourceEntity(51U);
    msg.setDestination(58294U);
    msg.setDestinationEntity(225U);
    msg.value = 0.886334427178;

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
    msg.setTimeStamp(0.584094126564);
    msg.setSource(57942U);
    msg.setSourceEntity(181U);
    msg.setDestination(3393U);
    msg.setDestinationEntity(127U);
    msg.value = 0.144318857714;

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
    msg.setTimeStamp(0.742579607604);
    msg.setSource(34666U);
    msg.setSourceEntity(104U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(171U);
    msg.value = 0.391417370089;

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
    msg.setTimeStamp(0.508205685494);
    msg.setSource(32647U);
    msg.setSourceEntity(215U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(16U);
    msg.value = 0.971081045437;

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
    msg.setTimeStamp(0.835401086317);
    msg.setSource(36935U);
    msg.setSourceEntity(210U);
    msg.setDestination(33636U);
    msg.setDestinationEntity(201U);
    msg.value = 0.763185995572;

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
    msg.setTimeStamp(0.692317930921);
    msg.setSource(31292U);
    msg.setSourceEntity(82U);
    msg.setDestination(18963U);
    msg.setDestinationEntity(55U);
    msg.value = 0.668570488746;

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
    msg.setTimeStamp(0.699180323351);
    msg.setSource(63466U);
    msg.setSourceEntity(142U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(77U);
    msg.value = 0.53514236856;

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
    msg.setTimeStamp(0.45492635349);
    msg.setSource(59261U);
    msg.setSourceEntity(150U);
    msg.setDestination(53007U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0395958033019;

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
    msg.setTimeStamp(0.520534083263);
    msg.setSource(35712U);
    msg.setSourceEntity(83U);
    msg.setDestination(41366U);
    msg.setDestinationEntity(246U);
    msg.value = 0.139753503256;

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
    msg.setTimeStamp(0.804290375968);
    msg.setSource(11743U);
    msg.setSourceEntity(243U);
    msg.setDestination(7073U);
    msg.setDestinationEntity(128U);
    msg.value = 0.341610783281;

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
    msg.setTimeStamp(0.761846421274);
    msg.setSource(24702U);
    msg.setSourceEntity(8U);
    msg.setDestination(31006U);
    msg.setDestinationEntity(115U);
    msg.validity = 47945U;
    msg.type = 177U;
    msg.tow = 3460820448U;
    msg.base_lat = 0.812929294904;
    msg.base_lon = 0.202223015013;
    msg.base_height = 0.839927108886;
    msg.n = 0.236561719338;
    msg.e = 0.0439691659511;
    msg.d = 0.647992293002;
    msg.v_n = 0.241811212508;
    msg.v_e = 0.655316019842;
    msg.v_d = 0.850788141287;
    msg.satellites = 106U;
    msg.iar_hyp = 21162U;
    msg.iar_ratio = 0.171088586782;

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
    msg.setTimeStamp(0.130435322955);
    msg.setSource(3484U);
    msg.setSourceEntity(210U);
    msg.setDestination(29853U);
    msg.setDestinationEntity(185U);
    msg.validity = 12816U;
    msg.type = 230U;
    msg.tow = 2205492220U;
    msg.base_lat = 0.603036163204;
    msg.base_lon = 0.990101005389;
    msg.base_height = 0.0708653742435;
    msg.n = 0.478538080337;
    msg.e = 0.346782328533;
    msg.d = 0.771631592167;
    msg.v_n = 0.59759928081;
    msg.v_e = 0.47261528744;
    msg.v_d = 0.607188086298;
    msg.satellites = 149U;
    msg.iar_hyp = 46393U;
    msg.iar_ratio = 0.635983042709;

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
    msg.setTimeStamp(0.55416434852);
    msg.setSource(51898U);
    msg.setSourceEntity(144U);
    msg.setDestination(28959U);
    msg.setDestinationEntity(199U);
    msg.validity = 47898U;
    msg.type = 165U;
    msg.tow = 2838526409U;
    msg.base_lat = 0.82620302144;
    msg.base_lon = 0.475794645448;
    msg.base_height = 0.50877913801;
    msg.n = 0.177892293744;
    msg.e = 0.898004849307;
    msg.d = 0.221951144463;
    msg.v_n = 0.703046398996;
    msg.v_e = 0.790844959568;
    msg.v_d = 0.256681793395;
    msg.satellites = 215U;
    msg.iar_hyp = 47675U;
    msg.iar_ratio = 0.899668611389;

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
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.270549889285);
    msg.setSource(15132U);
    msg.setSourceEntity(40U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(243U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.478271379522;
    tmp_msg_0.lon = 0.591940400583;
    tmp_msg_0.height = 0.466688804035;
    tmp_msg_0.x = 0.745923511803;
    tmp_msg_0.y = 0.280100997454;
    tmp_msg_0.z = 0.334369448685;
    tmp_msg_0.phi = 0.874133654529;
    tmp_msg_0.theta = 0.0920732253994;
    tmp_msg_0.psi = 0.536666394924;
    tmp_msg_0.u = 0.704958943452;
    tmp_msg_0.v = 0.661938786316;
    tmp_msg_0.w = 0.364562825832;
    tmp_msg_0.vx = 0.913170204213;
    tmp_msg_0.vy = 0.737646654445;
    tmp_msg_0.vz = 0.0438951170253;
    tmp_msg_0.p = 0.572164168884;
    tmp_msg_0.q = 0.586026643623;
    tmp_msg_0.r = 0.618295420614;
    tmp_msg_0.depth = 0.393873682561;
    tmp_msg_0.alt = 0.737658832377;
    msg.state.set(tmp_msg_0);
    msg.type = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.983670821829);
    msg.setSource(25244U);
    msg.setSourceEntity(202U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(176U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.898114904527;
    tmp_msg_0.lon = 0.241923268451;
    tmp_msg_0.height = 0.943156883539;
    tmp_msg_0.x = 0.717282430002;
    tmp_msg_0.y = 0.487763728177;
    tmp_msg_0.z = 0.412472378446;
    tmp_msg_0.phi = 0.720735550068;
    tmp_msg_0.theta = 0.318076135068;
    tmp_msg_0.psi = 0.296951539162;
    tmp_msg_0.u = 0.95949834302;
    tmp_msg_0.v = 0.325033589141;
    tmp_msg_0.w = 0.392223001396;
    tmp_msg_0.vx = 0.298213736928;
    tmp_msg_0.vy = 0.328496855741;
    tmp_msg_0.vz = 0.557344031249;
    tmp_msg_0.p = 0.637490838801;
    tmp_msg_0.q = 0.99741516399;
    tmp_msg_0.r = 0.0708362301462;
    tmp_msg_0.depth = 0.615286501369;
    tmp_msg_0.alt = 0.072469811695;
    msg.state.set(tmp_msg_0);
    msg.type = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.774784570434);
    msg.setSource(58944U);
    msg.setSourceEntity(239U);
    msg.setDestination(63329U);
    msg.setDestinationEntity(233U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.462619560699;
    tmp_msg_0.lon = 0.779317860136;
    tmp_msg_0.height = 0.668114893231;
    tmp_msg_0.x = 0.235628046037;
    tmp_msg_0.y = 0.904156516826;
    tmp_msg_0.z = 0.339340250222;
    tmp_msg_0.phi = 0.483878934791;
    tmp_msg_0.theta = 0.646858586538;
    tmp_msg_0.psi = 0.0618742383295;
    tmp_msg_0.u = 0.63470976127;
    tmp_msg_0.v = 0.720638774669;
    tmp_msg_0.w = 0.749125743334;
    tmp_msg_0.vx = 0.512178272799;
    tmp_msg_0.vy = 0.476294136835;
    tmp_msg_0.vz = 0.967267238055;
    tmp_msg_0.p = 0.148008742796;
    tmp_msg_0.q = 0.960132310129;
    tmp_msg_0.r = 0.785455615282;
    tmp_msg_0.depth = 0.662414812271;
    tmp_msg_0.alt = 0.188811205584;
    msg.state.set(tmp_msg_0);
    msg.type = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.0799947961311);
    msg.setSource(51257U);
    msg.setSourceEntity(179U);
    msg.setDestination(40809U);
    msg.setDestinationEntity(156U);
    msg.value = 0.231077869236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.149977267621);
    msg.setSource(53868U);
    msg.setSourceEntity(8U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(237U);
    msg.value = 0.276804708873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.749986624464);
    msg.setSource(49478U);
    msg.setSourceEntity(245U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(228U);
    msg.value = 0.914183572209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.374082344891);
    msg.setSource(6336U);
    msg.setSourceEntity(41U);
    msg.setDestination(63358U);
    msg.setDestinationEntity(192U);
    msg.value = 0.528358040015;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.794099731216);
    msg.setSource(10293U);
    msg.setSourceEntity(56U);
    msg.setDestination(28977U);
    msg.setDestinationEntity(81U);
    msg.value = 0.918897928213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.293158986094);
    msg.setSource(36430U);
    msg.setSourceEntity(153U);
    msg.setDestination(14756U);
    msg.setDestinationEntity(160U);
    msg.value = 0.74016842302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.862695225136);
    msg.setSource(14196U);
    msg.setSourceEntity(184U);
    msg.setDestination(57303U);
    msg.setDestinationEntity(176U);
    msg.value = 0.548527484933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.586466948976);
    msg.setSource(29420U);
    msg.setSourceEntity(251U);
    msg.setDestination(11247U);
    msg.setDestinationEntity(179U);
    msg.value = 0.763535367696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.241140874984);
    msg.setSource(52209U);
    msg.setSourceEntity(244U);
    msg.setDestination(22997U);
    msg.setDestinationEntity(244U);
    msg.value = 0.287783418321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.257620932743);
    msg.setSource(29734U);
    msg.setSourceEntity(168U);
    msg.setDestination(58255U);
    msg.setDestinationEntity(228U);
    msg.value = 0.260617250134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.287792607137);
    msg.setSource(49995U);
    msg.setSourceEntity(28U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(35U);
    msg.value = 0.429632274799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.80400814057);
    msg.setSource(8786U);
    msg.setSourceEntity(205U);
    msg.setDestination(50520U);
    msg.setDestinationEntity(88U);
    msg.value = 0.0145733808897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.421499776682);
    msg.setSource(62282U);
    msg.setSourceEntity(102U);
    msg.setDestination(10183U);
    msg.setDestinationEntity(240U);
    msg.value = 0.376899736872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.286822104175);
    msg.setSource(56367U);
    msg.setSourceEntity(61U);
    msg.setDestination(44727U);
    msg.setDestinationEntity(15U);
    msg.value = 0.263356328125;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.133861345924);
    msg.setSource(29101U);
    msg.setSourceEntity(45U);
    msg.setDestination(29223U);
    msg.setDestinationEntity(215U);
    msg.value = 0.266177709106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
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
    msg.setTimeStamp(0.914744319544);
    msg.setSource(2230U);
    msg.setSourceEntity(194U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(182U);
    msg.id = 190U;
    msg.zoom = 104U;
    msg.action = 231U;

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
    msg.setTimeStamp(0.367414270093);
    msg.setSource(46309U);
    msg.setSourceEntity(106U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(117U);
    msg.id = 93U;
    msg.zoom = 112U;
    msg.action = 110U;

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
    msg.setTimeStamp(0.824707667409);
    msg.setSource(44371U);
    msg.setSourceEntity(158U);
    msg.setDestination(22715U);
    msg.setDestinationEntity(241U);
    msg.id = 72U;
    msg.zoom = 74U;
    msg.action = 40U;

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
    msg.setTimeStamp(0.938564371931);
    msg.setSource(9734U);
    msg.setSourceEntity(205U);
    msg.setDestination(13733U);
    msg.setDestinationEntity(62U);
    msg.id = 135U;
    msg.value = 0.118922508609;

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
    msg.setTimeStamp(0.153591523099);
    msg.setSource(34896U);
    msg.setSourceEntity(146U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(149U);
    msg.id = 26U;
    msg.value = 0.88060936724;

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
    msg.setTimeStamp(0.597790051355);
    msg.setSource(27525U);
    msg.setSourceEntity(38U);
    msg.setDestination(48807U);
    msg.setDestinationEntity(165U);
    msg.id = 130U;
    msg.value = 0.772407103662;

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
    msg.setTimeStamp(0.874705084545);
    msg.setSource(65402U);
    msg.setSourceEntity(186U);
    msg.setDestination(35376U);
    msg.setDestinationEntity(81U);
    msg.id = 205U;
    msg.value = 0.29779379767;

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
    msg.setTimeStamp(0.488547066626);
    msg.setSource(38979U);
    msg.setSourceEntity(46U);
    msg.setDestination(42823U);
    msg.setDestinationEntity(172U);
    msg.id = 180U;
    msg.value = 0.92821616627;

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
    msg.setTimeStamp(0.58274511976);
    msg.setSource(8751U);
    msg.setSourceEntity(27U);
    msg.setDestination(28311U);
    msg.setDestinationEntity(248U);
    msg.id = 185U;
    msg.value = 0.64850369621;

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
    msg.setTimeStamp(0.130603359962);
    msg.setSource(36806U);
    msg.setSourceEntity(165U);
    msg.setDestination(30023U);
    msg.setDestinationEntity(99U);
    msg.id = 181U;
    msg.angle = 0.444183082689;

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
    msg.setTimeStamp(0.912758669815);
    msg.setSource(48146U);
    msg.setSourceEntity(208U);
    msg.setDestination(54211U);
    msg.setDestinationEntity(240U);
    msg.id = 208U;
    msg.angle = 0.658941738374;

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
    msg.setTimeStamp(0.764130934989);
    msg.setSource(28878U);
    msg.setSourceEntity(237U);
    msg.setDestination(23772U);
    msg.setDestinationEntity(235U);
    msg.id = 236U;
    msg.angle = 0.72321307875;

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
    msg.setTimeStamp(0.190622641032);
    msg.setSource(3357U);
    msg.setSourceEntity(126U);
    msg.setDestination(36319U);
    msg.setDestinationEntity(223U);
    msg.op = 186U;
    msg.actions.assign("PHCKBILSRHRXGEOMUEYESWTJTIJVQCQSFSSGQWDZFILTFZWIZDBSZWMLLKXNXLRAYDVRDKYVJUEBZJBQZBZDVAAUOFDOCYIHXMNTNTVXKMPNAPFYEWQTJHWUSMRPHRLMQVKBDPENPQICTPFJGIBAQOBIANQOOFXUTLLNKAURPWNHSYDOVRNASHGGOLODFWCOGBDEJUAQCKUCXGFWYYNCBKMEJHHMRWYYKTFEPVXCIJUEJTIKVHVPZRZGM");

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
    msg.setTimeStamp(0.233813499903);
    msg.setSource(35165U);
    msg.setSourceEntity(156U);
    msg.setDestination(6422U);
    msg.setDestinationEntity(22U);
    msg.op = 193U;
    msg.actions.assign("IEBHHYZUUSFDCOKAYSNWEVUJWZXCGLHTTQZFSRDUBNHZNKGVDSQSNVRGHBKKAQNMEUDXCBVIAFLVALKZMHFWQQAVRTESGNNCLECXEMMGCJKYXJVAWPYJDKXFZMLABAWUKBWXWEBSGTDIFYYFZDKLRIJOMMUGFDROMVCRYOJRPBTTHXNIEQWQPNUWOJTZWQSRDAPNZOYIPLIXKCCSQLOPIUVYBGZBFEXJMHXGHCIPOSRJJPRTDQPOEGT");

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
    msg.setTimeStamp(0.0869157157478);
    msg.setSource(38251U);
    msg.setSourceEntity(187U);
    msg.setDestination(39470U);
    msg.setDestinationEntity(221U);
    msg.op = 142U;
    msg.actions.assign("JOEMLUPWSMVJDWVGPSSTROEVNFVFQCJRZUXPXTGZENYWBBPIRCZFYEOZNIWDCZZUOUGPRBCDRYDBQTRQQNNUYDCRHDDHMDRFKTFZNVI");

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
    msg.setTimeStamp(0.718222708022);
    msg.setSource(9686U);
    msg.setSourceEntity(177U);
    msg.setDestination(9545U);
    msg.setDestinationEntity(247U);
    msg.actions.assign("FQAKUWDLJMILUXUBHGJXRVTFQWIYSPPRPMIHZDCXRGORHTNJRZUCMBWCOHQRTMIOVUNBXRQNKGVTCLEPESOEGMIQIAZPFOXDDXDMJCOMWTSVJZSGACMZWEYSTQJLKDQXFXRTELAUAYAAGZNSIVKPIKYMHHEKKHEZZSWCBQLFRDSPKVVDWINALJDEGNBCPJKBZYGXLYYFVVGLONHFFHCXBTPNURSNZAQYUWCHTWBODVBOYGJKBJTNFPSM");

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
    msg.setTimeStamp(0.295213967639);
    msg.setSource(15245U);
    msg.setSourceEntity(205U);
    msg.setDestination(11703U);
    msg.setDestinationEntity(95U);
    msg.actions.assign("RSSMNVVQXBCKAEQIAPKVLRIICHRM");

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
    msg.setTimeStamp(0.588049626064);
    msg.setSource(938U);
    msg.setSourceEntity(98U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(40U);
    msg.actions.assign("DRMKUZWILQBLTXIGWEPMRODWTOZEIQUXJOASAMKBJDGFVTBJQJCDVUQAKMXUNNDDJJCHI");

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
    msg.setTimeStamp(0.97962930262);
    msg.setSource(20081U);
    msg.setSourceEntity(97U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(185U);
    msg.button = 62U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.667080583711);
    msg.setSource(3765U);
    msg.setSourceEntity(227U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(151U);
    msg.button = 72U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.306442033391);
    msg.setSource(35928U);
    msg.setSourceEntity(215U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(59U);
    msg.button = 109U;
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
    msg.setTimeStamp(0.302615107886);
    msg.setSource(48084U);
    msg.setSourceEntity(164U);
    msg.setDestination(51528U);
    msg.setDestinationEntity(183U);
    msg.op = 59U;
    msg.text.assign("CQDFGBTBHNY");

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
    msg.setTimeStamp(0.426266724081);
    msg.setSource(27453U);
    msg.setSourceEntity(33U);
    msg.setDestination(36097U);
    msg.setDestinationEntity(96U);
    msg.op = 243U;
    msg.text.assign("UCQWSHZKWMDZHFBPQGORTVPQZHHXJBJUPNPKCGMTGTXKJYAUALDIKOMMMFEUZYIIHBKFFWZQIBCWTHA");

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
    msg.setTimeStamp(0.837528214318);
    msg.setSource(57040U);
    msg.setSourceEntity(223U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(14U);
    msg.op = 138U;
    msg.text.assign("SDHIATEDZQPWAUEQELBVPTAGIKPMJYBLDWEAKZICALOKSPOOQPDNRMLWYTCMJIDSIRSUZHMPNCCVTARFYYAE");

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
    msg.setTimeStamp(0.156841745918);
    msg.setSource(7340U);
    msg.setSourceEntity(24U);
    msg.setDestination(141U);
    msg.setDestinationEntity(191U);
    msg.op = 182U;
    msg.time_remain = 0.553675638408;
    msg.sched_time = 0.905100795954;

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
    msg.setTimeStamp(0.607348652196);
    msg.setSource(527U);
    msg.setSourceEntity(236U);
    msg.setDestination(22603U);
    msg.setDestinationEntity(202U);
    msg.op = 107U;
    msg.time_remain = 0.688164354512;
    msg.sched_time = 0.0466730647519;

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
    msg.setTimeStamp(0.499297699643);
    msg.setSource(353U);
    msg.setSourceEntity(118U);
    msg.setDestination(54067U);
    msg.setDestinationEntity(224U);
    msg.op = 237U;
    msg.time_remain = 0.603173846118;
    msg.sched_time = 0.109888671764;

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
    msg.setTimeStamp(0.0400175710614);
    msg.setSource(52735U);
    msg.setSourceEntity(92U);
    msg.setDestination(7225U);
    msg.setDestinationEntity(235U);
    msg.name.assign("VWAUFEBKFNYFNALOLOOKLOPIYDBGCHAVXQEFQSZSUQOZWMJZCZZCKFSLTSYMMXIRJGXFNLDGSXWGULITVMLWPWNUEMVFRJAVTADQDIJIQZZZGBEPHWHRNTUENUCFXVJRABDDXOURTURKYZPGRDQNRCEHFEBDJTLUCICEHORHAVZGMVKTVNGNXLWCPKYBOTXYVOAGCHUKQWBBOKIIIFQSMTXEBJHSYP");
    msg.op = 104U;
    msg.sched_time = 0.829067038034;

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
    msg.setTimeStamp(0.704095672404);
    msg.setSource(9442U);
    msg.setSourceEntity(32U);
    msg.setDestination(7851U);
    msg.setDestinationEntity(26U);
    msg.name.assign("GIRYHUUOAYAURSCZJNMBABRYZCVVBMUQCXKOXPWYJGEDYWOQZHNAYJUFBOWDOEQLJPDYATTYMBKETCLVKDVDYOZNNJKJ");
    msg.op = 78U;
    msg.sched_time = 0.441961191864;

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
    msg.setTimeStamp(0.205084006246);
    msg.setSource(24713U);
    msg.setSourceEntity(177U);
    msg.setDestination(18057U);
    msg.setDestinationEntity(238U);
    msg.name.assign("LZZWLOBUPBDRHMXALUBDBPLMMATDAGWCKTXXBVHRSYEWNOCFUMMWQKKPBWFCYCRNZROXEUOTNVGIPIGUTCJJHFNYFQGRMVAGMQDDSNSQARISNZYEXTGOVZLZACCBLVKGJTEYVCPKTHVLFQNZHITYPNRESJOOYSQCKMZAXXEVWXOFHFBDIWGDDWITXSPDJHQPEIEEAUHGUKLYJLLRGINPMUBMJCKXVHJZSQBAPATUYIIRHUOWDZJQVFKRQS");
    msg.op = 151U;
    msg.sched_time = 0.568512451472;

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
    msg.setTimeStamp(0.900009562464);
    msg.setSource(4625U);
    msg.setSourceEntity(184U);
    msg.setDestination(21959U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.809887593643);
    msg.setSource(13435U);
    msg.setSourceEntity(70U);
    msg.setDestination(49764U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.605932399472);
    msg.setSource(16395U);
    msg.setSourceEntity(36U);
    msg.setDestination(15839U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.683679326095);
    msg.setSource(64561U);
    msg.setSourceEntity(16U);
    msg.setDestination(36800U);
    msg.setDestinationEntity(52U);
    msg.name.assign("OQZKUXYUEOUUOVJKZMABLXMCONPMRRV");
    msg.state = 1U;

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
    msg.setTimeStamp(0.217664171227);
    msg.setSource(58799U);
    msg.setSourceEntity(135U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(239U);
    msg.name.assign("ZIQQTDZDJJCHBVZKESGVPBMCPZFVHCNYQNAREKULQPXUXMUDAPUSVYRAUIRCIEQNKVFBDELAEIWBXMKCGZMCJYTRTSAYKUNSFTMZWPDHSIRELOCSHLMBMJTCGVLDFYLOGWZNKQIWJFAGRNOPKDWKWVKJRNKTDPBGUHVNPRBFEGVEGSAMUFHGULCIBOROJSSGMESXYYXWJZAJOUNXZQYIWOA");
    msg.state = 45U;

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
    msg.setTimeStamp(0.464659303896);
    msg.setSource(61531U);
    msg.setSourceEntity(250U);
    msg.setDestination(17310U);
    msg.setDestinationEntity(177U);
    msg.name.assign("KIMJGQGTMJGSKYFVGMVXHFZZXMSTOLKCSRYQSEZRNSEHJLTBHOXDIUAKVIWMJDL");
    msg.state = 99U;

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
    msg.setTimeStamp(0.424644172789);
    msg.setSource(22964U);
    msg.setSourceEntity(11U);
    msg.setDestination(54224U);
    msg.setDestinationEntity(40U);
    msg.name.assign("ZLJNHFNSYGYTZQKSYLPVACKWTJMDDRDKPWZOEJWMABHEEFXFEORIKCIYEOBPCRTUGFDJLKDPGUAXLDWXBEUNMGSWXBTIVWGHAVXAPZDQRJOHSFRCLLTNPSIQHZPUJBQLOZUCCTDEXGTAIMX");
    msg.value = 42U;

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
    msg.setTimeStamp(0.568117523983);
    msg.setSource(19797U);
    msg.setSourceEntity(26U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(189U);
    msg.name.assign("PRLMBZLQFIFBHCKUPKVTPWTBJSIMOCBWCZTDUVFAGILEDFNYNYJAKZYMMRYFSPLGSONBQWMTVKFLSBWEHWXRNJZWLXANEHGDUZRAHGAVJGZJGXENJCQYLPHUCMHOEVWKFVDQZOOTIPFTEKXEHULZOMSRQD");
    msg.value = 190U;

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
    msg.setTimeStamp(0.0557106235808);
    msg.setSource(39817U);
    msg.setSourceEntity(63U);
    msg.setDestination(10738U);
    msg.setDestinationEntity(131U);
    msg.name.assign("UJNVYYWIWKGFEUFNCMABUGSATCYYQHOZBLJVHABZHJBDIRSOTKCQVWWFLDKTXYYJBTLQMOZZNSDZDJYBCCLBZRIQXWIVQSUESEAREKSOMJPPIKNVMHKNXOGFOTYIRXJKPVPLVCSWTDCNGZFGMJLUHHBXTRETHDNMJCHXPQLGNUQWPBTSIAEVUEEMOVWXYXPPQDBLIEOTPFLWFZUANUVKUGXGQYFGDCPKMDMOSFJQZAHNM");
    msg.value = 110U;

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
    msg.setTimeStamp(0.725920253438);
    msg.setSource(41881U);
    msg.setSourceEntity(59U);
    msg.setDestination(54384U);
    msg.setDestinationEntity(114U);
    msg.name.assign("DLJIEZJCJXGWQCUSUYKWFYPVORAXSKWTYMIPSFWKDLHOUOZNPLHIJGOLJXNHSTVFFHUHTFWPLVMCZENRZJAHHABW");

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
    msg.setTimeStamp(0.77452934646);
    msg.setSource(40085U);
    msg.setSourceEntity(137U);
    msg.setDestination(38939U);
    msg.setDestinationEntity(110U);
    msg.name.assign("UCCOQSHXISDBLULQEFYTBHHDGVYFXDNJWNYMQ");

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
    msg.setTimeStamp(0.895637979469);
    msg.setSource(17180U);
    msg.setSourceEntity(135U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(158U);
    msg.name.assign("WOBNVTSTLWEJQVFUIFGVJVNYASQUMEXPPMKINQVQTHOZGRLWRMBAEEFGXUAXHACDKPXSSHLFWNJOICNIQATLIOPDGDDLYHPYZNTRWYRZLJXOVSNMFSUSROIJITEOXCKLWJJCTPKWQPVNGYQFAYBYIRQVGMRRAIBXKLVLJJLEMZEEVWXNZUTXCYQWMXAHDDKPKDMBESOWFGKDOGBUUBFRCKCM");

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
    msg.setTimeStamp(0.78839146483);
    msg.setSource(35799U);
    msg.setSourceEntity(108U);
    msg.setDestination(49323U);
    msg.setDestinationEntity(24U);
    msg.name.assign("XPQAMIUVXTTFUTKWURZMYYCEXELAPBXHLYPGIUVGGXCKWXLPNFOJEZSFQDJIPHWRHNOQEUVDNZSAWQSMONUNPKCWZYCIIMQOQMGYSWJTNKQXNSZAMTOYRKBFFYDTIADGCWZMSBPEJLD");
    msg.value = 213U;

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
    msg.setTimeStamp(0.655148118868);
    msg.setSource(9999U);
    msg.setSourceEntity(39U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(150U);
    msg.name.assign("VMICWBTMUDUICYLIUPGQBLAXHSKOTOVVZFMWPFNCDNUAPUTOFGGYWZANDAMQJHBKJTNMVIBDRQPQYOGKHLKJONXWURKBNBLSMZMJMHASJTKDPDYDRROLWIXHQXPUNFQOIZZCUSLAIHGZFJKEMCHKRETCZJNLOLMTY");
    msg.value = 147U;

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
    msg.setTimeStamp(0.6579139141);
    msg.setSource(25393U);
    msg.setSourceEntity(129U);
    msg.setDestination(3536U);
    msg.setDestinationEntity(251U);
    msg.name.assign("PWXTMFSXMLFYJVOFCHPIOKENCL");
    msg.value = 90U;

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
    msg.setTimeStamp(0.310152833112);
    msg.setSource(46747U);
    msg.setSourceEntity(25U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(218U);
    msg.id = 133U;
    msg.period = 3247160046U;
    msg.duty_cycle = 2574584737U;

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
    msg.setTimeStamp(0.768962093577);
    msg.setSource(49072U);
    msg.setSourceEntity(155U);
    msg.setDestination(35221U);
    msg.setDestinationEntity(207U);
    msg.id = 182U;
    msg.period = 3870213309U;
    msg.duty_cycle = 399301672U;

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
    msg.setTimeStamp(0.375128411647);
    msg.setSource(35163U);
    msg.setSourceEntity(93U);
    msg.setDestination(34190U);
    msg.setDestinationEntity(63U);
    msg.id = 101U;
    msg.period = 2279055078U;
    msg.duty_cycle = 3298855821U;

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
    msg.setTimeStamp(0.987501910649);
    msg.setSource(12661U);
    msg.setSourceEntity(225U);
    msg.setDestination(44431U);
    msg.setDestinationEntity(63U);
    msg.id = 82U;
    msg.period = 2778931578U;
    msg.duty_cycle = 3447982191U;

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
    msg.setTimeStamp(0.275320849348);
    msg.setSource(20739U);
    msg.setSourceEntity(190U);
    msg.setDestination(53098U);
    msg.setDestinationEntity(161U);
    msg.id = 250U;
    msg.period = 272873228U;
    msg.duty_cycle = 3717145506U;

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
    msg.setTimeStamp(0.605411020524);
    msg.setSource(59872U);
    msg.setSourceEntity(223U);
    msg.setDestination(21006U);
    msg.setDestinationEntity(189U);
    msg.id = 191U;
    msg.period = 3351261500U;
    msg.duty_cycle = 3674687143U;

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
    msg.setTimeStamp(0.383750175675);
    msg.setSource(39892U);
    msg.setSourceEntity(144U);
    msg.setDestination(15655U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.36764348579;
    msg.lon = 0.681818668124;
    msg.height = 0.679016458975;
    msg.x = 0.449435874532;
    msg.y = 0.400066930065;
    msg.z = 0.779136378744;
    msg.phi = 0.752953528921;
    msg.theta = 0.413293948788;
    msg.psi = 0.454914587874;
    msg.u = 0.272386154208;
    msg.v = 0.123780902282;
    msg.w = 0.697692975588;
    msg.vx = 0.696134288364;
    msg.vy = 0.533161843029;
    msg.vz = 0.620533397602;
    msg.p = 0.248220053068;
    msg.q = 0.604662751135;
    msg.r = 0.389856053716;
    msg.depth = 0.678078479214;
    msg.alt = 0.107788437448;

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
    msg.setTimeStamp(0.667101053582);
    msg.setSource(3001U);
    msg.setSourceEntity(117U);
    msg.setDestination(19634U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.486814609306;
    msg.lon = 0.457546212856;
    msg.height = 0.559835430518;
    msg.x = 0.837863531123;
    msg.y = 0.136104531105;
    msg.z = 0.886491059279;
    msg.phi = 0.220080535157;
    msg.theta = 0.739185671926;
    msg.psi = 0.766845225393;
    msg.u = 0.76832152595;
    msg.v = 0.246740408284;
    msg.w = 0.046668084007;
    msg.vx = 0.33866286665;
    msg.vy = 0.548158420336;
    msg.vz = 0.00654305237251;
    msg.p = 0.667140671585;
    msg.q = 0.256802911975;
    msg.r = 0.0479435319531;
    msg.depth = 0.734842777338;
    msg.alt = 0.211324548297;

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
    msg.setTimeStamp(0.0781689551823);
    msg.setSource(37883U);
    msg.setSourceEntity(184U);
    msg.setDestination(9040U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.50202015091;
    msg.lon = 0.676867267275;
    msg.height = 0.521945047218;
    msg.x = 0.543234470072;
    msg.y = 0.218999653984;
    msg.z = 0.0540024653559;
    msg.phi = 0.701131027136;
    msg.theta = 0.381989753055;
    msg.psi = 0.514879208668;
    msg.u = 0.907554684683;
    msg.v = 0.413817415498;
    msg.w = 0.900456931208;
    msg.vx = 0.816908365378;
    msg.vy = 0.206349826971;
    msg.vz = 0.587147218646;
    msg.p = 0.845730545504;
    msg.q = 0.731015447881;
    msg.r = 0.00717304320725;
    msg.depth = 0.106755756806;
    msg.alt = 0.685382998097;

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
    msg.setTimeStamp(0.15565838867);
    msg.setSource(25344U);
    msg.setSourceEntity(187U);
    msg.setDestination(20724U);
    msg.setDestinationEntity(94U);
    msg.x = 0.672075071004;
    msg.y = 0.108636507468;
    msg.z = 0.458988674223;

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
    msg.setTimeStamp(0.307786075513);
    msg.setSource(45649U);
    msg.setSourceEntity(27U);
    msg.setDestination(18431U);
    msg.setDestinationEntity(220U);
    msg.x = 0.627309728937;
    msg.y = 0.991062908191;
    msg.z = 0.96435517226;

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
    msg.setTimeStamp(0.892023137299);
    msg.setSource(7486U);
    msg.setSourceEntity(171U);
    msg.setDestination(27406U);
    msg.setDestinationEntity(175U);
    msg.x = 0.742735486653;
    msg.y = 0.0570209698472;
    msg.z = 0.293476981638;

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
    msg.setTimeStamp(0.796434481655);
    msg.setSource(52475U);
    msg.setSourceEntity(220U);
    msg.setDestination(46642U);
    msg.setDestinationEntity(175U);
    msg.value = 0.938240832798;

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
    msg.setTimeStamp(0.168211639038);
    msg.setSource(49415U);
    msg.setSourceEntity(241U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(189U);
    msg.value = 0.850663069195;

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
    msg.setTimeStamp(0.347605811568);
    msg.setSource(47436U);
    msg.setSourceEntity(17U);
    msg.setDestination(47393U);
    msg.setDestinationEntity(61U);
    msg.value = 0.940915809652;

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
    msg.setTimeStamp(0.532169617876);
    msg.setSource(9151U);
    msg.setSourceEntity(229U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(163U);
    msg.value = 0.785522506861;

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
    msg.setTimeStamp(0.653397111281);
    msg.setSource(59666U);
    msg.setSourceEntity(204U);
    msg.setDestination(8369U);
    msg.setDestinationEntity(151U);
    msg.value = 0.355142003651;

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
    msg.setTimeStamp(0.843499999698);
    msg.setSource(42678U);
    msg.setSourceEntity(252U);
    msg.setDestination(55920U);
    msg.setDestinationEntity(109U);
    msg.value = 0.0483485458341;

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
    msg.setTimeStamp(0.884440044136);
    msg.setSource(2209U);
    msg.setSourceEntity(200U);
    msg.setDestination(48100U);
    msg.setDestinationEntity(159U);
    msg.x = 0.128077569835;
    msg.y = 0.71462455161;
    msg.z = 0.84413579997;
    msg.phi = 0.844091808693;
    msg.theta = 0.413512083319;
    msg.psi = 0.916500188892;
    msg.p = 0.487310746677;
    msg.q = 0.340631639201;
    msg.r = 0.41118634579;
    msg.u = 0.592526582861;
    msg.v = 0.509058264702;
    msg.w = 0.0848224755219;
    msg.bias_psi = 0.0669334603678;
    msg.bias_r = 0.952392953795;

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
    msg.setTimeStamp(0.31040476727);
    msg.setSource(22157U);
    msg.setSourceEntity(188U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(44U);
    msg.x = 0.011496471086;
    msg.y = 0.639867333325;
    msg.z = 0.258851286446;
    msg.phi = 0.582513444697;
    msg.theta = 0.151872214056;
    msg.psi = 0.721848600454;
    msg.p = 0.089723135432;
    msg.q = 0.962980006267;
    msg.r = 0.74960803391;
    msg.u = 0.313508283768;
    msg.v = 0.0340925863641;
    msg.w = 0.905431131647;
    msg.bias_psi = 0.644937368309;
    msg.bias_r = 0.547443659073;

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
    msg.setTimeStamp(0.446918154336);
    msg.setSource(15030U);
    msg.setSourceEntity(155U);
    msg.setDestination(35456U);
    msg.setDestinationEntity(194U);
    msg.x = 0.670091660166;
    msg.y = 0.673850748016;
    msg.z = 0.465526970888;
    msg.phi = 0.0223920176539;
    msg.theta = 0.629153484216;
    msg.psi = 0.699135805987;
    msg.p = 0.248842210889;
    msg.q = 0.0701868832086;
    msg.r = 0.165034261284;
    msg.u = 0.64659900024;
    msg.v = 0.800095555632;
    msg.w = 0.577946476391;
    msg.bias_psi = 0.409652298948;
    msg.bias_r = 0.637522997086;

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
    msg.setTimeStamp(0.921421840401);
    msg.setSource(59206U);
    msg.setSourceEntity(4U);
    msg.setDestination(52129U);
    msg.setDestinationEntity(124U);
    msg.bias_psi = 0.0761155318422;
    msg.bias_r = 0.184096162559;
    msg.cog = 0.352412411995;
    msg.cyaw = 0.821651725725;
    msg.lbl_rej_level = 0.198181779184;
    msg.gps_rej_level = 0.691437784446;
    msg.custom_x = 0.944832709115;
    msg.custom_y = 0.782918115902;
    msg.custom_z = 0.63010697086;

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
    msg.setTimeStamp(0.514408267992);
    msg.setSource(38190U);
    msg.setSourceEntity(114U);
    msg.setDestination(22158U);
    msg.setDestinationEntity(133U);
    msg.bias_psi = 0.679502229679;
    msg.bias_r = 0.417095759515;
    msg.cog = 0.552668101163;
    msg.cyaw = 0.798254382715;
    msg.lbl_rej_level = 0.233275441429;
    msg.gps_rej_level = 0.394917886068;
    msg.custom_x = 0.375203789999;
    msg.custom_y = 0.0879703516386;
    msg.custom_z = 0.627136848457;

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
    msg.setTimeStamp(0.703628503509);
    msg.setSource(26500U);
    msg.setSourceEntity(104U);
    msg.setDestination(15383U);
    msg.setDestinationEntity(99U);
    msg.bias_psi = 0.29343488169;
    msg.bias_r = 0.0190877699436;
    msg.cog = 0.321114526521;
    msg.cyaw = 0.685847234503;
    msg.lbl_rej_level = 0.898043147241;
    msg.gps_rej_level = 0.528024382808;
    msg.custom_x = 0.659626925468;
    msg.custom_y = 0.826342955394;
    msg.custom_z = 0.831518082781;

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
    msg.setTimeStamp(0.413572978482);
    msg.setSource(28838U);
    msg.setSourceEntity(54U);
    msg.setDestination(61292U);
    msg.setDestinationEntity(127U);
    msg.utc_time = 0.975061077673;
    msg.reason = 34U;

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
    msg.setTimeStamp(0.506707031507);
    msg.setSource(34748U);
    msg.setSourceEntity(233U);
    msg.setDestination(55039U);
    msg.setDestinationEntity(35U);
    msg.utc_time = 0.847631487105;
    msg.reason = 84U;

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
    msg.setTimeStamp(0.214540546001);
    msg.setSource(52875U);
    msg.setSourceEntity(95U);
    msg.setDestination(29763U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.370786335594;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.685377535043);
    msg.setSource(46015U);
    msg.setSourceEntity(179U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(174U);
    msg.id = 91U;
    msg.range = 0.841415085926;
    msg.acceptance = 237U;

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
    msg.setTimeStamp(0.471627728068);
    msg.setSource(60467U);
    msg.setSourceEntity(37U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(140U);
    msg.id = 220U;
    msg.range = 0.447087231675;
    msg.acceptance = 146U;

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
    msg.setTimeStamp(0.16670223807);
    msg.setSource(56638U);
    msg.setSourceEntity(113U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(52U);
    msg.id = 158U;
    msg.range = 0.39044978516;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.358997276652);
    msg.setSource(46657U);
    msg.setSourceEntity(234U);
    msg.setDestination(48116U);
    msg.setDestinationEntity(247U);
    msg.type = 85U;
    msg.reason = 2U;
    msg.value = 0.642802217645;
    msg.timestep = 0.440026292639;

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
    msg.setTimeStamp(0.0125135134103);
    msg.setSource(54832U);
    msg.setSourceEntity(209U);
    msg.setDestination(1398U);
    msg.setDestinationEntity(178U);
    msg.type = 38U;
    msg.reason = 246U;
    msg.value = 0.806637426287;
    msg.timestep = 0.657285416013;

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
    msg.setTimeStamp(0.563169602299);
    msg.setSource(45536U);
    msg.setSourceEntity(176U);
    msg.setDestination(46390U);
    msg.setDestinationEntity(172U);
    msg.type = 37U;
    msg.reason = 164U;
    msg.value = 0.532985638162;
    msg.timestep = 0.791608559873;

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
    msg.setTimeStamp(0.715250435186);
    msg.setSource(45497U);
    msg.setSourceEntity(89U);
    msg.setDestination(25438U);
    msg.setDestinationEntity(76U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IHUYEJAOEGQTDXXEFKYNLNQRZHJRSZBMJWXMCRMINZWCYBQFUZLIJPVNCWKWOYJDHEAQZFVUEICMWXJYIRQHUKOOSGGUGHXAVCPSYGKADJRYHVCFTXXSALWIYGPTBTLAGMFOMZNLUEXETZBHRVVWACTLFGOVDBSPSFKNIXATO");
    tmp_msg_0.lat = 0.797884404876;
    tmp_msg_0.lon = 0.875408027334;
    tmp_msg_0.depth = 0.225021238538;
    tmp_msg_0.query_channel = 108U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 99U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.252350061182;
    msg.y = 0.521808928569;
    msg.var_x = 0.908778219529;
    msg.var_y = 0.209891953973;
    msg.distance = 0.135583658874;

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
    msg.setTimeStamp(0.878121074305);
    msg.setSource(42656U);
    msg.setSourceEntity(94U);
    msg.setDestination(41855U);
    msg.setDestinationEntity(108U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZVOMFZVSUMRECWNGGWXKYSPIRTXCIUDUANGCFAJLUUAZQSWWBRMZENLEGALKEHOKLFAFAKCQWVKYALQZRLQVZIPHLEYOIDJHBRQCSPAFCPHTOXFWVBMBVJDYLTKRCSFKKITIBJ");
    tmp_msg_0.lat = 0.0230040602728;
    tmp_msg_0.lon = 0.411539510518;
    tmp_msg_0.depth = 0.649776780226;
    tmp_msg_0.query_channel = 91U;
    tmp_msg_0.reply_channel = 20U;
    tmp_msg_0.transponder_delay = 78U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0255353023745;
    msg.y = 0.594399533179;
    msg.var_x = 0.715093864725;
    msg.var_y = 0.0144416292275;
    msg.distance = 0.0844099231519;

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
    msg.setTimeStamp(0.0998375309307);
    msg.setSource(54726U);
    msg.setSourceEntity(203U);
    msg.setDestination(6752U);
    msg.setDestinationEntity(95U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EYPRRQRQXWSYZPTESLYNNFZDLTBXMRCZYYRWUTBCCDITKMWZELOTNUPAGSLJJXAGNHMXUVGHSPLAKZDCIXSVJQKOLIBYAOJAGVNDDXIAPQOFEDIJOXTEMDLCHEYPHIYVHUFFBHETBOMQWWIRMUSRZASDWLHHRQCTNGKQFELFOFMCJXOVKINJQVQAHFUN");
    tmp_msg_0.lat = 0.599876587688;
    tmp_msg_0.lon = 0.251650357306;
    tmp_msg_0.depth = 0.666364667554;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 88U;
    tmp_msg_0.transponder_delay = 242U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.00703026213924;
    msg.y = 0.877518382378;
    msg.var_x = 0.294904185378;
    msg.var_y = 0.434007298492;
    msg.distance = 0.580289186728;

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
    msg.setTimeStamp(0.507272270022);
    msg.setSource(37066U);
    msg.setSourceEntity(146U);
    msg.setDestination(34722U);
    msg.setDestinationEntity(28U);
    msg.state = 20U;

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
    msg.setTimeStamp(0.0909218145118);
    msg.setSource(10565U);
    msg.setSourceEntity(81U);
    msg.setDestination(51498U);
    msg.setDestinationEntity(167U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.121854489875);
    msg.setSource(29989U);
    msg.setSourceEntity(32U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(254U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.178834656032);
    msg.setSource(14912U);
    msg.setSourceEntity(77U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(177U);
    msg.x = 0.568871561737;
    msg.y = 0.367709573528;
    msg.z = 0.61682689026;

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
    msg.setTimeStamp(0.681373296082);
    msg.setSource(25771U);
    msg.setSourceEntity(205U);
    msg.setDestination(11889U);
    msg.setDestinationEntity(139U);
    msg.x = 0.911650256197;
    msg.y = 0.545028447775;
    msg.z = 0.552965200919;

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
    msg.setTimeStamp(0.0587110729456);
    msg.setSource(39261U);
    msg.setSourceEntity(236U);
    msg.setDestination(38661U);
    msg.setDestinationEntity(123U);
    msg.x = 0.815585064298;
    msg.y = 0.712500978325;
    msg.z = 0.696925289747;

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
    msg.setTimeStamp(0.973567472462);
    msg.setSource(29375U);
    msg.setSourceEntity(23U);
    msg.setDestination(52027U);
    msg.setDestinationEntity(205U);
    msg.va = 0.668857740224;
    msg.aoa = 0.863064433858;
    msg.ssa = 0.397240788401;

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
    msg.setTimeStamp(0.724051980635);
    msg.setSource(61775U);
    msg.setSourceEntity(199U);
    msg.setDestination(9735U);
    msg.setDestinationEntity(168U);
    msg.va = 0.238668744626;
    msg.aoa = 0.425442177772;
    msg.ssa = 0.472653996178;

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
    msg.setTimeStamp(0.679192747077);
    msg.setSource(32565U);
    msg.setSourceEntity(48U);
    msg.setDestination(39754U);
    msg.setDestinationEntity(86U);
    msg.va = 0.794889416775;
    msg.aoa = 0.786970871735;
    msg.ssa = 0.799376025449;

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
    msg.setTimeStamp(0.546342216875);
    msg.setSource(56695U);
    msg.setSourceEntity(27U);
    msg.setDestination(59847U);
    msg.setDestinationEntity(208U);
    msg.value = 0.200756343351;

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
    msg.setTimeStamp(0.972116484789);
    msg.setSource(52132U);
    msg.setSourceEntity(249U);
    msg.setDestination(1897U);
    msg.setDestinationEntity(213U);
    msg.value = 0.245253611957;

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
    msg.setTimeStamp(0.888859720633);
    msg.setSource(6178U);
    msg.setSourceEntity(130U);
    msg.setDestination(10357U);
    msg.setDestinationEntity(10U);
    msg.value = 0.289361152909;

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
    msg.setTimeStamp(0.834520433254);
    msg.setSource(45192U);
    msg.setSourceEntity(191U);
    msg.setDestination(2581U);
    msg.setDestinationEntity(138U);
    msg.value = 0.2416999494;
    msg.z_units = 34U;

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
    msg.setTimeStamp(0.532038696939);
    msg.setSource(35360U);
    msg.setSourceEntity(206U);
    msg.setDestination(22677U);
    msg.setDestinationEntity(137U);
    msg.value = 0.112860833472;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.333266581931);
    msg.setSource(15054U);
    msg.setSourceEntity(8U);
    msg.setDestination(25934U);
    msg.setDestinationEntity(240U);
    msg.value = 0.497196744801;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.163515226214);
    msg.setSource(30536U);
    msg.setSourceEntity(238U);
    msg.setDestination(270U);
    msg.setDestinationEntity(220U);
    msg.value = 0.954591453689;
    msg.speed_units = 254U;

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
    msg.setTimeStamp(0.580652819572);
    msg.setSource(8816U);
    msg.setSourceEntity(44U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(2U);
    msg.value = 0.866310586347;
    msg.speed_units = 99U;

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
    msg.setTimeStamp(0.0441065175478);
    msg.setSource(51421U);
    msg.setSourceEntity(61U);
    msg.setDestination(16991U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0990807828551;
    msg.speed_units = 133U;

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
    msg.setTimeStamp(0.394244246213);
    msg.setSource(47960U);
    msg.setSourceEntity(19U);
    msg.setDestination(33848U);
    msg.setDestinationEntity(170U);
    msg.value = 0.272885105586;

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
    msg.setTimeStamp(0.142759944594);
    msg.setSource(14717U);
    msg.setSourceEntity(250U);
    msg.setDestination(52550U);
    msg.setDestinationEntity(79U);
    msg.value = 0.22212767603;

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
    msg.setTimeStamp(0.544021855695);
    msg.setSource(51692U);
    msg.setSourceEntity(242U);
    msg.setDestination(54730U);
    msg.setDestinationEntity(6U);
    msg.value = 0.194616803055;

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
    msg.setTimeStamp(0.334145597672);
    msg.setSource(42642U);
    msg.setSourceEntity(112U);
    msg.setDestination(58314U);
    msg.setDestinationEntity(132U);
    msg.value = 0.698001485227;

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
    msg.setTimeStamp(0.630246125168);
    msg.setSource(45130U);
    msg.setSourceEntity(248U);
    msg.setDestination(34291U);
    msg.setDestinationEntity(125U);
    msg.value = 0.94314484866;

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
    msg.setTimeStamp(0.0850127396629);
    msg.setSource(65299U);
    msg.setSourceEntity(168U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(73U);
    msg.value = 0.307126921599;

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
    msg.setTimeStamp(0.640667154528);
    msg.setSource(15927U);
    msg.setSourceEntity(95U);
    msg.setDestination(3656U);
    msg.setDestinationEntity(132U);
    msg.value = 0.850807069624;

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
    msg.setTimeStamp(0.318961859904);
    msg.setSource(29905U);
    msg.setSourceEntity(213U);
    msg.setDestination(27493U);
    msg.setDestinationEntity(238U);
    msg.value = 0.208119566655;

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
    msg.setTimeStamp(0.214282673346);
    msg.setSource(28341U);
    msg.setSourceEntity(198U);
    msg.setDestination(11912U);
    msg.setDestinationEntity(141U);
    msg.value = 0.787959588143;

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
    msg.setTimeStamp(0.456163344351);
    msg.setSource(6182U);
    msg.setSourceEntity(12U);
    msg.setDestination(42873U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 2080486634U;
    msg.start_lat = 0.272728565354;
    msg.start_lon = 0.184259098314;
    msg.start_z = 0.54255760128;
    msg.start_z_units = 82U;
    msg.end_lat = 0.29175118642;
    msg.end_lon = 0.929395145749;
    msg.end_z = 0.198462522357;
    msg.end_z_units = 210U;
    msg.speed = 0.271749226423;
    msg.speed_units = 37U;
    msg.lradius = 0.37507661745;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.0262509308006);
    msg.setSource(37337U);
    msg.setSourceEntity(70U);
    msg.setDestination(36827U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 15827365U;
    msg.start_lat = 0.128675347459;
    msg.start_lon = 0.417642397519;
    msg.start_z = 0.00391278240387;
    msg.start_z_units = 193U;
    msg.end_lat = 0.805175967978;
    msg.end_lon = 0.580965950742;
    msg.end_z = 0.333052313366;
    msg.end_z_units = 102U;
    msg.speed = 0.199986744033;
    msg.speed_units = 69U;
    msg.lradius = 0.776734127527;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.676162062735);
    msg.setSource(43078U);
    msg.setSourceEntity(127U);
    msg.setDestination(6876U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 3912314973U;
    msg.start_lat = 0.551795906401;
    msg.start_lon = 0.459504898309;
    msg.start_z = 0.614406251698;
    msg.start_z_units = 176U;
    msg.end_lat = 0.360324972183;
    msg.end_lon = 0.356350572655;
    msg.end_z = 0.784549351836;
    msg.end_z_units = 200U;
    msg.speed = 0.407851509626;
    msg.speed_units = 76U;
    msg.lradius = 0.333593095619;
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
    msg.setTimeStamp(0.699861195438);
    msg.setSource(45560U);
    msg.setSourceEntity(102U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(33U);
    msg.x = 0.879243252087;
    msg.y = 0.471645534039;
    msg.z = 0.720014282255;
    msg.k = 0.467011042548;
    msg.m = 0.489693922163;
    msg.n = 0.433823095163;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.319816644233);
    msg.setSource(10314U);
    msg.setSourceEntity(191U);
    msg.setDestination(28384U);
    msg.setDestinationEntity(181U);
    msg.x = 0.12355603293;
    msg.y = 0.878294947864;
    msg.z = 0.714436360557;
    msg.k = 0.769623543856;
    msg.m = 0.770929146124;
    msg.n = 0.232107719462;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.631796384956);
    msg.setSource(45481U);
    msg.setSourceEntity(223U);
    msg.setDestination(49944U);
    msg.setDestinationEntity(185U);
    msg.x = 0.708942178243;
    msg.y = 0.954519735588;
    msg.z = 0.737470232501;
    msg.k = 0.658214613604;
    msg.m = 0.809434095205;
    msg.n = 0.688301062631;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.154585150949);
    msg.setSource(9078U);
    msg.setSourceEntity(228U);
    msg.setDestination(27677U);
    msg.setDestinationEntity(213U);
    msg.value = 0.247755748944;

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
    msg.setTimeStamp(0.0823209147177);
    msg.setSource(59170U);
    msg.setSourceEntity(58U);
    msg.setDestination(4056U);
    msg.setDestinationEntity(6U);
    msg.value = 0.795022306973;

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
    msg.setTimeStamp(0.656615733299);
    msg.setSource(48882U);
    msg.setSourceEntity(154U);
    msg.setDestination(7683U);
    msg.setDestinationEntity(200U);
    msg.value = 0.605459936717;

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
    msg.setTimeStamp(0.163350599995);
    msg.setSource(58694U);
    msg.setSourceEntity(81U);
    msg.setDestination(36180U);
    msg.setDestinationEntity(187U);
    msg.u = 0.350550502197;
    msg.v = 0.960935326402;
    msg.w = 0.216159906998;
    msg.p = 0.807473880329;
    msg.q = 0.036519901446;
    msg.r = 0.78904585892;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.363650920009);
    msg.setSource(36351U);
    msg.setSourceEntity(70U);
    msg.setDestination(51835U);
    msg.setDestinationEntity(74U);
    msg.u = 0.0702180533659;
    msg.v = 0.993176342808;
    msg.w = 0.798660306806;
    msg.p = 0.479849828403;
    msg.q = 0.27812196183;
    msg.r = 0.614589670894;
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
    msg.setTimeStamp(0.601285248274);
    msg.setSource(22886U);
    msg.setSourceEntity(109U);
    msg.setDestination(32353U);
    msg.setDestinationEntity(174U);
    msg.u = 0.518888875271;
    msg.v = 0.608609541576;
    msg.w = 0.0436674135261;
    msg.p = 0.713547070032;
    msg.q = 0.224783726163;
    msg.r = 0.233452658773;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.341629772175);
    msg.setSource(9057U);
    msg.setSourceEntity(99U);
    msg.setDestination(53509U);
    msg.setDestinationEntity(185U);
    msg.path_ref = 2277077808U;
    msg.start_lat = 0.032039189147;
    msg.start_lon = 0.769313073967;
    msg.start_z = 0.690696832195;
    msg.start_z_units = 199U;
    msg.end_lat = 0.0509805360355;
    msg.end_lon = 0.67639364878;
    msg.end_z = 0.604073368876;
    msg.end_z_units = 107U;
    msg.lradius = 0.5935047638;
    msg.flags = 166U;
    msg.x = 0.360698541253;
    msg.y = 0.91526255656;
    msg.z = 0.0375931103121;
    msg.vx = 0.462257002248;
    msg.vy = 0.257462547812;
    msg.vz = 0.979863032092;
    msg.course_error = 0.386066979528;
    msg.eta = 53679U;

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
    msg.setTimeStamp(0.15782714838);
    msg.setSource(16370U);
    msg.setSourceEntity(251U);
    msg.setDestination(18818U);
    msg.setDestinationEntity(46U);
    msg.path_ref = 783842958U;
    msg.start_lat = 0.621358964051;
    msg.start_lon = 0.679581695207;
    msg.start_z = 0.712723738242;
    msg.start_z_units = 251U;
    msg.end_lat = 0.519410428805;
    msg.end_lon = 0.529173853738;
    msg.end_z = 0.723805005613;
    msg.end_z_units = 15U;
    msg.lradius = 0.5107500065;
    msg.flags = 19U;
    msg.x = 0.946011541869;
    msg.y = 0.392373685399;
    msg.z = 0.567608695314;
    msg.vx = 0.967023027974;
    msg.vy = 0.0610646811054;
    msg.vz = 0.434251150427;
    msg.course_error = 0.688533019117;
    msg.eta = 11278U;

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
    msg.setTimeStamp(0.427324384065);
    msg.setSource(20727U);
    msg.setSourceEntity(11U);
    msg.setDestination(35014U);
    msg.setDestinationEntity(148U);
    msg.path_ref = 950241019U;
    msg.start_lat = 0.256938660435;
    msg.start_lon = 0.735387973556;
    msg.start_z = 0.0122698934561;
    msg.start_z_units = 204U;
    msg.end_lat = 0.477529755573;
    msg.end_lon = 0.119270644706;
    msg.end_z = 0.609061658239;
    msg.end_z_units = 106U;
    msg.lradius = 0.229990712873;
    msg.flags = 56U;
    msg.x = 0.800938453677;
    msg.y = 0.201354018734;
    msg.z = 0.736506988208;
    msg.vx = 0.316384209105;
    msg.vy = 0.0529248622636;
    msg.vz = 0.969057294954;
    msg.course_error = 0.229687778909;
    msg.eta = 35054U;

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
    msg.setTimeStamp(0.948003783617);
    msg.setSource(32712U);
    msg.setSourceEntity(245U);
    msg.setDestination(54364U);
    msg.setDestinationEntity(172U);
    msg.k = 0.872149744631;
    msg.m = 0.318929522473;
    msg.n = 0.627496195659;

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
    msg.setTimeStamp(0.0166778504205);
    msg.setSource(8604U);
    msg.setSourceEntity(53U);
    msg.setDestination(64302U);
    msg.setDestinationEntity(91U);
    msg.k = 0.855112868032;
    msg.m = 0.85171375573;
    msg.n = 0.57990664801;

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
    msg.setTimeStamp(0.499525498007);
    msg.setSource(15489U);
    msg.setSourceEntity(124U);
    msg.setDestination(20194U);
    msg.setDestinationEntity(92U);
    msg.k = 0.085098617959;
    msg.m = 0.901854826785;
    msg.n = 0.361703095491;

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
    msg.setTimeStamp(0.19006785335);
    msg.setSource(50366U);
    msg.setSourceEntity(122U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(95U);
    msg.p = 0.733771900979;
    msg.i = 0.388539654682;
    msg.d = 0.356280097237;
    msg.a = 0.201253128191;

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
    msg.setTimeStamp(0.525719223377);
    msg.setSource(42077U);
    msg.setSourceEntity(236U);
    msg.setDestination(14819U);
    msg.setDestinationEntity(58U);
    msg.p = 0.750975959924;
    msg.i = 0.63230187284;
    msg.d = 0.0340636546082;
    msg.a = 0.433651562596;

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
    msg.setTimeStamp(0.0462688621058);
    msg.setSource(23950U);
    msg.setSourceEntity(172U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(145U);
    msg.p = 0.949928235853;
    msg.i = 0.597286248212;
    msg.d = 0.894752052501;
    msg.a = 0.323828367725;

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
    msg.setTimeStamp(0.860734862405);
    msg.setSource(14233U);
    msg.setSourceEntity(73U);
    msg.setDestination(64755U);
    msg.setDestinationEntity(239U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.14447187892);
    msg.setSource(50630U);
    msg.setSourceEntity(40U);
    msg.setDestination(53784U);
    msg.setDestinationEntity(94U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.4353767994);
    msg.setSource(12163U);
    msg.setSourceEntity(32U);
    msg.setDestination(31291U);
    msg.setDestinationEntity(101U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.688846877775);
    msg.setSource(51289U);
    msg.setSourceEntity(33U);
    msg.setDestination(62272U);
    msg.setDestinationEntity(133U);
    msg.x = 0.359187718375;
    msg.y = 0.92945472152;
    msg.z = 0.762068437925;
    msg.vx = 0.340229235172;
    msg.vy = 0.764601733287;
    msg.vz = 0.712249773596;
    msg.ax = 0.172806041698;
    msg.ay = 0.608667430385;
    msg.az = 0.63779864441;
    msg.flags = 41169U;

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
    msg.setTimeStamp(0.396156980433);
    msg.setSource(1794U);
    msg.setSourceEntity(222U);
    msg.setDestination(2090U);
    msg.setDestinationEntity(236U);
    msg.x = 0.201352839951;
    msg.y = 0.714879183834;
    msg.z = 0.378653379397;
    msg.vx = 0.49524955415;
    msg.vy = 0.840463329224;
    msg.vz = 0.801112621499;
    msg.ax = 0.801405914683;
    msg.ay = 0.264425954732;
    msg.az = 0.95693240562;
    msg.flags = 12777U;

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
    msg.setTimeStamp(0.90521504235);
    msg.setSource(7968U);
    msg.setSourceEntity(75U);
    msg.setDestination(4178U);
    msg.setDestinationEntity(122U);
    msg.x = 0.670322185377;
    msg.y = 0.0710719032831;
    msg.z = 0.544106684437;
    msg.vx = 0.878702602713;
    msg.vy = 0.242049482263;
    msg.vz = 0.645651908483;
    msg.ax = 0.402368387345;
    msg.ay = 0.835163478568;
    msg.az = 0.461943102775;
    msg.flags = 47577U;

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
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.996994832756);
    msg.setSource(38073U);
    msg.setSourceEntity(179U);
    msg.setDestination(59108U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0178891548567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.30224204435);
    msg.setSource(20744U);
    msg.setSourceEntity(167U);
    msg.setDestination(51730U);
    msg.setDestinationEntity(33U);
    msg.value = 0.272647064082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.804245155822);
    msg.setSource(20990U);
    msg.setSourceEntity(222U);
    msg.setDestination(305U);
    msg.setDestinationEntity(233U);
    msg.value = 0.214359012984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
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
    msg.setTimeStamp(0.960876722142);
    msg.setSource(39572U);
    msg.setSourceEntity(80U);
    msg.setDestination(6237U);
    msg.setDestinationEntity(112U);
    msg.timeout = 41066U;
    msg.lat = 0.525344202755;
    msg.lon = 0.272106732987;
    msg.z = 0.99890407042;
    msg.z_units = 175U;
    msg.speed = 0.317176777569;
    msg.speed_units = 155U;
    msg.roll = 0.044571510002;
    msg.pitch = 0.943796948855;
    msg.yaw = 0.488324774722;
    msg.custom.assign("YHYIDVNVENPDEJPANSGMFKCKNMJGJGRYDADKHHIMWROYWSFAXJQDZDUSULEUUQHXUKHGTNPPCVCOYWCEGK");

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
    msg.setTimeStamp(0.0237817719542);
    msg.setSource(56406U);
    msg.setSourceEntity(79U);
    msg.setDestination(49772U);
    msg.setDestinationEntity(115U);
    msg.timeout = 10738U;
    msg.lat = 0.358596955325;
    msg.lon = 0.531343724739;
    msg.z = 0.844206210545;
    msg.z_units = 100U;
    msg.speed = 0.454175990496;
    msg.speed_units = 45U;
    msg.roll = 0.461353491657;
    msg.pitch = 0.387341902535;
    msg.yaw = 0.673562265985;
    msg.custom.assign("IAWEUCSIXAUBWZWHGGBVKVWWHTMMNBXJWX");

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
    msg.setTimeStamp(0.207340546435);
    msg.setSource(52577U);
    msg.setSourceEntity(93U);
    msg.setDestination(24932U);
    msg.setDestinationEntity(14U);
    msg.timeout = 7019U;
    msg.lat = 0.85906263048;
    msg.lon = 0.171376127884;
    msg.z = 0.600857933713;
    msg.z_units = 8U;
    msg.speed = 0.477472756089;
    msg.speed_units = 220U;
    msg.roll = 0.149716697263;
    msg.pitch = 0.102903965901;
    msg.yaw = 0.922159026396;
    msg.custom.assign("BWXIOKHNFRBAXGJGDWUOHPOBEAHYYNJTGJZCKLHCRATUWLSNQFWHGEFMUWXYDBZHWOOVBRFQZRTLC");

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
    msg.setTimeStamp(0.951807953876);
    msg.setSource(41425U);
    msg.setSourceEntity(31U);
    msg.setDestination(7142U);
    msg.setDestinationEntity(43U);
    msg.timeout = 43599U;
    msg.lat = 0.00801013878417;
    msg.lon = 0.401934189236;
    msg.z = 0.738296341569;
    msg.z_units = 202U;
    msg.speed = 0.666781692664;
    msg.speed_units = 121U;
    msg.duration = 15624U;
    msg.radius = 0.139085937125;
    msg.flags = 49U;
    msg.custom.assign("JYSQEHGDEAPKRVYOMEJPSKKVLZPRWWZUKJJDBTRZRVHZFQCWHCSXAWVDCIMFXSTFFUTYPCGRBCIUHZFGRDURZEIGLGXGZOOMSTZPHGENPDDNXIXENYIBJRIHDILDEVTOQYOVGC");

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
    msg.setTimeStamp(0.796229992478);
    msg.setSource(43703U);
    msg.setSourceEntity(1U);
    msg.setDestination(23913U);
    msg.setDestinationEntity(210U);
    msg.timeout = 5431U;
    msg.lat = 0.0615026625833;
    msg.lon = 0.291257819432;
    msg.z = 0.847129026692;
    msg.z_units = 186U;
    msg.speed = 0.000189816373431;
    msg.speed_units = 97U;
    msg.duration = 28711U;
    msg.radius = 0.697310181714;
    msg.flags = 107U;
    msg.custom.assign("AOJQTQODFGDOWSULBGQGTTPCNGBMLMWRLFOWJMIEAIYOTXEHSKJQLRPPVYYYPZCIFMATSHTKAAELDYCJNJABRSDUQQCFWEBVHJJIUCTDVMZQKYQHRUGNTFVQWZUVXWRNQZOZHEPMBWJUUGHXNAFFCPHKXDBMGTYLSIMALYKXGEFOVWSPGJRWNMKLFBSKZCITABXEVLSIYI");

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
    msg.setTimeStamp(0.985435321042);
    msg.setSource(11083U);
    msg.setSourceEntity(108U);
    msg.setDestination(54530U);
    msg.setDestinationEntity(180U);
    msg.timeout = 15161U;
    msg.lat = 0.947537174492;
    msg.lon = 0.600672147876;
    msg.z = 0.266442410012;
    msg.z_units = 32U;
    msg.speed = 0.0374650804822;
    msg.speed_units = 233U;
    msg.duration = 24800U;
    msg.radius = 0.0837807188997;
    msg.flags = 120U;
    msg.custom.assign("PUUJOLMKBZ");

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
    msg.setTimeStamp(0.106159561742);
    msg.setSource(31442U);
    msg.setSourceEntity(253U);
    msg.setDestination(64739U);
    msg.setDestinationEntity(2U);
    msg.custom.assign("BGLFBVHQTOSTRPDCHQXUYNFCQYVOPIHMWXNYYGKMEODYEPLVHGNYVWEXZOIWNZQUUBJZBOHHCWVIKMXNWMJCADAAEBTDQKZGSAXHSBKFTWHWORJWUQONTZARBYANPSQIEHYJSUILDKPSDJX");

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
    msg.setTimeStamp(0.0491636314096);
    msg.setSource(20480U);
    msg.setSourceEntity(43U);
    msg.setDestination(18318U);
    msg.setDestinationEntity(32U);
    msg.custom.assign("WMWOGDQJKGJDJCDVGYUFXMCYONNVBAARLSHFKEPLKXUMWFTZYJUSPZGEWLEIVIWPSXRHUPSRPAQSCQVBYBWSQHBZIPNJECPUIDQMOLXTWVDMBYCOFFALRMCXOFDDCWKBTZORXLQPJJIRVRDLZCQKGHYFNYNQRHVDZMXIFGSTEAGNPQMASJXOIOWTGHVAHUKFKZMQDNEVXTTEHBHKTOCLKZIEZBVJPXIECSALYMFZNBULRSTGNRIAYWHUB");

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
    msg.setTimeStamp(0.520482358825);
    msg.setSource(64034U);
    msg.setSourceEntity(205U);
    msg.setDestination(21648U);
    msg.setDestinationEntity(223U);
    msg.custom.assign("LNHAGVJZWAKPWSROVPPG");

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
    msg.setTimeStamp(0.37736177627);
    msg.setSource(55274U);
    msg.setSourceEntity(100U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(58U);
    msg.timeout = 32138U;
    msg.lat = 0.31223828158;
    msg.lon = 0.467670697156;
    msg.z = 0.738774273769;
    msg.z_units = 89U;
    msg.duration = 17125U;
    msg.speed = 0.969606396142;
    msg.speed_units = 53U;
    msg.type = 249U;
    msg.radius = 0.822724469418;
    msg.length = 0.800861571343;
    msg.bearing = 0.800099381993;
    msg.direction = 140U;
    msg.custom.assign("JREYRFSLISNTSZKJXTZHPILFMGKJNZANLLVNRWATXNZHEXCYSYVGIIFHUCEEWDMLJFXYODYXPNBPXCARPMUBUCQMLABVPXIDLDSFWTVCZOBVOUSQWCSYKUHGZSPWHF");

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
    msg.setTimeStamp(0.580668529015);
    msg.setSource(8105U);
    msg.setSourceEntity(85U);
    msg.setDestination(30203U);
    msg.setDestinationEntity(60U);
    msg.timeout = 45216U;
    msg.lat = 0.925348251591;
    msg.lon = 0.52089565732;
    msg.z = 0.0957979436916;
    msg.z_units = 4U;
    msg.duration = 40999U;
    msg.speed = 0.5463406124;
    msg.speed_units = 165U;
    msg.type = 11U;
    msg.radius = 0.650032223895;
    msg.length = 0.751763856803;
    msg.bearing = 0.970332214751;
    msg.direction = 242U;
    msg.custom.assign("WVGACRZQGKRSDEDZKEVMXPMRUHBLUALSRBFMMOCXGSIMKTOPXYADDBVQJAYHNDOPNUXLYCVKVPHHQVBJAGAISTYWDPEHFSCMYUWVQHOSZFGYEVQNJOCPCNOEICOOCQEBEISEYZRBFUNIPPRGXFYKKFTTUJELWRMAKNZWXISVFBSTLFOMMFOKRZIIBWCGJRFKGQJYUNRIDXADHLQTSXXJHHTTELXHCZQPYUGUZJWBNUJAILLNJBKMQNWALDV");

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
    msg.setTimeStamp(0.282813520635);
    msg.setSource(22529U);
    msg.setSourceEntity(64U);
    msg.setDestination(15066U);
    msg.setDestinationEntity(235U);
    msg.timeout = 13689U;
    msg.lat = 0.596622844126;
    msg.lon = 0.60062653561;
    msg.z = 0.52234762833;
    msg.z_units = 121U;
    msg.duration = 19656U;
    msg.speed = 0.741649681586;
    msg.speed_units = 110U;
    msg.type = 31U;
    msg.radius = 0.432270455161;
    msg.length = 0.0236733883939;
    msg.bearing = 0.21719444949;
    msg.direction = 147U;
    msg.custom.assign("XNMJVGUHBUYLXDTEEJFYQDIYIJKGXDIGLSGKCPAIEARVEZLYRFMHTJOFNMLODKWONYRCIGSPAUSQZDDDSXVKXGNNPJBUDLSZMRJLYROTOAQZHUKPOCECFUCCWHMTTSWQYUNWQXPNRBXBCVNXBPKUBUMGEASFAGQWWHE");

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
    msg.setTimeStamp(0.287193892035);
    msg.setSource(22464U);
    msg.setSourceEntity(47U);
    msg.setDestination(63622U);
    msg.setDestinationEntity(224U);
    msg.duration = 49345U;
    msg.custom.assign("WLWPVBVTIFKVDPUATVYWPJRXQCAMEUZYOYDGWHALRPFGRNQDCCKILJIQJNDYZGEBGSOKZBONBEMSJVGNZPIAPNM");

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
    msg.setTimeStamp(0.669896912104);
    msg.setSource(36881U);
    msg.setSourceEntity(189U);
    msg.setDestination(10650U);
    msg.setDestinationEntity(216U);
    msg.duration = 21621U;
    msg.custom.assign("CHNJLCWYMGMWQYBHOFSBMKUHCBUJZWETTSUJLFDKVKDUHIESWBFJPEQYNVOFTAGCUZDPOQWIZRYGBNJEQXMLJMYHMUQIVXTWQCRHXSVOBNNYMPXOGALLGGTGWHSUVELPNILFRIIVK");

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
    msg.setTimeStamp(0.271461058404);
    msg.setSource(56822U);
    msg.setSourceEntity(204U);
    msg.setDestination(28140U);
    msg.setDestinationEntity(241U);
    msg.duration = 51422U;
    msg.custom.assign("ONRIOBJVPHVRWDPKMTDQVXVOXPKLTINJEAYXTQXASKRCZZMXWLCUCONEGFMBHWAAGJVBRTDCBAUBTUFJKGJLHIXUUIDYLSSPFYHKQWWHOCTBLECBRJGEQVJKNNTPNFHDXXRFRFCTITY");

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
    msg.setTimeStamp(0.422897689202);
    msg.setSource(11327U);
    msg.setSourceEntity(254U);
    msg.setDestination(59092U);
    msg.setDestinationEntity(218U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0852197743636;
    msg.control.set(tmp_msg_0);
    msg.duration = 19325U;
    msg.custom.assign("EUCOXRGVRMFZUZOVVUCRRCKZAPTPJXFAYOUEH");

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
    msg.setTimeStamp(0.369018035637);
    msg.setSource(60719U);
    msg.setSourceEntity(61U);
    msg.setDestination(59914U);
    msg.setDestinationEntity(21U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.795375554393;
    msg.control.set(tmp_msg_0);
    msg.duration = 58458U;
    msg.custom.assign("BGPGBPSZSSNDUZOMODUJDGZCNQ");

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
    msg.setTimeStamp(0.495249468915);
    msg.setSource(48457U);
    msg.setSourceEntity(6U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(93U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.175476169461;
    msg.control.set(tmp_msg_0);
    msg.duration = 43135U;
    msg.custom.assign("XQIBVCKJUUUFHKIFACWBXDQPNSHXVNMTOXUWHOGIOLWFVTYLYNPUDNFANCYPFEORLGJYWIDVQVVIYRUDHPUOSHSELDBRTEYAMRNARBCMFQJSIUYEWCVETGLRECBYKXGLBXZHPDNSJZPEFUKVOOAAMZKKGPIHEXNFQKPSSVBTYNUHMFWMZDLOZCXBGOTJJYJWLBIXBTAMZIJGWSTDPLTSRT");

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
    msg.setTimeStamp(0.90230499557);
    msg.setSource(61857U);
    msg.setSourceEntity(49U);
    msg.setDestination(20045U);
    msg.setDestinationEntity(207U);
    msg.timeout = 51446U;
    msg.lat = 0.633525040025;
    msg.lon = 0.627863680195;
    msg.z = 0.754574583121;
    msg.z_units = 44U;
    msg.speed = 0.954448365193;
    msg.speed_units = 211U;
    msg.bearing = 0.270040110785;
    msg.cross_angle = 0.561280803338;
    msg.width = 0.557565492892;
    msg.length = 0.979128457655;
    msg.hstep = 0.312212106262;
    msg.coff = 8U;
    msg.alternation = 134U;
    msg.flags = 125U;
    msg.custom.assign("EFEMRJWKDSLKDPKSHFNVSVLJHTUPCFEOMGKQXQPNMUZLOVSZMDYXUVQILBAPZFSYTEGMCWVABYNJHSLDYXCGNJFFJOJDZAFUZNGPOBCPTXFZKPERVZNFOCMRGKNADCYOIXYELWSLGCILIJIRPWCBL");

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
    msg.setTimeStamp(0.439680475846);
    msg.setSource(31004U);
    msg.setSourceEntity(165U);
    msg.setDestination(14716U);
    msg.setDestinationEntity(102U);
    msg.timeout = 60907U;
    msg.lat = 0.755067569186;
    msg.lon = 0.279857307352;
    msg.z = 0.168018385828;
    msg.z_units = 44U;
    msg.speed = 0.388688353724;
    msg.speed_units = 169U;
    msg.bearing = 0.068002886254;
    msg.cross_angle = 0.461325427658;
    msg.width = 0.812212370551;
    msg.length = 0.842557237612;
    msg.hstep = 0.107027560856;
    msg.coff = 169U;
    msg.alternation = 207U;
    msg.flags = 4U;
    msg.custom.assign("VPDPZCYQAZFURIPMKUBVRABLVQNJQGBECCEJKIBBLUFZWPSMXGWXFMNFQXVSQETHJEMWXTSWZSYDOESTYBGJKLCPZNVTCMIGFRFTZXGTIRHWLCEOGYDJXGZPPAGCJAVOWANOUTCFAFJDPNVYCQTR");

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
    msg.setTimeStamp(0.0367148736581);
    msg.setSource(43732U);
    msg.setSourceEntity(214U);
    msg.setDestination(193U);
    msg.setDestinationEntity(59U);
    msg.timeout = 40607U;
    msg.lat = 0.0779567828198;
    msg.lon = 0.136199384264;
    msg.z = 0.448231976968;
    msg.z_units = 16U;
    msg.speed = 0.912891749671;
    msg.speed_units = 123U;
    msg.bearing = 0.663570254249;
    msg.cross_angle = 0.148644925405;
    msg.width = 0.889358384022;
    msg.length = 0.896907270613;
    msg.hstep = 0.600054372177;
    msg.coff = 174U;
    msg.alternation = 196U;
    msg.flags = 188U;
    msg.custom.assign("FUXBDGZFODGOJJVDCWVMULPRGPKHWZTEXWTLSQTJFIXVUKZDCEDLYIZWYUE");

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
    msg.setTimeStamp(0.510685133904);
    msg.setSource(32004U);
    msg.setSourceEntity(26U);
    msg.setDestination(9125U);
    msg.setDestinationEntity(95U);
    msg.timeout = 15858U;
    msg.lat = 0.991740808071;
    msg.lon = 0.404837238366;
    msg.z = 0.0204560412275;
    msg.z_units = 47U;
    msg.speed = 0.288785179987;
    msg.speed_units = 35U;
    msg.custom.assign("LNODUBTMXLFQN");

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
    msg.setTimeStamp(0.170291251076);
    msg.setSource(15225U);
    msg.setSourceEntity(103U);
    msg.setDestination(7351U);
    msg.setDestinationEntity(211U);
    msg.timeout = 10837U;
    msg.lat = 0.120251947532;
    msg.lon = 0.286280905417;
    msg.z = 0.416803393575;
    msg.z_units = 180U;
    msg.speed = 0.920257114197;
    msg.speed_units = 88U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.804212912873;
    tmp_msg_0.y = 0.774493923242;
    tmp_msg_0.z = 0.147354745373;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NENORUUIZBQTOEVTOTAOTULKLSHHRDFRMHYTWWXCSAJEKMWBOHVQAJNISPVXZYOZUIOWXICGMLLQTDVLNAFPZGQKYFQERDHWUGWGKVBOCLWMHCHSDDHWKMDKXHLVEUMDENIRBKFPGP");

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
    msg.setTimeStamp(0.480483294938);
    msg.setSource(13998U);
    msg.setSourceEntity(130U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(102U);
    msg.timeout = 37557U;
    msg.lat = 0.474650653769;
    msg.lon = 0.621201420708;
    msg.z = 0.358304073245;
    msg.z_units = 202U;
    msg.speed = 0.201379354081;
    msg.speed_units = 189U;
    msg.custom.assign("ICDGELCIPIRQAFOKUDXVTVNZTVLNUJJYMZDGUSDFOMYBENXHRUSGCHVRAAHKSDZKFAYLTEJPBKEGWBAPGZLVTSPNYZXMYCCIYJHPPRWCHOFIFALXTPATZFEMJVMUKOENXQXBOXBAQJUNGSOSLIBJTLOSHCQGWHGZARHVQFHDVMRNDXETYYPLUMWBLGIEMPWBIFOXKDSRW");

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
    msg.setTimeStamp(0.0831041377476);
    msg.setSource(44728U);
    msg.setSourceEntity(118U);
    msg.setDestination(37403U);
    msg.setDestinationEntity(65U);
    msg.x = 0.386842214499;
    msg.y = 0.271250966874;
    msg.z = 0.816556655742;

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
    msg.setTimeStamp(0.503353009004);
    msg.setSource(41937U);
    msg.setSourceEntity(221U);
    msg.setDestination(24521U);
    msg.setDestinationEntity(69U);
    msg.x = 0.776685891479;
    msg.y = 0.750347453769;
    msg.z = 0.245846799398;

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
    msg.setTimeStamp(0.134897328569);
    msg.setSource(21022U);
    msg.setSourceEntity(48U);
    msg.setDestination(19657U);
    msg.setDestinationEntity(25U);
    msg.x = 0.847287227969;
    msg.y = 0.448425032879;
    msg.z = 0.482213751621;

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
    msg.setTimeStamp(0.436555651702);
    msg.setSource(426U);
    msg.setSourceEntity(234U);
    msg.setDestination(20004U);
    msg.setDestinationEntity(48U);
    msg.timeout = 41418U;
    msg.lat = 0.267292159793;
    msg.lon = 0.0232828674559;
    msg.z = 0.601449875955;
    msg.z_units = 86U;
    msg.amplitude = 0.839305112036;
    msg.pitch = 0.34892289981;
    msg.speed = 0.29781678766;
    msg.speed_units = 204U;
    msg.custom.assign("WHLUIQHBRXEGLIXMNYIPHGFQRTTCHQPBHADXEMUCTADMYKGOWZWFAUMMGDHDSKRLPXAROWKEAGJTBDFPSZCPRCUKSWZRYPWGEFBCHJJKCNMRKFWNKMXISGFSUTOVAKNCWIODJQIMUIIDQEAUSHVBPALURLFDVNVVBVQYWOVTTXOUYLXRGDMOBVTXCLJJAPQESEFRXIHNPEHYLNVEFBKZYGVZQLZFJJJQMGLBYDTNZSPOSZKNNCXYACYIZZSWB");

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
    msg.setTimeStamp(0.785080004251);
    msg.setSource(56082U);
    msg.setSourceEntity(47U);
    msg.setDestination(37612U);
    msg.setDestinationEntity(209U);
    msg.timeout = 53925U;
    msg.lat = 0.540208295482;
    msg.lon = 0.0145531024815;
    msg.z = 0.752123319383;
    msg.z_units = 203U;
    msg.amplitude = 0.188063879876;
    msg.pitch = 0.195496902084;
    msg.speed = 0.016188716926;
    msg.speed_units = 182U;
    msg.custom.assign("LJODMOPZXEINERSGTWZBIDNOKZWKCFCOVSTGYRIIQKZCGVNNVMDJVLLQJLCEDOSXQROIHRUGIKPVCXZHLETQYBUFXIKTGULSBLEEEPQAMHTUPWSQOXFWZHVLQHMTGPPHNYHBAGIA");

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
    msg.setTimeStamp(0.765748785985);
    msg.setSource(26338U);
    msg.setSourceEntity(153U);
    msg.setDestination(49213U);
    msg.setDestinationEntity(226U);
    msg.timeout = 49726U;
    msg.lat = 0.0431469964996;
    msg.lon = 0.227228677797;
    msg.z = 0.105532154212;
    msg.z_units = 6U;
    msg.amplitude = 0.980372758632;
    msg.pitch = 0.289688389488;
    msg.speed = 0.183791371699;
    msg.speed_units = 235U;
    msg.custom.assign("VNRUHTVVNRODBEGGJFVWPOMOCXRUKCJXDOJFVQIKPCHCLDEDBTIBBNOHNNASUCMFBEFXPVGQFZIXSTBQYVIHQPALONDDSRPPUMJTBLRYXLKFZEDZAXOCSZQZYYEMLSAQWXYLLLFJFANHIQHYJIXTTAXVZKMGGLSWYUXPRSYZWQORWKVRROICUKUEMSDZEPYFYKEPITAN");

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
    msg.setTimeStamp(0.209831362799);
    msg.setSource(61881U);
    msg.setSourceEntity(177U);
    msg.setDestination(44121U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.534474284583);
    msg.setSource(55119U);
    msg.setSourceEntity(154U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.2842980825);
    msg.setSource(59551U);
    msg.setSourceEntity(133U);
    msg.setDestination(5362U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.157701643504);
    msg.setSource(31119U);
    msg.setSourceEntity(175U);
    msg.setDestination(57044U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.733372187721;
    msg.lon = 0.287921677769;
    msg.z = 0.0902298489283;
    msg.z_units = 210U;
    msg.radius = 0.74155393718;
    msg.duration = 33225U;
    msg.speed = 0.197708662173;
    msg.speed_units = 100U;
    msg.custom.assign("MSXDKJVHZZXWDTXHQYOSGGJGBCCULRPNBPCWPVNYRRRFZYIVQWKVQNLEMIPJFOTOXTJGQAKOCQHKKNMPAB");

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
    msg.setTimeStamp(0.699349091203);
    msg.setSource(4784U);
    msg.setSourceEntity(69U);
    msg.setDestination(16978U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.348275284133;
    msg.lon = 0.678540972575;
    msg.z = 0.120032830356;
    msg.z_units = 72U;
    msg.radius = 0.0671585582413;
    msg.duration = 33346U;
    msg.speed = 0.180649546208;
    msg.speed_units = 54U;
    msg.custom.assign("RPHYKHHVDKXTMHVOLDEGLBEYWVRKNMZXYVEIWMHHZHZUZDLDTJXMTISGVCOECGNTYUWSUOYQFJNMGPXXEJACDUPGJPQAWNSFXMLCZIAHNKCCUKREKUVQQSYOEAPGKFOFJGKMCXURPYILGSWBIINQTNBBIOAAPFRWCRRNZFOLXBIWXFTAMFDOPSHLSNGRZYDOQQDUZAYWBGYTUQFTPKUJBLDRIACCESWEITQSBRHVPSMTEJNB");

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
    msg.setTimeStamp(0.0589874016207);
    msg.setSource(60812U);
    msg.setSourceEntity(20U);
    msg.setDestination(19980U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.121411074978;
    msg.lon = 0.570323258006;
    msg.z = 0.972483911213;
    msg.z_units = 182U;
    msg.radius = 0.388870513451;
    msg.duration = 53078U;
    msg.speed = 0.925813199586;
    msg.speed_units = 252U;
    msg.custom.assign("PYDPDRBSENMIRKVUWZOAYBNPMZXXFJJVOHGZBFZHTQBGKERDPPLKTRLVHWQHEAKXNSJRZHAHSLUTRBWMSJCDVQKMBUZCUFRQHJXZIJLUMDVVUGMAAMOCIZNTW");

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
    msg.setTimeStamp(0.554474209003);
    msg.setSource(21671U);
    msg.setSourceEntity(132U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(97U);
    msg.timeout = 42564U;
    msg.flags = 111U;
    msg.lat = 0.255457132641;
    msg.lon = 0.0506803451901;
    msg.start_z = 0.567901632935;
    msg.start_z_units = 16U;
    msg.end_z = 0.13716508237;
    msg.end_z_units = 129U;
    msg.radius = 0.299420108653;
    msg.speed = 0.202340753825;
    msg.speed_units = 81U;
    msg.custom.assign("GLPVTMYRIMMQSXIHZTZIDOVDFFZRMYHMJTJBOZLFNZGWDOVGRXEPXEOBRHZUQXYTKNUGCLECNJNCUZYRKISDVIJUMREWXITTXOYYHFLJBJBQYCLSVAUQIMPZFBKVYWHWVCJQDUFNNOFIPPZXEUBVGPBVLHALDDQSKC");

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
    msg.setTimeStamp(0.837797963339);
    msg.setSource(25800U);
    msg.setSourceEntity(171U);
    msg.setDestination(7864U);
    msg.setDestinationEntity(217U);
    msg.timeout = 32922U;
    msg.flags = 237U;
    msg.lat = 0.359294057753;
    msg.lon = 0.784538395002;
    msg.start_z = 0.662931932555;
    msg.start_z_units = 23U;
    msg.end_z = 0.584838241511;
    msg.end_z_units = 24U;
    msg.radius = 0.930045660048;
    msg.speed = 0.236538204551;
    msg.speed_units = 27U;
    msg.custom.assign("TZJEDQOOTLRDNVSWJYVDPYBWNQFADJDGDERIUGGFRFFUVMWXFOLZUBJWSBNRBDSXULNSMJGZLSFRTSAYYEUKDVTFYQMRPLBHOJBZXQJKHYKIAVIDFPMCCJCBMGESEWLBNXOCQPXZOUPZAZCNUJJEVLTEVHRIAMNGTRQKXSGWOHOHA");

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
    msg.setTimeStamp(0.350547629577);
    msg.setSource(11183U);
    msg.setSourceEntity(2U);
    msg.setDestination(17884U);
    msg.setDestinationEntity(141U);
    msg.timeout = 11283U;
    msg.flags = 188U;
    msg.lat = 0.200886962198;
    msg.lon = 0.476030873623;
    msg.start_z = 0.205822654272;
    msg.start_z_units = 151U;
    msg.end_z = 0.695915084983;
    msg.end_z_units = 97U;
    msg.radius = 0.125634724295;
    msg.speed = 0.402998637565;
    msg.speed_units = 180U;
    msg.custom.assign("FCRBGTHZBDJDRLOOVIGIKSIIOYVVUSWMSVILWAJMPZAGOTXEQP");

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
    msg.setTimeStamp(0.0039390877514);
    msg.setSource(27716U);
    msg.setSourceEntity(182U);
    msg.setDestination(15016U);
    msg.setDestinationEntity(132U);
    msg.timeout = 57407U;
    msg.lat = 0.423244685299;
    msg.lon = 0.508215232046;
    msg.z = 0.802510821993;
    msg.z_units = 65U;
    msg.speed = 0.563035341448;
    msg.speed_units = 129U;
    msg.custom.assign("MTEYLNZCOUTJFIDTWHWPMLGDMNBQFIBEOINPGSBABDZGAIIONDUDSYTVNBPNGZXZPROSJACQJILYDSBUUZYPCLLEJVEFUTFBCAMCLPAIQNKHSVPAELCENTWRTWDLHOADKXZWDQKHT");

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
    msg.setTimeStamp(0.0777882163314);
    msg.setSource(54747U);
    msg.setSourceEntity(223U);
    msg.setDestination(48867U);
    msg.setDestinationEntity(97U);
    msg.timeout = 5222U;
    msg.lat = 0.864502215529;
    msg.lon = 0.0666395935927;
    msg.z = 0.868452144063;
    msg.z_units = 150U;
    msg.speed = 0.628714181874;
    msg.speed_units = 217U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.145288326719;
    tmp_msg_0.y = 0.562376988671;
    tmp_msg_0.z = 0.45531189652;
    tmp_msg_0.t = 0.427369443924;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HCZGBSLTWBSJWULLYPLYNAPMHPCKCEPJMTQPDIZWFGDKECVRREQRUNACJDNAXOJWMRYPNAOVYUXJBXKFIZZELWOHIDUPTIWJCNXWDQZTOSLOEJASKASEQZUBVWXPBPVMDFTTKQTHQZJFYLRMVAGDQQMKPGWTHYDSMMBGNNLZFGKQNCOGEIOXQNBYSXIVZTUVUSBHNVFKCHHRYRGXVFHAORIUMDGSJIBMKFDBAOXOIIWJCEYHXKRFV");

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
    msg.setTimeStamp(0.10393107196);
    msg.setSource(3975U);
    msg.setSourceEntity(57U);
    msg.setDestination(55701U);
    msg.setDestinationEntity(73U);
    msg.timeout = 20854U;
    msg.lat = 0.115571096823;
    msg.lon = 0.992251438046;
    msg.z = 0.531974903016;
    msg.z_units = 202U;
    msg.speed = 0.390084746512;
    msg.speed_units = 67U;
    msg.custom.assign("JZYOVFKNDURPPVELHWXDMJKHLRQJMTQYTJWY");

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
    msg.setTimeStamp(0.133348764841);
    msg.setSource(43526U);
    msg.setSourceEntity(80U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(158U);
    msg.x = 0.631106264784;
    msg.y = 0.125470413023;
    msg.z = 0.955743028098;
    msg.t = 0.659772873409;

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
    msg.setTimeStamp(0.760702187652);
    msg.setSource(42073U);
    msg.setSourceEntity(191U);
    msg.setDestination(56457U);
    msg.setDestinationEntity(3U);
    msg.x = 0.465201018498;
    msg.y = 0.806916292551;
    msg.z = 0.257051183082;
    msg.t = 0.674016656045;

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
    msg.setTimeStamp(0.781528232133);
    msg.setSource(52557U);
    msg.setSourceEntity(195U);
    msg.setDestination(41249U);
    msg.setDestinationEntity(54U);
    msg.x = 0.697863686757;
    msg.y = 0.409818129577;
    msg.z = 0.687158946369;
    msg.t = 0.14464875048;

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
    msg.setTimeStamp(0.801115957379);
    msg.setSource(10414U);
    msg.setSourceEntity(164U);
    msg.setDestination(34519U);
    msg.setDestinationEntity(167U);
    msg.timeout = 19261U;
    msg.name.assign("OAGFRPANDUUNBDYAWHDEKLEHUKPZLPPQVUSKKMTJCDVPBAENAGCJJLUXNHEYLSOHMQEMDVHBUXIFHGO");
    msg.custom.assign("IWBOLYHCMYKMZOIDIEJCTJVPEXVADNEKPAVTPSASYUKBXAUMBV");

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
    msg.setTimeStamp(0.474458341375);
    msg.setSource(8706U);
    msg.setSourceEntity(89U);
    msg.setDestination(37722U);
    msg.setDestinationEntity(74U);
    msg.timeout = 53980U;
    msg.name.assign("FBQJREGUOAAKMBVYPRJNEXUFSPSTFTBKLKJGANOQJZVMLJQCZBTWEKROKHSJSWNEHQACUJVDXTVCHHGPBCFMCEJOMFWKIEPLWUQVSFNESDHLRZMXPYOIVTZNQHLGSNVADWLGURRXHAJCOPWDLFMOQEFDTXZGTUBICIUJEAGZWDLZFXQFKAYMQPIRHBITNXRRYNAPRYIHMPAZYNLZBINDDYWTVDMYMOUDCCG");
    msg.custom.assign("NHUWQEZVJAXWXHYLZRVHVXIRKFXZVWHDLUMSTMBJUYAYEXLTVMDEGFODHNWTCNZNZDHBLJCIIMYEAVMPMWLEJWDJJYKQCSIIOMATVSSNGVANFQHUPSBWCADWSPRKGRQHLGUZFEUTOGOPXYVMAPBSGZQBOTYCACDMITQ");

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
    msg.setTimeStamp(0.4576277139);
    msg.setSource(39315U);
    msg.setSourceEntity(156U);
    msg.setDestination(38385U);
    msg.setDestinationEntity(68U);
    msg.timeout = 617U;
    msg.name.assign("DSFZTAGHMUASEBULBWFEWTMSSTIWEFYZCDYTNTNTPUTKJDYRWAMIFJCYUGKEOCHXUXKRRGSCK");
    msg.custom.assign("ZIZHPOCVMPYAGOQDUSKHCSYNEXJUXLRYKGAXCSIYUMVONJOZEPWRTABLDHPXJZSIATJEOT");

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
    msg.setTimeStamp(0.883590876291);
    msg.setSource(26014U);
    msg.setSourceEntity(224U);
    msg.setDestination(47794U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.828437096687;
    msg.lon = 0.298090243752;
    msg.z = 0.72577656611;
    msg.z_units = 232U;
    msg.speed = 0.964954160756;
    msg.speed_units = 222U;
    msg.start_time = 0.686125133864;
    msg.custom.assign("EUXHZFKSKNWCIQGLVHWZFSBVQODUSPXUJXWGROFKEWRIDJDFPDNTJOTGOILETVQAUXTVBZHAMJRLLFLYKITZAQILLDSVEXERYJAQBDURVDIGCSPFHTAJBEUUOWYMPKOEPSCWFNGGKMFKWOGPNVXMAONMIJCHFQIDJGSYRSSBZZZKQZRELAYQXZTXYPGVBCWELCPCRBWAPQBCBKRHNTULT");

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
    msg.setTimeStamp(0.510097166648);
    msg.setSource(38696U);
    msg.setSourceEntity(144U);
    msg.setDestination(27504U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.638057819796;
    msg.lon = 0.795972559706;
    msg.z = 0.118237831358;
    msg.z_units = 125U;
    msg.speed = 0.288018796879;
    msg.speed_units = 71U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.627513385005;
    tmp_msg_0.y = 0.706761291097;
    tmp_msg_0.z = 0.164774370167;
    tmp_msg_0.t = 0.37556096664;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0204820393767;
    msg.custom.assign("FJMHVCOTPZAKXDPNNNDCSXKFKUVLLMBDTJXCQHAQTYYLQGULXWLQLMBXWAMGHJUQIPZWAEBMRARXRSKUGVZDPIZUQFOUEFPPIKYSCEJB");

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
    msg.setTimeStamp(0.732439466025);
    msg.setSource(50213U);
    msg.setSourceEntity(99U);
    msg.setDestination(31233U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.673866277448;
    msg.lon = 0.0458123683362;
    msg.z = 0.22809120328;
    msg.z_units = 138U;
    msg.speed = 0.824515902733;
    msg.speed_units = 126U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20542U;
    tmp_msg_0.off_x = 0.0379139357881;
    tmp_msg_0.off_y = 0.564168478756;
    tmp_msg_0.off_z = 0.676400453933;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.115212251295;
    msg.custom.assign("GYBLNHNUNCYWPMIWDWLBTGKDMIQFJYLZOEVHCDYEAHAVNRNDLDWAAICKJUFMEQJCZETUFIWEPVTPTGGXVPZZFXVSMOTUDVWPEASZMG");

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
    msg.setTimeStamp(0.76699889938);
    msg.setSource(13706U);
    msg.setSourceEntity(132U);
    msg.setDestination(53176U);
    msg.setDestinationEntity(151U);
    msg.vid = 22248U;
    msg.off_x = 0.687356935087;
    msg.off_y = 0.426010384133;
    msg.off_z = 0.467766982382;

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
    msg.setTimeStamp(0.881101585509);
    msg.setSource(16662U);
    msg.setSourceEntity(100U);
    msg.setDestination(15496U);
    msg.setDestinationEntity(57U);
    msg.vid = 50085U;
    msg.off_x = 0.850021872164;
    msg.off_y = 0.839969837584;
    msg.off_z = 0.911235827421;

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
    msg.setTimeStamp(0.398768342165);
    msg.setSource(27574U);
    msg.setSourceEntity(222U);
    msg.setDestination(15736U);
    msg.setDestinationEntity(132U);
    msg.vid = 702U;
    msg.off_x = 0.146486893282;
    msg.off_y = 0.413542407277;
    msg.off_z = 0.60517338225;

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
    msg.setTimeStamp(0.317612856752);
    msg.setSource(16983U);
    msg.setSourceEntity(166U);
    msg.setDestination(59113U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.752499760809);
    msg.setSource(26755U);
    msg.setSourceEntity(161U);
    msg.setDestination(57518U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.35228850471);
    msg.setSource(12091U);
    msg.setSourceEntity(82U);
    msg.setDestination(28564U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.132804727056);
    msg.setSource(27550U);
    msg.setSourceEntity(238U);
    msg.setDestination(49086U);
    msg.setDestinationEntity(106U);
    msg.mid = 32661U;

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
    msg.setTimeStamp(0.800825073439);
    msg.setSource(35007U);
    msg.setSourceEntity(141U);
    msg.setDestination(30132U);
    msg.setDestinationEntity(101U);
    msg.mid = 35624U;

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
    msg.setTimeStamp(0.911400417925);
    msg.setSource(49905U);
    msg.setSourceEntity(75U);
    msg.setDestination(47725U);
    msg.setDestinationEntity(32U);
    msg.mid = 49597U;

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
    msg.setTimeStamp(0.575514637862);
    msg.setSource(45813U);
    msg.setSourceEntity(235U);
    msg.setDestination(36635U);
    msg.setDestinationEntity(20U);
    msg.state = 210U;
    msg.eta = 44839U;
    msg.info.assign("HISELOLABVOIRJNZRWJDBRQFOYOXMULKXHTWZBNLHUJZRKGORENXTTAMQZHTBPCVVFULYGSGDZCIEOSMXCW");

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
    msg.setTimeStamp(0.105251511342);
    msg.setSource(6130U);
    msg.setSourceEntity(51U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(64U);
    msg.state = 222U;
    msg.eta = 49260U;
    msg.info.assign("DREONCIRSJIMOCJKUOABZRAUJBRZQCNFDCQVWCUSOBVIGUWABQLAJYTWFHUXYYCGMLBGSJNGVJPFTHHEZNIXLNSTHTLCDSDMCMYQFBPEHVWFMZVHOIDOGWBMPGKSIINMFFYVEICBUYNMJDQNEKWQZNGTEUTDXAOPRZRLPSFLQAKXYKHSXTPCDXTGFKABIJRDTTLNKLPVLPVORUMRZWR");

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
    msg.setTimeStamp(0.53420990919);
    msg.setSource(63176U);
    msg.setSourceEntity(103U);
    msg.setDestination(58082U);
    msg.setDestinationEntity(23U);
    msg.state = 97U;
    msg.eta = 9665U;
    msg.info.assign("MOXDFRKQKKDDTDVREMRGEFCPOBFNXQGHRBLCIKFYGSMSUSNTAXXEAWBELFEWASCWAXAOHMSKIMZJYMRBQJHXHWOVFICUNSHUXTNDEUKPOJXYNZGIYAULZBWNSGYMRFWLQLVWQPTLZGXDVHVFPTJOQTOMEKPYUITVEZOAVABRYWJTHZYCZDBUDRKFJHBOHDXPCQACUVBTPQLSVHYSJWGNPPNCNILLUYTDIZBGQJMLGIE");

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
    msg.setTimeStamp(0.0448989364693);
    msg.setSource(60816U);
    msg.setSourceEntity(170U);
    msg.setDestination(24962U);
    msg.setDestinationEntity(221U);
    msg.system = 9537U;
    msg.duration = 53530U;
    msg.speed = 0.887556716835;
    msg.speed_units = 219U;
    msg.x = 0.615189263299;
    msg.y = 0.774597609726;
    msg.z = 0.534156265252;
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
    msg.setTimeStamp(0.980125544197);
    msg.setSource(54637U);
    msg.setSourceEntity(50U);
    msg.setDestination(41308U);
    msg.setDestinationEntity(75U);
    msg.system = 53033U;
    msg.duration = 36658U;
    msg.speed = 0.354951119662;
    msg.speed_units = 184U;
    msg.x = 0.0882289611985;
    msg.y = 0.538148153114;
    msg.z = 0.81401113234;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.86892749553);
    msg.setSource(25091U);
    msg.setSourceEntity(192U);
    msg.setDestination(42825U);
    msg.setDestinationEntity(142U);
    msg.system = 10180U;
    msg.duration = 54711U;
    msg.speed = 0.00741064033127;
    msg.speed_units = 207U;
    msg.x = 0.119863855002;
    msg.y = 0.345646406598;
    msg.z = 0.456605337029;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.260490695432);
    msg.setSource(55061U);
    msg.setSourceEntity(43U);
    msg.setDestination(16960U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.881134979115;
    msg.lon = 0.728872553495;
    msg.speed = 0.561660822789;
    msg.speed_units = 182U;
    msg.duration = 33318U;
    msg.sys_a = 42565U;
    msg.sys_b = 428U;
    msg.move_threshold = 0.0377206212106;

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
    msg.setTimeStamp(0.937471191835);
    msg.setSource(13104U);
    msg.setSourceEntity(83U);
    msg.setDestination(60222U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0991784652606;
    msg.lon = 0.54896502375;
    msg.speed = 0.474469511769;
    msg.speed_units = 229U;
    msg.duration = 27087U;
    msg.sys_a = 58536U;
    msg.sys_b = 43298U;
    msg.move_threshold = 0.677728010686;

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
    msg.setTimeStamp(0.890710317935);
    msg.setSource(46955U);
    msg.setSourceEntity(182U);
    msg.setDestination(18796U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.677720580316;
    msg.lon = 0.477597413229;
    msg.speed = 0.0473058726907;
    msg.speed_units = 33U;
    msg.duration = 35190U;
    msg.sys_a = 15792U;
    msg.sys_b = 333U;
    msg.move_threshold = 0.585115441115;

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
    msg.setTimeStamp(0.790732702885);
    msg.setSource(4061U);
    msg.setSourceEntity(10U);
    msg.setDestination(31660U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.529755614677;
    msg.lon = 0.691342483503;
    msg.z = 0.36425859713;
    msg.z_units = 245U;
    msg.speed = 0.0572895147591;
    msg.speed_units = 161U;
    msg.custom.assign("OLJKCEWGDRUANJSRANEFOHZYHHDXYGTNCZESFTJKNKGKWMBRDJEXGLUCMVWMGBGQXBATXZEIYJJBCMNWECBFPPQMHAYOVUIVAEP");

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
    msg.setTimeStamp(0.76991495414);
    msg.setSource(57266U);
    msg.setSourceEntity(137U);
    msg.setDestination(5217U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.0942934450391;
    msg.lon = 0.115360937059;
    msg.z = 0.666921861297;
    msg.z_units = 254U;
    msg.speed = 0.560238612463;
    msg.speed_units = 67U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.924949279508;
    tmp_msg_0.lon = 0.632073135605;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KZJNPEZSYQPTUURJEWPDPHPQXXELHSCFDSDWALGSOBJCYGTTBSJAHVWFMXJIYOEEKVBCWMCKRYSABXBIEKJMVVJEVMPQLKQLMULKFBDPXPVINMXPFGDYRDQNYDZDCOWCYSITJGXUBOYUWFIGTMCDNFHAIRELTORBGWDMPTZUQQHZSYVZAWHLXEKUGNVNNTUMORFZCBFWFAOSAZOACMKVOACJHGQVILJNIFTNERRRSHIGXZLTKAHRG");

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
    msg.setTimeStamp(0.267285802992);
    msg.setSource(46846U);
    msg.setSourceEntity(139U);
    msg.setDestination(12069U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.271190723587;
    msg.lon = 0.937483931751;
    msg.z = 0.594526656207;
    msg.z_units = 69U;
    msg.speed = 0.36512378314;
    msg.speed_units = 115U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.382994624954;
    tmp_msg_0.lon = 0.442013945336;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VRUKJZIRXMHEEDYRCCXHQBYTKISQGLDYSOXGSHIINCHFQIELS");

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
    msg.setTimeStamp(0.455195699214);
    msg.setSource(3285U);
    msg.setSourceEntity(224U);
    msg.setDestination(50876U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.453544476028;
    msg.lon = 0.755193281976;

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
    msg.setTimeStamp(0.241274356961);
    msg.setSource(20737U);
    msg.setSourceEntity(47U);
    msg.setDestination(22650U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.140994246776;
    msg.lon = 0.404719237418;

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
    msg.setTimeStamp(0.382245850988);
    msg.setSource(5791U);
    msg.setSourceEntity(68U);
    msg.setDestination(54198U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.216392470549;
    msg.lon = 0.437079211805;

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
    msg.setTimeStamp(0.0470651781071);
    msg.setSource(46098U);
    msg.setSourceEntity(252U);
    msg.setDestination(39809U);
    msg.setDestinationEntity(152U);
    msg.timeout = 20425U;
    msg.lat = 0.129474882273;
    msg.lon = 0.383849680642;
    msg.z = 0.243143485433;
    msg.z_units = 170U;
    msg.pitch = 0.304038427309;
    msg.amplitude = 0.953241987549;
    msg.duration = 31927U;
    msg.speed = 0.325089522794;
    msg.speed_units = 96U;
    msg.radius = 0.614444582577;
    msg.direction = 89U;
    msg.custom.assign("XHWUIENHWLVRORAADUEVKCOWAYHZDIUMHBPSVATWDXPRBMGMSOQNCCZVUJVXJCJNFDIVOTXTBCFLJMGOBOIMKMCFXSKPPGDZYNBNIAAHBZGKPXULAXCWPLBETTSSYKYKSNQWFTEWHCLGRUUWSIBZMMEPHCXITKQJFYGGKZAQQOXJLYHPLRDNEADKGRZZBHJYULVNGYRIFJRCQNO");

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
    msg.setTimeStamp(0.163160391241);
    msg.setSource(7526U);
    msg.setSourceEntity(174U);
    msg.setDestination(62897U);
    msg.setDestinationEntity(224U);
    msg.timeout = 36171U;
    msg.lat = 0.727087875581;
    msg.lon = 0.413178877161;
    msg.z = 0.748756217865;
    msg.z_units = 193U;
    msg.pitch = 0.711975535852;
    msg.amplitude = 0.291702320657;
    msg.duration = 30507U;
    msg.speed = 0.0355801753145;
    msg.speed_units = 232U;
    msg.radius = 0.694230954051;
    msg.direction = 66U;
    msg.custom.assign("DNJEEHXSJYIBBXARWXVKOELNMSNCUOQTKVLYDQUOOPIJIVBWEPMMYCZADHLYWAIEBXSKBFCGFVQGTWDZPPROXNHCRDJIBFOYZSPIRHXRAHSDPSQLASFNEBRFNXJHTHKDZMHVV");

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
    msg.setTimeStamp(0.96223449484);
    msg.setSource(58451U);
    msg.setSourceEntity(202U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(193U);
    msg.timeout = 17549U;
    msg.lat = 0.0995719191281;
    msg.lon = 0.670129157007;
    msg.z = 0.166641027055;
    msg.z_units = 73U;
    msg.pitch = 0.0804108125673;
    msg.amplitude = 0.428956538896;
    msg.duration = 41410U;
    msg.speed = 0.693064472737;
    msg.speed_units = 186U;
    msg.radius = 0.707777809546;
    msg.direction = 167U;
    msg.custom.assign("GDQNBOEHEOJHXKNMQEQKJMZMVWRFYTTCXADWL");

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
    msg.setTimeStamp(0.0589858689041);
    msg.setSource(3447U);
    msg.setSourceEntity(88U);
    msg.setDestination(7238U);
    msg.setDestinationEntity(232U);
    msg.formation_name.assign("XIJVQOYEFNFGBZDNUHUOGPJMXYBDJANXNUJWZYJYGSOTMISRPIXXPXFKUNOLFDPBDLIBLJOFWGAPHSWCKQLTFLYUKMTZJKBEXWOATUXZZBCCMQOETGEGD");
    msg.reference_frame = 166U;
    msg.custom.assign("QWFPJCANGZLFHJBOZHBWCLEDPLAJEHYTXRZKGZKNKBENPSSMTEOICVAFDACORHHSUVRUVLJFBMJUITKZIHFQYKBVOUKZBQCRWTCUGQCUIWELOPONJGSOTSFVSXYBJQIPZGGYUYFXKFNELGVEJXSTLHULIZMADMWQYUGDYRQIKMJJZFLAKSBMDXTGVDNVOEPPXMMHKA");

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
    msg.setTimeStamp(0.808852862484);
    msg.setSource(42226U);
    msg.setSourceEntity(177U);
    msg.setDestination(56895U);
    msg.setDestinationEntity(128U);
    msg.formation_name.assign("PCDSJMRHDXGBHAAOYOIFJETWSMEAWKIZCROZICKPGFLRVAMYNLTGSGENUQXRXELGRLZKOKWYFBTMOZHBDYYIQLIKJPKJYPAQUAAGIVUDXFAO");
    msg.reference_frame = 33U;
    msg.custom.assign("LETCKHQFDPDFJCIFSHHLLEQUDKMJUKAXJGIYCVGYJYDVVZZLLUKBTTEMDOFSFKELPFMXLRVQFRNRDHQFNCPPEWPVAGYUJSZZQEJNSZRXWJTXFAENZZPCQGBDBYWIACSTTWLKQHBOCARMAIJHNSOYDMT");

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
    msg.setTimeStamp(0.983739285028);
    msg.setSource(33645U);
    msg.setSourceEntity(39U);
    msg.setDestination(44738U);
    msg.setDestinationEntity(217U);
    msg.formation_name.assign("RNKJNEBGQIXGTLNNFEPWFHAKTBRDAVVKIANASCUQPLMDTEJZASSRYNECOOFZPGGYBQTXGLYOGMPIDUZSBBKCHZTRJIIZVQMFXNOMWXKMUUMJKAJSVVKPHQTJYMQEPUTYDYWKRCRUZBGDFEHBOSFWXIGPTTADZXMHLCSWQELUGUVFJIREACIJ");
    msg.reference_frame = 177U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22384U;
    tmp_msg_0.off_x = 0.635930048697;
    tmp_msg_0.off_y = 0.85768582494;
    tmp_msg_0.off_z = 0.505061591053;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UGQVJRBKJFDKTWUI");

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
    msg.setTimeStamp(0.897693322334);
    msg.setSource(32738U);
    msg.setSourceEntity(159U);
    msg.setDestination(25869U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("GYDCLAFDYQWXMFJSSRZYOLMJEHOCOBBMJRVSFAFNLSYMOXLTABQDHREVFNZQTHSKIMUAZICRAVEQJAOCRKYGCXYXRQI");
    msg.formation_name.assign("ROIBFZUUMRJGHBBOGWASVIZMNGFHYPJWBJWPBMHDHIQAECHUONFWXYQFSOPNPVELTGFWRCKPXKATLLNMEHEQJYLFCYEAGTBMPPYETKZUKQLAWDGRCRNUHJIYNTIZYQNVZDICTOKVODVKTPWNJEXXDNSIACNSHPMUVUHMSXSSTLDSQUXLJQKTPJGIBKYZXAIKZVQOWBJJWECMXCDHDDULSVBRDRROXYFSZYFVKGT");
    msg.plan_id.assign("FXGNFKQJFTGTTQRZVEYPGYJFASEGKBNZRGRYKKTSONZASJCWSBDOPMLRLUXJCLALZYNICOEQKIDVODAZBKWIRDQJWCRPNISHSDBYVHOGFDYI");
    msg.description.assign("MJVKIOOOGJKXFXQBEIKBT");
    msg.leader_speed = 0.935608064697;
    msg.leader_bank_lim = 0.499962537407;
    msg.pos_sim_err_lim = 0.0499520678768;
    msg.pos_sim_err_wrn = 0.240380437332;
    msg.pos_sim_err_timeout = 19141U;
    msg.converg_max = 0.0759492586097;
    msg.converg_timeout = 23628U;
    msg.comms_timeout = 13505U;
    msg.turb_lim = 0.854222634328;
    msg.custom.assign("BYDNISNBRUSKKUYGSADCSMPRDUIFIOUTVSWKEBULTRMWBBOJZHHLNFAWLEEJORCNXZCFXIMDOFLRVYKLQWRXPYWHJAAHWVVWRZOAHABLQKOTDZXPGBHSGJBRFGMEHLLTAOHZYOSMOPAJNEYODMQNCNGTZFJPUCVEQUNTLFLVWAFYFCTZTQDAGMZVU");

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
    msg.setTimeStamp(0.489310923468);
    msg.setSource(38572U);
    msg.setSourceEntity(242U);
    msg.setDestination(14095U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("GCSGQHBGBOMXVHWLNOJNFKAATYEWIMLOVSRNAFPQSUVRDVJKAEIVZTKYYGANXKAGMIWWHZCGDMIJCPVTTYCWSPNWJXIXSLBXCPHYELCQEBPIWCZTRQTZIEOTMDRHQWXSFAPVDZCRYBXLHQGOZULANMDBPMRUNYBGXDFNFYRBORQ");
    msg.formation_name.assign("FGSWTHZQSPGAYWFZIUJYKHNNFUCBCMCOSZTYJMVYSZUXXTKUPHKWRBEVVOROIYQZJCPELPWKDYWDDM");
    msg.plan_id.assign("JTGZNFSNFQMQRXMVYINKTKDZLVOUCRQCAAJNDGALVFOSEYBXHYUJNXGAQARHYTKXFQBWAHCNXBWPYSMCKDBHBJOYAZLEIUZVXGZUSDUWOEPUQIMRKJWHRVG");
    msg.description.assign("OFLNGNFNDUBADSRQBARNLTSOFGWWIULVKCJNFDPCQGQOFLFNDMHXNFVYXQWVQYAOZSGOJTVMGPHUFRTEPCLUSTQKJWUMXKMAYQSCJPBMQZSYBAUJWYLPBMWIIAFVNPIQRPHLTZXZGCBDBTZLJEYRHJOEKTVCRCKDTNVPJOMUBCIXHEHMSYAZDPBLHZRUXOAVZEITWTKPHDKKEXHSSJBWCQENREDGFDGZIYOXKVERMK");
    msg.leader_speed = 0.563753009941;
    msg.leader_bank_lim = 0.840913320621;
    msg.pos_sim_err_lim = 0.95461591973;
    msg.pos_sim_err_wrn = 0.535170939584;
    msg.pos_sim_err_timeout = 19721U;
    msg.converg_max = 0.715292551518;
    msg.converg_timeout = 58469U;
    msg.comms_timeout = 48165U;
    msg.turb_lim = 0.406917971772;
    msg.custom.assign("MZXPARYDWDSFKWSPIIQWVMEJRKLRRYTEEJRAVEXECGAXUGRQKOOBQNKKWAYLQZYSSKJHIRCPZBXWSHMBXPYYDBCBDCVVASAPQQBVJAIQGYGFLLBZVIGJDULHNQUHTIJXDFPXOOSHGJVYKODWWVZXUSRETCICAJHABETTMLMPNCHILUDVFUOMWNQFCHJOFZH");

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
    msg.setTimeStamp(0.56942992634);
    msg.setSource(13910U);
    msg.setSourceEntity(218U);
    msg.setDestination(3787U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("PFGLEPPLUXBPALFIZIMRZCMDUQOSCRZYXEHRBRMQ");
    msg.formation_name.assign("GFRGSKYKWFGUHJRNHGVIUBONWKUPHOPMCEFPAIQIEDPJOSQGYQGNAWBSTHEHHSQHGHXAYOZUCOPEESNUZCCVMYXDGVBPZQUBZZFVJLFKMSCOK");
    msg.plan_id.assign("PVMEUUOPMATUAUGAQJRNHYKXQOSOLNHHVSJFGSLHCLIWJTCGZEQUQNGGXIGZDRPPLFUXTTWTNFMXJVDQIPPBXKEZFEPF");
    msg.description.assign("JKZANFFTOCNSQKCBJCCTPKLIHHSDVVVSGRNKXWCBRAFAQVKWTLZTBPMGWZXDHEMROZXHIGIQMSGLZFNLTPOEECDVIBDVZIUUTTRBBVXMFMYUCEAXLNFOJHZGXNOYFWGVITXNMOASYGELPIJYRISJQKMDREVQUDCFJQGNNOUZWKTWFBMRYHYETQQEYBPSJPHKHCUJBAGKWIXQLPZEVANPZWRXLUADS");
    msg.leader_speed = 0.170914527041;
    msg.leader_bank_lim = 0.278284920795;
    msg.pos_sim_err_lim = 0.033918749564;
    msg.pos_sim_err_wrn = 0.681241621498;
    msg.pos_sim_err_timeout = 11742U;
    msg.converg_max = 0.291134294546;
    msg.converg_timeout = 31010U;
    msg.comms_timeout = 2683U;
    msg.turb_lim = 0.684938965022;
    msg.custom.assign("WKYZMSMQTYYUQAPOKPIOSNHEJWIRCNSJBJAZPQBIRZUMSXNOSJAXLGTMRCKJTSCKXEIUFWUYEYNEVJZGHWWHIFALXBPRMFDHQECDFXBKNOPYEHVXOADTOKBDQLDXPDVFIPIDJKHVCBSMAFOBROEWUNPUINKXVVGNQYWEDVQNEHUUZ");

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
    msg.setTimeStamp(0.434598178269);
    msg.setSource(44776U);
    msg.setSourceEntity(71U);
    msg.setDestination(62486U);
    msg.setDestinationEntity(142U);
    msg.control_src = 43201U;
    msg.control_ent = 2U;
    msg.timeout = 0.399540248272;
    msg.loiter_radius = 0.807524845029;
    msg.altitude_interval = 0.285709207775;

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
    msg.setTimeStamp(0.667652057598);
    msg.setSource(56540U);
    msg.setSourceEntity(127U);
    msg.setDestination(64187U);
    msg.setDestinationEntity(120U);
    msg.control_src = 10662U;
    msg.control_ent = 156U;
    msg.timeout = 0.376276819546;
    msg.loiter_radius = 0.494062368676;
    msg.altitude_interval = 0.82426999691;

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
    msg.setTimeStamp(0.713935448395);
    msg.setSource(25334U);
    msg.setSourceEntity(167U);
    msg.setDestination(36575U);
    msg.setDestinationEntity(112U);
    msg.control_src = 45185U;
    msg.control_ent = 215U;
    msg.timeout = 0.935137135291;
    msg.loiter_radius = 0.786579311352;
    msg.altitude_interval = 0.0947631085349;

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
    msg.setTimeStamp(0.160444434115);
    msg.setSource(4903U);
    msg.setSourceEntity(11U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(88U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.552916856952;
    tmp_msg_0.speed_units = 71U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.937689620764;
    tmp_msg_1.z_units = 65U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.983485812638;
    msg.lon = 0.630305557341;
    msg.radius = 0.504822398475;

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
    msg.setTimeStamp(0.279118095526);
    msg.setSource(54086U);
    msg.setSourceEntity(201U);
    msg.setDestination(49211U);
    msg.setDestinationEntity(254U);
    msg.flags = 208U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.833485805985;
    tmp_msg_0.speed_units = 252U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.344806476113;
    tmp_msg_1.z_units = 77U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.847492670829;
    msg.lon = 0.837418886054;
    msg.radius = 0.0824370974763;

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
    msg.setTimeStamp(0.146075172379);
    msg.setSource(63584U);
    msg.setSourceEntity(38U);
    msg.setDestination(13511U);
    msg.setDestinationEntity(93U);
    msg.flags = 185U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.408401661302;
    tmp_msg_0.speed_units = 42U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.980879032954;
    tmp_msg_1.z_units = 214U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.189871403291;
    msg.lon = 0.686226495109;
    msg.radius = 0.901737779163;

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
    msg.setTimeStamp(0.528315769795);
    msg.setSource(49650U);
    msg.setSourceEntity(222U);
    msg.setDestination(62079U);
    msg.setDestinationEntity(194U);
    msg.control_src = 29075U;
    msg.control_ent = 51U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 159U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0937787633329;
    tmp_tmp_msg_0_0.speed_units = 3U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.482243492807;
    tmp_tmp_msg_0_1.z_units = 81U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.127073796901;
    tmp_msg_0.lon = 0.0587580673291;
    tmp_msg_0.radius = 0.744399746651;
    msg.reference.set(tmp_msg_0);
    msg.state = 245U;
    msg.proximity = 236U;

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
    msg.setTimeStamp(0.569245287481);
    msg.setSource(56461U);
    msg.setSourceEntity(188U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(145U);
    msg.control_src = 48000U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 113U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.140813031547;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.393525660807;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.484913132738;
    tmp_msg_0.lon = 0.907414816348;
    tmp_msg_0.radius = 0.0987838699858;
    msg.reference.set(tmp_msg_0);
    msg.state = 225U;
    msg.proximity = 194U;

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
    msg.setTimeStamp(0.897292747453);
    msg.setSource(30830U);
    msg.setSourceEntity(191U);
    msg.setDestination(214U);
    msg.setDestinationEntity(236U);
    msg.control_src = 27924U;
    msg.control_ent = 184U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 183U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.920123833378;
    tmp_tmp_msg_0_0.speed_units = 210U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.637572779897;
    tmp_tmp_msg_0_1.z_units = 162U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.692281789982;
    tmp_msg_0.lon = 0.531216700123;
    tmp_msg_0.radius = 0.937098131405;
    msg.reference.set(tmp_msg_0);
    msg.state = 82U;
    msg.proximity = 10U;

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
    msg.setTimeStamp(0.937000149926);
    msg.setSource(58482U);
    msg.setSourceEntity(91U);
    msg.setDestination(48836U);
    msg.setDestinationEntity(195U);
    msg.ax_cmd = 0.384866730777;
    msg.ay_cmd = 0.563950958973;
    msg.az_cmd = 0.487293745474;
    msg.ax_des = 0.882789082179;
    msg.ay_des = 0.334949832389;
    msg.az_des = 0.7817409237;
    msg.virt_err_x = 0.303779562427;
    msg.virt_err_y = 0.657568106236;
    msg.virt_err_z = 0.0183970760787;
    msg.surf_fdbk_x = 0.905561381827;
    msg.surf_fdbk_y = 0.129310962899;
    msg.surf_fdbk_z = 0.315759514192;
    msg.surf_unkn_x = 0.466598785862;
    msg.surf_unkn_y = 0.398030461327;
    msg.surf_unkn_z = 0.0844626375116;
    msg.ss_x = 0.287145637701;
    msg.ss_y = 0.617576344822;
    msg.ss_z = 0.0622724234728;

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
    msg.setTimeStamp(0.118113620712);
    msg.setSource(5769U);
    msg.setSourceEntity(144U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(116U);
    msg.ax_cmd = 0.736116639098;
    msg.ay_cmd = 0.805066830099;
    msg.az_cmd = 0.126659294509;
    msg.ax_des = 0.44723678524;
    msg.ay_des = 0.250122108563;
    msg.az_des = 0.236929477245;
    msg.virt_err_x = 0.602614787953;
    msg.virt_err_y = 0.424089453085;
    msg.virt_err_z = 0.0423517246377;
    msg.surf_fdbk_x = 0.405135084043;
    msg.surf_fdbk_y = 0.178401244636;
    msg.surf_fdbk_z = 0.784708301309;
    msg.surf_unkn_x = 0.428470183789;
    msg.surf_unkn_y = 0.379057381325;
    msg.surf_unkn_z = 0.410122662719;
    msg.ss_x = 0.844275110539;
    msg.ss_y = 0.312524729948;
    msg.ss_z = 0.96966882302;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QEGJJPXRBFUIOEQOPGMISYMTGRYQHSDX");
    tmp_msg_0.dist = 0.264817905737;
    tmp_msg_0.err = 0.939524620734;
    tmp_msg_0.ctrl_imp = 0.840061109571;
    tmp_msg_0.rel_dir_x = 0.795073030563;
    tmp_msg_0.rel_dir_y = 0.570144563365;
    tmp_msg_0.rel_dir_z = 0.573776847919;
    tmp_msg_0.err_x = 0.980251283801;
    tmp_msg_0.err_y = 0.536933319214;
    tmp_msg_0.err_z = 0.670050021229;
    tmp_msg_0.rf_err_x = 0.563748757297;
    tmp_msg_0.rf_err_y = 0.367767327914;
    tmp_msg_0.rf_err_z = 0.977341390817;
    tmp_msg_0.rf_err_vx = 0.140452562726;
    tmp_msg_0.rf_err_vy = 0.915305294257;
    tmp_msg_0.rf_err_vz = 0.570596252659;
    tmp_msg_0.ss_x = 0.759939370966;
    tmp_msg_0.ss_y = 0.118287451643;
    tmp_msg_0.ss_z = 0.806732766213;
    tmp_msg_0.virt_err_x = 0.562638059443;
    tmp_msg_0.virt_err_y = 0.501973021574;
    tmp_msg_0.virt_err_z = 0.406094027549;
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
    msg.setTimeStamp(0.631186535219);
    msg.setSource(53181U);
    msg.setSourceEntity(107U);
    msg.setDestination(42221U);
    msg.setDestinationEntity(40U);
    msg.ax_cmd = 0.199720631991;
    msg.ay_cmd = 0.798237976696;
    msg.az_cmd = 0.689383010651;
    msg.ax_des = 0.24966782906;
    msg.ay_des = 0.324388122713;
    msg.az_des = 0.51343176055;
    msg.virt_err_x = 0.498818193703;
    msg.virt_err_y = 0.57961798184;
    msg.virt_err_z = 0.228914469828;
    msg.surf_fdbk_x = 0.983757568037;
    msg.surf_fdbk_y = 0.909487812439;
    msg.surf_fdbk_z = 0.663480552586;
    msg.surf_unkn_x = 0.705335279655;
    msg.surf_unkn_y = 0.657248252624;
    msg.surf_unkn_z = 0.997023578986;
    msg.ss_x = 0.234069552273;
    msg.ss_y = 0.999479316157;
    msg.ss_z = 0.448674205024;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NPXAJCNUSUUXRHZMRPPVRWYJWEAHJJTKFNEPLITVBHU");
    tmp_msg_0.dist = 0.86278867069;
    tmp_msg_0.err = 0.033982103513;
    tmp_msg_0.ctrl_imp = 0.175488268269;
    tmp_msg_0.rel_dir_x = 0.970794675533;
    tmp_msg_0.rel_dir_y = 0.282640993849;
    tmp_msg_0.rel_dir_z = 0.545558894199;
    tmp_msg_0.err_x = 0.933830735277;
    tmp_msg_0.err_y = 0.0946460221094;
    tmp_msg_0.err_z = 0.29778587033;
    tmp_msg_0.rf_err_x = 0.32742167571;
    tmp_msg_0.rf_err_y = 0.779435931045;
    tmp_msg_0.rf_err_z = 0.143404309954;
    tmp_msg_0.rf_err_vx = 0.605518964521;
    tmp_msg_0.rf_err_vy = 0.407569344466;
    tmp_msg_0.rf_err_vz = 0.827632018035;
    tmp_msg_0.ss_x = 0.952516658362;
    tmp_msg_0.ss_y = 0.880624043728;
    tmp_msg_0.ss_z = 0.39518907688;
    tmp_msg_0.virt_err_x = 0.914507052966;
    tmp_msg_0.virt_err_y = 0.995220153652;
    tmp_msg_0.virt_err_z = 0.00329038351235;
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
    msg.setTimeStamp(0.814399683027);
    msg.setSource(38465U);
    msg.setSourceEntity(247U);
    msg.setDestination(12668U);
    msg.setDestinationEntity(232U);
    msg.s_id.assign("WLUWOSOMRUCNDIHQUBTPCQNHEAXDQYYATBHJNBEEQCYEGSTAJMLDRHMTVISVVJUVCKEJMUNFASTRTHJBAXFPMYHAD");
    msg.dist = 0.126544609463;
    msg.err = 0.811232520441;
    msg.ctrl_imp = 0.277873602295;
    msg.rel_dir_x = 0.104081311312;
    msg.rel_dir_y = 0.887894009627;
    msg.rel_dir_z = 0.812557423498;
    msg.err_x = 0.253056628558;
    msg.err_y = 0.818440166935;
    msg.err_z = 0.539190160078;
    msg.rf_err_x = 0.744984556643;
    msg.rf_err_y = 0.0298232587928;
    msg.rf_err_z = 0.752230425314;
    msg.rf_err_vx = 0.711348307011;
    msg.rf_err_vy = 0.432664412891;
    msg.rf_err_vz = 0.0249744776007;
    msg.ss_x = 0.507067210408;
    msg.ss_y = 0.692759876221;
    msg.ss_z = 0.205919444047;
    msg.virt_err_x = 0.484011009064;
    msg.virt_err_y = 0.280012648123;
    msg.virt_err_z = 0.869051598733;

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
    msg.setTimeStamp(0.455898146876);
    msg.setSource(42539U);
    msg.setSourceEntity(171U);
    msg.setDestination(8003U);
    msg.setDestinationEntity(227U);
    msg.s_id.assign("NGSZQBXVCMGGJOKLVWQBDBEQXXWQDAHGUOLERITUSKYFVZALCLJBOREBUMVNNUPKDHRWL");
    msg.dist = 0.483086050632;
    msg.err = 0.75904315155;
    msg.ctrl_imp = 0.763488492787;
    msg.rel_dir_x = 0.839229397461;
    msg.rel_dir_y = 0.428564316707;
    msg.rel_dir_z = 0.447218280049;
    msg.err_x = 0.575917902159;
    msg.err_y = 0.741430946883;
    msg.err_z = 0.401649807374;
    msg.rf_err_x = 0.00240108381293;
    msg.rf_err_y = 0.615247902768;
    msg.rf_err_z = 0.895572353847;
    msg.rf_err_vx = 0.930754744961;
    msg.rf_err_vy = 0.22158392248;
    msg.rf_err_vz = 0.6964402305;
    msg.ss_x = 0.744460696536;
    msg.ss_y = 0.685267468861;
    msg.ss_z = 0.172009768187;
    msg.virt_err_x = 0.675354381151;
    msg.virt_err_y = 0.814974023083;
    msg.virt_err_z = 0.495228156149;

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
    msg.setTimeStamp(0.432602982345);
    msg.setSource(19187U);
    msg.setSourceEntity(41U);
    msg.setDestination(26076U);
    msg.setDestinationEntity(52U);
    msg.s_id.assign("EZZLCNMTXOJOWGCFFRHCBSFLLWBXLEERDZNPYZVHUPQPNNAAVZVENNVJXTHJYLCN");
    msg.dist = 0.0382710505016;
    msg.err = 0.581720824512;
    msg.ctrl_imp = 0.426787691212;
    msg.rel_dir_x = 0.872059046613;
    msg.rel_dir_y = 0.637653377709;
    msg.rel_dir_z = 0.338025736613;
    msg.err_x = 0.808649018658;
    msg.err_y = 0.85621898907;
    msg.err_z = 0.11877829505;
    msg.rf_err_x = 0.723929594501;
    msg.rf_err_y = 0.441533188798;
    msg.rf_err_z = 0.493816811193;
    msg.rf_err_vx = 0.505559097174;
    msg.rf_err_vy = 0.676997829889;
    msg.rf_err_vz = 0.794009109911;
    msg.ss_x = 0.802048844138;
    msg.ss_y = 0.531275741027;
    msg.ss_z = 0.505424601012;
    msg.virt_err_x = 0.215211498023;
    msg.virt_err_y = 0.357204372005;
    msg.virt_err_z = 0.936360922055;

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
    msg.setTimeStamp(0.868046962409);
    msg.setSource(39601U);
    msg.setSourceEntity(86U);
    msg.setDestination(49770U);
    msg.setDestinationEntity(188U);
    msg.timeout = 8815U;
    msg.rpm = 0.236780797831;
    msg.direction = 77U;
    msg.custom.assign("LRJJOOLVUCSBIEUTJKCEGUPIUNUDYISPRIUNCZBSTHLXTGPXADBKRGE");

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
    msg.setTimeStamp(0.399276952706);
    msg.setSource(59018U);
    msg.setSourceEntity(13U);
    msg.setDestination(52581U);
    msg.setDestinationEntity(186U);
    msg.timeout = 36540U;
    msg.rpm = 0.238784582893;
    msg.direction = 63U;
    msg.custom.assign("TBJXCXBFFZFZEMHIBNYZERHIPJHVRX");

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
    msg.setTimeStamp(0.239629843796);
    msg.setSource(17443U);
    msg.setSourceEntity(198U);
    msg.setDestination(53035U);
    msg.setDestinationEntity(211U);
    msg.timeout = 6273U;
    msg.rpm = 0.177336503326;
    msg.direction = 46U;
    msg.custom.assign("DILMOUJXLKCERKRMAHNLLISOZGSGAPHGQLWYTPBXCOSPCIIXSTLJWQCHUJDHGHYXCQXZVOOZYDJVBDBKGLPNUKVCVMXGOUDMZGDMNDIILFCSPFYCQQSEYPBEHNYFVYGGIMFNZVVAOIUPRAJJWYBZNLAWQMYXAJBJKSWYMVPDKEUROHQMRAHXKDNTESARUASZAFETWNQNUEIMQIFEZKGRE");

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
    msg.setTimeStamp(0.577850418211);
    msg.setSource(64200U);
    msg.setSourceEntity(227U);
    msg.setDestination(57652U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("KMAPGDARGVZLIHAPDSSQMZLKFMMIBZOLARHJCBGSUCMNNVRYYUBWRHKKDPZXMWXSGDLQABJOYHZSFNQ");
    msg.type = 78U;
    msg.op = 29U;
    msg.group_name.assign("OKTTFBUAVZNTIZUSJMPBVONSSGPNLWSFVILOKFKTXQAVWDAXCEVXIKSJGKMTAEDPZUNIIRWWYNQNOGHNGURFWCBATHXMEBBLWYUDZKFYHJRYLQYDBDBUXOIBPFPHRYSUQJIPOTFFADXZWCYYTWHRKJSFOALRIXUOVEXNZSHIPDQJCGCYPJVLUGXDMKMJQXAZKGDWENDOCPZSLMZANSEBRECKUC");
    msg.plan_id.assign("YJAIYLFEJIOKIUSJGABNATLTBLCMOBMKPYFTHVEXCWVEZMZCSLUTRVQUIFRIOTGRWWJZWNUVNQBQPVPHQUKKIKTAHODMZIMGMWLDUWLYAAZPSJESKGBILDSDGVJHQYLHHTPNWUDSZWEOKHICMCDNSFHRTOREDYNXYCFWDKSGBCXQMEZRAXGPNMGYCFPOGPECTFNBUMDBBLEHVAXCPNUKXDJXRULFVWXAEFKGQRVAZPYORIBOJXHFZSTZSJJXYQ");
    msg.description.assign("KZKOAEBDYLFUBDEBHKUWRGMZNVMWBWRCLUEARXTIYUNSNIWCZVEHDTEULGAJWADULUMUITWVXPXZNMFJDTMEYDATGSPJCPQVJFDXANNQQRGPSZTTOSUFIFSTCXXPLRLDKILOFCAFYQWINOVRIVFCJHSQCBEM");
    msg.reference_frame = 184U;
    msg.leader_bank_lim = 0.933102104006;
    msg.leader_speed_min = 0.477086542092;
    msg.leader_speed_max = 0.373530249172;
    msg.leader_alt_min = 0.545993014149;
    msg.leader_alt_max = 0.858050692944;
    msg.pos_sim_err_lim = 0.523173621312;
    msg.pos_sim_err_wrn = 0.446836747428;
    msg.pos_sim_err_timeout = 62704U;
    msg.converg_max = 0.466635073978;
    msg.converg_timeout = 61620U;
    msg.comms_timeout = 33063U;
    msg.turb_lim = 0.886907156332;
    msg.custom.assign("VOCXNWPTIZGOXBTHFHVBVDDNPRBNFWLVZSTSGMZPFCGWKXPFADLQJVCHDRZWSWYFBQIXDOKGUNEMNRFXYYBTDQNCEOTAVUCARNBHLXKFWITEDGLSNUZGOKDICGSPGGUXHYRWCAOJTUUETJVOVRUYLHNCXKKLUPFLLIBMKHCMQACZYKOEVDFUAPVIBPARYSQINRHSJMWEILDLPEWJZFMTJZRJHMQBBPEYKSQZSYOQMXOIHYQAMTA");

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
    msg.setTimeStamp(0.904133440601);
    msg.setSource(10739U);
    msg.setSourceEntity(81U);
    msg.setDestination(22845U);
    msg.setDestinationEntity(207U);
    msg.formation_name.assign("MSNXYAKQFOECZLWULAYWVJINACHNLIHXOYAZWYSHAZORHNPTOVFRQCNKQJMNZWDPJVVGBIKZPSLMIYORLAUXSPXRDVYDTRKBEWGHELZTEBOKREZWBXQWNGKIQVRGIMCMBBGNSLPJFZZWXUZEUAMGTJXQEPRIWGBQLFADYQJ");
    msg.type = 78U;
    msg.op = 99U;
    msg.group_name.assign("NXQARQIAXSAMLASELKMUYQCJHSUEMXKBUKIWCFFXVJ");
    msg.plan_id.assign("UBORLQQAUEZFXPFEZRCGYVVXPQJORRHWTHMFNCWPLCISUKSSCUGWKKMYHKDAVNFCYPX");
    msg.description.assign("ZMREVYYUBXCIVHWVISMKNTACCIMLCNKCRTANTOBKWJDVQYNTPCMLGAVSZABQBJUWZRSBUTVHKKWRPGGKLZDOEJ");
    msg.reference_frame = 23U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16258U;
    tmp_msg_0.off_x = 0.759490244518;
    tmp_msg_0.off_y = 0.454963349046;
    tmp_msg_0.off_z = 0.169959076256;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.619172286783;
    msg.leader_speed_min = 0.262788203449;
    msg.leader_speed_max = 0.502439937636;
    msg.leader_alt_min = 0.23826828136;
    msg.leader_alt_max = 0.357210750221;
    msg.pos_sim_err_lim = 0.563015725947;
    msg.pos_sim_err_wrn = 0.939536461659;
    msg.pos_sim_err_timeout = 49272U;
    msg.converg_max = 0.566711356709;
    msg.converg_timeout = 45425U;
    msg.comms_timeout = 35197U;
    msg.turb_lim = 0.527829232665;
    msg.custom.assign("HPVZXVPBRNGFIOTTMEKHZNJTIKCHZWKVPALQIWVNLMJYOOFDXHCOGENYQMICXGFUZYTYXBRZUEUBJWMJBXIRWVDZEASKAFCBOLQSM");

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
    msg.setTimeStamp(0.054436815606);
    msg.setSource(41177U);
    msg.setSourceEntity(103U);
    msg.setDestination(63117U);
    msg.setDestinationEntity(252U);
    msg.formation_name.assign("YXJWVMSNAEXPVYJNJGZTOWQDNCNZRDRFYXWZMVCJPTABCNEAURFHEATSTMIQZMHLLPILXOQHXKSXNBHSFWMJ");
    msg.type = 210U;
    msg.op = 176U;
    msg.group_name.assign("MWIFRZSUUABKEQEKTBCGPXVDFKRRRSACJWQJGWSHWTAXYNGZJYFSTZLATKXRDNHWILYGKCKYRVCXNNEFQQTOKISUTPBCRWPTIQTIBOXAFHAUOJNRSAYUQHCHXDXGD");
    msg.plan_id.assign("EAAIGYTCJZMNGVNYEMTQRVAWLXPKIPICMPLAQHXGCECJSIBBOSGSIQUDFGWOHZJXBMSKLBZRUFKCNZENSQAQHYBXXARFXLBKPHVTRCJWWWVF");
    msg.description.assign("UQDBNMDTYBZQCGIGZJOKZFARWFVAMCYRWEVYGRSHLEXNVTRKMQYNLYMBDDXVXIAQFIUFXTATGVPIWQLHTJPGSINHQTAKXMFGGOBXWEZBLKOBN");
    msg.reference_frame = 229U;
    msg.leader_bank_lim = 0.150004227709;
    msg.leader_speed_min = 0.702658120664;
    msg.leader_speed_max = 0.904830740973;
    msg.leader_alt_min = 0.056870748079;
    msg.leader_alt_max = 0.470026991529;
    msg.pos_sim_err_lim = 0.879059804533;
    msg.pos_sim_err_wrn = 0.0967980912087;
    msg.pos_sim_err_timeout = 28739U;
    msg.converg_max = 0.393396952505;
    msg.converg_timeout = 60536U;
    msg.comms_timeout = 33099U;
    msg.turb_lim = 0.408720643151;
    msg.custom.assign("NKXGHMGTJDROENAZPOYZNZIDKKVYTHOGJINPQAGAMPNFZDDTWUUJRTRUEYSRBBIUWBVSZCRWPYGYDSBTCEXVJDWEDDYHBYWHJVSTZRVPFUMHMEJILRIYFKXDTZOMBOZBJECSBRFUGDIHVYKOFQPNACGOVJMESZKFKXPCVCXHJSNHSTLKCOBFECAKUUOWPMLKLQULLCEWLUPNQIAXMN");

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
    msg.setTimeStamp(0.528917656932);
    msg.setSource(42529U);
    msg.setSourceEntity(28U);
    msg.setDestination(58279U);
    msg.setDestinationEntity(252U);
    msg.timeout = 20278U;
    msg.lat = 0.698580156276;
    msg.lon = 0.872352856223;
    msg.z = 0.928738050222;
    msg.z_units = 215U;
    msg.speed = 0.610775333921;
    msg.speed_units = 163U;
    msg.custom.assign("GABXRAFUCPKUJSTJEQOKJYPENULMVLCZSRNEUSHVCLPFBGTQLUMOGNYZMSRQMYGMNNWCCWTQDPUXHDSKYTZRDNXJBMYJWITBKVFIRWBANENOMLESBUGRMWCPAGWSZIVJ");

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
    msg.setTimeStamp(0.827544846127);
    msg.setSource(18315U);
    msg.setSourceEntity(177U);
    msg.setDestination(3656U);
    msg.setDestinationEntity(74U);
    msg.timeout = 62825U;
    msg.lat = 0.955025514545;
    msg.lon = 0.781223631166;
    msg.z = 0.310271991487;
    msg.z_units = 73U;
    msg.speed = 0.373258680855;
    msg.speed_units = 219U;
    msg.custom.assign("LJIWPTKYDDBIRFDEECRGLHKVHQIHZVNRBZVSTQUBCWAVMXQMQGRAJQLNSDRANCDVYHUOAOTWOMZCAYGOXMPWRCAZOHQBZGWFGSSWVMYGXGJBFNJSJLEPXJMEPUWBFAIJQTRTEHNKBVHJYAUKLPBQCNEGKMMOOFPPDESREWUUYIJEYGCKCFLAIOXNAJGVIXNVTIUWTLUHSVIEKXXFTZDNTYPDRURUFFXLYDKHQKZLLZSMYFCSBD");

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
    msg.setTimeStamp(0.0583539602328);
    msg.setSource(54608U);
    msg.setSourceEntity(170U);
    msg.setDestination(15645U);
    msg.setDestinationEntity(66U);
    msg.timeout = 23083U;
    msg.lat = 0.877256908367;
    msg.lon = 0.86751006922;
    msg.z = 0.575447499195;
    msg.z_units = 85U;
    msg.speed = 0.634370646811;
    msg.speed_units = 154U;
    msg.custom.assign("PERVRNHAAUVCIOKPVQCLQNINMEHWXVQKSDMZRCWTAMROHUDOBDPXWUUEFZVRAWTRXXLAKSFXNTHGFFKWQTWZTGYYZNMXNZUKRHGSFGBEDJKBHYJQWBQXJYJWJITSCILYBCBDJDFDVWHGKFTPLRVJIEOYAUIGCSGUNBOBOLZAJXLDJQAYIGZAGXQPFURVQFMEOSSIUIONTZEAZFZUCPMBLYEPBYNVIMMTROWPLJKDLDKSSSCKC");

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
    msg.setTimeStamp(0.914176744707);
    msg.setSource(18429U);
    msg.setSourceEntity(0U);
    msg.setDestination(58302U);
    msg.setDestinationEntity(231U);
    msg.timeout = 10076U;
    msg.lat = 0.561544273057;
    msg.lon = 0.46783117766;
    msg.z = 0.240470135523;
    msg.z_units = 175U;
    msg.speed = 0.189288775592;
    msg.speed_units = 210U;
    msg.custom.assign("PLWWKFHMMPJEI");

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
    msg.setTimeStamp(0.578577605503);
    msg.setSource(18698U);
    msg.setSourceEntity(234U);
    msg.setDestination(49099U);
    msg.setDestinationEntity(83U);
    msg.timeout = 57463U;
    msg.lat = 0.150874350903;
    msg.lon = 0.270378531208;
    msg.z = 0.95092765424;
    msg.z_units = 244U;
    msg.speed = 0.428352678289;
    msg.speed_units = 133U;
    msg.custom.assign("TNXRFBNYYSTQDIWBNLIEVWCVTSSFIDBSMQFYFGOIAMKLZTJNOHYOKCENZELRQYDBXKCPELWZMGUPZMXDIQHRTMSDSKPHOYLEOJJWGMIBVNZWFYDWARTJQPOPIPAHBPBAQCGREZBUAKMJGJFBHXFPQIDQLXCVZX");

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
    msg.setTimeStamp(0.926747799071);
    msg.setSource(22698U);
    msg.setSourceEntity(202U);
    msg.setDestination(54851U);
    msg.setDestinationEntity(191U);
    msg.timeout = 9043U;
    msg.lat = 0.97244999583;
    msg.lon = 0.606641471052;
    msg.z = 0.762808548666;
    msg.z_units = 156U;
    msg.speed = 0.669088869376;
    msg.speed_units = 196U;
    msg.custom.assign("UEEAADMFVCHMNCQUHTPJLGWJCDUONVMXDQZBZCOKOMYLNZBLFWIYHPMKKADAOFKBQOXSGVDBHENQQKLFLSICZYFCTWRHYXZXELYHNUVPDJ");

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
    msg.setTimeStamp(0.223835382292);
    msg.setSource(21395U);
    msg.setSourceEntity(135U);
    msg.setDestination(313U);
    msg.setDestinationEntity(44U);
    msg.arrival_time = 0.586535784703;
    msg.lat = 0.173048988744;
    msg.lon = 0.977010042595;
    msg.z = 0.28441473689;
    msg.z_units = 79U;
    msg.travel_z = 0.212288786536;
    msg.travel_z_units = 132U;
    msg.delayed = 87U;

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
    msg.setTimeStamp(0.302757645757);
    msg.setSource(4156U);
    msg.setSourceEntity(226U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(107U);
    msg.arrival_time = 0.0943587062447;
    msg.lat = 0.56707757055;
    msg.lon = 0.694545081384;
    msg.z = 0.594388731948;
    msg.z_units = 31U;
    msg.travel_z = 0.829103818414;
    msg.travel_z_units = 243U;
    msg.delayed = 32U;

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
    msg.setTimeStamp(0.153842601959);
    msg.setSource(26615U);
    msg.setSourceEntity(115U);
    msg.setDestination(22380U);
    msg.setDestinationEntity(200U);
    msg.arrival_time = 0.138644426938;
    msg.lat = 0.415294237505;
    msg.lon = 0.714882402022;
    msg.z = 0.888898284768;
    msg.z_units = 196U;
    msg.travel_z = 0.830008728497;
    msg.travel_z_units = 113U;
    msg.delayed = 42U;

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
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.806153747808);
    msg.setSource(20419U);
    msg.setSourceEntity(166U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.895357085436;
    msg.lon = 0.574270928178;
    msg.z = 0.403594951133;
    msg.z_units = 23U;
    msg.speed = 0.795922125648;
    msg.speed_units = 126U;
    msg.bearing = 0.344768749087;
    msg.cross_angle = 0.664121862046;
    msg.width = 0.734269219537;
    msg.length = 0.374136311265;
    msg.coff = 134U;
    msg.angaperture = 0.365645695774;
    msg.range = 64769U;
    msg.overlap = 50U;
    msg.flags = 202U;
    msg.custom.assign("MEJFJGAJRTAZWHSVUAESDQXVJYTYCYAWRCTQHHLXAIBMOJGSRPPWNPCKJUNZGRUPTYMCYKDMQZPZLNXEMMXEOPIUOKDPSYFRGUWXNIXROFJTDMTEWADMTCVCHWLZESUFZLGBWCVVKETLDEGOGBIFIOYFKZJCKPWUZEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.473986856553);
    msg.setSource(12384U);
    msg.setSourceEntity(222U);
    msg.setDestination(21017U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.93158116457;
    msg.lon = 0.402845678789;
    msg.z = 0.158653451765;
    msg.z_units = 229U;
    msg.speed = 0.956562939447;
    msg.speed_units = 47U;
    msg.bearing = 0.882668494024;
    msg.cross_angle = 0.453832628915;
    msg.width = 0.43253481287;
    msg.length = 0.17640582913;
    msg.coff = 92U;
    msg.angaperture = 0.294666669643;
    msg.range = 22048U;
    msg.overlap = 17U;
    msg.flags = 2U;
    msg.custom.assign("ECRLDIKGVIWNQZUVYSKBNBVLCHOEIZTFWHKKLZTHSGOEEEGSXTNSYRK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.165601486897);
    msg.setSource(21665U);
    msg.setSourceEntity(198U);
    msg.setDestination(3150U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.25875120259;
    msg.lon = 0.0454104661669;
    msg.z = 0.0499617930648;
    msg.z_units = 200U;
    msg.speed = 0.665130525115;
    msg.speed_units = 240U;
    msg.bearing = 0.600406225522;
    msg.cross_angle = 0.677718103707;
    msg.width = 0.895154401156;
    msg.length = 0.330779977055;
    msg.coff = 168U;
    msg.angaperture = 0.00324265518462;
    msg.range = 12517U;
    msg.overlap = 72U;
    msg.flags = 39U;
    msg.custom.assign("PBHOKUAEVQVQFTMLVUOLXVLHANNFDCTBYJMCYJOEZLZBAXRSXPJZUXBHMIGHGDYVTTGPJINKIJEMHVTURUIPDOWHMLNKWSSXUQDCZEMSWPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.0238766329492);
    msg.setSource(19951U);
    msg.setSourceEntity(245U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(89U);
    msg.timeout = 1067U;
    msg.lat = 0.753973705266;
    msg.lon = 0.818459609782;
    msg.z = 0.833084619647;
    msg.z_units = 164U;
    msg.speed = 0.803094806039;
    msg.speed_units = 205U;
    msg.syringe0 = 94U;
    msg.syringe1 = 252U;
    msg.syringe2 = 109U;
    msg.custom.assign("YBTRVYJUFPNWLGVBGMZRJWDTYZVAHVWPCGTRMRCITKALHZOFRYKSQCOATYOSENMJDAQUPLYGCVDTOUZOULXIHJTLUCJZFCPZUMZTSLKGDYGCBCIQCWKPTMJEXGWXOBOZEQJIQBMAQSFNJNOSSMDKSLRTSVXXEPPHGFYNVEWXFZEFKKHIIVLAIPUWNVXAWKFSXLHMQXIGAQKJHHAFYVDPPBEFXADN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.762453017489);
    msg.setSource(52768U);
    msg.setSourceEntity(82U);
    msg.setDestination(47852U);
    msg.setDestinationEntity(227U);
    msg.timeout = 11177U;
    msg.lat = 0.401315774639;
    msg.lon = 0.0625466156188;
    msg.z = 0.160168963242;
    msg.z_units = 254U;
    msg.speed = 0.256252028629;
    msg.speed_units = 64U;
    msg.syringe0 = 191U;
    msg.syringe1 = 225U;
    msg.syringe2 = 141U;
    msg.custom.assign("TDXQXEQCYUWMAGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.703067168807);
    msg.setSource(45534U);
    msg.setSourceEntity(16U);
    msg.setDestination(52937U);
    msg.setDestinationEntity(149U);
    msg.timeout = 2587U;
    msg.lat = 0.945690378393;
    msg.lon = 0.633056383516;
    msg.z = 0.0834676864804;
    msg.z_units = 224U;
    msg.speed = 0.860686699043;
    msg.speed_units = 104U;
    msg.syringe0 = 60U;
    msg.syringe1 = 173U;
    msg.syringe2 = 215U;
    msg.custom.assign("QCJFXSWENDOAPRPBONX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.979910102774);
    msg.setSource(24876U);
    msg.setSourceEntity(185U);
    msg.setDestination(44835U);
    msg.setDestinationEntity(228U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.77127673443);
    msg.setSource(39593U);
    msg.setSourceEntity(151U);
    msg.setDestination(65355U);
    msg.setDestinationEntity(218U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.551116597227);
    msg.setSource(6043U);
    msg.setSourceEntity(151U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.90513831185);
    msg.setSource(11567U);
    msg.setSourceEntity(12U);
    msg.setDestination(58948U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.136112764516;
    msg.lon = 0.0129158744515;
    msg.z = 0.263115878287;
    msg.z_units = 210U;
    msg.speed = 0.162742634963;
    msg.speed_units = 150U;
    msg.takeoff_pitch = 0.690822776652;
    msg.custom.assign("NZYVKIMIGGJSPSHWIKVOWLHKQBMQAOGKNHFRVVYCRMODEQGLYLHEHOTJZLRMCOYJNTYDWRMPCVFKKFXVJTSEIXFNWRSCDHMXBUQGPAKGTITEYVUPRTZDNXFYFZSAQUVQTDUOXXECCLRBCTOLKEFDBNGPLQOWDMFFSMCANLSPZENPNXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.582519059647);
    msg.setSource(55292U);
    msg.setSourceEntity(127U);
    msg.setDestination(44465U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.869180926246;
    msg.lon = 0.923612793432;
    msg.z = 0.0539974713929;
    msg.z_units = 115U;
    msg.speed = 0.719075365004;
    msg.speed_units = 84U;
    msg.takeoff_pitch = 0.180067018474;
    msg.custom.assign("XVHNAHICIOZODQPIHLLEYRYBDHUADEZPXJEPIYEQXSVOZLRSHBYALZQBVVNRPMAEKAWRVFCJWRNRPWLSXTKMPUFRGWMWIDWACQHXKJVFQKFQQFSUMUSPIGNPDJDTVDCZYFBTPHNVDNSBTUKEYINRJBZQOEDWWTCFGDCTSELJCCTFEAMSGZGUNTXYQOLXKEOKGCCXAORTGNWJABJUMAWRZVSGLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.619961271074);
    msg.setSource(23873U);
    msg.setSourceEntity(22U);
    msg.setDestination(14406U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.391094013348;
    msg.lon = 0.258378093673;
    msg.z = 0.286576949584;
    msg.z_units = 38U;
    msg.speed = 0.482040012289;
    msg.speed_units = 100U;
    msg.takeoff_pitch = 0.907174575653;
    msg.custom.assign("JAQGHIITVMBAYHLBXLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.852329550109);
    msg.setSource(40236U);
    msg.setSourceEntity(138U);
    msg.setDestination(18782U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.481024745088;
    msg.lon = 0.790151585136;
    msg.z = 0.795783156906;
    msg.z_units = 237U;
    msg.speed = 0.490975196569;
    msg.speed_units = 246U;
    msg.abort_z = 0.212616650802;
    msg.bearing = 0.367276872144;
    msg.glide_slope = 57U;
    msg.glide_slope_alt = 0.105799683848;
    msg.custom.assign("DXEKACZNRNJKAGYECUOESZJCDUDCIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.7752816323);
    msg.setSource(59468U);
    msg.setSourceEntity(101U);
    msg.setDestination(26424U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.0985763721347;
    msg.lon = 0.0708706349127;
    msg.z = 0.970121303079;
    msg.z_units = 179U;
    msg.speed = 0.187163843322;
    msg.speed_units = 122U;
    msg.abort_z = 0.419704783916;
    msg.bearing = 0.340062389406;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.230851469194;
    msg.custom.assign("XFBUCGGIIECJULMAUAHJPKNZMCDQOHPEUIIJEMHAOJOHKDPWBZVYSCXCOXBTQXGHKDNRVDKCOZUKFWJQRXETRPILGMZVKTSHFBVCIBDVYYVLSNBYFINTJOCEZRWIVTKQBBLSCLWNLGGNUHARAEOPXURESJPSZLJQVIQFWLRZQKAPFYTWMPAPUFSCWXDQBYNKJXXGRTEOFOWBVUVJNMYGPXINTDQYLORLSYHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.557091858157);
    msg.setSource(5463U);
    msg.setSourceEntity(154U);
    msg.setDestination(36300U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.118193036846;
    msg.lon = 0.981054675143;
    msg.z = 0.912774116902;
    msg.z_units = 80U;
    msg.speed = 0.221429644447;
    msg.speed_units = 118U;
    msg.abort_z = 0.888701509167;
    msg.bearing = 0.785016232379;
    msg.glide_slope = 208U;
    msg.glide_slope_alt = 0.706414650973;
    msg.custom.assign("WKLHQKRQHQRZZMCHPAAJGKRIGDPYNVSCTYBLAJADODNUYOVCLKKSWSMAITYNSCXJPGCTUDKBQJEMJREDEGWXYXVICASKLISTNVPMPVEYPGUFHZDEXXXBZXAHBNNFHPIYRKQBMEGOIFTQZXGRLLSMXWROUJIMUMMSJWBFQLZRLDWZBECBGJVQNLHFWJUFUVOTEFPIPGSTFFRBUATN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.633615929766);
    msg.setSource(4740U);
    msg.setSourceEntity(224U);
    msg.setDestination(22662U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.938903607699;
    msg.lon = 0.716573176672;
    msg.speed = 0.236535144822;
    msg.speed_units = 79U;
    msg.limits = 56U;
    msg.max_depth = 0.393880072874;
    msg.min_alt = 0.151022727116;
    msg.time_limit = 0.855136916058;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.264813685031;
    tmp_msg_0.lon = 0.138829056476;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PJLPUBGBQBQNWLBSDAICBRGSXWIWKJBCXFPYIIUUHANDEZZELOPTDPPHQUDVKBMLEKVQVDAQYTSTOZMYEAMUFEOVRDMSTYGGLZFMQKDHNCVRAZLAORDEFOZCJGIGWVWTJFRBUGSZEJUNLRSHSFGPWIAZXOWUKVCXFLYSPXMFTNCDREVHZGJVJ");
    msg.custom.assign("AEDWCJSGUOIOZDBXKCYBSRYLFYKJZLYZVSYMEOUAFVAARWCWDHXWGRMTQUNNNCXZFHQRLIEOEPYSYMHOBJULPABFLGUYGTKCEUNSMTHTAVXZWGVVTNMPSHJHRUFZTNIIBNBQSYICPQJVMFIBGHMUFZQSKOZGIOLCBOUWKRWAQNJHIKGGXPLWTMDXEQQXPODGPRJZXFJMVCSBLVDJAJVDKFAPTKXFRBREDXVDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.0956204604259);
    msg.setSource(37872U);
    msg.setSourceEntity(32U);
    msg.setDestination(62610U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.250458151608;
    msg.lon = 0.408913314656;
    msg.speed = 0.50562342795;
    msg.speed_units = 198U;
    msg.limits = 231U;
    msg.max_depth = 0.876587739516;
    msg.min_alt = 0.632216776434;
    msg.time_limit = 0.5315972799;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.284219821483;
    tmp_msg_0.lon = 0.103166296769;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TIZCPRKCPJCLQBRFCSPFBVQDVVUBDHFWPUTGAQMIHVXLYWGWSNJIYZJWEJUJMSOECMEJNVNCWSHZHZGFMFEPSBOHUOYHBTASSXYAZACOKWLJTMIOZCPJREVAUP");
    msg.custom.assign("ITLJMMGWDWKOOQEXFMTZMVCEHXZXYXSVOLHOZRZKXZXTWUSPDESXXNKEHSUIIYJCCFROPYOJAFTSRJJZJGCIZPDLGSBKHQCYPTBNKCFLPQLBWSCRGLAJNQIFVMRGIPAHUYTEYNNMUFEDWBIAEPGVKAOZVYUUNVPWBQEDMTJRWDNELORKPQFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.259997859569);
    msg.setSource(62753U);
    msg.setSourceEntity(80U);
    msg.setDestination(2366U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.446385809375;
    msg.lon = 0.999958305825;
    msg.speed = 0.624075098081;
    msg.speed_units = 146U;
    msg.limits = 171U;
    msg.max_depth = 0.0254000602394;
    msg.min_alt = 0.726038625876;
    msg.time_limit = 0.67931344985;
    msg.controller.assign("YZXPWMDOFOMAPQPBHUDCBOEYKDEPOCWTGJEFNASLNKSTXAKWMLORSYSRHPYVIXKRKDTZNERMYGUZRBOMCZBQJWFEIBJUIUHGJEWAKXWOZCHYKSOJDTZENVVYDSUTPZCPNMUMLACGVORGXQASFUJFTQGVRSFHT");
    msg.custom.assign("IOHGCZGVKETZYTIPTZNBFIJAVVLNXSNZHRWMNGMXJHBOFOWYPIVIDSZFVKJNXSCVBEUFXEEKBKSEQWQTHONBFNIQQSNRCOQLSQPLECXLAKIQRPGBSCUHUWVWDIJALDHCOWYYYCRXEDJGQTSPMMHDSXZRPTAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.296417499241);
    msg.setSource(36477U);
    msg.setSourceEntity(1U);
    msg.setDestination(19132U);
    msg.setDestinationEntity(143U);
    msg.target.assign("FKIWXJAVBRQSTCIOESTDRDPYRGJPCNATQPIVHZTZTBLDVJOXFUOSTUUGLNWOALGOOFVELCZESNAYFXORYUKYLHBKUGRIUNJYDCXEEHFHAMRPGEWHCW");
    msg.max_speed = 0.0721531120987;
    msg.speed_units = 3U;
    msg.lat = 0.619749514974;
    msg.lon = 0.139980386446;
    msg.z = 0.786014292395;
    msg.z_units = 253U;
    msg.custom.assign("EYTTRSCURTDURKWMMBRCQBKAMCWVKRLIKZUNYFDJRYSOHRCHATCVSMIPGLCPESDPBPOAMZZYIVZNDIEIEQOMINEQXOXXMBUJHLHABFKSQLTWKKUFODZXYJMYGEBUVDSZDWWRURNXGYZEQFKHMKAUCPJBTYWHXAEDVPOBXJHDUSGANQOZXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.296432660551);
    msg.setSource(57969U);
    msg.setSourceEntity(230U);
    msg.setDestination(56541U);
    msg.setDestinationEntity(215U);
    msg.target.assign("XDCRDUJKFYFPYEIZKINZLXYNDOSQGUELDBWTGBWVXOPDTJCFXOUCPCVKXEJQTZJUGXHPWSLAISSSNFTWBBMVKJGHOIKETPMQHWQEKCUOAUAWAKZPFARUQHGBKAYTCNNIRYQNMTAJYVLMZKDDIHBTPLF");
    msg.max_speed = 0.122606164685;
    msg.speed_units = 174U;
    msg.lat = 0.630325364459;
    msg.lon = 0.817679177401;
    msg.z = 0.662046188572;
    msg.z_units = 163U;
    msg.custom.assign("QRLILJETOSBYFETLVHXQUFNSWWVWYIJBCLRGKPZAMINSZCESJGTWLZVPFPEZRKADBXAWXZAWKUIQRZYTPMXRFKHENHBCXGSUTFIVZWDRSNBYCVBJVOXNGLUTPPJMQKYYUQJYKIMWDFMFZADNQJDIYMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.813184866105);
    msg.setSource(46138U);
    msg.setSourceEntity(237U);
    msg.setDestination(23575U);
    msg.setDestinationEntity(121U);
    msg.target.assign("WUPCXSUKSYEEWAWFTCATZOWCLGTZBNDPYTIKZQSYCOTPRPUJAYVDVGYPFFEKDMSADBRATXWHIRDGQQKXBNZXSGJFUDDDHEBQVZKVBNPQRJXPIPBBLFNZVMEKQMVGMISMRHOXZRNAJXPUUYNLSQHTUUEDKNKLMSMFZWLYJQOIIGYHTOJFETYFCBXVQZLOEDTLNRMJURLSAJNCAGWHCIRMAISCJNVFWULCVOXPJGFBBOOKREGWHHWQXEMZOVHLKY");
    msg.max_speed = 0.440580371078;
    msg.speed_units = 69U;
    msg.lat = 0.120141611374;
    msg.lon = 0.902994003959;
    msg.z = 0.91688109873;
    msg.z_units = 78U;
    msg.custom.assign("ZWUXLZERYTFRLDVNWDPJGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.318092510085);
    msg.setSource(41676U);
    msg.setSourceEntity(90U);
    msg.setDestination(28684U);
    msg.setDestinationEntity(121U);
    msg.timeout = 8081U;
    msg.lat = 0.737760512918;
    msg.lon = 0.0182502080311;
    msg.speed = 0.809069670373;
    msg.speed_units = 175U;
    msg.custom.assign("GVFQIYSLQVNPGWLPQFSRSLTXIARJSQPBVNZZBTUCIWGYINDDADZDMRIULLYSJREPBYWCPYQOEJYXEAOBRITVXWSECVPONFAUAPYKFMMCQOIJZUWHXADPLFEEREQGTAYLITHXBMZHHCRZQPKPYSICBKNVNJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.342239480717);
    msg.setSource(49180U);
    msg.setSourceEntity(82U);
    msg.setDestination(40010U);
    msg.setDestinationEntity(241U);
    msg.timeout = 9263U;
    msg.lat = 0.178256843316;
    msg.lon = 0.233228263713;
    msg.speed = 0.882440659467;
    msg.speed_units = 50U;
    msg.custom.assign("KILGALMUUCQKRZLLMPAEDNPBYHBAUNBJDJXRKYSFCZRQFWHVIVKEZKOWPFBTUTJYVIEEZYTWIHSLZCDGJBNBBSNWVFMUKKZTHRELWWMEAXAAHWPVXEZCTOXZKTSFWPDIUOCSAGSFBMQVMMGFJWSQASUMUFGUDERJTXYSTXYYOKLCAXXNNYDOHXPZHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.38740710751);
    msg.setSource(40246U);
    msg.setSourceEntity(34U);
    msg.setDestination(12072U);
    msg.setDestinationEntity(135U);
    msg.timeout = 58289U;
    msg.lat = 0.292197758349;
    msg.lon = 0.400504133751;
    msg.speed = 0.0868540449928;
    msg.speed_units = 93U;
    msg.custom.assign("WYUILGNHRLYEVZPQTTOKFDVRUBHRAXQKWDQCCXZDBWGJRYSINVWDLTXODARBSQNHSMFFPTEKWBVJOPOVBEWBYGXRTCMXRUIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.492229893995);
    msg.setSource(18770U);
    msg.setSourceEntity(163U);
    msg.setDestination(13338U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.466515590593;
    msg.lon = 0.807905804685;
    msg.z = 0.201044201843;
    msg.z_units = 153U;
    msg.radius = 0.0971088010382;
    msg.duration = 14760U;
    msg.speed = 0.597022532384;
    msg.speed_units = 172U;
    msg.popup_period = 62668U;
    msg.popup_duration = 49876U;
    msg.flags = 127U;
    msg.custom.assign("TCKBIDLBXFDMJLFAZGKAOXFNYZRZJTVMUOZEHYJRAVSISECRBONVHNAYGDHDKVZPNRCVKXORYUCWPUQLLUXZWAHUTJBTHMWFLIWEXPDDZXKBYCFIYUFKBCRIOQOVEYKPGGQTJXKNKRJESMUIXPHIVABNCFJSTQLTEVMQASYNTLLVOSMDDRWHFZMLPCOLSUGAIIJSHBWNEMGAZHSGIYDQFUJYGBASVWOEPBKPGQQQHNMJWTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.873155495054);
    msg.setSource(28474U);
    msg.setSourceEntity(127U);
    msg.setDestination(3281U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.405914260951;
    msg.lon = 0.203747362717;
    msg.z = 0.556911842584;
    msg.z_units = 227U;
    msg.radius = 0.739444303552;
    msg.duration = 34433U;
    msg.speed = 0.140882333388;
    msg.speed_units = 3U;
    msg.popup_period = 16539U;
    msg.popup_duration = 47874U;
    msg.flags = 128U;
    msg.custom.assign("BHECIQAZSXHOFMMVMFXWUDAKRVCXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.426431422246);
    msg.setSource(49103U);
    msg.setSourceEntity(212U);
    msg.setDestination(12046U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.515385014747;
    msg.lon = 0.95480171734;
    msg.z = 0.917684602387;
    msg.z_units = 76U;
    msg.radius = 0.614924455655;
    msg.duration = 25006U;
    msg.speed = 0.20566237336;
    msg.speed_units = 26U;
    msg.popup_period = 4465U;
    msg.popup_duration = 9460U;
    msg.flags = 184U;
    msg.custom.assign("BTSLCBCZWALURUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
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
    msg.setTimeStamp(0.972311972638);
    msg.setSource(23055U);
    msg.setSourceEntity(218U);
    msg.setDestination(7620U);
    msg.setDestinationEntity(164U);
    msg.op_mode = 148U;
    msg.error_count = 99U;
    msg.error_ents.assign("NLJKVEMCPHWBIYHGZQTGZQHZYYJUHFMXFWRWHYPAVJIEQNOEIRNGTQTFHQFXDRTUMBDTOMOVCXAVWVEDVQFELPIGHGBSLVXZCZUBLA");
    msg.maneuver_type = 21082U;
    msg.maneuver_stime = 0.129877874077;
    msg.maneuver_eta = 55064U;
    msg.control_loops = 1401269402U;
    msg.flags = 208U;
    msg.last_error.assign("EWMWDJGHTZMLQPAMFDGSKEFIVOYD");
    msg.last_error_time = 0.192348723207;

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
    msg.setTimeStamp(0.777727470879);
    msg.setSource(43572U);
    msg.setSourceEntity(67U);
    msg.setDestination(11951U);
    msg.setDestinationEntity(64U);
    msg.op_mode = 178U;
    msg.error_count = 55U;
    msg.error_ents.assign("BFTTINVMFXIWVEMCUOUPYFQMAZZRHZNRWYNLFKLGUXFRZOMCDGJPEQSUYUNBVXHDLOSNTGZQVCHBIKGVGLYRXHWDIQKMYVAGKJOGNLACZPQGXSHSZHAGJWRTVWIOBH");
    msg.maneuver_type = 34748U;
    msg.maneuver_stime = 0.592503613583;
    msg.maneuver_eta = 53614U;
    msg.control_loops = 516142667U;
    msg.flags = 62U;
    msg.last_error.assign("XIHRCWLKWLNPYCWJNRGDFBEQKILOFXMRJPJFBILQGBDZVVBZIOMTDSXYTNSUUHVQJACTYGNUZWHEQEHKURBKAGGKMAZJALHAHJFVNSTXXLGCTAGHBHTPYGWBJIKQUULRSDCSEYNSQZNKCUYROSLJUCMNDPOIRMZBQZJSQO");
    msg.last_error_time = 0.459008405886;

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
    msg.setTimeStamp(0.356158330543);
    msg.setSource(48044U);
    msg.setSourceEntity(153U);
    msg.setDestination(42412U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 17U;
    msg.error_count = 82U;
    msg.error_ents.assign("BPOFENLZHCSTMEYITRYIZHRDQUVJGGKAEZMOXCBNGSYUALHFNXMEAELHOMUYXSOWRDOVHAFXKLXQJIBFCIDIXOYHVPTHYTCVOBPHPTMHDWDLZJTZUFQPUQKSSVJOASUDUT");
    msg.maneuver_type = 35740U;
    msg.maneuver_stime = 0.764815731665;
    msg.maneuver_eta = 3119U;
    msg.control_loops = 1117364405U;
    msg.flags = 144U;
    msg.last_error.assign("MIMQBFWOLTFPMMPRTSHXUUCJJGKOCCMOCLGEZ");
    msg.last_error_time = 0.918168920945;

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
    msg.setTimeStamp(0.618366924229);
    msg.setSource(41556U);
    msg.setSourceEntity(78U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(194U);
    msg.type = 233U;
    msg.request_id = 34336U;
    msg.command = 39U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 21885U;
    tmp_msg_0.flags = 105U;
    tmp_msg_0.lat = 0.0733118410397;
    tmp_msg_0.lon = 0.379609531062;
    tmp_msg_0.start_z = 0.702719304515;
    tmp_msg_0.start_z_units = 180U;
    tmp_msg_0.end_z = 0.184931739057;
    tmp_msg_0.end_z_units = 219U;
    tmp_msg_0.radius = 0.481656538983;
    tmp_msg_0.speed = 0.694575195334;
    tmp_msg_0.speed_units = 110U;
    tmp_msg_0.custom.assign("SUXEHOQFUWKAEDYRHBJWUVVCIBYPHXQGZSURTBGDGDIMHFQIKBRDZZHOQSIBTCVOMNVAGLXTNLOYRCYYPGIJSJKDFBWPQJLHWOACAIJMYXFSPAWCNPUFXMTTPOMNGVLFRIDSLZEXFLJPDEVTZIVXNASJEXOVZWJBRQFZNNZCXSFQGKRQOGAJDZITMGPDYMKLLKLJURQWQEWITOWSZCRPMEHYUHEDBVCTA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56472U;
    msg.info.assign("KZPTIMEKSXXEUKRYQPJSUOPNMBTTVDWAZHABVQQNVGXOTRXSLGBHMQTRBXSCAJUDHOWWGRFNCXBYHKYF");

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
    msg.setTimeStamp(0.407144181343);
    msg.setSource(44197U);
    msg.setSourceEntity(33U);
    msg.setDestination(20206U);
    msg.setDestinationEntity(120U);
    msg.type = 238U;
    msg.request_id = 55911U;
    msg.command = 124U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 51568U;
    tmp_msg_0.lat = 0.838330533092;
    tmp_msg_0.lon = 0.703085855516;
    tmp_msg_0.z = 0.107541434409;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.speed = 0.341187841855;
    tmp_msg_0.speed_units = 212U;
    tmp_msg_0.bearing = 0.938422842843;
    tmp_msg_0.cross_angle = 0.434214956037;
    tmp_msg_0.width = 0.461914209896;
    tmp_msg_0.length = 0.735673481072;
    tmp_msg_0.hstep = 0.562671968054;
    tmp_msg_0.coff = 168U;
    tmp_msg_0.alternation = 167U;
    tmp_msg_0.flags = 191U;
    tmp_msg_0.custom.assign("ZGWCOEBZQDFIJCOATBJITRKKPHNNHYNDZBUELFZVQTNROVXDXPYNPXVLGYVWWOOPQDHPOTOCRWHERAQSBGMRXRITBLVYOCGSJKKJWIEPADNDMPEEQNSYDFFEHVAYKUIFAWZXGMWZGT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7636U;
    msg.info.assign("FMHBDODFGLLIDVUKGNHBGDIEXPYHDAQZQQVRPKLYBNSKOLJOMLSWFTKGGTPCASVBSYCXRGTKVJJWCWVCLUDMGUFAEESJJRECMRXJBHYJOBYORISLDMANARDPKVPCWPBIZ");

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
    msg.setTimeStamp(0.480242298184);
    msg.setSource(4952U);
    msg.setSourceEntity(244U);
    msg.setDestination(54737U);
    msg.setDestinationEntity(232U);
    msg.type = 191U;
    msg.request_id = 56567U;
    msg.command = 223U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 58367U;
    tmp_msg_0.lat = 0.0829688391538;
    tmp_msg_0.lon = 0.220371704541;
    tmp_msg_0.speed = 0.0711376278314;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.custom.assign("ZRVZYAXNWXSOOXNTXYSGTBDDJOIPDIRKLSIEWUPMLRPLMHJZNGSWVMZSQJWBAVHVMOFCWGTZSKYCFDUVSBJRIKGUGJYYNFIKVPXTDUWGZEYMTNQFPADKGCLFCJKFQAVYUCOVQUEXUPEDXTCUIWPQEHFIKOJEWRBQAMWHSRNABXQLGICSJXBJMXZKYMEHRZTIACLEFTUFQLMLANK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48921U;
    msg.info.assign("JLWDUCAYKNONOYSCDWKDAQQGCCLEBLZEWTZPGTPNQMCPZQIQXMUFDKPSVOBVULGVBYVHNNHIWBAKIOARTSVRBOQPWTXISCHSMMVASAJGQATIJXELFFGTMKUKCNQAJOFSTFSILENGXEBQZJOTEATHWFRRNWZIMKDUYEIYUQBZZLBJFKHOERFXLMWRJYLBGDSHXECLWGHUUYPCNHDPZGHSDXBYJJDNRCMOJ");

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
    msg.setTimeStamp(0.31933860875);
    msg.setSource(43757U);
    msg.setSourceEntity(136U);
    msg.setDestination(28054U);
    msg.setDestinationEntity(123U);
    msg.command = 91U;
    msg.entities.assign("ZNDWBZNYYWZBCVZMUKXRJFQVAKBVIHGTCLFEWAEGDPPOQRLVMOVWTOTXSZJCPOGANHBBLXFTNMDKHDNZAWYZGBLVRAWZQTXKITTLHHNKYSFRCLFKNYTDPQHBNBREEJPYAWXPCUMNDSOIEOCILGQRUMYIHYLIHNIDEFYEOIGUMMBIJW");

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
    msg.setTimeStamp(0.338966720704);
    msg.setSource(54382U);
    msg.setSourceEntity(217U);
    msg.setDestination(11596U);
    msg.setDestinationEntity(27U);
    msg.command = 10U;
    msg.entities.assign("FTFWODRWVWBELUVIDIZGMZKJDVAJUSVZCJBVRAXIROLMSGLBXGYRNJTUQQDXNGKPOKTKGVJHCCVINHLVPPUBWXDXBTAYTCNECKTYTAHOFZWLUOYYWNGTDHZRQFFKXOJSAOJIUPIYQWBTDRYXIZJQFVIECRMSXYQLYQKCBDBHGSKMPUPHASNCCCHNJOPNSFHQZPSSDELNMSGAJUMOFTKVIFBRMEWIKEAZMMPRRNELQABGXZAXPZMFGY");

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
    msg.setTimeStamp(0.14463794146);
    msg.setSource(17890U);
    msg.setSourceEntity(117U);
    msg.setDestination(46759U);
    msg.setDestinationEntity(45U);
    msg.command = 176U;
    msg.entities.assign("RMXATUAIFROIWGEOACCUWCCXDBHXFPLHCKHUMLCMOYLEPVTIHSUGXA");

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
    msg.setTimeStamp(0.989932023205);
    msg.setSource(24613U);
    msg.setSourceEntity(169U);
    msg.setDestination(56180U);
    msg.setDestinationEntity(216U);
    msg.mcount = 160U;
    msg.mnames.assign("LBEZAACQISJEHNBOWBZYMJDNQJGFBLYUXGEYWXMZGTLETGPFYVWCIRSMROARISSBFYTUIUQAZJMHEIQWQAEJWLPFGSDQBZCRBVJVORKLDSHTODIWCORFXCUFGCELHHHVBRVMIKKD");
    msg.ecount = 218U;
    msg.enames.assign("JPZZDMHXDDJBHPVIVJAUOJJHYICBEDXFSXPNBLWPEFKDQSCQEOTLRWGNRFKIJWNNSESVSQAGSFRUMNCMARZYKUQIXTDKFJXAXEZUADMVVXCWMOJAGFRROWVGQJB");
    msg.ccount = 1U;
    msg.cnames.assign("RMMZUSZLQJDSEVDJPWLIPBKUJIVTOIQWVCDNOFLWXAYFNXZSTAMEIQRHVXQFQMUFPYDEJAJKPGVNZZGENJDKECWTYAXHOJKABNBCLHQSTRATNIJBGGVGHGIVGDMQICBTHHOPYVSPMCWGHBYHKYKSOYHOKEDZBXSPIXGFDXOXRZNILKDQUQKUNPWXRQCAMNIE");
    msg.last_error.assign("SDSGZYJTSOFZLGUPEYODTXZQEGQMZVRAZPBKFWQIPNSQWUKIVMRJUWDVDGOXHKCKLEBCLESRJICZPVDILPIXREMNZHOOAPKLVOMHUIFDCGIYOCBNLFJUZGYJAIFRAKTJIJKVEMXMGUQJHVACWTBFFKDCQHREYBXUTPWMNXXLFEHTLWQN");
    msg.last_error_time = 0.0342824175062;

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
    msg.setTimeStamp(0.675379592504);
    msg.setSource(42269U);
    msg.setSourceEntity(115U);
    msg.setDestination(11319U);
    msg.setDestinationEntity(83U);
    msg.mcount = 231U;
    msg.mnames.assign("WPUIOIQPEVNYTZGNRIJNCXBUAISLQFHUFDBGMMJIXQRFQNSVFCVVKBAPXEJKYQLEWIDNSLHVHMFUAITWPRUOYNKDBZBEMXRTFRWHLQBPLMBASQGHZFSDYPHHLFEIQCMTCKNCGSDYZRNWZKJXLLTEOAYUTBICGSTJXAOAXVYXVZEYWM");
    msg.ecount = 22U;
    msg.enames.assign("TPIKDSRKPLXBJQQWUQDOPQXJNNJGAZMAZMSXYPUSBQDYOZPYGNNGBULAK");
    msg.ccount = 70U;
    msg.cnames.assign("ANDBVQRAOOWNCRLIYURBHIDZISLHYCJFRVFYDQUEWCQQGETUDGBGJGDMXEFIZXMMKFLVPZUIRAFKOLHHGHRBKETDOXAFIBBHLFSSTZGRUMEDYCKBBYKNVWCXCIKTHSEUQRCCENPQOZHMUXWHXMDRVNQGZAPWFMSOSWHYCSPJZUPPIGZSXPTJASMLLOZEVUJQLINCWVWNAKQRPOSJAQNTVJLGDTDMGPEAOBXIMKJTVZNXFYJLO");
    msg.last_error.assign("NMWOCZZRYOTUURKUYXPQVECMUBWGYGDLEBNJNCIJYIPATFQAZPVSHILUZCITSJRMXEYEJBNJIFVVXJHFTCHLWYSNDJTMLRBPTGFOOGSSPZGWQLBAXOHSFKTPLLGXIVFZNHYESCEZKQGAKVHTPCWQKQDSODCRBZDNQRRCHDAAGAMUWRVIKDEZHAIFZIRBPJNDIMCFXJKWVTDMOEFYQXBGAJKOSBSNDOMUHUXKLMWBLVHWVLMANEEFU");
    msg.last_error_time = 0.506309318802;

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
    msg.setTimeStamp(0.301961349272);
    msg.setSource(4609U);
    msg.setSourceEntity(201U);
    msg.setDestination(59461U);
    msg.setDestinationEntity(27U);
    msg.mcount = 125U;
    msg.mnames.assign("CBXZWCUTQGDRMUINQGPSTXOXZRULNATABVBDHTLJJHKQWXGSEHDPQDNWBNETELFVWQAXVCDDJGKPGTYKJYUQCIJUGYHPERKVVIOMYOCHWNRLUSJKSAZALGMIXWKSTASPCBGSRVFIBMIFRWXBFHO");
    msg.ecount = 103U;
    msg.enames.assign("KUDCGWIRQRDMOBWYPAMODULNIGSNYJMXSZZWDFCTQZUGSRRCOLEBENWSMXBRCSAOXJWFJEEOQWPRFKNMPDEVKXVBJOZNWFA");
    msg.ccount = 29U;
    msg.cnames.assign("IGCKZMSFVSIVEZLNUNYBNTQYQKZQGFFGRRCJRQVXTKFIRBILWUPIUZSXMFOBBNYZMUYFHTBNUZEXARHWSOHAXVKQCTBEWEHKYJVWTAWNEEHUMALPMPRDXZRELVAADCSYCBDDGITCPOJUZJQAUJWLHWEIGKXLXWMHPFURSGAYFWDSNO");
    msg.last_error.assign("FZJXFYVPDZICRXEGREWADTHOX");
    msg.last_error_time = 0.525002147266;

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
    msg.setTimeStamp(0.599513254421);
    msg.setSource(60132U);
    msg.setSourceEntity(61U);
    msg.setDestination(52275U);
    msg.setDestinationEntity(69U);
    msg.mask = 240U;
    msg.max_depth = 0.766522566531;
    msg.min_altitude = 0.371490671537;
    msg.max_altitude = 0.0932100840847;
    msg.min_speed = 0.815829141656;
    msg.max_speed = 0.0637603398439;
    msg.max_vrate = 0.344641814864;
    msg.lat = 0.968195695857;
    msg.lon = 0.334900476848;
    msg.orientation = 0.863065385094;
    msg.width = 0.616889978769;
    msg.length = 0.25268267265;

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
    msg.setTimeStamp(0.734986627623);
    msg.setSource(2242U);
    msg.setSourceEntity(239U);
    msg.setDestination(8305U);
    msg.setDestinationEntity(27U);
    msg.mask = 105U;
    msg.max_depth = 0.887622738102;
    msg.min_altitude = 0.22417143397;
    msg.max_altitude = 0.00471707990915;
    msg.min_speed = 0.300095672883;
    msg.max_speed = 0.706087592315;
    msg.max_vrate = 0.446635291545;
    msg.lat = 0.1016798049;
    msg.lon = 0.537118397424;
    msg.orientation = 0.563985183772;
    msg.width = 0.731341893568;
    msg.length = 0.0864491954318;

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
    msg.setTimeStamp(0.961386474937);
    msg.setSource(30966U);
    msg.setSourceEntity(243U);
    msg.setDestination(47441U);
    msg.setDestinationEntity(1U);
    msg.mask = 26U;
    msg.max_depth = 0.990688191579;
    msg.min_altitude = 0.545800482959;
    msg.max_altitude = 0.422616179573;
    msg.min_speed = 0.529901111353;
    msg.max_speed = 0.928368327745;
    msg.max_vrate = 0.974422386421;
    msg.lat = 0.351802356926;
    msg.lon = 0.0682620360563;
    msg.orientation = 0.587749606733;
    msg.width = 0.850124585705;
    msg.length = 0.83352392662;

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
    msg.setTimeStamp(0.212918905085);
    msg.setSource(44709U);
    msg.setSourceEntity(123U);
    msg.setDestination(7400U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.920172766507);
    msg.setSource(20880U);
    msg.setSourceEntity(86U);
    msg.setDestination(57852U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.606017498746);
    msg.setSource(23354U);
    msg.setSourceEntity(84U);
    msg.setDestination(43659U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.718530469189);
    msg.setSource(58069U);
    msg.setSourceEntity(124U);
    msg.setDestination(8077U);
    msg.setDestinationEntity(212U);
    msg.duration = 51383U;

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
    msg.setTimeStamp(0.645052506351);
    msg.setSource(55814U);
    msg.setSourceEntity(239U);
    msg.setDestination(9380U);
    msg.setDestinationEntity(53U);
    msg.duration = 58387U;

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
    msg.setTimeStamp(0.869562931833);
    msg.setSource(19584U);
    msg.setSourceEntity(7U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(33U);
    msg.duration = 46131U;

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
    msg.setTimeStamp(0.137968698907);
    msg.setSource(20844U);
    msg.setSourceEntity(107U);
    msg.setDestination(6527U);
    msg.setDestinationEntity(207U);
    msg.enable = 219U;
    msg.mask = 3583549512U;
    msg.scope_ref = 4170579694U;

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
    msg.setTimeStamp(0.733428880547);
    msg.setSource(35755U);
    msg.setSourceEntity(72U);
    msg.setDestination(7052U);
    msg.setDestinationEntity(88U);
    msg.enable = 230U;
    msg.mask = 3881992183U;
    msg.scope_ref = 1769633423U;

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
    msg.setTimeStamp(0.171292902234);
    msg.setSource(60071U);
    msg.setSourceEntity(208U);
    msg.setDestination(64665U);
    msg.setDestinationEntity(150U);
    msg.enable = 148U;
    msg.mask = 1735118524U;
    msg.scope_ref = 222608730U;

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
    msg.setTimeStamp(0.178824996857);
    msg.setSource(35276U);
    msg.setSourceEntity(185U);
    msg.setDestination(1736U);
    msg.setDestinationEntity(45U);
    msg.medium = 133U;

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
    msg.setTimeStamp(0.323163619967);
    msg.setSource(31081U);
    msg.setSourceEntity(11U);
    msg.setDestination(27830U);
    msg.setDestinationEntity(232U);
    msg.medium = 227U;

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
    msg.setTimeStamp(0.346337361985);
    msg.setSource(44746U);
    msg.setSourceEntity(244U);
    msg.setDestination(35211U);
    msg.setDestinationEntity(12U);
    msg.medium = 226U;

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
    msg.setTimeStamp(0.543292279869);
    msg.setSource(46011U);
    msg.setSourceEntity(224U);
    msg.setDestination(65118U);
    msg.setDestinationEntity(20U);
    msg.value = 0.0965780783017;
    msg.type = 147U;

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
    msg.setTimeStamp(0.172325657443);
    msg.setSource(35429U);
    msg.setSourceEntity(143U);
    msg.setDestination(59300U);
    msg.setDestinationEntity(104U);
    msg.value = 0.921004043464;
    msg.type = 70U;

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
    msg.setTimeStamp(0.851795402152);
    msg.setSource(41492U);
    msg.setSourceEntity(140U);
    msg.setDestination(33265U);
    msg.setDestinationEntity(68U);
    msg.value = 0.327147862715;
    msg.type = 57U;

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
    msg.setTimeStamp(0.308459518971);
    msg.setSource(59113U);
    msg.setSourceEntity(59U);
    msg.setDestination(20817U);
    msg.setDestinationEntity(142U);
    msg.possimerr = 0.810530537363;
    msg.converg = 0.491519821349;
    msg.turbulence = 0.744891953818;
    msg.possimmon = 186U;
    msg.commmon = 54U;
    msg.convergmon = 87U;

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
    msg.setTimeStamp(0.432699535672);
    msg.setSource(17491U);
    msg.setSourceEntity(185U);
    msg.setDestination(822U);
    msg.setDestinationEntity(72U);
    msg.possimerr = 0.399097584727;
    msg.converg = 0.624122998484;
    msg.turbulence = 0.550433032314;
    msg.possimmon = 192U;
    msg.commmon = 211U;
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
    msg.setTimeStamp(0.655209173842);
    msg.setSource(53785U);
    msg.setSourceEntity(72U);
    msg.setDestination(30687U);
    msg.setDestinationEntity(174U);
    msg.possimerr = 0.926081083243;
    msg.converg = 0.678239497275;
    msg.turbulence = 0.713747200322;
    msg.possimmon = 117U;
    msg.commmon = 87U;
    msg.convergmon = 53U;

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
    msg.setTimeStamp(0.693595889456);
    msg.setSource(59934U);
    msg.setSourceEntity(136U);
    msg.setDestination(926U);
    msg.setDestinationEntity(187U);
    msg.autonomy = 148U;
    msg.mode.assign("HFVKLUIXACFGCTHUPFFEQXJTFEVMPNKSGYAPZWPTUMORBPKYJLRYHMVGONKNNYUZWXODZVVBJRFGOBTZDHCUTQWDOPYYWMKLUTXTARBBEVJPSJVSDQOPXJGIAOPHQRLUQNKXDDYTRMECNLHWFKSGGWEULSHFXAZWBJBMWNINRHPUZJQSDCAJLYIBECOZBMKSWTLAXNHAHVYQCE");

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
    msg.setTimeStamp(0.297102833538);
    msg.setSource(54278U);
    msg.setSourceEntity(9U);
    msg.setDestination(50060U);
    msg.setDestinationEntity(57U);
    msg.autonomy = 4U;
    msg.mode.assign("SLARVXSYHYWCNYPHUUPWFHIQHMTCVYMQROKEVQLTSLKIJKDAGUHMZWCCFBTDYLZJNSGTABWKRGEDNOEFYTIQSMUXKJXTBBFKYNHXARYCDREAVWEIUIBVOGCBSAACROKWXOQZVNC");

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
    msg.setTimeStamp(0.978101936262);
    msg.setSource(27189U);
    msg.setSourceEntity(210U);
    msg.setDestination(53083U);
    msg.setDestinationEntity(92U);
    msg.autonomy = 136U;
    msg.mode.assign("BFKHMPMEGXBWJXFHVWYSTENUGSKHANSREBNKLCSBJXGRXNHHPZCRDXERMFPPXAOYKGKUEYNTTBOVMNLNUTHJVOWTJHAFIUIBMMQLLXZFJGIEWASYCFWZVTB");

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
    msg.setTimeStamp(0.295988465536);
    msg.setSource(51707U);
    msg.setSourceEntity(152U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(211U);
    msg.type = 153U;
    msg.op = 185U;
    msg.possimerr = 0.122794849727;
    msg.converg = 0.32346152857;
    msg.turbulence = 0.789970550789;
    msg.possimmon = 102U;
    msg.commmon = 87U;
    msg.convergmon = 232U;

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
    msg.setTimeStamp(0.930147781943);
    msg.setSource(54986U);
    msg.setSourceEntity(92U);
    msg.setDestination(14844U);
    msg.setDestinationEntity(186U);
    msg.type = 252U;
    msg.op = 112U;
    msg.possimerr = 0.730510863322;
    msg.converg = 0.986205482097;
    msg.turbulence = 0.657396055194;
    msg.possimmon = 30U;
    msg.commmon = 254U;
    msg.convergmon = 110U;

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
    msg.setTimeStamp(0.374987396842);
    msg.setSource(42386U);
    msg.setSourceEntity(11U);
    msg.setDestination(35073U);
    msg.setDestinationEntity(26U);
    msg.type = 38U;
    msg.op = 228U;
    msg.possimerr = 0.557592103246;
    msg.converg = 0.762401475416;
    msg.turbulence = 0.938299416088;
    msg.possimmon = 156U;
    msg.commmon = 194U;
    msg.convergmon = 29U;

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
    msg.setTimeStamp(0.268175854283);
    msg.setSource(46066U);
    msg.setSourceEntity(245U);
    msg.setDestination(32454U);
    msg.setDestinationEntity(63U);
    msg.op = 50U;
    msg.comm_interface = 135U;
    msg.period = 17087U;
    msg.sys_dst.assign("IRMEIVWEHLJQLWUATENNYVFWJEAIGZXZBAWYUOAQHDTVUJYFUQSOSIYBMGWKDOKBRJISUGCLCMLCHFGPGUICQRSYIQKPAMAMHNXUCKPKVTBNGEBOPFOJJKZKVBMHZRTWBTURZVOOAPDXMTZLEJQXAFRXIZEFKSKAQSEFMTQSCWLNWKNHYUTCSTJSQGXESHZNBORCHDPRXGDNMNGPFDLCDPHYQJBFUVRVJDM");

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
    msg.setTimeStamp(0.974126589666);
    msg.setSource(60951U);
    msg.setSourceEntity(184U);
    msg.setDestination(40882U);
    msg.setDestinationEntity(43U);
    msg.op = 33U;
    msg.comm_interface = 120U;
    msg.period = 16785U;
    msg.sys_dst.assign("BUOYHFHJIRKROGV");

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
    msg.setTimeStamp(0.541302740949);
    msg.setSource(8097U);
    msg.setSourceEntity(162U);
    msg.setDestination(6180U);
    msg.setDestinationEntity(120U);
    msg.op = 211U;
    msg.comm_interface = 140U;
    msg.period = 11323U;
    msg.sys_dst.assign("XJXJNAWYWAYTLUOTXGUMRBEQTATCXPQFEEKHKOIRVSVVWOICUBVTMHPFFWQZKHGZDDGG");

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
    IMC::StateReport msg;
    msg.setTimeStamp(0.956335382253);
    msg.setSource(14153U);
    msg.setSourceEntity(203U);
    msg.setDestination(2089U);
    msg.setDestinationEntity(42U);
    msg.stime = 2727993699U;
    msg.latitude = 0.512788737933;
    msg.longitude = 0.0264121320184;
    msg.altitude = 44153U;
    msg.depth = 21835U;
    msg.heading = 43176U;
    msg.speed = -27008;
    msg.fuel = 35;
    msg.exec_state = -47;
    msg.plan_checksum = 23787U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.991821217184);
    msg.setSource(53609U);
    msg.setSourceEntity(192U);
    msg.setDestination(18220U);
    msg.setDestinationEntity(248U);
    msg.stime = 3390956109U;
    msg.latitude = 0.375044827296;
    msg.longitude = 0.865338127973;
    msg.altitude = 34893U;
    msg.depth = 33235U;
    msg.heading = 42064U;
    msg.speed = 16441;
    msg.fuel = 87;
    msg.exec_state = 51;
    msg.plan_checksum = 17139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.182563811237);
    msg.setSource(5011U);
    msg.setSourceEntity(82U);
    msg.setDestination(46962U);
    msg.setDestinationEntity(218U);
    msg.stime = 1264645529U;
    msg.latitude = 0.301708086253;
    msg.longitude = 0.00519162319833;
    msg.altitude = 63515U;
    msg.depth = 5810U;
    msg.heading = 63646U;
    msg.speed = 21726;
    msg.fuel = 5;
    msg.exec_state = 78;
    msg.plan_checksum = 13086U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.174280417576);
    msg.setSource(10205U);
    msg.setSourceEntity(206U);
    msg.setDestination(46862U);
    msg.setDestinationEntity(245U);
    msg.req_id = 60666U;
    msg.comm_mean = 123U;
    msg.destination.assign("HEQGKWPMYTOZNGYQICHXGQIHQAWYQNLEMOWEGDLRPTRQMZNTZJZKSDRZTSSAUEVOUOIKONOUFTVZKFCUXAPIVVTQVUFVHIBNQVHJGLOMILWIPAFCKWIFKKDFSYBJAEWXPTXIYLVD");
    msg.deadline = 0.589657514716;
    msg.data_mode = 126U;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.319496129363;
    tmp_msg_0.x = 0.905361429784;
    tmp_msg_0.y = 0.42659994588;
    tmp_msg_0.z = 0.35871537231;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UMLYYXBQPPNFLIDWZMNVVUHHKSLIBAMEJDEMHZNNIWOZBEATUUCHMFTJRDNUVQUHRXBEJQBAGTOTPEUITFDQSORJOEORLSIBJNXONKYCIJCXWFPSYRVWHFAKDOKJXSOFPTJQHSUBQFVRJIFKLKYQHYGHGDZVMXSPEBCXWLBEIGRKTD");
    const char tmp_msg_1[] = {-33, -47, -31, -50, -35, 36, -119, 18, -53, -74, 10, -7, -112, 31, -114, 38, 95, 118, 123, -47, -67, 12, 14, 77, 101, -37, -110, 109, -91, 35, 27, -127, -38, -91, 83, 106, -57, -38, 64, -109, -22, 27, 61, -126, 21, 44, 46, -8, -78, -72, 28, -112, -29, 24, -3, 51};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.0795762476407);
    msg.setSource(38759U);
    msg.setSourceEntity(16U);
    msg.setDestination(52616U);
    msg.setDestinationEntity(245U);
    msg.req_id = 34089U;
    msg.comm_mean = 222U;
    msg.destination.assign("RLZAJVAEHIKIJRTTLMDEHWPDVBJJELRBUBQAQVYHPVHYNFJAAAUQEPVLMGKOZWPTFWSMKCCSPVXRKZCGGBIGFZVFANBLKMEQLKLOWUYNXDHOYOVIWEYUGUQSNPDKYIMENQSPXTBDDDTFCUFAIJSTIIRZGOLCWPIQHNWLOVFECSZGDYHJYBJMXMRWHRTKDVEOKUTSBJFCSWXXSHGZRUZGYNFGTJZKMXUPUISPECZYHWCXNFACBNNTOXL");
    msg.deadline = 0.843002807047;
    msg.data_mode = 213U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 151U;
    tmp_msg_0.zoom = 241U;
    tmp_msg_0.action = 102U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OOPOBQCIFUAAKFYMQVWWXBBSZOHDKXMHDNMYLNXFWZSVROQUFHCRSUSDFEQYGKRTXKRBPKOKDVZITTWSGOXNKIAGABCJAFHJTPQCFDZUEORITSMNRPGXJKSPWPBUYUBWTRIUUELSNLZGNJEVIUJYZIZCSKVAPSTHXRAMHLLDVGUYCNHYWMQLYEZZOGNJYIOB");
    const char tmp_msg_1[] = {-17, -9, 90, -127, 39, 96, -20, -5, 39, 58, 26, 116, 0, 120, 90, -29, -70, -1, -62, 26, 59, 40, 70, 61, 23, -7, -53, -100, -20, 90, 68, 44, -100, 28, -24, 30, -25, -78, 65, -102, 1, 26, -83, -33, -94, -73, -29, 16, -92, -118, 47, 77, -43, 68, 23, -63, 124, 44, 0, 97, 19, -125, 87, -5, -59, -120, -38, -6, 71, 81, 7, -11, 106, 84, -64, 72, -121, -3, -105, 93, 58, 72, -110, 3, -99, -43, -41, 24, 74, 102, 59, 98, -10, 69, -94, 103, 99, -27, -39, 11, -60, -106, 51, -118, -127, -100, 70, -21, -13, -60, 11, -29, -104, -12, -46, 93, -1, 8, -27, 89, -25, -22, -100, 125, -3, 81, -62};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.423743940133);
    msg.setSource(58309U);
    msg.setSourceEntity(70U);
    msg.setDestination(32512U);
    msg.setDestinationEntity(0U);
    msg.req_id = 38483U;
    msg.comm_mean = 95U;
    msg.destination.assign("NBLDZZUWOAQSIAAKCIXECIENYOBDSETBMURTFSYDVXCOQNOLKUMWMXGHQUGICZBZTJWSOPPFTVAXHOIKXWZLLTXFIANMJXXRNLLCFTVNGMMYFOYXKKVYRDHUMCYEADBUSOPYDHCJBHZMJEPBGGHFKTDPFCELZHVZGFODPYIIRKEUEWUVPQNQTWRRTIEUXCJDJAVHNQRZSBQV");
    msg.deadline = 0.0933801162512;
    msg.data_mode = 137U;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.903092963823;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FCMQRUQJGNLTWWNSEFHUVXBGOYKTUAYERICMALNJNBDTSPIQFPXBPHZNBOVNAH");
    const char tmp_msg_1[] = {-16, 87, 36, 3, -106, 87, 55, 41, -25, 125, -99, 4, -44, -89, 46, -29, -77, 89, 19, -107, 28, 33, 43, -86, 30, -29, -17, -91, 75, -80, -128, -56, 35, -30, 40, -59, -55, -7, -54, 94, 70, 62, -23, -1, -122, 59, -101, 61, -73, 7, 20, -8, -8, 40, 84, -114, 19, -32, -11, -50, 57, 58, -70, 85, 121, -78, 101, -69, 53, -9, 51, 11, -85, 125, -59, 29, 28, 112, 31, -126, 46, 0, 46, -98, 45, -23, 85, 119, 30, 75, 94, 31, 126, -36, -106, 49, -83, -120, -114, 81, 91, -70, -61, 45, -67, 62, -2, 48, -123, 60, 121, 92, -11, 16, 11, 111, -23, -24, -6, -44, -34, 8, -86, -5, 85, 124, -66, 69, 116, -46, -44, 1, 55, 109, 59, -18, -20, -6, -30, 74, -104, -101, 26, 98, 26, 116, -87, 85, -31, -80, -71, 90, -36, -9, 65, -102, -120, 68, 123, -55, 21, 87, 60, 5, -97, -114, 33, 119, -128, -32, 16, -110, -47, -105, 11, 16, 83, -108, -109, 27, 61, 77, -102, 121, -74, -63, -68, -105, 55, -17, -23, 107, -48, 36, 107, -5, 3, 103, -90, 113, -19, 94, -2, -23, 32, 114, -27, 102, -99, -32, -74, 116, -111, -103, -42, 101, -126, -70, -32, 30, -84, 125, 41, 86, -115, -92, -99, -85, -65, 48, -69, 28, 44, -50};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.751324274256);
    msg.setSource(49337U);
    msg.setSourceEntity(87U);
    msg.setDestination(17213U);
    msg.setDestinationEntity(13U);
    msg.req_id = 52642U;
    msg.status = 128U;
    msg.info.assign("BIIEQUHGYGJYJGUPOHZLENDAFOAFLZXSSDEEQNLJZDBAKLOVAZLKYYGRLMVBYQNKGROJMBKXDRPOTENGAUDQBOSPBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.458372368837);
    msg.setSource(9559U);
    msg.setSourceEntity(248U);
    msg.setDestination(5604U);
    msg.setDestinationEntity(178U);
    msg.req_id = 44452U;
    msg.status = 202U;
    msg.info.assign("FVVIDLZMMUIYDYRFIAWGBIAVGGZAPVYTVOHYIEOKJEWAYGDXJVGUFZRUOXFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.690300479375);
    msg.setSource(20U);
    msg.setSourceEntity(54U);
    msg.setDestination(12606U);
    msg.setDestinationEntity(57U);
    msg.req_id = 23376U;
    msg.status = 94U;
    msg.info.assign("ESWPAFLRYMWZOTFFCYXFPBMWXALGQOUCKNMYOTBLHTWSCCTUGWRXAXCIZKDVJGIUSKYFDKJYHBQOSEGVTEJGGQRSNVEEVEPIZNPPEBWODHEBDHQJURYAVBQRORGVCOZTJFLFTAYONSVLCMKBVLZSKCANPUYFQPIKIMXIFJDLTGUTGCJDDZJQDNKIYYQLTXHMXLWVBEFIRZHPHOLNASUZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.285923772118);
    msg.setSource(5333U);
    msg.setSourceEntity(14U);
    msg.setDestination(15958U);
    msg.setDestinationEntity(127U);
    msg.req_id = 2711U;
    msg.destination.assign("KZGUIRLXZOSRENYKMLTTPVQWCJNPMKNAKMSAGWAIQYHDKSUVJECLNAOJWXEHZJOFUKSEPWANZGVRECOANXWRKQGYLNMWTZNFXDIOVIIBHPYSOEETJZOJBUODYXMSSIRGRCLSFRISB");
    msg.timeout = 0.34559643485;
    msg.sms_text.assign("YKTEFOSWLNERHUSTYKAPTBDUAWAIQOWFCWVSCZELRESOXXGQZSGGLAKDTXRPHNAQNUGXCHGLEFUICOUNQUOYBCFXSRNQQBOTBGYLYBDHDNZTUJHMJDGSJWXQWQDKTBPKIKXEQXPDMATMRXCIVHRZEJTZFJMILDHNVHPIIDRPMRFFEIPQJIJPHFKSAMVNASJRVABNCTMZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.753910786858);
    msg.setSource(1126U);
    msg.setSourceEntity(159U);
    msg.setDestination(47090U);
    msg.setDestinationEntity(148U);
    msg.req_id = 60003U;
    msg.destination.assign("SOYYAIQLWZIUZFDRCWVHPYZMWKCPOOCFEXRGUJGHHTIXVTGETEYUVSZJGOESFBIZAIVYGRJLSMASPBDORAHWKTN");
    msg.timeout = 0.146524276367;
    msg.sms_text.assign("MHBFCVVLBCHBYSTSRXGGGEZMZXWHHJEDXNITAEQTABTOYYEBYZQIBXFAQJSCSRXSMCPRKPPVRTBSDNDRYEPHNJUJDRAHDPNIQLQGPNAWIIBLNTSQVAKUEEKHHBFULDOMDSIVCGCKXEMWLJDGUUNNEKUXAWQPYTZJSVJZFUMXCLBOXZZKVFOGFMYORCKZIUKEWPLIOINUKJMJFPXOQHRVFWIMHGDGFRNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.192308961621);
    msg.setSource(23282U);
    msg.setSourceEntity(105U);
    msg.setDestination(12916U);
    msg.setDestinationEntity(141U);
    msg.req_id = 34082U;
    msg.destination.assign("ADVGUVPZWQTGSFTSHQSLQPVFDTUDRGLVNPFXXHRIVMJHUHFAGQTFEAZFXGJKERMNQTXB");
    msg.timeout = 0.836813842315;
    msg.sms_text.assign("FUSFRZRPTHPHGYQMHPKSVACVVLNNBFPTGGIFEKBUTZMJLOMYUKGOFESVHNRFXQZGJPKSXZWUIPQNVPPODTSVFWBIRLUNMAZEYSDDIACVLZXOJXASWQBAJFNJHYZXQTRIWTASLGDWGUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.00877980505288);
    msg.setSource(62309U);
    msg.setSourceEntity(229U);
    msg.setDestination(46416U);
    msg.setDestinationEntity(58U);
    msg.req_id = 56440U;
    msg.status = 203U;
    msg.info.assign("RVXJZQOAVASJTNEXBLSJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.0163177270875);
    msg.setSource(39706U);
    msg.setSourceEntity(104U);
    msg.setDestination(29448U);
    msg.setDestinationEntity(160U);
    msg.req_id = 35129U;
    msg.status = 192U;
    msg.info.assign("CPYYKBADLGWKZKRDJSCHZXNXMCHSMVLQSYACAWWQENJHYHVIHJDIQJPUYERIGURETUOOTGDOZQMVEIOROPQZXIMQLHLBNTZSVUVAASH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.764361807561);
    msg.setSource(17573U);
    msg.setSourceEntity(189U);
    msg.setDestination(3836U);
    msg.setDestinationEntity(226U);
    msg.req_id = 24710U;
    msg.status = 66U;
    msg.info.assign("FAEIFIXHXDIYVOZJXADUGPYROTYGWVSGRUWMKWHWJMOIEFLLTQEQXDJSPBORDFBMWGOGDDUQPBJCYTFILPNEBJFXZUNEUYPGVCCLEZIVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.791728062979);
    msg.setSource(9069U);
    msg.setSourceEntity(143U);
    msg.setDestination(12455U);
    msg.setDestinationEntity(243U);
    msg.state = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.736030915842);
    msg.setSource(39745U);
    msg.setSourceEntity(131U);
    msg.setDestination(63711U);
    msg.setDestinationEntity(25U);
    msg.state = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.581028020439);
    msg.setSource(13232U);
    msg.setSourceEntity(46U);
    msg.setDestination(19442U);
    msg.setDestinationEntity(183U);
    msg.state = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.849852320455);
    msg.setSource(52452U);
    msg.setSourceEntity(26U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(236U);
    msg.state = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.0564762986403);
    msg.setSource(57131U);
    msg.setSourceEntity(138U);
    msg.setDestination(44820U);
    msg.setDestinationEntity(195U);
    msg.state = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.338743628527);
    msg.setSource(45258U);
    msg.setSourceEntity(253U);
    msg.setDestination(448U);
    msg.setDestinationEntity(47U);
    msg.state = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.660428338829);
    msg.setSource(57662U);
    msg.setSourceEntity(182U);
    msg.setDestination(19707U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.0590910987923);
    msg.setSource(63030U);
    msg.setSourceEntity(53U);
    msg.setDestination(58294U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.78660982106);
    msg.setSource(64284U);
    msg.setSourceEntity(229U);
    msg.setDestination(17811U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.710206771938);
    msg.setSource(47796U);
    msg.setSourceEntity(118U);
    msg.setDestination(16902U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("NUHSUMRBZJGAANCZXTQVXGGVERSLTIMKGHBQVLYWVPXVQDTTXQVHMOPPPERWOUQHTISWKKY");
    msg.description.assign("DPAVFKOQRFXIFVYBNJCVYCREAXTLNWIATSHKPFDTULX");
    msg.vnamespace.assign("FPCCERUZRJMOBUBMQUXDNRYMXHVKUEKOEPMCAOOCZAQWXYGFUGEULZZWIDAPPEVHMRNRUJITMOBEXPIJDTGASKJSYNNQCZOPIEZYFWANYTLGMALGWKHZLSDKFAIDDGLWRLAGTX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VZBUHWKYYTSNNXRMYRBJGTDEDXIJMFGYIHKIYAFZGVJJUEMNTOMVAJDHJBCDQNBRZEZGEZOACZUWHQOWL");
    tmp_msg_0.value.assign("ORZCLCNNTRCQUKLEVZAFNXQHFJVGEDEIICRVPFODARRUHZPIRAXSNWJDPCMIROSCUFZMKTGXXFEKFOAQKMYTXGDJSHHTJNWVZZCBYEUSIKTRGVOHRFGEJOLOBTBDWATDBVHLCBJLYHGWWXJGCDMBIOAMPNPLAGXUKYYNZVXPDYUNYSMKMPEMRQQUIWPOQGDSBISWJIALPFOUEUYKQTUWJQAZH");
    tmp_msg_0.type = 4U;
    tmp_msg_0.access = 169U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FNKJPZMJHRWORCASUFWPJGXLEDSDWVVIANTMQYGSQSYNOFQZKYMIZMLHDXXOVYQOXFVNDPZZPCQGHBEOPPHJDQBABKWLSYWKWAFRFXZBUUFWRUMYUIHWFBDOBRZLHQKGNEKAHAHJH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PZQOHZFQFXVIQSHHJDPHWUSTDMNDDPZVKMOQULNREHETHCXCOYCZMTXBGPLIWWGXKAVISLEKMYALMXBEWLANUAJTPWFQCJVAMPRKSDLTSGWIZZKDGACCYVAEGVRRGPXZSBHNULFPUNINUJWIYMAJKCEBMYG");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.468472383578;
    tmp_tmp_msg_1_0.lon = 0.399851654801;
    tmp_tmp_msg_1_0.z = 0.460700836111;
    tmp_tmp_msg_1_0.z_units = 187U;
    tmp_tmp_msg_1_0.speed = 0.631718240491;
    tmp_tmp_msg_1_0.speed_units = 84U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.204830749367;
    tmp_tmp_tmp_msg_1_0_0.y = 0.868483925615;
    tmp_tmp_tmp_msg_1_0_0.z = 0.940645327313;
    tmp_tmp_tmp_msg_1_0_0.t = 0.365331465436;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.0851033853138;
    tmp_tmp_msg_1_0.custom.assign("YGANLTWLMAHITTEJPHXIDKIOVJDCTENLPQUNAIZDJZESDXJRGYEFCUPWBAJLMXFYEZQWYVXYEPTNNJXQZOXSPRUAOSEVMBQKVKHLJHHBVSBBGOTNJCHSJQRDFRHMGWRTWMDGTTPRFUYHXMBRKZZWCAKWPIOKUUVDTOZGSFGDPMIZFCCKXAQAQPISFVVMVRWHNICFKRGUYVORGADLJZLYBOIKESFPNKYFULXYNZ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DissolvedOxygen tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.832505104951;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::SimulatedState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.lat = 0.681251335896;
    tmp_tmp_msg_1_2.lon = 0.23036596454;
    tmp_tmp_msg_1_2.height = 0.0469667434321;
    tmp_tmp_msg_1_2.x = 0.728629753692;
    tmp_tmp_msg_1_2.y = 0.987759177924;
    tmp_tmp_msg_1_2.z = 0.306673155103;
    tmp_tmp_msg_1_2.phi = 0.480859219665;
    tmp_tmp_msg_1_2.theta = 0.0276068551575;
    tmp_tmp_msg_1_2.psi = 0.915204324857;
    tmp_tmp_msg_1_2.u = 0.315416796281;
    tmp_tmp_msg_1_2.v = 0.291451032157;
    tmp_tmp_msg_1_2.w = 0.182427415775;
    tmp_tmp_msg_1_2.p = 0.0448221312943;
    tmp_tmp_msg_1_2.q = 0.818328719339;
    tmp_tmp_msg_1_2.r = 0.110903392203;
    tmp_tmp_msg_1_2.svx = 0.0713490136269;
    tmp_tmp_msg_1_2.svy = 0.881711528148;
    tmp_tmp_msg_1_2.svz = 0.709095058977;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SEHLBSQUTFSXBGRBKJRYICXPQBZKMVNZ");
    tmp_msg_2.dest_man.assign("MZYEPXKCWQFADNXYJSNWZYZCRLYAFHNRKPUFUFWFGUYRXLAHWZDILMYHHVQSAYCTQOZJXZUDBVNKHLNMTEQOKIOTEJGSTLLWVZUYPHUJMVQJIXSRHNXKIKIPQPVINZXHICCJNPPVBDKDZIUCBPQUBMCBWPDOFXFRATSJRBNYBSHVGKFGOACAAMWGESRLFOEDWQADIFRVEMSPCIJBMDEOOTYOGTHXQG");
    tmp_msg_2.conditions.assign("DZOKAHPLLKW");
    IMC::FormationEvaluation tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.type = 9U;
    tmp_tmp_msg_2_0.op = 240U;
    tmp_tmp_msg_2_0.err_mean = 0.300340630534;
    tmp_tmp_msg_2_0.dist_min_abs = 0.764055841021;
    tmp_tmp_msg_2_0.dist_min_mean = 0.125513757097;
    tmp_tmp_msg_2_0.roll_rate_mean = 0.123743287091;
    tmp_tmp_msg_2_0.time = 0.00616654703559;
    IMC::FormationControlParams tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.action = 232U;
    tmp_tmp_tmp_msg_2_0_0.lon_gain = 0.53407573801;
    tmp_tmp_tmp_msg_2_0_0.lat_gain = 0.242029933964;
    tmp_tmp_tmp_msg_2_0_0.bond_thick = 0.258434573809;
    tmp_tmp_tmp_msg_2_0_0.lead_gain = 0.0708676702306;
    tmp_tmp_tmp_msg_2_0_0.deconfl_gain = 0.0235679875212;
    tmp_tmp_tmp_msg_2_0_0.accel_switch_gain = 0.824129901496;
    tmp_tmp_tmp_msg_2_0_0.safe_dist = 0.00621275573934;
    tmp_tmp_tmp_msg_2_0_0.deconflict_offset = 0.606387981574;
    tmp_tmp_tmp_msg_2_0_0.accel_safe_margin = 0.0698057915837;
    tmp_tmp_tmp_msg_2_0_0.accel_lim_x = 0.373819497331;
    tmp_tmp_msg_2_0.controlparams.set(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::Loiter tmp_msg_3;
    tmp_msg_3.timeout = 20125U;
    tmp_msg_3.lat = 0.0525968103771;
    tmp_msg_3.lon = 0.626649635796;
    tmp_msg_3.z = 0.00479093069175;
    tmp_msg_3.z_units = 207U;
    tmp_msg_3.duration = 38595U;
    tmp_msg_3.speed = 0.245345506072;
    tmp_msg_3.speed_units = 107U;
    tmp_msg_3.type = 224U;
    tmp_msg_3.radius = 0.160794598641;
    tmp_msg_3.length = 0.0593714942659;
    tmp_msg_3.bearing = 0.78558257975;
    tmp_msg_3.direction = 201U;
    tmp_msg_3.custom.assign("FNCHOQPZUUNGYPFADALNSYNEUCTOWWSSDYJDNXWXDZEDWJBVQCCHWQVLCBIFHWLHCIAKEBERTSAYJVDLXUYSRSQTYPMUXOGHPBUNTOSLFRAXCAKVKDXMJRMQMZBKJZIXQCSBZPQLOFTTODFFBWEJGELOUMENINTWRZGIGCPULXPTHPJVOHPBUCZ");
    msg.start_actions.push_back(tmp_msg_3);
    IMC::TrexObservation tmp_msg_4;
    tmp_msg_4.timeline.assign("RDHXBRUEUEYZTDUSGVYINCVBLMYMGSEGPLIQIMTHFKZBWNOMJQDLDWSYDCCVEYXOTOMETGIJTKKGXFPYPZOAHZWPSGYDALTQJBVGVNDKPNVFHZHAKIWKFURXVIZRBACIABEDEACGUYRSWSVOFHSQFPKRKEAVHNUXHOZOWZFKDYNJRBXQXAJLSGJIACQOOXMLLQFJXRGPWNLTZKHNCRXFCTIMTUAUMRPLCNJMBNCYHP");
    tmp_msg_4.predicate.assign("RNRKYJAWPWDGOQSAATUOGQBBTTDJGEXFZQRUPSWDGEGESTIUSTPICICLJHMJDKJUWZTBMUYTUKTGJWWNNHSWNKHLQNYOGLFDONOONGCCFZEMIMSVPCZELVBLKBLYNPGNSOIPVMMAJULJHMRFEAYMPINBZKZOVACBEQASUXEDPQVGARYXDXWISRQKHKTHUHOEXXRFLFIUAWHDRYIHCCLXYYYXZMVCFIOFKCRDFVSEAHB");
    tmp_msg_4.attributes.assign("TRKNGMCPZOKFAVHGCSAYLCQLFFTDIDQRSKAITNGDNJVVCDSLNQYEIJPZMMIYOFBIWCSUDHAOEYMHGAIQBIQGLPPIZQUGHNNDQZUHVPFLWERQZXPUSHXCSKRSLHCXKTZEVCFZYYKWRUX");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.787527715359);
    msg.setSource(60232U);
    msg.setSourceEntity(185U);
    msg.setDestination(49530U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("VQXSOBQQZNCJAOJRKYQFVMYNBTKKLGRFXUUBMAIOVCGXUGAISDDGBBPKRCUOC");
    msg.description.assign("XYPBLSLKWDMZRPAXBRATBOXEGKWPUKAYRTLABDOQVEQNWATQZQMTSXRHDLJSKYVBQONFWSLSSJIZWOHXTHZSBYJFWMOVXBLQGCEDBFVGVCFCGTPGKVYQLKOHFJQEUMZSPTNNNOVFICJREKDIUWIWGYLIDRHPUEZDQRLNRTAHUFAPPJXAHWOHICCDSUZMUMUUAIMUJMEQSNEOWIZKFGFJGHYVBRIRTXXCLFPNGYKTACGDNECJPIVXZ");
    msg.vnamespace.assign("SWHMJZWKMKIXARUVURKJMMWFUICIJKOAZQGF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FDXWIELSYSCMDLZJZKWDGAGKNFLPASQOXAEJTSCYRJVBOTWCSNAJHWAXBMIKXUIPEOQNLVZFZKYDVMMNDFRZBHSTHHUKDHR");
    tmp_msg_0.value.assign("YTRYJEPDOGZZAPDQQDNSOJZSOIFPGBFFJQBYNYXIPPYUYXFCNMPMEUEGMJLEGXTGFIKXFMWX");
    tmp_msg_0.type = 212U;
    tmp_msg_0.access = 161U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HANEUHDEGPINAQRLTKWUXFBCPWZABPMBBPYQDQKQMJVXJNXCSRERFWTWIHARXRBMCCGCTQHODRYXIDCJMQCFJVLEHJVHKWBAQZSWSUYZFHZGBMLZTWMSOARGNQZZDTEKCDUXCFLMGHVMNYBZYNXFBEKWVYQ");
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.759119237178;
    tmp_msg_1.confidence = 0.193394279308;
    tmp_msg_1.opmodes.assign("SNAWQZEYORLJQBNPZXGNQVWFVXCILGJJPFAZIQSIVSMHJLKMWXDCVLOLRGDJVUIMXTYAOHSJWHRTJEWFPZXGHFOEGKRMCWTYNEDFQNBNSECZLBTKSABUPITYPIUQBONMOBIUERVIRRDCNEJYWAONVQAQTPXGDDVYGLZVPHIODAUKZQUGRBBMKTTUKMCRXHWGEMCYFDQKLDOZE");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexToken tmp_msg_2;
    tmp_msg_2.timeline.assign("MOWIUDDLNXTXIHYFBPLUDGEFYRCMNQKVRBKORRXNMLLXQLJNRZEMWWHWZTIATUZWWYQQPYJVFTEBJOEOMEKEOLCAMQFUCARPPPHVSDRUKYGGIMHWXTBDFJJEUVQCFWMASYNGIIYAFRKIJPDAOTBESNJSFNQGHSAATWBVMCKOULKKILRBYBCZZZNOICJQJVXTXGXPADUCTHCGPCSVGNURGQGPTXOHZJYHHVADLPKQUSOMBZNSDYWH");
    tmp_msg_2.predicate.assign("HYWIWKPOPZDZYABSVRKJHPYREFYLXQWEIEXERMPPDBGRKCUCOYTVNVCTHLFJTIIDDUKFVBNOXUQSLULMVQSIJZABBZFAGNVMWEONSGSNQOSGLNBFPNUYDKPFQLUFMJJYQSXMKWYAXONTSRIGRUFDDEDJGJCOTTIAHZRMVMVJLBKCGTXQHLOMQTDSKWZHJIEHTYPPCOAXVEFZUOKCAHEW");
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
    msg.setTimeStamp(0.943250706105);
    msg.setSource(56591U);
    msg.setSourceEntity(28U);
    msg.setDestination(59812U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("RMJSCGHYDMNXTSUNHLKZPZEMECSKZOGEMLYMAITLWXJDDDRADKKXVNSTBUFECYPWOHZVFBTQICNYVXMIRJPZWFJHJULNSYCRUKEXBVGQCFMHHTICOWDVUTXBAYWDHGLPKPLZQLSQCDUPIQKPVSAJNQSAVFAGEDXETZXLPBNEJAZKPTMOOTSDGNRGQJQIOICYRCQIRWXVGMAMRBBWUOYWBR");
    msg.description.assign("MNZGFDKZTBBCBOIVQAMXTWNEVSFG");
    msg.vnamespace.assign("WLVRRWEJQIKBDITUYEFHANPQHCDYDIQRWMPEEVKCZUEXDNGLJXSXITBFFNJMAJDIXLTFTJNFUVAJPEMTULTMYCBPRFYIAGUGELKZXEGPFJNGVELNTHTKSQABIXKPVPKVVKQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TATCJDNASMFBJVXEBIYPATPVFCJJWAHJPIWEIKQVRMHXHICKJVZGZSO");
    tmp_msg_0.value.assign("ZJWCLWOCUOZDYFOUQDIDNHIWXZAFEWVYAJVEHTYMJSCNYWSMQFKOQMZGM");
    tmp_msg_0.type = 197U;
    tmp_msg_0.access = 154U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PIHBWIOBBNBKDDYJGFUYSMC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PITTDGXAWIHLFFCFWOEMYNPJWEYCGXVRJUXEYQSTQJKVDX");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.579892840094;
    tmp_tmp_msg_1_0.lon = 0.625783931172;
    tmp_tmp_msg_1_0.speed = 0.978403110861;
    tmp_tmp_msg_1_0.speed_units = 1U;
    tmp_tmp_msg_1_0.duration = 22462U;
    tmp_tmp_msg_1_0.sys_a = 29195U;
    tmp_tmp_msg_1_0.sys_b = 60594U;
    tmp_tmp_msg_1_0.move_threshold = 0.0712441187726;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RegisterManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.mid = 9993U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::FollowTrajectory tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.timeout = 31559U;
    tmp_tmp_msg_1_2.lat = 0.23362445384;
    tmp_tmp_msg_1_2.lon = 0.567590985759;
    tmp_tmp_msg_1_2.z = 0.654961656444;
    tmp_tmp_msg_1_2.z_units = 139U;
    tmp_tmp_msg_1_2.speed = 0.54000673319;
    tmp_tmp_msg_1_2.speed_units = 114U;
    tmp_tmp_msg_1_2.custom.assign("UZNLSGQBNWGRCRFYUOSOSJEYGSOMLNWKPLJIORZHPOCCJAREQTLSFUNQQMIPLTDPVHVBVCZGXJCIJTAXTWECBPKSGWNGLMYAFKHHRMPPIKMFJYGWTVKBAURJIENFJEHUKRSBBXSVXZKDEAIOTUFBVCMDUWHESFBWQYRUUBNLOVZZCADYAQAFHQNZADOERTQDZYTGTVLZIYBGJNIKMD");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::UsblAngles tmp_msg_2;
    tmp_msg_2.target = 14242U;
    tmp_msg_2.bearing = 0.181829068447;
    tmp_msg_2.elevation = 0.559510065582;
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
    msg.setTimeStamp(0.769993372274);
    msg.setSource(47229U);
    msg.setSourceEntity(222U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(171U);
    msg.maneuver_id.assign("TKEYVYUCUDWJJFDTBQIUCVSZPG");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 45611U;
    tmp_msg_0.lat = 0.076533810182;
    tmp_msg_0.lon = 0.511311818183;
    tmp_msg_0.z = 0.160519634447;
    tmp_msg_0.z_units = 17U;
    tmp_msg_0.duration = 11368U;
    tmp_msg_0.speed = 0.0491391401166;
    tmp_msg_0.speed_units = 117U;
    tmp_msg_0.type = 130U;
    tmp_msg_0.radius = 0.312401577678;
    tmp_msg_0.length = 0.429187918056;
    tmp_msg_0.bearing = 0.462033872778;
    tmp_msg_0.direction = 88U;
    tmp_msg_0.custom.assign("VJAYOMDCFVYAFUGAIKQWKTEUICXCZMUQXNLKWTSHPIUGAYLHAPWGBXSDIAYCKSRLVBM");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.777635625467);
    msg.setSource(41078U);
    msg.setSourceEntity(221U);
    msg.setDestination(53358U);
    msg.setDestinationEntity(64U);
    msg.maneuver_id.assign("QSAOIEQRZYKRDKZAMZHUGLPCOBCHUKEBGUEFZMWZJOOLEBEXEFLZSTVMICDKNWMNDFOIENDLYNU");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 36394U;
    tmp_msg_0.control_ent = 241U;
    tmp_msg_0.timeout = 0.696404733236;
    tmp_msg_0.loiter_radius = 0.848910281169;
    tmp_msg_0.altitude_interval = 0.206185190391;
    msg.data.set(tmp_msg_0);
    IMC::AlignmentState tmp_msg_1;
    tmp_msg_1.state = 147U;
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
    msg.setTimeStamp(0.784151984972);
    msg.setSource(21906U);
    msg.setSourceEntity(189U);
    msg.setDestination(56401U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("TNYGFXXRXETAOKEGJYHQUJELUUAKOJENTVQHXHZSDATPDUJYHJYWWZIMPKRISUVIKXTILYVSRLSGGDKJBOCHQREMDUNCUSNMWZKUYQIJLIXPRYQKNVDVOBPSWMBWRFIMPBVWQVIUSTBCGEQPLGZHFNODFRDSETCEMLZKDGPUCJZOFOAJGIWTDYEHLBXFQBRLXCBKNCMYWNDVZX");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 44886U;
    tmp_msg_0.lat = 0.287849297104;
    tmp_msg_0.lon = 0.569149500317;
    tmp_msg_0.z = 0.441044658835;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.speed = 0.442336788696;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.bearing = 0.695763570228;
    tmp_msg_0.cross_angle = 0.166363894097;
    tmp_msg_0.width = 0.100224066384;
    tmp_msg_0.length = 0.599807076256;
    tmp_msg_0.hstep = 0.953871351407;
    tmp_msg_0.coff = 22U;
    tmp_msg_0.alternation = 89U;
    tmp_msg_0.flags = 3U;
    tmp_msg_0.custom.assign("PGNIQOZIQUGIWFQONJOXLGHDJNOPYDZURBCGLDJBQUKKUKIRTQZSMYPICXXUWLJAOYHOTDEEXPCPWLREFVCKTUMORXMZCGBWFQHLYURNNHMTMTQYXEVLPFSLQEZUEGRSMCSMRPVZWLDGATJBKWSBZDFEDGBSWVJYTXCFTTEQJJAOAXCOCKRIPGASZNPDNYRVDSKBXFRPQVVHAYUKJWAFOVEBWNGKUAFIMWLYEXBNAHVZILDCSHVIIMTHHSMF");
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
    msg.setTimeStamp(0.576907971933);
    msg.setSource(60309U);
    msg.setSourceEntity(49U);
    msg.setDestination(34692U);
    msg.setDestinationEntity(73U);
    msg.source_man.assign("PQKSPRYZSFHOMSZHAYLIMNLKUWANTQWQZWFJBMCJTNIATNTGJQRSBEBRGTUFSZCMJXYLKPEAZUYGIVSUGHIVWRNEPV");
    msg.dest_man.assign("LQGDHPDSRFTIYSRLVZUOYOIXLKUTTGJXCJENJEWSQAXKRKZHOYYVYRPEDRPVEKSOCMZYVHAXZNVUWMZOBVJSKPOFHCFEKHRPULUNDNIAMCVAZAQRARBIMPXNXIFUOWBUMNCGAWXHMHNYGTPEHHTLJWRQTWKQGJQUEDJICSWKGLYBTJFPMABBFL");
    msg.conditions.assign("EFDROOTWIFOEOQKBWPBVLYBLHXHJOUCYIPWKPEJWPJERADMYKXQJXFGTALKDRTQCTAEEESZAXCGZGMECNNLKGBOQRTMPFCXGIFRTNIXVHIVKDQFVM");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 35892U;
    tmp_msg_0.lat = 0.600180736522;
    tmp_msg_0.lon = 0.778404597793;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.z = 0.528715454546;
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
    msg.setTimeStamp(0.0724759967187);
    msg.setSource(54548U);
    msg.setSourceEntity(106U);
    msg.setDestination(39456U);
    msg.setDestinationEntity(172U);
    msg.source_man.assign("XVJVEAFTTWNZHEGTLBY");
    msg.dest_man.assign("HYZZSWVSZNRXPZWHWRFKYATBUUFMUBEIWFDVTAXNLAEUKLNLRMPGWCEZTLOGXLJEHHIXKKCLRKUNAFBMDAIFZXHPXPDPDLOOSUSHHKFZXGDHFLPOHQABMOIOEQEQARVKDQSPIDCEJI");
    msg.conditions.assign("ZNPHAJUGNQVDMCXHQDVISH");

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
    msg.setTimeStamp(0.795597437298);
    msg.setSource(20876U);
    msg.setSourceEntity(68U);
    msg.setDestination(47094U);
    msg.setDestinationEntity(71U);
    msg.source_man.assign("RLFYNDMOUTIPAAWGOFINPOGPJSNVLSDBEUFQCFPMBQCUVAQISBFJCVWJSLJVYOILTISQDRXUNRJPJHPTAILGWFWDSUHXHDCJFURMDCGBZGXYWTUBZZMLMZIVLXYELRHTAHAEODZXZRJKKEKMPBIRCFNCRCAUNWVFBSBVEYJRAXDXYGZNKHITIOTHQTGQ");
    msg.dest_man.assign("LXXDRRFFSHKSAFHPUOBSAKGDBBCBYOAOHEOTIWEETWCITFXRRTUENJMQZGLNTLSHZYHAEONRPNQWTZBAUDYFTYVJXIVLNYAERDCVKYOGCKISGYYNSTBKARHOUPILPEPMWDOXEUQAMLIXWHWOJXIQNZFSJQKHLPEMSFSMBUNQMNGVZNKQUDHCFKDPKYWSHLOXUYBCUQCGMMGGVRWIQZAJBGIUQXWDBJVLI");
    msg.conditions.assign("YTUGDRPSIENCPOZTUNIIMHRVSHPSWBSAKCKONPCMV");
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.command = 136U;
    tmp_msg_0.settings.assign("WHLNMKYPIKFJXZGYCAPTLZOZVAQZHEGWXZBCPDGHSDTYEMLBEBEGWDPJFORNQHOLNLXJKSFURAIMCSSJFXKUAVUXNGRJRZ");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 23670U;
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ZBBEOGAOJNFUDFIIHUWUIUEBMCHEQASJHZHUAXWMCDMBKSWJXRPIAFTSDQTPMJRRQDKJEJRYAVZSXTCLFQYPVFWBZGZVWXFM");
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
    msg.setTimeStamp(0.961384432476);
    msg.setSource(21754U);
    msg.setSourceEntity(254U);
    msg.setDestination(50567U);
    msg.setDestinationEntity(95U);
    msg.command = 64U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NEMCESHXZKYEBLRPJOWRZEHVSOQEPPWLPOPUZXPAXQMSXONQOPXVEYHIKWRUUZABTSSVMUKDGTINZQBTVYOVXTYTOBMZERKDSJNCPLUETGDFYBFUHYXRUNPMOEGCLGGGLJUYYDWIVXLVACAZHSFVQUEZCYFH");
    tmp_msg_0.description.assign("QMAGEHCEQTZJNMIPEVMMRXCRCTJPJVMWOVARLQZABXPBDINZKHXJWBFOKTLIEWKLZHDYHRPAOYEVCRKGUZHESSLEMNSLFTYABSDRWZVKRTAGQORXVBHJIYNBXUFJTFLUFCGWT");
    tmp_msg_0.vnamespace.assign("GMVSVTXGANGZWKDALLJZEMYQFXDGBHQHPZUKSKHPLVZSXTKNBGEACFITBAQDARDWFSJZOTMUDQEWNVQAJTENVEKLMDBJOSWUBZYPFRRQYQFXBUCIJJRMNJHYLCOEEGTBCRPLIRXLBUMHMSFZINQAGJSGOLNTUWRDUFMCSWGCCO");
    tmp_msg_0.start_man_id.assign("KYGLFZOUABNDAWUKUAMQUGISBQCBARSZZPEAQMRRGNEMHBQTGPSIOWCFRDYPAJVXHSQOGQVSJXLWHPLXUTAHFPOTNNBKOZJKZUDXOXKJHFUDIJNTEFWZXMVMMBIELENHWZRIBYVQPLHKYCLW");
    IMC::VehicleCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 207U;
    tmp_tmp_msg_0_0.request_id = 1652U;
    tmp_tmp_msg_0_0.command = 119U;
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 24872U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.306529009036;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3173194817;
    tmp_tmp_tmp_msg_0_0_0.z = 0.399985788363;
    tmp_tmp_tmp_msg_0_0_0.z_units = 222U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.133160793822;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 64U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YDMWQQVMLJFKBUKMJKVNDLIQPFIJFQMOAFKDSDEKLSVYLPTWCWOXEUYRTXCHNMRWVTXZVRSZRABOPEYCUWPNXKAZGIZTQHQWFGHJPBTGAAUNONEKMXWXMHYOITYVDJGLMVXHCFIGZCZFRESDSIBYXHNJFLEA");
    tmp_tmp_msg_0_0.maneuver.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.calib_time = 28884U;
    tmp_tmp_msg_0_0.info.assign("NHHUVARPMKTLYNODWWSRMOBFZJCNNUIHCAWJLNPGDVJUSIGSEXDFGTQUXEAOMVMIIDYMBOKPVBHHHLLRGOVTDZTWAMMYXUOLLNUSGSRBCKDFFZCEFDPCGEZNTYONMWSQIIGDFERSKZXEXIKBTZCXVUPVNQPQIAYPVAQTGEDLJJBUOQHEJPWTFCSEJRYGIWWYHYKZCKEWLQLCPFBXMNXRRJH");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.250247388626);
    msg.setSource(37322U);
    msg.setSourceEntity(164U);
    msg.setDestination(57344U);
    msg.setDestinationEntity(28U);
    msg.command = 170U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VTBAMERKHQALQMOVTEHGNDPGOAYWZALWEGCQKKUNNKEZPVZGCLCKJUZGMWSFUHAGSMWSELXHVUULFFVKDRHKSVBDDDJCEORFMXMWLFNIVFNIGKUJLYBPPHTZSRYWZXEZJQKSAVOHJXLPSDIJACHHF");
    tmp_msg_0.description.assign("UHTDRTPHNWRGZKEVYTNZCHGMPPVIYKPRI");
    tmp_msg_0.vnamespace.assign("CVPMATSGYGXCSFPJGNZROPJRYTUMWYBMJVZDYXBIEAWBJEYWDSPXECOTIMKOTFFAGNLRCOZVVTQRRLTJFSMZSQFIONQKKBWNAKRLWRHFWLDVNWSXZBGXZVOUYHXBFXNAHDVOOLHEBIJKZETVDACDNVMZPKCQRXTKJSMBYWDSGNQDWHJQPHKHYQBTPHALY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LXSAQGKDUKEPMHTWVLJIHJIOMP");
    tmp_tmp_msg_0_0.value.assign("RUBPXQJLZNPOLGRTBACJYARGNSVVXLKOKKYPDTHINCVMSJTHQYDHWFBCKUSCCJWQHCMWCEGNGBWYESWLAJSWKZLPRBDUCUKFULOYFPXEEWRJUODZ");
    tmp_tmp_msg_0_0.type = 156U;
    tmp_tmp_msg_0_0.access = 232U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XNCDFOUIJJRLVVMUOSWIXKRNGBSOLRHVYBLNEXMLYTDYMQOAOCKTDFQLLYPERVIEVJRGNNPJZEGSZNPNFGJUCSKBETZIKSLDKWIKVHVHQBTTHMWAFVWCFIOXOUJQZBAUFWDYDRGMBNBN");
    IMC::TrexAttribute tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("JXLDGRQSZHVPIXWXNFINZSHUZNXAWHSAMEGPNIPBAIKBPELLADFZSJJQCFJIYYVXPKEDDGFMLMBKCOCRMRRBNKXIFTCVWORMAYBDVXEQBUYWOQSENQNTVPTWVCVLVHRZSLJGNFPYZEMZEOITIWPYIJKYOUGVZFTGALRAHBJEQBKDULUTGRXBAQWHUOCL");
    tmp_tmp_msg_0_1.attr_type = 11U;
    tmp_tmp_msg_0_1.min.assign("LTWRETPAIDSLWCSNBTEZMTKBQHYDJJOGXCFTJRGEOOIKYDMEBTFOXULMPEWWOZXANBRWCVZIMUUIWNAVMYOZMSECFGHWOFYQJOSXVLJNANARSQJGPXECIKSXIZZKZSGOCPXFNSQQJTQMVNJBVKHTYRHUIFWDLFVKWTYAKWCZCNLPQULIPMQKEURRSVPIVGKUGLCJ");
    tmp_tmp_msg_0_1.max.assign("DJWQRAYLSRGCPAHIRNSRZSBFBZDUMJQDLPOSEQPFIBAVGYEXMXCQKJNZOVZQOVUYKQPDURDFNBDGPFW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.568528833837);
    msg.setSource(18633U);
    msg.setSourceEntity(140U);
    msg.setDestination(25873U);
    msg.setDestinationEntity(107U);
    msg.command = 113U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DGMHWFDHFPGAIRATCCBSTFYFKPSKXOINEZUVRVQQKRLZQXFWZVWFMMZXSMXACXLOQPHNHMHOQWVNGLAZRCEWDVUKEBDLXIUBNMTHZMQGXEYPODIPEZUJJTJGYUJINGJRRTSUBEOREYCLCBOPZAHRPSXUEISNDDNLHICWLBYNFVKSAPJRDLFQUPWLGTOKBBZIEHXSZTGATJVCXVALNOCUACAQTVFQBDMKKYDJWJYNKUIESPGOWJOTQSHFWMY");
    tmp_msg_0.description.assign("DTJQQDSQACRZJNBXJTINPQJXRLCMWTWFHEUVICCLEBIYXZLMYAHJREQMDRYXPVYMKPCLYVHVPNEYCVODLZGKQMBIMHNXUFZTXSNGUCMWVOBDTUZSQOYGHYJIRXBPYWNKQZPNWXAVIRJKUSKGASDFBHNYHSOFMLFLGRCJTOICKUFFOOEQW");
    tmp_msg_0.vnamespace.assign("XZVEXEUPUNERLKZBRJPCQHAZOCJQQUGIYNAVXOCBWRCDIAECZFPINKLUDOAILHOAFOQTCNIVGMMKYRRYSYRMJYIVKCZXUAJFBMKTXMKOJXSHLENTUZJBDDWKMSDTHNLIUWPSCEPFURDGKRQNMBXFXEPUSQLYQGSLBBDELZNCJHVSSFOTTRGEPDWVBKBVPFWTCAYZZQEJWKVOVA");
    tmp_msg_0.start_man_id.assign("BIGCQBZYSVOEYWGQDHJWNAJTHMGSGDBOQJMTNXHGVPTEZYZSAHBVUTCDOMRAVHTVENUVERGJUYNADPWHCIQRGOXNDTMGUZLEYQLNIPMWTBBNPHZMILPECKKNSO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("PNFKMUBYHJNZVTVXRQDWHPGQIPNCPYBLMQQMRCJYDPTALZGDHAEIQVATEKWSFEFGCDNXVBEIYPTFJLZMNZNFJWTKVJRHXCCTDHG");
    tmp_tmp_msg_0_0.dest_man.assign("EOJIEFYALNFZUXPBOVVGYXNBSKUSSWRAIMYOKLYCHJLZSKJWHRUMUXKYKWHICPREMDXBFDJPBKCRORLIXILUPWKACASKM");
    tmp_tmp_msg_0_0.conditions.assign("NOHGLMEZXRRYNGNRPKEODATJXTKXOHTAWXQNCCVFEQIYZEBWQFUCHGUBMSAOFIXHEZIGKADUDSJLZUQBVAZCBKVGOHBUQXNTPUQJAJFAPIPBPHTEKVGWCVJWLCWJYMWONHADDUFLFOSFERPSDRCVMVIEQCOKZHSLPMTPJSMKM");
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.755728400503;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.970472133539;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 73U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("AKMPPHKNWHSJHCWOPQSKJELZUISPAPYSVQJNRTGDLBERFXORDXRFGCGICTWNNCCXEZGTBIXJK");
    tmp_tmp_tmp_msg_0_1_0.description.assign("TBGTXXHFMDGFKODPUDJBJDSKWDMIXSBLHEVHLAVHNPQBTWZAFLJFCNWCORSMKILUBZBXHMKTQCPZZRGJSPVJNPSCOMINGEQPGLEWJINABSRKAETYGGKAMACXYCYWRRUHWDVNMQYMZEQCGYJETLDHZASE");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("XOXUGRMYREPDGCNTIPCTSQOUJDTWFNVVMULOGBLIHJSFNRSXCVX");
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("VFKJDMCPPZBWMNPPJZWFXVOLYTBHUHMNYFFDPFPXAJTTPPVUUTXBLIJQGZUXQVBUOTCYLDLPQRCOMORCJKSIHENELNYWNZJQATXPRWGV");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.maneuver_id.assign("AASOHHDDMYVFSMPZC");
    IMC::Alignment tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.timeout = 58322U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lat = 0.219315371616;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.lon = 0.0239079641105;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.speed = 0.504222261741;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.speed_units = 69U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.custom.assign("JTEKGYSNOXNBKLJNKBIVTREDWJEQEHWFZLICZAUMJEWKYWBHRGCTTBIROJFHRPGVCYWPOPYXMAXHSULEPHHUWVKSRAQZIPNPOBQXRYPOUIFZDKJAVDUHVLWMWSDDQYJHPQZCONBYDLJMDTZVNSUNLDGXMMGKVLZSQJBBWRRTEJTCEOFAFIMKFBDGLHXXKFLXUSRCCAFKYMWVTHUDOMNVASERUYQXXSCGFICITIAIVOLASNZTPCZQENGFZM");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0);
    IMC::DesiredControl tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.x = 0.0240085273188;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.y = 0.0166243874835;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.z = 0.972689765351;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.k = 0.365811572536;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.m = 0.908675393655;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.n = 0.382981552639;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1.flags = 108U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_1);
    tmp_tmp_tmp_msg_0_1_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::EstimatedState tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.lat = 0.208256613871;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.lon = 0.374976291682;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.height = 0.845830618402;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.x = 0.110654237229;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.y = 0.0910237556706;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.z = 0.488245137369;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.phi = 0.837407941757;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.theta = 0.697936941542;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.psi = 0.621317486916;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.u = 0.526364340064;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.v = 0.476589960145;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.w = 0.616881038486;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vx = 0.448984765777;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vy = 0.227372900005;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vz = 0.825629011121;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.p = 0.918529598725;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.q = 0.718862919485;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.r = 0.699981605433;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.depth = 0.631737230545;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.alt = 0.619130624505;
    tmp_tmp_tmp_msg_0_1_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.310784935613);
    msg.setSource(50997U);
    msg.setSourceEntity(17U);
    msg.setDestination(42762U);
    msg.setDestinationEntity(249U);
    msg.state = 126U;
    msg.plan_id.assign("LOHXQGWXWPVJTGEAMCONVREBJLWKFJJANOLPFQBD");
    msg.comm_level = 224U;

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
    msg.setTimeStamp(0.212729966348);
    msg.setSource(24320U);
    msg.setSourceEntity(229U);
    msg.setDestination(1223U);
    msg.setDestinationEntity(225U);
    msg.state = 196U;
    msg.plan_id.assign("SKOVLQSZNFNMOBWJWIILNYDKRXEMQTSBIKYNGXAXZOAPIWZFWPZQLZXTCTECIQXUITHJNFBYLFOYDSREMFVLCRSTNOOYLUDQZJAPKDSPJQTAQGRRNDHYVNZBIRUGUNMJEQLKSYCGACKUTWIMHUFELBUXBCFNBLRWYMDUYZGQBZISUOTCTXVPRKRAZEPGEWORUCYGMKPODXHVEBKPDOIJHP");
    msg.comm_level = 80U;

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
    msg.setTimeStamp(0.736736003897);
    msg.setSource(20388U);
    msg.setSourceEntity(213U);
    msg.setDestination(33704U);
    msg.setDestinationEntity(129U);
    msg.state = 182U;
    msg.plan_id.assign("PHETFIIEJSWNLBXG");
    msg.comm_level = 34U;

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
    msg.setTimeStamp(0.473841839212);
    msg.setSource(55227U);
    msg.setSourceEntity(153U);
    msg.setDestination(13485U);
    msg.setDestinationEntity(124U);
    msg.type = 54U;
    msg.op = 19U;
    msg.request_id = 13620U;
    msg.plan_id.assign("XJGDPJFFNZDUWHSBLXKBPTYHTJOUBAHR");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.422249711006;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZYOZKPQRACWLGYHBMRALVJZRSTGFAAVBYMMLMJKMGBONEVBQVGIODIKUXRWCWKUKWLXWPZNEBAJYCNKLFFLIUNMPDNPDVXBDJTTYUHWDZODYCHTRFZCNIEDSHSCHCMBMXQQNQWEVITBSVEQYMGZTSPHPZSSIJXPOQEXOSQJAQAQOPXJDEWGXEFIFWURLVCBUSDGLUUTPZ");

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
    msg.setTimeStamp(0.940397182667);
    msg.setSource(4916U);
    msg.setSourceEntity(163U);
    msg.setDestination(19166U);
    msg.setDestinationEntity(80U);
    msg.type = 166U;
    msg.op = 27U;
    msg.request_id = 44486U;
    msg.plan_id.assign("FYNNXDIGKZKAXGNBGVSAHZENBQMOMTVBXYQRPPIYWDIQEPKZLRPJLSOJZJEZVDQNHACMJAPTOLUVEBCC");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 3081750493U;
    tmp_msg_0.messages.assign("SVJAPVBFPXZHTVPDFQCARSBAKEURSKZHBSZHLLJEAYOJRVBYWXQWBOWQTTCKWQKHDMNDCOYDXNJUJDIKDUWDUPFTYYQZRHEMZRCLXTTVLFFPYPTUBQAOABBGAOZUMTFXGJRFBIMQMLRKCNFSUDXGVEVMOYNSKPOEMCGOEKESODVSYBCMIRZYGISXCIPTAEINJHVWPVFCLQZXLHFZNMEGOELLIJDNWUMTQXKWCRZGIH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RFVMEKFMIKGXDZMFCVBGJBBZJYHEHTUIMKGDKFJJBPTHSYKIWCBADDREBUGUGIHNQMCHCBZNPIMRLIORCCFILXPTKBUYCLNEQBBARPUJQJNTPEYZPDRGSRWEFWOELFTV");

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
    msg.setTimeStamp(0.584287040831);
    msg.setSource(43794U);
    msg.setSourceEntity(51U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(87U);
    msg.type = 107U;
    msg.op = 73U;
    msg.request_id = 9973U;
    msg.plan_id.assign("RDEEDAQWDULMNDNSMBUWVAOUCBQFGCSGBJOYZNYHXHCGSSOOMZIATJJKEVFHTJUZLEIWDNQRCEEKNPCRVGFCEPTKRDFLDYEIPWRLZR");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 63041U;
    tmp_msg_0.value = 210U;
    tmp_msg_0.error.assign("MCCHVWCCIFHTNRTNHCIJNILXXHAODELWILBAEFYCSHLCTTSSQEICOQLWPHZVXEHVRRWXFAMDWJQJYVBKDYGUPFPZMRYUDBLFMNMULYRZGYCPZZMTEMTVZJDDMOBPKNWXFBTKQJRONGYHDUNYGCKSOTKWDBKSSUYKGGHAXRJVNFNPBQKQIKUGAZUGEMPURMQVIOOG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DWBLKGHQNPSDYBCVQVLQSEMHEGTVBGQKLFGUBWQCJCXYXLLMKHODMFDYQCSSLQZIZHPVIKZUMZAXECUHSOVDBPCVKZAVUEDLKBGQTJDFNERWFHFAMWZXRTDIMBFYAYIGTKPHSXCCLVHJFIIONQSOXZAAZRXENAORUTULJAWPWRGYOHWIGTBPJZGVPNJICTTWEOWWKJPZERYAFNJPKUTXAMX");

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
    msg.setTimeStamp(0.365707956888);
    msg.setSource(48663U);
    msg.setSourceEntity(242U);
    msg.setDestination(970U);
    msg.setDestinationEntity(213U);
    msg.plan_count = 41645U;
    msg.plan_size = 2274483809U;
    msg.change_time = 0.945084771957;
    msg.change_sid = 52370U;
    msg.change_sname.assign("RTALXXLYEAFIMTIUTHAMSUBKIBEULPUIOIQHVOKVCGOPEPGRBAZTTRFFWKMYGJXEMPJGIZLFGWDNSZUVSMGTZROHEWAQJNDGJDFYKVLTQDXBNKYSRXBFRSESBKUQVRVOQTCPTYYHJSXBMQDETNCFZARMBQBJAHULKYCIUEZSOXZKXXLSCMQWPCRPAUXSCFALJYMWNFDWKMJLHNIHWZENH");
    const char tmp_msg_0[] = {-89, -102, -99, -21, 91, -64, 65, -11, 33, -116, -84, -72, -2, 68, 53, 113, 102, 97, -90, 48, 70, -65, 35, 16, 38, -92, -2, -22, 32, -28, -85, 69, 47, 126, -97, 111, 119, 126, -97, 98, -32, 66, 81, 47, 123, -61, 11, -88, 70, -63, -123, -127, -72};
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
    msg.setTimeStamp(0.685618184791);
    msg.setSource(44733U);
    msg.setSourceEntity(72U);
    msg.setDestination(64457U);
    msg.setDestinationEntity(127U);
    msg.plan_count = 5243U;
    msg.plan_size = 3347676337U;
    msg.change_time = 0.208571705588;
    msg.change_sid = 4413U;
    msg.change_sname.assign("AJVUYIRGELTEENSFXUAUZAOOKDUNXPUJRYIVSFTKTMXKEIQDCMPVZWVOAUMVZHUASWLGBYZOPYHCCZKMTIKHLWCMINOMANVJQRUESVXPQIKHDIGCQYJJEGDMONXNFLNWOUVLFXPSFXZNQJWNKTAJCQVCGEYKDFSHKGWSZCTRALLBXWZSXBPLRLFSECHPPYFGORYJFDHWJ");
    const char tmp_msg_0[] = {116, 6, -82, -20, -45, 111, 82, 53, -117, 124, 29, 29, 12, 7, 32, -70, 2, 98, -67, -85, 20, -69, -101, 0, -25, 113, 71, -80, 47, -65, 68, -125, -29, 116, 67, 86, 76, 52, 103, 74, -4, 41, 94, 0, 41, 12, -121, -111, 72, 43, -37, -42, 81, 40, 112, 55, 51, -69, -73, -54, 8, 11, -40, 98, -78, -88, -101, -120, 65, -91, 112, -19, 22, 102, -128, -82, -61, -67, 83, -69, -128, -74, -29, -49, 42, 108, 71, 95, 73, 19, 82, -48, 59, 113, 28, 69, 110, -38, -98, 66, 47, -25, -67, 104, 45, 22, -45, -34, -32, -74, -69, 5, 72, 11, -29, -120, -55, -1, -74, -127, -51, 27, 27, -82, -30, 47, 120, 8, 35, 106, 75, 59, 81, 101, 72, -43, -38, -32, -51, -36, 1, -116, 0, 48, 73, 106, 5, 109, 30, -47, -111, 9, -60, -104, 29, -74, -74, -23, -86, 22, 66, 105, -35, -40, -12, 112, 35, 49, -67, 108, 69, -116, 38, -80, 42, 36, -88, 126, -35, -119, -107, 32, 33, -4, -93, -51, -113, -28, 42};
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
    msg.setTimeStamp(0.689488256367);
    msg.setSource(28787U);
    msg.setSourceEntity(66U);
    msg.setDestination(59019U);
    msg.setDestinationEntity(141U);
    msg.plan_count = 29717U;
    msg.plan_size = 861141237U;
    msg.change_time = 0.329585106418;
    msg.change_sid = 2526U;
    msg.change_sname.assign("DTQJGABJYGAOBKUTRHYQJEPQEHUKQR");
    const char tmp_msg_0[] = {-48, -37, 72, 66, 122, 67, 74, -40, 9, 113, 37, -88, 89, 93, -112, -34, 126, 20, 98, -1, -33, 108, -48, -103, -90, -48, -59, -104, 95, -73, -92, -7, -26, 120, -45, -100, -41, 20, -126, 36, -16, 3, -126, 114, 47, -47, 22, 32, 24, -71, 117, -28, -60, 124, -104, 75, 56, 55, 68, 97, -33, 40, -122, -124, -61, -45, -71, 85, 72, 42, -119, -75, 59, -13, -43, -64, 81, -121, 65, -3, -97, -64, -4, -106, 29, -59, 51, 67, 73, -1, 77, -113, 111, 16, 50, 103, 37, 65, -3, -103, 21, 64, -19, -69, 78, 95, -84, 60, -124, -4, 69, -100, 111, 108, -67, 110, 40, -96, -29, -37, 93, -11, 35, -68, -108, 54, -108, 9, -42, 101, 36, 42, -5, 19, 114, -32, -83, 16, 20, -53, 34, -63, 89, -39, 51, 103, 14, 45, 122, 124, 86, 88, 12, 34, -1, -97, 73, 105, 27, 59, 52, 28, -53, -5, -1, -38, 8, 79, 110, -43, -103, -34, 88, 27, -9, -89, 6, -115, -9, -73, 42, -41, 98, 56, -83, 40, -127, -99, 84, -1, -21, -54, 40, -88};
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
    msg.setTimeStamp(0.786843036467);
    msg.setSource(57673U);
    msg.setSourceEntity(248U);
    msg.setDestination(15867U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("XWWRELIEPLAXVZHHFUWBXWXWXKBFTJVZCDHUQILCHOQOGCCOXNRRGJINDOVSGNQCYTNEKFSLRAYJUPASOYUWAFJBQKJQPABYOHMMICUYRDALYMKMWDVQNMUDZUUCNPVOEQFKVLFPIMAESDVYZMTTTBGIBPJLACUZYPKSHEHOQEIFGPGKS");
    msg.plan_size = 35709U;
    msg.change_time = 0.270903715501;
    msg.change_sid = 42232U;
    msg.change_sname.assign("RNPMSPKNOOIMSHCVHHVOXZYJWIBZULIRBSFQDOSLRCPO");
    const char tmp_msg_0[] = {13, 23, -43, -61, 50, -68, -49, 16, -99, -116, 8, 67, -114, 58, 94, 98, 82, 96, -74, -128, 39, 28, 9, -113, -25, 103, -1, 27, -109, -16, 56, -7, 93, -12, -85, 108, 63, -71, 37, 79, -7, -119, 87, 124, 89, 58, 67, 109, 97, 103, 12, 6, 73, -78, -22, 20, 124, -76, 42, -6, 99, 123, -45, 106, 6, 31, 3, -28, -1, -84, 95, -116, 101, -2, 39, -53, 116, 21, -42, 105, 97, 105, 98, -69, -56, -24, -119, 78, 32, -1, 121, -79, 92, -77, -60, 76, 67, 2, 47, -6, -119, 38, -59, -116, 29, 43, 83, 54, 12, -86, -81, -75, 93, -115, 120, -43, -99, -56, 32, 71, -26, -89, -101, -74, 3, 79, -78};
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
    msg.setTimeStamp(0.820394902272);
    msg.setSource(1728U);
    msg.setSourceEntity(211U);
    msg.setDestination(62244U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("LEWEDSUEBXUJRCTCRWKUWYHMVXMFALNTTCJBYQNEGVPJISPVSPQSZFSZPZLTKEQSRKMTYVGQIGHRUSYMKGCTYBXCZTATBAHNWVMVIUUFXQYFTEAPBGL");
    msg.plan_size = 63133U;
    msg.change_time = 0.122513673968;
    msg.change_sid = 7380U;
    msg.change_sname.assign("ENFEXIHHARUEWBLUEMYBJWJUTCLYLOPMJZWGKGYCEOHYKTTVVDVZLHQWBFIZAXQCWHBSPUPPMYLNSNNXVVSVARZGTWIKHGFLOXKMTJBFAZOMECIGMJQXRRUTDPHMTTXBZOSNUFCTVWDPFLGTEARFCQEHHSMO");
    const char tmp_msg_0[] = {-124, 67, -111, -119, -59, 124, -26, 117, -91, -114, -42, 93, 106, -4, -115, -95, 92, 78, 104, 63, -1, 105, 90, -25, -64, 102, 6, -89, 108, -18, -41, -117, 125, -117, -3, -36, 97, 35, 117, 26, 38, 11, -118, 94, -75, 116, -53, 21, 14, -37, 1, 111, -28, 77, 114, 122, 44, 24, 83, -67, 67, -121, 87, 44, -51, -75, 66, -62, -32, -111, 115, -53, 77, -66, -77, 68, -16, 15, -35, -6, -113, -125, -11, -95, -90, 68, -43, -2, -51, -101, -71, 99, 91, 32, 82, -42, -61, -86, -82, -24, -24, 61, 91, 111, 74, 16, 37, -28, 111, 19, 4, 55, -118, -99, 89, 20, -78, -41, -80, -71, -111, -43, -50, -66, 67, -31, -104, -9, -10, 65, 81, -16, 5, -68, -122, -67, 19, -7, 84, -90, 89, -33, 81, -50, 44, -87, -82, -121, -27, -2, 0, 85, 104, -6, 126, 48, 116, 120, 4, 51, 111, 90, 77, -35, -22, 23, -75, 23, -22, 10, -15, -78, -1, -39, 4, 62, 57, -74, 49, -56, -17, -8, -49, 31, 76, 14, -14, 125, 111, 88, 59, 21, 68, -6, -3, -30, 76, 64, 7, -73, 44, 24, -34, 17, -75, -8, 99, -114, 91, 88, 80, 114, -73, 43, 89, -80, -42, 13, -4, -47, 51, -46, 88, 66, -104, -46, -122, -105, -26, -26, 64, 11, 65, 25, 6, -89, 124, 32, -59, -112, 42, -16, -3, -77, -83, 7, 123, -118, 89, 55, -93, -25, -21};
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
    msg.setTimeStamp(0.991347033692);
    msg.setSource(59360U);
    msg.setSourceEntity(224U);
    msg.setDestination(28278U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("IIBJJKSVBWDFMAKRAIJOANABGBNHPEQLYZMEEGYUCGDWALHERLXIVFDIPXKHXUTWVFGCSBYGWCUUQFLIMPNLBIWVBRAZVCSPJGYRTOZNOZDKJWLWEPYXXUZDRREOSGIMVQLGPWRMAHZNZVJMSVJNQTKFMNPQ");
    msg.plan_size = 16391U;
    msg.change_time = 0.365247840425;
    msg.change_sid = 6237U;
    msg.change_sname.assign("YGBIRLJQPGTDFUYODPLALXPKKJA");
    const char tmp_msg_0[] = {-49, -120, -84, -18, -108, -46, 39, 50, -128, -121, 110, 67, 33, 16, 77, -31, -41, -93, -123, -26, 84, -17, 49, 35, -114, -124, -59, -5, -11, 116, 104, 38, -110, 92, 63, -46, 50, 115, -86, -106, 88, -39, 43, 69, -83, 101, -81, 61};
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
    msg.setTimeStamp(0.720017019715);
    msg.setSource(30701U);
    msg.setSourceEntity(186U);
    msg.setDestination(40845U);
    msg.setDestinationEntity(120U);
    msg.type = 9U;
    msg.op = 124U;
    msg.request_id = 25538U;
    msg.plan_id.assign("HYHZUCNEPRSVHFCDSWYZJCTLAECPFJVGSXZCUIYDHTUXRHLBQTURCYYVVWMKFEGZUICNCJXHUPDFXZI");
    msg.flags = 60513U;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 180U;
    tmp_msg_0.value = 0.298058630314;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GJVACHAXMCHMKIZDJBCSJJNGGWDJXZOYQNWTLOSPORIHBLQTJNCYCNSMBSEQYPAJVPEZSOBVETYIOFXIDFAFVKQKSXZOQFNGKXQHHEIOYMWOYDBXGPETOYYQLXRDWBLATLRIWUGTIWHVWMBZNMAFWSYNCTLWUHJKFUZQIARRLUDASRAXVZHOGRCDVEDKLHVFJUPDKKBTKBGXFMPGFJRMTNSCUXLRUGMNFNACTURPQQZPILECZVZSDIPU");

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
    msg.setTimeStamp(0.388805610057);
    msg.setSource(8908U);
    msg.setSourceEntity(144U);
    msg.setDestination(6697U);
    msg.setDestinationEntity(24U);
    msg.type = 149U;
    msg.op = 2U;
    msg.request_id = 23391U;
    msg.plan_id.assign("EWSHDTWQVTFHTZYXNQCJWXFGIM");
    msg.flags = 13403U;
    IMC::Aborted tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PZNWNHJKRQJTONVNQKUAWEXVCDREOYKFQRSZUZKYIAPMTIWGODNGBODIBQNBTFXCMUTBLUTVAHWLIDWTMHJVLDBSEKTEZAJNHJQEDLYFFUXRYHYCBEPCHYAJMVGBUIXOUSWXFYICFPCMITLHPKSLSCOELYSFOXVGNRKADGSQFGPLXUHEPGWHQBIDXAVKAZDNAMWZYQQUJQ");

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
    msg.setTimeStamp(0.356541945502);
    msg.setSource(3438U);
    msg.setSourceEntity(185U);
    msg.setDestination(44815U);
    msg.setDestinationEntity(187U);
    msg.type = 103U;
    msg.op = 204U;
    msg.request_id = 36618U;
    msg.plan_id.assign("VBLNCWUQHEBMTYGCIASYQGJMPYKZHZKRHRIPNPIGSXAGZANAGXKGRDPUFPIKFJWVRMGUHEQCOWLEEIDTWQWYUACHWSDDYFYHYEDCRAFJAKSBQVULFLZLVVMWZOBXPIVTDZBEQYOXXRFXYNICTZLAGTIWDAEDLNJRULOHPTBXRQDXSSMQFPKCWVMUKPMHCCTOSVTTFINOI");
    msg.flags = 33221U;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 38530U;
    tmp_msg_0.destination = 39624U;
    tmp_msg_0.timeout = 0.30726332143;
    IMC::ClockControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 86U;
    tmp_tmp_msg_0_0.clock = 0.440258173603;
    tmp_tmp_msg_0_0.tz = 33;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EIEEIDBMZPFOVFXIASQYXBLUFTGKMJMAJVAGWGWPFZNKDGKHKNSOXLEKVPFYRSTRWNXADSWCLJBSTZHNQLHDYUQMZCPMEXEXBYRJIQFAGBHZNLURGVCOJEGJBGTCACHQTHBUZMQYKRDNLVLORNACNUICFIQDFVIYSWNET");

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
    msg.setTimeStamp(0.117507129428);
    msg.setSource(30851U);
    msg.setSourceEntity(142U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(150U);
    msg.state = 230U;
    msg.plan_id.assign("BSMTGQQOHVFGNKUUYEMHNOOFVSGHKSBCAWUERPIYLREJRALGYQGOLOOYJDAJUWEOXWQBZDNXUUXEIRVKEHFCVPGMNLQFQYRGMOFCUDZHFUWALDBSOAMISEWDHSLPZVZWBGRKPXOCPXXDYBSJVIMDLKZJDRITNCMJXFTPTVPRQKTUENLYZZXFYHHLWIANIPHFIYECTVRQRXIHA");
    msg.plan_eta = 1016175909;
    msg.plan_progress = 0.916054175191;
    msg.man_id.assign("YECIFXXNAZHFTYWCJHVZWLSODOACWAYDAVPGVMPUBHNGONGZSFZHASSNGHHBICZCWDJXNQFBGXLKBROLUPDZGFEALMYFLOCTQVMPJHQARJPKQMJYBWMNFSRENIUODKEBOTOIGIZJVYUWBYKEXHUVLISBL");
    msg.man_type = 16108U;
    msg.man_eta = -1303316498;
    msg.last_outcome = 86U;

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
    msg.setTimeStamp(0.809082105593);
    msg.setSource(46075U);
    msg.setSourceEntity(156U);
    msg.setDestination(6449U);
    msg.setDestinationEntity(219U);
    msg.state = 171U;
    msg.plan_id.assign("UXYNMOUICCEZYGMYQINRPKMOLLJRDAVJFAIKGVHGFYIPYYQPSZQIWJDZB");
    msg.plan_eta = -1216860689;
    msg.plan_progress = 0.420553130414;
    msg.man_id.assign("NDIXRHJLVJOUYWDTAQZYPQUIKXUFAJAJBVZQBJMSICKLTPRIWAKKMQQNOTBBUHGTFZSGSNKZWPSRFDWJYILKCGYZWWFANEOQIYMQCMCEJGDOOMWJXPAYHKBKXFVCVTZLIRCOOHRQUOJENUXPQSSLBBUCXPRPEHEGABEARVDUNHJWBAZPFDTSWIOHNYZELCMGXGLFWKHNUKHCIIVQDLXXDMFTSRN");
    msg.man_type = 14209U;
    msg.man_eta = 880835176;
    msg.last_outcome = 206U;

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
    msg.setTimeStamp(0.209219795166);
    msg.setSource(9749U);
    msg.setSourceEntity(32U);
    msg.setDestination(3028U);
    msg.setDestinationEntity(148U);
    msg.state = 134U;
    msg.plan_id.assign("SGKVLFVCEPWPOAPGCSGXMSPNLCYKWOKKLWIQOKIUAYGDXFORWSEGTDDSMFASYVZFKGWNXEVDCQMUPYZXHZJJYCSVWGBZOCRCNTQBKKTXTFRBTIQMYAISHLAXWOJULEREQFIBWLDTFUZXRLBGIYSQHIJRFUZNEGVNQQPAPNZRPDABMLHFNSBMJPUUOBMCEJZPTOD");
    msg.plan_eta = 836325813;
    msg.plan_progress = 0.75319788803;
    msg.man_id.assign("NHZXKBQPKQJGUCENTAXEBSCDJAUVQIRWWVKRFPMZKDIQCVGFHBSTWZALNEGBSNVOYUIYEOUNRXORSOTZHOKIWUCDTPZYEEXMZMHSQZPBZOJLTGYGDFUJ");
    msg.man_type = 16030U;
    msg.man_eta = -290433097;
    msg.last_outcome = 82U;

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
    msg.setTimeStamp(0.238430110568);
    msg.setSource(27199U);
    msg.setSourceEntity(112U);
    msg.setDestination(29636U);
    msg.setDestinationEntity(139U);
    msg.name.assign("JZNDALSYJYCTSRIUAFHMLFWSVKGBCVZOBIIIL");
    msg.value.assign("LBSMBYHGXCWLBQEQARDRYYJZJZCFXRSJFWDOLUDPYVGXOEDNPQHPSCKMGKDWIBPOLDXUSBWZZHFDNIKNIXYWTOREBFGVSHAYNKXOKGESHCDLTKSEMSUAZUHNGKAJI");
    msg.type = 173U;
    msg.access = 71U;

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
    msg.setTimeStamp(0.638573319732);
    msg.setSource(6369U);
    msg.setSourceEntity(58U);
    msg.setDestination(51582U);
    msg.setDestinationEntity(77U);
    msg.name.assign("FGYWYNZIZCDXIXCWTUVEEZKUJVLECKBNTHNVATBWOWQUCYRPPOVAJTFUFMGZDUHBFYTIJDTHYMAODISOQVGRLQWRDXSJQWKNDCAZFDLVOZBUVBHOILKNLAZPLEBGSERXNHHPPMEHCSESWYPVTWOPM");
    msg.value.assign("ODJUIRGCYMALENMPEOTLXKIVHORVOMURKBDVSLQPGAMQCZGYJFJJUSJRJXXRIZRIVJZDBAOHKCWCXPYFKBAIPKAPXFFDMGSBRLZFQUPTYNGJTUJVCZIGQEZV");
    msg.type = 130U;
    msg.access = 9U;

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
    msg.setTimeStamp(0.875636517795);
    msg.setSource(51071U);
    msg.setSourceEntity(226U);
    msg.setDestination(28809U);
    msg.setDestinationEntity(165U);
    msg.name.assign("HQSMTKXJEIBQZSRWHPPSDFUGHCPFOVDUQWCHCMIVXERZWWVALSQAJJQXXAFETYPTIQHYILOECLCGICKRILJVUSCRFLBMORZDNWGFCQNOTZLSNFVAFRZWXITYLWBXJQJGVNGMVFPMDAZKNEZDWTZQBUUMOZEHYFDLYVGMKYPWMRWOXTNHDLORUUXKLVAYEMEHBHQBUDHKYYEIATTGNCJJAIPREBBPNGCGXSUKVGSDDXJPIONFKAKZAMSJYKRT");
    msg.value.assign("KRRZBWALTVAQEPLFXOYXGXVOMPFMDVBWKBPBDDMJPSNKQYMJYYQUCTLXZFGXWVNIGNEBWH");
    msg.type = 12U;
    msg.access = 209U;

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
    msg.setTimeStamp(0.761393437181);
    msg.setSource(12890U);
    msg.setSourceEntity(204U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(233U);
    msg.cmd = 77U;
    msg.op = 226U;
    msg.plan_id.assign("HPQBSFBZJUVQPMICFZWNNCOJZIAXZHUGRDYCASWJDECKYXKYFNWDNRWKWODFSELQQLISWIVXUEMKJOVLOKBRAVNNLZCYESTYAGPPXAKOWZRGFEJFNIRFSQTBFXZHSCLAJCAJDUZEJVTXEMDZPMZCBT");
    msg.params.assign("POUOZEWMNEGXNRXISZVAXENIMUGEWCADTBHVOZINOSJHRLBFNWXZKPDAKCGJPHPCSJDJTAHBYCOCONNFGLIIQKJFAGPAYERHUDVBCSSELJOVAOLVMLSFNNSWERTMDURXJFLSZQIFUEBVLCYMTHBIZAJZKTMUKBJKTAXCQCMGHMGGUVBKJVGAWPGUXLMYSPQPZHM");

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
    msg.setTimeStamp(0.62497540738);
    msg.setSource(60776U);
    msg.setSourceEntity(228U);
    msg.setDestination(25194U);
    msg.setDestinationEntity(127U);
    msg.cmd = 141U;
    msg.op = 253U;
    msg.plan_id.assign("JVGZKFPHVXWVFQMKXQBORNVTTBRUKACKMYFVNGOUAXGMEJPEENDOKFUUNYMKHHWTUHSYUNRMTCFRIYOIEFYWIOYS");
    msg.params.assign("XZYGIUXHGWLEHGLTRLETLRVJXAVZOFKNRPDSKJTKMPJFPHSQYAMTWEKZPWNTCCIOCKEWSNBYAQUDVHPVNDOCOIHDGCLUILTWPBIJTJTZQ");

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
    msg.setTimeStamp(0.864309934717);
    msg.setSource(41941U);
    msg.setSourceEntity(77U);
    msg.setDestination(57123U);
    msg.setDestinationEntity(110U);
    msg.cmd = 147U;
    msg.op = 91U;
    msg.plan_id.assign("SWPILHYAJQAHOHOFYBZEECYJIOGJLLDCKGVSHXZDZTLSDBVRQDBMUDEDPQWICROGNWJCNHTZSXGMRTDILYTVBWGNMOZQOMWVFNM");
    msg.params.assign("XQZMBRVNDGQFEVUKTCTORBDXQUJMJFAPAVSGYRSBNEDWZXXYBQNJCYKDCPGIFXEAUXSJRGJZLVPLSOJXXOIAMTUM");

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
    msg.setTimeStamp(0.0199197807843);
    msg.setSource(24265U);
    msg.setSourceEntity(254U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("GMHVOZDBTPOPXFFADBSPTLVILZOKLGIBVNTXRADFWGSZETC");
    msg.op = 34U;
    msg.lat = 0.502147550998;
    msg.lon = 0.84242205564;
    msg.height = 0.957548994845;
    msg.x = 0.5564701085;
    msg.y = 0.310872928289;
    msg.z = 0.256066462367;
    msg.phi = 0.702363840374;
    msg.theta = 0.798570248776;
    msg.psi = 0.250456206073;
    msg.vx = 0.26410206373;
    msg.vy = 0.0452656517088;
    msg.vz = 0.399965995584;
    msg.p = 0.953783339582;
    msg.q = 0.640116654259;
    msg.r = 0.976464722874;
    msg.svx = 0.815531173112;
    msg.svy = 0.550047052113;
    msg.svz = 0.0230765954357;

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
    msg.setTimeStamp(0.355308843563);
    msg.setSource(22357U);
    msg.setSourceEntity(24U);
    msg.setDestination(15684U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("RJGITRJDBXSEVZARURVTIHBCZDSNQMAYLMKBCXLHQCGDWPFMCEVORWYQLWWWJTDFZVAWVNYJGETDBFWYZKTESKBWYLYIFJIODOUTQLKXZSTFCRZMZUEXAILOXQGDKDEUNXQQNJOSFEKUAPXSFEOFMKPGRMNLMGCVZTPLUWI");
    msg.op = 45U;
    msg.lat = 0.208041721234;
    msg.lon = 0.602087675855;
    msg.height = 0.190914684805;
    msg.x = 0.58437971473;
    msg.y = 0.336814380976;
    msg.z = 0.65520371891;
    msg.phi = 0.816267910095;
    msg.theta = 0.0801106525749;
    msg.psi = 0.81482828604;
    msg.vx = 0.766090040046;
    msg.vy = 0.412718448826;
    msg.vz = 0.110546052906;
    msg.p = 0.470702983613;
    msg.q = 0.2036285336;
    msg.r = 0.998403079938;
    msg.svx = 0.670420031635;
    msg.svy = 0.204810362899;
    msg.svz = 0.841299836388;

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
    msg.setTimeStamp(0.826059713014);
    msg.setSource(17951U);
    msg.setSourceEntity(64U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(86U);
    msg.group_name.assign("VKIANAMLIZRZZPBGDZGWECIKSQMHJRJKCIFLCTNJXPQSRLKYWTXTLAGYTQGLINKELRFUWCCIYXJQUVBYNHPTYEVBKKDFIABUEDBVJGZOODDDUYPLHDKHBYFJDPAQLVLHCBJONPJPITXWGBQEWMOONAXWHSFIOVPPAEUEKUGVWMNLCAOCSVHBHRWZVYKFTRRMSRAGDMHMRNOJSZUMRUCXEIXEXEQXFSMWFQTTYZBOSHNZUSFZP");
    msg.op = 66U;
    msg.lat = 0.155193458308;
    msg.lon = 0.869054767544;
    msg.height = 0.198461632139;
    msg.x = 0.841632670187;
    msg.y = 0.743162423469;
    msg.z = 0.097927132359;
    msg.phi = 0.289661146427;
    msg.theta = 0.906003392211;
    msg.psi = 0.213086043809;
    msg.vx = 0.747907119812;
    msg.vy = 0.679965980332;
    msg.vz = 0.0898514933631;
    msg.p = 0.626569860339;
    msg.q = 0.291912880718;
    msg.r = 0.600830022924;
    msg.svx = 0.330680852545;
    msg.svy = 0.0761818913222;
    msg.svz = 0.0454342392199;

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
    msg.setTimeStamp(0.0313802139757);
    msg.setSource(48889U);
    msg.setSourceEntity(71U);
    msg.setDestination(48166U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("QOEYWVOOOZEFQDXKAWGFQZHNPZEPELERHSDWEYPCVAMZRHWAQRGRPVSOTUOJNZIUXTMFIPOPICTKXXSUJUQDDUFKUZJJBVNBGFPGQKFCVIBWBSLJLBYAKKRNLZDOPDQELGEMRSTNGNJBNIQXWTRUMMGGBHYH");
    msg.type = 234U;
    msg.properties = 159U;
    msg.durations.assign("YUPIYVKSFXQRHOENJUZDWLRYAMYMFVKGWYJAZNBEFBNMTTWVJNWEJJYZBOLUDEQTFVUOOYSFDQTFMXXXZPSEZKBRINLHQDGSRGAOBBLBCGGYQDGQTMZNPWEUOCIUEITOQNWBTFLYJPSFMMAPULGBLGKINKOAGAMRIDCARPVOVRJCHDSVPKXVHPLGDCDJHVROSMXFZNVZXHETARPSWJHESIPAQKXHCKQQKTWFIUHUZEABDMX");
    msg.distances.assign("HQPLVSOZJYLUKGMAIRFYHWCSFRUBHMDVPHAJWFQYFXGQVMTBFPFJONGTQLDOXTVBAJMKOZBYXGUINRAHEEGGNJDYKCICZNOSZROPZLIMRTCO");
    msg.actions.assign("GEGTAHYQJJBECFTIRCRIRVLCGJCLNGCUOTBDVKGZXXIGISQJ");
    msg.fuel.assign("HKFIYPGMQZTZKFTUESLUAXDOMKCLV");

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
    msg.setTimeStamp(0.805117547026);
    msg.setSource(18187U);
    msg.setSourceEntity(197U);
    msg.setDestination(61047U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("EMQNDKXVTCZZWDKLXRZHZFRYESKWXQXCIUZEGVEAPMGNJ");
    msg.type = 104U;
    msg.properties = 26U;
    msg.durations.assign("YZYRBSMESZDTVHEPPCZXFQXPZEGCQOXLTAUTOASWHUPISYFWEKXXCVTUUGWRV");
    msg.distances.assign("MHGBSBMZUQCVKMOZVOIKEZUVKKBSCGRDRZYRCYYAIYPELWEOEEZOGISAPQPFJJUJERGQBIDECHNWHXRZDPSXSBKILMYTTICNRMRPTWWSIJNNQMCMVLJQVWIGOPTTYAUXUKAQW");
    msg.actions.assign("FFCHWEFTYDGEAHYDQMBRXJQJMEWDXMPPJGZUIFPRXBYLSKJKAIEEMANMVNKMHVLGUSEZRKVOTLGFDJROYBVRXAG");
    msg.fuel.assign("LZHBPFPWJLCOYFXYONOBGSRWEYXTGZFGOLLIGAFUJYLZKQOBXGKINMDDPSCTDVMHFCADRKTEUHRHPNIHXSVUSJRKRMLGGQWWTNZNMDJZSDXTTOAQNYIAVU");

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
    msg.setTimeStamp(0.881737610031);
    msg.setSource(44294U);
    msg.setSourceEntity(228U);
    msg.setDestination(65144U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("VRPRZHBFEEPJUZGGGAVXFWPPJKRDCFFVZLLIWOPWYPUTJMJSIRBNUMTDANTXXQLONYQCRYCYNSDANPEWEVJWQCNFYXJWMSVOBCCXANOHGZMOIISJQMXYMFYHGLAWRZVJZQLWGUJPFSSQZLHTLWKMKLROEEBHNDQXDVUOMKOLUOVDIQIEOAQAUBIWHZKYTXSIRHEBHEKMURBKXVCCA");
    msg.type = 125U;
    msg.properties = 218U;
    msg.durations.assign("MHKECDPXLFJNQBZUIUOBDTQQKBWRMRWYLRALHBVMCDMLITAWSJTMUDQHKMAJBNRKWYQFMCDJCVUHJGPXVGJWESDYLHGXAAMVSEIYL");
    msg.distances.assign("ETBFTOSIHUSOCLIPJXOUETNOQEABYCZVTQTPSKSMGXLNKDFMXKSUHJZGZYVSZGFGRFHAQDODOMCMLXIVKPAUFFGYWGZRKGPKJAAIPCIRFZUSPKBGAVQBQAVIJYEVBIQEHUYJEDHJEDXWOHDHNLWVJMMCYCPUHAKVFUMDMNBSXTCTTCBLNJEAQMFTWGZPQLMDPSTXQREKFHOYLGNRJLWNUWV");
    msg.actions.assign("SYNLBBIVKJSDQJHHWATCIJYXONKETBLJSEZSFYVQHRCXXYYKUZEMQOGPQYIMXQETLCVROOHBOAAYIMROOZEMLVSFGGBVRIFGWBDPEFLBQANAKBMJZGPTTHACEFURWRNVLJVEQCTAIFEZXUFTKMUAZZWHHIUFZSHMKWJBKRXVPXDKMBFYOQKXKNVGEJLOWNPJQWNPGHTLTGVNSS");
    msg.fuel.assign("KYTCTEYDGQQADZSJVSYPYMCCJUSJTHSJAGOKSZIGPRXWL");

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
    msg.setTimeStamp(0.0857207463978);
    msg.setSource(40962U);
    msg.setSourceEntity(19U);
    msg.setDestination(47175U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.12944163869;
    msg.lon = 0.751677876582;
    msg.depth = 0.536509149046;
    msg.roll = 0.0611867705648;
    msg.pitch = 0.325778850215;
    msg.yaw = 0.919720411397;
    msg.rcp_time = 0.289755848905;
    msg.sid.assign("JCEKOGIRSGWYCBPWNKORDNVEUWQQNLMDSIYQOFJMLTEMLTBJBBUCXPYSXPHVIFZUOSRZNTNYEDVWGLBRCHHCEXXRAWRVPYIPVRPQHBWJXUNFZEVLPPZZGIVGDAZOKCDLTMGCKSBZVXWDISWVAFGGWKYNXJLPNCFOTKXUAIUABKEHASKVWJDHEKIAMDFFTJOHQHYUQQFRUMPELZRHASJGRSNCMBJDAFZMOYBOTYHINYQCMJUQMSKUDXTATZFT");
    msg.s_type = 129U;

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
    msg.setTimeStamp(0.81927848886);
    msg.setSource(9200U);
    msg.setSourceEntity(202U);
    msg.setDestination(2555U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.291050041769;
    msg.lon = 0.752564575765;
    msg.depth = 0.918428001585;
    msg.roll = 0.342143557644;
    msg.pitch = 0.675218934467;
    msg.yaw = 0.594859129249;
    msg.rcp_time = 0.341570002325;
    msg.sid.assign("PRTQZAICHOCAFXPXORFLQDPKTOHDFCCXQJBHNUQYSAOIDLYBMGHKMUORTDAGKSQDGBOYZRLZRFWWFSLNWWKWOIMSBXDGEMNJGNEFTXJKMPDCKYMU");
    msg.s_type = 133U;

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
    msg.setTimeStamp(0.687096900378);
    msg.setSource(12860U);
    msg.setSourceEntity(15U);
    msg.setDestination(25675U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.845751958017;
    msg.lon = 0.796938862106;
    msg.depth = 0.820349099096;
    msg.roll = 0.4950830495;
    msg.pitch = 0.0684828515117;
    msg.yaw = 0.281564186556;
    msg.rcp_time = 0.715700855627;
    msg.sid.assign("VNEKCDZVWKPQYALPOYHNDAARTLNLJVYFOFMEYMYXBRNXWUTYKAUGSWRRZSTBEHTSDOCJJIN");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.286272867183);
    msg.setSource(27685U);
    msg.setSourceEntity(232U);
    msg.setDestination(8581U);
    msg.setDestinationEntity(168U);
    msg.id.assign("CKPEAOWFELQAGJUYCDDRNZWSOHQFHTUCTIRPSSJBRCXZLNWMSNYOBDFMFPMVNRQLCSUWZZOFIVKVDQLKTLYYUEWRLPPSXHJRABKORLILGJDAVCUHBZYPPKDEMPWMQKBZDTUNTSNOSEXDKAEQMJAVEHXJYVGKIHAXCIOZCUMGAUXWMFIZRMDTUVBGZXZNAHGGJBOPIRAQVKT");
    msg.sensor_class.assign("QMSWRTQIBDBOCDFLWTIZXWKTZVLUHEJZIIZRBQNQXAEPXLVTHKCMNCENHIUBSBAVYLXYHSWKFRPQVNGOWSITUDXHDTFTGOYKOVZRHNDGRDFRGNDNPKYETCJHFSAPLCYSUBNMGODDLKBQISGJYERGUGECTZXYPMUWAVPFOEFMMASKNCZG");
    msg.lat = 0.455113976997;
    msg.lon = 0.948726615933;
    msg.alt = 0.133941871194;
    msg.heading = 0.173894546991;
    msg.data.assign("GLNXNSMRQMBOJVJQTNSKRSJTZHWSIBYPNODIQNFQAQRLLCRFOZMLCXEREYJUVJAITISHBQEYDVLKKDDWUVYIMMXEKEUGDCVVGEXACFPQZQBNPOFIEODRAVNFKXLWSULQLSHJSHEKBOZCRXOSOVJBSWGOGFMUHPMCMEGAGZDHYXGMMU");

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
    msg.setTimeStamp(0.611166225273);
    msg.setSource(20335U);
    msg.setSourceEntity(8U);
    msg.setDestination(615U);
    msg.setDestinationEntity(242U);
    msg.id.assign("NVVWIULTBQTZRJNGWSRIIZTSXZQGMIXQNTLWTHJXESBLZZXOCIOGOVOUOKIPDNGPPUCVFHQPNARDOVYMJEGHRWMSZKIALINJRKTXNKYWMGJMEWWIDFAJAYTEZSMFUBGGLYWEYJBWSKPXHALCOUVRRDOEADANBEZQPSVLHMCY");
    msg.sensor_class.assign("LPJWBXOQLQWHKKEFSAVQBHXDVWSURDHFEVHKZYBSWWSMWDMFMFQIQAJQKUBNXPKXJQYUYTOTPYXKBYONLIRJGTINZHBPGFFEAOMRGFSXUTAJHVIVZLGFOPXDMSMEXTRBUMDIMTHSPWWUAXVWVCRKADCACTCEDCGOUHYDAJZCCLENJPAZDOYPRBENSRIZMOEPLEWGHZLAUQJTKTIKZSMGZVHBKFNVYYEPFIIGN");
    msg.lat = 0.236796050496;
    msg.lon = 0.927467263291;
    msg.alt = 0.826324010681;
    msg.heading = 0.570233875283;
    msg.data.assign("WJNKBFEOAGUSBRLHPUJWKCRCIIEFIYMBXNQLNHCMLAYBVUWHOPUSSZCNYXBBOCDPDTUIKFGBZMRWSWUSEMRARQZRPHMAGBATFTLYPALCGYXCCZPOJYML");

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
    msg.setTimeStamp(0.655801530114);
    msg.setSource(36013U);
    msg.setSourceEntity(132U);
    msg.setDestination(6998U);
    msg.setDestinationEntity(46U);
    msg.id.assign("YWUQJJTQUHWQXRBHFBOVBXMJQYVPLWEIINBMSOJENVFTHYDXPGVYQTWMYLCWJSCKKLCQQVBVQXMYPDHONCUAHLUPLHVMLKFIBGNWYIDEBHEODIVKEUG");
    msg.sensor_class.assign("MICAKROSXSDTFRWFZSNPYCLOLRCLZXIIUWHYMASYIQDNEQBVBVXHNMKGVQEUBZZTYLKKBINEYBKCBMZJUEVYHDVTXTHRQNPUQRMQIOJSBHAJXKAAMVPVALNPHOLXGJFNUZPWOMRMTRUHXLUCDZZFBYJJFFDYP");
    msg.lat = 0.0758198063335;
    msg.lon = 0.411834746149;
    msg.alt = 0.906434160071;
    msg.heading = 0.234376530699;
    msg.data.assign("HIFMZNZQRQYJHHJFDLOTDDAJEWAGVOLHITESXTSJRLTESZPTTVPZGLYGFKKRKXOKOZVGWRPXYMXXDULPLTXGSUOSTSMDYRDFJBFBVPXENUWBAHKIMKQQNSRETIGABGARGGRIUKYZOCLDHQLEMXBNCCFTPFBHZNKEQWZNNOWFWVCHVSZQSOWAYDBJAEOMUPGVNFKV");

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
    msg.setTimeStamp(0.581083351493);
    msg.setSource(20885U);
    msg.setSourceEntity(181U);
    msg.setDestination(7694U);
    msg.setDestinationEntity(69U);
    msg.id.assign("ZOPQCWKRBBTCGNHRUPPLZWRKWVDEQIZIVEUVHWCLIFKNKPYNDRBVUJBJKWKULGJLFIWAXBTLEXONROXDSHUMMVUPTTDCSXMGAYYCNFDGUOWDRZOBQKYTVIUOYJHUINKTBBIZQNZMSGEVQVPXJHLAMIHYMEXOSGLETSXZYRCQSOFYOADYNVFNXMWSBCRTMHBM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EFKKATGPILDLXDQSBBWUVMOLAUSIGCCATRELXZRBZYFESNTHRSXPMQLMWNXLAOUMOIJDNAQFOCQELOOEEGUKVQUWKRWNYEYOBDZCUMMJAXHNCXJCMNDPVQOGHKTVCIKGFSWYVHQZRZRSEJZNSXKMTUGWSWSFTQJFVGYPXPYFIDVNKOJBEZRHRPBFQTSZPGFTRVZHLRVJACYPNOHVXUM");
    tmp_msg_0.feature_type = 96U;
    tmp_msg_0.rgb_red = 78U;
    tmp_msg_0.rgb_green = 251U;
    tmp_msg_0.rgb_blue = 233U;
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
    msg.setTimeStamp(0.59126430845);
    msg.setSource(9691U);
    msg.setSourceEntity(4U);
    msg.setDestination(50152U);
    msg.setDestinationEntity(156U);
    msg.id.assign("HJLVBNAQZIXIBIWYRVZUZYPHAYAZORPUXICGFHZDCYMATMWFKAXSCKLRWHRWFGVNLTTFNSUZJOUOBLIMEPMNQYGTSEGYCJEPBVADCXILMBFTQJLQYVNWWPEMGSQDGLRQIFCMXPNQOSKPSCZODXKJGWGMPTFKORRBCVVHYFRFZPDNDAEHBRKHWAVOKQIZGDTWQKIMKJXOTUYDUGWYHSNUEOJVMUZTHVSCDDAEBKLQJTPOSRSBBEIEA");

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
    msg.setTimeStamp(0.407919843138);
    msg.setSource(51791U);
    msg.setSourceEntity(89U);
    msg.setDestination(8424U);
    msg.setDestinationEntity(193U);
    msg.id.assign("JJHPRUOUNDSYMBWQAFFODOKGMOSAQPNXHWHNOYTTRCEKEEGIKVAGYZFKHUNIHCUYJBXBLVBNWRQJOWYPOBFYEKWGZXQDIELGCMLNKWQZIETVLKAZCQCXQHMLDLYAETSAUIPMSSXXMYRLKKFDVZRUZNCSOGCUDJBFPEFZXABVPARCJZVTDRRFHWEVEQDBIUZNQXSPRTIFUMAYMDTLSVIJTIPTLJGIDJPS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CLPMLZHDFCXJOXEXETFDZAFIQDGYTPCYWZDAPLAMJZDGEFIFMSLYYEKVJBCGSUUGWAMPORUTXZRSNDFMXTHAQTBJKVCWKCUQPSVURFXAXEKWDFVRWIQITOTPDNBUPGNIKWSKCZMNGMXRKRFWQBGBQLJHHOIYLEBNZURKGMHPYEZZYHNTIOLVFMCSIJVY");
    tmp_msg_0.feature_type = 78U;
    tmp_msg_0.rgb_red = 183U;
    tmp_msg_0.rgb_green = 217U;
    tmp_msg_0.rgb_blue = 168U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.982600125402;
    tmp_tmp_msg_0_0.lon = 0.752679456894;
    tmp_tmp_msg_0_0.alt = 0.535265452442;
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
    msg.setTimeStamp(0.32466025573);
    msg.setSource(12244U);
    msg.setSourceEntity(254U);
    msg.setDestination(3569U);
    msg.setDestinationEntity(70U);
    msg.id.assign("UDHEBQXEZHQQQLSCMKJFPJKLEDFGJAAWQILRSUFTGZAZMFIJINAOYDUIKRNOYGWVJGXLRPDBXMPBRCYILOHHDPYMGRDIFPZBNNNYZSUSMSVBAANGRCCZTZNUQKTGCGORXMPM");
    msg.feature_type = 242U;
    msg.rgb_red = 100U;
    msg.rgb_green = 170U;
    msg.rgb_blue = 193U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.746200946092;
    tmp_msg_0.lon = 0.0939145449426;
    tmp_msg_0.alt = 0.777254972482;
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
    msg.setTimeStamp(0.973315604152);
    msg.setSource(5059U);
    msg.setSourceEntity(92U);
    msg.setDestination(41115U);
    msg.setDestinationEntity(79U);
    msg.id.assign("JMXUVCPGINQLERCOSONTUMLTLRERHNVTSKWWNWRZXUOCQJEKMIXXJJWOBNKELJWLAYFBJQBICBQCRYSVJGHOSYKIQQKEFDPYLDP");
    msg.feature_type = 0U;
    msg.rgb_red = 189U;
    msg.rgb_green = 109U;
    msg.rgb_blue = 23U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.815150809685;
    tmp_msg_0.lon = 0.167173091868;
    tmp_msg_0.alt = 0.939978328727;
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
    msg.setTimeStamp(0.790975235778);
    msg.setSource(55281U);
    msg.setSourceEntity(27U);
    msg.setDestination(1165U);
    msg.setDestinationEntity(73U);
    msg.id.assign("LSKDAYPGDBEAYLYCOZTJMEKPWAPJXEASBQCDCNAVQTWXUGMORLLNJKLRZXMOIHRTSGPQUNEWVQTSURUKQPBYVUCUKWVFQPGHGWRVXBHZLHEDLNCCJRNCEVUGQDKVZNVRKFHSNITBDOBMMOWNUZMJOJECZTXLIRBXSIYAHTHJS");
    msg.feature_type = 253U;
    msg.rgb_red = 2U;
    msg.rgb_green = 54U;
    msg.rgb_blue = 18U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0305754729343;
    tmp_msg_0.lon = 0.833246954616;
    tmp_msg_0.alt = 0.704658186668;
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
    msg.setTimeStamp(0.141058032347);
    msg.setSource(45155U);
    msg.setSourceEntity(224U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.958690953707;
    msg.lon = 0.376942570209;
    msg.alt = 0.0374434783782;

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
    msg.setTimeStamp(0.488472895337);
    msg.setSource(60885U);
    msg.setSourceEntity(107U);
    msg.setDestination(42485U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.0872262174167;
    msg.lon = 0.829491099881;
    msg.alt = 0.239729288739;

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
    msg.setTimeStamp(0.924554448011);
    msg.setSource(37029U);
    msg.setSourceEntity(179U);
    msg.setDestination(38737U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.221907669311;
    msg.lon = 0.578036983621;
    msg.alt = 0.43242922011;

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
    msg.setTimeStamp(0.652795448837);
    msg.setSource(2571U);
    msg.setSourceEntity(24U);
    msg.setDestination(40684U);
    msg.setDestinationEntity(51U);
    msg.type = 124U;
    msg.id.assign("PTWWTZQWNVQHMDSRUOPZONUQQZZRGXFXNMKLEFVPIZGEYAQMYWSSZMEO");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 14288U;
    tmp_msg_0.lat = 0.821340114665;
    tmp_msg_0.lon = 0.249618761791;
    tmp_msg_0.z_units = 119U;
    tmp_msg_0.z = 0.494245541439;
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
    msg.setTimeStamp(0.313606565092);
    msg.setSource(38846U);
    msg.setSourceEntity(231U);
    msg.setDestination(22373U);
    msg.setDestinationEntity(228U);
    msg.type = 187U;
    msg.id.assign("ZWHDAVJHBUMHPXWNKEIFEFDTACPDALPSQQTRRBGFZEZLLVYVMKZBKPGXIZYUDHBISQORJCFVOUVEESKXOLONFOTCUGKPHHAHXCIMMQYJDTNRTNNAHLXYFONZPYBXDMSAVDGJDFITOSHEYOPSWJSQCWZKSJUBUQKOQQBGJTYCWTGYFLITTZQRAANMMYIDRWWXZZMLGBKUSFQGEJLPDEHWEA");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CUXVVCUKRDYYZUMJZKTDDOYLSJKHNRBASAIFULIBQQGBRWWXHQZOFGALNWSZRECQGIGLGWELXAULTCNVBRBFXKXHSWEUNFFSJONSEJCELJLKXIQTYPVJQBQQCEPMPPXUVSMFRVJDJNJFTUMPEKRFOAPAZJSGIHMADVFRGMNYCQIZLOTIFM");
    tmp_msg_0.description.assign("RZBFDGMSDFVGLFERBQXPITBJMPHUBUDRXWUCFJSSOJADXFOAKCBUUALMRGNMCSPPVN");
    tmp_msg_0.vnamespace.assign("YZFANCPVAFNOBFEYEDHBXSRASYBHCNENVEAMWDPTVGHKRXXUGVGDEIQQSDJAQWLMGIGZIAUXUNMHHTYAKWIWQOFCKGJWMTPSJZCBLMJUZYFKVLUKHBRRDSGCDPQZSWYBPGLKJGSNODPTOODYISIUTRRMJLYWJURHAQWVEJFXDPAOCXWYUCFEHFOKUIRAVMNLTELKHPQBEMCRNZYCNBZOVMKVLOFOTGINXZTKTPHTQBXJCMREJZDQPUZWLLXXQ");
    tmp_msg_0.start_man_id.assign("LXMUTADIYEPOVNIFTLZQHUXQTOCAWAZBJBCERAVGCZAKREFYYKMWGMDCMNEOPDJEHIZYFURLCXSRUFYWVTCBIQFRLKXFUWCQEYXOVNZBAGQHSDOCNJSOUAAMWDGGBWTTIGMFCGBKUDAOZPQUTYRRVTDNWYLOGKJSGKBLHEPJXLSCVOFESWQWZRMKXVIVDHQTLEKZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BGMUNUAHRXVMUIAWKYKQBHWIYGXPJTQFJUZXWTOWAHCUJKSFIEVHMVHXBTVPPBSFUZSDONQRLIVAKHXMUOSLGWGENEKNLOQVPDCIOVXBAOQEFLJIQWUZYKPAIFSDJHLVNCYDOKCNETEJCRMYTSLNDWRGYKUFX");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.471722636688;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.454561422299;
    tmp_tmp_tmp_msg_0_0_0.z = 0.111794512067;
    tmp_tmp_tmp_msg_0_0_0.z_units = 132U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.984347287271;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 198U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.28379564865;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.964127261402;
    tmp_tmp_tmp_msg_0_0_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GRJOGAFPUGSBFWBNXQJLXGDZITUJCDJLWXWUNRBTIPUPPLTRHXMVULTKZDLVFADIQFMNTAKYDUMXJALNWYQCSGLLYTWDMBKQRCYUFFURNTXNBVVADEEZRGOCBELPCWFVHQAJVEHXUIRCIKBISOGKKOVWQMZYCTIHPUSHYSRCKXWRMVTSNASJNCWEEKFBZNQOKQHDPYVODTAIHMLOYEHMDWGYHFPPXSZIRVGJFAEHOBZSIZQMKQNYAMBJOS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WFJQVBNXEFHIMUFOTLYIEKBHZCCWZTULUKOXQNVCPRMXHKMBSRZQYOVYWAXCZPDWIFZFTPYTYJLISIKTDUAJRTAYSLJULGMCMQZHMQXEGCJEESONVFXWHWGOUVIKGSCEPBQAOBDDDRNSRHWDEYLKZGKFJDMSKYSEJRZ");
    tmp_tmp_msg_0_1.dest_man.assign("BEDPFHVHGAZIGWSZXCLCYIWSLMKNXHYTUOPBIYGNQRGUTNRFWVLSUMCDOCKQROAHEFPBBSHAUOWJQPJUMWVTZYJAYKMLEKRDXNSPYPSBGWUJHWEKCLSPUWCJUCIERLVNDVCKFVZEFITMRELZOPLADFTJDEBGBSOVCKXUZKGYMHGLXCAMOZSNXLZJWKMJTTQKBZJNMZHXADHQFYJXXURNTARF");
    tmp_tmp_msg_0_1.conditions.assign("PKPIMRUYAFWEHFLNKQYJTZHWFBOLXSFXMUARJGFFLRVQESDMSDSINPRFSZKLCKDDDKYHULONQWCCJTUBJHPCAUNXBQISRKOITJHDZYEVBZWVVNITXWYGVMETSGTAGYWXOYFCECV");
    IMC::SoiCommand tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 125U;
    tmp_tmp_tmp_msg_0_1_0.command = 195U;
    tmp_tmp_tmp_msg_0_1_0.settings.assign("WDSRWMIVPHRDRZWEOGNGKLLG");
    IMC::SoiPlan tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.plan_id = 3724U;
    tmp_tmp_tmp_msg_0_1_0.plan.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.info.assign("VHHUMIOFABQJIQEHXQZJHUSMUWYO");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UASimulation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 76U;
    tmp_tmp_msg_0_2.speed = 61725U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {-38, -75, -105, 77, 17, 126, 32, -9, 39, 19, -81, 50, 43, 2, 117, 49, -58, -12, 120, -31};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::ProfileSample tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.depth = 62292U;
    tmp_tmp_msg_0_3.avg = 0.67318791219;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.934060245673);
    msg.setSource(37989U);
    msg.setSourceEntity(244U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(70U);
    msg.type = 230U;
    msg.id.assign("YOXTGESUVYWQKZHFLZWUGTODVNLXBTFFDQMNFYIFYNWLJJEKSOHRNSCDDRBYFEQAQZVACKSWA");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 5U;
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
    msg.setTimeStamp(0.273255386103);
    msg.setSource(4666U);
    msg.setSourceEntity(53U);
    msg.setDestination(32638U);
    msg.setDestinationEntity(5U);
    msg.localname.assign("FEIOJEVPWZXJEQ");

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
    msg.setTimeStamp(0.99219779881);
    msg.setSource(53146U);
    msg.setSourceEntity(150U);
    msg.setDestination(7546U);
    msg.setDestinationEntity(66U);
    msg.localname.assign("WCPGMRTJDAHBQFETGPDFPJLGGDIIFNILUYMSMUEBEQDDFWVNXJBQTPZLWMLCLQPRXRUBKAOTHZVEOFMCZHUYDTZYGJOTZXLNTARQRVKERLWDSJKIGCSYOUBVQKQRNXMUTXGSXTKVBOJKJRXWGYVVEIIFIHZSMEMMUQPZYHSWNRDSAPXKLOQVUCAVACEBOIKYCWGYMHBVCAONHSA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IPAQTPAYZMRDRQSKULUWEOVNGTBYYATCSOCZFEQKRWNKIBJYOANAQEHIPSJFUXWHHHQHQEDJQYBHUDSXZFXBRSOCHUBAVVVNATZDNMWWRGUCZJQYZOGDDWYJSRJETKCUKOIRGJMMROMGIUFMGUTDVLXXQEMWFPRBGOFBPDLJKLVVBKSKGCOINQ");
    tmp_msg_0.sys_type = 212U;
    tmp_msg_0.owner = 57985U;
    tmp_msg_0.lat = 0.29644127033;
    tmp_msg_0.lon = 0.259933352556;
    tmp_msg_0.height = 0.0799273274953;
    tmp_msg_0.services.assign("GRCBWDLYEEZDHHWNMEVYOQTQKRBTHNIUPDYBKINBVQVGAOZMFXIQSKFEHCIPDFLBAZSZSHMPNBQKPKETOJDSLJLUGMVHKPYNCOGFLEOUGZKEPHMSKNQTCIORGLMMSYIUFWXYRATJDQBFXWZCDRSJOPCCHEOJUMSVXQSSWZLCKFIFLV");
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
    msg.setTimeStamp(0.0905401534976);
    msg.setSource(12831U);
    msg.setSourceEntity(10U);
    msg.setDestination(45022U);
    msg.setDestinationEntity(204U);
    msg.localname.assign("VCWCHLVIJFEVRBUVAQZIUVBUROAEJEHDTZFWVQMXWNVJEKJOPBKBSKHPCTSSIPFXFHPMUGYJZGBFAMYNYANYDFMYMFMLUPTSIOIHMQXLWQPHHPZZQUXOCEWQEIKMCCJZNJDLKTASDRGGRTLLCESNNHARDEMUAEJFCGAQGVXRDGDSWPKBATEIUNDOYBLUYSNQYGBAOQXJPODBKZRKVUKSXWZOOTISIOJYRDMCWXHBTQC");

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
    msg.setTimeStamp(0.923472991276);
    msg.setSource(26416U);
    msg.setSourceEntity(38U);
    msg.setDestination(57693U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("ONAUSGHXTDZBJGAAYBUZXTLCYNIXKFPNHUBHTDSSJRPUFDRHCHWPJRBJVPNAIFCVYZKWHNMKUMTJRYZLLIXWKIZGVPESXZSFIIMVJNUHFSLXWRWFRBBLXDYZFJLJQMGALOCRBRQEWONHKLCGQZAMOAQPVQIYWVVMPASKFZWSOCGRDXNVGAHYCDPQDBJRQOTVCFEFELGETEOPDIWEUUJDXECEYIOMYMM");
    msg.predicate.assign("NDMBNPHMRGYRBHPTBGCQVKEDYXTPOLUCEEYCDFJIINAQJSNZZVWJKATBNDUTVTLIIONSHWDFGAWMSNBTSPCTXCHREBDHQEHUFZKHDADXRUXMVAXLUNZFLBRZKF");
    msg.attributes.assign("FJKVSUFAIIUWBWWNXOVPURCVTEICPZVXNVBOONHZFTLFLGSCYUIJAQTEJSHUYRSQMTFJMJTZKTQDDDRXRHRVU");

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
    msg.setTimeStamp(0.864321212659);
    msg.setSource(41074U);
    msg.setSourceEntity(146U);
    msg.setDestination(14868U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("JGBFVBJXKAUBFRYFYGLKMRAUTYUKJGGTEMEPYNVKVGLYFWVXEMCTTIAFISMFHGTTYZWHNNZQIDAZYXIZOLUTRLOWDSRLURSEPDNZBPMUVWKAOGTLYBHSELZDHRLNWIIROIBJVHPENFXJFCWQDPTWZSMAPEBCCJQWSCROJEPIQOBROSQQSMKOFMUUXNCBNWMDHPCTKUQGWONVKLQJ");
    msg.predicate.assign("MUVHBWLLZSIZTGPGPHKSQQXNDTNYIJDZMGYJWJAKGITYNBARTSMEBHXCXJRTJVODMLELSCWLFPSE");
    msg.attributes.assign("JLRFGUIUWSIBADRGOPYMJFWZMTBEYAMFQNFCETFKPGLCZEXMORACNWLIPFQXUWDRFLBQKTRXBLSJVTJGHIMJBEKWEHKYLBVZLSIRQRSXUXAZOADQFGMZPNNVUHYIVEVHGSMADHCBRW");

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
    msg.setTimeStamp(0.539248283609);
    msg.setSource(20817U);
    msg.setSourceEntity(186U);
    msg.setDestination(44341U);
    msg.setDestinationEntity(103U);
    msg.timeline.assign("HIUPVGZYCYHBCOEPDLENCVUSVMNEGARNADHDIYYYAZFWGTEBKADMKFROIJZIYKPZLRZLRFOOZLNVSRMTSWANHBIFYPOUXBGYAVMBPEHMFJPPSLOWBQBWTUCOJTXHFQTORAXEIQGHBZMDEDKFPDQDTC");
    msg.predicate.assign("FNJNTOSWSNZDXUVAFBLUQLDXKFJMIEQWG");
    msg.attributes.assign("VRBWFBLNFLVWTVBYZMKMUDGGPUYHAVQYAUAAOKQKGEDHPHYXXBQDTJTSGDYKUTOLIJNEEMOGPQFURULIJ");

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
    msg.setTimeStamp(0.505418992571);
    msg.setSource(37074U);
    msg.setSourceEntity(174U);
    msg.setDestination(37812U);
    msg.setDestinationEntity(164U);
    msg.command = 231U;
    msg.goal_id.assign("VXYHZWTJZVUPPJEMVQHOPOGUJRHINVILPEPGHIOWDJIAPTMLPPAVQVPTQTFQBNIXSTGOLURFURCWUFDEWAAFNRECBUSMDGJJMUGSSLTYCQVGRABYBASNZQMFZWSXYSJBELOHUWOEMAXKOOHFHJDGJXIIQNKZBYXRSPELM");
    msg.goal_xml.assign("DVKQGIWYHUMOBNHEGUNQQVDHGWSFPTFYKPFXZNFZIRZNVQCURSJDLMTAYUFPSDJGTNWZIOQEXFAKFYGHSJBVSVHPELJYVGPXAIZRMWPNQXOHIBKCCCTDRQIRITKMMAJPYLUACKFRHUWYXYXSPEOKJCPKMGNDELYAGKBGTNLUBMIMEOBJVXRSB");

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
    msg.setTimeStamp(0.988412982499);
    msg.setSource(13673U);
    msg.setSourceEntity(221U);
    msg.setDestination(31204U);
    msg.setDestinationEntity(132U);
    msg.command = 242U;
    msg.goal_id.assign("AFNIGPCLECPQZSGRUMTVYOLXEGJEYURXOVHCARXLIILKOAFIAYHBQYATICITDK");
    msg.goal_xml.assign("XKNOVJOHZCCQMZFUHHCHZCRLZRBYIVOSYUWFBTWKFHWXDGSTDHTXCMNHTFIXIRUGAMZZAFFKXOTIIKQEKPHPQGSLHNJVSWBPIZGEDSUCGMYPCUPQJFDEYGVMTATEJZYIFVDCENBNAIBINWDYJMWJLDKENXYOTLXYDALANNXQYEPQORLVKTPXWZMJYKZNBKLVVOFRC");

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
    msg.setTimeStamp(0.719204055271);
    msg.setSource(19007U);
    msg.setSourceEntity(33U);
    msg.setDestination(7474U);
    msg.setDestinationEntity(120U);
    msg.command = 222U;
    msg.goal_id.assign("QEWUJXFOTSSZDWNCHVWNBJILBHITSWEGSQCOOPUJVULCMSNANADBHGKJGSLZVCYOLLIQHGRGWKTOYVQYASMKFINLKPXROZDIFXZEZJMNDAXXCZPUXKAUHVYFHXSWQMWXZOAFNDFUDV");
    msg.goal_xml.assign("IYLXMAQBWMXDLXDWTRERJXFUMZZIHGJPCLFCGCCPUVPJKVVAHXRUGLO");

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
    msg.setTimeStamp(0.239703533897);
    msg.setSource(24496U);
    msg.setSourceEntity(208U);
    msg.setDestination(63517U);
    msg.setDestinationEntity(94U);
    msg.op = 161U;
    msg.goal_id.assign("MTZCROUILYXZGAEUSXYJNFGOBVPECZOKNJXVGSRQIIWIQDEVCWOTAONYMLXPTLNQADRMBPFWLEDOTFFHBQNTEABUUWGQMFJTHSHLTWGQRUJLOVISCBLNPUXWAEGYDHOKUIGGMSQIZXCXHDGJYCPCPJUVDBNXASJMSZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EOJTWTJBDAHKVDGEOZTXMRUNCMSVGWDMXFUQNPRXQSIUCIFLSWHCQEKOGLFNUYNAALQJPQHXTLJPNZQUEVUAIANWRCDHDDVMRNCNUZNGWMKIKXUHQOTKFSGADBXPRMZAPLRJHBYBYRYOJLALIMVJKSSTKIEL");
    tmp_msg_0.predicate.assign("RJRTRLWZPIJOONQDPTPKAFUSDLQMQBPEGMTOXEQUVFQQMLAGZHWFAODUMWIKKJZCMMIEVKBKRMFZJIXEGSAZICRXVUPYOBRW");
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
    msg.setTimeStamp(0.428964443634);
    msg.setSource(36747U);
    msg.setSourceEntity(209U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(204U);
    msg.op = 9U;
    msg.goal_id.assign("YGYKRQLKEWLEJFQQTWLXMNRRWTQCYAPACMORTHRKIYGEMMQDRAUYKTKOZIHZOEIZGDEDUNKBBJXFOBEBAHFNNXEDSYJNFJMVAPYWTPDBFICTMWZRPBDPKRSCFSQUUSGFSTBEIMWNIHEYCJYIWSOLIXPVJUJXZQTJXRHCCVVAGVMLKCZGCWGUHBQXXZALEFSGILHHMOAIVTPHKCRLQKDNZXHXOVUDN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TSCVTCQNCXHWBLLNSTVVDFMMKGHUDOMJYLIEDSHRXZSTJJNMQXABBVTACJXGUYMKETNLNQFJDVMQRNWPWHQXGEVMENROHIFLRFUKWPDYIGZCRWPNIPPEYLCYDWDQMOOBFQOXHOEHKOYTEFGQABHSMLNASQFAUZHHYTSYXLGKGUJWACRPKZEDKIKIWBRUBPDTAEBSZIBJQWERZTAKUSXCO");
    tmp_msg_0.predicate.assign("KZNCESXMFZJRVTMDYSXRIEGDJFAGIRYENKUBSQQLVQINKPXJLLYMRRMNHCOJLBOJYTWTWQRQU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZWEEWZLFFEIBVOUUOORDGMTUNHUBJFYUGIJXLBCXYQVRLYPYEDKVPXGWPBZGHWNPCWWWPNZQODRJBMHVD");
    tmp_tmp_msg_0_0.attr_type = 138U;
    tmp_tmp_msg_0_0.min.assign("GSVXZWDSVAPPENFAGIZYFPBJAGIXYTEQWLXJJRCKY");
    tmp_tmp_msg_0_0.max.assign("SGQTPBGJJVHHCGWXABKSDUYTQEDWAFNNYIIBILFTZPOWKYRSRSMKADROGEDYFVULOCQARGJCXHOXVKSEZAOHVMFWBVKUMQTTYTJKRFULNQJQVKWSELJJSO");
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
    msg.setTimeStamp(0.463567766878);
    msg.setSource(61862U);
    msg.setSourceEntity(240U);
    msg.setDestination(46041U);
    msg.setDestinationEntity(233U);
    msg.op = 60U;
    msg.goal_id.assign("MZRABZLAYNQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HJNASKBQHOKXNLHNCXJROYECYVGNHSXPYMZEVMJWDZFVTBTTVXUBAETFOPAWLKHSPMKNLZNQBOSIHCOYUXCIJEPPDMIADLISZKCVGDFMMRFQSQGXFNBTQJFWOZLVXDLPRRLTHYRPBDRKLZDDIGUCGEKRFYPBGVSMFAMQUYABILREVSDJFCBAIUBTWPEUTXUKEIJEHXNSNWZLZWCQYHQUAGIRKDXAWCOGYNJIJCKTQRWZHVGYJSAUF");
    tmp_msg_0.predicate.assign("HMWZHERCFUOQDITFTXPCVPXENRDXTLOSNISXOKEDVSXYBYGBEZ");
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
    msg.setTimeStamp(0.170413991836);
    msg.setSource(40521U);
    msg.setSourceEntity(118U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(45U);
    msg.name.assign("CTQYOZTPBUUELHKZFNTLDHTHYMXUIXMAOTYPFRFQPTSURLFXOFAPBPDIQAXZJUHLKAHZSXZDJTLHAECVQGSDALRQMU");
    msg.attr_type = 210U;
    msg.min.assign("OKMHNMJNSZUQTOSDNBGUXMXIDBGRVAQIDQZKSYWMWXEMQRPGNYOHCRFSPP");
    msg.max.assign("XQCFIHJPMGEFSUGJEVAPMJYBLTT");

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
    msg.setTimeStamp(0.372788712629);
    msg.setSource(63465U);
    msg.setSourceEntity(254U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(74U);
    msg.name.assign("KERGBNBMYUHBOMFWQOAYJARYRZSQNKYTQYEOQAIDLCIAZZFXCKHUIDOGEADVVNEYZCADUWFPGKPOXJJWXBHEXGIXULVPSUHMGJJIBJDRZOQMTETPEQYLVHFNPKLI");
    msg.attr_type = 88U;
    msg.min.assign("GOSYYFEAGIQGXSFPYUGROFUTRJXUTBCULZSHMOEJFEIZFDDLAWQABDNHOXZQHXLIMQMOUJRTFCWVFDIZRZJNXOVQLPLDGDGCEZZBYWXCRHKN");
    msg.max.assign("PJKZUIJTSIUCUSLWEHXFXJQTFQPCQVOXJPPAGDCTRNGIOPCYLXRZLFIMZHLGOQPHBKWVCNPKURNQANFALOQEHTTBRYEQVXELYYATOZUKHIRWDHABTUQQBZKKDVJSSAJFGVUBANWWSEKYDSCUIIHGBFXHOHCCNWJFNODRYQMVSZMRKWBGYFZMIWJBMBEDRGVSENOVAMMTEEVXMXMFUOJRZKXBLGZLZAAYDNIYOGPRVFDUMTLSNPYWTKG");

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
    msg.setTimeStamp(0.137642882039);
    msg.setSource(7169U);
    msg.setSourceEntity(77U);
    msg.setDestination(58527U);
    msg.setDestinationEntity(43U);
    msg.name.assign("ZYGHHDBMVBJALBOTYFNMDWUEWZSVKSSWJUWXFXERWMFSYZDZOULOZNIIGPIYEJAGJFCEDGAKOVBFTPQQYOMRXPHRGALINWCUFUQWANNGLOXIBKKMQZAUQI");
    msg.attr_type = 83U;
    msg.min.assign("TMHSFCYRZHREEJPBLFZHUADNXZVVSWBVZGQIDBYWPMADTQRTSFPVXWNEJNWNXWFLKJNLZXCPXBPUGLFBXIRNTXKSKOEKMVRCQJVTGUTPNUGJGUCCIHYOAGDOQZACPBQRAHHOBSIRIHHNEUM");
    msg.max.assign("XPNMXAFWDKLLYXZJTSGLDODIAX");

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
    msg.setTimeStamp(0.349958599309);
    msg.setSource(53736U);
    msg.setSourceEntity(205U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("FHYUCNYXZDBEMEGKYYBUUWJUECZCLONLKAWEEJCZRNMIJTVURRCHWTKABEORMSUBOEDMMPTUAIOWDVJHOJTAMMIFUBCSCYEBPXSXDLFAFLJQPPVAVQNZAWGXVJVPYTSVQKXJDYKEADIHFXDONZWIGSKTCPXFKDNDBIMMIILKHQHLCYARUIWXZRFNHNSTOYSLFQJNGZLBGPDSQPTEKNHRGCAMZRGY");
    msg.predicate.assign("JMFRDSZCIZIWSUZOYJVZVHWYGXCIMRWBJABXHCWZEEGEIABJGDOPUYLOJJSBQCBQPIHVQXLRVRDFBHOHOQMYHUFOTYEYSGCDTJFJGOLQOXTVBAKQEDDHFCRIUZTYWGWCGRBJNPXXNLSMKNXTS");

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
    msg.setTimeStamp(0.593619697225);
    msg.setSource(8722U);
    msg.setSourceEntity(237U);
    msg.setDestination(11060U);
    msg.setDestinationEntity(53U);
    msg.timeline.assign("FXAWDKJQJXPXAPGAFXHJONIKKDZHICMIXRSLLTLGDYWIXBZGUFZIAALT");
    msg.predicate.assign("UMVOQNTULYKAPCADPRBKJOMNIBDLPERLIGUHTTJXWLKGIZDAAZZSYSCJWKYOFVRKUVTGOABFWEYWX");

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
    msg.setTimeStamp(0.547797954003);
    msg.setSource(24052U);
    msg.setSourceEntity(228U);
    msg.setDestination(20828U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("RSSXNYEWYGQMMRYAL");
    msg.predicate.assign("YJSJZNGDDLKSBIKHXLXPQCZPKPFMMLJEZOOFHRNGNBUXQOZMQOFAVDWAWMCD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TCFHLVYKOHBPERVGEFRYESVLOCGWPXRLJJYUFNQRYMENQQQBFGTUMCGGNMCBWKJTAOKEBZPSENMHLVWPMUJJLNUWMIGFQTFTCZNZIXXCHHKSOCAFMYIPFNWVSVNSEUBWDNKBDRWEYQMQXPGTZLLOZNDGQZJDUOYAHKOIVJHGUKIDAYTZHBEVUAPJLOAWGKSVWOKDR");
    tmp_msg_0.attr_type = 89U;
    tmp_msg_0.min.assign("QBEVQDKXZBMDQOSIORGYGNUHATAXZKPJUFTXJLQUOPLPKFDIMXSGJHOVSUEMLKLSDQGGQUECTDBJMBLSVXVNCTEMTZWBOPYCIMZDJHJXSCV");
    tmp_msg_0.max.assign("DBQJZIQMFMRLKMZVZMDGEWUXKLMSXVHAUFJVFKCFYYJEOURZZUWAFPIWRWTNXXTCQOIMXOXEJEANPTDAXSEBCGIRIOQXHLZJCYUYYZVDRZHYTGOPWOGNHOY");
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
    msg.setTimeStamp(0.620576513201);
    msg.setSource(61474U);
    msg.setSourceEntity(72U);
    msg.setDestination(18365U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("CSXQMMRJDCSCUREKKGWDKITDIMSPTUKORKASETRNPUSBNYXBTDVELZCGUNGU");

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
    msg.setTimeStamp(0.691607731929);
    msg.setSource(27494U);
    msg.setSourceEntity(116U);
    msg.setDestination(53626U);
    msg.setDestinationEntity(212U);
    msg.reactor.assign("WGSJISGTWUCLYMMWHNUIGHDLYDEUQMQZWBGLJVCXQRBVOFRTHCLIKAUQFBPANAWTBAFJRISOTQABCPYEAPXNYHIMRZTVBTDEZEFHSXSPGKVQAKDNEEFTXLMNHYOVB");

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
    msg.setTimeStamp(0.0996716672127);
    msg.setSource(45943U);
    msg.setSourceEntity(145U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(89U);
    msg.reactor.assign("JJGGRFWKBHPSDZAMTJDUSPWUUZXEFNWTXREYFFOMAVFONKBOYAJUWUNYOPHKUHPSRKTJREWUNOCQEMZLCWZMEX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OEOMHJJKGALFIYGHQALBGRVBUJJEVPUJYWDMQBIAOKVKZBRRGPHMXPUBQXYJLLMEFXEKVUTXIPLNXGSZHCHJDFXMFVU");
    tmp_msg_0.predicate.assign("KWSPXSSEWVZEHTYCUWFUXQDWCJVLTTFYPINRIBAFLOPCICSECYOGTVINIXXDUGTQJRHAUSLONWLKKVWFFQTMEVMITNVANGNUOTDPNWJZRVFPYBGZSJCZEDSOAZHHMQJDHAOKMDPMONEXXQHBUDIYBWALEAKYULLUMJCOHLOGAFFWZIRFBIRRVBPRDMXTZJZBQGZDVYJR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HCXPJSDSGGUTDNAEOWSMPPWMAMPBNOYORAVJTSKWJIHEBNKHFVFYANSYFZLYQTQMVGYFHKFQCZCFSDUDACQBXZ");
    tmp_tmp_msg_0_0.attr_type = 91U;
    tmp_tmp_msg_0_0.min.assign("XRYOWMKVRYFNJVGOEWZPPGIYFHGQDQNISAVNBTDYMZRGWQDDBBGQMRBKYSPVXPXLWSDMZETMLEEIAVVQAESBHCIHTLMCWKCZSLULJIWPFINYJGFCKPVIKXOZNHGTDMFFRGVLTAUMPGSVEKNESACMJXYNXBLUBEXQULAJHUQOOTCTWKWZNBKUEOMANHAIUHDQIPYNOVRZXCFYUJKUKSI");
    tmp_tmp_msg_0_0.max.assign("NQGKTOPOJRFHWBVVMMVOCOOEXEQKUKLYPSXKKCENIJNPHNUQ");
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
    msg.setTimeStamp(0.232074113391);
    msg.setSource(13240U);
    msg.setSourceEntity(150U);
    msg.setDestination(32499U);
    msg.setDestinationEntity(20U);
    msg.topic.assign("MEHBFORPONKVVUNVZPXXSMCXJACZINAHNXGYPRDZFRTODRWSEQJKEEAPUUPCKHK");
    msg.data.assign("CFYQBICPUBUWMGEEHUUNVZQATPYYOHONJVEIIJMMBILXIHSTBLKZZRSQDPQKGPXAAZKFFQJOVBCZNLCXSAJBPTGTWDTWQXSBTWMCDNDHZFAWTUZNRSLSYM");

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
    msg.setTimeStamp(0.708033710419);
    msg.setSource(30180U);
    msg.setSourceEntity(236U);
    msg.setDestination(41240U);
    msg.setDestinationEntity(47U);
    msg.topic.assign("BPGJLPQDUZBZGZJOYTHEMSTGOSNCULWXLKOXPITHUOSALDSHQDHVHLJUBDEAWGFDNKTMPKDQWVI");
    msg.data.assign("OYFYESDJLQMBRHNCGQCJNMIMCCABGQZSUSSTHRONEVDFFXZWXEXPOAUEEFIJSI");

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
    msg.setTimeStamp(0.711582778608);
    msg.setSource(23904U);
    msg.setSourceEntity(31U);
    msg.setDestination(27701U);
    msg.setDestinationEntity(30U);
    msg.topic.assign("KWMWSEVSRLLXDUQGIJMXQQUVVZBPXUJFDOKKKXZGCNURVEACZJHLJSOSLCYRMAVWVERTIUFORNIXKNTYUYMPROMYGBSUWTPMBOKZEUPHDCNDTSPEOZCQFIFYCFGDDTNNASNJFHHEKIPLZWDSXUAKOAQHIDSZHMQMGBRNLTABCYFLBCEBFLPAREIIIPZPQJDVEAKFGOHGLAQMWVZYDWNCWWGGBQOSTXKBQTRHYYIXLNVBRXM");
    msg.data.assign("ZBKNBDKJQAVPEQVJIWPMUWQBKFSUQSWFJARQPLQGH");

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
    msg.setTimeStamp(0.502387785918);
    msg.setSource(42132U);
    msg.setSourceEntity(236U);
    msg.setDestination(23398U);
    msg.setDestinationEntity(142U);
    msg.frameid = 248U;
    const char tmp_msg_0[] = {77, -30, -37, 94, -85, -94, 71, 111, -91, -79, 72, 51, 90, -49, 9, -74, 16, 104, 88, 31, -114, 18, -14, -28, 65, 45, -73, 67, -27, -87, -75, -43, 118, -75, 31, -25, -20, -74, -111, 59, -95, 118, -128, 107, 60, 105, 118, 77, 9, -118, -6, -22, -81, 1, 31, 59, -107, 107, -113, 34, -96, 68, -45, -85, 5, 62, 22, 5, -46, 51, -27, 105, -121, -46, 73, 64, 18, -80, 16, -107, -12, 60, -29, -36, 65, -108, -35, 124, -69, 15, 56, -13, 47, -37, 56, 124, -70, 5, -75, -22, 45, 63, -33, -96, -16, 57, 120, 65, -116, 18, -24, 62, 32, -117, -31, -104, -85, 53, 70, -8, -76, -34, -17, 64, 82, -102, -62, -121, -128, -99, 93, -8, -126, -63, 11, -119, 125, -10, -91, -53, 89, 8, 116, 36, -24, -22, 103, 37, -87, 52, 65, -111, 92, -5, -20, -93, 42, 33, 85, 66, -70, 32, -63, -53, -6, 22, 31, 119, 17, -80, -71, -4, 44, 78, 50, 61, 20, 107, 2, -67, 116, 67, 40, -50, -93, 117, 123, 96, -40, 57, 40, -62, 100, 46, 40, -63, 116, -85, -65, -45, 30, -52, 111, -56, -85, -102, -60, 62, 98, -9, 113, -46, 58, -112, 19};
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
    msg.setTimeStamp(0.488979243462);
    msg.setSource(17405U);
    msg.setSourceEntity(206U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(175U);
    msg.frameid = 248U;
    const char tmp_msg_0[] = {-124, 15, 64, 74, 65, -92, 4, -57, -5, -44, 10, -78, 51, -16, 117, 59, -98, 101, -82, -74, 121, 120, 86, 104, -15, -66, 66, 126, 57, -75, -28, -5, 50, 79, -125, 16, -75, 16, -1, 61, -27, -67, -60, -91, 122, -121, -128, 93, 24, -100, 123, -51, 88, 68, -77, -110, -24, -103, 46, -21, -84, 124, -118, -107, -29, -98, 115, 96, -78, -108, -85, -32, 4, 114, -96, 91, 20, -8, -111, -111, -95, -111, 115, -69, -80, -12, 124, -3, 115, 15, -124, 8, 60, -37, -31, 119, 17, -118, -111, 101, -86, 62, -79, -46, -114, 16, 86, 113, 113, -90, -127, -86, 103, -33, 75, -70, -123, 100, 26, -30, 101, 44, -51, -118, -66, 50, 35, 53, -66, 63, 17, -76, 25, -87, -13, 54, -107, -62, 89, 24, 123, 108, -92, 108, -87, -69, 122, -52, 46, -68, -6, -12, 25, 68, -23, 125, -35, 121, 45, 78, -15, -65, -74, 96, 114, 70, 55, 119, -112, -119, 42, 113, 72, 41, 66, 113, -66, 5, 86, 72, -99, 19, -74, 69, 37, -65, -21, 118, -91, -79, 40, -95, 116, 28, 47, -121, 57, 66, 26, -45, -4, -12, 56, -70, -63, -91, -37, -91, -111, 70, -27, -90, -41, 73, -17, -58, -46, -58, -50, 64, 33, 75, -23, 114, 31, 36, 115, 41, -50, -97, -113, 116, 97, 28, 69, 44, -21, -53, 75, 56, -44, 100, -96, -20, -24, -22, -44, -95, -36, -77, -101};
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
    msg.setTimeStamp(0.000125165611362);
    msg.setSource(15603U);
    msg.setSourceEntity(56U);
    msg.setDestination(64497U);
    msg.setDestinationEntity(140U);
    msg.frameid = 238U;
    const char tmp_msg_0[] = {16, 29, 56, -79, -72, 32, 21, 117, 83, -6, -68, -92, -34, -100, 22, 28, 62, 104, 78, -57, -120, -61, 77, 81, 81, 61, -20, -93, 45, -105, -96, -56, 0, 5, 5, -24, 70, -114, -24, 55, -38, 80, 124, 64, 117, 111, -81, 63, -27, 96, -43, 13, -66, -58, 120, 34, 113, 106, 68, 63, 89, -46, -84, -5, 77, -54, 58, -9, -63, 52, -90, -78, 5, 79, 42, -84, -112, -30, -21, -124, 3, 63, 100, 77, 50, 88, 1, 41, -59, -93, 25, 34, -127, -68, -75, 101, -93, -50, -46, -73, -61, 88, 36, -3, 80, -106, -97, 1, -22, 16, -122, 25, 92, 117, 79, -120, -14, -126, -71, 126, -37, 123, -94, -87, -23, 38, 107, 28, 78, 36, -82, 26, 40, 68, -1, -77, -76, 5, 63, 72, -83, 93, -3, 118, 60, -81, -41, -95, 34, 104, 43, 121, 7, -74, 80, -40, 27, 23, 104, -31, -44, 46, 117, 52, -77, 21, -110, -50, 91, -77, 109, 121, 98, 116, 75, -57, -91, -28, 120, -56, -9, 120, 99, 18, 37, -7, 39, 61, -111, 55, -46, -26, -61};
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
    msg.setTimeStamp(0.150030800599);
    msg.setSource(54348U);
    msg.setSourceEntity(21U);
    msg.setDestination(22222U);
    msg.setDestinationEntity(213U);
    msg.fps = 183U;
    msg.quality = 208U;
    msg.reps = 65U;
    msg.tsize = 131U;

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
    msg.setTimeStamp(0.316837022298);
    msg.setSource(56510U);
    msg.setSourceEntity(211U);
    msg.setDestination(27932U);
    msg.setDestinationEntity(90U);
    msg.fps = 41U;
    msg.quality = 231U;
    msg.reps = 17U;
    msg.tsize = 38U;

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
    msg.setTimeStamp(0.147308944593);
    msg.setSource(26758U);
    msg.setSourceEntity(162U);
    msg.setDestination(57493U);
    msg.setDestinationEntity(62U);
    msg.fps = 217U;
    msg.quality = 93U;
    msg.reps = 194U;
    msg.tsize = 168U;

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
    msg.setTimeStamp(0.38754473948);
    msg.setSource(8121U);
    msg.setSourceEntity(74U);
    msg.setDestination(12979U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.146457384305;
    msg.lon = 0.317559296079;
    msg.depth = 250U;
    msg.speed = 0.999166017484;
    msg.psi = 0.0407126374827;

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
    msg.setTimeStamp(0.634115184403);
    msg.setSource(22100U);
    msg.setSourceEntity(194U);
    msg.setDestination(1190U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.192544512568;
    msg.lon = 0.876976188395;
    msg.depth = 48U;
    msg.speed = 0.318395543158;
    msg.psi = 0.810896308003;

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
    msg.setTimeStamp(0.405539424475);
    msg.setSource(6168U);
    msg.setSourceEntity(171U);
    msg.setDestination(64484U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.672848112249;
    msg.lon = 0.525238543899;
    msg.depth = 141U;
    msg.speed = 0.622189057489;
    msg.psi = 0.715447569447;

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
    msg.setTimeStamp(0.93416991451);
    msg.setSource(62537U);
    msg.setSourceEntity(217U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(202U);
    msg.label.assign("YQYONYKNTGSNNJIYZAFPROYJUDZGWXDREQPILBIHJUVVCEXVSXLOFZLDQVWRK");
    msg.lat = 0.441958008347;
    msg.lon = 0.153742980499;
    msg.z = 0.734722662144;
    msg.z_units = 151U;
    msg.cog = 0.691951038664;
    msg.sog = 0.45793280826;

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
    msg.setTimeStamp(0.262517871404);
    msg.setSource(51772U);
    msg.setSourceEntity(219U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(30U);
    msg.label.assign("PDZJPLMQKYTHBLLRZRYMYCRXRZJHNGFOSCUBTTUPTUGWRKNRZQSPFYCFJEIAKUVXALQADVOGOJEUTBHAQPXAAYVTLPBKLWMICZKRQ");
    msg.lat = 0.0171068022118;
    msg.lon = 0.122908975493;
    msg.z = 0.133115203254;
    msg.z_units = 167U;
    msg.cog = 0.00942953430462;
    msg.sog = 0.364541207913;

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
    msg.setTimeStamp(0.716738174923);
    msg.setSource(44159U);
    msg.setSourceEntity(16U);
    msg.setDestination(48273U);
    msg.setDestinationEntity(114U);
    msg.label.assign("KSUAFHFOKQGNVEQVPKKNDBBZTYFMNYOID");
    msg.lat = 0.283254002583;
    msg.lon = 0.155225618418;
    msg.z = 0.760414713582;
    msg.z_units = 59U;
    msg.cog = 0.222050795868;
    msg.sog = 0.1369570761;

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
    msg.setTimeStamp(0.378925163472);
    msg.setSource(7385U);
    msg.setSourceEntity(25U);
    msg.setDestination(49020U);
    msg.setDestinationEntity(20U);
    msg.name.assign("RAVSIJSUOBYYYLJTADQDHJKJDEFVWQXIFOXMVLMRFEPPBMXEAUNUWRGTTKZJHGYXQXWCHSKDIKQGSTIIBZRUXPJFLRWGCJYBMLDEOEFFFQVPBNJQFKOLUIYWVIRVVTIDBOPDFZKBXNCYILRAWOUCHBBLGAPWHODEGATSAPKDMGRHHMQXESHZGWEDKNHMRPCNETXGCKOZNNWCEKMTTFPCWLZRZU");
    msg.value.assign("TLSPHOALNIMJZSZIOTEMUQUPSDMORMLYRPLAW");

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
    msg.setTimeStamp(0.137657784724);
    msg.setSource(29149U);
    msg.setSourceEntity(168U);
    msg.setDestination(25434U);
    msg.setDestinationEntity(239U);
    msg.name.assign("LTRBLAOAFSKQRMSPXHUUNMPMMPABYQWHKBIATVCYUGXYVEKCFKDCXTDCSXJHFJLWBOCKEEMFGBGOFUMQVIJUTFNPUWHLGVPIQZJRUPVZSLKUOQMZYXEAMWKWHVYWOYFJBZHYITRGDIDXLNVMXKVJIGZSEOWYNBCNSALRNICEZGHTLQAAYGDXSKRTJIIRODEXEO");
    msg.value.assign("HJOSHLVEEHMGDKXMNRZPFKYKLFEGOOUOCPQNDKEWLPVSTULAGPWZIBHZLQILITHNNDJOMOXUTFWSFMIRDNIEQXRDQBYJYJIBZKHIZKIVPWAGOAKLFSRUWWVEJYJYCDXBROHTAYKPRVLCEGWHNXJBHXCEGKCFNSMIAGQ");

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
    msg.setTimeStamp(0.231114384965);
    msg.setSource(472U);
    msg.setSourceEntity(78U);
    msg.setDestination(25021U);
    msg.setDestinationEntity(102U);
    msg.name.assign("FNGQIXQSUTKMASXBCBYVOCXDVGXMUBUQBHRTJKSPLLNBNIEHVVYOVUHEIBWDRVYZEKHPXEOKJALIAOUNGXVCJELFKPHUSGMMNNWOQANGHNMUEUBBTOZRRDBHXPOIRYXHYPIKYTWALJZEZJGZJRLRKMGADOWU");
    msg.value.assign("GMDQHEMRDRRAYDJLFSNJJXWGJOLCLPTBNKULPSGAFPROIBNISKHOUIDFCVCXXZFIKCQZNZMGNVOVZKLTFTRRAZYGBTYYCQYMXEXYGTBUHPPIWSQKPLLEPMOEXKQQEAUSERHOUEXHWSOEHLHCQFOGBXAQUQUIMVKWRJUZEZTMYNHDPTPJKDNAVPYIIMLJFDJRBGWTSURWICNGWEVJWXHZVTYBWLNFZTGAUNCZMCBDKQVWSVKDBFFVIXAAHSOAS");

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
    msg.setTimeStamp(0.458742820545);
    msg.setSource(9972U);
    msg.setSourceEntity(228U);
    msg.setDestination(28937U);
    msg.setDestinationEntity(58U);
    msg.name.assign("EDZEKUMRDIOULMNCAS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JZWZZLKOXDOQWDISNXSZLWPJTOSUKDHNEEXNFOLSQVSPMJHPCJTSIEDBMQPRHZTUSSTTLQROFMFTUWVZBKRRVLHFKCKBXMSMGMQQGVVMJLVQTXBRHUGGGAFXEFJPWBIRQKQALBFEBVICICDRUAPWYLCVBCGQUAPLNNEMBILEXCCKVDYUAZIOJSJNHDFUKYDYMATYAGZKZRTAMHCKWJAPWYGHAXYNENGPDGRYXNBFZOYOHUEWFIEHYNCXJDOII");
    tmp_msg_0.value.assign("MHMCJADNCBZDQWQLKWEQSJGDKGIZBKOLXWUYWTURFYEOQCKZKKPJMBPWOUDHJKIYKXIGTVPBLUJWIXLVUQCNMRTWIAWESHPSMATFSJAATXHMXTPYDHLNOZGDXCAOELDLTQPFMENRWLZRQEJRMAGGUCYNADQHTBVIUSRFHEXYUGJ");
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
    msg.setTimeStamp(0.385207693789);
    msg.setSource(39727U);
    msg.setSourceEntity(52U);
    msg.setDestination(10023U);
    msg.setDestinationEntity(225U);
    msg.name.assign("WKUYENDBYVJKCLPANIZIKVKXONIVSLUSYBBYEZQGFAIJQDMGEHOLDGVHWN");

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
    msg.setTimeStamp(0.49272750296);
    msg.setSource(43862U);
    msg.setSourceEntity(59U);
    msg.setDestination(9536U);
    msg.setDestinationEntity(10U);
    msg.name.assign("LDIFSNCPSHIIWBNPUBXYQIGNFIVWWBYJROAKTMQEUSXOMYZGWUPYDJYVFFXAICIGTDIHORPKBYHQVTHEXJATMYSYTWHNFFLGOCUHREKAMZDGZACMULJTYDZUSDAZLMRNKSMPHOGVNQXBTRYFCKPHDKAWKJMSPQIESPLURAAVXWDJAOKZXWPRLZEECB");

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
    msg.setTimeStamp(0.374447740068);
    msg.setSource(13933U);
    msg.setSourceEntity(64U);
    msg.setDestination(38993U);
    msg.setDestinationEntity(180U);
    msg.name.assign("IHXTQOIXUPLLWYTKRJGWJMRVVDM");
    msg.visibility.assign("MONJIKOQIJHVADVXBYMNHCGSLEJYUQJEHXITFIIGTJWRGLFKNAXSBRUFYAWPJOLKVWPXHBDSLMEPMYQTASGBRSZCSADDWGSQUTRDQTRLLUTVEDCXFZAMQYXWGPAKZZLVVZUSPBFXONCBGYIZQNAFEXJYJOCBTNQKOJQNAZFBPUZFDRCRVUKIQCMKVEMZWNZGWIXLNHCSURBWHHOYCTLBFM");
    msg.scope.assign("TPIJVGTECJIUIWTEDGSSYPVYMZUIJIEOYQZQCEIAXBTXFVDZQUOAGXOIMMDFOHDHYJWNKIQGGYVVFCNPQWTNUXPKFTSXLYDRRFKIPHKQUERCSWBBXRXXPTHANMMRFEZNDBYBWBGDVDRLBDZXKUCQTBCAOQVOZNSJSBHJNKSKHQPERYAHMVOULLIXYNMATZHZWBOJKYEVACLFGOOAQLLFS");

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
    msg.setTimeStamp(0.289417138723);
    msg.setSource(60006U);
    msg.setSourceEntity(196U);
    msg.setDestination(2630U);
    msg.setDestinationEntity(182U);
    msg.name.assign("ZFCQPGDZRSGFRLQNHKQWCXUIFCYVBGDXBINHPAVTUWXSOABMZTEEXWQIFHHJQAEJPRDSAELCMBVTOULQNTCPOEYOQAWANZXAUHXBKWBUHJICGLVWNKPDZRIKZJIIJYPPEZDD");
    msg.visibility.assign("CZQTQYZJLCNCYEKLURANFGASHYELJSUEWDDPVTHAJHMJSSQMOLWJTCIGKVMSEPKBMEXRWHTKAQUKQDIKBSVDTRIAQUNFODBOVMIIZHEYLRRIBRQGWXXSNWOEGVOZUXVVURADYMCPTYFZGYRZIHDKEEEWZBGFXPRNPTMKTBXPSNQOJMHUITJXAFYPBWBQOCLGJYSAZGAOFH");
    msg.scope.assign("CPDLUNMQJKNGRNDLXEMKULFFDSTPIAYYIYJLLSIPNTAWNSAEBQJG");

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
    msg.setTimeStamp(0.339200920363);
    msg.setSource(21589U);
    msg.setSourceEntity(219U);
    msg.setDestination(51930U);
    msg.setDestinationEntity(88U);
    msg.name.assign("XLYPRJUDWNDGKJCDYNLGCQZYBELWHIMWWRBJGHCBSSIAQCZGIOJGYMQEWEFNULBOKAMNVULVHTTMBZKPLOISPMJGIOKLGBKBAEZIROYTIZPNJZQQEFJDCEIUFMUTUVNDZRAQCJFEYWUXBUAVYTWVXLMYNWUKHVACSPHUDKTHLMO");
    msg.visibility.assign("CJAALQHOLMMVFMGVIIIYULGAUXHQYECHVLGUVSYLZNAUYUZDRACZPFZPEAPNKNETTZSPYOWBPOIBKOOMXQWWWFORWWJNKCLTRRNQTJUDTKFBWGFXGNETSEYXOGIMSIJRKYHPAGPKQVV");
    msg.scope.assign("HNGAGZTXMGMQKKDKUMMEBFIOJETCTXMEVIOQKOVWTYLASSUCKAWDGWLYYETUMUYPKSZCBHTJZBS");

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
    msg.setTimeStamp(0.195502964655);
    msg.setSource(45659U);
    msg.setSourceEntity(126U);
    msg.setDestination(50609U);
    msg.setDestinationEntity(20U);
    msg.name.assign("FLHGYZRPCWHIZCSTHRZAYVNRMSAUUAUXYMRHEEAWBHIHFORGYXDPNYSWDNDFRZXMNUJCMDBGFSTKXKVTJNOREAILOJPLJMAIFTAQVRDNNUDGLYWLPCKELOGUDJTFWMPQXIHSNWUIMHTSJIKJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SHMYXOLPQWXWPWWPTLRUWXVPPAQBHAEZIZNMYEHGJMLJBGLAMVRYTKSKLBAGDJXOSVBDFGKXSUTLGABQDGPHMYSBTZTXFYYZENECCCVOJAUUUCKPLWNISYZGDKUKRRDFWZHXCPWBMQBOOZIWFMKEIF");
    tmp_msg_0.value.assign("EYZXVBRWMKAWQCYBLXBJCFTYUATVQGHGMZFCARPYVQNXIGMMPROFMSDPRYXAIXDPPWSUCCUSMUYUKLMPURDT");
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
    msg.setTimeStamp(0.609674147394);
    msg.setSource(36926U);
    msg.setSourceEntity(199U);
    msg.setDestination(42879U);
    msg.setDestinationEntity(199U);
    msg.name.assign("CLQVPYYUGKNLXGJUJCWPSQQODFETQMNFXIYCMSQUEOANYAZHXICZNZTBAXPIAEMJAYIZRCZZJDKMQRWWHAWESOSVESGLMFRSVLLLGZIRKROVNTCNGSNWTTOTSPFVBMUKNCMBABUWIHJTGE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RYKHAVTAPXJTHMUTWYGNUMSWTQBILONLFVNTRYLABYNSKJNTDFIHCUUVXWPRXCLAQKPIKHXXPLGADWZLPZKXJNJJHGVQTZKZLQKQBLFVSFIEAUVQSIQHFTJYGYUPFEXRIRAGQ");
    tmp_msg_0.value.assign("QHZYGLBOQNVVJVJHSEMTKUPLVUXGKBOW");
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
    msg.setTimeStamp(0.264673626252);
    msg.setSource(12316U);
    msg.setSourceEntity(193U);
    msg.setDestination(48950U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FNGAGZXDOMDPMYKGENGUWIQBUALCBBETTYKCBYVHPFWUSUHPPNPFIXWIQWUXKMZBEYORZS");

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
    msg.setTimeStamp(0.867094917541);
    msg.setSource(56488U);
    msg.setSourceEntity(95U);
    msg.setDestination(19696U);
    msg.setDestinationEntity(138U);
    msg.name.assign("UJVMCJXGOJDXLEWAKTEXOOTCUSHABPZEICCFYMOXORRLCQMMDHLLTGRPZRNSAHPFXRSGLINKWLJDGRJYBNTHJBGQWFHQQWZVEVWCUBICTKSKPCHAWKDYGZYGHIDNMBDXQJWSAAGLNBJMELRKCITMESQQZGZTUSDXHQEEPUOFRGIRPZLHVQFUIRNWYDEFAVZSYTBBLAVXOYVMPVKIOOOXNUADEKVIZPSJPBKVNZCKNXFUPH");

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
    msg.setTimeStamp(0.817776996804);
    msg.setSource(818U);
    msg.setSourceEntity(220U);
    msg.setDestination(37294U);
    msg.setDestinationEntity(235U);
    msg.name.assign("IBQUOMABLYRMMABGKFKCAIEYRYZSDZEQQZLVCDEUJGJGFQQKYHJRWYWGTUTWCULVWCBPWKVHOPRIYKMUKRXTNVVCNMVWQMNKADOSPWZOFAEPICATQTZXJSNLPWRRUVSHKXSMVUHELJDOP");

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
    msg.setTimeStamp(0.593315671001);
    msg.setSource(12488U);
    msg.setSourceEntity(145U);
    msg.setDestination(30418U);
    msg.setDestinationEntity(190U);
    msg.name.assign("AQCTVYYTUQNZCXHYVSMXDCRPMRIIPANIRASVADNMZFJQYHEIZKGMGJJTNDIAOEHWSVVEWRTZXFPMMCJJYVBUZOHXTBONXBGXHFFKQGWTHFUFQQJENLKGXDHUOKQLBTPYOF");

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
    msg.setTimeStamp(0.330132844384);
    msg.setSource(15910U);
    msg.setSourceEntity(232U);
    msg.setDestination(45251U);
    msg.setDestinationEntity(32U);
    msg.timeout = 2237422959U;

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
    msg.setTimeStamp(0.446722029988);
    msg.setSource(1119U);
    msg.setSourceEntity(50U);
    msg.setDestination(35788U);
    msg.setDestinationEntity(67U);
    msg.timeout = 1596736229U;

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
    msg.setTimeStamp(0.258320847414);
    msg.setSource(9579U);
    msg.setSourceEntity(129U);
    msg.setDestination(28176U);
    msg.setDestinationEntity(153U);
    msg.timeout = 2722313221U;

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
    msg.setTimeStamp(0.761921546858);
    msg.setSource(38540U);
    msg.setSourceEntity(52U);
    msg.setDestination(9174U);
    msg.setDestinationEntity(34U);
    msg.sessid = 449443507U;

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
    msg.setTimeStamp(0.406673588886);
    msg.setSource(26211U);
    msg.setSourceEntity(78U);
    msg.setDestination(15602U);
    msg.setDestinationEntity(7U);
    msg.sessid = 883084426U;

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
    msg.setTimeStamp(0.626886599012);
    msg.setSource(61339U);
    msg.setSourceEntity(232U);
    msg.setDestination(4104U);
    msg.setDestinationEntity(73U);
    msg.sessid = 1656483208U;

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
    msg.setTimeStamp(0.499726562705);
    msg.setSource(52574U);
    msg.setSourceEntity(169U);
    msg.setDestination(24312U);
    msg.setDestinationEntity(136U);
    msg.sessid = 497639773U;
    msg.messages.assign("KUCWFCEODHIXYNKJCZCXMQCXQKREIMOOXTHLGYGSMSAVHSNNSWCWSJMOXHHDPFNHLEAUKGAKLXWJBGTYLEXUTISTBDNGQYPXZEEGMOZGNVRNWZDJHWQBMMWBYFOEUIASVATYOWPNGRPHUACVGFNEBQEVCIWOHSJTMJYJZDYPSVQQFRKJIXCVRALRLFWKDJJMULVKBOID");

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
    msg.setTimeStamp(0.990534597858);
    msg.setSource(57457U);
    msg.setSourceEntity(248U);
    msg.setDestination(43387U);
    msg.setDestinationEntity(93U);
    msg.sessid = 2417452545U;
    msg.messages.assign("CJSBLEWUVPUSEDOSMNOGFAOPWXWZMUTJXTVDOICWQKGKHEKWDPLHQMFDEXPPAXCCZROHHTYYUBDJFVPGITRGOZZUNGBCWVQLSXZKCRPFFOJKBAYLGITAMOGZYVBWDMLMGAJXHHVAZKERQKFHRYJDTIQIFYNYNRTIMJBBCMERWNXBTNEAGVJQEOAKUUDPUVCSXDCRXWLLYJHNWEIFASLOYKKSNZMCBPTAQQEGIXYQIFUTNVSIDRZFSH");

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
    msg.setTimeStamp(0.0733528865799);
    msg.setSource(6268U);
    msg.setSourceEntity(61U);
    msg.setDestination(38280U);
    msg.setDestinationEntity(69U);
    msg.sessid = 3168548813U;
    msg.messages.assign("XQXEXBXTJTSAQXURTGLAZKQJIPYVOOOEGCC");

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
    msg.setTimeStamp(0.60486114496);
    msg.setSource(42491U);
    msg.setSourceEntity(36U);
    msg.setDestination(63601U);
    msg.setDestinationEntity(120U);
    msg.sessid = 2035416478U;

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
    msg.setTimeStamp(0.36909458852);
    msg.setSource(47340U);
    msg.setSourceEntity(229U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(167U);
    msg.sessid = 3140420896U;

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
    msg.setTimeStamp(0.392925205581);
    msg.setSource(60416U);
    msg.setSourceEntity(53U);
    msg.setDestination(903U);
    msg.setDestinationEntity(70U);
    msg.sessid = 4221301915U;

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
    msg.setTimeStamp(0.173410339463);
    msg.setSource(14808U);
    msg.setSourceEntity(46U);
    msg.setDestination(51468U);
    msg.setDestinationEntity(116U);
    msg.sessid = 3105809443U;
    msg.status = 60U;

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
    msg.setTimeStamp(0.0775141308076);
    msg.setSource(20612U);
    msg.setSourceEntity(105U);
    msg.setDestination(16142U);
    msg.setDestinationEntity(184U);
    msg.sessid = 1585120575U;
    msg.status = 86U;

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
    msg.setTimeStamp(0.507968065955);
    msg.setSource(18404U);
    msg.setSourceEntity(141U);
    msg.setDestination(21163U);
    msg.setDestinationEntity(47U);
    msg.sessid = 3799550981U;
    msg.status = 99U;

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
    msg.setTimeStamp(0.565666553057);
    msg.setSource(37668U);
    msg.setSourceEntity(45U);
    msg.setDestination(2741U);
    msg.setDestinationEntity(254U);
    msg.name.assign("KSWFFIBRXFIKEVTFNQUKGOBLHCSVUZSBIWXATQNETKJJIPXYYOLGMWQZQNZJFOHGHWBVYQYULHORERLDDQYVGBVNAMBUCPSDMISMRYMSRMVPPUEKHPWZOMTPANFMJXILELKPUNTALXKZWPLVDDPSJSENNYBTVDARXISTXRBWIKQBUQJIFCKWCOJHDZEZVCGFGGXYKQAYHSAMXPLZUOECHDGAWDHHZLTNFNTWOUOEZJBMYGUOQAACJC");

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
    msg.setTimeStamp(0.388416583061);
    msg.setSource(544U);
    msg.setSourceEntity(115U);
    msg.setDestination(63154U);
    msg.setDestinationEntity(106U);
    msg.name.assign("MLVZENJVBYCHKCPKENACCFTYTYEUQLMBERRVEUSKDXGUMWGXDTKFTFGAAXRJQOWHPFYBLTEKPMPBDUI");

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
    msg.setTimeStamp(0.190818503556);
    msg.setSource(54649U);
    msg.setSourceEntity(129U);
    msg.setDestination(27375U);
    msg.setDestinationEntity(211U);
    msg.name.assign("NQDZTMOBYEGHDUVYELVZBXZWGINPMLDKCYEFMSMUWAMEEHAGKWJQZCJXOIFJFUXRJHBSGTRSAVEHVTIKHEHTVIZLCYBOLTCRLFKDWDJUTSMCFKWZVNHMSPACGPINBCWJXHSYRFRFQLVXLLKTQAGKJNFJSQDV");

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
    msg.setTimeStamp(0.831044369829);
    msg.setSource(28470U);
    msg.setSourceEntity(219U);
    msg.setDestination(2284U);
    msg.setDestinationEntity(219U);
    msg.name.assign("UNSLCTUDFMODWIQEDOQKIJINETASXTORGPNGGXFYXMDRACMBHMOHJHXTFFMQYKGFPUVJAWXBYPASQIPJTOLQMSHNRLQQBJWYUZAWRBCCRMQFYRAEYZLGJTGBOXOIQDVZNWVVNPIZKBN");

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
    msg.setTimeStamp(0.122878814004);
    msg.setSource(4656U);
    msg.setSourceEntity(248U);
    msg.setDestination(14419U);
    msg.setDestinationEntity(212U);
    msg.name.assign("WZJUHZTBPJRXAONJSMEQGEONJQIMSCDYAGXOBEYSQRVFESHHDRBMDWTOFHIDUZYALUVYABDZLIOSRMNRWGTPVISPKMGBMANZGRHIIMTRHETIQHCLWLYNFLFGSJYTTITGFRIOFZXFWPJPNFQVBZIMCYOVUFCLKKJQZQTNWVKVDCBRUCDHZZMYWUBEKOMPWEAWPHLEXBXWALDAUJEUSSGAXHPOLURVAFJKXKQKVCCXVBPJUCYQXNKPODCNGTEDSX");

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
    msg.setTimeStamp(0.713103669574);
    msg.setSource(12841U);
    msg.setSourceEntity(63U);
    msg.setDestination(53085U);
    msg.setDestinationEntity(231U);
    msg.name.assign("FHCDXVSTFHUEHIKSFSEPEUAHFQVLXLZKSBIEFXMLUOLMBUCNCQQRCPZICPJGNEWJXFFH");

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
    msg.setTimeStamp(0.907113176593);
    msg.setSource(39442U);
    msg.setSourceEntity(14U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(9U);
    msg.type = 90U;
    msg.error.assign("YWTAEYJIFVLXUPRZYELJDKSXGQVHHVUVINDMGFCTZRYJHCWERXFMCHUATCBBFNVCVABVYKJGQCAFNGKYQXGQDFRLKJSPXGUAVBYUBHTNISGHOXGOPMUAIINQPCNTFOFKPDAPWBYUTASJWMPHUUSZQFRBJKOBCFEXDLJJQZEEISTOKOMSALNBTJ");

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
    msg.setTimeStamp(0.0185848563802);
    msg.setSource(7364U);
    msg.setSourceEntity(244U);
    msg.setDestination(8482U);
    msg.setDestinationEntity(209U);
    msg.type = 123U;
    msg.error.assign("KUJIDJDKIUSYWJMAHXTVBFZMHZUJGBQFJELOMRNYDKVFWBBY");

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
    msg.setTimeStamp(0.215090938637);
    msg.setSource(37634U);
    msg.setSourceEntity(131U);
    msg.setDestination(9743U);
    msg.setDestinationEntity(242U);
    msg.type = 216U;
    msg.error.assign("XRCMQHCJEYHOAQWRLXPHUUHTVUZEPIUGXAJKCEDDZBOGWSDJAVMSQEAYRFFAWDKVCMVZZCONXUYDSGROMWFCAZHWYKEEZQTFINKWGJKADK");

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
    msg.setTimeStamp(0.985723222293);
    msg.setSource(62230U);
    msg.setSourceEntity(146U);
    msg.setDestination(53195U);
    msg.setDestinationEntity(245U);
    msg.seq = 61106U;
    msg.sys_dst.assign("NIUIABDBGOFYJZWTGKYQJDYCLZCXXFLYQNHPVMUMSV");
    msg.flags = 192U;
    const char tmp_msg_0[] = {-27, 119, 91, 96, -23, 89, -91, -93, -84, 84, -69, 0, 110, -54, 91, 3, -16, 49, -75, -64, 56, 60, 90, -19, 94, 40, 63, -125, -29, -32, -4, -86, -126, -10, -69, 121, 60, 109, 83, -73, 22, -124, -62, 97, 66, 73, -78, 113, 37, -126, 76, 109, 37, 124, -81, 55, 92, -40, 40, 24, 105, -117, -81, 78, -106, 71, 59, 105, 25, 7, -58, 6, 12, 4, -126, -46, -89, -44, 62, 80, 39, 118};
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
    msg.setTimeStamp(0.778880303518);
    msg.setSource(36317U);
    msg.setSourceEntity(146U);
    msg.setDestination(32155U);
    msg.setDestinationEntity(165U);
    msg.seq = 20991U;
    msg.sys_dst.assign("SUIGRECGZSYUZAHIFPBEUTJWZONPHHQDEGURJCA");
    msg.flags = 172U;
    const char tmp_msg_0[] = {-108, -98, -61, -15, -98, 84, 28, 64, -70, -9, -84, -7, -57, -55, -29, -62, -22, 63, 35, 67, -3, -101, -78, -14, 115, -75, 56, -119, -119, -78, -22, -59, 82, -63, -105, -68, 100, -37, -22, -106, -113, 108, 71, -7, 51, -121, 102, 117, -103, 110, 21, 91, -23, -116, -74, 100, -105, -17, 58, 39, 64, 17, 107, 13, 118, 27, 30, 36, 9, -50, 90, 41, -52, -99, -125, -107, -44, -42, -84, -59, -118, -18, 58, 81, 20, 103, -59, -91, 61, 64, -6, -49, 22, 40, -77, 7, 41, -29, 84, -53, -35, -100, -44, -101, -106, -12, 87, 77, 46, 29, 10, -115, -105, 76, 4, 99, 109, -54, -100, -62, -123, -107, -24, -90, -94, -114, 45, 8, 51, 15, -88, -116, 43, 26, 2, 119, 116, 38, 115, 23, -9, -13, -65, -85, 26, 73, 14, -79, 47, 23, -106, 71, 39, -91, 73, 28, -102, -97, -1, -93, 37, 12, -33, -10, 46, 75, 11, -12, -63, -99, -49, -7, 20, -106, 72, 1, 24, 28, -23, 18, -3, -30, 104, -31, -116, -31, 96, -118, -6, -83, -57};
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
    msg.setTimeStamp(0.847233107291);
    msg.setSource(54198U);
    msg.setSourceEntity(19U);
    msg.setDestination(3139U);
    msg.setDestinationEntity(107U);
    msg.seq = 64522U;
    msg.sys_dst.assign("JIICECLDMLONADTOOVGPKTOYRTOEMDCUAESEVSTUNPNHLDCWRSXFHQZFCXWIJTBJQVDRHFJNWIYFWYHKPNVFKBQZLHITHEOLPJBGUAMFMBGIAYMUYEDJWFQ");
    msg.flags = 238U;
    const char tmp_msg_0[] = {-51, -77, -56, -115, -66, -2, 25, 85, 33, 88, 83, -25, 102, 24, 64, -120, 88, 68, 54, 31, -47, 23, 92, 53, -29, 73, -49, -18, -117, 69, -92, 57, 125, -37, -123, 12, -45, -22, -90, 122, 96, -33, 67, 41, -114, 71, 11, -20, -20, 99, 108, 46, -81, -39, 104, -31, -113, 117, -65, 111, -70, -112, -107, -12, -82, -25, 41, 71, 45, 79, 78, 11, -28, 26, 62, 105, 73, 122, 25, -40, -100, 22, -22, -65, -58, 112, 3, -115, -85, -9, -128, -90, 95, -119, -25, 89, 125, -126, 34, -64, -74, -18, 83, -74, -85, -113, 8, -123, 116, 112, 29, 84, 42, -3, -3, 50, 27, 102, -76, 123, -113, -119, 13, 42, -43, 86, 14, -3, 120, 109, 76, -35, -103, 66, -8, 0, -87, 13, -119, -54, -109, 85, -20, 39, 42, 12, 64, 115, -103, -36};
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
    msg.setTimeStamp(0.505290899738);
    msg.setSource(11504U);
    msg.setSourceEntity(234U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(77U);
    msg.sys_src.assign("UUANULDMELYNLBPOTHBTQQNEAAVYIWGIURBXOZXJIJSHGMHEESKPUMRCLSBUIPJVTVPJPRYNFSTYNPUHDQFBBITFIJWAIAJCKGRBLLAHKRPFLLKUEGYTCZTAAUGKNYMCXEVDGYWXQWODWTSVIOZQSEXZYSVAJWCIVBSKSCFFMCMZFWPWKDATREOHZEWJQRRCGRYFOUMHVYDZLGHNSNJWPQDQJNXNQOOXIKLFHCFKET");
    msg.sys_dst.assign("ROGKKBZOWEQCKIOJOAQZKLPTCCDLLMZGAIJYIYXDNJPXTASCZVMXWVNTGHNOCUDSHHFFVIQRVDCGINPKEOASEALMXPOLKXDTRZCVQRAPJWGULKRHTOGSTJUHUSSCTFUWQEBXUTNWDJTBASWRDVYQFKIYFWZESGBCHWKVYERGJPIFEFUAEYUZIGXQOKMBMNEVYXMVHJYYPXUGAHPDIZRRMMZJFHSONBQLLXEUYBPVWDWQC");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-43, -66, -112, 118, -58, -79, 39, 70, -51, 55, -10, 120, 21, -24, 93, 14, 34, 86, -54, -72, 27, 92, -97, 123, 92, -22, -88, -4, -69, 38, -50, 76, 20, 19, 67, 119, -103, -17, 118, -125, -104, 59, -14, 68, 60, -104, -126, 8, -113, -2, 34, -88, -70, 68, -101, -87, 15, 20, -114, -32, 78, -62, -115, 34, 24, -123, 76, -84, 42, 110, -58, -33, 34, -9, 3, -19, -4, 15, 99, 67, 94, 39, 18, 13, 13, -105, -26, 20, 54, -53, 25, -122, 40, -1, 7, 80, -21, -125, -20, 96, 123, -122, 51, -44, -33, 12, 73, 0, -26, -9, 125, -108, 94, 15, -96, -15, 65, -16, -76, -30, 85, -7, 58, -56, -93, -88, 24, -48, 71, 62, 59, 81, -101, -38, 33, 79, -125, -69, 43, 114, -107, -20, -114, 119, 74, 89, -75, -70, 84, 43, 2, -15, -11, -127, 120, 111, 70, 71, -9, -95, -98, -78, 118, -40, 26, 58, -67, -100, -97, -83, -40, 54, 24, -85, -61, 75, -3, -128, 98, 1, 54, 65, -79, 25, 15, -63, 54, -10, 113, -114, -23, -53, 28, 6, 33, -90, 51, -10, -31, 96, -11, 11, 87, 101, -28, 40, 100, 14, -74, -67, 101, -16, 8, 76, 81, -126, -75, -63, -42, -49, 9, 94, -79, 89, 18, -3, 112, -93, -83, -47, 126, 81, -32, -110, -13, -104, 80, -79, 93, -13, -13, 60, -69, -40, -70, -20, -57, 91, 27, 70};
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
    msg.setTimeStamp(0.605082159465);
    msg.setSource(27775U);
    msg.setSourceEntity(252U);
    msg.setDestination(2191U);
    msg.setDestinationEntity(251U);
    msg.sys_src.assign("QJQFVFCPADZBSHLGFWUQFRFNYMWYGWVECQICPEHYIXQBKDUJLMIHXJNIYGNIBJFAGEZKEWHLPAJARLRUAXVOHNNTDLSVSOWCUGFSDZIEHARGYHIPEYNDCRCESAKMWLBSUZOROSYKHVVOSNUZXNCJQXFXOYQVZDPLMOJXTMTLTHTXDIPDMVGYKWRHAAIGEBBKTYNQTO");
    msg.sys_dst.assign("LDNKOBUUVETFBAENKQPKCKNFVNBYVVWCEWJQCHOGVEZUFMEIVTPJBFDQPJQHZMDBSSWIFGALRCQUZKQXPTDGBZUGFPFAIBXHPGECZGQMXNLOZRDGYRXJSYOVJJRISASRJHDOCIYRTAMMLYFQMFLNSWXDXHCUDWV");
    msg.flags = 141U;
    const char tmp_msg_0[] = {-127, -41, -120, -67, -76, 54, -6, -106, 16, 28, -122, -119, 70, 69, 106, -95, 74, 46, -52, 121, 97, 53, -107, 19, -79, 3, 112, -87, -34, 49, -86, -30, 107, -120, -59, -91, -8, 78, -42, -40, -52, 43, 111, 125, -15, 21, 42, 17, -108, 51, 85};
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
    msg.setTimeStamp(0.337257071959);
    msg.setSource(13135U);
    msg.setSourceEntity(221U);
    msg.setDestination(49628U);
    msg.setDestinationEntity(236U);
    msg.sys_src.assign("ANBJPEKAQDSRPZSKUAWFBNOCPEOXYSTLEYHLZHGMXHDKWWRSWPCBZYVJARVEOEBISXAZDQXSOLTZODTDTEPXIIROOJIICVJUNUBRZXJMRPTJFFHZIOGKTGNGQTGPALCOYDHRMIZTCJPQFMSGRDVFKEXGYMLHCFFAHEGBKKRLWMNMVKNAYUHLHRQEJWILGBKJCUMUFQBYJMXUQVBIKX");
    msg.sys_dst.assign("IKJSHHFHUPYJLTDILCTMGZWRPDTGOIOICIQBZVUKFCVSCTJVKPHOOOTWRCTPYCLMNOYMQSXXSY");
    msg.flags = 31U;
    const char tmp_msg_0[] = {93, -93, 64, -73, 97, -8, 25, 101, -52, -120, -83, 13, 72, -11, 88, -83, 12, -116, -27, 84, 109, -41, 25, 67, 9, 109, 61, 99, -75, -4, -120, 23, -26, -111, 58, 10, -69, -54, 100, 70, -34, -37, 116, -99, -45, -32, 122, -95, -43, 48, 92, -126, 31, -78, 43, 118, -121, -45, 9, 12, 105, 11, -69, 47, -41, -115, -125, -11, 10, -36, -105, 22, 61, -102, -81, -54, -25, 76, -26, 113, 94, -85, 124, 41, -6, -117, 124, 9, 70, -64, 63, 73, 63, -7, -73, -120, 14, -63, -21, 107, 15, 22, -123, 70, 34, 28, 37, 77, -46, -116, -10, 92, -55, 80, -67, 119, -83, 41, -15, 126, -29, 111, 27, 53, 112, 95, -19, 52, -93, 25, -49, -99, 76, 117, 14, -116, 90, -105, 109, 44, -76, -90, 93, 95, 54, -2, 34, 42, 65, -61, -51, 120, 69, 34, -46, 92, -47, 26, 12, 125, 45, 58, 97, 64};
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
    msg.setTimeStamp(0.380102063691);
    msg.setSource(56376U);
    msg.setSourceEntity(172U);
    msg.setDestination(12186U);
    msg.setDestinationEntity(56U);
    msg.seq = 36643U;
    msg.value = 248U;
    msg.error.assign("WVJGSUOIMFOUNFFALNDZRRVPVPYPWZRPTQGZJOXEVEKKNAPMFCNZXRCVISAUFUHDGWYZNISEBSPKWQELSWDZOTGFIOSDAOIAIBKTPOCRNGQUETZDJQYJPXVGBNXIBJXEYARJCVSKGQBFHMPIJCMYJSSBLDH");

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
    msg.setTimeStamp(0.00365843442971);
    msg.setSource(24018U);
    msg.setSourceEntity(116U);
    msg.setDestination(52267U);
    msg.setDestinationEntity(76U);
    msg.seq = 4811U;
    msg.value = 23U;
    msg.error.assign("OVVPXFIGLEKSATCQUBBFZUBRPZ");

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
    msg.setTimeStamp(0.170193449616);
    msg.setSource(56858U);
    msg.setSourceEntity(9U);
    msg.setDestination(46880U);
    msg.setDestinationEntity(17U);
    msg.seq = 51298U;
    msg.value = 107U;
    msg.error.assign("OQYIGLIEKXGOVPJKBDTHEGBSTWMVDMNOXIUDHYWZELBFARNKQZACPWYZANFHKKVODCBBWUULYXWIUBREPFLDMDRTNVPREATMSMRCQHZJDQFITMNAXNJHAQM");

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
    msg.setTimeStamp(0.66717068226);
    msg.setSource(23920U);
    msg.setSourceEntity(179U);
    msg.setDestination(31145U);
    msg.setDestinationEntity(208U);
    msg.seq = 11585U;
    msg.sys.assign("HKMTEDWIWQRQCQINVRJSKFJOSMNFCNQLLSWQGHSCKFWJVVVRXDHZQICJLJWGAHEEBFPUPDAFFRWYNDZSDNNPZNNBOLYPDTLYXVKECKAZEAIOYWBGXHHAUUUCOXYCUSPPFTTBVHSTFOBIQYIXMMDGCPZEEDLKTLABMIOJLBNKQVTIUSGHELJZHADRUTFCIFMGJTRCVXV");
    msg.value = 0.653041144821;

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
    msg.setTimeStamp(0.795633167094);
    msg.setSource(7168U);
    msg.setSourceEntity(66U);
    msg.setDestination(21561U);
    msg.setDestinationEntity(71U);
    msg.seq = 2263U;
    msg.sys.assign("RSIBNYWYNVPQSIMXQEGLFWUXBVANFQNHJEHLUWYEMWSMPPVXKNCBSFBDVABFQCDGQHBTOCSZFLHLSMPTEPHELMQWPZAOJHAWPXXCJRZDGRDJTQQMGRKYCORKTTVUCVPXAANZEOGMILGZOVXGHISDIDDFZIJUGEZRQHVYBSKKFEQRSEDXKVKTALJDZDYLSOLWMUZXGFNJYYFLAKUNBJBJNCOMHYENCATAPTOUMWURCJWIIXI");
    msg.value = 0.818614232188;

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
    msg.setTimeStamp(0.201959283611);
    msg.setSource(49720U);
    msg.setSourceEntity(88U);
    msg.setDestination(50312U);
    msg.setDestinationEntity(20U);
    msg.seq = 42384U;
    msg.sys.assign("GTFACRNHRJFFKJEZDIROQEYFDZQHVSHSENENCALMIPPCWMVUYRHQWIMUCGLUIXSJVKXMOAPBRGHLXPKHWIJVPWUUMTYOGOBBUDEYGUKVASHDFLYQCNJLUMZPBMCWVETBSSNBQGFDQKTACNZQHWONSPPVYXOLDOKXJMHEACTTIADIZUQWOCKKJKTZRHNGRIZDBGYIXLSTRZYLGPDBLOJRJ");
    msg.value = 0.874693949419;

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
    msg.setTimeStamp(0.788964759569);
    msg.setSource(39669U);
    msg.setSourceEntity(81U);
    msg.setDestination(12163U);
    msg.setDestinationEntity(91U);
    msg.action = 87U;
    msg.longain = 0.528020801349;
    msg.latgain = 0.363385991669;
    msg.bondthick = 1241916324U;
    msg.leadgain = 0.785247327511;
    msg.deconflgain = 0.588188195235;

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
    msg.setTimeStamp(0.484738125468);
    msg.setSource(26426U);
    msg.setSourceEntity(246U);
    msg.setDestination(63334U);
    msg.setDestinationEntity(204U);
    msg.action = 195U;
    msg.longain = 0.825486680614;
    msg.latgain = 0.752714892707;
    msg.bondthick = 3547761074U;
    msg.leadgain = 0.589380253564;
    msg.deconflgain = 0.462998045539;

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
    msg.setTimeStamp(0.114022066252);
    msg.setSource(53014U);
    msg.setSourceEntity(170U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(67U);
    msg.action = 203U;
    msg.longain = 0.297270337044;
    msg.latgain = 0.397116652809;
    msg.bondthick = 1835190819U;
    msg.leadgain = 0.888077017526;
    msg.deconflgain = 0.336124520122;

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
    msg.setTimeStamp(0.212554137203);
    msg.setSource(12867U);
    msg.setSourceEntity(56U);
    msg.setDestination(23915U);
    msg.setDestinationEntity(55U);
    msg.err_mean = 0.745141711046;
    msg.dist_min_abs = 0.10611134733;
    msg.dist_min_mean = 0.293761975955;

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
    msg.setTimeStamp(0.817462678138);
    msg.setSource(19840U);
    msg.setSourceEntity(49U);
    msg.setDestination(45024U);
    msg.setDestinationEntity(19U);
    msg.err_mean = 0.984604670442;
    msg.dist_min_abs = 0.775235076718;
    msg.dist_min_mean = 0.666251481232;

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
    msg.setTimeStamp(0.682009493885);
    msg.setSource(6746U);
    msg.setSourceEntity(130U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(77U);
    msg.err_mean = 0.126521480827;
    msg.dist_min_abs = 0.593641212558;
    msg.dist_min_mean = 0.135671516026;

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
    msg.setTimeStamp(0.82032038838);
    msg.setSource(9795U);
    msg.setSourceEntity(163U);
    msg.setDestination(46633U);
    msg.setDestinationEntity(225U);
    msg.action = 167U;
    msg.lon_gain = 0.239416940091;
    msg.lat_gain = 0.125351523797;
    msg.bond_thick = 0.145322383779;
    msg.lead_gain = 0.534760734829;
    msg.deconfl_gain = 0.119165895149;
    msg.accel_switch_gain = 0.959068071129;
    msg.safe_dist = 0.699774985259;
    msg.deconflict_offset = 0.227906892119;
    msg.accel_safe_margin = 0.628470112533;
    msg.accel_lim_x = 0.0279651902296;

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
    msg.setTimeStamp(0.114703140891);
    msg.setSource(39459U);
    msg.setSourceEntity(227U);
    msg.setDestination(41638U);
    msg.setDestinationEntity(181U);
    msg.action = 172U;
    msg.lon_gain = 0.626269000088;
    msg.lat_gain = 0.242814816748;
    msg.bond_thick = 0.862142971094;
    msg.lead_gain = 0.170663486463;
    msg.deconfl_gain = 0.544597285054;
    msg.accel_switch_gain = 0.768116962541;
    msg.safe_dist = 0.798343616069;
    msg.deconflict_offset = 0.579120961419;
    msg.accel_safe_margin = 0.75495192097;
    msg.accel_lim_x = 0.206602999888;

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
    msg.setTimeStamp(0.294150948286);
    msg.setSource(13005U);
    msg.setSourceEntity(100U);
    msg.setDestination(23625U);
    msg.setDestinationEntity(150U);
    msg.action = 59U;
    msg.lon_gain = 0.765275798208;
    msg.lat_gain = 0.328171540797;
    msg.bond_thick = 0.928328906672;
    msg.lead_gain = 0.86142860151;
    msg.deconfl_gain = 0.54235203512;
    msg.accel_switch_gain = 0.213615513783;
    msg.safe_dist = 0.577096354454;
    msg.deconflict_offset = 0.973626293928;
    msg.accel_safe_margin = 0.0411791178051;
    msg.accel_lim_x = 0.1764028687;

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
    msg.setTimeStamp(0.33551092247);
    msg.setSource(21715U);
    msg.setSourceEntity(90U);
    msg.setDestination(335U);
    msg.setDestinationEntity(106U);
    msg.type = 183U;
    msg.op = 174U;
    msg.err_mean = 0.862286730666;
    msg.dist_min_abs = 0.800256180222;
    msg.dist_min_mean = 0.879148073396;
    msg.roll_rate_mean = 0.291810049261;
    msg.time = 0.0269336780956;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 56U;
    tmp_msg_0.lon_gain = 0.00181331741847;
    tmp_msg_0.lat_gain = 0.817110675286;
    tmp_msg_0.bond_thick = 0.0145427002732;
    tmp_msg_0.lead_gain = 0.0665560824527;
    tmp_msg_0.deconfl_gain = 0.66858117482;
    tmp_msg_0.accel_switch_gain = 0.107081323394;
    tmp_msg_0.safe_dist = 0.099886739859;
    tmp_msg_0.deconflict_offset = 0.703730761137;
    tmp_msg_0.accel_safe_margin = 0.407412487011;
    tmp_msg_0.accel_lim_x = 0.925001734833;
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
    msg.setTimeStamp(0.935616175562);
    msg.setSource(5575U);
    msg.setSourceEntity(228U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(203U);
    msg.type = 82U;
    msg.op = 221U;
    msg.err_mean = 0.586925403242;
    msg.dist_min_abs = 0.664004425628;
    msg.dist_min_mean = 0.818147678013;
    msg.roll_rate_mean = 0.756914386612;
    msg.time = 0.739779406196;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 182U;
    tmp_msg_0.lon_gain = 0.962046001628;
    tmp_msg_0.lat_gain = 0.581063106564;
    tmp_msg_0.bond_thick = 0.697807273263;
    tmp_msg_0.lead_gain = 0.397294726637;
    tmp_msg_0.deconfl_gain = 0.705787035878;
    tmp_msg_0.accel_switch_gain = 0.810707851658;
    tmp_msg_0.safe_dist = 0.580200456637;
    tmp_msg_0.deconflict_offset = 0.865549509595;
    tmp_msg_0.accel_safe_margin = 0.568615520818;
    tmp_msg_0.accel_lim_x = 0.927884868975;
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
    msg.setTimeStamp(0.668814010828);
    msg.setSource(34339U);
    msg.setSourceEntity(173U);
    msg.setDestination(9211U);
    msg.setDestinationEntity(184U);
    msg.type = 10U;
    msg.op = 179U;
    msg.err_mean = 0.545994602464;
    msg.dist_min_abs = 0.67484853401;
    msg.dist_min_mean = 0.275956308098;
    msg.roll_rate_mean = 0.169917421076;
    msg.time = 0.586547019621;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 145U;
    tmp_msg_0.lon_gain = 0.948519051245;
    tmp_msg_0.lat_gain = 0.624556055233;
    tmp_msg_0.bond_thick = 0.946161843979;
    tmp_msg_0.lead_gain = 0.103495549332;
    tmp_msg_0.deconfl_gain = 0.573480736147;
    tmp_msg_0.accel_switch_gain = 0.44426596434;
    tmp_msg_0.safe_dist = 0.146311302752;
    tmp_msg_0.deconflict_offset = 0.97340381493;
    tmp_msg_0.accel_safe_margin = 0.0894799270766;
    tmp_msg_0.accel_lim_x = 0.832561326001;
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
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.239599916736);
    msg.setSource(39587U);
    msg.setSourceEntity(211U);
    msg.setDestination(34448U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.0856939749031;
    msg.lon = 0.533381184682;
    msg.eta = 1933619760U;
    msg.duration = 24180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.473112478468);
    msg.setSource(328U);
    msg.setSourceEntity(135U);
    msg.setDestination(10786U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.297281538469;
    msg.lon = 0.965659002093;
    msg.eta = 2429431231U;
    msg.duration = 8876U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.0949260693051);
    msg.setSource(26115U);
    msg.setSourceEntity(82U);
    msg.setDestination(56529U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.254187580152;
    msg.lon = 0.975113172653;
    msg.eta = 649377217U;
    msg.duration = 48425U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.516518309125);
    msg.setSource(9078U);
    msg.setSourceEntity(227U);
    msg.setDestination(35470U);
    msg.setDestinationEntity(121U);
    msg.plan_id = 3992U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.676998604843;
    tmp_msg_0.lon = 0.346543560113;
    tmp_msg_0.eta = 881610257U;
    tmp_msg_0.duration = 25858U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.278959985282);
    msg.setSource(43824U);
    msg.setSourceEntity(41U);
    msg.setDestination(38552U);
    msg.setDestinationEntity(95U);
    msg.plan_id = 50891U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.992262144397;
    tmp_msg_0.lon = 0.356703675716;
    tmp_msg_0.eta = 4136783133U;
    tmp_msg_0.duration = 44396U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.0721334413472);
    msg.setSource(35863U);
    msg.setSourceEntity(69U);
    msg.setDestination(62684U);
    msg.setDestinationEntity(164U);
    msg.plan_id = 21044U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.447322836634);
    msg.setSource(18336U);
    msg.setSourceEntity(97U);
    msg.setDestination(17487U);
    msg.setDestinationEntity(61U);
    msg.type = 80U;
    msg.command = 178U;
    msg.settings.assign("QUIRNMYUAESFJKXAVZDBBRZWATPSCWRMGSFGZGBFYZXLJWDHMXRLCINLHLGDPMJQSUQIPKLZBKRNXVNTHVEQHCSBMTTOOVTNLYGYHWQEUYSUFKDJHCSLP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40570U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.982394870803;
    tmp_tmp_msg_0_0.lon = 0.307992406989;
    tmp_tmp_msg_0_0.eta = 2315035839U;
    tmp_tmp_msg_0_0.duration = 31172U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QPTWIIMAPNVIBZWTEWYQPULHBSFDGALNSTNBVAJREWGFXFQKEEFDMNYGERXZNYUYUCXUUSWEWXVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.461635197739);
    msg.setSource(15958U);
    msg.setSourceEntity(98U);
    msg.setDestination(25272U);
    msg.setDestinationEntity(126U);
    msg.type = 211U;
    msg.command = 164U;
    msg.settings.assign("MEMCAMEFAFYSOQDQAZSVUPZDIHUPVITWNQZZGKOILRYBDMKNFKDTPJTILWRSHGJZKSBGXNEMRMVEJZXKJHPLILAZPWRYUXRYSOSBPAVNJIFBKWVHCNNSJOTOVPRCGKCQQHGDTDDVCUWAOUNUEIXEBQWGYAQUDKUTEWORNHASLFGEMPXITHHCFZPOFLBGEVKOTYLTG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 60329U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RCNKADOHPFXXOCBEOLKLWYLYHPSCBAEKGDYAVMDKNSHIPXXODELJQYACUKEZPFQRTMTRDDWMTYSAJZXDIRJBVULJBFZIFEHYUYSHDSGMUBAAIFEKHZQPXPMFKHJGBRLNGQPMX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.280207653832);
    msg.setSource(58058U);
    msg.setSourceEntity(2U);
    msg.setDestination(65406U);
    msg.setDestinationEntity(137U);
    msg.type = 141U;
    msg.command = 113U;
    msg.settings.assign("CRGUVRDHKPXAOXIGPDUKNABFPXHVSCIJSBKPLZYRQQINUYIFLBRITXCDXEGZNVNBOEFRMEFQBUJWSQVEJVWLHDAWRGYRZCLDANLZBHEIQCJIOQIQFXNFXTEUKUNYLHIUKFZCOWDVJKYQQPZWWTJMVBSSYTGEGWKCFTJWHNEOTROECTUUYLCMNJHLDPZVJXIGZTVPSYKASBMDDGOMMAST");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 49559U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FPAKACFNBULKDPMAJBDMYOXCUIZPYPEFZCRSYQVIEGARMSWZKPLGFSIQUZUDIECEQUNWFASGYJWVXWIMKFRJHXWTFVEHCMEROHXHQGEKTRYSGCHEENQWNOGPRRSNVGAZQBUHJANODUVWTMSJMPDTYKZLRICSBXMIUTPOGQBSRXEKKJOANZVFZVNXJVHFLDCHVLWYMTPGIFOBLNBWYYQQGUXDTAIXPCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.665766749359);
    msg.setSource(1104U);
    msg.setSourceEntity(16U);
    msg.setDestination(33504U);
    msg.setDestinationEntity(253U);
    msg.state = 58U;
    msg.plan_id = 46160U;
    msg.wpt_id = 237U;
    msg.settings_chk = 25373U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.65321161026);
    msg.setSource(55571U);
    msg.setSourceEntity(183U);
    msg.setDestination(54677U);
    msg.setDestinationEntity(78U);
    msg.state = 151U;
    msg.plan_id = 23348U;
    msg.wpt_id = 151U;
    msg.settings_chk = 30841U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.186951352464);
    msg.setSource(36156U);
    msg.setSourceEntity(149U);
    msg.setDestination(23880U);
    msg.setDestinationEntity(81U);
    msg.state = 192U;
    msg.plan_id = 52413U;
    msg.wpt_id = 43U;
    msg.settings_chk = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.932533906464);
    msg.setSource(44545U);
    msg.setSourceEntity(229U);
    msg.setDestination(42668U);
    msg.setDestinationEntity(26U);
    msg.uid = 117U;
    msg.frag_number = 98U;
    msg.num_frags = 205U;
    const char tmp_msg_0[] = {41, 48, -118, 96, -101, -118, 59, -49, -8, -125, -29, -20, -106, 92, 109, -85, -112, -32, -48, -68, 36, -49, 100, 95, 100, 93, -94, 1, -66, -4, -36, -77, -114, 46, -32, -67, 50, -108, -41, -97, -12, -57, 19, 67, 57, -127, 59, -31, 25, 47, -102, 18, 86, -100, 100, 38, 89, 60, -111, 6, 95, 11, -4, 17, 9, 86, 95, -3, 33, 63};
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
    msg.setTimeStamp(0.276609479929);
    msg.setSource(24541U);
    msg.setSourceEntity(227U);
    msg.setDestination(33677U);
    msg.setDestinationEntity(92U);
    msg.uid = 72U;
    msg.frag_number = 127U;
    msg.num_frags = 111U;
    const char tmp_msg_0[] = {85, 20, -46, -100, -83, -90, -97, -22, -49, -79, 22, -57, 81, -2, -87, -26, 48, 69, -82, -62, 96, 12, -108, -106, -57, 11, 80, 10, -9, -8, 85, 5, 63, -2, 16, -38, -16, 31, -41, -11, 94, -77, -102, 70, -33, -81, 31, 82, 54, 125, -82, 51, 99, -86, -116, -63, -95, -76, -38, 33, 125, 11, 104, 84, -118, -107, -3, 79, 5, -101, -92, 123, 66, -58, 47, -75, -63, 41, -41, 116, 83, -34, -30, 44, -85, -20, -30};
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
    msg.setTimeStamp(0.69115431383);
    msg.setSource(50055U);
    msg.setSourceEntity(32U);
    msg.setDestination(30010U);
    msg.setDestinationEntity(235U);
    msg.uid = 248U;
    msg.frag_number = 175U;
    msg.num_frags = 138U;
    const char tmp_msg_0[] = {-63, -74, 29, 99, -66, 17, 109, -106, -65, 26, -55, -43, -28, 110, 109, 24, 8, -28, -70, 84, -81, -24, 105, 17, -123, 22, 94, -60, -77, 53, 6, -88, -80, -127, -70, -85, 34, -32, -21, 106, -42, -24, 25, -39, -108, -58, -93, 111, -36, -98, 93, -27, 59, -126, 5, -3, 40, 122, 113, 51, 55, 71, -46, -18, -112, 93, -114, 5, 53, -119, -109, -105, 27, -100, 98, -39, -29, -1, 89, -122, 113, -2, -39, -107, 110, 111, -71, -65, 47, 55, 94, -81, 53, 8, -86, -125, -43, 119, 30, -81, 123, 57, 52, 81, 81, 32, 77, 11, -89, -49, 53, -17, -58, -23, 42, -42, 35, -123, -74, 46, 74, -39, -42, -33, 125, -38, 42, -125, -72, 76, 34, -8, -101, 117, 31, -22, -36, -95, -1, -77, -26, 39, 52, 71, 36, -105, -63, 15, -93, -127, -13, 47, -94, 6, 71, 108, -64, -126, -124, 107, 21, 21, 12, -31, -49, -122};
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
    msg.setTimeStamp(0.256804678057);
    msg.setSource(36798U);
    msg.setSourceEntity(254U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(242U);
    msg.content_type.assign("LFIYLADSQEOFKXGHHXUNABLKZERTGVUETGIFQNBIBNLXCNWGJRJFAX");
    const char tmp_msg_0[] = {73, 48, -52, 18, 95, 108, -3, -84, -101, 97, 7, 51, 97, 88, 4, -15, 122, -111, -35, -35, -124, -72, 54, -48, 6, -103, 66, 114, -59, -10, -10, 91, -55, 100, -53, 103, -15, 40, 90, -22, 73, -37, -125, 8, 122, 36, -48, 44, 30, -80, -87, 44, -71, 111, -77, 80, -33, -73, 56, 86, 93, -69, 85, -13, 90};
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
    msg.setTimeStamp(0.0995048065187);
    msg.setSource(43603U);
    msg.setSourceEntity(116U);
    msg.setDestination(63388U);
    msg.setDestinationEntity(57U);
    msg.content_type.assign("SRMXWEOGKAECKHUXGZPYNOVAXBUCQTSSZZJQORTKPGYEQYCPTBHEMEBRCIFMONWJTLZMXXFGFUWRULXTKCXCELVKKFVIJUELDODRSBWFDXTPIWDFLOMKHVQDAXTHTIGZNZPCQVLYMPVCWSOJMJPHWEJBJBZBETDLMJSNCHULGWYSSYDSIVJNFRDHJZOBVWKGRIWPNNIFQADY");
    const char tmp_msg_0[] = {83, -57, 117, 107, -3, -38, 49, -105, 21, -43, 54, -22, -98, 92, -1, -120, -34, 109, 76, 33, 120, 76, -75, 15, -31, 66, -36, 124, 65, 125, 120, 34, -86, -91, 102, -121, 53, -41, -26, -102, 98, -39, -19, -107, 73, -1, 25, -49, 35, 96, 95, -114, -89, 117, 94, 73, -2, -79, -118, 125, -5, 40, -53, -98, -122, -20, -102, -128, 92, -24, -98, 83, -58, -74, -37, -48, 91, -14, 115, -59, 83, 15, -123, 60, 66, 80, -118, -8, 68, -60, 124, -79, 119, -41, 86, -17, -60, 124, 88, 5, -17, 1, -32, -31, -20, -106, 63, -116, -15, 123, -94, 41, -53, -20, 112, -60, -11, -3, -115, 91, -121, 50, -128, -116, -75, 2, -16, 36, 115, 107, 108, -83, 123, 125, -93, -62, 106, 101, -115, 39, 35, 81, 76, -51, -41, -58, 83, 92, 43, -126, 82, -36, 3, -125, -99, -98, 35, -110, -23, -102, -115, 98, 48, -24, 106, -74, -90, -92, 85, 8, -90, -110, -78, 78, -92, -19, -92, -66, -2, -40, -88, 31, 21, -14, 15, 124, 11, 6, 98, -81, -9, -41, 66, 91, -121, 115, -2, -30, 64, -107, 77, 11, -6, 48, -3, 84, -73, 103, 11};
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
    msg.setTimeStamp(0.296891311354);
    msg.setSource(60012U);
    msg.setSourceEntity(177U);
    msg.setDestination(36465U);
    msg.setDestinationEntity(152U);
    msg.content_type.assign("QJDBSBBAQCTAIWDEXNMZMZWBNCSRVKPGLIMETOXMMTBHEMZTXUQDRISQXSPXNYFNAQWKEOMUZIPSYWGCTHAJCQYDIDHJROPLRGXGJFFCHLJRKFTMFRFEGFVIJRGYXEESOAXZJUSICOAHYJQFRABP");
    const char tmp_msg_0[] = {-87, 18, 6, -106, 2, -18, 102, -36, 54, 121, -59, 29, 69, 84, -83, -86, 42, 11, -78, -66, 89, -114, 13, 37, -68, -128, -41, 92, 30, -110, -71, 92, 90, -35, -34, 24, 115, 45, -14, 17, -89, 70};
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
    msg.setTimeStamp(0.238611628338);
    msg.setSource(33753U);
    msg.setSourceEntity(51U);
    msg.setDestination(7312U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.908592745992);
    msg.setSource(22326U);
    msg.setSourceEntity(158U);
    msg.setDestination(46286U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.0417098446655);
    msg.setSource(47213U);
    msg.setSourceEntity(116U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.010119076817);
    msg.setSource(58191U);
    msg.setSourceEntity(186U);
    msg.setDestination(42520U);
    msg.setDestinationEntity(118U);
    msg.target = 55452U;
    msg.bearing = 0.666988916303;
    msg.elevation = 0.853673176354;

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
    msg.setTimeStamp(0.572943898662);
    msg.setSource(53555U);
    msg.setSourceEntity(93U);
    msg.setDestination(33379U);
    msg.setDestinationEntity(227U);
    msg.target = 44537U;
    msg.bearing = 0.973385811554;
    msg.elevation = 0.209944358539;

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
    msg.setTimeStamp(0.409855950641);
    msg.setSource(53338U);
    msg.setSourceEntity(52U);
    msg.setDestination(26571U);
    msg.setDestinationEntity(81U);
    msg.target = 4857U;
    msg.bearing = 0.45515777521;
    msg.elevation = 0.914896775663;

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
    msg.setTimeStamp(0.281979068262);
    msg.setSource(39878U);
    msg.setSourceEntity(110U);
    msg.setDestination(16029U);
    msg.setDestinationEntity(34U);
    msg.target = 47905U;
    msg.x = 0.145108672288;
    msg.y = 0.722310061643;
    msg.z = 0.609456657799;

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
    msg.setTimeStamp(0.347208295521);
    msg.setSource(57427U);
    msg.setSourceEntity(157U);
    msg.setDestination(16526U);
    msg.setDestinationEntity(138U);
    msg.target = 35129U;
    msg.x = 0.441148660977;
    msg.y = 0.239295269563;
    msg.z = 0.969953524857;

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
    msg.setTimeStamp(0.343005040304);
    msg.setSource(17619U);
    msg.setSourceEntity(110U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(175U);
    msg.target = 43448U;
    msg.x = 0.920353222555;
    msg.y = 0.413633225707;
    msg.z = 0.171070134035;

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
    msg.setTimeStamp(0.530025688283);
    msg.setSource(39812U);
    msg.setSourceEntity(220U);
    msg.setDestination(27688U);
    msg.setDestinationEntity(62U);
    msg.target = 13355U;
    msg.lat = 0.130592773714;
    msg.lon = 0.18464155684;
    msg.z_units = 136U;
    msg.z = 0.26308298424;

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
    msg.setTimeStamp(0.479903310539);
    msg.setSource(43419U);
    msg.setSourceEntity(8U);
    msg.setDestination(24540U);
    msg.setDestinationEntity(104U);
    msg.target = 51951U;
    msg.lat = 0.207109903787;
    msg.lon = 0.189418763543;
    msg.z_units = 131U;
    msg.z = 0.222713993601;

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
    msg.setTimeStamp(0.0684504068988);
    msg.setSource(46473U);
    msg.setSourceEntity(158U);
    msg.setDestination(58751U);
    msg.setDestinationEntity(164U);
    msg.target = 4857U;
    msg.lat = 0.943480062794;
    msg.lon = 0.685821610651;
    msg.z_units = 141U;
    msg.z = 0.487104089035;

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
    msg.setTimeStamp(0.671988003031);
    msg.setSource(57213U);
    msg.setSourceEntity(28U);
    msg.setDestination(23342U);
    msg.setDestinationEntity(126U);
    msg.locale.assign("PKFXVXKIBBMFJMSKHEMMSCUXDEALARTOLWOADMARVGIVFCLWYBGLLRFFXYBOBSHAAZCUPHLYOTYESQHYYHQEZGVNZXZEIGPRULRTYUTPQFZOONQKIRZYUJWHWLUMAZJUZSUVTSGBCIBJSGEJIIZECBTFLDHWDFOGVPWFHSEWTYHMINKKITQCNBMLVX");
    const char tmp_msg_0[] = {-24, 100, 6, 31, -36, 28, -75, 45, -84, 36, -97, -18, 30, -58, -29, 60, -20, 56, -36, 50, -28, -40, -107, 102, -58, -124, -116, -30, 82, -36, -66, 111, -39, 61, 98, -83, -120, -11, -49, 5, -86, -29, 68, 85, 21, 14, -61, 99, -82, 108, -113, 48, 9, -43, -119, 98, 99, -51, -3, 32, 47, -128, 111, 18, 77, -56, 19, -68, -29, -111, 80, -29, -97, 1, -3, -1, -32, 124, -95, -71, 2, 55, 5, 105, 90, 119, 49, -67, -25, -81, 24, -5, -25, -122, 63, 79, 87, 87, 75, 69, -85, -13, -14, 112, 66, 11, 72, 29, 74, 36, -56, 53, -16, 30, 100, -7, -120, 99, 42, -17, -48, -105, 90, -125, -117, -79, 54, -43, -91, 13, 62, 43, 64, 113, -85, 65, -104, -83, 52, -108};
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
    msg.setTimeStamp(0.00123025379472);
    msg.setSource(52077U);
    msg.setSourceEntity(117U);
    msg.setDestination(20068U);
    msg.setDestinationEntity(34U);
    msg.locale.assign("JEBJXZOKBTYJUMXQUFCVVFYROEBXIQHJUNRETAGDVQKSSHIDFUHPZRUNBCWHVCMFMTVUKWOLVJWDAMAXSWICDCLYZBTGTLOLOOYQWBIPRCAXYEMPEWTRJKEQXWZISMSBCNIEBPLJMANKNZGFTGAR");
    const char tmp_msg_0[] = {-40, 76, -126, 62, -81, -58, -12, 90, 86, 30, -108, -44, 89, -23, -68, 28, 38, -94, 71, -15, -76, 6, -127, 44, -32, 91, -110, 105, -46, 95, 30, 123, 81, 104, 51, 66, 78, 48, -52, 63, 50, -47, 18, -14, 125, -120, 124, 120, -69, 52, 32, 55, -119, 98, -90, 49, 84, -83, 18, -26, 46, 76, -102, 75, 40, -37, -102, -70, 55, 106, -15, 92, 14, 113, -120, -77, -66, -71, 48, -14, 38, 42, 79, -68, 112, -72, -61, -98, -3, -40, -2, 106, -96, 2, -15, 122, -58, -83, -55, 20, 121, -69, 10, 49, -127, -33, 101, 35, 73, -14, 27, 84, -62, -25, -102, -87, 12, -2, 14, -59, 120, 42, -68, 57, 86, 84, -91, 87, 9, -119, -5, -97, 77, 20, -79, 32, -27, -115, -117, -4, 49, 114, 34, -77, 108, -59, -74, 110, 23, 58, -37, 2, 107, -67, -31, 103, -26, 87, 97, -100, -6, 20, 102, -42, -98, -112, 69, 122, 8, -104, -124, -67, -77, 122, 114, 84, -100, 104, -43, -91, -120};
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
    msg.setTimeStamp(0.346333384751);
    msg.setSource(3073U);
    msg.setSourceEntity(79U);
    msg.setDestination(37580U);
    msg.setDestinationEntity(231U);
    msg.locale.assign("TAMOZYKBRMDQYODUDCQNFXLIN");
    const char tmp_msg_0[] = {112, -40, 82, 47, 54, -49, 46, 44, 55, 59, -2, -115, 3, -3, 113, -102, 113, -32, -76, 39, 117, -3, -53, -44, 69, 61, -46, 13, 111, -17, 122, 123, -20, 38, 98, 40, -71, -119, -13, -57, 43, -43, -126, -12, 116, 81, 31, -19, -88, -56, 5, -90, -1, -39, 27, 30, 113, -64, 23, -16, 36, -113, -74, -45, -7, -95, 102, 62, 11, 110, -29, -79, 65, -78, -51, 57, -86, -89, -89, 117, 91, -73, -22, 120, -32, -95, 44, -10, -8, -14, -127, 63, -74, -109, -73, -92, -91, 67, 102, -10, -99, -12, 26, 60, 29, -40, 88, 65, -37, -88, -125, -90, 10, 93, -55, -121, -90, -35, 4, 80, 74, 54, -34, -30, 76, -57, 126, -53, -128, 39, -96, 104, -104, 26, 7, -25, 52, 63, 81, 70, -36, -41, 12, -57, 66, 86, 48, -103, -100, -56, 77};
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
    msg.setTimeStamp(0.964871034756);
    msg.setSource(36970U);
    msg.setSourceEntity(85U);
    msg.setDestination(56707U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.262829058892);
    msg.setSource(64230U);
    msg.setSourceEntity(93U);
    msg.setDestination(55733U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.0179533785394);
    msg.setSource(31869U);
    msg.setSourceEntity(205U);
    msg.setDestination(900U);
    msg.setDestinationEntity(179U);

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

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.171944395003);
    msg.setSource(18342U);
    msg.setSourceEntity(240U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(174U);
    msg.camid = 192U;
    msg.x = 47513U;
    msg.y = 13622U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.179347347984);
    msg.setSource(32606U);
    msg.setSourceEntity(115U);
    msg.setDestination(44816U);
    msg.setDestinationEntity(19U);
    msg.camid = 184U;
    msg.x = 20339U;
    msg.y = 32132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.363588515657);
    msg.setSource(56226U);
    msg.setSourceEntity(1U);
    msg.setDestination(3645U);
    msg.setDestinationEntity(105U);
    msg.camid = 16U;
    msg.x = 37173U;
    msg.y = 43721U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.818013854296);
    msg.setSource(26215U);
    msg.setSourceEntity(16U);
    msg.setDestination(23026U);
    msg.setDestinationEntity(4U);
    msg.camid = 55U;
    msg.x = 22245U;
    msg.y = 12247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.166208139398);
    msg.setSource(15455U);
    msg.setSourceEntity(73U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(77U);
    msg.camid = 209U;
    msg.x = 52690U;
    msg.y = 65401U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.173293076061);
    msg.setSource(62858U);
    msg.setSourceEntity(230U);
    msg.setDestination(30380U);
    msg.setDestinationEntity(116U);
    msg.camid = 190U;
    msg.x = 14795U;
    msg.y = 14917U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.825597713936);
    msg.setSource(56160U);
    msg.setSourceEntity(96U);
    msg.setDestination(29337U);
    msg.setDestinationEntity(3U);
    msg.tracking = 3U;
    msg.lat = 0.564653209196;
    msg.lon = 0.204200751779;
    msg.x = 0.796834640542;
    msg.y = 0.35216934872;
    msg.z = 0.670208213196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.669644269259);
    msg.setSource(23081U);
    msg.setSourceEntity(71U);
    msg.setDestination(1537U);
    msg.setDestinationEntity(67U);
    msg.tracking = 91U;
    msg.lat = 0.465255229782;
    msg.lon = 0.464478628769;
    msg.x = 0.448035401175;
    msg.y = 0.376628373378;
    msg.z = 0.66254646116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.691013139406);
    msg.setSource(8594U);
    msg.setSourceEntity(107U);
    msg.setDestination(54528U);
    msg.setDestinationEntity(232U);
    msg.tracking = 90U;
    msg.lat = 0.423955628401;
    msg.lon = 0.681314824951;
    msg.x = 0.336699260562;
    msg.y = 0.718119417097;
    msg.z = 0.844042440663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.171497633674);
    msg.setSource(30354U);
    msg.setSourceEntity(137U);
    msg.setDestination(63351U);
    msg.setDestinationEntity(233U);
    msg.target.assign("MGFWMXXSFMLYDZWHICCDAHQTAKJKEDHKACOOOOQXVDIZBMEGCFBFHHDVDPBPAUCXNUKSKQFAATHXZYIBTREMBCJYMVN");
    msg.lbearing = 0.00413176271741;
    msg.lelevation = 0.0974905179627;
    msg.bearing = 0.101527637802;
    msg.elevation = 0.408883523169;
    msg.phi = 0.850168475424;
    msg.theta = 0.808062730941;
    msg.psi = 0.374966381654;
    msg.accuracy = 0.118688726594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.33440225909);
    msg.setSource(51608U);
    msg.setSourceEntity(118U);
    msg.setDestination(54669U);
    msg.setDestinationEntity(7U);
    msg.target.assign("WYHHYOUSMZKCFIIVJAASXTGPVRNUUDGNMDCHSQHGLKTIKESVVFSLRLZHGRPLWQAWYAFCMUCTZXBVDXZBBTAPGJ");
    msg.lbearing = 0.780005533385;
    msg.lelevation = 0.442880923479;
    msg.bearing = 0.283033549688;
    msg.elevation = 0.452963457447;
    msg.phi = 0.214598401348;
    msg.theta = 0.634032328901;
    msg.psi = 0.167926001529;
    msg.accuracy = 0.166375852687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.731181697755);
    msg.setSource(59614U);
    msg.setSourceEntity(51U);
    msg.setDestination(4591U);
    msg.setDestinationEntity(99U);
    msg.target.assign("CFPBEJBUDEXVLSQWKLQDRXFEEUIYPXTWCFZTQMVRIFGWQGHEQZIDJJHZSUZHAOPANSGGQPABQXNYZCXSKZBYMRWJUV");
    msg.lbearing = 0.748054745129;
    msg.lelevation = 0.789725016049;
    msg.bearing = 0.696724238191;
    msg.elevation = 0.602461615144;
    msg.phi = 0.88765218874;
    msg.theta = 0.651077548937;
    msg.psi = 0.591883984583;
    msg.accuracy = 0.106361960533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.549487489204);
    msg.setSource(52438U);
    msg.setSourceEntity(242U);
    msg.setDestination(52689U);
    msg.setDestinationEntity(218U);
    msg.target.assign("UILBHVJABIBERDEZHQLZVGCTDORGIKMREYVXYOHOAIQHDFDDBFQKRCKGSQVCJLIWNZPKUMTJPTIH");
    msg.x = 0.550194535774;
    msg.y = 0.920975033612;
    msg.z = 0.755601417866;
    msg.n = 0.0992380819103;
    msg.e = 0.595017291212;
    msg.d = 0.78475843525;
    msg.phi = 0.339724954973;
    msg.theta = 0.31193234961;
    msg.psi = 0.153286173428;
    msg.accuracy = 0.0309072864267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.510217264881);
    msg.setSource(48110U);
    msg.setSourceEntity(211U);
    msg.setDestination(64754U);
    msg.setDestinationEntity(91U);
    msg.target.assign("NZJWXYCGYMHPFHAEXJXAQXSIYWCSIVYMRIUZOWTRWQDOIEJUJURGGDBIOSVEWRUSGFMLTBJHCHARQCTZELEKONPNQTWVZFLXRZIBLEBDXLKNMYJOAWGWONMVUIKHDQMCBLFPUAIMOBJWJERBSTVAMPETLJ");
    msg.x = 0.581955198197;
    msg.y = 0.572958473104;
    msg.z = 0.515507191363;
    msg.n = 0.947529984496;
    msg.e = 0.935767889602;
    msg.d = 0.827509015123;
    msg.phi = 0.225370395816;
    msg.theta = 0.678459283786;
    msg.psi = 0.0435410782228;
    msg.accuracy = 0.318572367659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.749721460559);
    msg.setSource(62572U);
    msg.setSourceEntity(114U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(3U);
    msg.target.assign("JRQGZHCORFNANVKUKMOVPMULCOKTAEPNGNOKTWLJPMDGSGYNWTYAQXWFRTSDDFGXZVKXULEHSTYHPCKBHZOJMDEZXYLVJEVJCBLMUIZAISHUTXRPFIVSFUJQILAKLBEHDFXYPVWPTRAHCMEQBONOJLGWRQLTKIVJYFONHRKXEMDZQVMHBKYDDUGSEOYZRRC");
    msg.x = 0.281377733913;
    msg.y = 0.414348955305;
    msg.z = 0.605194541094;
    msg.n = 0.950142382882;
    msg.e = 0.716521495701;
    msg.d = 0.81894921563;
    msg.phi = 0.745198327028;
    msg.theta = 0.507739743915;
    msg.psi = 0.473321664315;
    msg.accuracy = 0.329004116132;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.785586961632);
    msg.setSource(39940U);
    msg.setSourceEntity(114U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(163U);
    msg.target.assign("UXYMYYCGQLMFWIOONHETGQRHYOHGWQFNQCMUCPNSQYJANNLUVIYNNTOXKCIKKRIJZKDTTXMMPYOQZCQFEHFFXWSCAFSQCFIHPPOVZBDUVEZISLVIOPLEWDBBDBDDSYDRXHKAZEPZBWHDUSWXHXZAPZTROTTBVWGHTCKAYCIBGOVVREDLT");
    msg.lat = 0.155970833917;
    msg.lon = 0.30740828578;
    msg.z_units = 174U;
    msg.z = 0.280517808588;
    msg.accuracy = 0.822507855135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.206925629757);
    msg.setSource(64715U);
    msg.setSourceEntity(141U);
    msg.setDestination(3952U);
    msg.setDestinationEntity(96U);
    msg.target.assign("AASDLQTYZCTDSEOCMTGGCMPXQLBCHZKFHDYCWRVNLLIDDQNVPBJGAKAVYVBPYKUDQURWGLCTLCNWWPOZNYLMLBTVTYXDFJBXJDRESWRUQYGSSOJLNPMOIOWUHUCOZWJFQPMBSKAYDMAEESKGFGMXHRSEKKBUZWJR");
    msg.lat = 0.457998867595;
    msg.lon = 0.303448252319;
    msg.z_units = 23U;
    msg.z = 0.112941647758;
    msg.accuracy = 0.356474520474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.583045709966);
    msg.setSource(51422U);
    msg.setSourceEntity(25U);
    msg.setDestination(24436U);
    msg.setDestinationEntity(58U);
    msg.target.assign("NTCASMJJIEQAVXXONBVKISQZHDOGPSRPKVPVLEHPBBNGXYUELQXOGEYRKFS");
    msg.lat = 0.129286305749;
    msg.lon = 0.783923895533;
    msg.z_units = 9U;
    msg.z = 0.454335192481;
    msg.accuracy = 0.0603637714943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.738584466472);
    msg.setSource(20828U);
    msg.setSourceEntity(127U);
    msg.setDestination(15752U);
    msg.setDestinationEntity(229U);
    msg.name.assign("NGEMHFPSUGCIVFKRJEALRTLRTAGAOEPMZYVSUGVYWMXPGVRHPZJDPOWINONMZTUIPLXVWHTUXZSEDLPLDCBBNRZZQCWJAOOU");
    msg.lat = 0.886556443686;
    msg.lon = 0.454265642533;
    msg.z = 0.601018083771;
    msg.z_units = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.713291758277);
    msg.setSource(21780U);
    msg.setSourceEntity(164U);
    msg.setDestination(42629U);
    msg.setDestinationEntity(131U);
    msg.name.assign("BYJPQNIYSDDWANVQECQUWRMQCHBFMUTCRRVFBUTYWOLHCBJXYBIOSGJVHEAXYOGIEPMELBIIIDALETJVWNORIFSUNZMWWCJCARRLRYYPQRBHIYGNJPXZNSTADROKXMQRZWZPEIZTUKDQVXXEXLQMJPSCCTDBKZTUPJGLUPV");
    msg.lat = 0.198302258961;
    msg.lon = 0.23266706083;
    msg.z = 0.628100058638;
    msg.z_units = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.806544155212);
    msg.setSource(59399U);
    msg.setSourceEntity(94U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(105U);
    msg.name.assign("DJQLRCIJLCZLADBTANBOLBGQYJKOCAIFWCXPXRZEPPJNFJZDUMSENDHFXOZILFMNEHZUZLERFVKAGJSMMOGYNLIGOHXWEXYPHIWQQAOOEYTLATGFQPUPDQXQNAPMCCHRJKVKVXGSZWZVARTQQYMCAVIVMKUBUDMPSDU");
    msg.lat = 0.586659577636;
    msg.lon = 0.331385170172;
    msg.z = 0.0928542932607;
    msg.z_units = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.660105270789);
    msg.setSource(4973U);
    msg.setSourceEntity(76U);
    msg.setDestination(30608U);
    msg.setDestinationEntity(16U);
    msg.op = 216U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EFWAGBPUQAKBLYNFVPVULLISJVWCRDEUWCTXDOENHORFZJJINTTPLMDNQHMTKYGISRDNIIGQBUDADCDALXOPZCTHKDZLSAMPXSOKNHBSHYLAVIICFWOZZHGFWCHEQGQGVOWQBOWKKXNKJEEFPBSSJASGGOAZUOEKFIJYYZCRHUWGYINHOJ");
    tmp_msg_0.lat = 0.615307281496;
    tmp_msg_0.lon = 0.61322666232;
    tmp_msg_0.z = 0.487866826714;
    tmp_msg_0.z_units = 205U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.489958685104);
    msg.setSource(51291U);
    msg.setSourceEntity(69U);
    msg.setDestination(63868U);
    msg.setDestinationEntity(87U);
    msg.op = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.631513898179);
    msg.setSource(51603U);
    msg.setSourceEntity(189U);
    msg.setDestination(59578U);
    msg.setDestinationEntity(63U);
    msg.op = 110U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RLKFWIQAZZZAPORRNHBCLNVTDLYFDDREQXVHYTISNOQOUOCYHGRQEPXMXTPRBTFBBPMRLEDTGLSNSMFZAWBEWSHSAJQUDKUGIIOBDFSYUMIKALPGMMHMCOGIVLGGRSUVUHCUYPTENTQLFARWKCEOXKTWPNDPEPBXWJCGOCVVJFVQUALK");
    tmp_msg_0.lat = 0.908590891044;
    tmp_msg_0.lon = 0.148039296372;
    tmp_msg_0.z = 0.351901424004;
    tmp_msg_0.z_units = 246U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.568987222345);
    msg.setSource(14004U);
    msg.setSourceEntity(170U);
    msg.setDestination(46204U);
    msg.setDestinationEntity(155U);
    msg.value = 0.325278185305;
    msg.type = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.771338872169);
    msg.setSource(25566U);
    msg.setSourceEntity(233U);
    msg.setDestination(47405U);
    msg.setDestinationEntity(157U);
    msg.value = 0.781648319922;
    msg.type = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.318224925746);
    msg.setSource(25161U);
    msg.setSourceEntity(90U);
    msg.setDestination(24518U);
    msg.setDestinationEntity(45U);
    msg.value = 0.12055620597;
    msg.type = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.247566159964);
    msg.setSource(36127U);
    msg.setSourceEntity(152U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(90U);
    msg.value = 0.361764613705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.930733922508);
    msg.setSource(34326U);
    msg.setSourceEntity(94U);
    msg.setDestination(23112U);
    msg.setDestinationEntity(175U);
    msg.value = 0.205675635387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.299855412133);
    msg.setSource(62531U);
    msg.setSourceEntity(71U);
    msg.setDestination(43308U);
    msg.setDestinationEntity(87U);
    msg.value = 0.904602226793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.409630855749);
    msg.setSource(27558U);
    msg.setSourceEntity(123U);
    msg.setDestination(9740U);
    msg.setDestinationEntity(183U);
    msg.timestamp_last_service = 0.972556233491;
    msg.time_next_service = 0.383992180573;
    msg.time_motor_next_service = 0.760652422188;
    msg.time_idle_ground = 0.328578568891;
    msg.time_idle_air = 0.41181765673;
    msg.time_idle_water = 0.79344780935;
    msg.time_idle_underwater = 0.941187147486;
    msg.time_idle_unknown = 0.83775935134;
    msg.time_motor_ground = 0.661252536451;
    msg.time_motor_air = 0.0783275006835;
    msg.time_motor_water = 0.750346581587;
    msg.time_motor_underwater = 0.880188152148;
    msg.time_motor_unknown = 0.945713945539;
    msg.rpm_min = -14698;
    msg.rpm_max = -16770;
    msg.depth_max = 0.492170802761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.737465219613);
    msg.setSource(9002U);
    msg.setSourceEntity(56U);
    msg.setDestination(15474U);
    msg.setDestinationEntity(13U);
    msg.timestamp_last_service = 0.491897482988;
    msg.time_next_service = 0.923220173932;
    msg.time_motor_next_service = 0.528508283312;
    msg.time_idle_ground = 0.391231992162;
    msg.time_idle_air = 0.12513260816;
    msg.time_idle_water = 0.070461381105;
    msg.time_idle_underwater = 0.488881595517;
    msg.time_idle_unknown = 0.850333478486;
    msg.time_motor_ground = 0.645115223155;
    msg.time_motor_air = 0.124627014233;
    msg.time_motor_water = 0.922147985828;
    msg.time_motor_underwater = 0.164690698697;
    msg.time_motor_unknown = 0.289152659802;
    msg.rpm_min = 28300;
    msg.rpm_max = 2366;
    msg.depth_max = 0.0468307674916;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.145509853395);
    msg.setSource(56505U);
    msg.setSourceEntity(182U);
    msg.setDestination(49491U);
    msg.setDestinationEntity(66U);
    msg.timestamp_last_service = 0.890942128094;
    msg.time_next_service = 0.459619251288;
    msg.time_motor_next_service = 0.108040970707;
    msg.time_idle_ground = 0.433331420578;
    msg.time_idle_air = 0.169142171537;
    msg.time_idle_water = 0.423515126661;
    msg.time_idle_underwater = 0.889731422388;
    msg.time_idle_unknown = 0.435081509293;
    msg.time_motor_ground = 0.889590706778;
    msg.time_motor_air = 0.622794444547;
    msg.time_motor_water = 0.159910848118;
    msg.time_motor_underwater = 0.472883308294;
    msg.time_motor_unknown = 0.812900717416;
    msg.rpm_min = 4725;
    msg.rpm_max = -32233;
    msg.depth_max = 0.931785083741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.0553956331133);
    msg.setSource(44789U);
    msg.setSourceEntity(119U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(83U);
    msg.severity = 101U;
    msg.text.assign("YTKHHHLHYFTYHVFPCCPKIJMMWUOTXQPWSLTWLYMDGGVQLATQDGPQCJRVHPNIHIXVPCJDGDEXJSOGLXBVCOUMDERT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.670564249362);
    msg.setSource(37881U);
    msg.setSourceEntity(127U);
    msg.setDestination(45103U);
    msg.setDestinationEntity(164U);
    msg.severity = 36U;
    msg.text.assign("BIIIEPTMVAACDYDZPSVYPLPCYHXJESXEZEXMBHEKWQMUCFSCFPWQYEODZHECBYTOMWBFQIVSUPRJROJMWUDZWTGRZTRMHJFWBQGGOBUKKGQXBLLGPBYTFVSNJAFIYHZXHLHFFTNLVDNALACXCTUJVAUDUSUENBNKGDVOLGKGSCYQIIYLVSXQXZPNOINPJBWPWQCRMSAKKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.643962337008);
    msg.setSource(49499U);
    msg.setSourceEntity(103U);
    msg.setDestination(58520U);
    msg.setDestinationEntity(76U);
    msg.severity = 91U;
    msg.text.assign("ELGKOFMBNQVLJCLAWEXHJPZOPURBSQYZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0693547269478);
    msg.setSource(35035U);
    msg.setSourceEntity(110U);
    msg.setDestination(27331U);
    msg.setDestinationEntity(173U);
    msg.channel = 89;
    msg.value = -1885055178;
    msg.gain = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0584157408859);
    msg.setSource(26941U);
    msg.setSourceEntity(183U);
    msg.setDestination(41308U);
    msg.setDestinationEntity(88U);
    msg.channel = 12;
    msg.value = -2123848010;
    msg.gain = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.761528238394);
    msg.setSource(23314U);
    msg.setSourceEntity(249U);
    msg.setDestination(45425U);
    msg.setDestinationEntity(176U);
    msg.channel = -48;
    msg.value = 1650075160;
    msg.gain = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.786450253898);
    msg.setSource(19834U);
    msg.setSourceEntity(254U);
    msg.setDestination(49674U);
    msg.setDestinationEntity(104U);
    msg.ch01 = 0.291218983111;
    msg.ch02 = 0.783098010243;
    msg.ch03 = 0.756924381344;
    msg.ch04 = 0.567523501837;
    msg.ch05 = 0.882455650225;
    msg.ch06 = 0.645030486555;
    msg.ch07 = 0.117726738906;
    msg.ch08 = 0.0194142833026;
    msg.ch09 = 0.439872224904;
    msg.ch10 = 0.318189359476;
    msg.ch11 = 0.729696361766;
    msg.ch12 = 0.139738676794;
    msg.ch13 = 0.810374650974;
    msg.ch14 = 0.447916484862;
    msg.ch15 = 0.0923928195032;
    msg.ch16 = 0.181488231563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.873893624508);
    msg.setSource(64167U);
    msg.setSourceEntity(189U);
    msg.setDestination(42666U);
    msg.setDestinationEntity(219U);
    msg.ch01 = 0.0729975800733;
    msg.ch02 = 0.589298893485;
    msg.ch03 = 0.977632734233;
    msg.ch04 = 0.00345118294313;
    msg.ch05 = 0.61004109341;
    msg.ch06 = 0.694529864409;
    msg.ch07 = 0.602860244084;
    msg.ch08 = 0.217626927086;
    msg.ch09 = 0.863200234196;
    msg.ch10 = 0.424311358106;
    msg.ch11 = 0.322493613451;
    msg.ch12 = 0.622489636539;
    msg.ch13 = 0.048638364779;
    msg.ch14 = 0.286614132218;
    msg.ch15 = 0.395393273965;
    msg.ch16 = 0.364317080101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.814657963351);
    msg.setSource(25608U);
    msg.setSourceEntity(210U);
    msg.setDestination(11589U);
    msg.setDestinationEntity(34U);
    msg.ch01 = 0.688299292701;
    msg.ch02 = 0.61568018016;
    msg.ch03 = 0.289569318242;
    msg.ch04 = 0.702433625827;
    msg.ch05 = 0.702352484848;
    msg.ch06 = 0.167042024607;
    msg.ch07 = 0.945511615422;
    msg.ch08 = 0.215977469513;
    msg.ch09 = 0.176045448159;
    msg.ch10 = 0.464989111289;
    msg.ch11 = 0.624059169305;
    msg.ch12 = 0.0361937796452;
    msg.ch13 = 0.790698420482;
    msg.ch14 = 0.0176101534094;
    msg.ch15 = 0.922490040269;
    msg.ch16 = 0.450765463907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
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
