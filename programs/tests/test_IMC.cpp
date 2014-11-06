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
// IMC XML MD5: 47c721d8f40a3e28d20d84cc3d09de7f                            *
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
    msg.setTimeStamp(0.444435747407);
    msg.setSource(9074U);
    msg.setSourceEntity(35U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(90U);
    msg.state = 55U;
    msg.flags = 176U;
    msg.description.assign("QULOWDDVRUJINCRBANZWAFZDYMQTQLUCACKMJRBLDALEVYNMKETPSQZHZRKMVSMYKJNDAJJUTPXVFYFHVTROCDOVDTUPQSSPWQNRYLBGEAHGBXGREBW");

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
    msg.setTimeStamp(0.36008047965);
    msg.setSource(17139U);
    msg.setSourceEntity(22U);
    msg.setDestination(3550U);
    msg.setDestinationEntity(201U);
    msg.state = 168U;
    msg.flags = 144U;
    msg.description.assign("ZJPUDMJXSJKLCQIYOQLKYNXEIOEUOCVZXVWLRBAVJTIDONUITKGVRRBZIEGAQAJRVBEYSMKSPTEVGAQUASXOGFICXHSTNWBYLNFWLYUGDCKUUHDATMMAJBJOXWH");

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
    msg.setTimeStamp(0.250635200416);
    msg.setSource(46908U);
    msg.setSourceEntity(149U);
    msg.setDestination(56046U);
    msg.setDestinationEntity(192U);
    msg.state = 159U;
    msg.flags = 187U;
    msg.description.assign("OQPXIRRLLSOYRVWEOSAADWCNOGVKJJAGTAFUZTKWMERQHHFMTJCCDXMZNMJCVPUCVBNLOBZZZWZAWPSYUFSGOEQTKIYQIJDILVRWEPZVMGMIKHLTORVQIAFGNHDYELTAJZZACUILRMFNXUEHJBBIKGKTBPLDYXLPWFHAFGRXXAGDNODEXQHPLTTJYUBUCMHFWBWKRCYSQXCQSUVNVOBFOXPHSISDBKSFMI");

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
    msg.setTimeStamp(0.777989726177);
    msg.setSource(47442U);
    msg.setSourceEntity(10U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.152167800854);
    msg.setSource(14904U);
    msg.setSourceEntity(36U);
    msg.setDestination(8066U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.0686035450228);
    msg.setSource(33725U);
    msg.setSourceEntity(148U);
    msg.setDestination(7693U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.828100907052);
    msg.setSource(34213U);
    msg.setSourceEntity(245U);
    msg.setDestination(61971U);
    msg.setDestinationEntity(15U);
    msg.id = 132U;
    msg.label.assign("LAZRPJXSSMYCCYJHBDWJDWAUGJODULRQKNUHBFQEHIPEFVPDXXRUCNOYDPGKZTBXTKGQXTPMHXWJEEURDMFFAWTQNFVNLLJSHAAIMTQWGNVZCRRDPOYBJAKKXQSLHKHHSDPCCLIEYBACGVKGZZFQVOBN");
    msg.component.assign("FUQMBMWRDGEXMWZOTIARMBICFVCAIKWIWJTAFGANPBNZSLOKDNDEHZFZBJYLVWURYIASUYHPLBVCRZIAPGUKFDNOBCTNYDYJREEPSLDCSDPMZCWJQQMOOKZQINUCPRSQCXQJWTXDDOTVXHELXSVJJVPTEXUUHOMQIEAVOQYKZAKYNLFRDGZSQNYPLERXAIBFZJHWHGMAVPGHOGBYLJHV");
    msg.act_time = 56019U;
    msg.deact_time = 49416U;

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
    msg.setTimeStamp(0.00420623569934);
    msg.setSource(1477U);
    msg.setSourceEntity(207U);
    msg.setDestination(2866U);
    msg.setDestinationEntity(197U);
    msg.id = 103U;
    msg.label.assign("TFPAFDDRKIYSAERQCBZORGMBVXMDSUPDVFOFCLUNSBADQBYJJUAKIPEOXWWAMBUJAHKEVBTYCINBCCRKREJENKZGGEHEHXORQCZETPPTYRTNMHFGOPRLNJSGZVVWHTOOFFTBFPINXDAWKCN");
    msg.component.assign("OMDKSFSFEGXBGLLYRODFZKPHVOSBWTCUCRVMUPOBJIZGASKRSMHDZUTEMUSDVQBTCNIWJBMYWEPSRA");
    msg.act_time = 59022U;
    msg.deact_time = 28974U;

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
    msg.setTimeStamp(0.434523655357);
    msg.setSource(63050U);
    msg.setSourceEntity(96U);
    msg.setDestination(62457U);
    msg.setDestinationEntity(201U);
    msg.id = 230U;
    msg.label.assign("DBAYFKZHQPQJQIJPYRDGYEYZTSEFHYFVIKRFWOGVQOIPKTJQULLUKESNRAXSUEOZGCZMQCBGVDESRZUUTPLMAJFIOKAGTFMBAEMJVZKTNHXWZJFCVWMHXOPYITAQULLNBFVAVPRAAGQXBXRECDCCX");
    msg.component.assign("JYNPTSTLXNBYGDGFXMERCUFZCFVRBEMWRGYWFVPBINQLLWSEMLASCMHJ");
    msg.act_time = 17228U;
    msg.deact_time = 28953U;

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
    msg.setTimeStamp(0.282603136098);
    msg.setSource(51889U);
    msg.setSourceEntity(47U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(253U);
    msg.id = 15U;

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
    msg.setTimeStamp(0.165584047969);
    msg.setSource(37964U);
    msg.setSourceEntity(248U);
    msg.setDestination(50613U);
    msg.setDestinationEntity(84U);
    msg.id = 86U;

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
    msg.setTimeStamp(0.823258087463);
    msg.setSource(44263U);
    msg.setSourceEntity(239U);
    msg.setDestination(56598U);
    msg.setDestinationEntity(60U);
    msg.id = 88U;

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
    msg.setTimeStamp(0.406319668218);
    msg.setSource(56651U);
    msg.setSourceEntity(187U);
    msg.setDestination(6325U);
    msg.setDestinationEntity(42U);
    msg.op = 51U;
    msg.list.assign("NLHQUXQEEBCIEWPXFXCRYBNQHJMEUSKRDXKGWDWHMOFHUJVUSTJYOIEGKDFBLIGRR");

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
    msg.setTimeStamp(0.520064857617);
    msg.setSource(52600U);
    msg.setSourceEntity(82U);
    msg.setDestination(39106U);
    msg.setDestinationEntity(108U);
    msg.op = 114U;
    msg.list.assign("VHRFLVTZWOLWGBQTPSFHPSREXCPGAIQLAVOUOTGRCAURHWOKHJZPPWENVFOMKAYDYSUTQWUQNDWXZQMMNNBGBAMTWCRPEASBQMGGCVXIBEIOFXJMANHGUTZJHZHKLQDJPSDZYLQXDEJBDIUMYWOICGXKUPUQBXJFBRMKFEVCLPZYABETLYEFJTJYRXDLMYSXJNWOQADPWITCOVHERDS");

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
    msg.setTimeStamp(0.387257546178);
    msg.setSource(40672U);
    msg.setSourceEntity(243U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(194U);
    msg.op = 251U;
    msg.list.assign("NEHIEVRUZKSJPXVQVFBZMHOFXGKOCFADUOILZFVAJIJQQTBHGPHVQOQBWWMKSDDLRZSTXCKTEWKWQTAFFXRRNZQOXLWMRMDOOPMKMUFUUHCFCXXDPGPYYMKGAYYLSJKEBOFTUHYBPXTEGQCUNJVSSJRXONDREQQCIWBJJAWISHDIKIZLHSGGULOEBBHLGBRBNAMPDMVLZTYVWPPYIJZKGPWNLMNYYNTUVV");

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
    msg.setTimeStamp(0.881067782205);
    msg.setSource(17277U);
    msg.setSourceEntity(61U);
    msg.setDestination(27842U);
    msg.setDestinationEntity(148U);
    msg.value = 195U;

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
    msg.setTimeStamp(0.512099120951);
    msg.setSource(7991U);
    msg.setSourceEntity(107U);
    msg.setDestination(44079U);
    msg.setDestinationEntity(4U);
    msg.value = 78U;

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
    msg.setTimeStamp(0.203041439709);
    msg.setSource(42870U);
    msg.setSourceEntity(204U);
    msg.setDestination(25836U);
    msg.setDestinationEntity(51U);
    msg.value = 61U;

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
    msg.setTimeStamp(0.505287656834);
    msg.setSource(42239U);
    msg.setSourceEntity(47U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(158U);
    msg.consumer.assign("XFTSXKVPNMDXYAESJMTEUOEXZZANQIUSMHLSUWRSICZGLBVBFPFGOUCNVEPAHOVJBDMDXXBBWFSLRRDQVQGDYCPQMOZTIIXTEPXWQRTNGXVDBJFEJARULPUXZLOHHAZACFLURLJOMCMYSFRPKZMYNIIYYHKKWUUIMQRUKACLIKAJKBYVYOVPDERAGDZEADS");
    msg.message_id = 54379U;

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
    msg.setTimeStamp(0.524745200388);
    msg.setSource(38975U);
    msg.setSourceEntity(115U);
    msg.setDestination(44656U);
    msg.setDestinationEntity(37U);
    msg.consumer.assign("ESSCOWDTUGZBFKSCWGGESBWOYVJCLPCJANTKZMTXMYGCXDTFTVUHHQDUAXZJPKQAHUNMBFUAYXPVHBTAIMLZGOEZNFASTWLGFNUDQXPUKQKMEYNLENSJWYEIRRIWLZUCIGNXMXEHTYKIWPVQJJDOUDKSJAAR");
    msg.message_id = 6564U;

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
    msg.setTimeStamp(0.924173576127);
    msg.setSource(12966U);
    msg.setSourceEntity(202U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(58U);
    msg.consumer.assign("BETLXJSJJYOAUCAGCTEFKMBPPSRINK");
    msg.message_id = 64963U;

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
    msg.setTimeStamp(0.410326071199);
    msg.setSource(3193U);
    msg.setSourceEntity(225U);
    msg.setDestination(56323U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.699254658375);
    msg.setSource(10231U);
    msg.setSourceEntity(127U);
    msg.setDestination(41149U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.112430176848);
    msg.setSource(34737U);
    msg.setSourceEntity(84U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.772288260636);
    msg.setSource(53636U);
    msg.setSourceEntity(32U);
    msg.setDestination(44269U);
    msg.setDestinationEntity(33U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.46820593085);
    msg.setSource(47436U);
    msg.setSourceEntity(174U);
    msg.setDestination(5817U);
    msg.setDestinationEntity(161U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.714714456322);
    msg.setSource(16554U);
    msg.setSourceEntity(144U);
    msg.setDestination(59055U);
    msg.setDestinationEntity(144U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.968319184763);
    msg.setSource(43305U);
    msg.setSourceEntity(116U);
    msg.setDestination(38908U);
    msg.setDestinationEntity(57U);
    msg.total_steps = 146U;
    msg.step_number = 87U;
    msg.step.assign("OUVOOTHQHKSCDUKQOAPXIVNVZEVLCZTBCYLQJBXPLKDHSQKOAKWXSPFIDRNTRUSLBZZMWJONGQDFSNRZHTKNQUVDPDDGKBNOSIUEIEHULOUMJFWFEGEWWPDPAGCPHHYJERTUYMTWWRTAIZBRYVMEIOVYYZSQILLAYQDAGHTMCRMYNZGKNDTFXEZLCABBSFVJZGHAVCJPGLXXWVYPBHWIWBXQCOQAMIRJUEU");
    msg.flags = 230U;

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
    msg.setTimeStamp(0.273838095713);
    msg.setSource(40927U);
    msg.setSourceEntity(62U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(243U);
    msg.total_steps = 188U;
    msg.step_number = 229U;
    msg.step.assign("ECKIWVJAREBQMRZIEZXWGUSJPJKCXJQXGGWBCVPFTSDZTSREWBMTYDTMLWAOTDCYRMZLQNLKCTYFFHFHZOUMEKCKNYVUAIYUKQDLLHJXXVNDNTLNKOBDSFSWMQIIAPQKNPJJWFEZQHUIELGMUGQGRVSUMBWQAPOXMNQALZXYJOSPIZTBEERFXUVXIJYLHFTFVTNNKVWBCRCOHRIAHEYLZYDDNAUGBKMSDROGHRZPOOBJOPBAPGWDGSSYICAP");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.801462444741);
    msg.setSource(44906U);
    msg.setSourceEntity(139U);
    msg.setDestination(42672U);
    msg.setDestinationEntity(228U);
    msg.total_steps = 149U;
    msg.step_number = 143U;
    msg.step.assign("PMWQAIGQVXVNGEDFPTRSYDBSCWRMMFQKLCTKIYEXDJXONDOARVZYHICUYXBZGAJEMBFVMEPYULKGFPHXJRQTKNSZNXZGRMOIVZNIGOEEALUPTQMUMIOVROAZJLBCHOEYQZAOPHCDTBCJRXKGGAGACSYUDUJFXPZIQPSQSKYLUWFTTUMSDHRJQJSJWBZAXNNIW");
    msg.flags = 67U;

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
    msg.setTimeStamp(0.257769077273);
    msg.setSource(38279U);
    msg.setSourceEntity(76U);
    msg.setDestination(64309U);
    msg.setDestinationEntity(208U);
    msg.state = 17U;
    msg.error.assign("NYPTCCCBAJRDIADFPXH");

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
    msg.setTimeStamp(0.77374870714);
    msg.setSource(9894U);
    msg.setSourceEntity(241U);
    msg.setDestination(62262U);
    msg.setDestinationEntity(234U);
    msg.state = 187U;
    msg.error.assign("RPRHYRNSSDXGTQOFBPICZVDCDKTMTWQYJGSVIEZMBHPVKUUFPJMWELXW");

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
    msg.setTimeStamp(0.0376513623366);
    msg.setSource(31719U);
    msg.setSourceEntity(180U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(60U);
    msg.state = 238U;
    msg.error.assign("NQSWWIEFHDHPJHLUPBIVBGFQHEVAPNLAZSIGVQMUWDRYTPTJMGZOATVCJRCEVBOXSGMNMUVYHRIBOCZXIVNOTFHHXEGNBVEZKWWQYNKZYXGEMTTZIBLAVZSWCEFTXPDCSCNZKRRUPMYJFWKUUKSMNZNAXECVXDQPYOFIGAAYMYHQS");

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
    msg.setTimeStamp(0.494761947473);
    msg.setSource(34823U);
    msg.setSourceEntity(75U);
    msg.setDestination(46742U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.590341870174);
    msg.setSource(38U);
    msg.setSourceEntity(103U);
    msg.setDestination(46864U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.899220126251);
    msg.setSource(20698U);
    msg.setSourceEntity(142U);
    msg.setDestination(7070U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.143006389586);
    msg.setSource(36778U);
    msg.setSourceEntity(139U);
    msg.setDestination(8003U);
    msg.setDestinationEntity(19U);
    msg.op = 206U;
    msg.speed_min = 0.688198132543;
    msg.speed_max = 0.263842957067;
    msg.long_accel = 0.091386289828;
    msg.alt_max_msl = 0.241129005889;
    msg.dive_fraction_max = 0.588074724901;
    msg.climb_fraction_max = 0.433039953003;
    msg.bank_max = 0.267552007086;
    msg.p_max = 0.211514594021;
    msg.pitch_min = 0.952986593978;
    msg.pitch_max = 0.875289238886;
    msg.q_max = 0.221277335169;
    msg.g_min = 0.488815163407;
    msg.g_max = 0.629182787712;
    msg.g_lat_max = 0.222585210326;
    msg.rpm_min = 0.893890565664;
    msg.rpm_max = 0.0219216563875;
    msg.rpm_rate_max = 0.268385938725;

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
    msg.setTimeStamp(0.704707991613);
    msg.setSource(19257U);
    msg.setSourceEntity(37U);
    msg.setDestination(7294U);
    msg.setDestinationEntity(34U);
    msg.op = 173U;
    msg.speed_min = 0.989621590413;
    msg.speed_max = 0.0717863205966;
    msg.long_accel = 0.490815929111;
    msg.alt_max_msl = 0.56100402809;
    msg.dive_fraction_max = 0.418901887971;
    msg.climb_fraction_max = 0.251476464595;
    msg.bank_max = 0.740331205672;
    msg.p_max = 0.996997569746;
    msg.pitch_min = 0.515276163661;
    msg.pitch_max = 0.734507692884;
    msg.q_max = 0.529641626127;
    msg.g_min = 0.204897502907;
    msg.g_max = 0.373071908569;
    msg.g_lat_max = 0.587606622343;
    msg.rpm_min = 0.875381317851;
    msg.rpm_max = 0.411007681571;
    msg.rpm_rate_max = 0.19628461613;

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
    msg.setTimeStamp(0.34010874949);
    msg.setSource(36561U);
    msg.setSourceEntity(197U);
    msg.setDestination(20592U);
    msg.setDestinationEntity(100U);
    msg.op = 14U;
    msg.speed_min = 0.212194321168;
    msg.speed_max = 0.171347906564;
    msg.long_accel = 0.983839371016;
    msg.alt_max_msl = 0.551493354594;
    msg.dive_fraction_max = 0.114400788017;
    msg.climb_fraction_max = 0.152165145618;
    msg.bank_max = 0.684667509586;
    msg.p_max = 0.763397520846;
    msg.pitch_min = 0.668133542995;
    msg.pitch_max = 0.993086970198;
    msg.q_max = 0.91813357144;
    msg.g_min = 0.605653600016;
    msg.g_max = 0.790975900235;
    msg.g_lat_max = 0.776090095232;
    msg.rpm_min = 0.700182869262;
    msg.rpm_max = 0.366144476539;
    msg.rpm_rate_max = 0.347925850218;

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
    msg.setTimeStamp(0.164708319611);
    msg.setSource(33838U);
    msg.setSourceEntity(187U);
    msg.setDestination(14500U);
    msg.setDestinationEntity(165U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 212U;
    tmp_msg_0.request_id = 44888U;
    tmp_msg_0.command = 147U;
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 4681U;
    tmp_tmp_msg_0_0.lat = 0.388479512339;
    tmp_tmp_msg_0_0.lon = 0.789972577364;
    tmp_tmp_msg_0_0.z = 0.0482249564832;
    tmp_tmp_msg_0_0.z_units = 178U;
    tmp_tmp_msg_0_0.speed = 0.494533824294;
    tmp_tmp_msg_0_0.speed_units = 204U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.597412279182;
    tmp_tmp_tmp_msg_0_0_0.y = 0.756219208079;
    tmp_tmp_tmp_msg_0_0_0.z = 0.545360805217;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("JUGBXLFTXORYJKYENVKCZTPDEQVGBOXPHZISXGTYUHQFWIFMGIBLTZOUFGXRRINSCBBTYJOPLAFHVJCEZDPIKSAAXZYUOVNXKG");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 25116U;
    tmp_msg_0.info.assign("SWFZJINYNKSPARUGUMXTZJMOCVWXNMOVBTOCFDGKVCDQRMILLDNDDSKQQOWKLYJVWYNLWOHHAXEVGCSHLBZSOZEJQPBKUPVHYMALGKZUVVEWXASOMATOCBBKRETPPSSPDSTOSYKHTJIAZWXIUYRQGDXEWEXBBTHPRBCPFEZUNNLCM");
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
    msg.setTimeStamp(0.058064570832);
    msg.setSource(63899U);
    msg.setSourceEntity(23U);
    msg.setDestination(33570U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.200837071856);
    msg.setSource(43729U);
    msg.setSourceEntity(135U);
    msg.setDestination(41869U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.376428040907);
    msg.setSource(50503U);
    msg.setSourceEntity(112U);
    msg.setDestination(17877U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.536443037655;
    msg.lon = 0.844369436359;
    msg.height = 0.862286932515;
    msg.x = 0.0137842324234;
    msg.y = 0.0450935438104;
    msg.z = 0.287458327128;
    msg.phi = 0.176201876424;
    msg.theta = 0.194914816587;
    msg.psi = 0.563594743072;
    msg.u = 0.558428267379;
    msg.v = 0.457610271096;
    msg.w = 0.983037958676;
    msg.p = 0.0668672454721;
    msg.q = 0.457586795858;
    msg.r = 0.303631422411;
    msg.svx = 0.255825353084;
    msg.svy = 0.742058548889;
    msg.svz = 0.0413675664964;

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
    msg.setTimeStamp(0.752477829257);
    msg.setSource(15987U);
    msg.setSourceEntity(32U);
    msg.setDestination(64896U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.117222561138;
    msg.lon = 0.619113353429;
    msg.height = 0.0897246765033;
    msg.x = 0.160285819392;
    msg.y = 0.325694018377;
    msg.z = 0.985723059975;
    msg.phi = 0.383803135295;
    msg.theta = 0.334895851376;
    msg.psi = 0.632342180349;
    msg.u = 0.265472673606;
    msg.v = 0.838443641083;
    msg.w = 0.951388841363;
    msg.p = 0.584457725347;
    msg.q = 0.593792781456;
    msg.r = 0.966098850946;
    msg.svx = 0.0280933457651;
    msg.svy = 0.657005377716;
    msg.svz = 0.684580851335;

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
    msg.setTimeStamp(0.295793436537);
    msg.setSource(22306U);
    msg.setSourceEntity(160U);
    msg.setDestination(11854U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.766760377542;
    msg.lon = 0.367945936982;
    msg.height = 0.932544220855;
    msg.x = 0.943226203808;
    msg.y = 0.217340241831;
    msg.z = 0.887034607852;
    msg.phi = 0.531942572592;
    msg.theta = 0.506602364397;
    msg.psi = 0.502323404586;
    msg.u = 0.698047438953;
    msg.v = 0.83305295711;
    msg.w = 0.175635466637;
    msg.p = 0.155649642944;
    msg.q = 0.716928615667;
    msg.r = 0.587049301586;
    msg.svx = 0.48457881675;
    msg.svy = 0.397821777953;
    msg.svz = 0.477515992703;

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
    msg.setTimeStamp(0.22373450457);
    msg.setSource(51388U);
    msg.setSourceEntity(240U);
    msg.setDestination(48031U);
    msg.setDestinationEntity(146U);
    msg.op = 167U;
    msg.entities.assign("XYFXPPJQVPMMDYHWGCWGODOXDGMAPTDNAEOPEYSDSIZSEWHIMSIGUUFMLJUAENVWDZTPHHIHROCYKCRUYKLVVBGQBAXRBXKFNQAEXXZNWQANJMJQCLWLZXFHCLJKAUUI");

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
    msg.setTimeStamp(0.36513995119);
    msg.setSource(63644U);
    msg.setSourceEntity(233U);
    msg.setDestination(33426U);
    msg.setDestinationEntity(101U);
    msg.op = 180U;
    msg.entities.assign("TDUNSRWSMDFHJNNLRKHTPZZYZHYQSRBGIOZYPAFEPQNWCZDO");

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
    msg.setTimeStamp(0.065212750562);
    msg.setSource(8414U);
    msg.setSourceEntity(74U);
    msg.setDestination(18710U);
    msg.setDestinationEntity(44U);
    msg.op = 135U;
    msg.entities.assign("OSVFSERIHDWCXGMYWVTYRWXLTTLOODZBDLSDWCVNBIFJPGUXCURJWHAKNCGRYFAPRGPADZFLMCGGCKQEHJPFBZEZAGNVYHIYOBAMFXPTFESPKQKUDFGNEUXOVT");

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
    msg.setTimeStamp(0.596137942407);
    msg.setSource(38861U);
    msg.setSourceEntity(50U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(17U);
    msg.type = 158U;
    msg.speed = 60634U;
    const char tmp_msg_0[] = {-44, 120, 18, -106, -109, 84, 85, -111, 74, 67, 10, -87, 13, -97, 85, 104, 32, 72, -20, 67, 39, 4, -62, -76, 100, -4, -83, -14, -72, -30, 21, 70, 39, -33, -33, -49, 80, 39, -38, 25, -84, 49, 40, 50, -110, -38, -54, 9, -8, 29, -51, -45, -78, 97, 61, -84, 17, -96, -24, -9, -48, 27, 67, -128, 122, 100, 57, -4, -92, -86, 72, 38, 44, 121, 98, 58, -117, 83, 5, 98, 3, -83, -6, 7, -123, 113, -102, -95, -104, 76, -18, 80, 55, 23, -115, 31, 116, -92, -120, 108, 20, 36, 59, -95, 106, 101, 47, 105, 57, -56, 91, -10, -101, -7, 38, 53, -107, -111, -121, -118, -71, -50, 85, -13, 68, 75, 86, -115, 108, -72, -72, 53, 2, 57, -71, -118, -121, 83, 41, 89, 37, -54, 67, 10, -46, 26, -89, -106, -14, 81, 107, 122, -86, 26, -50, 124, -58, 73, -62, -14, 82, 9, -85, -38, 67, -86, -91, 5, 4, 66, -123, -121, 61, -123, -85, -53, -22, 78, -111, 100, -53, 52, 81, -35, 101, 109, 45, 113, -48, 12, 89, -34, 54, -113, 48, -41, 89, 93, -32, 125, -37, -74, 47, -60, 126, 83, 101, 52, 32, -111, 7, -91, 61, -88, -77, -107, -99, -69, -89, 18, -82, 86, 92, -54, -68, 124, -111, 25, -86, 113, 81, -50, -12, -50, -50, -36, 120, -64, 19, -15, 41, 47, -75, -9, -86, -78, -59};
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
    msg.setTimeStamp(0.640055753399);
    msg.setSource(15853U);
    msg.setSourceEntity(44U);
    msg.setDestination(48705U);
    msg.setDestinationEntity(37U);
    msg.type = 22U;
    msg.speed = 1803U;
    const char tmp_msg_0[] = {-94, -13, 81, -114, -92, 72, -52, 117, 105, 46, -72, -99, 7, -72, -83, -13, -69, -71, 24, -22, 94, 1, 50, 0, -16, -47, 108, 38, 121, -46, 90, -27, -111, 20, -65, 98, 16, 22, 64, 56, 97, -41, 65, 99, -66, -124, -29, 100, 54, 70, 63, -2, -28, 3, -2, 74, 0, 83, 4, 82, 85, 79, 55, 109, 29, 121, -40, -103, -60, -23, 16, 115, 26, -75, 46, 41, -14, 32, 102, 67, -36, -42, -24, -4, -19, 118, -9, -52, 34, -112, -105, 6, 11, 95, 22, -61, -112, 89, 79, 82, -105, -94, 38, 9, 20, 81, 54, -121, -77, -43, -97, -69, 41, -79, 119, -4, -76, 1, -35, 16, -53, 66, -39, -20, 122};
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
    msg.setTimeStamp(0.103244219155);
    msg.setSource(13442U);
    msg.setSourceEntity(198U);
    msg.setDestination(36525U);
    msg.setDestinationEntity(143U);
    msg.type = 132U;
    msg.speed = 42375U;
    const char tmp_msg_0[] = {63, -67, -40, 12, 30, -102, 17, -15, 11, -17, 101, 65, -1, -99, 70, 125, -113, -10, -97, 41, -40, 46, 56, -70, 58, -26, -11, 78, -85, 122, -73, 62, 23, -16, -50, 49, -44, -48, -97, -62, 82, -105, -52, -98, 91, 95, 8, 60, -68, -67, -77, -79, 89, 96, 24, 36, 43, 42, 35, -100, 101, -46, 86, 67, 64, 112, 39, -81, 1, -119, -119, -32, -2, -75, -98, -94, -59, -91, -47, -81, 18, -15, -1, -118, -82, 106, -13, 69, -40, 87, 7, 73, -11, 35, -53, 109, 12, 114, -104, -24, -26, -36, 105, -108, 120, 40, 41, -102, -45, 76, 40, 72, 51, 67, 120, -114, 101, -41, -35, -21, 119, 96, 42, -5, -90, 65, 81, 6, -102, -55, 16, 64, -76, 84, 55, -105, 87, -5, -88, 0, -83, -111, 70, -99, -80, 95, 0, -114, -115, -112, -24, -106, -46, -96, 83, -62, -17, 72, -112, -4, 4, -84, -124, -73, 42, -76, 14, 74, 6, -47, -49, 111, 1, 92, 65, 106, -102, 114, 89, 120, 33, 62, -36, -75, -70, -68, -92, 90, 109, 1, 74, 41, 66, -62, -107, -63, -18, -23, 67, -91, 126, 33, 68, -14, 70, -26, 10, -74, -37, 84, 67, -128, 93, 85, 65, 1, 72, 103, -109, -89, 86, 111, 126, 32, 81, -124, -98, -27, 10, -5, -115, -128, -99, -12, -128, -57, -91, 68, -39, -1, -118, -79, -72, -61, 125, 80, 50, -56};
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
    msg.setTimeStamp(0.947632394783);
    msg.setSource(64761U);
    msg.setSourceEntity(22U);
    msg.setDestination(55961U);
    msg.setDestinationEntity(236U);
    msg.op = 221U;
    msg.tas2acc_pgain = 0.12931596781;
    msg.bank2p_pgain = 0.435288166748;

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
    msg.setTimeStamp(0.0925834344879);
    msg.setSource(62097U);
    msg.setSourceEntity(96U);
    msg.setDestination(57882U);
    msg.setDestinationEntity(247U);
    msg.op = 81U;
    msg.tas2acc_pgain = 0.231615813473;
    msg.bank2p_pgain = 0.357963661688;

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
    msg.setTimeStamp(0.229599013553);
    msg.setSource(51539U);
    msg.setSourceEntity(64U);
    msg.setDestination(49178U);
    msg.setDestinationEntity(248U);
    msg.op = 192U;
    msg.tas2acc_pgain = 0.765941267927;
    msg.bank2p_pgain = 0.608235775622;

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
    msg.setTimeStamp(0.933120200542);
    msg.setSource(50402U);
    msg.setSourceEntity(39U);
    msg.setDestination(26660U);
    msg.setDestinationEntity(100U);
    msg.available = 2191003613U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.0594340211844);
    msg.setSource(328U);
    msg.setSourceEntity(131U);
    msg.setDestination(694U);
    msg.setDestinationEntity(88U);
    msg.available = 4195103030U;
    msg.value = 176U;

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
    msg.setTimeStamp(0.999539742242);
    msg.setSource(3043U);
    msg.setSourceEntity(205U);
    msg.setDestination(6391U);
    msg.setDestinationEntity(210U);
    msg.available = 2772728871U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.4884814128);
    msg.setSource(37845U);
    msg.setSourceEntity(90U);
    msg.setDestination(42002U);
    msg.setDestinationEntity(12U);
    msg.op = 64U;
    msg.snapshot.assign("OZEXDBBKDYKEISYXCQETWFKYZHLIJKCXPUZKYDEIDAZABQDKJALRJZFVUWPNBDPWGAMLBGTSUQSQKGAHDEUDOVRABPGVFCRFNOZIMBZSVIREYTVOJJFSWFDQZXHRNCNHYTTFHXIJNPWQRWIVVCCKTMUSBMXWOYKVMEIIL");
    IMC::AcousticMessage tmp_msg_0;
    IMC::SystemGroup tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.groupname.assign("RGQWFMNPQBKITFXGIMJYCBJSZYHOIKJDDEVMCPDQWNTPVGOOZHCIQCZUMRPYVYADZJRUYMWAGBNNMWIALUOOXSIZKXERDVNXYLKKDKJMPLPFBGFQUGJCJPLRNWHEGTLTSVDOVNEOELWRWEYIKKWDWBHLMQHUTAUCXXHRRHCRSXPIZFACJCXAITBZUNMXKUGHBCVSUABEWVVFOTQAHSELFLQBZSBJZMYLUDASXVJQSEOAYHRENTGFFGSDQYZPN");
    tmp_tmp_msg_0_0.action = 140U;
    tmp_tmp_msg_0_0.grouplist.assign("UUYPSWLERPJZSWTGTIKDGVQRFHTYFSFZB");
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
    msg.setTimeStamp(0.273854118467);
    msg.setSource(58966U);
    msg.setSourceEntity(1U);
    msg.setDestination(48319U);
    msg.setDestinationEntity(7U);
    msg.op = 199U;
    msg.snapshot.assign("XNXGSIPZWNQPJYTVMVXJEMCUCSESKBPBGXFTOJVDXLMWGAWXZWYUDALHNYDFJLZMLBEQWLXESWNCIZLKNRKOGXRYRTORSADBBVZMOKFWQUADHHJZZNCTGQZFODVMHNAEIMCERVFLQTWVDIATACXGKTTMNTHIQRSRUDKTIYKEGFLGQPQGAJKPRIUHNLWYVPYYHJVSFWCPKBBIUOPJONS");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3107395679U;
    tmp_msg_0.value = 69U;
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
    msg.setTimeStamp(0.123120137598);
    msg.setSource(62464U);
    msg.setSourceEntity(98U);
    msg.setDestination(14884U);
    msg.setDestinationEntity(155U);
    msg.op = 167U;
    msg.snapshot.assign("YYMEOYIXMGBKDRVANSZULCXHOEJNTJ");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 52U;
    tmp_msg_0.range = 0.0783873361522;
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
    msg.setTimeStamp(0.980854810855);
    msg.setSource(41702U);
    msg.setSourceEntity(45U);
    msg.setDestination(45084U);
    msg.setDestinationEntity(54U);
    msg.op = 164U;
    msg.name.assign("MSJHRVUEDAZYCVOEQXDSIGNKXVCCPFTARNMVMZOCHZTMWKEGVKJIXFCTEXOOSGKQKGOIRMBSADSNLXYIBVDBYFGQCWXMJVTZSHGCBNANIEFYAWWXEQHOUVVTPFAOEWLTKUGLBXSPSNQJDR");

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
    msg.setTimeStamp(0.264445564249);
    msg.setSource(35834U);
    msg.setSourceEntity(214U);
    msg.setDestination(35707U);
    msg.setDestinationEntity(219U);
    msg.op = 184U;
    msg.name.assign("GFEXLXWMGIAKBYBZLVDRRMCKOZCKRUFSPXTSGFHQUOLASPUOYDUXZQCZLFXSZOQRHZMHCREIJSHOOXFMVFHWJPPZ");

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
    msg.setTimeStamp(0.132100047326);
    msg.setSource(36567U);
    msg.setSourceEntity(31U);
    msg.setDestination(22438U);
    msg.setDestinationEntity(79U);
    msg.op = 148U;
    msg.name.assign("QEEWUEQUELGMQYDXYFZASOHAXOOIGOHKXCQBRVSSODUOFAXNFIBLYTHGRRNDZAVTUYAZVQFTDTNWPXJDBWRQVNFTEQFVEPSJPPXHQCEGZGZRKKNPJZTLACYSFZKIWDCGRCZOMGMIYIIPLPXKPMGSULTBDJNLVWYYQRHAAMNDBDHCLSHCJWIBKEPOCTVTFSBXZJKUWJR");

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
    msg.setTimeStamp(0.129520069111);
    msg.setSource(52202U);
    msg.setSourceEntity(69U);
    msg.setDestination(40903U);
    msg.setDestinationEntity(21U);
    msg.type = 32U;
    msg.htime = 0.913103426029;
    msg.context.assign("AQZGOEIFRSVTVGMCRVJZHELEMCYBMKVODTYNKPDWFIUXLWNAWVSYLRWGMBSPZBXKZTEMWHTDUDOCOPHQWNRCQYLSQVQIQTUYBBNGGAPFKOGGHBNNFGJCELHUSNXQF");
    msg.text.assign("NJDQMCEYPJUYEZPAOGAWLTEBZDMRGQOFEXXBJDHASZITIRW");

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
    msg.setTimeStamp(0.287653211345);
    msg.setSource(22688U);
    msg.setSourceEntity(96U);
    msg.setDestination(15385U);
    msg.setDestinationEntity(226U);
    msg.type = 41U;
    msg.htime = 0.960364960153;
    msg.context.assign("BPTVJXNMGRDSKOHWLZOWANBPYXMUUGGAPTEWOTTJPFIESZMCLJCEZVLRXHLQOITHXFMVPANFWLUOKQBCQYYHDMUJTUNMAAYRYRKIAROKPCMOAXPLZDFUKGVB");
    msg.text.assign("ZQNSLIVBQHKKFZJVOHPQBGUUOHXUKISTLFRAGRQMBGHKIABXVARUESONLLYCMYIFYYAFQWLJEDBXGFCNVLUTASUEODDPKTIJANRQPHDDICTZRUBRSWZEEXBYCGMYJZCAERQEXMBPLRJEIHJQJSGVYHOLJGGEUUTBHD");

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
    msg.setTimeStamp(0.726084866433);
    msg.setSource(48187U);
    msg.setSourceEntity(214U);
    msg.setDestination(11085U);
    msg.setDestinationEntity(254U);
    msg.type = 159U;
    msg.htime = 0.169703073402;
    msg.context.assign("UYTJULSDIKXUUYWDMNQDEQVFMIKDLCWEXELNRPQOCAECJICHVSUSPZFLOJDGGRLUQKKPEKHZZIJSCOHYGQSELGPHJWDVNUXTROVSKAOWOMQGAUZDWAZYCQMLBCTZLEMHEAMKDBAFPTBOLZDONYVHFSXTFFQPCZ");
    msg.text.assign("ZGBAAWBGQUSMZGDIJGNQKILLJAJMQVTOQMPDNIHCZTLLC");

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
    msg.setTimeStamp(0.992171218135);
    msg.setSource(19055U);
    msg.setSourceEntity(235U);
    msg.setDestination(51909U);
    msg.setDestinationEntity(40U);
    msg.command = 1U;
    msg.htime = 0.377171095074;

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
    msg.setTimeStamp(0.570705071952);
    msg.setSource(65338U);
    msg.setSourceEntity(143U);
    msg.setDestination(34665U);
    msg.setDestinationEntity(9U);
    msg.command = 65U;
    msg.htime = 0.568906603773;

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
    msg.setTimeStamp(0.0365690390705);
    msg.setSource(14959U);
    msg.setSourceEntity(51U);
    msg.setDestination(38490U);
    msg.setDestinationEntity(221U);
    msg.command = 196U;
    msg.htime = 0.456525823634;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 252U;
    tmp_msg_0.htime = 0.52380054298;
    tmp_msg_0.context.assign("TIJKIMVBRYRNBGWYPDCKCDFLRIQXMKYLLWKBXHSGDPEFUOUEBEF");
    tmp_msg_0.text.assign("BNJEZGPKAFIBWVCKJRTYBUWSCWFZPRTRJMWGOLWQZUDOPAHVZQXSGONQAWCQOUMAIEEYSBUVNXZEMZHLDSTLCSSHIHEYHJIKUFBVNKRDAJQORXGMKLFLTAJZFEDMMFGVKSUOSPXQEJTDXIZLWWPFTAPEAENNCDQXBQJHYVWNVDVXZCTPFKTRVFVDQX");
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
    msg.setTimeStamp(0.0308779989733);
    msg.setSource(27869U);
    msg.setSourceEntity(230U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(163U);
    msg.op = 86U;
    msg.file.assign("KUBIMBCSVLFTKCIHXIMCFXRGCQXDB");

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
    msg.setTimeStamp(0.820809543463);
    msg.setSource(2405U);
    msg.setSourceEntity(135U);
    msg.setDestination(55101U);
    msg.setDestinationEntity(134U);
    msg.op = 212U;
    msg.file.assign("PDKJJUGCOTSFSWBSFPCDKZORFKHYYNJKQCTUFYGTMRVWCJZMTYXIBUKZSKVWOMLZRNVAVBSGAUTIOXHIEHYZOGGXXBCCDJSVNADHWIYLTASXQARQEXZYBMMJAHBWWIIKAFWSOPMZXVMDOIWEDZJQEUVPNPLDHSWSRAKUVPJWPFBHPRDDMICQMBQEUKLLNPIB");

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
    msg.setTimeStamp(0.899509006597);
    msg.setSource(10954U);
    msg.setSourceEntity(200U);
    msg.setDestination(9277U);
    msg.setDestinationEntity(18U);
    msg.op = 86U;
    msg.file.assign("BOAWHZAXQYEUODVBQYPHCHXRBNOVPGUREZPNSZPGKOBWSDFWEWGZFCYFTQZKIKXWVMUBBILWVQKCQUERITDDSFYBPIRVHHGYTYAXPR");

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
    msg.setTimeStamp(0.369400906475);
    msg.setSource(3503U);
    msg.setSourceEntity(130U);
    msg.setDestination(60668U);
    msg.setDestinationEntity(47U);
    msg.op = 244U;
    msg.clock = 0.0827113934188;
    msg.tz = 66;

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
    msg.setTimeStamp(0.985298986974);
    msg.setSource(9299U);
    msg.setSourceEntity(205U);
    msg.setDestination(41080U);
    msg.setDestinationEntity(168U);
    msg.op = 42U;
    msg.clock = 0.118440406895;
    msg.tz = -124;

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
    msg.setTimeStamp(0.500500448162);
    msg.setSource(53336U);
    msg.setSourceEntity(11U);
    msg.setDestination(41007U);
    msg.setDestinationEntity(58U);
    msg.op = 31U;
    msg.clock = 0.939270796296;
    msg.tz = -111;

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
    msg.setTimeStamp(0.101373662061);
    msg.setSource(15809U);
    msg.setSourceEntity(165U);
    msg.setDestination(29761U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.290834557009);
    msg.setSource(43928U);
    msg.setSourceEntity(51U);
    msg.setDestination(56847U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.979896483197);
    msg.setSource(7844U);
    msg.setSourceEntity(122U);
    msg.setDestination(8600U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.479997480516);
    msg.setSource(55744U);
    msg.setSourceEntity(57U);
    msg.setDestination(12109U);
    msg.setDestinationEntity(147U);
    msg.sys_name.assign("OIERGAJRPZDWRBFQRWURMBZBTIBREBEVNUWTGLCJUXDSSIMEYNSLUVANWSBCQFJSIXANYVVTQDCPVZSMAKOPHYAPHDZJSZSEHTYIGQPMKJKGKPOKIUVSYACMPZVUJTXQRULXYCFNJKZDPCILEFGOLWFFKSXLOFENYOHLWDACBQMZHKMGPBKOTGFLDCVTOJDIRWQHYIEKRWDYXDXTUBTOOENGQURGHAAJWNMCVEHNBQJFUXAHCL");
    msg.sys_type = 159U;
    msg.owner = 48623U;
    msg.lat = 0.19120451074;
    msg.lon = 0.328782803119;
    msg.height = 0.500430022051;
    msg.services.assign("VFHJJNIHKCLLRNTKAAGQUQWDTICGANEICFUVJEXYCLYLWDYSSLDFFJLRLIFYCSCWSHZCGCGQDQDPXXFXKEYOQUEEXOYUZJ");

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
    msg.setTimeStamp(0.754994312981);
    msg.setSource(19241U);
    msg.setSourceEntity(177U);
    msg.setDestination(15746U);
    msg.setDestinationEntity(132U);
    msg.sys_name.assign("KLDNFXHHULJYPDEZTZWXWNOQJXHGSYQXGYXCBSTKFRSWEPADMOESOIKXLXXBUHAIEJSEUBMTBALFGOPNFTIQNVEJYBNOKKDGUBDVKRLCAZRHVDHSOAC");
    msg.sys_type = 20U;
    msg.owner = 43329U;
    msg.lat = 0.0371553158589;
    msg.lon = 0.524827503254;
    msg.height = 0.958807966073;
    msg.services.assign("ONEYMWLUOYLRGQYUVMHKHFHJKMHSRLFZYGBOUPCCCTPHUQDWVPINDYFWQDAEMCNKZULFWAIETRJEPKBEIDRLCTXKXWGZIWNBTOSJRQZOSPSXRSBXCTZHPCVTBXUSZWNKMEIYADSQAJDUNEJIOGWKVVBQQMISDXBXJPQHBADOWFYMAIZHZRSINOJCMF");

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
    msg.setTimeStamp(0.667362893211);
    msg.setSource(18926U);
    msg.setSourceEntity(171U);
    msg.setDestination(11517U);
    msg.setDestinationEntity(134U);
    msg.sys_name.assign("WBXSWSEVBPGNNIDKPJVDMZLTNMMIQTFHKBJCZCHW");
    msg.sys_type = 82U;
    msg.owner = 54176U;
    msg.lat = 0.633124655809;
    msg.lon = 0.493488617454;
    msg.height = 0.446339088569;
    msg.services.assign("EFDMZRVGZCCEERLWVTMCPUBIYKKJUVENAQJATZQBQLOTUWNRKDOPSZXAICSMEHGOKDFHYULLOAAPFTVBRNFEISFHGLRFHTJGABXEIAQDVWUXHROYOPJSPQNJFYLPIJWTFGJYSXMBBGFKOVICKDTMNIXKQJYOBLTHQCGJGSRNSLGNNEKAVYBZUPVQMSBMFYXTDISWWTRCVGWHSHNZDIEMCWUIPOXAVKUNKUMR");

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
    msg.setTimeStamp(0.100839133461);
    msg.setSource(32183U);
    msg.setSourceEntity(210U);
    msg.setDestination(64678U);
    msg.setDestinationEntity(84U);
    msg.service.assign("KRAZXICRBSUTQGSEOCYVTAAEOEETTMGFEKVFOHIQYUXHNKSZSZWORRPDRGMQYERLIXDQUPLHNNKAIMSVOGBDZKTBHKQNGILDQ");
    msg.service_type = 97U;

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
    msg.setTimeStamp(0.264462803124);
    msg.setSource(57203U);
    msg.setSourceEntity(94U);
    msg.setDestination(58824U);
    msg.setDestinationEntity(7U);
    msg.service.assign("ILSPAESYAMNBGFAJBHHCPXZHUSCNIXOWOPRBVNPLIIQLCVYOSODOTPOFUXSBLGVZASPWJLXPQHMMOZEC");
    msg.service_type = 154U;

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
    msg.setTimeStamp(0.148134786194);
    msg.setSource(19972U);
    msg.setSourceEntity(139U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(163U);
    msg.service.assign("NTVDAJNXNEUQAWFRTRKQTRYUXYIBOBGZTGIVYRYHBKKNFJZKZSCELKBUWCZUWRHDXWNSEKJEVEIIAYOMYOXUPIWXDLTPNDLPMSZHHRETTMJAKOLXVQRVYLRJHSOEQCHSPJTVONJBQCGGGQGU");
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
    msg.setTimeStamp(0.755475775306);
    msg.setSource(2503U);
    msg.setSourceEntity(169U);
    msg.setDestination(52791U);
    msg.setDestinationEntity(151U);
    msg.value = 0.217211415065;

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
    msg.setTimeStamp(0.402299302204);
    msg.setSource(63485U);
    msg.setSourceEntity(168U);
    msg.setDestination(65191U);
    msg.setDestinationEntity(19U);
    msg.value = 0.783215728385;

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
    msg.setTimeStamp(0.158723595811);
    msg.setSource(64329U);
    msg.setSourceEntity(44U);
    msg.setDestination(24158U);
    msg.setDestinationEntity(122U);
    msg.value = 0.448142353976;

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
    msg.setTimeStamp(0.992693068996);
    msg.setSource(36460U);
    msg.setSourceEntity(91U);
    msg.setDestination(58366U);
    msg.setDestinationEntity(161U);
    msg.value = 0.380718248857;

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
    msg.setTimeStamp(0.742833718375);
    msg.setSource(59604U);
    msg.setSourceEntity(122U);
    msg.setDestination(42938U);
    msg.setDestinationEntity(176U);
    msg.value = 0.575735890538;

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
    msg.setTimeStamp(0.851889020168);
    msg.setSource(32952U);
    msg.setSourceEntity(50U);
    msg.setDestination(56958U);
    msg.setDestinationEntity(92U);
    msg.value = 0.65545478289;

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
    msg.setTimeStamp(0.0897361424199);
    msg.setSource(17234U);
    msg.setSourceEntity(144U);
    msg.setDestination(27164U);
    msg.setDestinationEntity(227U);
    msg.value = 0.782187374451;

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
    msg.setTimeStamp(0.164662963795);
    msg.setSource(57029U);
    msg.setSourceEntity(139U);
    msg.setDestination(15711U);
    msg.setDestinationEntity(250U);
    msg.value = 0.623930951353;

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
    msg.setTimeStamp(0.493249563705);
    msg.setSource(7116U);
    msg.setSourceEntity(144U);
    msg.setDestination(29251U);
    msg.setDestinationEntity(146U);
    msg.value = 0.168759703597;

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
    msg.setTimeStamp(0.21881884352);
    msg.setSource(33882U);
    msg.setSourceEntity(231U);
    msg.setDestination(9497U);
    msg.setDestinationEntity(109U);
    msg.number.assign("VNICTJYXIOLKKGOVLPJWGXAPUYUSHBUHPMGCMRSGYZHFJDQTREMGTTEKDNDS");
    msg.timeout = 19665U;
    msg.contents.assign("YIHLASUOKPLVORGRIGLFESIBZOPYNMQKRQJDMKXTIYVUGLDTOXQSZFFISDDRFQXFPGKCTAPRZQLQZADDSCWWDIJITXNJVKXPLGTAHPOAXCNEIOJSUPBYLKYQBEEAKDQHOENGZNMHUMRRXJRVPDVKVWLGVNFCBUBKMYSFKWJCZQU");

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
    msg.setTimeStamp(0.783081230603);
    msg.setSource(56032U);
    msg.setSourceEntity(91U);
    msg.setDestination(42066U);
    msg.setDestinationEntity(65U);
    msg.number.assign("WMJDVVEQYIYQLSBPPWIGXQSVJLDAFGCOKTNTICTOMXYJHUQRDUPTSASORDBOJOWQNHTAEHEMCXVJHFLBKOEGVBPEWSCMKBYOROUDASVNAIMJSDGNYFFMCJFPJPXSSNQCDIWZUXXYZEMLAMJDRWDHUXGBBRTRHVPNAXFYLSIKMWQYOZEQRKBWREPFEAGFLFLQNXCLTKCAZIO");
    msg.timeout = 47369U;
    msg.contents.assign("LHKEQVUGIOPOVJRJRAYMVBXZOHAZPXBFDBBMYCJCYMZLIFSAANDLCFZUXNVHTROWQQVSPEAQWCGUJDHDPDCIUPNQRNWWGNDXGSRCZQOSNFPLRWFKKMNEPAMIIOJJUSZYHEWCIFOPRNDDGXCYWLBKFMXKJMGTUL");

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
    msg.setTimeStamp(0.664076262346);
    msg.setSource(27084U);
    msg.setSourceEntity(114U);
    msg.setDestination(24225U);
    msg.setDestinationEntity(32U);
    msg.number.assign("ZUELDBNQQRLCXOIUDMOPGHDUNAMQLRKRCTEFTLPOGXIOBRGAIAOMRYDVLASEINCXQOWYSKCFXGNTMTCEUFUKKJWEHGHRYVXVYCRYTRHAIZQKEVYAQUBMFSTURMLHGBVVSSPWDPQANFMDJJYBKNHPQBUTVBWEZHMKLYJTCCYPWAJSWWPJKXEXGAVJZOAKZUIWOSFESDMWGZSIRDIBPIZGZXJ");
    msg.timeout = 47788U;
    msg.contents.assign("SBQYCWIYJJDWJHHAQENCBTECUJQDBNFFLODRRFGNSVQRUVFPZJMIRGCMRZKILWTIDZHQFGHZMTMIHWQWJFBTZLITLOXLVKCUEKOWRTVBMXHYCVUZERXSDOPQH");

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
    msg.setTimeStamp(0.0465615066345);
    msg.setSource(24125U);
    msg.setSourceEntity(217U);
    msg.setDestination(59330U);
    msg.setDestinationEntity(73U);
    msg.seq = 3374047434U;
    msg.destination.assign("WKYJKYIRHEANDBPOGDPKDUVFHQAAXPENXLUOSWQOJSMGRWTAMUKWEEFJPGFSPSIYJQ");
    msg.timeout = 56858U;
    const char tmp_msg_0[] = {-122, -78, 15, -61, 118, -72, -84, 7, -41, -39, -128, -109, -69, -114, 59, -52, 17, 88, -82, -115, 111, 25, 85, -75, -114, -126, -27, -56, 5, 37, -108, -43, 98, 77, -89, -54, 104, 78, 57, -125, -53, 68, -115, -1, -8, 38, -66, 31, -56, -41, 2, -4, -107, -1, -98, 3, -46, -80, 15, -34, -83, -103, 104, 104, -52, 83, -73, -33, -4, -16, -59, -13, 97, -66, 64, -68, -76, -76, 104, -9, 125, -72, -58, -11, -106, -38, -122, 1, 54, 21, -14, -97, -48, 79, 8, -81, 95, -107, 105, 57, 105, -99, -53, 125, -47, 125, 123, 107, -115, -23, -30, 51, -56, -118, 118, -48, 59, 71, 32, -126, -37, -27, -16, 57, -74, -28, -29, -117, -97, -63, 103, 31, 91, -116, 32, 72, 45, -67, -99, -74, -65, 51, 118, -84, -53, 6, -48, 82, -35, -48, 64, 27, 49, 58, -104, 123, 77, 78, 46, 54, -126, -75, -17, -30, 74, -69, 116, -61, -103, 49, -33, 0, -17, 120, -18, 59, -118, 75, -18, -81, -74, 30, 119, -117, -58, 4, 8, 104, 24, -46, 63, -62, 103, 9, -34, 126, -39, 44, 106, 6, -119, -5, -38, -115, -105, -23, -72, -4, 105, 51, -110, -33, -101, -42, -94, -104, -28, -90, -117, 11, -61, 36, 54, 26, -59, -99, 111, -54, -71, 83, 117, -69, -6, -108, -104, 106, -41, 31, 14, 89, 10, 81, -91};
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
    msg.setTimeStamp(0.691847926448);
    msg.setSource(26779U);
    msg.setSourceEntity(109U);
    msg.setDestination(3294U);
    msg.setDestinationEntity(72U);
    msg.seq = 3392513699U;
    msg.destination.assign("FACNZENHAUBNCJTYBIKCOQXIHIXAWEDXVOWENVJYLERVXURPLUJQGPQBMVBHJQEGZEMAJFDAPTJGKZKNREGMKIGAMJUVHOOAIEQMIRRUKXDTWV");
    msg.timeout = 7921U;
    const char tmp_msg_0[] = {54, 104, 6, 102, -9, 34, -74, -65, -113, 124, 6, -26, 62, 48, -27, -7, -89, 99, 101, 15, 124, 86, 60, 56, 110, -12, -32, 63, -3, -60, -77, -99, -42, 123, 36, -99, 92, 100, -39, -18, 7, 12, -104, 16};
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
    msg.setTimeStamp(0.274207925747);
    msg.setSource(19806U);
    msg.setSourceEntity(219U);
    msg.setDestination(5151U);
    msg.setDestinationEntity(190U);
    msg.seq = 131539534U;
    msg.destination.assign("VXBDUKCANSERRQTZUBZHSFAKPCQUKVZOGOLPN");
    msg.timeout = 44965U;
    const char tmp_msg_0[] = {36, -93, 33, 113, -107, -67, -103, -21, 79, -38, 23, 11, -26, -110, 72, 101, -91, -86, -86, -109, 118, 6, 123, 57, -15, -92, -23, -57, 107, -96, 105, -103, -24, -66, -8, -39, 83, 43, 13, -117, -91, -18, -85, -113, 98, 18, -76, 94, 19, 116, 89, 8, 8, 101, -26, 87, 105, 97, -81, -127, -53, 122, -83, 91, -63, 80, 36, -35, -1, 94, 83, -120, -117, -5, 3, -32, -74, -126, -81, 115, -108, 99, 86, 64, 88, 92, -87, -124, -113, 73, 120, -94, 111, 43, -111, -36, 93, 104, 77, -21, -69, -27, -53, -67, -66, 53, 68, -71, 66, -7, -5, 94, -53, 39, 26, -17, 87, 124, 35, -96, -8, -120, -19, -57, -37, -8, -2, 123, -21, 110, 38, 0, 62, -58, 71, 62, 113, 1, 19, 76, -14, 51, -17, 41, 49, -99, -64, 92, 89, 33, -98, 14, -104, 126, 11, 44, -99, -111, 86, -15, -124, -58, -42, 41, 38, -42, 55, -82, -79, -95, 52, -44, 41, -52, 118, 0, -52, -65};
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
    msg.setTimeStamp(0.411085280896);
    msg.setSource(60447U);
    msg.setSourceEntity(53U);
    msg.setDestination(57369U);
    msg.setDestinationEntity(176U);
    msg.source.assign("FMHPCJXZJEIONNMLRAREZVBHUVITIWMUFYNOPSPUZCMLNJEKMYPPNLFBXPUGJIDBPNYGHEXWMSJLQTQGCAQCLOFKBDAGWRQAWGZKEAWGZDVTFCURVFBIJDRRITDIZQ");
    const char tmp_msg_0[] = {-78, -35, -73, 39, -123, -76, 1, -74, 10, 8, -90, -120, -46, -103, -9, -45, -5, -86, 78, 66, -58, -97, -72, 56, 41, 10, 78, -60, -66, -13, -77, 5, 109, 40, 115, 109, -119, -110, 94, -26, 109, -39, 92, -109, 6, 66, -25, -62, 104, -53, -9, 67, -116, 119, -6, 122, -39, -61, -112, 41, -26, -56, 112, -60, -86, 103, 6, 112, -59, -42, -90, -34, -46, -2, -96, 74, 115, -42, 36, -36, -13, -21, -127, 18, -94, -118, -105, 0, -46, 83, -57, -46, 18, 10, -111, -72, -55, -33, -52, 44, -91, -25, 59, 18, 93, -118, 65, -84, -37, -48, 80, -16, 28, -94, 66, 77, -5, -16, -56, -105, -60, 53, -112, 106, -105, -96, -34, 26, -2, 46, 76, -26, 118, -47, -33, -80, 103, 97, 59, 88, 50, 89, 86, 104, 86, 35, -104, -57, -124, -65, 0, 88, -81, -68, -73, 100, -116, 18, -35, -86, 24, -50, -80, 112, 3, -43, 114, 101, -5, 67, 99, 48, -10, 44, -45, -67, -82, 49, -55, -41, -92, 70, -111, 49, 0, -125, -50, 82, -113, -21, 71, 52, 54, 41, 12, -6, -95, 15, -50, 32, -6, -89, -15, 49, -21, 100, 71, -7, -115, 117, -85, -75, -74, 82, 39, -17, -123, 93, 33, -60, 80, 65, 79, -108, -128, -82, -38, -6, 4, 30, -115, 82, -28, 34, -14, -52, -4, 76};
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
    msg.setTimeStamp(0.373669290819);
    msg.setSource(19895U);
    msg.setSourceEntity(116U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(191U);
    msg.source.assign("ZGROWICLTTZ");
    const char tmp_msg_0[] = {15, -6, -17, -44, -94, 66, -90, 112, -49, 79, 111, 35, -128, -127, -48, -27, -120, 58, 45, -44, 104, 107, 11, 78, -34, 30, 14, -72, -125, 64, 14, 118, -92, 39, 52, 109, 97, 83, 2, 53, -67, -51, 8, 92, -59, -15, -17, -77, 52, -68, 65, -35, 108, 55, -81, -31, -128, 110, -123, 99, 3, -84, 80, 113, 119, -16, -125, -81, -68, -118, 22, 36, 105, -69, 97, 76, 60, 13, -37, -18, -73, -10, 98, -68, 21, 18, 93, -123, -12, -37, 12, -43, 125, 124, 87, 75, 73, -28, -97, -67, -60, 49, 1, 13, 58, -34, 123, 30, -72, 91, -37, -94, 94, -119, 114, -118, 118, -79, 87, -11, -97, -88, 118, -99, 30, -124, -3, -115, -63, -30, -110, -41, 53, -70, 88, 4, -32, 116, 34, 124, 106, -42, -85, 122, -92, -17, 58, -124, 26, 12, -14, -53, -23, 120, 32, 99, 40, -75, 100, -70, -43, 63, -66, -91, 92, -89, -109, 124, -82, -29, 62, -67};
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
    msg.setTimeStamp(0.358939814322);
    msg.setSource(43316U);
    msg.setSourceEntity(153U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(119U);
    msg.source.assign("YAETPHKIDLCPHJDFFVAWEOLEYWMSL");
    const char tmp_msg_0[] = {-24, 104, 96, -2, 111, 54, -55, -28, -13, -95, -45, -57, 74, 18, -101, 32, -29, 119, 20, 111, -14, 117, -18, 7, -70, 14, -82, -29, -6, -77, -90, 70, -95, 28, -2, -45, 3, -27, -37, -21, 119, -37, 69, 126, -5, 95, -96, -15, 92, 21, 124, 95, -31, 81, 47, 6, -85, -93, -7, -47, 80, -93, 61, -16, -9, 5, 18, 32, -21, 43, 77, -99, -94, 120, -90, -11, -67, -125, 84, -38, 59, -97, 111, 46, 66, -23, 11, -46, 70, 61, 75, 51, -70, 104, 13, 73, 18, 62, -56, 35, -93, -80, 118, -30, -28, 124, 24, 124, -62, -1, 39, -8, -22, -79, -85, 103, -70, 34, -82, 43, 59, 70, 10, 78, 17, 94, -114, -93, -22, -16, -53, 55, -82, 87, 37, 22, 47, 89, -42, -72, -76, -82, 89, 31, -70, 71, -108, -58, -82, 98, 90, -94, 11, 80, -56, -97, -19, -127, -67, 28, -57, -125, -61, -112, 29, 124, 25, 61, 112, 55, 72, 43, 95, -41, -18, 91, -58, 52, 98, 82, 76, 108, -119, 73, -84, 34, -12, -15, 15, 16, -24, -120, 112, -74, 57, -103, 102, -67, -29, 83, 50, 117, 108};
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
    msg.setTimeStamp(0.600864618941);
    msg.setSource(31934U);
    msg.setSourceEntity(154U);
    msg.setDestination(37918U);
    msg.setDestinationEntity(69U);
    msg.seq = 2718271784U;
    msg.state = 35U;
    msg.error.assign("BFHPJKLENMFWTKTZSBSZNHGUYFIOYYIASU");

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
    msg.setTimeStamp(0.0651853538239);
    msg.setSource(50291U);
    msg.setSourceEntity(201U);
    msg.setDestination(21135U);
    msg.setDestinationEntity(6U);
    msg.seq = 706986874U;
    msg.state = 145U;
    msg.error.assign("CECEHVFMSBOZPYXMBXUSEMSKPGEGPZVXPUTBFCQDWHPJGUDOZDLCYMTOZTUKHEHKNQRNDUGIFQLZTBMHYUTJSFGKTAXMQVAZRBWCOZUXIRGVXFZGCIHOIZAAWMGPNRLNNNSLJGCJYDMRNAWEXQOUJTMKVHUKOFDPRWWYSTLUAILYYIRXVJBVRLIEYGWPWLJPDNATQADVKFRRSENXFAWIASFKHCNVOIDLEDEPLTBKBJQMYIBZCQJXSFQHQCWSOB");

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
    msg.setTimeStamp(0.446107231264);
    msg.setSource(15368U);
    msg.setSourceEntity(234U);
    msg.setDestination(47645U);
    msg.setDestinationEntity(251U);
    msg.seq = 3367676200U;
    msg.state = 60U;
    msg.error.assign("SXCWAVTWMDUTXCTMZNNMNYRFTQADPWCGCBNHLJVSCXKVJVABEHUJSRKNHWBGUJSLKRZQZWYIUXGFLXQBDEJPIOYYZFJAAVALHYDBOFKHHSFSGFOGZKJCHVOSGTBRILFZUZBONLKIYUAELLEODETCSPPYGAANEXPTZVVQIVMMCAVSIHDKWYPGRQOORNTDWWBRDQLHOXYTZIJPYKTGDMXMKGUUORXPLIZUKEXEPNRFQDMQFJQPICCFWMB");

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
    msg.setTimeStamp(0.718333268373);
    msg.setSource(42320U);
    msg.setSourceEntity(45U);
    msg.setDestination(36825U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("DGVBOVPFPQGXHXQAJTGDZASMJXEROK");
    msg.text.assign("DCLXCNKJVTYQUOZFZENYQUEDBHCNPTKTUWWSCINJTJWVIBIZURAGMEEWSXASRFPGKMDLCEIQNQVIQEEVBMJZWBHAVRFYWGEHGKHJOKUHYVVNTEDLNGWPKDLKIPWYXSXCWHMSKLGZXCUQFONNUYTWBVGVMQJRFPHZXXFATOCSBAHYLGOOPCMRLOHYDDMRBPB");

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
    msg.setTimeStamp(0.206801023095);
    msg.setSource(29684U);
    msg.setSourceEntity(151U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("YGAIXFDCDEPPKNHJKKTRSAJULVMHOSUTRJSYBEKORRLNGXDCSJWELJEAVVDQKBAOHDPBEGTCIVAEUZTQFBPWDFWQVPCDNXIHAEZODLVMPXHHYWWXYUCUKQVVVULHXUBXGRIKMREPBABWJMCTRZKGFGLNDCXUOOFCNGLUZHTN");
    msg.text.assign("FHBQQHDNUKYESRMTDBUDYKSTQVQOXMSYCSGPNHVBLECENOSQAYHHWZOFGVMYDZBUKWGQSUCIWXBRKFGWNCPEVZCTUSEAGOXDYQPEBELMCDDAITMJFPLIRKVZHTCMPPJKHFHKIOJXAQWJRSRLURFADAYELKIEUMGNVNDTLQJZWLNYXIFJOFRDATYETROVNQZPMPIAGWSZCJKXMZUBVGGWPRRSXIMFZNFKTOIUTJOVJAZVWILCJNCAYXWBLBPO");

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
    msg.setTimeStamp(0.242767421497);
    msg.setSource(16016U);
    msg.setSourceEntity(223U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("UYSXSVHYGZZVJIPMIMEFZLLSJCCYAEJIYSHQHIJ");
    msg.text.assign("ZWPFCSDQDORSZSKBHRYRGZLWVILWEMBMFWWLBVHUIGGAXHKRLBWXNZUBPPJJFQHIQUWHOGMQTVUENDEISCKVCPPAXDKIMXTFJJTRMXYGNCYNAOTTTKPDPEIAYIEFCBCQZHNGNHUBISKTGFAHSEKOXBCGNEODOMQRRZJGXXYMQLWXJUKWVUUCJPTYFOYNWBDPZFDPKXAM");

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
    msg.setTimeStamp(0.0670898050204);
    msg.setSource(33125U);
    msg.setSourceEntity(137U);
    msg.setDestination(22140U);
    msg.setDestinationEntity(207U);
    msg.origin.assign("CDHKTPNUXTLILSIHJGBYPLAUNBVJQIIFAOBILKMOUCJODDAPWIOIRDLNXUVCLZSRBTJZQWGPEIJJVQRFFBPGCWVMQPZAQTHZLONWNWSDOEHYRTMUNVGWCXVZRIDKURDBJGTEMVAMCYUAPADUNTBAPQIRZERHVDWFZXX");
    msg.htime = 0.222849915949;
    msg.lat = 0.348398590168;
    msg.lon = 0.993758418182;
    const char tmp_msg_0[] = {121, 119, 64, 58, 48, 76, 71, -125, 19, -80, 6, -69, 104, -83, 104, 64, -92, 29, 27, -66, -60, 12, 73, -42, 49, -20, -47, -71, 94, -63, 39, -123, 16, -79, 15, -2, 101, -78, -10, -94, -126, -128, -90, -22, -25, 36, -76, -70, 88, 0, -76, 45, -67, -116, 86, 75, 84, -114, 118, -75, 16, -43, 59, -108, -16, -70, -84, -12, 16, 63, -26, -114, -8, 95, 43, 114, -19, 82, -94, -94, 3, 86, 58, 57, 70, -121, 47, -94, 106, 33, 109, 56, 77, -69, 65, -111, 79, 77, -13, 54, -110, 28, 101, -107, 0, -46, 126, 3, 9, 64, -26, -69, -4, 50, 21, 77, -65, 76, 28, 72, 120, -67, -5, 86, -50, 107, 86, -62, -8, 25, -94, -79, -58, 73, 101, 43, -58, 73, 73, 95, 89, 73, 32, -99, -13, -118, -4, 97, 76, -23, -34, 109, -59, 95, 23, -113, 122, -93, 30, 99, 109, -62, 52, 12, 92, 73, 93, -115, 62, -37, -35, 30, 105, -22, -56, -12, -99, 44, -113, 49, 126, 31, 4, -49, 60, -113, -5, -1, -34, 115, -103, 68, 87, 63, 35, -101, -77, -119, -68, -70, 79, 21, -43, -66, 19, 76, 79, 122, 55, 25, 80, 94, -35, -72, 78, -104, 32, -57, -70, -35, -20, -59, 115, -29, 116, 47, -87, 90, 88, 49, 75, 45, -82};
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
    msg.setTimeStamp(0.731332109709);
    msg.setSource(34150U);
    msg.setSourceEntity(127U);
    msg.setDestination(39967U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("PPGGMLHRMUZEDCASGLONXMDUVEJRZTHRCSKLBVLKIFEQKNEJXLSFHJSUBQOCAVOBPQLHCDWTGTCFYPGOUAJKGOVTQQCBZMYHVTADEMDQVRBYWKHXXITUXAPBHMIAFZJQQLMZFHMLDSIOU");
    msg.htime = 0.272441372345;
    msg.lat = 0.756341810335;
    msg.lon = 0.537994282689;
    const char tmp_msg_0[] = {-97, -122, -13, 40, -52, -47, 36, -48, 49, -41, -65, -17, 25, -4, 88, -101, -2, -103, 43, 111, 93, 87, -75, -117, -58, 56, -88, 102, -69, -35, 51, 121, 73, -73, -110, -75, -31, 35, -10, 22, 104, 110, 83, -116, 42, 90, -40, 80, 86, 16, -104, -117, -96, -111, -4, -80, -28, 22, -111, -112, -89, -89, -28, 88, 87, -51, 50, -35, 56, 63, 17, -82, 119, -95, 63, 113, 114, -51, 81, -105, -81, -110, -50, -104, -23, 47, 94, -75, 33, -77, -122, 60, 120, -87, 11, 24, -101, -90, 88, 41, 25, -91, -108, -5, -104, 23, -76, 91, 50, -109, 48, 39, 74, 46, 21, -100, 106, 74, -31, -50, -74, 107, 6, -51, -122, 91, -123, 104, -91, 21, -8, 4, 40, 65, 59, -11, 41, -60, -12, -21, 6, 31, 61, 115, 92, -109, -86, -125, -28, -128, 89, 106, 21, -13, -31, 36, -70, 88, 105, 107, 20, -24, -115, 33, 18, -34, -5, -92, 72, 46, 54, 82, 11, -89, -9, 99, -126, 114, 80, -94, -123, 28};
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
    msg.setTimeStamp(0.214208869844);
    msg.setSource(13780U);
    msg.setSourceEntity(251U);
    msg.setDestination(10950U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("CGJKDUASFKCHEDDLUGMCG");
    msg.htime = 0.121919504237;
    msg.lat = 0.153371810878;
    msg.lon = 0.727215476237;
    const char tmp_msg_0[] = {-60, -127, 14, -8, -112, -92, 97, -77, 63, -71, 88, -60, -95, 68, 80, -49, 14, 78, 98, -65, 120, -62, -55, 65, -96, -34, -66, 119, -117, 81, 10, 70, -1, 26, -42, 5, -77, -69, -90, -62, -74, -82, 110, -44, 96, 51, -125, 82, 80, 15, -56, -17, 23, 107, 13, 17, 70, 25, -82, -65, -7, 11, 1, -7, -103, 99, 61, -28, 44, -47, -100, 78, 36, -2, 123, 45, -106, 39, 73, 8, -108, -9, 29, 23, -36, 44, 43, 48, 27, -38, -10, -58, 24, 73, -87, 44, -85, -35, 40, 126, -39, 62, -34, 119, 126, 76, -40, -50, -46, -69, -36, 32};
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
    msg.setTimeStamp(0.322892511053);
    msg.setSource(22927U);
    msg.setSourceEntity(178U);
    msg.setDestination(28571U);
    msg.setDestinationEntity(177U);
    msg.req_id = 13127U;
    msg.ttl = 43543U;
    msg.destination.assign("GQLIEUGOUDIBZWVXHLXBDJZCASMMITWVHDKAZFXIRQNHNTPSEMPHYFMPXTYMJGAZDOJDCAGKVQWVGPBIEBRTVBVQCENPTFVWNDNMBJSWNLYEOUGL");
    const char tmp_msg_0[] = {-55, 29, 115, 105, 99, 83, -128, 17, 11, 49, 10, -104, -99, -55, 46, 62, 109, -19, -51, 113, 4, -4, -29, 48, -94, -33, -90, 8, 11, -53, -80, 59, -70, 2, 61, 14, 82, 126, -106, 74, 33, 11, -105, -109, 50, -66, -74, -83, 81, 70, 8, -58, -21, 16, -1, 46, -82, 116, -42, 5, 40, 85, 91, -63, -76, -66, -19, 86, 92, 39, -23, -53, 91, -84, 71, -27, -108};
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
    msg.setTimeStamp(0.636472061664);
    msg.setSource(32757U);
    msg.setSourceEntity(34U);
    msg.setDestination(31805U);
    msg.setDestinationEntity(103U);
    msg.req_id = 43398U;
    msg.ttl = 37280U;
    msg.destination.assign("ONGMRFPPPHUMHXNAZUTMVIES");
    const char tmp_msg_0[] = {4, 107, 117, -64, -59, -95, -66, 69, -33, 78, -44, 33, -60, -5, 68, 5, 111, 13, 27, 11, 123, 103, 100, -113, 119, 0, 64, -16, -88, 55, 65, 22, 6, 58, -1, 66, 42, 52, 43, 71, -84, -19, -87, -8, -84, -29, 8, -90, 30, 59, 2, 112, -41, 20, -121, -10, 103, 86, -15, -54, 111, -106, -123, 97, -76, 98, 117, -99, 43, 111, 71, 8, 93, -46, -55, -54, -19, 55, 27, 93, 109, 10, 45, -107, -10, 65, 120, -34, 107, -98, 21, 44, 69, -110, 84, -47, -86, -34, 43, 52, 11, 81, -49, -102, -88, -72, 102, -15, 14, 48, 96, -112, 104, 10, -86, 43, -32, 125, 89, -53, 42, -105, 45, 26, 21, 98, -82, 53, -10, -126, 24, -88, 61, 47, -6, -123, 0, -127, 87, 89, -48, 99, -51, -61, 98, 11, -47, -76, -70, 75, -85, 49, -1, -31, -30, -103, -76, -44, -96, -78, -82, 57, 105, -100, 89, 102, -17, -105, 101, 93, 101, 93, 87, 20, 126, 108, 101, -11, 49, -97, 57, 7, -27, 31, 123, -20, -63, -106, 25, 23, -114, 34, 67, -80, -97, -12, -4, -106, 39, 6, 100, -101, 16, -107, -21, -14, -13, 34, 10, 106, 79, 7, -93, 115, -85, -22, 49, 73, 27, -61, -38, 6, -86, -4, -9, 102, -79, -59, -80, 59, 33, 4, 72, -59, -58, 78, -118, 49, 106};
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
    msg.setTimeStamp(0.347075277395);
    msg.setSource(16450U);
    msg.setSourceEntity(223U);
    msg.setDestination(2442U);
    msg.setDestinationEntity(64U);
    msg.req_id = 27458U;
    msg.ttl = 63465U;
    msg.destination.assign("BADUCKNVKHJLOZWJYLBMKGKPGNFXGFTCKUZZPQFPZMOYMLVYOCIDXLBGJSYEIWHWWTGHVSDJKWHNUOHQLRSAWTQFPEXUIMRVBPCXCTKAWARXDXFMBHKUFDO");
    const char tmp_msg_0[] = {77, 73, -127, 94, -120, 15, -55, -128, -63, -72, 47, 47, 31, -14, 56, -37, -79, 37, -85, -92, 19, 126, -93, 106, 26, -65, -2, -97, -31, 49, 89, -22, 75, -116, 43, -18, -106, 85, 120, 51, 24, 41, 115, 113, 102, -77, -52, 95, -106, -107, 81, -16, 100, -113, 62, 35, 117, -29, -53, -8, 26, 96, -37, 38, 97, 104, 71, 83, 51, -56, 41, -49, -14, 38, -17, -50, -41, -82, -119, -43, 38, -53, 19, 69, -55, -10, 14, 124, 33, 65, -94, -94, -127, 66, 92, 41, -18, 41, 30, -37, -74, 48, -37, -114, 119, 40, -25, -18, 105, -51, 42, 105, -14, 70, 98, 56, -103, -53};
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
    msg.setTimeStamp(0.627135253946);
    msg.setSource(58651U);
    msg.setSourceEntity(102U);
    msg.setDestination(120U);
    msg.setDestinationEntity(60U);
    msg.req_id = 3145U;
    msg.status = 132U;
    msg.text.assign("ACCBEBJFYXUZOFNYWEZNRUR");

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
    msg.setTimeStamp(0.329365502151);
    msg.setSource(61060U);
    msg.setSourceEntity(180U);
    msg.setDestination(7573U);
    msg.setDestinationEntity(68U);
    msg.req_id = 23763U;
    msg.status = 76U;
    msg.text.assign("YZPFGLTXSZRWYWDQWOBAEWXDODRCVLV");

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
    msg.setTimeStamp(0.0353872426515);
    msg.setSource(13467U);
    msg.setSourceEntity(234U);
    msg.setDestination(39021U);
    msg.setDestinationEntity(21U);
    msg.req_id = 61851U;
    msg.status = 35U;
    msg.text.assign("MLBZFGOXCRXQFQWJSONJDTIYZCWRIFEVDUCDJWISCSMVNPWEVDPVPGETJFHJQTYNMDIKSLFCMSATOXEUIPEXJFNZKYYKKHAXRELRKDGHFIGOPIEXCIUOZMHATRFCEMZVWUENRFZPLMAQTRQVHBDUKYSRDIYRSHNUBMWQEXOAVAGQKXFLPPOOPJQSJUZWHUHCVSQHVSBLNNMUYGZGZGBHPYKXCLDZNWGMTCIBLABWVQBBBRYJAONAJOGWTXUD");

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
    msg.setTimeStamp(0.655778165338);
    msg.setSource(36948U);
    msg.setSourceEntity(253U);
    msg.setDestination(6113U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("RTRSIVPDQALKMTQKQIGEWPBCMRHRFIGIITWRDZMBKYHNFWWAVHFFUFDKWSEPXHYZPOJTRJHYVJNVHOZNQIGDZYFIJFYFKVEDHQBGAYEWAENOUUNJTBHTZVFLTKYGAXVACAGOPCAQQPDMZXTPUOKCBLLSUHGCUYRGEIJTSZDMECLNMFHGOUEMUBXCKEJBOVIPSTSDWNQEOMXOQKCLZUJYZAVMIRSADPXQOWNXNGCRRBXJLUYMLXZSJVLC");
    msg.links = 254285202U;

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
    msg.setTimeStamp(0.521803316864);
    msg.setSource(58837U);
    msg.setSourceEntity(25U);
    msg.setDestination(36090U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("BIFNZTBOOKFCTPCGYGZQRZTLAWVNEUOERPWKXXLMSNQDDTTOCJNQFYLXITAGSNXNYBMYPAYSGWOHTMMRAFAD");
    msg.links = 1728500673U;

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
    msg.setTimeStamp(0.745826341899);
    msg.setSource(30034U);
    msg.setSourceEntity(191U);
    msg.setDestination(48486U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("BJZCIWQIHGJODAVFEIGLQJKEFYZURHTCFHOWBDVCGACZXLIVSMWTCTQEQDLHPXOQSKYMVSMEZTDSUGYVPCZPKBZPPDDJNCDXCJUBIEGVTONCOBCHDSPRLPXRQANSWKALGYAZAIHGULOKWAKMMNTREYMXGOOAXRFTKKKQDDYRFHFQXSQMEUIXFWTZWTRUBSUTVRFWFYALLEYWONBNBMJGEVVUXIEBIULRHKNYWGISPNMANJOFLNXMVQPUJHHRZJ");
    msg.links = 2872695193U;

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
    msg.setTimeStamp(0.848627949222);
    msg.setSource(33102U);
    msg.setSourceEntity(150U);
    msg.setDestination(25734U);
    msg.setDestinationEntity(80U);
    msg.groupname.assign("GSAMLKXQRMBRTUHXVLJZFYUSRKFBUKVQOCNQPOWXLOKXCDJEHWBVZGPKLDSPRQXJSJBHIUWGRJSAYYYYZVLNWFUOFUTNDUDXDHWFICKQAQBLEIXIMEMQWWIGVAHHESBGDOZFRMOZBGJWLEFJKRZASNTTWKSMPZGUYICKPYHY");
    msg.action = 176U;
    msg.grouplist.assign("AUZUFZZQFSMGXLJFYHFCNDDVZOYUUHTWIJEBGEVHMWSZVXMWWLTRVFBRLGESXKMMGXJIYCJBAFVANFPRGDKOQCISWOQTIJA");

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
    msg.setTimeStamp(0.440301294149);
    msg.setSource(43960U);
    msg.setSourceEntity(145U);
    msg.setDestination(8104U);
    msg.setDestinationEntity(102U);
    msg.groupname.assign("FACDIMQBEEORNCOBANKIBXWXUPRZBPXNYXGXHZQQXCPESYDSZTURNCWJGCLVRHOFIQVWASRNDQRPBKJSOPYJJLEYXHIXWUTYKUPCJABOILSMLBCEJLTMMLQCVAZWGLUFZRZMTYUFTAWDRDLNKKOTTDVHDENEVSFYVFFBOZDMDOMVHUYGSLRBOOCGVGICIGMQWQAAKFKDENBZTUS");
    msg.action = 18U;
    msg.grouplist.assign("EXOBPNRSLRYQSVGJCBBKKOKIAVUELZHYKRGJSWTWNWHXRAHGLFTNVFMSUQHCZRMDUKOJQDBSIEMPBHVHQ");

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
    msg.setTimeStamp(0.906697094946);
    msg.setSource(26483U);
    msg.setSourceEntity(135U);
    msg.setDestination(51428U);
    msg.setDestinationEntity(1U);
    msg.groupname.assign("UMTSFUHTSMNJPICVYCEOIAZJQKXTQLZWWSVEHHKAVRHRZYVHPQTAEHMCDNXMAJWQPLSHLELGBLBROD");
    msg.action = 117U;
    msg.grouplist.assign("XZWTNEFNSEWVQBFEAFPIYJOSQJPCKBRBYTDOXEEWPJOHSRBDNPVCTKHUSHBNQAVOIHALYYZNXGMZAHAAIUFRSQKFCTDXOWBOTODLZACGIRHFMEYGXANHBHJOPVQGFMXERDYGIJLWKPQILDUPJJMEPSVULJRBQURSZKHTYRGOVKVTLZUWQITIMGMDXWGKS");

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
    msg.setTimeStamp(0.413625858551);
    msg.setSource(28253U);
    msg.setSourceEntity(41U);
    msg.setDestination(52568U);
    msg.setDestinationEntity(27U);
    msg.id = 248U;
    msg.range = 0.988739355741;

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
    msg.setTimeStamp(0.818540293238);
    msg.setSource(21387U);
    msg.setSourceEntity(10U);
    msg.setDestination(31459U);
    msg.setDestinationEntity(250U);
    msg.id = 233U;
    msg.range = 0.590925012793;

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
    msg.setTimeStamp(0.827987062341);
    msg.setSource(14095U);
    msg.setSourceEntity(186U);
    msg.setDestination(23395U);
    msg.setDestinationEntity(193U);
    msg.id = 185U;
    msg.range = 0.17769664952;

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
    msg.setTimeStamp(0.260314612788);
    msg.setSource(54758U);
    msg.setSourceEntity(108U);
    msg.setDestination(14060U);
    msg.setDestinationEntity(162U);
    msg.beacon.assign("UXOPIZEOWT");
    msg.lat = 0.327517313998;
    msg.lon = 0.694066103505;
    msg.depth = 0.312330260816;
    msg.query_channel = 18U;
    msg.reply_channel = 32U;
    msg.transponder_delay = 31U;

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
    msg.setTimeStamp(0.214189359835);
    msg.setSource(40467U);
    msg.setSourceEntity(246U);
    msg.setDestination(62469U);
    msg.setDestinationEntity(61U);
    msg.beacon.assign("WEKJRCXYOSZXFBDUJVWTUPQWBTOXVPFBYCPCTVVAUTKFWNUSAJVFDXOQHTFTWHEEQOBHBIFBGUEIEEYWYIWTCRLDJMJMRPHRLLLDCMGYJHSYLVGXLBCANMSUELNMOYSXLQKICOSRNGJLPZRPLPGDGOFRQYEDAGKZWSHAWNRPKUQGWVVTZJMIEIKRNQUCZMKKKZTTSVJ");
    msg.lat = 0.63744179098;
    msg.lon = 0.57362603678;
    msg.depth = 0.433014190913;
    msg.query_channel = 87U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.0404889856313);
    msg.setSource(37631U);
    msg.setSourceEntity(251U);
    msg.setDestination(44481U);
    msg.setDestinationEntity(70U);
    msg.beacon.assign("GRILXHEWAVQTDIDIOSMLGIHVUEZIJPYOJUWCYSRAM");
    msg.lat = 0.657989866774;
    msg.lon = 0.52398917155;
    msg.depth = 0.580467889701;
    msg.query_channel = 224U;
    msg.reply_channel = 31U;
    msg.transponder_delay = 164U;

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
    msg.setTimeStamp(0.224528814212);
    msg.setSource(43548U);
    msg.setSourceEntity(94U);
    msg.setDestination(27762U);
    msg.setDestinationEntity(91U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.0705292259761);
    msg.setSource(26945U);
    msg.setSourceEntity(116U);
    msg.setDestination(32802U);
    msg.setDestinationEntity(226U);
    msg.op = 203U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KJJNYSLZLUNIBVCFUKBSSBVYZKZNJHHNLSZJHCTOVRWSTYKJOBZEPSTOPRXBTBCLJQPEXKTOIGILLXMEUTFUZIOWGLHXDVEKMOYDVIARYUADRMWZOOTQIXQKYOKYRQAUHMHJMXJBXXFUV");
    tmp_msg_0.lat = 0.325767624206;
    tmp_msg_0.lon = 0.756077468687;
    tmp_msg_0.depth = 0.838910732341;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 136U;
    tmp_msg_0.transponder_delay = 231U;
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
    msg.setTimeStamp(0.0226133548635);
    msg.setSource(35030U);
    msg.setSourceEntity(124U);
    msg.setDestination(38564U);
    msg.setDestinationEntity(138U);
    msg.op = 204U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KLOBLVZETWWGVFFTWFOCWFJPSHQNRYYORKYCXLRXJMPQXFNKNSVBDJSCIKUJYREGJLRMREEKBNDUKLXHMLTNQFNYQVCPCMFIWYZASMXWMHSZGGTOELJGSPDHVMBHNHUUYHSTAKDXTPITIRYWPBZICWSVGKEUIRZLQXATJOIOBAOUUEJHGNBCFPDDENVXSUQAFVACCFRAGIVHXRZIJELDPGO");
    tmp_msg_0.lat = 0.21746713237;
    tmp_msg_0.lon = 0.35886551048;
    tmp_msg_0.depth = 0.631450242673;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 35U;
    tmp_msg_0.transponder_delay = 181U;
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
    msg.setTimeStamp(0.693644205479);
    msg.setSource(477U);
    msg.setSourceEntity(212U);
    msg.setDestination(7667U);
    msg.setDestinationEntity(65U);
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 245U;
    tmp_msg_0.error.assign("GSJGWCVYBZYOIZVNYLJPKQJLUVQZKFHAHSUBRJJEXGIPORJYUPUUQHFSABFFGAZAZWTREDRNJVDDCBRB");
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
    msg.setTimeStamp(0.982483741694);
    msg.setSource(58189U);
    msg.setSourceEntity(41U);
    msg.setDestination(10162U);
    msg.setDestinationEntity(137U);
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 8U;
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
    msg.setTimeStamp(0.450713867758);
    msg.setSource(55433U);
    msg.setSourceEntity(108U);
    msg.setDestination(44277U);
    msg.setDestinationEntity(227U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.736063002355;
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
    msg.setTimeStamp(0.492695464164);
    msg.setSource(17379U);
    msg.setSourceEntity(67U);
    msg.setDestination(7817U);
    msg.setDestinationEntity(221U);
    msg.op = 232U;
    msg.system.assign("WECGKSQOKJCWEPULGRKYELKRJEVYERZMQRVRWAIYJLTPUWNITXIPCAIGFBEWFMZWIIPEWTSSHQSGFTVRMYBLHSGKBZDCLYSTOGWEYNHFDQSFHSCKXNCTXINRJDZLZCKZOCPQK");
    msg.range = 0.235250750891;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 220U;
    tmp_msg_0.value = 64U;
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
    msg.setTimeStamp(0.631559216044);
    msg.setSource(26658U);
    msg.setSourceEntity(172U);
    msg.setDestination(52283U);
    msg.setDestinationEntity(230U);
    msg.op = 35U;
    msg.system.assign("DOIOTQGNAFBMXFADCPZWMOCTPKHLEEQRFAB");
    msg.range = 0.0805762735408;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BHFMZHAYHOECRJUAAOVSNZLKBJCMESGGNJOPXYAYYKAXLDYPMMFSVTPQCTVOQEQFIVXWKIIRYZDNSVMVQTEGXRTODNWMKTBKWCPIJQSI");
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
    msg.setTimeStamp(0.770987351681);
    msg.setSource(39089U);
    msg.setSourceEntity(12U);
    msg.setDestination(20944U);
    msg.setDestinationEntity(134U);
    msg.op = 81U;
    msg.system.assign("EVZIBAHAGDUCBGJITGWNNLYNYFAFXDSQTAHRRDUKBLQZRMTUYXSFUIWCRZMEGGDKYOSINPSIGGEEKVCPEJKWHLXMB");
    msg.range = 0.037747301708;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31819U;
    tmp_msg_0.name.assign("YKXCZYNCRJSSFMXLUZGVSWIKYWLDDQHOUJKMSKWCIEAHHSKJFXLVVAWIPKLHPNHDBEXBSXRYOJMOAIOQVMBJWYITQOVLYNRIPFUFQFIREDTXQKKEUWHNZKYXVLJPZSUBCZPXUHFZIBDLHFTBRRRVGZFMADVOTZGXYYOWHGQTLOTTAQJMLEQKTGGDPSEYUJUWECPHLMRDITWNBAPZXAZBGNVCUBOCEADWUSJMFQANDORNGMBENPVGCEGJACNSR");
    tmp_msg_0.custom.assign("OIEEUNUQWGVDKEXAGJARGJGQRLOYMKAIZMMRJIMWQFHXUQHFBKBXOMNUGZXMKDVRLIRLDYOVAYBCPLDWWMJDZFXEBXAOPKLZTYJUFYNIDWJJFPRAIFXEIVOTGZNVGBVFLKVIAMLGOPWUSKEITPVWECZGMKEWDCIDNLDBSRUNZJNQQNUNVYTFBHCBOQOZKTANJHXYRTWSF");
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
    msg.setTimeStamp(0.00372185113856);
    msg.setSource(30120U);
    msg.setSourceEntity(43U);
    msg.setDestination(54735U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.274927292854);
    msg.setSource(43181U);
    msg.setSourceEntity(204U);
    msg.setDestination(20177U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.988608173442);
    msg.setSource(3714U);
    msg.setSourceEntity(9U);
    msg.setDestination(52650U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.174840188824);
    msg.setSource(41010U);
    msg.setSourceEntity(176U);
    msg.setDestination(51330U);
    msg.setDestinationEntity(84U);
    msg.list.assign("TESALVUZSYWKQIHANWLQRVPFHHHTZXPITNVLUMENKRTZAPDFXJCTFGMYCTCYMIUSQNDNUDHLNZQVKBCJEPXVNKAQVVATWGJCEMMOEOBGKWIQWIIBGHRMJVKQAIYSOB");

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
    msg.setTimeStamp(0.884416667953);
    msg.setSource(16733U);
    msg.setSourceEntity(17U);
    msg.setDestination(30426U);
    msg.setDestinationEntity(207U);
    msg.list.assign("AGWTIYEHSQMURPLNSDECYHQQBEKWNIKCEYTHORXIIUZSMWCDDEGJLLCBREZGQOTVUHPVCMKZVOTZHNHTIPMLNVYRPKAPRFEXDYSZVNFKMAANUDBJUDABCDPHZLFYTCRBQTIBDKTOCWFHMEOIUFXU");

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
    msg.setTimeStamp(0.304281431527);
    msg.setSource(43128U);
    msg.setSourceEntity(185U);
    msg.setDestination(19784U);
    msg.setDestinationEntity(159U);
    msg.list.assign("UAMSBCTCCKDOJQKXRHKDLQHFDIBLQIJVHZCCXLEYYNQWJOYLGANYBZCIHUEXTPLXLGFRNIMSSANRPPBVAQKGVDMXOPTDKVEVCRSGRMUGMBRWWNTXSSPAABKBIFZTVATDTFYIERQUUCXYNUAWMKFORIJEAHWENOGJUDVUHWSXRZZGLKIMVTTJLHOZVCUNODEXNWEUO");

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
    msg.setTimeStamp(0.956848408138);
    msg.setSource(36106U);
    msg.setSourceEntity(84U);
    msg.setDestination(36147U);
    msg.setDestinationEntity(7U);
    msg.value = -26975;

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
    msg.setTimeStamp(0.282874059959);
    msg.setSource(61264U);
    msg.setSourceEntity(85U);
    msg.setDestination(9789U);
    msg.setDestinationEntity(143U);
    msg.value = 6801;

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
    msg.setTimeStamp(0.407058890613);
    msg.setSource(60692U);
    msg.setSourceEntity(95U);
    msg.setDestination(15286U);
    msg.setDestinationEntity(67U);
    msg.value = 5418;

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
    msg.setTimeStamp(0.536881717521);
    msg.setSource(8286U);
    msg.setSourceEntity(182U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(184U);
    msg.value = 0.982172330121;

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
    msg.setTimeStamp(0.057877785181);
    msg.setSource(12016U);
    msg.setSourceEntity(57U);
    msg.setDestination(2466U);
    msg.setDestinationEntity(127U);
    msg.value = 0.44828178499;

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
    msg.setTimeStamp(0.928547628926);
    msg.setSource(782U);
    msg.setSourceEntity(17U);
    msg.setDestination(29056U);
    msg.setDestinationEntity(149U);
    msg.value = 0.591279076692;

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
    msg.setTimeStamp(0.660210363374);
    msg.setSource(32451U);
    msg.setSourceEntity(51U);
    msg.setDestination(61388U);
    msg.setDestinationEntity(73U);
    msg.value = 0.910181773547;

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
    msg.setTimeStamp(0.25758547015);
    msg.setSource(34185U);
    msg.setSourceEntity(251U);
    msg.setDestination(29531U);
    msg.setDestinationEntity(1U);
    msg.value = 0.89405288736;

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
    msg.setTimeStamp(0.600721393832);
    msg.setSource(24743U);
    msg.setSourceEntity(69U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(209U);
    msg.value = 0.996264472926;

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
    msg.setTimeStamp(0.00564387140091);
    msg.setSource(17197U);
    msg.setSourceEntity(59U);
    msg.setDestination(22577U);
    msg.setDestinationEntity(150U);
    msg.validity = 22023U;
    msg.type = 209U;
    msg.utc_year = 22164U;
    msg.utc_month = 30U;
    msg.utc_day = 126U;
    msg.utc_time = 0.129875467805;
    msg.lat = 0.888019611103;
    msg.lon = 0.568589982669;
    msg.height = 0.364325394575;
    msg.satellites = 225U;
    msg.cog = 0.716704555778;
    msg.sog = 0.374032664223;
    msg.hdop = 0.660590635071;
    msg.vdop = 0.471487006492;
    msg.hacc = 0.109337400662;
    msg.vacc = 0.295500450394;

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
    msg.setTimeStamp(0.11831259641);
    msg.setSource(5109U);
    msg.setSourceEntity(222U);
    msg.setDestination(17885U);
    msg.setDestinationEntity(134U);
    msg.validity = 28424U;
    msg.type = 77U;
    msg.utc_year = 29608U;
    msg.utc_month = 203U;
    msg.utc_day = 124U;
    msg.utc_time = 0.844794470608;
    msg.lat = 0.489466595386;
    msg.lon = 0.347638514716;
    msg.height = 0.299496237373;
    msg.satellites = 186U;
    msg.cog = 0.327722613642;
    msg.sog = 0.339563070137;
    msg.hdop = 0.375110437929;
    msg.vdop = 0.345468334341;
    msg.hacc = 0.79210124961;
    msg.vacc = 0.97014919374;

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
    msg.setTimeStamp(0.467022461805);
    msg.setSource(27033U);
    msg.setSourceEntity(65U);
    msg.setDestination(42272U);
    msg.setDestinationEntity(121U);
    msg.validity = 35293U;
    msg.type = 32U;
    msg.utc_year = 60789U;
    msg.utc_month = 41U;
    msg.utc_day = 7U;
    msg.utc_time = 0.888918442139;
    msg.lat = 0.801643294967;
    msg.lon = 0.112421219313;
    msg.height = 0.0905586142614;
    msg.satellites = 3U;
    msg.cog = 0.568185774201;
    msg.sog = 0.187524504188;
    msg.hdop = 0.202738514623;
    msg.vdop = 0.00848238447033;
    msg.hacc = 0.229967771795;
    msg.vacc = 0.449052128097;

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
    msg.setTimeStamp(0.445744985987);
    msg.setSource(12276U);
    msg.setSourceEntity(47U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(17U);
    msg.time = 0.562901535396;
    msg.phi = 0.771042347558;
    msg.theta = 0.759550505704;
    msg.psi = 0.351260705813;
    msg.psi_magnetic = 0.812032774014;

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
    msg.setTimeStamp(0.779796173929);
    msg.setSource(32997U);
    msg.setSourceEntity(5U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(206U);
    msg.time = 0.512275570218;
    msg.phi = 0.434587226721;
    msg.theta = 0.766908690143;
    msg.psi = 0.570546466482;
    msg.psi_magnetic = 0.689389787809;

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
    msg.setTimeStamp(0.035815789594);
    msg.setSource(31079U);
    msg.setSourceEntity(51U);
    msg.setDestination(47770U);
    msg.setDestinationEntity(134U);
    msg.time = 0.263101320266;
    msg.phi = 0.00622551705747;
    msg.theta = 0.189376586794;
    msg.psi = 0.231163545502;
    msg.psi_magnetic = 0.0527757753137;

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
    msg.setTimeStamp(0.410260198105);
    msg.setSource(11177U);
    msg.setSourceEntity(51U);
    msg.setDestination(52293U);
    msg.setDestinationEntity(5U);
    msg.time = 0.588820298404;
    msg.x = 0.50586917755;
    msg.y = 0.820124372925;
    msg.z = 0.913174103441;
    msg.timestep = 0.603682483397;

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
    msg.setTimeStamp(0.134607916114);
    msg.setSource(57742U);
    msg.setSourceEntity(51U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(165U);
    msg.time = 0.0583079393796;
    msg.x = 0.108828253689;
    msg.y = 0.938386589441;
    msg.z = 0.893234051347;
    msg.timestep = 0.713008559399;

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
    msg.setTimeStamp(0.617168973378);
    msg.setSource(18416U);
    msg.setSourceEntity(203U);
    msg.setDestination(25746U);
    msg.setDestinationEntity(192U);
    msg.time = 0.00589998781904;
    msg.x = 0.613751887533;
    msg.y = 0.0333219859922;
    msg.z = 0.587711711083;
    msg.timestep = 0.809151064583;

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
    msg.setTimeStamp(0.166332360681);
    msg.setSource(18515U);
    msg.setSourceEntity(122U);
    msg.setDestination(58386U);
    msg.setDestinationEntity(74U);
    msg.time = 0.452995564393;
    msg.x = 0.620601407879;
    msg.y = 0.377872940551;
    msg.z = 0.919111036568;

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
    msg.setTimeStamp(0.0915000565288);
    msg.setSource(35262U);
    msg.setSourceEntity(116U);
    msg.setDestination(1510U);
    msg.setDestinationEntity(82U);
    msg.time = 0.337530596904;
    msg.x = 0.256944582376;
    msg.y = 0.180357173214;
    msg.z = 0.222854150752;

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
    msg.setTimeStamp(0.291191559294);
    msg.setSource(2735U);
    msg.setSourceEntity(7U);
    msg.setDestination(56010U);
    msg.setDestinationEntity(150U);
    msg.time = 0.431527291796;
    msg.x = 0.948727043615;
    msg.y = 0.0190780531112;
    msg.z = 0.843229403379;

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
    msg.setTimeStamp(0.446792610803);
    msg.setSource(8298U);
    msg.setSourceEntity(66U);
    msg.setDestination(55537U);
    msg.setDestinationEntity(84U);
    msg.time = 0.917404787159;
    msg.x = 0.612797532899;
    msg.y = 0.144565550749;
    msg.z = 0.561742111035;

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
    msg.setTimeStamp(0.48742674349);
    msg.setSource(22827U);
    msg.setSourceEntity(208U);
    msg.setDestination(7407U);
    msg.setDestinationEntity(149U);
    msg.time = 0.470516274143;
    msg.x = 0.330827924605;
    msg.y = 0.907511518757;
    msg.z = 0.38586703649;

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
    msg.setTimeStamp(0.421654008856);
    msg.setSource(36225U);
    msg.setSourceEntity(39U);
    msg.setDestination(26395U);
    msg.setDestinationEntity(23U);
    msg.time = 0.640543099376;
    msg.x = 0.655857983106;
    msg.y = 0.776590692535;
    msg.z = 0.889239252103;

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
    msg.setTimeStamp(0.236673950591);
    msg.setSource(43634U);
    msg.setSourceEntity(3U);
    msg.setDestination(52126U);
    msg.setDestinationEntity(123U);
    msg.time = 0.604762923032;
    msg.x = 0.708698422337;
    msg.y = 0.35473124168;
    msg.z = 0.861831720871;

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
    msg.setTimeStamp(0.518250929715);
    msg.setSource(23975U);
    msg.setSourceEntity(165U);
    msg.setDestination(14370U);
    msg.setDestinationEntity(228U);
    msg.time = 0.121418515165;
    msg.x = 0.908466379794;
    msg.y = 0.303268749366;
    msg.z = 0.777821167161;

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
    msg.setTimeStamp(0.657717165272);
    msg.setSource(48607U);
    msg.setSourceEntity(96U);
    msg.setDestination(761U);
    msg.setDestinationEntity(149U);
    msg.time = 0.811161390276;
    msg.x = 0.383335659554;
    msg.y = 0.741360682842;
    msg.z = 0.682132500852;

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
    msg.setTimeStamp(0.844462453951);
    msg.setSource(12679U);
    msg.setSourceEntity(38U);
    msg.setDestination(13358U);
    msg.setDestinationEntity(48U);
    msg.validity = 193U;
    msg.x = 0.556544650882;
    msg.y = 0.969018248587;
    msg.z = 0.0239326839984;

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
    msg.setTimeStamp(0.0755601568432);
    msg.setSource(25074U);
    msg.setSourceEntity(200U);
    msg.setDestination(64442U);
    msg.setDestinationEntity(226U);
    msg.validity = 62U;
    msg.x = 0.810252556447;
    msg.y = 0.697000586967;
    msg.z = 0.935561532358;

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
    msg.setTimeStamp(0.668769036041);
    msg.setSource(14091U);
    msg.setSourceEntity(244U);
    msg.setDestination(48092U);
    msg.setDestinationEntity(75U);
    msg.validity = 64U;
    msg.x = 0.810240825111;
    msg.y = 0.133190477988;
    msg.z = 0.0389556155605;

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
    msg.setTimeStamp(0.174288834236);
    msg.setSource(22333U);
    msg.setSourceEntity(68U);
    msg.setDestination(19076U);
    msg.setDestinationEntity(88U);
    msg.validity = 77U;
    msg.x = 0.983515493919;
    msg.y = 0.779576108701;
    msg.z = 0.871695246393;

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
    msg.setTimeStamp(0.560980686009);
    msg.setSource(21699U);
    msg.setSourceEntity(100U);
    msg.setDestination(43974U);
    msg.setDestinationEntity(31U);
    msg.validity = 198U;
    msg.x = 0.480963720772;
    msg.y = 0.055404806083;
    msg.z = 0.451021214344;

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
    msg.setTimeStamp(0.462531180359);
    msg.setSource(17729U);
    msg.setSourceEntity(96U);
    msg.setDestination(489U);
    msg.setDestinationEntity(18U);
    msg.validity = 12U;
    msg.x = 0.0717436256137;
    msg.y = 0.0944825764331;
    msg.z = 0.104820791057;

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
    msg.setTimeStamp(0.9513075565);
    msg.setSource(3183U);
    msg.setSourceEntity(73U);
    msg.setDestination(11157U);
    msg.setDestinationEntity(114U);
    msg.time = 0.513054328069;
    msg.x = 0.216404155628;
    msg.y = 0.126228866208;
    msg.z = 0.825094702103;

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
    msg.setTimeStamp(0.631610228528);
    msg.setSource(55411U);
    msg.setSourceEntity(35U);
    msg.setDestination(41260U);
    msg.setDestinationEntity(172U);
    msg.time = 0.329644173805;
    msg.x = 0.350644113368;
    msg.y = 0.747714982852;
    msg.z = 0.622865320355;

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
    msg.setTimeStamp(0.96912202419);
    msg.setSource(47671U);
    msg.setSourceEntity(254U);
    msg.setDestination(49543U);
    msg.setDestinationEntity(96U);
    msg.time = 0.241755032655;
    msg.x = 0.72931695558;
    msg.y = 0.179521004183;
    msg.z = 0.495087841488;

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
    msg.setTimeStamp(0.323406140498);
    msg.setSource(214U);
    msg.setSourceEntity(223U);
    msg.setDestination(44335U);
    msg.setDestinationEntity(222U);
    msg.validity = 73U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.980371357104;
    tmp_msg_0.y = 0.574505250847;
    tmp_msg_0.z = 0.219656112719;
    tmp_msg_0.phi = 0.166857841259;
    tmp_msg_0.theta = 0.381534517009;
    tmp_msg_0.psi = 0.978742347274;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.974567477307;
    tmp_msg_1.beam_height = 0.979910853015;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.154159249989;

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
    msg.setTimeStamp(0.811635286119);
    msg.setSource(25526U);
    msg.setSourceEntity(222U);
    msg.setDestination(64777U);
    msg.setDestinationEntity(114U);
    msg.validity = 105U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.122268695131;
    tmp_msg_0.beam_height = 0.106679743895;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.883517560497;

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
    msg.setTimeStamp(0.699603323312);
    msg.setSource(5773U);
    msg.setSourceEntity(119U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(78U);
    msg.validity = 213U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.892460242286;
    tmp_msg_0.y = 0.914636546428;
    tmp_msg_0.z = 0.303990460386;
    tmp_msg_0.phi = 0.934265701056;
    tmp_msg_0.theta = 0.0953286124416;
    tmp_msg_0.psi = 0.0925552008837;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0513180663159;

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
    msg.setTimeStamp(0.322640369186);
    msg.setSource(32836U);
    msg.setSourceEntity(64U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(172U);
    msg.value = 0.680037274385;

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
    msg.setTimeStamp(0.0842494367411);
    msg.setSource(43570U);
    msg.setSourceEntity(33U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(171U);
    msg.value = 0.575212567245;

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
    msg.setTimeStamp(0.294553419184);
    msg.setSource(4232U);
    msg.setSourceEntity(7U);
    msg.setDestination(40553U);
    msg.setDestinationEntity(203U);
    msg.value = 0.615154097498;

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
    msg.setTimeStamp(0.576058580335);
    msg.setSource(64354U);
    msg.setSourceEntity(210U);
    msg.setDestination(11793U);
    msg.setDestinationEntity(120U);
    msg.value = 0.744642243427;

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
    msg.setTimeStamp(0.344830775646);
    msg.setSource(14788U);
    msg.setSourceEntity(72U);
    msg.setDestination(39389U);
    msg.setDestinationEntity(213U);
    msg.value = 0.00351117188641;

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
    msg.setTimeStamp(0.658771304025);
    msg.setSource(5295U);
    msg.setSourceEntity(252U);
    msg.setDestination(15892U);
    msg.setDestinationEntity(196U);
    msg.value = 0.57095504328;

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
    msg.setTimeStamp(0.0065763842812);
    msg.setSource(61036U);
    msg.setSourceEntity(88U);
    msg.setDestination(4046U);
    msg.setDestinationEntity(158U);
    msg.value = 0.473544646891;

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
    msg.setTimeStamp(0.610558399395);
    msg.setSource(64515U);
    msg.setSourceEntity(24U);
    msg.setDestination(51684U);
    msg.setDestinationEntity(181U);
    msg.value = 0.448102527598;

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
    msg.setTimeStamp(0.578803948731);
    msg.setSource(41509U);
    msg.setSourceEntity(164U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0580938159062;

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
    msg.setTimeStamp(0.631035250365);
    msg.setSource(29179U);
    msg.setSourceEntity(159U);
    msg.setDestination(43037U);
    msg.setDestinationEntity(73U);
    msg.value = 0.643394703186;

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
    msg.setTimeStamp(0.363630221501);
    msg.setSource(65265U);
    msg.setSourceEntity(81U);
    msg.setDestination(15976U);
    msg.setDestinationEntity(29U);
    msg.value = 0.277207686373;

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
    msg.setTimeStamp(0.324317580062);
    msg.setSource(31244U);
    msg.setSourceEntity(208U);
    msg.setDestination(59972U);
    msg.setDestinationEntity(165U);
    msg.value = 0.569717099926;

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
    msg.setTimeStamp(2.90776226253e-05);
    msg.setSource(49623U);
    msg.setSourceEntity(237U);
    msg.setDestination(38361U);
    msg.setDestinationEntity(206U);
    msg.value = 0.00687264041863;

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
    msg.setTimeStamp(0.255128334124);
    msg.setSource(8932U);
    msg.setSourceEntity(142U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(185U);
    msg.value = 0.688547785296;

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
    msg.setTimeStamp(0.109589459424);
    msg.setSource(44197U);
    msg.setSourceEntity(144U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(94U);
    msg.value = 0.697935563269;

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
    msg.setTimeStamp(0.810864865605);
    msg.setSource(46797U);
    msg.setSourceEntity(170U);
    msg.setDestination(43679U);
    msg.setDestinationEntity(38U);
    msg.value = 0.923418655793;

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
    msg.setTimeStamp(0.736529038357);
    msg.setSource(10986U);
    msg.setSourceEntity(175U);
    msg.setDestination(45062U);
    msg.setDestinationEntity(148U);
    msg.value = 0.466535287908;

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
    msg.setTimeStamp(0.248159985942);
    msg.setSource(62249U);
    msg.setSourceEntity(74U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(159U);
    msg.value = 0.214100494541;

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
    msg.setTimeStamp(0.571277756211);
    msg.setSource(27708U);
    msg.setSourceEntity(178U);
    msg.setDestination(38701U);
    msg.setDestinationEntity(73U);
    msg.value = 0.848505462031;

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
    msg.setTimeStamp(0.107676789817);
    msg.setSource(29430U);
    msg.setSourceEntity(143U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(212U);
    msg.value = 0.919351522889;

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
    msg.setTimeStamp(0.863823280331);
    msg.setSource(48508U);
    msg.setSourceEntity(213U);
    msg.setDestination(41321U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0032276327895;

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
    msg.setTimeStamp(0.311860810219);
    msg.setSource(10144U);
    msg.setSourceEntity(236U);
    msg.setDestination(30796U);
    msg.setDestinationEntity(92U);
    msg.value = 0.424845626996;

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
    msg.setTimeStamp(0.335626452638);
    msg.setSource(18376U);
    msg.setSourceEntity(184U);
    msg.setDestination(27764U);
    msg.setDestinationEntity(31U);
    msg.value = 0.807590469825;

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
    msg.setTimeStamp(0.786772531207);
    msg.setSource(29443U);
    msg.setSourceEntity(244U);
    msg.setDestination(12170U);
    msg.setDestinationEntity(66U);
    msg.value = 0.728856345243;

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
    msg.setTimeStamp(0.711321060315);
    msg.setSource(38747U);
    msg.setSourceEntity(84U);
    msg.setDestination(209U);
    msg.setDestinationEntity(51U);
    msg.direction = 0.229081625426;
    msg.speed = 0.106190197313;
    msg.turbulence = 0.658488225386;

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
    msg.setTimeStamp(0.499457386747);
    msg.setSource(9709U);
    msg.setSourceEntity(96U);
    msg.setDestination(46868U);
    msg.setDestinationEntity(188U);
    msg.direction = 0.293893844947;
    msg.speed = 0.320011103474;
    msg.turbulence = 0.17584150797;

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
    msg.setTimeStamp(0.450657074122);
    msg.setSource(47782U);
    msg.setSourceEntity(210U);
    msg.setDestination(44159U);
    msg.setDestinationEntity(235U);
    msg.direction = 0.0623984002285;
    msg.speed = 0.738941870496;
    msg.turbulence = 0.895678802341;

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
    msg.setTimeStamp(0.70125947996);
    msg.setSource(10158U);
    msg.setSourceEntity(111U);
    msg.setDestination(46705U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0513381206863;

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
    msg.setTimeStamp(0.740429918396);
    msg.setSource(1396U);
    msg.setSourceEntity(189U);
    msg.setDestination(50405U);
    msg.setDestinationEntity(58U);
    msg.value = 0.523670184856;

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
    msg.setTimeStamp(0.25112792353);
    msg.setSource(2561U);
    msg.setSourceEntity(144U);
    msg.setDestination(56089U);
    msg.setDestinationEntity(185U);
    msg.value = 0.313932574988;

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
    msg.setTimeStamp(0.279312367043);
    msg.setSource(36460U);
    msg.setSourceEntity(36U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(121U);
    msg.value.assign("IPQJFBJGXYDBJMPCAPEOUGZRSQYLKDXYSOLUBURSXMOWAFBOEECDNGKFYNGNBNCI");

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
    msg.setTimeStamp(0.0363142669974);
    msg.setSource(19954U);
    msg.setSourceEntity(53U);
    msg.setDestination(52628U);
    msg.setDestinationEntity(122U);
    msg.value.assign("UNJMVONRNBTUJGAVAWSDVAJPIRFDLRFUGIUWNQDYKVYWEPECZRISEIOECZABXBBXDNJQZHQFSTHHXTCUPLMTBGJOEWLKOSXFHUJTGYEICSNRPXUVGAMZDKZBFPBVEPBRSYUQRPMMLSPFZGXFLSKIBEGPYHCXWSLKBOVATVQCCLYNURCQQFAXTIHQLTWMLDJKUAFJNDIQHDMYWWGOEEYVMAIDOKNMTMKKCYZCWHWXOFPHLGZOVHTKJOYSZNJZQ");

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
    msg.setTimeStamp(0.167125181224);
    msg.setSource(55898U);
    msg.setSourceEntity(230U);
    msg.setDestination(17522U);
    msg.setDestinationEntity(158U);
    msg.value.assign("QQWHAYGNLSTUATUCIMDAVPMXEZUKVXWRPOHYAKFQODMJVYJHMEYJKXVOZNWLEIHWCBXYDTSQIYJEROOZDXSOWSHMQGFXMENZNYHVVIZPGRDTQLKNQJDNIXTKOUTBHEARCWARUJHARULJTFTBZKUOBWLSQCLZIJKPEPECLFBAGUWIBJDDPLNFMSZKFUIUPCNVOYBMHGIGLAJKBBRQYNFRFSTNZGXWVGHAFSPIGQCVCKMMDLGYXSBVZRT");

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
    msg.setTimeStamp(0.601736613972);
    msg.setSource(45847U);
    msg.setSourceEntity(29U);
    msg.setDestination(34632U);
    msg.setDestinationEntity(63U);
    const char tmp_msg_0[] = {39, -18, 46, -67, -59, -20, 67, -21, 116, 31, -107, 103, 45, -77, 56, 22, 104, 96, -9, 33, -127, 26, 9, 53, -29, -61, -42, -28, 68, 90, -25, -25, -52, 19, -2, 116, -88, -3, 46, 56, -65, -35, 8, 19, 53, -1, 49, -64, -16, 35, 87, -14, 112, -46, 6, 64, 125, 44, 65, -99, -99, 35, 64, -108, -1, -128, -14, 93, -90, 20, 97, 70, 2, -82, -113, -5, 19};
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
    msg.setTimeStamp(0.438098001789);
    msg.setSource(55473U);
    msg.setSourceEntity(134U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(163U);
    const char tmp_msg_0[] = {43, 9, -103, -49, 31, 71, 89, -5, -53, -28, 43, -32, 115, -77, -99, 10, -31, 104, -31, -88, 5, 116, 94, 39, -42, -115, -46, 76, -90, 10, -113, -115, -16, -17, 9, -83, -61, -119, 115, 6, -62, -5, 123, 13, -102, 64, -88, 95, 34, 64, 87, 61, -69, 94, -127, 6, -70, -1, 22, -41, 6, -100, 111, -92, -94, -62, -82, 11, -103, -4, 106, -26, 25, 56, 7, -87, 33, -83, -101, 121, -32, -62};
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
    msg.setTimeStamp(0.503409507581);
    msg.setSource(36850U);
    msg.setSourceEntity(42U);
    msg.setDestination(28055U);
    msg.setDestinationEntity(154U);
    const char tmp_msg_0[] = {-9, 83, 72, 113, 96, 125, -110, 60, -106, -26, -38, -109, -58, -112, 40, 37, 85, -48, -16, 72, -18, 1, 28, -15, 95, -33, -48, 8, 5, -84, -80, -102, -93, -95, -121, -41, 78, -30, -53, -39, -10, -71, 0, -74, -28, -66, 9, 40, 0, -32, -33, -31, 58, -58};
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
    msg.setTimeStamp(0.322084537024);
    msg.setSource(791U);
    msg.setSourceEntity(69U);
    msg.setDestination(36723U);
    msg.setDestinationEntity(186U);
    msg.type = 105U;
    msg.frequency = 803410670U;
    msg.min_range = 49749U;
    msg.max_range = 26371U;
    msg.bits_per_point = 78U;
    msg.scale_factor = 0.968497832111;
    const char tmp_msg_0[] = {81, 114, 68, 6, -49, 11, -70, -59, -115, 108, 31, 114, -69, 87, 43, -69, -100, 33, -64, -28, 53, -43, -9, -17, 18, 59, 113, 78, 69, 126, 25, 73, 84, -127, 108, -39, -24, -14, 123, 24, 15, 41, 44, 9, 120, -55, 76, -37, -93, 120, -72, 21, 38, -120, 16, 45, -33, -125, 76, -23, -20, -84, -3, -119, 46, 8, 23, 8, 103, 43, -53, 48, 53, 74, 61, -35, 53, 6, -73, 70, 78, 99, -69, -35, 15, 9, -75, 31, 77, -105, -109, -21, -34, 120, 49, -31, 55, -109, 83, 13, 92, -94, 67, -74, -71, 120, 88, 28, -14, 55, -91, -108, 62, -101, -23, -30, -101, -127, -24, 45, -77, -128, 125, -89, -26, -32, 4, -40, -125, -65, 8, -109, -4, 115, -98, -7, 103, 119, 107, -101, 87, -128, 3, 123, -6, 101, 64, -19, 7, 117, 91, -56, -93, -16, -52, -78, -24, -60, -97, 106, -74, -4, -8, 47, -89, 89, -27, 52, -67, 6, -16, 114, 20, -30, 97, -29, -76, -77, 71, -43, 33, 6, 87, 123, -36, 85, -80, -21, -127, -44, -60, -75, -112, -9, -71, -62, 0, 6, -100, 113, -51, 112, 80, -109, 45};
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
    msg.setTimeStamp(0.277330864003);
    msg.setSource(50494U);
    msg.setSourceEntity(87U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(71U);
    msg.type = 45U;
    msg.frequency = 2898869323U;
    msg.min_range = 10207U;
    msg.max_range = 53694U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.870451136299;
    const char tmp_msg_0[] = {-99, -114, 99, 69, -4, -65, 103, -45, 76, 34, -22, -5, -38, -91, -18, -53, 7, -50, -61, 69, 42, 91, 55, -118, 122, -126, 89, -29, -30, -125, -100, -14, 82, -101, 114, 8, -19, -124, 98, 42, -17, 71, 92, 107, 3, 72, -68, 121};
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
    msg.setTimeStamp(0.341193973898);
    msg.setSource(43946U);
    msg.setSourceEntity(56U);
    msg.setDestination(17995U);
    msg.setDestinationEntity(108U);
    msg.type = 213U;
    msg.frequency = 3790608259U;
    msg.min_range = 41150U;
    msg.max_range = 40505U;
    msg.bits_per_point = 216U;
    msg.scale_factor = 0.0643831597269;
    const char tmp_msg_0[] = {124, 74, 26, -79, -35, 1, 77, 32, -81, 90, 60, -92, -80, -114, 3, 7, -75, 92, 1, -59, -8, -39, -11, 43, 58, 26, 16, -116, -23, 46, 93, -92, -100, 91, -107, 46, -94, -56, 75};
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
    msg.setTimeStamp(0.526157282279);
    msg.setSource(10878U);
    msg.setSourceEntity(149U);
    msg.setDestination(54079U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.563222948981);
    msg.setSource(53015U);
    msg.setSourceEntity(30U);
    msg.setDestination(21638U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.850912584411);
    msg.setSource(36456U);
    msg.setSourceEntity(23U);
    msg.setDestination(46852U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.347678986404);
    msg.setSource(61523U);
    msg.setSourceEntity(239U);
    msg.setDestination(38991U);
    msg.setDestinationEntity(238U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.856688324985);
    msg.setSource(49718U);
    msg.setSourceEntity(9U);
    msg.setDestination(63693U);
    msg.setDestinationEntity(184U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.14844426735);
    msg.setSource(29541U);
    msg.setSourceEntity(160U);
    msg.setDestination(4139U);
    msg.setDestinationEntity(224U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.734507668922);
    msg.setSource(38145U);
    msg.setSourceEntity(94U);
    msg.setDestination(9989U);
    msg.setDestinationEntity(123U);
    msg.value = 0.119089274964;
    msg.confidence = 0.42221669784;
    msg.opmodes.assign("JNWPYZSYVLXQIUIRQEVIWTAMGVQBDANXQXWRCRZNPIDWTBPGFTWCOXCMLNOBCZCLUXGBODEHCYQGBAMJSCEJBZPNYMCTCZWFYDGVLQZUHMLHILHQPEVSOXUYRYKVUJYWHXAGKPNHKQNOACIEYPS");

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
    msg.setTimeStamp(0.752801893534);
    msg.setSource(22276U);
    msg.setSourceEntity(2U);
    msg.setDestination(8799U);
    msg.setDestinationEntity(226U);
    msg.value = 0.669703062012;
    msg.confidence = 0.115222425787;
    msg.opmodes.assign("UZJJADYBSOKKYKEDTOWQCBPJKWGEPROBKZCLXRKQQSFFVILOGJAMUIWTNAISVKGVEBFDLXPDUPKUXANWRXOZQMWWDNISQPAFNJ");

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
    msg.setTimeStamp(0.626888315459);
    msg.setSource(44534U);
    msg.setSourceEntity(92U);
    msg.setDestination(53803U);
    msg.setDestinationEntity(81U);
    msg.value = 0.000177518180813;
    msg.confidence = 0.908167638706;
    msg.opmodes.assign("JBFIPDANHETFKCDTVJLRUIGYYBKKRBHRZWXGWFMMWFUYSNBQMXLNUCOEQHJOIKLBXNPTNZCQMDURTRGSFNXFDHMKGOJLXOWJZMEAMSXEGARTCWGIQPEPNEHLFZVZQTIJVNZXCRPPLGPHFYDHSKUVAOCOINEBBRDJTAAKPQWDJBCSLSGAOUVAUTBYKVS");

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
    msg.setTimeStamp(0.0536670361508);
    msg.setSource(1163U);
    msg.setSourceEntity(237U);
    msg.setDestination(28798U);
    msg.setDestinationEntity(20U);
    msg.itow = 3588157794U;
    msg.lat = 0.761647905246;
    msg.lon = 0.983478004944;
    msg.height_ell = 0.455791025422;
    msg.height_sea = 0.982887087494;
    msg.hacc = 0.318459665816;
    msg.vacc = 0.0557168225273;
    msg.vel_n = 0.204314627951;
    msg.vel_e = 0.137579644367;
    msg.vel_d = 0.807353784935;
    msg.speed = 0.968472762101;
    msg.gspeed = 0.10577196219;
    msg.heading = 0.898313290485;
    msg.sacc = 0.228083462548;
    msg.cacc = 0.0635521475062;

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
    msg.setTimeStamp(0.307542027368);
    msg.setSource(21222U);
    msg.setSourceEntity(225U);
    msg.setDestination(15604U);
    msg.setDestinationEntity(253U);
    msg.itow = 2463715090U;
    msg.lat = 0.878579347904;
    msg.lon = 0.68238301823;
    msg.height_ell = 0.856372140279;
    msg.height_sea = 0.549083690711;
    msg.hacc = 0.107962856332;
    msg.vacc = 0.462502765961;
    msg.vel_n = 0.0137614958928;
    msg.vel_e = 0.983024806506;
    msg.vel_d = 0.385159495833;
    msg.speed = 0.154455923871;
    msg.gspeed = 0.621335140912;
    msg.heading = 0.59503773697;
    msg.sacc = 0.628215946945;
    msg.cacc = 0.69863865679;

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
    msg.setTimeStamp(0.362100168314);
    msg.setSource(37990U);
    msg.setSourceEntity(33U);
    msg.setDestination(42826U);
    msg.setDestinationEntity(180U);
    msg.itow = 1769229964U;
    msg.lat = 0.250772923218;
    msg.lon = 0.995710649393;
    msg.height_ell = 0.0932448906146;
    msg.height_sea = 0.43371720001;
    msg.hacc = 0.295067179174;
    msg.vacc = 0.101709279784;
    msg.vel_n = 0.0633065408706;
    msg.vel_e = 0.796153578809;
    msg.vel_d = 0.190897081611;
    msg.speed = 0.231189335543;
    msg.gspeed = 0.495788433339;
    msg.heading = 0.768277798666;
    msg.sacc = 0.447972388161;
    msg.cacc = 0.788660305869;

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
    msg.setTimeStamp(0.685733637192);
    msg.setSource(61459U);
    msg.setSourceEntity(37U);
    msg.setDestination(35019U);
    msg.setDestinationEntity(221U);
    msg.id = 99U;
    msg.value = 0.130529979868;

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
    msg.setTimeStamp(0.874922552292);
    msg.setSource(4454U);
    msg.setSourceEntity(21U);
    msg.setDestination(54429U);
    msg.setDestinationEntity(75U);
    msg.id = 253U;
    msg.value = 0.0223951816795;

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
    msg.setTimeStamp(0.877275180041);
    msg.setSource(8571U);
    msg.setSourceEntity(247U);
    msg.setDestination(9218U);
    msg.setDestinationEntity(72U);
    msg.id = 17U;
    msg.value = 0.911961328144;

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
    msg.setTimeStamp(0.167957226886);
    msg.setSource(19921U);
    msg.setSourceEntity(250U);
    msg.setDestination(21832U);
    msg.setDestinationEntity(198U);
    msg.x = 0.276087367241;
    msg.y = 0.883432455937;
    msg.z = 0.0791657443167;
    msg.phi = 0.568515720686;
    msg.theta = 0.112518021441;
    msg.psi = 0.339815734761;

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
    msg.setTimeStamp(0.0484235062533);
    msg.setSource(17999U);
    msg.setSourceEntity(165U);
    msg.setDestination(57923U);
    msg.setDestinationEntity(138U);
    msg.x = 0.402428558973;
    msg.y = 0.428009777445;
    msg.z = 0.0811140642654;
    msg.phi = 0.459668052627;
    msg.theta = 0.724221514292;
    msg.psi = 0.660240837288;

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
    msg.setTimeStamp(0.760036097585);
    msg.setSource(23935U);
    msg.setSourceEntity(16U);
    msg.setDestination(12659U);
    msg.setDestinationEntity(104U);
    msg.x = 0.13842223034;
    msg.y = 0.0605370190705;
    msg.z = 0.165338967112;
    msg.phi = 0.105084220441;
    msg.theta = 0.688263348026;
    msg.psi = 0.570246728712;

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
    msg.setTimeStamp(0.40537520435);
    msg.setSource(59244U);
    msg.setSourceEntity(136U);
    msg.setDestination(48357U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.464125222121;
    msg.beam_height = 0.531580971301;

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
    msg.setTimeStamp(0.440516064396);
    msg.setSource(53759U);
    msg.setSourceEntity(244U);
    msg.setDestination(1992U);
    msg.setDestinationEntity(197U);
    msg.beam_width = 0.797751672619;
    msg.beam_height = 0.928235025231;

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
    msg.setTimeStamp(0.740280667365);
    msg.setSource(39050U);
    msg.setSourceEntity(135U);
    msg.setDestination(45372U);
    msg.setDestinationEntity(149U);
    msg.beam_width = 0.584820764141;
    msg.beam_height = 0.958070896281;

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
    msg.setTimeStamp(0.771509165469);
    msg.setSource(25483U);
    msg.setSourceEntity(232U);
    msg.setDestination(42119U);
    msg.setDestinationEntity(248U);
    msg.sane = 61U;

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
    msg.setTimeStamp(0.807828934811);
    msg.setSource(43496U);
    msg.setSourceEntity(177U);
    msg.setDestination(30313U);
    msg.setDestinationEntity(153U);
    msg.sane = 148U;

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
    msg.setTimeStamp(0.225454465885);
    msg.setSource(13431U);
    msg.setSourceEntity(20U);
    msg.setDestination(59435U);
    msg.setDestinationEntity(28U);
    msg.sane = 5U;

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
    msg.setTimeStamp(0.388631968047);
    msg.setSource(51368U);
    msg.setSourceEntity(137U);
    msg.setDestination(37048U);
    msg.setDestinationEntity(104U);
    msg.value = 0.884454693878;

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
    msg.setTimeStamp(0.544603164549);
    msg.setSource(43211U);
    msg.setSourceEntity(3U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(63U);
    msg.value = 0.218190188393;

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
    msg.setTimeStamp(0.177222391018);
    msg.setSource(24379U);
    msg.setSourceEntity(207U);
    msg.setDestination(56319U);
    msg.setDestinationEntity(17U);
    msg.value = 0.541687941937;

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
    msg.setTimeStamp(0.415480144505);
    msg.setSource(9799U);
    msg.setSourceEntity(140U);
    msg.setDestination(10899U);
    msg.setDestinationEntity(195U);
    msg.value = 0.681209613409;

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
    msg.setTimeStamp(0.389680126717);
    msg.setSource(2377U);
    msg.setSourceEntity(157U);
    msg.setDestination(21612U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0282311268455;

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
    msg.setTimeStamp(0.106938214114);
    msg.setSource(4298U);
    msg.setSourceEntity(233U);
    msg.setDestination(4917U);
    msg.setDestinationEntity(57U);
    msg.value = 0.233782394785;

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
    msg.setTimeStamp(0.775062859637);
    msg.setSource(49007U);
    msg.setSourceEntity(123U);
    msg.setDestination(3998U);
    msg.setDestinationEntity(122U);
    msg.value = 0.562909795213;

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
    msg.setTimeStamp(0.0560377876148);
    msg.setSource(39107U);
    msg.setSourceEntity(140U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(37U);
    msg.value = 0.171595217041;

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
    msg.setTimeStamp(0.497544920474);
    msg.setSource(40673U);
    msg.setSourceEntity(185U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(88U);
    msg.value = 0.767730172101;

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
    msg.setTimeStamp(0.603862727054);
    msg.setSource(39110U);
    msg.setSourceEntity(186U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(68U);
    msg.id = 90U;
    msg.zoom = 210U;
    msg.action = 57U;

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
    msg.setTimeStamp(0.0620020840771);
    msg.setSource(8374U);
    msg.setSourceEntity(174U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(101U);
    msg.id = 134U;
    msg.zoom = 223U;
    msg.action = 133U;

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
    msg.setTimeStamp(0.888784748984);
    msg.setSource(6513U);
    msg.setSourceEntity(85U);
    msg.setDestination(10014U);
    msg.setDestinationEntity(47U);
    msg.id = 183U;
    msg.zoom = 53U;
    msg.action = 70U;

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
    msg.setTimeStamp(0.691053364356);
    msg.setSource(14478U);
    msg.setSourceEntity(59U);
    msg.setDestination(56792U);
    msg.setDestinationEntity(71U);
    msg.id = 230U;
    msg.value = 0.722419720696;

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
    msg.setTimeStamp(0.774626995876);
    msg.setSource(31525U);
    msg.setSourceEntity(38U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(167U);
    msg.id = 41U;
    msg.value = 0.361706987385;

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
    msg.setTimeStamp(0.0103649115403);
    msg.setSource(53535U);
    msg.setSourceEntity(162U);
    msg.setDestination(13061U);
    msg.setDestinationEntity(214U);
    msg.id = 118U;
    msg.value = 0.676666257858;

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
    msg.setTimeStamp(0.550145023032);
    msg.setSource(48165U);
    msg.setSourceEntity(44U);
    msg.setDestination(10276U);
    msg.setDestinationEntity(29U);
    msg.id = 83U;
    msg.value = 0.473669946931;

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
    msg.setTimeStamp(0.477257501469);
    msg.setSource(53989U);
    msg.setSourceEntity(85U);
    msg.setDestination(25876U);
    msg.setDestinationEntity(134U);
    msg.id = 66U;
    msg.value = 0.276274066289;

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
    msg.setTimeStamp(0.32073690379);
    msg.setSource(22426U);
    msg.setSourceEntity(193U);
    msg.setDestination(15533U);
    msg.setDestinationEntity(208U);
    msg.id = 101U;
    msg.value = 0.850051524347;

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
    msg.setTimeStamp(0.113707806135);
    msg.setSource(41160U);
    msg.setSourceEntity(35U);
    msg.setDestination(30854U);
    msg.setDestinationEntity(94U);
    msg.id = 113U;
    msg.angle = 0.461580839508;

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
    msg.setTimeStamp(0.650631321713);
    msg.setSource(53734U);
    msg.setSourceEntity(86U);
    msg.setDestination(52922U);
    msg.setDestinationEntity(153U);
    msg.id = 238U;
    msg.angle = 0.528115479681;

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
    msg.setTimeStamp(0.278777360005);
    msg.setSource(39749U);
    msg.setSourceEntity(56U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(141U);
    msg.id = 194U;
    msg.angle = 0.702499408307;

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
    msg.setTimeStamp(0.321488102423);
    msg.setSource(15198U);
    msg.setSourceEntity(2U);
    msg.setDestination(30143U);
    msg.setDestinationEntity(128U);
    msg.op = 55U;
    msg.actions.assign("CQPOAYIFDVDJYJHTQOZLJOBHLLRWLUJTURKCSSTQYUCDLHNUUDBZNRWOROMJKXGYPCAFGVEGSFDHGMEPNWIJJXMGGOPNRYYSURTWAFEXWZFAHMTHVVARRPXSZMSFXNINECNPMVKYXDXVABDXBWAMBHLWKHSTJMKFKTLNOQZIGELCIRHMZXCLIKVZBBVMQYKWVORGQKPAFCHXYN");

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
    msg.setTimeStamp(0.376836764254);
    msg.setSource(1957U);
    msg.setSourceEntity(33U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(41U);
    msg.op = 81U;
    msg.actions.assign("OJFEPAZRSZDNEHABVFCWXHWMZWFAANJDMXPUUJCMEOXFUTIBQHLMKUOVFDMUMHQIFXRKIJZQGNSRZMLRCVFWTUSWDLGYEUHLKQSBLKBJAZVVQJURWTLHGJBPYNKPZOBAAYKFUCAPKBUSRFDDOYOWGAPLPGOVNCXPTDIBGCHYPJQGZTSETBNOLNCFRHEHWKIXWORNOB");

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
    msg.setTimeStamp(0.00767265820727);
    msg.setSource(37946U);
    msg.setSourceEntity(70U);
    msg.setDestination(25544U);
    msg.setDestinationEntity(35U);
    msg.op = 71U;
    msg.actions.assign("FZMAAKIUORUXQFVDJITFGLKAYNIFVOFWHXCOWNUNGOWTBTCLHRQXIOLIPWEPMERTFMHYPMMJQJHRTBWAYSJNCRVPZLCSDJSOQCPFRSIMEMJQSDCUBBDNRKHVYXCRIAKKXWANGFGGSJMDRE");

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
    msg.setTimeStamp(0.916375641267);
    msg.setSource(54670U);
    msg.setSourceEntity(235U);
    msg.setDestination(17251U);
    msg.setDestinationEntity(30U);
    msg.actions.assign("UYKEFQETSGGTCYCAZKHYLAEMOLYOCFHLTWUVHGEEBJTKIZVTRNONAXJWNSTBOZUOSMOGFRMKISVIBNOYDJISYXUWERVGFMWZAHYJNALF");

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
    msg.setTimeStamp(0.398489183823);
    msg.setSource(16402U);
    msg.setSourceEntity(27U);
    msg.setDestination(35801U);
    msg.setDestinationEntity(169U);
    msg.actions.assign("XUMHBYIWFZCAXAJTBGBTXVQYYNJCNJ");

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
    msg.setTimeStamp(0.795805535918);
    msg.setSource(61912U);
    msg.setSourceEntity(83U);
    msg.setDestination(11187U);
    msg.setDestinationEntity(103U);
    msg.actions.assign("CORMWDLNODMOBYTEPUXQPFRNQVVYIEAMKYGYWFPUNNFEDXDTPEVISBHKNCIRLZJNRUPNJRVPTDGIFDMLUOKGATSSSBOXKGVJSCPPVSAVNTSFDJOFCIHQTBYGZHHXKERLZARCAOVZKJQLHMSQXAELHBWWMEKKZGIRJCNZWKATKUTRGOEDITLFXZQEJYMHYBRJYBGCQDJCAQZPMGITUJBOFXO");

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
    msg.setTimeStamp(0.91304811499);
    msg.setSource(8340U);
    msg.setSourceEntity(84U);
    msg.setDestination(39608U);
    msg.setDestinationEntity(39U);
    msg.button = 131U;
    msg.value = 126U;

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
    msg.setTimeStamp(0.743269374893);
    msg.setSource(4464U);
    msg.setSourceEntity(230U);
    msg.setDestination(47077U);
    msg.setDestinationEntity(140U);
    msg.button = 95U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.713823434016);
    msg.setSource(23805U);
    msg.setSourceEntity(52U);
    msg.setDestination(5623U);
    msg.setDestinationEntity(172U);
    msg.button = 57U;
    msg.value = 69U;

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
    msg.setTimeStamp(0.735094154285);
    msg.setSource(40983U);
    msg.setSourceEntity(61U);
    msg.setDestination(14940U);
    msg.setDestinationEntity(89U);
    msg.op = 216U;
    msg.text.assign("NALVUGXEYXSRCRPBVNTLCSJMFHAILNBEQEEZEUJPHERIVUZVIDKYSNWORYMXJDNXYUGSYYNWPXECIXIRBIHMUMPTZ");

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
    msg.setTimeStamp(0.960014259944);
    msg.setSource(46046U);
    msg.setSourceEntity(100U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(3U);
    msg.op = 30U;
    msg.text.assign("LMFBNBVLNCPAXVVWMTHBUPUQAZOVRBGRJKBVRQSHJGCKVEWSFBMCKGEOYRYIILZSPTZJNJUOVQCDLEFAJRUOOZOGVN");

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
    msg.setTimeStamp(0.89383791912);
    msg.setSource(56203U);
    msg.setSourceEntity(146U);
    msg.setDestination(47008U);
    msg.setDestinationEntity(232U);
    msg.op = 93U;
    msg.text.assign("YNDQXXYUZCEPMLNUVLFMZLYYUOWZHLOVFTGTMXMQMRGHSLHKCDAPDAROBHTNP");

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
    msg.setTimeStamp(0.359337144336);
    msg.setSource(25760U);
    msg.setSourceEntity(224U);
    msg.setDestination(26060U);
    msg.setDestinationEntity(196U);
    msg.op = 133U;
    msg.time_remain = 0.121285000246;
    msg.sched_time = 0.790763510947;

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
    msg.setTimeStamp(0.0901214718346);
    msg.setSource(33758U);
    msg.setSourceEntity(26U);
    msg.setDestination(28837U);
    msg.setDestinationEntity(166U);
    msg.op = 2U;
    msg.time_remain = 0.338998714468;
    msg.sched_time = 0.417539729888;

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
    msg.setTimeStamp(0.693982808684);
    msg.setSource(61982U);
    msg.setSourceEntity(223U);
    msg.setDestination(25665U);
    msg.setDestinationEntity(207U);
    msg.op = 147U;
    msg.time_remain = 0.36963693866;
    msg.sched_time = 0.21528096162;

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
    msg.setTimeStamp(0.0586776809427);
    msg.setSource(28079U);
    msg.setSourceEntity(223U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(184U);
    msg.name.assign("BRYLPSEYMVUHEFGENOZANEMNQTGRPQPSMAVOXDVXDVPCMIIAIJLTJOAYZWUPJNMGPZXLTKCWFBQOGQQWXSIZFSKT");
    msg.op = 207U;
    msg.sched_time = 0.616847265356;

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
    msg.setTimeStamp(0.556764270699);
    msg.setSource(63530U);
    msg.setSourceEntity(45U);
    msg.setDestination(56371U);
    msg.setDestinationEntity(50U);
    msg.name.assign("ZIOOEIAGWXTTCSZAYBNJDXPSYDQHZSCVUVDFVPSTSMDWKNTONBQREGOYFEYKUPRWGMMFAEZCURNCLVIXKANKLUNDHRHXGQZMFOOYFAWLDQGCSRHPFNHLFUDVKMSLTAIBDHPZYGVHQXUELJBKPXBSMUWZAYFYFOGZRACBLRM");
    msg.op = 155U;
    msg.sched_time = 0.847380633554;

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
    msg.setTimeStamp(0.243500567012);
    msg.setSource(64799U);
    msg.setSourceEntity(173U);
    msg.setDestination(16185U);
    msg.setDestinationEntity(68U);
    msg.name.assign("BCESZXLHQKWNDTVKOIUXBHJCPDBSVZYIRLAYQTARPFJPODEIISXCWKDXTOHEJNWVJANLPMWRUPXQMVVFOHXZESO");
    msg.op = 30U;
    msg.sched_time = 0.794464546441;

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
    msg.setTimeStamp(0.871162471012);
    msg.setSource(30081U);
    msg.setSourceEntity(238U);
    msg.setDestination(18445U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.453235933317);
    msg.setSource(22516U);
    msg.setSourceEntity(168U);
    msg.setDestination(42394U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.235276375023);
    msg.setSource(2124U);
    msg.setSourceEntity(63U);
    msg.setDestination(8171U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.391497322807);
    msg.setSource(43897U);
    msg.setSourceEntity(173U);
    msg.setDestination(26967U);
    msg.setDestinationEntity(170U);
    msg.name.assign("QUFQBWRYPAWHPXNOJXMKKELDDZSXNGFETKWGFCQROSSLQVFPZMLATIOINGZOMYUTJVTPOCKBHDOQOLGJKZQRYEBWSMYPBJTDCZHDPLVIJZAFQGCXWTM");
    msg.state = 170U;

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
    msg.setTimeStamp(0.602056861097);
    msg.setSource(7761U);
    msg.setSourceEntity(235U);
    msg.setDestination(10177U);
    msg.setDestinationEntity(69U);
    msg.name.assign("TUQOEMEUDCEWJARCDSXSFQQOJEVRFNVIEOIRXMKCZUTMYSZNLUBOVZLRLDLBHTDZBBNSISCGMZWWCJHHAPMZIZGINQQBGHOMGXDYLYUYGAUKKLZCWXUAQJYYNRTDFXNWDISSPYTTMIOHVGXQVBBHQWVVWESPJDYCCGEJXHDGPNJCGKSXQVQKHONLPAPYPIHKFUREACTOLKYTRRBNZXSMVX");
    msg.state = 187U;

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
    msg.setTimeStamp(0.960982166643);
    msg.setSource(27287U);
    msg.setSourceEntity(87U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(93U);
    msg.name.assign("ENHHMDRZQUGMVVVALKLSRUQUKZVPKFKDRJWHTCLGDHPAABIZYWTGPKQMMNLEWBQMDTCWHGUNPDZPYJQEBYNEFNOGBAODETZFFUUCZYCQNWJOLYRDYIXLSEEFWTAVUJRYKPNBJACHXXXRXOWESDJRANROILSGCFZQTGAQCG");
    msg.state = 167U;

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
    msg.setTimeStamp(0.340728807281);
    msg.setSource(50677U);
    msg.setSourceEntity(211U);
    msg.setDestination(64656U);
    msg.setDestinationEntity(94U);
    msg.name.assign("BVZIKMSHYWRNSLPKDHJDUVRVMYBEFJDFFAOAFDIHFFQXIWPXLGYDYCXARBEHGUGZVNMNHSUDEALDFQSDYJVENGPPYUIFOHNQCWSVNSQRPYDPXZEEZJMXLKBJRZSBQCNLMTETBHVJUOEPDWLJHVQTAVCAVEUPXMITCZXKMFENZZRUZRWKTJQAARGLICGOUOLUH");
    msg.value = 172U;

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
    msg.setTimeStamp(0.543956216891);
    msg.setSource(19609U);
    msg.setSourceEntity(13U);
    msg.setDestination(48226U);
    msg.setDestinationEntity(250U);
    msg.name.assign("NEINBLJDKMUQASPRLBFROYRFKJMHOATZMBOWNDANSCGMHPEGQWYTSESOWMGYJDTMEUJBZPYVTBLCWPPJUTRLANHEZVTFESQJFXGRRZYUCTDLFUPXDHHTNXEYLQXFIYVKPCQUTGLLRQXDKHSQAOCPVSAOOUKCMJGVNZIIG");
    msg.value = 12U;

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
    msg.setTimeStamp(0.380363690032);
    msg.setSource(28712U);
    msg.setSourceEntity(44U);
    msg.setDestination(10634U);
    msg.setDestinationEntity(223U);
    msg.name.assign("QCKEEMWHDQYJWDAGFJBQCQUWWPLDOGYLGJULCATRSWGAXAOYOXGHRDIUNIPXNIPJDNZXZVNEEGIAMTFRUGFBZAGNQFFOBLPBIEHHTCHDMMNYQCGXKBMVAZQYITKRENIXCVBSBVZHMUVVK");
    msg.value = 135U;

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
    msg.setTimeStamp(0.805251901351);
    msg.setSource(18815U);
    msg.setSourceEntity(39U);
    msg.setDestination(63649U);
    msg.setDestinationEntity(141U);
    msg.name.assign("JZQBJDQXVHEAAKYKKLFNRJTAHGMYYWFXSMZNENDT");

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
    msg.setTimeStamp(0.338535720571);
    msg.setSource(61124U);
    msg.setSourceEntity(243U);
    msg.setDestination(28770U);
    msg.setDestinationEntity(222U);
    msg.name.assign("LOBIGXYXEWSVZFQPGVPCYHRIWUJESYLHTOXSQMCVSFOVBDGVWLJZBFVMGNHEDYADYFXRCVLZTFQKWYUFONGLDTHKIJWWDYRKSWJPUXAAHJCMEKRYXBGMKRTIZLBPQCTBGTQPMFCJMJUQTHXOXPPIAKLMGKMNTBOJBHFIZTDAWEUBKUSWQCHUIAZNNAMQRNVDLKACSEOEZBDSPLAQRSDZVX");

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
    msg.setTimeStamp(0.451162909333);
    msg.setSource(43836U);
    msg.setSourceEntity(89U);
    msg.setDestination(47456U);
    msg.setDestinationEntity(4U);
    msg.name.assign("JDWRBWCBXNCNQXGFXIIUMJFVPQADQHXREKWHDQDRLVIGFHPOYFDKCLNTYEBPNZSKPFJSULIABQMYGUGBW");

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
    msg.setTimeStamp(0.338888965752);
    msg.setSource(62494U);
    msg.setSourceEntity(29U);
    msg.setDestination(44254U);
    msg.setDestinationEntity(112U);
    msg.name.assign("ALPJDFIPGSXNAZGHRGCERPVYKZKKTOJBRHDXZGLICOLAWDNLRWWXMCDWTZXBMETNFEPKVYVYJEXHAYQRAQHRGWCEJOIUQHNYITLLTNBAUVZMIBLESP");
    msg.value = 182U;

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
    msg.setTimeStamp(0.0180255330985);
    msg.setSource(37651U);
    msg.setSourceEntity(116U);
    msg.setDestination(30231U);
    msg.setDestinationEntity(244U);
    msg.name.assign("WKWMFJXZIHRSNKPUBEETWACFHBIDVECGDGRHVRUEYMSWRJF");
    msg.value = 125U;

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
    msg.setTimeStamp(0.05702630611);
    msg.setSource(547U);
    msg.setSourceEntity(2U);
    msg.setDestination(60328U);
    msg.setDestinationEntity(38U);
    msg.name.assign("MOPIOINFMHHTQBEVKOVPOFUZQBVAIHJZVTRSJIINJDJIFRSYLUFAAZTEXBTISNCYGUDZGIUWNMVZYGTNFETSFZUQOBFXWXQVXDRHWJWXEVLRFSYBR");
    msg.value = 182U;

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
    msg.setTimeStamp(0.144754274467);
    msg.setSource(42593U);
    msg.setSourceEntity(48U);
    msg.setDestination(60615U);
    msg.setDestinationEntity(27U);
    msg.id = 15U;
    msg.period = 991533025U;
    msg.duty_cycle = 1489236601U;

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
    msg.setTimeStamp(0.839618488538);
    msg.setSource(29675U);
    msg.setSourceEntity(201U);
    msg.setDestination(3776U);
    msg.setDestinationEntity(38U);
    msg.id = 157U;
    msg.period = 1247221790U;
    msg.duty_cycle = 3825996879U;

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
    msg.setTimeStamp(0.168539108259);
    msg.setSource(43297U);
    msg.setSourceEntity(154U);
    msg.setDestination(52323U);
    msg.setDestinationEntity(185U);
    msg.id = 106U;
    msg.period = 687353003U;
    msg.duty_cycle = 2623010963U;

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
    msg.setTimeStamp(0.948101333536);
    msg.setSource(18689U);
    msg.setSourceEntity(158U);
    msg.setDestination(20953U);
    msg.setDestinationEntity(11U);
    msg.id = 159U;
    msg.period = 3974893543U;
    msg.duty_cycle = 3247128857U;

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
    msg.setTimeStamp(0.308466287509);
    msg.setSource(18043U);
    msg.setSourceEntity(129U);
    msg.setDestination(37468U);
    msg.setDestinationEntity(114U);
    msg.id = 72U;
    msg.period = 1383591241U;
    msg.duty_cycle = 813559195U;

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
    msg.setTimeStamp(0.329681897525);
    msg.setSource(37743U);
    msg.setSourceEntity(52U);
    msg.setDestination(7467U);
    msg.setDestinationEntity(181U);
    msg.id = 197U;
    msg.period = 1740138133U;
    msg.duty_cycle = 517120042U;

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
    msg.setTimeStamp(0.25725695303);
    msg.setSource(44167U);
    msg.setSourceEntity(158U);
    msg.setDestination(38466U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.986383613938;
    msg.lon = 0.567294882366;
    msg.height = 0.729595992712;
    msg.x = 0.750900833659;
    msg.y = 0.146518157399;
    msg.z = 0.503917579968;
    msg.phi = 0.195602337904;
    msg.theta = 0.82465629345;
    msg.psi = 0.669288412371;
    msg.u = 0.401965045489;
    msg.v = 0.583963597679;
    msg.w = 0.784540386368;
    msg.vx = 0.617915756869;
    msg.vy = 0.727105215662;
    msg.vz = 0.275134611608;
    msg.p = 0.601696071063;
    msg.q = 0.877629074644;
    msg.r = 0.0313449374647;
    msg.depth = 0.174941693477;
    msg.alt = 0.0982859708454;

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
    msg.setTimeStamp(0.84341908732);
    msg.setSource(55478U);
    msg.setSourceEntity(125U);
    msg.setDestination(19430U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.595078384892;
    msg.lon = 0.236335032195;
    msg.height = 0.118599145833;
    msg.x = 0.871271160747;
    msg.y = 0.483891960146;
    msg.z = 0.184115887413;
    msg.phi = 0.715445124421;
    msg.theta = 0.851694238341;
    msg.psi = 0.408052305612;
    msg.u = 0.644130278022;
    msg.v = 0.310964968771;
    msg.w = 0.836343235067;
    msg.vx = 0.10683312832;
    msg.vy = 0.627026123142;
    msg.vz = 0.958812509864;
    msg.p = 0.762491884192;
    msg.q = 0.415242379654;
    msg.r = 0.609488109186;
    msg.depth = 0.849460139683;
    msg.alt = 0.510261638439;

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
    msg.setTimeStamp(0.419715800586);
    msg.setSource(29306U);
    msg.setSourceEntity(126U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.538055447345;
    msg.lon = 0.339277217205;
    msg.height = 0.946868819726;
    msg.x = 0.512715959209;
    msg.y = 0.43047059909;
    msg.z = 0.192910348218;
    msg.phi = 0.88663823725;
    msg.theta = 0.902081036424;
    msg.psi = 0.487767848392;
    msg.u = 0.632474071094;
    msg.v = 0.315171880528;
    msg.w = 0.631812719567;
    msg.vx = 0.522672973739;
    msg.vy = 0.664206750616;
    msg.vz = 0.25374374773;
    msg.p = 0.597769485823;
    msg.q = 0.210817375016;
    msg.r = 0.957042634488;
    msg.depth = 0.991046192928;
    msg.alt = 0.513315387377;

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
    msg.setTimeStamp(0.644457494812);
    msg.setSource(49680U);
    msg.setSourceEntity(198U);
    msg.setDestination(29415U);
    msg.setDestinationEntity(90U);
    msg.x = 0.372875750756;
    msg.y = 0.211269105196;
    msg.z = 0.0312908875232;

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
    msg.setTimeStamp(0.860888310679);
    msg.setSource(59854U);
    msg.setSourceEntity(89U);
    msg.setDestination(12172U);
    msg.setDestinationEntity(49U);
    msg.x = 0.0240554477138;
    msg.y = 0.254679416785;
    msg.z = 0.18965908902;

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
    msg.setTimeStamp(0.820668133706);
    msg.setSource(40288U);
    msg.setSourceEntity(81U);
    msg.setDestination(8376U);
    msg.setDestinationEntity(94U);
    msg.x = 0.875915504805;
    msg.y = 0.626542619341;
    msg.z = 0.965295543403;

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
    msg.setTimeStamp(0.69435196002);
    msg.setSource(37011U);
    msg.setSourceEntity(200U);
    msg.setDestination(59262U);
    msg.setDestinationEntity(121U);
    msg.value = 0.651206031197;

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
    msg.setTimeStamp(0.881148006394);
    msg.setSource(17638U);
    msg.setSourceEntity(152U);
    msg.setDestination(61660U);
    msg.setDestinationEntity(159U);
    msg.value = 0.589237888774;

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
    msg.setTimeStamp(0.357102989745);
    msg.setSource(16178U);
    msg.setSourceEntity(205U);
    msg.setDestination(27042U);
    msg.setDestinationEntity(145U);
    msg.value = 0.767834003876;

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
    msg.setTimeStamp(0.110076479268);
    msg.setSource(23829U);
    msg.setSourceEntity(165U);
    msg.setDestination(62981U);
    msg.setDestinationEntity(169U);
    msg.value = 0.507632528184;

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
    msg.setTimeStamp(0.267787012248);
    msg.setSource(55640U);
    msg.setSourceEntity(88U);
    msg.setDestination(38113U);
    msg.setDestinationEntity(202U);
    msg.value = 0.568354529125;

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
    msg.setTimeStamp(0.641687105499);
    msg.setSource(43947U);
    msg.setSourceEntity(103U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(194U);
    msg.value = 0.981354815539;

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
    msg.setTimeStamp(0.735971801621);
    msg.setSource(33679U);
    msg.setSourceEntity(151U);
    msg.setDestination(27506U);
    msg.setDestinationEntity(138U);
    msg.x = 0.626059763723;
    msg.y = 0.860188135625;
    msg.z = 0.668677380768;
    msg.phi = 0.430665357694;
    msg.theta = 0.659079823225;
    msg.psi = 0.820811878889;
    msg.p = 0.802959351836;
    msg.q = 0.208442827339;
    msg.r = 0.96137289307;
    msg.u = 0.75353421261;
    msg.v = 0.642913954012;
    msg.w = 0.899836322443;
    msg.bias_psi = 0.0376763805122;
    msg.bias_r = 0.00759827924218;

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
    msg.setTimeStamp(0.779809843496);
    msg.setSource(10106U);
    msg.setSourceEntity(95U);
    msg.setDestination(41683U);
    msg.setDestinationEntity(176U);
    msg.x = 0.937600436577;
    msg.y = 0.366605715909;
    msg.z = 0.829083877775;
    msg.phi = 0.720917233726;
    msg.theta = 0.96826617907;
    msg.psi = 0.928389346734;
    msg.p = 0.297499042283;
    msg.q = 0.308704423106;
    msg.r = 0.334651516376;
    msg.u = 0.900324682636;
    msg.v = 0.197004496235;
    msg.w = 0.200220443792;
    msg.bias_psi = 0.756626839062;
    msg.bias_r = 0.423838971448;

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
    msg.setTimeStamp(0.776766841611);
    msg.setSource(31723U);
    msg.setSourceEntity(83U);
    msg.setDestination(6895U);
    msg.setDestinationEntity(188U);
    msg.x = 0.990804205227;
    msg.y = 0.406471676983;
    msg.z = 0.768530929479;
    msg.phi = 0.505395751905;
    msg.theta = 0.897310524913;
    msg.psi = 0.647174515852;
    msg.p = 0.495621765;
    msg.q = 0.531584245803;
    msg.r = 0.245408524219;
    msg.u = 0.603108509489;
    msg.v = 0.413769388074;
    msg.w = 0.832078971735;
    msg.bias_psi = 0.933696054606;
    msg.bias_r = 0.247589336368;

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
    msg.setTimeStamp(0.0420059094157);
    msg.setSource(26888U);
    msg.setSourceEntity(16U);
    msg.setDestination(60999U);
    msg.setDestinationEntity(181U);
    msg.bias_psi = 0.708843591394;
    msg.bias_r = 0.0257172835805;
    msg.cog = 0.0587209269175;
    msg.cyaw = 0.801828367459;
    msg.lbl_rej_level = 0.795587557224;
    msg.gps_rej_level = 0.387098891555;
    msg.custom_x = 0.535465843494;
    msg.custom_y = 0.731923628866;
    msg.custom_z = 0.696959999867;

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
    msg.setTimeStamp(0.697627780509);
    msg.setSource(25875U);
    msg.setSourceEntity(84U);
    msg.setDestination(57618U);
    msg.setDestinationEntity(215U);
    msg.bias_psi = 0.996233602914;
    msg.bias_r = 0.643755799703;
    msg.cog = 0.889216426801;
    msg.cyaw = 0.279548716393;
    msg.lbl_rej_level = 0.387545697176;
    msg.gps_rej_level = 0.151032312135;
    msg.custom_x = 0.221086694775;
    msg.custom_y = 0.599711594992;
    msg.custom_z = 0.885044936072;

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
    msg.setTimeStamp(0.440567752141);
    msg.setSource(44761U);
    msg.setSourceEntity(184U);
    msg.setDestination(14568U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.463465891595;
    msg.bias_r = 0.390421062752;
    msg.cog = 0.87777550788;
    msg.cyaw = 0.356946366826;
    msg.lbl_rej_level = 0.876382899281;
    msg.gps_rej_level = 0.913597890248;
    msg.custom_x = 0.861830600648;
    msg.custom_y = 0.244815513828;
    msg.custom_z = 0.494044896746;

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
    msg.setTimeStamp(0.238134942658);
    msg.setSource(38242U);
    msg.setSourceEntity(239U);
    msg.setDestination(27927U);
    msg.setDestinationEntity(65U);
    msg.utc_time = 0.320077569694;
    msg.reason = 125U;

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
    msg.setTimeStamp(0.429771592627);
    msg.setSource(48483U);
    msg.setSourceEntity(63U);
    msg.setDestination(55739U);
    msg.setDestinationEntity(6U);
    msg.utc_time = 0.417456537798;
    msg.reason = 140U;

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
    msg.setTimeStamp(0.175524302719);
    msg.setSource(39635U);
    msg.setSourceEntity(142U);
    msg.setDestination(18115U);
    msg.setDestinationEntity(110U);
    msg.utc_time = 0.628362852341;
    msg.reason = 238U;

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
    msg.setTimeStamp(0.979438198584);
    msg.setSource(56397U);
    msg.setSourceEntity(55U);
    msg.setDestination(54907U);
    msg.setDestinationEntity(212U);
    msg.id = 25U;
    msg.range = 0.679604940605;
    msg.acceptance = 131U;

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
    msg.setTimeStamp(0.720248260131);
    msg.setSource(59849U);
    msg.setSourceEntity(118U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(150U);
    msg.id = 196U;
    msg.range = 0.358662481578;
    msg.acceptance = 85U;

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
    msg.setTimeStamp(0.753025877623);
    msg.setSource(34848U);
    msg.setSourceEntity(167U);
    msg.setDestination(15999U);
    msg.setDestinationEntity(236U);
    msg.id = 46U;
    msg.range = 0.0649844633993;
    msg.acceptance = 80U;

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
    msg.setTimeStamp(0.178079422635);
    msg.setSource(39934U);
    msg.setSourceEntity(151U);
    msg.setDestination(49010U);
    msg.setDestinationEntity(203U);
    msg.type = 51U;
    msg.reason = 232U;
    msg.value = 0.528590345731;
    msg.timestep = 0.356568117934;

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
    msg.setTimeStamp(0.526682328724);
    msg.setSource(624U);
    msg.setSourceEntity(215U);
    msg.setDestination(52265U);
    msg.setDestinationEntity(31U);
    msg.type = 104U;
    msg.reason = 235U;
    msg.value = 0.591438849543;
    msg.timestep = 0.325324466538;

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
    msg.setTimeStamp(0.0100826027547);
    msg.setSource(64144U);
    msg.setSourceEntity(12U);
    msg.setDestination(5787U);
    msg.setDestinationEntity(71U);
    msg.type = 100U;
    msg.reason = 65U;
    msg.value = 0.543213581538;
    msg.timestep = 0.8840177399;

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
    msg.setTimeStamp(0.436284994556);
    msg.setSource(16527U);
    msg.setSourceEntity(239U);
    msg.setDestination(29665U);
    msg.setDestinationEntity(48U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NBOCFTHQOEVLUXWADEBMQSXYWYZEOFFIPKGCNELOFDDTSKPXGLHKPXXMMODMBPCCOWRUFZEGDRLWVMTBZYUQEGSIUQOYCAQQOA");
    tmp_msg_0.lat = 0.662685567512;
    tmp_msg_0.lon = 0.205346994837;
    tmp_msg_0.depth = 0.691626303665;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 114U;
    tmp_msg_0.transponder_delay = 55U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.711162394238;
    msg.y = 0.73288296455;
    msg.var_x = 0.417735646689;
    msg.var_y = 0.262010555125;
    msg.distance = 0.0965952153425;

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
    msg.setTimeStamp(0.764962855081);
    msg.setSource(62490U);
    msg.setSourceEntity(96U);
    msg.setDestination(3275U);
    msg.setDestinationEntity(52U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JTSBXISTXBPJUHXWFJRQYBQHQYRSVAIMLASRGWOMUBQBVKJZSVHHWDNDKRRGDNYPSNQJDTYIYPINFWVSWXNDVGBAOOPEYXLDYTHNPPIZFCFCGIVLKZZAJCXTNIKUVXCLPTBHKSMCLTHRKADFITBGUQELTEUKFONOZXCEDZSVGZZREVZDYEMOLSXLCTUHNJUVAGEIPWLQYGFCZAFMAPUFWQBEQBCUMOHCPMOEUOWNGMJKHMOADRLWRFK");
    tmp_msg_0.lat = 0.472496128515;
    tmp_msg_0.lon = 0.26430180835;
    tmp_msg_0.depth = 0.310901476434;
    tmp_msg_0.query_channel = 97U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 100U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.644228224326;
    msg.y = 0.128116157495;
    msg.var_x = 0.477448355555;
    msg.var_y = 0.492905321326;
    msg.distance = 0.796554066719;

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
    msg.setTimeStamp(0.925189098474);
    msg.setSource(19989U);
    msg.setSourceEntity(250U);
    msg.setDestination(3227U);
    msg.setDestinationEntity(22U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RKXCBZRZYTUMQPIJBOBWTGLJYPIOIHWLYXIGUTAFMZXXKORNVTGQKJFJVOPXJCJCMAJURRHDEYXYPSMZINMSUSXTVLFOIUDPZKDHLBHRWMEFBHYAVNQSTCXOEVXQRYYFAUWASBSLFSOL");
    tmp_msg_0.lat = 0.745818318072;
    tmp_msg_0.lon = 0.430573281742;
    tmp_msg_0.depth = 0.403347515497;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 22U;
    tmp_msg_0.transponder_delay = 242U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.642475242548;
    msg.y = 0.710352336449;
    msg.var_x = 0.492616138506;
    msg.var_y = 0.0162091903291;
    msg.distance = 0.283072071375;

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
    msg.setTimeStamp(0.377105118018);
    msg.setSource(17472U);
    msg.setSourceEntity(84U);
    msg.setDestination(55170U);
    msg.setDestinationEntity(68U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.613562544009);
    msg.setSource(27928U);
    msg.setSourceEntity(184U);
    msg.setDestination(51290U);
    msg.setDestinationEntity(74U);
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
    msg.setTimeStamp(0.851811684131);
    msg.setSource(9231U);
    msg.setSourceEntity(201U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(52U);
    msg.state = 241U;

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
    msg.setTimeStamp(0.439117751274);
    msg.setSource(61870U);
    msg.setSourceEntity(171U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(186U);
    msg.x = 0.677154355051;
    msg.y = 0.746387919426;
    msg.z = 0.087218540375;

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
    msg.setTimeStamp(0.378944675584);
    msg.setSource(27824U);
    msg.setSourceEntity(104U);
    msg.setDestination(16923U);
    msg.setDestinationEntity(51U);
    msg.x = 0.404915302802;
    msg.y = 0.899333366575;
    msg.z = 0.329735905356;

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
    msg.setTimeStamp(0.191792119542);
    msg.setSource(31783U);
    msg.setSourceEntity(188U);
    msg.setDestination(37661U);
    msg.setDestinationEntity(34U);
    msg.x = 0.719821971627;
    msg.y = 0.673405563605;
    msg.z = 0.381854100207;

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
    msg.setTimeStamp(0.353258904273);
    msg.setSource(50900U);
    msg.setSourceEntity(58U);
    msg.setDestination(14516U);
    msg.setDestinationEntity(148U);
    msg.value = 0.921912284597;

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
    msg.setTimeStamp(0.276351267188);
    msg.setSource(36810U);
    msg.setSourceEntity(49U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(234U);
    msg.value = 0.0402589913605;

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
    msg.setTimeStamp(0.989878741858);
    msg.setSource(50126U);
    msg.setSourceEntity(20U);
    msg.setDestination(28817U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0270547197078;

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
    msg.setTimeStamp(0.0977375481131);
    msg.setSource(20894U);
    msg.setSourceEntity(155U);
    msg.setDestination(64586U);
    msg.setDestinationEntity(91U);
    msg.value = 0.176050888852;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.467708561452);
    msg.setSource(22111U);
    msg.setSourceEntity(35U);
    msg.setDestination(62246U);
    msg.setDestinationEntity(29U);
    msg.value = 0.765589735064;
    msg.z_units = 23U;

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
    msg.setTimeStamp(0.717279080483);
    msg.setSource(41917U);
    msg.setSourceEntity(29U);
    msg.setDestination(10767U);
    msg.setDestinationEntity(31U);
    msg.value = 0.669439231979;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.279404134057);
    msg.setSource(64882U);
    msg.setSourceEntity(30U);
    msg.setDestination(8458U);
    msg.setDestinationEntity(185U);
    msg.value = 0.326191979097;
    msg.speed_units = 143U;

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
    msg.setTimeStamp(0.188710098121);
    msg.setSource(42431U);
    msg.setSourceEntity(53U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(124U);
    msg.value = 0.736650768265;
    msg.speed_units = 150U;

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
    msg.setTimeStamp(0.405725037687);
    msg.setSource(38257U);
    msg.setSourceEntity(158U);
    msg.setDestination(19371U);
    msg.setDestinationEntity(183U);
    msg.value = 0.736217152858;
    msg.speed_units = 41U;

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
    msg.setTimeStamp(0.583729215104);
    msg.setSource(24720U);
    msg.setSourceEntity(53U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(160U);
    msg.value = 0.689646919526;

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
    msg.setTimeStamp(0.191280595005);
    msg.setSource(4750U);
    msg.setSourceEntity(76U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(128U);
    msg.value = 0.220972114696;

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
    msg.setTimeStamp(0.026413494345);
    msg.setSource(11388U);
    msg.setSourceEntity(61U);
    msg.setDestination(53420U);
    msg.setDestinationEntity(175U);
    msg.value = 0.95594387642;

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
    msg.setTimeStamp(0.334401692633);
    msg.setSource(35657U);
    msg.setSourceEntity(224U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(178U);
    msg.value = 0.900735070704;

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
    msg.setTimeStamp(0.494155922612);
    msg.setSource(16173U);
    msg.setSourceEntity(75U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(121U);
    msg.value = 0.869605437664;

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
    msg.setTimeStamp(0.857668308095);
    msg.setSource(18372U);
    msg.setSourceEntity(81U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(244U);
    msg.value = 0.515780213982;

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
    msg.setTimeStamp(0.875201928739);
    msg.setSource(26918U);
    msg.setSourceEntity(231U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(167U);
    msg.value = 0.688620146042;

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
    msg.setTimeStamp(0.395631798298);
    msg.setSource(38282U);
    msg.setSourceEntity(155U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(182U);
    msg.value = 0.525974318574;

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
    msg.setTimeStamp(0.632602045186);
    msg.setSource(34110U);
    msg.setSourceEntity(102U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(216U);
    msg.value = 0.618686932348;

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
    msg.setTimeStamp(0.984688925425);
    msg.setSource(4159U);
    msg.setSourceEntity(95U);
    msg.setDestination(3787U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 2240369967U;
    msg.start_lat = 0.982680245176;
    msg.start_lon = 0.581891102112;
    msg.start_z = 0.236859529651;
    msg.start_z_units = 188U;
    msg.end_lat = 0.973446627695;
    msg.end_lon = 0.38956875606;
    msg.end_z = 0.547599798582;
    msg.end_z_units = 230U;
    msg.speed = 0.89278000532;
    msg.speed_units = 194U;
    msg.lradius = 0.988118624163;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.90769362107);
    msg.setSource(6464U);
    msg.setSourceEntity(232U);
    msg.setDestination(2619U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 1967444809U;
    msg.start_lat = 0.419916249263;
    msg.start_lon = 0.0638858650164;
    msg.start_z = 0.0756800788238;
    msg.start_z_units = 130U;
    msg.end_lat = 0.154471445039;
    msg.end_lon = 0.185830955067;
    msg.end_z = 0.609017795387;
    msg.end_z_units = 213U;
    msg.speed = 0.304259341851;
    msg.speed_units = 169U;
    msg.lradius = 0.186104212293;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.943786379754);
    msg.setSource(13088U);
    msg.setSourceEntity(145U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(182U);
    msg.path_ref = 3469522652U;
    msg.start_lat = 0.296507575695;
    msg.start_lon = 0.63431023482;
    msg.start_z = 0.431071825762;
    msg.start_z_units = 134U;
    msg.end_lat = 0.26971995038;
    msg.end_lon = 0.282625734545;
    msg.end_z = 0.974186630863;
    msg.end_z_units = 241U;
    msg.speed = 0.96382119319;
    msg.speed_units = 110U;
    msg.lradius = 0.53281971;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.220557358567);
    msg.setSource(46970U);
    msg.setSourceEntity(103U);
    msg.setDestination(62884U);
    msg.setDestinationEntity(99U);
    msg.x = 0.830102563376;
    msg.y = 0.259918611862;
    msg.z = 0.309596587736;
    msg.k = 0.339830912055;
    msg.m = 0.0306845504607;
    msg.n = 0.927730634001;
    msg.flags = 107U;

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
    msg.setTimeStamp(0.163213357465);
    msg.setSource(12523U);
    msg.setSourceEntity(215U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(131U);
    msg.x = 0.541023076772;
    msg.y = 0.606228013929;
    msg.z = 0.00918376920054;
    msg.k = 0.945113124234;
    msg.m = 0.461851419477;
    msg.n = 0.180978994;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.387502819815);
    msg.setSource(4922U);
    msg.setSourceEntity(143U);
    msg.setDestination(44301U);
    msg.setDestinationEntity(149U);
    msg.x = 0.716391233179;
    msg.y = 0.872365108942;
    msg.z = 0.91846231958;
    msg.k = 0.790983138595;
    msg.m = 0.166801367804;
    msg.n = 0.841236726271;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.230334026052);
    msg.setSource(41801U);
    msg.setSourceEntity(60U);
    msg.setDestination(48714U);
    msg.setDestinationEntity(216U);
    msg.value = 0.530271825694;

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
    msg.setTimeStamp(0.212434899939);
    msg.setSource(12723U);
    msg.setSourceEntity(86U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(167U);
    msg.value = 0.578054970333;

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
    msg.setTimeStamp(0.141432389371);
    msg.setSource(63671U);
    msg.setSourceEntity(138U);
    msg.setDestination(38645U);
    msg.setDestinationEntity(252U);
    msg.value = 0.031197099529;

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
    msg.setTimeStamp(0.728743469019);
    msg.setSource(8514U);
    msg.setSourceEntity(205U);
    msg.setDestination(60635U);
    msg.setDestinationEntity(23U);
    msg.u = 0.197073971442;
    msg.v = 0.481625361737;
    msg.w = 0.172900768212;
    msg.p = 0.272529700029;
    msg.q = 0.63996743564;
    msg.r = 0.57402233889;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.198413287548);
    msg.setSource(30824U);
    msg.setSourceEntity(221U);
    msg.setDestination(3085U);
    msg.setDestinationEntity(108U);
    msg.u = 0.0864268959444;
    msg.v = 0.997353556739;
    msg.w = 0.19150395053;
    msg.p = 0.0868055118376;
    msg.q = 0.608829923509;
    msg.r = 0.242464770046;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.141740711035);
    msg.setSource(21422U);
    msg.setSourceEntity(253U);
    msg.setDestination(14928U);
    msg.setDestinationEntity(118U);
    msg.u = 0.346530517006;
    msg.v = 0.159434642294;
    msg.w = 0.149569295352;
    msg.p = 0.584433107916;
    msg.q = 0.00134085506108;
    msg.r = 0.171416193704;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.95992164788);
    msg.setSource(17786U);
    msg.setSourceEntity(25U);
    msg.setDestination(64272U);
    msg.setDestinationEntity(173U);
    msg.path_ref = 2232113675U;
    msg.start_lat = 0.543706629175;
    msg.start_lon = 0.396918496872;
    msg.start_z = 0.84048810045;
    msg.start_z_units = 33U;
    msg.end_lat = 0.00132989736134;
    msg.end_lon = 0.761684275312;
    msg.end_z = 0.51868447746;
    msg.end_z_units = 61U;
    msg.lradius = 0.2006629775;
    msg.flags = 146U;
    msg.x = 0.789573044166;
    msg.y = 0.98784060506;
    msg.z = 0.409634261508;
    msg.vx = 0.783521682389;
    msg.vy = 0.175945674996;
    msg.vz = 0.0950469362408;
    msg.course_error = 0.467582938882;
    msg.eta = 27760U;

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
    msg.setTimeStamp(0.307715014506);
    msg.setSource(6055U);
    msg.setSourceEntity(99U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 3049682991U;
    msg.start_lat = 0.565801481859;
    msg.start_lon = 0.343978398812;
    msg.start_z = 0.300576614903;
    msg.start_z_units = 4U;
    msg.end_lat = 0.637506411952;
    msg.end_lon = 0.368927618479;
    msg.end_z = 0.920146731421;
    msg.end_z_units = 130U;
    msg.lradius = 0.780654693132;
    msg.flags = 187U;
    msg.x = 0.342367666725;
    msg.y = 0.727756583672;
    msg.z = 0.994670468545;
    msg.vx = 0.223972003476;
    msg.vy = 0.904018227116;
    msg.vz = 0.279660304467;
    msg.course_error = 0.526000474106;
    msg.eta = 37962U;

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
    msg.setTimeStamp(0.415823347757);
    msg.setSource(10685U);
    msg.setSourceEntity(3U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(158U);
    msg.path_ref = 1509009850U;
    msg.start_lat = 0.721608655904;
    msg.start_lon = 0.818887819937;
    msg.start_z = 0.99078459043;
    msg.start_z_units = 205U;
    msg.end_lat = 0.194064534068;
    msg.end_lon = 0.468608896695;
    msg.end_z = 0.653475570418;
    msg.end_z_units = 36U;
    msg.lradius = 0.768849175737;
    msg.flags = 180U;
    msg.x = 0.793228418743;
    msg.y = 0.486856882591;
    msg.z = 0.740934870444;
    msg.vx = 0.944585154459;
    msg.vy = 0.644909864523;
    msg.vz = 0.0697789456467;
    msg.course_error = 0.728418717722;
    msg.eta = 37970U;

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
    msg.setTimeStamp(0.67683922941);
    msg.setSource(10424U);
    msg.setSourceEntity(46U);
    msg.setDestination(14640U);
    msg.setDestinationEntity(93U);
    msg.k = 0.111885849673;
    msg.m = 0.313956689917;
    msg.n = 0.963694023486;

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
    msg.setTimeStamp(0.563590185362);
    msg.setSource(11817U);
    msg.setSourceEntity(189U);
    msg.setDestination(48022U);
    msg.setDestinationEntity(27U);
    msg.k = 0.536443526451;
    msg.m = 0.166482324498;
    msg.n = 0.0490681742511;

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
    msg.setTimeStamp(0.481089358436);
    msg.setSource(38544U);
    msg.setSourceEntity(46U);
    msg.setDestination(28196U);
    msg.setDestinationEntity(179U);
    msg.k = 0.317672409795;
    msg.m = 0.0769744471874;
    msg.n = 0.522137804447;

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
    msg.setTimeStamp(0.426896504448);
    msg.setSource(53658U);
    msg.setSourceEntity(227U);
    msg.setDestination(5969U);
    msg.setDestinationEntity(105U);
    msg.p = 0.576800922504;
    msg.i = 0.118479578738;
    msg.d = 0.801237658465;
    msg.a = 0.599948122073;

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
    msg.setTimeStamp(0.164439877222);
    msg.setSource(27623U);
    msg.setSourceEntity(63U);
    msg.setDestination(328U);
    msg.setDestinationEntity(93U);
    msg.p = 0.77675765311;
    msg.i = 0.483894917944;
    msg.d = 0.28715935143;
    msg.a = 0.707168426518;

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
    msg.setTimeStamp(0.961046990178);
    msg.setSource(47734U);
    msg.setSourceEntity(45U);
    msg.setDestination(48089U);
    msg.setDestinationEntity(165U);
    msg.p = 0.716031576132;
    msg.i = 0.906379386114;
    msg.d = 0.212416796922;
    msg.a = 0.453137707159;

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
    msg.setTimeStamp(0.39336643692);
    msg.setSource(57085U);
    msg.setSourceEntity(69U);
    msg.setDestination(32471U);
    msg.setDestinationEntity(47U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.599899505662);
    msg.setSource(56560U);
    msg.setSourceEntity(17U);
    msg.setDestination(9100U);
    msg.setDestinationEntity(148U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.717392697496);
    msg.setSource(2586U);
    msg.setSourceEntity(145U);
    msg.setDestination(6727U);
    msg.setDestinationEntity(232U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.0927969090457);
    msg.setSource(30876U);
    msg.setSourceEntity(40U);
    msg.setDestination(54695U);
    msg.setDestinationEntity(206U);
    msg.timeout = 51758U;
    msg.lat = 0.709237594679;
    msg.lon = 0.88262750043;
    msg.z = 0.0672745416424;
    msg.z_units = 250U;
    msg.speed = 0.921460643443;
    msg.speed_units = 0U;
    msg.roll = 0.945181707523;
    msg.pitch = 0.738614659678;
    msg.yaw = 0.878994373461;
    msg.custom.assign("JAQUULRZQPTOHSUNMBVCNZTZOLPDYNAEQGTMPBLDOOSHLAXEJISFYVPAILQENRGADFWTVJEQEVTXEKMSTQNYOCOHMOGBCEDGLMQHUSIBKFEAKNGFKTCWYSKTUKUXFWZWKWVSXZBAXAIQIUXZGIXSRVGWPMQZPEIJHIDCBDCDUYBWTYDL");

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
    msg.setTimeStamp(0.815843332025);
    msg.setSource(4006U);
    msg.setSourceEntity(143U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(171U);
    msg.timeout = 17261U;
    msg.lat = 0.789900716145;
    msg.lon = 0.113888277606;
    msg.z = 0.657721130883;
    msg.z_units = 17U;
    msg.speed = 0.529997039443;
    msg.speed_units = 28U;
    msg.roll = 0.953889272811;
    msg.pitch = 0.603080693618;
    msg.yaw = 0.716531879265;
    msg.custom.assign("RBRPSRPJVEFFRGCIIHVMQHSNNJUHHWEUXFOSSLTMHHWJJTUMFRDLWIXHKHDUBPKUPOBKVLXIVADQQDJCNZFYMEHVJTQZPQFGGNSEGBWBCCDZEKFY");

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
    msg.setTimeStamp(0.397053276293);
    msg.setSource(10746U);
    msg.setSourceEntity(2U);
    msg.setDestination(42458U);
    msg.setDestinationEntity(89U);
    msg.timeout = 49027U;
    msg.lat = 0.148762714792;
    msg.lon = 0.853430924471;
    msg.z = 0.433512406072;
    msg.z_units = 57U;
    msg.speed = 0.305269333797;
    msg.speed_units = 151U;
    msg.roll = 0.226556542063;
    msg.pitch = 0.567549443596;
    msg.yaw = 0.747935650012;
    msg.custom.assign("OLEJWAAPLNYYILRGBCLLMVWKYKBJKONTODRGFOALDQF");

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
    msg.setTimeStamp(0.998411352256);
    msg.setSource(42929U);
    msg.setSourceEntity(38U);
    msg.setDestination(9063U);
    msg.setDestinationEntity(251U);
    msg.timeout = 52760U;
    msg.lat = 0.892664889874;
    msg.lon = 0.1557505934;
    msg.z = 0.129276953786;
    msg.z_units = 14U;
    msg.speed = 0.0316098880169;
    msg.speed_units = 62U;
    msg.duration = 41104U;
    msg.radius = 0.0543733640448;
    msg.flags = 232U;
    msg.custom.assign("AZRUVYMYFKAHWFWWUIJLUFGIBYNGMDNQQZCGSVLHUB");

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
    msg.setTimeStamp(0.374052665718);
    msg.setSource(11990U);
    msg.setSourceEntity(218U);
    msg.setDestination(11671U);
    msg.setDestinationEntity(115U);
    msg.timeout = 51138U;
    msg.lat = 0.344387899269;
    msg.lon = 0.914828826594;
    msg.z = 0.114387451121;
    msg.z_units = 242U;
    msg.speed = 0.257002280586;
    msg.speed_units = 190U;
    msg.duration = 57698U;
    msg.radius = 0.820112412089;
    msg.flags = 247U;
    msg.custom.assign("XDFCRDBPQUZIGKPEHPDBMAZARELEMSOHQWKOEHTKKY");

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
    msg.setTimeStamp(0.408447950984);
    msg.setSource(57082U);
    msg.setSourceEntity(235U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(14U);
    msg.timeout = 10250U;
    msg.lat = 0.234076373576;
    msg.lon = 0.316284234646;
    msg.z = 0.384168142892;
    msg.z_units = 194U;
    msg.speed = 0.0484803154623;
    msg.speed_units = 28U;
    msg.duration = 23830U;
    msg.radius = 0.996036305102;
    msg.flags = 244U;
    msg.custom.assign("ZCXQCBJUSIPDLCRUAHKPJATVEOAYHWUDPODJHXOUHFWSHVFYZAQPFFLMFMXXDDZYYALIPWOTUKYACXDGTSESBNRRYZOQJOQWGWNUGXKWQATYPHCLBQAGDTAFNJWPQCCOKNXE");

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
    msg.setTimeStamp(0.564610085094);
    msg.setSource(27614U);
    msg.setSourceEntity(138U);
    msg.setDestination(64247U);
    msg.setDestinationEntity(222U);
    msg.custom.assign("RNMYCZGVZCHIGKHMUTFUHQTOVSEYQFKELZHHSIFMGPZQNUFEARYUYTPNISMCVIIVMKEPWGFOLOAVPJBTDFXIOWHLNBBRGSFCAJJCOWBCIKQEDAJLAVMQLEIMAXOBSDPGXUWAHUJG");

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
    msg.setTimeStamp(0.56770432074);
    msg.setSource(57125U);
    msg.setSourceEntity(129U);
    msg.setDestination(8769U);
    msg.setDestinationEntity(180U);
    msg.custom.assign("FSDDSDAHCMUXRJXQKHUMZAJWFVNMMIJRAAAEZKEYTWRPKRSVXHUQOZJCJJURCKZPUVTYHIRLEGBXFIBGTPTRSETLSPHWYNVXGEZFPQIOBGIXFNTDEMHLWYPTYDIXOVIOPKMDCVYWDUPIOQOCNQZMFTXYNQFYUTOBNBGHQIZYZWSGFTEMDXXLLGBSRLQQUSIALDVYJJJUEAPQUABECZRJLNDCAAZGWWLCKMEB");

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
    msg.setTimeStamp(0.233186148456);
    msg.setSource(50919U);
    msg.setSourceEntity(31U);
    msg.setDestination(37246U);
    msg.setDestinationEntity(157U);
    msg.custom.assign("CCIRKXVVCEINKZBFLQKEEGLBVMFOCIPXYXPUIELXZHIENFTSUWGAULCANZWQFOXQGBNTQRAPNZAJNDQKKBLCJOUGWJDPLMCXTDNQVYUUTVORIGSJMDDBHEOTKLAIJIFDYWHHVRKPRUGTZNXRRBRYAVBSVHWZFWYZVDSAMZEWLOAHRZFNFJHCISWFMMHSEOKUYMUCHYGOQ");

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
    msg.setTimeStamp(0.649364766267);
    msg.setSource(528U);
    msg.setSourceEntity(224U);
    msg.setDestination(43350U);
    msg.setDestinationEntity(3U);
    msg.timeout = 3252U;
    msg.lat = 0.371237393824;
    msg.lon = 0.686928589706;
    msg.z = 0.528894415253;
    msg.z_units = 96U;
    msg.duration = 35645U;
    msg.speed = 0.158450881417;
    msg.speed_units = 217U;
    msg.type = 251U;
    msg.radius = 0.413356144011;
    msg.length = 0.954058272057;
    msg.bearing = 0.24881469891;
    msg.direction = 64U;
    msg.custom.assign("OLOZEDUIVNTCVENZGZQMPSCFBWJBCBSXZGAPGSXFHCKQBLLEXXTVUUWWBLNOEJWNLQAJXYDMETJRKRMUFNWNJOHGDICDEYYKSO");

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
    msg.setTimeStamp(0.691406454486);
    msg.setSource(4024U);
    msg.setSourceEntity(128U);
    msg.setDestination(47845U);
    msg.setDestinationEntity(203U);
    msg.timeout = 27327U;
    msg.lat = 0.404787944076;
    msg.lon = 0.817383356185;
    msg.z = 0.38719903265;
    msg.z_units = 5U;
    msg.duration = 60554U;
    msg.speed = 0.834741500862;
    msg.speed_units = 187U;
    msg.type = 84U;
    msg.radius = 0.826505149096;
    msg.length = 0.6678740643;
    msg.bearing = 0.802355374449;
    msg.direction = 30U;
    msg.custom.assign("DXZEWTENVRZPJCNSQJITHPUTWFWCOUOQNAGVIQJLWWKFHSWYNXMBGXYBUCQZFOHDMURLRYRACMWHEIPPOYKRTFOZJIISSQHZCOUXRJLAWEHMRLVLVTGDOHVTJMASVOJBMT");

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
    msg.setTimeStamp(0.457419290799);
    msg.setSource(51712U);
    msg.setSourceEntity(130U);
    msg.setDestination(49137U);
    msg.setDestinationEntity(74U);
    msg.timeout = 20605U;
    msg.lat = 0.858146142869;
    msg.lon = 0.715061074792;
    msg.z = 0.194229707435;
    msg.z_units = 3U;
    msg.duration = 50326U;
    msg.speed = 0.922844391515;
    msg.speed_units = 87U;
    msg.type = 128U;
    msg.radius = 0.445965483986;
    msg.length = 0.813250511975;
    msg.bearing = 0.170730726407;
    msg.direction = 106U;
    msg.custom.assign("QPRBGHPFVCGLWWQSLVOTBJEDHUBRIDOTJBSXJIVXLZGZVRHUFCXKQVLRBMVQTPYXIGUMSJIAQAPBJCXIKEGBGTBVMVEFXWTDAALOOQUEDOMNCXFZWSYZLQSZQNZLUWHIUEOVPDDRLJAKNUQCPIERHIBDESDHXCGVMMZFSHTYTN");

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
    msg.setTimeStamp(0.364606269874);
    msg.setSource(42739U);
    msg.setSourceEntity(96U);
    msg.setDestination(45534U);
    msg.setDestinationEntity(172U);
    msg.duration = 25929U;
    msg.custom.assign("WIYIPZWQHFPVUAZFPDOLNVTNNPDSJDKOSMADRROZUUIKYXCILGWJEQTVBXHXWOLHLBGXNXAAFUMITKGUQHJEIRBFWKGCGKYOTRBSMWPMHMEYPCDNVVHYBPAMKFNMSACNNWFPSJHPRSEHLQDMEYECVWWTUTLRJCJTZWFNMSSLIUMDTQBAYZCQOXRFOSIULJJXTJCLVPSZEGEDVFZZOVXKYBBTARGCBEHKVBQGJQZYRXIEKFQLGZKCUNQOY");

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
    msg.setTimeStamp(0.125688841852);
    msg.setSource(44165U);
    msg.setSourceEntity(48U);
    msg.setDestination(18502U);
    msg.setDestinationEntity(200U);
    msg.duration = 8842U;
    msg.custom.assign("IVXDZPBRXEHQKBXYELEEGSTGCHAKWWRADRNFWSCZWWVMQFTJFNOROFNUYLIVLDPUCNJZZHTFAUVWFVFXKISQFAHUTWCDGCSHQ");

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
    msg.setTimeStamp(0.583278714576);
    msg.setSource(46173U);
    msg.setSourceEntity(43U);
    msg.setDestination(50265U);
    msg.setDestinationEntity(70U);
    msg.duration = 59294U;
    msg.custom.assign("HGVYEKUAFDXBGUQJRGXSXZDRRHMYSOAFLQYMIIFUOONNGBFWCDXHUZTKIPOOUORHKZLLTTFLLITBTMGZOJJWKYXNNNSAROBGANVS");

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
    msg.setTimeStamp(0.660809048256);
    msg.setSource(27520U);
    msg.setSourceEntity(215U);
    msg.setDestination(41280U);
    msg.setDestinationEntity(249U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.977490665246;
    msg.control.set(tmp_msg_0);
    msg.duration = 63999U;
    msg.custom.assign("UYGQYIHXDVAZCNKLIONHTQUTNPLLWMEAYZDMSCREWEHAFNJOXCJTFCVYACMPMZFEPAWQNDSYLYGTMVYRIMQXCVDBBU");

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
    msg.setTimeStamp(0.0256739521221);
    msg.setSource(34075U);
    msg.setSourceEntity(95U);
    msg.setDestination(32673U);
    msg.setDestinationEntity(26U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.84970257156;
    msg.control.set(tmp_msg_0);
    msg.duration = 16018U;
    msg.custom.assign("YZDKWFCEESBPPUOCJSYUYHLSAKPKZAHDNNNBSXNHSADBRENVNRDFOOGTFNPAWBHCDURQPJWGLIMXGMRHMVPJTJQAGOKWMZFDIQUZLHRPBUOCLJZFSGXVYOKTYELIBEHASHRJEVDKCYOGDXQWXVWGIKTFVYBBXEKLMISUYTLQAEQCNJDFRMVLBSIMUELITTGWGMORWTPJOHIRIPJCUBQZJWQXKFVVMPUYEALTMWYNAKOCZ");

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
    msg.setTimeStamp(0.842146269113);
    msg.setSource(2378U);
    msg.setSourceEntity(169U);
    msg.setDestination(47770U);
    msg.setDestinationEntity(239U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.376920004111;
    tmp_msg_0.speed_units = 43U;
    msg.control.set(tmp_msg_0);
    msg.duration = 6139U;
    msg.custom.assign("UNLYSXQBIFCNEXBSR");

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
    msg.setTimeStamp(0.124808462872);
    msg.setSource(58486U);
    msg.setSourceEntity(78U);
    msg.setDestination(62787U);
    msg.setDestinationEntity(91U);
    msg.timeout = 49207U;
    msg.lat = 0.0630919531871;
    msg.lon = 0.284049967276;
    msg.z = 0.9695182781;
    msg.z_units = 19U;
    msg.speed = 0.373400667908;
    msg.speed_units = 111U;
    msg.bearing = 0.899058760853;
    msg.cross_angle = 0.0745635504355;
    msg.width = 0.0999287562455;
    msg.length = 0.952535376433;
    msg.hstep = 0.562557583551;
    msg.coff = 72U;
    msg.alternation = 89U;
    msg.flags = 32U;
    msg.custom.assign("RCYSHBPQIHUNVGWIJALWQPTALPNVNRYDIXOCKJICQMXEDNDQDEFDJSGSTUVDXGCDKEOYTYTSOTGAERZBUKBFAGXLORHO");

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
    msg.setTimeStamp(0.930409434096);
    msg.setSource(63373U);
    msg.setSourceEntity(189U);
    msg.setDestination(49653U);
    msg.setDestinationEntity(84U);
    msg.timeout = 3748U;
    msg.lat = 0.544277887182;
    msg.lon = 0.805205053399;
    msg.z = 0.837964661685;
    msg.z_units = 148U;
    msg.speed = 0.887699577977;
    msg.speed_units = 35U;
    msg.bearing = 0.702905901121;
    msg.cross_angle = 0.813077498197;
    msg.width = 0.826461096566;
    msg.length = 0.460803277508;
    msg.hstep = 0.0451000182163;
    msg.coff = 149U;
    msg.alternation = 176U;
    msg.flags = 170U;
    msg.custom.assign("AWPTXHGCBKGNRGPUIFZUFTZKCQUNUCOCVMGNAWAEHRVNCLLVVIGEDIBXSWVEFVYMLOUQ");

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
    msg.setTimeStamp(0.827735769324);
    msg.setSource(56270U);
    msg.setSourceEntity(52U);
    msg.setDestination(36849U);
    msg.setDestinationEntity(97U);
    msg.timeout = 46139U;
    msg.lat = 0.57778890126;
    msg.lon = 0.781053354888;
    msg.z = 0.713918621966;
    msg.z_units = 111U;
    msg.speed = 0.331810000217;
    msg.speed_units = 207U;
    msg.bearing = 0.745923385588;
    msg.cross_angle = 0.275121916294;
    msg.width = 0.19182492038;
    msg.length = 0.263696112704;
    msg.hstep = 0.346731757716;
    msg.coff = 15U;
    msg.alternation = 154U;
    msg.flags = 130U;
    msg.custom.assign("JBWTXFGAZWFZLWAJABHEWFDKXKXTVVIXPLYZTNR");

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
    msg.setTimeStamp(0.799506653945);
    msg.setSource(25651U);
    msg.setSourceEntity(87U);
    msg.setDestination(47378U);
    msg.setDestinationEntity(211U);
    msg.timeout = 45804U;
    msg.lat = 0.0226908639665;
    msg.lon = 0.362356768068;
    msg.z = 0.666224793518;
    msg.z_units = 110U;
    msg.speed = 0.573479303435;
    msg.speed_units = 81U;
    msg.custom.assign("KQQXYLILKCKVTCBDTXGGEWYNAJIYZSAZYZJTDAWNSDIUJBLSZHRVFOEZRSGOUFGRQBIMA");

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
    msg.setTimeStamp(0.159234595767);
    msg.setSource(60893U);
    msg.setSourceEntity(237U);
    msg.setDestination(8697U);
    msg.setDestinationEntity(173U);
    msg.timeout = 54254U;
    msg.lat = 0.373107821431;
    msg.lon = 0.292102610575;
    msg.z = 0.966702220988;
    msg.z_units = 35U;
    msg.speed = 0.631367680662;
    msg.speed_units = 142U;
    msg.custom.assign("KVQZPCTMEJUBVZTNFUEBIMKJUYKKTQYEAHLIPGNUCRRAFOJUELSMSATSCDKCCBUJZFNYGQHWDCKZABNWDOLKIPOQBMCFUOTXYGNOIOKNLEXSMBIFZXSVVJBLVBIDPLODAOWYNEEPGGJXKFYRS");

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
    msg.setTimeStamp(0.581191965079);
    msg.setSource(49353U);
    msg.setSourceEntity(130U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(112U);
    msg.timeout = 52737U;
    msg.lat = 0.468797800701;
    msg.lon = 0.963903576843;
    msg.z = 0.165464371308;
    msg.z_units = 224U;
    msg.speed = 0.331589106955;
    msg.speed_units = 246U;
    msg.custom.assign("KYZBYECGRVYQTQEBEPTGBFDIRIHTMXMCQSGSEKMIJCGJAQCLTLDOZQUBDPCZKVZOFRZUYUMWHTRNAFRFPOLWDKWNIKVUPOLULJQNCFOHXYISMSNNKGWKXYPWLCTMGJVCZRMSWAXSBYUFKCZEPGWAATJNJKXQVQXNWIOUHRUXTLYAOAEEJRF");

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
    msg.setTimeStamp(0.46341635078);
    msg.setSource(47145U);
    msg.setSourceEntity(30U);
    msg.setDestination(60922U);
    msg.setDestinationEntity(197U);
    msg.x = 0.256978623276;
    msg.y = 0.485332609326;
    msg.z = 0.0140591311022;

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
    msg.setTimeStamp(0.292256761782);
    msg.setSource(10138U);
    msg.setSourceEntity(239U);
    msg.setDestination(34915U);
    msg.setDestinationEntity(51U);
    msg.x = 0.704907796413;
    msg.y = 0.428656050103;
    msg.z = 0.0131322689099;

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
    msg.setTimeStamp(0.787769482273);
    msg.setSource(51955U);
    msg.setSourceEntity(153U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(73U);
    msg.x = 0.579133289602;
    msg.y = 0.793528030527;
    msg.z = 0.988580319866;

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
    msg.setTimeStamp(0.152700674731);
    msg.setSource(49249U);
    msg.setSourceEntity(79U);
    msg.setDestination(10929U);
    msg.setDestinationEntity(84U);
    msg.timeout = 23763U;
    msg.lat = 0.477583242191;
    msg.lon = 0.527208761258;
    msg.z = 0.893835374202;
    msg.z_units = 64U;
    msg.amplitude = 0.0699266260315;
    msg.pitch = 0.856142587852;
    msg.speed = 0.97156596187;
    msg.speed_units = 117U;
    msg.custom.assign("TGHJOSEHJVESTHBGEWTFDLBUHXLBPTPWHQZOKAVAIUCUBHNSFXSUIBTORNBZBGXOJMUDBTJLDNRKWEDDFCPJVKCILPYTLXWTJIOTRNKKVEHRDDLYWCGAIQRQYYDFAAZAVEMSLBZGWYRDFZLPNGVQSLCAUGWURIACMOBTAFSPWQIPVHIIRCKVJZZKWMPZYMNQJXGOMWFHGZPSSMNIMJ");

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
    msg.setTimeStamp(0.10791478367);
    msg.setSource(24125U);
    msg.setSourceEntity(86U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(90U);
    msg.timeout = 44424U;
    msg.lat = 0.894930518505;
    msg.lon = 0.75932058215;
    msg.z = 0.553028118142;
    msg.z_units = 25U;
    msg.amplitude = 0.164839697111;
    msg.pitch = 0.727455990033;
    msg.speed = 0.560564715043;
    msg.speed_units = 37U;
    msg.custom.assign("KKVBAWMLQXDNANXYIAAWLSCHYTGEOJQSWZJYQDJRKHPZPVHIAXGLKJQWZINEUSPWTUGJHZTUKPTFSZOCUNFLYUFVMDRYZDYAIKLXHMEFQZCMOPVTBSLQKNGNGQWUGVCERJCHXTFVJSOSJGBAVRYKMRKRKPXTAGIILTWUBXNBHMQIONCWYPXFNAFZCQOTBDVMONOLSIFYCBLRRMLUEXSDDEUTMODMHHQGWRWBVEGVFRXBJUJCDZSPIZPEDEF");

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
    msg.setTimeStamp(0.0845604646307);
    msg.setSource(53695U);
    msg.setSourceEntity(191U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(23U);
    msg.timeout = 44395U;
    msg.lat = 0.785975071835;
    msg.lon = 0.90412262549;
    msg.z = 0.0255441524178;
    msg.z_units = 182U;
    msg.amplitude = 0.294450475131;
    msg.pitch = 0.531335878918;
    msg.speed = 0.438493077109;
    msg.speed_units = 112U;
    msg.custom.assign("RNSTAWSLEVKKZWVBQUYDQQMMYLFFNFUJOEIOZZFTIICPXHZUEUOOIZRCYMANAEWXIEVXOPVFNXCWXDYEDDKLWVUGPKJTDTYWLSBXGUAISKKPQNOJLJQYHGMZNNOREBGMWSLLCRAHVRNDSYASVXIDPCFQZBAAZQEPZXACHMCIXJBRNGOWLDJEHJHLYRUBPSLWJA");

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
    msg.setTimeStamp(0.353230017996);
    msg.setSource(14527U);
    msg.setSourceEntity(252U);
    msg.setDestination(62543U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.915453591206);
    msg.setSource(57106U);
    msg.setSourceEntity(11U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.880009404024);
    msg.setSource(65278U);
    msg.setSourceEntity(209U);
    msg.setDestination(38111U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.278031072022);
    msg.setSource(52305U);
    msg.setSourceEntity(44U);
    msg.setDestination(1628U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.273778428131;
    msg.lon = 0.216083513728;
    msg.z = 0.693506103776;
    msg.z_units = 169U;
    msg.radius = 0.214911842743;
    msg.duration = 60464U;
    msg.speed = 0.857234706489;
    msg.speed_units = 85U;
    msg.custom.assign("BSDNVGCXMOZVKDXFIPCXBYJYDOPRQNUXFUWGMHJQJRETCLDQTRKGTPOPGMBJNZMUWVJDHIKZFKVMJNLYLOXEWUDICQCCJNANBLCXEM");

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
    msg.setTimeStamp(0.453527985588);
    msg.setSource(17073U);
    msg.setSourceEntity(234U);
    msg.setDestination(41981U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.419400172848;
    msg.lon = 0.79799990286;
    msg.z = 0.923571197012;
    msg.z_units = 165U;
    msg.radius = 0.378371279872;
    msg.duration = 33161U;
    msg.speed = 0.652764487689;
    msg.speed_units = 130U;
    msg.custom.assign("VEFOVDGCKMSUQ");

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
    msg.setTimeStamp(0.669873647983);
    msg.setSource(41005U);
    msg.setSourceEntity(53U);
    msg.setDestination(42691U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.952917536935;
    msg.lon = 0.887446808824;
    msg.z = 0.561321372269;
    msg.z_units = 168U;
    msg.radius = 0.74659047788;
    msg.duration = 34611U;
    msg.speed = 0.075588867133;
    msg.speed_units = 7U;
    msg.custom.assign("WIKJKGWHQCLETDYCBECHHZZYKRYRYTLKLUVSXDCTSBRQYWXLPOVWVTSEFAQYNDSERYDUSRPTXYPJDDISRLADRYACJJUWBI");

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
    msg.setTimeStamp(0.986923509525);
    msg.setSource(57766U);
    msg.setSourceEntity(12U);
    msg.setDestination(27166U);
    msg.setDestinationEntity(93U);
    msg.timeout = 34347U;
    msg.flags = 244U;
    msg.lat = 0.0575829069416;
    msg.lon = 0.520693373909;
    msg.start_z = 0.237265139647;
    msg.start_z_units = 174U;
    msg.end_z = 0.974294924465;
    msg.end_z_units = 3U;
    msg.radius = 0.0251353080273;
    msg.speed = 0.816250807035;
    msg.speed_units = 228U;
    msg.custom.assign("ALVWSVTWMDQYKJVJBVSIZVWUDXEVJLFUSBQVKBULHISNCWJDBUCBDAGLBAJEHQNEAFCVXRJAYPGFO");

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
    msg.setTimeStamp(0.0372544513897);
    msg.setSource(30672U);
    msg.setSourceEntity(5U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(114U);
    msg.timeout = 37518U;
    msg.flags = 75U;
    msg.lat = 0.281208909325;
    msg.lon = 0.253843665508;
    msg.start_z = 0.346087300023;
    msg.start_z_units = 246U;
    msg.end_z = 0.944859313931;
    msg.end_z_units = 99U;
    msg.radius = 0.983418338734;
    msg.speed = 0.535615032027;
    msg.speed_units = 8U;
    msg.custom.assign("KOEYACHQYTKXOFNGWEFDXHXVNEWBJCQAQPQFDGNOGPWZLLLWCAWYNHTKOTRVQWUDHVLJHQERIYSDJPLIBYTSKJOXNALEAHEZBUVXNYSVUCUZPECZRVRXXMBIDBCOTRQFTZDUMPGOJXWPWTSJKFAHKJFUGNTRMWY");

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
    msg.setTimeStamp(0.38647473479);
    msg.setSource(60641U);
    msg.setSourceEntity(96U);
    msg.setDestination(51697U);
    msg.setDestinationEntity(98U);
    msg.timeout = 64148U;
    msg.flags = 74U;
    msg.lat = 0.738891650569;
    msg.lon = 0.838150222939;
    msg.start_z = 0.67774363516;
    msg.start_z_units = 251U;
    msg.end_z = 0.348209237041;
    msg.end_z_units = 222U;
    msg.radius = 0.985980218241;
    msg.speed = 0.258771440496;
    msg.speed_units = 143U;
    msg.custom.assign("TMWZPABXUFTPXXXXPSIABDCIFHMMTLLAZXCKFAGQNGQCKMVYMCGAKOJTOKHINOWQSFERMLCUKANQRUFKZJRWICBEVROLHSYWXJBVZUQAUHOMFBPZTTGNOSLNNEFMLVZDWJCZSNBTEGZQWWSINQRPPICBXEDNOVURBUSZHJKTTKLKWYBCMGSAXWILPEADPIJRVLQGAFJ");

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
    msg.setTimeStamp(0.170636553361);
    msg.setSource(56159U);
    msg.setSourceEntity(90U);
    msg.setDestination(1632U);
    msg.setDestinationEntity(165U);
    msg.timeout = 47705U;
    msg.lat = 0.11720573216;
    msg.lon = 0.748898093067;
    msg.z = 0.00380440594724;
    msg.z_units = 119U;
    msg.speed = 0.567001221569;
    msg.speed_units = 252U;
    msg.custom.assign("MCSCIJOPEARCWAYDXWIZXYTMQKZVZHGTVPGLXGILUNJBLWHVTFFJEYMFLRAYK");

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
    msg.setTimeStamp(0.755753577935);
    msg.setSource(33614U);
    msg.setSourceEntity(5U);
    msg.setDestination(52852U);
    msg.setDestinationEntity(228U);
    msg.timeout = 11059U;
    msg.lat = 0.109833392715;
    msg.lon = 0.562584110327;
    msg.z = 0.762865648324;
    msg.z_units = 198U;
    msg.speed = 0.70128760208;
    msg.speed_units = 159U;
    msg.custom.assign("MILOZDKKHYJVEAMDCXVIYEPCNFNOZTZBOSUXVMGFFJMCVLWUAFCUKOHKDBWPGPNBAHJMTFQFNXXDEDJPWNSLGCZFSJY");

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
    msg.setTimeStamp(0.799670641274);
    msg.setSource(53790U);
    msg.setSourceEntity(52U);
    msg.setDestination(9679U);
    msg.setDestinationEntity(119U);
    msg.timeout = 6914U;
    msg.lat = 0.745478283566;
    msg.lon = 0.453264178377;
    msg.z = 0.673697474601;
    msg.z_units = 96U;
    msg.speed = 0.688525013315;
    msg.speed_units = 126U;
    msg.custom.assign("MDCUUCQBDRSYOVCWVZBIGONKTPTZOXHGQFLXJEYHEBCALKAMMUQMOGGUZUUGHIJCIKTKXMIONJSPPRJKPPRAJFITEERQSWOMRVKIFVAWQXYGSDAKXYXANVTZYEXVNAOWCLHDKKMEXTWASLNDOEYFXPHDRFWDVZNQTBHEILRZMIPOASZYPSGMZFOGBQTZJRCYCIZNFL");

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
    msg.setTimeStamp(0.878517030499);
    msg.setSource(15526U);
    msg.setSourceEntity(208U);
    msg.setDestination(51689U);
    msg.setDestinationEntity(134U);
    msg.x = 0.251024439286;
    msg.y = 0.044851162407;
    msg.z = 0.780007612669;
    msg.t = 0.804946232011;

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
    msg.setTimeStamp(0.842583069001);
    msg.setSource(51917U);
    msg.setSourceEntity(234U);
    msg.setDestination(57416U);
    msg.setDestinationEntity(162U);
    msg.x = 0.332772200061;
    msg.y = 0.845401361442;
    msg.z = 0.754459296139;
    msg.t = 0.609568385582;

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
    msg.setTimeStamp(0.788054366486);
    msg.setSource(52937U);
    msg.setSourceEntity(215U);
    msg.setDestination(48178U);
    msg.setDestinationEntity(216U);
    msg.x = 0.610763497281;
    msg.y = 0.95395513895;
    msg.z = 0.813725366602;
    msg.t = 0.790786170479;

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
    msg.setTimeStamp(0.500022224735);
    msg.setSource(13233U);
    msg.setSourceEntity(169U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(32U);
    msg.timeout = 27157U;
    msg.name.assign("NSLLTTUIAESSHTQVKCNIULJXEJGCAGKOOKEYGMUQIWROAXCPDBRDCSRITRLVNWALLCDFDGEBOFHUWYEPUBSDWDTQJIXXVICUUKHQGGAJEVQGTQTAODRBLWNVAMPCVIFDZIZJVUQMPSOPJNFYZQYHMFRBYHYIBJTMBFGMFFXLNXZZUEKAEXZNMVRPKNMZYMRKN");
    msg.custom.assign("SJJVYUXIWJPZGDIUZHJRKVDLCGDDVEJKSSWWWIGDFMEPYPNDNNZTYPIBBUITFCQTJASQTYRSBZPOATNLBHMMESTRLAQSRPVMLHUMKUYFXAKC");

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
    msg.setTimeStamp(0.738186473651);
    msg.setSource(46352U);
    msg.setSourceEntity(77U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(70U);
    msg.timeout = 26247U;
    msg.name.assign("JMFIVJCQAUGSRSAYAKYCJLSBAHUQYKVLJZYCTEDDWCOBUQRPKRINLKPADDBSYIZEIBHTKUUHPQFUTFXTGVWVHDJPEOKPJXWHFVNPECVORGNOWKQLOIGSSMTNMWGPZRRQSXQCXLAONCTMKVMYGPDBHEWZOSYZNYLCOMBALMRXHTYFUILREIGMSUQGLRJQBFMJNEHDAGDOXT");
    msg.custom.assign("UCVHHVXSZEBCSOPUBOYNNSSCGJKKQERHKTPTWDLYVQBEIGGGMIZMZSQTTCBQTUJZSCAMFOKLDZRYWB");

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
    msg.setTimeStamp(0.510583271441);
    msg.setSource(45578U);
    msg.setSourceEntity(231U);
    msg.setDestination(14U);
    msg.setDestinationEntity(51U);
    msg.timeout = 32934U;
    msg.name.assign("SDNHVQUWHLYMWNBLJIXXLTAHRVXMQZZVOPITOEZCUDUEGWDRUELOLZOPHKYWUCAYMZHBHBESTLSOIFOJAONJGGDMXXRRGUNPJJPMFXBBCRGBMTFSFTFTOSXGAUNIYPQTCEXMIMRAJVVHTOJNGBSSHXZLNVJPWSEBMSYQYFKAICAKV");
    msg.custom.assign("MATYYOBFTPZRPGAYXKGIAJFYZLEXUUEYDMAJLOHCWGVJTUPSCMYNRZSOFUGKCRBMCXWCOHQVXTNPXOBUPQSMJYVAJEURHSRDBXCVUIGALVWQLBOPDQHOVZCDXIGKCZTFWQEKBNLFZPFJIHMXLTEITKNHERSKKJLSAZUNDGYJMNTDBPCWDHQGBYIAJIBPNIWGFOBES");

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
    msg.setTimeStamp(0.699055469304);
    msg.setSource(24862U);
    msg.setSourceEntity(72U);
    msg.setDestination(49106U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.928277303848;
    msg.lon = 0.181027556498;
    msg.z = 0.761451747889;
    msg.z_units = 152U;
    msg.speed = 0.0404258933934;
    msg.speed_units = 234U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.388176773149;
    tmp_msg_0.y = 0.662829797701;
    tmp_msg_0.z = 0.254821550122;
    tmp_msg_0.t = 0.903938923945;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 29252U;
    tmp_msg_1.off_x = 0.37110817437;
    tmp_msg_1.off_y = 0.0938895057755;
    tmp_msg_1.off_z = 0.379629254579;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.917741520149;
    msg.custom.assign("FPNTKFGKNJKLWLJLEFEAFMPUOOHLVWKJUFYOFHUEFYUIYYSDYZZPHCEBSIKUXVBRQGARACSLDMOTOZPVSZRXNPQSNBCXVUMDCXPMYVEXXZITUPY");

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
    msg.setTimeStamp(0.853514094478);
    msg.setSource(48682U);
    msg.setSourceEntity(151U);
    msg.setDestination(42885U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.0133367484859;
    msg.lon = 0.66488627872;
    msg.z = 0.340007872212;
    msg.z_units = 133U;
    msg.speed = 0.128630460734;
    msg.speed_units = 196U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9998U;
    tmp_msg_0.off_x = 0.114759714314;
    tmp_msg_0.off_y = 0.822972474579;
    tmp_msg_0.off_z = 0.749719338156;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.27146301891;
    msg.custom.assign("VBSOTQWABCGTEARLQDDTMWEDMBOSIXOPZKGKPOWYLJQDRLNVSFUNKTTN");

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
    msg.setTimeStamp(0.850872849457);
    msg.setSource(17838U);
    msg.setSourceEntity(90U);
    msg.setDestination(18132U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.961911114569;
    msg.lon = 0.178853737097;
    msg.z = 0.729796329609;
    msg.z_units = 93U;
    msg.speed = 0.977570707457;
    msg.speed_units = 163U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0365283040049;
    tmp_msg_0.y = 0.136575947082;
    tmp_msg_0.z = 0.25945511215;
    tmp_msg_0.t = 0.941337940293;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 40246U;
    tmp_msg_1.off_x = 0.801810030442;
    tmp_msg_1.off_y = 0.908672409489;
    tmp_msg_1.off_z = 0.903392528328;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.128709930715;
    msg.custom.assign("PJKLHHZMJEDEHRXTGNOKUICQNQFXUNYCYASXYJECBATKPENQMVGSUVUUZTJMROKWTPEOHXBOUQSIBVWAXYNYFUSHQTPRTCYFHZHZILDAQQSMZNWBDJSIAOVABLKZNHWLWFQAQXJCNNGAEZFDWPIUJKVRURVJRIVBLGSWYHEVOPWCYOGJMLCYDRFPIVDGCI");

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
    msg.setTimeStamp(0.482171324921);
    msg.setSource(45331U);
    msg.setSourceEntity(219U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(224U);
    msg.vid = 12117U;
    msg.off_x = 0.317410036245;
    msg.off_y = 0.209570834956;
    msg.off_z = 0.531943685598;

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
    msg.setTimeStamp(0.98571190256);
    msg.setSource(26420U);
    msg.setSourceEntity(214U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(81U);
    msg.vid = 62904U;
    msg.off_x = 0.188892904047;
    msg.off_y = 0.427459528346;
    msg.off_z = 0.423449900423;

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
    msg.setTimeStamp(0.984789505988);
    msg.setSource(31392U);
    msg.setSourceEntity(147U);
    msg.setDestination(64695U);
    msg.setDestinationEntity(43U);
    msg.vid = 43178U;
    msg.off_x = 0.978259613218;
    msg.off_y = 0.980675077237;
    msg.off_z = 0.232054440803;

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
    msg.setTimeStamp(0.615329715121);
    msg.setSource(46257U);
    msg.setSourceEntity(97U);
    msg.setDestination(12045U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.129614203797);
    msg.setSource(62883U);
    msg.setSourceEntity(33U);
    msg.setDestination(26605U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.567789782491);
    msg.setSource(7974U);
    msg.setSourceEntity(179U);
    msg.setDestination(51215U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.505991164242);
    msg.setSource(53088U);
    msg.setSourceEntity(208U);
    msg.setDestination(17587U);
    msg.setDestinationEntity(211U);
    msg.mid = 54231U;

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
    msg.setTimeStamp(0.556572127065);
    msg.setSource(3839U);
    msg.setSourceEntity(157U);
    msg.setDestination(20598U);
    msg.setDestinationEntity(33U);
    msg.mid = 58457U;

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
    msg.setTimeStamp(0.523682766609);
    msg.setSource(42756U);
    msg.setSourceEntity(4U);
    msg.setDestination(18622U);
    msg.setDestinationEntity(130U);
    msg.mid = 63554U;

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
    msg.setTimeStamp(0.753465443543);
    msg.setSource(44337U);
    msg.setSourceEntity(111U);
    msg.setDestination(38054U);
    msg.setDestinationEntity(238U);
    msg.state = 91U;
    msg.eta = 32390U;
    msg.info.assign("ZZSNWRKTXSEIABJBCGSMHBOOSILVEQLZVURVBRORDPUDJKZCYDCLESUSXDTOSDGTFRAWJTPKYWKVYYMUXGXCCJYIIIOXNYDEEDDFNZQNOUSEFNRAWPYVQWHQCQPMXPHBDGYMYOHJXTOOBAVLVFJMVUPSAHFWPJXZWZBIWMGINGGUQKH");

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
    msg.setTimeStamp(0.366898506027);
    msg.setSource(5151U);
    msg.setSourceEntity(37U);
    msg.setDestination(43177U);
    msg.setDestinationEntity(236U);
    msg.state = 153U;
    msg.eta = 57172U;
    msg.info.assign("IYJNHUEXMWWLUNZJNHWISUXZDAQCUSMCNVIWONKLOJBMPZPOCZAGTOOADGKQSYBZWGVVQCVTUKYAQCYLKBWXMHMSSVLIPDSCTDVVRYLZGLTABFYDBISOZFGZLUJJGFBTCSQUTYRDVWWFGQOTMPMQLHYXKEQUEYDHJIUNXGOEDEXRYXWVNXIMQPTEAFECKJNPOAAKZSZEPFSJJBIHRTBC");

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
    msg.setTimeStamp(0.413136454139);
    msg.setSource(44907U);
    msg.setSourceEntity(194U);
    msg.setDestination(24084U);
    msg.setDestinationEntity(138U);
    msg.state = 36U;
    msg.eta = 35025U;
    msg.info.assign("FIRSDMIPWABTOQYYTEGIHRBNXSAGTLAOXMGLZYDJKVYQJPOMLGIHLYMWDJHSXQJDCJQKIYNBBVEEJTRUIKYCMSLPOERDNSCGWOUNQWIUWAMKHCMGIVBVMVGXXEDHHVXXXCCLTNWXHPTFRZZHKVSWAXAZKELFCRQPBAYORBEMUAAGUZIMLYSLVNSWZYFFFDUVZJDHFKCUKCZTGNWQRNESTUTNRKBHQQPUCRLDPOPTFSO");

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
    msg.setTimeStamp(0.739951757699);
    msg.setSource(41230U);
    msg.setSourceEntity(30U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(108U);
    msg.system = 41977U;
    msg.duration = 14182U;
    msg.speed = 0.627376237883;
    msg.speed_units = 38U;
    msg.x = 0.70201720464;
    msg.y = 0.484596182721;
    msg.z = 0.39738748762;
    msg.z_units = 88U;

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
    msg.setTimeStamp(0.845914010884);
    msg.setSource(18657U);
    msg.setSourceEntity(71U);
    msg.setDestination(10723U);
    msg.setDestinationEntity(225U);
    msg.system = 19101U;
    msg.duration = 21373U;
    msg.speed = 0.805494870942;
    msg.speed_units = 207U;
    msg.x = 0.61225788126;
    msg.y = 0.267799196253;
    msg.z = 0.20907702408;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.735582145148);
    msg.setSource(44364U);
    msg.setSourceEntity(208U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(0U);
    msg.system = 15946U;
    msg.duration = 24275U;
    msg.speed = 0.573300332057;
    msg.speed_units = 94U;
    msg.x = 0.361359534124;
    msg.y = 0.170649721647;
    msg.z = 0.798401605748;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.324738519187);
    msg.setSource(37363U);
    msg.setSourceEntity(214U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.855387303182;
    msg.lon = 0.565020512054;
    msg.speed = 0.113803567847;
    msg.speed_units = 140U;
    msg.duration = 61772U;
    msg.sys_a = 18913U;
    msg.sys_b = 7263U;
    msg.move_threshold = 0.444406274152;

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
    msg.setTimeStamp(0.543606656944);
    msg.setSource(53102U);
    msg.setSourceEntity(198U);
    msg.setDestination(36322U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.633371903211;
    msg.lon = 0.0454775234092;
    msg.speed = 0.418085230238;
    msg.speed_units = 120U;
    msg.duration = 47439U;
    msg.sys_a = 17104U;
    msg.sys_b = 62417U;
    msg.move_threshold = 0.795765576705;

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
    msg.setTimeStamp(0.48726059823);
    msg.setSource(59899U);
    msg.setSourceEntity(72U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.597063849767;
    msg.lon = 0.519866497521;
    msg.speed = 0.561394304792;
    msg.speed_units = 23U;
    msg.duration = 20405U;
    msg.sys_a = 681U;
    msg.sys_b = 21620U;
    msg.move_threshold = 0.00341480991627;

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
    msg.setTimeStamp(0.3695304503);
    msg.setSource(5064U);
    msg.setSourceEntity(74U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.228012457041;
    msg.lon = 0.28911950096;
    msg.z = 0.985285331401;
    msg.z_units = 150U;
    msg.speed = 0.000643328514136;
    msg.speed_units = 171U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.616722451416;
    tmp_msg_0.lon = 0.540433100008;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JZPRGWKJQNXRNXIBHGTNXJFDMEEBEDSTWWQGSAFPYDYUBMCGRVUUTUAHNIBMQTEBJSMZUJEWVDYGIALVHTHIPXKAPFNQOQODCBY");

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
    msg.setTimeStamp(0.839511111241);
    msg.setSource(60743U);
    msg.setSourceEntity(74U);
    msg.setDestination(63455U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.123227171009;
    msg.lon = 0.49129080067;
    msg.z = 0.186582066761;
    msg.z_units = 207U;
    msg.speed = 0.329413524064;
    msg.speed_units = 124U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.159018999547;
    tmp_msg_0.lon = 0.180317240689;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NYUHIFQAIOFDNBHCSKQPTACCWRWQSARAJMADJJZTINRNONUGUGYALJWMWNTKJUHGTPQXXLZFQKEFHKVDYYWNELJZJWXIYGLKCDZPNLQZPBVDLPEDIHSGAIORZRUVBIRFSETZLYPIOXFRIVTPMVWBOMYKOHSVMXMMCUWBQRUTZXAGPVQODEOOHBELBWPULSQAISNOMSJJMSYKDEHFVKZR");

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
    msg.setTimeStamp(0.352243770202);
    msg.setSource(15311U);
    msg.setSourceEntity(1U);
    msg.setDestination(18559U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.0252137991583;
    msg.lon = 0.878386450214;
    msg.z = 0.192466731183;
    msg.z_units = 59U;
    msg.speed = 0.308648847288;
    msg.speed_units = 30U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.566784355784;
    tmp_msg_0.lon = 0.0382374759148;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BMRJCJEWFJLDQHAFEOBTJFFXOANVJVPTQZENYETHBIZJECSJRWJGYILXBYOKXNLVXHEMTDNVYAAUCAPQCLBPKSOVWKLQKGPGOQCYPIDKQJQFU");

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
    msg.setTimeStamp(0.0515258838815);
    msg.setSource(12566U);
    msg.setSourceEntity(125U);
    msg.setDestination(16410U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.729242114559;
    msg.lon = 0.657601245598;

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
    msg.setTimeStamp(0.360112555672);
    msg.setSource(33336U);
    msg.setSourceEntity(203U);
    msg.setDestination(6855U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.34884996735;
    msg.lon = 0.105918004537;

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
    msg.setTimeStamp(0.160283174757);
    msg.setSource(12850U);
    msg.setSourceEntity(1U);
    msg.setDestination(58166U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.417412915821;
    msg.lon = 0.390922202518;

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
    msg.setTimeStamp(0.773457660189);
    msg.setSource(26557U);
    msg.setSourceEntity(118U);
    msg.setDestination(47390U);
    msg.setDestinationEntity(152U);
    msg.timeout = 20353U;
    msg.lat = 0.484401460406;
    msg.lon = 0.353934739782;
    msg.z = 0.587288157976;
    msg.z_units = 50U;
    msg.pitch = 0.173487586501;
    msg.amplitude = 0.477701968481;
    msg.duration = 10211U;
    msg.speed = 0.216493917106;
    msg.speed_units = 81U;
    msg.radius = 0.0209641572034;
    msg.direction = 209U;
    msg.custom.assign("HHPQGJFOEYPPMLDDYAQQCASBITOGWTNIJLSUVHUNAFGHEXPJCNGKJRBUNABIKSEWPKDBJZMLBIYOWIFMGVCBCDTHMFNNWFRLKMIBEMVTXQDKQYIPTBZMTJTGZZYAQGODDYRJWEKUWIEFUNWPKPYKBSKJIZQXHHE");

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
    msg.setTimeStamp(0.803191894769);
    msg.setSource(42384U);
    msg.setSourceEntity(176U);
    msg.setDestination(56762U);
    msg.setDestinationEntity(75U);
    msg.timeout = 54033U;
    msg.lat = 0.693524656899;
    msg.lon = 0.68428721958;
    msg.z = 0.360782643636;
    msg.z_units = 115U;
    msg.pitch = 0.550531797139;
    msg.amplitude = 0.139746341608;
    msg.duration = 33265U;
    msg.speed = 0.611344943528;
    msg.speed_units = 135U;
    msg.radius = 0.690330603846;
    msg.direction = 241U;
    msg.custom.assign("NMFPTQFELJELSGFRFRHINHZANNQYKJGGSDJSPCHIZKRBEGCXSQBBNULLAHCUVIWDBYYAOZPHECMFXDWSNOKPMLOXUWSPTMUSYYGAZRKBPCURFHZULACDOJORMWUBIDMYWEYGKMCTILDMTXATTQXFOLVKCOHOGXZFEBGYHQBBBYZITAJXAKIPRDKAKWXPWJNTLFZJVFVVERDIHVNJQTGROGUNZQQXVVIRDXWOEWSZWJHECDYQQA");

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
    msg.setTimeStamp(0.915093260045);
    msg.setSource(50354U);
    msg.setSourceEntity(127U);
    msg.setDestination(45101U);
    msg.setDestinationEntity(94U);
    msg.timeout = 14239U;
    msg.lat = 0.109650828087;
    msg.lon = 0.0334020961058;
    msg.z = 0.709229816287;
    msg.z_units = 35U;
    msg.pitch = 0.626499014301;
    msg.amplitude = 0.976738657636;
    msg.duration = 47860U;
    msg.speed = 0.992943038352;
    msg.speed_units = 188U;
    msg.radius = 0.423328250879;
    msg.direction = 59U;
    msg.custom.assign("ICKYWKGIUWNDMHSWQDAZQGIBIGMFTXPYSPZMKEZNFTUMJZIZKJMQVVAWUPYYVKQCROBCAOWUSJBXPQRYTMYFTOGDHB");

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
    IMC::Formation msg;
    msg.setTimeStamp(0.0275810107392);
    msg.setSource(49598U);
    msg.setSourceEntity(181U);
    msg.setDestination(26416U);
    msg.setDestinationEntity(252U);
    msg.formation_name.assign("BWFFCLUAXYJETPJONVPTKUHXZMJUHGGUUACZBQYZWBNRLCJWBAFTQLBDKXMVVQRGSPFDKFNSYSRENONAKCCCRVJYWAQESOWTRTXFBQVXJGQAUDMYSZWEVNHZUZONISIDYBFTSLPTNPGZTAUGSRFEOIDZDOPDIIJQQDTAXVKELIJKMEIMHYAVCLGMGBOFEZRXOWEMMVCSRHUHFXXXGHICOOVHNKIPAQTNHHYPCJ");
    msg.type = 36U;
    msg.op = 147U;
    msg.group_name.assign("EGPOTLGZYVBWAPCQVVSDHZZBHOUYTSCPSZZPFHOKRLEXNNIDQBAHRNKYCDCHIRMERXUAXMMWCNVMHQHJZZDRPLTUQNDSGFTMYNSUGXDAFVWIAJSJQFBTBEORYDUKWPXRGGBRXFKKTMJKZFUEJVG");
    msg.plan_id.assign("DCPUFFMUHLPCNISVWLERQVQGESDHANTZHPMTGQNYRBCJWZMEUCFKFEOAQAETZNNGISCDCYKIKWSUXERMULATBXHHQJSVGJKEGQCZGRQRNAJLRHJSSSAOWUUMDGXBDQIWHJWRYXNPFRIBWYPBBHXYXMELGIZABFOYFWDLBZLTRZLDPOLHQEJPVYURBPCKPTFPIJKJOZYOWAUKQJNBFOFGHCKNOMZXKKXDAMXDILIOSTOVSEAIVMGZD");
    msg.description.assign("BZXAQXRUYVGOHVJUTMOCNFORFHEGIDVLUKZYCDEGKFDYWVYUEZZBBLVPWPHHINQTWCUMRTJAKAYCSHUOJGJIGGAKPNUESMXZJNPPMVTJTCXVYTHMAWSRHOBBXNQRFVXEFWYHBORLPFDJOKLJQAFBNTLPWZNIQKLSJXGDFECQJOAGQAMDDZNILSZIXFQKEYZMEATBCPBRNSYZLISUIEGKTKHPDPYFWUGOBCMEDNRRMXWWHISSLMCOVDQIKR");
    msg.reference_frame = 48U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53686U;
    tmp_msg_0.off_x = 0.691639222956;
    tmp_msg_0.off_y = 0.648219635191;
    tmp_msg_0.off_z = 0.506634978302;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.88360322208;
    msg.leader_speed_min = 0.239184185004;
    msg.leader_speed_max = 0.208092946987;
    msg.leader_alt_min = 0.195352356827;
    msg.leader_alt_max = 0.935567833292;
    msg.pos_sim_err_lim = 0.84076631148;
    msg.pos_sim_err_wrn = 0.0760799269919;
    msg.pos_sim_err_timeout = 9540U;
    msg.converg_max = 0.92224660019;
    msg.converg_timeout = 42092U;
    msg.comms_timeout = 45842U;
    msg.turb_lim = 0.437176113056;
    msg.custom.assign("WLFDNPQMVHZONNVMXBGRZELHIWKMGLJSYQOIWPCQBDKJDKSTDOXWLBSTEQYXFD");

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
    msg.setTimeStamp(0.706899701711);
    msg.setSource(4706U);
    msg.setSourceEntity(111U);
    msg.setDestination(53781U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("FNDLJPAHGFMXATCIFDHRVIUZPZTGDIHTUFQMVAKJIEUHDSWIXBWEPHRRIPJPGKISGJGUXWPVXBRTOUACPDLEOWNESXWCLYVJDVMNYPBIVJWHNQVTKGMNFARERASCZKNQILHDYROSJOUNCKLNUMRXZBUFRDQTYXYLAPAEKHYRBVZMKBZLHQBEVWKFWLWGSTGWTLCOZOQCNKEKQSGQYJJLEOUBTFZNQUTXMCFXAZSYAMSIZDYGXDOJPMCQ");
    msg.type = 241U;
    msg.op = 26U;
    msg.group_name.assign("IEJNYCKZOHYMXTRIBBHKTFBZVLPJLXPSAEZWNVFSZUPEXMVKKYMKESNRGLJNYGDIWOTFOHVDBGDLIAJACJXXRDQAUMQZPRJMTWXIPSOTYSPYJBRUEUYZDAUQGQLFCMVWKAWCESEJMYQQWPSOONFZCDFHCITXUFNVWXURQZAVNKORIFADVTRB");
    msg.plan_id.assign("PKIDRCJOIYDTWVSUHKBFNNBGEUMIZJ");
    msg.description.assign("LHFNTQDQPCCNBEATJLUPHVZUVXWXLAKUXOTVPZQPQPRWWRGNQSUSPTMIKMOROC");
    msg.reference_frame = 141U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4852U;
    tmp_msg_0.off_x = 0.782375953808;
    tmp_msg_0.off_y = 0.367952479007;
    tmp_msg_0.off_z = 0.914072531289;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.963566837011;
    msg.leader_speed_min = 0.0355341214414;
    msg.leader_speed_max = 0.250913305796;
    msg.leader_alt_min = 0.467544535979;
    msg.leader_alt_max = 0.9914439677;
    msg.pos_sim_err_lim = 0.457911772278;
    msg.pos_sim_err_wrn = 0.17156223115;
    msg.pos_sim_err_timeout = 46596U;
    msg.converg_max = 0.45609020334;
    msg.converg_timeout = 63212U;
    msg.comms_timeout = 33141U;
    msg.turb_lim = 0.497759189968;
    msg.custom.assign("UPUHHDERWNCCJQWVKIYLGTZGIGBQIKZDUBNBUATBWTFQLYGRGVDUIUQYSRXDEJKLYSOTPZVNJGMQGDACFAGAUASPZLMLHFMJTZOCRNZEFINZHMOZWOSOPNQDIFASDYBYOKCRCV");

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
    msg.setTimeStamp(0.820141658191);
    msg.setSource(25460U);
    msg.setSourceEntity(212U);
    msg.setDestination(42957U);
    msg.setDestinationEntity(203U);
    msg.formation_name.assign("IVVJPCWXQFRNWYUTTUMWOOBWXAYICFXBQPKCKIQSYISTYCKZZNEJUSNHABMBHDNYMBNFLIKFCMYIHMUCAESPYVTSWLGZCDEMAUOOCOVQYYKPJLRHQNJXOGGKAJFBEGYSXIMNGEFTZDDEDURAUSSFZLPQZVBNXDRDLLUZTEMGD");
    msg.type = 16U;
    msg.op = 180U;
    msg.group_name.assign("FITSEZPCFWIWPEYGPKWUFUCRJEQLGAVZJPWDOSMQOWAWLYGKCTSLGJXZRPHDBLYIIBNOMRDMJYUWOGJYENIPBYJETHBWEORJKNLTGEQVARDFMVCHXODRFMHECINWATZRUJUNNXICVLFPQXR");
    msg.plan_id.assign("DVHZSRTLVCIKFGFYTKVUCMPPHZPRHFJGZVBXKLLWVGDJHVJIIWEOTLTOIAIQRSYGIYPCMDWTMELYHDXTNKYRRXSEMHGDEONOFFWPAJUDAWAWEQQJEXIASBFUQFMBCNVCFQVAABGXBNYLYPQMTBQDHCBMGLDPKHFFIZQUWORBUZUWXVOMUKPWUCAZCTSLSJSLQPJXNZHZXAZXIOOMLERCQEGRYVRPKCEJGS");
    msg.description.assign("QRVFJBNXGFSRVIZUWKCNULZXVHZTXQGUGNCOLBFPACWCDPVIGTWEONVVLPMPMRSDMHHWMOQBLMDLOXQKPPGKRFBCIYNEJGJXZTYUDBMHPAHCKHZSTKUFQGINASJOQTNDYUDMEWEADGSBRLQOSPWSRACHQFNOZDGPTMSXBLKEWZSYYBWEKAJXTORUTEAXDJALYQOPRWRNKXBUNYETETRCQUIAOBJEGIF");
    msg.reference_frame = 9U;
    msg.leader_bank_lim = 0.182599774977;
    msg.leader_speed_min = 0.894681135266;
    msg.leader_speed_max = 0.298660875747;
    msg.leader_alt_min = 0.136056951684;
    msg.leader_alt_max = 0.365143041527;
    msg.pos_sim_err_lim = 0.32476396327;
    msg.pos_sim_err_wrn = 0.0742955154172;
    msg.pos_sim_err_timeout = 16869U;
    msg.converg_max = 0.669580687907;
    msg.converg_timeout = 34143U;
    msg.comms_timeout = 23941U;
    msg.turb_lim = 0.852650279706;
    msg.custom.assign("ORLTZVPQDPUVLXRBTVERKZGGVCBQJSRIIQBSHFCHVHKHACEXNDGASOPXSJHJHEKQLYMYQJWRFRYPEDXMRYGZITCEMGACOWPJOZQZOUOSYIKUWSUXQUWAOTAFENZJMUVJYBDMNGBPFTIGWDAHGDW");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.402188770647);
    msg.setSource(37964U);
    msg.setSourceEntity(80U);
    msg.setDestination(35983U);
    msg.setDestinationEntity(88U);
    msg.control_src = 14564U;
    msg.control_ent = 18U;
    msg.timeout = 0.163786268189;
    msg.loiter_radius = 0.15368826176;
    msg.altitude_interval = 0.186765846523;

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
    msg.setTimeStamp(0.90483612364);
    msg.setSource(37383U);
    msg.setSourceEntity(200U);
    msg.setDestination(57829U);
    msg.setDestinationEntity(236U);
    msg.control_src = 44879U;
    msg.control_ent = 39U;
    msg.timeout = 0.187104154604;
    msg.loiter_radius = 0.647367032041;
    msg.altitude_interval = 0.671565729025;

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
    msg.setTimeStamp(0.812142330305);
    msg.setSource(31137U);
    msg.setSourceEntity(193U);
    msg.setDestination(63700U);
    msg.setDestinationEntity(160U);
    msg.control_src = 8194U;
    msg.control_ent = 159U;
    msg.timeout = 0.0522175369377;
    msg.loiter_radius = 0.693926087958;
    msg.altitude_interval = 0.989601352157;

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
    msg.setTimeStamp(0.524608882956);
    msg.setSource(10260U);
    msg.setSourceEntity(206U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(23U);
    msg.flags = 84U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.501572755966;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.85372184056;
    tmp_msg_1.z_units = 119U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.652836058214;
    msg.lon = 0.314264697928;
    msg.radius = 0.65078155815;

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
    msg.setTimeStamp(0.880081538538);
    msg.setSource(56271U);
    msg.setSourceEntity(152U);
    msg.setDestination(28303U);
    msg.setDestinationEntity(194U);
    msg.flags = 23U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.80477013697;
    tmp_msg_0.speed_units = 8U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.439551313427;
    tmp_msg_1.z_units = 115U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.714253661231;
    msg.lon = 0.682824716148;
    msg.radius = 0.162585474507;

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
    msg.setTimeStamp(0.263112748314);
    msg.setSource(47034U);
    msg.setSourceEntity(54U);
    msg.setDestination(10843U);
    msg.setDestinationEntity(126U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.605696545439;
    tmp_msg_0.speed_units = 14U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0915840601024;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.18629556582;
    msg.lon = 0.269511460824;
    msg.radius = 0.0218325302301;

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
    msg.setTimeStamp(0.245821042259);
    msg.setSource(26099U);
    msg.setSourceEntity(192U);
    msg.setDestination(9144U);
    msg.setDestinationEntity(125U);
    msg.control_src = 34108U;
    msg.control_ent = 86U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 68U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.954133592953;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.476378524436;
    tmp_tmp_msg_0_1.z_units = 131U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.215602255757;
    tmp_msg_0.lon = 0.62670155774;
    tmp_msg_0.radius = 0.867666000792;
    msg.reference.set(tmp_msg_0);
    msg.state = 227U;
    msg.proximity = 42U;

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
    msg.setTimeStamp(0.738355385157);
    msg.setSource(14786U);
    msg.setSourceEntity(94U);
    msg.setDestination(27393U);
    msg.setDestinationEntity(145U);
    msg.control_src = 39193U;
    msg.control_ent = 216U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 87U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.449528557726;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.130693874408;
    tmp_tmp_msg_0_1.z_units = 50U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.176479809225;
    tmp_msg_0.lon = 0.937142068125;
    tmp_msg_0.radius = 0.23185698524;
    msg.reference.set(tmp_msg_0);
    msg.state = 80U;
    msg.proximity = 122U;

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
    msg.setTimeStamp(0.268127195175);
    msg.setSource(23551U);
    msg.setSourceEntity(69U);
    msg.setDestination(20924U);
    msg.setDestinationEntity(181U);
    msg.control_src = 28554U;
    msg.control_ent = 82U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 171U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.164030773107;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.663467576023;
    tmp_tmp_msg_0_1.z_units = 145U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0379687957782;
    tmp_msg_0.lon = 0.306866452601;
    tmp_msg_0.radius = 0.217060467841;
    msg.reference.set(tmp_msg_0);
    msg.state = 154U;
    msg.proximity = 25U;

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
    msg.setTimeStamp(0.441532566527);
    msg.setSource(59645U);
    msg.setSourceEntity(97U);
    msg.setDestination(55172U);
    msg.setDestinationEntity(112U);
    msg.dist_min = 0.181572863856;
    msg.ax_cmd = 0.70878760567;
    msg.ay_cmd = 0.190281961396;
    msg.az_cmd = 0.49652748748;
    msg.ax_des = 0.639259165527;
    msg.ay_des = 0.686456937473;
    msg.az_des = 0.871553960234;
    msg.virt_err_x = 0.520625486375;
    msg.virt_err_y = 0.452857657183;
    msg.virt_err_z = 0.490081404558;
    msg.surf_fdbk_x = 0.45503821728;
    msg.surf_fdbk_y = 0.268320860348;
    msg.surf_fdbk_z = 0.547638778553;
    msg.surf_unkn_x = 0.430507867035;
    msg.surf_unkn_y = 0.122913256397;
    msg.surf_unkn_z = 0.994175245779;
    msg.ss_x = 0.769210918179;
    msg.ss_y = 0.507747022045;
    msg.ss_z = 0.633053289018;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BBOWMSYMKKRVFACEORITFUMZWNRFWDQSMBMIVCWCWNAFCISXBYABCBIVJDORJYNPPXAZTJXHHRZWULTLRKQH");
    tmp_msg_0.dist = 0.382819807517;
    tmp_msg_0.err = 0.460432268363;
    tmp_msg_0.ctrl_imp = 0.360931832187;
    tmp_msg_0.rel_dir_x = 0.760169748989;
    tmp_msg_0.rel_dir_y = 0.503468639072;
    tmp_msg_0.rel_dir_z = 0.369216060443;
    tmp_msg_0.err_x = 0.226252334559;
    tmp_msg_0.err_y = 0.0952847924564;
    tmp_msg_0.err_z = 0.901488861004;
    tmp_msg_0.rf_err_x = 0.71284973903;
    tmp_msg_0.rf_err_y = 0.473896051606;
    tmp_msg_0.rf_err_z = 0.971311405127;
    tmp_msg_0.rf_err_vx = 0.246231025488;
    tmp_msg_0.rf_err_vy = 0.266175067576;
    tmp_msg_0.rf_err_vz = 0.45822510879;
    tmp_msg_0.ss_x = 0.79919191803;
    tmp_msg_0.ss_y = 0.996269839036;
    tmp_msg_0.ss_z = 0.998811027238;
    tmp_msg_0.virt_err_x = 0.0617093963747;
    tmp_msg_0.virt_err_y = 0.0365663433675;
    tmp_msg_0.virt_err_z = 0.182125802231;
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
    msg.setTimeStamp(0.634823066716);
    msg.setSource(23431U);
    msg.setSourceEntity(90U);
    msg.setDestination(10297U);
    msg.setDestinationEntity(201U);
    msg.dist_min = 0.748098114066;
    msg.ax_cmd = 0.782053450193;
    msg.ay_cmd = 0.713956889523;
    msg.az_cmd = 0.424007142351;
    msg.ax_des = 0.243626399904;
    msg.ay_des = 0.815483227947;
    msg.az_des = 0.92685106741;
    msg.virt_err_x = 0.244648413756;
    msg.virt_err_y = 0.079433370023;
    msg.virt_err_z = 0.658356317459;
    msg.surf_fdbk_x = 0.114297723881;
    msg.surf_fdbk_y = 0.65806478451;
    msg.surf_fdbk_z = 0.48834917003;
    msg.surf_unkn_x = 0.212083617726;
    msg.surf_unkn_y = 0.890244733248;
    msg.surf_unkn_z = 0.161052531807;
    msg.ss_x = 0.576750165489;
    msg.ss_y = 0.711043761241;
    msg.ss_z = 0.786537326462;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TPNRVFXLZBODVDAASXMYYSDGCOCWTMYTXOKEIHBBUJHRFNZKSUIWDRGSZNRMEUTGXBYKQRFOCRWPIFVIKBIRIMEWYHDHQHCLOUYJSZFAKWNUAJZPMSQCUCLFZYJXOJAOLGPIQCKRXUWIMMIAOYTCJYVLZHCNSWJLYQEJZEXVBDBIXQTLFAKMFTQGPEUKDQZN");
    tmp_msg_0.dist = 0.692721059879;
    tmp_msg_0.err = 0.0693479731597;
    tmp_msg_0.ctrl_imp = 0.793114075187;
    tmp_msg_0.rel_dir_x = 0.00308823773972;
    tmp_msg_0.rel_dir_y = 0.558328670289;
    tmp_msg_0.rel_dir_z = 0.217254456435;
    tmp_msg_0.err_x = 0.599103415643;
    tmp_msg_0.err_y = 0.587946066051;
    tmp_msg_0.err_z = 0.37241843226;
    tmp_msg_0.rf_err_x = 0.914728678799;
    tmp_msg_0.rf_err_y = 0.00216055211452;
    tmp_msg_0.rf_err_z = 0.292212527382;
    tmp_msg_0.rf_err_vx = 0.286381481452;
    tmp_msg_0.rf_err_vy = 0.885835492129;
    tmp_msg_0.rf_err_vz = 0.367048623225;
    tmp_msg_0.ss_x = 0.80318958199;
    tmp_msg_0.ss_y = 0.714098703893;
    tmp_msg_0.ss_z = 0.861441947476;
    tmp_msg_0.virt_err_x = 0.176608897283;
    tmp_msg_0.virt_err_y = 0.690426518738;
    tmp_msg_0.virt_err_z = 0.808776984497;
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
    msg.setTimeStamp(0.489105286188);
    msg.setSource(33833U);
    msg.setSourceEntity(229U);
    msg.setDestination(35933U);
    msg.setDestinationEntity(201U);
    msg.dist_min = 0.673267171341;
    msg.ax_cmd = 0.697309128183;
    msg.ay_cmd = 0.479773994938;
    msg.az_cmd = 0.0599203715229;
    msg.ax_des = 0.540087778245;
    msg.ay_des = 0.0705338585376;
    msg.az_des = 0.954681007841;
    msg.virt_err_x = 0.337448594344;
    msg.virt_err_y = 0.195825123043;
    msg.virt_err_z = 0.0959401955256;
    msg.surf_fdbk_x = 0.564714012191;
    msg.surf_fdbk_y = 0.435017424039;
    msg.surf_fdbk_z = 0.844257319238;
    msg.surf_unkn_x = 0.46228903641;
    msg.surf_unkn_y = 0.0477013041808;
    msg.surf_unkn_z = 0.415010128091;
    msg.ss_x = 0.68965475479;
    msg.ss_y = 0.283041655873;
    msg.ss_z = 0.412932203195;

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
    msg.setTimeStamp(0.507638256408);
    msg.setSource(40372U);
    msg.setSourceEntity(55U);
    msg.setDestination(61924U);
    msg.setDestinationEntity(203U);
    msg.s_id.assign("OPHCMZXEENOSIKUYOHPQLMVYSAWEFQKVQGABDVOETUTZRPUGWMPDWAOWJWXOKJXHWBGFRDIFXGBGNMQKJCASRJBQGJDSCWTGYLJLAGUTZSTSEFARWHFVSBSCHUDNQJHRCYDRQFTCUJQVFKYPLZMZJKVYRVHA");
    msg.dist = 0.32312399596;
    msg.err = 0.102778818374;
    msg.ctrl_imp = 0.217026474534;
    msg.rel_dir_x = 0.0116244455403;
    msg.rel_dir_y = 0.162571105035;
    msg.rel_dir_z = 0.277494337208;
    msg.err_x = 0.121934228928;
    msg.err_y = 0.349046924122;
    msg.err_z = 0.466496111543;
    msg.rf_err_x = 0.226621591948;
    msg.rf_err_y = 0.458487945966;
    msg.rf_err_z = 0.846656642044;
    msg.rf_err_vx = 0.339034683406;
    msg.rf_err_vy = 0.36079143841;
    msg.rf_err_vz = 0.215895372751;
    msg.ss_x = 0.536739139903;
    msg.ss_y = 0.819935770076;
    msg.ss_z = 0.521916288241;
    msg.virt_err_x = 0.97858066252;
    msg.virt_err_y = 0.0604043292717;
    msg.virt_err_z = 0.693669034242;

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
    msg.setTimeStamp(0.623650206084);
    msg.setSource(43657U);
    msg.setSourceEntity(204U);
    msg.setDestination(49604U);
    msg.setDestinationEntity(233U);
    msg.s_id.assign("RQRCMVBDEXUFFEYASQTOMIJETUHIRNTLNVZIIQPEQYPKNPMTGGMAWRBWBTNBZCXRYKSNKHVNCPXSRSGLUZKHNIJLEAXIVZHTZFOZXRVELUEWLSBBFQUJXHACQMOWVNGPOPYMZCBHOTDAVBWDPLXQKXOLYK");
    msg.dist = 0.395824620578;
    msg.err = 0.869155355432;
    msg.ctrl_imp = 0.446026242011;
    msg.rel_dir_x = 0.119213551181;
    msg.rel_dir_y = 0.262335906402;
    msg.rel_dir_z = 0.825257235906;
    msg.err_x = 0.0919471870107;
    msg.err_y = 0.338960592239;
    msg.err_z = 0.494219319877;
    msg.rf_err_x = 0.0763362574971;
    msg.rf_err_y = 0.883951869894;
    msg.rf_err_z = 0.1310072006;
    msg.rf_err_vx = 0.138677361956;
    msg.rf_err_vy = 0.184211170766;
    msg.rf_err_vz = 0.905983135073;
    msg.ss_x = 0.907309556987;
    msg.ss_y = 0.798351382408;
    msg.ss_z = 0.867168373255;
    msg.virt_err_x = 0.586108421722;
    msg.virt_err_y = 0.278739381365;
    msg.virt_err_z = 0.418517778055;

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
    msg.setTimeStamp(0.664287084532);
    msg.setSource(45233U);
    msg.setSourceEntity(105U);
    msg.setDestination(41236U);
    msg.setDestinationEntity(199U);
    msg.s_id.assign("IWUAEZTXRAPCPRBHFHTMVUVVWYGBEIHOZJNNOTAJGYRXXQSELQLWZREGPIYHUKKEBAPGVRCBSBGCIMLOMFSXPCINGQPGDCMJRXTKTDVHWMBNLUNLQWYRFQLIKFKUXEJCYDVAWKVUDHYVZWHSUJWMOIDBFLQGF");
    msg.dist = 0.997684039451;
    msg.err = 0.458167724553;
    msg.ctrl_imp = 0.291275350374;
    msg.rel_dir_x = 0.0134332141676;
    msg.rel_dir_y = 0.58982517525;
    msg.rel_dir_z = 0.248092506572;
    msg.err_x = 0.186284827655;
    msg.err_y = 0.599263731871;
    msg.err_z = 0.699012715038;
    msg.rf_err_x = 0.714753970272;
    msg.rf_err_y = 0.690916542027;
    msg.rf_err_z = 0.68579769867;
    msg.rf_err_vx = 0.0562007738145;
    msg.rf_err_vy = 0.930885052965;
    msg.rf_err_vz = 0.63816966061;
    msg.ss_x = 0.920925989288;
    msg.ss_y = 0.847382602406;
    msg.ss_z = 0.859626666834;
    msg.virt_err_x = 0.141389371291;
    msg.virt_err_y = 0.927585627223;
    msg.virt_err_z = 0.70145602743;

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
    msg.setTimeStamp(0.460575000309);
    msg.setSource(64514U);
    msg.setSourceEntity(116U);
    msg.setDestination(53713U);
    msg.setDestinationEntity(143U);
    msg.timeout = 10688U;
    msg.rpm = 0.314308813075;
    msg.direction = 97U;
    msg.custom.assign("LUYDXLLKRYHAMWJEMWHSIPEYHMWSACDQDWSTJUCPQTCQOUGFUDVFXMGRVAAZFUYMKNDEXJCUSOQLJRNWTSVHFIEWVBMLXBHZQPBGADLGIPFGOQUZWFEVPKZFQBKNLTOHOSAOXRXAKUYRKBPCHBPVVXVDWGDZTEEDHMZOCJLPUZARCIIYSPHGTKSIBQLGYDPVNNXMJTAQZYXIHXNBQICFZKYNLBNTEFCIMGSNZWVTUIKEFGKAR");

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
    msg.setTimeStamp(0.18925168535);
    msg.setSource(46234U);
    msg.setSourceEntity(66U);
    msg.setDestination(43680U);
    msg.setDestinationEntity(162U);
    msg.timeout = 30187U;
    msg.rpm = 0.651185938759;
    msg.direction = 58U;
    msg.custom.assign("IPLMRDFRVYFYCNGSICEMTJDWQEUXFCKJILATZSIDECYUHPDVUVNYEZENLAKOXPANYAQCKPVLLHHDWGZHNKFDVOHQFBTNSCOAOKPPBAUM");

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
    msg.setTimeStamp(0.274935844211);
    msg.setSource(13930U);
    msg.setSourceEntity(139U);
    msg.setDestination(4568U);
    msg.setDestinationEntity(18U);
    msg.timeout = 26607U;
    msg.rpm = 0.00334089501472;
    msg.direction = 76U;
    msg.custom.assign("ZOSBPJKIGSPHJGEDIWGVJBAIXHQMJGGYIPLSRBEABNYWWRGCQDHTQKKCHCWKETCIRMLOOOVIRKUDTMVMBZLZLTMTXJAMTOOBJHFZSVDYOVFGNHSPKKVUMXNNTQUREFLBOZFEMYPVJSSGZUFTNLKXZXQSUFHYDANHHCJLLKCWJXMXWFERNQPDERAUXYWDIMEPFBANIFXHZKVNBFWCVECRWTDLPQSIQOT");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.175392860221);
    msg.setSource(24391U);
    msg.setSourceEntity(253U);
    msg.setDestination(39189U);
    msg.setDestinationEntity(153U);
    msg.op_mode = 58U;
    msg.error_count = 10U;
    msg.error_ents.assign("ZBLWVRLKVBKEBZMZWANPCGFVWPIILBJOUJQSIPKBBEWIMESYK");
    msg.maneuver_type = 13044U;
    msg.maneuver_stime = 0.0687622969351;
    msg.maneuver_eta = 45139U;
    msg.control_loops = 3433512108U;
    msg.flags = 2U;
    msg.last_error.assign("YQLIQXMMJBTNXPVVRUTOTEWVJNQOVFFSPYCXHHFRFNBUEKPKZKYEGXVEMZUVLZVBFDHONAYCZOVWZKRUQEYAQJYARMCYYIMCWQAZFJGNAKJBSTTRWTRMJFLSSIKQWWGGPDMBGJDDIJJQDOMUKHYULAUAGLSTWXVXHU");
    msg.last_error_time = 0.487733395226;

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
    msg.setTimeStamp(0.92538426405);
    msg.setSource(31585U);
    msg.setSourceEntity(73U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(60U);
    msg.op_mode = 205U;
    msg.error_count = 62U;
    msg.error_ents.assign("TAPEPSDSGEJFZLIPNKXOCNSVNULYFMPMMTLHOJFXTFDRRDMQXBEQUZUAJILNMSDNFHVHQUWRATZXECYCQPRXMJQNATWXYFKZJPSIJWJPDBOBJUVCEGFWUWOJCZMKVRGLNXOHGEYKGJWWVRQVQBWFB");
    msg.maneuver_type = 40650U;
    msg.maneuver_stime = 0.638309165749;
    msg.maneuver_eta = 40140U;
    msg.control_loops = 1211136267U;
    msg.flags = 64U;
    msg.last_error.assign("FLLLZRPSABYXRPGKJEXVCADUQNCUMIZWMVSOVSJRHIBDWVGOPGEWWAKWGUWQSEDNQEERPVMTKJKLKBYUIHDBJJELJSABDIUKGPSWTYTMPMYHLPWVVASCCKIBOVQIZNCDCIOUFNDSLZBHDFANROVNQXQAROLEUXAYZNGKXS");
    msg.last_error_time = 0.455944197545;

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
    msg.setTimeStamp(0.249341633636);
    msg.setSource(32220U);
    msg.setSourceEntity(194U);
    msg.setDestination(13499U);
    msg.setDestinationEntity(213U);
    msg.op_mode = 203U;
    msg.error_count = 5U;
    msg.error_ents.assign("UIWAQTNFTWRZNVXIUTEQVGTDKCPJBNVVQARZCLDWKCQFMASBLLDDBYGABXDFWRRRQTBRUMBVYUXTVGZQZHFHDMPCQHECSLHDQJHWPPOMJOYVFUKXMCURNGPTYJMRAWZFNMC");
    msg.maneuver_type = 40294U;
    msg.maneuver_stime = 0.284329359989;
    msg.maneuver_eta = 15841U;
    msg.control_loops = 2071946507U;
    msg.flags = 254U;
    msg.last_error.assign("YUCLEUJYUVYDQSNVGJF");
    msg.last_error_time = 0.831216981167;

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
    msg.setTimeStamp(0.054526163531);
    msg.setSource(35605U);
    msg.setSourceEntity(140U);
    msg.setDestination(63102U);
    msg.setDestinationEntity(25U);
    msg.type = 55U;
    msg.request_id = 23652U;
    msg.command = 225U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.614890134789;
    tmp_msg_0.lon = 0.110768499187;
    tmp_msg_0.z = 0.875678374885;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.174766872284;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.custom.assign("GIOHOMOHJRNQZOZHEYDEGPCIIHUNIRVTHETYMSRNWOPCXQYBHKCXAUWMCAAWLFLNXDSCPBBQQCWTHSQOVHKGLYECZFQCKZPSWIWVYLNYFSBPAPYR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48616U;
    msg.info.assign("ZTWLPKPPMIFAZLFHXPFEEOQBEEYVWMIUEWSQMAACBRCHPCUHDBSWXDGDEDGGAJJQBNHRWFRSOGJGEJIXUIMRNQOAICLWYXNIMWFJPGFRHCKTAOKZZQDXURWBUOZHMECDUJLNCTBHKYMHUGJOITVIFQPSXBODFZCDGIULXZONVEKOHDWRYSBAIZTCJTNKLMPRTJBKKLEQVNTXVKTVVUMDYFZAQBGSLKYYS");

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
    msg.setTimeStamp(0.932481023633);
    msg.setSource(17668U);
    msg.setSourceEntity(244U);
    msg.setDestination(15874U);
    msg.setDestinationEntity(175U);
    msg.type = 114U;
    msg.request_id = 3695U;
    msg.command = 141U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 48424U;
    tmp_msg_0.lat = 0.819959336457;
    tmp_msg_0.lon = 0.533928609399;
    tmp_msg_0.z = 0.504601424426;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.pitch = 0.923001719855;
    tmp_msg_0.amplitude = 0.32675918629;
    tmp_msg_0.duration = 31613U;
    tmp_msg_0.speed = 0.301941244979;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.radius = 0.297773652883;
    tmp_msg_0.direction = 191U;
    tmp_msg_0.custom.assign("ZPDZVVEEFYRTBIWTQBZLAQXBSDKFEOAOUVNIEWNKZRFQGNKRBFPTPVLCKDZUEAOWUUMHSYDXWCEGLXWUOJYYK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12710U;
    msg.info.assign("IYQTJZFRXHLMDEFWT");

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
    msg.setTimeStamp(0.854849073689);
    msg.setSource(39970U);
    msg.setSourceEntity(9U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(93U);
    msg.type = 35U;
    msg.request_id = 24723U;
    msg.command = 186U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 58647U;
    tmp_msg_0.lat = 0.77529293738;
    tmp_msg_0.lon = 0.537160285963;
    tmp_msg_0.z = 0.760202737614;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.speed = 0.00880577884951;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.duration = 22008U;
    tmp_msg_0.radius = 0.537334140303;
    tmp_msg_0.flags = 189U;
    tmp_msg_0.custom.assign("XCCJORDFPUYMWKXBFMNFVLOBXCSHRTZYIJEROIJSGQZNQQACLRRDACGMJFOKPEWXKGLPQHQXJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7098U;
    msg.info.assign("CZSWHVGTBJRZRQENNEORPNSZUHYTAGWWTJGLNUYPGYREMGLXDQVRMASNRBCJFYTXVUKWIZWIWRX");

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
    msg.setTimeStamp(0.0771789406892);
    msg.setSource(5588U);
    msg.setSourceEntity(144U);
    msg.setDestination(59201U);
    msg.setDestinationEntity(68U);
    msg.command = 118U;
    msg.entities.assign("ZNZXHPHUKDCLHRWQJDNOQDSOVGQOESMHWISDCEZFDPXWIGMITNKJCSRCLAZXIBQGELHKAPGKASBSJAPKNEIDAZTOUDITYLQIRSIBKTURNTDYMCZUDBODNETXZYNRMXPBEJJCWWKOFMVXRCZTABNLFVFOROCQEJVHPPYYMAJXJWGHTFKBLGEVZGSBRUWLMXWUYFEOBVNQMLAFRFETJZJRGXPKTIUBKQPF");

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
    msg.setTimeStamp(0.611343816993);
    msg.setSource(22955U);
    msg.setSourceEntity(140U);
    msg.setDestination(34897U);
    msg.setDestinationEntity(233U);
    msg.command = 32U;
    msg.entities.assign("LXCGVGZQLPCEXOYIMXXIDMHHRQEWPJDVDKVGEEHNPZVMLMLNYYDWVPKRRT");

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
    msg.setTimeStamp(0.444806441972);
    msg.setSource(47730U);
    msg.setSourceEntity(126U);
    msg.setDestination(37294U);
    msg.setDestinationEntity(55U);
    msg.command = 97U;
    msg.entities.assign("MSTYTZZBQGRIWPETUTPHVRYSGKBUGRUHFDQGXENFJBUVQXQNWCMVXZQ");

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
    msg.setTimeStamp(0.970279745857);
    msg.setSource(20714U);
    msg.setSourceEntity(98U);
    msg.setDestination(19324U);
    msg.setDestinationEntity(195U);
    msg.mcount = 88U;
    msg.mnames.assign("LRHDHQICLWWIBRVWYBKDEFEGECDFQPFVJTKTZXMISLXTMLNPNGJWFOLNWOFEUFIBUIQHDJPVAAVICPLBFLOJXMAXPWTF");
    msg.ecount = 133U;
    msg.enames.assign("GBFWYGAWASFJHRMHSLHBIMGLWLKPVWGDSPVIXEIVYPFKRYBIKKHJCREFOFOPNJSTJTKHWQZCALZHMJFVITXDQTTE");
    msg.ccount = 154U;
    msg.cnames.assign("WCFPEIDWSDTMSCHUJGQHXHVVNFRAGUMSCYIZHBAOTSAHEYDGXIAZDBBFREOCXVJITZJUKSINSPNIFAHPRYEZEHZWZCWPBQXGIDWYFUTXVIQYYFAOYLRDNLOQRBKQNGLQDXEPCZWOBTYY");
    msg.last_error.assign("VXHEXPXLQBAFRAPACSZMLRWCDMTJJVRUJDZOMNEIPSLCUVZHHCBWBZXPIIYXGIWIBJJUTQFHOUXTFCTNCXRSQNJNYPTHGMSAEPATDWLREHEIRYELOVYUYSGZGVJIPQOPDQKYBDRBFACGWDCQEG");
    msg.last_error_time = 0.652066311109;

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
    msg.setTimeStamp(0.827291689151);
    msg.setSource(19255U);
    msg.setSourceEntity(8U);
    msg.setDestination(25439U);
    msg.setDestinationEntity(141U);
    msg.mcount = 10U;
    msg.mnames.assign("RUMKBHNJENVHYVAEMADGFYBRETVRIUZQWODDKCSNN");
    msg.ecount = 111U;
    msg.enames.assign("TEQBZCGCPQPOANFEOUPTEMNKINBPKGPQFYUVUGBHCUGIOBEBUMHNJHXSLOCDAFQDKTHWKKSZLOV");
    msg.ccount = 23U;
    msg.cnames.assign("QVPZXSPSTWYBXSDCZFRBDVC");
    msg.last_error.assign("DCVFJPVOPPMLPGWLLEKJSXRGPJZOISQTMMIPXJXCHBUZHPQQSAZIJPIVQKURJMFYQTXSSWFIQBVGBAZRTOXAQEONWUTTCJBTYYHMDKXUXNBZIGYIFHLMYNMYHZZXWCATEOSLIDAJYKRYTHWMKVHUSOWNCHDNIFGEVCUEGCDRRQTSDJOJZBUZLDARUWKRMCAEDPCEASFGQOPSBOXNKEDK");
    msg.last_error_time = 0.408019306291;

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
    msg.setTimeStamp(0.976711881324);
    msg.setSource(36231U);
    msg.setSourceEntity(36U);
    msg.setDestination(23779U);
    msg.setDestinationEntity(219U);
    msg.mcount = 164U;
    msg.mnames.assign("NBPHUWBTDUKHOCVMVHRHBCCNZLGRGIFQLNVSNESDQSEGEXZVPCNDWYQVHZQVOXKLJDODADTQGPNYNCQFMMMSYBTZXALULJFSMYFGUHJYEAWXXITZTLKGRZKFYLCZZWGXFJKJLSEXD");
    msg.ecount = 23U;
    msg.enames.assign("ZOYBEYCSJKNAHVVMYRFAULIJKRQIOCBHKJHUKPWOTETDMPTGQRXPMBGXCMJVEJADPOKKMNLXDKWQOFTHVXZDVIURUGQFYSLNCNWZACFVEPJLHXUSAYUDECRWGWTIHQHNAUEGSPGZDVDMMHSOTZSMXBEQDSFCTSMWGBZNXEVUFEABRHXNOK");
    msg.ccount = 238U;
    msg.cnames.assign("HYDWQDKYCVTFBYIMDMPPTKZIYCPVENZIARCHAVZQMKLTXRCAXBXWRICZLFHQJVNBREETIEXGYVYCDHGCBVTFFRJIJNUBKULDUGWFDAELEUKOBHXMKCREJJNKPFUTOZPFLTSJEWCQRCVUROSBOGOLDXHAJBPZWJOHMHULPXLHGSVAYTRTNXIJKBMGH");
    msg.last_error.assign("QSTZEKPZMNERILYTNSWWIHJCEJIZPOBIRJEETVAIUUYVFJ");
    msg.last_error_time = 0.460454406122;

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
    msg.setTimeStamp(0.576806363749);
    msg.setSource(35478U);
    msg.setSourceEntity(235U);
    msg.setDestination(7865U);
    msg.setDestinationEntity(31U);
    msg.mask = 111U;
    msg.max_depth = 0.572074811126;
    msg.min_altitude = 0.319439603691;
    msg.max_altitude = 0.0602862506099;
    msg.min_speed = 0.032095895129;
    msg.max_speed = 0.702129470557;
    msg.max_vrate = 0.113750278725;
    msg.lat = 0.0233913360511;
    msg.lon = 0.619453147764;
    msg.orientation = 0.368040288745;
    msg.width = 0.959644868424;
    msg.length = 0.427113729842;

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
    msg.setTimeStamp(0.990580204633);
    msg.setSource(16009U);
    msg.setSourceEntity(221U);
    msg.setDestination(19191U);
    msg.setDestinationEntity(8U);
    msg.mask = 49U;
    msg.max_depth = 0.0589836623623;
    msg.min_altitude = 0.411553996396;
    msg.max_altitude = 0.38012195646;
    msg.min_speed = 0.207755758643;
    msg.max_speed = 0.124567866899;
    msg.max_vrate = 0.289700098495;
    msg.lat = 0.444795246849;
    msg.lon = 0.374145261209;
    msg.orientation = 0.827723579394;
    msg.width = 0.796798792122;
    msg.length = 0.83282241131;

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
    msg.setTimeStamp(0.907225209006);
    msg.setSource(15620U);
    msg.setSourceEntity(22U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(233U);
    msg.mask = 186U;
    msg.max_depth = 0.677738827557;
    msg.min_altitude = 0.661645836166;
    msg.max_altitude = 0.753592869753;
    msg.min_speed = 0.766921934402;
    msg.max_speed = 0.714247048632;
    msg.max_vrate = 0.883335108983;
    msg.lat = 0.389976716531;
    msg.lon = 0.367668187795;
    msg.orientation = 0.108676779597;
    msg.width = 0.272501101531;
    msg.length = 0.295551034789;

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
    msg.setTimeStamp(0.725552119468);
    msg.setSource(33143U);
    msg.setSourceEntity(99U);
    msg.setDestination(9169U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.506433870101);
    msg.setSource(17100U);
    msg.setSourceEntity(236U);
    msg.setDestination(41955U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.733254614873);
    msg.setSource(54020U);
    msg.setSourceEntity(233U);
    msg.setDestination(54533U);
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
    msg.setTimeStamp(0.689936201421);
    msg.setSource(43840U);
    msg.setSourceEntity(192U);
    msg.setDestination(48147U);
    msg.setDestinationEntity(186U);
    msg.duration = 17271U;

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
    msg.setTimeStamp(0.984146133205);
    msg.setSource(13084U);
    msg.setSourceEntity(19U);
    msg.setDestination(64261U);
    msg.setDestinationEntity(114U);
    msg.duration = 15928U;

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
    msg.setTimeStamp(0.2450682646);
    msg.setSource(34009U);
    msg.setSourceEntity(124U);
    msg.setDestination(23826U);
    msg.setDestinationEntity(7U);
    msg.duration = 61036U;

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
    msg.setTimeStamp(0.266294604707);
    msg.setSource(23921U);
    msg.setSourceEntity(25U);
    msg.setDestination(42581U);
    msg.setDestinationEntity(189U);
    msg.enable = 107U;
    msg.mask = 3174479351U;
    msg.scope_ref = 2233958377U;

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
    msg.setTimeStamp(0.848407859288);
    msg.setSource(24330U);
    msg.setSourceEntity(247U);
    msg.setDestination(34270U);
    msg.setDestinationEntity(145U);
    msg.enable = 176U;
    msg.mask = 1059658938U;
    msg.scope_ref = 203163236U;

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
    msg.setTimeStamp(0.558601986443);
    msg.setSource(31207U);
    msg.setSourceEntity(141U);
    msg.setDestination(21050U);
    msg.setDestinationEntity(242U);
    msg.enable = 120U;
    msg.mask = 2448826247U;
    msg.scope_ref = 1258770482U;

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
    msg.setTimeStamp(0.483354699017);
    msg.setSource(57513U);
    msg.setSourceEntity(80U);
    msg.setDestination(2064U);
    msg.setDestinationEntity(64U);
    msg.medium = 184U;

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
    msg.setTimeStamp(0.415382942988);
    msg.setSource(48590U);
    msg.setSourceEntity(74U);
    msg.setDestination(11980U);
    msg.setDestinationEntity(77U);
    msg.medium = 248U;

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
    msg.setTimeStamp(0.189458541876);
    msg.setSource(33309U);
    msg.setSourceEntity(118U);
    msg.setDestination(17942U);
    msg.setDestinationEntity(18U);
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
    msg.setTimeStamp(0.376093267996);
    msg.setSource(18638U);
    msg.setSourceEntity(3U);
    msg.setDestination(52958U);
    msg.setDestinationEntity(156U);
    msg.value = 0.424643868049;
    msg.type = 48U;

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
    msg.setTimeStamp(0.318062974631);
    msg.setSource(14140U);
    msg.setSourceEntity(83U);
    msg.setDestination(19458U);
    msg.setDestinationEntity(192U);
    msg.value = 0.788216765227;
    msg.type = 15U;

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
    msg.setTimeStamp(0.253703232625);
    msg.setSource(51915U);
    msg.setSourceEntity(221U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(66U);
    msg.value = 0.473764949227;
    msg.type = 34U;

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
    msg.setTimeStamp(0.658700448379);
    msg.setSource(3749U);
    msg.setSourceEntity(225U);
    msg.setDestination(53203U);
    msg.setDestinationEntity(67U);
    msg.possimerr = 0.1804610086;
    msg.converg = 0.416373338296;
    msg.turbulence = 0.816653440253;
    msg.possimmon = 180U;
    msg.commmon = 112U;
    msg.convergmon = 188U;

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
    msg.setTimeStamp(0.871377466167);
    msg.setSource(25090U);
    msg.setSourceEntity(248U);
    msg.setDestination(21404U);
    msg.setDestinationEntity(142U);
    msg.possimerr = 0.56468506028;
    msg.converg = 0.11954661026;
    msg.turbulence = 0.28484111232;
    msg.possimmon = 137U;
    msg.commmon = 120U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.403944767501);
    msg.setSource(8402U);
    msg.setSourceEntity(182U);
    msg.setDestination(49456U);
    msg.setDestinationEntity(228U);
    msg.possimerr = 0.360262312045;
    msg.converg = 0.523400387639;
    msg.turbulence = 0.615585922335;
    msg.possimmon = 95U;
    msg.commmon = 22U;
    msg.convergmon = 38U;

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
    msg.setTimeStamp(0.101120403283);
    msg.setSource(10468U);
    msg.setSourceEntity(50U);
    msg.setDestination(14468U);
    msg.setDestinationEntity(139U);
    msg.autonomy = 243U;
    msg.mode.assign("DXLOKQEPYVVNVLZLUOGNXHKHTWIOQZETNYATIDPTYWBUVWRQKXFWCGKMDCALMX");

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
    msg.setTimeStamp(0.49605447774);
    msg.setSource(4699U);
    msg.setSourceEntity(49U);
    msg.setDestination(6241U);
    msg.setDestinationEntity(5U);
    msg.autonomy = 86U;
    msg.mode.assign("NHIVEGSRYLIIBGQCXDATSWTZONGUPLARBNJFXDBMMQKVHYJRVWAKEKMOLGBXJMLHPJQIJIBRFSOCFVFQUVNWCTYZKBNJHECZTQWKGJFMVQKGCXHACLMOZHOXEZGCYUKKDEUBMXDZWFEUVIPJPEJCYIAZQXYTAFMFLOUMSTEYBGYOVGZXBHLSEYIDINTVWOTJHKXFPNLHPPFXAMADBTDPWNGQWOREYZNLKRCCHPD");

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
    msg.setTimeStamp(0.108389289987);
    msg.setSource(35878U);
    msg.setSourceEntity(233U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(158U);
    msg.autonomy = 189U;
    msg.mode.assign("JCAGLAIRJQWKKLXLHHLEZEXEPMBGHEVNFJIABITWYFDVONTKCYAQNREMOJQWADEIKJWPWNSCKDSRPFBOAQCFCVEOPIUTWDKXBUMXANUUTHB");

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
    msg.setTimeStamp(0.809151477765);
    msg.setSource(24022U);
    msg.setSourceEntity(205U);
    msg.setDestination(11950U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.680577067619);
    msg.setSource(41655U);
    msg.setSourceEntity(86U);
    msg.setDestination(13844U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.418520688466);
    msg.setSource(5320U);
    msg.setSourceEntity(124U);
    msg.setDestination(24119U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.502314970376);
    msg.setSource(51295U);
    msg.setSourceEntity(83U);
    msg.setDestination(41749U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("WVNATYFKUVXLQUPOCOPQLTAFVFWGHBJCUJIPISXSBDIELKGYMMARWMTNHEWWXHKFECOBALCKUISTUZREUSLARPPMQHR");
    msg.description.assign("ZLMOZGOELWAXBWYGJAMFIILEFNUSMDNSYMAEHRCBILPCSKUYJTO");
    msg.vnamespace.assign("BIDMAFWYPMVQRTMNPASEWBBGVXQSVTUOGZUTWYAVFIRRMVRYXTNYPPZMNJHJJNCOBUTTICALNZDCRMHXOAOJKWBZLJGGLXBPXOSWFLXQSCVKEAHCVKRXLJTTGNMEUQAUNHZYDVSQRDASAQFBDKZYFQKJQPY");
    msg.start_man_id.assign("LTENCSNDVPPXYH");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.658971271331;
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
    msg.setTimeStamp(0.685895696226);
    msg.setSource(19132U);
    msg.setSourceEntity(129U);
    msg.setDestination(53067U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("NZKGLWIBREUNSGILRLKOVXXMTUQPADUNXHLIEECXACJQTVCWCISBUSYKSWCSWICFNUIXFKUNLAAZNDMHJYKPTOQTDNOIYERJPZSHXVRNVJBZXJFBWBJPROQSEIMHYZHRMGLFVHOQGTFZCTPQXHTRKRGNRCYTGYVNWVHBVWEEUHYSOBZMPFQDLLPOGDLGWHVAOMPAYKRXJZKM");
    msg.description.assign("ACKIJEPJGIDDPNKAFVGXJMUWYZAMQRIAGKBMECIUMZGFWXSSBLODZNEWDXDGQRIHBLVHJCGPQQFETZPOEUBCYFCFHZHWOE");
    msg.vnamespace.assign("UCDSNBZJCXBDTXRGQESNZPJHXVBLWQWZMUORHPZXHJPDMIWVTXPFAEIKVQYOZXUTYBLIGIARE");
    msg.start_man_id.assign("CUPVNGOIMDMMQTZGIORPPPZHGFXJZSZDZNZYDVSOAUTLWBJRDUHTXMEFYJWHJHCTPAOCTXCIDEQLMCAFFSUUAUTUBGEWJRQYAVWKJPEFWRXEDKKLTMBQHEFRAIISQPICQC");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("RMLMXTBWWFWHJFCBKLVPELDIMEHASNVXDTRXKQFCAWLONOFOSKQHKMWMYVSZSNQGKGUBQYCBVX");
    tmp_msg_0.dest_man.assign("NRXDVUOBGZJGXCLPDPARVDIDWXCFGOUWUWRLIEJVREQRYOIHNGVWTDFLUFSXINDEHHEBJLUVKZOJOKSPWJKTXQAJJHNSOIXWKELATRCNFACGCALCZIEZPBMAFCUJIFMFUUQDGSCISXTYZL");
    tmp_msg_0.conditions.assign("IXYKFOAPFYGC");
    msg.transitions.push_back(tmp_msg_0);
    IMC::DeviceState tmp_msg_1;
    tmp_msg_1.x = 0.414339726098;
    tmp_msg_1.y = 0.890543807701;
    tmp_msg_1.z = 0.285324844209;
    tmp_msg_1.phi = 0.0942494350454;
    tmp_msg_1.theta = 0.579879769163;
    tmp_msg_1.psi = 0.142243536;
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
    msg.setTimeStamp(0.525958333086);
    msg.setSource(12290U);
    msg.setSourceEntity(140U);
    msg.setDestination(20459U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("TJXRCYELOGAEQETQRMANDLNZXYBGGRBVNSTEGQILWFJAJEHPWLIHOJPFNHOFYSSYBXTUPWDSBLUINDWHWURUMXZFDPYGOLAZSRKXLPDYFUNQTRQZTNGZLOWVMSCIWCUSPUJARLZFNIJWBQPEDCTJBMKEZGKQZUWCXZBMVFPCVRHXKKHXMVCHJIWQJABGOT");
    msg.description.assign("MEZODYNFJMOPDAAJSUNKWSTGEDMYFMLJDBJJJOWDEFX");
    msg.vnamespace.assign("DBWEKGAUGLWXXCERGMZAPMHYEEGWRHQELZ");
    msg.start_man_id.assign("WOMJEGXEFTNZVHCAKMDBCMPMHTMAUHPKDJHLFFUJGVSLYHOGSRJIAPDOIIEWTTVDXVFHNZYRZEPAQBYZLKHEDOIBYCXNGWUWPEZLODITNSWWYMYCQKCFGSJOZGIQEWLPDSQXMLTSRXF");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("HPOVIGAZUFGGBJKLIYTNDDTCMHUVANKRVNCDGRZDECKRVIODKBEUISXMYYUSIPTXOTAIHSHSTQDFICLGSTTMEKFRHIHZPTQLPEYNBAVZYQWLYROJXWRMPRRNAZCDZMNQLBWQSYOPXFCICQKKVCXNWYTJWJRBUL");
    tmp_msg_0.dest_man.assign("IPGFZRVLLMJCMDIKDTOVXMNDYCENEFSGJZVTHYOOXIUHNNNPTWPRLDUDSROAHZJRARLNLOUVSVRSMWAXCUKLYALRVKECBCBEVFDZTYEGJYFQBHYIVZQKGQEWZBVBFWYQIOKMNHJQXTWXZGLTBOAJSTAHQHPPMJIFZRPWAZGIRPWSIUXUSUQKHDQXCDXJSMEGURDASKKAPPGXQGNCDFUTCBKVMEMOEE");
    tmp_msg_0.conditions.assign("TGFEJHZBYHDIBMFUFLIZIWLRDMMUWBZWXHUVRZJOXPYMGDGVCCYSQRWQLIPRIUJPTGZHDRCWHQSKAJQRXOCOAUGTHEKMATJHGRZSMTLRVIWTVKVKLAJFXAXAOKJENFOWAPDTQPYKFTUPYWTDIPFMPVXXGLMBZYEDSOAKGPCUSNJVQONYFBINFYBSFNSKESWBSCUNDBXLGZL");
    msg.transitions.push_back(tmp_msg_0);
    IMC::StopManeuver tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.240675688032);
    msg.setSource(64267U);
    msg.setSourceEntity(27U);
    msg.setDestination(62300U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("QOAGJMCGDIXPXKSYUFMHIBFVWUZIDGUXGXPZNYHDQJCTFWPOEHRIYZRVBPOXFMGOAKCMWGMBNCKWEVYDNUWVAULKVDZHNRJBDMJRNSAAGJLOQFFNKPYVABRRBWRHUIQFCJLLKKPWWYPOCSOMQPCCMZRFUAIAHHYLNBXPQVBQDIXEZKVTXTYETEUZUPQOSZ");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.260194786443;
    tmp_msg_0.lon = 0.326533334777;
    tmp_msg_0.z = 0.922964593979;
    tmp_msg_0.z_units = 114U;
    tmp_msg_0.speed = 0.208267038584;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.start_time = 0.435347844257;
    tmp_msg_0.custom.assign("VLWRGLBJLTRFKOQPVDSKZUZSEOKGKYEEVFGOKZCNHRJCCQTERLADBPGKWFYAVDBOSGPEKMODVTHQSAYRBFHUETQCLJWRMZPAUEVARNRQZQIMLQFTYWNPMXUXALSYCFOMPCZZPSDRRQUJEIDCZGWUOCFYUIIONBXKXVYMGAXYMEHWQYXLNMGHSGKWKJIBHJJMFNUUYAXUQBSB");
    msg.data.set(tmp_msg_0);
    IMC::CoverArea tmp_msg_1;
    tmp_msg_1.lat = 0.0562140084712;
    tmp_msg_1.lon = 0.419624892431;
    tmp_msg_1.z = 0.921277136274;
    tmp_msg_1.z_units = 208U;
    tmp_msg_1.speed = 0.533686421323;
    tmp_msg_1.speed_units = 188U;
    tmp_msg_1.custom.assign("KCFBUKWQXKDEMSQIOUZQAHFWXTJIFPVYZKNIMRLXHXESQWAYCQUMUJYXGPNXFYSYAOREVMOESGBOSVCPOFTRMVGEDMDJNJFILQUDLGYHVPFNLZSVXSZTINGBDLICWBFLIPKIWPJHMZQZRYKSADDHXTSZFUDAJBABC");
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
    msg.setTimeStamp(0.457755932034);
    msg.setSource(53688U);
    msg.setSourceEntity(121U);
    msg.setDestination(61374U);
    msg.setDestinationEntity(44U);
    msg.maneuver_id.assign("EIHFLZLBLVANIVWORKJCJVKWYDLFAUDBINRPSLTVHAWCAQKHGDBDMBFCOJUUIFHRPGFBAANUTLFXRWEGOGZMJDHAHYPGJMEKVWPFLMSNZGXIZBOVCNNKADIYYSADSCYWUZOBQNZORREPZKEYHIJLQXBTHFQXYKTCLOSTZPEIXANNQQT");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("JXHPXMHMNMWOONVNSVNOVLGXMHHWUKJIQWFFACSVJADFAXHPVYANBSFBGYIYOVUITZIPBMTIUHQXZKDROIVIKLCGYOSKBWDVVYUEAGWCSEDBDZDYNTEGQKBJTSQUWZDFZMSZIRORUMCAJSEQMZXGPXYLACPLXRULPTWFSWLQEYLKFUKRMNWPPETCQHEELXRFDGHUEPNBBPHCGB");
    msg.data.set(tmp_msg_0);
    IMC::FormationControlParams tmp_msg_1;
    tmp_msg_1.action = 181U;
    tmp_msg_1.lon_gain = 0.922840262114;
    tmp_msg_1.lat_gain = 0.566174327558;
    tmp_msg_1.bond_thick = 0.681074797277;
    tmp_msg_1.lead_gain = 0.84223082316;
    tmp_msg_1.deconfl_gain = 0.938396826551;
    tmp_msg_1.accel_switch_gain = 0.904311521179;
    tmp_msg_1.safe_dist = 0.148655733267;
    tmp_msg_1.deconflict_offset = 0.0399691730568;
    tmp_msg_1.accel_safe_margin = 0.622713945347;
    tmp_msg_1.accel_lim_x = 0.830981665703;
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
    msg.setTimeStamp(0.920327105129);
    msg.setSource(30438U);
    msg.setSourceEntity(153U);
    msg.setDestination(6455U);
    msg.setDestinationEntity(61U);
    msg.maneuver_id.assign("CAGNQJNHIKDNUFPZXOZURCYBHWXVAVYEJPFLGLXSCLRWYIKUSMXJQASMWAGGLGYAEIYWNBWZMFSNDCLOIHKCMOPPCUQPOGJJBBZRWQIEVJVSUXBXMFPRWDTPDULQEAKHZWHEQBPVVKOEEIPTSTTGTSNFZEUKAIZQBRIYJNOPMJZFNFOAQDFYHNEXLDQWFBTXHDCSHKXTFIMGSDMR");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.710011605063;
    tmp_msg_0.lon = 0.321870094533;
    tmp_msg_0.z = 0.0162591473796;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.radius = 0.848125837661;
    tmp_msg_0.duration = 24831U;
    tmp_msg_0.speed = 0.717151009999;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.custom.assign("UUBGYXBLXYZMVDRYNNHVSEDKIZFDGJSGPCIHAXBSTPLGC");
    msg.data.set(tmp_msg_0);
    IMC::RSSI tmp_msg_1;
    tmp_msg_1.value = 0.881274222326;
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
    msg.setTimeStamp(0.524384203182);
    msg.setSource(30301U);
    msg.setSourceEntity(126U);
    msg.setDestination(44709U);
    msg.setDestinationEntity(131U);
    msg.source_man.assign("XPJYEZCNYWAGALGRDUSLNXSDIVIHLPMLRTTJTZQMXCUKLNNQEZHZOWGRPHJEDLBGUZZOFBFCFGKWRHWHAQJAKROXESETRWSDQBMDFYAXWIJULNXUYWIQPCUZDMYNLOPCVOWOBBHUIEEMHQTAFPUBSDKQNVZNBSTFLVBUGKSNOJVPOEHHABRJTZSAFMMRDOYUVXTKAFTAGKMNXMYK");
    msg.dest_man.assign("WVYDQJWTTBIOPYVIGWKZFXZSDEAVIUJH");
    msg.conditions.assign("KDKNFXBVDEDTYIVUONLRXVCPJRFIFOGTDJFSQAFUEWKTRTIQRZFWUVPXMDJJPZHIZCBMPZLNNXQWENRJMKGPCFBSRHXY");

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
    msg.setTimeStamp(0.341262725059);
    msg.setSource(49748U);
    msg.setSourceEntity(161U);
    msg.setDestination(15843U);
    msg.setDestinationEntity(147U);
    msg.source_man.assign("GBBEKCZWHRYWOFKPVNJCUVMKFMXRHOAAYMWBUNZJRNKNSBIMFROLTOGXAYUUPDVBOHWUKNVQPONTNVPIETBZAISCLZDDDEDSHWVXHLFAOERIEGTSQRVLJOZLQBYUTDQIZQ");
    msg.dest_man.assign("IGZRLBWDPVNVUYHLWCVQKCHVMIMUB");
    msg.conditions.assign("SPGBAXGMDMBCEGFTLDJEIJZGVZBNOYTLKFCFFBXKMVPOAOAGFUTGYTJTMCRKNOUEEKWLRGQXQT");

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
    msg.setTimeStamp(0.723815502329);
    msg.setSource(33784U);
    msg.setSourceEntity(217U);
    msg.setDestination(7205U);
    msg.setDestinationEntity(126U);
    msg.source_man.assign("XZUEQDYVRGQJJFLOSFOUFVZFWZOBMPPYIKADRBVLIVTTBNFEGOCOUUDFUXMVEPQYZTDBLGEFBQOJJXAMPGWUZYXZZRWXCSBPTRIESGHWVWNQXIBYXKKJQVPJALVAHHUAWTURSPTMHCRHADHBFOLKXSYKUKLQLQBG");
    msg.dest_man.assign("EABXVNHDEPEAYYUKFQOJMLIPQYKRGIDZSDDOMEPZX");
    msg.conditions.assign("MVZUIUCZVRQDQYTGILEIDAGHJKYLBXRTQISSVCHNWGFFARYPLWTEAWGDA");

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
    msg.setTimeStamp(0.897555751381);
    msg.setSource(43855U);
    msg.setSourceEntity(230U);
    msg.setDestination(12129U);
    msg.setDestinationEntity(242U);
    msg.command = 180U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XVYHZIZMUAPWANLHQDBCKQDKHNLGRIMRDSWUYMNZKXMFIEDFWBQGVLJBKRUQYSSTUYUELGTWWSCZNOZBFCAVVFYOXXT");
    tmp_msg_0.description.assign("SFGPIQZTTUNMHHUDGWIYLTFLQEYDSUZPSQWTLVGBWYDKWOYABQR");
    tmp_msg_0.vnamespace.assign("RMJZGXPXLBDOTLEYIARITAOZPSZQKBSHLBHTXTGNWFRLWHHVGWMUHPEDYSPMBWSKBASRSFWOVVIDHEQGCPJDDNEMXWZGPEYYYZKRGZMGSONJUC");
    tmp_msg_0.start_man_id.assign("BMRCBTKBGSZHJEXEAIXTBSAGFKSCXYUZLXMRSYJOAWDQKUXJQZWUUNRKOFGDISRQKOVDTWOELUHFELQZVWDWUWPRUXQWXHVBCLJETJQTBFVEAPOHNITRYHJQQVBSWMTRKZVBCFNKZGIBWDNFGIOHKAJMFCLXYZQYGCDVYUYDVLMSGEPMEANTIEDGOPPXXEHCY");
    IMC::Pressure tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.392596498673;
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
    msg.setTimeStamp(0.743195338454);
    msg.setSource(30711U);
    msg.setSourceEntity(111U);
    msg.setDestination(25431U);
    msg.setDestinationEntity(12U);
    msg.command = 214U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YUTSUSVDRRQVZMTEBCHUEBFIHDTRNHVINDTJJSSHZPAEDKGFDFUQEFBQCLKNIHRVKXMMUWPCLPZCXAWPHBNLUQVGBWNZZKCEIWCNMIJGYEHUFMFZXLZFLIPZBEVORUNAQAZMSYAKUGYLXTCEWHIFKEXPAHOLKXYRGOYCPYNFRTADMNBOIQSOCWVAJDMUKAOLHZTXMXRGJQXPAWJROWYGTRGYWDQQGBNILOLWOPBTV");
    tmp_msg_0.description.assign("ITYCMPAHEXRNTINIJRCFRXOQWFNEKRQPGASNTZMAMBMTKMLEJLTTBDWNVKRAPVHDUCWNPTSFJYHRBUMIUHSKXYUIFCLFSYCAFRKWHYJMOCMOPRXLULBPVZBSBORVODOATXBHYVPGVIIJQXDWLALGGVTEJXAXNEUSBKNXVFLLVQXYWIFHQWPEAPDTNUEIZUJKNOJYQZLHZCOHGSCQWSCDFZ");
    tmp_msg_0.vnamespace.assign("TFHXQOFPVGUIZCVZEKQYJAAWOTHCFUTZMSUORTDIKIQKKOEMEEPHDSAFEAKGZCSBVNFRINDQVJTJSROEPUDPRHXJZCEUWLLPYZIRPUSJYL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TCWYDJESAUKTYILPQGEYCFMJJSSWMKJWOWHQXYBGCIKVDHDYSGFNHUYUERXFBINNTQQVSWQPYMXBKRGCKGFEHBZWGQONDMNDMKBWSXLZDVUGESBUAZAUPSXTLRDPLCWJRGWRNTTSVZANFTLAOTOPBMLFKNHVKCRLCILVIHDBMWOUCEATAORNEQCZPRFQCEYHYLDIMZXFXHNIVXSIGPVL");
    tmp_tmp_msg_0_0.value.assign("LYJTWBEIPITSUMKGOWZHOITATQJCGRYHVNDAUQMXVXZQBZPCRHBQQ");
    tmp_tmp_msg_0_0.type = 19U;
    tmp_tmp_msg_0_0.access = 224U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WTVZUQKTYEBNIEKJBKLKMRBRTCFEWZCPKZWMLXEXGRTSAWOKYOOATVZUGBHLXHYTCVJDHOFCXXSQUMZQIOLSURSZYFNRUSPHIBBHMSWGWJGTQVDUELPQEEYJRNKOHJVJECPFIKCUMHYQNWCZBSZSYLLPIYXU");
    IMC::StorageUsage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.available = 2838771179U;
    tmp_tmp_msg_0_1.value = 174U;
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
    msg.setTimeStamp(0.555993641735);
    msg.setSource(11268U);
    msg.setSourceEntity(170U);
    msg.setDestination(36733U);
    msg.setDestinationEntity(100U);
    msg.command = 175U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UBFUQCJNAITAAMNUGYBJGNHOWPXQABDNVXENVYIQPTNVHKHSWGSQIWKBTDTJDKQCOYI");
    tmp_msg_0.description.assign("VTLSIYQUETXRLNOLQACIYBZBBDLJWNHRMDZWQPZULFCOCSMUPTEEOQKHYOKEVGSDBZWZADFIOSCGAVADUDDNGHBUACJJJNVSLEWTKAYFUVWQNBOCHAGONCPUKIMMNGTPVXWKFWGQENTQLQP");
    tmp_msg_0.vnamespace.assign("RVLLWNPRCVNSJJSUTTHQAYKPZOKKHCWFNDVOBLFCXJMZWSUYDWHZVWPRDKOLVYSVQKGQOJTXNZMGYGGWYUHCHWHGSOEPAXOHTMFDVHAFJNNMMRBIMKJIWORVTRNBMBVEEENXTLEOFBINPKOBNWQPBUJUMVDAISAHEQFTKTREIJQQZIXXMYXOTLTCSPKUHPLGZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AJPHGLBRLGNLJYQEVOSXOVQRWAQMLKPSOHOMTWPULDSAHTBXCXWEEJDEZZTQFGBUDAJVKVSUFXWQCVMPRFSEPZBOPNLPKNGTMICZFDOJJSGFYEGAPDAMCWVJRXNLKBHNCQYFOZRVLSWK");
    tmp_tmp_msg_0_0.value.assign("KNSMWLWFNVKASXHDCVKLGMWHIBHFOLOENRLEXPMFEVTOSVYCXRTFWUPUJJCARQATMAPVEGBAGHORLRGJVBBYCSIHOKCUQGRWFXWIBQSMEIFGPJEBQDBHPNKVDKAXXQECWHUCSDQYRJDLJLHBPFZCTMYTZDRNBNYXZYZEUHPJRGUTFIMRENAUUQTWTDGLXVWOOKCQZPYLOGAFUGJVQPSSSIAYKZMZICO");
    tmp_tmp_msg_0_0.type = 244U;
    tmp_tmp_msg_0_0.access = 219U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RJQPUHYLTCUGNMLXRUYKBYMNGGFBZGWQSJZXOCBNSKVYMYXTAOCRSNNJYEAVTDLGLRJVIPTRUCAIHTEMDDAXQUZMHXVOMPJOSPALKDRSHWZVBDHCYFTPPXZLQTUODIUHIUGENCPEAFKDGPLJRQHXHBLZESKNZOGQJOLWXBOIVAEDCWTTUBPCYZNFVJOUEFWBMIEDW");
    IMC::EntityInfo tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 241U;
    tmp_tmp_msg_0_1.label.assign("KWSRFXVGZCDQZJYGEVRMTIIPNJGBLZCWOZLHWFNZAJSEAPZPYLLCWGIEOEQKKLXMRXJKWFRUCSIUIMHIXPYCPDSWKYOPEHQXTKKFOSUAJWFXSLZCYWMJQPDRXHEUJHNCQNDRXZJVROTQCQPLBNOVIXGHVZHEKBRBUAA");
    tmp_tmp_msg_0_1.component.assign("RVBGXBPSUEVLLLRFGLRTMSVPEMKCQPGAJVKAHEJMLTSDWEEBOWTX");
    tmp_tmp_msg_0_1.act_time = 6976U;
    tmp_tmp_msg_0_1.deact_time = 19357U;
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
    msg.setTimeStamp(0.956582703059);
    msg.setSource(11437U);
    msg.setSourceEntity(215U);
    msg.setDestination(42623U);
    msg.setDestinationEntity(93U);
    msg.state = 93U;
    msg.plan_id.assign("SAVOKUZFQMHINHQPZBVEKQIPSSYPKEHZTURSTSNRNFQODRJZOOLLPZPRUWNRABQCFOCHMDEJEGJTWLWGDQMQSCLYRXEIKKMYEBEDQXGYAJWHKRBGQCTBYJONTCPBDJIYBZWZLFFGCAWKYNWDMKIBDZHCHQMTEATRNDFCBAJZDLPPPHVFWVXOUYIULKXYGIEUAOHAXXSVPCMTLJIDASFASZXMJHUVVXWISVI");
    msg.comm_level = 40U;

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
    msg.setTimeStamp(0.501752522923);
    msg.setSource(64677U);
    msg.setSourceEntity(212U);
    msg.setDestination(15752U);
    msg.setDestinationEntity(131U);
    msg.state = 42U;
    msg.plan_id.assign("DTZHZGGCEJTYOZSEDFKOJXCFZAGPLRACCKKHHJNARDUKJGLPVDILHUUTWMWKDNWABXSCXKIBPMLXVFQLONMJFHTKEDXCSKVWVMHWGPAJWNFOEBYIWOSIIZBMTUSFPMTUVZZSPQXKLHNVQXTEWDYFNSJQMZUFHZDZRMYTFQUWBOPQOBIWSUBAGJREGYANE");
    msg.comm_level = 162U;

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
    msg.setTimeStamp(0.958871981419);
    msg.setSource(23528U);
    msg.setSourceEntity(88U);
    msg.setDestination(64313U);
    msg.setDestinationEntity(66U);
    msg.state = 239U;
    msg.plan_id.assign("JONHQUDMEGPYKQFRPMLGWQWTTALJTHEJXWRXLCMKZGHOUBASIJLCVDNVDJWPICDPLFFHRIZVRANQQBYYIPINFEZUEYMTUKEMUBKYSDJNRHSYNCCNILEUTBDZDZXXOPVRFBZWAJWIHAJVTUKFXSORYNNASFLJXHKQCMUGHOFBCWTHGXVKLPTABMSUDM");
    msg.comm_level = 96U;

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
    msg.setTimeStamp(0.779673030396);
    msg.setSource(1122U);
    msg.setSourceEntity(108U);
    msg.setDestination(9762U);
    msg.setDestinationEntity(134U);
    msg.type = 33U;
    msg.op = 148U;
    msg.request_id = 19664U;
    msg.plan_id.assign("LIDLRYTKHAZONQZXZRFVGJZBWTJVCEBCLGRHFVSSUOLMXDJSVNLHMDNJAPKYOGOSQANJBPIIKODFBZCPHHWMDXCYYKGDVBPPAAPQEBRKUNYIMEYVTFFEXLUGBEHBDPTPNGFOGNWUYOMKIGJXALVXQUSLJRAHNIWSYCMEZLARXQRFQXDTSEYQWMIMYCBAXWQZKNTZJHTRUVDHCZIFIWATWSQFMCKEHDXRGKKPECOOOTUMBUQITEUSNWPCRLFJSV");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 5U;
    tmp_msg_0.clock = 0.980095570285;
    tmp_msg_0.tz = -96;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JATGKQYYPJXYTCKXUSKJYCPHHQDNAGWNCIAZJPSCVGJIVKXFWSXFRMYLABXIULPOOCMQGOBUHYNFNUFLKBTVEQRBBOEVQRAXLEACMAZBKVNKNIBYUWZGGTLPQYKFIRMFMGHDLRVVPHMNEDZEJFDLHVTFHZVDSZTLPODSIZAETBHRGIUW");

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
    msg.setTimeStamp(0.618265706525);
    msg.setSource(51656U);
    msg.setSourceEntity(41U);
    msg.setDestination(10124U);
    msg.setDestinationEntity(247U);
    msg.type = 94U;
    msg.op = 69U;
    msg.request_id = 56583U;
    msg.plan_id.assign("DZIYVQEBCOWFHRNGSIWXHSDSCAXLZCNPSGGOGNROWTGPALSOEGKEQLWKXIIPMCHYUYWNFLAIICPZQCQWYEUHJWORTCKQLNXBSBEXDPFXYOZMHTVHLSFQIRSJPXOHYVUOLZXVHUFKEAPNBSTFZQMBWRF");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 64U;
    tmp_msg_0.op = 123U;
    tmp_msg_0.plan_id.assign("TNPXECOOBRKGEMRNYQZURTQIYFSKOXWXTOGPEKBGSAZRCNQUMAXBCQZOJHQHYNSFQZLDPCDWRRLJXUGPIDLGMRKGBAKFUBS");
    tmp_msg_0.params.assign("BMTHBRRLGGZJDFLXFLJGAUIPNUIVCHREUKRUJWMUUMTRTPVQPPCKXITKAZMZHEFVQJSDQTKFWGIAETWOJQFWCVSHVBISGIFEFYCUTVBKOXGZSIK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QRJIMIGWBTBYFLN");

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
    msg.setTimeStamp(0.343681638823);
    msg.setSource(1790U);
    msg.setSourceEntity(131U);
    msg.setDestination(45715U);
    msg.setDestinationEntity(46U);
    msg.type = 130U;
    msg.op = 113U;
    msg.request_id = 62231U;
    msg.plan_id.assign("GFMCNJGDKGVTMQWALDEVKXDMDXHTTTDTVCYVOTUZIFQARUUBSKOPTKWJXTLJUFQCAZWILNORF");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("QLKSDLHNUKIMKCZIHTJWDI");
    tmp_msg_0.message_id = 65238U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HEUSCVTNFBUZLFSUYANNXYHGDOOTJPXPBQSRYYISGXEQTLPWPLWDZJKCSUWRHNEUGMBNZRHLPOFNHUNAFXQCSPIOMIGWFAFDYQLEASLGINJRRQHSBITJXKQZOWKWJXYKQKSOMCRRXQTMLARFEMVHVCBDEINVYZMQDGTUTPXUMHREWOKCAOZJTJCMUMZQDCZXHIVVAJEFTALPIVVCKBVYEBASXWTJBWWLMDDKAHOGGN");

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
    msg.setTimeStamp(0.729491454282);
    msg.setSource(33334U);
    msg.setSourceEntity(56U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(160U);
    msg.plan_count = 50338U;
    msg.plan_size = 241198138U;
    msg.change_time = 0.297607432074;
    msg.change_sid = 52463U;
    msg.change_sname.assign("ZIFTIPPVSFXPJIBDWGKBREGJLBMFRAVGJANWKCHSJMLFYHEVXYJRAMIKPENSRSNLHTQFYOIYVIPWSGAWCLQXVRMGMZDFFHHIQOKHZCXWHTMPOVEXZAIRDGFWZNSARKMVTTXRFYBXZCUKJNQQVDMNNSDBIBGEUAUUHMHUNWPYKKUZ");
    const char tmp_msg_0[] = {2, 33, -24, 113, 59, 104, 26, -92, -86, 12, -57, -73, 63, 81, -7, -42, 88, -23, 64, 69, 85, -125, 23, 99, -12, -97, -26, -95, 121, -6, -104, 42, -57, -119, -37, 25, -49, 70, -119, -49, -23, 93, -55, 57, -73, 1, 119, 104, 106, -114, -60, -23};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IBQPZIVZKUEZEGJPLOJSNPEAUTBPQXSBFLSDQQWUDOFLSBCXKOL");
    tmp_msg_1.plan_size = 285U;
    tmp_msg_1.change_time = 0.642948652859;
    tmp_msg_1.change_sid = 60824U;
    tmp_msg_1.change_sname.assign("TCLQXLVGBTVUJCNGKDBHSDCZLPJWMADQCRSBHXPRZOBQPZUFJNPKKRXFSJYKCVGJBNEWKVYSOYTQDTZIRQGVSLFIPWMUQEXPXAPGD");
    const char tmp_tmp_msg_1_0[] = {71, -114, -48, 87, 82, 123, 69, 35, 17, 111, -119, 54, 61, -93, -19, 43, -11, 26, 25, -76, 8, -7, 89, 66, -111, 14, 48, 111, 18, 85, 125, 56, 123, 69, 122, -67, -75, 32, -70, -122, 27, -35, -54, 98, -77, 10, 93, 12, 111, 56, 53, -62, -64, -126, 120, 99, -109, 96, -65, -69, -108, -78, 19, 108, 29, -8, 50, -2, 43, 79, -91, 122, -99, 11, 52, 108, 87, -34, -27, -24, 123, -68, 44, 36, 77, -98, -107, 114, -4, 45, -75, 3, 117, -66, -105, 19, 113, 123, 93, -115, 19, -19, 96, 67, -24, -95, 110, 114, -65, 0, -11, -79, -117, -9, 114, 33, -10, -81, 94, 67, -29, 87, 99, 90, 9, -39, -57, -28, -39, -79, -29, -39, 92, -40, -96, 52, 16, -108, -86, 94, 58};
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
    msg.setTimeStamp(0.0814378777433);
    msg.setSource(61301U);
    msg.setSourceEntity(65U);
    msg.setDestination(30447U);
    msg.setDestinationEntity(110U);
    msg.plan_count = 36206U;
    msg.plan_size = 2999323584U;
    msg.change_time = 0.254758268756;
    msg.change_sid = 20212U;
    msg.change_sname.assign("PYEMKZCYQWIIAVSKYCCJGMBXDRYKBIHXGZJHXZNRVVSKTSBPLPYJQETORAAIWXUAQFHMICFMQTAHSMICDCVAWRKGMAUEGOMSGPLMLUMAZBKROWIJNJOEQNSZVWURCDGFVQWUITBILXIBUCXEJLSNUJFJGHSWEWATEHONVXLRXEFTPQRDCTZKKPOHVUBXKDFZNTLBYHYLT");
    const char tmp_msg_0[] = {-5, -60, 27, -51, -18, 118, 105, -63, -62, 31, 66, 64, 49, 125, -85, -54, 121, 87, 41, 10, -114, 16, -41, -56, 91, -115, 45, 23, 32, 16, 71, -125, 81, 118, -25, -113, -72, -31, -93, 99, 117, -54, 35, 101, 105, 121, 97, -6, 56, -57, -49, -19, -75, -11, 37, -116, -84, -10, 62, -57, 55, -123, 55, -110, -128, 124, 32, 66, -28, -8, 62, -111, -2, 31, 75, 40, -68, 43, 95, -15, -104, -116, 38, 68, 20, 31, -28, -9, 115, 10, 70, 9, 122, -14, 6, 112, -114, -51, -42, -2, -9, 55, 56, 109, -86, 2, 28, -107, -33, -115, -73, -80, 11, -105, -27, 28, -114, 17, 103};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TDWIESGJRUTSOVANWZLNFJEEOFORWXZCAOZLTBMBDHYKCTEFQRTLWNSYCRAPKHJLQJDKVZQPTMIONDSIKHAVAFZSDSBHWLGSRPLYILLXKDPHOVBMVWJYFEJDQENQH");
    tmp_msg_1.plan_size = 31464U;
    tmp_msg_1.change_time = 0.70893876307;
    tmp_msg_1.change_sid = 35354U;
    tmp_msg_1.change_sname.assign("WJESPKRDZCRMTLPKSKUYFONACCNJTOHQFELQGFCTBMLXUJOWBVRROYHIITKBJWWYFVPVDWLIGBQSWLNXEZEIDARBMCKDGNUYTIXFGMVYHGRDZTXYESBICQUYXKEASMWQHUNGGGRLKSVJPQMKALESAOXJUJAQMLNZRFPHSVICVBPMQFPDZBNFETNEUDBDPGVAZDYQMICZUXCYRWTTOEHXWOBDT");
    const char tmp_tmp_msg_1_0[] = {-74, -92, -108, -22, -82, 107, 17, -22, 71, -61, -114, 14, -5, 9, 66, 79, -35, 90, 92, -21, -66, -122, 15, -60, 56, -38, -12, 54, 24, 116, -114, 30, 64, -53, 57, 100, 56, -29, 85, -71, -34, -62, 122, -88, -51, 64, 85, 121, -2, 56, 42, 20, 64, 56, 109, -42, 30, -52, 0, -42, -122, 14, 31, -35, 83, 1, 98, -29, 31, -108, 64, -90, 91, 96, -86, 123, -23, 43, -82, 20, 26, -63, -96, 33, -36, 65, -58, 92, -41, -15, 75, -103, 55, 101, 77, -11, -31, 57, -18, -10, -47, -116, -18, -26, 2, 105, -93, -113, -9, -107, -11, -69, 104, 87, -80, -89, 86, -97, -50, 32, -108, 113, -9, 79, 16, 22, -46, -41, 4, -43, 17, 40, -127, 79, -121, 63, -29, 121, 82, -33, -61, 10, 83, 45, 31, -118, -43, -37, 5, -20, -91, -34, -10, -81, -115, -106, -128, 10, 14, 122, -115, 85, 14, -12, 32, 118, -33, -118, -114, -86, -127, -16, -52, 19, 17, 88, -38, -115, 100, -103, -23};
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
    msg.setTimeStamp(0.707134072683);
    msg.setSource(25108U);
    msg.setSourceEntity(53U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(138U);
    msg.plan_count = 8962U;
    msg.plan_size = 3989415197U;
    msg.change_time = 0.401696344461;
    msg.change_sid = 31637U;
    msg.change_sname.assign("YYADKKZBDLYHKICLFRNFIGCWSNPZWFCHPAVHUALOBVFYRLCDFRZOMOWIAMAVHDEMZTWTLYJZQSLBUGGVIZIYXFZGUJELOWTDGRYIRSIHMRIUUKNEYXZMCQHQXBSNOPASJBRSRNKCCWDXQWCLEPDNZUPKOFYQGQCGFUVTVZLAESMHEXYNVHVDOKETFFJXOPXAQXHLSKRQTJBPVVWEGRIJBPUECAPENMMWKUATWJBJQSJOJNBQDMGTMXKOTTS");
    const char tmp_msg_0[] = {-95, 113, 121, 115, 62, 62, -112, -54, -105, -86, 105, 65, -52, -74, -18, -34, -92, 33, 30, -97, -128, -98, 55, 35, -8, 126, 98, -36, 85, 48, -28, 101, 16, -83, 59, 42, 78, 20, -99, -126, 57, -25, 92, 87, 46, 19, -41, 102, 106, -121, 20, -113, -13, 90, 117, -118, -96, -35, 24, 6, -10, -112, 4, 89, -21, -117, -32, 98, 71, 60, -69, 9, 85, -95, 10, -120, -35, 77, -64, 88, 27, -99, 112, -22, -24, 42, 37, -62, 72, -108, 65, 73, 106, -99, 11, 21, -121, -108, -51, 57, 80, -68, -6, -33, -59, 71, 126, 71, 88, 85, 44, 83, -77, -120, -36, 87, -100, 84, 70, -35, 119, 122, -45, -120, -69, 15, -125, -1, -39, 39, -39, -104, 30, -89, 26, -57, -97, -98, 47, 74, -70, 56, 14, 66, 20, -111, 35, 1, -114, -78, -45, 16, -25, -21, -72, -36, -113, 76, -126, -59, -98, -128, 46, -21, -71, -66, -51, 12, -53, 91, 81, 73, 115, 119, -92, 97, -37, -120, -107, -112, -46, 103, 91, -90, 57, -126, -85, 15, -70, 20, -3, 51, -57, -30, -90, -18, -65};
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
    msg.setTimeStamp(0.173345534345);
    msg.setSource(57756U);
    msg.setSourceEntity(174U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("FKABMYEQKEAILZZJUWFIJCNDQASDXUOFJBPCNSGATDIFQODCOCNZTNTFHJPOGDPRMRBNWYXLVVVDAMATJXLGCUHPZEJKRBTHMXWJMPJHIYSDXQKWBGWSGWXMSJBNDBWY");
    msg.plan_size = 5777U;
    msg.change_time = 0.13216999732;
    msg.change_sid = 62937U;
    msg.change_sname.assign("QLZLOPMLUCJIOFIHBMWTEJAQYUXUZOMZAOWSIEVHOJNPAKLPIHBZUDDYHBMFNRKOGSYGLMRXLAOSRPWBNSPGMX");
    const char tmp_msg_0[] = {5, -1, -71, -82, -62, 10, -86, 85, 122, -7, -112, -11, 61, -109, -42, 112, 11, -127, 54, 102, -80, -38, -100, 30, 7, 117, -41, 106, -51, 120, -35, -78, -50, -107, 105, 108, 88, -21, 114, -127, -28, 52, -122, 61, -125, -35, 90, 33, 74, -72, -20, 86, -60, -36, 66, -28, 126, 9, -56, 17, 57, 33, 63, -26, 77, 83, -88, -52, 118, -128, -102, 19, -120, 60, -101, 28, -28, 7, 100, -80, 10, 91, 71, -44, 38, -9, -99, -32, -75, 94, 98, 2, -4, -116, -8, -121, 63, 96, 95, -74, 66, -128, 126, 94, 83, -103, -119, 4, -98, -126, -59, 115, -93, 82, 26, 21, 108, -69, -11, -58, -34, -78, -77, 41, -23, -122, -123, -46, 109, 84, 83, -119, -82, 40, -21, -91, -119, 86, -16, -109, -46, 46, -117, 37, -128, -21, 12, 53, 126, 6, -35, 104, 79, 122, 99, 22, 25, -58, 51, 54, 79, -62, -9, 103, 46, -34, 31, 108, -62, 101, 121, -125, 41, -83, 53, 62, 71, -26, 95, 120, 97, -13, 79, -51, 22, 72, 28, -39, -13, 113, 3, 98, 91, 74, 43, -31, 83, -18, -125, -90, 100, 18, -21, -23, -90};
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
    msg.setTimeStamp(0.139632270406);
    msg.setSource(53085U);
    msg.setSourceEntity(163U);
    msg.setDestination(6041U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("IJIMFGXTASLPUCIXMSJXXMVOEZWMBEGUCGQSUJQMEHYOVEVVYFKYOTOIYRLYBGYQCEBULTBDILVRCNGWZBDDGKQVFJTFFVPNYIHIARXFUIRWJFNNHDONBVZRUHNZGRHHDZPPMALYQIQAMBKDSSNONXXDGJAAXWACWAJPALSCK");
    msg.plan_size = 61899U;
    msg.change_time = 0.424260391353;
    msg.change_sid = 60492U;
    msg.change_sname.assign("BQRBPNTNNPKSSEOYMAWRMHZBHGSSTSDUTCFMEDNOIHICKZCVBTUNNEDWQMZCFROCLNCDBLBOJNOMDQJGVRFAIMCBQUYXACVQCSLHXYJJREPFWIFOJMXRFSYVEAFZXAADROWHLWKVYVUVGZZLDJPPTTKW");
    const char tmp_msg_0[] = {-127, -8, 63, 72, -12, -115, 11, 85, -32, 79, -117, 6, 21, 81, -28, 10, 122, -63, 69, -46, -125, 47, 91, -40, 113, 40, 69, -78, -75, -27, 63, -75, 40, -32, -59, -127, 67, -3, -25, 37, 72, 125, 83, -15, 63, -90, -26, 25, 10, -119, 118, 18, 23, -76, -3, 64, 32, -103, -22, 114, -46, -32, -83, -67, 72, 83, -16, -76, 123, 65, 17, -97, -41, 124, -24, 32, -41, 50, 48, -5, 3, 0, -127, -2, 74, 111, -20, 52, 91, -117, 75, 36, 111, 106, -75, 42, -107, -6, -27, -85, -32, 74, 34, -78, -13, -52, -60, 9, -49, -68, 38, -114, 50, -37, 111, -92, -60, 78, -52, -71, -106, 69, 113, 81, -95, 68, -48, 72, 37, 125, 46, 7, 95, -40, -52, 126, 81, 118, 87, 21, -13, -103, 96, -49, 54, -20, -106, -84, 5, -79, -96, -102, -3, 123, 87, -112, 76, -5, 59, 21, 57, -39, 18, 117, -111, 73, 37, -62, 109, -5, -98, -126, 117, -109, 10, 101, -78, 107, -78, 34, -93, -110, 40, -117, -64, 123, 106, -124, -93, 100, 27, -22, 98, 86, -115, -103, 70, -87, -73, -53, -120, 79, 56, 42, -111, 60, -79, -120, -24, -79, -84, 62, -52, -60, 51, -59, 26, -124, -90, 122, -11, 26, 18, 47, -1, -18, 49, -103, 92, 100, -126, 74, 47, -64, 34, 70, 88, -2, -17, -19, -1, 120, -34, -117, 116, -128, 102, 92, 39, -80, -105, 30};
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
    msg.setTimeStamp(0.24223594838);
    msg.setSource(55578U);
    msg.setSourceEntity(224U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("KGLLLZGLJHTBTYGAYMOHHUQCOFBEEYUSGODOUXVZHMCPMOFXFQSUNMHULIDXBWCQSKPWEJLKLZWLACNNPLWCRHTEMYQODRHMBFVPZJAEJQDSHGNTEVTIRIXTVEOWGJCNSE");
    msg.plan_size = 42029U;
    msg.change_time = 0.936102385788;
    msg.change_sid = 64561U;
    msg.change_sname.assign("GJERQVJCRNPSAOADZDRFQLDQCGOYTIJQLMEGCWFVVMOOJTLEJTLCQDEEWYBTAOPSKDZICGTEFKXMLHRASHIDPIYKJIUHZWTBBIEWNPUFOZUVZAPBHUMKDFYGQBTYW");
    const char tmp_msg_0[] = {43, -120, 119, -56, 76, 27, -124, 101, 43, 100, 50, -117, 3, -83, 87, 30, -45, 10, -14, 83, 36, -16, -63, -16, 39, -7, 121, 111, -3, -71, 31, 76, 92, -42, 84, -74, -13, -19, 90, 121, -35, 125, 87, -108, -42, 101, -73, 25, -86, 37, 56, -84, -92, 77, -109, -66, -24, 15, -110, -30, 124, 20, 84, -105, -81, -111, -88, -4, 106, -27, -12, -113, -41, -3, 94, -22, 10, 37, 31, 112, -60, 85, -65, -50, -26, 60, 102, 84, 41, -3, 73, 5};
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
    msg.setTimeStamp(0.469450539101);
    msg.setSource(6433U);
    msg.setSourceEntity(2U);
    msg.setDestination(6559U);
    msg.setDestinationEntity(46U);
    msg.type = 133U;
    msg.op = 28U;
    msg.request_id = 64381U;
    msg.plan_id.assign("OSLWEQVGIIUKPNJVGTWALNUILBPJGCXGYUXEUPVSVCDDWIZTISUUEVRMZKREQSHPFMZSYSZQIPSCURFXBKMNEFNZFDWEODGCHCEWSQJQODTMJHGXRCFVWAOUKYDALXPNURNKLLYQCXFAHALLZVMAXXHDFOCKRUQGRIJKGXBEYAHJFJNWJCTOVBVTKEBLJBAGOOKZRBQRNTESYIAVHMPPAILWWQYTXONDPSTNWQOFHDPRMBMMHBTYJIB");
    msg.flags = 35509U;
    IMC::QueryEntityState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GAEFGIFWDANWYUTKKWNGIGWNHCMEIBITIHSEHAOQREWQOAZMQFQPHXYQZSFVTTTSVWRCCOAKPPKBOMQSTQXDDPQBDYHLFHZVKBRJOVOZSNYWAYIFRJPXRHCBYCWUGVCXUDLYNSBHSKUELBRLJAWEDXOKAWOJGIFJSBCGCNPOOTZRUVLGVKXKCVRNVDUBVEXEXZYGZXMDJYGUZYUPDRMIMFTNTMP");

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
    msg.setTimeStamp(0.517933654434);
    msg.setSource(26470U);
    msg.setSourceEntity(78U);
    msg.setDestination(52320U);
    msg.setDestinationEntity(82U);
    msg.type = 26U;
    msg.op = 172U;
    msg.request_id = 57615U;
    msg.plan_id.assign("CRFABRMVGOSNKKPRGMXPUQOIXTMVVYUNKDIHAYGNREPUZAOQQDCENLXFEHTHDTJYJKGABOLSMSFHIJWPMGCCYVUAJTPFMF");
    msg.flags = 15258U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.err_mean = 0.330404701408;
    tmp_msg_0.dist_min_abs = 0.13768359454;
    tmp_msg_0.dist_min_mean = 0.809840382678;
    tmp_msg_0.roll_rate_mean = 0.865191115842;
    tmp_msg_0.time = 0.136743848748;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 191U;
    tmp_tmp_msg_0_0.lon_gain = 0.836856710786;
    tmp_tmp_msg_0_0.lat_gain = 0.93542875411;
    tmp_tmp_msg_0_0.bond_thick = 0.65082662173;
    tmp_tmp_msg_0_0.lead_gain = 0.178175911468;
    tmp_tmp_msg_0_0.deconfl_gain = 0.938209005831;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.298596396929;
    tmp_tmp_msg_0_0.safe_dist = 0.990617566675;
    tmp_tmp_msg_0_0.deconflict_offset = 0.0156019187448;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.277326139027;
    tmp_tmp_msg_0_0.accel_lim_x = 0.337503618971;
    tmp_msg_0.formationcontrolparams.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VEPWJDGORPBSPWZFQFZZFIJELTSIQOKCTFYROFVCDCYJPSCYUHFEUBCYUOLONXEYIBKPZLXWMEJRGLLIRDMIKOLONLVZMVCSMKDMSTVUTEXWHJMHGCUCUYVBAXENFWJDAQSBNAIZQKBRBTUQRYJZANWMJNJIHESVKCMYZGUNASWWDVRAZJLPQXKDHXDAVIZNGUD");

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
    msg.setTimeStamp(0.200829567426);
    msg.setSource(59647U);
    msg.setSourceEntity(184U);
    msg.setDestination(26455U);
    msg.setDestinationEntity(162U);
    msg.type = 251U;
    msg.op = 123U;
    msg.request_id = 46307U;
    msg.plan_id.assign("GHFCAVOOZYKBGJMWPGLYSWWHGSKXSCUBZITSOOHEYTFEVRUMDGVPXWMIQEIIITPXDXSPTPAQBJVFDYSCJZCNBSFOSNELXWLILNLKCKABRNUHFNYLZUMFOIZNJWDIJROBFFGZUCXDJEADBJJQIBMKAYNPFYCAMOZPEQAEZCRVMPGKQYHLVAHTUNOSXGXAPOWRJRQXMYNCHCUEKQWREMDGPFDWRDKVGUTQVLBKZNQZVTKWVRUTJDAQLYTH");
    msg.flags = 4356U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 240U;
    tmp_msg_0.op = 183U;
    tmp_msg_0.plan_id.assign("XHFJUOESRSEZOFCTMXPZOXWAABHZSCGOVUJSPIWIADZAQEEKLJYAMONKGRXLBMYDGROXRTADPTSBCEZNPAHVUBHXJNPTLTDDVDYKFHOM");
    tmp_msg_0.params.assign("OTXXBMDDPKOWNYZAMVOZBJHWWMKNKDVTQLSWBIRPDADBCIIFEOIJNMPEGRGKMBBKUQOIXYFGYMLVZCLHFZDNLQPVGEYBQLRQFKFVFAXEHKDCUYGLHEUKMJMHERYQSTLPAQJROTKVZFUWJGWGIYGXCHTXS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BYEYFTBYNTSNXGWTISTEOHUVMRSP");

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
    msg.setTimeStamp(0.281431975206);
    msg.setSource(15778U);
    msg.setSourceEntity(125U);
    msg.setDestination(42393U);
    msg.setDestinationEntity(239U);
    msg.state = 123U;
    msg.plan_id.assign("CMROWYPQFIRGEWEGFJOAFXQCUBNODNTXIGCNMIWOZBATNHWEKYZLDPPUKZOUSXGKIJLKTNHOXOSMJ");
    msg.plan_eta = 1313028625;
    msg.plan_progress = 0.97431014015;
    msg.man_id.assign("PCHEKIYAUMLBVMCRSTUQQFOGSNVGEQNZBPBLYPCXTZXLUUTHOTJAVGFKVBJAPTNPSTIONDMOTDLCOKZCJLDWIGHAHTIEOYALYGMOFRVUIPKQQXRDYQCIMCMLHLIUPNCSFPRIQNEXWGFEBUXVSZLDKZVEVKXXGYOJOUDQPHKCRDURDJHFWTYJSBRA");
    msg.man_type = 6239U;
    msg.man_eta = -1565157965;
    msg.last_outcome = 103U;

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
    msg.setTimeStamp(0.510207162151);
    msg.setSource(64215U);
    msg.setSourceEntity(246U);
    msg.setDestination(57332U);
    msg.setDestinationEntity(198U);
    msg.state = 76U;
    msg.plan_id.assign("JCGPUTBDYAOCOOFGN");
    msg.plan_eta = 412770986;
    msg.plan_progress = 0.262467925743;
    msg.man_id.assign("MMSTGOTZYMLRLCLLPUGKRMNMWHGZKWKUAIJANMCWUFZDOGHOKTXSQEKBSUSJEHVSRPFEHCWDWJIYCOYPHWLAYKCHHJKHFLXDXAXTUXYLPOSJIVWVCBKDFGUZIHLPKYRSAOAEWNDYAIZTGEDJSBGXQPENIWJLQNZRJBSVVUMCDNBZZMVQCEFQFPY");
    msg.man_type = 40137U;
    msg.man_eta = 49537402;
    msg.last_outcome = 142U;

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
    msg.setTimeStamp(0.117448275433);
    msg.setSource(2996U);
    msg.setSourceEntity(52U);
    msg.setDestination(12349U);
    msg.setDestinationEntity(131U);
    msg.state = 171U;
    msg.plan_id.assign("IFIFOCURLSJZCWKQVRFJQTUYEFVBGSKZBNDJWPBAWDZKTOXROGFLUNRJHGVXVEFFMLRYYOGEKOQMBGARSKNTXVXPZOAEPATRGIIPEPYHEHRH");
    msg.plan_eta = 419214132;
    msg.plan_progress = 0.957426925831;
    msg.man_id.assign("YJLUPXCHZGONYKGGMJIJDSZIUCKLVTKLMBLNMGMWUOIDFKARZBGEXYTICAPOTHFIBSPSQAFTPLDQWONEJFFUHHJEBNXXAXMNBCHRWQCTXOAPCKDZBHPWQVBTYRQYKXZPKNCNMEOFSSGTKSDUEMXJEO");
    msg.man_type = 2068U;
    msg.man_eta = 515334787;
    msg.last_outcome = 90U;

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
    msg.setTimeStamp(0.822216513105);
    msg.setSource(39020U);
    msg.setSourceEntity(146U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(155U);
    msg.name.assign("QJNYPSFWPGSVEJEMOUBXNONOHXPXWFDZCBSZLPREIZRUHNQPGUYWLELDBYEQUXMOHECJSKLLNFVHIMTXRHWARTVASIVKMUNFWYKYILJGVAQBSUWJDBAXDXABBTESIRIOFQKFEQFWMUWCXLOAXBLQPALUKYVI");
    msg.value.assign("VRZLCFBTHI");
    msg.type = 239U;
    msg.access = 236U;

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
    msg.setTimeStamp(0.981209343097);
    msg.setSource(46892U);
    msg.setSourceEntity(120U);
    msg.setDestination(1020U);
    msg.setDestinationEntity(138U);
    msg.name.assign("IOIZQGSJMGDTKCMQQTWAPQMRLMVQVVQNFQOOOBYVAFDIKJXXUSZWWDHTDQHHMXNPEACGJZEHAAIUVYSRBVELTHOERLJPEDSUBGXXUOHPSPBMXJECPXKBNJRFAWKCEUAULKXERVOIFYJZKISCAGTNYPGWWZYORLZCNMXIRNQKVFGATYJSCFFETPBKGSZYNSRJAFYDDORJRCCBHFFNGOYLVWHBTPZHQIMZBTLGLEIILSNCU");
    msg.value.assign("ZTMMTMNBZGCEWDWTDKAPEBGIPGBAJYDLUQCSVXEBHTHWIVOLPXSUGYGOLTZFFJWEMMUOOVDUUHYYRAXLWHSKANNFAGWIRYOEPQDISZBHBTRVULLWGSAKDCRKENEPOIKDNZQJUDJICOXBCDFEPOMAIVJTBQYQANBXLJROMXWVZMFEYPZGZPTJRXKJJPHSCZQY");
    msg.type = 5U;
    msg.access = 221U;

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
    msg.setTimeStamp(0.0888387781544);
    msg.setSource(4837U);
    msg.setSourceEntity(42U);
    msg.setDestination(13614U);
    msg.setDestinationEntity(146U);
    msg.name.assign("JINDTZMTMIFUUTXBXRKWQSWRBQKLEDHSDHXZIAQCFGEOJGBOCGYGLCDNZYIMRPQYLJLBSMXMWCIHHSNKCLHPGIWBEMYTQKIVGQVZFZEPRGKAXODAQVIQRPLVJDUHOBOUNZOSFSJWTEJKPMJVOYODCSVLSRMFAKPZYPGBUDTBWXWAZREBLKAFXNZFIEMXVLKVNUVTTUUUHPTEZTNAFYJRILFHRDSSVAWDROPBWNGXUAPNNO");
    msg.value.assign("IUQCCLNNTVMJFXPDXZEQIXKGBHPKSQSLLKETOXMCHRMUNVWWGGBQPJCCHAORVFQB");
    msg.type = 164U;
    msg.access = 125U;

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
    msg.setTimeStamp(0.103956171065);
    msg.setSource(58043U);
    msg.setSourceEntity(166U);
    msg.setDestination(24494U);
    msg.setDestinationEntity(177U);
    msg.cmd = 101U;
    msg.op = 200U;
    msg.plan_id.assign("SZMCBOGEVPDDJIFQMTRXRLWAIKZENPMRCWBAMCDWZGXZUZDUGYSVVUGRCAQLNPFYMAAITAEMZEKYUVEVIJXJRHWNHPFPPXSSVVCBMSKSYDLKDKLBQADUDRXWGYNYYWUPZVBXN");
    msg.params.assign("DZUYEEHRPATACJTPGNKHKIQGPBEPYZGOJLPFRFDKIJDAEWDLUUBXQZRNBPVWCSPLBTOMAOULKFGHDQWAVJLNTOUSTFWRPATJHQOUBWWIHOSDMMWYDVUVCQBBHHKHZNYHVUEJC");

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
    msg.setTimeStamp(0.502673104583);
    msg.setSource(43883U);
    msg.setSourceEntity(235U);
    msg.setDestination(8558U);
    msg.setDestinationEntity(53U);
    msg.cmd = 223U;
    msg.op = 166U;
    msg.plan_id.assign("BUJILNILQVZHNFJXAASSQDZRCVPNYZYTOXXOLUBDMFHUKPBUVZWMVNOFWDBKWLEPDMDMXQJMRJECEJOFIOSSUUMBQEIDGNKZPSDKADYBSBTRYZGYBNGCFXOJJCVFYNYWGQBKGDAFTZGCJMOPREEEEHEEHWXTIOHWGMXCHPZPVSWHSTTRFQVQGWLI");
    msg.params.assign("SILSSOBOMBVYQJURLPYKMCPEGNOZMBIQSRMJUPGHGXXLSNCBQLDSJEJXGQFIDPQFXRATRBONNTYXMMVZCFYCCKZTVFVRJTGUKWWCLOZFIGFYFZKOJYBUYSPEUETSKBZHODBUVDZVWSBIYWCALQMOQZKKWDNHAXLRX");

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
    msg.setTimeStamp(0.287331954461);
    msg.setSource(10867U);
    msg.setSourceEntity(116U);
    msg.setDestination(6103U);
    msg.setDestinationEntity(104U);
    msg.cmd = 81U;
    msg.op = 201U;
    msg.plan_id.assign("BHAKBKLGBESJPGRUIDQPPVSOZOCRVUXBMFREPIYDCPSMEMUPIEZYZEHWJRUQLXTTALCNWFFBBMVDWBHPERMHKRRSGNSQCQOATQGDXWVKNRTHCTECBPLJZTZGKNVVYNYCRJFYFOSLUDTVFZIZOOMXJNNGFLNFDVAAXXFXSPRKYIWIIJOQLAYEWYZUIDTQEHJAJMTHEZQMTYFIZNJCXLWLWVKUSOQOGAHDWAYAGQGPHMJC");
    msg.params.assign("INSFXNVBFMGLVIOTRQGJZRWZYJJMOKKSFBKOEYGYLAUOPWPTDFGVEXRWDSXBKKXREUKXPZBJQJYCQNLFFLVDBYXYHMMKTDETUGPDEBFZIGEIEKLADONJSMVTXACNJCUUOUZREGBHGSVZZBOSDWWHIQFJSVCRWLPJHIMANAHIKPYAQUQQUVHDWZXNNRYJHIQLTXMUQPFETXBENTUYDRGZHCRTWDNASZOTHMCPIOGAIVARPCHSWLBQKCM");

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
    msg.setTimeStamp(0.755121698018);
    msg.setSource(41859U);
    msg.setSourceEntity(225U);
    msg.setDestination(24607U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("AEZYFQIAOBHEQSJALHDQDXLXQJCBPVHVFSIBMUKELXRUYZVMWPDJALUKYXHEHLCHBGBVLENMXNHYKTQPENQKKOFMFXGWLZHYGPCLCSVBHXTREADGOPRZZARZAPPUTTLKYAGWQWCWYBNJJCJRIKDRGNVDCWNSANMCFIILFTUP");
    msg.op = 134U;
    msg.lat = 0.00773324901112;
    msg.lon = 0.195216074272;
    msg.height = 0.705667805083;
    msg.x = 0.209158085008;
    msg.y = 0.637959373119;
    msg.z = 0.564001632866;
    msg.phi = 0.0869957689531;
    msg.theta = 0.911346729333;
    msg.psi = 0.723442132754;
    msg.vx = 0.580139706454;
    msg.vy = 0.373065128603;
    msg.vz = 0.161817376465;
    msg.p = 0.285216574204;
    msg.q = 0.88416123148;
    msg.r = 0.678097856062;
    msg.svx = 0.324165445057;
    msg.svy = 0.694427288804;
    msg.svz = 0.922152079996;

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
    msg.setTimeStamp(0.485255433013);
    msg.setSource(42054U);
    msg.setSourceEntity(159U);
    msg.setDestination(18830U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("QYFTVTSLORRGPUNEWHJEWCPZMIJTLGKMIWYQMULEKHFDXAXPQBSYISNLHCNROWFGANOPIUTDBOXAZATNHQNVLCDERWVMIRIYZLGITXBXFDZRKPFAQJYJEXMMLAG");
    msg.op = 166U;
    msg.lat = 0.916612833577;
    msg.lon = 0.16229926682;
    msg.height = 0.394453867654;
    msg.x = 0.243432707019;
    msg.y = 0.458585677118;
    msg.z = 0.236327698914;
    msg.phi = 0.442568460866;
    msg.theta = 0.751183669915;
    msg.psi = 0.47387974494;
    msg.vx = 0.219981384797;
    msg.vy = 0.0627632883702;
    msg.vz = 0.399425128699;
    msg.p = 0.655302148929;
    msg.q = 0.774901033116;
    msg.r = 0.434309958692;
    msg.svx = 0.931639703658;
    msg.svy = 0.783337713639;
    msg.svz = 0.594833017401;

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
    msg.setTimeStamp(0.380077602767);
    msg.setSource(62736U);
    msg.setSourceEntity(26U);
    msg.setDestination(41211U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("OBYZTISDHIDDTFXYLJOXTBFPFBONKMYTLZDPVVUQSKZYPKWNKMYMZJJLHKSYNRGRIERADROIRZDVWVOCPUKSWFEKGLMZQFUXEGISVCASEAQMCNETPADCAULUXNQJPWQHHXNWFLZUUITOIFDPABGJWAOKRNSVTMGECHHEBJFQPSHQYNIGCWYTUQFRYWGACJVDSXOYBKA");
    msg.op = 180U;
    msg.lat = 0.106664861426;
    msg.lon = 0.316137161335;
    msg.height = 0.804116379208;
    msg.x = 0.69650560272;
    msg.y = 0.797000008973;
    msg.z = 0.373729568725;
    msg.phi = 0.140323820306;
    msg.theta = 0.987360724778;
    msg.psi = 0.230207904228;
    msg.vx = 0.251495454719;
    msg.vy = 0.79652726506;
    msg.vz = 0.334588538972;
    msg.p = 0.776424854598;
    msg.q = 0.945365890284;
    msg.r = 0.509401337337;
    msg.svx = 0.596628729965;
    msg.svy = 0.983722963039;
    msg.svz = 0.0660672598519;

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
    msg.setTimeStamp(0.733344966663);
    msg.setSource(46505U);
    msg.setSourceEntity(127U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("OOXQOJCSNNRRSOPBKBKJQFWTWNBWQENHZVERJZUMHUHCZUTCYNGTADDLMWFAMPZULUMKDRTHGEAYGLWSEMQDWSFMWALRDCY");
    msg.type = 220U;
    msg.properties = 105U;
    msg.durations.assign("HLQFWRGLWQBSXIBJSNBTHINOODKKQSMWLDHNLGCFRBXAWEPEMEYZUKMADSCYWYCNNLJNYPIVUYPQJWZWUHJGIAXVNYMXFJILMOPATRNITKLPRZRYQFTYBEKASSDKFNDCJGUCSEGLMPOVFHDMETTXSHJGMGETFLQEDOJHOFVRWUIKZLXPOURFQEKJOIAADCPCGSTACSUYZBRVGFTOVUBOZRVIWQHZUXAMDZZ");
    msg.distances.assign("GCTDBHLZTPJNSJHDLVADSUQQLLOGYMVFNZHDAKAMYBQSIDEVOQFVIMIDBCPMZFFQCKDMSQNRNWOQZRZWZRUFURRJXERIESZUNUUPOCHJHAYXPTTTQGGGMLLFKEXJGPIJXPJBFPYHWIWEBFBYAKESRZMYBOEFWWVJKCVHVOVKORPXGCIDXAWYNLJMOHJSFXKBBPZMV");
    msg.actions.assign("SKYPDYJSSFFSQEHWJETHTNOGAQLJMWLNGDRRKITQVDOGOIKEAKWTVIVVUKCCRQXIYQQQHXXGVNEEUVMCDNTPFNNJZYLJXZDBYFAOSAWHSOBTMXRSOSDETLCTAQCOCAMXJDRUQCHJYHEALJNMVTRYKKUIOPZPROWUXMRUWDLFLGMUKBGWZIGCWNEAPHDVZOXZILMBAMSCMVJIHLRXPYKZUUAJGNUFZSFFBNPTWYIPZ");
    msg.fuel.assign("MKQRRDELFSRLEZPCBHIJOIUHLTPYITHSGXSAXLZALXGQVJPSYBUDWYOCPOUKVJGKRFDKBTXWIJTOVHMGAZRRKUMMNGSOEXQVWHNHXFXFVQBBUAIHKNCONUFFDTTFJDWBDPHZPJGQVEIXMZCCKUBQPERACVYZVFJBSAMHTRAJEJOGPBOZOYSYCRERKDAMWUYBL");

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
    msg.setTimeStamp(0.126905266921);
    msg.setSource(44064U);
    msg.setSourceEntity(45U);
    msg.setDestination(43528U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("AKTNXGIIQJGXIRNLMFLLSNAZNQREABUHW");
    msg.type = 150U;
    msg.properties = 196U;
    msg.durations.assign("RGTIPLNWHIWZCLKYFAVMBWBZMOZKBDGMEYKUNJVPXYCVOKYRYLAHJQEEITKACDGMZQMTSVBNRKLHIRUIYZFDOKRBDQIVWLVUXOMWJOHAHKICTZSZZUCVNIDBLXOAJVEQWXAGZFHFTLCABDBEWBNPEMWCTCVSYFXSQREOEW");
    msg.distances.assign("MSFFINOEZTCMZIODENPGUPLEHDGZJQQBXCJBWQTMTFUQICVNZXPBVYBECHFTWQKAEASYUSBWRDRRRKRKZPGGCXYOVHPWYAJMMSHUFLTSNNPYTCDMWRRKPDKSHCXTWSKOAJJIXDLVJLZVFDJJFHZFGYSUOLGEMEOEHGDOJINKZAVXNNMXUQHLEPZI");
    msg.actions.assign("LYJDPQZOQFYKHJBGRZGGVLFXAXOINGAZZNTWNNEEPNLUFYYUULNDKVYFDRPWXPXRETIMRKUBYHACIVPSGOWSLEBJNMKMCCIOQVNFHTRFICJMECAHAOHBIXG");
    msg.fuel.assign("ABULGUOMDVKVHWAYINFNWTDTKEBDZJDOTIVAZWYDYFSXYSMJMPOGNXCLQFERPCAXRZZPZTNRHHMKARMPEUDYEIPZBRMLMVSOCFOCLEDLNQSTSIQGFNJCNDCERG");

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
    msg.setTimeStamp(0.98262191708);
    msg.setSource(31743U);
    msg.setSourceEntity(25U);
    msg.setDestination(49384U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("SUFOGHFUWUCJBTRSZSNGEYVUJEZWFVURKKBANAJPCMNMRBDDQJVGVLJQPIIVYLYZIAWNQBNRMXTWYYWISFNTGCFAAXPDBRAPKCIQEIHFPRGUAYDZBEHOVIMQTTVETJLZMLHAEXEMNFOBJVCDHWWUSPLJURLXGQKO");
    msg.type = 193U;
    msg.properties = 136U;
    msg.durations.assign("QMOOCCXXZACHFAIHLKPZYHIULMZDKRNFZOXYXTNJCBNYTZYCJFFWCUXWDVLUQCIFIYDDFUGNPZRBZGJVUVNEWUITTUADQEQMVSPYGPKZGSILDBHEPUVJYSJSXMOTRYLOEQC");
    msg.distances.assign("RGWISOHEREFZKLAJXVFIQBFNTYIKGUWYOOOOPYJALLQYRRTVQSUVBVYHWEZRTI");
    msg.actions.assign("XLHQRIJPIMNHCHFPNXJNNCUQEADNOCYQZITAEQEXRLJEINVCRQYMTUQTGEHWAYLFRBVXBRVLMHBKYBRUMVPJGRBLUHJBTLIYHFOTUBJDUFKKOKFEFVZXSGACIEYHPZAFSTWWQVLNXHSGDFKLEOLIGUMZDYMVZNX");
    msg.fuel.assign("CECRGSZPFSPXUVOSUCHWAHYYYHFQIRWBLEPDMYOTCSFZLIMRHSQTVCDOAEQLFEEYAIMFZBQNXBAJVCHMVEBODYWWPGRLRHIQMPKARAMFGKRDDUSKDNPOVQJZBAEWDWJKEIXKPCEGZBHTUMRXNBXKZYTQNSYDGWGXMAPVRTNZQYUOGT");

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
    msg.setTimeStamp(0.831148941275);
    msg.setSource(24984U);
    msg.setSourceEntity(119U);
    msg.setDestination(33266U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.581879476287;
    msg.lon = 0.393091212252;
    msg.depth = 0.618084765785;
    msg.roll = 0.890448592256;
    msg.pitch = 0.156763420365;
    msg.yaw = 0.708730282026;
    msg.rcp_time = 0.933270771659;
    msg.sid.assign("DNVVDFUFVWRGIZOZNGGPPUHZUGUQCENCSIWNXFBKTCJNUUEWXGMDTOVBYNTRYDIWWRSCMTSGHPPCAHSDJARPXMALIZMTWEHRTMAUUWBALWTREVJNBOJQOJQKZVWUHYPQJLNRYAAKEPDGLEPKXAYEDAJOYZWYLEXKVRQK");
    msg.s_type = 35U;

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
    msg.setTimeStamp(0.358838557511);
    msg.setSource(64477U);
    msg.setSourceEntity(23U);
    msg.setDestination(42496U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.756441741412;
    msg.lon = 0.271168624593;
    msg.depth = 0.158048836267;
    msg.roll = 0.941660272736;
    msg.pitch = 0.219540957989;
    msg.yaw = 0.343629558364;
    msg.rcp_time = 0.0168481838394;
    msg.sid.assign("OLHWFVJDWPXIFDYEGGVBWVZWNKTPFDWBYNCRDSBMMWGRREZJARIAFIJPLZQDNAQKTZZDTOAYZSGUVSLYOPTLEMICGFMJOGKKIKRHSVLUCMKNYIANAURELJPMPJSBJKIBQXTEBUVNQOYSGUOQMIGXXCXMBXEPSLDKYFROHRGCQZHEONKHDBQWCIBCYJANZPUAVTUFV");
    msg.s_type = 40U;

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
    msg.setTimeStamp(0.843387018566);
    msg.setSource(47674U);
    msg.setSourceEntity(84U);
    msg.setDestination(61856U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.541709559636;
    msg.lon = 0.735249897595;
    msg.depth = 0.116580982103;
    msg.roll = 0.756051049111;
    msg.pitch = 0.283924743843;
    msg.yaw = 0.927322040501;
    msg.rcp_time = 0.284736744487;
    msg.sid.assign("BYTCJMPQOSCRAOSFXEQLCZUWMLGRXSAAOQYEHQZULSXXADFHMNIEXEZARGKGNNEXGKTWDPNHVRXJJIONBLTBVFKVOMMZCNVCYTIISIFDKJUTZNSUHLYBVM");
    msg.s_type = 41U;

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
    msg.setTimeStamp(0.183937326897);
    msg.setSource(5345U);
    msg.setSourceEntity(157U);
    msg.setDestination(1844U);
    msg.setDestinationEntity(43U);
    msg.id.assign("YRCAJHFZXVNWPITPASCXWUNZOHUKTVKMOBOILJNWNQSFGQXWBSEGDMRPSYIKIFWUHHRISGABLXWSHLUTPLICUYNSJYTRMTUODEKQHTNAORWNDTQJNQARVIWYBVOQKTGXYEEBZTIFLPLFJGDJKMQYVCJHDGDAZBLVMLCBBKNPQXELHZRSGYORUAQSAEZZAUDMFDKOVGXRXZCYWU");
    msg.sensor_class.assign("QAODMOIFASBKNICHZPQYSINXTUZFZIZZBCIGUKGDESMHRUYCDLXARWRRUUSPJZCEXPJALEYLBNCLSGXFDDDNHPEQETWCEAOFCBIMGLFVNGROUJDFETAXXKVJXQTULSRBKMLYSMZRONVNWZWTOMFPHDKWCVTANYWENKPTAEXHGDIQGJJTGXJHTYCVKWBFKPBEKPHBOPHOQYWRDHGZVVFT");
    msg.lat = 0.149077513803;
    msg.lon = 0.303704985925;
    msg.alt = 0.615705542051;
    msg.heading = 0.85841781921;
    msg.data.assign("BDASNSUJOUQFIZBZVXTBFVQRKOVWMYJSYLTTHGQPNFHQRPWCIQMKODRQUENVLJQFWHWLEPTLQDAGODDVZJMJ");

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
    msg.setTimeStamp(0.661362861101);
    msg.setSource(29778U);
    msg.setSourceEntity(161U);
    msg.setDestination(9644U);
    msg.setDestinationEntity(239U);
    msg.id.assign("NMHUKWRMYXAEJCZG");
    msg.sensor_class.assign("SHELVIWOAURMVKZWMXMNMXXJKVUETWBHEMKMDMLBMZHKJTADEUTYXSWXDWADZOTIGWERUGHVZYYGQWJPBVELYAWINZNGMQPQKRVICFUUNFEUCNYWFFTKKHIPYZBPVWCFXFTRFIHMLCGRHSNYEJSIOTDZXAZRSABTXKJLIVOJPUJPPSUSDTKJNDOIEDGKFOCLXCYBRP");
    msg.lat = 0.745212681308;
    msg.lon = 0.175417546743;
    msg.alt = 0.498859259817;
    msg.heading = 0.491491390734;
    msg.data.assign("FRLNCEQXWCIGDPATPHJFXRNYKRWXQAILWSJPDMXKVBLAPOZXDGYKNSTWMJTPYEIVTZQABBJJNTDTNYFOOXNULDCBUNKQFPOEPYGLMIHQAMUSQEOQTVVBBAHXOYSEUHKWEMDXSLFOKIRDZVZZKPCDOAAFZMTIYGGESCRFWC");

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
    msg.setTimeStamp(0.312922256365);
    msg.setSource(44813U);
    msg.setSourceEntity(176U);
    msg.setDestination(49858U);
    msg.setDestinationEntity(37U);
    msg.id.assign("VJBBRTCQGTEEEOYOUSMQASEMTCSZHVFNYLZFKIJOJBQDPMSGKELYBOUDCWSLHKVALCQLWNPSDHMLHWGKDZOVWXNHRCIQMWNXBHQOPLTKB");
    msg.sensor_class.assign("FWDNVEUBKVXDDNQHJNEOXNSAMRIYYQDHOQMKPUUGWAHISSKGHFXXLTYFJCNNTYFEHRHPKKSVBKBVAZLIFULOPQSQJCQRFDOBTSLPTLYFICPXQWZMAZEISGWVYDELRVZUUOMCADRGJUYYHHSRVQJQGWVAC");
    msg.lat = 0.143775095647;
    msg.lon = 0.261630585446;
    msg.alt = 0.134186336987;
    msg.heading = 0.285015738861;
    msg.data.assign("MUWAMLDIJRDSGOXTTNWPTWDEVIMLABMUBXHOSFUCZCNPQQVFFRQEYLJJVHPTEZHUIOYOALZMGEMLUMGJRCJAWEJGLGTWQCBBIAUAYSTIBOHKSFBNWRZYGRBPXXVFBIEAKFGIAVXLGKLPCODFCNQSZNOSWYOZUPTNXYRYPHGQQSKDBKXMZUG");

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
    msg.setTimeStamp(0.276932046718);
    msg.setSource(56186U);
    msg.setSourceEntity(104U);
    msg.setDestination(30836U);
    msg.setDestinationEntity(136U);
    msg.id.assign("LEKGLHGIQKYSTFMBIFGFFRGHFM");

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
    msg.setTimeStamp(0.773598665043);
    msg.setSource(14537U);
    msg.setSourceEntity(76U);
    msg.setDestination(57549U);
    msg.setDestinationEntity(90U);
    msg.id.assign("QEFLVQSSIZPUWUENIFWDVDYZTPMSQVDGDBBZMNJZNLQHLQGRVYXDTGDWZLGOCRBDAUIIEBEKYTJXWRSLPAKTESUAHSXLOTGAMKMIZGNJSOBDFJPNFTLQCCJVHPKHBLRCMWZXMXZWNYJWYPCKPJOMNUAFSFIOXYFYNOHMKPZWDYVBCHIRCYFOGHTVRRXB");

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
    msg.setTimeStamp(0.530381630997);
    msg.setSource(13485U);
    msg.setSourceEntity(226U);
    msg.setDestination(41306U);
    msg.setDestinationEntity(209U);
    msg.id.assign("CPBUFPFPXRDSVMFPAKVOEKJIJPQWZWSRSUZEJDWFZIBHHRGAVWZMVQMCUICFIXHNOOSAZYMTGDNLISLPKMXGJWCYUBRDXSWXXLQQLGFYJJGXVRUQONYDEKTBEQFCMVUTQPTNSEHDELDRHTAYGFJBHSYLEXAYCBQNAWLAPAFYNHOYQBDVNCZA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XBCQVWPPTBQYUB");
    tmp_msg_0.feature_type = 167U;
    tmp_msg_0.rgb_red = 249U;
    tmp_msg_0.rgb_green = 109U;
    tmp_msg_0.rgb_blue = 194U;
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
    msg.setTimeStamp(0.364998208201);
    msg.setSource(61146U);
    msg.setSourceEntity(76U);
    msg.setDestination(61995U);
    msg.setDestinationEntity(65U);
    msg.id.assign("GVFCJXQUUGUJBNOZWOYRYCLHWPNHXEDWYJPDCAZNTUMEQXXZFUVXNDFIMCVXTIMZLHAXBZDKTUMAGRWPNAAPYR");
    msg.feature_type = 98U;
    msg.rgb_red = 109U;
    msg.rgb_green = 30U;
    msg.rgb_blue = 213U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.895429771503;
    tmp_msg_0.lon = 0.867023100252;
    tmp_msg_0.alt = 0.882029228714;
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
    msg.setTimeStamp(0.438326921748);
    msg.setSource(56515U);
    msg.setSourceEntity(250U);
    msg.setDestination(4982U);
    msg.setDestinationEntity(180U);
    msg.id.assign("KIOGWNLNNSZYRBBNWMNDSNSYFMPCSORPMOQKAVQAIWBGWAJICECGXFRBSQTZBYHCUVFZRDIJMDMPKIOXUHEZBBVLBZXMDLAYXJFUFYWWBLHGZOTDMTTZABHLPSAFQIHOZFKVLVAGMRXAKAYQPJJHSEOYULVWPOKCIVCCKTXURIXZXCJYYTFPUEAQTETDCDFPXED");
    msg.feature_type = 236U;
    msg.rgb_red = 110U;
    msg.rgb_green = 86U;
    msg.rgb_blue = 181U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.882773067559;
    tmp_msg_0.lon = 0.447026032108;
    tmp_msg_0.alt = 0.620721196506;
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
    msg.setTimeStamp(0.0430699482041);
    msg.setSource(13123U);
    msg.setSourceEntity(65U);
    msg.setDestination(42667U);
    msg.setDestinationEntity(76U);
    msg.id.assign("RVVZASGAHWXUMZICMTNGEERKFMCSKGCEPSGNLGVJJMBTRJNSIYAUOYPUKJKQLBHKWNRIWTWWIMALXQOCLTKCDUOPZTYAEUFNYLBXZRCHWRUJUJOFVYFCHPTRDNPBGMWONBCDBBNBFEHVAQPFVLKLBSYLOJDAFDADQIHHNYQGDTMHQJAZKZHSGBSEKEPZISDGOZRNITRXIYWQCXD");
    msg.feature_type = 24U;
    msg.rgb_red = 75U;
    msg.rgb_green = 36U;
    msg.rgb_blue = 112U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.397038200549;
    tmp_msg_0.lon = 0.276644465422;
    tmp_msg_0.alt = 0.406954616286;
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
    msg.setTimeStamp(0.726878471146);
    msg.setSource(62191U);
    msg.setSourceEntity(106U);
    msg.setDestination(1684U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.738774073295;
    msg.lon = 0.217618635388;
    msg.alt = 0.498513519807;

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
    msg.setTimeStamp(0.286091074728);
    msg.setSource(30364U);
    msg.setSourceEntity(250U);
    msg.setDestination(30434U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.823406196526;
    msg.lon = 0.376490808892;
    msg.alt = 0.0428579723676;

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
    msg.setTimeStamp(0.68942779226);
    msg.setSource(34965U);
    msg.setSourceEntity(136U);
    msg.setDestination(40595U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.5222487029;
    msg.lon = 0.910206713257;
    msg.alt = 0.313106190378;

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
    msg.setTimeStamp(0.519728113865);
    msg.setSource(36510U);
    msg.setSourceEntity(186U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(110U);
    msg.type = 199U;
    msg.id.assign("EOUXHTNAEXVNWGQCEAWEFSSUMZRVKQPOWZRRKRZYUUNIJNYFZSLKEMIJWAFXIBYBKQPZCLFNBYAGAAVBWJNIGQMRDOEIOCJPCSYARATPENYRLULZV");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 5438;
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
    msg.setTimeStamp(0.972510593136);
    msg.setSource(18121U);
    msg.setSourceEntity(180U);
    msg.setDestination(44975U);
    msg.setDestinationEntity(65U);
    msg.type = 26U;
    msg.id.assign("YSKYVETZXHOWPQNLVZNAYMDBAVKYVSMPFHPGRBVWVXPZOGIJEMRGMULPJNBMHIGCEZWJEDNAMFUODNBNLQUBYOMWAXZFXCRUHMCJIWEKWKCBCLQFHWQSRASXQHNLES");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 154U;
    tmp_msg_0.value = 0.594893182753;
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
    msg.setTimeStamp(0.956892493792);
    msg.setSource(55607U);
    msg.setSourceEntity(34U);
    msg.setDestination(21417U);
    msg.setDestinationEntity(83U);
    msg.type = 119U;
    msg.id.assign("YGVNZSACPYAMXYZLAPYXGDTQOHHVCLGBFLHHCECNKSTJXKSVCBDYCMZVWSWCZFIJMHPNARVNUJIXRRPTQNEHVIBBGLNDOYSLQSBDKUVGBZRWOOORZXGQAGPQQAGJQMENMFOUYYIVKDJVGKVGFJWMHWFDABRMMALPAPSRONIKQTBLUIWDIJSFKBZHEMNTXFFJTTRDLUWOBXI");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.919188195233;
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
    msg.setTimeStamp(0.439687845543);
    msg.setSource(61226U);
    msg.setSourceEntity(201U);
    msg.setDestination(1136U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("HOCLUJQNQWDGJEDEWFSMIZIPXSBUOGRQMDSGSYKCMQSWPTTQSNEEVKRHEIBDZBLDUXNPXDFTNGWIOAAUQECRSCPHQZFIVGBYTUBAVDZVSOAFEIKJLVCYMLDLBYZFYXTMAYMJCEYQRNIMWKONWOLVOHXWC");

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
    msg.setTimeStamp(0.138411345138);
    msg.setSource(26621U);
    msg.setSourceEntity(70U);
    msg.setDestination(53933U);
    msg.setDestinationEntity(112U);
    msg.localname.assign("LLEEGZAGGDGLECRZSUKSRRNOBOMITYPUKLPLMKCZGANBIAQNTDJTZXUSCXJEGFHMEKXCZDCDNGBWISPZCKUJBMDUTJRKVXSORHQLNGVQHAYLWCWMRTYPXNTYWIUEZIVTQRXKQAHZAKWOHWYWIJQKXOMTVYNFYGFJYNDPLIFOXUAEDVNBAJLMMN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MKLNFNTMDITSKOVMSCZQUNQUWEKSTJBYVZGEIQTMBDYTEOCKJDVFDERCHOEWFOFAXUXETPYRBZGOIJMMEBHZLFPYPXMRPVWYNUWGJESLWOIOYHSQCDAUJDXSDFOMCGXRUBZCSRNKLYWPVTHMHAQRZVXVICAETKTWFBAANPLJRLLZQHJRGMGJLIWCVSGYYULYNQACHRJP");
    tmp_msg_0.sys_type = 56U;
    tmp_msg_0.owner = 39969U;
    tmp_msg_0.lat = 0.164700261294;
    tmp_msg_0.lon = 0.799620623205;
    tmp_msg_0.height = 0.502708441393;
    tmp_msg_0.services.assign("LQHADLBCCZJGTHJMBSGPVEUCCKOFTEVURJVXXHAGLJGCTYVIPNFPQAKDN");
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
    msg.setTimeStamp(0.424075402522);
    msg.setSource(47685U);
    msg.setSourceEntity(232U);
    msg.setDestination(51600U);
    msg.setDestinationEntity(53U);
    msg.localname.assign("YITOOSMGVNVILZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FEACFGGYALVHOUTGBHQV");
    tmp_msg_0.sys_type = 95U;
    tmp_msg_0.owner = 43576U;
    tmp_msg_0.lat = 0.561885537698;
    tmp_msg_0.lon = 0.640699604538;
    tmp_msg_0.height = 0.760431439365;
    tmp_msg_0.services.assign("JIFEXQLPBRIOOULZUKDGAUIXGITJSTOGMCMKLPLDJGZSUYESNTFLESUPIQTSAPCEFWCKNIVDTKPYEKNWPHCBQZWRSORTXUMFYEDORMNAV");
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
    msg.setTimeStamp(0.803343758105);
    msg.setSource(45233U);
    msg.setSourceEntity(82U);
    msg.setDestination(47499U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("RELWBQVLJSPJFBAZBYGAGZOBLUSOFEXNKWXYFHVQZBGWCVFJNZJ");
    msg.predicate.assign("AUYWLNZATSRRHQXAQUKORHEMSVFMAPVSDNLDHJGEWMVXLGLRYKVZGPJBHRGIPVGOCRXCXIHADKSRVDZGUYSHVNFDOFEXCZQQWMBDFUWZSPDGXNWMYVZEYTHITERPZAYSBCJMWOPDTXWGCTILBUYBCLDBHQNJUFOSORBQUZFPIKIKL");
    msg.attributes.assign("IIRIEWXKVAPOFSMGBBADGQOTHLYIKYSVERASJMKJMHYOH");

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
    msg.setTimeStamp(0.419076360173);
    msg.setSource(30432U);
    msg.setSourceEntity(82U);
    msg.setDestination(36700U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("WTNCPXPCTSWNYQFHDNEJOQWDHEHKNLVVVVIQVUIYOQGWLYZWNORZPUEAGLELDSIYNGMFSTVHSUXMEZFEWNDDOJAFTJXYZBIDCQAXPSVRGCCGBVTHPFWBNEIOBRRBDLZSFIYUXKCEMCWNHJUZUXLCKSTSTMBWQMXQGIGOYBGYKKTJGKPUOAVPIP");
    msg.predicate.assign("JTJXCKEJNCEPGDXUIMEEPTZVVULPAHYSYQRYHRPDRQTNHUBNGGEZJUACHGDMRESWVMPXFBPBIHXPELKNFWSBQDKIGHZOHTGZAJCNBHILYIURZWJOIYIDYCUBZRQMQMKKKSLWS");
    msg.attributes.assign("HVFQLEXUUWGKDHHOBTXZKHJCMBJEGDG");

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
    msg.setTimeStamp(0.160277163925);
    msg.setSource(43499U);
    msg.setSourceEntity(158U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("RJJRETHZPUIYSSJMFNBWHPORGGFCONGFMLEFAAYKOKZAHCJANFQWPZYWWHDXNKEPTIJLYIXAIQJDMWGDKZZQHBUUNYPZLRGGBFYVWSSMDHDWTXPNQNQOIKCBGEXAACIOSXVOBIJXBKZSLLTZUAMBEEQDUDFLCBMSENBXTCHQIRTYTAOYRTORMJUVAKMUFWJCVSNQPBIUPXLUPLHVOQFGHREMCJKSRMYXKEGCUVWVIVENTRXPW");
    msg.predicate.assign("VNSNANEQUSPTTIMAFELKCIIQFBWDHHACFFGGZAHOSINLMJWLXRPOSEODGEGWVJDOVWOPDIBXNHTGEQCZZKUJJYADZNUSWRYVMRMPZZRBHJQHUOGQKPTYNIAMIEMRBLEZXPSYJDQYFXJIVUTDHMPLFQGZOVN");
    msg.attributes.assign("BLBLBLZHGNUYCDOJALNVJKGZLXBEPVPFAEJNPSOHMXDYTIMJTNNAYKXOLODMIJPGDEQHMKMBUVLHXMURQMBYRQEOXUVXBXERSIVDFQYLMIUSIOWLUHKTQWCYYBWEZANZCFCQFFRSFMSAGPCXKWEZQZVSHGAVGCFQRUPTNZCJASNGDATOWICIQIGJOQUZDKHAPVKWIKRCFGDSDRJIPSGHYTRX");

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
    msg.setTimeStamp(0.143405498796);
    msg.setSource(1436U);
    msg.setSourceEntity(89U);
    msg.setDestination(23581U);
    msg.setDestinationEntity(194U);
    msg.command = 136U;
    msg.goal_id.assign("LNXTJZLGVKRUHGGACJPJSHHCZLATB");
    msg.goal_xml.assign("RWVNQXHMOEPCMIMXXBYUQNEWMBTSWYDDEQWDTZKSGWLZHGKEODBUAQOCXJMNWYNTYMILGJVLYBKIGPSMVAIHAKDZFSFAJJJQTPRAWVVFOBULOUSWABZNINIIFHBBSARNDHLLRXEERQTDYQCLSHWNUFUJXIRRJVZVTLMKPNEZQPMGACHBSDYRFC");

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
    msg.setTimeStamp(0.83293028232);
    msg.setSource(21261U);
    msg.setSourceEntity(206U);
    msg.setDestination(11814U);
    msg.setDestinationEntity(126U);
    msg.command = 22U;
    msg.goal_id.assign("NGPAMIZNIQ");
    msg.goal_xml.assign("NWLIGNEVGTWKUKDOVIIFKCXJDQTSRHFNPPDVJKEBQVAWOBAWCOAWDMQHJYJGNDQZZEDPXAZTHIVAAZROJRSHXHDLGPMURTNBUJFFAYXFTBQVEVHFZENSHUTROXZAPQHCDUPEWZQOPALYEWDYMFKMNCKCCWMACQMCEBGFTUGITGMSJXT");

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
    msg.setTimeStamp(0.181547428205);
    msg.setSource(11367U);
    msg.setSourceEntity(202U);
    msg.setDestination(44122U);
    msg.setDestinationEntity(162U);
    msg.command = 171U;
    msg.goal_id.assign("TJQRQSBBEWQMONOBHOWIABBAXOXFWPEJYFPJORDHFCSCWIFRFZCCYSAPXDUOGVJJTCSUHMNFKNYFSJUALSYEGAFNMVINSBDDRKETAHUUQDUBUNVWTJPIKKITQLILVVZPEODDKTRCXMUYBKXMVLJKGQYRGTLLGITHAZRUGZWZMHVNROQS");
    msg.goal_xml.assign("CSZKTBENHNGTPJIZXJGW");

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
    msg.setTimeStamp(0.725957443423);
    msg.setSource(47801U);
    msg.setSourceEntity(221U);
    msg.setDestination(19792U);
    msg.setDestinationEntity(30U);
    msg.op = 11U;
    msg.goal_id.assign("TBAIFQFZFQSXKBZQXBOUGUSIHMIXUFWQWQQPEOXMGWPAOLLPGCOWXBCNHSNGJVKHTMNVGIJY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WGXIITORGYXEUBVABSHYPFSILWLQUWHUKYPKEPMFWDCNIUPTBUBYWUOWFQLFGFZMCGJUXCQPKAKOQHVIBLQYIYSNSBRFWOZJKRIZUMKLZSADTZXURNNLMAFJVEQWHGKJNRMJBDSVDFHNELSP");
    tmp_msg_0.predicate.assign("ILTRHVQBIEALDGWHVUTQRRFADXDFFJOHTDDSSQIDNYAMA");
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
    msg.setTimeStamp(0.115134399186);
    msg.setSource(28739U);
    msg.setSourceEntity(13U);
    msg.setDestination(26977U);
    msg.setDestinationEntity(12U);
    msg.op = 132U;
    msg.goal_id.assign("MQRSHHZCCTCTSBLXJTTZIIMCKJSZZDRNUJEERLKKWWBNDXQEGSCALZJOZRBPAOGSOMPPHFUFGBFZYQBLIGXNHOAHUYWOWTWYUWXLBMLFQGFTMAATQDDEZEUY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BQBHYKDJVIZBMLOLINHVQIUTNVKROYOUCCZETNIHPMATGJPNXUDBZFEQCIBRLARFAVLTRRNEVPJARZUIFFXLNGKKPYDSSVYAYMMCGCMPVSPXKHHSEH");
    tmp_msg_0.predicate.assign("AVUPNAPQYRKJDJOUJYDYKUMFSBHRBHSZV");
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
    msg.setTimeStamp(0.784218211565);
    msg.setSource(56773U);
    msg.setSourceEntity(190U);
    msg.setDestination(50756U);
    msg.setDestinationEntity(31U);
    msg.op = 239U;
    msg.goal_id.assign("OXKNMOMQOZYJZUDZQGGFKHOZBQTBHCZWZBICXLWAFIXFELJOSIUVVMXTZLETJHFQANWKKFVAPGBDXCLEGLSCCRUYTCFYVFADGMZSDJEKKHXTOMGIZOSDLEMUFVPYBEKHUWNMLNDBPPHWSJEUPJSPDSQPYTX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IWBFBJJHSEMCALMQZFYDKJNKUVREVBHSWKHBCNIATOCNILBWMTRKFHXBIVJGDQLFVUNGLBSJYPVBYWUEPXHLBPETFYBSNDCMUGTIPVNZHOZKEYWCKMHUFALCOTFNWR");
    tmp_msg_0.predicate.assign("CYHFZTIQKKAFLSVGWQRQESQWPJBKMI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JPYKISMMRNGDJSIQLRSMPOVVKCGXVYEBXDFZQSVJNBJSCWPYXZTJOIEWACBHZEALDMNPEPTLOIYQCORSGZRORXDXNOIPGUUZITHWZAWVFNKBFWCXSQNDTLOATCVZYEZBHSPNKUNGRIZLKAWWWNXAULFHEFQGOLTTTSGQCMDQLDRVYMCHEDUFYGJYAICHEQKAJPXJOYQDUBQMKMVUIRAKCMINXETYJJUUFGWFVLKSZKLFBEHHVUGHPOWD");
    tmp_tmp_msg_0_0.attr_type = 189U;
    tmp_tmp_msg_0_0.min.assign("CPSNZPWJHLVJABHJYOCPZLWODHTOFKLMCFEDLNGAIAWLWAMRFNWS");
    tmp_tmp_msg_0_0.max.assign("JTCWDSSWAVRCPODHZPHXUAPQVEJAHQPXIYWFNKENRXOTOAZYWP");
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
    msg.setTimeStamp(0.455010504614);
    msg.setSource(1811U);
    msg.setSourceEntity(188U);
    msg.setDestination(53365U);
    msg.setDestinationEntity(91U);
    msg.name.assign("JVCKMDLZXADWRLDVQYLYOSXARNKUVHUKONBLTNVBIGGETRRWVIPGBZULJJXLAWRTHMEWPZNINUVFJSACCUFMWTEHFGNRUYGSMVODGOMZBERUOOIKDQOYCMILQDPCLWCKBIVEKUSFGYMHNPAIVDBZRMZHJGVWXWTKXCSTMTDKFTHQQYPXLQCETY");
    msg.attr_type = 136U;
    msg.min.assign("LMRBEWRLIGWEJQKHJNXRRYWIGXDMPTVGPRASNLDNRHYYPYZUZZVVWQGZCNDFOCCNAUOIEHUWQXJKDSPCMXDFZUBLQOBPNBNOKIEWFEQMVTUMIUHSCVXROJADLICUHHYTQXKBQDPDLVTCBKOFAJTWPJQRJAYXVYSNGYMRKYDIYMHBHFTOLPZLCNZCERFFKBNUD");
    msg.max.assign("PEXKPHEDKLBUIRYZSJGIGVXXOEATEQCWZTLRFHOIDZATDITRYFQIWOVPBKLRWCQVQNDFSMNDYKUURXQMUFICYVCZFGOWACERDBLPKMHEMNYKBYPZOEOFGQVDVAZRMOXOIDUSTBWSMVWBKGHPLUYTAZYWSNYGCKPDIOUTMMXWCVJVXGEYJBKBHGJQNENICDNXLKRHWLWBHIZJVQTLOHGRHNLCFJASTQLJPPFARASFEJSTMFBH");

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
    msg.setTimeStamp(0.872829488361);
    msg.setSource(2495U);
    msg.setSourceEntity(253U);
    msg.setDestination(57834U);
    msg.setDestinationEntity(244U);
    msg.name.assign("MRYBKLABVFUFTTCHPQBYEJADUIYTXOCJLGHFWZZHQOUXSULARCDAUYYAVAEFQWDNXJMOGQSRYXEPQRKZLTWNXIIHNDZOLDWTVXBSR");
    msg.attr_type = 66U;
    msg.min.assign("IHBDYCVCPBEVHWJJRIKUPPAXETONEBZGAMFJFSUXNTOFSPRQSVDXZGYTEPIWYLHXKJVARNHEZGPGVSLSONQXKLSBWGDTVFIZVWDKDLAGBQCJMRKPHUTNLQQYJYROFNNQQYWCKTGMCHGZXZPOMUCZCLATJZGYMISDZXEPON");
    msg.max.assign("DLJFSDFVMBORPQCSWNNXGJNAZKMTYHAKZEKLLSPOVSBCXZMRKTIWQWZKTFMFUOWGSENLZNGXQJPQOPBGRAJYZTQRQPGQBOOAXWSVZ");

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
    msg.setTimeStamp(0.26496599483);
    msg.setSource(61162U);
    msg.setSourceEntity(1U);
    msg.setDestination(59727U);
    msg.setDestinationEntity(227U);
    msg.name.assign("ANGPVLXWZKABUIMLNYZCGTTMYRJBIKCPTVSWIXMHHEOJDGPXWFFAMXBNAYMCNUMXNJYRJUZPPOXWS");
    msg.attr_type = 103U;
    msg.min.assign("NMFJTHNMIXPSZMPXAYDD");
    msg.max.assign("WDWAISQHLNDYRBTFGCMJVQRUHIUQEDJUBYMTTYWLVTAMEGBXIQZKAWUVIAHFJDPNDVOJTNCZRDOYXZDPZFRZGSLAFUOKWEAEXAEBOKHNBYSKVMRPAKNGXLWVEJVDPOLZCVZYOMNXBTJFGGUJAFNONSIIQTKHJMGFKHVOQPWTAYPDEVRMROSHUEZLLBXHQQNJSHFYRLWIQKCUXKYPYEDCNIESUTBBOKCMZLCSLIXWSMTCMXXFGCZWPJPPFQ");

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
    msg.setTimeStamp(0.217661978369);
    msg.setSource(21004U);
    msg.setSourceEntity(12U);
    msg.setDestination(1356U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("WDPFEPUTISTGMVIAOHQIDGXBRXBGOLTWLYGUXMAHCKNYZQBCBTSLCVWWUYJTYSBNNMJAWVVTECQIODYOSXKRQZCLHKMQDAUVCBKHGNF");
    msg.predicate.assign("YRKBIJFBGODKESAVXDUKBWGPMOHKCHWDAJQHFGSAZLTWWRZVWUDEEXSOOFOGCUGRUILJZJQVIFHLZQTKUVWZIBYMEUJRXYPVARZRKUPCZFDNRHZTBXOSCNBMZQOSQDTINCLMNXW");

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
    msg.setTimeStamp(0.182789964238);
    msg.setSource(23398U);
    msg.setSourceEntity(147U);
    msg.setDestination(40515U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("GNFCUUGXZQOSYHAGTZYKKZJGEQGGEMMCMLILRNSOMLSKNIRQMPRXOQBPTPJPIASVVHYSGOQLJTRISEONSXCHNOWRFVMFJXBVSVXLJURDHSDFUIDTTJVYBEEBHGRFIPUODHWADQAOTKPWBWYCUHANIUDEQEFSCPFAVNZVZBBFLCZADTTRNMEUERKBXTZWHBXXWLNQWUIEJKKMYXPDAMAOQ");
    msg.predicate.assign("FHWFCEYCFTGFQUKIIOQBTLQGIGTLHSWHXUCOVJWVAWRYVAIAXL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TXHIGAJMTBOAXZQFHGVLYQYJAQRQPMJSKZLHCFFYRIICPUNVVCQWXDQMRLOGXMEXFGPEXCSMDULYQWNEVYH");
    tmp_msg_0.attr_type = 90U;
    tmp_msg_0.min.assign("DDIBRUZOAQIIWKACNRZWOZUGPTCMSEDINMACNHERKPOKHONHMLOBFFVWPLSVVTSNJSDIGDBQECCGAXYPFHAWRCLRATUHVMON");
    tmp_msg_0.max.assign("EJCBOPNBIHBRPAEDPCZOA");
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
    msg.setTimeStamp(0.104363547415);
    msg.setSource(5226U);
    msg.setSourceEntity(169U);
    msg.setDestination(55809U);
    msg.setDestinationEntity(131U);
    msg.timeline.assign("KVWXGUCYBZBHYOKMEWFWORGUOAPMJXFVSIVQYKHAQHSYVYWDNUGQTWRXALPKNXSTXOQQBYJGOGWOIDDZGUCFDLJFORCTABERTYARRLFAITEZVNXITSBJQVZHGNYTUSSIEIEFJSQRNEQXYKEJPZZDTIBCCABCKAULFLVVHI");
    msg.predicate.assign("QOURQMNGIPE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QODRFVFFOPWIIORMKLNFTCVTWUFRZHGCSLVYVSSZDNGPCGUDAUKZNOQEJACEJTTXWUSKIYYHMZSQSDXWKWSXTXYBHWQNIKQPDEZDWOQXMEMREAMNZPYEVDQNAYRBUZPHQLFGKFLMJK");
    tmp_msg_0.attr_type = 42U;
    tmp_msg_0.min.assign("SHNZMEGKBFEYSBVCDBQMUWMADLHUZSOZTHLVVFYGSBYKLCKYOYDYGDDNKNQGUQBDVQZXDUUXXSKHWBSHDTWJVAWLXGCFCOLKJOPRQRCIRJAIJISPTAXAGLFITUMGODXTBWVGWRRNROUFLPSZNOYBTAAQJTZUGHFYKACEGYMWJHEMENLRSXNOQ");
    tmp_msg_0.max.assign("JRVLXYSOUKTZDIIEHAGWOIDR");
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
    msg.setTimeStamp(0.626239436674);
    msg.setSource(58671U);
    msg.setSourceEntity(60U);
    msg.setDestination(52773U);
    msg.setDestinationEntity(164U);
    msg.reactor.assign("JUDBOQJQOFFHTRHCRNWZBOUBHKEKL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PDSTNZNDGAEYOOCQETRLTCEGXQAUCRPXCJQFHMOBSQOLIEOWASABJZDVHKOLJAPZHLFWWMQIEHSDZIDNCVJELNZKKUWXWJOZXSVTLBIVPCFXPGRFRVKFKYBBGNSMKGQMNXXLDJHNU");
    tmp_msg_0.predicate.assign("ZSOKPVVTEQSFAXIEQCDQNLGDPREYFPFERSLBMVGVJFLSZZIRYWGBEZJRCHTBKRXCXAUSBKYWBLUEPMCAADDKAHNPFMDWTJASNQEPBYZJZVAOQKXJNPTPORSIVUTIOGYXKICFNWTFAFOCYQQWULCQHRJGEZDOMCDGGYNNVTBJLHOEHCRNOVMJWKPWZIELWBVXCIUMTU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LXISPXNXOSIIMJSUDOWODAVSLTTEBYCBCKBPIQCOPNMPBFHQFAXRFDPUGKRBGVQWWMNUEALACVRULOKAYWDZPYWJTZGMCGQQZJLIGCEKGFFQEYMJZVBNYVCVWKKXMZJHKAHM");
    tmp_tmp_msg_0_0.attr_type = 212U;
    tmp_tmp_msg_0_0.min.assign("BIEWWONNUHOPSBOGBIXRGWETDRGNKSKRQPBXPBAKOWNMKRYXLEIBPWCDAUSVAEDLTAZJKMRMYQHSBLDEGFHOZKTWTRILFNNYJUDFVOHARVXIKXTDJJRBGLIGQOUAYVXTYYMCCHZOSGWHDQOFKYVFRQUZUMCNYPIZLNASCSNUBTAEQLYLEGSEZJVHXAXPPPBXTDZJCEQITKJSMFIVCJRZWMQZJUGMQNAVTVEWPUVFYFFZCM");
    tmp_tmp_msg_0_0.max.assign("HZEJOVNQGTDMVOVBQWWWADKXMONBXLARZOHWBMEXSKYSNGPCKEDHEZQSBOIXLHLEFONAJGMNVZAKTJFBTRGGXTIVALGLTCXYPCNQEDCETACFRFSIYAPUZYFXCWRRPDZXPKCTFPHMFCTIVVYQXKSFQEIJEZQLPFXTOPWBWDQPDBBRDSMSYUUPHUCSVJHMFOYGNSMZCVLQKKHJGMUBQRIUKAWDOV");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.177892737622);
    msg.setSource(47889U);
    msg.setSourceEntity(182U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(186U);
    msg.reactor.assign("GQPWDMGFYYOKHHMPI");

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
    msg.setTimeStamp(0.445995913356);
    msg.setSource(58527U);
    msg.setSourceEntity(82U);
    msg.setDestination(60639U);
    msg.setDestinationEntity(118U);
    msg.reactor.assign("AVVIYAZJLKOFMHXBJDGRVKGUTDCLFZMSUZVBOWIIUJIDUIMRHEBABAXLLLOVUQTVHPSDOAUKBXEWLFEPRIZLEXPTGNYBWSPLPKFPCULAQQMDIRTDKZWIWHKMCOFWYCSUYJBVMGCPCFEJNKDYEMQNRITPKANXDAGHSJGYCXGCFTXLYBNWZMUDZHONOOQVGOFBCPRTSHKHQQSFQEUNHYJEWEJFIYCZWPBYTVQRGMERTQSNHV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FKIEMYOHAQXEGQLKASOPQMVZEDABOGLMQRZENTVSWDKMAJCMOGVPDUWZZFFMUEFWNCXIRLMBAJQBFYDJLIZEBUYOYFXRIKYMVJGGSCTNHRCTQPLTQSPWDULTWLEPVVGAPYDUQRKUCFCHYYAJKTTKMTPOSZRNHCQWLNKSXPTABHASBINVIWYEOXZCGIZXPJRYXUUBZVO");
    tmp_msg_0.predicate.assign("OPZFBBNOXGRD");
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
    msg.setTimeStamp(0.0273723619713);
    msg.setSource(40874U);
    msg.setSourceEntity(20U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(162U);
    msg.topic.assign("BWBPWKDKKYKGNVLABTBOLWULUCNBMVMDNRAGJQEEMRVVIYCKGWWZWBTSSDIVMZFPLPBJCPGLLJVUIQZKHOGARLQMDYUSYGZBPHVTZDORJZFDKDXLIRUCAIJQYVGTONYOTCHMESUEYDXXNAGOOMEEIXZXCCHSZQAFVQQBOJUFEQLPBFSVTHUTXNPSQKEONIXAWUFZYANHSKCFKRHEJWMFIJHYXHQYXPAIRHOMDSGTPGNSITZJ");
    msg.data.assign("MFVRBMKNVGEWGDMMXNCTRHHIVQCUOAJSKUKBOYDEJCNZLVQSEJIYQPSSCLYPNTYOOZFTFTXJWJMTUWESXIIWRMRZELPDZUZGBLCYNKRGCOBPFZGTYGDEDFXIFUYCAPAQDFJAQYEKAYXTKAFQDIYCUBNWDZFNAIPABOGRUAQGSTNHHXWILOETSWBVQQSMVSVZJMGLEPAODEKVSHIQWHVZMXHXWDHXBFRRLLGNPBZWKJBRUJOPKULOVHUXNTKH");

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
    msg.setTimeStamp(0.732314019311);
    msg.setSource(54277U);
    msg.setSourceEntity(49U);
    msg.setDestination(1915U);
    msg.setDestinationEntity(90U);
    msg.topic.assign("ZRIHKOIYZTFEORSEVIOLSXZJNFRAHYXTENLVNMSQQUJPUIPKVQSAUPCAKQXGVDNYWSJQXUOZDKHPOZVJMMSRSQBHTIRNWGWNUCFHBXKGLDEBEAYZGNPMBUEAMMZT");
    msg.data.assign("DRYWUOMCMRLESJPMQLFRJXHHFKYDAIIIYYHAIPHEQSXVDQZNAFDJYVZ");

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
    msg.setTimeStamp(0.957402750692);
    msg.setSource(63361U);
    msg.setSourceEntity(32U);
    msg.setDestination(62995U);
    msg.setDestinationEntity(175U);
    msg.topic.assign("OLDWVQIHPLCCIZGPIELNBIWQNUJTUOOQBZHRYITVHMAIPFDCTTAUFXRLNLXCDNNRMDKKYZJRYVAAUXVZFVKYNFQYKWWQTIBOAEENGDSFXHABYTWFXGEJFUVPSADTPYEVESZSVYOGELCTSBIMWLBKCJPSGWCZEPLJRVPFMMXHJDSUZCLJCEEUDXKYRKBRVINWORQOFMHNFX");
    msg.data.assign("ZUJOPKJIEUMCBVNHRPZPMLKMNPXQMQBYFLAAXTBIXDYNWYPARJBNCFKIBYDGXFFSAZMGUQWNLIVZAMROAKFOOKEQCDYTONTUFJSIEEFBJWD");

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
    msg.setTimeStamp(0.0314708755547);
    msg.setSource(28537U);
    msg.setSourceEntity(7U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(40U);
    msg.frameid = 132U;
    const char tmp_msg_0[] = {-65, 24, -28, 37, 25, -69, 69, 108, -45, -110, -42, -110, 72, -96, 103, -21, -87, -13, -13, 43, -9, 124, -83, -33, 27, 5, -105, -120, 80, -99, 14, 112, -33, -56, -79, -25, 117, -24, 59, -57, -46, 119, -68, 69, 63, -38, -94, -120, -68, 123, -77, 13, -74, -113, 49, 1, 61, -119, -59, -45, -6, -89, 44, -116, -61};
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
    msg.setTimeStamp(0.32260131578);
    msg.setSource(16715U);
    msg.setSourceEntity(196U);
    msg.setDestination(34351U);
    msg.setDestinationEntity(95U);
    msg.frameid = 133U;
    const char tmp_msg_0[] = {41, -63, -128, 4, 123, -28, 69, -89, -75, -6, 13, 21, -20, -14, -49, 17, -26, 43, 55, 81, -45, 110, 48, -4, 5, 36, 122, 125, -4, 116, -65, -105, -72, -86, 5, -115, 82, -65, -108, -41, 1, 82, 109, 82, 49, -89, -80, 102, 17, -92, 41, 13, -28, -118, -99, 117, -40, 27, -34, -52, 18, 26, 69, 26, -77, -69, 76, -52, -103, 90, 22, 101, 11, -65, 98, -88, 93, -66, 113, 21, -35, -29, 11, 15, 46, 2, 103, -37, 56, -12, 60, -11, -94, 20, -80, -45, -45, -98, -24, -79, 57, 28, 109, 14, 98, 104, -118, -123, 113, -52, -124, -93, 106, -22, 78, -101, -15, -26, -120, 101, -31, -22, -102, -33, 16, -95, -59, 74, 72, 49, -117, -31, -90, 28, -93, -12, 13, 48, -121, 49, -49, -97, -60, 99, -32, -20, -24, -61, 53, -11, 28, 23, 120, 70, 25, 36, -40, -45, 109};
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
    msg.setTimeStamp(0.998566028028);
    msg.setSource(59330U);
    msg.setSourceEntity(149U);
    msg.setDestination(13261U);
    msg.setDestinationEntity(152U);
    msg.frameid = 253U;
    const char tmp_msg_0[] = {-122, 41, -68, -29, 20, 77, 69, -15, -106, 63, 108, 111, 100, -49, 84, -109, -91, -117, -63, -26, 110, 103, 95, 93, 65, 19, 21, 126, -67, -14, -38, -80, -83, 50, -5, -34, 38, -73, -13, 95, -121, -69, 16, -96, -97, -101, 12, -69, -66, 42, 124, 77, -72, 72, 36, 50, 56, -44, 3, -66, -44, 126, 38, 40, 40, 66, -107, 34, -79, -99, -69, -91, 59, -90, -80, 72, 65, -2, -124, 122, 37, 92, 48, -29, 9, 59, -124, 100, 106, 104, -65, -40, -19, -29, 3, -66, -45, -83, -49, 42, 84, 73, 46, 45, -74, 98, -127, -88, -49, 109, -103, -3, 66, 19, -44, -104, -124, 74, 44, 77, 63};
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
    msg.setTimeStamp(0.00727614402675);
    msg.setSource(22610U);
    msg.setSourceEntity(0U);
    msg.setDestination(64333U);
    msg.setDestinationEntity(178U);
    msg.fps = 154U;
    msg.quality = 121U;
    msg.reps = 23U;
    msg.tsize = 9U;

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
    msg.setTimeStamp(0.887810784258);
    msg.setSource(24560U);
    msg.setSourceEntity(222U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(65U);
    msg.fps = 214U;
    msg.quality = 225U;
    msg.reps = 36U;
    msg.tsize = 209U;

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
    msg.setTimeStamp(0.348108438709);
    msg.setSource(57461U);
    msg.setSourceEntity(97U);
    msg.setDestination(7883U);
    msg.setDestinationEntity(210U);
    msg.fps = 228U;
    msg.quality = 13U;
    msg.reps = 106U;
    msg.tsize = 16U;

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
    msg.setTimeStamp(0.741991994746);
    msg.setSource(25053U);
    msg.setSourceEntity(217U);
    msg.setDestination(31689U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.778969571194;
    msg.lon = 0.968043761556;
    msg.depth = 244U;
    msg.speed = 0.371870963401;
    msg.psi = 0.553934050816;

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
    msg.setTimeStamp(0.371188808873);
    msg.setSource(48891U);
    msg.setSourceEntity(115U);
    msg.setDestination(31377U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.927726548583;
    msg.lon = 0.502335977873;
    msg.depth = 144U;
    msg.speed = 0.353053429834;
    msg.psi = 0.946298955172;

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
    msg.setTimeStamp(0.120395361679);
    msg.setSource(39075U);
    msg.setSourceEntity(206U);
    msg.setDestination(11216U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.106688188675;
    msg.lon = 0.286984215882;
    msg.depth = 184U;
    msg.speed = 0.309983862147;
    msg.psi = 0.49760696265;

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
    msg.setTimeStamp(0.569041612127);
    msg.setSource(36800U);
    msg.setSourceEntity(160U);
    msg.setDestination(51801U);
    msg.setDestinationEntity(71U);
    msg.label.assign("SFWZMJYUGMNMKNEODVIUFJNEESHFHTAGOTPLOWFYYLAQTXJAAEZ");
    msg.lat = 0.72491768981;
    msg.lon = 0.744307093585;
    msg.z = 0.943243632618;
    msg.z_units = 43U;
    msg.cog = 0.114425763046;
    msg.sog = 0.359678666971;

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
    msg.setTimeStamp(0.899746289341);
    msg.setSource(63014U);
    msg.setSourceEntity(123U);
    msg.setDestination(11697U);
    msg.setDestinationEntity(149U);
    msg.label.assign("WFNTIHFWLMKTEFNJOSLKEQZCDYTFBHCJHIWXPUXHDEZFTOGOQWBUZPKNXLRTBEELSYAGEHNRXIJHDBPLJVXMIUOXEDRYWIMLUVPRVNYAQKORYGTQOKCJYNIQVAYGWNGJXCEBSZFVONMBGBSGPAVIHKZNPXCYBPDWBMVXMZRPRMAKVUAILFUIUQJL");
    msg.lat = 0.257603172934;
    msg.lon = 0.12221652143;
    msg.z = 0.397858267138;
    msg.z_units = 119U;
    msg.cog = 0.847481598539;
    msg.sog = 0.180233854286;

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
    msg.setTimeStamp(0.409898268492);
    msg.setSource(21358U);
    msg.setSourceEntity(105U);
    msg.setDestination(31297U);
    msg.setDestinationEntity(112U);
    msg.label.assign("RYTUUYQUEICNONGMHRLHGJEZJVJHRPJNRTOKUAIOUZOLJNYQVLSXFGCSOEKUZNFQVSPPIBOJEFKAFLZWGDOKKWQATIYTNGVVXWXPXNXQJJZQCWCTHCTXDBRZEDOKBPAEPQSAUFPOIBZNSGBZBQDNUDDEOIWZVWVBAKLGTMAFWQMAELVUHDJBSSZWWRMSHXFPM");
    msg.lat = 0.629812105193;
    msg.lon = 0.966091323769;
    msg.z = 0.306696182325;
    msg.z_units = 14U;
    msg.cog = 0.0220061050344;
    msg.sog = 0.214479713167;

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
    msg.setTimeStamp(0.0582924098095);
    msg.setSource(26752U);
    msg.setSourceEntity(116U);
    msg.setDestination(46347U);
    msg.setDestinationEntity(145U);
    msg.name.assign("IONSWIAQHSIHPZGCALDHGKKXCPEJPMBGIYWGBJJNFOTZAPASCMUKGAGQFEMBATQKWORLITBWJDRLNYNEXRQBCHABYEICDTX");
    msg.value.assign("WUKBOHMSTYPYJOACVSDKJOPRBRQBNPILBDCJLREZCXFCKSYSCLZNMFEZOXIXUBUEKQJPCUDYYAGDRFHAWNMVSQRVBZZWHQQYXWYKZBKSVADVQJIKBFRRQCPEYTDIGRSLFWFDNIMTMZUCMHNMEZNUCGRISUGRJLXXUONVLPETPXNQHVEVGNIUGKTOKOTSMEWJAADHLWTPMEHGJNTFWAQJTUFL");

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
    msg.setTimeStamp(0.659960845314);
    msg.setSource(11341U);
    msg.setSourceEntity(191U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(34U);
    msg.name.assign("OKTHAULLRRBCEOGKETYQUOPCIJJPNYHIPUCZGWGCPTJNVCBXKNXSHENFNPVYXNZHGUVATSBFJRHFZVQSTMWQFOCSKEKBIDLSTMKQEDMHNWEPVTVNXWFAOPFZXHGWITVQEJAIYOOCQSIDIPMZYJSRITRDWBOLBFDARUJAMGJPJEULYCGQXMDBRNOLCPVMRIKAAJFKSMUCS");
    msg.value.assign("CBKUWDNOLNECKJUCWJLDSEZVHEWDGHAYMYVRBXPTTNUWEONEDPZCXGTZTFTHSWGPYTHJTNPHBRZLTKUZNEFOSOKZONELFYUKDCMSUREDMKWTTHJWAYQBXGZPBMUCAUBGAQFQBAALQAEKNGI");

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
    msg.setTimeStamp(0.102757358621);
    msg.setSource(14483U);
    msg.setSourceEntity(0U);
    msg.setDestination(7849U);
    msg.setDestinationEntity(173U);
    msg.name.assign("XCUTOBBZNKNRYQDSKGWSVYFXIFLWLSPCTOALDMILDQHRSHVTPZBVARIJVNPJKODKXMUIT");
    msg.value.assign("DSMSQLVEECQDGN");

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
    msg.setTimeStamp(0.720724586818);
    msg.setSource(8887U);
    msg.setSourceEntity(141U);
    msg.setDestination(63809U);
    msg.setDestinationEntity(136U);
    msg.name.assign("ZZVVBGGBTSUCBVHNUQESHKWZRCABXTDAAFVWPUZBCGYHNJHUPXZOFNEBQWSLDYI");

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
    msg.setTimeStamp(0.814037905887);
    msg.setSource(82U);
    msg.setSourceEntity(148U);
    msg.setDestination(37878U);
    msg.setDestinationEntity(197U);
    msg.name.assign("QMWZZKLQRMIFUMOTLDGKGGYGMYNAOPURVSZKUFONJVKHQXTHPDESJLUDFOTROEJBCO");

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
    msg.setTimeStamp(0.308861729642);
    msg.setSource(7353U);
    msg.setSourceEntity(64U);
    msg.setDestination(11454U);
    msg.setDestinationEntity(132U);
    msg.name.assign("VWHGIEKZSOIXSYCALUNDBICFCHSWEG");

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
    msg.setTimeStamp(0.951780070313);
    msg.setSource(38748U);
    msg.setSourceEntity(9U);
    msg.setDestination(8017U);
    msg.setDestinationEntity(64U);
    msg.name.assign("JSRFRROWKDIEEMTDDQBZHVGWEBRWZKQODODNLKDQMBKCXLCTPHSYAFFYVMSJALYXHPUMCDTZTNGNPQVZJMJOTMKXEQAGJUYNOCNEGPQQMDJURBAHFHZXBTPZ");
    msg.visibility.assign("PBFDFSPIKCYQNHGCUGOLMQGRSFXKFYCSGKSWDLNBWEGDPQYAXMVDNWOKDVSLFVQAUVAQJAVYMZJPREBEJFZBLXWITZHPWYGJPOJSBJHYXHBCBWELFVJKJZMWHZCTUTRDMBUOXODTCEJIIEKCFZKDUKPASLMVLZCLPBHHAXERRMHGAMZAOSYIVBJEMREQEYIPCTRIQTNTZNDUXVYXUNHDFOLKI");
    msg.scope.assign("YVIQADINSDYMEPJXFPPJMYXUWILXAIJXXGNAZVVDYSKUEQEMWCFHMVLTBQEDFMRDDRPIWJJQZSDMWBABMSORKBGBKGLWDNBQNZOCZTZFAEEPBQNKCWOUXCFLJWXTU");

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
    msg.setTimeStamp(0.173549061643);
    msg.setSource(64971U);
    msg.setSourceEntity(77U);
    msg.setDestination(39078U);
    msg.setDestinationEntity(72U);
    msg.name.assign("SBMMSPEBMVNTFFUPKKTDIJQWIZWZXHEOGZNDVHCTBFMCQXCHSTGSWGJUUQWMEVSBPHHGGFYYBLXRZVHWBBDMHWXNOCLSJXNCGK");
    msg.visibility.assign("YPQFHRCDNZEHXCEIXKIIHHQNJWRMIUVWYXPTKJDOFLBMDKXBDYHSGXYFOPLMDXFQDHQPNVBIQJOCLRGUGLUDQWVRMSRFASHVZCQJANPXOKMUBBACYNVUYUROCLWWUEKRUATMKPRWPNICQAZOBWVWGZBMVOYZMWGMTZAFFFNTNSLPUWCJXOEJP");
    msg.scope.assign("NZEKDUPXTSEJKKWBMTCQDDPKNJIGNONSSLZPOLWDMDAXCUWMZFXOYPFABOYVFWCJCBZVLNIVQMDZJNJVYJGWOHIAGBSLZRUBYVVRWKDBKUWQHZIRHCPABCCMHYQHUWNNTLFKMQFYBLEIUADRGRXTAFYDTOLHKGQOCMTVEPTIWGNVSAAZ");

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
    msg.setTimeStamp(0.628870393388);
    msg.setSource(56347U);
    msg.setSourceEntity(155U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(31U);
    msg.name.assign("TJJNWAJWHHRHYZFXGSGCWYDVHQATXJMUOLZVPKDB");
    msg.visibility.assign("COVATQSNXXQTSOYACBMSNFBWMJGVKAICZPEBWMQDYZSLYNIEMGKDPVFUXKCKHUEHKWDFHVRPNVLXUCIUZPFDMYNKSGZZQWPWSUGQJKCHZNXOTEQYOXBQIHKTYAQLRFCPALTJHOXKTBRONWOINBIHULFHV");
    msg.scope.assign("SUSGSIKZOWWJUMEIGRLLCDCTLJVGDSQVEFFHDUTPNBXKUKQSETCAXHIXDITVVQIQUZZBOLPCRCXKNPYRHRLQPSOPTGUINADBEKTLFTOXVJXIJAKMEOWVWLHYUAYIOLFJDUXUMEQMRPOZDSIFSTFNCJACNRCGBPGBZWQAWHAZRLWNGUEPBADKYJBYRBXMBPFLERVXDQKYENNCNR");

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
    msg.setTimeStamp(0.588790493869);
    msg.setSource(41026U);
    msg.setSourceEntity(39U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(20U);
    msg.name.assign("BHRTGATHQRTOMVGUMNMMEKSNEEWEJSMDLZFSJZOHPGZITZOFXIKDNVGCTQKCZYFIYFLNOCXMXLYHZS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VAGBNZJTMSIUJJAZHTITDXYCIBXPQWKQCKMODIPJPOBECZYLWPBAKURCUXNZUNCKGOAOFAOJEFYUYJFSXEFUVSBAXTPOQFSERZOMQR");
    tmp_msg_0.value.assign("KBDEHWRRGWZNZOKFQDZRPBMTIGVPKUTQEEBSUMWBOEKAPYVUCXXPFALBYXIHVJWGCUQXFZVVYVNNKQQYLSNYZOJGF");
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
    msg.setTimeStamp(0.28674027378);
    msg.setSource(42511U);
    msg.setSourceEntity(50U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(25U);
    msg.name.assign("BBPGLQIGKVWNYWQGFKUHFRZSOTFRPPQZAAAGIKDXIMGXYMB");

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
    msg.setTimeStamp(0.333309572187);
    msg.setSource(52815U);
    msg.setSourceEntity(198U);
    msg.setDestination(34598U);
    msg.setDestinationEntity(161U);
    msg.name.assign("QCOVRRNOGJUGVIMBCDEGPILVZYVBMPKWOXJZEIBAXZGHITNMLHJFWCGVXLADSNTWYYKNVVPIKZQAUYODOBHUPKRMEUDHGLFRCUW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OTSIEFOFMWLNUFELPUHEMZUHQDBSILHFIBWVCDZVKXQJZJPBZWVWNHURZITIJGEICLDRUEDZMSIHTNJCKOYYWYBKZLBDGDRQMDSVTPZMUSAWFAAYKDHWSPRXQDEZVXQJHCAEQXPJPJLTFOOGXAMVVJANOBLYQCSXGALNAVDCSAPCNBLRLIKKYPFUOVBMBWJYRUBXTIYKFWUONMEKGMCPNYNRGTSQQTNHEGUIKRJYRFCXOFGXQ");
    tmp_msg_0.value.assign("KCMXZQDPXILVKKTGYOLLWENGZWRVAGNHPNYRSEFDITDSFYRAKXZSDHWKAQOFECMSVPJEWXKXHYBMVCADTWXIBLRIUPPJBTMRTTQCJZCTLOLUIEIFUFNDQURCNEGGSAHYNJWPBOVKIXNYQFKVXKDDNJVQAFOJUYHHZVFGYWGUARMEMAMBJZULSQPJHXYZRSBTBLIEXHZGFSOPNTMANHMUZTEVJCDKHZVEQC");
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
    msg.setTimeStamp(0.492128055123);
    msg.setSource(45833U);
    msg.setSourceEntity(5U);
    msg.setDestination(19587U);
    msg.setDestinationEntity(239U);
    msg.name.assign("FZGYOYIIIOUFMKQTUEPBRLIZNYBBHVTKGSKMEEHNUEPCVYAGGDN");

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
    msg.setTimeStamp(0.893210031501);
    msg.setSource(26397U);
    msg.setSourceEntity(230U);
    msg.setDestination(30996U);
    msg.setDestinationEntity(3U);
    msg.name.assign("XMTIBCAJLPURLWKALUQPJEDAVGRSRYEHDEEJDOTFVWADKVOQYRIOXOCGZUQWORBNSFSQYQAEKGGIFENHPWIHQPAHXKYRKQZBXNCGTPUMOFERZFMNDWYNLJZYHOPSBFXSHBYTDPSHBDVZMKOLSOFGVZKMNMIMDUVLXRSUBKFJGXONCQYZSC");

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
    msg.setTimeStamp(0.457769225087);
    msg.setSource(56174U);
    msg.setSourceEntity(128U);
    msg.setDestination(2536U);
    msg.setDestinationEntity(95U);
    msg.name.assign("PQZYIPUTCKKDSMIRCXCRIXWBUAQDYPGDTYPRXAJBQGIJIKSEZILBYYPIQVJMMTUFNDVHNUGUPHEGDBBNHWIERHDCAZHFOJSKWIZWIOXFLAMNXROCYMREBHJUKLLBVQMNDJJYCOHDYKCPTTSZFDCLYLNOQRSPKVSDLEFPVNWJARRTBQHSVZSGLEGGKNNOVOVQJAYBATFFUFUEGQKLPMAQTZVEWOHGZZX");

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
    msg.setTimeStamp(0.0374013212543);
    msg.setSource(46712U);
    msg.setSourceEntity(100U);
    msg.setDestination(58728U);
    msg.setDestinationEntity(156U);
    msg.timeout = 4058353808U;

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
    msg.setTimeStamp(0.492512789276);
    msg.setSource(27514U);
    msg.setSourceEntity(43U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(73U);
    msg.timeout = 83022530U;

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
    msg.setTimeStamp(0.195902809499);
    msg.setSource(29947U);
    msg.setSourceEntity(188U);
    msg.setDestination(12620U);
    msg.setDestinationEntity(210U);
    msg.timeout = 2882222346U;

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
    msg.setTimeStamp(0.0198926172557);
    msg.setSource(17399U);
    msg.setSourceEntity(115U);
    msg.setDestination(42227U);
    msg.setDestinationEntity(207U);
    msg.sessid = 2556830435U;

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
    msg.setTimeStamp(0.799865080239);
    msg.setSource(2498U);
    msg.setSourceEntity(32U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(215U);
    msg.sessid = 1722603246U;

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
    msg.setTimeStamp(0.0584317337454);
    msg.setSource(33550U);
    msg.setSourceEntity(31U);
    msg.setDestination(39788U);
    msg.setDestinationEntity(112U);
    msg.sessid = 2017976041U;

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
    msg.setTimeStamp(0.719890276718);
    msg.setSource(63870U);
    msg.setSourceEntity(191U);
    msg.setDestination(42767U);
    msg.setDestinationEntity(151U);
    msg.sessid = 815797478U;
    msg.messages.assign("TZDMWVZILZAHAM");

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
    msg.setTimeStamp(0.179259920731);
    msg.setSource(29957U);
    msg.setSourceEntity(37U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(250U);
    msg.sessid = 3182418707U;
    msg.messages.assign("BJUNPXDLDMYWSZFCRSJKRCXWUFTYYJIGFINVS");

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
    msg.setTimeStamp(0.685333361203);
    msg.setSource(33067U);
    msg.setSourceEntity(134U);
    msg.setDestination(61474U);
    msg.setDestinationEntity(26U);
    msg.sessid = 2093203154U;
    msg.messages.assign("AKTNDFPVVZLJZADZJDAFOYPMAB");

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
    msg.setTimeStamp(0.0245964007438);
    msg.setSource(61742U);
    msg.setSourceEntity(30U);
    msg.setDestination(6321U);
    msg.setDestinationEntity(6U);
    msg.sessid = 4247799619U;

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
    msg.setTimeStamp(0.356931866184);
    msg.setSource(7875U);
    msg.setSourceEntity(37U);
    msg.setDestination(53442U);
    msg.setDestinationEntity(35U);
    msg.sessid = 976417215U;

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
    msg.setTimeStamp(0.481800219048);
    msg.setSource(21311U);
    msg.setSourceEntity(179U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(183U);
    msg.sessid = 3619019381U;

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
    msg.setTimeStamp(0.663516975867);
    msg.setSource(51748U);
    msg.setSourceEntity(153U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(87U);
    msg.sessid = 3893215956U;
    msg.status = 10U;

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
    msg.setTimeStamp(0.418807785193);
    msg.setSource(22483U);
    msg.setSourceEntity(93U);
    msg.setDestination(5007U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1002541569U;
    msg.status = 187U;

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
    msg.setTimeStamp(0.432600381964);
    msg.setSource(41440U);
    msg.setSourceEntity(234U);
    msg.setDestination(31576U);
    msg.setDestinationEntity(115U);
    msg.sessid = 1499685552U;
    msg.status = 218U;

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
    msg.setTimeStamp(0.644548326659);
    msg.setSource(4648U);
    msg.setSourceEntity(43U);
    msg.setDestination(63683U);
    msg.setDestinationEntity(31U);
    msg.name.assign("OCHKTTJOVNODVAWSFBJAKJNTEZOWYUUUKDIPQXMLJJDDUKHFIJZSYUWASTWNFDYKE");

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
    msg.setTimeStamp(0.635733988622);
    msg.setSource(4359U);
    msg.setSourceEntity(117U);
    msg.setDestination(49587U);
    msg.setDestinationEntity(115U);
    msg.name.assign("PFJWYEVMWFGEWQXCJHLRUJXJSJOOTHYZNZCQGPDTOSUORWXUTEOMFGLJLDKKINGEKKBTSCKGLYVLFPAWEHMIRWIPQALNDFTBPTXEETLOEDOCRFQPYNDXWRBEWHCSSZXHPSIIJUHJKFHUSBPKWHBIGXALHVKRSDRQDGCIGAJFHOACMEZTMRUYBQYMYVCBLWIJIABVVVZVQNBMDGDU");

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
    msg.setTimeStamp(0.214515220976);
    msg.setSource(64458U);
    msg.setSourceEntity(228U);
    msg.setDestination(16233U);
    msg.setDestinationEntity(88U);
    msg.name.assign("XLJLQXMFICJ");

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
    msg.setTimeStamp(0.981655050137);
    msg.setSource(5902U);
    msg.setSourceEntity(32U);
    msg.setDestination(22640U);
    msg.setDestinationEntity(30U);
    msg.name.assign("AUCKPNTZDWKIYTFPDYUJGHRKMBBTVKGAWXMWLQIRXPJGJLJPEKVPAZISRTDTALBYUWIYCMKWQAXUFSQSQERHIAUESY");

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
    msg.setTimeStamp(0.220503346336);
    msg.setSource(63460U);
    msg.setSourceEntity(104U);
    msg.setDestination(60651U);
    msg.setDestinationEntity(117U);
    msg.name.assign("ZMFWTKVGUGTBAMHTHVUZVIUHWDVMYGVGKYHKQTSBK");

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
    msg.setTimeStamp(0.846822661955);
    msg.setSource(59875U);
    msg.setSourceEntity(124U);
    msg.setDestination(15770U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ELMOKONYFCWZMJVXQRMEIUSPTSARB");

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
    msg.setTimeStamp(0.0567668953068);
    msg.setSource(44379U);
    msg.setSourceEntity(165U);
    msg.setDestination(33005U);
    msg.setDestinationEntity(4U);
    msg.type = 39U;
    msg.error.assign("PFCEHCQSXBSDJDNETKRLBALUKHMWRGXJCBENZNODCZXQFKGTIUWLTQOTEESDVXYYHWOYFEXZSEARHVBQPSVVIFYAMUJBTMHNYGCAUAKQQCIWZZPPFDQBCPEGYIRNYGZFTROXFOUKDLJPMUSWGIAWZVVJLMGMWBMKTSKSJAXFMRFL");

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
    msg.setTimeStamp(0.64017115061);
    msg.setSource(36958U);
    msg.setSourceEntity(198U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(152U);
    msg.type = 209U;
    msg.error.assign("PGJHKCYHOSPSEVXEUOMGTMRICCXXRJMKYVATIZORBBCUZIDVEZQAXFCIWJNKGINMKHPFYVDKDGQDTOABKVISIPGWUODYCCHBAINRSXWDVDMVOOLXENBOKKQFWVFWKJHJHYRRLXQFSXZMJGWYUVTQZEYKIAFATLPWULFYGZAPOTTG");

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
    msg.setTimeStamp(0.583233665065);
    msg.setSource(38684U);
    msg.setSourceEntity(174U);
    msg.setDestination(14143U);
    msg.setDestinationEntity(152U);
    msg.type = 189U;
    msg.error.assign("NWUOTXVRXABPBZCIBRGZLALWMAIISIKQUCXUHCLZWSCGKGYMSDILXKCVEJIVDLYTYMTEOVNXXLSRQJHNPZFZAOEUPEUHGSBPTFWGCCGLGSAQFVQNIBZPNNZHLERIHSTOAKYFZNELXOJYJAHFMIYDDVBXGNHWDTRSMKBXWUQOWPQPYBPBEOETQESCHWRDCDUJF");

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
    msg.setTimeStamp(0.284720087908);
    msg.setSource(39782U);
    msg.setSourceEntity(99U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(106U);
    msg.seq = 58319U;
    msg.sys_dst.assign("ZSEKSCEDDJCULSDOZHJHPPVSRYYFMBQIHTEDNHDOKFUJHAWVRTFFKWTVTLRKQOOYLSEKUWXOAFGMXOFSENZIUQAIDEVHUQJZRMYYCALWSTGBAOBZJKDUXCRKGYQQACXRTCGFVTPYAJDVBEZDQZWQIJHPNXAKPGGGQRIBAFUZPFXIERCVNWBCNJBSGBNJULLXAKLCWMPVNXGWH");
    msg.flags = 155U;
    const char tmp_msg_0[] = {-101, -116, -108, 85, -21, 89, -43, 54, 64, -23, 46, 99, -11, 15, -101, 83, -101, 62, -62, 124, -76, 14, -52, 99, 79, 88, -21, -121, -33, 77, -14, 89, -45, -10, 53, 79, 34, -108, 18, 0, 89, -84, -31, 121, 89, -100, 48, -82, 74, 100, 65, -68, 34, 16, -68, 5, 24, -114, -82, -88, -50, -31, 80, -54, 112, 67, -14, 102, -72, 120, -13, -90, 105, 7, -86, 35, -4, 56, 102, -92, 21, -32, -91, 33, 116, -47, 92, -49, -26, 124, -104, 5, -98, 8, -2, -35, -113, -35, -49, -66, -65, -88, 36, 52, 51, -32, 33, 82, 41, -27, -75, 92, -16, -127, -38, 63, -43, 45, -13, -88, 104, -85, 37, -31, 107, 48, 44, -72, 94, 83, -117, 120, 4, 57, -118, -85, -30, -46, 77, 93, -108, 80, -94, -35, 14, 115, -69, 85, 74, 68, 83, 125, 22, -47, 90, -57, 124, -80, -47, -35, -112, -54, -77, -28, -23, -102, -65, -39, -20, 84, -100, 10, 33, 72, 38, -61, 56, 12, 113, 58, -101, 119, -47, 41, 2, 124, -102, 106, -70, 115, 77, -7, 15, 39, -92, 87, -76, -128, 89, -80, -5, 44, 30, 101, -79, -110, 107, 58, -126, -118, 75, -3, 120, 54, -123, -38, 43, 68, -21, 100, -72, 8, 67, -50, -27, -36, 116, 119, 87, 36, 118, 11, 29, -75, 65, -89, 113, 88, -64, -10};
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
    msg.setTimeStamp(0.492308903984);
    msg.setSource(14931U);
    msg.setSourceEntity(237U);
    msg.setDestination(46769U);
    msg.setDestinationEntity(127U);
    msg.seq = 65258U;
    msg.sys_dst.assign("WOZWKSPGAKJDIKERDXSBZQMKCQYNPRMHIUBFWVLJEICQUHQWUMABNYXEKMDCROGTMPOCLIDJACGXAAIJOHEZYLYPRWCBKRMWDPOEOFQNZIWTDXNLGCAHURGFRGFTGPXNLILSLNQUKKVSUTORDHEPHHYYRTTLZZMJJGJTGRSZK");
    msg.flags = 241U;
    const char tmp_msg_0[] = {-21, 81, -107, -8, -72, -51, 87, -31, 109, 10, 8, -11, -128, -16, 67, -62, 39, -1, -78, -113, 61, -76, -66, -48, -33, 88, 55, 80, -65, 105, 75, -58, -69, -93, -1, 63, -39, 80, -80, -30, -16, 10, 114, -66, 11, -103, -15, -38, -42, 11, -105, -122, -105, 30, -6, 43, 110, 14, -114, 59, -68, -24, -17, -9, -18, 55, -25, 117, 126, 125, -20, 48, -117, 99, 58, -98, -62, 3, 75, -35, -44, 42, -11, -25, -97, -2, -63, 99, 122, 86, 1, 80, 67, 81, 58, -16, -47, 110, -83, 66, -38, 116, -2, -120, 50, 60, 70, -86, -111, 65, 50, 102, -116, 125, -91, -99, 49, 25, -108, 92, -69, -42, -106, -14, -48, -7, -39, -34, -115, -65, 35, -121, -76, 80, -16, -29, -47, 33, 88, -120, 39, -108, 105, 27, -11, 61, 118, 94, 38, -99, -105, -14, 113, -37, 34, 81, 92, -66, 108, 70, -53, -3, -111, -84, -73, 36, -59, 93, 70, -53, -75, 8, -126, 121, 20, -43, -105, 71, 81, -112, -120, -125, -92, 51, 121, 8, 6, -102, -92, -22, -90, -87, -89, -99, 9, -98, 50, 28, -22, -100, -59, 84, -98, -37, 71, 3, 80, -53, 89, 77, 113, -24, 74, -54, -35, -17, -23, 54, -15, 114, 121, -97, -27, 126, -67, 55, 60};
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
    msg.setTimeStamp(0.0526356544706);
    msg.setSource(20548U);
    msg.setSourceEntity(54U);
    msg.setDestination(58769U);
    msg.setDestinationEntity(77U);
    msg.seq = 37299U;
    msg.sys_dst.assign("VRHRNFDZVIQHODQTZORWUQVGLYCWSFGTSWRTMUIUFOFLCBSSWZKHCJOSKNUXY");
    msg.flags = 141U;
    const char tmp_msg_0[] = {-100, -19, 107, 51, -30, -27, -23, -122, -15, 25, -96, -98, 64, 114, 118, -16, 72, 118, -103, -11, -14, -15, -26, 26, 56, -33, 79, 56, 30, -74, 20, -56, -110, 16, 90, -44, -79, -32, -45, 87, 23, 98, -68, 78, -24, -35, -112, 108, -60, 44, -37, -128, 67, -94, 93, 60, -36, -28, 20, 55, 81, 75, 70, -89, 17, -34, 121, 38, 17, -53, -28, 113, 120, -61, -82, -34, 92, -104, -33, -84, -11, -123, -103, 84, -75, 20, 120, -122, 107, 95, 17, -118, -51, -89, 126, 71, 48, -105, -28, 8, 23, -88, 98, -87, 53, 111, -38, 25, 109, 113, 14, 27, 89, 22, 42, -75, 1, 88, -103, -27, -99, 19, 49, -88, 109, 106, 126, 52, -46, -31, -83, -102, 31, 59, -101, -118, 108, 49, 67, -86, 72, -106, 100, -10, -14, -75, -113, -118, -24, 125, -52, 35, 48, 67, 116, -78, 91, 82, -34, -67, 109, 49, 56, 2, 96, -60, -103, -24, 101, -9, 61, -63, -88, -40, -79, -30, 104, -91, 66, -85, -27, -80, 117, 41, -21, -103, 122, -80, 104, -65, 109, -74, -37, 41, 55, -90, -47, 0, -70, -108, -96, -85, 36, -79, 40, -22, -122, -43, -95, -115, -30, 114, 7, 39};
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
    msg.setTimeStamp(0.0352621448694);
    msg.setSource(7846U);
    msg.setSourceEntity(40U);
    msg.setDestination(3168U);
    msg.setDestinationEntity(131U);
    msg.sys_src.assign("QPDQRFHNOYFQVZRGQPUMDWVEHJBHOKAZVCFFKXOUXKPUMTJCHNMEMORTKZEIVNHJRUTJXLNSSGNDODRYTYCJAWCVPDPFTECGMNYUNOZLJBRMLYSVGAIPQBWVCXAYURSQJIIVVHMALZANWGIPAKJKKLTWPDSYQFFLRSLXQFDBGBDOAQDPAOHZXPLNWGIZGHTWJZLQWB");
    msg.sys_dst.assign("QFTGZBNIOXOMLIAIGDMLINSYGLKFXJEYOZKHAOUYTEUPTVSHYTTQRSWZDJBLGKOPTQVEMCXUWOLUYUVUHYMHCPEBWZJJKROAFTGDGYXHLLFJQNSIUGOLKSAMVOICQJDWBIEWEZPHJBYZKMOXQWXKPDLD");
    msg.flags = 254U;
    const char tmp_msg_0[] = {-119, -28, 70, 126, -85, -29, -27, 93, 80, -114, 106, -33, -100, 85, 34, 21, -82, -114, 102, 46, -59, -79, 57, -19, -43, -11, -53, -32, -26, -76, 48, 15, 65, 41, 75, -22, -71, -34, 33};
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
    msg.setTimeStamp(0.936091710074);
    msg.setSource(6393U);
    msg.setSourceEntity(88U);
    msg.setDestination(28757U);
    msg.setDestinationEntity(121U);
    msg.sys_src.assign("OKUZPQIZFNWTBVMTMYUOJNDNLGPZBCGIHTKVXBPTZJYZYMBGFRYOSRWQWXOZTLEHQZNFLOKLRRHABHGYDWF");
    msg.sys_dst.assign("DIAJBQTNLPNMHYWVTNGDUMGTAIJUPXWREYUJXLQNCBZHMVXOPZOIDWZUHDJIOBNNQHSMCHHMKVQBVIVUSNLUNKJHORGHOKKQSUSZERREPUCUGASWJQCYXQWRPDEGZKBNDVWJVLVFOKCRFXFTQDZTNKBORBLCMGL");
    msg.flags = 4U;
    const char tmp_msg_0[] = {38, 118, 118, -120, 16, 123, -79, 57, -87, -119, 34, -126, 37, 22, -39, -43, -2, 32, -81, 68, 125, 106, -110, 101, 76, -29, -80, 125, -71, -97, -51, -98, 46, -59, 36, 54, -43, 93, 31, 22, 108, 66, -91, 32, -45, 88, -88, 74, 3, 41, 87, -108, -44, 123, 14, -108, -46, 112, 28, -80, -44, -87, -33, 7, 19, -58, 29, 106, -118, -92, -37, 15, 90, -32, 34, 6, 5, -53, 48, 97, -19, -125, -6, -83, -64, 18, 122, 70, 111, 84, 30, 31, -96, -35, -41, -82, -4, 94, 6, 89, -122, -109, 47, 35, 89, 119, 68, -21, -106, -94, 32, -69, 16, -95, 56, -57, 17, -54, -17, 117, 11, 113, -31, 34, 46, 119, -93, 61, -97, -46, -37, -86, 19, 20, 85, 125, 24, -91, -28, -22, -26, 53, -35, -110, -6, -81, 90, -123, -16, -83, 113, -62, -93, 110, 51, -90, -39, -107, 92, 103, 81, 28, 56, -9, 76, -75, -100, -124, -120, 41, -114, 52, 119, 117, 0, -11, 104, 18, 9, -55, -56, -119, 84, 109, -47, 121, 16, 71, -104, -95, 82, 74, -44, -43, 105};
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
    msg.setTimeStamp(0.837389194602);
    msg.setSource(26015U);
    msg.setSourceEntity(164U);
    msg.setDestination(16000U);
    msg.setDestinationEntity(232U);
    msg.sys_src.assign("NKBUDMNOKWUWQVOAIRVQSIEWHOANUVSCIJKPSTSJSRDLQKMKBTQZQTXSGKBARERDXTJGKRUYMHAVUPIMHLCCBYPPXOEDWYVYXVZURLZJFCBUAWDFHZTWFBEIUWTWHYBSYIFPADGRDGBGHEKZIEGJHZFEVMNFUTGCTYZNHHXCYYEJJOLHNBGONQPWIMLCFFVYQVDXQQMIQIOZZAGXJBAAM");
    msg.sys_dst.assign("SEXUOLAADXYFMVED");
    msg.flags = 86U;
    const char tmp_msg_0[] = {-118, -69, 95, 6, 110, 20, 26, -34, -118, -91, -72, -83, -31, -13, -66, -104, 88, 32, 60, 110, 94, 97, -33, -4, -3, 28, 2, -50, -115, 43, -107, 11, -82, -13, -78, 68, 41, 4, 80, 95, -49, -109, -114, -103, 18, -49, -79, 72, -5, -61, 92, 57, -116, 39, -21, 74, -33, 110, 125, -63, -108, -20, 51, 106, -34, 115, -60, 117, 126, 41, 115, 52, -9, 53, 92, 59, -103, -12, 82, -101, -50, -104, -39, 22, -103, -113, -90};
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
    msg.setTimeStamp(0.217521512623);
    msg.setSource(21276U);
    msg.setSourceEntity(249U);
    msg.setDestination(22058U);
    msg.setDestinationEntity(108U);
    msg.seq = 6658U;
    msg.value = 52U;
    msg.error.assign("FESMEOZYCAQKZPUZBZPWLNXWELHHCIIDNZVREHMQUYCJNAGRRMSXTVOPFONSPZLPVCTGOPMDBMBCZYSKQAZAAFXUAGHYGCSDHTUEDXFMEVGJTC");

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
    msg.setTimeStamp(0.402282805199);
    msg.setSource(63232U);
    msg.setSourceEntity(148U);
    msg.setDestination(27279U);
    msg.setDestinationEntity(156U);
    msg.seq = 56479U;
    msg.value = 229U;
    msg.error.assign("VMKMFBCOCQONYUNXOTRWDSQUZETWYVHYYHLZWHVKCJVBMZTMKADXUCYIFJPRGQIAVXFSQJXMCNFTHOPHHPZEPWVILAMOMYJHULGJJFAGWQPRIQTDEDNERQZXUECUBGTRZYE");

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
    msg.setTimeStamp(0.44948808858);
    msg.setSource(24600U);
    msg.setSourceEntity(49U);
    msg.setDestination(11436U);
    msg.setDestinationEntity(16U);
    msg.seq = 163U;
    msg.value = 182U;
    msg.error.assign("ATSHULXCQFPSYPFTGYMAEKJAFIOSBSMXJVDGWAOGNMHDKPODAELZSSUWTGUZLLSWJXYQJOZJOUVPYZFRCMCBCVQQWVZGPFBKTWIUTRMJPZOEZEHGFCRSTRFEJMNGBPOJBJEDNBQDQUXGNGLKBNYRXPPHDFCTWHUFAWOKMQANARHTCNHWLVYIXBMVMIYIZIZVRYPKKLFVHCVILRVBUITNRAEOITLHHBIYQWLXNKZDUA");

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
    msg.setTimeStamp(0.085280941633);
    msg.setSource(41955U);
    msg.setSourceEntity(92U);
    msg.setDestination(10014U);
    msg.setDestinationEntity(151U);
    msg.seq = 962U;
    msg.sys.assign("VNOXHHRNEFHTSMKUUMVZEKHDHCDWTEJGCYJFBPIRIMAZSIXLMUBMXYDWWAZLBFLRBZQECAHUNDICW");
    msg.value = 0.096330183984;

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
    msg.setTimeStamp(0.285560988181);
    msg.setSource(62926U);
    msg.setSourceEntity(36U);
    msg.setDestination(31658U);
    msg.setDestinationEntity(218U);
    msg.seq = 49385U;
    msg.sys.assign("PXJEHBEMFBPKIFZETOEVJAIUDQOMPQUBSYWTAGUMRWHHUAGXSBTTQCNJBAYCAWHSPEPHCQWIWZKHW");
    msg.value = 0.0974720490689;

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
    msg.setTimeStamp(0.557751500033);
    msg.setSource(4319U);
    msg.setSourceEntity(241U);
    msg.setDestination(61565U);
    msg.setDestinationEntity(215U);
    msg.seq = 34380U;
    msg.sys.assign("BRMFCCKMHLEYOATZLDMRPQVNRHRRARWNXUUFDBGWHWWYMOLAHXVDNQIXCPPCTJNUIFDBMJDYILYGVEWCIBLEZNFPFDSXXDOTYMZEZKFKHUYCMUWXOUVQVKSMKZSQBDVFMHBAQJOOUECAXLENHTOJZQIHZTGONOUZAYNAWBQKSALNXEYVGAPRBSVEGQZSRLQTYIPKYEKPGFISSOUVTLGWS");
    msg.value = 0.828831243308;

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
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.827656164824);
    msg.setSource(44659U);
    msg.setSourceEntity(70U);
    msg.setDestination(47987U);
    msg.setDestinationEntity(122U);
    msg.action = 43U;
    msg.lon_gain = 0.280777198596;
    msg.lat_gain = 0.484157987056;
    msg.bond_thick = 0.729780892728;
    msg.lead_gain = 0.40051529591;
    msg.deconfl_gain = 0.243975034067;
    msg.accel_switch_gain = 0.313335122986;
    msg.safe_dist = 0.0421121560348;
    msg.deconflict_offset = 0.320156476835;
    msg.accel_safe_margin = 0.537198075507;
    msg.accel_lim_x = 0.315604299679;

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
    msg.setTimeStamp(0.110919172153);
    msg.setSource(36859U);
    msg.setSourceEntity(25U);
    msg.setDestination(20621U);
    msg.setDestinationEntity(93U);
    msg.action = 206U;
    msg.lon_gain = 0.410857095256;
    msg.lat_gain = 0.48776972176;
    msg.bond_thick = 0.970013462153;
    msg.lead_gain = 0.983347149096;
    msg.deconfl_gain = 0.828958637099;
    msg.accel_switch_gain = 0.268395531056;
    msg.safe_dist = 0.784943966367;
    msg.deconflict_offset = 0.738088315825;
    msg.accel_safe_margin = 0.13264885287;
    msg.accel_lim_x = 0.294507374936;

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
    msg.setTimeStamp(0.128018578382);
    msg.setSource(31026U);
    msg.setSourceEntity(245U);
    msg.setDestination(9784U);
    msg.setDestinationEntity(78U);
    msg.action = 11U;
    msg.lon_gain = 0.137291289276;
    msg.lat_gain = 0.808192453736;
    msg.bond_thick = 0.262607935463;
    msg.lead_gain = 0.330870672122;
    msg.deconfl_gain = 0.931612465775;
    msg.accel_switch_gain = 0.126852245884;
    msg.safe_dist = 0.193447821895;
    msg.deconflict_offset = 0.732141101059;
    msg.accel_safe_margin = 0.616790778745;
    msg.accel_lim_x = 0.348723921079;

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
    msg.setTimeStamp(0.357690724495);
    msg.setSource(5575U);
    msg.setSourceEntity(48U);
    msg.setDestination(42061U);
    msg.setDestinationEntity(76U);
    msg.err_mean = 0.096904416341;
    msg.dist_min_abs = 0.867881362833;
    msg.dist_min_mean = 0.0154000106863;
    msg.roll_rate_mean = 0.107009586176;
    msg.time = 0.577703425013;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 31U;
    tmp_msg_0.lon_gain = 0.38272037709;
    tmp_msg_0.lat_gain = 0.413529744314;
    tmp_msg_0.bond_thick = 0.877218179182;
    tmp_msg_0.lead_gain = 0.836652384914;
    tmp_msg_0.deconfl_gain = 0.356104908809;
    tmp_msg_0.accel_switch_gain = 0.178482231919;
    tmp_msg_0.safe_dist = 0.571831511081;
    tmp_msg_0.deconflict_offset = 0.768458976653;
    tmp_msg_0.accel_safe_margin = 0.0550052409648;
    tmp_msg_0.accel_lim_x = 0.582313468628;
    msg.formationcontrolparams.set(tmp_msg_0);

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
    msg.setTimeStamp(0.842132765956);
    msg.setSource(65199U);
    msg.setSourceEntity(166U);
    msg.setDestination(42691U);
    msg.setDestinationEntity(138U);
    msg.err_mean = 0.314294815012;
    msg.dist_min_abs = 0.297403592753;
    msg.dist_min_mean = 0.578805213979;
    msg.roll_rate_mean = 0.360158927545;
    msg.time = 0.99404312803;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 72U;
    tmp_msg_0.lon_gain = 0.288456462298;
    tmp_msg_0.lat_gain = 0.15306349427;
    tmp_msg_0.bond_thick = 0.593207560263;
    tmp_msg_0.lead_gain = 0.910430832387;
    tmp_msg_0.deconfl_gain = 0.766381563834;
    tmp_msg_0.accel_switch_gain = 0.585283533061;
    tmp_msg_0.safe_dist = 0.955411130707;
    tmp_msg_0.deconflict_offset = 0.999950749816;
    tmp_msg_0.accel_safe_margin = 0.436449291253;
    tmp_msg_0.accel_lim_x = 0.820060082937;
    msg.formationcontrolparams.set(tmp_msg_0);

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
    msg.setTimeStamp(0.584551082275);
    msg.setSource(28263U);
    msg.setSourceEntity(142U);
    msg.setDestination(56342U);
    msg.setDestinationEntity(171U);
    msg.err_mean = 0.337648546169;
    msg.dist_min_abs = 0.720642375126;
    msg.dist_min_mean = 0.574613728797;
    msg.roll_rate_mean = 0.33942272476;
    msg.time = 0.724943931248;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 147U;
    tmp_msg_0.lon_gain = 0.0416927498348;
    tmp_msg_0.lat_gain = 0.563731242546;
    tmp_msg_0.bond_thick = 0.112009410133;
    tmp_msg_0.lead_gain = 0.981476573298;
    tmp_msg_0.deconfl_gain = 0.993304584708;
    tmp_msg_0.accel_switch_gain = 0.837965352014;
    tmp_msg_0.safe_dist = 0.274750208712;
    tmp_msg_0.deconflict_offset = 0.465389749385;
    tmp_msg_0.accel_safe_margin = 0.900255069038;
    tmp_msg_0.accel_lim_x = 0.649111311897;
    msg.formationcontrolparams.set(tmp_msg_0);

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
    msg.setTimeStamp(0.653838513101);
    msg.setSource(2557U);
    msg.setSourceEntity(133U);
    msg.setDestination(54768U);
    msg.setDestinationEntity(47U);
    msg.uid = 6U;
    msg.frag_number = 218U;
    msg.num_frags = 116U;
    const char tmp_msg_0[] = {-26, -115, 110, 28, -65, -30, -51, 6, -119, 94, -74, -64, 92, 96, -91, -96, 55, -108, 21, -72, -66, 47, 21, 15, -2, 75, -69, -19, 118, -127, 3, 79, 95, -122, -117, 96, -126, -126, -35, -90, 60, 113, -54, 49, -51, -105, 46, -24, -46, 9, -53};
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
    msg.setTimeStamp(0.262828295233);
    msg.setSource(62325U);
    msg.setSourceEntity(5U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(154U);
    msg.uid = 12U;
    msg.frag_number = 49U;
    msg.num_frags = 180U;
    const char tmp_msg_0[] = {-128, -115, -17, -53, -55, -74, 35, 60, -68, 15, 60, 10, -41, 6, 22, -92, -72, 115, -87, 110, -23, 74, -50, 12, 107, -26, 78, -84, -8, -32, 21, -105, -120, 114, 110, -65, -27, 120, -103, -44, 0, 94, 95, 12, 11, -1, -74, -86, -79, -72, -83, 44, -59, -111, 116, -120, 82, 72, 104, -7, 50, 102, 36, -76, 75, -11, -30};
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
    msg.setTimeStamp(0.618551345158);
    msg.setSource(51100U);
    msg.setSourceEntity(252U);
    msg.setDestination(48378U);
    msg.setDestinationEntity(235U);
    msg.uid = 181U;
    msg.frag_number = 153U;
    msg.num_frags = 200U;
    const char tmp_msg_0[] = {53, 77, -58, -31, -100, -127, 102, -40, 88, 16, 98, 29, -111, 65, -41, -128, 95, 115, -77, -77, -18, 99, 68, 45, -62, -127, -12, 43, 22, 23, -39, -14, -79, 62, -102, -11, -87, 52, -88, -4, -110, -67, -109, 20, -55, -107, -7, 126, 14, -76, 16, 94, -85, -76, 49, -55, 17, 22, -43, 16, -48, -10, -21, 90, -105, 6, 73, -32, 106, 106, -28, 101, -85, 79, 25, -121, -8, -67, 45, -99, -6, -3, -121, -84, 109, -25, 81, -22, -121, -46, 92, 56, 99, 105, 35, -62, -69, -52, -1, 64, 54, -115, 5, -24, -27, 123, -58, 50, 61, 105, 41, -35, 56, -7, 51, -90, 18, -11, -117, -81, 92, -82, 52, -57, 76, 105, -75, 82, -1, -60, 23, 11, 87, 20, 5, -75, -118, -19, -30, 95, 67, -11, 43, 78, -75, -45, -96, -43, 60, 89, -35, 47, -11, -14, 1, 18, 45, 84, -120, 93, -46, 57, 29, 0, 102, 53, 64};
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
    msg.setTimeStamp(0.831310282464);
    msg.setSource(17512U);
    msg.setSourceEntity(105U);
    msg.setDestination(51923U);
    msg.setDestinationEntity(94U);
    msg.content_type.assign("BBSHTAQGKLUVGBKJXKPXFUEYJHIPEMUFWTXVYYGROZFULLKQGZOJIRIQRRNUECSFHEXBHIZRZXTCMEMDJPOUDVQHWTXZQUAKUAWWYJOKARSLLPOHOLBIEBCJECYIRXA");
    const char tmp_msg_0[] = {-77, -112, 38, 1, -18, 83, -114, 21, -3, 11, 64, -71, -16, -20, 124, -36, -3, -123, -10, 41, 124, 23, -25, -17, 14, 71, -39, 51, 69, -31, -39, -48, 1, -70, 99, 21, 111, 111, 42, 72, -9, -40, -60, 80, 84, -115, -60, 12, -33, 18, -12, 66, -15, -43, -14, 87, -75, 44, 124, -128, 103, -93, 67, -84, -47, -79, 92, 89, 56, 24, 27, -27, -83, 39, 46, 78, 123, -116, -124, -34, 13, -19, -117, -56, 59, -118, -96, -43, -73, 103, -99, 90, -49, -30, -60, 93, 37, 80, -24, -85, 118, -127, 120, -40, -28, -37, -87, -103, 20, 27, -12, 18, 4, 109, -30, 94, -110, -18, 62, 98, 87, 42, -44, 61, 98, 67, -69, 66, 94, -36, -123, 69, -21, 48, -113, 87, 90, -40, -60, 97, -25, -2, 67, 126, 78, -67};
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
    msg.setTimeStamp(0.421911294149);
    msg.setSource(4869U);
    msg.setSourceEntity(129U);
    msg.setDestination(36978U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("CYJVMCRKYDDUCVTXWITQETBAGAHWCVVEUIXSKHPRRNSRAUMLOSXXYSNGGHIPEXEMTKJFPZHYCPGETRUOAXSWZYMMDSZIZDYEYJUZAPWLBLDCGKFZXOOLBISQNHKIXJPLGKHRUFMOFJFXNAMETNQOZJEWLQAYQWVOHRQNDLDOGIBSGQMBYAUSLRQIHUFWKTDPANEUQOYZMJVKW");
    const char tmp_msg_0[] = {-65, -44, 37, 51, -12, 102, -63, 106, -88, 75, 93, 125, 123, -73, 65, 7, 102, -38, -2, 114, -102, 57, -17, 50, -116, -30, 19, -35, 84, -51, 16, 40, -97, 43, -107, -97, 110, -108, 120, 55, 28, -82, -95, -56, -101, 3, 60, -5, -26, 87, 26, -123, -38, -65, 95, -50, -20, -61, -97, 116, 87, 72, -8, 20, 126, -40, -112, 110, 72, -46, -31, 8, -26, -36, -126, 57, -90, 46, 109, 123, -72, -124, 20, -14, 69, -21, 58, -48, -40, -7, 99, 93, 65, 49, 50, 48, -20, 68, -55, -51, 14, 62, 74, -9, -55, -108, 6, 71, -68, -47, 100, -45, 21, 48, -53, -127, 123, -46, -90, -21, 101, 57};
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
    msg.setTimeStamp(0.941662476042);
    msg.setSource(18911U);
    msg.setSourceEntity(170U);
    msg.setDestination(18277U);
    msg.setDestinationEntity(172U);
    msg.content_type.assign("MUEFZYREJFZUAQEGPBFKCQAJVHJPTCVXPDYHLWVIORNCGCDQPYEIBXEBGILEK");
    const char tmp_msg_0[] = {77, 44, -90, -100, 103, 72, -21, -94, -107, -20, -107, -37, 18, -4, -71, -116, -5, 116, 33, -112, 106, -87, -109, 47, 5, -80, 55, 17, -79, 112, 123, -27, -110, 91, 84, -36, 114, 13, -117, 29, -68, 112, 49, -115, -67, 89, -81, 60, 33, -118, 59, -27, 124, 9, 39, 70, -104, -90, 21, 77, -76, 122, -114, 52, 38, 59, -126, -90, -106, -65, 17, 38, 103, -57, 32, -9, 31, 15, 112, -90, 16, 64, 54, 56, 77, 83, 122, -25, -41, -63, -50, -13, 97, 26, 77, 90};
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
    msg.setTimeStamp(0.737911832862);
    msg.setSource(4958U);
    msg.setSourceEntity(196U);
    msg.setDestination(61574U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.839793009476);
    msg.setSource(59362U);
    msg.setSourceEntity(111U);
    msg.setDestination(33666U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.537825082743);
    msg.setSource(14192U);
    msg.setSourceEntity(130U);
    msg.setDestination(53364U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.840686275719);
    msg.setSource(14359U);
    msg.setSourceEntity(18U);
    msg.setDestination(54516U);
    msg.setDestinationEntity(206U);
    msg.target = 18773U;
    msg.bearing = 0.388750416496;
    msg.elevation = 0.779191514137;

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
    msg.setTimeStamp(0.0425357087495);
    msg.setSource(42429U);
    msg.setSourceEntity(53U);
    msg.setDestination(32415U);
    msg.setDestinationEntity(64U);
    msg.target = 10550U;
    msg.bearing = 0.169963680359;
    msg.elevation = 0.149915530652;

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
    msg.setTimeStamp(0.514163846253);
    msg.setSource(30799U);
    msg.setSourceEntity(137U);
    msg.setDestination(34753U);
    msg.setDestinationEntity(110U);
    msg.target = 7688U;
    msg.bearing = 0.125793430847;
    msg.elevation = 0.82864119187;

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
    msg.setTimeStamp(0.948323513527);
    msg.setSource(42105U);
    msg.setSourceEntity(178U);
    msg.setDestination(32641U);
    msg.setDestinationEntity(104U);
    msg.target = 34375U;
    msg.x = 0.648212501841;
    msg.y = 0.8111082169;
    msg.z = 0.706028305355;

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
    msg.setTimeStamp(0.834717928276);
    msg.setSource(32719U);
    msg.setSourceEntity(147U);
    msg.setDestination(29436U);
    msg.setDestinationEntity(111U);
    msg.target = 11639U;
    msg.x = 0.877656500943;
    msg.y = 0.265507905754;
    msg.z = 0.110914971773;

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
    msg.setTimeStamp(0.394404171138);
    msg.setSource(20720U);
    msg.setSourceEntity(73U);
    msg.setDestination(10481U);
    msg.setDestinationEntity(219U);
    msg.target = 40248U;
    msg.x = 0.135803445681;
    msg.y = 0.860167672981;
    msg.z = 0.329899073171;

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
    msg.setTimeStamp(0.798125511214);
    msg.setSource(42828U);
    msg.setSourceEntity(236U);
    msg.setDestination(7312U);
    msg.setDestinationEntity(127U);
    msg.target = 18167U;
    msg.lat = 0.0839826531196;
    msg.lon = 0.0136154116349;
    msg.z_units = 69U;
    msg.z = 0.474255455507;

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
    msg.setTimeStamp(0.953797235613);
    msg.setSource(4671U);
    msg.setSourceEntity(138U);
    msg.setDestination(3936U);
    msg.setDestinationEntity(161U);
    msg.target = 29496U;
    msg.lat = 0.585958237168;
    msg.lon = 0.560923608776;
    msg.z_units = 242U;
    msg.z = 0.489360585408;

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
    msg.setTimeStamp(0.29414705939);
    msg.setSource(64067U);
    msg.setSourceEntity(168U);
    msg.setDestination(18381U);
    msg.setDestinationEntity(229U);
    msg.target = 29782U;
    msg.lat = 0.732331484829;
    msg.lon = 0.833317884928;
    msg.z_units = 221U;
    msg.z = 0.398872664924;

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
