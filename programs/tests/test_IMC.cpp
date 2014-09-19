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
// IMC XML MD5: d7ca75a749b0543a5551e9bf5b0c8605                            *
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
    msg.setTimeStamp(0.2021721325581537);
    msg.setSource(49483U);
    msg.setSourceEntity(49U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(243U);
    msg.state = 161U;
    msg.flags = 116U;
    msg.description.assign("YZLMIPQAOSZXXUZULDYMQGVGRXETWZZQTVBWVSXWVFSFRHQMWSLJKPMDZV");

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
    msg.setTimeStamp(0.5079485998077924);
    msg.setSource(19410U);
    msg.setSourceEntity(108U);
    msg.setDestination(28385U);
    msg.setDestinationEntity(10U);
    msg.state = 9U;
    msg.flags = 107U;
    msg.description.assign("UUIDAOCUCHZKMUZBKHRGWJEGRNFAIXNNFSOZQVFIABTLSTEFDZDSSBYSDIENQLGERTNUWPQVAJSYRWSMXKZTIEDWCQPYFDKYXGQCKLPU");

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
    msg.setTimeStamp(0.10402194808966991);
    msg.setSource(18409U);
    msg.setSourceEntity(217U);
    msg.setDestination(27848U);
    msg.setDestinationEntity(50U);
    msg.state = 196U;
    msg.flags = 226U;
    msg.description.assign("LWXETHSHZYNWPUIQRRUZYSSRFXLHJLCYEIBDYXVRJYDXYVBSPKOKGPSTHMDXFVFDZADJQIGTBIYPGMUHMRMEZLCNDABAONNPAKWEKQTGWUKRLYZDWLSWXPOKNZCUSQCJCTZAPYOZEWMBUBRUGCEDZTSSLIJZCTOLBOHJXEAWDJMPAFPUSOIBHM");

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
    msg.setTimeStamp(0.14789361829931302);
    msg.setSource(36259U);
    msg.setSourceEntity(174U);
    msg.setDestination(39394U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.5366855811590362);
    msg.setSource(10040U);
    msg.setSourceEntity(57U);
    msg.setDestination(1998U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.6026092077533013);
    msg.setSource(3802U);
    msg.setSourceEntity(186U);
    msg.setDestination(10529U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.13930488474844194);
    msg.setSource(2633U);
    msg.setSourceEntity(246U);
    msg.setDestination(30586U);
    msg.setDestinationEntity(41U);
    msg.id = 243U;
    msg.label.assign("KRLACAYGKOVKNCKIPXIFVQURSXKUDDKXOTHZGVLVLNNNAJDTLNPAPYCQTSOYOORSFQVEPRUVHLBLIBIDBWHFXWHIVJWAOGEDJJFYPEJDCRRZMWFKGFOSJWZSETAHXBAMLRVCMLIWMIEJIMAXEGUNSNHUNXETRZSBDSXZWGMLBMHUUDHGBVERCMEBPAXYKYQCNCFODOQPTYLQKMTYOFPJWBIVGQJQQNUGGWMYUSTPFIECTXWZQPBAJSZKZ");
    msg.component.assign("ESBHAGTEKSFPOKXYHDWNJNLNQIPQFSATPFQGDTTQHK");
    msg.act_time = 3868U;
    msg.deact_time = 12904U;

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
    msg.setTimeStamp(0.6704233589240419);
    msg.setSource(7302U);
    msg.setSourceEntity(204U);
    msg.setDestination(26320U);
    msg.setDestinationEntity(176U);
    msg.id = 138U;
    msg.label.assign("QJOBEIGGPVIOYCBBKUPYFNZIWNWOEANSEJADJIMIEWMPBAGUPNDAIFRJEWTEMAQZKVAZQSXSYGKEXFZTAWYVDXLBUHOLMEPTQBYDUJUNOSYFPDQGXUTTKWGVYMJHLXVWZLNMZODZZCFNULPYUDFHTWHKC");
    msg.component.assign("FKEJIGGWNYYAVOSEGXPHUIKRCLIIKJTLZMEEPFCIOSSZTQCRVLYFJJVSZZXUJVEYSXAUWGTJCKQDBYGUHRFJNMXTNITMLVXLNAWXDTYDBSPXAJROVUKKCTKZAPLLPONDISOBIHBFPBNWYHYHLQORFGMWXWAVFBSCWCPUAGNNZZGLCBHDNKEQEIVQXEDPOSQQMBJEJQRCGADW");
    msg.act_time = 53042U;
    msg.deact_time = 17306U;

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
    msg.setTimeStamp(0.3472605025919083);
    msg.setSource(49611U);
    msg.setSourceEntity(219U);
    msg.setDestination(47940U);
    msg.setDestinationEntity(110U);
    msg.id = 211U;
    msg.label.assign("MBVNOSOPYUXCHXDTUJTCLHPFKAMGODXHYUQMOFWHUAZNJSBQCTSBVXNJMEDHEONFGDWLYKALWVRCGIRIJILQXDVPTWIGAQZYPLWQKIYHQLOKLNKJPJUSVNBEZWFISYNXFSFOHJGPJRHRIKEGEBTMBDCRTWBAWXDCRFIOGAOZRDZUMSNKGNDVQFEVHUOEVGFWAPLEFYXCZA");
    msg.component.assign("CNHPLVGNNJJCTPGWSTGCJXQZKXZTNHMYOJDEYCUQBPYKJMDLMBNJE");
    msg.act_time = 27288U;
    msg.deact_time = 34876U;

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
    msg.setTimeStamp(0.27135989239122593);
    msg.setSource(7865U);
    msg.setSourceEntity(180U);
    msg.setDestination(31459U);
    msg.setDestinationEntity(8U);
    msg.id = 69U;

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
    msg.setTimeStamp(0.7535805221255749);
    msg.setSource(24990U);
    msg.setSourceEntity(11U);
    msg.setDestination(65230U);
    msg.setDestinationEntity(215U);
    msg.id = 69U;

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
    msg.setTimeStamp(0.7972100761301925);
    msg.setSource(64373U);
    msg.setSourceEntity(210U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(138U);
    msg.id = 182U;

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
    msg.setTimeStamp(0.5734400901114948);
    msg.setSource(32905U);
    msg.setSourceEntity(185U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(60U);
    msg.op = 232U;
    msg.list.assign("QNJCSQARJJLPYOKEYOIXLOYQCHWDXPDMTNZGWTGNMPJLWJYKKVZKVTMKHRRIYGVFPAERHXKTZFUWGAD");

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
    msg.setTimeStamp(0.16085313407028823);
    msg.setSource(28631U);
    msg.setSourceEntity(251U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(105U);
    msg.op = 22U;
    msg.list.assign("YXNMUDLDLBMEEAEYFCKJULVZDFI");

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
    msg.setTimeStamp(0.954498269952851);
    msg.setSource(61939U);
    msg.setSourceEntity(172U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(126U);
    msg.op = 58U;
    msg.list.assign("AVJHNGIWTOOIXUKUYRGYETOWMPUZREGATASJSVMZJHDRIPTZXWYQUFYYCDNSXFQHCVWPLBVCPQEOJCOJEXZZCRIWBDMSSPAPXPMPLFMHONLTVXFYLVLGYEAZIVMUWMHQYCHCFKRGEEYWJHGBCFBD");

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
    msg.setTimeStamp(0.9975650514922858);
    msg.setSource(65427U);
    msg.setSourceEntity(126U);
    msg.setDestination(9590U);
    msg.setDestinationEntity(186U);
    msg.value = 86U;

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
    msg.setTimeStamp(0.04150054802056491);
    msg.setSource(56344U);
    msg.setSourceEntity(95U);
    msg.setDestination(17214U);
    msg.setDestinationEntity(136U);
    msg.value = 119U;

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
    msg.setTimeStamp(0.5356379314143072);
    msg.setSource(16216U);
    msg.setSourceEntity(30U);
    msg.setDestination(2081U);
    msg.setDestinationEntity(193U);
    msg.value = 252U;

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
    msg.setTimeStamp(0.012109618866464222);
    msg.setSource(1911U);
    msg.setSourceEntity(61U);
    msg.setDestination(38538U);
    msg.setDestinationEntity(120U);
    msg.consumer.assign("VVRZVWBOCSRMAPIOZYDAVTLQEZXJDGMNBTKULLFNOAKFHCWTUDEKLMWQGPFQCVQUGZDACJDJWRDVYNSMEJCUMNMIMMQIMFROYPDUKVTHJIABUZXQPVCIYWWHR");
    msg.message_id = 23853U;

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
    msg.setTimeStamp(0.36235612200923595);
    msg.setSource(13120U);
    msg.setSourceEntity(187U);
    msg.setDestination(32151U);
    msg.setDestinationEntity(95U);
    msg.consumer.assign("AZTLXIBIJOQKSNHZGDMKEYBQAJPFEVDOYPITUMMOWCLCDGNVUBYTLBTNEQJKLVSIZODKFGUNUJEFMCAYXIHKCSSNVDOLYLAJHHAIUMCGFLOXZWFBRAWJTXULJGAFPUXTQRNKZZISTDZEUPBBWNOVJDZUHQAGDXDVHXREJGERKIYJM");
    msg.message_id = 52753U;

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
    msg.setTimeStamp(0.34784006616887664);
    msg.setSource(26140U);
    msg.setSourceEntity(31U);
    msg.setDestination(25408U);
    msg.setDestinationEntity(165U);
    msg.consumer.assign("JLNFTMSLPOCARIAOSIFBPTRVDSGYYIHCFOQKYGKTVIWVHXTENCZWVKMRWBPEOXKQOFZSABDIORFVXMHFRTNNAPDMWUUSEODRQKJCEBYKXIVMOTEEDBIPKMJZSRC");
    msg.message_id = 27413U;

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
    msg.setTimeStamp(0.7702056467676776);
    msg.setSource(27957U);
    msg.setSourceEntity(232U);
    msg.setDestination(17920U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.7510507222154109);
    msg.setSource(10439U);
    msg.setSourceEntity(203U);
    msg.setDestination(3351U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.989765628306549);
    msg.setSource(27747U);
    msg.setSourceEntity(40U);
    msg.setDestination(58116U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.48166707522281593);
    msg.setSource(18453U);
    msg.setSourceEntity(37U);
    msg.setDestination(37190U);
    msg.setDestinationEntity(76U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.6552774686516214);
    msg.setSource(41173U);
    msg.setSourceEntity(157U);
    msg.setDestination(38069U);
    msg.setDestinationEntity(18U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.10757175237731897);
    msg.setSource(5407U);
    msg.setSourceEntity(57U);
    msg.setDestination(49533U);
    msg.setDestinationEntity(148U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.8335461397206597);
    msg.setSource(28458U);
    msg.setSourceEntity(183U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(192U);
    msg.total_steps = 30U;
    msg.step_number = 195U;
    msg.step.assign("LRDGFRYSFWYYPYBAMICQPDSAKTVUZUMFZMZLEOLMPWAOVABHIVAQRGSSENXOBWCWUOZDIGVBCKZJSIDWSCVEXQE");
    msg.flags = 208U;

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
    msg.setTimeStamp(0.40938616435758424);
    msg.setSource(35075U);
    msg.setSourceEntity(228U);
    msg.setDestination(14364U);
    msg.setDestinationEntity(201U);
    msg.total_steps = 171U;
    msg.step_number = 20U;
    msg.step.assign("ABCLTYJQPHNCRENVMJMJORFNTCIUOSAVZWMALYYCLQPKLRNFNQLSVSIIVHZELDKVWRQJQZFYIFBLIOKOUXISXEGXNDGEMAGITREESFTWBXDJVXHQIAEAWKWCJMVBUCSGPSZNZCBTFWBOPMYTXPGJXPZWTYJDCLEKDULPHUIGUKOWXROSBQGELPHQMTZYGVUIHN");
    msg.flags = 202U;

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
    msg.setTimeStamp(0.8083720740966711);
    msg.setSource(24830U);
    msg.setSourceEntity(83U);
    msg.setDestination(54896U);
    msg.setDestinationEntity(183U);
    msg.total_steps = 47U;
    msg.step_number = 106U;
    msg.step.assign("YCQOFVWAMXBLZBMWJTLPFEAKIPFCXFMYGAXVSHZCVKNKXRFFJXWZYIQJYNTZUFLTPBRDKSBWODCTLMQHTEYMZDKPLGRYWSGUBAKSSUJQEMDNRHCNCKENZPOSGUOVUOECMGPGBTDNUJQMGOOLJZIDARVSJOHNIBIPRVQNHIPSQZQRLUTWFINHHEJYHARJXMPIVEFVUQOIGYXPDEBDBWKLXZT");
    msg.flags = 251U;

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
    msg.setTimeStamp(0.12387662662982946);
    msg.setSource(59618U);
    msg.setSourceEntity(180U);
    msg.setDestination(58089U);
    msg.setDestinationEntity(208U);
    msg.state = 218U;
    msg.error.assign("ABWVTABESZBSHAXFCMYJFZYIPGPOHWOCJQIPDIWHWDOABDXTMPQNKFVGSDTIBGWVRYKXQQ");

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
    msg.setTimeStamp(0.3051587013153507);
    msg.setSource(53704U);
    msg.setSourceEntity(169U);
    msg.setDestination(30888U);
    msg.setDestinationEntity(30U);
    msg.state = 245U;
    msg.error.assign("TVYSSBPYGXFGSPHJOPLZIWDLELVMINHSKOPUEFNVFDCEEJXPKNASULVGYKFOELXHQYLVHIUYXAQETFSUXHMAMLJPHFKMZNSLTIWQQURVJNZFPODBKVRXZVA");

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
    msg.setTimeStamp(0.8661152083249765);
    msg.setSource(727U);
    msg.setSourceEntity(235U);
    msg.setDestination(60871U);
    msg.setDestinationEntity(220U);
    msg.state = 136U;
    msg.error.assign("DUOMLJTHEDTQVWINKWTOCSEGIOJKYXAJZGFSDBLQZMBHJTJXUQUSDLYXFAVPFLHJWORQZNAXCNCS");

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
    msg.setTimeStamp(0.9546026173155101);
    msg.setSource(50250U);
    msg.setSourceEntity(49U);
    msg.setDestination(62044U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.4563076652985424);
    msg.setSource(18996U);
    msg.setSourceEntity(96U);
    msg.setDestination(14219U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.8402780454032119);
    msg.setSource(52663U);
    msg.setSourceEntity(234U);
    msg.setDestination(58089U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.3926125015847255);
    msg.setSource(65079U);
    msg.setSourceEntity(249U);
    msg.setDestination(50410U);
    msg.setDestinationEntity(244U);
    msg.op = 192U;
    msg.speed_min = 0.9232417318420895;
    msg.speed_max = 0.18452494822408005;
    msg.long_accel = 0.8897233548129483;
    msg.alt_max_msl = 0.2769273673345344;
    msg.dive_fraction_max = 0.38563243566994754;
    msg.climb_fraction_max = 0.577320823200674;
    msg.bank_max = 0.15783606207457257;
    msg.p_max = 0.731491042768299;
    msg.pitch_min = 0.9667186846510042;
    msg.pitch_max = 0.12203781437641426;
    msg.q_max = 0.01454385207623654;
    msg.g_min = 0.5942444734562957;
    msg.g_max = 0.4233197235848619;
    msg.g_lat_max = 0.2580918390076983;
    msg.rpm_min = 0.2514862743062284;
    msg.rpm_max = 0.6143811666027276;
    msg.rpm_rate_max = 0.7353523821871234;

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
    msg.setTimeStamp(0.8965455316919432);
    msg.setSource(54175U);
    msg.setSourceEntity(3U);
    msg.setDestination(6426U);
    msg.setDestinationEntity(13U);
    msg.op = 17U;
    msg.speed_min = 0.5491530155343617;
    msg.speed_max = 0.8606639069852062;
    msg.long_accel = 0.6831739251030616;
    msg.alt_max_msl = 0.9405551595436145;
    msg.dive_fraction_max = 0.8551387272445001;
    msg.climb_fraction_max = 0.5995732759572421;
    msg.bank_max = 0.6649143755653589;
    msg.p_max = 0.7074567899716755;
    msg.pitch_min = 0.7836609264636736;
    msg.pitch_max = 0.9215137990341943;
    msg.q_max = 0.3433205227755325;
    msg.g_min = 0.5246961380012781;
    msg.g_max = 0.08780920020821059;
    msg.g_lat_max = 0.5869163648197558;
    msg.rpm_min = 0.5222074431499218;
    msg.rpm_max = 0.8557810763596271;
    msg.rpm_rate_max = 0.7739450472572613;

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
    msg.setTimeStamp(0.636729139522625);
    msg.setSource(5060U);
    msg.setSourceEntity(236U);
    msg.setDestination(10428U);
    msg.setDestinationEntity(102U);
    msg.op = 130U;
    msg.speed_min = 0.8084588041187577;
    msg.speed_max = 0.9068288632943492;
    msg.long_accel = 0.9203057259177388;
    msg.alt_max_msl = 0.8732362817579563;
    msg.dive_fraction_max = 0.22795218257801908;
    msg.climb_fraction_max = 0.4802753365858178;
    msg.bank_max = 0.925408782732992;
    msg.p_max = 0.18226424178886103;
    msg.pitch_min = 0.7965359575807273;
    msg.pitch_max = 0.6435731924564423;
    msg.q_max = 0.18033378852886162;
    msg.g_min = 0.07526157032389225;
    msg.g_max = 0.9591408367717389;
    msg.g_lat_max = 0.39623556768655677;
    msg.rpm_min = 0.36413173397736287;
    msg.rpm_max = 0.21696442902628377;
    msg.rpm_rate_max = 0.3341314782572633;

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
    msg.setTimeStamp(0.17072320350221792);
    msg.setSource(23091U);
    msg.setSourceEntity(16U);
    msg.setDestination(15193U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.87154554506202);
    msg.setSource(44453U);
    msg.setSourceEntity(223U);
    msg.setDestination(60132U);
    msg.setDestinationEntity(99U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3206696267U;
    tmp_msg_0.start_lat = 0.7220158797678382;
    tmp_msg_0.start_lon = 0.766750978971687;
    tmp_msg_0.start_z = 0.4595922489970673;
    tmp_msg_0.start_z_units = 147U;
    tmp_msg_0.end_lat = 0.16119031164197295;
    tmp_msg_0.end_lon = 0.13706942085053908;
    tmp_msg_0.end_z = 0.24747351879564994;
    tmp_msg_0.end_z_units = 77U;
    tmp_msg_0.speed = 0.2750004249384752;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.lradius = 0.8731661548819248;
    tmp_msg_0.flags = 73U;
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
    msg.setTimeStamp(0.8223312046498679);
    msg.setSource(45276U);
    msg.setSourceEntity(87U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(241U);
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.plan_ref = 2365936736U;
    tmp_msg_0.id.assign("THYZOJAJWCSZNVPJCUBAAHWRHUUDPMOAWHSQGROZMTQEFIQXMYQWBQDNBKJFOQZDTWGOQXLGIUVUOXNKUSENBOCIRBSJVTXEYAEXIIRDFZRPTETLGYVWJUIBKYMDCUGSZRRECWVFREKGOMIEDDLOVCSCFWN");
    tmp_msg_0.memento.assign("NWBEDFDAOCNSTDHWXVLGVGYZYCZGEPPAAJRACKJTZRJEWXQHHJXNOWNDIKEBULNMMIYZSBFPDETQCDSQKBDJRZVDLWMFZOFAFPTUUCCTQSJONRBTJLGLOHFOPHXHIUGPYZJRBRPSWUFBBLIZSPROTIICYLVQHCGZQMMGOLWFEGIDSKUHCIFLPWXSNUMYSVNQXNDXVVHPTAOXTHGJANYAKUQYIMRRXIRQM");
    tmp_msg_0.group_name.assign("IMOQXBKETNYETGRWIIEKAXKQPXYIPZUOUCVPSRRJHGFDTZPJRFJJLJNWKWTAUSYRNAULWVRTSFKBBHGGWMBDMGNFWSYENNTOWOQGGCMBWMQTQLETZHZWSJDIMENNVWUQTAUQZKAACVVMIVEJQCETPPBSCYFNZLZXPBLZFDMRLKOQMUOGACLNY");
    tmp_msg_0.formation_name.assign("RTYZOTTKAFIQYVIUJMCXMCGHALBRNLGOFOYVQYNUBNZJGGDZWFHXFZEBIBPXHDTXEPEOMOCHEMRWFNEQZJUPZKYELOFDMJISEGHBBFOJFNIJFDUDMWKGDSBQWRCIHRLWZVCIDJXFOVVPLDHUQBJWD");
    tmp_msg_0.plan_id.assign("DFXQWYWSOBHXJRCXXCNHWCPUPZTTXMIQMTRVIVEYONTMCQSOZPNYHSVTCVHIJFUFHANGKYUNBOILSKFLEKPOFQGLKUKQBIPKNVXVAPAMWAIHUEOGPOYTEXJEKXRPLHZFANCADXOAWBFRNBJAOMTHLFEAHGGRLLJNJCTHMVIMUGPKJDUZ");
    tmp_msg_0.description.assign("WNAHQISGUYBBENTQGCMVQTDHLGUPZVKZBVRWMFZZMDQTMPTMGSEJRVFYXKXYJLXKOIHODULPCGQUMTKOLKCZNIZPUNAGBHPYXTEROLAFOTPZFCISVUKCBDQFIEDMVOAEUCXELJWSYORIAUKFNGLNJSEHHCTKPIVDBCHTDOABGYRNHINOYQMQPWLGLQRXFLUJVRIPVSAJWSEEFBMGYSAXNQKTC");
    tmp_msg_0.leader_speed = 0.8010777812065285;
    tmp_msg_0.leader_bank_lim = 0.8301936943322671;
    tmp_msg_0.pos_sim_err_lim = 0.8947992278599715;
    tmp_msg_0.pos_sim_err_wrn = 0.8294012127179107;
    tmp_msg_0.pos_sim_err_timeout = 9288U;
    tmp_msg_0.converg_max = 0.2675070066571358;
    tmp_msg_0.converg_timeout = 2690U;
    tmp_msg_0.comms_timeout = 50903U;
    tmp_msg_0.turb_lim = 0.26571009195726125;
    tmp_msg_0.custom.assign("NQWMMWYMPDZALVUKRXPTRYRDVBJTPLAZAAMWXQPBQTZFTDSHNKONWTZAFCMAQPVGREAYOHDIUBXFZUYCRBOCZIXOGRSGJGISODBNPHEAJQXLIWFHBGCLLTCMKSPHQZU");
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
    msg.setTimeStamp(0.5074680592405145);
    msg.setSource(55878U);
    msg.setSourceEntity(64U);
    msg.setDestination(19095U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.23140884767440606;
    msg.lon = 0.135718922954143;
    msg.height = 0.836060591940282;
    msg.x = 0.08197841912216008;
    msg.y = 0.35318439412451275;
    msg.z = 0.7969668905843516;
    msg.phi = 0.05531950239185446;
    msg.theta = 0.16725317335271983;
    msg.psi = 0.5866125489761398;
    msg.u = 0.3220137559097458;
    msg.v = 0.6890047525321223;
    msg.w = 0.25780914293479484;
    msg.p = 0.9747633760854276;
    msg.q = 0.9392376882083028;
    msg.r = 0.9946033500463577;
    msg.svx = 0.29329393474684295;
    msg.svy = 0.17947197981295437;
    msg.svz = 0.8140795354528649;

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
    msg.setTimeStamp(0.4014095088702635);
    msg.setSource(15018U);
    msg.setSourceEntity(106U);
    msg.setDestination(48701U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.6513927701718755;
    msg.lon = 0.17693453614849342;
    msg.height = 0.17741211002195867;
    msg.x = 0.45653030973762065;
    msg.y = 0.6749486274611284;
    msg.z = 0.8308724944294524;
    msg.phi = 0.22537275919868804;
    msg.theta = 0.15643905388386303;
    msg.psi = 0.25768773915769627;
    msg.u = 0.8070866420708691;
    msg.v = 0.21657119842835026;
    msg.w = 0.5481273846691932;
    msg.p = 0.1862623259827284;
    msg.q = 0.022582859260562915;
    msg.r = 0.36696607555174143;
    msg.svx = 0.2992929499315884;
    msg.svy = 0.8082315930427307;
    msg.svz = 0.8637403648866276;

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
    msg.setTimeStamp(0.7697800162572567);
    msg.setSource(17400U);
    msg.setSourceEntity(20U);
    msg.setDestination(2493U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.5662012888193724;
    msg.lon = 0.24174402681469753;
    msg.height = 0.5305317338667858;
    msg.x = 0.4930278564832359;
    msg.y = 0.4864154878026702;
    msg.z = 0.9634846180100509;
    msg.phi = 0.8479583497398339;
    msg.theta = 0.5428687864438686;
    msg.psi = 0.384657417968591;
    msg.u = 0.2474019553868253;
    msg.v = 0.9420757524557338;
    msg.w = 0.7722355401995221;
    msg.p = 0.7796398943429753;
    msg.q = 0.37841529028875953;
    msg.r = 0.9321188263435232;
    msg.svx = 0.8168131098123486;
    msg.svy = 0.00699932578008966;
    msg.svz = 0.8957558204245045;

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
    msg.setTimeStamp(0.8908422650277978);
    msg.setSource(49169U);
    msg.setSourceEntity(9U);
    msg.setDestination(4306U);
    msg.setDestinationEntity(245U);
    msg.op = 32U;
    msg.entities.assign("AZDTLAQMPLPALYXQBXDPGIHCVBDQPLGZRYUJBYCWWLVOQXGZDSUGCRXEWOBXRMMJUOFKHQMMDMFTQQBLZGSFNCWNXQJJEKSNQIMUITOPZUVZYDNNIVWUTBDBRSFLNLSNTOYHOPB");

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
    msg.setTimeStamp(0.4787524190885948);
    msg.setSource(33861U);
    msg.setSourceEntity(192U);
    msg.setDestination(33415U);
    msg.setDestinationEntity(193U);
    msg.op = 9U;
    msg.entities.assign("FICBNVREWYBMNTFRUHUJSIVXOGDUQJQVKAZLVJHIMROOYZBHIYOXHONIFHGXCQBNHHCBFDOQAXXDMSQESMPY");

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
    msg.setTimeStamp(0.7383881535724656);
    msg.setSource(26373U);
    msg.setSourceEntity(6U);
    msg.setDestination(30824U);
    msg.setDestinationEntity(146U);
    msg.op = 155U;
    msg.entities.assign("CNRLQIUPUQWOKVWSGLUEZAMSDTTUGTBJBKPTFCYSVAMFACLRWYCQRMBHTVKSAJJMLPZFLCFNKDZTQGKQDJEIDBEMVNXHIQZKJWGFVHAEMYGCJNWFMUQBQNOXFKLPVHCDUGSLPTEVXOBJEFEZDDXRKYSRMXAFJKTMLZAWHDUUTIXHXBBPOBVEUPZVYZWJXHEOSRGB");

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
    msg.setTimeStamp(0.6593051407194771);
    msg.setSource(33491U);
    msg.setSourceEntity(121U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(206U);
    msg.type = 230U;
    msg.speed = 45391U;
    const char tmp_msg_0[] = {-121, 98, -93, 40, -34, -15, -56, 92, -1, -82, 4, 85, 16, -109, 72, -114, -108, 8, 38, 26, -4, -59, -96, 50, -102, -108, 8, 39, 69, 85, 93, -24, 103, -63, 39, 75, -84, -102, -14, 44, -28, 75, 80, -20, 115, -31, 78, 95, -101, 124, -11, 38, -46, -52, -117, 76, -10, 8, 70, 55, -54, -14, -76, -101, -10, -29, 99, 41, 121, 52, 54, -97, -86, -13, -26, 99, 34, 72, -55, 1, -119, 29, -93, 31, 120, 68, -109, 108, -58, -46, 69, -62, 38, 104, -85, 110, -75, -125, 14, -94, 5, 118, -7, 92, -65, -91, -80, -38, 83, 99, 31, 24, 114, -4, 24, -42, 105, 95, 71, -10, -1, 65, 8, 79, 62, -92, -1, 34, -67, 19, 102, 107, -4, 12, 52, -73, -21, 103, -21, 17, -36, 25, 54, -120, -54, -77, 13, 32, 113, 41, 125, -48, -17, 20, -125, -64, -59, -106, 81, -68, 62, 44, -62, -3, 75, 58, -98, 122, 75, -102, -53, 73, 61, -103, 26, -97, -85, -107, -34, -76, -10, 34, -108, -87, 44, 36, 9, -11, -79, 54, -113, -80, 101, -83, -52, -88, -51, -26, 53, -44, 44, -87, -126, -109, -118, 9, 66, -118, 56, 69, -65, -29, -102, -107, -107, 90, 47, -82, 2, -119, -14, 48, -117, 79, -17, -103, 77, -35};
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
    msg.setTimeStamp(0.7089184588765688);
    msg.setSource(12011U);
    msg.setSourceEntity(198U);
    msg.setDestination(979U);
    msg.setDestinationEntity(133U);
    msg.type = 89U;
    msg.speed = 659U;
    const char tmp_msg_0[] = {-64, 5, -21, 107, -116, 37, -103, -55, -109, 98, 74, 7, -104, -122, -42, -110, 13, -100, -28, 46, 107, 101, 15, -98, -53, 29, -118, -78, -30, 19, -15, 32, -19, -16, -127, -6, 84, -29, -54, -111, 123, 32, -110, 10, -128, -89, 107, 70, -71, 92, 97, 37, -114, -15, 42, 13, 68, -125, 32, -94, -109, -48, -113, -32, -14, 21, 49, -82, -110, -69, -70, 120, -89, -43, -97, 90, -100, -90, 20, -46, -85, 23, -104, -57, -128, -115, -107, -73, -66, -3, -22, -48, 116, -28, 89, 120, -7, -112, -99, -21, -53, 118, 86, 90, -125, -2, -77, 0, 118, -8, -117, 113, -116, -26, 15, 1, -82, -47, 64};
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
    msg.setTimeStamp(0.12597616805392364);
    msg.setSource(15757U);
    msg.setSourceEntity(24U);
    msg.setDestination(50783U);
    msg.setDestinationEntity(100U);
    msg.type = 58U;
    msg.speed = 19374U;
    const char tmp_msg_0[] = {30, -86, 20, -87, -92, -6, 6, 19, -105, 88, 87, 5, -56, -108, -79, 77, -76, 8, 28, -7, -5, 24, 98, -89, 9, -17, 82, 38, 108, -64, -45, -104, -116, -12, 3, -118, -105, 76, -46, -22, -48, -49, -13, -109, -23, 31, 6, 74, 13, 0, -34, -42, 124, -21, 47, -24, 47, -70, 119, 86, 0, -17, 61, 104, 80, -118, -105, 93, 30, -127, 30, -83, -106, 61, -43, -14, -90, -39, -32, -120, 12, -43, 98, -125, -11, 113, -112, -72, -66, -83, -124, -34, 3, -52, -64, -85, 18, -6, -32, -39, 118, -50, -65, -81, 61, 12, -8, -65, 22, 5, 57, 4, -38, 104, -62, -32, 87, -128, -118, 14, 117, 19, -29, -95, -28, -123, -79, -67, 74, -90, 31, 82, 124, 104, 9, -55, -38, 26, 77, 101, -87, 85, 24, -11, 77, -68, -53, 47, 16, -31, -72, -116, -10, 18, 61, -5, -42, -40, -80, -17, 101, 87, 38, -3, -73, -81, 94, 72, -55, -43, -55, 31, -38, 102, 126, -51, 1, -95, -52, 85, -80, 62, -101, 23, -112, -88, 61, 44, -47, -126};
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
    msg.setTimeStamp(0.32608988898322155);
    msg.setSource(20494U);
    msg.setSourceEntity(125U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(62U);
    msg.op = 71U;
    msg.tas2acc_pgain = 0.3901230045866667;
    msg.bank2p_pgain = 0.08655591525248185;

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
    msg.setTimeStamp(0.7815490639715645);
    msg.setSource(7792U);
    msg.setSourceEntity(238U);
    msg.setDestination(20829U);
    msg.setDestinationEntity(126U);
    msg.op = 32U;
    msg.tas2acc_pgain = 0.02125198307323417;
    msg.bank2p_pgain = 0.7987479316688659;

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
    msg.setTimeStamp(0.3760468464488018);
    msg.setSource(9034U);
    msg.setSourceEntity(230U);
    msg.setDestination(20417U);
    msg.setDestinationEntity(51U);
    msg.op = 237U;
    msg.tas2acc_pgain = 0.8520102087684883;
    msg.bank2p_pgain = 0.6467376859297983;

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
    msg.setTimeStamp(0.74962298155992);
    msg.setSource(39650U);
    msg.setSourceEntity(145U);
    msg.setDestination(24128U);
    msg.setDestinationEntity(112U);
    msg.available = 1864328188U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.34821576175957647);
    msg.setSource(39802U);
    msg.setSourceEntity(170U);
    msg.setDestination(19141U);
    msg.setDestinationEntity(154U);
    msg.available = 3163679100U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.6769701318587176);
    msg.setSource(8852U);
    msg.setSourceEntity(190U);
    msg.setDestination(54804U);
    msg.setDestinationEntity(67U);
    msg.available = 2149651320U;
    msg.value = 67U;

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
    msg.setTimeStamp(0.7171522470767286);
    msg.setSource(37979U);
    msg.setSourceEntity(52U);
    msg.setDestination(59183U);
    msg.setDestinationEntity(250U);
    msg.op = 2U;
    msg.snapshot.assign("UDELRXOAWVWEDITRDETZKYAVSUXZJPGMSDROJBRGJMLASWFYTLNTMXYZOWHQUSNCFRJJXCLBCZMVZOZANPFPATCGEOZRSZNXMJCFYQPOWRYLOIFBAKSRJLLVPGHDEVNSUBBQMCBVNJXYFPDPCMALHXNWVQKIOVBWGHFAYLGFKPBUBANUTYYEMKUQUDITHPRFEDHGVRVKQZTBHIXITCWXKKIZQNWJECGQKUUADPFSCGHOWKGIHN");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 96U;
    tmp_msg_0.max_depth = 0.11457864559765418;
    tmp_msg_0.min_altitude = 0.41047775016430643;
    tmp_msg_0.max_altitude = 0.8767588821574164;
    tmp_msg_0.min_speed = 0.012341443635665361;
    tmp_msg_0.max_speed = 0.8120557909611756;
    tmp_msg_0.max_vrate = 0.19036115440986656;
    tmp_msg_0.lat = 0.32056663842381683;
    tmp_msg_0.lon = 0.5918395649327504;
    tmp_msg_0.orientation = 0.3262100882451112;
    tmp_msg_0.width = 0.33937932415511873;
    tmp_msg_0.length = 0.8922689786797446;
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
    msg.setTimeStamp(0.03449559206791575);
    msg.setSource(31873U);
    msg.setSourceEntity(97U);
    msg.setDestination(45807U);
    msg.setDestinationEntity(207U);
    msg.op = 111U;
    msg.snapshot.assign("DMJJNHBTQWTOZLJDRVGXNGMWPEOIOHHGYQIBKARTVMUDFZRGCDTBEWBMFCCHFNIAIPARIXFOPQZUCNVUWQYZTLCLAZPZ");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.017933186919285027;
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
    msg.setTimeStamp(0.4012584576282193);
    msg.setSource(42470U);
    msg.setSourceEntity(98U);
    msg.setDestination(7514U);
    msg.setDestinationEntity(51U);
    msg.op = 81U;
    msg.snapshot.assign("PGJNHBRFDBGGNJPREMLWMGXTHFAITQJZKOLJHUZYNKBHEQYCIWTTBILVMQLMRXKLZMRTZYFDBQQECJMNVSSRTNSDILPMWSRCGBMIRWBTDGAVUJNCJVXUGZCAVUWKATXSUBVQSGPLRZIPPQPOYOLCEZIARBJHFACSNEZDYKHKXUYJYQHNDXHMAQKWONIVLTTOKAWAJAWHKQPWIVGXFMOYCNYOLEHGSDEUEZF");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 2599980439U;
    tmp_msg_0.lat = 0.0038950460956800326;
    tmp_msg_0.lon = 0.04929402125597404;
    tmp_msg_0.height_ell = 0.1526145552868321;
    tmp_msg_0.height_sea = 0.998158479605825;
    tmp_msg_0.hacc = 0.367996851831929;
    tmp_msg_0.vacc = 0.09871575188155124;
    tmp_msg_0.vel_n = 0.4705510356796029;
    tmp_msg_0.vel_e = 0.1277643548185866;
    tmp_msg_0.vel_d = 0.19669150812379166;
    tmp_msg_0.speed = 0.4469770333117894;
    tmp_msg_0.gspeed = 0.6426458365775901;
    tmp_msg_0.heading = 0.4855923125817472;
    tmp_msg_0.sacc = 0.834184148083562;
    tmp_msg_0.cacc = 0.52839742589026;
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
    msg.setTimeStamp(0.9887150022012221);
    msg.setSource(37739U);
    msg.setSourceEntity(32U);
    msg.setDestination(22076U);
    msg.setDestinationEntity(52U);
    msg.op = 73U;
    msg.name.assign("DBMVXLLOPZJSIURSSDYYUWKAQJWOGFHZFUESSIGHXIDMAAGBWYOOAZDWPLTNEQSCKEHEHLDFQYJTKJNCZKLGWVPVFMNDJKZTPUXAJHGMURKNGRFKAXXUBMLECORKQMRXSVQLWFMBUXPQIBDZFGFZKXY");

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
    msg.setTimeStamp(0.73915285760173);
    msg.setSource(9864U);
    msg.setSourceEntity(54U);
    msg.setDestination(49038U);
    msg.setDestinationEntity(211U);
    msg.op = 225U;
    msg.name.assign("BULIKRAONGBLSHBMBMZBDPDAJEYGJXGPLIWJUEOICOWOKAKMZHEQBVYNUGDML");

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
    msg.setTimeStamp(0.4802943247032685);
    msg.setSource(40899U);
    msg.setSourceEntity(48U);
    msg.setDestination(34154U);
    msg.setDestinationEntity(159U);
    msg.op = 146U;
    msg.name.assign("AYMTLHMLPQWM");

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
    msg.setTimeStamp(0.17524293359191667);
    msg.setSource(59347U);
    msg.setSourceEntity(93U);
    msg.setDestination(59616U);
    msg.setDestinationEntity(152U);
    msg.type = 146U;
    msg.htime = 0.5011955258958031;
    msg.context.assign("YNHEFUMTVRARDWZSLHVBOMPQOFUCDGMGFRLXUKIATRPNMDJRRQKABOYTSGTBZKZSEZIKLALPYYGOVOKRRZQTJVVSSXJYINKPEHWVESSASCBQQNOBEADLIFHHMZWWFEASVPWTCGYAYDJTCQMWBXPEGRNPINHIAKYULZFHCSXYTPZOJML");
    msg.text.assign("DQCPHWUBDPFCXXAVMCYWEPKLXNVNUHOEZATTCMDATKCNQGYTFPNHQTCNYJYDHOMBCBRBVFOLSZIYDJMIFAFEOLNFILIZJIPRXOJPFIHLTRILKAKRX");

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
    msg.setTimeStamp(0.8385939224567563);
    msg.setSource(25466U);
    msg.setSourceEntity(155U);
    msg.setDestination(7248U);
    msg.setDestinationEntity(79U);
    msg.type = 120U;
    msg.htime = 0.8856897808773257;
    msg.context.assign("YZHQRDIOYULEKNOKGBVQEMWVXNRGVCDCKATXLLPBRRTPLILPEZRZJKESZSWONOYAUGOCVJDYKFEQSBSYNSNHBHADGQZIUFSHVTFKTPPXLFAXLJBAIMFBMEDTYXWAEYMZSCGLOTMOYXMKJQWFKVCCZVKEFIUVCEUGXJNRGYIFIW");
    msg.text.assign("ALQQSAPVUUKKITLDHWZDAGWMRWNWKXNGGOXYDLATFLPXOMXYMZUHPFDZPMYLIPCAJIYVOHABCIZCWWQQNFJRFMIXOYSVGVDEIBHBZESKBFETPUHFFHEUQQJNWCSEBWYXFGAZVTUVVHRWVDLNTKNRIGKUJXIZOYPOTEIDLQGQNCBZRTZMOK");

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
    msg.setTimeStamp(0.7952929794982664);
    msg.setSource(46362U);
    msg.setSourceEntity(26U);
    msg.setDestination(25288U);
    msg.setDestinationEntity(108U);
    msg.type = 74U;
    msg.htime = 0.7312918738991941;
    msg.context.assign("JGTTVZNPAZGMILSEIJLFTGQRQWIMOPLFADQKNWYUBQMCSXEHFIERNVMJDQFDFGKSTANAPBBHYSPVZTBXCFAMNFEZZRCTTOCNMKUSWLZKLVWULFGFPSIEXAXOYYMNRKPJWOZZUUHGHTCUECBOADJVCDGSGENKKHWIVOXNBRUAFBPXYQJY");
    msg.text.assign("HBRUXVJSNCOUWBNFBAXHINRLKXWUCCAFFFCIGRPMLCGVEVQLQVMRXAFTDJNYBUSJWNKRTQQUFOKOVHFDZTGWRUBDDYBRWBSJMRTQHODNDZ");

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
    msg.setTimeStamp(0.5694373224718678);
    msg.setSource(22931U);
    msg.setSourceEntity(142U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(25U);
    msg.command = 146U;
    msg.htime = 0.423332162439628;

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
    msg.setTimeStamp(0.16832813428137894);
    msg.setSource(41400U);
    msg.setSourceEntity(152U);
    msg.setDestination(40054U);
    msg.setDestinationEntity(186U);
    msg.command = 252U;
    msg.htime = 0.19131928220938;

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
    msg.setTimeStamp(0.46044014994341853);
    msg.setSource(31828U);
    msg.setSourceEntity(250U);
    msg.setDestination(53571U);
    msg.setDestinationEntity(115U);
    msg.command = 40U;
    msg.htime = 0.5910273974236139;

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
    msg.setTimeStamp(0.901114957209109);
    msg.setSource(30808U);
    msg.setSourceEntity(54U);
    msg.setDestination(47997U);
    msg.setDestinationEntity(126U);
    msg.op = 151U;
    msg.file.assign("PYNIRIGSABSOCPWTUAQCLDBNLODVZUXJZIOLURUIFSXNHOCQCMPZZOXPHFMHMMFYCXVAHOVGHGJDUPKEDQCSRBRQCJEAXLGSVQAKEMKZWSWWYFSTOTPLXFFNONOWTYGBIWHTKRCPDZKMAHTDEBJEUGMLKQDHRJKMPJCUPVVRJJXRVQHQWIWWOTGWZYMUJPJZTYQNRLTYVKNHLTEELAFFNBIZVYXFIXKEEBDIGUZBE");

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
    msg.setTimeStamp(0.5844930485780327);
    msg.setSource(12539U);
    msg.setSourceEntity(65U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(47U);
    msg.op = 1U;
    msg.file.assign("LXGLFJLUIUDGBHC");

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
    msg.setTimeStamp(0.9714484413684983);
    msg.setSource(26182U);
    msg.setSourceEntity(80U);
    msg.setDestination(55014U);
    msg.setDestinationEntity(201U);
    msg.op = 14U;
    msg.file.assign("PSSDQNJDXPYLOUOZEKHMGICVXEGPDBPOTKZWIGCVFKUNDCPASBRMPOSCOBCMAYJFSOMARIHFXBJLTSTYHPZTQAPZAHTNRUEUUCFMZXWXVGMQKVSQSMYDLRJNFDKVJHQFSDZWLYQAIJLSYTO");

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
    msg.setTimeStamp(0.7338309263034731);
    msg.setSource(46149U);
    msg.setSourceEntity(71U);
    msg.setDestination(9855U);
    msg.setDestinationEntity(131U);
    msg.op = 232U;
    msg.clock = 0.46138368724734313;
    msg.tz = -56;

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
    msg.setTimeStamp(0.6232945903396472);
    msg.setSource(9920U);
    msg.setSourceEntity(239U);
    msg.setDestination(41445U);
    msg.setDestinationEntity(18U);
    msg.op = 232U;
    msg.clock = 0.40672259672685107;
    msg.tz = 11;

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
    msg.setTimeStamp(0.44667217413717697);
    msg.setSource(63505U);
    msg.setSourceEntity(180U);
    msg.setDestination(28040U);
    msg.setDestinationEntity(156U);
    msg.op = 48U;
    msg.clock = 0.33898567222135245;
    msg.tz = -103;

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
    msg.setTimeStamp(0.5496693198348158);
    msg.setSource(54502U);
    msg.setSourceEntity(246U);
    msg.setDestination(56357U);
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
    msg.setTimeStamp(0.8546830234422582);
    msg.setSource(31061U);
    msg.setSourceEntity(138U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.7910336796336029);
    msg.setSource(42755U);
    msg.setSourceEntity(74U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.5942927963190066);
    msg.setSource(53251U);
    msg.setSourceEntity(183U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(11U);
    msg.sys_name.assign("FNYPJHWPZWTPVGRSZIXGLIKHKJDHRDSNGLGVHDOQUKXAMBUIUYWYBOKRMSYNZCPKEJJDSIZGGQOEALMFGBCCC");
    msg.sys_type = 23U;
    msg.owner = 44002U;
    msg.lat = 0.1862482688361422;
    msg.lon = 0.6284871053736356;
    msg.height = 0.9992713674517731;
    msg.services.assign("NKZXQPSDRYOKACZTHJTNWISUUQT");

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
    msg.setTimeStamp(0.1465412288939817);
    msg.setSource(1364U);
    msg.setSourceEntity(238U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(246U);
    msg.sys_name.assign("SNOXEGXEASQHGFIRQEJVIJFRFYFFYPCMLFBZAUTDUWISSHFTDKZEOXOMUPRYQOVBNTAGCCXKLYOSOYXDIWPKBDRTUVULATRMSGSDXRWQJTMMPVIGZWGJRKMGQGNPEUQXNKDLBEHWQICEPOZEYMNRVZ");
    msg.sys_type = 46U;
    msg.owner = 63177U;
    msg.lat = 0.8919687876690424;
    msg.lon = 0.7490643123173005;
    msg.height = 0.41203567852873213;
    msg.services.assign("OSMAMIZXZUHNQEMEBYUPLCVUYVTWRPJCMDFHMNSJBLZSKSDAXBBGLALJWAKEKOOGCXTQRWROFRRQPAKFSNYAUZWTBVETUJUDZLTLGTWKONNWQCQKWYYTFIAOKPIXHIYEYPMJRWMBQYXVLQGBPZZTSDVIAOMBDDUWVQNVXJVKCKNJVHEYRUDJIXHLC");

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
    msg.setTimeStamp(0.007245399292304278);
    msg.setSource(11385U);
    msg.setSourceEntity(146U);
    msg.setDestination(26100U);
    msg.setDestinationEntity(218U);
    msg.sys_name.assign("TRXDVKXZSWUUQSDAYNNICFIODTHAABPUSXSOAIFPHTZDTGXFSCVBOCZTALXBKZPYVTXHNCYGPLRIRDWDIJB");
    msg.sys_type = 218U;
    msg.owner = 18812U;
    msg.lat = 0.5982181662035536;
    msg.lon = 0.8946978041301766;
    msg.height = 0.8347798561090793;
    msg.services.assign("GLFOTDHEAJGENFCVWNSMMDPUZYYUHXJATLOLREFOYXGHCVGLYPRMCHIXZSQAZRYRYBYGTSXIFIESWNDFQILTIEHAUZTEDZDGUQQNVOCUZJBWFLTSWUOGUXVIMWPMDMVQDTLBXIVFUJCKYXVILNQCEAQBVDBPOAPOCHAVQAHTLWRNEFKKFRCBUTIJNYXKSRKRNXBZODENZMPSRKSQUGTALPHNPMBJKSHJOGCBPIJQCMBW");

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
    msg.setTimeStamp(0.8951328195073575);
    msg.setSource(48984U);
    msg.setSourceEntity(146U);
    msg.setDestination(20739U);
    msg.setDestinationEntity(41U);
    msg.service.assign("UDTCFRPMVMARZVWGHFKIIAIZODZRCHSWBPSYXTFMOGKALUJNJSXNPSIDTOFIWQXYDPHFTHCUJWGPLKTUOJNEYXEMQENZKORBBSJNCBAWMILZYDGJDRXVKXCNUMAMVCYHOTGSKCFJMFRKCFUHDQDRXQBWBQEIXGXONEWCQEVQQBWKPSCRIVALLSSEEVZNHIFAHJJVHVRKPMLKTMDUYVNTGDXAWLZZEB");
    msg.service_type = 142U;

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
    msg.setTimeStamp(0.2571669911219018);
    msg.setSource(19559U);
    msg.setSourceEntity(210U);
    msg.setDestination(43675U);
    msg.setDestinationEntity(42U);
    msg.service.assign("DICLCOGKBLJMPXYWXZXZMQEVPQEYQZLYVVBPOWGCFTJFULSAHOEHMVYUZITIJFIQJDNDAWNRQEFRRJRNCKHIRNPHGLGSKUQDLDAFVINQRKAJFAHFFLASBYWSSZBAHQTDOQNJVPYJSPBWXCVPHTBMSZPVOHKGST");
    msg.service_type = 189U;

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
    msg.setTimeStamp(0.4051736727183032);
    msg.setSource(38161U);
    msg.setSourceEntity(115U);
    msg.setDestination(37478U);
    msg.setDestinationEntity(237U);
    msg.service.assign("OMEHGMXJCFGHTTQCWGMDAQJBYVEHLRBBPJBZSBUACEOGYJKZCDKCWJNOQYNWAFUEZNLBKGXIHFQNWLBKEMLZKUZISSHJIFXJLKOBNGBNRHHTRSVPIKRVOMYLFAPUDAIGEKSDFOQMBPVSIHUWFGLXXFZZXOXQDJIDULZQSPTDTAXTEQPDWCRGOYETDNRCSUCWSVVAZUFWYVMSTPKLA");
    msg.service_type = 57U;

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
    msg.setTimeStamp(0.5458892253914064);
    msg.setSource(3726U);
    msg.setSourceEntity(131U);
    msg.setDestination(14741U);
    msg.setDestinationEntity(89U);
    msg.value = 0.1348121060447215;

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
    msg.setTimeStamp(0.755194187090175);
    msg.setSource(30971U);
    msg.setSourceEntity(220U);
    msg.setDestination(26115U);
    msg.setDestinationEntity(23U);
    msg.value = 0.4026039714448363;

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
    msg.setTimeStamp(0.5012055176650677);
    msg.setSource(47805U);
    msg.setSourceEntity(86U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5537810010870785;

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
    msg.setTimeStamp(0.23030281951794385);
    msg.setSource(35201U);
    msg.setSourceEntity(54U);
    msg.setDestination(61374U);
    msg.setDestinationEntity(97U);
    msg.value = 0.15516286852393935;

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
    msg.setTimeStamp(0.11536218102130691);
    msg.setSource(17563U);
    msg.setSourceEntity(61U);
    msg.setDestination(32733U);
    msg.setDestinationEntity(7U);
    msg.value = 0.04440927791263749;

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
    msg.setTimeStamp(0.9965165811540843);
    msg.setSource(38560U);
    msg.setSourceEntity(48U);
    msg.setDestination(52476U);
    msg.setDestinationEntity(106U);
    msg.value = 0.5862916296740605;

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
    msg.setTimeStamp(0.8290679687873681);
    msg.setSource(2609U);
    msg.setSourceEntity(225U);
    msg.setDestination(58289U);
    msg.setDestinationEntity(98U);
    msg.value = 0.47052340355893196;

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
    msg.setTimeStamp(0.6176425453152942);
    msg.setSource(5342U);
    msg.setSourceEntity(24U);
    msg.setDestination(34539U);
    msg.setDestinationEntity(100U);
    msg.value = 0.456647294215341;

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
    msg.setTimeStamp(0.22074073289139917);
    msg.setSource(45239U);
    msg.setSourceEntity(199U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(104U);
    msg.value = 0.39492410734609207;

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
    msg.setTimeStamp(0.8662929704853598);
    msg.setSource(11527U);
    msg.setSourceEntity(185U);
    msg.setDestination(61936U);
    msg.setDestinationEntity(82U);
    msg.number.assign("EIKBWWIESZTPHMZRILNXSNQLLJUXAJCYIERSMTJKFTUKEGYSSYXBWUQFPGMSEIKVCBBZSKVPVXPWQOM");
    msg.timeout = 18322U;
    msg.contents.assign("FPIOHTDDNBTPWJEQUXKUOFVFZVADZVXPPRTMMPANLIIBHASLSGUHLKMFWVYXHIFNUCGJSQMUZSTYZGEPQYRTNPGEWOKYLSGAREFRMLAZCEHSJODHZIMYYVBSTRSQDVXLXXYZKTERZVNWEJAATHMOGPSJDQYJKXOICGYJQEJFRVBIBEOBXWNOWYMDEXCLUKNNQWDAQPBIQJGZCKDLNJBRBWWAQR");

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
    msg.setTimeStamp(0.6787209302336195);
    msg.setSource(1423U);
    msg.setSourceEntity(6U);
    msg.setDestination(50427U);
    msg.setDestinationEntity(104U);
    msg.number.assign("JIMOMLJIRFBRYHOXKDBBAFNCNAVVIOIIRILEQWLVIJPMWBAARDGGXPMJVWULSYOEMKBJOXMFWBRZPZFUUPEMWLOZFLVFWXNIFHBJESQUGCFCRCUHYLSECQWCQNWXASDFGYFTKNSSQHSNLVENTYZHEZDGKIPXXTGDDNDGTCACTTRORQVHXVBHX");
    msg.timeout = 15239U;
    msg.contents.assign("GJIVHBYITPIYLTTKCZLJTAYUFOHPMBQMNKDXDWRYWOBDXHQSGCNFDOGKJUJWCRXGTPPZALAQUU");

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
    msg.setTimeStamp(0.5002903057419884);
    msg.setSource(33429U);
    msg.setSourceEntity(149U);
    msg.setDestination(50834U);
    msg.setDestinationEntity(118U);
    msg.number.assign("ITNWSAICOVKRHQFOUMZADGWBQWULZFJYJINZIMDPHFONFDTHEFQDZLPLASWPBMLVGZZMLMVUXURNPNGQCFXFVQSWQKNDEOGGSTZIWYCIIRXKROSVERCSUAJZPBHZJAXEEBRGJMAPKTCOYGDYLYJRTWLUWRKOHYXSJLCHEXQNPEFHXPIEZSFTQYBBHBVDWOCJDKXNCGDOQTNARMGX");
    msg.timeout = 218U;
    msg.contents.assign("DXNCZHFIPJNXILZBMKNURVGVABGVQXWSYXTFHQTDZFIGUNTSCOKLYHQUNHDMLANJAPNQDKGLLMBVASEHNIXWDWROPIRTGHHPKCGBMAZEQPIWRMVTEMMCBOZIGYFRXKJVTJEJOZECDARJAOCSLTHUKJSDZQVAXEKOZYPURHKZELWJNUWWBYQTSVIPGSCXYUKLOTDFREEXWAFCFXVQWIBYV");

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
    msg.setTimeStamp(0.548782467110083);
    msg.setSource(3140U);
    msg.setSourceEntity(220U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(124U);
    msg.seq = 188134929U;
    msg.destination.assign("CIJONTEHHLGDXHZCPGZNJHIVYWHVNLAGHQERXUKQIMJIVPGHORUAEKCFCQDQROLEKVRWOKFDLDFIYDAWKXHBCLRSZLABUUMGNE");
    msg.timeout = 61399U;
    const char tmp_msg_0[] = {-105, 104, -115, -23, -39, -89, 39, 66, -102, -28, -44, 117, 105, -48, 75, -112, 13, -106, 56, 90, 35, 92, 119, -126, -125, -81, 2, 72, -113, -64, 6, -94, -31, 66, -96, 0, -101, 54, 53, 109, -8, -70, 126, 24, 77, -60, 37, 51, -115, 24, -27, 112, -20, -32, -70, 39, 64, -86, 3, 36, 21, -19, 76, 126, 85, -117, 61, 113, -57, -11, 29, 56, 12, 63, 83, -22, -107, -69, 53, 24, 47, 70, 123, 13, 65, -105, 77, 40, -116, -39, -30, 74, -31, 89, -128, -59, 65, 74, 26, 27, 37, -4, -121, 31, 86, -101, -41, 94, -119, -114, -3, 58, -58, -91, -8, 5, 65, -101, 54, -105, 75, -104, 59, 32, 62, 29, -122, -17, 64, -90, 17, 49, -18, -59, 68, 2, 111, 123, 122, -127, 84, -16, -55, -80, -112, -39};
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
    msg.setTimeStamp(0.3252022308479192);
    msg.setSource(23174U);
    msg.setSourceEntity(228U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(130U);
    msg.seq = 1956674620U;
    msg.destination.assign("DNBXTHGBYVFTMUWZPNSAJYFRTFSEDIQICQDHDEFONHCFNYROBQPWPUMWJHHFJYXNXWAUTULKRCPYERAVJYEGUTXJXSZJBEXNJCSSCAS");
    msg.timeout = 6105U;
    const char tmp_msg_0[] = {-71, -108, -106, -102, 20, 49, 64, 22, -91, 122, -48, 80, -28, 104, -51, 35, -123, -76, -96, 109, 68, -59, 117, 90, -21, 55, -116, 44, 124, -113, 65, -45, 0, 110, -58, 105, 83, -125, 50, 12, -69, 53, -36, -51, -113, -87, -27, 50, 106, -44, 7, -122, -11, 88, -110, -89, 64};
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
    msg.setTimeStamp(0.8793730862985226);
    msg.setSource(8356U);
    msg.setSourceEntity(36U);
    msg.setDestination(44726U);
    msg.setDestinationEntity(109U);
    msg.seq = 2393760125U;
    msg.destination.assign("LMNIUMWTCRZHOWSWAVQUTUVKBDLGJWEUXQFTGTSXZQEALYFSHQTSVRYNCNGBAIFNCKWWKGXMMFKIRVLSCJHPQVDRFJEWECCZQGPYAOIDUNQXGIITYNPTRTQAPJDNBPXZOMUIVSRSWEONPMZZPATBINFBYXWXTJYUDZRXDYESFKUBGLYVFODUAPKJBGDHODPCMOALKNJMECSWGHQEELAMSROZYL");
    msg.timeout = 15204U;
    const char tmp_msg_0[] = {110, -103, -48, -27, -14, -127, 120, -26, 10, 39, -127, 71, 93, 81, 111, -92, 123, 68, -40, 65, -19, -126, 74, 57, 106, 25, 78, -32, -115, 21, 120, 92, -87, -102, -20, 62, 101, -3, -16, 125, -54, 105, -40, -71, 47, -44, 35, 47, -2, -73, -24, 21, -31, 126, 118, 2, 7, -8, -87, -80, 80, 101, 119, 35, -34, 111, -69, -114, -125, 113, 57, 107, 9, 0, 32, 125, -76, 11, 69, 6, 52, -3, -125, 95, -46, 68, -109, 68, 21, -98, -29, -17, -43, -50, 11, -101, 86, -106, -119, -59, 53, 65, -84, -10, 42, 10, -108, -70, 124, 74, 27, 12, -59, -86, 105, 41, -44, -119, 22, 13, -23, 44, 16, 26, -123, 49, 5, -23, 106, 96, 104, -90, -3, -110, 100, -16, -78, 75, -87, 9, -23, -96, -69, 98, 40, -43, -60, 113, 28, -79, -50, -12, -53, -14, 8, 118, -109, 4, 52, -63, 1, 28, -126, -104, -14, -115, -40, 103, -122, 3, -46, 16, 36, 25, -110, 65, 65, -32};
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
    msg.setTimeStamp(0.30956547647879284);
    msg.setSource(5266U);
    msg.setSourceEntity(150U);
    msg.setDestination(24648U);
    msg.setDestinationEntity(123U);
    msg.source.assign("IUKUMSEAWJEXUAGXVFMHQXIDPCDSUWWZKKIEAHNGEZHDKCJFHGTOZLSPPLQNQHXGYMJHZHSDRZALWNNKNCJYLKGYVJKQYPJWOARXHVRPBYCQLUQVFFMUYZCIRMRJVXIBREUGAYJXDVLWTTFBRNMFNJHNPYTOOUOSCIFCIOWTXTBSVCOWKSDKPOVBWF");
    const char tmp_msg_0[] = {-82, -63, 101, 75, 122, -2, 102, -85, 119, 79, 32, -15, 39, -53, -35, 110, 60, -46, 1, -27, 27, -63, 111, -40, -117, 13, 0, 10, -125, 98, 102, 109, 72, -71, 125, 78, 78, 17, -35, 4, 92, -36, -4, -91, 79, 55, -76, -49, 68, 56, 61, 55, -109, -17, -21, -40, -3, 43, -117, 111, 113, 103, -32, -92, 82, -68, 74, 20, 101, -127, 105, -58, 66, -20, 70, 28, 76, 103, -56, 92, 24, 105, 105, 43, -107, -4, -43, -74, 38};
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
    msg.setTimeStamp(0.19003333357104824);
    msg.setSource(42090U);
    msg.setSourceEntity(185U);
    msg.setDestination(61048U);
    msg.setDestinationEntity(246U);
    msg.source.assign("XVFUJFHAMGQMGTGAIIBEELRLSHFANKPRSEEPMGNLCZJQMCQHCGJFBNXWDYOOBOFZSVVVKQGMISHVCJOLXSSYXRLYTSYADWIOLWHFDUYIATVUBPOBAQCNQQIMJRNOWYRBJCEKUEPLVKGFPHOXNSDHMRRPFVTZOUOPERKZWWPDSTUTXVSZDCBYDHWWFEBEXKYPQ");
    const char tmp_msg_0[] = {38, -114, -106, 95, -71, -42, -62, -40, -110, 32, 33, -62, -62, -51, 76, -99, 108, -66, -49, -86, -17, 103, 43, 52, 97, 40, -79, -66, -69, -2, -37, 55, 5, 65, 100, -74, 29, -50, 70, -51, -9, 16};
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
    msg.setTimeStamp(0.3785030305678033);
    msg.setSource(42999U);
    msg.setSourceEntity(10U);
    msg.setDestination(32855U);
    msg.setDestinationEntity(179U);
    msg.source.assign("XCKWIBUSXIBLIAGHAFKXWVRHKPEGFJESDVYIUDOOCRPVXVFHAMUEWJPDIQCJXCPQHT");
    const char tmp_msg_0[] = {34, 9, -112, -40, -87, -52, 104, 39, 118, -44, 120, -41, -52, -19, 104, 14, -74, -40, -86, -122, 113, -28, -101, -49, 110, 24, 17, 59, 17, 116, -33, -33, 67, 92, 64, -81, 104, -1, 92, -106, 115, 101, 104, -56, -123, 87, 59, -72, -51, -81, -19, -30, 5, 45, -91, 92, -125, -86, -47};
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
    msg.setTimeStamp(0.08750278603857786);
    msg.setSource(27032U);
    msg.setSourceEntity(223U);
    msg.setDestination(34595U);
    msg.setDestinationEntity(20U);
    msg.seq = 2795622096U;
    msg.state = 159U;
    msg.error.assign("CXAGWZCTRVJXQSNLNQMHGNRMCHEUHMCFXAEJJWYOINOSHHJQTGMDEJUEENIMMXMVKISOXVUPEABRGVKYDNBPZUYGYBWQPELTAXZWOJLYLPYBPREPOAPLJKZWFLLWIPKJCMCYBUTDIXQTFONDKIBVFTDPBYBUJQUVITNORDPIXQAZSOWZRCHTWMRQCHRAVWQZSZVBNKXFICKLRIHEFDSBSFYLHAYQAWFUUMGKDLCFVDGOAZSGZKGRHFTKDOS");

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
    msg.setTimeStamp(0.9607272994624297);
    msg.setSource(48950U);
    msg.setSourceEntity(191U);
    msg.setDestination(53680U);
    msg.setDestinationEntity(220U);
    msg.seq = 1839002002U;
    msg.state = 223U;
    msg.error.assign("FNAHAAHDIZLXYXIQLRTNXRZKGBXSTKOMBZXSTANUSJQPPDXNQVFTLHIUVIAPGMTABZTYJLVJCBBRQXJHSOQZCCVUYUOMYSCWHFCCFQRNYNXSRZKKQRDWLPLMWVMJUKEMIZGLFJQNREHIAGWBSIXCWPPNNQXEOFICSWFGJLFA");

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
    msg.setTimeStamp(0.005686695924285723);
    msg.setSource(26595U);
    msg.setSourceEntity(3U);
    msg.setDestination(10771U);
    msg.setDestinationEntity(181U);
    msg.seq = 1710329049U;
    msg.state = 162U;
    msg.error.assign("PWCLSLBONFJRLXQTMYBFZNLGHWJFZPGTKFJZTBMIKOGZENIFQVUESQTHYBWKAQRAKEUWEYOVJSEMHYCXBLDPWLCGWQBRAYAVDQOKGWDOPMVCBOYJXRSZTMWHSMUIRACPYOEMGJIVGCUNISZUXXEMB");

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
    msg.setTimeStamp(0.5497239250780201);
    msg.setSource(26606U);
    msg.setSourceEntity(97U);
    msg.setDestination(27810U);
    msg.setDestinationEntity(207U);
    msg.origin.assign("MZVNYJTZKUHISYYSBHCTJZLPDXZNXHWTQOIEWHVRYBCGRWQFKVFNVAIUTSYAFQFSGOPGIBSYYPLKVOHXOQQWNIKBANPRDTLEEGSLZGBOXJFJYDRGKVACUXMHEUPMAWTMEALOXFBCHLQPKUFRNOARYGZDMCZTYSPIRMRNWDALIQHCDVOBEWECEDMHFXMJZCWGQHKLUUFCIWG");
    msg.text.assign("KFWBMLIYZNYGUGVZRKOPBZRSAIWRFXJDAOSWGZGCJFHQETLKNPQFRBWLRDBCJVWYTILTQCJEHMHDATGLXMKZMZNIVPCOQXAJVMGXKIVZCTNLCUOIWMMOFRKEAOAWT");

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
    msg.setTimeStamp(0.19555358126720124);
    msg.setSource(19334U);
    msg.setSourceEntity(20U);
    msg.setDestination(44987U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("OUREODTULELTASEUMSHIQLZQCFWPVTMCVIANBEMJCRPKSYPXCJDUCFMKKESQVLHKTOJSMIXIUVCMVGXBQRJCXYGIJQEBIDMORFZJWRZZEOBZCKSPWSCIBWHHERFPDTWKCKQPOKGLWXRGYXZALWAEWHGYDDBWVHYBYDNFFHARTLSYJYQGFGDLATAUQMUIPOEFNPGZXHFOVRGDKYUOJNLVZYJQNSNBTZATKJQNBNMZVIGDAFBIPVUPOHHRT");
    msg.text.assign("PNVPEUWMILXDNVSKJZEWXZXWNUCYRKLIWEYHDVZU");

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
    msg.setTimeStamp(0.030563914768783063);
    msg.setSource(37872U);
    msg.setSourceEntity(189U);
    msg.setDestination(50262U);
    msg.setDestinationEntity(201U);
    msg.origin.assign("WLGNZRQGTPWBFBLDUSFGSKAPSVZKWCEXOBYTGDFHHPSFQATMFONAXMSMIIUKSMWOBCTTHPYVCDPJSPAKCSVFMYGLYOPKIBBGMUWCURVXERUFYIHWZRUNJMAMEFW");
    msg.text.assign("HABMPGTVXMNKEHARUYYHSHNHZGDCCKROUBMAIXNNVEIXQTIBOBXOXFWVYGSAIYSAZOMJDSGVLSHFWLGJYQWWDUXTFRUCEFWPEDUSPSCISQO");

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
    msg.setTimeStamp(0.7546592781578029);
    msg.setSource(12769U);
    msg.setSourceEntity(0U);
    msg.setDestination(53237U);
    msg.setDestinationEntity(152U);
    msg.origin.assign("GPECGSENVTSZQUUMJIJWTCTFNXAXREHYLPQXKDLZHLEZXRNEVGFIWWZMFKBTNDVBATTCVAHBMCLOMSLQDLMKDNJNUJVVGCKOJKFLZCUYQUDXOQMJJRISIFSNPSYIQZTRCNGBERJHBOXRVTZDHUPLCHUMUWIWPGFGICPFPYJSXATAWHQMLGOQVVZXJSAPWELKXRWBIURCYGYFADOZKKYYAYIRMDXSHEFYFWDPQSAHEOUQEWHKKZBN");
    msg.htime = 0.5630735798550982;
    msg.lat = 0.12222359393342652;
    msg.lon = 0.7820382882698683;
    const char tmp_msg_0[] = {112, 42, -77, -27, -3, -9, -28, 48, -59, 87, -93, -107, -96, -34, 27, 75, 110, -3, 18, -82, 58, -18, -59, -13, -89, 52, -25, 60, 25, -123, 18, 106, 75, -49, 119, -118, -33, 105, 1, -108, -122, -49, -10, 40, -100, -46, 66, 114, 64, 13, 6, -65, -127, -9, -81, -118, 85, -123, -102, 15, -113, 22, 53, -117, 113, -27, 86, -89, -72, 57, -26, 92, 103, -93, 24, 74, -54, 3, -72, 93, 113, 20, 88, 81, -107, -126, 27, -50, -85, -118, -17, -35, 116, -79, -51, 119, -99, -115, 26, 86, -70, 64, 85, -30, -75, -78, 70, -75, 12, 56, 60, -25, -65, 82, -96, 92, -38, 122, -56, -128, 23, 48, -63, 120, -71, -93, -18, -43, 33, -96, 97, -69, 93, 67, -30, 5, 85, 42, -30, 73, 109, -76, -47, -65, -79, 6, -64, 95, -13, -67, 18, -91, -67, 85, -115, -16, -113, -102, -38, 10, 44, -95, -116, 65, 89, -63, 78, 64, 48, 116, 18, 67, 85, 72, 62, 99, 66, -107, -64, 58, 17, 76, 54, 30, -109, 25, 47, 96, 71, 121, 66, 39, -26, -42, 76, -44, 105, 126, -33, 115, 46, 61, -109, -101, 48, 47, 100};
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
    msg.setTimeStamp(0.28135450606142165);
    msg.setSource(40597U);
    msg.setSourceEntity(122U);
    msg.setDestination(38204U);
    msg.setDestinationEntity(122U);
    msg.origin.assign("XFQGXSXVUXIIJTYPWOEIEMZRURSYTUBDRDHHWKAKVMZWZJXMYHMOPGZGUVDDLTERJMBFCJITQKMDBFSUCKFAONAXVWPFEZQUNUVOYKUOXCRHS");
    msg.htime = 0.517450063044477;
    msg.lat = 0.8716093837330415;
    msg.lon = 0.8652236787528765;
    const char tmp_msg_0[] = {-65, 52, 93, -1, 38, 114, -124, 83, -35, -19, 89, 109, -21, 19, -103, -111, 80, -61, 13, 105, 57, 72, -52, -24, 123, 23, 34, -101, -75, 38, -117, -72, -1, -14, 22, -67, 94, 8, 24, -99, -93, 4, -48, 11, 62, -108, -98, 48, -120, -14, -58, 83, 18, 109, -113, -33, 107, -94, 40, -109, -102, 8, 105, 94, 58, -27, -48, -29, 92, 107, -109, -58, -13, -88, -109, 21, -82, 55, -114, -50, 77, -84, -52, 21, -86, -13, -80, 85, -123};
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
    msg.setTimeStamp(0.3339478674057478);
    msg.setSource(63760U);
    msg.setSourceEntity(39U);
    msg.setDestination(14668U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("ZIEROWKLLTJVANNWKUXCEDUCURVDKROTXTESWHGHVPTJFUCQVQALABWYGYJQIWMPJPBSDYCLIMOPVHRYKSAORTMAEZNWUIUYMATDGOVDLUDZAROXBBDWZXSLXBKEESLPWZQNZPSHGNZILIEOXRNCHIKNJOVRWQFQEYCCRXHMBSASPBQ");
    msg.htime = 0.6601560909274102;
    msg.lat = 0.9605961232134618;
    msg.lon = 0.4669165166340081;
    const char tmp_msg_0[] = {100, -79, 14, -11, 12, -117, -116, -121, 24, 46, -63, 71, 118, -87, 5, -111, 33, 6, 103, 113, 3, 27, 83, 62, 20, -50, 6, 23, 70, -95, -33, -99, 115, -118, 114, -56, -110, -104, 109, -25, -90, 121, -106, 12, 116, -126, 77, 12, 65, -46, -78, 62, -38, -56, 84, 113, -77, 29, 22, 25, -48, -39, -111, 61, -81, -82, -19, -35, 116, 108, 58, 21, -100, -62, -59, 120, -87, 67, -13, -44, -47, -111, -71, 96, 33, 98, -53, -96, 57, -9, -23, -51, -81, -5, 104, 38, 0, 3, 53, 55, -77, -76, -112, -51, -9, 12, -5, -114, 68, -109, 74, -79, 65, -18, 69, -78, -124, 88, -51, 40, 40, -83, 93, 24, 91, -85, 41, -46, -52, 122, -5, 62, 74, 57, -5, 71, 100, -12, 126, 101, 84, -24, 66, -128, -106, -78, -51, 42, 107, -125, 126, -74, 114, 20, 1, -44, -95, -22, -20, 26};
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
    msg.setTimeStamp(0.7520818851772779);
    msg.setSource(63596U);
    msg.setSourceEntity(231U);
    msg.setDestination(35463U);
    msg.setDestinationEntity(179U);
    msg.req_id = 62058U;
    msg.ttl = 65518U;
    msg.destination.assign("KEAXQTZTPAQZWFLIDDMQVRJCWBJYURSLASLONAFVSVQNRFRTWJZQKPLCNKJCVXHQCEMRSTLLYEDJBXHSVGGZMMWXFLK");
    const char tmp_msg_0[] = {28, -69, 89, -59, -74, -32, 71, 31, -74, 17, -81, -89, 73, -11, -121, -90, 100, -32, -6, -105, 80, 83, 52, -83, -19, -32, 29, -37, -96, -121, 120, -116, 109, -35, -36, -14, 74, -90, 14, 119, 121, -71, -58, -83, 65, -46, 9, -13, 33, 106, 55, 44, -93, 8, -47, 4, 101, -115, -14, 2, -51, 98, -38, 62, 70, 105, -11, -51, 39, 3, 103, 66, 47, 124, 44, 117, -128, 64, -125, 27, 47, 62, 22, 91, -78, 120, 29, 2, 1, 44, 32, 7, 70, 108, 58, 102, -27, 42, -67, 108, 116, -79, -57, 86, 92, -116, 64, -25, -123, -106, -53, -120, 6, -5, -8, 30, 27, -126, -44, -110, -74, -10, 2, 44, -86, 117, 87, 79, -20, 19, 79, -118, 83, -74, -49, 72, 83, -127, -12, 52, -84, 102, 45, 8, -73, 42, 80, -16, -124, -3, 60, 20, 91, -112, 75, -124, 8, -101, 82, -124, -67, 1, 99, -58, -20, 118, 124, 3, 12, 123, -38, 77, -74, -52, -119, -51, 61, 22, 6, 7, -86, -111, -35, 55, -104, -47, 53};
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
    msg.setTimeStamp(0.9880790668629169);
    msg.setSource(19198U);
    msg.setSourceEntity(117U);
    msg.setDestination(37559U);
    msg.setDestinationEntity(57U);
    msg.req_id = 42805U;
    msg.ttl = 9983U;
    msg.destination.assign("XUFEKVMYYFJVKORYXTYDMTLFZRHOTFWPEMWZHLURIIBHKKBRLQBMDGRYTEZJDNXBAQPZXCGIJKZQOJPBROCOTIDBNFCJJJWGUUCMJORGJMEGQGFLKGSZCIKUXDNHTLTWDVZKFNCWBFEDPZBQCLXHNAHNKWUSONZHSATISWGMYQRSXPYEOVCALWYQFEGSW");
    const char tmp_msg_0[] = {110, 47, 8, -72, -44, 82, 112, -91, 79, 105, -66, -27, 94, 2, -68, 12, -64, 111, 99, -125, 47, 121, -74, -110, -7, 46, 47, 58, -43, 8, 20, -105, 23, 72, -111, 93, 89, 43, 24, -46, 35, -51, 58, -123, -13, -13, 113, 116, -127, 125, -59, -104, 64, -56, -14, -18, 72, -55, -9, -117, -74, 60, -38, 33, 38, 17, 33, -95, -62, 8, 57, 58, -116, 72, -100, -5, 51, 6, 0, -29, -67, -25, 77, 36, 79, 67, -33, 123, 109, 62, 113, -33, -94, 73, -85, 124, 9, -125, 52, -60, -61, -86, -13, -96, 98, -106, -124, 57};
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
    msg.setTimeStamp(0.6572333389806218);
    msg.setSource(8580U);
    msg.setSourceEntity(215U);
    msg.setDestination(12895U);
    msg.setDestinationEntity(121U);
    msg.req_id = 38354U;
    msg.ttl = 24196U;
    msg.destination.assign("MBMXYXVYGROOJIURCRTCXJKUZGMMPYQFMDNPAEESIWRAURFFIMMFCPNSOZWAAGLSHXNLSVSBMLIIPPGUOLAFNUZHHJWTVYZEDTK");
    const char tmp_msg_0[] = {102, 94, -7, 98, -109, -66, -36, -34, 100, -110, -73, 123, -7, -8, 82, -77, -119, 83, -75, 66, 3, 123, -81, 14, -124, 36, 113, -120, 5, 120, -123, -58, -118, -25, 23, 30, -23, -48, -61, 65, 86, -59, -96, -49, 27, 126, -70, -115, 122, 107, -91, 110, -112, 52, -109, -32, -55, -66, -35, 91, 29, 29, 25, -74, 18, 1, -101, 43, -99, -3, 11, -48, -123, -62, 106, -30, 29, -75, 4, -37, 105, 76, 76, -20, 44, 64, 7, 8, -80, -121, 50, 98, -68, -121, -26, -28, 27, 13, -55, -21, 43, -102, 64, -4, 77, -76, -115, 67, -106, 72, 98};
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
    msg.setTimeStamp(0.35223474433928037);
    msg.setSource(15727U);
    msg.setSourceEntity(133U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(242U);
    msg.req_id = 33057U;
    msg.status = 251U;
    msg.text.assign("SCTGWTSPPMQUHCZFEXHRUNGRAQUWMHUFWFVUPPNJSAWDFNFHKOXEFURXLBDVORETDFDBTYYEOSCSAPQWITNPEBM");

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
    msg.setTimeStamp(0.9123066580068284);
    msg.setSource(22074U);
    msg.setSourceEntity(230U);
    msg.setDestination(25052U);
    msg.setDestinationEntity(189U);
    msg.req_id = 56758U;
    msg.status = 210U;
    msg.text.assign("MBKMDZXSSYJRIPEDAJVEYXXFBQRSCBJGNDUAKSWABKIUGWAKPKYUTKDGEGTDFGHZCZDQMNILLCJLIJGQEJHONZJLIIFCSGIBEAORUAYQTTFXSQPBOXIQOLZFCQBNZJPAYHXHSLOZTSEORBFRXRPUTJHBHPFUGNDQNVVTZDAPLEANSXJMRMXWZCWEVNHCFYKLYEMNTWCHRM");

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
    msg.setTimeStamp(0.9355234722826493);
    msg.setSource(54936U);
    msg.setSourceEntity(94U);
    msg.setDestination(16397U);
    msg.setDestinationEntity(50U);
    msg.req_id = 24794U;
    msg.status = 169U;
    msg.text.assign("VPYHDTXYVDJFJRABZNHDQTXCALGGXUOVUHSWQYKTLDICEFKTBPKHRSLCNNPTRGZBUAQKVXYECFPAURRAGEFEKLVSFNMAAWBJZECWSDVRBYZLHEHWZW");

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
    msg.setTimeStamp(0.750001957275461);
    msg.setSource(1595U);
    msg.setSourceEntity(147U);
    msg.setDestination(61368U);
    msg.setDestinationEntity(0U);
    msg.group_name.assign("EJQHKHAXXOZEUWCSYMBCJWVXMWSAEUVNNGCWHUAQALVLCVPSJKOLXVIJIQDEQHRFFQGVGBHOMBENSOBFZIVXFDJTYVYTSG");
    msg.links = 2704369877U;

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
    msg.setTimeStamp(0.2700721893070889);
    msg.setSource(18047U);
    msg.setSourceEntity(183U);
    msg.setDestination(48784U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("RPFZIMBRSHEHYRWRNVPQOSRITMPJJWDMPLNDQLKUVBDSFATMREVWZYEGWLVQYKXKTKTFEYOZOMCWZHZZWCSEODUHCHUNAKPOIBYGCUEINRYKCJZWQMTGLJGTDFJYBBKJPVIJGSEXLPEMILYLODJAQFJAALFAOHTYOSIAVXMORCGKTXHUXNSAXRDZFUUOKAWVJQDADBFCVNNUGINCPXQMECUWREHVLBHGINKUTVFSMGI");
    msg.links = 2583993552U;

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
    msg.setTimeStamp(0.7118296288321769);
    msg.setSource(38765U);
    msg.setSourceEntity(249U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("YYFBKTKAUKZIPZJRWQSQZSDLTCIJSMJAYFGACEVKOBAHQJUZYDBZSHHOWAIURLGVDBITLFRPVPCGWLPJQWCFYYUNEWKQNRXTUMBBYHDTQPMKUSHXNONWFSBDLKVSKOTFPXIDODWAKCUGRPFJAEEGAVNXEVNHVRGMAOERLGDXOMYQBICMQRNYVOHEMCIJHTSAIFJDGZIXXHRPNZSTXBWPRDLJSMNU");
    msg.links = 435446416U;

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
    msg.setTimeStamp(0.22580314143855917);
    msg.setSource(52849U);
    msg.setSourceEntity(53U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(223U);
    msg.groupname.assign("FNPINHGPRQOPZXCWNFBSXECKYFPBYIMHKDVQIODQAGMNWBUEJDSFUJSEVPWQHVHKVGGNYXMPHCFVVXQWAAJKLHECPZSEAYFHRCLCKWMN");
    msg.action = 154U;
    msg.grouplist.assign("FADGDUQKKYLBZONOSGMRXPKXJMWVQTFAXXJMAINUWOCADBBTQLMDZIGTKSRBSYNFHECGBYAHUEGUMMYMAKBYUSTJWTHNMKRLCPZFJNBJNORLZPVHHAXPWGCPEJELRACTDSZCMOLZXQNWFZGRFIKCQJQIDHDNUJOFFNEHRLEEGVCOZFWILAVKJGKGZSFOIRYPBYOW");

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
    msg.setTimeStamp(0.9700482631655266);
    msg.setSource(37564U);
    msg.setSourceEntity(218U);
    msg.setDestination(7440U);
    msg.setDestinationEntity(173U);
    msg.groupname.assign("VFWFDUTSXBUXHREKDELXQGIAYPLPCKZPINCAFPMHGJWNVVFCJZOQGPJAZNLWJGGVFQZJDYMBTLOKUVHWDZJIBQBTLIWBGPOCHNTIQYHHZRANRYQJOUSJR");
    msg.action = 153U;
    msg.grouplist.assign("FFCNRPZJHIFNDODBVMADEWTXGWISAZDFVMQHCSJQQTSMOFBLRWBYZPIAOUIABTXPTMJSNPVJMKKEUAOBICFETHPLKCWYQHCRPYXOCUYGIVWKZEJFOXNRZHLMVWAVMMKAUHJQUSLDGTSJEYRAYDDRCCXDWOKKQPWPKYENAEIGGSGKGIDVBVZESBAPGNTJNEFLF");

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
    msg.setTimeStamp(0.21816956118742092);
    msg.setSource(48660U);
    msg.setSourceEntity(152U);
    msg.setDestination(37293U);
    msg.setDestinationEntity(130U);
    msg.groupname.assign("XDRHQHZWVRJXEAAUDJTOHYOLRJHQFCZLNJKOGPTNGINIBMYFQTFNMXSYVOZTLIV");
    msg.action = 254U;
    msg.grouplist.assign("GGDXIMHKNQVAYLTPCSRWCRZWRIPTJEGTHAFQKESCCXYQHXSNFWTUGKJVADMPXPKSGRPVNHAWLDOXSJVZAYONQXXSGWFOIZVOUDEQIKJTWUQYMLZEQLOAJFPQFBCYIRDJHYGVZBVXXQYCZEELENWOBANKQRBDCMPRMFONNWDIUZDWMBZDALBHOESFFESBTVYRJRSOLLUXPIJMCZABKOLHTKJKLPFNMGUETYRBVUAUGSZJTUM");

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
    msg.setTimeStamp(0.6177268784138855);
    msg.setSource(62035U);
    msg.setSourceEntity(145U);
    msg.setDestination(56713U);
    msg.setDestinationEntity(29U);
    msg.id = 129U;
    msg.range = 0.9854616158870463;

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
    msg.setTimeStamp(0.38049039895023795);
    msg.setSource(45605U);
    msg.setSourceEntity(161U);
    msg.setDestination(43935U);
    msg.setDestinationEntity(230U);
    msg.id = 211U;
    msg.range = 0.8118372731196868;

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
    msg.setTimeStamp(0.9808284302765629);
    msg.setSource(2280U);
    msg.setSourceEntity(114U);
    msg.setDestination(51339U);
    msg.setDestinationEntity(4U);
    msg.id = 214U;
    msg.range = 0.20142460363968906;

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
    msg.setTimeStamp(0.785740714512349);
    msg.setSource(28900U);
    msg.setSourceEntity(76U);
    msg.setDestination(1116U);
    msg.setDestinationEntity(235U);
    msg.beacon.assign("CNXUCWQBFVZBIAURDKQRLTDTEJSYGOZGSJPOLPIPMVPWLIHNLUAPQYKKZRGTNMGFJNQGFVNJDIVYFUJJPKSXLCVSPUJCHUTVMOTOTOFTRKBLEGQIZCORCCNAGBQRFJXXXJFY");
    msg.lat = 0.4267383470108558;
    msg.lon = 0.21565244363806546;
    msg.depth = 0.3552986116087302;
    msg.query_channel = 207U;
    msg.reply_channel = 229U;
    msg.transponder_delay = 1U;

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
    msg.setTimeStamp(0.17107697097864483);
    msg.setSource(56214U);
    msg.setSourceEntity(128U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(170U);
    msg.beacon.assign("AJDNFMPXSSQFGNQXIIHKERNCRNPCAIWUUAQLMGULTRAVLMUPDGQBHLCDJTOVTROIFHPZLPXFBNYDIEMXZZEKKKAHBGXRMFRYAGHTLZMWAWFZISOVQLCHOXMOOZSVOENRDSPVKSITRFLU");
    msg.lat = 0.464653483685473;
    msg.lon = 0.45848137325013993;
    msg.depth = 0.6920742513977788;
    msg.query_channel = 82U;
    msg.reply_channel = 210U;
    msg.transponder_delay = 58U;

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
    msg.setTimeStamp(0.13954712720438978);
    msg.setSource(16004U);
    msg.setSourceEntity(139U);
    msg.setDestination(50245U);
    msg.setDestinationEntity(65U);
    msg.beacon.assign("UZWPXFJNUJQWLVNNOSDUXONKKWIWOXZEVMDBBXWSYXATXVOLVJBXWOBRBA");
    msg.lat = 0.652391802188495;
    msg.lon = 0.06923098388027393;
    msg.depth = 0.5441319101404588;
    msg.query_channel = 47U;
    msg.reply_channel = 44U;
    msg.transponder_delay = 120U;

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
    msg.setTimeStamp(0.753500239791446);
    msg.setSource(2533U);
    msg.setSourceEntity(180U);
    msg.setDestination(58886U);
    msg.setDestinationEntity(22U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.7316176865173213);
    msg.setSource(63556U);
    msg.setSourceEntity(167U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(252U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.32302574551367125);
    msg.setSource(5300U);
    msg.setSourceEntity(39U);
    msg.setDestination(63191U);
    msg.setDestinationEntity(44U);
    msg.op = 58U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VNUCWIFAENXSPEPOYQWXLDDBHHQEMPKIAXKBADSLKXHZULCJWNBUDAELMPLSPZUGSTVHGJTFLSZZBHQOOEQCGKMTWXFDBYFVEMYIABJ");
    tmp_msg_0.lat = 0.7435580889776126;
    tmp_msg_0.lon = 0.10633474928408138;
    tmp_msg_0.depth = 0.28992669908377044;
    tmp_msg_0.query_channel = 224U;
    tmp_msg_0.reply_channel = 81U;
    tmp_msg_0.transponder_delay = 192U;
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
    msg.setTimeStamp(0.3453962279161762);
    msg.setSource(41985U);
    msg.setSourceEntity(98U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(152U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("KOXZJUSYMFLGZMHGIHYVVUDMPHJLGWOAMJSGUJDLAABNXNYRDWUCDIEXHXNNDLDTUPQEYRTBPCEPACTQUFBTYBHARNJONIVYZXMCQUXCVBMZRBYZICPRRFOIINCGHZPWSKCFFGMVVEBHQJRKLSQOFWKDBWTPDWQMRVLIGEMAVCTTTKSTRGE");
    tmp_msg_0.state = 31U;
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
    msg.setTimeStamp(0.6664194677363919);
    msg.setSource(11462U);
    msg.setSourceEntity(147U);
    msg.setDestination(47629U);
    msg.setDestinationEntity(166U);
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.plan_ref = 2585957451U;
    tmp_msg_0.id.assign("KBQRCBHDYOYOGKMTDGFNAXYKCUTHSWZQJVKUVCDNZTGLSGPWGOQRLPZMNIZWMIWWTMGVPARYWXIOLTFBBMDVFQKMCYZHSDNLSBQGOSXHEKFDHZEMFVPFAOYUONCIMPQIDVQCCAUUMKPLWEPZRRWFJPJXHLOFENSAUVXJALDRJLWHEBKJJSZKXCHILCGSRAVEJYINSTATLGIQUETRNUNPTHBOIEHYBVIGFZAJXNBE");
    tmp_msg_0.memento.assign("OROFQDBGNLHGSOBNPPMIIZBXOVYOJGCQFXHVSCDZCKCUBVCFUISJXIVIRKXYHUHKRLHAADIPBFSKSHMXTWYEYPMLNYZOGMXMXRLYQNPJOBJEWVUPVMW");
    tmp_msg_0.system = 26269U;
    tmp_msg_0.duration = 64717U;
    tmp_msg_0.speed = 0.03116730265847456;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.x = 0.7218518489757608;
    tmp_msg_0.y = 0.2734644777900489;
    tmp_msg_0.z = 0.5277587176359806;
    tmp_msg_0.z_units = 43U;
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
    msg.setTimeStamp(0.8292032955264705);
    msg.setSource(38430U);
    msg.setSourceEntity(77U);
    msg.setDestination(12677U);
    msg.setDestinationEntity(144U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("RVXQFGPWISLVVQOEMHJIWIBHXZJDFLRSYFBQFYHYZFCITUNUTYCMWAWWRUDOHMWYDZVBEYOUFVGDNLVXILCEBGFUBWIQDHPKKORXBVALNDDPOAIKCGALOEESZMIWTFJZNPPJHKKTCXDIKEJKAJCEEZABJOXLDYTRAMAUOWYLXZJHNQQCVHORXMHSG");
    tmp_msg_0.value = 228U;
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
    msg.setTimeStamp(0.431288849249453);
    msg.setSource(52448U);
    msg.setSourceEntity(87U);
    msg.setDestination(114U);
    msg.setDestinationEntity(147U);
    msg.op = 16U;
    msg.system.assign("MTVPBRPISDWUKKSELCPMQOWBWQKGMXXEKCFXTCQTYYTUOCAXFZYOWOGRB");
    msg.range = 0.8284883584702157;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DMXGVPQOAKPHNNOYDVRXELYMTSVDCCOMSZAYMBTKYRHFQHNLBOFGUYIETKDZATVIMTWYFGILJEXQFMKRPIWTDIBIXHRUNVZBJEVUOSBDEPGASKKIEBWTPUCRTMZUOWLZYCRULSMRXOQVYXRTSJYJANOGGLHJINWWUQGIEARPNWMXZHDSOAOBCYAFZAHTUUEFNCNXPXCIHGV");
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
    msg.setTimeStamp(0.11263027096999512);
    msg.setSource(24576U);
    msg.setSourceEntity(117U);
    msg.setDestination(34651U);
    msg.setDestinationEntity(94U);
    msg.op = 175U;
    msg.system.assign("WYXUZVYGGHTLBSZLHZLEYSRAPBKCFDCQKBDORLRIXVNOBHORSMEWMKAWFCYKSJAIEKWGMNTTSCMFEJKVEFGHABOEQRZMSXMAUXEZJDPQWABZVSWNNWULSVQVSVYQKLIIIYTKNUOOGJXSRCKGRFMDDOJINEJFHAQYQXHQFVNXQBFBPCYCPUIDDMMHPGXRWHCXLZVCOCTDNAGJTULNULPRYUBTXAJMWEHPUZTRADIGPGTJJZFBIVHOPYDEOWZ");
    msg.range = 0.8782857868801294;
    IMC::LowLevelControl tmp_msg_0;
    tmp_msg_0.plan_ref = 10043905U;
    tmp_msg_0.id.assign("DWBMGFFVKTUMGSNOQYXXHZYUXNLBSWDBWIFHRSDHGFTONPLCZJIFECPTGAIZZQZPQQGBNAIMKSEXHPIZNHJGSIJRCQEJMBTAGPHLMKDRCABMZZIWPOAUU");
    tmp_msg_0.memento.assign("AUOIEDJPKIIPNMDQTGB");
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10989741279994669;
    tmp_tmp_msg_0_0.z_units = 49U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 19783U;
    tmp_msg_0.custom.assign("LFKRHWUOLOENHYDVATFPMUOGNBJRMTDHHJJOKCFGTHEGIOXYXOQNZVAINMLVXNWCSUPZUWKKPBMDMBGRWFEQKOMERBWABVFQDIZPLWEXCQWJBVESVYTAHTCGYUFKEDLMILAEQDQXAYZWRZWJAJCYVM");
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
    msg.setTimeStamp(0.8445170603483922);
    msg.setSource(3486U);
    msg.setSourceEntity(55U);
    msg.setDestination(42604U);
    msg.setDestinationEntity(74U);
    msg.op = 190U;
    msg.system.assign("BPXQOAKABRSYHZIGKFCPSFMJYEXDRNMVDDIFMEUUFIVBKYRNLISNQMNQEXFSSYPMDWQXUJLLROEPGCRDJWTWECKHDJHVKWKPTVFXCHFEYQQJUZTCGNXIQULGTOHUGUYABCAUGKRCFEBVTQTZEYAMLNBJSLPLTANBMDZFXPOEDZZKOMJBZAJSRUB");
    msg.range = 0.5976105553728155;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 151U;
    tmp_msg_0.plan_id.assign("OQVMOAJILDUDROSUQUYLQMDMIWSHBPHVFULBABKJCYSQRFOLKOSGYWFCHYGCGIWCMXKTXMZGECXBTDRWSQJZIEIZZMAOHPH");
    tmp_msg_0.comm_level = 74U;
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
    msg.setTimeStamp(0.9638359658905402);
    msg.setSource(18233U);
    msg.setSourceEntity(195U);
    msg.setDestination(16298U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.7664762262090254);
    msg.setSource(17258U);
    msg.setSourceEntity(60U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.5639303519424401);
    msg.setSource(60843U);
    msg.setSourceEntity(190U);
    msg.setDestination(20084U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.19195580257569078);
    msg.setSource(49345U);
    msg.setSourceEntity(199U);
    msg.setDestination(40201U);
    msg.setDestinationEntity(208U);
    msg.list.assign("OLPUYGRSNYTEPKLCMVJKQADEARTDTTZEXZKPBOZXHJQNAWARNALBQFOXQ");

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
    msg.setTimeStamp(0.7064411467666074);
    msg.setSource(31516U);
    msg.setSourceEntity(9U);
    msg.setDestination(5535U);
    msg.setDestinationEntity(165U);
    msg.list.assign("EUPIYDJDNKMBFVKELFCOKARXCQCPMRPIHZPVXZWLLMWANEFYWHTFQOZHXDBCLOHZHGDRLWJIAODETPFVKSMTDKUODSIIQDPACRPXFKTEGAVKIZXXEIVYLSYQSWIVJTJFYUTBPKQGWXKYDWLHONGMNHJJDOBPMC");

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
    msg.setTimeStamp(0.2978891584521679);
    msg.setSource(48739U);
    msg.setSourceEntity(223U);
    msg.setDestination(28110U);
    msg.setDestinationEntity(138U);
    msg.list.assign("EMAKXADVRLVRYIBNSAWRXROQRTXERHDZYCVNBNCTOUPPXUHZNXUGXLJFFSGRKTEQVWECFZWEBUJWBABGYKJHLSLVKNKDFWSINDVUHWYGTNAHBHAOWNZPKAEAPICEJNRGFRKTFZMSQISJYUFJQDQZOGSCPGOZYLCLVXAPIFCQDBOMZJWDIYOSHXUWSDFKHOQQWAOVYISVKJMYR");

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
    msg.setTimeStamp(0.793360520530114);
    msg.setSource(48448U);
    msg.setSourceEntity(21U);
    msg.setDestination(16399U);
    msg.setDestinationEntity(87U);
    msg.value = 4699;

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
    msg.setTimeStamp(0.6052484634806764);
    msg.setSource(45969U);
    msg.setSourceEntity(13U);
    msg.setDestination(49355U);
    msg.setDestinationEntity(90U);
    msg.value = 1514;

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
    msg.setTimeStamp(0.9359987666827113);
    msg.setSource(35726U);
    msg.setSourceEntity(32U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(213U);
    msg.value = 20225;

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
    msg.setTimeStamp(0.483090683739097);
    msg.setSource(59649U);
    msg.setSourceEntity(189U);
    msg.setDestination(35910U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5954211291439746;

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
    msg.setTimeStamp(0.8504393903509687);
    msg.setSource(42497U);
    msg.setSourceEntity(147U);
    msg.setDestination(35715U);
    msg.setDestinationEntity(79U);
    msg.value = 0.9607309749791234;

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
    msg.setTimeStamp(0.43886939994193275);
    msg.setSource(62793U);
    msg.setSourceEntity(84U);
    msg.setDestination(29887U);
    msg.setDestinationEntity(2U);
    msg.value = 0.13911482281597343;

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
    msg.setTimeStamp(0.14369526703802415);
    msg.setSource(57808U);
    msg.setSourceEntity(162U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(75U);
    msg.value = 0.7708693479149052;

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
    msg.setTimeStamp(0.9602843316999917);
    msg.setSource(36950U);
    msg.setSourceEntity(184U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(197U);
    msg.value = 0.012935335305364726;

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
    msg.setTimeStamp(0.8110675608857507);
    msg.setSource(37874U);
    msg.setSourceEntity(2U);
    msg.setDestination(36729U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9221862286536312;

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
    msg.setTimeStamp(0.7068027883999204);
    msg.setSource(63107U);
    msg.setSourceEntity(233U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(163U);
    msg.validity = 49456U;
    msg.type = 147U;
    msg.utc_year = 1603U;
    msg.utc_month = 80U;
    msg.utc_day = 44U;
    msg.utc_time = 0.1795808301916122;
    msg.lat = 0.692540281636644;
    msg.lon = 0.2479803024796834;
    msg.height = 0.32537699591564884;
    msg.satellites = 246U;
    msg.cog = 0.5342821791941862;
    msg.sog = 0.02237462962434389;
    msg.hdop = 0.14648691070775655;
    msg.vdop = 0.6884160534570014;
    msg.hacc = 0.43635967416766963;
    msg.vacc = 0.0647861106523;

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
    msg.setTimeStamp(0.482602706005096);
    msg.setSource(41589U);
    msg.setSourceEntity(25U);
    msg.setDestination(59302U);
    msg.setDestinationEntity(125U);
    msg.validity = 43645U;
    msg.type = 195U;
    msg.utc_year = 64251U;
    msg.utc_month = 65U;
    msg.utc_day = 249U;
    msg.utc_time = 0.3363231749178053;
    msg.lat = 0.3392921876745474;
    msg.lon = 0.9851568459198285;
    msg.height = 0.60456048773955;
    msg.satellites = 101U;
    msg.cog = 0.0007820834820484457;
    msg.sog = 0.9741280312438837;
    msg.hdop = 0.4194703698317753;
    msg.vdop = 0.48821740475256625;
    msg.hacc = 0.4393555741551618;
    msg.vacc = 0.8049613428306313;

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
    msg.setTimeStamp(0.7279718687678768);
    msg.setSource(15791U);
    msg.setSourceEntity(188U);
    msg.setDestination(46396U);
    msg.setDestinationEntity(166U);
    msg.validity = 46127U;
    msg.type = 215U;
    msg.utc_year = 50597U;
    msg.utc_month = 30U;
    msg.utc_day = 9U;
    msg.utc_time = 0.9106953993376534;
    msg.lat = 0.459003969458053;
    msg.lon = 0.7373874240112799;
    msg.height = 0.14567327544810693;
    msg.satellites = 135U;
    msg.cog = 0.11900295042375886;
    msg.sog = 0.9259662352193914;
    msg.hdop = 0.16315600882413273;
    msg.vdop = 0.41267208715340575;
    msg.hacc = 0.45050579692738413;
    msg.vacc = 0.016834373026498373;

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
    msg.setTimeStamp(0.7992466713991054);
    msg.setSource(20062U);
    msg.setSourceEntity(189U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(230U);
    msg.time = 0.3059340544720325;
    msg.phi = 0.5230445411585599;
    msg.theta = 0.7927878007763485;
    msg.psi = 0.7953873476714027;
    msg.psi_magnetic = 0.2668603907546744;

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
    msg.setTimeStamp(0.2704212838767628);
    msg.setSource(25161U);
    msg.setSourceEntity(200U);
    msg.setDestination(22833U);
    msg.setDestinationEntity(162U);
    msg.time = 0.7799534076951447;
    msg.phi = 0.31308632402256176;
    msg.theta = 0.19247120958275943;
    msg.psi = 0.6233716957338471;
    msg.psi_magnetic = 0.29719325421800025;

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
    msg.setTimeStamp(0.3218933114871063);
    msg.setSource(28073U);
    msg.setSourceEntity(145U);
    msg.setDestination(4781U);
    msg.setDestinationEntity(64U);
    msg.time = 0.3703908676138673;
    msg.phi = 0.7803954712525242;
    msg.theta = 0.4153958463488734;
    msg.psi = 0.7836457277753389;
    msg.psi_magnetic = 0.06711564351994104;

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
    msg.setTimeStamp(0.43360631717234555);
    msg.setSource(38076U);
    msg.setSourceEntity(145U);
    msg.setDestination(6601U);
    msg.setDestinationEntity(89U);
    msg.time = 0.45375243122504516;
    msg.x = 0.21004841882673553;
    msg.y = 0.49297709181745397;
    msg.z = 0.17501662625286019;
    msg.timestep = 0.6217530179885624;

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
    msg.setTimeStamp(0.3598814391498407);
    msg.setSource(40445U);
    msg.setSourceEntity(208U);
    msg.setDestination(30441U);
    msg.setDestinationEntity(15U);
    msg.time = 0.822594107970425;
    msg.x = 0.3727635088528093;
    msg.y = 0.2330411357608142;
    msg.z = 0.47487421717615297;
    msg.timestep = 0.2441551515626489;

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
    msg.setTimeStamp(0.561997437724421);
    msg.setSource(29650U);
    msg.setSourceEntity(235U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(128U);
    msg.time = 0.8551708065632901;
    msg.x = 0.07010240740089413;
    msg.y = 0.6464546473457561;
    msg.z = 0.5928316280455322;
    msg.timestep = 0.300680887623789;

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
    msg.setTimeStamp(0.5417711016455543);
    msg.setSource(31528U);
    msg.setSourceEntity(235U);
    msg.setDestination(20997U);
    msg.setDestinationEntity(249U);
    msg.time = 0.8714386228642904;
    msg.x = 0.15848392736704986;
    msg.y = 0.3240263856582456;
    msg.z = 0.8981643919325184;

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
    msg.setTimeStamp(0.7074835576269204);
    msg.setSource(41438U);
    msg.setSourceEntity(204U);
    msg.setDestination(42102U);
    msg.setDestinationEntity(37U);
    msg.time = 0.9210827677681984;
    msg.x = 0.04597156256797108;
    msg.y = 0.36223678821067096;
    msg.z = 0.29665803966523396;

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
    msg.setTimeStamp(0.8311039430428145);
    msg.setSource(41166U);
    msg.setSourceEntity(14U);
    msg.setDestination(17785U);
    msg.setDestinationEntity(227U);
    msg.time = 0.09881858881769101;
    msg.x = 0.2518179172692183;
    msg.y = 0.8382253068558233;
    msg.z = 0.4956733990866081;

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
    msg.setTimeStamp(0.5265693918899844);
    msg.setSource(33383U);
    msg.setSourceEntity(142U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(143U);
    msg.time = 0.17825073391106516;
    msg.x = 0.8282328360097433;
    msg.y = 0.3078404550565319;
    msg.z = 0.02062604230414622;

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
    msg.setTimeStamp(0.20898107268334232);
    msg.setSource(13080U);
    msg.setSourceEntity(141U);
    msg.setDestination(31558U);
    msg.setDestinationEntity(15U);
    msg.time = 0.11905516175892772;
    msg.x = 0.11378434217645939;
    msg.y = 0.6666970977966321;
    msg.z = 0.8432397798930896;

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
    msg.setTimeStamp(0.8833775653671646);
    msg.setSource(60740U);
    msg.setSourceEntity(248U);
    msg.setDestination(31671U);
    msg.setDestinationEntity(177U);
    msg.time = 0.023640087784306707;
    msg.x = 0.17919766300377526;
    msg.y = 0.6473891539663784;
    msg.z = 0.6458231305419938;

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
    msg.setTimeStamp(0.5994614080957658);
    msg.setSource(59574U);
    msg.setSourceEntity(1U);
    msg.setDestination(21334U);
    msg.setDestinationEntity(0U);
    msg.time = 0.7656455178324135;
    msg.x = 0.3480555126559951;
    msg.y = 0.21703742327605513;
    msg.z = 0.47067667472566577;

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
    msg.setTimeStamp(0.9054347619070657);
    msg.setSource(8825U);
    msg.setSourceEntity(248U);
    msg.setDestination(7552U);
    msg.setDestinationEntity(159U);
    msg.time = 0.6710149467423342;
    msg.x = 0.04283770302783807;
    msg.y = 0.34955160629989157;
    msg.z = 0.29361822079037125;

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
    msg.setTimeStamp(0.07375777095332503);
    msg.setSource(62415U);
    msg.setSourceEntity(228U);
    msg.setDestination(46042U);
    msg.setDestinationEntity(107U);
    msg.time = 0.10727518680340264;
    msg.x = 0.960528576241439;
    msg.y = 0.6871158767040889;
    msg.z = 0.9228893100961347;

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
    msg.setTimeStamp(0.10459182955785418);
    msg.setSource(26362U);
    msg.setSourceEntity(60U);
    msg.setDestination(16379U);
    msg.setDestinationEntity(59U);
    msg.validity = 166U;
    msg.x = 0.9954656326066575;
    msg.y = 0.8905543443186107;
    msg.z = 0.45605814501406505;

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
    msg.setTimeStamp(0.13863786021102764);
    msg.setSource(22308U);
    msg.setSourceEntity(224U);
    msg.setDestination(1170U);
    msg.setDestinationEntity(101U);
    msg.validity = 215U;
    msg.x = 0.5978694406791317;
    msg.y = 0.774016850254047;
    msg.z = 0.5355413123394268;

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
    msg.setTimeStamp(0.4721555229219426);
    msg.setSource(44207U);
    msg.setSourceEntity(232U);
    msg.setDestination(33252U);
    msg.setDestinationEntity(12U);
    msg.validity = 31U;
    msg.x = 0.14288017768647465;
    msg.y = 0.0034826072892201188;
    msg.z = 0.6105058758201988;

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
    msg.setTimeStamp(0.755336456312881);
    msg.setSource(28923U);
    msg.setSourceEntity(154U);
    msg.setDestination(19271U);
    msg.setDestinationEntity(13U);
    msg.validity = 138U;
    msg.x = 0.6038469183853417;
    msg.y = 0.6701579048102613;
    msg.z = 0.9974111824525143;

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
    msg.setTimeStamp(0.8306668430559285);
    msg.setSource(11230U);
    msg.setSourceEntity(211U);
    msg.setDestination(50004U);
    msg.setDestinationEntity(216U);
    msg.validity = 100U;
    msg.x = 0.6896554771806664;
    msg.y = 0.5507263484513593;
    msg.z = 0.8865762484045179;

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
    msg.setTimeStamp(0.5809377689374869);
    msg.setSource(48385U);
    msg.setSourceEntity(47U);
    msg.setDestination(49881U);
    msg.setDestinationEntity(86U);
    msg.validity = 156U;
    msg.x = 0.9584423630402396;
    msg.y = 0.29770115177279266;
    msg.z = 0.6015487030080731;

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
    msg.setTimeStamp(0.004059922582638209);
    msg.setSource(30715U);
    msg.setSourceEntity(35U);
    msg.setDestination(54237U);
    msg.setDestinationEntity(207U);
    msg.time = 0.0017404215779596166;
    msg.x = 0.04170448655655101;
    msg.y = 0.022203274934216255;
    msg.z = 0.2983560992489721;

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
    msg.setTimeStamp(0.7988863891039759);
    msg.setSource(62375U);
    msg.setSourceEntity(244U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(4U);
    msg.time = 0.021697161859310587;
    msg.x = 0.3079153826754245;
    msg.y = 0.9869749191998508;
    msg.z = 0.8852253741708075;

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
    msg.setTimeStamp(0.36954217618312546);
    msg.setSource(30098U);
    msg.setSourceEntity(197U);
    msg.setDestination(41925U);
    msg.setDestinationEntity(211U);
    msg.time = 0.23875190590728101;
    msg.x = 0.7572120963123866;
    msg.y = 0.6009599516936367;
    msg.z = 0.6837923630334801;

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
    msg.setTimeStamp(0.4661155078974655);
    msg.setSource(52107U);
    msg.setSourceEntity(88U);
    msg.setDestination(21954U);
    msg.setDestinationEntity(18U);
    msg.validity = 47U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.20400190688569464;
    tmp_msg_0.beam_height = 0.799652315071623;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.21044971159295944;

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
    msg.setTimeStamp(0.38025745796394583);
    msg.setSource(52704U);
    msg.setSourceEntity(73U);
    msg.setDestination(48290U);
    msg.setDestinationEntity(23U);
    msg.validity = 251U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6336308232958684;
    tmp_msg_0.beam_height = 0.9451654866600464;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.7559203457629998;

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
    msg.setTimeStamp(0.6993487296735518);
    msg.setSource(49478U);
    msg.setSourceEntity(154U);
    msg.setDestination(17094U);
    msg.setDestinationEntity(55U);
    msg.validity = 29U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4559448981759766;
    tmp_msg_0.y = 0.7276704849455156;
    tmp_msg_0.z = 0.2269699504696443;
    tmp_msg_0.phi = 0.3425645331868885;
    tmp_msg_0.theta = 0.9954506292457885;
    tmp_msg_0.psi = 0.4580725757847044;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8517728764378738;

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
    msg.setTimeStamp(0.11062144475162039);
    msg.setSource(34167U);
    msg.setSourceEntity(14U);
    msg.setDestination(10800U);
    msg.setDestinationEntity(71U);
    msg.value = 0.9566137516411402;

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
    msg.setTimeStamp(0.662705198411253);
    msg.setSource(47847U);
    msg.setSourceEntity(77U);
    msg.setDestination(21144U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7429512883104031;

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
    msg.setTimeStamp(0.6487134526276626);
    msg.setSource(44640U);
    msg.setSourceEntity(114U);
    msg.setDestination(27681U);
    msg.setDestinationEntity(186U);
    msg.value = 0.13843411511413906;

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
    msg.setTimeStamp(0.3351721724490284);
    msg.setSource(44583U);
    msg.setSourceEntity(47U);
    msg.setDestination(28876U);
    msg.setDestinationEntity(64U);
    msg.value = 0.549155999194256;

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
    msg.setTimeStamp(0.005330487157649166);
    msg.setSource(39869U);
    msg.setSourceEntity(57U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(125U);
    msg.value = 0.04644170102229106;

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
    msg.setTimeStamp(0.2256067060123763);
    msg.setSource(17164U);
    msg.setSourceEntity(207U);
    msg.setDestination(63832U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5135037492304868;

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
    msg.setTimeStamp(0.16910300831261105);
    msg.setSource(44376U);
    msg.setSourceEntity(126U);
    msg.setDestination(328U);
    msg.setDestinationEntity(181U);
    msg.value = 0.7448406621247495;

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
    msg.setTimeStamp(0.9928726291761282);
    msg.setSource(4962U);
    msg.setSourceEntity(92U);
    msg.setDestination(19349U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9272791589268367;

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
    msg.setTimeStamp(0.3676032589563065);
    msg.setSource(50222U);
    msg.setSourceEntity(144U);
    msg.setDestination(6338U);
    msg.setDestinationEntity(122U);
    msg.value = 0.9442619396761324;

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
    msg.setTimeStamp(0.9741639803640069);
    msg.setSource(52744U);
    msg.setSourceEntity(16U);
    msg.setDestination(56867U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8407150129034102;

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
    msg.setTimeStamp(0.19211819164123511);
    msg.setSource(17387U);
    msg.setSourceEntity(206U);
    msg.setDestination(45003U);
    msg.setDestinationEntity(129U);
    msg.value = 0.16369469859221464;

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
    msg.setTimeStamp(0.538457064435495);
    msg.setSource(10793U);
    msg.setSourceEntity(94U);
    msg.setDestination(32671U);
    msg.setDestinationEntity(114U);
    msg.value = 0.7138584140360938;

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
    msg.setTimeStamp(0.24565444761037725);
    msg.setSource(27080U);
    msg.setSourceEntity(56U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7651593896379906;

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
    msg.setTimeStamp(0.04651257621783256);
    msg.setSource(28940U);
    msg.setSourceEntity(179U);
    msg.setDestination(10067U);
    msg.setDestinationEntity(152U);
    msg.value = 0.3713508047258275;

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
    msg.setTimeStamp(0.05712071088472015);
    msg.setSource(48040U);
    msg.setSourceEntity(152U);
    msg.setDestination(34624U);
    msg.setDestinationEntity(207U);
    msg.value = 0.22347187200126206;

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
    msg.setTimeStamp(0.442072573982202);
    msg.setSource(48534U);
    msg.setSourceEntity(112U);
    msg.setDestination(22991U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6659885913039517;

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
    msg.setTimeStamp(0.9276301743639908);
    msg.setSource(16810U);
    msg.setSourceEntity(89U);
    msg.setDestination(50070U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3786512803298224;

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
    msg.setTimeStamp(0.44406549616266333);
    msg.setSource(12794U);
    msg.setSourceEntity(213U);
    msg.setDestination(44190U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8026184211627764;

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
    msg.setTimeStamp(0.8446610093899606);
    msg.setSource(55362U);
    msg.setSourceEntity(43U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9507603754911528;

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
    msg.setTimeStamp(0.8734781717340963);
    msg.setSource(53321U);
    msg.setSourceEntity(162U);
    msg.setDestination(29989U);
    msg.setDestinationEntity(200U);
    msg.value = 0.4915025248602575;

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
    msg.setTimeStamp(0.058175747981542014);
    msg.setSource(40511U);
    msg.setSourceEntity(40U);
    msg.setDestination(45027U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5640831248909747;

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
    msg.setTimeStamp(0.5103281112639053);
    msg.setSource(42314U);
    msg.setSourceEntity(13U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(183U);
    msg.value = 0.5527563765496113;

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
    msg.setTimeStamp(0.08171830965163895);
    msg.setSource(9503U);
    msg.setSourceEntity(49U);
    msg.setDestination(11732U);
    msg.setDestinationEntity(247U);
    msg.value = 0.27700267471476914;

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
    msg.setTimeStamp(0.24823550977290576);
    msg.setSource(23641U);
    msg.setSourceEntity(164U);
    msg.setDestination(50520U);
    msg.setDestinationEntity(176U);
    msg.value = 0.39967333799670235;

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
    msg.setTimeStamp(0.16959829653795777);
    msg.setSource(50047U);
    msg.setSourceEntity(179U);
    msg.setDestination(55769U);
    msg.setDestinationEntity(162U);
    msg.direction = 0.8422176708676433;
    msg.speed = 0.5952162744729864;
    msg.turbulence = 0.5131603079696065;

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
    msg.setTimeStamp(0.7307428509617131);
    msg.setSource(2924U);
    msg.setSourceEntity(84U);
    msg.setDestination(33110U);
    msg.setDestinationEntity(47U);
    msg.direction = 0.2544638277074055;
    msg.speed = 0.02736001390450904;
    msg.turbulence = 0.8969285716476558;

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
    msg.setTimeStamp(0.7215924052119731);
    msg.setSource(63132U);
    msg.setSourceEntity(139U);
    msg.setDestination(32159U);
    msg.setDestinationEntity(183U);
    msg.direction = 0.11365649854689597;
    msg.speed = 0.7557499698420447;
    msg.turbulence = 0.2610075309069001;

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
    msg.setTimeStamp(0.9061702712088034);
    msg.setSource(22203U);
    msg.setSourceEntity(128U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5564580504212847;

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
    msg.setTimeStamp(0.31600665981494513);
    msg.setSource(23436U);
    msg.setSourceEntity(130U);
    msg.setDestination(37262U);
    msg.setDestinationEntity(196U);
    msg.value = 0.8430421149965079;

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
    msg.setTimeStamp(0.6988526802993414);
    msg.setSource(38412U);
    msg.setSourceEntity(14U);
    msg.setDestination(15008U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8014874574031629;

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
    msg.setTimeStamp(0.08528501480521933);
    msg.setSource(11609U);
    msg.setSourceEntity(253U);
    msg.setDestination(33899U);
    msg.setDestinationEntity(115U);
    msg.value.assign("NMVVAPKMAYVXXCEFQJSMGGXUTPIXAJTXWRRYWOYJFWCXZWVWDVVLCPBIQXMHLZVGJQIYQNSBEASRLCYZQRYJNLNWDFARGCAKRLXVOUEFCOFEIIAKHTDNLMYMKSZTUUBYBJPHZLPHVHCNODUNNHEEETIOADGTFKHXWHYTLBLZUEUBRFOSKUEOFIZOPIBZFQNZGTQTMQXBHPOAMFQWWOERGSBKPVSKZDJJKMNHRSBDGDJCITUIMR");

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
    msg.setTimeStamp(0.7566385440683496);
    msg.setSource(62577U);
    msg.setSourceEntity(153U);
    msg.setDestination(64300U);
    msg.setDestinationEntity(103U);
    msg.value.assign("GKGACEBKEBLYYMWASLCTYCOYLKGNFJIJMASYGJJVYRQDUQNKCJNPXULGMSFGXQFLCVFQWOEWBXUYBXDGYQOVPWOMPZIACLVISZGNKQMXTEECOREKTQFUZFWDODGEK");

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
    msg.setTimeStamp(0.01863329071608477);
    msg.setSource(64475U);
    msg.setSourceEntity(201U);
    msg.setDestination(48440U);
    msg.setDestinationEntity(4U);
    msg.value.assign("BFHZIZLKPBDBGQIUOWCOKAMADTENZSMVRTLFXZDWFIYAPQRAYQNGXUXMOLNIWSNXYO");

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
    msg.setTimeStamp(0.11255484242418545);
    msg.setSource(33191U);
    msg.setSourceEntity(99U);
    msg.setDestination(21720U);
    msg.setDestinationEntity(59U);
    const char tmp_msg_0[] = {70, 10, 104, 29, 28, -93, -81, -100, -108, 119, -127, 30, -21, 10, 22, 108, -120, -27, 58, 88, 55, 46, -50, 32, -57, -42, -108, -118, 54, -37, 111, 62, -52, 120, 41, -115, 86, -126, -75, -91, 33, -122, -58, 54, -78, -95, 106, 119, 104, -68, -104, -105, 77, 29, -72, -55, 40, 87, -1, -109, -43, -109, 52, 114, -30, -76, 61, 42, -25, 110, 39, -4, 48, -118, -96, 124, 125, -17, 85, 21, -117, -87, 65, -97, 29, -88, -127, -27, 13, 0, 32, 21, -5, -123, 67, -75, 79, 61, 57, -102, 9, -35, -43, 114, 23, -104, -51, 54, 106, -8, 28, -68, 124, 89, -112, -51, 96, 103, -116, -45, -96, 102, 109, 78, 74, 17, -67, -5, 49, -17, -124, 111, -44, 67, 104, -104, -92, 55, -112, -126, 92, 31, 98, 62, -56, 81, 118, -44, -13, -10, -10, -95, 89, -86, -6, 98, 121, -127, -108, -27, -93, 94, 71, -88, -14, 83, -74, -56, -68, 31, -43, 72, -110, 118};
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
    msg.setTimeStamp(0.5675005375519695);
    msg.setSource(33419U);
    msg.setSourceEntity(13U);
    msg.setDestination(59001U);
    msg.setDestinationEntity(135U);
    const char tmp_msg_0[] = {90, 40, 67, 35, -49, -124, -56, -6, -85, -34, 35, 94, 46, -125, -35, -60, -104, -81, 23, 111, 102, -73, -110, 100, 19, -49, 11, -4, -91, -5, 92, 11, -93, -52, 32, 50, 121, 14, -81, 114, 101, -91, -117, 62, -95, -64, -128, -18, -92, -52, -39, -2, -108, 92, -87, -57, 49, 29, 111, -119, -123, -105, -124, -48, 103};
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
    msg.setTimeStamp(0.8416391513036426);
    msg.setSource(22651U);
    msg.setSourceEntity(119U);
    msg.setDestination(12949U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {10, 46, 31, 62, 21, -102, 108, 93, -113, 110, 117, 85, -62, 32, -87, 28, 91, 107, 83, -54, 104, -52, 61, -80, -79, 91, 85, -94, -72, -11, -61, -87, -37, -106, 49, 21, -121, 40, 46, -107, -113, -107, -47, -72, -125, 4, -4, 91, -38, 41, 19, 73, 101, -69, -95, 124, -2, 46, 52, 20, 87, 126, 109, -116, 69, -59, -27, -68, -111, 46, 34, -21, 25, 27, -72, -80, 119, 6, -9, 109, 72, -87, -78, 20, 94, -40, 80, 105, 60, -20, -121, -28, -91, -71, -15, 117, 13, 26, -126, 90, 0, -24, -73, -116, 111, -4, -84, 42, 1, 120, 44, 1, 125, 29, -73, -89, -74, 78, -73, 122, 50, 30, 103, 44, -65, 43, -10, 34, -57, 84, 28, -98, -99, 23, -56, 33, 22, -30, -20, 90, 41, -114, -77, 13, -10, 63, 18, -77, -25, -121, -79, 86, -72, 77, -128, 121, 76, 3, 125, -102, -116, -53, -114, 100, -67, -38, -123, 10, 65, -32, 121, -33, 125, 51, -128, 17, 120, -37, -5, -62, 76, 91, -33, 107, 63, -19, -16, 88, 80, 92, 50, -33, 57, 123, 64, -68, -105, 57, -94, 52, 79, 100, 80, -78, -63, -18, 119, -28, 68, -126, -74};
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
    msg.setTimeStamp(0.4782469735043242);
    msg.setSource(1880U);
    msg.setSourceEntity(42U);
    msg.setDestination(19147U);
    msg.setDestinationEntity(222U);
    msg.type = 144U;
    msg.frequency = 3380514260U;
    msg.min_range = 11722U;
    msg.max_range = 51099U;
    msg.bits_per_point = 34U;
    msg.scale_factor = 0.6297091437426747;
    const char tmp_msg_0[] = {4, -85, -66, -31, -45, -124, -84, 42, -53, -66, 6, -117, -9, 14, -11, 89, 62, -102, 31, -24, 80, -115, 46, -9, -43, 103, -62, -20, -120, 123, -88, -105, -71, -4, -43, 85, 67, -60, 121, 56, 70, -73, -60, -45, -52, -54, -91, -22, 90, 119, 49, 118, -13, -61, 89, 39, 19, 21, 32, -10, 76, -3, 111};
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
    msg.setTimeStamp(0.9559756295401949);
    msg.setSource(19869U);
    msg.setSourceEntity(127U);
    msg.setDestination(29512U);
    msg.setDestinationEntity(100U);
    msg.type = 213U;
    msg.frequency = 325165028U;
    msg.min_range = 61510U;
    msg.max_range = 21777U;
    msg.bits_per_point = 175U;
    msg.scale_factor = 0.574709763327567;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.14891588075218454;
    tmp_msg_0.beam_height = 0.2804588381213664;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {76, 5, 31, -15, 22, 63, -72, 73, -81, -126, 36, -62, -89, 31};
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
    msg.setTimeStamp(0.05471121749017416);
    msg.setSource(1863U);
    msg.setSourceEntity(175U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(167U);
    msg.type = 160U;
    msg.frequency = 1136559723U;
    msg.min_range = 11764U;
    msg.max_range = 6800U;
    msg.bits_per_point = 90U;
    msg.scale_factor = 0.18693231985325565;
    const char tmp_msg_0[] = {-24, 2, 116, 61, 57, -57, -13, -62, -40, 59, 96, 125, 65, 65, -5, 57, 107, 41, -18, -77, 126, -27, 23, -85, 78, -82, 10, -116, 8, 94, -21, -4, 106, -124, -97, -49, -105, 60, -37, -22, -64, 46, 85, 31, -8, 39, 104, -13, 99, 51, 47, 6, 90, -116, -24, 116, -22, -65, -34, -62, -61, 50, -45, -24, 62, -1, 61, -121, 35, -20, -81, -105, -72, 98, -18, 74, -73, -39, -90, 38, 83, -23, -65, -1, 4, 48, 100, 27, -99, 47, 68, 52, 26, -12, -56, 79, -60, -30, 56, 14, -48, -111, 124, 42, 79, -54, -105, -43, -103, -113, -66, -59, 108, 59, 44, 48, -88, -23, -121, -81, -118, -21, -116, 31, -20, 112, 55, -59, 77, 95, 102, -32, -13, -121, 53, 55, -53, -42, 123, 80, 103, 94, -99, -66, 94, -1};
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
    msg.setTimeStamp(0.2381638576153411);
    msg.setSource(15487U);
    msg.setSourceEntity(187U);
    msg.setDestination(63285U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.031855313150621734);
    msg.setSource(49707U);
    msg.setSourceEntity(17U);
    msg.setDestination(48203U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.04904994978795896);
    msg.setSource(53649U);
    msg.setSourceEntity(71U);
    msg.setDestination(49031U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.33547647019276905);
    msg.setSource(8622U);
    msg.setSourceEntity(23U);
    msg.setDestination(53112U);
    msg.setDestinationEntity(34U);
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
    msg.setTimeStamp(0.17427906917866165);
    msg.setSource(8843U);
    msg.setSourceEntity(34U);
    msg.setDestination(57440U);
    msg.setDestinationEntity(20U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.3838420140860723);
    msg.setSource(26004U);
    msg.setSourceEntity(172U);
    msg.setDestination(46844U);
    msg.setDestinationEntity(252U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.8365295180609342);
    msg.setSource(62242U);
    msg.setSourceEntity(214U);
    msg.setDestination(29753U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9259623260480218;
    msg.confidence = 0.8296942075150334;
    msg.opmodes.assign("WWMJZMQUSDNDRMMIUYSL");

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
    msg.setTimeStamp(0.025845077461274624);
    msg.setSource(27050U);
    msg.setSourceEntity(200U);
    msg.setDestination(8206U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8272854534531743;
    msg.confidence = 0.9464751349687825;
    msg.opmodes.assign("ZCRJMIYEODOEYECYZXVUDNLFORSINRHEKZTXQRLIUVPRPRGKGPTSAANSVPWOCXNFQDSWZGBJVMNSQOBMSAUTFUEXDVDYNJUQWCICIKGTIHXCIGKAGQSNZHCYDLMQ");

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
    msg.setTimeStamp(0.8188059419547543);
    msg.setSource(948U);
    msg.setSourceEntity(122U);
    msg.setDestination(34152U);
    msg.setDestinationEntity(21U);
    msg.value = 0.4216649763108493;
    msg.confidence = 0.13172635710617686;
    msg.opmodes.assign("DWFXNHLSDIFPHQIMOCACEXFTNLEZVXPUKRATKYLYLUTYXWVHVZGDRVYMCRJSGAMFLZZJMMKSBNVWCOSVQJVJHETAMBSIKIBMKDPCNAQQGBPXWEUHEZIUNXYVQXZQOLKTNIYBHWSOKZAUUSMCTJBLIKJNWREPIOYOUJESJRGFUJODGRQTGMBMYPPRWWDEP");

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
    msg.setTimeStamp(0.18415936856137827);
    msg.setSource(13685U);
    msg.setSourceEntity(119U);
    msg.setDestination(1759U);
    msg.setDestinationEntity(19U);
    msg.itow = 647034823U;
    msg.lat = 0.27298136788201577;
    msg.lon = 0.20118025539901374;
    msg.height_ell = 0.0017467167909457348;
    msg.height_sea = 0.2059135085911019;
    msg.hacc = 0.0507367972759829;
    msg.vacc = 0.1439911449706568;
    msg.vel_n = 0.5447840100162465;
    msg.vel_e = 0.15713316015933998;
    msg.vel_d = 0.5401455726209942;
    msg.speed = 0.79228300643277;
    msg.gspeed = 0.04212613659213271;
    msg.heading = 0.8829893105749884;
    msg.sacc = 0.13907509346873104;
    msg.cacc = 0.1852960814276201;

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
    msg.setTimeStamp(0.8937142243869663);
    msg.setSource(58010U);
    msg.setSourceEntity(112U);
    msg.setDestination(53424U);
    msg.setDestinationEntity(3U);
    msg.itow = 435680551U;
    msg.lat = 0.08929327846601576;
    msg.lon = 0.03898664651559813;
    msg.height_ell = 0.1488540162127786;
    msg.height_sea = 0.9962135538778921;
    msg.hacc = 0.3515196394871861;
    msg.vacc = 0.6155931321790324;
    msg.vel_n = 0.07468373117726479;
    msg.vel_e = 0.6742081310026086;
    msg.vel_d = 0.456398356232366;
    msg.speed = 0.5927002710359955;
    msg.gspeed = 0.9009732324333923;
    msg.heading = 0.7822020609676007;
    msg.sacc = 0.12828758129353468;
    msg.cacc = 0.14496441467951027;

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
    msg.setTimeStamp(0.42572030056575627);
    msg.setSource(18930U);
    msg.setSourceEntity(170U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(207U);
    msg.itow = 26176429U;
    msg.lat = 0.9132974375097298;
    msg.lon = 0.795700627042127;
    msg.height_ell = 0.22348998769461392;
    msg.height_sea = 0.7845405690425948;
    msg.hacc = 0.3718787169163441;
    msg.vacc = 0.29891453057080786;
    msg.vel_n = 0.7005692939466645;
    msg.vel_e = 0.028356157296726137;
    msg.vel_d = 0.6489064111561903;
    msg.speed = 0.5056190961569142;
    msg.gspeed = 0.8302363064147251;
    msg.heading = 0.23478551336838616;
    msg.sacc = 0.38051370145345953;
    msg.cacc = 0.8437484874753348;

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
    msg.setTimeStamp(0.2203877333501464);
    msg.setSource(47358U);
    msg.setSourceEntity(207U);
    msg.setDestination(24209U);
    msg.setDestinationEntity(212U);
    msg.id = 95U;
    msg.value = 0.12066987164326859;

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
    msg.setTimeStamp(0.07332234241212754);
    msg.setSource(39336U);
    msg.setSourceEntity(236U);
    msg.setDestination(1777U);
    msg.setDestinationEntity(67U);
    msg.id = 94U;
    msg.value = 0.29466583698999493;

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
    msg.setTimeStamp(0.45733836239936687);
    msg.setSource(40329U);
    msg.setSourceEntity(223U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(34U);
    msg.id = 72U;
    msg.value = 0.8716178012217746;

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
    msg.setTimeStamp(0.9064779194958554);
    msg.setSource(47355U);
    msg.setSourceEntity(188U);
    msg.setDestination(1872U);
    msg.setDestinationEntity(224U);
    msg.x = 0.2458064295882889;
    msg.y = 0.5982665606348501;
    msg.z = 0.6759643713977247;
    msg.phi = 0.957184977287009;
    msg.theta = 0.2655975052226718;
    msg.psi = 0.5121521988050938;

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
    msg.setTimeStamp(0.3062773564862842);
    msg.setSource(62995U);
    msg.setSourceEntity(80U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(1U);
    msg.x = 0.04074557062782336;
    msg.y = 0.2690128303641304;
    msg.z = 0.42094833331027104;
    msg.phi = 0.33643727052015104;
    msg.theta = 0.180700892072872;
    msg.psi = 0.7786720533275228;

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
    msg.setTimeStamp(0.5006563241811472);
    msg.setSource(35944U);
    msg.setSourceEntity(35U);
    msg.setDestination(64926U);
    msg.setDestinationEntity(34U);
    msg.x = 0.6701707563194802;
    msg.y = 0.2290673995346173;
    msg.z = 0.18516029005361956;
    msg.phi = 0.8246784408398455;
    msg.theta = 0.9054261961466886;
    msg.psi = 0.5778988298859681;

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
    msg.setTimeStamp(0.396025535774168);
    msg.setSource(18109U);
    msg.setSourceEntity(92U);
    msg.setDestination(57141U);
    msg.setDestinationEntity(59U);
    msg.beam_width = 0.8034902761071291;
    msg.beam_height = 0.5264348694229051;

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
    msg.setTimeStamp(0.3187358726616565);
    msg.setSource(19884U);
    msg.setSourceEntity(175U);
    msg.setDestination(647U);
    msg.setDestinationEntity(73U);
    msg.beam_width = 0.7284866571464833;
    msg.beam_height = 0.45614981652477327;

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
    msg.setTimeStamp(0.5437456389892487);
    msg.setSource(19909U);
    msg.setSourceEntity(67U);
    msg.setDestination(5103U);
    msg.setDestinationEntity(10U);
    msg.beam_width = 0.7196231454802183;
    msg.beam_height = 0.4730599784568713;

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
    msg.setTimeStamp(0.6687041590459576);
    msg.setSource(4492U);
    msg.setSourceEntity(245U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(54U);
    msg.sane = 225U;

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
    msg.setTimeStamp(0.749878645870404);
    msg.setSource(15353U);
    msg.setSourceEntity(16U);
    msg.setDestination(20965U);
    msg.setDestinationEntity(30U);
    msg.sane = 243U;

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
    msg.setTimeStamp(0.31388634305939755);
    msg.setSource(40225U);
    msg.setSourceEntity(201U);
    msg.setDestination(24214U);
    msg.setDestinationEntity(144U);
    msg.sane = 54U;

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
    msg.setTimeStamp(0.8569633247441015);
    msg.setSource(50327U);
    msg.setSourceEntity(81U);
    msg.setDestination(17076U);
    msg.setDestinationEntity(81U);
    msg.value = 0.746367214097301;

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
    msg.setTimeStamp(0.9532522269850622);
    msg.setSource(46230U);
    msg.setSourceEntity(168U);
    msg.setDestination(16453U);
    msg.setDestinationEntity(222U);
    msg.value = 0.24869389621422455;

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
    msg.setTimeStamp(0.5262254484812463);
    msg.setSource(39903U);
    msg.setSourceEntity(9U);
    msg.setDestination(5249U);
    msg.setDestinationEntity(242U);
    msg.value = 0.08504625224900897;

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
    msg.setTimeStamp(0.5788627862034856);
    msg.setSource(52889U);
    msg.setSourceEntity(223U);
    msg.setDestination(64135U);
    msg.setDestinationEntity(204U);
    msg.value = 0.3373175789684625;

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
    msg.setTimeStamp(0.714636889368709);
    msg.setSource(64210U);
    msg.setSourceEntity(101U);
    msg.setDestination(65315U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8136265777790299;

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
    msg.setTimeStamp(0.7051273474805871);
    msg.setSource(16065U);
    msg.setSourceEntity(5U);
    msg.setDestination(44395U);
    msg.setDestinationEntity(125U);
    msg.value = 0.4823024158141118;

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
    msg.setTimeStamp(0.04124349466287924);
    msg.setSource(62187U);
    msg.setSourceEntity(77U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(119U);
    msg.value = 0.1929869730819067;

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
    msg.setTimeStamp(0.8452101827965836);
    msg.setSource(53340U);
    msg.setSourceEntity(57U);
    msg.setDestination(4965U);
    msg.setDestinationEntity(84U);
    msg.value = 0.2827341997285687;

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
    msg.setTimeStamp(0.674757815724614);
    msg.setSource(51390U);
    msg.setSourceEntity(238U);
    msg.setDestination(14171U);
    msg.setDestinationEntity(214U);
    msg.value = 0.3169183840744426;

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
    msg.setTimeStamp(0.15512719065894554);
    msg.setSource(60510U);
    msg.setSourceEntity(6U);
    msg.setDestination(49590U);
    msg.setDestinationEntity(160U);
    msg.id = 236U;
    msg.zoom = 12U;
    msg.action = 225U;

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
    msg.setTimeStamp(0.783984025274931);
    msg.setSource(2698U);
    msg.setSourceEntity(241U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(75U);
    msg.id = 93U;
    msg.zoom = 158U;
    msg.action = 230U;

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
    msg.setTimeStamp(0.2089582714044389);
    msg.setSource(12743U);
    msg.setSourceEntity(218U);
    msg.setDestination(35451U);
    msg.setDestinationEntity(193U);
    msg.id = 161U;
    msg.zoom = 230U;
    msg.action = 116U;

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
    msg.setTimeStamp(0.258817045424215);
    msg.setSource(24297U);
    msg.setSourceEntity(63U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(173U);
    msg.id = 85U;
    msg.value = 0.5416907608421153;

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
    msg.setTimeStamp(0.759595073966614);
    msg.setSource(57848U);
    msg.setSourceEntity(32U);
    msg.setDestination(15917U);
    msg.setDestinationEntity(25U);
    msg.id = 162U;
    msg.value = 0.39499208275843456;

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
    msg.setTimeStamp(0.646588178263638);
    msg.setSource(38096U);
    msg.setSourceEntity(123U);
    msg.setDestination(62745U);
    msg.setDestinationEntity(64U);
    msg.id = 168U;
    msg.value = 0.7330047516174606;

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
    msg.setTimeStamp(0.23200961057108016);
    msg.setSource(63668U);
    msg.setSourceEntity(22U);
    msg.setDestination(61834U);
    msg.setDestinationEntity(139U);
    msg.id = 229U;
    msg.value = 0.03210425570547748;

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
    msg.setTimeStamp(0.7172147364812059);
    msg.setSource(44381U);
    msg.setSourceEntity(183U);
    msg.setDestination(35140U);
    msg.setDestinationEntity(176U);
    msg.id = 210U;
    msg.value = 0.9152277225062309;

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
    msg.setTimeStamp(0.5776053683493004);
    msg.setSource(47752U);
    msg.setSourceEntity(97U);
    msg.setDestination(21206U);
    msg.setDestinationEntity(65U);
    msg.id = 34U;
    msg.value = 0.45259291570983096;

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
    msg.setTimeStamp(0.9009623290619183);
    msg.setSource(52694U);
    msg.setSourceEntity(93U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(53U);
    msg.id = 103U;
    msg.angle = 0.5096589198533198;

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
    msg.setTimeStamp(0.9167810420329989);
    msg.setSource(12086U);
    msg.setSourceEntity(151U);
    msg.setDestination(59143U);
    msg.setDestinationEntity(107U);
    msg.id = 207U;
    msg.angle = 0.9276147075772072;

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
    msg.setTimeStamp(0.2335114417157632);
    msg.setSource(35469U);
    msg.setSourceEntity(55U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(164U);
    msg.id = 120U;
    msg.angle = 0.25562876699507553;

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
    msg.setTimeStamp(0.8577281101193004);
    msg.setSource(17951U);
    msg.setSourceEntity(111U);
    msg.setDestination(49093U);
    msg.setDestinationEntity(223U);
    msg.op = 59U;
    msg.actions.assign("CYTMEWTENJSVUUXHRBLXAPBNTCTKXBGQFUUEYOPFAPOCROLHOKZIIVAFJSFHWVLSNCKNSXSWOKEZYNTQMR");

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
    msg.setTimeStamp(0.460172931255889);
    msg.setSource(25408U);
    msg.setSourceEntity(126U);
    msg.setDestination(38755U);
    msg.setDestinationEntity(212U);
    msg.op = 219U;
    msg.actions.assign("CXAWCJKFILPBZIMYNHYOHDFBTUTNGHPFETSGXJZQHLBXWMJRHAPMFSUDSEGPJOINAYUMOLYLEJUNXLOFSUSJTGQHKAJNNWVNBMRCVUESYLATTFPQWKHMTXBOXBIEEEKLMZKRCOEWKCXCLTZRMDCDGIJJZNIFUZQXRVKDQGUBQYVAYSPOCDYCIVKRWPPWIZJQIAVDCVH");

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
    msg.setTimeStamp(0.6992976842564214);
    msg.setSource(45727U);
    msg.setSourceEntity(158U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(135U);
    msg.op = 207U;
    msg.actions.assign("LUOQYEZTQFKMEJOOECYNFZYGXHRPJCDFBEYXDJHATBGDKKCVFIAWTMMLOLEHKSGOMIQWGGDFYNRGOKFNERAIPSANRJTOOPWZIGLIAPURQHRJQCWBD");

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
    msg.setTimeStamp(0.1744460579755227);
    msg.setSource(14972U);
    msg.setSourceEntity(75U);
    msg.setDestination(55097U);
    msg.setDestinationEntity(66U);
    msg.actions.assign("XWRZRUNJDGOIKATVTKBSWFJHCFOMDORAIGXQPLPW");

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
    msg.setTimeStamp(0.5459513594895123);
    msg.setSource(16853U);
    msg.setSourceEntity(94U);
    msg.setDestination(27779U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("TLNSKIZUFSLJJKXBDWECQEQPKJHUCMSYVEFROVKRJWMUYJXLVCIFZVDQAGEPYDIUPQHWLOOPSPQVPPEFKDTXUATZHRUDNPPJNWMSZGQARFTBLRRCYDXTXBSLECHNLVFTAAAKWBXVX");

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
    msg.setTimeStamp(0.32751571341734675);
    msg.setSource(26301U);
    msg.setSourceEntity(104U);
    msg.setDestination(12084U);
    msg.setDestinationEntity(130U);
    msg.actions.assign("WBAIGZRMTGQGYESMDFQAKICWRYNDGYWPOVUAMRSTKDWNUSDBRJPSARUHBMPCHMQLNFWEXYQFTGDELRNPUNIGZHUBQCPZJIQKKPQBGLKKQRJGOKRVZSMBUULNWHCNMKFHASBECZEVUYTSJVNIWANZITDCIFHHLFIRHZYOCXFXYHWVZUFEFXAJTZYFRDPJPLYNLEVLJEWVVLSQJVHTJZKWDUDEOQMKCOOXOTAEO");

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
    msg.setTimeStamp(0.719782325671779);
    msg.setSource(45550U);
    msg.setSourceEntity(228U);
    msg.setDestination(18911U);
    msg.setDestinationEntity(229U);
    msg.button = 101U;
    msg.value = 94U;

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
    msg.setTimeStamp(0.5538339709952906);
    msg.setSource(9486U);
    msg.setSourceEntity(117U);
    msg.setDestination(26892U);
    msg.setDestinationEntity(58U);
    msg.button = 78U;
    msg.value = 180U;

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
    msg.setTimeStamp(0.24037440908257823);
    msg.setSource(65382U);
    msg.setSourceEntity(55U);
    msg.setDestination(2172U);
    msg.setDestinationEntity(119U);
    msg.button = 231U;
    msg.value = 217U;

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
    msg.setTimeStamp(0.2800064743948967);
    msg.setSource(44197U);
    msg.setSourceEntity(136U);
    msg.setDestination(10442U);
    msg.setDestinationEntity(222U);
    msg.op = 218U;
    msg.text.assign("EFLYVAMHQRBQHSNWCOVSYDURZCQWNPRBPKYETCHADEUEXVJNXFWEVWECCTBUZFOLDGMLOMWJYJZEJLHZFUOVZJBEGMRPZIGINIZSTCIOB");

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
    msg.setTimeStamp(0.4337495422621941);
    msg.setSource(34779U);
    msg.setSourceEntity(31U);
    msg.setDestination(49583U);
    msg.setDestinationEntity(152U);
    msg.op = 120U;
    msg.text.assign("RRDIXHWZZNIGTCQHOVNYWRUYKFQOMAIDHPNFLZGQAFXOLOSXYDQVHEMLALREKHSAQPOIFLJTMYUCEIFBTSEVKKMLGSXIVBGROCJVRWNYEHDLSWJRDNUVHXPHCEUFLMDJIOZNQJTGBBXCGWPIUHEBBMTGDGDPBRWJSUTQKWWCMNZZAAUSPROYTYFXFKUSAVPCDMSUPKILJXXAOGTZBEQKLXJGRBHT");

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
    msg.setTimeStamp(0.33198527695107893);
    msg.setSource(30787U);
    msg.setSourceEntity(193U);
    msg.setDestination(14924U);
    msg.setDestinationEntity(254U);
    msg.op = 196U;
    msg.text.assign("URQVUZAEYJKZQUAFTZWPIJXWJMEBEYRGMJPCJVLS");

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
    msg.setTimeStamp(0.4904490123838784);
    msg.setSource(19379U);
    msg.setSourceEntity(188U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(204U);
    msg.op = 137U;
    msg.time_remain = 0.16989487447472118;
    msg.sched_time = 0.9308642195651888;

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
    msg.setTimeStamp(0.4909467301669833);
    msg.setSource(16751U);
    msg.setSourceEntity(98U);
    msg.setDestination(59618U);
    msg.setDestinationEntity(150U);
    msg.op = 177U;
    msg.time_remain = 0.1508601328961755;
    msg.sched_time = 0.6839051995398193;

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
    msg.setTimeStamp(0.19438419923666328);
    msg.setSource(55349U);
    msg.setSourceEntity(33U);
    msg.setDestination(43076U);
    msg.setDestinationEntity(195U);
    msg.op = 184U;
    msg.time_remain = 0.42511439410771246;
    msg.sched_time = 0.5001104268165563;

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
    msg.setTimeStamp(0.5814070807973243);
    msg.setSource(21697U);
    msg.setSourceEntity(108U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(168U);
    msg.name.assign("EPSOXQFCZWULYRWV");
    msg.op = 232U;
    msg.sched_time = 0.5919822818568699;

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
    msg.setTimeStamp(0.18239446907641776);
    msg.setSource(56021U);
    msg.setSourceEntity(95U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(196U);
    msg.name.assign("OXEFEZQCQIGPCSPNKLAHWURPUTPPVDVTLGMYWRXFDHHYOZVVUFANIJTPHDOCLOWELBDLFNKEUBAGWYFNKFYGJAZHZNWICJDXORLGCHQUPBDESMBJHNTVIJKBOODVIKMNOVNTHQIHTFQFPJDXETRXYPAGLKMZHGBFAVWXEZUUQBSTJMKXYISMQOUUESJCQZRRGTADSRBSGVNWMMAKZXKMLIRYJRIWXOSKJRWVEMPCCA");
    msg.op = 149U;
    msg.sched_time = 0.5403839017950072;

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
    msg.setTimeStamp(0.8592252309510664);
    msg.setSource(29636U);
    msg.setSourceEntity(247U);
    msg.setDestination(36491U);
    msg.setDestinationEntity(83U);
    msg.name.assign("TUDJBUQNMORORFBZQDFGAYHZMMVWPOKPCDWYVIGJCAVVYKWXAGPLBQLZPQQNKZSNSCBHYROELTNXRHWOHEKAIFLJCKDPSFLSFOFXBRFMYUKJMYPAYUROFAMBYJEYKHEKCIBSNVTLTDDEWINHGQBHGZVDWPDPRZI");
    msg.op = 81U;
    msg.sched_time = 0.33418568035019136;

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
    msg.setTimeStamp(0.1803286263328886);
    msg.setSource(12324U);
    msg.setSourceEntity(246U);
    msg.setDestination(9091U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.29691269736617676);
    msg.setSource(21878U);
    msg.setSourceEntity(181U);
    msg.setDestination(27579U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.4442216596178221);
    msg.setSource(17096U);
    msg.setSourceEntity(143U);
    msg.setDestination(15146U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.21741330606125764);
    msg.setSource(21621U);
    msg.setSourceEntity(77U);
    msg.setDestination(26583U);
    msg.setDestinationEntity(63U);
    msg.name.assign("TOPINDFTFBOAFWBCDDXTXVIOASHMHWRMGEQYPSGDRQTKMEYVVJNFPDUKSBLUNJONPTPBYREXBWQZNYESHLMDNBFAAPQCJULGTPANSFNBWJUXEEYQTWZFUNHIPGQQUZLPWTRKCOWJYIVXRTJZYVKJGBUKQIKCGEASMDMKICRANZCCKOVXODZCFHRHZOLEGUTAVILVSGHQRYXOKMYBLLEZJOAGLXHHAPVLSXXJGRYDQFFJIUWWEKSH");
    msg.state = 77U;

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
    msg.setTimeStamp(0.730481616795116);
    msg.setSource(49944U);
    msg.setSourceEntity(211U);
    msg.setDestination(28705U);
    msg.setDestinationEntity(239U);
    msg.name.assign("GLXXOZUOKROLXIUKPDJOLAV");
    msg.state = 146U;

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
    msg.setTimeStamp(0.662608284760296);
    msg.setSource(54291U);
    msg.setSourceEntity(113U);
    msg.setDestination(2065U);
    msg.setDestinationEntity(250U);
    msg.name.assign("OLWPBLLURMTOWGDKONADQAUQUIYLSPFIPSVIJDEPRMLGEPYLMXCJJJRBJNQXCRGVKLHFXZFHZPGHYFMHNIGIKWQCYCIFNYLECATOBJWPSUDTCKEZDMTNSOZAFLAQVDWQEMN");
    msg.state = 69U;

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
    msg.setTimeStamp(0.19156159086237734);
    msg.setSource(5238U);
    msg.setSourceEntity(242U);
    msg.setDestination(42535U);
    msg.setDestinationEntity(35U);
    msg.name.assign("FGQEYHMZZVADWFMTJGXYKIEZDCEPNBTOBRPXIVQTPBPYEVRZVRTCMPYSMQEHQMGPFXFLFBHALNGYWQRSDCHSONEUXFNKTSGALPIKVTIOTXYYXMJKNGBVBVMNRJDNLKDYLEKMHWBWCOWHRMPZEHCKUXALKWQJZJRHUDXSOSEHJNGQHJSAIRBPGTJOWCLUQTGSFUBCLMEZWOKCAIDFDVCJWIVUY");
    msg.value = 7U;

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
    msg.setTimeStamp(0.22066067801799316);
    msg.setSource(22685U);
    msg.setSourceEntity(95U);
    msg.setDestination(54961U);
    msg.setDestinationEntity(113U);
    msg.name.assign("ISLGWRHDIPXDYSISXUOBFRRDEGNYEWYVLFUUAGOFHMIEYLLRYNHKIJTSPBTOUIVBAMSFCXPVWAUBSJEHPIQACNZLVFRZJESMJAVZF");
    msg.value = 63U;

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
    msg.setTimeStamp(0.4458205895029018);
    msg.setSource(63010U);
    msg.setSourceEntity(16U);
    msg.setDestination(24619U);
    msg.setDestinationEntity(64U);
    msg.name.assign("WFCYXGKQTXZOSEBOVYHANFVVWQATNSLMODDTAWRDHRYFQYZFTDGPTSOWPGDENGTYSGPLSYJKMKZBZRIMHXOPFHEAZZDUTMCINZISTEUTQPOQAODMBMCUJSBLKXHRUXIVLINBHQXJBOEBC");
    msg.value = 21U;

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
    msg.setTimeStamp(0.4974675954064729);
    msg.setSource(23947U);
    msg.setSourceEntity(130U);
    msg.setDestination(34272U);
    msg.setDestinationEntity(89U);
    msg.name.assign("EBYANTLDGLYSSBETANITHVRGBEZORWGHTKMYBLTKMOWGLYUNZIBHYPUDZEPHIQJNYFSHJXXUMVHRQVCQGYMQJAFMJOORTSTIJONSQXSMHEXKRZKDTPZIBRWYUNJRLBLUAGVRPYZFHQWZMIPGKDCMHOXNJUSTPEXCRCXFBJFFPBWCCOVKZNEAC");

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
    msg.setTimeStamp(0.31531352629953624);
    msg.setSource(12230U);
    msg.setSourceEntity(214U);
    msg.setDestination(84U);
    msg.setDestinationEntity(112U);
    msg.name.assign("RJIEKBWXSCEOHPCAVULHBDFKWCNDIDFPSVUPFTJGEQXACEOIGXUVEYPOUYJNDNV");

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
    msg.setTimeStamp(0.08037616158902416);
    msg.setSource(16158U);
    msg.setSourceEntity(28U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(19U);
    msg.name.assign("HGFZOKXEVJUPZYVAVQFJNRZWYUWIMSLMWKPRVPMUEOXYOPNLYGDZFLNYRQGTBHJAAVFDKCMFOWJXYCASQBGTEXZESMDZXZKERMWECENRDOYJNUREZOACWAUBYTXGJFGPLOILGQQIXBMCNIAUESPNUOUYKDNFIHJKSMQHTTHHQAHMKLOTRUNCVZFDKISMQCCREASGHVBVDP");

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
    msg.setTimeStamp(0.16416016070928585);
    msg.setSource(41383U);
    msg.setSourceEntity(148U);
    msg.setDestination(49298U);
    msg.setDestinationEntity(62U);
    msg.name.assign("NDVYQGVATFIMOOMEEJYLRKJCKOFWREYQPDFXHLCFXVNTWRJXOQYMAOIJOLEJRIZQAPBYMUHNSJUASBXBWXOAPDGCPFIIGMCDNKZCMITJRQEXRGSWTYEIVHLMOLZCWQBDUOL");
    msg.value = 197U;

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
    msg.setTimeStamp(0.8423544851000965);
    msg.setSource(35201U);
    msg.setSourceEntity(173U);
    msg.setDestination(55600U);
    msg.setDestinationEntity(253U);
    msg.name.assign("JTBAWUMZFWUNATBRICTCTMSXKAFJANIEIQMXOHDVZSAKRHTDENGVECEXGBMDSDGCWVRHEGDLXXIEAFZCLSBYUTJKXGUZKOMSHKBWCJZCPSIAOGRPIYOUEKAMRVXPPSFHWFQQGOMZQVUBQTOCSTJJVYXLY");
    msg.value = 90U;

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
    msg.setTimeStamp(0.43336484565866773);
    msg.setSource(42303U);
    msg.setSourceEntity(139U);
    msg.setDestination(1337U);
    msg.setDestinationEntity(97U);
    msg.name.assign("TZNAULNGGDXVINBSUSKNSQAEFXVXYSMTOYACHTYKCFGLOXCTQOWFKBIZWDUPZAPRPZCKOOEOLLDAWKRJPMYAKBTMAVJYVHTYWFQFDJFACQQWEETDPHKQSYSRBI");
    msg.value = 55U;

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
    msg.setTimeStamp(0.8056030145750379);
    msg.setSource(40237U);
    msg.setSourceEntity(99U);
    msg.setDestination(41435U);
    msg.setDestinationEntity(118U);
    msg.id = 105U;
    msg.period = 3222934619U;
    msg.duty_cycle = 3446853187U;

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
    msg.setTimeStamp(0.3966809566767766);
    msg.setSource(52264U);
    msg.setSourceEntity(21U);
    msg.setDestination(27734U);
    msg.setDestinationEntity(233U);
    msg.id = 206U;
    msg.period = 2548010553U;
    msg.duty_cycle = 3178653318U;

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
    msg.setTimeStamp(0.7007475360657435);
    msg.setSource(44325U);
    msg.setSourceEntity(50U);
    msg.setDestination(26191U);
    msg.setDestinationEntity(209U);
    msg.id = 185U;
    msg.period = 3865422351U;
    msg.duty_cycle = 3984265793U;

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
    msg.setTimeStamp(0.09676439959570649);
    msg.setSource(19126U);
    msg.setSourceEntity(59U);
    msg.setDestination(15325U);
    msg.setDestinationEntity(240U);
    msg.id = 146U;
    msg.period = 3366638012U;
    msg.duty_cycle = 4129973552U;

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
    msg.setTimeStamp(0.3314210240140164);
    msg.setSource(52367U);
    msg.setSourceEntity(82U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(15U);
    msg.id = 187U;
    msg.period = 3094974372U;
    msg.duty_cycle = 2026760216U;

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
    msg.setTimeStamp(0.184539833593382);
    msg.setSource(10507U);
    msg.setSourceEntity(171U);
    msg.setDestination(23571U);
    msg.setDestinationEntity(46U);
    msg.id = 13U;
    msg.period = 2709290930U;
    msg.duty_cycle = 3722703538U;

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
    msg.setTimeStamp(0.6572132841958673);
    msg.setSource(53927U);
    msg.setSourceEntity(7U);
    msg.setDestination(56840U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.74161838094769;
    msg.lon = 0.9240756123814962;
    msg.height = 0.8657514313443968;
    msg.x = 0.08121989318035805;
    msg.y = 0.36208727304389365;
    msg.z = 0.47525086357297897;
    msg.phi = 0.18370105711107854;
    msg.theta = 0.1672679220253146;
    msg.psi = 0.8564717280555745;
    msg.u = 0.7854604039772577;
    msg.v = 0.917293059114749;
    msg.w = 0.11304093068665089;
    msg.vx = 0.26648020286212937;
    msg.vy = 0.22732454662526702;
    msg.vz = 0.6039012081472999;
    msg.p = 0.11453059917066843;
    msg.q = 0.638982429301307;
    msg.r = 0.4634529702286255;
    msg.depth = 0.46020476896071705;
    msg.alt = 0.6321487544826035;

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
    msg.setTimeStamp(0.7373540999731393);
    msg.setSource(29396U);
    msg.setSourceEntity(6U);
    msg.setDestination(46754U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.5425340443030165;
    msg.lon = 0.18819961512425165;
    msg.height = 0.5683055309984794;
    msg.x = 0.9979733287990546;
    msg.y = 0.3641825233038324;
    msg.z = 0.5150454033210089;
    msg.phi = 0.10901677150317057;
    msg.theta = 0.336702501911852;
    msg.psi = 0.8467457328055766;
    msg.u = 0.5445707508992743;
    msg.v = 0.9532326247920891;
    msg.w = 0.5564012338919072;
    msg.vx = 0.2887550477469283;
    msg.vy = 0.18557328139749651;
    msg.vz = 0.40804199648697537;
    msg.p = 0.5497801266489387;
    msg.q = 0.33847002913164237;
    msg.r = 0.8560703770524976;
    msg.depth = 0.9133700134852031;
    msg.alt = 0.984301528987069;

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
    msg.setTimeStamp(0.06621814772638113);
    msg.setSource(45933U);
    msg.setSourceEntity(108U);
    msg.setDestination(27240U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.9953754956579826;
    msg.lon = 0.7896994982235392;
    msg.height = 0.7893925429039559;
    msg.x = 0.14091607860124422;
    msg.y = 0.08911986053270093;
    msg.z = 0.9642753376072983;
    msg.phi = 0.4975327107508677;
    msg.theta = 0.6293858050595497;
    msg.psi = 0.9134287097897283;
    msg.u = 0.012126397064314287;
    msg.v = 0.029207277790149533;
    msg.w = 0.4615514726145604;
    msg.vx = 0.22839023313844475;
    msg.vy = 0.31007519876963163;
    msg.vz = 0.5380909041382794;
    msg.p = 0.16258213169195945;
    msg.q = 0.7464137913016575;
    msg.r = 0.12200331546795617;
    msg.depth = 0.8343997626635963;
    msg.alt = 0.14553945577671146;

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
    msg.setTimeStamp(0.7347942191377583);
    msg.setSource(63812U);
    msg.setSourceEntity(184U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(126U);
    msg.x = 0.11260236390564793;
    msg.y = 0.8246341963159293;
    msg.z = 0.9706508064304709;

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
    msg.setTimeStamp(0.12535910452164722);
    msg.setSource(10717U);
    msg.setSourceEntity(58U);
    msg.setDestination(19366U);
    msg.setDestinationEntity(69U);
    msg.x = 0.7956356173539544;
    msg.y = 0.15032019796425689;
    msg.z = 0.6921065463863423;

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
    msg.setTimeStamp(0.8136499580228918);
    msg.setSource(46655U);
    msg.setSourceEntity(208U);
    msg.setDestination(62107U);
    msg.setDestinationEntity(30U);
    msg.x = 0.023756533525945644;
    msg.y = 0.5785781069095286;
    msg.z = 0.7934381786209848;

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
    msg.setTimeStamp(0.9075483753808106);
    msg.setSource(62967U);
    msg.setSourceEntity(19U);
    msg.setDestination(53017U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6636980156029846;

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
    msg.setTimeStamp(0.1775743344178985);
    msg.setSource(14040U);
    msg.setSourceEntity(84U);
    msg.setDestination(65212U);
    msg.setDestinationEntity(170U);
    msg.value = 0.9811371378125359;

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
    msg.setTimeStamp(0.4789901821872391);
    msg.setSource(10192U);
    msg.setSourceEntity(135U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9779325370237784;

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
    msg.setTimeStamp(0.11166615788522849);
    msg.setSource(19317U);
    msg.setSourceEntity(88U);
    msg.setDestination(49730U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7395606656514178;

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
    msg.setTimeStamp(0.14563389465370757);
    msg.setSource(5637U);
    msg.setSourceEntity(185U);
    msg.setDestination(3926U);
    msg.setDestinationEntity(195U);
    msg.value = 0.3416098107767266;

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
    msg.setTimeStamp(0.9455256961417985);
    msg.setSource(35696U);
    msg.setSourceEntity(64U);
    msg.setDestination(61709U);
    msg.setDestinationEntity(202U);
    msg.value = 0.24247965544569705;

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
    msg.setTimeStamp(0.35363274186351035);
    msg.setSource(49619U);
    msg.setSourceEntity(90U);
    msg.setDestination(2302U);
    msg.setDestinationEntity(68U);
    msg.x = 0.3560292394665593;
    msg.y = 0.3258253662229017;
    msg.z = 0.30135194792855713;
    msg.phi = 0.8607062024417368;
    msg.theta = 0.010444655755680987;
    msg.psi = 0.4049873136906875;
    msg.p = 0.48839217984694905;
    msg.q = 0.6055131935434567;
    msg.r = 0.14567900376297538;
    msg.u = 0.26683705838576055;
    msg.v = 0.1868683631270468;
    msg.w = 0.5500716925289283;
    msg.bias_psi = 0.45762163503852216;
    msg.bias_r = 0.8238635599332707;

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
    msg.setTimeStamp(0.7802025531127874);
    msg.setSource(38220U);
    msg.setSourceEntity(164U);
    msg.setDestination(4046U);
    msg.setDestinationEntity(9U);
    msg.x = 0.35008057515915847;
    msg.y = 0.20564390659786125;
    msg.z = 0.06061762077177468;
    msg.phi = 0.12100319833653361;
    msg.theta = 0.0867852249748674;
    msg.psi = 0.9301167149691842;
    msg.p = 0.581870545603399;
    msg.q = 0.09734458594068474;
    msg.r = 0.7902590376081227;
    msg.u = 0.1666875616398632;
    msg.v = 0.7190443819829329;
    msg.w = 0.028276152618218364;
    msg.bias_psi = 0.7473909619165028;
    msg.bias_r = 0.393759931321509;

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
    msg.setTimeStamp(0.7818796067606858);
    msg.setSource(46256U);
    msg.setSourceEntity(169U);
    msg.setDestination(9054U);
    msg.setDestinationEntity(206U);
    msg.x = 0.8477884658073518;
    msg.y = 0.2420348182606572;
    msg.z = 0.30037871314856734;
    msg.phi = 0.6598957201831407;
    msg.theta = 0.3472365198737436;
    msg.psi = 0.5624022112076066;
    msg.p = 0.31107623352014513;
    msg.q = 0.637805057519369;
    msg.r = 0.7421795597278609;
    msg.u = 0.8562219809148052;
    msg.v = 0.9425794296225459;
    msg.w = 0.5006371310637696;
    msg.bias_psi = 0.20059701992562662;
    msg.bias_r = 0.18778489666321652;

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
    msg.setTimeStamp(0.6328486053755071);
    msg.setSource(6123U);
    msg.setSourceEntity(137U);
    msg.setDestination(7446U);
    msg.setDestinationEntity(162U);
    msg.bias_psi = 0.38367083903764077;
    msg.bias_r = 0.4891927553798405;
    msg.cog = 0.28964376875483444;
    msg.cyaw = 0.08430814322215852;
    msg.lbl_rej_level = 0.8653215305210141;
    msg.gps_rej_level = 0.9005725919018475;
    msg.custom_x = 0.16436160734055205;
    msg.custom_y = 0.524456132529259;
    msg.custom_z = 0.5410636714517286;

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
    msg.setTimeStamp(0.7279434722816501);
    msg.setSource(39882U);
    msg.setSourceEntity(231U);
    msg.setDestination(16032U);
    msg.setDestinationEntity(242U);
    msg.bias_psi = 0.27732227733645465;
    msg.bias_r = 0.7382736994627696;
    msg.cog = 0.3351306962773897;
    msg.cyaw = 0.9253364890486125;
    msg.lbl_rej_level = 0.8611712071463816;
    msg.gps_rej_level = 0.6219640929956546;
    msg.custom_x = 0.5410528393669509;
    msg.custom_y = 0.2595870062132881;
    msg.custom_z = 0.02334945578268166;

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
    msg.setTimeStamp(0.033388748384913014);
    msg.setSource(45274U);
    msg.setSourceEntity(233U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.617597257670138;
    msg.bias_r = 0.825248882626289;
    msg.cog = 0.17009449490923723;
    msg.cyaw = 0.14789786777988523;
    msg.lbl_rej_level = 0.832977794311999;
    msg.gps_rej_level = 0.9620817199086883;
    msg.custom_x = 0.30613213273270035;
    msg.custom_y = 0.2709863516187052;
    msg.custom_z = 0.8176836014275941;

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
    msg.setTimeStamp(0.4554912342374071);
    msg.setSource(38682U);
    msg.setSourceEntity(151U);
    msg.setDestination(24754U);
    msg.setDestinationEntity(233U);
    msg.utc_time = 0.8901176931108785;
    msg.reason = 102U;

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
    msg.setTimeStamp(0.4693933453859708);
    msg.setSource(51651U);
    msg.setSourceEntity(228U);
    msg.setDestination(1216U);
    msg.setDestinationEntity(29U);
    msg.utc_time = 0.11446555264720437;
    msg.reason = 24U;

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
    msg.setTimeStamp(0.6754798523356244);
    msg.setSource(20742U);
    msg.setSourceEntity(13U);
    msg.setDestination(10409U);
    msg.setDestinationEntity(77U);
    msg.utc_time = 0.8536289300012757;
    msg.reason = 70U;

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
    msg.setTimeStamp(0.2632971882821098);
    msg.setSource(9114U);
    msg.setSourceEntity(53U);
    msg.setDestination(34781U);
    msg.setDestinationEntity(13U);
    msg.id = 163U;
    msg.range = 0.9691350130654229;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.7646456020250233);
    msg.setSource(32354U);
    msg.setSourceEntity(171U);
    msg.setDestination(39769U);
    msg.setDestinationEntity(148U);
    msg.id = 128U;
    msg.range = 0.09862902139740626;
    msg.acceptance = 178U;

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
    msg.setTimeStamp(0.1134308283354738);
    msg.setSource(31972U);
    msg.setSourceEntity(40U);
    msg.setDestination(23603U);
    msg.setDestinationEntity(45U);
    msg.id = 10U;
    msg.range = 0.7043536691925224;
    msg.acceptance = 64U;

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
    msg.setTimeStamp(0.20446759613244747);
    msg.setSource(44047U);
    msg.setSourceEntity(101U);
    msg.setDestination(55950U);
    msg.setDestinationEntity(20U);
    msg.type = 214U;
    msg.reason = 4U;
    msg.value = 0.23699094020150357;
    msg.timestep = 0.038439013668167044;

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
    msg.setTimeStamp(0.947614664127906);
    msg.setSource(3548U);
    msg.setSourceEntity(191U);
    msg.setDestination(36544U);
    msg.setDestinationEntity(32U);
    msg.type = 10U;
    msg.reason = 119U;
    msg.value = 0.8636981304829023;
    msg.timestep = 0.8263875820720469;

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
    msg.setTimeStamp(0.8594746809077349);
    msg.setSource(51400U);
    msg.setSourceEntity(170U);
    msg.setDestination(16451U);
    msg.setDestinationEntity(231U);
    msg.type = 195U;
    msg.reason = 113U;
    msg.value = 0.772531672722833;
    msg.timestep = 0.43212747370054505;

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
    msg.setTimeStamp(0.4861600676398904);
    msg.setSource(42486U);
    msg.setSourceEntity(240U);
    msg.setDestination(49712U);
    msg.setDestinationEntity(79U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TISMLMVKHIRMQUASEOALZPOGYJGROHSOWIOHJDEEDUSUGIFSTHNZJLBBENZKPPRITFDGODWHCPXJYPZIKWOSGJCRNHNERVSFVFEPCUJFLQWZDZXFWS");
    tmp_msg_0.lat = 0.9905489244122444;
    tmp_msg_0.lon = 0.13243130044119755;
    tmp_msg_0.depth = 0.9057472860306637;
    tmp_msg_0.query_channel = 58U;
    tmp_msg_0.reply_channel = 230U;
    tmp_msg_0.transponder_delay = 95U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2882033183286231;
    msg.y = 0.6444627355446623;
    msg.var_x = 0.4316947182587286;
    msg.var_y = 0.9427434823405428;
    msg.distance = 0.05777967350502233;

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
    msg.setTimeStamp(0.45815475485898327);
    msg.setSource(9278U);
    msg.setSourceEntity(204U);
    msg.setDestination(56915U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XZDPAKZJBODJOKJMEVGPNRRDYWBTFCLATHZDQWSOELFZHWETDNSSRANTVGPAFPCXIXAIOKJFBUABISUTEKUMTGCCHNPIOHFUQXYWHZOVQKYIAEWVVMNNWCZYGLQVEWQIIXLBLCPITMJCUERXCPDCYUSSHQLYHJGNGHZOPBRUWWUGLGJJVLDRNKCVYXMHAKOQBIRZSTRJPLKNVDFMPBRZT");
    tmp_msg_0.lat = 0.7297734721717059;
    tmp_msg_0.lon = 0.9063894537413753;
    tmp_msg_0.depth = 0.24151019273548813;
    tmp_msg_0.query_channel = 184U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 213U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18664088703077664;
    msg.y = 0.8857839377811111;
    msg.var_x = 0.5905423055499478;
    msg.var_y = 0.2706576839343352;
    msg.distance = 0.1842564363259136;

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
    msg.setTimeStamp(0.27862012891838006);
    msg.setSource(53900U);
    msg.setSourceEntity(176U);
    msg.setDestination(37087U);
    msg.setDestinationEntity(120U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KWAJOVIARWWTTGV");
    tmp_msg_0.lat = 0.8879170450719269;
    tmp_msg_0.lon = 0.561977018992911;
    tmp_msg_0.depth = 0.1827591611426881;
    tmp_msg_0.query_channel = 95U;
    tmp_msg_0.reply_channel = 207U;
    tmp_msg_0.transponder_delay = 58U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3940161002465761;
    msg.y = 0.471378079175756;
    msg.var_x = 0.40219172500762723;
    msg.var_y = 0.6182273818986433;
    msg.distance = 0.8777373233500494;

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
    msg.setTimeStamp(0.3325788894448155);
    msg.setSource(53040U);
    msg.setSourceEntity(145U);
    msg.setDestination(62698U);
    msg.setDestinationEntity(252U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.10435534453446749);
    msg.setSource(20740U);
    msg.setSourceEntity(173U);
    msg.setDestination(25735U);
    msg.setDestinationEntity(32U);
    msg.state = 56U;

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
    msg.setTimeStamp(0.47888835081061576);
    msg.setSource(29211U);
    msg.setSourceEntity(104U);
    msg.setDestination(10715U);
    msg.setDestinationEntity(114U);
    msg.state = 118U;

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
    msg.setTimeStamp(0.36381331654699345);
    msg.setSource(23382U);
    msg.setSourceEntity(245U);
    msg.setDestination(17764U);
    msg.setDestinationEntity(173U);
    msg.x = 0.2883258822495526;
    msg.y = 0.01980718337240306;
    msg.z = 0.1639382235614285;

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
    msg.setTimeStamp(0.35051109184687534);
    msg.setSource(27762U);
    msg.setSourceEntity(229U);
    msg.setDestination(57802U);
    msg.setDestinationEntity(86U);
    msg.x = 0.5968806644629069;
    msg.y = 0.9610949480102378;
    msg.z = 0.8156567039434491;

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
    msg.setTimeStamp(0.7564703495873274);
    msg.setSource(2015U);
    msg.setSourceEntity(71U);
    msg.setDestination(49110U);
    msg.setDestinationEntity(36U);
    msg.x = 0.41742793383820564;
    msg.y = 0.8066777124669817;
    msg.z = 0.5498232348462387;

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
    msg.setTimeStamp(0.8606070866676594);
    msg.setSource(54814U);
    msg.setSourceEntity(44U);
    msg.setDestination(12675U);
    msg.setDestinationEntity(6U);
    msg.value = 0.36215424472442304;

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
    msg.setTimeStamp(0.5046835885583358);
    msg.setSource(48195U);
    msg.setSourceEntity(123U);
    msg.setDestination(57832U);
    msg.setDestinationEntity(203U);
    msg.value = 0.6831634350727287;

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
    msg.setTimeStamp(0.9560839016456701);
    msg.setSource(55626U);
    msg.setSourceEntity(34U);
    msg.setDestination(17373U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5471726728073448;

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
    msg.setTimeStamp(0.7268424462200866);
    msg.setSource(6324U);
    msg.setSourceEntity(227U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5993103748283174;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.01825517822160516);
    msg.setSource(59604U);
    msg.setSourceEntity(145U);
    msg.setDestination(887U);
    msg.setDestinationEntity(37U);
    msg.value = 0.9716789632673142;
    msg.z_units = 169U;

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
    msg.setTimeStamp(0.5568464670364857);
    msg.setSource(49685U);
    msg.setSourceEntity(250U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(106U);
    msg.value = 0.3910794888093465;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.9833196708635726);
    msg.setSource(64911U);
    msg.setSourceEntity(66U);
    msg.setDestination(8641U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9764476437966789;
    msg.speed_units = 178U;

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
    msg.setTimeStamp(0.7125136142966617);
    msg.setSource(35855U);
    msg.setSourceEntity(109U);
    msg.setDestination(14820U);
    msg.setDestinationEntity(54U);
    msg.value = 0.1298541830998714;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.3249298504117365);
    msg.setSource(33750U);
    msg.setSourceEntity(72U);
    msg.setDestination(36024U);
    msg.setDestinationEntity(195U);
    msg.value = 0.7511038217921605;
    msg.speed_units = 209U;

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
    msg.setTimeStamp(0.4628904347093564);
    msg.setSource(8600U);
    msg.setSourceEntity(91U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(215U);
    msg.value = 0.8524238325156483;

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
    msg.setTimeStamp(0.20340172563166525);
    msg.setSource(40437U);
    msg.setSourceEntity(227U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(119U);
    msg.value = 0.971467704418088;

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
    msg.setTimeStamp(0.739255693578816);
    msg.setSource(45264U);
    msg.setSourceEntity(69U);
    msg.setDestination(39387U);
    msg.setDestinationEntity(82U);
    msg.value = 0.555187744193113;

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
    msg.setTimeStamp(0.11721090011690294);
    msg.setSource(10731U);
    msg.setSourceEntity(231U);
    msg.setDestination(31483U);
    msg.setDestinationEntity(240U);
    msg.value = 0.48321707474343;

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
    msg.setTimeStamp(0.8601983169308699);
    msg.setSource(24048U);
    msg.setSourceEntity(180U);
    msg.setDestination(2874U);
    msg.setDestinationEntity(7U);
    msg.value = 0.6527271051357963;

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
    msg.setTimeStamp(0.6262876091505631);
    msg.setSource(40409U);
    msg.setSourceEntity(61U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(168U);
    msg.value = 0.06448318833095579;

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
    msg.setTimeStamp(0.9689822281306257);
    msg.setSource(35897U);
    msg.setSourceEntity(11U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(105U);
    msg.value = 0.02336066987273777;

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
    msg.setTimeStamp(0.15890589412223666);
    msg.setSource(3410U);
    msg.setSourceEntity(13U);
    msg.setDestination(33766U);
    msg.setDestinationEntity(198U);
    msg.value = 0.25971231546594487;

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
    msg.setTimeStamp(0.19937865629992169);
    msg.setSource(46566U);
    msg.setSourceEntity(212U);
    msg.setDestination(27663U);
    msg.setDestinationEntity(25U);
    msg.value = 0.19652868049221006;

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
    msg.setTimeStamp(0.19356186222564697);
    msg.setSource(27773U);
    msg.setSourceEntity(94U);
    msg.setDestination(50194U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 4081221171U;
    msg.start_lat = 0.2891811505705657;
    msg.start_lon = 0.8631694919594199;
    msg.start_z = 0.9842238209826556;
    msg.start_z_units = 218U;
    msg.end_lat = 0.8955329733814603;
    msg.end_lon = 0.8956745042028955;
    msg.end_z = 0.7019286158651818;
    msg.end_z_units = 7U;
    msg.speed = 0.09697032275307271;
    msg.speed_units = 171U;
    msg.lradius = 0.16880696201474066;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.762033923505712);
    msg.setSource(6828U);
    msg.setSourceEntity(158U);
    msg.setDestination(3268U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 3240664717U;
    msg.start_lat = 0.42736354426685097;
    msg.start_lon = 0.791014673759353;
    msg.start_z = 0.17375570869434231;
    msg.start_z_units = 193U;
    msg.end_lat = 0.8061103784855264;
    msg.end_lon = 0.02358188625113522;
    msg.end_z = 0.6604228693457089;
    msg.end_z_units = 158U;
    msg.speed = 0.254963216839863;
    msg.speed_units = 216U;
    msg.lradius = 0.4499633779192941;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.22753991080223346);
    msg.setSource(50080U);
    msg.setSourceEntity(141U);
    msg.setDestination(18387U);
    msg.setDestinationEntity(23U);
    msg.path_ref = 2938543447U;
    msg.start_lat = 0.36643600071936033;
    msg.start_lon = 0.7733904732834953;
    msg.start_z = 0.5899044155842356;
    msg.start_z_units = 88U;
    msg.end_lat = 0.8867386473802876;
    msg.end_lon = 0.7018181090646298;
    msg.end_z = 0.3912100747695041;
    msg.end_z_units = 71U;
    msg.speed = 0.3905053342987417;
    msg.speed_units = 246U;
    msg.lradius = 0.4898031233326601;
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
    msg.setTimeStamp(0.06060655420056793);
    msg.setSource(27250U);
    msg.setSourceEntity(110U);
    msg.setDestination(58450U);
    msg.setDestinationEntity(27U);
    msg.x = 0.26311814680626666;
    msg.y = 0.07882219757572817;
    msg.z = 0.23015188059706326;
    msg.k = 0.7827623335909523;
    msg.m = 0.46583982174630945;
    msg.n = 0.857830816238068;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.2538257311303278);
    msg.setSource(36261U);
    msg.setSourceEntity(197U);
    msg.setDestination(14147U);
    msg.setDestinationEntity(162U);
    msg.x = 0.10060165542497546;
    msg.y = 0.5966529343819885;
    msg.z = 0.5975906817155955;
    msg.k = 0.5394361538020145;
    msg.m = 0.9590979501956151;
    msg.n = 0.6789919622020577;
    msg.flags = 251U;

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
    msg.setTimeStamp(0.38186480177924376);
    msg.setSource(12347U);
    msg.setSourceEntity(108U);
    msg.setDestination(55951U);
    msg.setDestinationEntity(154U);
    msg.x = 0.47067248576632625;
    msg.y = 0.28363434178015867;
    msg.z = 0.10695136832117502;
    msg.k = 0.5147937328886946;
    msg.m = 0.9427732131745109;
    msg.n = 0.6037341763289841;
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
    msg.setTimeStamp(0.47730084716181054);
    msg.setSource(6993U);
    msg.setSourceEntity(201U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(131U);
    msg.value = 0.5269366420715218;

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
    msg.setTimeStamp(0.5268328026880109);
    msg.setSource(62838U);
    msg.setSourceEntity(101U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(153U);
    msg.value = 0.38159684804249105;

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
    msg.setTimeStamp(0.3838354024289783);
    msg.setSource(64047U);
    msg.setSourceEntity(149U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(131U);
    msg.value = 0.3559509433036351;

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
    msg.setTimeStamp(0.2594311317432678);
    msg.setSource(36377U);
    msg.setSourceEntity(254U);
    msg.setDestination(19928U);
    msg.setDestinationEntity(19U);
    msg.u = 0.5116299957680275;
    msg.v = 0.8754837463163185;
    msg.w = 0.9991033441679047;
    msg.p = 0.5988265437235051;
    msg.q = 0.6793918303110675;
    msg.r = 0.5942900977303924;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.4540478724153364);
    msg.setSource(52531U);
    msg.setSourceEntity(3U);
    msg.setDestination(4022U);
    msg.setDestinationEntity(217U);
    msg.u = 0.8899692031317368;
    msg.v = 0.3335710214963954;
    msg.w = 0.16481531784418157;
    msg.p = 0.7148917736868862;
    msg.q = 0.3317567092452376;
    msg.r = 0.5270976158779522;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.5070852816110762);
    msg.setSource(50187U);
    msg.setSourceEntity(153U);
    msg.setDestination(47647U);
    msg.setDestinationEntity(192U);
    msg.u = 0.8980132996395984;
    msg.v = 0.9751858869231551;
    msg.w = 0.8847989847715767;
    msg.p = 0.25253496556377464;
    msg.q = 0.18719010707848815;
    msg.r = 0.018466673736422967;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.33713022006960736);
    msg.setSource(36928U);
    msg.setSourceEntity(55U);
    msg.setDestination(20318U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 174104633U;
    msg.start_lat = 0.5834134055663779;
    msg.start_lon = 0.47444382982958944;
    msg.start_z = 0.6925601317824573;
    msg.start_z_units = 231U;
    msg.end_lat = 0.3166164137286158;
    msg.end_lon = 0.5783138603962078;
    msg.end_z = 0.0026895397852434444;
    msg.end_z_units = 11U;
    msg.lradius = 0.2536742751222393;
    msg.flags = 160U;
    msg.x = 0.5155555105892812;
    msg.y = 0.15809497946410178;
    msg.z = 0.35350885562563183;
    msg.vx = 0.2436228891138923;
    msg.vy = 0.2639016767147302;
    msg.vz = 0.5496439290670097;
    msg.course_error = 0.9055686299371979;
    msg.eta = 35683U;

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
    msg.setTimeStamp(0.02931229794131296);
    msg.setSource(9862U);
    msg.setSourceEntity(121U);
    msg.setDestination(18824U);
    msg.setDestinationEntity(14U);
    msg.path_ref = 3422192361U;
    msg.start_lat = 0.8137760583480186;
    msg.start_lon = 0.09904583638799291;
    msg.start_z = 0.9571018345331147;
    msg.start_z_units = 74U;
    msg.end_lat = 0.8085547082952905;
    msg.end_lon = 0.8013562114268057;
    msg.end_z = 0.0017992199281721133;
    msg.end_z_units = 244U;
    msg.lradius = 0.6418017517054004;
    msg.flags = 121U;
    msg.x = 0.9823423962812324;
    msg.y = 0.07119391223332017;
    msg.z = 0.09981834093807451;
    msg.vx = 0.016878250914783455;
    msg.vy = 0.17305724809621792;
    msg.vz = 0.276153115076187;
    msg.course_error = 0.43315484525453085;
    msg.eta = 39734U;

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
    msg.setTimeStamp(0.7581049488497824);
    msg.setSource(65492U);
    msg.setSourceEntity(187U);
    msg.setDestination(21128U);
    msg.setDestinationEntity(51U);
    msg.path_ref = 2313367602U;
    msg.start_lat = 0.5099586706896445;
    msg.start_lon = 0.9427984940689521;
    msg.start_z = 0.10016240800461951;
    msg.start_z_units = 50U;
    msg.end_lat = 0.720189375991771;
    msg.end_lon = 0.06503087271070551;
    msg.end_z = 0.4940353664325665;
    msg.end_z_units = 6U;
    msg.lradius = 0.42843199199125226;
    msg.flags = 124U;
    msg.x = 0.8389245317160386;
    msg.y = 0.8533656692465583;
    msg.z = 0.7637902642690955;
    msg.vx = 0.5662018929057999;
    msg.vy = 0.9760315430750601;
    msg.vz = 0.5384641397129375;
    msg.course_error = 0.6560452998831351;
    msg.eta = 36201U;

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
    msg.setTimeStamp(0.858825554365216);
    msg.setSource(18794U);
    msg.setSourceEntity(150U);
    msg.setDestination(14667U);
    msg.setDestinationEntity(145U);
    msg.k = 0.6841448960170925;
    msg.m = 0.010421368724013447;
    msg.n = 0.3097636516919655;

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
    msg.setTimeStamp(0.041126598499442335);
    msg.setSource(61367U);
    msg.setSourceEntity(139U);
    msg.setDestination(35967U);
    msg.setDestinationEntity(66U);
    msg.k = 0.37793231322908827;
    msg.m = 0.7055319429099208;
    msg.n = 0.10650990438913088;

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
    msg.setTimeStamp(0.5434375111662715);
    msg.setSource(62151U);
    msg.setSourceEntity(58U);
    msg.setDestination(34183U);
    msg.setDestinationEntity(128U);
    msg.k = 0.7886215656542207;
    msg.m = 0.008093692904704186;
    msg.n = 0.8359791290663527;

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
    msg.setTimeStamp(0.3128140751186712);
    msg.setSource(48328U);
    msg.setSourceEntity(204U);
    msg.setDestination(7135U);
    msg.setDestinationEntity(82U);
    msg.p = 0.8906397272755715;
    msg.i = 0.26404764705224293;
    msg.d = 0.17612952071241084;
    msg.a = 0.22125495471458068;

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
    msg.setTimeStamp(0.635100189377204);
    msg.setSource(64285U);
    msg.setSourceEntity(139U);
    msg.setDestination(11113U);
    msg.setDestinationEntity(217U);
    msg.p = 0.8957400878637418;
    msg.i = 0.3340881604405377;
    msg.d = 0.0876142740941458;
    msg.a = 0.41506745904574327;

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
    msg.setTimeStamp(0.017227643490272726);
    msg.setSource(52702U);
    msg.setSourceEntity(79U);
    msg.setDestination(21681U);
    msg.setDestinationEntity(218U);
    msg.p = 0.16400695024675926;
    msg.i = 0.8564819838193944;
    msg.d = 0.06083614799522141;
    msg.a = 0.6473247496375376;

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
    msg.setTimeStamp(0.7500910726051665);
    msg.setSource(30734U);
    msg.setSourceEntity(20U);
    msg.setDestination(2553U);
    msg.setDestinationEntity(57U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.6490235877817241);
    msg.setSource(28361U);
    msg.setSourceEntity(83U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(242U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.5250894241324054);
    msg.setSource(50634U);
    msg.setSourceEntity(181U);
    msg.setDestination(56103U);
    msg.setDestinationEntity(54U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.5326238042280496);
    msg.setSource(51674U);
    msg.setSourceEntity(178U);
    msg.setDestination(17841U);
    msg.setDestinationEntity(168U);
    msg.plan_ref = 3745498954U;
    msg.id.assign("OGIDYXCBCKGVQMJTYXYODLKWMNTVXMPXYWDPYZAKESNXIXSBCIEDWULAMZUHHYNVKBNEJFSTDUHNC");
    msg.memento.assign("ECXNOOYEJVEFSLQIKGIPCSKSBFQXP");
    msg.timeout = 23232U;
    msg.lat = 0.7637880656567766;
    msg.lon = 0.5588083214703774;
    msg.z = 0.5560257006068691;
    msg.z_units = 86U;
    msg.speed = 0.8106085770473083;
    msg.speed_units = 88U;
    msg.roll = 0.9692293496840706;
    msg.pitch = 0.4823102861213452;
    msg.yaw = 0.21583106247132666;
    msg.custom.assign("OYYLIYRSQAMGGIZLQDAKJEWPK");

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
    msg.setTimeStamp(0.2864451408226151);
    msg.setSource(60065U);
    msg.setSourceEntity(163U);
    msg.setDestination(52957U);
    msg.setDestinationEntity(166U);
    msg.plan_ref = 3946102908U;
    msg.id.assign("GRLBIAPTYFXBPCYIFHXNYKMBX");
    msg.memento.assign("GJJOLFXONXHNDMGWLBZHIITDREDCUGYRIORKXNDYLSGPMJTRIEUQVUFZDVBAKALBKEYYNUIZMHQAILZPZSOQVFTOJLBXEJGMMZGQVUPSSPKBKGHWDSMVFJXXXAUV");
    msg.timeout = 28072U;
    msg.lat = 0.7905720876599076;
    msg.lon = 0.9846449091887877;
    msg.z = 0.2588142522293463;
    msg.z_units = 212U;
    msg.speed = 0.24202348378699823;
    msg.speed_units = 254U;
    msg.roll = 0.7927828795363603;
    msg.pitch = 0.2903360414064886;
    msg.yaw = 0.1834927241504416;
    msg.custom.assign("UMCQHKHMIJYJSAPCLP");

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
    msg.setTimeStamp(0.9209812435778615);
    msg.setSource(19929U);
    msg.setSourceEntity(88U);
    msg.setDestination(51138U);
    msg.setDestinationEntity(251U);
    msg.plan_ref = 1709273188U;
    msg.id.assign("DJWJJIHKHJRVGAHJISRAXNAUZARWXCARSIAESGEHFQSPDKONRZKCVZPVDBTNBBNPJFFFLBQTAKPWPIVXFLRQMVZLUCHHYUYWTCRIHWQWKPIQOBLMDLMSGXTVZQAECYEAKMOGTBTKOVDDLPJKUFGMHSYRBPXGKAOVYEBCOWFEHNFLYUXQYCFIOTOBUPJXVWMJCQCEMXMRZSDBSENIMGJNGDLETTCXGUQLKXRZYMWIZVZ");
    msg.memento.assign("GCCCUTRFVQOQSGFPXDQLEKBLTHESSWWYWFXCWHMIFZTUXTHRJFKIWPMUM");
    msg.timeout = 35515U;
    msg.lat = 0.33808750980693836;
    msg.lon = 0.6013522108799457;
    msg.z = 0.7026748447629858;
    msg.z_units = 151U;
    msg.speed = 0.028128553119348032;
    msg.speed_units = 169U;
    msg.roll = 0.0751931356711184;
    msg.pitch = 0.371041263260228;
    msg.yaw = 0.9795020980469861;
    msg.custom.assign("KKLHVUNMNWBCZEKAXDSBAQOSFRDYOFNFVZAPBHHHLIJREIMAYGSH");

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
    msg.setTimeStamp(0.8623277913459566);
    msg.setSource(60683U);
    msg.setSourceEntity(82U);
    msg.setDestination(62944U);
    msg.setDestinationEntity(244U);
    msg.plan_ref = 3392943249U;
    msg.id.assign("QVDZCIUAIFDKAUSODYOPKQARLIKXMTMXKSKIHNFXSSTTTVGJDLTRCONRVEYAGQAOHYCGIEWWLFUXKGMPYRKTRZSYIYAUEZCUUIWKHGUPYEYLBDQXPAGPIMFHNJWMHCCRCBIGJXBTPENSBQHFBZMYBZBMJXZEWRNQBNFWXWZWJNFDI");
    msg.memento.assign("ELIAJEABVOIQHQFUHVYLPQGVDMRBXGZYEPFNDJXUDSMUQFPVBYZPDEYULWOJPHOJUZATGATDOWLAQJVXIOWGMJK");
    msg.timeout = 60080U;
    msg.lat = 0.016071049763033418;
    msg.lon = 0.9054837113768011;
    msg.z = 0.9950616494915406;
    msg.z_units = 26U;
    msg.speed = 0.02184046747034707;
    msg.speed_units = 149U;
    msg.duration = 49977U;
    msg.radius = 0.8783267895023499;
    msg.flags = 189U;
    msg.custom.assign("KIYRPOUWQPIPJLNRVRATHTGMUITIBWAIWPTYEIGXFVOVXGQHDBNECYUBWSKSDEAMRTHKTGADCRSCYCBMOSOBBYSHEUZZIYSBDO");

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
    msg.setTimeStamp(0.29808957470518604);
    msg.setSource(3565U);
    msg.setSourceEntity(148U);
    msg.setDestination(22078U);
    msg.setDestinationEntity(38U);
    msg.plan_ref = 3254111793U;
    msg.id.assign("XQJVZXPGWAIKWMQONEMDCDYYHFEGMCVMKBCRIACCQTDJGWFVNSIHXWUJYUODUBQFNTSDJKMKUKHZTEOZRRIMRR");
    msg.memento.assign("PCHHEWLSAVELHBQGMAHAEVJNWRWLQOAGRYURLPQUSTVTUNYKIPTXXKCIVLKGPZNZSCGRIIVSIVRRGMEXHZSMWKZAHJNPOOLGOAY");
    msg.timeout = 26959U;
    msg.lat = 0.8769725697468675;
    msg.lon = 0.7299019337098561;
    msg.z = 0.3174219092863053;
    msg.z_units = 153U;
    msg.speed = 0.1723058107180172;
    msg.speed_units = 72U;
    msg.duration = 58826U;
    msg.radius = 0.7370745967974403;
    msg.flags = 242U;
    msg.custom.assign("HJFFLYYGZRPOJUTZTSAIFOBKBOHSMGWTPMMVJNYFAPXIUWGTJJBPEYONTHCUABREVGUJGXVLSNPOGDYWDYVCMRSQDFKMSHFJDUPJLWUIOCCKAEBVHSUBBUKBUPUSAJVHPTQHVIQWTHXRXXMEINRGRWREZVCLLWIICDVKGOLDXTKEYTZWQERQHDSYFXQNCKWPKAXNKMXYKDMNLBMNLFIOEAFHTRADIYLZSZCAOEQ");

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
    msg.setTimeStamp(0.08827776891769157);
    msg.setSource(52208U);
    msg.setSourceEntity(53U);
    msg.setDestination(2180U);
    msg.setDestinationEntity(247U);
    msg.plan_ref = 4131785085U;
    msg.id.assign("WXXUVOJDHAFCJGSPCYXTKNKYBQZGXFUWOHCJBZWOOEZRWCFKUASNMKILWKGD");
    msg.memento.assign("WQZDJHEOHGRPCBRDOSXDBXNXJKAVDYKTWZQOTZTEVQVZHTFNL");
    msg.timeout = 48075U;
    msg.lat = 0.7592949572771274;
    msg.lon = 0.9412053946040704;
    msg.z = 0.8375166170316861;
    msg.z_units = 236U;
    msg.speed = 0.33891206269756335;
    msg.speed_units = 154U;
    msg.duration = 8742U;
    msg.radius = 0.9404555876192511;
    msg.flags = 236U;
    msg.custom.assign("YNLBVZKHTOKQSYWWLCJFUQBDPGFCIIX");

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
    msg.setTimeStamp(0.07312147534960545);
    msg.setSource(1820U);
    msg.setSourceEntity(119U);
    msg.setDestination(55449U);
    msg.setDestinationEntity(133U);
    msg.plan_ref = 3804430415U;
    msg.id.assign("EADGCRQJNBIZASZQNQASGDTIEPSAEVCYFFDIJYDBOLGBYIBFCJRWDCSMJHHFRBLZJAAFNIINYEQIOKJUMWMPQWUCMBXPIXWYEVVAEQYZRVBDKNSYACPGTLFPLXOBFMKBHMVTHOEHALDGTRSUUDHYZQJMXLSPVOSNTTKGKQEUXDVFJZPOYCPIZOZCHMUFXTLTZXSGWKWNVOWRGPUJXGULSVRZDNMYC");
    msg.memento.assign("FVQRBHXNDMRCBTOYZDWVLREUDVYFVLNAVPFAOQTMEPIVJRMGWBMWMMKNCJOWVIGBTZZKJHOXSYLZSINCIOHARKUOUEWDASHDQIMUCWWQYKFPPWNTWQXXXUJRBLOBEAXQZNQTIIOJXPUPCSTLUEAALTVGYC");
    msg.custom.assign("IXLNVJGWPYTJQZBGLNBPFLEHZNFGE");

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
    msg.setTimeStamp(0.8057576180016719);
    msg.setSource(53642U);
    msg.setSourceEntity(154U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 3105177793U;
    msg.id.assign("VNKUMPZENMWYFFAFFUESLDIFXXO");
    msg.memento.assign("FFMCMMXHDGUZWZWILEYUHZXTCJJJSWUEVUJXVGQMLXEVIAVDRPANAOQRRTBDUCYHGLWWOQKXNNVQWCJRFBGFKPDZBDGBSYTGHUQVQBLYWFJPPZGBANBZDASRXTKLKTSONAEWMMCLBSTCAWOQOXIYMGZYTPJLYRIXPLSEAFEOKOVUVXXID");
    msg.custom.assign("JWMZJKUWKWPINPXTFKDNMBEHOMDZOHWSOTRQBAIATYCRBAPSYLESJMCVFENDJYVGITFDSDRRTOAQONHGQVJABVEKFVCNCMSCZKHBKRXIRFGNUEZOYLZCDNLLXYKGSSAFRBRCIZMJTJNJFULGEDUXGUGUMYVRBWNQQBUGPXPEGSDOUOWZJTFVTAAPLVOGQXHE");

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
    msg.setTimeStamp(0.6871422962846176);
    msg.setSource(34939U);
    msg.setSourceEntity(244U);
    msg.setDestination(42308U);
    msg.setDestinationEntity(129U);
    msg.plan_ref = 3065836533U;
    msg.id.assign("MALPVYYITJBDCOKTOWNHWBCRTMITLZVFCAGUNFEYKKYCZSXQIMRSRNZTCGOQDLQHWAXEPTARGSQSABASOLDCILXERVBHITLJSNAGMWMMCHHPHWWXQABMCHMDFRXVTJFNODUZWCEKKEYTNJGOUDPIKOBBFSOQXUVOGAQGZUULEBAIWIVKKXPXIYZULYDNRFNVGQESJZWFRUZYPJHSKIMORBNQVVVDEPLYXEGFHJDZBTSPUYFNZDEJFUQCJXR");
    msg.memento.assign("PAEZBQMKORAROHWVSKJOPGHCKRUIGQWAGYPIXKHEJKXLZXBFPHJXUSPBZURVLUBCNQMUNIURQJLWWCACALFDKYSENTGWCLLMUHBZOANOYLLGDMSMCTBRGEVXDEGFBTPJIEKZYJOVAZZDMYPJJPYSVCHWVVFHKNFZPECKLOQQBUFDIDISTVHTNSBMEFFACDOQAKSWNQDARQMWOTYJTOSMNYRXTGDGHZFYVBXHMWTWXSERIT");
    msg.custom.assign("XLQBVQADMFYFZVVDHBIXNSLLMGFQEVVQOEPGREPPRUWUJYIUNKPOWRMZQTHGAVERKKZEYWDTNDXOZBUKJLOFSVMYARZCZXODITISXVOJPGYJGNOWQUWHDKHKEJUCJBBYABFZQXDGXWDSMRFSSMPGTSAVTPYXZLJTKJLC");

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
    msg.setTimeStamp(0.3851500514765498);
    msg.setSource(42258U);
    msg.setSourceEntity(244U);
    msg.setDestination(28909U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 1622785687U;
    msg.id.assign("AZDMMDZSTUHRICTJBFESOYONYHZPOTJROHETWFK");
    msg.memento.assign("KPQVHWXMJZUNVRHODIYGFWIBBYWGMXPRAQJOPJHFGOULZLHQKTUXQSAWAPOMOUSEZHLFCDZLRJYMKNNSMFVPWWNTYWEYOJOGETPADQSZQKZHHBIKEDPKMBRZGQSIGILMDACTBRWFPVHQKMNRDLBLQEVCSCYUR");
    msg.timeout = 2449U;
    msg.lat = 0.5886487716775337;
    msg.lon = 0.23855350233606987;
    msg.z = 0.7572681619160632;
    msg.z_units = 107U;
    msg.duration = 19960U;
    msg.speed = 0.5162877733126969;
    msg.speed_units = 197U;
    msg.type = 10U;
    msg.radius = 0.7347483195921883;
    msg.length = 0.9581645300374746;
    msg.bearing = 0.23211491883202195;
    msg.direction = 21U;
    msg.custom.assign("BMKPFIFRDSYGNBAVEFGFMHGMKNMQHSWLQOJBSPRAPSZPWCYAYPQDRWLTXRMAWZOJTOEAXD");

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
    msg.setTimeStamp(0.6676542206905824);
    msg.setSource(35674U);
    msg.setSourceEntity(94U);
    msg.setDestination(19017U);
    msg.setDestinationEntity(164U);
    msg.plan_ref = 2271257118U;
    msg.id.assign("VYLOCPNWDOZEEBOELTXINPXHTYFXIBOLAXNBZXVAJCOENHCYQIMXCQEZSVDMSMHJAQYYUMBEYYGQMMGBLKHIABGLFVXXQZUIDFJLVAMCOKRCSITYRZSUHPDDAXWTRBLPWZLPTDRJGWOQKEGVNTQNAKGPWHFAGBVAERODJNTKUVKZWESDZSSZPROEJJIRZTRPKNTICKDRUHVHALCFSYYVGJNUCDIGHFBWSKFM");
    msg.memento.assign("ZSZNGPDQRJNUKSXYJUTJPXBVQYRMNJJAYAQWWDFJQPEYNOLVZDHYKFUXZPJIXBDHXNTCSWSOTURDLQQBAOKPLCIBTGFCKJWTLQNVAQOSFUMEHKVDWBDBANCFVSWXVNXTXFPYIBMAFRHYHTICIRLJHGTAVFEDHAYEOMHLEXZRSCU");
    msg.timeout = 61765U;
    msg.lat = 0.06409471872792705;
    msg.lon = 0.08106318322822248;
    msg.z = 0.847026185448669;
    msg.z_units = 59U;
    msg.duration = 10752U;
    msg.speed = 0.6638197232558106;
    msg.speed_units = 226U;
    msg.type = 134U;
    msg.radius = 0.02877368977912509;
    msg.length = 0.3980672514980975;
    msg.bearing = 0.8326236259490277;
    msg.direction = 134U;
    msg.custom.assign("YTTPJKWAEMCROOIKABRQOQRUILEAJSJSGBLLTUNNDDRKGHVSWGTESFNNYBOFFELWFFQGBZECXXNJCZCXGVAGHODYHBRUXVBCHWZQJMCXTZKAIUEORANLOBBVVYJQKMHWMXXIPWQTYZIMJTSRZTQLNVJTPWIXUEOFRSQPDKMSGPVYQACLGSIKMDLYFAEICTEMDMVYYM");

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
    msg.setTimeStamp(0.9269363694301321);
    msg.setSource(44006U);
    msg.setSourceEntity(218U);
    msg.setDestination(27606U);
    msg.setDestinationEntity(0U);
    msg.plan_ref = 1563888668U;
    msg.id.assign("AHLHVPEUAZESHHKCUIYFGOGXCRYGHLMJBVLDKYEOUUAEQLACFJHFGDNSZZPUJXUROKLKRIQUKYZXWUQIHHVKEALZKWWIDBYSAWWWXCRASQEXYBSZXRTIPPSRAHJSIBYPCMODKUENOGACXGOTOMTOKLQMZBWWCJLPIQTGNVMDBFOYQRZXORVDFGWBNDYCJBQHNLMMKTFZPGPNTAIFWDSVMSTIZERBVRBXJQE");
    msg.memento.assign("KGIICSFJOUDNKMEVXXHGHMKKBWPEWRJSZXOIPFYIGGQAMRGDEHPFNDSJTAGYKVWDMHCUBTWLSMYRJBOMOMZWXBAUTOEKJDHHDUPCUYAAPXGOOROUVUNAFVQNXFNSDWEWKZPZVAELMOBEPNQGFYSCMRYWIPEFGUHNSYJJRCZFJCZCBQXDNTBLIZCVICTUBITQOKLEUDSFTRRVVTQZFIHLQMBSQALZDVYA");
    msg.timeout = 7306U;
    msg.lat = 0.03611259292947644;
    msg.lon = 0.48811300378604805;
    msg.z = 0.9221139198822815;
    msg.z_units = 103U;
    msg.duration = 13225U;
    msg.speed = 0.29129209044797255;
    msg.speed_units = 189U;
    msg.type = 88U;
    msg.radius = 0.24256658465502812;
    msg.length = 0.8605575481694984;
    msg.bearing = 0.06736941562368515;
    msg.direction = 111U;
    msg.custom.assign("MRIDXOJZTQOAUWAONYMKHWTPTYCPZVLRHBUJGFNVPPGVBGECWLJJQNMDMAZHQSWFUWHLEJSFYKOIEGGKGMDFUFCOICGBLPUXCYCBWEEROKOQBVSNOEEUNSVPRRYLVVAMZHP");

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
    msg.setTimeStamp(0.5487539062331006);
    msg.setSource(32276U);
    msg.setSourceEntity(88U);
    msg.setDestination(26325U);
    msg.setDestinationEntity(152U);
    msg.plan_ref = 2427605578U;
    msg.id.assign("FLKKWIJMNKBLCZBTDMQOZIASZJXERTKXRFACIYJDDBBGEVJFFMUJXBHEFHRNMM");
    msg.memento.assign("BZFRVWKLDVKTJYBATDKGYNIFFTBZXW");
    msg.duration = 12687U;
    msg.custom.assign("HDELWTJCUFBCSAWUYKRKEQFNPHZVIMBUQAPUCBMBTFILBVVJJVIJLYBDKTXPQDGZPEIKOPKFMWRJBZSQMWORCAHYGQKXR");

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
    msg.setTimeStamp(0.7124044701230476);
    msg.setSource(8845U);
    msg.setSourceEntity(129U);
    msg.setDestination(10108U);
    msg.setDestinationEntity(44U);
    msg.plan_ref = 2677328536U;
    msg.id.assign("FQNUPEMVARBQYQAQFNMGWGTCIMG");
    msg.memento.assign("VESXOEXZJRTMVHPWUHYDKNVFPPEHBJTHHKGERZVYIZBYSEPRMRRAQIJFZCDEQOIMVDZW");
    msg.duration = 43221U;
    msg.custom.assign("YXBIJAAKSMLZZYYVZPNPHHKBFFOBNYENUBWSSRRGIOJIMTWEQLFHJMKXMHECMZKMSQUUETLFGRQFHZEOZCVPYXXZDYDNOVNBYKWJGOZNWUGGRCSRPWKFEMJWFXBQTDVJXIDCUOJOGMCPDYEVQHZDGALIQJWCUIWOMRDAVNUNLTOHWGPQARTLELLHXFTECBAEBHQJCATMIBLQICRSITSIWUGFAZTULRPCKVKNGXX");

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
    msg.setTimeStamp(0.3858549816654646);
    msg.setSource(53977U);
    msg.setSourceEntity(7U);
    msg.setDestination(28076U);
    msg.setDestinationEntity(82U);
    msg.plan_ref = 1887983052U;
    msg.id.assign("HAIQKYHDXBEJEZNMUHZQKNLCSJPPOCWAWXRGCZEBHFEUSOIITRPMGIBLBRSJBYNLXBNOWOVGMFQFCYALPHXYVADOZSTRODXONNGZSWSICIIZXZPDKUDHA");
    msg.memento.assign("OOHZNQZXAUJDJGJFRWDBOZIJYDSKVWK");
    msg.duration = 2391U;
    msg.custom.assign("GSPNPQRDMRJHKZAQPGBZZBIDODFHLYFSOHFNTBPOIYMYAGIDAJXVRLFOSJGTVSEWMIZOFMYALKPQQJQCINPMSBREVGXDVXDMIRLCKYNGWMYEYHREXCSLYWXHVUUTGHQSJUVFEPCHXKMZCZKPIKPEOLXWSEXOKCCHWDTKBNKNKDVSVNSEDQVNHMWYNZGTDLJAEQAMACXOZJFGXUWQARUQTLFBEUIJGFU");

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
    msg.setTimeStamp(0.8778637186133663);
    msg.setSource(54291U);
    msg.setSourceEntity(211U);
    msg.setDestination(8041U);
    msg.setDestinationEntity(217U);
    msg.plan_ref = 2398384166U;
    msg.id.assign("PPTBWMGKCTGOJNYLJRDMGRVSWJLJXILQEYOTNHHXXKYIGGPZDFPFMWBKYCMFOXAIPVSLTUUXSYHGYZDQTGEZXMWJWTUUCCJJUREEITOZNYKRDVZDAAOROPDHDHAWIKXVLHVLAS");
    msg.memento.assign("MMIWCGUQCEQTXHLCLDWYXBWDXQUBFEIWZGNDABYXIBAPHBVBOKAFTREQRKXDDLNHMLMRCNGMASNYEILSGYGXRSDVVPMTPJOBJHLTWQWNSDDZWTJVHSGKTOIRQZICKRMIGEMRCKTYVLFSHLOPVQFANVMVUQKJJUDHZBOKSOYBERWJUEOTTANUJSOCZSWZJVFHRQUATDCOAGHYPZNILXUWZUPJXCYEGNAEFFPHOJEKXYSIZMFVNGLFRACFBPX");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.9446616022849246;
    msg.control.set(tmp_msg_0);
    msg.duration = 61394U;
    msg.custom.assign("QWJSVJGBNXLDBKLIXUPRBLCTOMMDZZQPLWBCGTGZHOAJSPSLNDNDEOQRETHZFDGNOSCNSVRHMVUXJWMXLUEJGIPEKJQPVYPQIJKPCYZCHWARVQFSXLWRZPZFERMHPKVXFOUFPXYZVRAAQDTVIAYWYUKGOCMFYWVNXBABHCKIBMUWOITMLWMJFYEHEYEEOQDBHNZQSAASIYWDKZJCTTDUJKY");

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
    msg.setTimeStamp(0.8734298684274138);
    msg.setSource(8100U);
    msg.setSourceEntity(6U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(184U);
    msg.plan_ref = 1848935158U;
    msg.id.assign("NUXXNBAEBGPKZOUOSFYJQESAMQTUVLDWMRAVHKJKGFMUTLPEQKCFHQJMPJSLGTGDHYRLXSMJCL");
    msg.memento.assign("MQISREJGLVNFTZWXIPIXVUVLMZWNFAEOYPNCHNMTEYFFIDACCQVCKBWWLFSZDCSKOQXRRNEXZVGDWBDBEFTOXUYKPSJCHVMZSKFGAPQRYDIRDUCJOXMDNVLPVJGGRVZHAHBMUSKNEKH");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.6463052280919298;
    msg.control.set(tmp_msg_0);
    msg.duration = 39219U;
    msg.custom.assign("YVJCKGBAVZRDDNUPMQKQRRAXGGPHQRLJCLCPEIOSSTIEQHKEZFHFUOVUMHUQVJJNDUEHCYQUUKMBJORVXLTFNVXDQAZWPISPY");

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
    msg.setTimeStamp(0.6218997336852117);
    msg.setSource(31147U);
    msg.setSourceEntity(227U);
    msg.setDestination(45153U);
    msg.setDestinationEntity(125U);
    msg.plan_ref = 2607008758U;
    msg.id.assign("QMOBUXWBRWBMYZTBSGIZHWCNIXRHCZVEGYCIYCFSPNSOGSDTESXPNQKAMXDFALJPGPCUQSPIZKNDVJETMKRCTPYPJRCRZBUPW");
    msg.memento.assign("ADSHPJPQHIJEWNQSJDMJRDFAUUVSAJHCCUOYZXQMYFVZEFWEADGNLBGXCQHYAQPDGTJXHGWXTLFSPLQLKALUNNKULSGBJXTIOWDNASZRUWCJOEGJMGYXVAUVLEBNEUBZKORXEIRQUMLGVZPBI");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.6334593363701138;
    tmp_msg_0.z_units = 9U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45303U;
    msg.custom.assign("OIXNQBTUYOCRFMTONBWOPQAGHHUKDXKFSOMRTRVKWAUBLSSUEBARVZALWNIANMCFCWXCLWMDTKKJMWHCTFQYZHXIXHQZLQ");

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
    msg.setTimeStamp(0.5357614144038533);
    msg.setSource(59612U);
    msg.setSourceEntity(226U);
    msg.setDestination(26077U);
    msg.setDestinationEntity(116U);
    msg.plan_ref = 2392799771U;
    msg.id.assign("ULNWASMCUNOEZVIBIDVBJBWUDGGPMFRXAKPOBFEFSDXJRGIINBSZEZLJYUEJKXRUAKCOGVNEHNLPCSUEASGGTFTXKRIRWTTHWLZYUZBIXPFCMASPXYRXTCOCKDQPJIQQXYEWHQJRLVFPLCFEKJUKVVZCYGCYHBTBOWCZIMQINJDLDLGQUXOJARHFSFOKMWPAYRFKZBDHKTGHMLVEEQVNZMTDDQPDTQTPXHOJYW");
    msg.memento.assign("AUCYLJHHMESKEBFRZJHCYEDATAWURHZUVNJRFPNDGXCBEUQONEAKBPHQTOFBDOQALMVRWPDDMPIFVBPCTCIGFERBCLQZWMITRQSBVQWXKRTMQFGXXALNTCQQJRDYCYOXHMRLOKHJDASNDHPQVXYMMPCGWVPDGTNSKXJH");
    msg.timeout = 38824U;
    msg.lat = 0.08271637705111556;
    msg.lon = 0.7809288462688878;
    msg.z = 0.3681430210253581;
    msg.z_units = 0U;
    msg.speed = 0.039775176278884716;
    msg.speed_units = 44U;
    msg.bearing = 0.9987431428810686;
    msg.cross_angle = 0.6485169930900955;
    msg.width = 0.7552098542342931;
    msg.length = 0.5033201696810392;
    msg.hstep = 0.2708264999187363;
    msg.coff = 226U;
    msg.alternation = 144U;
    msg.flags = 226U;
    msg.custom.assign("GJCDWBOYCKFEPSFLQZKYHDJSIOGXXYCGXRMGKRRRTLMUWJNCPXOVDTNAMQLBRJC");

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
    msg.setTimeStamp(0.8982265095892276);
    msg.setSource(22401U);
    msg.setSourceEntity(44U);
    msg.setDestination(4343U);
    msg.setDestinationEntity(78U);
    msg.plan_ref = 1656903041U;
    msg.id.assign("QPQMRBHNDLFZFBYYOJXBINODRTULBCIQMMXGKMZAGLOHZETZTGOSEXVHDQMTEWJBPZEFRAODKXJMREQUAPYUNFFVTPLBXWADPERDIVICVMPXDUGYWVCUURYNJEQQSWJLEWSELYAFBKXVUMFTSCCGTPZOJBKLRACRCSPKQFIGHLHCTKWIRIENNSM");
    msg.memento.assign("KTFOQFPHHEDWBXJWVXKLHNNEIEIRNCVFYFUVFPYLAVDLUUSADUJAWEUGPAJLUYSZBLKIGVPROIVPYUTNFFMCOHGYREMKWVMPBUBOYSGRCMBITFHHTZIJZQLOHPDKJAKVBQHEHBDCROVRQWCZNFOCJKRPFTLALMGDOXQERLNIQVOXJJWYELWAIEHNPPNQZDEKXKSTSGSWZZGARQYISZAGZNSRYMTMIQCXOKDWBMUJQGCZTBB");
    msg.timeout = 49760U;
    msg.lat = 0.715012571524206;
    msg.lon = 0.4464949936216963;
    msg.z = 0.9818261935692819;
    msg.z_units = 115U;
    msg.speed = 0.19039535956112508;
    msg.speed_units = 73U;
    msg.bearing = 0.9170654019864448;
    msg.cross_angle = 0.22272344832217528;
    msg.width = 0.19070074470905862;
    msg.length = 0.35497968225721155;
    msg.hstep = 0.23967967245439814;
    msg.coff = 199U;
    msg.alternation = 73U;
    msg.flags = 207U;
    msg.custom.assign("YAVBAQSDSXDDTXXJCMFDYTGAEPQOEUFF");

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
    msg.setTimeStamp(0.24978354851632623);
    msg.setSource(58337U);
    msg.setSourceEntity(228U);
    msg.setDestination(4053U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 4260866888U;
    msg.id.assign("CGRWUVPBKLUWCOYJEIRZPKGOFRJPTDCTVAJKGJTNJKGKBAZXPCHSYIXEWVVYHRHMCIYKZMGYTVZNNQUQYTMTSSAQFFESKHLBZDWZFDJTADHSSBEFBWCIMMAUMSBNERYGPYPNLOXWPKVEXMZGCROUHLSIO");
    msg.memento.assign("MENPPBIDOKNFBZKTFWROYRPQQOXSRXGUA");
    msg.timeout = 23804U;
    msg.lat = 0.007316552349373895;
    msg.lon = 0.9587218568648733;
    msg.z = 0.6071852566100969;
    msg.z_units = 48U;
    msg.speed = 0.6385544005474629;
    msg.speed_units = 122U;
    msg.bearing = 0.7742373171814918;
    msg.cross_angle = 0.14266347738968144;
    msg.width = 0.15031214872575227;
    msg.length = 0.18970970311509383;
    msg.hstep = 0.12058687756706332;
    msg.coff = 139U;
    msg.alternation = 92U;
    msg.flags = 69U;
    msg.custom.assign("GUCPLZAKAGCVGQTSGENFMMDCNMQDMETQDAZVIFQTCLPKWTMFQOUPHWIVHOURYKJDJLCYAXOFMENRXBJZWWVHRIODYSZZNXZLTNVWPFCJWTEUCTKBRKSIXKXESFBEUORHBLTISKRDIGQKVNDLJBWVRZFVPNGYBHJQLDMSACTVEJWHRQUKMXIIAFYDUPJKEIOLHF");

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
    msg.setTimeStamp(0.5043771414046996);
    msg.setSource(27966U);
    msg.setSourceEntity(210U);
    msg.setDestination(41573U);
    msg.setDestinationEntity(71U);
    msg.plan_ref = 178521075U;
    msg.id.assign("LCNFGUODMPBUZEGYWONHQGHAJBFC");
    msg.memento.assign("QQNDTFTMMCAHLCCLXPCTRJLYLFYHLIPHECGJXDRPZPFTQGAFUBV");
    msg.timeout = 651U;
    msg.lat = 0.618581662683368;
    msg.lon = 0.6230960615772567;
    msg.z = 0.5833985927891894;
    msg.z_units = 103U;
    msg.speed = 0.5346790073773932;
    msg.speed_units = 15U;
    msg.custom.assign("SAQDMSPJIEMHGUGDWSVPLTYRHVOAENUCJKONGLNCSTVTTJJXMIBNQSEXFUMX");

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
    msg.setTimeStamp(0.8831255710590735);
    msg.setSource(17325U);
    msg.setSourceEntity(151U);
    msg.setDestination(10447U);
    msg.setDestinationEntity(28U);
    msg.plan_ref = 39487319U;
    msg.id.assign("XLNYNCLDCJJPIZBPGCDAPBISVWYIWEUHBVWYAQUUUGXYFF");
    msg.memento.assign("RESHTPIOIVEZJUQOSHFZQQUJWPXFSPDVGCVCQRTPWWBGRMKHWSBYMWBYLCCLKOHNZVDHYTQLOWNIEPFODYLIFZBIRSZIPCNKKLCACMWC");
    msg.timeout = 27495U;
    msg.lat = 0.5943803762406538;
    msg.lon = 0.31361372360580064;
    msg.z = 0.047819939535515;
    msg.z_units = 221U;
    msg.speed = 0.07075477749110182;
    msg.speed_units = 246U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.07583592596566491;
    tmp_msg_0.y = 0.5148426153174849;
    tmp_msg_0.z = 0.36878126520523125;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AWEUIDFJUUCVPSLXDMSEFEOIGBHGKSRLCELQQASGEDKSVWHHWZLIHWYRADOBGMVJPRKBUZYJOTRAMTQNBOUQVBIOORWFXMXYBPTCTSEWXTKEONWPRFTRYITLPMPAFCCZPACNBCHLNJHGMTIWRZZJGDKAUOCSNQHGIGANSZVSMOEVMJYYZHYXDWSVFFDXFFKQPXQULJEIXXJBKYIHJTKKZZCUQGWOAZLPQLXTMCBRHY");

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
    msg.setTimeStamp(0.224906997842933);
    msg.setSource(53173U);
    msg.setSourceEntity(5U);
    msg.setDestination(21643U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 1810362027U;
    msg.id.assign("QSHZOLERSIXYLKXVJZBKHTBUIRRRGHGRCAHTFPAKTWJXTWMUDYHXIYZQGMOLVDFZAPPQYZGTSPFPUNJQDAKIXMLNFOKTFHIDYSYSMAQZBVKOQCJFNGIAUJNUDCIWWBZSVUEEOGRUMOYBEGSREDXWVSWCLUGNDZJTPPQJENTWETFLNX");
    msg.memento.assign("RXDEBFSVDRLHEEJJTHMXUAOGYPMBPEZSYPTLIJVXTCOQVTQMSBUCZXLDSAZNTLATPTLHGAEBWUDZIMMZEJGICLDYNUNWWQVTHPRRFEAAFTSMBKMOYXQWOMWKOQLGDPSNBOG");
    msg.timeout = 4419U;
    msg.lat = 0.2584077848605665;
    msg.lon = 0.08093100520126428;
    msg.z = 0.12567233314493798;
    msg.z_units = 52U;
    msg.speed = 0.4988106083442546;
    msg.speed_units = 209U;
    msg.custom.assign("SIHWYOLWTBJNVCTPISBEXFACGNQGMNGMRUZZGYIKMVZTPLIUHMJAWFCNHRXAEDCOUXLHFDLEEPGDVSHDUWBYVDFXOVZRPSAJEGSMAKGZJIXTQTPOQQRFYSBTFRLAYYAWJSJXLQJWFCOZEKWRMPYITQTWXUDBKDNYVKTNMQEQEBOLUCHZWC");

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
    msg.setTimeStamp(0.035165336921708756);
    msg.setSource(54913U);
    msg.setSourceEntity(126U);
    msg.setDestination(34296U);
    msg.setDestinationEntity(226U);
    msg.x = 0.20951687152473453;
    msg.y = 0.22777775276564005;
    msg.z = 0.2320890247937626;

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
    msg.setTimeStamp(0.9777944646367573);
    msg.setSource(46141U);
    msg.setSourceEntity(38U);
    msg.setDestination(53056U);
    msg.setDestinationEntity(122U);
    msg.x = 0.7498525075335417;
    msg.y = 0.3482512363401298;
    msg.z = 0.3775109618004826;

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
    msg.setTimeStamp(0.42290007054287315);
    msg.setSource(12690U);
    msg.setSourceEntity(190U);
    msg.setDestination(5773U);
    msg.setDestinationEntity(75U);
    msg.x = 0.9496670732270386;
    msg.y = 0.043789791869393024;
    msg.z = 0.7194227475794001;

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
    msg.setTimeStamp(0.3916447039266354);
    msg.setSource(38412U);
    msg.setSourceEntity(24U);
    msg.setDestination(30837U);
    msg.setDestinationEntity(172U);
    msg.plan_ref = 337105151U;
    msg.id.assign("NSJROXJWFEZDCAHFVKUWPASUDDNMWYOJIQHEOHVXGZJLBLQJQUGYSMKUJVTGTXLZEPCWCXZIWUMRFKQBOFCFPCOVHGBFBPHUYPMDBNUYTNQQMBRQZIS");
    msg.memento.assign("YMKNCSSBTJWTLAUVAEMPRWOCOHYHNJEZNJPACVLGIPBSIQAZJMUVJVWLUVUAVSBZQPWGENLPXYKXMUQENIDOFQDDQOLZRSBEHCRKPCALSQTGAIQVVUBFXTTIKHAFHMXYLXEBSVIQCMPWOOUEZOGIRORXUHGUNNBDFKXJYTIGRWLKSXLCWKFZDKBT");
    msg.timeout = 57489U;
    msg.lat = 0.8074448693808673;
    msg.lon = 0.7879506846395986;
    msg.z = 0.876909885160694;
    msg.z_units = 135U;
    msg.amplitude = 0.5507464035732741;
    msg.pitch = 0.5999225799644741;
    msg.speed = 0.22604522227405177;
    msg.speed_units = 199U;
    msg.custom.assign("JZQPOANXFWJYOVMNUEKPMQDSHETSGGWUMFMCVHSFSIBTCXLCDTNGFLQPZNHLWXQJRJNVNCKMOVTOOEPBLKNWUEIUFSKTCYCEJKXUVVGIMSXWLLNCHREXIOHDVDZQXPHADKZQWYZECWFBYIZAPOWJHVISLXSRSLVXBYQTGBOY");

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
    msg.setTimeStamp(0.5747072210214929);
    msg.setSource(16282U);
    msg.setSourceEntity(98U);
    msg.setDestination(57665U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 309129302U;
    msg.id.assign("ZRMXOZHATLVJVYMWFHFUBIJWAXIFVIBVJTQUKTDSXTGWXSFCOSOHAKNCFLHVEGWHENQCTWWSQJFLGBVRBTICMOKHPLNQPZYJKMXSIDSNFAMXSTRAKGPVXDNXIOJEBREQYRUMPNKRUVTZKLGUPWIHEVEGQEQFIMVCUJJAORBGLUCXW");
    msg.memento.assign("FIZLCXLMWUXVBITOQZPGWIKRKCAPGDSKGVFFGJTXXPPNYFBCMFYCIEAASWCNQBAHYAWLCFDBMINFLAVEHFYUDDEODCPNSQVONDOOPQSPEBUVBSEOXIDUHGXXYROETOAZRUPQJHBCUMWJKWZRJIKIMKHUGDXCRKQLQSXHZTM");
    msg.timeout = 41971U;
    msg.lat = 0.05011974518182516;
    msg.lon = 0.35821712315928833;
    msg.z = 0.21180969181714282;
    msg.z_units = 233U;
    msg.amplitude = 0.9082198107420304;
    msg.pitch = 0.9876747209244102;
    msg.speed = 0.524082600258735;
    msg.speed_units = 171U;
    msg.custom.assign("YTGSJWBRPTLSGOVFOCOHPXZOTULVENRTNEAHSPZIIWAYJUKYJRKXAFMZWCNWAEQQVCDTKSFHQUOGIDFUREWYDYCUCJZTCCSUBQQHDJLXWFGDDOVXEULSQBGKYQMQAFHJHADFLOOQFNDUKLJRGSPMGXUSPOJMMRICEMBFHVDZPZGKLHTAZZJINJMCKBNYFHXNWAAPMUPCSLPYG");

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
    msg.setTimeStamp(0.6238573054385549);
    msg.setSource(2541U);
    msg.setSourceEntity(51U);
    msg.setDestination(43982U);
    msg.setDestinationEntity(236U);
    msg.plan_ref = 3389779909U;
    msg.id.assign("BWTVSIUWCKLNPDBYSQEIKXHTJONOY");
    msg.memento.assign("EZLLTIIOCCMBFLBDJXTLGPKAZOPDCLDMWRMTUDEGWMBXGJXYHUPKDZOBEFJKZFJLHSSIOCUTGVATOWAALVPYQFXVBPIPRNAQCUTRIDUAUBHIHMWLKBPYJNGVWPXEXYMXISWRHUYNVCQSXUIJHEJREONDSUVZRWJQKZOBWARQNFODJBQTTKYFIWQBOPMKEHDDVTYSFZHVKPNKARNKLZAYFYHCUGMM");
    msg.timeout = 36355U;
    msg.lat = 0.9006176882023331;
    msg.lon = 0.8773456467993319;
    msg.z = 0.5677274625664098;
    msg.z_units = 72U;
    msg.amplitude = 0.6839322415160128;
    msg.pitch = 0.24914037408360723;
    msg.speed = 0.5440230409746759;
    msg.speed_units = 89U;
    msg.custom.assign("TTSFIFOIWARZMMKDLTLIFXQBWWMHESWKRNHPQIIWGPUASZVYCAQPHJNYJVIXCQIVSURDAROZSKMJODVGBJCJQBVQCFDPNBFAHYYHGEYZDIQVRZMLXJNEUKLPXCUQDRIKKOXGSOTEBURTNJETNMTYLLNZFXHUTBCDCGENGAKKHXMRNGLZWOUGQ");

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
    msg.setTimeStamp(0.9381163022919035);
    msg.setSource(40586U);
    msg.setSourceEntity(235U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.3949136223411146);
    msg.setSource(45650U);
    msg.setSourceEntity(185U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.4861605817272804);
    msg.setSource(6924U);
    msg.setSourceEntity(65U);
    msg.setDestination(7852U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.0538207548555647);
    msg.setSource(14282U);
    msg.setSourceEntity(158U);
    msg.setDestination(24543U);
    msg.setDestinationEntity(194U);
    msg.plan_ref = 4130437035U;
    msg.id.assign("FEANBQCYAKRTXHPBCXGDIITZNSHDYDEWZBJXMTEGTCSKUEHVYXRAOFKLMBMJVGVPDX");
    msg.memento.assign("BQNWCZPHMJITISZZPGKAYSNEMHOGKVOURBIGZURTFYWPITOSCJFQWGAUHDWHLEIKGEYVCHQRCVYERXIRGPLTTTEKALVJBENRUYNOAZVHPVAKXLQRUMHEABFUKHNGOZBBXDU");
    msg.lat = 0.8509491446476704;
    msg.lon = 0.026999080488523064;
    msg.z = 0.9856864384493874;
    msg.z_units = 109U;
    msg.radius = 0.9119528766305339;
    msg.duration = 18796U;
    msg.speed = 0.0200684244063164;
    msg.speed_units = 146U;
    msg.custom.assign("EDRTXHHVKQLFMUCILPVIIYLKDXNIANMPXPHTUAKZCMI");

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
    msg.setTimeStamp(0.9736897632977528);
    msg.setSource(10001U);
    msg.setSourceEntity(94U);
    msg.setDestination(33372U);
    msg.setDestinationEntity(124U);
    msg.plan_ref = 1435424298U;
    msg.id.assign("TKQYGFPDNNKFLRGOLCGDZQDDWUNTRXKYENIDSPRHCAZLKVRGSAJE");
    msg.memento.assign("PCIBWLEFNKAKAHQNXVVVCBETAHQGRXCVVFYNGPXOTRPEADTDKTQEROMWPOXNYLMR");
    msg.lat = 0.791642673747076;
    msg.lon = 0.9148839963518947;
    msg.z = 0.2676419411901012;
    msg.z_units = 196U;
    msg.radius = 0.2225752309914849;
    msg.duration = 46947U;
    msg.speed = 0.06483779243241417;
    msg.speed_units = 199U;
    msg.custom.assign("URUDMXUFLYSZRFPUQOWRILPXVFBSFPBHQQVXTKHYMDYAFQYWQZNOEKHXTEAITMXVLWORSRTIBJZADOLKPNDGKGWKAKAPNMQYRINVMQEJTSSFGBMIRJDYBMACZZHEUVGESBZWSVAHYOOPC");

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
    msg.setTimeStamp(0.24514035205955176);
    msg.setSource(36450U);
    msg.setSourceEntity(49U);
    msg.setDestination(56208U);
    msg.setDestinationEntity(214U);
    msg.plan_ref = 2652418805U;
    msg.id.assign("EVUTYFTGZTYFRDBOCIHDZFYJQAAKXIRUMIUSXOBIEJPTUBYVQHQLNXIOMEVKTPBUKACEWOSGGCYVOXNIFOVZAJXBQDYHUOUQDZNKNLBXFFADNRNJRLBKHJNAPEHDMJJCVLFMRPBQFVTAYMSLGMBEURMUHEKGKWMHQREGGPDTRCORPPAXTAGSYBMWLWETNZDYNXSTLGLFZWVDWSVZWPSJRKIIKZCJXVP");
    msg.memento.assign("PDHLYYXQBWJQOWZBLTSGAHOFPQHNSAKJNXNIUYVDWLULXIXVLZHKYNTCAZKZPHPMCJIHMSDWZEATNDFGVOVLAUXRCRJBBYE");
    msg.lat = 0.7435391807320196;
    msg.lon = 0.8156541035277336;
    msg.z = 0.9793193694052469;
    msg.z_units = 158U;
    msg.radius = 0.20179301798556404;
    msg.duration = 5938U;
    msg.speed = 0.6147589720702054;
    msg.speed_units = 149U;
    msg.custom.assign("UGVDXCGAVJUCDBYNCHYJVCKFYXMZUNEKSCYFKIGOPITUPRKQFNJVEXGHOEPYSMBAOBWDNZWXIWPNQUCIRGRDSZVRSXCMQRQBRPSFIEJHAARNZCKBKSQKBJTGHGZCTLUYVVKROWPTWOG");

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
    msg.setTimeStamp(0.8539823456095725);
    msg.setSource(36523U);
    msg.setSourceEntity(162U);
    msg.setDestination(64606U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 2320733996U;
    msg.id.assign("NBWUCYCOVQSHKTJIFPMSBHXTHLZPVRDAFYUDNBQJNXZZXBRCFONOOOJQHKYJOITGRMGTQFYCXYIBWDFVEXRPMGTLKSVRRJXGLVBWDZCZCCSJMRQGEUZJHWQCFKYFEK");
    msg.memento.assign("YRUGCPNTWVGVEELQVYNEXWBEDALYNUHIGICYJYTDAJMUQVDHZMEPFLXBTWOOYECCEIRKSRDCEMHBBZDSDAUVRHCKZZMTVXVZNPAZILUIOJSWQOQOKSMQESVYJQNCDLKXURMCDLFASQOEYBWRGKFZFZJDYTJGPRABFTFWSTNTPXSPAUGGOHJZKAPHIMPJIXDB");
    msg.timeout = 34121U;
    msg.flags = 24U;
    msg.lat = 0.497513371350209;
    msg.lon = 0.35194958976941637;
    msg.start_z = 0.0826232752501792;
    msg.start_z_units = 16U;
    msg.end_z = 0.9719531666239127;
    msg.end_z_units = 209U;
    msg.radius = 0.27687414383774667;
    msg.speed = 0.013489583234136848;
    msg.speed_units = 159U;
    msg.custom.assign("PCGGHMWDOBXYSBAFVJCQALPWLORPCBRVOGKPNWPTKTGDDAIGHOCBAVNLHVJFEOURHTNUXPXBRXSMJLUZMFIYTOEKZXDPKBGFWOTCFVDYSWBSQSNTLHEQCIVNWIJGQHZHJBQUQVBTRDIEFZSLQRCASNUFLARAZZXXEBCIXAJFKFCQHEMPPJIEX");

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
    msg.setTimeStamp(0.16613181038820313);
    msg.setSource(55309U);
    msg.setSourceEntity(130U);
    msg.setDestination(8062U);
    msg.setDestinationEntity(113U);
    msg.plan_ref = 554926461U;
    msg.id.assign("GHXMGPSNYWZXFXXNNWJBRVUQYYSBEXCJJOFVZIOEUSCSZZLIHIADMVBIATQCVYVLJZAMRVZDRECRIADJKGBSANZFAQWZTWNTLFDRJKTUBMCBHXQYPQEONNLFRXGPCMKYLEPHOWXWGKYVECEUBUFIAJMSXFTBGFG");
    msg.memento.assign("LMKCEQWTDKPEHTTGZLXHKWAWIJZ");
    msg.timeout = 7459U;
    msg.flags = 146U;
    msg.lat = 0.9164385251939701;
    msg.lon = 0.24862142577790725;
    msg.start_z = 0.31864689416398717;
    msg.start_z_units = 251U;
    msg.end_z = 0.39706771523466977;
    msg.end_z_units = 132U;
    msg.radius = 0.19507616650341164;
    msg.speed = 0.9035168214618228;
    msg.speed_units = 81U;
    msg.custom.assign("OYRLMBYTQYAHQODCRPKQQACGIOANYTDUBBNRJOYNVGTDYISLEJXSZUHDESAILUUJGHYEZWJAEVFDVCWSIXHSHLIZBCFNAMZARKVDJXGTBXGTGQNPFSJLOPUPFQKCVUDCBCEFPCRAJGTTRRYLNUZMEJWVTZPJNBFBQYHKOIVMJRFWWNVSPHGWLSGERYSFKEXZLFXKWZMUMGAXTVWWNLIHFUAKLKIPEOKCXZUESIH");

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
    msg.setTimeStamp(0.613732051373755);
    msg.setSource(41208U);
    msg.setSourceEntity(74U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(228U);
    msg.plan_ref = 2860845669U;
    msg.id.assign("FFVBNOMFDOUYPKNSDRFMICDOSFYSBUHJXIGOMLGAKRAHYDYNBUJJKWNYCSYEUGKUBIGPLVRPUCKBZFIRGZCOCXRHRIEECQHEJJPMADWZZDJWPLHZNTSTJTFXDWAWPPQAMHVBJTSRADWOUXEQQOFVCTLPADAENMINCMBSVATGYQSYHKKVZGGCW");
    msg.memento.assign("VTUDCTYXRFQYOCPPEAVPJVBWTSOTKRFUZOFEDZNJECSLDHMUZWSODUSQVBNILFHWG");
    msg.timeout = 34283U;
    msg.flags = 240U;
    msg.lat = 0.6257035285864384;
    msg.lon = 0.48346664965049924;
    msg.start_z = 0.11830653481112274;
    msg.start_z_units = 213U;
    msg.end_z = 0.6090025555459483;
    msg.end_z_units = 231U;
    msg.radius = 0.38115615374719114;
    msg.speed = 0.8318201881447681;
    msg.speed_units = 242U;
    msg.custom.assign("QLZRDMMWITCJLYUOLGIVPZTDIATESEBH");

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
    msg.setTimeStamp(0.04474121454390212);
    msg.setSource(44409U);
    msg.setSourceEntity(166U);
    msg.setDestination(51054U);
    msg.setDestinationEntity(51U);
    msg.plan_ref = 2231826980U;
    msg.id.assign("ADEMYJIBZCVIVCJJLAZUYYLPIFWIGDYTUPZXHKWCCTZODMPHJUYAHOTRKR");
    msg.memento.assign("BMSCWUTDMUEZVRXQYPZVJVOEYCPBLOCTEBMVBPVJAKWSIKGZONIGOFRQMKUP");
    msg.timeout = 21017U;
    msg.lat = 0.4695583620982592;
    msg.lon = 0.6228881201926451;
    msg.z = 0.0903513141922;
    msg.z_units = 21U;
    msg.speed = 0.7544782293245991;
    msg.speed_units = 212U;
    msg.custom.assign("LYDWIOTUBKSUWPOCGHCNDNJPNDFDFWIQPVXOZXWKJJBLYZMLJHGBPMRIAFUJLFAOVULMRQGRRAVYOOABALVKRI");

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
    msg.setTimeStamp(0.9075907641917976);
    msg.setSource(61980U);
    msg.setSourceEntity(231U);
    msg.setDestination(64415U);
    msg.setDestinationEntity(165U);
    msg.plan_ref = 2988698905U;
    msg.id.assign("SGLBOCQPRDVGDZPVGDKGBHAAUQHAFONPENUZHCXWMCRHGARPBDFIGPHONEJUDJVSKVMRZECYDDUJCCXFCVUYQPLTAZJDXJZWWOXRYILEZRGSFCVSMXUXZEILTBNNLAEOMCHYHFIRJUTBONCVKXIZFSJESHKRHRUMISKTYXXFAFLBTWKK");
    msg.memento.assign("GNECAAHDGVKAQHSUOTUTZLBBQVIPBXEUCGYYZAXSJWTSYZDYLNGQQZRZUGANGBDLNNFFTLJZRLVNIMAKCBKKVROJWVAYYWXDNYJCITBTPHDRIUHOIQSIHAJEYMGSX");
    msg.timeout = 57047U;
    msg.lat = 0.9461838187271605;
    msg.lon = 0.15764427567854877;
    msg.z = 0.9624903197537369;
    msg.z_units = 209U;
    msg.speed = 0.9577672762250542;
    msg.speed_units = 42U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9314586493894679;
    tmp_msg_0.y = 0.6368868532633385;
    tmp_msg_0.z = 0.046176137213153834;
    tmp_msg_0.t = 0.5082656191197157;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EFJNZRANSSFAFKUIQEIQKMNTIXFLBGNFVGYIFZYRRVDOYMFEWUBJZMUKDLHOJQORZETBAWDZCRKNPFHCUKZDHVOGAXWVHLBKUOYMAQBHSZIBMRGQKAYXREWAMTJYXZTIGCMXCXPTYNTUTOQQXLWWNHEFNESLIP");

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
    msg.setTimeStamp(0.9241625651809241);
    msg.setSource(51904U);
    msg.setSourceEntity(100U);
    msg.setDestination(39390U);
    msg.setDestinationEntity(196U);
    msg.plan_ref = 1766108707U;
    msg.id.assign("KLWJNXAZCKXOAAVXRWGVRIFGZEZOMXTXQKPHLVCTVJHXXBUDMCEDTIBCUKLYNKDDQJSBXMGHCMFXSRZVCUNLIFZJYSVQUILCNNMKQSGIWBVLUHDHBWTAKAYZGYGIOELUHBPRQHYZHVSRJNEOYGPLTFAELJYVRISERMGZENDTFDSP");
    msg.memento.assign("JMYUMLIEKNNOHDZQOVYYTSQJHEWLJQIVHYMVWMCUHFFPRGWKKYVLQXEGIBUBLCRTLRXUZLZKZPKSYODMTFUXBZOPHQWL");
    msg.timeout = 58394U;
    msg.lat = 0.3362988398439959;
    msg.lon = 0.49543450436114433;
    msg.z = 0.8272473513859901;
    msg.z_units = 197U;
    msg.speed = 0.7177951830848219;
    msg.speed_units = 90U;
    msg.custom.assign("OFLHLEUGIQRLQUKYZRBMEZGHNLAPHMYBTQXEQEPJPSADSJTXFMXNSRCOYSXZEYRTSJZOQL");

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
    msg.setTimeStamp(0.8321623401907293);
    msg.setSource(17457U);
    msg.setSourceEntity(154U);
    msg.setDestination(50796U);
    msg.setDestinationEntity(180U);
    msg.x = 0.31056723660226504;
    msg.y = 0.742707305094573;
    msg.z = 0.9001315877752792;
    msg.t = 0.6894827466960917;

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
    msg.setTimeStamp(0.5265375310810508);
    msg.setSource(63652U);
    msg.setSourceEntity(131U);
    msg.setDestination(63070U);
    msg.setDestinationEntity(197U);
    msg.x = 0.189534331683469;
    msg.y = 0.37201363173776614;
    msg.z = 0.14414812018286127;
    msg.t = 0.4831813674202713;

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
    msg.setTimeStamp(0.9801956074917568);
    msg.setSource(42893U);
    msg.setSourceEntity(173U);
    msg.setDestination(64103U);
    msg.setDestinationEntity(1U);
    msg.x = 0.8351471201841458;
    msg.y = 0.915280528818806;
    msg.z = 0.6595909465049812;
    msg.t = 0.37537673358626533;

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
    msg.setTimeStamp(0.7912325723628294);
    msg.setSource(52396U);
    msg.setSourceEntity(116U);
    msg.setDestination(11419U);
    msg.setDestinationEntity(28U);
    msg.plan_ref = 1459464385U;
    msg.id.assign("OBTNZHPRRLFLZWEDVTCUUUTTXXRVGMVNTFZSWQFASKLMEDKLQBYWXLYTDRTMEWYGEYPGHJLAJFPHNVAEUDZBJJXYONGSXGHIBCXTVCUAAANPQJYEDQRQJNXDYOMDXSDVWKRUNLOFIICVIJOQMWXQKIOIYISWABNHGVLA");
    msg.memento.assign("INMASXRCTOUKNPECOSTPMBPYPOTDWQYZIQSDKDXEDZJCDCQTCZGNZK");
    msg.timeout = 1667U;
    msg.name.assign("HASPNVNUFAQVWNONHAVYURDNT");
    msg.custom.assign("BXXFCPDFBQBWHIJLSZNWDVRPMSGINEKOBMSADYUHCAMGKWVPNOKFCGWZMXJLGZCJRNBXESTIHUZAJPPZZSLHRBDOPCOCFEPZCUSWLUBLTHYCIWEIEATCQJQGMYUBIHUYTXZFDDRFRSSPVJAOIUZKAHGSRMIUZOLAQOEKNVRQTKNYTLIGAXNJMYQWXBETNYTLMEVTRHPMYUKDDCFQRLPVFQOHVXVXJOWGRJDVFESJDVQKAINOYGGFKTWNH");

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
    msg.setTimeStamp(0.8373334443099701);
    msg.setSource(7264U);
    msg.setSourceEntity(238U);
    msg.setDestination(54327U);
    msg.setDestinationEntity(235U);
    msg.plan_ref = 3257055969U;
    msg.id.assign("UEEHHOJXITRTQRLBTANAHDYGWZLNZVKCNIDXMLRSYVJVNQNWPVEMBSDCQTAKXKXBDCMMWUYWYDNIEXPUUALQFHXYP");
    msg.memento.assign("BUEKMMUAGBRKIWRVJMMWGKKXFSKYNXRCWOKQFFWNXGLSCVGBTVEJLVGSRUZLHBHTAQNHORCKDQOBXCMNBTEORJNHOEYISGPFTLIPSLUVWFPFJNRBCZPZJQFGITPHUSHPXQQPDKAWMGZJQMPKQYVX");
    msg.timeout = 2033U;
    msg.name.assign("ONVNETYMBXRASTDYWWEHKPCFWEZZQHVPMTNSHYQKHAUVBEJPEDWGHOPVGFIRUXQKGZARZGVCBQOLMIIOVGFEDVPAUFZZUDCAKGVFYLSSIYJJXOBYOXCQKLNIMLIY");
    msg.custom.assign("LFUPBZBQDVWZEDVBPGVFXAIJNWQLTYSSUSILOJDARFDTHFHHBZFFZUHCKJUPPAOSSOTPCMWWZUGUIQONKKOIEBBRXVNMALYFYOCITDRNVWVSMBDCLRXYEEPHJQSWNTLKKUKPXFH");

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
    msg.setTimeStamp(0.20045122988073094);
    msg.setSource(39362U);
    msg.setSourceEntity(204U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(241U);
    msg.plan_ref = 2823886657U;
    msg.id.assign("YJGISYSEHYJYWTVZBMIRHXBNLUSBKCHSKTQWNBQRCXFADBXRBPGDIPHQZJMINTPWGFZEIRLLPVVFQAHXUJMJVAFUYONDWTTZUQTCQNIROKRGGTYVSK");
    msg.memento.assign("JIYCOPDRRUBRLYAYNXJO");
    msg.timeout = 18865U;
    msg.name.assign("UOJLTTPFEDASKGDTJFOSIFXESBNGQKQKKLRDFVSBLNXPRLVXYCLEW");
    msg.custom.assign("WHQBXVTBJHQBBFNZBNRZKMXNDXPMWTISPFUGBTPMYPIROZMGVJVZAMFSJAMRWSFVAMLLKUHQRQYOPVWCQOSISUQYTYIJKGWILLAUDYJSSVTOBXQBXHCKHHEKEERZMUMCIDSAUBXHNLREMLF");

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
    msg.setTimeStamp(0.6577988616798945);
    msg.setSource(27518U);
    msg.setSourceEntity(78U);
    msg.setDestination(79U);
    msg.setDestinationEntity(51U);
    msg.plan_ref = 700008128U;
    msg.id.assign("IDUZXWWUPHFOZFAWATLMSJMUAHGOCJBOVKLLRHDDLMARLVIDFSMKTKQZOVHZNMQIHPIRNXGEVMUDFPVJHCXSGQGLJRDZMSBILFQYOFINAZYREWUAGZCEWXDFPCTJJQIYPTMUNBCSDXOAGVTWCRKNTMUQGUEZYTFFIQZSCKLSJYN");
    msg.memento.assign("DRODLRDXDISTDYTFLQMCJZCZWXYHTNXYLXMUAIUIRUVASK");
    msg.lat = 0.9746465202172524;
    msg.lon = 0.3895863044954937;
    msg.z = 0.25355702225991716;
    msg.z_units = 33U;
    msg.speed = 0.1351669516269849;
    msg.speed_units = 175U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5297685620905549;
    tmp_msg_0.y = 0.07782503530540796;
    tmp_msg_0.z = 0.25707730325740874;
    tmp_msg_0.t = 0.9105915369964673;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 8632U;
    tmp_msg_1.off_x = 0.3254422384799778;
    tmp_msg_1.off_y = 0.2534918205595029;
    tmp_msg_1.off_z = 0.5034782008849918;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6664567190958636;
    msg.custom.assign("VRFDKOAGSKTVYWRNFQLOQRIRZBPXNNYXTEBKWMWEDFFQVHMUSYRYQDWGSODRICNWPSAHZUJFGXYPLTRZROXCGLMDJNHMPXDKFAVRUABVTXSTLMGQWLEKVICLMZW");

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
    msg.setTimeStamp(0.846065142557763);
    msg.setSource(55504U);
    msg.setSourceEntity(189U);
    msg.setDestination(30021U);
    msg.setDestinationEntity(112U);
    msg.plan_ref = 658462949U;
    msg.id.assign("ZZFRBLOZZLRNFOVIZBLIJNOFZRBNWDQKBQRJJGJGGAQUQQLQYUDDNEEVKFORPAMLEVOZCYHWYVQRDCMJTTLHPASUTTXUUWHFJHBSQZSXKVCVHICDKBOGKAWMEJAXHSDJFYIIOPXEHRMGPXOOXQYCMGUDUGYXKWAMVEEDRUPRNMLWAOZKNBTVMCCNHBQVKIEMSEISPKYTIWJLSGHYAXTFFNFCAKGFXUTNYPCXSPDYDRPSLMZVINU");
    msg.memento.assign("IOMFYPWGZZAIOGQIFVLPMIJPTFZFSZRGRFMSSYLKQZETHHETDUSQUYGNUHYNVLRSKZHSDWAYAASVNSIYBOMBKPXMIQSETNFIGUTCDMPRIDBOEQKBYNGUKHKSNECHYDKIQUPFXNLBCLDXATMLEMEZJORVLJVJXRMRFOKAXJCWKWCEYBODUGVTGRFO");
    msg.lat = 0.6074932678263744;
    msg.lon = 0.29964274147780856;
    msg.z = 0.5584953554334035;
    msg.z_units = 39U;
    msg.speed = 0.5246686344952501;
    msg.speed_units = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64522U;
    tmp_msg_0.off_x = 0.3307591518286698;
    tmp_msg_0.off_y = 0.755218927667466;
    tmp_msg_0.off_z = 0.8949679588616449;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8470279458962946;
    msg.custom.assign("MSOZWRREJTQSYRLUCHIVOTHDTXOWVJQDBXONPQFYNQKLVVLNOUBMQQZIEIFTKUJGWQZDKBFNCEPHMHTRWZHRGFNTVSXVPYIPWCNAXBMFQDITKLNSSXRXXVTDKSMBYFOPRHZEWCDAFAPJBQHMUJKSYLCMJJAUDQSORPUGWVBEWNZHW");

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
    msg.setTimeStamp(0.0037450616427729955);
    msg.setSource(28819U);
    msg.setSourceEntity(242U);
    msg.setDestination(63175U);
    msg.setDestinationEntity(147U);
    msg.plan_ref = 1798788347U;
    msg.id.assign("QNARIITLRCHNFVRRVZKEKYYGDFGWMETSFUIQUTINTFVAZKSBLOWMFLTTCOUMDDPUSSHPXZUJEYKWSUHJLGRKYJGKXDYZODYXVZKHARLNAXODNQESGAATQBFOLXJQCOEJBNELURIQBCSKAGFFMLPJZSXZHYSPNTKCBNQSJGBEPCUOWXPRCHBPCWDDUJDNIFZGMYORILVXRGKWEHXUPIMXBCVHZMPIAWVOMO");
    msg.memento.assign("KGUSMSMQGKRLBV");
    msg.lat = 0.4917338828834671;
    msg.lon = 0.2691062159203158;
    msg.z = 0.4234828272310063;
    msg.z_units = 99U;
    msg.speed = 0.47352461420134606;
    msg.speed_units = 45U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8720U;
    tmp_msg_0.off_x = 0.19251246153360613;
    tmp_msg_0.off_y = 0.4103474417446631;
    tmp_msg_0.off_z = 0.21664677399815302;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.43580807483373474;
    msg.custom.assign("IXRAULKPCRVLONHAXTYZNTDWRTHVGIDEJEWBPXNYVONQPLQCEBDYTSKWJSOEWKHFPXSMAEHUUNJSAMMAIVTEIBZZOPBMWUUDXWCFJCRLQCYHFFQRPGFUEAECWZROMTMHICSGKJBHRZQXKADFDOMXTYWVLVGCFZQNDLPSFUKBTBTUKALIRSGNYPPMHLWPRAJNGLADRZSZVQUZJXBEGJHOUNKVHXYCVDOTWVQFYKMIZ");

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
    msg.setTimeStamp(0.08427213353999585);
    msg.setSource(41606U);
    msg.setSourceEntity(248U);
    msg.setDestination(58901U);
    msg.setDestinationEntity(66U);
    msg.vid = 49743U;
    msg.off_x = 0.5861517599198685;
    msg.off_y = 0.5688309040168144;
    msg.off_z = 0.6908167895768136;

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
    msg.setTimeStamp(0.8188371521036754);
    msg.setSource(17028U);
    msg.setSourceEntity(176U);
    msg.setDestination(3672U);
    msg.setDestinationEntity(54U);
    msg.vid = 1977U;
    msg.off_x = 0.39476180398328475;
    msg.off_y = 0.21436916633837166;
    msg.off_z = 0.7672412586377138;

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
    msg.setTimeStamp(0.9159614202218135);
    msg.setSource(15343U);
    msg.setSourceEntity(124U);
    msg.setDestination(54080U);
    msg.setDestinationEntity(120U);
    msg.vid = 26599U;
    msg.off_x = 0.026628591763517617;
    msg.off_y = 0.4980159160156282;
    msg.off_z = 0.9685182098968111;

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
    msg.setTimeStamp(0.4384588918078489);
    msg.setSource(35641U);
    msg.setSourceEntity(124U);
    msg.setDestination(61235U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.41163339509913077);
    msg.setSource(32166U);
    msg.setSourceEntity(109U);
    msg.setDestination(16030U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.37974853021456234);
    msg.setSource(62565U);
    msg.setSourceEntity(69U);
    msg.setDestination(41493U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.5701713943779124);
    msg.setSource(29880U);
    msg.setSourceEntity(55U);
    msg.setDestination(53455U);
    msg.setDestinationEntity(203U);
    msg.mid = 49925U;

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
    msg.setTimeStamp(0.47098295884063346);
    msg.setSource(9006U);
    msg.setSourceEntity(111U);
    msg.setDestination(38151U);
    msg.setDestinationEntity(27U);
    msg.mid = 42707U;

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
    msg.setTimeStamp(0.10687850536159249);
    msg.setSource(52817U);
    msg.setSourceEntity(72U);
    msg.setDestination(29263U);
    msg.setDestinationEntity(206U);
    msg.mid = 43748U;

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
    msg.setTimeStamp(0.7160690027494614);
    msg.setSource(47376U);
    msg.setSourceEntity(163U);
    msg.setDestination(44026U);
    msg.setDestinationEntity(248U);
    msg.state = 114U;
    msg.eta = 19066U;
    msg.info.assign("XSWAYBJIQNHTDLOAEGGVU");

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
    msg.setTimeStamp(0.014439805363359093);
    msg.setSource(49259U);
    msg.setSourceEntity(36U);
    msg.setDestination(13958U);
    msg.setDestinationEntity(204U);
    msg.state = 78U;
    msg.eta = 42566U;
    msg.info.assign("LMKHZUIXRFXRWMFSWIJQVDGFGWCMSBRDWVPFDHLLMZWRSIOSUGANCTTMPNGEFAYBTZJDYKPRQKVRVOZGHBYMETBFYCEKYOJHUHPSRVSWQGICSPPAFQEXCRZXVT");

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
    msg.setTimeStamp(0.5131677061974838);
    msg.setSource(42803U);
    msg.setSourceEntity(122U);
    msg.setDestination(28683U);
    msg.setDestinationEntity(254U);
    msg.state = 192U;
    msg.eta = 51936U;
    msg.info.assign("VHPEIADCKOSFVRFZETVUDMWVYXOTHPBNHQTNJMYEZDTBYFZDOLZTBAQCOETWQYTWCWUNAIXQWIHIIQJPUPLZJJGNLUDTJSMBMVNUQALPSXSIFQWBSSPSMXEFAHJMSBGWYLGFDLHZMCEIZYHAUEFUUOYHCDBNLKORZRSDKHVGVHWEMCLLKXNKBJCRVDPGFFI");

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
    msg.setTimeStamp(0.6462036794854469);
    msg.setSource(49520U);
    msg.setSourceEntity(25U);
    msg.setDestination(20269U);
    msg.setDestinationEntity(108U);
    msg.plan_ref = 2285868198U;
    msg.id.assign("TDSGTEPROCUUTWFDAGXQOXWB");
    msg.memento.assign("POSBBCAUUXOELWQTXHTRQHNKWZYEGGVHSFPNHWEIDTMVQGATKDKIXFAWMGGABOEYIHTMIOGSCZVOXURBLLZLWPDXOFIJJSPCZFHIGNRUNPQDAFYXCJHOYEJMC");
    msg.system = 20727U;
    msg.duration = 30829U;
    msg.speed = 0.24323047377078788;
    msg.speed_units = 77U;
    msg.x = 0.6026510666441973;
    msg.y = 0.38481912203886315;
    msg.z = 0.1754019250627209;
    msg.z_units = 25U;

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
    msg.setTimeStamp(0.8205754333008928);
    msg.setSource(48419U);
    msg.setSourceEntity(223U);
    msg.setDestination(29614U);
    msg.setDestinationEntity(169U);
    msg.plan_ref = 1499937700U;
    msg.id.assign("EVRBBRPQKQYTDPRVWLOTVVWLNASJJYKCPKEZYUUATRZHZCBLYGFGCDKPMQRBHFWTKSHKWNFIQWEMJIWATIECGLLOQSCUOHKUHVNMNGILPOWAFEZILKHCQHTJCI");
    msg.memento.assign("BHVWUTFJMDWTGXSLEFIJLLEEPENBNBRPWYTOANSIHDJMHMXCAQYRGBEJUTEJOZCTUVLSRDELWCWBQYKABVODAYSMZQNHKUCZSDOZPKHASQOCXDMTRFMHHNYIZGLGKRYFUGDXCRYXNPCNRGIACZNXDSXVGQJONJYAEWRE");
    msg.system = 18725U;
    msg.duration = 19796U;
    msg.speed = 0.7879824934936568;
    msg.speed_units = 175U;
    msg.x = 0.5981410556978307;
    msg.y = 0.47838594150753244;
    msg.z = 0.20426758432807934;
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
    msg.setTimeStamp(0.5209058034383169);
    msg.setSource(14605U);
    msg.setSourceEntity(206U);
    msg.setDestination(63512U);
    msg.setDestinationEntity(33U);
    msg.plan_ref = 1941901671U;
    msg.id.assign("KWLXIWYRVHKUQOQRHLBBKPVUGPVAAVGCJVI");
    msg.memento.assign("UXOFXWNFEVJAOQBDPQDBGKHJGJRPQKHTZICSARFYZEKOADIDJZVBMAIIDQMZCPEWSNLFGOIZLXGQYHIZHSXAJDCQNYVWKMGKTUSBXSPLEPNPODGYPFFJSLPKYDELSEAKIXUSEQETXOQDHTRSUPRKTNUZZTRJVYVKRDOUMFCAMUXVGGCJONTYHRCLNMTCJRVBIUWHVOVQWL");
    msg.system = 52824U;
    msg.duration = 54111U;
    msg.speed = 0.2130322132381013;
    msg.speed_units = 34U;
    msg.x = 0.5280305555376024;
    msg.y = 0.9573558813973501;
    msg.z = 0.04947680873986848;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.6801638280221445);
    msg.setSource(63781U);
    msg.setSourceEntity(88U);
    msg.setDestination(60733U);
    msg.setDestinationEntity(191U);
    msg.plan_ref = 3721073161U;
    msg.id.assign("ULHFQEVAKSGSXXTPECIFBXFHJUQBPJYODTCTRYITJSZSCAYNHSDICAESGKXRLNWRTARHZMSDNUVHDNJZYYHWODRQKXSQAKGYQGLEIKOMHBXBWQNOKLSRFEYRXPOXXOPWMDBNFHUOYQCEIJUGWGEVNLJPBWOZYDLHVQZFIDIJPXNMJGEUITRITKPCHDLZQMKZPFRTLWQCAUIZGEWCCLOJBTKOFPSNVUECUPF");
    msg.memento.assign("GBVIJPNQXDPZEJOCQXSGEKILZAIGZTYAOKBRQTXAUAWDC");
    msg.lat = 0.09433462111799884;
    msg.lon = 0.49903086976981237;
    msg.speed = 0.47008803727107706;
    msg.speed_units = 17U;
    msg.duration = 21711U;
    msg.sys_a = 47509U;
    msg.sys_b = 53769U;
    msg.move_threshold = 0.15546300452570083;

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
    msg.setTimeStamp(0.1316832896958856);
    msg.setSource(21492U);
    msg.setSourceEntity(186U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(177U);
    msg.plan_ref = 1360211799U;
    msg.id.assign("PTIDLCVYFTUM");
    msg.memento.assign("CVIVEWRUNRWDMZGSFXCTIAGOPKIMHBNCTHSQYJELJVGVTKKEXAIMAQ");
    msg.lat = 0.8175526149864819;
    msg.lon = 0.7829325164768615;
    msg.speed = 0.9471855772982176;
    msg.speed_units = 227U;
    msg.duration = 30862U;
    msg.sys_a = 52646U;
    msg.sys_b = 14289U;
    msg.move_threshold = 0.7980086642112668;

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
    msg.setTimeStamp(0.14856388578120494);
    msg.setSource(16849U);
    msg.setSourceEntity(209U);
    msg.setDestination(33763U);
    msg.setDestinationEntity(205U);
    msg.plan_ref = 2163000792U;
    msg.id.assign("ZMLHZMKTJLLOOXOGWNJMQWPDPQBPDUMJTNVEANPTIFBQUTJLNXWQMHODKRPVSJPLDULZADHVWTBQOVKAEUIARNTNPWDKDPBVGVWACNSNNCZZST");
    msg.memento.assign("GNHSIXJHAONZPASMBUIVPWXRWHKUGRRYZDPJNSTVRKYWFMQQRRSUIHCLPKZTPCRJGOBYIDNLVHIXAKQYOVCLSFCEBJXHDWKYWKGOTUEBLJLIMEWAWKUZYXGGJIUFYIHTGHELVEDZKKOCTFLSNBZLBDDUHPJOMFPMATSAJXWGNTRMRVEUBQSPFMQJBMDLHZXOSXUENNZLCAIWYACZFFGVCBAISOMVYKONEXVAYPOMQCZTQEQDQXRDJUVBEFF");
    msg.lat = 0.14174005050280913;
    msg.lon = 0.6291196998952063;
    msg.speed = 0.8014416613681264;
    msg.speed_units = 108U;
    msg.duration = 18385U;
    msg.sys_a = 40972U;
    msg.sys_b = 49773U;
    msg.move_threshold = 0.8955683779484928;

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
    msg.setTimeStamp(0.17863488211247613);
    msg.setSource(31439U);
    msg.setSourceEntity(41U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(32U);
    msg.plan_ref = 3124698510U;
    msg.id.assign("NMCJVHBEKKGHDVHZEAJEZEVMJCASCVJSVQNFFVMXMDZLNSLYFMSCHODWTDIIXOTNAUTOZRGUKPUYTVBHHOVWLKQICXPPYMFYUMPKWFHLWPRXAGXERQINMWPWINZCBJXTWZIAWZLMGNCOQHRCFQQSQLOUJGFFTRKHPYYIETMPKDEJJGULLNXTYFKBAKRULKJDIRBYWDFHPUOQXARBEBYOYJCTUL");
    msg.memento.assign("PQVVGDSZIVUZBJRGYYYPTLZPWGDUDOMIUHCVGHMHYSQUPBBGNQSLXLNLETJDXWAIIJAXETTCZHAWFVWKYRKMGCGJNEECJAVXCFRZTPWRPCKNFUKS");
    msg.lat = 0.282191588929943;
    msg.lon = 0.07625230794933802;
    msg.z = 0.3514785222301977;
    msg.z_units = 3U;
    msg.speed = 0.8921142919772072;
    msg.speed_units = 76U;
    msg.custom.assign("JYJBEQMILXSWUNKBCKKPIZGRCWKFFXSNLQXCRSBSWHUGNVGJQDDIJLVUARDKYVLOWMOMZGEYWRYHGFDSDPVSWHUTVYJNMRWCNAPNGQTQAOPERHMTQTOUDBJIUJCKLVJFVBFPQAKFPKVYKRXBSNZHGQTNAFXXTITBETIHMZWDCNEAIFBOTESGAPASJMFELIVXMZZCXBDGLNQHVHIXJZYIBQLPLLRUGDCYWW");

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
    msg.setTimeStamp(0.9224629164386261);
    msg.setSource(30526U);
    msg.setSourceEntity(100U);
    msg.setDestination(44895U);
    msg.setDestinationEntity(193U);
    msg.plan_ref = 1722215497U;
    msg.id.assign("EMVGNPNKTQJSQCEYOFSMMJYKDXMJXIUXDOYHAPAHV");
    msg.memento.assign("XYYRTFIPBEUVEXRAXONJOGXNNUQUSZMAQQDYWHPINASPBQHVHULQOLVDHWELZDKOMGLZRBBAZJWPCWADNRYNSMGNBLFRATZZDWPUVHQERHCEUGJPOCTUSUYMYFYTGTXMKKSOFQEMOHESKKADFHVBVLSADXMSPOUDZXIDTXFLKBWKWIEQECJBGFLQZZCLIWIKTPHOXUPJCJLXSRYHNIEMMJTCYTFVGDOIRIABVAKKCQJBRWYGZVWJGJVGT");
    msg.lat = 0.4401759929154414;
    msg.lon = 0.9077994344071281;
    msg.z = 0.9589864097320521;
    msg.z_units = 89U;
    msg.speed = 0.3998701880762524;
    msg.speed_units = 53U;
    msg.custom.assign("MBFKHCOEGGQPNSJKVEFGFFPQTNLHX");

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
    msg.setTimeStamp(0.6563442542377582);
    msg.setSource(17720U);
    msg.setSourceEntity(154U);
    msg.setDestination(25557U);
    msg.setDestinationEntity(17U);
    msg.plan_ref = 1648473092U;
    msg.id.assign("THXDSKIDFCYYTSPPBWOAROPKQJTRUQXJOJFDGXODOIVIIWZLBMLZNHLYNZJJCNESGOZKXSDGQBASYQHSVOHVKUFIIMVEJUHEBFEPMZNXGTLVJXFDKCKCHCZCMFWOGTXQAQRYWWGPURIGBXECEPYYWLQVBTNFQSBMUBLEAAYZGNEHYDXTLAWJPHUGER");
    msg.memento.assign("VSBGLSSFWNJOTKSBMYPPVQBGLOJANCRDWQCDEPBGBPKOWTSJXSAIGIOFTTJXXHAFWQFENIPKLHLNOZHUWFEKEKUDIVJYCHAIGZQYXRHYZMZLZYGUKPVZETYUBWBHCRBQIUXWDNQUYFUSVESOFAEQRCTMYR");
    msg.lat = 0.12459721697917359;
    msg.lon = 0.9721098802888365;
    msg.z = 0.21177202033913767;
    msg.z_units = 165U;
    msg.speed = 0.4694730436905472;
    msg.speed_units = 34U;
    msg.custom.assign("RMTUOHJBINOXBYTPMJEMZWTNFEYPIIYAUSCWPWDIHSQYNBDBGWCLONZZQXJRHVKRYCLCTEAAFPPCUVZFDBIUGHKXNZHXECUGHQNJTNYPSVLFSWTCQYAJEBKXRGDYQYBWJGGEKVKBAZBFPFFEKGUERGRPTOJIRVBXQDQAVFYXOZZTCFSZZGSXMRUXWDOO");

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
    msg.setTimeStamp(0.1863702443302222);
    msg.setSource(46563U);
    msg.setSourceEntity(165U);
    msg.setDestination(22942U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.002479856367077593;
    msg.lon = 0.9318718500350778;

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
    msg.setTimeStamp(0.060390417203460056);
    msg.setSource(38930U);
    msg.setSourceEntity(15U);
    msg.setDestination(40405U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.6339033139223955;
    msg.lon = 0.9607173587708534;

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
    msg.setTimeStamp(0.4343338662693318);
    msg.setSource(20221U);
    msg.setSourceEntity(32U);
    msg.setDestination(35412U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.3067395840149856;
    msg.lon = 0.8396359750230358;

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
    msg.setTimeStamp(0.48283618850139964);
    msg.setSource(42490U);
    msg.setSourceEntity(117U);
    msg.setDestination(20799U);
    msg.setDestinationEntity(182U);
    msg.plan_ref = 1649298145U;
    msg.id.assign("WMSWJSFQPNHQGSORHLRWGSJMVRIXRHYZNXYAHUXYRQJSAJGTTWHIHNHILGBMMITAVIUWMYDKTSWXABQWT");
    msg.memento.assign("YMWVXPEYKUQQMXZEAVNPGGWQSFOPYXOXIKRRLODMGSGWPBJYCPEHYLKXBANPXFHTZFYRVI");
    msg.timeout = 63216U;
    msg.lat = 0.2767206338762934;
    msg.lon = 0.142318231570998;
    msg.z = 0.6937542780010125;
    msg.z_units = 37U;
    msg.pitch = 0.2728098791649718;
    msg.amplitude = 0.057385380443069955;
    msg.duration = 4268U;
    msg.speed = 0.5968056811027083;
    msg.speed_units = 199U;
    msg.radius = 0.5650422271915679;
    msg.direction = 238U;
    msg.custom.assign("FDQZETCVNINSGRVCOSLUOSSHEICRJAWLWCDFKVRVWSQWWQPYZITEQZPYGBDYOZVYSPUIBSJULWJTHSZRGIVBNINFBDHFGADJSPYAAPUEBRQDROHKJIHZQNGRTYVMGNHXKUGNAUTWBFPFXYPVUGKHHTWKWNWKKQOPCMQHDLEGFBAXPNMLMASRCUHBKXJQYXBCOMIAZEUUVRL");

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
    msg.setTimeStamp(0.5655129518715226);
    msg.setSource(58682U);
    msg.setSourceEntity(29U);
    msg.setDestination(34810U);
    msg.setDestinationEntity(121U);
    msg.plan_ref = 245540925U;
    msg.id.assign("LSLYZJUBRWNDQNEQIMHVBXVWDTWDIZEPERJQZTFCZMSGRAJSNRNLIBPGATAHBKKVSNUBMUBVDRPAALTNOXGZLXROFPHKGBTYYSCZMCIDTPPUFRLYIQB");
    msg.memento.assign("OLXTQHNHTBPIVDRWTBLXJBRBICESOZKTARJRBYFEPUYQQDWXVBMHXYSMHADUZCKCDZPGMMIUPLQJHKHAPQYDERNMUKDUXXWQXMRIYKSAZGIPGOEATLFLFICWVHICXZDABWQGBIACKEVNMDOTATTOOOZTFSYXYNURLZULUGEJE");
    msg.timeout = 62271U;
    msg.lat = 0.28237588210605147;
    msg.lon = 0.6763590343492955;
    msg.z = 0.6195770382606984;
    msg.z_units = 34U;
    msg.pitch = 0.27180496558923106;
    msg.amplitude = 0.38697173608774216;
    msg.duration = 10684U;
    msg.speed = 0.04592653126116675;
    msg.speed_units = 200U;
    msg.radius = 0.5482958364658138;
    msg.direction = 20U;
    msg.custom.assign("CJIDXSELOWOKGRGQEMHCMHOBRQKBKKYWNWPFYSXRVEPPJPCRXGWVAGPSCNRCBODFLECXADMAOYRJMIFMKYDZHSOQMGTZSREFRGWJDACLHESNNWOYVZYXUIZFLOEZIJIKGPABHCQKTHVWZIEGBPLTIUDIBTPRQRJFXCTFUIYAUYCZVDAQBXMKEJFBTVDUHSLIYDBWNJUKHOVBVXAMZTNVWJJUPQQGOXNADTWSUPKTHSNMLNQUQZTLALVHYEZ");

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
    msg.setTimeStamp(0.7870366056912482);
    msg.setSource(6244U);
    msg.setSourceEntity(208U);
    msg.setDestination(41833U);
    msg.setDestinationEntity(97U);
    msg.plan_ref = 3357583142U;
    msg.id.assign("JDWQFDMKIMXRODUYGZWXJAQPKXQERMBVGIKEOEHRDHTLVOCZCUXNJBRFIIEDPPRYLQYVFRYYBMFEDHLONFQNLDAEYSTGJAUJSMTCZAOFOTGAPXIRWIUXZCASNBPCXEKWUCLGXLZUHKXOHCMBEUBBVYMUAHPAZHHYGQVSUGVZZLFBFKHCHGWVWAGNLSLVSNPMGOCFNSQLZQIFPIDKOYBQVNEEVCW");
    msg.memento.assign("VJDNKWXAXJITIVIKZOSTFSXAZTP");
    msg.timeout = 13440U;
    msg.lat = 0.33967157725098496;
    msg.lon = 0.8187848402763825;
    msg.z = 0.6734657985101413;
    msg.z_units = 26U;
    msg.pitch = 0.19844869805250664;
    msg.amplitude = 0.5076396868947479;
    msg.duration = 31184U;
    msg.speed = 0.5068825165211012;
    msg.speed_units = 118U;
    msg.radius = 0.7276968647175203;
    msg.direction = 123U;
    msg.custom.assign("BTWAMQCMJADQQMUGTLSXBDVJOXAUNSLAKBHQWVQXXWKPPIWGGSYTVUZQFJOEYCFJWOLAIXZCMQFHRVSYIFKAPHXDQEMPRIHDTVBTQGTYDAJNYQSOUUKWEKPRCGXKMEWEXFCBBDETWFZONELJNVLZCZTVDARSZBBZDNEMN");

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
    msg.setTimeStamp(0.32189131548404426);
    msg.setSource(46862U);
    msg.setSourceEntity(206U);
    msg.setDestination(43828U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("NAEUZWMYCYIGPTUXIDCVUGABEOFTKJHYRVCCRNSHZYSJIXKFESBQMQPLWQTKVUSDARTHOBPMFQLMGPPGTGAFHO");
    msg.reference_frame = 238U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3433U;
    tmp_msg_0.off_x = 0.12352624463329431;
    tmp_msg_0.off_y = 0.41917952762487876;
    tmp_msg_0.off_z = 0.06759711534652779;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EIKBOGFPTMMRZGYWFWQSBPHWXX");

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
    msg.setTimeStamp(0.4225274147960306);
    msg.setSource(38344U);
    msg.setSourceEntity(141U);
    msg.setDestination(13280U);
    msg.setDestinationEntity(220U);
    msg.formation_name.assign("JEYQVRBTEGMOVOVHDPRZSIKTYYCVLAJZNCWCIUPUOOTXMRONETBAILLPWIHYQSYJIUNKFMBZMEYHQBAODULOTUDWFFDVUDSYWJZNRRIXHGGWSWJQLWQDNWI");
    msg.reference_frame = 225U;
    msg.custom.assign("ICKFPECIVJWRASNDHBMCBWCICGQBAOWOTOJLEUOLGWRVJWLLFSWYDJPICHNUKQYCTYEDRBXXQKLWAUIVYDMIBFKGESHYZCOHZROSTXDBGS");

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
    msg.setTimeStamp(0.7266161571710822);
    msg.setSource(26543U);
    msg.setSourceEntity(238U);
    msg.setDestination(41228U);
    msg.setDestinationEntity(135U);
    msg.formation_name.assign("XMNDABTSATRUOMEBJLKIOQCVRXIUZPNPOMFQXQMOIRDATETFHSOMOKFRNVJMQUCZNUOXJASGZTKIYJHDHYDGKDWXFCRRRCJGGSYGQSDIHBLHNPWIQWEDTSXKVWDCRWCVMZUJJKLIALKZFEJEQAPYGYKPBVMPVYWMLOQFLCWGBSYLA");
    msg.reference_frame = 19U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20923U;
    tmp_msg_0.off_x = 0.2852114888118553;
    tmp_msg_0.off_y = 0.032429248002472044;
    tmp_msg_0.off_z = 0.2124934012629932;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EHRFVSBFHQRGJKXOWYKXEFLWATJBAXZNQYFFMDLSESBEHMQRFSFYMWZUGPRUTWNIYKKMDNLEEZICJXDMOBTENTRJYGHPPVQIQASVDOGSTUFPVLGWVEVLUVKQJBAPAGUHMCBLWPCMXOYLUIFXZJXXTUYIQHPCQSBNIBMYWBJVTIAINQOCJKACQAZLGORNPDZHBRMHXOPUNAORWKITYIC");

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
    msg.setTimeStamp(0.2065564995348499);
    msg.setSource(42661U);
    msg.setSourceEntity(228U);
    msg.setDestination(19938U);
    msg.setDestinationEntity(208U);
    msg.plan_ref = 646282820U;
    msg.id.assign("WLBJKEJDFHOACVWFOAIRXXMGOOLTVJUMECWAHUHLCWSMXFQZDKBVHIRGABRUSAOXMINYPDYKTFEQYWXYRCUVDFZNGCOAQDMPPIFIIXYFBJDWCTVSFQLNTMOZUSGTGBNJZJZOENEVMHEUHVEHUAERSLDOWVSJBNUPPBKFQPXNEKYDPE");
    msg.memento.assign("RSATQPVVXNJMZHNQRLLDSNKKUGTEWWYIUMEJTWSPXJDNXNVYSKWTACQUDRHHXMPGIHEYJTQCBGJTKREOQGSTQPLSPFWBAELCPDAICSMPROXNNFPKJIFJHYBBMOQGZUCCLUKVKQTAKFWXCXTYKOFQUSDMD");
    msg.group_name.assign("UYRZIDGGBNDMQIAEPBLZXCWQBOSX");
    msg.formation_name.assign("KMVXFXHVPYUZMPDSCLKVUYURSXLZYJFRQJGJENQYVWTBHMQELUTUGKBWEBAZZAGDWVQVRSZSPCZNLHGJJGDHKPCAWNPPRTMGCCOBCSSHAXAFBCOTETNNJXOTKZQEYBWJIFXXTUXDSYKVISZIJYIDAWQGAONDBDRVBGAOLRRUNLIYETMHIVRGMXEMWKBPQRBYISFUMMPKSFFQFAOJKYLT");
    msg.plan_id.assign("BKVAEJUUMWAFTCSSXBWFALMOSSEHIFYBAHCQGESOFPGGHFTUDEQCRBYCECCIIXEURHFYVQLDZZPOLFYNOEWWVPIYOSFYQTMJDUEGAWRYZSWBCIAJHJNPLNPNZXTURNVUJVQHSNLZDBAGPGDTROUOOKHUIINCSHYJIOQDTKLJYZPRJZPCZLEMXRXIVXKVPLMUBDKROBWGZNB");
    msg.description.assign("DXMAJKBBLVERIDGNVORZQHZKSFZPOKQQVJYNSHEGISNCUMHBJEDUCINSZSQRFUYIUULMPO");
    msg.leader_speed = 0.29951112068674224;
    msg.leader_bank_lim = 0.4539295786532098;
    msg.pos_sim_err_lim = 0.3386839278271486;
    msg.pos_sim_err_wrn = 0.4072045248480324;
    msg.pos_sim_err_timeout = 47942U;
    msg.converg_max = 0.7431823150881368;
    msg.converg_timeout = 63313U;
    msg.comms_timeout = 64286U;
    msg.turb_lim = 0.882370633532564;
    msg.custom.assign("UVIKQNDYIWBLIEXCOGWMGSICPMKZEGMBOGTWHZHPAZNDASYVSVSBEJKORQODXMQDGFHNNZLFECMRACIPCHGQWNBQYMXJDVGPHOFEWXJUKFKRKVKMSWFDRXHYAVACSKJZVPIUBDBPQIYKVLHQRXNFSUTCALYEYETYEHGTXIZFUUIGOOBQRTNLUARRYSZBJCZMSNMJEPV");

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
    msg.setTimeStamp(0.4972078847684389);
    msg.setSource(21999U);
    msg.setSourceEntity(3U);
    msg.setDestination(65082U);
    msg.setDestinationEntity(113U);
    msg.plan_ref = 1987616365U;
    msg.id.assign("CJUXILPKLBXLJWSNIPJCSHSRZDWQQNMLXOYNVAWDJFCTRHJAFQEGYKIXYZVNAPVPVXDXMLONQYJOZJAWDSUZFBRUOHIRHUHHSPGYNHEMXOICJFKTRMDBKUUESGMEQMVUDBFKUBKHWKZYBFMFTWCRMIVYUSQGACDEERPTGVLFBEEELDGNWWGVNKATMPZR");
    msg.memento.assign("DZPGEPBHHBXHSSMCJRKLGQYFCXOGRLIPVPFAPGXFZNGEOLQUUWTPZRLDJKVWAICYOUYBKHVABLFJHQYWZEXBIVUSFDITENJQITUTKRCFEYVGYEMSATVQEKCAGBWREMFCWTSHOQXHRJDISYZZYKQUPUNROTRAAZWZSMXD");
    msg.group_name.assign("ZLHDPXRBHFLMWVU");
    msg.formation_name.assign("HQOMAPLWYGCYKZPBOTDZJXAWFCGHBKOFJBXRQKERRNTKSRSHUXIUL");
    msg.plan_id.assign("NJUKCRXQAKEXJWPBGMBWGLKQILVUOEFKAWQPDENSTUGRLOCSYAWPXVITLQFYQKMCFCONAMRVOIXZDWAYJJSVOMLSZXVXISOUOXHOZTRSXNGZKIOEKMRVP");
    msg.description.assign("MHZJZTROQLWEXGLEYSSWZVCSPZFKYDWMBOITVERJUNLNXBLBRDUUJNEEABHFERZCWCCURXVQJHGCWHFSWUOZIHUBPAKCX");
    msg.leader_speed = 0.8097848840953026;
    msg.leader_bank_lim = 0.2558122964411139;
    msg.pos_sim_err_lim = 0.9516067645791284;
    msg.pos_sim_err_wrn = 0.2304081141947858;
    msg.pos_sim_err_timeout = 44376U;
    msg.converg_max = 0.8750744740101614;
    msg.converg_timeout = 4852U;
    msg.comms_timeout = 29880U;
    msg.turb_lim = 0.5999920515860506;
    msg.custom.assign("PVCBTQZQTBHFVFOKAVYCJCAIFWDBCWQOMJTJJYUBPGPHYYJEOTOMZIUFWMTGQMMSMRJRH");

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
    msg.setTimeStamp(0.4179253943527671);
    msg.setSource(44909U);
    msg.setSourceEntity(5U);
    msg.setDestination(58364U);
    msg.setDestinationEntity(48U);
    msg.plan_ref = 4034762280U;
    msg.id.assign("LXQMRWPCYIILYXZPVJZDTJOPRDOGDGBBFUYODFZFHWIVVWNHAWKWYOGGJIDWMQKQPZATCWEVYRJMKSHBAAEIXQCCOVXKMXPQEMNBYVKXIKQTKCNNGLZERLRDESSQLRFGMBSJSIHHIJEXRATJDDQYTXQENEOCSHPHUBQBNAOAVMOYVFRPJKCWULUTRPULPAGKSIEJGOHBHDGNLWZHZBUWATUXLRFFAPZBE");
    msg.memento.assign("NDCEPUOOXMMPUSJYYHOYFJQXXDFUETYBA");
    msg.group_name.assign("KFFWWJNXORXTFZOAXFLKIYTDVMQNHWCHARFUOCKHPIVDBHCQECUWBDBDFIDOSLNMTBAIE");
    msg.formation_name.assign("TYZPPLYYGGHBMSMKAAXOMJPKEPXRSDLXKZCDCEHTNASVQTTVPGYHQPUHALJWPBWXZCSWAKRZTOIEKYRTMOULQQGUAREXHOCGINTBAUJXJIOPWHXRDUBUTQFDDQMLCDBLBWIIXGFFISQNCHNBNWYFQYJVXPFBKDNSBGUGLWSDKJIUQRZMSWAHAZETJCWYZYMBNMRLISLEGKDYFOHCZQRDCCRGMEVII");
    msg.plan_id.assign("PBNVKULQMGLAYWQYLSWVUCHNTVPKQRHGYXMVHZQJQCGDKAJPGLRAADBAOFFQLNADWCBKVZSIEDBLUIRTOKXXMXGNBMIFFHCNLUCUNJHSXEVXXPPYYSVDDDZWMFWCIPURHBYGTBLBFEVPKZMRPGSCOCFFEXJSISQNQIVTYKOZCJMUZOEQOAT");
    msg.description.assign("YXFYBGKSAFMSAQOOFGPAXXIZOQVSPDYWWYTBTTXCAQPLGDMZKSCQLEZRDXNTAWTKBCWFEANCFIJDJORSWEVVLJPQVCUOKLHMQKITUMOJZIGBQSBPNIKOUCUWEOGAVMYHPOZWSSZURLAQCOHEGDTMXUURGFYQRLRXHIEESBMVPDKTCNSJUAPCBWJHXIKKVDHIZRMGLXQCJRKPTVBJRWZYFYNGYWVTEMLMLLHNJNNHRVIEEDDYGZZFIDNBUFPFH");
    msg.leader_speed = 0.5252031495719032;
    msg.leader_bank_lim = 0.39637839462693525;
    msg.pos_sim_err_lim = 0.188232964098081;
    msg.pos_sim_err_wrn = 0.849570769769295;
    msg.pos_sim_err_timeout = 48321U;
    msg.converg_max = 0.20353235321424978;
    msg.converg_timeout = 45031U;
    msg.comms_timeout = 33190U;
    msg.turb_lim = 0.7442445361424666;
    msg.custom.assign("OGEEEVINWNGQQLDQJXXUHFPGFJSNSYFUIPSYFVFOHGNJAHJZBODDICEMDBULVSZRREITLQRYQXZPUHXTCACRILGOCRAPWKNWHXHUVPPHYJNGNOTRMEBWFBGOUTIEXHQDHVKI");

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
    msg.setTimeStamp(0.8001096177824322);
    msg.setSource(46840U);
    msg.setSourceEntity(54U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(195U);
    msg.plan_ref = 1947111485U;
    msg.id.assign("NFSVYEMMBMCQOJGDPAKEALJIYBQNPTZKEJKUFZWMEMXZECXZOKIKSPJSYSXRDDJLTAKF");
    msg.memento.assign("DGTGKEZLBTGYFKZPJMOGVYSWANHVUVSDIDCPPNJZXZNNHVROZVHZHYBLLOAHURXCIEXTTVBEZQTSLAWOJCCDNSBLQXMYNZWTVIBOUFCXWBRWEAYWQHQPMBMYCNRPQKUKIXWGYJJGUSFGWXUW");
    msg.control_src = 1667U;
    msg.control_ent = 66U;
    msg.timeout = 0.5256011965652981;
    msg.loiter_radius = 0.10175566680356463;
    msg.altitude_interval = 0.6618589886691735;

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
    msg.setTimeStamp(0.021323084384408664);
    msg.setSource(56936U);
    msg.setSourceEntity(198U);
    msg.setDestination(27324U);
    msg.setDestinationEntity(61U);
    msg.plan_ref = 667440246U;
    msg.id.assign("BFULHNYLJJKHNVQMSSBLWZRIOZCGG");
    msg.memento.assign("ERWOKAYGEJBLLJRADHCCIVPHXEKQEQMXTLBLYBJJWWNHHLODDARKCEWTWWZWESOORCIQDSUYVZYITHPXFUKINCLIQBXVIFXSFOBXVZYGNSKBLWYCVUNFIDXGCDUPVMMONEQAHMYNPRSTGQBGFKQ");
    msg.control_src = 14715U;
    msg.control_ent = 200U;
    msg.timeout = 0.5739468573017651;
    msg.loiter_radius = 0.5536452183835114;
    msg.altitude_interval = 0.705768835485278;

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
    msg.setTimeStamp(0.34992149555286356);
    msg.setSource(22229U);
    msg.setSourceEntity(106U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(194U);
    msg.plan_ref = 1761765215U;
    msg.id.assign("GYCNCXFDHBHRIVUJKVPWMQFLXKCIJZEKEREDVNXQFUYPLLSHPKWRYCZVXBBZRILHFYDESPDGOGPYVXOBZRAWZEPSQMYSIDNLTRAWKEPFXCOGOLKJTHBDSJJOGLBUESNAIUBXPGTSZILYBMQACURISAOWZDXUOTUGEHUVRTWAZKQGWFQFWNZVVGLAHUMPTWIQ");
    msg.memento.assign("RPTVUDOSPGJQCXGWIVWLUMZOKDETYX");
    msg.control_src = 65529U;
    msg.control_ent = 236U;
    msg.timeout = 0.5731852294261217;
    msg.loiter_radius = 0.7577351588337671;
    msg.altitude_interval = 0.40676372453471343;

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
    msg.setTimeStamp(0.756685799489597);
    msg.setSource(37436U);
    msg.setSourceEntity(133U);
    msg.setDestination(27352U);
    msg.setDestinationEntity(163U);
    msg.flags = 143U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3410085722540307;
    tmp_msg_0.speed_units = 94U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2176942220362803;
    tmp_msg_1.z_units = 186U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6228036032217587;
    msg.lon = 0.5964922824626208;
    msg.radius = 0.30142005891876333;

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
    msg.setTimeStamp(0.8442879796851909);
    msg.setSource(61622U);
    msg.setSourceEntity(203U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(181U);
    msg.flags = 43U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.41317583702547356;
    tmp_msg_0.speed_units = 63U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6203258796610064;
    tmp_msg_1.z_units = 0U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6056892906690223;
    msg.lon = 0.18980174066480215;
    msg.radius = 0.49396474491988207;

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
    msg.setTimeStamp(0.8228893112647769);
    msg.setSource(5559U);
    msg.setSourceEntity(98U);
    msg.setDestination(27421U);
    msg.setDestinationEntity(98U);
    msg.flags = 157U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.08984059786622667;
    tmp_msg_0.speed_units = 190U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9435227635613915;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3589395867356667;
    msg.lon = 0.36854584117691047;
    msg.radius = 0.5834082963191125;

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
    msg.setTimeStamp(0.9790470545273797);
    msg.setSource(51516U);
    msg.setSourceEntity(33U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(173U);
    msg.control_src = 48643U;
    msg.control_ent = 112U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 163U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5980679074750253;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.40748121842338136;
    tmp_tmp_msg_0_1.z_units = 11U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5255041661346198;
    tmp_msg_0.lon = 0.1515353550298182;
    tmp_msg_0.radius = 0.9396538716088285;
    msg.reference.set(tmp_msg_0);
    msg.state = 213U;
    msg.proximity = 233U;

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
    msg.setTimeStamp(0.006596154997272952);
    msg.setSource(19244U);
    msg.setSourceEntity(7U);
    msg.setDestination(3015U);
    msg.setDestinationEntity(232U);
    msg.control_src = 14249U;
    msg.control_ent = 253U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 194U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8798077740411504;
    tmp_tmp_msg_0_0.speed_units = 101U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0641460025262145;
    tmp_tmp_msg_0_1.z_units = 178U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.788235762016237;
    tmp_msg_0.lon = 0.7029426240503857;
    tmp_msg_0.radius = 0.966194637023524;
    msg.reference.set(tmp_msg_0);
    msg.state = 219U;
    msg.proximity = 43U;

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
    msg.setTimeStamp(0.9171535232717309);
    msg.setSource(52833U);
    msg.setSourceEntity(39U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(236U);
    msg.control_src = 24638U;
    msg.control_ent = 92U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 12U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4903097181961674;
    tmp_tmp_msg_0_0.speed_units = 67U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7076957046416292;
    tmp_tmp_msg_0_1.z_units = 213U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.027470634239305847;
    tmp_msg_0.lon = 0.7265226045281752;
    tmp_msg_0.radius = 0.09014326531908401;
    msg.reference.set(tmp_msg_0);
    msg.state = 174U;
    msg.proximity = 215U;

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
    msg.setTimeStamp(0.05816918622325784);
    msg.setSource(19489U);
    msg.setSourceEntity(148U);
    msg.setDestination(2510U);
    msg.setDestinationEntity(148U);
    msg.ax_cmd = 0.026798986111858714;
    msg.ay_cmd = 0.9255606959806713;
    msg.az_cmd = 0.3468264759972216;
    msg.ax_des = 0.4283403896900886;
    msg.ay_des = 0.1741791978791336;
    msg.az_des = 0.6037445180933045;
    msg.virt_err_x = 0.7100568093622295;
    msg.virt_err_y = 0.14428524061023584;
    msg.virt_err_z = 0.2465060225314175;
    msg.surf_fdbk_x = 0.6271156526136938;
    msg.surf_fdbk_y = 0.2591346382631109;
    msg.surf_fdbk_z = 0.18919766299919505;
    msg.surf_unkn_x = 0.35635298607115784;
    msg.surf_unkn_y = 0.2517562608381382;
    msg.surf_unkn_z = 0.14404326408034707;
    msg.ss_x = 0.5864553461893862;
    msg.ss_y = 0.37611994353361855;
    msg.ss_z = 0.237831140169252;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NWDNBNGDKCGZFRIBBHSGXVRXWJKMZXHRTPUUMFNHLNRGDFDAOADOTVVAUXLJOUUIJFYUCHQMVBQPJWFDVZWPOYHXCCLTJYLWNSJWPMEAQHAZCUIXPPQWYAQTMCSEERMRREKIJMKAAFQUTSXIKTPVVPLAWKBDYNTLXOEGFEDQACDZBBKIKLOIIVLOZNSSLCGYSZBKHJNYHJGMSZSBOTRQIREXEPUVZGQRTTMWJIEOPEYHCFUXNMHWGQYCFV");
    tmp_msg_0.dist = 0.06085006604704557;
    tmp_msg_0.err = 0.33206994312821236;
    tmp_msg_0.ctrl_imp = 0.8519736524516531;
    tmp_msg_0.rel_dir_x = 0.47648601973255766;
    tmp_msg_0.rel_dir_y = 0.7566584467453011;
    tmp_msg_0.rel_dir_z = 0.5597702785214707;
    tmp_msg_0.err_x = 0.21027229480878684;
    tmp_msg_0.err_y = 0.8154393875961091;
    tmp_msg_0.err_z = 0.0026915959892276353;
    tmp_msg_0.rf_err_x = 0.36552823644782884;
    tmp_msg_0.rf_err_y = 0.783267022536473;
    tmp_msg_0.rf_err_z = 0.36807533517738567;
    tmp_msg_0.rf_err_vx = 0.6975313494788379;
    tmp_msg_0.rf_err_vy = 0.09091660702742932;
    tmp_msg_0.rf_err_vz = 0.8688680790886568;
    tmp_msg_0.ss_x = 0.8213299249893061;
    tmp_msg_0.ss_y = 0.7788510845351759;
    tmp_msg_0.ss_z = 0.9452050653575398;
    tmp_msg_0.virt_err_x = 0.06826312114420541;
    tmp_msg_0.virt_err_y = 0.9931776427158414;
    tmp_msg_0.virt_err_z = 0.6513983173794687;
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
    msg.setTimeStamp(0.4666384896062634);
    msg.setSource(26342U);
    msg.setSourceEntity(150U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(148U);
    msg.ax_cmd = 0.5178087515764523;
    msg.ay_cmd = 0.9147689404043782;
    msg.az_cmd = 0.1695032010838755;
    msg.ax_des = 0.9540676499058153;
    msg.ay_des = 0.17496426576831137;
    msg.az_des = 0.26185657463277234;
    msg.virt_err_x = 0.5958331025859146;
    msg.virt_err_y = 0.3819851788706786;
    msg.virt_err_z = 0.0728534774039361;
    msg.surf_fdbk_x = 0.48548574132416444;
    msg.surf_fdbk_y = 0.1333666697546686;
    msg.surf_fdbk_z = 0.3523906535023008;
    msg.surf_unkn_x = 0.24179349489921154;
    msg.surf_unkn_y = 0.661541748877064;
    msg.surf_unkn_z = 0.4094335974219979;
    msg.ss_x = 0.7566032180459029;
    msg.ss_y = 0.39335364343701495;
    msg.ss_z = 0.15948827664500498;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BCZHEAXEWRAYJCMABEQHXMBJJEDNSLEAYOLFPRFVJJLMTNBHZPXHFUNUYACSSMIBATQ");
    tmp_msg_0.dist = 0.4501353689127716;
    tmp_msg_0.err = 0.8582982609208687;
    tmp_msg_0.ctrl_imp = 0.5005384230279798;
    tmp_msg_0.rel_dir_x = 0.20356120638554343;
    tmp_msg_0.rel_dir_y = 0.7822592218129465;
    tmp_msg_0.rel_dir_z = 0.42383671367237363;
    tmp_msg_0.err_x = 0.6684027865038351;
    tmp_msg_0.err_y = 0.3721101510439092;
    tmp_msg_0.err_z = 0.8854299835337788;
    tmp_msg_0.rf_err_x = 0.9953920264131548;
    tmp_msg_0.rf_err_y = 0.23138717904207784;
    tmp_msg_0.rf_err_z = 0.8581792204030492;
    tmp_msg_0.rf_err_vx = 0.5803955862287428;
    tmp_msg_0.rf_err_vy = 0.7842521406953618;
    tmp_msg_0.rf_err_vz = 0.7346028255120235;
    tmp_msg_0.ss_x = 0.8862752621235993;
    tmp_msg_0.ss_y = 0.5920510842735464;
    tmp_msg_0.ss_z = 0.5734462307453491;
    tmp_msg_0.virt_err_x = 0.7887051819454513;
    tmp_msg_0.virt_err_y = 0.545825926302022;
    tmp_msg_0.virt_err_z = 0.5794139216391356;
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
    msg.setTimeStamp(0.6608640625120452);
    msg.setSource(58053U);
    msg.setSourceEntity(179U);
    msg.setDestination(10726U);
    msg.setDestinationEntity(187U);
    msg.ax_cmd = 0.5410664424273197;
    msg.ay_cmd = 0.513734980121774;
    msg.az_cmd = 0.1264723956897349;
    msg.ax_des = 0.6035704570368868;
    msg.ay_des = 0.1875128214639714;
    msg.az_des = 0.7242777478193738;
    msg.virt_err_x = 0.0635208615647207;
    msg.virt_err_y = 0.12667231562429626;
    msg.virt_err_z = 0.14609035237038137;
    msg.surf_fdbk_x = 0.7797282091812267;
    msg.surf_fdbk_y = 0.2208248346161774;
    msg.surf_fdbk_z = 0.8134928467003606;
    msg.surf_unkn_x = 0.8671505787902206;
    msg.surf_unkn_y = 0.8254373130350777;
    msg.surf_unkn_z = 0.9768499807357249;
    msg.ss_x = 0.3052160636024429;
    msg.ss_y = 0.392823646752431;
    msg.ss_z = 0.34303054797570365;

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
    msg.setTimeStamp(0.2799640853054982);
    msg.setSource(30470U);
    msg.setSourceEntity(56U);
    msg.setDestination(47274U);
    msg.setDestinationEntity(72U);
    msg.s_id.assign("CVMTIYLUQQKKORQZKYWEUGBCJSAWVZPKAVLTMSJKHQFOJPNXLUHRDCTXDRKBNTJHYEWCNQGZZKNVUFHLWUPSZVUSEHOPXCNFBDGOUJDKMDQOCQWJMMBPAPOSESTIYWFLODVZLY");
    msg.dist = 0.1729129271359875;
    msg.err = 0.31313574676994116;
    msg.ctrl_imp = 0.42098085188179735;
    msg.rel_dir_x = 0.34267030586980485;
    msg.rel_dir_y = 0.19018813821079916;
    msg.rel_dir_z = 0.130708251438044;
    msg.err_x = 0.9303865875823457;
    msg.err_y = 0.7621739429096069;
    msg.err_z = 0.9453376686676845;
    msg.rf_err_x = 0.6969485173221561;
    msg.rf_err_y = 0.12322055645594576;
    msg.rf_err_z = 0.6009572075954326;
    msg.rf_err_vx = 0.7371052273750401;
    msg.rf_err_vy = 0.3187150358413984;
    msg.rf_err_vz = 0.20816342939044952;
    msg.ss_x = 0.03968273013989698;
    msg.ss_y = 0.12472818144936226;
    msg.ss_z = 0.88193279348448;
    msg.virt_err_x = 0.04439585627509568;
    msg.virt_err_y = 0.37622047757099675;
    msg.virt_err_z = 0.8315497810559191;

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
    msg.setTimeStamp(0.5946369409331534);
    msg.setSource(10613U);
    msg.setSourceEntity(253U);
    msg.setDestination(4035U);
    msg.setDestinationEntity(182U);
    msg.s_id.assign("RFFATQQEQGDPKKMKKF");
    msg.dist = 0.4824173706232966;
    msg.err = 0.5699055377428489;
    msg.ctrl_imp = 0.09571587565449469;
    msg.rel_dir_x = 0.49152288069327765;
    msg.rel_dir_y = 0.48489419331824757;
    msg.rel_dir_z = 0.27141181659333447;
    msg.err_x = 0.75937954540372;
    msg.err_y = 0.32089144798100155;
    msg.err_z = 0.9307038170953326;
    msg.rf_err_x = 0.8014818860354267;
    msg.rf_err_y = 0.014825696840550129;
    msg.rf_err_z = 0.3070511879882849;
    msg.rf_err_vx = 0.8976345912183955;
    msg.rf_err_vy = 0.7693646437482834;
    msg.rf_err_vz = 0.35761492490975255;
    msg.ss_x = 0.943375109241937;
    msg.ss_y = 0.08489991041159473;
    msg.ss_z = 0.7021761634128242;
    msg.virt_err_x = 0.443300764313448;
    msg.virt_err_y = 0.8962987061779781;
    msg.virt_err_z = 0.7809834038581384;

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
    msg.setTimeStamp(0.3315614934995864);
    msg.setSource(53484U);
    msg.setSourceEntity(199U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(19U);
    msg.s_id.assign("TRWFZXURTHSIBKGVNCRZETZHAKGAYJWVMEQPQDVQRQQMIGBIDNNWJBYIXGUPZLPQKEPPPBJWOYKJDZSDFFHWEBXXUNSDZKBTSRSFGGQUHOCGEKUDKTCFOLEAYBLCXAWN");
    msg.dist = 0.30686477937475076;
    msg.err = 0.5089234830245855;
    msg.ctrl_imp = 0.4891074688341497;
    msg.rel_dir_x = 0.42843651757990575;
    msg.rel_dir_y = 0.9719361348702367;
    msg.rel_dir_z = 0.7089858073033205;
    msg.err_x = 0.13899055913325653;
    msg.err_y = 0.2482178713519233;
    msg.err_z = 0.5827472823302774;
    msg.rf_err_x = 0.15992481754729526;
    msg.rf_err_y = 0.7226648171294715;
    msg.rf_err_z = 0.5050058910952225;
    msg.rf_err_vx = 0.6903306517901046;
    msg.rf_err_vy = 0.09574970135359517;
    msg.rf_err_vz = 0.8723237269971394;
    msg.ss_x = 0.6860395820893528;
    msg.ss_y = 0.5566832235271987;
    msg.ss_z = 0.5538844041438258;
    msg.virt_err_x = 0.008992662814076291;
    msg.virt_err_y = 0.013929747020703487;
    msg.virt_err_z = 0.8382821002313909;

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
    msg.setTimeStamp(0.9348073205539517);
    msg.setSource(30040U);
    msg.setSourceEntity(247U);
    msg.setDestination(47492U);
    msg.setDestinationEntity(58U);
    msg.plan_ref = 199391217U;
    msg.id.assign("XAYCXTFBIFVNLULHXOXCBBITBZOYKQWJSGMZEWRTKHAKNJHQJVRBFRGAFUZZXKSWZLJNSRUZOSCLQDUEQSYQWBZFGRMQYCHJ");
    msg.memento.assign("MJUKRMFKLIMXMEDHOZTVBPABFIFSDWKCWARISOQFJYUOKDZYPTXGWHAJVHHTZADBGVZRXNDJMQROLFLPLEYTVPUQPYSQOKODCPBIGUKARUWIWESGEHKQVBIFJYRVICCLJEBXKXABGENXYZCLUYTECKTCTSHAERLRZHSZQFACVFNOCULDAKDMWLRGIVJSWXXTEZNWGHZO");
    msg.timeout = 62340U;
    msg.rpm = 0.6508292393430612;
    msg.direction = 253U;
    msg.custom.assign("KJHAEGHAVVWQDVPZKSVHEECJAFLAJNIDNHSDOYEYGCCGKKLFRDFRVEUXJKWSSARTGCLNJBOTQIRANGFBMEDQTPKTQEPYVABOMRWSPYPTUFUUKMGIPREWRFXXIPMZRNLPJMXUTIFGFLLAHMYCMIOACWYJUZBWOKBJXNUGMSDWCQBOUTHASQRQMBICXEUDDCZIUXLOBBWSQTHNWDPJZMYWIZHNXVJFVXLNQOLEGZXVSOOYBKCNYSIGPHVZQLDT");

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
    msg.setTimeStamp(0.9754769172464889);
    msg.setSource(6916U);
    msg.setSourceEntity(91U);
    msg.setDestination(39209U);
    msg.setDestinationEntity(97U);
    msg.plan_ref = 1418935373U;
    msg.id.assign("YUDICCMTFFHJFUDHNYVPLMEAOFHJTETAAEYBYAENBVLPCMLDPZBWEOXOZTSDRRISGCIQURKKIPNCPXENEYZGGGZBCBEVQHTYDWUOAQZSINJIQOJXHUZRARVQWXOPOIJMSJPKIJCGRIWWLHCFOBESDMGWZFMDAKNVOTJKSQBKJXTOXWLNMQQDGSZBFAUKHWLVURPVFQLIMGVYMXYZLJRDRMWXVDFNKUUPYQH");
    msg.memento.assign("AHGUCOCZICUCZATQQIWYCFQWNACBRPOJTRYLLWXSMDGUYDYBGUZVOGYGKSGLMSDRSPYCEUZPJYWWNBVNRLVXHRHESSXJDDBYKDWBDOKZACUFNGQTEUKAEDBTOKOIHXKEPBBAQJJWFLISLMWTJIZNHNVJXOTQFHVTCHVFQMGYOHPRNEMGJNEUIATFKKRIXYFXJAPQVLNDVXWLMNMDEZQIKZLOPSHMPFBTAOB");
    msg.timeout = 2971U;
    msg.rpm = 0.5292427697947834;
    msg.direction = 87U;
    msg.custom.assign("JPPKSCZPXSJUMKUYYTZQNMNPSMSFZKLPCTNLFQAIRQWFIWGJKPQAVUAYHRSLRDKDQUINGTAAPWSCWPWQSHNKYCZEPEIIRIS");

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
    msg.setTimeStamp(0.3911510380866784);
    msg.setSource(417U);
    msg.setSourceEntity(151U);
    msg.setDestination(57447U);
    msg.setDestinationEntity(194U);
    msg.plan_ref = 3856304473U;
    msg.id.assign("XWTZQZAWZTCQZGMIBAEVYWWMAKIEUNSFPAXROVDMUFGNBDSMTMUW");
    msg.memento.assign("XTFIWSPXHMLINRFCQNRAQCPNGCZYFGUB");
    msg.timeout = 26175U;
    msg.rpm = 0.9846621867184373;
    msg.direction = 149U;
    msg.custom.assign("RVUFPBHKERDCRORWQTHSRDJVDFUGSOTQVUSMISZJBEKLSVPJWPXDAOQQJYZECYPNIRLKQCCLYICMZMSXKFMDXAFCWILOUNCNYFLAKHRQMOGYPTTVUWJPMAKVSGHSFNINTGDUOBIQKXREMDCGTJGJUKBPSFWHAHEXYVNOHAALTLWXTQQ");

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
    msg.setTimeStamp(0.06424799019858773);
    msg.setSource(3540U);
    msg.setSourceEntity(253U);
    msg.setDestination(65520U);
    msg.setDestinationEntity(35U);
    msg.plan_ref = 708331831U;
    msg.id.assign("XGYWCVMZNVMYHRSJXBAGDOQFERFMXITGJWAVZNLFNDZIVYCKAHWQSHYLLICLAPGACMXMPEGOZFFNBWCOGWEROHQPNKDPUWEUZECWEOKZKPMDSUYTMSMIOQDPSSKBNIYCJOMKHIBTFFRXBTBLOUHRELQQFNBZLURKHNNHRRQBZJPPCLAJJV");
    msg.memento.assign("KCKUUXBNVBPPPUYXM");

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
    msg.setTimeStamp(0.8092328696182258);
    msg.setSource(530U);
    msg.setSourceEntity(24U);
    msg.setDestination(15228U);
    msg.setDestinationEntity(38U);
    msg.plan_ref = 68260036U;
    msg.id.assign("CXPZSBEFLTBCVGGKUAEWWBVSVOWFXDTRZYIEQWLXJAHRYLDVQVXMIX");
    msg.memento.assign("XPZPWEVRXFKSFHMCQCVOTCBNBQEXBXEEDCAKGMJHLFFZSYQHWPZHXIRGVMAQAAGKGTZOLYMLHIKRRBIXTAKBDPVCNROQUCJHEWJVUSUZHEVPMFLBSRCYEMYBDPNZRSDJVINWKIOSGLLEOZXCUAWNVDRLJYXTTIGTQTSQZZGSDHYJOFPVEADMWONGHNQOOGBMETK");

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
    msg.setTimeStamp(0.02602676131566084);
    msg.setSource(57227U);
    msg.setSourceEntity(142U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(22U);
    msg.plan_ref = 2744332640U;
    msg.id.assign("DKCACJYQLZZ");
    msg.memento.assign("DWTXHCYRSCBKEJECUKTWTPFLTMNGNJLFBFQSRYZMAQSYRNSPASHRXAUMOQUREZDUEMNVHDFPUZFZZGZHVNXEPIHHNPRZTDWEBWGNGCFTJRVIQVOMHIEYXBZQXMCNPUIJPXIPTCGQIVMJOHVQAERXAOJRYSZVDMYBJTBKVDQGQBGXDLZFKIWUYLPBISUFWYMSOOOMGSYWCCKSALKOKLVAJXKBWLU");

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
    msg.setTimeStamp(0.14719559216664913);
    msg.setSource(61750U);
    msg.setSourceEntity(114U);
    msg.setDestination(59701U);
    msg.setDestinationEntity(230U);
    msg.op_mode = 155U;
    msg.error_count = 138U;
    msg.error_ents.assign("FSZLQTQKDMGDZJRYTXKIFZIACNIOIFQWCWDFFTSQPTHFEKYRSTCGNMPINUVLAESLSBBJXNPVRBRGYDBIOHOQLVNXIBKBZVNVLDTXQOJXRYWHIPKPMSJCMWSGPUDNCLMJFELEJHCDRLHANXKBTZUYJHEBOQEIUDKGZRQUHDECEXVMUDVWVUZJOQSTOVGNYPYAXWZKELCSXGPWARJOYABPGMFYYBGHZAEMRHPWRV");
    msg.maneuver_type = 35689U;
    msg.maneuver_stime = 0.6941488596488106;
    msg.maneuver_eta = 62870U;
    msg.control_loops = 2351272366U;
    msg.flags = 224U;
    msg.last_error.assign("RMTCIKBDRTNLKJPENWLFFHYTGCFVCEAISTVDSWXAXJBSKHZDNHCSFWKGLILMVPQUNRUHPPBMKOGIJYJLSRTDZHXHXLNQAQEBIQUMQAWWURVJUDXPHLJIFEHSZEDYBTGYGMGMBBJFLORPXXOSTJQAFZGSWBUINDUYTIHMSJUXPLOAVPZPOEVRKBCKUD");
    msg.last_error_time = 0.5979727992548197;

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
    msg.setTimeStamp(0.6600812848898872);
    msg.setSource(12583U);
    msg.setSourceEntity(162U);
    msg.setDestination(47370U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 209U;
    msg.error_count = 245U;
    msg.error_ents.assign("BUQJFFGHFLQPUWGWXPURNWDWAWACDJTWRFFLNRPZIQLXCOXPYCTEEJAOTBDNUIPTXVDKNDRYZEFEBANSZBAMQZXIRLQMHLYCOZQBYAKU");
    msg.maneuver_type = 20645U;
    msg.maneuver_stime = 0.6130642656861535;
    msg.maneuver_eta = 17566U;
    msg.control_loops = 3736293739U;
    msg.flags = 112U;
    msg.last_error.assign("MBWBTRXDWUOPLDJSZNLDHQJIUKSDIKOAGMBERDBUGNDQETKIGVAKHRLNCNPAWJEMHRCRPCIEOVOTXLHTVNWCNAZJIXMAIAYHBVVHDFJFPJXLGAKMGWLDTNICEVOXFYKJXZUZSOJKPYVRRMYSYRUMEQWDSFDNPBLTQROZN");
    msg.last_error_time = 0.1253211242918707;

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
    msg.setTimeStamp(0.9409729615769626);
    msg.setSource(41627U);
    msg.setSourceEntity(85U);
    msg.setDestination(29463U);
    msg.setDestinationEntity(3U);
    msg.op_mode = 235U;
    msg.error_count = 178U;
    msg.error_ents.assign("IOCJSISBIULUVMISVRGXGZMKFEQJTGRWXSJZMAUTVXEAZMPYRPUBPXVAQNOWHMCCDFTTTCMVKASOTSZVNLZCEHPFVDZVRYLLHABNDNJZDVJHXHHQBKPOEWYRYIZIXUFCXJMMQBGGCZMPONQFWDTWBYAKLROESANLSGELGUQAGCHDFDSUKFUOBSNGDQDKVYEXWUER");
    msg.maneuver_type = 48186U;
    msg.maneuver_stime = 0.9388358239305512;
    msg.maneuver_eta = 35097U;
    msg.control_loops = 3541743739U;
    msg.flags = 21U;
    msg.last_error.assign("BWLZNPFHRDAROVOQMUTCAZKEYKTOTSZDGHLFTFBESPCESNEXHZPWIZJSRSIRFYFZIXDXHLENKDBEXPKFWUNZLAJCNGMKDPCDJQVBPBAUEBDPRVRVQKXUOGIJHGIVMFQKJBNLQDTWTLSGAAPYWWENVIMXARQCAKJXSXUKQMSMBUJRINZUWVBTYIZRVMQYOPLMJTLFCLNTPEFWTEOJQSUKHCGUIMFY");
    msg.last_error_time = 0.8521161300009733;

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
    msg.setTimeStamp(0.06623034198220623);
    msg.setSource(34551U);
    msg.setSourceEntity(105U);
    msg.setDestination(50191U);
    msg.setDestinationEntity(187U);
    msg.type = 106U;
    msg.request_id = 35625U;
    msg.command = 84U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.plan_ref = 1338012920U;
    tmp_msg_0.id.assign("QOKZWNXOFFGIDMQKLWKPUCALHQXRNQIKJTPDMXZUJYJWSKXFLPVRTJS");
    tmp_msg_0.memento.assign("FCUYAJRSPUOMEHRIZXYHRXQADHPQHNPBWQTHRPLJTVIPKZTJIRMMYHKMHAGZCWGSAUEQFKMAXZP");
    tmp_msg_0.custom.assign("ZWAOGCUKXNZJCVVRQKTGUMGIYOHOAVSDJIZYMAIFGTIEXTIPVIXZYJZTDQJNJA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27364U;
    msg.info.assign("ZTNEIXJBODGQUQYXJTAXMKBKAIFFHXIWNSXROZHSFACGDZCYRXLVVZKIVALEROVJLLCGPLHFHLMCTIYEACNCKEWOYTYWGMPZZXWOHRQDRHXYJSGNOGJPIBBYJEVKETUTGBMVMBENDFEDQWCSOYJMSUKJFDDHGWIRRHXS");

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
    msg.setTimeStamp(0.06924137659412366);
    msg.setSource(12149U);
    msg.setSourceEntity(172U);
    msg.setDestination(61961U);
    msg.setDestinationEntity(188U);
    msg.type = 248U;
    msg.request_id = 57023U;
    msg.command = 224U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 2827530157U;
    tmp_msg_0.id.assign("SMAFXXHGWOFXCRNSUAMNFRVWPHULKGJRLOZCWZHGNOYFVLAIKPDSHJAPRBKTNFBLPDCFTDEKONOSVWWPWNMGAHETTUECQNDADDCZEXIGCXXLQEBUBTWJUMBNTLQJFZFCZUTHEKXMRIPPCZAKZYTBXQMLGEECPGAD");
    tmp_msg_0.memento.assign("LRZVPZZDLLNSDJZYNXTVUMXGAKGSKPNCWDMGGDQTTUFPYPPAIYAEAHBQFRKKGXZDRCRMHBJBUONJHPCVHIBVCRSABYKATHLYVMGWGUDVYSQUWGEIHJIVKBRWPBCYIGKUGQCMZSOMHUORXXWJLISQBFKTLIBSXEQOPUAVWXWCZDTRZNJLHEQHIETYFMNXLYFQAONXLUPKXDOFCSJSZEANBMPMOJMWAJIONTUCVEDEFVDZRFWYQRFLJWTOK");
    tmp_msg_0.timeout = 33881U;
    tmp_msg_0.flags = 197U;
    tmp_msg_0.lat = 0.34370834525623295;
    tmp_msg_0.lon = 0.8525701431764693;
    tmp_msg_0.start_z = 0.7397171026943148;
    tmp_msg_0.start_z_units = 166U;
    tmp_msg_0.end_z = 0.5040624169163967;
    tmp_msg_0.end_z_units = 10U;
    tmp_msg_0.radius = 0.3685679172798365;
    tmp_msg_0.speed = 0.8128414414775645;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.custom.assign("KTVIWLYVUEUMYLRWDCJQJDSHKAMDXUUMVZZWORAJGAJXMBNOMOEWHNRHOWKGBASNLYADSWGJKMDLTVCUHYQSVUHONTQBFQDHTGZEWMVCXEBVRLJCQFAWKOSZCAWYJHQRPEBIPLREIPICUAPNOQMFFUXRFIPFYGXRO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45185U;
    msg.info.assign("QQEBBEFLDBKDOJMGWRVOPWHSENUJPFUQXNGJDSYTHMCJEFYXDFZZNUKASFQBXTCIHULHHWDKAOYRKNUXRSTYSHMAQKQRFZPZVNFYBAPCVOEPRGLUVIKHLAIEQTXZOMVJOSNVTPFBJUCYYCS");

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
    msg.setTimeStamp(0.6170869454324354);
    msg.setSource(23347U);
    msg.setSourceEntity(19U);
    msg.setDestination(38912U);
    msg.setDestinationEntity(59U);
    msg.type = 101U;
    msg.request_id = 23717U;
    msg.command = 33U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.plan_ref = 597497456U;
    tmp_msg_0.id.assign("LSMBMINZQCLEEPKWVZWYTCZZOQSHHLTKQDLJHIVGRTBJMYMKCXRTGNUOQINMCXOXQALKLHVFPYZCYMTJBHPHZVJZMZZENASNIAFAEECYNRDSSTLFFQEDYWCSQOPFGNGBSAFMJWOHDBJIBGHWAUEFPRUJJRTPE");
    tmp_msg_0.memento.assign("OAPWXTEWSKVOIAMPVMNMQURUQZLDSKTVVOCUFETIXIUKNSXUVYDBQGJPUUH");
    tmp_msg_0.timeout = 51648U;
    tmp_msg_0.lat = 0.14833178865614383;
    tmp_msg_0.lon = 0.8223726026652985;
    tmp_msg_0.z = 0.14628402809550112;
    tmp_msg_0.z_units = 144U;
    tmp_msg_0.amplitude = 0.36485679717535113;
    tmp_msg_0.pitch = 0.5058081730230265;
    tmp_msg_0.speed = 0.2030785918930822;
    tmp_msg_0.speed_units = 71U;
    tmp_msg_0.custom.assign("MFPMVJYFBAXYAQOUOLSMUHNZEJEZWKVYVYWYIDLDNYTUKSQFESXVXZUITLSABHDPBTCRCVZAOVIFIWXOGIQHKPDMKSXHASSGFHTLRZLNAVFJHGDAPXUBINOCZDEWTDDQHXKNRGJCUNESMRZBFMCMTVRKWTLON");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8102U;
    msg.info.assign("XBFCMHYSGSIVXUMUWRJFQWTZUFZVRROOGKOUOQYGZJRLIQTHRHHCQHUMEDZGLWOQSJYKNRXXLHFZXVDPRGGNHEBVSUWPDEDPOLQIZZMBPACXWVBEZEJNBPATVNJDLXPMIKXSNMPAFDITMILJWXUTQNWYRQNWJCYLYCNSRFTKIVKOYKAEKIFCFEGJHKSCAKUBAQMEJPQPMFTGLWDLOADDVCGODC");

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
    msg.setTimeStamp(0.4807601562927095);
    msg.setSource(24430U);
    msg.setSourceEntity(0U);
    msg.setDestination(40964U);
    msg.setDestinationEntity(69U);
    msg.command = 77U;
    msg.entities.assign("KBAQUPOCIPUGAZFNLBPUZBWVAPRSRFMKGXXOMEQJCSAHTEVNEQLOYYGHLAWTQRIBXSWFDKNYQOMLCRSSTURHSXCLJHSWGTLVDORJXQDMGTYYCFCBTRZPAZTZDJFRELWNXEBFRIEOYXUFLWJFIHVJRHZGJAOEJVSVJGDDVXOHPUWPULDIECDAYNNNYUGJOLYHMIAQCQUSNKTBFVHSTNEDKGBHPMWCMVKNUTKWMIXCPDZZQMBKIZ");

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
    msg.setTimeStamp(0.6006793712314616);
    msg.setSource(38124U);
    msg.setSourceEntity(82U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(200U);
    msg.command = 214U;
    msg.entities.assign("RLVEXWYTWZPHWYOSAHNHZNYFGMSUXKATCUTJTMRTKDZGNXMKQFADQRFPVPOAKRJPEMMOLCABMCQBHUBVLNLNYJBQSSDVHTOKVBQNZJMRHWVWBMOGCDAVFYFQTMRNGLVIJASPMGNRHWAXSCEQGHPENCJZWZXFIGGWUFSBFKRILUOBOGJYIDBISXZTXUIEJLGIHJDVXUEKUKXZPEPFDEIAOWCUHUDZRYIDNXKCCJ");

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
    msg.setTimeStamp(0.5359579374707559);
    msg.setSource(60766U);
    msg.setSourceEntity(113U);
    msg.setDestination(35552U);
    msg.setDestinationEntity(32U);
    msg.command = 60U;
    msg.entities.assign("JRROURFTWMQABXFZELTSJLHCMUSCABQFQRZZQRPUTBSVJZXKVNDNOVJBBSZAANBXTCZWNSKDLBYYMLXVPTGVGNQWTHLPNWDTGJZLQRMOGWKOUGMCSCLIPBCEIFYXNTFGUEFSUPCCRAERUW");

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
    msg.setTimeStamp(0.10337641118317464);
    msg.setSource(17900U);
    msg.setSourceEntity(2U);
    msg.setDestination(62536U);
    msg.setDestinationEntity(72U);
    msg.mcount = 11U;
    msg.mnames.assign("CJSVROFOZQTZCAHZYDJPBABFSRVLNINRQGXIABLWIUJIJAVAHEZVGQCINTEEGDGLPOOWAVFEDCJETCLIFXLFECGXMHIRSFNSZDXGVBGDNVXKAIEGOQTARKRHBJESKBUMQGALZTQYBWKEMRSFKKXVQQXOUURDHUFVTIKPMKRCHTANMVNQZEOWYNXZBMZUWMMCHHBYOUSPLDKTPYJPFLDGXUK");
    msg.ecount = 246U;
    msg.enames.assign("YZQDPSPOKNBHXIVMJGNSENSAJKYXWWUUQDPTUJOTRYSSIZCRXFWCBRRXGMOLVOGCZQTDKPBBNVLKZQFFQDEKYLOUTMGGLNLBWRWZZTCIQJVMDVUSCQFCWUXRQMIAHETXAIBSZTNFVDIPOMAVJLKZCSHEONHJIPBULVAZJSGUKKNLYIMMHWSRDRLMWGEAHYNYEBOAOPXFGPBPHELPDDYGMFUOYAEEFUXKAVIJRTKH");
    msg.ccount = 239U;
    msg.cnames.assign("RMLHFYOSIUGQLAUAAUMIBVMHQATKBQZXOSYNWKGYTKYDWFJURIXZTJTLRONFQJBNEWPZOAVFMGYMLBRZNXWBH");
    msg.last_error.assign("TGNLKPZUCGAFUUQDIIQKJENRHABUVXIVYBOGSEALASCQRZIPGCVHQENKYCHQWJWPBKHDNZPXLFZOJEXKDWKUBYAIOGFRFMVMPZCXJLTWSIJFFTSGQMYBWZHDDUXFHHFLYRSVLQPABGNRPCCVIOZAYUKSMBTLCENQYOTIXXZAJCWVSOEQEDNJEGMRMTRILQDVVYBCKWBTUZTMUDYH");
    msg.last_error_time = 0.7053493603843535;

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
    msg.setTimeStamp(0.5418557137515937);
    msg.setSource(28501U);
    msg.setSourceEntity(209U);
    msg.setDestination(54875U);
    msg.setDestinationEntity(88U);
    msg.mcount = 149U;
    msg.mnames.assign("AQDPTDMSOJSCQABHNZUUHHYAQMOMJKVNEOZEVFRMPXLSCVMDPOURHLRIIQBUBPPQZICFXIXFJNTNXHTTUFRMGGJTBHATKHSFWGXJUOTIXYVNXGYMCXLKUBKLVSTZLENQF");
    msg.ecount = 145U;
    msg.enames.assign("VPTIQOFXVVTDVSIKDPLNTYIGVCPNLHZGXFYBUZJZRKJDROAXOSSDEMOFPDSKGHBLZTCQYBMKBANOCAPFPINXMJEDQYMDZAORYGMEIGGIUGIUUQWYCOFFMWHKQNJXGCWYDCESXURORPSVNUWXHITZJHYWEICBLNNGURBPQNULJAZSMVKAJPAKBLNQLJZVU");
    msg.ccount = 240U;
    msg.cnames.assign("IYJOQUSSKEWACVFHLPSEUMCKSOQDEZCYIRTNZBXBBEVHSQJULGWCWQQOGDRYMWXFUADJQNMUBXUPANZPXZANVGUR");
    msg.last_error.assign("NCYVHOUUDUHVXYZJSTDFWORFMAKZFUYGWINGOEGIQSPCZHMWMQCKZQABEUEYEDT");
    msg.last_error_time = 0.32025954369874554;

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
    msg.setTimeStamp(0.5193136884264038);
    msg.setSource(17883U);
    msg.setSourceEntity(243U);
    msg.setDestination(29810U);
    msg.setDestinationEntity(89U);
    msg.mcount = 182U;
    msg.mnames.assign("IUUCKVUHITQYBWJHCUCZYTKKDJBVSOTGRIYXLIFAXHEUBXPCZXWLOIQFXZSQFSVLGDSPBPQNMELZBHVTUJJCLEWMOZBOPOSKNFRWMOUKTIHGJVKGDSZPOKVFFQKRIXAOCPTMEQZXQALVBEPANGJTHANMGERT");
    msg.ecount = 67U;
    msg.enames.assign("MKBGZZIJFACGVRRFBQPKHCOBVHRBMWOVXIBMHOLS");
    msg.ccount = 58U;
    msg.cnames.assign("KVSXHRPNGVJZYOESHDCZLNLOEUECVVKIWKAEOHGNLOJWGSTFILMSEKGAFLEWAOEYJDQURVSVBQQKUORPAPGXPXIJCRBMTFDMRAVNNQCGLEWMCLOISCQNHNHKYUWRE");
    msg.last_error.assign("YQRAJBPWECEOTTDVTFDZLHRGKZGOPKPSSZBZUUK");
    msg.last_error_time = 0.7228489843192146;

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
    msg.setTimeStamp(0.23036709569012515);
    msg.setSource(36886U);
    msg.setSourceEntity(218U);
    msg.setDestination(52822U);
    msg.setDestinationEntity(231U);
    msg.mask = 60U;
    msg.max_depth = 0.536218401129613;
    msg.min_altitude = 0.6469721468005186;
    msg.max_altitude = 0.9862468911518433;
    msg.min_speed = 0.02778223206717456;
    msg.max_speed = 0.03683824514389922;
    msg.max_vrate = 0.7417675384259006;
    msg.lat = 0.8807874669473125;
    msg.lon = 0.6730332880604218;
    msg.orientation = 0.9868451248202702;
    msg.width = 0.48385633183177834;
    msg.length = 0.47602256787587793;

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
    msg.setTimeStamp(0.16145727382381292);
    msg.setSource(61924U);
    msg.setSourceEntity(28U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(101U);
    msg.mask = 209U;
    msg.max_depth = 0.09725037365177247;
    msg.min_altitude = 0.7149850710795599;
    msg.max_altitude = 0.27381091287309;
    msg.min_speed = 0.8491127412374113;
    msg.max_speed = 0.27359448122592445;
    msg.max_vrate = 0.15832765283646844;
    msg.lat = 0.0648473627775461;
    msg.lon = 0.9100881504838982;
    msg.orientation = 0.3645403837371759;
    msg.width = 0.22359237920596264;
    msg.length = 0.9077848698027772;

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
    msg.setTimeStamp(0.6603116793448602);
    msg.setSource(14960U);
    msg.setSourceEntity(194U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(254U);
    msg.mask = 80U;
    msg.max_depth = 0.35944348091166334;
    msg.min_altitude = 0.8010518425698467;
    msg.max_altitude = 0.5173052276889821;
    msg.min_speed = 0.277054669267622;
    msg.max_speed = 0.6746439044115752;
    msg.max_vrate = 0.7423744375792929;
    msg.lat = 0.6245579116587694;
    msg.lon = 0.7098169261693935;
    msg.orientation = 0.9814231083060644;
    msg.width = 0.5681505976435758;
    msg.length = 0.13200430051361522;

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
    msg.setTimeStamp(0.423077886068982);
    msg.setSource(13783U);
    msg.setSourceEntity(158U);
    msg.setDestination(540U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.5767851839369249);
    msg.setSource(61417U);
    msg.setSourceEntity(128U);
    msg.setDestination(25301U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.009560864812162118);
    msg.setSource(61584U);
    msg.setSourceEntity(162U);
    msg.setDestination(16173U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.947213895764046);
    msg.setSource(7230U);
    msg.setSourceEntity(17U);
    msg.setDestination(60943U);
    msg.setDestinationEntity(8U);
    msg.duration = 62625U;

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
    msg.setTimeStamp(0.7508347100659398);
    msg.setSource(2084U);
    msg.setSourceEntity(176U);
    msg.setDestination(33039U);
    msg.setDestinationEntity(82U);
    msg.duration = 30124U;

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
    msg.setTimeStamp(0.2015876746796279);
    msg.setSource(28022U);
    msg.setSourceEntity(213U);
    msg.setDestination(23421U);
    msg.setDestinationEntity(37U);
    msg.duration = 46842U;

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
    msg.setTimeStamp(0.7845798972659845);
    msg.setSource(4911U);
    msg.setSourceEntity(243U);
    msg.setDestination(8008U);
    msg.setDestinationEntity(7U);
    msg.enable = 118U;
    msg.mask = 3167492952U;
    msg.scope_ref = 1735245451U;

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
    msg.setTimeStamp(0.0729181489352253);
    msg.setSource(8834U);
    msg.setSourceEntity(232U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(182U);
    msg.enable = 9U;
    msg.mask = 2626367540U;
    msg.scope_ref = 2537197910U;

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
    msg.setTimeStamp(0.5968585431924072);
    msg.setSource(59285U);
    msg.setSourceEntity(62U);
    msg.setDestination(38461U);
    msg.setDestinationEntity(202U);
    msg.enable = 223U;
    msg.mask = 1903969539U;
    msg.scope_ref = 2431954394U;

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
    msg.setTimeStamp(0.21371397457331742);
    msg.setSource(36451U);
    msg.setSourceEntity(208U);
    msg.setDestination(44571U);
    msg.setDestinationEntity(188U);
    msg.medium = 141U;

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
    msg.setTimeStamp(0.3859993148589278);
    msg.setSource(2672U);
    msg.setSourceEntity(202U);
    msg.setDestination(48496U);
    msg.setDestinationEntity(242U);
    msg.medium = 158U;

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
    msg.setTimeStamp(0.7586190827382165);
    msg.setSource(214U);
    msg.setSourceEntity(252U);
    msg.setDestination(32238U);
    msg.setDestinationEntity(175U);
    msg.medium = 220U;

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
    msg.setTimeStamp(0.29848853574093803);
    msg.setSource(10091U);
    msg.setSourceEntity(144U);
    msg.setDestination(36536U);
    msg.setDestinationEntity(111U);
    msg.value = 0.6104507916135791;
    msg.type = 159U;

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
    msg.setTimeStamp(0.234380179140818);
    msg.setSource(9056U);
    msg.setSourceEntity(169U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9546984418712955;
    msg.type = 102U;

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
    msg.setTimeStamp(0.6581896510399347);
    msg.setSource(54418U);
    msg.setSourceEntity(6U);
    msg.setDestination(43591U);
    msg.setDestinationEntity(234U);
    msg.value = 0.1428686426954051;
    msg.type = 56U;

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
    msg.setTimeStamp(0.5073083016582386);
    msg.setSource(43728U);
    msg.setSourceEntity(18U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(32U);
    msg.possimerr = 0.007915040320016886;
    msg.converg = 0.8396885234802826;
    msg.turbulence = 0.20936441356689206;
    msg.possimmon = 145U;
    msg.commmon = 130U;
    msg.convergmon = 177U;

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
    msg.setTimeStamp(0.595247043917035);
    msg.setSource(34292U);
    msg.setSourceEntity(31U);
    msg.setDestination(38995U);
    msg.setDestinationEntity(12U);
    msg.possimerr = 0.22405613580718242;
    msg.converg = 0.1405543631229531;
    msg.turbulence = 0.770946587888411;
    msg.possimmon = 46U;
    msg.commmon = 251U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.8340409351078769);
    msg.setSource(25640U);
    msg.setSourceEntity(26U);
    msg.setDestination(39818U);
    msg.setDestinationEntity(220U);
    msg.possimerr = 0.3189200564141602;
    msg.converg = 0.511826480745771;
    msg.turbulence = 0.9698796467553022;
    msg.possimmon = 42U;
    msg.commmon = 9U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.6954942016958936);
    msg.setSource(353U);
    msg.setSourceEntity(167U);
    msg.setDestination(36162U);
    msg.setDestinationEntity(211U);
    msg.autonomy = 130U;
    msg.mode.assign("BBKHTSVLLZGRBXWHUAFDIAGVFFIIPKAHBWRZIVTIVKZJMZTTCFXNJXKMMPCQEODKSNEVECARALNER");

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
    msg.setTimeStamp(0.2335216232483983);
    msg.setSource(59662U);
    msg.setSourceEntity(191U);
    msg.setDestination(42353U);
    msg.setDestinationEntity(46U);
    msg.autonomy = 191U;
    msg.mode.assign("CUKAJOLIXKQIOJMLLDVPFYQGUCYQKDABUKEXEKPGXLJYBGNKHYZTQASBUZJCAONKXITSTBRFMPSSFDNZFXDRXQWYBVGVXXOTFDIUTDGVFUMRNVWNMIYAHGYNNMRZTTHAMIEYFEDPSMWSMAPWASOSOLQNIHLZSGQPLPREFWTZPCVKUCCOCAYRQUIJVZ");

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
    msg.setTimeStamp(0.730319450430727);
    msg.setSource(52632U);
    msg.setSourceEntity(164U);
    msg.setDestination(59264U);
    msg.setDestinationEntity(61U);
    msg.autonomy = 216U;
    msg.mode.assign("ALROKXBBGKNUXJHSWDBXEDGIMMYKAOQ");

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
    msg.setTimeStamp(0.5340700214719784);
    msg.setSource(2850U);
    msg.setSourceEntity(35U);
    msg.setDestination(62625U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.5455266131000872);
    msg.setSource(345U);
    msg.setSourceEntity(28U);
    msg.setDestination(46444U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.7880292457564521);
    msg.setSource(45665U);
    msg.setSourceEntity(210U);
    msg.setDestination(7315U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.5125368365388715);
    msg.setSource(62726U);
    msg.setSourceEntity(81U);
    msg.setDestination(47300U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("FTNFCSMGSAUFSKRNTTHCLRXPODQZUQPYLKIQZFFORSGPECGDNBBVDTOSHYIQLKMKPCVAVVTOLCFWDGYYQHBJDNAVMWKHYXJDVZDSQJRWYNAXLZZLPBHAIBAINRDZSCVJGRBUHPOXMBEVLYJXPBUCGTRFMAQJRJFUWKWPIEBQZANMMGGECTZ");
    msg.description.assign("KZIPQZVABJMQYEXNVTUWWIJZPEBXBSIVLBITVUPRTGSFECVJRVBKUOFFICHCTWHMEPRAYQNPCLONWRFGMSXYJDRDGYRNIGCAWNOQHXCVALOGZBVMXODXJMLGCRKATQCHZZQHJNXYUPDULRJDGTZEHOUOSMHAUMOEPJBIIEYWDKWWBMPYGXLLNJPMLXRIDUKHPTYXYWFOKDZKDCHSBMSELSLNWAQFNEBDQ");
    msg.vnamespace.assign("TPUDICKAWIKKQQQLIFWJGS");
    msg.start_man_id.assign("IYJHDVKRDUHGPLKTFRDGIHMJFXIGVQOODQCCJFTALDLDDFQESOMHSTXZBKWGYXWNLSBAOTHELBTDQXSYGZFTZXNYP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JRIQFONBQPCZEODBAYARP");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 3924249692U;
    tmp_tmp_msg_0_0.id.assign("ZWKUQXHQBVZTHTRTXNSIGJCHADDSXCGYIR");
    tmp_tmp_msg_0_0.memento.assign("SHZVLQHHODDWQQTOVSGOGEZFOSIPIJCNJNIFPWYNLBOKNVYESLBJJEPEPKFXYGWJQLUTUXBUXXTVTMEDMPNWKZOFHUHYOPSSMCAAROQYIEEVYMTFGPVDFZBCDQCAUFCEWNZQYVXHKZSTQITNAULISMWAGDDKXGSKKJEVHEBCRDAUHYXRKRBAJULFWLFOHIDZWGCTVIVMGIZAMPKXZZJRYULTGDUJK");
    tmp_tmp_msg_0_0.lat = 0.22398682961253757;
    tmp_tmp_msg_0_0.lon = 0.5162615435820921;
    tmp_tmp_msg_0_0.z = 0.6861053258605607;
    tmp_tmp_msg_0_0.z_units = 23U;
    tmp_tmp_msg_0_0.speed = 0.7871607633180162;
    tmp_tmp_msg_0_0.speed_units = 61U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.10439971028298478;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.961015648688978;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("OACDDBHEKQSHBTNHQBFHOBGHXAKBQMPVDSCEBTIINQPYNKWJPVQZZAWVXEAVMYRBLYRYPOWLYHNLECYTSZHNONDJNVUVTUCGFOGJKIFAEEVXDGKRITTYXHCZSFRESJXKPJRZMSTDKHGBWLUUSDVRTYOXZQWRGIJIPFOCCHKQQJFETORCCVBVGAPOQAJSKWDUFMEZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.5129203975886465;
    tmp_tmp_msg_0_1.y = 0.49287114055875536;
    tmp_tmp_msg_0_1.z = 0.15154441000176322;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::IridiumMsgTx tmp_msg_1;
    tmp_msg_1.req_id = 31976U;
    tmp_msg_1.ttl = 18506U;
    tmp_msg_1.destination.assign("FAPWEHTZWNICJWNHMWQDOFBHJJWRRXJAKJHEMHRXZMQNIDLZLKBYTXLIQFVBUTZIDYUGCCLEFMYBRZGFBTRTQLGYKUHDIRXDNUZSPCPJLVAKZSSGTYBMSMPQSFPAK");
    const char tmp_tmp_msg_1_0[] = {16, -85, 9, -88, -17, 65, 9, -30, -118, 76, -97, -85, 90, 81, -100, -73, 97, -89, 73, -108, 7, 122, -37, 21, 37, 15, 42, -78, 23, -54, -16, -119, 8, 67, -125, -63, -1, -11, -57, 83, 93, -78, 117, 73, -105, -90, 56, 90, 41, -91, 125, 66, 20, -78, -127, -52, 75, -14, -30, -18, 65, -41, -42, -125, -118, -66, 81, 99, 89, -104, -85, 103, -68, 12, -14, 121, 26, -49, 13, -116, -1, -51, 57, -15, 71, -82, 73, -61, 18, 103, 108, -73, -93, 57, 77, -23, -10, 117, 107, -42, 64, -50, -23, 102, -70, 88, 87, -14, -95, 89, -60, -68, 89, 86, 57, -116, 89};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.18156362425232908);
    msg.setSource(16967U);
    msg.setSourceEntity(218U);
    msg.setDestination(63188U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("AFFNTVJUAQEHTLUMCUGPNUXNVAQUOTQQDBFFAXSTIEBGGWNJKDOCCHQXRLQHDYNSA");
    msg.description.assign("DUYRRDESVEEPQBQXBVDITYMZSJSPXEWTAYOFGMBBHQQSCHUENKDHDCTUNCVPPFCKOWXOWZFIAALZQLMPMCVSCBKPVXEYZVUYRYUJBOHYJWVLNPNSFUOFOMPKSCXMRKDSIQTKOAULWLETIDZMSLENGGWJWGYSLGBARIBCFRFRUAZJWGHAZOZZXZGGWEIXMULKITQQORLIFHABGLFQOGXXHNK");
    msg.vnamespace.assign("LLMPLRVHUTNGQXIRNETTJMHPTFXQGRWYSGKQXIFPJLMFJDSAGWYAOSIAUTXAHMSKNSXLZYDOPBEBHYCFTNDLSYETAMHOEWWZCKENQSTOZCW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HMOTMFFIBORECIYCFRINEDBPETQVPRMSAEMSEBNRLBOWZCMV");
    tmp_msg_0.value.assign("MUSVQPFDSRCQMYHPWRSYSAGXWFQBKNVDZSPGFDCEDPINXWLKHXAHAMGKKRZZXHQMZFDFYUZPZUTWPYTZTWBMPNUWCSYIECMJBNZPVMAXCKFVDNGUWARYSJJGNLMKEBVWQGTTXGDOAEQIFQSAZALUIBIXPFMRLNNFNHSGTWJUYXRCGEBLVPACMKJURHILYOZAOKUOR");
    tmp_msg_0.type = 43U;
    tmp_msg_0.access = 38U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GPNHHFWOCUBCSEUPOGJGIIHHYHCSTAQKHOJKHUXTCGZXRZFQDEQDFMMFWINGEPYLVJDBOYAVORJTSTCQSYJRKMFVHZQBOEOCVZEHSFASRVIKPNJGXMMPRDQYVVWTSBAXUZGKXKLDPKPXBAQTLRMFJCCLFPUYLEPJXUR");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ONKRHUZSBRUFUSFOVDRSIPJJSQVGNPYTYNWFMPEJNWOHQFSRCDDXMEOXKPXEDXKZNTBDHZZJIPJVIREOYQGJTZEW");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 1100375427U;
    tmp_tmp_msg_1_0.id.assign("QDXIZGNTPAWQSKDNSLXHVFZBTOMFDXCYCYGVAIZKHNBGYRKZKEBJRVPLBIUWEMHPSSTGEUCJBCKUYWYOSSVEOJNFDHLKHDAGQOABRQWHJEKBLJONPZYUQMWZPWYBAGOWTKUELJVWNLWOHXMQCECVMPAJFHDXOFCGVIQR");
    tmp_tmp_msg_1_0.memento.assign("OIIZTZEUUDYTXMTZWJVNOTFWJRFKVMSJMYCSHFJRBYAAWAKDNTLYRLPFOWYIWDHQKDNOGHVQYEOQCILBCAGSBKLZAPTXYSRKFSRPKSIMZITEJYUVHMVPIJUGOMNXMKXMHOXQLMCBQEIDOKNFRIWXYPUQUAQMQEH");
    tmp_tmp_msg_1_0.lat = 0.9580951466560882;
    tmp_tmp_msg_1_0.lon = 0.40344545365429374;
    tmp_tmp_msg_1_0.z = 0.6812227720434563;
    tmp_tmp_msg_1_0.z_units = 207U;
    tmp_tmp_msg_1_0.radius = 0.25334894233020433;
    tmp_tmp_msg_1_0.duration = 36203U;
    tmp_tmp_msg_1_0.speed = 0.6212292748300694;
    tmp_tmp_msg_1_0.speed_units = 96U;
    tmp_tmp_msg_1_0.custom.assign("PTBDVRQYCXTNGFZXODJROZBNBUXCCZUHFALMIBHCIMIDLNOMOTFBDSNOSEPMUNVGZYWTGDDYEJVFHPCGZXGKCIJKWLODRZIOSISTVHHVEUEWOLLQLTKMCWWUTGTJDAZSSCRKEIABYVBTVQRJAIKGWJDJUPNXDKOSUATYCMNFHYMYYRHKHOSVHZQPLEPUFAWFMZPVIGUBEMJAXMLZJKQFEYFGPAHLQWXSVCPSAQLBPWNRQIEAFJRNXG");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("KBPGLWXEYOIXENRQAHVYPHUTRSCBFAOJPENNRJKITGDMJQVMLGVFGPHAFEJOIYPIHYAQYTBCZMUJDPSXHIKELDCBXMNOWGVZZCXFTESSIWBSNCDKNOQMWIEUBICJTMEGKGFLCJUVARXWRMQFGUZYPDAWTYTVQDUZSGPJHMRXZCKZYRALRWFXOPGDU");
    tmp_msg_2.dest_man.assign("IMYYLPTECZLUGOPBTNWRCLFEJZGSINJPTPTWVKZ");
    tmp_msg_2.conditions.assign("ARTKSPUOGWISHLYXMBKXLNJBQOUJPWTGSPDWZCPSQISFLNIRKXOYM");
    IMC::CreateSession tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 3861538844U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3121875601549662);
    msg.setSource(55547U);
    msg.setSourceEntity(60U);
    msg.setDestination(46255U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("QPYFKUUHANUXJOSNNZGUBZSRTODZLRYWOSTVXBYFIKVQIYKMLYDGUOHVSEAAGAOBRWKYTZYRCWLOTLHGFVVLHEZSFXJCIDDSOWXCPAQOVHGJNKTIEYUKSPHEUKPDEVWTSPKXNVPSRRYQMEAGALBNBQPIJCCBDYCTINPZMRLWWGJZCZLUEFCFFUDBMJVUTGFFMWQAHENBRVWJOMRMMQBXXXPQPTCAAZXHIEBOGDNDKKNTJJSQEZMFIHLWJDICG");
    msg.description.assign("KHFPRKMFTYJDDNJFJCPHXDYFDLQCZSNVONVIXILWUKBXUSLTXJDEHCOKILBZOMDPAHFPGOBUPUXZIYEANEEMVGBUFKWFYEUZWYIRYOKVGHBZSAGEPJNDTJPGAAABWACW");
    msg.vnamespace.assign("XROWNWXAREGGEHVZVBKDECIKXTRZSUXDMGSZLVTXBYIYAHRNAIMYRPDDXANUSVXMWYBJMMUEQYXQGMULKQCKFFLHJUYZJB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PTHOLZLMSFRNENMHYNVZGIYZYDLKEBPREXQPOZTHBAKZOXUTANRFCHICYOIUSBUKWAWNIQUWAXMIVGXPHGRJBSIGDBDSPJZOSXCRLKSMRUTFPAQDDKBRLPGTPLEMDKACZEHZTVAIJHTFZCGMYQKAWHEJWCPYXQFIKMELTAXBOVCSVGNDLFFOGGYQNJONRFMWSJEJVQDPINBABYUHXOY");
    tmp_msg_0.value.assign("TMJNSRCWTQTJOAKOOXEPYWWVDVYOMSFDPS");
    tmp_msg_0.type = 101U;
    tmp_msg_0.access = 168U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IIDUQEMTPDIZBJKVMSQWAXHRXNCZTZMXHDRGPLQNSZOVCPVXFKBERUNAOXHUEIARHDJVHPMBHHNBNOSUTCAAIVONYODNMXLLXPYLBFJFESRZXYRLARLCXEG");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KRZJQVSXYVPXSYWREBHKDXILWMNRLFNFAYFOWMWOXKEZUMFCQCEHYIKGPYSILBIPTDOJKQNXCTYJKBGFAIELZJDNTZGLVHEHQIZO");
    tmp_msg_1.dest_man.assign("YODZDHUQQUYIMYKEJOTXSOCVNYWSAAGHNRPCWFJVISPDNDJZNVOJWUQCLUEGMTAKIJXBBQPULFQLTIUVBFWIELEFGBUJDXHGZIPGBPZRQLHDGXYGYAJWFFBWQYROIBWNUVTMSPDPPKWPBHDRSIWMFAXCRYHHMEXV");
    tmp_msg_1.conditions.assign("BRATWAOHHYYIHTUHPLZHWAGVULAHGDDOFWAJVBVZQTCGIDLSYCSKODGIXFVTCAUWTSPKPNIQRPALREPJVQHYLJWRESB");
    msg.transitions.push_back(tmp_msg_1);
    IMC::DevDataText tmp_msg_2;
    tmp_msg_2.value.assign("XRVYKCYMQMFGODFNUNRZIJGXSNIQTUFVUDMTDNIFDRBCLFOHJCITTEDXTHKBJBWOWBC");
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
    msg.setTimeStamp(0.4404044335779055);
    msg.setSource(32084U);
    msg.setSourceEntity(21U);
    msg.setDestination(42945U);
    msg.setDestinationEntity(217U);
    msg.maneuver_id.assign("BIOYDJSULBQWNLYWZJWWOLBQZOCEUHRFBVXKTRLTHQGNYGAFVKYHXZDDGXULIZGIIHJERUARQXNFQOCLKBPGXMLAFBPIPKGDEBCQMWACZJSZWSMWNCAPYSZVRKOMTJHNES");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.plan_ref = 1011112312U;
    tmp_msg_0.id.assign("XVVTYNTTUELEGOUDQCHFADMTXLQIYFHLLQZCDZHPYDHSUGDGHZLQOZCYOSNKPHPZBINSRRHLMGFEGJYIMXEFCXGWEWJVCAUOTKFOECMPLBTHZYXERBYMDATA");
    tmp_msg_0.memento.assign("ZFMCWSTRRYPFRAVIGDXUAPGEPDBRHVYXNYZKDJBMRZNDMDQTSKVBXWTOQNDZFGMQAUYTOQUWGWVEOLUFIMUZBCASDGBD");
    tmp_msg_0.lat = 0.5447978415847575;
    tmp_msg_0.lon = 0.43680680753465395;
    tmp_msg_0.z = 0.6959212777445629;
    tmp_msg_0.z_units = 144U;
    tmp_msg_0.radius = 0.29063471715822053;
    tmp_msg_0.duration = 902U;
    tmp_msg_0.speed = 0.3832694498447162;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.custom.assign("NHBSXHCIHYOGLULRICTLOQQKRYBJFQVQJSFDAXZYQGJJFCUUNLPMWEABPDVYDYNIGEECSYQKVXUWCPFUVWXOYIZUHFFBFKCZZRNJTDXAGLTXNVGIIWEBCOXCYJGWOUAGDAEORFKUKOBGMKYTLHBFAVJYPOBDUBRETTVVIZEPWLKSIWHVMLLSSSPVATQUXZHAWPJQSZNNRHKZKTXWJPCICMMKDRMGPMIBH");
    msg.data.set(tmp_msg_0);
    IMC::StopManeuver tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblEstimate tmp_msg_2;
    IMC::LblBeacon tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.beacon.assign("RMGYCHHBNEZMDZFYIRNWLSWPEUZFWKNTELOOUEPBAPTPNRTRXWILDUCSTJIOSRKTWADMABYRJDMDVWLQWXGCCLYTQRMJAJKYBNPKFNGCYWXVKXUQLBTQUUDZFEMADGHMVEFYDHYVCQLBMUGAQIIVQGZVGQZWTSFXHVKZBIOXAFRKDEUTLJLYGDNZPSCBMSS");
    tmp_tmp_msg_2_0.lat = 0.4007958365530637;
    tmp_tmp_msg_2_0.lon = 0.279549396770465;
    tmp_tmp_msg_2_0.depth = 0.5843016742094197;
    tmp_tmp_msg_2_0.query_channel = 116U;
    tmp_tmp_msg_2_0.reply_channel = 132U;
    tmp_tmp_msg_2_0.transponder_delay = 240U;
    tmp_msg_2.beacon.set(tmp_tmp_msg_2_0);
    tmp_msg_2.x = 0.31283489141795773;
    tmp_msg_2.y = 0.5879027217094196;
    tmp_msg_2.var_x = 0.22365591743447655;
    tmp_msg_2.var_y = 0.9810359366542181;
    tmp_msg_2.distance = 0.04851934716202877;
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
    msg.setTimeStamp(0.6146768151585914);
    msg.setSource(24485U);
    msg.setSourceEntity(45U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(24U);
    msg.maneuver_id.assign("RKXEUVQKYJNUVLUOMYJVHPBAIZPRRGLBPKFKHHPBUNLFCYLGXQWAGKVIQIWOUZPPYQJSTDDSFIXMQOMLCFTHUJNTOPSXUEX");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.plan_ref = 2893061204U;
    tmp_msg_0.id.assign("GQQVCBJJLAUUHANVOIXOXJDAMDYDUUFNTLUYCCWGNIDHJQZCBXJOBRC");
    tmp_msg_0.memento.assign("SPURKXQAYZLMZJXPDCFCMHMDXQBCTLPXTXFRJOTFABWFGIVKPZWOLPOOSAEMIXHHNIZUKFKSYGTOHWRROEYNAIYFWRDUCWKVYQLWBQVNQEHJLGSWHLHVLHZQCPJVSCJKEDKQMEIPSBLU");
    tmp_msg_0.group_name.assign("MVVDLGFXCYMKZCAYENSOEMVPPKQINBTJZZLSLQAOZQBKIGZJKGPGKRPVVPFWYHEMTMXDZBQVGAXCWCIRROLKJNFEGZHAHORRQCLIEYTYHOWDYNCEUFWIWWLURHBUJXAPIDKDRFV");
    tmp_msg_0.formation_name.assign("TGVUKQUGHPEFULBVEPYOMNZPCGFQMVJHYLEJWLTOCOYDANMZFSRIETJOVKTMBXMJKGYR");
    tmp_msg_0.plan_id.assign("EMSRNZBJXYSKTQ");
    tmp_msg_0.description.assign("VDFIDZXXNLNDCGSZDFUKPXBXFT");
    tmp_msg_0.leader_speed = 0.5099067008113084;
    tmp_msg_0.leader_bank_lim = 0.3056053052860387;
    tmp_msg_0.pos_sim_err_lim = 0.17849770399399023;
    tmp_msg_0.pos_sim_err_wrn = 0.9288511801200308;
    tmp_msg_0.pos_sim_err_timeout = 20293U;
    tmp_msg_0.converg_max = 0.6215870109586632;
    tmp_msg_0.converg_timeout = 62029U;
    tmp_msg_0.comms_timeout = 10103U;
    tmp_msg_0.turb_lim = 0.9924315521657018;
    tmp_msg_0.custom.assign("ONDUBTGSAWCBSMXPROCGHQVMVRNXFAGCAIYZRXQMTVLLXXAEVHLJNFASVLTUHDSNCRMEWLDJLDBYKZBOZBYVCXFYJXEOZAHQBDRRCXHUEQRZZFHNKIEQJKTGKFJJAWBOKQMNSPKGOACZITQKMMEPUEQJOFWPTPWLRHWLS");
    msg.data.set(tmp_msg_0);
    IMC::CompressedImage tmp_msg_1;
    tmp_msg_1.frameid = 227U;
    const char tmp_tmp_msg_1_0[] = {68, -37, 117, 125, 39, 98, -126, 101, 66, -31, -26, 39, 56, 62, 22, -98};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.9719022092489208);
    msg.setSource(7497U);
    msg.setSourceEntity(21U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(246U);
    msg.maneuver_id.assign("AQHJGSIVBSEPVMBMJQXOQKIIUFLGTLIAKQYCKTNPRXGVTOMWODTCDPNVHYLUVJPFSTCDLIOZUBI");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.plan_ref = 3557087053U;
    tmp_msg_0.id.assign("SDCMWZBRVJKXXTWAOCJUTKPQILHITBBBETNXEFRIOQGDLQMSZTCLDJHYNSIULUUYCAHNEILDVKTGSVXQRDMVMNJSIUXPGWPIBVOUXGAKTJVDIDECAFROOPFFBXNLGXZZGAEHAFOYNQUVYNMJHCMWNZUZWOKWCRSEJPVMDJLBYRSJVETDKPIRPYWSFLPHASZOTZAIORNHVUKBCYGHHKGEMCBOXQXQAPW");
    tmp_msg_0.memento.assign("BDMJRUYGHTVOXQCXGMBTAZBUGDCJPAYEIJLUHXVARHPWPBYMOGSW");
    tmp_msg_0.lat = 0.5840346388579535;
    tmp_msg_0.lon = 0.8670893552311024;
    tmp_msg_0.z = 0.35061828509151804;
    tmp_msg_0.z_units = 101U;
    tmp_msg_0.speed = 0.2594674820798678;
    tmp_msg_0.speed_units = 161U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 37229U;
    tmp_tmp_msg_0_0.off_x = 0.9964000764485913;
    tmp_tmp_msg_0_0.off_y = 0.44779509950257845;
    tmp_tmp_msg_0_0.off_z = 0.5227115533036197;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.833848839820716;
    tmp_msg_0.custom.assign("TNJYDVSARCNVQDGYTIEPIFCCNLLIDWLLVMIX");
    msg.data.set(tmp_msg_0);
    IMC::RegisterManeuver tmp_msg_1;
    tmp_msg_1.mid = 64576U;
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
    msg.setTimeStamp(0.6165493095997506);
    msg.setSource(12110U);
    msg.setSourceEntity(34U);
    msg.setDestination(14369U);
    msg.setDestinationEntity(10U);
    msg.source_man.assign("PCZITJEHXKYRHCSOAPOTGXGNGRZFJJBPAJANGNVTPBADNKNKDGKWKTCUBGWBVIWMLTLFCQVHPARBEYPNSAOYXLOMCPSH");
    msg.dest_man.assign("PUGVMGWXFPFQQSYBXETVWSAAOAGBKEUDSQWEIANQZRTEBXCPWPDVTMKGJYTPFYKRHGPPSWARYCGCJPYEZVBXDS");
    msg.conditions.assign("MZOEYJMYXQTBXCSVXDQWEHJQUSBBXDMWHPCPBEBOHZFPLYCFNRJAOPVWXBAKMGJVROKLMDWFUZYFIHDIZIHSQAIYQDHUUQUHACVAZJDKTLYOLSTHZWXRNIMIBGXKVFGEOTKLALGPZUZCAFKMWPFWFVVJQMGWOSNNOLJYVIBYDSTIZGLWAYTBETRDJVBKUNKJROFXQ");

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
    msg.setTimeStamp(0.3675896446034539);
    msg.setSource(40669U);
    msg.setSourceEntity(102U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(125U);
    msg.source_man.assign("NGKKWOZAMXUHETTGYRZKGZVEIIZGIEDTGGBKKXEAMGGJFMWWBDFXVXHMZTICDPRDIUMQVPYZSFYRSBABQIZQNPZEUFBRGSDZWCINMJYWFFLVLZCNFVVAEFOVTIUFHCSAASRMCYNLUXTXSUJPLYPCUVRQOQAJJPLDKTKIUHOYTLKOUOEBQLYHNAAPXPVBJGLOETSWHQHRXOWPSXTAMQBSLICMSCFHHRRLHM");
    msg.dest_man.assign("HFXUYHIZZEHACZBSVDRLEPCXWNCYYCZRHTFKFPRQCIHXAWLVYQMIKUMVWSOGJNWLKQMJELTSICGRWZVWNNKBPZRBIQSDRYOPYLFAMSJTQDIQGPWEUGNHSVFSFFEXVOEAXWFCJTGUTMRNHBMFQDAPMOJODYBANIMIJJVYZTVPEZUQV");
    msg.conditions.assign("KZMYEZRWYWWGHMVGFSSMPXZRBIUDAJFXTTJIKRRYEFMGAOWVOOTWLAEQXZHHQZFRVLQQBPUQMUUEGKYUXEIONMCUEVRHPSLLBNHGPWNDODSTLQKSCTUXUBDBTOIPVWDIMNEEPTIIFNJEFNOCKLMCIAGCVSLCCQODVYALSONFBQBGJVASZJSNCEPBARXZWHPSDTDYQXRBGVPHWWUAYZDZPNYLTRMHNYGXJGTJXIJYKJLCKRDFZKABJMXOAK");

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
    msg.setTimeStamp(0.6002539751069338);
    msg.setSource(31347U);
    msg.setSourceEntity(70U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(35U);
    msg.source_man.assign("URDVINDTEZTHGUNMHXNMTXQVQOKINROOIVFBQONQAWFNLAFQIBTQKPUSMRSBJMPJPAYLBXWIROVGETFWTUNJYTKGZLVAGKCPCGHSXVMVWNGZJFOUQCIZFYSJPQTKOHZRXPOCHEOSBYL");
    msg.dest_man.assign("ZBNDSHMFAJZEMXQISGHRNQAJPJDDGTCWFJZZCXFTUXTXTBHJOIOPOPSKUXKERQUXCKPQMYWBMURYZUHSBSICNLHAFWJTYTREEWQBRYYMUADHIGBTLLEVOJZCMASOGWQQSUGLIRFWEZANFOCXPYDNPJALHKEUFGSYIDEKHMCWDNPUDMANVNKWEJWFQCSVASVRD");
    msg.conditions.assign("OTCSRRBPPOSAKOZDGSJTMOCPEEMVYRYLXXQSXFOMYZNFJEBEGHWHQCSBVPQFGTV");

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
    msg.setTimeStamp(0.6503677050096569);
    msg.setSource(33395U);
    msg.setSourceEntity(121U);
    msg.setDestination(9551U);
    msg.setDestinationEntity(100U);
    msg.command = 119U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WZRWJXBYNBNOMLCDGVLIKPCRZROHYZTUSDUNQLWEIPAWAYOGZSISYCVFVHNBVNKGXXBEEXMSTDDYSRTWUAZJGJQOFQGQIRDBCVHQFMJNLQYYEUYRGOCMWYTTRPRKYVWILKOPSVHLOEAZOZAACFFFKVNNSEEJIHGUIJ");
    tmp_msg_0.description.assign("BKSCCJHOIUCKECEBTCVHMODFKZCWGAVTMJOLHPQWKKPJCXTGGFFKHTGAUSNQVIPQBUNJWDAHXYFZLBPQBYJJFSJROFGNGQWRFGBPBXTCOGAUDDHFKWYOFMIDMQITINAVYVQYIJZAIANESXPRYAQSXEZRPVUBXTLSTOUIZXVABXVEZJPLWONWSWENHUDXVALTGYZDLQTYRZMNJVPHRISYKMLKCCLZPXZSEDOMMLUBHRHFNMEY");
    tmp_msg_0.vnamespace.assign("ZYVQANYLKWCOJPPSDTTNZPOQXEVCMRLXMGHPFHQZCHJZFOIJAGTTEFKFJGQENXIK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SWGDZPBMBWYRUEEAUBENHLVDMDLPPAKYQNTUIAZTTFVWUXCQJMIXXWXVIXZSVHLEVTBRDYFGDKMKSNDNBZLQKVNRGLNJTHUCJOPVRAFGTMIPKALSDELBGSSRWJHQQVORLHSCJI");
    tmp_tmp_msg_0_0.value.assign("PLFJQUBWEPKFMPTJAEFEHSZOMROVS");
    tmp_tmp_msg_0_0.type = 136U;
    tmp_tmp_msg_0_0.access = 83U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VIYFMZHRSMQXDAUMEPEBIQGKZCNNNTDKNQUKLWNDSHFDVZIZJWPJLLJZTZDRJMYHMSUAWXDXLVWCAJQBRUXUWFOEOKSX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KMOWWPOEZIPHVBIIPASAXKSLTVNBS");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 2694891570U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("COGWEZAREXHPDAHTSFNGXOPTRKLELESQOVHNVALWBQCBPASJXISCWLUEJGFBQBUTKSJOTVUGHKDHUHYPBILMMLFDXZQGTQVSKRFEIYTZJIJYHZDQSPNJMWELUWVJNDCGOIYUKRYUNUBOHVXOLBRPARQPVUWKJSMIFCAW");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("EOQHDICFMPDRBDLCKKCXZTBMHTYRNQHKDNXBWUVQLPXPVOKNG");
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("VKJVITTOUWXWDZZDRTYLYGUMNGSWRAZBNMGQXAJAVXPLQYLBNCMHUSZJMJVMKMIYFFQVQJGBXVWHXWANECBBKORLEJPGDSHHEUCUQATTHSTYOVMTPCZDODUGKBBLUSQMBZKLVNHEPWXAENGOMBZILVLBSFHCDMIZDCKFWAHRFOYIRXPYFKIDJEXJX");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("PBAKVNCISDJGHFFNYKTDEOITTYOVDMNPPMOHSQWTBQSWKOL");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("KJLWOUOCMP");
    tmp_tmp_tmp_msg_0_1_0.description.assign("QKIDPHRYZMGWCFSTTYPJCIEMPXYRMLABHWSFLAPODJMUVUYWSWSUXDTNRXAUAPFUCTPFTWBYXAPPZTOOLJRJQQCQBSBKBVQNAMWTHDLBDOWIIKIQZFGYDVEANDLTJEXYEZHDKGUMMVLBFVNHRLBCCWRSWOVYXVTIDVRGRNLQJKUOGKUMBZDXOHKHZKJWHPJCOCVEMFIJXHSNXEANAGUEQEFQFCGSCRLOQZIYEPXGSYNZZOGFLK");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.6569170275400547;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.9195004244005718;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.02687991978640314;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.35338509887729674;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 33219U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.21735438570383925;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 39080U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 47864U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.4262809391205433;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DBZCYIAOXAOZARTDDWBDKNKKHYOBCSMVEQFYZLHKWVTGZSUMNVCFVROQKH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::WaterDensity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.49523910841498;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("JQQKVUCONDFTLHOPMHSNJYWKOXWFMYXLOPESYEDTRZSEUTUWRIXBDHRAMQUWLETBDCULYXIRTVJGQSDFVUFAVVWUZQCQNA");
    tmp_tmp_msg_0_2.dest_man.assign("ZYXBKBAQETKERNCFKCGLDRYSJMRIBKNHLPDWFWHATGMVFIN");
    tmp_tmp_msg_0_2.conditions.assign("UAGPTDXENVOBGWRYWWRSFEXBNSSEIHHDQLCENGMGGURSLIAJAAHGNKMPGOXUUPSFYTEQITRCJGJGVAZBUXOZMHLRTATNPLVCGTLKNXNIWKHMVZQOVBJPNIHYVBCXZSROSCJTEJFYYFITPWPKFQKZIWWUUPMILHQAQYRKYYWPQEBDUBRKXEDB");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::GpsFix tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.validity = 39172U;
    tmp_tmp_msg_0_3.type = 139U;
    tmp_tmp_msg_0_3.utc_year = 53491U;
    tmp_tmp_msg_0_3.utc_month = 206U;
    tmp_tmp_msg_0_3.utc_day = 3U;
    tmp_tmp_msg_0_3.utc_time = 0.5798208728762003;
    tmp_tmp_msg_0_3.lat = 0.6897023204716313;
    tmp_tmp_msg_0_3.lon = 0.5877545111729806;
    tmp_tmp_msg_0_3.height = 0.3637699579179996;
    tmp_tmp_msg_0_3.satellites = 124U;
    tmp_tmp_msg_0_3.cog = 0.6117470057053143;
    tmp_tmp_msg_0_3.sog = 0.8586785256816286;
    tmp_tmp_msg_0_3.hdop = 0.2890936095529534;
    tmp_tmp_msg_0_3.vdop = 0.36376813077176795;
    tmp_tmp_msg_0_3.hacc = 0.2037704078260416;
    tmp_tmp_msg_0_3.vacc = 0.42305458584985456;
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
    msg.setTimeStamp(0.5410988051966613);
    msg.setSource(12917U);
    msg.setSourceEntity(17U);
    msg.setDestination(52219U);
    msg.setDestinationEntity(199U);
    msg.command = 85U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DBFCSPJKEKRYAFPUOYFBOHOMWOHNDTORVTZQYTJKLIFPSYLEGCQNJVXOXILYLPWAJQALNWBNXBRDUSCKHLSMIDDPVGNXWIESSSWCYRRRCVYVJUGFLLPCWZNKFAMHDUUSTFANMEEVFFXIOBRIHECWTLYZZHUJDQVKTJQWAHNYPETQIXRPMQEHCVKTYAMUIKGUZPBGNSAZLERHKQJQJBGXDFZKDGCVRBIWE");
    tmp_msg_0.description.assign("FYBHNASXSXJDEDVITMQNSSFDEAVLTJVIGUVESZWKJPOOOUPRTDLJDTKVJBKJQZXPPZYVBRSZYFZEMTLUTLHAWMUAAFICPPCUYMNFPMXSIHXNHJMYNNKCORCQUHNHGVPTZGAEXICKAFLRFGQRNQGVQDAHKNERWBXIKLBDGTFHXXZ");
    tmp_msg_0.vnamespace.assign("SEZFQKFCLTJHXKQOTMKXCNBZGBGNPRYMNFGCQSPBQUZPIXIVVVXKWTC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MJCCBJQTNBLCFTSUZGIBSVEQZFSLCFIONBDUIGLRTMCLEKVVYSMFKFWDWPJDLESQYEWNARKTRAJFJUBQRAGSKXCBMHWIRSAXQPHIBEZXJNGHXYKQMKCTJZPPYJQGZXDIHSIBONVOZYVMPCOKDPXDYZTELLKAUMDSUYLWQFQDJLFOMMOVTAWDXCOIGTWZYVJQGEBRXRTUSKEHPANHOMHFEUIHXGBVWPNO");
    tmp_tmp_msg_0_0.value.assign("JPXSWVHMHZDCWABSLKZOJSFUCUANIJ");
    tmp_tmp_msg_0_0.type = 146U;
    tmp_tmp_msg_0_0.access = 41U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HENAVEWNSNWIJJYYPWHRKPGXCLVZBUTTZVALYJPSCGDZDIKRUGHQSRACBPXCUTLWIHZQFBS");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GPTYXXLNEXFWWVERCYBUOLRJWBIGGJNVKAHOELTQZEKFRVJMDPDIUSOIQHRGCAYJXMNPCDAHXYZMSOR");
    tmp_tmp_msg_0_1.dest_man.assign("FEKCOXJGUINUYORTKMHNEHDCHZLRESCGSKFBCJZLXIFRFZHJVPXWXFXKUZQRAXNYGWLSKWLEBQSIGHNQAMIYBNIEMEWDBAWHIJV");
    tmp_tmp_msg_0_1.conditions.assign("HCHGWMYQHPXRLIXTCYJVRHSJSSEQLFTEFLBCPUYSOASVZVZKTVYRXPBZNMMHOGFQVIQXQEWDKJUABPJJABAFMETDNQYOHEDJBWTPMGNACORUDXUAZDYSHLXKLMVWUTIPCIOFWK");
    IMC::SmsTx tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.seq = 1241397051U;
    tmp_tmp_tmp_msg_0_1_0.destination.assign("BYGEIGZYMRWWYUTNACXSSUPCISRGAWRZBGJHFVSLAJKJMHSFGXTAMBQOZWJQXPRSEJOIONQLLAYTNKODRXJCFZODCBGKYFIOIQCKW");
    tmp_tmp_tmp_msg_0_1_0.timeout = 15692U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {-43, 116, -77, -61, 118, 1, 27, -9, 113, 71, -14, -79, -80, -95, -34, -10, 32, -58, -96, 92, 81, -55, -85, -78, -82, 62, 2, -86, -105, 29, 57, 27, -35, -111, -33, -44, 13, 40, -38, -95, -111, 86, -71, -61, 41, -26, -53, -45, 21, 119, 66, 47, -47, 122, -21, -51, 55, 27, 110, -7, -38, -89, -53, 69, -46, -116, -57, -73, 122, 76, -112, -41, 83, -18, 48, -84, -17, 56, 7, -90, 111, -23, -10, -62, 19, 30, 24, 10, -32, 119, -47, 68, -125, -114, -36, -107, 25, -101, -16, 66, -79, -114, 87, 66, -91, -75, -74, -119, -125, 2, -64, -18, 112, -34, 70, -4, 2, -93, 40, -95, 101, 53, -116, 71, -90, 118, -51, -12, 42, -84, 115, -31, -39, 72, -81, 95, 50, -31, -48, -107, 109, -91, -21, 43, -123, -52, -10, 18, 114, -64, -60, -29, -91, -22, 37, -73, -25, -87, 110, -90, -67, 30, 123, -60, 9, -82, 18, -72, -54, -45, -55, -106, 8, 15, 29, -106, -57, -13, -74, -41, 14, -40, 104, -124, 77, -53, 7};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::RemoteState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.07705693608899045;
    tmp_tmp_msg_0_2.lon = 0.87430637934136;
    tmp_tmp_msg_0_2.depth = 172U;
    tmp_tmp_msg_0_2.speed = 0.08911205861819749;
    tmp_tmp_msg_0_2.psi = 0.15456020654845903;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.2869079610017544);
    msg.setSource(50637U);
    msg.setSourceEntity(143U);
    msg.setDestination(35124U);
    msg.setDestinationEntity(97U);
    msg.command = 152U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KLAARWVGCWYGPIUIGEYKEVYOUFGRAGNIRKHKRTJMXXCLPUDZOUCMLTYZLHXOVROINHWEAXJXBIUPWAQHVJSTTDEQHFPXNMOURBEVJMLILTNFNBQNPJMQTVGVLKMSNITXZRSEJABSZCQBVCDJBQDHSPZOZKUNHOZ");
    tmp_msg_0.description.assign("SJYBGBQPPYNFXIMMEJVDHZUVZNYZ");
    tmp_msg_0.vnamespace.assign("MTXTUJYKHZGOPIUGCEPGYZEFDVWNLJCXEXVCACPZADCWQYPZRFDUKLJVQHFYRILFNKXDBOLOBGZSBABHXEZFJGXQCIQWOBTQPAYALKSVKWSAFUWZGWCYDKZAWTNCSKZDLTMTAWJTUMLVNBNXDXVIEHJUIZPRYMEUYDESEGYQJAFHPCEJUOVOTPM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YYLOAUVWKOUQNQUPHSPGKNJNASZDTHABEWXNQYUOFDDCMFEICMLMTJDXKBLRZBCBUBXSWCUVNBLPBWYMPXIEANSZVSFZBNVZVCKHKLFRCQHJGLDRUKTSNARPJPVYMYNQPMYMWGJQFSFEQRRIVXTUFTISAFDWFRXJXZGGDGCYSPGZMQKTEAIYGHHOATVWOPQXIZDJTZAOTDADHTFWGUPZUEKBMMJKCRCEHVWJLLENRCOSJEIIBXHWX");
    tmp_tmp_msg_0_0.value.assign("JMWPGYCCDLEQSMCCRJXZPNFYDZEIYKKVPXSOMOPLTWWIKPAMGOOVTCAIFZEUFGFDZMHXQXIVLBDXDMEHZBTNGXSLTBUZWHOJQYVBAGUVXOALNKETATQYVCDPRFTGDCZYECWVANCOSRSKZWHNLU");
    tmp_tmp_msg_0_0.type = 170U;
    tmp_tmp_msg_0_0.access = 47U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VRTKQHCVSXRHGYRLIIJKKIBABZMOOHWLHBZAFURGSZREYJHNWYGDKGSWIQEPUFMOWUUVMLVOERQCCJPTTYYPNUNDSOXZKKASYWXZYHEPIGQHBXXKBHVASJCUPOXFKLQEPPSHEGRWKONLVMTPWYAROGNZYIWNBZNTPQJQZSTDHGMFVSNPYZMACGMJBFXAUDIDUOVKMIUFLWLEJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("GOSFAUADVYWHQEJVPVTELINPZQBVBFLZSDIVFTKLYHDHSUDXOPXOGRFNTAXVLCHXVIWEXNYQVRTYGMKWHIUIHQDFQMBQKPXAFDSUKDCCWJCBQJPUHLZAUJTJPBMKREJDNORZBXNCLEHZYMZFSIJELLBMZSYWOBVDWWMREXTFOTD");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 3974830626U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("MTBKUTQDYVQNUEIZAJMYPJWUGERQRPVXWSKDAZBHVFJIOABGJHLJSPPXQDUQVYHDOZ");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("PLERFEHAEWQIBCTLNGJXUTCKLQPSBPVEVUYJCQCOMFJKTIMIANZSDHOYB");
    tmp_tmp_tmp_msg_0_1_0.timeout = 65250U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6095113403657709;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6807386371427472;
    tmp_tmp_tmp_msg_0_1_0.z = 0.22287012796672967;
    tmp_tmp_tmp_msg_0_1_0.z_units = 117U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6573534122722637;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 191U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("QMRFJWBKHYLQXBROUKVEKDRSICHPQFNEJDFXLLPFZWTGRQVVQAAIYZXRFIVXODFIJCHVEYAKYMNRTOXPIKTQEEJWAVZSAZOGKECUYUXANSZZYELHLTFOWPNTOOXNWMIGFYWNGTJCQCKROTGAZOMPTTYEJCGRDBKUVJACTGMBCDHNEYXVVZDZBMCWBNADIHJSEDFSHHXQWRIKGPRPZAVUGKMOYHQPMM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EmergencyControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.command = 102U;
    IMC::PlanSpecification tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.plan_id.assign("XGAMDPCTWNRCBXXCBDCFIHPSXZDZFFINKGXRJZMGOJBMZECYLFIGMXGTZBKNJDQYYOFDTPAJUU");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.description.assign("LUEVXNPKVUSMFRVWAOLBIXXGXDCQJNRZHYZNZBPGUBXFFBOXCCQAQXMSWKFEHZLIVKYCPIIKFFKAHSQDFGTLVBTRQMOTXTWWXVTELUMLYTCJSPDMZOZHMJKGQYVQJOCQFBWSKICWDKPOHHGRHEPEYMWSZDGHTSLVBEMPUDINEDGLATPIBEZHWHFOLIFNSCSAEUUNBGAWWZOYUAVGYDNPITKQENUA");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.vnamespace.assign("AXNDEJVCJBGZZEJNNBVFJWFXJTQBROKJMVKJIURYKJZECHGMLWIFPLCKRLTVAYPMAFYMTACKCUPRCWGSQLVQDCVSSZRHQOKSYHQRDQHZSNDISQMXVKITKLBYXPLWENUDAPEGIDIVQZSEESGSZUPBRTUAQOBXHHIMPVUWNEGMKLTPWJPKYFFUBZACHNGOPLUOHHFDXRLWYCMROFGZANFOTW");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.start_man_id.assign("TDDMVCHTZWRSEZBXLWKWHQISPXJKFZAOMKAWUCDOIOMNREICYNTMEWAEABEQGNNDAIKOFFYKBTUWSSJJGKIROSUPLJHVJFZPDYAQIXFIHDNPEFLUVEGPNVCVWZLQJMXHBBPCSYVYKPTQZHUYLHGKFQHSLOOSEGAQMFUIOXXRDXCAMXECKTPZNGWC");
    IMC::TrexOperation tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.op = 65U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.goal_id.assign("QYAEWPVYBMFQPAQSNLLJIZKLDYCKWPPMCHNSVQHQMVLMXLFDLMUGBFMLSGAGBJURPWSIGWWROABGZHXWHJNTFTEIXSRERXVWKMBOJYTFDK");
    IMC::TrexToken tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0.timeline.assign("IEMNHKWZBHTTTOMHDGKMSVYCGRUHGKPSBOJJKFFQLDQPBAAWXHSDHNISXXMFWSVI");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0.predicate.assign("FVECHOOUABZHTUQRMIKZRCYTJHKDIMBSMYOEDKZGPTWJQLOIMBIIBXINOQYMHXNWDIPLMGPQADMNYCAOFSFTMGRDXEZZJRECGQDXXNKGIVHQVUPBCVUFSEXVDLYLSW");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0_0.name.assign("YGRKCHGQAYCDRXVNHOMVMDLBVQULNERIIEPPUKWUFNEBUAQDTTFJCRCWMTPBIBWFSZZEUZJESJVOQWCPPKNOFOKULKIWAQLYPOJGMQAXPBABLFYAGHFMOWEUJCLWSOUATBIDASIXUFSOMHGSWGSMKERROLNGYAKRAISHNZXDIFPVRZINYSRHHVXZCZZXFDHVGXDQJZJKTBHIRXTYKMEBME");
    tmp_tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0_0.attr_type = 193U;
    tmp_tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0_0.min.assign("XLZMHNOVJLBETWJNFZCXGEONAJLSTKBYPDJAQHFPXIVHHEFOBSKOKDPQRFAMOHPNYKZIGQQYRSNXDLWOW");
    tmp_tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0_0.max.assign("MAFJMEBKIPWQMBVJYOPTTZCQUPNGKXN");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0.attributes.push_back(tmp_tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0_0);
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0.token.set(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0_0);
    tmp_tmp_tmp_tmp_msg_0_1_1_0.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0);
    tmp_tmp_tmp_msg_0_1_1.plan.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Voltage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.6903251690304525;
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
    msg.setTimeStamp(0.7294295725738372);
    msg.setSource(9185U);
    msg.setSourceEntity(91U);
    msg.setDestination(52057U);
    msg.setDestinationEntity(53U);
    msg.state = 40U;
    msg.plan_id.assign("BKNVMSLWXTSUFTEVGDZPKVIXVCMKEXZMNJWVHHYCICUCBJSHMTTKIJSHJSRGTOEQDFZWPRHAFBPEZEOVWOIORJEPYABJJQJRHKFTGXMAKEQIQNPKMIUPRAGIGIF");
    msg.comm_level = 11U;

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
    msg.setTimeStamp(0.6581007420953752);
    msg.setSource(21969U);
    msg.setSourceEntity(97U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(77U);
    msg.state = 96U;
    msg.plan_id.assign("NJZKUNUUPKSYVTYMUCXRW");
    msg.comm_level = 138U;

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
    msg.setTimeStamp(0.17361366405336542);
    msg.setSource(53847U);
    msg.setSourceEntity(235U);
    msg.setDestination(1448U);
    msg.setDestinationEntity(242U);
    msg.state = 107U;
    msg.plan_id.assign("JDCHRJXQZSHQAEIDAQNDLHAMQBCDRGLMUSBDDNNFIXBTLEPLKNQJWINX");
    msg.comm_level = 67U;

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
    msg.setTimeStamp(0.003808051490150288);
    msg.setSource(51383U);
    msg.setSourceEntity(147U);
    msg.setDestination(3518U);
    msg.setDestinationEntity(113U);
    msg.type = 202U;
    msg.op = 63U;
    msg.request_id = 3439U;
    msg.plan_id.assign("JIHLPRFBTOORMUDEEPAELUXWOCHKVZMQJBXZQQJWJYXGAPBYFBPZFRMCNGQNBOQLMSOGVNEKAUWUJDAKHQVIPUROEFJXZGAWDCHIWEMCTBOSRRSGCJGKMVZKXDWGSNDTOVPPIWJIJYRXNFKDTWYURSDPXVMZHCQFITMKZIAGHESCVGDYYSQSBZYNZHYELCUHTFMIWFXSETPCWHLNOLPLHDMGQAKOC");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.23869783415282708;
    tmp_msg_0.lon = 0.8246356364271669;
    tmp_msg_0.depth = 0.14839666114643646;
    tmp_msg_0.roll = 0.26014657688188736;
    tmp_msg_0.pitch = 0.9337537520879788;
    tmp_msg_0.yaw = 0.5201954931865289;
    tmp_msg_0.rcp_time = 0.3504321258280386;
    tmp_msg_0.sid.assign("OCYVARUIUPGJDCHENCKFWWFSZSFEUPGRPNQMJSHWXBKYXIVVVOESM");
    tmp_msg_0.s_type = 106U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LKDWBQDNBUU");

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
    msg.setTimeStamp(0.6408703401472274);
    msg.setSource(39638U);
    msg.setSourceEntity(120U);
    msg.setDestination(42030U);
    msg.setDestinationEntity(18U);
    msg.type = 14U;
    msg.op = 116U;
    msg.request_id = 60141U;
    msg.plan_id.assign("HRPXVWEENQOWNQSXTBJFKFIVVYIFNOBJOZCXGUVXEPSFXOQRYYLVKBYPCZSMGAHBLJLRAINXRPYFWEGGAXLSUZPBJKCKQBSCHJPBAMKIKWGOIIKLFJIRJJFBZOKUXGVN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VMDPXSQERYENNG");
    tmp_msg_0.predicate.assign("HDIXSXOAUGDKSFZJIQGEKV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YDHJGOBVDWQQHIKWMKYBMATCWAIIONTDJNXBXPVMSVEWIBDJCXZHNLQYQPNYVZAQSSZNRGURZONWPKYUCGFVAEAAPXOMKYTYSTWKGRVBLPFDSCRORXQHTDJXEJKFLGANUYQJQSTDPEYMUXLBTQEROLHGUNWVCUPZWLUHWORLKSLALKJBCICQTZFFDCMWSBMIFPSJJCJOAKNREKGHEZONYBHXO");
    tmp_tmp_msg_0_0.attr_type = 165U;
    tmp_tmp_msg_0_0.min.assign("QUCGJQNAYRUZZEADMYAIUUBKRXAYFSSRNWHVUVOEXFQXQGKYULOQBTPOCJMIGLLDOIYQMNZWEKZIYVIIPTQRKSTHIUFTJDEMUAEHHFJVTGXNXNLFMVGWFHWLLWHGMNBXMFTACEAEJFDORAPQQVSRCHBMVGVBWFYGXUJOHJBPTKSPRZHKCKNOCDMCSCNGDLWXAXZWPGYSARBMIDUIWXTZPDDRYONEJPHKS");
    tmp_tmp_msg_0_0.max.assign("JHJLWOAXRSPGMVAYLYGKJJBBEZQVZRISGZVBWULRSJCCGIULKOUUBEFMQONFTLZAENMBDWAKHCRURSENRDOALFZBURGXAYDKINXPPSQDDCHTNVQNPGLMOJGTPACELZYDKQKLIRZMNZFJFYICPBXNOENCWWEWK");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NRBEPBUWMOGCBSTKDDSFRWADSOAIEIWTLFSJXPMCAZVRCZTWOQVKVWDEHMQIFFFJBXZLBLTGPQCJUGCNVQRQIGCJIILQJZTXHRTAWOLNXONXYZASKHHYDWHAQKMQAYKRBASQFPUTBMH");

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
    msg.setTimeStamp(0.057108481899978525);
    msg.setSource(16888U);
    msg.setSourceEntity(206U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(136U);
    msg.type = 12U;
    msg.op = 41U;
    msg.request_id = 36737U;
    msg.plan_id.assign("DCXFWPDKOFXIRHGMPMNAJLFZYJGDZFSJBYGXATAWOCJNSBMDQFGQHLFSMEIRESOYCMIGPEKMFJKZUNAVLHWTCQI");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 133U;
    tmp_msg_0.speed = 23043U;
    const char tmp_tmp_msg_0_0[] = {-47, 43, 33, -39, -78, -18, 34, 57, -106, 74, -122, 69, 12, 25, -107, 123, 87, 5, -77, -72, -57, 113, 122, -9, -102, -28, -99, 46, 97, 53, 115, 6, 16, -87, -72, -87, 81, 71, -54, 104, -23, -80, -13, -98, -60, -33, -48, -126, -32, -116, -2, -117, 53, -18, -47, 18, 35, 84, -126, 35, 86, -16, 48, -81, 112, 1, 19, -105, -97, 48};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HYABDSYNXYFJPITUBHNAHNERHHPDAGYMTPLUUUNYZGWYXVDIFELEKISSJQQSGURMAPBLSVOEGLQPXFCJETUVRQOMNTZVMXMIEQNCFKZUMFCQZAVFDDXOITKIIKXWJJKASGKZZXDVTVXTPRDUOUBWOUHOEGXB");

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
    msg.setTimeStamp(0.6824515670447292);
    msg.setSource(29101U);
    msg.setSourceEntity(125U);
    msg.setDestination(9613U);
    msg.setDestinationEntity(54U);
    msg.plan_count = 63459U;
    msg.plan_size = 3966986651U;
    msg.change_time = 0.5562687824869716;
    msg.change_sid = 50967U;
    msg.change_sname.assign("CDIUCKPRKZEEVSZXRMGNHVI");
    const char tmp_msg_0[] = {79, -87, -107, -16, -17, 46, 115, -75, 17, -52, 109, 90, 96, -69, -10, 62, 40, 79, 4, 64, -116, 119, -76, 81, 86, -53, 95, -10, 57, -120, 92, 6, -110, 17, 125, 43, -33, -1, -39, -119, 91, 75, -42, 101, -126, -98, -87, 52, 92, 3, 116, 48, -92, 91, -18, -1, 125, 120, 67, 43, 121, -67, 12, 34, 97, -23, 43, 71, 84, -111, -26, 47, -57, -122, 32, 55, -18, 62, -57, -48, -28, -33, 31, -91, 104, 110, 96, -72, -112, -64, 52, 120, -67, 77, 108, -99, -39, 121, 100, -6, -93, -51, 87, -94, -110, -14, -24, -100, -102, -124, 80, -80, 86, -96, -116, 121, -108, -26, -57, 100, 6, 58, 35, 125, 45, -42, 68, -37, -101, -38, 27, -14, -84, 33, -34, -100, 114, 75, -96, -91, -48, -116, 11, 122, 34, 71, -16, -126, -27, -49, -16, 62, -80, -23, -53, -65, 22, -91, 73, -123, 115, -69, 36, 1, -19, -100, -103, 125, 27, 94, -114, -40};
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
    msg.setTimeStamp(0.32303152926407663);
    msg.setSource(25357U);
    msg.setSourceEntity(167U);
    msg.setDestination(43168U);
    msg.setDestinationEntity(147U);
    msg.plan_count = 6901U;
    msg.plan_size = 2013279888U;
    msg.change_time = 0.12852076267105927;
    msg.change_sid = 29519U;
    msg.change_sname.assign("IZHVOTOWKGAPVEQPAMZRYIDQZNJGHDLEXXJFEWQHEJBSZUSQGTXRSONSFCHQIYJFXZNGVVKKXGUKRMLUTYWGEBYAPARHUKYEZQCLLKYLCQYIDRJJTVTKWTPMWXFNAATLCOPMWETRAWIZWKBDMFNUHYQKCCBXPOLQXFAEY");
    const char tmp_msg_0[] = {-90, 5, -6, -67, 90, 44, 96, -67, 98, -10, -127, 40, -59, 81, 108, 104, 49, 17, 19, -76, 85, 95, -85, 74, 3, 18, -21, 107, 21, -100, -52, 28, -119, 26, 50, 102, 33, 61, -126, -48, -79, -7, -79, -37, -107, -15, -10, 41, 61, -14, 38, -81, 49, 101, 18, -122, 15, 83, -10, 16, 56, 17, 68, -73, -27, -5, 47, -44, 100, 23, -22, 105, -9, 36, 83, 26, 86, 39, 39, 88, 100, 115, 2, -19, 43, 87, 42, 119, -85, 91, -80, 11, -2, 103, 126, -63, -12, 99, -112, -39, 92, -113, 107, 106, 49, -39, -80, 86, 28, 78, 35, -68, 19, 13, 55, -73, 42, 69, -124, -9, 105, -46, 80, -35};
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
    msg.setTimeStamp(0.9452992019419931);
    msg.setSource(34911U);
    msg.setSourceEntity(132U);
    msg.setDestination(20898U);
    msg.setDestinationEntity(18U);
    msg.plan_count = 55987U;
    msg.plan_size = 2364880582U;
    msg.change_time = 0.280703711888836;
    msg.change_sid = 33844U;
    msg.change_sname.assign("DAONXNKXFNKDVTFEQHFEEHOHZIEHTKXVSDTYDQPGMIRAWLINZMBYSHUALLCHIUOFKLDWSUYRGJVNBMGFOEZCWMQUZVSZOHOIWITTLZDNPIXQTQMUPYVJZUPWNSEAGVNJPKLMDTQMQYBXGAVXEWGL");
    const char tmp_msg_0[] = {83, 54, -95, -60, -10, 114, -78, -109, -22, 12, -100, 91, -20, -116, 89, -3, 117, 14, 80, -86, -122, 94, 119, -20, 11, -116, -116, 24, 75, -56, -68, -76, -81, -88, 117, 111, 99, 75, 48, 46, -29, 24, 31, 78, -64, -64, 10, 25, 39, -54, -46, 27, -33, -22, 108, -21, -93, 13, -27, -104, 60, -85, 79, 31, -1, 53, 77, 46, 0, 49, -11, -26, -70, 62, 73, -30, -113, -61, 66};
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
    msg.setTimeStamp(0.9810739691529385);
    msg.setSource(12728U);
    msg.setSourceEntity(159U);
    msg.setDestination(64450U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("XNUZNVYAXAKLOKGGTNFURYJTJDSIQKPOVZMDHAXLOEINQKSKHPGWRLCIDIMRYMKHOSBHFNHMLUFUFZEJCZNOQIGVSLLXBQOPVMXEIPRNFGSHDCQXGTERVCTZJWGBBJQJFCECXZDUGWDDOLBVIYEUPCGCBWQJAB");
    msg.plan_size = 61582U;
    msg.change_time = 0.5779985511492245;
    msg.change_sid = 41599U;
    msg.change_sname.assign("YEUMPIASSXKAVZZHDQYFOLTCRQYIIMEPOAGWQKQNBHXEVWPSBDKZQUILDRNHUARVBVRCDRVGBTYAOGJJGUSTSYDJEQEGEXQYJWZENVWTMPGXWFMPFKCDCHXPZCWPWBFFCCAKILFNXCGWJTNVMBYLYLRXZUTAECEDWJJRUAMLLMOLDTONIXYHKMBNZFSZURZDFSIKJUBJQLKTPRIHLKVONPUBGVPUAINAHYCSGJ");
    const char tmp_msg_0[] = {102, -98, 21, -83, -81, 122, -116, -117, 16, -121, 116, -45, 117, -79, -5, -117, -42, 84, -106, 10, 6, 2, 29, -9, 27, -54, 76, 86, 95, -58, -55, 88, 74, -106, 90, -97, 23, -95, 106, -113, 111, 18, 66, 74, 125, 43, -27, 51, -89, 2, 62, 101, -119, -123, -84, -67, 60, -61, 38, -94, 29, 50, 88, 87, 71, -92, 78, -63, -67, 120, 15, 7, -8, 63, -84, -3, 7, -42, 25, 70, 107, -50, 21, 108, 27, -39, -1, -128, 102, -106, -81, -87, -96, -45, -67, -107, 76, -18, -68, -88, 73, -16, -89, 23, -98, -77, 38, -118, 20, -128, -4, 26, -54, 3, 37, 68, 51, -107, -37, -42, 33, -66, 72, 38, 43, 83, -72, 39, 124, 17, -48, -27, 108, 52, 78, 95, 43, -19, 18, -72, 47, -6, 100, -28, 23, -55, -87, 37, 35, -2, 46, 60, 49, 24, -36, -56, -46, -68, -5, 67, 32, 88, 69, 74, 48, -55, -2, -61, 21, -3, 18, 102, -79, -81, -118, 116, 12, -29, -28, 76, 98, -76, -84, 20, -29, 38, -34, 33, -57, 80, -49, 2, -38, 113, -44, 120, 85, 12, -7, 36};
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
    msg.setTimeStamp(0.6564981229411732);
    msg.setSource(55995U);
    msg.setSourceEntity(67U);
    msg.setDestination(24039U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("QZIKIHVPSEBCTMWUTREYJNOOOBQKXYSRAVBPGTSVYGWLKSBGOGMLEODUUHFXDBGH");
    msg.plan_size = 48963U;
    msg.change_time = 0.4143522878185185;
    msg.change_sid = 50889U;
    msg.change_sname.assign("STOUPMTWDQAPYQKNYLNHRQPSGBSKFAORCQBWCPQZDJFWMGCDWGNNIDUOZSHHAZVWORPBBTIXKMXIEGUFUCTAVHHJCKFGGOLAJFKXFOUDEICEQSEWPGTHRDOXMN");
    const char tmp_msg_0[] = {-115, 29, -79, -86, 124, -36, -90, -76, -19, -109, -3, 29, -125, -55, -73, 108, 125, 68, -93, -29, 109, -19, 90, -85, -100, 32, 20, -113, -74, 18, -73, -105, -124, 75, -23, -82, 37, -75, 46, -109, -80, -7, -1, -26, 73, -74, 77, -85, 20, -107, 5, 70, 11, -118, 125, 102, -127, 58, 72, 124, 55, 15, 112, 46, -100, -124, 95, -68, -104, 38, -103, 16, 103, 101, -59, 28, 90, 6, 81, -66, 30, -38, -109, -114, -8, 101, 38, -101, -63, 83, -102, -115, 28, -59, -119, -79, -4, 11, -26, 19, -120, -111, 95, 17, 11, 101, -117, 24, 11, 119, 31, 68, -5};
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
    msg.setTimeStamp(0.9789379788284733);
    msg.setSource(36706U);
    msg.setSourceEntity(210U);
    msg.setDestination(13191U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("ZPRDTFGNCRMVFDVKLQKOKPREGQPVRMPFCHAVHUOIPSGBXCUCBEJCFBIYAOQG");
    msg.plan_size = 4287U;
    msg.change_time = 0.9862487007583011;
    msg.change_sid = 63676U;
    msg.change_sname.assign("DZPXZYRLCBIXFKYGYAWRPPVGJRRNZQWBWSUYGMRJEYHNDTNZCPUVECSHKKOJITGEUQGRCTUPHAFWZPLUF");
    const char tmp_msg_0[] = {123, 36, 49, -27, -24, -103, -117, -22, -64, -7, -21, -107, 33, 57, 50, 15, 63, 49, 1, 19, 120, 21, -106, -50, -69, -99, -104, -100, 112, 59, 97, 113, -3, -100, 99, 96, -62, 0, -11, -92, -53, -124, 45, 90, -65, 44, 85, -91, 61, 41, -85, 44, 126, 53, -69, 65, -20, 76, -75, -117, 60, -99, 108, 8, -111, 115, 96, -1, -40, -99, -29, 51, -35, -45, -101, -101, -18, 84, -48, -81, -31, -19, 81, -31, -91, -70, -74, 123, -3, 36, -79, -24, -40, -35, 104, 59, -8, -117, -15, -73, 70, 92, -121, 105, -106, 43, -48, -85, -50, 52, -56, 109, 93, 121, -25, 29, 40, 50, 62, 71, -125, 70, -97, -109, -111, -1, 30, -32, -90, 51, 34, -115, 114, -22, 57, 1, -89, -121, 103, 100, 26, -93, -87, -46, -80, 7, -73, 24, -31, -37, -2, 47, -42, 53, -19, 52, -85, 121, -111, 24, -2, -40, -40, 33, 78, 90, 104, -92, -66, 67, 31, -31, -81};
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
    msg.setTimeStamp(0.5529185689094147);
    msg.setSource(28968U);
    msg.setSourceEntity(187U);
    msg.setDestination(46316U);
    msg.setDestinationEntity(162U);
    msg.type = 19U;
    msg.op = 178U;
    msg.request_id = 60287U;
    msg.plan_id.assign("HIEADEMJLWNKDWCRMKKVKRNQSPQJEDOOMUGCVKVJPRWLBIMSQESHTTZJCFIQAPACJRIFKHGRTZWQZWSHXILSRHSTVZGBBXHOLIYYBVBLBGOIGDZQJKADSCWPPQTXXFUSYTVCNLQZXGXYEZD");
    msg.flags = 50275U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6956309244646852;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VZHKZXJNYCFDPRYVXLJUWDYLDWNWQDBZJFJAYREPIOGXXJQVOPVUBA");

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
    msg.setTimeStamp(0.6781489775756202);
    msg.setSource(28192U);
    msg.setSourceEntity(225U);
    msg.setDestination(57690U);
    msg.setDestinationEntity(55U);
    msg.type = 218U;
    msg.op = 68U;
    msg.request_id = 45912U;
    msg.plan_id.assign("ICTUIBPIOCWUZRVGSVMDKOSFH");
    msg.flags = 47929U;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("RUANMFEPTHMWEUVKIXOHEHPWEJAGYPKHRIKAGYRJYOERRQWCAPLBZNTFZLQVQTFIDMQXLJBFMJUTDKXAAAMXDKNLAONVUUOBCFGIZEYLABXPXDYCKPCYOTRWVDNKBHYGIDVDHCKPKBILUCJDBVIFYUITZLFSJNCLGWUBPWMAJSMZXNCEXMPHUGCOOLJQYMOVXFGKSHNQSSTJFGEWDTRXSY");
    tmp_msg_0.plan_size = 29550U;
    tmp_msg_0.change_time = 0.9658617142844994;
    tmp_msg_0.change_sid = 42068U;
    tmp_msg_0.change_sname.assign("FRXKYALYGMWDTYWMQTNTVGNOZJOPQQOKCZDFTNMMWKKHOWTPCRJUXEZUJSEFAZJIIAPQAZDEKLEPSWAGDLBUZGOPBXFHHVRAPMIYYVAXSTFZZMTRVBGWUCRPHDXCKLHCBODHDINFWEEPFIJXOSGJKVIVXYQGJGNWDLCUJIUQBNVMIRGHDRCWAJSIJVFFQNXASTKVROUBSOFUUNUISTAEBHLNVYKTNLGEPQXPMQZSWCXQLHDYCMBOBC");
    const char tmp_tmp_msg_0_0[] = {-43, 112, 99, 41, 29, 53, -115, -124, -69, -3, -7, 43, -71, 88, -119, 63, 36, -32, 124, 67, 52, -116, 44, 126, -107, -90, -125, -125, 53, -57, -41, 17, 43, -122, -83, -16, -113, 6, 25, 15, 74, -4, -39, 72, -8, 41};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DBWRYJVNNYINMAAIQXCUCNCNDHGCSYQIKXBIOTMIRTZKCUYOZXKECFOPCGVADEASGDGTMARWGQWOHRMMTYRSJUKLXQRTWJSJQHHJOXZILGFXXHTUPMOOWLCFNKEWVSWMPETFLEOWDGEHPIYUHUQDPCYRMGBVURMWAJVBJECSQAQPBFHFYDTVLI");

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
    msg.setTimeStamp(0.5564994437663964);
    msg.setSource(11907U);
    msg.setSourceEntity(127U);
    msg.setDestination(40081U);
    msg.setDestinationEntity(176U);
    msg.type = 129U;
    msg.op = 212U;
    msg.request_id = 30143U;
    msg.plan_id.assign("JPGWAHFSLWMCEZQTKPZXXKGNQMJLNJQTZMGOIJDCDIH");
    msg.flags = 26745U;
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHBJVYJIKMTADXELKRHEQCYOQLGNDYNQLRJJTZQOAVHDCEJWTMKSYUB");

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
    msg.setTimeStamp(0.7703297649061132);
    msg.setSource(41985U);
    msg.setSourceEntity(16U);
    msg.setDestination(34874U);
    msg.setDestinationEntity(72U);
    msg.state = 192U;
    msg.plan_id.assign("OWJFEEDMKBDCXHOIKNRNMTKXNXPNMKFPRYVRVEKEZMIICWUSJWDXGLMLOVQKCBGTEXXKBRDFTAXQVZPWUNJLECSRHARYIOWSMOZJVZIDXAWAXAQHRSTFUQCMOUQGQCDPIUBHDPOMJFARHOWSKVYKLCYQPGSQWVZATTZCFEFNDSXELZGFYDBJHQLMQCIZDTPJNUOJ");
    msg.plan_eta = 2036060681;
    msg.plan_progress = 0.5488297704003199;
    msg.man_id.assign("LEDVWZGISUTFICHWJVJZFAWCKXTXHEKGBNHLPSZIWSSRSIRBLAKJFFOOYTQZLUPMMANQPOYMN");
    msg.man_type = 57508U;
    msg.man_eta = 1305330115;
    msg.last_outcome = 232U;

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
    msg.setTimeStamp(0.7848078356638136);
    msg.setSource(5559U);
    msg.setSourceEntity(55U);
    msg.setDestination(45038U);
    msg.setDestinationEntity(66U);
    msg.state = 10U;
    msg.plan_id.assign("RMPXPXHARDUWEVNKMOAPDEIGKAPILAWHRNTUAKVLVXOEEVPGJNDFGCAQFWOTQJXIWVBZBCTSHTEBLRPERMDHJHYDLONSUFINSBINBYKQGCMRCZBNVUGFBBPLDOMIVEGIOYQLDCXIVKDXXZDKLDASJSLLWHJUQVPJYXYMXYNPHWTRWJGFFUBT");
    msg.plan_eta = -1093888966;
    msg.plan_progress = 0.6577202312082104;
    msg.man_id.assign("GTJELSQPIDURFVZVJCEHHZLVPGLYNYICTKUKBUXHBDAXCLSCHFWDGDZXCWVVIZSDZHNMKOSAGZEURGMYKXKSULBBPEZOZMUQCHMIYDYQHOGNQYEKDBEJENXRJMTPWSXQVWQEJNLAQFICAFMVOUWOAGLHMTPKRYORFLFJVQFMFAITIROEZSXOKRBBNNWTHGWSDORDCPUBTJY");
    msg.man_type = 30442U;
    msg.man_eta = 1480442344;
    msg.last_outcome = 220U;

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
    msg.setTimeStamp(0.29286168958122083);
    msg.setSource(27405U);
    msg.setSourceEntity(180U);
    msg.setDestination(43473U);
    msg.setDestinationEntity(6U);
    msg.state = 207U;
    msg.plan_id.assign("IKPWZMTXBVMBRWRGIDSDYHVWCEDBTMDQRGFQSSOZJEYNJLYASIZ");
    msg.plan_eta = -1736120138;
    msg.plan_progress = 0.5356858722065099;
    msg.man_id.assign("HWDNKPACSOHFNITLYQZYIEKXGHSDTNLIZUJNBADQXSJYQOOSTJKJSVYRVENKOZFAHPQQDPJRQMBOBOZNYCWKQVDKUXYTOLFCTZIMZJDTMYSIGAGXLQBUFC");
    msg.man_type = 1015U;
    msg.man_eta = 1917401815;
    msg.last_outcome = 71U;

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
    msg.setTimeStamp(0.5799066627221399);
    msg.setSource(4818U);
    msg.setSourceEntity(195U);
    msg.setDestination(29430U);
    msg.setDestinationEntity(140U);
    msg.name.assign("BNJZFRRZVDTDNOJJYGVQCIBULGBABSOIRYKQMLCKBNEJQMJYZSVIDKQFXRECRXWWGMSZJOSOLOZTMGEWFSX");
    msg.value.assign("WWHTWFEBTOVZLBYBKAPGSDQWLHIQBDRCTIGCIDRAGICWUFLOSQTOJZFNZKCVOECEYSYFNMEHUXMXTOQATUAOLXQNJHEZVFAJKNBTJQMW");
    msg.type = 59U;
    msg.access = 213U;

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
    msg.setTimeStamp(0.2706065254541372);
    msg.setSource(19113U);
    msg.setSourceEntity(190U);
    msg.setDestination(38025U);
    msg.setDestinationEntity(130U);
    msg.name.assign("JXGRGJCGWHFPLCYJHWMEAGDCNFQVOIMVPNFWTSYKAVYVMZZPAJPNDBSOZTTSGVNXABQOYTMQYKXFKPDVRRMICIESXMDQRAIWITYWAMQGPJAVBBHBPDTFLODQUAITJEBCOABEYVCY");
    msg.value.assign("PUPEGUSGUKABSQBXQDSJZKNITRXIUXBJOJZAAHYCWQGWGXTAZZLQJVXQBYDRHXDUERFGOGVQERILTFJMKUTCYWADXVRKBTHKBUVTNZQPEWIZTRJFZCMGRPENQIWFDCOLRONFHOACGPECSZFWLWSLPEMNGKNLBXVQLVHNLXHDJYVNSDFDKMSCCDAPULPU");
    msg.type = 69U;
    msg.access = 54U;

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
    msg.setTimeStamp(0.11879788048906703);
    msg.setSource(7036U);
    msg.setSourceEntity(131U);
    msg.setDestination(7920U);
    msg.setDestinationEntity(19U);
    msg.name.assign("YESCUEYHFAOMJPLIKPGNHCAXBINSTFLUMGOCKURBISMLHJZZW");
    msg.value.assign("PLQPIQWBRZXYCTBMDVKKPBCCFHNTJXTZTVBJHHSWMKKORBKRJDAMCIYFUUFADDISIPMWGXAHOGEFNWONZLPGURGUNQOMGWEYSPGCYKFAEIOEVJTSBQHNSOATFMXLQVJ");
    msg.type = 148U;
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
    msg.setTimeStamp(0.6580483319553682);
    msg.setSource(1684U);
    msg.setSourceEntity(131U);
    msg.setDestination(39398U);
    msg.setDestinationEntity(73U);
    msg.cmd = 41U;
    msg.op = 196U;
    msg.plan_id.assign("WZLOLOVGNKGGATWVRPYPWFDEEABKUMLARDWYZ");
    msg.params.assign("VXWRZICAWNCEIHPZUDUELSRCFJRKOPFJAOAJSRAVSMRSPBMAAGMQFSRQPZAZGBTVLVLUTBETXXLFGDIMOPNHOYXIPUBOKSECHOZQLYABBRVYXXDIWCDDOXEEENGEYTUOSGKFCMHQEWDXTLUUIQNZQMNQJUWBGMTDWQQKSFLCCGJXN");

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
    msg.setTimeStamp(0.7751658469542521);
    msg.setSource(7117U);
    msg.setSourceEntity(117U);
    msg.setDestination(57763U);
    msg.setDestinationEntity(202U);
    msg.cmd = 48U;
    msg.op = 39U;
    msg.plan_id.assign("IWJXSAVERKZODGKPTVQBGKJVSGQLUSMXPCYXKYWIAHISIVFZCYGPZGTALCWTQWIJQTGVPUYOBHNOSXMWNLFBHXAUCNLLRFARNMJVFJEFDYDFSXSBVYAEMBBQDAMTLRGKXBURRTMJEDWPMOMGLUOIOCQVQCNDYBQEJQFHZDGKDINJZMTZJXDPQCHWCATSAHPUMIRLOZUHSPYFOEREPSUXGNHOZXHFETYZKVBBYLNAKFOWZTIRVCKUDL");
    msg.params.assign("GUIUEZBLGICDOVRNMRZPPCOKQYEDPJMHLOUYBLRVAHTPLNIHCIYCHASPUAQGTOXMNCYBAJXZZETXSHSNKQEZLWSWNDHIJJKUWJMFDAZMGQATQSGQSVAOOZYVI");

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
    msg.setTimeStamp(0.6940572449040724);
    msg.setSource(17962U);
    msg.setSourceEntity(247U);
    msg.setDestination(17054U);
    msg.setDestinationEntity(170U);
    msg.cmd = 242U;
    msg.op = 80U;
    msg.plan_id.assign("JOLTDPCIFZKHZSATOBJCHBPOVWJOPUQJXCVGDMMDDRPXIYRETNVUNTJVENSXMECZLKJQMUQOZYENUVKXFMFOGHFAKZMMZWWIQMYLMYLRPUYBIKVIAQVESTUOFIGYAXZIHDPKVJJPTYXGPNHBVNCHZWQSSYHBTDGZOFUUATFGRSVWNIAXRNWGFODDLPACKUUPKRSCOBIMLWHRBDBYSEDGFCHIXLJRYRHQBSNKATQAETE");
    msg.params.assign("DXVJZJHKJSALUTGLVSZIQIYRWXRYVEGPTJGVHCFPMCFDXUNWSEGQSZATKUTRHOJOOVPCYMSVB");

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
    msg.setTimeStamp(0.6639619068829717);
    msg.setSource(50141U);
    msg.setSourceEntity(11U);
    msg.setDestination(19199U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("WIWJPOFZYQDMLRPOZEKDKOGPBQBXDCTSTJSWAWKLNDOXKMUJIOMBESHPQYXBWRUNZTASLCBERTKUAFQBFFJYNDYAUGLXTEPWJJOYCVEUABEGMQQGX");
    msg.op = 91U;
    msg.lat = 0.539382613381105;
    msg.lon = 0.8386213269611769;
    msg.height = 0.03824952393620784;
    msg.x = 0.2647080003108011;
    msg.y = 0.7938705363076035;
    msg.z = 0.928417759244268;
    msg.phi = 0.6502680622684553;
    msg.theta = 0.8722015878933772;
    msg.psi = 0.7660561507495113;
    msg.vx = 0.1441149773011472;
    msg.vy = 0.38169025258081646;
    msg.vz = 0.14051491171501962;
    msg.p = 0.028545928243978946;
    msg.q = 0.9172552752491024;
    msg.r = 0.9272200957802094;
    msg.svx = 0.14444058287068973;
    msg.svy = 0.4804511394367845;
    msg.svz = 0.6571414283411232;

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
    msg.setTimeStamp(0.75465061386477);
    msg.setSource(44216U);
    msg.setSourceEntity(20U);
    msg.setDestination(44360U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("HAGYVPQAUDGJJMOKTXFIWEKKKBUPQQWCLLMJCIYIJFNLQWVJWRDXXIPVDCBUOOYRTKDEGTFYVZXJ");
    msg.op = 15U;
    msg.lat = 0.7904258213030195;
    msg.lon = 0.013256151605024025;
    msg.height = 0.46082470388327146;
    msg.x = 0.1267541162465341;
    msg.y = 0.8013817368242323;
    msg.z = 0.6322887202048814;
    msg.phi = 0.43579036003190896;
    msg.theta = 0.46106088681928514;
    msg.psi = 0.5006777243213241;
    msg.vx = 0.42204561809057495;
    msg.vy = 0.04975734728470116;
    msg.vz = 0.27064852044005205;
    msg.p = 0.5349540930265635;
    msg.q = 0.8715651994987126;
    msg.r = 0.842812567268694;
    msg.svx = 0.027320566543711622;
    msg.svy = 0.33752204058896795;
    msg.svz = 0.8180938140348196;

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
    msg.setTimeStamp(0.34603752009389777);
    msg.setSource(47941U);
    msg.setSourceEntity(17U);
    msg.setDestination(19117U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("KYUTXABFVGHWEGBASIVRIZBJTIMQDNIOKXUXQPLZMZJYKBOENQDPCUSLKHIONOIFTQXHHWFWRVDBYMVTYUILHAMJJKYGNFNJHXGETLAGYBOENPROWDGZLHPGCFSQPPEVUIXCMUKDSZXNQCAGELAPHVFKHSIWPVFDQUTRETLVBUAUKXKVYRXSALMDRKRYBNQZQFZMFALCZTSWT");
    msg.op = 225U;
    msg.lat = 0.6081511451047039;
    msg.lon = 0.6824351568539647;
    msg.height = 0.3186052140583806;
    msg.x = 0.04712425897053629;
    msg.y = 0.01112655473953561;
    msg.z = 0.8240268724394918;
    msg.phi = 0.04236749863809308;
    msg.theta = 0.8919707203558528;
    msg.psi = 0.686566353333095;
    msg.vx = 0.547784579195499;
    msg.vy = 0.7389161743647631;
    msg.vz = 0.886641320807439;
    msg.p = 0.5578490969094572;
    msg.q = 0.12581378343222727;
    msg.r = 0.021389225158928493;
    msg.svx = 0.4397438470902819;
    msg.svy = 0.03246304247884446;
    msg.svz = 0.04114847361698415;

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
    msg.setTimeStamp(0.4081273265210499);
    msg.setSource(6750U);
    msg.setSourceEntity(206U);
    msg.setDestination(31743U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("PJTSKNJGODXEUXBGDWMNQVAELXYNKMTQZTAEJLVAQMMORNJFFWSGYWAWDXEHKUVSWATKGLVSBJMEFFCCVNFPDCUZPNU");
    msg.type = 60U;
    msg.properties = 209U;
    msg.durations.assign("OXRAPNQNZBJKEYNFMDQTMZZFWIXIINVMBIJSVNDUSUJSHZRVBPIBKFRVYJUJSKZGLKYCRJXQCSYVIEAEDCDJTUAYVKNUCGFCCPWQQQMHOPJ");
    msg.distances.assign("HCLOSXWTRONJLADEZNMPUOVIAWEUEDMRZSEFWLQFJGHCLRIONHALUZVZYZWDGTRDTYIUUXTLHSFAKQMSAVWJKWFVVSWIUBVMITZLOQHTCFNENPPDRNRZOTABBIU");
    msg.actions.assign("FTBLHRXDHQIXAFLNTPVFHEECQAMSQLLHVMFUNTELKITRNGOWGCEYGNENVCRTXDMHZYCRXFSPSGQBZUJVGSDSVJGGKMAWJHKJCYWEPAKOBIDBEWQBFKSAEMKUJXUWQQCVKPYDONUPKHLOTRVAOUYTCNIBDTFGRXLZFVMGPWDGCEXTDDWZHLC");
    msg.fuel.assign("XGFSUFUEXBKCFEWVTTHOVWLMRXWFCRVFSLGMHTQAIXAQJQNALDSEEOZGMYATFNDQOTYUMSJQCUKSBYOEVXOLRKLTIGWDFBWDHGPHIKRONRCBYLQSFFZVUZJGDZJPJDHZBPKJ");

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
    msg.setTimeStamp(0.6279408497641836);
    msg.setSource(42648U);
    msg.setSourceEntity(123U);
    msg.setDestination(7367U);
    msg.setDestinationEntity(16U);
    msg.plan_id.assign("IRTKWIOBXQCHW");
    msg.type = 230U;
    msg.properties = 28U;
    msg.durations.assign("MZNSEBUBHGWGJNUKDZQXEIVXHFGMZBCMVLZOTTSEIOPFCOVRHYAYUDJRDAWXHPMXSXLZTJXBEARHYFZKMXATGNZLRFAJHMKRUYBVDLLRUNININQDOPQPIYOWFJECITKOEZNKJKTOSILBLJXPFAPYENXGCYDTBAIUBHFQRHXIMVYWGYFOPRLTKVWL");
    msg.distances.assign("BGJQAQMEXZMMIYJWMJURCLZXEESTKPIAGFMLIKIEOCNXHZSOPONAZPQEHAQNKYECPZJXIWLLEHRKSGIBXVRNOQDBURZISELACVDKKUAORJZSJVDRBTVGPYBCYUTSFXJBWTTZFHCOWHMQTTFKUYVCNGKSAHHIGBDLWHGJTYCEDOFUDYXMKPCMINSMGEYRQPNFVN");
    msg.actions.assign("EHXMKTLTQYVLVUNLSFUVRQNQXAVXZCFSMFYNUID");
    msg.fuel.assign("FCNLMTECKTXNNIZNHKBHDBQEUAIOFYLLUUTMWECCRKKQKXAIMJETJCWYHGTRUYQZUPJJCAPDXPORHDMUDMQAPJEKZOXLHKGUXCAGLVWBTQXRFPCUFHYSRYFZCLIODZNVCDIDNOJIYKWRAJLROWBGSDZQGVXPVBFMBEKMQSWUDAZGWMFJNIW");

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
    msg.setTimeStamp(0.007178541521644766);
    msg.setSource(59538U);
    msg.setSourceEntity(208U);
    msg.setDestination(3844U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("EGHRHCEJPBHPVKWIXRMDCTCDTSYJDSQBVAJAGSKQNTVYOVENTSRHTAWWBNNCTVMLWVVOOZWFAZMYJLFIXJUUZMDQBQUGONDWRLFFZPAU");
    msg.type = 121U;
    msg.properties = 58U;
    msg.durations.assign("OEDMDZLSESBIAUTOQFLCKIWNASZFVMIHKODEOIC");
    msg.distances.assign("FIUMSKBSGLEGYTLFYIDTTNNITYJVWOUHFJEONSQKVXXEKOIFBXZOYAVAVOXFFRNZVCTPQKCAMNRLZIWP");
    msg.actions.assign("EDYXOMUPPLUDEGTFZYTNMCSLALCJNWCZREWBEXAMTPRRHZBXKFNRGVBYSXNQXAEJVEVLZPSTPDBBMJIZACFPHRUGWJGFHIKBPGYLOMQWIAHNIFTVSUCDLAHQHICWUUPRGJGECHOSVJOSCYUQVMQTAOXMDQRGDBTVJTSJSK");
    msg.fuel.assign("XXMOKYFYJVWVQBLOVCUSNOAPHALSCGJVZEHYKIBNAGRBIURUGFKZWRBQMBRARZQDORJDLVCGMDBFDFXIRGZWTIXUUXCOKWTYEDAZOQKCGVKNYDGUPOYEJPEB");

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
    msg.setTimeStamp(0.8172310100916459);
    msg.setSource(31801U);
    msg.setSourceEntity(64U);
    msg.setDestination(35521U);
    msg.setDestinationEntity(230U);
    msg.id.assign("AMLYTDYXUBNHJXLAEIPLFTDYGZGRCUBUKPHKADWLXAMAWZXJYPUKHOMVXFJJGZWIDKIUVHIGOLCWBKGRPATSDJBKQMGHZNDECOAHNBSIYKQEECUVNWELGRAABIQNEIZTELFEFXOZSNLSTMZFZJOSSNKYGDQJVVIDUUOCDRTHTYQPBEYWXLCQSBUOSCQMFBMPCVTNNIPGUORXSRPAFSORWXEFJCGZXYZHIVWDVQ");
    msg.plan_id.assign("BNDTEOXPJDJ");
    msg.maneuver_id.assign("NTTVFFGIZAAJRJXMTCPRDAKNELLWTNOJYKPNYIJXIUEAIHQFXTQAGTHLYQUPZBSHQQYCLXXYMZMGUXLLRSFYDIZMQJEWPGNJEBYSF");
    msg.memento.assign("SOVUJEWZDJFVMHINJBZTALJWEYISEZXTLIVIWLLJYOCTFHHVQUBSMJEQRLDCNYANFUGQHD");

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
    msg.setTimeStamp(0.13999458541622367);
    msg.setSource(39463U);
    msg.setSourceEntity(242U);
    msg.setDestination(821U);
    msg.setDestinationEntity(62U);
    msg.id.assign("KGYQKCJTKTCDRLGSKKGLFEALYFLRJTNHBTTUYZQOSJJDVRHALKXCPPXOYWHWDOJGRXAPVUDBXZSSXFTHQTESPIVZCGBOFHGVNHUQWNAMMJUZBNDDIGMJIEMXKVCQNAPBEINXVNOIEJQWSLPSROZYBMQYLKGFZAMAATZBHOQIHVQBWOPYAWQUDEPWULNPIROJYCFSS");
    msg.plan_id.assign("AEBABKUBRROAUKYKUVCWBOXDAKYFPCLTRYJTQWJTIFSHJOVNQXBHTDLVSMSIBQCFNEC");
    msg.maneuver_id.assign("VFCCPBWGUGPFEHFLMAJLNGLDYDVEBUYSCNWRSNCZOBCKHRIDCSWIIDPZGJKOOFLPLVOHAWMXZBKPEXCMSUQOPUDVJITUEYRETEGSRQVDTYUOCNRUBZZTWZHNKRAWAVOO");
    msg.memento.assign("VANTSGKKGBZAXISJQGHSYQOXLAHXTWCJJYHLZCUOSJPJIXFPNDFOXNTMUIJSAAQMYUYPENCIEDCFJJTVLFEDKNPMPFVXGUAULKEAKWMZSBMNDJKRVYOOHXBEHNYBVTNSAWRMEQDZKUJFYRURWROHVRBGSKWGXSPPNBCOBLAQTOVUEVDWQWUVFDZHWPQWDITLDZRGPXMEQPFQWGZLYVTENQBAZGTMYIOKHCUILOBRZXDLFMBLRRIGHCIYFEH");

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
    msg.setTimeStamp(0.7182032103681684);
    msg.setSource(21883U);
    msg.setSourceEntity(251U);
    msg.setDestination(60919U);
    msg.setDestinationEntity(154U);
    msg.id.assign("YWGWHMRXNDEDIDZSQWLCAVBXXMNRROKVZPKFJKCOMNTCSGDRUEMWYVFUAFQGPNXCYQCGPLRGTXOBFEYKEAMFUJBEFMRHNSBVNMPNRZJXOWVMHVHQATJBNTXIPASWFGRLXJJCMYTHKWELTYSNQRSLIZJHJNDIVTABCDYEQZJXJZLWKTAEOZBUAACBLSVQODIUBFVKIEEIKBP");
    msg.plan_id.assign("ICDAOCSEGYQUKWJDPJULGZIRJLZDKBLMUHHQXFIZASCGBRLTZETRTDCXOCMXAWUTCTISWOMNJZKIHJFUAQFYHMGJFRXWDPAKFDDPAZENWEKWBSVUYDBTLDMFXJPTQNPKVAYHWFOLECJOXVVTVUKGEQUYNVVNLCPHSKBGHRWFYMIXSSPGCEGQRQVWVMPSENZRNACLYHRXHO");
    msg.maneuver_id.assign("QNFLZPXDWJLIQI");
    msg.memento.assign("VXFOTQYDCIWHJDXUZEPPKZALNLYYOPWJQNHQWMFJEQLFDUXWBYOZMQRHWPFUZQUPCOZIGGAIOXEBVEYUACEAGDVKTHEFNNBITNZKQUKTNOGJQDGXOKLESXFHRPJCQCSLXBDHXBDMGDDYINTIBFJUWSFKAVZAXRTSOJCLSIRWUGSRIJC");

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
    msg.setTimeStamp(0.17272469268787816);
    msg.setSource(24798U);
    msg.setSourceEntity(149U);
    msg.setDestination(45071U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.05726138622474086;
    msg.lon = 0.8925913279616711;
    msg.depth = 0.34146787319082084;
    msg.roll = 0.4945156151814063;
    msg.pitch = 0.23423143657001366;
    msg.yaw = 0.5326033765472169;
    msg.rcp_time = 0.22876820180478552;
    msg.sid.assign("KEPTEMGSKGGOYGDSLDNVHRWZYBPJOUHDUVBARUZJAMVGMNQOVWIUKXMZZXBAODYNMSIRXMCIBCXLCZUWTEOJTPPWVJRERVAYLKPLIISRRJEXQXPCDVSCTIBASZIGGDHYDSLKQEQELCHKAJWZTMNONUCYCOKFPQTWMSELILBQSGFWOJJGOHZPDAYBSUFDQUEVIUMNONL");
    msg.s_type = 9U;

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
    msg.setTimeStamp(0.3099145844582917);
    msg.setSource(62576U);
    msg.setSourceEntity(167U);
    msg.setDestination(47U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.8385670654214553;
    msg.lon = 0.02865855964010111;
    msg.depth = 0.8043930029891827;
    msg.roll = 0.8182342803563238;
    msg.pitch = 0.07954204638934725;
    msg.yaw = 0.23280064986052795;
    msg.rcp_time = 0.927658207429279;
    msg.sid.assign("GWBQCUVRFBAUYUZHGOVGQPBCBSGTGDUIXDQLMWRNJDHSZUBSRTPRMZXKKNOATDCJHWIZUNMFIXHMCEAHQCPZTVDODAPKYWLVVOEJYQJEINACZQLVTHYXSGKNOHOQVRACLMLFQGRLNOOYEHMGLEWFDTIVWMPENPZEETOXTAKRJIWTFMUBRJASQILIIRVPFEHBYJKXBYIUNWJXPYMYSFUSHMEPWLN");
    msg.s_type = 224U;

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
    msg.setTimeStamp(0.4194343354217912);
    msg.setSource(32681U);
    msg.setSourceEntity(191U);
    msg.setDestination(32871U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.7157665477895034;
    msg.lon = 0.2970821354756704;
    msg.depth = 0.5734013131909873;
    msg.roll = 0.9482658100031682;
    msg.pitch = 0.36942354869941807;
    msg.yaw = 0.2587975159153896;
    msg.rcp_time = 0.38175207617218676;
    msg.sid.assign("WAPQWBAFUHEJOCAYAZLWBWLONTVHTGJTPOFYIDTWISIEIDRJMHNSSEYWYHPSICINSMTUJXVXJIUQYFDICFPZCOVBSUBQEDGZXKSXKAXMFEHUQHQZZMKCODBFUYIRHYADLRVVGQMCLYTRKFLSUTJLVBRVKDSRFPLTLHMSGDBRBCWKOAPZXKPPQAZFXJNCHENZIOXXZGT");
    msg.s_type = 151U;

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
    msg.setTimeStamp(0.2178823266817036);
    msg.setSource(15351U);
    msg.setSourceEntity(132U);
    msg.setDestination(41432U);
    msg.setDestinationEntity(208U);
    msg.id.assign("RRZMGLEAYCFPANAHHGGDVYNBZWMFCGIKYKUGPLKCSENAVFPKMUIWUQTAFJSRDIQHBBJXVPCDLBVYPZULNTNIQGARCCKWZSBQFVEMSKTHSXBPTJWQWOLWUPAYILQSXLQTEEOVYGHCDMLZDCOGBWTHYJMXTAZDXNERUFZQOUIUYNFZDXMFOQVIRIYERHLXHKZSOXXKKPVQ");
    msg.sensor_class.assign("VIIIKECQHAKNAOZGISNZMYCKWTUGKTROBHIDEQMWVJTSPACIKMUJOMYRLEUEDLXKRPBBTWNDUOIMLAPSNDHGKJWRZXQLZYDZPCOEYUDELOJNBHVALFSVONSWBCHXTMRLPPEGVJZEPSQUHNORFGKUYUXAXNVPXXLFHFODIJUQAEZREYVQBUXTTMIGWQIDLAQH");
    msg.lat = 0.14560479639793833;
    msg.lon = 0.8593404968141802;
    msg.alt = 0.3094971832297865;
    msg.heading = 0.3991230869469612;
    msg.data.assign("PSUTTOHSOYBKJLEVTFUGURKIHDPEVOBHPOGCFBFNCLBTZAZCJJQJGVVMOFVFQXOJTYQQURRZHHZADNGWHBELADQXYXYBMDRZNIZQSTUMSLEFVUIZBEJWTFZNYYWPICHFNNULLDMMGJSWVOPGLNRQMYYVEELE");

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
    msg.setTimeStamp(0.39968940017896526);
    msg.setSource(405U);
    msg.setSourceEntity(67U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(58U);
    msg.id.assign("TQYXSQHQSWCJCBGKDZRSKTHXXPQLSIEKOVETMDJLAWGHDJVEIYYXZTIXOAZRCAZHDORUEZXKWYGWQUPTOVHMRGEIPJZUYISINXFAMNBBGNDRAPHKLOFEJCFBLACRJXNDZASEWJGFONETRYSWUUXLUAPXWNJFUPBCOJMGEQPVKUYYPDCWCNBIZTBB");
    msg.sensor_class.assign("WQSPGJVMPEXYRABU");
    msg.lat = 0.7156869630871331;
    msg.lon = 0.09762919301354012;
    msg.alt = 0.8185860143143098;
    msg.heading = 0.7831492545638833;
    msg.data.assign("HQDUWJAWXNEOOMEZXCTAGOBJJRMJMGRYZHSSABYKWHHTJGXHXANFEVPDVAMPAIUOLBWPUDKDCBLMIXHYTTTXDGINQLZDIFGNHIRMFYWDTOFNMPKEVFESZPLQUJBOPXQTUCBWUBGPZZZZTZWQYMPFMICDNVFQGRXBNUVKKWNJ");

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
    msg.setTimeStamp(0.7612543009229445);
    msg.setSource(31711U);
    msg.setSourceEntity(172U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(171U);
    msg.id.assign("LRPUFIZOQUJXSQEBNZJTJMZCPCGPEZSNEFVJBKJFSXNRWGAAYVTTUGJDKTV");
    msg.sensor_class.assign("LNWCUKJUYGQQSFFLSKFBQEXERHVCIODNIDIXYCNSHORKILKQUPHHWHHFGJOMKMITCIQDJRPEAAMJXLPYXSFYAPYFOAXYKZZJRSHLENNUUTBSBGFGOJAPBVKLIZTJGDWFETWSPUZMUNMJTYTGDRRXNVWZZDVUIVADEYVDSHHZEKVBXTOQXGYRQOVYFOBCCPKTEJLMLP");
    msg.lat = 0.9348484811651218;
    msg.lon = 0.6508940673599881;
    msg.alt = 0.5889665636445158;
    msg.heading = 0.6088352146703133;
    msg.data.assign("GJXYUSWVMKWHQXECEYALWKLSYBBZCNINXRKQRFLRFVGFGTPRPSHLUVUIZQCDIDESUEZPLYZXPUPIVWWGFAIUAFVJOXKQWIVEA");

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
    msg.setTimeStamp(0.23322938047314357);
    msg.setSource(23657U);
    msg.setSourceEntity(191U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(121U);
    msg.id.assign("KMRJCUWOGLMVVGBRPZRZDHULGRJVFVLEBFJOSLYJEWUSFHDNFHNHIBXWRPJIXUHJKQPTZCGRYMNOQTYZIVTOVLLPZDKTTCSBSOXAYEEUOQWUNJAFNDLOAFGLXLNMQHOURJKEMTOWDMAVQTLZWNCAAYDYETCJFPMCZOXMRVISRYQWHDVGSEAIYCQXEXUBTUKWHIGQKQDSRMEFYSBKGSVEMBHXIPBFQZPPWUZKYCJPBAHTKBZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AAMXKXCZFJAKMDHALQZWQYGHQWBJLHBOPNYWGYOELZFJRBGXUPRVTSOTHTJIMUINAZMCEVCPIHBQOYMNGHKDNINFOESWVJELHWEUXMLCAPQCRSWNVWXHZZKPEVJQPBFSXVDTCUBDFTAONIKDRLDUBWSJZUSVOVYREIGLGTKYCDFWFBNEMISXCNFMMDYIJUFEPQSBFRUIEHRXSNOAOJRKKZLLAWD");
    tmp_msg_0.feature_type = 124U;
    tmp_msg_0.rgb_red = 246U;
    tmp_msg_0.rgb_green = 230U;
    tmp_msg_0.rgb_blue = 108U;
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
    msg.setTimeStamp(0.6696112780481491);
    msg.setSource(48080U);
    msg.setSourceEntity(7U);
    msg.setDestination(58614U);
    msg.setDestinationEntity(244U);
    msg.id.assign("EUCNKQZNDGECHKYWYNRWOXLGUJMGYCOGYQUJXDKNAFGSVCIHAGFABIADNRGMJXHVBHFSVFTUAKSQWIARWNLRUJPQPYHEYADOZ");

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
    msg.setTimeStamp(0.7315691818834117);
    msg.setSource(28711U);
    msg.setSourceEntity(139U);
    msg.setDestination(41302U);
    msg.setDestinationEntity(14U);
    msg.id.assign("ZNQZBAPJAQUTRCVLXEUMCBBWQDWXJUOQANFGSQBTNDVAWSMZLROCZJEJZGGH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OMCLGMHJTHTIRDIQLCTCBYXFQPKCQWLTJGQXISZUDWDIVTEBOQSDMOEOBRGDRFPSGEDBCCSJIDZWMZMGZKAOQVBZZGIZYVVHKYOASPUIYYCHHWKN");
    tmp_msg_0.feature_type = 12U;
    tmp_msg_0.rgb_red = 122U;
    tmp_msg_0.rgb_green = 19U;
    tmp_msg_0.rgb_blue = 96U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.005192411809727515;
    tmp_tmp_msg_0_0.lon = 0.7177046122018449;
    tmp_tmp_msg_0_0.alt = 0.9178398189503547;
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
    msg.setTimeStamp(0.5165393099822853);
    msg.setSource(5750U);
    msg.setSourceEntity(208U);
    msg.setDestination(11939U);
    msg.setDestinationEntity(58U);
    msg.id.assign("OJISVLGWRCWBSRWZQPFFLECEZGJOAJNFTIRFVMDUPPFBMHKLAIFLNGWMNQXHOAQHHDROYWEYUKLVRUQSNKBKMUUGSGTEMYYVTIQSDUVFHPGECJVYJVZGMJBVAYSGPCXPRHIMTZPQPHOYBHDYIZSMNXBAZLBPXMSDCTLAWCXRCVGXKZYLOFEJDAIBEOBLJWXRQSMHTDJQOZNTKNTKWTDWCXLIHRTFURACIQKYOAUNUGZNCXXAKWS");
    msg.feature_type = 240U;
    msg.rgb_red = 133U;
    msg.rgb_green = 165U;
    msg.rgb_blue = 158U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.34977775628270236;
    tmp_msg_0.lon = 0.6245957339527591;
    tmp_msg_0.alt = 0.41082348785625156;
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
    msg.setTimeStamp(0.43005324984535476);
    msg.setSource(35827U);
    msg.setSourceEntity(249U);
    msg.setDestination(51892U);
    msg.setDestinationEntity(197U);
    msg.id.assign("NRJBJEMMWCFOHZFZKVSUUGUPUTRXYJRGSGEPHLDOLXSXZHSYAQKMHNLBGIYEMQAVINKDHRFITZXTWGSPWVAEWCWUXMDQEUZNDDCPMPQIQMFONDTREWHYHPYTPSQSYQHJFVZGTXFCLHWBUSAMREA");
    msg.feature_type = 51U;
    msg.rgb_red = 9U;
    msg.rgb_green = 199U;
    msg.rgb_blue = 131U;

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
    msg.setTimeStamp(0.5402903374613268);
    msg.setSource(35755U);
    msg.setSourceEntity(16U);
    msg.setDestination(65197U);
    msg.setDestinationEntity(102U);
    msg.id.assign("NRYUYFHVTZAQPQFQEEIHHDICFJLBMNJTTKGMVGYPYAGCFTUPXSPFAJSVDBYPSJUKUODYIRHBOIADQBMLXRFMERQCAKHDIWSOMMTZDVJWOVAXICDEDZLMJNRCTZPJCWJIBHEWPWHFMVAXLCEJTGNVKEKLTMRZGIHWNNKWNUBFOZLBSDGHLURFCZLQVQ");
    msg.feature_type = 169U;
    msg.rgb_red = 142U;
    msg.rgb_green = 108U;
    msg.rgb_blue = 131U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5757739225043645;
    tmp_msg_0.lon = 0.432186353032766;
    tmp_msg_0.alt = 0.5827107119718221;
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
    msg.setTimeStamp(0.7308264737436118);
    msg.setSource(60959U);
    msg.setSourceEntity(21U);
    msg.setDestination(45910U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.44583780405805473;
    msg.lon = 0.7142968126307341;
    msg.alt = 0.9729943042791557;

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
    msg.setTimeStamp(0.9254601178568761);
    msg.setSource(22950U);
    msg.setSourceEntity(202U);
    msg.setDestination(61566U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.18236456744729135;
    msg.lon = 0.6442081914958662;
    msg.alt = 0.12216009831730223;

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
    msg.setTimeStamp(0.29948984039570203);
    msg.setSource(64083U);
    msg.setSourceEntity(41U);
    msg.setDestination(63804U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.8628438664411721;
    msg.lon = 0.14656193984481114;
    msg.alt = 0.786054008819397;

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
    msg.setTimeStamp(0.5843060389356629);
    msg.setSource(31698U);
    msg.setSourceEntity(39U);
    msg.setDestination(51166U);
    msg.setDestinationEntity(11U);
    msg.type = 38U;
    msg.id.assign("ZUIFDSBTRTQNVHQJXKKCRTQYYNSMRRGGNDDDVFADFNQLXFZTZZZMEXOKUHMTKPEWTCEBYSEWIYAXGWXVTAOBCVWIUMDRSPGVSASIHPOGCCHLJUBFVOCHAMIUGJGSOIPKJRQFVENVQDODKLGWKNHCQCWRJDZPLYXYWBHFVIUORCXPQEAFLGJYBJU");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 117U;
    tmp_msg_0.range = 0.5190498954563091;
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
    msg.setTimeStamp(0.15263916103907937);
    msg.setSource(5832U);
    msg.setSourceEntity(31U);
    msg.setDestination(32003U);
    msg.setDestinationEntity(151U);
    msg.type = 15U;
    msg.id.assign("GMTPRJNFAXBFQQQIXSIGEJCLPUMOCABRKEQJMELHAFMZXYWZETPPZVDOKPRTWLTFHYANJOSQWVHGBPMSXAXLHBEPLTNQNHSGMGOXQCGURVJKSUMKAANIYYVM");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("ASENWNFFAGAXJZWZCKTUTHCHZDETINMEAENVGMPESYGMLLRARJFSAPDCLPFKHWLJXHNYXUWYRVFDISUQBJGOXSOTBZZKDUVBKZCMVIOKLISOEJYQOBOCYVYBNNKHEDCRFXMBBFERTBHFXXYPLOMYSMDVSGQYLFTSNXEZRWNCLPJAGCUZUBIKDOQJGXRCODTUTIQWXJLAKUPQPIKQZRWNDIWPVVQWMQHGIHIDUHPVOAVGHAFZLYJGUCKRQMSW");
    tmp_msg_0.timeout = 51960U;
    tmp_msg_0.contents.assign("ZYJSGHHAMBZIXRSXVELKQVIWFULWTDFBDIRORDLUXFQKZACHOFSAJMNLHCEMZILBUDL");
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
    msg.setTimeStamp(0.41074623313658654);
    msg.setSource(50958U);
    msg.setSourceEntity(133U);
    msg.setDestination(25174U);
    msg.setDestinationEntity(10U);
    msg.type = 6U;
    msg.id.assign("JAWFMEXGXUGLTNUPRYFHQA");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.plan_ref = 1909456612U;
    tmp_msg_0.id.assign("JSVGGPIOVIHQZEDZPUWOLCPZGASKIYEYHSVZZTXVSBSSJXBAAPQKKJJOBUZVVMYNHGAGWBYAXDZMEUOQSDRPKKUDTHCWNFA");
    tmp_msg_0.memento.assign("WTNGQVVISZKMSTYJIVRPVSWMCFEDUCCLGLYMDOMZNHQGFQYPNHWUWOQZQPHOGNGBIAXBEYPLBBSLZHXDJHEOSLJKHOWROTUKMSOLFFHQXKXDTOMFGPPOZJFIYJGDPNZBVRUTNWXQWJDHUMDLRMEUJNARNUIEBBIYSTESECLMSVJAYCOIPXZVWTBCGBBLVTXFGW");
    tmp_msg_0.timeout = 14819U;
    tmp_msg_0.lat = 0.31193197037079645;
    tmp_msg_0.lon = 0.9800400019323063;
    tmp_msg_0.z = 0.48565361465805124;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.pitch = 0.8693802027976539;
    tmp_msg_0.amplitude = 0.04462971952475403;
    tmp_msg_0.duration = 42758U;
    tmp_msg_0.speed = 0.5620234966266746;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.radius = 0.3577216535615033;
    tmp_msg_0.direction = 131U;
    tmp_msg_0.custom.assign("EKGSQZTWEBORGRLVQUYBUUKADVYABDWZD");
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
    msg.setTimeStamp(0.33828867700231946);
    msg.setSource(46322U);
    msg.setSourceEntity(225U);
    msg.setDestination(17202U);
    msg.setDestinationEntity(4U);
    msg.localname.assign("IFRNNHBJJSYVGTTFKVDJJOVQLIQSOWMCWQDVXWPLFCWYYIFOZVUNTMTBIWBEZGHRGDERAHHJTAUMFCKYCKSPAAJDBLCHMRZEVYOPDHIOQHUVNWKMUOLXLLQAZBODGWACXDLRXNSPHKXSZXUXGEBUINQPOLPVGT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DCMRBEUMHXHZJKKIOYHVDLQJDLUSE");
    tmp_msg_0.sys_type = 26U;
    tmp_msg_0.owner = 59651U;
    tmp_msg_0.lat = 0.7348561452724517;
    tmp_msg_0.lon = 0.8521489440017387;
    tmp_msg_0.height = 0.4923122681790165;
    tmp_msg_0.services.assign("XVALTAMNSYOFPCOVIGDCPHPAHTLEHAIXWGWGBRPBASREHAQLJNUVGTNYTKKFCZXLRPVZTARLQRESSBMCKVVKTZSBJXIDASWHMXFUMYUIZQZSQFDCXGBZNNHSPWOBVIHJYMKZJXRZSVMLQIXONNVWDPKHNYYBLAXOPKWKSQLRUWJDTCKFQIMGZBQDELGEUOFFVEURYF");
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
    msg.setTimeStamp(0.3794646147644175);
    msg.setSource(32392U);
    msg.setSourceEntity(179U);
    msg.setDestination(11068U);
    msg.setDestinationEntity(179U);
    msg.localname.assign("ALJJDGJNWTEYOXSLYHTUWZECKEYOELUGWVISWAKITFLPBFIVBAODRAMRGHIUMJZOMORBWDYTBJJOGHHYZQFHXGMZQFVNUQEJVRPELBSASZPIFSNMNDNVANVKRGKHBLPYGKFQINPNPTECSYMIGKCWKTEBDVYMJKZOZPRWTAZCFHHEXMAFTCFVPCKICDCYYWLLAUXCOZXQADQQQKSGIODSWMQIXWJRBNDDTXBVTMFR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LUHOFLAPPKXYIQSJAWWPYMTHPOJYAJAHJFVNZVZZEHMQXBZDJUGUVDNPGKQGSLHBUWQCGZBDAZ");
    tmp_msg_0.sys_type = 107U;
    tmp_msg_0.owner = 15284U;
    tmp_msg_0.lat = 0.016232032577148447;
    tmp_msg_0.lon = 0.4279865927688502;
    tmp_msg_0.height = 0.2965774754279532;
    tmp_msg_0.services.assign("BYLVFZPVHNKOUDNMUSPZORTCDBZYIGWRSJKMVCBLHLEXNHQGOEWCVOPLEAHUAUDXFETQTNAYJVZBYWMFRNSAUPEGEJNZARJXMKLSDXTLMOSFTYCHADQCSHSXOUGKESGWTKQYERUHNXGWGVXRTV");
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
    msg.setTimeStamp(0.5822190920762581);
    msg.setSource(9324U);
    msg.setSourceEntity(146U);
    msg.setDestination(50550U);
    msg.setDestinationEntity(155U);
    msg.localname.assign("PVTGLUYEXWKIQRNOVMXHEDXPBKUUJTOJADRNNBLWZHIVCKDIAMEWPEPZGJVRKXZTMOUOFDGSYEWPCSULNKCVFCHREQQAYOCSOUIZPJSJHALZJREPTDWSAHGGZCNBPIGSTJVUPSYOVBYCNFJFWWTQIHHMYNXNDAEXQQFMOWTBFKEXYKLMBBEQQUABUHSQGMIOKZSAFVYZBRUJMMRIHCCDCNGYRFGTFWZOZIRS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JZTUCVWVJCSYEVTUMJDWISOOSBMIERRZKLZKDXYCYKRQEKKULMFZYTENZCQFHXKRPOHTQIOCPKAOFHOYWCDDNGYZHMMUSTBHQNQRMDXHXBOFFUXVFEQWAEVNPMTPULFCSTXCCPMAVIQBLKMIHNDNTAE");
    tmp_msg_0.sys_type = 225U;
    tmp_msg_0.owner = 28879U;
    tmp_msg_0.lat = 0.9707100989925622;
    tmp_msg_0.lon = 0.12116048886746722;
    tmp_msg_0.height = 0.19748055393145003;
    tmp_msg_0.services.assign("WBGHPVJMOIDDSIMUAGRRBPLMVLMEJBYXDTJCLJVBIAHLCLKSXZVQZRXYVKPHWKTCFYNDYCPRTRBHAUIZZMFWUIXUOQOVMBAUEPOWNIHJKSQLGWGABMXTUUEALWYKOOWNELIHWEPFFPSINFE");
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
    msg.setTimeStamp(0.5865772482598335);
    msg.setSource(63838U);
    msg.setSourceEntity(216U);
    msg.setDestination(44417U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("KSVFDVGPHEIIDNIZJNXQXLCCZWOJNQOSFVTPFMSYTEPXQDMEHKRMLKIZAQPNGXUHCFADFGQIOAHLC");
    msg.predicate.assign("NDMMAPBVUHOWTXQSFDKEZJQGITUSIVUCFLYBCBERZTSMAJVCXKJXUPAPVGVCVFNGBTPQZHJLRERZQMXGEBKAXSUOABQIZKNSWOYCKWVSUWITNNTPZYEEEXFSDJTNZOMMTAWHRUHJWWSBCFFBHZMMEOMHEUELIXRLYPFRWQASWPRYFPKLUQQFRRYAOCORLKIVLUYLDCMJDNIJ");
    msg.attributes.assign("YMQPRFNHVMBHIZCJWDDUKXNTOHTPEJZRDFPQEASGMYIQFFIEXBUZAFQUHWLXO");

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
    msg.setTimeStamp(0.6335223582312446);
    msg.setSource(43531U);
    msg.setSourceEntity(184U);
    msg.setDestination(1046U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("WYDVIBATJPQURRWLNXXVHMWWAKBSWKRALGDTPEUPYZPBBBEUIVLGALQXNDUBCNQTUHUJUMDOXNUWSMZECKMAJHCLXDBVOIEQCYTVQGNVEDJHCHXQKJXTHTCRGZPAQXPTZHNTJFOKDRMBOZKKFOZYRCRKIVSESFJEEN");
    msg.predicate.assign("IZNFNOBRHHZVSWLLMNDCAWNSCZBHWOSPDJTBGSVACPSB");
    msg.attributes.assign("PGJSDXBSHGVEYOGKEUEAKLXRBXWJWRJKMLTHZJKNUIDWFLFPEXHRWSQLHKQYFEPXHBUUPQIJDIYIAOPXAWCFMVYZHCSCKWVUFOIMPJOLVRLFWHZEWNXMPTQHULLBOCIKAZEVTBIDYJJRJCTMQZNEYCAJXGKTUSWQAAYXSFSHBAAOZMTVNGZIQVUQRVRBODDGZUMLFEBAZMYVNNYLSDCXSMQCTZRPYTHQ");

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
    msg.setTimeStamp(0.550225159107046);
    msg.setSource(51843U);
    msg.setSourceEntity(26U);
    msg.setDestination(22237U);
    msg.setDestinationEntity(128U);
    msg.timeline.assign("TDSFQQTHUJTDLJVUVZZWWGYDJQJVNUMBFEHBIXIRCQNGLUGHCDFTOUQBKXJNMRPRPEVJDESYQKKAOUUXYSDZCCPKQBTHSRFPDXZNVNMFKJIHYWKWHICEOHEURMAAVNOLHAZPPIGFLYBMGIAYOELWSENWAORZALZPWWXQMHDCGEKFREKXOBKZUIRGKGO");
    msg.predicate.assign("TVDJOIWABQJKTSPLOIDEEQQHRMLNPCNDHFHLWFZVWCRYZCYKUZOJSIWBRGIQSITHXYEUUV");
    msg.attributes.assign("EFZQOUZJFVVPUPWYNTNKDQDETMLFHBHSKBUWTHLZDCGCLITTXRQUZHMCDCVDJXOODSBFPEJPHUMMFMWBRVTMWSOXLGYJEYXDMNQLVZGSGKOUAEMINHCACFRBXQRLKVRQCPATRONJFODI");

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
    msg.setTimeStamp(0.8962221205299667);
    msg.setSource(53344U);
    msg.setSourceEntity(249U);
    msg.setDestination(54902U);
    msg.setDestinationEntity(109U);
    msg.command = 100U;
    msg.goal_id.assign("DJQWMSBDJINIAPRLEIHZYXOVFEWRQPPUOKAFQGORWFXNJTQBJRAYWSMRRBBILGKOAMZRCXCSMVXBQJEHGNFZAPQTEWJDLNDQRGHPBNGVEOFGOXGLSSHXDLOMDPKXVTFUMYMVGVHKURKGEHGLHNZSKJSHEIOXQPLZCDBECUOVKNXATLUKFDFLHRCET");
    msg.goal_xml.assign("CZQNDCTUIGAISBA");

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
    msg.setTimeStamp(0.8394486701391976);
    msg.setSource(15412U);
    msg.setSourceEntity(7U);
    msg.setDestination(31738U);
    msg.setDestinationEntity(41U);
    msg.command = 249U;
    msg.goal_id.assign("LPAGBTRZHNKHFNQRFYSAWMQEXELHYVNWGKZZPIWHQVCMVAATYRAWYISDUXSODCTZUGEJBGDSEXQUKIEJUWDGSMCJRKFOTWWCECSCWNYDDNAOAVGOUJMICZBULPDFQOPQUQIENMBOJGVGDLTIOIOHVTFBPREGHKYQRPINWJRKQLBLXHOGJY");
    msg.goal_xml.assign("ITMPKIQGNCDHYXWVRBOIGKTBMOOJPCUKSUTWRLMMKMZHJRYLDNVCSSPMIRGWVCSEATWBJISAGKVFERGJGRMXUEPIDHNGERXXMLIODKNUDUFZQOUJSOPYBOFHCLNYEXBIPTRTQABS");

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
    msg.setTimeStamp(0.6585849673027899);
    msg.setSource(29301U);
    msg.setSourceEntity(172U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(180U);
    msg.command = 118U;
    msg.goal_id.assign("ARUIJPXPHMIBIKXEUOBZWOWCUAEQPFSRQJFPVTIZWZIRLJBBPBSAJHNMMEKSKGAGNLAJBGEOFVGLZENVUKYCUZAHXRENSMRZBLNDALYBZTVRFJWXQOVXYCJZZKDLMUKCUVPVIGXSKODLIJY");
    msg.goal_xml.assign("LBXEXGDURIYSSPQBTGWNQRZVISXGDZFALBKHQMADNUKCREVUWSWVJQM");

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
    msg.setTimeStamp(0.2567675840018272);
    msg.setSource(1951U);
    msg.setSourceEntity(38U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(138U);
    msg.op = 78U;
    msg.goal_id.assign("AWSAZLZDNLUOCBEETBWZPRILFEDUJQPVKEGBKTOHAMABQKLINXPF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KFSZGPJUXHMJKOPKNGVBKCPVDBSQUEMGPVHCGKZANWWBOPDAMCBXNJOUVIVUWLUTGJNWHZFRDNPDFYNVFVDHSSYQGMXTDSTTJJCPVXCYDECLSEOFQWKMEAXMMEODLIIBGPGFUTRQVXCINXBRCNHAUKFXTOWXTHDWSWFUAUWIKSDQBWYZHAAIHSLNYGVTIHNJAXOZEPZFETLOJLOIGJKFYMYCYZMQAHRSQBBLIRTOUYZRLEQARMERIZPYECQK");
    tmp_msg_0.predicate.assign("PQMMXDYAZDUNGTZDYNOCJBTKKTTGZLIABWWSQ");
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
    msg.setTimeStamp(0.8533587678192642);
    msg.setSource(15086U);
    msg.setSourceEntity(32U);
    msg.setDestination(18644U);
    msg.setDestinationEntity(131U);
    msg.op = 94U;
    msg.goal_id.assign("SBTLYMVBPQKJICNVYQDVEJESMFYOUGIHULGWRKVXSHLAQYBRMLKIHMTGHFBUSWTQLOZDEHZZNGEITKUUMHUEKXGKEYLYKIZHPWXIIHPAAPOEPBWORCTRALXCYOYNWDLPYXRWJFIQSNZXGOJDSAGDRDDIEQFNXUVHGFMADKRCBQZPSMPZPAVAHUCORWFTDGSZMVOQVWOUCTTSNNGAJZPMTJNDCYBQWJCICJVBFFLNKBBOXCFKRERZQFJJNX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LYJTCCRZKECTGFNRJJVYOLZGUOYXRXYQGDLUPQKGSOBHMPPHHTWICPRLELARTUXZPQYIWQMBZYNBYAKBSRLOWNUIWRHMYTNVCDEBPJQPZDFEASOJLXXLABSCTWDPIEROHXCPWKFKAMUKMUMETFJZAMVNNVLHUDAVNOXJB");
    tmp_msg_0.predicate.assign("MJMFRTIEABLMBXIEKITTKPFDWXGDZIBLRCQTPVPE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KOWKJXAOXQHPD");
    tmp_tmp_msg_0_0.attr_type = 19U;
    tmp_tmp_msg_0_0.min.assign("QJKZXQMIETSAOUSDPLNNFFTFWECXZCZWUDYVGHTCFFIVPVDXDIWGOFELYRHGPNWOXVMHYUCWAXVATNBHREXWAUMZCPZJGIYUCIUSGJMEFVQSFPIGRMSHHMRLXZPSGKNVNAVJBCTURMLHJ");
    tmp_tmp_msg_0_0.max.assign("XPEKZESFQJCRSKSHWOIJLOXLAJFTCUXIJESQMGPYPPNOUVADMGJTVLQNINSMUTYBBPLBKFXOOVHWNZXYINWNVPVAGXPWIQCXCRCOLYEGMTMFKWALSPUKRKSLTDKNHKRBMYKMUJNNIHQUGOJUQJDXDCVEJMIWOUEZBWLOGZROAHUAACFTYTGFYGLQRHDWAGBIQWRMWAFLZHRZEIJFEBVZTQNDCMVPCDARXBTFDHSFVYEESUZB");
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
    msg.setTimeStamp(0.7461514539970618);
    msg.setSource(18292U);
    msg.setSourceEntity(35U);
    msg.setDestination(96U);
    msg.setDestinationEntity(76U);
    msg.op = 210U;
    msg.goal_id.assign("BJJJDNNVNSRTDHZJRVPUJQUBRXAEPQEHFHTRZTTMKYCBLOMZUWMGNZHRMMOEPOVGWZWSYQFTSTAIYK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CZEKNGQVUQCOKFJDMISYLRLHMRGYVNVPQUUVTXIECQQTZRTRIHHJRLLFLBYNKXOLXWGAFQRBZYRWKZISIAJZDGGJBOFQFQAJHBTUIMMDAJXMMJWCOGFZPSKXHODUAMBIHDKPGVPPEXEEPXDJXZMIRSGTHWC");
    tmp_msg_0.predicate.assign("RMBQRPCOLWKDNFFRRELGGUDHPTUHLCHMICVQLUBKAWNARHUJCQTLBBWKONQTGWEVIYDLAJHSAICSJXRYQENXCTJTGTPPSUBOWHPNLXYTQZFCPEMNQOYZGGKXHWVMAAMSDXSDBGSODCNRBXLZJBCFWXZOKMGUPTMBVGOIRIUAJVSSMZSFMAVRUFFDOFOJVVTEDKEPIQZXKGKFIUUEKDJTJZIYNNAJCDAEHOVBXYPNILWWYXMZSEFIWHYZQZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EUOJTFGRFIAIPQWFSGOALTKXHEBCYIONTVFUNYDCIIPAWNWRMZZLDDFSCQNQSASZODJFLZUWDWPBTSGOJHZCBLCVJBQEALXKCFFNDVLKTRUHOHGEAMJUYJEIMNURRHWRKBKLMEPKZWLZYAXORJXXYGPYOQPVBHUKZAUBDTSQFVKRRUOZPSHVWVEBWHXVQBVNYNXYJMMDHSF");
    tmp_tmp_msg_0_0.attr_type = 40U;
    tmp_tmp_msg_0_0.min.assign("LBRFUMDUCYZMWVBJPSTIHJXFKCPSLJYRHHXRGNEULDFNYNOBLHGMX");
    tmp_tmp_msg_0_0.max.assign("MWDVLFOHJZTDRFJYBYCSAHMXNWLYMQBCEDOPAQAYZZRDPNHTPYT");
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
    msg.setTimeStamp(0.4254494448397478);
    msg.setSource(64394U);
    msg.setSourceEntity(180U);
    msg.setDestination(32637U);
    msg.setDestinationEntity(242U);
    msg.name.assign("JDESIVARSARDSQNXQBRKUCEODXNLIJFRAKOREMULTLYBFOYVWWGHQRQGJGYAMZPOJYWYMHITYHJCWOKJJUFPSOUMCX");
    msg.attr_type = 228U;
    msg.min.assign("RCDIRJTYPTSXBJMHEKQWDRYHMKHQRPGVWISHABFONNUWPTSXLECWGZNNGMGVOLOWWVBISKJPMTSKQVYALXVYROWHBBOIAHSTEXHJQMBIWYWKQOEGBJAPAYEJVCQG");
    msg.max.assign("QLNKTQGXBMEZQOGYMSNZVWBSVJYDEJJUYHLAFZGGQAVJCNCPQPLTZACHEYNTCOPXTAKSRHWHZIKTQPSPYWBWBIKKDCASOATRVJHPJOYHVXIFEDNVRNMICSUUBXMYWGBANRVOJRFIZQQDOWSUZCLXBKYELMUHUPOVLFJTNMWJDLDEPWRCPORF");

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
    msg.setTimeStamp(0.15290889961390264);
    msg.setSource(9790U);
    msg.setSourceEntity(169U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(196U);
    msg.name.assign("LKWHTQCTRDVPLJQMJAHMPBGIHQKRUDZCHOVNEWGNFADUACBVWIFWAFMSBMYKIGVVSROZSZIODNKENDHGPIFXDUBGTYYLBZLCRXCOLTJGGYUJUAMXPXALSEOOSZYXTVEDYPAQFRQCSOGNKPEUTRIPYBUHOTFENDLMHMVKEVBWVWRFTHAFYYXCZIPEQSJBWHSDOQEBCKGIRONRSKJUIIMWKQPUZLRLFCVDWUXXCNZJQZXYGNWJS");
    msg.attr_type = 134U;
    msg.min.assign("CGHCCMVXMFKIPOKETNGZLWJPWZVHLTQPNAQKWZLOJGUGQJBTXGSMFZIFHHWRDBEIDFSUDJYBVRFYVEAZLCNNAHGMPISNYBEOZRJBLEDORFLXMYMPISCHFXCELZBNPVBOZFAQIRXJUWEVGMIXQIQDYOJGEBQRSLDGJXIVSPWKTNYVMWUDBVKKGHTUFNSKYMXHKFVPQOOWPTSROQYALDCCRUJEHHAQUCASTTZNTRUA");
    msg.max.assign("KQIEGDNILDVXTSFCTIPHMDMJRPSYRHTVUNRIPBOZFNFTIFFJUPWCNCHMLNMKZUHBQCWQSNZNJRSBJKFBPCYQQXBLGAMXIMGMHMQXFDRLGJMALYVKWOERKEZGIGITKOGHACHZPLVXWVXEKOXUVMRODTOWPAZOWFTWJEUYBCWXRLAYQNJOLYILLCRTDDSHPNA");

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
    msg.setTimeStamp(0.5325217228629467);
    msg.setSource(13392U);
    msg.setSourceEntity(202U);
    msg.setDestination(34433U);
    msg.setDestinationEntity(24U);
    msg.name.assign("JRNFQNIPBQELRJPDCZVWEAFNCUZRIHXEWZDLRMNAECOLIXIULOAQFCXFJSSLOCLKQTSHAKUWVVEAAVOUQFJGSYUWQMAVTTZVNSORXDEKHWBUJJFYTDTZHDYGAZNEMBXGBNFTDMASAQCWVBDJHWFGIUYHMOJGTIPHPSCPGXPMDYXRYKFYGBWVLBOCHTZMPBYPEMXU");
    msg.attr_type = 158U;
    msg.min.assign("XXDEHHMVNUDY");
    msg.max.assign("HRUVOSUEKLUGSZDNLJJGETWLIWRWEZFYXDMRYXXWJJVKDNYLHQLUKEKSRMUMGNQLJLVPTAUZYTMADAZFZEEIQBXDHXRGWTCPWGIBWMDQYQZKJAGOPHJPOM");

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
    msg.setTimeStamp(0.4436093246507651);
    msg.setSource(62754U);
    msg.setSourceEntity(6U);
    msg.setDestination(42644U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("MJHRPPPAWJSLCGXZKKTKIZIYJVFWFUSRNSOHGIKVINLGIEHKYVOWURMRQDBCAVFTZXHPVEYUCSGAOBXZADHIDYAUEJKXRPOAZXNAZLUHKSPQGMREJXIKM");
    msg.predicate.assign("RGSKDOCQLNORAHPEKWULRZKBHFUMYJULIWFJCKBLJRZLWSPBVXQTXKQGPQTZGAWMWFWDTEIXVIIAEREVHZTMGYZNEBEHUNNYLWVAZMMWJPPUCZBDGGAINEPXMVYIOSSMYHPBWCLEQJRQRIQLOVVTLXBKZOHUACDTXTJZRISQYFXXMPUZKKHAXCOORMKDYSTBBBHFPFGTDSAXDNYNVJAUVDCJJDTCCYG");

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
    msg.setTimeStamp(0.7858221996122272);
    msg.setSource(49094U);
    msg.setSourceEntity(78U);
    msg.setDestination(26825U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("DTRGTMUKJFFKCVPHTK");
    msg.predicate.assign("YRGXOVWGLWIGJDOVSTIGJ");

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
    msg.setTimeStamp(0.6601553034909914);
    msg.setSource(42382U);
    msg.setSourceEntity(244U);
    msg.setDestination(18014U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("TUNVEOKYFLHFNZHUUNXGLCDUTLWTRMKLEDTCAJFWPORTWXGMOGYRTLPSFIRBSJCAYODRQJAIMSYMFWBHQPENJDBXVKQKIMSHNLJJCSQFXPAZGYPRUMZCBZPTXKYSZSPOWWYGJFZUEKBKANEXIPLJROXECVGMP");
    msg.predicate.assign("LPEXRZYIHSELADQNMWHWDOMIIQTPCUUYBBIBJXCLYXAAVKUHAPLSNJJDNDMGABFKTUZFFGYMZOUFFUQCIBTVFVVILJEWZYXBVMMNXOGRSNMHSPQNWWYGSCBGDUOHUXYXMWTEYPPSAZKWEENDCHQTKIDANXLHLVWLRRQIDBJCJTJQUIVQJUBFFHOTAPMEPZTHZOROACRCZQBSVPCKNORZXGJTOFPSRXDNKEKEMKEVYCOLSSWGVFGWKYQRGGATL");

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
    msg.setTimeStamp(0.6010084992151525);
    msg.setSource(8017U);
    msg.setSourceEntity(196U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("BAOGURMSBECWNEIIGMYNDKEYTIGZQMCAHEUSWKUOPPHNKXBXVLTHILXZWKAIPAOXPCJYH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FORVWRYKWIWLWJWMQKQGIIZCIPNRKPRXUOAVQCEFENXUCVZMFRIDHDSAJWHPLGSOCFMXPNGUXFRTOBJLHYBNWJMZKHASYOFZDNEBTGLNLSWCVHKTINBDVETP");
    tmp_msg_0.predicate.assign("JQSEBQIVHZIZZLTNEDMTTFVNREBDJWGFCUCBMJJTQPYYTXPGXCBMAUPFRXOTKNKHGCDUHUAPVWNYMIMZXLHKTWMGVQJITFCVSRVLRYLCBKAHKPDFXAQYMJOZRLDEJCPYHYUOBNFSORGBQPYTWRJRHAHFGLWUOAKKBSAXIIMWOMLUREGYNNFLVZAXIXUUKDIZZROPSV");
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
    msg.setTimeStamp(0.8143975707068807);
    msg.setSource(65246U);
    msg.setSourceEntity(131U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(94U);
    msg.reactor.assign("FBDLNHCOFPWIAQGQPCGDMKSZOLAZYKEJWJRYXDHPUJASAGGRADMCXISNEWSSQFMCLCQMQMBKZRFDGZFAWOXFSVOEPULVXJEGTZIDDXJLWRMFARGYZTGIFPSLDPBCVITJQCETVQHBOFAVVJYMLYAINUORYKHBLXHONRAHSXKBQEHUXFKJNUXU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TLBXFWIRTXECKWRIWZNYOFJEWZKLDURACJOUDMPZJSNBAKQTEQLBVWITOAQHHKLOGVKFRGZDVKUOWINUALNXLBBAAROTSQOYYVX");
    tmp_msg_0.predicate.assign("SVXUERVUWMOXLQFUESLRMDUFKFCOQIWRAGZTYYIRJHLPBTCLRWOGUOHTXTHBWDWLTIDCDVIRNXJHZWGIKVJQQEVGAXMZRDJIJYKNFNSYAUZAXVCBMESUVRBBTCBDCTAA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VILPMIGXQSESVQZGTPYUYZVOOFKNRNZAGHMWYOUJVCEFMPHMVIKQLPJNWOBWBDJWBXFCAZTXJZJAESMCIRMNLHQVJWGSAEAQHIVDHVFCXDTBZGHSPRHCPZMVHFOSGDKGZTNDJSQRIQKNACLCEGYJ");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("NTBYRCRULLGDCFOFXPSFMOCEOADHYUAUNGGKOZRPXCUOHWKETZWPPMGSSYZGJYRQWSUHPUFEIBJRQIZRXGWDGCBAIAOKVBULIQXAVRFPVVNDMIERHKHSSSSWSUMKAJBXBVCXHSNQKWDBNFAOKGDKHTTMCBJMBYHQNICLTPWYZEHMFZNB");
    tmp_tmp_msg_0_0.max.assign("GHIUODOYCBHLFDSNXSUYWAKAFRLDQPXYPFYLHZUYBQMVBHGPYOFNGTHCXAXRXYTPCMJWZMARIHWANBVMPJCTWNZZFTZQJYPSMXXRUBKEZVSGEWIVPKTGWXNZWEHRDJUKZFCFHEJSGTUNIYFRIDOQDQGEHIBIAVOEWLXDNTVKTQRMVLKBKWGUBESPKAGVLTSQQJOVBGCHYIVTQLXAAMEKFELOZREINMJZ");
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
    msg.setTimeStamp(0.1354384815569909);
    msg.setSource(7631U);
    msg.setSourceEntity(140U);
    msg.setDestination(48749U);
    msg.setDestinationEntity(66U);
    msg.reactor.assign("QBQLRNWKWFHZNQGFCDRIKSEUUMZTITHVUJGWWUZDRPGYKARSGLCXUNGPOOOEHXNLNPQVSMBIVNXNHXTGTOPYEDVSPWOALLUZPTSEQSIHGGBZYCJTGPAZGTSMBUBXFYVOVQADCYKJIETHFOWFLVPKULPYRADIRYJYDEVFLDZOHCQUMIMKAAJANBREJICSMJVXKEMBCRXEWMTEXFCMJUYH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HRKIUTNZJPJBYDJUXVGSPEYAOPPVCUGYLOBD");
    tmp_msg_0.predicate.assign("JKFCYRRNSFBUAXQOIFDWHZUHFGVKRJLOYFATDEGEYDWVCDPQCIERAXZLELQBKVOOPKVIJNCUQUSYOXYWLMVXNFYQVEULUFOQUUXWERQQPEBGTOPYJZGZGUASHMWMZHZDWAMXSLHVAYTGPTRRWLPPCTCXIKEINIMPKBPLFSMACTXAMNHTIAKBNNBDNQRSTXWWOSEMHCNSDVZBGGBDYKICJZNJWJKRKALUHHTZXG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XBUHNWVGBFMELKFBSBEHMANFDZVRLCUPPKEDLVYKRJMUPCTYBCZYAQXNSUADHPEVISPOZWCCGPLUIZTLFDHLVXNVHXQNHQRQYIJETICF");
    tmp_tmp_msg_0_0.attr_type = 251U;
    tmp_tmp_msg_0_0.min.assign("TVCXOBKUXUDBZDDNIUEDGNYTHBXVLOMAEFABVIREVMZPHUNLJPQJTSAMIFANWTMBPMYPMUDQGOZWKSWLQVJYRQMENCLQPEJEIVNYCSLITNXDLXRBPGJEZCCFNSVAGIFGHHW");
    tmp_tmp_msg_0_0.max.assign("ZIZRUIOEXLDTGWDQWPSKAFESPJTKTBNYENCQOUCTYSBQTASYOMXGYWCEJVAFBLKASVCPMFPIHALJJZIFTRWCPOQFDQGRZRHFEDBGGJGBRTJLHAKHBBJCDNLWDMUOZZFQHSJZWNUVVP");
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
    msg.setTimeStamp(0.8015053596968177);
    msg.setSource(25564U);
    msg.setSourceEntity(127U);
    msg.setDestination(59101U);
    msg.setDestinationEntity(176U);
    msg.topic.assign("PSXZXDCHVMDJCWPLLHBHFPMGABRZOFAHHPEFURYKZRXIJNYONQFHGUZSLOZRYCUJTWWPYALUMVWCGDDOJVTRGMBKWORYKIWUNPDRGBDJFDPVEJEUCSZCPDEEKKBFYMEHJGAWLLIFUCKAKGEYKNXCSPNAIMQQRLISIQEBR");
    msg.data.assign("EFCWPOBRDITCIHTPZYUNCQLSACQWDDUOFTAQSOFRSKKVNOBHXQOSWKEASYWRBBLLJQXKBFTDHSJZMXWQFRMBUIHJTAQAUDYZCPGTGGCDTKIURPMEWOGLFIRYJRVWBHGQFAPKPWACUMYD");

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
    msg.setTimeStamp(0.680942910799801);
    msg.setSource(63722U);
    msg.setSourceEntity(185U);
    msg.setDestination(16597U);
    msg.setDestinationEntity(118U);
    msg.topic.assign("OHFEYRXPMSRCFJGHQMRMLMXUCDTZHDOKVQBKDKTRNPVOAVNNJWURYWIICTIWHXUEUGWZOFQEAHVQBOAWLSYNTAKRDZNJDTXBUDXGPDDGGQIEGJIBMSFKVQGETPCJKFTKAJMMTSEABLZQUCIVZPVXFWCFOEMORJBWYGQUBAXDKHWHIOSLMCYUNLZBDWAJPSXPUKXSHLBNPCZOZRQEYLEUVYNISQJWSYNRTSMXGJFYILNRPOKECLVTLVZHIHFY");
    msg.data.assign("RRDTSCCWCISCACNZIARQLQOZPBRNZPYGDZWOHHLWBB");

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
    msg.setTimeStamp(0.2486365977504914);
    msg.setSource(29106U);
    msg.setSourceEntity(68U);
    msg.setDestination(22500U);
    msg.setDestinationEntity(69U);
    msg.topic.assign("RBWKGHKWNXVTSUPKDWEXLQLTCEVKYFFEAMSSEJTGUORMKQSUUUIFXUSJTKCPAIMGLGZZGWLBQSLYONXYVZRS");
    msg.data.assign("AHUBEVWFWRQYTOZINUCXCTENGGYFMZAOHCSORCL");

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
    msg.setTimeStamp(0.6942510861453155);
    msg.setSource(55381U);
    msg.setSourceEntity(45U);
    msg.setDestination(39767U);
    msg.setDestinationEntity(194U);
    msg.frameid = 63U;
    const char tmp_msg_0[] = {-122, 51, -25, -71, 119, 45, -12, 44, 104, -6, -44, -65, -6, 1, -24, 89, 106, 69, -23, 79, -1, -31, -38, -82, -8, -1, 66, -14, -89, -113, 68, 2, 44, 19, -84, -80, -74, -33, -100, 41, 15, 66, -21, -36, -27, -75, -68, 15, 5, -92, -40, 14, -6, 119, 5, -116, -128, -14, -112, 98, 120, -2, -127, -28, 48, 89, -63, -43, 51, 86, -26, 3, -5, 36, -100, -97, 45, -31, 49, -19, -62, -86, -10, 106, 97, -67, -121, 67, 42, 22, -63, 20, -127, 71, -62, 36, 60, -7, -6, 43};
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
    msg.setTimeStamp(0.7052740347358767);
    msg.setSource(40107U);
    msg.setSourceEntity(66U);
    msg.setDestination(64871U);
    msg.setDestinationEntity(124U);
    msg.frameid = 194U;
    const char tmp_msg_0[] = {-75, -100, 26, 18, -112, -34, -27, 43, -60, 65, 61, 29, -3, -101, 18, -99, 119, -75, -63, 67, -11, -122, 92};
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
    msg.setTimeStamp(0.7900391038696737);
    msg.setSource(63346U);
    msg.setSourceEntity(141U);
    msg.setDestination(56272U);
    msg.setDestinationEntity(94U);
    msg.frameid = 160U;
    const char tmp_msg_0[] = {-40, 60, 25, -40, -17, -38, -45, -108, -80, 32, -47, -82, -35, -16, -22, 11, -120, -121, 92, -77, 122, -7, -43, -122, 13, -4, 4, -116, 116, -85, -41, -123, 55, 2, 84, 102, -12, 118, 13, 61, 107, 115, -18, -29, 51, 74, 52, -86, -44, 66, -110, 91, -127, 56, 107, 75, -97, 108, -22, 79, -78, 51, -104, -62, -81, -50, 126, -50, 93, -97, -28, -121, -19, 10, 41, 123, -124, 66, -128, -33, -37, -113, -50, 29, -121, -43, -12, -15, 34, -45, -78, -104, 35, -121, -29, 68, -63, 35, -126, -110, -108, -78, 55, -25, -26, 85, -40, -121, 59, 116, 102, 89, 18, -29, 123, -119, 25, 89, 59, 13, -38, -58, -4, -46, -40, 90, 0, 121, 62, -98, -63, 65, -14, 63, 61, 96, 31, -26, 118, 40, 87, -107, -122, 60, -27, -67, -51, -115, 80, 41, 103, -57, 65, 75, -69, 115, 81, 34, 92, -49};
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
    msg.setTimeStamp(0.3460583900862648);
    msg.setSource(49968U);
    msg.setSourceEntity(135U);
    msg.setDestination(63739U);
    msg.setDestinationEntity(113U);
    msg.fps = 57U;
    msg.quality = 236U;
    msg.reps = 124U;
    msg.tsize = 24U;

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
    msg.setTimeStamp(0.8136175221258801);
    msg.setSource(6445U);
    msg.setSourceEntity(242U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(123U);
    msg.fps = 203U;
    msg.quality = 120U;
    msg.reps = 197U;
    msg.tsize = 187U;

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
    msg.setTimeStamp(0.7880189040227557);
    msg.setSource(9741U);
    msg.setSourceEntity(6U);
    msg.setDestination(14994U);
    msg.setDestinationEntity(174U);
    msg.fps = 11U;
    msg.quality = 189U;
    msg.reps = 120U;
    msg.tsize = 29U;

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
    msg.setTimeStamp(0.5566777339121373);
    msg.setSource(42198U);
    msg.setSourceEntity(156U);
    msg.setDestination(38695U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.041589949198495346;
    msg.lon = 0.38420893755321006;
    msg.depth = 162U;
    msg.speed = 0.6152561219287092;
    msg.psi = 0.8106000216567845;

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
    msg.setTimeStamp(0.9023298525379536);
    msg.setSource(63235U);
    msg.setSourceEntity(181U);
    msg.setDestination(36076U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.3461537045558243;
    msg.lon = 0.44453971993944463;
    msg.depth = 161U;
    msg.speed = 0.1595156063530897;
    msg.psi = 0.2994571365958617;

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
    msg.setTimeStamp(0.9187496319629366);
    msg.setSource(38189U);
    msg.setSourceEntity(112U);
    msg.setDestination(41437U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.5496372538198169;
    msg.lon = 0.9875750920696332;
    msg.depth = 133U;
    msg.speed = 0.4921564955615486;
    msg.psi = 0.3678165852804979;

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
    msg.setTimeStamp(0.20071550950355754);
    msg.setSource(48187U);
    msg.setSourceEntity(217U);
    msg.setDestination(37673U);
    msg.setDestinationEntity(88U);
    msg.label.assign("MFTLEQOPPW");
    msg.lat = 0.15743043647599508;
    msg.lon = 0.46848076689393625;
    msg.z = 0.8978700865216223;
    msg.z_units = 182U;
    msg.cog = 0.11600481334021917;
    msg.sog = 0.6037954840473648;

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
    msg.setTimeStamp(0.10412621934956223);
    msg.setSource(35083U);
    msg.setSourceEntity(107U);
    msg.setDestination(59397U);
    msg.setDestinationEntity(197U);
    msg.label.assign("AUGZOPYHTKTLZDPJDNZJBXFXZREWHBMTJBUEBYYZFWDRRCWENTXWQMPOVFFSHWMJNBMMLWCJVXZFCFYHRVLNLESSKXZQOAAIMKOQBITILKGBDGXIXAIHCUORN");
    msg.lat = 0.9793429934518671;
    msg.lon = 0.009202092171416099;
    msg.z = 0.1268131332963922;
    msg.z_units = 211U;
    msg.cog = 0.9835489746612244;
    msg.sog = 0.6606032729050524;

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
    msg.setTimeStamp(0.5105123834291941);
    msg.setSource(43960U);
    msg.setSourceEntity(155U);
    msg.setDestination(46582U);
    msg.setDestinationEntity(141U);
    msg.label.assign("NNSEUEKENUZJZUEQXROOLCOKR");
    msg.lat = 0.7694662979015593;
    msg.lon = 0.13337032164872176;
    msg.z = 0.6592104120554438;
    msg.z_units = 102U;
    msg.cog = 0.0775700992758952;
    msg.sog = 0.5449238217568837;

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
    msg.setTimeStamp(0.22648819513361806);
    msg.setSource(32938U);
    msg.setSourceEntity(154U);
    msg.setDestination(1315U);
    msg.setDestinationEntity(168U);
    msg.name.assign("YQIRIBNLVURPTHEBEMNXCEOPTLOFLGTVTMDARNNXUUPQQEKOGUHBMFPDLQYFGDXZACYUDFKHHVWKXCWYOIHNVBWHJDBZJOORTIUOMKHZLQHLSSEWVQABNCDVMBBAAEYBAPAIPIOATKGCSSWFMKWKPISMRJKRJIKYECLRVDNXENVXFGIGLGPJZLAYJRWMFUNCZOCQSTJQMZRSWOJ");
    msg.value.assign("ITDFMPHQJXXZROJBQFULFCVUBIPSKQHJKUANNEABDLECGCNQHCHWWRAYIGOHOPBNVYHVSIVEWRGKULQPMAZXYDYJKFGQQVSKPOPSJPWIHFUEOYMUJDVHWEYPKLEJTKRCOAAMAIBCVSLWNQSMZTEZMBRCFZJIEBQLTITVKTSWURYMXGPYLWFGMBQTXNBYGBKCJLTDOXCXAGRDUFKDGFYAOVZZROGIUNEDHINFZMVNSURPJXXDTR");

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
    msg.setTimeStamp(0.8480640658440506);
    msg.setSource(63781U);
    msg.setSourceEntity(207U);
    msg.setDestination(57662U);
    msg.setDestinationEntity(203U);
    msg.name.assign("RGBIFSQQUHKTYVWGPJIVEFVZVUPMPYQBQFXCYCLDXXIPOGGKMXNOMRQWFVCHONNTDRPAYXLWZSGKCIXMYXKZEOZNABKUWWDEYGNYANMLIWRALPLHIJSUWDCHPSPRHAWGAOOOJCMFZIZUGKTIXIDZQCBND");
    msg.value.assign("WQNHRXGVVRGIYEQJHJDBHAMBUNBDLUFZNYRTYMEPKCOSESHLPOSREMIFIBPTBQSJIECEYAOPXWDIDWXYTYQWKUURMVSFFGLGLLWPWEIBQHVVZJZMTJHNNDUCSTULRYVHZPQOLCHCTODFRQAAHDIFXLGQMMBQWKKSTOJYZTFPSTNHICVXKJLYXKRXPKJNUVZFONZVQKLPUB");

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
    msg.setTimeStamp(0.7266660736657602);
    msg.setSource(62165U);
    msg.setSourceEntity(155U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(92U);
    msg.name.assign("LICUWAIBDAETOYDWIQFFOWJJROZUXQFXIJNALHNDIRMBEEMCDYVZKUXSORNSKYUGTZCNFSKABDIFXIBWSPGSSBHLMZDVPEFVRUIVIPBEQJQZPKQTDGOSLKLFUYJLOCYRYKJOCGMNEQUHSRGTNGVYBBQKMZTMFWPTUPERGSNJGYHTBHDXOLWAWAKMVXWKEAMRVQFXNNAJJTVATUYNHCCDXGTRZQJLZCMO");
    msg.value.assign("VODIVLXTSLFJJZTRQOCHXEOWDOCVMBNACJZTMFUNBCLPAURASQDZDBFBMKNUVBKBMZIMORQHLHXEHOWBQTFRIPMJCOURZPYMPSIWPNDUJGIXCDIBGDIBXFXJYGWCGTRXWPSVKXWZHKKNJAHLZXSETFGWUAQYMYIHKJIASZLMLYWSNDHJUELRKGVFPCUTTSKPVIQFFARQEENRHDYPMUSYYWTTEOYW");

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
    msg.setTimeStamp(0.6636187284024297);
    msg.setSource(42005U);
    msg.setSourceEntity(28U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(48U);
    msg.name.assign("GGXBDOTAZIPHRIHSRUMZJDJPRNNSWCUWAPYFGHMYGRUJYUWAKMGKXUBEFNLCSPSATDQIQADWMOMZFIYPUMJVYXMASIBTTBOEESQOPKQKFCCTXSERLPOBHZDHDNXQMRAIERUOTNLSCFIJLKZTUV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SYSDMBTCKEVHGFIZPLBUWEGXSGWRYAINJLJEVYTEIWEXZXABHRSOGWEVPFWFCUZUCMMNOOCJDGKNMIVGPFRZWTNNLHOWBUHDLYRJTOXHBYKLBSUFZPOYFRMKGCUGCLTRWPKQHEAITKBYNVVTAACQQQBFCXBHUQVXLDSSTKDTZPFAMLYWMNO");
    tmp_msg_0.value.assign("ZZUMVPMGWVKCESXTPEXSLACODWSOHNIJTDNZISBQPRJJGRKRROGXKVGFBGQZXVUZLCPJOSNRXAUFCJVFLPYYTJWUEYSRVZQPAMRKKNYFUEEDOVBHDYCVAYBMWSNNIMRADLDIIHZZOKHPZFZQUJROYTAEMNKDNCFXDJPBULTGLCYIRAGFTLIATEWSMOHANQFKWHABUFIEDXHSCSYXKJWEVBQENCPUWFBUYT");
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
    msg.setTimeStamp(0.6253293459955434);
    msg.setSource(34810U);
    msg.setSourceEntity(127U);
    msg.setDestination(6520U);
    msg.setDestinationEntity(213U);
    msg.name.assign("AAYCYGWIELUNTFJCZEFPPIGKUKEYFKJFIEHMJIUXELWANTABKDKLNI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JRCIIYATRBPCHGQBVNVYAKHSEBUCPZUMVLSTZWQRGRVMY");
    tmp_msg_0.value.assign("GFSBNIEXVNFQKAPULUIHRIIBFZPBOSIONKQQXWZVUGLWCRIKIWTZESPJXPVXPMUNPCEKSAXAPVTFPQQUXONFIDTBCOND");
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
    msg.setTimeStamp(0.4180450488756816);
    msg.setSource(25409U);
    msg.setSourceEntity(76U);
    msg.setDestination(29463U);
    msg.setDestinationEntity(112U);
    msg.name.assign("QEXBJSTGUZFKIVRSFQMJCMQGAHMZZKLERSIBGAYLPMAFQFIYVNEGXWNUCKLAIARMMITBVORJWEELKBSPFYRPCQQHKFLRVSWZYWEJPPXNWXNXOUBGBCNBYLUMHY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UIQLHEQCWTDPOHVTLGORXYUVCLZNSZILEYVATNEAVQCKMHMHJFSUYQOTNAPDSEIZCHWLJL");
    tmp_msg_0.value.assign("TSIGBIYLSDPLUICZZNEKPMJGWWUMJPPUSROPGPANKBLBENXWBWUIRLVDMRLVLJHJNOSTTWVASEZZWKHFGCWDMFVMNBQYCQXBDFETBAUXZKKTKQOMSJVYBC");
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
    msg.setTimeStamp(0.2706915914068384);
    msg.setSource(21990U);
    msg.setSourceEntity(155U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(220U);
    msg.name.assign("VENDVZXJMEDQBWXTTNHVWTUPKVHHLLIRKSHIRSUHHJTDYWJKUKNOGGPZNFMNSSLCOOEWYTQQBDUVDLUVIKRIVQXULSKFAETALMAIXFLLIYCMXEKWDSJZRIGBASACLGZO");
    msg.visibility.assign("WZDSFMVXBLRTGWPJFSVKOEUHJAJHRHZYNGNAPPCDSFHGONMHPWECIMRONMALABRFUNJLGGVVPTTTDOJIBHWUBVDOXCQORAPPNAVDNYODSMTJBGXZXVOLXBFQDZZJLMLRPTFZQIBLUKQBJBFEAUXQSEIPCCXZTJFNYGAAYISCNHCYYKQZKMEEDXLRYMPWEICIGYHLVINKKUKKHCEWQRHWJACWFRGSUSZFWEGO");
    msg.scope.assign("QCTVIGLZWQAPUMUIJGGUNAEWVRAANAQCPDYDHKFRMHWJCNVYILETOLJFPLNXBMXLUDEOLYGMCQOBJAWVRGEHSTHNFMFSXNEPFUXRPFIGXXIYXVZXUTKCYWPKQAIJRZZBEAENOZMPNDYKTBRGHYCRSQRILSWIAZWQLSCJCTZBYNKTGGVDGZOHOOIPTSJKKDDRKMYVMDZBB");

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
    msg.setTimeStamp(0.01725120377652789);
    msg.setSource(47451U);
    msg.setSourceEntity(212U);
    msg.setDestination(16112U);
    msg.setDestinationEntity(23U);
    msg.name.assign("KKDMAWYSHACSUKWXXBOIMYHSUDDGIWLEONGTXTXJEDGYOZXONCLLMGWAVRTPZEYNSUPXKEOZPFQOXZIIHQJNZEIJVFYKFRALMQHAZKQ");
    msg.visibility.assign("QLMIIKLVWSOXUSKUGZVRQQOXOEDZBWXWADRWVDRGTOZRHBOJFQQDYHYNQOPCLKIUVVRCCUFUPZTWGJYGJWVG");
    msg.scope.assign("EYLCIGEZCARJJTELWNZBSXHTLVSSTVPGEJJORMBOWHMDRNUPVTYHVVRYCFHQREHRMPGLRWUEGZHKEDKKLKUDFCYLRJMXATINQBWINAIJAZACCKJQTUFMFJNFEMMVCYBNLIWPDUHGVKSPZCUSDXYTTOAWPDFGKHQZBBLYOIQGXXQZQKFY");

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
    msg.setTimeStamp(0.5364441283850315);
    msg.setSource(6492U);
    msg.setSourceEntity(15U);
    msg.setDestination(3936U);
    msg.setDestinationEntity(31U);
    msg.name.assign("ZZQXXBDCAEDYEKHACPINBAREXHOSOINQFCYVLSXOCIMJQLDKQGQAZZUDWQYNOVPRSVXVNUGABGFEPTVSGSMXIPRWEYRLRKUKVFMGWZXJBBDHYCLUUUMSJTSYTHZNAJUIHNZDTIWICBSCQQXHAUTAALZONDQEYSLBREYPJFIVBGHPPMETMTOFPLSLNLUMRGJCGKOVRDPT");
    msg.visibility.assign("UETTGQUYKQYOBUMDAACJXUVNODQWRYGEJCVWPXGIGNPLMSQAZQHSXRHRNJPEYMBKOUTKCYMIOTTRBZULKOAHWLDPVQSVGIYSLGYAVCNADKEZJIFRXVQHSMHNFXHEWBXZDPJSBECEWJFPIBRBMJUWORQPKIFYRDBVCWKNYDDXOHLKCZLCZLIFAJPVLAZZEUSMSGNUIGAWIENFDHTSQVOODFLYPXMZSJFXCAHUBIHNTMWE");
    msg.scope.assign("OVZPQWQIRIUPCNDGVGDMDTGIMHWUPLJVXTXJWOXIMHXAFFWFLFPLQEHJOGQDCEAVORFVVCBTEFPMRIYANYKXDVVRPAKXJYXUROSIROMBQURBBYPTGYLDSQTTHFBHLNHNGRTKKHBACXLGNTJNUAKOYAKSAENKKQCOKPZLULEQOHQJIJISUNCTOLESEZWCZSWZAWGRZMFBHCMGMMZWDXPJHMWD");

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
    msg.setTimeStamp(0.45087428501690485);
    msg.setSource(43794U);
    msg.setSourceEntity(186U);
    msg.setDestination(28570U);
    msg.setDestinationEntity(30U);
    msg.name.assign("LJITWWKSEICHFUTQHOVNTWVQECKLQLYSUZTXVCP");

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
    msg.setTimeStamp(0.058095888738842194);
    msg.setSource(26746U);
    msg.setSourceEntity(145U);
    msg.setDestination(16179U);
    msg.setDestinationEntity(48U);
    msg.name.assign("SZVSCTKHWVIMYNNAFUWLAQMGRSWDFELKCCKCTDHHNDOYECJNAHKLUULHSFXQMABNGOQQGMHRBPHUNBJAEJCPGAPLPSLWSGDMMFFFEUVWKPBTOAZEILJDJSTHKTRLYDANUZMUEPDVZCRBKNRXPAGBENZXXOYGQHXKGOMRTJVIR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZBDMSFOUJTRCGTSLNNAEZVAJFNWMOMBZNFELYGNVYCSYDXCIPLTGEPRJGJZREQKKVSJTEBWMTXXCGLDDIQUSDNNRPIRFALQHVFYSXLMCTIXURFNAKSYXKIKDVBPQKWAOGULHQJUFHQKGMGWEBROSXHURIBEYMCQCGHAZCJJIFWRUQOZLZMVEBWJTSUBLWSFQDHGEWKOLYIVOARHOOICTMMYAVPBP");
    tmp_msg_0.value.assign("VALBJOWFAIMEKZQOIAQBGIAIZMUSDZSQLBARFKSHYGYAMVBTQNPPBVRWOHEOTKJCDUGJCORSDLKOQGMXFCYROZPTKBYHSAJMNZOYXCXFUUCCOLGTPZDNVXEDBEBVITWDJMTEKEXYWSCFZHDVHIQWUYNXJICSGFHNFWCHQBLLMSMRALNNVNMVSJRHIECDGXPTEGXDDTF");
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
    msg.setTimeStamp(0.4193423411686634);
    msg.setSource(28320U);
    msg.setSourceEntity(127U);
    msg.setDestination(45772U);
    msg.setDestinationEntity(235U);
    msg.name.assign("KYEDSEXHQEDVJZXBXGZUIGTJGWMFAJHIAXTRQWQLMIYEACKKDCUDILNOAHKVSKWGDEAWVZYNLZBJEDRTXROTLGWIMWGKHPUTPLYOXUXLLQGANFJMKYRRUMEDBXVRUXFTEAFSZPLMKUPRBWMIWPVRZZHSBFFQRLGSASTCICPJNCEPOKYLSQACDHMOANTPRQYJCVCBUGNSHYWWQHOVVGJJNFOHNDVBJOUDYKQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YLRZVDECOIHRXIMFOSWCVXSMJQJTTXUOLZGUYIPLIWSPBNFVGQHAIOBQKSVFETYVAGUCDLKJBDEOZWUJAPHZPKXRHAFIVSRZKNYQUWERLDLPUDLFUHBYWZSAVNKILTDZVGKRSADXNFSJANLJTPBMHR");
    tmp_msg_0.value.assign("NJAZVFUQVPUHAKQYOHAAAUTGYPEJXPITPOWIJJFWBRSZZMZYPRJKDNWTTFFKQSOIROZCUCYXVKEWTOEPKNGMDFDEGRWDTCDBVAAQXHUABSRTGLVBHNFSCGCXIFLWLBJEIZUTRPBNGMXRCJOBVXRFLBDWYONCGIBXSQHIKPXGTYNQEJGJLPDSIUALEVWYROMXTM");
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
    msg.setTimeStamp(0.552469914240314);
    msg.setSource(8014U);
    msg.setSourceEntity(25U);
    msg.setDestination(13853U);
    msg.setDestinationEntity(27U);
    msg.name.assign("HESVIKMGYQBWUYPRIODSXHWHLRPMOEPPLYAGXOOCHOVJOVQWXSDQKERCZXHICTVA");

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
    msg.setTimeStamp(0.577451628207928);
    msg.setSource(57662U);
    msg.setSourceEntity(3U);
    msg.setDestination(29083U);
    msg.setDestinationEntity(121U);
    msg.name.assign("VAOCGSBOUOGFOEMVJPEKQFZZZKIQQPIDMOSCVNOPPAGNRXHTHCOJRUEJVWBHNKIRYBRAMWVPCHNPKTVKUGFWAWDVXTDDGEUVXYLRGINYKYQFBUNYUKFFHHYBESHQTQSFQLGWJRDYJNSPPHGUUSB");

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
    msg.setTimeStamp(0.9198237930160466);
    msg.setSource(38420U);
    msg.setSourceEntity(193U);
    msg.setDestination(17699U);
    msg.setDestinationEntity(236U);
    msg.name.assign("IMTYVWCRITIJCSJAGAVTMUYPKEBWESGNBDCMUFXXXMRLQTIBCOZUK");

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
    msg.setTimeStamp(0.5047496892844502);
    msg.setSource(14931U);
    msg.setSourceEntity(185U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(44U);
    msg.timeout = 3044925814U;

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
    msg.setTimeStamp(0.670080731567571);
    msg.setSource(7318U);
    msg.setSourceEntity(113U);
    msg.setDestination(50565U);
    msg.setDestinationEntity(27U);
    msg.timeout = 3440304226U;

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
    msg.setTimeStamp(0.3295132031570981);
    msg.setSource(21461U);
    msg.setSourceEntity(234U);
    msg.setDestination(55597U);
    msg.setDestinationEntity(43U);
    msg.timeout = 1088098495U;

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
    msg.setTimeStamp(0.30180700000888083);
    msg.setSource(20338U);
    msg.setSourceEntity(188U);
    msg.setDestination(57155U);
    msg.setDestinationEntity(31U);
    msg.sessid = 1980634002U;

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
    msg.setTimeStamp(0.3617956897795942);
    msg.setSource(14305U);
    msg.setSourceEntity(79U);
    msg.setDestination(30330U);
    msg.setDestinationEntity(153U);
    msg.sessid = 2880270616U;

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
    msg.setTimeStamp(0.22201790012724076);
    msg.setSource(60143U);
    msg.setSourceEntity(62U);
    msg.setDestination(54085U);
    msg.setDestinationEntity(198U);
    msg.sessid = 2005399695U;

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
    msg.setTimeStamp(0.03641604690597222);
    msg.setSource(21224U);
    msg.setSourceEntity(105U);
    msg.setDestination(44813U);
    msg.setDestinationEntity(187U);
    msg.sessid = 34019862U;
    msg.messages.assign("DKQUXZOKPBPRUANJGRKIAEKOJZYCWAYFSBPTUNKXYGZMCLSLXNAUFXZCVEVWQWTAJXAUMTNTDLXRQRGABTLHSFNMMUVPGFTGTCVQYUYQGIGWMKFEHHQMMDDIVBVZOGOESXIKSPACLRORLHJIHEITCFPYSZCNKOXYHQOPMBVDKXURGJWMDZVAS");

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
    msg.setTimeStamp(0.18392511033396575);
    msg.setSource(64017U);
    msg.setSourceEntity(204U);
    msg.setDestination(33273U);
    msg.setDestinationEntity(12U);
    msg.sessid = 4015593144U;
    msg.messages.assign("CUDPUPZSLHCCAIBIBFYXHGTYAAGAUSYDLTVZELXHPVGQJBMESAHCEYYANWEDZTUPUFOCHDGFNITNJLNWVRVYZBQVJYOCEEJEBIPHHUNXMSES");

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
    msg.setTimeStamp(0.7234817670915067);
    msg.setSource(50592U);
    msg.setSourceEntity(81U);
    msg.setDestination(41771U);
    msg.setDestinationEntity(176U);
    msg.sessid = 1773298648U;
    msg.messages.assign("JGLNOHJYFXUIKHAIHJUTRDAFWWECVTHDFVJQEUAHFSJSZUBYJPMLGBOVZXAAXUEPHTDQBQZUUDBVTDMVFZXXVMHHZIALNTKGIEWRWYQFIAHUVYVSKXJFNCZ");

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
    msg.setTimeStamp(0.1602788745854521);
    msg.setSource(31189U);
    msg.setSourceEntity(80U);
    msg.setDestination(46798U);
    msg.setDestinationEntity(192U);
    msg.sessid = 4148295434U;

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
    msg.setTimeStamp(0.8526652804025149);
    msg.setSource(21959U);
    msg.setSourceEntity(77U);
    msg.setDestination(28871U);
    msg.setDestinationEntity(51U);
    msg.sessid = 988615644U;

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
    msg.setTimeStamp(0.985093085761123);
    msg.setSource(23542U);
    msg.setSourceEntity(170U);
    msg.setDestination(18146U);
    msg.setDestinationEntity(226U);
    msg.sessid = 2283294325U;

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
    msg.setTimeStamp(0.25704006675236835);
    msg.setSource(6127U);
    msg.setSourceEntity(11U);
    msg.setDestination(18258U);
    msg.setDestinationEntity(173U);
    msg.sessid = 3601711550U;
    msg.status = 208U;

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
    msg.setTimeStamp(0.17560242965009076);
    msg.setSource(54297U);
    msg.setSourceEntity(10U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(120U);
    msg.sessid = 1298533913U;
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
    msg.setTimeStamp(0.8140222745830269);
    msg.setSource(63353U);
    msg.setSourceEntity(80U);
    msg.setDestination(54492U);
    msg.setDestinationEntity(81U);
    msg.sessid = 851710063U;
    msg.status = 245U;

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
    msg.setTimeStamp(0.36433936675522527);
    msg.setSource(47265U);
    msg.setSourceEntity(135U);
    msg.setDestination(9352U);
    msg.setDestinationEntity(200U);
    msg.name.assign("KFTXFEVFRSTUREJJEJRSGJFRXMTGIFQPEFVNSVBHLOLEFLWADKPAMANHAELSNOZOXPWDYECOWDZFMKDOAWIXCQSQGVIJMZZAVCWIGVQNXNRBKMFZBJLRCOBKCXYQPLWTJRTDCIMTBOSYSBDUWTPFIPTWALJ");

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
    msg.setTimeStamp(0.7591811798039945);
    msg.setSource(10071U);
    msg.setSourceEntity(58U);
    msg.setDestination(42934U);
    msg.setDestinationEntity(252U);
    msg.name.assign("BJSWUMCULYTZGWBJKXKRFHAAOTUZXPQDBCOWCHMVYWCTEGYWEMCSQQIMZPEANIELPCRYLDEHXBDCDPKRVTTQZXIUSAEOJLOHHKEQIQDMMIJJNOIIMHDPYFVFWSWLCXEHOQDPJCXKNAMGJFGGRGUYIMFEBRRUKGMFVJAVOABKQOLAZSYTWSHQR");

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
    msg.setTimeStamp(0.022823450766604636);
    msg.setSource(61979U);
    msg.setSourceEntity(193U);
    msg.setDestination(5410U);
    msg.setDestinationEntity(133U);
    msg.name.assign("FMOVSPSKCXZXYWLCDWYGYUMKZJNWXUFCTGHFAWMAFEXDJALTHTILQWNGEGIYQRDSDRBUCEIBHJANOHZCNKRORVANJVSHLQPHDRZVNGKSDRZTFRVQWJDUDMKQGOHVOLWVKYFAQBBLJSKIMQCDZXEBFMZMFUYEMBVSXJGNFXOCGIAXRUNJHJHPYEWZVQGPUPYTRCOZPPCLI");

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
    msg.setTimeStamp(0.6086053534823991);
    msg.setSource(51534U);
    msg.setSourceEntity(70U);
    msg.setDestination(41314U);
    msg.setDestinationEntity(204U);
    msg.name.assign("LODHXQKYXEAEUBIHHKTZUJGQHPDXPZEZZQKOXAASJBWYNOLRKNJCDZLXVJDAMOCYUMNCXRFARAGPQCXFMZMPIDBFZLHTSWDBUWNFPBBJYYCXCPKCHORJGNKDAQUKBWWVFEYURJMFVPWUDZRIMDYNIMOKNYWSXSSTWOSTSGFEAUUTFOELTMYLLYGSJRQEBVCGQSGPRIMTBHNJQZTAIENGVEWHOC");

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
    msg.setTimeStamp(0.824176513028211);
    msg.setSource(37340U);
    msg.setSourceEntity(143U);
    msg.setDestination(6830U);
    msg.setDestinationEntity(123U);
    msg.name.assign("JWAXGTGTGUOBBYPBMTNBUSDEIHEQMBJDTRANKX");

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
    msg.setTimeStamp(0.2799448796094002);
    msg.setSource(57017U);
    msg.setSourceEntity(217U);
    msg.setDestination(60973U);
    msg.setDestinationEntity(44U);
    msg.name.assign("XKMXNZKXORHPXUJUPSEVSFOABNDJQQEFERSKEIPWECHHSEVHAJYPILBFPVEMUCPQHSGISAWQLLUYXVWUYYBADQPXSMCZMHFOFALHNWKZEHJLYTXHBGVAFKUDNDLMYMIVLTFVUZDNBQTSMGRS");

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
    msg.setTimeStamp(0.29298653073804715);
    msg.setSource(16559U);
    msg.setSourceEntity(76U);
    msg.setDestination(35054U);
    msg.setDestinationEntity(224U);
    msg.type = 70U;
    msg.error.assign("PSXACTKESJVBURNBAOAXQHDKNJQRUYFMHSQVYZGXPDLYIBCIVQERGUMUMMPAFKWPWTHWQVXXINMWOYQQODHFNUNODKTLBTPEYNHXSYFLEEVGRDLWBZDUEQCUIGKPTWXEXGEJXUGKTWIBCUGTZPFNKSPTKLALWLRJACRIDYFCAZZFCZNGBDIHJCHOHDKBMJBIMLRVPHUIFFCEZXKOVSYQMRTACOS");

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
    msg.setTimeStamp(0.530123368953944);
    msg.setSource(57045U);
    msg.setSourceEntity(158U);
    msg.setDestination(51174U);
    msg.setDestinationEntity(89U);
    msg.type = 67U;
    msg.error.assign("YGQOECMRBWKEZCP");

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
    msg.setTimeStamp(0.19131889104145705);
    msg.setSource(5148U);
    msg.setSourceEntity(163U);
    msg.setDestination(3406U);
    msg.setDestinationEntity(232U);
    msg.type = 125U;
    msg.error.assign("KWZNHDBQCPLOBRVTLTYKXGOJXCADEYFDRUWQCHMHOCFOOAKDIOHGDBMEQWFDZLIVZOBQS");

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
    msg.setTimeStamp(0.08902385802249702);
    msg.setSource(62417U);
    msg.setSourceEntity(155U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(61U);
    msg.seq = 55971U;
    msg.sys_dst.assign("DZCGNBKSKBPUHAWOWFIHVYDIREXJUXMLXUHTBKBMDNEZZLJJSECKIAPSUTEZPRFKEGVBUGKCMVTIGDGBTLFCXYZZRPOHMCIXZYMDRDYLZYYLHEBDMNWWLLZLXPJGTEIVQCORPWRILAVGQRQHDPCRCAFWOSTGSXUUBQTASMVMOYMQZBVTLQYWIOFSEYJEDYHGTAVSWEKJSHKNDNIOUHBQJXNUVACSMPFVKJOTJFOFXCFAXAQQUHRWANIP");
    msg.flags = 194U;
    const char tmp_msg_0[] = {56, -76, -118, 105, 59, -65, 70, 64, 61, -51, -125, -13, -60, -82, -53, -26, 81, 34, -25, 24, 60, 22, 6, 52, -111, 103, -74, 27, -99, 123, -2, 22, 40, -127, -68, -73, -79, 15, -49, 81};
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
    msg.setTimeStamp(0.4220123032255316);
    msg.setSource(16998U);
    msg.setSourceEntity(191U);
    msg.setDestination(21078U);
    msg.setDestinationEntity(54U);
    msg.seq = 60635U;
    msg.sys_dst.assign("OPMJMQEDVVSIJIKCKHUYCEYLNRSYIAWNKJADFTPCRBVVUFWBXXZCTWLBQVHGEAUWRYETNMCZJAEKKSTWYOOJJTFXBOSPWZNHDXUBSQXIVLUGKBQNNXFNZLDYROBQFKWJOFOAGFICLNDHHCBLVGFMPDAJISXTYEIYIEPRDGQTBCRVNZSCMRBPDWGTMSGKXAVUTZ");
    msg.flags = 171U;
    const char tmp_msg_0[] = {103, 38, 22, 77, 74, 5, -20, 37, -102, 103, -7, -87, -19, 65, 32, -9, -30, 83, -35, 18, -35, -98, -117, -14, -102, 109, 32, -8, -63, -60, -43, -39, -101, -34, 50, -111, -67, 85, -120, -56, 19, 82, 31, 41, 58, 32, 64, 23, 106, -61, 7, -44, 29, -119, 60, 25, 67, -56, -18, 97, 4, 37, 47, -28, 124, 15, 15, -77, 46, -112, 74, -74, -92, 76, 54, -20, -115, -15, -128, 126, 65, 49, -117, -58, 7, -54, -114, -77, 81, -4, 21, -93, 41, -90, -16, -18, -84, -125, 28, 68, -119, 97, 97, -21, -54, -66, -121, -21, -13, -44, -55, -33, -128, -26, -74, 114, -56, -123, -103, -42, -115, -38, -91, -107, 86, -74, 38, -35, 43, 25, 119, 19, 76, 87, -94, 42, 78, -54, -44, 55, -44, 19, -93, 76, -75, -31, 55, 69, -73, -103, -23, -31, 70, 119, 44, 69, -5, 60, -40, -69, -44, 69, 10, 57, 14, -11, 30, 38, -39, 76, -54, 57, -107, 83, 37, -42, 89, -30, -72, -4, -64, 119, -60, 65};
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
    msg.setTimeStamp(0.45333696691114655);
    msg.setSource(25598U);
    msg.setSourceEntity(154U);
    msg.setDestination(23441U);
    msg.setDestinationEntity(186U);
    msg.seq = 50140U;
    msg.sys_dst.assign("DUTWDWTFDPYSQMJVAPSHWNNBQYKUWAUINAJTGCOBCBHJALMYQBUVWNRAESJXEMYBTXQTXPCYEXFTHOKSJJRLZACUGHALGRIFJTZXHJKDGNFPGPFYWDMECSCHBRFNLLEPOUMZQ");
    msg.flags = 79U;
    const char tmp_msg_0[] = {-14, 92, 123, 55, -107, 121, -91, 120, -55, -128, 44, -24, -92, 102, -45, 19, -68, 41, -50, 36, 41, -37, -29, 8, 23, 110, -102, 63, -38, -118, 99, 7, 8, 42, 123, -74, 5, 74, 101, -112, 72, -14, 101, 88, 55, 4, -115, -69, -38, 111, -6, -119, 97, -105, -118, 109, 43, -22, 114, -125, 6, 6, 52, -61, -16, 54, -7, 80, 31, 57, 22, 17, -28, 55, 94, -77, 109, -57, 85, -60, -16, -112, 75, 46, -4, 8, -60};
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
    msg.setTimeStamp(0.1445084157152119);
    msg.setSource(30689U);
    msg.setSourceEntity(152U);
    msg.setDestination(26618U);
    msg.setDestinationEntity(80U);
    msg.sys_src.assign("WEVNMCAKMZTISHSILJDNQVYRTVYBERIOOQMIHMDWPQVLWENYOUAUGYSCWBGQOUQMVIVEKYSYYRBYPOBUZBVRMAPSSRZSTHMJBTRMCIUWHJLGFQFFUNRENWALDZHQJYPZPCOENEQVVLGWDEORVNDGLTXHRJNXAZPXCKGGISLE");
    msg.sys_dst.assign("ENBFGCRONCVQEKDSSXGSWRRAXTHG");
    msg.flags = 77U;
    const char tmp_msg_0[] = {-23, -107, 126, 77, 80, -114, -88, -35, 82, 112, 54, 2, 41, 88, 96, -88, -34, -36, -82, 114, 16, -127, 8, -90, 51, -84, 20, 123, -92, 39, -78, -95, -5, -46, 37, 63, -47, 95, -89, 22, 90, -17, -125, -119, -34, -74, -123, 65, 63, 45, -99, -15, 21, -122, 33, 91, -97, -49, 21, 52, -61};
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
    msg.setTimeStamp(0.15952830891005587);
    msg.setSource(27105U);
    msg.setSourceEntity(43U);
    msg.setDestination(18682U);
    msg.setDestinationEntity(96U);
    msg.sys_src.assign("BRGBUTKOJHYHDRGOAVHMNNJQLWKYKATXQOZDROGSDLCKIPLBYSEBFVGAIUWYURBTAHAMNZYQIHLUDMEGIRDJEEJDVIMXINMNDWVQOQTQKKSWXHLVQEDOFFENMWENKJVRZJYZGPAOGRCIIMZMFFLMBPIROTQXCDCP");
    msg.sys_dst.assign("AWMVMSNFRTAPTXJJKBACIDNCLTPMRRNVPXPHAYFPUXBDSJRZRTVYNFSQYIFOTXOCNHPKZJTBZUIKDFHSHICQJTYZYUXEEGLVOWCLSTEIDQGWUYZGYJGOMMOHMGJKIEAGQOEIDXKKSHZPDKBYQWSWIVO");
    msg.flags = 121U;
    const char tmp_msg_0[] = {-19, 103, 108, 40, 26, 24, 46, 18, 103, 9, -44, -60, -88, 102, -114, 13, 27, -19, 23, -128, -96, -72, 90, 125, -23, -51, 66, 123, -19, 76, -66, -71, -31, -62, 114, -33, -92, -51, 11, 64, -110, -73, -82, -81, 35, -41, -108, -111, -45, 23, -86, -9, -53, -26, 53, 69, 77, 56, 43, -39, -99, -81, 106, -67, -78, -63, -39, -89, -110, -98, 92, -89, -13, 44, 11, -97, -105, 124, -117, 28, -110, 48, -73, -118, 64, 119, 65, 16, -22, -106, 28, 94, 66, -88, 0, -52, 95, 78, 51, 54, 105, -99, -49, 51, 66, 70, 30, -45, 11, 62, -8, -21, 75, -86, -49, -68, 60, -99, -127, 70, 116, -86, -75, -49, -128, -116, -33, -11, 125, 33, -89, -28, 119, 35, -11, 118, 24, -57, -10, -70, -25, -60, -114, -90, -83, -44, -72, 65};
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
    msg.setTimeStamp(0.6669989545505981);
    msg.setSource(37966U);
    msg.setSourceEntity(56U);
    msg.setDestination(13951U);
    msg.setDestinationEntity(196U);
    msg.sys_src.assign("ZDKLTQTRWLXXAMVHDVSNINZIUEWIAEXGJZVENIZRSTDYNQPGBCFO");
    msg.sys_dst.assign("YFSYOUGFQCUUEVFAIQKZFUKRM");
    msg.flags = 148U;
    const char tmp_msg_0[] = {-99, 66, 56, -39, -21, -6, -117, -9, 15, 122, -91, -8, 6, 100, -9, 126, 112, 93, 34, 41, 101, -66, -26, 71, 106, -75, -73, -86, 28, -48, 69, 80};
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
    msg.setTimeStamp(0.0998576077605865);
    msg.setSource(32407U);
    msg.setSourceEntity(18U);
    msg.setDestination(1515U);
    msg.setDestinationEntity(233U);
    msg.seq = 11715U;
    msg.value = 66U;
    msg.error.assign("RYVRVAGWLQKQJUAGEFUQPIZANSGUVEUMCRUDVZREOBSTSMHFDKOZYIJZMXPOMMEECBZNKAUHNUOFBFAQFEWEQCWXDMXOSTFYXMZVPVGZLNSLHJWKYODYIQQIAISGKMNKVMOISPSCXJAHQLZAWPBBDHRCEFLDRCWJUPGNBKWQUTJRHFOIISLYNVTIDYVTBXEDFCJ");

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
    msg.setTimeStamp(0.5839543885995813);
    msg.setSource(40592U);
    msg.setSourceEntity(88U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(118U);
    msg.seq = 57765U;
    msg.value = 96U;
    msg.error.assign("SRICGHVCYAFVXKFUECJBCPIERHHNXIFSSTQKVTHNPCDTGXRDETZWGUTYJXQLPDWSQAFAMDGSLAWEBKRQETYGYPVUZKLRKJQYPBAWEEBCFUROOMQIDFFTVULZSGWBYRXPVAWMBZCGDZMTIKNJH");

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
    msg.setTimeStamp(0.5587510492557969);
    msg.setSource(7368U);
    msg.setSourceEntity(217U);
    msg.setDestination(34498U);
    msg.setDestinationEntity(171U);
    msg.seq = 11100U;
    msg.value = 154U;
    msg.error.assign("DURPWMCBSSSWEHEKVZGCRWKQXQJTNXOHPBTEQBURWIIYTQVAVKMNKTYEADCMWGYLBFKJFNFIHYXWLYJKUXVFGPSHWEELLMTBEPODFX");

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
    msg.setTimeStamp(0.3155023405874212);
    msg.setSource(39438U);
    msg.setSourceEntity(247U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(38U);
    msg.seq = 62029U;
    msg.sys.assign("JRRFYWKOCHAOGMMCCTXOFAGBCYCXHSU");
    msg.value = 0.5765188415266311;

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
    msg.setTimeStamp(0.4000472477817635);
    msg.setSource(50926U);
    msg.setSourceEntity(211U);
    msg.setDestination(10656U);
    msg.setDestinationEntity(124U);
    msg.seq = 3827U;
    msg.sys.assign("RWDQVWOGADDEOPKBXTCOUVTGKAFUWQEUMMJEKLBQCNDWKOEXIRCOHXCRVYNMYEAKAXXPVDFQJCOLFGOSTUIWZYCHCRPJBTMPNBBL");
    msg.value = 0.26743174725487195;

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
    msg.setTimeStamp(0.6004845381703312);
    msg.setSource(51457U);
    msg.setSourceEntity(201U);
    msg.setDestination(53688U);
    msg.setDestinationEntity(4U);
    msg.seq = 38714U;
    msg.sys.assign("MFDSWULPKLNWBHYAWPMIWBCVYKFLEOGKVLWYJSJGNGNGJXFIKOQXDGXBOMZAKDUERHHQCNVBEPUGWMHBMUTYJBILVQAYSZCSIZUJTYNWEGKXNPIEJFKEHRROADPKLWZGDQPHJXTBMXSNWDOEDCFRTVVADHZPVEQIQFXLFXRDVOMMJQBMVITENZRUSQOPHGYSAZTACAFIACOXTVNYFECLSCUZYCZOHYUUBPDNLTIQSR");
    msg.value = 0.29385383737290394;

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
    msg.setTimeStamp(0.6395871325444795);
    msg.setSource(29938U);
    msg.setSourceEntity(64U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(186U);
    msg.action = 45U;
    msg.longain = 0.831566954377077;
    msg.latgain = 0.2340469622687713;
    msg.bondthick = 2909934206U;
    msg.leadgain = 0.8083267182037928;
    msg.deconflgain = 0.1662069391703912;

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
    msg.setTimeStamp(0.260913606276616);
    msg.setSource(20199U);
    msg.setSourceEntity(57U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(219U);
    msg.action = 247U;
    msg.longain = 0.49158659953911155;
    msg.latgain = 0.1764489191172155;
    msg.bondthick = 346632987U;
    msg.leadgain = 0.5720641659728813;
    msg.deconflgain = 0.7425695528274066;

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
    msg.setTimeStamp(0.5653204401893867);
    msg.setSource(58577U);
    msg.setSourceEntity(48U);
    msg.setDestination(62752U);
    msg.setDestinationEntity(241U);
    msg.action = 26U;
    msg.longain = 0.18594062054998695;
    msg.latgain = 0.5464730370350508;
    msg.bondthick = 774533486U;
    msg.leadgain = 0.31042268114202554;
    msg.deconflgain = 0.6329615244431415;

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
    msg.setTimeStamp(0.158052256435388);
    msg.setSource(38552U);
    msg.setSourceEntity(77U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(58U);
    msg.err_mean = 0.6320186704351479;
    msg.dist_min_abs = 0.9430661102094928;
    msg.dist_min_mean = 0.48045260539001566;

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
    msg.setTimeStamp(0.2738267590664957);
    msg.setSource(13099U);
    msg.setSourceEntity(103U);
    msg.setDestination(49705U);
    msg.setDestinationEntity(45U);
    msg.err_mean = 0.15762964139948488;
    msg.dist_min_abs = 0.28139714472703137;
    msg.dist_min_mean = 0.06941805012699498;

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
    msg.setTimeStamp(0.37120747285710387);
    msg.setSource(46523U);
    msg.setSourceEntity(232U);
    msg.setDestination(48580U);
    msg.setDestinationEntity(40U);
    msg.err_mean = 0.15147761208756072;
    msg.dist_min_abs = 0.8527078910232246;
    msg.dist_min_mean = 0.3853976854184856;

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
    msg.setTimeStamp(0.6065868396920966);
    msg.setSource(50025U);
    msg.setSourceEntity(189U);
    msg.setDestination(63764U);
    msg.setDestinationEntity(113U);
    msg.uid = 30U;
    msg.frag_number = 245U;
    msg.num_frags = 178U;
    const char tmp_msg_0[] = {-119, -30, -59, -107, 31, 125, 10, 83, -108, 63, -30, 111, -50, 3, -89, -44, 117, 76, 115, -61, -106, 85, -34, -39, -119, 27, 88, 57, 52, -23, -77, 31, -92, -54, 104, -22, 3, 86, 60, -38, -66, -27, 101, -128, -83, -115, -123, -17, 66, -76, -32, -46, -112, 78, -69, 4, -31, 114, -94, -47, 14, 100, 119, -5, -2, -26, -75, 38, 64, 49, 91, 23, -7, -71, -14, 85, 117, -65, 63, 22, -69, 32, 35, -117, -4, -109, 103, 75, 42, -127, 114, 24, -104, -107, 66, 9, -67, 0, 125, 85, 98, 28, -73, 124, 15, 80, 82, -68, -23, 121, 23, -112, 119, 124, -8, 11, -80, 52, -55, 108, 8, 13, -78, 7, -10, 42, 53, 11};
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
    msg.setTimeStamp(0.12128937863459144);
    msg.setSource(17013U);
    msg.setSourceEntity(152U);
    msg.setDestination(13510U);
    msg.setDestinationEntity(130U);
    msg.uid = 234U;
    msg.frag_number = 41U;
    msg.num_frags = 11U;
    const char tmp_msg_0[] = {-45, -97, -64, -51, -74, 123, 116, -55, -12, -92, 27, -17, -40, -110, 39, -59, -64, 54, -62, 122, -51, -113, 29, -6, 71, -39, 15, 54, -122, -58, -93, -28, 57, -36, 54, 114, 75, 48, -12, 6, 48, 90, -115, 119, 40, -52, 42, -9, 26, 80, -116, 80, -69, -9, -44, -72, 23, 22, 9, -39, -127, 31, -64, -110, 109, 12, -79, -76, 30, 103, 57, -19, -28, -38, 66, 19, -106, -95, -26, 83, 73, 91, 124, -16, -64, 45, 99, 4, 57, -19, 60, -101, -103, 4, 122, -15, 74, 113, -46, 17};
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
    msg.setTimeStamp(0.3258686071603858);
    msg.setSource(9454U);
    msg.setSourceEntity(2U);
    msg.setDestination(54183U);
    msg.setDestinationEntity(129U);
    msg.uid = 152U;
    msg.frag_number = 121U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {3, 42, 75, 112, 35, 8, 0, -97, 3, -88, -29, 36, -45, 121, 54, 61, -80, -101, 75, -13, -103, -36, 66, 39, -63, -101, 35, 62, 59, 19, -120, 2, 57, -74, -103, 43, -68, -65, -51, 27, 70, 104, -123, 59, 117, -66, 37, -20, 9, 68, 56, -1, -103, -34, 96, -27, 42, 62, -29, -26, -61, -37, 5, 80, -98, -72, 64, -90, 24, 55, -14, 85, 100, 49, 8, 66, 49, -76, -41, -93, -28, 54, -9, 76, 82, -50, 110, -77, -27, -4, -127, 101, 121, -77, 2, 92, 62, -26, -77, 106, 117, -34, 78, -67, 0, -64, 76, 12, 117, 21, 121, 25, -100, -60, 20, -74, -19, 114, 100, 0, -95, 10, 62, 91, -29, -62, 13, 112, 53, 53, -101, -1, 59, -87, 1, 20, -2, 55, 48, -113, -10, -3, 48, 122, -17, 121, -6, 36, -28, 122, 72, 81, -107, 95, 120, 124, -66, -56, -53, -23, -94, -39, 75, 103, -44, -3, -69, 12, -11, 72, 18, -77};
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
    msg.setTimeStamp(0.29520896726147305);
    msg.setSource(16267U);
    msg.setSourceEntity(239U);
    msg.setDestination(36207U);
    msg.setDestinationEntity(147U);
    msg.content_type.assign("OCQPLLSGQZUREJWMIXLKFAXTGDOXUBMLZWMWDCWRSYJEQABZQXURZLEWFMJRKNEKORIQUSAVXTVMXUTHOVRKCZHHSTTYQSBGNMPZXTENGBCBQLVCDGJKFHAIHXYLZCPPYBYIKAHOHHJIYWVRFPGFBZMDNSACGTIMPWRAOESCFBKJBEYDRSYMDAQTENTFCNVUJYUWDIVPLXZWZIPDJOQINOJXVGNFWUKQDLPNADGSHOUVTM");
    const char tmp_msg_0[] = {-38, -126, -111, -112, -105, -32, -62, -94, -79, 45, -96, 94, -60, -1, -27, 0, 75, -95, 108, 52, -8, -19, -23, 98, -117, 7, -119, -112, -96, -117, 82, 29, 39, -65, -75, 14, 126, 113, -118, -94, -86, -40, -49, 13, -82, 33, 126, 17, -67, 114, -99, -37, 37, -27, -34, -8, -17, 15, -8, 17, 104, 19, 0, -38, -82, 85, -53, -50, 43, 65, 79, 26, -126, 7, -60, -20, 39, -26, -19, 30, -113, -106, 48, 37, -67, 95, 84, -19, -24, 29, -34, 114, -74, 59, -86, -114, 118, 111, -122, 28, -34, -80, -43, -3, -81, 30, 112, 21, -55, -23, -10, 35, 46, -32, 15, 96, 89, -100, -56, 37, -60, -107, -53, -108, -43};
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
    msg.setTimeStamp(0.9077760105179876);
    msg.setSource(3568U);
    msg.setSourceEntity(156U);
    msg.setDestination(55946U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("WBYMAWGQTJVTSZXPPMFFBCZRCCKKPAHTOUMNIMBYLBROVIFXCTFUXTPSMHXRWWFSDGJXRESXQLURBIYQFGVHUXHAXDXJOGNCSPKGUMWWAJEGEYINJVDCYIJRIKEENNFQTKBROCQZHZMLPXMZHWAOPQLILJKHMNBRDUCUUENEFGJDUDOHZBUIGJLSRKPAAHPQZDAGSZLLSHSTLETADK");
    const char tmp_msg_0[] = {-120, -105, -35, -42, 65, -10, -14, -22, -57, -74, 25, -48, 112, -20, -114, -36, -25, -9, -113, -72, 53, -116, -122, 50, -97, 106, 54, 38, -37, 108, -90, 72, 81, 120, 5, 102, 46, 26, 85, 82, 23, -89, -45, -121, -104, -48, -42, 82, -106, 64, -114, -40, -80, 110, -5, 97, 40, -127, 40, -76, -100, 24, 76, -89, -64, -16, 117, -93, 35, -71, -37, 92, -16, 48, 39, 122, 100, 60, -17, 103, 14, -92, 41, 115, 14, -44, 94, -12, -83, 50, 82, 94, 52, 55, -99, -33, -10, 87, -59, 117, -15, 120, 101, 20, 21, -1, 105, -21, -125, 111, 17, -41, 110, 95, 7, -75, 110, -26, 14, -35, -46, -63, -97, 86, -120, 90, 118, -25, 108, -101, 86, -36, 91, -21, -100, 5, -22, 47, 0, 109, -17, 110, 78, -13, -92, 10, -30, -12, 116, 123, 84, 82, 48, -23, -109, -8, -105, 47, -78, 31, 19, -93, 96, -106, 95, -64, 18, 36, -33, 98, -24, 48, 61, 114, 1, -55, 45, -77, -26, 62, -51, -80, 96, -3, 46, -27, 74, -8, -122, -119, 81};
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
    msg.setTimeStamp(0.9939054349273525);
    msg.setSource(65153U);
    msg.setSourceEntity(221U);
    msg.setDestination(39275U);
    msg.setDestinationEntity(152U);
    msg.content_type.assign("YKCFZSHACEAZRWSEFZFDSSIOZNUNXQIXBZQMFMGYFPIXEIONQMEMBDULAHKBRDMYRDCYRCTKKYFQLJSEHTXYOZJUGLELJPVPUOENIGLSRPWHJTBJRJUGNWFBUFWTKAHBKQLTPDIHY");
    const char tmp_msg_0[] = {66, -36, -8, -28, -59, -91, 84, -61, 55, -64, -115, 96, -90, 48, -60, -28, -54, -54, -55, 83, -51, 7, -121, 74, 72, -116, -114, -105, -1, -127, 24, -78, 89, -81, 28, -11, -48, -57, 65, -83, 6, 20, -32, -7, -17, 12, -115, -35, -49, -121, 125, -74, -32, -41, -69, 77, 108, 93, -122, 121, 69, -28, -106, -101, -85, -51, -108};
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
    msg.setTimeStamp(0.6991437171660816);
    msg.setSource(51317U);
    msg.setSourceEntity(53U);
    msg.setDestination(56522U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.9226392866190513);
    msg.setSource(41574U);
    msg.setSourceEntity(215U);
    msg.setDestination(60587U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.10692636894064644);
    msg.setSource(59265U);
    msg.setSourceEntity(95U);
    msg.setDestination(9186U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.9573730412219918);
    msg.setSource(18953U);
    msg.setSourceEntity(206U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(254U);
    msg.target = 7418U;
    msg.bearing = 0.3464013938836058;
    msg.elevation = 0.39365681013582066;

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
    msg.setTimeStamp(0.7836884709309716);
    msg.setSource(11516U);
    msg.setSourceEntity(140U);
    msg.setDestination(47208U);
    msg.setDestinationEntity(203U);
    msg.target = 61812U;
    msg.bearing = 0.41511186321131344;
    msg.elevation = 0.2332911183191254;

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
    msg.setTimeStamp(0.8897201427958056);
    msg.setSource(1467U);
    msg.setSourceEntity(209U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(146U);
    msg.target = 47273U;
    msg.bearing = 0.7219715991793643;
    msg.elevation = 0.7842954676931513;

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
    msg.setTimeStamp(0.7793592034097241);
    msg.setSource(17973U);
    msg.setSourceEntity(77U);
    msg.setDestination(45575U);
    msg.setDestinationEntity(70U);
    msg.target = 47745U;
    msg.x = 0.8491137942845036;
    msg.y = 0.4777670486416802;
    msg.z = 0.3965795467379545;

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
    msg.setTimeStamp(0.28446827970458);
    msg.setSource(54441U);
    msg.setSourceEntity(108U);
    msg.setDestination(45195U);
    msg.setDestinationEntity(229U);
    msg.target = 23631U;
    msg.x = 0.11371254217217708;
    msg.y = 0.31642788482580186;
    msg.z = 0.37464462502524587;

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
    msg.setTimeStamp(0.8114497061640142);
    msg.setSource(37081U);
    msg.setSourceEntity(52U);
    msg.setDestination(48204U);
    msg.setDestinationEntity(174U);
    msg.target = 51344U;
    msg.x = 0.252902845918726;
    msg.y = 0.3022594769831437;
    msg.z = 0.49693590171401436;

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
    msg.setTimeStamp(0.2509289521590342);
    msg.setSource(14504U);
    msg.setSourceEntity(43U);
    msg.setDestination(5036U);
    msg.setDestinationEntity(103U);
    msg.target = 53718U;
    msg.lat = 0.7567906835153633;
    msg.lon = 0.45046549914485;
    msg.z_units = 253U;
    msg.z = 0.7277222176927932;

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
    msg.setTimeStamp(0.9253965940329388);
    msg.setSource(7303U);
    msg.setSourceEntity(57U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(25U);
    msg.target = 60363U;
    msg.lat = 0.46429936576578823;
    msg.lon = 0.47929110402026676;
    msg.z_units = 202U;
    msg.z = 0.5294544865711582;

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
    msg.setTimeStamp(0.8694823702348675);
    msg.setSource(40969U);
    msg.setSourceEntity(31U);
    msg.setDestination(10777U);
    msg.setDestinationEntity(166U);
    msg.target = 11772U;
    msg.lat = 0.7052045147249282;
    msg.lon = 0.0074689814646909936;
    msg.z_units = 202U;
    msg.z = 0.7076794776281944;

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
