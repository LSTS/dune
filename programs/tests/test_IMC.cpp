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
    msg.setTimeStamp(0.370875418911);
    msg.setSource(64043U);
    msg.setSourceEntity(18U);
    msg.setDestination(12636U);
    msg.setDestinationEntity(11U);
    msg.state = 60U;
    msg.flags = 45U;
    msg.description.assign("HXHOVZBWQVIEKSMINQHKEJYDFXNXCXOOVRIBZUPAQYNJMVBCEOIUFYRYNEWBWHDLSVAHQQMAOEPZQXGBQXSBKZUSZDRSUKGAQPHJMKQPVJUWBMFUUGSJTZKJCPRWMLKRIBNVRGZJOPSKXLNFSVUZDKDHEXVPJCHLTUWLTYCVIMCEIGICSDRLYASYYXCRPTFTTGLONGFCQFRFGTTFU");

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
    msg.setTimeStamp(0.604614325632);
    msg.setSource(38524U);
    msg.setSourceEntity(76U);
    msg.setDestination(28301U);
    msg.setDestinationEntity(148U);
    msg.state = 41U;
    msg.flags = 218U;
    msg.description.assign("ATIKXIPPLAOFOHOSJRQCXFDSGIJSBOBHZQLTTMUTFBYMJBNHLDZDKPBBIQJNZFV");

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
    msg.setTimeStamp(0.338776785066);
    msg.setSource(29420U);
    msg.setSourceEntity(119U);
    msg.setDestination(22383U);
    msg.setDestinationEntity(177U);
    msg.state = 95U;
    msg.flags = 56U;
    msg.description.assign("MIDCSHLTGINYYNIAJARHMMBDWQRCJPOFTOLYVKEOXVWZUZAAXZISZOLYLASZRKVLIGBFPNJUNKVAXJYZNNCHTBVSGKBLBEWDTSDFRIWTFHXSKRBGUVBJZUEWUXBCMKFXCSGCEYPUOTGYQMHQJXMEDAGSPPMAICHTEWHDFIQDHKKOMFFCCEOKAXWEQEYXLPWDVKTFVWOZRRLVRJUUXQCLPDJM");

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
    msg.setTimeStamp(0.107856198235);
    msg.setSource(54652U);
    msg.setSourceEntity(221U);
    msg.setDestination(43467U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.891626367042);
    msg.setSource(7755U);
    msg.setSourceEntity(60U);
    msg.setDestination(38901U);
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
    msg.setTimeStamp(0.75775128801);
    msg.setSource(7529U);
    msg.setSourceEntity(77U);
    msg.setDestination(58577U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.11320289478);
    msg.setSource(20187U);
    msg.setSourceEntity(37U);
    msg.setDestination(58432U);
    msg.setDestinationEntity(219U);
    msg.id = 138U;
    msg.label.assign("FOVQSQILWJBZFJUGDWHBWGFLLUUUHAQHHTJJTNNQVAYHQBFINSLHOVEGFHVDBXWLOKQCNPIPEXZWPAGYRGRAMXQVRXNMIYOJKVENZXZYMSDGRTDSMWFTCRUUYS");
    msg.component.assign("CELOIOEDESERCIWNZHBDIWOBVXBMQRZBJBMYRIVCZZUYVITBILAQUNUFXZJMNTGNPVSGFSOTUCPZYPUXKEGMOGXKRULRNPXQZVRQCZTMESGDFJPLRZQVAWFQKJHPFCXIAXFIMWETLDKYHGHTRYTMPLASAZKOSDLWUWJWYOYTIMJTOLMAWNWRHCQALJ");
    msg.act_time = 14664U;
    msg.deact_time = 1977U;

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
    msg.setTimeStamp(0.349034478266);
    msg.setSource(20149U);
    msg.setSourceEntity(6U);
    msg.setDestination(34286U);
    msg.setDestinationEntity(46U);
    msg.id = 149U;
    msg.label.assign("XLJQVMFNTNISWJBWFMIAGWZAZAIWMHHJEDHHAIXZGPMMPPNOLQCYLCFCUBAAKXDQUXWIKLQQDMFTLHLJSZKMAOLTNPZVZOGVUCLCICPOFEIEBGSRSDWWHKRC");
    msg.component.assign("YFKPMKMQCBFDZXPDHLKZCSEMXFBFZVNUEQILFRYGOQRVLFHWPHMOCAJJQIVULJUJQBKJHVHRHMFCTTAUHZLWZJMWPGPNXETGFQYZICOAGELKTQSSVJDDNKPIGAALCKORSTEKNTIENSATZWNYGUTDNXHXASQQRTVPWZTUWVWYNLBGNBVDCCXSGHROYMVROUXKOZLSAWWEIEGLFEDIQUVXRNRBXSIYBUOMJSDIFGIECHADMJWPBJDAR");
    msg.act_time = 4133U;
    msg.deact_time = 6494U;

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
    msg.setTimeStamp(0.235603256871);
    msg.setSource(7591U);
    msg.setSourceEntity(157U);
    msg.setDestination(59019U);
    msg.setDestinationEntity(79U);
    msg.id = 81U;
    msg.label.assign("YHYHRZZJWQQOYEVRGSJYRQNZOUZXIWZBDBDGVSNRHXVDEOGUUTERBRQTNEUNBCMOQFMSKICAJGMKGTIQTZKVMLSCDPJEYHVMGTPOMUBSBOKCQIZREVVCMFNAJSPSOFCHFALDENHDWOUJVLWSPJICAJZAIRLDRRQTNLTBMESXKISLHADAEUHZPVLHJBYZWFGLFKKNOXLFDXYBQFOXGKYWDXWXVFABCPGFTLPAKNWUQJWTK");
    msg.component.assign("GFVWIQTUWJDYQDESAQYEMRAMZAIXLHSVWGZVNBFIMPOJBTNHXJKYS");
    msg.act_time = 14668U;
    msg.deact_time = 11448U;

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
    msg.setTimeStamp(0.876355122868);
    msg.setSource(11002U);
    msg.setSourceEntity(173U);
    msg.setDestination(460U);
    msg.setDestinationEntity(248U);
    msg.id = 169U;

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
    msg.setTimeStamp(0.389304373063);
    msg.setSource(10465U);
    msg.setSourceEntity(203U);
    msg.setDestination(48346U);
    msg.setDestinationEntity(207U);
    msg.id = 94U;

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
    msg.setTimeStamp(0.600678472832);
    msg.setSource(27190U);
    msg.setSourceEntity(153U);
    msg.setDestination(64577U);
    msg.setDestinationEntity(189U);
    msg.id = 60U;

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
    msg.setTimeStamp(0.0410311591769);
    msg.setSource(6797U);
    msg.setSourceEntity(188U);
    msg.setDestination(59967U);
    msg.setDestinationEntity(226U);
    msg.op = 175U;
    msg.list.assign("DMDBYACTKOXWEHPMOUWFIGBDFKHGWPHQJVWTZECMCENAIIUJIAWZHMLOOEPZRXFJHDKRRQVXUILFRLBRNNSKQCIELJECRPUMGIALKLJZNJTQZFDXNMZVVSGRUHBIASAAPUFCGMQAYRJVSYYGFQZIBIWUJYTSNVWETNLDMTRQQJKYKTLWAZBFRHQDXTFUOHPMOBQHBZNHVKEUJSXZACEXXNWGLDNVGXGSYBKXVOBCMOPTGSTPPDC");

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
    msg.setTimeStamp(0.0872635079132);
    msg.setSource(53794U);
    msg.setSourceEntity(4U);
    msg.setDestination(65188U);
    msg.setDestinationEntity(218U);
    msg.op = 56U;
    msg.list.assign("KLUJHVYKBFPPAMZJOGGNPVTFVWJWMTSLVKFBPTKINCNTHFILMYXYWELECEUFOHZHQNNOXUZZOREDCTUXVEHGRDDHFDZLSJAEKZVWKHSHTHMXTYDOKCARQMRCTSPYLBRDUKZDXMQLYCWISBSIEJVURFJSUGEVWJPASENL");

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
    msg.setTimeStamp(0.91969586689);
    msg.setSource(53005U);
    msg.setSourceEntity(7U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(78U);
    msg.op = 224U;
    msg.list.assign("WGDIFCFKPOQCBTADWKFNUXLTEYCL");

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
    msg.setTimeStamp(0.831560599949);
    msg.setSource(17847U);
    msg.setSourceEntity(77U);
    msg.setDestination(10944U);
    msg.setDestinationEntity(135U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.272206393392);
    msg.setSource(25437U);
    msg.setSourceEntity(62U);
    msg.setDestination(19095U);
    msg.setDestinationEntity(180U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.0912413892853);
    msg.setSource(29394U);
    msg.setSourceEntity(227U);
    msg.setDestination(7984U);
    msg.setDestinationEntity(102U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.0138797192052);
    msg.setSource(61619U);
    msg.setSourceEntity(137U);
    msg.setDestination(31383U);
    msg.setDestinationEntity(248U);
    msg.value = 189U;

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
    msg.setTimeStamp(0.186597837644);
    msg.setSource(38209U);
    msg.setSourceEntity(237U);
    msg.setDestination(45406U);
    msg.setDestinationEntity(237U);
    msg.value = 59U;

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
    msg.setTimeStamp(0.991986665699);
    msg.setSource(33658U);
    msg.setSourceEntity(182U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(58U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.916661343723);
    msg.setSource(37786U);
    msg.setSourceEntity(223U);
    msg.setDestination(37301U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("XJMKVRDZGZYDQXVPHMLEAPRNYWKCO");
    msg.message_id = 47184U;

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
    msg.setTimeStamp(0.0789550438246);
    msg.setSource(19641U);
    msg.setSourceEntity(60U);
    msg.setDestination(22959U);
    msg.setDestinationEntity(47U);
    msg.consumer.assign("ABWUTRQOMBZPTLFQKUJDYUYIXPVJHPCXFTNBOAPWDKFPKVJJGQXGVWNETMHQNWZSBIRQHPSJYDGOZDMPNBQAKMABJINQNPYMWRXARVCIHUSRISBBDGAELLWJQZTYCVZXDGZCEYFCLOGRSFWLGMYKIOTEVTKYHJ");
    msg.message_id = 6131U;

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
    msg.setTimeStamp(0.243731776051);
    msg.setSource(29330U);
    msg.setSourceEntity(23U);
    msg.setDestination(15146U);
    msg.setDestinationEntity(131U);
    msg.consumer.assign("POOGMNRNEGIXYUCITPDXWYKLGWTDNDKNUXKYIIUHUSDCUWCABFFCANDFQHMYLGLHMRTYLUKDDHBFVSHQMAIFLEFLZSZKISZJHADWYYJQESWGBUSQTBQZEPL");
    msg.message_id = 22019U;

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
    msg.setTimeStamp(0.586777341745);
    msg.setSource(40491U);
    msg.setSourceEntity(55U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.970351584139);
    msg.setSource(29472U);
    msg.setSourceEntity(220U);
    msg.setDestination(64749U);
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
    msg.setTimeStamp(0.29836889262);
    msg.setSource(57058U);
    msg.setSourceEntity(237U);
    msg.setDestination(55915U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.216089418057);
    msg.setSource(62788U);
    msg.setSourceEntity(210U);
    msg.setDestination(13659U);
    msg.setDestinationEntity(215U);
    msg.section.assign("BESFKLBFDUEJINSZXSHTGWFWBQBIBBLXVKKAJYOKNCMLXSGEMVAALTHICHTUPTIEZWWUWVCQRIXOBYOESMMLNQFWBRZYTWXCRQTGDAVDAROQOGZDTYGRSLCEKPIPAMORRUFXICVDZXTPSSUPNWHHJDUHLJACDNACQTQGEJQJGZUFTONXZFJFVNYMACOUSKKDMYPUYAZHYCGQLVZPRIWXEMNYMHJJ");
    msg.param.assign("KNLLYBWSYUQWYJHWXPIKVGAFEZIXBMVBUOLXRZZSXCYRUVCT");
    msg.value.assign("JHITPCUVVKWNRPYBERSQPISYQMWKFKEFAMVSNDAQXMNQUVHYYFBDNRDQHJWBJOPNUETHMZRPSLNUUVEAYXVONVTXLRTHGYRDNREBIMXTHKYOAJJPEUMZIGZVWOCWGTQAEFOJSQEGCMHPTTKMWILZYCKEXSGXJIVKOOXXTWCLDBABCHURFKLDUGDSZIURZHPLBYXGLKH");

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
    msg.setTimeStamp(0.465843532314);
    msg.setSource(46914U);
    msg.setSourceEntity(149U);
    msg.setDestination(8704U);
    msg.setDestinationEntity(39U);
    msg.section.assign("FTDLOIXPPSQNXXXNCIIBVLRONGWMANTDRTZFRMECJQJFVKIXNSAOMVHUEHSQEJHWXCIWDOJEKBLMVHHJTVRIAOPFGAYIESZOXFSVHCBOWCDUDCUPCKNMBPWVKGWSDPTBYZJGKRHIQBBGYXGQYZVLQFMMLBQAOEETMWKPAZNPPWRFHAEXDCYOIQOSSWUTHJWLKAAEAKDZXFTDVMULZKVYGYFRZZYQYZURYMEPGLJKJRSTGHJBUNUIUTLSQBCDF");
    msg.param.assign("VQLBMHKZMEMONPIMTAOXLZMFCLAKJSLMAXHZNJIYXBQBWSOBSHDJOPUETZDBJHRCYQZRGGVDRMZC");
    msg.value.assign("MHEDMVHUZTOAAWZRIVGEUDFUAVDPNDUTOTJBDRYAWSQVNQTDEOCBUCTLHPFZSUSWGYEPGMQJORTSNJYEICSPSFAWBQXHXGZLAEVVPMBHYISIAKSOYQHDTNPRROMYXOKFRGOAVXKPUGSGZMCWCRLEWGLGQCINCGPPRTBXVOMLTCRJNYCVRFNWEJPWBXHXZD");

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
    msg.setTimeStamp(0.14933528801);
    msg.setSource(4723U);
    msg.setSourceEntity(194U);
    msg.setDestination(48349U);
    msg.setDestinationEntity(186U);
    msg.section.assign("POLWJDDHRBOTKQUKWJURANATHDBFZTWSODXWJDTVITMXNFENHEYFWFSRTMMLJPPZDOUAZPPAYZVCXCMPDOBMGQVKEPUYHUSGJSGLSWPAQRXCLLREMEBWHQNCWGECTNIXHHBMCYZXGIEOTYKVFRBOZSHAJGLUCLGDIFKMUBQYWCXSSOFPRAVTQ");
    msg.param.assign("RQCZHFVVHTJWQJDRGUKVFUCSSAKPIQWDBKKTSAEYYXKVYVFBCQGBUJGYFGTXAJHPDPYTICPPLGMZQFFUQMOASDNHOBENLGEOGMKXXLNPESWCRWLFHCZUOYKTRZJTBGLNJWPVEZSSOORAIOCAPGAIPEVIZLFIMZEUEREDQUIMRGKXOBYCOTURQRFBPXCIFWJNDSATHQTNNZBLXBLNDMBLAVHHWVDXQZX");
    msg.value.assign("LTDHPNDAKQGSRAZWZWFPWAYHILZRHMCGTBXEIYOKXVVQNGSJPJEFGCIBVLFDQBYXJXAQJGZKYLQSPHWTXHEUNUYTGRUBGTLUQIECLCDBSTXBKPALKJTTJ");

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
    msg.setTimeStamp(0.75262986833);
    msg.setSource(15054U);
    msg.setSourceEntity(217U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(93U);
    msg.op = 32U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("XUHUAGUMLOTCNGMLEHJVNCGNKORIZTTKRKKGGKGMJBGYEPTVQWGUSLMJEBLNVDFNDPBFCHNELEODKHHQIKPLQSCIVTMOQMXMJPVTAXJHFOROLHWIZYUWOCFCZSCBHFBJPZXRUQGITAFTXCEFBBZNSMZYFEHDIIIDDJEXPZBRDMBJGSOVRWYRQNQT");
    tmp_msg_0.param.assign("TJHFVLCFWTVMAAUUXHNVAXMTDYCHXWZAFAVWQQYVNBQGHBYJHCZIIELPFKLSITIZHGOTZCJFZBXWGXNSAUNLMKPVELHHSJKUMOYZPCGKRWANMGMPJNXLDRIMIDQANBCJSPKYDZQUOFWGSTBOSQGTUPQEJVCCDRMXQEUQPOMWBHROTFLGWUKNCUEYZDRVKKUBPFLXAJZCRNOBYEQSGFEDYHXOVPSXVTRBSIWNWREYDJDO");
    tmp_msg_0.value.assign("NWEIYENJXCVUSJOZZORBA");
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
    msg.setTimeStamp(0.936200680883);
    msg.setSource(36633U);
    msg.setSourceEntity(123U);
    msg.setDestination(30039U);
    msg.setDestinationEntity(158U);
    msg.op = 48U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("XBFQDIHJXRUNZXOSVJGSVPUBOCCVHDBLLEHUWMRZABXDWJSTMVESCCEKZXGFGRNUONDFIFWHPYASTRMBOJPBYFTZRIRTSKAQOXHCDIBDANGHZ");
    tmp_msg_0.param.assign("BSMIKRVVBLADNHJYXAGCDRQUSKILSHCUGRZXQIIKHJJCQMNZZXCLVDBUASLXDEHHZQOEKNGOSAUQDCHITFMKPXEGPFCGVXFIFFWYPTZHLOADRHIUYQNTURYPIMLBGIYQMHNGXNSUFNROAWWOCETQORRDIFBWKQKNCANEGSAWKWMCDZONXTTYZPCJREJAPURJYVKVOPGYLBWVEBBLEWLEBTZZVFMMYLFGKDZWPTAPJQDXSUSOXVFS");
    tmp_msg_0.value.assign("GGWQFZJHANRJRTDDSLXURTSVNIXUPMJFOTKLWYFPVMXHRNZRPNSPQSBOGZOMBUPFPEARDAJTIEZYAFOEXLBVJFYKVHGLGEDDNBDQMCCZBIJVPEZKACXMAJFRMCMMQUWGUYBCQAIVTJKC");
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
    msg.setTimeStamp(0.623415228766);
    msg.setSource(232U);
    msg.setSourceEntity(96U);
    msg.setDestination(50114U);
    msg.setDestinationEntity(120U);
    msg.op = 55U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FYFHLUXUJQYXLZCSZVVOCZULXOWBIMYKWHHMBSF");
    tmp_msg_0.param.assign("DDEPTZCFWXXQBRCIRYPFSZYPUPZMZQCUSOWUKIYNIDVFGBSFLVAPRDZGIBEAEDNVOGSFSOHTGKLJWQUVMOGGAJBLLYCKPLBTADIRYOTUPSIQQTQVVJIWTJEYREVXNKMEZJGHZMOYJLBEARHHDRKAN");
    tmp_msg_0.value.assign("PBUDQNRRQLICKWZJGIJILILKGLYHSEOVRTPOHAAASFOYXVXNOAGFNGFNTMICSSGPKLQRYPJRQOPFJTMNJGIEUTZSIQUKDMTNRETJUHYNADBFHOMMGIOCZOGCWTXRMUPJAPVNPOXTEL");
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
    msg.setTimeStamp(0.97818871808);
    msg.setSource(50292U);
    msg.setSourceEntity(189U);
    msg.setDestination(17595U);
    msg.setDestinationEntity(14U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.85355382776);
    msg.setSource(9895U);
    msg.setSourceEntity(122U);
    msg.setDestination(39082U);
    msg.setDestinationEntity(7U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.610611018341);
    msg.setSource(23456U);
    msg.setSourceEntity(66U);
    msg.setDestination(17671U);
    msg.setDestinationEntity(236U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.00683474826161);
    msg.setSource(52608U);
    msg.setSourceEntity(157U);
    msg.setDestination(3468U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 175U;
    msg.step_number = 44U;
    msg.step.assign("DWXWBCUVNCORBIKNOPWVZLKZOHLJKAAWMBYBJZEYNKTMQTDSIPQVEBODDRQBIBAEAJFRNTUTGAFVUFMGYIHFZWLTUGEDGQDNKESBCFMYMJHXZPUOQWSH");
    msg.flags = 75U;

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
    msg.setTimeStamp(0.535417794988);
    msg.setSource(24570U);
    msg.setSourceEntity(157U);
    msg.setDestination(12640U);
    msg.setDestinationEntity(16U);
    msg.total_steps = 13U;
    msg.step_number = 202U;
    msg.step.assign("BLNJKPTUWPJTBAPMVZIOWBRDQRRHZRDUDGQLNAFKVEVHYVCIYWDFZHTNOFLULWDHIIFAEGKIPAYCZKFMHARNXISOVCOQTDSXBCDSUDPJTXCLNEKJZUSETAOXSNGAEQJIVXPWCXRXQXNUTFOSMYPCJJQYISFXNBLYKVAEPUJW");
    msg.flags = 194U;

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
    msg.setTimeStamp(0.633979522276);
    msg.setSource(41547U);
    msg.setSourceEntity(239U);
    msg.setDestination(21412U);
    msg.setDestinationEntity(204U);
    msg.total_steps = 82U;
    msg.step_number = 98U;
    msg.step.assign("TFXORWDDQHOFTYFWDGBGYLKKEQATKLKQGDPFERGCHUXVIKNZUDCUJVMRNWLMQNLTWZGPIVGSQHUZZYQHJZXSIHMAYJPXVTCWCUUVOVNFQRAYCGY");
    msg.flags = 4U;

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
    msg.setTimeStamp(0.377370823864);
    msg.setSource(3517U);
    msg.setSourceEntity(191U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(84U);
    msg.state = 123U;
    msg.error.assign("WAMJAVOVILYJETAIWQTRINKLJKOZFCCPBEMVDMHVIVXUYCHDRPQEDUQTJIWZDYSQJCSQLWLLXRHLOXSTIQHTONYVXPCUCFCBHEPOOCTHYDHTSVGFYXOWEMRYUEHZKFQAXPXYBDRAHULBUKPINTTQJXAZDLXUNSJRBIZG");

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
    msg.setTimeStamp(0.173965393573);
    msg.setSource(31674U);
    msg.setSourceEntity(136U);
    msg.setDestination(7562U);
    msg.setDestinationEntity(205U);
    msg.state = 34U;
    msg.error.assign("TNUBACDMGXQFOOLVEKFGWHQWVMKBYARGDEATHIVYNPCHHTOLQAJFRWJDZS");

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
    msg.setTimeStamp(0.626578747976);
    msg.setSource(46809U);
    msg.setSourceEntity(134U);
    msg.setDestination(36777U);
    msg.setDestinationEntity(202U);
    msg.state = 94U;
    msg.error.assign("GDWOYJDHFLIWZCBALEYGSKOVWVJCRTUHRZBMRODNPSGQZWQLDIVBPMATJTLVICOUZYFCWJTYPHAEXECSWQZRMQLMJSUGWYVDNOGJQSFWHXBEOXNZQNXYICEBCFVJGLKHKQCMHKPRNDMJRTMSAKONFZZNTNZEFTSARVPKGPQGFNPEDIKHBEBAHOBFIXNFAXTTIDCXKTSDLAYXBKUECIVPGVEFSHAQOLGUUYXUQWMZMI");

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
    msg.setTimeStamp(0.594288093244);
    msg.setSource(31371U);
    msg.setSourceEntity(235U);
    msg.setDestination(30884U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.0269512853545;
    msg.lon = 0.43057926718;
    msg.height = 0.905841633642;
    msg.x = 0.556454799451;
    msg.y = 0.904839283884;
    msg.z = 0.671475359417;
    msg.phi = 0.908257567126;
    msg.theta = 0.998954380572;
    msg.psi = 0.885177410332;
    msg.u = 0.832205157311;
    msg.v = 0.497551383034;
    msg.w = 0.979883666049;
    msg.p = 0.363411925247;
    msg.q = 0.93541844897;
    msg.r = 0.0447553859077;
    msg.svx = 0.167765091201;
    msg.svy = 0.369160169848;
    msg.svz = 0.98155643796;

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
    msg.setTimeStamp(0.182943737766);
    msg.setSource(40515U);
    msg.setSourceEntity(151U);
    msg.setDestination(34736U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.848016016052;
    msg.lon = 0.181077291297;
    msg.height = 0.811926646034;
    msg.x = 0.743995341448;
    msg.y = 0.578183176988;
    msg.z = 0.683142808368;
    msg.phi = 0.0534161415404;
    msg.theta = 0.0303386470807;
    msg.psi = 0.929636533099;
    msg.u = 0.681803884506;
    msg.v = 0.302781515812;
    msg.w = 0.750173791777;
    msg.p = 0.241980899152;
    msg.q = 0.156353926313;
    msg.r = 0.418710420715;
    msg.svx = 0.649107534206;
    msg.svy = 0.449186907525;
    msg.svz = 0.87311643002;

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
    msg.setTimeStamp(0.149882012817);
    msg.setSource(17800U);
    msg.setSourceEntity(138U);
    msg.setDestination(57374U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.842690236461;
    msg.lon = 0.424976764791;
    msg.height = 0.738092258827;
    msg.x = 0.755179243129;
    msg.y = 0.955523087426;
    msg.z = 0.926977536231;
    msg.phi = 0.863898736433;
    msg.theta = 0.563970729628;
    msg.psi = 0.136839324558;
    msg.u = 0.637926194465;
    msg.v = 0.136744270783;
    msg.w = 0.731992559984;
    msg.p = 0.587930844677;
    msg.q = 0.0706608791662;
    msg.r = 0.573729996324;
    msg.svx = 0.743783277987;
    msg.svy = 0.219243917692;
    msg.svz = 0.557837557463;

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
    msg.setTimeStamp(0.354075410857);
    msg.setSource(51050U);
    msg.setSourceEntity(4U);
    msg.setDestination(61717U);
    msg.setDestinationEntity(167U);
    msg.op = 24U;
    msg.entities.assign("YVWKLPDAENJZUWTAHIZSNQGKCQEKKRMONDGMFCDFBYXOSXLUZEAJEGRCVYZSXRUJLPRXQXVHBWFTZDLTUIKIBKNQWOALUNBEIMWBFDRWFINRGPAGEPOSDSYDEOM");

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
    msg.setTimeStamp(0.922826831367);
    msg.setSource(2237U);
    msg.setSourceEntity(240U);
    msg.setDestination(36661U);
    msg.setDestinationEntity(23U);
    msg.op = 110U;
    msg.entities.assign("YCIFGBYHZQECOENWHHCRFTYLUXKDSJXCAPDFOSFUPBTAOVCHGGLYENITHZCIZORWZOAPWIVTQUCRWAZQXLAKTEYBIQXIPQDJKFOFHJTRQMMSAUPMMDNONWYBVALAMKRIEDZDQOZEOUGLJUMYTZZJVKJBERPVVBNDVCYHXUFMNPFSEVWJKIWNTFRRSJXDKDSWLUBGXKCKOSVCLWPGNPLQM");

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
    msg.setTimeStamp(0.964681571849);
    msg.setSource(51046U);
    msg.setSourceEntity(122U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(163U);
    msg.op = 230U;
    msg.entities.assign("WODSXWPJIAZJCVKQGTEIXXOJGJAQWQKMWNEOWVQPBYZWNRVDTMWJAUYAXIQBUGXMXQDYRBVUSSSNKAHZKTDZGKPNXGMLNHYRUFGTB");

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
    msg.setTimeStamp(0.747996286504);
    msg.setSource(20702U);
    msg.setSourceEntity(14U);
    msg.setDestination(29848U);
    msg.setDestinationEntity(8U);
    msg.type = 154U;
    msg.speed = 36813U;
    const char tmp_msg_0[] = {-106, 0, 87, -81, 83, 26, 3, -57, 106, -63, 10, 39, -36, -55, 3, 8};
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
    msg.setTimeStamp(0.104269695022);
    msg.setSource(57259U);
    msg.setSourceEntity(138U);
    msg.setDestination(47286U);
    msg.setDestinationEntity(76U);
    msg.type = 21U;
    msg.speed = 31180U;
    const char tmp_msg_0[] = {107, 31, -53, 111, 126, -48, -30, 17, -31, 29, -20, -47, 59, -2, -109, 20, 124, -78, 110, 79, -57, 104, -71, 3, -24, 41, -22, 27, -49, 6, -64, -63, -100, -37, 89, 17, 107, -127, -49, -25, 36, 71, -73, 54, 27, 62, 48, 123, -128, -37, -29, -86, 117, 104, 109, -71, -95, -9, 103, -14, -30, 48, -103, -120, -101, 80, -33, 60, -108, 25, 54, -117, -23, 4, -28, 62, 66, -2, 50, 52, 12, -14, -79, 114, 62, 25, 42, -89, 65, -128, 87, 37, -31, 16, -70, 101, -94, -122, 52, -115, 81, 87, 50, 54, 92, -115, 53, 98, 52, 11, -88, 9, -90, 11, 98, -57, 107, 89, -56, 98, -73, 16, -1, -46, 18, -38, 97, -48, 24, 81, 80, 22, -20, 40, -17, 55, 121, 94, -109, -29, -67, 7, -124, 102, -67, -55, 68, 126, 67, -47, -49, -64, -3, 113, -90, -126, 6, -123, -61, -93, 124, -38, 65, 87, -61, 124, -29, -81, 86};
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
    msg.setTimeStamp(0.520330776324);
    msg.setSource(40946U);
    msg.setSourceEntity(32U);
    msg.setDestination(3833U);
    msg.setDestinationEntity(121U);
    msg.type = 61U;
    msg.speed = 51750U;
    const char tmp_msg_0[] = {49, 124, -82, 16, -87, -39, 101, -14, 103, 73, -4, 49, -57, -62, 53, 5, 76, -97, -105, 93, 91, 34, -97, -71, -70, -37, -61, 112, -126, -39, 8, -58, -31, 82, 99, -44, -86, 53, -105, 83, 16, -18, 11, -42, -62, 56};
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
    msg.setTimeStamp(0.78719958684);
    msg.setSource(56917U);
    msg.setSourceEntity(121U);
    msg.setDestination(6724U);
    msg.setDestinationEntity(225U);
    msg.available = 3515377872U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.986953267951);
    msg.setSource(33976U);
    msg.setSourceEntity(80U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(64U);
    msg.available = 2445103892U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.778839206439);
    msg.setSource(24385U);
    msg.setSourceEntity(249U);
    msg.setDestination(29087U);
    msg.setDestinationEntity(253U);
    msg.available = 2236063952U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.545635377236);
    msg.setSource(21424U);
    msg.setSourceEntity(160U);
    msg.setDestination(36602U);
    msg.setDestinationEntity(99U);
    msg.op = 99U;
    msg.snapshot.assign("UUZBPOPBXQFRJZEDWMWGQXAJYOPHZQMGZERBHNBOEBYGXDNLASYHUSCIWEORXATDRFACNEDQVDAEKLICCFDMAZ");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 17U;
    tmp_msg_0.goal_id.assign("DFJNSSWAWCSRBPYRBTFPMOLZXKHBUNCEGMADZNGQPRFGGWFJZWMYRUILZOMHRKJESXGXJYCKEPEEOYVRMSAPZQXUQAXEBGCRZQATOKOIGTIUDUEUOGTLNTRYCTVBIZNEJZPDGDOXXHWFDVBVAFYELLQSHFYMHITPAACKWMUKUMUZOVKIMEVTVXIFWLDHVXYDQHNLBJSIAHQLULJODWJZHNLCVIYKDSONBQSNKCMQHWNJPX");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("YGCFANBMDFMLRBYNFTVVPJLRMJXSOXKLAKKULWQOHHTPNQJROOCQQIHFGYMWWXFOJXPZZWJACYQYRTCRSFGMPKTQHKDIEIPXZSLXGSBABTJBY");
    tmp_tmp_msg_0_0.predicate.assign("XYUAZUBQJZTLTPDDIKCVCLFMJAUVHZSIEGWEPBMEXNYBBKHRLZAAOUTJWSQRPOLHELCHEQEPFBGOPEPKEXJCDLZHMDWGZJX");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.592282542116);
    msg.setSource(49720U);
    msg.setSourceEntity(140U);
    msg.setDestination(11067U);
    msg.setDestinationEntity(197U);
    msg.op = 70U;
    msg.snapshot.assign("NRWVCBUYVWVFIYOQOXGQXQRXUUYWFJFFIVCWRVTUWTZOCSIAMENPSHHARTPZHVVPNXUBVTAEWQFFAIQJXOJGIKRRNYCBQSDCPEKAPCEUSWQJOK");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.729503395173;
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
    msg.setTimeStamp(0.631101712513);
    msg.setSource(13949U);
    msg.setSourceEntity(146U);
    msg.setDestination(6074U);
    msg.setDestinationEntity(74U);
    msg.op = 29U;
    msg.snapshot.assign("VSHRBTXRINOLZINYGUZTSLKFDDAXTPMJDKQTAHOKQXQLXVJBDPNR");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 100U;
    tmp_msg_0.clock = 0.917386230183;
    tmp_msg_0.tz = -105;
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
    msg.setTimeStamp(0.650671748447);
    msg.setSource(41133U);
    msg.setSourceEntity(110U);
    msg.setDestination(56630U);
    msg.setDestinationEntity(205U);
    msg.op = 191U;
    msg.name.assign("HQDIPKIHHHSNMYFSNWCGCYRFTQPBTXGFFVTAJVZOB");

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
    msg.setTimeStamp(0.728401171083);
    msg.setSource(22536U);
    msg.setSourceEntity(144U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(30U);
    msg.op = 121U;
    msg.name.assign("UZDWIHVPTLTLKCRTCEZWRBEDFDXVEYLZRBTKEGCOWEQILPSLDHUVQWFLONXIUPNYZHYAIBZSMYSFUSSARCZGGURRLBHRBQCTKZMCXDCMYHKXMWNVGFGIJKVHBMNZICHAKYAKNUJRAZQWJVLJCOPGDGMNQWBGJOOJQVJQVAMAFUIYFSDXOPYCLSUHJSWAKFXBDOFKSPKAPXDRXWHXYETMDOEMTTGFLUJJYPVTIETNBINNHVXQGSEQAOOBPPNEWQ");

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
    msg.setTimeStamp(0.629589667061);
    msg.setSource(62960U);
    msg.setSourceEntity(190U);
    msg.setDestination(28890U);
    msg.setDestinationEntity(8U);
    msg.op = 229U;
    msg.name.assign("TAOEXCUFBNHQNKTJMPULXCIYGAYZSRBOGVQZCRJMVIRNTUEVFODZZFUZTSUXEGNSWOBLWXLJPIWAODMJYJIWSVS");

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
    msg.setTimeStamp(0.81356649805);
    msg.setSource(37607U);
    msg.setSourceEntity(178U);
    msg.setDestination(36308U);
    msg.setDestinationEntity(163U);
    msg.type = 214U;
    msg.htime = 0.847772596205;
    msg.context.assign("QFXHZXIGBRQWLLJDAEVPUPWQOJOCNPQNWDKBGEBSLXDHKIDCZYMBVRHLUZFHPMCFTLXQJDJPUNECZWVUAXYHTAIELWKHYUEFLRKBIJDPCRJIYESNSBQHSQWA");
    msg.text.assign("NEVJZKMAHIVKWNMTSERFVSRZOJYQQLXRBLREHJTGGUYPNXHPLUMJXWHHXEMJYIRCXGHNJISVBYIQQHCZCPPERBZGSKXOTDTSSQFIRWZWDFQGYDCLFRWYYOVKRQZQMHOJULNXWBZBEMJXFTIXLUYPALSTUVAZGICUUFUSVINQEDKGVNCBGETLKOXQBYDVJFSARTEHOWPFCTTAH");

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
    msg.setTimeStamp(0.173894441817);
    msg.setSource(59841U);
    msg.setSourceEntity(181U);
    msg.setDestination(6645U);
    msg.setDestinationEntity(137U);
    msg.type = 175U;
    msg.htime = 0.177022695205;
    msg.context.assign("OAVMZDVMCJSULPTFKDCHQBFYDOWOLVGXSQFLKTMNVNNVUDHPURQNRFRHDYQMKQVDYZZWOSXBJAEGZBGPOMPXZIOBCFMDXVKNYQSPUYHDKJBLKGEDITRSQRGFPHWJFMEFHWALECCJUWSCIUYXNEKTMJECPERSEOJZALNUGTKXLKVSKYBACDPGQOBFATRJGZYGIXWCTAAHWNYIPWJULNQEZTIATNZB");
    msg.text.assign("GSTXBPYGYZQWPZCNNWIFDJFPLAWOHCLWUPIPMNRLTYMVFBXKBOJZFMMEAAYCBFVRQQMKAHKXHALOSBCFHIJRISMLJVBQPQFEIIVOUEQZOGYDNCLLFHPHVVLTCFONSTAEWJVKACDYJDUHZBYEAJSPQKTMEGKTRUZVNXAKRNEILXQMJIXLDPRNYCXDEUTH");

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
    msg.setTimeStamp(0.995823298625);
    msg.setSource(29061U);
    msg.setSourceEntity(225U);
    msg.setDestination(44207U);
    msg.setDestinationEntity(237U);
    msg.type = 222U;
    msg.htime = 0.166063449398;
    msg.context.assign("EQJSNZBHGHPVGHDXXJMYMZQONMREVD");
    msg.text.assign("YGKABPLRHTJKWUTIWAUZABCTTEUJBN");

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
    msg.setTimeStamp(0.0316550101828);
    msg.setSource(28913U);
    msg.setSourceEntity(188U);
    msg.setDestination(39845U);
    msg.setDestinationEntity(16U);
    msg.command = 70U;
    msg.htime = 0.0825605751848;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 151U;
    tmp_msg_0.htime = 0.872199873975;
    tmp_msg_0.context.assign("WVNGUXNEVCTBCMCVHLVQBBVLDZCURINWJMKUSUDGNLNRMBFTOUIPUJPTGNW");
    tmp_msg_0.text.assign("SCEFFGKMJDUFEHFGXCUMENOICSUAQGQYSACJHQZYZQKXSJVKCJYWOYFPCOGMVONHOBDIXQHJNEDMPFKETAJGWRUANJVTCYBCZQMQYDVZTYXOXHEKTNWMPTLRUTMAVXVZAMWRKDNSBBZHNELNWPWGKPLCGTKLPZARUWGXLZVWNHE");
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
    msg.setTimeStamp(0.852505270155);
    msg.setSource(51633U);
    msg.setSourceEntity(222U);
    msg.setDestination(31157U);
    msg.setDestinationEntity(218U);
    msg.command = 120U;
    msg.htime = 0.880710519229;

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
    msg.setTimeStamp(0.199439746614);
    msg.setSource(1252U);
    msg.setSourceEntity(138U);
    msg.setDestination(61139U);
    msg.setDestinationEntity(171U);
    msg.command = 162U;
    msg.htime = 0.741970221396;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 42U;
    tmp_msg_0.htime = 0.925336321332;
    tmp_msg_0.context.assign("MIQGOBPLMLVOSPLBTKIREFZTKRJGUBDQVJSRPDJGKZZQPXEOHKPWJAELJLIVUOSPQIKCKWEPCAVTTFXHZWUKYVCNENDTGEQQMRXCEAWHQLNLHDHXGZSFHUMOABCYQXHEZSYYDCBDWNHYXYUDSLWNGLCIVCQSRFZGSNVURNXOSAXUWWKATFMBKCYTMHAUDOIOF");
    tmp_msg_0.text.assign("HYEJKPKMYXZCIVCALUTWBIQEPHTLNYSFJYJHBQNRVIOTZWSFSHMTDMESOAFFDYXMBRCRUMGUQBISAEKQOCVXLSDHKWLAKRFLSGLKQXHINQFOTTAYSZPNPUJWJXONHBUBJ");
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
    msg.setTimeStamp(0.898925128759);
    msg.setSource(14137U);
    msg.setSourceEntity(254U);
    msg.setDestination(49212U);
    msg.setDestinationEntity(197U);
    msg.op = 109U;
    msg.file.assign("PAXJDVOBFHNUOFSLEJDPNLFHEJRNBTEXXERECKVLRTPWLCBKFJYKAXGGDSBGBHBKHQPCUOXYNITZIRDZOYWHVPAMSNEGBXWCRLJDTWDAWZXEXWUHAYWDMBDUHULRYPMJDJOGIKALCVMHQBIKCXSKELQZAUNISNTCPZG");

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
    msg.setTimeStamp(0.792632886707);
    msg.setSource(10195U);
    msg.setSourceEntity(192U);
    msg.setDestination(47333U);
    msg.setDestinationEntity(175U);
    msg.op = 55U;
    msg.file.assign("VMJRDYFTVRTCGAOXTORSPBZVJYMPVTKEYWRULYOVWNTQIHKJAAXFNBWFHKUNENZBGLMULJQZMEEPCANPZLCMISNJONWCCYRHGYMAOSPJOIKDHDGXVRMRXKQMSSWZBDYCBUHQNURGVFACOYXJIAGWMUYEYFCFZLAITTHBUAUQDLBEJR");

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
    msg.setTimeStamp(0.682889762924);
    msg.setSource(13614U);
    msg.setSourceEntity(151U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(253U);
    msg.op = 14U;
    msg.file.assign("OGGQUUMLAUFXXMGDKNQYROFACJYEJNBRTEBIPSUUTNMJJWORSASUKRTYZQEDQYUSOBRMJAKEAJHZIVKGZVYAKKLLOWTYCKBCIVCSDCWUZEQXWSSNPHMDUOIXINSLXDUWFTCEJRVBHYONZQXDKVHYHZL");

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
    msg.setTimeStamp(0.121193532038);
    msg.setSource(23920U);
    msg.setSourceEntity(108U);
    msg.setDestination(30877U);
    msg.setDestinationEntity(0U);
    msg.op = 186U;
    msg.clock = 0.592393733696;
    msg.tz = 97;

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
    msg.setTimeStamp(0.294300713596);
    msg.setSource(63131U);
    msg.setSourceEntity(166U);
    msg.setDestination(62165U);
    msg.setDestinationEntity(121U);
    msg.op = 36U;
    msg.clock = 0.746564854169;
    msg.tz = 101;

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
    msg.setTimeStamp(0.890760345383);
    msg.setSource(33847U);
    msg.setSourceEntity(154U);
    msg.setDestination(25549U);
    msg.setDestinationEntity(78U);
    msg.op = 78U;
    msg.clock = 0.791088703574;
    msg.tz = -38;

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
    msg.setTimeStamp(0.0931910939338);
    msg.setSource(39639U);
    msg.setSourceEntity(97U);
    msg.setDestination(11992U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.685974158302);
    msg.setSource(4131U);
    msg.setSourceEntity(90U);
    msg.setDestination(59925U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.0334016872065);
    msg.setSource(62849U);
    msg.setSourceEntity(30U);
    msg.setDestination(2945U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.446096807305);
    msg.setSource(38416U);
    msg.setSourceEntity(14U);
    msg.setDestination(17361U);
    msg.setDestinationEntity(177U);
    msg.sys_name.assign("MYSEHFYLIAAAIGXNBHXJPVYOYAMMXFMOHGCILZVDQPEHGNFAEXKUXPPQMZUVKBFSOLAXJLKEDTYFHEISUAWXRUNQWSMBCIUGSKRLQZCRETTFDWESUIGZKRXANFWPJMOKSVUQJHZCAJEWGCSPUVKZVRPDLYDYNGUDBYVPCQPKDOKERCJWI");
    msg.sys_type = 44U;
    msg.owner = 53046U;
    msg.lat = 0.648493972327;
    msg.lon = 0.762036667273;
    msg.height = 0.00638251698225;
    msg.services.assign("JGUEDGMQWWGJNUQTKVNVTNHHPXATPFKNYYDPYRKYMIDZYPZHNHLNXVUEIEMUWRYFZVOPQRGOXPCHMXXTIZIBWIBPVCDSLFJTMJLYBGLOKDUOLNTWORDKDEMHSHXOTAJGRJBLIEDJQZSCQRPXMZXBEFJINYASFWJRVAQKLDITTLPEZUSHDQSCZCBUOAWVRKKVXEBZGZSOKPCFVMQUUFCAYUR");

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
    msg.setTimeStamp(0.525002141927);
    msg.setSource(2071U);
    msg.setSourceEntity(8U);
    msg.setDestination(29657U);
    msg.setDestinationEntity(202U);
    msg.sys_name.assign("ZDTNYXMMBVTGMVNNVQNOPIAROHKXCKDSHRREBPGIGNZDJOSLYHZELKYUANIRNKBZHQEJKIUPPJVWEPKUIJBMXWGPXBOISUWJFDSMNCJHJCHNTLPBGQTQDVICQSBZSGXCFHEEGUOTWBZLLYTRFLOWAWLFWMTVPLTRAACEDMXQFQURXPHYOBEIVXQSCOEAZSWZKYUYJKUHVGJFCLYRUUOGC");
    msg.sys_type = 117U;
    msg.owner = 16637U;
    msg.lat = 0.813704531832;
    msg.lon = 0.020876264511;
    msg.height = 0.549728568854;
    msg.services.assign("EDITBSRLRINNBNQLCYLTSEWYZERQZJHGLJQUTYDWILMSVVWUGZEUOUNGLZDHFRYSNSKQSDJBYPOLJNFWWUXUEKIJTPKJF");

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
    msg.setTimeStamp(0.447143959852);
    msg.setSource(49893U);
    msg.setSourceEntity(50U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(22U);
    msg.sys_name.assign("IXNRGUFBYYBWMDUVNIVUEHHHGACEFADKFGKNTVYKHCYJWQBTWPHXLJCTFKLERAVEKVTVDQUBUXPGIEOZVANJDJWDNONIBJPGECIOCMIQWNZCACMXBKLALJPSQVROUAUMSQPHIWALNIOPSYKBETQHLGYEKBYRGSLFYDJMCSMRDDKUOYPBSETWZMXHXXWGSHTGYRZOVLCSPJDASFQE");
    msg.sys_type = 149U;
    msg.owner = 56988U;
    msg.lat = 0.236574276895;
    msg.lon = 0.598246698246;
    msg.height = 0.555887152941;
    msg.services.assign("ONCQRCFDXRBYLMGFADGFXJCSRDJXPKDWWYSWWTZDU");

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
    msg.setTimeStamp(0.417490739444);
    msg.setSource(27103U);
    msg.setSourceEntity(249U);
    msg.setDestination(46083U);
    msg.setDestinationEntity(152U);
    msg.service.assign("ERDJSQILHIMLPJSTJUGFVYZHSNQWFDNGHLHRLSDJPETAKCNCRRXUXPGUJCSFPWOHENIYVKSKPXECZADGPYDVKQQGUMNSGCIZZJTWNNNHLKXDBORAHYKZXVYYABRVOCGWVTPPUXLMWXECTAFJI");
    msg.service_type = 108U;

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
    msg.setTimeStamp(0.253693986767);
    msg.setSource(45406U);
    msg.setSourceEntity(177U);
    msg.setDestination(26241U);
    msg.setDestinationEntity(23U);
    msg.service.assign("FSLQNJFJEALHBORKABESABLYFFDVCPDTCJCRURJTEFYKSOLBTPDJQXNMHQKSHISSBXPXPIBONHQLXVDGCNCSCZOGYGVXEA");
    msg.service_type = 68U;

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
    msg.setTimeStamp(0.0186317758119);
    msg.setSource(32192U);
    msg.setSourceEntity(18U);
    msg.setDestination(1609U);
    msg.setDestinationEntity(106U);
    msg.service.assign("PEEZSKONCNDGCAHMXMLAPUWT");
    msg.service_type = 224U;

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
    msg.setTimeStamp(0.303844590861);
    msg.setSource(14296U);
    msg.setSourceEntity(192U);
    msg.setDestination(51886U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0463980846139;

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
    msg.setTimeStamp(0.278559102842);
    msg.setSource(42038U);
    msg.setSourceEntity(148U);
    msg.setDestination(64422U);
    msg.setDestinationEntity(241U);
    msg.value = 0.451024035794;

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
    msg.setTimeStamp(0.447812699428);
    msg.setSource(9335U);
    msg.setSourceEntity(98U);
    msg.setDestination(30920U);
    msg.setDestinationEntity(158U);
    msg.value = 0.9035173899;

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
    msg.setTimeStamp(0.566972372952);
    msg.setSource(40176U);
    msg.setSourceEntity(212U);
    msg.setDestination(35518U);
    msg.setDestinationEntity(225U);
    msg.value = 0.84102821151;

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
    msg.setTimeStamp(0.0526608313213);
    msg.setSource(35172U);
    msg.setSourceEntity(56U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(243U);
    msg.value = 0.489779015616;

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
    msg.setTimeStamp(0.893872713198);
    msg.setSource(45771U);
    msg.setSourceEntity(136U);
    msg.setDestination(37846U);
    msg.setDestinationEntity(236U);
    msg.value = 0.256431591365;

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
    msg.setTimeStamp(0.667578724058);
    msg.setSource(12130U);
    msg.setSourceEntity(206U);
    msg.setDestination(11463U);
    msg.setDestinationEntity(58U);
    msg.value = 0.563980034926;

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
    msg.setTimeStamp(0.992793493637);
    msg.setSource(32163U);
    msg.setSourceEntity(48U);
    msg.setDestination(9176U);
    msg.setDestinationEntity(182U);
    msg.value = 0.318309412589;

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
    msg.setTimeStamp(0.69064676224);
    msg.setSource(15532U);
    msg.setSourceEntity(160U);
    msg.setDestination(39377U);
    msg.setDestinationEntity(153U);
    msg.value = 0.710238334862;

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
    msg.setTimeStamp(0.618020293073);
    msg.setSource(54538U);
    msg.setSourceEntity(106U);
    msg.setDestination(33158U);
    msg.setDestinationEntity(162U);
    msg.number.assign("TCEBWVXHNKYNUDMDLEHMZBLUJVWJJTHODXEWFUYXNOHKBIKTAZQJVMKEVUZFELCYGUSCXYRTETSW");
    msg.timeout = 26618U;
    msg.contents.assign("QHIZAXNIJCXTGPHAUUZEPZIFRNNQHIZYJJBUKKUPOQNGCIAEEOSUEESAMVCPWSKQLAUCSMPYFXREPYEBORWWXCMOUQZGDVRBXLGRRKWDSYAPFGMATXBBKWSOFSTHMDHTCQBFOIHBKASNIRTWVLKPGQVYCIVCVZIZTYGIERQLHRTKBJAVZDMPBVTUJLHWGXEQLKWENJDFOSFNDMFC");

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
    msg.setTimeStamp(0.250258064943);
    msg.setSource(3804U);
    msg.setSourceEntity(123U);
    msg.setDestination(42053U);
    msg.setDestinationEntity(171U);
    msg.number.assign("IHFHBWXZGVLEQ");
    msg.timeout = 35784U;
    msg.contents.assign("VOHURSHMTNRRXNKZHNCOZPQRBPMRPVZJBSJFQIIDVHUTOKVMAWAGCUPYXTEQSCNBYAIGPDXMEIDYBRWZCFEWYLGTXWQQOYUDXHGBSKNTVKCANURKSZUOIHNCTKGOSMEWEYQJUZGPEAQMZWDQIJTTHVMBWWQSDFLWESULCZANFFAXKFOLXSKKYPOCSVXBMLJBJYJXBVRTIDKTMAOLHCGHNLRCQPGEDFIFEURZJ");

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
    msg.setTimeStamp(0.938515315035);
    msg.setSource(6088U);
    msg.setSourceEntity(249U);
    msg.setDestination(2945U);
    msg.setDestinationEntity(128U);
    msg.number.assign("GUZURHFOUJBLEOJBXISHCSPXRXMJTPVKIDTDVFUOCYSINBBQEVNKGHZLDILEDUNLCLNXJPAMXHPOOUJZUEWZJYXYLZLAQFMYCLRTWNMAKWYMFRMOAXQKYPKCOQTPJRKRYDYMFAHVVWTTIGDZBQAXWWCSEOKBAQIVCTUHSIVPFSWJGBJD");
    msg.timeout = 14620U;
    msg.contents.assign("NUDKRTQOKLJFOZPSDERYIUWRFPDFGPCRCGUSCKTGUJROUYSHZINTFIMFMAAPAKAOVPTHDBOZKFLLWQFKTMMFIHVEBERBEFWOMUM");

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
    msg.setTimeStamp(0.0683911008198);
    msg.setSource(693U);
    msg.setSourceEntity(29U);
    msg.setDestination(64128U);
    msg.setDestinationEntity(64U);
    msg.seq = 1605276350U;
    msg.destination.assign("SYRBXWXNRJHIMCNHRUTFXVLMQUCPGVLYUYOBIBTOBSEKXIBXLQFJWSTSMKWPENTNPKDWMANDAQTEJPAARRLKNQONPKQBRCGGFFAWCJUHQJFFPDZIUUWYIUXDASBVTXZQEJFOQZZIZOBIYOG");
    msg.timeout = 10330U;
    const char tmp_msg_0[] = {-98, -44, 79, 83, -115, 24, 34, 15, 0, -113, 26, -26, 61, 12, -56, 90, -105, 95, -119, 52, -5, 79, 114, -29, -49, -35, -15, 20, 19, -98, -45, -120, -24, -18, -42, 110, -23, -97, -19, -96, -60, 86, 69, -54, 95, -58, -20, 26, -5, -80, 93, 6, 55, 19, -87, -38, 35, 43, -59, -98, -22, 52, -38, -68, 55, 58, 22, 114, -13, 100, -50, -17, 15, 18, -117, 114, -102, -116, -1, 98, 32, -77, 8, -78, -57, -109, 28, -49, 1, -16, 56, -94, 57, -120, -101, 92, -127, 71, 124, -5, -118, 5, -25, 45, -54, -55, -93, -59, -50, -90, 65, 51, 61, 80, -120, 20, 57};
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
    msg.setTimeStamp(0.00555725356905);
    msg.setSource(402U);
    msg.setSourceEntity(154U);
    msg.setDestination(27582U);
    msg.setDestinationEntity(210U);
    msg.seq = 1592619126U;
    msg.destination.assign("EZEOSOBRFPHVKSDYGJJGXODWNPVKBKBGKTUROTDGCNQGTMLERSBOCBPZLSYRFSKOINTTYYFUELNHVGITQIXVWUDFYEAPXWJBLZPVSQZJXCQHHHQZMAJLALJHIVXWIMVMLGAJOBMIFMOWJLDCDDJYERXSCZZAINRJNOKGCXQRHNMXQOYSBLPMUH");
    msg.timeout = 42835U;
    const char tmp_msg_0[] = {100, 84, -17, 40, -115, 63, -116, 26, -106, -34, -124, -72, 105, -16, -113, -77, 24, -102, 115, 28, -45, -94, -121, 113, -100, -12, -78, 82, -78, 51, -2, 62, 64, 52, 91, 120, -59, -15, -32, 74, -126, -11, 3, -117, -39, -64, 89, 50, 14, 73, 62, -100, -70, 91, -32, -79, 64};
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
    msg.setTimeStamp(0.652147097349);
    msg.setSource(43523U);
    msg.setSourceEntity(60U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(81U);
    msg.seq = 226459542U;
    msg.destination.assign("ZHZOZMEDVQGEAMYGVPPPCRRYQGBEXHPKZZYOXGVGCVNBJBOWKIHMTTNVCQLRRPGJPYWBAQKEIEFLWUITEWDICNHUYJHBLWSFQLSUSWDOPJQACTTEFZKJTPQEVNCOTFMMDCNBTTVRLIXDBPHXMGNRAAGRXLODIHHJYMUZV");
    msg.timeout = 34245U;
    const char tmp_msg_0[] = {-89, 101, -85, 2, 56, 41, -101, 15, 60, -117, -105, 12, -100, -77, 27, 17, 109, -123, -58, -6, 32, -45, 33, 102, -95, 94, -41, 26, -105, 70, 47, -81, -64, -35, 113, -36, 8, 75, -93, 78, 37, 44, -18, 81, -61, 104, 106, 107, -118, 111, 51};
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
    msg.setTimeStamp(0.746103593653);
    msg.setSource(47595U);
    msg.setSourceEntity(130U);
    msg.setDestination(202U);
    msg.setDestinationEntity(23U);
    msg.source.assign("NUQCGFLOHEARXEJGLPYYNOISBVRWLNCUSSYMYUCZQWSWBUIBFBSMJMQKXFTYXYGKJUGXCVFKSLFZLAARKKJZGWWNZEXMEBTJIESRKPGOTHVCKFNTDTMDRAGHMFUYTBAPXUIMGHVZUJEQWNCSMFOZTCLJWVVZONBKXVHOUENFMIHLHQQAEGCOWABHIL");
    const char tmp_msg_0[] = {53, 79, -110, -119, 117, 100, 121, -29, -42, 76, -4, -95, -9, -12, -9, -34, 17, -42, 101, -49, -48, 28, -27, 15, -14, -70, -117, 97, 89, -92, 89, 97, 93, 14, 81, 61, 50, -15, -56, -101, 103, 106, 39, 79, 110, 45, 1, 83, 71, -121, -32, 109, 120, 125, 64, -54, 75, -71, -84, -51, 78, 89, -101, 115, 50, -51, 94, 66, 14, 61, 115, 117, 53, -64, 76, -17, -82, -126, 7, -122, 87, -128, 9, 83, -9, -60, -17, -83, 125, 44, -1, 51, -107, -4, -24, -86, 97, 85, 77, 14, 19, -51, -118, 95, -70, 65, -115, 78, 121, -51, -18, -45, 117, -123, 95, 112, 58, -18, -36, -58, 53, 88, 31, -85, 118, 110, -35, -128, -76, 35, 55, -110, -113, 116, -75, -32, 17, -9, -67};
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
    msg.setTimeStamp(0.578111783055);
    msg.setSource(20761U);
    msg.setSourceEntity(208U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(89U);
    msg.source.assign("WXDHRDMNLEJRYCEGSGCMJPQASHIFHKFHGXHJRZZAKRBLDLUKVYPMIGBQOWCPPDTEEZGJVGXLMPQMKOJEJIXRODEUWCSZBQXPTMCOCXKA");
    const char tmp_msg_0[] = {121, 70, 35, -47, -85, -3, -15, -100, 89, 66, -56, 50, 86, 103, -33, 8, -28, 66, 84, -90, 47, -49, -11, -9, 114, -120, 61, -37, 22, 62, -35, 2, -9, -120, 33, 69, -110, 61, 38, -116, -1, -50, 112, -3, 24, 81, -65, 40, -67, 46, -27, -66, 50, -9, -54, 79, -59, -21, 102, -94, -78, -85, -41, 38, -53, 32, 98, -38, -9, 121, 55, 67, 97, -22, 31, 108, 77, -103, -74, 66, -19, 82, 32, -39, 87, 62, -20, 16, 38, 19, -6, -99, -8, -57, 82, -119, 21, -19, 11, -80, -105, -96, -65, -42, 119, -65, -115, 95, 13, -87, 73, 126, 71, -45, -84, -9, 66, -105, -68, -109, 121, 12, 95, -86, 64, 56, 116, 1, -108, -50, -109, -30, 125, -78, 74, -12, 17, 85, -30, -21, 5, -73, 5, 62, -60, -6, 31, -11, -84, -26, 123, -113, -37, 17, -57, -112, -62, 54, 82, -75, 16, -10, 126, 112, -15, -20, 62, -76, -9, 106, 92, -57, -88, -23, -61, 37, -82, -117, -26, 52, -16, -100, 96, 26, -44, -103, -2, -20, 107, 110, -19, 59, 109, 29, 12, 110, 92, -47, 7, 56, 126, 99, -58, 10, -68, 107, 35, 26, -103, -43, -89, 7, 86, 41, -36, 5, -127, -93, -118, 104, 108, 80, -20, -118, -75, 80, 39, -56, -97, -78, 11, -10, 3, -11, -55, -29, 98, -15, -24, 106, -20, 123, -37, -38, 27, -46, -49, -12};
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
    msg.setTimeStamp(0.41682924908);
    msg.setSource(41348U);
    msg.setSourceEntity(12U);
    msg.setDestination(47624U);
    msg.setDestinationEntity(25U);
    msg.source.assign("MWKNYORAKKWHRTWXDXB");
    const char tmp_msg_0[] = {-56, -81, 47, 112, -120, 4, 97, -108, 112, -112, 112, -13, 105, 81, 44, 52, 110, -2, -27, 83, -106, -64, 12, 43, 84, -19, -88, 60, 97, 30, -97, 69, 65, 47, -110, -60, 92, 2, 98, -88, 35, -97, -54, -117, -42, 92, -27, -115, -5, 84, 103, 50, -38, -58, 97, 56, -69, 119, 31, 15, 13, -44, -100, -97, -88, 52, -41, -72, 30, -110, 32, -66, 85};
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
    msg.setTimeStamp(0.139445644029);
    msg.setSource(3548U);
    msg.setSourceEntity(42U);
    msg.setDestination(34863U);
    msg.setDestinationEntity(27U);
    msg.seq = 3446604660U;
    msg.state = 185U;
    msg.error.assign("TNCEVVCLNNHCBEHZCDQREMSANRJXZLDABZYNRTOMSFJKRXEMIPIHZUUVFTNGPLQQVRGHHFEPOCXOTPANOHVFFYZMDQKGCJIYYNZWDIWBTGWKAIEIETUDEOSOAQACYGEQJZIKSAAJFFUPHSYSOKY");

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
    msg.setTimeStamp(0.206353839118);
    msg.setSource(26206U);
    msg.setSourceEntity(84U);
    msg.setDestination(64830U);
    msg.setDestinationEntity(237U);
    msg.seq = 779209541U;
    msg.state = 108U;
    msg.error.assign("EFEBXVFXMZJIGLMNSEKGJVYDZAUVSIYRJBNHUQMQCPOAXXKVNLKWWBWZHSRIOCJAZJIOAMKMDTDULWY");

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
    msg.setTimeStamp(0.880667264083);
    msg.setSource(21103U);
    msg.setSourceEntity(175U);
    msg.setDestination(16486U);
    msg.setDestinationEntity(45U);
    msg.seq = 728762829U;
    msg.state = 136U;
    msg.error.assign("WILKRWPPWTKRPBIXTYZCVJJYFRZFDOYNQMHHGKBYCUADYFASKSWNTTLXRIRDFZIGTQPKTSZGTDJGNCVVUEOFIAXUVQORJTLCEQOXVHUMJMKAUMYJWDAUSCPUDMVGVHEEHJBAEFZWDXXSHDQAMAJBOYNONKUFBOODZEXBLPQQGCQFTLRXOZNYXAVPJZRHXIGFSFLIVQCSGYDLKMUPKTWHWLIEBSG");

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
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.289985590524);
    msg.setSource(32166U);
    msg.setSourceEntity(58U);
    msg.setDestination(53390U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("DEWHPVMUEKDAUZETDEJBMVKDQLITESEHRDBMJDIENQUGYKAGUSXZTTAUFAURCPLEXYGAZPXVBPXMNQPEPYSAKCZCBFPVWBIRFCOHCOJURMVYTQ");
    msg.htime = 0.527351614511;
    msg.lat = 0.424711278478;
    msg.lon = 0.093495577947;
    const char tmp_msg_0[] = {57, -83, -116, -18, -57, -69, -45, 61, -32, -63, -15, -89, 91, 37, -19, 86, 20, -2, 95, -107, -87, 110, -86, 81, 108, -13, 80, -121, -28, 60, 14, 117, 32, 98, 16, 43, -108, 13, 18, 70, -91, -110, -96, 28, -93, 10, -5, 70, -25, -30, 94, -28, 117, 83, -13, -76, 50, -99, -51, -97, 16, -48, -9, -58, -120, -99, -7, -15, 72, -80, -45, -14, -76, 103, 13, -102, -30, 103, 45, 107, -97, 39, 121, -65, -65, -34, 109, -121, -117, -51, 111, 64, 81, 28, 7, 115, 53, -6, -36, -123, -16, 2, -13, 29, 13, 27, 68, -75, -43, 45, -76, 61, -39, 80, 83, -114, -34, 42, -24, -51, 10, -26, 28, 79, -60, -9, -115, -37, -79, 33, -85, -3, -18, -69, 92, -96, 116, -60, -33, 89, 56, 24, 34, -80, -39, -111, -49, -101, -60, 0, -58, -21, 92, -41, -59, 15, -72, 16, -69, -123};
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
    msg.setTimeStamp(0.275907993815);
    msg.setSource(46770U);
    msg.setSourceEntity(76U);
    msg.setDestination(32409U);
    msg.setDestinationEntity(4U);
    msg.origin.assign("OCBXQPDPLXEUESJTAUOXCZLMESZFDPJVRFIWDOXEGNHTVDVEMWODWVXLYDPDIPLCIGKKOWJEMTVMCXKLPMOCHHOTIYNKQZSKWINATNBFPSAZABQZZHFVSVUGSCWAAJQGLFBSUMKBEATDFQHMRIQIYGJTLHRYUYHWYZXPJENVDRONKETDGGWXUSYQHFNVZBN");
    msg.htime = 0.857997364919;
    msg.lat = 0.126437138907;
    msg.lon = 0.116121175608;
    const char tmp_msg_0[] = {-1, -124, 119, 71, 50, -90, 75, -62, 95, -21, -52, -47, -105, -92, 9, 107, -72, -26, 71, 62, -40, 112, -127, -19, -71, 86, -71, -76, -29, -103, -24, -9, 49, -89, -4, 126, -27, 112, 121, 52, -123, -60, 13, -52, -51, -34, -53, -101, 116, -12, 91, -63, 63, -72, -28, 21, -68, 123, -14, 94, -40, 70, 123, 83, 22, 57, 20, 73, -82, -126, 15, -33, -40, 94, 44, -128, -23, 29, -107, 60, 121, 68, -86, -83, -54, -91, 55, 109, -120, -109, -124, -3, -127, 101, 71, -20, 37, -34, -58, 76, 64, -59, -18, -109, 43, 12, -46, 112, 1, -90, 20, -105, -15, -112, 22, -52, 93, 59, -33, -95, 30, -10, 36, -41, -58, 70, 6, 23, -37, 21, -32, 4, -11, 18, 79, 98, -59, 88, 64, -9, -78, 40, -105, 9, 98, 65, 28, -127, 117, 37, -108, -38, -83, -88, -31, 42, 25, 105, 36, 31, 1, -31, 1, -78, 32, -113, 63, 60, -34, 50, -92, -27, -115, 69, 59, -104, 23, -98, 51, -31, 14, -69, 52, 120, -104, -114, -40, -51, -77, -123, -52, -14, -117, -112, -118, 31, 99, 62, -113, -68, -29, 104, 91, 1, -73, -45, -47, 66, -58, 75, 94, -48, 11, -3, -16, 126, -100, -118, 95};
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
    msg.setTimeStamp(0.0683084442023);
    msg.setSource(5513U);
    msg.setSourceEntity(8U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(182U);
    msg.origin.assign("TJFPHLAKQOWKFHKQWYMSDSHAXHHBVIREPOBLBEOMKJJQTDCUU");
    msg.htime = 0.139372415577;
    msg.lat = 0.797211647106;
    msg.lon = 0.622845513727;
    const char tmp_msg_0[] = {-33, 21, -12, -13, 15, 108, 36, -18, -26, 84, -76, 124, -101, -57, -113, 28, 91, 121, -80, 73, 34, -41, -73, -43, 87, 85, -78, -99};
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
    msg.setTimeStamp(0.907552903161);
    msg.setSource(36267U);
    msg.setSourceEntity(214U);
    msg.setDestination(7399U);
    msg.setDestinationEntity(148U);
    msg.req_id = 21849U;
    msg.destination.assign("VPEMQBAJVSNOGKXZYONMUBTTUBEWHMWYNWGAOVMILSCZDVYJJBEBRHPLISNQLWASEDDUMUTKFFGOXPAVRJCIUDRVEAOHWRXHQHJYWPQFMMOJHZISJKTVWBKUCXPAKLSBCYXTUDLFQLLFNMSPUJXTDVFMKUPKTAEHILGAEDIZKTXYHNSIBGHKASIFYELEIZWNNFPNCTZKGRPRRZFBGGQCZTMNFEGXCCCDYWVLDCYOQQRHZXGOYJSUDX");
    const char tmp_msg_0[] = {-3, -58, 69, -63, 69, 49, 109, -17, 67, 3, -19, 91, -111};
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
    msg.setTimeStamp(0.681570075562);
    msg.setSource(27119U);
    msg.setSourceEntity(3U);
    msg.setDestination(51035U);
    msg.setDestinationEntity(127U);
    msg.req_id = 24190U;
    msg.destination.assign("HJCETVEWQOVSUQAQSRIQLHUFSCF");
    const char tmp_msg_0[] = {-25, 21, 3, 97, -60, 33, 73, -78, 98, -18, 4, 91, -12, 60, -112, -102, 12, 1, -9, -37, 90, 32, -35, 9, -105, -97, -83, -47, -118, -91, -104, 95, -95, -97, 109, -105, -126, 12, 20, -114, 111, 93, -72, 93, -34, -41, -71, -51, 93, 105, -63, -14, -10, 111, -7, -31, -92, -99, 61, 100, -16, -89, 21, -44, 104, -48, -127, -16, -104, -92, 62, -54, 118, -38, -103, -87, 42, 109, 5, 103, 113, 71, 112, -44, -104, -50, 28};
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
    msg.setTimeStamp(0.642600953154);
    msg.setSource(31493U);
    msg.setSourceEntity(29U);
    msg.setDestination(49959U);
    msg.setDestinationEntity(90U);
    msg.req_id = 61328U;
    msg.destination.assign("SFNCSSKMPAWMROZHTCJTSBLPBAGRDDQZWOVESXJIH");
    const char tmp_msg_0[] = {49, -24, -93, -96, -20, -86, -20, -90, -23, -34, 82, -53, -45, -115, 50, 44, 21, -100, -18, -121, 72, -123, -117, -92, -34, 51, -78, 33, 118, 35, -48, 104, -16, 122, 5, -106, 38, -52, -2, -110, 109, -101, -63, -60, -106, -120, 48, -4, 98, 1, 46, 85, 22, -99, 87, 57, 65, 23, 69, 88, 74, 95, 119, -89, 80, -47, -54, 61, -42, -37, 2, -47, -84, 27, 19, 96, -81, 114, -104, -117, -113, 25, 2, -56, 85, -126, 43, -57, -123, -125, -32, 60, -125, 48, 28, -32, -58, -25, -107, -84, 122, -10, 52, -81, 9, -37, -105, -71, -92, -99, 20, 38, 36, -69, -85, -39, 81, -14, 11, 23, -38, -21, -83, -50, 44, -51, -6, 29};
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
    msg.setTimeStamp(0.50636007728);
    msg.setSource(43276U);
    msg.setSourceEntity(11U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(167U);
    msg.req_id = 29809U;
    msg.status = 179U;
    msg.text.assign("WCYSGZJNXUKTGPJXLCBIQWIRIHORXWUTNEBNFHZTXLSXNKLCZELKNRBQSDJPXBUSMSGIQFATNLVJCDYDOMVNRMCESZLXIYMIWJOUAMFFEGMMUZHGDJAKZWBJFREXTZYMXQJIFVMYQPVIPAUAAAKGUCAAOOTKYQDPPFZLROPRYVC");

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
    msg.setTimeStamp(0.349537921244);
    msg.setSource(11614U);
    msg.setSourceEntity(44U);
    msg.setDestination(46548U);
    msg.setDestinationEntity(219U);
    msg.req_id = 30768U;
    msg.status = 64U;
    msg.text.assign("MOOJHPQDPCJUCYHAVXDGYEWWVJMRSTUKMYSVPHXASSPWPZYFWQPBCIECKKVLMDUFFEQENKNQRGANBTYOXZHNNYWOYILXDSUUWNIGYWAARUVAVELPTGWMDHCKXMEZMJGUTNBFZJLCCAZSVXBLRG");

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
    msg.setTimeStamp(0.568117914194);
    msg.setSource(13866U);
    msg.setSourceEntity(15U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(135U);
    msg.req_id = 51986U;
    msg.status = 239U;
    msg.text.assign("JCSJYFBQMRNUJGHFDHSCATLNQSTBVYZWMUTADDEJPYQGCWELUKXVWYXLYUOUHGSZWQCAKGSNOIZPMIVETFHD");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.190235588082);
    msg.setSource(43931U);
    msg.setSourceEntity(195U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(59U);
    msg.id = 218U;
    msg.range = 0.393174392252;

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
    msg.setTimeStamp(0.521425012212);
    msg.setSource(14206U);
    msg.setSourceEntity(166U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(34U);
    msg.id = 7U;
    msg.range = 0.596974247142;

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
    msg.setTimeStamp(0.429111187197);
    msg.setSource(31447U);
    msg.setSourceEntity(49U);
    msg.setDestination(20375U);
    msg.setDestinationEntity(138U);
    msg.id = 215U;
    msg.range = 0.754778278458;

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
    msg.setTimeStamp(0.831959951274);
    msg.setSource(26087U);
    msg.setSourceEntity(74U);
    msg.setDestination(33311U);
    msg.setDestinationEntity(206U);
    msg.tx = 252U;
    msg.channel = 163U;
    msg.timer = 59363U;

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
    msg.setTimeStamp(0.0582435031652);
    msg.setSource(24226U);
    msg.setSourceEntity(63U);
    msg.setDestination(9806U);
    msg.setDestinationEntity(23U);
    msg.tx = 42U;
    msg.channel = 212U;
    msg.timer = 31272U;

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
    msg.setTimeStamp(0.785508113586);
    msg.setSource(10938U);
    msg.setSourceEntity(186U);
    msg.setDestination(18387U);
    msg.setDestinationEntity(194U);
    msg.tx = 42U;
    msg.channel = 94U;
    msg.timer = 63247U;

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
    msg.setTimeStamp(0.111652151954);
    msg.setSource(63550U);
    msg.setSourceEntity(129U);
    msg.setDestination(9821U);
    msg.setDestinationEntity(101U);
    msg.beacon.assign("AIUIXUAZEGXSYBUZFCIFFMESEDKIVBAVBOUVKCJJUIZLPLPDVADNFTAHEO");
    msg.lat = 0.151640079296;
    msg.lon = 0.239240724358;
    msg.depth = 0.198453226324;
    msg.query_channel = 41U;
    msg.reply_channel = 116U;
    msg.transponder_delay = 71U;

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
    msg.setTimeStamp(0.526820281127);
    msg.setSource(63978U);
    msg.setSourceEntity(189U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(91U);
    msg.beacon.assign("KVRTNGTFFDNNDIXBEBNAZGCTEMHXAOHUVYMERRSQDLVGGGXKZIVQYBWBLOIXQFPHZBUAIUTEJFZAQSDXJALVCJESHCTWUZVXSFUTDIXZUWWYDKCOMHONNHGPQSHXEOCLGYZSCMLYGYVOUQPNUJRVBJJWTVPJOUKBQXDIGGMSEFRPFUKEYPSKZ");
    msg.lat = 0.413506865267;
    msg.lon = 0.240685827585;
    msg.depth = 0.298851092292;
    msg.query_channel = 121U;
    msg.reply_channel = 72U;
    msg.transponder_delay = 52U;

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
    msg.setTimeStamp(0.242933948764);
    msg.setSource(21997U);
    msg.setSourceEntity(140U);
    msg.setDestination(30035U);
    msg.setDestinationEntity(141U);
    msg.beacon.assign("GXBWINGPXGFKHLGFHSFUPXTMXLLURZZYETBMZQOGPFAFSXYEQOTQHIBHIXOTGWDTRYBVAYIQESJTVUKWIOPBADKATCPZWBHVDHMIVN");
    msg.lat = 0.803636289829;
    msg.lon = 0.994418647736;
    msg.depth = 0.433439004196;
    msg.query_channel = 76U;
    msg.reply_channel = 63U;
    msg.transponder_delay = 121U;

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
    msg.setTimeStamp(0.990788557042);
    msg.setSource(14577U);
    msg.setSourceEntity(116U);
    msg.setDestination(61407U);
    msg.setDestinationEntity(44U);
    msg.op = 81U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WHMBPKMLOHAHSDLUODIGBYYNAXMQERDGNTHVGQIIMCYJUXWMOTITJPQEZFQXWLWFTRCAUCNMLEZ");
    tmp_msg_0.lat = 0.437631910234;
    tmp_msg_0.lon = 0.1457729213;
    tmp_msg_0.depth = 0.596404978264;
    tmp_msg_0.query_channel = 157U;
    tmp_msg_0.reply_channel = 207U;
    tmp_msg_0.transponder_delay = 140U;
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
    msg.setTimeStamp(0.853421552142);
    msg.setSource(40886U);
    msg.setSourceEntity(85U);
    msg.setDestination(61377U);
    msg.setDestinationEntity(87U);
    msg.op = 216U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XBJWXEKXWQPLJSACOZVYLYNZHZZGEGFLVPMMNYLEOTBPPGSFRCLGKNVLXYEBMUHVRIVUUWZIAAQNUKXYFCASMPKUOCHKFOYIMFEPQDGLOBZEHQYNMBTCITLTWCWQZSJDRRCA");
    tmp_msg_0.lat = 0.210671899967;
    tmp_msg_0.lon = 0.743396082738;
    tmp_msg_0.depth = 0.130876912061;
    tmp_msg_0.query_channel = 89U;
    tmp_msg_0.reply_channel = 51U;
    tmp_msg_0.transponder_delay = 11U;
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
    msg.setTimeStamp(0.285899208295);
    msg.setSource(11543U);
    msg.setSourceEntity(89U);
    msg.setDestination(34975U);
    msg.setDestinationEntity(28U);
    msg.op = 223U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OGYURGFIUSYWOMXOYJTHBUINMBQNBIKMROFHTNTAQRTUXJQDKUDSNNHVPPOO");
    tmp_msg_0.lat = 0.634386776966;
    tmp_msg_0.lon = 0.687777621113;
    tmp_msg_0.depth = 0.0788023675621;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 98U;
    tmp_msg_0.transponder_delay = 55U;
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
    msg.setTimeStamp(0.623398969385);
    msg.setSource(4390U);
    msg.setSourceEntity(223U);
    msg.setDestination(44501U);
    msg.setDestinationEntity(166U);
    msg.address = 246U;

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
    msg.setTimeStamp(0.177318236847);
    msg.setSource(30090U);
    msg.setSourceEntity(13U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(110U);
    msg.address = 55U;

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
    msg.setTimeStamp(0.865616341456);
    msg.setSource(56867U);
    msg.setSourceEntity(36U);
    msg.setDestination(40737U);
    msg.setDestinationEntity(245U);
    msg.address = 166U;

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
    msg.setTimeStamp(0.0797160223572);
    msg.setSource(63726U);
    msg.setSourceEntity(86U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(100U);
    msg.address = 209U;
    msg.status = 249U;
    msg.range = 0.409337177246;

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
    msg.setTimeStamp(0.181387481202);
    msg.setSource(41543U);
    msg.setSourceEntity(236U);
    msg.setDestination(32654U);
    msg.setDestinationEntity(60U);
    msg.address = 77U;
    msg.status = 67U;
    msg.range = 0.676759595647;

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
    msg.setTimeStamp(0.554479836703);
    msg.setSource(59474U);
    msg.setSourceEntity(133U);
    msg.setDestination(15667U);
    msg.setDestinationEntity(144U);
    msg.address = 75U;
    msg.status = 181U;
    msg.range = 0.832920001378;

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
    msg.setTimeStamp(0.185284425039);
    msg.setSource(48182U);
    msg.setSourceEntity(129U);
    msg.setDestination(39714U);
    msg.setDestinationEntity(195U);
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.578574597544;
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
    msg.setTimeStamp(0.499802726403);
    msg.setSource(19450U);
    msg.setSourceEntity(159U);
    msg.setDestination(24216U);
    msg.setDestinationEntity(38U);
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 60877U;
    tmp_msg_0.control_ent = 247U;
    tmp_msg_0.timeout = 0.961834088159;
    tmp_msg_0.loiter_radius = 0.204188423126;
    tmp_msg_0.altitude_interval = 0.498965587653;
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
    msg.setTimeStamp(0.0365767159207);
    msg.setSource(30681U);
    msg.setSourceEntity(189U);
    msg.setDestination(2212U);
    msg.setDestinationEntity(176U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 165U;
    tmp_msg_0.eta = 59904U;
    tmp_msg_0.info.assign("RLGMIDZHAYFHJDVCOSYXYMFJLRBXITUMZNMPBCAPCQTHQKGXNGAORKZBFEUWVVNUEWNQNRVAYKFWDRNBWZAMULYZFDPTHYWXHHPGTEVCEIMSVLUXXEPVYDIIYINOFCJOZBJTUOBDKWELBSRDTWEENHUJOLUPZIBKJC");
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
    msg.setTimeStamp(0.647499320681);
    msg.setSource(50961U);
    msg.setSourceEntity(8U);
    msg.setDestination(58358U);
    msg.setDestinationEntity(121U);
    msg.enable = 143U;

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
    msg.setTimeStamp(0.481533104636);
    msg.setSource(52533U);
    msg.setSourceEntity(205U);
    msg.setDestination(40069U);
    msg.setDestinationEntity(139U);
    msg.enable = 155U;

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
    msg.setTimeStamp(0.0181134048242);
    msg.setSource(5355U);
    msg.setSourceEntity(11U);
    msg.setDestination(9468U);
    msg.setDestinationEntity(118U);
    msg.enable = 217U;

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
    msg.setTimeStamp(0.102669110451);
    msg.setSource(896U);
    msg.setSourceEntity(253U);
    msg.setDestination(30395U);
    msg.setDestinationEntity(15U);
    msg.summary = 39U;
    msg.level = 19U;

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
    msg.setTimeStamp(0.0861163729466);
    msg.setSource(19284U);
    msg.setSourceEntity(53U);
    msg.setDestination(60780U);
    msg.setDestinationEntity(53U);
    msg.summary = 79U;
    msg.level = 88U;

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
    msg.setTimeStamp(0.0162227240608);
    msg.setSource(12746U);
    msg.setSourceEntity(188U);
    msg.setDestination(3638U);
    msg.setDestinationEntity(14U);
    msg.summary = 94U;
    msg.level = 206U;

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
    msg.setTimeStamp(0.979486051244);
    msg.setSource(7181U);
    msg.setSourceEntity(191U);
    msg.setDestination(37563U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.59502649906);
    msg.setSource(31694U);
    msg.setSourceEntity(72U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.208381804625);
    msg.setSource(54899U);
    msg.setSourceEntity(192U);
    msg.setDestination(46199U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.587852413792);
    msg.setSource(45341U);
    msg.setSourceEntity(173U);
    msg.setDestination(4876U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.172939055346);
    msg.setSource(47469U);
    msg.setSourceEntity(109U);
    msg.setDestination(40811U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.290103424741);
    msg.setSource(42677U);
    msg.setSourceEntity(19U);
    msg.setDestination(30733U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.265663608055);
    msg.setSource(29898U);
    msg.setSourceEntity(240U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(100U);
    msg.op = 122U;
    msg.system.assign("PPVQTGFHMOGXLSKNDJPQOUPPNYIKZIIGWBSUXTBQCFBKOZSLCMLOMTZUJQEEBUNYWCQGWSWWWBJNUBFRPDCDAGQJDNWSVDIRHKLBQYAKSWMNJROTRPXJBXVOOZUHTZNREYRIBULTICYAJDQZMYDSJAVVPHRHUIAMAFLVGSLJOVZMOTCZQLEIFWGTEAVEYPWRHKJLEGN");
    msg.range = 0.994891499382;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 17226U;
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
    msg.setTimeStamp(0.687979905243);
    msg.setSource(13447U);
    msg.setSourceEntity(232U);
    msg.setDestination(28283U);
    msg.setDestinationEntity(35U);
    msg.op = 159U;
    msg.system.assign("DZZADXNNCVZJH");
    msg.range = 0.299487114764;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 62569U;
    tmp_msg_0.lat = 0.283702738407;
    tmp_msg_0.lon = 0.218622610919;
    tmp_msg_0.z = 0.688097638595;
    tmp_msg_0.z_units = 248U;
    tmp_msg_0.speed = 0.399321714145;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.duration = 1656U;
    tmp_msg_0.radius = 0.724578234359;
    tmp_msg_0.flags = 220U;
    tmp_msg_0.custom.assign("QXEFCYXDGXVXLJCXBKNPCPSTUUWJOSKPQRIFRBGAVOZEKROJAKEXDNLUJCJOIZBHPEJTVDMNAHHLJFFHOTXTTCSKNSJEHBSKLWTQCDA");
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
    msg.setTimeStamp(0.0620384311247);
    msg.setSource(7342U);
    msg.setSourceEntity(233U);
    msg.setDestination(14603U);
    msg.setDestinationEntity(209U);
    msg.op = 59U;
    msg.system.assign("NTLEMZCORHGPFRPSRQBMQCSPTJGNJRBFLGNEDYGRSQFEFHGTNDQFMXJISVWYDSGUERLZUMFOMCXBUISVXACWIFHBIAEWDXMQKOXVUTOXZFJMJUWZCQMNXHHAARLVTAXLCIHOOIYMTKUNCKJPFVTTHAVZBNTVZPPRKTVCDDEWYXSOYMCY");
    msg.range = 0.35007145472;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 47U;
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
    msg.setTimeStamp(0.415147247253);
    msg.setSource(42812U);
    msg.setSourceEntity(5U);
    msg.setDestination(138U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.491864404702);
    msg.setSource(8870U);
    msg.setSourceEntity(224U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.830974209391);
    msg.setSource(62443U);
    msg.setSourceEntity(186U);
    msg.setDestination(10776U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.606817169465);
    msg.setSource(23170U);
    msg.setSourceEntity(7U);
    msg.setDestination(52533U);
    msg.setDestinationEntity(235U);
    msg.list.assign("DSMFVEMXMWFABFLONDZTAOORTKFQAQFWLNYUHUAZOKONIEXHXVHVOMCRVSLYLQPHSQDKSCYIKMEVDUXILOHCPSCZRWGQEIZJHGYRJYYFDGHSXVD");

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
    msg.setTimeStamp(0.515132371627);
    msg.setSource(20392U);
    msg.setSourceEntity(108U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(142U);
    msg.list.assign("DJRBWQGGIRASSRUGQWMVQOCEVXJLPDYURKIIZEKUNILTQFBLUZWAGAHEIMJYYSMPLVMBODOHBPAGYVVFYFBXNWPJEHJPSMUGDZMTDWXFR");

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
    msg.setTimeStamp(0.178951153379);
    msg.setSource(6408U);
    msg.setSourceEntity(239U);
    msg.setDestination(57754U);
    msg.setDestinationEntity(39U);
    msg.list.assign("MVILZKOSWDCYJNQEABYFCFEVIDXNZWQMFOCJCEXXZSNPSMUIHGABBADAGIDLKHYJPROBALOHJCZGIJKQEVUWCQFLLRBLUZKJWVLFVKACTOGCQYKQXSLZYWRURHHAMECMRJZRVPSSXN");

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
    msg.setTimeStamp(0.726582249736);
    msg.setSource(11785U);
    msg.setSourceEntity(121U);
    msg.setDestination(43317U);
    msg.setDestinationEntity(7U);
    msg.value = -22187;

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
    msg.setTimeStamp(0.0232184438418);
    msg.setSource(47982U);
    msg.setSourceEntity(117U);
    msg.setDestination(62853U);
    msg.setDestinationEntity(28U);
    msg.value = 31800;

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
    msg.setTimeStamp(0.309475364484);
    msg.setSource(12244U);
    msg.setSourceEntity(228U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(152U);
    msg.value = 17729;

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
    msg.setTimeStamp(0.866270011941);
    msg.setSource(22267U);
    msg.setSourceEntity(55U);
    msg.setDestination(21284U);
    msg.setDestinationEntity(244U);
    msg.value = 0.891733287995;

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
    msg.setTimeStamp(0.421504366534);
    msg.setSource(27513U);
    msg.setSourceEntity(38U);
    msg.setDestination(59060U);
    msg.setDestinationEntity(177U);
    msg.value = 0.930382317296;

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
    msg.setTimeStamp(0.694273757721);
    msg.setSource(52596U);
    msg.setSourceEntity(48U);
    msg.setDestination(36862U);
    msg.setDestinationEntity(248U);
    msg.value = 0.483716210403;

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
    msg.setTimeStamp(0.183760987984);
    msg.setSource(25188U);
    msg.setSourceEntity(125U);
    msg.setDestination(12864U);
    msg.setDestinationEntity(122U);
    msg.value = 0.87338318409;

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
    msg.setTimeStamp(0.890791369726);
    msg.setSource(61993U);
    msg.setSourceEntity(163U);
    msg.setDestination(28554U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0585724138177;

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
    msg.setTimeStamp(0.108041689951);
    msg.setSource(14410U);
    msg.setSourceEntity(153U);
    msg.setDestination(29659U);
    msg.setDestinationEntity(168U);
    msg.value = 0.477969739155;

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
    msg.setTimeStamp(0.881212792344);
    msg.setSource(44011U);
    msg.setSourceEntity(106U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(218U);
    msg.validity = 22787U;
    msg.type = 169U;
    msg.utc_year = 9070U;
    msg.utc_month = 57U;
    msg.utc_day = 74U;
    msg.utc_time = 0.982797070426;
    msg.lat = 0.987582423343;
    msg.lon = 0.710455237745;
    msg.height = 0.113258679819;
    msg.satellites = 174U;
    msg.cog = 0.847926077008;
    msg.sog = 0.624549327636;
    msg.hdop = 0.775919462312;
    msg.vdop = 0.559486969229;
    msg.hacc = 0.0324301729764;
    msg.vacc = 0.158293850701;

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
    msg.setTimeStamp(0.0128363979122);
    msg.setSource(18747U);
    msg.setSourceEntity(82U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(106U);
    msg.validity = 6519U;
    msg.type = 239U;
    msg.utc_year = 7123U;
    msg.utc_month = 175U;
    msg.utc_day = 226U;
    msg.utc_time = 0.0872629870138;
    msg.lat = 0.962076700994;
    msg.lon = 0.0258928580888;
    msg.height = 0.711313384839;
    msg.satellites = 42U;
    msg.cog = 0.831168420464;
    msg.sog = 0.731690262546;
    msg.hdop = 0.0727674818331;
    msg.vdop = 0.437282250548;
    msg.hacc = 0.436116764182;
    msg.vacc = 0.681255790812;

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
    msg.setTimeStamp(0.49988822741);
    msg.setSource(14527U);
    msg.setSourceEntity(123U);
    msg.setDestination(19766U);
    msg.setDestinationEntity(240U);
    msg.validity = 40924U;
    msg.type = 25U;
    msg.utc_year = 39646U;
    msg.utc_month = 27U;
    msg.utc_day = 168U;
    msg.utc_time = 0.454225244383;
    msg.lat = 0.939292239962;
    msg.lon = 0.25511667633;
    msg.height = 0.443055703862;
    msg.satellites = 229U;
    msg.cog = 0.317999351245;
    msg.sog = 0.476234466251;
    msg.hdop = 0.442740870288;
    msg.vdop = 0.928555659803;
    msg.hacc = 0.365948831516;
    msg.vacc = 0.307199481295;

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
    msg.setTimeStamp(0.921151806748);
    msg.setSource(62405U);
    msg.setSourceEntity(162U);
    msg.setDestination(50240U);
    msg.setDestinationEntity(106U);
    msg.time = 0.941638242718;
    msg.phi = 0.112017627675;
    msg.theta = 0.152316318861;
    msg.psi = 0.216710610876;
    msg.psi_magnetic = 0.124288537535;

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
    msg.setTimeStamp(0.686037499849);
    msg.setSource(50382U);
    msg.setSourceEntity(34U);
    msg.setDestination(62960U);
    msg.setDestinationEntity(179U);
    msg.time = 0.457061576262;
    msg.phi = 0.447702173824;
    msg.theta = 0.683464162561;
    msg.psi = 0.500507441428;
    msg.psi_magnetic = 0.422848269457;

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
    msg.setTimeStamp(0.969771350759);
    msg.setSource(26142U);
    msg.setSourceEntity(208U);
    msg.setDestination(18765U);
    msg.setDestinationEntity(107U);
    msg.time = 0.870838044036;
    msg.phi = 0.574877313827;
    msg.theta = 0.628701626096;
    msg.psi = 0.226923178692;
    msg.psi_magnetic = 0.568740064414;

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
    msg.setTimeStamp(0.749364399402);
    msg.setSource(41532U);
    msg.setSourceEntity(41U);
    msg.setDestination(54806U);
    msg.setDestinationEntity(215U);
    msg.time = 0.362866977702;
    msg.x = 0.432392271839;
    msg.y = 0.486206506946;
    msg.z = 0.265648193128;
    msg.timestep = 0.214560047745;

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
    msg.setTimeStamp(0.118275032961);
    msg.setSource(21194U);
    msg.setSourceEntity(214U);
    msg.setDestination(33875U);
    msg.setDestinationEntity(190U);
    msg.time = 0.767376479399;
    msg.x = 0.0997389087586;
    msg.y = 0.0970684474646;
    msg.z = 0.119152291779;
    msg.timestep = 0.30019206037;

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
    msg.setTimeStamp(0.324996715573);
    msg.setSource(7427U);
    msg.setSourceEntity(21U);
    msg.setDestination(55620U);
    msg.setDestinationEntity(230U);
    msg.time = 0.762003267217;
    msg.x = 0.54410544141;
    msg.y = 0.994499070772;
    msg.z = 0.53029151739;
    msg.timestep = 0.991488122943;

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
    msg.setTimeStamp(0.955408226316);
    msg.setSource(17271U);
    msg.setSourceEntity(103U);
    msg.setDestination(35420U);
    msg.setDestinationEntity(164U);
    msg.time = 0.185188681963;
    msg.x = 0.418516794991;
    msg.y = 0.729063558613;
    msg.z = 0.9096626763;

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
    msg.setTimeStamp(0.458494145796);
    msg.setSource(4712U);
    msg.setSourceEntity(222U);
    msg.setDestination(214U);
    msg.setDestinationEntity(87U);
    msg.time = 0.953328060088;
    msg.x = 0.817874369368;
    msg.y = 0.701910682805;
    msg.z = 0.886578811552;

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
    msg.setTimeStamp(0.172521999836);
    msg.setSource(45377U);
    msg.setSourceEntity(205U);
    msg.setDestination(1401U);
    msg.setDestinationEntity(93U);
    msg.time = 0.418078043754;
    msg.x = 0.548758228475;
    msg.y = 0.680333945023;
    msg.z = 0.735676901506;

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
    msg.setTimeStamp(0.1273353841);
    msg.setSource(62189U);
    msg.setSourceEntity(185U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(105U);
    msg.time = 0.0470112079972;
    msg.x = 0.588132523193;
    msg.y = 0.401275463493;
    msg.z = 0.699887166624;

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
    msg.setTimeStamp(0.813274626476);
    msg.setSource(14005U);
    msg.setSourceEntity(135U);
    msg.setDestination(1600U);
    msg.setDestinationEntity(49U);
    msg.time = 0.404938725977;
    msg.x = 0.605002843382;
    msg.y = 0.811079754736;
    msg.z = 0.62013688003;

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
    msg.setTimeStamp(0.566549375742);
    msg.setSource(26286U);
    msg.setSourceEntity(51U);
    msg.setDestination(16630U);
    msg.setDestinationEntity(128U);
    msg.time = 0.10345295779;
    msg.x = 0.673388144687;
    msg.y = 0.307190959075;
    msg.z = 0.104813253243;

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
    msg.setTimeStamp(0.908151813229);
    msg.setSource(5379U);
    msg.setSourceEntity(57U);
    msg.setDestination(33307U);
    msg.setDestinationEntity(137U);
    msg.time = 0.506677902408;
    msg.x = 0.270426956323;
    msg.y = 0.349066298474;
    msg.z = 0.732345990565;

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
    msg.setTimeStamp(0.325680956389);
    msg.setSource(36151U);
    msg.setSourceEntity(16U);
    msg.setDestination(29685U);
    msg.setDestinationEntity(211U);
    msg.time = 0.903745004794;
    msg.x = 0.593018527913;
    msg.y = 0.0263990443732;
    msg.z = 0.563945215667;

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
    msg.setTimeStamp(0.997188570383);
    msg.setSource(27723U);
    msg.setSourceEntity(252U);
    msg.setDestination(42857U);
    msg.setDestinationEntity(46U);
    msg.time = 0.42793981522;
    msg.x = 0.153681112846;
    msg.y = 0.474923813518;
    msg.z = 0.211650740735;

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
    msg.setTimeStamp(0.161532517599);
    msg.setSource(22690U);
    msg.setSourceEntity(170U);
    msg.setDestination(6762U);
    msg.setDestinationEntity(104U);
    msg.validity = 195U;
    msg.x = 0.883127289707;
    msg.y = 0.564254954752;
    msg.z = 0.565403917377;

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
    msg.setTimeStamp(0.959287871331);
    msg.setSource(61479U);
    msg.setSourceEntity(55U);
    msg.setDestination(29720U);
    msg.setDestinationEntity(51U);
    msg.validity = 169U;
    msg.x = 0.934145385973;
    msg.y = 0.530097551965;
    msg.z = 0.609452848038;

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
    msg.setTimeStamp(0.189599925818);
    msg.setSource(14106U);
    msg.setSourceEntity(148U);
    msg.setDestination(61306U);
    msg.setDestinationEntity(244U);
    msg.validity = 208U;
    msg.x = 0.639217588433;
    msg.y = 0.613391729807;
    msg.z = 0.541473404592;

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
    msg.setTimeStamp(0.472034216732);
    msg.setSource(52279U);
    msg.setSourceEntity(8U);
    msg.setDestination(22355U);
    msg.setDestinationEntity(95U);
    msg.validity = 63U;
    msg.x = 0.13018764364;
    msg.y = 0.460233066312;
    msg.z = 0.305269260439;

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
    msg.setTimeStamp(0.246510870149);
    msg.setSource(18301U);
    msg.setSourceEntity(43U);
    msg.setDestination(25138U);
    msg.setDestinationEntity(226U);
    msg.validity = 58U;
    msg.x = 0.488158468536;
    msg.y = 0.531321257266;
    msg.z = 0.408962736333;

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
    msg.setTimeStamp(0.213492417295);
    msg.setSource(54792U);
    msg.setSourceEntity(232U);
    msg.setDestination(54394U);
    msg.setDestinationEntity(208U);
    msg.validity = 175U;
    msg.x = 0.583310114622;
    msg.y = 0.502359770089;
    msg.z = 0.0673171189718;

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
    msg.setTimeStamp(0.710395185707);
    msg.setSource(55014U);
    msg.setSourceEntity(81U);
    msg.setDestination(43303U);
    msg.setDestinationEntity(134U);
    msg.time = 0.311573298923;
    msg.x = 0.334833491159;
    msg.y = 0.666445824677;
    msg.z = 0.534543116639;

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
    msg.setTimeStamp(0.731976417585);
    msg.setSource(41616U);
    msg.setSourceEntity(13U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(165U);
    msg.time = 0.0841224961841;
    msg.x = 0.549007684757;
    msg.y = 0.637965985941;
    msg.z = 0.118749795994;

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
    msg.setTimeStamp(0.880207939869);
    msg.setSource(60467U);
    msg.setSourceEntity(204U);
    msg.setDestination(34466U);
    msg.setDestinationEntity(126U);
    msg.time = 0.0724076693038;
    msg.x = 0.549689598291;
    msg.y = 0.568257971386;
    msg.z = 0.26543690098;

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
    msg.setTimeStamp(0.563626315066);
    msg.setSource(21406U);
    msg.setSourceEntity(253U);
    msg.setDestination(46673U);
    msg.setDestinationEntity(247U);
    msg.validity = 39U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.647822110288;
    tmp_msg_0.y = 0.961386165476;
    tmp_msg_0.z = 0.57019993329;
    tmp_msg_0.phi = 0.195193443323;
    tmp_msg_0.theta = 0.568580300814;
    tmp_msg_0.psi = 0.584464083187;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0401105664141;

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
    msg.setTimeStamp(0.476495318771);
    msg.setSource(43671U);
    msg.setSourceEntity(167U);
    msg.setDestination(4392U);
    msg.setDestinationEntity(0U);
    msg.validity = 24U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.531285130647;
    tmp_msg_0.y = 0.880316076577;
    tmp_msg_0.z = 0.797545539613;
    tmp_msg_0.phi = 0.24007865155;
    tmp_msg_0.theta = 0.328695026486;
    tmp_msg_0.psi = 0.475345187306;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.239644808865;
    tmp_msg_1.beam_height = 0.373818580323;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0516778907478;

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
    msg.setTimeStamp(0.33322541928);
    msg.setSource(40316U);
    msg.setSourceEntity(194U);
    msg.setDestination(43771U);
    msg.setDestinationEntity(26U);
    msg.validity = 70U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.479393507675;
    tmp_msg_0.y = 0.399378693166;
    tmp_msg_0.z = 0.146333073819;
    tmp_msg_0.phi = 0.899396023855;
    tmp_msg_0.theta = 0.217149423716;
    tmp_msg_0.psi = 0.735519660946;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.186858918269;
    tmp_msg_1.beam_height = 0.997363785584;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.495348745616;

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
    msg.setTimeStamp(0.779846587631);
    msg.setSource(43420U);
    msg.setSourceEntity(224U);
    msg.setDestination(60748U);
    msg.setDestinationEntity(84U);
    msg.value = 0.606818449955;

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
    msg.setTimeStamp(0.00115101173694);
    msg.setSource(43480U);
    msg.setSourceEntity(104U);
    msg.setDestination(53987U);
    msg.setDestinationEntity(229U);
    msg.value = 0.720181393033;

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
    msg.setTimeStamp(0.751146791066);
    msg.setSource(16735U);
    msg.setSourceEntity(39U);
    msg.setDestination(19844U);
    msg.setDestinationEntity(215U);
    msg.value = 0.298582627453;

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
    msg.setTimeStamp(0.894819276247);
    msg.setSource(58359U);
    msg.setSourceEntity(18U);
    msg.setDestination(61481U);
    msg.setDestinationEntity(59U);
    msg.value = 0.245734188598;

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
    msg.setTimeStamp(0.0975450912873);
    msg.setSource(58660U);
    msg.setSourceEntity(54U);
    msg.setDestination(54465U);
    msg.setDestinationEntity(251U);
    msg.value = 0.192274237184;

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
    msg.setTimeStamp(0.491724126424);
    msg.setSource(59278U);
    msg.setSourceEntity(62U);
    msg.setDestination(124U);
    msg.setDestinationEntity(112U);
    msg.value = 0.294867947588;

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
    msg.setTimeStamp(0.975456749782);
    msg.setSource(12415U);
    msg.setSourceEntity(69U);
    msg.setDestination(61552U);
    msg.setDestinationEntity(221U);
    msg.value = 0.36476982118;

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
    msg.setTimeStamp(0.230435893883);
    msg.setSource(12322U);
    msg.setSourceEntity(182U);
    msg.setDestination(60008U);
    msg.setDestinationEntity(199U);
    msg.value = 0.800892037762;

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
    msg.setTimeStamp(0.817572624023);
    msg.setSource(53759U);
    msg.setSourceEntity(188U);
    msg.setDestination(50074U);
    msg.setDestinationEntity(68U);
    msg.value = 0.237378866956;

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
    msg.setTimeStamp(0.599997398633);
    msg.setSource(18155U);
    msg.setSourceEntity(193U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(18U);
    msg.value = 0.693645050025;

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
    msg.setTimeStamp(0.464596797746);
    msg.setSource(10710U);
    msg.setSourceEntity(234U);
    msg.setDestination(54744U);
    msg.setDestinationEntity(18U);
    msg.value = 0.612987398291;

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
    msg.setTimeStamp(0.967008535597);
    msg.setSource(45878U);
    msg.setSourceEntity(119U);
    msg.setDestination(56591U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0813564198276;

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
    msg.setTimeStamp(0.267991959577);
    msg.setSource(39774U);
    msg.setSourceEntity(230U);
    msg.setDestination(27373U);
    msg.setDestinationEntity(143U);
    msg.value = 0.806145876718;

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
    msg.setTimeStamp(0.945228738389);
    msg.setSource(8872U);
    msg.setSourceEntity(53U);
    msg.setDestination(11837U);
    msg.setDestinationEntity(166U);
    msg.value = 0.368286471136;

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
    msg.setTimeStamp(0.65498537346);
    msg.setSource(21837U);
    msg.setSourceEntity(113U);
    msg.setDestination(8219U);
    msg.setDestinationEntity(35U);
    msg.value = 0.727793338052;

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
    msg.setTimeStamp(0.305355257492);
    msg.setSource(45993U);
    msg.setSourceEntity(110U);
    msg.setDestination(55344U);
    msg.setDestinationEntity(197U);
    msg.value = 0.367942879072;

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
    msg.setTimeStamp(0.0513951826438);
    msg.setSource(63608U);
    msg.setSourceEntity(216U);
    msg.setDestination(20622U);
    msg.setDestinationEntity(143U);
    msg.value = 0.299722937613;

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
    msg.setTimeStamp(0.350309701771);
    msg.setSource(51142U);
    msg.setSourceEntity(136U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(49U);
    msg.value = 0.865264081294;

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
    msg.setTimeStamp(0.405610747396);
    msg.setSource(3890U);
    msg.setSourceEntity(3U);
    msg.setDestination(16379U);
    msg.setDestinationEntity(183U);
    msg.value = 0.526166079852;

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
    msg.setTimeStamp(0.292740845769);
    msg.setSource(1788U);
    msg.setSourceEntity(232U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(154U);
    msg.value = 0.782882102116;

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
    msg.setTimeStamp(0.979712278673);
    msg.setSource(19274U);
    msg.setSourceEntity(44U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(64U);
    msg.value = 0.918319812894;

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
    msg.setTimeStamp(0.161805584845);
    msg.setSource(58960U);
    msg.setSourceEntity(92U);
    msg.setDestination(5818U);
    msg.setDestinationEntity(153U);
    msg.value = 0.503422809166;

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
    msg.setTimeStamp(0.462563876842);
    msg.setSource(20682U);
    msg.setSourceEntity(236U);
    msg.setDestination(48436U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0784179331725;

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
    msg.setTimeStamp(0.357655150189);
    msg.setSource(17916U);
    msg.setSourceEntity(124U);
    msg.setDestination(18548U);
    msg.setDestinationEntity(214U);
    msg.value = 0.403842874998;

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
    msg.setTimeStamp(0.9843744189);
    msg.setSource(53278U);
    msg.setSourceEntity(123U);
    msg.setDestination(43819U);
    msg.setDestinationEntity(184U);
    msg.direction = 0.115895142783;
    msg.speed = 0.245656913904;

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
    msg.setTimeStamp(0.150067619766);
    msg.setSource(38369U);
    msg.setSourceEntity(132U);
    msg.setDestination(30844U);
    msg.setDestinationEntity(197U);
    msg.direction = 0.256713226867;
    msg.speed = 0.0292915184025;

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
    msg.setTimeStamp(0.538580291916);
    msg.setSource(2697U);
    msg.setSourceEntity(161U);
    msg.setDestination(6024U);
    msg.setDestinationEntity(63U);
    msg.direction = 0.835117603423;
    msg.speed = 0.0294601483615;

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
    msg.setTimeStamp(0.956095345837);
    msg.setSource(22017U);
    msg.setSourceEntity(153U);
    msg.setDestination(44732U);
    msg.setDestinationEntity(252U);
    msg.value = 0.150690637187;

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
    msg.setTimeStamp(0.918549280396);
    msg.setSource(54109U);
    msg.setSourceEntity(219U);
    msg.setDestination(24354U);
    msg.setDestinationEntity(247U);
    msg.value = 0.015930348472;

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
    msg.setTimeStamp(0.160118111709);
    msg.setSource(30163U);
    msg.setSourceEntity(156U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(12U);
    msg.value = 0.244324241339;

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
    msg.setTimeStamp(0.366504383448);
    msg.setSource(11408U);
    msg.setSourceEntity(121U);
    msg.setDestination(52916U);
    msg.setDestinationEntity(16U);
    msg.value.assign("MKCPOKZUKXSJWESTBBTIHOUBDRVMGHEDDPEDYJQMNCPVREXDJIHQIVRROWKILGIQNQTBLESCFXJXJVFALNOLXZAUIFHFGGFSVSWZXBGBNTJEMTAKKODPWMZMTVXAHZOGQWRPYPWJHLVW");

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
    msg.setTimeStamp(0.150814887956);
    msg.setSource(15532U);
    msg.setSourceEntity(29U);
    msg.setDestination(65399U);
    msg.setDestinationEntity(61U);
    msg.value.assign("RNORQWQFLTOHOHFPIAXKQTGOFDKHTDCVSEKWSNEAZRQPCSPHAFRVGMYVCAMWNLVSZCCJJMDBGYZYOFYMFXEIQOEINZCVNNHBJZHBLLUMDXLQQXGCHXFBIQVIRGVXEULHFTLPSKMAPPDLTPIIJACBKXSLUJGRJER");

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
    msg.setTimeStamp(0.828567502458);
    msg.setSource(13412U);
    msg.setSourceEntity(153U);
    msg.setDestination(54435U);
    msg.setDestinationEntity(18U);
    msg.value.assign("NTZOSEHXGTIDHOXSSUWIWAMCNUFKLTELXJBMULTYLAONOJLCQZIWVEFMGSPUMVYCIANWZNBFRLBKQVZASF");

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
    msg.setTimeStamp(0.46800552686);
    msg.setSource(12243U);
    msg.setSourceEntity(229U);
    msg.setDestination(54258U);
    msg.setDestinationEntity(42U);
    const char tmp_msg_0[] = {-61, 119, 60, -101, 32, -27, -75, 72, -98, 124, 2, -69, -125, 124, 32, 97, 7, -119, 84, 92, 113, -67, -112, 38, 97, -25, 102, -89, 45, -6, 7, -119, 51, 104, -2, 0, 31, -92, -108, -73, 49, 70, 93, 89, 28, 86, -18, 49, 55, -22, -58, -91, 74, -28, 76, 109, 3, 70, -57, -109, -81, -47, 58, -4, -21, 35, -127, -128, 19, 52, 121, 60, -87, -15, 52, 61, 17, 71, 55, -75, -89, -7, -86, -72, -48, -100, -71, -52, -66, -93, -27, 15, -66, 101, 45, -27, -115, 97, 114, 57, 43, -70, -92, -55, 67, 67, 67, -38, -54, 49, -29, 93, 48, 5, -8, -54, -31};
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
    msg.setTimeStamp(0.975147331652);
    msg.setSource(13738U);
    msg.setSourceEntity(208U);
    msg.setDestination(53609U);
    msg.setDestinationEntity(79U);
    const char tmp_msg_0[] = {24, -114, 125, 32, -91, 47, -104, -39, -103, -43, -118, 116, -1, -43, 24, -70, 54, -39, -14, 8, -3, -116, -84, 45, -81, -7, -36, -49, -73, 31, 99, 93, -103, -100, 87, -102, -84, 49, 2, 24, -86, -34, 89, -49, -72, -94, 82, 37, 82, -73, 64, 0, 120, -54, 94, -89, 26, 74, 33, 30, -33, -14, -27, -66, 95, -74, 126, 120, -4, 59, 99, 88, 115, 77, 12, -104, 52, -125, -62, 25, 60, 74, 78, 39, -107, -39, 29, 125, 125, 83, -108, 14, -41, 86, 64, 25, 105, 87, 47, 78, -4, 123, -10, -17, 91, -3, -4, 94, 27, 73, 13, -66, 112, -30, 33, 50, -20, -27, -8, -98, -120, -11, 49, 0, 12, -54, 100, 14, -59, -41, 119, -76, -46, 16, 108, 33};
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
    msg.setTimeStamp(0.860738982422);
    msg.setSource(25651U);
    msg.setSourceEntity(103U);
    msg.setDestination(22479U);
    msg.setDestinationEntity(15U);
    const char tmp_msg_0[] = {-49, 11, 16, 39, 107, -80, -74, -124, -117, 95, -61, 64, -27, 0, 95, 87, -37, -29, 13, -92, -124, -105, 94, 7, -88, 25, -19, 95, 23, -116, -119, -120, 116, 28, 47, 12, -56, 103, -18, 121, 68, -78, -112, 14, -70, -39, -48, -42, -43, -122, 12, 114, 91, 32, -66, -14, -15, 63, 48, -59, 29, 82, 18, 21, 99, -125, 59, -111, -77, 7, 102, -41, -75, 60, 92, -91, 66, 81, 41, 97, -23, -41, 24, -118, 112, -99, -69, -25, -66, 90, -27, 20, 36, 74, -51, 95, -99, -18, -35, -11, 53, -58, -4, 124};
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
    msg.setTimeStamp(0.0125963014334);
    msg.setSource(63845U);
    msg.setSourceEntity(50U);
    msg.setDestination(22769U);
    msg.setDestinationEntity(81U);
    msg.frequency = 359577878U;
    msg.min_range = 42819U;
    msg.max_range = 50680U;

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
    msg.setTimeStamp(0.363835668521);
    msg.setSource(41141U);
    msg.setSourceEntity(90U);
    msg.setDestination(25736U);
    msg.setDestinationEntity(208U);
    msg.frequency = 2446092163U;
    msg.min_range = 63502U;
    msg.max_range = 54676U;

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
    msg.setTimeStamp(0.893133324608);
    msg.setSource(15617U);
    msg.setSourceEntity(31U);
    msg.setDestination(20389U);
    msg.setDestinationEntity(118U);
    msg.frequency = 2661685969U;
    msg.min_range = 57011U;
    msg.max_range = 33197U;

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
    msg.setTimeStamp(0.0614395339067);
    msg.setSource(22743U);
    msg.setSourceEntity(45U);
    msg.setDestination(28736U);
    msg.setDestinationEntity(228U);
    msg.type = 7U;
    msg.frequency = 126585199U;
    msg.min_range = 15622U;
    msg.max_range = 21955U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.0362420780722;
    const char tmp_msg_0[] = {-20, 12, 58, 23, 53, -10, -126, -38, 74, -1, 102, 41, -81, -13, -18, -56, -117, -87, 89, 21, -65, -61, -33, -30, 64, -85, 37, -94, 89, 67, 115, -60, -117, -115, 58, -124, -82, -41, -102, 49, -12, -61, 81, -126, -58, 116, 126, -97, 84, -90, -34, -20, -19, -65, -33, -41, 10, 53, -80, -101, -89, -115, -104, -33, -106, 106, 102, 70, -35, -7, -30, -58, -73, -82, 68, -16, 66, 57, 123, 8, 79, -11, 87, 102, -91, 48, -79, -25, -99, 5, -112, 55, -112, 114, 119, 109, 120, -36, 16, 59, 74, 78, 55, 11, -39, 95, -30, -92, -74, 35, -26, 120, 73, 99, -95, -106, -43, 79, 70, -9, -27, 31, 71, -90, 92, -87, -32, 72, -46, -95, -64, 6, -115, 21, -89, -60, -35, 86, -100, 121, -119, 108, -103, 12, 44, -48, -114, 44, 58, -92, -82, 72, -120, -71, -14, -120, 124, -32, 28, -61, -55, 60, -106, -26, 55, 26, -7, 83, 107, 28, 71};
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
    msg.setTimeStamp(0.0331762702262);
    msg.setSource(51014U);
    msg.setSourceEntity(254U);
    msg.setDestination(2951U);
    msg.setDestinationEntity(81U);
    msg.type = 18U;
    msg.frequency = 3604528139U;
    msg.min_range = 64664U;
    msg.max_range = 28054U;
    msg.bits_per_point = 14U;
    msg.scale_factor = 0.311512992316;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.547007672188;
    tmp_msg_0.beam_height = 0.364190567065;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {121, -28, 29, -124, -70, 44, -80, -107, 59, 91, 117, 18, 38, 115, 10, -101, -70, -90, -28, 37, -98, 0, -62, 52, -66, -69, -75, 117, 121, -58, 109, 108, 42, 16, 42, -11, -33, 72, 94, -118, -17, 3, -26, -29, -81, -113, -85, -108, -15, -84, -103, 63, 52, 16, 96, -63, -94, 84, 115, -98, 12, 11, 8, -45, 52, -86, 91, -30, 17, -16, -114, -99, 5, 106, -102, 71, 121, -21, 125, 80, -112, -115, 97, 2, 57, 22, -74, 79, -43, 114, 78, 74, 100, -87, 89, -99, -42, 102, 77, 72, -15, 2, -60, -42, -15, -57, 22, -6, 59, 122, 0, -48, -111, 13, 39, 123, -81, -7, -3, -75, -66, 64, -127, -30, -108, 41, -89, 52, -73, 97, -9, 104, -22, -123, 19, 115, -112, -66, -6, 11, -63, 5, -114, -1, -1, 69, -121, 64, 50, -102, 60, 78, 99, 77, 97, 84, 24, -49, -103, 115, 23, 4, 81, -47, -26, -82, 68, -112, -26, -37, 126, 48, -90, -64, 37, 12, 60, 51, -47, 33, 111, -1, -20, -71, -48, -118, -87, 30, -100, 14, 64, -79, -6, 101, 28, -29, -7, 95, -94, -65, -97, -33, -114, 13, 84, -8, 53, 43, -98, -17, 14, -34, 33, -39, -109, 13, 110, -80, -105, -113, -116, 14, -111, 13, 10, 31, 66, 104, 43, -71, -94, -37, -39, 27, -106, 99, 50};
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
    msg.setTimeStamp(0.524364946431);
    msg.setSource(41291U);
    msg.setSourceEntity(43U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(76U);
    msg.type = 189U;
    msg.frequency = 3355866295U;
    msg.min_range = 42330U;
    msg.max_range = 12786U;
    msg.bits_per_point = 153U;
    msg.scale_factor = 0.308147040772;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.515749440589;
    tmp_msg_0.beam_height = 0.947104584365;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {32, 86, 98, 64, 88, -84, -19, -79, -116, -62, -83, -95, 81, -96, 110, -59, 23, -121, 47, -65, 50, 86, 38, -56, -4, -12, -10, -96, -14, 44, 82, 27, 84, -2, -85, -110, -59, 22, 29, 83, -69, -65, -16, 51, -25, 86, 51, -48, 82, 84, -37, -31, -4, -90, -57, -30, -119, 56, -63, -39, 36, 39, 68, -29, 108, 20, 114, -52, -79, -12, -42, -114, 72, -17, -122, -84, 17, 63, -127, -107, -65, -75, -123, 57, -73, -127, 45, 125, -9, -1, 24, -8, 103, -6, 107, 71, -102, -76, 47, 20, -76, 39, 93, -49, -105, 21, -55, -29, -2, -14, 31, -57, 74, -12, -13, -52, -23, 20, -59};
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
    msg.setTimeStamp(0.202679835554);
    msg.setSource(58842U);
    msg.setSourceEntity(122U);
    msg.setDestination(54570U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.40224131674);
    msg.setSource(15217U);
    msg.setSourceEntity(112U);
    msg.setDestination(61380U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.959430894913);
    msg.setSource(50433U);
    msg.setSourceEntity(84U);
    msg.setDestination(7373U);
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
    msg.setTimeStamp(0.581278031613);
    msg.setSource(33456U);
    msg.setSourceEntity(218U);
    msg.setDestination(27206U);
    msg.setDestinationEntity(72U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.537004577276);
    msg.setSource(43309U);
    msg.setSourceEntity(35U);
    msg.setDestination(49470U);
    msg.setDestinationEntity(129U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.930826115866);
    msg.setSource(45938U);
    msg.setSourceEntity(138U);
    msg.setDestination(55022U);
    msg.setDestinationEntity(101U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.991576737435);
    msg.setSource(52234U);
    msg.setSourceEntity(240U);
    msg.setDestination(25705U);
    msg.setDestinationEntity(67U);
    msg.value = 0.0816604805597;
    msg.confidence = 0.290968873191;
    msg.opmodes.assign("AUQEKFZBOFCHJFNYDOVBTGOFQKDTJVILEIBDWJPSUHCRQVFOMDATLZICYTLL");

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
    msg.setTimeStamp(0.506396852252);
    msg.setSource(62962U);
    msg.setSourceEntity(116U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(69U);
    msg.value = 0.206471381156;
    msg.confidence = 0.0276237188341;
    msg.opmodes.assign("YWWZRJNUISRIL");

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
    msg.setTimeStamp(0.545456527139);
    msg.setSource(19947U);
    msg.setSourceEntity(105U);
    msg.setDestination(9236U);
    msg.setDestinationEntity(201U);
    msg.value = 0.497361081186;
    msg.confidence = 0.0878612563465;
    msg.opmodes.assign("RHBCWVFADUKBAPGHTHFIANDVMYXKUHDIXUXYPEYVIMCBWLTCBNMXGJKCDNJTZAPLUVYNREPSWVCFJUPBGADFJEYDOEMJBFUVKNIXKIPEMDMWSKDCARSZVJUKQNGOUCYTF");

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
    msg.setTimeStamp(0.882051060613);
    msg.setSource(37903U);
    msg.setSourceEntity(85U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(225U);
    msg.itow = 1465975058U;
    msg.lat = 0.994419653727;
    msg.lon = 0.128626128614;
    msg.height_ell = 0.515888314887;
    msg.height_sea = 0.55205488952;
    msg.hacc = 0.659338242524;
    msg.vacc = 0.490667229495;
    msg.vel_n = 0.686488359618;
    msg.vel_e = 0.0921137939625;
    msg.vel_d = 0.322348606088;
    msg.speed = 0.686326018644;
    msg.gspeed = 0.143725121081;
    msg.heading = 0.435714244116;
    msg.sacc = 0.767745644742;
    msg.cacc = 0.845181648616;

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
    msg.setTimeStamp(0.899177678719);
    msg.setSource(56254U);
    msg.setSourceEntity(143U);
    msg.setDestination(50381U);
    msg.setDestinationEntity(155U);
    msg.itow = 674490653U;
    msg.lat = 0.726632146259;
    msg.lon = 0.693950967863;
    msg.height_ell = 0.0752611232595;
    msg.height_sea = 0.447844540227;
    msg.hacc = 0.706136539178;
    msg.vacc = 0.3702860368;
    msg.vel_n = 0.159916645484;
    msg.vel_e = 0.343103542714;
    msg.vel_d = 0.397884204411;
    msg.speed = 0.798565177132;
    msg.gspeed = 0.332460240881;
    msg.heading = 0.302785222438;
    msg.sacc = 0.590866488979;
    msg.cacc = 0.217767947217;

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
    msg.setTimeStamp(0.249193126308);
    msg.setSource(44337U);
    msg.setSourceEntity(154U);
    msg.setDestination(56526U);
    msg.setDestinationEntity(81U);
    msg.itow = 2712996577U;
    msg.lat = 0.122656846874;
    msg.lon = 0.100455452995;
    msg.height_ell = 0.710280274518;
    msg.height_sea = 0.883115294499;
    msg.hacc = 0.167786342363;
    msg.vacc = 0.391427901061;
    msg.vel_n = 0.341936250453;
    msg.vel_e = 0.758542078966;
    msg.vel_d = 0.616230644497;
    msg.speed = 0.168501777618;
    msg.gspeed = 0.812701775663;
    msg.heading = 0.888589049156;
    msg.sacc = 0.700752035634;
    msg.cacc = 0.456465796689;

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
    msg.setTimeStamp(0.633697107845);
    msg.setSource(26547U);
    msg.setSourceEntity(116U);
    msg.setDestination(4651U);
    msg.setDestinationEntity(250U);
    msg.id = 97U;
    msg.value = 0.91673920113;

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
    msg.setTimeStamp(0.546973544493);
    msg.setSource(53062U);
    msg.setSourceEntity(8U);
    msg.setDestination(36487U);
    msg.setDestinationEntity(21U);
    msg.id = 103U;
    msg.value = 0.853500509761;

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
    msg.setTimeStamp(0.83147222552);
    msg.setSource(37263U);
    msg.setSourceEntity(36U);
    msg.setDestination(31485U);
    msg.setDestinationEntity(151U);
    msg.id = 194U;
    msg.value = 0.114411305855;

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
    msg.setTimeStamp(0.31141355301);
    msg.setSource(19338U);
    msg.setSourceEntity(162U);
    msg.setDestination(58232U);
    msg.setDestinationEntity(243U);
    msg.x = 0.568531033253;
    msg.y = 0.269400647696;
    msg.z = 0.532982640567;
    msg.phi = 0.301608846338;
    msg.theta = 0.591199268645;
    msg.psi = 0.757474952019;

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
    msg.setTimeStamp(0.202235215926);
    msg.setSource(63219U);
    msg.setSourceEntity(2U);
    msg.setDestination(59969U);
    msg.setDestinationEntity(63U);
    msg.x = 0.404568549963;
    msg.y = 0.131748449012;
    msg.z = 0.641676192518;
    msg.phi = 0.808958099013;
    msg.theta = 0.9526587097;
    msg.psi = 0.346216229546;

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
    msg.setTimeStamp(0.997593385537);
    msg.setSource(49329U);
    msg.setSourceEntity(113U);
    msg.setDestination(4419U);
    msg.setDestinationEntity(25U);
    msg.x = 0.398183626484;
    msg.y = 0.325291287018;
    msg.z = 0.822931462685;
    msg.phi = 0.182277669252;
    msg.theta = 0.840583294979;
    msg.psi = 0.566559412986;

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
    msg.setTimeStamp(0.425659534207);
    msg.setSource(27707U);
    msg.setSourceEntity(166U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(224U);
    msg.beam_width = 0.762182663308;
    msg.beam_height = 0.471521595832;

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
    msg.setTimeStamp(0.571286238181);
    msg.setSource(12251U);
    msg.setSourceEntity(226U);
    msg.setDestination(8587U);
    msg.setDestinationEntity(92U);
    msg.beam_width = 0.956441156005;
    msg.beam_height = 0.909583155875;

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
    msg.setTimeStamp(0.66827549679);
    msg.setSource(10373U);
    msg.setSourceEntity(112U);
    msg.setDestination(33027U);
    msg.setDestinationEntity(178U);
    msg.beam_width = 0.13537988492;
    msg.beam_height = 0.206339201765;

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
    msg.setTimeStamp(0.719895293924);
    msg.setSource(57448U);
    msg.setSourceEntity(214U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(93U);
    msg.id = 154U;
    msg.zoom = 227U;
    msg.action = 217U;

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
    msg.setTimeStamp(0.93673079355);
    msg.setSource(43532U);
    msg.setSourceEntity(154U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(237U);
    msg.id = 83U;
    msg.zoom = 116U;
    msg.action = 44U;

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
    msg.setTimeStamp(0.353825169753);
    msg.setSource(34155U);
    msg.setSourceEntity(84U);
    msg.setDestination(37614U);
    msg.setDestinationEntity(20U);
    msg.id = 1U;
    msg.zoom = 199U;
    msg.action = 77U;

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
    msg.setTimeStamp(0.347249780102);
    msg.setSource(48883U);
    msg.setSourceEntity(193U);
    msg.setDestination(22352U);
    msg.setDestinationEntity(109U);
    msg.id = 2U;
    msg.value = 0.838028422508;

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
    msg.setTimeStamp(0.754239494414);
    msg.setSource(45922U);
    msg.setSourceEntity(234U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(238U);
    msg.id = 93U;
    msg.value = 0.581292945434;

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
    msg.setTimeStamp(0.387453013236);
    msg.setSource(58850U);
    msg.setSourceEntity(156U);
    msg.setDestination(1874U);
    msg.setDestinationEntity(234U);
    msg.id = 249U;
    msg.value = 0.896585832896;

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
    msg.setTimeStamp(0.205870742234);
    msg.setSource(6094U);
    msg.setSourceEntity(182U);
    msg.setDestination(51593U);
    msg.setDestinationEntity(55U);
    msg.id = 169U;
    msg.value = 0.684488270504;

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
    msg.setTimeStamp(0.91285459586);
    msg.setSource(31473U);
    msg.setSourceEntity(86U);
    msg.setDestination(36132U);
    msg.setDestinationEntity(98U);
    msg.id = 37U;
    msg.value = 0.0872286920478;

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
    msg.setTimeStamp(0.385085633639);
    msg.setSource(41858U);
    msg.setSourceEntity(139U);
    msg.setDestination(18284U);
    msg.setDestinationEntity(123U);
    msg.id = 22U;
    msg.value = 0.805376008977;

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
    msg.setTimeStamp(0.586573526347);
    msg.setSource(44812U);
    msg.setSourceEntity(134U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(164U);
    msg.id = 104U;
    msg.angle = 0.0812028791164;

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
    msg.setTimeStamp(0.98593926792);
    msg.setSource(7076U);
    msg.setSourceEntity(204U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(227U);
    msg.id = 240U;
    msg.angle = 0.190285594259;

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
    msg.setTimeStamp(0.806969755054);
    msg.setSource(57897U);
    msg.setSourceEntity(219U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(103U);
    msg.id = 105U;
    msg.angle = 0.766292714554;

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
    msg.setTimeStamp(0.83612841551);
    msg.setSource(26052U);
    msg.setSourceEntity(229U);
    msg.setDestination(11309U);
    msg.setDestinationEntity(157U);
    msg.op = 155U;
    msg.actions.assign("ZVPKEHZNRQQUOVRHOBYBRLTMAHFFPHTOG");

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
    msg.setTimeStamp(0.577778117423);
    msg.setSource(35757U);
    msg.setSourceEntity(112U);
    msg.setDestination(64151U);
    msg.setDestinationEntity(25U);
    msg.op = 56U;
    msg.actions.assign("AOQNEOTWATQPJUSPWZCYGFKOSJYMSBDKHTWKXINBCCQDNXBPLWMFQNJFZYLJTZYWANWOLLUXIRTZXKANUCARSSGYEDXQFHTGMKEUUZEXVSRMOWYXGKWFZTEIHOWPRBEPRZAGBGEKXCA");

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
    msg.setTimeStamp(0.813678695246);
    msg.setSource(44019U);
    msg.setSourceEntity(182U);
    msg.setDestination(41604U);
    msg.setDestinationEntity(202U);
    msg.op = 249U;
    msg.actions.assign("HAYMVRPQDKMGSVFJFYNUYIWXLUYHAIVWSNKLNQSJKGAJTEIVVBEWWWDOEEXILZFRKGLWZTAMH");

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
    msg.setTimeStamp(0.410963116004);
    msg.setSource(37461U);
    msg.setSourceEntity(20U);
    msg.setDestination(39341U);
    msg.setDestinationEntity(187U);
    msg.actions.assign("KUIGDUMEFSWI");

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
    msg.setTimeStamp(0.194966402448);
    msg.setSource(24265U);
    msg.setSourceEntity(89U);
    msg.setDestination(49582U);
    msg.setDestinationEntity(233U);
    msg.actions.assign("MLNDBJEGASHRNMMAQSZIDSWCUHIOQIJIVROZRUXOVTAWCPZWUXVSPZGSUKFAWRYGDBYFCCWZHMCTFEHUNEKKRZFBGAJZLSEQCCHMDRWJJHMPNLYWDKCXYRQPNYYIMUIKHLZYEGSYNLJBSBDVVGVQOLIQSXVKPUTXJNOUQFULPGXPWPCLIYLCQMTQ");

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
    msg.setTimeStamp(0.184375493355);
    msg.setSource(15202U);
    msg.setSourceEntity(213U);
    msg.setDestination(34489U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("AHYKGRAMZFFAKLCNCWCPLGQZVBSAEFVRJFBOIRLKTSIZQCDQMLOHBVWTZVPKTE");

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
    msg.setTimeStamp(0.430926814998);
    msg.setSource(23988U);
    msg.setSourceEntity(32U);
    msg.setDestination(9932U);
    msg.setDestinationEntity(128U);
    msg.button = 224U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.87430179405);
    msg.setSource(40518U);
    msg.setSourceEntity(140U);
    msg.setDestination(45530U);
    msg.setDestinationEntity(57U);
    msg.button = 184U;
    msg.value = 244U;

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
    msg.setTimeStamp(0.86173569898);
    msg.setSource(43785U);
    msg.setSourceEntity(72U);
    msg.setDestination(17615U);
    msg.setDestinationEntity(178U);
    msg.button = 215U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.389221552696);
    msg.setSource(63310U);
    msg.setSourceEntity(194U);
    msg.setDestination(28810U);
    msg.setDestinationEntity(117U);
    msg.op = 157U;
    msg.text.assign("ZBWEVQBYRVPDIHYLMXZFHTMWLT");

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
    msg.setTimeStamp(0.929335023291);
    msg.setSource(25481U);
    msg.setSourceEntity(110U);
    msg.setDestination(60737U);
    msg.setDestinationEntity(230U);
    msg.op = 1U;
    msg.text.assign("LBGVOVPQMEBANRVUMJHPOJXZOLWLHCABRTMKUILERTSDSDJOTNYALOQWCPQCNMCZZDJPPZHOVHNMQFCAIXQCRJHDYFQDHKUMYOUFSIFYKQKHMMREETNPZRNDYWCBDGGEBEJLDEPTLIIKGJWXKV");

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
    msg.setTimeStamp(0.967563095669);
    msg.setSource(50134U);
    msg.setSourceEntity(9U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(84U);
    msg.op = 103U;
    msg.text.assign("ZNOAWMVDUXOMDAHXMOWEYLECLIQUGVPCAPYIELJMBKMHTYAUINIKNXDCGQJFDFVQCTMSDIQLYMQNLOREZHKAXTDQHSXKXLJXPBOSRYRGVVVNQRKWVJHSZYHC");

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
    msg.setTimeStamp(0.68637825814);
    msg.setSource(60128U);
    msg.setSourceEntity(138U);
    msg.setDestination(39512U);
    msg.setDestinationEntity(122U);
    msg.op = 80U;
    msg.time_remain = 0.594276986936;
    msg.sched_time = 0.652861086399;

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
    msg.setTimeStamp(0.131457107522);
    msg.setSource(6885U);
    msg.setSourceEntity(226U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(174U);
    msg.op = 59U;
    msg.time_remain = 0.950360746616;
    msg.sched_time = 0.749525931464;

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
    msg.setTimeStamp(0.539300864714);
    msg.setSource(29850U);
    msg.setSourceEntity(123U);
    msg.setDestination(21115U);
    msg.setDestinationEntity(39U);
    msg.op = 96U;
    msg.time_remain = 0.268394617897;
    msg.sched_time = 0.306509804659;

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
    msg.setTimeStamp(0.624876324819);
    msg.setSource(45967U);
    msg.setSourceEntity(20U);
    msg.setDestination(54274U);
    msg.setDestinationEntity(253U);
    msg.name.assign("XHSPEKTOTQIQURRCKMSOPEZFBEGWHOAHSIPTBNJNWEMEIZYOCBWIASTVVMYIFUVXNNLLNDGWMVBVASRLLNTGODACWLXWLYSMW");
    msg.op = 192U;
    msg.sched_time = 0.426085569678;

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
    msg.setTimeStamp(0.0225492110706);
    msg.setSource(16608U);
    msg.setSourceEntity(125U);
    msg.setDestination(297U);
    msg.setDestinationEntity(35U);
    msg.name.assign("FMJLYWNEYOLBFTXBTZIOQGBIDKIZLDOCNPTKMZARUWZFAEZQLXWS");
    msg.op = 107U;
    msg.sched_time = 0.0783233769768;

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
    msg.setTimeStamp(0.100363349887);
    msg.setSource(24859U);
    msg.setSourceEntity(4U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(154U);
    msg.name.assign("CZCOWMWSELGVCZDJZGJZIXJRJYLAWGBDWFQZJLTKTHDQULTHCOZYUFICZNXUVAPRKBBQRNEPXNNSAHYYKIKWDJSGRYADLRPAMHTAITJONAEXQSTXSDETNEYPBVJMJPKRIGLOFMPIWXXDKRYXSEWIIQTDUYGKBSPHNRVPKKO");
    msg.op = 119U;
    msg.sched_time = 0.274450040785;

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
    msg.setTimeStamp(0.833398043254);
    msg.setSource(38504U);
    msg.setSourceEntity(35U);
    msg.setDestination(65019U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.65094657783);
    msg.setSource(52813U);
    msg.setSourceEntity(126U);
    msg.setDestination(50899U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.451239708839);
    msg.setSource(24396U);
    msg.setSourceEntity(92U);
    msg.setDestination(42402U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.567744711489);
    msg.setSource(22262U);
    msg.setSourceEntity(96U);
    msg.setDestination(18098U);
    msg.setDestinationEntity(157U);
    msg.name.assign("GJROWPFIPVYLEIJNDYEMZFLLROSNBFXDXAVAHSGSCMHDVDZATFUZJXBKQGHQGQDHMZCJINRCELXAJWEWOKCUWVAXMNCBNIMKOUAEBRLVGKUILYXTLMYUFVBFCSPGJJHAAIUEPYLBGOCYERVTZIYQPBJAKKWTHNYTDPLTSBFMQYQDRVHSODGHEMSCAWPROPMOHMNVHIYEFUGURVIJGR");
    msg.state = 163U;

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
    msg.setTimeStamp(0.99540484137);
    msg.setSource(7139U);
    msg.setSourceEntity(218U);
    msg.setDestination(456U);
    msg.setDestinationEntity(240U);
    msg.name.assign("FSOHCFVQELEUMJOGUHUSZUBEPANPYJTBQWWSWQVIIKXVDDFKAPTNQBGPOILXDTMFVRVIHDMZOVDZMGCJYNOUJWHKDJORJSBXFRKRHQMCXYKSFBRLOZLMUJKD");
    msg.state = 223U;

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
    msg.setTimeStamp(0.883672140503);
    msg.setSource(24195U);
    msg.setSourceEntity(253U);
    msg.setDestination(59566U);
    msg.setDestinationEntity(222U);
    msg.name.assign("KNJOVGWJIATFKPQCSPJPRDWHZCFRPYCVUIOZJXSHRSZSKNLDLVEFWXUSBXEMGMYZIALRTMNYOZDPKIHTDDNGLYTZXFBBBUWQQULCYSXVEMJLYPVOGBHVWUFUEQWRWRPQGGKBKHGCFBXMQEUSFCGOLQWJSUDPAFJAHTSPTXQVPNISMKITZRZKUNHCQNAWCMZDAYBLXEXNNJEAINXIJBEHTTDYGMORIALYDVJHEECQOZMKADIBVORF");
    msg.state = 241U;

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
    msg.setTimeStamp(0.888734708227);
    msg.setSource(19565U);
    msg.setSourceEntity(210U);
    msg.setDestination(27264U);
    msg.setDestinationEntity(10U);
    msg.name.assign("SFRZFOLNIDJNHLVRMPFMYUQHGIBBLNPHWHRCWRLQYUGXTZITECXSEAXWAKBOSOCEDIFCMLLBAFGOTYUP");
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
    msg.setTimeStamp(0.51389658981);
    msg.setSource(9098U);
    msg.setSourceEntity(219U);
    msg.setDestination(906U);
    msg.setDestinationEntity(41U);
    msg.name.assign("AAUZUZSWKOPWRJZCTCKGNEBRCBPGGLIOFPKZYPQMYFJSIWJLONLAXWWMCU");
    msg.value = 172U;

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
    msg.setTimeStamp(0.98887786056);
    msg.setSource(7105U);
    msg.setSourceEntity(115U);
    msg.setDestination(23971U);
    msg.setDestinationEntity(63U);
    msg.name.assign("CNBYTBVMEQKOEWEAZIROXREHGVEUDXWNEGDZBZYBCYBVXUFVIIPHNMMNGPRIFAUMQMZYJUAXELFRNCLJLQDWIYALRVQSLPQNUEJMZTWTIDOOBWVVPIFBLKSFHTCTENKIVYKPQGLANFO");
    msg.value = 214U;

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
    msg.setTimeStamp(0.964445154349);
    msg.setSource(13274U);
    msg.setSourceEntity(231U);
    msg.setDestination(21415U);
    msg.setDestinationEntity(63U);
    msg.name.assign("OFKNRWMFNEKVXBDJMKTRWMENPLBGHHXAIFMRIZMCKHRBTUPJAAXNDSUODOLTWQFYOHJACKBZJJSUTKZUPNHAPUBZJBZOJMUVERDZYUGELASFPTAWXCZCNYIYDGVSHIKVVICLEUKNGSNVYWPHZDEIPQLKQXSVQXPQIWLWQILKRMFHYGEBQHHSWFVLEURQXJXGCGQYFSONBOTAXLPRMGTYWNWJXMTJOZEDDB");

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
    msg.setTimeStamp(0.757388838922);
    msg.setSource(34898U);
    msg.setSourceEntity(131U);
    msg.setDestination(10867U);
    msg.setDestinationEntity(226U);
    msg.name.assign("VKNILHTODRXLZGLMMOWBAACPDFNIEVUBHSFWJYBHKRIKCDOUVYRXMVNATOKEBPXHQJGXUGMEXBYBZMXBUDFIWLUOWDSEPJPYUJVEFRLFIFWQVJCPZZICWEXZQMNMNWDZOIZVHZUEPTQJSBDVGAKRSTPAUYSRMWHYATCCCRQJSONCTXYRGTGGHBLGEYEJFAKHQVFSBDLVSDJL");

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
    msg.setTimeStamp(0.247818759331);
    msg.setSource(50043U);
    msg.setSourceEntity(138U);
    msg.setDestination(24293U);
    msg.setDestinationEntity(229U);
    msg.name.assign("LIGMOVEHIBRDFYIOZKNUULATGGZMWNRQUEWNTJJVHVVBEEZZ");

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
    msg.setTimeStamp(0.0991341897695);
    msg.setSource(10884U);
    msg.setSourceEntity(139U);
    msg.setDestination(24411U);
    msg.setDestinationEntity(57U);
    msg.name.assign("IXYCYWCECIAXK");
    msg.value = 196U;

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
    msg.setTimeStamp(0.545494791716);
    msg.setSource(23036U);
    msg.setSourceEntity(49U);
    msg.setDestination(64179U);
    msg.setDestinationEntity(176U);
    msg.name.assign("JXMZJNVYOTAETKIFPAGJSQMMMYHTFVDQPNZBLCIDBMKERHMXLBWRFKOUOBLNBNZGZUPTPZBMFFNYMWLHVUXTBTPHDBWOSKIHPVGXYOCLHCKAFGRQQBUXSNQSQXTTIGXUJHIJQRLEYRFCHLKGZUUFENJCDYOAKDCIWRLAPJDOWVEZCSIEACXQEOVBDWIDGJWNULHJEYUFAGPURAZKY");
    msg.value = 20U;

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
    msg.setTimeStamp(0.94750136135);
    msg.setSource(14142U);
    msg.setSourceEntity(11U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(49U);
    msg.name.assign("DOAWCGWWJHQJLRSNENLQHFUAAQFONPZBCELHNLZAGCUYDIXLTOVGAIDQUUNBKQOFMXEZPIUEYTKXSZSHDWGNZGELYEHZVKYWRKFPWLWLYNVCJGBYWGSNIXHAJTRMJCXOFKPMKGHOTAVEXJCPABOHPJQDIMYTSVMIQZIVVRRNBKCOKYSDXQBTHSLUCCTREBDUELJFZYIZADGAXKTBMUIVPRCP");
    msg.value = 173U;

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
    msg.setTimeStamp(0.175958560215);
    msg.setSource(61445U);
    msg.setSourceEntity(127U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.993466454985;
    msg.lon = 0.876976799524;
    msg.height = 0.066175691403;
    msg.x = 0.95578022945;
    msg.y = 0.681345304061;
    msg.z = 0.856482232747;
    msg.phi = 0.277738284872;
    msg.theta = 0.287396657449;
    msg.psi = 0.554991393762;
    msg.u = 0.332561606393;
    msg.v = 0.722793158347;
    msg.w = 0.360104688528;
    msg.vx = 0.383554215653;
    msg.vy = 0.717377333622;
    msg.vz = 0.0946524622261;
    msg.p = 0.943492150172;
    msg.q = 0.975974602797;
    msg.r = 0.888010503786;
    msg.depth = 0.667672626512;
    msg.alt = 0.288585511466;

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
    msg.setTimeStamp(0.359564900921);
    msg.setSource(20702U);
    msg.setSourceEntity(41U);
    msg.setDestination(46745U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.284969318388;
    msg.lon = 0.0344076350381;
    msg.height = 0.850367065028;
    msg.x = 0.950564768567;
    msg.y = 0.58879447347;
    msg.z = 0.181622126478;
    msg.phi = 0.313519365953;
    msg.theta = 0.748263270106;
    msg.psi = 0.465687708008;
    msg.u = 0.462001347362;
    msg.v = 0.462847459837;
    msg.w = 0.505722950881;
    msg.vx = 0.407051876419;
    msg.vy = 0.227943720158;
    msg.vz = 0.732575259112;
    msg.p = 0.99532082238;
    msg.q = 0.792999182924;
    msg.r = 0.539932855667;
    msg.depth = 0.577633810071;
    msg.alt = 0.180035424072;

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
    msg.setTimeStamp(0.433528915428);
    msg.setSource(26985U);
    msg.setSourceEntity(188U);
    msg.setDestination(23423U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.960980307032;
    msg.lon = 0.804008158739;
    msg.height = 0.920754645212;
    msg.x = 0.733561599996;
    msg.y = 0.350316584168;
    msg.z = 0.0973871491239;
    msg.phi = 0.126488207011;
    msg.theta = 0.200173817623;
    msg.psi = 0.353997764124;
    msg.u = 0.564144619982;
    msg.v = 0.174648687401;
    msg.w = 0.319120804665;
    msg.vx = 0.519895798815;
    msg.vy = 0.830105532099;
    msg.vz = 0.124763240244;
    msg.p = 0.0322483179003;
    msg.q = 0.322936822066;
    msg.r = 0.0876146275211;
    msg.depth = 0.985742081118;
    msg.alt = 0.563229235774;

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
    msg.setTimeStamp(0.345655344992);
    msg.setSource(60905U);
    msg.setSourceEntity(223U);
    msg.setDestination(30863U);
    msg.setDestinationEntity(4U);
    msg.x = 0.373338585371;
    msg.y = 0.768449424666;
    msg.z = 0.0389929408176;

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
    msg.setTimeStamp(0.815644881056);
    msg.setSource(55461U);
    msg.setSourceEntity(236U);
    msg.setDestination(29782U);
    msg.setDestinationEntity(93U);
    msg.x = 0.924042513879;
    msg.y = 0.682666607355;
    msg.z = 0.375580292323;

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
    msg.setTimeStamp(0.560171452598);
    msg.setSource(1779U);
    msg.setSourceEntity(106U);
    msg.setDestination(56151U);
    msg.setDestinationEntity(229U);
    msg.x = 0.84735032591;
    msg.y = 0.510079257419;
    msg.z = 0.361771332935;

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
    msg.setTimeStamp(0.215545938684);
    msg.setSource(33894U);
    msg.setSourceEntity(120U);
    msg.setDestination(33594U);
    msg.setDestinationEntity(75U);
    msg.value = 0.450211287185;

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
    msg.setTimeStamp(0.251922512372);
    msg.setSource(33654U);
    msg.setSourceEntity(95U);
    msg.setDestination(17689U);
    msg.setDestinationEntity(78U);
    msg.value = 0.582585177211;

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
    msg.setTimeStamp(0.642687503981);
    msg.setSource(54700U);
    msg.setSourceEntity(179U);
    msg.setDestination(31739U);
    msg.setDestinationEntity(130U);
    msg.value = 0.852650967322;

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
    msg.setTimeStamp(0.244364181963);
    msg.setSource(8076U);
    msg.setSourceEntity(39U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(33U);
    msg.value = 0.244207742509;

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
    msg.setTimeStamp(0.382758640599);
    msg.setSource(38638U);
    msg.setSourceEntity(91U);
    msg.setDestination(26610U);
    msg.setDestinationEntity(83U);
    msg.value = 0.450629471325;

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
    msg.setTimeStamp(0.240704958572);
    msg.setSource(31926U);
    msg.setSourceEntity(19U);
    msg.setDestination(18384U);
    msg.setDestinationEntity(121U);
    msg.value = 0.403357232636;

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
    msg.setTimeStamp(0.0151591398541);
    msg.setSource(45667U);
    msg.setSourceEntity(38U);
    msg.setDestination(5048U);
    msg.setDestinationEntity(203U);
    msg.x = 0.672910899672;
    msg.y = 0.942428689812;
    msg.z = 0.991802529847;
    msg.phi = 0.48250342078;
    msg.theta = 0.182070445404;
    msg.psi = 0.787781429871;
    msg.p = 0.931776810841;
    msg.q = 0.00667177037633;
    msg.r = 0.661776341842;
    msg.u = 0.256371018743;
    msg.v = 0.11479085845;
    msg.w = 0.413971412521;
    msg.bias_psi = 0.281228374345;
    msg.bias_r = 0.521781031175;

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
    msg.setTimeStamp(0.859143038712);
    msg.setSource(62435U);
    msg.setSourceEntity(39U);
    msg.setDestination(9642U);
    msg.setDestinationEntity(103U);
    msg.x = 0.0161443876582;
    msg.y = 0.411736402223;
    msg.z = 0.0304329606433;
    msg.phi = 0.144355181655;
    msg.theta = 0.492901172928;
    msg.psi = 0.493700938733;
    msg.p = 0.18746805563;
    msg.q = 0.215093486645;
    msg.r = 0.230227729845;
    msg.u = 0.467442415689;
    msg.v = 0.21647025869;
    msg.w = 0.783873701513;
    msg.bias_psi = 0.754872107276;
    msg.bias_r = 0.651002973294;

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
    msg.setTimeStamp(0.659378378353);
    msg.setSource(5436U);
    msg.setSourceEntity(242U);
    msg.setDestination(29958U);
    msg.setDestinationEntity(168U);
    msg.x = 0.93619776419;
    msg.y = 0.719477942088;
    msg.z = 0.0461406253542;
    msg.phi = 0.131682731015;
    msg.theta = 0.943260425829;
    msg.psi = 0.14472889427;
    msg.p = 0.627062669197;
    msg.q = 0.489264381015;
    msg.r = 0.858844457152;
    msg.u = 0.249494851661;
    msg.v = 0.175543424641;
    msg.w = 0.378130280125;
    msg.bias_psi = 0.513150557626;
    msg.bias_r = 0.823562954116;

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
    msg.setTimeStamp(0.598382579567);
    msg.setSource(6242U);
    msg.setSourceEntity(34U);
    msg.setDestination(30406U);
    msg.setDestinationEntity(89U);
    msg.bias_psi = 0.597413267576;
    msg.bias_r = 0.31422238098;
    msg.cog = 0.997340529354;
    msg.cyaw = 0.733622525651;
    msg.lbl_rej_level = 0.722334246305;
    msg.gps_rej_level = 0.244407354682;
    msg.custom_x = 0.146442304278;
    msg.custom_y = 0.93343826707;
    msg.custom_z = 0.634475512291;

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
    msg.setTimeStamp(0.584089749781);
    msg.setSource(32978U);
    msg.setSourceEntity(169U);
    msg.setDestination(28359U);
    msg.setDestinationEntity(112U);
    msg.bias_psi = 0.808708945359;
    msg.bias_r = 0.340583060773;
    msg.cog = 0.911594027614;
    msg.cyaw = 0.3706787915;
    msg.lbl_rej_level = 0.0547118443091;
    msg.gps_rej_level = 0.114360564591;
    msg.custom_x = 0.518190418812;
    msg.custom_y = 0.594786546031;
    msg.custom_z = 0.936192691023;

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
    msg.setTimeStamp(0.618797860004);
    msg.setSource(23619U);
    msg.setSourceEntity(33U);
    msg.setDestination(34129U);
    msg.setDestinationEntity(137U);
    msg.bias_psi = 0.813493208773;
    msg.bias_r = 0.473163169627;
    msg.cog = 0.180167373951;
    msg.cyaw = 0.652583474964;
    msg.lbl_rej_level = 0.717537763738;
    msg.gps_rej_level = 0.42485590528;
    msg.custom_x = 0.336888565578;
    msg.custom_y = 0.00988463339515;
    msg.custom_z = 0.16865915573;

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
    msg.setTimeStamp(0.180697713226);
    msg.setSource(57686U);
    msg.setSourceEntity(4U);
    msg.setDestination(24110U);
    msg.setDestinationEntity(222U);
    msg.utc_time = 0.788325354762;
    msg.reason = 23U;

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
    msg.setTimeStamp(0.275571568703);
    msg.setSource(35851U);
    msg.setSourceEntity(141U);
    msg.setDestination(39151U);
    msg.setDestinationEntity(161U);
    msg.utc_time = 0.434084612969;
    msg.reason = 201U;

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
    msg.setTimeStamp(0.877013724485);
    msg.setSource(8456U);
    msg.setSourceEntity(31U);
    msg.setDestination(50042U);
    msg.setDestinationEntity(184U);
    msg.utc_time = 0.758874999015;
    msg.reason = 197U;

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
    msg.setTimeStamp(0.691174761297);
    msg.setSource(39809U);
    msg.setSourceEntity(246U);
    msg.setDestination(21388U);
    msg.setDestinationEntity(108U);
    msg.id = 223U;
    msg.range = 0.302275441177;
    msg.acceptance = 117U;

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
    msg.setTimeStamp(0.369827553169);
    msg.setSource(44550U);
    msg.setSourceEntity(9U);
    msg.setDestination(42260U);
    msg.setDestinationEntity(244U);
    msg.id = 45U;
    msg.range = 0.243875888722;
    msg.acceptance = 112U;

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
    msg.setTimeStamp(0.637026410709);
    msg.setSource(62625U);
    msg.setSourceEntity(77U);
    msg.setDestination(3505U);
    msg.setDestinationEntity(140U);
    msg.id = 75U;
    msg.range = 0.544067748092;
    msg.acceptance = 76U;

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
    msg.setTimeStamp(0.69352043843);
    msg.setSource(35405U);
    msg.setSourceEntity(148U);
    msg.setDestination(34283U);
    msg.setDestinationEntity(198U);
    msg.type = 237U;
    msg.reason = 116U;
    msg.value = 0.518059352541;
    msg.timestep = 0.95103717219;

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
    msg.setTimeStamp(0.00210458254141);
    msg.setSource(1660U);
    msg.setSourceEntity(132U);
    msg.setDestination(26933U);
    msg.setDestinationEntity(105U);
    msg.type = 251U;
    msg.reason = 31U;
    msg.value = 0.631464716787;
    msg.timestep = 0.918619011411;

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
    msg.setTimeStamp(0.421582115743);
    msg.setSource(5795U);
    msg.setSourceEntity(28U);
    msg.setDestination(35338U);
    msg.setDestinationEntity(221U);
    msg.type = 205U;
    msg.reason = 169U;
    msg.value = 0.0334885035933;
    msg.timestep = 0.5485497186;

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
    msg.setTimeStamp(0.349454275586);
    msg.setSource(1162U);
    msg.setSourceEntity(163U);
    msg.setDestination(51987U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.155785661532);
    msg.setSource(51557U);
    msg.setSourceEntity(224U);
    msg.setDestination(26480U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.473930470894);
    msg.setSource(7285U);
    msg.setSourceEntity(56U);
    msg.setDestination(46989U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.34768733965);
    msg.setSource(52864U);
    msg.setSourceEntity(83U);
    msg.setDestination(50947U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("HGAARCMWITBFUIIHDJMDSKJBZKQOOKXECEUFLXMFDIJYTHNSWQSKIVFHZFDZLCWXOFLDJBYYWPTUKOESZUPCBNMQYZPQVJRUQYWENEKXRNHEARQAUJKPRNDXQGADSVBMNERSKYZTQOJRITLGVSYUGPCJJWSGNVPAOTHBTLEMLKIMTS");
    msg.x = 0.0818814161406;
    msg.y = 0.499642532986;
    msg.depth = 0.553828126193;
    msg.var_x = 0.87961245763;
    msg.var_y = 0.960027327824;

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
    msg.setTimeStamp(0.798428189752);
    msg.setSource(16845U);
    msg.setSourceEntity(206U);
    msg.setDestination(24659U);
    msg.setDestinationEntity(177U);
    msg.beacon.assign("PZTSHDGPWPIEZEILSCMPMJPGVHNZKJEAOAJGUMWAFFFKMVHXRAZTMMXLUVKQCOLVWHGFWVZRHYYLOYBUJDBQUURBSCQPISUCSXGQBHREYZKCKA");
    msg.x = 0.818494232983;
    msg.y = 0.505819967027;
    msg.depth = 0.427810045021;
    msg.var_x = 0.634721306807;
    msg.var_y = 0.219817271162;

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
    msg.setTimeStamp(0.912533643881);
    msg.setSource(35520U);
    msg.setSourceEntity(217U);
    msg.setDestination(6341U);
    msg.setDestinationEntity(38U);
    msg.beacon.assign("EVPNRBLPADEFIJMAZISGUWCNYDXAUHYVPLFYYBKLPHEQYMVNANTUQDGRCYSGXIKMDONBJRIIBC");
    msg.x = 0.824609273121;
    msg.y = 0.714129186228;
    msg.depth = 0.155530545349;
    msg.var_x = 0.603539834856;
    msg.var_y = 0.72776466399;

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
    msg.setTimeStamp(0.0170294260545);
    msg.setSource(6379U);
    msg.setSourceEntity(120U);
    msg.setDestination(4650U);
    msg.setDestinationEntity(140U);
    msg.value = 0.867673288308;

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
    msg.setTimeStamp(0.947833898195);
    msg.setSource(9973U);
    msg.setSourceEntity(55U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(197U);
    msg.value = 0.825124797683;

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
    msg.setTimeStamp(0.322476939894);
    msg.setSource(38573U);
    msg.setSourceEntity(163U);
    msg.setDestination(20816U);
    msg.setDestinationEntity(197U);
    msg.value = 0.523682643397;

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
    msg.setTimeStamp(0.365166724678);
    msg.setSource(37420U);
    msg.setSourceEntity(51U);
    msg.setDestination(28044U);
    msg.setDestinationEntity(97U);
    msg.value = 0.717029063291;
    msg.z_units = 25U;

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
    msg.setTimeStamp(0.0411832497121);
    msg.setSource(32383U);
    msg.setSourceEntity(99U);
    msg.setDestination(56088U);
    msg.setDestinationEntity(141U);
    msg.value = 0.198414080676;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.349963211643);
    msg.setSource(2091U);
    msg.setSourceEntity(12U);
    msg.setDestination(44833U);
    msg.setDestinationEntity(20U);
    msg.value = 0.700861074188;
    msg.z_units = 186U;

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
    msg.setTimeStamp(0.211532093229);
    msg.setSource(40670U);
    msg.setSourceEntity(138U);
    msg.setDestination(50908U);
    msg.setDestinationEntity(182U);
    msg.value = 0.492008477373;
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
    msg.setTimeStamp(0.355478520787);
    msg.setSource(58819U);
    msg.setSourceEntity(137U);
    msg.setDestination(27095U);
    msg.setDestinationEntity(79U);
    msg.value = 0.378843024858;
    msg.speed_units = 13U;

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
    msg.setTimeStamp(0.609911273209);
    msg.setSource(21056U);
    msg.setSourceEntity(160U);
    msg.setDestination(15287U);
    msg.setDestinationEntity(4U);
    msg.value = 0.376739044314;
    msg.speed_units = 144U;

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
    msg.setTimeStamp(0.410929522635);
    msg.setSource(13211U);
    msg.setSourceEntity(233U);
    msg.setDestination(15164U);
    msg.setDestinationEntity(53U);
    msg.value = 0.988226168501;

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
    msg.setTimeStamp(0.811909269644);
    msg.setSource(9551U);
    msg.setSourceEntity(244U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(239U);
    msg.value = 0.183811417822;

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
    msg.setTimeStamp(0.399083950954);
    msg.setSource(34284U);
    msg.setSourceEntity(239U);
    msg.setDestination(57192U);
    msg.setDestinationEntity(88U);
    msg.value = 0.292788851051;

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
    msg.setTimeStamp(0.542537059644);
    msg.setSource(25686U);
    msg.setSourceEntity(102U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(60U);
    msg.value = 0.407439411378;

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
    msg.setTimeStamp(0.513252112311);
    msg.setSource(28764U);
    msg.setSourceEntity(147U);
    msg.setDestination(57258U);
    msg.setDestinationEntity(232U);
    msg.value = 0.291971993559;

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
    msg.setTimeStamp(0.967818171278);
    msg.setSource(51853U);
    msg.setSourceEntity(126U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0171856849393;

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
    msg.setTimeStamp(0.930579142865);
    msg.setSource(51001U);
    msg.setSourceEntity(216U);
    msg.setDestination(34472U);
    msg.setDestinationEntity(122U);
    msg.value = 0.55902796486;

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
    msg.setTimeStamp(0.208538584011);
    msg.setSource(21488U);
    msg.setSourceEntity(92U);
    msg.setDestination(41653U);
    msg.setDestinationEntity(27U);
    msg.value = 0.209666055257;

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
    msg.setTimeStamp(0.496907413868);
    msg.setSource(52021U);
    msg.setSourceEntity(39U);
    msg.setDestination(51053U);
    msg.setDestinationEntity(213U);
    msg.value = 0.957213583088;

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
    msg.setTimeStamp(0.915704982205);
    msg.setSource(27840U);
    msg.setSourceEntity(132U);
    msg.setDestination(41499U);
    msg.setDestinationEntity(154U);
    msg.start_lat = 0.913362685828;
    msg.start_lon = 0.709478569526;
    msg.start_z = 0.263633921293;
    msg.start_z_units = 226U;
    msg.end_lat = 0.526043462316;
    msg.end_lon = 0.883850850922;
    msg.end_z = 0.421973423837;
    msg.end_z_units = 130U;
    msg.speed = 0.99069408752;
    msg.speed_units = 174U;
    msg.lradius = 0.900449466723;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.140830053663);
    msg.setSource(54688U);
    msg.setSourceEntity(72U);
    msg.setDestination(23690U);
    msg.setDestinationEntity(181U);
    msg.start_lat = 0.342145453862;
    msg.start_lon = 0.778306705616;
    msg.start_z = 0.486752636344;
    msg.start_z_units = 111U;
    msg.end_lat = 0.935820481498;
    msg.end_lon = 0.734231579539;
    msg.end_z = 0.773965224312;
    msg.end_z_units = 116U;
    msg.speed = 0.215440603751;
    msg.speed_units = 115U;
    msg.lradius = 0.0970002075985;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.891016554752);
    msg.setSource(3380U);
    msg.setSourceEntity(57U);
    msg.setDestination(11276U);
    msg.setDestinationEntity(193U);
    msg.start_lat = 0.543715969037;
    msg.start_lon = 0.72499623212;
    msg.start_z = 0.151478252899;
    msg.start_z_units = 248U;
    msg.end_lat = 0.126081867573;
    msg.end_lon = 0.162850851623;
    msg.end_z = 0.51381928188;
    msg.end_z_units = 8U;
    msg.speed = 0.170842501375;
    msg.speed_units = 6U;
    msg.lradius = 0.524403582242;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.461803830394);
    msg.setSource(35915U);
    msg.setSourceEntity(14U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(73U);
    msg.x = 0.58344978847;
    msg.y = 0.000762703899962;
    msg.z = 0.615533018957;
    msg.k = 0.865328935707;
    msg.m = 0.661821545255;
    msg.n = 0.435106640971;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.693810814015);
    msg.setSource(47496U);
    msg.setSourceEntity(175U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(100U);
    msg.x = 0.871720843327;
    msg.y = 0.77003836366;
    msg.z = 0.759780423493;
    msg.k = 0.736622912621;
    msg.m = 0.72885682169;
    msg.n = 0.280643483327;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.604544258659);
    msg.setSource(28327U);
    msg.setSourceEntity(109U);
    msg.setDestination(51455U);
    msg.setDestinationEntity(54U);
    msg.x = 0.272192666988;
    msg.y = 0.472536956123;
    msg.z = 0.366479762382;
    msg.k = 0.634140827509;
    msg.m = 0.407312142761;
    msg.n = 0.842877513375;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.977502355623);
    msg.setSource(60696U);
    msg.setSourceEntity(212U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(16U);
    msg.value = 0.809937838615;

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
    msg.setTimeStamp(0.6704716473);
    msg.setSource(14782U);
    msg.setSourceEntity(239U);
    msg.setDestination(6911U);
    msg.setDestinationEntity(97U);
    msg.value = 0.0467614205943;

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
    msg.setTimeStamp(0.700820870568);
    msg.setSource(35243U);
    msg.setSourceEntity(114U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(103U);
    msg.value = 0.343013629445;

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
    msg.setTimeStamp(0.525901518892);
    msg.setSource(20437U);
    msg.setSourceEntity(72U);
    msg.setDestination(19509U);
    msg.setDestinationEntity(107U);
    msg.u = 0.0354674072126;
    msg.v = 0.589356381352;
    msg.w = 0.588322547526;
    msg.p = 0.235620709003;
    msg.q = 0.0498953859251;
    msg.r = 0.30561125752;
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
    msg.setTimeStamp(0.52713814184);
    msg.setSource(51958U);
    msg.setSourceEntity(165U);
    msg.setDestination(2562U);
    msg.setDestinationEntity(143U);
    msg.u = 0.900866545718;
    msg.v = 0.802594171294;
    msg.w = 0.856284474473;
    msg.p = 0.694364727125;
    msg.q = 0.753327399277;
    msg.r = 0.548907429838;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.677879859942);
    msg.setSource(39147U);
    msg.setSourceEntity(185U);
    msg.setDestination(12240U);
    msg.setDestinationEntity(21U);
    msg.u = 0.699428626693;
    msg.v = 0.311636462401;
    msg.w = 0.268264053427;
    msg.p = 0.330068413983;
    msg.q = 0.843502787574;
    msg.r = 0.160876952094;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.905522386286);
    msg.setSource(35075U);
    msg.setSourceEntity(27U);
    msg.setDestination(33166U);
    msg.setDestinationEntity(66U);
    msg.start_lat = 0.742170184541;
    msg.start_lon = 0.21400248911;
    msg.start_z = 0.926066101007;
    msg.start_z_units = 144U;
    msg.end_lat = 0.160789511504;
    msg.end_lon = 0.282612688555;
    msg.end_z = 0.0204600372117;
    msg.end_z_units = 33U;
    msg.lradius = 0.764118686565;
    msg.flags = 69U;
    msg.x = 0.384098757226;
    msg.y = 0.899903322302;
    msg.z = 0.739580832279;
    msg.vx = 0.882235752405;
    msg.vy = 0.58679648187;
    msg.vz = 0.580519687436;
    msg.course_error = 0.29863529316;
    msg.eta = 27058U;

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
    msg.setTimeStamp(0.243649156057);
    msg.setSource(64154U);
    msg.setSourceEntity(152U);
    msg.setDestination(52181U);
    msg.setDestinationEntity(153U);
    msg.start_lat = 0.69388044813;
    msg.start_lon = 0.362946147243;
    msg.start_z = 0.291267467621;
    msg.start_z_units = 117U;
    msg.end_lat = 0.419509482571;
    msg.end_lon = 0.0493152379791;
    msg.end_z = 0.870286449844;
    msg.end_z_units = 1U;
    msg.lradius = 0.466399691683;
    msg.flags = 159U;
    msg.x = 0.565839253561;
    msg.y = 0.908652711587;
    msg.z = 0.897627458606;
    msg.vx = 0.708057554415;
    msg.vy = 0.914707471983;
    msg.vz = 0.9714177517;
    msg.course_error = 0.312558988904;
    msg.eta = 27325U;

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
    msg.setTimeStamp(0.779076389886);
    msg.setSource(31879U);
    msg.setSourceEntity(16U);
    msg.setDestination(30468U);
    msg.setDestinationEntity(79U);
    msg.start_lat = 0.0351788256396;
    msg.start_lon = 0.359517525621;
    msg.start_z = 0.204905196035;
    msg.start_z_units = 35U;
    msg.end_lat = 0.524810183607;
    msg.end_lon = 0.304691514537;
    msg.end_z = 0.478406077365;
    msg.end_z_units = 199U;
    msg.lradius = 0.663271650452;
    msg.flags = 89U;
    msg.x = 0.730361212617;
    msg.y = 0.00370794984404;
    msg.z = 0.889596922828;
    msg.vx = 0.988845114615;
    msg.vy = 0.370173496475;
    msg.vz = 0.652141486739;
    msg.course_error = 0.199197056103;
    msg.eta = 9086U;

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
    msg.setTimeStamp(0.447855781959);
    msg.setSource(40177U);
    msg.setSourceEntity(201U);
    msg.setDestination(14885U);
    msg.setDestinationEntity(17U);
    msg.k = 0.392598527401;
    msg.m = 0.564421529173;
    msg.n = 0.0660969183695;

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
    msg.setTimeStamp(0.353007298028);
    msg.setSource(13020U);
    msg.setSourceEntity(12U);
    msg.setDestination(19604U);
    msg.setDestinationEntity(1U);
    msg.k = 0.270068939379;
    msg.m = 0.037163483159;
    msg.n = 0.349284050972;

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
    msg.setTimeStamp(0.178938079566);
    msg.setSource(40335U);
    msg.setSourceEntity(116U);
    msg.setDestination(9645U);
    msg.setDestinationEntity(23U);
    msg.k = 0.176535613271;
    msg.m = 0.964924454637;
    msg.n = 0.877074467073;

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
    msg.setTimeStamp(0.119249485994);
    msg.setSource(17467U);
    msg.setSourceEntity(142U);
    msg.setDestination(51608U);
    msg.setDestinationEntity(168U);
    msg.p = 0.633406653895;
    msg.i = 0.0112737686273;
    msg.d = 0.930638136567;
    msg.a = 0.878655748178;

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
    msg.setTimeStamp(0.0721193484866);
    msg.setSource(26951U);
    msg.setSourceEntity(148U);
    msg.setDestination(51459U);
    msg.setDestinationEntity(26U);
    msg.p = 0.89158363888;
    msg.i = 0.064793481083;
    msg.d = 0.401530469736;
    msg.a = 0.4607916425;

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
    msg.setTimeStamp(0.869666352306);
    msg.setSource(21018U);
    msg.setSourceEntity(29U);
    msg.setDestination(18866U);
    msg.setDestinationEntity(23U);
    msg.p = 0.867596522905;
    msg.i = 0.0213386945435;
    msg.d = 0.0473411476762;
    msg.a = 0.608395808075;

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
    msg.setTimeStamp(0.818570586755);
    msg.setSource(29603U);
    msg.setSourceEntity(7U);
    msg.setDestination(47146U);
    msg.setDestinationEntity(156U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.675793542536);
    msg.setSource(5681U);
    msg.setSourceEntity(2U);
    msg.setDestination(5041U);
    msg.setDestinationEntity(61U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.880857553377);
    msg.setSource(25820U);
    msg.setSourceEntity(201U);
    msg.setDestination(635U);
    msg.setDestinationEntity(179U);
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
    IMC::Goto msg;
    msg.setTimeStamp(0.619159715472);
    msg.setSource(18032U);
    msg.setSourceEntity(59U);
    msg.setDestination(17493U);
    msg.setDestinationEntity(37U);
    msg.timeout = 60208U;
    msg.lat = 0.0353328882735;
    msg.lon = 0.723174137549;
    msg.z = 0.141229891337;
    msg.z_units = 247U;
    msg.speed = 0.785557689488;
    msg.speed_units = 105U;
    msg.roll = 0.628660152543;
    msg.pitch = 0.124404154479;
    msg.yaw = 0.0874049936164;
    msg.custom.assign("WHOLHSVJLRTIWIKFFLVFNLBKPXVDZESMODH");

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
    msg.setTimeStamp(0.529942262235);
    msg.setSource(23768U);
    msg.setSourceEntity(119U);
    msg.setDestination(28425U);
    msg.setDestinationEntity(51U);
    msg.timeout = 14948U;
    msg.lat = 0.935349351077;
    msg.lon = 0.877072992846;
    msg.z = 0.343453181824;
    msg.z_units = 119U;
    msg.speed = 0.193864947189;
    msg.speed_units = 34U;
    msg.roll = 0.287242550527;
    msg.pitch = 0.904795804163;
    msg.yaw = 0.708841093972;
    msg.custom.assign("VNBBJJMMBUFQFAYLMLDIDNLRJUZMWXOVZUGNWVJAAFUSTKOQAENPIKFKEHCREYEUSTPRMTHBUSDDKWXCCYBVIPXUENWRGQPQMXJVFIIMQGOWSBGGNXNO");

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
    msg.setTimeStamp(0.778980493426);
    msg.setSource(9419U);
    msg.setSourceEntity(111U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(217U);
    msg.timeout = 25205U;
    msg.lat = 0.0989205040124;
    msg.lon = 0.72745577854;
    msg.z = 0.0901215175724;
    msg.z_units = 57U;
    msg.speed = 0.870817576312;
    msg.speed_units = 60U;
    msg.roll = 0.126262259665;
    msg.pitch = 0.971673459192;
    msg.yaw = 0.694890105099;
    msg.custom.assign("ACUOKIZFMRZPUPJGCQTTFXRNBNXPIFNIBXPQMNSJCWBQJWFLQOOWHXEHOAPTKQHSEAXYJSFOVCIYNOXVNUNYEMIPEKLFRVLNJYRNSAUSXUDFAKYZSUQWGHGGCPFKVBRAWGLVUOFKUHCEDFRIDLPVDNQRDTHHGQIBIIXHWEDZHMLWLJUVKTJAGEYDYYKVZ");

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
    msg.setTimeStamp(0.408383655669);
    msg.setSource(41143U);
    msg.setSourceEntity(5U);
    msg.setDestination(46714U);
    msg.setDestinationEntity(38U);
    msg.timeout = 53489U;
    msg.lat = 0.809047420151;
    msg.lon = 0.950194218208;
    msg.z = 0.664199711321;
    msg.z_units = 49U;
    msg.speed = 0.389368017944;
    msg.speed_units = 149U;
    msg.duration = 530U;
    msg.radius = 0.0584380431856;
    msg.flags = 223U;
    msg.custom.assign("LZYWKBSULXCNMQETMVJWQVVCRMOXTPGOFMMASXOWIPNGBZYDABYCFZRYJCEIDEUMUVFIAKRATUWCGJS");

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
    msg.setTimeStamp(0.599651701375);
    msg.setSource(35203U);
    msg.setSourceEntity(138U);
    msg.setDestination(40303U);
    msg.setDestinationEntity(138U);
    msg.timeout = 5175U;
    msg.lat = 0.795220259456;
    msg.lon = 0.129613507277;
    msg.z = 0.818211702696;
    msg.z_units = 122U;
    msg.speed = 0.533759970937;
    msg.speed_units = 174U;
    msg.duration = 62521U;
    msg.radius = 0.132291485505;
    msg.flags = 129U;
    msg.custom.assign("BOOYTTZAMVOQULVYNNKWRQTLOINTPGVVHQFZGDRCJQXUTIKYAYSPVWTAGKERLHRELKWFOEOWSTXUISCXQZKQZPSDHRHMYMNRVFJLAPUBCBZYJBHXPQJRXMFBMIDCNFEIJVPSKLDOAPLAJTZKALXDIWZQYVGLHYBAYSFBAQSJXNGUEDOIGXAURUQFSUKBMXCNECGKLCWWRWEDPJYGVIEDEVGNHMIBMWZJCGDTJZMTI");

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
    msg.setTimeStamp(0.610114592235);
    msg.setSource(46168U);
    msg.setSourceEntity(43U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(148U);
    msg.timeout = 54240U;
    msg.lat = 0.13669473777;
    msg.lon = 0.735431367851;
    msg.z = 0.140665719892;
    msg.z_units = 238U;
    msg.speed = 0.495900491014;
    msg.speed_units = 173U;
    msg.duration = 17316U;
    msg.radius = 0.46100348499;
    msg.flags = 235U;
    msg.custom.assign("JTMVVZIUKCOMGUGWHVBEJYYFKYRVXDHEYALNVKSBPBASKAPJQNQWCKQPRDEHCAGSCGWMILEEJSCIEFSTJBXOZVWMWPFNADMSYL");

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
    msg.setTimeStamp(0.139611871924);
    msg.setSource(42821U);
    msg.setSourceEntity(226U);
    msg.setDestination(48468U);
    msg.setDestinationEntity(109U);
    msg.custom.assign("QQAHXAEDFZKTSJIZXNRNIBDFVLIUSBONPFICEJHEJZRVULWCCOJD");

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
    msg.setTimeStamp(0.121950720527);
    msg.setSource(19356U);
    msg.setSourceEntity(238U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(178U);
    msg.custom.assign("XLGZBXRJNEYLJSWZMRVZFBHKCEVWJGRBXVGKKAOZPMISTBHCUHKUNKWCYEETDYJIFUXN");

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
    msg.setTimeStamp(0.250132547631);
    msg.setSource(18501U);
    msg.setSourceEntity(27U);
    msg.setDestination(24494U);
    msg.setDestinationEntity(157U);
    msg.custom.assign("PSJARBAHAZCWZKDHLZQOGQBWUJMXOLXLBLGYVFPTFYSTBHCXORUCYGOFMIEDCICENBWOLQRTOYXVJHXYPVDRVQAYHVAISQNAJWWKMMIOCXYEJUPZTGCSIBAJFZGXWRWRNKQRLO");

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
    msg.setTimeStamp(0.395134415899);
    msg.setSource(21639U);
    msg.setSourceEntity(132U);
    msg.setDestination(43994U);
    msg.setDestinationEntity(16U);
    msg.timeout = 23101U;
    msg.lat = 0.366569533909;
    msg.lon = 0.86706482896;
    msg.z = 0.678595936014;
    msg.z_units = 202U;
    msg.duration = 37847U;
    msg.speed = 0.376919314578;
    msg.speed_units = 40U;
    msg.type = 233U;
    msg.radius = 0.331505255368;
    msg.length = 0.951598611051;
    msg.bearing = 0.780452569884;
    msg.direction = 121U;
    msg.custom.assign("XFMVUTMDLYEZZIDAIAXDRLFKYQVGPRSGLBUTANADMWELTDYRADOJMMRNGSSJOPQVPKSJSZIEYKVDCRMRGRFTBCYYTCHYLSQCYABEFGIEKDDFKVRINHIVAHGWUVLFSLW");

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
    msg.setTimeStamp(0.0210788670425);
    msg.setSource(18433U);
    msg.setSourceEntity(223U);
    msg.setDestination(31378U);
    msg.setDestinationEntity(60U);
    msg.timeout = 37995U;
    msg.lat = 0.874183932086;
    msg.lon = 0.609185800352;
    msg.z = 0.854600961614;
    msg.z_units = 179U;
    msg.duration = 62588U;
    msg.speed = 0.0732309083566;
    msg.speed_units = 75U;
    msg.type = 181U;
    msg.radius = 0.695028452093;
    msg.length = 0.303947620603;
    msg.bearing = 0.556271616192;
    msg.direction = 224U;
    msg.custom.assign("WRGSJUVMPEOSNELIYNQBPYCACOLOBXZBJHKNWNKNASIKAKWGLOGDAHYPVTOKLPMAKPHNPIJBSQCXXUZWWIRDNZHGFVPGRUYTUTFRBTJAZMGVDKHTDBEAMWZHKTZIRDOLIRMRIYXNTFHSOHXFCUZUNFHQEEYJLFFMAMSSWGEIUIOBPVXQUQXLQFALISDKZJEFUEGJQYDVBOD");

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
    msg.setTimeStamp(0.787585172533);
    msg.setSource(20922U);
    msg.setSourceEntity(184U);
    msg.setDestination(46273U);
    msg.setDestinationEntity(13U);
    msg.timeout = 16599U;
    msg.lat = 0.982442880822;
    msg.lon = 0.393970274192;
    msg.z = 0.0888077251905;
    msg.z_units = 67U;
    msg.duration = 8537U;
    msg.speed = 0.473021051623;
    msg.speed_units = 174U;
    msg.type = 159U;
    msg.radius = 0.0809757329076;
    msg.length = 0.925589804348;
    msg.bearing = 0.641903301723;
    msg.direction = 224U;
    msg.custom.assign("XTUASRQOZWZPXNYRBBAIYAWABWCTRHETLINLWXGMZKFJUILUYRDSQBWMKUNXZFHCDUAFGVGJQDZYTFLRPXPBYCHSDWQHONOHGSQSWIKTXYNZMBLODJPLELWF");

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
    msg.setTimeStamp(0.396219072883);
    msg.setSource(53187U);
    msg.setSourceEntity(206U);
    msg.setDestination(22950U);
    msg.setDestinationEntity(84U);
    msg.duration = 8945U;
    msg.custom.assign("PNHMAUDBVQEJGFILZNCDHVAYESACIBNVPJGWUECWOXYBWOKUULGMSIQARAOAFWHFDYDMCBGMVDBJVFOZJBXKNSDIMOKXCKFBELGQIWQQTOZLSM");

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
    msg.setTimeStamp(0.349396070338);
    msg.setSource(49598U);
    msg.setSourceEntity(250U);
    msg.setDestination(30526U);
    msg.setDestinationEntity(84U);
    msg.duration = 13293U;
    msg.custom.assign("GZQSFBPYNEBIZWVMRFJHWDXQYZBIGIIFXIHKMFBXVNPFRIVVOUOXYXTLMOPWJFVDFQABXLOYCALUQSJNHNMWYXVUWSZKWSEKJKSBCSIUFOAD");

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
    msg.setTimeStamp(0.0724986799417);
    msg.setSource(48157U);
    msg.setSourceEntity(202U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(131U);
    msg.duration = 50715U;
    msg.custom.assign("UKFARYTXUZSJVX");

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
    msg.setTimeStamp(0.300095631168);
    msg.setSource(57641U);
    msg.setSourceEntity(164U);
    msg.setDestination(22747U);
    msg.setDestinationEntity(253U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.159900048255;
    msg.control.set(tmp_msg_0);
    msg.duration = 49002U;
    msg.custom.assign("VMPKLORPSWFHZGUKDNBRZKQJNHDXCJVXLYDVGTSCAXOKGWTMIHAGNZQTYUJPVCMDCQJAAHTMTLINHEFDTWFALGCYQUYHYXQVSBDOKWUMRFYFOHYWRVHZKALLADPDSTSFVJHXWYVGPKPSOOBHJALQPNGJBECDGRFDRBWUNXQUXBNXQEIUXWCMZIE");

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
    msg.setTimeStamp(0.333258598953);
    msg.setSource(33089U);
    msg.setSourceEntity(178U);
    msg.setDestination(64892U);
    msg.setDestinationEntity(161U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0467578695594;
    msg.control.set(tmp_msg_0);
    msg.duration = 25412U;
    msg.custom.assign("DONFJHVBGYVXUJDKIELYDRHOKSTWTRZBXXYCGFTATKLUYIGCWAJXUEPHGJJHJTMVGFRNKIGYUIVPITWTDKLZTRHBLZSEFQTSGZYMWPG");

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
    msg.setTimeStamp(0.415613691672);
    msg.setSource(28880U);
    msg.setSourceEntity(226U);
    msg.setDestination(50313U);
    msg.setDestinationEntity(121U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.247540513935;
    msg.control.set(tmp_msg_0);
    msg.duration = 52322U;
    msg.custom.assign("UCXMSUNSVAMBQTVYYHSLFVOVBWCXPIMNPXTKUJESCEQQPTBUJMGDTWWCPGWWVXGAPHVFIGDXDJAZYIXBHIRTPRNBZZOFJRYTGSEOLONQAGCWHMGPCAPRKJLLTQMFEASNVYXXDOLMQNUBTGDIBMEOOHZLIEFZSQSRKXBEHKYLDQCTPRUKURUWYRCFQHBGOAFJWZNAEEEFLAHUXJSVHNRFIDDRCBZOLFGKNOLZMJUIPWKYJHNVDSIIMAKCZ");

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
    msg.setTimeStamp(0.356802537861);
    msg.setSource(12544U);
    msg.setSourceEntity(12U);
    msg.setDestination(12420U);
    msg.setDestinationEntity(181U);
    msg.timeout = 31773U;
    msg.lat = 0.320769797834;
    msg.lon = 0.0972704864529;
    msg.z = 0.991067628642;
    msg.z_units = 10U;
    msg.speed = 0.958835064345;
    msg.speed_units = 183U;
    msg.bearing = 0.0709379915174;
    msg.cross_angle = 0.323159104776;
    msg.width = 0.837208533953;
    msg.length = 0.0696262103126;
    msg.hstep = 0.36368263927;
    msg.coff = 35U;
    msg.alternation = 74U;
    msg.flags = 46U;
    msg.custom.assign("VTVATSZNBLYRXIVAVZWWGKVXMUOQSTSGMLSKHHDARAEADTMZHFMIEMBXYPNBOMQZICOKVKXJKSHWSZNLJTYLYXIWFDBKHTEJEUYGQNBGSPYGTRRFMNXOAWICZGBUQXNQWBQ");

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
    msg.setTimeStamp(0.629560655996);
    msg.setSource(13528U);
    msg.setSourceEntity(143U);
    msg.setDestination(35955U);
    msg.setDestinationEntity(203U);
    msg.timeout = 42758U;
    msg.lat = 0.573423220524;
    msg.lon = 0.372314516861;
    msg.z = 0.646100218355;
    msg.z_units = 104U;
    msg.speed = 0.447897203621;
    msg.speed_units = 176U;
    msg.bearing = 0.758235715791;
    msg.cross_angle = 0.0923786957205;
    msg.width = 0.676843667031;
    msg.length = 0.808637376636;
    msg.hstep = 0.850502598359;
    msg.coff = 138U;
    msg.alternation = 233U;
    msg.flags = 63U;
    msg.custom.assign("FRSIJGHYRNETETZBDPXVOVLHDDVWVPCLSEKIAAOOBTBTSMXULYUGHGTQMWXEZE");

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
    msg.setTimeStamp(0.729026979904);
    msg.setSource(26207U);
    msg.setSourceEntity(60U);
    msg.setDestination(6991U);
    msg.setDestinationEntity(41U);
    msg.timeout = 53508U;
    msg.lat = 0.371790463852;
    msg.lon = 0.629501419846;
    msg.z = 0.409749074217;
    msg.z_units = 157U;
    msg.speed = 0.104392883142;
    msg.speed_units = 198U;
    msg.bearing = 0.678353016548;
    msg.cross_angle = 0.737448278157;
    msg.width = 0.187406081761;
    msg.length = 0.349640699975;
    msg.hstep = 0.644934834654;
    msg.coff = 10U;
    msg.alternation = 188U;
    msg.flags = 210U;
    msg.custom.assign("TCAMATDQSNEROLKBEOYLCOTFRWBYVAXKJXQJGHZIGIKWDXMPWTVECQZPXHOJHHVWBNZBTMNSOFBJIWJPUFJACICYERPCUJSRYCLYI");

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
    msg.setTimeStamp(0.666200405443);
    msg.setSource(49380U);
    msg.setSourceEntity(81U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(11U);
    msg.timeout = 41248U;
    msg.lat = 0.233009299998;
    msg.lon = 0.799553139681;
    msg.z = 0.743431994285;
    msg.z_units = 121U;
    msg.speed = 0.841239989641;
    msg.speed_units = 92U;
    msg.custom.assign("NIITBBAFPJADTLSCUHFASPNDKZWTETXWGVLJFUAFYFEUZSFECDWYVDIQOKDKFYELAHYUXIGVENOUOPJOQFSDATPZXITVWXQINREFSKCMTRTSYEBQCRMONPCINLDEGQGLBNBQJCYKMRTZHHKUPP");

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
    msg.setTimeStamp(0.778689529816);
    msg.setSource(6212U);
    msg.setSourceEntity(197U);
    msg.setDestination(3152U);
    msg.setDestinationEntity(117U);
    msg.timeout = 39674U;
    msg.lat = 0.236609671798;
    msg.lon = 0.746180165531;
    msg.z = 0.653035107831;
    msg.z_units = 177U;
    msg.speed = 0.906437166523;
    msg.speed_units = 212U;
    msg.custom.assign("DNFGFJECKNHLBKNSLKOETJMAJDWSQIDZVFBFKBISVMINOIBOGIIOIJRNMNHDFDKOPODZCRGWWRJVXFABHMWACTLJZXICYYXWSZBZOPPPFAAYQFMQX");

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
    msg.setTimeStamp(0.844245705072);
    msg.setSource(31482U);
    msg.setSourceEntity(187U);
    msg.setDestination(23993U);
    msg.setDestinationEntity(155U);
    msg.timeout = 17590U;
    msg.lat = 0.73224628449;
    msg.lon = 0.748974791378;
    msg.z = 0.682091131024;
    msg.z_units = 36U;
    msg.speed = 0.738610974304;
    msg.speed_units = 177U;
    msg.custom.assign("HDAOWQFVTAIYCMUVDPRLMOBRJEZEWGVGIEKGEAPHCJIUYTJNSYMQOTJQUOPZPAQNKVDEABFLAWNYGTWUCAZOMIXYRRCXKNYDGOKOCQWNMFCFHSTPASHQKZXWIGLAGHXIQBBDILLSFGJJNZKES");

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
    msg.setTimeStamp(0.777495180875);
    msg.setSource(14673U);
    msg.setSourceEntity(232U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(215U);
    msg.x = 0.815497445002;
    msg.y = 0.806212091986;
    msg.z = 0.949908486332;

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
    msg.setTimeStamp(0.522561826006);
    msg.setSource(24371U);
    msg.setSourceEntity(43U);
    msg.setDestination(36922U);
    msg.setDestinationEntity(230U);
    msg.x = 0.721211994564;
    msg.y = 0.77677307364;
    msg.z = 0.715964985166;

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
    msg.setTimeStamp(0.71602727653);
    msg.setSource(58334U);
    msg.setSourceEntity(103U);
    msg.setDestination(25576U);
    msg.setDestinationEntity(3U);
    msg.x = 0.695443994654;
    msg.y = 0.966982481006;
    msg.z = 0.175991275373;

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
    msg.setTimeStamp(0.272694315323);
    msg.setSource(25421U);
    msg.setSourceEntity(156U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(37U);
    msg.timeout = 44591U;
    msg.lat = 0.121976236199;
    msg.lon = 0.4226798856;
    msg.z = 0.0329750996471;
    msg.z_units = 52U;
    msg.amplitude = 0.845135877967;
    msg.pitch = 0.471697312754;
    msg.speed = 0.230751241825;
    msg.speed_units = 197U;
    msg.custom.assign("SKFPPJEDEVDXHAENSJDYIYNAXTFRAJANAFESBALOBYRXHHIGMWGCJXKUKTNXXSAQYNTZZHEBITVMPPVZEGUROCAUWJYRWBQRLMWIKBVUQCDQWGFEITVJLDUCQBQBLZLLIMGSMSSKRMCYRRADFTGGRVEPCCVOZKZZKOKOGLNOLCWMHGZFOPFVOHULZLMOYXSYKHENGMCWCWDXVQZBPVNJUPUTPYDWBFHAWQXSDDMX");

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
    msg.setTimeStamp(0.576117969334);
    msg.setSource(63345U);
    msg.setSourceEntity(240U);
    msg.setDestination(26906U);
    msg.setDestinationEntity(141U);
    msg.timeout = 65382U;
    msg.lat = 0.142746279158;
    msg.lon = 0.81091032421;
    msg.z = 0.251951269427;
    msg.z_units = 198U;
    msg.amplitude = 0.847165270718;
    msg.pitch = 0.831941093262;
    msg.speed = 0.631541214931;
    msg.speed_units = 119U;
    msg.custom.assign("QGEBZXJKSBUKBSVFMGEEZIUCFLLPZINZQSODMSGWGM");

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
    msg.setTimeStamp(0.438081471589);
    msg.setSource(35159U);
    msg.setSourceEntity(117U);
    msg.setDestination(1437U);
    msg.setDestinationEntity(82U);
    msg.timeout = 31886U;
    msg.lat = 0.418812894751;
    msg.lon = 0.650379922784;
    msg.z = 0.975856416212;
    msg.z_units = 46U;
    msg.amplitude = 0.0525537281619;
    msg.pitch = 0.0513666030307;
    msg.speed = 0.798907164206;
    msg.speed_units = 34U;
    msg.custom.assign("KNNZKAVFBYXJISOGEQMAEVNQLJZVSCCEAXPZOTEFLMVGZUOXMPYLYCSKCHSPWDAAOIWUSLVEMWYULQUKBWLBKRGCAVBRJUUFGZXQTYNKYNFXHNRDOKBISXXBBQMLYUMPCVGJFSUWFVIZDNDDOWWWMEOTTKSVQLTPZTPYCSNGBYRHIHDHIDIMXEFDFJHPCRJNWQOTTUDXQBSICJ");

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
    msg.setTimeStamp(0.484542858615);
    msg.setSource(20466U);
    msg.setSourceEntity(242U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.800014866867);
    msg.setSource(51256U);
    msg.setSourceEntity(1U);
    msg.setDestination(34620U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.740984265593);
    msg.setSource(17053U);
    msg.setSourceEntity(61U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.769409873119);
    msg.setSource(32465U);
    msg.setSourceEntity(99U);
    msg.setDestination(35579U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.200146061487;
    msg.lon = 0.328254016617;
    msg.z = 0.547019656982;
    msg.z_units = 122U;
    msg.radius = 0.417276765376;
    msg.duration = 48898U;
    msg.speed = 0.477086908337;
    msg.speed_units = 117U;
    msg.custom.assign("UGJKOAIQMTOBLVYDCIYSRGKOTQDEZQCDXOIFIKADBGPRWWLVSJGWPVBXGZPVHABIYFRPGHEWYYRJVQLCZSMACFPVRNEODGRWEIMYQFQBXHJTDYUIEPOQAJPXFZLOTSIMNRSQSUUAUTEEWV");

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
    msg.setTimeStamp(0.879841859904);
    msg.setSource(6143U);
    msg.setSourceEntity(137U);
    msg.setDestination(39840U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.402608791146;
    msg.lon = 0.747708020764;
    msg.z = 0.981427406457;
    msg.z_units = 90U;
    msg.radius = 0.63654099695;
    msg.duration = 51753U;
    msg.speed = 0.838006566877;
    msg.speed_units = 100U;
    msg.custom.assign("HBHMUGZUGFDQWEIOLYFAKGYTKXARCLJADRZYFGEPGOROEFTVQBRHIQLILBPZNNZEMUPYETMNAQVFKXTGLQPYAGKNNRXOJGIMTZXSDICCUEAFIAYDHETHVSHVLLVKSESWGPUWJKKSFDDOHVZUOJHDSAZMNCLRVSNMYMRQOICDLTQPWWYVRNOPRBSWPYJXIZXFBLJMGFHBCXDZITHCOBQVTTWDCNKBUEQXUXJSPYNEJXKJWWJACV");

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
    msg.setTimeStamp(0.299237492977);
    msg.setSource(37300U);
    msg.setSourceEntity(204U);
    msg.setDestination(48275U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.0714165953836;
    msg.lon = 0.61538994115;
    msg.z = 0.682563208483;
    msg.z_units = 37U;
    msg.radius = 0.79813446265;
    msg.duration = 56667U;
    msg.speed = 0.634127799647;
    msg.speed_units = 109U;
    msg.custom.assign("SHWKQHQSBRFYDJQLUGSNUTAXAPUDOOZIRJCAKCVIQSKWRJKVQGAGBEDORX");

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
    msg.setTimeStamp(0.917222906024);
    msg.setSource(3614U);
    msg.setSourceEntity(70U);
    msg.setDestination(36491U);
    msg.setDestinationEntity(242U);
    msg.timeout = 41711U;
    msg.flags = 1U;
    msg.lat = 0.895736288062;
    msg.lon = 0.663383548268;
    msg.start_z = 0.449739966492;
    msg.start_z_units = 139U;
    msg.end_z = 0.758163993738;
    msg.end_z_units = 147U;
    msg.radius = 0.686180898205;
    msg.speed = 0.726302101654;
    msg.speed_units = 96U;
    msg.custom.assign("OBCTLZVERYWSQYZUQKUEVXOJYRXYARHCXLAKYSTMZEIK");

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
    msg.setTimeStamp(0.249893446576);
    msg.setSource(5494U);
    msg.setSourceEntity(170U);
    msg.setDestination(20751U);
    msg.setDestinationEntity(123U);
    msg.timeout = 21444U;
    msg.flags = 242U;
    msg.lat = 0.816521950245;
    msg.lon = 0.390377216797;
    msg.start_z = 0.445319776131;
    msg.start_z_units = 40U;
    msg.end_z = 0.685066611862;
    msg.end_z_units = 120U;
    msg.radius = 0.597471561827;
    msg.speed = 0.827031550998;
    msg.speed_units = 150U;
    msg.custom.assign("GNPHKISVKFXCJYCNQJOPAMHPLCFOYUHYAXDHXKRWIGHKTKXNTXBSFSHLFLFKMIWHVUDDAIOHBEYABVSABPVQJJGDYYOWNIGMMDZMRSCUZTYKWJBAWTSNLTVEBWRNAWECWRKNBUTLPAPVJMJOEOCUMYUBNEGARCFDZDVKGEBFSSUGBZVOPDIXQNZRQSFSIQTQMMWGFCLOZRRTRTDHZLYKXLAJGGMHQXXIUPJIPJ");

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
    msg.setTimeStamp(0.759218012311);
    msg.setSource(30866U);
    msg.setSourceEntity(180U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(183U);
    msg.timeout = 14560U;
    msg.flags = 87U;
    msg.lat = 0.752203620229;
    msg.lon = 0.335554134952;
    msg.start_z = 0.14514021618;
    msg.start_z_units = 147U;
    msg.end_z = 0.88842112492;
    msg.end_z_units = 98U;
    msg.radius = 0.171774225315;
    msg.speed = 0.308672768161;
    msg.speed_units = 112U;
    msg.custom.assign("FSJDVSCQEFWMXLWHRYYWTYZMUIAWDVSMDDXLQJZNSQULUHDBJIJOBWFNYNOMNERTUPFBSAEAVPMOSTEVQRJUHGNQSBGMENNRICGTIKEBACZSJEDGIVVBOLRCCQYPXFRAPYZFLDQCFIMTEYONPKWLJGPMRCROGHGVAGLDIFMIKOUQKZBNXLFUXXHYVZ");

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
    msg.setTimeStamp(0.164716981703);
    msg.setSource(60610U);
    msg.setSourceEntity(84U);
    msg.setDestination(64402U);
    msg.setDestinationEntity(219U);
    msg.timeout = 19015U;
    msg.lat = 0.834757424271;
    msg.lon = 0.076497452081;
    msg.z = 0.611898484665;
    msg.z_units = 145U;
    msg.speed = 0.298265624517;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.829634450235;
    tmp_msg_0.y = 0.599915039771;
    tmp_msg_0.z = 0.833308163863;
    tmp_msg_0.t = 0.659146147153;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EZDHXOKFZOIHDUYGTZPSNAYCNCOJGXHFOMQETJLMGYCUTULPGILHNICHKLBKWYLORHCIDTGFLKODWRMPAZZMHWRDKLXRAQSXONKJGJSCFFMHCOKGVUAXSELEJCVQBVEJYIUPSFYKLSPPMKCQVRPITNZWFZQSMOPTDBBKXFAVWPTRYUNDUVBUQTPFMJGMZVNDXEHLIEWATXBBJOYXYSUSVZAATQEIWFV");

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
    msg.setTimeStamp(0.996896730964);
    msg.setSource(19654U);
    msg.setSourceEntity(91U);
    msg.setDestination(59256U);
    msg.setDestinationEntity(196U);
    msg.timeout = 62815U;
    msg.lat = 0.768565296641;
    msg.lon = 0.901518860092;
    msg.z = 0.926268171655;
    msg.z_units = 17U;
    msg.speed = 0.687281938667;
    msg.speed_units = 48U;
    msg.custom.assign("AGAJBQORCVEDWZNPHYGDVIAZGBWVMEFSUWHMOUTDAYZKTSQMNQHYGVWSXLNLVRXELTIYOHRICCZZUEGLTGBEXJJAKRPQCMWEGAAFSJKFNFJMRILCFPCOVPMGUUAKSSMIPVHIUYPGLQORNDIQFIYOHTMAJXKKQZVPNHXKYQHPXTOLBCLXEWWXXKTBDRNJQQZCLNZSRBUHMRSDGOEYTAYIDZFP");

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
    msg.setTimeStamp(0.111860355073);
    msg.setSource(56163U);
    msg.setSourceEntity(29U);
    msg.setDestination(7683U);
    msg.setDestinationEntity(91U);
    msg.timeout = 37811U;
    msg.lat = 0.693717381643;
    msg.lon = 0.952663834876;
    msg.z = 0.49510052548;
    msg.z_units = 54U;
    msg.speed = 0.465141546495;
    msg.speed_units = 198U;
    msg.custom.assign("YTCKGCIKDUJRWRAVBIQUFVLLYVCPTZKSBSQUXBDRJDMSEHSDOPJVFLTTBCXXUXSVFDAHOHEJTPXJGQXYXNYDUWZHSQUZWEMCKUKVPIPOGHRGAVLMTMDWIRMREBSAHCZWGPHG");

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
    msg.setTimeStamp(0.212952294416);
    msg.setSource(62931U);
    msg.setSourceEntity(62U);
    msg.setDestination(42863U);
    msg.setDestinationEntity(54U);
    msg.x = 0.517146617423;
    msg.y = 0.523535163447;
    msg.z = 0.886203384103;
    msg.t = 0.562320986589;

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
    msg.setTimeStamp(0.658170967431);
    msg.setSource(64335U);
    msg.setSourceEntity(244U);
    msg.setDestination(14178U);
    msg.setDestinationEntity(26U);
    msg.x = 0.244095156342;
    msg.y = 0.245873361275;
    msg.z = 0.502028260788;
    msg.t = 0.90981675812;

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
    msg.setTimeStamp(0.0162208464917);
    msg.setSource(50563U);
    msg.setSourceEntity(152U);
    msg.setDestination(25583U);
    msg.setDestinationEntity(12U);
    msg.x = 0.825030925068;
    msg.y = 0.527792213928;
    msg.z = 0.491536208258;
    msg.t = 0.99571486402;

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
    msg.setTimeStamp(0.662856944627);
    msg.setSource(45152U);
    msg.setSourceEntity(200U);
    msg.setDestination(28730U);
    msg.setDestinationEntity(5U);
    msg.timeout = 43965U;
    msg.name.assign("PTZDOSPHTHECHIYLFFHPUMNIANPOEIAZXJGD");
    msg.custom.assign("RXWBEJDYLPSKCUJPISVOBQNDGTZVACB");

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
    msg.setTimeStamp(0.271286280902);
    msg.setSource(26119U);
    msg.setSourceEntity(106U);
    msg.setDestination(21556U);
    msg.setDestinationEntity(26U);
    msg.timeout = 5744U;
    msg.name.assign("DDWVQOEPXEBHLRLAPKYWTDLICHFFBRETWTJCIUWQQJMVVZTTFFKCGYINHCCFRQPYSZXBDBLVLABMSOTSZAIVCAELURNOMEDXFWNKUQKDXOYVMBGGNKSHWQNGOQIIMFAFTGZSDLB");
    msg.custom.assign("BFOWFTUYWREHUPRYNDCESGTHUHIMRXZYOEDODMVBHODSNJXIWIFUCMAVZPARQRFOZCWCLDQTBAQVWCCVPZRCHSPMXKPMRFGHKHYAUJXWBGCSORQXLJOLGKZEFGAFSVVKIAMEWJXTPKTNMDLDGLENBEJGZCQNBEBFZWESQBUJDTBXIAIOX");

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
    msg.setTimeStamp(0.330580265333);
    msg.setSource(63780U);
    msg.setSourceEntity(69U);
    msg.setDestination(6327U);
    msg.setDestinationEntity(138U);
    msg.timeout = 20079U;
    msg.name.assign("EMSKATIQAOEEKHBQWHXYGJFBLVYCALZYCTCWRDAZJDCGSFCMBWZMGBEVYVVWECKFNDUKHMXVONKMBRD");
    msg.custom.assign("PJGUBYNFSUSSQVXNSWOZFNZPOCGXELADJDKHPQEBONVCWTJIPJDAALKHZZQIIJLDAPHZKMGYXTSZVFPOXQKXRYKORQTECZBMYBWCVHGLTWEMNSFBEFJWOLCIDFPUUGERRJTRRXUANJLGACBMYKPETAMEHVVLLHIIWDXVUNUYIRYTDNVTOTJQMOFRXMHPZSSOWLKDXKEQRJMVIGFFFCHBHYGCBXGAUICQSZUHWYOTNVYKUPEDWRNMS");

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
    msg.setTimeStamp(0.759448752349);
    msg.setSource(59995U);
    msg.setSourceEntity(221U);
    msg.setDestination(8560U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.793293992607;
    msg.lon = 0.501411825386;
    msg.z = 0.870125462751;
    msg.z_units = 25U;
    msg.speed = 0.362715235089;
    msg.speed_units = 227U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.983251252997;
    tmp_msg_0.y = 0.218256941105;
    tmp_msg_0.z = 0.987922438289;
    tmp_msg_0.t = 0.663281448401;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 54609U;
    tmp_msg_1.off_x = 0.267101247336;
    tmp_msg_1.off_y = 0.849803848226;
    tmp_msg_1.off_z = 0.815797703934;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.706600264406;
    msg.custom.assign("QXPOQZSGMYQFLRLIPDBGNOADWCHSDUYBRDHFVUBQOKPXPMWSOWXIHVQOGPMBTLTCMMEOYKYCFVSUZDLUZGEFCDOTNVNNJTLTNFOQYAZKVEUDNQHHXFRIBEOHYABEKEUIZICEXXXVHFCGYWMCKKTWRVIVQNLKSPYWTAJKSVSBARTRCEI");

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
    msg.setTimeStamp(0.250051079949);
    msg.setSource(9646U);
    msg.setSourceEntity(200U);
    msg.setDestination(9985U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.388522390658;
    msg.lon = 0.322754528796;
    msg.z = 0.663520664488;
    msg.z_units = 145U;
    msg.speed = 0.449715340921;
    msg.speed_units = 194U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.775372730853;
    tmp_msg_0.y = 0.245251574987;
    tmp_msg_0.z = 0.389873023032;
    tmp_msg_0.t = 0.882648988243;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.211678236164;
    msg.custom.assign("GHSIKNKPOJKFLRNPXWTZGDBMRCGEHAJSTVVCLQUBZGKVAZELOYLLOTOTWFQSDHJ");

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
    msg.setTimeStamp(0.864304015099);
    msg.setSource(50561U);
    msg.setSourceEntity(47U);
    msg.setDestination(2184U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.453474192508;
    msg.lon = 0.531746912424;
    msg.z = 0.629306827481;
    msg.z_units = 181U;
    msg.speed = 0.3602971452;
    msg.speed_units = 82U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0402241416327;
    tmp_msg_0.y = 0.624555536063;
    tmp_msg_0.z = 0.361359136301;
    tmp_msg_0.t = 0.466089716799;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.311006580163;
    msg.custom.assign("ZYJFUCLUODYLPAQMMDIHWFIEUJWFPHIGLCDSUWKMXRHUNPSVYXCLIQMQHAVSBGUGMWYCNIBXSCBKGNUXNMQXILJRRBVNLXIVORFIQMZCQYWSOXHOROTBAZWTKLRQDXCLWEFAUEPFVBPOXSTKK");

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
    msg.setTimeStamp(0.787653279491);
    msg.setSource(45421U);
    msg.setSourceEntity(95U);
    msg.setDestination(42772U);
    msg.setDestinationEntity(245U);
    msg.vid = 52366U;
    msg.off_x = 0.150910156786;
    msg.off_y = 0.197662655406;
    msg.off_z = 0.728119393705;

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
    msg.setTimeStamp(0.162368404797);
    msg.setSource(44523U);
    msg.setSourceEntity(126U);
    msg.setDestination(20720U);
    msg.setDestinationEntity(38U);
    msg.vid = 28690U;
    msg.off_x = 0.517059005376;
    msg.off_y = 0.735770707905;
    msg.off_z = 0.0699465537384;

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
    msg.setTimeStamp(0.862335582758);
    msg.setSource(11567U);
    msg.setSourceEntity(59U);
    msg.setDestination(24891U);
    msg.setDestinationEntity(104U);
    msg.vid = 4681U;
    msg.off_x = 0.623253644546;
    msg.off_y = 0.92170252276;
    msg.off_z = 0.42153813019;

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
    msg.setTimeStamp(0.812586682465);
    msg.setSource(52756U);
    msg.setSourceEntity(147U);
    msg.setDestination(2207U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.803397477519);
    msg.setSource(61145U);
    msg.setSourceEntity(131U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.19904740908);
    msg.setSource(30166U);
    msg.setSourceEntity(98U);
    msg.setDestination(54881U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.605258142857);
    msg.setSource(11346U);
    msg.setSourceEntity(129U);
    msg.setDestination(38841U);
    msg.setDestinationEntity(158U);
    msg.mid = 17639U;

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
    msg.setTimeStamp(0.748521367009);
    msg.setSource(21821U);
    msg.setSourceEntity(235U);
    msg.setDestination(59263U);
    msg.setDestinationEntity(207U);
    msg.mid = 28049U;

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
    msg.setTimeStamp(0.278518516817);
    msg.setSource(46950U);
    msg.setSourceEntity(61U);
    msg.setDestination(41922U);
    msg.setDestinationEntity(91U);
    msg.mid = 16338U;

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
    msg.setTimeStamp(0.683678196774);
    msg.setSource(37322U);
    msg.setSourceEntity(5U);
    msg.setDestination(29115U);
    msg.setDestinationEntity(217U);
    msg.state = 3U;
    msg.eta = 35644U;
    msg.info.assign("IIRDLLZYYNLECGPFASDYBSKAJBJWQRMENUFWDCAJRIHOUVZXLYDPHBYWTSFMVJXLHLPPAOGEMKDMCIGVRYTKUKDGVIEUCXPUTXSASTGQIFDEKJQTLMMGTQHWZKFKDNIYNLOXOUVRCZQSOWXPIAIVBJMHKHNLSBAACEGVX");

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
    msg.setTimeStamp(0.883344631895);
    msg.setSource(52039U);
    msg.setSourceEntity(76U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(250U);
    msg.state = 3U;
    msg.eta = 35190U;
    msg.info.assign("IRYXXOWDNKVPFKAB");

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
    msg.setTimeStamp(0.803730092573);
    msg.setSource(62452U);
    msg.setSourceEntity(93U);
    msg.setDestination(23804U);
    msg.setDestinationEntity(166U);
    msg.state = 36U;
    msg.eta = 689U;
    msg.info.assign("IOQNHNDGSDFWMSCOJJHZODCKEKLXTZBVQULPZPNBPKKXNTEELUFTFRTWCZZIDQEUVDNRWFONVFZCGJLFOGUAACQRYROMCPVGITFEGWMYMCQXLXLRVZPBQTQXJOJRXISMBKWBYWQDIZEJYIADHHHRPNVVPSASQTJBDVLCVBHJDXOAGY");

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
    msg.setTimeStamp(0.00873119056256);
    msg.setSource(20303U);
    msg.setSourceEntity(39U);
    msg.setDestination(15641U);
    msg.setDestinationEntity(240U);
    msg.system = 12815U;
    msg.duration = 17392U;
    msg.speed = 0.300448744757;
    msg.speed_units = 159U;
    msg.x = 0.489606951367;
    msg.y = 0.146433881907;
    msg.z = 0.0379291345164;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.804223255942);
    msg.setSource(18538U);
    msg.setSourceEntity(65U);
    msg.setDestination(29531U);
    msg.setDestinationEntity(186U);
    msg.system = 20478U;
    msg.duration = 40493U;
    msg.speed = 0.0200004905415;
    msg.speed_units = 119U;
    msg.x = 0.0716622284247;
    msg.y = 0.732647590145;
    msg.z = 0.640760001321;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.343146437285);
    msg.setSource(5765U);
    msg.setSourceEntity(84U);
    msg.setDestination(54964U);
    msg.setDestinationEntity(238U);
    msg.system = 9694U;
    msg.duration = 1624U;
    msg.speed = 0.159263218907;
    msg.speed_units = 126U;
    msg.x = 0.243414923121;
    msg.y = 0.595565971364;
    msg.z = 0.539206955849;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.797765046676);
    msg.setSource(14489U);
    msg.setSourceEntity(169U);
    msg.setDestination(6715U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.585356335142;
    msg.lon = 0.941471014478;
    msg.speed = 0.144972124283;
    msg.speed_units = 134U;
    msg.duration = 36893U;
    msg.sys_a = 8565U;
    msg.sys_b = 9297U;
    msg.move_threshold = 0.698611272841;

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
    msg.setTimeStamp(0.734123479991);
    msg.setSource(56122U);
    msg.setSourceEntity(1U);
    msg.setDestination(27654U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.186040746771;
    msg.lon = 0.087166458942;
    msg.speed = 0.427796154137;
    msg.speed_units = 217U;
    msg.duration = 23867U;
    msg.sys_a = 16866U;
    msg.sys_b = 29583U;
    msg.move_threshold = 0.442957414245;

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
    msg.setTimeStamp(0.948379904142);
    msg.setSource(30349U);
    msg.setSourceEntity(217U);
    msg.setDestination(28382U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.826393658011;
    msg.lon = 0.57557645662;
    msg.speed = 0.38823876163;
    msg.speed_units = 221U;
    msg.duration = 29225U;
    msg.sys_a = 59942U;
    msg.sys_b = 60013U;
    msg.move_threshold = 0.95035250319;

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
    msg.setTimeStamp(0.932826163974);
    msg.setSource(32077U);
    msg.setSourceEntity(10U);
    msg.setDestination(30816U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.0615515598762;
    msg.lon = 0.730664694666;
    msg.z = 0.238662071457;
    msg.z_units = 56U;
    msg.speed = 0.896937465537;
    msg.speed_units = 45U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.965544488546;
    tmp_msg_0.lon = 0.724467562765;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NPTZWKSYNRRHZRXEISIMLISDGXAUUNOQPOPLMHRRELFEWHFQOPNVHKFVJQGGVWKAMIRTDEEXJSMMUIAMVHBIODFFLPLOGBXKXPRTULTXCOUTLRYDYWBSMGFSVYENCNWADKCBGLFYHHNXJGWWKCDNYFSYTQKIIOWVCPXJTVBEAIACYTUYBHXZQRPZNAUZJUPACOFCDNCVQWDJQVYBXTJGBABKZRLLFUGUDOKASJWJEKSZZBQM");

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
    msg.setTimeStamp(0.448860867084);
    msg.setSource(53684U);
    msg.setSourceEntity(224U);
    msg.setDestination(207U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.750236425602;
    msg.lon = 0.120492038232;
    msg.z = 0.208400720109;
    msg.z_units = 228U;
    msg.speed = 0.964740122614;
    msg.speed_units = 232U;
    msg.custom.assign("IUEJFRRYUTUGWDPJOLABFSTFXTXJBKKCIMHHQHZYSHNTLRTAYTOVPTDLFWXTKKALOWMUKYUNNWBPUKCKYPJBNUZOCIQXZCLGZNLBVNAHXOJA");

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
    msg.setTimeStamp(0.731972148896);
    msg.setSource(5574U);
    msg.setSourceEntity(143U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.878848464253;
    msg.lon = 0.0447353903261;
    msg.z = 0.614931719776;
    msg.z_units = 210U;
    msg.speed = 0.20257378422;
    msg.speed_units = 123U;
    msg.custom.assign("CBUFIDGNTIWXUMDWYUVPDLKKIJWHLFNETBNZJZJXLJRNUAPGODOFMWZYLTYLBSRAAHSACOKHY");

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
    msg.setTimeStamp(0.632821308644);
    msg.setSource(31249U);
    msg.setSourceEntity(112U);
    msg.setDestination(9711U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.132092604241;
    msg.lon = 0.478700109996;

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
    msg.setTimeStamp(0.801718798879);
    msg.setSource(41875U);
    msg.setSourceEntity(11U);
    msg.setDestination(51160U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.910561518967;
    msg.lon = 0.79820798784;

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
    msg.setTimeStamp(0.86868018455);
    msg.setSource(35494U);
    msg.setSourceEntity(35U);
    msg.setDestination(8139U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.0317414528928;
    msg.lon = 0.820747000462;

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
    msg.setTimeStamp(0.22282595654);
    msg.setSource(29790U);
    msg.setSourceEntity(179U);
    msg.setDestination(57995U);
    msg.setDestinationEntity(206U);
    msg.timeout = 62724U;
    msg.lat = 0.292402796969;
    msg.lon = 0.599512564423;
    msg.z = 0.59148431451;
    msg.z_units = 164U;
    msg.pitch = 0.810777058874;
    msg.amplitude = 0.736743461722;
    msg.duration = 28501U;
    msg.speed = 0.454847086899;
    msg.speed_units = 13U;
    msg.radius = 0.895202021341;
    msg.direction = 208U;
    msg.custom.assign("QHBAUVGLAWGDCOQDJEWHHPIKVHMBIPRDYCAGGVUFBBJPOJAQAQISPZZZHVUCSRTBUTQIMJKHSEYCVTMDNNEDNLZOTIWMLDZIPAAJYODKDFVFLXYIJWLHCAMUVJNJNOKFBREGUFLNUEESXXAVPAEZCGKXHEYUPOTHWZJCMMVNEQLQKXDLSKNQTOIXLZMFKBNRJYZ");

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
    msg.setTimeStamp(0.342001814922);
    msg.setSource(30546U);
    msg.setSourceEntity(215U);
    msg.setDestination(431U);
    msg.setDestinationEntity(19U);
    msg.timeout = 44670U;
    msg.lat = 0.358915008735;
    msg.lon = 0.925934206864;
    msg.z = 0.936654447793;
    msg.z_units = 153U;
    msg.pitch = 0.706658651759;
    msg.amplitude = 0.579864358716;
    msg.duration = 29721U;
    msg.speed = 0.701998700984;
    msg.speed_units = 193U;
    msg.radius = 0.990879689829;
    msg.direction = 167U;
    msg.custom.assign("CSPUESHZIRFRGYFXGCKVZVDBLPCBURJZBJOVJIOAZBKOILQCXJGVJRHFRMNUHWDXCZLKGFHLLPAVBYMBTDXCQARQKQMBUEXTAWKOWOGWCAIPHSMMSLBSAQDATDABVPWYQZOZAHNFTTHAGXPXFRETSNFIUNPVQKXMSGOZHLWDJ");

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
    msg.setTimeStamp(0.943564017658);
    msg.setSource(23394U);
    msg.setSourceEntity(113U);
    msg.setDestination(5368U);
    msg.setDestinationEntity(24U);
    msg.timeout = 58953U;
    msg.lat = 0.107469248344;
    msg.lon = 0.418602686445;
    msg.z = 0.266810443262;
    msg.z_units = 121U;
    msg.pitch = 0.658378408423;
    msg.amplitude = 0.268448905024;
    msg.duration = 32843U;
    msg.speed = 0.534506566936;
    msg.speed_units = 121U;
    msg.radius = 0.5657744522;
    msg.direction = 79U;
    msg.custom.assign("MOANVEQWJUMQHZAXOHPVVKXUFFUZHSJVISLZDYNNNPALZDAETIBZJWGYRQCRWZRPWSVFOLEJNSWWDCQDXNKTAGIEPJNYXIMEUSYTOMOHTJTHPIQIQVAEDXEKIXYVAHGSOLBMQHSJQRDNEHEPAOFNFYMTMFRUFKVVBTGTQGPOQFWCLAAKIGMYYSHRNBCJUDGBTJ");

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
    msg.setTimeStamp(0.462144609705);
    msg.setSource(37555U);
    msg.setSourceEntity(15U);
    msg.setDestination(2594U);
    msg.setDestinationEntity(194U);
    msg.control_src = 43115U;
    msg.control_ent = 222U;
    msg.timeout = 0.215230659312;
    msg.loiter_radius = 0.63306811603;
    msg.altitude_interval = 0.256371757144;

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
    msg.setTimeStamp(0.288047703836);
    msg.setSource(39411U);
    msg.setSourceEntity(226U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(226U);
    msg.control_src = 56279U;
    msg.control_ent = 173U;
    msg.timeout = 0.567229448445;
    msg.loiter_radius = 0.433638890767;
    msg.altitude_interval = 0.404993946993;

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
    msg.setTimeStamp(0.239896931194);
    msg.setSource(42745U);
    msg.setSourceEntity(183U);
    msg.setDestination(60481U);
    msg.setDestinationEntity(147U);
    msg.control_src = 3240U;
    msg.control_ent = 36U;
    msg.timeout = 0.880561649558;
    msg.loiter_radius = 0.499764555848;
    msg.altitude_interval = 0.930394650559;

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
    msg.setTimeStamp(0.178120357434);
    msg.setSource(30572U);
    msg.setSourceEntity(177U);
    msg.setDestination(3713U);
    msg.setDestinationEntity(224U);
    msg.flags = 85U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.137617091133;
    tmp_msg_0.speed_units = 134U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.944760414018;
    tmp_msg_1.z_units = 162U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.13986123032;
    msg.lon = 0.889986225402;
    msg. radius = 19609U;

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
    msg.setTimeStamp(0.419974841785);
    msg.setSource(27976U);
    msg.setSourceEntity(150U);
    msg.setDestination(20944U);
    msg.setDestinationEntity(8U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.523918723084;
    tmp_msg_0.speed_units = 193U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0727900958955;
    tmp_msg_1.z_units = 166U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.641177845961;
    msg.lon = 0.85390046773;
    msg. radius = 13253U;

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
    msg.setTimeStamp(0.189375629534);
    msg.setSource(12103U);
    msg.setSourceEntity(26U);
    msg.setDestination(42449U);
    msg.setDestinationEntity(51U);
    msg.flags = 203U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.962081095816;
    tmp_msg_0.speed_units = 172U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.107481408825;
    tmp_msg_1.z_units = 230U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.21809624508;
    msg.lon = 0.854077730677;
    msg. radius = 4729U;

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
    msg.setTimeStamp(0.274451441997);
    msg.setSource(57819U);
    msg.setSourceEntity(113U);
    msg.setDestination(11371U);
    msg.setDestinationEntity(134U);
    msg.control_src = 14773U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 131U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.370231988369;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.138048381721;
    tmp_tmp_msg_0_1.z_units = 89U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.580658494196;
    tmp_msg_0.lon = 0.452295097135;
    tmp_msg_0. radius = 2230U;
    msg.reference.set(tmp_msg_0);
    msg.state = 233U;
    msg.proximity = 117U;

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
    msg.setTimeStamp(0.674853418941);
    msg.setSource(62506U);
    msg.setSourceEntity(158U);
    msg.setDestination(37091U);
    msg.setDestinationEntity(185U);
    msg.control_src = 63026U;
    msg.control_ent = 111U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 81U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.616767324936;
    tmp_tmp_msg_0_0.speed_units = 236U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.177439934016;
    tmp_tmp_msg_0_1.z_units = 209U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.950681468736;
    tmp_msg_0.lon = 0.350327623501;
    tmp_msg_0. radius = 49630U;
    msg.reference.set(tmp_msg_0);
    msg.state = 88U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.933785685249);
    msg.setSource(58816U);
    msg.setSourceEntity(142U);
    msg.setDestination(55892U);
    msg.setDestinationEntity(102U);
    msg.control_src = 43565U;
    msg.control_ent = 78U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 130U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.261565932741;
    tmp_tmp_msg_0_0.speed_units = 237U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.227899599679;
    tmp_tmp_msg_0_1.z_units = 1U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26369317788;
    tmp_msg_0.lon = 0.659002861466;
    tmp_msg_0. radius = 58958U;
    msg.reference.set(tmp_msg_0);
    msg.state = 93U;
    msg.proximity = 85U;

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
    msg.setTimeStamp(0.24907918458);
    msg.setSource(25465U);
    msg.setSourceEntity(1U);
    msg.setDestination(54867U);
    msg.setDestinationEntity(138U);
    msg.op_mode = 203U;
    msg.error_count = 120U;
    msg.error_ents.assign("PPRBFTXRBKIWMAAPQNENAYHLZSOXVJDZIMTCLTPNEOXLMVOPASWUFIHWCVMPDGKBDFKZLQYJMBGJBZQUHRZUUDYPQUYFAYNHRSECNVXMYQVICDXBSEOBKIICVSVCLYCNITEKFJHGRWLQLIQFEGXTUDZSEQ");
    msg.maneuver_type = 48141U;
    msg.maneuver_stime = 0.824402363358;
    msg.maneuver_eta = 5610U;
    msg.control_loops = 1426533254U;
    msg.flags = 57U;
    msg.last_error.assign("YJJXGKNBBGIPCUVWJSYCPCJXIGLTCMAALGFDWMQUUQZARIMJXBKEATCNUMRSFQEYUTFWPOWMVAARKPEDRCREXLDRFFOZXPDBQMZZASHSZKQHFZPNNIMCQUSXNHBDCZZCAVOWYZEDLZJWWBPWHQWVXNBIYRRSVKLAFHJTJKMIDASJQLHKSEPXYYDOUUNSBFXYGIVROHGTBGEOHFVUGTQELKFIPSNPLTHJYLXIIUOEGWONTTMDVKYL");
    msg.last_error_time = 0.115658689543;

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
    msg.setTimeStamp(0.030332231973);
    msg.setSource(43377U);
    msg.setSourceEntity(48U);
    msg.setDestination(49807U);
    msg.setDestinationEntity(113U);
    msg.op_mode = 35U;
    msg.error_count = 161U;
    msg.error_ents.assign("SCPDOATXCWZSW");
    msg.maneuver_type = 29177U;
    msg.maneuver_stime = 0.327609273386;
    msg.maneuver_eta = 52354U;
    msg.control_loops = 3988324942U;
    msg.flags = 238U;
    msg.last_error.assign("DDKTNMWJNQROTDOCUNGMUNYZMPVVSWPTHZRSUSGMGKERFLHAPWMKLTXXANQNONUHUQELCDORZTBBPNJJSWEULBWOTYSIDNJWBCAQZGQIIXCJVLUBHTHPDPPBEQSXFCUVJAWU");
    msg.last_error_time = 0.172311918275;

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
    msg.setTimeStamp(0.00482513128275);
    msg.setSource(32181U);
    msg.setSourceEntity(80U);
    msg.setDestination(12298U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 161U;
    msg.error_count = 117U;
    msg.error_ents.assign("NKNPRKSLQKDPTVCCTYSWSWJDNLLXJUJYVPSAIKLWYAKMYEHXUNCPHKPCEREISGNF");
    msg.maneuver_type = 31818U;
    msg.maneuver_stime = 0.067194114854;
    msg.maneuver_eta = 44553U;
    msg.control_loops = 4029088488U;
    msg.flags = 135U;
    msg.last_error.assign("YPVFTSCPSYMBOOATRIICONZXWQVDNYGUSKNRFHPPSKJAKWIFMZAWBDHOYVGIUQOQACHIGDJGZFZOIIWEHTNLKDFMWBZXLCYVEMOQVLSUZDDQFGFQJBRAGWVVLRNYQJXCSJURPJJETZLWPMYFNXDXKWKWPGXCKLINPMHCEKIBPAMDHUOOGYESBEGDBHELTRVXTSJRUHBCAMMFQUSBNBXRKXLOAMUZAJYLVZFHNSNTUTICGRZPXLJRTUDEYQTEA");
    msg.last_error_time = 0.115273670757;

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
    msg.setTimeStamp(0.28498053431);
    msg.setSource(48534U);
    msg.setSourceEntity(129U);
    msg.setDestination(50325U);
    msg.setDestinationEntity(155U);
    msg.type = 238U;
    msg.request_id = 47722U;
    msg.command = 222U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.491860670481;
    tmp_msg_0.lon = 0.194052176171;
    tmp_msg_0.z = 0.233307231328;
    tmp_msg_0.z_units = 101U;
    tmp_msg_0.radius = 0.303326663016;
    tmp_msg_0.duration = 52544U;
    tmp_msg_0.speed = 0.748138683499;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.custom.assign("RKWZYUGXOSCHAXIXRPNAHHBMQAOHZSQOXFWYEPRNLVUFHIYTOJNWVIEEOCGGSXDBYPPLWDOFBTVEHZKZTIPNRTDEODXDZQNYVIQPCKGTZECLTQEKAVBXSLQFILNVJUDXQCYMCBPOTLBDVTKYPIAKZMCMRCQBFSEJJMLLJTINWH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28877U;
    msg.info.assign("AJGQEDOFUEPQKWEYVWXDZETIYWQMHEGQSZRMKAJFQVUWTAHHYMVJIVRGZEODEKSUNVMRMKMUXVMYNGFLULOUMYGOUYBCUDPNPUIIDHXCKRYCASPPYVJFDISOBRZWOIIQXZTYWBTBCDTOMCLC");

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
    msg.setTimeStamp(0.673244397988);
    msg.setSource(37958U);
    msg.setSourceEntity(193U);
    msg.setDestination(55209U);
    msg.setDestinationEntity(66U);
    msg.type = 82U;
    msg.request_id = 30968U;
    msg.command = 156U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 4376U;
    tmp_msg_0.lat = 0.555974503889;
    tmp_msg_0.lon = 0.00870133955909;
    tmp_msg_0.z = 0.126314801305;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.amplitude = 0.795697064046;
    tmp_msg_0.pitch = 0.891573134937;
    tmp_msg_0.speed = 0.86683548571;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.custom.assign("NWRIAJHLOJGVWJUAHFXQMOSQVFMEQJBQLUBQBJFKVSDVRUITKSSLTKZHTWBBDYHCDIRRZXKYLFYPOQFPBNOHCSXPJXIMIOFVILEVAZCSFQCGZATTPERRQEYQKYOTTWTDKIRSZBZAAUHXLPCLGPSFNUCJYMBADRWUZGYSCIHTJGWFZQTDDDYULCVHGNBOBPHXODWNGPMGVUNMNPNOGWMHESXYWK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6579U;
    msg.info.assign("RTROBLFEUZQUJOPTEFNJDNICFGPDQGRLQDLYMUFZFBOPNYZLRHUSVJWSEKGBWGWMSYSWCDUAETSCBVGMRLOXWOMVWPUXQTRHIHBXMYGKLKDZZCXCFAXNMUSAYILKEGPAXZGPEEOLBBBPKJIH");

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
    msg.setTimeStamp(0.928341518504);
    msg.setSource(8198U);
    msg.setSourceEntity(56U);
    msg.setDestination(50954U);
    msg.setDestinationEntity(5U);
    msg.type = 223U;
    msg.request_id = 283U;
    msg.command = 178U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 48582U;
    tmp_msg_0.name.assign("FFCXTGMCFJRHYVMDKUQNZBLQKLMMFDTGEKDCQEKZXHVSSPOQAAXYFBLSJDKIVIHYLHAGINUUHPPGPHLPMNXKDOPOIOWUQHQQNAHVDIYJNSGPJWGPOFQRZRSDXUKXEVRWZDDTIMQZPZCUQFYAYYXIRFRTMJFLRYYNXRUYROSTXELPWRABSOCWZJATSMGOUUECLNENBGI");
    tmp_msg_0.custom.assign("NNFKWMKLQANZXDRBCBPUMSTIPJZPPYGDXOJUVGWQTOFLPHHFFFJMZYMRNESDCMNCPOULZFBQHKLEAIVMKQUPRCJAGNKWXEBTQTJRUCYXRIFPYFTIWRHOXQTCUBYNHYAMEIIXMKJUZEPGWQZWWRBBSVAXETNAQUFLWQEDXKGKLBSVLZVSHUEGNIIFJZNJAKGHCCSWHXOHPCRIVSVEUADHOTXBZIOMRQLDYABCJO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44117U;
    msg.info.assign("IZLOUGEKGMMRXHWLNJZANXHUCFCKQUBXXFNDZOZXQSKVSDXMTKWZSRONRBYTOJKMFIIQRSHAJH");

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
    msg.setTimeStamp(0.0506038297143);
    msg.setSource(24318U);
    msg.setSourceEntity(79U);
    msg.setDestination(35544U);
    msg.setDestinationEntity(59U);
    msg.command = 212U;
    msg.entities.assign("GPHMRPXXKCZALLWUXRIRKTSNFYXZMZFOZFIUWOYTNTIDRGVABWVJQOWISTSUMSUQPRVQGTDYWNKYNVLSZLCFXLLJHNMLUXCUEYOKPRWXCKLDPAADHBDFXHRUEIWYCTEJNBMUZCQCQECAKFDPLRBJUPOSPFPJHNIFEOSDDNONYRWIYBVZBWVZMXAGSXJKTEZIIYJGTQZUQMGBMJKITEANCKCHQFJSSEO");

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
    msg.setTimeStamp(0.670482469214);
    msg.setSource(49926U);
    msg.setSourceEntity(76U);
    msg.setDestination(59171U);
    msg.setDestinationEntity(167U);
    msg.command = 90U;
    msg.entities.assign("HDUPRDYEBXEBWGTVQVBHSFSUIKWSCOZBFLKEUBJHXPFNOXREFOQBHXCUCJOMZUDFGBMVMTYWOJODWQDJBTJRYMZJLYKVUYINUTACNORQHTVXGDMAJSTHEERRCNWFDIGUMPFMSWJOCRRYSVSAVEXLKJNKPZLAKNACTCHS");

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
    msg.setTimeStamp(0.967324893907);
    msg.setSource(42807U);
    msg.setSourceEntity(118U);
    msg.setDestination(598U);
    msg.setDestinationEntity(81U);
    msg.command = 234U;
    msg.entities.assign("LCPMUWURFKGYSJAJFZLNRNSNAHNDV");

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
    msg.setTimeStamp(0.746779034954);
    msg.setSource(28789U);
    msg.setSourceEntity(136U);
    msg.setDestination(32152U);
    msg.setDestinationEntity(109U);
    msg.mcount = 147U;
    msg.mnames.assign("GZMDFHPMFBENKKUETEBJSCUILYNSAJ");
    msg.ecount = 159U;
    msg.enames.assign("CEZKHHQRRYVNFPZOTIHLBTGAZABRHMPZPYQZGOVVUEAWWIKDMJAGEKFVA");
    msg.ccount = 101U;
    msg.cnames.assign("XINAOPJITDUYPTETKMRQYRUEMEHVMDG");
    msg.last_error.assign("ZLQZFURXJSGBOMRUTFWRSYJLFHIVCGTWFBCPNTPBMGHDAKUWJTCJZCADYSVEVNZWSCQEIXVNKJPWDNNULOQZBDBXUYPKSPQMBTJWQJDPDYHGMKDGOLWBHFFLEUYQHOROVABQSOKCINXEKGVERKACKMEHANBWVKZXQBYZYPGJILTNFMTKPAVJMASUXYCORQICVMFESW");
    msg.last_error_time = 0.233716880041;

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
    msg.setTimeStamp(0.740187188951);
    msg.setSource(41619U);
    msg.setSourceEntity(184U);
    msg.setDestination(42792U);
    msg.setDestinationEntity(116U);
    msg.mcount = 240U;
    msg.mnames.assign("WVTGDLLGLQGAPYWAYBTMDGXNQIKVRQZQYKDUELFUBVOWRYCNJEEYWZIGYKJDCOGVQMMTEPRCEALHXUVGFFBRLBANLJZHXHAXHOLRA");
    msg.ecount = 60U;
    msg.enames.assign("AQFQZWHBSUWIPORFEJULYCIDQXJBXVIZTYMZXAUNOMZXMNUQGSRKQIZRBYDJMSVXRUXEFOHWYNETDALFBVOJJTSSYGQDVSBTPDIWZWDWFWAKCIEGKGEPVDLZAXAFPYRRKIMXJOLCMVFUPVCHNTSHCZTKWHNGZBHRRPEPOICMSBAOJLKYTQIFNLNRFGBUCKHJNE");
    msg.ccount = 25U;
    msg.cnames.assign("RSFSCSHOVZFMOZLTZUAKSMZGIIUJUTOGRZHWWMRXL");
    msg.last_error.assign("YAGBRTVEGBPKOSOXDXIHBQQUCQNHEETPJMBMVKRBIOUHARDXQUWZHHECRIONWZJJMXCZGERRHXKIMHBUKJKRKTVUMBRKEWJNFFVLNZFLXIZYPRSDXYMTSWQJDLMFSEWFOCPAMSUCQYSDZQYEUZTLYINGPWFNBWLPCBGVSNJMHNMTLSJQTGVHCFYOGHTNXTEPJKWIAAALFZVCJCWIGUVDOSZKBDTCAOULFANZDVKQDI");
    msg.last_error_time = 0.440624618048;

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
    msg.setTimeStamp(0.875387995844);
    msg.setSource(24545U);
    msg.setSourceEntity(71U);
    msg.setDestination(39108U);
    msg.setDestinationEntity(178U);
    msg.mcount = 9U;
    msg.mnames.assign("MQYNULDPANUOEDHQQOIMKLVLRBZJHKZLHZTHRQFTRXTIWAXSYVZOITNMAKYZLRGIDFKQCTMEWKLXCVNCMILIABPGCPYPLWGSXSMRPFFRSCPOSAVPDNZJQYEWUFZGQYMIHIDBQVFQYDHUAGSOBAJYHPICOEZGOYSORQNGJKTVMTPENGEHULXCJFRBXXIDMDFWSUDWJHXBWEJKBOAJEGAVCEWDFFTVRXJUXCSPANKBKSWTYVGZBOUMNKRU");
    msg.ecount = 160U;
    msg.enames.assign("QZZBKKIKHIHQWXWCRPYWSODNUBYLCOOPNWSDUERVYCAHCTEYLJBLDVCVVYGYUEJPLZ");
    msg.ccount = 254U;
    msg.cnames.assign("ELWNIYWMEYGNROLJPOKCURFVZDLZPDWTGQMCAPUGJRAWJCMBOUKXTXTLUGQUKYEDRFFZMLPPQDAYWQPQFEXRCBBOMPLKRNHZJXTUMDCGBOOHSZFVWENWWHXAFEXIHBXDYEONIITHG");
    msg.last_error.assign("JJPJGZSQGLMZFEDYSBISUZUHYZLASSWFCAEQTKISGETCNFFIGTMLDIVVAJXXOWFZTRMEGPUHHPFAAGDTKWHOOHVBEVNWMTJDBMYQNWDQEYUCFACMQFQYYIKJTPV");
    msg.last_error_time = 0.501921707931;

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
    msg.setTimeStamp(0.199387024908);
    msg.setSource(58863U);
    msg.setSourceEntity(155U);
    msg.setDestination(22914U);
    msg.setDestinationEntity(120U);
    msg.mask = 108U;
    msg.max_depth = 0.79055442966;
    msg.min_altitude = 0.41428459613;
    msg.max_altitude = 0.0858457045272;
    msg.min_speed = 0.362041068334;
    msg.max_speed = 0.223689710167;
    msg.max_vrate = 0.951893103075;
    msg.lat = 0.571148090469;
    msg.lon = 0.609518431242;
    msg.orientation = 0.377418964908;
    msg.width = 0.587034769597;
    msg.length = 0.660073351729;

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
    msg.setTimeStamp(0.548806380996);
    msg.setSource(2952U);
    msg.setSourceEntity(121U);
    msg.setDestination(2961U);
    msg.setDestinationEntity(244U);
    msg.mask = 49U;
    msg.max_depth = 0.124928389935;
    msg.min_altitude = 0.502161493638;
    msg.max_altitude = 0.679502516359;
    msg.min_speed = 0.0303003389908;
    msg.max_speed = 0.792766583356;
    msg.max_vrate = 0.277160621717;
    msg.lat = 0.810926866928;
    msg.lon = 0.604330702941;
    msg.orientation = 0.545785842445;
    msg.width = 0.833355064349;
    msg.length = 0.275362662423;

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
    msg.setTimeStamp(0.601657705427);
    msg.setSource(52837U);
    msg.setSourceEntity(7U);
    msg.setDestination(20468U);
    msg.setDestinationEntity(171U);
    msg.mask = 114U;
    msg.max_depth = 0.74738011223;
    msg.min_altitude = 0.0335583917682;
    msg.max_altitude = 0.873647590881;
    msg.min_speed = 0.00286341627049;
    msg.max_speed = 0.0315948588533;
    msg.max_vrate = 0.003208465524;
    msg.lat = 0.631528695314;
    msg.lon = 0.219288126404;
    msg.orientation = 0.0386991410328;
    msg.width = 0.655130710308;
    msg.length = 0.0863897844958;

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
    msg.setTimeStamp(0.144228094714);
    msg.setSource(48779U);
    msg.setSourceEntity(236U);
    msg.setDestination(61239U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.945303532101);
    msg.setSource(57432U);
    msg.setSourceEntity(48U);
    msg.setDestination(20354U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.541455856774);
    msg.setSource(5842U);
    msg.setSourceEntity(172U);
    msg.setDestination(2685U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.863518148447);
    msg.setSource(59111U);
    msg.setSourceEntity(40U);
    msg.setDestination(36261U);
    msg.setDestinationEntity(56U);
    msg.duration = 41300U;

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
    msg.setTimeStamp(0.572869476801);
    msg.setSource(47388U);
    msg.setSourceEntity(75U);
    msg.setDestination(52044U);
    msg.setDestinationEntity(72U);
    msg.duration = 4715U;

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
    msg.setTimeStamp(0.480567689265);
    msg.setSource(52825U);
    msg.setSourceEntity(210U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(40U);
    msg.duration = 4479U;

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
    msg.setTimeStamp(0.280760132597);
    msg.setSource(18729U);
    msg.setSourceEntity(114U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(81U);
    msg.enable = 125U;
    msg.mask = 163498370U;
    msg.scope_ref = 0.479083630062;

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
    msg.setTimeStamp(0.232894419171);
    msg.setSource(42561U);
    msg.setSourceEntity(35U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(231U);
    msg.enable = 242U;
    msg.mask = 3093528012U;
    msg.scope_ref = 0.885015451506;

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
    msg.setTimeStamp(0.944966144033);
    msg.setSource(7481U);
    msg.setSourceEntity(187U);
    msg.setDestination(58021U);
    msg.setDestinationEntity(40U);
    msg.enable = 103U;
    msg.mask = 509049690U;
    msg.scope_ref = 0.358398546114;

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
    msg.setTimeStamp(0.271798694104);
    msg.setSource(25787U);
    msg.setSourceEntity(75U);
    msg.setDestination(36904U);
    msg.setDestinationEntity(35U);
    msg.medium = 169U;

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
    msg.setTimeStamp(0.95093428708);
    msg.setSource(45218U);
    msg.setSourceEntity(57U);
    msg.setDestination(13346U);
    msg.setDestinationEntity(84U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.327494034095);
    msg.setSource(18433U);
    msg.setSourceEntity(52U);
    msg.setDestination(52433U);
    msg.setDestinationEntity(197U);
    msg.medium = 89U;

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
    msg.setTimeStamp(0.00887758790092);
    msg.setSource(46153U);
    msg.setSourceEntity(82U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(218U);
    msg.value = 0.330562724793;
    msg.type = 145U;

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
    msg.setTimeStamp(0.368769488448);
    msg.setSource(50698U);
    msg.setSourceEntity(2U);
    msg.setDestination(28465U);
    msg.setDestinationEntity(47U);
    msg.value = 0.410147288407;
    msg.type = 190U;

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
    msg.setTimeStamp(0.182770079367);
    msg.setSource(43571U);
    msg.setSourceEntity(185U);
    msg.setDestination(414U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0760748091447;
    msg.type = 198U;

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
    msg.setTimeStamp(0.0763749047686);
    msg.setSource(15533U);
    msg.setSourceEntity(105U);
    msg.setDestination(6808U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.75204983781);
    msg.setSource(56292U);
    msg.setSourceEntity(143U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.76224722735);
    msg.setSource(25745U);
    msg.setSourceEntity(148U);
    msg.setDestination(18658U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.223766189996);
    msg.setSource(45292U);
    msg.setSourceEntity(154U);
    msg.setDestination(32001U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("PHFZGTQHEWXHQGCCDCDRGWOPNSTKEVQLLBVCZTZYJNBFLTIIDUBJV");
    msg.description.assign("LKIPNRTYTUCCUSFPQQAGYEBWPXRLICBRMFITKCIKVFKPGOLXFWCUZFZNBRHTTJWKDAJPFEDTIHBJVASWTM");
    msg.vnamespace.assign("RMAWGARDUFCFOJMVBXOKLMNCKXDAHWTYTJZNSGBZHDJJZFUXKDOEVXKUORHZCAYEZHUVLBLINVHFQNMZAMIRBLIFBIPQUYUIHTTQKEJSBXWRERGJWLOMNYZBXVDMPHEENGYDCXZKGOOLYDZMENRQSJLUFJZQWMPTKXSGKYCWUVHHYMBGEVCISRNCTVSPTXRWUFSAQBDIPACQRHBOGWWGEPLFFQFSPN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZGPFDHYPRJQKQPRHRIJP");
    tmp_msg_0.value.assign("FEOCALROENLJSGWFFJOZTDTKZXAZHYSRBZSYHKXJHSINEGMDMDLDVHAJKPAQEQLNPIOUVMVLAOUYFMNSHUWNJAIIPFDWCJEDNMJHXYCXZSLKPLWFGQFGFXAUEICWOBHMSMGQZPQQILTMSDTK");
    tmp_msg_0.type = 135U;
    tmp_msg_0.access = 156U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YDFMBUUOAJXCBOYCLBCKBSBGLRXTZWWXTHLSRNNDOXVQPANZVGFMLWFPHPIUOEXFIRRSMHNAQHOZVDVHNYJHNMLFZWVQKGGPWOAIAUASRGTXYERBYKUPJCPSVCTEIBKGSEWRVEVAKYSKJGZZGFDKZPYUODEAGFQLPLMIWOQXJTJIRJZWWCLECSH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OAYNJJNFKUACQFIGZLZMLCLKHVYTQTM");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 26523U;
    tmp_tmp_msg_1_0.lat = 0.0443106951718;
    tmp_tmp_msg_1_0.lon = 0.0396879728874;
    tmp_tmp_msg_1_0.z = 0.135184692859;
    tmp_tmp_msg_1_0.z_units = 98U;
    tmp_tmp_msg_1_0.speed = 0.450205918368;
    tmp_tmp_msg_1_0.speed_units = 201U;
    tmp_tmp_msg_1_0.roll = 0.183604104982;
    tmp_tmp_msg_1_0.pitch = 0.832409348619;
    tmp_tmp_msg_1_0.yaw = 0.0752746299647;
    tmp_tmp_msg_1_0.custom.assign("ICRYDLFWEVAVBJWFTNLZGQSQPCLUZXIFSEBCWOKMGVOLPSMHRJKBIMUXTIJSEMONOBFPJWCKTAWPDBXUXXUVALPKJPGDYUBNJRQEYPHUPXIOWFQJEYASBPQFFVEQUEGVHZYGIVNDJDDEZYRNKNKNZBHTDHJCUYBTWLKRZSLMUXIRYEETAVACMAXGMQRVFUHSTGTFCQMQYOJOCSKK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PowerChannelState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("ZGRSTBRBISDSFMYKPZOYZRPKMWXODUK");
    tmp_tmp_msg_1_1.state = 239U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.596342347734);
    msg.setSource(8448U);
    msg.setSourceEntity(3U);
    msg.setDestination(17446U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("AIZRAFGYVQANVMSIXKYLWYUMCGZYQHVZRMLSSIZBZXZSNCUJWUFYNJEOOILNFQLNKFKAEXNJIITVQJTOFTDCKOWLSRBDDEKQIMJT");
    msg.description.assign("OFWDQIGCJNXOCQENSNVAFJPWPTHEKLWZE");
    msg.vnamespace.assign("PFMQPBZFQVGNMXEXKVLTSQSOIXAJPURF");
    msg.start_man_id.assign("LPSCOXAELCZTPUXIMGYHGEMWGQPZIZSNFOSVSFRIZVQMURYLLVVJOYXXEBMYPFQISSURNCV");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("AFYPTZCOGWHNAZQURZNKZROFGPLPKGWZQHFPWMUJ");
    tmp_msg_0.dest_man.assign("WZQDJWASWMUEOFSIRIJHDMQSPDWKPGXKBJRRVSDRONEDEHRLTXZFKTQLYDRJUEWCUQDCZGVXYAFOSXEDEBFBXJXYOLHVNGLFUQWUFZXIYMTTZPKUYCPBAEGBBCRATNEZMDLBSATLKQAZQ");
    tmp_msg_0.conditions.assign("KXJHHRMGWLMPGRVOKUIXXYQKTDVHQQOPYPFYGISSMBEJUCBHERDZYAIBPWUJLQBHRZFQZKFTEOVRSXJMXAMLDZSKGAELBRIWZPXRXGKNUQSKFJGTDEWOKPEEBISDFAZNKQONACIWACWRVNSHAODENEBMGFXDMBOMJNAUUSVYCLFIDUQTQLZITZOVAGJMMIBCSLXTTWFXBCWCNZAWVPPWNTNJGHTYOFUSIHGVOUHYCJDLCLRY");
    IMC::UASimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 240U;
    tmp_tmp_msg_0_0.speed = 13526U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {26, 66, 58, 29, 89, -3, 99, -97, 75, 47, -56, -117, -19, -48, -105, -67, -96, 40, 37, 90, -4, -10, -96, -38, 51, -35, 91, 55, -33, 37, -32, 9, -92, 27, 79, 56, -122, -73, -35, 38, -47, 104, -49, -118, 93, -34, -22, 104, -33, 115, -48, -3, 3, -89, -44, 99, 1, 32, -68, 57, 44, -2, -90, 121, 45, 69, -22, 27, 104, -95, 119, -82, 87, -78, 88, -23, -79, -24, 58, -52, 82, -37, -14, -72, 34, -26, 113, 26, -41, 73, -63, 113, -33, -76, -51, -118, 57, -126, -38, 37, -49};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::Map tmp_msg_1;
    tmp_msg_1.id.assign("ZZWBRBWLVOKWIQQKQOGXZAXUNCISFRVLAUCLCVZJDPNQQIRGMZFZQEELHVTVLDTLMHIPOEUTWMHXLEZWBXMSDYBBJKFFCDCAUJRJHXXHVHTYRADQROESEONYQUAOHGVZBVMSMFCNUBPSKDUJWSSJRRKNMOGTTFJSSFXINPYHMPJNWSDTIMYPKNYFWKOFLCVEVGAOTAXOCYTGBILNUUGYEXKMELIERWCPHPQHIGITBYBDAJGACFGKWXDUYJA");
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
    msg.setTimeStamp(0.439444630603);
    msg.setSource(48597U);
    msg.setSourceEntity(204U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("CMHWZKBJPXTEUEZEYOWUGCZZSYDYVROACCLACQGUJUDUIPAS");
    msg.description.assign("UILKEEWGRPGQPXRSHRPDBIOJRKTQXYXCQDSJWJCCLVWLBTQYZEHBNJDSHCISNWNEJWQKVOZSZRTLWXAFILRDRMGSTCH");
    msg.vnamespace.assign("YFMXCZSGAPSBGQLTJTHLFAARWLWDQVQKTHFNTEHCMRBCXIPTEDRIFUGMWYGYEMVTJIALPZFRUWSNJDKEKHAXUPIONMJILUBMVUGVEROSWKZCSDHAGGCFJVCNRNCEXSMQQVPXFXZJEANHSVQRDIITMEGKPHFTROQNKDBZJREWBNVAGSJIQLZKULEITQOFUGWHUOKZOBWBKTCYNZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FUHOJANXEVWYETHRKKKRNFUTHINPZNPDAEKONWTWWHILJLYBXNGNWGABQRDZBROHSNRZQIGAOHJVNQZPIVMBSMPLPLVGTZMZKCPXSAATUQXTMBYXAMGYQQDFAJRRVLSMRQPOSBYYCFFWWHADCFIKEUBJYVDWUUDS");
    tmp_msg_0.value.assign("COPIAJJYWBAMTKMSLWPGXCLXRVFAQKTPZMIRCHFQHOOSUVOKNTLEVAAQTEIVAWEXIOJAMPVJMVZZYAWHMBUSFWDJCGNJYRRWEQCLHMWDXATZQFVXQ");
    tmp_msg_0.type = 228U;
    tmp_msg_0.access = 176U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SFSJYZBDURVHOBLOKLEHCXCMGILUZPGFHMIPNCQBRENJGYYTNTCHYWQLHJXMVUANSPXGNYETLZOIFJOMADTTVIDBPXTOQOMFLVJKIZUPXZXDNXBPRWCLLESBAAIRFSKWLQTJTYSNYCIJMIWECWWGCDQYSXIPMKUOTCAWESHUQRWONKKWRQYQ");
    IMC::ButtonEvent tmp_msg_1;
    tmp_msg_1.button = 14U;
    tmp_msg_1.value = 173U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IridiumTxStatus tmp_msg_2;
    tmp_msg_2.req_id = 50831U;
    tmp_msg_2.status = 184U;
    tmp_msg_2.text.assign("PXIMXBUWVVQDCNERFSUUVMJCPEODMAPQCXVEAADLIRHOMCWKXTTTBOHOFMGKEEQHYQCJNFJQBBHALLFYYGQTHYDPNSDRTIVKKGHWPIUKLRMUCODGFBOOJ");
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
    msg.setTimeStamp(0.132072052802);
    msg.setSource(53313U);
    msg.setSourceEntity(178U);
    msg.setDestination(63662U);
    msg.setDestinationEntity(91U);
    msg.maneuver_id.assign("JBCQIBEASSUOZTPCANXDIEZVDOCXFVWAWUAYCNNAPSTITS");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.680865044899;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 54543U;
    tmp_msg_0.custom.assign("LBGWRHZTUBLUIVXSQSVFJNKYOLPURQKMADLPAXKWMCFYAGJOOGTTONHBJWFZISMHWJSIXCJFUFETMKAKGHZJHHJIENNPLVCUYYMAVXXABEXPSDPTTHNUR");
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
    msg.setTimeStamp(0.933426860074);
    msg.setSource(540U);
    msg.setSourceEntity(157U);
    msg.setDestination(28404U);
    msg.setDestinationEntity(208U);
    msg.maneuver_id.assign("XYHYTTITWMPBIKLTGNXHLLJCDFGSFHOBLSBHBNNNKQLDBMACCWRFC");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.946812462084;
    tmp_msg_0.lon = 0.391438313194;
    tmp_msg_0.z = 0.722282381398;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.radius = 0.810206911899;
    tmp_msg_0.duration = 60915U;
    tmp_msg_0.speed = 0.728654311086;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.custom.assign("GWETVEWCYSIUHFNFHNHEVIKASDZZMSJRFHMZEZBDNDCIPBKWBKYPCTPJBEGRJIJTLZMVCCQJFJOLHOFAPTDXKSPDZUCLTFROWWXYGJAZYSBXFRWQILQKNMRTFXHGWQOQVBKMPLKTKNXLXWAVOCYOGHGADZFIOXGMAXRHUEUENUUIJBLSCQRMYCRBNLVTVDPBIRZHNOZAJSTDFEOYKPMDXLSNUCUYLV");
    msg.data.set(tmp_msg_0);
    IMC::Abort tmp_msg_1;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.123824843656);
    msg.setSource(21474U);
    msg.setSourceEntity(210U);
    msg.setDestination(14182U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("WZUTHKWXAMCBQETHNITVJVZVUURGUZMLOGXGKXQDEUFGVKFHJMDXYWNBLLEWVQHNGCBOXXXASKNTGVTKBVOHMBZVWZVGDJORDTLHSXCTQPCRYMKSCRZWLRPFTMPFPTDEEMNNFRRJEYBIEKKATJIOAPASQUHMFMWWRENRPPYDKQPKJAHQQFDYONGIYA");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 13930U;
    tmp_msg_0.lat = 0.204484491752;
    tmp_msg_0.lon = 0.536455278358;
    tmp_msg_0.z = 0.880335502874;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.pitch = 0.182310627075;
    tmp_msg_0.amplitude = 0.312846848514;
    tmp_msg_0.duration = 51955U;
    tmp_msg_0.speed = 0.167217460841;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.radius = 0.495307021905;
    tmp_msg_0.direction = 90U;
    tmp_msg_0.custom.assign("JNULKHZYXEWTPDQRUHGJVBYFGGSCISTQIOMZMPFTNQIOZSSJGVFZKLWFBGYJMXPKHRYAHJMDJNHZCJAEOCEOMXRVVFEMG");
    msg.data.set(tmp_msg_0);
    IMC::RemoteSensorInfo tmp_msg_1;
    tmp_msg_1.id.assign("IQAITULBZJKMCGNLUWCFCKNQVHEVAWKERFLTCPSWTHDDGSOMDEUVFLJZGOYHOJRRJAPRHJEFLIHCYERYWESMYXSKNICXKUAIERKWOMXZ");
    tmp_msg_1.sensor_class.assign("LNEQAEWHKTBWTRTHQPMMPACSFDZOITUIUSCYHDUBDFOOKPXRJXJNROOJWHGNWIGYAETNQIVVGJJALDFMATOQSXXKAZGKBGOCVPKRZGINSKLCIEHEZSUPDWYDMIQUNEZPBVFSTQYRJFLMRCKVUTRODXBVBHMEPXMFNVGQTYWMRLFUCBYBNQLKYJKFAISKWVHZJHOGFGZGSJWYXVCNAVNHUDBQCZLXLEM");
    tmp_msg_1.lat = 0.423943084937;
    tmp_msg_1.lon = 0.710956583841;
    tmp_msg_1.alt = 0.0941563738022;
    tmp_msg_1.heading = 0.45235093052;
    tmp_msg_1.data.assign("YZCRAYVJPXHLCQROCTBWVEBOWDHADRPKKXSQXGVONQATWLSUHMDRIXQEAYMKIWFYYNSTUTNUONCVBDYAMIKULQVJDJLNILKPFZNPXHCDBNMFGIWSAEZJOFUSUUVHPYBSLIPVHQKJNUVRKPBIYJEFAPZWCEHQGCCGXGDVODVOABIFTAEG");
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
    msg.setTimeStamp(0.724306117398);
    msg.setSource(59265U);
    msg.setSourceEntity(30U);
    msg.setDestination(32781U);
    msg.setDestinationEntity(29U);
    msg.source_man.assign("NPBADPCQNYYHPSDOYEWQPBPLZZUEMZTRKQOFXKKOBVVYWVKTYAKSTMUSPJCXSIZUMDBJGPLMIXWKWAEIHKMHSSGLTFFNVVMQCLOFJZMPQAUUEBHCYZCCOEJIKCOXNXNRQLWDTFRFBYMNIOTDXVNWESWRAISHIMQJUTFGELPGARWOZAEGGGTJGTBXQLHUN");
    msg.dest_man.assign("RARUCZAWETMADHAXEZHOJEVWNNKPSTWWADXUPJQEQ");
    msg.conditions.assign("FLJPSREIAHIRRFEURBFLUNONPUKSJZVSXICXMYGNIERHDQGVYCVZJUIKFGLQQZLULWXWXJCWXIWTKGLTWTDPGSHMYAERQAVABVTAMBZNOWPZTWGUUMMCSPBCZDLXXXTHPQKTTZIKKO");

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
    msg.setTimeStamp(0.0852871337333);
    msg.setSource(7178U);
    msg.setSourceEntity(78U);
    msg.setDestination(41161U);
    msg.setDestinationEntity(248U);
    msg.source_man.assign("LGHWXFQVYVJXLCJSVHCZBNUQFWCCNYGLREBDUHOZTRSNCMGLURGINSNMEEWPMFMGIXMLUFYDXHEVDHYOMBVYAKJPDAYJODXURTTIKLZWZGOUTEXEBTTZEQPRKTMQLIXSBPNGFAJQDJWUSPPYE");
    msg.dest_man.assign("SIZVHIFUARJXFLWTXPJWEXVUXRDUHVSMDGKYMGFMHTMQNNSCPTCNBJWBKMXBLCOGIWFAFEHLSJZRPOUFQFXSNWPYZZDPGWTJRAASJVRNXLNKWVHIJGEPTACKLTYGDQBPLYUDKUYVEFPTQIALKTBDPSIQEGNRZKZFATZNQMCKOBACMELEHRUNSRDKBSZRD");
    msg.conditions.assign("SLBNOYUMVBTQAOHNSJPKCAZQZZTTGVKXAEAJGTFVFIUCECMGCMCXQYONVBAGSEOJGQLOHXWOHYSIXLIEYKTPDQLUQLZRRZNENUJKZLSKMZFDHYVXWFGNDGRNKKUFBKRWDECBJUNMOJIAQVFCPGPPHDTRDADEBPLQIAXJCUEFY");

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
    msg.setTimeStamp(0.887653813704);
    msg.setSource(31278U);
    msg.setSourceEntity(196U);
    msg.setDestination(5831U);
    msg.setDestinationEntity(125U);
    msg.source_man.assign("RBJFQAQLDVRFCMPZFHOBKPFMSBUFXEMRLTEDLNWVEHEYTIEYAZITLLOSCYBGUZPJJJHTCDIHGNPSODCURASANXUFBQVQUZVQFXRWBRKVMVOYFOLTWSYIAANITJQUQRZJAXQZMQVUKGOWESSEVFHABUCLHDKJWBPKHGKVQTRSWBYDIGLWITKMOYYXSDEPMIGMHLPXPNCCZXMOHOCGKDNUEJUTHPNPAZIWMOJKACDLIGNXZWRWFYSBXC");
    msg.dest_man.assign("XZEFOMCXHXLBHXSNUJDWEQNRLZKPQBYVSKBBOHWRXGOBWZJEUOTBREOUHCUJUAVFXAIDLWRPLBJCTBWLJMQTCDLIKSKPTCHEZHCFYSCITLGQCSXSDUPKYAMEYEYOVINXTRYWGRJVBHPKEVHMQBNFZLOMPDGIOCSZASMVZKMPNAFHGOGWQTJMGOYIVANKTFAZGTQXSWEDUGPIFVMYVQRNVTRGDNJLIAAFYSYIFDILDJRPEQQUWCURHUJKF");
    msg.conditions.assign("YGYVLTUHUUCEEOGTREYTGBDOSOVSRBDYPRBQLWHSIKJALCNRLZVZIFECNHCUIFQJFJEGBBXNXYDYAGUJJQCWFPCWDQTLSNZVKJRFKWSFDPMMIZURTZAPELRDYSNFXFPXAXPKWXTHTRAUJMZVOIGOAKABECWJNZWHHLBDCLSGZTPMIVTIVYXVIEMBRGDOEOWPVAMJSKIPLIMPKMZ");

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
    msg.setTimeStamp(0.259124043214);
    msg.setSource(29651U);
    msg.setSourceEntity(156U);
    msg.setDestination(36216U);
    msg.setDestinationEntity(54U);
    msg.command = 120U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BPJXSWQYMCCNQMRFY");
    tmp_msg_0.description.assign("KHGMVEWASEYURLFDTESUGRYIPQMKIWWDIBTOMKXFRTYZPNEPXFHAVUHKZOCNHJXKNXKOHTPUUGXLIFRHZRNAVJXNDXVEGFZADBREZWJOCYPMCSWCLNBOOWQJUPWBBFSQKHENCLNTLYQJVJCJGIBDMZJBNBLTFZIGBUOLQHESQRADNSSGQJEQHWPIFLPLVWOXKYQPMMKXVAKCSQIAYGAZOTT");
    tmp_msg_0.vnamespace.assign("XCBDMHXELXBPUGHDEYQAIYKAOYOATHMNXSVTDKUMQJAWEENZICXUSRDDRRVWERHJBEPVPGCUUOKDKAROFUIVJVFNQNQOLSHBFTRBCLVKFBTBCPHFZJMWNSPIROKICIKKSNXMWUQLHUPXDGGMMSONOZGQLOTZITZGZZNWTFWCVGBNQAGNEHZVXJXXJPWIYARVJLDYLSYHVKBREKMPYWAJUISQGFHYGR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MZPDYLRSUTMBGFCROEQXXQUTGKJMZDG");
    tmp_tmp_msg_0_0.value.assign("LZJQGFMWIUBUKFNDJNLOSXAAGPPQQEVMZWGOZEBEWCFFCINWNVKDZTJHAHOYEDTFATHAKSSIQDVKHKDUTBYNWVIFMEVORJYYHYAWBIPUPEMWEXOTCUPXDXXNGLQSYVVDTYRDVKTDNOGNEJXRYZSTWLKIBIRUTKCNRWFBUOBZIPFVPGZIAKRBCRBMSYXQYWLGDCPAFCHCEZJHSLXOQTRRALJMGCFMSG");
    tmp_tmp_msg_0_0.type = 77U;
    tmp_tmp_msg_0_0.access = 75U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YFIJNNFZIODUZKCCVVVMTQVOEDNFGRLRSONCJSZCRLMBXMDXQHWGWSSPKWYIQEGDMQNXXSUEWUOSCCAHAHPEHGBZEAKVJFLHLKHXIGNWZTACAQRAJXPGSAVPPRSZUZCYDLICUOEJFMAYTDIVSJHFIZGPTYODOYBUTBLTAJFNOKBPBFXEZTQMQBEYNMVHEPDRRKJTIWLUTLKUJDPIMXRTWGOGBWQNEVYYQWLQAFIHXXVUSYKWMRJKLRFH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RUBOPWKCHTZAQRQLTPQDVMKYHADSWKZJFSGPGQECLSCEXDYFWTWDKFRNNRTQQNOTAASBHDHNXIJGBEVHEGLSIXMFIURMTWAOVCVXYLMNGXVEQJDMOHRIZJPFPRIMUOIBCHOLFOFWHBDKKUTZQJYDRUPGTAKPLZHMLSBWPKPOVIVOOZCNXUUVYYMGJEEZGDUKYRZWNSEAXDZXSJ");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.488950092144;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.300659467938;
    tmp_tmp_tmp_msg_0_1_0.z = 0.127546167089;
    tmp_tmp_tmp_msg_0_1_0.z_units = 233U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.203935554107;
    tmp_tmp_tmp_msg_0_1_0.duration = 12645U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.132282858781;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 141U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZCQRWIESPRRRVPDAFVNYWWWPUZDXOWXZNTTPQTVDKHBRNPFNXVAHGKXIEQJMYBEBUVPXGCDWCOYLTOCWWEAGLRBFBSMEKTCFQZMJKKMIIXBXRGHCNSZDHAVIYJJLLNZAIJTEFBKDCOKNQGYVZLHNLMOLSWGKUUVRQAPIFVHHUDZJHFUBENDCOHQQO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ReportedState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.75095552245;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.770800046742;
    tmp_tmp_tmp_msg_0_1_1.depth = 0.47720311221;
    tmp_tmp_tmp_msg_0_1_1.roll = 0.336979334106;
    tmp_tmp_tmp_msg_0_1_1.pitch = 0.179822230695;
    tmp_tmp_tmp_msg_0_1_1.yaw = 0.631368813004;
    tmp_tmp_tmp_msg_0_1_1.rcp_time = 0.0202285629225;
    tmp_tmp_tmp_msg_0_1_1.sid.assign("UMMPVTVEEPGMQARBISZRPE");
    tmp_tmp_tmp_msg_0_1_1.s_type = 75U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Announce tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sys_name.assign("WTRMJHTXNNCOMYYGWZFTABNWRDZHWHJFSLGXTPKWKUKPKAAZEOQSVWCTEJXBYETQHMNFDDIDAIJNXPHYJKPDKVDSFQO");
    tmp_tmp_msg_0_2.sys_type = 113U;
    tmp_tmp_msg_0_2.owner = 47292U;
    tmp_tmp_msg_0_2.lat = 0.309213135375;
    tmp_tmp_msg_0_2.lon = 0.989691781861;
    tmp_tmp_msg_0_2.height = 0.326710956873;
    tmp_tmp_msg_0_2.services.assign("FVSHIBCJXBYFNAXRWOPBGBDBTQKFQEFTCLSVDWALWSTWBPIIKZMJKXXGNDQCMOFNHCDFGGGURQUSNPHCDEAMLDHEUWKWPIVJIZIZPYVYQAVDOQDLWRANHCJTJCPIGJMPKMRBDRMTGVZQOUHNLTSFZIZELSKWKPVKCBETVH");
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
    msg.setTimeStamp(0.930141631646);
    msg.setSource(36937U);
    msg.setSourceEntity(101U);
    msg.setDestination(3949U);
    msg.setDestinationEntity(55U);
    msg.command = 63U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OMUNWFFYYNZLDZMLBBNMJXKIWADBPARWMXVCKQTLUBMOTPJZLUWZBGIGCPHQYFOTNRBASCUEKATXXQCONVEWVPEEIYOGVERJERSYREAFGEMKUKGHZIT");
    tmp_msg_0.description.assign("LCRSPFGSWCOUYIWQKYZJJTQFJJRJXZHCXZDDSHPMNWGAEBMXEEUZELFHEKZSVRBRPVXZMXHGJNGVUHKTQQWQYUABIZUQORKRMZKXEOORDOQETFJGCIJMWGWVBFPWNGAUBPCVMBOHKUNADYVZOUXBKOXUMSRNZIATRTWIHQPWINCDDLFY");
    tmp_msg_0.vnamespace.assign("LBZOTDYXDSEPUYYJRVQWFUCQIATFBDVCNJWOGZYABVZEMDHIPVGVQQWHKFJIRUVRWZXEUQFKQFTXVNRGVHOEIKHPWUBNGHAAMXAYALXDNATM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XVUTWKLNALQVQHXNYTEZSL");
    tmp_tmp_msg_0_0.value.assign("WBCKOXLNYZYEWXTKPGQFIKFARVMNRKRDRQZUXKORPHJPCQGUYFXTTTBSDJVAINOESQAMEREBZXDTHONRHDQCJSDUVUVNUTYFWCYVMKMQWISOWLBGZBNPRYWPZSWGPOHLGCLLXKSBSLEHBPFLYHCPQANKFZMAQZ");
    tmp_tmp_msg_0_0.type = 174U;
    tmp_tmp_msg_0_0.access = 71U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YGBGCLVOQZNRBPHSPXALTDHXULMXGPEEDKTPE");
    IMC::ButtonEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.button = 93U;
    tmp_tmp_msg_0_1.value = 114U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsFixRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.utc_time = 0.679997855405;
    tmp_tmp_msg_0_2.reason = 146U;
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
    msg.setTimeStamp(0.659163442065);
    msg.setSource(64084U);
    msg.setSourceEntity(30U);
    msg.setDestination(13717U);
    msg.setDestinationEntity(99U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OKOCFDVZIFHIMXBVBKAMECWCTDJ");
    tmp_msg_0.description.assign("MAIFIIKPJPSGPLCAIMUIXSXAYFLPWFGKWSOLHZYKVMQDGHKZTCGSQXYUMNTTFSSESRZLUOOZMBAULWVYMFFUTWCTQWCDEYGAUVRHCOQRPRLOVIVDTDYOXBYCJOARHNRHNQVECBOKEYUKGBWBXVPBCPKIAOABNZUYAEQQDZNZNCJBEZGTHLZWDVHLPIHSFEWUZCMQKDQDPMNWYABGDJRRIBFNFTJIVXQHNKDXWPRLJEK");
    tmp_msg_0.vnamespace.assign("BBZODNDQOLCSGXHOQKOMGHQASNGFKUCIBYVTJSHLACTGQATZYPVJDLIFNVDJYATKSFRCRLGIZYRYBPXCWTHJJSCGRXXHXMIBVIMNNLOKYPTEZRVKBQGMGEWOBZMHKEDLUTZUFISVQPFJPJQVQPFMJNLZFK");
    tmp_msg_0.start_man_id.assign("EACREKHRQPYFTQTXUZFMQVCXMSVOJXBWAPXUMSZLQNDUCRYKLYHEFOQKSFPNOMRHWFLMBNPXGJIPBWUZCNVJDVZRNDDMSXQLBDGJZHOPOKCVQIODUBNPVSAAQRVMGYBDLHOGTSWIETLGKFUFAJZJGTYTCLRKEJCEMQXWHUNJFTCXGLSXOVBHPYHWVTYSKRABIHJAOADIBRWMSXZPDSUKIILELRGEYJENUIMTFVWYFWZDBQW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UNIUYBATFTHNBVMBWRBYTXXDSFMZRAXKCOSHETLWAB");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.212893519805;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.638667476753;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.41570967314;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 232U;
    tmp_tmp_tmp_msg_0_0_0.duration = 51839U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 57750U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 6450U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.669375366262;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LblRangeAcceptance tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 131U;
    tmp_tmp_tmp_msg_0_0_1.range = 0.716897608823;
    tmp_tmp_tmp_msg_0_0_1.acceptance = 183U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZIYYKTQXKZGUYWJGWOZPBQWTMAFWBFOPPXHGPYWSGPECEIWHRPNAJKVJNPZHUISFLNDLVTXIAUW");
    tmp_tmp_msg_0_1.dest_man.assign("YIIQUIFNOAHOOHMHQUMSMTXKMKYFDEWZAJGAQPCVMTJEBZNQPJGCWCNDPGNMAUXRBCHXAMEKSOWTFKJNHCJUNPDKNFTEVRRSYIBLVEZPLFAQMGJLYLQFJJPCFAHZNZEDLVORXIVVUBSHELZSBWMYIDPBBHQRHUWIFICDMCARNQZGQLOOWOTSBPRRSZTDTLBYXDVKUKWPTXGFW");
    tmp_tmp_msg_0_1.conditions.assign("EBYCCLQAHVOZILGIHBAGDUASFTKX");
    IMC::PowerChannelState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("WYTVPGKPPKCRQTLHGKFJFWSKLQBUPKCGAJNSCDPERDVDYSGIXIYLSONLHXFFKOWXNTTQTMZKMIULQORDDYRZHQHTLVPVNIVEMGBJZEUEXOAGKOORMTBTYHHVRERHABLNNJGXGYTMOICSBX");
    tmp_tmp_tmp_msg_0_1_0.state = 128U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredPath tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.start_lat = 0.0355147169657;
    tmp_tmp_msg_0_2.start_lon = 0.812278079465;
    tmp_tmp_msg_0_2.start_z = 0.931857711101;
    tmp_tmp_msg_0_2.start_z_units = 158U;
    tmp_tmp_msg_0_2.end_lat = 0.336410380189;
    tmp_tmp_msg_0_2.end_lon = 0.175778536455;
    tmp_tmp_msg_0_2.end_z = 0.668410598401;
    tmp_tmp_msg_0_2.end_z_units = 56U;
    tmp_tmp_msg_0_2.speed = 0.53937712037;
    tmp_tmp_msg_0_2.speed_units = 119U;
    tmp_tmp_msg_0_2.lradius = 0.500042430302;
    tmp_tmp_msg_0_2.flags = 106U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::MapPoint tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.000588600156527;
    tmp_tmp_msg_0_3.lon = 0.836512857975;
    tmp_tmp_msg_0_3.alt = 0.166561096617;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.42803048073);
    msg.setSource(23840U);
    msg.setSourceEntity(60U);
    msg.setDestination(51998U);
    msg.setDestinationEntity(32U);
    msg.state = 234U;
    msg.plan_id.assign("FKEOBEIVMTQYBHDQOYLBUNHSDXSFYNIRXMSBDTGUMBRHSVAGDNFNCLYPYUJXSVCFHUQBEIPAJLYTXPQVVAMIZQHGQFGDVDSZAVGHXBEDPKVKKJNWOCJOSDQZKBERTMLWPIQQFKVNJRGIZEVCYHYKEJCFLYSWZMNMPARTGJUEDILHAWQM");
    msg.comm_level = 99U;

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
    msg.setTimeStamp(0.637210646911);
    msg.setSource(58873U);
    msg.setSourceEntity(58U);
    msg.setDestination(2508U);
    msg.setDestinationEntity(79U);
    msg.state = 213U;
    msg.plan_id.assign("BQRICKVTHITMUBRPUZRQKXCMIIOIYMTYHMVNDQYFFXBZILJMESPPDLZCBQZEXDCAIBWCZKWLZWHHFSLPDYAMCPJYAXWUFHCWLVSGNDULKJGRPYTFJQNDFSQOECCBULEZUDRDMPACNKSAXFRDWKUPFKYJIQAVTKGPZNWSX");
    msg.comm_level = 194U;

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
    msg.setTimeStamp(0.799730031347);
    msg.setSource(36283U);
    msg.setSourceEntity(128U);
    msg.setDestination(14753U);
    msg.setDestinationEntity(224U);
    msg.state = 63U;
    msg.plan_id.assign("RIERTMDUYUGORDIBUCQSGRNTGBHFQJDWPGJNJHHUMVFKSMLXZDVVNRFNCWPYDXHQNPEITKXWDAZOCKKLHSLPGQSAEUCLQAETVSWAJVPBYLGZHVZFOFJAALXXFCSMRMJZRYQSKIHZCDBJEWGJKFMIASXOIQLPNYXHMJWLFKXUCYDBMWREGBPPDTARUTMAZOUGTOTNTOJSVAZYDYNOOIB");
    msg.comm_level = 198U;

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
    msg.setTimeStamp(0.89183344184);
    msg.setSource(59879U);
    msg.setSourceEntity(77U);
    msg.setDestination(22191U);
    msg.setDestinationEntity(184U);
    msg.type = 19U;
    msg.op = 33U;
    msg.request_id = 55460U;
    msg.plan_id.assign("AXUZBBAYLYTUTPXIIHSDPVFOAFXYUNZNRKZHTXOCXHMOVJQBBWOVNAFCOWICFORFDRPGNLXEYKGPWRZSDZUTKLRBVEUARMCGZWJHSADYPETLQBMDSLHQQCQRMZFEAG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NKXUAZAPLWSCSDBUKYIFARLXWDBEODTNWKFVONLUVB");
    tmp_msg_0.predicate.assign("OLZVADWBWBSMSWXNZQCHHMKMDJNPRJTKOGBJPEUWGYSVWIPMUUAJIWQYYBOAPUQKSZXJPUYMPCLXPOTTEHQZZSTUHMDVPISKXYOHAUDLSLCFNBUGIETHRFXELNENDFOTXDXIONXKEBJNIHQYVVWRFKSHRDFCRHBQNACALQUQFCOGKZTAMDTOKJJIMQJYVABLCNPCGTGAPBQWFMGWKYGADUEZCFFNRLYKERLMHRGWVZDYVTOIVISZRRJBZSX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QLGTKGWAYIVHFAKHUNCKLQDJXPNYDQRXAEAXOCQASSPFTDZCNBONNUOTUPWUYKXSWDRGZRJCKNVJTKFJIEPFFIHLUMJBIGVFCIXWAKCSLCZMVROWEYIQMNZPSLUUXEKRZLPAGAEMWLOLEVZIPDHDJRSCLVMONPTHFYFHRXXVRBSMWT");
    tmp_tmp_msg_0_0.attr_type = 63U;
    tmp_tmp_msg_0_0.min.assign("EAWGZJVKMYFHVNXDADKRCZHRRHAFRW");
    tmp_tmp_msg_0_0.max.assign("ZAHBEVTSXCQAFNBHZRQJZKCVQWTEPBLYGXGNVPFUDJWBHFJUPPCSZQSGPQCBDCVYERXKATJNULNRZWTAWRWUOLELFYNPGGETHBXRYDWXKPRMLMWWVMVOMYEMONRTLDOQCRTMAOBUWW");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AITAFOKPWIYWXJLGBLSZLQDUBSRPGKCDNVOIOUMNEQVKECPTOWLYJAJF");

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
    msg.setTimeStamp(0.566904058851);
    msg.setSource(15786U);
    msg.setSourceEntity(170U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(239U);
    msg.type = 156U;
    msg.op = 246U;
    msg.request_id = 44905U;
    msg.plan_id.assign("DEYBVKHROBHTCWBEUVSBZRBNLQTGSVWUNLFWMEVLZDNJDWZODPNZKUNQRCGIIOYEODUDXYRILMFPTGLTGXHQAI");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.432992799881;
    tmp_msg_0.y = 0.168445909099;
    tmp_msg_0.z = 0.590648938349;
    tmp_msg_0.k = 0.0363938580793;
    tmp_msg_0.m = 0.0912299436573;
    tmp_msg_0.n = 0.911767090956;
    tmp_msg_0.flags = 40U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XGGRUQMGIJPCCKXFQGWURBNWEEXIKCDHHUSQSVTGGSCQBEAFBBPVFDHOLYAPRKFVMKSNCPXZYWQCCNJVZTVMERRICOTNOLOIZTUZGNS");

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
    msg.setTimeStamp(0.248375305364);
    msg.setSource(23597U);
    msg.setSourceEntity(236U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(160U);
    msg.type = 163U;
    msg.op = 97U;
    msg.request_id = 37707U;
    msg.plan_id.assign("OTQZPQERRCMNYQPIWMNQPVBAEMBOFPCCCXKKGXOOJSIMCDUXD");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("UTGFFBKGHAYLDEGSAYYSEABXJKEJNXIPCDMMHITZXRDPTWLFTIQTNBMPRONEYTXULEWZJSJROEKCBENIZFWLFVQQMROANGJGZQGOLXSJJH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FWAHSZEVFWEZIVIMBPZCPSLANCOFEOHQFUIWF");

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
    msg.setTimeStamp(0.553697397641);
    msg.setSource(52705U);
    msg.setSourceEntity(124U);
    msg.setDestination(9241U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 52006U;
    msg.plan_size = 778727339U;
    msg.change_time = 0.153699694686;
    msg.change_sid = 54039U;
    msg.change_sname.assign("OXRAQZCIPIERQTTWWMPMXOGJGZCBEXJUGTVTNKUVVGAJYSYGDWCFPEPEBSAVKBQOFFENJLDRRMVDNCIVZRYODYUFEIOLEBYPPWMMMCUHNUZEOZIKSJBBIBJVAVBQRGPWLLTYINDVQGBUKXWHTYCFGTNZXDONAHOSZZUTDXSWYEJMAMJCNFKAUCQMSHUDRDTIYWXIGLFKHQLOKWFAZHURTILZFAPXEYPHXWKQGXSRHCMSDQNBHVOJ");
    const char tmp_msg_0[] = {126, 33, 12, 124, -58, 49, -34, 105, 36, -95, -30, -124, -85, 91, 19, 117, -53, 13, -81, 48, -123, -84, -111, -15, 94, 87, -45, 123, 57, -85, 6, 2, -128, -102, 24, 106, 79, 66, 3, 34, -78, 7, -127, 31, -71, 50, -120, 123, 33, -114, -92, 23, 57, 20, -54, 50};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SXXMJKOTYKNPZQPTNKHCVOKMCGQHUYGOXAXMUMQOMEKBDOLBKJTZMYLQDNHRLIFYFDBVWWIVUDAWGFAPZIASITDHDQZCCZJWS");
    tmp_msg_1.plan_size = 29341U;
    tmp_msg_1.change_time = 0.120427145631;
    tmp_msg_1.change_sid = 258U;
    tmp_msg_1.change_sname.assign("PYLYHABMYZNGXRHKZGGQPCPEJUBOMIQVTCEUUJGGKEHCUXTTFQHBVIQDCQOGDTESVKWOQDVRKFCRKARZKCGZCZLFRCONGVLUMDCZXTWWNRMPALZJOJIYNWFSYLQLKSGFXE");
    const char tmp_tmp_msg_1_0[] = {96, -97, 125, -97, 101, 25, -47, -30, -73, -31, -3, -52, -63, 115, 39, -92, -53, -31, 5, 46, -35, -107, -113, -92, 62, -16, 81, -15, -73, 47, -98, -100, -5, -29, -39, -32, -93, 110, -19, -5, -69, -62, -123, -1, -82, 64, 92, -69, 12, 90, 78, 67, -116, -123, 104, 59, 22, -37, -112, 11, -61, 58, -34, 74, -101, 113, -55, -27, -17, -3, 44, -79, 82, -37, 123, 47, 95, 72, -115, 47, -64, -39, -60, 15, -16, -63, 0, -51, 124, 45, 115, -39, -54, -30, 117, 117, -31, 8, 67, -83, -66, 17, -29, 78, 110, -84, 30, -100, 6, -107, -76, 112, 94, 71, 19, 66, -16, -71, -121, -103, -81, 73, -10, -79, 82, -86, -43, 79, 87, -51, 86, -85, 37, 120, -34, -47, -125, 78, -3, 48, 81, -32, 93, 26, -9, -72, -128, 105, -7, 24, 83, 93, -80, -63, -81, 104, 7, 94, 102, 22, -41, -69, 15, -3, 10, -87, 25, -96, -94, 125, -2, 73, 25, 75, 8, 1};
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
    msg.setTimeStamp(0.514775136416);
    msg.setSource(29249U);
    msg.setSourceEntity(197U);
    msg.setDestination(14254U);
    msg.setDestinationEntity(171U);
    msg.plan_count = 33050U;
    msg.plan_size = 4088669892U;
    msg.change_time = 0.617145014958;
    msg.change_sid = 31559U;
    msg.change_sname.assign("KYQJGLTPXMFFNFDOSVNUFMXRTJWCVDMDRBYIJZHKPZVRDQJEPNIWNXWWEDCIZAALHKLBWFEGMFPEIBSCCQKMENIVBCRJHOJBYUBBMUUOHR");
    const char tmp_msg_0[] = {76, 59, 68, 9, -126, 66, -24, -29, 90, -67, 25, -102, 99, -49, -63, 91, -88, 125, -42, 54, 119, -128, -37, -125, -43, 70, -28, -77, 76, -108, -24, 78, -24, 44, 8, -123, -32, -118, -76, 71, -88, -37, -123, 91, 72, -81, -123, 104, -49, -60, -6, 72, 114, -25, -13, 3, 97, -51, -124, 54, 9, -23, -109, -40, -52, 63, -117, -48, -27, 38, -41, 113, 100, 9, -75, -26, -121, 78, 70, -96, -52, 126};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XEVTIQHCLAHGTYDJBJUBRGVUMXPOZYWBHWGLMAUFBXMNZCVWSVIPDXVCGZTTHSWDXQLMVLQDWAJOOQLRARVSCOJGZPJXVRFQBHTLLXFEWRBWSIYLGEXDUFDPKOYVRENQKUOAIWRSTRPKXPYQZNGCQQFCEZTUDERENVKZSQYFKNY");
    tmp_msg_1.plan_size = 13590U;
    tmp_msg_1.change_time = 0.83678881514;
    tmp_msg_1.change_sid = 37874U;
    tmp_msg_1.change_sname.assign("OTNACLIYKCQBFFFYLLJMJCPKAZFJGYOGGIZST");
    const char tmp_tmp_msg_1_0[] = {115, -95, 46, -58, 8, -104, -118, 74, -9, 69, -99, -30, 72, -32, 42, 110, 76, 32, -66, -44, 62, -24, -62, -20, -52, -95, 110, -15, 99, -115, 105, 22, -26, -101, -53, -22, -79, -58, -9, 3, -28, 5, 1, 41, -79, 34, 77, 98, 79, -102, 119, 42, -47, -3, -60, -45, -31, 39, -98, -12, -24, -74, -4, -92, 34, -52, 24, -61, -90, -11, -70, 94, 124, 12, 97, -78, 67, -48, -89, 69, -7, 92, 27, 96, -38, -78, 100, 118, -71, 52, 80, -99, 31, -120, 42, -13, -88, -93, -13, 32, -19, 112, -66, 48, -21, -116, -11, -54, -80, 26, 114, 0, -5, 57, 50, -112, -83, -73, 31, 91, -102, -82, 39, -3, 10, 62, -111, -37, -128, -35, 18, -7, -66, -23, -115, -5, -124, 121, 28, -104, 17, 41, 52, -28, -73, -91, 31, -56, -103, 101, 37, 72, 74, 35, -117, -66, 43, -31, 88, -6, -29, -116, 21, 73, -128, -116, 113, 61, -54, 78, 43, -57, 31, 32, -110, 78, -103, 5, 53, -124, 3};
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
    msg.setTimeStamp(0.376821266929);
    msg.setSource(11635U);
    msg.setSourceEntity(185U);
    msg.setDestination(45412U);
    msg.setDestinationEntity(176U);
    msg.plan_count = 24190U;
    msg.plan_size = 3255013609U;
    msg.change_time = 0.261447355942;
    msg.change_sid = 64793U;
    msg.change_sname.assign("RAVSPXBCZGUYIIVNSHSNKVKVHBFBZDILRLOOBLPDHWZPKFQQSTWWXDTIRRZSCQBKAMNTAGYDMIPCEHGCYIFQREWMXVHQJDSHQENJZ");
    const char tmp_msg_0[] = {59, 122, -16, -58, -47, -73, -94, 105, 33, -40, 30, 31, -119, -6, -123, 122, 92, -36, -117, -11, -123, 15, -122, -40, 34, -53, 97, 42, 121, -110, 114, 4, -84, -19, -5, -29, -10, 56, 28, -6, 66, -54, -19, -18, -53, 25, 19, 111, 71, -77, 80, 47, -62, 119, -55, 51, -57, 25, 97, 5, -121, 43, 122, 114, 66, 54, -124, -111, 108, -49, -37, 74, 26, 42, 118, -61, -57, -23, 61, -119, 24, 13, 121, -61, -56, 22, 85, 13, 66, -75, 69, -79, 59, -19, 10, 108, -22, 84, 72, -128, -101, -15, -85, -16, 9, -85, 53, 7, 66, 45, 31, -57, 102, -1, 25, 38, 66, 14, -118, -98, -91, -88, 73, 9, -8, 98, 20, -90, -90, -86, -35, -89, 40, -37, -78, 10, 81, 72, 90, -84, 72, 50, -78, 80, -96, 116, -35, -124, 36, -105, -95, -28, 121, 58, 3, -67, -102, -78, 39};
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
    msg.setTimeStamp(0.117468988622);
    msg.setSource(19318U);
    msg.setSourceEntity(92U);
    msg.setDestination(24134U);
    msg.setDestinationEntity(27U);
    msg.plan_id.assign("DFYLQDRZYXHSLJGEAPHYCUSMWLKBIUFXZQEJBGCFESVABCOBYEGDNGLMMDHUDA");
    msg.plan_size = 13880U;
    msg.change_time = 0.295303920986;
    msg.change_sid = 56871U;
    msg.change_sname.assign("KENSBMOUSGU");
    const char tmp_msg_0[] = {-79, 93, 1, 50, 50, -71, 85, -1, -42, -86, -116, -101, -87, -17, 8, -63, 114, -71, -106, 80, -40, -61, -42, -125, 48, -65, -57, -20, -95, -12, -41, 92, -91, 115, 14, 52, 5, -91, 118, -24, 113, 115, 59, -29, -43, -9, -11, 10, -124, 28, 82, -73, -9, 9, 13, 115, -128, -88, 34, -57, -69, 91, 35, -31, -66, -86, -16, -127, -88, -38, 79, 57, -63, 29, 37, 38, -32, 7, 54, -105, 115, -61, -49, 51, 65, 71, -67, -14, -4, -77, -127, -43, -87, -82, -109, -79, -26, 89, 57, -111, -3, -68, -1, 48, -50, 30, -66, -118, 120, 33, -80, 104, -75, -6, -125, -84, -5, 51, 29, -112, 12, 99, -99, 13, 38, -20, 112, -35, -101, -34, 103, 101, 30, -62, -10, 99, -104, -65, -111, 41, -60, 63, 46, 108, 34, -55, 11, 62, -8, 25, -89, -25, 112, -11, 85, -125, -33, 39, 0, -41, -69, -61, 114, -122, 19};
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
    msg.setTimeStamp(0.532445185767);
    msg.setSource(50878U);
    msg.setSourceEntity(135U);
    msg.setDestination(46941U);
    msg.setDestinationEntity(169U);
    msg.plan_id.assign("DRAVSKNTMPFLJQXBFKHXCHFTAMLBLHEEWNVGOUGXDAFGNNLAXFMKTBLJTZEGNPPJUGIHWCXPPSQSRRMWAYMBYUZIXZVAQHXLWLEUPCOMFZMRCIGVIOZDSPTCKGYEHZJCHTNWEWHNIELYLEDFXJQBRDERYTURBJZZTKFKSBEUPMXAVJIJADYQSWGPJMBICHKSUGBMQAULFJ");
    msg.plan_size = 48840U;
    msg.change_time = 0.414984624289;
    msg.change_sid = 56794U;
    msg.change_sname.assign("EIBRAXEJVYAVRECOSZFLDLCZQVLSOQQMIK");
    const char tmp_msg_0[] = {-8, 54, -123, -56, -20, -59, -41, -96, 95, -52, 84, -1, 105, 100, 126, -48, 35, -85, -9, 104, -42, 34, -37, 15, -86, 29, -43, 83, -104, -48, -128, -123, 21, 9, 47, -4, 9, -87, 101, -58, 6, -17, 38, -62, 61, -34, 5};
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
    msg.setTimeStamp(0.717117724866);
    msg.setSource(3216U);
    msg.setSourceEntity(107U);
    msg.setDestination(36449U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("ZGBHVTVXGPTZBZJXMNYRJNVNQTKLHGHKCZOBLHCGJYYQTRUSJYLFOVVQASGUUUJTKOWHHUVKCWRCMRIGAFBZMFUHZDZEDUPXFZGKYBCKGFEADVJSLCIFWPPJPMXKPOEERAZIXLZIBFDAXTAMPDPSANBTYWENSBHIIKIJSAOQSNPYWJXNNOHNERWVQDQRVWSKQI");
    msg.plan_size = 8212U;
    msg.change_time = 0.886474984592;
    msg.change_sid = 30821U;
    msg.change_sname.assign("NPCDVPHLTHCDOSRFGUGRCJTYAEHWQBBLQVGBEBKKKJBPUJXFCIPZYFGIWKCLQUBINAPVMLLTQJRHLOMDWZZVPTYCPRHZIWCFFALAZMSXVIXIWCGERSFSQRYKAVUQQOGARQNOSYXDQOTBFSWKXWKJZEDFNMFLCHDOKIWRNRKMXNOXQMJXOHPEVLZBUERUZIGMNCIALOMJHVYMGZSNTSEHVJXJBAPTWJDYVZYNEPTSTEMAFEGDYSUGKUNY");
    const char tmp_msg_0[] = {77, -76, 42, 38, 47, -115, 66, -34, -93, -109, -54, 110, 46, -61, 82, -78, -67, 57, -35, -26, 7, -30, -118, -27, 32, -28, 77, 121, -73, -40, -85, -99, -29, 90, -74, 22, 69, 2, 17, -116, -38, 86, -114, -50, -34, 105, -38, 117, -54, 25, 43, 95, -11, -71, 66, -96, 102, 22, -101, 0, 109, -101, -52, -77, -93, -106, 94, 29, -37, -100, -99, 71, 104, -65, -62, -121, 45, -78, -32, -14, -25, 121, -102, 75, 76, 30, -57, -17, 66, -51, -45, 121, 82, -10, 1, -34, 49, 105, 49, 79, -3, 116, -6, -80, -28, 116, -12, -63, 21, 119, -118, -84, 98, -14, 13, -20, -19, -110, -5, -127, 60, -30, -64, -7, 39, 125, 101, -7, -14, 29, 109, 6, -97, -128, 0, -62, 119, 63, 31, 23, -7, -4, -117, 13, -79, 115, -3, 114, -20, -4, -49, 108, -28, -4, 37, -62, -49, -35, 31, 95, -92};
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
    msg.setTimeStamp(0.893544150457);
    msg.setSource(25695U);
    msg.setSourceEntity(168U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(215U);
    msg.type = 97U;
    msg.op = 67U;
    msg.request_id = 21882U;
    msg.plan_id.assign("OEJGBIQAGZRPVEIOSNUQLACJGCLWKDSEQDHCPRFBLDRYNMRTOXPGAZNURZHHLWMHTKOLCIYUHTTHSYMBVPAZCJRJGIJWYDPXVDMPSSMXKROEUUUCXQPHXTIDNZQHEOZBIZWVEGTFGWSWWKDTZYCJTJUAUMVSYAONDCJDSNKBSAJFPGFRWGPDUYEIKOAQVFIOBTFQXKNALEP");
    msg.flags = 29511U;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.386773740238;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YSFSVBBDXQWNTIRQIIKGUWHVTQWDGLDVWFXYCVAOHHSTSRXECZRJEUUTZGYFEHEJQODMGIOQCFELQJCCFJPYSPDWJFANTOARLXFBORSMJSVRKCLZLKPMYPVUERIENDBCSAYOIMLDXVVHACAYGDGKPAXSKHAPZYHGDYIKZJPXMKTYWIKBVOWSZZWXGQUOLJMWGOCANUKONQIBUPXZHVNNEC");

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
    msg.setTimeStamp(0.939748665033);
    msg.setSource(24392U);
    msg.setSourceEntity(150U);
    msg.setDestination(56351U);
    msg.setDestinationEntity(172U);
    msg.type = 147U;
    msg.op = 163U;
    msg.request_id = 19613U;
    msg.plan_id.assign("SBVWHNAHMQARDHPLTPXNUGVBCMUAWZHWLRKGCSQPDE");
    msg.flags = 43424U;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("ZAJOPZWCIDLHLUIDUJEOECCKWTBWCSKVEPZREBKXTBXAUKNUWWBXQQWLNHCYSGSFLYPUQXBOXORFBNPSINYQRWUGGPLNKLZDMVJHPNORKTOIJZEXUSFCMIKGJMXKVYJQWHMXRUFOWCQKYDFLDBIBFZWJYVYBANEGDMMDASZQHGLEITCXD");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("HNSEXYRJOVEHBQDKYMARMQVCPCAUEQGVXCKQYSZEXJKZBHHJZNQCUGAFZCFSAREFAFJURFBLUAPPUSTANZJTFAIGVYJQQNCGVIISLATWNEXIKIDOOQDAKDEVXRVSTIHJSQCXBNSLFPDMLOXZTCPFPPMBOMZOMHCTHNRYDKLUUKRVHHNWUGLVYWFVYBBEJUPLMKN");
    tmp_tmp_msg_0_0.sys_type = 36U;
    tmp_tmp_msg_0_0.owner = 63538U;
    tmp_tmp_msg_0_0.lat = 0.70971765755;
    tmp_tmp_msg_0_0.lon = 0.24167087297;
    tmp_tmp_msg_0_0.height = 0.932709001567;
    tmp_tmp_msg_0_0.services.assign("RPXYRKCSXQYMIJNFPTYOVVMPGNBNCNOZOFQGRGYJHKHKLJBBRACQQVLHHQFKCCSVZZPUXAJVNTKFENOWQLPICZXVKZDFGVDUZIUCBLACKERBAZTAUMVRSGHPPBLGUSLEOVTAPLYWQWTHXQMHCJIPWZALGMJTJFBJYHLRJXDYYPZWEB");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QTHJIFEJAKWPBQZHBFWLOFAGCUKCDRIFFOZNHLZOPTVLGKOYMCSQZZXISVNTUMPYDTYFUPVBQBUTERIXGTHLHKOQORVXRXMWJBADATJOMDYRSCPIWXCALEGHSKQDMBFRPAWZKJVXKYHCYALMKPTRQCZYEZHWSXVYNEHKRMQLEZQUSCFVAGXOTRPNGWJDNILLJHYYWSBWJLEVXSIUSUNEVKCNEJDMDIA");

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
    msg.setTimeStamp(0.185451118476);
    msg.setSource(42971U);
    msg.setSourceEntity(150U);
    msg.setDestination(62273U);
    msg.setDestinationEntity(137U);
    msg.type = 31U;
    msg.op = 198U;
    msg.request_id = 6296U;
    msg.plan_id.assign("KJGPPNKCBMWLZXGYEVGPLHDRUO");
    msg.flags = 46895U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 24914U;
    tmp_msg_0.custom.assign("NDKFGTMBQFKCLBHMWOVDJVRXULIRJGEDFFSSPCRNPQSUBETJWWGEQLHHMSEBZNEROIMAUSTFUNMDRCNVGYIDYSHEOXMLNLHPLCYIZQIZNMTOOVQWZPXAUYAPGVUKRLDAKKNPZXJWXYLHPTBRXAHUFKJEZCPYHPKUSQGNZYJYTUOBCI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XXGTHCJKGYWIBKWYOYXWQOSFNMRQUVCQIWSOADBPGGAALKESXILYOUKFBAQWJULRRVOZMFFYPIKNIOJAAUJDZZDSBUFYLEPCCIIVNYGWGCMFGGQVVRNPXHJQQESTFXNRSRUNMYLEBJRWSCEYHAELXDEUKHX");

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
    msg.setTimeStamp(0.299333322519);
    msg.setSource(50039U);
    msg.setSourceEntity(32U);
    msg.setDestination(26360U);
    msg.setDestinationEntity(96U);
    msg.state = 197U;
    msg.plan_id.assign("ZHTXWDHLORRPBFNJYTLBDMPLKXBIGNCVCPSKWGKQDBDIYRXQPZMGJVETSFASM");
    msg.plan_eta = 53476619;
    msg.plan_progress = 0.0624367586334;
    msg.man_id.assign("TPVUALCGNOIOVTQWKNRHVJRPMCPFVSMUWENCOIRQIHZUETABFDSWMKAHVAYEZGYIGMCJZQNJQMKKTHGIUYXFMVZN");
    msg.man_type = 30677U;
    msg.man_eta = -331778093;
    msg.last_outcome = 131U;

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
    msg.setTimeStamp(0.879625473386);
    msg.setSource(118U);
    msg.setSourceEntity(5U);
    msg.setDestination(53720U);
    msg.setDestinationEntity(172U);
    msg.state = 185U;
    msg.plan_id.assign("ODRPSRHNCKAMCAGYKXBPFJYJTTGTYVHHFAFEBNEXUMPNLEWDKYQJLQLTXLKYQHZMDUGDUIZDTORXTSWCKPJNPEJNJTSMBVZELKCFFZKCVRYUFQWQICDZQFERIAUGHERSAMCIMUGFGWBMNSNMSCR");
    msg.plan_eta = -1014603019;
    msg.plan_progress = 0.997608360774;
    msg.man_id.assign("BTHRDIPWOTTAWASXVGRESORHGJBWVKSSEUXGUFZZFLQNCPIVOEHQYDBIMQUXAIWQUPKHQVNSPCMGXLIMCQTCNLCFTWVEI");
    msg.man_type = 61778U;
    msg.man_eta = 1427099845;
    msg.last_outcome = 177U;

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
    msg.setTimeStamp(0.914069905682);
    msg.setSource(39496U);
    msg.setSourceEntity(28U);
    msg.setDestination(55485U);
    msg.setDestinationEntity(42U);
    msg.state = 249U;
    msg.plan_id.assign("AMVXHYWFWERQEPMRJMYSZPFJXGYEHEYCZYKZRUPGMQFMSDCHKQOCTZWGLSMXTRMNJBAZAEWATZCAQQNRAABJLVKCUEUJIWZUVFJIQTEAJGXCEQXWLWOCIDYCVFSPVSGTCBFXBUGDWNIRDEBRGDLKSFZKRNUQSINOOXMOTHBGKIVXQNNNZPISUHLJHCLYTOV");
    msg.plan_eta = -1734699148;
    msg.plan_progress = 0.0645489406436;
    msg.man_id.assign("OGAJQLMIZOPGIKMSXXRVHYBJUCWMVDKRESS");
    msg.man_type = 38065U;
    msg.man_eta = -360314618;
    msg.last_outcome = 63U;

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
    msg.setTimeStamp(0.539788744991);
    msg.setSource(44164U);
    msg.setSourceEntity(156U);
    msg.setDestination(22176U);
    msg.setDestinationEntity(145U);
    msg.name.assign("BXCDMOFXIYNPSRDSLFNKRSVGUJWUVQDTORPRXDUHT");
    msg.value.assign("XSQADAFJIPDMZSDGIWPFVHUJKQKBSZGOXIRBWRQLXVLXUHOT");
    msg.type = 75U;
    msg.access = 12U;

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
    msg.setTimeStamp(0.673472590106);
    msg.setSource(53183U);
    msg.setSourceEntity(178U);
    msg.setDestination(33976U);
    msg.setDestinationEntity(141U);
    msg.name.assign("ARZISSMPWKUGSHBZWTLQIHJLNDXRDYOVCRUTZCHQVQOWIURQJFUEFXFIKXOUBFFSUCXDBJVKAWVABGNPSGXWNODDWRDAHLFVAIZAUA");
    msg.value.assign("EUPCNWMLTVIOWDUARVOHKBGWZYCXUSXFLLUEFFFRBSYUIADMTKHCQXFWMWPHGMHIJVVKIIEWZLJTAJPVARAAXRYCKNCOGETXCGHURDGUIBQQOQMKSPELJOIJXCBKQ");
    msg.type = 101U;
    msg.access = 184U;

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
    msg.setTimeStamp(0.466150948216);
    msg.setSource(11796U);
    msg.setSourceEntity(176U);
    msg.setDestination(16431U);
    msg.setDestinationEntity(58U);
    msg.name.assign("GOGJSVNLRZMLJTSZMVBOZITYJOXDRCOUCLDHGDTNGLKOPMFWXDZKBVFGWEBAKXECGINPQSUZLVDFWZLNKYHGCTKMVQBOBZIUJTGMAWMYFRHHAKNCTAPZNKXOPEHJNFBEGQAOSLCGEDFVFPAKCBUAPUUTEWQHCEATXEZYQYVXPJRTYBMIRSIPSRZPWU");
    msg.value.assign("XGOYNMQOKUDFJRKECTNOXYRXGFKEVLNTBTAJSYOBICTBGHG");
    msg.type = 156U;
    msg.access = 62U;

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
    msg.setTimeStamp(0.866229916526);
    msg.setSource(3027U);
    msg.setSourceEntity(106U);
    msg.setDestination(23707U);
    msg.setDestinationEntity(174U);
    msg.cmd = 242U;
    msg.op = 45U;
    msg.plan_id.assign("YRHYMOWYWGBLFCDGDGGTHMZSHNMKVVTKPZDEIJUJSXXWFSC");
    msg.params.assign("GTCCNUSEHSZNSMYMALBQZWRTQQL");

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
    msg.setTimeStamp(0.164416548837);
    msg.setSource(17517U);
    msg.setSourceEntity(38U);
    msg.setDestination(21360U);
    msg.setDestinationEntity(88U);
    msg.cmd = 12U;
    msg.op = 215U;
    msg.plan_id.assign("QYJBWLPLATUZLFVJBHPRPRMCLJJLGKSLEDHJXOAIOCVPVNPGTKMYMZQYXCDTOSFXYNVEVUECPCKGZVKMOPHOBUEQNPNWSWWCINREUQQE");
    msg.params.assign("KTHLPNQSZQYACYGMVPEGLJXNFVYSHKARAHRRSPYMGJQOVUSRMPXFPADKIKIJCTRUHFVFJCZDDXDALJLVGBGFTENWBQRFGQEZIKKLBY");

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
    msg.setTimeStamp(0.412697394429);
    msg.setSource(53622U);
    msg.setSourceEntity(136U);
    msg.setDestination(32251U);
    msg.setDestinationEntity(109U);
    msg.cmd = 185U;
    msg.op = 138U;
    msg.plan_id.assign("MXVGIEDBHLCJTZEUJDZIVALVDKSSENGMMPWNZMSROVDUSXEIIAAEEZXQJBCBGQKKDNKTNBJQMECAFVAWPUXFTYLMBIJZYJLRHWNCZZPIOULVBORGYQRHENY");
    msg.params.assign("WEEOADOMGNCULKBIORPFESARXJSZAPXUXSDHOFJ");

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
    msg.setTimeStamp(0.416447719215);
    msg.setSource(15110U);
    msg.setSourceEntity(214U);
    msg.setDestination(10255U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.617678221866;
    msg.lon = 0.538084904706;
    msg.depth = 0.0962004029906;
    msg.roll = 0.883137839855;
    msg.pitch = 0.478174482931;
    msg.yaw = 0.797531687668;
    msg.rcp_time = 0.436693700733;
    msg.sid.assign("UOLMTLAUZIGWSCCTWEKSUSLBBTQDKDRSZLYEOGDVEBFCYQCEMJXQWGNCOFPTPYTLNFKASWQJWNOQTKHLPJZXIIIQJNTZOA");
    msg.s_type = 180U;

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
    msg.setTimeStamp(0.943793160632);
    msg.setSource(8365U);
    msg.setSourceEntity(71U);
    msg.setDestination(31435U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.068594851589;
    msg.lon = 0.657430243304;
    msg.depth = 0.707415306878;
    msg.roll = 0.121405972957;
    msg.pitch = 0.856482261697;
    msg.yaw = 0.37587724186;
    msg.rcp_time = 0.703756822191;
    msg.sid.assign("NLBRMAIYCTUOWRWMKTXEUONBSEVAHRJFGQQAOQYXZMWJLEJRUBJQUQDNELJGOHVRPIXBHLITVLPPCYFFVFVGAKAWWXRCXCMJUXOQGYSDOOVIDIIGFQCZCZDSEHMWSEKCHPNENHFOOWBT");
    msg.s_type = 221U;

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
    msg.setTimeStamp(0.0724323472335);
    msg.setSource(60688U);
    msg.setSourceEntity(220U);
    msg.setDestination(44972U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.130914947184;
    msg.lon = 0.34336037359;
    msg.depth = 0.457503220266;
    msg.roll = 0.0468159341796;
    msg.pitch = 0.235895187406;
    msg.yaw = 0.44368968514;
    msg.rcp_time = 0.552358009285;
    msg.sid.assign("KZCRKTQKWNHCZZVXAMPHCAOVRGNNCOQVQXCYEOFEQPLTLUMBONCEHGZGKUYOIIDPSQILBLMMHMNDXRTNSPEQNTDEKDEGASWHISSDUPNFWJAYZUOJXKFEJUUMKGYVLHTGGTCMFPFSABDSEHPIJDKJMUYXPVAYT");
    msg.s_type = 212U;

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
    msg.setTimeStamp(0.182801181045);
    msg.setSource(15156U);
    msg.setSourceEntity(58U);
    msg.setDestination(31178U);
    msg.setDestinationEntity(132U);
    msg.id.assign("LQCZAKAUSHJNVHCOJDVCRYOMFBWMGJVZMJJHGYQBLBECPIZXPCMWQBUVEOYBDWQTTUZHQTVWBPXAMXWTSTEKDARLFGSYAASFUHBDJIPFIXIBFEHPYRCNDAMREZPXIYNJTKZVRTUOCGNEKUSEGYQXOKADAFKUHYLBJEIKLXZSUCMJIRNTNQOSGSJSWOZQWDQUGXNNCZXLPHGDLFMKKOMPVKCIZRQWYRUEL");
    msg.sensor_class.assign("IWMXKXCUIBDDSMJMPCQZLRFOGHRNHEOEQKRXIACPWKZUSVFXAYDGOHRGXRWXXJEZDLEHGLSVOFJNBIOVELWT");
    msg.lat = 0.128763191597;
    msg.lon = 0.63522099848;
    msg.alt = 0.320869897908;
    msg.heading = 0.581329309986;
    msg.data.assign("AWWRVWQIFCDGILXVDZOAGNSGALYHCSAQCSVIWDOMIXPORBRRCTIXBTDREEPBZKFEIUF");

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
    msg.setTimeStamp(0.625982837079);
    msg.setSource(13122U);
    msg.setSourceEntity(48U);
    msg.setDestination(55694U);
    msg.setDestinationEntity(213U);
    msg.id.assign("EOFCVKOTVLQBMOTDCFGJVMYVZGPEQJPPBNJNIUDABMKPYLCPKXWYFRALMAKYZBENLBQKUBHQHASUXAAGHCYSBEHUJLGKRERUXMWIQIWSHLRHHYGZLJYNXAASZPHOFSDOUREVFBFOTIXNVJVXDZTNPOTCLHGYQUWUCGXMRFYCTWIINGANEVQQRYRIJONWMBPXWSGFSHMAK");
    msg.sensor_class.assign("EDYYNWGLZGCJCOSGRVWNJODLVCGNYZLXVAYBYFZBDSYRBURSFXFMNPICKWYSRJMVTQBPMCSFDKNWRIOANQIHAVOAJHEJBJXFYPMHOUPQKWUGLUWENBAJ");
    msg.lat = 0.322802172398;
    msg.lon = 0.151257002436;
    msg.alt = 0.375664097831;
    msg.heading = 0.999457280324;
    msg.data.assign("TAJECOTHRPJJTNCHUBBCUVDHXOAGAQRVCVXKDMZJWZOOSXFLGXXPHWGQXAWORVBBGPJTELOYMUQUFJEZHDUIIODUOOILFURYSCNWKYNGBPDFJXWEMATSQQGARSZZJUN");

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
    msg.setTimeStamp(0.151953084021);
    msg.setSource(2586U);
    msg.setSourceEntity(44U);
    msg.setDestination(52678U);
    msg.setDestinationEntity(126U);
    msg.id.assign("YWSLGITCHCUNRESSUUDNYBPLRPDJVFNJKDHJTAWKWCDXZJWHUBPFSIFQSTEPCVUBMQTGPEYBNBERYLEQLOTRIIPPJFZBGQNHRIJFXKARBIWFEOUQBCLFHQHSAG");
    msg.sensor_class.assign("NAPLASJTPSXGDABQZENINKYQTWOGZPFJGEJPZBUHNCRYOIWNZHEEFHLKEGHKSTGSRPSPQOZLTCACHKGBXYIZVECMVKDXYEFMBWWBCAQTVBCYFPMOFBFJTTAGRHWWULQRUXXMVVNXUIJLDQLLSBNRMHOSUCCOIREGWITXUDKLQWHHPQSVKLRGMMIZTOYSVOIUVUONYFXADCKYJEUCRNDHJLJTYJDRKFYAZXDQSWARJVMKFWADIE");
    msg.lat = 0.308936205435;
    msg.lon = 0.759558444216;
    msg.alt = 0.590561041414;
    msg.heading = 0.776774603576;
    msg.data.assign("VSHLRISMYBTMFFWBRVPJAKEEVSEZQJONCAUPTEYXMIBBILDTHFOCQYUSZYKKBXTRQBCYFILLNENOFAGUIWRTADAZLIEUDVUWKLKJYLOIAKMJQOPECYSLYHDOZZWZNHJGZVQKSPXFCRXKRHFQWXODWEMRQGSOKOSJPRQXZBCNJLOUNPEDPDWWFSIGMNNPPLBGCGGUICBAMRWHYNXXRJVTZHMDAXXUVHTTBHQFCKANGJHQVDYAGVZIGWMUPDV");

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
    msg.setTimeStamp(0.452397429422);
    msg.setSource(47880U);
    msg.setSourceEntity(221U);
    msg.setDestination(12794U);
    msg.setDestinationEntity(53U);
    msg.id.assign("EFHYXXHUDCSPOHHVUCDCVLAYS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BNUESZFBQKMYOFUNSHVJPRTPGNQIWSKMGARMSTTZCFXJABUAJODXBTMYGLLEPVYPJOJHOWDXOHCQNCZXOPVJNNFESNDCZFRHUYCTIWVDCPVEJJMKVBSGDWPWLHSMFNLLVMTEXDQHHIBGKQQOWYQXEITAWFVAEDMKRQTLYJQXZFIRVXUHSCHMCUEUZQIKYZINAARTZYCMDXKUKGNIGZBDWRXLLCAPSULBO");
    tmp_msg_0.feature_type = 151U;
    tmp_msg_0.rgb_red = 151U;
    tmp_msg_0.rgb_green = 124U;
    tmp_msg_0.rgb_blue = 175U;
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
    msg.setTimeStamp(0.896995499518);
    msg.setSource(51120U);
    msg.setSourceEntity(69U);
    msg.setDestination(17969U);
    msg.setDestinationEntity(228U);
    msg.id.assign("JBVVCUMWWKBYOKNZOCTHAGKJZBDTRPLMYGUJSDYTHEFMMKTAPBRPSTORLOFSWQQUXOINDLYKVDPAFRPFEEAUEBHIEBVEJLJYVZZXSNWKZYNNDLSAQRGMTUFNDIGHVKCFSKGYOMZDCIXQSEHINTGORDLXAZNBRGGPHQNWXVCSMCKPJYWVXJHWGQUBUMPSICMIDPTJZNCVRXGAMX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PQDZRIQBNSGOQFIWPFESEOALUQBELAPXDYEZMOAFIWYNCVJWYUZXVXRLBNBD");
    tmp_msg_0.feature_type = 248U;
    tmp_msg_0.rgb_red = 100U;
    tmp_msg_0.rgb_green = 174U;
    tmp_msg_0.rgb_blue = 147U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.575972743861;
    tmp_tmp_msg_0_0.lon = 0.708860039595;
    tmp_tmp_msg_0_0.alt = 0.933863535874;
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
    msg.setTimeStamp(0.766819277987);
    msg.setSource(5507U);
    msg.setSourceEntity(197U);
    msg.setDestination(42894U);
    msg.setDestinationEntity(178U);
    msg.id.assign("UQUTIULJONFRTWJBWHNMGXHASVKYXFQPSPWZTABHDUGBRFJAVLQZFLNIWYERLIPZJLKBJMZBLMXLHBZJCSGHCAFSBGPRLQUEFESCCDPFUYUIKEDIOJUWPDOKAOFDAQZENGYKENXVYEKIBVSMVUYXCVHITCFGLVTXLCOHCHRWEV");

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
    msg.setTimeStamp(0.0724354265992);
    msg.setSource(61748U);
    msg.setSourceEntity(213U);
    msg.setDestination(44005U);
    msg.setDestinationEntity(53U);
    msg.id.assign("NHCJCZJNSEQCLJWQTDSFPLVMEJJQEYBHSAGRPWEPAQZLKPHGBCZROQTVXIURLQXIVOFGDYOTFBDNSER");
    msg.feature_type = 147U;
    msg.rgb_red = 226U;
    msg.rgb_green = 173U;
    msg.rgb_blue = 191U;

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
    msg.setTimeStamp(0.274422351455);
    msg.setSource(11420U);
    msg.setSourceEntity(241U);
    msg.setDestination(60354U);
    msg.setDestinationEntity(215U);
    msg.id.assign("OEWRVAUKPYJVQCODUTXNZNWDTWZOBJGVHESEIJYYMAIPHWHAKMDRZEMIECBKJGZGAUIFHZPQDIVYDZNKFAJSZBYTBSPEQQHJMOJOXBHUPXCSQOT");
    msg.feature_type = 199U;
    msg.rgb_red = 68U;
    msg.rgb_green = 9U;
    msg.rgb_blue = 40U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1877846193;
    tmp_msg_0.lon = 0.646961091751;
    tmp_msg_0.alt = 0.525567087092;
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
    msg.setTimeStamp(0.951314358366);
    msg.setSource(15091U);
    msg.setSourceEntity(6U);
    msg.setDestination(11542U);
    msg.setDestinationEntity(235U);
    msg.id.assign("ZEGWUALGWG");
    msg.feature_type = 122U;
    msg.rgb_red = 188U;
    msg.rgb_green = 227U;
    msg.rgb_blue = 20U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.275963862252;
    tmp_msg_0.lon = 0.911253253771;
    tmp_msg_0.alt = 0.110613038404;
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
    msg.setTimeStamp(0.737516865829);
    msg.setSource(7710U);
    msg.setSourceEntity(56U);
    msg.setDestination(40822U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.701791322859;
    msg.lon = 0.474256238032;
    msg.alt = 0.200760857932;

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
    msg.setTimeStamp(0.888538279224);
    msg.setSource(3199U);
    msg.setSourceEntity(142U);
    msg.setDestination(27135U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.788993937389;
    msg.lon = 0.25528687961;
    msg.alt = 0.550858124802;

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
    msg.setTimeStamp(0.106746068322);
    msg.setSource(39952U);
    msg.setSourceEntity(132U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.821727228717;
    msg.lon = 0.819953765579;
    msg.alt = 0.190111970241;

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
    msg.setTimeStamp(0.907281455038);
    msg.setSource(11602U);
    msg.setSourceEntity(13U);
    msg.setDestination(32836U);
    msg.setDestinationEntity(132U);
    msg.type = 151U;
    msg.id.assign("ZFONCGNPTVUAPNZXULCRSXSYJDHBVJSGSIIMZGSLJPTYTPVWUQCMRNLLKVDYFKCLQOOIBSKYIMXYOKDBWYUQAVJECFSDRLWPFTQBTIPURXLTLBBCEXGAWJGJDHYDRKDWPUWAPBROAUQXLWXBFAERN");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UBGLUKJQRAMCHBCUUPTPJZHMGUIITISGNXR");
    tmp_msg_0.lat = 0.705385053452;
    tmp_msg_0.lon = 0.44699055332;
    tmp_msg_0.depth = 0.0135160117401;
    tmp_msg_0.query_channel = 77U;
    tmp_msg_0.reply_channel = 78U;
    tmp_msg_0.transponder_delay = 198U;
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
    msg.setTimeStamp(0.3950036627);
    msg.setSource(53092U);
    msg.setSourceEntity(112U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(163U);
    msg.type = 174U;
    msg.id.assign("NZIYDAPQIAYTQHILFINZKCTPNNMHJAVTMVKDZVUBCJQYYMPGHWRRAPJBBHSDUTLLMMSMFPFBXLZJNXMQTCWMX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DBYYJFRAKPQGMGTLHXIXESHJCFDUIXMKWMFQPFKOLRNKMLJFVVYQKUBWLCEUEKCLPKZUDVGDAWGEIZZVBFEIQZCCRNLKNTDLGCSTNWDXQISCUOTFJJWHAHLYMIHXSVXNOBPBCZJTMANFWGZZDPMRCMORGIQSBJHUUHVXZYYSERAYDSBE");
    tmp_msg_0.value.assign("JIVHGEWPQKKTHPOYXYLCKDVKCBUQXDJXMTZYHYPTVATGWJVXUVMCGLZZAGSAIXIAFRZDCSGITZGJYRFAODFUUSQYTMKQBKUZQHNBNYDOVBOYBEAXVQRXCQMUFHGMMLFVOEJEAETZMLCRNSWGUJZRHXWGKJNXIIWNNKKDPHAILWOMCTJYWWRAHEWJKPISLAVQHJTRNOVY");
    tmp_msg_0.type = 178U;
    tmp_msg_0.access = 180U;
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
    msg.setTimeStamp(0.672382356799);
    msg.setSource(46406U);
    msg.setSourceEntity(116U);
    msg.setDestination(10825U);
    msg.setDestinationEntity(26U);
    msg.type = 166U;
    msg.id.assign("UCBDFSJTNONTGCOUZVVAOEVTMFYZGIKBWBREPHBRHMEDLRPWXIRAISIDJGPJFZOJHZHYOPDWNIJWKAYYAPLQUBQQUDCJDXQRKUGTVFMBQOSMGVTSEADOLKRCHVPLXBLFMRCDMKIHUOVWZPQAYFXWK");
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.560244114119);
    msg.setSource(58710U);
    msg.setSourceEntity(212U);
    msg.setDestination(60087U);
    msg.setDestinationEntity(67U);
    msg.localname.assign("LNHLWRMGGHQLFWULBIVNXZSBMIPQFCPTXWAKXQCQANFFOTMTYIXBRKSXPQWBZTHRADOUGZQWSZWZVJRMTYHFCJHVNOQFGGXDOCZIXEBNEKKAEGJMOXILCDJOJCHEDBBSVNDAOTMFYHSMUMYYVUNPPCQDLLGYHSEPYVEPMODIFYRLUDGIKRLUZYJEAXCUDVSJIEFWEV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OXTZOJLSEVMXZUGRFAHYPNTHJEIDXREXUGRZMWNCWKWOQCHESSUWMDGYBZXMRIQLORKJLKAHTMPQJJIZGDV");
    tmp_msg_0.sys_type = 88U;
    tmp_msg_0.owner = 63045U;
    tmp_msg_0.lat = 0.63330239455;
    tmp_msg_0.lon = 0.154149670774;
    tmp_msg_0.height = 0.915963154833;
    tmp_msg_0.services.assign("IXNRTXQRLSOELEPCACHCPVFGRUNTBUUOGANHCHGIWCGECVOFFMRBXIRBGPSZRGGHJUEHBSDMTLVIXXZMVGFKBZLEQTDJK");
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
    msg.setTimeStamp(0.400650794695);
    msg.setSource(28572U);
    msg.setSourceEntity(11U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(226U);
    msg.localname.assign("ZPJSNDYUVNGNFQJEQCOTLMJOTBKAHPUDEADKWHDSILFFUHFINJOFTNSWQKTGCWDWEODLRGFVFSUBNKGZMNUVDTBVPKCPIRPMXXEKUUOOAAZOYWHBXLBXEJPVQXIUAQBZYDMQAYLLOBAEGTLTXTZRIMZHAWRKAZPYLHNGKPJNY");

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
    msg.setTimeStamp(0.3733028253);
    msg.setSource(59801U);
    msg.setSourceEntity(231U);
    msg.setDestination(40038U);
    msg.setDestinationEntity(207U);
    msg.localname.assign("CPRYMDWTNKUWGSRZXPYFZFBCOGPKUUZIKWVALDOEEXUCIZSQUDKHJBJOHLFNNVJNLITFRBHCELACTXGYZFQTTQJNOGAYZYMVSQLPLPQZHRMSDVLMKCJUFOULVADIRQTKHSAYX");

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
    msg.setTimeStamp(0.105345267766);
    msg.setSource(50623U);
    msg.setSourceEntity(37U);
    msg.setDestination(20012U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("EHDXJOFRMYBHWZHVKWUTEPINBMVHNUFSRZCJHWTUMAXYTWIXHLCGIYBQFGTYPKCEQPPZY");
    msg.predicate.assign("RHPJFJUPTQZMHBSSGWEKXNWBXOEPUTJKLIDMKWVDDVOSHQKTJCZWFQNTOLPXLLPWTPYXOFJCVCNIGOZTYDNMRGSAUBNVSHUMTVTNQUFGFIIZVOYSIPBAYRPCRBEDJFDCGAXIBULOCUIBNICTKHYWNWAMEHS");
    msg.attributes.assign("QBDVUUKWTZEQLABODUATGJXTLKXILYBFRFNQPKZNPECNPKVCSZMWODPXHUIASJYEBYBQSTZARUFSRPLKHEAGNOZCLYDWXVLLNQPOKNGXVIVUCAKLENCWIKJRVWYURSGHCZDSBQSJLUFNXFTRUHPHFOPGRWDGSWOTBJFZNIZVFCWRWITIDMYXEEUQBIEGKHAAGTVTMOCZFPMJMYIJCAZEDOWCQBMVMSRQXXHPVGXHIY");

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
    msg.setTimeStamp(0.340007883071);
    msg.setSource(51507U);
    msg.setSourceEntity(52U);
    msg.setDestination(3678U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("CXNFTLOLGJTUHHPSDJYLPFEBDWCIWLFUBADMETMHNBRZUSVSVORJWIYYGOUQSKOLAFNWHBJUPMWEZHGUCHXGBWSZFOJCTRKJTGAZIBFIBKNQTVGNTYVBKNKVDPHPRGMGXZXQQKOUNCWXCCHMFQRTPAYVPEILYSMYRAEAHVFSJYXZDIDLPIGZARDNSFQLOWXMTYMHDSPEKFRVJBLAEAWXECMIXJNVOUKOLTDUZ");
    msg.predicate.assign("GALLYQBQETAOUYJPHBYCZXFWOGEZJVPZTPCNLKSLUJCYKHHNSREWXXLWGIQRKBGEDMLNABTEFXALIZRJLTKUU");
    msg.attributes.assign("HOKNLFUAWMPNNQSFIIJBLSXAVSRMRJRDKJVKINBWGNWBOFUSXPCCRXHGMRFDVZTVWACTIBSSYTOIFODKADIMQRHVSAWNDWOHQBTXGWMCVLPPUFSXYBEJUVAYHPQMVZCAAOEUTEJLKJUBUHHFAZOZGFGYLBKRMNMNTZYCZIPPZIEQKVQYMYXCVETQHKECDRMKTZYZZLQFSTJHDXBRERLPPAUJHLFCJYLGXEEKNQOGSOIUXGWLGJOBDXPW");

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
    msg.setTimeStamp(0.987534478359);
    msg.setSource(10543U);
    msg.setSourceEntity(72U);
    msg.setDestination(56677U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("GADBJCZEPKLOTQKUNBYMYTLROPFSRIYINAXGUURFQYOXOXGJOACGNMVCFQMSFMZWNAIVBVZMWFMQZWVJJFIWEEBXZRQHSJLTRGTDSUMJEHTWYBKNOHDFQJSDHVKYKAVSCTPMIBZZTOGDCWUEXUELQZGSOOWANVVLAXIRGCQIGCNBHJWUXFLYWKHPDBRHOWINCNH");
    msg.predicate.assign("URDOREKUJRTDUDTIXHBQJYJKBVTHXFCJEKOITUVQKSTHBHQINAUQEMQXGDWPFNDOFQTDBHUGKENGOWPDNPRXWVXGBFPLGIDZPCSQIXRZJRZQBVOMCYAIKIIMLGYYAYGVNF");
    msg.attributes.assign("LUHESGADHMZFWBWYFBJAJOWXTQRSNYIPNFBHDYGEUFKDKCMYCGQOUYJXAQJBKTKDJAUKESRSXIGNVQLVWJBLKGB");

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
    msg.setTimeStamp(0.06754372706);
    msg.setSource(9481U);
    msg.setSourceEntity(29U);
    msg.setDestination(2927U);
    msg.setDestinationEntity(207U);
    msg.command = 88U;
    msg.goal_id.assign("LSZBRPXBOFZLCCCRHFQLGHJRWZSFGDSPUPKSURWIOAKXRTXIKNVWGICMWVGMKMWTUOBEEANRDGIXQJVEXCDWNGNSRPVQPAVAJVHDMOHUKEMNIPLSZDYKYXGZETUCYYIT");
    msg.goal_xml.assign("VCFVZKHJEBXLVIIOSNPVTKQAFECVZWAMWUHOJXKTQSACFLKIZBTIEDMNWCDXJCFZ");

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
    msg.setTimeStamp(0.244524035726);
    msg.setSource(10143U);
    msg.setSourceEntity(145U);
    msg.setDestination(23945U);
    msg.setDestinationEntity(56U);
    msg.command = 184U;
    msg.goal_id.assign("GRRVJVOCCFVWUBPURTQODXYOGARSOTWQGVSHEZGYHSNGRIXGDYHUBPSUAJDIWQFQXGYHOPXYXSSERBRFMYKJKXEZRKMILNKKEDLUCXVTUVDPTHWRCKTTZIELSFBMZCVTNXEZMFOKEZJSDFKZNJNSNGTIUUMWAJDQSTBBDCFNHIDRHBKHODPJFAMTAWGQYMCLVZYMMEXEK");
    msg.goal_xml.assign("ZYMRCOEOIBFSTNOZJN");

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
    msg.setTimeStamp(0.687938547906);
    msg.setSource(11632U);
    msg.setSourceEntity(149U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(89U);
    msg.command = 125U;
    msg.goal_id.assign("GMZRJVTHMWJRNEQCGFJLOSIPDDIAKMAVOAPUDXUDDCESMMGFZIVKOPBOLJYUOVTYBXRWFQLXRWFNWJNCSLFNPSWUIFERXKXYWYVCHXPM");
    msg.goal_xml.assign("KEZKQQBWVYSUOPNHZKRSSYVT");

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
    msg.setTimeStamp(0.998693186211);
    msg.setSource(59438U);
    msg.setSourceEntity(16U);
    msg.setDestination(25454U);
    msg.setDestinationEntity(30U);
    msg.op = 135U;
    msg.goal_id.assign("HRXTMWOKZNHOUCSEYRAGLIJPXQAWZXRWYRVHBBKGEPWMPXYUYPSSNFVNNOOVFUEIHEFSVDLAOAJKVKILSWOQEGINHRYZDNRVNDTSHJMQTYSFSEEHZCCVLTVLKBZKNDGCLWQDMBGAAUCNPGAYKJKDDUMIURZTZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TLPAAVSZBMNXITPCBWTYJKEWJBSADXDZDFIVKXIZLLUDCVIPMMGWNRMRUNCCJZVTAMHRUGOFDUAOCEAUSJXQYCRRLWTQEGXAFEYGIHKOZSQJGHMUYWOJRYEMZLAZGVFNK");
    tmp_msg_0.predicate.assign("KTIKVGUJGHVHRWLCXNOKRVFCVWLESPORXBLEHQRWSKXMETEENLYMMQUCYHPTZUFYOETSPIKGNDPWSSFOPCNDYADCQTBNXUVHWLMVSRBMOVJYOIGGXQDNULJJBEVZACFVNHWZESDNKIXJMINZKHIPFBLZOPAVJMACYZUBCTQAFQEHXTDBJFJKMZUBEBMRDRCADIDKNTFJGAYOW");
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
    msg.setTimeStamp(0.44309005231);
    msg.setSource(63512U);
    msg.setSourceEntity(10U);
    msg.setDestination(40653U);
    msg.setDestinationEntity(163U);
    msg.op = 73U;
    msg.goal_id.assign("EKZVRVDYYNEMWDFDROAXVVFCVVJNJXNNKYYSISOFWGTMSLPUSOZXLCENTFBGKHPMTXNDJWCIEPHPKLQTGBCRZOCIYPQYZZSWTZUENPXEYIWMXDBKJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JCRXWOQNZSVCQJNSYGECSQIPHVUZXOOCWIXTQNAGWILSQLPRFYUVMVTPELKRTWLATOHCPGHKTZQDHEIGEAHJUCOJUSENDFEALDBYTBFLYKXZLNXZPAIEISMKCCSFKNIYUQMLBMZMURAGKJDDFQJLAVADUCOGPCWSOSHBYEQBYKSUNWTZBAMWGNOHFBRBRREWXIYXJMGDJPQMJUKMXPYGAVXERXDFYZPVUBGTHMPTNKVN");
    tmp_msg_0.predicate.assign("LOXBTNHNOZYUDTCNHULMPPXMLGIKTHOXRZISKYGLBXSYFQDIWEJEIYRAMMQUDPVTDEMEKAALWDBKNDQLSYUOPLYCMKRFOPGQGMKHPPJIQLZRSRQGXTHQXAI");
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
    msg.setTimeStamp(0.455457282327);
    msg.setSource(20636U);
    msg.setSourceEntity(145U);
    msg.setDestination(63230U);
    msg.setDestinationEntity(5U);
    msg.op = 135U;
    msg.goal_id.assign("IBXYCYEIKLXKIDOBMAQVXCRYAJZNMJGNDZKIHRMWJFCOVYKWXDXVGDPHGPMPERBZFGTWNLSVFGNRSUNZKF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HLRJLBWVTKXTOJGEQFAGZQYPT");
    tmp_msg_0.predicate.assign("EIQTYHWDLHVIRVYFZEPHUPNXGVQWXMOTOMZRLLVMQWSBCGFNEQVYILRPPDBEW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QFQKJUMXVJSJVUHEWHDKMORSCQHTBMXGMHZGITBLZSSXXFZCDXYJWYNHNZULLFQRQADHSEDWCMUINETVKAVQCKJYGESCNWKENZWRUDRBKLRJLNAGOKRLUQPNFGOWGUIWJVMSBZASUOUIMBXPYHWAGYGWJOZYTCMPFODUIOFADTCDYNNRIEVRFXOXDQSVPPOPWRXBTHMBVIPKFGBEXAYCMBKHLYDTPRSEIACH");
    tmp_tmp_msg_0_0.attr_type = 131U;
    tmp_tmp_msg_0_0.min.assign("MKVIUOHICHXVKGNDL");
    tmp_tmp_msg_0_0.max.assign("SKJVOJGDNCOEFDBPMYADHMUUEOVKIEFTHUCXMAMQARIPIIOWZNDVEWLTGLIWDJQFTXFZSHUNXFENTCOHQIOGRCDKRHYZBEZYHWAXDBUACBZMRKWYWDJOQNLRHKVAYTPMAJBKBSXKGEUFMOQNPCLUCBKQMYWLOGKIQYSYRCPVQHSUVXFBGQRFILPPYYIJSFLXTEWEGGPMRGRQSNSFALNZJZVTPCGTOLJNAKMSXBAXTCJILT");
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
    msg.setTimeStamp(0.0309270431135);
    msg.setSource(53959U);
    msg.setSourceEntity(248U);
    msg.setDestination(53763U);
    msg.setDestinationEntity(5U);
    msg.name.assign("YFASFVDCRXMGNJGIQBYFQAFOEXWETNCCFEVOBNEBPHJDTRQBIHDLGKXQPYOUWWXCKVLXSWZNQCSSZJPAAUBKNKTPLAIRSIYFJPBYUGMZSJDJPXCDBERGBZZCXEDWWVTUHTSAAVHPFZTIIUGQALSVKMRPVTMGOUSYKIMQLMNRHAOIDOOMUJVNCQRDXRMYWCDTFFOAJWRLKKOER");
    msg.attr_type = 36U;
    msg.min.assign("BWEYXYQAIXBPPAXDEPPTNBMRFMLIXQOUSY");
    msg.max.assign("GHEWLUNCQJUNXLHBKABVESPENIHKNSWLOJOTYPTWYRRRFHXWUKZAOVKFMGLGQKYANXMFOVWJABINYRZZCODZTAMPARMGYRJHEUVEUJOXTVBLDLSXYQWIWLMHIQRZVNS");

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
    msg.setTimeStamp(0.684929466463);
    msg.setSource(63128U);
    msg.setSourceEntity(157U);
    msg.setDestination(48916U);
    msg.setDestinationEntity(74U);
    msg.name.assign("KGHKYVRQQCPJTEFMJUVPTLDQLADPBTWZMVCDDQIDLHODRMVEOCZQMSVAZGHHREMKPQAGRKNJSUBTPSQBESSLUZUOGYZGAWWYBPRXQFJUVYZTKSYVOAPDIVGTEAJLAFAR");
    msg.attr_type = 65U;
    msg.min.assign("YJKMJCWJPECLXBHEHDQMMXGUZUQBZBUTRRGUIRJNCCQXKIAXLZFUEFOSPODGXOVSMQLTAJVTJYFINZZJLVAHESKPQRBNQMTVNKLTPCTPIV");
    msg.max.assign("VAHWWAHKMXHVOBIBZFNVSLIRZENNMJUOYFQBXRBIOXEMPZWFEQOGOIUJDBZVPQESOMDRLOKMDABYGGGQOTHROHTWEGKLNBBWMKNDCXXEWDVBVZPSNPKQHSVKLDYYAJGTMYZRUDTCDGGPMVIJUIZCYXPKTMQL");

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
    msg.setTimeStamp(0.390553102044);
    msg.setSource(45227U);
    msg.setSourceEntity(232U);
    msg.setDestination(27441U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RCQWAFLSDOHYFXRORMWNKGVZAEKNQGTVOTSFGDKPOMIGHUISKVXBAHHIDFEPIJMQKBNYAZLUVURSETDOXLYAXKCQTBCANIPJNFCNQLHZTUTUMEZZTCOYEUFKQNPCCRDXLTIBHMPJXSVGYUWIMSXSULRLNWQCAXHUMXGMODRLTAKGBWYODPEBWHBFVHREYWYESMVNPJJVZPMWGSWPKQBJAJFLCGEOXSZIVZIJWYBKZJFDPUQLFZRIGRJDVTAQ");
    msg.attr_type = 182U;
    msg.min.assign("BMCMXHHCUWBGTCWBJHTXXISMPJOBBANRQRYUWIOQUERCPWLDYNOODOEKJNQALHXTQDJCLWKGNCFKHYS");
    msg.max.assign("RDPXLPSURJZJEUZQVDHQTHKYMWOUWXQIEHQWRFFNPXOAGAQKBSOBGRXVJIPFDHMGXJSOSEOITSLORUGDCSPWIQGROIFAUKAQHFADZCANVBMJWZTTDMNNEYATMXZYZAVHUKDVJJERYCOLDULNEFPFLKKJINCZFMVPQVLGMIDBQXVCXBYLTCYZSJKBPBMVBSCMKQUAIORLESXGLWGWBN");

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
    msg.setTimeStamp(0.276779336305);
    msg.setSource(5410U);
    msg.setSourceEntity(148U);
    msg.setDestination(47034U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("HISJZCCHYJRLOZMYBTHFTRKDXGFWRCXQIMJPTYZBAKHZDDLUVKUVEBDQPHNYZSEAVIQSKZYFSQDEZHJIFOLNVAWAYJOIUYXJWJPLVBAOSGZXSOPMCXIHQQDNLVNMTHPUCQAGDVRWFWWDUPTTSIFCBIJCKKTVLQSGQTMUVEXRUWOAOEOPKKUUQNEOHRPGRRANLLGGEWABLSRJNOFRXWFTCZDWCXBNDHXYFLJMMVPC");
    msg.predicate.assign("JMXYTDDFUNLABXZACMONAUAZZLQYYTMOCFOOCKDYEXJNOMGPJQUDXBUPICKWLAEFOSBIYGUNNFKHWNOSPROBHRLSRCGITHUQWLWPWHEGZHFBKEWEVVFNWHIDJKSATBTXTRNQBMXUONYRKVJRIJIQDTZZVYJYWSJSMNQCSREPCICEVKRGZADZTFGPZSQKV");

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
    msg.setTimeStamp(0.935314578705);
    msg.setSource(12622U);
    msg.setSourceEntity(58U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("LYNHYVFMFTHPFTKNKONDWVDMBSFDQBXHIVWYYRQHANDUBJXZWAOQBYXXSLFUGEZXTJYNSWKEGWWHCHACJCOCMJLDLNFNGWSJGMTK");
    msg.predicate.assign("NQFUXQCGXMAJTUTZHAOOTRCASCJEGGUPHWMLYFHPPWFEN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YDAXWATKGZXYAKEMYKKIBMBBHGDXJRKXPLPRGCQZRZCFDJ");
    tmp_msg_0.attr_type = 14U;
    tmp_msg_0.min.assign("EZODFJKHAVJOGSYGCISYMZTUQMRDLMTEHSMWNOBTZDBPRGLRCIBHBFEMMLPIQZTMLCBYPZGENQUZDDYVMOXCXXCEHBOLCJHSDRKUBARKSYPNROPJGLGHWQTEYEOACKKDCQKSWLWWRNZQYWNRVLJGXBTVTUPWGFOEHQIKFIFSGTJUARKP");
    tmp_msg_0.max.assign("YEZMAPWGUMWCQRDAINXSEDFGFIBSTVEAOIPHVLXESRSUYIZTLGKYGXZFMJYCLFZKBUVDPZBRVLBBCHMQEJDKQNWFYFHNKPTPMTMHBFKLIHSRCVGXQLUNUWRIYNMBMKVDRCYEDJYAJWKJPIACDPPJRATUAJQHMDBULNHNOTS");
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
    msg.setTimeStamp(0.737882325152);
    msg.setSource(16707U);
    msg.setSourceEntity(218U);
    msg.setDestination(61213U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("JBKLEYIGSUUNZFCGYPSEFHGWDLEKPHPYVZYXYLHXAJPBMUGIJEFQOFPAVLONVRMKOZJKEOYXWUCRMGNDSSBEHVURAOFXCBJMRMOOLTMACNLKRDYFQMKNIZSICTHRWBQPEKATVQCFUOCFNMEQCZE");
    msg.predicate.assign("BNPHVLRRGKSZMFTMGHBXCKKHHOIBTWLVCLHSXICSIWZSYEWZJGNQAHWKWAUOYRYZMUVU");

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
    msg.setTimeStamp(0.423883644158);
    msg.setSource(14615U);
    msg.setSourceEntity(137U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("DGVXAQSWKUARDNLDBQAACKYCGSSSJYWCTOEAWOGASMITCHSIBNGPMPZYSVFW");

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
    msg.setTimeStamp(0.847995425386);
    msg.setSource(27551U);
    msg.setSourceEntity(254U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(137U);
    msg.reactor.assign("IQOANVVFIFWGSDCDGEWVFMWIVSBURPJJLOWJXTJQGZIEKQXXXCBVDMXA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VFLTBGTZHRIKBMXDPWVWYJVIBLMUJHQTTD");
    tmp_msg_0.predicate.assign("LJBGGGAAMQJHKINGWQPFBFRUAFEGRBKZKYDIHCFNMXETTRACZIGSHNDZLIYPSKMLJYWXFMZZGXXHYFVWUKHSSRTLPELPWFKFIEIUHLOJRQNUUKBPSQSJUBKSNXCPTWWSUAPBMWCTNIXTXDWVVOYQTUSTAXEFEDBVLXIYZWHAVJYZVFDQOPRHRMTIXOPNCMLNSIQUWPDDVEEMOBCEHBMUQCZLOAAZEGQRJRHVCDKO");
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
    msg.setTimeStamp(0.435108914932);
    msg.setSource(33017U);
    msg.setSourceEntity(189U);
    msg.setDestination(13314U);
    msg.setDestinationEntity(25U);
    msg.reactor.assign("VZNRGKNMIYOGGYRAJNUUUSDKXDPWBHLADTDVFXVEBXBMOQPYIJNFGPLYZAOLEKJFKVQ");

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
    msg.setTimeStamp(0.119976183937);
    msg.setSource(13084U);
    msg.setSourceEntity(11U);
    msg.setDestination(49659U);
    msg.setDestinationEntity(3U);
    msg.id = 120U;
    msg.width = 49765U;
    msg.height = 31610U;
    msg.widthstep = 32174U;
    msg.channels = 128U;
    msg.depth = 231U;
    msg.finaldata = 253U;
    const char tmp_msg_0[] = {-128, -38, 36, 90, -3, 6, -87, -54, 1, -104, -68, 8, -118, -66, -117, 75, -64, 119, 97, -52, -114, -89, 32, -44, -113, 42, -74, 69, 95, 78, -102, 101, -41, 5, -74, 47, 91, 28, 101, 68, -30, 17, 50, -9, -109, 81, 24, 65, 121, -62, -124, 27, 6, -17, 26, 9, 72, -60, -28, 116, -70, -21, 20, 25, 55, 81, -11, -33, -88, 27, 92, -119, 124, -27, -33, -5, 86, -90, 6, 106, -117, 8, -93, -46, -111, -48, -116, 99, 1, 4, -61, 104, -67, 114, 37, -109, 66, -46, -19, -91, -121, 28, -118, -21, -33, -122, -7, 109, -69, -42, 70, 125, -8, -25, 73, 102, 75, 117, 81, -72, -121, -83, -93, -28, 8, 18, -21, 14, -14, -47, -37, 4, -124, -93, -21, -8, 14, 97, -18, 121, -36, -115, 28, 56};
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
    msg.setTimeStamp(0.300425837011);
    msg.setSource(25632U);
    msg.setSourceEntity(140U);
    msg.setDestination(30178U);
    msg.setDestinationEntity(74U);
    msg.id = 223U;
    msg.width = 37764U;
    msg.height = 27998U;
    msg.widthstep = 10465U;
    msg.channels = 132U;
    msg.depth = 241U;
    msg.finaldata = 226U;
    const char tmp_msg_0[] = {-7, -121, 12, 4, -6, 96, -125, 15, -31, 4, -124, -21, 99, -65, 88, -26, -72, 30, -21, 119, -95, 60, 43, -80, 64, -113, -120, 120, -74, -90, -13, -70, 30, -55, 93, -107, -121, 104, -49, 16, 124, -118, -57, 4, 7, 34, -116, 86, -4, -36, 107, -29, 70, 15, 105, -33, -70, -118, -125, 15, 75, 4, 52, 69, -59, 92, -14, -31, 49, -102, -70, 92, 41, 17, -88, -21, -94, -97, 92, 125, 16, -33, 9, 65, 37, 58, 108, 115, 123, 90, -124, -69, 102, 42, 12, -28, -108, -120, -41, 44, 122, -66, 90, -15, -79, -9, -37, 35, 79, 118, 72, -18, 107, -93, -17, -108, 38, 118, -79, -9, 97, 45, -60, 42, 70, -116, 54, -49, 29, -36, -5, 2, 57, 15, -71, 115, -87, 84, 28, 65, 123, 64, -22};
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
    msg.setTimeStamp(0.829405772922);
    msg.setSource(3104U);
    msg.setSourceEntity(122U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(49U);
    msg.id = 92U;
    msg.width = 28590U;
    msg.height = 21549U;
    msg.widthstep = 25300U;
    msg.channels = 155U;
    msg.depth = 77U;
    msg.finaldata = 94U;
    const char tmp_msg_0[] = {-80, 109, -52, -54, -108, -93, -5, 58, 34, -52, -17, 39};
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
    msg.setTimeStamp(0.611076199705);
    msg.setSource(49608U);
    msg.setSourceEntity(203U);
    msg.setDestination(29695U);
    msg.setDestinationEntity(157U);
    msg.width = 53949U;
    msg.height = 12633U;
    msg.channels = 189U;
    msg.depth = 249U;
    const char tmp_msg_0[] = {80, 117, 112, 67, -2, -35, 119, 125, 34, 70, 124, 29, -3, 39, -110, -113, 32, -96, 71, -28, -49, 34, -56, -55, 114, 72, 60, -72, 82, -46, -68, 99, -31, -43, 46, 40, -29, -71, 4, -10, -34, -60, 42, 84, 53, 39, -36, -67, -61, -83, 114, -89, 33, 112, 32, -17, 107, -121, 111, 92, -43, 13, 40, -72, 84, 31, -63, 108, 97, 62, -114, -96, -32, 125, 62, 4, 59, -99, -79, -19, -6, -81, 122, -24, 65, -51, 37, 39, -48, -2, 17, 106, -20, 94, -7, -7, 56, -74, 45, 85, 28, -70, -33, -45, 116, -58, -53, 95, 94, -36, 67, -62, 66, -106, 86, 64, -93, 125, -25, 11, -116, 113, -47, 17, -58, 104, -25, -33, 111, -123, 41, -82, 9, 99, 26, 31, -19, -10, 99, 12, 72, -68, 99, -26, -39, -108, 65, 20, 83, -45, -21, -65, -78, 28, -93, 8, -69, 57, -124, 66, 13, 95, -96, -12, 32, 111, 120, 107, -64, 43, 76, -43, -73, 11, -106, 107, 88, -5, -119, 42, 98, -83, 95, -3, 114, -92, -26, -44, 58, 87, -103, 40, -100, 82, -101, 89, 94, 84};
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
    msg.setTimeStamp(0.23898874278);
    msg.setSource(24906U);
    msg.setSourceEntity(215U);
    msg.setDestination(21470U);
    msg.setDestinationEntity(252U);
    msg.width = 53583U;
    msg.height = 57635U;
    msg.channels = 114U;
    msg.depth = 23U;
    const char tmp_msg_0[] = {109, 74, 97, 121, 10, -61, 96, 24, -25, -103, 51, 26, 61, -85, -89, -63, -108, 35, -128, 10, 111, 54, 98, -81, -106, -82, 70, 34, -92, 52, -28, 73, 93, 51, 12, 55, 75, -99, 21, -70, 80, -35, -9, 125, -96, -49, 107, -118, -60, -61, -11, -13, 76, 125, -34, 3, 55, 84, 3, 10, 14, 111, -49, -32};
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
    msg.setTimeStamp(0.0100430427861);
    msg.setSource(25676U);
    msg.setSourceEntity(193U);
    msg.setDestination(16536U);
    msg.setDestinationEntity(124U);
    msg.width = 25625U;
    msg.height = 23135U;
    msg.channels = 119U;
    msg.depth = 192U;
    const char tmp_msg_0[] = {105, -78, 57, -100, 42, -11, 59, -94, 126, 53, -97, 98, -125, -61, -108, -30, -37, 39, -62, -21, 116, -25, -84, 75, 67, 6, -92, 4, -62, -59, -93, -9, -97, -123, -46, -103, 10, 3, 85, -59, -61, 53, 53, 39, 94, -71, -20, -116, -106, 13, -111, -48, -33, -71, -10, -50, 103, -121, 108, 105, 77, 92, -40, -61, -108, 41, -14, 69, 20, -92, -80, 26, 56, 116, -13, -73, -100, 96, 109, -32, -11, 52, 81, 42, -47, -121, 71, -94, -25, -118, -3, -13, 33, 2, -28, 1, 119, -102, 97, 53, 44, 10, 9, 69, 94, -85, 58, 74, -38, 80, -4, -4, 112, 124, 110, 18, 67, 93, -27, -78, -82, -66, -21, -79, 107, 106, -61, 12, 120, -80, 16, 104, -25, 96, 114, 83, 20, -41, -20, 78, -128, -68, -7, 99, 3, -103, 103, 112, -47, 3, -115, 89, -30, 84, -114, -30, 8, 77, 31, 126, -113, 116, 9, 19, 98, -57};
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
    msg.setTimeStamp(0.181053026382);
    msg.setSource(2872U);
    msg.setSourceEntity(63U);
    msg.setDestination(40654U);
    msg.setDestinationEntity(160U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {-88, 110, 19, 16, -93, -119, -3, -90, 25, -3, 72, 112, -118, 105, 59, -25, 71, 97, -75, -66, -18, -11, 45, 66, -14, -70, 118, 42, -26, 64, -80, 80, 124, -60, 103, 23, -120, -18, -83, -83, 76, -69, 114, 45, 68, -87, -17, 64, 87, 77, 108};
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
    msg.setTimeStamp(0.268749286345);
    msg.setSource(4585U);
    msg.setSourceEntity(53U);
    msg.setDestination(14828U);
    msg.setDestinationEntity(29U);
    msg.frameid = 157U;
    const char tmp_msg_0[] = {-14, -15, 110, -25, -120, -89, 23, -50, 14, -51, 67, 64, -38, 58, -94, 99, -2, 107, -2, 23, 65, 105, -4, -44, 30, 46, 84, -98, 34, 55, 89, 105, -27, 22, -72, -51, 75, 105, -103, -36, 98, 99, -39, 7, 47, 64, -121, 17, 88, 24, 103, -4, -79, 89, -119, -58, 53, 66, -9, 20, 52, -75, -77, -128, 18, 40, -86, -86, 22, 115, 123, -26, 84, -47, -122, -4, -1, -78, 74, -113, 47, -82, -95, -60, -10, 102, -72, 66, 48, 20, -65, -118, 72, 29, 90, 49, -34, -21, 31, -10, -53, 84, -110, 64, -81, -53, 51, 77, 50, -90, 63, 81, 0, -6, 19, -55, -39, 52, 68, 76, 4, 36, -65, -73, 121, -48, -31, 124, -15, 14, 15, 57, -34, 54, -20, -89, -6, -22, -95, -115, 107, 65, -14, -38, 119, 2, 38, 88, 12, -39, -17, 29, 104, 103, 96, 56, -48, -1, 123, 99, -99, 26, 75, -45, -43, 1, -37, 32, 68, -56, -14, 24, 57, -115, -59, 57, -83, -20, 23, 82, -76, -76, -18, 111, -80, 53, 72, 5, -125, 3, -104, -102, -2, -52, -5, -128, 55, 16, 126, -42, 50, -23, 114, 20, 74, 21, -127, 66, -58, 94, -107, 88, -60, 25, -94, 102, -56, 50, 120, 43, -28, 27, 97, 41, -64, 64, 36, 105, -95, -111, -89, 94, 35, -69, -127, -25, -77, 69, -35};
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
    msg.setTimeStamp(0.866260911269);
    msg.setSource(26160U);
    msg.setSourceEntity(109U);
    msg.setDestination(53242U);
    msg.setDestinationEntity(182U);
    msg.frameid = 137U;
    const char tmp_msg_0[] = {90, -22, 55, -35, 44, -7, -5, 108, 49, 1, 64, -55, 117, -8, -17, -118, 69, -12, 101, 16, 100, 68, -57, -90, -43, 88, -59, -39, -118, -63, -86, 7, 3, -83, 81, -86, -58, -64, 121, -78, -120, -26, 44, 69, 49, -17, -18, 55, -7, -92, 79, -30, -97, -102, -45, 92, -51, -87, -95, -126, -35, 10, 76, -98, -83, 73, 59, -111, -104, 23, -47, 100, 36, -19, 28, 89, 10, -56, -124, -123, -2, -67, 52, 0, -54, -54, -89, 70, -75, -99, -67, 109, -102, -26, 32, -2, -42, 34, -1, -54, -3, -46, 120, -67, -112, 82, 78, 103, 71, -9, 98, -125, 102, 96, -127, 22, -79, 89, -66, -55, 21, 18, 93, -115, 39, 72, -80, -71, 123, -34, 122, 102, -92, -113, 93, -83, 35, 121, -88, 25, -6, 63, -24, 95, 2, -75, -39, 10, 81, 110, -112, -45, -112, -27, 100, -103, 107, -19, -29, 54, 94, -126, -48, 52, -112, -43, -75, -48, 103, -16, 124, 119, 41, 32, 48, 62, 38, 77, -12, -8, -32, -46, -58, -16, -120, -126, -76, -11, 108, 23, -87, 12, 71, -59, 79, 17, 53, -89, 14, 61, -90, -37, 85, 25, -68, 118, -116, -124, 104, 27};
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
    msg.setTimeStamp(0.112258238044);
    msg.setSource(19538U);
    msg.setSourceEntity(204U);
    msg.setDestination(51313U);
    msg.setDestinationEntity(21U);
    msg.fps = 9U;
    msg.quality = 232U;
    msg.reps = 92U;
    msg.tsize = 217U;

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
    msg.setTimeStamp(0.654011921016);
    msg.setSource(26832U);
    msg.setSourceEntity(216U);
    msg.setDestination(14516U);
    msg.setDestinationEntity(174U);
    msg.fps = 35U;
    msg.quality = 20U;
    msg.reps = 100U;
    msg.tsize = 150U;

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
    msg.setTimeStamp(0.383389639095);
    msg.setSource(62055U);
    msg.setSourceEntity(230U);
    msg.setDestination(31788U);
    msg.setDestinationEntity(192U);
    msg.fps = 116U;
    msg.quality = 83U;
    msg.reps = 103U;
    msg.tsize = 224U;

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
    msg.setTimeStamp(0.290020170352);
    msg.setSource(1617U);
    msg.setSourceEntity(12U);
    msg.setDestination(38285U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.198212659178;
    msg.lon = 0.0123467087682;
    msg.depth = 92U;
    msg.speed = 0.50375638839;
    msg.psi = 0.804753479204;

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
    msg.setTimeStamp(0.673828353418);
    msg.setSource(29509U);
    msg.setSourceEntity(42U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.290464527895;
    msg.lon = 0.854402040925;
    msg.depth = 72U;
    msg.speed = 0.638393136925;
    msg.psi = 0.822618698319;

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
    msg.setTimeStamp(0.209667824508);
    msg.setSource(13805U);
    msg.setSourceEntity(51U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.968837110236;
    msg.lon = 0.586194287024;
    msg.depth = 130U;
    msg.speed = 0.224794495603;
    msg.psi = 0.71906507891;

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
    msg.setTimeStamp(0.713576589644);
    msg.setSource(65150U);
    msg.setSourceEntity(142U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(94U);
    msg.label.assign("JYOAOCUUBLFAVZGJYCIJPFTMQVJFWYFCCBFBNUYSSIVQBIHJHIRMKAXYHYGTRRLZMQRXNBKXQWXWCTQLFZKIMEPQOZJSSIWSARPYZTOMPUHJZEUGXEKBAUWGSDWKDKTUDKNTPOKETIDCELHVFCNCHPCPULAAPGDFOTJDOMXFIQERNHUNWKZZGGAQBPEHMXKVVYBCFNBQMTAUPNT");
    msg.lat = 0.415899765659;
    msg.lon = 0.636506107165;
    msg.z = 0.344711499604;
    msg.z_units = 44U;
    msg.cog = 0.792448764001;
    msg.sog = 0.329098917812;

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
    msg.setTimeStamp(0.354942583039);
    msg.setSource(6528U);
    msg.setSourceEntity(152U);
    msg.setDestination(20656U);
    msg.setDestinationEntity(105U);
    msg.label.assign("WIQPEGQFGAEACINQFSVCJTWJVRKUQGTQYKHFJTSKKSUAIQLWDNBRUINHCOCLPIJLFIJPPDGUIMZZOQHFAMUHLKSEOPTHNYZPXHNCXELVLVOPJQBHZRXOXBJK");
    msg.lat = 0.961028864968;
    msg.lon = 0.720063845379;
    msg.z = 0.632654245077;
    msg.z_units = 226U;
    msg.cog = 0.857553919707;
    msg.sog = 0.514534831898;

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
    msg.setTimeStamp(0.535063059005);
    msg.setSource(26056U);
    msg.setSourceEntity(132U);
    msg.setDestination(45711U);
    msg.setDestinationEntity(13U);
    msg.label.assign("EYTWTCXYDAONXNKBGFSTXBJYMR");
    msg.lat = 0.880070036996;
    msg.lon = 0.301851859234;
    msg.z = 0.121379132273;
    msg.z_units = 135U;
    msg.cog = 0.836560029204;
    msg.sog = 0.96877396523;

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
    msg.setTimeStamp(0.992837713922);
    msg.setSource(36663U);
    msg.setSourceEntity(52U);
    msg.setDestination(1379U);
    msg.setDestinationEntity(235U);
    msg.name.assign("CQSADTKENQPBTEXQDWHVCCOOJRPLYKVNMMOHIICOLKEJAGECPWTRCLLBXYWWZDGASIXNPEFWTCREMNSHKZMLFQRQVFPJNYJUUJRDHUJKEXTADGXNUFZAQRVPBUSSSMYSBRQVFBZNWYOUSFDUOKTXYH");
    msg.value.assign("CWUINUJEBCXSAZUGZFXOABIUFAODPBCQWTVZSVNKESIESVQWREKVXPSZHPNBPJVCJLLYSEHWFKBLJFWXDTVJTWFAKUQRMHKWNLZVEJYDJHOJTPFKPLTIRHGANONIZCODYIMSJFOTVWVMISMDZFROXWRHYYJEGEHNAVOXNQXQRYCHAPRPKULTYRQXQ");

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
    msg.setTimeStamp(0.876339645603);
    msg.setSource(43783U);
    msg.setSourceEntity(254U);
    msg.setDestination(12677U);
    msg.setDestinationEntity(132U);
    msg.name.assign("ELAXGOMISPOQPGPJNDMRMWYVAPIORXLYKRUKJFSTTDDJBQQVHUGWFGIPWFAXVNIJCBCRUVZWA");
    msg.value.assign("NVWZAKHJYWDTEOFAGHUJSKKCSVUANJLQKUNTLPBHOOVJOLMECQQOWT");

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
    msg.setTimeStamp(0.320737406171);
    msg.setSource(35801U);
    msg.setSourceEntity(215U);
    msg.setDestination(25532U);
    msg.setDestinationEntity(39U);
    msg.name.assign("PUJAGUZQPPJANSDFSHVZVOIQPGWELQFDWEDKLAZKNQWBUFHFOSUBAIOJLMVQYBRLDELYWBKSGVVKIDOXPWPITLAETCUVTUAGFEHJVITRYYXWITRSXDDHKPGTAIXGKCPECHBZQ");
    msg.value.assign("SHMXAFUKYTCXIRNGBUPMBOEYGMEJYHWMUSZYTROVIJUWGJIEZCGSUMPHGXVMVIKLQQJSATOGVWJHPURJCMNRJYLVZQOCUNVQLSSKALNLNLWDRBDMLDOQTKCZEDDHFUTZFAWOEYIGFFFSVTX");

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
    msg.setTimeStamp(0.163220049647);
    msg.setSource(17952U);
    msg.setSourceEntity(241U);
    msg.setDestination(7039U);
    msg.setDestinationEntity(114U);
    msg.name.assign("YCKHXCHTFCYNWDAUFVKIMTRDDEHKSSPFYOXNBBEENACLOAGPHMGBSVPMYWJZQLGUSZJLGMAUGVTBOAKYJLZXJQWNRKEVLTRXUCBZQPVAKRGUJVLXNYTXQHSGLNR");

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
    msg.setTimeStamp(0.474686894125);
    msg.setSource(17651U);
    msg.setSourceEntity(55U);
    msg.setDestination(51328U);
    msg.setDestinationEntity(203U);
    msg.name.assign("ONHYBBCYQCZRRVVFGPDZNUXUQUROYJLVMDJKPSJJDFIGWWTVWSUXHUHEBPKUNHGTAYTJAXAVCZZCDBKQCUR");

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
    msg.setTimeStamp(0.573525813311);
    msg.setSource(56564U);
    msg.setSourceEntity(126U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(108U);
    msg.name.assign("NLMOHSSADWEMGNSIYJSBJCKHFBKMGRIXYUNZQDJZOGOKGXDWQWCUNKITZDOWYZYTLYHFPSRLMETONJTDBADIVTVFYNDHPJXEKLZVVRQICJCPWNWHQEAVMAEHNOFZWJHTFUUXSXPSPQOFTKWLYQJZKHBYDBUUGOZYPFSCUCQLTBXJGVXQVRFPMLOUANYJSBAKFMIIAKDLGEAEXEDSLGMHPIU");

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
    msg.setTimeStamp(0.529897618747);
    msg.setSource(49389U);
    msg.setSourceEntity(241U);
    msg.setDestination(22496U);
    msg.setDestinationEntity(146U);
    msg.name.assign("KRFWFZGIVEHNUYQAHFYDIIBNMZAPLGEDFUWUJBMEFGXZGQHYOCHXJLIBCAKPYBZTATFFVHMZ");
    msg.visibility.assign("ACORABGVNJUKYONBODCEDPEPDSBIWHLGJBGVICROCNCLCSFNIIOIWTWZNCSICXJCQFSAFULNFSPPMMSDRQYBGTYWMTAVVOZZNUQFJTKYXZMKLHLXXJHKDESOQOTPLBGWEJUUTHTZEHQGLLMDHDBDUVEKEABBTFVVPPHMIUVWIRFEOHIMEGHRAKGXXREJXAWFQKNYPLQWWPXYSBTRG");
    msg.scope.assign("CBUCFJWVTHAVLXZDODIAPEKNVOAZRNLUXPUGXFJIQIUUYGQSAGHTXNBAUSMBJSGXPWWWMGBCFMBJHHYAJYPKXAVQDTKDKZXNPEMDZJNFOHRAFWKVOZZNQQGMWSHTKHTPDDEHOIPCOOLQSWYIFFIUEHTLYSKNEENSEOXYWNFRVMDXPCRJZMUIRSAEIJ");

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
    msg.setTimeStamp(0.213559487647);
    msg.setSource(61137U);
    msg.setSourceEntity(249U);
    msg.setDestination(35139U);
    msg.setDestinationEntity(221U);
    msg.name.assign("UXZZWDDMSUFVRILJELQVGDGMTZRLGXGUIZJWRXAKYVYSDFBIAZTRVGDXNCLOIMKEAMNMFFKSEWJCATYJAICEMLCHFWKFDMEEJWWRJHHNITRKNALXTYHPSLPVOJRBTLZSSVTXUNOHRYBUUOCWVCPSHCHXUNO");
    msg.visibility.assign("KFMCNORVYUWAEIYXCIBHMETNERIGSJWCNEMOJLBAUFRDYXHZXVKWBDSYWEFHTXGNIQRXVMBEMWJLOVJHSEKAPTAGIIJQAR");
    msg.scope.assign("RVKOVNCBFTFOMHQIWGAPJZPTNTRZYJHQIZQFZTEGASADQETFXIAWBKFBHXRTMGNSNOAZGYXSZGUBKOTNMSOUXOQYGSYHPHVZFEPHBKMPRN");

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
    msg.setTimeStamp(0.399107611494);
    msg.setSource(55366U);
    msg.setSourceEntity(239U);
    msg.setDestination(17473U);
    msg.setDestinationEntity(107U);
    msg.name.assign("JWTNOWUEAWPGGZAPXOUZPRVGZKHMEOCOIDXKEYDQIFOCVAAPTWJRMTILILYJREVDZ");
    msg.visibility.assign("LLXBHFCMCDOYOAEZVNHKWCNIFDETKEHZMERQVESMDVSWFBWDD");
    msg.scope.assign("QGIEPWRZYGCDHDSQVIYIBQZPWXVZHYMKHDJCJRDCLJJWUXZINSNPLQDERPVUDMLMXAEPAVQIAYFPQMOQNJCWURAXRENLIZOLQVYPTNUQVXCWZCLTYVSAWOYSNHCZZMJKACEIPFBBCSYZHOKDRJBLNDLYOBFVERUTTUWJTHNSTIUVZFGTCI");

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
    msg.setTimeStamp(0.352976286325);
    msg.setSource(64927U);
    msg.setSourceEntity(172U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(187U);
    msg.name.assign("GCFUVOVFAPFFVTCPSPINGX");

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
    msg.setTimeStamp(0.922994873489);
    msg.setSource(48582U);
    msg.setSourceEntity(180U);
    msg.setDestination(45467U);
    msg.setDestinationEntity(17U);
    msg.name.assign("KSLNJYDXWDIDWPZJAXFMHAGFJKQHSSPCSIYTONSDIBWNGVIOLYOEJXIHXBZPDFALYAFTQFUIUVHHJYYIKOWOHQLOMTDUYGSGLM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MJTTFATUOTEREHEFWCIAQNACLUJWQVGGSKYHKZESZTPJRS");
    tmp_msg_0.value.assign("OZYICMUIYWJDBSMANKBASFIUGWEQPOWMOUFLTOQSWQJSJJQOPPQVDHJDHBBKXNZNCAURHUTAFHUZZVRDWNGNLKRGMGPXMIWMXLKPULWQIEBCKDCGYATRHDKZYLZJVXCFFSJFHOGRNVICIDOEBZBLITYTLNBCVVJEKBCEHGASTXXMEZURYWYQDOUSLELRGWYJNPXAULYVVEDRAVTWGHHBGTQIXJDEPIYONKXNMFAFFAVMKECSRCT");
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
    msg.setTimeStamp(0.633770657604);
    msg.setSource(26966U);
    msg.setSourceEntity(205U);
    msg.setDestination(30760U);
    msg.setDestinationEntity(29U);
    msg.name.assign("XDCNBKKUHUPNZWIGCXEVUOHHTPDCRFQQPMHIJMBQJGWGGPACXLIJRDMHBAUDFHJSTVBZACOGYMLQAVLMGSZVUEFVRDTMAFQZJYKTCRGHYVEGLORIICBNSGBXVSZUTTESEHNQMY");

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
    msg.setTimeStamp(0.111663330244);
    msg.setSource(1238U);
    msg.setSourceEntity(55U);
    msg.setDestination(20749U);
    msg.setDestinationEntity(94U);
    msg.name.assign("BINAWBFBWNPTYXPNTXSYSRMEPFSHAFDCXXWEOXUNVGSOYXMXRECETNIHYWWMLGKFPUJVJJFGNDZCGQKHACBGRJUADGIFQULLUQTCNZOJOSRPVULCIBJZHPOVPQCAIABHEOJALOYLFRKJGVVSDMPMXLLRUYZTSEPRVPMCZJHSBKGIKYQKQCBYAYKNITHVFODNWZEMIAUEKIWXLSZUDRBWMNQTETZQXKFLVGZIFCKTYHJG");

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
    msg.setTimeStamp(0.387925426545);
    msg.setSource(53872U);
    msg.setSourceEntity(10U);
    msg.setDestination(46540U);
    msg.setDestinationEntity(57U);
    msg.name.assign("UVSMBKZPGUDGXOKUARPZRJFFMQBJWUWIYTUDAOEEWHPMTQRHYECJSQGMHYQFTIUUGKQBZOATTPGMNF");

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
    msg.setTimeStamp(0.493642253237);
    msg.setSource(31615U);
    msg.setSourceEntity(60U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(41U);
    msg.name.assign("ZJBQPUHCXQJJFTABWTEDVXBQWIEDBKBUPHANYZLOXCUUPNEHJXWFMDLMTJGVJBZQFNKLHXKTPJFRFWDKDWXKZUUGSYOVHRQOEERBERCUXTOLHACMIZYLMXBKZFWIEZMASPNYAOAIKPRSSSINGWHAOJTRAZSHNDYVVMMNCDGIKHGPCISCFVBFVTLPFHJEGCONTZRYWXM");

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
    msg.setTimeStamp(0.807632086222);
    msg.setSource(22575U);
    msg.setSourceEntity(226U);
    msg.setDestination(32149U);
    msg.setDestinationEntity(42U);
    msg.timeout = 2012252529U;

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
    msg.setTimeStamp(0.418397522708);
    msg.setSource(3291U);
    msg.setSourceEntity(44U);
    msg.setDestination(58273U);
    msg.setDestinationEntity(194U);
    msg.timeout = 2806448203U;

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
    msg.setTimeStamp(0.278105179163);
    msg.setSource(3715U);
    msg.setSourceEntity(132U);
    msg.setDestination(11382U);
    msg.setDestinationEntity(100U);
    msg.timeout = 1327993585U;

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
    msg.setTimeStamp(0.830424034616);
    msg.setSource(42971U);
    msg.setSourceEntity(197U);
    msg.setDestination(416U);
    msg.setDestinationEntity(69U);
    msg.sessid = 3869681072U;

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
    msg.setTimeStamp(0.555637773787);
    msg.setSource(27982U);
    msg.setSourceEntity(181U);
    msg.setDestination(30095U);
    msg.setDestinationEntity(173U);
    msg.sessid = 2132565462U;

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
    msg.setTimeStamp(0.506049305408);
    msg.setSource(11054U);
    msg.setSourceEntity(218U);
    msg.setDestination(33804U);
    msg.setDestinationEntity(106U);
    msg.sessid = 3998996347U;

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
    msg.setTimeStamp(0.377286173161);
    msg.setSource(51005U);
    msg.setSourceEntity(166U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(218U);
    msg.sessid = 2810326313U;
    msg.messages.assign("TENKMFRNZYIJCBPJCMWNEJJJKIFWVIXRWIUMAIUAEDZKBXLZTWILRBSTWEYNMLPHBCCDBVFBFUCJOPSQJQTMGASUD");

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
    msg.setTimeStamp(0.0437454596377);
    msg.setSource(53528U);
    msg.setSourceEntity(49U);
    msg.setDestination(58503U);
    msg.setDestinationEntity(58U);
    msg.sessid = 616446657U;
    msg.messages.assign("KCFIUTHYMWGBDDEWXPLYKKRHPOWXUMKRWISRPDPFPWUJYUQLJTMZSNCPRAQOGXCRZEESEBFIVOTQZXHLNVAQZJUXTERMUOESUAXPNLZILBVQLHJWKQJTKSMJAY");

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
    msg.setTimeStamp(0.586731199755);
    msg.setSource(12607U);
    msg.setSourceEntity(244U);
    msg.setDestination(38951U);
    msg.setDestinationEntity(109U);
    msg.sessid = 1551708355U;
    msg.messages.assign("ZWGSMICJRKLHXVBOCUYNWYCAMXJMIAXLJBTWWHMXVCQBNVIYEGOHPSCYWVCYERBQXYOUSKRZOWDEUGRTDGDZAFERKZZNVWPGLY");

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
    msg.setTimeStamp(0.644665807072);
    msg.setSource(28514U);
    msg.setSourceEntity(49U);
    msg.setDestination(47379U);
    msg.setDestinationEntity(78U);
    msg.sessid = 3911299117U;

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
    msg.setTimeStamp(0.78428716525);
    msg.setSource(50145U);
    msg.setSourceEntity(153U);
    msg.setDestination(23552U);
    msg.setDestinationEntity(148U);
    msg.sessid = 956561704U;

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
    msg.setTimeStamp(0.614708665454);
    msg.setSource(28931U);
    msg.setSourceEntity(135U);
    msg.setDestination(43746U);
    msg.setDestinationEntity(173U);
    msg.sessid = 3437610552U;

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
    msg.setTimeStamp(0.709262303839);
    msg.setSource(58681U);
    msg.setSourceEntity(116U);
    msg.setDestination(40722U);
    msg.setDestinationEntity(108U);
    msg.sessid = 497783698U;
    msg.status = 12U;

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
    msg.setTimeStamp(0.187012656075);
    msg.setSource(12739U);
    msg.setSourceEntity(94U);
    msg.setDestination(56813U);
    msg.setDestinationEntity(99U);
    msg.sessid = 3189222777U;
    msg.status = 53U;

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
    msg.setTimeStamp(0.443396882223);
    msg.setSource(17830U);
    msg.setSourceEntity(81U);
    msg.setDestination(8774U);
    msg.setDestinationEntity(113U);
    msg.sessid = 1605484361U;
    msg.status = 172U;

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
    msg.setTimeStamp(0.174870735333);
    msg.setSource(9800U);
    msg.setSourceEntity(146U);
    msg.setDestination(12156U);
    msg.setDestinationEntity(151U);
    msg.name.assign("VQAJFSNSILQWFPG");

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
    msg.setTimeStamp(0.50212336763);
    msg.setSource(19856U);
    msg.setSourceEntity(240U);
    msg.setDestination(50987U);
    msg.setDestinationEntity(112U);
    msg.name.assign("CTRVHXCSBYGJFZSTZNZHCGHKPHMXEKXMPZRWBIHHDLLNQCXAQEATYUUDKVAWZURQVU");

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
    msg.setTimeStamp(0.256801801148);
    msg.setSource(18293U);
    msg.setSourceEntity(61U);
    msg.setDestination(32279U);
    msg.setDestinationEntity(8U);
    msg.name.assign("HAHUCEIEOEPRSNINOOZHDMVIHKHPNKJNHZMYSHSCQONELWJGZJYAQDXMLOBDCKXXYRORQRBATVTCUNBUSVLXFYUPFPUMBGVQZEIALWZCYSWIKTKTFGXJXTQKLEBHWBSYJXORMMLSVJBDPQGFIUHBJWQCPPWEWAYVMZCADYIXZGUIFJREJMKGVYDYLMXZJTGAHFDDSUKPVRAWQCDNXBAGWKKUOIZGFE");

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
    msg.setTimeStamp(0.496326787701);
    msg.setSource(42110U);
    msg.setSourceEntity(174U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(184U);
    msg.name.assign("OSLUVYNVKPVJVXMQXIYRBXCIUDQEHBRNDNCUPLIYHDXNPFBABIBSTVFRVUNHIYWGZVMRKUEKZPFODSAOTLOANQUQGKMETXPTLFAZACSNTFWLBEQSWZARCOPSXZQKWQMJXCMRUVQHNDZXYCUSRAAGOIZGEJYCHBYHXJGXWLCYMZBLPIWEOAWGHKNJCLKIZJSOFLTMOGYWASUWCPEBJHTHZBE");

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
    msg.setTimeStamp(0.674234436164);
    msg.setSource(9542U);
    msg.setSourceEntity(117U);
    msg.setDestination(48906U);
    msg.setDestinationEntity(59U);
    msg.name.assign("RUOWVUOJGUJRCMWBNMQMGSLEKTOFYLGYQNOKGZJKBBWDDRXKJEBDNIYJZGCNGTXALXUIOPAEDWANPNHDQLCOTACUGQUROTAMPEISNXECFCZYIBNJWFLZVPPSAQZVDEPMJRWFVZHHROBESWKIYJBVMDDOWXWHQWSLYTPJMZTDULUNVRCSYMQYYXSGGXZBIZQKJSAUIHKRTHVXKQEBHGECVHSFYTLTKXCNMVHCOLVFTRAAAFPQFRLFP");

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
    msg.setTimeStamp(0.422119586924);
    msg.setSource(55035U);
    msg.setSourceEntity(201U);
    msg.setDestination(291U);
    msg.setDestinationEntity(154U);
    msg.name.assign("RJTPDUAFJVGOKSLXYXGOSMLSFRXFJMNNRVLLIDQU");

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
