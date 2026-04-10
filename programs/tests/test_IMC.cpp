//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 00461bdf5ee51803f5b42f972c159299                            *
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
    msg.setTimeStamp(0.3115978156818995);
    msg.setSource(38343U);
    msg.setSourceEntity(254U);
    msg.setDestination(8357U);
    msg.setDestinationEntity(76U);
    msg.state = 10U;
    msg.flags = 156U;
    msg.description.assign("FLAMPMHSBTCYQYWVHBAZOBPFUGZOAQNJYMHRQYBDMDRRTTGASSTMDVFBCKNKPOBEGOBELMIFHNJVCIUCVBIIHODSORGWUVWPMIJUFQNZALNZCHOEPJJQEEAYHACXQJKEGWFRBQILSSULYAPDHZYRPUIZFVDBDNYGDKYVTYLSJWCKCWRZNTDM");

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
    msg.setTimeStamp(0.9320590370970512);
    msg.setSource(19391U);
    msg.setSourceEntity(37U);
    msg.setDestination(6102U);
    msg.setDestinationEntity(44U);
    msg.state = 69U;
    msg.flags = 17U;
    msg.description.assign("ZYEHXJRPIYXLUFYORDNMBAXZSUABKPTTEAQSZCGMGBCFQZNXOZXEJTOJDEMDGVPJIHIMNMNZGVQQEKSQPEZTBKTYKWKCKRDWURYAQXBPGRPMWYFBNHBH");

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
    msg.setTimeStamp(0.25666138438310226);
    msg.setSource(33859U);
    msg.setSourceEntity(70U);
    msg.setDestination(49643U);
    msg.setDestinationEntity(63U);
    msg.state = 224U;
    msg.flags = 212U;
    msg.description.assign("ILETKKZONJVEDCSNBSONHVG");

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
    msg.setTimeStamp(0.674274658185609);
    msg.setSource(51775U);
    msg.setSourceEntity(246U);
    msg.setDestination(51506U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.5360527946591215);
    msg.setSource(3945U);
    msg.setSourceEntity(144U);
    msg.setDestination(43837U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.2857103788256252);
    msg.setSource(48512U);
    msg.setSourceEntity(1U);
    msg.setDestination(57484U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.9092429971093803);
    msg.setSource(37408U);
    msg.setSourceEntity(132U);
    msg.setDestination(10439U);
    msg.setDestinationEntity(108U);
    msg.id = 41U;
    msg.label.assign("JMPIOHTQFVXVJENBBWWRIYRAFXIMRALYGKTPSXQLFKZZEDFDDYGHGFWSPXOENXOUHZKAGEMJCLUCOZNEFPSGWTQHJYRAMOMPRTHNALGRGUOHLRIKPSCQEEZVHFRPBJTYADDWNVUVMMBIEIWTMDXHNXYGK");
    msg.component.assign("NGTRRCEEPLDZSWEYJIOXLIQFCFBPXRAIUKRWEWYBVVMBKVVKAFNMTLHQJSNZAB");
    msg.act_time = 10382U;
    msg.deact_time = 59911U;

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
    msg.setTimeStamp(0.17710000826122874);
    msg.setSource(59466U);
    msg.setSourceEntity(152U);
    msg.setDestination(18156U);
    msg.setDestinationEntity(80U);
    msg.id = 231U;
    msg.label.assign("YSHWWVZOXMZJVASSTXJUIUPGUERRDGVFRVUIDEUDNBQMOFHBXNNEYUAMDQEZLEKVHZCYTGIAZNIWOWKAMQJLQMSIJHXENNDNBYLHQEZWGTXWYFIRJBMDSNWFTOBRBFCDZFHVPAJIRJQALPXTWSIKKRYCLOUHCGEOZQWQPAKOKYTXLAJVAHBKBAGUVGCVTHOCKRPYRBGJLSUYZWPVXLJCSNKFSIQEPFPDDNOCMCOXZSHGLTMRGLU");
    msg.component.assign("JNBEFSPUWSOQNTTPPFIZMHSRUVFNJJXVGGUKUKIHLKERAEJBCKMNOLXDXLQCRGPUUQHXXAYQAGXEONVSLVFTLTMOOKOGADZAOPCBQZFJKWDBDLVGRCVJHKSTTIMIDMWIDNFLBFXLBSAPGQSZYREPJHMZJOSQVDAQULNEIWICVFWBWTWOXK");
    msg.act_time = 18193U;
    msg.deact_time = 3819U;

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
    msg.setTimeStamp(0.8420908383563375);
    msg.setSource(5530U);
    msg.setSourceEntity(58U);
    msg.setDestination(21659U);
    msg.setDestinationEntity(200U);
    msg.id = 170U;
    msg.label.assign("KNUPQQHZOQYDMUKLJTAKVUBCFTXFGVXCZYBIBUJBWMAKRRZSWGNTIQYVGHTEOFEOQJSDCHLOVWIQLJYMOETZUHUNQIZNDRMIKADFWPTZKRPGBIPOMJERRCABXPOGEWGWBEXAZDHIZHFXYBRGLNOLJKUISUWPZGRCNTHNDSJNMRHXAEIIMZCKJDMOLDMN");
    msg.component.assign("CLYNWPTVYCSVNHKVQTBAQYCRYLSPULAGVGZQVDREZGXSJFFUCEIAOOINMKFTFFTWHZAYWKDXOKR");
    msg.act_time = 29026U;
    msg.deact_time = 11174U;

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
    msg.setTimeStamp(0.7213707480343551);
    msg.setSource(17734U);
    msg.setSourceEntity(85U);
    msg.setDestination(7199U);
    msg.setDestinationEntity(66U);
    msg.id = 119U;

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
    msg.setTimeStamp(0.4419447211079689);
    msg.setSource(11755U);
    msg.setSourceEntity(88U);
    msg.setDestination(3779U);
    msg.setDestinationEntity(162U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.05971062988787268);
    msg.setSource(38308U);
    msg.setSourceEntity(218U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(195U);
    msg.id = 228U;

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
    msg.setTimeStamp(0.11028596805105284);
    msg.setSource(8251U);
    msg.setSourceEntity(156U);
    msg.setDestination(33967U);
    msg.setDestinationEntity(129U);
    msg.op = 80U;
    msg.list.assign("KVKSFAJNPOXNJSQWYNUYZQVMBTVQYGHWLEAOCUHTOUBUGCLRERSYROHNIBHHIMICSATTEALRPAMZBSUOXLKDSHDEMJYGPVDPHPAFFGBFVYEKHMITLAWMMSQBBENJLTMZPMQOHEDZPIFEPCNKCKQCWYXFODOZWFTDNJVGSWQZWQCLRIXBGLQXRUWEPLJJHRIXZVISJZOXBK");

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
    msg.setTimeStamp(0.969123804765025);
    msg.setSource(4845U);
    msg.setSourceEntity(214U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(64U);
    msg.op = 143U;
    msg.list.assign("RRHSIXOXZHIGQNNCOKKJSMYFUGMDWGEAOEZSVCLTLTTODYFAPARLBPOWJXGMRVLXLFOAJBBIQNNVYVGDULRRXWKMBXSEEJUZMTKQXAKCBXAHOZSQDKPNUKDWTCFJGINEEPYZFZHARIZRWVVUSMJWCQRDMDZALFWDTLQSFI");

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
    msg.setTimeStamp(0.7671919810235803);
    msg.setSource(20641U);
    msg.setSourceEntity(69U);
    msg.setDestination(20704U);
    msg.setDestinationEntity(251U);
    msg.op = 111U;
    msg.list.assign("HWNWBBPWICOKSZLNGGHOUVPRPCFGMVCDEWNMOFXTHTPEUBBTVOKBIBGWEQUEUMRYKPJKEYQDXYRBLJRASYZSBOMANJIIRFMFUNAILAZJTMUXRZXNUGVHYJQSEDKFZGLKGFCHWXY");

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
    msg.setTimeStamp(0.4050695154825148);
    msg.setSource(58170U);
    msg.setSourceEntity(190U);
    msg.setDestination(44929U);
    msg.setDestinationEntity(31U);
    msg.value = 176U;

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
    msg.setTimeStamp(0.14663671800118638);
    msg.setSource(62724U);
    msg.setSourceEntity(180U);
    msg.setDestination(60336U);
    msg.setDestinationEntity(196U);
    msg.value = 186U;

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
    msg.setTimeStamp(0.6741425173567186);
    msg.setSource(54729U);
    msg.setSourceEntity(231U);
    msg.setDestination(28902U);
    msg.setDestinationEntity(27U);
    msg.value = 149U;

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
    msg.setTimeStamp(0.42329835304857144);
    msg.setSource(33431U);
    msg.setSourceEntity(25U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(22U);
    msg.consumer.assign("AXANQBZPZVZMUWFGYYBJCBEVRDJUHPKICLIVQVWLGRYBMJYHKEKUUCOIKESHMNPMUCVLDGALFKFPSLTQNHASFQTVHBGOYDDNUKLWOKPEAORPDMZMAJPOJQXRFOEGGDZPDTJSAQRMPIAYFRNZLUGSHTLCXEMWOIGETIUWAIWYJXYMCVSWIXLGJFRHBVZZXJLJFNACIDUIMNNOQZHBFXQBBDXVTWKKCSESRRTWCFYGOPUSTCT");
    msg.message_id = 17288U;

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
    msg.setTimeStamp(0.5229463712238235);
    msg.setSource(47396U);
    msg.setSourceEntity(199U);
    msg.setDestination(40411U);
    msg.setDestinationEntity(139U);
    msg.consumer.assign("KMBVNJDECPCRWWMLGGYHHBLIPKCSZAJZPGBJETLIVZBQMCEAEUKIWYIWOFOZBAHFXHOAWNJQXBJUXFINAODRVTFXVENHVCVIQYRRURKRKJGJTMPUQNPWLNKFMYVEYTTRHDHGYGAAXULDTKSKFSRSLFWGNKZDOPQVSHHGSXEXDPQIGLDMZPUTQMPLNOOFRMTUDCWJNOSFZXQTBWPWUVRBHNXIEVMYAOJISZYIBCBLKCAEOQDSL");
    msg.message_id = 43678U;

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
    msg.setTimeStamp(0.767744525410502);
    msg.setSource(29549U);
    msg.setSourceEntity(15U);
    msg.setDestination(34510U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("MZQJPHGEDKQKMAISZROAREKMPFJTNMNWSVILYSBYTXEVTSVEBYWSDUZCPAHTUBFSNQTHGILACQCLFJYKWGGFKTJNFALXNFMJFSEOYLKQEHUIILGMQYPZIQEVSNRCUHEVRPYMUHKWEKZRTZGJXDORVISHAILOWPDVTXBLCN");
    msg.message_id = 32448U;

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
    msg.setTimeStamp(0.9644518699874739);
    msg.setSource(62966U);
    msg.setSourceEntity(71U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(198U);
    msg.type = 83U;

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
    msg.setTimeStamp(0.3012528787136066);
    msg.setSource(48680U);
    msg.setSourceEntity(237U);
    msg.setDestination(17544U);
    msg.setDestinationEntity(10U);
    msg.type = 245U;

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
    msg.setTimeStamp(0.19683074321284288);
    msg.setSource(23172U);
    msg.setSourceEntity(245U);
    msg.setDestination(59049U);
    msg.setDestinationEntity(244U);
    msg.type = 152U;

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
    msg.setTimeStamp(0.9260547494302616);
    msg.setSource(18686U);
    msg.setSourceEntity(112U);
    msg.setDestination(22966U);
    msg.setDestinationEntity(94U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.6779446787067828);
    msg.setSource(17450U);
    msg.setSourceEntity(115U);
    msg.setDestination(17504U);
    msg.setDestinationEntity(125U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.31159623488582544);
    msg.setSource(9716U);
    msg.setSourceEntity(36U);
    msg.setDestination(38639U);
    msg.setDestinationEntity(163U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.5855222772521821);
    msg.setSource(52533U);
    msg.setSourceEntity(94U);
    msg.setDestination(12106U);
    msg.setDestinationEntity(158U);
    msg.total_steps = 205U;
    msg.step_number = 132U;
    msg.step.assign("GGJMKMMODPSIASLNRHDJMPMIAUNNTGL");
    msg.flags = 170U;

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
    msg.setTimeStamp(0.5174718932932464);
    msg.setSource(33847U);
    msg.setSourceEntity(236U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(146U);
    msg.total_steps = 220U;
    msg.step_number = 197U;
    msg.step.assign("AGNFCHVOAOUMLARUODREYXGHBGGLXAGSRUFXQDNUTJLJUKITHMZQYSCIKMFKJSEWQNIAKMTEYIJHSSFIYZTHFTQMLLIPRPAJHSAWSGDANUCLVNLCBKBHIAPNOCDROYLZBJFQPEWHNBKVWEQUYMUJRFDXYBYWWBZGJKSYZUKNLMHPEBVVQDTVWPXNOZCCIHOCXGMLQJIFONDQEEZXVTWDFVWF");
    msg.flags = 163U;

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
    msg.setTimeStamp(0.8370776390555837);
    msg.setSource(36615U);
    msg.setSourceEntity(211U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(12U);
    msg.total_steps = 55U;
    msg.step_number = 243U;
    msg.step.assign("KGNARMLIFMCDACGLQMYPGUTMPVZLXZHVJERYSFFOPBBFWJMXVHJWPUIGMXFIXQRDTSTGQODCSQCESAEISQNUJVTWEYTLNRTELKZINUMDWOILSWHZST");
    msg.flags = 254U;

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
    msg.setTimeStamp(0.61223041238546);
    msg.setSource(5746U);
    msg.setSourceEntity(148U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(97U);
    msg.state = 21U;
    msg.error.assign("NYTEFEABEVSZVHWORRXVZHBLFFQYJDJDOOVVBYAHCGKQABQZIGMWOQYNLPUGDCDXUSDJAIJNNPAYCF");

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
    msg.setTimeStamp(0.9391644119041423);
    msg.setSource(55452U);
    msg.setSourceEntity(139U);
    msg.setDestination(62448U);
    msg.setDestinationEntity(119U);
    msg.state = 136U;
    msg.error.assign("CWRAQLCZDBDGDXLKSYBSLXGSPPXCGQBEJMMSJRKXOZZILJBRDPYOKTTZZIZXHNPRMAXLVAHICVTBDAYKNDHBTDCNVWMGIUGPQXSSMJTBEOWWDWIUVNVWHMCGVJVCHGQLOIQFPKPIJALZQKHLHXZQSWVMEUXRCYBTTJUCAEEFNUFFUFFUFEMTUNVEUKOOJYJSZFSAQYITYWWNEIQGWRRMPKAEG");

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
    msg.setTimeStamp(0.30126726502839085);
    msg.setSource(25770U);
    msg.setSourceEntity(176U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(220U);
    msg.state = 230U;
    msg.error.assign("EJMSQLCILMICRZVACOFVNKEYZZUOWBWPQLJZQQCJFMYTYHEVDNRFGJZBEGAZACDYRTKLPRFRPSTAGVWYTHHNTXMUADUBNUMNDSSVQL");

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
    msg.setTimeStamp(0.8083605715506096);
    msg.setSource(7936U);
    msg.setSourceEntity(202U);
    msg.setDestination(32502U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.9162524082470294);
    msg.setSource(60665U);
    msg.setSourceEntity(249U);
    msg.setDestination(21716U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.2267711791852587);
    msg.setSource(52791U);
    msg.setSourceEntity(77U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.895683351002931);
    msg.setSource(23767U);
    msg.setSourceEntity(155U);
    msg.setDestination(33744U);
    msg.setDestinationEntity(78U);
    msg.op = 245U;
    msg.speed_min = 0.28047704826326403;
    msg.speed_max = 0.9235849069330405;
    msg.long_accel = 0.6034370943618608;
    msg.alt_max_msl = 0.8530615638829808;
    msg.dive_fraction_max = 0.6530310079917785;
    msg.climb_fraction_max = 0.9014018601199778;
    msg.bank_max = 0.7954440635736939;
    msg.p_max = 0.2014772052345778;
    msg.pitch_min = 0.6502719553004338;
    msg.pitch_max = 0.5300894527328343;
    msg.q_max = 0.9769309607719872;
    msg.g_min = 0.21553833102655062;
    msg.g_max = 0.7678257193158451;
    msg.g_lat_max = 0.9002989570234682;
    msg.rpm_min = 0.7782726862349375;
    msg.rpm_max = 0.4100199004601751;
    msg.rpm_rate_max = 0.9830151664451081;

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
    msg.setTimeStamp(0.7113396082634951);
    msg.setSource(846U);
    msg.setSourceEntity(143U);
    msg.setDestination(62237U);
    msg.setDestinationEntity(18U);
    msg.op = 29U;
    msg.speed_min = 0.3951688229580904;
    msg.speed_max = 0.5513014624017775;
    msg.long_accel = 0.8862467662209871;
    msg.alt_max_msl = 0.9708480899638589;
    msg.dive_fraction_max = 0.44385465916149447;
    msg.climb_fraction_max = 0.08022328080709018;
    msg.bank_max = 0.961426658209689;
    msg.p_max = 0.8586812074719234;
    msg.pitch_min = 0.0018703124436928453;
    msg.pitch_max = 0.8557305381408282;
    msg.q_max = 0.9934653312730862;
    msg.g_min = 0.3521677992312039;
    msg.g_max = 0.32423569642260985;
    msg.g_lat_max = 0.7059535148772633;
    msg.rpm_min = 0.5235493032064689;
    msg.rpm_max = 0.41367737434460616;
    msg.rpm_rate_max = 0.4500982022430363;

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
    msg.setTimeStamp(0.35227499515909444);
    msg.setSource(62207U);
    msg.setSourceEntity(25U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(158U);
    msg.op = 74U;
    msg.speed_min = 0.2288688876982201;
    msg.speed_max = 0.7094883495542826;
    msg.long_accel = 0.39789620318712515;
    msg.alt_max_msl = 0.08593029779699213;
    msg.dive_fraction_max = 0.3395857034580473;
    msg.climb_fraction_max = 0.25510461634603954;
    msg.bank_max = 0.689835695136078;
    msg.p_max = 0.5280095924288477;
    msg.pitch_min = 0.8497994331309597;
    msg.pitch_max = 0.49719401441459365;
    msg.q_max = 0.38678537024739457;
    msg.g_min = 0.9089508422456891;
    msg.g_max = 0.026307098935618;
    msg.g_lat_max = 0.9838123366180459;
    msg.rpm_min = 0.26093052067446;
    msg.rpm_max = 0.795448825667841;
    msg.rpm_rate_max = 0.8422930068483039;

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
    msg.setTimeStamp(0.619523069473697);
    msg.setSource(65415U);
    msg.setSourceEntity(158U);
    msg.setDestination(1797U);
    msg.setDestinationEntity(1U);
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("TFHSKUJZELMXEVXAYZPVNHCBDUNIRNSOVJZGKRQRROEVWGKIKXEHTCSFBCJNLDPWJULSHWVNPWCTPHHHGCGJDJSMLSISLKBVDSTAOITBGIKCMDDLGDVXWNFDBJTYFBUXEALWQYHYOURUVMUUCQKZBGZRPGMHHYYAEPGMIIMPXOOBYUODTNEFLKTCEFOBRIFYQAPEUYSBCQFWNDXQFAWACJQRIAZQRPXPMZKJEMALKO");
    tmp_msg_0.rssi = 0.7843954040094885;
    tmp_msg_0.integrity = 31960U;
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
    msg.setTimeStamp(0.8789469402612013);
    msg.setSource(11929U);
    msg.setSourceEntity(70U);
    msg.setDestination(944U);
    msg.setDestinationEntity(41U);
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.7666490101576515;
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
    msg.setTimeStamp(0.4981550447885926);
    msg.setSource(36130U);
    msg.setSourceEntity(105U);
    msg.setDestination(54686U);
    msg.setDestinationEntity(207U);

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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.9419940614783221);
    msg.setSource(47206U);
    msg.setSourceEntity(240U);
    msg.setDestination(23974U);
    msg.setDestinationEntity(135U);
    msg.value = 0.4863179163470437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.10105979258988318);
    msg.setSource(8867U);
    msg.setSourceEntity(236U);
    msg.setDestination(51649U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7784194732376024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.044408314927203874);
    msg.setSource(40565U);
    msg.setSourceEntity(54U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(139U);
    msg.value = 0.24669856854443628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.24555040890532775);
    msg.setSource(34010U);
    msg.setSourceEntity(127U);
    msg.setDestination(33055U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.9747428390378724;
    msg.lon = 0.059255970446368544;
    msg.height = 0.2926162291821607;
    msg.x = 0.7130550643279796;
    msg.y = 0.36131369257689583;
    msg.z = 0.6192746970382006;
    msg.phi = 0.2768088187685791;
    msg.theta = 0.7574473778394627;
    msg.psi = 0.7358240848950384;
    msg.u = 0.45835308603831504;
    msg.v = 0.5398636571362307;
    msg.w = 0.7372989752327682;
    msg.p = 0.9129078031667712;
    msg.q = 0.06350808342308834;
    msg.r = 0.4717682393398588;
    msg.svx = 0.9074464019393317;
    msg.svy = 0.6244540310957806;
    msg.svz = 0.8278263352959728;

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
    msg.setTimeStamp(0.46053172336905424);
    msg.setSource(55758U);
    msg.setSourceEntity(243U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.754460271092001;
    msg.lon = 0.17417763853596213;
    msg.height = 0.7125382457554488;
    msg.x = 0.25375746544006683;
    msg.y = 0.7605419730888171;
    msg.z = 0.3267112776021537;
    msg.phi = 0.04592316036277666;
    msg.theta = 0.5267177466766115;
    msg.psi = 0.34359906474114166;
    msg.u = 0.2704521194357179;
    msg.v = 0.2197269408164998;
    msg.w = 0.8209853892803651;
    msg.p = 0.733294303259553;
    msg.q = 0.843565554338806;
    msg.r = 0.9593060045008298;
    msg.svx = 0.46016598556370736;
    msg.svy = 0.14690705095579204;
    msg.svz = 0.7624968995672005;

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
    msg.setTimeStamp(0.9010729800969464);
    msg.setSource(41535U);
    msg.setSourceEntity(66U);
    msg.setDestination(59389U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.3275292433536825;
    msg.lon = 0.7318518469095677;
    msg.height = 0.479427647955758;
    msg.x = 0.2690538659682692;
    msg.y = 0.2046400952700249;
    msg.z = 0.9599471068708452;
    msg.phi = 0.5535224222670628;
    msg.theta = 0.908272633563574;
    msg.psi = 0.6330505992922406;
    msg.u = 0.24110898315282348;
    msg.v = 0.6746979759908537;
    msg.w = 0.14140719909177757;
    msg.p = 0.19948324899140468;
    msg.q = 0.3072572511844226;
    msg.r = 0.22911282813825296;
    msg.svx = 0.9552706969680829;
    msg.svy = 0.5454345402386783;
    msg.svz = 0.21033313871611425;

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
    msg.setTimeStamp(0.29875639332885606);
    msg.setSource(52812U);
    msg.setSourceEntity(99U);
    msg.setDestination(64160U);
    msg.setDestinationEntity(114U);
    msg.op = 120U;
    msg.entities.assign("JLKHXJWSQHHRLQJBAKCSEZPDFAAAQEQJXVKZIWUTRRKYSJDWYPSTIOLEBBAJRIZNHEPWNRUSEZNBTBTFURZMCYADQCURNNMBBEQBXVWLFIGZFVZATJLHZZZOVQTCXYKNUYFOOECACJTCPGGXMQHFYQSWFWIIKCNSVYPRTNJGMCGGYAXNYGDIIHPWY");

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
    msg.setTimeStamp(0.6956679884426515);
    msg.setSource(31083U);
    msg.setSourceEntity(149U);
    msg.setDestination(5396U);
    msg.setDestinationEntity(134U);
    msg.op = 98U;
    msg.entities.assign("LEGETZPDHVIVFNYTUWCMKWRLKHRZKYKUWISLXOGCOCXDUPWQWHSZZLPSBXQNFFFWJNGYATGVVPXMBYBSTJCFYMXWQYYQFOMULUDCPIRODOLFXDJERFXRDIIEOZEL");

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
    msg.setTimeStamp(0.5912763464409853);
    msg.setSource(36185U);
    msg.setSourceEntity(190U);
    msg.setDestination(43691U);
    msg.setDestinationEntity(192U);
    msg.op = 43U;
    msg.entities.assign("URLQPEQFVNMHTFMFJDLVUDSYNJKKTMFOVIEXOPTXAGBNMONYKAIIWSUHUXVTGUPTRBBTDWEZXZDZJEFIWINZQUROSOVNSFFRSPTLMYDQGQDXFFMWMBKLIELPQYCVIOELVEKWAPCADGJOEBBMRXTRXCVKSXIZAYRNUHPDSKSWWNZLULTYOPAHCGZQZSEGOQKDXRIBPNPQYCCJZWOAAMBNHRHQZAHGLTJBIJJJFVG");

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
    msg.setTimeStamp(0.5952768955517497);
    msg.setSource(3527U);
    msg.setSourceEntity(224U);
    msg.setDestination(13420U);
    msg.setDestinationEntity(104U);
    msg.type = 146U;
    msg.speed = 41697U;
    const signed char tmp_msg_0[] = {9, 65, -63, 48, 64, -79, 58, 45, -81, -39, -76, -62, 18, -127, 112, -106, -46, -1, -42, 34, -21, 114, -114, 10, -125, 60, -92, 16, -114, -114, -6, 91, -28, -14, 33, -69, 9, -63, 72, 105, -91, -96, -93, -69, -108, -126, -105, -72, -28, -116, -14, 119, 55, -67, 95, 6, 34, -121, 119, 81, -46, 75, 14, 15, 66, -80, -93, 9, 109, -48, 68, 76, 120, -109, -9, -76, 53, 24, -85, -77, -4, -55, 52, -27, -92, -40, -46, -119, 29, 58, 84, -19, 29, 87, -125, -73, 32, 73, -25, -1, 14, 97, 98, -23, 77, 91, -100, -48, -128, -104, -76, -18, -53, 21, -30, 31, 67, 19, 96, 101, 121, -30, -114, -6, 105, 3, -40, 83, 63, -85, 117, 102, 20, 91, 38, -104, 84, 72, 49, -99, 121, 28, 72, 73, -27, -101, 65, 116, 17, 42, -45, 8, -38, -119, -27, 85, -98, 20, 1, -51, 11, 88, 75, 49, -13, 71, 91, 103, -96, -61, -34, -26, -69, 7, -107, 91, -21, 29, 56, 31, 120, -15, 44, -33, -11, -18, -106, 85, 82, -113, -97, 97, 105, 84, -83, 27, -79, -11, -13, 38, 8, -67, -36, -123, -35, -86, 123, -29, -99, 10, 122, -69, -126, -126, 119, -49, -122, 75, 115, 24, 109, 37, 7, -18, -98, -40, -49, -43, -50};
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
    msg.setTimeStamp(0.11023326678952938);
    msg.setSource(58394U);
    msg.setSourceEntity(150U);
    msg.setDestination(20811U);
    msg.setDestinationEntity(11U);
    msg.type = 162U;
    msg.speed = 28113U;
    const signed char tmp_msg_0[] = {-121, 108, 89, -38, -51, 121, 13, -96, 122, 53, 122, -31, -15, -126, -60, 111, -46, 122, -47, -10, 69, 1, 73, -27, 108, 123, -23, -35, 6, 44, -10, 69, 10, 37, 101, -2, 38, 12, -62, 8, -20, 11, -90, 8, 46, 0, 45, 67, -24, -81, -107, 11, 46, -34, 20, 23, -85, 6, -76, -56, -90, -83, 124, 10, 20, -42, -84, 107, -62, 19, -51, 17, 105, 18, -56, -98, 82, -64, -3, -19, -45, 57, -25, 33, 84, 3, 27, -33, 50, 66, 37, -110, 86, -90, -101, -7, 58, -22, -97, 3, -48, -35, 36, -19, -102, 95, -42, -94, 121, 48, 116, 6, -96, 22, -85};
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
    msg.setTimeStamp(0.4754675068004095);
    msg.setSource(46866U);
    msg.setSourceEntity(242U);
    msg.setDestination(31326U);
    msg.setDestinationEntity(172U);
    msg.type = 0U;
    msg.speed = 44571U;
    const signed char tmp_msg_0[] = {59, -42, 33, -10, -70, 19, -5, -88, 80, 25, -74, -117, 42, 71, 112, -61, -22, 35, 58, -23, -5, 92, 42, 104, -123, 48, 115, -4, 38, 82, 57, 111, -42, 99, 94, -91, -119, -126, -26, 12, 113, -92, -121, 18, -122, 57, 113, -41, -28, 61, -111, 87, 94, -64, 37, 41, 74, -82, -22, 103, -86, 114, -16, 84, -81, 78, -122, 17, 78, 106, 17, 25, -76, 113, 71, -49, 77, 2, 13, -34, 35, -51, 16, -80, 25, 28, -110, 7, 17, -89, 52, 37, 44, 100, -54, 5, -6, 105, 54, 75, -78, 42, 45, -122, -44, -57, 121, 103, -127, 100, -107, 2, -88, 52, 57, 52, 110, 121, -124, -12, -11, -56, 59, 58, -63, -91, -12};
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
    msg.setTimeStamp(0.9597737167877186);
    msg.setSource(10762U);
    msg.setSourceEntity(159U);
    msg.setDestination(52071U);
    msg.setDestinationEntity(35U);
    msg.op = 23U;
    msg.tas2acc_pgain = 0.9254636945166475;
    msg.bank2p_pgain = 0.8848387826609417;

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
    msg.setTimeStamp(0.7979979860668085);
    msg.setSource(26271U);
    msg.setSourceEntity(210U);
    msg.setDestination(30720U);
    msg.setDestinationEntity(215U);
    msg.op = 148U;
    msg.tas2acc_pgain = 0.7742260535630132;
    msg.bank2p_pgain = 0.2376242958935837;

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
    msg.setTimeStamp(0.6490090689367946);
    msg.setSource(53852U);
    msg.setSourceEntity(23U);
    msg.setDestination(35376U);
    msg.setDestinationEntity(175U);
    msg.op = 74U;
    msg.tas2acc_pgain = 0.9844124578179564;
    msg.bank2p_pgain = 0.19358090232199776;

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
    msg.setTimeStamp(0.6688325932781379);
    msg.setSource(27782U);
    msg.setSourceEntity(147U);
    msg.setDestination(51954U);
    msg.setDestinationEntity(5U);
    msg.available = 2570846914U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.38081823016907757);
    msg.setSource(62699U);
    msg.setSourceEntity(6U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(29U);
    msg.available = 4257771427U;
    msg.value = 149U;

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
    msg.setTimeStamp(0.9334412488539604);
    msg.setSource(5674U);
    msg.setSourceEntity(53U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(100U);
    msg.available = 4184395745U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.9402723478264391);
    msg.setSource(50770U);
    msg.setSourceEntity(163U);
    msg.setDestination(14721U);
    msg.setDestinationEntity(253U);
    msg.op = 19U;
    msg.snapshot.assign("AVTXWUTWEIPIFGQUYQOBJKMESJKOHMDXDCCKGIGNJAJUWRQNSEMETCRINQPXQNOLOZBYNRPKECAVQHNOIUFBGWFBPDTYVRQSLBHJGZLBQSTHPGZRXOEXAVDCXAXPGJGWWWEMSYAOGSTIXMHJCCLNUWUKVJUEF");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.06030777485600136;
    tmp_msg_0.converg = 0.080168669487238;
    tmp_msg_0.turbulence = 0.9560276632714031;
    tmp_msg_0.possimmon = 232U;
    tmp_msg_0.commmon = 243U;
    tmp_msg_0.convergmon = 160U;
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
    msg.setTimeStamp(0.1899836879731055);
    msg.setSource(13112U);
    msg.setSourceEntity(176U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(56U);
    msg.op = 3U;
    msg.snapshot.assign("EPHQNDVMRSMEFEBJPOLRIQVKMSQMUFGBBXPRQKJQYMZUKSJCVUAEBMZBZLGOFYBVQPFVLRWKGIMLFTLERHTMEVZJEVYITNBOGWCEANYOANVNWCJUTKFSZCJJHGDOEDTKNGHWGPLYXDTYIULACO");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 151U;
    tmp_msg_0.text.assign("UYFKEQCVEXKBMTLLRSKDETYYMXHGYNUSBTDXTQEOYFBDAQCWVJYOZFSXPVCXVITYHHRWNCDOJQNBZUOXRUKZZNTDEYSFAMLHFPNXZJMZDUFKPWIMCARDQXYAPVPLGAKKZHPNGJIUDGSHWCRYOOVJSLGFHXMGRQMJWMNVQKC");
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
    msg.setTimeStamp(0.2789581704327936);
    msg.setSource(42288U);
    msg.setSourceEntity(31U);
    msg.setDestination(62317U);
    msg.setDestinationEntity(6U);
    msg.op = 142U;
    msg.snapshot.assign("XZJXJKMAYGCWCZCEWHSMMGPERRDYWDCSFOZNFKTJVHDJCZUWFPTGSQHORQBEVIMUDMJBGDYDZAVEHXTNQYKIOWIHNVMV");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.8815845083526487;
    tmp_msg_0.lon = 0.9854206032996962;
    tmp_msg_0.z = 0.6837757469711144;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.17436772245561893;
    tmp_msg_0.speed_units = 68U;
    tmp_msg_0.custom.assign("LAITBMCFNLLPEUFFGWYHSPZPTEYVVMKBMVZFHDZLGIJANDDOOUTCNGYMZPEJQEKJYNYJBMRSPOJIRWSHNMTROLLIQVHHKNTWBEBQINFRDWBZZDRUXSUNDZVQNMARMOLZGPGAPETQVUEKGEHPWYEBOCJTVPXQVTFCAKXWULXCJZMVFIYIDMGDFXQJJORZLCQYCYDFGO");
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
    msg.setTimeStamp(0.6568000548813359);
    msg.setSource(33725U);
    msg.setSourceEntity(2U);
    msg.setDestination(2571U);
    msg.setDestinationEntity(195U);
    msg.op = 100U;
    msg.name.assign("LFSSJUWJDAHPKNQSUGOOCZKNILYKMXQQWAFZJIWTGHYMKKITUQZOWWJMDLDJPLSQYIETUIQCRPKVWLBRHMGVKBFQHOMHXBLMVAEXGCRRNRFSRJVESJPCIASWBBAXQZVZWNBXCNXKFTPUHDNBYDEIENETFHCXEKYVTAEPVUMVTBTVGPIYCOERUCKJJSMHACXMCXDL");

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
    msg.setTimeStamp(0.22104049957983318);
    msg.setSource(19752U);
    msg.setSourceEntity(163U);
    msg.setDestination(46310U);
    msg.setDestinationEntity(101U);
    msg.op = 148U;
    msg.name.assign("TQOETCDIJBTHHKOUKRPHEUQBZVOCBDWMTBBJYIGXKTMGOQGEIONNVBEMUTFSCZCAEHECUQJRRRLMAROUOPPLWADYCFUUBOKDADPIZVFIXSFGBTWYXPKURBWYPWVFDYDZDZXFZRSMXPDSQTJHIJPLGWNIAGJTOLYNA");

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
    msg.setTimeStamp(0.5246481798427829);
    msg.setSource(53426U);
    msg.setSourceEntity(180U);
    msg.setDestination(20255U);
    msg.setDestinationEntity(116U);
    msg.op = 188U;
    msg.name.assign("WKVJLCZPIRSTPICAQBAOMHTGASTLHRHBIIKDODGZWKURMOOQVEDIAFHCCVGOHYFIUFLABQBMZEQWYXLVSXLLCBDNSBTZKGFEEEKGGUMPSLYVJWGRTCPTEINDVAVOYUJPCXCPLACRSEGPJWUWWWG");

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
    msg.setTimeStamp(0.7118441876080734);
    msg.setSource(37878U);
    msg.setSourceEntity(211U);
    msg.setDestination(13387U);
    msg.setDestinationEntity(35U);
    msg.type = 121U;
    msg.htime = 0.8253046610642524;
    msg.context.assign("KHKFWGWNVZAWPATMYHRBWDALTNUQBDCVMVZPRGKNQBMRGRYERVPHQIQLQVZDDNIEVHWHULIPPDKFPZMJBTEGQWOMIACTOJGXRQSNECSCYNABJQDCGNUITCNFDIIUVFEPIBSMTTADQEPALGFVRHYY");
    msg.text.assign("RFUPTRKTJJQDSUTTFBWIOVVQYVSEEPHNVGZBOWKBMZFMWAAALKOIVRLAJQVWQVYJXXRNHZRGAQZTDOKDUJDHPYJAVYQBDBZMCYXVGLXWSKTZHGFUCTSMEGXEQEPSMCOCNXDHNXKSZOGEKFEWDICENLYTWMCBWIPKQUUIDBNECLIBPXRPWNDPUJIHNJYXNOGDSMMFIRISFGAARFYCOSHTZB");

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
    msg.setTimeStamp(0.9021926600489);
    msg.setSource(7277U);
    msg.setSourceEntity(227U);
    msg.setDestination(25520U);
    msg.setDestinationEntity(166U);
    msg.type = 196U;
    msg.htime = 0.4277708756768409;
    msg.context.assign("WAYVRSKDKRGOVOMIHZNAVTIOUVZWITFQVOLJGPDHYULMDIFALSMNOFFONMJXJXHQTLTHVMDFPKRBBFBJWSXVVPUINMEONIYEYEQBQDSYXLHXXQWEBCVJGIMSUKPHPNJYFYHWRFEKCMRTELKSCYJAOUWGQKUERXCNTBLXZYFBLZTHCTJGZCDOKELBUPCPKQWEZGDAMIRDWJPTFUAZADNSRUTXQYZIAQGCEJGBDACWHBIURZCSWPZLQGNHSSPMKA");
    msg.text.assign("GUSRFMNHHKHDJASZZTIRSYSFNCOPRBKMBBSJNVJYFQDWXHEXUKCZACYOEGWZLGHAXUDQCKVHDWFZEYYTMVZATPLLGJBHSBFPCNJWIWVBYKLPISCHDIQVKIPXVKFJSTGYWXOBRSCXCNOAUILAFBPQEAZIULFOJFEWKAKMXYAJVNKRRR");

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
    msg.setTimeStamp(0.5412873606729576);
    msg.setSource(8724U);
    msg.setSourceEntity(117U);
    msg.setDestination(46597U);
    msg.setDestinationEntity(66U);
    msg.type = 134U;
    msg.htime = 0.8556278687019377;
    msg.context.assign("EREVJCYJXIJXQYXTBKVBBAESOFHLQGPEIWDPVUTMMDQAKWZCYZGGFLPWIIDJHFCBLMINQSJFEEIPBLHKNQROXHTOTFVYRYXSHKGTRGCBJZNNOJZIQNOHUWMNLKAWMNWASACLBUXFSFGSFAUECLRBPUSSNLOHUXVOCRPQYZZRMVPMMVVAAZMYVDTQBHH");
    msg.text.assign("IONHHYVXMLUTLXLYZKXBTUTQDPVCASCIWFSQFZJAJWEVQMTVKGMYOIQIWTWPXRGHMEWCNAYWGDPKKJSVBMGHKFGRZGIARIYRDCNZKDHBSQWNBRVHYEZWMEGLALAUXPKDKLJNAMHVRQAZQRJKNBCPPPJYXUTXQUOFHQNOMMSPOOFRULBYRUCZIJZTSFLCDSIXFKBVTSNENEHH");

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
    msg.setTimeStamp(0.022062582912589557);
    msg.setSource(25600U);
    msg.setSourceEntity(11U);
    msg.setDestination(33126U);
    msg.setDestinationEntity(112U);
    msg.command = 209U;
    msg.htime = 0.46913212753969613;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 49U;
    tmp_msg_0.htime = 0.17403233492483694;
    tmp_msg_0.context.assign("UCJONNGQKAKMPOUKJSRTIBVEEQPRXZWUFVTXBKHWAPAFTRBBYRHXFMHMVHILKTZYBSCWXUGSNDOQCZWNVBAGJESIVDFFRBWCUPLPGRNHDYXIETDHOVTMRPAWEZYDZZUHZMECAIMLNLOSYFUPDTQULYVHIWOCLKIGKSDCMOCGXEGJSNQBKQDRMXFAZMFWVLJUGYOEILTRSDQRAFDHPKOGJAIMXHSJTJQKJZY");
    tmp_msg_0.text.assign("SQROYFFTXVSDMTZWDJJYUKOMCUBTPELDMZPQFUYJBCKEDVXLRNLXJFSGOXIV");
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
    msg.setTimeStamp(0.21631873662491363);
    msg.setSource(9056U);
    msg.setSourceEntity(104U);
    msg.setDestination(30708U);
    msg.setDestinationEntity(60U);
    msg.command = 216U;
    msg.htime = 0.2029216623967427;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 96U;
    tmp_msg_0.htime = 0.006659778730960797;
    tmp_msg_0.context.assign("OWZFROHZCWQJZJPFWLDOMSTPBMPDIMOWDYEIPPPXYANJMGGKNQXIAEXTAURJTSIAJWELSQPQECUFUDYJLEUGXFUAQHDJYNLLDSHHUFWDYWMSKRZQVYRBBRNKQKMHNDRWRS");
    tmp_msg_0.text.assign("VGPAOGQYROWMAJQUAPUFLMPJFOOBHRHSHEDJOUJRRTBNCPEQECKWKRMFRRXDKYMXEEUTUJTUYVSHWKMGHUQCPGHWBKQSSMOALHFICZOKNVIDPSLZSJBTSWNPADCOBNLQGYIIQIDFINFJFWZWZTWCVZUXVYZLPYGZXSZLPFAIYXDEMDJL");
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
    msg.setTimeStamp(0.9693596914839916);
    msg.setSource(21936U);
    msg.setSourceEntity(50U);
    msg.setDestination(34757U);
    msg.setDestinationEntity(185U);
    msg.command = 150U;
    msg.htime = 0.8668069799522103;

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
    msg.setTimeStamp(0.609332055838391);
    msg.setSource(46853U);
    msg.setSourceEntity(71U);
    msg.setDestination(20219U);
    msg.setDestinationEntity(237U);
    msg.op = 88U;
    msg.file.assign("OAEMODHFBYAFFQQQVDQWMVXLCTDVFTKLJNNZOBZAOGAKCSCXKOFNYNHYQETMABPADLHZZIJCRCVMRWFLKBLIEPWKCGUUOJ");

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
    msg.setTimeStamp(0.6083868836351801);
    msg.setSource(42628U);
    msg.setSourceEntity(82U);
    msg.setDestination(21050U);
    msg.setDestinationEntity(207U);
    msg.op = 137U;
    msg.file.assign("VGTCUCODIFKZECYLEPHIPDHOUTEFYNAUMBTRGPJRQENHYZAQNRAKELPJOQLBGYGCOIRIZZGLHWMONZZBARZDKXWNDVOFEHXLGEYMZQXXHCASVMGSSDLWJQBCJASRTESFJJKGWDFBQVYJWPPQIULAWIRWMVKUMYJHISMGEXPSUCUTBWKGWADEOHBSD");

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
    msg.setTimeStamp(0.8318901398403034);
    msg.setSource(56016U);
    msg.setSourceEntity(242U);
    msg.setDestination(59239U);
    msg.setDestinationEntity(56U);
    msg.op = 183U;
    msg.file.assign("LSTYWGJTJJALENKXQENQCEFDPOMWLVZMWJGXXBXSMTYXMRELIMDZHMOBDLBCHYFPWBJXXVISFKICTUCYNDIGCZHNWTDMAIUUHOHDEYVOUNUOSJSBRTDLGFNCQHZHEHWDZNBKLTLRGXQKZCDOAAIQLGFWYQYCBLWNKHFRUQNQYVGFXPRPRWUEJIYUWPODIPAVFUBEAAZPVZS");

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
    msg.setTimeStamp(0.7228604080364754);
    msg.setSource(51491U);
    msg.setSourceEntity(163U);
    msg.setDestination(26778U);
    msg.setDestinationEntity(17U);
    msg.op = 82U;
    msg.clock = 0.44037735981074655;
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
    msg.setTimeStamp(0.7904376199831161);
    msg.setSource(45294U);
    msg.setSourceEntity(180U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(219U);
    msg.op = 40U;
    msg.clock = 0.049627093576629755;
    msg.tz = 36;

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
    msg.setTimeStamp(0.8694276511964779);
    msg.setSource(45110U);
    msg.setSourceEntity(21U);
    msg.setDestination(20387U);
    msg.setDestinationEntity(237U);
    msg.op = 200U;
    msg.clock = 0.00849421600739142;
    msg.tz = -73;

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
    msg.setTimeStamp(0.31607469814376565);
    msg.setSource(28386U);
    msg.setSourceEntity(176U);
    msg.setDestination(44481U);
    msg.setDestinationEntity(132U);
    msg.conductivity = 0.32035724055332415;
    msg.temperature = 0.6397417705651076;
    msg.depth = 0.3456868080957416;

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
    msg.setTimeStamp(0.40745671801272754);
    msg.setSource(3732U);
    msg.setSourceEntity(227U);
    msg.setDestination(14111U);
    msg.setDestinationEntity(85U);
    msg.conductivity = 0.5700101594922227;
    msg.temperature = 0.1249320578267209;
    msg.depth = 0.8898580778736656;

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
    msg.setTimeStamp(0.8655337415338629);
    msg.setSource(11111U);
    msg.setSourceEntity(167U);
    msg.setDestination(38202U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.42578788344424934;
    msg.temperature = 0.8104815282501486;
    msg.depth = 0.7068689830376036;

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
    msg.setTimeStamp(0.5224316856280179);
    msg.setSource(11383U);
    msg.setSourceEntity(147U);
    msg.setDestination(7252U);
    msg.setDestinationEntity(200U);
    msg.altitude = 0.5494544157292934;
    msg.roll = 57537U;
    msg.pitch = 25771U;
    msg.yaw = 64450U;
    msg.speed = 25710;

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
    msg.setTimeStamp(0.32573346064786235);
    msg.setSource(61054U);
    msg.setSourceEntity(222U);
    msg.setDestination(29841U);
    msg.setDestinationEntity(121U);
    msg.altitude = 0.001789497456001654;
    msg.roll = 42040U;
    msg.pitch = 42745U;
    msg.yaw = 1242U;
    msg.speed = -20559;

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
    msg.setTimeStamp(0.9036269280376807);
    msg.setSource(12644U);
    msg.setSourceEntity(163U);
    msg.setDestination(34155U);
    msg.setDestinationEntity(65U);
    msg.altitude = 0.26992644841965363;
    msg.roll = 49992U;
    msg.pitch = 53320U;
    msg.yaw = 13629U;
    msg.speed = -9593;

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
    msg.setTimeStamp(0.20288472515205824);
    msg.setSource(20424U);
    msg.setSourceEntity(49U);
    msg.setDestination(29238U);
    msg.setDestinationEntity(217U);
    msg.altitude = 0.12179199658806017;
    msg.width = 0.6066682013899422;
    msg.length = 0.44055020594612015;
    msg.bearing = 0.7972916807654454;
    msg.pxl = -2724;
    msg.encoding = 237U;
    const signed char tmp_msg_0[] = {-66, 33, 91, 37, -94, 86, 19, 18, -56, -109, 8, 21, 103, 68, -78, 62, 24, 15, -22, 102, 1, -103, -20, 90, 82, 62, -23, 113, 109, -74, -96, -42, -127, 124, 90, 111, 35, -81, 10, -123, 30, -124, 105, 82, -100, 28, 16, 94, -101, 28, -68, 11, 32, 59, -32, 108, 5, 37, 25, 70, 38, 116, 97, -38, -10, 11, -128, -55, 17, -100, -55, 17, -94, 66, 94, -67, 88, 50, -49, -49, 4, 109, 61, -17, -126, -109, 22, -83, 98, 103, 119, 9, 35, 42, 10, 13, 17, 103, 81, 125, -65, -34, 124, 23, 102, -30, -116, 83, 65, 86, -70, 59, 30, 60, 104, 13, 109, -41, 62, -100, -77, -25, -45, 39, 50, -77, 10, 24, 76, 20, -34, 68, 7, 87, 39, -3, 41, 106, -100, -101, 109, 17, -96, 80, -119, -105, -92, 10, 6, -15, 104, 54, -127, 9, -12, 38, -119, -111, -5, 29, 27, -7, -103, -49, 88, -23, -64, -23, -91, 117, -7, -113, -114, 91, -49};
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
    msg.setTimeStamp(0.9278882612003534);
    msg.setSource(42332U);
    msg.setSourceEntity(103U);
    msg.setDestination(5870U);
    msg.setDestinationEntity(112U);
    msg.altitude = 0.5260474024166056;
    msg.width = 0.5909746678730574;
    msg.length = 0.2175578401827204;
    msg.bearing = 0.3266578702363522;
    msg.pxl = 11149;
    msg.encoding = 1U;
    const signed char tmp_msg_0[] = {-33, -102, -106, -72, 91, -81, -84, -85, -93, 9, 112, -23, -73, -36, 89, 121, 35, -101, 59, -68, -1, 93, 60, 42, -79, 52, 34, 61, 77, -30, 25, 124, -96, -88, -15, 97, 59, 19, -118, -35, -107, -93, -109, 72, 123, 106, -17, 78, 120, 78, 63, -121, 71, 50, -20, 70, 21, -81, -53, 121, -35, -33, 26, -75, 115, 38, 119, 110, -39, 119, 106, -42, 38, 41, 50, -38, 118, -74, 50, 6, -66, -116, -74, 111, 66, 65, -7, 0, 60, -104, 115, 53, -92, -29, -103, -85, -68, 80, -73, 122, 52, -76, 22, -18, 35, 2, -26, -10, -11, 24, -82, 112, -58, 39, -75, 88, 105, 114, 19, 11, -125, 25, 74, -85, -87, -50, -73, -53, 65, -43, -2, 16, -121, 21, -6, 34, 105, -93, 101, 24, 86, -39, 3, 64, -2, -45, -36, -5, -53, 0, -34, 65, -22, -98, 115, -79, 60, -67, 42, 0, -64, -56, 5, -30, 80, -10, 124, -9, 114, 48, -36, 75, -35, 122, -72, -114, 85, 77, -39, 22, -71, -120, 86, -27, 108, 91, 57, 66, 21, -20, -66, -69, -61, -108, -8, -2, -124, 118, -108, -48, 33, -20, -38};
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
    msg.setTimeStamp(0.011354821669664172);
    msg.setSource(55621U);
    msg.setSourceEntity(112U);
    msg.setDestination(35201U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.9589225373108271;
    msg.width = 0.406233708801495;
    msg.length = 0.0566216545899082;
    msg.bearing = 0.6655146861769002;
    msg.pxl = 29942;
    msg.encoding = 3U;
    const signed char tmp_msg_0[] = {-90, -108, -71, -5, -42, -87, 112, 86, 80, -56, -8, -8, -119, -41, -104, 53, 121, 104, -117, -61, -87, -5, -65, 27, 116, -5, -27, 2, -75, -9, -53, 45, 13, 81, -54, 4, 94, -101, -46, 48, -16, -20, 43, 22, 92, 1, -113, -48, -2, -38, -91, 124, -9, -1, -18, 42, -94, 111, -81, 50, -65, 16, 33, -10, 80, 74, 6, -97, 62, -1, -84, 19, -35, 46, 23, 3, 92, 10, 121, 30, -81, -34, -13, 0, -97, 38, 48, -38, 86, -126, -115, 98, -68, -1, -9, 52, 16, 78, -7, 38, 31, 22, 96, 52, -74, 18, -37, 115, 74, -115, -91, 86, -96, 27, -109, -114, 54, -98, 89, -53, -95, 20, -29, -31, 8, 52, 6, 40, -77, -42, -50, 38, 0, 54, -127, -53, 4, 102, 15, -127, 74, -3, 126, -40, 71, 73, -97, -8, -109, 16, 41, -74, 111, 39, -8, -96, -126, -8, -106, -101, 120, -63, -12, -11, 106, -48, -63, -120, 46, -16, -105, -52, 90, 2, 105, 126, -21, -73, -111, 118, 85, -61, -9, -42, 6, 125, 9, 125, -68, 107, 61, 119, -5, -11, -31, 61, -88, 100, -80, 82, -119, -97, -77, -80, 64, -97, 77, -67, -21, 126, -1, 21, -10, -116, 70, 22, 71, -28, 72, -102, 6, -41, -26, -32, -116, -2, -93, 100, 0, 123, 58, 68, 90};
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
    msg.setTimeStamp(0.2457021482797127);
    msg.setSource(60057U);
    msg.setSourceEntity(59U);
    msg.setDestination(2842U);
    msg.setDestinationEntity(159U);
    msg.text.assign("YFLNPXEGOTTARIFWPQXEMIQMJKSATGHSZFWMHWMCNAPYNJJMDVZLLDKJKBXM");
    msg.type = 38U;

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
    msg.setTimeStamp(0.5452725505372031);
    msg.setSource(40828U);
    msg.setSourceEntity(99U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(193U);
    msg.text.assign("ATFQUWBBOIPJGOXXYJDVNFNZJTKBWVEEXVBYPDUQILWPGVAWPCROVOPSSXUKVIGQKKLABJJLUEWSYSLFCMXEPEFQOMHASDOWRHGSGHARPTNFHUKHMCSKBITKTFMMJULGNXZJXKWYNMYESGSZTHKICRPIZFZLBTCZUTWLAHROERCOVQCQUQDJZXNBHOYDCPTIAOAYRPWRCMEAMZQYGUZDGBLJIZDGFRWNJBIQTESLYCMDEK");
    msg.type = 152U;

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
    msg.setTimeStamp(0.31099483934657857);
    msg.setSource(8866U);
    msg.setSourceEntity(238U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(0U);
    msg.text.assign("NCHAMHJERPCFNREWAPYIATDTVBWNMYWRUQBKOSOLVQHXGMAUVTDTLIYUPQNKVFOEMSIYUBTDCXWIMP");
    msg.type = 36U;

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
    msg.setTimeStamp(0.6966130840640112);
    msg.setSource(53702U);
    msg.setSourceEntity(63U);
    msg.setDestination(26425U);
    msg.setDestinationEntity(24U);
    msg.parameter = 202U;
    msg.numsamples = 191U;
    msg.lat = 0.9414438215972535;
    msg.lon = 0.15252451210646523;

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
    msg.setTimeStamp(0.8150612975661473);
    msg.setSource(58566U);
    msg.setSourceEntity(35U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(131U);
    msg.parameter = 117U;
    msg.numsamples = 78U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 22079U;
    tmp_msg_0.avg = 0.32695623015888076;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8890311468200329;
    msg.lon = 0.5854376333202639;

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
    msg.setTimeStamp(0.6585688927287625);
    msg.setSource(15590U);
    msg.setSourceEntity(231U);
    msg.setDestination(28810U);
    msg.setDestinationEntity(222U);
    msg.parameter = 97U;
    msg.numsamples = 100U;
    msg.lat = 0.39151033115459266;
    msg.lon = 0.8538584026936636;

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
    msg.setTimeStamp(0.9627690670289899);
    msg.setSource(49201U);
    msg.setSourceEntity(92U);
    msg.setDestination(40453U);
    msg.setDestinationEntity(122U);
    msg.depth = 52594U;
    msg.avg = 0.5318320598709086;

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
    msg.setTimeStamp(0.9131655905938075);
    msg.setSource(43994U);
    msg.setSourceEntity(19U);
    msg.setDestination(45241U);
    msg.setDestinationEntity(29U);
    msg.depth = 3263U;
    msg.avg = 0.7041754306147749;

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
    msg.setTimeStamp(0.6399254233509951);
    msg.setSource(42788U);
    msg.setSourceEntity(47U);
    msg.setDestination(17552U);
    msg.setDestinationEntity(72U);
    msg.depth = 12132U;
    msg.avg = 0.48572293157073054;

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
    msg.setTimeStamp(0.5238824326848726);
    msg.setSource(25920U);
    msg.setSourceEntity(239U);
    msg.setDestination(20321U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.692682176751971);
    msg.setSource(17199U);
    msg.setSourceEntity(103U);
    msg.setDestination(13210U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.8324339026527525);
    msg.setSource(6088U);
    msg.setSourceEntity(59U);
    msg.setDestination(49212U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.18348703438752412);
    msg.setSource(32196U);
    msg.setSourceEntity(147U);
    msg.setDestination(37139U);
    msg.setDestinationEntity(41U);
    msg.sys_name.assign("ZEJCFWVHLKYISNDVOMWNHHONVPUQRKTBZJXQLRZWLGJHEPTZXPYSTDQDHJED");
    msg.sys_type = 25U;
    msg.owner = 33329U;
    msg.lat = 0.735065688801155;
    msg.lon = 0.215416339008209;
    msg.height = 0.7370428642321586;
    msg.services.assign("MYDKKQBUFFDKAIBCZTRLZPXTQPLSRYYMOHEECTHWRAFFQHLRBEIMHZEEXRTLVLPZMHYCJZWNPPXDNOCZQBSBYWSOWUBNXNPQVMAYOYDNIFNOTGAGIJVUVMJMUUAHSLISNQFJWYOQVJMQUXUDBLGOVRMPFZKETUBIICHWDVXNIJSCNKUEWCJKWAHHZOKXHGUETRLJXNLJOGPZVIGSAWXVSFCFRRGGCIAAXJWDD");

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
    msg.setTimeStamp(0.3530164046415585);
    msg.setSource(54485U);
    msg.setSourceEntity(81U);
    msg.setDestination(14145U);
    msg.setDestinationEntity(210U);
    msg.sys_name.assign("CIQQLCWMHUYKUZIJKGMDWHFFCWNVDUUZSBOTXPKYEZRRGNJJEOSRWSCPMYBADIVLFJYVJKMOLTZUJOJAISKBTVEEBTDDGQHBVFTBUUQGZM");
    msg.sys_type = 239U;
    msg.owner = 397U;
    msg.lat = 0.19035798144237182;
    msg.lon = 0.7308345819617426;
    msg.height = 0.937470887741794;
    msg.services.assign("FCYVDVCIGYBCJOFHQZQDZOYVBKDSIQZJCZOKOANCTUDNQRRGTMWEILWJGIKLWMJJEWPJGWYXWQIWPHDCABBP");

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
    msg.setTimeStamp(0.5837303271549208);
    msg.setSource(59882U);
    msg.setSourceEntity(234U);
    msg.setDestination(45179U);
    msg.setDestinationEntity(119U);
    msg.sys_name.assign("OPMRRGXITAWACCXIBWCLUMDBKLL");
    msg.sys_type = 206U;
    msg.owner = 4846U;
    msg.lat = 0.3489047040283195;
    msg.lon = 0.06569345652768932;
    msg.height = 0.3871075123449945;
    msg.services.assign("TSZYVFELPQJOSYBAZXRXOZACVRYLLSLVZSLKGDCKRIWUWPTRJIIRBXWTJKNWDHFNLQAEHSJGXOETUDVMPTGCYPNZQXNGRRYAUCNAVQBMKQSTCQYBKHSGLKNLJDPOYNCMBPFSAWAPYDETOLSVDFWMHONDCIZGEAANMVPZEODTPHRJBLPQKHUARXQHQDJXIXHTFEMMKUJUOVXIBDNEOZITUWZMUFRHGCBJJWUOUCYSKKMFMHIFVYFW");

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
    msg.setTimeStamp(0.9998220152637834);
    msg.setSource(37601U);
    msg.setSourceEntity(10U);
    msg.setDestination(59380U);
    msg.setDestinationEntity(106U);
    msg.service.assign("BDPTTSADVHSNPZZOZQZFMLWLVHRULLHWCZFCNRGDJVRXASBFHRJEVIVMKHNIFMBDWAJXSIBUCFOBIBGFWJBGMEYRINFICEKKNKRFFCLMKHOYUAJUKNOKIMQOUQRXZAYUTWXEJYTJVWELLSATKSQUPHNGSQECIGDMELOGONXJHSECONCWXYSYAKKSBYZUBRJOZYWPDEQDHBPVJXFXPYQGQPDVPMAYXWVZTNPXPLG");
    msg.service_type = 162U;

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
    msg.setTimeStamp(0.5322045814368335);
    msg.setSource(2038U);
    msg.setSourceEntity(0U);
    msg.setDestination(61921U);
    msg.setDestinationEntity(122U);
    msg.service.assign("BLONQBDDCWCXAABSSBDVMILYPRUUXRVEJ");
    msg.service_type = 218U;

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
    msg.setTimeStamp(0.0027996813529566067);
    msg.setSource(49078U);
    msg.setSourceEntity(39U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(70U);
    msg.service.assign("URYMTALBTSLYRQFRKWNLQPFDUABGZCWZUPKGYXQJPDCWGDHOVKHOBRCDYUDTVLOQPLJWUHFSZKEKIEXDJZJTYNTAYYNXTVHPBSIOJMDJQCRIBVRINEOFHJFBCJMFHDNESROVCGHXOIMABBMQFMGGNPHYGEPVVFFQRYKPFXMXZTLXCWZOCAIN");
    msg.service_type = 214U;

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
    msg.setTimeStamp(0.9708477325613738);
    msg.setSource(37504U);
    msg.setSourceEntity(173U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(41U);
    msg.value = 0.028530515687767988;

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
    msg.setTimeStamp(0.364843847006442);
    msg.setSource(23057U);
    msg.setSourceEntity(134U);
    msg.setDestination(48932U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5673453721639591;

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
    msg.setTimeStamp(0.5893172359463895);
    msg.setSource(44194U);
    msg.setSourceEntity(69U);
    msg.setDestination(33354U);
    msg.setDestinationEntity(183U);
    msg.value = 0.7023597731196153;

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
    msg.setTimeStamp(0.5073137318494644);
    msg.setSource(5098U);
    msg.setSourceEntity(44U);
    msg.setDestination(45872U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7142730844065267;

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
    msg.setTimeStamp(0.1789258981605002);
    msg.setSource(5743U);
    msg.setSourceEntity(28U);
    msg.setDestination(9381U);
    msg.setDestinationEntity(158U);
    msg.value = 0.37769941974939547;

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
    msg.setTimeStamp(0.03791506624608387);
    msg.setSource(20051U);
    msg.setSourceEntity(212U);
    msg.setDestination(25620U);
    msg.setDestinationEntity(35U);
    msg.value = 0.8380019507716425;

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
    msg.setTimeStamp(0.0069729642941399606);
    msg.setSource(29570U);
    msg.setSourceEntity(245U);
    msg.setDestination(15175U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5445054982194347;

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
    msg.setTimeStamp(0.0709236723867801);
    msg.setSource(44240U);
    msg.setSourceEntity(223U);
    msg.setDestination(50029U);
    msg.setDestinationEntity(117U);
    msg.value = 0.18189430947227858;

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
    msg.setTimeStamp(0.9395547172218908);
    msg.setSource(27507U);
    msg.setSourceEntity(182U);
    msg.setDestination(37776U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6366096940728384;

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
    msg.setTimeStamp(0.556962603738589);
    msg.setSource(39356U);
    msg.setSourceEntity(76U);
    msg.setDestination(51478U);
    msg.setDestinationEntity(36U);
    msg.number.assign("UUUJXKMAPCPXNQIOWEYPTWSSZJLAFUGNDBKTBZQVFIDCWRRULDYUUPSGVYQQAAKWVMMQXZODOCBHLMRAYLONONTMMPSMEFNPGPXUNXLVHVIWCEHIFEJGNOQUEUHOZN");
    msg.timeout = 56669U;
    msg.contents.assign("SHVBRVOQUIYJPPYKAFTRONNOZDBHOTFMMBIVYMKAVKSJULDPRBHVXQGHSCCIKPEEDXPUCSGCUXGTALWTWWROMWFJJWTVINOMBXKPZZMZNIUR");

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
    msg.setTimeStamp(0.3767952364426521);
    msg.setSource(40545U);
    msg.setSourceEntity(9U);
    msg.setDestination(48179U);
    msg.setDestinationEntity(32U);
    msg.number.assign("TOQXNQWDZUZMIGBMASRPRQQQQUELGBNHHWPWVDGKJOVXAICDRGXQHXENUZMWEXIOWKJPATJSGLURIRTNSEUBXQHRAXYOYOHZWAFLZLCXTIHWLTTZFYWILEKAREKFHNODOIVLDCVTDJKLAYK");
    msg.timeout = 54120U;
    msg.contents.assign("DCYNGHTHGNQXTEAOXEBFXRWKYXPQWGFNDFRGYLDQMETKXZFHNDIUZENALZGUINRCETIBQGDWFXYWBCQADBSUBLCQOVPLQZZGAVHCXBSLOWBLJIOIHQJRREGMRVVZJAMIURLKMMJPISELVOZAFLQUCMTVCSYXYSNKZJSXAKFMXHPIYVWAEKEPBOSOTEICODTUYHATKPYJFIOHTSTUVSVUDUDJNMGJZKCNCZ");

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
    msg.setTimeStamp(0.2098066282699892);
    msg.setSource(34914U);
    msg.setSourceEntity(29U);
    msg.setDestination(54791U);
    msg.setDestinationEntity(50U);
    msg.number.assign("ZHQPVPOOBJIPOSFGVSFYAYVVIXWAMMJTLCBCUCMHXESLWEF");
    msg.timeout = 6471U;
    msg.contents.assign("ETGMCOQQZZWEQFAEDHTZZSLVVYKBJBKYLPZYDBQZQZIGQAVCLQBEPPAEWXMFYBWRTYKUAQAMZXCCUTUSDSOOXGRJCMGCTNVAIHUXCYOMOLRWUNWTDYKPRYIOWFTHGLOVXJFCGKWDSSRTLYHEWIBJVPHGLBIFDQBPUHULUKHIDRMRKHXGLKEFPBIFDNMRYNJVQWHIMKSEPRXENSNFJKJJSXXOUG");

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
    msg.setTimeStamp(0.4085626970351556);
    msg.setSource(33433U);
    msg.setSourceEntity(47U);
    msg.setDestination(62844U);
    msg.setDestinationEntity(39U);
    msg.seq = 3792985106U;
    msg.destination.assign("PPGAOSFVQWZJWLPNJARFLJKEJCMBAZBTBQFEUJKXQCDWZGXKOKVSHTPBKMHPZSGHUQJAQVRLTRIGYIRJVQYKFZEDYOCHTFMCLSOTPUBYNYNWISYDOXRLGGOWWOTKCGYDLXTDRAUNLPEWHXDVMQVUUKANVJLAMEZWMINIOTSSIEEQEHM");
    msg.timeout = 55654U;
    const signed char tmp_msg_0[] = {55, 39, 110, 92, 47, -88, -48, 16, -62, 111, -47, 35, -67, -107, 28, -86, -7, -17, -21, 69, -7, 35, -109, -27, 110, -69, -71, -27, -53, -28, -42, -76, -125, 61, 103, 83, -122, 118, 42, -73, -80, 122, -103, -121, -59, -45, -119, 61, -92, 125, -12, -95, -71, -14, -45, -88, 82, -124, -44, 63, 109, -104, -28, 99, -18, 24, 4, -120, 111, 21, 100, -1, -91, 18, -35, -85, -121, 110, 32, -57, 75, -89, -65, 33, -41, 35, -29, 50, -3, -68, 0, -111, 76, -104, -75, 12, 25, -63, 78, 15, -50, 20, -67, 3, 2, -28, -125, -113, 91, 65, -6, 54, -105, 93, -93, -63, -83, -75, -19, -20, -67, 45, 91, -73, -83, 107, 49, 92, 69, 98, 85, -14, 111, -52, -60, 79, -69, 38, 16, 1, -7, 105, -111, -7, 53, 118, -11, 65, -26, 57, 78, 87, 7, 67, -59, -99, 86, 54, -88, -92, -121, -51, 35, 101, -88};
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
    msg.setTimeStamp(0.2886784173003021);
    msg.setSource(7040U);
    msg.setSourceEntity(247U);
    msg.setDestination(62153U);
    msg.setDestinationEntity(46U);
    msg.seq = 2650591250U;
    msg.destination.assign("ICUESNXOHTAHIFWMWXVJXYBDTNVPKMOYWPWEBKUBIOPISTUFDSXUCPZHRFTVYDSNJDYRARTRZEXCQTKNAOXGUQBDIFJEPWMGQAZUIXHALKNFJQQOKLBMIUDLQRNREZWMARWLQZVHYTUBOUHPLDMAWECEGPADYYGIXFBLHRLSGPMRSOEMAZVFLXYBXAWVNJCMTKWJZCSTCHIGUEGVGSLJPQ");
    msg.timeout = 39920U;
    const signed char tmp_msg_0[] = {89, -32, 29, 67, -40, -19, 48, 60, 111, 7, -96, 82, -50, 115, 98, 12, -7, -119, -68, -70, 103, -31, 68, 48, -118, 72, -100, 7, -97, -74, 123, 109, 74, -93, 40, -108, -126, 57, -44, 93, -123, -119, -106, 79, 23, 75, -86, 55, 48, 9, -2, 43, -121, 64, -106, -55, -18, 97, -95, 43, -128, -13, 120, -57, -21, -20, -110, -11, -82, -56, -54, -68, 123, 5, 82, -111, -10, -118, -68, 12, -70, 83, -90, -43, 12, 88, 115, 34, 7, 73, 43, -94, 4, 61, 65, -3, 33, 3, -105, 35, 72, -84, 19, 51, 60, 51, 51, 122, 84, -31, 112, 108, 66, -79, 34, 49, -52, 106, 51, 126, 56, -2, 19, 17, 16, -72, -8, -101, 47, 104, -110, -70, 108, -76, 109, 25, -120, -104, 118, -78, -19, 110, -66, -24, -79, -17, 18, -97, -15, -1, -116, -38, -108, 59, 26, -25, 108, -77, -120, 90, 78, -13, 83, 93, -118, -11, -83, 106, 41, -53, -37, -92, 71, -69, 118, 8, 56, -121, 119, -40, -98, -90, -41, -99, 37};
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
    msg.setTimeStamp(0.4463857988424297);
    msg.setSource(63278U);
    msg.setSourceEntity(21U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(156U);
    msg.seq = 724286780U;
    msg.destination.assign("LNLUKWHZMKUQAMOJQXZEJSSIJOOPCVEMNBBZQDUTSAJGOAONVMGRYMIGXHSYYLVWHAJTOCUBDIEMILOCHWWNEZQECFYPFJLTFAFFKDCPGFCPFISPNCHHIASBUMXTJVFWEPUGOPDDFBVXNQKBWTZDYKTLXSRRAIMHZLGXYVBZWGQDYRTYKRTZLIZKNGVRQWYCRAVUDNVWXKFYEJBNCCHTQOXDPQGKXAGMAXLZQSUUEVBSJPTKWEIHU");
    msg.timeout = 33517U;
    const signed char tmp_msg_0[] = {86, 77, 69, -126, -120, 121, -42, 47, -5, 55, -99, 14, -84, -79, -95, -67, -65, 8, -104, -128, 125, 14, 103, 57, -15, 87, 115, -65, 15, -44, -95, 46, -52, -75, 52, 61, 114, -104, -107, 96, 110, -96, 106, 22, -86, 44, 124, -71, -8, 17, -99, 11, 70, 21, -19, 96, 44, 97, 109, 4, 65, -3, -44, -114, -63, 2, -2, 42, -36, 123, -13, -105, -43};
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
    msg.setTimeStamp(0.516394858331711);
    msg.setSource(12340U);
    msg.setSourceEntity(248U);
    msg.setDestination(53210U);
    msg.setDestinationEntity(144U);
    msg.source.assign("LTMHMFHWLRCZJNQPUGPVK");
    const signed char tmp_msg_0[] = {-11, -111, 41, 2, 37, 50, -48, -4, 31, -99, -82, 105, 117, -54, 99, 70, -127, -92, 66, 26, -25, 109, -42, 38, -119, -127, 60, -120, 80, 79, -36, -21, -53, -47, 120, 27, -92, 109, 102, 8, 32, 13, -30, 124, 61, -22, -106, -119, -51, -77, 122, -123, 21, -101, 63, 78, 125, 105, -35, -22, 32, -96, -122, -7, -112, 25, 121, -5, 96, -62, 87, 26, 30, -98, 28, 79, 4, 62, -103, -16, 23, -104, 29, -68, -17, 42, 119, 72, 27, -7, -47, -93, 42, -128, -82, -40, -17, 108, 68, 111, 2, 18, -22, -33, -60, -73, -101, -29, 55, -74, -77, 34, -71, 8, -55};
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
    msg.setTimeStamp(0.09664467732482684);
    msg.setSource(36395U);
    msg.setSourceEntity(203U);
    msg.setDestination(57765U);
    msg.setDestinationEntity(213U);
    msg.source.assign("QIOKZPYFRSCBFQVJAZGJYCSFCKZAUHRDSBAOMUDJHJPLUSQLXTCCUGXLHUULKHIDERBWLQMKNAKUSGFZRBMLKGWAJHXZJSGPGATTW");
    const signed char tmp_msg_0[] = {-8, 26, 41, 51, -9, -49, 70, -58, -38, 23, 20, -35, -33, -96, 112, 90, 74, -112, 96, 58, 29, -38, -97, 19, 98, -82, 7, -82, 21, 17, 9, 32, 78, 126, 46, -98, -81, -103, -128, 100, -69, 5, -111, -33, -91, -113, -97, 39, -80, -108, 28, 124, 11, -88, 90, 115, 2, -54, -116, 110, 43, 91, 2, 126, -106, -47, 9, -36, 73, 55, -66, 125, 119, -86, 28, 120, -26, 6, -95, -23, -127, -56, 57, 26, 83, -109, -22, -127, 121, 51, -46, -28, 19, -127, 32, 77, 74, 27, 115, 69, 38, -114, -25, -81, 91, 70, -2, -1, -60, -5, -29, -89, 24, 114, -52, -36, -10, 114, 84, -116, 69, 122, 63, 12, -97, 58, -72, 89, -30};
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
    msg.setTimeStamp(0.8740152792191207);
    msg.setSource(64054U);
    msg.setSourceEntity(242U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(84U);
    msg.source.assign("FAIYFXBEUYETKVUSIGOAIWOCXRFMNRWQOZOZVQJEVSZWYHBVMSNPPSFXKUCRKJECJJMJBOGNKCHVFDZMCXRDGQSIEGPREGRVJRHPEAYTDOQFCYYVXZUUFAWOIBTVTKWQVNZLSBZSYUKXMILFLPINXWKTTIKNUODFGTLTLTBXMFZGJXGNHPHRPZYOPRMMQWCJLVHLACANLMSXULLDBAUDSTBQHGWEQDW");
    const signed char tmp_msg_0[] = {55, -59, 89, -16, 87, -118, 101, 37, 11, -14, -53, 31, -38, 51};
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
    msg.setTimeStamp(0.05947446892100283);
    msg.setSource(8211U);
    msg.setSourceEntity(207U);
    msg.setDestination(9240U);
    msg.setDestinationEntity(183U);
    msg.seq = 1578992851U;
    msg.state = 110U;
    msg.error.assign("COCLOEXAKLIAMJYQDXSGPUIIZOEUNKWHUZWMMSQFCMKRUDIFHQPFQVVULERNVYNIRXMMQRMQMMTSCWBFLZYNWDOCQXJXLRPKZIWEXKTAKLGBHTMCJCGQZHIDTEZKYINNBZTSUADNAKJZFIOVRBH");

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
    msg.setTimeStamp(0.7503775425735455);
    msg.setSource(63451U);
    msg.setSourceEntity(230U);
    msg.setDestination(55208U);
    msg.setDestinationEntity(148U);
    msg.seq = 2963955733U;
    msg.state = 62U;
    msg.error.assign("RNANVSJKKJHPKOVAZIHHDVLDISKNUOVAQBYAQCIAVWQTEESDLODVUJFXRECOHHOGPIQQGYBCDMYDXDYAMXZPITDWBJFILALPBBSETWCSSFREUYOYGEHANNIPMNXDVWRMKCUTRKASTMZKTJURFLMPTFMSTLOZQYOXINGBPQPGCGKRGCJXKXFYMGZXLVQBWAMCZXWNCGGMHLEJCZBIQTEUTJVLFWHRPUDFWZVEOZJFRBNIPUWZU");

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
    msg.setTimeStamp(0.28731768770782484);
    msg.setSource(60809U);
    msg.setSourceEntity(116U);
    msg.setDestination(37486U);
    msg.setDestinationEntity(120U);
    msg.seq = 463427676U;
    msg.state = 146U;
    msg.error.assign("GGZAKOCZAJISHWVQZEALEXMQXFLPTOWBGQXZZUNELGVYOTQFNULYVPCSNQDZ");

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
    msg.setTimeStamp(0.8845149140730694);
    msg.setSource(7682U);
    msg.setSourceEntity(49U);
    msg.setDestination(31405U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("HNSINFHMDRCUDGPYJSXZEITITZHBIAUXOJAWXUJPFJSUTXNZRXBDDIBGREQHRIFMKJLOHWYFAPCJTGSRTHEMEMUWDFKOGTYUUJRIEVTJWNPGYZNIBPVMKHLKUXOGNUYAQXCDLMPROAIQLKDWOMVLVYCPSBSVLCFXAKLNYEQLEQ");
    msg.text.assign("DJGASEBBDZHYVNMPDIXHGDPZVBLVZMPAQTNPOCVRWWTBSJJKVQCPGHTLYXEZEYZYHFXIXFOURQUQDALBWGGEBIUQFKVYLC");

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
    msg.setTimeStamp(0.20676542705374779);
    msg.setSource(57236U);
    msg.setSourceEntity(108U);
    msg.setDestination(52466U);
    msg.setDestinationEntity(179U);
    msg.origin.assign("QXOXXPLDVCUZRKIVGPMNFZJCIZGPFPIHKOWEBIVCPGMLNWDZWTEPQAZJDQINTNKYOGESBIQFJEIVQPOURBUVIHXXEACVZEAPLYCAKRXTUSTGOVYCBSYNXKGUFZYORRJDB");
    msg.text.assign("KKVNWHGCNLIVDYEOKMFKPLKHSBNDIIHFRSIATKWDRAHFIULPEJFLCRHVUOGYQSETZPLMYYQSOZRVLCPAOQSUKDEPEAGNYWVVEYXZGEGGFNCICIXJBHQWXPATDFYRLAPJCSXOIOQM");

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
    msg.setTimeStamp(0.2014876139113726);
    msg.setSource(29605U);
    msg.setSourceEntity(218U);
    msg.setDestination(37767U);
    msg.setDestinationEntity(189U);
    msg.origin.assign("IUSDMVKCMLJ");
    msg.text.assign("EBGLHASZTQXYVWIYSWRSSZDHPDWBDTEROFCFKYMYFRZWMSNCUHLLBUSNFTUTNHRMXJPZOGEEAGDOZELFGJCWQXPYCOQXGBSTVZKFCFQCKMAGUJJNKXQSEITXBNQDPVOZGFVBVWMOBWECILHRSDTRKJUYEBWHNGXUCVNKZFVGKAUKJLAJKIMMQHWYHPDURTBLAOCDXPKMQEVOJHIJYEUBIQAIRMITIYIVADNAOCQMJTVNZP");

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
    msg.setTimeStamp(0.8134031339568488);
    msg.setSource(20388U);
    msg.setSourceEntity(225U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("GOSIYVTUHHXNXIQFLCZNUHMFYAEDDCAKGKBUYTLFKCNPZXSZIXOVISMSFSVZTVLGUAUWRWYOMRPBHJHRZPJMECPQYJAGDRVQZAZBBHFPHBKWBEQPKXRFLCIIVF");
    msg.htime = 0.053055165659813275;
    msg.lat = 0.9721122743670922;
    msg.lon = 0.7197482794350293;
    const signed char tmp_msg_0[] = {-98, -125, -2, -55, -33, 90, 20, -68, -116, 63, 7, 117, -118, 10, -71, 32, -37, 56, 55, -92, -9, 15, 50, 93, 60, -77, -109, 27, -101, 71, 75, -9, -18, 73, -7, 71, 34, 20, 20, 103, -52, 80, -105, 61, -83, 94, -28, -95, 41, 68, 27, 103, 14, -115, -95, 97, 41, -32, -5, -110, 84, -48, -52, -70, 101, -34, -5, 30, 31, -91, -15, 97, 26, -14, 74, 118, -11, -114, -58, 45, -102, -106, -19, -49, 98, -52, 30, 88, 100, -71, 104, 14, -109, -116, 39, -102, 105, -90, -88, -121, 18, 108, 50, -36, -21, 53, 13, 58, 98, -11, -57, 54, 126, -92, -102, -45, -101, -32, -72, 23, 67, -103, -51, 102, -43, 6, -60, 54, 83, 15, 73, 52, -118, -118, 14, 123, 48, -51, -109, 13, -40, 11, -40, 7, 76, -53, 15, -3, -5, 20, 66, 91, 64, -17, 114, -81, -12, 100, 27, -47, -12, 106, -66, 99, 117, -70, -114, -92, -94, 15, -11, 91, -56, -125, 48, -112, 69, -74, -101, -66, 29, -108, 1, 46, -128, 23, -107, -69, -29, 7, 112, 123, -108, 33, 114, -90, 0, -116, -126, 15, 88, -58, 119, -120, 106, -81, 123, 83, 80, -108, -36, -43, -102};
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
    msg.setTimeStamp(0.30242219173157214);
    msg.setSource(18985U);
    msg.setSourceEntity(67U);
    msg.setDestination(13238U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("TRCWTAQMNFASDVS");
    msg.htime = 0.03471570409157476;
    msg.lat = 0.046262055985467065;
    msg.lon = 0.21292144661015655;
    const signed char tmp_msg_0[] = {114, 104, 44, -25, -6, -125, 100, -109, 84, -35, 48, -37, 117, 42, -53, -36, 5, 68, -97, 123, 103, -46, 98, 38, -103, -60, 21, 76, 92, -104, 28, -65, -31, 7, 12, -102, 52, 38, 66, -83, 5, 85, -3, 48, -75, 84, 85, -95, 118, 36, -93, -100, 28, -10, -110, -35, 93, -80, 68, 3, 92, 101, 91, 2, 86, 81, -72, -114, -94, -128, -7, -118, 68, 42, 32, 109, -95, 17, 35, 94, -63, 10, -27, -90, -78, 17, 80, 89, -90, -122, -80, 85, 44, -2, 78, 2, -13, 77, 78, 120, 59, 79, 94, 104, 37, -62, 49, -7, -116, 53, -42, 52, -9, 71, -32, 13, 85, 36, -25, 88, 70, 100, -67, 22, 80, -80, 121, -110, -21, -65, 6, -83, -123, 3, 13, -104, 123, -127, -38, -52, -28, -45, -20, -79, -104, -84, 17, 54, -112, 60, 71, -17, -117, 95, 8, -14, 66, 2, -44, -121, -6, -107, 74, 32, 53, 113, -90, -13, -108, 101, -46, -94, -107, -54, -51, -76, -65, 38, 74, -38, -122, 86, 74, 6, -8, 69, 24};
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
    msg.setTimeStamp(0.6406498267571166);
    msg.setSource(7197U);
    msg.setSourceEntity(11U);
    msg.setDestination(30076U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("LCYBXQAFMNPUGVLAQVRULIXDBDAAQPKIBEUJSQKUBWDWOMMZUXWWSBUFYROGLRUFMEXD");
    msg.htime = 0.8180328489925595;
    msg.lat = 0.35030479188289243;
    msg.lon = 0.5612868509573619;
    const signed char tmp_msg_0[] = {5, -46, 33, 80, 65, -115, -33, 39, 86, 126, 84, 37, -115, 80, 21, 42, -124, -26, -96, 11, -50, 80, 62, 9, -118, 112, -87, 56, 33, -53, 76, 110, -57, 15, 50, 48, 43, -115, -100, -30, -93, 5, 50, 36, 14, 121, 83, -41, 119, -60, -25, -46, 1, -42, -26, 52, -28, -110, -35, 107, -121, 40, 72, -41, 98, 57, 19, 8, 115, 31, 84, 62, -103, -31, -86, 102, 107, -52, -83, -39, -18, 67, -45, 21, -102, 88, 74, 10, 109, 47, 52, 73, -68, -18, -119, 48, -95, 34, 19, 48, 61, -30, -108, 50, 94, 21, 12, 39, -104, 5, -29, -70, 123, 61, -128, 87, -78, -34, -13, -99, -35, 13, 53, 43, 70, 100, 88, -54, 39, -98, 105, -81, -103, 56, -37, 53, -47, -55, -35, 11, -122, -80, -81, -8, 56, 125, 75, 116, 35, 10, 35, 108, -5, 53, 10, 91, 40, -95, -33, -20, 119, 114, -122};
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
    msg.setTimeStamp(0.6285145040746541);
    msg.setSource(27435U);
    msg.setSourceEntity(96U);
    msg.setDestination(53602U);
    msg.setDestinationEntity(150U);
    msg.req_id = 26511U;
    msg.ttl = 56639U;
    msg.destination.assign("BYKVERJGUHGINAZPAGVZAGDIKLRPYCHOBYFHHIYBCFHGJJDDBADEUXVKCPWOWSNUMBMQCPHCLDTMGUSRTGOPKA");
    const signed char tmp_msg_0[] = {-101, -72, 110, -85, -52, 97, 27, 81, -94, -103, 65, -1, 43, -123, -65, 50, 41, 14, 65, 24, 101, -109, -70, 26, 84, -67, 61, 114, 4, -4, -115, -101, -34, 46, -56, -109, -22, -74, -70, 23, 10, -97, -37, 110, -47, -75, 113, -124, 9, 117, -47, 32, 28, -13, -89, 120, -95, 83, -109, -35, -77, -78, -21, 31, 61, 73, 68, 23, 12, -89, 64, 48, 52, 100, 52, 119, -98, 42, 7, -106, -123, 99, 33, -66, 107, -79, -48, -35, 78, -11, 46, -43, -42, -128, -121, -27, 106, -93, -17, 43, -119, 125, -86, -25, -72, -72, -79, 27, -113, -120, 74, 65, -5, 92, 65, -83, 44, 34, -28, 77, -94, 66, -95, -18, 90, 23, -28, -100, -50, -120, -16, -15, -61, 25, 32, -84, -54, -14, -57, 102, 41, -86, 56, 62, -26, 103, -27, -55, 60, -73, 75, -4, -36, -58, 117, -69, 109, -11, -36, -49, 4, 90, 28, 33, 11, 50, 106, -57, -97, -105, -11, 35, 95, 59, 10, -13, 100, 51, -3, -13, 10, -120, 109, -116, 3, 115, 52, 19, 74, -63, 108, 113, 87, -97, -98, -21, -69, -45, -80, 101, 90, 12, 44, 24, -8, -49, 33, -116, -82, 70, 69, 37, -90, 72, 45, 122, -69, 125, -94, -10, 28, -31, -122, -93, 117, 51, 46, 93, -4, -22, -119, 46, 72, -56, -83, 47, 125, 7, -7, -27, 113, -59, -97, 91, 104, 6};
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
    msg.setTimeStamp(0.010816223514840906);
    msg.setSource(34342U);
    msg.setSourceEntity(185U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(104U);
    msg.req_id = 4335U;
    msg.ttl = 14250U;
    msg.destination.assign("NPKRLZGWWHYAXMOTHJIVRZFQDONNLFZJDISKSFRGHTSESJQRMTUIXSLZQYRVCSCVENRJAEJDWHBGAUQFAFOINBWSELAPQXNOYYWTEFLMQQCCYLZPJHJSIPVGKDLGRUKLITANKIPVTFYXPRUO");
    const signed char tmp_msg_0[] = {79, -24, 43, 94, -6, -64, 103, 117, 0, -22, 122, 107, -88, -43, -15, 20, -83, -94, 83, -83, -44, -48, 65, 100, 59, 10, 73, 106, -126, 85, -11, -126, 1, -21, 119, -35, -50, 113, 82, 71, 9, 55, 93, 122, -98};
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
    msg.setTimeStamp(0.05105706448584546);
    msg.setSource(23951U);
    msg.setSourceEntity(201U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(38U);
    msg.req_id = 17517U;
    msg.ttl = 17649U;
    msg.destination.assign("OWHNIFDVZSKPWVILVATEMKADBITGXLIUQJNHQPHJIMMGGVZGRN");
    const signed char tmp_msg_0[] = {-27, -114, 57, 93, 103, -126, -36, 45, 80, 75, 65, 73, -4, 111, 122, -92, -102, -51, -28, -105, 76, -34, -103, -3, -108, -50, 27, 11, 100, 84, -4, -24, -14, 123, 36, -37, 90, 123, 52, 98, 80, 61, 82, 98, 69, -107, 56, 69, 63, 13, 13, 120, -97, -114, -124, 86, -80, -42, 2, -37, 12, 81, -101, -112, -54, -49, 96, -124, 11, 3, 33, 42, -123, -14, -4, 76, 116, 49, 78, 66, -106, 71, -22, -98, -99, 68, -94, -31, 116, 55, -76, -46, -19, -40, -32, 20, 117, 43, 69, -13, 13, 101, 109, 75, 113, 14, -127, -119, 111, 84, 6, 37, -23, 90, -62, -56, 116, -114, -82, 70, 3, -9, 74, 90, 117, -121, -64, -125, 111, 93, 115, -103, 73, -73, 41, 90, -115, 15, -41, -116, 99, -69, -48, -15, 100, 65, -105, 42, 92, -29, -11, 42, 50, 95, 92, 116, 99, 65, 29, 102, 82, 10, -49, -106, -23, 81, -92, 32, -53, -30, -17, 19, 1, -26, 111, 53, 3, -31, 79, 73, -75, -106, 120, 27, -120, -114, 87, 84, -100, 61, -8, -118, -14, 104, -43, 91, 18, 28, 15, -22, 69, 90, 29, -110, 51, 45, -61, -77, -81, 40, 38, 20, -12};
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
    msg.setTimeStamp(0.9473884514318659);
    msg.setSource(49027U);
    msg.setSourceEntity(207U);
    msg.setDestination(37567U);
    msg.setDestinationEntity(144U);
    msg.req_id = 43653U;
    msg.status = 78U;
    msg.text.assign("ODFLPCHGXORBTUTVJXTSLMCROTSZCLFYPAWQMYGQPKHWASEWSKWAIIOZBJDGAGTFDAJWNZXPVVPPUNEOGEOXPIEMLQJEHUKCZEIPXUZFCRKHEBUDNCHFRFOFQTKZCMXUQFJXBLHZWJKMCYDJEAMWDNPGGUAHKOBWVZCJGFVITLNK");

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
    msg.setTimeStamp(0.9689768958701201);
    msg.setSource(50857U);
    msg.setSourceEntity(236U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(12U);
    msg.req_id = 18346U;
    msg.status = 118U;
    msg.text.assign("ZCIORGVFBJOFIUFAGXTKRIWBZKKZXIQMFSOUDEYQRCQCJWZQOQORLOVWWIOSBMMLXPDJVVGTMJGLETTPEUAYBXJSMXMKUHLRRCWKKESSGPJDDHRBEGPHBXMQYTOUVVPEFUNMKILMATANETNSUIZVCUHTLTICUSWSAEAMJBNAOYPZV");

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
    msg.setTimeStamp(0.49615325009772016);
    msg.setSource(5910U);
    msg.setSourceEntity(188U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(96U);
    msg.req_id = 63497U;
    msg.status = 253U;
    msg.text.assign("YYFVOTZWSSBLFIHMOHTTPYRERXWKAZOMEPDIDZKPAJKMMGFERYHACHIXPEQNLSNVXTMLBKEQRNWWKGRSXZVYYPSJHFOPUYDZDRVILLJVYNJKBDUBQIUPUNONQAERIXWGACVRHGXW");

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
    msg.setTimeStamp(0.8773684118892913);
    msg.setSource(19525U);
    msg.setSourceEntity(234U);
    msg.setDestination(44617U);
    msg.setDestinationEntity(149U);
    msg.group_name.assign("GXFYXBQIXHGROKFORUJKDLPUZVFCVKJWPKQSMBWHYTOYITSRTCMHHVVIMKFMWWQYDFUSRZPZOQKXAQKRRNWXWGLTOIMQNVVULOXUBKSZTRFHEEAXENNENSHJCHXCWDLCEJEQRPGIGCUJHEAUCIQYCNWLGVOBXSBPMZBEBZBIHVSOZCFRTTTWNKMOAPGAACPTJDNDSRNFZMYJVKULPOHN");
    msg.links = 2332227955U;

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
    msg.setTimeStamp(0.12310435091239313);
    msg.setSource(29105U);
    msg.setSourceEntity(67U);
    msg.setDestination(49513U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("HQMTUBRCXTIBTHPHMMKGMXJOIHFRXRYSLSBDQZHLICIYHRPMFUCTXQJHTJSSGJNRGQXFOUTMXCODJZZF");
    msg.links = 2213538630U;

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
    msg.setTimeStamp(0.028149982809207996);
    msg.setSource(18705U);
    msg.setSourceEntity(0U);
    msg.setDestination(57112U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("UXZFNBIPNKWCLDX");
    msg.links = 1885225028U;

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
    msg.setTimeStamp(0.9056417239606116);
    msg.setSource(14692U);
    msg.setSourceEntity(115U);
    msg.setDestination(45562U);
    msg.setDestinationEntity(171U);
    msg.groupname.assign("EHOBVWDQXFHVPDFGLBFQHLBPXBYMEHCCSROPKUHKMXZSSAPNUYNWBYEGCHWBTNXXLIOWIMJBWVCRLZTPQXOKGGADULKCZCJBJTHECAGBTTSMXLPLTPEXTIIAQNYDPYZKFKGRZTMLWJWQTIAEQZXNCVNQUHMEQFDRNGPDOHASDKVCAKEAFCULUOSNDA");
    msg.action = 186U;
    msg.grouplist.assign("KSKJIDQLIRPJLPSOMELUCTMDQUTAIKGDALERWZINWRBXXKOWWMHECUGWBVGAINUQVHVXTUXHMKRPJBFVHIEMPOQADSYONPTFTKQZGXVBYYDZRWJLTGSCPMFTNRISWTGYNKGKDJUYBTAMNDPRFHQOCOAEFECQBNUZCGHGBZOKXVFMKSTCGROJUEOCBMJHQDW");

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
    msg.setTimeStamp(0.4983616454936869);
    msg.setSource(49123U);
    msg.setSourceEntity(203U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(141U);
    msg.groupname.assign("NNSOXJGTQMDZTHUKKXMJZIVTDALRDOBSKFQDZWECPJPAOJYKPQJLFDBGXGVNWMGDFHHOCXRCBKBK");
    msg.action = 242U;
    msg.grouplist.assign("MJMYZGKNLWQKSZLVNYEWIHKZFMNMUTNIGRFERVJZGWFOOBLVPXWKXPMQIEINBQHYSJDMUBTULJECUJTBDNCCJCABXMVUTNHLFJWGHXPXYUAZCTHRYBEVCJAIJLSSOAFDRBGNSOVPOFDXHUZVQKLBUPEDKGSUDBLPMHQHVEWOQDOXYMLQBWXCFKKITPZNWWOIDQFSYSTQCGSRURPXFACVVFGPADGPIINRYQARZMZEAKIEOXLKAYJDSHGWHTRTT");

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
    msg.setTimeStamp(0.14500562572367404);
    msg.setSource(56703U);
    msg.setSourceEntity(153U);
    msg.setDestination(37538U);
    msg.setDestinationEntity(212U);
    msg.groupname.assign("FJQQMFSFDRCOUXETJOGLAPKROGJQK");
    msg.action = 57U;
    msg.grouplist.assign("IWUYKXEDEUPRKQWJZALZQAKLCXLGHMMKMRIJWOUNIAVDIDTIHUDPCEEQLRFKFKAQISKKMATDZWQENXOVCZBZXGHAVCHXXEMLDAOJYQNQCBSOECGHZVHVRGITPVLSZASAFIZIOEHYCNUBBNWYVSJLWPMEPKPFBRDDWYPMXVHRJBTFNZHUFFVOBLSTTLFPXFUUSROSYGNJDCSNDPGRGWTOYL");

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
    msg.setTimeStamp(0.2269918311936704);
    msg.setSource(64970U);
    msg.setSourceEntity(132U);
    msg.setDestination(26813U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7322052260359359;
    msg.sys_src = 29989U;

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
    msg.setTimeStamp(0.4110440602631247);
    msg.setSource(27485U);
    msg.setSourceEntity(84U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5482210915831018;
    msg.sys_src = 26688U;

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
    msg.setTimeStamp(0.3993638553744113);
    msg.setSource(4694U);
    msg.setSourceEntity(121U);
    msg.setDestination(46155U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5916845545932079;
    msg.sys_src = 61601U;

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
    msg.setTimeStamp(0.8239797650656081);
    msg.setSource(41627U);
    msg.setSourceEntity(166U);
    msg.setDestination(17019U);
    msg.setDestinationEntity(65U);
    msg.value = 0.7432311028872138;
    msg.units = 121U;

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
    msg.setTimeStamp(0.7445584542492151);
    msg.setSource(49834U);
    msg.setSourceEntity(141U);
    msg.setDestination(46050U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5495984304622309;
    msg.units = 4U;

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
    msg.setTimeStamp(0.025448550221613297);
    msg.setSource(7022U);
    msg.setSourceEntity(241U);
    msg.setDestination(45707U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0007323303249764379;
    msg.units = 136U;

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
    msg.setTimeStamp(0.6523757938224919);
    msg.setSource(21047U);
    msg.setSourceEntity(152U);
    msg.setDestination(37460U);
    msg.setDestinationEntity(201U);
    msg.base_lat = 0.6330382254888928;
    msg.base_lon = 0.9893926889257456;
    msg.base_time = 0.029264498921056092;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 14221U;
    tmp_msg_0.priority = -109;
    tmp_msg_0.x = -20135;
    tmp_msg_0.y = 11587;
    tmp_msg_0.z = -3335;
    tmp_msg_0.t = 1675;
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 56U;
    tmp_tmp_msg_0_0.angle = 0.3241560335938115;
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
    msg.setTimeStamp(0.543271507342826);
    msg.setSource(57768U);
    msg.setSourceEntity(18U);
    msg.setDestination(6501U);
    msg.setDestinationEntity(207U);
    msg.base_lat = 0.9110948236377642;
    msg.base_lon = 0.7062490232698013;
    msg.base_time = 0.9882410888832562;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 37094U;
    tmp_msg_0.destination = 42609U;
    tmp_msg_0.timeout = 0.9280056260607653;
    IMC::ArmingState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 89U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.06996506227239352);
    msg.setSource(42628U);
    msg.setSourceEntity(30U);
    msg.setDestination(21942U);
    msg.setDestinationEntity(54U);
    msg.base_lat = 0.5618836190590049;
    msg.base_lon = 0.8541567408510357;
    msg.base_time = 0.6767217290732964;

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
    msg.setTimeStamp(0.3126788726894101);
    msg.setSource(37971U);
    msg.setSourceEntity(12U);
    msg.setDestination(23003U);
    msg.setDestinationEntity(235U);
    msg.base_lat = 0.9284501467644946;
    msg.base_lon = 0.2140800954891695;
    msg.base_time = 0.5431405974415364;
    const signed char tmp_msg_0[] = {31, 29, -39, -27, -50, 36, -9, 34, -55, -68, 53, -71, 105, -51, -39, 46, 47, -44, 105, -112, -38, -40, 123, -73, -90, -58, -12, -48, -71, 27, 19, 5, -3, -41, -36, 109, -25, -51, -18, 33, 126, -117, -51, -111, 9, -62, 67, -57, 115, -56, -35, 62, 63, -96, -122, -100, 81, 91, -99, -105, 112, -13, 94, 121, -51, -77, 77, 45, -73, -100, -8, -15, -89, 100, 53, -95, -110, -46, 123, 23, -76, -64, 51, 114, 82, 82, -34, -5, 83, -20, -116, -62, 113, -120, 93, -7, -64, -40, -49, -43, 76, -30, -112, -73, 74, -113, 51, -53, 121, 5, -50, -68, -41, 72, 77, -112, -68, 61, -121, 5, -85, -111, 27, -89, -89, -74, 125, -101, 20, -81, -1, -113, -122, 103, -89, 82, 94, -109, 49, -42, 41, -45, -76, 118, 1, 124, -77, -92, 91, -85, 53, -91, 13, -80, 80, 119, 64, 100, -102, 100, 7, 46, 103, -42, 89, 114, 12, -48, -36, 52, -94, 70, 32, -108, -85, 39, -55, 97, 18, 52, 61, 92, 26, -32, -36, -28, 89, 68, 101, 85, 20, -119, -87, 111, 27};
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
    msg.setTimeStamp(0.8124730469147686);
    msg.setSource(52809U);
    msg.setSourceEntity(213U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(182U);
    msg.base_lat = 0.08274826473545727;
    msg.base_lon = 0.22954129732581252;
    msg.base_time = 0.6194809037795098;
    const signed char tmp_msg_0[] = {96, -106, -92, -64, -39, -57, -34, 117, 80, 77, -4, -78, 74, 107, -116, 62, -85, -111, -127, -65, 54, 5, 97, -115, 11, 48, -62, -53, 13, 121, -124, 125, 67, -86, 121, -50, -16, 16, -94, -113, 104, 65, -10, 29, 19, 95, -33, 104, -8, 26, 105, 76, 119, -35, 117, -14, 16};
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
    msg.setTimeStamp(0.7176421335258318);
    msg.setSource(29720U);
    msg.setSourceEntity(221U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(99U);
    msg.base_lat = 0.27434096970098076;
    msg.base_lon = 0.4414351807973256;
    msg.base_time = 0.3355340618209479;
    const signed char tmp_msg_0[] = {9, -60, 126, -19, -102, 57, -4, 122, -114, -123, -118, 80, -111, 49, -73, -71, -68, -36, -24, 78, 52, 9, 7, -87, -45, -7, 3, -127, -13, -49, 55, -49, -1, 55, -33, -7, -36, -3, -113, -1, 66, 10, 4, -110, -66, -65, -95, -18, -73, 65, 25, -63, 109, -20, 40, 124, 1, 21, 72, -57, 11, 120, 126, -31, 13, -110, 70, 4, 40, 85, 101, -38, 34, -104, 39, -95, -117, -59, 100, 100, 76, -49, 81, 2, 126, -21, -50, 82, 23, 59, 63, 103, 61, 94, 33, -28, -118, -27, 33, 12, -100, -93, -128, 30, -38, -10, 40, 107, 73, -103, -67, 70, -73, 36, -74, -11, -2, 111, 41, 76, 15, -110, 110, 106, -104, -90, -103, 114, -2, 104, -30, 70, 22, 21, 53, 98, -121, 57, -40, -112, -58, -76, 106, 81, 101, 68, 44, -127, 113, -119, 37, 24, 52, 102, 78, 118, 82, 36, -92, 102, 54, -23, 77, -61, 59, 65, -92, 46, -61, 40, -1, -100, -93, -27, -104, -26, -77, -42, -90, 57, -49, 124, 112, -45, -20, -103, 65};
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
    msg.setTimeStamp(0.6860241565266755);
    msg.setSource(32801U);
    msg.setSourceEntity(213U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(196U);
    msg.sys_id = 42615U;
    msg.priority = 28;
    msg.x = 15640;
    msg.y = -19303;
    msg.z = -6169;
    msg.t = 26185;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("PTWTVECCGFAUTGTQPWYHFCHZZMMAHQTQIDSKWQTLFYDJBZKAPHNISELOSYRDLVOSYOYRBXWYPORUVNKTNZDIGBJFPZQHGMQIXVLNMPYQFGAUUXXGFDXUSCNKNJKCMEANBOHPSDLQFRAIUKQSCCHZGOBWNMSRIVALJKLHGLAMMEEBVXYPLHPAXCJSEZJXVJORYHXTVI");
    tmp_msg_0.lbearing = 0.9297988898347054;
    tmp_msg_0.lelevation = 0.7394734181103892;
    tmp_msg_0.bearing = 0.984946794998056;
    tmp_msg_0.elevation = 0.021099907431316844;
    tmp_msg_0.phi = 0.21803926594614076;
    tmp_msg_0.theta = 0.6102380600180706;
    tmp_msg_0.psi = 0.0680686594756349;
    tmp_msg_0.accuracy = 0.4509169184801147;
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
    msg.setTimeStamp(0.6112881697775562);
    msg.setSource(31303U);
    msg.setSourceEntity(155U);
    msg.setDestination(54117U);
    msg.setDestinationEntity(254U);
    msg.sys_id = 38979U;
    msg.priority = -97;
    msg.x = 25846;
    msg.y = -31517;
    msg.z = 30706;
    msg.t = -20949;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 190U;
    tmp_msg_0.op = 70U;
    tmp_msg_0.err_mean = 0.5968107711216525;
    tmp_msg_0.dist_min_abs = 0.7149708267023459;
    tmp_msg_0.dist_min_mean = 0.5674330267518725;
    tmp_msg_0.roll_rate_mean = 0.09570736590265039;
    tmp_msg_0.time = 0.6732645941293438;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 54U;
    tmp_tmp_msg_0_0.lon_gain = 0.5726518980600293;
    tmp_tmp_msg_0_0.lat_gain = 0.48838298361287646;
    tmp_tmp_msg_0_0.bond_thick = 0.04217637554156317;
    tmp_tmp_msg_0_0.lead_gain = 0.5471862324514893;
    tmp_tmp_msg_0_0.deconfl_gain = 0.7347988875541809;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.6682371349950401;
    tmp_tmp_msg_0_0.safe_dist = 0.8898087634597335;
    tmp_tmp_msg_0_0.deconflict_offset = 0.5831355935044447;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.5061906398421532;
    tmp_tmp_msg_0_0.accel_lim_x = 0.14658952439791073;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.41451134330744754);
    msg.setSource(8195U);
    msg.setSourceEntity(16U);
    msg.setDestination(31939U);
    msg.setDestinationEntity(158U);
    msg.sys_id = 8894U;
    msg.priority = 87;
    msg.x = 2002;
    msg.y = 25888;
    msg.z = -12864;
    msg.t = -12005;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("OGOQBKZTRBPGUDLBPLGAIQIPIXBGTNAZEFUJPPRKFETYYBOFISKDXCJ");
    tmp_msg_0.type = 39U;
    tmp_msg_0.op = 217U;
    tmp_msg_0.group_name.assign("BTZAIWWMZGTYQKFCWJXLEJUVTXAVPFLNFZREISEMYHLADMTHRDUAOEVFDMBPPZTXMPBQMBVXGNKUDQNZSZDNHKKDINYXYOOFQFGXEQAOEYSIAQUZBCHSGPXKIJSUGLHCEWK");
    tmp_msg_0.plan_id.assign("NHODJLAPIAONUTBCWPJAXHQBBWQTHEKKZSVUJMMVTXGIASMTUCFGTAOLMQXVIVXDRYLNYPYENCYLHQCNYLKBVPASNHCZMWSEWJTOLIESRQZBDDURIEXDWUXHKXQOZWMERONBJXMUMKPRVCIVEGFIZISWGURCPLBNXARGHLGZMNUPLOWKFPDJDKFZEQKDEUUCCKYXGBSYHTWKGRHFVFYFYAJQZINSZPFQOBLGZTOD");
    tmp_msg_0.description.assign("CHKYOKCJLONPVFIESJOANGFZTPPABEXJXOXRQFAFBOMVFDAZFWQCQQRAJGRQJOXVEACDSQMEMMHGCUFPZULMJWLHVSWFVKLWCOTJNULYDJQXOIUTDCREKBGDPGKSULVHITWXAGABDBIZLZVNMIHHWGSCRDZTKEBRNQISEXDFTPPSFTYHEBRILWTNMHZYSODTPLYVTDIGURKPXQYHVBWMSIXJK");
    tmp_msg_0.reference_frame = 226U;
    tmp_msg_0.leader_bank_lim = 0.8096098852384709;
    tmp_msg_0.leader_speed_min = 0.1637684600001349;
    tmp_msg_0.leader_speed_max = 0.6214513421228797;
    tmp_msg_0.leader_alt_min = 0.5321983651446042;
    tmp_msg_0.leader_alt_max = 0.8396193196807272;
    tmp_msg_0.pos_sim_err_lim = 0.4511558024819994;
    tmp_msg_0.pos_sim_err_wrn = 0.43863665542952657;
    tmp_msg_0.pos_sim_err_timeout = 2664U;
    tmp_msg_0.converg_max = 0.7639173739791508;
    tmp_msg_0.converg_timeout = 6446U;
    tmp_msg_0.comms_timeout = 61414U;
    tmp_msg_0.turb_lim = 0.4715249384061333;
    tmp_msg_0.custom.assign("LXEPQUTFFUHLMSNCAWWCPWTXPSDTODBYNHKWTXKWRQIFFBSZVURKMPNHOUXLHVIFYDEVQCLGBRAJAQSMOTUKISPZTQEUHXCPALZIZUKQECSWOEKAHCDVGQAEFXNMMQUYOGRJIOZTB");
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
    msg.setTimeStamp(0.5283056553959787);
    msg.setSource(7871U);
    msg.setSourceEntity(1U);
    msg.setDestination(60240U);
    msg.setDestinationEntity(56U);
    msg.req_id = 13999U;
    msg.type = 230U;
    msg.max_size = 19577U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3039933818088443;
    tmp_msg_0.base_lon = 0.7708115078495983;
    tmp_msg_0.base_time = 0.3771008868736676;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 48362U;
    tmp_tmp_msg_0_0.destination = 42547U;
    tmp_tmp_msg_0_0.timeout = 0.7076041334487432;
    IMC::QueryTypedEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 158U;
    tmp_tmp_tmp_msg_0_0_0.request_id = 1809467244U;
    tmp_tmp_tmp_msg_0_0_0.entity_name.assign("YWVUXHSOVKIHNXYNBTDQGCAFEJFHJYOHJSHZQGUETLQJBUAGMBKXXCYJOXRCAFSRDQVNESHLNZUIUMKULOSJEIBEFTCBBLGXTPVYIWPEUWOFNVHNFEWOPYZZSXRWGLSAGJVTDEJYILVDXVKMRZSBROCSQSPPZVFPRFQGNIHTMMDRGNDOQYBDXFGOGVAAJUBAPLNLWFWZKMDYQEUKRMQODXTIPI");
    IMC::TypedEntityParameterEditor tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value.assign("BYWBZRWZJBOSQ");
    tmp_tmp_tmp_msg_0_0_0.parameters.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.0523736497798617);
    msg.setSource(964U);
    msg.setSourceEntity(60U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(90U);
    msg.req_id = 56895U;
    msg.type = 250U;
    msg.max_size = 59675U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3413737052120811;
    tmp_msg_0.base_lon = 0.4004646811888042;
    tmp_msg_0.base_time = 0.8579597648286628;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 29378U;
    tmp_tmp_msg_0_0.destination = 53197U;
    tmp_tmp_msg_0_0.timeout = 0.8183183959326621;
    IMC::EstimatedState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7047337088800801;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8875335362824827;
    tmp_tmp_tmp_msg_0_0_0.height = 0.40114962656593367;
    tmp_tmp_tmp_msg_0_0_0.x = 0.09668715182081589;
    tmp_tmp_tmp_msg_0_0_0.y = 0.2184513837960198;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8078320294837372;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.5028647114961786;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.9787800993288069;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.14091419086293244;
    tmp_tmp_tmp_msg_0_0_0.u = 0.3605846395597694;
    tmp_tmp_tmp_msg_0_0_0.v = 0.7885229236753128;
    tmp_tmp_tmp_msg_0_0_0.w = 0.47122853694586453;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.7382201075497085;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.5283527744364945;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.2608721056153793;
    tmp_tmp_tmp_msg_0_0_0.p = 0.3801344410810801;
    tmp_tmp_tmp_msg_0_0_0.q = 0.4214532150814517;
    tmp_tmp_tmp_msg_0_0_0.r = 0.5914647079558453;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.5507618634472546;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.18549557981781983;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3649281010512242);
    msg.setSource(61034U);
    msg.setSourceEntity(175U);
    msg.setDestination(29751U);
    msg.setDestinationEntity(58U);
    msg.req_id = 58053U;
    msg.type = 137U;
    msg.max_size = 9636U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.023008402264745986;
    tmp_msg_0.base_lon = 0.07304484160354796;
    tmp_msg_0.base_time = 0.5964127720702516;
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
    msg.setTimeStamp(0.4722671263356859);
    msg.setSource(22926U);
    msg.setSourceEntity(1U);
    msg.setDestination(10170U);
    msg.setDestinationEntity(228U);
    msg.original_source = 17057U;
    msg.destination = 5205U;
    msg.timeout = 0.15674281774275167;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 20290U;
    tmp_msg_0.flags = 104U;
    tmp_msg_0.lat = 0.5056290738968517;
    tmp_msg_0.lon = 0.24185263499096887;
    tmp_msg_0.start_z = 0.36835286804737843;
    tmp_msg_0.start_z_units = 158U;
    tmp_msg_0.end_z = 0.9460955179840327;
    tmp_msg_0.end_z_units = 93U;
    tmp_msg_0.radius = 0.7060797945721987;
    tmp_msg_0.speed = 0.9221891550201793;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.custom.assign("RWASCUITVLAEFZNBJFPNPV");
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
    msg.setTimeStamp(0.8672948661368275);
    msg.setSource(14176U);
    msg.setSourceEntity(7U);
    msg.setDestination(49866U);
    msg.setDestinationEntity(195U);
    msg.original_source = 33534U;
    msg.destination = 31910U;
    msg.timeout = 0.6431603936067318;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 103U;
    tmp_msg_0.error.assign("INUYHVHILKWJTZSAFOELARXXGZBGDCSFPUDMBDAZOLSMWAYQPBQQZNQMGOCUBJCFTFDRSKAWRYBEXAJVIVPCXAGEMHUNXTAPYWIWKVVPGHCDMLVJRQDXIITTKWQRYNDRROYMTOOAEK");
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
    msg.setTimeStamp(0.9683592375211466);
    msg.setSource(2024U);
    msg.setSourceEntity(171U);
    msg.setDestination(43060U);
    msg.setDestinationEntity(216U);
    msg.original_source = 15499U;
    msg.destination = 56278U;
    msg.timeout = 0.8127118220887594;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7264487917909552;
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
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.047300876055600405);
    msg.setSource(26267U);
    msg.setSourceEntity(249U);
    msg.setDestination(34161U);
    msg.setDestinationEntity(8U);
    msg.type = 117U;
    msg.comm_interface = 5831U;
    msg.model = 30841U;
    msg.list.assign("QHATJTSNBLOZPTBCQPPGWTTWVMTTOAVSNYKDLEVQRVWBJDXIMUHIFPWEZEIJXLFZRWBEORMEVELTVDDDCCJKLDTJOSDJKCUZNGHUYMNWISGHPFYHILGFYZESNMYOQKIKXGONKYUOKWURQQQPUGGZRRXMJDWYNVZFCFLZAXMADALMYPVHSCXAQSPQRXYOWGABDHPNAUUBLYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.1499798720683212);
    msg.setSource(21787U);
    msg.setSourceEntity(98U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(56U);
    msg.type = 146U;
    msg.comm_interface = 912U;
    msg.model = 21804U;
    msg.list.assign("UNUGUMZSRZTPBKPFROZXCIYXDCKDAWZPVBSIRAJCSRLKXONYNAWGHGDCTYMYQWVZCYOOWIADSDMRJUKHYGVTZOMVWPJMBUHBCQYEEEJVFHSLYDZJNZDEVIBRFMIJEEKVBTFIPILPGWQFWECRTRMZSFQHHGAANLLNDPFSQVUVWKGFBLOQBZOPKRCJJEEXGXPTMMXUNSOYYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.26414622835760027);
    msg.setSource(54862U);
    msg.setSourceEntity(122U);
    msg.setDestination(36914U);
    msg.setDestinationEntity(106U);
    msg.type = 216U;
    msg.comm_interface = 9986U;
    msg.model = 16425U;
    msg.list.assign("FNEDJKGADEIOTBNAYLJRHGCDTPHAQIFSAWGJTZQIOLBEZGKEPIWPRNZJSSRMUNBHZSEFFEXBJDXLKYNOOTKSPSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.8201215228313989);
    msg.setSource(49965U);
    msg.setSourceEntity(4U);
    msg.setDestination(35170U);
    msg.setDestinationEntity(30U);
    msg.type = 207U;
    msg.req_id = 175024040U;
    msg.ttl = 20439U;
    msg.code = 25U;
    msg.destination.assign("DPCPXUKFUOICBACFNNNXRNYCYELNKGWTMLJZJVGQBTCXLMYQCEVHUSJHESCHTOSNBQPQDCTQNTXWOBDYLAKERXSEONSEZQHWLPOMXWRJRRFEUTDYLXKVAHGH");
    msg.source.assign("EGKAJEHVXILQHFRMYECQTULUKRCVFBZOGXFIAOAWVHWAMCTYLYNCVCJEVTFJFXKXQSXJGPEHGUKBSRQJRROINBNCEY");
    msg.acknowledge = 167U;
    msg.status = 92U;
    const signed char tmp_msg_0[] = {-52, -62, 46, 115, -50, 47, 25, -43, 112, -28, 24, -14, -14, 22, 44, 104, 30, -110, 43, -103, -111, -68, 10, -24, -82, -47, 5, -128, -49, -63, 107, -72, -118, 53, 26, 109, 122, -100, -95, -103, 116, 57, 64, -20, 24, 1, 111, -127, -71, -40, -114, 112, -52, -22, -35, 26, -8, 30, 26, 44, 31, 60, 63, 96, 26, 78, -100, 98, 43, 19, 77, -53, 48, 48, -105, 15, -46, 125, -74, 19, 47, -115, -127, 7, 21, 87, -26, 111, 91, -14, -99, -13, -6, -117, 18, 100, 126, -70, -63, 67, -17, 67, 76, -122, -92, 48, -97, -55, -62, 17, -26, 81, 58, 1, 48, 23, -80, 10, 46, 92, 3, -114, -44, -125, 77, -102, -16, 26, 16, 20, -6, -109, -69, 39, -58, -103, 24, -108, -13, 96, 89, 61, 91, -30, -39, -19, -22, 37, -104, 30, -123, -65, 113, -83, 82, -113, -73, 94, -84, -123, 114, -57, -21, -71, 43, 56, 102, 24, -59, 48, -6, -57, -103, -90, 80, -51, -42, 22, 90, 105, 9, -10, -2, -63, -112, -19, 37, -122, 113, -94, 37, 85, 64, 104, 8, 36, -16, 91, -126, -71, -70, -72, 26, 111, 110, 1, 91, 48, -23, -64, 15, 55, 58, -52, -19, 1, -59, 20, -127, -22, -7, -59, -52, 14, -93, -83, 70, 6, 45, 63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.9559882312286061);
    msg.setSource(65218U);
    msg.setSourceEntity(120U);
    msg.setDestination(63668U);
    msg.setDestinationEntity(253U);
    msg.type = 178U;
    msg.req_id = 3996873457U;
    msg.ttl = 660U;
    msg.code = 13U;
    msg.destination.assign("LVZLVGHKUAJBPDBUDZCURYJGJSMNUEOHLOLYSXPBTTQYCLIMGZABWBVOTBFFNCLWJDEEIGGKZXICLITJYDZDTXJSCADMQTOTVSHLHPZGXFZNRQMGBPBHFKQDQEPTZXWSJSIUDSQXWIMRVMUNOOKOPNRKRMYPQXRHECKJONZWEHTILRNSAFUYBFDUMWRFWKYXNUMV");
    msg.source.assign("SFHERHBJCYAYQZRHNCZDPFASAFPVZEZFPINXKWTUTKRIUHAGCDZWNBXPINBIDSTBTLNHDXRHFBVPWACMEXPOZAJOHJHXCGVXYZVJTBLFCSLGFEYVWUGOZRXJOIBIOVVYUUTNDKQIMJDXWDFKGARYGRICWEJMEOPYLTZIXDOCWNEVYKQYGLAMEWEMYPOFALCSNHVMWNQRMQSKMGSTURKDNG");
    msg.acknowledge = 119U;
    msg.status = 60U;
    const signed char tmp_msg_0[] = {-76, -65, 125, 100, -128, -88, -25, 46, 75, -65, 121, 122, -23, 110, 69, -77, -60, -116, -31, -100, 104, 97, 43, -49, -23, -125, 95, -36, -11, -2, -111, 58, 72, -87, 84, 34, 7, 79, -72, 114, -115, 114, 115, 41, 111, -69, 104, 16, -54, -81, -27, -87, 77, 25, 75, -1, -44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.14706186080795758);
    msg.setSource(15462U);
    msg.setSourceEntity(97U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(149U);
    msg.type = 29U;
    msg.req_id = 4287020133U;
    msg.ttl = 49701U;
    msg.code = 245U;
    msg.destination.assign("HRRAQJATTTIHNJUIUXHBNFBNBMNMPYIHWZHYAXEMOVFFXQGMOGZNPNTSQDJOMBDJBDGTILBACDMDORZEKSFWCKBVUKFFROPULBUGFCGPDROEKKYJARUMWXNYTHQQVVCAIXFOVCGLLONPVGLAZWIHDZPZLBZXJSHTKVLRMYCVMXQEGWWNRJQJASYWNXWMLSZPUDDTKXQGCXPVRLYEERKFSUBQAYISECHOEU");
    msg.source.assign("GYOAGMEHKWQPPQDUJBAQJNQLIZXSGENEOMVUJDUFCUIVEATIJFSELVLHZZVJNJROFAYHIKBNQUHCLVWYPCMTRZZWWFGOTMBWPPOXEVJMOUXKYMIQC");
    msg.acknowledge = 194U;
    msg.status = 107U;
    const signed char tmp_msg_0[] = {-49, 93, -73, 17, -68, -96, 59, -26, -41, 42, -30, -73, 17, 80, -44, -115, 47, -37, -27, -117, -109, 113, -47, 100, 59, -8, 0, 45, 117, 16, 23, -31, -2, -116, 86, -80, 17, -127, -44, -96, 11, 109, 3, 77, -17, 30, 78, 48, 47, -56, 103, 9, 120, 10, 77, -128, 42, 34, 41, 6, 109, 15, -66, -31, 33, -19, -15, -43, -116, 29, 3, -37, 90, 51, 20, 51, 22, -121, 2, -15, 3, 126, 61, -19, -46, -54, 103, -84, -41, -48, 12, 73, 92, 49, -7, -51, -33, -5, -68, -63, -26, 8, 27, -28, 38, 90, 77, -37, 17, -33, 31, 114, 51, -25, 92, 37, -63, 109, 48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6805021914125807);
    msg.setSource(51944U);
    msg.setSourceEntity(80U);
    msg.setDestination(57725U);
    msg.setDestinationEntity(65U);
    msg.id = 248U;
    msg.range = 0.7516322848232196;

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
    msg.setTimeStamp(0.09076397215833476);
    msg.setSource(7595U);
    msg.setSourceEntity(203U);
    msg.setDestination(45425U);
    msg.setDestinationEntity(2U);
    msg.id = 175U;
    msg.range = 0.4923851852964606;

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
    msg.setTimeStamp(0.8179871920822868);
    msg.setSource(49712U);
    msg.setSourceEntity(94U);
    msg.setDestination(18552U);
    msg.setDestinationEntity(144U);
    msg.id = 202U;
    msg.range = 0.09753113999339591;

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
    msg.setTimeStamp(0.7870453928198846);
    msg.setSource(22749U);
    msg.setSourceEntity(164U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("XYNRGKOTGCSVEECYTEKNJPHAMKFNYMLVQKVWLFGBZONTIYUOGFDJYBZJGRZLEFOUDUTCMWKJHQLYDUXLRXYRECJHNWQLTUISPVAFEFGQGJMTKVMZRZXDRDQWFYXZRSJWRBHYBIWNMXEWAHNOKOMSLCEQVNUKASXSPSZOAOUPMJCFHZXOPARPQTHDDGSAAUQBOVFXDNJACPCKTPKTLLXIQHMVBWBHRPFIIPEMTSBYCL");
    msg.lat = 0.29689904208773943;
    msg.lon = 0.1465251175655956;
    msg.depth = 0.31651546103143335;
    msg.query_channel = 53U;
    msg.reply_channel = 28U;
    msg.transponder_delay = 115U;

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
    msg.setTimeStamp(0.5044709365451427);
    msg.setSource(3334U);
    msg.setSourceEntity(93U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(250U);
    msg.beacon.assign("BHGZFXSVDRFOOPBHBTNGJMIVWEAZSTTSIKOAHNVCQCFBX");
    msg.lat = 0.17259260146335564;
    msg.lon = 0.5305937646771556;
    msg.depth = 0.03901629525896366;
    msg.query_channel = 205U;
    msg.reply_channel = 235U;
    msg.transponder_delay = 149U;

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
    msg.setTimeStamp(0.10140098013843546);
    msg.setSource(45201U);
    msg.setSourceEntity(183U);
    msg.setDestination(23928U);
    msg.setDestinationEntity(238U);
    msg.beacon.assign("FZYUQNVWPELLTHXGLNPUKVTQZIFNXVMKWSAUBICKBMRQWWCYLPNCCOSRLNNMNHYDSNTITRGWE");
    msg.lat = 0.3617201804482453;
    msg.lon = 0.8287896314751281;
    msg.depth = 0.5702195094296998;
    msg.query_channel = 3U;
    msg.reply_channel = 79U;
    msg.transponder_delay = 139U;

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
    msg.setTimeStamp(0.47243597826402306);
    msg.setSource(14188U);
    msg.setSourceEntity(50U);
    msg.setDestination(59538U);
    msg.setDestinationEntity(139U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.7465901541558376);
    msg.setSource(5904U);
    msg.setSourceEntity(59U);
    msg.setDestination(60510U);
    msg.setDestinationEntity(94U);
    msg.op = 238U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HYRGDYTGLWQIOPXTGYELVQFUPRAIXWEOFCPMHNCVKBJFKZPVLIKVQOCDEZCKOSAAXLUZAMDJLPVBXNA");
    tmp_msg_0.lat = 0.9435065575505828;
    tmp_msg_0.lon = 0.24545042438613418;
    tmp_msg_0.depth = 0.47562479753115583;
    tmp_msg_0.query_channel = 54U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 222U;
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
    msg.setTimeStamp(0.15310587073581894);
    msg.setSource(49221U);
    msg.setSourceEntity(53U);
    msg.setDestination(65137U);
    msg.setDestinationEntity(198U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.4272516604018217);
    msg.setSource(10607U);
    msg.setSourceEntity(5U);
    msg.setDestination(48713U);
    msg.setDestinationEntity(235U);
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.7656481996669635;
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
    msg.setTimeStamp(0.5030221888490783);
    msg.setSource(15342U);
    msg.setSourceEntity(29U);
    msg.setDestination(65521U);
    msg.setDestinationEntity(61U);
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 251U;
    tmp_msg_0.period = 680654899U;
    tmp_msg_0.duty_cycle = 639256298U;
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
    msg.setTimeStamp(0.20703259619417902);
    msg.setSource(42332U);
    msg.setSourceEntity(52U);
    msg.setDestination(934U);
    msg.setDestinationEntity(60U);
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.9005432851349825;
    tmp_msg_0.lon = 0.7758471246411054;
    tmp_msg_0.depth = 208U;
    tmp_msg_0.speed = 0.7520772609913764;
    tmp_msg_0.psi = 0.8367819528828246;
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.9251459583530225);
    msg.setSource(17340U);
    msg.setSourceEntity(180U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.8024762585649883;
    msg.lon = 0.7337463378475517;
    msg.depth = 0.2834711338104773;
    msg.sentence.assign("SOYZWNLJIRICWYTUBNVJGXVKWGFMAILIIBNXPLRLVGPTQNDBZGVSNUPHDTLHDRPBSQGMIQHIRWYXKYKPJCCSWBQVCAXTHUYINKXGFHGBE");
    msg.txtime = 0.2773206103076311;
    msg.modem_type.assign("TSIJUOISQNHNQFSOLUMVPNFHEQQVKSRNRQAJRJYJEIXSZJCFTGMXKBXDYPEHNZNCTNTUVLUJCGYPQBZXVZGFBMBKXYRJPRVXXLGEYCMWIKNLODYPZAMIUDI");
    msg.sys_src.assign("GZDDLNONUKMVVWWKNBMFHKWHPALRAJMEBLNIPYCABGMQUZWFJUPLVFPCKTYAGUTXMRYCTDQMSLHVERQBQYINJRWOQMZJSIBHOSUUGTXZCSDFUOQKPCZXDKHESOLBBHJXYVHPKLABINFJNKDCFJVOAIFVHWIUXOGFMBEEWHZLXLMGSYOANPKTIEOIPCGOQSEXWSZTPXSZCYQERDEVZTRQZWUGJAIEJDDTM");
    msg.seq = 46799U;
    msg.sys_dst.assign("FOBKKNWIYPXPTINSLOBCYVPHXLZAMRXSIGTGCPZQSHEKPCWWXKGQJDHCUVAZFJZEQFWIHTKYMNSNSZLVDTSDZKHIZRHHCOGJMCMKFBJRXUDDNISDYSJWFWRLXQRPIIECYFXNBLEZMNMYGOFPYDVXLTVZQVMBWNFEOPWAMJCULBNAIQERKRDQUTSJPMYBWDBAJCTAUVKULTOJUNRMFDXGEETOHEHYL");
    msg.flags = 185U;
    const signed char tmp_msg_0[] = {-116, 106, 94, 86, 35, -73, 62, 107, 91, 37, 44, 105, -43, 82, -94, -75, 84, 104, -2, -93, 126, 12, -84, -79, -18, 34, 31, -128, 2, -120, 82, -31, -61, 38, 10, -48, -45, -59, 42, 10, -60, -79, 113, -70, -110, -10, -37, -63, -17, -97, -47, 60, -84, 120, -109, -103, -80, -123, 107, 85, -32, 11, -37, 28, 40, -19, -9, 121, -98, 45, -69, -94, 102, 13, -101, -9, -123, 20, 85, -111, -122, 97, -119, -56, 106, 64, 78, 34, 61, -77, -71, 66, 126, -107, 20, -11, -5, -9, 110, 41, -34, -45, -12, -27, 28, -17, -115, -14, 51, -107, 106, -89, -20, -70, 73, -119, -128, -128, 103, 13, 31, 80, 17, 69, 70, -51, -90, 75, -108, -100, -57, 67, 38, 0, 33, 114, 115, -24, -87, -28, -121, -70, -111, -10, -71, -30, 96, -119, -57, -65, 20, -109, -91, 21, -79, -56, 5, 13, 69, -94, -42, 119, 52, -39, -18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.7019906527225812);
    msg.setSource(26613U);
    msg.setSourceEntity(221U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.002504958363137688;
    msg.lon = 0.6461424883744978;
    msg.depth = 0.291300867975295;
    msg.sentence.assign("OWRKEBJEZWYS");
    msg.txtime = 0.44469518378329165;
    msg.modem_type.assign("UBHGKWEBHSZGYCONHRVYLTVPRFQLVJOE");
    msg.sys_src.assign("YPSROYZGVWESUKDOLNAYJSSAIFJBXEOXCNAEBHQFJRZDVMHDURDEWXNYLWMKXYTBRNQCUTFTIWXNPKGSEGCRIHBTDXHBIGSGFCQKIFYOUSHJPLHBZCQLDVNEJPCGALZBWDQERKWITNAFMSTTGQMGEMDOOMHRKMZXUXGYNVPISVZFCLDYTPRQLWFINMBVJJULHFWLBTYOEOGZUUEAPRBVHILKAHKFPJXIWPKMRA");
    msg.seq = 6119U;
    msg.sys_dst.assign("IPNOXVOJBHLJBHVRVFILFXZEQUBKXCSLCGJQYXVNWQWKCHNDOGGHGEFJLNLLBWYWDLRMWUNZGJCOEVYLPUBKOUOYWWHPRAJWQICYAAFNFUNXTQYCQSHEITAYEHGSADISCNQKUZPKDEBDXMMCMNMHRBTJSTXTQDKTHDUUGMYPIOMETCVKRFTXRCVPZAGJWHKVAZEZFQSJRPPI");
    msg.flags = 8U;
    const signed char tmp_msg_0[] = {42, -38, -69, -122, 22, 61, -71, 72, 41, -44, 19, -85, 11, 82, 63, -66, 34, -125, 95, 58, -23, 34, 57, 60, -77, -54, -86, -123, 64, 87, 56, -49, 95, -19, 97, -70, -40, -48, -98, 60, -38, 15, -2, 58, -20, -65, -55, -86, -73, 98, 125, 87, -119, 52, 62, -126, 117, 47, 54, -44, 113, -73, -102, 92, -15, -81, -109, -57, -87, -35, 85, -43, -128, 34, -35, 58, -122, 93, -107, 39, 65, 18, 122, -101, 40, 66, 124, -51, -53, 124, -11, 106, 96, 85, 108, -121, 123, 99, 118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.5134783387353177);
    msg.setSource(45590U);
    msg.setSourceEntity(119U);
    msg.setDestination(46727U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.1552459225119679;
    msg.lon = 0.6604990194291409;
    msg.depth = 0.9060423586115632;
    msg.sentence.assign("QANMQKZNDYTONJFMSHHLERQWSGMJOIKTVOLZKSKFDBWCKDPBHTGXZARMCSYOSNNMUEXOYEEPJCBYZXOYFITEHXBNKGGTXXULXUSXQVRBIEWHKRHPVAZTLCZOMBZUMVHGUJUVDQ");
    msg.txtime = 0.9949035838178755;
    msg.modem_type.assign("GPWPUSIJNWAVUAFBWVRYTHZTYEKTGLKSBRBZTUMWNMSXOQQJMIFNHFYNKBTQRFPTHUBXNSSZMWMKFFLHTZDXNDCZMUVKJYOXBAZJCIOVEQZZIEDRLNPQROESPEC");
    msg.sys_src.assign("PAWTFKIOMHEWHJGXWQLTNJSOBVDIZVNYQVZBEBFWPMKOSKCYDFVGWTYXQFKEMUICBHMJLYUOLUMDXTDARJGQZXCAIKIERTYVIJMCOZPXWCSFUXKVMSHLESYWQAAPUPSBBUPBJPUHKRMSRSZMXHHJORNTJREAXPNGM");
    msg.seq = 50458U;
    msg.sys_dst.assign("WMCQYCEUCIHHWBADSKLVJAQYJUOQPGFP");
    msg.flags = 76U;
    const signed char tmp_msg_0[] = {-100, 95, -59, 59, -50, -110, 44, -16, -58, 76, 45, -113, -29, 56, -73, -102, 14, 41, -20, -66, 10, -35, 77, 44, -75, -26, 80, 126, 53, 80, 101, 36, 35, 94, -33, 57, -98, -21, -81, 17, -23, 10, -125, -60, -84, -35, -54, -24, 22, 51, -63, 15, -28, -41, 1, -95, -116, 47, 34, -123, 14, -84, 87, -64, -34, 77, -86, 24, 16, -51, 119, 120, -40, 54, 2, -127, -77, -108, 36, -126, 6, 52, -101, 112, -26, -1, -57, -51, 36, -27, 40, -103, 103, 88, 82, 53, 19, 48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.363074417109847);
    msg.setSource(47603U);
    msg.setSourceEntity(243U);
    msg.setDestination(8283U);
    msg.setDestinationEntity(82U);
    msg.op = 0U;
    msg.system.assign("ABELAWTWEATSCNGLHQDNYOZVLGXMZBFZVNEJSBBAVMOXGIDRAQGYCMHYFGXQYHFSNDYSEXJXRNUKXVWFACRNBOTRUSWNPOMZXNUMVNT");
    msg.range = 0.014435353534539841;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 229U;
    tmp_msg_0.id.assign("VTTAUDSAYLTOAXBLBLCXDBORMELFWVIPEVRVDVMCHFAQKGGBZKVIKFKKKOWVAJW");
    IMC::TypedEntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SEUXSWTBBTESEMPKWQAZHOEIAXYHWWZMTLTLNCQIAOOJRSJAPDBFXUPNLQLYIOUXXDHGCFUSVGGQKZCDIRQUOYZFGXLGWMVJPQFBDFZLPLVNCZPEBTLMAADSMAVRBGCVFPEKJIJRANAJYJTZJHIYYNBMXZTDKWSIKRSERMUGQOTKHJEDOENUJNRMNNUCGVCVCNXKUHOYTCWRQBRIQKMPTPEBPWGYXAGUWVIZFHDZDQRYYFWXFHSLCHKVLMOKF");
    tmp_tmp_msg_0_0.type = 153U;
    tmp_tmp_msg_0_0.default_value.assign("ZIZJJOMIOAQCRTMQHPWNMAKHNYJFIUBPCBFHVGTEQIKFVJMFROYDORLBTYJALAIOYOGBOLULSQDQMLBUGNEJVYNTSEPWGGHKNAZTQOAVNDRQDFIERPUGZSLKYCWRFPHEVRRJEMFTKFDAUP");
    tmp_tmp_msg_0_0.units.assign("URMGHRVDEVEMNEEPEJIXAWMFKXPVQPAUELTIFFJNGZDQGNKMKJIUPIBWGAQLYLBQCZRDLYCLINYSHXVGMZMDWRBEHQHHIYKTAXRASDLEKTYDWZBPTBTWZJUMSLDPKCNNXTCRNSOFBUGHIOAUCBPVFDPGCXAWWUFVPJSCLMWOAOXSTXQFQEDKZZJUYHTLCGZFNHBPMAWYQFOMHVVRBYOFGSUKKQYRQSOISHXCSOEILJJWOTRONDYKNUATXJB");
    tmp_tmp_msg_0_0.description.assign("UNEGXILLECVDJQMXR");
    tmp_tmp_msg_0_0.values_list.assign("AGHDKZBRAJVEUKGNRFOIVDTLCDSVWWPLQSOGLKEENYTSIQNTIERLOEOUZBKDWTQGFBYLPSTQNMPBUOIISZGRYQUQFRXBFLWHJNXZFJXWSWBKFGZRTVHNXCKQJHWQYLFBATYBCCIDAEDKUNJCUISUMZRMHANPKIYZDRENTCYASDUWQMZQKJPLGJLGGAOPZMETCOFX");
    tmp_tmp_msg_0_0.min_value = 0.8145876377177973;
    tmp_tmp_msg_0_0.max_value = 0.17225359183544153;
    tmp_tmp_msg_0_0.list_min_size = 132U;
    tmp_tmp_msg_0_0.list_max_size = 87U;
    IMC::ValuesIf tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.param.assign("OWOGMUBHXKIONYAMPEMJEHZNEINQBBSQHQSOJEAYFNYPOSICDY");
    tmp_tmp_tmp_msg_0_0_0.value.assign("KMVSCJKBRUTEVLKZRCXKVZWTRVOOADLSAECQWALJHUEBXGAMPTSDTAHUTIFFJUDPNFBFJQFRNNRTGVGASNBGTRCXLWMMJLEFISHPMOPFUSCTFPOKIDWXECYBBNBWEVLEKLMQZRLZQYAIVYCYG");
    tmp_tmp_tmp_msg_0_0_0.values_list.assign("BNGTIBRPBYHZMBMFZAWGVEGVOYEZPPDCEWADETLQGEICYLRUCPXMTKHHXJVENOWYVTAXQONZZHIIRIKCDXIRPFQDWLQHCNSWFXODFSSSOODSVWZYMJUMSAGLEPMOLBMN");
    tmp_tmp_msg_0_0.values_if_list.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.visibility = 94U;
    tmp_tmp_msg_0_0.scope = 234U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8404499457349133);
    msg.setSource(52257U);
    msg.setSourceEntity(200U);
    msg.setDestination(62911U);
    msg.setDestinationEntity(41U);
    msg.op = 101U;
    msg.system.assign("PODPYVHELDRMWQZXVNGMRUGMFDTCVKKKZBVQCSYDUEXLOLSRYOJAVRIZUQWWUHAFKKYUJNMTAVGCHJOHSCPBPERRJIMNMANTWFVJYIPBOILALGDKZXMEHTZIKOHLYTORNBUCXJZR");
    msg.range = 0.7473329868198042;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 5U;
    tmp_msg_0.lon_gain = 0.9517144623411363;
    tmp_msg_0.lat_gain = 0.2947776187485319;
    tmp_msg_0.bond_thick = 0.7127897571941267;
    tmp_msg_0.lead_gain = 0.7820795550332342;
    tmp_msg_0.deconfl_gain = 0.9888052445877771;
    tmp_msg_0.accel_switch_gain = 0.04558331958735595;
    tmp_msg_0.safe_dist = 0.8019961005748594;
    tmp_msg_0.deconflict_offset = 0.6190575323400508;
    tmp_msg_0.accel_safe_margin = 0.3804044110754662;
    tmp_msg_0.accel_lim_x = 0.23468575712115092;
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
    msg.setTimeStamp(0.574614665005501);
    msg.setSource(55717U);
    msg.setSourceEntity(164U);
    msg.setDestination(61268U);
    msg.setDestinationEntity(252U);
    msg.op = 20U;
    msg.system.assign("MVGTWDUVURUMV");
    msg.range = 0.027416381069072293;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 13207U;
    tmp_msg_0.plan_size = 2233263631U;
    tmp_msg_0.change_time = 0.49000661347965957;
    tmp_msg_0.change_sid = 16437U;
    tmp_msg_0.change_sname.assign("BWTJNILBTYIFQKFQXUMBQHUZHPYXRWLHPKSUXRVHCYVOYMQLNMTIEOLADHUANFQYOCPXIVTDHQHJZYTSRRKFIEATAOTAZBJJZFXUPJDNGWZHDGSRWLBUZFLVNRLDKIYWGOACMGVJSRDXDGXOKRMEMGLIGEPWEMCEPSCML");
    const signed char tmp_tmp_msg_0_0[] = {-128, 19, 88, -100, 107, -86, 41, -8, -114, 44, -108, 49, 79, 76, 60, -125, 75, -109, 99, -90, -66, -112, 40, -57, -111, 13, -96, -12, 70, 126, 111, -75, -80, -26, -29, -48, -15, 17, 72, 51, -77, 123, -116, 9, -64, 120, -71, 50, -31, 115, -127, -121, -42, -114, 24, -97, 119, -61, 11, 112, -117, 50, -62, 14, 44, -81, -85, 4, 101, -22, 108, -53, -5, 103, 31, 60, -98, -48, 95, 44, -25, 18, -123, -51, -6, -45, -56, 70, 79, -94, -33, 20, 124, -36, 2, -68, -12, -24, 110, 19, -127, 13, -3, 81, 46, 60, 125, 84, 61, 51, 44, -104, -89, 114, 26, -103, -92, 107, -52, -27, 38, 122, 21, -121, -25, 40, -2, -123, -87, -71, -47, 119, 120, -2, 99, 97, -55, -119, 18, -118, -66, -18, 59, -115, 90, 85, -91, 2, -109, -59, 14, -86, -109, -60, -16, 14, -70, -14, -65, 79, -24, -7, 93, -34, -37, -32, 50, -50, -55, 99, 64, 41, -78, -8, -55, 103, -23, 82, -26, 108, -29, -47, 55, 11, 119, -43, 7, 83, 0, -70, 54, -100, 44, -53, 116, -80, 40, -91, 55, 45, -4, 79, 111, 71, 111, 40, -25, 108, 2, -11, 8, 105, -57, -14, 17, -41};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3300065808704541);
    msg.setSource(40740U);
    msg.setSourceEntity(198U);
    msg.setDestination(56964U);
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
    msg.setTimeStamp(0.7227564730702901);
    msg.setSource(7423U);
    msg.setSourceEntity(137U);
    msg.setDestination(4168U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.17229080936622998);
    msg.setSource(9901U);
    msg.setSourceEntity(227U);
    msg.setDestination(35878U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.20682941361095664);
    msg.setSource(14301U);
    msg.setSourceEntity(22U);
    msg.setDestination(12356U);
    msg.setDestinationEntity(128U);
    msg.list.assign("FSUKQBSHTNCWSLOIPDEWEDPGAKJHPEQZHYJJPLLNWGDJBBVFIKQRDKGROAKVARXHKEVZGXRROCPICTBMBPQLMAFSBYTCLJXGSAVJZOZNDDVRQVLYAZIWOEGZFZRJLFNQJJEGHFUNXNLYNY");

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
    msg.setTimeStamp(0.8089501148845055);
    msg.setSource(63419U);
    msg.setSourceEntity(156U);
    msg.setDestination(47571U);
    msg.setDestinationEntity(116U);
    msg.list.assign("QRQQLOLARESPFPUDBWULGZYLQEITXSZPOVYZJHKTSVMB");

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
    msg.setTimeStamp(0.15604614243080417);
    msg.setSource(50169U);
    msg.setSourceEntity(250U);
    msg.setDestination(17746U);
    msg.setDestinationEntity(207U);
    msg.list.assign("JBOBCDPQCAEBSGKJNRJGYLQYCMAQZONYXOOBRIWVNZLMNUTDUGVXCJVZIADKWCOXPROWCAUKDR");

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
    msg.setTimeStamp(0.17925719551066543);
    msg.setSource(65064U);
    msg.setSourceEntity(75U);
    msg.setDestination(46266U);
    msg.setDestinationEntity(188U);
    msg.peer.assign("NABTIJPBWCSRBCKXJOQUZHSUROARJPXBDNRPBLKTYWDEFYNIRLHUVPDGPLTMJEROGNJLIDKVYDZMEYHYNOLSWVWQVUTAFIOTYWIC");
    msg.rssi = 0.6901234330490583;
    msg.integrity = 52754U;

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
    msg.setTimeStamp(0.28139489163604736);
    msg.setSource(57461U);
    msg.setSourceEntity(35U);
    msg.setDestination(49264U);
    msg.setDestinationEntity(120U);
    msg.peer.assign("YRXSFTYOZHALQZKXRNXGBOXXGPVKJHPHMPCRSYBVPQFDJZQWIOHQZRDIACB");
    msg.rssi = 0.4998139048733423;
    msg.integrity = 13545U;

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
    msg.setTimeStamp(0.19371196449441197);
    msg.setSource(45266U);
    msg.setSourceEntity(74U);
    msg.setDestination(7494U);
    msg.setDestinationEntity(10U);
    msg.peer.assign("XYHNRUSJLEHTJJBVUONTLLJZJUMCNPLRVWCNZHEKJTFVCIIVKCPJFXPGYMRENCOLGIUOFYMUHSDBMSFMZAKXLJDYPBVMVBZQQAXZSYRILAFOGUQIABYBQMSKFUQRWONMZYSGTCGFXOVATAYHEKIWDRZOSPTDBXKZVHUIGUGSZBQKCSKLWWNICDEJFXAPRBREAXNFHQLGADDXD");
    msg.rssi = 0.17398252506163459;
    msg.integrity = 24224U;

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
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.31182919928638264);
    msg.setSource(48695U);
    msg.setSourceEntity(64U);
    msg.setDestination(601U);
    msg.setDestinationEntity(0U);
    msg.req_id = 29310U;
    msg.destination.assign("MTYOIZAMQARQDUITUUXUKGZGJFEJQUBGWFYHVUCSVDHESHKONQABGMJPYTPXNZWSRPCAWSSFFFHFNBUXGEOWZGXBPXQMZSHGYDWCMFXWJAELNIBCLCIWKVYVYAAFRWLDJLSJPQMLGCNDJEPVXHNQIXKAJMHBVYKJDTOZBKYLVREVTKXSPAOICRE");
    msg.timeout = 0.9441221000368312;
    msg.range = 0.14488175361890132;
    msg.type = 156U;
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.22233315542552023;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.6480449383149856);
    msg.setSource(54202U);
    msg.setSourceEntity(192U);
    msg.setDestination(52401U);
    msg.setDestinationEntity(64U);
    msg.req_id = 38926U;
    msg.destination.assign("IMOTCLJXLYUXGYCPMYVMCQWUDGWNCDNJLRJCTGAWHQBFFRZTRJWVQSTEJUGSPFEPFSECEWSOFZWRVKHGSAGMVVJNGNUBUTHYRPBILIJLFPLZASJKOKVBWOPTFEDMDXZKCGQMJUOBFKHUQYVXRFKNHBAIPXVHZAUXDQSYAOHNIYBRWNDAHODODYWMXETZNXECMLMVBBKPNSGRFCZYCLTTKQTQMNLLIEOYRSX");
    msg.timeout = 0.1887957137487506;
    msg.range = 0.6253235076820517;
    msg.type = 131U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 52U;
    tmp_msg_0.htime = 0.664483795081599;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 188U;
    tmp_tmp_msg_0_0.htime = 0.29487670622711015;
    tmp_tmp_msg_0_0.context.assign("KCYFDVRBMZMYOKLWUSCISBFGEWUNQNFESHFUCPIEBFTAKVIECCDADONHTHRJRSOFVJLAYGOIWYUDUWQSADBHJRMWGFLTQOCIQOGRBIUQXDZAHRMLANCCHAYPGLQUGPGKNBPJYSDMMXEIVPWXVMZZMBPLAHSPABU");
    tmp_tmp_msg_0_0.text.assign("DFSQHZUPYPLDICEBTEVJZITUSIXSAZMQODVQWJUMIDFGVUWWYLYDLVXHWZKGNZMEXESBKODFZJYALVGZZNKFCOAMPAKXNFGMFJBQIIMXQBKTTGZGLSMBEMYOLTQPHOZIRLP");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.9822089917226609);
    msg.setSource(31182U);
    msg.setSourceEntity(196U);
    msg.setDestination(12576U);
    msg.setDestinationEntity(219U);
    msg.req_id = 58134U;
    msg.destination.assign("JPHYDMVUCLSGNJYLBXTPRZPEIJNLBXHDVKQUTNQDKHWKGOQZCVAGQNLFCXKSVIEOPUCYSSWQGBVIAZFHLBUMARIPRFMWLWYWCAQJEDRSRPRATGTZZKSJWFANVLGZDPCKODIEMXOHNYBDSEXAFHAKOJHJTCYEWBJROXULWNSHFYRMKEKMTYPYOXXHMMDAFIIVQBVGJR");
    msg.timeout = 0.11299211347001581;
    msg.range = 0.2605683426858395;
    msg.type = 76U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AWOBCYWBIMSMRTDECIEFLOJLGDTKOIFQEGJKWWGBHFGSZPDDVLKJUEZLOTPVQVZSNLTXJNYTDYNYXLSPRELYMATNVFZZUUQTPRQFUPRZOKIEHHDPQPBGRJQRWHJACVBPWUQULWAAMZMCROJIAMNLIEO");
    tmp_msg_0.lat = 0.19835264828537968;
    tmp_msg_0.lon = 0.4622545996099051;
    tmp_msg_0.depth = 0.01987813167146235;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 195U;
    tmp_msg_0.transponder_delay = 4U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.5745739417516419);
    msg.setSource(64963U);
    msg.setSourceEntity(103U);
    msg.setDestination(64885U);
    msg.setDestinationEntity(12U);
    msg.req_id = 45974U;
    msg.type = 87U;
    msg.status = 136U;
    msg.info.assign("BOLAMQKKQKRZMSGDJGRJLOERCPJKMYGRUMYWEZSLWCWIBTALKNFRBNPVTEALXOUBSCQHFHNOGJMHKTASCUVOXFONLQTWQJCQUDNPPGIMWSFJXDMQFAYYQNXIELYZVRPRAHHBZDKTBEKMXCQOVTYBJPVIFTIKGEADNBUYOYZPEEXIWONWK");
    msg.range = 0.6818079043245927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.9103060348643611);
    msg.setSource(50313U);
    msg.setSourceEntity(151U);
    msg.setDestination(59644U);
    msg.setDestinationEntity(133U);
    msg.req_id = 33676U;
    msg.type = 188U;
    msg.status = 141U;
    msg.info.assign("ZIYSYNQMEEGEHTJZEAPFNDNICARHCBTFWSHRIWLFXQDOFJGVJKAWRBFQLPHCKRMNZQTKIPLPUEZXNEOGKEXUOUIYCGFVODTKWJFWAGROIAOUGHDFTKFNZLVDRROOBTGHPWMVSHAMGWDVYULQHQURBEBHUGHVCYSYNMBMMOBYCCDAXJVYGTZPYRYAPVXZOSQS");
    msg.range = 0.6580001580792081;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.25532529711892105);
    msg.setSource(44042U);
    msg.setSourceEntity(47U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(36U);
    msg.req_id = 38068U;
    msg.type = 43U;
    msg.status = 50U;
    msg.info.assign("QWSBQCIVHWGPYLLJQBZQLNRORBMTZLGFMATYPIHEGSVIZHDCCLFPDTYYDJJDPRWEKCGEAPPKXXJURUNGFGZHFKICYKCRPKDGFGIVWBOSFNOMCWPQPEQNYOXMSWEQJLT");
    msg.range = 0.588361676314253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.0687037763823849);
    msg.setSource(6325U);
    msg.setSourceEntity(92U);
    msg.setDestination(31479U);
    msg.setDestinationEntity(49U);
    msg.system.assign("JHAEZDXDTJWTJOLLZWHRBIZCUPARWERXNMHAODZYENDGCHMNDTAPFWMOGFQNFNQLQNWIJYSGTVAPQGJVOYFLSG");
    msg.op = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.6742918289722682);
    msg.setSource(38400U);
    msg.setSourceEntity(157U);
    msg.setDestination(36920U);
    msg.setDestinationEntity(48U);
    msg.system.assign("GLXTVDFPSIFIOGMOIJUBNTYEDRFUAPNBSKOXFXZYREFNFUEDZYPZEHXUQKWSQAPYJKTRCALIWSEBIZUJBZWRTGPSXTNIHVVGJYKEHVOHFGANZLKXJCGWCCPUFXAHICU");
    msg.op = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.10662622844824388);
    msg.setSource(59469U);
    msg.setSourceEntity(32U);
    msg.setDestination(14726U);
    msg.setDestinationEntity(77U);
    msg.system.assign("NGJXPONRAQULKANEKTGJEVO");
    msg.op = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.737460973662362);
    msg.setSource(41270U);
    msg.setSourceEntity(113U);
    msg.setDestination(16066U);
    msg.setDestinationEntity(1U);
    msg.value = 832;

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
    msg.setTimeStamp(0.08788679546886724);
    msg.setSource(29500U);
    msg.setSourceEntity(21U);
    msg.setDestination(45813U);
    msg.setDestinationEntity(85U);
    msg.value = -28998;

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
    msg.setTimeStamp(0.17111402844846524);
    msg.setSource(41264U);
    msg.setSourceEntity(240U);
    msg.setDestination(40318U);
    msg.setDestinationEntity(147U);
    msg.value = -24736;

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
    msg.setTimeStamp(0.3609245742686841);
    msg.setSource(55850U);
    msg.setSourceEntity(124U);
    msg.setDestination(8190U);
    msg.setDestinationEntity(93U);
    msg.value = 0.2139360543743658;

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
    msg.setTimeStamp(0.26046137148947224);
    msg.setSource(8819U);
    msg.setSourceEntity(4U);
    msg.setDestination(42456U);
    msg.setDestinationEntity(253U);
    msg.value = 0.02719609924671429;

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
    msg.setTimeStamp(0.20580169544363824);
    msg.setSource(35781U);
    msg.setSourceEntity(122U);
    msg.setDestination(36219U);
    msg.setDestinationEntity(66U);
    msg.value = 0.05530873024140004;

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
    msg.setTimeStamp(0.9348396239167961);
    msg.setSource(52529U);
    msg.setSourceEntity(107U);
    msg.setDestination(25607U);
    msg.setDestinationEntity(208U);
    msg.value = 0.6472056280109327;

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
    msg.setTimeStamp(0.7161047899573045);
    msg.setSource(52858U);
    msg.setSourceEntity(207U);
    msg.setDestination(45142U);
    msg.setDestinationEntity(28U);
    msg.value = 0.6220891152462724;

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
    msg.setTimeStamp(0.560256207951486);
    msg.setSource(26887U);
    msg.setSourceEntity(250U);
    msg.setDestination(6580U);
    msg.setDestinationEntity(234U);
    msg.value = 0.2661514323734391;

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
    msg.setTimeStamp(0.5535039274930303);
    msg.setSource(22366U);
    msg.setSourceEntity(26U);
    msg.setDestination(46711U);
    msg.setDestinationEntity(218U);
    msg.validity = 4617U;
    msg.type = 166U;
    msg.utc_year = 41613U;
    msg.utc_month = 156U;
    msg.utc_day = 83U;
    msg.utc_time = 0.9503030831499442;
    msg.lat = 0.15881816817537986;
    msg.lon = 0.9278157231722245;
    msg.height = 0.4103512505864806;
    msg.satellites = 244U;
    msg.cog = 0.7262292240363539;
    msg.sog = 0.9305332193636886;
    msg.hdop = 0.2447143806348996;
    msg.vdop = 0.16633655961963312;
    msg.hacc = 0.6579913644124283;
    msg.vacc = 0.8231988582831617;

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
    msg.setTimeStamp(0.9429748215018585);
    msg.setSource(4974U);
    msg.setSourceEntity(141U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(248U);
    msg.validity = 3319U;
    msg.type = 225U;
    msg.utc_year = 9761U;
    msg.utc_month = 15U;
    msg.utc_day = 241U;
    msg.utc_time = 0.839380963326496;
    msg.lat = 0.4008950837421693;
    msg.lon = 0.474349125547743;
    msg.height = 0.8475519368679395;
    msg.satellites = 211U;
    msg.cog = 0.9025423441749136;
    msg.sog = 0.5993904481449458;
    msg.hdop = 0.181362347472394;
    msg.vdop = 0.6288700965730565;
    msg.hacc = 0.4340104905094021;
    msg.vacc = 0.7674298389541275;

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
    msg.setTimeStamp(0.5419682926529974);
    msg.setSource(2112U);
    msg.setSourceEntity(156U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(38U);
    msg.validity = 25600U;
    msg.type = 135U;
    msg.utc_year = 21897U;
    msg.utc_month = 131U;
    msg.utc_day = 87U;
    msg.utc_time = 0.35315432639382194;
    msg.lat = 0.6191482774688165;
    msg.lon = 0.5210913932866237;
    msg.height = 0.8988060530608374;
    msg.satellites = 6U;
    msg.cog = 0.13807958361128692;
    msg.sog = 0.35738923709557;
    msg.hdop = 0.8700030526404247;
    msg.vdop = 0.8396401474732773;
    msg.hacc = 0.9715377235897651;
    msg.vacc = 0.6992672848711005;

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
    msg.setTimeStamp(0.28929152031646477);
    msg.setSource(17441U);
    msg.setSourceEntity(112U);
    msg.setDestination(6302U);
    msg.setDestinationEntity(37U);
    msg.time = 0.3735255878859296;
    msg.phi = 0.16460511141031642;
    msg.theta = 0.6714340887052244;
    msg.psi = 0.8453819105582142;
    msg.psi_magnetic = 0.9010608869952108;

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
    msg.setTimeStamp(0.9342564362608916);
    msg.setSource(26615U);
    msg.setSourceEntity(132U);
    msg.setDestination(2315U);
    msg.setDestinationEntity(235U);
    msg.time = 0.8276613642360067;
    msg.phi = 0.43733009431355196;
    msg.theta = 0.7736858573390757;
    msg.psi = 0.9782554504614615;
    msg.psi_magnetic = 0.1449381749719263;

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
    msg.setTimeStamp(0.3790596198102665);
    msg.setSource(5894U);
    msg.setSourceEntity(49U);
    msg.setDestination(33725U);
    msg.setDestinationEntity(53U);
    msg.time = 0.6758598372846114;
    msg.phi = 0.27479135101342156;
    msg.theta = 0.5473987348209137;
    msg.psi = 0.7338619461667933;
    msg.psi_magnetic = 0.2675300662549732;

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
    msg.setTimeStamp(0.9734059352270119);
    msg.setSource(40311U);
    msg.setSourceEntity(158U);
    msg.setDestination(7105U);
    msg.setDestinationEntity(179U);
    msg.time = 0.8060129754204857;
    msg.x = 0.4158169886322841;
    msg.y = 0.34500507460046803;
    msg.z = 0.5715402318380168;
    msg.timestep = 0.6909997253927578;

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
    msg.setTimeStamp(0.9499146038652716);
    msg.setSource(48353U);
    msg.setSourceEntity(87U);
    msg.setDestination(50370U);
    msg.setDestinationEntity(252U);
    msg.time = 0.5258908419891966;
    msg.x = 0.3025324819300108;
    msg.y = 0.6750293910268493;
    msg.z = 0.5678321978839396;
    msg.timestep = 0.42199863623395306;

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
    msg.setTimeStamp(0.947021114725043);
    msg.setSource(47461U);
    msg.setSourceEntity(13U);
    msg.setDestination(47255U);
    msg.setDestinationEntity(131U);
    msg.time = 0.5173009928257122;
    msg.x = 0.37431924127389615;
    msg.y = 0.4563690572545107;
    msg.z = 0.2589505186160994;
    msg.timestep = 0.14067182634482656;

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
    msg.setTimeStamp(0.9171557092086917);
    msg.setSource(18853U);
    msg.setSourceEntity(18U);
    msg.setDestination(37062U);
    msg.setDestinationEntity(168U);
    msg.time = 0.8911381292673292;
    msg.x = 0.5699366986740201;
    msg.y = 0.49720985476928303;
    msg.z = 0.12585085207856572;

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
    msg.setTimeStamp(0.707544406381388);
    msg.setSource(18710U);
    msg.setSourceEntity(194U);
    msg.setDestination(17727U);
    msg.setDestinationEntity(233U);
    msg.time = 0.8890864184617111;
    msg.x = 0.0809235171494479;
    msg.y = 0.9757499772182768;
    msg.z = 0.67792900819073;

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
    msg.setTimeStamp(0.1282253588413178);
    msg.setSource(40165U);
    msg.setSourceEntity(38U);
    msg.setDestination(45906U);
    msg.setDestinationEntity(39U);
    msg.time = 0.9357109953563234;
    msg.x = 0.6665192869171633;
    msg.y = 0.6676685888996808;
    msg.z = 0.6783596450145105;

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
    msg.setTimeStamp(0.09772506562225047);
    msg.setSource(10251U);
    msg.setSourceEntity(216U);
    msg.setDestination(22049U);
    msg.setDestinationEntity(124U);
    msg.time = 0.6614243776026003;
    msg.x = 0.7293944897053618;
    msg.y = 0.6593020365155693;
    msg.z = 0.033087108232978446;

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
    msg.setTimeStamp(0.0769151052134287);
    msg.setSource(11221U);
    msg.setSourceEntity(201U);
    msg.setDestination(59197U);
    msg.setDestinationEntity(92U);
    msg.time = 0.6826331947077066;
    msg.x = 0.2548871142355761;
    msg.y = 0.14011110614076006;
    msg.z = 0.7588686988052492;

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
    msg.setTimeStamp(0.5341570277823056);
    msg.setSource(43612U);
    msg.setSourceEntity(112U);
    msg.setDestination(41U);
    msg.setDestinationEntity(209U);
    msg.time = 0.1060168475829989;
    msg.x = 0.45422610697409993;
    msg.y = 0.27380364510015043;
    msg.z = 0.41877897101633654;

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
    msg.setTimeStamp(0.6504547638775805);
    msg.setSource(51282U);
    msg.setSourceEntity(97U);
    msg.setDestination(60419U);
    msg.setDestinationEntity(148U);
    msg.time = 0.7130009773902851;
    msg.x = 0.21684304110467667;
    msg.y = 0.07328705927663659;
    msg.z = 0.826062513060177;

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
    msg.setTimeStamp(0.6953357386126916);
    msg.setSource(3457U);
    msg.setSourceEntity(38U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(175U);
    msg.time = 0.4622580250353231;
    msg.x = 0.0783526797749593;
    msg.y = 0.6531341006603922;
    msg.z = 0.24023465017345225;

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
    msg.setTimeStamp(0.1977159691138891);
    msg.setSource(1698U);
    msg.setSourceEntity(76U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(158U);
    msg.time = 0.4832298889455269;
    msg.x = 0.7437747790617758;
    msg.y = 0.39156186196717035;
    msg.z = 0.64728361852379;

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
    msg.setTimeStamp(0.2096473864933044);
    msg.setSource(59839U);
    msg.setSourceEntity(178U);
    msg.setDestination(47111U);
    msg.setDestinationEntity(175U);
    msg.validity = 188U;
    msg.x = 0.901740500371866;
    msg.y = 0.08783709272094076;
    msg.z = 0.34648088223251783;

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
    msg.setTimeStamp(0.4200907795816158);
    msg.setSource(9796U);
    msg.setSourceEntity(86U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(59U);
    msg.validity = 225U;
    msg.x = 0.8378801841167549;
    msg.y = 0.9444882403551016;
    msg.z = 0.7241764987547297;

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
    msg.setTimeStamp(0.6860782051518438);
    msg.setSource(57362U);
    msg.setSourceEntity(10U);
    msg.setDestination(8863U);
    msg.setDestinationEntity(206U);
    msg.validity = 12U;
    msg.x = 0.5949286152501064;
    msg.y = 0.23764454369897448;
    msg.z = 0.23891975499142437;

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
    msg.setTimeStamp(0.4762063931181677);
    msg.setSource(57537U);
    msg.setSourceEntity(91U);
    msg.setDestination(5U);
    msg.setDestinationEntity(53U);
    msg.validity = 191U;
    msg.x = 0.9384970455212752;
    msg.y = 0.8126022679073105;
    msg.z = 0.036777096067726056;

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
    msg.setTimeStamp(0.275978510382624);
    msg.setSource(29174U);
    msg.setSourceEntity(49U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(60U);
    msg.validity = 147U;
    msg.x = 0.3504116851489728;
    msg.y = 0.18416604389165425;
    msg.z = 0.6500442055019802;

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
    msg.setTimeStamp(0.6181184342471479);
    msg.setSource(10968U);
    msg.setSourceEntity(189U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(131U);
    msg.validity = 253U;
    msg.x = 0.5067024225964326;
    msg.y = 0.4238602762051885;
    msg.z = 0.7466752673871428;

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
    msg.setTimeStamp(0.49589374760430927);
    msg.setSource(12103U);
    msg.setSourceEntity(173U);
    msg.setDestination(36124U);
    msg.setDestinationEntity(22U);
    msg.time = 0.35566271138196537;
    msg.x = 0.5804629295798666;
    msg.y = 0.7366898583734122;
    msg.z = 0.8135959796897992;

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
    msg.setTimeStamp(0.6194389467351951);
    msg.setSource(38744U);
    msg.setSourceEntity(239U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(194U);
    msg.time = 0.8808949987570444;
    msg.x = 0.8882273910386579;
    msg.y = 0.4824049332343594;
    msg.z = 0.41848151616816154;

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
    msg.setTimeStamp(0.22298230041805855);
    msg.setSource(49274U);
    msg.setSourceEntity(156U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(221U);
    msg.time = 0.07504609527438799;
    msg.x = 0.9359659137896249;
    msg.y = 0.797400342322105;
    msg.z = 0.9262142550783263;

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
    msg.setTimeStamp(0.1627212985847939);
    msg.setSource(11967U);
    msg.setSourceEntity(143U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(20U);
    msg.validity = 32U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2928662886072806;
    tmp_msg_0.y = 0.17852686975050203;
    tmp_msg_0.z = 0.6310515413372599;
    tmp_msg_0.phi = 0.3480284877435741;
    tmp_msg_0.theta = 0.6907277674845613;
    tmp_msg_0.psi = 0.6671643571008212;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9074684933234775;

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
    msg.setTimeStamp(0.4651374167291128);
    msg.setSource(47166U);
    msg.setSourceEntity(154U);
    msg.setDestination(60018U);
    msg.setDestinationEntity(247U);
    msg.validity = 6U;
    msg.value = 0.902405332887693;

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
    msg.setTimeStamp(0.8235900099571488);
    msg.setSource(36968U);
    msg.setSourceEntity(120U);
    msg.setDestination(46420U);
    msg.setDestinationEntity(15U);
    msg.validity = 241U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.301793363798606;
    tmp_msg_0.beam_height = 0.013760818771240246;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.5101981502151653;

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
    msg.setTimeStamp(0.687190688956408);
    msg.setSource(4929U);
    msg.setSourceEntity(180U);
    msg.setDestination(21272U);
    msg.setDestinationEntity(17U);
    msg.value = 0.9579537225015176;

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
    msg.setTimeStamp(0.1559824799307239);
    msg.setSource(27471U);
    msg.setSourceEntity(227U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8632193123001374;

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
    msg.setTimeStamp(0.27089544884982986);
    msg.setSource(11353U);
    msg.setSourceEntity(87U);
    msg.setDestination(19509U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7385424025381134;

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
    msg.setTimeStamp(0.9841180957016764);
    msg.setSource(42398U);
    msg.setSourceEntity(199U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(17U);
    msg.value = 0.3327006240452961;

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
    msg.setTimeStamp(0.6320643913160284);
    msg.setSource(36432U);
    msg.setSourceEntity(245U);
    msg.setDestination(24857U);
    msg.setDestinationEntity(192U);
    msg.value = 0.18148170017496046;

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
    msg.setTimeStamp(0.16195317280414823);
    msg.setSource(12668U);
    msg.setSourceEntity(194U);
    msg.setDestination(50489U);
    msg.setDestinationEntity(212U);
    msg.value = 0.24284552452702146;

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
    msg.setTimeStamp(0.1202148728341087);
    msg.setSource(10145U);
    msg.setSourceEntity(193U);
    msg.setDestination(42410U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7030796986010975;

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
    msg.setTimeStamp(0.4151483503898534);
    msg.setSource(26875U);
    msg.setSourceEntity(223U);
    msg.setDestination(21604U);
    msg.setDestinationEntity(53U);
    msg.value = 0.4409235949608139;

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
    msg.setTimeStamp(0.5139641861808196);
    msg.setSource(58565U);
    msg.setSourceEntity(64U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(73U);
    msg.value = 0.0024563983964351888;

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
    msg.setTimeStamp(0.120899827911093);
    msg.setSource(47958U);
    msg.setSourceEntity(12U);
    msg.setDestination(13345U);
    msg.setDestinationEntity(3U);
    msg.value = 0.3073645419375698;

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
    msg.setTimeStamp(0.960405728174909);
    msg.setSource(28217U);
    msg.setSourceEntity(186U);
    msg.setDestination(21787U);
    msg.setDestinationEntity(40U);
    msg.value = 0.9693665199737702;

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
    msg.setTimeStamp(0.6062362736688515);
    msg.setSource(23966U);
    msg.setSourceEntity(90U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(182U);
    msg.value = 0.04924382333029231;

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
    msg.setTimeStamp(0.19359409637569336);
    msg.setSource(4368U);
    msg.setSourceEntity(121U);
    msg.setDestination(25628U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9691957653986772;

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
    msg.setTimeStamp(0.02536116128394772);
    msg.setSource(52991U);
    msg.setSourceEntity(181U);
    msg.setDestination(56672U);
    msg.setDestinationEntity(114U);
    msg.value = 0.581075129080652;

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
    msg.setTimeStamp(0.4604994881604425);
    msg.setSource(12322U);
    msg.setSourceEntity(25U);
    msg.setDestination(4198U);
    msg.setDestinationEntity(203U);
    msg.value = 0.12392896394099828;

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
    msg.setTimeStamp(0.7914967168870387);
    msg.setSource(16657U);
    msg.setSourceEntity(64U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(47U);
    msg.value = 0.16279883221518565;

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
    msg.setTimeStamp(0.03533426608455881);
    msg.setSource(7283U);
    msg.setSourceEntity(160U);
    msg.setDestination(5123U);
    msg.setDestinationEntity(154U);
    msg.value = 0.35735299395588416;

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
    msg.setTimeStamp(0.2172926045610517);
    msg.setSource(60629U);
    msg.setSourceEntity(11U);
    msg.setDestination(55889U);
    msg.setDestinationEntity(119U);
    msg.value = 0.38229126833158267;

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
    msg.setTimeStamp(0.464024430440223);
    msg.setSource(38498U);
    msg.setSourceEntity(158U);
    msg.setDestination(5412U);
    msg.setDestinationEntity(91U);
    msg.value = 0.3507834887128477;

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
    msg.setTimeStamp(0.4072080059008094);
    msg.setSource(24343U);
    msg.setSourceEntity(176U);
    msg.setDestination(42758U);
    msg.setDestinationEntity(80U);
    msg.value = 0.41318488722827484;

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
    msg.setTimeStamp(0.31635582054382017);
    msg.setSource(45932U);
    msg.setSourceEntity(206U);
    msg.setDestination(53U);
    msg.setDestinationEntity(221U);
    msg.value = 0.7485120283330252;

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
    msg.setTimeStamp(0.3814896110063911);
    msg.setSource(40419U);
    msg.setSourceEntity(104U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(84U);
    msg.value = 0.06688272491861469;

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
    msg.setTimeStamp(0.7562156716897328);
    msg.setSource(51277U);
    msg.setSourceEntity(146U);
    msg.setDestination(58278U);
    msg.setDestinationEntity(52U);
    msg.value = 0.9104381758695347;

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
    msg.setTimeStamp(0.4652455076171875);
    msg.setSource(63881U);
    msg.setSourceEntity(223U);
    msg.setDestination(27755U);
    msg.setDestinationEntity(35U);
    msg.value = 0.44077330456691866;

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
    msg.setTimeStamp(0.2114534515159162);
    msg.setSource(15610U);
    msg.setSourceEntity(148U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(209U);
    msg.direction = 0.18225653880849868;
    msg.speed = 0.5859174919631629;
    msg.turbulence = 0.8884760071260926;

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
    msg.setTimeStamp(0.06294747450651639);
    msg.setSource(10453U);
    msg.setSourceEntity(36U);
    msg.setDestination(46562U);
    msg.setDestinationEntity(119U);
    msg.direction = 0.8908822273465706;
    msg.speed = 0.1643910764228994;
    msg.turbulence = 0.18355735687842312;

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
    msg.setTimeStamp(0.0845629351461934);
    msg.setSource(62879U);
    msg.setSourceEntity(203U);
    msg.setDestination(18658U);
    msg.setDestinationEntity(33U);
    msg.direction = 0.4115014295220688;
    msg.speed = 0.5578518055006706;
    msg.turbulence = 0.6865727738044489;

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
    msg.setTimeStamp(0.6912536252450496);
    msg.setSource(30662U);
    msg.setSourceEntity(91U);
    msg.setDestination(2661U);
    msg.setDestinationEntity(221U);
    msg.value = 0.1658898289545483;

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
    msg.setTimeStamp(0.8771550105872118);
    msg.setSource(2701U);
    msg.setSourceEntity(150U);
    msg.setDestination(61218U);
    msg.setDestinationEntity(36U);
    msg.value = 0.45107265793019546;

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
    msg.setTimeStamp(0.5840252510249933);
    msg.setSource(1002U);
    msg.setSourceEntity(42U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(219U);
    msg.value = 0.597494032191474;

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
    msg.setTimeStamp(0.2629398057282324);
    msg.setSource(52294U);
    msg.setSourceEntity(11U);
    msg.setDestination(51610U);
    msg.setDestinationEntity(20U);
    msg.value.assign("DXAFQLBYSISMCVOXRLXJIMQHKCXKVREHEKFQXDMPEZATSTUPWHIPXLYEEYFRLIYYYBVMRCBYQAUTMHBRNVJNQTAUWZNGSYVNLBHIYCDEWZFFSKQRBCV");

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
    msg.setTimeStamp(0.6435663573472576);
    msg.setSource(61002U);
    msg.setSourceEntity(18U);
    msg.setDestination(1939U);
    msg.setDestinationEntity(218U);
    msg.value.assign("QPGNZRDDZMJHMEKCLDSBHIPZAXAOEJNIUSQHTHDWNYEAPVBIYDLIVIIRAFBPFKRYIGBGHROYTZXBKKFYWTFKRCDMZSCS");

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
    msg.setTimeStamp(0.860940805539114);
    msg.setSource(24430U);
    msg.setSourceEntity(110U);
    msg.setDestination(22778U);
    msg.setDestinationEntity(161U);
    msg.value.assign("JGEIFXAOKJBNNVSACO");

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
    msg.setTimeStamp(0.011203351999541145);
    msg.setSource(10608U);
    msg.setSourceEntity(113U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(155U);
    const signed char tmp_msg_0[] = {55, -96, 3, -47, -89, 4, -97, -107, -35, -92, -104, 4, -104, 73, 58, 100, 54, -86, -88, 102, 50, -102, 25, 10, -46, 74, -19, 32, 34, 31, 92, -12, -62, 92, 118, -7, -112, -41, -52, -12, -89, 81, 82, 87, -101, -30, -32, -44, 71, -112, 90, -51, 20, -44, 111, 88, 100, -57, 72, 97, -18, 101, 23, 117, -75, 35, 98, -88, 34, -116, 75, -125, -15, -97, -83, 20, -117, 118, -49, -80, -108, 38, -13, -73, 123, 89, 80, -81, 40, 125, 62, 94, 6, 104, -75, -118, -19, 19, 18, 28, 103, 120, -109, 57, 53, -9, -76, 37, 58, -19, 73, 53, 44, -85, 77, 80, 54, 114, 125, 50, 31, -72, -40, -20, 10, 84, -67, -117, 50, -47, 35, 119, 110, 71, -116, 82, -17, -12, 87, 72, 18, -123, 52};
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
    msg.setTimeStamp(0.9976952572047165);
    msg.setSource(39309U);
    msg.setSourceEntity(233U);
    msg.setDestination(46794U);
    msg.setDestinationEntity(119U);
    const signed char tmp_msg_0[] = {-79, -93, 60, -44, 22, 109, 82, 78, -9, 81, -112, 87, -11, -80, -76, 30, 15, 11, 55, -82, 18, 70, 125, -3, -13, 10, -7, 123, -122, 19, -67, 44, -51, -29, -12, -29, -3, -3, -19, 100, -91, 61, 54, 9, 99, 63, 24, 124, 21, 107, 20, -89, 91, -96, 78, -73, -101, 59, 81, -92, 30, -96, 17, -36, 46, 23, -43, 8, 17, -36, 49, 114, 90, -25, -96, 53, 22, -120, 97, -17, 92, -79, -128, -93, 32, -27, -73, 82, -19, -3, -81, 62, 88, 66, -119, -21, -46, 31, -91, -65, 115, 100, -103, 70, -64, 80, 25, 60, 9, -85, -19, -3, -68, -51, 17, 78, 74, 78, 0, 105, -55, 91, -76, 27, 36, -113, -100, -47, -102, -2, 26, -45, -111, 104, -56, 117, -98, 80, 59, -28, 39, 56, -56, 69, -2, 23, 52, -56, 124, 62, -8, 50, 18, -128, 73, -127, -63, -83, 77, -31, 53, -101, -117, -109, 88, 98, 3, 88, 43, -13, -116, -41, -19, 22, 81, 29, 35, 55, -68, 12, -2, -70, 31, 57, -113, -39, 18, -79, 120, -6, -52, -119, -114, -51, 44, 104, 114, 33, -29, -46, -11, -68, -28, 60, 28, 82, -51, -69, 55, -34, 20};
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
    msg.setTimeStamp(0.610279878229831);
    msg.setSource(42906U);
    msg.setSourceEntity(254U);
    msg.setDestination(19568U);
    msg.setDestinationEntity(144U);
    const signed char tmp_msg_0[] = {48, 20, 40, 13, -53, -10, -128, 101, -41, 63, 90, 56, 41, 22, 45, -105, 122, 34, -84, 84, -105, -113, -109, 96, 37, 28, -105, 34, 8, 74, -13, 76, -7, 5, 99, 113, 25, -42, -42, 57, 7, 23, 68, -57, -69, -100, 98, 89, 121, -89, 51, 110, -43, 67, -14, -104, 36, 69, 76, -60, -62, 9, -37, -75, -89, 69, 24, -23, 49, -91, 16, 42, -117, -104, 50, -54, 78, 94, -113, 97, -35, 42, 126, -74, -23, -37, -126, 5, -99, -98, 30, -62, -103, -98, -34, -77, -122, -83, -108, -28, -89, -13, -123, -84, 103, 7, 89, -83, 27, 54, 8, -76, 80, -58, 111, 36, 124, 66, 35, -103, -9, 105, -128, 23, -86, 120, -92, -80, -31, 48, -51, -15, 11, 116, -65, 56, -48, 29, 62, 83, 109, 56, 101, 47, -99, -98, 78, 17, -40, 100, 2, -71, 27, 29, -18, 100, 52, -111, 28, 69, -92, -6, 61, 71, 83, -4, -28, 34, 102, 115, 51, -21, 103, -91, -33, 79, 58, 88, -71, -87, 99, 40, -48, -101, 51, 111, -128, 71, -12, 68, -35, -107, 13, -40, 29, -126, -108, 39};
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
    msg.setTimeStamp(0.11888961833510292);
    msg.setSource(1274U);
    msg.setSourceEntity(30U);
    msg.setDestination(58995U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6075397153020435;

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
    msg.setTimeStamp(0.8552296280818849);
    msg.setSource(48321U);
    msg.setSourceEntity(204U);
    msg.setDestination(38830U);
    msg.setDestinationEntity(158U);
    msg.value = 0.05105619052522281;

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
    msg.setTimeStamp(0.7564954827963588);
    msg.setSource(63211U);
    msg.setSourceEntity(67U);
    msg.setDestination(53552U);
    msg.setDestinationEntity(30U);
    msg.value = 0.649409470915874;

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
    msg.setTimeStamp(0.64250988349493);
    msg.setSource(50073U);
    msg.setSourceEntity(6U);
    msg.setDestination(27854U);
    msg.setDestinationEntity(239U);
    msg.type = 92U;
    msg.frequency = 2177802055U;
    msg.min_range = 63481U;
    msg.max_range = 35030U;
    msg.bits_per_point = 37U;
    msg.scale_factor = 0.6488683698532172;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9621813076964959;
    tmp_msg_0.beam_height = 0.4522384908525324;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {20, 13, 18, -102, -112, -20, -7, 64, -105, -50, 56, 114, -2, 48, 93, 76, -6, -50, -58, -126, 37, 119, -10, -28, 31, -19, -104, 54, 49, -122, -32, 100, 40, 116, 115, 21, 79, 62, -59, 69, 110, -60, -56, 81, -58, 105, -55, -125, 124, -98, -32, 43, -60, 4, -86, 108, -124, -28, 74, 97, 123, 39, -127, -23, -111, 114, 120, 27, -46, 64, 49, -101, 2, -79, 58, -71, 118, -90, 116, -14, -111, 53, -16, -102, 60, 20, -75, 100, -21, -110, -60, 97, 14, -117, -16, -86, 77, 110, -116, -99, -20, 59, -98, 72, -31, 75, 12, -30, -72, -71, -74, -39, -78, -102, -52, 95, -65, -22, -36, 34, -56, -68, 113, 92, -102, 83, 17, 5, -20, -38, 114, -32, -46, -101, -65, -30, 115, 102, 50, -4, -55, -123, -126, 98, -109, -33, -94, 74, -42, -45, -119, 32, 42, -80, 109, 52, -20, -124, -59, 74, -59, -120, 38, 11, -36, 113, 86, 45, 90, -115, 14, 98, 39, 24, -49, -113, -38, 18, 15, -122, -18, -95, 38, -92, -25, 33, 120, -69, -75, 2, 83, -31, 46, -1, -2, 96, 82, 101, 101, 99, 74, 57, -32, -32, 85, 59, 39, 41, -18, -120, -60, -62, 54, -10, -59, -28, 56, -41, -123, -24, 44, -45, 102, 67, 52, 110, 122, 11, 124, -32, 27, 108, 29, 71, -20, -8, 80, 83, 119, 22, -51, 94, 97, -45, 26, 38, -46, 104};
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
    msg.setTimeStamp(0.5252221387997014);
    msg.setSource(43820U);
    msg.setSourceEntity(83U);
    msg.setDestination(14294U);
    msg.setDestinationEntity(26U);
    msg.type = 74U;
    msg.frequency = 4115620482U;
    msg.min_range = 34462U;
    msg.max_range = 53524U;
    msg.bits_per_point = 102U;
    msg.scale_factor = 0.8951064132477734;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.818622640295512;
    tmp_msg_0.beam_height = 0.3734566728960421;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-23, 62, 26, -126, 51, 15, -60, 106, 12, -35, 47, 39, -91, 37, 55, -11, -72, 36, -27, -118, 59, -78, -22, -91, -87, -109, 69, -66, -71, -81, -126, 48, -31, 25, 33, -123, 65, -38, 1, 111, 53, 59, -40, 109, -2, 20, -68, 106, -65, 39, -28, 52, -96, -68, 47, -33, -91, -6, 81, -111, 104, 114, -114, -14, -117, -83, -33, -115, -30, 45, -34, -110, 25, 11, -47, -117, -36, -99, -99, 63, 27, 37, -124, 71, 99, -36, 52, 63, -111, 87, 64, -30, -14, -128, 30, 17, 30, 97, -90, -65, -71, 89, 76, 83, -60, 26, -44, 70, -29, -8, 59, 66, 37, 27, -73, 51, 4, -14, -70, 31, 56, 119, 49, -74, 102, -9, 123, -35, 105, -126, -68, -91, 50, -76};
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
    msg.setTimeStamp(0.47568470253956874);
    msg.setSource(45868U);
    msg.setSourceEntity(190U);
    msg.setDestination(7903U);
    msg.setDestinationEntity(162U);
    msg.type = 158U;
    msg.frequency = 1565860817U;
    msg.min_range = 59602U;
    msg.max_range = 35139U;
    msg.bits_per_point = 70U;
    msg.scale_factor = 0.2601731484198987;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9353173690168058;
    tmp_msg_0.beam_height = 0.6510684385823791;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {75, 29, -126, 2, 97, 92, -106, -28, -47, 104, 64, -64, 46, 76, 8, 46, 19, 2, 54, 16, 120, -123, -47, -54, -106, 81, 114, -16, 27, 84};
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
    msg.setTimeStamp(0.11045131992774149);
    msg.setSource(63770U);
    msg.setSourceEntity(69U);
    msg.setDestination(13226U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.17071941858709438);
    msg.setSource(56132U);
    msg.setSourceEntity(124U);
    msg.setDestination(17666U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.025550201800035865);
    msg.setSource(6715U);
    msg.setSourceEntity(178U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.1927411727538635);
    msg.setSource(17609U);
    msg.setSourceEntity(215U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(14U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.80460675928295);
    msg.setSource(38050U);
    msg.setSourceEntity(105U);
    msg.setDestination(41482U);
    msg.setDestinationEntity(201U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.3567937051657978);
    msg.setSource(52235U);
    msg.setSourceEntity(196U);
    msg.setDestination(15044U);
    msg.setDestinationEntity(173U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.9764570991307568);
    msg.setSource(15007U);
    msg.setSourceEntity(109U);
    msg.setDestination(10267U);
    msg.setDestinationEntity(28U);
    msg.value = 0.20377115571010962;
    msg.confidence = 0.3049403650244341;
    msg.opmodes.assign("EPJLXSJXWWUYWAGNUYAAFVPJAIMNOYKZLUCECHDXXDLCXTRFGRSPVLNDHHVNPXJBLEGUDTHSRAJVPMJTCTLYFFGSHFOIZVOBFKRGYDKOWNPMEEQZ");

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
    msg.setTimeStamp(0.35135513506682925);
    msg.setSource(11019U);
    msg.setSourceEntity(238U);
    msg.setDestination(33725U);
    msg.setDestinationEntity(36U);
    msg.value = 0.6790790354790972;
    msg.confidence = 0.0032298316228392965;
    msg.opmodes.assign("YBRCOGEPGGLTIKXIRVKTDANETPAJRECETANJHTOHAWBZEDNGTECXJLWSIQFYXQGXRYMWJBPVYFOVTHOFMNLFIBBBVSLQIYILPDUMAZVZHAOJQLMJDQTUOVGBSVIEBDGPEJQSGRJCXFRKONFMKXXLWNDLCWFSDVURHZHQCQCKYXBIDQNWKZJEBAYLHHPMOAZJSUFYGEUMMSUNMLARPNCTRVTHUSWKQZFKPMWNYCXUDDUCKZ");

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
    msg.setTimeStamp(0.05248531684670488);
    msg.setSource(29234U);
    msg.setSourceEntity(88U);
    msg.setDestination(11839U);
    msg.setDestinationEntity(126U);
    msg.value = 0.8986583900008259;
    msg.confidence = 0.38669999621696693;
    msg.opmodes.assign("SWLTLCPEGLENPTKDUZWVHIUBBCHFUSOORTDAEUYUZVXKQEI");

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
    msg.setTimeStamp(0.6352623778990584);
    msg.setSource(62491U);
    msg.setSourceEntity(94U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(150U);
    msg.itow = 2734037321U;
    msg.lat = 0.5149846015896282;
    msg.lon = 0.6917549549580068;
    msg.height_ell = 0.7994697482460279;
    msg.height_sea = 0.8416277992725206;
    msg.hacc = 0.08629405848856686;
    msg.vacc = 0.7716009202079345;
    msg.vel_n = 0.8677489554001862;
    msg.vel_e = 0.5821996084790471;
    msg.vel_d = 0.04457415806540377;
    msg.speed = 0.4453150596554811;
    msg.gspeed = 0.41528586445199056;
    msg.heading = 0.581758513777272;
    msg.sacc = 0.08343340328959425;
    msg.cacc = 0.6558315017309624;

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
    msg.setTimeStamp(0.29072992029684463);
    msg.setSource(8216U);
    msg.setSourceEntity(185U);
    msg.setDestination(22680U);
    msg.setDestinationEntity(132U);
    msg.itow = 4244538399U;
    msg.lat = 0.6669492178634233;
    msg.lon = 0.36819176788015673;
    msg.height_ell = 0.6997814059347675;
    msg.height_sea = 0.8513404579408339;
    msg.hacc = 0.20437405030227818;
    msg.vacc = 0.1169439471201047;
    msg.vel_n = 0.4100521482156192;
    msg.vel_e = 0.86400629871236;
    msg.vel_d = 0.9332255884367419;
    msg.speed = 0.9498520644823869;
    msg.gspeed = 0.8971863140050931;
    msg.heading = 0.6132679826519306;
    msg.sacc = 0.46116979866106245;
    msg.cacc = 0.3612523144129435;

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
    msg.setTimeStamp(0.6882323107358284);
    msg.setSource(62295U);
    msg.setSourceEntity(58U);
    msg.setDestination(44934U);
    msg.setDestinationEntity(75U);
    msg.itow = 1147952229U;
    msg.lat = 0.21543831341476316;
    msg.lon = 0.06812566506817364;
    msg.height_ell = 0.12932777347827473;
    msg.height_sea = 0.07393797582942208;
    msg.hacc = 0.4507153470494263;
    msg.vacc = 0.5853528967114571;
    msg.vel_n = 0.788368198117855;
    msg.vel_e = 0.3391177320455425;
    msg.vel_d = 0.5204188188065556;
    msg.speed = 0.5954030584319852;
    msg.gspeed = 0.0837027772222525;
    msg.heading = 0.9186684342737793;
    msg.sacc = 0.316039497881466;
    msg.cacc = 0.06556316165175835;

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
    msg.setTimeStamp(0.6635974856853334);
    msg.setSource(60456U);
    msg.setSourceEntity(71U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(146U);
    msg.id = 50U;
    msg.value = 0.505294894130984;

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
    msg.setTimeStamp(0.8581647462141934);
    msg.setSource(3779U);
    msg.setSourceEntity(67U);
    msg.setDestination(23224U);
    msg.setDestinationEntity(72U);
    msg.id = 186U;
    msg.value = 0.18421055229764405;

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
    msg.setTimeStamp(0.5811957167417757);
    msg.setSource(4841U);
    msg.setSourceEntity(177U);
    msg.setDestination(48406U);
    msg.setDestinationEntity(169U);
    msg.id = 229U;
    msg.value = 0.9058711506695933;

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
    msg.setTimeStamp(0.26196882036984703);
    msg.setSource(28565U);
    msg.setSourceEntity(44U);
    msg.setDestination(58706U);
    msg.setDestinationEntity(207U);
    msg.x = 0.5329287533947675;
    msg.y = 0.2671525723656697;
    msg.z = 0.1757344310063148;
    msg.phi = 0.9067537961957133;
    msg.theta = 0.44418153732918386;
    msg.psi = 0.18894006303067168;

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
    msg.setTimeStamp(0.7391696405286011);
    msg.setSource(36398U);
    msg.setSourceEntity(106U);
    msg.setDestination(47328U);
    msg.setDestinationEntity(30U);
    msg.x = 0.14673501126064203;
    msg.y = 0.7534452001878699;
    msg.z = 0.1470980226773051;
    msg.phi = 0.9938156008766197;
    msg.theta = 0.2674657543296285;
    msg.psi = 0.10851938511456938;

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
    msg.setTimeStamp(0.26366995277261773);
    msg.setSource(31281U);
    msg.setSourceEntity(200U);
    msg.setDestination(55190U);
    msg.setDestinationEntity(57U);
    msg.x = 0.9814302215864685;
    msg.y = 0.35156991853626907;
    msg.z = 0.40498967476172476;
    msg.phi = 0.4284168061706273;
    msg.theta = 0.20188001619223994;
    msg.psi = 0.3274795799830237;

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
    msg.setTimeStamp(0.9929648808845534);
    msg.setSource(55243U);
    msg.setSourceEntity(212U);
    msg.setDestination(22490U);
    msg.setDestinationEntity(194U);
    msg.beam_width = 0.5259952626509027;
    msg.beam_height = 0.18689631830077658;

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
    msg.setTimeStamp(0.054207096060929105);
    msg.setSource(40435U);
    msg.setSourceEntity(40U);
    msg.setDestination(23184U);
    msg.setDestinationEntity(211U);
    msg.beam_width = 0.3445337038568589;
    msg.beam_height = 0.37050700263012093;

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
    msg.setTimeStamp(0.9949540821572718);
    msg.setSource(22793U);
    msg.setSourceEntity(174U);
    msg.setDestination(11827U);
    msg.setDestinationEntity(231U);
    msg.beam_width = 0.04650033911176976;
    msg.beam_height = 0.45463336014819533;

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
    msg.setTimeStamp(0.6574803553983455);
    msg.setSource(53014U);
    msg.setSourceEntity(146U);
    msg.setDestination(7981U);
    msg.setDestinationEntity(142U);
    msg.sane = 231U;

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
    msg.setTimeStamp(0.9295858728482911);
    msg.setSource(20075U);
    msg.setSourceEntity(226U);
    msg.setDestination(5282U);
    msg.setDestinationEntity(153U);
    msg.sane = 33U;

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
    msg.setTimeStamp(0.8940071889913659);
    msg.setSource(54674U);
    msg.setSourceEntity(245U);
    msg.setDestination(47560U);
    msg.setDestinationEntity(124U);
    msg.sane = 110U;

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
    msg.setTimeStamp(0.40061410110039264);
    msg.setSource(28183U);
    msg.setSourceEntity(74U);
    msg.setDestination(35029U);
    msg.setDestinationEntity(167U);
    msg.value = 0.34382994691519475;

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
    msg.setTimeStamp(0.536758146333894);
    msg.setSource(2875U);
    msg.setSourceEntity(79U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(147U);
    msg.value = 0.16112409861459187;

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
    msg.setTimeStamp(0.2504908980176431);
    msg.setSource(30489U);
    msg.setSourceEntity(137U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7644630879780122;

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
    msg.setTimeStamp(0.25096054870304285);
    msg.setSource(31543U);
    msg.setSourceEntity(103U);
    msg.setDestination(7550U);
    msg.setDestinationEntity(247U);
    msg.value = 0.4966484834399345;

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
    msg.setTimeStamp(0.8210789011489243);
    msg.setSource(59982U);
    msg.setSourceEntity(237U);
    msg.setDestination(18013U);
    msg.setDestinationEntity(143U);
    msg.value = 0.10743916775036866;

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
    msg.setTimeStamp(0.6310856170898206);
    msg.setSource(53536U);
    msg.setSourceEntity(101U);
    msg.setDestination(26603U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6372309032964384;

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
    msg.setTimeStamp(0.5697557201538243);
    msg.setSource(35580U);
    msg.setSourceEntity(113U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(240U);
    msg.value = 0.13344360232811536;

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
    msg.setTimeStamp(0.5215881252079196);
    msg.setSource(25109U);
    msg.setSourceEntity(78U);
    msg.setDestination(33918U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8044841218611911;

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
    msg.setTimeStamp(0.02374571290787697);
    msg.setSource(42391U);
    msg.setSourceEntity(220U);
    msg.setDestination(38220U);
    msg.setDestinationEntity(189U);
    msg.value = 0.9681068983730239;

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
    msg.setTimeStamp(0.19979809619616085);
    msg.setSource(53496U);
    msg.setSourceEntity(74U);
    msg.setDestination(60247U);
    msg.setDestinationEntity(200U);
    msg.value = 0.5602007547013362;

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
    msg.setTimeStamp(0.9421889079845966);
    msg.setSource(33285U);
    msg.setSourceEntity(220U);
    msg.setDestination(57457U);
    msg.setDestinationEntity(207U);
    msg.value = 0.2971717125211837;

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
    msg.setTimeStamp(0.47074133985684863);
    msg.setSource(7079U);
    msg.setSourceEntity(151U);
    msg.setDestination(4718U);
    msg.setDestinationEntity(178U);
    msg.value = 0.5046138724511229;

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
    msg.setTimeStamp(0.06390141592002363);
    msg.setSource(38889U);
    msg.setSourceEntity(108U);
    msg.setDestination(38896U);
    msg.setDestinationEntity(224U);
    msg.value = 0.09440937160301976;

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
    msg.setTimeStamp(0.9709951225931521);
    msg.setSource(7005U);
    msg.setSourceEntity(156U);
    msg.setDestination(59334U);
    msg.setDestinationEntity(7U);
    msg.value = 0.055552801494448745;

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
    msg.setTimeStamp(0.9030077003192267);
    msg.setSource(32789U);
    msg.setSourceEntity(61U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(136U);
    msg.value = 0.21991422018577156;

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
    msg.setTimeStamp(0.08842826911484247);
    msg.setSource(28455U);
    msg.setSourceEntity(96U);
    msg.setDestination(9636U);
    msg.setDestinationEntity(80U);
    msg.value = 0.609355422301254;

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
    msg.setTimeStamp(0.1856733498727774);
    msg.setSource(61926U);
    msg.setSourceEntity(62U);
    msg.setDestination(57127U);
    msg.setDestinationEntity(248U);
    msg.value = 0.4570133760648717;

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
    msg.setTimeStamp(0.39279813547882614);
    msg.setSource(9990U);
    msg.setSourceEntity(160U);
    msg.setDestination(47162U);
    msg.setDestinationEntity(120U);
    msg.value = 0.9691994379046165;

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
    msg.setTimeStamp(0.4789266922971491);
    msg.setSource(29757U);
    msg.setSourceEntity(140U);
    msg.setDestination(11181U);
    msg.setDestinationEntity(115U);
    msg.value = 0.9519426011746664;

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
    msg.setTimeStamp(0.6890997824323045);
    msg.setSource(48403U);
    msg.setSourceEntity(241U);
    msg.setDestination(32090U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0042433510086004045;

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
    msg.setTimeStamp(0.9691769762044596);
    msg.setSource(39474U);
    msg.setSourceEntity(148U);
    msg.setDestination(45942U);
    msg.setDestinationEntity(101U);
    msg.value = 0.32585597557119406;

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
    msg.setTimeStamp(0.18473165193846008);
    msg.setSource(49440U);
    msg.setSourceEntity(211U);
    msg.setDestination(53845U);
    msg.setDestinationEntity(124U);
    msg.value = 0.07105183358243983;

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
    msg.setTimeStamp(0.08457622219722849);
    msg.setSource(32324U);
    msg.setSourceEntity(225U);
    msg.setDestination(54401U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7972754002731083;

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
    msg.setTimeStamp(0.6853464339430412);
    msg.setSource(5273U);
    msg.setSourceEntity(73U);
    msg.setDestination(23081U);
    msg.setDestinationEntity(170U);
    msg.value = 0.5479335562338212;

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
    msg.setTimeStamp(0.3006079105346995);
    msg.setSource(3632U);
    msg.setSourceEntity(92U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(141U);
    msg.validity = 11901U;
    msg.type = 252U;
    msg.tow = 3933159379U;
    msg.base_lat = 0.6512385486241635;
    msg.base_lon = 0.8861407838462643;
    msg.base_height = 0.1549028185651259;
    msg.n = 0.7462662689673049;
    msg.e = 0.9750603463019787;
    msg.d = 0.8895373936500827;
    msg.v_n = 0.19298683258486404;
    msg.v_e = 0.8975836149532407;
    msg.v_d = 0.40357424256943764;
    msg.satellites = 26U;
    msg.iar_hyp = 57140U;
    msg.iar_ratio = 0.8643698300110548;

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
    msg.setTimeStamp(0.42253821481949827);
    msg.setSource(52462U);
    msg.setSourceEntity(242U);
    msg.setDestination(21540U);
    msg.setDestinationEntity(2U);
    msg.validity = 36060U;
    msg.type = 107U;
    msg.tow = 1735251256U;
    msg.base_lat = 0.5656399727114346;
    msg.base_lon = 0.5603892130872783;
    msg.base_height = 0.9427923665194535;
    msg.n = 0.21932801787361;
    msg.e = 0.9807216044336794;
    msg.d = 0.2668512396160342;
    msg.v_n = 0.8029647051675133;
    msg.v_e = 0.41324630686159336;
    msg.v_d = 0.266833138540873;
    msg.satellites = 99U;
    msg.iar_hyp = 40934U;
    msg.iar_ratio = 0.22499005864362576;

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
    msg.setTimeStamp(0.6478617656201855);
    msg.setSource(17780U);
    msg.setSourceEntity(237U);
    msg.setDestination(10220U);
    msg.setDestinationEntity(164U);
    msg.validity = 12465U;
    msg.type = 243U;
    msg.tow = 1776381307U;
    msg.base_lat = 0.6301201134677862;
    msg.base_lon = 0.2845477124582596;
    msg.base_height = 0.7825183654975163;
    msg.n = 0.13176295885542189;
    msg.e = 0.9807103195417612;
    msg.d = 0.07112716863167268;
    msg.v_n = 0.1261574839373797;
    msg.v_e = 0.9389036020675374;
    msg.v_d = 0.25824451080470856;
    msg.satellites = 89U;
    msg.iar_hyp = 6616U;
    msg.iar_ratio = 0.2687466418184452;

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
    msg.setTimeStamp(0.986392561667586);
    msg.setSource(54732U);
    msg.setSourceEntity(157U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(209U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5458812977203624;
    tmp_msg_0.lon = 0.4231751535880961;
    tmp_msg_0.height = 0.4856041359795171;
    tmp_msg_0.x = 0.8752791261360977;
    tmp_msg_0.y = 0.5875476240759133;
    tmp_msg_0.z = 0.8171284463315356;
    tmp_msg_0.phi = 0.07848824615694905;
    tmp_msg_0.theta = 0.862649742458704;
    tmp_msg_0.psi = 0.27037349081329476;
    tmp_msg_0.u = 0.06341679244386933;
    tmp_msg_0.v = 0.5073958647803105;
    tmp_msg_0.w = 0.30821650999742456;
    tmp_msg_0.vx = 0.43716684006726547;
    tmp_msg_0.vy = 0.5969732799384337;
    tmp_msg_0.vz = 0.924385000785515;
    tmp_msg_0.p = 0.13405437299186973;
    tmp_msg_0.q = 0.8601025965529924;
    tmp_msg_0.r = 0.11029214023266576;
    tmp_msg_0.depth = 0.5459011373174831;
    tmp_msg_0.alt = 0.6677190737773127;
    msg.state.set(tmp_msg_0);
    msg.type = 63U;

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
    msg.setTimeStamp(0.8239909307419625);
    msg.setSource(58918U);
    msg.setSourceEntity(219U);
    msg.setDestination(14809U);
    msg.setDestinationEntity(104U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.06621775589509271;
    tmp_msg_0.lon = 0.13847476478352128;
    tmp_msg_0.height = 0.425570643889819;
    tmp_msg_0.x = 0.6026093154368567;
    tmp_msg_0.y = 0.840213680989007;
    tmp_msg_0.z = 0.1771044108780624;
    tmp_msg_0.phi = 0.27259853403451295;
    tmp_msg_0.theta = 0.42328677761734634;
    tmp_msg_0.psi = 0.36154651708566365;
    tmp_msg_0.u = 0.4166414395328858;
    tmp_msg_0.v = 0.1814022969419261;
    tmp_msg_0.w = 0.3078723915149467;
    tmp_msg_0.vx = 0.08948023585371445;
    tmp_msg_0.vy = 0.09574800153388141;
    tmp_msg_0.vz = 0.6254826027768725;
    tmp_msg_0.p = 0.27300084683177017;
    tmp_msg_0.q = 0.08170299695626382;
    tmp_msg_0.r = 0.141858610867152;
    tmp_msg_0.depth = 0.0037675499470025686;
    tmp_msg_0.alt = 0.47915750834198156;
    msg.state.set(tmp_msg_0);
    msg.type = 227U;

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
    msg.setTimeStamp(0.981668457821944);
    msg.setSource(30651U);
    msg.setSourceEntity(70U);
    msg.setDestination(26388U);
    msg.setDestinationEntity(98U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5965235941814396;
    tmp_msg_0.lon = 0.8413884701693537;
    tmp_msg_0.height = 0.529652581134893;
    tmp_msg_0.x = 0.30984397688864673;
    tmp_msg_0.y = 0.2723913130667067;
    tmp_msg_0.z = 0.9265873245478411;
    tmp_msg_0.phi = 0.5484620409928287;
    tmp_msg_0.theta = 0.26932416511290613;
    tmp_msg_0.psi = 0.9505924066894776;
    tmp_msg_0.u = 0.013220112852942001;
    tmp_msg_0.v = 0.2726014791979945;
    tmp_msg_0.w = 0.3671620469445185;
    tmp_msg_0.vx = 0.3104039643082783;
    tmp_msg_0.vy = 0.4994161063443715;
    tmp_msg_0.vz = 0.6083661772617374;
    tmp_msg_0.p = 0.6727577118960436;
    tmp_msg_0.q = 0.16450014729797124;
    tmp_msg_0.r = 0.11029000956341883;
    tmp_msg_0.depth = 0.12449456328454789;
    tmp_msg_0.alt = 0.5107623530869285;
    msg.state.set(tmp_msg_0);
    msg.type = 166U;

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
    msg.setTimeStamp(0.035726008872114745);
    msg.setSource(40724U);
    msg.setSourceEntity(6U);
    msg.setDestination(11116U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9065079732937826;

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
    msg.setTimeStamp(0.38436235458440204);
    msg.setSource(36554U);
    msg.setSourceEntity(216U);
    msg.setDestination(12307U);
    msg.setDestinationEntity(66U);
    msg.value = 0.19609767467173633;

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
    msg.setTimeStamp(0.306287261763476);
    msg.setSource(30375U);
    msg.setSourceEntity(191U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(160U);
    msg.value = 0.20298239551812602;

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
    msg.setTimeStamp(0.06449632181306775);
    msg.setSource(8542U);
    msg.setSourceEntity(89U);
    msg.setDestination(29237U);
    msg.setDestinationEntity(65U);
    msg.value = 0.360002442743833;

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
    msg.setTimeStamp(0.18381740352115827);
    msg.setSource(34588U);
    msg.setSourceEntity(132U);
    msg.setDestination(58583U);
    msg.setDestinationEntity(64U);
    msg.value = 0.3579436323733576;

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
    msg.setTimeStamp(0.8339075361452198);
    msg.setSource(42029U);
    msg.setSourceEntity(236U);
    msg.setDestination(8402U);
    msg.setDestinationEntity(152U);
    msg.value = 0.855048561698143;

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
    msg.setTimeStamp(0.6892286480091349);
    msg.setSource(4233U);
    msg.setSourceEntity(238U);
    msg.setDestination(14919U);
    msg.setDestinationEntity(103U);
    msg.value = 0.05589348702224195;

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
    msg.setTimeStamp(0.28239981973967043);
    msg.setSource(5355U);
    msg.setSourceEntity(184U);
    msg.setDestination(3710U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5151480800538265;

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
    msg.setTimeStamp(0.31999299397297565);
    msg.setSource(8868U);
    msg.setSourceEntity(218U);
    msg.setDestination(33316U);
    msg.setDestinationEntity(51U);
    msg.value = 0.2541515537744842;

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
    msg.setTimeStamp(0.17736751014284868);
    msg.setSource(31888U);
    msg.setSourceEntity(169U);
    msg.setDestination(45524U);
    msg.setDestinationEntity(241U);
    msg.value = 0.1551872152881727;

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
    msg.setTimeStamp(0.49133550040593754);
    msg.setSource(43186U);
    msg.setSourceEntity(180U);
    msg.setDestination(22456U);
    msg.setDestinationEntity(94U);
    msg.value = 0.22539188332702953;

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
    msg.setTimeStamp(0.2821690522730108);
    msg.setSource(28494U);
    msg.setSourceEntity(101U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(234U);
    msg.value = 0.8992663029840231;

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
    msg.setTimeStamp(0.19217535014503806);
    msg.setSource(40233U);
    msg.setSourceEntity(125U);
    msg.setDestination(42170U);
    msg.setDestinationEntity(73U);
    msg.value = 0.6020432326018211;

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
    msg.setTimeStamp(0.490340456389353);
    msg.setSource(37471U);
    msg.setSourceEntity(123U);
    msg.setDestination(30340U);
    msg.setDestinationEntity(182U);
    msg.value = 0.22744632487026684;

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
    msg.setTimeStamp(0.5067151837224262);
    msg.setSource(10441U);
    msg.setSourceEntity(237U);
    msg.setDestination(12145U);
    msg.setDestinationEntity(218U);
    msg.value = 0.40841328305233204;

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
    msg.setTimeStamp(0.30281575877773836);
    msg.setSource(627U);
    msg.setSourceEntity(122U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(168U);
    msg.id = 111U;
    msg.zoom = 82U;
    msg.action = 253U;

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
    msg.setTimeStamp(0.6288102906399795);
    msg.setSource(30150U);
    msg.setSourceEntity(97U);
    msg.setDestination(32812U);
    msg.setDestinationEntity(134U);
    msg.id = 15U;
    msg.zoom = 129U;
    msg.action = 202U;

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
    msg.setTimeStamp(0.9555654560054322);
    msg.setSource(4519U);
    msg.setSourceEntity(186U);
    msg.setDestination(50042U);
    msg.setDestinationEntity(160U);
    msg.id = 173U;
    msg.zoom = 196U;
    msg.action = 52U;

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
    msg.setTimeStamp(0.3399117727424277);
    msg.setSource(710U);
    msg.setSourceEntity(136U);
    msg.setDestination(44825U);
    msg.setDestinationEntity(189U);
    msg.id = 252U;
    msg.value = 0.5734086174902514;

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
    msg.setTimeStamp(0.18194114740243694);
    msg.setSource(3812U);
    msg.setSourceEntity(149U);
    msg.setDestination(63818U);
    msg.setDestinationEntity(23U);
    msg.id = 219U;
    msg.value = 0.8526918877270341;

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
    msg.setTimeStamp(0.4514742293393932);
    msg.setSource(63031U);
    msg.setSourceEntity(34U);
    msg.setDestination(65107U);
    msg.setDestinationEntity(54U);
    msg.id = 49U;
    msg.value = 0.43711175700388094;

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
    msg.setTimeStamp(0.35037463262097945);
    msg.setSource(17009U);
    msg.setSourceEntity(27U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(55U);
    msg.id = 137U;
    msg.value = 0.39616981940440066;

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
    msg.setTimeStamp(0.7781333118069962);
    msg.setSource(17183U);
    msg.setSourceEntity(111U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(130U);
    msg.id = 185U;
    msg.value = 0.0166254750205308;

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
    msg.setTimeStamp(0.32830017684842716);
    msg.setSource(7948U);
    msg.setSourceEntity(205U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(197U);
    msg.id = 252U;
    msg.value = 0.6087546951892646;

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
    msg.setTimeStamp(0.1832339579122072);
    msg.setSource(24141U);
    msg.setSourceEntity(251U);
    msg.setDestination(51082U);
    msg.setDestinationEntity(64U);
    msg.id = 189U;
    msg.angle = 0.5541536838142723;

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
    msg.setTimeStamp(0.2987190196889107);
    msg.setSource(56839U);
    msg.setSourceEntity(238U);
    msg.setDestination(53088U);
    msg.setDestinationEntity(39U);
    msg.id = 135U;
    msg.angle = 0.7747934964693267;

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
    msg.setTimeStamp(0.9316685787708554);
    msg.setSource(46045U);
    msg.setSourceEntity(211U);
    msg.setDestination(31757U);
    msg.setDestinationEntity(120U);
    msg.id = 229U;
    msg.angle = 0.18987076052541585;

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
    msg.setTimeStamp(0.4420064971451776);
    msg.setSource(25593U);
    msg.setSourceEntity(27U);
    msg.setDestination(1717U);
    msg.setDestinationEntity(34U);
    msg.op = 239U;
    msg.actions.assign("BAXLKPPSMBGYPOCTLYHPCCYIGTWBENCGUDHNYSRRMMIQATZOTBQTMGVIFTAQIQXNJZCWDUDASDCTLMIFEEEZWPKTZBHUFYLCUFGGVZJYJIHDMWOWZPKAXNASHYQBHUOOJAVNFAQZXXLESTKNIVBESRQGHXXRSBKZPVOJRLFERKCVLHMQWDALVHIGGWVIBGJWXFFUBJNJNKOHROVLJOPRXWNU");

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
    msg.setTimeStamp(0.5460829654655204);
    msg.setSource(4839U);
    msg.setSourceEntity(69U);
    msg.setDestination(10099U);
    msg.setDestinationEntity(174U);
    msg.op = 199U;
    msg.actions.assign("MPZHIORFDNKVNXJOBUFKESRXKFYLYEICNVSSOXYYHWKDCRGQKLAZGECVDRONPAZPHGXTIMYSVAVZFBIEQMBXXSXYOFQWEBUMDQPCUQHBIONQVJLUKKKPIMNRDDTTGWBZPVOAWMBXCCFBYJQPSVGUTDLZWESMGMSZLWL");

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
    msg.setTimeStamp(0.8085214742202042);
    msg.setSource(47648U);
    msg.setSourceEntity(175U);
    msg.setDestination(41807U);
    msg.setDestinationEntity(64U);
    msg.op = 168U;
    msg.actions.assign("PSCEMBUQSEYWLYGXGGXOPPVVXBHIWIJFIMYRNYFOIADE");

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
    msg.setTimeStamp(0.04728535985296034);
    msg.setSource(32993U);
    msg.setSourceEntity(15U);
    msg.setDestination(35816U);
    msg.setDestinationEntity(184U);
    msg.actions.assign("BTROBMLKILLCSQLLDBRRDPANFNWZRICNZJYDCZSYYMVGADSIDYUVQGAEUJWJFOICQZIRFTUXZEHISPWCJPHHKAHXXZPDCHKJQYGOTYIKLTFVEPGBYLHPASLQOLWKNMXFUCSROEOHUKNVIWGWMBBRPMBMKFPDERQEOMDNAOYEXUSWDNGMSUAVNRZQQJJZETKCRXSOZTFMJUAGSTKJYAXHECBXIGYHFTOITBKNVW");

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
    msg.setTimeStamp(0.6483381515718256);
    msg.setSource(60559U);
    msg.setSourceEntity(144U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("WESXZXBGTRHIFYQJEATHPWJUTNIGCWLOXKOJIVSRBEVNSOIS");

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
    msg.setTimeStamp(0.5158359853433362);
    msg.setSource(34444U);
    msg.setSourceEntity(106U);
    msg.setDestination(42731U);
    msg.setDestinationEntity(45U);
    msg.actions.assign("JBOWRGOONXCADRBHINAYSMZ");

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
    msg.setTimeStamp(0.8586368809456772);
    msg.setSource(35579U);
    msg.setSourceEntity(227U);
    msg.setDestination(11167U);
    msg.setDestinationEntity(5U);
    msg.button = 223U;
    msg.value = 157U;

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
    msg.setTimeStamp(0.666340006016199);
    msg.setSource(14223U);
    msg.setSourceEntity(69U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(233U);
    msg.button = 146U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.9576536345175911);
    msg.setSource(55926U);
    msg.setSourceEntity(50U);
    msg.setDestination(6339U);
    msg.setDestinationEntity(27U);
    msg.button = 247U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.7471738260967672);
    msg.setSource(39969U);
    msg.setSourceEntity(98U);
    msg.setDestination(37892U);
    msg.setDestinationEntity(220U);
    msg.op = 231U;
    msg.text.assign("QUXLJTXKDELJKBKVOBNVIFTUCIXSIHDGQYERZAOBCHTQCEWSBMXPZGDLJWBJDYNCYJZPODLVKLBTXFMDEWAHOQRETCKKLFLFIADPFUSNQHKMXZNYCUVI");

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
    msg.setTimeStamp(0.7610749144471319);
    msg.setSource(30746U);
    msg.setSourceEntity(219U);
    msg.setDestination(59533U);
    msg.setDestinationEntity(188U);
    msg.op = 146U;
    msg.text.assign("VYEQPCUSRZOZNRPLODGAYBNJNBXXCIZAPUYQSOTHPZKOJUSDXNRTVIUGOPMOBHUNKVSXJHPKVKUFXRJEYLIAIYMBCMBETQWLTRQAEEDRKNWPIWXHGZTPAFMVMFDLNXVMFFKGHQDSGAGDIEOIFXSJKRXDOIYEUAJWKQYOLGHECQCFJFHZKJETVWKSUQMJHABIJDPGYTDL");

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
    msg.setTimeStamp(0.527229806194716);
    msg.setSource(27064U);
    msg.setSourceEntity(185U);
    msg.setDestination(6781U);
    msg.setDestinationEntity(236U);
    msg.op = 90U;
    msg.text.assign("OUTLYPMDKTRDICKXLMDOTQXJPABBSB");

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
    msg.setTimeStamp(0.8324739642857584);
    msg.setSource(25964U);
    msg.setSourceEntity(10U);
    msg.setDestination(37910U);
    msg.setDestinationEntity(114U);
    msg.op = 119U;
    msg.time_remain = 0.6909821225814987;
    msg.sched_time = 0.40190129003590036;

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
    msg.setTimeStamp(0.10686277491142482);
    msg.setSource(4173U);
    msg.setSourceEntity(15U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(195U);
    msg.op = 253U;
    msg.time_remain = 0.3824942186412539;
    msg.sched_time = 0.9538570921657461;

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
    msg.setTimeStamp(0.09863610834771197);
    msg.setSource(21760U);
    msg.setSourceEntity(183U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(28U);
    msg.op = 39U;
    msg.time_remain = 0.5906973437825667;
    msg.sched_time = 0.8326953026947046;

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
    msg.setTimeStamp(0.2047890328752353);
    msg.setSource(47170U);
    msg.setSourceEntity(190U);
    msg.setDestination(53385U);
    msg.setDestinationEntity(93U);
    msg.name.assign("YNEWPKOEHUBNAVPSAHATVHZBEQWZTXGVDGFMTSMTEQMHPUKKIKIYJQQFYRHQDJZFDXDBKBCSLQMV");
    msg.op = 132U;
    msg.sched_time = 0.5024646312054784;

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
    msg.setTimeStamp(0.8138687155606584);
    msg.setSource(64446U);
    msg.setSourceEntity(168U);
    msg.setDestination(56817U);
    msg.setDestinationEntity(51U);
    msg.name.assign("LQTZCABZNMWASGZTIIBKEBLXGDVORISSAOBOSBPADOWHTOIWJRMTTCPLJYEKZAVNDZQYWDHUQGJCUFTFBQOSQSAFCBFCGIVYFRP");
    msg.op = 245U;
    msg.sched_time = 0.4507290884574183;

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
    msg.setTimeStamp(0.6197305148921106);
    msg.setSource(31536U);
    msg.setSourceEntity(45U);
    msg.setDestination(26063U);
    msg.setDestinationEntity(51U);
    msg.name.assign("RQAPQFVNZOMVSUAGLWFGVQCJAAEYXJZYYNNJGHMXCMEYKETMPKOUWZIPZLKFLIWQBQFEKUYRTPTAFOYIUEQTTKSJAIEKVUX");
    msg.op = 10U;
    msg.sched_time = 0.7769080288204468;

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
    msg.setTimeStamp(0.7221089279010563);
    msg.setSource(12469U);
    msg.setSourceEntity(134U);
    msg.setDestination(18474U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.18215439380250564);
    msg.setSource(45120U);
    msg.setSourceEntity(128U);
    msg.setDestination(43756U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.5741420818482191);
    msg.setSource(37142U);
    msg.setSourceEntity(48U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.01188333249263962);
    msg.setSource(45187U);
    msg.setSourceEntity(158U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GPHGMTPEWIOHFYEQVZVKCDBPMNPVSIUBKHSMJAIHXMKUGYFNVGPLRMZWUPXTJOUUYZXWACEDIFNKUJSTHOLGQWWQXZAKFZAHYBNSZKCKFETGOSDTYXCAAUEIVPWFJRDIALVQBNUKXJJXSMNESYEQAVQZYVYMAKWMLDQPYRBXHDRTBBNHAICDWQJGR");
    msg.state = 92U;

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
    msg.setTimeStamp(0.4530702023080072);
    msg.setSource(50882U);
    msg.setSourceEntity(140U);
    msg.setDestination(44636U);
    msg.setDestinationEntity(116U);
    msg.name.assign("KFPSHCJNNUDVVLHLVJBVDYXMAOHYIWELGNPMDKDLZQEXPCREXAAUQKSZHKBKYGPVRFSEDBAPYQADKOTNUTTUWTPVLLAOBCYCIJFFNIMGDEMVWWFZQXUOAESDONXUEXMDYZRGHKEBLZWPGRSTJVMKW");
    msg.state = 127U;

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
    msg.setTimeStamp(0.6578892201402162);
    msg.setSource(16413U);
    msg.setSourceEntity(207U);
    msg.setDestination(52885U);
    msg.setDestinationEntity(252U);
    msg.name.assign("VQYIWHQADVXCJWTPIYNWOGRJMHUTQFLGDZVKNYFQDJEQJSCRSOOABKNMBZWEJACFVBJWUENBPSDQQKOREWYKURWSOZVOWRQQSPITCAAXYGFXMGDWOUALHEUKNVTLELMGEHENSPPXCRFMKPZSLHDDYVGHNHODRKUBBITRGOJRCLQMMYGYIIXXLB");
    msg.state = 206U;

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
    msg.setTimeStamp(0.6432263495539208);
    msg.setSource(58995U);
    msg.setSourceEntity(184U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(0U);
    msg.name.assign("AYRTYFLVCV");
    msg.value = 236U;

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
    msg.setTimeStamp(0.2779045129213872);
    msg.setSource(3865U);
    msg.setSourceEntity(228U);
    msg.setDestination(2138U);
    msg.setDestinationEntity(142U);
    msg.name.assign("DXOKBRCRBJHXSTRGGI");
    msg.value = 192U;

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
    msg.setTimeStamp(0.752562505295288);
    msg.setSource(748U);
    msg.setSourceEntity(251U);
    msg.setDestination(37700U);
    msg.setDestinationEntity(32U);
    msg.name.assign("DLXGAMXCFRYSWOTPEGHEIOLIYGMMWXBGTVXYRNZOFOSUAKDWAPLDXUPUYCUJ");
    msg.value = 249U;

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
    msg.setTimeStamp(0.3295437344013631);
    msg.setSource(14548U);
    msg.setSourceEntity(162U);
    msg.setDestination(11660U);
    msg.setDestinationEntity(207U);
    msg.name.assign("VVSHIDQJPFXXESJOPWFCCJBQTIBYSOIGZFQKJZWJQYZSNDQREPAVTUPGZZXENODIUULYIRSRE");

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
    msg.setTimeStamp(0.535062645405821);
    msg.setSource(41740U);
    msg.setSourceEntity(91U);
    msg.setDestination(17025U);
    msg.setDestinationEntity(155U);
    msg.name.assign("OULZAZPUIFWLSFSYCWKSCGQHLOIUNEYGYPYHKFCMPCHTSWGJOYGWHPPVLRRGELQOJV");

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
    msg.setTimeStamp(0.5210419226400563);
    msg.setSource(16678U);
    msg.setSourceEntity(85U);
    msg.setDestination(26408U);
    msg.setDestinationEntity(16U);
    msg.name.assign("XNEKYUBVDAMQVIUYGDMKSGCNASTOJIGMXQHCDSEZPPUPS");

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
    msg.setTimeStamp(0.002768462553636053);
    msg.setSource(26944U);
    msg.setSourceEntity(59U);
    msg.setDestination(58698U);
    msg.setDestinationEntity(211U);
    msg.name.assign("YHIROGYBOMEQICLZAUDTZLJTRHURGFOYTYCIDAQKNRWJMPIQJPQIZNMDVAMSCMGBJESBOTJVNXAKFOUKBRBVLJWECGXDQFNLULZXQLSOMMBDWGZNFVJJQGSWEMPEGPKLNIGWXRKBZUQLD");
    msg.value = 126U;

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
    msg.setTimeStamp(0.6346826535237141);
    msg.setSource(40358U);
    msg.setSourceEntity(172U);
    msg.setDestination(53219U);
    msg.setDestinationEntity(190U);
    msg.name.assign("ILKHNPMPAPXYMXJNMCTIGTXCHRLLKIMIJNKCAYSZMTCFHBVFLZFBEINMMWHOXVKWZRWOVUUPWEDMPSVISZRNPDYAFEQX");
    msg.value = 35U;

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
    msg.setTimeStamp(0.038421931463883174);
    msg.setSource(18585U);
    msg.setSourceEntity(209U);
    msg.setDestination(16222U);
    msg.setDestinationEntity(0U);
    msg.name.assign("XBIVSGCAEQXXUAFREYQLCHUPQPCUHNMDBXHJCKKDRDMRFPDXMVDNMFESUPWOASTENXWTVXJOQDFGHZHZGRWGVLJMRSNCZZAIGYGQSXOWBONQDNSPTYOFEZWXJWELG");
    msg.value = 124U;

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
    msg.setTimeStamp(0.05868577781079498);
    msg.setSource(39939U);
    msg.setSourceEntity(97U);
    msg.setDestination(39378U);
    msg.setDestinationEntity(196U);
    msg.id = 65U;
    msg.period = 1756792744U;
    msg.duty_cycle = 3481917132U;

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
    msg.setTimeStamp(0.28293825391140204);
    msg.setSource(36548U);
    msg.setSourceEntity(19U);
    msg.setDestination(14703U);
    msg.setDestinationEntity(250U);
    msg.id = 81U;
    msg.period = 1820777114U;
    msg.duty_cycle = 737189211U;

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
    msg.setTimeStamp(0.07289723334567222);
    msg.setSource(39371U);
    msg.setSourceEntity(175U);
    msg.setDestination(34736U);
    msg.setDestinationEntity(72U);
    msg.id = 91U;
    msg.period = 34972670U;
    msg.duty_cycle = 214476255U;

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
    msg.setTimeStamp(0.160782478943156);
    msg.setSource(27764U);
    msg.setSourceEntity(54U);
    msg.setDestination(19136U);
    msg.setDestinationEntity(146U);
    msg.id = 10U;
    msg.period = 2822918872U;
    msg.duty_cycle = 4062933796U;

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
    msg.setTimeStamp(0.24582935509771076);
    msg.setSource(9156U);
    msg.setSourceEntity(236U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(201U);
    msg.id = 2U;
    msg.period = 2023134701U;
    msg.duty_cycle = 716545441U;

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
    msg.setTimeStamp(0.6996200868438084);
    msg.setSource(62067U);
    msg.setSourceEntity(239U);
    msg.setDestination(7187U);
    msg.setDestinationEntity(39U);
    msg.id = 222U;
    msg.period = 1356641044U;
    msg.duty_cycle = 2969629492U;

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
    msg.setTimeStamp(0.11773188169174564);
    msg.setSource(46910U);
    msg.setSourceEntity(113U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.09558708626945167;
    msg.lon = 0.6127009926164206;
    msg.height = 0.5518255077978652;
    msg.x = 0.4892406686246805;
    msg.y = 0.4304457988510487;
    msg.z = 0.768343832410315;
    msg.phi = 0.34212758875479155;
    msg.theta = 0.9931685272164692;
    msg.psi = 0.7783986381107398;
    msg.u = 0.22124165212027758;
    msg.v = 0.5859368390985165;
    msg.w = 0.9725143344853894;
    msg.vx = 0.8268916143321664;
    msg.vy = 0.09308346677724999;
    msg.vz = 0.206688442759962;
    msg.p = 0.17033504748465655;
    msg.q = 0.5925126441998291;
    msg.r = 0.9415774537731644;
    msg.depth = 0.6521901477871619;
    msg.alt = 0.612455088689225;

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
    msg.setTimeStamp(0.7250660784100511);
    msg.setSource(14574U);
    msg.setSourceEntity(100U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.7338597801896892;
    msg.lon = 0.8187310087783215;
    msg.height = 0.08051233997677909;
    msg.x = 0.2687888281870461;
    msg.y = 0.8426429358672037;
    msg.z = 0.3148283520937002;
    msg.phi = 0.3596231702995887;
    msg.theta = 0.2985104325633665;
    msg.psi = 0.5213038324773148;
    msg.u = 0.40265202454748183;
    msg.v = 0.5852157670032869;
    msg.w = 0.6979796744699746;
    msg.vx = 0.8755249242593857;
    msg.vy = 0.4554018865431474;
    msg.vz = 0.4120992357060198;
    msg.p = 0.18007557677771446;
    msg.q = 0.34495978357123525;
    msg.r = 0.573808555712375;
    msg.depth = 0.2325377034120676;
    msg.alt = 0.5489218317120581;

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
    msg.setTimeStamp(0.5441577073886652);
    msg.setSource(62150U);
    msg.setSourceEntity(27U);
    msg.setDestination(3325U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.9416052240280441;
    msg.lon = 0.2516536174073253;
    msg.height = 0.5038068378254473;
    msg.x = 0.6097613072568482;
    msg.y = 0.976729976363029;
    msg.z = 0.7454620107270625;
    msg.phi = 0.9861555577196178;
    msg.theta = 0.7782902117172373;
    msg.psi = 0.8719103590432601;
    msg.u = 0.9949914029462122;
    msg.v = 0.9024626219700106;
    msg.w = 0.7749817203381205;
    msg.vx = 0.5812835038802415;
    msg.vy = 0.8730020179060496;
    msg.vz = 0.08756776922081422;
    msg.p = 0.6879998524125999;
    msg.q = 0.38571780168567693;
    msg.r = 0.4739148171625781;
    msg.depth = 0.5098766082250494;
    msg.alt = 0.6000839421424743;

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
    msg.setTimeStamp(0.41271972819957103);
    msg.setSource(23005U);
    msg.setSourceEntity(206U);
    msg.setDestination(31979U);
    msg.setDestinationEntity(137U);
    msg.x = 0.15479840733225225;
    msg.y = 0.3855347802679203;
    msg.z = 0.6226772743575394;

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
    msg.setTimeStamp(0.5787603700682632);
    msg.setSource(31629U);
    msg.setSourceEntity(173U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(176U);
    msg.x = 0.11824596413758393;
    msg.y = 0.20950725005613646;
    msg.z = 0.8938302007449035;

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
    msg.setTimeStamp(0.3235185226131413);
    msg.setSource(63601U);
    msg.setSourceEntity(79U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(96U);
    msg.x = 0.22504903803794118;
    msg.y = 0.7249468182126699;
    msg.z = 0.08737534280611314;

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
    msg.setTimeStamp(0.05968196082338961);
    msg.setSource(16505U);
    msg.setSourceEntity(140U);
    msg.setDestination(33547U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5227763704545776;

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
    msg.setTimeStamp(0.360040936940377);
    msg.setSource(59751U);
    msg.setSourceEntity(127U);
    msg.setDestination(22619U);
    msg.setDestinationEntity(242U);
    msg.value = 0.14488325470988517;

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
    msg.setTimeStamp(0.6906160227435639);
    msg.setSource(42897U);
    msg.setSourceEntity(2U);
    msg.setDestination(24343U);
    msg.setDestinationEntity(2U);
    msg.value = 0.4365784925752947;

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
    msg.setTimeStamp(0.11409941645691735);
    msg.setSource(34050U);
    msg.setSourceEntity(138U);
    msg.setDestination(64435U);
    msg.setDestinationEntity(242U);
    msg.value = 0.4712112877445951;

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
    msg.setTimeStamp(0.9505724167981564);
    msg.setSource(60648U);
    msg.setSourceEntity(33U);
    msg.setDestination(13335U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9075491242813427;

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
    msg.setTimeStamp(0.17806414911181534);
    msg.setSource(817U);
    msg.setSourceEntity(50U);
    msg.setDestination(39562U);
    msg.setDestinationEntity(173U);
    msg.value = 0.610875233267825;

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
    msg.setTimeStamp(0.1529469820554803);
    msg.setSource(49848U);
    msg.setSourceEntity(27U);
    msg.setDestination(54763U);
    msg.setDestinationEntity(76U);
    msg.x = 0.1447197877450449;
    msg.y = 0.12259270487266327;
    msg.z = 0.377119562652;
    msg.phi = 0.23837201929948848;
    msg.theta = 0.7290610679001553;
    msg.psi = 0.9812607556757608;
    msg.p = 0.9222672072296456;
    msg.q = 0.8197070558897717;
    msg.r = 0.9798909054561501;
    msg.u = 0.5130488050086115;
    msg.v = 0.4221450115674892;
    msg.w = 0.6401820703243357;
    msg.bias_psi = 0.13553033389314884;
    msg.bias_r = 0.7015732592602386;

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
    msg.setTimeStamp(0.08123018398557447);
    msg.setSource(19631U);
    msg.setSourceEntity(16U);
    msg.setDestination(13080U);
    msg.setDestinationEntity(42U);
    msg.x = 0.6529381981075183;
    msg.y = 0.2915811226273236;
    msg.z = 0.8629075064110014;
    msg.phi = 0.17689729415516442;
    msg.theta = 0.752615574691668;
    msg.psi = 0.4032460609026336;
    msg.p = 0.06813827838060837;
    msg.q = 0.40041671906482235;
    msg.r = 0.915964512887871;
    msg.u = 0.47050341531728535;
    msg.v = 0.8309047316657822;
    msg.w = 0.45813949946307375;
    msg.bias_psi = 0.9752661915531501;
    msg.bias_r = 0.36172364704164783;

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
    msg.setTimeStamp(0.646675108333075);
    msg.setSource(32714U);
    msg.setSourceEntity(142U);
    msg.setDestination(13002U);
    msg.setDestinationEntity(5U);
    msg.x = 0.24844111787504775;
    msg.y = 0.5328749520763116;
    msg.z = 0.7443245570345454;
    msg.phi = 0.527637451766007;
    msg.theta = 0.9989199839642299;
    msg.psi = 0.9003174560915861;
    msg.p = 0.2562504650006753;
    msg.q = 0.4844120551743638;
    msg.r = 0.02600770144788045;
    msg.u = 0.7285526483611643;
    msg.v = 0.9779163298651453;
    msg.w = 0.5714842896135648;
    msg.bias_psi = 0.29710399612067884;
    msg.bias_r = 0.3867324061333023;

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
    msg.setTimeStamp(0.16005490850264037);
    msg.setSource(49674U);
    msg.setSourceEntity(200U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.4116008650878663;
    msg.bias_r = 0.4314952539416045;
    msg.cog = 0.6173303405188526;
    msg.cyaw = 0.07976211661819421;
    msg.lbl_rej_level = 0.8498001832676042;
    msg.gps_rej_level = 0.4978656129553597;
    msg.custom_x = 0.8054986151174206;
    msg.custom_y = 0.9796300239981294;
    msg.custom_z = 0.24692898486077708;

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
    msg.setTimeStamp(0.9496886601966398);
    msg.setSource(16762U);
    msg.setSourceEntity(104U);
    msg.setDestination(64170U);
    msg.setDestinationEntity(105U);
    msg.bias_psi = 0.3941037413865377;
    msg.bias_r = 0.5020575381298644;
    msg.cog = 0.7894051808927601;
    msg.cyaw = 0.8308946971959597;
    msg.lbl_rej_level = 0.8378797409883756;
    msg.gps_rej_level = 0.5928262700123744;
    msg.custom_x = 0.6938226862968041;
    msg.custom_y = 0.10843108020502723;
    msg.custom_z = 0.06340776597596987;

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
    msg.setTimeStamp(0.8976265964612796);
    msg.setSource(33270U);
    msg.setSourceEntity(61U);
    msg.setDestination(8184U);
    msg.setDestinationEntity(111U);
    msg.bias_psi = 0.9776445819920111;
    msg.bias_r = 0.7167242036910216;
    msg.cog = 0.17895909600971527;
    msg.cyaw = 0.3760859928206689;
    msg.lbl_rej_level = 0.2636272758581236;
    msg.gps_rej_level = 0.14612323541084815;
    msg.custom_x = 0.4254104369837366;
    msg.custom_y = 0.646814849493459;
    msg.custom_z = 0.15109513930476104;

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
    msg.setTimeStamp(0.4605852789926488);
    msg.setSource(56665U);
    msg.setSourceEntity(4U);
    msg.setDestination(39707U);
    msg.setDestinationEntity(68U);
    msg.utc_time = 0.4852855700677836;
    msg.reason = 114U;

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
    msg.setTimeStamp(0.8337861901706684);
    msg.setSource(38959U);
    msg.setSourceEntity(15U);
    msg.setDestination(44847U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.6728437527386621;
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
    msg.setTimeStamp(0.8689479851782257);
    msg.setSource(4789U);
    msg.setSourceEntity(65U);
    msg.setDestination(1837U);
    msg.setDestinationEntity(231U);
    msg.utc_time = 0.5005013068975437;
    msg.reason = 83U;

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
    msg.setTimeStamp(0.3978001469760911);
    msg.setSource(31704U);
    msg.setSourceEntity(225U);
    msg.setDestination(3437U);
    msg.setDestinationEntity(98U);
    msg.id = 49U;
    msg.range = 0.3738860428662948;
    msg.acceptance = 170U;

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
    msg.setTimeStamp(0.17085823538151457);
    msg.setSource(44385U);
    msg.setSourceEntity(217U);
    msg.setDestination(953U);
    msg.setDestinationEntity(196U);
    msg.id = 236U;
    msg.range = 0.21027391567922127;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.010809627512046949);
    msg.setSource(64479U);
    msg.setSourceEntity(16U);
    msg.setDestination(36532U);
    msg.setDestinationEntity(242U);
    msg.id = 214U;
    msg.range = 0.2577932929213198;
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
    msg.setTimeStamp(0.68324247651778);
    msg.setSource(12309U);
    msg.setSourceEntity(219U);
    msg.setDestination(34713U);
    msg.setDestinationEntity(74U);
    msg.type = 59U;
    msg.reason = 160U;
    msg.value = 0.18245258712812318;
    msg.timestep = 0.5964874400820551;

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
    msg.setTimeStamp(0.1383054683861319);
    msg.setSource(1928U);
    msg.setSourceEntity(167U);
    msg.setDestination(37268U);
    msg.setDestinationEntity(3U);
    msg.type = 99U;
    msg.reason = 144U;
    msg.value = 0.14131217329299306;
    msg.timestep = 0.26701005624627905;

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
    msg.setTimeStamp(0.48425423324301287);
    msg.setSource(31103U);
    msg.setSourceEntity(9U);
    msg.setDestination(13346U);
    msg.setDestinationEntity(47U);
    msg.type = 58U;
    msg.reason = 46U;
    msg.value = 0.24351412719269994;
    msg.timestep = 0.13020674994117998;

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
    msg.setTimeStamp(0.41623726546127304);
    msg.setSource(48210U);
    msg.setSourceEntity(51U);
    msg.setDestination(23775U);
    msg.setDestinationEntity(86U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RPWMLIGYIMGKNNEJMHHZUTCDLZFEXACZDVGSILACASYJVRSODTSRBZRNVUJHERAXSXKBTUQVCHAGOJRXAOLVWWAVJFJBFDTYNCAKTRVGZYDNMPFNBPWWYDIMOGKLURLSTPMKISELZZSFEPBAUPKJMUQEZAXDFQQMZQTGDCQKNINOYGYTHLKKNSETLUXPBQVIBUWXIXCJBWLQCQPHFHJNSYRHIXHFFWZODHOIEEFWVXBTYWEQPUMCRYGPVMDOC");
    tmp_msg_0.lat = 0.4601791693124291;
    tmp_msg_0.lon = 0.4472104967412466;
    tmp_msg_0.depth = 0.28821486687437414;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 134U;
    tmp_msg_0.transponder_delay = 72U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7159892506601212;
    msg.y = 0.9689526023625136;
    msg.var_x = 0.0865212193290329;
    msg.var_y = 0.8845122229298336;
    msg.distance = 0.2285041276650145;

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
    msg.setTimeStamp(0.07611880146931616);
    msg.setSource(49227U);
    msg.setSourceEntity(131U);
    msg.setDestination(53407U);
    msg.setDestinationEntity(15U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MWBMAJFJFZKUBHNNJCURMNPBEKQCWDCHZBGDOSOLDMEEHWQTQSADBZUJONQTINSCSZFVUIAAPIDVFLJIWOLROKXQNGJRYZPXWLBXCUDESPRXIVFE");
    tmp_msg_0.lat = 0.951142614878428;
    tmp_msg_0.lon = 0.7048209332938336;
    tmp_msg_0.depth = 0.8848025751425566;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 81U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6998301679116669;
    msg.y = 0.6972451432485048;
    msg.var_x = 0.7664113653358773;
    msg.var_y = 0.6511179802001107;
    msg.distance = 0.18258385541241462;

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
    msg.setTimeStamp(0.1999743206903648);
    msg.setSource(52480U);
    msg.setSourceEntity(123U);
    msg.setDestination(50684U);
    msg.setDestinationEntity(161U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DETOJNCDVAJOUYPRAKZLLCTZEPCQWOGZPYTVZXFASLKFIK");
    tmp_msg_0.lat = 0.015068965209305785;
    tmp_msg_0.lon = 0.3825482691465234;
    tmp_msg_0.depth = 0.26541993411272313;
    tmp_msg_0.query_channel = 166U;
    tmp_msg_0.reply_channel = 249U;
    tmp_msg_0.transponder_delay = 83U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8683748128118224;
    msg.y = 0.1831758802032083;
    msg.var_x = 0.954541620512435;
    msg.var_y = 0.4069317590475192;
    msg.distance = 0.8875943225401404;

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
    msg.setTimeStamp(0.05214117020932607);
    msg.setSource(34148U);
    msg.setSourceEntity(107U);
    msg.setDestination(20765U);
    msg.setDestinationEntity(207U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.7404433905383326);
    msg.setSource(5601U);
    msg.setSourceEntity(165U);
    msg.setDestination(51318U);
    msg.setDestinationEntity(217U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.44396802551276926);
    msg.setSource(38031U);
    msg.setSourceEntity(102U);
    msg.setDestination(59792U);
    msg.setDestinationEntity(75U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.5072578246047477);
    msg.setSource(60280U);
    msg.setSourceEntity(60U);
    msg.setDestination(15958U);
    msg.setDestinationEntity(162U);
    msg.x = 0.6450324938067624;
    msg.y = 0.48504888355324904;
    msg.z = 0.6578057382716591;

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
    msg.setTimeStamp(0.576445004418944);
    msg.setSource(4167U);
    msg.setSourceEntity(41U);
    msg.setDestination(24526U);
    msg.setDestinationEntity(46U);
    msg.x = 0.9500887178618106;
    msg.y = 0.061486494753659526;
    msg.z = 0.12803410378766533;

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
    msg.setTimeStamp(0.4539256853529954);
    msg.setSource(62932U);
    msg.setSourceEntity(26U);
    msg.setDestination(17819U);
    msg.setDestinationEntity(251U);
    msg.x = 0.5754459039214578;
    msg.y = 0.19248097449174706;
    msg.z = 0.4560948180957386;

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
    msg.setTimeStamp(0.5971629775262676);
    msg.setSource(40525U);
    msg.setSourceEntity(139U);
    msg.setDestination(61138U);
    msg.setDestinationEntity(111U);
    msg.va = 0.8753690732319191;
    msg.aoa = 0.7807714135365931;
    msg.ssa = 0.30312461729464746;

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
    msg.setTimeStamp(0.01489934888227118);
    msg.setSource(44123U);
    msg.setSourceEntity(29U);
    msg.setDestination(62591U);
    msg.setDestinationEntity(18U);
    msg.va = 0.4340649351624689;
    msg.aoa = 0.08399614273851352;
    msg.ssa = 0.18995883480701237;

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
    msg.setTimeStamp(0.8457804281545144);
    msg.setSource(13687U);
    msg.setSourceEntity(0U);
    msg.setDestination(5543U);
    msg.setDestinationEntity(7U);
    msg.va = 0.08751642205994437;
    msg.aoa = 0.6111118465744009;
    msg.ssa = 0.3084180640167665;

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
    msg.setTimeStamp(0.14888927271899977);
    msg.setSource(31391U);
    msg.setSourceEntity(86U);
    msg.setDestination(18838U);
    msg.setDestinationEntity(225U);
    msg.value = 0.7512739661710292;

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
    msg.setTimeStamp(0.4959713936121244);
    msg.setSource(47082U);
    msg.setSourceEntity(78U);
    msg.setDestination(6061U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5420119676453559;

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
    msg.setTimeStamp(0.47218385960733833);
    msg.setSource(49834U);
    msg.setSourceEntity(45U);
    msg.setDestination(23056U);
    msg.setDestinationEntity(117U);
    msg.value = 0.6430685865734305;

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
    msg.setTimeStamp(0.8449288323791122);
    msg.setSource(38913U);
    msg.setSourceEntity(201U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(44U);
    msg.value = 0.7269783875166818;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.7961052823328255);
    msg.setSource(13696U);
    msg.setSourceEntity(219U);
    msg.setDestination(17908U);
    msg.setDestinationEntity(42U);
    msg.value = 0.24104817093024777;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.9804306164238891);
    msg.setSource(41966U);
    msg.setSourceEntity(2U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(152U);
    msg.value = 0.4131016171915267;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.6286337767980769);
    msg.setSource(13826U);
    msg.setSourceEntity(199U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8146518371547551;
    msg.speed_units = 146U;

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
    msg.setTimeStamp(0.5322025536852044);
    msg.setSource(21361U);
    msg.setSourceEntity(99U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(111U);
    msg.value = 0.8755044985018781;
    msg.speed_units = 200U;

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
    msg.setTimeStamp(0.5896803851923476);
    msg.setSource(1155U);
    msg.setSourceEntity(138U);
    msg.setDestination(19783U);
    msg.setDestinationEntity(158U);
    msg.value = 0.9173496579855318;
    msg.speed_units = 232U;

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
    msg.setTimeStamp(0.2596546322711083);
    msg.setSource(53820U);
    msg.setSourceEntity(188U);
    msg.setDestination(810U);
    msg.setDestinationEntity(140U);
    msg.value = 0.5947292163670519;

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
    msg.setTimeStamp(0.3776165615445135);
    msg.setSource(24907U);
    msg.setSourceEntity(219U);
    msg.setDestination(46401U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8333520646601696;

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
    msg.setTimeStamp(0.6839997599555725);
    msg.setSource(20277U);
    msg.setSourceEntity(229U);
    msg.setDestination(8155U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7231963701214039;

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
    msg.setTimeStamp(0.6446273768408162);
    msg.setSource(39099U);
    msg.setSourceEntity(171U);
    msg.setDestination(12534U);
    msg.setDestinationEntity(162U);
    msg.value = 0.21342787652256723;

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
    msg.setTimeStamp(0.489619032508228);
    msg.setSource(34549U);
    msg.setSourceEntity(198U);
    msg.setDestination(25496U);
    msg.setDestinationEntity(219U);
    msg.value = 0.16291465036554464;

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
    msg.setTimeStamp(0.25618567537130754);
    msg.setSource(39710U);
    msg.setSourceEntity(1U);
    msg.setDestination(16890U);
    msg.setDestinationEntity(57U);
    msg.value = 0.04236277181499826;

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
    msg.setTimeStamp(0.903917255852626);
    msg.setSource(15352U);
    msg.setSourceEntity(42U);
    msg.setDestination(6200U);
    msg.setDestinationEntity(70U);
    msg.value = 0.06295401387842692;

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
    msg.setTimeStamp(0.5512090914294628);
    msg.setSource(47838U);
    msg.setSourceEntity(232U);
    msg.setDestination(1235U);
    msg.setDestinationEntity(18U);
    msg.value = 0.10736346541068742;

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
    msg.setTimeStamp(0.6696273183951233);
    msg.setSource(46745U);
    msg.setSourceEntity(56U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(188U);
    msg.value = 0.3698749480268747;

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
    msg.setTimeStamp(0.40582552750194656);
    msg.setSource(58070U);
    msg.setSourceEntity(159U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(49U);
    msg.path_ref = 1825931177U;
    msg.start_lat = 0.45915413031906227;
    msg.start_lon = 0.3328313912596219;
    msg.start_z = 0.22882349274095626;
    msg.start_z_units = 240U;
    msg.end_lat = 0.1761129114912835;
    msg.end_lon = 0.5087914477313384;
    msg.end_z = 0.1095472360042703;
    msg.end_z_units = 221U;
    msg.speed = 0.6438280589211423;
    msg.speed_units = 84U;
    msg.lradius = 0.9093237575745147;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.5847033560932845);
    msg.setSource(1875U);
    msg.setSourceEntity(192U);
    msg.setDestination(3479U);
    msg.setDestinationEntity(161U);
    msg.path_ref = 10446087U;
    msg.start_lat = 0.41727260862215876;
    msg.start_lon = 0.6880143303745333;
    msg.start_z = 0.1226475129830874;
    msg.start_z_units = 151U;
    msg.end_lat = 0.08302640067522071;
    msg.end_lon = 0.1835779899311386;
    msg.end_z = 0.15218251035717334;
    msg.end_z_units = 148U;
    msg.speed = 0.4809720576695594;
    msg.speed_units = 1U;
    msg.lradius = 0.07749106546048368;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.0546058615461944);
    msg.setSource(49860U);
    msg.setSourceEntity(13U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(205U);
    msg.path_ref = 2363889698U;
    msg.start_lat = 0.07905939027918574;
    msg.start_lon = 0.5232256648181928;
    msg.start_z = 0.1474265717303802;
    msg.start_z_units = 26U;
    msg.end_lat = 0.9267939290847931;
    msg.end_lon = 0.09370384174961632;
    msg.end_z = 0.4982940556314568;
    msg.end_z_units = 122U;
    msg.speed = 0.7702948138296393;
    msg.speed_units = 19U;
    msg.lradius = 0.6816759488750253;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.9845695561293892);
    msg.setSource(24516U);
    msg.setSourceEntity(33U);
    msg.setDestination(4090U);
    msg.setDestinationEntity(209U);
    msg.x = 0.3323170098320768;
    msg.y = 0.4159416697127557;
    msg.z = 0.21329702801762374;
    msg.k = 0.5894524625086135;
    msg.m = 0.09022146366494288;
    msg.n = 0.022709506003024127;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.5194332502940094);
    msg.setSource(28031U);
    msg.setSourceEntity(67U);
    msg.setDestination(48479U);
    msg.setDestinationEntity(226U);
    msg.x = 0.13825521454030176;
    msg.y = 0.3580745619446417;
    msg.z = 0.1920215337772052;
    msg.k = 0.889048466369118;
    msg.m = 0.9609361475471568;
    msg.n = 0.9988515613196761;
    msg.flags = 250U;

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
    msg.setTimeStamp(0.40846195435469224);
    msg.setSource(25487U);
    msg.setSourceEntity(240U);
    msg.setDestination(49849U);
    msg.setDestinationEntity(104U);
    msg.x = 0.17376754091741564;
    msg.y = 0.34658854077064816;
    msg.z = 0.5199251117075234;
    msg.k = 0.06470617668542888;
    msg.m = 0.5567160155171827;
    msg.n = 0.8793481507816188;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.6134603037991837);
    msg.setSource(56340U);
    msg.setSourceEntity(9U);
    msg.setDestination(5435U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7946406469341296;

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
    msg.setTimeStamp(0.5985908089089499);
    msg.setSource(9371U);
    msg.setSourceEntity(135U);
    msg.setDestination(58489U);
    msg.setDestinationEntity(184U);
    msg.value = 0.40921229415918026;

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
    msg.setTimeStamp(0.8885214223143743);
    msg.setSource(14764U);
    msg.setSourceEntity(96U);
    msg.setDestination(37213U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6133198612340451;

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
    msg.setTimeStamp(0.5865959344793678);
    msg.setSource(59939U);
    msg.setSourceEntity(39U);
    msg.setDestination(29925U);
    msg.setDestinationEntity(50U);
    msg.u = 0.46589182402047846;
    msg.v = 0.6960237448694157;
    msg.w = 0.16479744730836965;
    msg.p = 0.35591818478632453;
    msg.q = 0.23991883710600825;
    msg.r = 0.8240173792265733;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.17181718305786975);
    msg.setSource(12236U);
    msg.setSourceEntity(7U);
    msg.setDestination(51650U);
    msg.setDestinationEntity(200U);
    msg.u = 0.5240921024616194;
    msg.v = 0.9301725825732778;
    msg.w = 0.5302461961105003;
    msg.p = 0.15091776618689812;
    msg.q = 0.7834703329057301;
    msg.r = 0.12225486588940448;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.16413902626866828);
    msg.setSource(24320U);
    msg.setSourceEntity(245U);
    msg.setDestination(27876U);
    msg.setDestinationEntity(13U);
    msg.u = 0.3049183885818848;
    msg.v = 0.5193468425082477;
    msg.w = 0.7698906193337723;
    msg.p = 0.972192910375074;
    msg.q = 0.3737002514683473;
    msg.r = 0.655062616733144;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.3889660133898366);
    msg.setSource(26433U);
    msg.setSourceEntity(1U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 2133576867U;
    msg.start_lat = 0.9202845535172174;
    msg.start_lon = 0.48323822449414233;
    msg.start_z = 0.6593098107218456;
    msg.start_z_units = 90U;
    msg.end_lat = 0.7608088337860895;
    msg.end_lon = 0.34397836233983503;
    msg.end_z = 0.47764953065074367;
    msg.end_z_units = 228U;
    msg.lradius = 0.4730225900684908;
    msg.flags = 7U;
    msg.x = 0.5192112452163721;
    msg.y = 0.3635815705076293;
    msg.z = 0.37048304243976715;
    msg.vx = 0.7792367458728878;
    msg.vy = 0.826778898477289;
    msg.vz = 0.9647667746790686;
    msg.course_error = 0.15342306948208329;
    msg.eta = 28061U;

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
    msg.setTimeStamp(0.8733474476022782);
    msg.setSource(54772U);
    msg.setSourceEntity(66U);
    msg.setDestination(27874U);
    msg.setDestinationEntity(120U);
    msg.path_ref = 468143024U;
    msg.start_lat = 0.02148053703235786;
    msg.start_lon = 0.7463473124845222;
    msg.start_z = 0.46908938372682274;
    msg.start_z_units = 0U;
    msg.end_lat = 0.6404009071754918;
    msg.end_lon = 0.9410727730653561;
    msg.end_z = 0.4175381111900318;
    msg.end_z_units = 35U;
    msg.lradius = 0.5553950618585071;
    msg.flags = 140U;
    msg.x = 0.8628019378543097;
    msg.y = 0.0418293379243867;
    msg.z = 0.4083465260416048;
    msg.vx = 0.8466880240003651;
    msg.vy = 0.9439323742105413;
    msg.vz = 0.6513259754711582;
    msg.course_error = 0.5173241134925668;
    msg.eta = 5368U;

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
    msg.setTimeStamp(0.7622028743654177);
    msg.setSource(28408U);
    msg.setSourceEntity(71U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(202U);
    msg.path_ref = 1574938589U;
    msg.start_lat = 0.6851587508798919;
    msg.start_lon = 0.8588329953244016;
    msg.start_z = 0.6398600949573318;
    msg.start_z_units = 120U;
    msg.end_lat = 0.3550852081951493;
    msg.end_lon = 0.4800504824203403;
    msg.end_z = 0.5654134738425133;
    msg.end_z_units = 75U;
    msg.lradius = 0.87505218642057;
    msg.flags = 114U;
    msg.x = 0.12300584288847605;
    msg.y = 0.8079257328162369;
    msg.z = 0.40224527131974586;
    msg.vx = 0.13399835647475034;
    msg.vy = 0.18045867472742094;
    msg.vz = 0.8885490772318891;
    msg.course_error = 0.32274855117281753;
    msg.eta = 32358U;

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
    msg.setTimeStamp(0.43487067290793946);
    msg.setSource(192U);
    msg.setSourceEntity(214U);
    msg.setDestination(10316U);
    msg.setDestinationEntity(224U);
    msg.k = 0.32358158432547013;
    msg.m = 0.13994230136693742;
    msg.n = 0.9759258071675029;

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
    msg.setTimeStamp(0.13152433659876006);
    msg.setSource(47602U);
    msg.setSourceEntity(104U);
    msg.setDestination(11802U);
    msg.setDestinationEntity(254U);
    msg.k = 0.8100370338552358;
    msg.m = 0.9157855258251075;
    msg.n = 0.22358142630802114;

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
    msg.setTimeStamp(0.8964400410578302);
    msg.setSource(7348U);
    msg.setSourceEntity(215U);
    msg.setDestination(50083U);
    msg.setDestinationEntity(66U);
    msg.k = 0.4428548481619642;
    msg.m = 0.4596996652198556;
    msg.n = 0.30322277821731225;

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
    msg.setTimeStamp(0.09308897829021401);
    msg.setSource(44650U);
    msg.setSourceEntity(83U);
    msg.setDestination(64322U);
    msg.setDestinationEntity(240U);
    msg.p = 0.44499451205723517;
    msg.i = 0.8360446167225669;
    msg.d = 0.661349905391782;
    msg.a = 0.4232015789427096;

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
    msg.setTimeStamp(0.0971650389276254);
    msg.setSource(17454U);
    msg.setSourceEntity(172U);
    msg.setDestination(37272U);
    msg.setDestinationEntity(39U);
    msg.p = 0.6788508883114297;
    msg.i = 0.7842103294571029;
    msg.d = 0.19356923208015486;
    msg.a = 0.053225762599935944;

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
    msg.setTimeStamp(0.21692792121840054);
    msg.setSource(61506U);
    msg.setSourceEntity(110U);
    msg.setDestination(34690U);
    msg.setDestinationEntity(170U);
    msg.p = 0.8660850105085739;
    msg.i = 0.13084225632484692;
    msg.d = 0.41671980404221687;
    msg.a = 0.5934387294273757;

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
    msg.setTimeStamp(0.037822329290179924);
    msg.setSource(42693U);
    msg.setSourceEntity(209U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(39U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.20731381145554562);
    msg.setSource(24196U);
    msg.setSourceEntity(93U);
    msg.setDestination(18337U);
    msg.setDestinationEntity(19U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.7947768994278658);
    msg.setSource(46398U);
    msg.setSourceEntity(248U);
    msg.setDestination(60252U);
    msg.setDestinationEntity(12U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.8426862244291552);
    msg.setSource(10844U);
    msg.setSourceEntity(175U);
    msg.setDestination(12151U);
    msg.setDestinationEntity(119U);
    msg.x = 0.7532374560018501;
    msg.y = 0.839478707236697;
    msg.z = 0.5496992835093713;
    msg.vx = 0.2548441689448605;
    msg.vy = 0.8486322349589667;
    msg.vz = 0.38641934104103326;
    msg.ax = 0.6302982699049754;
    msg.ay = 0.042737584809929174;
    msg.az = 0.4578526876068547;
    msg.flags = 33309U;

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
    msg.setTimeStamp(0.4870673429563295);
    msg.setSource(23784U);
    msg.setSourceEntity(56U);
    msg.setDestination(8033U);
    msg.setDestinationEntity(157U);
    msg.x = 0.06790440133598263;
    msg.y = 0.4864308812079865;
    msg.z = 0.3148084076345792;
    msg.vx = 0.7046407058400574;
    msg.vy = 0.00705280535637709;
    msg.vz = 0.08348353736091008;
    msg.ax = 0.23354035152465225;
    msg.ay = 0.6182557815966148;
    msg.az = 0.5168956354578458;
    msg.flags = 4034U;

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
    msg.setTimeStamp(0.5683670730185597);
    msg.setSource(62923U);
    msg.setSourceEntity(129U);
    msg.setDestination(10789U);
    msg.setDestinationEntity(38U);
    msg.x = 0.8675722576090107;
    msg.y = 0.2372344402442742;
    msg.z = 0.30573085462945604;
    msg.vx = 0.2589799013744477;
    msg.vy = 0.017321566126684007;
    msg.vz = 0.5200755225563074;
    msg.ax = 0.5664092648667892;
    msg.ay = 0.5705516646721263;
    msg.az = 0.6062269109312892;
    msg.flags = 50404U;

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
    msg.setTimeStamp(0.6652289390902613);
    msg.setSource(62176U);
    msg.setSourceEntity(76U);
    msg.setDestination(18605U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6507321027920321;

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
    msg.setTimeStamp(0.4014955454969843);
    msg.setSource(29404U);
    msg.setSourceEntity(76U);
    msg.setDestination(36804U);
    msg.setDestinationEntity(76U);
    msg.value = 0.9268841655352528;

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
    msg.setTimeStamp(0.237771067790998);
    msg.setSource(3379U);
    msg.setSourceEntity(63U);
    msg.setDestination(51246U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5850803243777777;

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
    msg.setTimeStamp(0.15191096192153608);
    msg.setSource(60160U);
    msg.setSourceEntity(226U);
    msg.setDestination(23525U);
    msg.setDestinationEntity(75U);
    msg.timeout = 7628U;
    msg.lat = 0.2283556047415688;
    msg.lon = 0.38690348256246265;
    msg.z = 0.34514631400206197;
    msg.z_units = 146U;
    msg.speed = 0.6354933325533672;
    msg.speed_units = 17U;
    msg.roll = 0.1468001829692659;
    msg.pitch = 0.8434008090518785;
    msg.yaw = 0.5076265380737306;
    msg.custom.assign("ZGIHKKOAXCCZJCVMKQABRDLCDJPZVJZDGBXHKJLSSEAYBHUAMXTPUTKAVRHRAPHONRLWSVLYBFYFFLNMQEGWOOIJTPYBYGFKQNSHHDLILROMZZRDIAVFBGPWAQJUOEMZEITFNGFDIVDPSSFWJLQUUZELGQOTGNNCJVCHARTSUVBYEIURSEINMBICBRXOWWHTCKCMWEIENPJVXCDKRXWWMTSXPMDOGKTU");

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
    msg.setTimeStamp(0.531389957815506);
    msg.setSource(9937U);
    msg.setSourceEntity(137U);
    msg.setDestination(8526U);
    msg.setDestinationEntity(170U);
    msg.timeout = 27337U;
    msg.lat = 0.4440383906676424;
    msg.lon = 0.9295873568010717;
    msg.z = 0.05799953608174635;
    msg.z_units = 49U;
    msg.speed = 0.2274809569328602;
    msg.speed_units = 31U;
    msg.roll = 0.6823044631228765;
    msg.pitch = 0.3335416661698759;
    msg.yaw = 0.3855181780800967;
    msg.custom.assign("CXWDDEFXHZFSTMVDGCNTSURSE");

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
    msg.setTimeStamp(0.082738370798217);
    msg.setSource(45146U);
    msg.setSourceEntity(82U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(13U);
    msg.timeout = 1277U;
    msg.lat = 0.5736834011214557;
    msg.lon = 0.6507642374715299;
    msg.z = 0.8216865076259374;
    msg.z_units = 141U;
    msg.speed = 0.8191696955382335;
    msg.speed_units = 3U;
    msg.roll = 0.5856729094873919;
    msg.pitch = 0.6001304055660032;
    msg.yaw = 0.540859978357866;
    msg.custom.assign("ICLQIXEFHRFJJVKCCRXQBXBZISAQZWXMYHDLGHELUAQEIFHPDWVYCYQINLNUHUNIYSUDAZDUKGVSJFTSKODSGETRVLMNOMJDGTZQMCJOUOPNPAVBXVKMTEVHRNYPDQWWPMQCZOSQOAXVLTYPOGHBILZJTOZTXMWRYDUFMEHJWAUOFJQCYEWMBWLLFMGLSGIYVKPRBHP");

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
    msg.setTimeStamp(0.520708504140308);
    msg.setSource(2400U);
    msg.setSourceEntity(216U);
    msg.setDestination(47215U);
    msg.setDestinationEntity(151U);
    msg.timeout = 31866U;
    msg.lat = 0.658073067897808;
    msg.lon = 0.1463372757539;
    msg.z = 0.31493981250398195;
    msg.z_units = 100U;
    msg.speed = 0.2001822800948566;
    msg.speed_units = 145U;
    msg.duration = 52203U;
    msg.radius = 0.2221668409307218;
    msg.flags = 191U;
    msg.custom.assign("SYTJKWBJUBHTDVINXQZ");

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
    msg.setTimeStamp(0.7830477547059594);
    msg.setSource(41696U);
    msg.setSourceEntity(86U);
    msg.setDestination(16060U);
    msg.setDestinationEntity(19U);
    msg.timeout = 61796U;
    msg.lat = 0.5977994475449955;
    msg.lon = 0.47589842538412297;
    msg.z = 0.06382533043719485;
    msg.z_units = 81U;
    msg.speed = 0.2813307879716297;
    msg.speed_units = 116U;
    msg.duration = 55933U;
    msg.radius = 0.1924963351518426;
    msg.flags = 123U;
    msg.custom.assign("JMLOQSIRSMADZNOOBYAPFTGNIYVWVHTPVHTDFVLQBFXKUZZJOEIXCAKQUDQNATIFVNDWTEZECXAJOHAWKUIVBAGHQOILKUENCEHEFAWBZJMWEUDZDYQBRCORWMGUJLIJXURYMFTEUULVFKVRQNDXGTGYKRKLXIOPPXDBWXKWWPPUSJHBSDJPMPQCTHLEFZRBMSPCTWNGCSKZGJQLYGLSCAMLIRC");

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
    msg.setTimeStamp(0.7257243769501891);
    msg.setSource(63195U);
    msg.setSourceEntity(221U);
    msg.setDestination(30680U);
    msg.setDestinationEntity(202U);
    msg.timeout = 8164U;
    msg.lat = 0.504735317843059;
    msg.lon = 0.9857426025764296;
    msg.z = 0.05850960829464302;
    msg.z_units = 151U;
    msg.speed = 0.8761378250122352;
    msg.speed_units = 135U;
    msg.duration = 63950U;
    msg.radius = 0.9025347614950758;
    msg.flags = 47U;
    msg.custom.assign("IVBMOQSBTLAHWSPQNZKZEVNLKZITCEEKFHZAACUKRQKCOVZOZQSHLTRUQNEIYGMISYUWWHMLAVLJXVHRMLPCJPDPTIPFXKNBBYFXHDXPRDOFJZCLGNDI");

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
    msg.setTimeStamp(0.40708194724126434);
    msg.setSource(40290U);
    msg.setSourceEntity(5U);
    msg.setDestination(5506U);
    msg.setDestinationEntity(222U);
    msg.custom.assign("VPZFDGIKXTZIKQYKBPSCMWQQNUVHLAUPSQDGGANVGYDXTQOVCHBZRYOWDAJANWYRMLYXPHLNYLXCQYVINSF");

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
    msg.setTimeStamp(0.5667186854282665);
    msg.setSource(45249U);
    msg.setSourceEntity(123U);
    msg.setDestination(36141U);
    msg.setDestinationEntity(64U);
    msg.custom.assign("BIBYSVIZLZMEZQTIDGPRVHZPTCUIOEDCGZRJKSXWMQLQROAMXVGLBRQCFMUHGPOLEHWCCYVRJJXCRGMKIDXLAWDVNTHMAVWTKSEQMQJYBAFEIVYKZTXSJRXFHYTTOSWHROFJZYPODAZNWXQALSUPRPOQUKNYQLFQEBHUUBSPNJIHDNGOGVJGWIL");

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
    msg.setTimeStamp(0.9738893479140942);
    msg.setSource(59057U);
    msg.setSourceEntity(244U);
    msg.setDestination(38968U);
    msg.setDestinationEntity(228U);
    msg.custom.assign("VZIXGBESEUVOBZNVTVWDBICCUIWZUGAMINMMIVAJYAULEFTRTPYZNUZYJPFYZPJDUBXPRYNSVTVSLRKGDGSHFDONQDOMQFJQKALKGPXXSKJTBFQLMLOHCYOHLOFTLECDABMKQZNBPYXVHEJHHWGUWFO");

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
    msg.setTimeStamp(0.301358768620582);
    msg.setSource(60649U);
    msg.setSourceEntity(155U);
    msg.setDestination(62715U);
    msg.setDestinationEntity(163U);
    msg.timeout = 43271U;
    msg.lat = 0.10561314097634134;
    msg.lon = 0.7417347918825624;
    msg.z = 0.014009071164030495;
    msg.z_units = 142U;
    msg.duration = 62177U;
    msg.speed = 0.35520386856361275;
    msg.speed_units = 146U;
    msg.type = 232U;
    msg.radius = 0.39381779527233796;
    msg.length = 0.749029326170121;
    msg.bearing = 0.11524516173755761;
    msg.direction = 123U;
    msg.custom.assign("JFMEKWHHANUDZCFLAGODPOYPDKOZKFPCZKCQTMGUOSMEDHFWOODSXAHYFIZTGRRHGLEFGQYKJDXVBSAJYCJGNLIYHPINQSFBFNBYLPINQEEVDJLWWXYEPXXOBTQWXLVSARTTATSMKOTKAVXJLBVFWLTJWPOCYGCNEMQHNIPXSMIMIPZUNNCRUEEHOVTDHKZRRWCVULBZVVJSWUSKRKGXETW");

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
    msg.setTimeStamp(0.7286417512096667);
    msg.setSource(30778U);
    msg.setSourceEntity(179U);
    msg.setDestination(37009U);
    msg.setDestinationEntity(180U);
    msg.timeout = 45788U;
    msg.lat = 0.9136101422111249;
    msg.lon = 0.0340298957817643;
    msg.z = 0.8802107095329673;
    msg.z_units = 5U;
    msg.duration = 4187U;
    msg.speed = 0.7965980697860979;
    msg.speed_units = 247U;
    msg.type = 67U;
    msg.radius = 0.9377627201271881;
    msg.length = 0.19535884175149965;
    msg.bearing = 0.010667866031199513;
    msg.direction = 117U;
    msg.custom.assign("TRTCQSDXSIPKILATOOIYENGWXKNQHDPNKCRINUEIEMKFHRXBJSUFUKGTVROYJXDWTE");

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
    msg.setTimeStamp(0.03231355771680677);
    msg.setSource(25109U);
    msg.setSourceEntity(95U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(149U);
    msg.timeout = 30356U;
    msg.lat = 0.3267792397111978;
    msg.lon = 0.6821070473149585;
    msg.z = 0.9516217588154824;
    msg.z_units = 86U;
    msg.duration = 64396U;
    msg.speed = 0.9142059794180174;
    msg.speed_units = 39U;
    msg.type = 34U;
    msg.radius = 0.7833275291387524;
    msg.length = 0.6369969533931428;
    msg.bearing = 0.8951040688041311;
    msg.direction = 244U;
    msg.custom.assign("SYLLHIZYYZNRGEHPHUJMIGOUSKZPHIDEWTKXVCUGSRPTKGSTGEMJOQXKHQJVPIXOYVAROSVBGOIAEAELABFXKVOKOYEPMHSATTKRYDNBUSKRMZV");

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
    msg.setTimeStamp(0.3534088870585552);
    msg.setSource(21356U);
    msg.setSourceEntity(85U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(56U);
    msg.duration = 44045U;
    msg.custom.assign("SDNLIGWNDJGORFXBKZFXWQOOVEPLUYMRYIOVHHJCKBCGSQPBQHFCEUCDCE");

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
    msg.setTimeStamp(0.5155869421409508);
    msg.setSource(15486U);
    msg.setSourceEntity(4U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(198U);
    msg.duration = 7445U;
    msg.custom.assign("QQTFUNFUTMKJMRRKUCNFTLHPLCYAIQQHJYVLPXIFEGZIABETC");

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
    msg.setTimeStamp(0.11582714318076903);
    msg.setSource(45965U);
    msg.setSourceEntity(245U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(182U);
    msg.duration = 47720U;
    msg.custom.assign("PJDDUIKMMMRHXVDVZUWYIFCUUZYKNNQVROEQRZIOICVBAYOBTSFKCMGYZJQEKLPLRXCLXWLAEMREFAQGQZGLHYOIZLPVIYLSKFHUJDOGMZNBXZJVDPWFTDOJBRUNWNTEAAJKWDSOXPSANOPJHEPEIFLSXBYUXTHVUABAEWCDYODPGXGAEGJFTKJFHSCSN");

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
    msg.setTimeStamp(0.8970984471721533);
    msg.setSource(40718U);
    msg.setSourceEntity(155U);
    msg.setDestination(58751U);
    msg.setDestinationEntity(19U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.24834882416077886;
    tmp_msg_0.z_units = 150U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53684U;
    msg.custom.assign("LGDOGLQHHXFQTJPQFXNTCWYYXJQNBTWTFFROIRTRIOZSJGRY");

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
    msg.setTimeStamp(0.47475931144164596);
    msg.setSource(56316U);
    msg.setSourceEntity(109U);
    msg.setDestination(1462U);
    msg.setDestinationEntity(125U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1875226964U;
    tmp_msg_0.start_lat = 0.32892202102069046;
    tmp_msg_0.start_lon = 0.6224537851601747;
    tmp_msg_0.start_z = 0.541930628557333;
    tmp_msg_0.start_z_units = 141U;
    tmp_msg_0.end_lat = 0.4492925858337473;
    tmp_msg_0.end_lon = 0.16441706836216807;
    tmp_msg_0.end_z = 0.7406127732224248;
    tmp_msg_0.end_z_units = 180U;
    tmp_msg_0.speed = 0.2559128774852095;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.lradius = 0.45082129404628923;
    tmp_msg_0.flags = 151U;
    msg.control.set(tmp_msg_0);
    msg.duration = 14418U;
    msg.custom.assign("HDTYXPWGDWECCZZUQVFMFACAPMYLEONOQDJNWMCWHOKWPNQVPQKCYIZRUIMXZEGIHLYJJRBSKXRBSKKCABYECHHWKBZGLHMBQHJOMQVSGJXHMOUYPNPZAUYTJAVJTKTYPUFA");

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
    msg.setTimeStamp(0.43091219813317905);
    msg.setSource(10738U);
    msg.setSourceEntity(244U);
    msg.setDestination(17099U);
    msg.setDestinationEntity(222U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.26459233800729065;
    msg.control.set(tmp_msg_0);
    msg.duration = 29249U;
    msg.custom.assign("ZFTDXGCIJZXSLZDIUGAWOMBKWCJODRTTGLJRMSOGIJKFWUTCZYEWECTQJFS");

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
    msg.setTimeStamp(0.678862930975855);
    msg.setSource(13978U);
    msg.setSourceEntity(48U);
    msg.setDestination(8358U);
    msg.setDestinationEntity(137U);
    msg.timeout = 11519U;
    msg.lat = 0.010805748590345776;
    msg.lon = 0.38098129350755605;
    msg.z = 0.5337225722143181;
    msg.z_units = 6U;
    msg.speed = 0.2763955606426882;
    msg.speed_units = 106U;
    msg.bearing = 0.7491102424791234;
    msg.cross_angle = 0.09916057599024353;
    msg.width = 0.907972221202892;
    msg.length = 0.332202367572751;
    msg.hstep = 0.3258973906489211;
    msg.coff = 158U;
    msg.alternation = 86U;
    msg.flags = 14U;
    msg.custom.assign("DIWFYVAJXKCRJUDSFAJVTOHOSTXPHTDKVPCAAPSOKNJBOWSBLNKLNJYOBGYGIDMCXJHDVPPFYCXIHPBSLKRVFKZSPUWUFJKZKYDRXGLUZFMFBIETEWXVAWNTZWBFSARLNSLHTGBYRIAMMGOZGUNJUQYNQWSWZZMZVLPJLEHMAFHHBYMBVYLCENPDOWUEKMWCQTCIQCDMITCVNBRRUEPRQGFICHMGIGQETODRAXAZQE");

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
    msg.setTimeStamp(0.19114419228194868);
    msg.setSource(18194U);
    msg.setSourceEntity(171U);
    msg.setDestination(46189U);
    msg.setDestinationEntity(70U);
    msg.timeout = 14763U;
    msg.lat = 0.28211717574903294;
    msg.lon = 0.008463691559702724;
    msg.z = 0.5499546119163896;
    msg.z_units = 60U;
    msg.speed = 0.8003394095790385;
    msg.speed_units = 73U;
    msg.bearing = 0.3698848235576512;
    msg.cross_angle = 0.0488877396156735;
    msg.width = 0.9860776858970334;
    msg.length = 0.02673394279432617;
    msg.hstep = 0.2344854375853791;
    msg.coff = 73U;
    msg.alternation = 211U;
    msg.flags = 32U;
    msg.custom.assign("QQLGGTDDAKCMNCXWPJDHJOSDFPTJIXBLVPUMJANUKCXKHBXHIGCBZTNLOOGHCQLALYYLFXMFSWMQXJDTWDYKUFAOTVFFCIGBYPMEQVULMMGHBGRXVEYAZDELXECBNNEYFHBEICATWQRINDCQR");

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
    msg.setTimeStamp(0.35624822089305264);
    msg.setSource(33905U);
    msg.setSourceEntity(22U);
    msg.setDestination(29706U);
    msg.setDestinationEntity(74U);
    msg.timeout = 44535U;
    msg.lat = 0.22290111466145512;
    msg.lon = 0.20125996655655554;
    msg.z = 0.8746158234515012;
    msg.z_units = 113U;
    msg.speed = 0.7960569361047886;
    msg.speed_units = 167U;
    msg.bearing = 0.7064376567287198;
    msg.cross_angle = 0.86456961820782;
    msg.width = 0.8903138985161434;
    msg.length = 0.811604346493031;
    msg.hstep = 0.5446842107741736;
    msg.coff = 68U;
    msg.alternation = 45U;
    msg.flags = 153U;
    msg.custom.assign("EAWJUSHWZMHJRPBQVCKHZOGCZPDYGCVXUIGOQSFQXKYLLFNEXSINNBCAJJGVUOAHHTTZCFLFMNNEQHZFFACURJKYMVRBVVMGNDFWLQTGTPZDPLESYMVBILWUKGCOVIWKDBWRWKXATWAYEZPLHOYXFODOREFEYJKFHEJQOCLPSQIAVKAXZKGISQLYI");

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
    msg.setTimeStamp(0.42598083906795536);
    msg.setSource(8629U);
    msg.setSourceEntity(168U);
    msg.setDestination(32510U);
    msg.setDestinationEntity(167U);
    msg.timeout = 10227U;
    msg.lat = 0.35040630511600857;
    msg.lon = 0.8638880094104445;
    msg.z = 0.49921040243777726;
    msg.z_units = 185U;
    msg.speed = 0.3420109862401195;
    msg.speed_units = 38U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.10667494934266053;
    tmp_msg_0.y = 0.349237946684104;
    tmp_msg_0.z = 0.2859737685711269;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PIEFXYGEUJIPHCAFGWWUGZDDFPBTOMPNZZYVAEVGJAOMMXKRNZKEJIVDYQRRNAADBKWUVQMUCMJOHIFAQIR");

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
    msg.setTimeStamp(0.47902730335737753);
    msg.setSource(60579U);
    msg.setSourceEntity(157U);
    msg.setDestination(26391U);
    msg.setDestinationEntity(2U);
    msg.timeout = 12947U;
    msg.lat = 0.6550813218079763;
    msg.lon = 0.578876885481644;
    msg.z = 0.4419967767360564;
    msg.z_units = 101U;
    msg.speed = 0.542330978342505;
    msg.speed_units = 36U;
    msg.custom.assign("VKUORCWBJXIBJZYRVUSBICHKYOMWNHHKLOMQYGMJAZMQNOEGNEJFKWCSWIKAVFFFDOYPEMARKXLTPARKYHDOTZIBYNSUVNLSZMPFZVESXCTDDUSEGBKEDPRCIOEOCVWJWIIAHZCNBTFAUWLTHQGBUURQAERTDELBSAIQVLNAYIS");

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
    msg.setTimeStamp(0.9212462533187221);
    msg.setSource(20036U);
    msg.setSourceEntity(65U);
    msg.setDestination(11223U);
    msg.setDestinationEntity(38U);
    msg.timeout = 4665U;
    msg.lat = 0.8527766745088791;
    msg.lon = 0.4283725369098891;
    msg.z = 0.21430599174453047;
    msg.z_units = 47U;
    msg.speed = 0.9430620791875441;
    msg.speed_units = 216U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9477429100336341;
    tmp_msg_0.y = 0.6258398368734673;
    tmp_msg_0.z = 0.003769768604301116;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SCCADDZLOIGOOGQQSSXAZMMOEEJYUSFHBMCGKKGHGKFTWGWVKIJHIUTFYTVBDNAQKLQNVRTGPNRUIVSHPTMLWNSHIOPAYJIUVHQNBFRRCEPXRUDRJZJOPHKXWMUZFBNEUEVLGDXFBMRWKFITVVNBKFEJQJWBZWPNDQXPQSGHADSZWCHDGCLCORJKXXYVLZXHYFELSYOUNBDINYFQMAMSMO");

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
    msg.setTimeStamp(0.41804523874186816);
    msg.setSource(7849U);
    msg.setSourceEntity(99U);
    msg.setDestination(32567U);
    msg.setDestinationEntity(228U);
    msg.x = 0.026720570109911468;
    msg.y = 0.36466062297138446;
    msg.z = 0.914126138732912;

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
    msg.setTimeStamp(0.45880581115898666);
    msg.setSource(54175U);
    msg.setSourceEntity(124U);
    msg.setDestination(51548U);
    msg.setDestinationEntity(63U);
    msg.x = 0.9516896236057109;
    msg.y = 0.9585371847231938;
    msg.z = 0.638636100910719;

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
    msg.setTimeStamp(0.17389218516182092);
    msg.setSource(6445U);
    msg.setSourceEntity(87U);
    msg.setDestination(45699U);
    msg.setDestinationEntity(148U);
    msg.x = 0.8127672661332195;
    msg.y = 0.5340642622483004;
    msg.z = 0.5454492234403415;

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
    msg.setTimeStamp(0.5603960057851578);
    msg.setSource(52242U);
    msg.setSourceEntity(180U);
    msg.setDestination(58855U);
    msg.setDestinationEntity(2U);
    msg.timeout = 20110U;
    msg.lat = 0.9348348089119071;
    msg.lon = 0.43822282983813055;
    msg.z = 0.698060869385612;
    msg.z_units = 152U;
    msg.amplitude = 0.6903096802235302;
    msg.pitch = 0.28870980148603875;
    msg.speed = 0.38072018632555316;
    msg.speed_units = 148U;
    msg.custom.assign("KGVANTHUJPBUURJUYRVCVVLZTSZRFVZUDPXAOKYRIXKZOIJGPZTXGDBBWGLYTXMPFPHHPERZSIYTQQQJFMOZNANRQTHGAXRBYFIJNABCLDOUDYIBUTSQAPOWAANDFTHYOOJBEONDWIDCJFUALXRVXKBEMVMGGEJVCRIWSCMWPKJUZFNIDZAICESESHBHEWSWUMPR");

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
    msg.setTimeStamp(0.13855000892761726);
    msg.setSource(54836U);
    msg.setSourceEntity(180U);
    msg.setDestination(47338U);
    msg.setDestinationEntity(146U);
    msg.timeout = 57564U;
    msg.lat = 0.36059489676101086;
    msg.lon = 0.6116134056035045;
    msg.z = 0.14613297803195657;
    msg.z_units = 111U;
    msg.amplitude = 0.8917987486560409;
    msg.pitch = 0.7887147460316616;
    msg.speed = 0.464767003672248;
    msg.speed_units = 155U;
    msg.custom.assign("PGMXCFZQSMAFXPMDBKEQIGXZQXKCLXHMOPGDL");

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
    msg.setTimeStamp(0.8002666837970255);
    msg.setSource(9399U);
    msg.setSourceEntity(65U);
    msg.setDestination(37120U);
    msg.setDestinationEntity(45U);
    msg.timeout = 14222U;
    msg.lat = 0.8868354546681838;
    msg.lon = 0.6980494457839773;
    msg.z = 0.4588454846253206;
    msg.z_units = 157U;
    msg.amplitude = 0.816966103539322;
    msg.pitch = 0.7178866701956894;
    msg.speed = 0.7621483689032962;
    msg.speed_units = 239U;
    msg.custom.assign("TEGCHIWBTWVABBSUBFTKFCUYVWFSXOFLNRZNIWUPJZFGIZZIHGAYLUOFZEVDKOPZFFJMJUNMIVRSFIZEHKXQKZTKMPNSVYQQAVCOQGTDUGQWGXDKUXPMLLXBAJJCTANJYLJRVYAER");

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
    msg.setTimeStamp(0.03001583407941477);
    msg.setSource(17046U);
    msg.setSourceEntity(208U);
    msg.setDestination(46461U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.04123353171428845);
    msg.setSource(21623U);
    msg.setSourceEntity(253U);
    msg.setDestination(52331U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.9456185791166362);
    msg.setSource(8821U);
    msg.setSourceEntity(206U);
    msg.setDestination(25561U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.09287702713416213);
    msg.setSource(64211U);
    msg.setSourceEntity(183U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.08889326487585536;
    msg.lon = 0.24287448443127024;
    msg.z = 0.979998227516018;
    msg.z_units = 39U;
    msg.radius = 0.6276084417827505;
    msg.duration = 33769U;
    msg.speed = 0.65371214499115;
    msg.speed_units = 188U;
    msg.custom.assign("NTQGMWEWWNUXNLJB");

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
    msg.setTimeStamp(0.9098753317885546);
    msg.setSource(41059U);
    msg.setSourceEntity(62U);
    msg.setDestination(5698U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.25321545216662356;
    msg.lon = 0.567061834887076;
    msg.z = 0.7673529210960031;
    msg.z_units = 41U;
    msg.radius = 0.4690395233661747;
    msg.duration = 35878U;
    msg.speed = 0.6336953264123799;
    msg.speed_units = 204U;
    msg.custom.assign("RZJQGZUNTPBCXVSKMQLPWKLVCPQLSJHZLKGWNORRDGYHVEKFFBIFPDBMOLMMUASNSDXKZVMDRTXUYVQGJPBGJXSEHBLPSJSEKYQSVMKDVXEBYIDHJCJHYOKACQWHN");

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
    msg.setTimeStamp(0.8070160149565927);
    msg.setSource(18289U);
    msg.setSourceEntity(7U);
    msg.setDestination(31491U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.2997048905811741;
    msg.lon = 0.7879876646143736;
    msg.z = 0.7144107551458825;
    msg.z_units = 137U;
    msg.radius = 0.13838894230094523;
    msg.duration = 21656U;
    msg.speed = 0.4924062872039947;
    msg.speed_units = 166U;
    msg.custom.assign("JMSLGHWPPQGSNFAOCITVNDUXCVADYVAQFHEPTZCYCEZKOJFIXKIEKQLNTHANSDAFPONOGRIBGLLAJRPHHSFQMMVUTMGQUXETKKZPYRYSBHPNYRSUGJEKPIAOHMZSVXFXQBEXIMZTZQRRUNWNVKHWAVSKJURZBAXWBYODCXWEBDEHEYWMI");

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
    msg.setTimeStamp(0.25164576030850117);
    msg.setSource(38744U);
    msg.setSourceEntity(54U);
    msg.setDestination(27959U);
    msg.setDestinationEntity(127U);
    msg.timeout = 13876U;
    msg.flags = 11U;
    msg.lat = 0.6712518259640156;
    msg.lon = 0.9053291004421022;
    msg.start_z = 0.164214575789291;
    msg.start_z_units = 16U;
    msg.end_z = 0.7181819883064016;
    msg.end_z_units = 73U;
    msg.radius = 0.5372507673100311;
    msg.speed = 0.0883950016578211;
    msg.speed_units = 17U;
    msg.custom.assign("BJTNGKMHWLXCMBGKQDZAAIZGAMCZRKUVVDPUTETGGJWXUVWLSRECWHFLDIRHUFDOHSOJEPXQOTFXVNOVZJXFVOYCHRS");

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
    msg.setTimeStamp(0.9757489161042168);
    msg.setSource(55654U);
    msg.setSourceEntity(190U);
    msg.setDestination(8346U);
    msg.setDestinationEntity(21U);
    msg.timeout = 59033U;
    msg.flags = 227U;
    msg.lat = 0.6506110077093645;
    msg.lon = 0.5031182992721325;
    msg.start_z = 0.17905345205582124;
    msg.start_z_units = 65U;
    msg.end_z = 0.16749945179109993;
    msg.end_z_units = 169U;
    msg.radius = 0.9086578359147821;
    msg.speed = 0.24863218892043004;
    msg.speed_units = 197U;
    msg.custom.assign("IKMEYPNWDMVSCXSFUXHJGQZAPGWLKYNFZBDLKAJFNYFHAQRKRYNUZVGAQBKAIMJTCHWRNKVSYYRSLXBEEAPAZDEWLONTDOWXAMYGJGRILMCPEOXUCSFFKIFVMTDLIHQKHHZLRUHPEUJKVCNTMWBOZJTGCNRVDQLDBXCUEHMWOJZCSYDWVGXMOGBSNGSJZPGAXPUAMUHZUJXIVPOBBXDNWIEQQTFDZTTIBSVOCRQFB");

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
    msg.setTimeStamp(0.0445354009474096);
    msg.setSource(21265U);
    msg.setSourceEntity(231U);
    msg.setDestination(30171U);
    msg.setDestinationEntity(204U);
    msg.timeout = 908U;
    msg.flags = 203U;
    msg.lat = 0.8108239463195659;
    msg.lon = 0.522675589078243;
    msg.start_z = 0.03808134451080469;
    msg.start_z_units = 235U;
    msg.end_z = 0.21499574240360875;
    msg.end_z_units = 6U;
    msg.radius = 0.05933129890917044;
    msg.speed = 0.006494101495309934;
    msg.speed_units = 119U;
    msg.custom.assign("UPOJNWELRGASGUYUHULPEZSKFPJYLWDLKHXREVIMRABJOEJEMXIQY");

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
    msg.setTimeStamp(0.7629392194368027);
    msg.setSource(31553U);
    msg.setSourceEntity(254U);
    msg.setDestination(47094U);
    msg.setDestinationEntity(47U);
    msg.timeout = 61705U;
    msg.lat = 0.7836044530246778;
    msg.lon = 0.8742251551880111;
    msg.z = 0.714854549402015;
    msg.z_units = 250U;
    msg.speed = 0.16871965318578763;
    msg.speed_units = 96U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9224465505152631;
    tmp_msg_0.y = 0.39649337557191366;
    tmp_msg_0.z = 0.7721150453250564;
    tmp_msg_0.t = 0.8753375750871049;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OWXXZAKQNTJJPXTOWRERQHPQQORXKCFJJNUNMXBYDBYKIGGOEMYDFF");

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
    msg.setTimeStamp(0.5871628803810829);
    msg.setSource(1534U);
    msg.setSourceEntity(248U);
    msg.setDestination(28039U);
    msg.setDestinationEntity(243U);
    msg.timeout = 45665U;
    msg.lat = 0.18505563547848247;
    msg.lon = 0.5305024928292003;
    msg.z = 0.267868161392827;
    msg.z_units = 221U;
    msg.speed = 0.7636833025172332;
    msg.speed_units = 129U;
    msg.custom.assign("QLNSUXZSOOETVBSKUIAIMTEGFRRCOHYFAHACWTZPXHQQ");

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
    msg.setTimeStamp(0.8043949701187364);
    msg.setSource(29036U);
    msg.setSourceEntity(121U);
    msg.setDestination(54049U);
    msg.setDestinationEntity(237U);
    msg.timeout = 28303U;
    msg.lat = 0.659310759480752;
    msg.lon = 0.7774897069098964;
    msg.z = 0.5095459376377279;
    msg.z_units = 226U;
    msg.speed = 0.181357348203241;
    msg.speed_units = 74U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.06985644546971947;
    tmp_msg_0.y = 0.7765850472182756;
    tmp_msg_0.z = 0.3565553807703413;
    tmp_msg_0.t = 0.1475840845524734;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PUIXKJHBQWNYNXLYQNUQVVWFCKEOSHPDEFUKIEEASQMVXOQRXLBLPSSMVPQDZGCRUFGVEIUJOYJZBNKXLRAEUZHDCIFLFTGDOQRVZGT");

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
    msg.setTimeStamp(0.6007226823296109);
    msg.setSource(5773U);
    msg.setSourceEntity(252U);
    msg.setDestination(2872U);
    msg.setDestinationEntity(132U);
    msg.x = 0.07220463358425355;
    msg.y = 0.10620311938200933;
    msg.z = 0.8232583844695746;
    msg.t = 0.058714781753057776;

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
    msg.setTimeStamp(0.33651992285751386);
    msg.setSource(13331U);
    msg.setSourceEntity(167U);
    msg.setDestination(25070U);
    msg.setDestinationEntity(47U);
    msg.x = 0.003545671385687732;
    msg.y = 0.6970687882566952;
    msg.z = 0.03228377556717643;
    msg.t = 0.6158717511509186;

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
    msg.setTimeStamp(0.9926706356619198);
    msg.setSource(38641U);
    msg.setSourceEntity(238U);
    msg.setDestination(18183U);
    msg.setDestinationEntity(3U);
    msg.x = 0.7115861602555489;
    msg.y = 0.3575173366464235;
    msg.z = 0.46550492221913475;
    msg.t = 0.5954260024887214;

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
    msg.setTimeStamp(0.06164187814994626);
    msg.setSource(57506U);
    msg.setSourceEntity(82U);
    msg.setDestination(50515U);
    msg.setDestinationEntity(106U);
    msg.timeout = 23777U;
    msg.name.assign("CKZUQURYGZOJVKTSWUYGNROMOWFMZTYHODLRPITSWVOSWSSEJNYLHTWOMJTEJQZ");
    msg.custom.assign("MHWBKAMAISXOMYKERDLWESCFWROFJY");

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
    msg.setTimeStamp(0.8352466957197766);
    msg.setSource(53345U);
    msg.setSourceEntity(64U);
    msg.setDestination(48902U);
    msg.setDestinationEntity(117U);
    msg.timeout = 51928U;
    msg.name.assign("DPSHXDQMQXSIHABEZOBQUZPLQHRPKDBJEKVCNCWREAUZCSHUNXGBNWLDVZKYSWWTETCHAFAKTQGEBYJAGCBFIRKGYSHXKFQUIGSXBSJZNEIRRGKVQMUPXAOQLYO");
    msg.custom.assign("ILLYGDUAVVQZYXLJHRNCDTAJSLWDBSGBQEDPESLEEVTCVODQRLBFUHTSVNQXMSENCFRTZAVUXNJYBXXKHUYJTRAPAVPBD");

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
    msg.setTimeStamp(0.5196310167839316);
    msg.setSource(18168U);
    msg.setSourceEntity(168U);
    msg.setDestination(43793U);
    msg.setDestinationEntity(145U);
    msg.timeout = 41227U;
    msg.name.assign("HXGJNUSANRGYMUNGXVKBEHOSLVVIASQJLQCPBFYPIEUXDDCPIMXAOJRENLMFQFTHZHXJJZSFWYMOAKXUVLCJWZWIADDORFRPKCAFWMTEFOZOASCVHQFWPINXEQYDNUBDQUZHHRDTQBDFJBPBOLZTAPKYQSOGDMNTVDGUCNYKBSYWMVK");
    msg.custom.assign("LTCUVLBHOJNRNJZDJAVSMYGLTIJBJKSCAKHBEFAGNVXYIZDWSCIJEXCLRQTIRKQFRUWVGYNZSRJGQETTTEMOOWPLQWABYUFIPKGGPQZLOFNXWTHVFFPBHNVPCXNDJMAOOHSSSKVKTRALEKXSUPECUAPZQGFDZSCGYTAXKTMMHMOBOALFHORIPUVDRCQBDNZEGJUCIEGWDEKEIMHAHWFLBOQUIWPSVBYDZYZQDXUYYIKNCJQZLMBX");

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
    msg.setTimeStamp(0.8939635933227115);
    msg.setSource(56222U);
    msg.setSourceEntity(171U);
    msg.setDestination(64778U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.5111951900552734;
    msg.lon = 0.5617778883085838;
    msg.z = 0.2427845517910816;
    msg.z_units = 130U;
    msg.speed = 0.08236467226921607;
    msg.speed_units = 201U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8445448835619748;
    tmp_msg_0.y = 0.1635854538950774;
    tmp_msg_0.z = 0.6493296220458468;
    tmp_msg_0.t = 0.1369592003079726;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7442833822990003;
    msg.custom.assign("RNOHGZNPTEVJMITBHLVIWDVZZJVFRDFKIYDILPCTHQOGSCGQGXTHUOCRSNLWZSXCF");

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
    msg.setTimeStamp(0.4939973171353924);
    msg.setSource(30989U);
    msg.setSourceEntity(137U);
    msg.setDestination(29481U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.5772808019351984;
    msg.lon = 0.3338721491180813;
    msg.z = 0.09255588894413591;
    msg.z_units = 32U;
    msg.speed = 0.6434775836920353;
    msg.speed_units = 101U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3176676151513501;
    tmp_msg_0.y = 0.14432732331261866;
    tmp_msg_0.z = 0.29193518890963444;
    tmp_msg_0.t = 0.15287879167025042;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.22084037850486282;
    msg.custom.assign("BHDQNJGDTBDZWEJZGRPYCMWKVCWMOSTSQEXGFUVYLP");

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
    msg.setTimeStamp(0.5637468301267258);
    msg.setSource(17150U);
    msg.setSourceEntity(134U);
    msg.setDestination(49250U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.909401413208727;
    msg.lon = 0.8310587389614933;
    msg.z = 0.20097265406404052;
    msg.z_units = 141U;
    msg.speed = 0.4387996644441301;
    msg.speed_units = 201U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10210U;
    tmp_msg_0.off_x = 0.64445738336083;
    tmp_msg_0.off_y = 0.45431393482867755;
    tmp_msg_0.off_z = 0.9278704110505925;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7737890312328225;
    msg.custom.assign("FBUHPFUOOAHKNCZFOOKUKQXLFDXXDXWSSFNLPLPHGQCCPNPCIINJXRUSEJLGRGJTMSWNQLYYZISRJABDPKGCFGOQVCUVQPWBLZEQINWIDFNXLHCEMLYKDJRDJRTZRQEDYBSVNPOTYWHIHPTIMAIXABYRSMWBRVGQAUMKAMUBVMBYGYKQZAUJKADZZFAVUBALOQWUBXVESHDCZTIMEY");

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
    msg.setTimeStamp(0.48692993332171286);
    msg.setSource(57562U);
    msg.setSourceEntity(3U);
    msg.setDestination(52964U);
    msg.setDestinationEntity(52U);
    msg.vid = 35282U;
    msg.off_x = 0.2862289381658977;
    msg.off_y = 0.8233739228002616;
    msg.off_z = 0.429914096821161;

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
    msg.setTimeStamp(0.8769131861008854);
    msg.setSource(18978U);
    msg.setSourceEntity(204U);
    msg.setDestination(23741U);
    msg.setDestinationEntity(94U);
    msg.vid = 40563U;
    msg.off_x = 0.6927300199783266;
    msg.off_y = 0.8792269840813801;
    msg.off_z = 0.9660452835643105;

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
    msg.setTimeStamp(0.11055376300240782);
    msg.setSource(43435U);
    msg.setSourceEntity(228U);
    msg.setDestination(31061U);
    msg.setDestinationEntity(71U);
    msg.vid = 52234U;
    msg.off_x = 0.7769181360362729;
    msg.off_y = 0.29818713021986;
    msg.off_z = 0.8210920254993679;

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
    msg.setTimeStamp(0.38928250867483216);
    msg.setSource(33225U);
    msg.setSourceEntity(70U);
    msg.setDestination(59183U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.11958903439705115);
    msg.setSource(15455U);
    msg.setSourceEntity(18U);
    msg.setDestination(33410U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.9425881163823161);
    msg.setSource(46242U);
    msg.setSourceEntity(223U);
    msg.setDestination(22631U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.27103277105681267);
    msg.setSource(40557U);
    msg.setSourceEntity(179U);
    msg.setDestination(9241U);
    msg.setDestinationEntity(145U);
    msg.mid = 59760U;

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
    msg.setTimeStamp(0.9234863497535457);
    msg.setSource(1048U);
    msg.setSourceEntity(200U);
    msg.setDestination(19632U);
    msg.setDestinationEntity(29U);
    msg.mid = 26358U;

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
    msg.setTimeStamp(0.5017998979592616);
    msg.setSource(39614U);
    msg.setSourceEntity(121U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(187U);
    msg.mid = 31789U;

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
    msg.setTimeStamp(0.06571586522038442);
    msg.setSource(23313U);
    msg.setSourceEntity(212U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(55U);
    msg.state = 194U;
    msg.eta = 5628U;
    msg.info.assign("WAUPLLXVEWQETGHVUUYQPJCOQXXRYHMIRRCDVMLRBUDZCM");

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
    msg.setTimeStamp(0.09974156438602555);
    msg.setSource(5728U);
    msg.setSourceEntity(109U);
    msg.setDestination(38646U);
    msg.setDestinationEntity(46U);
    msg.state = 31U;
    msg.eta = 12584U;
    msg.info.assign("ZLOZBPBXFIHFCXSRWWYWRICJNHMDSFLYOXWISHQMLRPKWEMHWZMFZGVRXLJSYQFOHMYBQAIJAPAJTNKKYNGDDCDRZGJWOJWEIAQDKVOUQOPABBKZGYOLEMXZEVTCVRXWYRFVEP");

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
    msg.setTimeStamp(0.9914580158295833);
    msg.setSource(40322U);
    msg.setSourceEntity(27U);
    msg.setDestination(7932U);
    msg.setDestinationEntity(18U);
    msg.state = 160U;
    msg.eta = 65073U;
    msg.info.assign("MZLLVONDSPXALQVCHUL");

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
    msg.setTimeStamp(0.35740875460309274);
    msg.setSource(44890U);
    msg.setSourceEntity(218U);
    msg.setDestination(3291U);
    msg.setDestinationEntity(86U);
    msg.system = 941U;
    msg.duration = 3737U;
    msg.speed = 0.03168473230739832;
    msg.speed_units = 249U;
    msg.x = 0.5869067645603802;
    msg.y = 0.7116549817470098;
    msg.z = 0.7442122897112518;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.06699491891381903);
    msg.setSource(40229U);
    msg.setSourceEntity(153U);
    msg.setDestination(13109U);
    msg.setDestinationEntity(192U);
    msg.system = 32761U;
    msg.duration = 64100U;
    msg.speed = 0.7559228092727379;
    msg.speed_units = 223U;
    msg.x = 0.40451252840956353;
    msg.y = 0.47459094842900207;
    msg.z = 0.2427050028768094;
    msg.z_units = 199U;

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
    msg.setTimeStamp(0.1316633275797242);
    msg.setSource(38766U);
    msg.setSourceEntity(56U);
    msg.setDestination(1332U);
    msg.setDestinationEntity(82U);
    msg.system = 29556U;
    msg.duration = 16722U;
    msg.speed = 0.3608829422565175;
    msg.speed_units = 53U;
    msg.x = 0.3453913379436171;
    msg.y = 0.5567301978893722;
    msg.z = 0.6670927184804161;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.814006130185951);
    msg.setSource(59610U);
    msg.setSourceEntity(136U);
    msg.setDestination(22278U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.7930295412897524;
    msg.lon = 0.6547454007286639;
    msg.speed = 0.34208304451079186;
    msg.speed_units = 76U;
    msg.duration = 58804U;
    msg.sys_a = 36013U;
    msg.sys_b = 42734U;
    msg.move_threshold = 0.3461923038171194;

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
    msg.setTimeStamp(0.6684628488717745);
    msg.setSource(43887U);
    msg.setSourceEntity(37U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.3555956351096121;
    msg.lon = 0.07025116601591097;
    msg.speed = 0.9344546136475729;
    msg.speed_units = 70U;
    msg.duration = 32072U;
    msg.sys_a = 3577U;
    msg.sys_b = 26851U;
    msg.move_threshold = 0.8868187877618636;

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
    msg.setTimeStamp(0.13274731938247364);
    msg.setSource(7937U);
    msg.setSourceEntity(196U);
    msg.setDestination(2654U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.6451522055931782;
    msg.lon = 0.6195717026732199;
    msg.speed = 0.4425347265841637;
    msg.speed_units = 49U;
    msg.duration = 27068U;
    msg.sys_a = 13154U;
    msg.sys_b = 47193U;
    msg.move_threshold = 0.7463411284706563;

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
    msg.setTimeStamp(0.1774297978576218);
    msg.setSource(4962U);
    msg.setSourceEntity(241U);
    msg.setDestination(57658U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.8042719113953702;
    msg.lon = 0.65380908681113;
    msg.z = 0.48499187690501067;
    msg.z_units = 249U;
    msg.speed = 0.35471437665727024;
    msg.speed_units = 5U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6164625825705733;
    tmp_msg_0.lon = 0.8430055134606759;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PBFKVEGNVQGUDBXORIREFKSPWLAQRQATBNUKIYOHVJXREABNRCKRFWJXNHJPHNSBCZHTBJXCQSOAJQZYPUQEWKHVJZEAAZUONSIOLSXJGOELMOVLIDTJMMTHUXGGTHQVPMCKDSSOYFZKRWUWMLPEFNKQWBYWRPWIEMIXTSGBWLZHVYACMXBGUYKFAFDDEO");

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
    msg.setTimeStamp(0.8645270730636895);
    msg.setSource(52759U);
    msg.setSourceEntity(0U);
    msg.setDestination(2834U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.9553860408066577;
    msg.lon = 0.09961607704355879;
    msg.z = 0.5354881177623643;
    msg.z_units = 85U;
    msg.speed = 0.8982661238597262;
    msg.speed_units = 184U;
    msg.custom.assign("WFDPOZVCKRRKCAQVNCGJCDGHIDQAERUBEPJDOLSDZGREETCHKOWMVAKOQZHNVLBORZMXJAMDWJIPLKUDAAMTCOMSS");

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
    msg.setTimeStamp(0.6747412922917837);
    msg.setSource(11199U);
    msg.setSourceEntity(201U);
    msg.setDestination(27237U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.11883482658602151;
    msg.lon = 0.9295423705972372;
    msg.z = 0.0451626042497294;
    msg.z_units = 22U;
    msg.speed = 0.5836434357177026;
    msg.speed_units = 173U;
    msg.custom.assign("ZHPWBONSPMKBMTMJARFZNCCZWTLDJLGXNUXVLFSGIDIQQCHWGQWJIAJEZNJYFDYOKXEAZUDZDQXBKMCGTASFFSLYAVRWRLQEBUYPCIUJEVOXIFFOYDGHRETTDUVHWHYBCNCREZTFSNLCIHPAAOGXWVSZXKRMPGTKWJMBPOEGLOAYPEQQEPOQHJVAVJLRDZVSFDCRUJ");

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
    msg.setTimeStamp(0.9115822639381966);
    msg.setSource(49809U);
    msg.setSourceEntity(152U);
    msg.setDestination(63749U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.07194518598834532;
    msg.lon = 0.3177571732685984;

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
    msg.setTimeStamp(0.9580631296646682);
    msg.setSource(64530U);
    msg.setSourceEntity(147U);
    msg.setDestination(33069U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.21036600819436335;
    msg.lon = 0.5425275619891498;

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
    msg.setTimeStamp(0.20048841389922412);
    msg.setSource(52065U);
    msg.setSourceEntity(141U);
    msg.setDestination(51885U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.0941799073297429;
    msg.lon = 0.5333608981030136;

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
    msg.setTimeStamp(0.26155551965225154);
    msg.setSource(20766U);
    msg.setSourceEntity(168U);
    msg.setDestination(58737U);
    msg.setDestinationEntity(212U);
    msg.timeout = 55172U;
    msg.lat = 0.1031966697499942;
    msg.lon = 0.03604827904066943;
    msg.z = 0.5106546665304771;
    msg.z_units = 57U;
    msg.pitch = 0.6423997242546228;
    msg.amplitude = 0.7420448088473732;
    msg.duration = 64549U;
    msg.speed = 0.8234099066116444;
    msg.speed_units = 241U;
    msg.radius = 0.60845107718487;
    msg.direction = 30U;
    msg.custom.assign("IQJTFLBVDIWZUZZYDXQSOAYUCPGWDGLHQKJPBICUGPPVZEDSSTCOQMSBXLBCVSUNMRANXRMFVACFEHRIFMDKF");

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
    msg.setTimeStamp(0.9483415418802088);
    msg.setSource(29941U);
    msg.setSourceEntity(143U);
    msg.setDestination(60604U);
    msg.setDestinationEntity(27U);
    msg.timeout = 19473U;
    msg.lat = 0.9223275835931005;
    msg.lon = 0.5510771679331438;
    msg.z = 0.9634289040940451;
    msg.z_units = 127U;
    msg.pitch = 0.029128625985754497;
    msg.amplitude = 0.12370384914007793;
    msg.duration = 15320U;
    msg.speed = 0.8925694074315682;
    msg.speed_units = 35U;
    msg.radius = 0.034138076633817405;
    msg.direction = 237U;
    msg.custom.assign("QWYGZBBOEHPHKFHJBMRAQQSLPZMTMKFWTYCCHZKGZQNUIYTXXMBKX");

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
    msg.setTimeStamp(0.5930457049525621);
    msg.setSource(12350U);
    msg.setSourceEntity(93U);
    msg.setDestination(39074U);
    msg.setDestinationEntity(61U);
    msg.timeout = 50030U;
    msg.lat = 0.8975069900566343;
    msg.lon = 0.29989021987665976;
    msg.z = 0.8593503516265999;
    msg.z_units = 161U;
    msg.pitch = 0.8704668713582826;
    msg.amplitude = 0.20747804005988235;
    msg.duration = 25370U;
    msg.speed = 0.7257420751946411;
    msg.speed_units = 29U;
    msg.radius = 0.8392643201229363;
    msg.direction = 149U;
    msg.custom.assign("KXUKSLDZQXENOOJIIJZMCNWTNSECXKFQJFFLZNTDTOFPRQLOQKRXRUCGLGLPJDABWKGWZBQLKWCAZYUCQZHIMMAZBYEJMM");

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
    msg.setTimeStamp(0.2902279464744473);
    msg.setSource(22492U);
    msg.setSourceEntity(89U);
    msg.setDestination(11494U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("VDIXFHRYTVBYNNNUFJOZZJORWVVRJUNEOIHICSSFNCYESMLEFKDFM");
    msg.reference_frame = 100U;
    msg.custom.assign("SELPDOYHFEKQYKRBXSKHXWLIDJZCUIWQJWZVAMVVEZGTDERADGCEIYQTWNIIYQVERWWKIONNSNTMFHLSJMWBEKFFAOGCKBBJUOBVHVFKNDJFFEKXRXTBMFYNMGPPROIVTAJPUBJOYMAEQQTEHDTHRCLPYZS");

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
    msg.setTimeStamp(0.8628066131277918);
    msg.setSource(19328U);
    msg.setSourceEntity(117U);
    msg.setDestination(11311U);
    msg.setDestinationEntity(60U);
    msg.formation_name.assign("YHAZRZTFRUESJUQOGZUKXZXWXQAWTDALHTKHIAUHQILNKFVNRVFCEYFATBQAFDMVNJRKCDFERGEPIQXVPUEZOOLRGAQDNSBHLSKOUUGGLCIBGYSOLPYJGCFRJYAJLFLLGELXANWWJBMIYGQSUZPNVNWXVHNPABWJCVQKSVSJBMYZFVJHKFUUZPTECOMKWHMHMDRIGXDEDBTJXQTKWPPBKESIDCYIVHMBIYXWOSEPZOPTMCTZINOSYMQW");
    msg.reference_frame = 196U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61971U;
    tmp_msg_0.off_x = 0.6283715700628798;
    tmp_msg_0.off_y = 0.012767973336803462;
    tmp_msg_0.off_z = 0.6810183268036043;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TNWLUTVYGIXQMUIIROBCODYUCVQJBNTWJXTWPAFVEEBWEO");

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
    msg.setTimeStamp(0.5456199289396066);
    msg.setSource(53255U);
    msg.setSourceEntity(32U);
    msg.setDestination(16586U);
    msg.setDestinationEntity(140U);
    msg.formation_name.assign("DCZETAFSEJWGHWLGEZUNKGWZXXCPHKMRMIQQKHHUDQGADTRWLROBHSNBAXHGJAGVIWXDQKVAMZLGIZSVUZKSTVCNNPINXQJVZLWPYHFEBOOACCYW");
    msg.reference_frame = 233U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57474U;
    tmp_msg_0.off_x = 0.03370459469143294;
    tmp_msg_0.off_y = 0.5813883757641248;
    tmp_msg_0.off_z = 0.34916529815052166;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ILIKPSGOCVOHMQJDVBTXVAFSAJESQDHEHXWRIRIQJZTGVUJZSRUPBSXQQFRRHMDQBKVQVXNFDWJBMZBKCRRCNVNWSAHKGULYNFIFHZCPTHXKZCHCNTOSMXNZGBYEAAJPMEEKLQIRBCFAWYPPJLMEMWMBALZNKQCXYFYALGZPOYKHUWUTQTOXSPMDVLNGNXWVJVFSRLJBTEDTOZDILNGFUPDMBJRWADXYKZODAOIUIWOGFEUUYUYL");

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
    msg.setTimeStamp(0.8422187677072257);
    msg.setSource(6854U);
    msg.setSourceEntity(194U);
    msg.setDestination(53023U);
    msg.setDestinationEntity(131U);
    msg.group_name.assign("OSDGXEUJDQBGHVDXRLLZZQPFUPTYTTUUXOSZXOPLKBKKNANLAPYMYOUEQGRULWLBGGAPRTKIRGWVXHIHONCHVJOJMAWHIPFTLCKIJRVEYBUKPCBFHNVXQWDBEUWKEZQZZPAAJUZSDIMGEZWCVLYLNOCMBOWEMSYJXHZEDMPIMMXVAFSJYBNNQGDIWOARRNWDUGHITFQPTACNNYWKA");
    msg.formation_name.assign("ZNBRRAQKAEFJGLXDMBJNTCFSNMFPOLCIZHKFMPLILRNVIVYQKHDQSIYUUPNCVUGWHJHPASEFCZAHBJJKBSEFYUEHGYFGOPSNTICVDKBHYEMGHYDKMTLAGMTAQWEZPXVJOEYMIQYJOLRXXDHEZUJGCRDLIGRAQLTXKWMPATGUKRFWGZBCPKLNEDLWCSNBJ");
    msg.plan_id.assign("EXOYMOAEEMHVIRULJPRUBEAGLADQLQJEKBURHZTZRGSGYKDYYZCKQVIXUDNLGMPKKCDDANISGSRHUOWNWWTHQWGBTUXPABIEIXEJHVCMUYZBLNWSZDYXUJMPRQDBNPESJMTTMOKHOTXFCRIOZFCJFFXATIVIHGJOQAGWIYFYUKRNXGONACKLVGM");
    msg.description.assign("WDIZAZTCRBSTDHYPKHXJSRRGIQFQXWMLHFDOIPZVNUHJAMHFGFNYTCUERMXPTPMEEJSJVUOATEZOYWXIQROFITFYPHJIPOVTYRHGUPFKMQVXODLSOMQUVHOVXKBASKEVMQKIA");
    msg.leader_speed = 0.6276531068587199;
    msg.leader_bank_lim = 0.8466743255684335;
    msg.pos_sim_err_lim = 0.802058461026608;
    msg.pos_sim_err_wrn = 0.3343842827355842;
    msg.pos_sim_err_timeout = 12265U;
    msg.converg_max = 0.3934975260930421;
    msg.converg_timeout = 6106U;
    msg.comms_timeout = 11466U;
    msg.turb_lim = 0.859234970602626;
    msg.custom.assign("HWXUICVUNLDPRXTH");

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
    msg.setTimeStamp(0.8576085093671914);
    msg.setSource(32727U);
    msg.setSourceEntity(84U);
    msg.setDestination(29412U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("ZHJIOCXUJGNBMFGKIRYHKDAVUTQTVKXWFNIGQMLCTMMLASAFMJEUGWSBUGUUVJLQYZHPQTNWRWABWBNPBYYKS");
    msg.formation_name.assign("QIVNCTXKQACBPBEKGHWDRZPCYOGNXCYLBGQYRALEXQHIBRZZNWISKMEUODUVAHPYJXOIMCZJWPLOMQEDEUHTTFFSZSRSXAMGNMEJYVUFYVUWI");
    msg.plan_id.assign("DOKBTIQSKBOFKXDPPRRPFNEGUEUTPNJAUESXBHLYKBRXRFFHLWOTWYDBCBUMHGUWPTDIIZVASMJYWJHAIHYHWFJYRCMEGJHEIGRDQVRBZMNKUINFKCQAMAVPGZNCY");
    msg.description.assign("DQQVLHACJMUGFYFRPDMDMHWYLVQGJD");
    msg.leader_speed = 0.6393399314712918;
    msg.leader_bank_lim = 0.4882436330987979;
    msg.pos_sim_err_lim = 0.24449296144794475;
    msg.pos_sim_err_wrn = 0.4195543430605003;
    msg.pos_sim_err_timeout = 14423U;
    msg.converg_max = 0.18840673870090185;
    msg.converg_timeout = 54101U;
    msg.comms_timeout = 46376U;
    msg.turb_lim = 0.5635732922295759;
    msg.custom.assign("EOVGPMSEWUQTFCKIBNOUVGFECWGNMBQYLCWAMGZFVULJPQADOEHAYNDJAIAIKPWNOTBYXHLVPSSKEXXMXAYZDNVBRCDPKOYRARDNKJJISBILTMM");

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
    msg.setTimeStamp(0.5879375723343793);
    msg.setSource(63992U);
    msg.setSourceEntity(241U);
    msg.setDestination(35290U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("CJTDXLMNXLLEJSDPUBXYVZZPOFWCQJNYEFVPSKTSKQDASUYHGCWFQDKNZELX");
    msg.formation_name.assign("KHURSZLRIFQJAXNOOTTFIORZCJPDELGTXQLOKVTEIZVCWLGJHZSVFOGKMEKSUBHUQBVONTLJNPXCMHVSMDMRWEIAKPUJUVOUEBVFNEYZCQTYDAXFAIBQBSGLLHAXCIKDYNFYNDMHJEITYDIGHSBYCWXZXIFBUQNOMHBRDSMMPMUDYWGJJEYPWRTPCVLQUOBMASCFZVFPGCRKPYAQVXHXXEYDWKESTGCQZ");
    msg.plan_id.assign("PRJKXULTXRXWDEUFYDXAKJHBMZTSPMEJ");
    msg.description.assign("OAPVMHAKCHZZRBHCQZVLMEXIMLXFSJFSVQXPACHOOFXLYYIHVJFKUTE");
    msg.leader_speed = 0.5254203924973719;
    msg.leader_bank_lim = 0.6834330835393926;
    msg.pos_sim_err_lim = 0.08105043362700237;
    msg.pos_sim_err_wrn = 0.7325028382553909;
    msg.pos_sim_err_timeout = 13426U;
    msg.converg_max = 0.006596674852353934;
    msg.converg_timeout = 32547U;
    msg.comms_timeout = 38130U;
    msg.turb_lim = 0.8648782726649038;
    msg.custom.assign("HQTZZVVWHYZAXPEGTPIGCDAEZWARXYOETJBIFGHPCEKQFRZCPXBVSBVNLHJRCCIJNUERCJMSZTNQLIPDVTKLLHAAXHOLTGBBMLEEKIVDYWK");

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
    msg.setTimeStamp(0.4024643257893201);
    msg.setSource(44534U);
    msg.setSourceEntity(197U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(216U);
    msg.control_src = 25037U;
    msg.control_ent = 217U;
    msg.timeout = 0.018942114236653818;
    msg.loiter_radius = 0.5336281393374683;
    msg.altitude_interval = 0.4209778919191385;

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
    msg.setTimeStamp(0.7539745040687552);
    msg.setSource(7710U);
    msg.setSourceEntity(16U);
    msg.setDestination(56947U);
    msg.setDestinationEntity(40U);
    msg.control_src = 52700U;
    msg.control_ent = 186U;
    msg.timeout = 0.2502284310823073;
    msg.loiter_radius = 0.8532369638688339;
    msg.altitude_interval = 0.06617483691997073;

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
    msg.setTimeStamp(0.605398868370368);
    msg.setSource(21904U);
    msg.setSourceEntity(184U);
    msg.setDestination(33338U);
    msg.setDestinationEntity(237U);
    msg.control_src = 50511U;
    msg.control_ent = 20U;
    msg.timeout = 0.6269798282461672;
    msg.loiter_radius = 0.8982990296580367;
    msg.altitude_interval = 0.7387860422692742;

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
    msg.setTimeStamp(0.9078566042450193);
    msg.setSource(58441U);
    msg.setSourceEntity(113U);
    msg.setDestination(38385U);
    msg.setDestinationEntity(105U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.40357163562243914;
    tmp_msg_0.speed_units = 125U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7719797714667787;
    tmp_msg_1.z_units = 16U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7183082974098243;
    msg.lon = 0.02383939676165092;
    msg.radius = 0.4792203750855921;

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
    msg.setTimeStamp(0.20822836436593484);
    msg.setSource(18764U);
    msg.setSourceEntity(197U);
    msg.setDestination(41576U);
    msg.setDestinationEntity(110U);
    msg.flags = 251U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6731916904491787;
    tmp_msg_0.speed_units = 13U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.06662367874496222;
    tmp_msg_1.z_units = 70U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.20835077700363924;
    msg.lon = 0.27568376102546976;
    msg.radius = 0.693653968034131;

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
    msg.setTimeStamp(0.9719021095270172);
    msg.setSource(53162U);
    msg.setSourceEntity(95U);
    msg.setDestination(50908U);
    msg.setDestinationEntity(8U);
    msg.flags = 169U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20448835168324542;
    tmp_msg_0.speed_units = 186U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.749502209092564;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.26899691213190213;
    msg.lon = 0.7105441375731959;
    msg.radius = 0.18228104097754205;

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
    msg.setTimeStamp(0.34965871084914735);
    msg.setSource(54285U);
    msg.setSourceEntity(222U);
    msg.setDestination(13587U);
    msg.setDestinationEntity(95U);
    msg.control_src = 45501U;
    msg.control_ent = 129U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 18U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9509076939675466;
    tmp_tmp_msg_0_0.speed_units = 182U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9835879072690433;
    tmp_tmp_msg_0_1.z_units = 250U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13552217780954023;
    tmp_msg_0.lon = 0.5591105621959053;
    tmp_msg_0.radius = 0.4117854071757898;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 145U;

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
    msg.setTimeStamp(0.7746540215145056);
    msg.setSource(53537U);
    msg.setSourceEntity(204U);
    msg.setDestination(3559U);
    msg.setDestinationEntity(139U);
    msg.control_src = 64616U;
    msg.control_ent = 74U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.037576792696574546;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.46223781390008056;
    tmp_tmp_msg_0_1.z_units = 73U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.952202967028505;
    tmp_msg_0.lon = 0.37189205501449496;
    tmp_msg_0.radius = 0.9951953823844255;
    msg.reference.set(tmp_msg_0);
    msg.state = 15U;
    msg.proximity = 23U;

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
    msg.setTimeStamp(0.21247357095120534);
    msg.setSource(24363U);
    msg.setSourceEntity(248U);
    msg.setDestination(49052U);
    msg.setDestinationEntity(81U);
    msg.control_src = 63554U;
    msg.control_ent = 147U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 201U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.846571124948346;
    tmp_tmp_msg_0_0.speed_units = 177U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6883662210635635;
    tmp_tmp_msg_0_1.z_units = 88U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.03772470225814628;
    tmp_msg_0.lon = 0.5498635207524368;
    tmp_msg_0.radius = 0.44040425581990517;
    msg.reference.set(tmp_msg_0);
    msg.state = 153U;
    msg.proximity = 80U;

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
    msg.setTimeStamp(0.7462805280419161);
    msg.setSource(10685U);
    msg.setSourceEntity(220U);
    msg.setDestination(8620U);
    msg.setDestinationEntity(122U);
    msg.ax_cmd = 0.5061027913018668;
    msg.ay_cmd = 0.048972766536234835;
    msg.az_cmd = 0.6394455345579041;
    msg.ax_des = 0.6324576547646283;
    msg.ay_des = 0.356358341223451;
    msg.az_des = 0.5315542563528275;
    msg.virt_err_x = 0.992231245072772;
    msg.virt_err_y = 0.9491152763451752;
    msg.virt_err_z = 0.9188539414915237;
    msg.surf_fdbk_x = 0.03345107538229097;
    msg.surf_fdbk_y = 0.8357985126880726;
    msg.surf_fdbk_z = 0.0680769491484291;
    msg.surf_unkn_x = 0.7060238322070409;
    msg.surf_unkn_y = 0.9293913300656435;
    msg.surf_unkn_z = 0.6547151807190472;
    msg.ss_x = 0.9082334962972481;
    msg.ss_y = 0.39215454594714605;
    msg.ss_z = 0.2498138118238532;

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
    msg.setTimeStamp(0.46637335331951024);
    msg.setSource(41229U);
    msg.setSourceEntity(31U);
    msg.setDestination(62129U);
    msg.setDestinationEntity(48U);
    msg.ax_cmd = 0.6827686040238331;
    msg.ay_cmd = 0.08773164183604265;
    msg.az_cmd = 0.5896517021739616;
    msg.ax_des = 0.09612245611466097;
    msg.ay_des = 0.4832267793852112;
    msg.az_des = 0.11121184078216984;
    msg.virt_err_x = 0.18483837281100501;
    msg.virt_err_y = 0.5748146393302243;
    msg.virt_err_z = 0.9754008321703813;
    msg.surf_fdbk_x = 0.4175239491879037;
    msg.surf_fdbk_y = 0.8280975808515876;
    msg.surf_fdbk_z = 0.608627546583965;
    msg.surf_unkn_x = 0.15184411150998545;
    msg.surf_unkn_y = 0.08339140122766842;
    msg.surf_unkn_z = 0.285916413767355;
    msg.ss_x = 0.7532309891264934;
    msg.ss_y = 0.7460558513935414;
    msg.ss_z = 0.2543970460125201;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OWVCTUJJZXIWMLFRGGLBOUMLDFECXAPLWINSKBKSJRPRQFXGAHRGSQMVNTILLZHATFHSPKXJFWALK");
    tmp_msg_0.dist = 0.5106223073705026;
    tmp_msg_0.err = 0.5232604353536052;
    tmp_msg_0.ctrl_imp = 0.6028975795431898;
    tmp_msg_0.rel_dir_x = 0.6832580518131126;
    tmp_msg_0.rel_dir_y = 0.5629912656593163;
    tmp_msg_0.rel_dir_z = 0.7880407321326239;
    tmp_msg_0.err_x = 0.18732213160624722;
    tmp_msg_0.err_y = 0.132524339971148;
    tmp_msg_0.err_z = 0.9828826938559573;
    tmp_msg_0.rf_err_x = 0.47158611117755045;
    tmp_msg_0.rf_err_y = 0.7872635340668387;
    tmp_msg_0.rf_err_z = 0.6649695223708364;
    tmp_msg_0.rf_err_vx = 0.7289658900697322;
    tmp_msg_0.rf_err_vy = 0.9743286404298795;
    tmp_msg_0.rf_err_vz = 0.08605026981838937;
    tmp_msg_0.ss_x = 0.9345257178867641;
    tmp_msg_0.ss_y = 0.8384078716441208;
    tmp_msg_0.ss_z = 0.49650932045129126;
    tmp_msg_0.virt_err_x = 0.7758126742470282;
    tmp_msg_0.virt_err_y = 0.021756808113770343;
    tmp_msg_0.virt_err_z = 0.7440344198838581;
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
    msg.setTimeStamp(0.334667382320885);
    msg.setSource(32507U);
    msg.setSourceEntity(11U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(21U);
    msg.ax_cmd = 0.07520763336765146;
    msg.ay_cmd = 0.3647992662646746;
    msg.az_cmd = 0.15209734626260263;
    msg.ax_des = 0.6882387551406888;
    msg.ay_des = 0.934247699137656;
    msg.az_des = 0.06463313470351484;
    msg.virt_err_x = 0.17683349214112976;
    msg.virt_err_y = 0.2509516010739272;
    msg.virt_err_z = 0.42926176505098157;
    msg.surf_fdbk_x = 0.23351609915710814;
    msg.surf_fdbk_y = 0.38260225389279745;
    msg.surf_fdbk_z = 0.7877679703874033;
    msg.surf_unkn_x = 0.16782393450587274;
    msg.surf_unkn_y = 0.4517121138466419;
    msg.surf_unkn_z = 0.11466409438583403;
    msg.ss_x = 0.6265868940957513;
    msg.ss_y = 0.9459581961885659;
    msg.ss_z = 0.2571480461095562;

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
    msg.setTimeStamp(0.7251730537988023);
    msg.setSource(915U);
    msg.setSourceEntity(64U);
    msg.setDestination(26032U);
    msg.setDestinationEntity(223U);
    msg.s_id.assign("OVENUYJLVEBRHGLSUJGTILWFNZZATHCCBGXBPMIOTUZKFCJHFBRLPGKEIUPTWJDDMQCLEANYPGNJNKQSDVAFIZLLNCYTNWQXGAJEVQZAUVDBIWTFKSDDNFRFKYYHXOLHZMYAIQILOAKQUDFXSCOMZCEXUVMRECENIPHWGRJPRJRHWWQYOXODJXYVRAVKWVOMBFHOVZAMRFBBHGGQGHKUARSSQDYUWLUWEMPPCQCIMXXKJTT");
    msg.dist = 0.9340418321394905;
    msg.err = 0.545816325522426;
    msg.ctrl_imp = 0.7189637059247852;
    msg.rel_dir_x = 0.39365432043714177;
    msg.rel_dir_y = 0.13695781100774884;
    msg.rel_dir_z = 0.8067775055667659;
    msg.err_x = 0.6278285713402004;
    msg.err_y = 0.6879918284261922;
    msg.err_z = 0.5694513577147552;
    msg.rf_err_x = 0.38416362740050336;
    msg.rf_err_y = 0.8169667838176874;
    msg.rf_err_z = 0.3657246351264233;
    msg.rf_err_vx = 0.7316429001078691;
    msg.rf_err_vy = 0.7743099858457503;
    msg.rf_err_vz = 0.5907189819658647;
    msg.ss_x = 0.5338902339779713;
    msg.ss_y = 0.6085758527258524;
    msg.ss_z = 0.6675523138289128;
    msg.virt_err_x = 0.928388746649102;
    msg.virt_err_y = 0.05418994564251112;
    msg.virt_err_z = 0.8955792292036119;

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
    msg.setTimeStamp(0.833012044203627);
    msg.setSource(40982U);
    msg.setSourceEntity(1U);
    msg.setDestination(51874U);
    msg.setDestinationEntity(154U);
    msg.s_id.assign("XGYTAUBFOMYDNTLYOIUJDYAKEFGMQMZLTYXHJWIOXYSOIPMVOVELBWHSEPFGCLCCPKTRHRXWCSGTFSAJUPJXKURPWONSKZQLUFRWGZVCLQNGKHXDGXULLNJPXYNAEKSWCCNDWKMIEZ");
    msg.dist = 0.34111537167254624;
    msg.err = 0.23270655348381908;
    msg.ctrl_imp = 0.272686548123542;
    msg.rel_dir_x = 0.06781638627016051;
    msg.rel_dir_y = 0.12665366691682933;
    msg.rel_dir_z = 0.2120796328062955;
    msg.err_x = 0.9511735511461311;
    msg.err_y = 0.26048981714658126;
    msg.err_z = 0.5979574241052625;
    msg.rf_err_x = 0.5697088441161999;
    msg.rf_err_y = 0.6125273364310647;
    msg.rf_err_z = 0.4146428633012519;
    msg.rf_err_vx = 0.5449640037374738;
    msg.rf_err_vy = 0.5601675462478111;
    msg.rf_err_vz = 0.21320829491996762;
    msg.ss_x = 0.7945039674299459;
    msg.ss_y = 0.7236249188870963;
    msg.ss_z = 0.7545884089253009;
    msg.virt_err_x = 0.4948611149385098;
    msg.virt_err_y = 0.4507850720855492;
    msg.virt_err_z = 0.7723602406793658;

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
    msg.setTimeStamp(0.31171048809308066);
    msg.setSource(25603U);
    msg.setSourceEntity(231U);
    msg.setDestination(49252U);
    msg.setDestinationEntity(236U);
    msg.s_id.assign("ZLNJUWOBFWMYCYYYQXJKTLSZBKXVZMMRGOZIZPGDDTDCFYRLZSEXNWFKPCPGSIOKHMXZVOHWIYUQMKTR");
    msg.dist = 0.7261557391305877;
    msg.err = 0.6825614133369434;
    msg.ctrl_imp = 0.7972305020913526;
    msg.rel_dir_x = 0.8351960506228475;
    msg.rel_dir_y = 0.603062961188903;
    msg.rel_dir_z = 0.7733364331444466;
    msg.err_x = 0.7381960112614616;
    msg.err_y = 0.37977863734856754;
    msg.err_z = 0.49856588356574827;
    msg.rf_err_x = 0.06284289373232088;
    msg.rf_err_y = 0.25503619756026386;
    msg.rf_err_z = 0.6402024018979244;
    msg.rf_err_vx = 0.7692446080282421;
    msg.rf_err_vy = 0.48880961480447727;
    msg.rf_err_vz = 0.0937007977358314;
    msg.ss_x = 0.8160424896745813;
    msg.ss_y = 0.9131771015775845;
    msg.ss_z = 0.46127751214183643;
    msg.virt_err_x = 0.18098082458036158;
    msg.virt_err_y = 0.8594635358742764;
    msg.virt_err_z = 0.9397927014802906;

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
    msg.setTimeStamp(0.5102878577609194);
    msg.setSource(58382U);
    msg.setSourceEntity(228U);
    msg.setDestination(29609U);
    msg.setDestinationEntity(170U);
    msg.timeout = 2325U;
    msg.rpm = 0.31691615073738977;
    msg.direction = 109U;
    msg.custom.assign("GBPVZBQELYMRNXFOOORQMKTVWFYTYSGOGHFBQLLJFHIAMNTWRGKSIIQRLJXCNHDUZWIUJHXADYQRKHSBKPBTDJHKBVUNSEAMDWBLBPIJFASJHAYDCIUOQZYMULXUJLMARNIEUTQKELAGYOCDPZWKWAZCVVCZZWRVFWUTGXSCVTFWQGVPCOJXRMWM");

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
    msg.setTimeStamp(0.40271886020989667);
    msg.setSource(20818U);
    msg.setSourceEntity(171U);
    msg.setDestination(41948U);
    msg.setDestinationEntity(200U);
    msg.timeout = 17600U;
    msg.rpm = 0.6527377345861256;
    msg.direction = 108U;
    msg.custom.assign("TGTJALDQGCUQVNZLTNTIXWMIZVQFDKLUMMFFVEBXKOMXYWDPYMRONFEXCQQPSDIAFKPVWQOHVALDMEHEMZIHQRUWXU");

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
    msg.setTimeStamp(0.870364511673846);
    msg.setSource(46516U);
    msg.setSourceEntity(250U);
    msg.setDestination(56781U);
    msg.setDestinationEntity(159U);
    msg.timeout = 942U;
    msg.rpm = 0.9122805581453225;
    msg.direction = 20U;
    msg.custom.assign("XQETSLORFENGXMLBTUATBRCTJBGMLQKWBFWKYCGJZGHOYZXTOVBSOOFYAODADIRTWUJPDEWCAVVAHEBFCCPDPIYRTVXHJLXAVWQSAEWXNJWIHQUVZUGTVQKSDPLHQRZNKONVJXZPCIFNUFXQDQTPYNOCLERMQYBIGUKPCVAYEIMCGMOBRHFSZFKKYUNMLZSVOXRDKLARMKPSGDFYSCLLEFNUGDINEWPBHRZUZTZWXYUIM");

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
    msg.setTimeStamp(0.8539305783246717);
    msg.setSource(53946U);
    msg.setSourceEntity(160U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("ODUSSYPMRTLLZZFQLQWSAYMFBRWCMCPLQWATBHVJWSRRRTZQUXGUFQVYMBBNOFEIHOAIQCZPWMNCOWSKHYXGBHWAHLKKHARXGTYHCXKHQTJRNKECPOWDSDVWCYERUPJTSJVBZMAFXEXPVOFXNYOXKJGDECGEIJVVNZKIDBGZHBIRKHEUOZNDNCVADIMPMTBUPFKUKTGLDFGIZGMSFLEDJOAOIGDEFLY");
    msg.type = 77U;
    msg.op = 82U;
    msg.group_name.assign("IKJWKQVTENFDRYCBBGTXVLQODHKQXCUYLVHEMEFXSUWWWKBJMPTNWIOSLZKPHEUKFVBOCEEYFZUGJJXRSY");
    msg.plan_id.assign("RFIRAXMUQCSDZEIUSHZENYTLSYECENIZVQALBVMTZIMVNWKLPXPYHNOXZUXQCIZRAFXJQTQFTSQNFZPORDTPARHPBKJGWURUBLKRATK");
    msg.description.assign("CAYLDRQLEZUBMKZPBFVYQQFADQIORUFZKGKIZWXBOCCYQJZZDQGXMNBYKOCDYSUXKROGJARO");
    msg.reference_frame = 59U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59029U;
    tmp_msg_0.off_x = 0.8626811491880712;
    tmp_msg_0.off_y = 0.6999864624391281;
    tmp_msg_0.off_z = 0.5320744902579873;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2012118916851433;
    msg.leader_speed_min = 0.7728806668722316;
    msg.leader_speed_max = 0.2600322390606181;
    msg.leader_alt_min = 0.056980460934893506;
    msg.leader_alt_max = 0.22842905587026419;
    msg.pos_sim_err_lim = 0.9978774344184704;
    msg.pos_sim_err_wrn = 0.3382066099138178;
    msg.pos_sim_err_timeout = 49714U;
    msg.converg_max = 0.25099796988802936;
    msg.converg_timeout = 7900U;
    msg.comms_timeout = 32642U;
    msg.turb_lim = 0.04701625863538039;
    msg.custom.assign("XJYPDBUCVQEDASJFDXNTKEDHUBQTSGIAZPWXEYKRXCYIFCXVEKQFMNHWTYGPLSFCBRRPOLVLJJHIVCHNMQFXXPOBZGUOZPWANGVZZCRIUSTXAKJRFFWJBARPQGBPOSCVMMPRMQOPYASZYZALEUEUKBW");

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
    msg.setTimeStamp(0.06600551847160552);
    msg.setSource(17959U);
    msg.setSourceEntity(114U);
    msg.setDestination(24677U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("TMSRXOWMCNJLAUOAAIZPIXFHFCXCSTZRPQHBKRULAGDNHJQIVEICXSTQEMYLTDYKTGJURGRZKTEYGVFFHMYWESCBNVZCZVSZCNNPWKGTRAINWQIMHQOHXTVDHFDJDUEMAPGCLDEOBDAXFKYHBLQTNPESNPJMGDBPBPBWUXLPU");
    msg.type = 140U;
    msg.op = 202U;
    msg.group_name.assign("RHMOGNGGJMHKRMWHTHQINSJQACGXFJWDKVOWJBDGZDOKPJNALGKDGAMHCKDCAMBCMSBXABRYHMZEZZRFMEOMRUQOEWTTFVVISYCABSULLINCTZQLCNHFP");
    msg.plan_id.assign("CCISXVVIYXLIQTPEQJUMODWMSIXKHDTFGQQKALTDCJWERZRSHYPOXAPZTXFKMXVNKNRZZGRHHRVUUKOLKNCGNACPPQGEZQHJSSOMBMBQNMMOVVHCBSFJFAJHLJVQDPIITWYWFJXNGDYICMOGZETGLIGWEAVNCWYLDBCRPMFKWRTTZYTWHDSZKNKUORSLDWDDAXLPNFVFPEGPZLBGXVFAUHEBFQJWOUSNZAYUYAYISUAQBBEOOICMEJL");
    msg.description.assign("IMBFMTXNJOYJJTJOXMXLXPQVAQMXVHCKWJXEUXVRKKEEIPHXGMLDWQHFVMKUHLIEDQBEYDOTNNKULHKPQXNKNHFQZAFDDGTLSFLRVFTTPSWSUEOTNBHZNZFSLPHBJEEWAHDYWR");
    msg.reference_frame = 149U;
    msg.leader_bank_lim = 0.4351639168344831;
    msg.leader_speed_min = 0.2653431740902261;
    msg.leader_speed_max = 0.9743236820274666;
    msg.leader_alt_min = 0.15046327542680704;
    msg.leader_alt_max = 0.20980100699362414;
    msg.pos_sim_err_lim = 0.5782680632879035;
    msg.pos_sim_err_wrn = 0.009568999807162637;
    msg.pos_sim_err_timeout = 10692U;
    msg.converg_max = 0.5253173055050272;
    msg.converg_timeout = 34644U;
    msg.comms_timeout = 40604U;
    msg.turb_lim = 0.7192206531443824;
    msg.custom.assign("CJWLZIOWBUNSGOWSFTTIEAAOWPPGRDTKIPTEVJFQPLERVMNKUWMJIHRRUUGUSFVZXWPCFAQGZPFAYRGMXYCYMESZDDBDDMGTKCDYZIGWBJSUNAVXDCYAXMXUYYBBQKZPHVEORZTBLHMNIJDXIHCKWHFTNVFQETXAQMHQONZIAWEERBGFKCUKOQPMOPOBRFLDHNRNLGXZBVGXIJA");

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
    msg.setTimeStamp(0.3920031712854902);
    msg.setSource(8726U);
    msg.setSourceEntity(64U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(13U);
    msg.formation_name.assign("TRQRXSEPLGVBBWGOBIIRRXAZWQCMKCMJQHORSTKNNFMPZRASYYCWLVOSIXCEDVLUZDRIVUMBABDEZROEFEXGAELSDNXNTFMQWGUZLTOQEFKXMFTANNJPUJDUYHXOVGCYADKCXIUSEPALUJWCKXAMPOWWLJJMOV");
    msg.type = 83U;
    msg.op = 147U;
    msg.group_name.assign("JPPATXENSDNWMCVUBLURYCOMRHDUGFVBWGTRBBNADIIRVQSZUPLWGDMJTOFUROYDGVXVAJPFYLVSXZFGDZMJZFWAZFQCLOMWCEKAYKBZTPMFOGERWUJRUTCQOILSLEZNAEYHQMINHJTFSASCPVJBNPKKGNQIKHQMQKCXXYUKEFHADAPLEEVIZTWRCRVJTJLJDKSMOWBLHGNSOSHUHKNDGBXXGDKVSQXBTZOHWUENIBTXMPYA");
    msg.plan_id.assign("DCRJWAXMFZHUJOHMDTMULSYSIPLSNHHWZRJFASXBIBKCTCQJBDKRJMFAVWVQKYGNLQYGXOKNIRBXZFWKLJWJKALCQLKJZKMVFNCFHMNLGTTROGYSPSCHOASWDLUBLUEYZXISKHPCEKBXIWEZXZWETOCPRAPHTIEEQUTQMLBPNZVARNJWUFVQ");
    msg.description.assign("UEGRBSAWUENDZUIEUTUJVGZQQDDANDWDDJAZGHCCUYRCVGMRAZMXEKOOHQTAMNPLEOSQZXIVJHFOFBEYPNMOVPHDCFUXPJALZTKNHZNXUWGVVVYIDHQQWDWKEYPXLOXBFTNFMGZMFEITYGYKXOHSPNFIFAMIKSSULLGMRWYBQVHIITCIBJCNKRSSCBOZWRYKEKXJOACQMLPWWVLAOIQJKPBZYXYSHNBJMRFBXRTTQPDTHWRCGUCKA");
    msg.reference_frame = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45850U;
    tmp_msg_0.off_x = 0.9022718222339886;
    tmp_msg_0.off_y = 0.8633011397845455;
    tmp_msg_0.off_z = 0.46702982378027225;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7489561535254695;
    msg.leader_speed_min = 0.017743211393461467;
    msg.leader_speed_max = 0.48054829715486547;
    msg.leader_alt_min = 0.8513447937271392;
    msg.leader_alt_max = 0.8304522768302347;
    msg.pos_sim_err_lim = 0.21902199563198654;
    msg.pos_sim_err_wrn = 0.564932338623746;
    msg.pos_sim_err_timeout = 5372U;
    msg.converg_max = 0.9454543431136447;
    msg.converg_timeout = 52805U;
    msg.comms_timeout = 16502U;
    msg.turb_lim = 0.11325522193710047;
    msg.custom.assign("CFPDYVNJUFOE");

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
    msg.setTimeStamp(0.3692310482708706);
    msg.setSource(35755U);
    msg.setSourceEntity(186U);
    msg.setDestination(16701U);
    msg.setDestinationEntity(150U);
    msg.timeout = 34622U;
    msg.lat = 0.5743147098656989;
    msg.lon = 0.9166167777070583;
    msg.z = 0.05328827403029113;
    msg.z_units = 248U;
    msg.speed = 0.7216215157269934;
    msg.speed_units = 205U;
    msg.custom.assign("IWXRVYDGQCKSNDKTMLXSAOQYPVQCOFINMVVWFTZRUKUAGUCDAXCEYDCRBRZFRQXIYIJYNPLLGPDSNFKHYSFMAAJRWKLUZGAZBLNXJEUCJLMNOZQDOCDGJPMVRKTZIRVTZHEBWCXEVGVNHFQIWGIUAFEBTLSWOTJAQKGJKOEXDSNTACWZBVSMNHQBBGETMJBUUIENTBSKYEMSLPQRXRHDKWYHACOX");

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
    msg.setTimeStamp(0.3682779124719896);
    msg.setSource(61452U);
    msg.setSourceEntity(125U);
    msg.setDestination(64017U);
    msg.setDestinationEntity(146U);
    msg.timeout = 27900U;
    msg.lat = 0.9050178559437252;
    msg.lon = 0.26972408102516054;
    msg.z = 0.31355534683243846;
    msg.z_units = 216U;
    msg.speed = 0.6923144829790315;
    msg.speed_units = 204U;
    msg.custom.assign("ZJPKYHBUHRSGNBMIUYFWWCOFRDAPHVGVDKIPRTOAGVOBLXXCDUMTRHSAPYECQEWGFUDJWWGBKXZEFXGLBZIQNSRXXLQRTMMMBJYBYCPMYJGCCNTFAUSBMQNZOLRYNJTFIATENWIKHRKMBEXVZVYLOVWEWLGRAHCLHQZXMUEQKOCSIOV");

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
    msg.setTimeStamp(0.7876492636637317);
    msg.setSource(19545U);
    msg.setSourceEntity(7U);
    msg.setDestination(9623U);
    msg.setDestinationEntity(90U);
    msg.timeout = 20353U;
    msg.lat = 0.8045260741749815;
    msg.lon = 0.6435274961830018;
    msg.z = 0.2389941432192929;
    msg.z_units = 227U;
    msg.speed = 0.498917368144264;
    msg.speed_units = 78U;
    msg.custom.assign("PUOWZJMLBAEXFNPJLYFIOCTPJTQNVHJFUDPHTNCKWKKSBPQGXKLMSURPWFWMLXGHYPQXDTSEURVAKRDLCCWRTYXOWMEICTDVUSPSQDWYZASFYDGTBTCMRKVZJZLHUJBX");

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
    msg.setTimeStamp(0.11761434924898695);
    msg.setSource(2082U);
    msg.setSourceEntity(232U);
    msg.setDestination(5626U);
    msg.setDestinationEntity(22U);
    msg.timeout = 64550U;
    msg.lat = 0.4550624807937318;
    msg.lon = 0.3507560808726732;
    msg.z = 0.06309433220325944;
    msg.z_units = 5U;
    msg.speed = 0.3919643374388091;
    msg.speed_units = 23U;
    msg.custom.assign("LBEMRPGQRBTPDLFNQUIHEWIXNWDASJREXHFBANSASAUIPEEVWHZTHQIFVNXRQIBHFVAXGMEUZWKBYHYYMXMWHGBLYXNYOGDSTGQPIOSLZTDUFBDXCGZKJIRZFSZWAQNJKJUIHPRKDQRMSDEVJTNSFCFIVERYKGBUJJRRNBKECUMPYLKEFGYDVVQLGTZ");

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
    msg.setTimeStamp(0.13034025673887994);
    msg.setSource(64968U);
    msg.setSourceEntity(170U);
    msg.setDestination(59450U);
    msg.setDestinationEntity(148U);
    msg.timeout = 56215U;
    msg.lat = 0.21552844908632485;
    msg.lon = 0.6123455885029752;
    msg.z = 0.6719024185301422;
    msg.z_units = 4U;
    msg.speed = 0.04948941693843745;
    msg.speed_units = 227U;
    msg.custom.assign("EGRIQOEKHCUWBPJUMFQBHJOUDBAACBTJQJTWYPQNXRMRHYXLAFONTZFBCNDSPTUFGESNKEIKXXCHMICRUEYPPWUOSOLKGRSWLNWLFJVXVNDYYQKJXIEDGJAOTMVLIRWRQTYYWYTKZEIRJPVNZAENSBPWBG");

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
    msg.setTimeStamp(0.0779334018291361);
    msg.setSource(13350U);
    msg.setSourceEntity(92U);
    msg.setDestination(50339U);
    msg.setDestinationEntity(103U);
    msg.timeout = 43381U;
    msg.lat = 0.18672378982660898;
    msg.lon = 0.02882009078777026;
    msg.z = 0.7776103318656029;
    msg.z_units = 108U;
    msg.speed = 0.7671947515310653;
    msg.speed_units = 115U;
    msg.custom.assign("WVHPVCGWUEMEZPVJTUZDQAGVRUNCOOXOTLYHWSGBIETORPZUPZGQFJNSDFYSISNRNNJLKWVYQEDEKQMZOTSTGQGLBCHGMJBRNOHDWHMLIKERLHCQYCVQUXMORDWIYECAPVWXPPSJANSTCHTXTHQBBYKYLBAXJZFWKNAXVJXAJLWMMCIRUPNCPUVDL");

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
    msg.setTimeStamp(0.5666775475273013);
    msg.setSource(59146U);
    msg.setSourceEntity(61U);
    msg.setDestination(50589U);
    msg.setDestinationEntity(41U);
    msg.arrival_time = 0.5023350978178658;
    msg.lat = 0.5586682117453734;
    msg.lon = 0.8584481358688983;
    msg.z = 0.3899792707515415;
    msg.z_units = 32U;
    msg.travel_z = 0.16569295879924983;
    msg.travel_z_units = 127U;
    msg.delayed = 52U;

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
    msg.setTimeStamp(0.9130808593297675);
    msg.setSource(59906U);
    msg.setSourceEntity(174U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(157U);
    msg.arrival_time = 0.8469183281662854;
    msg.lat = 0.06465788467427502;
    msg.lon = 0.1085542039018228;
    msg.z = 0.14887679414890775;
    msg.z_units = 195U;
    msg.travel_z = 0.19548551723395702;
    msg.travel_z_units = 38U;
    msg.delayed = 0U;

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
    msg.setTimeStamp(0.0595407378070294);
    msg.setSource(39427U);
    msg.setSourceEntity(242U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(141U);
    msg.arrival_time = 0.229839611037417;
    msg.lat = 0.5784982610861837;
    msg.lon = 0.8604053689547724;
    msg.z = 0.6628021998599748;
    msg.z_units = 18U;
    msg.travel_z = 0.6615864996947189;
    msg.travel_z_units = 92U;
    msg.delayed = 208U;

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
    msg.setTimeStamp(0.6041806113670444);
    msg.setSource(32390U);
    msg.setSourceEntity(7U);
    msg.setDestination(40080U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.4734630950697084;
    msg.lon = 0.9413447413275128;
    msg.z = 0.17988007230184488;
    msg.z_units = 15U;
    msg.speed = 0.13126349148739969;
    msg.speed_units = 179U;
    msg.bearing = 0.28841871680737985;
    msg.cross_angle = 0.28698895744754616;
    msg.width = 0.03505638837017422;
    msg.length = 0.8924697926397719;
    msg.coff = 85U;
    msg.angaperture = 0.4123318589141458;
    msg.range = 32923U;
    msg.overlap = 81U;
    msg.flags = 167U;
    msg.custom.assign("UPSYLDKSDAZCWUIVIYTRWSQPPVHRFDIABEOXXXKARILVUNIJKBGCYIAOBJZEYIUOMDHXYEWTFVYXAYGNXGNKWNGLTKSPOQCDTCWUEWZBMAVRYJCLLJKCJFKMLZMZAHXJGXTRMACPAKCPMMIVRSJQYLUTGBEVP");

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
    msg.setTimeStamp(0.2571911067623811);
    msg.setSource(45191U);
    msg.setSourceEntity(246U);
    msg.setDestination(8380U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.4154897208853031;
    msg.lon = 0.8392297946804959;
    msg.z = 0.3019683267636939;
    msg.z_units = 53U;
    msg.speed = 0.16138018726106362;
    msg.speed_units = 126U;
    msg.bearing = 0.291898925260625;
    msg.cross_angle = 0.6762874917660355;
    msg.width = 0.7838267397692519;
    msg.length = 0.19910515647571803;
    msg.coff = 212U;
    msg.angaperture = 0.29891878830194973;
    msg.range = 54227U;
    msg.overlap = 225U;
    msg.flags = 78U;
    msg.custom.assign("ZZYEHHLRYMMYCKZWRBKTOEYOKSZDXOSMSDSIPBSDGLPZCQQPGUAJAICGEQFZMTEWCOBWJVGLJDROOCGXWGCAAXEZMETROFHQAGAFVPNWXGKQPHOFYYVCNUXBVXAETJKTTBMZVHTIYHASRVPVBDHVSDWIZ");

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
    msg.setTimeStamp(0.2890232632595393);
    msg.setSource(15587U);
    msg.setSourceEntity(136U);
    msg.setDestination(28524U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.04721308863593732;
    msg.lon = 0.2816527631749084;
    msg.z = 0.7591936484947222;
    msg.z_units = 117U;
    msg.speed = 0.9368112702562408;
    msg.speed_units = 16U;
    msg.bearing = 0.5748082363828486;
    msg.cross_angle = 0.6214878135237879;
    msg.width = 0.5207907108773406;
    msg.length = 0.37393319171723116;
    msg.coff = 45U;
    msg.angaperture = 0.8892309559866707;
    msg.range = 13704U;
    msg.overlap = 1U;
    msg.flags = 92U;
    msg.custom.assign("VWGZILBXMFZTJQBPESNGODFJEDPCDUMKFCRXCCUPSCAGOVGMAPOZZCWSQHUMXPZMKQWXDPFFTQGCWDCHLINIHTBFAMRBBHIKLJNSYXXPLITQZWZSFQHLAJUOBUUVYVUDGWZYGR");

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
    msg.setTimeStamp(0.2456547933583021);
    msg.setSource(59511U);
    msg.setSourceEntity(188U);
    msg.setDestination(65051U);
    msg.setDestinationEntity(28U);
    msg.timeout = 52328U;
    msg.lat = 0.6823601605788165;
    msg.lon = 0.4585323898912026;
    msg.z = 0.11982489124670104;
    msg.z_units = 37U;
    msg.speed = 0.9117110114729986;
    msg.speed_units = 94U;
    msg.syringe0 = 120U;
    msg.syringe1 = 87U;
    msg.syringe2 = 101U;
    msg.custom.assign("BOTAVOIYTAWZLFFGRPRALGPWNBSGJXRWDETRFRUCIQIPQNPUYZYSQEHORIXAOSWHTQBEYIDGNJLQTDHPUOUEIKFVBFIYLXVXKPDKMFXNAIBVNHLUNJWCTUVOMGUHRUOBMGLCN");

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
    msg.setTimeStamp(0.2745481762294609);
    msg.setSource(36789U);
    msg.setSourceEntity(73U);
    msg.setDestination(28167U);
    msg.setDestinationEntity(116U);
    msg.timeout = 44209U;
    msg.lat = 0.06726246709020911;
    msg.lon = 0.4251514983005543;
    msg.z = 0.21736997230969746;
    msg.z_units = 127U;
    msg.speed = 0.0382912966293294;
    msg.speed_units = 239U;
    msg.syringe0 = 200U;
    msg.syringe1 = 167U;
    msg.syringe2 = 203U;
    msg.custom.assign("AFSJMZZIVANXTYALYOLRGCVBIILTTAAMYBUFQHADFBEYSMRNLCXJDGUWLJLMXRCQOOBBUZPJUDQVSLVJGSZHZKNQYJXTMEONCSRKYVPGEJGUPTFIPANMGEWRPEFIUNVB");

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
    msg.setTimeStamp(0.15544055634206677);
    msg.setSource(2980U);
    msg.setSourceEntity(210U);
    msg.setDestination(33186U);
    msg.setDestinationEntity(45U);
    msg.timeout = 41369U;
    msg.lat = 0.028771804799777256;
    msg.lon = 0.5428621033152521;
    msg.z = 0.35425657210707573;
    msg.z_units = 15U;
    msg.speed = 0.6959361897913153;
    msg.speed_units = 127U;
    msg.syringe0 = 160U;
    msg.syringe1 = 18U;
    msg.syringe2 = 224U;
    msg.custom.assign("WLEUPWWLFASPEWFXSYVXFFZRSABYXMYQKKKZVNBSLJQIZBECOZE");

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
    msg.setTimeStamp(0.2290963608417842);
    msg.setSource(37464U);
    msg.setSourceEntity(24U);
    msg.setDestination(15265U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.45760066830588864);
    msg.setSource(4225U);
    msg.setSourceEntity(100U);
    msg.setDestination(63270U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.6007076654444461);
    msg.setSource(29566U);
    msg.setSourceEntity(199U);
    msg.setDestination(62968U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.3736923553739143);
    msg.setSource(21068U);
    msg.setSourceEntity(70U);
    msg.setDestination(45952U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.9522691816910929;
    msg.lon = 0.5616434390500686;
    msg.z = 0.5915702284796969;
    msg.z_units = 66U;
    msg.speed = 0.6283346147902434;
    msg.speed_units = 173U;
    msg.takeoff_pitch = 0.2281239659283184;
    msg.custom.assign("IRBRVSEPEFHGOWJQOCBIAKHOVJCFUSCDIOQAKYWDKNXFTKOUHQPGWBFDIOLDBOLGAAXBXFXRSTYONJZLPBLMAVMNRWWXEDJTSNYZIOVRUSMMZNYIHFNVVJERNWKMAGTQCUJXFTVGETJXHMXTPYBURWGRHUKVCWGMKYZTDLOKGPRYLUKFHTMBLVTDNADPYGPQSHLINZFCECBPXPCEHEGMWYXZUCCQINPZRAI");

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
    msg.setTimeStamp(0.8253660230131025);
    msg.setSource(20480U);
    msg.setSourceEntity(30U);
    msg.setDestination(47802U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.9699997246418114;
    msg.lon = 0.25886740565665334;
    msg.z = 0.7801102519344991;
    msg.z_units = 249U;
    msg.speed = 0.8391714572425937;
    msg.speed_units = 0U;
    msg.takeoff_pitch = 0.7883391493569052;
    msg.custom.assign("XTQOQHYLWMRWPPGBATFLMWOIHVAJHJXDNHXISLGHTKWOUOQZXZLZGCESAEOLAIOSTYQTXBYBLJPCIEDWKMIKFFGUBRNERNTXVBZQKUDVHKARDMEUHJXYWWZKBZDBLORNWGQXMVPECJNACGHIRVRFBGPZVBQAYYMXYRWNVAPIDPMZSKZINGCCQBOULTFFDHKDNSLJOQJQVIDUZY");

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
    msg.setTimeStamp(0.4825759283054162);
    msg.setSource(40001U);
    msg.setSourceEntity(149U);
    msg.setDestination(51350U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.8910334457826997;
    msg.lon = 0.7413102325417689;
    msg.z = 0.846017614733248;
    msg.z_units = 217U;
    msg.speed = 0.5271721804017769;
    msg.speed_units = 188U;
    msg.takeoff_pitch = 0.11415249400515792;
    msg.custom.assign("VNYYUDHILUNRYJYMXFOJZOYKGZKYHRYWMOFNKGBUTNSELWAOSLPJDXVPQEKQOIWSEBLFIGLUMMCQBQXOGQH");

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
    msg.setTimeStamp(0.5324628064404829);
    msg.setSource(40774U);
    msg.setSourceEntity(62U);
    msg.setDestination(38792U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.6991305744075919;
    msg.lon = 0.9853338209061662;
    msg.z = 0.8803175887379526;
    msg.z_units = 103U;
    msg.speed = 0.3671844814952002;
    msg.speed_units = 156U;
    msg.abort_z = 0.45678240016124494;
    msg.bearing = 0.4986115246697371;
    msg.glide_slope = 13U;
    msg.glide_slope_alt = 0.43933353272395137;
    msg.custom.assign("QNYYNQOIKNUYMRFUNFGHUOOZKESGCKDPHHCCAEA");

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
    msg.setTimeStamp(0.7328773006981979);
    msg.setSource(35982U);
    msg.setSourceEntity(139U);
    msg.setDestination(8192U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.8584979808650863;
    msg.lon = 0.807390028674195;
    msg.z = 0.25054489211260345;
    msg.z_units = 81U;
    msg.speed = 0.10231250367807998;
    msg.speed_units = 72U;
    msg.abort_z = 0.4405104224942129;
    msg.bearing = 0.5706768289873019;
    msg.glide_slope = 116U;
    msg.glide_slope_alt = 0.22053076664260352;
    msg.custom.assign("QFTXEPOOBIEDVKGOCKYVHZGQNKHIQNNABEPJZHPQECXULPG");

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
    msg.setTimeStamp(0.950037227742417);
    msg.setSource(54063U);
    msg.setSourceEntity(39U);
    msg.setDestination(61816U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.9449378731423239;
    msg.lon = 0.19898075234949453;
    msg.z = 0.6684115836201907;
    msg.z_units = 162U;
    msg.speed = 0.757296702103706;
    msg.speed_units = 249U;
    msg.abort_z = 0.8809480218879191;
    msg.bearing = 0.32255918953137097;
    msg.glide_slope = 62U;
    msg.glide_slope_alt = 0.16572964990127825;
    msg.custom.assign("OJPAZSDLKJMGODKMFWIIFBLLSQOHNFWVTZVNUWCWGBOAAGIZTQPVNYHQHNXA");

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
    msg.setTimeStamp(0.8298844306722358);
    msg.setSource(19254U);
    msg.setSourceEntity(41U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.85774842136493;
    msg.lon = 0.4426282622225456;
    msg.speed = 0.7274954357551022;
    msg.speed_units = 111U;
    msg.limits = 181U;
    msg.max_depth = 0.6264369043953523;
    msg.min_alt = 0.910695698551553;
    msg.time_limit = 0.5942181095010108;
    msg.controller.assign("UICXWAAIZZZNIDTVCKPVJOJHFHJQFOPWUOSPEENYRFHCAPVSQEXLRNQRRMTJPCMNBLWFFMBHZXTVTQSCHGLTGGWDKMXBRQCGUSIXZOLGKEMNSKJCQAKKDEXNDZRQZDDKCMEWIGKLNMTKWHSSTASMRCVDQWBIFVYUHGICBAYNTPJUVLMYIBMZOLFPLEYBPAYJJNSBBUDXDIGTRKBXSJWYTAUDUEEHXVNQRVZOOWQIYOYFVLPLEOFRH");
    msg.custom.assign("WAVOALWMMEFWXIKCRVZTHMQEXYSGQBWIVGYPEPFOASUNFOUCJFPSICSOJQRXPHGRYNFTZKKDCLRGN");

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
    msg.setTimeStamp(0.8785652482995102);
    msg.setSource(13835U);
    msg.setSourceEntity(131U);
    msg.setDestination(48192U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.9564829132225879;
    msg.lon = 0.9982084941282675;
    msg.speed = 0.5137774548455487;
    msg.speed_units = 136U;
    msg.limits = 205U;
    msg.max_depth = 0.2867046731718649;
    msg.min_alt = 0.11981971995676033;
    msg.time_limit = 0.6605433027378697;
    msg.controller.assign("YQZSJNIAPJPPHZUCOBIYQRGRJPXPCLZJEQDFZGZTUIJQWVKMNZAGOFUQVVAFDTTTGIGJXDFXNROSZXEAYCDTFRIOZEEWNVVALNAKTGETCSBXDYIUNBVEHXMHLEWEFXBOJLVABHNSSOQPXWRMFVLKUAAKKUWIVDDIRQTASIYCCBKZMIMOLRKMPGWNDHMPSDBPCZHEHMPWXLRBSFDQLWFUQURJQFYGUJBKERVWMLHKCUNWH");
    msg.custom.assign("IOKZQWUQKFNEUCOTCFZPBINVMYAZHIRMCJYLYLQHIHALVPAQXDCLPWIINIKSYJXEOPHSKTRXVECQXXNTRMVMXGPBGAEMNNXGTGZADJFAHWVJBRGWRKHYPKOFEOKQZVLEYDFJRODRANGJIAVCDLYSXEWDKBVBWADTWVYZUMFZUDJGEWBZBSPXBWUNTAYQUEIOVSLPRTTKSZBQOLFHOHFRTRLJMJHNPUUKGPUCMSSUSFDJCSMBTLGNHDCO");

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
    msg.setTimeStamp(0.39956345184482034);
    msg.setSource(28894U);
    msg.setSourceEntity(27U);
    msg.setDestination(20239U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.12838876345048644;
    msg.lon = 0.3879143351138914;
    msg.speed = 0.3311684042062121;
    msg.speed_units = 90U;
    msg.limits = 134U;
    msg.max_depth = 0.5196930221146074;
    msg.min_alt = 0.7171183852517016;
    msg.time_limit = 0.06519490969379416;
    msg.controller.assign("PYZFGYNUDHNHHMBGKJJTOABZNEBQNHBIKEWYVPQJZLCHCRJJOCDURZYDIERRMDQUCWMALOLSLDGEZPEJSGTKIPHZFTMSUBVUQFEUTDMNQYRADXKCGWAYDAXCYSWZRFSTXKOMGPCBLWNBXQSARZIPRGIXLFNOHMR");
    msg.custom.assign("QUDYHQASBLLWLSCWEYOAOESRCYPFGTQKHGAZKIXBOSHNYXYMIENNYKHLDZJFXVUIVEKEXAVCSSBPG");

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
    msg.setTimeStamp(0.7254104904490157);
    msg.setSource(16595U);
    msg.setSourceEntity(71U);
    msg.setDestination(28200U);
    msg.setDestinationEntity(75U);
    msg.target.assign("ZBKLWSCFCXPAHUYTLSBLXSLKDBPEGWRQZXIPRCHBFURJNMEAPNCDHMZYFOKSLRWETRNDVHOBFZSUISCIVYGVTYSTGLNBAERDKCYREAIIJGTKM");
    msg.max_speed = 0.5499640909289676;
    msg.speed_units = 168U;
    msg.lat = 0.6747268412760941;
    msg.lon = 0.44272299825309913;
    msg.z = 0.20137957106323312;
    msg.z_units = 189U;
    msg.custom.assign("HPSRWCXMRUCLGPZXLTQRRIZLEEEJPCTUIDZCIHVYBRUIFSIGYFDVHZMPRMGSIJKXLEWGNHSPNFQODWFXJWQMXDDUMDMYNDELBFXIHXJSBUJAGLVDKKPUZOVNVNHTFKKGSWKCKOCAXLBTLSANOTDYGNWYYKVDOGXCLEZVQOESZFZMNGMWPECABQPWKNBHJNQABAYRVRBIS");

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
    msg.setTimeStamp(0.19669463752885685);
    msg.setSource(9359U);
    msg.setSourceEntity(140U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(132U);
    msg.target.assign("NFSZGXYLLCRNADVLUKRSRSKUBPYZQEYCUFOMSVOXPUVFNITUGHNEESHFCLNIUJXGCKWBREQGHZEBVOIHTPHDOYQYR");
    msg.max_speed = 0.6576048663792775;
    msg.speed_units = 21U;
    msg.lat = 0.7136705156166017;
    msg.lon = 0.6512799956630554;
    msg.z = 0.46262651597821647;
    msg.z_units = 69U;
    msg.custom.assign("XQDYBSIXVITUDFEBNWKHGAMGTXVUJZZJRZSDFWHAMWNYRKPNVFAPIKSUTZZJEWIEJHLKDNTUIEHLBVEQCHRDFRKWVKGEIKYFBZTMZRTLXGKYROUOJZFRNVPXHPMWPVCONCKMGCEFUUAOOXBUYSPQYBSSWOQNMWRTTXNUCCBCPPLWMBAUVAQGDLWZDLNEOPYXFSXJIJ");

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
    msg.setTimeStamp(0.946598457147725);
    msg.setSource(17670U);
    msg.setSourceEntity(249U);
    msg.setDestination(8157U);
    msg.setDestinationEntity(49U);
    msg.target.assign("TNBTWHSOWHZYUFSUFKSTCOJBGLWPTQMKVZFGQTNWAKEUJEFIMRLRHHUYULEMVTPIZWPRATWIS");
    msg.max_speed = 0.754824485134934;
    msg.speed_units = 0U;
    msg.lat = 0.8314128667100573;
    msg.lon = 0.8006349687533914;
    msg.z = 0.11858464616331599;
    msg.z_units = 26U;
    msg.custom.assign("KNEOYSKDFUXZDTOOJBHVBEIQIAWYCDBWEGBXIDFLPHKCOKQMFIZPANXJKQAQDIKGNNHTPSTEFFAUAGDMRXQEOGHSYLSYXZDBJCNVDECAI");

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
    msg.setTimeStamp(0.17698856444248656);
    msg.setSource(53512U);
    msg.setSourceEntity(196U);
    msg.setDestination(40682U);
    msg.setDestinationEntity(91U);
    msg.timeout = 33115U;
    msg.lat = 0.4823206935295715;
    msg.lon = 0.09866348465771235;
    msg.speed = 0.5174982292008325;
    msg.speed_units = 20U;
    msg.custom.assign("AQLONUWXTHSMCHRABDNIIDWUMXZFFGUGQCXAASQEIALDIJKWHBWSRPIVCNSVPECJTNOZQHHJMNONWIGMWRZLAGISUXCSTLSQVOIUJYQYTCHYTWVLTZNPZDMGWFROKPGUXEDAEEYGJRBHVUQQYVUVKFBDALDKXRVZLAVWUYXLKTBMPDIMGMNFFNHMTDGCFORYWJVCKSBXUZPPFJOERMLGHJEOTF");

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
    msg.setTimeStamp(0.8182279137965708);
    msg.setSource(53246U);
    msg.setSourceEntity(253U);
    msg.setDestination(7885U);
    msg.setDestinationEntity(107U);
    msg.timeout = 51955U;
    msg.lat = 0.32898158695520163;
    msg.lon = 0.8103142190195717;
    msg.speed = 0.6233485601266506;
    msg.speed_units = 73U;
    msg.custom.assign("TDBLWMDOHRVFPDHGKPVJIKBWPSAJNOWPEAKKFSCTCZCAYCGTANOIYAGVPNSVXELMUO");

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
    msg.setTimeStamp(0.826604622197368);
    msg.setSource(17643U);
    msg.setSourceEntity(101U);
    msg.setDestination(44751U);
    msg.setDestinationEntity(39U);
    msg.timeout = 16410U;
    msg.lat = 0.8247689800683345;
    msg.lon = 0.1797984142312833;
    msg.speed = 0.9372303130981078;
    msg.speed_units = 5U;
    msg.custom.assign("CCXBULGZPHXEZXJYQPGXQPVAJMPGGLSWRZBCXEM");

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
    msg.setTimeStamp(0.5518421102207943);
    msg.setSource(29727U);
    msg.setSourceEntity(148U);
    msg.setDestination(25219U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.7640809416864929;
    msg.lon = 0.5510651628419988;
    msg.z = 0.7775815647508201;
    msg.z_units = 45U;
    msg.radius = 0.9489577512794052;
    msg.duration = 11851U;
    msg.speed = 0.38182618075586117;
    msg.speed_units = 33U;
    msg.popup_period = 28940U;
    msg.popup_duration = 39878U;
    msg.flags = 75U;
    msg.custom.assign("TFLIWEBZHTBAQDZCHRZOSIVJWPLJDWUBDXZDCXQVYUGUOSYWSKRBAEVIBCVVADZIROKYGFWTLMKNFOMXBGELALJRYIDPWPQPBRGKJDGTWXXOKIVQXWHRJWWTMPJLBJVEVCZUKRUUILSRJBMDYMSXQNTZEIASGXUNUGNTCGONHAEEMAIYQAXEGPHAZHENVHSKCQMPNSLQOHOCFGMLQKOFYANSSITRNZXYCFDCEHTFCKOM");

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
    msg.setTimeStamp(0.6066707924479592);
    msg.setSource(26546U);
    msg.setSourceEntity(189U);
    msg.setDestination(35802U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.7763808436518556;
    msg.lon = 0.18804467340209552;
    msg.z = 0.9243352963654721;
    msg.z_units = 19U;
    msg.radius = 0.6058217314285489;
    msg.duration = 14914U;
    msg.speed = 0.9894897531833978;
    msg.speed_units = 153U;
    msg.popup_period = 31753U;
    msg.popup_duration = 2488U;
    msg.flags = 245U;
    msg.custom.assign("HNCHYNTMMAYSZVHORJLMMCYCIQPWFZORBCWYBHTHSGRPQFLYMMKSEYSEJLZRWTFJKFBKYQXZPUUXWGUJPDWCNOBHNIQLZYRPFACKZGTOFEARFAWOFHNDDUKNDK");

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
    msg.setTimeStamp(0.21728811288026306);
    msg.setSource(25310U);
    msg.setSourceEntity(43U);
    msg.setDestination(56010U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.9924965813535407;
    msg.lon = 0.2478948746625247;
    msg.z = 0.9951181280907744;
    msg.z_units = 45U;
    msg.radius = 0.2310784372164777;
    msg.duration = 10922U;
    msg.speed = 0.08773527121884261;
    msg.speed_units = 160U;
    msg.popup_period = 35171U;
    msg.popup_duration = 27039U;
    msg.flags = 248U;
    msg.custom.assign("JBCAOQUJFPEZVWADINBJQRGEIRNWALLMVZCSTKDEBCWQBRERKBOYXFZRUV");

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5057667737742954);
    msg.setSource(54575U);
    msg.setSourceEntity(14U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.0025724947850850333);
    msg.setSource(38375U);
    msg.setSourceEntity(173U);
    msg.setDestination(20890U);
    msg.setDestinationEntity(217U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.09615074487660413);
    msg.setSource(65140U);
    msg.setSourceEntity(106U);
    msg.setDestination(13355U);
    msg.setDestinationEntity(236U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.9429814316241364);
    msg.setSource(65520U);
    msg.setSourceEntity(53U);
    msg.setDestination(36047U);
    msg.setDestinationEntity(6U);
    msg.timeout = 23351U;
    msg.lat = 0.20435054804112895;
    msg.lon = 0.36972435450227337;
    msg.z = 0.5749951110041702;
    msg.z_units = 246U;
    msg.speed = 0.9465082550298711;
    msg.speed_units = 45U;
    msg.bearing = 0.39723596172038955;
    msg.width = 0.7391798907855844;
    msg.direction = 96U;
    msg.custom.assign("HFZTBGKFKBRNOIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.08667929507353656);
    msg.setSource(65057U);
    msg.setSourceEntity(1U);
    msg.setDestination(42003U);
    msg.setDestinationEntity(112U);
    msg.timeout = 9391U;
    msg.lat = 0.8497765527970056;
    msg.lon = 0.8787866977418844;
    msg.z = 0.25631458819174124;
    msg.z_units = 40U;
    msg.speed = 0.18758777853981756;
    msg.speed_units = 65U;
    msg.bearing = 0.42698886063904873;
    msg.width = 0.16265646338808637;
    msg.direction = 248U;
    msg.custom.assign("KYALMLPCSONGJKPUDYAPNMYUTZNGDIGYJMJCGOAHUKZGGGHNIWIRNYESSUKBQIXPOLIZIEECCPVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.7034900391098311);
    msg.setSource(30284U);
    msg.setSourceEntity(252U);
    msg.setDestination(65241U);
    msg.setDestinationEntity(26U);
    msg.timeout = 56937U;
    msg.lat = 0.7801829720209013;
    msg.lon = 0.7184984674116469;
    msg.z = 0.6991543516900113;
    msg.z_units = 24U;
    msg.speed = 0.4239347257527972;
    msg.speed_units = 84U;
    msg.bearing = 0.4312205271945939;
    msg.width = 0.4556462154222407;
    msg.direction = 131U;
    msg.custom.assign("UTOZOTSPYURHYSTIETYMIXGVYEJKZOJIGSHZSOBPEYNWLMLCLPFQOPXXBTWRAVDGDZOTZEMXKFRCQQPFKZAYSMDUAXSRGNEWDBZGCJSORCQZNUFCLTYTLQSOJGMQBUCANDMCQKYHANKQVHYRYLZUQXCFKHAILGUUFAJFCRWNEELRDXBHVEDPHDIJPIWWEBUOFPLVXFVRWIIAEKKVSJQMTTDJUVVHWHXNGFBAKPXNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
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
    msg.setTimeStamp(0.46636591283914486);
    msg.setSource(31154U);
    msg.setSourceEntity(30U);
    msg.setDestination(65178U);
    msg.setDestinationEntity(55U);
    msg.op_mode = 219U;
    msg.error_count = 64U;
    msg.error_ents.assign("XCFSAQGTUVTREGLSOANQFZQEPOZVXXGFOLCATEWLWQKHHLZQBPMKZQWJMZBAYNHAOKDTRCMNLSKYUPYPUCDBFXJJUEVMOYIDQBFFZXZNOEIFJYTTHOQUSCPJHZEDBFCLBFJJUIIEVQOGWXSHBKHIVBLSCTUEMOSYGGOQXCBLANNYUNNATDFNRPDDIWRACM");
    msg.maneuver_type = 47864U;
    msg.maneuver_stime = 0.31164525795840003;
    msg.maneuver_eta = 17240U;
    msg.control_loops = 878884329U;
    msg.flags = 216U;
    msg.last_error.assign("YMPFPVDPMKEQATRCXLBGLZGBBIDJMSZKNUQJMXJUZNENGJCOPESCKXRKWPTVBFDCQSNHQHLMAHHOISOOVOOTWGCBNBFGAGPNUYAIXISFJXKEDWCXBCVQWOUMMDAEF");
    msg.last_error_time = 0.39842951965527373;

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
    msg.setTimeStamp(0.2832690474979451);
    msg.setSource(41118U);
    msg.setSourceEntity(125U);
    msg.setDestination(64285U);
    msg.setDestinationEntity(110U);
    msg.op_mode = 88U;
    msg.error_count = 42U;
    msg.error_ents.assign("SCQJWOQUKJYLZQLSAAJVLCFATTGTFJXOCDWRTEESNMUOBWPLFWAKFAVENYYHFC");
    msg.maneuver_type = 33694U;
    msg.maneuver_stime = 0.02811399708999529;
    msg.maneuver_eta = 3058U;
    msg.control_loops = 2689622141U;
    msg.flags = 147U;
    msg.last_error.assign("CHNFKZRBYOLHNORQCZTYWUFWPGZVAZWITENJYYIQMHSRYGMBBVRPM");
    msg.last_error_time = 0.309836565337985;

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
    msg.setTimeStamp(0.34418053681604743);
    msg.setSource(53642U);
    msg.setSourceEntity(17U);
    msg.setDestination(4537U);
    msg.setDestinationEntity(38U);
    msg.op_mode = 54U;
    msg.error_count = 34U;
    msg.error_ents.assign("WFHACMWZULZRLFSJEGCLDYDFO");
    msg.maneuver_type = 44301U;
    msg.maneuver_stime = 0.3986680882241781;
    msg.maneuver_eta = 31445U;
    msg.control_loops = 2926935613U;
    msg.flags = 63U;
    msg.last_error.assign("AFWWMVGPTPYASRTUQRHHMPFQFUQKFHKCQTICQIOWEXTLBRYMBMCXXPOQHLUSFGXZVCCJWKJEGIEDJXMZHXBLOSOKWCFJRMPGEIOJYNKSREVGAHDBMAGKGBJEUERLUNHIZPLSGSJDRDKSLWFCTTNBXGIVQANIYQBYTDDOEVVCHZZUGLNYLB");
    msg.last_error_time = 0.61455645533901;

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
    msg.setTimeStamp(0.3773588768799868);
    msg.setSource(21485U);
    msg.setSourceEntity(169U);
    msg.setDestination(25514U);
    msg.setDestinationEntity(234U);
    msg.type = 172U;
    msg.request_id = 56288U;
    msg.command = 157U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 55533U;
    tmp_msg_0.rpm = 0.645054413230546;
    tmp_msg_0.direction = 173U;
    tmp_msg_0.custom.assign("ILLRDGJHHVIHOSEMPWADYTSAFHLQNYBOJLUVPSTGUMXKTNCCSXZBDIK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34897U;
    msg.info.assign("KOPKODKLAXBGOVFDXGSABVJVPYZRQWLWDUTDHKESYSP");

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
    msg.setTimeStamp(0.1835969607070853);
    msg.setSource(1977U);
    msg.setSourceEntity(13U);
    msg.setDestination(35188U);
    msg.setDestinationEntity(157U);
    msg.type = 192U;
    msg.request_id = 22000U;
    msg.command = 200U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 33509U;
    tmp_msg_0.lat = 0.12384291120880286;
    tmp_msg_0.lon = 0.22756166200136918;
    tmp_msg_0.z = 0.2975639378812478;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.5588833803944251;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.custom.assign("RGTMGOKQTOETRHDPVADOHJSLDIIJGBZAHCJEUBEWDMRIPLTQVXQJFMXEJKSLIVRLPUSAJWPWJFXNVCUFWCFXOZMASOCHVRFSKTDGZXBYRLOWYGHCYHWZYUZFENTUGIDLYDDWKPENDEWJL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9399U;
    msg.info.assign("YCVCDLYUXEDAZDIIUTRWSNNXUBSHFQEEFMWJLVIPAEPIFFYCJHKZDOTXOYKAWQTGQWKZSTGRLFUBAKNMTMPDLSOHLKEJZSVBBTQDTXIHWLVQBBJLJGCXEABBUXUXTEPIHROFQKPLCMIKPPRGMKSMIWAWNGXCQQY");

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
    msg.setTimeStamp(0.928938138043079);
    msg.setSource(43225U);
    msg.setSourceEntity(177U);
    msg.setDestination(4185U);
    msg.setDestinationEntity(235U);
    msg.type = 45U;
    msg.request_id = 29319U;
    msg.command = 38U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 16045U;
    tmp_msg_0.rpm = 0.3669190367080153;
    tmp_msg_0.direction = 180U;
    tmp_msg_0.custom.assign("ULJNLQKSJKYHUBDJXTERRCIUYTVIWMTSRQOEPKCCIMBASYMJCWFNMFPPYBFIWJVGALTBATXPWWVKD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17956U;
    msg.info.assign("YRGOHBTHLYEMOOOAFPNVOEDIMUVEPZWSWCUNQXYVHUFTKRZPNDLYIGTLMQFLWXNERXJVLPRDJVYZBDQEZDCFRYJEGAFPOWQVOIMW");

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
    msg.setTimeStamp(0.8564905355707096);
    msg.setSource(20874U);
    msg.setSourceEntity(59U);
    msg.setDestination(54382U);
    msg.setDestinationEntity(96U);
    msg.command = 13U;
    msg.entities.assign("WJXCGXNKUZHPXVLVWCIMVQMWHBCGVLLIIKVZFNMAZDXQOKH");

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
    msg.setTimeStamp(0.8831161323594829);
    msg.setSource(45429U);
    msg.setSourceEntity(167U);
    msg.setDestination(53249U);
    msg.setDestinationEntity(197U);
    msg.command = 106U;
    msg.entities.assign("ISKNFBUUVCPIRTYAHYWZEIVMNGMYZMCRVKOIAJZDIAJOXXPJTONTDBVEQFLDTWGFUFKAPLKVAPSWQCDMBSJHVCEQBSYDLZYQXNEZFLQQRGHKXDIWQWJTLMPPIZMRCKLJCCPIOQIRZGDHVBESTOUQSDXHMCSSYDNNURWOXRRTSWGAUUGTLHNJENWBOLUKAYHFDUACEVEVZXEHRMPBFGHTZJYWLNTPZGOLIFEKXG");

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
    msg.setTimeStamp(0.9615375389159108);
    msg.setSource(42191U);
    msg.setSourceEntity(13U);
    msg.setDestination(10123U);
    msg.setDestinationEntity(49U);
    msg.command = 187U;
    msg.entities.assign("HRUYGMIKEWMIWKGTBECBCOHXDCMZGFTSNUOJZVZTPEASCICNULQSJWEIPNUPRGXGNMNRRHBNTWLGEJQEARAPYRTMEXEVXYYPHZBQTCALBHHARYISWBPNWKDXIUWBHOZIUKIXAZYLFAQODAOCKVBSYWCOED");

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
    msg.setTimeStamp(0.35920205084554324);
    msg.setSource(31443U);
    msg.setSourceEntity(239U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(34U);
    msg.mcount = 184U;
    msg.mnames.assign("IVEZUJXHFKPSBZ");
    msg.ecount = 193U;
    msg.enames.assign("GZSFVFILRKQCXISVPUDUVJASYSCQAJDXTIJOWIHNGQBLRAYMECUVMDLQZXMFBSBTIVIGOZNXONFKQGPIBEZYDWVPJVRKALMAIEECNJMTS");
    msg.ccount = 227U;
    msg.cnames.assign("XGTWSUXCSWLFUDQTCIGJTPSSMWQYQKBINVZAHAFCHQJDEVLYOWLRXGUKAUKWMWZTZXSYSPWOZCBDGCDTJHMUQMGKAPDIAFJEQBGORXVPXIDPMOTKSQVZBJKOFJFX");
    msg.last_error.assign("PVJGTCFTHQWUXSZBMKRRQQXTIIWWFZWTZVCYOEDDDBUEKMPCLHCRURLSXIIKULJFVWYUNQGGLGIVREQDQZBCBYPWUVABZYHUHFIMXQYRHTXCOTTAHBNMGBMWWFNFJYEISVPPKRAXHMZSAEBCNLAZXLENDJMKKHAPDLGXZBNNSOJE");
    msg.last_error_time = 0.5103125551819723;

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
    msg.setTimeStamp(0.6942995967908949);
    msg.setSource(52627U);
    msg.setSourceEntity(152U);
    msg.setDestination(15724U);
    msg.setDestinationEntity(202U);
    msg.mcount = 90U;
    msg.mnames.assign("SOPAIIDBQCSSTFWLJHOKZMLGCQUNDRYFFWTACQGHKPDTLJYDIOBMXOLVEZTADMUHPTRXYVZEDBNXPAZELCYYNXILZBEKOKSBHZQSMIKAEQKXVUHVMABEZFQRNKORWGCNGRTINRXOEQPRRGDJNKIMGSWOXCMVYUVUYHWHRMJADJLJZVEQPGDESTZWYFTOFFSSUPSLFCQNDWWHPWIMAUK");
    msg.ecount = 233U;
    msg.enames.assign("DGJQVXFQUSSLNGKFMYOTQVYNGJNCBOAGDQCWBWKHWIMBXIORLOYXUHEFBIACGATSDRISHKTXUJLRWFBWMPQPYBZNTLNLCIKYFRJUFMREMATIQLPONTJEGDCEWERVZVAYXLKOOPXVJCXWMZSIZCGOUQSKHIDSVDFPDJULIFCKCZRJUKBDYDRRFVJGFHZVNPYXOHPHZTECXSPZVYTLTEZAMEPYXKPUNLMHBO");
    msg.ccount = 43U;
    msg.cnames.assign("SZVESIMGNCUTHQWLMFABFFOTVXYTJNQFBPVEIZLNVIHUTGGSGAVQRZOKKZIXQYXVYAIZLBBCRMEKBPFXNIORQJVKUUMMPTMMECNWNFNRQWGFHQLCXOSPJOUMABCGL");
    msg.last_error.assign("KMGROKEQOUNOTALTJMSPPLMBOHALHNUGMZATRWARIWQSXMKFNFYARBLKQZZPJISDSJWEPSMREOIVYFWQFHOWUDQMRVBXWNLAGGUPKNTCHJESBCFYNEGBUKTVTMSPDTPYGVCSYYQBPXHHEXCXJMBDAFRCGNTYXYRJFXHSGL");
    msg.last_error_time = 0.3772411505199612;

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
    msg.setTimeStamp(0.8922720047007605);
    msg.setSource(46648U);
    msg.setSourceEntity(8U);
    msg.setDestination(25187U);
    msg.setDestinationEntity(117U);
    msg.mcount = 223U;
    msg.mnames.assign("SPGRCOLRXYZZSZTMQJVXKFQWLCLJRRRIWGUQQCKOEGQIGDIHHVWLFCPJNTJRCMFDTGPTUDDGQHVNXWROAPGBZIFTOHOEJCDPJYAVWANHFOKTSYJBZUBGHBUICFGIFCUVSQOWJCLDEZMBQDLVWZNJ");
    msg.ecount = 30U;
    msg.enames.assign("UGKOHBDQWIPDSEWCGLIUMYPPHWRJBAYLMECJHZALQVVVTBEUGDGWKNYPOMKZTRAKFNRKIBC");
    msg.ccount = 29U;
    msg.cnames.assign("YSPYFZQRULJGLFAROZBZUJLVKQQQFFMMVQAFUHOLTDPUOJHEURSVHBDPXTASXNMNPKRJWGBNKJNEQNHYRMPUFNDEWZYYALWWZMSGDNTWXOFGKQJRICLOTXUZZXMBBHOPBCWXNSHKIIQFTIEGIXTJXAGFBZS");
    msg.last_error.assign("HKTAXDMOPTGITIHNSXFQKZ");
    msg.last_error_time = 0.30556899972340756;

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
    msg.setTimeStamp(0.9033124782679464);
    msg.setSource(41356U);
    msg.setSourceEntity(108U);
    msg.setDestination(3079U);
    msg.setDestinationEntity(236U);
    msg.mask = 188U;
    msg.max_depth = 0.4982409827866682;
    msg.min_altitude = 0.1045658029445492;
    msg.max_altitude = 0.25664947737784627;
    msg.min_speed = 0.8036004290349187;
    msg.max_speed = 0.8297284076643503;
    msg.max_vrate = 0.8020274034726279;
    msg.lat = 0.9584284231837882;
    msg.lon = 0.7227356421426666;
    msg.orientation = 0.2908785437088909;
    msg.width = 0.9616375918747719;
    msg.length = 0.4657346532976956;

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
    msg.setTimeStamp(0.8210863333549699);
    msg.setSource(11189U);
    msg.setSourceEntity(192U);
    msg.setDestination(2663U);
    msg.setDestinationEntity(73U);
    msg.mask = 73U;
    msg.max_depth = 0.7165905256408335;
    msg.min_altitude = 0.9249625303662362;
    msg.max_altitude = 0.3056447705026817;
    msg.min_speed = 0.5556452099456177;
    msg.max_speed = 0.7504054850687808;
    msg.max_vrate = 0.842841450132079;
    msg.lat = 0.09176851275943265;
    msg.lon = 0.06586645600161878;
    msg.orientation = 0.395167693884368;
    msg.width = 0.7483583598930047;
    msg.length = 0.18204566392184518;

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
    msg.setTimeStamp(0.26906201082744363);
    msg.setSource(26651U);
    msg.setSourceEntity(30U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(152U);
    msg.mask = 83U;
    msg.max_depth = 0.13547556247026438;
    msg.min_altitude = 0.7179235487959096;
    msg.max_altitude = 0.2534361573460183;
    msg.min_speed = 0.4824444847098258;
    msg.max_speed = 0.12526624598109648;
    msg.max_vrate = 0.15907604468339098;
    msg.lat = 0.31769829513011716;
    msg.lon = 0.656494417381407;
    msg.orientation = 0.8946515170254599;
    msg.width = 0.8685866530986767;
    msg.length = 0.913419842885895;

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
    msg.setTimeStamp(0.25008836860106365);
    msg.setSource(35541U);
    msg.setSourceEntity(36U);
    msg.setDestination(14462U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.20047320775817623);
    msg.setSource(51198U);
    msg.setSourceEntity(45U);
    msg.setDestination(5205U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.9050025014154515);
    msg.setSource(39240U);
    msg.setSourceEntity(76U);
    msg.setDestination(5901U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.7017737179033543);
    msg.setSource(36827U);
    msg.setSourceEntity(207U);
    msg.setDestination(52679U);
    msg.setDestinationEntity(186U);
    msg.duration = 22367U;

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
    msg.setTimeStamp(0.4590107398904837);
    msg.setSource(12803U);
    msg.setSourceEntity(191U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(97U);
    msg.duration = 44512U;

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
    msg.setTimeStamp(0.3492226787794134);
    msg.setSource(54392U);
    msg.setSourceEntity(81U);
    msg.setDestination(41626U);
    msg.setDestinationEntity(12U);
    msg.duration = 7503U;

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
    msg.setTimeStamp(0.807532193461269);
    msg.setSource(43595U);
    msg.setSourceEntity(0U);
    msg.setDestination(1598U);
    msg.setDestinationEntity(157U);
    msg.enable = 81U;
    msg.mask = 2276742774U;
    msg.scope_ref = 2916765718U;

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
    msg.setTimeStamp(0.2006936733073148);
    msg.setSource(3684U);
    msg.setSourceEntity(39U);
    msg.setDestination(48331U);
    msg.setDestinationEntity(190U);
    msg.enable = 201U;
    msg.mask = 1115517372U;
    msg.scope_ref = 1323308813U;

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
    msg.setTimeStamp(0.13707110421132795);
    msg.setSource(64405U);
    msg.setSourceEntity(44U);
    msg.setDestination(12959U);
    msg.setDestinationEntity(40U);
    msg.enable = 15U;
    msg.mask = 1207273915U;
    msg.scope_ref = 3710676426U;

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
    msg.setTimeStamp(0.636262046698594);
    msg.setSource(8023U);
    msg.setSourceEntity(208U);
    msg.setDestination(31449U);
    msg.setDestinationEntity(180U);
    msg.medium = 107U;

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
    msg.setTimeStamp(0.5154193024840853);
    msg.setSource(6646U);
    msg.setSourceEntity(97U);
    msg.setDestination(65173U);
    msg.setDestinationEntity(219U);
    msg.medium = 61U;

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
    msg.setTimeStamp(0.4599977380475877);
    msg.setSource(52603U);
    msg.setSourceEntity(56U);
    msg.setDestination(44425U);
    msg.setDestinationEntity(16U);
    msg.medium = 129U;

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
    msg.setTimeStamp(0.2573607170527802);
    msg.setSource(12329U);
    msg.setSourceEntity(18U);
    msg.setDestination(356U);
    msg.setDestinationEntity(129U);
    msg.value = 0.831173129244057;
    msg.type = 37U;

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
    msg.setTimeStamp(0.18841028212412514);
    msg.setSource(65492U);
    msg.setSourceEntity(159U);
    msg.setDestination(45985U);
    msg.setDestinationEntity(125U);
    msg.value = 0.20515629081174636;
    msg.type = 63U;

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
    msg.setTimeStamp(0.7035596661901872);
    msg.setSource(44793U);
    msg.setSourceEntity(208U);
    msg.setDestination(996U);
    msg.setDestinationEntity(11U);
    msg.value = 0.860690774116861;
    msg.type = 27U;

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
    msg.setTimeStamp(0.2502776390099565);
    msg.setSource(8896U);
    msg.setSourceEntity(171U);
    msg.setDestination(16403U);
    msg.setDestinationEntity(236U);
    msg.possimerr = 0.7456267862156334;
    msg.converg = 0.4214794910207389;
    msg.turbulence = 0.2250475017251904;
    msg.possimmon = 128U;
    msg.commmon = 144U;
    msg.convergmon = 189U;

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
    msg.setTimeStamp(0.8617880409305506);
    msg.setSource(33392U);
    msg.setSourceEntity(19U);
    msg.setDestination(6776U);
    msg.setDestinationEntity(120U);
    msg.possimerr = 0.2768056592097371;
    msg.converg = 0.7101863721466198;
    msg.turbulence = 0.0042908284348570636;
    msg.possimmon = 184U;
    msg.commmon = 76U;
    msg.convergmon = 86U;

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
    msg.setTimeStamp(0.07063299662705702);
    msg.setSource(49753U);
    msg.setSourceEntity(112U);
    msg.setDestination(6702U);
    msg.setDestinationEntity(105U);
    msg.possimerr = 0.0011258562113554138;
    msg.converg = 0.7542539821000407;
    msg.turbulence = 0.6699040314527571;
    msg.possimmon = 226U;
    msg.commmon = 1U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.6485734008106968);
    msg.setSource(63010U);
    msg.setSourceEntity(107U);
    msg.setDestination(23916U);
    msg.setDestinationEntity(92U);
    msg.autonomy = 20U;
    msg.mode.assign("KYBOOYZIPJYBQZODRREEXFTOZSAKZKQDITKFUTBOUGUCHVHTAISDKSMNNVKGZUKVSLJZSIEZRZMEIXEWCNSUGUMBFGMLNAQLHWPXJCRCOFWVOYLQEXPMUEAPIIRAKBFRBIUHPRJXQFGAMJTTCHWXLOOVRQCQCTGHUTYZGWWRIQHWVBHQHPCEEMVYLDPNCXUVBWPSNYJAFRGMDXDNYAPVFQWFMXYDNBXZS");

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
    msg.setTimeStamp(0.033865556071995484);
    msg.setSource(57862U);
    msg.setSourceEntity(220U);
    msg.setDestination(23984U);
    msg.setDestinationEntity(184U);
    msg.autonomy = 195U;
    msg.mode.assign("TFFIHEMIJUEFMOHMWDYUEOLNQAHSHXAOTVLBTNATLMCAHARBEKR");

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
    msg.setTimeStamp(0.15834682735696715);
    msg.setSource(29768U);
    msg.setSourceEntity(74U);
    msg.setDestination(59597U);
    msg.setDestinationEntity(115U);
    msg.autonomy = 33U;
    msg.mode.assign("OYEUJPVHIIEMFUBKCJRZOJOWWPBMUTHJTGBNVHMAPSFGWWNYUJGLJELFZHAZVFKLETSMIHVSXCZUVXYAJGXPLQKPVYSGFYTUBPSFUUEYZWMLRXRTTAUAIGQLQJCBKNWDOBNHTRDDOWYJPIKFVCLPHSTRHDLAEGDCIMOLIWEGXPXFWBINTNQKZAIZUQSQZXAOCNXRYMNXGKNMBSKWONOMQHQLDKCCD");

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
    msg.setTimeStamp(0.13512612837750615);
    msg.setSource(39343U);
    msg.setSourceEntity(122U);
    msg.setDestination(27807U);
    msg.setDestinationEntity(239U);
    msg.type = 249U;
    msg.op = 247U;
    msg.possimerr = 0.3296437660834054;
    msg.converg = 0.5530491952470038;
    msg.turbulence = 0.11026008461643855;
    msg.possimmon = 231U;
    msg.commmon = 199U;
    msg.convergmon = 186U;

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
    msg.setTimeStamp(0.78255043251061);
    msg.setSource(6145U);
    msg.setSourceEntity(121U);
    msg.setDestination(56250U);
    msg.setDestinationEntity(192U);
    msg.type = 110U;
    msg.op = 33U;
    msg.possimerr = 0.36107377974150456;
    msg.converg = 0.3806481595691956;
    msg.turbulence = 0.7374439436260232;
    msg.possimmon = 19U;
    msg.commmon = 44U;
    msg.convergmon = 130U;

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
    msg.setTimeStamp(0.6921358865318901);
    msg.setSource(10484U);
    msg.setSourceEntity(232U);
    msg.setDestination(15692U);
    msg.setDestinationEntity(90U);
    msg.type = 93U;
    msg.op = 44U;
    msg.possimerr = 0.6757617368465685;
    msg.converg = 0.23802652855522188;
    msg.turbulence = 0.7294317088860938;
    msg.possimmon = 209U;
    msg.commmon = 123U;
    msg.convergmon = 133U;

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
    msg.setTimeStamp(0.4409981406563891);
    msg.setSource(4601U);
    msg.setSourceEntity(230U);
    msg.setDestination(28333U);
    msg.setDestinationEntity(124U);
    msg.op = 156U;
    msg.comm_interface = 169U;
    msg.period = 37923U;
    msg.sys_dst.assign("DXQHGJPHSPTKQWIXUKQTU");

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
    msg.setTimeStamp(0.14254201957487855);
    msg.setSource(63439U);
    msg.setSourceEntity(224U);
    msg.setDestination(26992U);
    msg.setDestinationEntity(94U);
    msg.op = 193U;
    msg.comm_interface = 109U;
    msg.period = 456U;
    msg.sys_dst.assign("KTYYZRGWGVQIXCYTWAUOOFEIUJSPUQAYLLGVYIXTDGFRKUOJPVDWNENDFUMBDORZCXJDGBHABVZHFFEXZDJIE");

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
    msg.setTimeStamp(0.9115642586552302);
    msg.setSource(11736U);
    msg.setSourceEntity(139U);
    msg.setDestination(24618U);
    msg.setDestinationEntity(138U);
    msg.op = 128U;
    msg.comm_interface = 144U;
    msg.period = 11305U;
    msg.sys_dst.assign("HBWCAIGIXCMOFKRTIDOSNDIRZCKTJKRFUHNGYKBQSHKDEZPQOLKWMUPIUZYOZNJOATP");

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
    msg.setTimeStamp(0.5062466765365913);
    msg.setSource(28305U);
    msg.setSourceEntity(192U);
    msg.setDestination(2942U);
    msg.setDestinationEntity(103U);
    msg.stime = 2406785251U;
    msg.latitude = 0.2143498857184084;
    msg.longitude = 0.4379200436329782;
    msg.altitude = 8204U;
    msg.depth = 48292U;
    msg.heading = 59018U;
    msg.speed = 1030;
    msg.fuel = 14;
    msg.exec_state = 5;
    msg.plan_checksum = 41961U;

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
    msg.setTimeStamp(0.43737192761662524);
    msg.setSource(43119U);
    msg.setSourceEntity(38U);
    msg.setDestination(33259U);
    msg.setDestinationEntity(98U);
    msg.stime = 3076673115U;
    msg.latitude = 0.6234658809001562;
    msg.longitude = 0.6334505323414328;
    msg.altitude = 27298U;
    msg.depth = 29988U;
    msg.heading = 42597U;
    msg.speed = -4359;
    msg.fuel = -79;
    msg.exec_state = -12;
    msg.plan_checksum = 57536U;

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
    msg.setTimeStamp(0.1282478565673575);
    msg.setSource(3368U);
    msg.setSourceEntity(253U);
    msg.setDestination(39857U);
    msg.setDestinationEntity(125U);
    msg.stime = 2989884160U;
    msg.latitude = 0.613506994192571;
    msg.longitude = 0.3168537475016253;
    msg.altitude = 2046U;
    msg.depth = 27166U;
    msg.heading = 29658U;
    msg.speed = 6381;
    msg.fuel = 125;
    msg.exec_state = -113;
    msg.plan_checksum = 705U;

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
    msg.setTimeStamp(0.23195914151640085);
    msg.setSource(9572U);
    msg.setSourceEntity(82U);
    msg.setDestination(21519U);
    msg.setDestinationEntity(208U);
    msg.req_id = 1124U;
    msg.comm_mean = 229U;
    msg.destination.assign("IGAOSLWDBUJQIYURGIFXFQJVQNFBMVMJEZRFQWQGEJMCCNDPHZRECRYTWMKFQWSWNLXRYVDATSWZHDOBBIDHEP");
    msg.deadline = 0.402944212464904;
    msg.range = 0.6323455682588988;
    msg.data_mode = 31U;
    IMC::Abort tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UHZYEBVFYAMVOFKWDLNMZHBVTJOTVIFVNHNJPCMDNPTGEOIEPAUZRAVGKTEXJNZXCYDQYYBRGFLWULSQSWFVPWVYHQKWIRXKH");
    const signed char tmp_msg_1[] = {-94, -30, -94, 108, 84, 44, -23, 46, -28, 66, -95, -29, 10, -119, -127, -30, 102, 84, -101, -70, 79, 103, 49, -50, 34, 30, -109, 30, 65, -26, -66, -91, 15, -113, -124, -62, -105, -90, -23, -106, -108, -102, -111, -97, -4, 35, 86, -71, 10, -30, -121, -9, 89, -26, 126, -111, -45, -100, 15, 40, -82, 64, -115, -123, 108, -123, 66, -95, -96, 13, -78, -12, 91, -92, 0, -43, 116, -62, 43, -56, 69, -19, 70, -11, 61, -124, 124, -37, 41, 79, -28, 28, 120, 75, -20, 61, 111, -7, 4, 90, -121, 31, -105, -114, 36, 5, -111, -104, -47, -48, 0, -70, -86, -65, 44, 67, 76, 16, 117, -57, -54, -69, -79, 109, -108, -83, 44, 99, 52, 54, -18, -106, 91, 6, -105, -118, 78, -26, 3, -93, -54, 12, -2, -118, 29, -102, 17, 18, -90, 59, 110, -8, -126, 115, -33, -95, -111, 118, 5, -29, 24, 50, -64, -86, 124, 2, 2, 70, -17, 60, -42, -51, -119, -33, -75, 10, 63, -110, 99, 46, 36, -63, -25, 59, 13, 103, 61};
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
    msg.setTimeStamp(0.18065771253369933);
    msg.setSource(27463U);
    msg.setSourceEntity(114U);
    msg.setDestination(29409U);
    msg.setDestinationEntity(192U);
    msg.req_id = 8876U;
    msg.comm_mean = 241U;
    msg.destination.assign("PKZSRGESNUOEFZORQCVQ");
    msg.deadline = 0.8784331937823954;
    msg.range = 0.937844520011697;
    msg.data_mode = 182U;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 141U;
    tmp_msg_0.frequency = 4061178808U;
    tmp_msg_0.min_range = 8566U;
    tmp_msg_0.max_range = 6738U;
    tmp_msg_0.bits_per_point = 71U;
    tmp_msg_0.scale_factor = 0.9857968460433315;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.9906437571751929;
    tmp_tmp_msg_0_0.beam_height = 0.9600719835968368;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const signed char tmp_tmp_msg_0_1[] = {-79, 125, 84, -74, -86, -68, 18, -72, -117, -34, -118, 27, -36, 25, 32, 126, 66, -43, -107, -103, 22, 5, -12, -109, -110, 37, -2, 84, -117, 4, 88, -58, -120, 109, 114, -22, -38, 57, 65, -64, 26, -76, 59, -82, 27, -89, -124, -128, -106, 113, -115, -84, 41, 126, 56, 15, -31, -111, -85, 95, 119, -12, -123, -114, -69, -66, -44, -1, 36, -113, 84, -116, -107, 48, -10, -51, -45, -43, -63, 54, 63, -128, 56, -34, 1, -28, 27, -117, 55, -12, 53, 85, -6, 3, 13, -93, 44, 16, -82, -96, -120, 95, 28, -103, 96, 123, 43, -106, 107, -65, -87, -56, 33, -99, 82, -93, -19, 77, -84, 62, 63, 71, -6, -77, -92, 61, 107, 106, 25, -102, -17, 91, -98, -35, 51, 124, 106, -63, 122, 1, 68, 104, -58, 50, 28, 79, 22, -16, 34, -98, -102, -121, -67, 23, -106, 25, -82, -86, -128, 63, 29, -81, -68, 65, 78, -26, 87, 102, 44, -76, -32, -114, 81, 75, 95, 124, -34, 74, -6, -91, -89, 43, 64, 109, -105, 9, 7};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LTPFXYEXNOWKNFBZADLHOSUTNGVDMVHGZFXYFPDLGZGKOCUZUWRVAKRQOVVNHZHXARJFBZPWNGYIPFQMZSTQKYHQELMQUXWAWZVOMAHUTXZYTSQJMUCEBICOVRKKBRNCSIJYDHSLEKBYHOFXCNDI");
    const signed char tmp_msg_1[] = {11, 1, 27, 61, 30, -96, -56, -29, 112, 58, 100, 95, -97, -5, 33, -116, 41, 113, -116, 42, 42, 97, 121, -55, -118, -94, 1, 101, 76, 30, 14, 95, 23, 55, 99, 74, -66, -66, -124, -69, 88, -55, -51, -93, -74, -76, -114, 87, -48, 49, 14, -22, 70, 1, -108, -27, -83, 101, -24, 45, 55, 109, 23, -123, 97, -6, 46, -31, -58, 23, -72};
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
    msg.setTimeStamp(0.49898629493599556);
    msg.setSource(31599U);
    msg.setSourceEntity(253U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(67U);
    msg.req_id = 35931U;
    msg.comm_mean = 48U;
    msg.destination.assign("BDHFYFPUNCHYYGSFHGWMZGXEBDCKKGWAWUNYGCWUBUVYRTHUTHEFKCPPRZHEJBVMCATZXUL");
    msg.deadline = 0.6604577136237116;
    msg.range = 0.053485011053977294;
    msg.data_mode = 143U;
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("MUDVNUNLTNEWCROPPSTMDGPPTYTYHTWFWEYNTHJGEFVUGFYINJXWXMNLPSWMAIALRJATEWVPYJUNKSKTAOOZJCORIKWCLHUXCIIEVMFKHNDLBQHISUYQZFVSODHRTXRRRYKCAKZWMXFVLAA");
    tmp_msg_0.value = 8U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IWBYXBLZUOPKWRVCRGGDNPMMWYDOIBRMWEULSEZUXABHWAAYDOCDAOIQMCGDSYBSKLHAMZXAEHIQITFMWLFROVNPKDMQDRT");
    const signed char tmp_msg_1[] = {-28, 87, -77, -5, -55, 0, 65, 42, 22, 58, -37, 24, 21, -32, -46, -36, -121, 100, -32, -118, 95, 4, -114, 9, -116, -37, -57, 96, 90, 85, -4, -61, 109, -53, 64, -35, 58, 76, -121, -55, 47, 48, -33, 8, 82, -112, 85, 26, 47, 55, -107, 91, -62, 120};
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
    msg.setTimeStamp(0.8006535747121193);
    msg.setSource(63378U);
    msg.setSourceEntity(190U);
    msg.setDestination(15442U);
    msg.setDestinationEntity(66U);
    msg.req_id = 26539U;
    msg.status = 36U;
    msg.range = 0.6958992965251692;
    msg.info.assign("HSRVEACOPEOKCOBBDYNDQTNBVPEYGMRGFRLTPSBPWASYKSDHDKMRVLMWFHKBSEIDNCVZHSMGAYVPLPEZVXTQJPXYQUVCCGXPLNYLZOLHWUGTFIFNZJMCZUVLIJWJDXUUAZVQHKHDMZFPBHSTIWOQDSFXFNUKWGHOOERQFWCVGKDUJLEAABXMYKORTJITCBKRAUREIXYKXTUUOZWRYAHIWXNNEBFMZWIPLBNZCIGDXNSLQQGTMQIJATOQGMJCA");

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
    msg.setTimeStamp(0.0035783685906694007);
    msg.setSource(9198U);
    msg.setSourceEntity(77U);
    msg.setDestination(32510U);
    msg.setDestinationEntity(118U);
    msg.req_id = 6893U;
    msg.status = 199U;
    msg.range = 0.889394437666779;
    msg.info.assign("JFSEFZPPJBQNPHUJYATUIZWTLJBYRUMHJSOHTQMANVFNZMGAGPGTHBZTDSXEEDHIXSRFUHDYFXAZWIQZOSNWMRIHYVRMLVRVKCYNVYEDKNTWBWMQFCPSO");

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
    msg.setTimeStamp(0.29458518208777984);
    msg.setSource(11667U);
    msg.setSourceEntity(6U);
    msg.setDestination(4651U);
    msg.setDestinationEntity(143U);
    msg.req_id = 25464U;
    msg.status = 210U;
    msg.range = 0.9262644084659554;
    msg.info.assign("CXPEGUTYKIWYTQUTCZAEKIMTNHFZBFZEJZARKDZZQOMWGBPSJKVWIIXLQJKPTDQXQWNMHDYXPDIFCVRVYANMFQLNAUVEHOGYCUUGDXWJHKCDYBQPIRQOLGBWLOXSIPBBDSPZHPJRHIFFCMJWADOVSUDNIJQOALWZTXEKNTUWKREHHLHSRMDVUWNNVZYYNSASJACMVMLCYYOGBMEZUBMELOCKQFJPEJGSRVXPGRSVBUSCAFFGATRKTXXLEHFI");

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
    msg.setTimeStamp(0.21810480824364198);
    msg.setSource(42267U);
    msg.setSourceEntity(171U);
    msg.setDestination(34603U);
    msg.setDestinationEntity(5U);
    msg.req_id = 1503U;
    msg.destination.assign("QYOSFVKOBQIEHRTMVNRECFWFVQJJUEPUALFGIUCHAADLIPQAD");
    msg.timeout = 0.42355957985741377;
    msg.sms_text.assign("YHLIZIPSRFBDFEXMIRHXOBBJKMVYNQAANVTELBGEPQJWGSHUUBSXJJXFZDYRCWIGZTWTW");

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
    msg.setTimeStamp(0.05346878581172965);
    msg.setSource(37783U);
    msg.setSourceEntity(101U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(138U);
    msg.req_id = 14523U;
    msg.destination.assign("QZYOGAYDSTNIQUWVNVSGHZTHUYHZWBSFYPDEYBVBZKOVABVJXRYXALVFTDAIFXLNCFZIOMJILSXNFTKMELJEFBSDLCLPKVPMOGRGNIFPMTGSTLCWRFUEFAMYOKJOYUUJIWEPAYRWPKTNKEHJOCMWRDRRCBUPOCCHD");
    msg.timeout = 0.7082687135136033;
    msg.sms_text.assign("AHXNPSFWEXXVZVNCGDPYGVEZHQCZNPWDQSAJJRON");

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
    msg.setTimeStamp(0.31765654833835677);
    msg.setSource(63727U);
    msg.setSourceEntity(110U);
    msg.setDestination(32564U);
    msg.setDestinationEntity(138U);
    msg.req_id = 40451U;
    msg.destination.assign("LQVDZIAAWFYSNIXGXKIPKHTMSBIEMOBPRMXYWIGSBCCPBBFTXDENDVJBHLVDDWSBYJKHUPUSWQ");
    msg.timeout = 0.3872059645285558;
    msg.sms_text.assign("VXETTEDUFLQTCLBAWHCBXDQYWUBPTSYELJO");

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
    msg.setTimeStamp(0.43340639808375414);
    msg.setSource(17812U);
    msg.setSourceEntity(177U);
    msg.setDestination(60847U);
    msg.setDestinationEntity(52U);
    msg.req_id = 8444U;
    msg.status = 94U;
    msg.info.assign("FACANURCUJDXIMEVVXSYAQVRRYQIDHQFDESXOMFBFZOGYWNIPOGHTCWLKSLKHTJUXGZVBU");

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
    msg.setTimeStamp(0.04016342406962958);
    msg.setSource(52001U);
    msg.setSourceEntity(183U);
    msg.setDestination(5022U);
    msg.setDestinationEntity(5U);
    msg.req_id = 31736U;
    msg.status = 111U;
    msg.info.assign("YUSLOQJJTFMCOLSCUYZSODFTKKHX");

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
    msg.setTimeStamp(0.003958527430377945);
    msg.setSource(975U);
    msg.setSourceEntity(195U);
    msg.setDestination(35533U);
    msg.setDestinationEntity(182U);
    msg.req_id = 11940U;
    msg.status = 154U;
    msg.info.assign("UBLUYHKYMSQGSXCUEJPMOPEXPBYIHECLEQIKNKOCIRODFVP");

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
    msg.setTimeStamp(0.0014882006612522147);
    msg.setSource(50788U);
    msg.setSourceEntity(225U);
    msg.setDestination(10720U);
    msg.setDestinationEntity(35U);
    msg.state = 151U;

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
    msg.setTimeStamp(0.09065078186699238);
    msg.setSource(46136U);
    msg.setSourceEntity(40U);
    msg.setDestination(53985U);
    msg.setDestinationEntity(136U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.25926597048108124);
    msg.setSource(11370U);
    msg.setSourceEntity(141U);
    msg.setDestination(53244U);
    msg.setDestinationEntity(196U);
    msg.state = 18U;

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
    msg.setTimeStamp(0.15954035198988992);
    msg.setSource(27775U);
    msg.setSourceEntity(142U);
    msg.setDestination(29721U);
    msg.setDestinationEntity(46U);
    msg.state = 139U;

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
    msg.setTimeStamp(0.48180845885004053);
    msg.setSource(29030U);
    msg.setSourceEntity(240U);
    msg.setDestination(41598U);
    msg.setDestinationEntity(214U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.7337648194764723);
    msg.setSource(59859U);
    msg.setSourceEntity(38U);
    msg.setDestination(41700U);
    msg.setDestinationEntity(196U);
    msg.state = 112U;

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
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.13832541207031968);
    msg.setSource(62194U);
    msg.setSourceEntity(2U);
    msg.setDestination(54359U);
    msg.setDestinationEntity(231U);
    msg.req_id = 2507U;
    msg.destination.assign("VDGOMIPHMP");
    msg.timeout = 0.4342564208752522;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 36041U;
    tmp_msg_0.lat = 0.38777256414220707;
    tmp_msg_0.lon = 0.9706238028010296;
    tmp_msg_0.z = 0.8256242649845358;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.speed = 0.9351326810732705;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.roll = 0.7673716060612084;
    tmp_msg_0.pitch = 0.5289704379244908;
    tmp_msg_0.yaw = 0.3949323229131503;
    tmp_msg_0.custom.assign("VRFCQBAYJBTVTOSSDGCDFIYUZZFJSELNUAGMJCVYUKISXROCZRVUFHWAJHSGAPYCBHMXGONTQIAILQGVZJBPDIZRMGQXCECOKJOWXWYENZRPMIIPMVODYQKQGNSQRGPJTEDHUPXWHMCWURYBNXGKRFDJHMUIWTNXXBKXSZPLNCWQYAETAWRFQZGYKVLTZHFEYOBFLTWIJKHUOCHNBOVLOKLSFDPDEDTLLTMILSXKZUMRUEENSAVQ");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.44368440791948005);
    msg.setSource(18995U);
    msg.setSourceEntity(196U);
    msg.setDestination(14976U);
    msg.setDestinationEntity(60U);
    msg.req_id = 64005U;
    msg.destination.assign("VJOVFOOJMARGHBSGWXETCIFNNAHDUJVVNLRBGEFGRDFWVYORQCWPHGWXVATQTMJSIPBIENTSYQZYOQNNO");
    msg.timeout = 0.6979719871686189;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36487U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.7385675697791843);
    msg.setSource(40490U);
    msg.setSourceEntity(60U);
    msg.setDestination(40444U);
    msg.setDestinationEntity(179U);
    msg.req_id = 17325U;
    msg.destination.assign("TKZIWOJMVPTCIWFHLFYBVUNFJNLOREEXCQUFXYQDIYVSRMMBOBYCGPLHZEEESYZSKYPRWAATLBMQHXFSJFDGVLHVXVPRTZAVLZNBMLQXKNDEESJUQBRPQGUOVXJIJTRZEVOSJAGOIXDHQCMNJMNORPZKBZSUBGUHGDCWBMASYDNOGWFHRXLIFDWGWUASCADIJQDSGARTQGHPKAONOCFIMTIACXZUQPUBK");
    msg.timeout = 0.8280158345272205;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 9181U;
    tmp_msg_0.status = 34U;
    tmp_msg_0.info.assign("OLDCKUIFADQEKGNRYMIBYLWBPHRXEULWZCFNUTFTAYNJWZUWNAUDAASIMTWLVKFHGDQPZXCTXAYGDSBJSXMUMQKIPQBDNZKSEYOSHHNFRCSNBCJWMCGM");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.8265784687341071);
    msg.setSource(57816U);
    msg.setSourceEntity(242U);
    msg.setDestination(10706U);
    msg.setDestinationEntity(80U);
    msg.req_id = 3782U;
    msg.status = 182U;
    msg.info.assign("KXJHTIVSDCBQAPEGCLNRPZGADQCAILFTTZMHOOAVMYWMCWMHQEISZMWPGIPIBDCBLGVPFAJYYWXVPXIRAXXEOUSRKYOSLIBAGGVOLUTTKSRDPJETHHIOFNDQCXBIXYVBRCDLZQJVNGWZENFKHLGUSENJUEWRSNKZNXKUHZDRHFJODOABXMDMSEKYQBVFGBMZXJFBSKNTQVFAUMUJTRJLLPLFUYGYEWNZWQMZUVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.8358682919958539);
    msg.setSource(39723U);
    msg.setSourceEntity(3U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(96U);
    msg.req_id = 36213U;
    msg.status = 37U;
    msg.info.assign("ZLOFFPZHOTMBCYAEUGHVYURHPAKSBVZGAKLIKERZHBHMIYWTDTNNRCMNADTYGLIRAERODRSDWEJTOYEFJBIBCKJMEKPVGBNMMQNAIIGJGDUIZFYQPLQYZBXLAYUXKLXOYUHCPHTWPHPZNARVYOTTQOWRSSUEHXADJGVXVXDWENUUCDVOJWFMGQDWEPXINJMNBLKWFBJGCLWIOPXXVPFSQTVNZCFCDIKQMHZSLEXSTKUFQRCGZCSSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.4753046805459913);
    msg.setSource(34533U);
    msg.setSourceEntity(230U);
    msg.setDestination(41255U);
    msg.setDestinationEntity(129U);
    msg.req_id = 37395U;
    msg.status = 158U;
    msg.info.assign("MTHFYWPCCDSNYYXQZPNTGXKACGLFRFKOGRDIVYFVKINQESDPMJLDYJKJRDQGCHILXOJZNZIGWFZRETEHXSUPYCWHLNBGQFKKTMYZAMWQBUJLWDHNRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.6025637250805289);
    msg.setSource(44560U);
    msg.setSourceEntity(123U);
    msg.setDestination(36284U);
    msg.setDestinationEntity(42U);
    msg.name.assign("SPUOWCMNBKAUNJXPXTZDBVXFOTLVKXFYRMTWMTGSSSVANXTKOSCWGHUFYFUDJRUSDARZAUBVQKJGNHAXLNYZD");
    msg.report_time = 0.17492764924979143;
    msg.medium = 220U;
    msg.lat = 0.9652934150682928;
    msg.lon = 0.7019932891359268;
    msg.depth = 0.49337494154098227;
    msg.alt = 0.3389901500524555;
    msg.sog = 0.08684389571593265;
    msg.cog = 0.057751862583064306;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 152U;
    tmp_msg_0.clock = 0.4692487620701753;
    tmp_msg_0.tz = 125;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.6966653622606432);
    msg.setSource(9014U);
    msg.setSourceEntity(120U);
    msg.setDestination(86U);
    msg.setDestinationEntity(172U);
    msg.name.assign("HXKXFUDBLPJSDALVKYZFHYZDPPLQT");
    msg.report_time = 0.48846389704273674;
    msg.medium = 3U;
    msg.lat = 0.9642671220252849;
    msg.lon = 0.29462865169170127;
    msg.depth = 0.07539792408776425;
    msg.alt = 0.6987133163813396;
    msg.sog = 0.12714599720169661;
    msg.cog = 0.8370524383761537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.9112705510995582);
    msg.setSource(57536U);
    msg.setSourceEntity(133U);
    msg.setDestination(22139U);
    msg.setDestinationEntity(215U);
    msg.name.assign("XKQQKBYUTTRBNUDOQXXSJMUHADPQGSZJKJNCDPEMVFZGOAZHBHLIPQOIXKTBWXMZGQKAUAMLGGERSADZFNDJZOMCGCLBJVKZGMRZPKCWQBYIJDOFRZEXXHEURCBHIIECYJLOQWAYBQFCOKLAFNNSSSURKTVBRLVSFAHJLPIYENRMWVTWCEYSWCDNLPAUXUPDQLDYIBOHTJYNYSWHJWVFRKMPXIIVZEHPUVMTELADGSEVUWIGGWTFFOCYMONTT");
    msg.report_time = 0.31249404445654194;
    msg.medium = 143U;
    msg.lat = 0.507944025326932;
    msg.lon = 0.37053869893808067;
    msg.depth = 0.07222050893800913;
    msg.alt = 0.10046679878354958;
    msg.sog = 0.6893552132444829;
    msg.cog = 0.4347250272092472;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.36418114071053953;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9371857784015649);
    msg.setSource(19542U);
    msg.setSourceEntity(225U);
    msg.setDestination(27517U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.8651797033089165);
    msg.setSource(7618U);
    msg.setSourceEntity(208U);
    msg.setDestination(34075U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.061460314040534425);
    msg.setSource(4671U);
    msg.setSourceEntity(172U);
    msg.setDestination(31811U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.687963510665625);
    msg.setSource(5782U);
    msg.setSourceEntity(237U);
    msg.setDestination(34476U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("WFFSVKMXYSUSEDUQTGIPLREVFSFMEZPKPGYDDDXEXHAUFSJJIXCGGOOQDGKZSCRCCNTCOOOYNHLLUTYQTYJABLBOPBLXWVJTJD");
    msg.description.assign("VJRXKFTRNXPJOUHGGAJCCJTQQRBZCLEVYNCDZZEJZITHGMVMOZUPGZTFCBEEOVGPDHHXIMNPBODHER");
    msg.vnamespace.assign("QIJMRZMLWSCRPCGXCRAIXXNNOMYWJVMINLPOHUREFOJIKKEPDSWFFMMHWVTBGDOJDRVEYUUSPWZALBQGOTHJEDWHFNDHGTMEJLPFAZQGKNQHBPKOJUUPBRLMYXKVBSXIZCBBMTRIOJRZVAHTNPATFZUUSDIGGXKYIOAJUBOVCWCLSSAWVNQXBBAKPDNTGTERZH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QYAIHKSDXKPIMACTATWRLOXFPQBCIKIVRNXEOMISAVGQNCBCLGIYJYABPOJECLV");
    tmp_msg_0.value.assign("DPQMWXGCAJCIYMWFNDANQTZGPKUXSOWVTKAHNDROTNMFAVFVFGVODNOOKBDGFKVMYYIUPKJBKCYPURLVNHJXQSWHARHGWTEIKCAVBOELAREWNPDQEWAFIZSVGZPZHFBWMBOCEPHRMTBTMPUIDULPXFNISJDZTCATSHBBXWE");
    tmp_msg_0.type = 115U;
    tmp_msg_0.access = 187U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FAQVPJVSRBUDLHTYCDLPUEEAXJGOAUYJKFUKXIGFLORWLUKGZQTUSRNAOXSOBVVUYCLQXPNIDZAV");

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
    msg.setTimeStamp(0.4391492793637619);
    msg.setSource(59269U);
    msg.setSourceEntity(125U);
    msg.setDestination(14792U);
    msg.setDestinationEntity(155U);
    msg.plan_id.assign("AFQLLHFSKTPXGFFZQOCTOKMADSJLGAGDJJGOIYMHAXRNZALTKJPTXUTJFKYGINNXFVKJRUYFEUSDZOGVQDTIJNVPPECJMXASYYMBWPONRXLKEORQHBQHFLYEUBVNVRBMKIIOMRMGDLVRKYSHKDMVQBCNCHZDWZVKTWWZEQUQCIRGAEFXQTWTXN");
    msg.description.assign("LZIMHDSEVPHGGJEBSDBYZMPWKMCPQOMATKANWFUQHZMFR");
    msg.vnamespace.assign("QNYOCVVEEGKKSJHUDCWJMPDQFJAFZBUPFBFGMMRUIIYNBIKQMEQYHPGTUCEYLAVLWPWYRMQCKXKHTDFIDZNWONUAIBHAXROLWPSTCVLVAYFPBCJGLIIDZNFEOZNAJ");
    msg.start_man_id.assign("DXJACYPPVTQMMPHGUXQOAIOCJWWTUIJVUEGAISFIFVUSICONDYEPSTH");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("RNZNUTDNVNRHRUJQAQEWPOQTXWSDHCELZPYNOQNXAPDORAJDRUVIXNKSBCQDYJKQLMBJVZOPGTJJJKPOPVAABRBAZOTJTCWSWVLUFIFUEKKHQFNZGYHRAVMUVPUSFLRXLUEYZUMBFYKXEMSEBMWCFMOLFMFHZALHEDGGDOUCBZBJTYIEROKIPOVXNWXTWGWFYSDJCLSZIMGXKNSIAYQGYIVD");
    tmp_msg_0.dest_man.assign("ASEQAIUUDMRPNWWZSWGGHMYMUBCHKTWECPTCCMVIPTTPKSHMLNOVWZCQXRYISNOKMVFQQHRKNPITGHKADCNBUQJVTFNIZJZGLFIJAROOLOZBUWCKSEYPZJARGXXVGZDVTDGFJHXWBEIZHPTWLYOKPRJDJKEIKIXBGDALOKFSTUTNZCHLJOFELEMYHWAYAFYLQBGEXMXUOELNDABUVQDYJSBGRMJFDVRCQSDCLSYYXQFAZ");
    tmp_msg_0.conditions.assign("ZTFCKITURGVLHHWUNMDQJYKIWDSJUSMHHHECMBHYTTOVCGVGROMQAFVLFKHIXOAIOILAWZBRSSTWPGGLVXUSEXWAAEENYBRCCMBRONPQVZIWWFRKBXTNECNVXGPZOVBOFFF");
    msg.transitions.push_back(tmp_msg_0);
    IMC::FormationEvaluation tmp_msg_1;
    tmp_msg_1.type = 94U;
    tmp_msg_1.op = 248U;
    tmp_msg_1.err_mean = 0.6580766821529522;
    tmp_msg_1.dist_min_abs = 0.45902074912618973;
    tmp_msg_1.dist_min_mean = 0.5916208161427029;
    tmp_msg_1.roll_rate_mean = 0.9037287643792207;
    tmp_msg_1.time = 0.7331023416670934;
    IMC::FormationControlParams tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.action = 139U;
    tmp_tmp_msg_1_0.lon_gain = 0.2972917690103031;
    tmp_tmp_msg_1_0.lat_gain = 0.06558771770504646;
    tmp_tmp_msg_1_0.bond_thick = 0.11613881458563147;
    tmp_tmp_msg_1_0.lead_gain = 0.2645110053566261;
    tmp_tmp_msg_1_0.deconfl_gain = 0.7650476501953877;
    tmp_tmp_msg_1_0.accel_switch_gain = 0.9718227239688089;
    tmp_tmp_msg_1_0.safe_dist = 0.23724074951593144;
    tmp_tmp_msg_1_0.deconflict_offset = 0.13527927175527787;
    tmp_tmp_msg_1_0.accel_safe_margin = 0.7390234903740819;
    tmp_tmp_msg_1_0.accel_lim_x = 0.340850470738962;
    tmp_msg_1.controlparams.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SoiCommand tmp_msg_2;
    tmp_msg_2.type = 214U;
    tmp_msg_2.command = 194U;
    tmp_msg_2.settings.assign("JEVKCCTFHMQXZOMCBQGYFUJCLSQMXEOYETXEOUKSMFYDZNLJKVMVVNKKXMIER");
    IMC::SoiPlan tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.plan_id = 35823U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.lat = 0.6871486265001675;
    tmp_tmp_tmp_msg_2_0_0.lon = 0.7487971593468222;
    tmp_tmp_tmp_msg_2_0_0.eta = 1376057316U;
    tmp_tmp_tmp_msg_2_0_0.duration = 10692U;
    tmp_tmp_msg_2_0.waypoints.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.plan.set(tmp_tmp_msg_2_0);
    tmp_msg_2.info.assign("NWYQBBOBXJYFRPMLRBSISIKVBIOUEKFWYJXACAPHBTUSHAVWIJFOZSHEIULZIFULZGSHNDEOVKCEDDLUVEYQWEJISIDTCNPAETDGNCRVQJKDRGFHQWWDGDPVYFCTRRYEJMQOOXZSONPRMXBYGRGIPHDCHVKZEQBXCWQALLKBMAHHKPYCXSLMVMPFTEQFKGAFNALMJVQSOCAWZQULALNYNTHYBXNZSOMGMMWVPKZXORJJNGXKTTJUIPDXZUF");
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
    msg.setTimeStamp(0.4807438950213707);
    msg.setSource(26204U);
    msg.setSourceEntity(198U);
    msg.setDestination(34406U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("GINWUWYMIQJGLRFHDQYWTSOMFKOPZZMZVDQZLLTSFRDSUDPGBRMVKIWAEBHUQPJGVUQUGQOSELWFCTXOXOFOUPHYEDVVKXLPUVYVAIOMNNKMFGIEXRPCATNKATZFPDJPYIGHIOQIABBADYIDVTVFTKCGLCQNAPYCEZSOTFCO");
    msg.description.assign("YUJJYCCMWMYDKWOMRWUGLXBSWZRCLIGVFHVTQOLFKVZTTCPIONVWRZAJQVGAEVMSFEWSPPRVIRSHMENHMYDFCKCDJNKHIGQSATUDOLJBXIVXRPGOUWPNHI");
    msg.vnamespace.assign("NNZCBKCBTTJXSQPZABELILYNHMJTPZOHILSFUDSYIFDSMBFCJWKAZMXUPBXJCJLD");
    msg.start_man_id.assign("XZTSJCDEZUTMHZTVHNTAEUOAVZVRBVXDXCZVY");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("DAVPHHPFKJYLBDFNGLMXEIDIYAOWVJUEXJYVUHDGULSSZORPVIHUWJHSGXWMKLEXEUQPPHUGZMPDTRAKAZAZKLLMRONGO");
    tmp_msg_0.dest_man.assign("RAPKTQQKWFYOMUZGNWZ");
    tmp_msg_0.conditions.assign("ARJZQZNEIEMJDLNOWEOTUOFQIRUUGT");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 4368U;
    tmp_tmp_msg_0_0.lat = 0.15664903675102015;
    tmp_tmp_msg_0_0.lon = 0.44424546784620544;
    tmp_tmp_msg_0_0.z = 0.27013544637934184;
    tmp_tmp_msg_0_0.z_units = 139U;
    tmp_tmp_msg_0_0.speed = 0.7572589664963969;
    tmp_tmp_msg_0_0.speed_units = 115U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.6656421504636028;
    tmp_tmp_tmp_msg_0_0_0.y = 0.26457610939735665;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6075205417717043;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("ITQUVSQCFVYFPMIAWAAHMHRZGBLZGRXINZMDDPLRBWLYHLAJSOVWFPFWXZXHEFURGHPQSUIDUCPOZUDEQYGIDIYGVTTLBKVTCJLYXCPEBZJMFNZMMNOKBNGYSMOKCQLLATGTZWQCXUNLAYKEQVVNVEGCJSKTFOWXXAFLGQVDUOKAQRNMHUIHIKJCAW");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::EulerAngles tmp_msg_1;
    tmp_msg_1.time = 0.8117172760220743;
    tmp_msg_1.phi = 0.8297159431434767;
    tmp_msg_1.theta = 0.9963143460811772;
    tmp_msg_1.psi = 0.11024853937721812;
    tmp_msg_1.psi_magnetic = 0.06328769060272266;
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
    msg.setTimeStamp(0.26962448425591845);
    msg.setSource(24147U);
    msg.setSourceEntity(54U);
    msg.setDestination(51005U);
    msg.setDestinationEntity(101U);
    msg.maneuver_id.assign("ZOUPDITGXKTIQUZRBWWDVVGQEDZSKLXDBJGSGLLHIALRMQJXHTPQUKHNXWRJWCQCPVVYRBJDECNDRFZZYLTUBWHYUHJBTFVRWBIQKKKIRSNSUYAESWAOENVOGIAALUKHXYFMEHJNPFRMCBPZCASZBMDOCQPDHMXGIJOWSXMNUBJYYCBONQPFNGFOTEXNSCOUALWQLTAUGSKCWHA");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.17653854468565178;
    tmp_msg_0.lon = 0.12265885586388237;
    tmp_msg_0.z = 0.2944791259096572;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.speed = 0.4946912972706673;
    tmp_msg_0.speed_units = 225U;
    tmp_msg_0.abort_z = 0.8385740529641942;
    tmp_msg_0.bearing = 0.6856947675361997;
    tmp_msg_0.glide_slope = 192U;
    tmp_msg_0.glide_slope_alt = 0.7854516263186427;
    tmp_msg_0.custom.assign("HWBDNJKJHZZXGEFCJHPXSQYGFFTFYVMVGAVANRCESHUCYUTQOBTPBDUDXPLIDAKGXMBGWXIWCOEQPHBJHJOCEGFICPNQGAUGTLWLZNZXQRAI");
    msg.data.set(tmp_msg_0);
    IMC::PlanControlState tmp_msg_1;
    tmp_msg_1.state = 73U;
    tmp_msg_1.plan_id.assign("BYGCNMMQGSQXFRFDIEWNLTJPRELWEPKEQCVOMNARKPCXNLVBWXGEWZRZSQQPSLVQBHIZFRZTGSIBBJYDSNCDFTVOXMVWHGMPTHDHJTVEAIFUTUNWAKBMCBHLAYSOIRNTUKQJADSUGYGOXZOGMUWHWNBIHARPECXJIATWBKCLYQQAPLKFVFCXAKXKGOCAP");
    tmp_msg_1.plan_eta = -2119163111;
    tmp_msg_1.plan_progress = 0.45941669482366065;
    tmp_msg_1.man_id.assign("IFPIYAMBPKJMWVPFFRDWQPDSSOQFUVSSNDXNLQBMRAAIOAKXGRHZNMLGZPPQVYBWXQTBUJQRLYAVBHGRXHGRYVXROOZCINDUGEODEGIDHUJCSEWWBKBKLMVCOZADUCJYNHJSLVDYWFKGXKPKFUPWXNCNETEBTJTHCBFCMRLLRJCYOJTTVNAXGAJMITQWIOPDQHVUXCZOHIAMCSQKYEIOYEAWEZGWZTMNZRTTBQUHZXVFEKPSGLUKLSMEHJZI");
    tmp_msg_1.man_type = 50309U;
    tmp_msg_1.man_eta = 399368950;
    tmp_msg_1.last_outcome = 115U;
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
    msg.setTimeStamp(0.462787995040851);
    msg.setSource(55890U);
    msg.setSourceEntity(25U);
    msg.setDestination(32372U);
    msg.setDestinationEntity(217U);
    msg.maneuver_id.assign("TGGBGSHYDZSJQOHHEMEFNPLBFWFIRPCGXCTVYVEVLHRTSIDZAAPRVJBYXZMMJISGWNMHYWESQVBQUAPBYASZTLFBMGWCNVINGDRFMWGAZAPVJHEHEOEWSYTFTXAJOEFOYUXMXAJOBELITIXDLDQBUKWFABUKRWTOKXKCNQHDLKICJLYGRKSSMPCOLQUQMINNVVHZVLSXPQNFQZM");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.22842957466980596;
    tmp_msg_0.lon = 0.3314228830678877;
    tmp_msg_0.z = 0.25474957675831456;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.speed = 0.6190772787328892;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.custom.assign("FVVHFCNLDCGVYDXRUMFHQJWURIKCMKBQEEKRUXYQYOTNOKFSJQJWHICXIBGPVDRDPIYSNEIBSCFBUQKYWFXUAGEIBAROAMAYUCGXLOZNBHOKLSXNLXFJRGTTZCKVVSEUEWWMTNJPZ");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("RYPVNCUNGYZWEOIKGEOLRQWGQZUXQZOMMJXQJYMPCBTROKSXEABVWUVAAEILHRLEZQFZPNNXLUKOQYOOYKWGKPXBMWVVFRXHRIYFNPAQSJBLYUDXSVDWIDGMJLZOFSDTCVQLALHYLCDBATNKJRCSDHSIWVRDNQTTDENPGEXBFAMZZGOCAUZJHNLGMITVHZENDMHYWFTPCJECG");
    IMC::TrexToken tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("FALJZRBIMUCTKQACIZJGFKJTZPDPUPSGDKHPUQHOLFJTXYA");
    tmp_tmp_msg_1_0.predicate.assign("TYUCXJBGOXQWGSOGBNSXPQYKFKFUXECYHOTQISKUNEHTRMREEYJHAWWAIJALSODEWPZCFZRRNJHQBOGJGUITVFHUNNPJAMBHNTDXGQCMHNMDRBRRNDLDMMHAFUZKNIEZC");
    IMC::TrexAttribute tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("HMBRYTZNRKINPASIPIZCRIUWPSTBNDOZGLUQOTKGJYYVIDLOVHEZAAPUIUOQXFELAXRMFQUW");
    tmp_tmp_tmp_msg_1_0_0.attr_type = 160U;
    tmp_tmp_tmp_msg_1_0_0.min.assign("PHTFBSOANEODJHHQSKZNVZTFYSUUQOVHUHHTRSBBCWSDSQTCRLEYIGDOJCFUAFEUMAARTBVMDQLKQSUAYYX");
    tmp_tmp_tmp_msg_1_0_0.max.assign("LKGYZZSPVNFHFXOVGPQXISNLLLQRBXABQIZEOCINTOTGBYO");
    tmp_tmp_msg_1_0.attributes.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.tokens.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SoiState tmp_msg_2;
    tmp_msg_2.state = 88U;
    tmp_msg_2.plan_id = 11079U;
    tmp_msg_2.wpt_id = 21U;
    tmp_msg_2.settings_chk = 15259U;
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
    msg.setTimeStamp(0.9037834466254879);
    msg.setSource(47816U);
    msg.setSourceEntity(3U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(207U);
    msg.maneuver_id.assign("JKIXGKAZYAZKWNBPUQFCRFTVOZVGCLAJUFLMFWNXYYKYHQNBXAXYDPYJXOHHGIZIOWWSDIUSJBEVOKOZDMIVVEPSPGKBBNPLLOQGSULWRNPYPBHFHRSFSFFWGQXCCBXBWRHCVJZSMVJMLMQBFLDIAMOCGXZIERTRQAUFWPGICUXQIHJBDDTCYVSCRPSYEDRTMHQMTQKEEEOUEKMDIARNHVNJYJXATZTPZUGTLKWENARALSOZNKUJMCHVOQU");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.35208696448613364;
    tmp_msg_0.lon = 0.021076304352181552;
    tmp_msg_0.z = 0.6599582083472556;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.speed = 0.3168044530383354;
    tmp_msg_0.speed_units = 27U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 32449U;
    tmp_tmp_msg_0_0.off_x = 0.7067320565092529;
    tmp_tmp_msg_0_0.off_y = 0.9122342976118437;
    tmp_tmp_msg_0_0.off_z = 0.419003136360369;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.596750073991189;
    tmp_msg_0.custom.assign("PXAMKPNWOEQONFWVLUKKTPPCOECHPSLDJMEFZWYARBHRXPLZFTCYAYY");
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
    msg.setTimeStamp(0.609627925178434);
    msg.setSource(26644U);
    msg.setSourceEntity(155U);
    msg.setDestination(27485U);
    msg.setDestinationEntity(247U);
    msg.source_man.assign("YDGBBWVJNCZOBRFIPZNHILPPLZRHOOSVSYXUADTLAZYIVDSTYEZSYITLMMVJTVJBKBJXROOYGIUPAFRFOFQUKLQQNCUFQWJUEYJEJWFDWUOGZPEMKHXJIQCWRDNBCEDWHEXPTABOTRGXJMEKDDIHRIFCGRAKQYQSKXKTRVAXTKSGEGMPCKZNMCIDOCZMYLCPSFVAHEWHUTQSMHIXUAQLWYSCAXENJANXNLVZV");
    msg.dest_man.assign("GNSTJVFVXENUMREQZLFTJOJKZZHNJUSHAXDKKMLTGTMEAOYNTLFYIOXKHURADBTDZQQRWQXBYUHKAUERRBJPD");
    msg.conditions.assign("QKEOMRXQSNONSIPBFQRSHTGVUQEWBSDRJLLERPKKAGZJZIUHFLQIJV");

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
    msg.setTimeStamp(0.8960764230521583);
    msg.setSource(65268U);
    msg.setSourceEntity(101U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(204U);
    msg.source_man.assign("PTMFLGYACQZDSYVLCMGFKLANJDLIPTMXPIKYLHRFKPMQQFRUPVONOICNGEHBSTUCRDMOVEWAYAUKBBBSIBLTOUFZGZBOVXHAFUUF");
    msg.dest_man.assign("GTUCNFYMUJUEIKLPHSAQOSDKJPDHOBBVTPJPGYVJHZDEHNZELLPEIWRQQYIBHUFCQWDITBSXKTEAELRXAKZGZMRUKJYBYYAFJFCTPGZSFUTVPURSBFNRDWVVJAIHAAGMHXJGMLDSMDOSALRYJVWSAFCLNEEHMXQLZBZINHTLDAJXXVUVFSNR");
    msg.conditions.assign("PNFRJGLOYVXNBNBSCPVOBYROAIAIRSDNHFAGBDXPDTXROGWHKUJPKQGHNJWMKMWGSVLIZXRDICGFLCUDJHSGMCFZWRPKJMWOYOJJPTZCGJHNZDHZLTQSRDUMUPUSZETUPMCURVXUBKSRLTZLIUFFDKASTKTAEEDZLRFJNVTWLXYL");
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 18820U;
    tmp_msg_0.avg = 0.4083881065000138;
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
    msg.setTimeStamp(0.44073782283626295);
    msg.setSource(65201U);
    msg.setSourceEntity(51U);
    msg.setDestination(7021U);
    msg.setDestinationEntity(80U);
    msg.source_man.assign("QAHMOARSPTXUDIXZVOAJAMCAWHZQVSUOTCKVWGJTIWUMCSBZETNGFNBEIKFAXZCEPPCARJIYYRLDPBNRFSRUFSSWMJGVKILTJMVRUIDOVMWLYBWDSTGQOPGDWVAGOVQUOVHYHBMCINBJPKZXMKXZTGGDQQFUQJCQIPTKRRLEKNWSBQNPJPDSKLEWLFMFXAUSCYDL");
    msg.dest_man.assign("DYWTJPYJDBDRCALOTOEDSIKZIOCTO");
    msg.conditions.assign("QQECIGHHIXHITIEOGSMWLAGWYTFGUEFZKORXBM");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LAWNUVBANLXTIFMAMEEAAQWIIZZNFOCHSJRVNWBYMQSIPLMYBHSQGKQITAKBGBEYYOCHLGKLKTPLZDNJETMBEYFSRNSRCSQJYBUYRMJRYRMFFTKOFGDAJTACONAXGDJHDGHUCPRBHUDEVQZBEUUPNIQFGKQOGLZPVZYITKJXFIDCWVSWHWCPCORLKLEPVW");
    tmp_msg_0.lat = 0.8983613894486354;
    tmp_msg_0.lon = 0.03633504455566361;
    tmp_msg_0.depth = 0.975973139646774;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 122U;
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
    msg.setTimeStamp(0.1395834594001364);
    msg.setSource(63318U);
    msg.setSourceEntity(110U);
    msg.setDestination(48339U);
    msg.setDestinationEntity(90U);
    msg.command = 150U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QZCFFGNFEKWKYLVUWFAKQVMSAZMNZHRSCWAJISHQHBOYDL");
    tmp_msg_0.description.assign("FILEBBDTUXISFHWHZLKEQDTVQAZUBYORUSKFVYJBHLHTYDVLTZXEPEDJUDOXGGYCFYYLBXCXAQWFQWTPNFZNGQUZXOPKNHNPSMXJHOJKGRBSMUQNGGPNFOMVOCHKPHMJILSLZBRVVXQYPZJWEPEZTRUCAUSUADLGACMCKFXEARRTDVAASITG");
    tmp_msg_0.vnamespace.assign("ZCQBQUDYGXSQPEIFXWFDZHZYQMBWDUMWPNGMLLJBRBWIGOSWYMHWWIBHPAWCHIOVDXUIXENVASOHGTACEBTNYPDYNMFUKCREMSSUKOWYBFGRGMQCBTLNGFFJEXALPTOVUUAQJVZPEBQSRVNAJOZFXKYOSIKSAGIDJZDHUDFOVMLKOCLSZQRVEPBAQUCVWHFNRHRMPDEJQGSRNZLIKXHTMHLYVETJJJCTFNKZNTXXTUAKXILCIDGKJPRTYKCLA");
    tmp_msg_0.start_man_id.assign("ZPMEPFRTLUSFBDLZTEJIIGQONJUMNXCIAMIHWKVOONQDLGRCFFDIEFWEZSJABUZNDTPWRCHVAYOCENPOVDWKNGWVSZPOUMYKZVADBULQCYYIXASJVH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YQHMTAVHAPOEKFFQOOHBNZFZVAXKNSVVUTGHIUDGGGZSHKOLRBQOMFFJDMKZEOOLPXCYGLLEUUTEXVSDWBTWYBHMCEILERZIXWQKNARJOLRILEP");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.19427665746717304;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.38797383384924133;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6179934004233504;
    tmp_tmp_tmp_msg_0_0_0.z_units = 141U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.9003263217581625;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 133U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vid = 34949U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_x = 0.5073203217041932;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_y = 0.268971286900346;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_z = 0.28969403058863497;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.007528883178742896;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SEQQGYFFSWRTYIJEIKPUXVBMWEGXXFLKHKFDUTEFLLXGIRYLQDBUCWGNYVTTRGMOECH");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FollowSystem tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.system = 5941U;
    tmp_tmp_tmp_msg_0_0_1.duration = 29141U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.9552633717748436;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 99U;
    tmp_tmp_tmp_msg_0_0_1.x = 0.11178460972714432;
    tmp_tmp_tmp_msg_0_0_1.y = 0.5928814275029841;
    tmp_tmp_tmp_msg_0_0_1.z = 0.8832435991030585;
    tmp_tmp_tmp_msg_0_0_1.z_units = 95U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ManeuverDone tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Displacement tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.6606823933987347;
    tmp_tmp_msg_0_1.x = 0.8454682127223652;
    tmp_tmp_msg_0_1.y = 0.2831771537867772;
    tmp_tmp_msg_0_1.z = 0.2692531932775072;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.3009094597030707);
    msg.setSource(19813U);
    msg.setSourceEntity(214U);
    msg.setDestination(39985U);
    msg.setDestinationEntity(216U);
    msg.command = 189U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HWBAUJWZCVMBFQFMLEJPULEDCNSYWCBSLIGNVTMSGYUKRKXZYGFUSDORJUJGMTPKYACPIXSVAYMGBQINLVIDUXQOXODJRANASCL");
    tmp_msg_0.description.assign("YNMXLYNLHIBHXAPSHQQAILGOENHLJOZNSQFROUTEBZIRQGLZPPEUDBTZFBGUJATTASWHTNMGAGZKLWFYJDROJQN");
    tmp_msg_0.vnamespace.assign("DTWFDHGHNCSELSQIEOT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IBXSLDNTLNXMNMRAFKVOLYCFCAIHAGTHLLSCVRRRWUSEFJNJYBZXIKZWKKMLBHZZFIOEXAQUHDEWKEPNTPKGOYUHDHVFFNNLZGEOQKCWIPXOQTMCLBYSPBQVAFQJRLIBUZDAHPSPJPTXUJHGADITJAETWEQFWFANSVONUBGXJDWPISEZPLHKXQGYCKDUDVGQUXVVOBMYD");
    tmp_tmp_msg_0_0.value.assign("ZFMYCGULFBQHGGIWWJUOXJHJHBAPSAIYO");
    tmp_tmp_msg_0_0.type = 217U;
    tmp_tmp_msg_0_0.access = 48U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OXXFGRJHRHHDSERLSMNVVNDBEXGLHWPKLZPURPROYQJXRAFHTVQANWBVVUFXSSJDDRSOAXZCPNVNMCCSIBYIPOEKLEAIBOEEJWHILUTBDTCVZJRTPAHWSUYHIXNWDFCUPXMYKWRQEAFWAMCTSLWB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WAFOTTQZYCXWQQLUWDUZUSVBGVXBSDDZCNOPGUIUXQNAFTWNDHZMCYEEOKAULXORTBQKCHJYFJLMRGIPKGJWAMVJLDHQPEDTFBMIRBYTLRARILAFY");
    IMC::Takeoff tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9020167733777196;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9965307191264288;
    tmp_tmp_tmp_msg_0_1_0.z = 0.2928700345726153;
    tmp_tmp_tmp_msg_0_1_0.z_units = 205U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.896749316637693;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 242U;
    tmp_tmp_tmp_msg_0_1_0.takeoff_pitch = 0.7905652575484381;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KISSHCDXPSCBQJCPWWLSLSYRAKOIUQVNLNTDOEOFKYGIJVCINIZGFCLVHDJQPGZLZMWPDTNBOSGXHRSKJLOGKKNDHIDGCFJEMEOJMPLUAWQU");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TypedEntityParameter tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("NHOEWIDGVOGFCNVLUZDLHYRATBJXPGIRSJNZBOECOVFFBVYVUPPCEJHMBCIJJDWRXFACWMQKXRAKLYNYBRIFWTXWBEJZQOETRKIXDHMHMSAIZJBUAHRSUKHHXSNTZYXGMKMCPQDMWLFSYUAG");
    tmp_tmp_tmp_msg_0_1_1.type = 234U;
    tmp_tmp_tmp_msg_0_1_1.default_value.assign("KHMRJWGGTHIWZWPBCEUQXFGUJCLZFQYBEYUIYBAZCWSRLKKGACYJMTESDPCYYPTSALRWMOBNXRCOUVBGDWOHLEDEPVEAWQNOPOMYCTJXUGVQQBREGOQTGMSKIUWHDMAQNBHDSZWZSNKXKEFERFDSKBFIJPOHJRVMBLNMRQ");
    tmp_tmp_tmp_msg_0_1_1.units.assign("TXTJSUPDUERRNMTZMUC");
    tmp_tmp_tmp_msg_0_1_1.description.assign("RHTZWKVAVGPEOP");
    tmp_tmp_tmp_msg_0_1_1.values_list.assign("VGNSBMMXTCOUJAUFGRSVTJOBGOVHDCWLOVBSFSDHCIPQLABZPYFZRYCQPEDWEGAEGRFLHEUIQDTTQTUELAMGZFNZTWZOHPJHFNXEYXZMKSFSNBJQKKPCSRXMWLZCXBOYHBTVUWYXMWUDGMPKHPNIPTW");
    tmp_tmp_tmp_msg_0_1_1.min_value = 0.26428204761838525;
    tmp_tmp_tmp_msg_0_1_1.max_value = 0.16345868532167873;
    tmp_tmp_tmp_msg_0_1_1.list_min_size = 140U;
    tmp_tmp_tmp_msg_0_1_1.list_max_size = 174U;
    IMC::ValuesIf tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.param.assign("QMGJUIIOFDYOHHUDNBJKVPSWBATSDYDOLOSJTKDVNXDVIIABLWOAVRMNLQPCZSWEGFRZEGBTZTFBMHLWSHUYQZVCVSLISHFMHIETZZRZJOMPKRMTWJBSJEQXIFKARUSCQBGGCKAHUIGRAAVKZE");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.value.assign("MBDBSJUPWAUNFMQZYOHOMILRLMBOANFBCLU");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.values_list.assign("SIWYSJZIIBJIENXRTBUGGZFDAFWHNPVQWUCNDFBUKFQSGYMLDJOHCIGGENCQ");
    tmp_tmp_tmp_msg_0_1_1.values_if_list.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.visibility = 239U;
    tmp_tmp_tmp_msg_0_1_1.scope = 50U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.timeout = 14819U;
    tmp_tmp_tmp_msg_0_1_2.name.assign("VPFHTVJCODKWMFKQRNXOAUMMSGRARRVXKNKTEOPLZSCEESZKXKRWLLFASNOMIZBKPAGGQFYRYHLZPQIDNACDGXBLAVECXLDUWFKI");
    tmp_tmp_tmp_msg_0_1_2.custom.assign("JWKXBNJGKEHXOSFYHOWFWXDZRAFUMCBHJSQVZYMVDCFXOPZDATVQINEYNKTUJNVYYFADTKOTUOEBIHSDZZSIGBVLGUMKNXALIAOPWWOWPESHCCYEIR");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Rpm tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 22165;
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
    msg.setTimeStamp(0.5353336707108928);
    msg.setSource(25074U);
    msg.setSourceEntity(254U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(211U);
    msg.command = 191U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ECEJGKNRWSTKGHLVYKMAWZALZRCKFDJITQFCRBOICRUSTPOQPTSYEBJMKYWLTCD");
    tmp_msg_0.description.assign("RDKGGUZCHRFVJMLEFJATEPUCNEGFDVULQICDACVOBQGTBHWHCHNTKRQRYRXUJROIPYGDZGXYKXUIISTBJIPEOGLHVBIOTMSJVGQKXNDWDVYWMUIMFPKQRYOBZHKNJBMWMQFDOLHJSNST");
    tmp_msg_0.vnamespace.assign("QWYVZDLGUMCKEHKSSFAVGTEXMRXQGRAETNVLUZIFPIPKVZRZWZUIBOZCRKLUAILNPULWTTWKFHXJEVYEGWHWPJBEEOSBNEPVF");
    tmp_msg_0.start_man_id.assign("CJRNTRGSBZOYIKOIQW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BGQVGFDOKDMUXFBDZELYTAIRTBNJPWNHMHZCCYXYEEYGXZCGIFHLIXHSIJYTCIOKKBLFGRKWAMOPEBKJZLHMYBTDVVOSKZQGVULXYBJNSMPZUOQPCQRMFPKALHJOWZUHZNZQBRZNIPJSHTVUTUSWQISYXFTPUWVMAUJONOOERADLFDITEXCHRKGHSRCJNYISNAUVMVBAWCQXLWRVELDWQSQKEDEVJWXLDGJMRCFIPDFKTMBGAPTS");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 20558U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9198835314715079;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.03889515715291103;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6605338471997011;
    tmp_tmp_tmp_msg_0_0_0.z_units = 102U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.1544986498528036;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 58U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FXQGSSFANCRXYJJMHOSWSPCOQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::YoYo tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 44224U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.8075039812740245;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.5642674198000834;
    tmp_tmp_tmp_msg_0_0_1.z = 0.4714558094368835;
    tmp_tmp_tmp_msg_0_0_1.z_units = 250U;
    tmp_tmp_tmp_msg_0_0_1.amplitude = 0.001588450575915501;
    tmp_tmp_tmp_msg_0_0_1.pitch = 0.5470927730368341;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.8652266365131405;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 214U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("EHHEPQKVTKCWRHNWKDLUBBQUMHBNRZCFLCVKVFHDLXPMWREQAOIHBNKUYKXOEHZVWLKGXCJHICXJVLDORQZMZFARMVEJIAYEQTDDIDWIEPPJFYXFUQDWSANJKFRSMMWPHLNZVGSJUUTQZSOLSQGUKIISXOYSYEYPSPNFATOGIVHBYGGQJZBRJOZLCAMIXVCPBURTBNXYNNXDEQGJNTVGZTTKMCLPFPESADFOC");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::FormationParameters tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.formation_name.assign("LTZNVSCVJVBMBSGIKGHTIZBHSQMEFCLIOUFCXYQQRSPWUUCYYLBLQKKPQSMVGXSXHTAGUVFZUDICVQOUBMDGCJOXJMREAZQFZPGKQRPPYVTMDEFKTTNHMTZDDSHIFOHYZWRYSSWC");
    tmp_tmp_tmp_msg_0_0_2.reference_frame = 109U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("NKKITGDUFMURLWZPPLUXFINRDOKQSTTEDJGMJFYXSNOBGZAJCCLJETKZFPVXIXVAGLEUHSFJLVJBAEUSMVBHXCQPYGXRSPPKAWOYQKWQMXYCSWHCTUNHQWRERDVZBSZGJVYRMQNWJMMMIIZLIQAMYYANIRBVAORHFYOFILOWGEXULZHTHTMBZQKKTQFNOUNGBBVJJF");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.39054189738102696);
    msg.setSource(6542U);
    msg.setSourceEntity(183U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(235U);
    msg.state = 29U;
    msg.plan_id.assign("YNGQRULWXXNMNZDJYHDAZPWFMFTHTNFFXLEWREMYRXWDDZGBUZOEASBVLWLNQNETVRPVZIQBIRBGZUFUZSQKV");
    msg.comm_level = 135U;

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
    msg.setTimeStamp(0.7592213014154578);
    msg.setSource(30685U);
    msg.setSourceEntity(94U);
    msg.setDestination(33897U);
    msg.setDestinationEntity(64U);
    msg.state = 83U;
    msg.plan_id.assign("NXMZUTEYYLPWESHKBYEWTSYQUKUAXLZGVKIPKPEGZKNMPLGPIQQIBHBEJAGSHZDGDXYJUMWABRYIWDBXVNSJTOELFZFRZMMRUPHASDPSGNYXSVLQOCABOHGBKKOUFNHENLXKMDVJWVJXICLQKAEXYNILTFRDCXFQIPTTTQXLJIYIRCSEVJRVAQMFCCRUOJZTRDBNEJIUPUCUFVTVNHTGWASHFOBYCDJ");
    msg.comm_level = 49U;

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
    msg.setTimeStamp(0.6653448918345534);
    msg.setSource(47175U);
    msg.setSourceEntity(123U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(44U);
    msg.state = 89U;
    msg.plan_id.assign("LAJSEVRRQROHRXNKYCPVDCHQIRKOVDGHBIXVAMREOXGHQNDOEKDEMKUWRXXLTIGZTIUCFFZVENGMWNQTDYPLADFWEATYOWKPTXZFHJNJBZDNROZWVLOMWZYZROECAEZLQHHTPFKGNTBPCPCPSLVMBDUOOKUSZKAJTGTPIVE");
    msg.comm_level = 76U;

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
    msg.setTimeStamp(0.7441116960804502);
    msg.setSource(51000U);
    msg.setSourceEntity(43U);
    msg.setDestination(51201U);
    msg.setDestinationEntity(206U);
    msg.type = 195U;
    msg.op = 33U;
    msg.request_id = 33421U;
    msg.plan_id.assign("QSTWCTQTJNEZQANTDNNIVPACUIGOMGCVPSUKSOJDIIDLFBCHJXUBBGPAHVEAXWWKXONSIABQRVFQPLGIRAUJCWRDFWFBYHQKGEZNRLMYOWFRGUPQDYBZGKJSHKMZUFD");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 121U;
    tmp_msg_0.frag_number = 79U;
    tmp_msg_0.num_frags = 208U;
    const signed char tmp_tmp_msg_0_0[] = {43, 62, 20, 26, 8, 49, -122, 44, 112, -112, -124, -105, 63, 78, 105, -32, 46, -77, -59, -77, 70, 81, 95, -88, -36, -108, 94, -15, 112, -74, -7, -48, -6, 69, -44, 50, 125, -10, -93, -63, 124, 42, -31, -89, 95, 82, -43, -14, -5, 33, 81, -69, -121, -19, 109, -90, -3, -127, 39, -76, -95, 63, -43, -45, -119, 117, 70, 18, 3, -55, 42, 101, 14, -72, -22, -83, 11, 18, 80, 39, -83, -117, -58, 53, 88, 33, 40, 91, -98, -109, -56, -124, -35, -48, -85, 108, 24, -15, -82, -51, 49, 123, 98, 59, -50, -61, 116, 37, -7, -90, -16, -8, -44, -57, -10, 13, 102, 31, -49, 85, 87, 41, 77, 119, 26, 99, 38, -55, 51, 89, -126, 10, -54, -123, 72, -49, 56, 19, 33, -83, -3, 31, 85, -10, 40, 92, 96, -111, 86, -127, -44, 90, -64, 105, 9, 43, 115, 110, 68, 60, -91, 73, -85, 85, 59, -94, -92, 93, 116, 1, 102, 68, -114, -6, -8, -2, -109, 52, -48, -65, -66, 61, 124, 17, 114, 30, -53, -108, 7, -66, 9, 120, -118, -96, -76, -75, 99, -95, -37, 104, -69, 41, 120, 52, 12, -117, 116, -13};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RBKEEXPPTPKXPVOFRSARGKIJAFAOSAFHCAIWWWHOPMIUUTJLLBNPLINRCPEQOZVDRWUBLASZLOJHNCERGNAZGHMGSFPIWUNAIZMIEYRBC");

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
    msg.setTimeStamp(0.1833348044290769);
    msg.setSource(13416U);
    msg.setSourceEntity(147U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(62U);
    msg.type = 190U;
    msg.op = 241U;
    msg.request_id = 37921U;
    msg.plan_id.assign("XBUODWJEZLGIIEGKMVOQKWAHCVXXLRTNBEYKQVBTZXFZFPIONXQFPHAPUGDKUCTBMIHNSFPOUYRYEOBBWUNLCGJETJWHOWHLZFJXJRZIQZSMFKRYFITRMXLYSKUPTQJFNQPQEIHEOLGVMKAXVCJRHFRLSWYGVDZZZSYOAECPMVVCGATRHOCAPHNSASBVETATDIBJWJGE");
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("KYQPPGNRVJOFKOAXK");
    tmp_msg_0.value.assign("NNZMLMCUEKRGYFFJHGDGDYJYOCDATORTSHKIASULPMLEJYGZMBOVGGSEXFSQVRZFHJWXIORNQQCWLKPVLHNUZBVDUQRTBBBXONRMKG");
    tmp_msg_0.values_list.assign("LKBSOINCVLAREOFFZRDXMIPIMRJAVPSUBACSSCLJADZMIGXDFKWRQEJQGSJNXUHCPNCWTXPOTEEENXEDWYAVFVBKTGEUAYXHLWVGLBBHRPNYQCIWYKKDRYRLQWSHTXMXOLJQHUTICUAVNOYTURWWFONPVKLMJTPAFHHHNZSFVLDMBZHDVJYIJZCQTSUYZZBXZGKSEPOCKBERPDQKGRGOPQMGUJOIAUFBLZQOTFUHGWSDMNQIMFCZTVENYMAXW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CGNWWQTWWNWZZMHKPIDUYKUABVBQMKJRGFMFMZVISQSLPULW");

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
    msg.setTimeStamp(0.9555448539387349);
    msg.setSource(43719U);
    msg.setSourceEntity(72U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(10U);
    msg.type = 43U;
    msg.op = 102U;
    msg.request_id = 55172U;
    msg.plan_id.assign("LUYGMEXIZODIIKMDSZOEIQQWXMHNDQWCBBQCFTQZXENADRHBNNIYAJAHPBCOZNGVJJWKHSDKIXUJCFWRWFGUWAVWVTVMLANMBRFTEXXEHWCIKVPADNNURSPQFOLCKELGVUHLGQXAVSNEQQPLJDOYGFRHTZHAZSOTRFPSVMKOMMUVOTHIKKJCPEKEWGZORYUFTCCJVDKBPJAPFPIXTBJAJ");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 157U;
    tmp_msg_0.quality = 19U;
    tmp_msg_0.reps = 31U;
    tmp_msg_0.tsize = 14U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RQELWXTLPTLMGWYQMFUYPVTPTBQWMKUGHKONWLBGCZSGHAUDLFVWJBWZIFTQDKZWZGKACYOEUGQUQJJXMOCTWPCDAMZYNVYBICSDLKOBWFMJJBDZSIRAFRWTVOZPCNDSEAPQMXDLIAPLKNHSIMONJUGIUUVDFOVUMFIXSREAHBJJDAXLHFYHRGXOEFVVNETILSYHKARCHIGQNYQRCSXXPBEXYEVRHECQNTOZFSNGO");

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
    msg.setTimeStamp(0.11879909670230093);
    msg.setSource(46044U);
    msg.setSourceEntity(149U);
    msg.setDestination(50980U);
    msg.setDestinationEntity(128U);
    msg.plan_count = 32267U;
    msg.plan_size = 2286291931U;
    msg.change_time = 0.0575521058001115;
    msg.change_sid = 64175U;
    msg.change_sname.assign("YAUNNEIXURCRFQNRGBDJYMNNXHJPFGPATLRTXRGQOFJCWLIJVYARLRUXNBMJSWMAXPUWKOILODPFHQANWAVNFZENYC");
    const signed char tmp_msg_0[] = {-20, -106, 94, -81, -56, 126, -112, -6, 93, -107, 49, -71, 125, -110, 53, -68, -60, 80, 82, 86, -68, -46, 122, 29, -90, 71, -77, 101, 1, -15, 30, 18, 66, -105, 16, -2, 105, -52, -40, -8, 39, -119, 116, 115, -76, -81, 32, -117, -88, -39, -2, 22, -77, -29, -33, -33, -41, 38, 29, 105, -28, 86, 124, -110, 29, -51, -63, -38, -63, -27, -105, 82, 13, 9, -5, 50, -95, -90, -6, 16, 67, 58, -101, -113, -15, 106, -34, -120, 30, 54, -10, 23, 101, -104, 60, -116, -92, 82, -20, 57, -69, 46, -90, -39, -33, -76, -75, -102, -40, 49, 35, -25, 81, 100, -12, -14, 75, 84, -14, -47, -119, -6, 102, 68, 125, -82, 5, -97, -29, -91, 16, 122, 0, 98, -94, 96, 119, 48, 63, -15, -28, -108, 113, 102, 88, 9, 115, -96, 112, -28, -17, -69, -93, -116, 35, -45, 111, 86, -83, -45, -108, -46, 114, 6, 20, -86, -33, -60, -98, -38, -17, -3, 123, -65, -92, 31, 70, -4, -6, 112, -127, 125, -92, 9, 38, 36, 31, -127, 53, 83, 13, -106, -72, -11, 122, -18, 50, -118, 35, -81, -28, 50, 116, -87, 34, -128, -47, 17, -21, -111, 6, -113, -29, -72, -124, 40, -69, -60, 7, 9, 38, -128, 92, 120, -120, -8, -20, 49, -34, 9, -31};
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
    msg.setTimeStamp(0.586979780505601);
    msg.setSource(12418U);
    msg.setSourceEntity(158U);
    msg.setDestination(20948U);
    msg.setDestinationEntity(89U);
    msg.plan_count = 29703U;
    msg.plan_size = 2558405245U;
    msg.change_time = 0.827501757051805;
    msg.change_sid = 25937U;
    msg.change_sname.assign("AWWPQVSWGSQHWGFLXUNTQKPTKUUEMDSNTZEBHINPLDVMZJZXHCGNIFALUMYOKFJFZRSOZSCIQPUTAXCECLUGDUYWUREWCMMJUBIVWWKJIIXAXFGJCJOANKGTHLXOCRYXDKWBNBIJIRDEKMCXYVAVBFQEJFPFSYOLTGNHLYNRNPULMVKAVRQSAGMRPDZIKGZHXFBYYGT");
    const signed char tmp_msg_0[] = {49, -14, -97, -29, -59, 70, 59, 72, 57, 69, -26, -63, 75, -54, -9, 114, 70, 75, -84, -11, -115, -78, -28, -9, -72, -35, -43, 29, 20, 43, 44, -122, 1, -76, 89, 109, -115, -88, 8, -31, 113, -107, 36, -31, 52, -20, 118, -111, -92, -33, -50, 28, -123, 114, -31, 87, -34, -117, 102, -2, 118, 43, 5, -56, 113, -126, 5, -38, -65, -60, 125, 61, 42, 86, 82, -101, 7, -45, -21, -18, -54, -105, -22, -71, -32, 105, 69, -73, 19, 10, 18, -56, 82, 27, -26, -60, -36, 125, 11, -23, 49, 95, -74, -57, -120, 43, 50, 40, -108, 107, -102, 105, -13, -42, 93, -26, 21, -120, -32, -63, -119, -61, 23, -112, 68, -55, 62, 11, -62, 53};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IXXQVFRNPLYIVBPSBNWDQITRJORLKDLKACLOTPBJBVUONCGRRQOAAVGTXAVPHGWXDLPQJHUQISHXAEESZHLEHNTDZNQSZFVOOESDHFWDYZVMCBNMMEDSVCVDUCFTZZJSITFQRCBANIZFAMNJGWUPFGFLYUYGICGTCPKIRAUSKFKPMDBEYZOWOUKGUASMYWLKZSHMWMPQUBEHIGJTBYOGJQLJTDIFXJURQYOHMMJCYWNWBELKVKXXAENZXXREW");
    tmp_msg_1.plan_size = 15556U;
    tmp_msg_1.change_time = 0.5172664671070177;
    tmp_msg_1.change_sid = 52932U;
    tmp_msg_1.change_sname.assign("QNIQXNMMJWTSWCUGNNCMTVBDVKBGTVYVFIXYVTSWYZATYEOBKQIORNFIROLGWHIZXXLATEDLMFPIRRBESZHKHPEQSBQZOEMHCXLBNJHRRZYEEHVQKIPRPZXBOTRAOUPJFCGUUOANLWANSMJFTKDGKZEDAEONEOYQTBDLVSGUXYZCXDWZVUUOXMFGWYHLGSAULFHAJAYIQJDYSHSJCZQVJURIWKGGIX");
    const signed char tmp_tmp_msg_1_0[] = {-12, -102, -42, -60, -111, -3, -35, 103, -9, 96, 19, 126, -22, -105, -108, -119, 43, -61, -82, 52, 1, -81, 32, -99, 126, 38, 115, 99, 31, -71, -50, 40, 19, -19, 74, 101, -128, -114, 116, -68, -48, 12, 116, 19, -31, -88, 30, -80, 10, -11, 96, 27, -48, -103, 108, -54, 106, 14, 116, -126, -79, 88, 49, -112, 60, 2, 35, 98, -24, -91, -93, 120, 91, -100, -98, -42, -47, -10, 94, 64, -40, 4, 85, -124, -77, 110, -16, -107, -111, -128, 48, 39, 36, 98, 49, -123, -78, -41, -100, 37, 65, -115, 58, 126, -16, 55, 22, 10, -22, 115, 69, -66, 74, 107, 47, 40, -51, 70, 115, -126, -113, 2, 63, 50, 95, -104, -14, -70, 20, 32, 18, 35, -102, -122, 79, -70, 126, 28, 37, 20, 125, -113, -86, -119, 114, -33, -113, -76, 119, 80, -115, 41, 69, -102, -37, -90, -79, 52, -101, 38, 35, 26, 120, 90, -109, 22, -74, -109, -113, -63, -21, -20, -89, -27, -85, -69, -26, -112, -69, 73, 15, -4, 46, 70, -3, -106, -50, 110, 86, 89, 124, -93, 87, -75, -117, -44, 52, 33, -121, 58, 74, 73, -52, -101, -37, -100, -122};
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
    msg.setTimeStamp(0.23897867382951632);
    msg.setSource(65079U);
    msg.setSourceEntity(236U);
    msg.setDestination(1931U);
    msg.setDestinationEntity(123U);
    msg.plan_count = 39671U;
    msg.plan_size = 3059545428U;
    msg.change_time = 0.5139711306585037;
    msg.change_sid = 16586U;
    msg.change_sname.assign("TJJZOMHQZHKZGSSUMYLOFIPQULQSWPQFEGXVFIHSNQMLCODDTKVQIYJNBRCSTTKYCYEMENLLBRNNCDJHCOVFUPHCUZXRDETBXAGZIKAJEDHBLDGAUPXRXOFGHLOMUYXZWZWNPAHFKCNWNVKYB");
    const signed char tmp_msg_0[] = {-118, 16, 84, -122, 15, -94, 98, 124, -28, 29, 94, 118, -43, -41, 40, -46, -79, -51, -76, -122, -63, -42, -102, 48, -12, 104, 27, -72, -100, 51, 107, 36, -92, -22, -62, -54, -81, 23, -123, 30, 96, -127, 25, -5, 119, -44, 119, 2, -93, 109, -39, -8, -9, 44, 14, -54, 106, -128, 112, -127, -113, 26, -101, 64, -105, -83, 36, 69, 106, 70, 9, -29, -31, 102, 59, 71, 70};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JDWGILIFCKVVYQMTXVKRKSMYFMDEHXSCKCUTWCJDUANJEDFREQMTHBCHJUEGRGZPPPCPARLFRPGJRFALSPMJKJIABYBZNETLYIMQUUGLVXSLSALQUFHFQTOLDEZJWWFOYSZNOZPYDDBHWXZXZILQAWPEHSNSJYYNNXRRIIMCQVUBZAVCNEQUEBBSRYGTICXNOXMRPWHWVTVYVUDAFGGOONISBGPZMXGFWEBOQKAMCOKKDK");
    tmp_msg_1.plan_size = 50259U;
    tmp_msg_1.change_time = 0.31313355010211474;
    tmp_msg_1.change_sid = 22335U;
    tmp_msg_1.change_sname.assign("KBURCWHZPKVGURGZWOXPTJLSHIRAPQCBUYHVMBQMKQYXAPAHIQVWNZHWLQNKGSUNDNWDMWULPJFPMISYCCQYGBKFWECKTTSOUVHNRTDFZDEQHSMCTGRFXTEUCKSFNHKLWAPJAIXXARGPZYEEXBRILZFDFYYOTBJUFMGROBHIJQAMNBP");
    const signed char tmp_tmp_msg_1_0[] = {93, 78, 122, 46, -95, 101, 10, 55, 121, -15, -94, -5, 109, 2, -63, 22, 47, 55, -47, -93, -18, 23, 105, -15, 64, 49, 8, 27, -66, 48, 42, 5, 56, -112, -60, -94, -65, -10, 98, -2, -23};
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
    msg.setTimeStamp(0.8181814821086831);
    msg.setSource(13256U);
    msg.setSourceEntity(144U);
    msg.setDestination(14580U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("LGUIMLAVZXQVMZJHNRPHRTRQIXJVMTKUEMOTAKXQIUREPCLBHEOEFIXTXSQKDOYCJJUSPUZTCQKCVLMNLFAVXDVBSJXFDZWBJNGFYYVDKZPMHENNYRKHUALWIAIHSFGFOLGAOBFMNZFEOBBJDXUEQYWGTVOSPYSKIPMNOPHVIXNRTEQTCGDWYEWLEAYWDNMADODASHKLFBVIYWIZSZZCQPTCCHCCHPBSSRQJRPMJBKBGGGWKOWDWRLUNJUTXQA");
    msg.plan_size = 19722U;
    msg.change_time = 0.51840768762381;
    msg.change_sid = 42114U;
    msg.change_sname.assign("LNDKPFARBURPHEWXKXGPVVHTHECDPVTIMOTIFQRLVJUFSEJDJYOYYJZHXYRIKUQGLTOTCECISQGWTBGCFSZELGZMNLAHOWMKWBJLCKWWGJWLYVMBAPPSRSTYCNXQIHABHLSITWALXSJBEPOTBVGMQHCGS");
    const signed char tmp_msg_0[] = {63, -116, -21, 107, -114, 39, 7, -74, -91, 21, -31, -16, -16, 123, -5, 98, 29, 60, -73, 77, -78, 48, -83, -60, 112, -28, -94, -86, 16, 26, -73, -96, 24, 70, -7, -54, -44, 112, -2, -69, -124, -119, -28, -63, -51, 103, 22, 88, -18, 126, 95, -101, 3, 102, 30, 20, -65, -14, 117, -51, -112, -32, 16, -33, -46, 115, -95, -121, 15, -71, -84, 48, -20, 119, 7, -49, 29, -126, 122, 70, -123, 25, -31, -53, 69, 73, 54, -29, -79, 123, 120, 108, -20, -19, -103, 79, -97, -41, -114, 75, -44, -22, -13, -68, -37, 53, -67, 5, 27, -80, 45, -54, 81, 107, 34, -36, -104, -91, -32, -89, 98, -104, 74, -90, 30, 7, 66, 45, 90, -3, 15, -92, 104, 36, 96, -80, 32, -99, 61, -126, -123, 38, 15, -124, -55, 51, 10, -124, 27, -6, -6, 53, -67, 79, 24, 32, -44, -24, 60, 76, -104, 54, 122, 34, 88, 86, -92, -38, -56, 35, 86, 82, -111, -122, 59, 99, 115, -34, 120};
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
    msg.setTimeStamp(0.10217937883159212);
    msg.setSource(3433U);
    msg.setSourceEntity(209U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("TBMDCJZUJMODEWLIPDABXRHVEHUEBJKEKDPZLOSAFGFMMQGTABZOVWOGNPJYEDNKPDDWIQVTERGXHCVQVINRWLRUSNYYPNSNSNFJIEGYCSHZUICGLZQPNDFFAXOAXJTGITAMBYWDQESWUARYTHKFZOOJTZYXQLFIAPYYAECVMKWKYXXCFGAGXJVWCOMLFBLRO");
    msg.plan_size = 5733U;
    msg.change_time = 0.9574576432035238;
    msg.change_sid = 5167U;
    msg.change_sname.assign("LVUAMOQSVZTTDJFVRYWCZDVFUVWLDHCRUMCATHBXGYHQYPOXLSKRWDTIYRUBQOKNUTPBNMMTABGQXPKJGJCHKQNLNVKSCAEYFTPHGUTDFSZKEOLJFQWGRLGLLHEGNYKMTRUNZXBIAZGZAOXDZDZTHESKJSUA");
    const signed char tmp_msg_0[] = {-15, 59, 41, -83, -13, 18, 63, 12, 80, -53, -51, -15, -78, -88, 42, 126, 81, -79, -14, -71, -15, 37, 93, -112, -83, 0, -79, -39, 24, 118, -80, -63, 10, -22, 121, 41, 114, 73, 117, 17, 120, -39, -44, 27, -123, -84, 50, 55, -102, -35, -68, -125, 61, 109, 3, 1, -68, -10, 29, -32, -81, -91, -78, 73, 60, -58, -6, 75, -38, 34, -34, -77, -106, -105, -51, -71, -87, -109, 74, -124, -116, -124, 69, 95};
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
    msg.setTimeStamp(0.07822126208244429);
    msg.setSource(4651U);
    msg.setSourceEntity(225U);
    msg.setDestination(48466U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("RNGMIUUXMTAIGXQMXHHAMFDRPRLXWKSJJRACLOFOOTHTLRVWXPEZUTVIFQPQDHOFCRWRNVSWEPZPUGLKDBSAKJLHSIN");
    msg.plan_size = 44280U;
    msg.change_time = 0.7954508940108285;
    msg.change_sid = 63888U;
    msg.change_sname.assign("GFUWSSZLVYPA");
    const signed char tmp_msg_0[] = {-8, -7, -108, 72, -16, -21, -111, 18, -9, 70, 60, 35, 20};
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
    msg.setTimeStamp(0.9078020229551481);
    msg.setSource(4760U);
    msg.setSourceEntity(74U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(227U);
    msg.type = 228U;
    msg.op = 95U;
    msg.request_id = 62763U;
    msg.plan_id.assign("ILANJCQJFDMYMDAONYURCVECZDWHLSXTHWTCXQNKWVEBKWQTZLUQYZYXETIQXYTHGNOPJDZIRFPWKQDZAYGRFPWBBIIRAGDTNSEPTADDHLGSLHOAMFXFROBMQBUAEDEOJSHUIBCAOXSLHONNVKNUVEZVPTMOCZURKGMHJBGVSZITGIKSEFMCJVOHXPRGRMJKJLLYZXIVLKBUSLSKVPPR");
    msg.flags = 37891U;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LJTHMCAUMGCRBVRUMIXZMXEPWRICJUETNQHMPGMTFJZJIBFAWACJWCTRWBIFRWZCNYIFHYDCNSDEZGWXNTTAOAQDAQRKNBSYHMYVZIYBYUPCYVUDJIUQPBKQVQOFSFDTHPOUSSVOLLUBVXAJNGWSHMBVGYSSWJWCQZQDKXPJXETQEKGIOPGBEPNNLFRAZXRNEEUOZMLKUWKKLYXKDEAXDIVHGGPQNHKAFDICDXREFJGFVHOVPYBLOSRZT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NMXCIDPBQUFALWXAIMZWVETJMWOTVOSWVGVOSKLXUUYBQQSCCYFUJPTJAEHZKHZTGBPCOEWATRBGHUHHHYBTIGBIGLJBYLBAMMXPGA");

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
    msg.setTimeStamp(0.3773970604617064);
    msg.setSource(24502U);
    msg.setSourceEntity(232U);
    msg.setDestination(2558U);
    msg.setDestinationEntity(30U);
    msg.type = 20U;
    msg.op = 194U;
    msg.request_id = 4193U;
    msg.plan_id.assign("WTOBDFBZBOHKOXFZGBSXTFMYYOYLWPWALZTTXNMSOWUEUOGDHDZTIJREJIGKVQMRMOGETKIRNSQPDUQSSKTEAHQDWORQASDCUVSPNLCCLRLUAKWNIPHBZUMLGVOYHJXEPZXNJUVGILCHYKRYCDQAUQBCWJRGSTNSNGXRIMCEAAJHKHJVYZZGEMNR");
    msg.flags = 14462U;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 72U;
    tmp_msg_0.range = 0.1975106140009092;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LNHGHKVGUGCCPYAJTQRTPMZMURZHSAJFRADLAXXQRZYLKIBWZFPQNRWDFOJWRAQYDLMWUBUMNHIAPTIZAFUDGWPBBOCNUEHQMHVSHAINIVEFEMPNPSWGJETOWBROLBPYCYEYKBERCJDVGKXKWXVFBELSMIKESIXKVV");

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
    msg.setTimeStamp(0.01559745022365644);
    msg.setSource(6131U);
    msg.setSourceEntity(96U);
    msg.setDestination(56960U);
    msg.setDestinationEntity(174U);
    msg.type = 250U;
    msg.op = 161U;
    msg.request_id = 35928U;
    msg.plan_id.assign("PLZEEMNVSQXTSQIAJRPVLTIFICBGILNAKRBBMRIHZWMYDHCFXJJLOZACWETYHTAYXFQHAQPIKTMJNXVSTUEEBJBPVCNUYLEDAMKXIFGYKFWUMGLRSJJYPNAKEMOJWUOXXFVZUCSRAXEGHGRKEWDBRZZGDUPPQFXGHBOMDGRD");
    msg.flags = 50691U;
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.19065927414098516;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LUHRRGUVAJIRCDGJCBFVKOFSLYKKSNCPTDXFHBJUUNGDZAEIHXTATIRUN");

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
    msg.setTimeStamp(0.24787931237707062);
    msg.setSource(4656U);
    msg.setSourceEntity(79U);
    msg.setDestination(2003U);
    msg.setDestinationEntity(177U);
    msg.state = 231U;
    msg.plan_id.assign("LAJYXASEPINSRNOLRPGNGTVKJKNWEHYULTNLQFOHUQJGNVZSCBEJBPEOTMCUBIZBXJWMSSDUDTQHMSKQDDXPVLITAYKUZDLKKWSZORUITWMMJHGLYXZSPKAVYQSYBFECTDBQYBGQKCDCMHFVWOERHGBFNNRLAXWJIKADGHMFIXHDZIJGHWFPZEZFARWOTJDRPQZFUSVCXFETZWHOWLRAIRUBAQOTMPJXYYNI");
    msg.plan_eta = 853951921;
    msg.plan_progress = 0.3517856622072313;
    msg.man_id.assign("XTFCHDGRYBRMWTKEBIJJPBHXWPXQQIBRHDSDFHPNGRMXJGTYCIOAVKPTURRXBEXHZNYLVLRUDTCPQJGVIJSFGJSCVAASNPBTTCQAYGEFUAZWYLSYQZNLBVPCYOXIEIONWCSQMKKCYGZUSMZRHKMMFOLUMUCEOABNVEBZYZKHZOLELAUMECNAYXJNDTSJWHZWJFFIIXUHDWNVMXFWWULGVQVQDLDMKFADJHKRQ");
    msg.man_type = 52092U;
    msg.man_eta = 2048572393;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.06852420710531426);
    msg.setSource(65067U);
    msg.setSourceEntity(246U);
    msg.setDestination(38523U);
    msg.setDestinationEntity(234U);
    msg.state = 34U;
    msg.plan_id.assign("EWWJXDQTWWCYTVJURHNOAQH");
    msg.plan_eta = -1490649454;
    msg.plan_progress = 0.8875476301168534;
    msg.man_id.assign("PEFRHWSPQRCKGTTEYUXOERAPQLRFGFYMPIJYXHUYTOOHYADYYTJRUSXOKOTKUUXAEIDOXPFEWIQZBTIWZAAEJNLBGWJMCSXNRSZRFZOSKDKXITUHPMGWKVQQPDKRASSVJGMBCCYKTWMDFGDPWVNHBANCIRLMJCVBOQCXDQEYLUYUZNZZCUVFVAPHKWT");
    msg.man_type = 5499U;
    msg.man_eta = 855497614;
    msg.last_outcome = 100U;

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
    msg.setTimeStamp(0.8537581267912867);
    msg.setSource(7421U);
    msg.setSourceEntity(177U);
    msg.setDestination(25912U);
    msg.setDestinationEntity(137U);
    msg.state = 215U;
    msg.plan_id.assign("OLMUQJOVSJYVTQEPBWWSEAYNMLIGEPACXXJLNUNHDUWHMYQCQTLDDXIZPBQNXHOWXDLGPVSCCAWZHZCZNMUKKFBURNTFZNTYXLACKKMCTZCYLXVPITUVUZTYEMJEKREHXPLPSJFMKHBDDQMHTYEBLHM");
    msg.plan_eta = -327878527;
    msg.plan_progress = 0.2491537056994646;
    msg.man_id.assign("LQAFDRWCEHMAYARHKZOZABIFETTOHEOPANOXMWHKNGBTGDFXYRCHLVGQNNKCOBFPTQYPSLEPJLCUJRBUGPDVBPQEYTEMUUEXGDHULWFGGKCPRDTLVBFSLGTSRNXORZLFKCUYYIEWAPIHORBNIVTZNCEVCOGBUMJKZVCVDKISBIHADVKMQPXDWYJXSDLZZATZHWOGLSJKJFQVXUXJXIURZQCXEJFSYNWKAVHOWSSMPWWSRYMQNMUMJ");
    msg.man_type = 54675U;
    msg.man_eta = -397752930;
    msg.last_outcome = 42U;

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
    msg.setTimeStamp(0.13667736003161746);
    msg.setSource(12218U);
    msg.setSourceEntity(209U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(17U);
    msg.name.assign("TCYDDLYYGPLFXXLLEXZNEAQGAFQSHAZEGWGESHUNNZQDVACKMFZWHKFPBRGLVTBWYRIOUNAVXWRFVNEUMMJIZLYCSDVWSAVORJGLNPXZNMINKKEMQPPKUWDPRXSELKJXWRNVFXUAGFEPNKSDVXMHJMCOTKQSMDCJDOUWRBGUBEIGIHOFYCKQSUI");
    msg.value.assign("FKDJRUCVXTOCTKGVGESXLLEZQTXWKFULW");
    msg.type = 86U;
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
    msg.setTimeStamp(0.9315778807774636);
    msg.setSource(14734U);
    msg.setSourceEntity(91U);
    msg.setDestination(3762U);
    msg.setDestinationEntity(36U);
    msg.name.assign("AZYAZKEXMHBOXRIGNIPBQHEGHBIGWALCNCXZOFJYADBQDGSBLWSLOUOZTEIVHJNTCHOEMJOFSFXNKDNEACZDBCHPCZEIKYPYCXTIEOYVKSYWPSIFGJGFPKUBALWIMSSAHMGNUTWKQEVVJLVOFTJHCXRRPZXLVTQTUQAKVPJMADURXYGIMVODWNNFJHDMTEKCHQLSQYYQRQIUTRFQWXBXUCTZLRWDBVRWPMFGPKUWBRS");
    msg.value.assign("DUMWCICFHDFYFSNCOKJZOBDFQWB");
    msg.type = 232U;
    msg.access = 231U;

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
    msg.setTimeStamp(0.29546199387318695);
    msg.setSource(47194U);
    msg.setSourceEntity(85U);
    msg.setDestination(54688U);
    msg.setDestinationEntity(80U);
    msg.name.assign("VFUCYHUYGRSTSYMTDUEESHYDQRSWKZVPEZFANNGTZVSYUFHHXSVQBYCASXCXYFNYXBDXHTHBMSMMGZWDAEKKDOIPAIBQZCDRLQZMKVLQEBTRHGRGCWQNMMJBYQTKKOQPAGITAJEHGCUBOCBHALIUSJOVBQWPZWCRLTTOXWRIWVMIOQFAJRZIXGEUONPWDRXLPKGFJUDNLLIJBLOCUAJLDEPFWVJPSMVKNOOIJAFPTVEUZKD");
    msg.value.assign("EHEVFHXJUMJTPLANXJYHAGERGPYFKGKATVFZYWQMYPCFBGIMDRABRHLQDNNFMZKZIWADODSXPHBRPCIDTDIRAJJWSQKBKTECMTPRCRIQCLQGSICKXKEWXC");
    msg.type = 206U;
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
    msg.setTimeStamp(0.73073728356058);
    msg.setSource(4328U);
    msg.setSourceEntity(62U);
    msg.setDestination(64926U);
    msg.setDestinationEntity(72U);
    msg.cmd = 187U;
    msg.op = 223U;
    msg.plan_id.assign("JTSXDKQPVACSOMKEKZNTZMOVHUXZQBUFBDLMPYPUAILNFIFLEPRKXKJOUVSARWNQSHFMDZWLEZGVYWBKHHAPUPDYBRYIIQLCVBRCJDNCSYMEBLFTSXNJFZDHXSEMJCRXATTLJLFTEIMNYUXGEWLCQLOYQRWENCVJZAYWCCGPQXIOGFVYWGSQZKCABKAIDHZWOJOMRTXNUHAZNGBTKIPIOQWGDHWHOBAOR");
    msg.params.assign("XSLHRUXLHFTDZSCVQWZFJYBKSYBHACGAFZVZYPPYHCRDEFLMYAPK");

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
    msg.setTimeStamp(0.09869070777670708);
    msg.setSource(3865U);
    msg.setSourceEntity(94U);
    msg.setDestination(45410U);
    msg.setDestinationEntity(16U);
    msg.cmd = 45U;
    msg.op = 241U;
    msg.plan_id.assign("ZTOGOHVYSMJWAIMZJYFN");
    msg.params.assign("BZEMUDDKRZFHFINODJKJLPFWBEHKDHZQUGEVGDVFJSHLTS");

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
    msg.setTimeStamp(0.2720094501793534);
    msg.setSource(3495U);
    msg.setSourceEntity(174U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(69U);
    msg.cmd = 203U;
    msg.op = 90U;
    msg.plan_id.assign("WEYACXEKKXLMRLWEMQYFDKYHMHIOOIDUUFTIYVUTMYALCXMKBVGZNEJGCAJFPHTPZMDOWSHPXLPWKEEQYENTCPGUYPOTFAUFNCTSDYDBNJZBIVZIDNNJVVGFBGYMSNAURPQRXLLSZZFWJZFIROANVMHMAWGUBNDRCTOENTHCBSQJAUABUFIOLESZRJTQCOBXXVROJPKSHRWRJDQPSLSJHZQOVWIKYBIWCXQGRZDWDCQGTLUSGGHLPKQAK");
    msg.params.assign("VTDUFUGYGIMLMZPLGQBNWYDVXXSXBTGJLG");

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
    msg.setTimeStamp(0.09238140778340809);
    msg.setSource(38182U);
    msg.setSourceEntity(52U);
    msg.setDestination(40125U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("LXKIKQAHMEIANZXNQZCGCWTHGSCXQLPQNXLBVDCZIKRIGWHXLUUXIVBLSUSOMFBMAESGJWPJSQRVHEVAEPBWYAFYOETVYUKLPZVVZRMJLPZJPBGWTMDNYTTHYP");
    msg.op = 216U;
    msg.lat = 0.28968205333839536;
    msg.lon = 0.07395838983839798;
    msg.height = 0.4880502514205235;
    msg.x = 0.0033050599585251472;
    msg.y = 0.8004374443355344;
    msg.z = 0.1320887101358329;
    msg.phi = 0.2139741769665675;
    msg.theta = 0.3834124084074436;
    msg.psi = 0.9672632761085167;
    msg.vx = 0.0053136776377518125;
    msg.vy = 0.4750244508363797;
    msg.vz = 0.5308248805730578;
    msg.p = 0.4857945038895901;
    msg.q = 0.07739638385411252;
    msg.r = 0.840638049749022;
    msg.svx = 0.2932140931447994;
    msg.svy = 0.40586604178516983;
    msg.svz = 0.5150131979093667;

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
    msg.setTimeStamp(0.981373497601639);
    msg.setSource(18801U);
    msg.setSourceEntity(169U);
    msg.setDestination(17803U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("QBIIVKLTJAJETKXGYBZTDHBIKYYWXBYQBWJSJCOWWMETVAZAKQEPMCQUXOJZYJHONLEZABSHORUVICWBTOLFLMMFEXYOAZGDUNHPYDCIGSELFXGNBHQVDXGCCASSRMGTNFZ");
    msg.op = 95U;
    msg.lat = 0.8294623334655513;
    msg.lon = 0.9308592644121629;
    msg.height = 0.3865539205945401;
    msg.x = 0.5668740351010318;
    msg.y = 0.5180421987829656;
    msg.z = 0.2554168188247231;
    msg.phi = 0.8910955924840313;
    msg.theta = 0.8653235205200264;
    msg.psi = 0.7629079732907029;
    msg.vx = 0.02709782477986311;
    msg.vy = 0.479566810557841;
    msg.vz = 0.9461658858282528;
    msg.p = 0.9444821757363097;
    msg.q = 0.9574707609931093;
    msg.r = 0.8545625324014197;
    msg.svx = 0.902894465789871;
    msg.svy = 0.72808904878836;
    msg.svz = 0.8300669199678905;

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
    msg.setTimeStamp(0.47766825035262184);
    msg.setSource(10114U);
    msg.setSourceEntity(95U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("TSEWQMBCBKRNSRVUFOLVFITYVLICZZBLJQYJRYDDJGMFEEYPZYRRVPUKZWKKHWVDHJKLQKXCAUNHMHYOGUNHNYTIDOAJBPEYWCMVOECE");
    msg.op = 130U;
    msg.lat = 0.1828119528656379;
    msg.lon = 0.019407972880988833;
    msg.height = 0.5161857283840184;
    msg.x = 0.7916358894051807;
    msg.y = 0.8104272094384368;
    msg.z = 0.17044311940145118;
    msg.phi = 0.1591921127061673;
    msg.theta = 0.1297283685422872;
    msg.psi = 0.7396548426582091;
    msg.vx = 0.46351567305911034;
    msg.vy = 0.2746661722323659;
    msg.vz = 0.6925291251938829;
    msg.p = 0.749999983368625;
    msg.q = 0.29715435917292077;
    msg.r = 0.4034858107193997;
    msg.svx = 0.8828972158761047;
    msg.svy = 0.8852830577075042;
    msg.svz = 0.44694267748874594;

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
    msg.setTimeStamp(0.8541156037749515);
    msg.setSource(23097U);
    msg.setSourceEntity(20U);
    msg.setDestination(35592U);
    msg.setDestinationEntity(176U);
    msg.plan_id.assign("GZJPLETAUGJTBPTPNYFKUSFVVLIIHRVDEAEUUTQQPMPTCFKBXRBOSYDULCIZBOFRWHNAQGDOWEGBXICCTPFCUFZGHMNYNDCXPQADKFWYBZRWKQMWPVNLQPOXQRRSMOJ");
    msg.type = 185U;
    msg.properties = 144U;
    msg.durations.assign("NZCBRXGZEGVTLFUXDHJHPSFINFWJWPTZDLCOQPPKVDSBOUJKZXJSZMOSFFU");
    msg.distances.assign("KOCXNOZYOELADYCPIDHWUMJFLPTYASRTGBW");
    msg.actions.assign("RWRQALIHRGEJHXRNIMUGIU");
    msg.fuel.assign("VYEYMVKIHBCBMPSYKYZNPWQOAVLMBUPJUOPEUHPJSTZIKZLWMXCZURKYTICHMYRYZSITSXEVCDTWDPWFOBACBUQKRGODXFNDIZJTZXQNVEFHSLJXBKYCRQNGNNRNHVANUNFXECMSQILWMHALLGORAEDPCPTSPVRQEGADGWSOCIJGADQRW");

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
    msg.setTimeStamp(0.4964000132999199);
    msg.setSource(16364U);
    msg.setSourceEntity(253U);
    msg.setDestination(21877U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("UHCULKDGTRLGYLTSIUUULRFMBKVSBZZXHNOZCWNXUSDEVQJLKLPBCRBKJHLETOZZDSOSJNITXGEMUHSPICMIVAPMWLZAZZREGVEOVGPWVMNGNOCHOSJYMXHFEVDQYFUUOCAARFLXDOYGNWHEGFSO");
    msg.type = 13U;
    msg.properties = 56U;
    msg.durations.assign("PKMISGFTMXRJMJQZOYLLNIYQOWCINQJTAWLXCHNPDYMFSYOGUCUJSHFYPBKVKORTDZWNPTIYFRLVICESPOCSDJJVCDGTAPVJHBAVB");
    msg.distances.assign("TPIWLSGRAKWPWOIWHXAWLSSDDCZIIGGQURMNONYDMCHMJIAJQHXHUUUFHDFTMHZVXWZQJBTPFBMPIUZWRIAQNEAYTDEIZZNODVVNGPWNGKBXOCRDKINFFEOFFXECCOXSABLGNSYTBLZTQBKVPMIQLUMBFYNRERCBDJSKESBEZURCXKCVD");
    msg.actions.assign("WNILTOWPRCDVGCWOQPBMHJTQNYNXSGRUCLKZECWDCAUGZIBOAZRPVVIYHTKULHOPJNKYHMDFNCSQQYUZZKAGIWTUUQAKVJJOHQBFQFBYXLPAIRDF");
    msg.fuel.assign("BMRFNSIRLQHDIXMHVYSJMDSKFMCWDQTWWAJZPZKSEZFPCIQXPWNIKAWGPUKWGMFZYIAOBRBVTQRNSJHJYBUEFNLDQVCOTPODWVZVCNXEUHA");

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
    msg.setTimeStamp(0.13525446817562592);
    msg.setSource(23323U);
    msg.setSourceEntity(176U);
    msg.setDestination(25003U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("LBJGHDLKRHCCYOMIOFAZZDLQBMAWXUAOVFCBVDNTMYXKEUVLXMKEEMRNKSIUSTZGGFCIRHXUBGDNYPWJWZAWZJFQTYVSJPBJIEFUTKWIUONZSAHJQGPEPXKQSZGSHBUJUOMEPMGTQHXKTYEKQKJACFIQEWCAWYVSSLPQWNTMLVPLVMHONUSEGJRIYQXAVMLNJO");
    msg.type = 211U;
    msg.properties = 142U;
    msg.durations.assign("VFIHDMRFQNBUQSDXJHFZCACAGNJETRBJXURTNDCLQLHUFTPXOWQTVPLLYOWPBJRQSIDJORZFTLUXGYNMPNWYZGVTAVX");
    msg.distances.assign("GMSSKKINXAZUVWFJPVZFTFERRMEVQFQSZGYLPZCIMDUNQGILIUMRXPQPTSDAYPEAOAQCBJJPZCRWMTDNPIXAHBKMBCHZKEGTLGXCNRMTYGQLNPLCXIWHZBWWBAWJLUSFTRDKZUUOLYO");
    msg.actions.assign("ZSUELPNZMPOKEXGTAGVQLAPNMRPXKCSDWQBKCYMVKNLQIJUPIJHSDVEDIUDOWLRJEHOTCWDNVVNOXBNEHZROZTUUBLIEGXBHEFFFVTKATPTIYXKEWWVYRYMNJHOANFYCSBDTDCWJZIUGSXIQ");
    msg.fuel.assign("LJXLBJBAUPCGTFIEKOEIHVHLXYVLPJABFYNFEJADFMVRVAOJNLJUNBWSPKKNRBNCAMDZIAWXEDQEUOOINDPUFLYKCKIZOXRHQZTFSWMSQYQCRGXZWTMXZNXBUGCGIIWWEMYQMVSXKHLYVVSOSJUEJSFBPBAQCUFBPQPZDGTYWULASIZMQHDCDRAGEDRWWNKOOYUZHGLTKWCQLMURPKTSXHGZCIPYPGQOFHHERDOZDVTGNHBIJTNTRV");

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
    msg.setTimeStamp(0.06685845510691857);
    msg.setSource(6815U);
    msg.setSourceEntity(135U);
    msg.setDestination(38845U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.4508071475902562;
    msg.lon = 0.16611664848376506;
    msg.depth = 0.22704813913169297;
    msg.roll = 0.5510961128708084;
    msg.pitch = 0.35759642077073384;
    msg.yaw = 0.7298470940012144;
    msg.rcp_time = 0.2689668844197006;
    msg.sid.assign("HXTYGUHSDJVPZLPCBMZRWRNUPYLTGIILZOZSQWLU");
    msg.s_type = 218U;

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
    msg.setTimeStamp(0.8754702352759618);
    msg.setSource(32001U);
    msg.setSourceEntity(243U);
    msg.setDestination(57892U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.9366220994017261;
    msg.lon = 0.2924797623052203;
    msg.depth = 0.7188195296682517;
    msg.roll = 0.6958790740929005;
    msg.pitch = 0.517796546201142;
    msg.yaw = 0.40944604441898036;
    msg.rcp_time = 0.6949167192759481;
    msg.sid.assign("WXNHGXVDEDGFIINTMWHRUAGGRARSVFQVZMTHFZQVSWTSETUYZAAFUFBNJWSHRYZNBKHQICKGUPJZDYLBYBQCDRECXXPPMIETCIYOLIFWALHGWQKCTWPCSSKALAAUDQFTZDIIJXCNBIBOGJLHTJCXMEFNXBDPCPROLFOPAMOURUJO");
    msg.s_type = 58U;

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
    msg.setTimeStamp(0.8891240416344991);
    msg.setSource(45073U);
    msg.setSourceEntity(5U);
    msg.setDestination(63573U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.9813077058778658;
    msg.lon = 0.8175560025179297;
    msg.depth = 0.0864450252577953;
    msg.roll = 0.8958766852321545;
    msg.pitch = 0.4555260549220449;
    msg.yaw = 0.6805459156398307;
    msg.rcp_time = 0.16663453139051077;
    msg.sid.assign("TYGQBPSEJFOHBSLWRNGNANJPEGXLTRULYUPBICUBRLJIBRYFQGJZSKJCISWHKXMQACHTZSMRXLHKMROQVBFCRBIMJPMVFTZGOMZSUWFXWLNUHHAFDKIOTJDLZKE");
    msg.s_type = 165U;

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
    msg.setTimeStamp(0.34603663406879737);
    msg.setSource(16463U);
    msg.setSourceEntity(97U);
    msg.setDestination(44020U);
    msg.setDestinationEntity(159U);
    msg.id.assign("WRWTIJHCVSM");
    msg.sensor_class.assign("SNJNNPNYJJAQQALDJLLVGVAKBFGOEULIXEWTHSXXVJKCEAADJNNDIEIGXXPHJQSFZXRUNQOHEWRBQDSBRDZOFYVVGOGXSFUUZDKYPQSZBWWAXLEGVJMYVHNHZBYRWQPMCMI");
    msg.lat = 0.3632801057210926;
    msg.lon = 0.5179235809401147;
    msg.alt = 0.311591770799431;
    msg.heading = 0.7551393810854675;
    msg.data.assign("NGITFLRNEPDVQACJKDEELSXKQEHZMGZJYGKIYGXIJGYIIJWUVUMCERFLDXCHIORTYTBDDPGANJWYCDXKRBYUQAYSDALXAVNIZBAGDKSWOLUNNNXXZNVTMFSOQBSSLCLXBVTQRHAEAAPYUJMCIETXOVFCVKOKJIUMTQJQEBVSHKWDPHLARSTTIF");

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
    msg.setTimeStamp(0.2651213566469536);
    msg.setSource(47344U);
    msg.setSourceEntity(25U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(9U);
    msg.id.assign("FVEJHEIJHGPPAIRABMMDPISDCIBJURXPHRNNACVOFTWKBUDUQWPYZEYGZYOWYQGSKCQMDDLHFAJTQALZWSZESJBFNXXIMCECEVSEMFJKFLUDVXGPAPRSNKIOICRTPYHWDVOLNBWMWWYCNVTVOZXRMGFUYOBZFBMJTHGY");
    msg.sensor_class.assign("XSWSXGAKTRWCRUJLDNZADFGJSKYEIRLFOEVMVZAYSYOVUPHEDFGVFEUQBZVRUXWBCQYZBPFEADEBRVPZXBNKAHAWJSBOIW");
    msg.lat = 0.11895157626398878;
    msg.lon = 0.585734650415105;
    msg.alt = 0.5289246807535637;
    msg.heading = 0.455216642214899;
    msg.data.assign("SXIRYWFRCETCQQZCJXWNPEFBAPFEOLZUNAVOOBQAIDVUXLOBJLJEOEDEGYOSIPUWVIPBZHRGYUHYHXUCNGEDLZVQGTQPP");

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
    msg.setTimeStamp(0.6667289057481672);
    msg.setSource(8428U);
    msg.setSourceEntity(62U);
    msg.setDestination(9201U);
    msg.setDestinationEntity(149U);
    msg.id.assign("WPFPIUYGYMMSETCMRQXXAPCFVJZJAJIDODSXIXZWHMQZLJBBPJZKRPGJPEOUYDFBKNCTEH");
    msg.sensor_class.assign("YBOIYRPHLGZETVSNXNBMAKUWQGSKMYPILTYPVTBUBCGIBJMWELBNGCKSMBKMUZCSTDQMPNAOWXFAHIITLACQIVLQDVTOZBQNJTPFMVURLWZEFHIWSEYOEMNEXIDJUQGABPWLSCGJCBASAOPRRHLTOYPOFWGXKGOUEDPKQOWJHOK");
    msg.lat = 0.5171486232243426;
    msg.lon = 0.3945037405127667;
    msg.alt = 0.30696343995290454;
    msg.heading = 0.2974420785247932;
    msg.data.assign("KDACHCTUNQUFDSWKOSXMCWMBVFDBRSHPVLSGHKFKNNEFASHXJQNGLDBSJJUXTOQPJRVFBLRVYAYETIHXVFNTWPWGEXEGPWHRXIYOGICIVUDQOPKFTTQMNUSBUPEKVNOZFUHCBDXAUEJRQKCRGGWEIZPFOUNUDLILNABWQAQYIABDZQHTMLCPXYELBSAMJTXJLEZVPDIJYHIAJQORGKISBWZSOMFWGVTMECRPO");

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
    msg.setTimeStamp(0.6147866849577657);
    msg.setSource(4845U);
    msg.setSourceEntity(152U);
    msg.setDestination(11783U);
    msg.setDestinationEntity(238U);
    msg.id.assign("TDRSZMSHCNQGBBQMCIUJSAVORDIKLGDCJUMUXVQGLOYRBYIYNBRGPJJQKLTNZFWOPLUMCGXJMHCHQVWXBMFRTLTLEZAOIYIFJYVGZTDOPHYDCGOXVMWKYRPEEAAZZIKSBHWXUVJISGNDCPXXFFIDPUCTYJCKUXGSHPFATEWXPUDEKSPBAWFHAXLAKNBEOJDWRWLLHEFBWISIQOTONNZUYEUMRE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LMLXUHUJFFBBULTMKKXWYUVTKRFNVQPXCQULGTSXHPCKCGVSWCIYISMRJIOUENIZMQHACHPJZNCCZDRCEGQWFSGZWWTHYBHJZWIJNELEHXNVZTPGBFZBEDVSNPCSBXDQTYZAALBMDRFKHJXIXIDASKVYBVHTIPSWROYRLAFDQJLOEATDWJAQYMEUFOYRBRPMHVCFNWDFZIE");
    tmp_msg_0.feature_type = 223U;
    tmp_msg_0.rgb_red = 127U;
    tmp_msg_0.rgb_green = 82U;
    tmp_msg_0.rgb_blue = 154U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9036963032313536;
    tmp_tmp_msg_0_0.lon = 0.723505478014766;
    tmp_tmp_msg_0_0.alt = 0.45500137272324637;
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
    msg.setTimeStamp(0.08837292554645104);
    msg.setSource(47213U);
    msg.setSourceEntity(129U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(114U);
    msg.id.assign("KQRROECWCIKMBJFUKYNPUNLHOKWFSFCXHUGEWPUGTLNKQVDZJVZASFXQUIFYBKTPXSLQDTBOYCJQXMUDVLYWCATWASQAKRRJV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JSUFBWRAZGLPLGZVAYPJGWOHMWJMQVCWSNZCIEDVIIHPFVWIQNRLYUUJIYGNQWDEOK");
    tmp_msg_0.feature_type = 99U;
    tmp_msg_0.rgb_red = 157U;
    tmp_msg_0.rgb_green = 32U;
    tmp_msg_0.rgb_blue = 219U;
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
    msg.setTimeStamp(0.5742708735726068);
    msg.setSource(7066U);
    msg.setSourceEntity(79U);
    msg.setDestination(17033U);
    msg.setDestinationEntity(66U);
    msg.id.assign("CCJBJIPJNMRMLVJTQVPDNMSXMAGNHQLESWIOMBBMHYEVZQHRGAKLLRYFLBVGWQGRPUUTCYLEABZKGFKUYOFYLOXDTAUCMVZSZXAPPFNRGYQGQJOJIFJNXVNRDBFTISOCVEMBXEETDIHCUZYKXVQHLAPXKCDOPSWOALSPEVSJYEFAOFIFMMTKPBUCZNXHIXKYURHUBTBEZGIAHZWJWWWQXOAWHSURITCWSDQJPTDDYNHOQNKNRWZKDL");

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
    msg.setTimeStamp(0.8221449552179708);
    msg.setSource(17736U);
    msg.setSourceEntity(143U);
    msg.setDestination(24528U);
    msg.setDestinationEntity(219U);
    msg.id.assign("LIQKKSIHLFDCDWUASDQBTVIOHVKGXUGOCZRVSEHAKAZFAQOGTBFRNIMJJFDQJRUZXHRHRNOLECLBIDDIQZONFWJSGPMBHNWOKTLSGAUWZDHYBMYCIOJMVBBXNU");
    msg.feature_type = 53U;
    msg.rgb_red = 130U;
    msg.rgb_green = 47U;
    msg.rgb_blue = 130U;

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
    msg.setTimeStamp(0.6347808283350378);
    msg.setSource(18671U);
    msg.setSourceEntity(251U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(105U);
    msg.id.assign("WHCBEBUVJIHZKAFEVUFIXEMSFWQMDNZUOOFTVMYXCLKWVKIWXNJUPPFSXFVQUEXHKIBRJVCKPTNPYTBXPPOCJOIGHSLQUCFLANPENYSZXDUZZNOADCGNTQOEIZDQMRUQXIMNTVBLMILPARGSWXRWSRFKDBJYWYHPZKE");
    msg.feature_type = 35U;
    msg.rgb_red = 15U;
    msg.rgb_green = 47U;
    msg.rgb_blue = 220U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6453549545286805;
    tmp_msg_0.lon = 0.8886251018343396;
    tmp_msg_0.alt = 0.2403411981141993;
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
    msg.setTimeStamp(0.9646321336649234);
    msg.setSource(17784U);
    msg.setSourceEntity(85U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(148U);
    msg.id.assign("FPMQMFQCOOYTRVVFKNXMNIJKQMKWSGXMCJLVNIEIWRWGBKGLIXHDLNZIRIHUZIHEWOUILSYEELYFUARFKXVMWAGOEDVHBUZNQFMODZZFPWUBPBAIBVMWDNOBYCDVUOJ");
    msg.feature_type = 153U;
    msg.rgb_red = 101U;
    msg.rgb_green = 34U;
    msg.rgb_blue = 88U;

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
    msg.setTimeStamp(0.8945282771794489);
    msg.setSource(27473U);
    msg.setSourceEntity(113U);
    msg.setDestination(63265U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.8017942928506796;
    msg.lon = 0.6516208254751326;
    msg.alt = 0.8118248193024591;

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
    msg.setTimeStamp(0.6448692096335538);
    msg.setSource(12078U);
    msg.setSourceEntity(202U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.03973076478473614;
    msg.lon = 0.4378925270577456;
    msg.alt = 0.24236861079552252;

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
    msg.setTimeStamp(0.15363396103472937);
    msg.setSource(18701U);
    msg.setSourceEntity(123U);
    msg.setDestination(44086U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.4428272219778213;
    msg.lon = 0.5643425556064202;
    msg.alt = 0.7619395223543179;

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
    msg.setTimeStamp(0.9131369083177081);
    msg.setSource(499U);
    msg.setSourceEntity(212U);
    msg.setDestination(38567U);
    msg.setDestinationEntity(108U);
    msg.type = 166U;
    msg.id.assign("DOWEZCNXEUXKVMHUNKBPPZOVWYMRNYDGYAAEJVTLDYQOUJZNINNHVOPYVCTWUBPUJLCLKZVCRPWZDUSJNEVVRSHKDAJCPPTIKZFLFLNYWSRIXG");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 29548U;
    tmp_msg_0.sys_dst.assign("PFMUFOZTMRZWAKDLPJGKJNJOXVWLCMCRSEQUQVWPYBUHODTUJSUKYJFXRGHCBLLXZD");
    tmp_msg_0.flags = 22U;
    const signed char tmp_tmp_msg_0_0[] = {-40, -121, 95, -59, 86, 76, 83, 107, -105, -5, -97, -40, 26, 16, -125, 68, 6, -112, -79, 58, 60, 109, 40, 36, -19, -41, 113, 92, 8, -85, -28, 46, -58, -61, -64, 86, -5, 49, 13, -109, -19, -14, -3, -16, 99, 76, 12, 11, 68, -23, -120, 12, 112, 86, 39, -97, 121, 73, -62, -92, -15, -40, 100, 101, -4, -64, -34, -70, -57, 60, -87, -82, 21, 16, -59, -33, 60, 104, 2, 2, 12, -48, -45, 62, 66, -94, 48, -102, -35, 90, 15, -127, -127, 24, -105, -45, -117, -66, 40, -100, -122, 91, -100, 108, 3, 74, 3, 32, -18, -62, 34, -36, 76, 114, -4, -2, 68, -111, -70, 47, -90, 39, -47};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0671187880602786);
    msg.setSource(5259U);
    msg.setSourceEntity(204U);
    msg.setDestination(4225U);
    msg.setDestinationEntity(210U);
    msg.type = 155U;
    msg.id.assign("LJWFGEIJXOMEMIYXRGFHAWITUOPFPUPPHODFDICRZUGXBDGMUSHHPUAUVQESQKQGBTXMEBTHXXJCDDTFBNEDKPWKUAXAFKLVUMSRYRACNYVNTETTBBCQDNOYVJCEDVRVPKAXBWN");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 5U;
    tmp_msg_0.htime = 0.3782934716742492;
    tmp_msg_0.context.assign("VUNOQGZDBPBASSXKKOEJIHVQKDARHRPOGEYSBTZMTBHCQWIQSLNTJBWXBWFSCNWNCFYJDDASDOGTCAYXJFBFCQYNDIUVXNTXPMRKVCAQZWDFHKVGWRV");
    tmp_msg_0.text.assign("VODRWXUKERTOHAWEAPTSXQKGLRQTVCSRBDBZVHFAWWXZJPVXYBUGPQEQEAWRTRBIYYOBYINCLLUIXHBPDTPZUOSSICSMHAXZUHDSFGMHMLXDPUMAFEPFILDDKGBPCGFBCWSKJIEUTIQNFMVHFLPGQYHUZOZDOHQYSTMBQRKVRTYWZXKNJNOCFKANNIUCJZTLLKJYJYPG");
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
    msg.setTimeStamp(0.3790093695344582);
    msg.setSource(4650U);
    msg.setSourceEntity(124U);
    msg.setDestination(9623U);
    msg.setDestinationEntity(232U);
    msg.type = 138U;
    msg.id.assign("IAWYOKFQFMDOODGSARGVAWQPACJPJRPERCZHBDWBMCIKQCBSIGSBAVFFFVSPUBTPNYMSTGKHYIRJPPXXTTYZSCXAWIURDEJEOMOMFNRNZNDHRWEHQOCBXVIZLGEUZMATTKOURMDYQKYWSNUXLKMJXHLNGGYJLOLHYWDQPAEEDIFJLFOM");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("CGGMISABCWBTOWXDGJOBTTVKQARIRDIVEBKTTKSPUBOGPUYBAMSLPWRCXJXPFKUEGHXNCVCMRIFSLYNAXMNRVKMQMOSVY");
    tmp_msg_0.action = 107U;
    tmp_msg_0.grouplist.assign("UZKBZCOUHFYHCCVNHZRDKPITYIKBMBENHMOVIXLRTRKTUPLJQVMGIXNZ");
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
    msg.setTimeStamp(0.9542712019396575);
    msg.setSource(29043U);
    msg.setSourceEntity(226U);
    msg.setDestination(25952U);
    msg.setDestinationEntity(170U);
    msg.localname.assign("JLAJJEWDYZISTTUVXVKYPFJQIYCUWWGERBWPIRBMHFZXUGOPCERLDCCPIVCPOHWWXVWTOALAEAMWKOYTDYGIEWGXSKSHOMCLTADZAFXDGZIXUDXHRWGODMBGRLBTQLQVXDHMTYEQN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HDQZZETXLNTQLKQRFTHVQJWWKBPDGAHHNOTIWXBCIGMJNFPMPDQAPCNOWPWWYKHWSOXFVPUIMHYIJAMSRZAYAFWKDKUIBSILYSBUZYLXACEYNCYVFEDYB");
    tmp_msg_0.sys_type = 221U;
    tmp_msg_0.owner = 38662U;
    tmp_msg_0.lat = 0.17088965107774357;
    tmp_msg_0.lon = 0.6287964122187101;
    tmp_msg_0.height = 0.6799529152326663;
    tmp_msg_0.services.assign("KVOGXFCOVTBOWFHIRVRVILWZNPQFZKHJCNIJOKXGUHPCLEPDAIADQQZXGGXMULDXLOWDLIYIHCDTCNOEBNWPBLPQGWDUFBFUIULYYSYYJKMBGWQVERRSEPEXRSMMZANHKISJTMFHDMXFQSMSWUDLFRUCOGOKHMVETXZEDBAHJLVPNJEVQYVBCXGPGTFOI");
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
    msg.setTimeStamp(0.4758539253545865);
    msg.setSource(48785U);
    msg.setSourceEntity(191U);
    msg.setDestination(65313U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("ZAVZDCPYWPKAYXNUUUPGVTOWCQUXBTSBAFJIGLGVBUCJNOTOQCQAFGVLRAJSJCFXYGQVUZGENGSSKBR");

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
    msg.setTimeStamp(0.8150636081262267);
    msg.setSource(25813U);
    msg.setSourceEntity(108U);
    msg.setDestination(8518U);
    msg.setDestinationEntity(239U);
    msg.localname.assign("ZCTMTAVZBBCIMXUFZPDWUSTZEAGHDIWHYKBDLJYKANX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NXGNTPSROYCXSNUVWJCVMHNKMUMIEBDTVCYKIZWLCITWKKFXJZYEHDEOXQLUGYUSWPPIYAMBTONRRIEXLTHQDGUHNKAJZAWGBTDCKHZJXPEJBEPQPVVFWIZYDVEMAFHEVHUGTYBLNMNSOLUBYZMSQDOAXZQ");
    tmp_msg_0.sys_type = 209U;
    tmp_msg_0.owner = 20875U;
    tmp_msg_0.lat = 0.17422261219564927;
    tmp_msg_0.lon = 0.27339077145248925;
    tmp_msg_0.height = 0.6696297587015324;
    tmp_msg_0.services.assign("LOUBYHNOBUKVRPEYFJQGXLXNDEODRPMDHXIDETTALAXTMFGAIBRKFXCVOHLHAKOEAUSPTGMWNJPALADOYCRBKGVPQWEIMUHFOJUZLVTUZSAIAWXVFTLOVUNUQJMKDQXZUYQCCIMVYNRSFJEKDIWGCJA");
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
    msg.setTimeStamp(0.23198609449576713);
    msg.setSource(32489U);
    msg.setSourceEntity(48U);
    msg.setDestination(39822U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("EBZYJQVQYUAUDRDOPMHPSNZJASBHNXEEGHXFEVFMBNUDRFYEVPOCYZIFUMLSILPGJGLDMBHACJSEWZTOJZRTEMFNVAKNPKWMHFTYUUBWXBYNGKOSQOIMWJLOUORLRHVXV");
    msg.predicate.assign("WQHSYCMOZGNSZSYAIWMCEWYMPDWZAMACKOKDRGNWKPRCHZSBSWXVWGNCRJLQCWGTQEIESUOLTZZNESWRQOTYAKXJBXIPEYOPVPROMDYJZUYIZRAUQNYLBFPNTMFUVVHMKLKLEUDBCIUMFOQNCWSJFHADJHUGFDGUFFTACANILKELBT");
    msg.attributes.assign("GAVIJHILYCXWWIHJVXAVLDOIRYDXEFAXXLKUSHHDQZSWULUHXNMOOUGTRHBFGBMQZUZJMMNJRLVNCWWEPVOKWNQPCRBPFKKBXLALERGAIBNCSPUHOAEZZSARCDOZXUPTFILKKTUYMXQCIVPMFSSSTMTMQGVQGJRDSGCWNQLNTIBZDFBFTYSMPIHZYVIYPNJOZLFPDYE");

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
    msg.setTimeStamp(0.8599919624594949);
    msg.setSource(1078U);
    msg.setSourceEntity(56U);
    msg.setDestination(20001U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("GYSVUVFXYZXBVAGCYXKOILDCIVCLHZEZPHYYFNJLZELPCSHJKJADOOMUADUATZBWRRUTSXIJGZKRRDCXQBKSRGFQRJHQUKTIAMIFQAMTMCENDYPPDONSOOLFMVZBKNIZYYUPHMXTCUJJLCWNDDRB");
    msg.predicate.assign("HFLXXOLMMWEVSMQNHIKLMDSNJKJSEMCDUIINNZXWQKMYTVORLWETFUCBDGMWCKYSQGYSEIHIKLQYIDAHVBGBXXQJZCODTTOENKL");
    msg.attributes.assign("SYLZPVEGJKCVNWGTRJARKAKSXEBFCXZMPRCKULADZJRUYGEXZVZGFFTDQFXAEEIYVGGLHJVVTMWODSITTLHLFWMUWBKUZNMCFTOBPEJZBWMUXHNDCXQXBNJIWGPPHAPTNLDSTIJVSGAPXRYBBIRCZNOYOBMFVPQNMNDYBIURYUSBQPOCYQWKMLFKCS");

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
    msg.setTimeStamp(0.5055920991110394);
    msg.setSource(24343U);
    msg.setSourceEntity(1U);
    msg.setDestination(18134U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("LTYNAJANUOPPPJZDICCFGOSCLLCZJZRTBIITEYDMQZXVMLWHFFGXKYPBTTUPDPIEEDTNGBOEWVRKSGDYWEHCXUENSTRNFPGAMMGBQTNSUDE");
    msg.predicate.assign("BCEYFMRDLUKASLVOFCPXEMXLKCNHRIQAEDQWTGDJLTHQKBVQZCFCCUOHJIAEMWRAYGPQAYODFTMDJDNMUURTVPBSSSJECCKEQUWXMYPPVYFBRTHZOLNAVMMIWLRLFDTUTWUVYZXISBHNAZRPUTRJVIDYKOKIGCYDTFHNOAMRAQQCWKJFGNWXHJPSPGVIGBZHNLVKNBEXIGXSASLIYPDR");
    msg.attributes.assign("KDVKJDHMLUHPPRAOLKXTDXGGFJSDFMDZCXQFCRBDRNVOPECPVIFIAGQBVJPJAQLRPWSCNK");

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
    msg.setTimeStamp(0.8337732056758266);
    msg.setSource(48491U);
    msg.setSourceEntity(31U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(53U);
    msg.command = 141U;
    msg.goal_id.assign("MJURITFFTDOBCRDWEGADPETECZPONEOHYOQDXIIGCKIUNLYFYXZWQQWPHGUFSBTMRRBAJDYCJKBJHZZRNLYKEASOAUSNMJUXXZMIPNXCCFXPYMAHWDHEDJZIJKYZVFODHVNDTNFZOLRLSGGARQKBTMSFNFZYMKSGUHERLPVKWOASVJHVVEYPYQUIVVQGPRXXKSSLTJEBHSQWGGLVJAZRIXTTKMWBKCAUCQWUUCNWMXQMPBFOTDHG");
    msg.goal_xml.assign("UJOYBQGONHASVJMKMHPTDQGKUNSVUEQLSQWNWFUBJCNEIBBQLITTOITUBHKOOGXQBNOGFJMVZFTXMJIKFZVHMZXSARVEBKESSTWRPAAPZQHUNQOIATRWXMUIPSRZQCEKLUPELWELXDAXACVVBJHCITYCKDTYWJUNIIMYYRHDLFCFEWZRWCOGXASJFPCQRYZJYDRZHPYPDDUNVMFTHYJCLGNVNGFLDFKEGLXDAGZYBEPSVZWSRLXIOMOKDRA");

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
    msg.setTimeStamp(0.7101301976017284);
    msg.setSource(57880U);
    msg.setSourceEntity(199U);
    msg.setDestination(2575U);
    msg.setDestinationEntity(69U);
    msg.command = 101U;
    msg.goal_id.assign("ENHODBICBLARUQELYTZJCDOSBLFRSBWATKVEKAQNVOWKCEXGNUVDNXFGDYDHVSIFCRATOBZGCKZUMSYPYD");
    msg.goal_xml.assign("LDHLVCBUOIFYVTFAGNNMYVDIVBVOGYFJNJLIXGVWKKDHIHMLGURREAPDUBZDIAYQQEKEXXXLSNNROPYIZZXAPBJMWYXZQIRKLOAVAEIPEUYZTONARJAYMRQCWSEKMXWGBETPYOBDKOSJDCWTHPPYILRLSWCXCNCLMOMPDFAAXDTCDMEONFLFBZGBBKUFQNQQGSSCONEJKWZQVSHQTGZKQUWMVIXZ");

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
    msg.setTimeStamp(0.05486652021406058);
    msg.setSource(63370U);
    msg.setSourceEntity(12U);
    msg.setDestination(52619U);
    msg.setDestinationEntity(34U);
    msg.command = 93U;
    msg.goal_id.assign("SPMYRWZHSQHWGRLXXTKZVPMRWVXLNGYQRWCPZUNPFXNW");
    msg.goal_xml.assign("XTLNALZRGVNSEBPXHZOUQZYATXZFNSWPSFDREFCIYBFHPEMVIDCNCUHDSGMBUZANFHRSCPLWSKWPMRALKOHJEEOJNGJRQLPVKVEZOAKPNQVSDBQNJHPIXJGUMTHNYBDZXTZUOVBPEIQCBBDRTK");

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
    msg.setTimeStamp(0.817517498341375);
    msg.setSource(37045U);
    msg.setSourceEntity(176U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(26U);
    msg.op = 201U;
    msg.goal_id.assign("TKUXMECBMLRIGZIWNAHAXGPWJGHAOVJSCITOQTOAXPJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HPAKZYMHDZUASVWNZTOGDUKKGBBGFRCGBDRYSAJUMGFLORFJAZQSVEOERICXKXJUZCBUHYMUWJUFQRKXTMBFJLBJRPPXXXHPOIVTYWABXEPJGYYKYRSADKWKHLANLPGQ");
    tmp_msg_0.predicate.assign("ABPPCYDNRKEXDDMSYBBTJXEECGMULTGUZKILETZJMLVNOPSXCOCXISBXMOFUVJYWTDUHGTLZYEPBZYHAYPNNQZFLTPQSNQDFKKSGIZXUQPAOEULNJAANTQSRQQFWFCGJHMWUCGKYSHBJWXQOZVDIATPWAWJMXPORINMBKUVWYE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JUZACORRNLITQWJZVDKTGMIZRXKQRLQXUZHWSDAYHSCDEDQANDEYZNZQI");
    tmp_tmp_msg_0_0.attr_type = 99U;
    tmp_tmp_msg_0_0.min.assign("KVGIOBGEUJURODQNHLWQSOGCXIRTYRVJCYAQZJMGOWGZJRFINUAEFOFGMMWLFDWFDHUEHVAKEXHVSTPZYBPLXZMSABILSKNURTHUQCBTDWZEVUQYLDBLLFFCOQJHNWPTVECBHBVXLYTPWMIXGLSDSAVZOYFMXDGNSRIRYHENWVJIHWERUSQASRVDCCPMDKLIZTQOKYXJJBYCK");
    tmp_tmp_msg_0_0.max.assign("IYPNUDTBMYFNSIXUGQJZCBTRHFTFGHTPYKOEXAVCKWHLDQGCQUUDKRCZUXZJEGSJZWFRLKEKIYGDAVMCJEMUSPSQAVMZRHBDYMWWLVIGSZCKRFLPJWSGQWVXXUHSEWYYHQNNIQIGRGXYDLVDRNPL");
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
    msg.setTimeStamp(0.4592758561886686);
    msg.setSource(6014U);
    msg.setSourceEntity(182U);
    msg.setDestination(19497U);
    msg.setDestinationEntity(170U);
    msg.op = 75U;
    msg.goal_id.assign("KNKPLLWFYMQXLRQVXGQARQCXYJJSUJDZHOWLGUBCQBBZCXNIWOJMRCHHMLSPDZRMODTIYYIUMVNXNMLFMEUKTXEFVPEYBRAJWRSZTCMQAGPEZCVARWSGOHOUGBPNIOPVHZHAJFTOSIWOOWSRUBMEIYPPELTJTNGAAFTIWPKYVJZNVKQTNXDRKFF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CTYGNYCRKPADJEJWSOXXJUFGQSTUNMNCPIASHVULDSBTRWGLCZSODHWHREYAAWHFANFWAEZJDYBOPPFYEYAXOHSQIPYZKFRMIQIDLMIRXWYKRLGTGTFARHVVTMNLKEMEQQCMCNVJRZBXDZOWGBSSGJMEVJXDNJXQLNBVPILPMDHJ");
    tmp_msg_0.predicate.assign("YCBDMWSXVPHWZGHUCLBUBPCJUGWINBKADQJOAMFAQOIRJRCAGSMFUXDEKFHUOYCVYPNRACPUZQKVTVBEJFMPDFRRPIOIFNVXOWECUGFEFJTQZHAFZTJWWECKGSEUOPTYSKVRPHCJQMGDMOHTUSKSOZNBXALTETLKQIHTLXQBYZBJDNYYZFSPVIWADZNETKXODYWLBLSXW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WKNAOQBDRZEHCMJLMYCQXHEISVWAHHSLCVALIOZTUSLNPWOLRJROSBYOYNOGRUPWUZQBXDHCIKBIBBXQFOBDUDPBDCURUVMMDGWAYTFPVVXJXTQMPOPLRLYIDPTWEJAYJZHEMCBCOWAPGTZNDVQLKJNKIFHSPUGNNYKGTIDFNMHJSQAGUFWFTOEENZQVZNTCFUWVRPZFKISVSRQAZF");
    tmp_tmp_msg_0_0.attr_type = 153U;
    tmp_tmp_msg_0_0.min.assign("IECZWSFPATDAEJXYNIUWCPYYRRQHWCTOCVMRWDVLMJNUQUBEFRXNQZOFMJG");
    tmp_tmp_msg_0_0.max.assign("SWQJINDMAHNSJRQTNVNLRCYWHFPBVYRMJEAXXWWDEFVADIZXKMSSWLOBFHJJQHSJTJIYOPORFJ");
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
    msg.setTimeStamp(0.725749003784132);
    msg.setSource(52050U);
    msg.setSourceEntity(200U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(102U);
    msg.op = 115U;
    msg.goal_id.assign("ZEICIFXLHCOHASKKTIJZSKKNFWFNTXNAQISSMJBOUGYRWTRLGRJLNHMXEJKFTIUPXUHJLCZVESECMIDBORCWGBUXUWHYWKPEAPHJUVXGJXKNOALZFSCPMRQQKFWNRO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HDJFXZSACFQFDMCRUWVZCQKNPPYVDJFPQZVTVSYEMYYOOBQTIRZASJRPCLLCNFCMWKKRZWXBTNEFNMIHSLZITHUEYTKIRSRODJCUNFDKIHCLIEJEBSRGVGWOMPQYKAQADBSJPAMMHOBRXCHNXKOLZUVISWEWXGDKKJSTGGLUZTOJGZGYOGY");
    tmp_msg_0.predicate.assign("PHRPLIBOXQQSIQHFNMZIGEGPUMPEBBKAZLVSWJVWFXWKMFHVLIPETZLHFGTJMQJFRKNDYUUCPNZYODWSZYHNQPDUFHKFBNUZQCKBMONGATPLMAXOWHODHIAMGDEDSVOABHRTKURTVICSA");
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
    msg.setTimeStamp(0.08676038447738643);
    msg.setSource(46205U);
    msg.setSourceEntity(165U);
    msg.setDestination(18478U);
    msg.setDestinationEntity(51U);
    msg.name.assign("XGOZRCPMLF");
    msg.attr_type = 227U;
    msg.min.assign("OTPIAWXVAUPTPSPLAUKFMGKVZVKGDWUFXJHPNOSOWGHBLBEIUCHYDWWJKGTFKDNNDCSZIREYLXCIADPUUVYQEJUIQGNSQRXWCPABWTFHMHJMSDWBRMLMJBZYIINQFOGZTLAFJPOEDRKBRIQXZOZQWFCMFSTUXZZVOEHXOVCBEEQCTRDGDIXLNGAHSNC");
    msg.max.assign("WNVTFCPPPMYNHZXLWSHQQLRKVXPPCPFZHZMAMDIJCJRKZFNDVSGYOYOLAJEHMAAVVUEBFXEKDDCKFTLPAUHRLXLEKCUSARAYQIUHSQOAHGTNGKWMHJQOROIRHLWLCUMMFBOENXZYQGJWHIOT");

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
    msg.setTimeStamp(0.5276720782940033);
    msg.setSource(9490U);
    msg.setSourceEntity(193U);
    msg.setDestination(53619U);
    msg.setDestinationEntity(133U);
    msg.name.assign("PZMKACPNWGDIGPRTFUIVRHGAZJRJYDXJFVMZXCWQXCEVPIBLMCLPCCNVAFQMWTGWXMSESGYTPTVDKSHUDELRUOHUQVOAEXZFNBSFKIJOQHKZFZHKALXWXQBDGQFCHMLIRENBBZEFTQHY");
    msg.attr_type = 139U;
    msg.min.assign("SWQAZKNXFSIDMPMBWWYTVYSZFYJCYMIGQCTGPUQFLMAYTNIVDNBLHVJSMDTOWDEHJTKZBLCWPBXHJVKXPGUBDAKZLRPXEGRHLNGJKAU");
    msg.max.assign("OEZVAKXGKBESGFSIMRHQFVBDEKJZDNGZDDYIJQSQBLSUUDTQMUXCRJFRSKCEPYPLQPZBNGUUMGYYIJHEOAMHARKCAPFHVIYWLJGCTHSOSPYXMMIBSCXQECASLJVKMXNHOWAUITROURWVWXHMEWZY");

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
    msg.setTimeStamp(0.8275194011844528);
    msg.setSource(43145U);
    msg.setSourceEntity(138U);
    msg.setDestination(36632U);
    msg.setDestinationEntity(47U);
    msg.name.assign("UPAGRZYYATICXWOWOGGYJYTUOIYGSDNTPDPQXVCMNUOJTCNUVFHEVHLVIZULVTIFRBQOJXSFEKWTEKZDDIAFMEPQYONQFRIBPAEL");
    msg.attr_type = 152U;
    msg.min.assign("SCGHQBYTMENJZBKGNKHCUMYZMLHAPDIEXSFNBNQXLVDHJKEFACGJUSFTOUFWZHOFXDXDQPKELSNOWNISRJGLRTAQOYSKZPEYCVDIYOHAZAXZBOOKSPYMHIIQRIBMSQKWVMHAZCWUGVTXAWFDNJRKT");
    msg.max.assign("CZQARYWVHHBGKGWPPAEJS");

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
    msg.setTimeStamp(0.33115577439945665);
    msg.setSource(46052U);
    msg.setSourceEntity(13U);
    msg.setDestination(54123U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("FXVIMKLCQIHAOTQNZMKYJDGXWFNCYPPABLUPYWSWXJQMPRDAMRTEXWCGBRYNEKTDNWXHPBUWSGNDSCOGFUILRZZQYBXATWQEFMRNTNLPNFOELYUPCBSVOEGRPZSHJRCTOLSDEJGUNVOABJUBMSQRFZXVZVAYFHBKYLYDHJUWNEUVUKJRGQSGIFZKCAQGHXLVZHOITAJIAQWFFMCXBEHVIYSXJIDLZTIJPI");
    msg.predicate.assign("NXTIKBZBYKWMASFRRSTRDXNZNNQTOECZDIJLHSVBDZSLISQFRUVVVLFOEQNWSRPPISCWONLJQPKUKPZHAMXAFKCMNZNYEUDRWUIKVTWRETFNCVURLEWJSEEIUXNPDOSVJCXGJGFXDYYWAXAHWMBHHDDGXQOQMJVWECTFBRLJOVYJSUTVCGZAHOTBQRJQIKGPLKZMOOIQ");

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
    msg.setTimeStamp(0.08073722744817624);
    msg.setSource(33025U);
    msg.setSourceEntity(140U);
    msg.setDestination(44273U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("JJFPHZJOZJDUVTRLTWSSRCIGIZPCHIYTOLWEKOLRWWPAEJGRXLHMGVIHUBZCMJIVMWUNHUZICZSHDBHGLNDDDQFNMAYBFUCPAQVYGNKZZARBCBNLUBKNIPEXT");
    msg.predicate.assign("AYUPZKKIOTWHR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OGNCXADMSNDQDEVMFTNQMLXHZIEJGWROXPZYZPYOFPCPGNYSIHTSMSZWCUJTPBJJLDEUAKKXQUCKJWBZLLHKWJRGGUZQOROOSPXIGQMIMDLMWPABGBZJPKHHIEUQRWTENAQVVJRVFKHCYWHXYDSBAKDBCRYVETHMFUSU");
    tmp_msg_0.attr_type = 98U;
    tmp_msg_0.min.assign("UUGXSSKZBLIOIWMKJOBLTVSAWGZEVCLDTLHJHYYPBTNSGVQXIXRVZFPFHUFRQMGDNPKSZPZCYJMYAIWEJDTHPCYWTZBIXQEXTAAXAWBOCXNWSCJAEYKNDWCTUJAPVHBQXDDNKLEBEMKHFSSUQYBHZFYFQNVXGCRNGNKKLGDVMOJOKCMGREUQVTJREQVDWLPQWZEFZXYBHJOIRCORMLSIIVFGNDWAIU");
    tmp_msg_0.max.assign("ZOKOJDZBAVXZWRDDV");
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
    msg.setTimeStamp(0.886225776105119);
    msg.setSource(18730U);
    msg.setSourceEntity(156U);
    msg.setDestination(8199U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("KJRAGCJGWOFOVBKTAEIBSRAZHYUCCPNRKJEZFONQIVU");
    msg.predicate.assign("YQLSJKFCQIVHKDUGPYNZGZSMOYKKEHTPJTNUWDLUHBGUHWEESNLAAPCYAYLYRKNWUTFPXAZFLXPLZXOZHKIIWNLQDDYMKSIUDCSHCUWBJVOADUWQCIRZEQGVSRVMMZWKANRHLPMATUFOMSXOOGQQEXFRNISLBTICXGGSPJEJHVBDTYOVFMEZUBKJNRBRJDJESLHZEACQFCQTP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CSRNUVUYHYBBRESZRGFCHAWINAMIJJBPMGOQVPVBLAXWUFHUNYKAKTWHZDBUWRZPZKIYNXOQFKJQENHBDGCWOJPMLWNXBUOCFYTHCLUXSKDTPQVXQTSTEFNTZICEQYMZQDHLDWAGVPRZPZROJMMBZEOBIYFEKWXAGTKVXMGFJYCLCUNAXEISTPGWPIVFQQBRFJGM");
    tmp_msg_0.attr_type = 82U;
    tmp_msg_0.min.assign("EVANCPFNXAKHOSDHCAWJNRNBHAHEHPYJRUMICLCRDPYFAWZLZVWGTYPCYWPFRBINQUPANRVZTDCMBBKSRGVBOMJAMJKGWQQBVNDIXUBPGSRQT");
    tmp_msg_0.max.assign("OTPRURNTCXTUCLJSIPMNEYFWKJQIHCAHNBBZJQLKLDDEATVFSRYEMACWQHECYNRFQTAWWUFCEAOTZOWJXUBNXVPKLWHSILISHVRYBHUKZWEDRWOYJKQXUBGYNIWEHFFEDNDRDNXZYSQMVMRGEXLAKTGXPHJLDMQZCSBVGLXMIKIEFLDPOJATWSBXVZPVIQOIOJKHPBQMMZOGZBFCUNQAGFYBGVGYZSIKPCDUHAKURJZ");
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
    msg.setTimeStamp(0.33946039636537984);
    msg.setSource(30651U);
    msg.setSourceEntity(200U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(99U);
    msg.reactor.assign("ZVGNFCTHHLOGWQLKEEGUQPGUABLECKBKVGVAMEUVYCPOYBICDHZIFRHNJLHKTDRPTULEPDZCPYVOSNSCOASXNFRFTZTEFZDQFRHWEYJLPSKOEXHSITUJAKRJZITPQBNPVJFFCHLQRIDBQWTWSYRCYJNVDQULYTNOQJCE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UXEHVUVUUPSLABERAYBDXWTQKBICLNHSDIIRHDAOEERHZPETWVDSNMZJUNXKBTMJTCKRMYYMVOFCKSEZYFNNRPWSAKFINSROBDIUTNEPAQIHDXGFAYXIXWQLLFLKOCRLMOQXQAHZYKLXUKMDJJDGCGNFGPJQACDWTJOZKMQEVOFJGMKPBRVJHPAGBUZGWWOSLOLNYTSAVZJVGHWQZQSLMRPFTWYB");
    tmp_msg_0.predicate.assign("WBZFDJRFQEGUAHMRTEOUAOUIQEBIXCTCFIDBVAKLJDGOSVBIPDSFHBRFHDGLWRZBWYDJECBXEXOQJRHJOMCYWPOTQINAMZVVCVL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RZIAZSXHFNRQOKSSXULMINLNUPURJGWHYKTBAIMDVERITEDOKXLIYNYKQIWWOKHWMECCZEIPQUQJCRMYSFOKQTREHNFQHLBQTDLKLWJLHFLNCRCAMCMZPVGVOHTFHAVZOSWBXUXIPFJRUDPQZNCYWIRPUTGOHQUNPYZVWEADBVOYLJUXCWPCCFGXEOKBBOGSYDXVVSBDQMNSVMET");
    tmp_tmp_msg_0_0.attr_type = 35U;
    tmp_tmp_msg_0_0.min.assign("AMWIZYHTBTTPKJQJAQTEZQAPUHFHRQJPARXVKQDBKIMROZYTSUHRPEMHBQNSMNKCXRCFXILVANQNSMSBYYEXRNOMUEMPYZXZJJWY");
    tmp_tmp_msg_0_0.max.assign("GAGUHQPROELFJZSPSCRKZKWVZBRCPXPCFNRXGYBRDOMAJSVUSSBOHSJETBOXCHRJVLUANSPCVECRMGIEQXYVRKFJDEXVURCWMKYZNUBDSTNUCFTLEXEHNADIJQYCPHQSDQOJEBXGIQIIPHTFGFDDXMOJGYNEFZ");
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
    msg.setTimeStamp(0.9786666652530374);
    msg.setSource(18022U);
    msg.setSourceEntity(200U);
    msg.setDestination(3573U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("DWJPHZHYBQXCKDOJQEXNPCGCWLEAILQJEEAWNYXWYMBVLAZMSMLYTJUOXKPPELCCTUEZDHPV");

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
    msg.setTimeStamp(0.048128220223086604);
    msg.setSource(46479U);
    msg.setSourceEntity(27U);
    msg.setDestination(33483U);
    msg.setDestinationEntity(125U);
    msg.reactor.assign("UNMUCFLBYWUITJOJCUWJKFXJWDVEVUHIZKQHVQFVWRTCYXTOSWREZGHBFBQUPPNZLHBYLDDJFSMKEEOGHNXOLOYRPWCTTEBNJMEAJRNKGSOSYFQAAZIMWTZUOCPYQTDYMNHDQFHIJSLWSRXATLVQDGIXTNZGPRWFXPYEABXXGVLAENVAXZVIABIKMPCTHNOEWQKFBGSDKIGCQGOPIRCKUXPSMCADYN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IWOOCPWXUBKRMLNAOVAVEYKGEKWJTZOZBXSKGBLFGTDMBVGLWVCYYVCNKQGNCVRJPRDKYIYRSTDUZWALPCSWRMXMYPWTAVIJESNTLNGBKDJIMBEXNUDHRMMYFMIZHNFBIUSRGDMQOUNSJIQVHEDAHDHQWJZCXSPLZDQBARFYUTPFLKEZEJZFTQTFPXBYQOXPTWGQ");
    tmp_msg_0.predicate.assign("TPTUSHXHPZNKDROEOJEZIGUISNAGCUGKCPITFWZBWRKSJAQNQXKDWSVFYRUIOMBHMUOQPYQJSNOKFSRZAVKALLZWFHJUVKBCJBACEHWAGUVWMGGFMIBVIIWTCBBAXXYLAZWROTDXHDCPNCQIPCXJLGYGYFNEJOTEUTSYRTSBNVHWXJPYEMQQBPFLXIVCMIGTYDKRJOH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FKTVOQPGKBBAVRARSBNRIAXJHLMXAPCICFDUVCIG");
    tmp_tmp_msg_0_0.attr_type = 118U;
    tmp_tmp_msg_0_0.min.assign("GTZZSITFIYPNXVIDARYDMOCENCWZACFQYOJOKDBNUZDSIWGCEVHONKMPHKBMWXFQNBQUXPESTUOMDZWVKJSLGRSLFOEWYJRSRHLPKWETDSCIEBD");
    tmp_tmp_msg_0_0.max.assign("TJJVVOVEUHNEZHTBLSOWRFQTEJUCHQGFKSOXRGTUBABDYDXBOCPNLEXRSVLIGTLVOZUXUAXPLLGQOWJWCGWKAPFDPBCRXWOEMRTLQINVRYFTGDBMMYREICQLJYWLDEWRPKKYPFDMFPNCAWUSJPSASCSYFHBJNOBHZOFVYDMIAVHFZSLXHKUSZXUVKNKDZQGCITYNNKWFZARIIHNZNVPEZQAEKAMBMMXCQYHBKQDTUJOSMHCUETJAMJIIGQIZWR");
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
    msg.setTimeStamp(0.4539518657210725);
    msg.setSource(27865U);
    msg.setSourceEntity(117U);
    msg.setDestination(25923U);
    msg.setDestinationEntity(249U);
    msg.topic.assign("VFORMMXCQAKCMDVPLSVRCWVHNNVEGKMMTQLTBHSHZYUJZULCHAHYJSIYLFRZFGGAYDONKTQQPJIIAEFHQDMDDXFZUKJREXURQOENOVYBPWSOSXBNSSWRISLFEWNIUKUCTBIBMJSCLXFPTKEDFYWWTIGW");
    msg.data.assign("ZOBQGRQJCZVMVQAXRFFZCENLRLOMJVGHKVHRFKOXENPHKZHXMSVGFWBGIMIETVTEDBLPSY");

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
    msg.setTimeStamp(0.9256283915497616);
    msg.setSource(41708U);
    msg.setSourceEntity(237U);
    msg.setDestination(30465U);
    msg.setDestinationEntity(219U);
    msg.topic.assign("GQVNCOGTFPCREEBOIDEXTHWESYMURIUYMXCRDLTJODYNCSBXIVSTWPWWDWTBDHSYVGTOYLHSAFRBFRIXMQOORZKQNKBFVADPKVZFMMEYBAAIIMGNHZNMXVRVPTJWDDGAGNQEQKZJPSPUSIJTAOIBVGAP");
    msg.data.assign("WHHXYPNZHKCRQLHPAJZPGRIWMQYBTFAQPIXNORYXYOLKXMZHZWZABRDASEMEIWVTXIGOHYAKQWZLKSUIVDXXMTBPNFVZHCGUDQPMBSQJBCUGWUGEXVAKQEECLYEFFCJJPZ");

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
    msg.setTimeStamp(0.528769696620289);
    msg.setSource(30934U);
    msg.setSourceEntity(177U);
    msg.setDestination(40451U);
    msg.setDestinationEntity(228U);
    msg.topic.assign("IYUBTEFVFNHNUXMBHNQIDPCVTEUCBZAVCSQPEPVBOPYHMPAIWFEUVXKPUSRETIURBJFYLNMDMDQOCEGDBXZLDSRTHMIKIAXYMGJUOHRRZYCNQIOCLWBOZANAJPZJXPDJX");
    msg.data.assign("XMDZEWNIFYKUAGFUMJYXSJQOOCWVUABLBOWTCTVGWAMHLIJUMHFMXWSAVUSPIKLKBNCCAPLHDZPLZVMQWKRSHXDRAQRLMOIBEPBEOAVYNBOZJLNYZJLHIXFRBTYAHNBOGZIPXHRXVCKJKWLCTGQ");

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
    msg.setTimeStamp(0.9943713365867605);
    msg.setSource(60608U);
    msg.setSourceEntity(36U);
    msg.setDestination(60205U);
    msg.setDestinationEntity(88U);
    msg.frameid = 164U;
    const signed char tmp_msg_0[] = {-27, 25, 106, 87, 104, -72, 25, -20, 41, 125, 41, 97, 78, -82, -81, -90, -62, -66, 125, -79, 56, 20, 62, 92, -120, 118, 116, 23, 37, 22, -110, 105, -49, -87, -80, 83, 79, 18, -122, 41, -62, 40, -11, 66, 115, 38, -116, -103, -56, -49, -69, 40, -53, 120, -128, 39, 19, 79, 110, 18, 110, 12, 61, 118, 3, 56, -63, 89, 77, 42, -38, -125, 36, 19, -20, 63, -50, 79, 33, 57, -76, -37, 6, 37, 39, 5, -22, -107, 52, -81, -59, 51, -58, 51, -9, -94, 78, 21, -123, -94, -39, 5, 63, -2, -18, -16, 36, 104, -60, -102, 43, -111, 109, 118, -46, -91, 26, 41, 55, 109, 97, -27, 70, 15, -79, 119, -125, 58, 115, 120, 9, 64, 13, -126, -128, -124, 31, -103, 28, 69, 121, -35, 24, 71, 126, -100, 72, -114, -59, -66, -81, 102, -107, 97, 93, -116, 31, 15, -106, 69, -52};
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
    msg.setTimeStamp(0.19992290213535335);
    msg.setSource(18334U);
    msg.setSourceEntity(1U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(230U);
    msg.frameid = 207U;
    const signed char tmp_msg_0[] = {126, -128, 9, -121, -65, 25, -17, -100, -110, 36, -38, 119, 25, -59, 62, 94, -93, -128, 126, -108, 14, -32, -5, 111, 65, 107, 23, 117, -106, -18, -50, 78, -77, -7, 25, -119, -27, 45, -28, 110, 44, -41, 41, 101, -124, -95, 34, -17, -110, -47, -103, 11, 13, -28, 105, -54, 69, -90, -101, 16, -111, 78, 101, -21, 64, -71, 31, -54, -51, 94, -8, -37, -39, 58, -13, -9, 68, 34, -89, 44, 48, 4, 71, -27, 10, -64, 117, -119, -59, 12, -91, 49, -122, 5, 86, 111, -62, 5, -90, -123, 50, -33, -101, 101, -5, -70, -53, 39, 104, -37, 88, 87, -4, 74, 20, 65, 3, 67, 96, -50, -72, -4, -97, -48, -13, -35, -17, 5, -4, 28, -105, 55, 42, -100, -107, 8, -62, -117, 76, 101, 54, -63, -77, -93, -124, 80, -36, 7, 107, -95, 75, 66, 108, 113, -90, -20, 101, 82, -76, 52, -121, -117, 52, 28, -34, -63, -33, 70, 54, -78, -68, -78, -89, 55, 58, 33, -115, 33, -38, -8, 33, 79, 116, -32, 9, 4, -6};
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
    msg.setTimeStamp(0.7824726942330705);
    msg.setSource(21251U);
    msg.setSourceEntity(196U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(178U);
    msg.frameid = 172U;
    const signed char tmp_msg_0[] = {118, 21, -76, -40, -32, -125, 48, -123, 88, 45, -77, -101, 103, 81, -57, 6, 122, -55, 88, -71, -115, 68, -111, -112, -72, 62, 75, 81, 57, -115, -62, 109, -109, -110, -113, 103, -82, -128, 82, -90, 69, -79, -16, -64, -115, 19, -91, -103, 103, 15, 119, -92, -90, 55, -122, 103, -66, 70, -95, -2, 85, -71, 99, -119, -75, -13, -101, 74, 89, -100, -126, 75, 106, 4, -116, 28, -48, 44, -10, -54, -27, -116, 71, 63, -122, -26, 114, -48, -4, 68, -23, 62, 16, 107, -77, 112, -101, 112, -121, -28, 0, -3, -120, 22, -4, -19, -22, -122, 91, 120, 83, -32, 71, -58, -12, -105, 68, -92, -113, -46, -52, 116, 27, 59, 84, 46, 106, 66, -38, 37, -92, 68, 4, -31, 0, 28, -17, -76, 38, 74, -17, -84, 102, 34, -55, 53, -70, 95, 99, -102, -94, -119, 89, 65, 95, 50, -73, -19, 18, 11, 94, 85, 53, 99, -107, 50, -128, 95, 24, -15, 7, 77, 64, -107, 45, 11, -18, 110, -100, 65, 106, -10, 122, -32, -115, -66, 115, -73, 66, 113, -84, 69, 82, 31, 1, 82, 124, -7, -81, 95, -6, 18, 50, -2, -41, 26, -91, 107, -89, -91, 45, -117, -89};
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
    msg.setTimeStamp(0.6740789971549134);
    msg.setSource(56327U);
    msg.setSourceEntity(129U);
    msg.setDestination(30969U);
    msg.setDestinationEntity(35U);
    msg.fps = 63U;
    msg.quality = 26U;
    msg.reps = 238U;
    msg.tsize = 94U;

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
    msg.setTimeStamp(0.12028993658447007);
    msg.setSource(4333U);
    msg.setSourceEntity(37U);
    msg.setDestination(42668U);
    msg.setDestinationEntity(62U);
    msg.fps = 75U;
    msg.quality = 227U;
    msg.reps = 11U;
    msg.tsize = 88U;

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
    msg.setTimeStamp(0.5443448890848086);
    msg.setSource(39505U);
    msg.setSourceEntity(182U);
    msg.setDestination(30753U);
    msg.setDestinationEntity(168U);
    msg.fps = 219U;
    msg.quality = 253U;
    msg.reps = 224U;
    msg.tsize = 97U;

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
    msg.setTimeStamp(0.23339911370482125);
    msg.setSource(49334U);
    msg.setSourceEntity(240U);
    msg.setDestination(38495U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.5771420653378789;
    msg.lon = 0.16014813058084698;
    msg.depth = 15U;
    msg.speed = 0.11589619770555037;
    msg.psi = 0.04674462545402491;

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
    msg.setTimeStamp(0.38379913199611193);
    msg.setSource(40811U);
    msg.setSourceEntity(129U);
    msg.setDestination(48261U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.41828427374026955;
    msg.lon = 0.32353709803324215;
    msg.depth = 65U;
    msg.speed = 0.8999527821611324;
    msg.psi = 0.6446617783905448;

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
    msg.setTimeStamp(0.9999951411039871);
    msg.setSource(33702U);
    msg.setSourceEntity(243U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.4129251200700632;
    msg.lon = 0.7910534441563781;
    msg.depth = 30U;
    msg.speed = 0.6235119264013153;
    msg.psi = 0.7220139413966682;

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
    msg.setTimeStamp(0.24421292717998389);
    msg.setSource(9296U);
    msg.setSourceEntity(108U);
    msg.setDestination(43096U);
    msg.setDestinationEntity(77U);
    msg.label.assign("TTRMNLAUIKCHMDVQILGQVSAOVXDGAJXIQGVXZLFOCTABXNMIYMHDSQYXPPRAYHVRSO");
    msg.lat = 0.2672453996400176;
    msg.lon = 0.7035546966448625;
    msg.z = 0.6251051141313644;
    msg.z_units = 166U;
    msg.cog = 0.10631603062984285;
    msg.sog = 0.5725144693044121;

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
    msg.setTimeStamp(0.9644842653678544);
    msg.setSource(42147U);
    msg.setSourceEntity(139U);
    msg.setDestination(20426U);
    msg.setDestinationEntity(100U);
    msg.label.assign("VEKZWKBBDVRTHTTSKCBUNBSWOCIAHXQNWXOHNKIXJRMQUBIQAFWKRAIPGNEIDXMPYFJYVDJXUUKIVHGYZHEPGVFSQCWCNMHKLSQOLLXFTJEWBFXKKAFZVOHPDZEOEEZSXRRLONYUPFUZALPOGAJQQPJZOLGTOBCDTPTRCPMCBEBIJYLVHGLWNELNMGYYXDUARBUWURWGJDFRZAMDCVUWAVKYFMZVGZSQAIITS");
    msg.lat = 0.14294540931422783;
    msg.lon = 0.07356698909540471;
    msg.z = 0.6918334182409643;
    msg.z_units = 64U;
    msg.cog = 0.2869267146486252;
    msg.sog = 0.17519504293115817;

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
    msg.setTimeStamp(0.527387445293764);
    msg.setSource(39441U);
    msg.setSourceEntity(165U);
    msg.setDestination(54833U);
    msg.setDestinationEntity(141U);
    msg.label.assign("VASHBMERCMRQEJIEQUKGHOTYDLCCZUNVWFONNSOWIKCDBANRWFPMIDBJANZJUPIHMWQIEEURWOPPLJWTDXZWKEJCXPMBMPVIIMTIVSSVSBKLOFAXGRHYNJDPKSTYXLRZZGCXJGDLHRBVMZMRACUHUHXOGUFVQYAEYFTITOCIOQHYUYBADQLFWEKKXDGNMASGYJCAVGFFTKSFHBST");
    msg.lat = 0.1648797523673614;
    msg.lon = 0.5404122058514473;
    msg.z = 0.28251760970438355;
    msg.z_units = 91U;
    msg.cog = 0.47600301250638455;
    msg.sog = 0.015462366796367144;

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
    msg.setTimeStamp(0.18523811956318137);
    msg.setSource(4566U);
    msg.setSourceEntity(26U);
    msg.setDestination(35605U);
    msg.setDestinationEntity(86U);
    msg.name.assign("BDQJJBWMNOWISEPLJLQZPEQRUHZNITOZGNEUTYDZKKBTSMERLYIMQDTFWXPMEKUHMWLGRAGWMKAPJINKOLWHNHUBGYZGSGEUQROTACHRDFMXPPIVPZWZCOCLXVXKQBQAXVZDFCVDYLFEAULKBDJLEUFPAXCVTFRONSDMXZSIHJYKZRW");
    msg.value.assign("YKPGECKYVBRSEGREQOYBJBVPSKDDVQWXLOQQBRVOXCWDFNSSRDCJRIBHFJMOZAGTIXYAGQFTMKEWLPWSLHDUFJWECUDNIZTMHZZLGIYOEHPSPMHOBQ");

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
    msg.setTimeStamp(0.38928772666989053);
    msg.setSource(52694U);
    msg.setSourceEntity(25U);
    msg.setDestination(61788U);
    msg.setDestinationEntity(9U);
    msg.name.assign("MEQNXILTDSKIXUJWDCLGRRTVYTGAAKSCAEPWLTJVCAFLRKJLAZXYBEZGEODEQFKWEFBZXIAUERQJSHUKMDDGWFHEVQYMWBMCDOCLNNUHRUIKWKVSPVREBXTOPNAZPPAQMCPDHNYGQIPBBXMWOJFYKRQIPGGQXSUUAJBTZJDKRLMNLXGHYQBDJZOLYFSFRYMZIWNAMSKNNVVMUJIVHTPTXVZOHQOYSPTGIFTOJZZLSUCWIGCHFFB");
    msg.value.assign("HKEZMNMCINKRWTLDGLWRVCSPLWNOBEGOKUL");

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
    msg.setTimeStamp(0.17409109711825843);
    msg.setSource(3757U);
    msg.setSourceEntity(187U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(6U);
    msg.name.assign("LJJLLQEYQRMDXRLYICUOJDQHCVNUTEGIOOJJZTMSWXGWVBULUWKWNUVCKFXNMOXHEBQIHUBUQVPGTBGHSJLRTAPNSPJCRIQSWOFZRAMFTYSFYGFLWXCPVJWHNJOZMZMBOAIVPNYPHBWGUMAFAWBKDAHIPVTEZXTNFXNTAIKMYVMDMFVASCKSDLEEAOBUIGRWZZPIEGHRRXSEK");
    msg.value.assign("LCOIAKWJJNTQPKMKYBWHMQAYKIADGOCFZJINVVYENDSIUAZYLFWNZSTHQDIRWXJPOFKGZIWMNOOJIOW");

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
    msg.setTimeStamp(0.689683375868747);
    msg.setSource(29313U);
    msg.setSourceEntity(19U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(15U);
    msg.name.assign("LUPYWQTXGVESTCAHQTINYFDFCVWVWKBVVTTXDWHOMZSHSTNXJRDBEIZJFCDULSGBLJFWXRCFCTKUFCXIBG");

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
    msg.setTimeStamp(0.029058233973228043);
    msg.setSource(35267U);
    msg.setSourceEntity(37U);
    msg.setDestination(36712U);
    msg.setDestinationEntity(222U);
    msg.name.assign("BTUPZGJHSGJLCOMQXJYLVRWVOLZYOXZYLRKFOTBBSIYMCAOJEGDBDVAGSHKGKCQGQIWYGEQZHBXSXXZUQMVROITJKMCIFWVWWXJISTNHPZROPUXIVWDWPJQTFVKRUJSSSFWPEADQMKNFGHGAELEVSKNREDBCYBCHLFUXZNMUWMTRMLIBPBWBCYETPMZARQLNJHDHACKPDYDOLGHUCMEETFX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BRWMOZJPYIQSVYBROISUETVZOQHJEDKBJSIFCYMTTHYXWFQLKWFNBCZNAECUVDDJBSLZCOTWTGAEZWBLSLNOJXBJVIMDGMBIZPNESXQKZLZHGXADNXUKWGJVCYGADSPWRVLVRAPQPR");
    tmp_msg_0.value.assign("MDPMKJOCDTYFJNHCCALVQWAUYJKLRLGQKRNTIKUTUHDCYLSOTUAEZGSZ");
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
    msg.setTimeStamp(0.17902014891360885);
    msg.setSource(65394U);
    msg.setSourceEntity(90U);
    msg.setDestination(41441U);
    msg.setDestinationEntity(49U);
    msg.name.assign("FNVKUWVIEGNEAVSDAXICJPUUBMMHHAXHEGWXJMEQGXPMLXBODLDNYQQLKGUTZFQCB");

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
    msg.setTimeStamp(0.661246211821167);
    msg.setSource(21873U);
    msg.setSourceEntity(183U);
    msg.setDestination(15678U);
    msg.setDestinationEntity(174U);
    msg.name.assign("PLXQGEZWQKJZYUOIKKTOCKERJYASBQBFZXJAFVAMIOMTZRNYBTYSEE");
    msg.visibility.assign("ERQKCGYRVKISPWXGNFHEZEELZRMXJOQYRTBEQRMYMNOPLQWAMEHCVTKMQFXCGNDZPHDAKIYPIBEZAKFPNIJTXJFQCGHFJLBHBUXSQWNGTOOFSTN");
    msg.scope.assign("DCATCQSWZMYVYIOLAYXNJTBXOMQRBQUULEBJFJHRZLIKXBELFDLPZDFQPLUNPYPBGVODDSWECCMGCXUKVQLHSAVLZITXBNAMHEOBUCW");

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
    msg.setTimeStamp(0.8373278245818336);
    msg.setSource(47579U);
    msg.setSourceEntity(127U);
    msg.setDestination(33282U);
    msg.setDestinationEntity(33U);
    msg.name.assign("FLSEOVPLEYHXUUAJBATRMNWRKQAYLXYTNRVZNGHSHROUQBXFFOQGTTLUQUQKISSCLZNMWGPGOZJZXSQVYNENYQCDCGXBDYEFEGEFABKLHTJIDVWONZDKIJJTDENVWEUKRSLAZXIXRSIWKWWGAWMERCGKSZXFDCYIQLCPCKOXVFYIQESSBRDIVZULJUPIMGHRTPMPOCJAJ");
    msg.visibility.assign("WTRGDNZNYIFMMZLMZJCBCIZGUVTJEEKJXOXKUSLXXHLKCCPXOYFAPVBLCOBHYHFAEAGKVUYVMNQKKCLDDFTINCDMYJKZNTCTGSEAEWHWGRLPLULPLIQMNHBFYDMRAQRQNHVYVCUSJVJKVOEGRPSFYJDSWMKEIPUTMXKXDDLUQTNAWYVRAXAJWISQBEOZQVPPOQGPOEWEBWDUJOBSMZGHFZHRIJNFBA");
    msg.scope.assign("HTVWWYFXVEDCTIQOGFWWWQNDETNIHGMANUMRYPSDHWYCGXGXOCFSBNVUFCJSGHPEXADISBFJARPTNVHCCAXXRUXKQRTLSDLCZIQQEALZAIGNGDBLAJJDKSOUJYRJQIYQKKOCEUXZXEVZCNBVWRQILIJSZSRAOLHQPMCLFOGJKAYRKEMOOIKTTMUPJNYXYFDUBEMEWKSGEPVMYKUTBWJHMGKZIMPUL");

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
    msg.setTimeStamp(0.6290060264343074);
    msg.setSource(12211U);
    msg.setSourceEntity(108U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(228U);
    msg.name.assign("ZCVKMWDYRRMQULUDNFYQTYWXXAKIOOKGH");
    msg.visibility.assign("TIMERIKMWPFZEFHZVPYXMJCNFAIMCME");
    msg.scope.assign("FOMLZTCEXYHVFHUNXDWHRKANFBGHJNBMYHAWKDGIYEVAYJDYSQTKIIBSZAMVILMEUEZVCSRXHOYICREGGLMSKWDBDEIZZJKCMIPPHLSGGAQFZWHZOWQGBKZDNPNPXFIRWOYULJLNSUVDKBMHJMOULOVILTPJCJRUCQKCSBOIREOVTXWQXAPCUBVXQXWFDUPUDLLAGMYQRVRZCQRBJTJPJTXFFYVTSXQNTCKEWFBGQKNRAHN");

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
    msg.setTimeStamp(0.30292723705063984);
    msg.setSource(42253U);
    msg.setSourceEntity(72U);
    msg.setDestination(526U);
    msg.setDestinationEntity(101U);
    msg.name.assign("OYBZJUSPXNEXTRDKWEYUYFLAMCPMWQDBYGUOKDZXHCMNYTWMIBOVKPBRPRDGNKBQQNBOZXXCTDGAJECCRDLBRSNDAASSYLQTHFSPOYQBTVOVPZNGKZIQQNAAWHSJEZGESIAIEGSPUCVLXUIIMVQQGWVJEPJPIUTEGAIWFKTOHXVLBFDRHJJFZIKUNTMFGXCHVCBUEIQKZYEYYSHRRMWDNFOKVHLZO");

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
    msg.setTimeStamp(0.23191664155323533);
    msg.setSource(16659U);
    msg.setSourceEntity(163U);
    msg.setDestination(31217U);
    msg.setDestinationEntity(162U);
    msg.name.assign("LZZOJCCSITVXTULXQIPKVXSTNVCOJOCKDUVAYSLQPRBEZCTJJBUBHAIVIPNNBCPRHLPZADRJAUMXLWRLKYPZSSLDEXGIYDPENDHVEZQYQTQRDAHBOUFWYEGUBWIHRFVFKPMMBENWOKYJSHOFMWWVNJWMMLYQRHQDGFWEZTGAINBVEFRKIKISBOXWFQPYZXNKUXPZGJSMTSRDBANKLMSZLIFXGQUGOOUCHCCAGVGFDATHGTMXKEYFJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QOQCFYZNWSIUCMBVCQOYEBGLKSFWSDRGCBPJSKILGRZULTBDDHSXXEPTMTJJALWXQRUEVJXMS");
    tmp_msg_0.value.assign("HFVJWBRNOVKSRCEQQXPAYSWYFRELQTLSDCDVBAJBKWUUCW");
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
    msg.setTimeStamp(0.8605176003481999);
    msg.setSource(4510U);
    msg.setSourceEntity(66U);
    msg.setDestination(57788U);
    msg.setDestinationEntity(49U);
    msg.name.assign("MHFLCANWSLCXXKJBFSHOMCYRGMRVCFMDJUNJMPKUTSLZJIEMYADTIHWEDPSUIKJGIOGLBRBLDIEHTGUZJTGNBJRCPXXAIYRMDQIZLLUHWQKLBZIRKSUQSFZLCIKDZVGYRQFVPTSDWWZTAKODSVWJQHKNHYFTFUQAXRHZAXPVMOYXGAMNAYVBRRHOYFPPPNNPYSYCCGEQOXTNVWPBZFOBUGFETBZDEKVEMJCIEAQUXBWTHSAQEQKOJWXC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BJGDFBBYIDIJMEIANLPMKOPPNTUZQVYUXAVBFSOQJXCFLMDILXKRHBJCXTZAYAVDRDCWJX");
    tmp_msg_0.value.assign("CMNNFOPULRDAORTBSDFLWTXUHWTDPTWILMTXUQKMMKCPXNBJJJPCREDHF");
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
    msg.setTimeStamp(0.28008677256291514);
    msg.setSource(57619U);
    msg.setSourceEntity(200U);
    msg.setDestination(58784U);
    msg.setDestinationEntity(133U);
    msg.name.assign("UZCOMQZFGAKNVTMHCOYWBWOGPPORFAIJCATQGQFNPLPQIRAXVBWCBWKYLHJVBIYBIYGVXHIOJKXBLSJGREVRDCEGEUCWAOAITNGOZGPHUQZAJAPTWAXEYESUFJXQLPXRUUUMBDLXYYOJFFMQNTHMTRFPQDGRSJEHQCLDDSRZKTSHVWMXPNISYZQTAEUXBBHTESKSCSMZFN");

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
    msg.setTimeStamp(0.6156783028444647);
    msg.setSource(2627U);
    msg.setSourceEntity(143U);
    msg.setDestination(47859U);
    msg.setDestinationEntity(214U);
    msg.name.assign("VGZOPCFNXTSQRXINPCMFBQPLHWADZHLAWTCGCMBBZEIEDPWFJMELPXLJCJQFTTHHXEUZXJGVNBMTFKGYXKTOZOVVKNNGZKLMVSOHJDMJORLYUAW");

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
    msg.setTimeStamp(0.9157215731050274);
    msg.setSource(41736U);
    msg.setSourceEntity(0U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(87U);
    msg.name.assign("QCKINGCXWAOKGDEPJYRZTZHIDFZZPJQLRZJHFSXBUOQPJWCRLZWVTPAVOZTNLXCGETIDBKIPHAPEWKXMQDYMDUPAOFTWOYNXUQNJHCB");

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
    msg.setTimeStamp(0.5582128015169082);
    msg.setSource(61957U);
    msg.setSourceEntity(103U);
    msg.setDestination(27292U);
    msg.setDestinationEntity(150U);
    msg.timeout = 1421349460U;

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
    msg.setTimeStamp(0.4697328937037403);
    msg.setSource(29923U);
    msg.setSourceEntity(254U);
    msg.setDestination(30487U);
    msg.setDestinationEntity(183U);
    msg.timeout = 3664052365U;

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
    msg.setTimeStamp(0.8682006696772049);
    msg.setSource(61126U);
    msg.setSourceEntity(211U);
    msg.setDestination(31633U);
    msg.setDestinationEntity(206U);
    msg.timeout = 410424313U;

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
    msg.setTimeStamp(0.027023003783659183);
    msg.setSource(43413U);
    msg.setSourceEntity(119U);
    msg.setDestination(65374U);
    msg.setDestinationEntity(134U);
    msg.sessid = 3673607136U;

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
    msg.setTimeStamp(0.593911604718684);
    msg.setSource(62726U);
    msg.setSourceEntity(198U);
    msg.setDestination(50052U);
    msg.setDestinationEntity(97U);
    msg.sessid = 946258679U;

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
    msg.setTimeStamp(0.88078681776689);
    msg.setSource(53638U);
    msg.setSourceEntity(96U);
    msg.setDestination(6861U);
    msg.setDestinationEntity(117U);
    msg.sessid = 3045718173U;

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
    msg.setTimeStamp(0.1072546547613914);
    msg.setSource(38556U);
    msg.setSourceEntity(234U);
    msg.setDestination(11602U);
    msg.setDestinationEntity(159U);
    msg.sessid = 263752740U;
    msg.messages.assign("LJVGYXVBEUHSFSDFWRYUORECNMBAWHIIPVCFWHVEL");

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
    msg.setTimeStamp(0.16556854979234503);
    msg.setSource(6365U);
    msg.setSourceEntity(6U);
    msg.setDestination(50028U);
    msg.setDestinationEntity(218U);
    msg.sessid = 3839105670U;
    msg.messages.assign("KDSLLHWEYCPMFIJSYQWGVYIYWXKXLMTFDFCANRVROXVCFEAHXTJRKOQEIQBQXA");

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
    msg.setTimeStamp(0.03311563027110098);
    msg.setSource(33459U);
    msg.setSourceEntity(145U);
    msg.setDestination(22780U);
    msg.setDestinationEntity(18U);
    msg.sessid = 81171249U;
    msg.messages.assign("KHVXHVFYMHYSKHKYDCHVAAFQICIESDIIOARYEAYQZBLCBMWBEWGUPPNWFGOMIBENXOIEZAWPROLR");

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
    msg.setTimeStamp(0.41095027417883834);
    msg.setSource(44220U);
    msg.setSourceEntity(78U);
    msg.setDestination(28348U);
    msg.setDestinationEntity(252U);
    msg.sessid = 1010852200U;

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
    msg.setTimeStamp(0.3698272590778334);
    msg.setSource(8359U);
    msg.setSourceEntity(2U);
    msg.setDestination(32994U);
    msg.setDestinationEntity(206U);
    msg.sessid = 338182841U;

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
    msg.setTimeStamp(0.301881851936631);
    msg.setSource(64381U);
    msg.setSourceEntity(57U);
    msg.setDestination(1815U);
    msg.setDestinationEntity(178U);
    msg.sessid = 524327626U;

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
    msg.setTimeStamp(0.4040449028911661);
    msg.setSource(62802U);
    msg.setSourceEntity(6U);
    msg.setDestination(48258U);
    msg.setDestinationEntity(239U);
    msg.sessid = 3546309033U;
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
    msg.setTimeStamp(0.1081828453315038);
    msg.setSource(37283U);
    msg.setSourceEntity(219U);
    msg.setDestination(14442U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3160239054U;
    msg.status = 252U;

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
    msg.setTimeStamp(0.7031853008105177);
    msg.setSource(2006U);
    msg.setSourceEntity(242U);
    msg.setDestination(7042U);
    msg.setDestinationEntity(164U);
    msg.sessid = 1460158999U;
    msg.status = 25U;

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
    msg.setTimeStamp(0.8744843612610644);
    msg.setSource(43107U);
    msg.setSourceEntity(205U);
    msg.setDestination(48239U);
    msg.setDestinationEntity(209U);
    msg.name.assign("JBDCWBKQALYXXXORRSUVLUNONALLGXCETDTGYNZUZWPCJFZOIFSPWQWFWTSTJKHKQCPQXFHGCYADPNSDPEMCOLNPIJVZNAJWMRESTKFLSULIFKHMJIBXBBRZKKHARRMEVIZRBTXNBEGDZMPJBQOVRMGDMYIYIVUELTMGHGLYWZGXOHHDEZIVDQNEP");

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
    msg.setTimeStamp(0.9570591279501985);
    msg.setSource(28505U);
    msg.setSourceEntity(13U);
    msg.setDestination(39500U);
    msg.setDestinationEntity(164U);
    msg.name.assign("RQUPYVOTIKHWXDZZRIHYGVKAYDEYRBDYUOGKQYVBFMSEWCWONAUAQIOSFJJHHBTFASFORHLBLQUGEXGACBCTWEMWJSCKFKTMZYLBTMFNEPPEIAXHHDSHJRQRCTSBDCMKAAPXTENEZKRNUHZLJODBVKGHJIFMODZXQTEPNUNVCBPMIIMFXBVTUCUL");

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
    msg.setTimeStamp(0.6559436703827395);
    msg.setSource(6557U);
    msg.setSourceEntity(227U);
    msg.setDestination(19990U);
    msg.setDestinationEntity(126U);
    msg.name.assign("BTVOEJBZRJUAMOZXMIMZEWYBYBQADEVNQQHGOISCLRIBIPWMVSASHKOPLRFKMZLTCYCRKGVGUHCNZKGTZUYZXFAEULGHDKJI");

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
    msg.setTimeStamp(0.6466677610342283);
    msg.setSource(37073U);
    msg.setSourceEntity(131U);
    msg.setDestination(21906U);
    msg.setDestinationEntity(73U);
    msg.name.assign("HFPRQIVPXOYGZUSIEBMCBTGVPXFYZTVUMFLPIHSMZEXKK");

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
    msg.setTimeStamp(0.7739181121672669);
    msg.setSource(14431U);
    msg.setSourceEntity(125U);
    msg.setDestination(60197U);
    msg.setDestinationEntity(91U);
    msg.name.assign("SYEZNXQNVJRQDRAMRSTIMCEQWTFIKAZBSCZVMMMVEQDLMWAPACRLJUDITLCWEOXFSZSXWPQLDBGKXJSOTNEPCGWFHZFBLNNWMYUKGU");

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
    msg.setTimeStamp(0.6024454111198714);
    msg.setSource(9434U);
    msg.setSourceEntity(199U);
    msg.setDestination(50882U);
    msg.setDestinationEntity(212U);
    msg.name.assign("IPWGUQZAVGJQWXYHMDMYNUNGCEMWTYKSKHUHWZZTNPMVTYINKDLDBWSDKOUZNA");

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
    msg.setTimeStamp(0.3651186157557066);
    msg.setSource(49243U);
    msg.setSourceEntity(216U);
    msg.setDestination(39984U);
    msg.setDestinationEntity(98U);
    msg.type = 31U;
    msg.error.assign("CIRNOHPJOWDEAXHDQERDEYFPFRIEBFPPUBIHLTRQIDJUAYTUTYVJCGLIQTMTPIARIXDDLXYEMWBVYNHRTPWNBXARVRCQIQZTSUTNUYCAUMWEZDHLXHLZZYKKJDHKZSFMGWWOSCWAHXEKMEHVGZFFGKGSXCSJNSGSLBJEVLJXOOCDABBBNMGCNMBEMUPDOGPIYVYPSFHWGVXACZOVGAFYWOVLJKOCKRSW");

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
    msg.setTimeStamp(0.21909000919624344);
    msg.setSource(35406U);
    msg.setSourceEntity(46U);
    msg.setDestination(27706U);
    msg.setDestinationEntity(0U);
    msg.type = 151U;
    msg.error.assign("LAAHRNNBPHXZOJBIRHOHFEUFACSB");

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
    msg.setTimeStamp(0.7776482063973351);
    msg.setSource(455U);
    msg.setSourceEntity(171U);
    msg.setDestination(56408U);
    msg.setDestinationEntity(181U);
    msg.type = 184U;
    msg.error.assign("ATLVDDOJATIYRQCFGGOYTPB");

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
    msg.setTimeStamp(0.049555231727586024);
    msg.setSource(57170U);
    msg.setSourceEntity(17U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(77U);
    msg.seq = 10475U;
    msg.sys_dst.assign("MSEXYBHMKAXJHCWENYENIJYDDTPVHMAMQYDIWSENPIUVEFIOXRAZZOABQKFLTULPBUCAQWWHGZJLOQQXJGQRVVNRIGQAHGRFGXWKSDMKNYLRFCXJGZYKWMFKBHCFOVXPAAHHSPCAMTLDXTYSBBZKPBNPFMRILHCFMEDINCDCQBZGSLSLECTUIEVBQJXGXMHWTDKCLUIUPOQSJ");
    msg.flags = 227U;
    const signed char tmp_msg_0[] = {40, -23, -98, -65, 81, 42, 12, -11, -66, -80, 27, 56, -110, -51, -120, -114, -103, -66, 91, 114, 5, -91, -108, -127, -70, -39, 11, -2, 89, -120, -52, 37, -99, 43, -51, 94, -119, 52, 68, 13, 9, 112, 30, 39, -112, 63, -10, 123, -23, 46, -60, 17, 87, 50, -34, 79, -38, -88, -126, 46, -88, 77, 106, 22, -106, -124, 108, 54, 54, 67, -20, -116, -18, -28, 29, 54, 46, 81, 76, -55, 49, 121, -101, -20, -128, 16, -4, -74, 7, -73, -47, 61, 108, -62, 84, 101, 37, 105, 43, 120, 10, -17, -2, -33, -96, 95, -102, -81, -23, -121, -61, 96, 20, -32, -119, 19, 7, 30, -40, -79, 9, -111, 88, 17, 38, 103, -114, -114, 36, -42, 119, -42, 119, 51, -65, 16, -58, -3, -116, 103, 55, 67, -117, 111, -127, -93, 101, 55, -29, -118, -63, 16, 118, -67, -106, -78, -94, 46, 108, -95, -66, -103, -36, 57, -102, -77, -41, 8, 3, -24, 55, -69, -52, 41, 90, -122, -30, -109, 81, 71, -65, -76, -37, 56, 91, 60, -84, -103, -79, -37, -3, -28, -83, 122, 88, -13, 36, -31, 66, 39, 46, 101, 101, -93, 78, -74, -30, -79, -83, 85, -28, 45, 114, -31, -3, -14, -76, -25, -40, 48, 88, 29, -115, 43, -20, 41, -111};
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
    msg.setTimeStamp(0.15790955688320352);
    msg.setSource(40172U);
    msg.setSourceEntity(78U);
    msg.setDestination(50177U);
    msg.setDestinationEntity(229U);
    msg.seq = 30415U;
    msg.sys_dst.assign("PIUOTXEXUDYYVZTEVMSVNGEMJSGOQGIRCMLWPGQVJWNYIDTEVKHLHPYEBRFLQUAPUOBQRYVWFUPNZGYPKXODKMOSRRGWFCM");
    msg.flags = 130U;
    const signed char tmp_msg_0[] = {48, -119, 25, -79, 66, -102, -77, -61, -19, 40, -64, -30, -102, -31, -123, 35, -53, -46, 15, -102, -84, -102, -113};
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
    msg.setTimeStamp(0.27274690650211997);
    msg.setSource(36335U);
    msg.setSourceEntity(50U);
    msg.setDestination(8783U);
    msg.setDestinationEntity(34U);
    msg.seq = 22774U;
    msg.sys_dst.assign("JTUWAJHSRGUNQZLFYQDNVBKPNLDISQJXGRLFKXPWREQKSPVUIMAXCTOWCLSELBFIVDDJXPACKONFINEUBZIZRZPBVVPQPQBYXATJNWZIQUQRIFKLEHUJRNCKSXYEHATSSKOYELGJNFYIUBDPRGWEAYFKVROLMEYIUGEONHHLHDCZXAAGUFFCYTCDWAJITBHQMRVHFRJNYQZYWVGMLMOWDGUMAXDWKZBMKVOCPPBEOVSTXHTWDMCGZZCMMJHT");
    msg.flags = 114U;
    const signed char tmp_msg_0[] = {0, -28, -70, -35, -39, 89, 52, -45, -82, 44, -87, 14, -56, 31, -8, 21, 74, 6, -80, -107, -124, 1, -75, -84, 69, -120, -93, -1, 115, -5, 63, 52, 118, -124, 120, 74, 8, 89, 82, -127, 46, 0, 19, -59, -25, 30};
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
    msg.setTimeStamp(0.5628884434772984);
    msg.setSource(57548U);
    msg.setSourceEntity(68U);
    msg.setDestination(6789U);
    msg.setDestinationEntity(36U);
    msg.sys_src.assign("YAUXGDEVKWTBPRFZGKZOVWNDFQHHNTXOMPCUFLJJOMGCATMQPCZBRFMGWCALVZBDQWMMEYYSHIKKKPVWTFWRBIWQRXRKSHBJIYJDPEZSCQUIOOHQIJGXYB");
    msg.sys_dst.assign("KFTYSAPHVNCSGDWHTYGDITZBDDQXWSHSZBQNHSKXSZCBWKDJJCKPYRLILKXEAUONOLIYECVCJMURHMPNGUARMHUZMPVXAVBNM");
    msg.flags = 109U;
    const signed char tmp_msg_0[] = {-20, 81, -117, -92, -41, 31, 96, -101, -1, 100, -32, 3, 109, -31, -22, 47, -42, 101, 100, -79, 65, -30, -117, -30, 70, -76, 40, 115, 58};
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
    msg.setTimeStamp(0.7502835274240712);
    msg.setSource(34920U);
    msg.setSourceEntity(110U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(204U);
    msg.sys_src.assign("FFATPCXFJOZAMRVNQTJZNMBSOGHIOUWMIWXUUQPEWEHTYWPXUHECWDGQJYAOERYEHNKXRHGZQNYLRQWWZZFNNLNUBBXCDCDLZUQMESMRBMWEKPQCRZZPDGKVCWRNKVLRMYFEIKRGHBVAUXAVXJXMSYPXTGPVKCGYLLVDOQABEISLMIZIKSGCOTPEFORIZAHDSLTTLI");
    msg.sys_dst.assign("QCHIZWDOQGYWXZVVUFSVLQPFKFZYPEEYKTLJGDMSOUMMEXAJIDNAGQONGPDYVFOKYRLMBOHDIXHJYMSWJCEQNYMNKOCEKZQKJZHRDSFEUSFPCIOAPTWUINFZZKRBGMNHJRWB");
    msg.flags = 116U;
    const signed char tmp_msg_0[] = {75, 93, 70, -29, -128, -31, -104, -98, 19, 109, -61, -47, 11, -106, -100, -69, 60, -85, 59, -75, 57, 33, -40, -5, -85, -98, 105, -74, -31, 27, 27, 15, 76, -25, 79, -98, -47, -127, 96, 86, -93, 36, -127, -75, 28, -121, -110, -56, -94, -21, -105, -3, -42, 72, -59, 8, 57, -77, 107, 60, -118, -95, 118, 78, 112, -61, 57, 59, -120, -127, -25, -110, -86, 83, 30, -19, 1, 82, 95, 85, 27, -9, -87, 74, -123, -7, 33, 75, 41, -57, 13, 122, 80, -38, -95, 103, -57, 19, 28, -35, 15, -106, -70, 110, -24, -49, -13, -27, 50, -36, -19, 113, 110, 92, 54, 110, 25, 69, -57, -43, 95, 39, -94, 16, -116, -127, -75, 12, 124, -83, 107, 20, 123, -11, -58, 109, -32, 60, 100, 52, 81, 4, -52, -21, 47, -17, 24, 100, 104, -32, -121, 7, 47, 23, -63, 81, 92, 57, 42, 60, -45, -60, -124, 109, -88, 89, 38, -103, 53, -4, -118, 77, 15, -23, 37, 84, -52, -54, 16, -29, -68, 95, -69, -43, -54, 40, 62, -40, -96};
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
    msg.setTimeStamp(0.8756302321471061);
    msg.setSource(20142U);
    msg.setSourceEntity(125U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(16U);
    msg.sys_src.assign("FYIVHBZTNFBLNELWGIIBUWVMTMEZWBWPJILRVZSSBJLATNNORXUHJGJYSWDIHCKZYWSDCHMHKDRGLGZKKVLONXYXOOENK");
    msg.sys_dst.assign("IUMPJUSRZQLZFURTRUYESZZWFATQIAUQKRXAKLIBIAVVYXVYOEZLXHCSWBFLXOIFOBVQKAXRJEUITHPBYCJPMEIFGUKNMXCODZWVMDSFEGMLACXLCGUVRVHWPXDIONAWOYHMETGNUIJHPYESZYKMTZFKYJJTAQSYWZWQFVFGXAK");
    msg.flags = 107U;
    const signed char tmp_msg_0[] = {-87, 75, -14, 105, 119, 70, 57, -69, -61, 46, -97, 109, 60, -80, -81, -88, 48, 97, -35, -28};
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
    msg.setTimeStamp(0.4554065151898957);
    msg.setSource(17442U);
    msg.setSourceEntity(244U);
    msg.setDestination(29016U);
    msg.setDestinationEntity(19U);
    msg.seq = 34136U;
    msg.value = 214U;
    msg.error.assign("HDERVNXVMMTJAOODITPJBCITGWYBRZUSJODKSBZEJYEVXZMNJSYQHZKUAKWRPYZIAFLQSIHVOMNKGYSBUIXHJFQPPLLSXFQWFQWNIAEETT");

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
    msg.setTimeStamp(0.3595012344354629);
    msg.setSource(42290U);
    msg.setSourceEntity(80U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(117U);
    msg.seq = 785U;
    msg.value = 90U;
    msg.error.assign("DAKSENMBGRZSLQPXFUNSMXNNPTDUFPSZKZALPYMUITWWOXRTMKITYBWIXWHXHQHUHTCCJHSAVBOEQDOFMJAUIBMWYIQVREXGCSVOQGCAQFTCOWXGVLZJEONKSRUWRCXBHEEVTQJCYJRIQANSDYFUYQOIDDJLGKEHNAZYLFIKMLDVPYTMDLZKZNPHJBFBABCJZUVMBPRNWAXHCUVN");

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
    msg.setTimeStamp(0.4213168068134705);
    msg.setSource(50116U);
    msg.setSourceEntity(19U);
    msg.setDestination(61239U);
    msg.setDestinationEntity(150U);
    msg.seq = 62017U;
    msg.value = 183U;
    msg.error.assign("HONEAYONPCDWKSZOVAKPJBVRSZQBOHTXUVTGKNKZGITAUIMIRKCQCGPTSWWKXGJUJQLYGMMLUDIIBAKWTDQYZRVZVNVPKECEHNMFUCZDDLLFQQPN");

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
    msg.setTimeStamp(0.5250191425005519);
    msg.setSource(30100U);
    msg.setSourceEntity(248U);
    msg.setDestination(17260U);
    msg.setDestinationEntity(162U);
    msg.seq = 596U;
    msg.sys.assign("MUWEPJMYWFQBVYHHXCIEIBMTSOQBXUGPKIJKVH");
    msg.value = 0.7878463585495796;

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
    msg.setTimeStamp(0.7209601545196219);
    msg.setSource(26971U);
    msg.setSourceEntity(227U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(196U);
    msg.seq = 1692U;
    msg.sys.assign("NHFODUMVTSFETRIPAIUFJUCQKJKUPICLQRWPRABEHWNPPFZHWHYBAWYVGXTWWSMXITYEZQCWLNVGAXKIZHCEDTVHYMNVBFQNMITWPMAJVTVYKFZLMPOOZGTOFNRNUMCKASEBGXYZZSUZVPLHUIRJLFDXKQEBMYGGS");
    msg.value = 0.7053223819851598;

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
    msg.setTimeStamp(0.32787287026345224);
    msg.setSource(30077U);
    msg.setSourceEntity(125U);
    msg.setDestination(17865U);
    msg.setDestinationEntity(226U);
    msg.seq = 10800U;
    msg.sys.assign("JBSMLICZGZZYEKVIBOFWBXWONYJLERVCETXXKUDACIOSPAPTOIVWEKHWWVHPQDHLXRNUCGSNGXESBNIYUDBQVQRWKTAHRJBYJDZODCXPXSO");
    msg.value = 0.547341482222408;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.7736836337295426);
    msg.setSource(14111U);
    msg.setSourceEntity(84U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(241U);
    msg.seq = 58464U;
    msg.sys_dst.assign("UHYCPVFMIGCSTUAWHYZIDWIGRASNYTBOXLCQJMUGKLQJDDSTAOOYAIBYHSYGNEZLJJLNKFETASVWEKGROCXOWQRFLVOBTNBNDXMPHFAAYLVZQRABCQIXEWHVFXKUBRGYGEXCIMUGYCSDIHVPWJRTXDQBUCJSTEPSZXTKIVFUMMZVKLUVZPHLRDMJTBROOKFMPDNQQZHIZQMZVHGBWNDSWFCGT");
    msg.timeout = 0.5655838909712251;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.7117599544492951);
    msg.setSource(54284U);
    msg.setSourceEntity(51U);
    msg.setDestination(234U);
    msg.setDestinationEntity(2U);
    msg.seq = 7166U;
    msg.sys_dst.assign("MESDHGAOJJSTHSJVDUBPXVPQSQZETNYEWBEGGVBWKARAQWUXJIPAGTWFUMKOTBKKOENCVWTMIQWRCSLVIFYLDVRWCHXNXCZLDSZSPROJDXMNXMAOOLYYGHSRNHWORARZJEQEIILYGLYHQUPDKTFUIRKETBBWNODXJNBMQJZFOGAGNPUDYKVIIVSTSYFLCRPHIPMKMWFZPFZJEMCLR");
    msg.timeout = 0.5254074179904289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.9037609496563171);
    msg.setSource(47427U);
    msg.setSourceEntity(150U);
    msg.setDestination(55634U);
    msg.setDestinationEntity(239U);
    msg.seq = 46499U;
    msg.sys_dst.assign("OEFWTBPKQNUVVTCRIWTAXFQSAEGNSUBDVXIEULEDBYQKQPHGXRGYTHRIIZPBFLRJZUTPNWBMAXUZPRJYHRIXXAWCFVDXXFJGELMDHLTEXYAAWVLFMDZZGVFOSUYHSYAZCYUAKEYWCKQFCKUZONEUIBWOQZNSBWGAITLBQKVNVOCGGKRHAYHHCL");
    msg.timeout = 0.42505302612966545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3865381615461223);
    msg.setSource(29454U);
    msg.setSourceEntity(224U);
    msg.setDestination(55754U);
    msg.setDestinationEntity(150U);
    msg.action = 6U;
    msg.longain = 0.6276400153111606;
    msg.latgain = 0.2421998551611222;
    msg.bondthick = 279610360U;
    msg.leadgain = 0.6571175128277641;
    msg.deconflgain = 0.26326025696402844;

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
    msg.setTimeStamp(0.8478730866332309);
    msg.setSource(56918U);
    msg.setSourceEntity(223U);
    msg.setDestination(28639U);
    msg.setDestinationEntity(156U);
    msg.action = 253U;
    msg.longain = 0.9599917169326829;
    msg.latgain = 0.8501783671275407;
    msg.bondthick = 3907607697U;
    msg.leadgain = 0.29645795117992135;
    msg.deconflgain = 0.5584709442626883;

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
    msg.setTimeStamp(0.9225174985184684);
    msg.setSource(59159U);
    msg.setSourceEntity(7U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(137U);
    msg.action = 225U;
    msg.longain = 0.16541168035346054;
    msg.latgain = 0.3454719610851086;
    msg.bondthick = 2923939658U;
    msg.leadgain = 0.40920172151459844;
    msg.deconflgain = 0.08799831450740203;

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
    msg.setTimeStamp(0.9677892022477649);
    msg.setSource(8817U);
    msg.setSourceEntity(161U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(189U);
    msg.err_mean = 0.33980262529054583;
    msg.dist_min_abs = 0.12939308821107876;
    msg.dist_min_mean = 0.9571705746111747;

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
    msg.setTimeStamp(0.48974744773915335);
    msg.setSource(64499U);
    msg.setSourceEntity(237U);
    msg.setDestination(27854U);
    msg.setDestinationEntity(232U);
    msg.err_mean = 0.8378249378591064;
    msg.dist_min_abs = 0.8810849006940061;
    msg.dist_min_mean = 0.27684918502810685;

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
    msg.setTimeStamp(0.6359590844925455);
    msg.setSource(34689U);
    msg.setSourceEntity(16U);
    msg.setDestination(57925U);
    msg.setDestinationEntity(147U);
    msg.err_mean = 0.5986703543438858;
    msg.dist_min_abs = 0.3030030689379477;
    msg.dist_min_mean = 0.4550420643756602;

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
    msg.setTimeStamp(0.5361028145449662);
    msg.setSource(54017U);
    msg.setSourceEntity(158U);
    msg.setDestination(38788U);
    msg.setDestinationEntity(107U);
    msg.action = 17U;
    msg.lon_gain = 0.9851141136128022;
    msg.lat_gain = 0.41167233943819637;
    msg.bond_thick = 0.502829476850915;
    msg.lead_gain = 0.7855850806698521;
    msg.deconfl_gain = 0.06880419939140892;
    msg.accel_switch_gain = 0.4031335556552702;
    msg.safe_dist = 0.27185498005061837;
    msg.deconflict_offset = 0.07889696219698938;
    msg.accel_safe_margin = 0.8273285117248355;
    msg.accel_lim_x = 0.7447778256246215;

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
    msg.setTimeStamp(0.3444955852342706);
    msg.setSource(42021U);
    msg.setSourceEntity(191U);
    msg.setDestination(60572U);
    msg.setDestinationEntity(219U);
    msg.action = 36U;
    msg.lon_gain = 0.41295331527427204;
    msg.lat_gain = 0.9755915960226296;
    msg.bond_thick = 0.1983151047093018;
    msg.lead_gain = 0.5456047411052368;
    msg.deconfl_gain = 0.41236321379923757;
    msg.accel_switch_gain = 0.9590074144040079;
    msg.safe_dist = 0.694870051934248;
    msg.deconflict_offset = 0.775057848966912;
    msg.accel_safe_margin = 0.426016009661915;
    msg.accel_lim_x = 0.7384147369470991;

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
    msg.setTimeStamp(0.10566593264477697);
    msg.setSource(62611U);
    msg.setSourceEntity(230U);
    msg.setDestination(34947U);
    msg.setDestinationEntity(105U);
    msg.action = 191U;
    msg.lon_gain = 0.9562547694205281;
    msg.lat_gain = 0.38565795907873623;
    msg.bond_thick = 0.08301383012892893;
    msg.lead_gain = 0.932416340190401;
    msg.deconfl_gain = 0.838898247362238;
    msg.accel_switch_gain = 0.36661232435756763;
    msg.safe_dist = 0.3229675895346431;
    msg.deconflict_offset = 0.3508781113723517;
    msg.accel_safe_margin = 0.860064003073368;
    msg.accel_lim_x = 0.18656634653423465;

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
    msg.setTimeStamp(0.9004670935529444);
    msg.setSource(18193U);
    msg.setSourceEntity(206U);
    msg.setDestination(63747U);
    msg.setDestinationEntity(235U);
    msg.type = 55U;
    msg.op = 14U;
    msg.err_mean = 0.7054451536134546;
    msg.dist_min_abs = 0.9916829060856768;
    msg.dist_min_mean = 0.5083215357010079;
    msg.roll_rate_mean = 0.9418908690923876;
    msg.time = 0.0995816130087458;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 53U;
    tmp_msg_0.lon_gain = 0.7141716550857424;
    tmp_msg_0.lat_gain = 0.3240410650456963;
    tmp_msg_0.bond_thick = 0.9851877026681922;
    tmp_msg_0.lead_gain = 0.20655099859959203;
    tmp_msg_0.deconfl_gain = 0.6195848325003807;
    tmp_msg_0.accel_switch_gain = 0.6810226829970795;
    tmp_msg_0.safe_dist = 0.2565275500318738;
    tmp_msg_0.deconflict_offset = 0.9742249027060587;
    tmp_msg_0.accel_safe_margin = 0.46909365208539755;
    tmp_msg_0.accel_lim_x = 0.9504256865982291;
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
    msg.setTimeStamp(0.8693847591564278);
    msg.setSource(38848U);
    msg.setSourceEntity(205U);
    msg.setDestination(41217U);
    msg.setDestinationEntity(77U);
    msg.type = 19U;
    msg.op = 105U;
    msg.err_mean = 0.47770918756628356;
    msg.dist_min_abs = 0.5491341980024126;
    msg.dist_min_mean = 0.8430944542108867;
    msg.roll_rate_mean = 0.9628704826955596;
    msg.time = 0.3873598844500399;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 112U;
    tmp_msg_0.lon_gain = 0.1323632142418616;
    tmp_msg_0.lat_gain = 0.9034362761934925;
    tmp_msg_0.bond_thick = 0.7280688660668324;
    tmp_msg_0.lead_gain = 0.12121327761123091;
    tmp_msg_0.deconfl_gain = 0.4606153294852041;
    tmp_msg_0.accel_switch_gain = 0.7796962138061289;
    tmp_msg_0.safe_dist = 0.3186572683548091;
    tmp_msg_0.deconflict_offset = 0.23535812391234756;
    tmp_msg_0.accel_safe_margin = 0.603748939895393;
    tmp_msg_0.accel_lim_x = 0.27583525914417506;
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
    msg.setTimeStamp(0.0639000501665794);
    msg.setSource(4394U);
    msg.setSourceEntity(17U);
    msg.setDestination(24965U);
    msg.setDestinationEntity(230U);
    msg.type = 93U;
    msg.op = 141U;
    msg.err_mean = 0.9243910873918947;
    msg.dist_min_abs = 0.8683162328585625;
    msg.dist_min_mean = 0.4495726947996833;
    msg.roll_rate_mean = 0.5175991683883353;
    msg.time = 0.15860909776720722;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 122U;
    tmp_msg_0.lon_gain = 0.6012554734584676;
    tmp_msg_0.lat_gain = 0.9019563363101971;
    tmp_msg_0.bond_thick = 0.7495310274079792;
    tmp_msg_0.lead_gain = 0.02083613985734767;
    tmp_msg_0.deconfl_gain = 0.030329055605249566;
    tmp_msg_0.accel_switch_gain = 0.5336947430857553;
    tmp_msg_0.safe_dist = 0.869811786209118;
    tmp_msg_0.deconflict_offset = 0.6377114705645488;
    tmp_msg_0.accel_safe_margin = 0.5044275011072242;
    tmp_msg_0.accel_lim_x = 0.6319763368929057;
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
    msg.setTimeStamp(0.41974620989260036);
    msg.setSource(17669U);
    msg.setSourceEntity(78U);
    msg.setDestination(12957U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.03597243783748727;
    msg.lon = 0.4990374060817083;
    msg.eta = 3755391361U;
    msg.duration = 7003U;

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
    msg.setTimeStamp(0.6669783458925237);
    msg.setSource(51616U);
    msg.setSourceEntity(181U);
    msg.setDestination(32300U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.20736753899051752;
    msg.lon = 0.21346967409918716;
    msg.eta = 501811395U;
    msg.duration = 49678U;

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
    msg.setTimeStamp(0.9328847181650831);
    msg.setSource(64934U);
    msg.setSourceEntity(149U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.5249438567485144;
    msg.lon = 0.7752120902814044;
    msg.eta = 1885105855U;
    msg.duration = 49396U;

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
    msg.setTimeStamp(0.20849090807339854);
    msg.setSource(9640U);
    msg.setSourceEntity(12U);
    msg.setDestination(14469U);
    msg.setDestinationEntity(157U);
    msg.plan_id = 16986U;

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
    msg.setTimeStamp(0.16023448832873266);
    msg.setSource(6582U);
    msg.setSourceEntity(80U);
    msg.setDestination(46398U);
    msg.setDestinationEntity(48U);
    msg.plan_id = 50413U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6576661747215874;
    tmp_msg_0.lon = 0.6710467897507628;
    tmp_msg_0.eta = 2844235410U;
    tmp_msg_0.duration = 51084U;
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
    msg.setTimeStamp(0.3683120912650376);
    msg.setSource(53497U);
    msg.setSourceEntity(150U);
    msg.setDestination(29522U);
    msg.setDestinationEntity(173U);
    msg.plan_id = 1056U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9018621105720733;
    tmp_msg_0.lon = 0.48240255928821485;
    tmp_msg_0.eta = 3849912501U;
    tmp_msg_0.duration = 48187U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7208549650773722);
    msg.setSource(52985U);
    msg.setSourceEntity(79U);
    msg.setDestination(21803U);
    msg.setDestinationEntity(229U);
    msg.type = 8U;
    msg.command = 142U;
    msg.settings.assign("MKCQBGIRNZQEWELTSYEYPJYYSIAZSNHYDUACERKOLIFDMWSTRXOBNEDFILEUWTZXGXUBNKLVOCRFZHVZXHJMOEJTANZHIHUPZPHLHUFAOSVCMRRDKSKWAN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37186U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.16589733288276354;
    tmp_tmp_msg_0_0.lon = 0.5633980729730267;
    tmp_tmp_msg_0_0.eta = 2917569565U;
    tmp_tmp_msg_0_0.duration = 52688U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XRQXAUMPLKEACHLXQUAQHCBQDZTRCHUAPLYYHVGDOUTWFJNPJLEWICSUKWGEHNMVVSNNSPSOLRWTIVMKJDRIYLCJFDOAFRBGFHOKOJLVMXBUVEZWFVBEHTIKSCOBGQGAQZO");

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
    msg.setTimeStamp(0.6324996992668803);
    msg.setSource(23644U);
    msg.setSourceEntity(153U);
    msg.setDestination(62183U);
    msg.setDestinationEntity(131U);
    msg.type = 107U;
    msg.command = 182U;
    msg.settings.assign("IUOWHICSWEFQGEYPFPKMXDZOYRAJTRKDJLSIGJLCKVFXRFRDQFYMXXIUBBUIWNSWUNHVGRQNYEOHTDNOAHINDEBKIZTTCKPLOZWXIZPCXIYKTVZZOZZOKAJKLWVTUQLNWPTAQJUPEXQMBMAMMWZJHYYSMNSSRVHLDMJRKRYEISCBKGFYMCCNHWUFHEVOXXJMCGOYFUDSALXPGJTDNVRVQQVFBGGAWCBASFLEULTERUPBLBQBHHPEJDAGOCDG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17989U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8904689156891034;
    tmp_tmp_msg_0_0.lon = 0.9992034143355462;
    tmp_tmp_msg_0_0.eta = 3840042791U;
    tmp_tmp_msg_0_0.duration = 35070U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BEFVTKKHHMJMUDEUKZSWYFQTRWXTYXLTNPLODBTHGQLSQXMYPGAYCNEDZUICVMRUOWCFNWJBPPJEGKQRGKOOGSTOOAMURJCNVWMZANCGVIIYUGWENIBIYZKAHWOQTPLOTXJFADVOARDJJXRCFHKYGVHKPDERSWENSPMNLJEQSYVXQTDZRPPECLGLOXMQNJUVZZFSZSLBAKZDFBRHKXIDBIYMHSU");

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
    msg.setTimeStamp(0.012951138652234184);
    msg.setSource(44107U);
    msg.setSourceEntity(95U);
    msg.setDestination(62045U);
    msg.setDestinationEntity(58U);
    msg.type = 44U;
    msg.command = 106U;
    msg.settings.assign("JATCAJJPSGDOLNQJWHHWKEOPUGZXCLVWNUVVCPMEGOWIKEUIAWLDXQFTUFSLIAMXFTKHIIYFTPTYJBOYOHPBCMRBCGCVBHSGJDBIGKKQFTHCZZMMSWZESEGLVQWFGJMUMNHQQGNAKYZVYPFKEWEMMRXHAYAKDCNUKNXBPYUEMNTFFLZRZSQCXUAYDXRHBXPJOUEDPYIWRIIJOPNAGDQQNSVDVRORBXSDSU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 35217U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.12449264048611419;
    tmp_tmp_msg_0_0.lon = 0.7243064275555597;
    tmp_tmp_msg_0_0.eta = 3540690947U;
    tmp_tmp_msg_0_0.duration = 46611U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NPUTAFIHNHTWSFDRSMSTCY");

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
    msg.setTimeStamp(0.34500346246303115);
    msg.setSource(17004U);
    msg.setSourceEntity(173U);
    msg.setDestination(37801U);
    msg.setDestinationEntity(93U);
    msg.state = 68U;
    msg.plan_id = 56710U;
    msg.wpt_id = 209U;
    msg.settings_chk = 47349U;

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
    msg.setTimeStamp(0.2667534514013976);
    msg.setSource(3973U);
    msg.setSourceEntity(54U);
    msg.setDestination(49853U);
    msg.setDestinationEntity(185U);
    msg.state = 15U;
    msg.plan_id = 57503U;
    msg.wpt_id = 152U;
    msg.settings_chk = 22683U;

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
    msg.setTimeStamp(0.6824356537555828);
    msg.setSource(33961U);
    msg.setSourceEntity(163U);
    msg.setDestination(8607U);
    msg.setDestinationEntity(92U);
    msg.state = 123U;
    msg.plan_id = 8606U;
    msg.wpt_id = 59U;
    msg.settings_chk = 12427U;

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
    msg.setTimeStamp(0.21214087212920985);
    msg.setSource(36436U);
    msg.setSourceEntity(215U);
    msg.setDestination(32399U);
    msg.setDestinationEntity(70U);
    msg.uid = 189U;
    msg.frag_number = 38U;
    msg.num_frags = 236U;
    const signed char tmp_msg_0[] = {77, -113, 94, -102, -75, -42, -43, -2, -110, 50, 80, 61, 30, -125, -128, 52, -44, 100, -79, -105, 17, -57, 58, -17, -42, 125, 17, 86, 21, -17, -31, 71, -59, -63, -107, -38, 111, 64, -76, 115, -46, -27, -46, 45, -103, 95, -78, 68, -60, -7, 5, 25, 120, 102, -71, -81, -35, -90, -27, 50, -74, 46, 48, 110, 23, -123, 20, -45, 70, 44, -24, -92, -84, 5, -27, -92, 4, 78, -6, 98, 66, 63, -116, -95, -48, 56, 21, 99, -101, -38, -52, -95, -128, -47, -41, 14, -94, 68, 123, -126, 109, -105, 96, 56, 111, 87, -94, 88, -24, 17, 36, -5, -78, -102, 0, -125, -84, -41, 3, 111, 85, -70, 97, 17, -120, -67, 6, 98, 47, 11, 20, -38, -111, 118, -45, 29, 47, -60, 103, 34, -116, 77, -55, 67, 101, 64, 81};
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
    msg.setTimeStamp(0.4352204189880061);
    msg.setSource(7064U);
    msg.setSourceEntity(141U);
    msg.setDestination(32496U);
    msg.setDestinationEntity(66U);
    msg.uid = 149U;
    msg.frag_number = 238U;
    msg.num_frags = 190U;
    const signed char tmp_msg_0[] = {42, 55, 112, -67, 109, 51, -1, 90, 64, -82, 44, -118, -34, -50, 112, -95, -40, -26, -57, 77, -125, 126, 67, 123, 6, -45, 51, 98, 34, -45, -64, 94, 95, 74, -56, 45, 102, -53, 4, 11, 46, -106, 1, -14, -128, 27, 41, 52, 93, -20, 38, 6, 78, 62, -103, 26, 116, -104, -37, 88, 102, 47, -87, -94, 89, 88, -69, -47, -10, 76, -39, -45, 125, 12, 109, 86, -88, -68, -66, -63, 37, -43, 9, -86, -76, -5, -46, -98, -15, 81, -16, -47, 17, 69, -128, 124, -103, -107, -86, 96, -8, 64, -78, 60, 6, 9, 82, 82, -90, -1, 100, -102, -25, 50, 32, -99};
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
    msg.setTimeStamp(0.7929960583864152);
    msg.setSource(55073U);
    msg.setSourceEntity(209U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(10U);
    msg.uid = 152U;
    msg.frag_number = 154U;
    msg.num_frags = 47U;
    const signed char tmp_msg_0[] = {22, -100, -15, 31, 53, 121, 70, 61, -55, -100, 6, -98, -126, -17, 100, 40, -101, -49, 86, -50, -32, 29, -116, 32, -86, 77, 3, 22, -61, -62, -34, 93, -40, -107, 117, -30, -106, 118, -127, 18, -52, -35, -48, -121, -57, 88, -24, 108, 25, 69, -101, 6, -81, 9, -94, 102, 124, -97, -36, -79, 2, -115, 105, -63, 63, 24, -18, 86, -59, -123, 66, 14};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.16346429662206785);
    msg.setSource(52381U);
    msg.setSourceEntity(184U);
    msg.setDestination(11400U);
    msg.setDestinationEntity(27U);
    msg.uid = 0U;
    msg.op = 230U;
    msg.frag_ids.assign("NRVKMLYWTBJLHWGEDYOLBFLZFXAWNFEONIPPAJWZPKEVMQWLSEZRUSLUCGBXHXOIRVGSQTCLPUTTDQSKVNQTUEAUUOFQUCFRJNHHVIPKRKNGQOOKHAYPVMJIIHYWZESEJNYFUKAHYJNZADDGDIFFJZBZPDTMMRKVWFQXPJVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.5798974013902579);
    msg.setSource(4352U);
    msg.setSourceEntity(95U);
    msg.setDestination(43972U);
    msg.setDestinationEntity(89U);
    msg.uid = 199U;
    msg.op = 243U;
    msg.frag_ids.assign("XPWSDMLWJPGJTHTHNCIAAHYUYBFBETDJEKSSSZBRVMRCNBTETIWSGFDWCZTNMCXESACHEFWLSYKFGOOWROMHBOKNGYELDMNJPEOFQUKZAGUZGFXBCQZYOJTYMGEIQUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.7235654458320795);
    msg.setSource(11083U);
    msg.setSourceEntity(88U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(58U);
    msg.uid = 45U;
    msg.op = 66U;
    msg.frag_ids.assign("EKZXXZMCYQEQLUOIBNSYYCINQGZVROTNXAATEHHIUWDWEWJUKNPFQYAYIWVQAZODBVFKHPPBQFCDHMZAKTAPURBHWALFOCVSRXWKPWNYPMZOXGWILBJJTIEUNBKDHUCVOGFFOBGIGCRLDFGSPSXHYGZCWUXRSQDBMOPVFSGYBHDTOXTVVKTJMRJUQLTSJTNNNMJVJLKDYLCXHAMCBGSMSEVADCLZXFJALWPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8394385265054559);
    msg.setSource(58605U);
    msg.setSourceEntity(178U);
    msg.setDestination(41254U);
    msg.setDestinationEntity(219U);
    msg.content_type.assign("LODFRVHJAMNCWYAIMABRKJMXZUJLMA");
    const signed char tmp_msg_0[] = {96, -104, 68, 121, -114, 92, -42, -39, 32, -92, -74, -68, -2, -117, -68, -52, -73, 21, 111, -14, -101, -13, 74, 69, 90, -101, 113, 107, 82, -74, -35, 67, 109, 88, 97, -32, -67, 30, -46, -30, 35, 23, -57, 64, 35, 36, 58, 106, -110, -87, 92, -27, -66, -105, -35, 35, 97, 118, -32, -70, 101, -80, -123, -107, 83, 14, -29, -39, 6, 67, -5, 116, 21, -106, 50, -72, 118, 31, -2, 67, -85, 43, 94, 17, -88, -49, -45, 42, 38, 106, 49, 111, -112, 97, 102, 27, 98, 7, -40, 72, -8, -121, 39, 62, -114, -48, -18, -68};
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
    msg.setTimeStamp(0.5543684263770147);
    msg.setSource(20882U);
    msg.setSourceEntity(82U);
    msg.setDestination(48714U);
    msg.setDestinationEntity(93U);
    msg.content_type.assign("MNNKRYDQVKQFFCJVBLGOOGYJUQRPSBAAIRYGNMNUHSVYBIDAGTUZNUTCJVBRSRIOFFZNTOVEJYFPLLOXPPTWYSVQHBIHEAMXDPKYLTOSMVNIBZFBODFEFUBPTXDK");
    const signed char tmp_msg_0[] = {83, -70, -53, -44, -44, 81, -23, 12, -104, 71, -60, 53, 106, -107, 96, -84, 22, -26, 4, 77, 97, 98, -52, -1, 49, -128, -11, -94, 77, -107, 71, 56, -7, 40, -1, 105, 126, 64, 90, 19, 20, -3, -72, 110, 67, 98, 92, -72, 61, 80, 41, 36, -10, 23, -21, 70, 3, 122, -106, 20, 114, -14, -104, 95, -19, 38, -124, 32, 84, -30, 38, 39, 57, 41, 27, 67, 16, -78, -119};
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
    msg.setTimeStamp(0.010197478689286);
    msg.setSource(7231U);
    msg.setSourceEntity(63U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(218U);
    msg.content_type.assign("ACRDLJXQFTJDHTSMEUNLJZDNBYSZTCCJBPAREXJYASJOLHTRWHBQHYZRCCPYBGDBYXEFLUKBNDQNGROHEOUFZVFJRGJHRNEYXPCHKWDXGOUZETLWFERYCKAWLQEKSMJTIZAAGKWONFYYNTGBLDPMONCOPDGMIMSZQBSRVQBSFTGOKVOMIWFVQMZXQGPZEHHIPTACNSVIKWVVVLOIIULXKFQWSXSDKUWUUURKCMBIFLTYQHXEVDPXANPM");
    const signed char tmp_msg_0[] = {80, 103, 61, -91, -51, 67, -119, 83, 39, -103, 55, 122, 89, 78, -110, -28, -44, -42, 121, 73, 72, 89, -44, -96, -100, 114, 1, -34, -49, 49, 83, 71, -68, -63, -13, 122, -93, 14, -101, -95, 22, -100, 116, -49, 19, 32, -59, -75, -115, -19, 90, -117, -113, -74, -67, 2, -42, -17, -104, -99, -94, -38, -105, 45, 82, 116, 60, 23, 44, 20, -128, 51, 65, 113, -19, -111, -107, -15, 124, -105, -113, 51, 123, 35, 55, -77, -41, 62, 21, 62, -82, 28, -123, 3, -58, 125, -13, 83, -44, -126, 122, 73, 80, -104, -58, -70, 12, -64, 88, -111, 29, -91, -102, -11, 67, -15, -94, 40, 47, 99, -99, 66, 71, -27, 32, -58, 47, 76, 7, 119, 28, 0, 38, 125, -8, -46, 18, -124, 6, -81, 75, -24, 34, -19, -5, -108, 126, 79, 5, 15, -32, -49, 58, -27, -75, 61, -44, -27, 56, 0, -92, 126, -73, 58, 89, -58, -9, -38, 22, 34, -81, -46, 40, -66, 59, -118, -9, -7, 16, -113, 52, 77, 74, 62, 78, -65, 109, -54, 118, -74, -53, 95, -64, -6, 87, -11, -89, -47, 97, -68, 47, -128, 102, 21, -71, 92, -53, -105, -32, -41, 57, 98, -77, 74, 61};
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
    msg.setTimeStamp(0.682536199238521);
    msg.setSource(39665U);
    msg.setSourceEntity(29U);
    msg.setDestination(59992U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.1002962845467511);
    msg.setSource(35091U);
    msg.setSourceEntity(156U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.9665447425887773);
    msg.setSource(64965U);
    msg.setSourceEntity(231U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.19332883844512982);
    msg.setSource(60822U);
    msg.setSourceEntity(46U);
    msg.setDestination(63788U);
    msg.setDestinationEntity(64U);
    msg.target = 61263U;
    msg.bearing = 0.3563533921751587;
    msg.elevation = 0.29063918960474033;

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
    msg.setTimeStamp(0.24401262971069815);
    msg.setSource(45880U);
    msg.setSourceEntity(141U);
    msg.setDestination(64976U);
    msg.setDestinationEntity(221U);
    msg.target = 34807U;
    msg.bearing = 0.8157973642527622;
    msg.elevation = 0.007688140762167728;

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
    msg.setTimeStamp(0.07234767221518257);
    msg.setSource(30943U);
    msg.setSourceEntity(98U);
    msg.setDestination(65190U);
    msg.setDestinationEntity(225U);
    msg.target = 64663U;
    msg.bearing = 0.34010836116388066;
    msg.elevation = 0.11537984396828305;

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
    msg.setTimeStamp(0.19567111680525417);
    msg.setSource(53668U);
    msg.setSourceEntity(235U);
    msg.setDestination(1400U);
    msg.setDestinationEntity(58U);
    msg.target = 39392U;
    msg.x = 0.5870555670335615;
    msg.y = 0.2046431439279741;
    msg.z = 0.3417878406582374;

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
    msg.setTimeStamp(0.08261935377034046);
    msg.setSource(14953U);
    msg.setSourceEntity(240U);
    msg.setDestination(15971U);
    msg.setDestinationEntity(72U);
    msg.target = 18380U;
    msg.x = 0.6186969020321437;
    msg.y = 0.6656374500050559;
    msg.z = 0.322177349930041;

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
    msg.setTimeStamp(0.8954785765967004);
    msg.setSource(26592U);
    msg.setSourceEntity(119U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(79U);
    msg.target = 18870U;
    msg.x = 0.3325807723521541;
    msg.y = 0.49327021006445015;
    msg.z = 0.5368779347127586;

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
    msg.setTimeStamp(0.8113087285010558);
    msg.setSource(37742U);
    msg.setSourceEntity(103U);
    msg.setDestination(29216U);
    msg.setDestinationEntity(57U);
    msg.target = 18922U;
    msg.lat = 0.9126905256132053;
    msg.lon = 0.35524201332900507;
    msg.z_units = 241U;
    msg.z = 0.9368020335367265;

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
    msg.setTimeStamp(0.797353968455494);
    msg.setSource(16403U);
    msg.setSourceEntity(228U);
    msg.setDestination(46987U);
    msg.setDestinationEntity(91U);
    msg.target = 24006U;
    msg.lat = 0.27414255137440424;
    msg.lon = 0.2886444251346323;
    msg.z_units = 104U;
    msg.z = 0.44086395210777374;

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
    msg.setTimeStamp(0.7268847451061672);
    msg.setSource(2407U);
    msg.setSourceEntity(111U);
    msg.setDestination(39047U);
    msg.setDestinationEntity(198U);
    msg.target = 51373U;
    msg.lat = 0.7841614835913961;
    msg.lon = 0.5676798746925042;
    msg.z_units = 89U;
    msg.z = 0.7688226663466945;

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
    msg.setTimeStamp(0.7319578111639374);
    msg.setSource(59407U);
    msg.setSourceEntity(112U);
    msg.setDestination(34761U);
    msg.setDestinationEntity(15U);
    msg.locale.assign("QZZCMZLTCWNHEJIDZQJFJUBQXXNEEBEPUXAXOGIXVSTZIGMACMSMLQPYSZVZDMQXKYDNICVTBMJRBNKCUDNLINBDRUWRYLOHCHSV");
    const signed char tmp_msg_0[] = {-39, -97, 88, -104, 48, -109, -39, -92, -30, 55, 108, 9, 111, 12, 28, 122, 9, 18, -6, 55, 60, -30, -25, -119, -23, 115, 39, 90, 73, 23, -92, -8, -67, -122, -77, 116, 1, 93, 85};
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
    msg.setTimeStamp(0.3665277601191145);
    msg.setSource(13639U);
    msg.setSourceEntity(219U);
    msg.setDestination(17330U);
    msg.setDestinationEntity(170U);
    msg.locale.assign("SFZQKYIUWLWCOEPDXRHRIEGAHIOWMZNFUXVWVKZOVLQECRABIHOQOHFKZ");
    const signed char tmp_msg_0[] = {-95, 62, 63, 74, 104, -42, -22, -32, -39, -80, 78, -124, -103, 62, 80, -64, -54, 67, -9, -113, 15, -47, -122, -49, 76, 67, -127, 64, 22, 33, -48, -15, -6, 66, 115, 31, 69, -38, 80, -49, -27, 106, 80, 85, 114, -114, -85, 3, -44, -60, -41, 78, 13, 89, 69, -37, -84, -94, -111, 72, 59, 17, 3, 113, 111, 124, 66, 76, -18, 69, -45, 107, -79, 44};
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
    msg.setTimeStamp(0.37409188795834425);
    msg.setSource(24813U);
    msg.setSourceEntity(96U);
    msg.setDestination(63418U);
    msg.setDestinationEntity(36U);
    msg.locale.assign("NYDUZRRNKTYWVFNADIORQOZXZVEBCPHMUHYSWAZAULAEFJIGCGLKGVGTEJXGVGNBILCQAQTEJDEYETRWWMOMHFOXVUUYCLZOLXGPMNJGGOIHTAHFUS");
    const signed char tmp_msg_0[] = {-37, 89, -101, 94, -87, 69, 70, -5, 78, 36, -7, 80, 52, 93, 92, 8, 70, 46, -104, 60, 125, -56, 58, 16, -73, 89, 77, -82, -95, -65, -112, 31, -9, -96, -66, 76, -113, 61, -63};
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
    msg.setTimeStamp(0.209871975817692);
    msg.setSource(30111U);
    msg.setSourceEntity(162U);
    msg.setDestination(58175U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.34222936303623974);
    msg.setSource(39268U);
    msg.setSourceEntity(173U);
    msg.setDestination(24973U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.3134109527564578);
    msg.setSource(63857U);
    msg.setSourceEntity(55U);
    msg.setDestination(63690U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.7602994407047033);
    msg.setSource(43049U);
    msg.setSourceEntity(169U);
    msg.setDestination(62375U);
    msg.setDestinationEntity(83U);
    msg.camid = 8U;
    msg.x = 9114U;
    msg.y = 50794U;

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
    msg.setTimeStamp(0.03300997059696498);
    msg.setSource(23719U);
    msg.setSourceEntity(48U);
    msg.setDestination(17600U);
    msg.setDestinationEntity(86U);
    msg.camid = 62U;
    msg.x = 48212U;
    msg.y = 19509U;

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
    msg.setTimeStamp(0.7444142201704684);
    msg.setSource(37182U);
    msg.setSourceEntity(88U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(112U);
    msg.camid = 181U;
    msg.x = 17704U;
    msg.y = 34192U;

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
    msg.setTimeStamp(0.2254741023515624);
    msg.setSource(8610U);
    msg.setSourceEntity(200U);
    msg.setDestination(30270U);
    msg.setDestinationEntity(149U);
    msg.camid = 20U;
    msg.x = 48262U;
    msg.y = 54088U;

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
    msg.setTimeStamp(0.3469003226651248);
    msg.setSource(60905U);
    msg.setSourceEntity(125U);
    msg.setDestination(17652U);
    msg.setDestinationEntity(39U);
    msg.camid = 138U;
    msg.x = 47103U;
    msg.y = 32024U;

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
    msg.setTimeStamp(0.15989331626797698);
    msg.setSource(18887U);
    msg.setSourceEntity(104U);
    msg.setDestination(10682U);
    msg.setDestinationEntity(133U);
    msg.camid = 74U;
    msg.x = 42109U;
    msg.y = 342U;

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
    msg.setTimeStamp(0.08851888718722178);
    msg.setSource(4277U);
    msg.setSourceEntity(176U);
    msg.setDestination(4254U);
    msg.setDestinationEntity(227U);
    msg.tracking = 24U;
    msg.lat = 0.9685911871659171;
    msg.lon = 0.8458078485864182;
    msg.x = 0.6933765244685849;
    msg.y = 0.9846752092765402;
    msg.z = 0.2968445075223338;

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
    msg.setTimeStamp(0.0968111516066038);
    msg.setSource(15727U);
    msg.setSourceEntity(231U);
    msg.setDestination(61489U);
    msg.setDestinationEntity(81U);
    msg.tracking = 55U;
    msg.lat = 0.09650416642851345;
    msg.lon = 0.12049578507390513;
    msg.x = 0.09075362318972169;
    msg.y = 0.8454708353516343;
    msg.z = 0.9704022316814627;

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
    msg.setTimeStamp(0.6228856580866992);
    msg.setSource(19178U);
    msg.setSourceEntity(239U);
    msg.setDestination(28364U);
    msg.setDestinationEntity(65U);
    msg.tracking = 120U;
    msg.lat = 0.9126461523955106;
    msg.lon = 0.01815921078549787;
    msg.x = 0.5328627536130847;
    msg.y = 0.9404131393270171;
    msg.z = 0.6347888278388655;

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
    msg.setTimeStamp(0.6220868212511819);
    msg.setSource(7277U);
    msg.setSourceEntity(244U);
    msg.setDestination(60780U);
    msg.setDestinationEntity(106U);
    msg.target.assign("VFTUHHVXBNRCKYQ");
    msg.lbearing = 0.23480559069906204;
    msg.lelevation = 0.21787858694105267;
    msg.bearing = 0.4238347799678447;
    msg.elevation = 0.31702690921225596;
    msg.phi = 0.5829050600874031;
    msg.theta = 0.5038929892442048;
    msg.psi = 0.26809646813808563;
    msg.accuracy = 0.30651023981688685;

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
    msg.setTimeStamp(0.5173474843864183);
    msg.setSource(61098U);
    msg.setSourceEntity(111U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(5U);
    msg.target.assign("XBLSDWZXSIVHOHPDBVSVLQWSGUILZXFZYZLJOMIWUNRW");
    msg.lbearing = 0.13709458671982433;
    msg.lelevation = 0.00452923173493569;
    msg.bearing = 0.11511680653214873;
    msg.elevation = 0.8882541268823099;
    msg.phi = 0.531993339576531;
    msg.theta = 0.6489552699417945;
    msg.psi = 0.5699635125317412;
    msg.accuracy = 0.3723859888329787;

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
    msg.setTimeStamp(0.7262756427512297);
    msg.setSource(14113U);
    msg.setSourceEntity(66U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(89U);
    msg.target.assign("ZFQBICZLBGBMNLDADATJPDVVAUIIZSQWSFQFNTKODMRYMFEWQVXDTIWHEGYAYCBHWRCPSUTJTWUQSAEVSXWAX");
    msg.lbearing = 0.5936659159624397;
    msg.lelevation = 0.47673134824970886;
    msg.bearing = 0.4606584778192214;
    msg.elevation = 0.05210683937909277;
    msg.phi = 0.3785749859661053;
    msg.theta = 0.8511066985511898;
    msg.psi = 0.2648420905303952;
    msg.accuracy = 0.24511405255164698;

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
    msg.setTimeStamp(0.30853414060152273);
    msg.setSource(45584U);
    msg.setSourceEntity(219U);
    msg.setDestination(41181U);
    msg.setDestinationEntity(26U);
    msg.target.assign("OWIXPHUPABXWBMEFTWJAAELRWIACCLCFZQGVKUSBSRQAWYSBMVHMCHDJTEVYLXFUNEYUYDUVFEJGSJFNUGJDEXNZRCPIQTXTHXPNFHRRTHGWJAHYHXZCVQIZGEJOTNGEDSIGQCXYEYMCQGYOFKTXIATOEOVKLRDMBYNKHQBFKIGWLJFTYUJQBUDQPIRSKKQKSUSPBDNOFDCLZVMNMOOHSLOBAGPVIZNOAJVKVMRM");
    msg.x = 0.37756148649535737;
    msg.y = 0.1345579733625134;
    msg.z = 0.10334434615042787;
    msg.n = 0.8202944134513349;
    msg.e = 0.21615162145534395;
    msg.d = 0.555355816067339;
    msg.phi = 0.22007486190575098;
    msg.theta = 0.5187636146364922;
    msg.psi = 0.4858834168928343;
    msg.accuracy = 0.39773000880131737;

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
    msg.setTimeStamp(0.6193790266633838);
    msg.setSource(57367U);
    msg.setSourceEntity(71U);
    msg.setDestination(50931U);
    msg.setDestinationEntity(62U);
    msg.target.assign("AQQEQKPZREMOFBCPWJIMTGCGCHWBQKHHMOUVZDEWXOVTXZGUDOGJSNIZSPTUEZIH");
    msg.x = 0.2572288515901485;
    msg.y = 0.061267762955698024;
    msg.z = 0.1320365550434932;
    msg.n = 0.7337539304172229;
    msg.e = 0.04346473864103495;
    msg.d = 0.36853701591424104;
    msg.phi = 0.17954794855197687;
    msg.theta = 0.11110311204241441;
    msg.psi = 0.3564092666386043;
    msg.accuracy = 0.5636930907811233;

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
    msg.setTimeStamp(0.9103530484450838);
    msg.setSource(42449U);
    msg.setSourceEntity(227U);
    msg.setDestination(39908U);
    msg.setDestinationEntity(133U);
    msg.target.assign("DNIOLHLVTHUULTSJVHTYBVMUXXYTDZSQUNPVJEOYVZCP");
    msg.x = 0.6950417763778995;
    msg.y = 0.970033515350916;
    msg.z = 0.8926012313062059;
    msg.n = 0.5450484499607208;
    msg.e = 0.8105682086718157;
    msg.d = 0.635739612899817;
    msg.phi = 0.7108180871363434;
    msg.theta = 0.7673535655629191;
    msg.psi = 0.4203115922810162;
    msg.accuracy = 0.2553646042864052;

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
    msg.setTimeStamp(0.2624354206334202);
    msg.setSource(28256U);
    msg.setSourceEntity(116U);
    msg.setDestination(37248U);
    msg.setDestinationEntity(210U);
    msg.target.assign("FICVASUYWYQSUEQWMWHBUAYJXPERBYBGKMDMQDNDKCCPOHZPPSAAIXXBYCBOFZJYXIEGWZWOFRMMMSIROJBNXEQXVQATKUSASCSGRNJZQGEUODHTFFPUQJAZFKTZROBYXDFLRGOTVMSKWEVZLOCKLKQAGFDGRWHHUZTQCYHGFPSCWPGWHIEIWXLEVYDUVHNMJBLZHIDJJIVSJNLRE");
    msg.lat = 0.3128908953306795;
    msg.lon = 0.5700273362072372;
    msg.z_units = 20U;
    msg.z = 0.11272038754806168;
    msg.accuracy = 0.28816542509957044;

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
    msg.setTimeStamp(0.2850070333190421);
    msg.setSource(2670U);
    msg.setSourceEntity(182U);
    msg.setDestination(43334U);
    msg.setDestinationEntity(161U);
    msg.target.assign("FBXSCBEKQSGIFHYCQTYPDLIJEQIDFZDUEHEXYYBLHEEPGUDCRRLDEIWRSBALDJHKVJMUTPYQPGZOGTACKQLSSGQOSNACJNWPJYAAZUTBDJXPPFMEEVKWZHAGFWGF");
    msg.lat = 0.3602769129985399;
    msg.lon = 0.0829497428022048;
    msg.z_units = 105U;
    msg.z = 0.14482419502563382;
    msg.accuracy = 0.7951547683202489;

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
    msg.setTimeStamp(0.8742869947156651);
    msg.setSource(33019U);
    msg.setSourceEntity(176U);
    msg.setDestination(23525U);
    msg.setDestinationEntity(83U);
    msg.target.assign("ZATEWSMJZPHHVLUMUICOWYGKTSHZXXDTAQEDUDPNVEREEXPNFLIHVNYZGBJXFMPFWXLLBDSOZQAIRXRIHPGMZKZAVLWUFOLGOTOUIABNJDIVQYZOMEAGARDNTVBUEFOMXDQFKHLNWEWGYTHOSCTYRYUMYKYKSLSIROMQBBJASIQMKZUJCAKJBDXVCTJJPRQZGPYCE");
    msg.lat = 0.015946905408527612;
    msg.lon = 0.47827174499743486;
    msg.z_units = 236U;
    msg.z = 0.5380184252544377;
    msg.accuracy = 0.8681624124171561;

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
    msg.setTimeStamp(0.7164797975025461);
    msg.setSource(50338U);
    msg.setSourceEntity(98U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(190U);
    msg.name.assign("JPHAXKJKKXHZAUOTYKURAZWJTQQOBRBPCDSYUELFNXVUIOKHFCGMJRSHCQVNGAGMXTTDE");
    msg.lat = 0.7751106353746303;
    msg.lon = 0.6001799195437841;
    msg.z = 0.2477225627804679;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.9734973093982963);
    msg.setSource(48791U);
    msg.setSourceEntity(224U);
    msg.setDestination(45941U);
    msg.setDestinationEntity(109U);
    msg.name.assign("FFCMZPPVOZMWOBSHXEIKQEQVKHSJTXRGEZWVIKWUDLSTRFQRPURLGOBAWFPVCEBKQZFXHVBAYOCMCIJDIMCADCZHJFRVLFZNEENFNJJMLSOVZYXRHZTXJAMKJVNUQUXLIXGNMIGRWKGXAPDOSEABWZLGQEATCYGEUUPTYPACSXOIZBNUX");
    msg.lat = 0.4688319824101831;
    msg.lon = 0.4119559863167779;
    msg.z = 0.8056109580099929;
    msg.z_units = 183U;

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
    msg.setTimeStamp(0.9634552277019091);
    msg.setSource(9483U);
    msg.setSourceEntity(228U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(228U);
    msg.name.assign("TWJGHMBQJNCPXZZJPQAUYXJBLPLSEJUIUVSKXTZQLOFJACHRHOGMCBIBXKEJHXOSGWDPAMNUL");
    msg.lat = 0.0691722564769438;
    msg.lon = 0.791646630274576;
    msg.z = 0.9618652312051189;
    msg.z_units = 79U;

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
    msg.setTimeStamp(0.6940655157119473);
    msg.setSource(10249U);
    msg.setSourceEntity(221U);
    msg.setDestination(23176U);
    msg.setDestinationEntity(222U);
    msg.op = 78U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EBWRJYLUYPAFEDPBZNUDMWPJCCIWHLINYXCQHNBPSYJLUPINMVSKXIOUXQBKSIRPFBFMDRQBMFZDNPZZXGDEXXGFT");
    tmp_msg_0.lat = 0.1609870387462603;
    tmp_msg_0.lon = 0.10964165545568239;
    tmp_msg_0.z = 0.15207293807063182;
    tmp_msg_0.z_units = 131U;
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
    msg.setTimeStamp(0.016046187951776814);
    msg.setSource(22305U);
    msg.setSourceEntity(171U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(34U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.25503282409902817);
    msg.setSource(2734U);
    msg.setSourceEntity(214U);
    msg.setDestination(16455U);
    msg.setDestinationEntity(98U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.5891587789326105);
    msg.setSource(37965U);
    msg.setSourceEntity(193U);
    msg.setDestination(7111U);
    msg.setDestinationEntity(32U);
    msg.value = 0.4934632306095532;
    msg.type = 41U;

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
    msg.setTimeStamp(0.728315584480054);
    msg.setSource(144U);
    msg.setSourceEntity(114U);
    msg.setDestination(21375U);
    msg.setDestinationEntity(77U);
    msg.value = 0.6923609419182802;
    msg.type = 220U;

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
    msg.setTimeStamp(0.6275647593825902);
    msg.setSource(61473U);
    msg.setSourceEntity(68U);
    msg.setDestination(46691U);
    msg.setDestinationEntity(168U);
    msg.value = 0.1383231985368757;
    msg.type = 244U;

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
    msg.setTimeStamp(0.08084673912174312);
    msg.setSource(34004U);
    msg.setSourceEntity(129U);
    msg.setDestination(29884U);
    msg.setDestinationEntity(124U);
    msg.value = 0.1055045710146717;

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
    msg.setTimeStamp(0.5094555681242735);
    msg.setSource(19408U);
    msg.setSourceEntity(165U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(72U);
    msg.value = 0.701958866681941;

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
    msg.setTimeStamp(0.17877603107274975);
    msg.setSource(52270U);
    msg.setSourceEntity(99U);
    msg.setDestination(50679U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5755919545736486;

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
    msg.setTimeStamp(0.3859597933233919);
    msg.setSource(32753U);
    msg.setSourceEntity(28U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(208U);
    msg.timestamp_last_service = 0.8043006883860596;
    msg.time_next_service = 0.08530734591096245;
    msg.time_motor_next_service = 0.6473051229920023;
    msg.time_idle_ground = 0.29649735138973;
    msg.time_idle_air = 0.23795927833681318;
    msg.time_idle_water = 0.8828480520557255;
    msg.time_idle_underwater = 0.3508210849930785;
    msg.time_idle_unknown = 0.5926102484046777;
    msg.time_motor_ground = 0.10843518009894182;
    msg.time_motor_air = 0.7840713112818383;
    msg.time_motor_water = 0.02025189846976294;
    msg.time_motor_underwater = 0.17818614041001501;
    msg.time_motor_unknown = 0.3976919415304868;
    msg.rpm_min = -31785;
    msg.rpm_max = -9140;
    msg.depth_max = 0.24936922454587684;

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
    msg.setTimeStamp(0.13069031085581495);
    msg.setSource(59831U);
    msg.setSourceEntity(59U);
    msg.setDestination(48867U);
    msg.setDestinationEntity(115U);
    msg.timestamp_last_service = 0.2105128828541255;
    msg.time_next_service = 0.6169069038720059;
    msg.time_motor_next_service = 0.5245229608246185;
    msg.time_idle_ground = 0.08395350022942205;
    msg.time_idle_air = 0.9203551794721003;
    msg.time_idle_water = 0.3972285353433196;
    msg.time_idle_underwater = 0.6748424975656521;
    msg.time_idle_unknown = 0.08386437302748184;
    msg.time_motor_ground = 0.06408199047922969;
    msg.time_motor_air = 0.6464717201336757;
    msg.time_motor_water = 0.1544925545788577;
    msg.time_motor_underwater = 0.3669957834532712;
    msg.time_motor_unknown = 0.9784859587425484;
    msg.rpm_min = 26321;
    msg.rpm_max = -2568;
    msg.depth_max = 0.5394529357676416;

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
    msg.setTimeStamp(0.786952425275377);
    msg.setSource(31368U);
    msg.setSourceEntity(203U);
    msg.setDestination(55287U);
    msg.setDestinationEntity(189U);
    msg.timestamp_last_service = 0.8093290971451114;
    msg.time_next_service = 0.2853197738955171;
    msg.time_motor_next_service = 0.09230952663787928;
    msg.time_idle_ground = 0.7218094132448449;
    msg.time_idle_air = 0.9854476031176316;
    msg.time_idle_water = 0.054710428222225826;
    msg.time_idle_underwater = 0.27165255866627014;
    msg.time_idle_unknown = 0.5695476562910776;
    msg.time_motor_ground = 0.47081192996061294;
    msg.time_motor_air = 0.13060582919154184;
    msg.time_motor_water = 0.2435845933997679;
    msg.time_motor_underwater = 0.1945868961408409;
    msg.time_motor_unknown = 0.42752236775581676;
    msg.rpm_min = -30670;
    msg.rpm_max = -25443;
    msg.depth_max = 0.7103199559749113;

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
    msg.setTimeStamp(0.9614895182222463);
    msg.setSource(50033U);
    msg.setSourceEntity(237U);
    msg.setDestination(31000U);
    msg.setDestinationEntity(169U);
    msg.severity = 36U;
    msg.text.assign("IZNJOSXZNALOKUYZKJULBEPLJBCDCBPHSVFDGNCTVRGYBFJYMTJIXN");

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
    msg.setTimeStamp(0.4294959576929217);
    msg.setSource(16599U);
    msg.setSourceEntity(252U);
    msg.setDestination(32861U);
    msg.setDestinationEntity(91U);
    msg.severity = 114U;
    msg.text.assign("FVGAEXKEMFOGFTVUTJ");

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
    msg.setTimeStamp(0.8426469685495256);
    msg.setSource(11716U);
    msg.setSourceEntity(193U);
    msg.setDestination(30491U);
    msg.setDestinationEntity(62U);
    msg.severity = 82U;
    msg.text.assign("TTAQBUXLNHMPMREYZKJJPMCCMEIGEWJITZIFHFVDHRSGQIYAUZCPWFFWEUMLLVVIYTZRNDPSUXFCXIRHWHYCMGDLDUSLOGQABLOFSSQROZNPAXRAQOGWRBFUQVFYBMWXBFTVAKZECTFDWQAOBJYQSCIJVAXNGLWESWPLXUYEQEQNMROYLHDNZSJTSIYHOVJKHGVHPTZSVCNJZGXDDHBKNXURENPGAJBBOILYKVPMGXKKIRWKM");

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
    msg.setTimeStamp(0.13724167993700753);
    msg.setSource(35869U);
    msg.setSourceEntity(252U);
    msg.setDestination(59449U);
    msg.setDestinationEntity(94U);
    msg.channel = -120;
    msg.value = -426000250;
    msg.gain = 83U;

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
    msg.setTimeStamp(0.7722315799471716);
    msg.setSource(16520U);
    msg.setSourceEntity(26U);
    msg.setDestination(19504U);
    msg.setDestinationEntity(159U);
    msg.channel = -50;
    msg.value = -2043615524;
    msg.gain = 26U;

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
    msg.setTimeStamp(0.706618358274305);
    msg.setSource(61839U);
    msg.setSourceEntity(76U);
    msg.setDestination(25979U);
    msg.setDestinationEntity(156U);
    msg.channel = 72;
    msg.value = 857392061;
    msg.gain = 230U;

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
    msg.setTimeStamp(0.20073819965149498);
    msg.setSource(34893U);
    msg.setSourceEntity(80U);
    msg.setDestination(6102U);
    msg.setDestinationEntity(221U);
    msg.ch01 = 0.32748548024571666;
    msg.ch02 = 0.6985669322606122;
    msg.ch03 = 0.837055208446824;
    msg.ch04 = 0.6759382469166029;
    msg.ch05 = 0.1144499607037407;
    msg.ch06 = 0.6930793124627289;
    msg.ch07 = 0.5524947745040714;
    msg.ch08 = 0.017151122815485143;
    msg.ch09 = 0.31500969100636256;
    msg.ch10 = 0.9677232096704564;
    msg.ch11 = 0.5980685132783479;
    msg.ch12 = 0.057192024281793596;
    msg.ch13 = 0.6042828466101922;
    msg.ch14 = 0.798047926291211;
    msg.ch15 = 0.349569024366431;
    msg.ch16 = 0.8525169367782762;

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
    msg.setTimeStamp(0.6591121493528984);
    msg.setSource(22982U);
    msg.setSourceEntity(62U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(106U);
    msg.ch01 = 0.4429168899697181;
    msg.ch02 = 0.9897093063081487;
    msg.ch03 = 0.49884078439607327;
    msg.ch04 = 0.477327358641619;
    msg.ch05 = 0.6234316427935499;
    msg.ch06 = 0.794911628912067;
    msg.ch07 = 0.5896450853448744;
    msg.ch08 = 0.6553656742281309;
    msg.ch09 = 0.43346325731033486;
    msg.ch10 = 0.5710613257916487;
    msg.ch11 = 0.04431020762259419;
    msg.ch12 = 0.08408914013093893;
    msg.ch13 = 0.7548082177100653;
    msg.ch14 = 0.16515843221830606;
    msg.ch15 = 0.09195526401019583;
    msg.ch16 = 0.9762520318245538;

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
    msg.setTimeStamp(0.532996793045941);
    msg.setSource(33907U);
    msg.setSourceEntity(245U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(229U);
    msg.ch01 = 0.5890535038189052;
    msg.ch02 = 0.49867291178349193;
    msg.ch03 = 0.5628453161428969;
    msg.ch04 = 0.006340301400568293;
    msg.ch05 = 0.6531297160146446;
    msg.ch06 = 0.5271341768973417;
    msg.ch07 = 0.26573558584242984;
    msg.ch08 = 0.3708695136931075;
    msg.ch09 = 0.6037741934767011;
    msg.ch10 = 0.14272468760843404;
    msg.ch11 = 0.6662604186627934;
    msg.ch12 = 0.9310571916920927;
    msg.ch13 = 0.9422025635780565;
    msg.ch14 = 0.7456404932886627;
    msg.ch15 = 0.2965391456316788;
    msg.ch16 = 0.48885665909661946;

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

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.16821630493506157);
    msg.setSource(65209U);
    msg.setSourceEntity(51U);
    msg.setDestination(48459U);
    msg.setDestinationEntity(55U);
    msg.op = 217U;
    msg.lat = 0.15871962427673525;
    msg.lon = 0.8712314719732309;
    msg.height = 0.9959051289683656;
    msg.depth = 0.5451110166617853;
    msg.alt = 0.4476377068311772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.21761303431572532);
    msg.setSource(39016U);
    msg.setSourceEntity(26U);
    msg.setDestination(26068U);
    msg.setDestinationEntity(178U);
    msg.op = 94U;
    msg.lat = 0.44516286059720567;
    msg.lon = 0.271833544849985;
    msg.height = 0.15419684520881116;
    msg.depth = 0.39006708274315927;
    msg.alt = 0.7847494151859579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.3964015612498295);
    msg.setSource(61176U);
    msg.setSourceEntity(117U);
    msg.setDestination(60031U);
    msg.setDestinationEntity(245U);
    msg.op = 166U;
    msg.lat = 0.17797305052961632;
    msg.lon = 0.6265180818063331;
    msg.height = 0.8172351894816041;
    msg.depth = 0.9343240427216487;
    msg.alt = 0.7305005573255878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.17538490077900248);
    msg.setSource(35433U);
    msg.setSourceEntity(48U);
    msg.setDestination(24337U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.06177029192928485;
    msg.speed = 0.9098112686691814;
    msg.turbulence = 0.38662926902820827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.1835582372254243);
    msg.setSource(21528U);
    msg.setSourceEntity(196U);
    msg.setDestination(28507U);
    msg.setDestinationEntity(75U);
    msg.direction = 0.22763988328574403;
    msg.speed = 0.08059908198709709;
    msg.turbulence = 0.3655276767647927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.6217591221955941);
    msg.setSource(35918U);
    msg.setSourceEntity(43U);
    msg.setDestination(27126U);
    msg.setDestinationEntity(32U);
    msg.direction = 0.5137651872500607;
    msg.speed = 0.20792957060698236;
    msg.turbulence = 0.1578762112090566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.4783512296210317);
    msg.setSource(34863U);
    msg.setSourceEntity(104U);
    msg.setDestination(12625U);
    msg.setDestinationEntity(142U);
    msg.msg_type.assign("RWLFCMTANSVSFLGYTWEDDTGOOALBRACZLXHQTBXFWJALMDDRDXXPPCXHHMLZEWRBJHQIGWPDURQQVUKELRZLRSYTVTJCXE");
    msg.sensor_class.assign("ZGKIEJJSKQS");
    msg.mmsi.assign("OSYOGEIULBXQXXYPCNUOGVOULQKAPJPORONZVDUYABTCUPQNHLPYCHSZTNQIKLVTMYPNBZRKOLDZWQFBCFCEFSMZ");
    msg.callsign.assign("FWSXYSDXQNPWESWTMKRDCIWAXZVWFIRCQAVLHRPCXSXKXOOBBVWYUIETMTSRJTZBBTHDZQZNGOXYQHHOATPLKNBXXUKZJAHPRDGFWIZCRZBOBGAEVHJQGGGOADIYUYNHFB");
    msg.name.assign("VAEPDODDKTIJPENWBISKLIBGCFTMCSBBYAFRFLNJHQOVAQSQFAWHINKKLRGEUMGNZJTLPRIXFBMFADCUDBNEQRGJPUEWGYYOZHVEXHDRWDGGOWZPYVNTKZCYTZNEOVIUUJFYBSPLQXHJQTYTXAMYUJIEHSMJNCNOKIRPEDZPLSFABZRZTOTSSGSHQMCQRLGCLMUCGUEWXPRHBAQCZDAUOBMPY");
    msg.nav_status = 211U;
    msg.type_and_cargo = 218U;
    msg.lat = 0.037831832270208365;
    msg.lon = 0.17439119380936863;
    msg.course = 0.6527027503112646;
    msg.speed = 0.40406048167515074;
    msg.dist = 0.5945016052704368;
    msg.a = 0.22919248753933052;
    msg.b = 0.7700963022963113;
    msg.c = 0.6151327300568256;
    msg.d = 0.13780099492699704;
    msg.draught = 0.33790734826549584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.9243505978120616);
    msg.setSource(19784U);
    msg.setSourceEntity(25U);
    msg.setDestination(44043U);
    msg.setDestinationEntity(0U);
    msg.msg_type.assign("UGAYRGPFMIRXUVUGMOZMHGZULBXGSSHDZIDYVJDVMNACFAMFWQRFJNXTQFLDJVIGWDZSNGBNNCVKRBLFX");
    msg.sensor_class.assign("DZAOQEOCXEZBYNNGPZGKKIQDWVXFFQSGPRTBDVOXKVZNSWVHLTIXQRRWMZQUADYPUVUCBWLSLEMNYBFIJTEUXNUSFVHPUBOCAMWAWREOTNAMXORYFHQDEBKQKGBAMJLITQMPZIBHTXDWPFGHEITMTZNYTXFYTZHRJMVZFPPCHLRYKUDUYIJSBULACPSVFSCJILCEIMBPDRGNKJDYNRLQAOGJ");
    msg.mmsi.assign("NOZDJQNANHUGSQWSHJRGXRLLKJREHZBTGBKUYDUMUWKPXKTOTZXTJHZDTVTNEJRYMXIHWTFGGDCESOVWJKJPOGPEYZ");
    msg.callsign.assign("DXVWRXPUKQEHLXBHCHXFJUHOSTKRDWQPKSGYDFZYQPJPWAXKENVHLXOZYZSKDMEFDRROCJARLUFLMJTQJEGCPQWWNGLAOGADMYOVEQCRAMTBZKMGIAIGJCANVPHFYDXLNWQEPUCIAJZEKCZPAZYRXBYTIZBQFVCNFLTQYMRZSUPGXLJNLSANEUNLOIDWEUKSUDEGFBHMMYD");
    msg.name.assign("YWTCFAXVJTZXBMVZXDLOMFMCFWULYUGRYMVQAUEWEYECDLTCPQJYTIWSOBHGVRNSRTGZEGCRMG");
    msg.nav_status = 11U;
    msg.type_and_cargo = 162U;
    msg.lat = 0.38947043495967293;
    msg.lon = 0.6821004119508972;
    msg.course = 0.43959280547573143;
    msg.speed = 0.12041669169121771;
    msg.dist = 0.24842427838568693;
    msg.a = 0.7437264842216914;
    msg.b = 0.13597791201085785;
    msg.c = 0.2387945151829426;
    msg.d = 0.21308866116512004;
    msg.draught = 0.47308199698918196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.7905392510695892);
    msg.setSource(44438U);
    msg.setSourceEntity(98U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(144U);
    msg.msg_type.assign("MSBFIGMCIAWIVOWQIYAIEHWZZHPHXNNSQAYWKPPNRLEDBQDPVOXOBXRODMZJLYKZJXHBOYIVBHQECMGLRPJTJGDIQVVCYOAKEAHYWMYECWHDTUSZSNPEFNJALJKZTKSLJOKMUOFSOHWXIZZGLUTHFLDQXBKYRTJRQUVDCCULXLBCNMTERSDNJIXFQGMEPWVZAGFIKGFKTVOSXYFZWPJNNRDVU");
    msg.sensor_class.assign("ZVAZPTBWTLVWHTLJYGSYQZFCZIHVORBCWFGXHCELTMAVQZDDDSSMLFAJALTECHOBAXASOLYVZNDKHKMDRQGPLPMIEHCQICBGWXJFRHKHOOBIGORAKMOMYTCBWMMIFBMKNDDRBKFXKBUNUEXJKSYKEURISTEQXHKQQENTFUJIWJNUJPXJNNSZUSQMRLYTZDWWOPYVHGFYUESSWFDZXPCQYLPGOURRFZJRVXGT");
    msg.mmsi.assign("VOYZECFMOTZRTWSRBJBNANPCRDCQNNRPBOFSNWXUKFLDAIINBVMYAAQZPVIHCOHJSEBMMHBLDCXAJIKRKHXWYSPBWDZLEGKBJUMORPMJZBCFVXULJTGEDRDGGXTGSIYEYNZWIKUEYTKDVEAXUHSIOGIZYXHDOLJGAJEWULOQHQPKFSMTWHGAHCLWUVPVFGOQJNVDZMYVS");
    msg.callsign.assign("RKXNQDINGZCPMXSOKGTYSUHIVZGSTHESPEJREQKZMFIPQPRPHWLKLWJUIBTHMQTYQFAWNBBISBZMHBMGDVEYLDMXH");
    msg.name.assign("MHLJGUSFRYYIWUFRIFFVFBYBJURBTEMALSTCEPIPSBBOPDWAIJGOCYHZRDDPZIVXGTIYFBRYDTOGDTFEJXECJRANMESOLQKLGOYKDIJSDIZSPNOIXLEQLQLHPHPHZIBZJNAXCBMNOCURTDNXKRKMVWVMTATVLAWUQXSHNYXJVRHMPNBYZZDNDZAWVQQUAZSCVZUGKXWFCFOKWHQCKKEJLUK");
    msg.nav_status = 43U;
    msg.type_and_cargo = 24U;
    msg.lat = 0.34944599951989264;
    msg.lon = 0.22779693257535083;
    msg.course = 0.8810418978218341;
    msg.speed = 0.6484083098594711;
    msg.dist = 0.9435663665487912;
    msg.a = 0.39093401631285785;
    msg.b = 0.6130911072562426;
    msg.c = 0.8724696625354471;
    msg.d = 0.27568994949775827;
    msg.draught = 0.5708327718189748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.18752306620395087);
    msg.setSource(32578U);
    msg.setSourceEntity(197U);
    msg.setDestination(805U);
    msg.setDestinationEntity(19U);
    msg.depth_at_loc.assign("OQBBDVOSROIPDIKMYFANKAAEFRRWSUZQFLGXFAIEBKSCDTZQU");
    msg.danger.assign("IZLNKBLUBUEVFDVJSSCWHTOBODHDQRKXUNQKJKDRWTMEFJYMYLLZMSRDCPLIHGILLWDUWMQANRFLUUPZGQAXTAZMXAQYICBRJIWGDMPPJGRKCHUIYXHOGZMVKCPYPCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.29435521343123283);
    msg.setSource(19942U);
    msg.setSourceEntity(252U);
    msg.setDestination(46926U);
    msg.setDestinationEntity(9U);
    msg.depth_at_loc.assign("GXCWXZIGQBVZWTYLIVADUPMAEENCTDQOPHDINLLKMGNYDADDUAVPGGBAHXKRULLOFVRCKVOTDBTG");
    msg.danger.assign("NNOXNYMWVTLVUWLJFTLNHZCSVIPKNIJVWURDBFKFNKSWEYDOYSMWHTIGVWAHTNLTIYFGSKGOXMUWDVDGLXSIYKZFTKGYIRGEQSSGXLVMARCRCDOONRAMDJJJQOQYQLYDOUCVUEZGEGQDDHQZBCHBLCSIMQVQBACKMAPTPPPMRBFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.07833478268796001);
    msg.setSource(51460U);
    msg.setSourceEntity(109U);
    msg.setDestination(2549U);
    msg.setDestinationEntity(133U);
    msg.depth_at_loc.assign("HPTVXJHWQEZBZJGQXNRHKITFXNOIATYXNGURAGCUQVMJHKCPTRLBAPDKTVPBFSAPQBZYUUVQQRETXIGCDCRXYPXEOHOZMEYFZCWESOJNRTYMIIAWWFMEGYTMNYSRPQDADBFMSDENNPUQBLSKSOKRADLNTJVOBGKIGOAOHXGWUCWIFMTLOHJPVXBLDUKCCKHZRGEZUQSYXLYBYWQKNJVSJFLDCFJVBILAESMWWVNFZJFHVPZGHIDUISMULRZ");
    msg.danger.assign("UFMKJULDVIGOZYEPCVTZPWFAVTARQEFEZXCDYUVYPAKAIHHEHMOQDQOHLFNHXNZWNWBCEAWXDPMSZPJDKOZKSKUTYMXWYLRJBITFGCTFDZQDWOOAGGXUEHCMXLQNSIBVYWOOANNXCFNWNGGASVAQVTEJRGUBMVLELPKXDSJRZDBKNRMRHYATGQITJSKOLGSRIFBJCRZQIIYKUMJMIPTPXBLGBHLLCYUSBCMXUJRPKEBVZHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.6702200084616786);
    msg.setSource(60910U);
    msg.setSourceEntity(17U);
    msg.setDestination(6474U);
    msg.setDestinationEntity(5U);
    msg.time = 0.4696726037134974;
    msg.x = 0.5804756755832787;
    msg.y = 0.3855518280975393;
    msg.z = 0.36331271778793517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.9069717545723941);
    msg.setSource(59707U);
    msg.setSourceEntity(54U);
    msg.setDestination(11277U);
    msg.setDestinationEntity(217U);
    msg.time = 0.35651782079133987;
    msg.x = 0.8268094129874921;
    msg.y = 0.5041865758828074;
    msg.z = 0.645031897918612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.8264300967166096);
    msg.setSource(16876U);
    msg.setSourceEntity(36U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(241U);
    msg.time = 0.1421477397564639;
    msg.x = 0.049308179804802066;
    msg.y = 0.30518108093642726;
    msg.z = 0.4582039907794878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.8398741260054089);
    msg.setSource(46304U);
    msg.setSourceEntity(213U);
    msg.setDestination(19814U);
    msg.setDestinationEntity(111U);
    msg.nbeams = 203U;
    msg.ncells = 202U;
    msg.coord_sys = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.10119580563347952);
    msg.setSource(49738U);
    msg.setSourceEntity(45U);
    msg.setDestination(17472U);
    msg.setDestinationEntity(173U);
    msg.nbeams = 130U;
    msg.ncells = 174U;
    msg.coord_sys = 86U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8335301395696899;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.5912099357020458);
    msg.setSource(21137U);
    msg.setSourceEntity(88U);
    msg.setDestination(35025U);
    msg.setDestinationEntity(181U);
    msg.nbeams = 151U;
    msg.ncells = 248U;
    msg.coord_sys = 20U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.1317874713919054;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.35097075475156203);
    msg.setSource(21296U);
    msg.setSourceEntity(226U);
    msg.setDestination(6939U);
    msg.setDestinationEntity(27U);
    msg.cell_position = 0.6195269698232192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.5618556785144438);
    msg.setSource(30672U);
    msg.setSourceEntity(170U);
    msg.setDestination(40595U);
    msg.setDestinationEntity(22U);
    msg.cell_position = 0.22336540569316887;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.27993132238271823;
    tmp_msg_0.amp = 0.2957360306237842;
    tmp_msg_0.cor = 190U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.11784779606205453);
    msg.setSource(12260U);
    msg.setSourceEntity(72U);
    msg.setDestination(22786U);
    msg.setDestinationEntity(46U);
    msg.cell_position = 0.28739087602321933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.5888315163984694);
    msg.setSource(15360U);
    msg.setSourceEntity(121U);
    msg.setDestination(36457U);
    msg.setDestinationEntity(102U);
    msg.vel = 0.5114598831157219;
    msg.amp = 0.39767639390157583;
    msg.cor = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.1453483876064695);
    msg.setSource(59163U);
    msg.setSourceEntity(224U);
    msg.setDestination(40121U);
    msg.setDestinationEntity(56U);
    msg.vel = 0.3156985103467983;
    msg.amp = 0.25698520634207467;
    msg.cor = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.5586055518572601);
    msg.setSource(38801U);
    msg.setSourceEntity(177U);
    msg.setDestination(38143U);
    msg.setDestinationEntity(142U);
    msg.vel = 0.16101505706932862;
    msg.amp = 0.5735655968409586;
    msg.cor = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.8508348512870904);
    msg.setSource(32841U);
    msg.setSourceEntity(52U);
    msg.setDestination(10392U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5137220422477391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.40402038637977344);
    msg.setSource(54056U);
    msg.setSourceEntity(167U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(229U);
    msg.value = 0.5085149574257966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.8751293808188993);
    msg.setSource(47971U);
    msg.setSourceEntity(143U);
    msg.setDestination(46550U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9864933480001762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.3803282222536486);
    msg.setSource(63394U);
    msg.setSourceEntity(48U);
    msg.setDestination(32963U);
    msg.setDestinationEntity(107U);
    msg.sig_wave_height_hm0 = 0.015020510833365641;
    msg.wave_peak_direction = 0.9755857913369644;
    msg.wave_peak_period = 0.502354255128491;
    msg.wave_height_wind_hm0 = 0.22754109537817424;
    msg.wave_height_swell_hm0 = 0.3233417668291868;
    msg.wave_peak_period_wind = 0.5805736486857247;
    msg.wave_peak_period_swell = 0.7824077395104346;
    msg.wave_peak_direction_wind = 0.3462762697631153;
    msg.wave_peak_direction_swell = 0.8837339855229347;
    msg.wave_mean_direction = 0.11495396943993752;
    msg.wave_mean_period_tm02 = 0.23170274291386095;
    msg.wave_height_hmax = 0.6113930680712572;
    msg.wave_height_crest = 0.13446106998867768;
    msg.wave_height_trough = 0.2494733766979692;
    msg.wave_period_tmax = 0.15118558814407468;
    msg.wave_period_tz = 0.03583695462858971;
    msg.significant_wave_height_h1_3 = 0.6856251533930063;
    msg.mean_spreading_angle = 0.578227266780134;
    msg.first_order_spread = 0.27444751958776825;
    msg.long_crestedness_parameters = 0.5411133484684081;
    msg.heading = 0.4241674867765629;
    msg.pitch = 0.17867985657027763;
    msg.roll = 0.587554965057092;
    msg.external_heading = 0.15467277091205134;
    msg.stdev_heading = 0.39143858765944706;
    msg.stdev_pitch = 0.4637244366820997;
    msg.stdev_roll = 0.5223789990413231;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.30328583369641526);
    msg.setSource(42974U);
    msg.setSourceEntity(60U);
    msg.setDestination(14545U);
    msg.setDestinationEntity(103U);
    msg.sig_wave_height_hm0 = 0.9338186205932508;
    msg.wave_peak_direction = 0.555606761975399;
    msg.wave_peak_period = 0.22713068947741255;
    msg.wave_height_wind_hm0 = 0.8309931476808646;
    msg.wave_height_swell_hm0 = 0.436071823171833;
    msg.wave_peak_period_wind = 0.41557738319988535;
    msg.wave_peak_period_swell = 0.9307686742443065;
    msg.wave_peak_direction_wind = 0.34793740581263766;
    msg.wave_peak_direction_swell = 0.43351441820712877;
    msg.wave_mean_direction = 0.5692167202936128;
    msg.wave_mean_period_tm02 = 0.1727448865829887;
    msg.wave_height_hmax = 0.04066045615529257;
    msg.wave_height_crest = 0.2074958437495369;
    msg.wave_height_trough = 0.0917831753936521;
    msg.wave_period_tmax = 0.17291036154280948;
    msg.wave_period_tz = 0.12484975393477793;
    msg.significant_wave_height_h1_3 = 0.17332738086817778;
    msg.mean_spreading_angle = 0.18313010872293634;
    msg.first_order_spread = 0.4827108382707853;
    msg.long_crestedness_parameters = 0.759430260884084;
    msg.heading = 0.27025340001040654;
    msg.pitch = 0.8906770737068171;
    msg.roll = 0.30473218738318353;
    msg.external_heading = 0.8202114068618281;
    msg.stdev_heading = 0.8369421830839711;
    msg.stdev_pitch = 0.34343126909965394;
    msg.stdev_roll = 0.6027472402942012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.7614779011376491);
    msg.setSource(20588U);
    msg.setSourceEntity(226U);
    msg.setDestination(31839U);
    msg.setDestinationEntity(214U);
    msg.sig_wave_height_hm0 = 0.442496072936733;
    msg.wave_peak_direction = 0.5844253967297318;
    msg.wave_peak_period = 0.17905042301950325;
    msg.wave_height_wind_hm0 = 0.5373565521634633;
    msg.wave_height_swell_hm0 = 0.0782655538718664;
    msg.wave_peak_period_wind = 0.8221922470397324;
    msg.wave_peak_period_swell = 0.8842462156832629;
    msg.wave_peak_direction_wind = 0.8150960801385899;
    msg.wave_peak_direction_swell = 0.27265293900793486;
    msg.wave_mean_direction = 0.6305648379438786;
    msg.wave_mean_period_tm02 = 0.8888567117429071;
    msg.wave_height_hmax = 0.10418792973171498;
    msg.wave_height_crest = 0.2690748537862495;
    msg.wave_height_trough = 0.0943669441015954;
    msg.wave_period_tmax = 0.8500416545502762;
    msg.wave_period_tz = 0.2631282838307707;
    msg.significant_wave_height_h1_3 = 0.211962568280887;
    msg.mean_spreading_angle = 0.4111313476511711;
    msg.first_order_spread = 0.5485989967457845;
    msg.long_crestedness_parameters = 0.8639050992209718;
    msg.heading = 0.3035843201081132;
    msg.pitch = 0.8473169287414767;
    msg.roll = 0.21697592683765043;
    msg.external_heading = 0.08744337076372144;
    msg.stdev_heading = 0.03700289730907358;
    msg.stdev_pitch = 0.43463942866181793;
    msg.stdev_roll = 0.7525005054182398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.012523182546264833);
    msg.setSource(44738U);
    msg.setSourceEntity(190U);
    msg.setDestination(25565U);
    msg.setDestinationEntity(175U);
    msg.name.assign("CUFYOEIAJHCJYIHIREABERWXNCPVVHWOEWPKFGLXJBOPEOXPOUMNNTZKTQECTDCLNCPUNSDQJNWMKFZSNMRCQWIWGTUBFUYDAVZQYHTQQBRQG");
    msg.value = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.17072321054279793);
    msg.setSource(41885U);
    msg.setSourceEntity(3U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(151U);
    msg.name.assign("BBIMOTUVSPINKJTDPZTWANHYNETLQCCYFICELHRCUFTMASXXVML");
    msg.value = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.9145622676782442);
    msg.setSource(62956U);
    msg.setSourceEntity(182U);
    msg.setDestination(60618U);
    msg.setDestinationEntity(173U);
    msg.name.assign("WSROEAPJSRUUOCANEHTNOUIZFJNWDVETQUFVBTUWDOUNAHNWRJIFMOSHXXYMSFBIMEYZUDJFBXKMCGSEKTNZHFKIGGPMXWLEJLBVDQZMCZGDRLLBOTZUNHVEQHDMDSQLHYPVDUBIWRJYSLAVKBBZTVLCPPMZOOQTYCGHWAGWMHZFCGKQYNYVAUXXPOKQJKARIOQSXGCYCEJADXRRERLWRXXPYBZWFCHLDNLAMFYSB");
    msg.value = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.19236161736813806);
    msg.setSource(19140U);
    msg.setSourceEntity(6U);
    msg.setDestination(38995U);
    msg.setDestinationEntity(107U);
    msg.name.assign("YMYYEXRGKTSQLVTJYRRWGWUHGDZAEXFPACXELLCASDUMCOQSFYGICUZMZFPVFXBPROXQHEBFJBGUAJEBIWGGYSFPBVWEKJHIVCTUTHACDNSZDHLJOXNVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.668497792885919);
    msg.setSource(51358U);
    msg.setSourceEntity(41U);
    msg.setDestination(1964U);
    msg.setDestinationEntity(7U);
    msg.name.assign("CVDXPVHCHYSDSGKRXFMMCSUOPPLHEZCJYOKKICNWQVAVLKRNGYCSNETEKQXLAXUZNQJTOZFAPBTXVIWLJEUREDSLPEGKRFWMSMWINIBJAATNDGAIJPYHTFRXMCYDWNOLOBRHPARZWATMGGAFWZFBLYFBQIDUBUZZJQXIDYLBKTVSKDNWOCROHZYUJJOYMSYVTPLBQGLIXFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.3284571745279743);
    msg.setSource(61358U);
    msg.setSourceEntity(138U);
    msg.setDestination(54655U);
    msg.setDestinationEntity(199U);
    msg.name.assign("KIUDYSZTSQMMKPSMAYOONVTCKAOEWTDSMWQIKJDLPNGWENBAKYLBCLIUPEZMDEOJGSUQBTBHXPIRVZGJWCAHWRUFYMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.2765102445730976);
    msg.setSource(48637U);
    msg.setSourceEntity(118U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(169U);
    msg.name.assign("GMEPXSWUFOVOFODACYPIZZBHGFMCJDLPRYMOKCCIYVFYDZOQTZKSNWKCJYADESKGDATLANHMHPRXLSSJVGALYFHXADSMKKZYWMLXINGYAHTHFLCNKPWGRRIAWEIVWWYXRIWVHKQQXGBODSSUZNZCBUAUGRTQZZPVFEBQIHJMMNFJQEOQEGJEUUTBTJOWBOCVLENNYSQBFDRXIVHDPAUTMU");
    msg.value = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.2403232108246347);
    msg.setSource(36072U);
    msg.setSourceEntity(64U);
    msg.setDestination(56789U);
    msg.setDestinationEntity(1U);
    msg.name.assign("IZWQKWZIILCDDVBZFPHGTANVNDWROTUJCVSGSUYOUGSLSOKIMKYCUDYWZXVEXLWSRGWYIZIMHGCRACHVZUMEPYOPAZKKYWRYCSOLFLXYTFVPCFJEEOGLNNBOLMDTBGTPJCUXLCSXARMPUJQSESHITFHFIXEWGORVMSRUXGIQRBVKHDVDZXDNNTANVBJADQDPNBAQWPEFQXLUNFEPKAOMWJRQBQBHLJKHHTBZTMER");
    msg.value = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.08577179224991904);
    msg.setSource(40046U);
    msg.setSourceEntity(74U);
    msg.setDestination(49793U);
    msg.setDestinationEntity(214U);
    msg.name.assign("SMYDISOILVSHBWWIKQFMURUFNOAWFTUBYGNEVJPXPWODJLTSEYUTLUQGFHXILGBDJUWJTOSDPMOCJURXEBUCRXZZNHFKEXKPFHRGMLCTZIKXPMLJEKTOFNBMMITVAJFEKQDLDZNTXHZDLGOYMYZQRTLRNDUVACVQZWYQASXILPAWVYJKGANXISZVOECJQGHGRBHASBGTDOUVD");
    msg.value = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.14123386109284886);
    msg.setSource(2608U);
    msg.setSourceEntity(52U);
    msg.setDestination(9657U);
    msg.setDestinationEntity(94U);
    msg.value = 0.46056879393469974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.11027296132701048);
    msg.setSource(31608U);
    msg.setSourceEntity(173U);
    msg.setDestination(61911U);
    msg.setDestinationEntity(20U);
    msg.value = 0.647728849073963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.849000811720683);
    msg.setSource(51483U);
    msg.setSourceEntity(80U);
    msg.setDestination(47740U);
    msg.setDestinationEntity(83U);
    msg.value = 0.9802848802402646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6470462536871274);
    msg.setSource(48778U);
    msg.setSourceEntity(139U);
    msg.setDestination(44745U);
    msg.setDestinationEntity(174U);
    msg.value = 0.11459059770897018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6663180775090626);
    msg.setSource(32819U);
    msg.setSourceEntity(214U);
    msg.setDestination(44907U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5031269644397641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.33631407779766664);
    msg.setSource(9693U);
    msg.setSourceEntity(104U);
    msg.setDestination(41554U);
    msg.setDestinationEntity(115U);
    msg.value = 0.13318042802637176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.7375758463074031);
    msg.setSource(38977U);
    msg.setSourceEntity(107U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(166U);
    msg.value = 0.19115763051070778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.6019520674253044);
    msg.setSource(1176U);
    msg.setSourceEntity(59U);
    msg.setDestination(26910U);
    msg.setDestinationEntity(225U);
    msg.value = 0.20123358754467324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.4236151568423625);
    msg.setSource(62433U);
    msg.setSourceEntity(12U);
    msg.setDestination(43311U);
    msg.setDestinationEntity(32U);
    msg.value = 0.05263169037282189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.9709193434382879);
    msg.setSource(14016U);
    msg.setSourceEntity(219U);
    msg.setDestination(9066U);
    msg.setDestinationEntity(240U);
    msg.restriction = 106U;
    msg.reason.assign("LXIWHYTGXUVGCHDVTPEUXDWYIHRGICEEGSSRHEKUKDTEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.49551509278160943);
    msg.setSource(16264U);
    msg.setSourceEntity(173U);
    msg.setDestination(35498U);
    msg.setDestinationEntity(45U);
    msg.restriction = 170U;
    msg.reason.assign("ENDIZDSIWMSFKNVLJTOJBAPIVQDWFERQNNPZEITINOKFPGKUOABOVUYGLJDRKVSSWKZMOXCDIRXJVGRJMKLUWFIGXFFSTAYKLHYUYYHQOWCVYHNWETIUBBRLCHWTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.42508188422034354);
    msg.setSource(41525U);
    msg.setSourceEntity(87U);
    msg.setDestination(55622U);
    msg.setDestinationEntity(163U);
    msg.restriction = 199U;
    msg.reason.assign("PEZUXVSPZTJPNJSBCSEFJEKGXTRSZYALOQBJBYNGVOCIRGVDWECOTVUOVLDDALQNFDGVQNDLIORJKWDMHTPJPSISCOWWVOAGGYRXNYHFWPFYIAMLQZZKJZLFIUXJMBCWEURANQBEEKKCCMZXRBHUDAYDLJXVXMCDMKSTGHMBNADQTANSMXOOLWWMIVGUUCPBAFEETWHNFELYKQZFQGTQGIKRIHBJUVPTFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.21987388847139788);
    msg.setSource(10071U);
    msg.setSourceEntity(197U);
    msg.setDestination(26373U);
    msg.setDestinationEntity(253U);
    msg.op = 51U;
    msg.request_id = 2224572174U;
    msg.entity_name.assign("RBRFXGVDOVKRCDOBKPLSHYJJWLCXGXWGHEQJCUJMRTAFTEDEWAFWWTJZSDKCCNOWOTIUQHKVNCGSUYUXYGNYNPKKDJCUOEYNMXBZWHBVLGXEYSAKPPZAMQRUHIQSURTDQXDLKQAPBPLUJTXNFMTABMRIDOCPZRJFLQEIYGVNKYZLDHHSQZLCKBBFLZNVTAIMBJQEIVMGRPNVWTFNUDC");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("NLZSTERZHDRWAHFVWMDEEQOUIONRRUTAWIQNXZMPOWYCPNXLDKBKUXGAKOILHAUYNGRUFWTLWJMRTIHLGFMEKQ");
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.3224720724980997);
    msg.setSource(56471U);
    msg.setSourceEntity(9U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(200U);
    msg.op = 147U;
    msg.request_id = 3114874764U;
    msg.entity_name.assign("YMIKIRETDZQBOBEBPYQBOTJEKYPMKVOGJAJUQWUOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.9147800755338372);
    msg.setSource(59095U);
    msg.setSourceEntity(196U);
    msg.setDestination(37725U);
    msg.setDestinationEntity(65U);
    msg.op = 51U;
    msg.request_id = 3240681539U;
    msg.entity_name.assign("YCGRDYUWPRHTWEFJMIHQXITKBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.8839796450442131);
    msg.setSource(37278U);
    msg.setSourceEntity(46U);
    msg.setDestination(40268U);
    msg.setDestinationEntity(165U);
    msg.name.assign("PQILXWYXPNBHCLMYUQZLELJTGREAWRZIAFUOTNSKBRZQGMKIDDWDNRMCOVUHATILAHZPGIIZUMGUFMENSADLWXXGQSJYEOWOXLDMTSEMYRKKLVKENZHNFGVCQCPCJETBVGPCWSKZOWREYJYTG");
    msg.type = 33U;
    msg.default_value.assign("AMFGSGCQWWIHHYJEZLWPSEYXFNCYQBRYNEASTIREEXCBBDZLKNVPJLCMMJNAXHMBOPPUQYTJEGXNNRIAGOFLOBTFTIWBHSFQIRZIALUHWBOUVLVOQGNJUQKFSWQKEKRQLVLXCOSPEIADFDQZZPAZHZSNWAJOTDLJNRGIYUDVVHHBCCDVBIRJCMUXUPXOVETUVFFFRBDTKUHKMTCKPVRSYMWOZRXKTDHPSJXADMJSKGAQY");
    msg.units.assign("RPNLTRXNNEBQIEHWYDFDJKBSMPZMYRLJGEFWEDPNQGWVIVGCBLDRZJNZIBSNAZUUTTHOHDXAUMYVYLYHLACPSFTRSRCCAOHQCDNIRLSFPYBAOQMMOZKFKSKUDVGGVPOXEBTVEWEBPBTUIQJPVBUAMCGXWUPMUKQJCGN");
    msg.description.assign("AWLEYTJUJCCSNKCIFUQBJSDDGZCMUNKHYQJYFZXKQOERFPKXQWLBGVJEVMDKSEDASYWESEUQHNNLMOPBOZLNBELAVIVALGHYQCWXOHRMVPZFKHUMUOQGXDVZZOAIPTJEWHSRQZFLFMLWCESXIFYUDOUQGDMLPEKY");
    msg.values_list.assign("KDPXDRWLWHTCEQFCACUAZFXJIDMSGHVPJWVWOHTYSXMMOHJXXWRYAQYMKTPWXGUEKVERBNESKBYRJYACQKFKBULZTDAWISNVLOTHCONUWXBMPVMTNCFAONZSJYBILMFKPGLQNDPHFQEQQTXOQONCDWSEKAYKPJUGYFASJPXLMIUOBNPCZGIVAIVUDHJRVLIZETIGYFHLRLZHEZUF");
    msg.min_value = 0.5761740802421943;
    msg.max_value = 0.7349772982361145;
    msg.list_min_size = 224U;
    msg.list_max_size = 131U;
    msg.visibility = 53U;
    msg.scope = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.7511710261046359);
    msg.setSource(16120U);
    msg.setSourceEntity(168U);
    msg.setDestination(20189U);
    msg.setDestinationEntity(233U);
    msg.name.assign("FANQEGRASEYBHATWDUNXISRSXHVNJJWLBJYEBNWTTUFLKTJQIZSMCVLKHCEVILPBPWRMRXCVDZMQVWQPDVEUJCCFYZHKUHTIZZVPMIWSWFQIUCQROYZSDLYPOWHEKRPEGAXLAYFMNEBOSOBTUDFPNGQXUJBAANGALTTATRLXJSYZYIRJMIOGENVWXKHCDOMNDHBKDRTGEGJLRDKBQHMOF");
    msg.type = 95U;
    msg.default_value.assign("WTFVNOBEAKJIHIUJRZKAMJXRDDLYZDQRDOUPECOGYCUQUYBEHFMBDNEXAICEWGCUTSZTVRBQNIVQKWCHANSGKRQCZNXMPQXUPWXSPBQTFIWZKYL");
    msg.units.assign("LISOCDYEBHFVJMACQTVFNSDMQQEOLBXJURKFXFGLGXBLZXPPVWNLOFSKOUWJPDGFCJTGBKMISZMHOBRFWSRDIQCXWTVDKUEORCPMCTZNIRRULLGMCVBNVQURRPONGEIIHENFWTINXZUGJEEKZPLDDDXUUAPHDYFVLZTJUPKWOFTSAVXSGRJSNEQNTGQSYYLAASAHHVHHQHAWWYPTMHRXBCJBZYAOKBIYKZEQKBNMGTIIVKZJEYUYYAJDCQPMWM");
    msg.description.assign("BQVKFDHGMPJCCXRKOLJLYGVPQTJFQHFZDUHPUFGWWWPVWRTENBMNWYCAEYSTHSZOLQXBIHYCZLROJKSZHFBTYSWZZOCJIWBODHCKNARPDGLMTFGQIVNVAVLFMLHRVGRJAZCNSCUKZOIPDSEIDVAFNRTVSMFLXAQFAWBPIIXOXNTXEU");
    msg.values_list.assign("OOYMTAFKESRQARHFCVIXPTFGQRZPIUOHBGNOCKFURIPSPMXZKCWDLBVZPCYLFQJDEVTMNJNFTXBWVFGUWDKVLOBMDBWBTXVFGTWVJSBPGSQWUCNISUKMLHYRLAAHKB");
    msg.min_value = 0.8716253497272344;
    msg.max_value = 0.5537500669323968;
    msg.list_min_size = 235U;
    msg.list_max_size = 179U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("ZSJWGHCXVIYCAPTFFCDYRNOXTFHWQZJKVQAFIKWGHMBNAYCATGJXXFRTGPRYBEQADHUIUBPMHUNIQLOANVKLXJCZJKTDYSSOQLWCGOTQNRDZLORBIKIEFLQKBOTJQACOXYRLHQMDYDNAMCDRFVJFSYLJLDYPNUCZDDGPHEZKTLME");
    tmp_msg_0.value.assign("QKIHMLNDHWASQCXGGNGDLCHNFFZFMCPGUTVVAEASTZHSTJGURTXLXLVEZARSUWWBBFUXCIJPLQZPIBWEUGCHWBLUTWWYNFGZRRZCVCYUPSJJKUPSOQKESWVMBQXMNZRDHOXXAOTETBDPNNQJUKYIFJAHHYPOBFIAPYPBCVYOKZMGLIHBROEYQYDEFKROMMKKGMRGIYDKVNWTXUIOTJQEJNQDCVAYSDQALMBAZFRCTDDRXNOM");
    tmp_msg_0.values_list.assign("THUBTAUEKGFVJIREOXMIHTTFEODISJLODZOZUDSADNDXKICBOZWZDMLCZMTXLRVGYBKVBPSQNKMPIVIAILZGOPYXIMFLMJJWNWQUVGAZYYRHSEJAZKAUJPJJYYWGDVSKBCDYBFQNFWZKIOWYEVSYQRHRGUFLSBSQKNHFRQLGCNZNOXPXTGHBATPRUXMSNSHURFXJMMVCWNJPGINPPCBLXCWVTKQXQQ");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 120U;
    msg.scope = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.0667456886540938);
    msg.setSource(56157U);
    msg.setSourceEntity(134U);
    msg.setDestination(15898U);
    msg.setDestinationEntity(127U);
    msg.name.assign("TGGAYEPXLEKSESUESVRZRFNZYIRYCFUILZOTHPBWFIUHQDPGYGIBNWACHVFKVINFJNCPHWONBNLRFUXSSQHRDATVTWOIJCJQCRXXOPWMSXKCHAQLTUSMLEQEKLEAXCJQZMYRYXABKVEVZNDAEKTSODJOOJUDVOUBXSXBKJWIEGMGCBIDHLPDYWZBRRJ");
    msg.type = 28U;
    msg.default_value.assign("NCERBWBAJZLWAXKVDNXZPVSJOFCOCDQEVXQKCGLJVGMZAGBMJUJTKVHKPUUBQXMAGAKBRPDOIBEQYHJULCOPMZMTMWCDNELYVWYNFCQCSDNS");
    msg.units.assign("ITQHWAPUZIKHQPGJTFWASUD");
    msg.description.assign("EKWLCJOJHCAUUYQPTXDHWSWRSGRJMZLPNKBYMWJGQJZEZGIMQOYUKWOFCVFRECMUGGJWZDLXLGXIEDMBPPWSLYYBOLDSUHVVIANMZITRRIQTTHDATCGLRQSLNNUMUXOASXRVVNFEXAFYOBAJNFOCQKGHFDKCZCZBPYOYLUJNJXDVCBNRMKBKNYISTPOKCAFHRGDIVAVXDMQZRXIUBEUZKFMYWBADSTSEQQXFNWHELAVOPPTEHHEFII");
    msg.values_list.assign("PHEFLFBYJFVGOUXUTGZCNPDNNVSMRVLZAHLOOHAWKAQWLGQPCIMZSYMBZDSTYBWFQBSEAWXJAXCTFERVOXKQROVPHTSYJQLYNJZNWIYCBVFLJWKODBPQOSGMGTULKLDCJIINXYPIEEUEHPJBRRYSBLWGXWAATJEHKZKQZIAKNCZNDKRHVCPUDDMNHPFMVGIQCSLSMWSZXEUDP");
    msg.min_value = 0.7691813981745257;
    msg.max_value = 0.43844719330481663;
    msg.list_min_size = 95U;
    msg.list_max_size = 107U;
    msg.visibility = 34U;
    msg.scope = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.9244153438794427);
    msg.setSource(41519U);
    msg.setSourceEntity(134U);
    msg.setDestination(62506U);
    msg.setDestinationEntity(4U);
    msg.param.assign("XVAMYVUTXCRCUDUJGSFPB");
    msg.value.assign("OWLIZSWZYIPRQAGTOEYCUNVVSCELSKBLQRRHVZAPERXMSSAKWTXUCCTUIVSFKDGKGNVZADYOHHTXXEORPKQFZJCDGLEVDLDUDIOWHICEWIMNLKMYAZDMBQHUNFQMWKJNPDTQPBBRGLYJVWIQTLLHNPAUHX");
    msg.values_list.assign("ZFSXQQCVVGOITTXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.0870188331620727);
    msg.setSource(29490U);
    msg.setSourceEntity(241U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(167U);
    msg.param.assign("DPPQDFVHFBNGJVBMDVKZTGXATGXOIXVFBCZRIVDABMULRJYQKSJRKZVHYNDJPQEAGLHLWAQWUUPJVGSIHRDSGNWYXDYKZYDEOTOBPSKHWTSUMQTLZKYKBMVPXRSOLFXLCQBQPKJZIMIMC");
    msg.value.assign("RDABSDQVXWKSRECSCCFSGDGYEWFXDOZFALRKZXYNJVMDQXDSKSFRPIYMDSWFJERCBVWDESKXJGCCHBSBMTNKIMPTFVMMRWETZYHWBZENIAKAUABALZBNWBKLIEOHDPXTHIMNDFLPCGIQULKUUTJW");
    msg.values_list.assign("UWAEZANPFIRPQUVJNOUZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.336608253617811);
    msg.setSource(35534U);
    msg.setSourceEntity(85U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(104U);
    msg.param.assign("CKFHUZHVCSYGJBZTQPIDSGQUSETIHXDPDWEXEOLAMNTCFRQPMCZBREKRHCLLXZTEFRDNAZXALJARNQZIWNPUMNKZEDVJKUUXDMYHFMATXUMHNRJAUELAFWEWOWUCGQOZMFKVRVBQMLIHDVJJICUXRG");
    msg.value.assign("KQKMTZTOOUMAMAJELDNNPHKNJAPYFQYFFIOXDCQTKPCVLEJXSTBNBAAWHWNGFQEUXBZFHYGFUPOFIYWBETWDBRQJZVSIVRBDKTMEPRWZQCNVIRPVOKALGGXQCICRUABLIKVCLESHMVCOLOXUSOLWISMKQDIHY");
    msg.values_list.assign("XJAGUSWHTSXJIHTPPKKEODMMBMCILMYXWVBFFWKECXRKAPQOFHJSOCPQEJYSTSCASBDIUEOVOFDMGKFSVMHFDLXEKPYYANASZFINUNAMZBJQGWGQCDCZXWBWNOPHJRGZUTJJBALWDWBCZZRGLVPIWKIBWUVXGFEUEQTOOATFUSHZZSNDTKNBPTCUQNEMCGRLAQNDQHIVVTYQLQBVPZLVKKMOEEJLTNURVXHRIYURRYF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.3459035622218858);
    msg.setSource(15223U);
    msg.setSourceEntity(96U);
    msg.setDestination(17993U);
    msg.setDestinationEntity(34U);
    msg.op = 118U;
    msg.version.assign("KQRVVZDFZJXPMKCIQBTDTNLARKILRIGRZHJOJSXOANDSQDJUUVSZTQMUCZHIKRCTJWMAFLJPBQXQUBKGSCGTYUBPALRXEVMLKHOELBZGLEWZKNAOULCXNNNWUSIXHJTVSQTFFVGLFFGMZVSVPHHCNTEEEPESMDYYRPQFQYDKPTCOKICRASYVHIOBHDWF");
    msg.description.assign("GKQWJKIJOIVDHBSEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.5587000887925475);
    msg.setSource(4529U);
    msg.setSourceEntity(88U);
    msg.setDestination(60064U);
    msg.setDestinationEntity(187U);
    msg.op = 132U;
    msg.version.assign("IHTNPKZALLLNMVXWCOOQZYCYKFODFIZEQSPUINZHEVQIDBZWOLKAAVHDXUCSBCLCZEATZWFBHBJSBBQZPNWEWTNNXMJOVKPPSFDKLDVNWQRORNHGKTZYGOFTLRVXCSJIPRSVQNYIMWDYVIQYAMPHMUXHSVMSAPQRYKEUJUDJPBVCIEUBELJMFIGAAKRDQTOBRKLSGTEJMBJXLGAFCGXURRKTHFFPTSARXXY");
    msg.description.assign("OTJVCTTBCJYRZMMMPMQUJPVHYNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.325370247069392);
    msg.setSource(38191U);
    msg.setSourceEntity(90U);
    msg.setDestination(15437U);
    msg.setDestinationEntity(215U);
    msg.op = 250U;
    msg.version.assign("LBAUFTUBYHEUDZIAKQIVBWJWDEWCRUSLKXAFFUUWNCZJXCVOYIXWREKPDVJPZTLQFHNIGUPDYRKQNGFISCZTYVLJMEWXVRYHQTLGIVMYLYFSBNMCPEFOMUGGKSKAHRLNIAWWPASCYQDZQOTUWDHNOQMXCLZCIBGWM");
    msg.description.assign("XTUBNCJYFIJDLVGYFOJHVCOGFAMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.5841444070740992);
    msg.setSource(53319U);
    msg.setSourceEntity(89U);
    msg.setDestination(37499U);
    msg.setDestinationEntity(163U);
    msg.value = 0.1675690629587252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.8323111810014978);
    msg.setSource(13376U);
    msg.setSourceEntity(192U);
    msg.setDestination(63522U);
    msg.setDestinationEntity(138U);
    msg.value = 0.8087051698519804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.877230079800748);
    msg.setSource(26724U);
    msg.setSourceEntity(165U);
    msg.setDestination(15403U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9013838008047287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.16015384009197098);
    msg.setSource(42005U);
    msg.setSourceEntity(35U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(82U);
    msg.value.assign("BXZJPZMLBTGUYNLINWGIFQYVCVOPQQARPQBXYVOGRYSHAAJXZSEORPUXEOSHZKERYPWTGUIADMTQKXSYVURKDAGIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.226109605231111);
    msg.setSource(38978U);
    msg.setSourceEntity(152U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(97U);
    msg.value.assign("VXLYWLUPSNMCTMUMRPHMRGLVUGQMKZMMFVVFRAQPEDSLKFSINIBUJIDEHRYUWOPWBEORXTWQUBAOITVFELSYHQBNDFZVJRFQTNOGKYTWBJRHCBTOPJTBHKDZYIVOSOFSNWAYCGWKMCKHNCVBPHYQNZADJYJCOCDZMSUFNIWFXADALDXRPBZJEXKQIZCPKLPJAGGADCQQMIHGNFXEZVZHEPHSEOWATLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.26201022697467413);
    msg.setSource(30411U);
    msg.setSourceEntity(14U);
    msg.setDestination(35233U);
    msg.setDestinationEntity(144U);
    msg.value.assign("MSZYBDBKJSMIHNRBOHECGDAEGEMIIQNOFENBORCWWTWGXTSWIWYQOHYVGPBNCFWPQANJJGYXLTXQJFDVVLFFYTPWHAOJRKUZKYXLUZGUMHRBLXEZMASLVJYUBUAETWMIGVVNUALOHYXCUPNDIWXFOABSOCSZUSFTKFKXSRTDFXNCIAQPGGZDSLQQVACKRMZJJHTLGFRTHHCEERVKCYIUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #2", msg == *msg_d);
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
