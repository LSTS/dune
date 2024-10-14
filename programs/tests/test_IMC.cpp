//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: cfdac12ebc6e770df01bfdef2ed51a7f                            *
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
    msg.setTimeStamp(0.739216508487388);
    msg.setSource(55735U);
    msg.setSourceEntity(163U);
    msg.setDestination(61578U);
    msg.setDestinationEntity(8U);
    msg.state = 122U;
    msg.flags = 91U;
    msg.description.assign("XNIXMGLYPQAFBVCYAAXYZBYLKNMUALMVECUDSRHONSLZFAVHQZKDWBIAHOVNNKNJLJE");

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
    msg.setTimeStamp(0.5766207726115511);
    msg.setSource(42802U);
    msg.setSourceEntity(140U);
    msg.setDestination(30724U);
    msg.setDestinationEntity(24U);
    msg.state = 11U;
    msg.flags = 171U;
    msg.description.assign("DLXBEGDTWBUSRBHGNIAWBWCJDQNOQMOVTNSVHKEAPLCMMIJMLIPTRAOYCLYNOFWTKZOVMJBEPGZZKVCUQDXOSIXXZYWNSLZBEIYFDCKQVSKHUNPGQJRWLKQBRPISRCASLGPVRHERDWZFJQHFRYWUFTNYDJPYURLFAKBUWCXHXXJXUYQDHOFIGNTVVJ");

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
    msg.setTimeStamp(0.6407686305704958);
    msg.setSource(49224U);
    msg.setSourceEntity(81U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(178U);
    msg.state = 145U;
    msg.flags = 18U;
    msg.description.assign("EDOXKXLBIBXQXGVQNAIDJCIQYRTSMZEEVYREARFDORQXMXNCGFFIABOOYLKERQCDTELRGFPHVPAFHLDVTNDJSCZAWPEEZAGJJHVGIKOIOBBTHMJXHKSNUTADWLXJMNUOYSBCLJUPMFTMTQYQTYIDNCIFZUQ");

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
    msg.setTimeStamp(0.6047943097191701);
    msg.setSource(24808U);
    msg.setSourceEntity(158U);
    msg.setDestination(8507U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.13856566923221436);
    msg.setSource(14213U);
    msg.setSourceEntity(102U);
    msg.setDestination(56728U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.27148499287163386);
    msg.setSource(29779U);
    msg.setSourceEntity(119U);
    msg.setDestination(61673U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.6636804321388663);
    msg.setSource(2097U);
    msg.setSourceEntity(25U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(141U);
    msg.id = 96U;
    msg.label.assign("MCEOVNLNBSOUTPQJDZWMUMESTZRPNUVMBIYVGVDCTIHJKRMNYTCLQRUKAFYBFIAGNXBFKGGPK");
    msg.component.assign("MGDAYFXBGZKEDBTXLXOIOBIUJHARUHDSNBSTBRKMWOYRVS");
    msg.act_time = 23951U;
    msg.deact_time = 21384U;

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
    msg.setTimeStamp(0.7803171264916701);
    msg.setSource(17041U);
    msg.setSourceEntity(134U);
    msg.setDestination(23239U);
    msg.setDestinationEntity(202U);
    msg.id = 72U;
    msg.label.assign("CXMZVFQIGXPZVDCCOI");
    msg.component.assign("TRRIPRXHOXRYELLODQEJGRXCJKUMEKAXBEBGHMJQLNAHSAEUFKDFZFHGDFTMLDDSZWQFSQBVN");
    msg.act_time = 37256U;
    msg.deact_time = 62800U;

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
    msg.setTimeStamp(0.9368456504151761);
    msg.setSource(41720U);
    msg.setSourceEntity(208U);
    msg.setDestination(43241U);
    msg.setDestinationEntity(221U);
    msg.id = 60U;
    msg.label.assign("FKPZAFBZEKZBXQSIUKASXQZMVTAUNHGCNPFHVLZSTVFJCVDICJGCJAQDXZPDRSEGIVPDCOVWRFAUFRGOXUBNFTJAJLMDBSMORPHAECOQZHIYLTDIYCHHTBSOOYEKQHLGKRXZTJMEBLHM");
    msg.component.assign("DBYDHDXORUBZYOGASNNOJQZEWDTWLPSTMWFTFLKJBXIWPLUQCAULPUZCORXZUWIHDLMOCWVNBKSDWLCNCPKCKEGJYHVKEWBRJUOAZJQYVGXLTCMYTGQXEXBTVMABTTGSFVAFGWIEQZSIIIKNBMEQZMHCDRA");
    msg.act_time = 56885U;
    msg.deact_time = 41295U;

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
    msg.setTimeStamp(0.8351670866460189);
    msg.setSource(11060U);
    msg.setSourceEntity(26U);
    msg.setDestination(37132U);
    msg.setDestinationEntity(43U);
    msg.id = 113U;

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
    msg.setTimeStamp(0.9877932745581992);
    msg.setSource(10438U);
    msg.setSourceEntity(23U);
    msg.setDestination(34589U);
    msg.setDestinationEntity(218U);
    msg.id = 44U;

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
    msg.setTimeStamp(0.16370832575519279);
    msg.setSource(56477U);
    msg.setSourceEntity(91U);
    msg.setDestination(11986U);
    msg.setDestinationEntity(136U);
    msg.id = 97U;

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
    msg.setTimeStamp(0.41143983604373413);
    msg.setSource(11330U);
    msg.setSourceEntity(240U);
    msg.setDestination(230U);
    msg.setDestinationEntity(235U);
    msg.op = 25U;
    msg.list.assign("FXFXGVBHJRHKFWMZDQQKDFAPENKEIRGWGAEHPCDUQPRVVQBICYKXIZKQRYBGXISLRWOWOIOTNIBMQOIAFNDZXJOLYMXYIOAEYFFCBHAYMTTVPKMGGHNQCVUVEUJOPUTRHWQ");

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
    msg.setTimeStamp(0.5396305473316488);
    msg.setSource(42527U);
    msg.setSourceEntity(70U);
    msg.setDestination(59650U);
    msg.setDestinationEntity(35U);
    msg.op = 189U;
    msg.list.assign("JVAUYSVUSMBZXYIJQXFOBTYJLVTQPJSNEDJKZEEBMULDLVCQRQGHXACKEWRJKLYJCRDHSZNQOZBRAOGUSHIXHYZIHWHLQFUBLRTFIXPWDXKCLOGKFICIZOMCVWEUGFPKPDSWJGFTDDFVVBFSNVKVNKURYTTBFQSNMZNXOGTUBVGIRCYPWGYLOHOCMMOQNMEPMRPAJIIN");

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
    msg.setTimeStamp(0.5770962327745506);
    msg.setSource(13095U);
    msg.setSourceEntity(213U);
    msg.setDestination(25225U);
    msg.setDestinationEntity(41U);
    msg.op = 226U;
    msg.list.assign("NTMJAXJOBSSANTPJMNAHBSXDFNETEJHWUHTATQYNGIPHKVOFUMCKKJGXFGSRGFTBVEWWSHEDRQCSHUNCLUCXPYPGOYPLMVIRIKLVIJMZQQREFEZACYQDYQOBKAJVLMZVBPTWXGRXUWCOSRKNJPBRNHDKUZSFGKXFYICEOWZKLZMVDWEGMALQMROLRWTIAHPCJSHIFCLZODTTQUBYGVHRIJOXPWNFDODPDLUGDLWAEZCVUBB");

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
    msg.setTimeStamp(0.19966296519943005);
    msg.setSource(28138U);
    msg.setSourceEntity(140U);
    msg.setDestination(2523U);
    msg.setDestinationEntity(240U);
    msg.value = 175U;

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
    msg.setTimeStamp(0.14042314707765846);
    msg.setSource(28387U);
    msg.setSourceEntity(149U);
    msg.setDestination(45937U);
    msg.setDestinationEntity(78U);
    msg.value = 71U;

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
    msg.setTimeStamp(0.5589529190441717);
    msg.setSource(22096U);
    msg.setSourceEntity(18U);
    msg.setDestination(60815U);
    msg.setDestinationEntity(190U);
    msg.value = 156U;

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
    msg.setTimeStamp(0.331644529516432);
    msg.setSource(6369U);
    msg.setSourceEntity(96U);
    msg.setDestination(45398U);
    msg.setDestinationEntity(63U);
    msg.consumer.assign("WCRBVANFHXAKCAMBPREYVEEWJINLNRJNKNSTKMHCKMXKYXQWXBYNCIPVCAVVOACQVXXFNGEQIQYWMHPLQAESXJQNOJUJVNLPODMXCUSCZHPBPRUIDMLSBREEJWVKHJWGJDRZWHGPROBOCPGDSYUUURK");
    msg.message_id = 29666U;

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
    msg.setTimeStamp(0.08479373766479237);
    msg.setSource(46101U);
    msg.setSourceEntity(0U);
    msg.setDestination(14101U);
    msg.setDestinationEntity(198U);
    msg.consumer.assign("AMGKXANJIBNWKITFJSFOUOHMZFQNCIRVLYIUISYHWMGTIFYYJKWYGQLBHJPLREXZEWPATHVVQTNXAGXTPHCRFCLRSVDKVPTROSACQBTQNPBSIBLNUCEGWYDGESHURSGDUSQOXPXCRCMCRQKEXVDRDINFSZKFWPQJVHMJLDVHAPRNXEBGLLQYIOEZGDAWOCQZNHMOTU");
    msg.message_id = 62789U;

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
    msg.setTimeStamp(0.63878290135965);
    msg.setSource(2206U);
    msg.setSourceEntity(130U);
    msg.setDestination(17690U);
    msg.setDestinationEntity(252U);
    msg.consumer.assign("CMHGKYRTWUSPDUEQZYQCCIGIRPTDECPXYDASVUKHXEGPFVDRBKTMWXDVOSKYXMUJOTZ");
    msg.message_id = 2707U;

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
    msg.setTimeStamp(0.01740968157864664);
    msg.setSource(10209U);
    msg.setSourceEntity(194U);
    msg.setDestination(4962U);
    msg.setDestinationEntity(212U);
    msg.type = 115U;

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
    msg.setTimeStamp(0.06003647710298554);
    msg.setSource(43812U);
    msg.setSourceEntity(214U);
    msg.setDestination(38321U);
    msg.setDestinationEntity(160U);
    msg.type = 59U;

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
    msg.setTimeStamp(0.3173761567363279);
    msg.setSource(19199U);
    msg.setSourceEntity(193U);
    msg.setDestination(31002U);
    msg.setDestinationEntity(94U);
    msg.type = 171U;

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
    msg.setTimeStamp(0.9292358280639961);
    msg.setSource(30773U);
    msg.setSourceEntity(107U);
    msg.setDestination(54565U);
    msg.setDestinationEntity(124U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.2880586883553756);
    msg.setSource(15791U);
    msg.setSourceEntity(55U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(48U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.6167986170632906);
    msg.setSource(4506U);
    msg.setSourceEntity(85U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(14U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.8044273103209443);
    msg.setSource(10859U);
    msg.setSourceEntity(187U);
    msg.setDestination(38348U);
    msg.setDestinationEntity(217U);
    msg.total_steps = 41U;
    msg.step_number = 81U;
    msg.step.assign("XEBBTSAIJUNCBYHOIDRCYHOYMJQBGCLKLVMDMYBSIHGMPXZRBZKQJTUSPBOJXNTVHQZQPNUKEDTQIGTUWTLHRRFXNYPVFZNKEPJDHRESMOZPDZOIFSCNAGBYWUMGHUHCDQVCKALNJSGSFGLZDFEPUYRROAVUVQXCWGHFDOJMRJAUQHFWWIBZ");
    msg.flags = 2U;

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
    msg.setTimeStamp(0.1631532402030924);
    msg.setSource(47019U);
    msg.setSourceEntity(128U);
    msg.setDestination(32929U);
    msg.setDestinationEntity(12U);
    msg.total_steps = 238U;
    msg.step_number = 167U;
    msg.step.assign("YQMBXFAERKKIMCNWYBGBPNEOPCHDOAADACICVHLYFVZFMKVNKEHZAZARUUKMHPLMTGZSXSWFSIRVTTQJFWBALYYRDUUCZQZUWPYYWFDZRALQFX");
    msg.flags = 235U;

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
    msg.setTimeStamp(0.4510271617185504);
    msg.setSource(30263U);
    msg.setSourceEntity(60U);
    msg.setDestination(56064U);
    msg.setDestinationEntity(127U);
    msg.total_steps = 15U;
    msg.step_number = 142U;
    msg.step.assign("HIJQLDUOASPRFOPUZWHVWAFBKANWLYJBWYWQAAXFHSZBDMJUMZAIPQGVMBOTWFTWGBGXNOHQEOYVKDCXZUSIKFJNELJOZMVFDEZBRNVGDHIILCDQIHOAKVMXINZCMUGGSRAXIKT");
    msg.flags = 221U;

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
    msg.setTimeStamp(0.7599310163426499);
    msg.setSource(55127U);
    msg.setSourceEntity(130U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(132U);
    msg.state = 41U;
    msg.error.assign("SDXXHAJEFIVJKWEFVTIWIWCQMQXVNITYJDXNJTBKCKIWHZIRTSMQBAGZNKTXNLBROHSRWSOXHZLLBHGDNFSGOCHIYJCTGJJNQXEWRYBLGUVZMEVPWMFQMZNWYJBKPFHYRBCMYSLWOZRVQQCTDYAGVNGEASADLGRPCXCLNUMGDJDULUZBPUOARSEEUCPKUMPTYUAWPGVQDSYOUPBFHTPJBVRXVORXNYF");

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
    msg.setTimeStamp(0.3750741111593928);
    msg.setSource(21475U);
    msg.setSourceEntity(113U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(167U);
    msg.state = 95U;
    msg.error.assign("RSVDBZURAWLQTBRSBPJENNAZGYJVCLVHFHRPEF");

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
    msg.setTimeStamp(0.8307738566577533);
    msg.setSource(41018U);
    msg.setSourceEntity(206U);
    msg.setDestination(62142U);
    msg.setDestinationEntity(9U);
    msg.state = 202U;
    msg.error.assign("FALDYUDLRJLYZCHWVDIAKXZUQHKPRTVSNSYESGLDMMEJSBKGDQQPWV");

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
    msg.setTimeStamp(0.6724364666034072);
    msg.setSource(57054U);
    msg.setSourceEntity(253U);
    msg.setDestination(20402U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.9481842130437651);
    msg.setSource(9019U);
    msg.setSourceEntity(63U);
    msg.setDestination(36245U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.15357983542174802);
    msg.setSource(45898U);
    msg.setSourceEntity(2U);
    msg.setDestination(39474U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.8609827587990536);
    msg.setSource(11565U);
    msg.setSourceEntity(150U);
    msg.setDestination(58722U);
    msg.setDestinationEntity(227U);
    msg.op = 24U;
    msg.speed_min = 0.9728448480299497;
    msg.speed_max = 0.19892780358720819;
    msg.long_accel = 0.6798007430348522;
    msg.alt_max_msl = 0.7770665730389578;
    msg.dive_fraction_max = 0.09682618786974362;
    msg.climb_fraction_max = 0.7719871555060188;
    msg.bank_max = 0.9780951767277094;
    msg.p_max = 0.35035554109489664;
    msg.pitch_min = 0.1887878805372114;
    msg.pitch_max = 0.7224976695093902;
    msg.q_max = 0.9028350219726913;
    msg.g_min = 0.5733868370777097;
    msg.g_max = 0.29299373668766027;
    msg.g_lat_max = 0.7837078237813289;
    msg.rpm_min = 0.2805397098832806;
    msg.rpm_max = 0.05473626309089563;
    msg.rpm_rate_max = 0.922183276506276;

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
    msg.setTimeStamp(0.2724845740688898);
    msg.setSource(5758U);
    msg.setSourceEntity(168U);
    msg.setDestination(46596U);
    msg.setDestinationEntity(253U);
    msg.op = 246U;
    msg.speed_min = 0.6185827678682182;
    msg.speed_max = 0.642961218211674;
    msg.long_accel = 0.05458764510383196;
    msg.alt_max_msl = 0.0016943223968006738;
    msg.dive_fraction_max = 0.48254386920912584;
    msg.climb_fraction_max = 0.16188745909796476;
    msg.bank_max = 0.6530762999841477;
    msg.p_max = 0.45956148492021254;
    msg.pitch_min = 0.7719824158511243;
    msg.pitch_max = 0.1426185970356575;
    msg.q_max = 0.344286256072428;
    msg.g_min = 0.5887190520818811;
    msg.g_max = 0.7746324661110212;
    msg.g_lat_max = 0.7090555288594508;
    msg.rpm_min = 0.4388439377760721;
    msg.rpm_max = 0.7003736634959362;
    msg.rpm_rate_max = 0.9528791370337498;

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
    msg.setTimeStamp(0.43136969850675455);
    msg.setSource(52529U);
    msg.setSourceEntity(75U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(177U);
    msg.op = 148U;
    msg.speed_min = 0.35264034802135413;
    msg.speed_max = 0.3152558895036631;
    msg.long_accel = 0.7052231148707732;
    msg.alt_max_msl = 0.8768965320797915;
    msg.dive_fraction_max = 0.7667205095763328;
    msg.climb_fraction_max = 0.9854512635569155;
    msg.bank_max = 0.4826405563855959;
    msg.p_max = 0.14645851304792235;
    msg.pitch_min = 0.45407929566843863;
    msg.pitch_max = 0.6807834543182975;
    msg.q_max = 0.026717706736629543;
    msg.g_min = 0.8501677344449;
    msg.g_max = 0.0831579127300428;
    msg.g_lat_max = 0.3864484183911301;
    msg.rpm_min = 0.3258774214053908;
    msg.rpm_max = 0.07508713336061656;
    msg.rpm_rate_max = 0.18406121720464885;

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
    msg.setTimeStamp(0.1496011407902228);
    msg.setSource(24005U);
    msg.setSourceEntity(174U);
    msg.setDestination(40953U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.2944499043098251);
    msg.setSource(13363U);
    msg.setSourceEntity(117U);
    msg.setDestination(60849U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.48995251012457053);
    msg.setSource(8078U);
    msg.setSourceEntity(117U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.8625618171916758);
    msg.setSource(8785U);
    msg.setSourceEntity(186U);
    msg.setDestination(39985U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.9126007844477141;
    msg.lon = 0.3956573268293456;
    msg.height = 0.736865780808878;
    msg.x = 0.9061519128572952;
    msg.y = 0.4006096751695105;
    msg.z = 0.3918348148637478;
    msg.phi = 0.5708971228968355;
    msg.theta = 0.03302746527684253;
    msg.psi = 0.3151926037497075;
    msg.u = 0.181560104915525;
    msg.v = 0.026112645423139735;
    msg.w = 0.33638167395745533;
    msg.p = 0.11137463553051552;
    msg.q = 0.3968580937571784;
    msg.r = 0.2803972819056403;
    msg.svx = 0.7237603570833676;
    msg.svy = 0.7509400949778009;
    msg.svz = 0.259577257958286;

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
    msg.setTimeStamp(0.6271808935520503);
    msg.setSource(55593U);
    msg.setSourceEntity(40U);
    msg.setDestination(33065U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.8649196821603562;
    msg.lon = 0.5811213031748064;
    msg.height = 0.8914278067508343;
    msg.x = 0.8108145050416575;
    msg.y = 0.8481342236916238;
    msg.z = 0.3124728570683124;
    msg.phi = 0.0792793284571579;
    msg.theta = 0.08505782934096628;
    msg.psi = 0.6114073184088675;
    msg.u = 0.9915333323480235;
    msg.v = 0.812030185590827;
    msg.w = 0.0631670998826509;
    msg.p = 0.5113420796637789;
    msg.q = 0.381429149540249;
    msg.r = 0.850963532353119;
    msg.svx = 0.6805890877509984;
    msg.svy = 0.0933254598933857;
    msg.svz = 0.48349324752945877;

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
    msg.setTimeStamp(0.004911490731389745);
    msg.setSource(52449U);
    msg.setSourceEntity(202U);
    msg.setDestination(24209U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.10601220904148612;
    msg.lon = 0.043007588241489425;
    msg.height = 0.5116665932066414;
    msg.x = 0.041330423633853974;
    msg.y = 0.19754158122696264;
    msg.z = 0.18960438510588584;
    msg.phi = 0.9758810597351454;
    msg.theta = 0.8094238323781501;
    msg.psi = 0.977024919190821;
    msg.u = 0.44857828702667846;
    msg.v = 0.7650664886163413;
    msg.w = 0.0922855947572333;
    msg.p = 0.3399365559002373;
    msg.q = 0.3716292511707885;
    msg.r = 0.31502262248557367;
    msg.svx = 0.05724581690999064;
    msg.svy = 0.30594161393460795;
    msg.svz = 0.7520662067578672;

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
    msg.setTimeStamp(0.9192138422629178);
    msg.setSource(4566U);
    msg.setSourceEntity(48U);
    msg.setDestination(55932U);
    msg.setDestinationEntity(178U);
    msg.op = 224U;
    msg.entities.assign("JWIRHYHGNGIKPOFPURFTARULICUENIHDQXAVATWKQYMKLKOPHXJESQSXE");

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
    msg.setTimeStamp(0.29842280923605813);
    msg.setSource(19001U);
    msg.setSourceEntity(213U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(4U);
    msg.op = 24U;
    msg.entities.assign("YJTVVBJFCDGHIGHDTNARIOQLKJXLBHCYHZEKNVWVHRPYDLTCWHLPCAXGSZJQXWEFNHWSOGWCMUFYYJWOPZEUKRFLAJSQDRPXBUGTZEIM");

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
    msg.setTimeStamp(0.8976390855671297);
    msg.setSource(33401U);
    msg.setSourceEntity(148U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(230U);
    msg.op = 178U;
    msg.entities.assign("JQUROAIYHAKEZVTAFQKKNTXDZUMPFDQJOCSRRPXOJGJWQOLXLEWFIOADPTIHQYSHGRYZJLZTMCKRIAMXPBZKHWTUJGEDQNCVFZDVQNEBTPQTIDMMPZEGBSDWNUAFHLXTVZXWWTKJNYZEUBPSCLLSLUPWFMHGEVCPLXHOEIAVVVGGWRJFBCHYFVYCFGCUUMBNMMWVMBHIDGXKSKHONOSJDYARRTKWIY");

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
    msg.setTimeStamp(0.17511838984441375);
    msg.setSource(26641U);
    msg.setSourceEntity(114U);
    msg.setDestination(49650U);
    msg.setDestinationEntity(18U);
    msg.type = 209U;
    msg.speed = 50499U;
    const signed char tmp_msg_0[] = {-19, -36, 86, -75, -113, -67, -96, 57, 46, 102, -26, 58, 113, 126, -42, -38, -62, -20, -38, 113, 122, -77, -10, 30, 3, 6, -31, -95, -10, -68, -78, 49, 46, 61, -38, -53, 38};
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
    msg.setTimeStamp(0.23363589290710185);
    msg.setSource(60003U);
    msg.setSourceEntity(122U);
    msg.setDestination(62217U);
    msg.setDestinationEntity(142U);
    msg.type = 254U;
    msg.speed = 41020U;
    const signed char tmp_msg_0[] = {-28, -117, 61, -71, 126, 93, 11, 42, 71, -99, -95, 102, -80, 34, -18, -43, -90, 23, -35, 16, -118, 44, 91, 81, 80, 47, -42, 49, -6, -24, 59, -14, -71, -90, 0, -53, -49, -127, -87, -11, 59, 33, 8, -8, 92, -126, -85, -70, 111, -11, 120, -25, 86, -81, -29, 32, -99, 59, 26, 89, 29, 81, 67, 80, -78, -97, 6, -126, 9, 63, -106, 3, -34, 93, 101, 90, 43, 109, 92, 52, -17, 11, -69, 51, -126, -107, -25, 112, -64, 113, 101, -114, 48, 47, 78, 81, -38, -46, -71, 22, -81, -113, -57, 1, -37, -70, 47, -83, -71, 92, -54, 30, 91, -22, 118, 31, 1, -22, 33, 121, 20, -109, -11, -64, -33, 90, 53};
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
    msg.setTimeStamp(0.6663985515062113);
    msg.setSource(46871U);
    msg.setSourceEntity(187U);
    msg.setDestination(5576U);
    msg.setDestinationEntity(97U);
    msg.type = 253U;
    msg.speed = 17209U;
    const signed char tmp_msg_0[] = {113, 124, 42, -93, 86, -34, 7, -57, -106, -70, -100, -20, 64, 115, 100, -60, 3, 7, -90, 27, 108, 79, 37, 33, -21, -47, 89, -92, -106, -7, -106, -106, 58, 86, -124, -54, -82, -22, 29, -60, -87, 110, -90, -121, 106, 47, 74, 91, 75, -56, -39, -45, 64, 95, -114, 118, 117, 22, 26, -32, 16, -47, -116, -120, -114, 76, 33, 104, -113, 98, -30, 71, 27, 30, 94, -70, 64, -14, -45, 25, 118, 90, 81, 106, -103, -54, -31, 11, 14, 27, 37, -79, 23, 91, -87, -91, 15, -17, 42, 53, 40, 15, -113, -53, 55, 71, -83, 23, -4, -77, 83, 78, 61, -4, -75, -100, -52, 7, -116, 24, -65, -101, -82, -39, 79, -75, 124, 20, 107, -60, -68, -77, 118, -79, 19, 9, -56, -46, -116, -83, -30, -42, -121, 62, 36, 125, 19, -26, 126, -99, -69, -81, -8, 62, 6, -29, -15, 54, 63, -89, 49, -113, 66, -34, -64, -116, -116, -97, 5, 95, 3, -87, 38, -93, 35, -17, 27, -17, -65, 13, 1, 35, -38, 102, -63, -123, 105, 52, 70, -49, 22, 121, 41, 84, 34, 123, 58, -64, 45, -116, 50, -47, -72, 58, -61, -6, -45, -18, -18, -78, -52, -119, 7, -110, 9, 80, 42, 84, 7, 72, 28, 94, -36, 64, -98, 21, 123, -27, -15, 32, -67, 124, 75, 3, 126, -7, 98, 2, -96, 44, 71, -10, 53};
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
    msg.setTimeStamp(0.703141873198793);
    msg.setSource(33531U);
    msg.setSourceEntity(128U);
    msg.setDestination(21619U);
    msg.setDestinationEntity(123U);
    msg.op = 161U;
    msg.tas2acc_pgain = 0.2844725124542268;
    msg.bank2p_pgain = 0.16580151104360807;

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
    msg.setTimeStamp(0.08177910451123094);
    msg.setSource(4931U);
    msg.setSourceEntity(215U);
    msg.setDestination(23463U);
    msg.setDestinationEntity(215U);
    msg.op = 33U;
    msg.tas2acc_pgain = 0.8721265445181063;
    msg.bank2p_pgain = 0.4707870051325721;

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
    msg.setTimeStamp(0.7442997320009678);
    msg.setSource(64213U);
    msg.setSourceEntity(194U);
    msg.setDestination(37407U);
    msg.setDestinationEntity(5U);
    msg.op = 173U;
    msg.tas2acc_pgain = 0.5788203669838173;
    msg.bank2p_pgain = 0.022297084016849378;

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
    msg.setTimeStamp(0.3696806858071445);
    msg.setSource(8469U);
    msg.setSourceEntity(72U);
    msg.setDestination(29340U);
    msg.setDestinationEntity(110U);
    msg.available = 116437904U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.35943891040145926);
    msg.setSource(52130U);
    msg.setSourceEntity(170U);
    msg.setDestination(33718U);
    msg.setDestinationEntity(148U);
    msg.available = 2363051253U;
    msg.value = 229U;

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
    msg.setTimeStamp(0.37389931715004765);
    msg.setSource(16710U);
    msg.setSourceEntity(108U);
    msg.setDestination(51906U);
    msg.setDestinationEntity(31U);
    msg.available = 130534401U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.24710587328075562);
    msg.setSource(49138U);
    msg.setSourceEntity(107U);
    msg.setDestination(60748U);
    msg.setDestinationEntity(42U);
    msg.op = 132U;
    msg.snapshot.assign("FQUTYDSBPBKMEVZLALAOROUYOJ");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 157U;
    tmp_msg_0.error_count = 196U;
    tmp_msg_0.error_ents.assign("LNBMSKOFXKQUDAUTFBWTJRVIGZVYPSVLQMITEKCMBMCSEZHQXJHWEZXQGPMRQLDHCYXHPPSNQGIHLJCYAJMMZNUJQNFRJXVYCIDRMTQEZIYAAHLUOIRRPAVBTWFRYSHFBJKPIVQEBVNNAPWTYFHEUGZCAOGIFPSOUUVTCNRKOESCNVSIOZDWBYFRJKZPXEWTUBGEYZD");
    tmp_msg_0.maneuver_type = 18018U;
    tmp_msg_0.maneuver_stime = 0.08952772147551014;
    tmp_msg_0.maneuver_eta = 53916U;
    tmp_msg_0.control_loops = 3397752793U;
    tmp_msg_0.flags = 114U;
    tmp_msg_0.last_error.assign("QBMWIOOBVQVUQKCUPZNBPIXFGTEUKFERKEGORDYWLCTMWKYHAEQDFRQEFTHKJOXZUGKLXUSLMPPHUXIBDPRBZMJPUBCNZGFWEBXAFATBDIDOCTAVKVNYAXGTUIKGBDISDULY");
    tmp_msg_0.last_error_time = 0.04430576766906291;
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
    msg.setTimeStamp(0.8339563578067954);
    msg.setSource(7393U);
    msg.setSourceEntity(58U);
    msg.setDestination(50233U);
    msg.setDestinationEntity(19U);
    msg.op = 86U;
    msg.snapshot.assign("AMEOADSWXTAHHGKUJLJAAUTSQKMRGDQPTAHIVLFZYJFCNHKJCBPXVLCAWUZPABQTGHHYFVQJOJFUYMUEJSDFRZLGMZHCTQHIZSRZSRTEGLXEDVXCNJWICNWDCBNNBKUPXISOXNNPPZDMLVNBORVFQYVEWQKSPWXHZYGCWXDOIEWWGJMT");
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 8954U;
    tmp_msg_0.destination = 50338U;
    tmp_msg_0.timeout = 0.1714201473494833;
    IMC::SetServoPosition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 73U;
    tmp_tmp_msg_0_0.value = 0.39670638389636526;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6062468359888267);
    msg.setSource(29158U);
    msg.setSourceEntity(86U);
    msg.setDestination(10744U);
    msg.setDestinationEntity(38U);
    msg.op = 76U;
    msg.snapshot.assign("OMZRFBEXQILVBUQKOQQAPCJTAQEW");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.5149243749035397;
    tmp_msg_0.m = 0.42237692463573007;
    tmp_msg_0.n = 0.39884941891616266;
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
    msg.setTimeStamp(0.8352480845601251);
    msg.setSource(9856U);
    msg.setSourceEntity(173U);
    msg.setDestination(10163U);
    msg.setDestinationEntity(155U);
    msg.op = 54U;
    msg.name.assign("QPKCGIOQQOZDMKQGCYEXSTDPQJXJDXHXHYTGILCPRRDTAOBCYWJABPIZAHFTSXGXSEQLTJCYMOTOPFEKGLUMSGRCDQZITMFLXFHSKLLSCPFJVERNNVARQOFOBZAXOJIWLRICCBNZHZJYSUKZIJEKGNNUIMAUNIRY");

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
    msg.setTimeStamp(0.5674515591278286);
    msg.setSource(63390U);
    msg.setSourceEntity(57U);
    msg.setDestination(42026U);
    msg.setDestinationEntity(209U);
    msg.op = 49U;
    msg.name.assign("RUDBMLQWLYBVUILRCBGDWKBOZNWPEJXWNCQKRKUWIHEUMDPHSMNZTNVUQBNPSDVYMCCCETBRICKESHZMBTKYYXQWXTAHCEFARAOMFTDXJIAYQSPBKDQSZGVKFOWLNUGLDQSHFINILKFQKURZAZGZKHPIEJGVRGTVJWLNXOODSJTYTAFOJXOJEA");

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
    msg.setTimeStamp(0.7137269556417555);
    msg.setSource(22270U);
    msg.setSourceEntity(14U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(215U);
    msg.op = 55U;
    msg.name.assign("ZTUHGULPRRKYZZNCJEQUIKOARGJROPBNVGUIFJIHLMCBYDNLQHRAKVRTSULUYAQBMWULOWFSKQXJTMXWCLHOKRQJMVEEJZCRUOSVVPJXMSPMEYCFSEAZSTAESNKAPXBHWHOECHNZPIIAWHLZ");

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
    msg.setTimeStamp(0.7726150072190877);
    msg.setSource(37092U);
    msg.setSourceEntity(139U);
    msg.setDestination(43509U);
    msg.setDestinationEntity(11U);
    msg.type = 220U;
    msg.htime = 0.46190125234713353;
    msg.context.assign("IVTHUQGESPGYRODOCCZVMRBSTMTLSUVYPZGNZWCIRLLBFJEFDKYHMODADNQQKJJAHIWUVTUUAJVVENXEMNTPQPSRPBXYWEGATSRHOUCEYDRWETWGCAYBACKJMXOZJLKXHKQYNJDLMFOIBAJ");
    msg.text.assign("UZFAMMVSVQDSOJWCLVGGZMMSSAJFCIEDFJETCDPNFCVEUYGRKPBDAYSVNVPSAMYDVRQUBCNQGBILHRAKNAURHJCTCJCHRQMLXPYJKTZZBENTWDDUBRFDOIBJDHSPROIEPBNWWSOEOCMXTFZFKYMXAHIQUSGYLTYHKQHVYFGDXWKLIGZWEEXKOMOISORXULAXXPGWXILLPQYCTZTHAHRZVJQTJKZKNNBMKBOZPGWAGUNQE");

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
    msg.setTimeStamp(0.8326475360311435);
    msg.setSource(1177U);
    msg.setSourceEntity(136U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(158U);
    msg.type = 36U;
    msg.htime = 0.7925507907532395;
    msg.context.assign("ACWPIQIHQNJMBMYHXGCFVMUTLSQQAEHXSTQNAEOUOVKKAIANQJNWTOIPRUIEYZBCVKNIZOREK");
    msg.text.assign("IYXKADUDYPYEZTNGHUACOXPFQNISFIWDZOTJISSODPGJQVTIHHQJFGVMHBEMOUDKTUODEJVCVARYETCNAPKVWCBFOFPXHJKZWXFXKUARGYGLZFHUUSQKBASANOGUNALQOYTWUM");

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
    msg.setTimeStamp(0.4996763676494057);
    msg.setSource(46441U);
    msg.setSourceEntity(56U);
    msg.setDestination(10436U);
    msg.setDestinationEntity(191U);
    msg.type = 185U;
    msg.htime = 0.1730397316611142;
    msg.context.assign("OZRQBUAQFQWQBQOBIAK");
    msg.text.assign("VVTBUGZHCCJFDWZCHXUYKKWZNYIVLERTVKJSSHLUPVXTYTMBCXOXSKMADKQUJGNDQJGSAQSMQLAEQDOSMCHPWYXSUHIXBNUVNRJRPFBFQTZCIRDIWOEZYRVIJFXYGJPLVLPFMBORGKSFVWWKZUEOEESWTLN");

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
    msg.setTimeStamp(0.08392445489704092);
    msg.setSource(49211U);
    msg.setSourceEntity(111U);
    msg.setDestination(13876U);
    msg.setDestinationEntity(5U);
    msg.command = 8U;
    msg.htime = 0.3772801085701937;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 34U;
    tmp_msg_0.htime = 0.708569717625778;
    tmp_msg_0.context.assign("CYXSSELGKEHUTCTFVRLZVWQSIARKNDIWUSGRBACDCIVSXSQQZQFVBJHDMQUORCSAEFZJUMQHTAMWNVOFJRNMYIWXWFBGABORBEEGTVYLBHPFOSTDLBQEXYRCIZFYJPTACZLTEPFPUDBLMKALMGFZDGPQJVJUXUCKEJDTZHBYMHOGLMDGTEVYLRWOVPNPLNKCRMIVKXWIGKJNUNZGNHAJONXTWIPHHRNCZ");
    tmp_msg_0.text.assign("QNZDGVRQVSJBKSSJGYLQJUWLIAZTFIMWUBFBKDKYGBMCQQPUPZHWGNHDNBUMGCXJKVJYAAPFOKNYZAJPNMFTNRLYLWXISVTRECEXHSNBTSVDATHIZYTROJPNZRFMVQDXCN");
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
    msg.setTimeStamp(0.36211588597421107);
    msg.setSource(52004U);
    msg.setSourceEntity(20U);
    msg.setDestination(28331U);
    msg.setDestinationEntity(180U);
    msg.command = 188U;
    msg.htime = 0.9784965755772795;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 125U;
    tmp_msg_0.htime = 0.05171504744034905;
    tmp_msg_0.context.assign("WGECNSKYXZSWMEZJJCLYHLRRQARFJMNDPHVBLO");
    tmp_msg_0.text.assign("UJVJWZATDSXEEMTHLVYXDAXGIONVGQDYTGYNAIZOXWHNMZWOYWCJUXCNCBEVREWGGLCFDEIVJEALAQJVZILMKDMIJUNJILURRFMHKXAPBLSIMBDMFNEBVLQBSQHOXKQYATUZZQHRKRSCBUIQGJVBNTPPLDFPNMKIPSFSTBWPPKXMOGGVFXHOLIAPYKKNWFZWGZDQSK");
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
    msg.setTimeStamp(0.5682680998472945);
    msg.setSource(6331U);
    msg.setSourceEntity(207U);
    msg.setDestination(54525U);
    msg.setDestinationEntity(39U);
    msg.command = 217U;
    msg.htime = 0.9835253288652939;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 121U;
    tmp_msg_0.htime = 0.9629474024316833;
    tmp_msg_0.context.assign("HEUJMVXOEGMBKVUNJYNTSJDZAGYTLCWWIKDUBQSMSJOHYLYHSIQPXZUDGMTQDSBWTDGLKKJIXAVOIWRWUMQOBALWKIBYYOLSXVTXSRQBFADXHBKUWBMNZZRRCJPPRYALQHR");
    tmp_msg_0.text.assign("KXIHZGWVMZWPAPJUICKHCYELCDEEOHNSJARAIDCYGBOIIQTUFZBLVJRHZHDKKRIXHGCTEGMUGTKDWGEXTLYMAXKQSOLKNXMQXABMSQWBDS");
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
    msg.setTimeStamp(0.18241219697901734);
    msg.setSource(47469U);
    msg.setSourceEntity(55U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(58U);
    msg.op = 69U;
    msg.file.assign("CCNTKIRGKRKJKTXUPUULWCLHKSVOODMOSHQGTFALX");

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
    msg.setTimeStamp(0.9686859870869735);
    msg.setSource(36129U);
    msg.setSourceEntity(231U);
    msg.setDestination(40453U);
    msg.setDestinationEntity(16U);
    msg.op = 44U;
    msg.file.assign("VDPFPQJFCZAMLUIGQOKGUYTWWSNVPGUXRWKGNENQWPEHXWMJXQCGYOZZVJMOFNBBPOHVMILYTAXETTZORQKHHLROJBUBZRGEJKOAVWHUBRESNUZJLIMDWYCAQOINOSYJSZPEOVATYDCPRCKMPUCFYHIEFDADHSQTAFDXHQFSJXRGLCYPAGXLDNKHLJ");

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
    msg.setTimeStamp(0.2677392712779584);
    msg.setSource(18286U);
    msg.setSourceEntity(36U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(77U);
    msg.op = 135U;
    msg.file.assign("VYVLFTUKYVIZVCCSBUPHQFEMGVSHNABCUPMDAJJXXWDDNETEGSXABJYXOJRGPMGTAQQIPWLQCKAFBWBINEOHGUXYWESWJLDGFSLIZODHTSNOEALTKDERPIJQQWCCTKSWKNXDTYLVIJYRLIJULZTBORNFUDGMEZZFOMJFZHMOPNAFAUKTRYVHHYKLQGCQCSAGY");

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
    msg.setTimeStamp(0.6289665986677927);
    msg.setSource(779U);
    msg.setSourceEntity(211U);
    msg.setDestination(31688U);
    msg.setDestinationEntity(184U);
    msg.op = 123U;
    msg.clock = 0.6982073334077606;
    msg.tz = -127;

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
    msg.setTimeStamp(0.7446684689582601);
    msg.setSource(44635U);
    msg.setSourceEntity(164U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(71U);
    msg.op = 43U;
    msg.clock = 0.3529396510607915;
    msg.tz = -73;

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
    msg.setTimeStamp(0.9138356775900849);
    msg.setSource(20014U);
    msg.setSourceEntity(176U);
    msg.setDestination(7596U);
    msg.setDestinationEntity(152U);
    msg.op = 217U;
    msg.clock = 0.8174908535198308;
    msg.tz = -108;

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
    msg.setTimeStamp(0.25618173958665125);
    msg.setSource(51364U);
    msg.setSourceEntity(72U);
    msg.setDestination(34136U);
    msg.setDestinationEntity(217U);
    msg.conductivity = 0.6066332625411923;
    msg.temperature = 0.8966611255053759;
    msg.depth = 0.3300965421297597;

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
    msg.setTimeStamp(0.7566631064960632);
    msg.setSource(10994U);
    msg.setSourceEntity(169U);
    msg.setDestination(52396U);
    msg.setDestinationEntity(214U);
    msg.conductivity = 0.1457438636625994;
    msg.temperature = 0.5091863286722785;
    msg.depth = 0.24906699784675057;

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
    msg.setTimeStamp(0.31492663253393094);
    msg.setSource(65277U);
    msg.setSourceEntity(153U);
    msg.setDestination(33998U);
    msg.setDestinationEntity(210U);
    msg.conductivity = 0.798835346025684;
    msg.temperature = 0.6758881676892488;
    msg.depth = 0.26861648993467435;

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
    msg.setTimeStamp(0.9965597117789291);
    msg.setSource(42572U);
    msg.setSourceEntity(234U);
    msg.setDestination(2234U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.27333865758794607;
    msg.roll = 45573U;
    msg.pitch = 38624U;
    msg.yaw = 35625U;
    msg.speed = -6388;

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
    msg.setTimeStamp(0.7532134255039844);
    msg.setSource(23346U);
    msg.setSourceEntity(42U);
    msg.setDestination(14984U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.48613057087947864;
    msg.roll = 51753U;
    msg.pitch = 44883U;
    msg.yaw = 62637U;
    msg.speed = 2175;

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
    msg.setTimeStamp(0.6093105450388319);
    msg.setSource(45294U);
    msg.setSourceEntity(81U);
    msg.setDestination(21568U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.009908433713496034;
    msg.roll = 55645U;
    msg.pitch = 11863U;
    msg.yaw = 32970U;
    msg.speed = -20445;

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
    msg.setTimeStamp(0.5455102528237618);
    msg.setSource(52643U);
    msg.setSourceEntity(4U);
    msg.setDestination(27385U);
    msg.setDestinationEntity(92U);
    msg.altitude = 0.8752445918519947;
    msg.width = 0.38874802931403596;
    msg.length = 0.723015734063877;
    msg.bearing = 0.5427911462316748;
    msg.pxl = -10899;
    msg.encoding = 139U;
    const signed char tmp_msg_0[] = {98, 102, -96, -101, 110, -76, 34, -97, 71, 48, 99, 74, 78, -116, -10, 101, 62, -55, -19, -57, 101, 91, -95, -103, -53, 86, 110, -105, -35, 3, 63, 60, 86, 105, 8, 25, -98, 101, 108, 99, -71, 21, 45, -27, -69, -11, -11, -73, 76, 6, 55, -67, 48, -17, 59, 40, 0, 80, 3, 109, 43, 1, -56, -28, -60, -23, 62, -51, 71, 45, -50, -1, -67, -34, 85, -120, -51, 87, -40, -16, 84, 110, -93, -74, 32, -8, -123, -58, -26, 6, -37, -122, 108, -124, -20, -79, 18, -110, -124, -9, 32, -34, 42, -69, 4, -105, 17, -54, -15, 117, 88, -114, 22, -60, 5, -6, 1, -75, -58, 70, -74, 124, -20, 11, -121, -35, 70, 101, -63, 46, -80, -78, -73, 69, 58, 44, -10, -10, 34, 76, -119, -115, -91, 1, 60, -22, -118, -11, -53, 13, 63, -5, 47, 26, -127, 114, 99, -2, 119, -95, -98, 113, 29, 87, 84, 85, -46, -27, -30, -69, 32, 6, -19, -35, 43, -57, -2, -23, -29, 120, 8, 40, -40, 13, 52, 123, 9, 98, -63, -29, 112, 20, -38, 92, 56, -33, 43, -124, 61, 92, 36, 18, 101, 64, -43, 73, 41, -72, -106, -127, -100, -85};
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
    msg.setTimeStamp(0.2673757369750436);
    msg.setSource(19477U);
    msg.setSourceEntity(226U);
    msg.setDestination(9467U);
    msg.setDestinationEntity(104U);
    msg.altitude = 0.932011141024349;
    msg.width = 0.8389003715654617;
    msg.length = 0.7886733825856862;
    msg.bearing = 0.2925168843300685;
    msg.pxl = -20565;
    msg.encoding = 134U;
    const signed char tmp_msg_0[] = {3, 124, 102, -28, -113, 60, -68, -117, 124, 14, -54, -3, 1, -39, 72, -127, -41, 96, -124, 105, 45, 92, 124, 58, -49, 123, -89, 77, -52, -43, 21, -15, 73, 88, -85, -2, 115, -65, -53, 81, -128, -28, -86, -8, 68, 117, -58, -71, 46, 84, -124, -86, -124, 41, 105, -63, 67, -52, 68, -61, 78, -1, 18, 15, 52, 45, -120, 49, 16, 2, -126, -52, -56, 80, 97, -127, 56, -1, 23, 44, 91, -83, -113, -52, 67, -109, 65, 69, 108, 88, -59, -121, 35, 1, -50, 73, -73, -91, -127, 103, -13, 84, 74, -53, -20, 79, -90, -33, -4, 3, -9, 27, 64, 9, 2, 123, -47, 97, 71, -20, -113, 43, 38, -119, -80, 63, -73, 44, 52, -11, -114, -12, 24, -74, 60, -97, -21, -74, 44, -59, -3, -30, -7, -103, -73, 104, 95, 72, -125, 53, -86, 61, 118, 89, -50, -96, 15, -36, 114, 48, -36, -83, 122, 0, -54, 98, -125, 83, -33, -51, -118, 48, -97, 104, 33, 52, 93, -9, -125, 75, 80, 65, 104, 19, -12, 82, 94, -34, 85, -101, -50, 11, -37, -117, 72, -22, -19, 2, -19, -62, -55, -33, -15, 61, 28, 77, -42, -26, 92, 119, 48, 107, 13, 124, 52, 102, -76, 106, -86, 113, 94, -86, 7, -111, 94, -67, -17, -1, -76};
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
    msg.setTimeStamp(0.21270647596205516);
    msg.setSource(6289U);
    msg.setSourceEntity(127U);
    msg.setDestination(2490U);
    msg.setDestinationEntity(26U);
    msg.altitude = 0.3683095740928184;
    msg.width = 0.6553358593715224;
    msg.length = 0.8219605639197836;
    msg.bearing = 0.8813826176259711;
    msg.pxl = 12795;
    msg.encoding = 212U;
    const signed char tmp_msg_0[] = {-93, 70, -11, 102, 49, -79, -6, 98, -4, -56, -105, 80, 51, 38, 39, -91, 48, 71, -110, 37, -95, 17, -126, 63, -40, -29, -23, -109, 14, 85, -12, -58, 48, 53, 98, 102, -18, -16, 40, 92, -85, 0, 40, 84, -64, -65, -51, 58};
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
    msg.setTimeStamp(0.7331455827282309);
    msg.setSource(29212U);
    msg.setSourceEntity(143U);
    msg.setDestination(49774U);
    msg.setDestinationEntity(213U);
    msg.text.assign("CQWUCCKJCDTJKDABSEXRFHHMYBVQKFHFNJQAZJYDBPNHWUXOBRUWWORGAKGJRNSZMXIWFJQDPPQELOUSXKEMAYBHC");
    msg.type = 138U;

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
    msg.setTimeStamp(0.8868975865570982);
    msg.setSource(65508U);
    msg.setSourceEntity(77U);
    msg.setDestination(7165U);
    msg.setDestinationEntity(118U);
    msg.text.assign("TPFKMQSMRDQBLXNISQVVVHVPJOKIABNIRWQMFSQBXLODNFIBIPZZEURMCQDGFVATBBQWTLIWRWZKDDMPASYCYLAPGODKCFGHLKDHZZLOXYOFVRUYXJLJV");
    msg.type = 79U;

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
    msg.setTimeStamp(0.444575058618607);
    msg.setSource(11465U);
    msg.setSourceEntity(9U);
    msg.setDestination(14561U);
    msg.setDestinationEntity(126U);
    msg.text.assign("EXNWMQFGLLQKXBZWVGPOAVCUUWLXWSTCJXANNMWWMCLNIVUDRHOTIENZHNGYNXYKZAIHHDIBRTEXSPLTQRZPHPLAJSSGUIFSNWR");
    msg.type = 119U;

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
    msg.setTimeStamp(0.146642448153256);
    msg.setSource(9597U);
    msg.setSourceEntity(45U);
    msg.setDestination(50799U);
    msg.setDestinationEntity(140U);
    msg.parameter = 109U;
    msg.numsamples = 50U;
    msg.lat = 0.7772707736961945;
    msg.lon = 0.7429784931181482;

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
    msg.setTimeStamp(0.6488185448076902);
    msg.setSource(48962U);
    msg.setSourceEntity(121U);
    msg.setDestination(40060U);
    msg.setDestinationEntity(122U);
    msg.parameter = 149U;
    msg.numsamples = 184U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 8230U;
    tmp_msg_0.avg = 0.22232429230102602;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7121725929051894;
    msg.lon = 0.47588881687976037;

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
    msg.setTimeStamp(0.3917665570336081);
    msg.setSource(32455U);
    msg.setSourceEntity(208U);
    msg.setDestination(38904U);
    msg.setDestinationEntity(35U);
    msg.parameter = 205U;
    msg.numsamples = 153U;
    msg.lat = 0.993078021773848;
    msg.lon = 0.7900005104539414;

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
    msg.setTimeStamp(0.5239060473283544);
    msg.setSource(42608U);
    msg.setSourceEntity(79U);
    msg.setDestination(41863U);
    msg.setDestinationEntity(123U);
    msg.depth = 32931U;
    msg.avg = 0.5600973338637611;

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
    msg.setTimeStamp(0.8775692930196964);
    msg.setSource(36086U);
    msg.setSourceEntity(140U);
    msg.setDestination(21144U);
    msg.setDestinationEntity(254U);
    msg.depth = 32131U;
    msg.avg = 0.7928848750893657;

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
    msg.setTimeStamp(0.862113169065216);
    msg.setSource(34913U);
    msg.setSourceEntity(238U);
    msg.setDestination(5384U);
    msg.setDestinationEntity(243U);
    msg.depth = 43441U;
    msg.avg = 0.6183757085352124;

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
    msg.setTimeStamp(0.2764099936448836);
    msg.setSource(42962U);
    msg.setSourceEntity(40U);
    msg.setDestination(24448U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.04036148152044805);
    msg.setSource(25342U);
    msg.setSourceEntity(115U);
    msg.setDestination(45264U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.4071256626300519);
    msg.setSource(63522U);
    msg.setSourceEntity(75U);
    msg.setDestination(41463U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.4782577048638771);
    msg.setSource(13439U);
    msg.setSourceEntity(115U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(81U);
    msg.sys_name.assign("DYRARINFCMVJEZGMWWISAUIISIIWRQFSAFBVBPLHLOKLXLFCBONZMKXMQWPYCDGCUTKVUBMOWXRZOSFCBNVIDKETUAVUKOOZKNHXDJRUJWUPEVSMFOQFQXQQDVMYJMTUTEXBAQQZXYHWLZWR");
    msg.sys_type = 158U;
    msg.owner = 4058U;
    msg.lat = 0.7664612519533288;
    msg.lon = 0.13423785970680702;
    msg.height = 0.28782018335155646;
    msg.services.assign("HLUUNDTAEQZBNVHOMZITHAECCTLJOYGNLCHFMISYRSSPFFPZXQDETAGQIJGBZUKUBSINRHGWENEOXMVYDMKOHGLFIBMKEDBGCUMDZYJWNAAVPYDKJZWXLLCVPQXVAWMSQVIRYUAMNUVQHCHUSYWJWHNAFSZXRIOOCSWDOCOZFETOFPMPQIPRVRBJJYQLLTEPLQEZTTAPBRUJIJRXQOCPDFFUHSEYMTWWRNGBDFVXK");

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
    msg.setTimeStamp(0.6260699422276663);
    msg.setSource(39301U);
    msg.setSourceEntity(211U);
    msg.setDestination(5696U);
    msg.setDestinationEntity(242U);
    msg.sys_name.assign("WXQNVMMYGLHVTWDAKBHBMJQIGLARCWSPYMEVWKZRBEGXNOZUEIFTOGLJTGQFMCBVTLGMPEXGZDNAPRZJSODUDZAIUCPAPLFFVCIRVGYTVEAMEAQKLWARTFDHLWCIQFXYNKYHQKZBZHOPUWFDCIIYQFUEPZDNCOKHCWSHNW");
    msg.sys_type = 249U;
    msg.owner = 7159U;
    msg.lat = 0.966118187807577;
    msg.lon = 0.858073032533821;
    msg.height = 0.1390087098583498;
    msg.services.assign("OATFFVSIMLFOQNLLUKWRWAYATNIQHILULTHZMNPBJASVEUDTJBHIQONYGBTBYPSYCDWJSKWGHNIOCJZOLCRUCEYDVDKFVPUQCNWJSTDTPJUVXEFQVHHFQMNYSSZSGRZMAVZGIXCMBYRHKYDZMDRQETCEEKCAWBNXXKFPLGMJTIYPKUUZFDWRGXSUOAQLBXJXEEOVLRFKGPLORVIROWXRMTG");

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
    msg.setTimeStamp(0.13802841530314913);
    msg.setSource(6338U);
    msg.setSourceEntity(39U);
    msg.setDestination(39653U);
    msg.setDestinationEntity(185U);
    msg.sys_name.assign("UYYYDPBKWIZACNHQEGKYTLHSVLLZBRKBFESDVQINFPPENQDTZIUWJOJVSSLXGJIEOJHHPOIZFGTVNSDNAPPXE");
    msg.sys_type = 86U;
    msg.owner = 6375U;
    msg.lat = 0.6481629306579902;
    msg.lon = 0.03907339524014719;
    msg.height = 0.22709013911962128;
    msg.services.assign("XJZZSENKOVLUDHAHNQSFRRPQITYCSQUIPEMUVYCMEHXVTTAGRXSUKXUHEIRTJCZDQPFKBIBCWJF");

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
    msg.setTimeStamp(0.45063347294568323);
    msg.setSource(37730U);
    msg.setSourceEntity(239U);
    msg.setDestination(14134U);
    msg.setDestinationEntity(54U);
    msg.service.assign("RPSCJDGDHNEDQPWJDGKYHOCKDUESVAGSGVMGGQHLTCXRYXCHWDEJJWYGEFSYTYLSOBZAZZTTVPANDBIWOCPQDIPMOEAPBHLBNFTBAIJBNMQJXZUVXMQBRETNEFATJHVWMONIUQLXKZOUSZAIZCBVXOMMCBZRPKNHIXOUISXLCXYIYQHKFRSADXVZKLQNKQTYMFIGBK");
    msg.service_type = 166U;

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
    msg.setTimeStamp(0.3319773338185992);
    msg.setSource(11349U);
    msg.setSourceEntity(118U);
    msg.setDestination(28773U);
    msg.setDestinationEntity(30U);
    msg.service.assign("NCTPJFMBNQXFAXXBSNCXCIRXQDWONMLQOTWARYKVDUSOVHTCQLXUTBMFYZDWVCRFPTOPWQRCGQSKVCSZXOOYZZZVRYTRUAYKSYULPFHAGMCDJVBNJLVAAGPLDCTDKESLHNFEBHUMUAIPKPKFWXEMHGUMZMFIZHLETIIMBNPWFSROEGQKNEQHOJQWRAULQYHJLKBPMENEZAGSJYBZCI");
    msg.service_type = 90U;

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
    msg.setTimeStamp(0.6328159547806601);
    msg.setSource(4050U);
    msg.setSourceEntity(190U);
    msg.setDestination(53173U);
    msg.setDestinationEntity(109U);
    msg.service.assign("NZXOCVYAKHUVBYXVHLFNKSJLHDIZHEQWQIJKPCUXMRRXWNBPJFGNYDEUXIHWGOFMWDSSFPQIYLTVTRTHPNWFDDYQQHBTWGGEQIVUNALUWXMXZHOFXGGZTJCUNOJZSRHVRDLQLEVMQKUSOORAMVOCIBLYOJLUEAYPCDQRMTIAGAJOZEEHVMMJGYOSYCFSPDEMLGCGPUQPCVXBBAZNTTFKSWLRBNCSKXZRYCBSDZTIEKUE");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.9766303490892668);
    msg.setSource(836U);
    msg.setSourceEntity(35U);
    msg.setDestination(17846U);
    msg.setDestinationEntity(202U);
    msg.value = 0.7729569194264108;

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
    msg.setTimeStamp(0.8690890049623698);
    msg.setSource(40254U);
    msg.setSourceEntity(33U);
    msg.setDestination(62826U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6282014198315001;

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
    msg.setTimeStamp(0.28884955417467395);
    msg.setSource(38829U);
    msg.setSourceEntity(98U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(179U);
    msg.value = 0.731982915291334;

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
    msg.setTimeStamp(0.698443959187719);
    msg.setSource(56391U);
    msg.setSourceEntity(71U);
    msg.setDestination(53241U);
    msg.setDestinationEntity(63U);
    msg.value = 0.9356839202939389;

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
    msg.setTimeStamp(0.9656250578604542);
    msg.setSource(39334U);
    msg.setSourceEntity(200U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(45U);
    msg.value = 0.661360311855487;

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
    msg.setTimeStamp(0.5711423682318854);
    msg.setSource(24439U);
    msg.setSourceEntity(170U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(47U);
    msg.value = 0.4023747708593275;

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
    msg.setTimeStamp(0.24196717876533036);
    msg.setSource(39308U);
    msg.setSourceEntity(231U);
    msg.setDestination(17998U);
    msg.setDestinationEntity(29U);
    msg.value = 0.648910706857398;

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
    msg.setTimeStamp(0.7764649827362753);
    msg.setSource(20254U);
    msg.setSourceEntity(225U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(29U);
    msg.value = 0.39874981264125153;

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
    msg.setTimeStamp(0.9680111855832837);
    msg.setSource(55831U);
    msg.setSourceEntity(192U);
    msg.setDestination(54915U);
    msg.setDestinationEntity(213U);
    msg.value = 0.3163930996959583;

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
    msg.setTimeStamp(0.2723031820183075);
    msg.setSource(42610U);
    msg.setSourceEntity(185U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(85U);
    msg.number.assign("JKMBHCVPYCUGJCGZLCLMZBVDYHGSOCTQLVUULJUACFBJBDNUGKPWTXE");
    msg.timeout = 28538U;
    msg.contents.assign("WUUNLFKHCZIBVGXOQGIXBSVBHOHNBLDLVFSPXVHVBDZGJGRZICRPJXTEHQFBOECVPQOGBDXWFDBFKNSPHORFTTUXZIMETPQWFPZBGCZEZKYDIYYLHAXHGXJFDVQQNIMUYIWPFYVCCSJUMAZOEAAWJVPKTEKLMCSMHODWRNDCUIYSKTGLECWKRZRAKQXJOAGPFWLRTAYMWYD");

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
    msg.setTimeStamp(0.8038219642025097);
    msg.setSource(10268U);
    msg.setSourceEntity(24U);
    msg.setDestination(61010U);
    msg.setDestinationEntity(84U);
    msg.number.assign("RCUIGOHLHFKUIOHFYXECAVIKZELFGZOHYEGGVUUMUGNAQPAICSTHVMZNOTQSSRUBZP");
    msg.timeout = 52302U;
    msg.contents.assign("OADNTWCWFVPTKBMLYTUXRKVDAVSCBDGIQFZBNWPVFCFBLHHAFTXNRKGSXXYLQUBL");

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
    msg.setTimeStamp(0.6073856403224374);
    msg.setSource(11464U);
    msg.setSourceEntity(229U);
    msg.setDestination(12698U);
    msg.setDestinationEntity(6U);
    msg.number.assign("CWRDNGEYMQTZBVMPOHURVVCZOEODJXDEQXQGQYJSHJOXAFVSPDMECTOFIUWKLEMTUOHHUA");
    msg.timeout = 17975U;
    msg.contents.assign("XAYPCGGTOOPKHCSNHLWBNZOIIRQFVVKEJZPRIMYXWTVBEPZDCYGKCNAYBPUZPSHJSTLREMMIUPAIWGJIUWODSKEGAFIQGMBVTUYSNYWUJVYHRSQMHPURXAKAEMJDGZFSJLDAXMKQLNRAFHCBYQMDTXNGSZTFTLHQLVQKQAKBFHDROXVBWAXQCOUEBEJSEXOZQIPGGBLTWOKWUMNILBLFTYNDZOCDFVIPRWJTSUKJNDEWXCYEZF");

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
    msg.setTimeStamp(0.685321650876244);
    msg.setSource(44628U);
    msg.setSourceEntity(113U);
    msg.setDestination(46310U);
    msg.setDestinationEntity(126U);
    msg.seq = 3980655374U;
    msg.destination.assign("OAUMBTXQPIQTVMURGKRJDMWZVSVUXQLGSAWYIWWAFKJHORSWKMUYNKSEFUQKDDEQQPTBLBAKGGHHIIJTOYEIEJELLJIFYJRTOUMMVNSXRYYHZVCEIXLTBHNFZBPDLKVGIQFKJLARZSWPSQZTKWIXMYOCZGWCKAZYSIPBYNCSMJJADBNADXCVET");
    msg.timeout = 40846U;
    const signed char tmp_msg_0[] = {-42, 96, 116, -76, -85, -91, -93, -68, 116, 10, -103, -83, -5, -24, 44, 29, -3, -106, 58, -49, 107, 35, -66, 86, -62, 6, -28, 47, 18, -16, -64, 5, -21, -17, 25, -25, -60, -39, 123, -29, -101, 70, -32, -109, 103, 36, -123, 48, -91, -11, -61, -72, 80, -76, 85, 109, 95, 30, 64, -15, 84, -92, 118, 20, -86, 65, 34, -103, 37, -111, 0, 62, 45, -34, -68, -44, 58, 77, -38, 93, -101, -77, 19, -66, 81, 106, -108, -127, -128, 75, 2, 93};
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
    msg.setTimeStamp(0.7332317311647966);
    msg.setSource(33910U);
    msg.setSourceEntity(171U);
    msg.setDestination(6769U);
    msg.setDestinationEntity(227U);
    msg.seq = 2560061511U;
    msg.destination.assign("WUQZDLXKLFAOQTLIVJVBTMJRMG");
    msg.timeout = 24422U;
    const signed char tmp_msg_0[] = {-14, -53, 58, 4, 44, -106, -62, 72, 48, -86, -62, -68, -117, 28, -19, -2, 70, -33, 121, 80, 58, -116, -50};
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
    msg.setTimeStamp(0.47826560249020456);
    msg.setSource(41371U);
    msg.setSourceEntity(102U);
    msg.setDestination(32719U);
    msg.setDestinationEntity(52U);
    msg.seq = 2548317304U;
    msg.destination.assign("SLCTIJHDPJROYWMZRMLUNQZHMHLSBEWIEPWUCQBDTHTEDXWDMEECHQKWRTXHASCNIZNGOBNHODQMGSOADJAVKVPTVBKBFISIJSEFAUFXSZPRFOJWQAOXVBREXKZHBYFDCLWUVHKFITALGPTAGKMCZVYXFNROKPNKDGURWELYYPOQVVWRTDNQUPQMIIO");
    msg.timeout = 35331U;
    const signed char tmp_msg_0[] = {-16, -107, 2, -42, -120, 43, -89, 120, 8, -37, 70, -112, -86, -5};
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
    msg.setTimeStamp(0.6655520524457672);
    msg.setSource(27237U);
    msg.setSourceEntity(200U);
    msg.setDestination(42832U);
    msg.setDestinationEntity(82U);
    msg.source.assign("DWLIMVEZHKFCUXCDRJJWFKXESUTLLDYSHGPXSZRXPUULMSOCRBMLAMXGEXGWGODZBLYETRHB");
    const signed char tmp_msg_0[] = {-32, 41, 123, 16, 62, 75, -58, 89, 87, -42, 87, -55, 9, 66, -112, 29, -123, -15, -66, -95, 116, -120, -21, -117, -53, -53, 32, 74, -63, 33, 41, -20, 44, -100, 1, -24, 113, -21, 88, 37, 97, -14, 2, 63, 81, 97, 91, -41, 75, 118, -4, -121, -98, -2, -14, 36, 25, -67, 78, -60, 115, -87, 102, 86, 8, -49, 101, 109, -63, -113, -29, 99, -102, 21, -69, 97, 117, -100, -75, 65, -58, -77, -51, 86, -126, 124, 43, -75, 57, -72, 34, 12, 81, 101, 115, 45, 123, 106, -110, -33, 64, -9, 87, -89, 30, -32, 34, -3, 27, 23, -44, 9, 96, 0, 63, 29, 56, 30, 20, -15, -4, 8, 58, -128, 70, -58, 0, -80, -108, -64, -23, 87, -124, -103, -10, -29, 13, -112, -82, -33, 66, 43, 74, 105, 47, -58, 71, 95, -9, -59, 59, 62, 33, 79, 2, 38, 91, 96, 58, 59, -38, 17, 102, -21, -50, 93, 59, -48, 30, 54, -61, -33, 102, 11, 29, -104, -9, -116, 81, 100, -62, -63, 125, 25, 87, 77, 24, 15, 3, -119, -18, 71, 81, -16, -104, 16, 53, -29, -71, 31, 111, 18, -113, -121, -58, -35, 63, -49, -123, -37, -32, -101, 99, -26, -15};
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
    msg.setTimeStamp(0.28602740238335267);
    msg.setSource(41006U);
    msg.setSourceEntity(163U);
    msg.setDestination(23766U);
    msg.setDestinationEntity(182U);
    msg.source.assign("BMCIQKSYYUKEPHQVWZHMSNTMKKNRFEDMAAULTVZFMIJIGOGYLDYOEOAPQCMUSFHHYJSWMNLAGCZEPGPOCABFTGXCBQDMLKQQTHUVBZWNIQKPXBDTLFWVNSXXHAXFBXTLEJLPOIRR");
    const signed char tmp_msg_0[] = {-83, -52, -96, -16, -66, 90, 21, -127, -42, -94, 9, 113, 65, 63, 94, 35, -4, 105, 109, -61, 114, 21, 4, 61, -42, -120, 61, -107, -76, 101, -101, -64, 125, -27, -48, 112, 82, 18, -13, 2, 83, -66, -36, 11, -69, 49, -93};
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
    msg.setTimeStamp(0.4857431058669771);
    msg.setSource(8428U);
    msg.setSourceEntity(175U);
    msg.setDestination(1638U);
    msg.setDestinationEntity(65U);
    msg.source.assign("TNVJCSLTRFI");
    const signed char tmp_msg_0[] = {-71, -59, -109, 109, -104, -91, 8, 47, 47, 5, 60, 54, -53, 24, -16, -28, -103, -92, 105, 123, 72, 29, 27, 58, 30, -9, -65, 57, -23, 69, 6, 50, -87, -1, 24, -94, 86, 8, -65, -44, 58, 99, -4, 90, 57, 80, 65, -80, 115, 96, 10, -14, 56, 11, 17, 27, -35, -5, -2, 111, -105, 45, -18, -8, -93, -98, 95, 71, -109, -11, -119, -56, 88, -114, -7, 67, -74, 119, -67, -19, 41, 42, -99, 18, 96};
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
    msg.setTimeStamp(0.20509666102735724);
    msg.setSource(3240U);
    msg.setSourceEntity(58U);
    msg.setDestination(5147U);
    msg.setDestinationEntity(160U);
    msg.seq = 1840834969U;
    msg.state = 222U;
    msg.error.assign("RCHKNHOHYPQILNCCMNJTIFOTVQIYSSMRIMWDFMLEUGEURMAKEWMGHAWLBXHCKEDBDWNIJZHZGUVMHAFQNSSVBYCFWZYVOLMLLGOUKDCOAHPRBATDYCGUVRYPFTWWWJTLUPEIPTZPXQIZZQECGJEDMIDKFBVJJXUZISGNPASENJBPQENBMHOYGTYN");

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
    msg.setTimeStamp(0.2058492585348337);
    msg.setSource(26145U);
    msg.setSourceEntity(75U);
    msg.setDestination(11782U);
    msg.setDestinationEntity(203U);
    msg.seq = 411962663U;
    msg.state = 129U;
    msg.error.assign("PUMIEHJKNDOXCHBXYOTZLKEPFOJZTPRSUFSBDXUIORZYQYAKKNVCKFAPCAYICWHDSQELFNXLWFOATRVMXUJIRKHYYG");

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
    msg.setTimeStamp(0.3664928238609414);
    msg.setSource(37433U);
    msg.setSourceEntity(6U);
    msg.setDestination(3359U);
    msg.setDestinationEntity(197U);
    msg.seq = 1105577921U;
    msg.state = 129U;
    msg.error.assign("WHTQRGKYYLAZESLXOORKWJUIGIHSBOCMZGCNXDAGSTYOIEZVCOUXSUYNPMYLETMMPCIRVGEJSRFREZLXTQOOAQBLQHWCMZKZNXBWSPEGVAFMAOJKCHUNDQKHYXNJFVBMPIHTFLDQORDOJUHXJDLMVFPLIKNWPDXPCPJRQBTYDRAVHYFA");

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
    msg.setTimeStamp(0.3439328483958711);
    msg.setSource(57397U);
    msg.setSourceEntity(217U);
    msg.setDestination(7781U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("KFQOWIEXEKRTPZBSCJSSJTXOVEUCVNZ");
    msg.text.assign("JCLHMDAIQXDLRRSWQAFJVFTVROZMZSGYHGGTOTBXGWYPKUFLTYXUVIEPAWMLONVBCPECBCXDWLOFSDREGCZQCUWEBMWSZBPWZTPTEYVSBNXHPQLAYPBIDGFXCQSCKDFHCSTARMLDOVECZEGNROATSAHJKHNMNUPMQMDMEUNGTYFIKDKXNFXJNEPHUXHVMRZUKOLUAYYRIQOIJKRSKNEGLFJ");

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
    msg.setTimeStamp(0.8039750101853762);
    msg.setSource(1883U);
    msg.setSourceEntity(215U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(87U);
    msg.origin.assign("ESKNFKOMJBDTZKKHDL");
    msg.text.assign("EOWQUTPHQXCUPMGWPXCRVDMLIAZLHBDHWRSJKSYMWOZHRFHRFURIZWALKAOHIDFXMPKYYCEFGMDOYGJBLPDRUFTYPYGFZUJDQHCOB");

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
    msg.setTimeStamp(0.21452287698504047);
    msg.setSource(18625U);
    msg.setSourceEntity(172U);
    msg.setDestination(19808U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("TXOIIUDJCZNIANXVCKWFJVQFUBRHGBMKMJJETIJBOJWNZDBCMVULSVXCDFIJSEHXUPEFFTVPFQUD");
    msg.text.assign("WLFCLBKFPQWYSXHRMKFWCIPEVSKNTJGBSADZPNHJUQKANZDZTPJFCORDLJFUIIONETXJDSBTRREHJJGVGSGXFUCWAGYDUUCTUWOEKGVSDZPRYNMNIYXGVBAQMRZXTSFBDYDZUDONLSZJSOWFPMEKRQZHLYJKERUYCLHXQWJIAXZIVWYEHGMTXAPCOCLPBQUGPEVXAWTAIQENTFIEIOYBUOKAPSNYZOKMLMHWVMHXKMAVNOIHQMCBGBFDTHLBQ");

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
    msg.setTimeStamp(0.7137874105463174);
    msg.setSource(62015U);
    msg.setSourceEntity(15U);
    msg.setDestination(34942U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("RPUAPWANPUDBSPDYTSWDBUZAPQFQOLVQJFHNIHLYZHWFUXMNJCKLFTHZIHYHOEGMGWMAMQXZVQIBGQWVGIKKCBCKORYQNWZXMDMEBHKAISCYSKZYLEGNUVXTDKFHZITIEFNJKRRP");
    msg.htime = 0.9806153419780655;
    msg.lat = 0.9591597939243085;
    msg.lon = 0.3842925398709198;
    const signed char tmp_msg_0[] = {29, 78, -45, -65, -34, -21, 88, -54, 94, 122, 9, 38, -88, 40, 75, 94, 9, -52, -55, -105, 120, 35, -123, 99, 1, 63, 108, 23, -102, 64, -12, -111, -114, 122, -99, 64, 69, -95, 89, 57, -86, -111, -2, 80, -70, 47, 17, 71, -23, -111, -127, 112, -9, -59, 89, 9, 29, -67, -73, 25, 123, -58, -16, -66, 30, 94, 102, -22, 107, 15, -10, 28, -8, -97, -88, 9, 27, -59, 111, 71, 75};
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
    msg.setTimeStamp(0.3986351008151279);
    msg.setSource(61868U);
    msg.setSourceEntity(245U);
    msg.setDestination(56700U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("IGXTVVQAJWQAGE");
    msg.htime = 0.06513630908101331;
    msg.lat = 0.813785662891108;
    msg.lon = 0.4204489841321868;
    const signed char tmp_msg_0[] = {28, 36, 40, -36, -46, -44, 3, 47, 59, 40, -16, 65, -90, 74, 68, 65, -72, -5, -58, 66, 102, -94, -114, 113, -119, -70, 91, 56, -72, 77, 51, 46, 23, -11, -21, -12, 28, -65, 86, 55, 81, -77, 69, 7, 82, 21, -68, 59, -48, -76, 30, -71, 22, -105, 14, 83, 100, -69, -45, -53, -1, 17, 105, 110, -5, -60, -106, 54, -33, 4, 72, -83, -62, 65, 32, 19, -107, 3, 26, -32, -35, -83, -24, -52, 17, -75, -73, 103, 27, 78, 113, -67, 116, 108, 99, 54, 23, -49, 94, 117, 16, 42, -100, -30, 90, 64, -44, -23, -25, 112, -57, 76, -13, -45, 80, 33, 113, 45, 45, 91, 57, 79, 100, 84, 115, -98, 18, -27, -97, 102, 41, 109, -44, -4, -92, 121, 96, 46, 32, -49, -7, -91, -22, -115, -68, 110, 116, -58, 39, -1, 66, -122, -90, -82, -64, 4, 38, -77, 95, 38, 61, -114, -10, -43, 74, 121, 49, -18, 85, 46, 76, -77, 123, 85, -86, 103, -87, 73, -21, -99, -75, 54, -65, 69, 90, 111, -122, -26, -52, -81, 11};
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
    msg.setTimeStamp(0.03093157199257357);
    msg.setSource(33946U);
    msg.setSourceEntity(3U);
    msg.setDestination(20600U);
    msg.setDestinationEntity(187U);
    msg.origin.assign("HSHXZZZYBUOSLHLNTQILFMWTPTQMUGEBRHAECJSCPYOJVWDOGMXCCOOPNCIWI");
    msg.htime = 0.31975427560498726;
    msg.lat = 0.16531267653202109;
    msg.lon = 0.3789389211339509;
    const signed char tmp_msg_0[] = {-55, 52, -122, -111, -127, -25, 21, 124, -66, 108, -16, 15, 114, -5, -23, 124, 91, -104, 91, -90, 104, 82, -8, -101, -2, -84, 83, -85, -91, -102, -34, 42, 93, -54, -108, 60, -97, -73, -41, 34, 5, -35, -66};
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
    msg.setTimeStamp(0.18023983694090984);
    msg.setSource(26013U);
    msg.setSourceEntity(116U);
    msg.setDestination(64302U);
    msg.setDestinationEntity(201U);
    msg.req_id = 64831U;
    msg.ttl = 6212U;
    msg.destination.assign("EAAHKECTBXFUTVLJRPKQCRMXDKQPFSBZAOGBDZCOWSWHEOFDBSKSGZEVMJDBNJQMXZZEOHYGSEYAOUHUBZAIMBMUCYQEPGJINIWMUILFSXZRRTNDAEVWRLRXHGUGYOANTMWUXJWTNWZILRFAGXHCHRMYGJPLPIVETRXKNWQLDCDXYJMIILKYLFIHGVASAQQVCUNQDZJLPFKBCXOCTNUSGFFOVYFRETPMTNZDC");
    const signed char tmp_msg_0[] = {92, -70, 113, -122, -35, 45, -52, 110, 51, 82, -106, -3, 17, 0, -10, 14, 52, -80, -75, 104, -99, -118, 92, 116, -95, 50, -16, -10, 52, 28, 38, -126, -34, -105, 2, 121, -32, 43, 34, 17, -73, 34, -60, -23, 55, -10, -128, -2, -117, -24, 113, -97, 110, -108, -62, -97, -68};
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
    msg.setTimeStamp(0.8491739884598996);
    msg.setSource(31840U);
    msg.setSourceEntity(203U);
    msg.setDestination(20723U);
    msg.setDestinationEntity(220U);
    msg.req_id = 31583U;
    msg.ttl = 20988U;
    msg.destination.assign("TJYBSOGMEARCTJRPICHFMLPVIPFUQDYWUBBIXKRTQYTNKGPHHZGQFOVTHGPETOHJZNWJYZMMSQYFENVYEUSOMQRAFXGAUUOVNVWZXDQACPABXOIOWUPBGYLLSVVPWKKIQMXGSIULBZMRDVFMLCZFOQXGMAEFLDKEFHFXJDUULVJREDEQSWUYSNYO");
    const signed char tmp_msg_0[] = {107, 7, 121, 24, 51, 61, 77, 63, 81, -125, 75, -120, 77, 81, 30, -67, 79, -99, 15, 72, 115, 6, -127, -6, -84, 110, 78, 65, 38, -1, -98, -125, 45, 76, 20, 31, 77, 54, -14, -70, -116, -49, 35, -69, 84, 15, -117, -2, -85, -54, -18, -18, -84, -127, -123, -31, -125};
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
    msg.setTimeStamp(0.09645816539512675);
    msg.setSource(33138U);
    msg.setSourceEntity(19U);
    msg.setDestination(10074U);
    msg.setDestinationEntity(55U);
    msg.req_id = 53113U;
    msg.ttl = 37465U;
    msg.destination.assign("NVWLREAFGKBVTGKJBNJAODVBOXDVBWDKUCWGQXHHZFTXRZJXYJNCCPSQNUHUMEGZRHYRTXHSNXJQLBXKZFZMINLTZOPMXYNKUQSUIWQTMRWPKPIQCGAMVFMNYVNFFJCIGCMPBOWLDLBHJJORDTEUZKTGEUQWOEHWVTPTQFDSMMYYPZIEZGXDFZCHISPLBJYYKDEQLUSHALJ");
    const signed char tmp_msg_0[] = {67, -68, 1, 50, -66, -31, 50, 54, -7, -65, 103, -124, -36, 121, 88, 106, -74, 43, -64, -122, -115, 35, 121, 105, -13, -96, -55, -56, -103, 17, -27, -123, 56, -104, 97, 40, 31, -24, -40, -32, -107, 1, 37, -91, 53, -118, 30, -53, 70, 13, -17, 87, -109, -101, 115, -24, -63, 90, -96, 31, 113, -43, 124, -55, -68, 125, 33, -126, 123, -1, -79, -66, -69, -10, -33, 9, 31, 117, 107, 87, 45, -120, -81, 51, 73, 36, -107, -62, 8, 37, 24, -3, 115, 100, 42, -81, 23, 0, 28, -57, -20, 18, 84, 121, 99, -52, -63, -61, -16, -63, 66, 25, -127, -35, 42, -67, -50, -32, -80, -68, -116, 93, -116, -33, -40, -35, -104, -9, -89, 108, 56, -40, 1, -52, -78, -106, -20, 13, -74, -116, -34, 5, -126, -125, -85, 124, 55, 5, 23, 97, -31, -103, 4, -115, 28, -26, -47, -125, -55, -62, 45, 102, -108, -112, -48, -17, 78, -125, -40, 20, -66, -10, -81, 81, 5, -26, -89, 42, 87, -90, 4, -55, -14, 97, -115, 56, -96, -43, -81, -15, 6, 75, 106, 45, 76, 8, -82, 125, 67, -58, -36, 28, -77, 114, 17, 21, 45, -40, 85, -13, 5};
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
    msg.setTimeStamp(0.8751883983977584);
    msg.setSource(50831U);
    msg.setSourceEntity(140U);
    msg.setDestination(28240U);
    msg.setDestinationEntity(143U);
    msg.req_id = 56898U;
    msg.status = 24U;
    msg.text.assign("STFMVZGNRGSGCMQGTAYYBKTEURDUUNOZPRDZWMIMNAWDBBIWAVVECKWPFVZ");

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
    msg.setTimeStamp(0.60422665131721);
    msg.setSource(43919U);
    msg.setSourceEntity(120U);
    msg.setDestination(29906U);
    msg.setDestinationEntity(213U);
    msg.req_id = 5017U;
    msg.status = 51U;
    msg.text.assign("RZAOEFMAHAUAFKHVWPIIDIHAJBJJQHADRLMBAFQCTVQGQLQFFGEXIISEJHVRCZVOZUHOBZWPMLAWWKDCWJSXRRIRSVMNNSBWVYFTFPQTGK");

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
    msg.setTimeStamp(0.7932960396878748);
    msg.setSource(49724U);
    msg.setSourceEntity(221U);
    msg.setDestination(46843U);
    msg.setDestinationEntity(102U);
    msg.req_id = 16428U;
    msg.status = 170U;
    msg.text.assign("LMRFFNDFUHWYUUYOGPSUTZTKDLSIRAGPVETCAPJOQMEPKDLYSGFCLOIGWXXQSNGZXBLSUANFWVMQWWVCPZBOWSZBPAVACZUAWZKOJQQKRBUNNNYRITFXTCKBJUOEEMHPTEZHSYBKHGIAXFI");

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
    msg.setTimeStamp(0.10348554421624723);
    msg.setSource(4407U);
    msg.setSourceEntity(130U);
    msg.setDestination(21079U);
    msg.setDestinationEntity(246U);
    msg.group_name.assign("HPFTPILEPSIMEBPXRGEWYDLDZUILMHXJIHACLTJENSAJJZNREKKTJCZGJOZSGTIUSEUOAZPXOYFVBKWFWRVYRUMGXFWGCQSZWCYPVMHSMDKRGAUBANLIUYBOENFXEMBOXHQAIMLZQWOKVONOUBQDLDILYDBMFFGQVPUJZCVGNEWDFB");
    msg.links = 1407125105U;

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
    msg.setTimeStamp(0.49932859550478237);
    msg.setSource(51911U);
    msg.setSourceEntity(137U);
    msg.setDestination(39067U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("LJWNGFCBPMNMGUINDZBKJHJJOAYYIVKEVVZHMXLYJPMOSGWQJNAGHRZHICLRRCPONEVMZPFWHRGRXVFOKDTKJJBFCYBNQATEUQXPBBQWMYPZEIEGCVDHAXLZFUSVKWRFOLPLFTNFYSKZDXRTKGPOHXECTDCOWVUYCJUDNTQHNPQRCESIYAAHUQDUKYEGTVXSMKWSPQBTLLJMUCDNDROSAUAAIEQLZWRIULBSFVBXIZIODBOMXYWGMXQAHTFSZE");
    msg.links = 889919168U;

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
    msg.setTimeStamp(0.292839120711455);
    msg.setSource(18166U);
    msg.setSourceEntity(111U);
    msg.setDestination(53U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("UONFSLISJVLTLMNIZRALSLYBGMJSPUBRGICKRSF");
    msg.links = 553058442U;

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
    msg.setTimeStamp(0.022790793789728148);
    msg.setSource(30917U);
    msg.setSourceEntity(50U);
    msg.setDestination(6563U);
    msg.setDestinationEntity(171U);
    msg.groupname.assign("LCFYWBGKLNEMMXTHICLSZIEFKYAYBJGXWLPUPYDZEKQYEPJWRFTKK");
    msg.action = 199U;
    msg.grouplist.assign("NIZNYPJRJFBDTHPOTKGZRXSFUTQEGJXOORLJVVWVHRAASYPTMMO");

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
    msg.setTimeStamp(0.05952393731216343);
    msg.setSource(19352U);
    msg.setSourceEntity(230U);
    msg.setDestination(30978U);
    msg.setDestinationEntity(203U);
    msg.groupname.assign("RVJKJYZJVTRWWVJEXFQYQHJVUBGHDAQWEQSKOCRFD");
    msg.action = 116U;
    msg.grouplist.assign("YNZZZTIWLMVNHZQWHPYLCVNBOTGVCSBAGMUPDDCISSPHDIMOTLAHDUEVJTBMKNIGUEXGYKIVWPJRELVQUGFAMKONXJWOREGXQPZPCHIXQBHPJFIXLUADBCXDOSCYWZJTRONMFZGFQWFDKUUCOQXTYKJNPUSCGVDBQTARXJRFQFFSFHEKRKFSEOPAUZYQZKYTMYVEOWOXRTVNMSCSNB");

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
    msg.setTimeStamp(0.07680219077294148);
    msg.setSource(46704U);
    msg.setSourceEntity(123U);
    msg.setDestination(51078U);
    msg.setDestinationEntity(92U);
    msg.groupname.assign("BZLBVNICPRXCRJVCKOKHDOZZYPUDKHXZPKOQKTJKWQPKWTWPXIIFYFBUUUQNJDSIPFNEAJBPOMAESLDWDLOLLYSUVRVSJSDMMIVGUMBTMNYTELAHAAFKKJIGZJYWRNHEYHXTOFSKTTYWVGBCJUGGVM");
    msg.action = 119U;
    msg.grouplist.assign("NCDNDUKHHQIYPYNABWXCUTSRYFOJJZCSWPZLIQVTFMQWMATWPNRPDM");

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
    msg.setTimeStamp(0.4189861032328699);
    msg.setSource(55923U);
    msg.setSourceEntity(9U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7714570321779224;
    msg.sys_src = 26670U;

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
    msg.setTimeStamp(0.004787260192710363);
    msg.setSource(29893U);
    msg.setSourceEntity(213U);
    msg.setDestination(48729U);
    msg.setDestinationEntity(96U);
    msg.value = 0.617883144715524;
    msg.sys_src = 46805U;

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
    msg.setTimeStamp(0.38966092128959084);
    msg.setSource(62476U);
    msg.setSourceEntity(108U);
    msg.setDestination(54677U);
    msg.setDestinationEntity(109U);
    msg.value = 0.13760296706008102;
    msg.sys_src = 836U;

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
    msg.setTimeStamp(0.3474809042063467);
    msg.setSource(21282U);
    msg.setSourceEntity(171U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(98U);
    msg.value = 0.00027767690500246633;
    msg.units = 136U;

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
    msg.setTimeStamp(0.6414282226816825);
    msg.setSource(38050U);
    msg.setSourceEntity(240U);
    msg.setDestination(12557U);
    msg.setDestinationEntity(160U);
    msg.value = 0.8392020925763819;
    msg.units = 28U;

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
    msg.setTimeStamp(0.2619969034530504);
    msg.setSource(20758U);
    msg.setSourceEntity(121U);
    msg.setDestination(7434U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5041298584334042;
    msg.units = 254U;

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
    msg.setTimeStamp(0.2197031976763596);
    msg.setSource(15868U);
    msg.setSourceEntity(1U);
    msg.setDestination(39891U);
    msg.setDestinationEntity(127U);
    msg.base_lat = 0.12340947424801174;
    msg.base_lon = 0.8899423155180456;
    msg.base_time = 0.4454332969667759;

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
    msg.setTimeStamp(0.5507068175944185);
    msg.setSource(46446U);
    msg.setSourceEntity(252U);
    msg.setDestination(47693U);
    msg.setDestinationEntity(164U);
    msg.base_lat = 0.9379068783159287;
    msg.base_lon = 0.046225617956880405;
    msg.base_time = 0.8463310107500797;

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
    msg.setTimeStamp(0.43785180464212314);
    msg.setSource(64098U);
    msg.setSourceEntity(55U);
    msg.setDestination(59076U);
    msg.setDestinationEntity(208U);
    msg.base_lat = 0.13097816041945265;
    msg.base_lon = 0.6346247812268755;
    msg.base_time = 0.3120581762765722;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 60808U;
    tmp_msg_0.priority = 70;
    tmp_msg_0.x = -20980;
    tmp_msg_0.y = -23569;
    tmp_msg_0.z = -25986;
    tmp_msg_0.t = 24949;
    IMC::UsblPositionExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("NSMDGSWIDPEJHRPNLNBATYJRIRYPBOFSNIHZUBNBEAYDARBTCTXPZSJPCNFCEQOUHDKKWFWECUNCGJLGVUJFYQHYLOMEQMVIRDLYJYAPUEAKZLCVOPXRXZDKAXA");
    tmp_tmp_msg_0_0.x = 0.9146677459899399;
    tmp_tmp_msg_0_0.y = 0.4416421072305221;
    tmp_tmp_msg_0_0.z = 0.8692281594054349;
    tmp_tmp_msg_0_0.n = 0.18200220163244807;
    tmp_tmp_msg_0_0.e = 0.7276092567952369;
    tmp_tmp_msg_0_0.d = 0.4313989630490924;
    tmp_tmp_msg_0_0.phi = 0.5150713681193627;
    tmp_tmp_msg_0_0.theta = 0.975173126332651;
    tmp_tmp_msg_0_0.psi = 0.9403727538035581;
    tmp_tmp_msg_0_0.accuracy = 0.13439763757191037;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7949023161060885);
    msg.setSource(52035U);
    msg.setSourceEntity(141U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(55U);
    msg.base_lat = 0.41451563011498194;
    msg.base_lon = 0.1112745400027162;
    msg.base_time = 0.13634471843634588;
    const signed char tmp_msg_0[] = {-98, -18, -100, 48, 53, -103, -67, 18, 78, 17, -34, 18, 9, -18, -76, 43, -38, -9, 18, -75, -6, 22, 107, -2, 42, -97, 54, 55, 22, -95, 23, -46, 21, -25, 94, 119, -123, 23, -62, -53, -1, 59, -78, -124, -98, -57, -27, -27, -23, -33, -19, -48, -70, 2, 97, 99, 21, -110, -9, -33, 96, -15, 68, 43, -59, 65, -118, 98, -127, -24, 111, -110, -125, 99, -32, 115, -124, 56, 114, -60, 125, 119, -11, -92, -86, 91, -37, 34, -62, 9, 107, 14, 29, -92, -34, -19, 47, 37, -101, 126, 74, 111, 79, -36, 65, -88, 126, 120, -98, -28, 11, 79, 5, 17, -110, 46, -12, -62, -41, -70, -59, -29, 57, -85, 110, 120, -41, -64, 58, 110, 73, -112, -14, 36, 24, -13, 72, -17, -59, 77, -101, -87, 23, -66, -100, -2, -101, -128, -37, 12, -15, -80, -51, 70, -112, -85, 24, 87, -32, -117, -62, 8, 89, -26, 86, -98, -43, 117, 39, -31, -27, 72, -44, 9, -113, 5, -106, -75, 77, 4, 79};
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
    msg.setTimeStamp(0.11247699262218136);
    msg.setSource(61946U);
    msg.setSourceEntity(127U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(145U);
    msg.base_lat = 0.6325560330182016;
    msg.base_lon = 0.5467359150012395;
    msg.base_time = 0.0535692586959734;
    const signed char tmp_msg_0[] = {-112, 125, 99, 20, -29, 101, 59, 4, 77, 21, -113, 109, 7, 61, -99, 14, 52, 43, -77, -123, -76, 26, -47, -46, 88, 44, -15, -113, -88, 32, 77};
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
    msg.setTimeStamp(0.0015051859725422334);
    msg.setSource(42774U);
    msg.setSourceEntity(150U);
    msg.setDestination(14522U);
    msg.setDestinationEntity(201U);
    msg.base_lat = 0.09588211359630028;
    msg.base_lon = 0.6413555816436327;
    msg.base_time = 0.09290292678159817;
    const signed char tmp_msg_0[] = {-109, -101, -82, 25, 7, -120, 10, -90, 126, 86, -128, -95, 60, 112, 61, 120, 78, 84, -114, -6, -7, 11, 77, -5, 8, 46, -42, -76, -13, -33, 76, -36, 119, -55, -61, 115, 16, 94, 0, -68, -21, 124, -62, -47, -100, -97, 110, 57, -12, 52, 24, 119, -52, 15, 110, -75, 44, 21, -38, 23, 44, -75, 53, -66, 29, -82, -76, 68, -52, -14, 91, 108, 67, -30, -30, -88, -114, -12, -25, 25, 68, 82, -30, -23, 74, 117, 68, 22, -6, 47, 113, 71, -21, -110, -77, -63, 107, 117, 26, 63, 7, -101, 49, 20, 13, -89, 83, 81, 113, -93, 50, -102, 113, 89, -56, -37, -94, -108, -110};
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
    msg.setTimeStamp(0.8766397086835863);
    msg.setSource(6683U);
    msg.setSourceEntity(177U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(180U);
    msg.sys_id = 59734U;
    msg.priority = -83;
    msg.x = 31702;
    msg.y = -22193;
    msg.z = -20164;
    msg.t = -2639;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AWGXSBJSZDBEV");
    tmp_msg_0.description.assign("HMIXZXLGZZROMMYAZXGRVHQPQENIDYKBEXYZMNOQYFTBFOLCHGBKVBQYCESKCJKJBMJZAAPLSPJYQMHLNPKTSZFYOUZGCHAHJXAPHVTSQNRIHLUBOFDGRONWRDJRPIVFVCNEFKUBKMUVADVGWJETUODBRPQHVKMQICNTVSAXYHCEIBSTYUBEADWGLXXNGDCDSNUTETZRPWLXNFSWVY");
    tmp_msg_0.vnamespace.assign("MRNUXQYEXTSTRAHEBCXCIKJTMVQVCNTTNSUOOUHCNUWAJOQPOQXPDKVYOSMRTYKESPPMQBJUMNDIYCKODCZGAVWEJPPEJQFWVTALFXBSUEBJIRZYZDZKVHTFGADUHGDXFAYLDNV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ISWMVDKHPXFCFRZOTAMECMBYJGXOPNQIQUZMXSMIPHBVNVUAJKTKUEWEORTWCRYYRJCZKNVXUOWXUPYOECODSYUJVKTRFWNBJLSZKLVJTLIXUWZCEVBAMIIGMJQMAQFBJ");
    tmp_tmp_msg_0_0.value.assign("WQHVZTBWBEXTQTDPNQOHREAPMFVFWZJIXXMMTTVBWZVGWUTAYVVQVKUVDEEOQRFAHCFUOALIZKRNSLKDXUPFORPSZRCLVLHCGPENFUSXAUYDPZIMUBJJALWGBMRWEGNDWYDZRKPJAJCJLTOFPIVGOPNCSDJZSYJKXYYXYQTWSHOBOGSMCLNNKQKNTGTOGDAPURNFEGGXIAZ");
    tmp_tmp_msg_0_0.type = 237U;
    tmp_tmp_msg_0_0.access = 43U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SYMHQLMPJBAONHNLGXUKDFEJMSHWDQCSGDHZSVWOQAAYV");
    IMC::OperationalLimits tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.mask = 44U;
    tmp_tmp_msg_0_1.max_depth = 0.7115989587845247;
    tmp_tmp_msg_0_1.min_altitude = 0.13367835550394402;
    tmp_tmp_msg_0_1.max_altitude = 0.3346608173050194;
    tmp_tmp_msg_0_1.min_speed = 0.4150709432813454;
    tmp_tmp_msg_0_1.max_speed = 0.705256748716819;
    tmp_tmp_msg_0_1.max_vrate = 0.357188809702775;
    tmp_tmp_msg_0_1.lat = 0.23359487198784945;
    tmp_tmp_msg_0_1.lon = 0.7611949524683224;
    tmp_tmp_msg_0_1.orientation = 0.3410935000740982;
    tmp_tmp_msg_0_1.width = 0.8323448078062893;
    tmp_tmp_msg_0_1.length = 0.6447931909247653;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.38756322109553765);
    msg.setSource(18872U);
    msg.setSourceEntity(88U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(181U);
    msg.sys_id = 3393U;
    msg.priority = -67;
    msg.x = 7013;
    msg.y = 15860;
    msg.z = 19803;
    msg.t = 11146;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 13U;
    tmp_msg_0.x = 0.31296564057261966;
    tmp_msg_0.y = 0.8456368621686476;
    tmp_msg_0.z = 0.7618088920260138;
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
    msg.setTimeStamp(0.5570847436240728);
    msg.setSource(10515U);
    msg.setSourceEntity(227U);
    msg.setDestination(61039U);
    msg.setDestinationEntity(88U);
    msg.sys_id = 17849U;
    msg.priority = 7;
    msg.x = 8952;
    msg.y = 18488;
    msg.z = -6471;
    msg.t = -32326;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 49479U;
    tmp_msg_0.flags = 230U;
    tmp_msg_0.lat = 0.26939295928604035;
    tmp_msg_0.lon = 0.3883961397291461;
    tmp_msg_0.start_z = 0.9447412174470747;
    tmp_msg_0.start_z_units = 198U;
    tmp_msg_0.end_z = 0.15589789938153698;
    tmp_msg_0.end_z_units = 45U;
    tmp_msg_0.radius = 0.5648473493194431;
    tmp_msg_0.speed = 0.5991597970265011;
    tmp_msg_0.speed_units = 118U;
    tmp_msg_0.custom.assign("XCMASEHTHWYVVYUCJIRIAGQXRSVOUAKESEFRNOIGTRCFWPXGJZKXCWWNMJNDMIFELZDPIAIMTOEHNLUPZQTCOOBCGVSTHZGICVZEQRHAVLWQRFXJKYTVUGTBLUBEYIPPWDCGVOBEPFSMUHJCDIXNAEVNUJYKTZMGHQBXRDXLZKGFRLZNYYKJPPFQUULHOSSKRGOMOILYAJ");
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
    msg.setTimeStamp(0.8343302908990234);
    msg.setSource(46955U);
    msg.setSourceEntity(150U);
    msg.setDestination(11702U);
    msg.setDestinationEntity(118U);
    msg.req_id = 9992U;
    msg.type = 207U;
    msg.max_size = 40685U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.12213272058318891;
    tmp_msg_0.base_lon = 0.20246096034283456;
    tmp_msg_0.base_time = 0.9083929536899308;
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
    msg.setTimeStamp(0.15584274283674582);
    msg.setSource(32827U);
    msg.setSourceEntity(209U);
    msg.setDestination(35167U);
    msg.setDestinationEntity(219U);
    msg.req_id = 22152U;
    msg.type = 80U;
    msg.max_size = 37406U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.032192522189720574;
    tmp_msg_0.base_lon = 0.026230589536420212;
    tmp_msg_0.base_time = 0.12342151954968894;
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
    msg.setTimeStamp(0.8070593968445013);
    msg.setSource(38374U);
    msg.setSourceEntity(165U);
    msg.setDestination(21648U);
    msg.setDestinationEntity(88U);
    msg.req_id = 59467U;
    msg.type = 32U;
    msg.max_size = 33628U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.29569672378661027;
    tmp_msg_0.base_lon = 0.9945813754387969;
    tmp_msg_0.base_time = 0.17874912385539554;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 36629U;
    tmp_tmp_msg_0_0.destination = 2935U;
    tmp_tmp_msg_0_0.timeout = 0.8428743304759724;
    IMC::HistoricSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_id = 57883U;
    tmp_tmp_tmp_msg_0_0_0.priority = -113;
    tmp_tmp_tmp_msg_0_0_0.x = 27355;
    tmp_tmp_tmp_msg_0_0_0.y = 11789;
    tmp_tmp_tmp_msg_0_0_0.z = 28195;
    tmp_tmp_tmp_msg_0_0_0.t = -12611;
    IMC::SmsRequest tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.req_id = 21999U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.destination.assign("OOXDKDOSFCVUPPNMFPIKXUAZDBRCFAHKIOGCJFQBGQBKTLRZUVCUVZVWSYRWJIPTOKBAPGSSQLAAIHSNLJUJQOTWBCOTCZGPLRECYVMLELDXBJTSZQWSDVNYFGNMZEFFRUYTWDDLVIVNKQKUBCWPEHXNHQGEAERMKXDROEHMJCZNFDNNMU");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 0.10687610409257675;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sms_text.assign("CDJMDJSIHQTOXHELQRWSMWQPAZUHICBBNVLHBGEKNSXUNFKJOXXBOCBSUGGPRFBOZFJJTBEVDUPFYRWHKVDHROLQFYILCGEIRGPLANFWOMK");
    tmp_tmp_tmp_msg_0_0_0.sample.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.9753800401257453);
    msg.setSource(46831U);
    msg.setSourceEntity(228U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(41U);
    msg.original_source = 47173U;
    msg.destination = 58927U;
    msg.timeout = 0.07133059890449833;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 9U;
    tmp_msg_0.frag_number = 67U;
    tmp_msg_0.num_frags = 187U;
    const signed char tmp_tmp_msg_0_0[] = {-34, 43, 6, 43, 67, -88, -65, 5, -113, -103, 82, 10, 84, 102, -17, -57, 101, 43, -74, -34, -116, 65, -115, 59, -81, -63, -30, -78, 2, 87, -14, 85, -74, -3, 93, -95, 126, 87, 62, 64, 104, -42, 11, 7, 2, 117, 66, -73, -97, 28, 84, 101, -74, -49, 102, -7, 76, 125, 113, -92, 95, -126};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.21312613947526082);
    msg.setSource(60059U);
    msg.setSourceEntity(193U);
    msg.setDestination(53860U);
    msg.setDestinationEntity(145U);
    msg.original_source = 35381U;
    msg.destination = 6255U;
    msg.timeout = 0.05345416440435824;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 212U;
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
    msg.setTimeStamp(0.758783358970109);
    msg.setSource(17476U);
    msg.setSourceEntity(146U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(83U);
    msg.original_source = 7141U;
    msg.destination = 46954U;
    msg.timeout = 0.1740996261499207;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 242U;
    tmp_msg_0.x = 23946U;
    tmp_msg_0.y = 48117U;
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
    msg.setTimeStamp(0.3950635568818591);
    msg.setSource(26628U);
    msg.setSourceEntity(153U);
    msg.setDestination(13382U);
    msg.setDestinationEntity(233U);
    msg.type = 247U;
    msg.comm_interface = 52990U;
    msg.model = 52728U;
    msg.list.assign("IVNFZGQNBSXPZEPZHMHWPUIOVPAAONOKTHS");

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
    msg.setTimeStamp(0.2019180664825826);
    msg.setSource(52934U);
    msg.setSourceEntity(221U);
    msg.setDestination(61228U);
    msg.setDestinationEntity(42U);
    msg.type = 86U;
    msg.comm_interface = 54865U;
    msg.model = 28152U;
    msg.list.assign("AVQPFGKXOVKTIRIJSYUVZURBAWMHHTAKG");

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
    msg.setTimeStamp(0.5192000660109654);
    msg.setSource(12197U);
    msg.setSourceEntity(88U);
    msg.setDestination(32440U);
    msg.setDestinationEntity(32U);
    msg.type = 119U;
    msg.comm_interface = 57410U;
    msg.model = 5652U;
    msg.list.assign("OGBBTSZIEMZRMEEMSCKFRJDYRKYGKIHUTPQTYPPQUDMUWIHWGIHXDCLSIWJWPVOGGZMGXTCSQRHTRIQRBDLJAJZVKQWWKJTVFYFUBKBCCPBOUDUETYJLNYWDKHNFHBWNEKDC");

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
    msg.setTimeStamp(0.02238881912794799);
    msg.setSource(57100U);
    msg.setSourceEntity(213U);
    msg.setDestination(28653U);
    msg.setDestinationEntity(238U);
    msg.type = 100U;
    msg.req_id = 1364251718U;
    msg.ttl = 38876U;
    msg.code = 227U;
    msg.destination.assign("KGXUZEQUPEVFUBJOAXTQUCNYUNBSFLTPZMGZGVORWDMPYTSVAJVAQGKICBLXMPMZVWNLMEZAGSPGOMDUPFYVIAGPELKXQECUXHVTKRKDHMKUNWXGJOFKSCGNSCHTDTKFNHLOAYLKMSCDLZBCWYRIJQMNEARCIMWRBWZJWPJTDFDLXTSEHDBJLRVNQ");
    msg.source.assign("VVNOEJYTVRCMFTSSLHLWGTBZJBRQIPNCPCBNSQUMYQCNDIRIZEKKZPMHUOAQSFTREZYXGFKKQVUATKKBGDMWXQZGFLHGANHG");
    msg.acknowledge = 136U;
    msg.status = 125U;
    const signed char tmp_msg_0[] = {90, 34, -46, 109, -26, -113, -22, -105, -17, -56, -114, 70, -57, 87, 83, 112, -56, 4, 112, -111, -51, -108, 22, 96, 5, 84, 126, -49, -9, -81, -36, -89, -28, 85, -33, 51, -12, -115, -26, 120, 121, -71, -38, -77, 126, -59, -22, 8, 59, -123, -13, -105, 123, -104, -64, 30, 7, -120, 45, -115, 47, 21, 0, -20, -128, -114, 58, -57, 78, -49, 33, 6, -55, 54, 53, -9, 88, -76, -24, -61, 98, 27, -34, 81, 79, 24, 0, 65, 99, 16, -121, 66, -37, -10, -98, -49, 110, 93, 100, 28, 101, 72, -107, -58, 124, -25, 114, -98, 73, -18, -50, 9, -106, -100, -41, 15, -21, 11, 71, 32, -124, -12, 41, 88, 92, -51, -91, -40, 9, -32, 57, -111, 109, 75, -66, -65, -118, -31, 58, 118, -54, 50, -63, -55, -61, -100, -85, -113, 71, -126, 31, 116, 16, -43, 24, 16, -91, 9, 5, -105, -123, 117, 87, 8, 67, 48, -37, 42, 87, 40, -21, -47, -19, 50, 98, -29, 107, 6, -103, -24, -35, 80, -5, -20, -121, -56, -88, -125, 90, -71, 29, -124, 6, -21, -54, -71, -19, 74, 65, 117, -111, 118, -56, 124, 60, -108, 114, -27, 0, -44, 86, 44, -127, 75, -5, -29, -117, 95, -70, 54, 105, 48, 64, 7, -89, 16, -83, 68, -116, 101, -5, 122, -6, -89, 108, -116, -7, -30};
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
    msg.setTimeStamp(0.6964844333811435);
    msg.setSource(52025U);
    msg.setSourceEntity(46U);
    msg.setDestination(25873U);
    msg.setDestinationEntity(199U);
    msg.type = 17U;
    msg.req_id = 2464598575U;
    msg.ttl = 64042U;
    msg.code = 145U;
    msg.destination.assign("MORHBSIDVOPVUOJBMNPXZIPAMWZCGIYVWDRQOZPOGIWKNCULSAHLNTLEHFXOWPTRLNCUARXDPNIMABERFDNEKYZBLDKQWEHEFRUEULKDNWTJHCGWQWJMQJPOLWHLGCFJYPUTBZSXKTIYBYFFTXSCRMMQEKZXALNIEUGJXDO");
    msg.source.assign("IEPMNGXOYWCKYZAFUHGLMMOUDMZVUPFIDJVSLPXJBSEYBMPJKAHDVRSKXCPQSQXBLDYFSJ");
    msg.acknowledge = 229U;
    msg.status = 105U;
    const signed char tmp_msg_0[] = {-24, -43, 75, 60, 23, 120, 50, -108, -18, 26, 11, 64, 12, 126, 97, -12, -101, 64, 5, -58, -89, 112, 51, -101, 26, 37, 5, 23, -15, -127, 113, 86, -14, 39, -32, -126, 126, 56, -32, 13, -85, -55, -41, 117, 77, 82, 41, -93, -114, -116, 16, 50, 38, -125, -31, -120, -53, 30, -42, 24, 88, 111, 51, 25, 14, -117, -116, 26, 16, -82, 63, -53, -1, -56, -84, 112, -67, 18, 83, 49, -83, -110, -99, -19, -42, 45, -101, -121, -89, 28, 75, 78, 6, -126};
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
    msg.setTimeStamp(0.21913389805872974);
    msg.setSource(28336U);
    msg.setSourceEntity(52U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(87U);
    msg.type = 72U;
    msg.req_id = 3255657319U;
    msg.ttl = 10783U;
    msg.code = 187U;
    msg.destination.assign("SJXJMTFWFCGHISKYINMRQFVZYBHSGLKCPNSQTJLZZYJGFRWEQBIPTWDDFROXSFEUJVPCKGTCUMZQKTOLCESKDBMPMWFJETTWUBMZLHJHKEAXEWVLTBNIEJVKSYBMUVZLKOSAHORKEMHZEPTIANNCJETVICNQURAZGQSDZXGPUFNQRYCCRNXHXBHXLDRYLYABXQOVGVIGAOYLCAPSVWQWBFIAOAIRDXYPDRNVPPDOXZLMHGWGUOYO");
    msg.source.assign("ASLEZMTYZAULKVXHHOJZREIMCMGYXRKLOJGTEOXSVHFEQONAXDUJLDQUWIVDGYWNZXUIJFVUPNXBENVSLAKBFQIKOCCQYQSRVDASASKVOFRRIYGMTRXMDNFWEUUFFJPBTBTGYWXIMLZVQBPOQMASRNPCCPHNEOKJDKIBBVPHQYEDIMTFODNBICHXLNAUVFPQHZGKGJPAZYHPIFMMNTWQJWTETLZKRXHGWWJ");
    msg.acknowledge = 2U;
    msg.status = 163U;
    const signed char tmp_msg_0[] = {15, 19, 75, 84, 13, -33, -49, -112, -83, -2, -22, 9};
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
    msg.setTimeStamp(0.5306578076755291);
    msg.setSource(34591U);
    msg.setSourceEntity(61U);
    msg.setDestination(12183U);
    msg.setDestinationEntity(70U);
    msg.id = 183U;
    msg.range = 0.06850467864356602;

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
    msg.setTimeStamp(0.6279152339600839);
    msg.setSource(32332U);
    msg.setSourceEntity(158U);
    msg.setDestination(17082U);
    msg.setDestinationEntity(177U);
    msg.id = 185U;
    msg.range = 0.2545503717857631;

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
    msg.setTimeStamp(0.3371620336099861);
    msg.setSource(22435U);
    msg.setSourceEntity(5U);
    msg.setDestination(60052U);
    msg.setDestinationEntity(12U);
    msg.id = 85U;
    msg.range = 0.05556942079356475;

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
    msg.setTimeStamp(0.06745282594804236);
    msg.setSource(47044U);
    msg.setSourceEntity(191U);
    msg.setDestination(7928U);
    msg.setDestinationEntity(89U);
    msg.beacon.assign("BHIJUBBGECDXBIRFEXYQVWWPLWGIDKHMFZTVVUBPKXGPCHNAMOPQMJOLWEVLVADQXLNNYFUSMNXOHRZZGKSQECGSCACRAZOVGIHLFSIPXBYSKRCAGMUKIJIYMQEEJH");
    msg.lat = 0.0881688168356547;
    msg.lon = 0.6037867344764838;
    msg.depth = 0.5324453010998926;
    msg.query_channel = 7U;
    msg.reply_channel = 105U;
    msg.transponder_delay = 254U;

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
    msg.setTimeStamp(0.28392268678333776);
    msg.setSource(46982U);
    msg.setSourceEntity(249U);
    msg.setDestination(34738U);
    msg.setDestinationEntity(20U);
    msg.beacon.assign("DSFXFVIMPNIDBQRYYYCEHXVYPPAQB");
    msg.lat = 0.5231706982859109;
    msg.lon = 0.06264185579043213;
    msg.depth = 0.2957229719608845;
    msg.query_channel = 8U;
    msg.reply_channel = 23U;
    msg.transponder_delay = 80U;

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
    msg.setTimeStamp(0.9336729439929545);
    msg.setSource(37754U);
    msg.setSourceEntity(161U);
    msg.setDestination(53067U);
    msg.setDestinationEntity(201U);
    msg.beacon.assign("XNKXYVWZXEFOGINEPXZCTGGSDIBIKDVWFMZTVVWEKTSSADVXQFZBNBRYCJVICURYPIDLSHATSLFUAL");
    msg.lat = 0.9375557893839437;
    msg.lon = 0.9975524313184588;
    msg.depth = 0.14356829204852928;
    msg.query_channel = 195U;
    msg.reply_channel = 159U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.6955315131469244);
    msg.setSource(37723U);
    msg.setSourceEntity(203U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(194U);
    msg.op = 98U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HTTHBPMHKPKIRWDYZUSXGDILLNYZMXEWZVJUWPCFXPNAUPADTQZKMLDOKLNFSRQVRSWTOUQDNIEYJZTFXIQEABNDXCGGTIMDWOSSIOEAGUXCEMHEYDHLXSGKQWHQIBKOKFDFLRBLNBNCNOWVGSYFFSIYASTZORRMBHFACQZJEBLFKCWUTECARJZUTMBHPUJX");
    tmp_msg_0.lat = 0.49517408748786707;
    tmp_msg_0.lon = 0.23315975782762388;
    tmp_msg_0.depth = 0.21907880888774645;
    tmp_msg_0.query_channel = 13U;
    tmp_msg_0.reply_channel = 17U;
    tmp_msg_0.transponder_delay = 12U;
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
    msg.setTimeStamp(0.11015947341644261);
    msg.setSource(47127U);
    msg.setSourceEntity(154U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(121U);
    msg.op = 148U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QZLJZZEFGTOFRYMWOUUTDWKORBONNOPHDKSUEMVHYBLSZQHJ");
    tmp_msg_0.lat = 0.3794444544407838;
    tmp_msg_0.lon = 0.8276090827629113;
    tmp_msg_0.depth = 0.7298705928336926;
    tmp_msg_0.query_channel = 165U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 40U;
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
    msg.setTimeStamp(0.9017556699502407);
    msg.setSource(39555U);
    msg.setSourceEntity(209U);
    msg.setDestination(23707U);
    msg.setDestinationEntity(250U);
    msg.op = 100U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZURKIIGTWTQSJOFCIXXRDVTTXJIYUIPEBLYHGJWGCSNGDAEHYFHJMISDPRJVVBOEBTRAAWWCYCBNQTPGWWZZSRBMYZXNHFEZLCXVAKBUJULPFOINKPMTFXBZPNVERFQLKQEDXPVMYCVYJKGADLMQYMUGNQWWXOXDLLDSUMTKSCOXUCIPNRJTSARGDHMQUDSEBNUJEZOLVFELMOKDWKJGPRBOCZZQNIFALKNHVIEMTGZYA");
    tmp_msg_0.lat = 0.3892340553694247;
    tmp_msg_0.lon = 0.42866424916550694;
    tmp_msg_0.depth = 0.6648871822962902;
    tmp_msg_0.query_channel = 233U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 32U;
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
    msg.setTimeStamp(0.6214320076742273);
    msg.setSource(49106U);
    msg.setSourceEntity(104U);
    msg.setDestination(6636U);
    msg.setDestinationEntity(143U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JYXKMMPKYHNWHBBBJUXRCGGIADFDGOAGBHBUBRMLPSUVBJJKWFJKCKTNQHDYUASHIEFWELROPVTUWTRCVGUZWPCEIVCJLPXCJRSLQXFUWXOQMVOSNELHLNZATTZNFQIOLQYQYVVDQXSQDILTOUYEODCZMMZKDIJCPBCXLWIBJAHPZLPXPVCPHKWGNGBTARINEUDDHEMOYXOAGNMRGS");
    tmp_msg_0.lat = 0.6691246075447722;
    tmp_msg_0.lon = 0.06335575895160772;
    tmp_msg_0.depth = 0.5396887250495919;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 93U;
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
    msg.setTimeStamp(0.4433242175870532);
    msg.setSource(30487U);
    msg.setSourceEntity(138U);
    msg.setDestination(52177U);
    msg.setDestinationEntity(79U);
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("ZLWLCKOVXKNBHZOUJUDCGSYBRVGDY");
    tmp_msg_0.htime = 0.19717618381055435;
    tmp_msg_0.lat = 0.9082908936269807;
    tmp_msg_0.lon = 0.2738195597455978;
    const signed char tmp_tmp_msg_0_0[] = {-31, 111, -116, 68, -5, 8, -93, -102, -77, -118, 48, -56, 30, -1, -8, 8, -43, -124, -39, -75, -29, -79, -57, -57, 30, 1, -16, 107, 78, -28, 8, -49, 18, -111, 16, -82, -118, -66, -52, 104, -98, 34, 65, 108, 19, -42, 31, 96, 95, -105, 85, 2, -38, -2, 83, -104, -73, 101, 7, -124, 29, -23, -100, 114, -71, -67, -107, 114, 126, 2, 6, -15, -11, -23, -75, -93, -127, -47};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.08301599857538633);
    msg.setSource(22058U);
    msg.setSourceEntity(6U);
    msg.setDestination(42476U);
    msg.setDestinationEntity(252U);
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 51U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7611735785785829;
    tmp_tmp_msg_0_0.y = 0.8199816065011316;
    tmp_tmp_msg_0_0.z = 0.38125326242985524;
    tmp_tmp_msg_0_0.phi = 0.8008854693159501;
    tmp_tmp_msg_0_0.theta = 0.4881854687492274;
    tmp_tmp_msg_0_0.psi = 0.3540884652947496;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.35748333861719417;
    tmp_tmp_msg_0_1.beam_height = 0.7993543754626772;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.634582962578751;
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
    msg.setTimeStamp(0.9187518690067809);
    msg.setSource(10886U);
    msg.setSourceEntity(82U);
    msg.setDestination(11515U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.586265695068131;
    msg.lon = 0.1111484384756466;
    msg.depth = 0.8904749212856488;
    msg.sentence.assign("OUREDNTZHYCDMDHKPSAWYEICRNMNYCJUWTUEOWYAODAPETQQAZXNWCUNFTRABGSOCZUFVLVKLGWSIKFPQIXPCIBIASEXEQXJXHJOKIQW");
    msg.txtime = 0.10668790695130081;
    msg.modem_type.assign("KEFRZFCUGHDRDUNGBSUUW");
    msg.sys_src.assign("PWQFOOBEZTQQMINIAOMEDGCBHIHSDTFBYUSDSONGHKLCTYLVUPKRUYYDRKLYXQWCRVWEPRRZFWEVDVCAOMLJXTWMFALMSUUCQFMZNNOVQXXYBXKLLADKPHCTPPOLWEFMIGXBJGRMJDJTBASYNRFIZZ");
    msg.seq = 18346U;
    msg.sys_dst.assign("WFEMCSZTMGSSJAYSZWTUDETBMNBNYVEOMACKEOLXUFIXBOROJFCXANWFQGKHDIXREDNZAXJRXKWGFIGGPBSHQPUWZZM");
    msg.flags = 253U;
    const signed char tmp_msg_0[] = {52, -43, -8, -66, 82, 69, 45, 86, -68, -54, -106, -68, 94, 9, 21, 37, -78, -123, 87, -10, 40, -124, -17, 15, -78, 80, -10, 63, 88, 82, -52, 32, -81, 76, -57, 5, 15, 38, -54, -17, -123, 55, -96, 14, -95, -110, -37, -123, -97, -90, -32, 31, -120, -35, -103, -43, -126, -111, -48, -77, -15, 90, -22, -59, 23, 37, -83, 44, -35, 3, 66, -114, 8, 43, -31, 51, 39, -24, -94, 70, 31, -121, -109, 62, 0, 26, 21, -99, -55, 58, 30, 60, -127, 49, 82, 14, -56, 124, -10, 7, 69, 102, -86, -71, 31, 122, -72, -80, 58, -75, -99, 124, 48, -104, -73, -118, 83, 57, 3, 92, -86, -49, 57, 108, -51, -77, 92, 119, 101, -125, 66, 6, 6, -50, -126, 8, -88, -111, -76, 115, 18, -22, 84, -81, 58, 53, -50, -24, -123, 87, 51, -116, 49, 77, 4, -98, 20, -57, 29, -28, 126, 60, -51, -67, -90, -44, 17, 17, -87, 25, -43, -33, 29, -103, -112, 56, -124, 103, 25, -87};
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
    msg.setTimeStamp(0.7661255989470527);
    msg.setSource(161U);
    msg.setSourceEntity(244U);
    msg.setDestination(12790U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.38237938300281293;
    msg.lon = 0.7354499361687827;
    msg.depth = 0.004513160887441803;
    msg.sentence.assign("ZYPUAQNQHVCGNCHKUZPAJBWTUCTIEVYOOKGAWRNTARPQHDYQVNDJWXUSOJSKBAJGPFVXRTMTCWXLGFPYZFBXOIEEDUMNDSYXARURNCBFUZLIBHLHFYLRZEOZMDJDQXHESOTOGREGWVXMHJL");
    msg.txtime = 0.5196982325033824;
    msg.modem_type.assign("FJYHYVVRETYOPLBRSDJIEGMOUJFXAVPYCVHIZJCUFWQOPXSGMAXMHTDNSTBEZIRPKQSUKNSVZKTPNNKQODBURWYALNAXIWIFPEUWSUDQICAMCNVCHHFBZTOJGMNFYGBSHEIJDIQWZVCAGLXEVLVCZRGDCPAYWFIDAOYNDLUZWZUMI");
    msg.sys_src.assign("DWMGYIPFQXBLQHUMMDCLEGCLHODHAIXUFYTVBFYRVQFUDKWEXQRQCSBETRCOURZZDVVFQPNYCBKZRJJTVMAWIUGWGENGPSEIHWPDKIMAARELYNPOJSLWDTZDGUFUGJISTTSZOIWCVWMXCJBHTZKZGUXYTNJSIGOIRDATPVFNRYRFWNJECLHPSOIELVOKRPLMHAABDBJQKHVXPJYXBYTLZMCQ");
    msg.seq = 37944U;
    msg.sys_dst.assign("DSPUZBJYQEKILVFRHCRAWONCETBAGYOEUXNDSGRLISGIVYZLPDDGFMFNUWUOWQJTHLMBGIDRMHPFKLZTTPDMQEYTFMWCLQWXTXRXKJBNZCIHLZSKOJKQJUKMRWMNXCYTFTPTNKCJMIWDQGKLGNYRAVHKEVROCKHQVUGZYVSZEFBBIBPFOIWEXSUJJWBVZEZYPUXOQWUNBFQMVJJPYHPUACFDRCBMXCPXLSAIOSVSNGXAGTAHDAEQ");
    msg.flags = 18U;
    const signed char tmp_msg_0[] = {104, 10, 20, 58, 69, -30, 39, 121, -43, -128, -31, 70, 59, -11, -11, 71, -113, 35, 3, -33, 41, 21, -9, -111, 40, 77, -109, -38, -50, -100, -118, 44, -90, 22, -55, -39, -109, -35, 64, 113, -74, 67, -91, -62, -79, -116, 24, 6, 75, -66, 11, 29, -46, 45, -80, 7, -10, 48, 83, 104, -114, 69, -98, 15, 0, -85, -103, -103, 81, -66, 39, 77, -66, -112, 20, -125, 64, 72, 104, 58, 61, -55, 113, -45, -46, -55, 63, 8, -124, -64, 42, -34, 73, 75, 3, 45, -59, -83, 37, -115, -4, -31, 115, 116, -121, 24, 22, 56, -95, 95, -112, 88, 80, 119};
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
    msg.setTimeStamp(0.7275594132665617);
    msg.setSource(25823U);
    msg.setSourceEntity(191U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.8553166143051686;
    msg.lon = 0.2547463234132986;
    msg.depth = 0.8066788218653788;
    msg.sentence.assign("OZIUSLPXWPPWRQBOTGYEVMYNSZTXUAGLDXFCBFVVCGJJSKJMAPJKXWQGBFPZAOEBPRHQGIDLUXAPKGCGKAVQHTFQRMFQKOBJSVNUZWKSVUPPVRILWUTNFYZRETYMNPEOEXWLYRHZLELUVQJBNCUDWSBCFQLOTZUOCOETWNDHIYAGWMNJTKRYLXDQXITRZZDVNLCZDUOKMCNDMDIJT");
    msg.txtime = 0.017729941888495415;
    msg.modem_type.assign("JVVAVOLKUXEQQDVJZHPRHZKGYTRNZYIWMETRIXYULORAQEBVTSIWTCBNJKUJXMZJNNABELVELPAAITNWPVFUGOIPEJHMGYMQYTCDNLDOEHAMNQDWNWHUTRJPOCQDDUHVWJJDCAYIUKZPCALFRZGICSQBGYYBCTKQIZWTSRHHTUIZVMZWWKGCDSC");
    msg.sys_src.assign("ONBRFHFHAJKKIMOHTYTNDYSOXKWYCTECMMWAHJTDBCKRPIZZDVKXQYBFLVACBESNKPYEEMISZVQGBRLBCROMNXIRGEBFPEPRJ");
    msg.seq = 32547U;
    msg.sys_dst.assign("QTPIRTAFNTFORTUEKNHOMBHDVOECVJVHYNZIVIYKAGDDOFPLLMXJTDJNOYEBAEUMQIGCWSBWYWNTLZJEQQKOFIZGKZCSBAKWFXQIVCQDXWJXRMPHAUQJPEAKRODBYXIBFUQUWUCW");
    msg.flags = 83U;
    const signed char tmp_msg_0[] = {60, -110, 87, 105, -44, 84, -66, 113, 94, -90, -23, 116, 1, -106, 99, 17, 35, 93, 79, -28, 72, 104, 41, -90, 17, -29, 25, -74, -10, -62, 55, 60, -14, 60, -105, -2, -67, 2, 97, 84, -2, 63, 117, 99, 90, -6, -72, 50, 70, 13, 24, 88, -48, 33, 71, 66, 9, -29, 107, -116, -127, 34, -91, 26, 116, -27, 119, -22, 80, -43, -13, 20, -35, -120, 96, 69, 104, -86, 103, -105, -24, -100, 29, -2, -39, 21, -40, -15, 118, -40, -122, -6, 72, 56, -83};
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
    msg.setTimeStamp(0.9612912468163385);
    msg.setSource(5637U);
    msg.setSourceEntity(101U);
    msg.setDestination(28775U);
    msg.setDestinationEntity(32U);
    msg.op = 147U;
    msg.system.assign("YDHXNQTHVOUVGLEQUOZMWSPOPUHPQNWXIGWECSJRJACWZGKQNIIDRSCPRDWNVQTOHBZITXTZBRXEYEDBVPBAOIVQFDAFMFJHPGPPULMFEAGLWRBLVHSTOEKYZLGXSSSTXSZNFHJSERDZIBURODMKQZFKVBYWIOLUWLEMTZJQGCTVFJXLJQODPXZYKBJAIMBPNR");
    msg.range = 0.9275556955361669;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.8975887941949946;
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
    msg.setTimeStamp(0.6840937733824334);
    msg.setSource(55693U);
    msg.setSourceEntity(14U);
    msg.setDestination(26239U);
    msg.setDestinationEntity(221U);
    msg.op = 88U;
    msg.system.assign("LPTWNVUSMSMKIODRPXBCXPCZQASXRXZRUWYWEMZHFYGTQYKRYLJJVSEFAZNQASQTVFGLEOEQOJIIUFBUTMYNDVNGMHQLHIEBEQOJAPVWXPGNFMPFAYDSHAWXKHCRGXILZYCHEGJTCAVSJUJXIQMQRMKNIJSZTKHPLZAWOTD");
    msg.range = 0.6786219032038316;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.942249526616975;
    tmp_msg_0.reason = 8U;
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
    msg.setTimeStamp(0.7778027385669577);
    msg.setSource(57419U);
    msg.setSourceEntity(205U);
    msg.setDestination(18900U);
    msg.setDestinationEntity(70U);
    msg.op = 232U;
    msg.system.assign("SPFZOPCYQSNMJF");
    msg.range = 0.11495089079897414;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.32976255971316315;
    tmp_msg_0.bias_r = 0.343405464923199;
    tmp_msg_0.cog = 0.8023138273412517;
    tmp_msg_0.cyaw = 0.9486369974159167;
    tmp_msg_0.lbl_rej_level = 0.8933449903491593;
    tmp_msg_0.gps_rej_level = 0.08288196480280363;
    tmp_msg_0.custom_x = 0.4556427408939714;
    tmp_msg_0.custom_y = 0.24120325153840683;
    tmp_msg_0.custom_z = 0.8637298505176212;
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
    msg.setTimeStamp(0.734660408130933);
    msg.setSource(46731U);
    msg.setSourceEntity(57U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.9803499687722746);
    msg.setSource(19135U);
    msg.setSourceEntity(99U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.3799492789701847);
    msg.setSource(49237U);
    msg.setSourceEntity(211U);
    msg.setDestination(11737U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.6781821999412666);
    msg.setSource(41054U);
    msg.setSourceEntity(71U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(198U);
    msg.list.assign("LNXKYFQHNZNYSICLZXEHLAJAHOVQAUGTGAIRTVSFAVECOYNPDDRVKMZOPQERXXMANMDNBEFYSGJPPOHYVHOTJWZEGRWTPZGUEXZYLHUQKCBWKEVLCFLZAJKWCVEYQITATRQTDIWFBGOBCUUIDSUSCSRFWVGSLUQZOWIOBTXDCBTCFDGMJUBVHIFMRINPDFAPMXPKJJBFDRKTNLJEYQVOLXLMM");

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
    msg.setTimeStamp(0.40920630443662165);
    msg.setSource(44271U);
    msg.setSourceEntity(244U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(173U);
    msg.list.assign("UFPJABFWESDEVHUAIPJNMKXGIPYGMOPTBAYCOFFSXFJQHVMZYXDWQPEUXILCQLXZFGGIILPKKCPSUDRDVZRUWYJEJKYAQTKRJAQGTTNBXIQSDJWSDJKDAPZMQFZEKBEUUZYIDVXTOQJNLKFNCZOMCYHLVMNOWPQHSGHLWTSRCBOUNMIPROXZTNYTECFANGARWLBHSRVZNBTXFIYHUBDYCSCDHWRVZAREBIVBMOOLRKEALQGC");

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
    msg.setTimeStamp(0.8370385436218529);
    msg.setSource(6160U);
    msg.setSourceEntity(108U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(39U);
    msg.list.assign("TJLBZEXIQYIDPBULRCLROZTQJMWZNLETGSCVXXCKUTGBVZYAAJGMJHPHNFTZPIWVGEQUZHJASUHHBTVEPRSGMZGAAVEDUEHKVZWDQXQSXCWDTQPOXPJFBQXNUGDLOZBYARFDRWIQNBHOUBMALORDYTWYMFYPIPIEAKBJEWFN");

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
    msg.setTimeStamp(0.5477318382896127);
    msg.setSource(14129U);
    msg.setSourceEntity(240U);
    msg.setDestination(3895U);
    msg.setDestinationEntity(191U);
    msg.peer.assign("CBUKPHCMXWCHJLCDVJRHPFPMEZSZEWMMQMJWAVSNEAOXTRHEPSIRKGTWKVVOVYVIDGVZYQXAUZMPXQEIOGITJYSZKYWAIUEGJLRZONTHU");
    msg.rssi = 0.13423202767971676;
    msg.integrity = 50079U;

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
    msg.setTimeStamp(0.11714926308573193);
    msg.setSource(42956U);
    msg.setSourceEntity(192U);
    msg.setDestination(26262U);
    msg.setDestinationEntity(187U);
    msg.peer.assign("EFLKBXOEKSQEIVAQDDEJCWSLICKXPBHVCMNGLCQUDUQRYGGLVFB");
    msg.rssi = 0.4965078363344112;
    msg.integrity = 3950U;

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
    msg.setTimeStamp(0.9300864081470245);
    msg.setSource(24901U);
    msg.setSourceEntity(227U);
    msg.setDestination(56673U);
    msg.setDestinationEntity(48U);
    msg.peer.assign("NQAKKOWXFTXLIKIIIZZRDBDCXLKBJLPXSADSSTWCNCHQKSHENCXGWTZMNPNXSEFZYHVNFQABYLQPZBLPGGJOCGASZWWYOXAFGGALJJHUTQTDRQEKJLIWQRREHTZOSOVKYHEYOEMNQFCPUUYDGBZQKJI");
    msg.rssi = 0.943889433307615;
    msg.integrity = 39936U;

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
    msg.setTimeStamp(0.003355467405834811);
    msg.setSource(25661U);
    msg.setSourceEntity(19U);
    msg.setDestination(7604U);
    msg.setDestinationEntity(130U);
    msg.req_id = 41894U;
    msg.destination.assign("AOJNACHFOLSHUTWLFSTWBXFTWTMFLQEWHIKIHDPKBLRTMZIDLEKYLVIJKVWOSHAKIRPAMUPQYXQIQDVAYZEZEMJXHOJZUDTBVNP");
    msg.timeout = 0.4299710518090384;
    msg.range = 0.5137374660915275;
    msg.type = 226U;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.19187066982374135;
    tmp_msg_0.ay_cmd = 0.47161857438984;
    tmp_msg_0.az_cmd = 0.3360593202517481;
    tmp_msg_0.ax_des = 0.7083264299895726;
    tmp_msg_0.ay_des = 0.2693355274428363;
    tmp_msg_0.az_des = 0.0037260586826589615;
    tmp_msg_0.virt_err_x = 0.6965950677934479;
    tmp_msg_0.virt_err_y = 0.08373945372515901;
    tmp_msg_0.virt_err_z = 0.47836595561443074;
    tmp_msg_0.surf_fdbk_x = 0.8751809261440439;
    tmp_msg_0.surf_fdbk_y = 0.5424278277103919;
    tmp_msg_0.surf_fdbk_z = 0.5105985755109437;
    tmp_msg_0.surf_unkn_x = 0.8739418535574565;
    tmp_msg_0.surf_unkn_y = 0.7556690469544954;
    tmp_msg_0.surf_unkn_z = 0.36738423436215795;
    tmp_msg_0.ss_x = 0.34680723539031155;
    tmp_msg_0.ss_y = 0.2405526816068968;
    tmp_msg_0.ss_z = 0.5630358332905839;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("NYYSCONZDUXQSPINGJICHDKUBOBDYMBTAAGFADGOMXYIWZMUBMOMBWDAVQJHPCFIOJHJLXWKPGAPUHXULHVOJCV");
    tmp_tmp_msg_0_0.dist = 0.4774594590432144;
    tmp_tmp_msg_0_0.err = 0.3084829362007345;
    tmp_tmp_msg_0_0.ctrl_imp = 0.2787629663176123;
    tmp_tmp_msg_0_0.rel_dir_x = 0.49108510063489264;
    tmp_tmp_msg_0_0.rel_dir_y = 0.022693236444896625;
    tmp_tmp_msg_0_0.rel_dir_z = 0.9896411754353939;
    tmp_tmp_msg_0_0.err_x = 0.5463298196701727;
    tmp_tmp_msg_0_0.err_y = 0.4561473842239139;
    tmp_tmp_msg_0_0.err_z = 0.9873502956121202;
    tmp_tmp_msg_0_0.rf_err_x = 0.21873305705772694;
    tmp_tmp_msg_0_0.rf_err_y = 0.0769096460852049;
    tmp_tmp_msg_0_0.rf_err_z = 0.5813832329131937;
    tmp_tmp_msg_0_0.rf_err_vx = 0.13989731013194684;
    tmp_tmp_msg_0_0.rf_err_vy = 0.1999998722253704;
    tmp_tmp_msg_0_0.rf_err_vz = 0.05630153670074167;
    tmp_tmp_msg_0_0.ss_x = 0.897317015440514;
    tmp_tmp_msg_0_0.ss_y = 0.43199046966069976;
    tmp_tmp_msg_0_0.ss_z = 0.6427217701114528;
    tmp_tmp_msg_0_0.virt_err_x = 0.5954268423606783;
    tmp_tmp_msg_0_0.virt_err_y = 0.12446466798617639;
    tmp_tmp_msg_0_0.virt_err_z = 0.9877621125018251;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.25505808662883767);
    msg.setSource(9505U);
    msg.setSourceEntity(109U);
    msg.setDestination(45926U);
    msg.setDestinationEntity(74U);
    msg.req_id = 56580U;
    msg.destination.assign("GVVFIAZUWBHLOXEAPQBDLGDYTKFKGZWRYWQGDBAFETDLNMCGFCUTGAODFRSCMAGHBTYWIZVOMTNQOBHSCADEDVEKRZZXTNJREBGOKUBRGYWXCTPVNSQPKWZYCLUQDJLHKTQOIRVASKOUOLRLQUCPWIUXYHSTJFJJFSPVLNWJMSLMZMANFBJVWXXGZMPPVYEMAYXYPZNN");
    msg.timeout = 0.0614754688126572;
    msg.range = 0.9021571484289972;
    msg.type = 223U;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.8248793748289113);
    msg.setSource(31568U);
    msg.setSourceEntity(22U);
    msg.setDestination(52225U);
    msg.setDestinationEntity(91U);
    msg.req_id = 28168U;
    msg.destination.assign("HXWESMMFHGLOMEXFNVRXLCZEOKOCFPDGBNAQGVNIQNAISQJESYJGQJOXKIBPSODMJVUVUEECJDTLRKKVJCVYRDPLRTSLYCNOPCXRZN");
    msg.timeout = 0.8779533371648012;
    msg.range = 0.6585892586036446;
    msg.type = 39U;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("XVSLGUDNQCSLBNWYCAUVZKGMROOLWFYSXOZNITPBFVSGDSSLEIZBGSXXTRWXGFSGNLKZWVZMMYNYDKBQYJOXXGOUGNPQDRPGJEIOCTLVDMPOAAVFYZKCIZNCAFVFEFTBCBQVYMJWHAG");
    tmp_msg_0.sys_dst.assign("NWITVTVRRBWHOKAVKNCRZQWMGWCNHIQEPXLHCOHPWHEMXDQOTHQJYUGWPANXALHCMYTSIFLTKUBUZMVINBPYKKQOXZYHIQLEGFJMFJKVNFADYE");
    tmp_msg_0.flags = 233U;
    const signed char tmp_tmp_msg_0_0[] = {-49, -62, -30, 22, -113, 0, 104, -100, 38, -115, -15, -19, 94, -57, 107, -74, 81, 11, -108, -2, 74, -109, 74, 110, -95, -68, -87, -33, -30, -113, 74, -80, 44, 115, -43, -27, -39, -94, 45, -19, 105, 6, 92, -48, 64, 11, 119, 109, -14, -25, 16, 83, -75, 119, 106, -57, -111, 77, 49, 61, -14, -80, -128, 30, -27, -8, 105, 9, -9, -20};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.12210244221873467);
    msg.setSource(42193U);
    msg.setSourceEntity(140U);
    msg.setDestination(52866U);
    msg.setDestinationEntity(14U);
    msg.req_id = 5747U;
    msg.type = 117U;
    msg.status = 150U;
    msg.info.assign("YSVKLGHSPPZGORILGESRCNERIWTLIPFQTHAUCZMSIEDAMRKAKQCAPRMUHFYSCCNWZMRHJFBGEEJZPYXVYXHTYVOTNAIJIXLLWJMKDX");
    msg.range = 0.4721017442596266;

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
    msg.setTimeStamp(0.750897855655134);
    msg.setSource(27910U);
    msg.setSourceEntity(174U);
    msg.setDestination(60304U);
    msg.setDestinationEntity(20U);
    msg.req_id = 14860U;
    msg.type = 40U;
    msg.status = 108U;
    msg.info.assign("GBXMBXVXLGRQRJZSNBCZFGVVVDKAXWELYVWZYCKRNMRZZEOEQQRJPSTTDETHHQNWZIDKJMOXPGRKZJBZUFZRXYAYKLLF");
    msg.range = 0.8578359669734924;

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
    msg.setTimeStamp(0.269298048286005);
    msg.setSource(32519U);
    msg.setSourceEntity(87U);
    msg.setDestination(40670U);
    msg.setDestinationEntity(146U);
    msg.req_id = 21805U;
    msg.type = 196U;
    msg.status = 5U;
    msg.info.assign("SGEYNOKLNBUKRZQYQYKAYPZVECVSNBDXRWBOIFIKZPBLQWZT");
    msg.range = 0.16071540223068181;

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
    msg.setTimeStamp(0.01679269318706844);
    msg.setSource(47244U);
    msg.setSourceEntity(166U);
    msg.setDestination(6298U);
    msg.setDestinationEntity(183U);
    msg.system.assign("IYGPFVVPQTUQNAAGBCUHZRFJOCDQKRFXLBQHRDGIKJLCPLUBNTNOXJJTLIMFXTYHIZWAQTVZUAINIJMFGVWZCBSECOPKXAJZJRFEQUPYXKLKOZDFSLIAOBPCJNFIEZCUMQTGXYVNREPLMBAHWVDXWZFPWEGXMBLAWBJVCFMMLVVOUKNNRGDPNIDDSBYUODWSTZNXPSKRGQUCH");
    msg.op = 231U;

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
    msg.setTimeStamp(0.45994660115797203);
    msg.setSource(24033U);
    msg.setSourceEntity(65U);
    msg.setDestination(63931U);
    msg.setDestinationEntity(97U);
    msg.system.assign("OHCLHXOUWFGXHOMWRMGYTFBULCKKPPCXRINWCOEZBEYWLRCGNDYAYFBNWUJTSBVUKFZQEPPLYEDNTAUZEJQRCDFLVTRQIUNAAVYRJMMIIPCHPHCGRBJFDAQVVOJEECKMLHQKAZJLUQCTBXADSANISTOZSMJKYBIRIUZSXDHTSRLWIVSSUVUFIVJMHYLYQWXGFSJGWZXOOGMTOWIHBPHGNMWYEDBGJXXNKOSPZLZDVFQKBPMPQDNRZN");
    msg.op = 83U;

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
    msg.setTimeStamp(0.14626488837222773);
    msg.setSource(32602U);
    msg.setSourceEntity(123U);
    msg.setDestination(1570U);
    msg.setDestinationEntity(196U);
    msg.system.assign("XVKKHBIDKLDBCFZNUDMQXCGQTUJAWAHWTHNMVRFKPDNWQSALDHSTARTMVIHWVPSZHFWZLSYSLOFWVKZSLIRHOGWCEOMOHJLJTDPFJXIMFGPUPQFXBAVVWROTCAKTOVMPNAIEKDZNTITZBCGOAZOBKRQUIRYMJZEXUZBXR");
    msg.op = 9U;

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
    msg.setTimeStamp(0.9212560750812827);
    msg.setSource(31903U);
    msg.setSourceEntity(246U);
    msg.setDestination(20730U);
    msg.setDestinationEntity(154U);
    msg.value = 13339;

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
    msg.setTimeStamp(0.26801843752251453);
    msg.setSource(7609U);
    msg.setSourceEntity(86U);
    msg.setDestination(21047U);
    msg.setDestinationEntity(48U);
    msg.value = 11368;

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
    msg.setTimeStamp(0.4012757585343997);
    msg.setSource(24000U);
    msg.setSourceEntity(108U);
    msg.setDestination(46863U);
    msg.setDestinationEntity(148U);
    msg.value = 5262;

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
    msg.setTimeStamp(0.22879732015188936);
    msg.setSource(42157U);
    msg.setSourceEntity(234U);
    msg.setDestination(58030U);
    msg.setDestinationEntity(225U);
    msg.value = 0.721573490069608;

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
    msg.setTimeStamp(0.9125504419466741);
    msg.setSource(4587U);
    msg.setSourceEntity(227U);
    msg.setDestination(45966U);
    msg.setDestinationEntity(110U);
    msg.value = 0.850158276530546;

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
    msg.setTimeStamp(0.8254510287886898);
    msg.setSource(16278U);
    msg.setSourceEntity(250U);
    msg.setDestination(18300U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8268684985620707;

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
    msg.setTimeStamp(0.2968044654600931);
    msg.setSource(64708U);
    msg.setSourceEntity(230U);
    msg.setDestination(13694U);
    msg.setDestinationEntity(230U);
    msg.value = 0.018642870780174126;

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
    msg.setTimeStamp(0.7817320371203472);
    msg.setSource(14843U);
    msg.setSourceEntity(136U);
    msg.setDestination(4273U);
    msg.setDestinationEntity(108U);
    msg.value = 0.3427542857100869;

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
    msg.setTimeStamp(0.3709661281120813);
    msg.setSource(37849U);
    msg.setSourceEntity(119U);
    msg.setDestination(56476U);
    msg.setDestinationEntity(213U);
    msg.value = 0.8784433843982937;

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
    msg.setTimeStamp(0.35361021671285453);
    msg.setSource(7983U);
    msg.setSourceEntity(230U);
    msg.setDestination(4553U);
    msg.setDestinationEntity(117U);
    msg.validity = 52548U;
    msg.type = 211U;
    msg.utc_year = 25103U;
    msg.utc_month = 181U;
    msg.utc_day = 40U;
    msg.utc_time = 0.5180461363252753;
    msg.lat = 0.35676034139228185;
    msg.lon = 0.6171052945425012;
    msg.height = 0.7159291033690804;
    msg.satellites = 229U;
    msg.cog = 0.4140836310026438;
    msg.sog = 0.8918047597751757;
    msg.hdop = 0.2643149819202555;
    msg.vdop = 0.5760373636561957;
    msg.hacc = 0.8248029550377327;
    msg.vacc = 0.25213515951001597;

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
    msg.setTimeStamp(0.39093175541419034);
    msg.setSource(53909U);
    msg.setSourceEntity(52U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(142U);
    msg.validity = 63607U;
    msg.type = 19U;
    msg.utc_year = 45193U;
    msg.utc_month = 235U;
    msg.utc_day = 239U;
    msg.utc_time = 0.014699872975925121;
    msg.lat = 0.7216392172038678;
    msg.lon = 0.29588262051050573;
    msg.height = 0.9515248297161186;
    msg.satellites = 100U;
    msg.cog = 0.683066116525132;
    msg.sog = 0.5565571569641864;
    msg.hdop = 0.7962099760196929;
    msg.vdop = 0.668169199512505;
    msg.hacc = 0.9869577669227542;
    msg.vacc = 0.16994642915424618;

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
    msg.setTimeStamp(0.16117061322640802);
    msg.setSource(45114U);
    msg.setSourceEntity(141U);
    msg.setDestination(26761U);
    msg.setDestinationEntity(208U);
    msg.validity = 62303U;
    msg.type = 53U;
    msg.utc_year = 7653U;
    msg.utc_month = 43U;
    msg.utc_day = 227U;
    msg.utc_time = 0.8945829087005664;
    msg.lat = 0.3326685901579164;
    msg.lon = 0.961802745801729;
    msg.height = 0.5778226540154716;
    msg.satellites = 160U;
    msg.cog = 0.244697546970851;
    msg.sog = 0.06351397067384423;
    msg.hdop = 0.30192952217469493;
    msg.vdop = 0.21222561276134944;
    msg.hacc = 0.9392077515744972;
    msg.vacc = 0.9785512130015923;

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
    msg.setTimeStamp(0.16464053104598952);
    msg.setSource(54961U);
    msg.setSourceEntity(112U);
    msg.setDestination(18293U);
    msg.setDestinationEntity(127U);
    msg.time = 0.0006336887048272732;
    msg.phi = 0.03202036084505833;
    msg.theta = 0.6363963788693787;
    msg.psi = 0.10095833510855967;
    msg.psi_magnetic = 0.5770744268383433;

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
    msg.setTimeStamp(0.16697717838719817);
    msg.setSource(19015U);
    msg.setSourceEntity(55U);
    msg.setDestination(23848U);
    msg.setDestinationEntity(144U);
    msg.time = 0.27618040504152164;
    msg.phi = 0.5253558072608001;
    msg.theta = 0.3326601075804292;
    msg.psi = 0.7962913230901831;
    msg.psi_magnetic = 0.34870552001593036;

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
    msg.setTimeStamp(0.4049571828236106);
    msg.setSource(60554U);
    msg.setSourceEntity(140U);
    msg.setDestination(52373U);
    msg.setDestinationEntity(227U);
    msg.time = 0.49801228975561807;
    msg.phi = 0.05594714434244408;
    msg.theta = 0.5701051343357042;
    msg.psi = 0.3332559245860257;
    msg.psi_magnetic = 0.9345281372173976;

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
    msg.setTimeStamp(0.638341123485928);
    msg.setSource(16548U);
    msg.setSourceEntity(37U);
    msg.setDestination(20463U);
    msg.setDestinationEntity(139U);
    msg.time = 0.15209462948596597;
    msg.x = 0.3772663126779976;
    msg.y = 0.240130392424024;
    msg.z = 0.949976411428065;
    msg.timestep = 0.022842785291715573;

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
    msg.setTimeStamp(0.09376898366916897);
    msg.setSource(55768U);
    msg.setSourceEntity(94U);
    msg.setDestination(49146U);
    msg.setDestinationEntity(179U);
    msg.time = 0.251669207328011;
    msg.x = 0.3656077182310101;
    msg.y = 0.5804574933918273;
    msg.z = 0.5527823106694998;
    msg.timestep = 0.5314331841244503;

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
    msg.setTimeStamp(0.21258791737637628);
    msg.setSource(58712U);
    msg.setSourceEntity(205U);
    msg.setDestination(19066U);
    msg.setDestinationEntity(83U);
    msg.time = 0.15864010496545966;
    msg.x = 0.3666001987069436;
    msg.y = 0.06465027265611711;
    msg.z = 0.5794772901380931;
    msg.timestep = 0.040608909358448186;

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
    msg.setTimeStamp(0.03562853206304484);
    msg.setSource(58705U);
    msg.setSourceEntity(144U);
    msg.setDestination(21608U);
    msg.setDestinationEntity(20U);
    msg.time = 0.8449418980250941;
    msg.x = 0.5506498913032036;
    msg.y = 0.07017191825583724;
    msg.z = 0.3079808766878339;

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
    msg.setTimeStamp(0.1250793460243601);
    msg.setSource(12087U);
    msg.setSourceEntity(118U);
    msg.setDestination(59350U);
    msg.setDestinationEntity(250U);
    msg.time = 0.3146653548505586;
    msg.x = 0.03318341769361488;
    msg.y = 0.7616322453916813;
    msg.z = 0.7995757861080048;

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
    msg.setTimeStamp(0.9739955782459309);
    msg.setSource(42408U);
    msg.setSourceEntity(58U);
    msg.setDestination(32530U);
    msg.setDestinationEntity(249U);
    msg.time = 0.2444802527653135;
    msg.x = 0.7984873078373701;
    msg.y = 0.18061271939840084;
    msg.z = 0.9410772300610121;

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
    msg.setTimeStamp(0.08413346174011116);
    msg.setSource(35574U);
    msg.setSourceEntity(157U);
    msg.setDestination(65061U);
    msg.setDestinationEntity(170U);
    msg.time = 0.9046513334388246;
    msg.x = 0.28631073389870754;
    msg.y = 0.69295177135699;
    msg.z = 0.7403936252276198;

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
    msg.setTimeStamp(0.08276594850149233);
    msg.setSource(21656U);
    msg.setSourceEntity(11U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(86U);
    msg.time = 0.131320840737847;
    msg.x = 0.08226627850881241;
    msg.y = 0.9184172077573213;
    msg.z = 0.29952647966016865;

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
    msg.setTimeStamp(0.7124000687390755);
    msg.setSource(42434U);
    msg.setSourceEntity(194U);
    msg.setDestination(21742U);
    msg.setDestinationEntity(48U);
    msg.time = 0.5826289069709479;
    msg.x = 0.004455026458385247;
    msg.y = 0.8976701221816175;
    msg.z = 0.166772195211764;

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
    msg.setTimeStamp(0.3020316887194122);
    msg.setSource(30152U);
    msg.setSourceEntity(146U);
    msg.setDestination(10856U);
    msg.setDestinationEntity(33U);
    msg.time = 0.018521503056642352;
    msg.x = 0.29406392443159013;
    msg.y = 0.3672235392376414;
    msg.z = 0.8324428855779504;

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
    msg.setTimeStamp(0.24310942149732762);
    msg.setSource(25093U);
    msg.setSourceEntity(16U);
    msg.setDestination(58714U);
    msg.setDestinationEntity(203U);
    msg.time = 0.12849194278460474;
    msg.x = 0.4013738986864537;
    msg.y = 0.23054729031170929;
    msg.z = 0.02795676363703159;

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
    msg.setTimeStamp(0.009259085299042069);
    msg.setSource(28310U);
    msg.setSourceEntity(148U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(225U);
    msg.time = 0.7163651786584571;
    msg.x = 0.09689138599432823;
    msg.y = 0.8017229276026132;
    msg.z = 0.2580819983901075;

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
    msg.setTimeStamp(0.42301767326284867);
    msg.setSource(50137U);
    msg.setSourceEntity(20U);
    msg.setDestination(56845U);
    msg.setDestinationEntity(198U);
    msg.validity = 207U;
    msg.x = 0.1818622389215505;
    msg.y = 0.937400902765792;
    msg.z = 0.09693925355386845;

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
    msg.setTimeStamp(0.7264532413941124);
    msg.setSource(25264U);
    msg.setSourceEntity(113U);
    msg.setDestination(49728U);
    msg.setDestinationEntity(86U);
    msg.validity = 150U;
    msg.x = 0.7978447339547107;
    msg.y = 0.5975141774339294;
    msg.z = 0.24869758191498703;

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
    msg.setTimeStamp(0.8760455394892916);
    msg.setSource(39205U);
    msg.setSourceEntity(240U);
    msg.setDestination(38221U);
    msg.setDestinationEntity(103U);
    msg.validity = 41U;
    msg.x = 0.4165141632636732;
    msg.y = 0.8162332931450564;
    msg.z = 0.18336687632977133;

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
    msg.setTimeStamp(0.4762845660152595);
    msg.setSource(15327U);
    msg.setSourceEntity(216U);
    msg.setDestination(24140U);
    msg.setDestinationEntity(199U);
    msg.validity = 176U;
    msg.x = 0.9944091522254654;
    msg.y = 0.11554098549824077;
    msg.z = 0.7501709134938299;

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
    msg.setTimeStamp(0.2802789261482517);
    msg.setSource(50417U);
    msg.setSourceEntity(81U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(15U);
    msg.validity = 180U;
    msg.x = 0.9856838141102666;
    msg.y = 0.8320087571702168;
    msg.z = 0.2842148966577773;

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
    msg.setTimeStamp(0.9239295220014521);
    msg.setSource(11106U);
    msg.setSourceEntity(213U);
    msg.setDestination(51471U);
    msg.setDestinationEntity(108U);
    msg.validity = 110U;
    msg.x = 0.44153184846578075;
    msg.y = 0.8592626950317895;
    msg.z = 0.23612634483805517;

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
    msg.setTimeStamp(0.36559428331830046);
    msg.setSource(22297U);
    msg.setSourceEntity(107U);
    msg.setDestination(43526U);
    msg.setDestinationEntity(175U);
    msg.time = 0.5161663092598592;
    msg.x = 0.35063032182292875;
    msg.y = 0.942380763196858;
    msg.z = 0.8137462210642054;

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
    msg.setTimeStamp(0.03233659469891337);
    msg.setSource(4564U);
    msg.setSourceEntity(75U);
    msg.setDestination(50908U);
    msg.setDestinationEntity(179U);
    msg.time = 0.5074924915897121;
    msg.x = 0.8833439833235817;
    msg.y = 0.016010505735616576;
    msg.z = 0.0890754984819423;

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
    msg.setTimeStamp(0.18719266731794892);
    msg.setSource(50797U);
    msg.setSourceEntity(153U);
    msg.setDestination(23208U);
    msg.setDestinationEntity(114U);
    msg.time = 0.7289089742024653;
    msg.x = 0.7427254127169148;
    msg.y = 0.5379603256198354;
    msg.z = 0.24562135649370476;

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
    msg.setTimeStamp(0.01883130123962551);
    msg.setSource(23900U);
    msg.setSourceEntity(205U);
    msg.setDestination(14321U);
    msg.setDestinationEntity(224U);
    msg.validity = 118U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9511993601959111;
    tmp_msg_0.y = 0.6217445089890941;
    tmp_msg_0.z = 0.9585568080174486;
    tmp_msg_0.phi = 0.5676170423614992;
    tmp_msg_0.theta = 0.3794115221562736;
    tmp_msg_0.psi = 0.9028755956095244;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5990927128521452;
    tmp_msg_1.beam_height = 0.9293179297915108;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.13459212583801894;

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
    msg.setTimeStamp(0.6646979227253186);
    msg.setSource(8588U);
    msg.setSourceEntity(77U);
    msg.setDestination(31773U);
    msg.setDestinationEntity(156U);
    msg.validity = 5U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.718703368459141;
    tmp_msg_0.y = 0.19825529184825585;
    tmp_msg_0.z = 0.3648533691986462;
    tmp_msg_0.phi = 0.5030823453754665;
    tmp_msg_0.theta = 0.2413445461861693;
    tmp_msg_0.psi = 0.8441845772271995;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5662267793375945;

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
    msg.setTimeStamp(0.9689563370655337);
    msg.setSource(51524U);
    msg.setSourceEntity(95U);
    msg.setDestination(61157U);
    msg.setDestinationEntity(226U);
    msg.validity = 65U;
    msg.value = 0.3699160334944439;

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
    msg.setTimeStamp(0.09171608064589254);
    msg.setSource(53618U);
    msg.setSourceEntity(237U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(194U);
    msg.value = 0.5372450108869111;

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
    msg.setTimeStamp(0.983941929749292);
    msg.setSource(61453U);
    msg.setSourceEntity(96U);
    msg.setDestination(31251U);
    msg.setDestinationEntity(126U);
    msg.value = 0.6751038952235124;

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
    msg.setTimeStamp(0.11050871918583038);
    msg.setSource(62747U);
    msg.setSourceEntity(31U);
    msg.setDestination(49666U);
    msg.setDestinationEntity(84U);
    msg.value = 0.472403717188679;

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
    msg.setTimeStamp(0.3046567939019458);
    msg.setSource(33499U);
    msg.setSourceEntity(113U);
    msg.setDestination(43767U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8039188172040594;

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
    msg.setTimeStamp(0.869414498983695);
    msg.setSource(18976U);
    msg.setSourceEntity(238U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0701441058700697;

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
    msg.setTimeStamp(0.18111787238861277);
    msg.setSource(11903U);
    msg.setSourceEntity(225U);
    msg.setDestination(15146U);
    msg.setDestinationEntity(61U);
    msg.value = 0.26328896547468394;

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
    msg.setTimeStamp(0.20660194057388037);
    msg.setSource(21573U);
    msg.setSourceEntity(128U);
    msg.setDestination(39274U);
    msg.setDestinationEntity(226U);
    msg.value = 0.0016617997572057064;

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
    msg.setTimeStamp(0.8226352083139472);
    msg.setSource(64691U);
    msg.setSourceEntity(214U);
    msg.setDestination(7805U);
    msg.setDestinationEntity(80U);
    msg.value = 0.08667777541643362;

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
    msg.setTimeStamp(0.5833871674655828);
    msg.setSource(65436U);
    msg.setSourceEntity(104U);
    msg.setDestination(48420U);
    msg.setDestinationEntity(118U);
    msg.value = 0.7760781062790522;

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
    msg.setTimeStamp(0.22594072069246163);
    msg.setSource(14436U);
    msg.setSourceEntity(72U);
    msg.setDestination(8710U);
    msg.setDestinationEntity(196U);
    msg.value = 0.8856113922629876;

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
    msg.setTimeStamp(0.19389173243452507);
    msg.setSource(44370U);
    msg.setSourceEntity(165U);
    msg.setDestination(32182U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7146979797275133;

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
    msg.setTimeStamp(0.5493082268719184);
    msg.setSource(25557U);
    msg.setSourceEntity(44U);
    msg.setDestination(25217U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7608761506315393;

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
    msg.setTimeStamp(0.2066213235164257);
    msg.setSource(14823U);
    msg.setSourceEntity(168U);
    msg.setDestination(9761U);
    msg.setDestinationEntity(148U);
    msg.value = 0.759029786125549;

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
    msg.setTimeStamp(0.1981312268945894);
    msg.setSource(23912U);
    msg.setSourceEntity(198U);
    msg.setDestination(46568U);
    msg.setDestinationEntity(42U);
    msg.value = 0.26214796920316186;

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
    msg.setTimeStamp(0.4640448820378219);
    msg.setSource(11184U);
    msg.setSourceEntity(106U);
    msg.setDestination(51670U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0958273889694653;

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
    msg.setTimeStamp(0.07186877718355222);
    msg.setSource(46402U);
    msg.setSourceEntity(80U);
    msg.setDestination(49882U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6092374823036325;

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
    msg.setTimeStamp(0.2596384189093691);
    msg.setSource(23535U);
    msg.setSourceEntity(25U);
    msg.setDestination(40024U);
    msg.setDestinationEntity(96U);
    msg.value = 0.15188898423581387;

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
    msg.setTimeStamp(0.5914678439363521);
    msg.setSource(42972U);
    msg.setSourceEntity(26U);
    msg.setDestination(14731U);
    msg.setDestinationEntity(100U);
    msg.value = 0.5248979495281022;

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
    msg.setTimeStamp(0.6625158803038033);
    msg.setSource(15303U);
    msg.setSourceEntity(140U);
    msg.setDestination(41805U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5026730561944739;

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
    msg.setTimeStamp(0.1220065681292486);
    msg.setSource(7642U);
    msg.setSourceEntity(198U);
    msg.setDestination(30270U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8564911127257686;

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
    msg.setTimeStamp(0.9317190977510402);
    msg.setSource(48914U);
    msg.setSourceEntity(168U);
    msg.setDestination(12303U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8096782523316778;

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
    msg.setTimeStamp(0.7490638740654857);
    msg.setSource(56810U);
    msg.setSourceEntity(62U);
    msg.setDestination(45549U);
    msg.setDestinationEntity(140U);
    msg.value = 0.224622602915852;

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
    msg.setTimeStamp(0.2546707693183293);
    msg.setSource(45370U);
    msg.setSourceEntity(168U);
    msg.setDestination(52959U);
    msg.setDestinationEntity(29U);
    msg.value = 0.2593517484348363;

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
    msg.setTimeStamp(0.1938755318539096);
    msg.setSource(49854U);
    msg.setSourceEntity(156U);
    msg.setDestination(1445U);
    msg.setDestinationEntity(35U);
    msg.value = 0.11625144265209786;

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
    msg.setTimeStamp(0.07740606521450555);
    msg.setSource(58314U);
    msg.setSourceEntity(187U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.8398099379308993;
    msg.speed = 0.044679284209340864;
    msg.turbulence = 0.4707547430039615;

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
    msg.setTimeStamp(0.5435025120910055);
    msg.setSource(18215U);
    msg.setSourceEntity(106U);
    msg.setDestination(44826U);
    msg.setDestinationEntity(188U);
    msg.direction = 0.2839664536606309;
    msg.speed = 0.2803411257012056;
    msg.turbulence = 0.6279515664998933;

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
    msg.setTimeStamp(0.24505672606345197);
    msg.setSource(10772U);
    msg.setSourceEntity(25U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(87U);
    msg.direction = 0.7899726470294487;
    msg.speed = 0.554530445470151;
    msg.turbulence = 0.9581331144308453;

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
    msg.setTimeStamp(0.9551579974392244);
    msg.setSource(36447U);
    msg.setSourceEntity(178U);
    msg.setDestination(64377U);
    msg.setDestinationEntity(211U);
    msg.value = 0.45066694675737595;

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
    msg.setTimeStamp(0.15908122262308322);
    msg.setSource(42940U);
    msg.setSourceEntity(117U);
    msg.setDestination(8199U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6189744793947698;

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
    msg.setTimeStamp(0.3364802735852752);
    msg.setSource(45632U);
    msg.setSourceEntity(21U);
    msg.setDestination(42349U);
    msg.setDestinationEntity(173U);
    msg.value = 0.21947722925732238;

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
    msg.setTimeStamp(0.48202963551462785);
    msg.setSource(37106U);
    msg.setSourceEntity(238U);
    msg.setDestination(6168U);
    msg.setDestinationEntity(14U);
    msg.value.assign("VWSHFCQTEVBFMUUDNKXQWIYCXOURRZBXSGYAICHCLXSPHGFNTTDPUKGDEWYBQZDJZOMTMARFWJDCRAWMNSNEVLVVILHKZEFUPA");

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
    msg.setTimeStamp(0.44166261308216803);
    msg.setSource(34199U);
    msg.setSourceEntity(19U);
    msg.setDestination(53007U);
    msg.setDestinationEntity(90U);
    msg.value.assign("KTTVZJPWTFREYUTJGFQOYYEBCNQSFLWIMXVKNPTGYEPVZNPHFZKWHZAOQXHBVHDTOXDOEMAWNCSERDJDABRDBSQGMBDXCPXAEDUIUOHZYWFMVQRWACLLZXMZHKNKCKBVIELNXWOGFESPRFXCUVLNEGWJZKMDHPMZABDOJPULROVLHPYSRIJTRQHP");

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
    msg.setTimeStamp(0.2329961956831298);
    msg.setSource(35241U);
    msg.setSourceEntity(254U);
    msg.setDestination(64988U);
    msg.setDestinationEntity(141U);
    msg.value.assign("BQQRTGMRCNUQIYWDGWABTBQHTPTDWLUGKHRTSUWJVNVZDQPAZFOPXCEOPBEOYTLDDDVAPSXAYYNZUHKDEQEPOLESTCOBFPKJINLXMCFJGDQLOKQTUMENEPRVIXHICYVOSXMNWIPPNMISUYFLDMRUCTSH");

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
    msg.setTimeStamp(0.14166405485955558);
    msg.setSource(59659U);
    msg.setSourceEntity(226U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(147U);
    const signed char tmp_msg_0[] = {-10, 50, 73, 28, 63, -18, -34, -92, -10, -2, 87, 108, 0, -5, 85, 9, 9};
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
    msg.setTimeStamp(0.008590366161277063);
    msg.setSource(38493U);
    msg.setSourceEntity(226U);
    msg.setDestination(35089U);
    msg.setDestinationEntity(12U);
    const signed char tmp_msg_0[] = {-82, -86, -78, 34, -13, 61, 73, -76, 46, -91, 88, 108, 0, -61, 101, 34, -122, -21, 104, -17, -106, -93, -18, 50, -53, 81, 114, -49, 66, 43, 42, 119, -74, -93, 40, 115, 60, -69, 46, 37, -104, 60, -25, 5, -53, -42, -80, 126, -59, -51, 105, -82, -35, 64, 112, 39, 19, 55, 94, 109, -107, 41, -91, 42, 72, 81, 59, 33, 53, -13, -80, 22, 49, -15, 67, 49, -53, -17, 18, -75, -93, 65, -74, 55, 117, 8, -115, -110, -60, -50, 26, -99, 38, -86, 113, 18, -11, 16, 2, 110, -112, -125, -8, 92, -32, 77, -11, -25, -40, -41, 103, 84, -124, 20, 61, -106};
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
    msg.setTimeStamp(0.9490034115978883);
    msg.setSource(59360U);
    msg.setSourceEntity(48U);
    msg.setDestination(54703U);
    msg.setDestinationEntity(81U);
    const signed char tmp_msg_0[] = {83, -18, -70, -85, 3, -73, -71, 58, 94, 77, -50, -24, 74, 12, 4, 85, 111, -50, -84, 63, 52, -55, -71, -28, -119, -43, 59, -60, 18, 39, 32, 49, -27, 66, -108, -68, -108, -114, -100, 27, 29, -99, -124, -105, -89, 23};
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
    msg.setTimeStamp(0.811580754377024);
    msg.setSource(19287U);
    msg.setSourceEntity(172U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(58U);
    msg.value = 0.2602525355607179;

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
    msg.setTimeStamp(0.7109993403086743);
    msg.setSource(31201U);
    msg.setSourceEntity(35U);
    msg.setDestination(11297U);
    msg.setDestinationEntity(118U);
    msg.value = 0.22748058293484819;

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
    msg.setTimeStamp(0.18078066374884993);
    msg.setSource(36748U);
    msg.setSourceEntity(221U);
    msg.setDestination(52474U);
    msg.setDestinationEntity(172U);
    msg.value = 0.744807727949783;

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
    msg.setTimeStamp(0.8408391841640077);
    msg.setSource(16859U);
    msg.setSourceEntity(74U);
    msg.setDestination(39023U);
    msg.setDestinationEntity(166U);
    msg.type = 199U;
    msg.frequency = 3008898783U;
    msg.min_range = 21444U;
    msg.max_range = 859U;
    msg.bits_per_point = 59U;
    msg.scale_factor = 0.835025440614882;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.38076792614229305;
    tmp_msg_0.beam_height = 0.8013815345717233;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-6, 21, 14, 63, -94, 81, -117, 66, -97, -57, 96, 105, -95, 32, 36, -112, -69, -40, -101, -49, -94, -14, -79, -1, 7, 99, -50, 75, 41, -79, -5, 38, 98, 125, 122, 24, -128, -38, -8, -58, 96, -123, -124, 83, -62, -35, 17, 26, 58, -52, -74, -71, 29, 67, 53, 58, 59, 36, 11, -108, -16, 4, 48, 47, 32, 106, 124, 68, -87, 73, 59, -128, 92, -44, 3, -124, -102, 114, 87, -95, -32, -69, -52, -81, -5, 57, 91, -36, -46, -29, 40, 34, -64, -9, -125, -38, 34, -15, 15, 24, -82, -61, 82, 78, -2, -118, -53, -125, 62, -13, -111, -33, -15, 6, -57, 40, -125, 120, 92, -79, -67, 81, 39};
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
    msg.setTimeStamp(0.595030737816581);
    msg.setSource(18497U);
    msg.setSourceEntity(152U);
    msg.setDestination(51399U);
    msg.setDestinationEntity(224U);
    msg.type = 102U;
    msg.frequency = 853263328U;
    msg.min_range = 53758U;
    msg.max_range = 33184U;
    msg.bits_per_point = 102U;
    msg.scale_factor = 0.1355129910760473;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8219318211998776;
    tmp_msg_0.beam_height = 0.13440445174498128;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {17, 14, -17, 65, -12, -121, 110, 117, -92, 35, 101, -97, -128, -125, 33, 104, 76, 1, -48, 48, -117, -17, 86, 121, -3, -12, -93, -72, 92, -117, -16, 13, 38, -46, 52, -22, -116, 28, 6, 28, 31, 0, -67, -121, 106, -7, 78, 76, -3, 65, 115, -10, -116, -9, 111, 63, 25, -45, -51, -113, 90, 102, -19, -27, -78, 110, -111, -127, -95, -13, 108, 7, -79, -33};
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
    msg.setTimeStamp(0.8974284480446534);
    msg.setSource(6882U);
    msg.setSourceEntity(63U);
    msg.setDestination(51618U);
    msg.setDestinationEntity(223U);
    msg.type = 63U;
    msg.frequency = 3893591617U;
    msg.min_range = 14149U;
    msg.max_range = 7130U;
    msg.bits_per_point = 107U;
    msg.scale_factor = 0.49447311929294546;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8815730226022785;
    tmp_msg_0.beam_height = 0.0735457503471344;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-77, 90, -19, -120, -117, -84, 58, 126, -8, -75, -111, 3, -84, -114, -128, -20, 89, -62, 2, -108, 26, -105, 111, -60, -39, 125, 66, -121, -48, -28, 59, -45, -97, 37, -116, 39, 95, -84, 17, 90, 120, -59, -50, -122, 52, -32, -45, -108, -3, -84, -7, -45, -34, -36, 97, -26, 73, 104, -101, -121, 90, 46, -82, 1, -120, 113, 91, -34, 5, -77, 111, -35, -77, -60, 26, 81, 106, -101, 87, -81, 54, -49, 38, 16, -10, 20, 42, 73, -108, -87, -124, -95, -50, 22, 68, 0, 25, 63, 96, -14, -115, 24, -94, 0, -35, -16, -111, -51, -9, 41, 75, -49, 63, -56, -38, -79, -69, 3, -107, -85, -26, -80, -117, 104, -13, 7, -123, -38, 122, -110, 96, 55, -21, -10, 88, -121, 111, -115, -21, 123, -86, -22, -123, -11, -91, -121, 44, -90, -52, 36, 72, -34, 57, -113, 17, -87, -13, 34, -22, 12, 126, 15, -107, 40, -46, 33, -127, 109, -85, 12, 118, 108, -101, -125, 39, 109, 95, 56, 35, 15, 28, 61, -26, -118, 58, 93, 101, -58, -105, 13, 83, 34, -125, -110, -114, -73, 53, 60, -108, 99, 64, 4, 110, 114, -113, -73, -96, -33, 0, -81, 125, 58, 67, 5, 89, 125, 88, 7, 65, 89, -91, 73, 39, 85, 70, -81, 104, 70, 116, -100, 70, -115};
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
    msg.setTimeStamp(0.31308956182425185);
    msg.setSource(19783U);
    msg.setSourceEntity(98U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.8397377819941565);
    msg.setSource(29484U);
    msg.setSourceEntity(239U);
    msg.setDestination(20675U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.6089185644814369);
    msg.setSource(54551U);
    msg.setSourceEntity(67U);
    msg.setDestination(41973U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.0045903783581088264);
    msg.setSource(12745U);
    msg.setSourceEntity(216U);
    msg.setDestination(54595U);
    msg.setDestinationEntity(73U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.5090688506753598);
    msg.setSource(35124U);
    msg.setSourceEntity(225U);
    msg.setDestination(36529U);
    msg.setDestinationEntity(233U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.8009022087724886);
    msg.setSource(4075U);
    msg.setSourceEntity(100U);
    msg.setDestination(22302U);
    msg.setDestinationEntity(72U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.40732334365551337);
    msg.setSource(7451U);
    msg.setSourceEntity(26U);
    msg.setDestination(27391U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5398763938440218;
    msg.confidence = 0.7345425077050692;
    msg.opmodes.assign("KGUENVVNMQSDNMNYXRNHIILOQKQYBCEDYLEETLWTJRBBRBUGTHTUUGNOEEJFXSYCCXDTSCIUBNGZVQXIHDTHXRDSZKDZOPGHZTTGUAAHMLMZOCRYQCQWDVVWKTXCMFLVKPAZGLWMOGWWORTJVLZBAGFOYQZJOKJHYRPVDISCEZIWPSCHHUNLJFAXXMFRCPNXZQJFWIRMSUSDQAPEKFPVMHYLABSWJAUROXMIQAFFLJKJN");

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
    msg.setTimeStamp(0.7516681302154918);
    msg.setSource(20487U);
    msg.setSourceEntity(12U);
    msg.setDestination(53781U);
    msg.setDestinationEntity(167U);
    msg.value = 0.18377539276676302;
    msg.confidence = 0.7599272151960591;
    msg.opmodes.assign("VZAANBWHHKJLBWTWAXZINOGMAONWJHNUMYSRFSVOLIBCQNHKZIWMPCGRAGVZQOJKBQSUJEXGHCRFUTURIXKRXLAUAYQWWTDKKLHJGPUCTXVFDBUBSGZLMIHKBXDYEXUOGMQFISAVKLPHCRXACMYYPNZEQGUOPIUTAVYYSOISLMRCVZPVOSCQIHJPGQRBELVDJSLTYPJLXTQNMVDBDDEWRFQMJYOESZ");

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
    msg.setTimeStamp(0.09795898582508611);
    msg.setSource(16567U);
    msg.setSourceEntity(58U);
    msg.setDestination(54024U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9575951521566595;
    msg.confidence = 0.12161826669784304;
    msg.opmodes.assign("GQNNASACYSZWKOWOGPBOTBDNNGQFIWDECATHPAFOBHZROVDXLGEHJOJGHIGNMESYQPVULBQWTILCWRXZZCHCSZMEWDYZDNBTURJPMIIKAIGFZHHZMMNPJKSXRZGYHEMBFURTMWGDKLXNXYKRPPBXSHHXZPCJTQVOREOTFGUKYXJIFLCL");

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
    msg.setTimeStamp(0.3228766667490187);
    msg.setSource(12909U);
    msg.setSourceEntity(121U);
    msg.setDestination(62241U);
    msg.setDestinationEntity(240U);
    msg.itow = 3931610721U;
    msg.lat = 0.5861096046065882;
    msg.lon = 0.17213308870390487;
    msg.height_ell = 0.20915813090336688;
    msg.height_sea = 0.21819822357489227;
    msg.hacc = 0.7420980499679024;
    msg.vacc = 0.3594610211530964;
    msg.vel_n = 0.08555945488721228;
    msg.vel_e = 0.941588264164525;
    msg.vel_d = 0.39915822754441255;
    msg.speed = 0.09834708723282604;
    msg.gspeed = 0.05610748383658137;
    msg.heading = 0.5133363907960451;
    msg.sacc = 0.016592057125850768;
    msg.cacc = 0.6607990723586449;

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
    msg.setTimeStamp(0.6464730935669796);
    msg.setSource(30051U);
    msg.setSourceEntity(197U);
    msg.setDestination(42113U);
    msg.setDestinationEntity(225U);
    msg.itow = 846306562U;
    msg.lat = 0.6807720939421048;
    msg.lon = 0.34096151169887357;
    msg.height_ell = 0.4455138218127678;
    msg.height_sea = 0.6984738640938202;
    msg.hacc = 0.3748811254746782;
    msg.vacc = 0.7070533193000834;
    msg.vel_n = 0.3221072134251308;
    msg.vel_e = 0.7840880192509223;
    msg.vel_d = 0.7122940816877665;
    msg.speed = 0.5894883599707953;
    msg.gspeed = 0.415109642636586;
    msg.heading = 0.16271865609233627;
    msg.sacc = 0.8396126169515061;
    msg.cacc = 0.15347147144571127;

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
    msg.setTimeStamp(0.9666436000754836);
    msg.setSource(54205U);
    msg.setSourceEntity(88U);
    msg.setDestination(42079U);
    msg.setDestinationEntity(66U);
    msg.itow = 829289168U;
    msg.lat = 0.5265016865035972;
    msg.lon = 0.9732598066347082;
    msg.height_ell = 0.40000944251744497;
    msg.height_sea = 0.8418782476309472;
    msg.hacc = 0.07361002776239056;
    msg.vacc = 0.3203670672308273;
    msg.vel_n = 0.08296172659938938;
    msg.vel_e = 0.9994159523202487;
    msg.vel_d = 0.08516800189242213;
    msg.speed = 0.006242713046436865;
    msg.gspeed = 0.5091036939007071;
    msg.heading = 0.07692768785119741;
    msg.sacc = 0.8299113296709547;
    msg.cacc = 0.05263356715623735;

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
    msg.setTimeStamp(0.6470439270699567);
    msg.setSource(58082U);
    msg.setSourceEntity(227U);
    msg.setDestination(2717U);
    msg.setDestinationEntity(23U);
    msg.id = 74U;
    msg.value = 0.9240109212222329;

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
    msg.setTimeStamp(0.7028958665166409);
    msg.setSource(33343U);
    msg.setSourceEntity(41U);
    msg.setDestination(7372U);
    msg.setDestinationEntity(8U);
    msg.id = 100U;
    msg.value = 0.8595641995451888;

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
    msg.setTimeStamp(0.553222018253765);
    msg.setSource(51965U);
    msg.setSourceEntity(170U);
    msg.setDestination(55554U);
    msg.setDestinationEntity(42U);
    msg.id = 96U;
    msg.value = 0.7591437408382916;

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
    msg.setTimeStamp(0.813059307380621);
    msg.setSource(19071U);
    msg.setSourceEntity(104U);
    msg.setDestination(9277U);
    msg.setDestinationEntity(41U);
    msg.x = 0.40794446967443876;
    msg.y = 0.13167886794555062;
    msg.z = 0.03535909898425982;
    msg.phi = 0.43423733890065974;
    msg.theta = 0.12259482077104522;
    msg.psi = 0.5173703410078953;

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
    msg.setTimeStamp(0.35433581315752305);
    msg.setSource(40344U);
    msg.setSourceEntity(148U);
    msg.setDestination(48676U);
    msg.setDestinationEntity(1U);
    msg.x = 0.5767732054111818;
    msg.y = 0.3520798318234386;
    msg.z = 0.41743553109553977;
    msg.phi = 0.13044094511378546;
    msg.theta = 0.8691322602111441;
    msg.psi = 0.10207012746454935;

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
    msg.setTimeStamp(0.6491757478940056);
    msg.setSource(53895U);
    msg.setSourceEntity(151U);
    msg.setDestination(30768U);
    msg.setDestinationEntity(206U);
    msg.x = 0.6712380955767444;
    msg.y = 0.16267135089999263;
    msg.z = 0.14105584069256016;
    msg.phi = 0.12778921824320244;
    msg.theta = 0.6586234472626098;
    msg.psi = 0.33686788898303355;

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
    msg.setTimeStamp(0.11413314775752026);
    msg.setSource(40369U);
    msg.setSourceEntity(146U);
    msg.setDestination(57240U);
    msg.setDestinationEntity(171U);
    msg.beam_width = 0.27512178299332557;
    msg.beam_height = 0.13886938584641273;

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
    msg.setTimeStamp(0.3177418640387888);
    msg.setSource(43480U);
    msg.setSourceEntity(80U);
    msg.setDestination(4976U);
    msg.setDestinationEntity(94U);
    msg.beam_width = 0.1855814830952559;
    msg.beam_height = 0.1155294586536405;

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
    msg.setTimeStamp(0.4242099811209207);
    msg.setSource(36617U);
    msg.setSourceEntity(110U);
    msg.setDestination(61197U);
    msg.setDestinationEntity(59U);
    msg.beam_width = 0.25714326621336614;
    msg.beam_height = 0.7222348490167578;

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
    msg.setTimeStamp(0.412819224132561);
    msg.setSource(55853U);
    msg.setSourceEntity(108U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(53U);
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
    msg.setTimeStamp(0.14532257536214221);
    msg.setSource(20926U);
    msg.setSourceEntity(92U);
    msg.setDestination(17360U);
    msg.setDestinationEntity(214U);
    msg.sane = 67U;

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
    msg.setTimeStamp(0.19275069353785412);
    msg.setSource(46152U);
    msg.setSourceEntity(198U);
    msg.setDestination(53321U);
    msg.setDestinationEntity(107U);
    msg.sane = 63U;

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
    msg.setTimeStamp(0.06219180652809553);
    msg.setSource(19214U);
    msg.setSourceEntity(138U);
    msg.setDestination(35931U);
    msg.setDestinationEntity(141U);
    msg.value = 0.397047443078969;

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
    msg.setTimeStamp(0.41167926409055544);
    msg.setSource(63563U);
    msg.setSourceEntity(112U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(94U);
    msg.value = 0.560549095448295;

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
    msg.setTimeStamp(0.8833218794342567);
    msg.setSource(45385U);
    msg.setSourceEntity(181U);
    msg.setDestination(6641U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9415698750792962;

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
    msg.setTimeStamp(0.8060771969569783);
    msg.setSource(14915U);
    msg.setSourceEntity(33U);
    msg.setDestination(35668U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6261344036890252;

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
    msg.setTimeStamp(0.7567843811588103);
    msg.setSource(3962U);
    msg.setSourceEntity(61U);
    msg.setDestination(30544U);
    msg.setDestinationEntity(27U);
    msg.value = 0.39589028656782443;

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
    msg.setTimeStamp(0.4723958086804073);
    msg.setSource(52383U);
    msg.setSourceEntity(230U);
    msg.setDestination(54123U);
    msg.setDestinationEntity(105U);
    msg.value = 0.3355196854626037;

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
    msg.setTimeStamp(0.22085584677032877);
    msg.setSource(63632U);
    msg.setSourceEntity(157U);
    msg.setDestination(13806U);
    msg.setDestinationEntity(157U);
    msg.value = 0.22351582241464263;

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
    msg.setTimeStamp(0.49488078164791705);
    msg.setSource(50851U);
    msg.setSourceEntity(203U);
    msg.setDestination(41196U);
    msg.setDestinationEntity(115U);
    msg.value = 0.04883675499084339;

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
    msg.setTimeStamp(0.9193420774136762);
    msg.setSource(3551U);
    msg.setSourceEntity(135U);
    msg.setDestination(51329U);
    msg.setDestinationEntity(41U);
    msg.value = 0.11782824359020283;

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
    msg.setTimeStamp(0.026018150035976184);
    msg.setSource(6134U);
    msg.setSourceEntity(27U);
    msg.setDestination(20662U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6781158245358789;

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
    msg.setTimeStamp(0.35072525561354373);
    msg.setSource(36521U);
    msg.setSourceEntity(112U);
    msg.setDestination(40409U);
    msg.setDestinationEntity(189U);
    msg.value = 0.9674556772003484;

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
    msg.setTimeStamp(0.03444328575362021);
    msg.setSource(21085U);
    msg.setSourceEntity(181U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(205U);
    msg.value = 0.42595810789279054;

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
    msg.setTimeStamp(0.014953732846879952);
    msg.setSource(6806U);
    msg.setSourceEntity(70U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(144U);
    msg.value = 0.48833011481095145;

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
    msg.setTimeStamp(0.9669699136833739);
    msg.setSource(19707U);
    msg.setSourceEntity(252U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(105U);
    msg.value = 0.7675591731638685;

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
    msg.setTimeStamp(0.7773427943226002);
    msg.setSource(5177U);
    msg.setSourceEntity(250U);
    msg.setDestination(44309U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5317473909758487;

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
    msg.setTimeStamp(0.06497732375754639);
    msg.setSource(8978U);
    msg.setSourceEntity(217U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(69U);
    msg.value = 0.28794058058694194;

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
    msg.setTimeStamp(0.7858401470783917);
    msg.setSource(6178U);
    msg.setSourceEntity(199U);
    msg.setDestination(38021U);
    msg.setDestinationEntity(248U);
    msg.value = 0.7164751385673286;

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
    msg.setTimeStamp(0.15194769422988053);
    msg.setSource(47206U);
    msg.setSourceEntity(74U);
    msg.setDestination(27264U);
    msg.setDestinationEntity(194U);
    msg.value = 0.27707260765569985;

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
    msg.setTimeStamp(0.19545078586900977);
    msg.setSource(46839U);
    msg.setSourceEntity(2U);
    msg.setDestination(8899U);
    msg.setDestinationEntity(12U);
    msg.value = 0.8245291192989769;

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
    msg.setTimeStamp(0.7655638681070331);
    msg.setSource(32376U);
    msg.setSourceEntity(241U);
    msg.setDestination(60320U);
    msg.setDestinationEntity(41U);
    msg.value = 0.1322301055454238;

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
    msg.setTimeStamp(0.580567409162698);
    msg.setSource(48046U);
    msg.setSourceEntity(120U);
    msg.setDestination(13191U);
    msg.setDestinationEntity(221U);
    msg.value = 0.4272723450536542;

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
    msg.setTimeStamp(0.8571368670400877);
    msg.setSource(33728U);
    msg.setSourceEntity(229U);
    msg.setDestination(15606U);
    msg.setDestinationEntity(105U);
    msg.value = 0.551276360641677;

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
    msg.setTimeStamp(0.7681398725595895);
    msg.setSource(31745U);
    msg.setSourceEntity(112U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8328554835404914;

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
    msg.setTimeStamp(0.36964829841878166);
    msg.setSource(33058U);
    msg.setSourceEntity(51U);
    msg.setDestination(50093U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6782794955530528;

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
    msg.setTimeStamp(0.31881174600946305);
    msg.setSource(49691U);
    msg.setSourceEntity(238U);
    msg.setDestination(11435U);
    msg.setDestinationEntity(15U);
    msg.validity = 52682U;
    msg.type = 239U;
    msg.tow = 1544150586U;
    msg.base_lat = 0.20648246354767985;
    msg.base_lon = 0.6349431808398552;
    msg.base_height = 0.20752896870091853;
    msg.n = 0.11530818205448001;
    msg.e = 0.47427436232960307;
    msg.d = 0.12452091901919671;
    msg.v_n = 0.49615784041875266;
    msg.v_e = 0.808138521268459;
    msg.v_d = 0.855055964659787;
    msg.satellites = 193U;
    msg.iar_hyp = 33740U;
    msg.iar_ratio = 0.8240396392920055;

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
    msg.setTimeStamp(0.22362029689561125);
    msg.setSource(1441U);
    msg.setSourceEntity(56U);
    msg.setDestination(11774U);
    msg.setDestinationEntity(116U);
    msg.validity = 62395U;
    msg.type = 176U;
    msg.tow = 1353827464U;
    msg.base_lat = 0.6039712896268349;
    msg.base_lon = 0.48522767778497033;
    msg.base_height = 0.35801491986143263;
    msg.n = 0.2014997283878277;
    msg.e = 0.6539642454483161;
    msg.d = 0.2505424270973473;
    msg.v_n = 0.6931055891917641;
    msg.v_e = 0.48070975627419266;
    msg.v_d = 0.8844060540979533;
    msg.satellites = 241U;
    msg.iar_hyp = 33048U;
    msg.iar_ratio = 0.6142372970289535;

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
    msg.setTimeStamp(0.9770869705421694);
    msg.setSource(10384U);
    msg.setSourceEntity(131U);
    msg.setDestination(57360U);
    msg.setDestinationEntity(146U);
    msg.validity = 52569U;
    msg.type = 35U;
    msg.tow = 2204021923U;
    msg.base_lat = 0.3318031433551375;
    msg.base_lon = 0.5958317333291517;
    msg.base_height = 0.042795086713104835;
    msg.n = 0.18265866005163545;
    msg.e = 0.8312744629579002;
    msg.d = 0.207385993731673;
    msg.v_n = 0.7260884770196415;
    msg.v_e = 0.7135449815691599;
    msg.v_d = 0.5745221741356078;
    msg.satellites = 12U;
    msg.iar_hyp = 49350U;
    msg.iar_ratio = 0.524799613224705;

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
    msg.setTimeStamp(0.9833205640474698);
    msg.setSource(54867U);
    msg.setSourceEntity(87U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(88U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6400724483900861;
    tmp_msg_0.lon = 0.20805952890821677;
    tmp_msg_0.height = 0.533419992752085;
    tmp_msg_0.x = 0.6328644982438185;
    tmp_msg_0.y = 0.5921042887632094;
    tmp_msg_0.z = 0.7911942132965528;
    tmp_msg_0.phi = 0.1955302381328703;
    tmp_msg_0.theta = 0.9734256185940388;
    tmp_msg_0.psi = 0.6403973825639204;
    tmp_msg_0.u = 0.09790658839295296;
    tmp_msg_0.v = 0.10281222325167283;
    tmp_msg_0.w = 0.4193986612636569;
    tmp_msg_0.vx = 0.45972536480641746;
    tmp_msg_0.vy = 0.880896952869846;
    tmp_msg_0.vz = 0.5588820217708728;
    tmp_msg_0.p = 0.8803456612116867;
    tmp_msg_0.q = 0.08248935263343948;
    tmp_msg_0.r = 0.9171927015364497;
    tmp_msg_0.depth = 0.2096417240577474;
    tmp_msg_0.alt = 0.42970891286766144;
    msg.state.set(tmp_msg_0);
    msg.type = 176U;

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
    msg.setTimeStamp(0.554933344414048);
    msg.setSource(51133U);
    msg.setSourceEntity(87U);
    msg.setDestination(63906U);
    msg.setDestinationEntity(174U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4764312489161666;
    tmp_msg_0.lon = 0.10313278136110249;
    tmp_msg_0.height = 0.23246230344490482;
    tmp_msg_0.x = 0.9975234785554841;
    tmp_msg_0.y = 0.9883254718541895;
    tmp_msg_0.z = 0.8143369892914646;
    tmp_msg_0.phi = 0.2925045822199849;
    tmp_msg_0.theta = 0.8706149658195012;
    tmp_msg_0.psi = 0.13056199920954747;
    tmp_msg_0.u = 0.7513897723814577;
    tmp_msg_0.v = 0.3174681249323913;
    tmp_msg_0.w = 0.7911741020657277;
    tmp_msg_0.vx = 0.2969800312264027;
    tmp_msg_0.vy = 0.7981775628745249;
    tmp_msg_0.vz = 0.37568767717393103;
    tmp_msg_0.p = 0.9242357454353153;
    tmp_msg_0.q = 0.2386998910762972;
    tmp_msg_0.r = 0.00671871156260051;
    tmp_msg_0.depth = 0.9572089581991556;
    tmp_msg_0.alt = 0.15512266631320903;
    msg.state.set(tmp_msg_0);
    msg.type = 79U;

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
    msg.setTimeStamp(0.42913277830661745);
    msg.setSource(4692U);
    msg.setSourceEntity(33U);
    msg.setDestination(25749U);
    msg.setDestinationEntity(63U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9174962353484889;
    tmp_msg_0.lon = 0.9661105307805494;
    tmp_msg_0.height = 0.3392461174690855;
    tmp_msg_0.x = 0.5875740546346143;
    tmp_msg_0.y = 0.13494569617966123;
    tmp_msg_0.z = 0.2419505186733073;
    tmp_msg_0.phi = 0.5803750510880408;
    tmp_msg_0.theta = 0.40339251307844226;
    tmp_msg_0.psi = 0.09633655348601422;
    tmp_msg_0.u = 0.8477256926314801;
    tmp_msg_0.v = 0.19958232111368468;
    tmp_msg_0.w = 0.7573934614617808;
    tmp_msg_0.vx = 0.3811745185768346;
    tmp_msg_0.vy = 0.31622292625495074;
    tmp_msg_0.vz = 0.32622127196808026;
    tmp_msg_0.p = 0.6839442069613544;
    tmp_msg_0.q = 0.7761472836281812;
    tmp_msg_0.r = 0.8261641389253946;
    tmp_msg_0.depth = 0.7722003044528667;
    tmp_msg_0.alt = 0.952380435916677;
    msg.state.set(tmp_msg_0);
    msg.type = 102U;

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
    msg.setTimeStamp(0.3295950207123348);
    msg.setSource(62522U);
    msg.setSourceEntity(29U);
    msg.setDestination(18958U);
    msg.setDestinationEntity(93U);
    msg.value = 0.29738855560604616;

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
    msg.setTimeStamp(0.8622612408673069);
    msg.setSource(57588U);
    msg.setSourceEntity(76U);
    msg.setDestination(33854U);
    msg.setDestinationEntity(185U);
    msg.value = 0.471205048815155;

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
    msg.setTimeStamp(0.832139129669746);
    msg.setSource(65148U);
    msg.setSourceEntity(79U);
    msg.setDestination(40951U);
    msg.setDestinationEntity(250U);
    msg.value = 0.49842082438512825;

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
    msg.setTimeStamp(0.6404776659627157);
    msg.setSource(58471U);
    msg.setSourceEntity(170U);
    msg.setDestination(47571U);
    msg.setDestinationEntity(105U);
    msg.value = 0.1349751585291049;

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
    msg.setTimeStamp(0.13458166122595538);
    msg.setSource(44564U);
    msg.setSourceEntity(160U);
    msg.setDestination(44282U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9004810090927459;

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
    msg.setTimeStamp(0.829525986966168);
    msg.setSource(415U);
    msg.setSourceEntity(244U);
    msg.setDestination(64793U);
    msg.setDestinationEntity(180U);
    msg.value = 0.13926365840854227;

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
    msg.setTimeStamp(0.07584315095528871);
    msg.setSource(12195U);
    msg.setSourceEntity(27U);
    msg.setDestination(16183U);
    msg.setDestinationEntity(116U);
    msg.value = 0.08227661192408198;

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
    msg.setTimeStamp(0.31979608242300317);
    msg.setSource(20817U);
    msg.setSourceEntity(90U);
    msg.setDestination(59018U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5321853839429692;

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
    msg.setTimeStamp(0.4769940937405225);
    msg.setSource(49123U);
    msg.setSourceEntity(123U);
    msg.setDestination(26165U);
    msg.setDestinationEntity(31U);
    msg.value = 0.16762793052556701;

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
    msg.setTimeStamp(0.8620791558125245);
    msg.setSource(16952U);
    msg.setSourceEntity(80U);
    msg.setDestination(27446U);
    msg.setDestinationEntity(215U);
    msg.value = 0.11700888766743578;

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
    msg.setTimeStamp(0.05139862504932746);
    msg.setSource(11270U);
    msg.setSourceEntity(162U);
    msg.setDestination(40459U);
    msg.setDestinationEntity(199U);
    msg.value = 0.9547697466743936;

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
    msg.setTimeStamp(0.014982830521523938);
    msg.setSource(22715U);
    msg.setSourceEntity(149U);
    msg.setDestination(60390U);
    msg.setDestinationEntity(217U);
    msg.value = 0.6187499750518043;

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
    msg.setTimeStamp(0.6634621993057419);
    msg.setSource(48390U);
    msg.setSourceEntity(159U);
    msg.setDestination(31398U);
    msg.setDestinationEntity(132U);
    msg.value = 0.368309092451479;

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
    msg.setTimeStamp(0.1277064056843188);
    msg.setSource(9018U);
    msg.setSourceEntity(115U);
    msg.setDestination(46569U);
    msg.setDestinationEntity(228U);
    msg.value = 0.19969623731364394;

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
    msg.setTimeStamp(0.4897381582000002);
    msg.setSource(14372U);
    msg.setSourceEntity(96U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(173U);
    msg.value = 0.21263206276923774;

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
    msg.setTimeStamp(0.241512650989408);
    msg.setSource(7565U);
    msg.setSourceEntity(165U);
    msg.setDestination(13449U);
    msg.setDestinationEntity(133U);
    msg.id = 17U;
    msg.zoom = 32U;
    msg.action = 70U;

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
    msg.setTimeStamp(0.770578833585673);
    msg.setSource(12910U);
    msg.setSourceEntity(139U);
    msg.setDestination(33439U);
    msg.setDestinationEntity(87U);
    msg.id = 68U;
    msg.zoom = 103U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.472917556681292);
    msg.setSource(44510U);
    msg.setSourceEntity(220U);
    msg.setDestination(48450U);
    msg.setDestinationEntity(222U);
    msg.id = 209U;
    msg.zoom = 127U;
    msg.action = 162U;

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
    msg.setTimeStamp(0.23715214633108084);
    msg.setSource(35150U);
    msg.setSourceEntity(46U);
    msg.setDestination(48027U);
    msg.setDestinationEntity(14U);
    msg.id = 200U;
    msg.value = 0.7215563223109274;

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
    msg.setTimeStamp(0.9426491730215382);
    msg.setSource(15166U);
    msg.setSourceEntity(171U);
    msg.setDestination(22121U);
    msg.setDestinationEntity(210U);
    msg.id = 46U;
    msg.value = 0.21330979624034385;

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
    msg.setTimeStamp(0.9507069480705602);
    msg.setSource(44707U);
    msg.setSourceEntity(214U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(78U);
    msg.id = 126U;
    msg.value = 0.06716719537263016;

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
    msg.setTimeStamp(0.7638808279908597);
    msg.setSource(45840U);
    msg.setSourceEntity(231U);
    msg.setDestination(27829U);
    msg.setDestinationEntity(133U);
    msg.id = 247U;
    msg.value = 0.5342090294658852;

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
    msg.setTimeStamp(0.6303839598308405);
    msg.setSource(5318U);
    msg.setSourceEntity(51U);
    msg.setDestination(44212U);
    msg.setDestinationEntity(90U);
    msg.id = 216U;
    msg.value = 0.4735832568346915;

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
    msg.setTimeStamp(0.4681815564837509);
    msg.setSource(18114U);
    msg.setSourceEntity(231U);
    msg.setDestination(44652U);
    msg.setDestinationEntity(44U);
    msg.id = 236U;
    msg.value = 0.23402591447622634;

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
    msg.setTimeStamp(0.43454354661479144);
    msg.setSource(13399U);
    msg.setSourceEntity(205U);
    msg.setDestination(4659U);
    msg.setDestinationEntity(185U);
    msg.id = 66U;
    msg.angle = 0.5716269829281964;

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
    msg.setTimeStamp(0.23572332755175274);
    msg.setSource(16542U);
    msg.setSourceEntity(226U);
    msg.setDestination(34197U);
    msg.setDestinationEntity(219U);
    msg.id = 240U;
    msg.angle = 0.745238621691293;

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
    msg.setTimeStamp(0.8244023271129534);
    msg.setSource(23571U);
    msg.setSourceEntity(184U);
    msg.setDestination(6145U);
    msg.setDestinationEntity(0U);
    msg.id = 13U;
    msg.angle = 0.6801479308701578;

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
    msg.setTimeStamp(0.2807257320062956);
    msg.setSource(49313U);
    msg.setSourceEntity(24U);
    msg.setDestination(41228U);
    msg.setDestinationEntity(135U);
    msg.op = 50U;
    msg.actions.assign("IPIHWYLFFTHZAEAQRLXMGWSIZSFIGBRPAAETEDONTQQFUDGDUQTFJTNLDPDDANYZSPUNLQZAUYEHKNEJEVOYXNVLGVCR");

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
    msg.setTimeStamp(0.46587799569216803);
    msg.setSource(33469U);
    msg.setSourceEntity(217U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(171U);
    msg.op = 191U;
    msg.actions.assign("IEFMRFUUHIZOTVWOOMHZVZNIOALWDFRVKQTCFQGNMUKUFNVFPGGHOSXEHBUJAIKYSMJXQJPRTWSTLJARZINACZMCWHOXVHQNPISXKRTHDCCREVRPK");

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
    msg.setTimeStamp(0.5690003407758273);
    msg.setSource(34929U);
    msg.setSourceEntity(41U);
    msg.setDestination(1759U);
    msg.setDestinationEntity(5U);
    msg.op = 86U;
    msg.actions.assign("HVZVHUKSMCMXHRJBRCJUALCMOWSGJPCFPOAXTSFEWOFUDNYZIYBATLEVDJBLZQNKFIIDDNSKQVARRPVBRTPYRDOAHZDBKPHPAHKKAYMYGJLUVXBITCQMMXRNBTDTESAREAWYKVHIKNZGIXQTNHDTTMFFIDJFSWIBEGSQUUSHBIXOWVLQVZJQXGGUSNAFQZIPEJUWMQXDCPNLEOXUYPROSZBZWMYULJRCWWEECLGEX");

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
    msg.setTimeStamp(0.26849476946786466);
    msg.setSource(4772U);
    msg.setSourceEntity(206U);
    msg.setDestination(51925U);
    msg.setDestinationEntity(0U);
    msg.actions.assign("LFLBPAYHGWQSBCNJLUEDJSVASWOIPZFGXYFXJVQCODKNFGUHQWAKYBSOEGQIMUEWYXENMPKFISEKAZRTJDEBMVPCVSWHXUWJJXXALHXTPVQWQCMTCHICDKPEGVRWOLYOYUVRKKEXVSRVEZTLADTZLQZRJJCBHMWCMFFCGCSNPRGABINDHGJRFMBMDELQYBFZTZINTOFIAXLRRGXPYNKDOLKITIZGQNPJUTN");

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
    msg.setTimeStamp(0.6016072865603328);
    msg.setSource(43904U);
    msg.setSourceEntity(54U);
    msg.setDestination(14176U);
    msg.setDestinationEntity(166U);
    msg.actions.assign("MFHNGKLXNHCJOQLZOTLIQWGRIVVSJAVZFIXQHVTMICSZTDLFWFQWWSOGWEFMGHICPAFXKKTJSYQDPTWKZVDNXEPUDRARTPTCOFYWSMXZBEENSEVQYPAEBOARYSLUHNCOATCUGSXNNNUHCBGMGDUYTX");

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
    msg.setTimeStamp(0.6634300584988715);
    msg.setSource(51480U);
    msg.setSourceEntity(37U);
    msg.setDestination(18585U);
    msg.setDestinationEntity(210U);
    msg.actions.assign("QZJYXRFCXKZMKZCOQDRELCALYVHRTWSWPPLVJDXLCIJDKTNURCNRPPEKKKXJUIGGYIEFCFKZPOBSAOGRMMTKCYFBAQCFHH");

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
    msg.setTimeStamp(0.2899255720134235);
    msg.setSource(60655U);
    msg.setSourceEntity(78U);
    msg.setDestination(21572U);
    msg.setDestinationEntity(91U);
    msg.button = 214U;
    msg.value = 171U;

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
    msg.setTimeStamp(0.06549910073492737);
    msg.setSource(9534U);
    msg.setSourceEntity(165U);
    msg.setDestination(54456U);
    msg.setDestinationEntity(143U);
    msg.button = 98U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.9652529625222901);
    msg.setSource(22534U);
    msg.setSourceEntity(133U);
    msg.setDestination(5289U);
    msg.setDestinationEntity(59U);
    msg.button = 108U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.9593618026654009);
    msg.setSource(54716U);
    msg.setSourceEntity(231U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(33U);
    msg.op = 42U;
    msg.text.assign("QFWIALIZGCFCQZZIWEUCRLRRCKVLAKLVWQOEPEFNNYMPJGVHFTPHJFTVIXZUJSUPCZAWBTZOOTRDNQDKJKEHOUOSRFHAEZIOWSLMROISCACMEDMXFQGJZTYGJMQNGDQPNHBFDTLGIZSHRXDABVBSLUCBIFPUYVVYTJBGYVDLAYMXWQETNCYJXVSU");

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
    msg.setTimeStamp(0.8007411948733459);
    msg.setSource(51520U);
    msg.setSourceEntity(109U);
    msg.setDestination(47973U);
    msg.setDestinationEntity(4U);
    msg.op = 104U;
    msg.text.assign("UBMCBRSKOGHYTHNXZMHOQEWKZQZHNWRFGGYWIXLIEKKPMVLOBUJWKEUOEDIERBONDCXUFOIJHRFYUPQRROOTSLCZZBDAJQFCCSREPUDTLLQJMOPNTCXMBQKBPEBQYAWCYYGZBJRTVLWWNWLZYFPAVVSGZNXUPAVSIVASDAMPFPEKWXLIQUTNVJASVNBTTSRMZXUHPXJRGGIDAWHTLDEKUNQDJ");

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
    msg.setTimeStamp(0.7814282895802921);
    msg.setSource(37764U);
    msg.setSourceEntity(240U);
    msg.setDestination(8649U);
    msg.setDestinationEntity(253U);
    msg.op = 202U;
    msg.text.assign("ZSXTCPNRGYDAKCE");

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
    msg.setTimeStamp(0.20412644900920307);
    msg.setSource(27143U);
    msg.setSourceEntity(196U);
    msg.setDestination(46091U);
    msg.setDestinationEntity(134U);
    msg.op = 104U;
    msg.time_remain = 0.030555692402862045;
    msg.sched_time = 0.5975014726223593;

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
    msg.setTimeStamp(0.17609888372177052);
    msg.setSource(2716U);
    msg.setSourceEntity(44U);
    msg.setDestination(25908U);
    msg.setDestinationEntity(175U);
    msg.op = 8U;
    msg.time_remain = 0.1729071831246567;
    msg.sched_time = 0.979297035434711;

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
    msg.setTimeStamp(0.8675141410733413);
    msg.setSource(5136U);
    msg.setSourceEntity(115U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(74U);
    msg.op = 170U;
    msg.time_remain = 0.5587575526687577;
    msg.sched_time = 0.21194816135707129;

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
    msg.setTimeStamp(0.9490778034343428);
    msg.setSource(60043U);
    msg.setSourceEntity(12U);
    msg.setDestination(62419U);
    msg.setDestinationEntity(155U);
    msg.name.assign("VJLEFHQUYTQRCDWUIXUDOTFJIDCAHIWJSAXOBMVPXPFVDBGLOWMULCFJALEHGWSYXYGDVYKCCVHXZZDOSHUEGEUSNEKIXWGOWROJUASYBQIMPFRQZZVBLPKTHGBKRBYRPVDITCMZPCGP");
    msg.op = 149U;
    msg.sched_time = 0.2644769746338993;

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
    msg.setTimeStamp(0.038151632462472884);
    msg.setSource(64515U);
    msg.setSourceEntity(29U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(238U);
    msg.name.assign("YYNODCSQUMRUPMLMJPUZNFYGZJLSTTVUMTRAINF");
    msg.op = 110U;
    msg.sched_time = 0.01050466239540404;

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
    msg.setTimeStamp(0.1671202522863977);
    msg.setSource(2910U);
    msg.setSourceEntity(147U);
    msg.setDestination(39114U);
    msg.setDestinationEntity(224U);
    msg.name.assign("NERWNTPSZVOMBWUYOZTJNUYYWYPUBISGAWFEWUWVJZZOVTHARPMRGZNLCARCRKHXDLKXUWDXABHQDNGSOLCIIPMYCFCNFOEGWFKMSKQTVJVBFEZWRURSQVIPPEQXFCEKNVUHQISAIYZLLJARSTGNMKQVOLLQYWFPXDADBSGYUGGXHPCHRXHMICQADPUNAVTKEOJDUEBXSBYSTFBLFXJJTXCDLGODGMTHFJKJIK");
    msg.op = 117U;
    msg.sched_time = 0.7556155518993652;

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
    msg.setTimeStamp(0.23000682852905763);
    msg.setSource(15196U);
    msg.setSourceEntity(9U);
    msg.setDestination(7735U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.9973383777214211);
    msg.setSource(36392U);
    msg.setSourceEntity(60U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.5975392849318375);
    msg.setSource(41398U);
    msg.setSourceEntity(114U);
    msg.setDestination(10551U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.8579038436066754);
    msg.setSource(60667U);
    msg.setSourceEntity(47U);
    msg.setDestination(51540U);
    msg.setDestinationEntity(36U);
    msg.name.assign("JCAVTBFWUJHUELJMCDZSEMWSUMUMQKVFYBGSEHWFGGYVINOKIIAYDAAWFOXWUOGCIHYTDWKBRBLDGQPYYRNQHLSXZEK");
    msg.state = 235U;

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
    msg.setTimeStamp(0.07391573263520912);
    msg.setSource(51935U);
    msg.setSourceEntity(129U);
    msg.setDestination(53845U);
    msg.setDestinationEntity(174U);
    msg.name.assign("VWTXPLQVACTNMQCQVENLZRBXCVOIRZUQHCBHSUTFGVOPEVRSWBYCOCGUDGMKKPEGYSJEDTOOIDCFKJWJAHDZSDEH");
    msg.state = 245U;

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
    msg.setTimeStamp(0.7196601352363059);
    msg.setSource(35475U);
    msg.setSourceEntity(17U);
    msg.setDestination(28380U);
    msg.setDestinationEntity(102U);
    msg.name.assign("CBKTYZBMKJBPUSKYYXZSYHBCQFDSUXROETLINHRVSJNCHUZWXDQORGDIXCGLAMPSOCXMIDJROMGFPVVBFQYG");
    msg.state = 193U;

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
    msg.setTimeStamp(0.8439383126400222);
    msg.setSource(11463U);
    msg.setSourceEntity(44U);
    msg.setDestination(59724U);
    msg.setDestinationEntity(109U);
    msg.name.assign("SNRXRFWOUPVYAZLUFDQOBCKSBFWNZJUEPQWRJGTEXOMJEPYQEBO");
    msg.value = 223U;

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
    msg.setTimeStamp(0.9974480174877427);
    msg.setSource(42232U);
    msg.setSourceEntity(82U);
    msg.setDestination(38161U);
    msg.setDestinationEntity(68U);
    msg.name.assign("MLIYZKPRZDVSXDPHTWHGULUNULWOKDWSEIIYVPRYKMKIIGMSEJAUJMTNYEACOQVWHOTCQRHGQSORACGPFQNPMFHUPKNCBJOECSQLZFDECCDFIHXLFJMBZTUFPJQUXWGEJESYJRGMWHZNSYKNOYYAKTDPVMBYQBARLVPDOWNJTUICBIRKMRGBBODHNIRLSLFLAXAUANCFMHVOPWSYTFJIZWZXA");
    msg.value = 124U;

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
    msg.setTimeStamp(0.2622275046570022);
    msg.setSource(57215U);
    msg.setSourceEntity(174U);
    msg.setDestination(46343U);
    msg.setDestinationEntity(1U);
    msg.name.assign("IOIUNMYVHUKMHUVQXCNLWVDEHWCXTWYBOYWFYZFJOHIOFIETDKRJSSKUNGPQEFJRKBGBZBVMDJJPSAXRGICUMGKZGDIHMATGXHFGBLCVDOIHNAQEUCXWANRBZOCSVTDLGWRLAWXNZAABIEJDHTPAPGUFLEUPHTFSPMKEUJNQETZRGYYYQUXCRCIEDPCVSNSLWLOPQATQJIFRKAPTZFDBSQLYVORLEMHZNXSOMWKYDYQV");
    msg.value = 113U;

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
    msg.setTimeStamp(0.2047441298024706);
    msg.setSource(10032U);
    msg.setSourceEntity(248U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(219U);
    msg.name.assign("OKFURKYDGTGEPBDKHVGDRWMMYZZIHOVOFQPEIXWIARROQUPUMRLUEGCFSDUMFNKDZVQOZWNTAETPRYBTXSX");

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
    msg.setTimeStamp(0.14648804379367808);
    msg.setSource(26968U);
    msg.setSourceEntity(166U);
    msg.setDestination(4661U);
    msg.setDestinationEntity(44U);
    msg.name.assign("UONDRYQFEPHAXXINFBWFFWGXSOFYKAAGRHEHTKGVSJHBTGFCLZESDNJOGDCAQKPNJJGCEBEFQGHMWUUBQTYPSFEYICICVRUBUNGWAYKMOUELWVQMIMFBJQSPXDYLZXHT");

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
    msg.setTimeStamp(0.0503410390260125);
    msg.setSource(20901U);
    msg.setSourceEntity(60U);
    msg.setDestination(48820U);
    msg.setDestinationEntity(34U);
    msg.name.assign("CAAWFIQWMSZGAQVYSDJBMCAANAGSMRHERSJOBIUDKOWGHOASTXDDNERBQJVAJLXIVUXYXHTETDMJOHWJKFPOKFNPEHFBZPMZWFMXTUCKTFMCQVHBNBGYNGPCVQBETDZRQMOARQBIHWGZTMOONLKYHIDRJRYVSILLKOPPUUEJWHRFCNICMCLFQQJYUKDOKLT");

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
    msg.setTimeStamp(0.3530620056179501);
    msg.setSource(28955U);
    msg.setSourceEntity(142U);
    msg.setDestination(63451U);
    msg.setDestinationEntity(130U);
    msg.name.assign("FQVTWGPBQPBYQOOMWXGQBIGLVIMTABNTHMLLQXFONEHTVAGEOYSYVADFCJIVYDKMJIPPEYPFBVLQDUTREPPFKD");
    msg.value = 180U;

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
    msg.setTimeStamp(0.8491514810012711);
    msg.setSource(9969U);
    msg.setSourceEntity(217U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(178U);
    msg.name.assign("YLVTVLOVJRMVHBHLGHWNUELXANRXGCYWNSBBBSJCZVNAYUVEFGDAIZDQPKWNOQCUITSWKYTDPYUMAFPDZQTHKKKQCOYRXVNGYLJRMHZGXIWCJXMJEHAHIRCPTFZZLMEAYWEQXWFKRDJAODTPBRZTBSHZOPLOOW");
    msg.value = 139U;

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
    msg.setTimeStamp(0.303701822539325);
    msg.setSource(23846U);
    msg.setSourceEntity(253U);
    msg.setDestination(12241U);
    msg.setDestinationEntity(143U);
    msg.name.assign("EPTUEGVLUFWLZHEIQUSXNDUNVMAIRDZSIDBIPSGIYVFDJCZOBVOITGBZTTKNTMFKNXKQMEVMSUJPJVADPDHZIHGJAKWNZRRXECXFWFUIGCPQHYBBPEYNGFTSHFYWBZMNSMFLCLYOHVEQASNCFKUZGVOOEOHUXDTMSRCJBKOHMLQCBJJFGLRXYZKJBZRXUPKRVYGWGNRUQALSCODWOBNAQITEQLXP");
    msg.value = 155U;

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
    msg.setTimeStamp(0.5654548216165785);
    msg.setSource(24853U);
    msg.setSourceEntity(238U);
    msg.setDestination(45186U);
    msg.setDestinationEntity(125U);
    msg.id = 73U;
    msg.period = 1496532335U;
    msg.duty_cycle = 3775911557U;

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
    msg.setTimeStamp(0.13283091950569148);
    msg.setSource(12451U);
    msg.setSourceEntity(39U);
    msg.setDestination(1252U);
    msg.setDestinationEntity(4U);
    msg.id = 2U;
    msg.period = 422376561U;
    msg.duty_cycle = 2605438787U;

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
    msg.setTimeStamp(0.9159396035953299);
    msg.setSource(21061U);
    msg.setSourceEntity(245U);
    msg.setDestination(6541U);
    msg.setDestinationEntity(159U);
    msg.id = 13U;
    msg.period = 3207442619U;
    msg.duty_cycle = 3708639899U;

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
    msg.setTimeStamp(0.9591191067233437);
    msg.setSource(56176U);
    msg.setSourceEntity(82U);
    msg.setDestination(3168U);
    msg.setDestinationEntity(56U);
    msg.id = 102U;
    msg.period = 3029781906U;
    msg.duty_cycle = 3874619195U;

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
    msg.setTimeStamp(0.7039108730593301);
    msg.setSource(53549U);
    msg.setSourceEntity(201U);
    msg.setDestination(3541U);
    msg.setDestinationEntity(231U);
    msg.id = 166U;
    msg.period = 1961315567U;
    msg.duty_cycle = 2239721552U;

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
    msg.setTimeStamp(0.9705497967532335);
    msg.setSource(37335U);
    msg.setSourceEntity(26U);
    msg.setDestination(44776U);
    msg.setDestinationEntity(17U);
    msg.id = 119U;
    msg.period = 992417554U;
    msg.duty_cycle = 3618392285U;

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
    msg.setTimeStamp(0.5890885468915688);
    msg.setSource(7491U);
    msg.setSourceEntity(204U);
    msg.setDestination(60405U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.11999090895568587;
    msg.lon = 0.33265481834042887;
    msg.height = 0.8482312213038206;
    msg.x = 0.7890770256653036;
    msg.y = 0.008940383209735892;
    msg.z = 0.09838863597797531;
    msg.phi = 0.23851003097649004;
    msg.theta = 0.3290440373926845;
    msg.psi = 0.6500260762950502;
    msg.u = 0.963785033581196;
    msg.v = 0.4701760566064608;
    msg.w = 0.2971627207038092;
    msg.vx = 0.9263762519218423;
    msg.vy = 0.05338723558819147;
    msg.vz = 0.7071447053420896;
    msg.p = 0.712215123290177;
    msg.q = 0.16178926225084156;
    msg.r = 0.2028912591602925;
    msg.depth = 0.7414216049757516;
    msg.alt = 0.4116794819881483;

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
    msg.setTimeStamp(0.6990544144833293);
    msg.setSource(62039U);
    msg.setSourceEntity(78U);
    msg.setDestination(54224U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.15992208129231067;
    msg.lon = 0.8010778014012495;
    msg.height = 0.969213858972806;
    msg.x = 0.362525735828339;
    msg.y = 0.6213500509350712;
    msg.z = 0.3486945280299506;
    msg.phi = 0.4581527204967917;
    msg.theta = 0.7166843685899454;
    msg.psi = 0.5275495906348975;
    msg.u = 0.569805657404377;
    msg.v = 0.37238972352619204;
    msg.w = 0.7462032975578164;
    msg.vx = 0.1504376535779245;
    msg.vy = 0.2564391110465626;
    msg.vz = 0.4684972634726874;
    msg.p = 0.5307221072121794;
    msg.q = 0.8576598000542776;
    msg.r = 0.5990600261622;
    msg.depth = 0.4059021520802153;
    msg.alt = 0.1706803686331574;

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
    msg.setTimeStamp(0.21702356754825758);
    msg.setSource(22570U);
    msg.setSourceEntity(50U);
    msg.setDestination(48761U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.11965756402323979;
    msg.lon = 0.8970925069363619;
    msg.height = 0.4627968440675956;
    msg.x = 0.5470619298198349;
    msg.y = 0.4547907368299767;
    msg.z = 0.9340346293832439;
    msg.phi = 0.5657987450441606;
    msg.theta = 0.036024078455736075;
    msg.psi = 0.6952034187176711;
    msg.u = 0.6235865819737488;
    msg.v = 0.12652614101786297;
    msg.w = 0.544418850288573;
    msg.vx = 0.0820510047585693;
    msg.vy = 0.6730752789662927;
    msg.vz = 0.20075762114559548;
    msg.p = 0.1379200763069952;
    msg.q = 0.3673633924564599;
    msg.r = 0.43754569197230564;
    msg.depth = 0.9053767337142328;
    msg.alt = 0.39122356268802916;

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
    msg.setTimeStamp(0.7841229598981574);
    msg.setSource(15241U);
    msg.setSourceEntity(66U);
    msg.setDestination(27210U);
    msg.setDestinationEntity(84U);
    msg.x = 0.006541047731434602;
    msg.y = 0.2977728925727682;
    msg.z = 0.41363898594135207;

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
    msg.setTimeStamp(0.06679386464309567);
    msg.setSource(8368U);
    msg.setSourceEntity(225U);
    msg.setDestination(50079U);
    msg.setDestinationEntity(128U);
    msg.x = 0.001011726746407815;
    msg.y = 0.753113668478466;
    msg.z = 0.8382087342817053;

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
    msg.setTimeStamp(0.6499326531051983);
    msg.setSource(43068U);
    msg.setSourceEntity(232U);
    msg.setDestination(13250U);
    msg.setDestinationEntity(48U);
    msg.x = 0.33464141580872186;
    msg.y = 0.34082190136207835;
    msg.z = 0.2755561186958838;

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
    msg.setTimeStamp(0.4592404325766094);
    msg.setSource(12880U);
    msg.setSourceEntity(244U);
    msg.setDestination(42136U);
    msg.setDestinationEntity(238U);
    msg.value = 0.4624906989371296;

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
    msg.setTimeStamp(0.7565038556772407);
    msg.setSource(594U);
    msg.setSourceEntity(130U);
    msg.setDestination(40894U);
    msg.setDestinationEntity(230U);
    msg.value = 0.12560994847634022;

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
    msg.setTimeStamp(0.8454280895289621);
    msg.setSource(53671U);
    msg.setSourceEntity(117U);
    msg.setDestination(62348U);
    msg.setDestinationEntity(169U);
    msg.value = 0.05285849250082242;

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
    msg.setTimeStamp(0.4855903940630003);
    msg.setSource(47067U);
    msg.setSourceEntity(58U);
    msg.setDestination(65024U);
    msg.setDestinationEntity(45U);
    msg.value = 0.11481826470433254;

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
    msg.setTimeStamp(0.3749107342563063);
    msg.setSource(8484U);
    msg.setSourceEntity(167U);
    msg.setDestination(50643U);
    msg.setDestinationEntity(10U);
    msg.value = 0.12551093932340285;

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
    msg.setTimeStamp(0.038940418366418594);
    msg.setSource(16855U);
    msg.setSourceEntity(53U);
    msg.setDestination(51166U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9187344007721554;

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
    msg.setTimeStamp(0.6395533105588369);
    msg.setSource(64602U);
    msg.setSourceEntity(34U);
    msg.setDestination(55298U);
    msg.setDestinationEntity(30U);
    msg.x = 0.671731867635418;
    msg.y = 0.21299778397055769;
    msg.z = 0.1362339340964267;
    msg.phi = 0.6480760585595955;
    msg.theta = 0.04232881650155451;
    msg.psi = 0.4215582481146677;
    msg.p = 0.6165424033663203;
    msg.q = 0.03436788252431655;
    msg.r = 0.8351838503655655;
    msg.u = 0.8554811004834986;
    msg.v = 0.622432952827289;
    msg.w = 0.03033382943024121;
    msg.bias_psi = 0.3642267611787816;
    msg.bias_r = 0.07741852546145345;

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
    msg.setTimeStamp(0.9028091192804659);
    msg.setSource(8246U);
    msg.setSourceEntity(161U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(215U);
    msg.x = 0.8808686600834293;
    msg.y = 0.8614867512507987;
    msg.z = 0.9369683531073727;
    msg.phi = 0.3893481940013146;
    msg.theta = 0.3744458832930959;
    msg.psi = 0.7633790162230135;
    msg.p = 0.944217364975719;
    msg.q = 0.2905437028835012;
    msg.r = 0.753900354050294;
    msg.u = 0.914597584907052;
    msg.v = 0.6549267699245538;
    msg.w = 0.902917413550974;
    msg.bias_psi = 0.7730334603985904;
    msg.bias_r = 0.6900982474569393;

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
    msg.setTimeStamp(0.7393510914142051);
    msg.setSource(44955U);
    msg.setSourceEntity(148U);
    msg.setDestination(27178U);
    msg.setDestinationEntity(59U);
    msg.x = 0.38165909497063055;
    msg.y = 0.41289360151991494;
    msg.z = 0.3207802490842798;
    msg.phi = 0.6987419329415939;
    msg.theta = 0.3379906251351791;
    msg.psi = 0.004434843900672947;
    msg.p = 0.35027057566753195;
    msg.q = 0.4411909566914205;
    msg.r = 0.2913710146345555;
    msg.u = 0.7420225788101574;
    msg.v = 0.3470585283014769;
    msg.w = 0.8190494861065201;
    msg.bias_psi = 0.3208893607675696;
    msg.bias_r = 0.9623994799270086;

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
    msg.setTimeStamp(0.12857497780661642);
    msg.setSource(9622U);
    msg.setSourceEntity(172U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(212U);
    msg.bias_psi = 0.9528177577852056;
    msg.bias_r = 0.015282365322537905;
    msg.cog = 0.8032678228122251;
    msg.cyaw = 0.4220246232963707;
    msg.lbl_rej_level = 0.6842332696998739;
    msg.gps_rej_level = 0.3800160070956137;
    msg.custom_x = 0.028890497907869683;
    msg.custom_y = 0.40000401034816235;
    msg.custom_z = 0.39893585484452565;

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
    msg.setTimeStamp(0.33604556699512667);
    msg.setSource(3901U);
    msg.setSourceEntity(36U);
    msg.setDestination(6205U);
    msg.setDestinationEntity(191U);
    msg.bias_psi = 0.37240315384680134;
    msg.bias_r = 0.8613568443109818;
    msg.cog = 0.5193154702085445;
    msg.cyaw = 0.8492906815190424;
    msg.lbl_rej_level = 0.8658682550474277;
    msg.gps_rej_level = 0.7651907679519308;
    msg.custom_x = 0.05063396794697583;
    msg.custom_y = 0.10837473873460346;
    msg.custom_z = 0.7655471117112634;

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
    msg.setTimeStamp(0.17503963552319723);
    msg.setSource(7548U);
    msg.setSourceEntity(118U);
    msg.setDestination(3500U);
    msg.setDestinationEntity(154U);
    msg.bias_psi = 0.27723985874744117;
    msg.bias_r = 0.9182174035416564;
    msg.cog = 0.43653282412953087;
    msg.cyaw = 0.7838528701968547;
    msg.lbl_rej_level = 0.721878221334595;
    msg.gps_rej_level = 0.35741895939361457;
    msg.custom_x = 0.5513684448529331;
    msg.custom_y = 0.412735068085493;
    msg.custom_z = 0.17573649187728202;

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
    msg.setTimeStamp(0.98305916279127);
    msg.setSource(25973U);
    msg.setSourceEntity(201U);
    msg.setDestination(32946U);
    msg.setDestinationEntity(117U);
    msg.utc_time = 0.5720457806195328;
    msg.reason = 113U;

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
    msg.setTimeStamp(0.4581613075561177);
    msg.setSource(42067U);
    msg.setSourceEntity(140U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.7611190939050416;
    msg.reason = 99U;

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
    msg.setTimeStamp(0.03103158514302351);
    msg.setSource(13105U);
    msg.setSourceEntity(246U);
    msg.setDestination(14369U);
    msg.setDestinationEntity(186U);
    msg.utc_time = 0.2839039023446077;
    msg.reason = 106U;

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
    msg.setTimeStamp(0.773289263060858);
    msg.setSource(19987U);
    msg.setSourceEntity(146U);
    msg.setDestination(5610U);
    msg.setDestinationEntity(145U);
    msg.id = 134U;
    msg.range = 0.7209652238813319;
    msg.acceptance = 234U;

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
    msg.setTimeStamp(0.5125230608057023);
    msg.setSource(63156U);
    msg.setSourceEntity(131U);
    msg.setDestination(41816U);
    msg.setDestinationEntity(132U);
    msg.id = 67U;
    msg.range = 0.3946687063945862;
    msg.acceptance = 14U;

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
    msg.setTimeStamp(0.8553999626640384);
    msg.setSource(42425U);
    msg.setSourceEntity(178U);
    msg.setDestination(45619U);
    msg.setDestinationEntity(89U);
    msg.id = 50U;
    msg.range = 0.5286602424505843;
    msg.acceptance = 241U;

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
    msg.setTimeStamp(0.7277984396259155);
    msg.setSource(58999U);
    msg.setSourceEntity(81U);
    msg.setDestination(16436U);
    msg.setDestinationEntity(83U);
    msg.type = 92U;
    msg.reason = 202U;
    msg.value = 0.2441258167365984;
    msg.timestep = 0.7579465583133279;

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
    msg.setTimeStamp(0.04104566091868167);
    msg.setSource(45873U);
    msg.setSourceEntity(191U);
    msg.setDestination(5299U);
    msg.setDestinationEntity(178U);
    msg.type = 210U;
    msg.reason = 148U;
    msg.value = 0.6992368300073458;
    msg.timestep = 0.804734060335621;

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
    msg.setTimeStamp(0.6067962473644303);
    msg.setSource(17370U);
    msg.setSourceEntity(165U);
    msg.setDestination(4204U);
    msg.setDestinationEntity(46U);
    msg.type = 140U;
    msg.reason = 170U;
    msg.value = 0.007834387554248146;
    msg.timestep = 0.5913168153537309;

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
    msg.setTimeStamp(0.7053168744939643);
    msg.setSource(35976U);
    msg.setSourceEntity(240U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(32U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ERFATDSQYEUCDKUERYFEEECKSBIYTOBJJZUFIXITXPBDDCB");
    tmp_msg_0.lat = 0.2531738913225817;
    tmp_msg_0.lon = 0.7783572114486239;
    tmp_msg_0.depth = 0.05082704818692729;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8163938491600653;
    msg.y = 0.1631938815333569;
    msg.var_x = 0.5829720865597641;
    msg.var_y = 0.39126386155596016;
    msg.distance = 0.3762945495729577;

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
    msg.setTimeStamp(0.7710390431700676);
    msg.setSource(32785U);
    msg.setSourceEntity(195U);
    msg.setDestination(29148U);
    msg.setDestinationEntity(157U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PVDEANFNMYPSAITSWOJAWSPPPUDNDYZLEKVJWBGMTLQZTFBGDKAATMETVFFQAICZMYRRWFXOHQDWINDGVAJBESYOPBBSZCSTEUCDZHILBHUQPPKKQQZFWVMZSFDGLCUQFIGHEZGXDZJAFCFIJNEHQIKYOYKKMZXNQGBWQKIUEVRPOAAHMYVJGJSXMHHRLKHWJLNGJGCYRXTBCBJDUUNOUOEWSNTYNXUICOXLRMCXUHRRY");
    tmp_msg_0.lat = 0.6572416368917802;
    tmp_msg_0.lon = 0.9594296057792773;
    tmp_msg_0.depth = 0.36246433871615014;
    tmp_msg_0.query_channel = 9U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 254U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.19018076467597145;
    msg.y = 0.1965938813714837;
    msg.var_x = 0.2923113066370523;
    msg.var_y = 0.9633958217195551;
    msg.distance = 0.48131401817321007;

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
    msg.setTimeStamp(0.2814075080195457);
    msg.setSource(5157U);
    msg.setSourceEntity(192U);
    msg.setDestination(28835U);
    msg.setDestinationEntity(28U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WKWGUIQPKQRXN");
    tmp_msg_0.lat = 0.268563784553444;
    tmp_msg_0.lon = 0.3586545490284895;
    tmp_msg_0.depth = 0.4403322005381537;
    tmp_msg_0.query_channel = 142U;
    tmp_msg_0.reply_channel = 48U;
    tmp_msg_0.transponder_delay = 144U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2380596545470346;
    msg.y = 0.28888813703054383;
    msg.var_x = 0.8229658388218873;
    msg.var_y = 0.7248118217708078;
    msg.distance = 0.990263070396709;

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
    msg.setTimeStamp(0.4103339211223844);
    msg.setSource(35443U);
    msg.setSourceEntity(44U);
    msg.setDestination(30660U);
    msg.setDestinationEntity(210U);
    msg.state = 5U;

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
    msg.setTimeStamp(0.7548485744936352);
    msg.setSource(31923U);
    msg.setSourceEntity(243U);
    msg.setDestination(60507U);
    msg.setDestinationEntity(74U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.578094590342456);
    msg.setSource(50206U);
    msg.setSourceEntity(13U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(151U);
    msg.state = 113U;

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
    msg.setTimeStamp(0.3224390853698488);
    msg.setSource(9136U);
    msg.setSourceEntity(115U);
    msg.setDestination(59215U);
    msg.setDestinationEntity(244U);
    msg.x = 0.22821542760161284;
    msg.y = 0.4368705508020906;
    msg.z = 0.8000018847717091;

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
    msg.setTimeStamp(0.08858806118681695);
    msg.setSource(49050U);
    msg.setSourceEntity(130U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(143U);
    msg.x = 0.7852099898654646;
    msg.y = 0.25527860129441193;
    msg.z = 0.9492863448268136;

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
    msg.setTimeStamp(0.9219009145980379);
    msg.setSource(36178U);
    msg.setSourceEntity(58U);
    msg.setDestination(22906U);
    msg.setDestinationEntity(171U);
    msg.x = 0.9719909477078625;
    msg.y = 0.6819580919982158;
    msg.z = 0.5543404499224543;

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
    msg.setTimeStamp(0.947131212769276);
    msg.setSource(37745U);
    msg.setSourceEntity(29U);
    msg.setDestination(7877U);
    msg.setDestinationEntity(211U);
    msg.va = 0.2570732139694285;
    msg.aoa = 0.0014344241637700428;
    msg.ssa = 0.017098829975346064;

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
    msg.setTimeStamp(0.448263738018307);
    msg.setSource(36389U);
    msg.setSourceEntity(250U);
    msg.setDestination(28159U);
    msg.setDestinationEntity(158U);
    msg.va = 0.1142126360786484;
    msg.aoa = 0.12726230858733312;
    msg.ssa = 0.21030516637146823;

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
    msg.setTimeStamp(0.16842161566762015);
    msg.setSource(16131U);
    msg.setSourceEntity(189U);
    msg.setDestination(45994U);
    msg.setDestinationEntity(85U);
    msg.va = 0.8109849900792756;
    msg.aoa = 0.06887949017186812;
    msg.ssa = 0.13300076953064577;

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
    msg.setTimeStamp(0.7300341610047915);
    msg.setSource(20058U);
    msg.setSourceEntity(165U);
    msg.setDestination(47634U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3235802446449021;

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
    msg.setTimeStamp(0.8973232844406692);
    msg.setSource(36377U);
    msg.setSourceEntity(200U);
    msg.setDestination(51201U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5107781546097157;

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
    msg.setTimeStamp(0.1553447854150154);
    msg.setSource(53795U);
    msg.setSourceEntity(125U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8824857981194989;

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
    msg.setTimeStamp(0.1125110354026091);
    msg.setSource(5807U);
    msg.setSourceEntity(253U);
    msg.setDestination(16278U);
    msg.setDestinationEntity(198U);
    msg.value = 0.3198550498343232;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.08681103025064008);
    msg.setSource(22039U);
    msg.setSourceEntity(234U);
    msg.setDestination(44363U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6328609753380302;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.4609980806044487);
    msg.setSource(773U);
    msg.setSourceEntity(3U);
    msg.setDestination(5481U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8875905036358377;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.28040550280490506);
    msg.setSource(6384U);
    msg.setSourceEntity(234U);
    msg.setDestination(30259U);
    msg.setDestinationEntity(148U);
    msg.value = 0.56115016872117;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.5405771679081084);
    msg.setSource(9980U);
    msg.setSourceEntity(145U);
    msg.setDestination(31893U);
    msg.setDestinationEntity(43U);
    msg.value = 0.48113358210068735;
    msg.speed_units = 25U;

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
    msg.setTimeStamp(0.8734380031061644);
    msg.setSource(5699U);
    msg.setSourceEntity(150U);
    msg.setDestination(2340U);
    msg.setDestinationEntity(45U);
    msg.value = 0.5617644410896524;
    msg.speed_units = 67U;

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
    msg.setTimeStamp(0.2757848610410426);
    msg.setSource(56315U);
    msg.setSourceEntity(210U);
    msg.setDestination(8793U);
    msg.setDestinationEntity(158U);
    msg.value = 0.8824527817476715;

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
    msg.setTimeStamp(0.16663517754674562);
    msg.setSource(19854U);
    msg.setSourceEntity(149U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(80U);
    msg.value = 0.27981874294686837;

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
    msg.setTimeStamp(0.28804982902436815);
    msg.setSource(32478U);
    msg.setSourceEntity(220U);
    msg.setDestination(3662U);
    msg.setDestinationEntity(0U);
    msg.value = 0.5688633645075726;

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
    msg.setTimeStamp(0.25714477285601367);
    msg.setSource(38518U);
    msg.setSourceEntity(13U);
    msg.setDestination(25769U);
    msg.setDestinationEntity(62U);
    msg.value = 0.702761985325881;

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
    msg.setTimeStamp(0.7205851332669723);
    msg.setSource(29059U);
    msg.setSourceEntity(12U);
    msg.setDestination(40624U);
    msg.setDestinationEntity(82U);
    msg.value = 0.16746160568994783;

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
    msg.setTimeStamp(0.9093799090421351);
    msg.setSource(35348U);
    msg.setSourceEntity(226U);
    msg.setDestination(29325U);
    msg.setDestinationEntity(203U);
    msg.value = 0.8911973606578123;

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
    msg.setTimeStamp(0.8128742594302772);
    msg.setSource(14370U);
    msg.setSourceEntity(145U);
    msg.setDestination(3922U);
    msg.setDestinationEntity(26U);
    msg.value = 0.020218508987261408;

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
    msg.setTimeStamp(0.540540184295159);
    msg.setSource(32005U);
    msg.setSourceEntity(36U);
    msg.setDestination(15872U);
    msg.setDestinationEntity(75U);
    msg.value = 0.9639818076977164;

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
    msg.setTimeStamp(0.3695308738913967);
    msg.setSource(61817U);
    msg.setSourceEntity(170U);
    msg.setDestination(64409U);
    msg.setDestinationEntity(136U);
    msg.value = 0.2677090286471121;

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
    msg.setTimeStamp(0.7923370929157604);
    msg.setSource(41225U);
    msg.setSourceEntity(215U);
    msg.setDestination(39672U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 3771723024U;
    msg.start_lat = 0.0940658089036226;
    msg.start_lon = 0.792767707132997;
    msg.start_z = 0.2604721037227542;
    msg.start_z_units = 27U;
    msg.end_lat = 0.5551770866292105;
    msg.end_lon = 0.8897700109530944;
    msg.end_z = 0.8035364741845299;
    msg.end_z_units = 224U;
    msg.speed = 0.02581686027342811;
    msg.speed_units = 118U;
    msg.lradius = 0.36613916441360783;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.6757447835719683);
    msg.setSource(57080U);
    msg.setSourceEntity(50U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 1927389916U;
    msg.start_lat = 0.7568661905644856;
    msg.start_lon = 0.0728149538799232;
    msg.start_z = 0.5380391848134721;
    msg.start_z_units = 92U;
    msg.end_lat = 0.7459113858820842;
    msg.end_lon = 0.39004001074270234;
    msg.end_z = 0.6454492506079487;
    msg.end_z_units = 212U;
    msg.speed = 0.20864200187565607;
    msg.speed_units = 102U;
    msg.lradius = 0.14406910516143934;
    msg.flags = 79U;

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
    msg.setTimeStamp(0.2687629335030338);
    msg.setSource(3999U);
    msg.setSourceEntity(247U);
    msg.setDestination(49466U);
    msg.setDestinationEntity(245U);
    msg.path_ref = 4200099258U;
    msg.start_lat = 0.7140338087075022;
    msg.start_lon = 0.7168699852644881;
    msg.start_z = 0.13791579149963762;
    msg.start_z_units = 87U;
    msg.end_lat = 0.8980664554162688;
    msg.end_lon = 0.6800216475769703;
    msg.end_z = 0.9987175035999123;
    msg.end_z_units = 50U;
    msg.speed = 0.03916406003451711;
    msg.speed_units = 193U;
    msg.lradius = 0.9817920627850942;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.8635672036063904);
    msg.setSource(11906U);
    msg.setSourceEntity(126U);
    msg.setDestination(1699U);
    msg.setDestinationEntity(160U);
    msg.x = 0.7218338767055822;
    msg.y = 0.18682826268441488;
    msg.z = 0.6518520286529519;
    msg.k = 0.4433166754600578;
    msg.m = 0.7760026153866187;
    msg.n = 0.30157524167049776;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.9468016141667339);
    msg.setSource(7556U);
    msg.setSourceEntity(228U);
    msg.setDestination(34967U);
    msg.setDestinationEntity(119U);
    msg.x = 0.8204442720882837;
    msg.y = 0.21312515635293705;
    msg.z = 0.8848628956265123;
    msg.k = 0.27512320519980915;
    msg.m = 0.8678080919704738;
    msg.n = 0.7847442128234318;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.015457881906371429);
    msg.setSource(16178U);
    msg.setSourceEntity(28U);
    msg.setDestination(9754U);
    msg.setDestinationEntity(201U);
    msg.x = 0.8510624856417858;
    msg.y = 0.8449483682075926;
    msg.z = 0.40313995246090195;
    msg.k = 0.9274486129938813;
    msg.m = 0.5253626976362948;
    msg.n = 0.6617863439647399;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.9663946176640897);
    msg.setSource(57496U);
    msg.setSourceEntity(111U);
    msg.setDestination(51995U);
    msg.setDestinationEntity(252U);
    msg.value = 0.4631390370300885;

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
    msg.setTimeStamp(0.007604991241692338);
    msg.setSource(36490U);
    msg.setSourceEntity(147U);
    msg.setDestination(8580U);
    msg.setDestinationEntity(217U);
    msg.value = 0.38235274608723857;

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
    msg.setTimeStamp(0.9601882446657273);
    msg.setSource(25386U);
    msg.setSourceEntity(106U);
    msg.setDestination(2665U);
    msg.setDestinationEntity(73U);
    msg.value = 0.18277867494336097;

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
    msg.setTimeStamp(0.9912895085782246);
    msg.setSource(16930U);
    msg.setSourceEntity(192U);
    msg.setDestination(18208U);
    msg.setDestinationEntity(232U);
    msg.u = 0.6450141761868751;
    msg.v = 0.15379776214081797;
    msg.w = 0.07973237313351389;
    msg.p = 0.7446458989979319;
    msg.q = 0.7440626979186372;
    msg.r = 0.45742708566472035;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.8303669200672322);
    msg.setSource(60403U);
    msg.setSourceEntity(212U);
    msg.setDestination(20770U);
    msg.setDestinationEntity(118U);
    msg.u = 0.03997366794320922;
    msg.v = 0.2697969123927495;
    msg.w = 0.4145083521272861;
    msg.p = 0.7780238902009632;
    msg.q = 0.21969146006541862;
    msg.r = 0.27531988771602844;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.4781306821781728);
    msg.setSource(36330U);
    msg.setSourceEntity(199U);
    msg.setDestination(52307U);
    msg.setDestinationEntity(223U);
    msg.u = 0.08565214251953734;
    msg.v = 0.11079308168665147;
    msg.w = 0.4665152094795588;
    msg.p = 0.6460868783460743;
    msg.q = 0.6013001004384333;
    msg.r = 0.5279222187996288;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.33578037456319076);
    msg.setSource(585U);
    msg.setSourceEntity(163U);
    msg.setDestination(14626U);
    msg.setDestinationEntity(90U);
    msg.path_ref = 669477903U;
    msg.start_lat = 0.3380845446076449;
    msg.start_lon = 0.8137725120952171;
    msg.start_z = 0.4707041982665606;
    msg.start_z_units = 220U;
    msg.end_lat = 0.6652215577320604;
    msg.end_lon = 0.18262181238840647;
    msg.end_z = 0.7308304539107184;
    msg.end_z_units = 172U;
    msg.lradius = 0.822496652189311;
    msg.flags = 62U;
    msg.x = 0.7757014727873655;
    msg.y = 0.722341153981858;
    msg.z = 0.612781364692155;
    msg.vx = 0.3264746745259187;
    msg.vy = 0.2456996084482288;
    msg.vz = 0.7956105176455612;
    msg.course_error = 0.7129564484630984;
    msg.eta = 35678U;

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
    msg.setTimeStamp(0.24111954876329544);
    msg.setSource(45388U);
    msg.setSourceEntity(212U);
    msg.setDestination(2849U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 290055004U;
    msg.start_lat = 0.7416264839198615;
    msg.start_lon = 0.04697414992870341;
    msg.start_z = 0.526056506754622;
    msg.start_z_units = 0U;
    msg.end_lat = 0.8667209228524522;
    msg.end_lon = 0.054119809685169384;
    msg.end_z = 0.06800058501771788;
    msg.end_z_units = 186U;
    msg.lradius = 0.6090551803891233;
    msg.flags = 10U;
    msg.x = 0.35785535052668505;
    msg.y = 0.552048746378771;
    msg.z = 0.029419128723882415;
    msg.vx = 0.8424703242361777;
    msg.vy = 0.23116083730610426;
    msg.vz = 0.9746564775652234;
    msg.course_error = 0.004830880538404192;
    msg.eta = 54521U;

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
    msg.setTimeStamp(0.3832331917666907);
    msg.setSource(45997U);
    msg.setSourceEntity(237U);
    msg.setDestination(6340U);
    msg.setDestinationEntity(127U);
    msg.path_ref = 3491355000U;
    msg.start_lat = 0.5469268578332365;
    msg.start_lon = 0.42480441158116156;
    msg.start_z = 0.6418407312129576;
    msg.start_z_units = 176U;
    msg.end_lat = 0.720601947998;
    msg.end_lon = 0.47786455047714627;
    msg.end_z = 0.9479223034142529;
    msg.end_z_units = 7U;
    msg.lradius = 0.39762134793258397;
    msg.flags = 172U;
    msg.x = 0.9681876106935007;
    msg.y = 0.3900274448790635;
    msg.z = 0.20741760443029855;
    msg.vx = 0.47651721935522184;
    msg.vy = 0.9763799014534177;
    msg.vz = 0.993314419976299;
    msg.course_error = 0.34155285355505416;
    msg.eta = 13748U;

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
    msg.setTimeStamp(0.37798780191277703);
    msg.setSource(46129U);
    msg.setSourceEntity(7U);
    msg.setDestination(21406U);
    msg.setDestinationEntity(172U);
    msg.k = 0.22319263486222007;
    msg.m = 0.129048795803702;
    msg.n = 0.188469555783507;

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
    msg.setTimeStamp(0.5927852352561747);
    msg.setSource(43596U);
    msg.setSourceEntity(236U);
    msg.setDestination(27562U);
    msg.setDestinationEntity(243U);
    msg.k = 0.6044360370334299;
    msg.m = 0.9134549100472118;
    msg.n = 0.6918945200768728;

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
    msg.setTimeStamp(0.7693405134992503);
    msg.setSource(58906U);
    msg.setSourceEntity(156U);
    msg.setDestination(19177U);
    msg.setDestinationEntity(188U);
    msg.k = 0.39461774548908635;
    msg.m = 0.5075131954518008;
    msg.n = 0.6102147670680974;

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
    msg.setTimeStamp(0.6166674821998754);
    msg.setSource(45260U);
    msg.setSourceEntity(132U);
    msg.setDestination(3875U);
    msg.setDestinationEntity(193U);
    msg.p = 0.5466784433055262;
    msg.i = 0.4667517551891375;
    msg.d = 0.39772972045387955;
    msg.a = 0.32367186649052027;

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
    msg.setTimeStamp(0.3272147508778166);
    msg.setSource(61224U);
    msg.setSourceEntity(44U);
    msg.setDestination(4403U);
    msg.setDestinationEntity(176U);
    msg.p = 0.9533064916251698;
    msg.i = 0.6432002160030669;
    msg.d = 0.3005801904037684;
    msg.a = 0.9772053186673785;

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
    msg.setTimeStamp(0.05370200851183182);
    msg.setSource(19425U);
    msg.setSourceEntity(238U);
    msg.setDestination(3576U);
    msg.setDestinationEntity(42U);
    msg.p = 0.881272734624161;
    msg.i = 0.3995959245782029;
    msg.d = 0.015460269618535527;
    msg.a = 0.21137507381128606;

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
    msg.setTimeStamp(0.6972542282056788);
    msg.setSource(23973U);
    msg.setSourceEntity(57U);
    msg.setDestination(13441U);
    msg.setDestinationEntity(93U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.7882644399105616);
    msg.setSource(51820U);
    msg.setSourceEntity(60U);
    msg.setDestination(14068U);
    msg.setDestinationEntity(242U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.9090139938238754);
    msg.setSource(28147U);
    msg.setSourceEntity(163U);
    msg.setDestination(24253U);
    msg.setDestinationEntity(122U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.07918304217441274);
    msg.setSource(16302U);
    msg.setSourceEntity(17U);
    msg.setDestination(41553U);
    msg.setDestinationEntity(9U);
    msg.x = 0.2814985088079254;
    msg.y = 0.11240128704173802;
    msg.z = 0.7366592287255842;
    msg.vx = 0.9136778615760207;
    msg.vy = 0.7377846093298449;
    msg.vz = 0.7897499704409993;
    msg.ax = 0.3327993393627633;
    msg.ay = 0.28387569855820416;
    msg.az = 0.4559953192987116;
    msg.flags = 7812U;

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
    msg.setTimeStamp(0.15089708631295995);
    msg.setSource(9194U);
    msg.setSourceEntity(153U);
    msg.setDestination(43966U);
    msg.setDestinationEntity(84U);
    msg.x = 0.9154938400571113;
    msg.y = 0.9997835024711313;
    msg.z = 0.99605534953035;
    msg.vx = 0.11267746098325249;
    msg.vy = 0.6518469669992855;
    msg.vz = 0.27939438014402374;
    msg.ax = 0.8277475917772577;
    msg.ay = 0.5669033239450237;
    msg.az = 0.49520708285591464;
    msg.flags = 35368U;

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
    msg.setTimeStamp(0.9549647777016597);
    msg.setSource(32119U);
    msg.setSourceEntity(86U);
    msg.setDestination(55904U);
    msg.setDestinationEntity(81U);
    msg.x = 0.25566350589336484;
    msg.y = 0.19624587334714827;
    msg.z = 0.47690751762854555;
    msg.vx = 0.31454108124062685;
    msg.vy = 0.321981652987117;
    msg.vz = 0.2427313159126313;
    msg.ax = 0.28908840826469473;
    msg.ay = 0.6947136218803959;
    msg.az = 0.7814736342823042;
    msg.flags = 12928U;

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
    msg.setTimeStamp(0.6406219625122095);
    msg.setSource(16414U);
    msg.setSourceEntity(121U);
    msg.setDestination(25996U);
    msg.setDestinationEntity(127U);
    msg.value = 0.11619902090178702;

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
    msg.setTimeStamp(0.19090934183821884);
    msg.setSource(7830U);
    msg.setSourceEntity(226U);
    msg.setDestination(23722U);
    msg.setDestinationEntity(39U);
    msg.value = 0.36114785741637123;

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
    msg.setTimeStamp(0.5208325268877294);
    msg.setSource(14807U);
    msg.setSourceEntity(234U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6848757156786583;

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
    msg.setTimeStamp(0.44350661808325065);
    msg.setSource(24228U);
    msg.setSourceEntity(34U);
    msg.setDestination(64935U);
    msg.setDestinationEntity(153U);
    msg.timeout = 44727U;
    msg.lat = 0.7018470983788698;
    msg.lon = 0.8596601922214101;
    msg.z = 0.25472542122317876;
    msg.z_units = 185U;
    msg.speed = 0.0308651859377711;
    msg.speed_units = 12U;
    msg.roll = 0.8690418804887279;
    msg.pitch = 0.9824453082274326;
    msg.yaw = 0.8678749882595916;
    msg.custom.assign("UMMRTBFAZONPWHDYDZCJBMSB");

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
    msg.setTimeStamp(0.8513614239768851);
    msg.setSource(8707U);
    msg.setSourceEntity(75U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(109U);
    msg.timeout = 34283U;
    msg.lat = 0.25273522537152826;
    msg.lon = 0.34160993051297284;
    msg.z = 0.2863269180831075;
    msg.z_units = 94U;
    msg.speed = 0.47287668855060994;
    msg.speed_units = 109U;
    msg.roll = 0.7515485389309943;
    msg.pitch = 0.394103292756698;
    msg.yaw = 0.430030540810848;
    msg.custom.assign("XENKKHZQRLHBFALSDZMDCRGGAYYJEHZJRMSFAPUIXMQZFQEUOPKYVKYS");

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
    msg.setTimeStamp(0.3807335658518787);
    msg.setSource(7544U);
    msg.setSourceEntity(149U);
    msg.setDestination(54376U);
    msg.setDestinationEntity(93U);
    msg.timeout = 11519U;
    msg.lat = 0.8877847355348041;
    msg.lon = 0.5979668932672484;
    msg.z = 0.6564730445933666;
    msg.z_units = 82U;
    msg.speed = 0.17326489426839908;
    msg.speed_units = 195U;
    msg.roll = 0.16213581536614674;
    msg.pitch = 0.049108070864367304;
    msg.yaw = 0.938333273656713;
    msg.custom.assign("RLJBCTOIPBEVBWAPSYVJGAYIWKPMFWTCCHZGCXYVYIOYMOFXGSMXXINZMLSFIOJQZBNDEJONBOYVKAGVDDFHHZNUPBHKTQVOKERGPPHUUGSUFDRCDHQLHPMXLRRLLDBYZDGISMTZRNJBALYRQWUYWODZEAJGMEXTP");

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
    msg.setTimeStamp(0.6560373431735561);
    msg.setSource(18397U);
    msg.setSourceEntity(145U);
    msg.setDestination(41091U);
    msg.setDestinationEntity(26U);
    msg.timeout = 32322U;
    msg.lat = 0.915637361761443;
    msg.lon = 0.5111518566397882;
    msg.z = 0.3433817511080315;
    msg.z_units = 232U;
    msg.speed = 0.6628522782515633;
    msg.speed_units = 251U;
    msg.duration = 5400U;
    msg.radius = 0.5639244538631676;
    msg.flags = 12U;
    msg.custom.assign("CKAPZUAMVCBBOQJUXOZRBJZDZDVJXTOGPKHHKRAPWIJDBKCWECUQNCQMPIJDZ");

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
    msg.setTimeStamp(0.41245855276574883);
    msg.setSource(22999U);
    msg.setSourceEntity(111U);
    msg.setDestination(16234U);
    msg.setDestinationEntity(225U);
    msg.timeout = 58437U;
    msg.lat = 0.4668333883311053;
    msg.lon = 0.7679376151547195;
    msg.z = 0.1988513274435071;
    msg.z_units = 108U;
    msg.speed = 0.11214237194894117;
    msg.speed_units = 182U;
    msg.duration = 46899U;
    msg.radius = 0.09051532728197287;
    msg.flags = 199U;
    msg.custom.assign("XHKSYCNQZGBGYIRXHJKYIPOSHQRDMVEMBHJDUBGVPLDLVLTNMHQLDANCEUEFWLNMJSJKXFRORFUUODFEATRTHJTBQMGSZSHUEWTNLYRAXWCIGFCOPUHVVMUNOGNZLGVDLPQABZYCFGWTIBWKFIDXQJDVBLBJPWNFPYEARMPZQEXQICXSDUQKICNIYQCTPPKWRUNXEWLRJTOSPEAMFASJVZMCXAHKSYZHYRKTTMBOWFOGZOJAZV");

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
    msg.setTimeStamp(0.218526349559239);
    msg.setSource(54434U);
    msg.setSourceEntity(169U);
    msg.setDestination(8689U);
    msg.setDestinationEntity(130U);
    msg.timeout = 17795U;
    msg.lat = 0.354640191217089;
    msg.lon = 0.24502536267039177;
    msg.z = 0.8040075564503859;
    msg.z_units = 110U;
    msg.speed = 0.539946115501342;
    msg.speed_units = 239U;
    msg.duration = 64225U;
    msg.radius = 0.5044134319919216;
    msg.flags = 21U;
    msg.custom.assign("AHXPAINSRBXZYKIDKUUPXJGBYTAUJVUTXEBVAKBKDMHOXVQIMSBCQZOPRRFGBNQLQWFEQSFCGBHWEPPJYKDTUNNCAHSCJGVTDBSLWDHOOINFJFRWERQLYUFEZLTEOYMSOZUYZYIPXKJCHDVGWBOKHEGASTWINMJMOHVLYFTAYSNMLRZTMEQCUATCZUWVKLCCJKOFWMGDPXDNJRZTXRALJIIVFMBW");

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
    msg.setTimeStamp(0.12570284471366056);
    msg.setSource(17238U);
    msg.setSourceEntity(246U);
    msg.setDestination(12826U);
    msg.setDestinationEntity(154U);
    msg.custom.assign("OSIOIQDZRTULZGWWAAZGLRHVLPVSUMABYXWEXCTJIPYMOKLMJMCDKICRXJYVPIWAVXJPKDYMECFIUCOBIPBBHELGNKXWMZBOVBMUWRYNNTXGPV");

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
    msg.setTimeStamp(0.49835802019456044);
    msg.setSource(33045U);
    msg.setSourceEntity(37U);
    msg.setDestination(30687U);
    msg.setDestinationEntity(95U);
    msg.custom.assign("KWPZFXBCHOFSYRBIKCAAYSTLBMSWQYLXRVGVNSPECRPDMGNTDCXFH");

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
    msg.setTimeStamp(0.4102388442930339);
    msg.setSource(59084U);
    msg.setSourceEntity(167U);
    msg.setDestination(25830U);
    msg.setDestinationEntity(172U);
    msg.custom.assign("YPZTOOSKCEXXMWZMIVACMJCJMWWQBGABXIVCMRUUTBZKNLLDFJWRCOWMFLDRAVOTTODKWODJBRWNSTBKNYEUNCKIXVFOTQHFZKVGOATFSUHAXPNZHVJVHAPHNAUVQKESXBWUUPRBLBDZRRDHNYFJPO");

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
    msg.setTimeStamp(0.05300737707517644);
    msg.setSource(54981U);
    msg.setSourceEntity(26U);
    msg.setDestination(28592U);
    msg.setDestinationEntity(172U);
    msg.timeout = 25937U;
    msg.lat = 0.8760485809572229;
    msg.lon = 0.5872074419724124;
    msg.z = 0.472161835136656;
    msg.z_units = 165U;
    msg.duration = 21211U;
    msg.speed = 0.7091152368461494;
    msg.speed_units = 202U;
    msg.type = 88U;
    msg.radius = 0.5481862157200544;
    msg.length = 0.8799375643564041;
    msg.bearing = 0.6356436287139621;
    msg.direction = 241U;
    msg.custom.assign("XCZQPLBOSNFHEKCYWIASMPGNQIXQPRLGIUZRQFFORHVWUAROQTRBGNVWMWHAPZKNPUMTBLCKXJTLDEDS");

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
    msg.setTimeStamp(0.04232459562021196);
    msg.setSource(5338U);
    msg.setSourceEntity(30U);
    msg.setDestination(54112U);
    msg.setDestinationEntity(233U);
    msg.timeout = 332U;
    msg.lat = 0.8929651157931174;
    msg.lon = 0.5736899631036387;
    msg.z = 0.8574577291062582;
    msg.z_units = 112U;
    msg.duration = 64995U;
    msg.speed = 0.7512767258722838;
    msg.speed_units = 160U;
    msg.type = 164U;
    msg.radius = 0.049561297058951403;
    msg.length = 0.2896592324378503;
    msg.bearing = 0.945868274173587;
    msg.direction = 100U;
    msg.custom.assign("LUPHIZHDHAOCUZUIKAZLEOAEDGJRBQWLYKSHOXPWWLOYKQZNYVSYEKNTDBJFOPNWDJGFASLKLCCXSFTRDQHLICCABDDWHGGQZVJBTRMWXJFEHUAAFFCWMZRGEAZIJYWYKTDMZVJXUIQVNIPETMMHTNXOYPSRJFOPLVPXRTINOKEFHYQLZTSYXTMVCQIQU");

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
    msg.setTimeStamp(0.07877217053557206);
    msg.setSource(46327U);
    msg.setSourceEntity(179U);
    msg.setDestination(26234U);
    msg.setDestinationEntity(193U);
    msg.timeout = 5381U;
    msg.lat = 0.23807465485831159;
    msg.lon = 0.37960649333720076;
    msg.z = 0.3448884079158776;
    msg.z_units = 80U;
    msg.duration = 34323U;
    msg.speed = 0.06115672835262709;
    msg.speed_units = 36U;
    msg.type = 98U;
    msg.radius = 0.05966268918989126;
    msg.length = 0.7572338531198584;
    msg.bearing = 0.9885035388304673;
    msg.direction = 242U;
    msg.custom.assign("FKJHVFQMMCMTLNRRPZYNXKBLMQQOEGWAUTTKTUBUEZSBJQVBQICSDYVVEVQNTPCFSYBFHEQOORIIWXVKKLQCUAIISKECRMXJJPGFNKWOLAHMUESZZEJUFOFZHOHFVIRPLGRDMGDTIMXDJCGOWNUU");

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
    msg.setTimeStamp(0.36620248746291295);
    msg.setSource(19716U);
    msg.setSourceEntity(147U);
    msg.setDestination(57136U);
    msg.setDestinationEntity(202U);
    msg.duration = 15031U;
    msg.custom.assign("YQDLWSWQBBRENKRVFHCKNFIKHUAFOGRJCECJAZTRDCJKJGUATEDNXZICNWZMSDGEOXNZZXJINDHIJXYSLQZOHQKEWOAXKWUDTJCGEELQGT");

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
    msg.setTimeStamp(0.28178073996854136);
    msg.setSource(258U);
    msg.setSourceEntity(191U);
    msg.setDestination(54374U);
    msg.setDestinationEntity(157U);
    msg.duration = 17316U;
    msg.custom.assign("ARFLDCVLWLDLLAUAYCXF");

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
    msg.setTimeStamp(0.07137383282058896);
    msg.setSource(26610U);
    msg.setSourceEntity(141U);
    msg.setDestination(7558U);
    msg.setDestinationEntity(105U);
    msg.duration = 19725U;
    msg.custom.assign("VKSCRERANHBMJONDOELIZZTNHNJIKPPHLDXZQRUVMCBPPGIWSYZJAEXJVYWSYTLWHUGQYUBPZXGFCUXGTHTXQRBSDBELVLKEWYMJSEJOEYFWGMZSESFVRAIAKAYSKCYIJDWBEGFGCTOMCROQUFIOALCHGZHZBMWMKOCZDYDOPURMXWQTSTVAFXPVFXDQGTUTQWBNQZGRIXIJDPNOVJLVY");

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
    msg.setTimeStamp(0.21049562999267013);
    msg.setSource(40085U);
    msg.setSourceEntity(214U);
    msg.setDestination(38619U);
    msg.setDestinationEntity(165U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7190471387546781;
    tmp_msg_0.z_units = 234U;
    msg.control.set(tmp_msg_0);
    msg.duration = 41443U;
    msg.custom.assign("LFWMZXJJKFIURUGJLVXHNTARDOQBSPFIZXKURCEEZKSUDNFGZWWPJQWYVTXDWVUBEFHMQJGSDCFYKAVBOMMOCVLEXMGVVRNSRRCPAPNHYGVPCZFMDGYNTHAZLDJOQJUAOQBFWUTWCIYH");

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
    msg.setTimeStamp(0.07547744594207784);
    msg.setSource(20221U);
    msg.setSourceEntity(52U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(208U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.21726353716319435;
    tmp_msg_0.z_units = 78U;
    msg.control.set(tmp_msg_0);
    msg.duration = 26503U;
    msg.custom.assign("RSVKVUBWGNRMDZPXDGCGWAAXOQBHJCKNOVCVCBMFZNGGJPR");

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
    msg.setTimeStamp(0.4864187734866987);
    msg.setSource(58688U);
    msg.setSourceEntity(169U);
    msg.setDestination(54778U);
    msg.setDestinationEntity(163U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6576830798734339;
    tmp_msg_0.speed_units = 172U;
    msg.control.set(tmp_msg_0);
    msg.duration = 63273U;
    msg.custom.assign("HBYHKZVOESBGJQZUALIALKVPJLFWWBMCJETVHRMKFXZCNZPXGPYIHPFVMMLIMGAPOURDOHLTIRSCBCFRUWCBVHDAXSHSJCKMDMCGXTLNTWSCUKRJTXOFGBEXDDZSPFYFYRQZPSHBAMZESINPSRUQUOJQRDYOXHTTTGQGJWDJLWVCPFKKUNII");

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
    msg.setTimeStamp(0.3011611298398782);
    msg.setSource(1904U);
    msg.setSourceEntity(153U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(16U);
    msg.timeout = 55658U;
    msg.lat = 0.04070609853731744;
    msg.lon = 0.058955675310204736;
    msg.z = 0.4974540193093371;
    msg.z_units = 215U;
    msg.speed = 0.1872033799080045;
    msg.speed_units = 153U;
    msg.bearing = 0.12237375233594339;
    msg.cross_angle = 0.2820534458301941;
    msg.width = 0.6964342524239954;
    msg.length = 0.1594897353532596;
    msg.hstep = 0.8418642443032239;
    msg.coff = 235U;
    msg.alternation = 88U;
    msg.flags = 131U;
    msg.custom.assign("RXPGFIPMLMYSLPJAZKEAFFJWNIOJTRPVLKICQPIGNCZZCDXJZTSPCSRFBHZFOZKVAZOAKWENLWDWIMYO");

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
    msg.setTimeStamp(0.5994044093304071);
    msg.setSource(61553U);
    msg.setSourceEntity(110U);
    msg.setDestination(23679U);
    msg.setDestinationEntity(45U);
    msg.timeout = 27056U;
    msg.lat = 0.3056946326916349;
    msg.lon = 0.9838372928829656;
    msg.z = 0.1191854076291996;
    msg.z_units = 124U;
    msg.speed = 0.2930627921578911;
    msg.speed_units = 219U;
    msg.bearing = 0.406780761952684;
    msg.cross_angle = 0.7539433212259063;
    msg.width = 0.6542296596038172;
    msg.length = 0.7234650116246855;
    msg.hstep = 0.8989635681600342;
    msg.coff = 30U;
    msg.alternation = 190U;
    msg.flags = 212U;
    msg.custom.assign("NCITWYCDCTPDDGHHFVAACTBFOTRZWDUXMWVIDSBRMBSVGPSDKDMYYJVONBLZJYCLXRMXSEMGKFGOILEWILGMEQZKCJMHKKHPTVDIKYJTZYRMZWWXAHZBVVKEYBAGGMOBXYPRQVIXFTPHWVNQCIUOQEYJEOAAEQSKLILLORSVAFTCAKQGURBRHPBQNDJUZTZNFNUXWNYRHNUEAMPXTSS");

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
    msg.setTimeStamp(0.33123929215951076);
    msg.setSource(10316U);
    msg.setSourceEntity(75U);
    msg.setDestination(28160U);
    msg.setDestinationEntity(48U);
    msg.timeout = 47645U;
    msg.lat = 0.47405181706003474;
    msg.lon = 0.0660015623483241;
    msg.z = 0.1653201241110266;
    msg.z_units = 26U;
    msg.speed = 0.30326280023420715;
    msg.speed_units = 59U;
    msg.bearing = 0.6459349828859369;
    msg.cross_angle = 0.9073770833246014;
    msg.width = 0.714323323946619;
    msg.length = 0.4289658631605725;
    msg.hstep = 0.5484594336369365;
    msg.coff = 113U;
    msg.alternation = 87U;
    msg.flags = 153U;
    msg.custom.assign("UNCKSPODNNBRSWPXQ");

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
    msg.setTimeStamp(0.990146866138775);
    msg.setSource(42255U);
    msg.setSourceEntity(56U);
    msg.setDestination(36749U);
    msg.setDestinationEntity(54U);
    msg.timeout = 28591U;
    msg.lat = 0.04295898805406184;
    msg.lon = 0.684603348746857;
    msg.z = 0.8603058317166709;
    msg.z_units = 135U;
    msg.speed = 0.8533487342870949;
    msg.speed_units = 115U;
    msg.custom.assign("EZJGSIJEIDXFPFMHUSLWUOQXSSDWFTAQLETVTHGUVUUXHOEHLFQITTBEVGYHZRXMOBMEJRMURCBMJFRRPUIGKCOTAZLQNNZUWLTCTCIAZJNLYJWQSZYWJWXNKBHXUKOGDAT");

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
    msg.setTimeStamp(0.6058633624159724);
    msg.setSource(41127U);
    msg.setSourceEntity(98U);
    msg.setDestination(8597U);
    msg.setDestinationEntity(64U);
    msg.timeout = 47136U;
    msg.lat = 0.6722758995104934;
    msg.lon = 0.6045910627253391;
    msg.z = 0.061617355547214925;
    msg.z_units = 209U;
    msg.speed = 0.2412980257911964;
    msg.speed_units = 105U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.46157349521336666;
    tmp_msg_0.y = 0.21601433920429047;
    tmp_msg_0.z = 0.4080719365675909;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QDEFYVIXMWOWYBKVMZDBTFPXPNRRKSNCQLBLTNGT");

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
    msg.setTimeStamp(0.522133707911493);
    msg.setSource(61389U);
    msg.setSourceEntity(154U);
    msg.setDestination(12420U);
    msg.setDestinationEntity(175U);
    msg.timeout = 57225U;
    msg.lat = 0.8083836603723714;
    msg.lon = 0.8336358486815202;
    msg.z = 0.3857754152095162;
    msg.z_units = 50U;
    msg.speed = 0.7225706252103402;
    msg.speed_units = 78U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5781365887474575;
    tmp_msg_0.y = 0.9940609797917295;
    tmp_msg_0.z = 0.600858806907872;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BZUREJEDZOXJPAOXQDCNHTMLMYFJUCUITEZWUSCKUKCKFYBTRQPOHBZJLKOFNAAZWMZGPAQHBWYLFPOREDIWWXXJBDQSNYQWWBVVCUOWMG");

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
    msg.setTimeStamp(0.7798592925761202);
    msg.setSource(51641U);
    msg.setSourceEntity(197U);
    msg.setDestination(41765U);
    msg.setDestinationEntity(171U);
    msg.x = 0.7472249984256207;
    msg.y = 0.6080175317872398;
    msg.z = 0.09374793513752255;

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
    msg.setTimeStamp(0.9453136687714347);
    msg.setSource(64072U);
    msg.setSourceEntity(125U);
    msg.setDestination(48088U);
    msg.setDestinationEntity(251U);
    msg.x = 0.2562859073317142;
    msg.y = 0.01620206555095538;
    msg.z = 0.25248144670108996;

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
    msg.setTimeStamp(0.9219681515510112);
    msg.setSource(16107U);
    msg.setSourceEntity(119U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(124U);
    msg.x = 0.6240608949895031;
    msg.y = 0.14173771531668766;
    msg.z = 0.24087573282240549;

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
    msg.setTimeStamp(0.7200016730945099);
    msg.setSource(31577U);
    msg.setSourceEntity(37U);
    msg.setDestination(25319U);
    msg.setDestinationEntity(8U);
    msg.timeout = 11327U;
    msg.lat = 0.754908910929579;
    msg.lon = 0.9774218715473283;
    msg.z = 0.8695398423761403;
    msg.z_units = 188U;
    msg.amplitude = 0.3764648462474781;
    msg.pitch = 0.0054272417386121985;
    msg.speed = 0.7760764029175379;
    msg.speed_units = 36U;
    msg.custom.assign("TLNTPKSDWCDPQAAIFGABKBXOHMZGXJEEBQRTCBCHMRXEQFNAPYVMMLPSXCZVAKYUCYPSUCTNJCTUSDFURFORDFJJCIIVTNOMKGQGEMEWOKLAZPDSGNYBNHUIULMYNLKVZXHKLREIWAGJLDJXYPQDMC");

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
    msg.setTimeStamp(0.20177121411975107);
    msg.setSource(47645U);
    msg.setSourceEntity(251U);
    msg.setDestination(23091U);
    msg.setDestinationEntity(7U);
    msg.timeout = 3065U;
    msg.lat = 0.260667202131311;
    msg.lon = 0.3436916456598178;
    msg.z = 0.053520983444495296;
    msg.z_units = 154U;
    msg.amplitude = 0.8581412108649547;
    msg.pitch = 0.04524411517273852;
    msg.speed = 0.5176288476230548;
    msg.speed_units = 140U;
    msg.custom.assign("EZMFKDYNDYYYIOCTFQEXCHBXXKOKTQBJKTDULDPBKZCPLUVKGVVILVOMGPGJJRPUSWRXERZAFENMXOAUBSMJALVYUVUNXXPZQKMPBRBZSXGNUNZRJNDYTCAFMCPCFLIWZHDJMLMARGEWGSFRLHWTPKTHBQAPUEGEGJIZZEOLSNPFQDRBHECXDFTZWFKNUKNTFWVXRWMDECIIYSQWOIJBTHJHSGISAGLMQBYQVI");

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
    msg.setTimeStamp(0.6439816296406938);
    msg.setSource(37518U);
    msg.setSourceEntity(14U);
    msg.setDestination(19231U);
    msg.setDestinationEntity(69U);
    msg.timeout = 55656U;
    msg.lat = 0.0996994852341927;
    msg.lon = 0.22969178067327123;
    msg.z = 0.5800616271176475;
    msg.z_units = 148U;
    msg.amplitude = 0.44921905756688774;
    msg.pitch = 0.9363989587662435;
    msg.speed = 0.15893636712796233;
    msg.speed_units = 164U;
    msg.custom.assign("SLZMBLKNDMHRDMUWKZFOKJSOQVOXBJUDOARTJOGBXMIVQXGDNJMEJQSFSQOAMBETIWOYILMYYISXGZPEGWEQVHWDPZNMZSXPGJTYUIRALSQTBRTXCSSYDYAGYMQGXJAAAFTXCPIUJXTOWDVIEWHRDTFZBIBNBGKCUAKAS");

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
    msg.setTimeStamp(0.26267403137147105);
    msg.setSource(39492U);
    msg.setSourceEntity(176U);
    msg.setDestination(58128U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.6354776304111512);
    msg.setSource(8980U);
    msg.setSourceEntity(124U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.8064561045137689);
    msg.setSource(58513U);
    msg.setSourceEntity(48U);
    msg.setDestination(57101U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.3048428832048875);
    msg.setSource(19725U);
    msg.setSourceEntity(178U);
    msg.setDestination(28357U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.8023478661643991;
    msg.lon = 0.7841347393783691;
    msg.z = 0.5849008705502291;
    msg.z_units = 36U;
    msg.radius = 0.2068245762422276;
    msg.duration = 24972U;
    msg.speed = 0.7271119138468288;
    msg.speed_units = 86U;
    msg.custom.assign("TMGFXVAIDOAEUUGRQQVDMOZSJKCCZNNG");

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
    msg.setTimeStamp(0.440016462602806);
    msg.setSource(53935U);
    msg.setSourceEntity(71U);
    msg.setDestination(18851U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.5400198849378552;
    msg.lon = 0.4477036704738512;
    msg.z = 0.30596588800420144;
    msg.z_units = 64U;
    msg.radius = 0.199903940751342;
    msg.duration = 29975U;
    msg.speed = 0.738008831507522;
    msg.speed_units = 26U;
    msg.custom.assign("SZGZRQRGMPSJXAVFQFUQFHVYYDSOVMCXMYJTLDVEYVJASOQTUMAKUOGFW");

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
    msg.setTimeStamp(0.8892198668644908);
    msg.setSource(26608U);
    msg.setSourceEntity(217U);
    msg.setDestination(21854U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.12772185844115924;
    msg.lon = 0.39444592950895185;
    msg.z = 0.7309135392360425;
    msg.z_units = 182U;
    msg.radius = 0.58968784284236;
    msg.duration = 37534U;
    msg.speed = 0.8825480602647992;
    msg.speed_units = 34U;
    msg.custom.assign("ISBLOYQUJMIRQGZMUWYWHBVDHYDXWFFIYJLPQYCZIRRTKFUYNQVPEZPPLVXKNJOIZNUDFOEEFUXTXGFPTPSTBDMRAOKZJD");

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
    msg.setTimeStamp(0.16523564391058487);
    msg.setSource(13773U);
    msg.setSourceEntity(164U);
    msg.setDestination(63941U);
    msg.setDestinationEntity(246U);
    msg.timeout = 12337U;
    msg.flags = 241U;
    msg.lat = 0.5597847751787769;
    msg.lon = 0.8948851938518703;
    msg.start_z = 0.3100517581276916;
    msg.start_z_units = 249U;
    msg.end_z = 0.44047918573800604;
    msg.end_z_units = 82U;
    msg.radius = 0.34879229294185843;
    msg.speed = 0.9366326443428734;
    msg.speed_units = 173U;
    msg.custom.assign("FQJFJDZAUMPWY");

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
    msg.setTimeStamp(0.3853708185940945);
    msg.setSource(62683U);
    msg.setSourceEntity(69U);
    msg.setDestination(5632U);
    msg.setDestinationEntity(190U);
    msg.timeout = 33610U;
    msg.flags = 82U;
    msg.lat = 0.9194915737509444;
    msg.lon = 0.7300348591926809;
    msg.start_z = 0.15216706391488943;
    msg.start_z_units = 18U;
    msg.end_z = 0.938118901793651;
    msg.end_z_units = 85U;
    msg.radius = 0.6206330620305314;
    msg.speed = 0.2852192596375209;
    msg.speed_units = 104U;
    msg.custom.assign("TQCROGABUBLQSFEONQGTYUPVDLGYQUPHIUVDXEEKIMFBSX");

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
    msg.setTimeStamp(0.7525243087195412);
    msg.setSource(22238U);
    msg.setSourceEntity(144U);
    msg.setDestination(54036U);
    msg.setDestinationEntity(173U);
    msg.timeout = 16865U;
    msg.flags = 99U;
    msg.lat = 0.1898947702800553;
    msg.lon = 0.371059835169659;
    msg.start_z = 0.7961789421369319;
    msg.start_z_units = 168U;
    msg.end_z = 0.1657356474448719;
    msg.end_z_units = 234U;
    msg.radius = 0.7559106670907727;
    msg.speed = 0.4818104785810775;
    msg.speed_units = 88U;
    msg.custom.assign("RNVKFNGWSLXBQYAPXJQACXDGZHGPUWOEVVAWWLCYAKFCSXMWITAOUQDUASATFWIHDJEDQWDJXFYOZQZVHFGHKLUXPLHPZGPWIAQTOWETYLCETXYYFVESPJDJTMKIKNGNCHUOVDLRGEVZVUKOTENBIMOFCKCJDXBSKPHNAUCNIGQGLMZPXIWMQRRNQRMSLYHRMOUIFVDPFOPUZMUBJHBBNXZEACBRIZMYSTSSFBEYRJ");

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
    msg.setTimeStamp(0.5664529457700531);
    msg.setSource(41254U);
    msg.setSourceEntity(80U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(153U);
    msg.timeout = 13035U;
    msg.lat = 0.3007138818695594;
    msg.lon = 0.9910819646304815;
    msg.z = 0.3011308291462015;
    msg.z_units = 221U;
    msg.speed = 0.476325792700117;
    msg.speed_units = 195U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7874709210650092;
    tmp_msg_0.y = 0.9887094856483355;
    tmp_msg_0.z = 0.015409811190971845;
    tmp_msg_0.t = 0.837609372409616;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SOFQGHBBSDKRYHAFWACTERIYVTXZVGKFEHSVVPQPYOSNMBMDTVCIWVQTIJBOJCECWDEASIMNENJMMYNRXVDAOYFTRZXDYPXLOTNETOGZTODPHIZSCLGQZJXJZXRQMGMPILBHKUWPWNLFKDKHUFWPMXNYRGOQ");

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
    msg.setTimeStamp(0.09464180827141822);
    msg.setSource(15398U);
    msg.setSourceEntity(194U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(22U);
    msg.timeout = 44751U;
    msg.lat = 0.5211573903899582;
    msg.lon = 0.21939785228219133;
    msg.z = 0.8380094324056471;
    msg.z_units = 243U;
    msg.speed = 0.94544699336556;
    msg.speed_units = 125U;
    msg.custom.assign("SZQBKKCEOCNDHLRNYGIEGIVIDZGFGUBAWRILJVUQHKYNSDVIDOFBDAXJAQKTMPCGJYNEUMAVZITJPMCPGIXWBUSLXKYOAEIOBHMHRWBHJFVCZKCWDQWBSYXIBBEWJOJNOZW");

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
    msg.setTimeStamp(0.5192591727620735);
    msg.setSource(45416U);
    msg.setSourceEntity(195U);
    msg.setDestination(10505U);
    msg.setDestinationEntity(233U);
    msg.timeout = 1013U;
    msg.lat = 0.556910195779988;
    msg.lon = 0.6477699230050475;
    msg.z = 0.663591476757312;
    msg.z_units = 149U;
    msg.speed = 0.4888565389232371;
    msg.speed_units = 111U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.20273030411661186;
    tmp_msg_0.y = 0.6019388306272411;
    tmp_msg_0.z = 0.06693728894293993;
    tmp_msg_0.t = 0.63007211266065;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CYJBSUJYVQWQZDBOCTZVDLAZEEETQYOIZOEDFGEFJDTYERINGGALHAGVFKBUWVHSILARATIBKFXAOIUCQMJXKXSPMXCEPLXIUYMMHMZJLAJRINJOTYDZLPVBKWLRCXRMVISHCKDQNBNQDUUKHUCGJQ");

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
    msg.setTimeStamp(0.26331207432955916);
    msg.setSource(8751U);
    msg.setSourceEntity(57U);
    msg.setDestination(10639U);
    msg.setDestinationEntity(179U);
    msg.x = 0.2658521704077009;
    msg.y = 0.4207426065291746;
    msg.z = 0.9308637531788837;
    msg.t = 0.24037694914358043;

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
    msg.setTimeStamp(0.40269091332571505);
    msg.setSource(52949U);
    msg.setSourceEntity(138U);
    msg.setDestination(13995U);
    msg.setDestinationEntity(77U);
    msg.x = 0.9557735194273056;
    msg.y = 0.055134925587978056;
    msg.z = 0.4405905748354406;
    msg.t = 0.06622690196130054;

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
    msg.setTimeStamp(0.2108376199467501);
    msg.setSource(486U);
    msg.setSourceEntity(20U);
    msg.setDestination(56362U);
    msg.setDestinationEntity(17U);
    msg.x = 0.1626872177853228;
    msg.y = 0.28720377130402974;
    msg.z = 0.5992471639838962;
    msg.t = 0.9148927428108854;

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
    msg.setTimeStamp(0.7608741559521798);
    msg.setSource(47912U);
    msg.setSourceEntity(13U);
    msg.setDestination(14549U);
    msg.setDestinationEntity(163U);
    msg.timeout = 15636U;
    msg.name.assign("GKBABSDHPLUIRAWGAJFOQVUILLSCVAKCRRPCMITKZWIOXIAGJVHFHDGIZMENLNRFYERRZTQZCCMFGNVWOTHWDSJVMODDLAVPSQNTAYGFBYMWRNOPJXTOKAMWJVKYNTBQGHMDROSOWFMCBQVLVXTXYTUDZAEQYDCPKWUFBKHZENWFIQXUPEMIAUCSNYXVJLGGSRXJSNFODYJLJUTP");
    msg.custom.assign("ZSTFCISJJSKHOWPLERAJIXQIDXKYSZTIDBHYSDHDLCOFCYGFQE");

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
    msg.setTimeStamp(0.693523024771309);
    msg.setSource(38090U);
    msg.setSourceEntity(81U);
    msg.setDestination(11688U);
    msg.setDestinationEntity(104U);
    msg.timeout = 42539U;
    msg.name.assign("KTORRDVNEQF");
    msg.custom.assign("EXPOVARPLMEGNHZWIIRJNNEBIBBUILRGMCWPGBGCMKVKGTQLUIQKTZNOASEJUNRXVYJFKSVHYXHNMZFYXSPMITCXPDMSCQDIAMTHZPBHFVDQRWJMIOOPGYEBDQQNCEPTRLSZCNBEAVUDUTQGEAOCPCCSPXVJLWWHYOAKDWETRGVLYOKAGKOFFNBMMTLCBDHULWXUXNRXWFUOAJVZ");

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
    msg.setTimeStamp(0.3716746230133765);
    msg.setSource(26126U);
    msg.setSourceEntity(151U);
    msg.setDestination(41323U);
    msg.setDestinationEntity(101U);
    msg.timeout = 21084U;
    msg.name.assign("MNLLXKDDEYMMSKTENMVOGBPXCWBNCVSLICQOFFFAZEWDJFQJSNNXRKMWGQJHDZPEQEBMHBGKBUXXDYKPVCPUCMRYVTGRLELCAVBLOTDUKXIWAVWAHXYICUBEKZEACGHNPIPPZCROJGDINASTPJ");
    msg.custom.assign("IXCTVBFYYRDZWTKJYDEQEORGNNIBOWWISOYXCSGAJLYJGNKHQRAXGLAKUMP");

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
    msg.setTimeStamp(0.28568128203886733);
    msg.setSource(43993U);
    msg.setSourceEntity(25U);
    msg.setDestination(13013U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.08718828686798075;
    msg.lon = 0.1950220128180601;
    msg.z = 0.9468422488128511;
    msg.z_units = 127U;
    msg.speed = 0.12211013626062717;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3325210791428098;
    tmp_msg_0.y = 0.32018063545674735;
    tmp_msg_0.z = 0.8039184820118233;
    tmp_msg_0.t = 0.7320818814879039;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31987U;
    tmp_msg_1.off_x = 0.7213628370191902;
    tmp_msg_1.off_y = 0.9874126012280062;
    tmp_msg_1.off_z = 0.12867811201198132;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.3548807443581933;
    msg.custom.assign("XQYIJHLCXLXBSFSJFGGMGMNJLECUXUTXOBIQDADT");

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
    msg.setTimeStamp(0.5110112464223214);
    msg.setSource(57389U);
    msg.setSourceEntity(120U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.969363029917299;
    msg.lon = 0.4124267496493238;
    msg.z = 0.06767445023111562;
    msg.z_units = 128U;
    msg.speed = 0.5947390951743471;
    msg.speed_units = 71U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39309U;
    tmp_msg_0.off_x = 0.4734807927816792;
    tmp_msg_0.off_y = 0.19259128149848936;
    tmp_msg_0.off_z = 0.04178397832951153;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5083769892741532;
    msg.custom.assign("ZKEOMCHGCZLWRNVA");

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
    msg.setTimeStamp(0.07844615974735536);
    msg.setSource(27871U);
    msg.setSourceEntity(228U);
    msg.setDestination(18318U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.769114299282587;
    msg.lon = 0.8430304657862252;
    msg.z = 0.24433377296565495;
    msg.z_units = 181U;
    msg.speed = 0.18619174339685196;
    msg.speed_units = 100U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39254U;
    tmp_msg_0.off_x = 0.2828040484581674;
    tmp_msg_0.off_y = 0.7736590647914604;
    tmp_msg_0.off_z = 0.4968750767341569;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5044421928058609;
    msg.custom.assign("IQZYJRZAKOGAPNTXSGYWJBOPHXGTPXSWIDYLBRODKGUOHUAZNCMRFSHWMSWEDIVKJPFBSIVCCLLPMRHOZLUITSCGPMIDZHKEJYHWCDLHQONVXCUE");

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
    msg.setTimeStamp(0.9076192819523815);
    msg.setSource(36888U);
    msg.setSourceEntity(117U);
    msg.setDestination(36490U);
    msg.setDestinationEntity(82U);
    msg.vid = 38200U;
    msg.off_x = 0.20701899540888247;
    msg.off_y = 0.6768874154994472;
    msg.off_z = 0.990715574807324;

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
    msg.setTimeStamp(0.8749753243682522);
    msg.setSource(1973U);
    msg.setSourceEntity(127U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(44U);
    msg.vid = 33332U;
    msg.off_x = 0.8712640564460186;
    msg.off_y = 0.28536613485023676;
    msg.off_z = 0.6913276309209437;

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
    msg.setTimeStamp(0.17960777847844922);
    msg.setSource(62226U);
    msg.setSourceEntity(68U);
    msg.setDestination(703U);
    msg.setDestinationEntity(162U);
    msg.vid = 25916U;
    msg.off_x = 0.9192813279236748;
    msg.off_y = 0.5553421717322173;
    msg.off_z = 0.2951996850493389;

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
    msg.setTimeStamp(0.01657875804738529);
    msg.setSource(47752U);
    msg.setSourceEntity(164U);
    msg.setDestination(65395U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.787644124035771);
    msg.setSource(54707U);
    msg.setSourceEntity(21U);
    msg.setDestination(18468U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.9460059122946574);
    msg.setSource(32832U);
    msg.setSourceEntity(162U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.3782033772307317);
    msg.setSource(5222U);
    msg.setSourceEntity(134U);
    msg.setDestination(9900U);
    msg.setDestinationEntity(34U);
    msg.mid = 23972U;

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
    msg.setTimeStamp(0.025707062555551774);
    msg.setSource(52262U);
    msg.setSourceEntity(89U);
    msg.setDestination(47027U);
    msg.setDestinationEntity(188U);
    msg.mid = 28777U;

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
    msg.setTimeStamp(0.5590803482262561);
    msg.setSource(48556U);
    msg.setSourceEntity(115U);
    msg.setDestination(18318U);
    msg.setDestinationEntity(143U);
    msg.mid = 60984U;

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
    msg.setTimeStamp(0.43852771100756893);
    msg.setSource(53904U);
    msg.setSourceEntity(162U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(34U);
    msg.state = 140U;
    msg.eta = 1894U;
    msg.info.assign("SYEJXLJUKOGAANZVOCKPCSZXCPYTAVDFNSIWRYHFVWMGNDPODNEZGMQWCFZPELJYVHYKXUBJAPFGAVIIVPRDBQUGJJODTLHIRVQYKZFXFMOOJNLIWCRNODSEKJNYBBZUCGVEOEGCXGTDXWTZIZQERESWHDLTHHIBUQAFFPRNR");

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
    msg.setTimeStamp(0.1746053216597434);
    msg.setSource(40462U);
    msg.setSourceEntity(69U);
    msg.setDestination(54583U);
    msg.setDestinationEntity(105U);
    msg.state = 89U;
    msg.eta = 43833U;
    msg.info.assign("OFAFYMVRJKSUQLFIJKWYKBPWWXJNENVSQYGZUIMDOSNFVOOOVHWVIJTGTFCKCPEWXZSXBOUUDTUAOTMUZHEQLPRDJJEDKSCDSQGTKPFZRWIRMLXQJVQTNPBZQMKJHIHDHKXHRMVCZEGINBZJQDYIAOTRNRACKYL");

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
    msg.setTimeStamp(0.9297529080431234);
    msg.setSource(35002U);
    msg.setSourceEntity(146U);
    msg.setDestination(61027U);
    msg.setDestinationEntity(246U);
    msg.state = 138U;
    msg.eta = 4743U;
    msg.info.assign("NBWIXLUFYEAJVXFDZMJBCGFIVAXALDOZRWQCCEPXOBJHIQTQUYZMFIDGUOWQKZMAWDJBSMTADWKIZHSEEGCFNKRHBANKLAVTIRMYTLZXLBUGWECPFYJYDD");

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
    msg.setTimeStamp(0.5007868976793434);
    msg.setSource(18001U);
    msg.setSourceEntity(182U);
    msg.setDestination(35149U);
    msg.setDestinationEntity(80U);
    msg.system = 3792U;
    msg.duration = 62551U;
    msg.speed = 0.3964743328438948;
    msg.speed_units = 113U;
    msg.x = 0.5186564510483069;
    msg.y = 0.8009539000556961;
    msg.z = 0.9076294792828553;
    msg.z_units = 46U;

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
    msg.setTimeStamp(0.9026164958944125);
    msg.setSource(53318U);
    msg.setSourceEntity(225U);
    msg.setDestination(49268U);
    msg.setDestinationEntity(48U);
    msg.system = 27608U;
    msg.duration = 7105U;
    msg.speed = 0.0811934563380855;
    msg.speed_units = 117U;
    msg.x = 0.23741560043915955;
    msg.y = 0.07965434990938802;
    msg.z = 0.8607391310017496;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.8619493327419459);
    msg.setSource(25857U);
    msg.setSourceEntity(35U);
    msg.setDestination(40546U);
    msg.setDestinationEntity(149U);
    msg.system = 13168U;
    msg.duration = 6559U;
    msg.speed = 0.6955631226487451;
    msg.speed_units = 87U;
    msg.x = 0.586082617959632;
    msg.y = 0.22143536083570237;
    msg.z = 0.8424606031099922;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.748348025836789);
    msg.setSource(11564U);
    msg.setSourceEntity(254U);
    msg.setDestination(28596U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.5520440135444116;
    msg.lon = 0.06683496390622023;
    msg.speed = 0.43071042511427005;
    msg.speed_units = 131U;
    msg.duration = 6280U;
    msg.sys_a = 24366U;
    msg.sys_b = 58051U;
    msg.move_threshold = 0.6078618904583153;

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
    msg.setTimeStamp(0.7760352655291302);
    msg.setSource(25391U);
    msg.setSourceEntity(193U);
    msg.setDestination(51659U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.08592579995575922;
    msg.lon = 0.16023861010077478;
    msg.speed = 0.6002068643526833;
    msg.speed_units = 3U;
    msg.duration = 41507U;
    msg.sys_a = 33996U;
    msg.sys_b = 52315U;
    msg.move_threshold = 0.245162080372198;

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
    msg.setTimeStamp(0.9242987797105683);
    msg.setSource(30016U);
    msg.setSourceEntity(205U);
    msg.setDestination(25964U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.9119324148105536;
    msg.lon = 0.978270888761127;
    msg.speed = 0.9213710670482892;
    msg.speed_units = 194U;
    msg.duration = 51420U;
    msg.sys_a = 36255U;
    msg.sys_b = 58087U;
    msg.move_threshold = 0.5228171684835645;

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
    msg.setTimeStamp(0.20067086282284863);
    msg.setSource(32076U);
    msg.setSourceEntity(35U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.48023542699041954;
    msg.lon = 0.21875064484992313;
    msg.z = 0.5209957690164694;
    msg.z_units = 219U;
    msg.speed = 0.8833168886922759;
    msg.speed_units = 252U;
    msg.custom.assign("THUAJMSBIUWRQRMKHJOZAYDWNCOGHNPPWZVPRVIGNLWLGQVGEVAPIYKCOBLJKVBPSKKEGEIXFIJYFZLSRUIESMFYRVCUJFIWUWEVJDFZTKHMNEDSUHDDHTUEQZSZQXREILYLBJZOGTATKEKYOSCXFPXOPTDBQNFQTIMDCJTZMHPNAXMUDLVFPCGBVAMCQGXBWVBOMAWNNITUJARUZTCCRKQAHROL");

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
    msg.setTimeStamp(0.050867053903481785);
    msg.setSource(63518U);
    msg.setSourceEntity(79U);
    msg.setDestination(35986U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.6870726496930215;
    msg.lon = 0.9966748611600986;
    msg.z = 0.9383039299983562;
    msg.z_units = 112U;
    msg.speed = 0.17173186951134423;
    msg.speed_units = 218U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.05542418295957774;
    tmp_msg_0.lon = 0.27270548989633814;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EXYIFTVRSGOIOHZWWTHSIZDRGAJABMYCICZHBKUOQVWSKVPIDDVGMFGNBPGQYDAVVOAXUEBQPYWPNXFCKSLFDKBSWNUZERKLENHTNICCBLLRYYZUPOEFBPRQUHOYTGNMOXJKLMJAOECUWDJVNEAPWXOQKCZRGRGEUWHUJJXFNHKM");

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
    msg.setTimeStamp(0.9854517164721381);
    msg.setSource(25928U);
    msg.setSourceEntity(3U);
    msg.setDestination(16391U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.8716178480084776;
    msg.lon = 0.5037227854796149;
    msg.z = 0.6977530941359866;
    msg.z_units = 26U;
    msg.speed = 0.9819485155424855;
    msg.speed_units = 152U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6125355252125915;
    tmp_msg_0.lon = 0.0539176169354747;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OPKULUAYWNXQZXGPBWIHFTBKDPTWXAUGLSZCSRMCSLXV");

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
    msg.setTimeStamp(0.4735768628515119);
    msg.setSource(5041U);
    msg.setSourceEntity(14U);
    msg.setDestination(18361U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.44690075434025966;
    msg.lon = 0.9665084922496758;

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
    msg.setTimeStamp(0.3765717013980415);
    msg.setSource(57864U);
    msg.setSourceEntity(215U);
    msg.setDestination(29458U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.4224395594188668;
    msg.lon = 0.11722319385949553;

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
    msg.setTimeStamp(0.07529352703001913);
    msg.setSource(5873U);
    msg.setSourceEntity(54U);
    msg.setDestination(32073U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.5335349159787165;
    msg.lon = 0.3169793398268098;

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
    msg.setTimeStamp(0.37944055697596246);
    msg.setSource(54833U);
    msg.setSourceEntity(245U);
    msg.setDestination(1489U);
    msg.setDestinationEntity(234U);
    msg.timeout = 53982U;
    msg.lat = 0.31271581051701247;
    msg.lon = 0.4134486241622549;
    msg.z = 0.3671923309760503;
    msg.z_units = 57U;
    msg.pitch = 0.39823057697485453;
    msg.amplitude = 0.6660493644829669;
    msg.duration = 52725U;
    msg.speed = 0.7246777928437631;
    msg.speed_units = 87U;
    msg.radius = 0.6692950842295633;
    msg.direction = 14U;
    msg.custom.assign("KZSEFANTLTVFQGKIQKVQGFEKXSSUVKYYABRIUXJDEWSAXAPQPAVKORXZMCMZXORFNPCBWIBYHYNDNYIJFJPZIDZFQWLYOMLKHLMUVXGPZGHPOBOQUITHUMGBIDHFTIXROHEPDCYEPSKBTJZCHGFFJIXWOWANWKHVKMBRVRCUGOWMHUDLDDIJALJABWTCQRJYEVEPVNSUZGLJODUSQHFBTYLOTU");

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
    msg.setTimeStamp(0.956372351027891);
    msg.setSource(53091U);
    msg.setSourceEntity(135U);
    msg.setDestination(5930U);
    msg.setDestinationEntity(178U);
    msg.timeout = 53467U;
    msg.lat = 0.513690522736027;
    msg.lon = 0.8781643944072356;
    msg.z = 0.5263016255920041;
    msg.z_units = 65U;
    msg.pitch = 0.09249170999730338;
    msg.amplitude = 0.7779537202485814;
    msg.duration = 17482U;
    msg.speed = 0.37938954133645286;
    msg.speed_units = 208U;
    msg.radius = 0.9672537408850775;
    msg.direction = 166U;
    msg.custom.assign("TRDTFJIWLOWJDQKUTQZUYEXHRSNUFSJFLUDPDYNQQXMMCSOOIGYZWCAQFXFTVSQSEKCATLBMPGJLNPEHHAJRNUITIOXVBHKRVSWSZ");

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
    msg.setTimeStamp(0.6296125450948422);
    msg.setSource(32984U);
    msg.setSourceEntity(7U);
    msg.setDestination(44798U);
    msg.setDestinationEntity(218U);
    msg.timeout = 35412U;
    msg.lat = 0.40983336561590766;
    msg.lon = 0.335838406397036;
    msg.z = 0.7292786236873525;
    msg.z_units = 142U;
    msg.pitch = 0.5685425960579026;
    msg.amplitude = 0.26230869829548187;
    msg.duration = 58809U;
    msg.speed = 0.298206922275122;
    msg.speed_units = 6U;
    msg.radius = 0.8631183960692461;
    msg.direction = 192U;
    msg.custom.assign("JMCKZXZGSJ");

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
    msg.setTimeStamp(0.8672741921134625);
    msg.setSource(862U);
    msg.setSourceEntity(250U);
    msg.setDestination(30838U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("OGZLGVJPDVSDFVJLDGCIAMGANHZVFNUPGFWYRBRSMTUTJWKRYNOKBANMEOPAOQVYOELUMJWMCGXFBJLFSIKLEEKCDHZSVB");
    msg.reference_frame = 171U;
    msg.custom.assign("GQTKQXLRSCLAJGPFMLDCRCYIIKVFFCXPLCAXUUCHZMGLWOOWOTMOSRMXZWZLEHEYVCEXYWFMKULQNOVSSZPDHCXBKOPYUYYRJDLAKGJMAVOJJFBNFFTTIMLAWBIWVAZUKEQ");

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
    msg.setTimeStamp(0.9285923179545689);
    msg.setSource(3022U);
    msg.setSourceEntity(49U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("XVUMWIBFVFKRYYGFZCWRURJAWQITHMGAPZPLJDZXLFY");
    msg.reference_frame = 170U;
    msg.custom.assign("JUDDVVABYOXGJAUWWCEULFRXVFHVRPRDAIDHRYJFXPWFTTKAPFGRPNHKNZFCGJNSSBJMLREQLACYBSMJITEAQBQYTMTDUIXUKWNVNENRHXYFULEHZCKZJGDTTCEJSZHLSHLKRHDAWMQZKMQXCQ");

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
    msg.setTimeStamp(0.31712342954611117);
    msg.setSource(51162U);
    msg.setSourceEntity(244U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(52U);
    msg.formation_name.assign("FUEEGYHMYSKXUXTLFYDBFJPLMDXNCEOQIFKUSCNPYEPBVNBYOSAOXEFIBVRXKAVHXVPNFGWXPIURTAHOSDPAMK");
    msg.reference_frame = 206U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19449U;
    tmp_msg_0.off_x = 0.18277425076015863;
    tmp_msg_0.off_y = 0.19966505802347467;
    tmp_msg_0.off_z = 0.8372219492818167;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AHJXOOLTCPENIXSPSRQJEWDSGSSSZRZOGIQTYWDCPANOYSKLHXEHPBZQXVQOHGVRFVXEYUFEVIMLHNNCWZSTRQGZHUHIAPRDHB");

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
    msg.setTimeStamp(0.7631847342061787);
    msg.setSource(27197U);
    msg.setSourceEntity(192U);
    msg.setDestination(34680U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("ZYGSXGPQHM");
    msg.formation_name.assign("EJNOZNBRVFKNUBTPJGTYHYEXFMXZCZDSCTULKYMLIWKUCWNJIIYAEPDXCLFKTPPOFFWGXBAXCWZYVQCNWOPMBHDRQPTJQLGVLRHOWIVOVRUNPEGKHDYFWFE");
    msg.plan_id.assign("RKXVWHBVSTLNQPGRSFALZOKNGFINSHBTQNTLODACJREXQKNCUQJZRCYGWABUORXQMWBMLBDLTXHMAYGZEPSOKZUIUQGRONIHZJXWFABGWUJEOAQPLIRMWDHLVEKQIELKPPWPYQHRCKPOFHTFUDTLXMXZYNCSVPMPMDWVEJDXINIFYDIXVUMTRUHDJDLZGMEYXIVMHVJCUFASZKGESSNWPGUABJVTCCHFFTBORAZD");
    msg.description.assign("SEGMBJSPDNIHCCFIKSXBIPUOUWFJFMARWDIJHKWUZILWEUJZHTRIZTKZBCKRRDMTRDLAKFQAKGGWHQXMDNEMFNOYMVOGFKDACSBHOEMSVLESDDQQGWRRVFZMWKOIOGELXSTNNCYQUHILAJVMPFJZX");
    msg.leader_speed = 0.14021598969352722;
    msg.leader_bank_lim = 0.9785908400021688;
    msg.pos_sim_err_lim = 0.8544232983053894;
    msg.pos_sim_err_wrn = 0.3108239326064145;
    msg.pos_sim_err_timeout = 8714U;
    msg.converg_max = 0.3645897170082796;
    msg.converg_timeout = 64411U;
    msg.comms_timeout = 41510U;
    msg.turb_lim = 0.938061247223725;
    msg.custom.assign("TFICAIHDITHGZMORGTZRUDIVFEVFCHLFYBSBUJEGESOBRTFCBLIMTZYYUTIMWLARHDXNMDXBEGZVINGPHSQBDFNWARQDLVCKPGWWVQRTSHOEYKFTLLNMAHWYVFPAGUHZYNLXCASYETWVZSYKOLJJAHPDKZWDJESZRJQCCJXRRUQECXPTOLB");

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
    msg.setTimeStamp(0.8941832921550759);
    msg.setSource(45178U);
    msg.setSourceEntity(49U);
    msg.setDestination(15103U);
    msg.setDestinationEntity(188U);
    msg.group_name.assign("QARIVCYIJBUSGVWQXUYUJENXRDGSIYXKATCICKHTHNMDPTJCXHMLKZLRTGVKZBZEIFNIITLAFNMEGIJYLSYSOUZFXHPWJD");
    msg.formation_name.assign("SRTCOXZRLBTZYYQYIJYPMPRKECDFUXNZKLFFQWVVMQTHSLFZBPOKBHNJDKQSTHGJSTRXKPCLNUKDMCIAPSLVFSLHWUYCABEEPFSNWEPDBIJYXQUKENMCNGZOOEKOGQWNMMMQIONWIDEEDDQOVJXJAIQVMIZUK");
    msg.plan_id.assign("MWPBTYOCKAOFQTWETBDMUHKFABWCKUTZKYBIZUAYWVKDJKRMDULHPCZHAWMXOGEVXEQGJZIZFWNENATUVVOAPVGYAEOGIFERXBNVNBSGQCPCRVPZMINQQJRAXJSHLJYYTXTHRNSDGUXHLUQMCOYFJFCRPLQYEEMVZCPEUTSJGLHYXJKIKWDJNMXNVNQMYR");
    msg.description.assign("GCOPUGRZJCMBIQJGMHSQTAXFETRGCGSVDKJJIXARJDXVLEGLWFDVMFCQOXYUHEWEPYPSUKKLZMCHWVFOSNNDLNRCUSQHDTMXRBKPPLUBZLZCISAFHWQOYMFWORWQTZLNESCZDVTOROHIGWYNXVYDVNJQPOZLFAMMKEATIBZAXDIRLJUHYTHKGUAGFSEKQFPIEFKNYSWIATBWNXXJKIMOCBCXMPUEIVGN");
    msg.leader_speed = 0.7265016739432261;
    msg.leader_bank_lim = 0.483069691955322;
    msg.pos_sim_err_lim = 0.03501901898485349;
    msg.pos_sim_err_wrn = 0.5212685227712082;
    msg.pos_sim_err_timeout = 30611U;
    msg.converg_max = 0.7871545750079676;
    msg.converg_timeout = 64112U;
    msg.comms_timeout = 51032U;
    msg.turb_lim = 0.16938513326549076;
    msg.custom.assign("IQYYVHHZBFRSJYMWCXIBBCEHVOGSKOFKFOEAZYGRRLVPTABDTMCNEEPDWBKKJWUFSAJMDRMEXWKYRBYYHKOKDUPXOGCCZOYDVGZFDXJUPHMPPJQMSLRKGPTQVUTASPZSREIFZCCIWVNNWDOUNTTWXAJSSJQYFQVGDCBDBYNPGQBAKAUHMZUWELLSGLNRAFZXI");

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
    msg.setTimeStamp(0.9960303672414127);
    msg.setSource(52293U);
    msg.setSourceEntity(187U);
    msg.setDestination(32639U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("WWORKJWSKGCSSAFLCPZYBFVYRWOWCMNDJQZOVMBXDJVUIONASQUWVAFVTGQBYPLGHFPHGRHLVUHKKHCDNRYOHBVTXMQSCZRTYQJWQSPRALTIZXDPJILQEQMYRZNGUEIOAOJMSPECGVAXS");
    msg.formation_name.assign("GDSETKEEOCEBTHIJDUXJMACNUCFYAVIVXRMAUCWJBSLOQKARTXVMQZQGZOSSRRPALVKNEWYPXAINUHLXKXTOLGHEWLVQYWQOCTELJEROFYYB");
    msg.plan_id.assign("QGSGAVTWVKQEDECUHYIOZUERIOEBKAQYGBNQENMOUZJFSUUXYNANMTFYOMVZGUJUHTYSZHOBJJTIVHJQIGJKNFDBRSPYDXRRLHFOSXDKLHCXRZOTZAGOYWTVCHPBALDPCPKPKTXWUWJRFMYEXDSWQNXRZMTVFOL");
    msg.description.assign("OKCISJJYTIDWJTKRVHOIQCVEGPXALXJNEVXQNLGVPSAVMAVWMAHFFVITDTOJQINRKJUTMKTESFOJQANSBVYZXZDLKLPZXGXMDCAEIKZACKZYFFYGHXUBDGAPBHDTBPUCLLTETFCIZRSBQFNZPBXMWQIAWKLSYGUMON");
    msg.leader_speed = 0.39165277719528313;
    msg.leader_bank_lim = 0.0812401569565604;
    msg.pos_sim_err_lim = 0.49223979123167283;
    msg.pos_sim_err_wrn = 0.898488778814927;
    msg.pos_sim_err_timeout = 19828U;
    msg.converg_max = 0.3343768788272482;
    msg.converg_timeout = 2627U;
    msg.comms_timeout = 56027U;
    msg.turb_lim = 0.9225709236106996;
    msg.custom.assign("WRYNMGFLFQFPHNIPNCQGSBDXMFWCYOPIHZFYNSMRTUUQDOLKEOXICEQLWHPNOPXSTGSKPXKSH");

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
    msg.setTimeStamp(0.5461311827470529);
    msg.setSource(24225U);
    msg.setSourceEntity(124U);
    msg.setDestination(15708U);
    msg.setDestinationEntity(52U);
    msg.control_src = 15990U;
    msg.control_ent = 217U;
    msg.timeout = 0.6611446053154649;
    msg.loiter_radius = 0.8754032441006233;
    msg.altitude_interval = 0.7414783291761688;

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
    msg.setTimeStamp(0.5352151627901424);
    msg.setSource(49136U);
    msg.setSourceEntity(182U);
    msg.setDestination(31257U);
    msg.setDestinationEntity(165U);
    msg.control_src = 64953U;
    msg.control_ent = 207U;
    msg.timeout = 0.3072543239094203;
    msg.loiter_radius = 0.3739792665775663;
    msg.altitude_interval = 0.8738638736166685;

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
    msg.setTimeStamp(0.6518378202207717);
    msg.setSource(61037U);
    msg.setSourceEntity(225U);
    msg.setDestination(31692U);
    msg.setDestinationEntity(70U);
    msg.control_src = 35391U;
    msg.control_ent = 204U;
    msg.timeout = 0.21309440985746508;
    msg.loiter_radius = 0.9174980666824081;
    msg.altitude_interval = 0.21232710081633888;

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
    msg.setTimeStamp(0.16086252540163437);
    msg.setSource(49314U);
    msg.setSourceEntity(122U);
    msg.setDestination(17641U);
    msg.setDestinationEntity(245U);
    msg.flags = 10U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.50352100228156;
    tmp_msg_0.speed_units = 31U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6327063151759003;
    tmp_msg_1.z_units = 93U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7076639315014598;
    msg.lon = 0.5929315949723876;
    msg.radius = 0.4624682888788777;

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
    msg.setTimeStamp(0.6273295871475858);
    msg.setSource(8660U);
    msg.setSourceEntity(19U);
    msg.setDestination(64319U);
    msg.setDestinationEntity(194U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22744288602385532;
    tmp_msg_0.speed_units = 61U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1778448721009941;
    tmp_msg_1.z_units = 162U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.970971978846234;
    msg.lon = 0.8354189747456975;
    msg.radius = 0.9732120368512409;

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
    msg.setTimeStamp(0.9672197654798933);
    msg.setSource(46956U);
    msg.setSourceEntity(141U);
    msg.setDestination(56171U);
    msg.setDestinationEntity(14U);
    msg.flags = 3U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3190170003249404;
    tmp_msg_0.speed_units = 175U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.486529390688898;
    tmp_msg_1.z_units = 195U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5949193558110096;
    msg.lon = 0.4002196528488189;
    msg.radius = 0.11543697477991177;

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
    msg.setTimeStamp(0.7817920437282895);
    msg.setSource(15554U);
    msg.setSourceEntity(53U);
    msg.setDestination(43145U);
    msg.setDestinationEntity(90U);
    msg.control_src = 24467U;
    msg.control_ent = 97U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 100U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2247821784213766;
    tmp_tmp_msg_0_0.speed_units = 174U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.42735738011105606;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.972518314070514;
    tmp_msg_0.lon = 0.2636470457779877;
    tmp_msg_0.radius = 0.46391319155050903;
    msg.reference.set(tmp_msg_0);
    msg.state = 211U;
    msg.proximity = 187U;

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
    msg.setTimeStamp(0.6573030729974393);
    msg.setSource(25986U);
    msg.setSourceEntity(98U);
    msg.setDestination(21838U);
    msg.setDestinationEntity(131U);
    msg.control_src = 36916U;
    msg.control_ent = 141U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6039256284467938;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5906945636910298;
    tmp_tmp_msg_0_1.z_units = 160U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.23145462506498338;
    tmp_msg_0.lon = 0.5206227659250808;
    tmp_msg_0.radius = 0.13973992213269704;
    msg.reference.set(tmp_msg_0);
    msg.state = 108U;
    msg.proximity = 65U;

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
    msg.setTimeStamp(0.9053340551011508);
    msg.setSource(63682U);
    msg.setSourceEntity(25U);
    msg.setDestination(60497U);
    msg.setDestinationEntity(75U);
    msg.control_src = 13033U;
    msg.control_ent = 189U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 176U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.033380805217569476;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5293644243590971;
    tmp_tmp_msg_0_1.z_units = 112U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6322949436541713;
    tmp_msg_0.lon = 0.599491898312879;
    tmp_msg_0.radius = 0.8391065142088514;
    msg.reference.set(tmp_msg_0);
    msg.state = 1U;
    msg.proximity = 14U;

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
    msg.setTimeStamp(0.3747952046868519);
    msg.setSource(4365U);
    msg.setSourceEntity(165U);
    msg.setDestination(31731U);
    msg.setDestinationEntity(190U);
    msg.ax_cmd = 0.27835650812632196;
    msg.ay_cmd = 0.16385356826520336;
    msg.az_cmd = 0.8469075093344811;
    msg.ax_des = 0.4756816976837951;
    msg.ay_des = 0.03517035596918627;
    msg.az_des = 0.319474675313717;
    msg.virt_err_x = 0.8004096589065899;
    msg.virt_err_y = 0.9230406313814647;
    msg.virt_err_z = 0.6646472015761747;
    msg.surf_fdbk_x = 0.2469175243718703;
    msg.surf_fdbk_y = 0.051399284783917754;
    msg.surf_fdbk_z = 0.6361011576805432;
    msg.surf_unkn_x = 0.0531796359812835;
    msg.surf_unkn_y = 0.5944459177652153;
    msg.surf_unkn_z = 0.45099504378346356;
    msg.ss_x = 0.46284410089055106;
    msg.ss_y = 0.05076258628814179;
    msg.ss_z = 0.16318581527745457;

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
    msg.setTimeStamp(0.2581678857294861);
    msg.setSource(11549U);
    msg.setSourceEntity(227U);
    msg.setDestination(61885U);
    msg.setDestinationEntity(121U);
    msg.ax_cmd = 0.4821177136174215;
    msg.ay_cmd = 0.7237089092434784;
    msg.az_cmd = 0.8293164586520081;
    msg.ax_des = 0.23885728825664843;
    msg.ay_des = 0.7171598416078828;
    msg.az_des = 0.2521985213509812;
    msg.virt_err_x = 0.8110079734229478;
    msg.virt_err_y = 0.8426151106095778;
    msg.virt_err_z = 0.16296663103088527;
    msg.surf_fdbk_x = 0.7908310687200601;
    msg.surf_fdbk_y = 0.7281418700418127;
    msg.surf_fdbk_z = 0.6919709416315434;
    msg.surf_unkn_x = 0.3248983067724549;
    msg.surf_unkn_y = 0.9335254146078327;
    msg.surf_unkn_z = 0.4942781809913599;
    msg.ss_x = 0.29084171929190283;
    msg.ss_y = 0.3491789745146334;
    msg.ss_z = 0.8232817047683108;

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
    msg.setTimeStamp(0.03482658282293327);
    msg.setSource(22808U);
    msg.setSourceEntity(230U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(166U);
    msg.ax_cmd = 0.4779071649296919;
    msg.ay_cmd = 0.7439658649824684;
    msg.az_cmd = 0.6267743135180927;
    msg.ax_des = 0.3969377896822748;
    msg.ay_des = 0.7013404970293386;
    msg.az_des = 0.8085921270497877;
    msg.virt_err_x = 0.3108849251383269;
    msg.virt_err_y = 0.4733607718545755;
    msg.virt_err_z = 0.8216942314633945;
    msg.surf_fdbk_x = 0.9043747391043245;
    msg.surf_fdbk_y = 0.014460186155427546;
    msg.surf_fdbk_z = 0.05054824520446943;
    msg.surf_unkn_x = 0.15171828186832814;
    msg.surf_unkn_y = 0.7648196258773038;
    msg.surf_unkn_z = 0.5554492028410715;
    msg.ss_x = 0.2204228419756845;
    msg.ss_y = 0.553862442883167;
    msg.ss_z = 0.8830411826422533;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VIPBRMCCXKEDAAJXMRLOCXMQLWFOSQGEWZIEQNOZEFTFDOFCADZSJMZIYJBOHXRAEFYZVWUQJCWCICJNVGKJRTPZFMDQUYPASFUMSVNRHJGNYYLTNLUGSHQTKADGUYXGUZMJNSPFTJOQUTAEFESHFWXPMULVQGDXCRITGBSNIAWEWRUTBZPZL");
    tmp_msg_0.dist = 0.11760398427727503;
    tmp_msg_0.err = 0.6274043133122205;
    tmp_msg_0.ctrl_imp = 0.7199311442580048;
    tmp_msg_0.rel_dir_x = 0.033880152968710386;
    tmp_msg_0.rel_dir_y = 0.2777403772503919;
    tmp_msg_0.rel_dir_z = 0.2004352374722127;
    tmp_msg_0.err_x = 0.29625280718906166;
    tmp_msg_0.err_y = 0.13073528456767836;
    tmp_msg_0.err_z = 0.9942200620867059;
    tmp_msg_0.rf_err_x = 0.9565680762429685;
    tmp_msg_0.rf_err_y = 0.7538071894636758;
    tmp_msg_0.rf_err_z = 0.34349590803167007;
    tmp_msg_0.rf_err_vx = 0.30596118989324284;
    tmp_msg_0.rf_err_vy = 0.42472994671009834;
    tmp_msg_0.rf_err_vz = 0.8346418993113084;
    tmp_msg_0.ss_x = 0.14926265597824984;
    tmp_msg_0.ss_y = 0.6644812093386787;
    tmp_msg_0.ss_z = 0.4725735403999243;
    tmp_msg_0.virt_err_x = 0.5028898558294941;
    tmp_msg_0.virt_err_y = 0.062214547670748854;
    tmp_msg_0.virt_err_z = 0.31803294885289324;
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
    msg.setTimeStamp(0.6263592041236763);
    msg.setSource(65458U);
    msg.setSourceEntity(157U);
    msg.setDestination(8896U);
    msg.setDestinationEntity(120U);
    msg.s_id.assign("GKHYBCFIHAPGIKYMSDDVMXUQTINVZFSUVRWNZEPTEXLEMBIHOSSENTCTQDVGELULDZSATQFBKYFRUHGZULOHBWHOTLFWQYMKDWNWAVFCHWRPJEPZDCYGSEZVPGXWGADJGIZZCKCOFZJVYPWLRNMABKEOMJOIVIHULPASJMVLXX");
    msg.dist = 0.8242863962041891;
    msg.err = 0.07986429358561564;
    msg.ctrl_imp = 0.012489447359464778;
    msg.rel_dir_x = 0.4223504855290927;
    msg.rel_dir_y = 0.37053312091535495;
    msg.rel_dir_z = 0.3317843704461071;
    msg.err_x = 0.4536427946818039;
    msg.err_y = 0.013699454844848247;
    msg.err_z = 0.8637232226121133;
    msg.rf_err_x = 0.425044717641494;
    msg.rf_err_y = 0.24786028499259882;
    msg.rf_err_z = 0.5475768019995272;
    msg.rf_err_vx = 0.35359142744304617;
    msg.rf_err_vy = 0.05679674427571069;
    msg.rf_err_vz = 0.9587828713361296;
    msg.ss_x = 0.6047674633262194;
    msg.ss_y = 0.9353849969308813;
    msg.ss_z = 0.038567589581830486;
    msg.virt_err_x = 0.8151284165299231;
    msg.virt_err_y = 0.6022607605831001;
    msg.virt_err_z = 0.23989210839554465;

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
    msg.setTimeStamp(0.3017107763436574);
    msg.setSource(37881U);
    msg.setSourceEntity(117U);
    msg.setDestination(10028U);
    msg.setDestinationEntity(200U);
    msg.s_id.assign("HDAXRMWUIIOHICUUEUAMHIYXXWYJZAGUTIJXJLYQNNYRBGQDNSTZGFWEMJFOGPLKQQOEEXYRDERFLJVKGMTLBMZACNBLSCEJYVNDPOGHMWTXBXKRQYVXPOANHOZFVLFTKBUEPKMYCWVZTISUKRBVCKIDHAOX");
    msg.dist = 0.4721923417854249;
    msg.err = 0.9060292153051674;
    msg.ctrl_imp = 0.3532819712471026;
    msg.rel_dir_x = 0.8607842746726645;
    msg.rel_dir_y = 0.4645948415498744;
    msg.rel_dir_z = 0.43758224269472334;
    msg.err_x = 0.40215318672788514;
    msg.err_y = 0.960522576066103;
    msg.err_z = 0.4287505994195001;
    msg.rf_err_x = 0.4136999905114773;
    msg.rf_err_y = 0.9149518198273469;
    msg.rf_err_z = 0.9911253621944881;
    msg.rf_err_vx = 0.9768031377540431;
    msg.rf_err_vy = 0.38735390821455773;
    msg.rf_err_vz = 0.6170013352659475;
    msg.ss_x = 0.6381794612526507;
    msg.ss_y = 0.7699611999072656;
    msg.ss_z = 0.8487105236567671;
    msg.virt_err_x = 0.38109072138873645;
    msg.virt_err_y = 0.9182613969853278;
    msg.virt_err_z = 0.7776034309483271;

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
    msg.setTimeStamp(0.02594403928910194);
    msg.setSource(8573U);
    msg.setSourceEntity(113U);
    msg.setDestination(15387U);
    msg.setDestinationEntity(142U);
    msg.s_id.assign("LADWOTGKNSTWKVMQIFAYFMKKFCQYPXILAKDWSIEXIMJEJYWAXGCNNSIRESKNZNVVHESNERCHUGYVZCFYVVTXZBPDOGVUZBGTOIZDWPJKMBRYNVUAVHWOGDDXHXRLMHOGAXSSIBFQCNPHYOJPUHQJJTCUGTEKBAAKBMTQWRQJWOCQLHUZUGSXFNOKIELRCELTFETMODPLLUFJJBMUDSIQARNOCHZUPLWEMXQBQIYB");
    msg.dist = 0.028273752593352297;
    msg.err = 0.18177508409571275;
    msg.ctrl_imp = 0.9569587796603128;
    msg.rel_dir_x = 0.7596025861303878;
    msg.rel_dir_y = 0.9065608367754456;
    msg.rel_dir_z = 0.6649716455111168;
    msg.err_x = 0.868080895093245;
    msg.err_y = 0.8892056843115268;
    msg.err_z = 0.2854555594324686;
    msg.rf_err_x = 0.3640271105707882;
    msg.rf_err_y = 0.5958886209532558;
    msg.rf_err_z = 0.06520191127482056;
    msg.rf_err_vx = 0.44585125411019566;
    msg.rf_err_vy = 0.6630174837546084;
    msg.rf_err_vz = 0.803098546635813;
    msg.ss_x = 0.3941526192807001;
    msg.ss_y = 0.8099620810380326;
    msg.ss_z = 0.8024709335143043;
    msg.virt_err_x = 0.8284011718023454;
    msg.virt_err_y = 0.8034705936011947;
    msg.virt_err_z = 0.2857883602316308;

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
    msg.setTimeStamp(0.3078871157435207);
    msg.setSource(55739U);
    msg.setSourceEntity(65U);
    msg.setDestination(27671U);
    msg.setDestinationEntity(174U);
    msg.timeout = 36190U;
    msg.rpm = 0.8539797900217185;
    msg.direction = 15U;
    msg.custom.assign("TVBXLEGNSVEWCKLJOIGYDAQXFSCAZIAFOJTQDSTFJRCMEZMQMGOYEJGUMYKSYDXWQHGTKIRDQLVITNZSCDLNGEMEGHYJWVYDJYPFIKBLHEXCFPFWTOBWNRHZMIRBJTBACDXLCNUCUDIJBBEUPFOYOKAUITRLXFRPNWHGUHXSWMTAIUZANVHPKUWLAKVLNCLAPHHDSMWYIRXJGQRXKMBGYBPQZZRFEZQNRPWOPACQBKFDKSV");

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
    msg.setTimeStamp(0.20024916263092096);
    msg.setSource(45413U);
    msg.setSourceEntity(192U);
    msg.setDestination(13356U);
    msg.setDestinationEntity(102U);
    msg.timeout = 27504U;
    msg.rpm = 0.6411859169350994;
    msg.direction = 159U;
    msg.custom.assign("XABCYWPHBRJQGDYCVLKWTYRLODGGTEPBICVREMYAVQGZBEVHKZGXMJKTWFQCWOFYQUOSIVNHBNISDETMSQQMFTRESCBXUMOMPXHWPIIAMOFBWUYXOKNRZIKTCRIHPDIELOLPZJNNEHSBATUBY");

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
    msg.setTimeStamp(0.092539902405121);
    msg.setSource(63744U);
    msg.setSourceEntity(155U);
    msg.setDestination(54907U);
    msg.setDestinationEntity(153U);
    msg.timeout = 2199U;
    msg.rpm = 0.4662560566337265;
    msg.direction = 167U;
    msg.custom.assign("YQFXIYOWCKZVZQUOCAFV");

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
    msg.setTimeStamp(0.8729654960068078);
    msg.setSource(29384U);
    msg.setSourceEntity(6U);
    msg.setDestination(47800U);
    msg.setDestinationEntity(113U);
    msg.formation_name.assign("BPGQKDKFMMSHUWECFCLBGTFNELZHBTVJZF");
    msg.type = 79U;
    msg.op = 173U;
    msg.group_name.assign("ETWFKPEWMSFIZENXWCMUFTHUNSBYGRUOZWIWZQYLOQJDOZMBOJXHNNHUVJZKODUCLHDS");
    msg.plan_id.assign("ABLCNBHTVCICBKCEDKYUWPUDMROGEJHMRSTIRQPZZAFGVXCA");
    msg.description.assign("HNMEWBMUSYWYVFKUPQORBEMCGFCDBZUUGXOMYJDPPOGXWPOLBHMYMHXVAYBZHMOFTEUKAVPSSIJGPNKBTTCFNSLJCTVTHOKXPALYCNAOTFRELQIVHRRQXNCCLWISBDMQBEMGDQGIRERRVQCVKQADJHVDZTCQAJFGPGDWIVBEIXSOPKRNXJMJGALEYEASZGFFRLJTDSKEYXZOAITXHSJXNZAZIKUQWZNPLZUWTUBHDFZNSLURIWLQYU");
    msg.reference_frame = 78U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59934U;
    tmp_msg_0.off_x = 0.6054043063809421;
    tmp_msg_0.off_y = 0.3360654963071089;
    tmp_msg_0.off_z = 0.5327774410377482;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5053245879113948;
    msg.leader_speed_min = 0.027308069739349627;
    msg.leader_speed_max = 0.5462850786863621;
    msg.leader_alt_min = 0.5832798155659631;
    msg.leader_alt_max = 0.17836817667565186;
    msg.pos_sim_err_lim = 0.38904415073639;
    msg.pos_sim_err_wrn = 0.1320514189377302;
    msg.pos_sim_err_timeout = 30442U;
    msg.converg_max = 0.963527219251903;
    msg.converg_timeout = 47873U;
    msg.comms_timeout = 11969U;
    msg.turb_lim = 0.5681548944127593;
    msg.custom.assign("XUGBMGDMJQCLUAAZPIYFVHMFKGOXYMJKUDPIDPHZUJYTXGXPANDGRMDXBQVGWLESLLADVLTVTPZCNTDHRVPUNQRKCGVWYZVVAUC");

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
    msg.setTimeStamp(0.5826135728959239);
    msg.setSource(58995U);
    msg.setSourceEntity(128U);
    msg.setDestination(7586U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("JIUUYSMWNUNUAHFDIZWCIIKYRVCCDEXJUVTSMTSRAXIHULGJREXXBCYKPQTNJMROEJDRTDAQKTBUJEDNGKOOPPFQGVCKODNLMFVAUKFJGEBZODYQLJADOJCTBZYHYHRGWWSLRNMSMOMWPWPBXAIWMYZXILFBEGEXBSZHKSKWADYYXAEQUXNLBQZVLPSLNZHWFZTFCCEFEBLHGVVKASHSBFINWPLMVRDVTFORPRHGZIHTPGAJTOQIQU");
    msg.type = 202U;
    msg.op = 246U;
    msg.group_name.assign("RDMXCNGBILEMMEIFYDCBNUXCEXWAARQARJNPAQGKBMLGHIFUMUBKBIIDPIUQOCVXYLXLMIWFEWJYWSVTJUUYTZFDWJNKRGDHPGDTHGABXMRRMSEJHTENUMZFQSHGOANVKEHOHEAMNGFV");
    msg.plan_id.assign("SGIUYERITXRIZBMHSGVONPZASFODHXJNZSZYERVSBDXTDQUWFHOUCGDXVUCTOBWIEBAMSRYWXLECPMABNRBPEHUCZVKQCWKUBRYFOMCYCYEPRMLFQSXWOUMKGKATXZKQCHWLJGADKLRPJXNHAFQNLOFVAEXPDJM");
    msg.description.assign("OGZUHCPSLRZQIYRQIOXCZMUMISFFECSMVTBQJWOMYGKCRIXLLBZAQDPWDFOAMJPFGBLKCLXGLKVHEQIZOYJSYFDAHJYTMJGZWVEVRRERXQUGCAHPLDDAIOFBAT");
    msg.reference_frame = 34U;
    msg.leader_bank_lim = 0.36462967972369176;
    msg.leader_speed_min = 0.6218469497943008;
    msg.leader_speed_max = 0.6558387395236309;
    msg.leader_alt_min = 0.5627931534521622;
    msg.leader_alt_max = 0.13485373744761575;
    msg.pos_sim_err_lim = 0.9080504902349371;
    msg.pos_sim_err_wrn = 0.17377542904066834;
    msg.pos_sim_err_timeout = 26790U;
    msg.converg_max = 0.4531899007931631;
    msg.converg_timeout = 52367U;
    msg.comms_timeout = 56757U;
    msg.turb_lim = 0.28521939494437565;
    msg.custom.assign("PMVQLWRFHDZGVQRLBYFDYNYHACFPXQLOAIXBSKBMJMUZXXTOJPHAGGOKJZBOGESHDQQPIAEHVZZYVVXYWIJUPKISUUNLUNPK");

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
    msg.setTimeStamp(0.23040680649057732);
    msg.setSource(45680U);
    msg.setSourceEntity(189U);
    msg.setDestination(30720U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("YOJMYLAHPSKDFEIICRHWLRFZRHKTWXKGVZVLAOTGOABPEWQYONZENMDCOXLNYUCFNLXYJQUQBRJDLROEFMRBODSQZVBCYUHYEOPGKPTOXOYQUWNKPTBHPNIPTKJTIQCRDQIUAEUNLSMABWGRLSVTSEDTQKUVIAMCIHXDLKUDMMHHVPSAIAFJWHEACTJZDGWBDWAXPVETGMHFMNXJVZBCSLJGCEKMXBZQGICUBIJQSJGVFFRXZZSNVNRSFX");
    msg.type = 234U;
    msg.op = 35U;
    msg.group_name.assign("JMYHBPRDGJSCMJMXOOROSVETLSTJEJBYWKVAESZGBTQCDVRKMALIIAVZADNBXRTHYXNDEQGVNTYKYYSQQLPFAGIXUIPNDVABNGZMMLGLNKBRNFYPWCZWCUYHUFZBGHJQGRMBCCLYHFIETEKX");
    msg.plan_id.assign("WMGUFLNCFGWQXIOWZBQEYACTPDNVKVTGXULMGURTXZXYPQXOCCRKENCVJGBAYZRMBFFNYHHJVNPMIGFIRUSDWXAOOYRISM");
    msg.description.assign("MBQKKBSIYDINFQJUHSHEVIBLPXHSGBKWXZSFIEAWDZTLQTPYAJJWYAZFVADDMDCBMTZLWIIFYETWJJFUTHVVGUXZNMYEJNBLXSDRQFVHPOFOXCZRCKINMTSKOKK");
    msg.reference_frame = 230U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22231U;
    tmp_msg_0.off_x = 0.7410616894780792;
    tmp_msg_0.off_y = 0.9912816741199271;
    tmp_msg_0.off_z = 0.666029238497808;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.31307988931218755;
    msg.leader_speed_min = 0.7504214049147205;
    msg.leader_speed_max = 0.11541423738556345;
    msg.leader_alt_min = 0.5367150662282552;
    msg.leader_alt_max = 0.24407731687951895;
    msg.pos_sim_err_lim = 0.5460223361568779;
    msg.pos_sim_err_wrn = 0.5522768337074304;
    msg.pos_sim_err_timeout = 42956U;
    msg.converg_max = 0.13965299943672838;
    msg.converg_timeout = 61715U;
    msg.comms_timeout = 53087U;
    msg.turb_lim = 0.13453475344014565;
    msg.custom.assign("BXDPMVTFMPMVZIDBTJPNXVROACFSXVFHONABITKHFBCCQRHJHQVASOFKDNKPZDWLCLDAOTYDWGUWNZLYGTQXJVUSCBTOSMKJWSEYCZYVGWEUMOYBOPSRYYSODHHZHWXOVBEMYAAPNXTGJBTIXERLQMXXLWLNNNUECUDHZJIU");

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
    msg.setTimeStamp(0.32084758559301096);
    msg.setSource(2944U);
    msg.setSourceEntity(210U);
    msg.setDestination(46613U);
    msg.setDestinationEntity(19U);
    msg.timeout = 16077U;
    msg.lat = 0.935337682017436;
    msg.lon = 0.9452981326723949;
    msg.z = 0.38253212213086063;
    msg.z_units = 132U;
    msg.speed = 0.30576019108116337;
    msg.speed_units = 236U;
    msg.custom.assign("HXWYLXBINPAKRBXKLGHKACZHPQKQFKIEEXIZSFDMBOPFUUONNGZKGMTFZLMGKPEQTDTFSTSJUGXPOJDHUQDBIRHSAYLFGTRJCICEUDGJOUQWZXUYROBARVLUNNDSFDPVVZEWUPKHNPCISORMULLQGXBVHYHOVDCLWSZFWMREKWMAMWZYLCBVPTYSJQXRTRBNEBFPTNAYSTDOVQXIEQDOZJCVKJIG");

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
    msg.setTimeStamp(0.5941614440612244);
    msg.setSource(41002U);
    msg.setSourceEntity(48U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(169U);
    msg.timeout = 6666U;
    msg.lat = 0.317567072043357;
    msg.lon = 0.9779150879778586;
    msg.z = 0.055527819466028694;
    msg.z_units = 126U;
    msg.speed = 0.5780915473130109;
    msg.speed_units = 35U;
    msg.custom.assign("WAXOQNILOYWWVLNXORFYYWKSPQEMORQSHQGSEKVZMYTJXKNUTHBHZYIOEUCPFDGDHPGDJUSNXLJNCAHAJKKLIMTVHGTDACWKUFWAMKRVYFISQKTUCIQFMWERMCJRZJZHFCBQRJLYYGZSPNUQHBALTDXLFPOCVQUNOEJVDGPDQHDIGVUXAVVTNFNIPLOORBDZAILUXBIKSCMBGUWVXYFSTMZPZCEHTKRXTABZSEEONG");

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
    msg.setTimeStamp(0.9124393143118357);
    msg.setSource(58969U);
    msg.setSourceEntity(197U);
    msg.setDestination(52291U);
    msg.setDestinationEntity(25U);
    msg.timeout = 54870U;
    msg.lat = 0.030851115086560243;
    msg.lon = 0.6159587605661295;
    msg.z = 0.00019859092794860533;
    msg.z_units = 59U;
    msg.speed = 0.28795166049364096;
    msg.speed_units = 176U;
    msg.custom.assign("XMQBFYPSWUQXO");

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
    msg.setTimeStamp(0.2318810689861346);
    msg.setSource(35159U);
    msg.setSourceEntity(11U);
    msg.setDestination(57236U);
    msg.setDestinationEntity(232U);
    msg.timeout = 39853U;
    msg.lat = 0.11252495895696235;
    msg.lon = 0.30866494149736945;
    msg.z = 0.1074204929986673;
    msg.z_units = 61U;
    msg.speed = 0.8213161820341214;
    msg.speed_units = 200U;
    msg.custom.assign("SMHNWAYRCMESSAVCEHBAAFBADZRNRWFAJOYLGCQAYKWTVKLEUHZSTMXQXOGWOBHLHXCGKWODJKFUXHGAETDTZYPIYMPNDOZRBYXRYYGXUKZJHFXQCISHGSOYUCUIFEXUYVDKNVDBWVXNPPMKLBSTQBLPFJFENQRUNPJJCZUWMGPATTIWMXHRUAQVPEPMRSQIUOCIJQILNJTGRKDLD");

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
    msg.setTimeStamp(0.05061318215524213);
    msg.setSource(28927U);
    msg.setSourceEntity(135U);
    msg.setDestination(10440U);
    msg.setDestinationEntity(120U);
    msg.timeout = 42179U;
    msg.lat = 0.6813560975896299;
    msg.lon = 0.6831191474470184;
    msg.z = 0.706483091219626;
    msg.z_units = 104U;
    msg.speed = 0.7533181269998263;
    msg.speed_units = 77U;
    msg.custom.assign("LHGEZCGFTCIUHKBMNPWGWKBUZVORVRBFLRLIHNODHZUJSAZETOXXHIIHDCKJQMKDVOAESYLXDOHHBQQKELJWLRGXEARWUFMTIHQETWXDFYAUCYSNYVNAKSQCKZPXAPUFSREMTYPXKFCRMSVWDLFOGZKPBJB");

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
    msg.setTimeStamp(0.6789164679388511);
    msg.setSource(10363U);
    msg.setSourceEntity(53U);
    msg.setDestination(60728U);
    msg.setDestinationEntity(9U);
    msg.timeout = 7450U;
    msg.lat = 0.9393250814436507;
    msg.lon = 0.8802176232722305;
    msg.z = 0.4466793650365354;
    msg.z_units = 139U;
    msg.speed = 0.27167955476243877;
    msg.speed_units = 24U;
    msg.custom.assign("OYARGHXBEKFCSJHNLJGRNSBZZBXXVNLUJQDBINVDMYESIECUZJPTTUVYFPTPLYSUWGFCEQNFDOARMSHIBVWSZCWGRVIVCRXORNVXKXISWFPKNOUTPOEBBITGJKRMYNRAFQJWYPYCDZOGKZI");

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
    msg.setTimeStamp(0.8796743952158717);
    msg.setSource(39546U);
    msg.setSourceEntity(216U);
    msg.setDestination(17090U);
    msg.setDestinationEntity(198U);
    msg.arrival_time = 0.4102912377344672;
    msg.lat = 0.7580391061374515;
    msg.lon = 0.6693554060773771;
    msg.z = 0.37598771400750686;
    msg.z_units = 20U;
    msg.travel_z = 0.46228169087573256;
    msg.travel_z_units = 217U;
    msg.delayed = 186U;

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
    msg.setTimeStamp(0.41962784878116666);
    msg.setSource(46778U);
    msg.setSourceEntity(67U);
    msg.setDestination(28685U);
    msg.setDestinationEntity(22U);
    msg.arrival_time = 0.48452993536502287;
    msg.lat = 0.895741192250008;
    msg.lon = 0.4339380752016434;
    msg.z = 0.20249495142305574;
    msg.z_units = 22U;
    msg.travel_z = 0.8491973177401275;
    msg.travel_z_units = 149U;
    msg.delayed = 38U;

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
    msg.setTimeStamp(0.7683421326062024);
    msg.setSource(61256U);
    msg.setSourceEntity(87U);
    msg.setDestination(40932U);
    msg.setDestinationEntity(150U);
    msg.arrival_time = 0.15123964464825446;
    msg.lat = 0.3291499979586092;
    msg.lon = 0.39952736646733267;
    msg.z = 0.430472849171463;
    msg.z_units = 112U;
    msg.travel_z = 0.13950890695823248;
    msg.travel_z_units = 141U;
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
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.46507048864391365);
    msg.setSource(634U);
    msg.setSourceEntity(184U);
    msg.setDestination(58586U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.751819077543933;
    msg.lon = 0.8807350685455881;
    msg.z = 0.23406734194432077;
    msg.z_units = 229U;
    msg.speed = 0.9182577841300206;
    msg.speed_units = 183U;
    msg.bearing = 0.05747593951126939;
    msg.cross_angle = 0.8885669278036725;
    msg.width = 0.17228979038356895;
    msg.length = 0.40624739736907434;
    msg.coff = 152U;
    msg.angaperture = 0.2666646187330446;
    msg.range = 33666U;
    msg.overlap = 44U;
    msg.flags = 145U;
    msg.custom.assign("QQQIKLVNTVXGWSZLXVRHYRKOURPWGAIPZGLAVKKKUSMYLPEUOHXJHNHKUVQPNCLVXLHJZOBPLUWLVBDZWAFKRMFLQAWQOAXJHYBOYYVDACQSSBNCIVIFCBFPFMYXNXKACJIRFQTTCXTEEPEUGBRJWTDZAAU");

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
    msg.setTimeStamp(0.6352431740636404);
    msg.setSource(64671U);
    msg.setSourceEntity(51U);
    msg.setDestination(8754U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.765546756483109;
    msg.lon = 0.2544143654484089;
    msg.z = 0.8351669829516386;
    msg.z_units = 136U;
    msg.speed = 0.3212972509981058;
    msg.speed_units = 53U;
    msg.bearing = 0.5653483597639763;
    msg.cross_angle = 0.14354154893479687;
    msg.width = 0.4523064092943273;
    msg.length = 0.9002291623383639;
    msg.coff = 13U;
    msg.angaperture = 0.15948791507340065;
    msg.range = 7539U;
    msg.overlap = 143U;
    msg.flags = 109U;
    msg.custom.assign("WLSCCGRQOMBPKVLBCWKDKJGVXUMFDUHWWEEJGJGLQLZIHFPWIAFBUUWQAZKBUJPMZKDWFTMBHUTEAAVYGUFRXALVOYAROEZCYJBIAJODJXHVGDTRNELQSKSYZESFBYTDXIXAQQHEYFQVKWTNHFIOVALTT");

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
    msg.setTimeStamp(0.9769373286231265);
    msg.setSource(15231U);
    msg.setSourceEntity(138U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.8440364001689482;
    msg.lon = 0.7978619069633606;
    msg.z = 0.48458145653441265;
    msg.z_units = 252U;
    msg.speed = 0.2810241367403262;
    msg.speed_units = 156U;
    msg.bearing = 0.18992492634484948;
    msg.cross_angle = 0.373225500676843;
    msg.width = 0.5707087841802825;
    msg.length = 0.7425319436233114;
    msg.coff = 181U;
    msg.angaperture = 0.7970305766348214;
    msg.range = 20417U;
    msg.overlap = 50U;
    msg.flags = 97U;
    msg.custom.assign("QITDCHNTMISCYQAZNOOXQRTOK");

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
    msg.setTimeStamp(0.49494498790940755);
    msg.setSource(11785U);
    msg.setSourceEntity(116U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(29U);
    msg.timeout = 29104U;
    msg.lat = 0.6445789928403255;
    msg.lon = 0.7475803933749284;
    msg.z = 0.8645141031074595;
    msg.z_units = 146U;
    msg.speed = 0.2829639543829209;
    msg.speed_units = 35U;
    msg.syringe0 = 96U;
    msg.syringe1 = 80U;
    msg.syringe2 = 24U;
    msg.custom.assign("UUVXMZUJVTJFXITFCYHZSXEERGKAKJBYIIWFKIGAHQTWEADMIBNNAWPFNPPENFWCVSTXZCJSXZIHROQPPLKEOTGKGDSRZOWASYGWVFTKPALQRCAMVUSGOILUXJKWHVXMDRYHTKKELLCNTYBELGOQDHMQPZUAFDTVHICYBNWL");

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
    msg.setTimeStamp(0.4288654089556536);
    msg.setSource(18084U);
    msg.setSourceEntity(234U);
    msg.setDestination(56828U);
    msg.setDestinationEntity(213U);
    msg.timeout = 19538U;
    msg.lat = 0.546658947092723;
    msg.lon = 0.17349769633253664;
    msg.z = 0.043907765805769716;
    msg.z_units = 41U;
    msg.speed = 0.46459281703159283;
    msg.speed_units = 187U;
    msg.syringe0 = 2U;
    msg.syringe1 = 192U;
    msg.syringe2 = 244U;
    msg.custom.assign("EPHEGASQIOLOWWBTJQASRBYINJFMAIAYTPUEMUHLGDCZSEZVQM");

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
    msg.setTimeStamp(0.7321373512966493);
    msg.setSource(46828U);
    msg.setSourceEntity(115U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(204U);
    msg.timeout = 27344U;
    msg.lat = 0.7524957175740142;
    msg.lon = 0.3219681236228711;
    msg.z = 0.3082451465732763;
    msg.z_units = 156U;
    msg.speed = 0.7694737594979258;
    msg.speed_units = 215U;
    msg.syringe0 = 29U;
    msg.syringe1 = 10U;
    msg.syringe2 = 247U;
    msg.custom.assign("JJQCWAZORYPITKKTFCLMXLDVRJVUTXDOBBBOASJVAUNMOOGADKYDZZQBJMLTSESRSGGLEHXKGHKEJVJWFFZYVXZPIPGXRNCGXUYXMEIQXRENPJHANDGAFXKOCJPURZDYPQRKKQW");

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
    msg.setTimeStamp(0.39759677437686536);
    msg.setSource(62865U);
    msg.setSourceEntity(47U);
    msg.setDestination(30110U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.7367827415907215);
    msg.setSource(40402U);
    msg.setSourceEntity(153U);
    msg.setDestination(22822U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.06285472447060692);
    msg.setSource(62508U);
    msg.setSourceEntity(6U);
    msg.setDestination(10303U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.2170978882748985);
    msg.setSource(23880U);
    msg.setSourceEntity(33U);
    msg.setDestination(4676U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.030517565854446316;
    msg.lon = 0.21346706441983887;
    msg.z = 0.45255965600151293;
    msg.z_units = 122U;
    msg.speed = 0.05367458468341968;
    msg.speed_units = 21U;
    msg.takeoff_pitch = 0.7513053443034153;
    msg.custom.assign("LWJDJFPBZBFFUSASXYSMLKYNSPWGATANOXKHO");

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
    msg.setTimeStamp(0.8723565348108995);
    msg.setSource(33417U);
    msg.setSourceEntity(127U);
    msg.setDestination(42262U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.5641946466033084;
    msg.lon = 0.8831705759285149;
    msg.z = 0.570617571786786;
    msg.z_units = 110U;
    msg.speed = 0.51614650078617;
    msg.speed_units = 127U;
    msg.takeoff_pitch = 0.16784689204079994;
    msg.custom.assign("URRSDMGXWNFBOLUEAFIAADNTFBHVXEFVNHGMPIRMXSDGYPWFIDGIJPIUEECWAKRJHQDNRBRCGPYSSKNCOXFTHVZBMFOWUTHTSWNQRYKPIAPXHENIZPUYZJUXLKIVTLIUVDGLCEEQLRGKCSQUPVWZJDNKOOWGLJZUEJFRVNXEGVHKTLZAOZWMKOOKMPWMVHQYCJCFBJAHLLLQAXPNBAXQYSZJMDSECCYTBBVZ");

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
    msg.setTimeStamp(0.4189995349288461);
    msg.setSource(38509U);
    msg.setSourceEntity(34U);
    msg.setDestination(4761U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.6355670852872105;
    msg.lon = 0.8628343895066074;
    msg.z = 0.9134136802675413;
    msg.z_units = 148U;
    msg.speed = 0.40542948952834534;
    msg.speed_units = 90U;
    msg.takeoff_pitch = 0.598748892787246;
    msg.custom.assign("PNFNUWWIEZUBOPPTPQSNNFPNXCWVLGDHILYVOYDCACZRXJEBDELMQHSKGNYYIFRCDUGIZLEUXLWFOAOACNHOQNZMDHGVZHGNRTYPRCCJOBSGUDXYWRFNTVVLYPOXBXEPBUI");

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
    msg.setTimeStamp(0.32446938640694045);
    msg.setSource(25740U);
    msg.setSourceEntity(118U);
    msg.setDestination(14445U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.11831776973683183;
    msg.lon = 0.175168700791831;
    msg.z = 0.02821520380607312;
    msg.z_units = 87U;
    msg.speed = 0.6874865525819189;
    msg.speed_units = 181U;
    msg.abort_z = 0.23255706828122347;
    msg.bearing = 0.9781811026296722;
    msg.glide_slope = 106U;
    msg.glide_slope_alt = 0.16650527206205668;
    msg.custom.assign("KDKXVSHAQGXHKURSVDBRALWLMSFTDENPGNIJTWRIGGKEGMEINYBMHEXYZQLUJRXXDOAKWNDGOGVIMIYRVUVOJZRCATJQAYQLFPHKQFNNLCOUCBEIVAEMYXU");

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
    msg.setTimeStamp(0.08311301281469718);
    msg.setSource(62201U);
    msg.setSourceEntity(70U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.19391831012175953;
    msg.lon = 0.5197528059054575;
    msg.z = 0.043011835876666016;
    msg.z_units = 126U;
    msg.speed = 0.8560840708554135;
    msg.speed_units = 124U;
    msg.abort_z = 0.9845021804564891;
    msg.bearing = 0.9592648128321375;
    msg.glide_slope = 247U;
    msg.glide_slope_alt = 0.9952932190507822;
    msg.custom.assign("FMTDWIODQVEUONRDUMYALANFRQQGLFRZEYOCTDJWHUMATXEZTGSVJWLZRHFVXSJMWCGXNVAPGISFBOKKPVLJGIPLEMXUBTNINHXRDUKQSMOPTHFEEELUYQMBLIKAKGVWXHSZKXUQAPJYNRQEJONBKTUBFCKFUBODZMVSZULJHCSKYJZCPCNIIZCHCCYRWFHIRJWVOOHAHDB");

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
    msg.setTimeStamp(0.9518785677001504);
    msg.setSource(33595U);
    msg.setSourceEntity(214U);
    msg.setDestination(64685U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.5368475692968863;
    msg.lon = 0.25960811626938685;
    msg.z = 0.3035203663660002;
    msg.z_units = 219U;
    msg.speed = 0.14152606804135093;
    msg.speed_units = 181U;
    msg.abort_z = 0.6632932389517048;
    msg.bearing = 0.3803213095417809;
    msg.glide_slope = 112U;
    msg.glide_slope_alt = 0.5575974513522435;
    msg.custom.assign("GINDLNBNNGXVZIQSXPUSUYDQMHQJWARJYELVCDGDJNOPQZHRCYOHJAFKGKBFTEAVON");

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
    msg.setTimeStamp(0.7520507212933715);
    msg.setSource(60850U);
    msg.setSourceEntity(12U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.058271526035506116;
    msg.lon = 0.5076437517476887;
    msg.speed = 0.0024254685265272524;
    msg.speed_units = 157U;
    msg.limits = 66U;
    msg.max_depth = 0.6664083795564286;
    msg.min_alt = 0.5057601563536549;
    msg.time_limit = 0.6663891095841514;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.41338555910715324;
    tmp_msg_0.lon = 0.4088079963384179;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PVXDINUBOWIFEBZFENIJTLSJCXVQOWCIMQCRQOVTRDSYGJNCSIGXNYYMZEHKSPHPVYSGCBZNNDEDB");
    msg.custom.assign("CHDSMBVXKMWHHSNPMIIOWJVEKUWSGSJCUYOVDSBMUROKSEJMAHDOTGZDEEEKWIKSCLXZRUKZGDYRMETBJPIRIPMTHTPCYYAXXIPIOMWLPGZGGRNRUVZLDBVBVUAMCGQSOLTUPJAABFFNCVKWJBWLHYTNCFQNQIICFOHVJTFEXLQIDLHFPNYMXXXZBUALOQAFLEQBDAVAYWGQNRRYKD");

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
    msg.setTimeStamp(0.4905101502143595);
    msg.setSource(21536U);
    msg.setSourceEntity(150U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.5337883763500612;
    msg.lon = 0.42331809895847217;
    msg.speed = 0.8389025736900909;
    msg.speed_units = 74U;
    msg.limits = 237U;
    msg.max_depth = 0.06516937521057309;
    msg.min_alt = 0.059678091978908165;
    msg.time_limit = 0.03643175996875925;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6705699663544271;
    tmp_msg_0.lon = 0.07330414456342327;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TQUMYBSDGETPXCVRZKBOKMAVKMSHJPSAKIORVMRLHCGMDWLKTEHTIJASQBGBSWJFWGWPQYZONPJMOBXPRYQSRJDDMPLCOURTFDWFQKUWLNGONUCBFGCNUXXJKANZIENGINXSLVHMIZNECYERZFCRV");
    msg.custom.assign("DUNAWQESKMUOCZKTBWHXELZRFTLERGPJECNIDOQMQZMVQNMDILQWRSGIAFYNTKDUJDCDQFOZYMWCGIGZVWXBFVLLPPKHDTSGMXTSNHXOVSHSWMSJYTEMPEULVUQZEZTFLBLAAAGXJDONBAVFUYIBNZQNVEAFSKHQHQERJCVRYFGXNWXPTJNPVPBUCAYBXTWRJHVGLTYGXUFOJLRZIIAHDKPUY");

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
    msg.setTimeStamp(0.3917540581864378);
    msg.setSource(8951U);
    msg.setSourceEntity(115U);
    msg.setDestination(37367U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.7730924186662315;
    msg.lon = 0.36849697216758615;
    msg.speed = 0.8079236879671553;
    msg.speed_units = 137U;
    msg.limits = 188U;
    msg.max_depth = 0.644956025573399;
    msg.min_alt = 0.17492641157861677;
    msg.time_limit = 0.46673430327583487;
    msg.controller.assign("QSGJDMJWKRSJNDPRTBWDFPIPLVZULXCDPAEPAOYJHUOXVYQEMPFWUNUZPVGKARTSOMVIVQZIZZNDVIJYBKAHUKQMFXBIDUSACHNUEXQRZLPHFGYOKQJKACLEVRUBYTAHBVD");
    msg.custom.assign("UWMUVHWOJKIYPHPQLFFLBLGDMKRSMOOIQIRYLVTVYZGKAJGOHSUKMQXBWBHZQXJLZNLJHABIDSIZUUDDBHJYVWEYNOPDWNZCPPZAKJRXFCSYQPFWJRJUTQFZROMXEZXSKGEPPAAMTVLNFRCMDCCOCHHMGIYNESOYCGERXBXWQOFBEEQADIRKNGTXVBYTWXVRZT");

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
    msg.setTimeStamp(0.22626699475091638);
    msg.setSource(39202U);
    msg.setSourceEntity(127U);
    msg.setDestination(4309U);
    msg.setDestinationEntity(20U);
    msg.target.assign("HMNSQIMZXSFUDXCUEEGOVQRVCLBAEWGMNJHTKDTXWWAAUDMMCLIYGJGFBPRWYTPASDRTUOBZBJPIAPEOMFDRYLYHGPQRXRHXMCOCWFYDOMORKZKFFTUAQKXTPDEDVUHQIVNVWWSYHKIPTIZAZWSGZCNBNJFQBWJIKGUXXLQYPFLQYVKUPDEXAHTJVTEAVZQDAKMOKWRETXQLUVHSJUBZYZLFZSGMNNGHKJLV");
    msg.max_speed = 0.7175269062477394;
    msg.speed_units = 93U;
    msg.lat = 0.6981920846071555;
    msg.lon = 0.37053459494386853;
    msg.z = 0.37665802553750916;
    msg.z_units = 17U;
    msg.custom.assign("DPHYIRUSJVOCQVQKCKXKABFMPRZIWIVPFCCGWJFBXPTPAAVSFIHDEBUCCNRHXLQHQAJDAVNDURPJOSTGONWZPGLGWWZLKWTUNHVTIHGSKEYFEBRBHTQPMZVUUQYJVLRGFTUXXGNCDXYYSZDIAZOCMDXLEMBLOPQOTJRLTHASHYOYCNUIS");

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
    msg.setTimeStamp(0.22689627476131247);
    msg.setSource(62285U);
    msg.setSourceEntity(1U);
    msg.setDestination(34982U);
    msg.setDestinationEntity(59U);
    msg.target.assign("BSPPNRBDUNECAAFPOUZRJOTHCRXOFTTKDMMCYBANSNUGGXVCVSMJEAUPXZEKZKUQVYRJPNCZNSLFMSOTGZLSTZHVGZIHXYIYNLABWKMLCMCFDGSWBODWOJVDWBAQPVXEYENFJAQLNYHPILKODWIUZHRZRMMBTBYIBKKEMCHTDSYVMUHWRVOXCRQFJJQANKQD");
    msg.max_speed = 0.7705775680421852;
    msg.speed_units = 215U;
    msg.lat = 0.6050538300274312;
    msg.lon = 0.9915518189866886;
    msg.z = 0.9564066910375504;
    msg.z_units = 172U;
    msg.custom.assign("RXSUUXCNIVDANVXGXQCLUIPDOEZXBPNFLTIWVUJPLHZXOSNSITYIQMMYWQTIHFBRLSQFVSQZRTAJZQTCUJESUEIHZMGETGZTEAEKYABZZFXDHBYCVUYEBPFNJKCTWGVAVILKAKSNIXHJGJTHHZTRCVHMPYPPPKDUCWHWYUJGXNGNLDLKBDMXSJOLMACQAQFOQFMNMPDOLIMEKKHQSDDUCYWWACEWBBRRNRLDOVZBK");

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
    msg.setTimeStamp(0.15258701071316638);
    msg.setSource(31771U);
    msg.setSourceEntity(144U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(27U);
    msg.target.assign("BKESVYDEOJRNSAYSQSQBUARDNDVIZLCZYYJZOYJMRFJKHSQCGSPZVMNIWHXDRXZXZXOAFHAMYUDJBTMGV");
    msg.max_speed = 0.5983268222526946;
    msg.speed_units = 254U;
    msg.lat = 0.2159273405281129;
    msg.lon = 0.878442411744211;
    msg.z = 0.846251453203985;
    msg.z_units = 127U;
    msg.custom.assign("ZICOFBWBZLEYQFXHWJZPKOYLGNAQUEEKCBPCHSDYWHGQASQDYEJZGSKNULPRZXIWFLSGQLFTIWVOKESAMWHICYLRWVTJHHZQGDDTKAIVNVFAUGRTOZRYHYXTV");

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
    msg.setTimeStamp(0.6709522515228482);
    msg.setSource(9908U);
    msg.setSourceEntity(46U);
    msg.setDestination(9157U);
    msg.setDestinationEntity(125U);
    msg.timeout = 60037U;
    msg.lat = 0.6838136347733045;
    msg.lon = 0.8501235460441697;
    msg.speed = 0.6199360045281525;
    msg.speed_units = 139U;
    msg.custom.assign("YYFUEANXXIFGBAOGPNBRGKPPBDSKGKVRSTPEAWVZTHMZZJIUVQRDBADQHCKLQSYWAFHPAIRYLFEAKZVYCBOYGGHP");

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
    msg.setTimeStamp(0.5664862079515782);
    msg.setSource(42621U);
    msg.setSourceEntity(66U);
    msg.setDestination(19642U);
    msg.setDestinationEntity(106U);
    msg.timeout = 62465U;
    msg.lat = 0.015337135101446298;
    msg.lon = 0.1477933249726624;
    msg.speed = 0.8060364814543114;
    msg.speed_units = 51U;
    msg.custom.assign("RJZFSXSHNPVUJGOWOWPKMNGRVLZNVTUKSWJSNESAPBPHDLXHVBF");

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
    msg.setTimeStamp(0.38278568264177126);
    msg.setSource(21697U);
    msg.setSourceEntity(1U);
    msg.setDestination(34736U);
    msg.setDestinationEntity(8U);
    msg.timeout = 61694U;
    msg.lat = 0.5225209386300477;
    msg.lon = 0.41413757297575493;
    msg.speed = 0.2939397613844916;
    msg.speed_units = 109U;
    msg.custom.assign("YXWSXIELXTFLQYUAUTUFVXQKGQSMJXZRODVOPKTIRYFQGBUQDIBRNVWOOFQCXJMLZJNGZPKUESUANBNFAVIXAJSLOY");

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
    msg.setTimeStamp(0.11158442028799564);
    msg.setSource(17512U);
    msg.setSourceEntity(185U);
    msg.setDestination(29184U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.9220301712406492;
    msg.lon = 0.6238009273306149;
    msg.z = 0.06741810762741451;
    msg.z_units = 247U;
    msg.radius = 0.88425687831057;
    msg.duration = 32052U;
    msg.speed = 0.411896789453123;
    msg.speed_units = 89U;
    msg.popup_period = 61132U;
    msg.popup_duration = 37815U;
    msg.flags = 69U;
    msg.custom.assign("HLZKWFEBQQYZBMNPGZCIHMMLKCYDEKQFUPLPIPMFUADVEWFQLPPBIFLOZYOMJCXQUVQRUSXANNOIGTCGKOAIRGDRODAOLAXXACHNRHICLDKSNRJIGHCWUU");

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
    msg.setTimeStamp(0.59107535598637);
    msg.setSource(52534U);
    msg.setSourceEntity(163U);
    msg.setDestination(34717U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.5800249004235898;
    msg.lon = 0.3243774530390888;
    msg.z = 0.15561629505124697;
    msg.z_units = 204U;
    msg.radius = 0.8898928657548502;
    msg.duration = 26613U;
    msg.speed = 0.42233692494176844;
    msg.speed_units = 109U;
    msg.popup_period = 29655U;
    msg.popup_duration = 38649U;
    msg.flags = 211U;
    msg.custom.assign("AGQUDDPGLWBTKFHRCDRQGWOUDRHOAHCNVVPYYSSXRGKGLIXFKSLDAMISZRAUHHEZGBKBMFQYJEZISQOZEPDXKYYSFQQIECVMTLVISDMOPMKLXSTFWBANFRGSLGCDVQTPIDWJLEKUANWNHMQJABNPCFXVNJZZMEJEJXYZWYTLLFHZAUOKTUQPYCPXKBTICAYVVLUBMIQWGRRNMJBCFUHBJTZJYI");

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
    msg.setTimeStamp(0.35355618175019266);
    msg.setSource(31169U);
    msg.setSourceEntity(57U);
    msg.setDestination(46540U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.6739379924319;
    msg.lon = 0.34180403516257696;
    msg.z = 0.3079317859451435;
    msg.z_units = 194U;
    msg.radius = 0.023803619512073215;
    msg.duration = 13986U;
    msg.speed = 0.6626244510356993;
    msg.speed_units = 215U;
    msg.popup_period = 37741U;
    msg.popup_duration = 41386U;
    msg.flags = 26U;
    msg.custom.assign("FLUFWQTGIETJVTAEICNBMYAPTSPZX");

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
    msg.setTimeStamp(0.7484265138301693);
    msg.setSource(57652U);
    msg.setSourceEntity(146U);
    msg.setDestination(59667U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.6243112857831604);
    msg.setSource(15472U);
    msg.setSourceEntity(223U);
    msg.setDestination(56771U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.7979689874770736);
    msg.setSource(42194U);
    msg.setSourceEntity(30U);
    msg.setDestination(17550U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.6166565967043858);
    msg.setSource(50911U);
    msg.setSourceEntity(172U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(21U);
    msg.timeout = 37549U;
    msg.lat = 0.11494064873213938;
    msg.lon = 0.6480795894879656;
    msg.z = 0.14132559650329568;
    msg.z_units = 238U;
    msg.speed = 0.7530246659883434;
    msg.speed_units = 208U;
    msg.bearing = 0.5502253770744002;
    msg.width = 0.3009030436246709;
    msg.direction = 57U;
    msg.custom.assign("DNXCOIKRJRWDUPKLQOYMVKHRI");

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
    msg.setTimeStamp(0.5418912540807046);
    msg.setSource(55543U);
    msg.setSourceEntity(227U);
    msg.setDestination(32826U);
    msg.setDestinationEntity(101U);
    msg.timeout = 21801U;
    msg.lat = 0.2600672425305893;
    msg.lon = 0.09798602149165536;
    msg.z = 0.8558289063927254;
    msg.z_units = 67U;
    msg.speed = 0.8949205726067841;
    msg.speed_units = 155U;
    msg.bearing = 0.45224474624604993;
    msg.width = 0.41576059002293286;
    msg.direction = 251U;
    msg.custom.assign("OGIRUTCRSGNJQDRWSI");

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
    msg.setTimeStamp(0.762823555997126);
    msg.setSource(58805U);
    msg.setSourceEntity(220U);
    msg.setDestination(41046U);
    msg.setDestinationEntity(161U);
    msg.timeout = 18849U;
    msg.lat = 0.09796554518236422;
    msg.lon = 0.0036272718563837847;
    msg.z = 0.3938417827906856;
    msg.z_units = 160U;
    msg.speed = 0.6753318049235074;
    msg.speed_units = 99U;
    msg.bearing = 0.3243673587091973;
    msg.width = 0.16033364925471127;
    msg.direction = 39U;
    msg.custom.assign("NYZKYQQQZOCCFNKQRBHMLGXGNIIGCEJMLAVOPZQWVAFQPZUPTETSOOVDNDUTFBLETYJTWFTSSSMXKDMLA");

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
    msg.setTimeStamp(0.8434827456191657);
    msg.setSource(24562U);
    msg.setSourceEntity(131U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 251U;
    msg.error_count = 1U;
    msg.error_ents.assign("YMKMTODAUIIOZAWJUGYQXNJJCLQAEVVQDSFTXHERVUYTXPURQJCLMSLHGEEAPDQMNOQWKETDIYEZUFBNDLXWQOHZERLHYWIXBRZJJRPPCCKSQZGNEBWWPRAOOWUYKFDOCOPVOTBAOGBAPCDMKACUKGFB");
    msg.maneuver_type = 36708U;
    msg.maneuver_stime = 0.5878219865211087;
    msg.maneuver_eta = 49379U;
    msg.control_loops = 3308691245U;
    msg.flags = 24U;
    msg.last_error.assign("JHHWWNRLESEFPHRNSIIKRQIDGYEWSWAYHJOCEBQXNHHCVEFQDEWJKCTDPCBGZQUQBKLUZPUPBQLRSNJKIGMJYMUANTZDWQUNGVZMAMTADHZYJDNRKMOXWHUFSOXOPLRFXGXNFPMSZGYBKZVSBYXEGQLOWEX");
    msg.last_error_time = 0.026180842924217296;

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
    msg.setTimeStamp(0.3536143553290312);
    msg.setSource(21299U);
    msg.setSourceEntity(198U);
    msg.setDestination(17104U);
    msg.setDestinationEntity(6U);
    msg.op_mode = 144U;
    msg.error_count = 93U;
    msg.error_ents.assign("ZVVQEXCWDDOMEABNSFOTTIGIPMTFJUGOTIEPEZQAUEBPGGYNNFZGCFKUACLSUXYBPCICOHRLWIM");
    msg.maneuver_type = 18799U;
    msg.maneuver_stime = 0.968571111301791;
    msg.maneuver_eta = 4667U;
    msg.control_loops = 2145647625U;
    msg.flags = 88U;
    msg.last_error.assign("ZCYDMGXHEIDALKBBSQFXKDOSIPRBOCSRQNOAUYPYJNHQNZHGAVJVCGWOMKOJIXPFILOXHGBOPSLSCGHJFNVYNDNKBVWWMFPZAKUXCFKATWYJVAUSXXSGNQQBAIRLTBQFLSWMZJBPZCIRPWTGKXPUDDQINIEGGNCFMITNTTLKZDDAJHZTVEMRRJUDQCAUGHJXVLT");
    msg.last_error_time = 0.058030044267415204;

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
    msg.setTimeStamp(0.2635618946207827);
    msg.setSource(52158U);
    msg.setSourceEntity(177U);
    msg.setDestination(37828U);
    msg.setDestinationEntity(237U);
    msg.op_mode = 202U;
    msg.error_count = 163U;
    msg.error_ents.assign("BDMOJIFTJZRWMXRLGOWOYTYLNFBLAKTWTWPI");
    msg.maneuver_type = 57851U;
    msg.maneuver_stime = 0.07162896148380093;
    msg.maneuver_eta = 51560U;
    msg.control_loops = 4275601802U;
    msg.flags = 67U;
    msg.last_error.assign("OHEFACMNAHKWSHSGXYQDUCHPPOJXXKWEFTOWMPCWSJEZVGGOOQTBKUYQEYUNJCKKEYCVSCAYJPBAOFQMRPIMOVXNFDRVRDGUTJHHLBKGNKQHVMEJZIEQURUCTUATCJCJKDDOHRRLDBNVDQNGXITXWYBVIIGKXOGUQYZPTPLGAWQSHLERPOLATXIKMZWNVLBXBDZVQPZIMPFLBLZZZUFTYSSZSDFEWFRHWCDUBFGNSJ");
    msg.last_error_time = 0.5820595325825011;

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
    msg.setTimeStamp(0.14741172062359054);
    msg.setSource(18093U);
    msg.setSourceEntity(237U);
    msg.setDestination(62871U);
    msg.setDestinationEntity(246U);
    msg.type = 52U;
    msg.request_id = 62445U;
    msg.command = 130U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.7778499752604835;
    tmp_msg_0.lon = 0.6145272433642184;
    tmp_msg_0.z = 0.38234206227253587;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.radius = 0.00036497002121471667;
    tmp_msg_0.duration = 61195U;
    tmp_msg_0.speed = 0.41437912122454235;
    tmp_msg_0.speed_units = 126U;
    tmp_msg_0.popup_period = 37478U;
    tmp_msg_0.popup_duration = 42553U;
    tmp_msg_0.flags = 179U;
    tmp_msg_0.custom.assign("WMAJLNKULKOTSGSQVITJOGRAMEKTTCQJFMYOVUTEHIVZVDRPX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30506U;
    msg.info.assign("MTEBZZUGWJUEVKBKYHFWZBTQSZRDUFTMWBWABYKQOVMMXDMLUNFLXKLKERXUXNPIULIUDBLFHZOSMQEVAGRBLPQOFPCJHYSHMPPPTVADUZQVCHTJXAIRJSUGENWGZZCZOQWESPADOHFMHEYSFEVATCROZAXLLMYXRPXVOSJJAXXWRYTBDDJYVICBQBCAGSTUGQTAJDDSGHRNJHIKKYICMNYPITPVINNVLKRQWGWIKICSNYEDWEC");

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
    msg.setTimeStamp(0.1309723061790109);
    msg.setSource(50766U);
    msg.setSourceEntity(0U);
    msg.setDestination(51102U);
    msg.setDestinationEntity(82U);
    msg.type = 24U;
    msg.request_id = 42300U;
    msg.command = 69U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 27404U;
    tmp_msg_0.custom.assign("BMJZSAAUQLKKLHFUDRJEUDUKMIVJRMSIWNKBRESRLJBFQTEAKANBHFOHDCFBZLFAILTVEWYMOUSKPYQNWJPZXEKLPYSHRWIOBYVGVVLLNBTWYOTOWKRHWPBSUBZHXCHFJKGZCGPMGMDXEQPRAQEMGTVTXCHCACZGXMOM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43168U;
    msg.info.assign("JNFYRWTQGOLNKTMHSQGKPZBUZADBQWZBIIVTOGETNQCJKVZXOXRDIFIUUBIWYKLEPHFZJXJUVYMFMDOSPUAHHPZBHDXHIJEQHVCPRGYUVFKEJOGWQXJFRUETDBBNAOFOZ");

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
    msg.setTimeStamp(0.18517937625815262);
    msg.setSource(26021U);
    msg.setSourceEntity(42U);
    msg.setDestination(60742U);
    msg.setDestinationEntity(24U);
    msg.type = 191U;
    msg.request_id = 17391U;
    msg.command = 39U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 53555U;
    tmp_msg_0.lat = 0.5598473732560204;
    tmp_msg_0.lon = 0.7372714283930931;
    tmp_msg_0.z = 0.7582625136142958;
    tmp_msg_0.z_units = 133U;
    tmp_msg_0.amplitude = 0.317021334885341;
    tmp_msg_0.pitch = 0.7436844181337846;
    tmp_msg_0.speed = 0.28707229127633327;
    tmp_msg_0.speed_units = 244U;
    tmp_msg_0.custom.assign("QALWGKRWEHXQNRPOZGUZCRUSSHONIDRPSYYMYBRCAQCQBZKESEYYXFYVHFUNUTTDTWBVZMCOUFVHNHGWXLUEFHLJDPTKJUIRYEBRAVKKLKBBEMEFPGKAMVXUAEMDGWVFLSNZXQDSULTFTIMJJIEXDOGJSJIYGHZCWQBAALRVVKVZIXCODTLPJHSSW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54760U;
    msg.info.assign("XUPPRZOWQZMGQYAJAVJURSIKUGTNYTVMYLBXPIVELDXURWRYMUMKWRZCUOHGTHNYXGPHAYEZAQIEIFJMSDEWCDHRSNARLOYDEIBKRRJWZMCQYLFVKXJKCEDHNCQIPGTSSHKNOIQCWJBCVZOQGBLZLFGTT");

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
    msg.setTimeStamp(0.030105000949450345);
    msg.setSource(61266U);
    msg.setSourceEntity(239U);
    msg.setDestination(2351U);
    msg.setDestinationEntity(254U);
    msg.command = 234U;
    msg.entities.assign("CQVMOFOCCAWFCZPQLTOZINTZKOWZZRAWNEQCLXFHRLAIWLKRUIVSGUXUFW");

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
    msg.setTimeStamp(0.875337670169212);
    msg.setSource(5455U);
    msg.setSourceEntity(26U);
    msg.setDestination(22065U);
    msg.setDestinationEntity(104U);
    msg.command = 44U;
    msg.entities.assign("UQWSDEHLFMMLWJQUFWVIQFYMZUHJTXXHNLTIWQVOAIESWWYMYIKIDMMVANBIMMBLEYTQRSYOQYCDCZKNGBVDPEUSZAJBQKZHVLILNQZSXTTOUKGERQLOOHZKIZHHZYKECWRLGKPLVIZJPPZJEPSBJGUBACNWGIUCTAYYESODFPAXGFRVRRJOVDDYUKVBJPKCXXMSFSFHRAFSRQHTRNBUAROCEONTAMFKXGFXDXDBUPJONCHPGNC");

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
    msg.setTimeStamp(0.23549316835933465);
    msg.setSource(24776U);
    msg.setSourceEntity(50U);
    msg.setDestination(5646U);
    msg.setDestinationEntity(37U);
    msg.command = 22U;
    msg.entities.assign("VTEFOPWXJOCLIUFHTGCEEAQXNOKMEKJLQKMSGXUPLDRNYZVBYVDQPLGFQIORBJCUNJWKFRBNKYDMHWQHNNOZARHUGEQDISPTSPAKUUBJRDNOBBELERHXITYKYLTMCVNDEMUACSXRAYPVPVDGXZKOPZDXBWTNZTUMICYWYVKAVBXRMWYFVPSAUZJCRBQYWCGMFGZJDGRSSTAWLX");

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
    msg.setTimeStamp(0.6589335277684304);
    msg.setSource(24179U);
    msg.setSourceEntity(215U);
    msg.setDestination(59628U);
    msg.setDestinationEntity(38U);
    msg.mcount = 80U;
    msg.mnames.assign("EMGTJYPUDASLTLGNDGMKNZTQMOWPZINISALARSSBXIUYBJRWKDPKNHBUPIBEJNXLMIXGMIOXAVAQDBPHEFZHTVEMQYVKQPU");
    msg.ecount = 102U;
    msg.enames.assign("AWBQLNISPPBEYGYDLXULILEYTXSCDDCKOQOZYIWTRPPSXJCQRGZYNQBVKWUSAGFRQUBMIHAVJBKKHYTUGNWGZIWDRGDYPKFLGMORKRNYFQYCNUDVOITQMLDOVCJSXMEUVNETJFOXOWZTBM");
    msg.ccount = 254U;
    msg.cnames.assign("YDCFILPGORDCIRJUEKJUBWGHFHXJLQRBWXAQNNLTTRHTAVPWDIVOMFEEJCOLKDFUBQTBEGBKUDENBPQNHBSXSVGGUWYYYHSYXSOSWCCCIKVOXBFSSWHVXQDMUVFEOWAMZSWMAFZWXZHTKIFRTILTADZGLKIFKRLURVSYOJQ");
    msg.last_error.assign("MVIOXZCBCHVJAETEN");
    msg.last_error_time = 0.5006574111524457;

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
    msg.setTimeStamp(0.47259619392589924);
    msg.setSource(5284U);
    msg.setSourceEntity(180U);
    msg.setDestination(59799U);
    msg.setDestinationEntity(86U);
    msg.mcount = 175U;
    msg.mnames.assign("SCANKFHMRIZQWHGTFPONCORQWPUSIEAKFYJCYIPTRCQDDBJBWCOPLGNJCQUHIYMAOMVZYZKEZDTPTLDBWVFUEKMAFGSIFTQOPGLCIVZGRPKPDHGNAAWFMOAUBXYXMKDBLJLMCLOWRGHQZDXSCXTQZRUDNXENJRHETXQSBKJQOR");
    msg.ecount = 106U;
    msg.enames.assign("COFBTBBXHRNBIVXQZFHCUUTMAUEDCXBCZLVYQNKOSZAFMFERCKULYEFQVT");
    msg.ccount = 97U;
    msg.cnames.assign("VRVKXDJZLWFSZZFGWKGWIAOQSNVIGDKVYHCAMEVKFPUQDSIMBUTHQJCNWLARUWTEFSWHT");
    msg.last_error.assign("NVYCOABYTSTHZTHUUFNIHOLXSQMNEVFACQGPNUZKSHKWIPVANEDHPMEJDJULRYRBCZLOYXZFQNHXTAOBTOAXETHSSXFVQMZYEHVZERMJDKPVEXGPK");
    msg.last_error_time = 0.8256644909595009;

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
    msg.setTimeStamp(0.45576267749228694);
    msg.setSource(15167U);
    msg.setSourceEntity(162U);
    msg.setDestination(51784U);
    msg.setDestinationEntity(74U);
    msg.mcount = 140U;
    msg.mnames.assign("VNMUIMFLCKUWPELBGVDQZRYWLRBLZPODUAQKYJWWSTFEXIHUQSOAKORGMQAROEDGNTBSVAGCUGNDOGFTVCRJJPMSLOPFXYQAHDVKALCYZUOEEGHJSUWIVOOAKFGAFMQYBPRZVXUCCUZWTQCMMWNLIB");
    msg.ecount = 207U;
    msg.enames.assign("NQWULINQLVTMOHYAUCPHKRWEGTSNZEOOXARCQGOIBHUYZEHFJEUPWWPMJTFKYUQIJFKVBRVEVBXINQYMOYPZGXBTNASRLLVCUNMDZKDSMFXZTHGQTQBOJTSYRHACJJDEPMZLDXPDVGTERPIIAVLAWOVGOORQACABEBJJBRSEDVRUWLSFFGEGKCSUBCKDZYZRNHSKFQWXIWIGMDKGTKCYCIMJLFZNISPDAJFLPHLVZTMYPUQOSW");
    msg.ccount = 237U;
    msg.cnames.assign("CHSYGJRNOPTVMRLDATOCUIPDHNNTKIOFWMQPWTRNVGQWCTJEHBMLGNFDHKFFPLOU");
    msg.last_error.assign("GVKRRAVOZZQCNVLJMVMSBGWFRJVXWAJKFVLHDWSLHPLGCEPOPRLYJRUAPMDEOMDDSBXUYTWXGQFCXFBCAYI");
    msg.last_error_time = 0.38737082835124925;

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
    msg.setTimeStamp(0.043543011854871194);
    msg.setSource(6603U);
    msg.setSourceEntity(202U);
    msg.setDestination(61466U);
    msg.setDestinationEntity(172U);
    msg.mask = 140U;
    msg.max_depth = 0.13717649003003363;
    msg.min_altitude = 0.8611082891161973;
    msg.max_altitude = 0.4355934638583704;
    msg.min_speed = 0.36097908104562715;
    msg.max_speed = 0.7626530757260189;
    msg.max_vrate = 0.4629969531817887;
    msg.lat = 0.9973541643095529;
    msg.lon = 0.9309085090344367;
    msg.orientation = 0.6829619787482463;
    msg.width = 0.19248437329157653;
    msg.length = 0.9746002566343464;

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
    msg.setTimeStamp(0.7926255660212603);
    msg.setSource(42446U);
    msg.setSourceEntity(228U);
    msg.setDestination(3347U);
    msg.setDestinationEntity(22U);
    msg.mask = 208U;
    msg.max_depth = 0.6543464140504096;
    msg.min_altitude = 0.38144488887852135;
    msg.max_altitude = 0.13243707842280572;
    msg.min_speed = 0.7250481020877648;
    msg.max_speed = 0.9226926562310335;
    msg.max_vrate = 0.37536244572773036;
    msg.lat = 0.17585177555032194;
    msg.lon = 0.21048506699960678;
    msg.orientation = 0.7352122758220296;
    msg.width = 0.9164759384356749;
    msg.length = 0.12218993753807073;

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
    msg.setTimeStamp(0.21959095343836954);
    msg.setSource(57162U);
    msg.setSourceEntity(168U);
    msg.setDestination(63344U);
    msg.setDestinationEntity(102U);
    msg.mask = 103U;
    msg.max_depth = 0.12380006942641142;
    msg.min_altitude = 0.9026793698177851;
    msg.max_altitude = 0.6620662334839288;
    msg.min_speed = 0.07400509104549668;
    msg.max_speed = 0.7907299220392734;
    msg.max_vrate = 0.418946361958207;
    msg.lat = 0.11740856932677168;
    msg.lon = 0.174887185768689;
    msg.orientation = 0.5155847726993231;
    msg.width = 0.5470653538147977;
    msg.length = 0.8917114921024369;

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
    msg.setTimeStamp(0.7158451158709609);
    msg.setSource(6778U);
    msg.setSourceEntity(166U);
    msg.setDestination(453U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.00025983240939986274);
    msg.setSource(43339U);
    msg.setSourceEntity(111U);
    msg.setDestination(25971U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.4384828364231753);
    msg.setSource(56736U);
    msg.setSourceEntity(165U);
    msg.setDestination(10173U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.4985049721331515);
    msg.setSource(54198U);
    msg.setSourceEntity(223U);
    msg.setDestination(60240U);
    msg.setDestinationEntity(56U);
    msg.duration = 48490U;

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
    msg.setTimeStamp(0.676304420319127);
    msg.setSource(24051U);
    msg.setSourceEntity(249U);
    msg.setDestination(48774U);
    msg.setDestinationEntity(172U);
    msg.duration = 53308U;

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
    msg.setTimeStamp(0.7687875768619327);
    msg.setSource(61900U);
    msg.setSourceEntity(51U);
    msg.setDestination(58504U);
    msg.setDestinationEntity(95U);
    msg.duration = 37322U;

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
    msg.setTimeStamp(0.3976572329532341);
    msg.setSource(54435U);
    msg.setSourceEntity(40U);
    msg.setDestination(37761U);
    msg.setDestinationEntity(144U);
    msg.enable = 90U;
    msg.mask = 2261991960U;
    msg.scope_ref = 2983237796U;

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
    msg.setTimeStamp(0.26147425390577905);
    msg.setSource(23166U);
    msg.setSourceEntity(141U);
    msg.setDestination(34494U);
    msg.setDestinationEntity(74U);
    msg.enable = 98U;
    msg.mask = 3048574857U;
    msg.scope_ref = 4276957473U;

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
    msg.setTimeStamp(0.9175452112992876);
    msg.setSource(20140U);
    msg.setSourceEntity(152U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(32U);
    msg.enable = 203U;
    msg.mask = 3037276883U;
    msg.scope_ref = 718251327U;

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
    msg.setTimeStamp(0.16472633994126284);
    msg.setSource(29331U);
    msg.setSourceEntity(252U);
    msg.setDestination(20997U);
    msg.setDestinationEntity(56U);
    msg.medium = 139U;

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
    msg.setTimeStamp(0.7164894593376447);
    msg.setSource(36601U);
    msg.setSourceEntity(239U);
    msg.setDestination(50818U);
    msg.setDestinationEntity(233U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.6311617692072374);
    msg.setSource(13995U);
    msg.setSourceEntity(113U);
    msg.setDestination(63503U);
    msg.setDestinationEntity(180U);
    msg.medium = 104U;

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
    msg.setTimeStamp(0.615969133484273);
    msg.setSource(21126U);
    msg.setSourceEntity(98U);
    msg.setDestination(41348U);
    msg.setDestinationEntity(116U);
    msg.value = 0.6632946387775148;
    msg.type = 8U;

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
    msg.setTimeStamp(0.8421945054931578);
    msg.setSource(64367U);
    msg.setSourceEntity(190U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(101U);
    msg.value = 0.16170193343775152;
    msg.type = 122U;

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
    msg.setTimeStamp(0.9904634100579305);
    msg.setSource(57648U);
    msg.setSourceEntity(243U);
    msg.setDestination(12701U);
    msg.setDestinationEntity(29U);
    msg.value = 0.9650922461374134;
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
    msg.setTimeStamp(0.2545736658065738);
    msg.setSource(64301U);
    msg.setSourceEntity(123U);
    msg.setDestination(28391U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.3494936272418593;
    msg.converg = 0.9413461296341534;
    msg.turbulence = 0.3776335824161856;
    msg.possimmon = 1U;
    msg.commmon = 192U;
    msg.convergmon = 117U;

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
    msg.setTimeStamp(0.36717868961104494);
    msg.setSource(62924U);
    msg.setSourceEntity(20U);
    msg.setDestination(45561U);
    msg.setDestinationEntity(87U);
    msg.possimerr = 0.39135836976340477;
    msg.converg = 0.4021256903929543;
    msg.turbulence = 0.9237371244655727;
    msg.possimmon = 12U;
    msg.commmon = 165U;
    msg.convergmon = 204U;

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
    msg.setTimeStamp(0.382583788934316);
    msg.setSource(56084U);
    msg.setSourceEntity(183U);
    msg.setDestination(61716U);
    msg.setDestinationEntity(54U);
    msg.possimerr = 0.7767221621394985;
    msg.converg = 0.056068599738322455;
    msg.turbulence = 0.5271981475967061;
    msg.possimmon = 131U;
    msg.commmon = 52U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.6005154319992229);
    msg.setSource(43536U);
    msg.setSourceEntity(48U);
    msg.setDestination(25151U);
    msg.setDestinationEntity(82U);
    msg.autonomy = 38U;
    msg.mode.assign("SKSOKOEDOSDPYTEXUANAFIJTJVFGSHMEUVYAICCUJEZUBWMJIPRHHWRBQMQWUFNEIGNKZKOPTQGQHPYDCVNLJWPVYKTARECTRLIGLYACR");

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
    msg.setTimeStamp(0.9143642254365255);
    msg.setSource(24588U);
    msg.setSourceEntity(129U);
    msg.setDestination(5315U);
    msg.setDestinationEntity(35U);
    msg.autonomy = 80U;
    msg.mode.assign("CULNPVFXEVOFGLTKQPGTXJLTGCQVOYIBBVSTMTZUTMSOUJJNCSADMCKXQARNSKDWVPWBFCXHAMZVBLHQRCJODGKBDSMDFLFTEXWGHIAUZYBAJRSBPJODOKXJFZURWDFPHDQPYZIJREXWTPXUHNSJLPOEPKZEHQYGTEYVRGGOBCKQWIYVCLVYPID");

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
    msg.setTimeStamp(0.49557962557840907);
    msg.setSource(3609U);
    msg.setSourceEntity(29U);
    msg.setDestination(22791U);
    msg.setDestinationEntity(148U);
    msg.autonomy = 165U;
    msg.mode.assign("XIEEVICRUDXJJVSPSFGOSTESAIUSZTKFORCYNXHKYXTFFZGMRILRAAGBERCXAXLWOSVZIUEPUPDZIRQDBBW");

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
    msg.setTimeStamp(0.9471287435303047);
    msg.setSource(58516U);
    msg.setSourceEntity(225U);
    msg.setDestination(2569U);
    msg.setDestinationEntity(248U);
    msg.type = 95U;
    msg.op = 103U;
    msg.possimerr = 0.2534356097702102;
    msg.converg = 0.7228136431393342;
    msg.turbulence = 0.20684930995544526;
    msg.possimmon = 172U;
    msg.commmon = 239U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.651142178967878);
    msg.setSource(62380U);
    msg.setSourceEntity(75U);
    msg.setDestination(54532U);
    msg.setDestinationEntity(28U);
    msg.type = 156U;
    msg.op = 159U;
    msg.possimerr = 0.43474008639219897;
    msg.converg = 0.988199014544075;
    msg.turbulence = 0.5925871286106811;
    msg.possimmon = 247U;
    msg.commmon = 195U;
    msg.convergmon = 128U;

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
    msg.setTimeStamp(0.18496222521498307);
    msg.setSource(32373U);
    msg.setSourceEntity(206U);
    msg.setDestination(47396U);
    msg.setDestinationEntity(48U);
    msg.type = 165U;
    msg.op = 173U;
    msg.possimerr = 0.9090072830064214;
    msg.converg = 0.33614752456209207;
    msg.turbulence = 0.5054421375349639;
    msg.possimmon = 143U;
    msg.commmon = 182U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.09211493695347417);
    msg.setSource(63133U);
    msg.setSourceEntity(248U);
    msg.setDestination(16497U);
    msg.setDestinationEntity(103U);
    msg.op = 52U;
    msg.comm_interface = 24U;
    msg.period = 8746U;
    msg.sys_dst.assign("AQHBJYFCUUBSBSXOETRUUINPVHHVSHYZDQLPLSPIIMJXTFKZKDCJUPPORQOKRS");

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
    msg.setTimeStamp(0.8592071951525608);
    msg.setSource(3944U);
    msg.setSourceEntity(60U);
    msg.setDestination(30240U);
    msg.setDestinationEntity(222U);
    msg.op = 93U;
    msg.comm_interface = 230U;
    msg.period = 22072U;
    msg.sys_dst.assign("WCBKRDNFCMQIJGAPONQTQMLUBDAGXSZHZJJCUHVQLEDSHYWOJUBEPKRDZCUHEZZYYZFSUMOYGGCMXXTWKNTARAWQHUWABDFFNXXOSJJLITVAKHTPLTVBEZGGOEGKKBWEPYMNDXVISRTTLXIUDMJYSCIJWCLOBVLUIFNNPCRKYAREKBHFEQTPZYQFRHGREYWQV");

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
    msg.setTimeStamp(0.895533298190628);
    msg.setSource(3663U);
    msg.setSourceEntity(46U);
    msg.setDestination(4357U);
    msg.setDestinationEntity(211U);
    msg.op = 229U;
    msg.comm_interface = 45U;
    msg.period = 44451U;
    msg.sys_dst.assign("SKLPRHRBNXAEBTPQGKQOTDLCSMWIYTRJOAZQYXLWWVJKHPNJGGDJBAQNQBEHFATMZUJNGNATYA");

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
    msg.setTimeStamp(0.6216897568760396);
    msg.setSource(48449U);
    msg.setSourceEntity(91U);
    msg.setDestination(61217U);
    msg.setDestinationEntity(210U);
    msg.stime = 2904463752U;
    msg.latitude = 0.7202534019748705;
    msg.longitude = 0.6896753961761269;
    msg.altitude = 22901U;
    msg.depth = 53571U;
    msg.heading = 31522U;
    msg.speed = 30489;
    msg.fuel = -99;
    msg.exec_state = -112;
    msg.plan_checksum = 62179U;

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
    msg.setTimeStamp(0.9640224189056498);
    msg.setSource(62999U);
    msg.setSourceEntity(154U);
    msg.setDestination(10028U);
    msg.setDestinationEntity(100U);
    msg.stime = 2045553513U;
    msg.latitude = 0.4001243486578757;
    msg.longitude = 0.6213987529526176;
    msg.altitude = 19287U;
    msg.depth = 51783U;
    msg.heading = 24575U;
    msg.speed = -30617;
    msg.fuel = 82;
    msg.exec_state = -80;
    msg.plan_checksum = 56940U;

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
    msg.setTimeStamp(0.35578163483055913);
    msg.setSource(58990U);
    msg.setSourceEntity(218U);
    msg.setDestination(34606U);
    msg.setDestinationEntity(29U);
    msg.stime = 3786557813U;
    msg.latitude = 0.990529158169953;
    msg.longitude = 0.5533481567011577;
    msg.altitude = 51373U;
    msg.depth = 31136U;
    msg.heading = 8168U;
    msg.speed = -3539;
    msg.fuel = 26;
    msg.exec_state = -62;
    msg.plan_checksum = 46439U;

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
    msg.setTimeStamp(0.9965282498646049);
    msg.setSource(35860U);
    msg.setSourceEntity(155U);
    msg.setDestination(62334U);
    msg.setDestinationEntity(163U);
    msg.req_id = 3703U;
    msg.comm_mean = 253U;
    msg.destination.assign("MXFSOFSMXHRVZQNPHMARXSKHBQJAEQPIUZBDKELHYVGHNYOLGYJMBGUVBXNHLEDZKATPDKLZAPFGCJKAOVFUVRBWLIEWXZMUXZDSLI");
    msg.deadline = 0.15663399219285268;
    msg.range = 0.9900078495307829;
    msg.data_mode = 207U;
    IMC::StopManeuver tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HAPAKBGYQMM");
    const signed char tmp_msg_1[] = {14, 124, 56, 82, 53, -11, 108, -32, -51, -26, 92, -1, 104, -10, 14, 8, -72, -45, 93, 5, -30, -121, -127, -50, 20, 98, -44, 111, 50, -48, -10, -70, -61, -67, -18, -87, 85, -22, -98, 69, 2, 122, -104, 77, -27, 22, 118, -43, -71, 106, -128, -58};
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
    msg.setTimeStamp(0.8385059829312885);
    msg.setSource(60515U);
    msg.setSourceEntity(128U);
    msg.setDestination(64365U);
    msg.setDestinationEntity(117U);
    msg.req_id = 60690U;
    msg.comm_mean = 183U;
    msg.destination.assign("QGEHKVFEUTLXPYPVKWOWTLEFLPKNGJGZSKDXVENGHIDQRVSUBWUT");
    msg.deadline = 0.7918333493455596;
    msg.range = 0.27956590338508236;
    msg.data_mode = 15U;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 149U;
    tmp_msg_0.actions.assign("QEIMFXMCXLXEZTZYJXQSNKJGQOGHNDHXQZNKBUEKLORSLRYHFDVAFOHUZKPIJASSEADSVDGLAUN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QMNDGYVUZKPQCHCFZXAKOIDTLRZBPZLEVTSFMWQMYNPTJMSNHXJMCGCRNPQIITOZBYJCSPLEBNZSMAONBOLSVVNPCIMKUSHGGKQQZDENDSEPFJULKXUR");
    const signed char tmp_msg_1[] = {-52, -104, -112, -10, -87, -53, 51, -66, 83, 110, -31, 46, -5, 92, 95, -57, 61, -102, -36, 11, -120, 54, 33, -24, 79, -16, -101, 118, -79, -106, -65, 102, 28, -102, -36, -101, 105, -32, -43, -41, 119, -113, -19, 39, -99, 68, -95, 114, -56, -30, -56, 19, 2, 104, 51, -108, -97, 58, -87, -18, -12, 96, 63, -1, 64, 117, 94, 45, 51, 115, 92, 76, -95, 58, 70, -81, -6};
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
    msg.setTimeStamp(0.30343628683119084);
    msg.setSource(51147U);
    msg.setSourceEntity(112U);
    msg.setDestination(238U);
    msg.setDestinationEntity(106U);
    msg.req_id = 3189U;
    msg.comm_mean = 139U;
    msg.destination.assign("ZSPJKRYIWJUYPIKUFCUVYEETTGQSECEGGXROVVZOSGPFHJDYYJNPRFTKZLWQHMWDEAHQFZHMARBLLZYBBMTGYNAQTVLNIFGAZDNKPJWTAOTSJPUXVQCXDLIRDMOKCNJNAUCVPRFEERSWITO");
    msg.deadline = 0.7099921009632858;
    msg.range = 0.6936738289291743;
    msg.data_mode = 73U;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BMSOMTHAGCHTIFNPOULGPRJDBGYWLQGFXUXDIAAFPDFPQYLXUMVHNQWQFLSOAZOKZVIOLCDBMMFQVYUCZTIZPKUVEHDRIFNMR");
    tmp_msg_0.value = 134U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XZSSHWEKKUVYLTLEDNMMITLZBSYITGKRVCXPBJZSVMPCFBBJNOIBHJSETJGPBEZPZOHCCJBAQOTFEGSFODWTLHTOMCAOTRCUKQMRLBGXAXGAUFYIAZODYDWLZTATDXGRJIYNVWMXNJYFSGRSFWQAEHCDWQINNLYVRLJRHNJAOGNMDZHNZIIMGQNVUDKWRFQVWKUWXCXM");
    const signed char tmp_msg_1[] = {-15, -102, 56, -116, -13, -55, -89, 77, 60, 111, 51, 66, 97, 8, 83, 24, 79, 111, -36, 0, 105, 70, 59, -79, -88, 83, -56, -17, -31, 85, -57, 122, 119, 64, 4, -14, -65, 66, 71, -69, -116, 122, 8, -61, 45, -98, -52, -94, -29, 9, -25, 84, -58, 94, 16, -74, -86, 122, -98, -107, -124, -109, -25, 115, 33, 62, -72, -71, -78, 118, -72, -27, -99, 89, 103, -52, 83, 112, 26, -82, -94, -68, -61, -86, -112, -100, -5, -29, 100, -28, -65, 66, 118, -7, 6, -124, 33, 1, -75, -16, 88, 3, 41, -62, 45, 109, -61, 18, -29, 54, 49, -69, 74, 79, -96, 71, 102, 123, -75, 43, -61, 84, -42, -90, -55, -102, -94, -40, 41, 19, 117, -41, 51, 20, -96, 81, 19, -114, -116, 25, -56, -102, 103, 103, 58, 30, -35, 117, -35, 8, 83, 120, 102, -97, 125, -122, -128, 1, 75, 107, -9, -104, -68, -46, -26, 46, -26, 17, -122, 34, -24, -5, -14, 87, -27, -111, 69, 62, -9, -42, -93, 38, -1, 19, -101, -56, 86, 36, 26, -127, 104, -76, -122, -75, -51, 114, -60, -79, -22, -71, 39, 58, 108, 69, -29, 77, -123, -62, -61, 106, -95, 45};
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
    msg.setTimeStamp(0.2593631155930576);
    msg.setSource(31800U);
    msg.setSourceEntity(66U);
    msg.setDestination(43918U);
    msg.setDestinationEntity(239U);
    msg.req_id = 9898U;
    msg.status = 1U;
    msg.range = 0.3069257161632163;
    msg.info.assign("QKCSTNYKHJLQYKVPKPOFFYZGHVLMPLRUJZQSQEFYBNCPJIIJZLTKBDIOXDTISHOPJDTAXBHIMNZCVPUXKLRUFRURGTNXNKBGCTVIBDBXRAOHYQVTJWHLCGRMXECSTNDWZSULVUUVREQWNFDAUWOHSRVPODDLAYMGFCMEXGFJIALWOVFBKAOXPKHXWSDMZQTHWBIXLGYGNC");

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
    msg.setTimeStamp(0.6626133116001446);
    msg.setSource(56981U);
    msg.setSourceEntity(57U);
    msg.setDestination(57644U);
    msg.setDestinationEntity(58U);
    msg.req_id = 37886U;
    msg.status = 244U;
    msg.range = 0.8294436962800945;
    msg.info.assign("HBIQTQFPNRYKFMJXSZHCSCWODZECAGJUZUIWYMKQLHVVNXPGMLJFEZPHNDKRMWUQVYPJNVXHWKFUZRRYOAGKEWNVBZADXMNIWJSEPCPHIAXBLGDWVVGBSCUHRGUHLY");

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
    msg.setTimeStamp(0.73284430212239);
    msg.setSource(58548U);
    msg.setSourceEntity(57U);
    msg.setDestination(54368U);
    msg.setDestinationEntity(138U);
    msg.req_id = 63563U;
    msg.status = 113U;
    msg.range = 0.7722628837962431;
    msg.info.assign("BKESSILAHNUYJVVCFPEYLOWLHCGRFUKGZODNUKRMALEWWRHPUXXSMEYGKIFJTQGVIRMTBVIPHVBQLDQPCTYOUVJYBCAXZSSWLZUGWGFDIQASTQSSLKQNXNEWIEJEOWHVMJZRZDNDOXIMNIOWUZQRPOFYPYBQUTKFHKWXQXRAKFJNCMCGFJCUFRIVNZXTGDVDOZPDCJHANMJOPELGYRRYXZZMHFLCSKBOSTTTMABACDIEUY");

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
    msg.setTimeStamp(0.12690892635809092);
    msg.setSource(11634U);
    msg.setSourceEntity(114U);
    msg.setDestination(64148U);
    msg.setDestinationEntity(211U);
    msg.req_id = 24570U;
    msg.destination.assign("EHQVAMKIXGJJXFVPHTNVMUWRRZRRRBWAKDGUKAMTFBBTPEPQEQXKGRAHGDJTIJKAUZSRDYXZCXBGOHCMCYMCVPOEISJOOIXHFFSABIPQWAKLEUCTQZQHNMGDWDWIBYWDNQOLDZZPJIJPDLQLBZBFEUHVRXAVLOKSQWHYLLWFDUHTSLINFXTTIOLPOPQNFNGLCAVOUCYSGUKYROSKENXJECIZTUMKNYNGAYYPGXMUZMMVY");
    msg.timeout = 0.4253812800869985;
    msg.sms_text.assign("BNIWMPCDNZORBULOEHASQKCNMJZDGQIAIBUESVJTVALJHNREIDJWRGUFZXGRVXJQWWJWYHHAXHCDQBWPXFUUURECBPLFOKHHDDWEKLKAEFKOFPBVRXMGMPUOIUOEYCNTJPDGQEIYRVZMRKXPZOMGSIVOTBZQPGLVRTQMNI");

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
    msg.setTimeStamp(0.8193963559177078);
    msg.setSource(38448U);
    msg.setSourceEntity(68U);
    msg.setDestination(12500U);
    msg.setDestinationEntity(125U);
    msg.req_id = 11350U;
    msg.destination.assign("ATANFJKIFCWYTMANUGEORASOBVBYPIUHZEVSG");
    msg.timeout = 0.7486041940350846;
    msg.sms_text.assign("UPTFETLNIXXSFPUGAMMVGSMXYZNHJZZNWZBYCDHNHRHWZVTWUOTIICKKWZALLGDGBZQLVJWRDGQTQNDYRZUHFWRFZSDEVUYQUMGWIQCSPPDLFHMBVJEIAOAAJMCIBMFAHMFYCYAMDTHVNJQKIADLRNZETJEGVKKSRMCXGUPUILQYLNPBBOWYEOSEXJPYKRSXDOOCXWRNNFTGOSTUKUCKAKBOPCDBJWEPBOSIBXPFJVVHTGLIXQXE");

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
    msg.setTimeStamp(0.08963047085202258);
    msg.setSource(40534U);
    msg.setSourceEntity(222U);
    msg.setDestination(27490U);
    msg.setDestinationEntity(79U);
    msg.req_id = 34195U;
    msg.destination.assign("PXMCHFQKBAVOEBITNCNSLKIXBGUGTQWWBCBWCTVTZIEEFXEDUUZCRKKJFMBAKZYRNKYOWTGXHCXIGYYPFRKNZACYISPTYVDNZMTMTNBCGWQLFHBMPZUDNRJVURZQPQDPWLMLHYWREAVQHDDQHLIABAQBOPASPUJHFOSUOAXMLKSEUVFVDGCZLVQAAEOMJUJNMDHIJRHSSFZYGDTGJQPCVOELILJLITN");
    msg.timeout = 0.33168103448214425;
    msg.sms_text.assign("UMVRLLCRXERHMONYWPKUKSJTJQNYGHZBJFDSMDPCQANCKPGZVBISNTOEKADGRDEQLFWPVWJRAYIJKWFLXGQRXENLAEDWOWBGPJJGXUGLLDERMITGNQPSTAFZCKHZSZITXQJTEQBOALTXFIHWZDDFSKIVXKCPPYNHB");

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
    msg.setTimeStamp(0.6105389393851745);
    msg.setSource(38072U);
    msg.setSourceEntity(207U);
    msg.setDestination(62815U);
    msg.setDestinationEntity(225U);
    msg.req_id = 19793U;
    msg.status = 92U;
    msg.info.assign("UVOUSLHMWXSZBKFABGLRXDDMZQYWPTLDFHJFJEGGZBPINZVZNLWLLODRNEPHOAKHBEZOSUGQTYULSPKYOQKCPDLAWDTIOVEYRKXMUOJVZJJQRWDICNAKUSYVDIHRYWESINQQQTVIBGPCUXIOUWTBASRURREWQQZMHCOZVERPATXJFBSFAIHLFPMKREYJNIZXMECCOMDGXXWFNBXGAKUVYCFMYKXCTMIDBSQTWJAHNGYHTFJEVHCVFGTPNP");

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
    msg.setTimeStamp(0.7617935526858183);
    msg.setSource(65426U);
    msg.setSourceEntity(75U);
    msg.setDestination(23025U);
    msg.setDestinationEntity(192U);
    msg.req_id = 64135U;
    msg.status = 150U;
    msg.info.assign("QWVDAVFZPJAQMRCKCDAOTTTWUXCMKHJQCNGLHWHYKSVVYCERWRALXYBCOCGBSODGOSAZONGPXLRIXFZIAEKRKGBXOYMULFHJOORJ");

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
    msg.setTimeStamp(0.1818115435523039);
    msg.setSource(31448U);
    msg.setSourceEntity(43U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(227U);
    msg.req_id = 9336U;
    msg.status = 241U;
    msg.info.assign("QQLSALFWSKGWRHADAKHWRLELLHSDGUIMXZPASOWBGXJIDYJJXXTKKWZFMMAUNGDHONMGVIOLQKNAR");

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
    msg.setTimeStamp(0.012612429934530045);
    msg.setSource(11172U);
    msg.setSourceEntity(191U);
    msg.setDestination(60246U);
    msg.setDestinationEntity(41U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.7346257545809511);
    msg.setSource(13952U);
    msg.setSourceEntity(229U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(46U);
    msg.state = 17U;

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
    msg.setTimeStamp(0.04308815291039547);
    msg.setSource(46576U);
    msg.setSourceEntity(132U);
    msg.setDestination(19192U);
    msg.setDestinationEntity(213U);
    msg.state = 216U;

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
    msg.setTimeStamp(0.6172063445706949);
    msg.setSource(14314U);
    msg.setSourceEntity(23U);
    msg.setDestination(5878U);
    msg.setDestinationEntity(134U);
    msg.state = 181U;

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
    msg.setTimeStamp(0.12606123146375559);
    msg.setSource(28795U);
    msg.setSourceEntity(218U);
    msg.setDestination(38857U);
    msg.setDestinationEntity(194U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.9138207930258774);
    msg.setSource(24954U);
    msg.setSourceEntity(21U);
    msg.setDestination(11970U);
    msg.setDestinationEntity(115U);
    msg.state = 87U;

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
    msg.setTimeStamp(0.716793945298354);
    msg.setSource(41297U);
    msg.setSourceEntity(77U);
    msg.setDestination(40996U);
    msg.setDestinationEntity(86U);
    msg.req_id = 38964U;
    msg.destination.assign("HPIHNMCCOWJDYJLJHSKANOLXOJPBNAELIXHLGLXQYRXMSGMODPVTIWJMVGUWWRZAAOZTMCTCEBOWBFKBTVPHCNSNDGEUPYUSBTNQEVVDFBNPNKJWFFMJXKNBU");
    msg.timeout = 0.13043565193711648;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.989478535677095;
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
    msg.setTimeStamp(0.3872354439760832);
    msg.setSource(14074U);
    msg.setSourceEntity(179U);
    msg.setDestination(28531U);
    msg.setDestinationEntity(69U);
    msg.req_id = 43053U;
    msg.destination.assign("CPYPTCQNQHTAQSHYERNSEKYFVIGZHZUQTH");
    msg.timeout = 0.7270008723479446;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.23583502085609487;
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
    msg.setTimeStamp(0.04250118777450895);
    msg.setSource(65239U);
    msg.setSourceEntity(194U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(227U);
    msg.req_id = 33730U;
    msg.destination.assign("OXAWAPIMSWZGEYKMBFRDVXNNVJRXGBMTYSEZMAEZPZFQNSCWPB");
    msg.timeout = 0.3570879753498887;
    IMC::AcousticMessage tmp_msg_0;
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OZIUXDYHNIMYBPERDMJOZEJFEBQNRYGBCARADCVWXKKAUZBEWLVZEGMZHOOZBDPQ");
    tmp_tmp_msg_0_0.value.assign("TDBBTFLQXETPNHVYGJAHSOZRLMVVKKDOHQSVDVDTCEFUCCOINAXDNIDIAHRNASDUIRMAZGWXOBMUSDTIBGEGQSLHGYFPEXPZYEKOJYQIOKWGKYLOJJIVBPBUSJLFPWXBFDPKMUHXREQVXSUVMDFHAYRPOHFKEWMQCGHCEQLVNXQFOIBKITWCUNZNQWXTWCMFWPUNMFRYLPUJRGWLTNSO");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8226707766612722);
    msg.setSource(32931U);
    msg.setSourceEntity(27U);
    msg.setDestination(4295U);
    msg.setDestinationEntity(193U);
    msg.req_id = 32701U;
    msg.status = 197U;
    msg.info.assign("ITLPGROHSJVLEJKRWSCFFTIDFFIPGSNICGQSCEHUTCHUUWNPIZQSMBYVJZNHMXPGXTJATQZVCPNZWUVVCJLHRURXSSOUCNDYSAZXECMXPNGRUBFBEQKAUPYNJVHQLGOEDWVAZAKBGMRQWYAEDDLDENHXMOESCYWGAIILVDTOLIRVUHBWYOQABKKDAWTYLZHTJMXXBMGKJFSJOLQOBEJYMKPHUFVRIKCMRTDNFBTZMXRFI");

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
    msg.setTimeStamp(0.791495450793469);
    msg.setSource(41515U);
    msg.setSourceEntity(156U);
    msg.setDestination(60403U);
    msg.setDestinationEntity(227U);
    msg.req_id = 8482U;
    msg.status = 168U;
    msg.info.assign("ZFQEMONXUZUTHDGGZNPSGMXBNCLBXCYTBKMEMLXYPVKBSBHBUJPIYVQJFVJDPGXDPJDMNIKXTRUOMNCPLRDOYM");

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
    msg.setTimeStamp(0.9694737331406585);
    msg.setSource(42618U);
    msg.setSourceEntity(192U);
    msg.setDestination(63740U);
    msg.setDestinationEntity(168U);
    msg.req_id = 18779U;
    msg.status = 142U;
    msg.info.assign("JAZKHQYIMMRLTDWLTMPEQPQDXDZDZRUCPJQPZXKQNVIUATUDPJTSPQCNQVFCXZRISHWCWTRYSLAIWUYKHIBVLVBAMXLCPEIKOVKNYXOVLOCUPSSYSNQFOAELAYJEDTAMCYGGSQJUTGBGOMSFQZWUUHIATEOLHJZGFJSEXTDFBHYMCKRBHPSCRRKBX");

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
    msg.setTimeStamp(0.20630913380389826);
    msg.setSource(25150U);
    msg.setSourceEntity(144U);
    msg.setDestination(60940U);
    msg.setDestinationEntity(195U);
    msg.name.assign("SSKUZXUMOJWXJTPWDYXFVTTIZIXDLWLFRJWKLMBOPIXXMLGHIDODVSUFRJVBJYWUFQHVQGLPQAXYEINORSEDJSSTQYOTOXGAPQRRGELZKCWGIQECWCGJZSWDASAWYTGHKAVAFWRSQOGCJIHZINFBUCBILCBHNULAPBNKKKYMEAETEUEPEPMVYBIDCMRAOZRKEGXJNQFHVTZFHUPDMSRO");
    msg.report_time = 0.9423482849912972;
    msg.medium = 125U;
    msg.lat = 0.39653733562655336;
    msg.lon = 0.48379393735675313;
    msg.depth = 0.2985143702530445;
    msg.alt = 0.5954832251301149;
    msg.sog = 0.6283304538968049;
    msg.cog = 0.5145677333711038;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("JALSALOHKMICDTJXDZPQRDDZFWQPYBQXDT");
    tmp_msg_0.value = 234U;
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
    msg.setTimeStamp(0.36202202817385254);
    msg.setSource(6815U);
    msg.setSourceEntity(173U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(13U);
    msg.name.assign("YCAARRQSYIWITUUSOBWCRZYDVOJOUJMQBFHTNMPRMZVUQGOHYDZNP");
    msg.report_time = 0.3460355783234066;
    msg.medium = 188U;
    msg.lat = 0.8703694471673495;
    msg.lon = 0.35389876778732665;
    msg.depth = 0.035797753489660744;
    msg.alt = 0.7025257193122142;
    msg.sog = 0.7054265459080522;
    msg.cog = 0.8704316088083612;

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
    msg.setTimeStamp(0.6431970702727989);
    msg.setSource(15112U);
    msg.setSourceEntity(231U);
    msg.setDestination(39356U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ADMKMDFSZCQVZGKEZIXSFSWXVFQHBVELPAEBKVCXMPESTDNSZVGIXUEVRFETOIOJSWPYPNBGBPDCYDSXBZYHMWKUJYFAAUGHXLIDLWHJUTJDUTCIPXGZQGRKWRLKEAMVOJLVFHNEBCRFCULMHGASEXXZBAQCRYELNGACUTRFKJQYKJMITQSBTCNON");
    msg.report_time = 0.44081763470379753;
    msg.medium = 75U;
    msg.lat = 0.07063710240607624;
    msg.lon = 0.4507167247333469;
    msg.depth = 0.7354265735210683;
    msg.alt = 0.5694925427438714;
    msg.sog = 0.7126378699878633;
    msg.cog = 0.5511570941250844;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 114U;
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
    msg.setTimeStamp(0.36810423757559363);
    msg.setSource(12477U);
    msg.setSourceEntity(54U);
    msg.setDestination(24845U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.49326172236541954);
    msg.setSource(62038U);
    msg.setSourceEntity(101U);
    msg.setDestination(7704U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.16745242602150967);
    msg.setSource(36267U);
    msg.setSourceEntity(86U);
    msg.setDestination(12861U);
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
    msg.setTimeStamp(0.35600525790023185);
    msg.setSource(28711U);
    msg.setSourceEntity(53U);
    msg.setDestination(32369U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("NABNPQLFPRVXAYOUBXADFXDRQJCBZPWHVBSNYRKJAIOIICQNVDVTQZFJROLIGFWSCYUVAJLXDENWO");
    msg.description.assign("WFYQQXWBFHSUMOKZAMFPHNQEJFPPJUSWZCEBUJBMCNDFBZAIUUIXRR");
    msg.vnamespace.assign("VNOJFBGQYRKMKPUMHMUENEBQNDVFWSLCIHCLVRMZCUPUZEHXOUAXJJDFWTWGPBSCPAEXCXTOGBRDMLXEZWHBLVMSFIQCOPHLAZWBLLNKVMSCSYGRGXYRZDOHGCYBHFXPLYYBEVRRRIFKQPVKIYHFKDDJQEUKZUWBWCAAITFAQRJYAYDFEPZTNOOWLDVXTIAKXHGI");
    msg.start_man_id.assign("WSLZVHLKBHLAGRPTGAIAQNWEBGVQDSEKTZWCDEVRECSKCKVEQUNULCGHJQBGRNJVZIFKADEDVHRMAFUGCVOXHHTSLDMDULYYIMXRJKUTID");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.394064374573069;
    tmp_msg_0.lon = 0.7113993645773611;
    tmp_msg_0.z = 0.4068466916182425;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.2849476667905372;
    tmp_msg_0.speed_units = 39U;
    tmp_msg_0.abort_z = 0.5999286817796994;
    tmp_msg_0.bearing = 0.8567820301224582;
    tmp_msg_0.glide_slope = 12U;
    tmp_msg_0.glide_slope_alt = 0.16340047047752249;
    tmp_msg_0.custom.assign("WLVCZXOPARIVMT");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.25016827895347626);
    msg.setSource(41523U);
    msg.setSourceEntity(36U);
    msg.setDestination(8196U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("DTKXKJQNYESNFYJABYNZZD");
    msg.description.assign("KHQYERMFPINXBRGDZVLJFWNTYQBXZOYBAJKJEEMWLDFTOXAZAXWCOORTSWKKNBBFUUCCGTQLZVAMKTOPLHSURRPSGZSUHPKCESVUY");
    msg.vnamespace.assign("ERDQSRDLAHFIWNTIKHGYBXKXGLWKRPZPJBSQEMMYXCWUSAMJGQHGZVOYPSMDTSEEZNUJIGCVBYWKZBOTTWSMZYRCVHAMNDNFOVSPQUOPJCPGELIONPLNVINKUZGANRFFAKGYYIALXSOKFISCHBDGUWWLDVHDQHAOBDRCEZLDDJRPHSERUJB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YEVPDHYXQHSWMALTEZMMWRKAWUNQCKBILACRXGEPHZCJEPMLXBXBLEJOWNQACJLFKLMHBDEPURVDZYONTSQNDBPE");
    tmp_msg_0.value.assign("JWHEBDLVJEITDHQLYZCPYRKSQXAYJNQLZVTTNXDMNUFWEGDBVAKCIUPLOXEFSWJBJCBWWVZWIEKUZVRMLOHKQVHCXBOJNVIJGIFPXANNDKOPZWVCASMSILPHTKHJMZHGFSZTTWGMULIQKEXLRHBZJIQQCTRXOPMYVXACDUZGENOKAFAPSRSDMYRUYDUGIETOMHQFFSCYHGFFWWPVGMSJSYBBAUMC");
    tmp_msg_0.type = 148U;
    tmp_msg_0.access = 232U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KFJCZJOTHAUXJYGEHKMXPFYNLRJYGMUVEDLKEZPBSFXLNKJBJHICFGJDIXMIRDBIYQGUNJAZTAYYSHSHNUHBHBTITRDAOCQMMVISQNRRCTNPLZYTQZQFNDCCIKKXXRAGOGWWA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YOMZMPEKRQJQLLDCLJMCKXXTDYZCAXXESHUJBCBXILEOJISCZVHNONKBZSTDRTRCFGNVNSTINNSVVFPUYRYWCOQOOQZYXQJQEIEWAPBLVSBEWBHQUHGLHEGLKDNM");
    IMC::RowsCoverage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.7720053355990327;
    tmp_tmp_msg_1_0.lon = 0.04936360217909763;
    tmp_tmp_msg_1_0.z = 0.7908599488265343;
    tmp_tmp_msg_1_0.z_units = 158U;
    tmp_tmp_msg_1_0.speed = 0.33613395903760557;
    tmp_tmp_msg_1_0.speed_units = 203U;
    tmp_tmp_msg_1_0.bearing = 0.4775399106385746;
    tmp_tmp_msg_1_0.cross_angle = 0.8944090706584426;
    tmp_tmp_msg_1_0.width = 0.48193441786111046;
    tmp_tmp_msg_1_0.length = 0.9270616223924066;
    tmp_tmp_msg_1_0.coff = 17U;
    tmp_tmp_msg_1_0.angaperture = 0.7776965569411564;
    tmp_tmp_msg_1_0.range = 2658U;
    tmp_tmp_msg_1_0.overlap = 252U;
    tmp_tmp_msg_1_0.flags = 122U;
    tmp_tmp_msg_1_0.custom.assign("GJUFBRKYZFAUAOYMBCNKAKORXMPHVNEGNBACPUNTEJATLRTHOQUBMDJPRYPSYSITDGICPXXFRENLPXQVLWCKCGXTXYMNZZQEOLSKXIUDFHFPCJDMFDPLOVJEVZRVWRSRFIDSGJFQHOACAOYWNUHTTZNZXKONSLESYWTZQSSCJIJWKBGHBBAOCEU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LogBookControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.command = 16U;
    tmp_tmp_msg_1_1.htime = 0.3847437570493525;
    IMC::LogBookEntry tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.type = 37U;
    tmp_tmp_tmp_msg_1_1_0.htime = 0.7775785888761149;
    tmp_tmp_tmp_msg_1_1_0.context.assign("OSDWWGUNAYH");
    tmp_tmp_tmp_msg_1_1_0.text.assign("OFSOFABGFEJHFUPUFOQZUJAGIEZEYYOTDMUTHO");
    tmp_tmp_msg_1_1.msg.push_back(tmp_tmp_tmp_msg_1_1_0);
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::WaterVelocity tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.validity = 82U;
    tmp_tmp_msg_1_2.x = 0.2054776996303821;
    tmp_tmp_msg_1_2.y = 0.17198446993883332;
    tmp_tmp_msg_1_2.z = 0.674485877091611;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::UsblFixExtended tmp_msg_2;
    tmp_msg_2.target.assign("MVYHJDNRWNTOKVSIWFAJLPFSGNXDTMZVSLPZMUJFZGYHQQUXVACXQROTMRSDEROGCNHQZEMPLAOYXBSSUKDVJTHNJABADWUUAFNCKYCYGFEOQBAUCBEROJXRFVJHYQNGWBODLPXZFWEORIEMXTGNUCDWCFIMCZZHZMCNGEYSSWVTZL");
    tmp_msg_2.lat = 0.6486716279944652;
    tmp_msg_2.lon = 0.3922960018963888;
    tmp_msg_2.z_units = 52U;
    tmp_msg_2.z = 0.08252435379720913;
    tmp_msg_2.accuracy = 0.2189704886021394;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::TransmissionStatus tmp_msg_3;
    tmp_msg_3.req_id = 24515U;
    tmp_msg_3.status = 216U;
    tmp_msg_3.range = 0.5518507416951559;
    tmp_msg_3.info.assign("BJHIBVKSZAAXTQSLULSIFPJFRVNKAGRIMOALNZYYOFDSRBIVXNZUPLCZAQCRNOVNMULVETBRDDYRQFWCEQWYOFEHQOWWHCGAGJTKMHJMSITEOVGBYIDHZLZPNJXKUTXRMDBIMGRJVKJIXSKMPHOVTCOWWEWSQOTGUXDBYHUBLZLOKQEVNFNXAFJHNGIG");
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
    msg.setTimeStamp(0.3314094256347868);
    msg.setSource(38395U);
    msg.setSourceEntity(111U);
    msg.setDestination(60083U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("FLOUGYTHDBEJWJIPWHAFTDOWLUWFXSAQMIHIRUPHUAZPFZVYAODSNJSIGNSBAPIXFCIPKDYVZRMHGQNRKSQOZPRFKTAEFOXVTWRCUHYPUJDIASKXMFQLNEHDJ");
    msg.description.assign("PYGEAKXWPVPEHPURUODWHQQQDAFSRCMYOVILTZCLEQJHXBGIYSTRXGCQTZYNGSQVIHCVLPJZTPVDRASZQZJLXLEUSJRPYOUEWRNAFNUAYNJOAEGMGGRHFBEQOLFWFXGKKBKJCZDWPECXJMZNIXWSIOMYTBLFJXMKSIMFRKKMFIBZHYALPTHNNSKBCVKJYPMVKVAVSGBHMDMTSZQWUIWUNOEBNDXYEDTUZBADRUGTFLFI");
    msg.vnamespace.assign("IAUDPIHFDVLRCKMMWEBKIKTVYVOIIJJOJAVFABDXMHLHNIEMRQDJXVWSTQUWHLGIDGWXERWGGFCDFYNOACJNZVUPYCLMUBYZQNPUZZFMHUBVJNNDYKOINMUYYWBRGCYFKRCETKDQXTHZSSZWQGAOLAJYXSVPLPJPIEKUTRQBQTPSXVIZOLRBJTYEZS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PMUSQTDWGVXQRKCZEOLOBHRUWBEIFIMNFLFCVI");
    tmp_msg_0.value.assign("RHUHMPHLWNOVRPKDXRCLJTVBDERKIQIJM");
    tmp_msg_0.type = 58U;
    tmp_msg_0.access = 7U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FGLQPUUMXIOGPKHARZEUHVBBLXOFWRUWIGLDWMJJZPNSEZOVCIZXLBGEYYVPMMDIWJQIYVCQUTMYHPPCTHKECSLTYRYBTGNBHBAKOPBIIXAZWXEDZCUYAAKWYCHZGEJBVWFKLDSSNMNTUJMTDJVHMTMQNJBRPKAIFCQQRZYFKRSZQRYWEQUOSOODMFRSJCOXXPUALGAJGBNHKOENRHXADQNXCKODWRVPTXE");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ASCGULXDIEMGRFUTEIRFSGFLRQJHFYVHHBYRHITDZWRSSVVDKAPNADYWFKFZCLZTNYWRBTCKYNPXKVXOWHJGZRMQXNLOLJLKSOPHRWVIQLJGOPGBEQJUNPTZMOBEOAYEBJDWNUJKSOAEGGIUZNAXJPUEYCXIXWEYZBERCICANKXMOLLZKTFBZWMWZQBXVPICETSVTVOCDDICUGMPJMFXUMSTJMFKAOLIUVAPWDKNVBAQNSDCHQQMDY");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.33339762490955527;
    tmp_tmp_msg_1_0.lon = 0.24370212616736775;
    tmp_tmp_msg_1_0.z = 0.281125483010195;
    tmp_tmp_msg_1_0.z_units = 30U;
    tmp_tmp_msg_1_0.speed = 0.3157322355059968;
    tmp_tmp_msg_1_0.speed_units = 1U;
    tmp_tmp_msg_1_0.start_time = 0.9011360719101215;
    tmp_tmp_msg_1_0.custom.assign("ASXRHUDZMIOLTUATKQJGBLWJQRRINTZRYXKUESNLNCOPPVCAXRJEJBZKWBWEWXUFAVMUTLNDFFEGIOGBCDIFCZJFOZEYBZCTLFBWYSPEAPMOPEGOXSDVECYXHZFGDNSAGUEKHLXKQIAMYCANHBMMWLKUVTQOQRIBOXRIFGVZUMVXPJNHWWKHPIIECQL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::StopManeuver tmp_tmp_msg_1_1;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DAQOMTVYWIIOPEYWKLWLEABNBPIOCGMWVVKJCQRPXKDOLWYUNVJDHPRODUPXMMUTHURHPGERXUKCJQDNBIFCZSCWCTHQSXMGORGYJVZNZAIFNERNQQDSEIFBIAXFLZVGCLPTUAFZQYOEFXKMTYFUGPGDEZPWTSGBJFLMEJWHJHXRILATFHSTJOOXASYLTWIVKRZQYSAGLIFNZRDJZKHDMASBXKCYRUMSQJM");
    tmp_msg_2.dest_man.assign("ZLYOVDFRHVYNVPVSXNDSSLGHIJPAIXMXAQW");
    tmp_msg_2.conditions.assign("MWYWOCUHFLFJDKSQZTIJPZDKQXRRESBGFMBHMOXZODYKXIIYBLMBPWONGUKWUNMNYZCSNOZKARJARHEIZTVMFFTXGQSACTWPMRTQTUMCCTMXIRLUNAZRHVBWFLRYLEELOHDSEFJQBPYQPPERKZXNHDNWASZGDGFAIVBYAVUIJVKJSBYDIGEVY");
    IMC::EstimatedState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.6484884908409315;
    tmp_tmp_msg_2_0.lon = 0.38050148049706234;
    tmp_tmp_msg_2_0.height = 0.6209968046250417;
    tmp_tmp_msg_2_0.x = 0.7258898902938097;
    tmp_tmp_msg_2_0.y = 0.24961302502434912;
    tmp_tmp_msg_2_0.z = 0.14075987968796955;
    tmp_tmp_msg_2_0.phi = 0.5299362009640672;
    tmp_tmp_msg_2_0.theta = 0.2939966878218241;
    tmp_tmp_msg_2_0.psi = 0.8456585376424083;
    tmp_tmp_msg_2_0.u = 0.14912648823943997;
    tmp_tmp_msg_2_0.v = 0.47243264562084875;
    tmp_tmp_msg_2_0.w = 0.42522322352433195;
    tmp_tmp_msg_2_0.vx = 0.38529588984104246;
    tmp_tmp_msg_2_0.vy = 0.10608420226092519;
    tmp_tmp_msg_2_0.vz = 0.6560503858812007;
    tmp_tmp_msg_2_0.p = 0.26711970047094635;
    tmp_tmp_msg_2_0.q = 0.1583527676787907;
    tmp_tmp_msg_2_0.r = 0.4547018922306203;
    tmp_tmp_msg_2_0.depth = 0.250781522118364;
    tmp_tmp_msg_2_0.alt = 0.3801228230570399;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::DesiredPath tmp_msg_3;
    tmp_msg_3.path_ref = 4288910821U;
    tmp_msg_3.start_lat = 0.2845695952595694;
    tmp_msg_3.start_lon = 0.9724736983552642;
    tmp_msg_3.start_z = 0.6783120406110309;
    tmp_msg_3.start_z_units = 189U;
    tmp_msg_3.end_lat = 0.6474177706720767;
    tmp_msg_3.end_lon = 0.1821661863868852;
    tmp_msg_3.end_z = 0.019013871368973145;
    tmp_msg_3.end_z_units = 136U;
    tmp_msg_3.speed = 0.25613239778109953;
    tmp_msg_3.speed_units = 12U;
    tmp_msg_3.lradius = 0.8758404806928111;
    tmp_msg_3.flags = 173U;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.49387769794686864);
    msg.setSource(56865U);
    msg.setSourceEntity(169U);
    msg.setDestination(48636U);
    msg.setDestinationEntity(17U);
    msg.maneuver_id.assign("RKXPSBNYCAHZSKNRXVUOPWYUIGGHSZZTMVNMALWPVSNHRRSMLOLLNYBEUFKWEEMBT");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 50738U;
    tmp_msg_0.lat = 0.554148140617691;
    tmp_msg_0.lon = 0.8949758961451981;
    tmp_msg_0.z = 0.2675472615713895;
    tmp_msg_0.z_units = 114U;
    tmp_msg_0.speed = 0.11198214130862971;
    tmp_msg_0.speed_units = 169U;
    tmp_msg_0.roll = 0.6445332694096148;
    tmp_msg_0.pitch = 0.8894216930036613;
    tmp_msg_0.yaw = 0.9275876384800689;
    tmp_msg_0.custom.assign("HRGSTIRULUAJSCHDHFYBBIFUNRNZDNBXGDLAKNUYYMAHPQZZXERZJIQBYUKTCNVFTEJVYEAKYSXMOPOJWWGGXFEOLHMNTCUQCBXJRMZRPSAERKDLHQPWQVGUVZCARDGVDBIYXLEIIUXAXNOVMAKPDQSXSOQIRMBYOJFFZLOHSASIUMKKIWGTPWFCKWCSWBZOCELOJWFVLYTKQVKGLZQDCVCQUMTSOTTEGMJBPNINEDRTPJVYZHPGBJXHFH");
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
    msg.setTimeStamp(0.3858316518620838);
    msg.setSource(50626U);
    msg.setSourceEntity(115U);
    msg.setDestination(42069U);
    msg.setDestinationEntity(188U);
    msg.maneuver_id.assign("OCKQMUTURRJXCBJUXZRLQPYTIPEUCYXHMYTNPQMETJKYOJHTFYKNEV");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 62489U;
    tmp_msg_0.lat = 0.6056827571137481;
    tmp_msg_0.lon = 0.03612390550117106;
    tmp_msg_0.z = 0.6467812548137702;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.pitch = 0.9238891320864856;
    tmp_msg_0.amplitude = 0.8170732131215338;
    tmp_msg_0.duration = 54027U;
    tmp_msg_0.speed = 0.7624611502568844;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.radius = 0.13852386617865575;
    tmp_msg_0.direction = 233U;
    tmp_msg_0.custom.assign("MCYFIOEHJEULABNPTAMWULVZMHVWDTGNGAPUYXGVNICSGSQYLQDNZAQWURXFYZTLVIXPPLYATEJLBERFDJOMMLTAJTBZKBGIVQWAOLORKYRWKOYWNEVUNQZOSFHWSRWHKSHVODWGTWATBCEHMPKUIBPQFPHDEQJKCRXYSECEHBNCCXXZCNZMXKFXRNJQHPRAGJNGIFUZFRJFBDOJSOUDHMFIVZPZUYVUXLTKLBJKRSQDSBIIDGYOPDM");
    msg.data.set(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 63856U;
    tmp_msg_1.off_x = 0.35574102377179084;
    tmp_msg_1.off_y = 0.20809897636443941;
    tmp_msg_1.off_z = 0.263913231130255;
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
    msg.setTimeStamp(0.4712177671582959);
    msg.setSource(40899U);
    msg.setSourceEntity(212U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(127U);
    msg.maneuver_id.assign("RVUYZNIPTFHQCAOWNXSLXDBFEIOJEEBPGZSLGHCPUEYOJSATMRKXZSJVKITIQHACTMRLMBQJOEQRDMRCGQRZATTPJIIDULRUFLWRFOABDCZKLMBSULGKRWAQHMNXOWGNTMTBGWPMXMIAZHGYNYPOYQICPTVYDXUONZSXNXZSHFQELSVCAJWNJPCHFDABYR");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.6088769346765366;
    tmp_msg_0.lon = 0.5983247103567902;
    tmp_msg_0.z = 0.9370187747702916;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.speed = 0.4199596322437881;
    tmp_msg_0.speed_units = 110U;
    tmp_msg_0.takeoff_pitch = 0.3055359873590614;
    tmp_msg_0.custom.assign("LWBOOYAIAWZOWFFLRUPDCPGZPYPVFIMYGCQTJMDDHUEGJKPLTRLBXQZFYFUCXWNTBGXKMVRHJBTXFZXQTGLTMCAKUNGWSJSAOAHDNEZNGEKSADHQFXOKIIYYPHJOHWIDWYLCFOPA");
    msg.data.set(tmp_msg_0);
    IMC::Elevator tmp_msg_1;
    tmp_msg_1.timeout = 54442U;
    tmp_msg_1.flags = 59U;
    tmp_msg_1.lat = 0.3191986917018418;
    tmp_msg_1.lon = 0.29777320480343317;
    tmp_msg_1.start_z = 0.44244252345907487;
    tmp_msg_1.start_z_units = 102U;
    tmp_msg_1.end_z = 0.9119432892450665;
    tmp_msg_1.end_z_units = 176U;
    tmp_msg_1.radius = 0.9957627472605883;
    tmp_msg_1.speed = 0.8612177356440328;
    tmp_msg_1.speed_units = 170U;
    tmp_msg_1.custom.assign("OULYRERBKDXJJHEMFIDDQRAC");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::MessagePart tmp_msg_2;
    tmp_msg_2.uid = 108U;
    tmp_msg_2.frag_number = 141U;
    tmp_msg_2.num_frags = 183U;
    const signed char tmp_tmp_msg_2_0[] = {84, -115, 78, -102, -106, 73, 25, -7, 126, -2, 124, -33, -2, -80, 124, -113, 59, -99, 59, -24, 77, -25, 12, 77, 90, -103, -120, -84, -109, 37, -53, -22, 60, -83, -29, -38, 107, -75, -59, 120, -62, 22, 18, 57, 8, 21, 13, 1, 109, -119, -18, 24, 5, 87, -113, 6, 118, -48, 80, -73, 94, -37, -30, -64, -106, -39, -45, 109, -104, -17, -103, -107, 125, -65, 67, -45, -74, -114, -78, -115, -62, -72, 13, 22, 66, -39, -63, -45, 5, 76, 101, -120, 69, -17, 0, 112, 14, -76, 17, -81, -76, 48, 58, 112, -15, 104, 44, 71, 78};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.5534760313921359);
    msg.setSource(26931U);
    msg.setSourceEntity(252U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(230U);
    msg.source_man.assign("XFVLLJHZGEKEXAZGNSCDTZZBBCSIDTTUKFBKNLUSYJQYGQWZPXZBHLVFOZUZNHINOBRUDYAXLDHMGAGIJKHTRQKFKFVQOYPRIOPQVUCUVVAMAALSROICKFDIYGIZKOEBNKPXQPR");
    msg.dest_man.assign("KBADNBDGNVCTUHRCQVLAKZUYKPGUEUHGXGJEMSEPZQXUQYLAMROXJXCNPZIAXIPQNJSXWOGFPDHWLCWRQDYOOWBPROYCEPNPIXIVYUTUBEMMLVKNPPTIHZVQNYINJVSDOBVSABHTQFYEYFKMTLKYACUXOIRFLSCDHTCOLUWCHTZZMEIGJLLWADJDMLTAQTHWVRXF");
    msg.conditions.assign("ARPGCFEKUXVFWYTYGXMEWPTBQIRDLLFXWWKFBPXGXPDVHMNNOJRCEYLZZWBOAYUXHUSUVIABAKGNEJWRQSNUEFKJRJ");
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 14508U;
    tmp_msg_0.destination.assign("SLFSZZYTDOBEAIMQIKXCZFAMHUMWYINPTNKYQVBQEGXAKCGUSJJIMGDKATEYPYGQXPJOOYHYURLIEOFHLGPKEADMXSUCGRWVDKKNOCRIXWQPLSYVUXHLDFCXHGHVNGBEXYZHNIWOCZPQNZ");
    tmp_msg_0.timeout = 0.49792110319053684;
    tmp_msg_0.sms_text.assign("JCWXZRAUOJZHTFHITCADZYMGZLRCTRZPGWSOFRNVUONBEWYDTMNYYRPDWEASPWQWLKJPBBXTTLEMNFAFFBOZFE");
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
    msg.setTimeStamp(0.10389141508443567);
    msg.setSource(19457U);
    msg.setSourceEntity(195U);
    msg.setDestination(13247U);
    msg.setDestinationEntity(190U);
    msg.source_man.assign("OFIUTAKVAJRCUHXDZMIEIBVKYXTSMHKGXWSGFOJWSEOAOYVTOYCWVSWAWNIBFAZMORAFQJPJQGXJAQFMHYNVVEMCYHSERRBPLBPTDWSYKPPEJNPWKVLKIDNVBPHZHRADNGLMIQLXDJJGISKZELQOBFILMUHHXXCQIBCUUTZGUAVKUMKTDIETDUOJCRENUSHYQBOSLPTWHLZDFLGAXCPJUXYESVQRYW");
    msg.dest_man.assign("UXBLITVVHQCWDWSPEKYDKJQAFKNAPSVBSOAUQEKZDMSNMFTPRBNCVCGXYQNHPWGQUPKAPZKSJW");
    msg.conditions.assign("TRAGWPHPAGTCEFITFRFVWNBXNDNRJQQDEMBQCFXAVBXSIPJZABOGCYLRWONKNFPS");

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
    msg.setTimeStamp(0.8601497092278042);
    msg.setSource(14925U);
    msg.setSourceEntity(52U);
    msg.setDestination(15200U);
    msg.setDestinationEntity(213U);
    msg.source_man.assign("YFBQPKDTDITFFJMOZWZDKLENSAEGFSICSPVKTWDRWBFQQZQNKJGJLINWBSJPCRUVMUBGAYCDMTROWEJAOENCHZWPEBXAODSKPBJTBXUHPVFONAIMJLOIHAKXQVVNAUNDSLMXQHGOFBBZJWGNIOSSAPLZQHSVKESNILZLVXYZAKTPTXRTVRFCRMQLGXGVZXWHL");
    msg.dest_man.assign("UQTPTHZDRKYBQWPPGOTLIYZONBYWGUCOXPZNNYIGGEFAOHJQQMUXXJQBQEZIPGMEAEXSHTWDUTKVVXKMZVVAPEMMHVFVKTBCFPMDJQPEHNJRQKBENIMRJDZUDTOUQWLCEADCHYSCWAIXGKBAYLV");
    msg.conditions.assign("ULBTXPSGPNXVODEJHHMTDJHRFQNMYCABDVRKUZDOSLKDTHPQCLAZKHVOCJRRKWUYIFXEBHJAFJLIBSYDZP");

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
    msg.setTimeStamp(0.9346692200928858);
    msg.setSource(61760U);
    msg.setSourceEntity(160U);
    msg.setDestination(35750U);
    msg.setDestinationEntity(231U);
    msg.command = 139U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BDFKZKOBFUCDTIEJXGNBEJHDGRXUVLWWUVTFLGRPKWLVIGAMXSUKAZMEBAMTBEPTILJSJHFTVPGHICKCPQBLQEFYXOUSJNNECRRXKQSMKUMGWZYSWRJKNDTUXERGLYCCZXGBIDLTFAFUQQZCDAKIMAOQWNSHAGOYYKHSYDOHVMCXMQNSIIQYZZIQNLPLXAZDDHPWTFI");
    tmp_msg_0.description.assign("INQYNADRDKQECGJAOQSHUYOAHVBCGHLLNDNIUGPKBAXPLGEHRQWJVWWQTFLSY");
    tmp_msg_0.vnamespace.assign("KFMVDWBCINOPXRNPOITSIXETHEVACWINMGLJUWWKUEWFSKTTRTVXCHEFDUNTUZWAFJAFISCPEHXZAKPBAMOXLNSYJZYKJGDBAGLBQYSEMSWYXDGORKMLCPCGOXFRUBAHGGINPBJFJLOKJCGV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MMIVLQJGIPKZVKUWFHONTDBARVTOEMFTYGTBUDPZCMLQRDSBKPEVNACPMHUMPOCPJKCSDRPYWLAWBKZTOGKQHURAUHWFEMEFZSVOSAYQAGJFDSQXJHOZLXNCXWLCFBIWDDBEAH");
    tmp_tmp_msg_0_0.value.assign("BUKVAWUIQWIYRPBLTHMJQTBWNYQAJYUZHMUEHMGMUPQIAJHCMRNLQFYQCDYWOSNRFEQSWMPCFWTUAFMCGFZSJDXZBENVVACXSUKEQKKPEKPAZPNMJLOCVICCHIPJGTRPWRWTKIFNGZODJSRXZJKHTBADGFFOUBXODIRAXXSRETBYNBWVLCEXHOLDETBVNPZIZYZNUESOF");
    tmp_tmp_msg_0_0.type = 122U;
    tmp_tmp_msg_0_0.access = 143U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HYGSASBRYEAITCGMMUBYJZBQPRZCVLLSNIQNOKWTEDPPXAIOFXAQBRSECHZGQQSSIWRXRRDAQVSOKYXUDHQHZFKKUDFBGYUUHVZGCEJYIVONCWFPEBSPFFMZKCEZPYTTTOIUWPFNBMVNGULHPVYKQNWBJOJCWJXLFNTXVEQXLMGJMXMXCLWFAPLSYKIHKRTROCAGTJGEFDIRUJJOHXDYVZLTVCKDTAWZEZEBKBGI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KYPTQKEGBSYWPKAEDYIDZOONACWLKZXNQWTDVJOHQFXGJILITMJLGDQJVZCKJDRCSIHACAYHSMNJKFZTDUAONUBUSRQURVJYZWLJ");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("UPQCQIHEGXBTZGJIFPJFXWEWQAZSAUINKLDWMKBSYJDIXXIOCMCHJKMSMIBEWCNXZVEWSEXFLJYDTEUDKGOYGOMERBUWPDLLIVBCYBRFKXQRNONSALQBQPSJUUYAEZFQUSVHHZQEUHCSWCLOIFJLQTKOHVKJRPXVSDPTJOXFAPASGGNHHIHYOWRZDPJKOBNTG");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("EWVMQWYQJETKMUZBKFMXXXPHSFMMTWQHXXIYDBIQFMULXSIERPKDNYROBHZVKVELRDLEYNPOTXVCHJTPWKAWUVHWOLLOLQVIDYCUULISBGQZIZPAWZDXRCBYJEPAFYIJVCNRHBMVUGGUDNBQRUGVHIPEAMZYFASNQPEOZQJANAA");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("FIIGEIBYZNMYHFCJWKKUTAWRXJTZCOJNUGCOBNEFXWPUVJWVGICYUXTIVQGMRYU");
    tmp_tmp_tmp_msg_0_1_0.description.assign("PBOYUJAZBFQODQYUSWJMTDN");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.8119782271394175;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.38266019510606175;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.9927072174180631;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.986179119253374;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 43122U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.9933265811136558;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 24402U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 24086U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.7280721158375189;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("AHZQAVLIHFIPJMNYINQJNASEHRXXXHVKSXBOBKMMUMRWMALASNSGYXZDDKBRFYLVXBIKTDOZEJCFXTYUPBJDGGSORKB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::FluorescentDissolvedOrganicMatter tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.6894823762947851;
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
    msg.setTimeStamp(0.663962963419418);
    msg.setSource(16438U);
    msg.setSourceEntity(24U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(229U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TPKCUHELUSUSFFMGBZBNMUFPYIPYPJZFLDGQYWHUNAONHDJKAVKDYFVXKGEBEMMFOAIDVTZDZAXRFGSORQGHZGPCAVTNSQRSRXPZIOALNYJYIILLRELREWEVMUWKHTYFQGQQINNCHZEHBSQSSARCVYXIHZFTKRUTXEMWLCKWNTUOIZJWUJQKMLIISCE");
    tmp_msg_0.description.assign("RJOGJPEHSTLMEDWEDUIEFVSTXKDAOVHGLZYZHSKWRUJZCSVDQCQBKMRZAQVCUNXQYPGYSDCREPMLEFDKAUHQMWY");
    tmp_msg_0.vnamespace.assign("WWISINZSPRFHVUJNAZTFUECOGXSJWAENNRHXPMYKBYQOEDTVPDQHKOGUPELIYPUDLBPOCWYZZAWSXJICLHBDROYLDZZWMVAECNKFMIGZRMGXPLOFUPIAEXYHUJRLRKQJVJBSEWBFSFTYOGQWXKJMRNVAT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HCNEPADNEQMJAF");
    tmp_tmp_msg_0_0.value.assign("LOKASJJUKLAPMFITNRZEQBWSZUZTNQCAYCWDGJYWNTFMVTSPHLRBSZBJBFDFZOYVZQITZZWXSMOMEOACEBYFHJIYEUKJJCORNOULGLTQQEDTIESYQKGRKVVFGXCDUBCWQLPNHXUMJWKLMRWIVHAHISLQRAGTPPGTXTKZOIPGFGPGJVVRNEAXEASYXKGFBFHBYBXWHXJXDNRSCRSHLMWFVWNCLIUK");
    tmp_tmp_msg_0_0.type = 83U;
    tmp_tmp_msg_0_0.access = 186U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QFDTCRSYQZLEYSAXSADGTTFAIOMTMLQIKOYKTLIWECQPRGSGECVUDVKPAIBPCMZJXXSMUCNUENFLESEZLPLWZGQHLUWHRJZVMOABSODUEARECPSJXROTODYQDTHDBJRIWBTKHIJAMFKTZCNZVVRFKBOLRWMBVLNM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UEHZHDDVNPOZMGGAARUPKJBFQYCUTCUKLNOSPXECRGEMXIDHTUMDWNPOIIMEWZGXJKISVXRYLDREHAQQCIPWWIGRJPRDLVNUD");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 10675U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.1436533571996863;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8484621310676213;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5304212287120352;
    tmp_tmp_tmp_msg_0_1_0.z_units = 23U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.39852323088332986;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 42U;
    tmp_tmp_tmp_msg_0_1_0.duration = 5157U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.23910162645226585;
    tmp_tmp_tmp_msg_0_1_0.flags = 58U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VRWLTODHWUXEVZRJPSXCYCPDPXGJYGCEULMVETTUOTMGFVLMWQSZYMJNVEYAZUJLMFYDYNBDMRXIKCSIVGAFKRVFDWBKIKAIZXWKSFJLZOTETGKJWQWQIQFTLUALSDNXGJOOHDXCHIHZRCGZHTUBSBGVESZFBHPBYBNHUFYJMWQICQAOGDLTNSJNXRBX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::FormationControlParams tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.action = 84U;
    tmp_tmp_msg_0_2.lon_gain = 0.7370284156994853;
    tmp_tmp_msg_0_2.lat_gain = 0.5150025052305628;
    tmp_tmp_msg_0_2.bond_thick = 0.5408407578770053;
    tmp_tmp_msg_0_2.lead_gain = 0.067477900074157;
    tmp_tmp_msg_0_2.deconfl_gain = 0.3304884188918329;
    tmp_tmp_msg_0_2.accel_switch_gain = 0.5124434246574712;
    tmp_tmp_msg_0_2.safe_dist = 0.8601511454361229;
    tmp_tmp_msg_0_2.deconflict_offset = 0.9475211475058462;
    tmp_tmp_msg_0_2.accel_safe_margin = 0.7708908866286162;
    tmp_tmp_msg_0_2.accel_lim_x = 0.19510806949177428;
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
    msg.setTimeStamp(0.9820272289272541);
    msg.setSource(50530U);
    msg.setSourceEntity(85U);
    msg.setDestination(57867U);
    msg.setDestinationEntity(56U);
    msg.command = 165U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GQHWRAQGUQYSLOANJILPBFBLUERFAEHBXDYMMWDNAQZDZZCMVKHPRGTEBNCFJOIVXBCVEPTSCJKYLVGIXYVGDFIILOQUKJLEJHFPXYVUTVATZMBJPUBSPVHXQYTGXOBDWCXBKUYDAFRECEHNDSNGNYWDSUUWRMJFPFKWTXTKMWMZCALRZWMLZFTRQALNKUKOTWSZEMPJNCHAIXOPWYHNXUGEVTJIRIESHIYHZKGVODJPOQLRKDCFSQSSMBOAZ");
    tmp_msg_0.description.assign("YEFGGUASKWOQVWVADQUYVMPJWRHNYDKJLGGAEDCULZSQPMWIAPBCCIXEPCHWTZLWRBJQCXLPDXJNMOMCUSJTYNEIBNZKSRFRBHUJFZQHDVVXMWOQXHHTLAYZAVYJK");
    tmp_msg_0.vnamespace.assign("TKTXNAJRQJTSQJHSZYJIISPBDXYULOMQBRUTHLIVOVELALUENZKXPTBTLSVORYZOXDHOZZSJMASASGWWCGKRPQAUCUAALJRMBPDTXJGJWMKDEQIGFWNPMVVVUEFWTANPHEZSPHWVWEQFUKCUCNXAWLIYHIBNBREORDNHYVOFHECIBCSTHDCNKJI");
    tmp_msg_0.start_man_id.assign("RWWXDKUANZCGUJMKMINBLMQTWMQCCNBJQEFVZWFMOVFWRBIXYYAWGHEIATOWSTPHZLHINHVEJXQDOZEHKKGGNAURRZJFWSOUBOGXMASOMJATFDLJDEKBHFZRNDSSVNWAVYAZVTKRCPIUCFBRUYTOYSEUFQPXNXYLSRMRRSYVDHAJLULXSCKKQIEDV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KHVDCLMDWURQGDINPMSUABYQZGRVJIONAFAXWVQRXZLXTXJWSJCYQFERAMKKB");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.38578116707666166;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.17548753875225254;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5483732582131129;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 242U;
    tmp_tmp_tmp_msg_0_0_0.duration = 37918U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 62423U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 42020U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.27794647133428396;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.34184107772663663);
    msg.setSource(23251U);
    msg.setSourceEntity(192U);
    msg.setDestination(31629U);
    msg.setDestinationEntity(203U);
    msg.state = 164U;
    msg.plan_id.assign("JZFZSPXPEFEMAPQTRURZJPQLGWSJPWPXHXORDHKLQJIUYLFCWOJDDEDKTKFMSBEQGARJFPITXNYIJVZKNLAQNKUPDXUWEVOOUQMMASULHMDFVKTLHLGTXPRNCKBSGNIYCBIQVERYOGBVOUCVYBHSFKRKEBTJXWONIZYASCAYQGWGRMZITLGQQHAHWFEYTOCMDBYVNHDVEZLZCHFZBJDSFTITRAXEVHXIDBNAXROLGCWMOCZNBCW");
    msg.comm_level = 1U;

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
    msg.setTimeStamp(0.7275306327095403);
    msg.setSource(40507U);
    msg.setSourceEntity(202U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(186U);
    msg.state = 11U;
    msg.plan_id.assign("RFGTSTYPNJUQIBSMYRCGJCECDIRKDDFENALMEWZEVPH");
    msg.comm_level = 225U;

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
    msg.setTimeStamp(0.5932337739976966);
    msg.setSource(5549U);
    msg.setSourceEntity(224U);
    msg.setDestination(35789U);
    msg.setDestinationEntity(243U);
    msg.state = 54U;
    msg.plan_id.assign("FAZNVAPEUSRUSHRTXRAHRQJBNKBPQCXEMLJJNIOBJLPLIGRGTZUCDBJVSEKPGVVJLDZOLWKOZWRXFIAHLSMXMSWKBASPXPVGZDRFLXVVFDOIGCEJSBHDXHZCRGTWYAOEYSUZUZJCEYQBDNPJFYWENXCQWTMUMYQNETKMCPUCTTADL");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.7227255841457315);
    msg.setSource(40431U);
    msg.setSourceEntity(90U);
    msg.setDestination(4420U);
    msg.setDestinationEntity(52U);
    msg.type = 169U;
    msg.op = 40U;
    msg.request_id = 39356U;
    msg.plan_id.assign("GRTLLEDHRKOGTNNIWUIIGHALCXPMZVFDPNNBDBACKQJYGVFCRPHYFUVZXAJZHBTMYSRITUTCJVWPUWYYTZQKYNBTSJFSGJHV");
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("UGNASYWWIMSTBLRCAXQV");
    tmp_msg_0.lat = 0.9733681281251221;
    tmp_msg_0.lon = 0.89266809053005;
    tmp_msg_0.z = 0.47916730179567946;
    tmp_msg_0.z_units = 128U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LGKDEPBJEOATZFSLAPGZCUXDJXHGVSRUMUOUTYYKNVVRBELAIFECKAZDNEIQTXQNBOITHACIZFXIDAJDHTSHYGOUMBCF");

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
    msg.setTimeStamp(0.8692128893545789);
    msg.setSource(35183U);
    msg.setSourceEntity(206U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(147U);
    msg.type = 161U;
    msg.op = 134U;
    msg.request_id = 10011U;
    msg.plan_id.assign("XVKUHOBFYSARTSVTXGPYOLQXWLMCEDBZPPQDYQWGBEJYZWDTROCMYVVZQIKKXNEICBNBNSCJUPZSAHECKKSMFGWRDMSDGZIGJIQUAISOVCJPORTWUBCXVRUSJOLMDWWFXSPZHLXAUVVQJLYAYFBNQNGAFCZEPLYFQAUWJINUARLIFATYMUEPIJR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BDCZPZLBZAUBXSMPFHIDEXSHQLAABVJYYAWSFCMPRCVLTQZMKIJEKLXBROEVAEFHSBIUYNRKNERIOCDNSBOIZAFKGQTOMUWGASBHJIKTTYQPL");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 48110U;
    tmp_msg_0.lat = 0.7623898903714955;
    tmp_msg_0.lon = 0.9704393783394124;
    tmp_msg_0.height = 0.7878788857151247;
    tmp_msg_0.services.assign("DZQFILEZJBLFZYAVDKSCJYMJECCDPTONESMNYUE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ISNALDERTZHSKVSIPXHZKOIJYWITRSXRAWQOJBCYEUBZABWIFUHWLZJXHNXXHNDNJQPZEGIHRPSTYJRAPEZVFHSRWUVZLJA");

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
    msg.setTimeStamp(0.938267760251794);
    msg.setSource(57016U);
    msg.setSourceEntity(201U);
    msg.setDestination(9229U);
    msg.setDestinationEntity(5U);
    msg.type = 42U;
    msg.op = 234U;
    msg.request_id = 34560U;
    msg.plan_id.assign("BZOFANWCYYHYJFRSJYHCRMXXNNEPFMWVCSHSPXGRUUOYXPTTHPTEDPKOVUQXQCWMMLBWOCWOX");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("VEMHZWNUFSHBFYJVQPCUODQXQWSJRTLCFIWQYUBXUFOASDTXNVCLVKCGBEFGDDWQLZLHQRGYTZCNNRCZBAKEPNJR");
    tmp_tmp_msg_0_0.lat = 0.1433312835772641;
    tmp_tmp_msg_0_0.lon = 0.7237534260870071;
    tmp_tmp_msg_0_0.depth = 0.45287162461593955;
    tmp_tmp_msg_0_0.query_channel = 215U;
    tmp_tmp_msg_0_0.reply_channel = 19U;
    tmp_tmp_msg_0_0.transponder_delay = 196U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.6020741458897255;
    tmp_msg_0.y = 0.7326004255446213;
    tmp_msg_0.var_x = 0.3365870163397706;
    tmp_msg_0.var_y = 0.31540687953375357;
    tmp_msg_0.distance = 0.7916268336308145;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NQRTCHHWVUIYCRWYOXMGRSYPONFPJTGLSHKAAWAEAJKBMPOLVTRERENNLLRSMIZTOINFARJFODTQZLLQFZMCFDIHUZEW");

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
    msg.setTimeStamp(0.5868787106458113);
    msg.setSource(18454U);
    msg.setSourceEntity(139U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(243U);
    msg.plan_count = 19722U;
    msg.plan_size = 1920722841U;
    msg.change_time = 0.9568474171534269;
    msg.change_sid = 45196U;
    msg.change_sname.assign("EDDMZAFXJUYFMKECRITDWYSEKGYEFQWWZHCL");
    const signed char tmp_msg_0[] = {114, 84, -114, -84, -20, 1, -88, 26, -80, -5, -70, 115, 67, -61, 36, -109, 90, -37, 62, -120, -25, -20, -95, 68, 64, 42, -37, -64, 95, 92, -80, -49, 62, 30, 125, -39, -83, -7, -12, 125, -1, -31, -16, 49, -15, -27, 51, -98, -59, -51, 57, 113, -63, -7, -44, -30, -41, -27, -84, -104, -118, 68, 82, 113, 126, 5, -123, -81, -50, -23, -82, -125, -40, -22, -80, 87, 71, -45, 96, -9, 74, 48, 98, 99, 126, -10, -76, -33, -13, -49, -80, -37, 5, -40, 69, 53, 102, -83, -71, 122, 115, 3, -8, 16, 42, -120, -6, 68, -127, -80, -28, -85, 40, 68, -91, 35, 10, 32, 37, -68, 95, 25, -75, -9, -91, 70, 30, 23, -90, 87, -9, 104, 23, 41, 89, 0, -80, 68, 70, -81, 3, 96, 36, 98, 96, -35, 86, 110, 65, -53, 86, -24, -12, 110, -80, 45, 0, -38, 72, -23, 108, -86, -12, -49, -102, 68, 70, -28, 33, -100, -38, 96, -24, -1, -128, 9, -113, -74, -98, -45, -104, 8, 111, 49, -36, -27, -41, 11, -34, -103, -83, 36, 68, 61, -88, 118, -87, 81, -83, -24, 67, -117, 13, -7, -73, -72, 38, -96, 50, 87, -18, 11, 113, 111, -90, 108, -43, 15, 29, 20, -13, 84, -97, 114, -126, -50, 106, 20, 34, -57, -103, 15, -51, 105, -108, -100, -32, -69, 96, 119, 40, -89, 82};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TUAHCELYLHFLHNZBBHXUBRUNCLMOYNQUGFSDUWQFEDNEBKCJAIAZCMBZLIPWNQROMKVKEIMMPTHVDSRNGFDMYIHIOKUHJVOOQUHCXVKUAPCCQAAAJNOGYRPMKXSTSPAQFJBCTEFTRLQLCUKTGNGXPBPYSGVGQZTXXRHSYUXOXEGRWDJJWPWWVBTZJZQRBXZSIAFDIDZIWMETYXVODCRNWEGJJR");
    tmp_msg_1.plan_size = 28127U;
    tmp_msg_1.change_time = 0.21240037422800628;
    tmp_msg_1.change_sid = 11648U;
    tmp_msg_1.change_sname.assign("XTYWEMXXVXVGPUKNWUBRDRVTDYNWUOQSSEKKYEJYRYCCPAMMMBOTTXVQFECZTLSIQWDLCDKIBHVIUOCRMZIFGQCMOPHFVIRRVRBANHXLONDFSACKZESVSYBHFDUQWKJHUGHJVIBDFGCMJQYAUZXFNDNTGIAJVPLAQBOKIKYPZWOPBGDTTZFYIJXXLJFKUTJMTZPGEWPDLHESBAOLJOSHEHQPJWBRKMSHEZWLFYNCGOCAGMWZRNLIGNQLZAQPEU");
    const signed char tmp_tmp_msg_1_0[] = {32, 2, 8, -93, 10, 39, -109, 51, -125, -47, 67, 123, -95, 52, -88, -20, -68, -93, -7, 89, -88, 67, -53, -13, -25, 33, 104, -31, -94, -30, 74, 94, -50, 85, 114, -81, 18, 35, -16, -15, 45, -110, 78, -39, 8, 25, -33, -32, -6, -123, 17, 87, 51, -2, -61, 73, 26, -124, 81, 19, 122, -109, -49, 3, 76, 118, 24, -83, 97, -84, -73, -60, -71, 82, 105, 6, 65, -124, 32, 36, -112, 21, 63, 73, -27, 29, -118, 90, 41, -38, 65, 114, 46, 122, 118, -3, -84, 17, -76, 7, 119, 87, -118, -120, 9, -51, -64, 84, 66, -6, -120, -62, -109, 85, -57, 83, -60, -14, -22, 112, -103, 51, 22, -111, 23, -26, -30, 83, 118, 53, -18, -11, 66, -26, 115, -2, 37, -15, 37, 68, 109, -29, -3, 99, -116, 36, -26, 39, 12, 96, 93, 106, 98, -54, 17, 119, 72, -123, -92, -33, -95, -45, 99, 92, 24, -18, -119, -21, 32, -90, -56, 0, -73, 109, 87, -85, -72, -20, 9, -108, 59, 50, 126, 83, 96, 13, 79, 19, -18, -79, 104, -67, 105, 54, -97, 105, -11, 43, -97, -38, -126, 117, 69, -1, 0, -64, 109, 76, 11, 118, 103, -41, -73, -31, 11, 26};
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
    msg.setTimeStamp(0.528535636522209);
    msg.setSource(23514U);
    msg.setSourceEntity(196U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(67U);
    msg.plan_count = 58764U;
    msg.plan_size = 3545923534U;
    msg.change_time = 0.9447143627776716;
    msg.change_sid = 20075U;
    msg.change_sname.assign("UKOTWCHPWNPOFSJWZTDMIQAAKSQPXPVJQMOWKKCPIEVTMBNATIMNTUXDJFCNBPUURTPEPDXBQM");
    const signed char tmp_msg_0[] = {-57, 18, -128, -108, 87, 72, 89, -45, 38, -39, 98, -40, 102, 66, -57, 37, -32, -97, 59, 107, 109, -107, -47, -24, -85, -52, -124, -14, 72, -31, 60, -32, -99, -110, -98, 112, -109, 29, 10, 123, -92, -58, -117, 6, 4, 22, 90, 125, 13, -93, -80, -88, -29, -9, 32, 85, -122, 21, 35, -84, 39, 85, -107, 100, 40, -48, -85, 113, 102, 79, -3, 6, -52, 50, -12, -1, 103, 32, -7, 11, 68, 99, -122, 69, -122, 81, 115, 55, -105, 83, -1, 38, -9, 0, -127, 32, -76, -25, 16, -25, -127, -106, -106, -106, 37, 11, -87, 34, -119, -10, 9, 41};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WGHXTMLXRINOJZRHOXGBJXVWGLLZPOOCSBUPNEOAGGQNYZKYYMDHGDARAUBOIKMVQASYYYCJQGRLCRFYKPORUSZUPUDPZWCRZATHJMIHJNUSKYTIPQMKTILECHWYOGQNKFWGVDNKKFMEVZNZBGSFRANJPQLTFVQFOPZCAXIITEHOVHHVNIJJEADTSCWVEISMPUSKWFAXDLXSMAYWVJLXMQLFPQXBKBDUMTQIUCVETNZLBSCFCRBF");
    tmp_msg_1.plan_size = 62723U;
    tmp_msg_1.change_time = 0.767379104198788;
    tmp_msg_1.change_sid = 22222U;
    tmp_msg_1.change_sname.assign("JRLFPVECZVFSHGNOTVDKSJTHQCSMKEHRYKBARUDJLSBLQEADPUZYZBQHONYVOTWUMSPOGGNNFEFWCWUVCZNKPDXLECXUTHWFXDWQZE");
    const signed char tmp_tmp_msg_1_0[] = {-14, -28, -8, 60, 126, 44, 94, 103, -44, 99, 39, 54, 97, -62, 35, -96, 53, 31, 91, 73, -79, -2, 8, 12, 39, -95, 112, -107, -108, 94, 98, 25, 28, 92, -78, 83, 11, -13, -94, 10, 110, 93, -13, -11, 63, -59, -64, -109, -121, -108, 15, 40, -83, -100, -73, -126, 119, 112, 48, 3, 37, 34, 105, -35, -90, 110, -73, -69, -28, -90, -119, -21, 79, -25, 64, 13, -67, -79, -16, 102, -27, 13, 112, -73, -93, -27, 112, 63, 36, 15, 67, -52, 106, -109, -53, 61, 81, 90, -9, 39, -26, -59, -69, -93, 18, 64, 56, -74, -50, -43, 51, 65, -79, 33, -56, 99, 98, -3, -15, -77, 96, -87, -18, -121, -61, 32, 110, -107, -115, -87, -5, -110, 85, 85, 110, 54, 4, 71, -1, 80, 25, 69, 51, -48, -26, -5, -79, -78, 111, -96, 121, -91, 69, 73, 15, -1, 97, -4, 38, -80, -83, 81, -3, 34, -5, 20, 58, -47, 86, -93, 78, 35, -115, 92, 104, -127, 18, 3, -24, -36, 35, -46, 4, 63, 19, -34, 49, -117, 10, -125, 86, -5, 12, 44, -72, -62, 23, 80, 84, 67, -58, -79, -39, -45, -117, 74, 65, -99, 111, 48, -60, 41, 74, 58, -128, 25, -42};
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
    msg.setTimeStamp(0.018570944515006627);
    msg.setSource(35126U);
    msg.setSourceEntity(230U);
    msg.setDestination(17133U);
    msg.setDestinationEntity(95U);
    msg.plan_count = 64224U;
    msg.plan_size = 4199436458U;
    msg.change_time = 0.09386536436341608;
    msg.change_sid = 34668U;
    msg.change_sname.assign("VWDRVHWOIMNNAXNVGNXFBZUFHEYIASQJXUEDFVLGVZMKTWRKSJIHWBACJOQGYBFLEIUBTBXZEETRZYDWJHMPIRCHSMOJOUNEVQGTCVLKLUBGTISSKJHKBGDKXNGYHQWZRVYUAKTRCFYCQSSYAGJCMSBCPPGTNJMFOYPIOOUIASWYGAJ");
    const signed char tmp_msg_0[] = {13, 107, -106, -45, -112, -10, -122, 122, 21, 108, -109, -27, -26, 72, -20, 27, 47, 87, -93};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZKGDSPYBXVSWPWIORSIERHEJLKQKWQMBAQJWAUAVUNLXACFATNJJGGEYRLVYEFKFTMBZDNTEUJTURHNGIPJQSVGQMWEEJJHOTNH");
    tmp_msg_1.plan_size = 15239U;
    tmp_msg_1.change_time = 0.3118959874732571;
    tmp_msg_1.change_sid = 3610U;
    tmp_msg_1.change_sname.assign("FVETCUCRLOJPUSIQKKLKYLHMGQVVNKLZFMFTQAGGDWJDWMOYQTKHQAMJBELRUXWSWXDBAWMVSYDPAOUXMVNIBKPIBEAQJZYG");
    const signed char tmp_tmp_msg_1_0[] = {-7, -106, 103, 68, 92, -128, 98, -71, 52, 99, -58, -113, 48, -97, -84, -32, -35, -67, 72, 114, 97, 90, -98, 55, 74, 26, 95, 86, -33, -38, -66, -28, -74, 33, -60, 84, 72, -96, 22, 46, 78, 125, -113, 16, -18, -31, 44, 116, -103, 35, 50, 96, -54, -69, 4, -25, -107, 4, 117, -89, -56, 100, -68, -68, -94, 32, 31, 11, -81, 94, 89, 71, 42, 98, 126, -89, -111, 38, -2, -50, 103, -116, -58, -19, -72, -67, 1, 67, 116, 61, -71, 113, -29, -109, -95, -39, 29, -12, 81, -96, 65, 75, -47, 65, 99, 122, -111, 60, 87, 30, 50, 66, 54, -33, 14, 93, -60, -126, -98, 126, -69, -30, -117, -109, -40, 59, -9, -67, -72, -2, 102, -111, -2, -37, 103, -96, 29, 8, -21, -80, -90, -107, -50, 92, 38, -81, -78, 82, 79, -15, -14, 71, 30, -66, 13, 19, 44, -40};
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
    msg.setTimeStamp(0.6913198015125016);
    msg.setSource(42614U);
    msg.setSourceEntity(240U);
    msg.setDestination(7701U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("LRQDTFHOKOPSRFAPYVSBYPHGSZVQKDHYUGZIKJJEVLPLHELXYE");
    msg.plan_size = 7997U;
    msg.change_time = 0.762122391166659;
    msg.change_sid = 58135U;
    msg.change_sname.assign("JASKMIOGOITJCHMQWHDKTZWPZBAKNRVZGDMXKBYEEYSBGTNZBKRGNLBQXZFQ");
    const signed char tmp_msg_0[] = {-98, -20, 49, 7, -66, 110, -80, 5, 6, 83, -36, 97, 70, 123, 24, -10, 17, -14, -118, 1, -70, -128, -36, -78, 5, 66, -62, 24, 78, -93, -89, -26, 7, 22, 26, 43, 49, 126, -80, -95, 28, 93, 35, 109, -95, -30, -48, -34, 2, -86, 101, -53, -117, 124, -112, -95, 118, 84, -73, -59, -113, -35};
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
    msg.setTimeStamp(0.9221469188472009);
    msg.setSource(56188U);
    msg.setSourceEntity(16U);
    msg.setDestination(61260U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("JWQYPEXOOSXXXNZVLNTTFGREMWDIEJWQZFVGYADZAKLOCEIVPTOKWAUVFNOMLEQIPRPWZQQLGNWQSTCUBFSNBKDKRHVFVGBGXCUQRNYDD");
    msg.plan_size = 57756U;
    msg.change_time = 0.13162463496461885;
    msg.change_sid = 43383U;
    msg.change_sname.assign("SHDSYHJYKEFLVFOLDQWAPUUDISBGIRPPQRPCXREXKHNCQIERQPOKPLEBNWNVVZUHZUSBTGERVDNTXSIDCMJTLDPYKWQPPEMVUUZAYYZUGOAYPGQTZDJZGKWZJAHLTNYNFZQIVEXMMBX");
    const signed char tmp_msg_0[] = {-7, -9, 93, -91, -11, -34, -31, -116, 116, 80, -33, -9, 12, 122, 43, 1, -69, 18, 119, 80, 79, 105, 80, 95, -70, -63, 38, -67, 36, 27, 24, 81, -49, -91, -51, 103, 36, -33, 116, 5, -99, -97, -114, 20, -31, 92, 25, 19, 56, -49, 120, 18, 66, 76, 71, 99, -81, 118, -128, -114, -66, -56, -36, 62, -9, 48, -42, 8, -14, -75, -54, 124, 34, -75, 60, 13, 53, 78, -108, -62, -26, -13, -3, 22, 35, -93, -83, 87, 67, 87, -56, 11, 124, -46, 86, -106, -32, -114, 86, 104, 122, 36, 10, -53, 41, 4, 96, 75, 7, -52, -73, -25, -101, 18, -106, -29, 83, 13, 95, 17, -42, 109, -83, 53, -120, 38, -6, -78, 67, 119, -21, -69, 48, -128, -96, -77, -31, -83, 118, 3, 112, -74, -59, -64, 29, 73, -92, 85, 53, 64, 88, -87, 61, -61, 0, -110, -115, 110, 21, -116, 111, 76, 106, -87, 121, -89, 66, -7, 63, 1, -22, 102, -27, -73, 21, -4, -55, 11, 49, 63, -74, -75, 120, 40, 11, 58, 101, 19, 102, -38, 53, -73, 105};
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
    msg.setTimeStamp(0.8623606939789352);
    msg.setSource(40146U);
    msg.setSourceEntity(44U);
    msg.setDestination(30813U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("WXQFZSZCYEPOLMECGYCNPKZQJFUYMKIAPFEWUPYPVQXEZXUTJEDPHKAVFZLNGVVXFZEVGDAOQDYWPBOHJUCBXGMDJHIMWJKMGUBCYSAFMDHJRNQTALXHUNOZGTFSTRYFMEBKAIQYNRRCNE");
    msg.plan_size = 2879U;
    msg.change_time = 0.6429228680453766;
    msg.change_sid = 36227U;
    msg.change_sname.assign("KVHOEJURIYTVECHWQYZNQXDOQVDVJYZFHAULNENQSOSCXXKURCJLMGNWQCGFADFXQKIKMEPXEWOJOMWMKLLDBHFISOLFFRTTYEH");
    const signed char tmp_msg_0[] = {-122, 67, 35, -28, 42, -76, 126, 80, -111, 65, -43, 51, -84, -67, 55, -70, -42, -107, -6, 109, 79, -74, 7, 58, -105, 41, 36, 34, -29, -90, 61, -55, 95, 74, 4, -105, -15, 118, 38, -89, -56, 36, -81, -80, -85, 16, -16, 11, -115, -18, -77, 110, 98, -17, 79, 86, -80, -42, -3, 114, -23, 23, -85, -63, 85, 12, -3, -37, -49, 7, -38, -113, 41, 83, 57, -97, -83, -62, -62, 110, 78, -101, 115, 69, -102, 119, -11, -123, -52, -42, 43, 20, -91, -64, -84, 0, 8, -10, 46, -72, 116, 107, 26, 12, 43, 90, 84, -60, -33, -36, -7, -9, 49, -83, -101, -57, -36, -119, -90, 20, -6, 1, 9, 108, -78, -23, 18, 8, -85, 0, 91, -23, -41, -60, 81, 49, 38, 101, 70, 6, 11, -74, -95, -44, -34, 98, 2, -62, -84, 101, 48, -8, 120, -8, 27, 102, -11, -94, -71, 103, 126, -11, 34, -119, -98, -69, 13, -97, 115, -116, -2, 68, 122, 88, -31, 105, -22, -107, 94, -103, 47, 65, -29, 52, 10, -124, 80, -122, 81, -11, 107, 29, -101, 66, -17, 84, 17, -3, 115, -102, -119, 88, 1, -125, -111, 53, -39, 1, 61, -123, -91, 89, -16, 98, -50, -6, -99, -30, -81, 51, 26, 77, 99, 53, 25, 15, 13, 73, -33, -81, -118, 8, -73, 44, 78, -121, -70, 58, 40, -79, 86, -83, 57, -54, -24, 47, 14, 35, -75, 39};
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
    msg.setTimeStamp(0.26807670282452223);
    msg.setSource(29775U);
    msg.setSourceEntity(186U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(152U);
    msg.type = 127U;
    msg.op = 176U;
    msg.request_id = 760U;
    msg.plan_id.assign("BADADJERGGUVZNTSWAVMUIHNCEIRELVHPBQEGHXJBHNFOYCZMJOLTFPIQOCYBNDTSROBPNUBINQDAXUYEXQXCMTPJSWLSYCJPOOTYDLLPZLWWVZWQAZLNUXAJMGEYGSIDRUXEQXGSSQRUZCKVOHFGRFCFWKOSMPBKHGELFTXEJETIQHTFUPMCRFMZJMMWIHSHCUYFTBCKKSKLBQNQAXGUKZWNFZJMVKZGDOJOAYVADWRDVDILTKAPWRHIYIV");
    msg.flags = 29438U;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 103U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UYAGMWZUBFKUVIXZUJHDGZAGYJHLTBZRJEOCLVFBNWHKNONUQGGAAACQIXZKJPEDRLPOCPDRTYLERIIOSSCNTFNIMXPHQFOCKZOEKDHRYTRINBYUEBTDTYLFAQHBJPBXTUPIODKMVVLYVAIMJPJQVKHMIGRZZSCEVLPFKJWSHNVMBTQAM");

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
    msg.setTimeStamp(0.8922490641864235);
    msg.setSource(40719U);
    msg.setSourceEntity(1U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(252U);
    msg.type = 169U;
    msg.op = 206U;
    msg.request_id = 64997U;
    msg.plan_id.assign("QFSAWJBVAMGRREOTODDWLKEQXUHPKUOSKNUMTGLDZVXUBXPNDWZXUYMPGWNQQACTNLKPEXZATTRBDVJCCGELFMTEXY");
    msg.flags = 50145U;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.356194348224122;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GGLETUWLFWTZRJTMILEFLRMAZEERHYKMZIKJJXHQIUAXDPGGMTGEJQDQWSKGEDGRVSHAXHOJVFYUKWPYHAHUYWRCNHRQIYQVBVBACNLIZPSOMFNBWGGCZZIFWLIUUSDYFVNJXZCSARMKVNBZVIAXTRXXXIPOZDMBFPVXLEK");

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
    msg.setTimeStamp(0.17001071046350058);
    msg.setSource(54530U);
    msg.setSourceEntity(23U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(55U);
    msg.type = 121U;
    msg.op = 236U;
    msg.request_id = 21167U;
    msg.plan_id.assign("AESJRMVEJJZTDFJENFPTHQCKDOJRRIJQSVVACPVSJUEHSQSDHLNFSUPRHLTXDTWRGLMHPINYLFBZRIOXDYDQWPOYVCAVFUIMZWQGPEWMGUEMXSXAFDKCHXZYWIMXLQCYQWXGJJUHBEBMGSOGNKD");
    msg.flags = 16453U;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("VOYKWENYIEBCZPXVEND");
    tmp_msg_0.lat = 0.8615764599131489;
    tmp_msg_0.lon = 0.7644983382527638;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.z = 0.9697752726832541;
    tmp_msg_0.accuracy = 0.34647131294040945;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VPHPNIJJKZCGADQTZEVHLGVTYWBYUQSJPPEGEROIKTLMVODDSQHBNSYURIPFNFXANWEMBMXFJCDAQYBNEATOKHZOSTIAIBLPALMVBBYEOSQUGYLFTCZLSUTJBUXZEUGMMQPSWHHLXDSFRMFMYRMIVXEOMCDZHCACWQKGUSHIFGDRGKJJFYOUGKBWQUAKZTSWGCZVBXYTJHRRCVPNOXHDCPXILLZN");

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
    msg.setTimeStamp(0.5128200036732367);
    msg.setSource(54428U);
    msg.setSourceEntity(183U);
    msg.setDestination(44573U);
    msg.setDestinationEntity(178U);
    msg.state = 199U;
    msg.plan_id.assign("MEQMFXYFAHXEKAEEIMAWNZWWUPVJQQTF");
    msg.plan_eta = 57751849;
    msg.plan_progress = 0.07378376657798535;
    msg.man_id.assign("JDOPZCEXCTJKMHRHFIRKIJPVWTEIHZBBDMXOZFJVKIKYLLUPNLDGWKUTGBJBVAALQUWPEFVCZNXAHQUXQBUOOPIWWZWOLJUFDVYMGSPDRCUNZLROWMVGJVYHWRHSGZTKSEOSCLASYDPOBNCBMSGTNNMYAXJYBRTGHFSEGKESLFMLZJSPHDEAUAQQENVBWNXFYHKJZXIXMIMSFQOUFMQCANOCRBTQKPCTPDGRIKEAW");
    msg.man_type = 8018U;
    msg.man_eta = 902111364;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.34561233599339636);
    msg.setSource(27717U);
    msg.setSourceEntity(243U);
    msg.setDestination(26303U);
    msg.setDestinationEntity(52U);
    msg.state = 76U;
    msg.plan_id.assign("BEPEFSIUIMVSCNYJQCEHDFIINPHPNORXTJZMMQRBTXVAGPJKZFKHPIGDRBWCBUZNMGH");
    msg.plan_eta = -15665424;
    msg.plan_progress = 0.6731380573129045;
    msg.man_id.assign("NPFMYCDERUHSRCUOCJYLVMSUSALEBROKGDBWHBVVXGKKGWABVIEEBXFXNTXVPTWHIURITNACKAMQSUYLHQPMRCJADFJIFAOBQVKUJZOCIIVGLVBTJSVOXBEKHC");
    msg.man_type = 48744U;
    msg.man_eta = 1336248490;
    msg.last_outcome = 74U;

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
    msg.setTimeStamp(0.044431237988971306);
    msg.setSource(14563U);
    msg.setSourceEntity(119U);
    msg.setDestination(52593U);
    msg.setDestinationEntity(141U);
    msg.state = 161U;
    msg.plan_id.assign("LRQQTEAYKPLBFYDUTMSFWXGRAZUEK");
    msg.plan_eta = 2064744962;
    msg.plan_progress = 0.8286787665050656;
    msg.man_id.assign("OZCDBGCRAAZABCVEKRTHYIYXAZHWVDSEUWCTLYPPNEQIYBXIOJVRSHIGIFVJJMAMFFNHSXVUKTOHEMMUQWKCEVZSTFKQUBNCNRTRDJGEZPWZXXQFMOYJMROHLZKVSVFKENBAXMAKCTLPSKMJEFDQRDLXSROIDHAPTQJ");
    msg.man_type = 36460U;
    msg.man_eta = -327804337;
    msg.last_outcome = 185U;

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
    msg.setTimeStamp(0.7006358908632511);
    msg.setSource(54321U);
    msg.setSourceEntity(234U);
    msg.setDestination(13464U);
    msg.setDestinationEntity(149U);
    msg.name.assign("SZBUVOVHVMWCDGZAFISUWHZACGDAOFATOOTUQDLFXLMGKYLENNUPJYAEXYCFZRUIZNYRIGMWZDXPZP");
    msg.value.assign("ACMZKQRGRJVXEJLMORTNWZPVOXNPYTOIPLJHBHAEDYXDBCATTCSAMPBPCOGWLUQYVFKDDYYGMQJSZQIJHBQHITEWAJUIZLRZOQSEJPELVMGBUGSMRCUDHPGLQMIBOF");
    msg.type = 207U;
    msg.access = 82U;

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
    msg.setTimeStamp(0.4289726042366907);
    msg.setSource(20848U);
    msg.setSourceEntity(58U);
    msg.setDestination(49246U);
    msg.setDestinationEntity(6U);
    msg.name.assign("STCDIMHYEVJVTMAREADCMKQTZSYWWEWSLCXXKHRPDPTYWMAXLHOOPPYQFAOEGPDBZFUGOYOPQIC");
    msg.value.assign("FHKNIQZWKDGSCNIAKMNXDRQQDIGGVESRXZNDLLWOCJWPTQHCDVHLBJBJVUMQUUNWUXBQBWXNGEEDKXWREGOAFFRIYGSTBODLQZZDMKTEJ");
    msg.type = 203U;
    msg.access = 117U;

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
    msg.setTimeStamp(0.9336714221934596);
    msg.setSource(11086U);
    msg.setSourceEntity(180U);
    msg.setDestination(53880U);
    msg.setDestinationEntity(72U);
    msg.name.assign("NYPRVYQEVFTOEYPZQXGXNXONOWOPQFHRBZFHLUTDBLLAMEIGNSICJMAIGJAOXTISXPLCMTTVBKRNWDELUBFHHKHKKDBHOCQZKVILCSEPSXIVOWNRBGLYDZAIRHMAIRRWDDQGUSDNHGSMWUUJKIZZYBZFTFLZKKXFSQNUYEXEKFJWLSEZJDSKFWUCRUJOHPEAJYMB");
    msg.value.assign("ZOLWMZRDQNUSIHCWGAHRNUSXVVZDOOYJDZLQVRPJXRAJGRIDCCFXYLQHITKFDEFWTLBRQHANVTBNIUCJMPWFQKMGBIPPHWGDMRZIYXVKHARGPMEMJLPKEELSAQPVWRREBVTLOBKXEGKOOKLZFGIANJVXTFSTCTHBCNGMEFBMCWMPAGLSAQDVSYJNMGPZIOVXWBCDSKYZNULIASBO");
    msg.type = 47U;
    msg.access = 251U;

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
    msg.setTimeStamp(0.13399081979358374);
    msg.setSource(6161U);
    msg.setSourceEntity(250U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(178U);
    msg.cmd = 17U;
    msg.op = 177U;
    msg.plan_id.assign("ZSYISRPZEWAELGRAPUOOZCBTWYTWOUQUTHZPYFQRHTPDLIFPJSGPFBKWDXGZXUFQXXPTBNAJSHGEIKLTBSAXKVOARWKYFZRQYN");
    msg.params.assign("ZNUIUOGXDGDPMDASVAWNTHSTSTBBPJKEPQENLJGWABZBWRIHJZIBKJXFYLQFJMNBMXCEYVTXAZPRGWHSWOXWQGCIRBFWBIRMCLWHBNTNVLARDQGKIEFLZKLTCAUZTRYQIQMASOYTYBRARVLUSFTHJADXCKNDCHLUKZUYCKUFHMQLRTJVOXNUGFEDCEZZSXXGOPSKWMOPYSFHKYQHQXLUDAMHOPENSIVVFVRGEIC");

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
    msg.setTimeStamp(0.7377662663224318);
    msg.setSource(3624U);
    msg.setSourceEntity(29U);
    msg.setDestination(14642U);
    msg.setDestinationEntity(139U);
    msg.cmd = 232U;
    msg.op = 42U;
    msg.plan_id.assign("JURSRMUGZJTAVWTULYZLKZIVRLYFJASELORNMEHRXTGAHACEBZKJYOHAEGDCLDFMHCQTWXSMDTXQBWNGHGPNNZ");
    msg.params.assign("FSHAPOAQVPLRSSFKQRLNGEEGDWVFPKHUYGCJBQOKQWSKILLQSBTOJBROVVDCQPJDYZWUJNKAXMXSHJRAZNSMJXHPZHTETRFHBAIIAZSZXINDMMPCKIOBKGMDGTHESINFKVAICBYTCPERGAEYUABRIVBJDOCKJXWXOMSZXOLBJLCFDWJYUCCBEFGNLZVOTWHUV");

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
    msg.setTimeStamp(0.21699245955814972);
    msg.setSource(47429U);
    msg.setSourceEntity(233U);
    msg.setDestination(39833U);
    msg.setDestinationEntity(3U);
    msg.cmd = 189U;
    msg.op = 38U;
    msg.plan_id.assign("PQEQIRDUPHSYFAPUFUTZSZIQWVWVAUFVTRWTRXHCORSYHQILGUDYCKQTUDIXKSKTQDMMDGMZRMYVSPJPAVEONHPLOLYTZXL");
    msg.params.assign("RBGQXZIBKYIWREIFMQAOGOUMDLUEYZPBZTEQIATCUMYSZROYKGNUPEIPCEDBSERQTVQDCSSBXXCERFQNOMUPKYTJHAHMXLDNCXWJFZGUFGJNCKKUANRRNVTHZOECALKWRLBASWSSGHTSVPRYYXSBJKPPFGNAUIMSWJVAYLRKJZZFQZMLWVQANBUPVCFOICGHVXBZJOHUMVYLFTIOPBGJGWWDMQDVYTLKILTDKJDDJFE");

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
    msg.setTimeStamp(0.0747875725410918);
    msg.setSource(926U);
    msg.setSourceEntity(74U);
    msg.setDestination(28693U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("SQHJLOCXZXMFELQVDTKJMMPLVPIZFFXOYUYESRDGGRYQFJPNEVITVRGZNWVOLK");
    msg.op = 246U;
    msg.lat = 0.8371602168615458;
    msg.lon = 0.5245278080164658;
    msg.height = 0.5053215864139026;
    msg.x = 0.13700902980052554;
    msg.y = 0.9712318851216809;
    msg.z = 0.7919152942093325;
    msg.phi = 0.12134923134281139;
    msg.theta = 0.3997713195339171;
    msg.psi = 0.9202885088025766;
    msg.vx = 0.5799611853735279;
    msg.vy = 0.10029408071544599;
    msg.vz = 0.9122920696963785;
    msg.p = 0.3912245784325654;
    msg.q = 0.9193806181855545;
    msg.r = 0.7640967054475583;
    msg.svx = 0.5120633216824543;
    msg.svy = 0.33178856470091145;
    msg.svz = 0.4859330300293161;

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
    msg.setTimeStamp(0.4265674736655338);
    msg.setSource(39371U);
    msg.setSourceEntity(87U);
    msg.setDestination(39960U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("UYDLUKWIGPIJPYPADLTUADJBZXTSGMGOAFLDGZVTVYWTJECXPELOQEWMKWEPRNXKEOGEYLRDVVQNDQMMWQBYOLIKJ");
    msg.op = 133U;
    msg.lat = 0.2841422885500632;
    msg.lon = 0.3754584757578374;
    msg.height = 0.7140795761347148;
    msg.x = 0.16652959634029862;
    msg.y = 0.5839608411274801;
    msg.z = 0.6540705796116507;
    msg.phi = 0.9561857509377216;
    msg.theta = 0.5537907346276595;
    msg.psi = 0.6433222293947148;
    msg.vx = 0.6206102284151653;
    msg.vy = 0.8347195387911758;
    msg.vz = 0.06934705489237114;
    msg.p = 0.026624720310013172;
    msg.q = 0.421534122661387;
    msg.r = 0.09912023377022938;
    msg.svx = 0.06327829853316624;
    msg.svy = 0.023701511380315843;
    msg.svz = 0.43498524918227377;

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
    msg.setTimeStamp(0.40629589951533907);
    msg.setSource(147U);
    msg.setSourceEntity(50U);
    msg.setDestination(13513U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("JRSWJTRPRVXMPMGCERBIBVFLUJXOSAWIHVCIYRGRZVGVDVGGDOPJLOCPLXVAPNTBHSIFAWIBYM");
    msg.op = 24U;
    msg.lat = 0.18970684837729823;
    msg.lon = 0.290945481963491;
    msg.height = 0.5946427922479263;
    msg.x = 0.6010056659126064;
    msg.y = 0.5444512957669587;
    msg.z = 0.3425261897061128;
    msg.phi = 0.43656602213666107;
    msg.theta = 0.004720862797562009;
    msg.psi = 0.7067780343244932;
    msg.vx = 0.7464496343785697;
    msg.vy = 0.8022422152955776;
    msg.vz = 0.6546890058593443;
    msg.p = 0.8859967165525626;
    msg.q = 0.2724550309532917;
    msg.r = 0.5219931639103131;
    msg.svx = 0.3607420301989325;
    msg.svy = 0.49468110153449574;
    msg.svz = 0.2233760011273047;

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
    msg.setTimeStamp(0.3005306426409152);
    msg.setSource(11217U);
    msg.setSourceEntity(211U);
    msg.setDestination(41518U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("AHQFCZKVMQSCFYJULAPEWEDTVQYSUNPYSSIYPKIPGVBMFBZMLTXHAMCRKXWAOJIHRBGAQFDSOBVDSUFQVNDZNKAUWMWUO");
    msg.type = 113U;
    msg.properties = 181U;
    msg.durations.assign("TNAGQMUEVRITARNTRZIJWYBUIUZOMEFJDBCOPBBSVALIWHAXNOVOBLXJTKNVMHAXJMANWEKMWCGXASQVGNRGUICGHSRCEDODUYMVMCYQFVJIFHFXQLESNML");
    msg.distances.assign("YEMBCFBNCOKBMDNBXXMFFBMDWTCCZPHRYYYRMOTUFAOJDRWJCEPYDHOIDTVFCWWGUUOIBYJMFJSPAKQUWNYWFGRGRQOVDKCMEIGQZIEIXBSVSCWTDUKRUEIFYHDPLKOLNZSL");
    msg.actions.assign("GTYMFKTUCELAWONGVFYNTFSRDFEQDARZIHHQSIOBNGNRAIKJDNRGIIFBWNGBTBBRMJJCPESMHNDHGJHPTPLGUUMHXFCIUKYVVJMKHJDLBSZYRF");
    msg.fuel.assign("OVCQNROLELZVOCZLKPFVVIIOHZREZJUXTPZVRAJJMGWHNXCKKFBKYUBZAFTJIYBPIBIXRCFUNILGSYNGGXAUYMHOHUKWRMBWKMJTHBRNVOODVYDNZIDQ");

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
    msg.setTimeStamp(0.2975317747531414);
    msg.setSource(41975U);
    msg.setSourceEntity(81U);
    msg.setDestination(22881U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("ODDZTODLWCRZIBACYYHSRTLWTLUAUCDMNNAPPBKPWIJTPBVPHACKMEVVQTDZCFFYWCVNSEVVIKJCUYDINFGHOGUKYMXYFZWZFRKEBBINENHRWZVOMSRQOJRZMLQGZSQJVFKLXPOAMQNFSXWJXYGCZKRHTTIFWJYUDSFSPVEGUXMBQ");
    msg.type = 7U;
    msg.properties = 197U;
    msg.durations.assign("NFFJRVCTKLHSOYVEUQPPZHVLWSPYQADKSTCAJWBSGVMQZXFEXYYDXRRHXIIHGUPULQVIEFODEFJKAGCKCPHDPJZIBBJZVTUNFHZEYCXDYYTYMWSGNRLGWFVDDBKTLGTRGIGEEBUCAQLVJZMOUICAJQDE");
    msg.distances.assign("OYJWXKZNCJWRCTFOWUQWBPYKVCZGYGGLIJLNSASBYIPUIOHPBVTKXUWKQMDUJCYFMHXFLOQDLJQEFMXDOUKXDY");
    msg.actions.assign("FUYOXTKGXIJBBGRREZLEGOCYNADHSIBVVSSWHCSVUZQIGHSEGPVLGTMQTWXAJSKRNZAJBNTPYXDBNYVKYXLUOFLMOHQZJCFRKWULRZJRFHUMADKALTMVWDACJSZWDETTOMLFPFWMVTXNYBIKDYXEBRVDWOPIZDFYXJHSCQILNW");
    msg.fuel.assign("EPNUUULFBLARPBYGOMXHXBQHTKJHPGNIIKTRPQGICJOGWVIDAYDQFEZQVWYKEXBSKCHTSIDRMSVBBGNQJXZVAKSSQJRUFWJQSICNSMFRAWKEKONNEYHMZJTLWGCRBLOAQPVETO");

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
    msg.setTimeStamp(0.07609365819106839);
    msg.setSource(33624U);
    msg.setSourceEntity(152U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("SXWCDZAHUMOZCGXAWNKGMHYLFZBERRAMVTVSVXYGTGVVQRQUPNJXVLNWCFVGVEATBBOBKMILCEFRHVIQJQATHSTXPOMECETIQXDNKPQWTJKGAONHSURJYPUDQIKCIHZPWZBEUMIASLSMFYDYPCJC");
    msg.type = 119U;
    msg.properties = 50U;
    msg.durations.assign("FCOZNWJLRUHPQKUWIHKENFINAWDYLSJYIVHGWGMCBEPLXRBCKGZXTGHDOHNJQZVIUBYNFZNBKDTYYGIDJSTBSTFUCCDJZXCDKKVBYVADJAXEKTOBQNUWDRFEWZWXCUTVPAXRLMAIUSEDEPZOIJFAQZBEZNLQELJWPMRMKQUCQROVUOLRDWSHFSBKTBVFSLFZTG");
    msg.distances.assign("OXROREZJIGERAKNYYXUTCKFPYICMMPIHHMWZSHWFVXXXOEFRGTNSMDZPLOXLOZLHZHVJHWOSSHAAGYIULYKVBAKIKWUMPJYQBRAJSCFOLFSNFFCGIKJBEPNXRBJBQCDLWOODYBTBVKDDWNGMDCVVPOIJALURMRVMTDZIVNFWTGEVLSZREQEFTQWPCMEEQJPBIBASZWUJTQYHFR");
    msg.actions.assign("YZMYHOCTVNQXMWXDMKBEMDAMKSJQIYASKRZPTXCOILMPEFALJVWXHVCZDGZYESLDTNA");
    msg.fuel.assign("ZONFGRASPNALCCMIMKRSUKXFJUMHUXSZGXDICQRZMDWKNIJCGKEJXVMWZBCVLMCQVXHNWBJ");

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
    IMC::StartOnManeuver msg;
    msg.setTimeStamp(0.4128569478156878);
    msg.setSource(12983U);
    msg.setSourceEntity(205U);
    msg.setDestination(1076U);
    msg.setDestinationEntity(107U);
    msg.man_id.assign("BHPGDLPRFEJAJMZFSIYEPVMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StartOnManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StartOnManeuver msg;
    msg.setTimeStamp(0.7084541473985384);
    msg.setSource(57072U);
    msg.setSourceEntity(161U);
    msg.setDestination(31809U);
    msg.setDestinationEntity(92U);
    msg.man_id.assign("TETOGJAQYEALPSRSOIUXUCHPWEHSTFHCPZWRZVAWFCMNIOLJGYZUQGQEDOYDPGNJZUQNSMJCISCEYUPPNXKMOVIDLYGFEBKWRURVXIFBUGMVCDPQJPFQXXDOQQFUHGCJQAWSDKRDLHDBKVUKPKYINTZTLTIVSJJHYSHCOBBTLVXHBEKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StartOnManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StartOnManeuver msg;
    msg.setTimeStamp(0.39150533659178677);
    msg.setSource(44615U);
    msg.setSourceEntity(16U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(213U);
    msg.man_id.assign("KWAHSWIRCBIBIITMFOGFACGLHBTAGSKZFJKRNLSLPKHZMGNXROGMSDLZWKZYQOCNXZLUECDOMYEXETLSUMBFYOUEPNPXELVEKOTEUHAFQQRGUTIFUPTXSEJBKWQXDRUAVCJZDZTWXDEMAARBSWMNKIUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StartOnManeuver #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6562547659105511);
    msg.setSource(32477U);
    msg.setSourceEntity(166U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.45633195622841116;
    msg.lon = 0.3160790040894249;
    msg.depth = 0.6286121606430886;
    msg.roll = 0.42471272999761245;
    msg.pitch = 0.3736244495883011;
    msg.yaw = 0.7831803943473997;
    msg.rcp_time = 0.6001289269140688;
    msg.sid.assign("JEYFVJEPRKDISLBBPWLQPOOZTDJIBFULTIRWMOWWNHUQSHXDATZRSQUJWKAKFILXEKPJKQBBTZHFFLRQEEXHXNIYTPDWHKFTQEUGGJHOQNSERWRGHYOMZNOGUPCCQMYQDNHYXULZFSDABGXVTTMMJSGOBNIDNDPDEFPCBPLUZGNXCHGTWBZAVBKMRCZOKUZYAYVLI");
    msg.s_type = 77U;

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
    msg.setTimeStamp(0.6383801530119464);
    msg.setSource(57972U);
    msg.setSourceEntity(75U);
    msg.setDestination(50962U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.7572511855992844;
    msg.lon = 0.5862727327667119;
    msg.depth = 0.5217273314760903;
    msg.roll = 0.04004771577498201;
    msg.pitch = 0.36576194326565026;
    msg.yaw = 0.07916649175213297;
    msg.rcp_time = 0.050917764817982825;
    msg.sid.assign("DGAZEIQHWDXTVHPMDCOTPGIKVMELYZZGVNPXGTBJQDSRGX");
    msg.s_type = 215U;

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
    msg.setTimeStamp(0.16974548915367282);
    msg.setSource(59800U);
    msg.setSourceEntity(38U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.021156274102710038;
    msg.lon = 0.1471278664912654;
    msg.depth = 0.9997967532334121;
    msg.roll = 0.7520340820723302;
    msg.pitch = 0.043842550645089684;
    msg.yaw = 0.428618486610169;
    msg.rcp_time = 0.16460811022919064;
    msg.sid.assign("CVIUDGQEUNFQAOIQZMPADCHSATZBHCOGPDHPKBXVMPVYLFIMPNDRQLLBHTCLLSJXODYZOZCMCJXLOAWVAKCBWDNHYBSROLJVBJLRWZUUVBJXNYPCZUQTREDFOOWWHKFKQBNZKHQUXFTGAUVANPGAQVWZTLERVPWIPYRMNQEHSIEJZWOFYKDKMWDWTMYU");
    msg.s_type = 177U;

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
    msg.setTimeStamp(0.5445483891753754);
    msg.setSource(39689U);
    msg.setSourceEntity(152U);
    msg.setDestination(26037U);
    msg.setDestinationEntity(126U);
    msg.id.assign("FJCOQGTHOJQIQEPZIFUEGYWR");
    msg.sensor_class.assign("OGUUYFEJVIRVHDIXRHCOOPCYSAKWFB");
    msg.lat = 0.7925328490828082;
    msg.lon = 0.198709863888069;
    msg.alt = 0.0720732299957545;
    msg.heading = 0.39783445030246056;
    msg.data.assign("LQMQHANJQAKQTFSMQNWLIRSJZQHMECFZZGAKUGXEEQNVVLRXXAHTYUUWDPZUODCYERW");

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
    msg.setTimeStamp(0.999945622992508);
    msg.setSource(4647U);
    msg.setSourceEntity(188U);
    msg.setDestination(42521U);
    msg.setDestinationEntity(162U);
    msg.id.assign("NDFMENROGDFPYGWQZFMJZPBRUXXXLJPTMLSKZLGWYMIEALKFVDSYCSKTSKBYQTFLVEZEWNGUZEIJHXCICANAMRBRUPHIINPUTCVSWQTNJUKUGDAFUOAQJDLBLWMZYOUFWESHDXHOBVTJXRZHTGPCBHHLPDQAMQGVUOVSJSYYHWVTLZMAAXVRPNJCITYBACKGOJPKROZARHKKMFBDGXNWYBJEQOHCEQDXBSVWQCINRNLOYGPEXVTUDIIFQSOEZ");
    msg.sensor_class.assign("QCLUOCLQJSAVKOFWGCYWSTNZEKHVSKKKCDGZYIVAXJXSTAEYXBXCQOPEIFCJSWPIHCUCLWSZJHHNRIIRRFFJFUNPOBHPYTRZDSLXSXWQBEYMUTAWTODMZPULDOQKHGNVHVMHQCLFNXPOZQAYOZCDINDLBRBUBOEBRZRUJZHGRYATGKWMMXWXFVGFHVJNMBSTIMMD");
    msg.lat = 0.5574417821655249;
    msg.lon = 0.641668970703686;
    msg.alt = 0.30215359055656466;
    msg.heading = 0.39616087757348317;
    msg.data.assign("BDVAGVQQRGROMRWVPNWFRZMVWTAHKDCJGGXFCUCEKCGHNAYSTPAYNEYCSILO");

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
    msg.setTimeStamp(0.011491589378613387);
    msg.setSource(64943U);
    msg.setSourceEntity(138U);
    msg.setDestination(534U);
    msg.setDestinationEntity(80U);
    msg.id.assign("QENKZPTZEJYDVEJGMYSQCUAOWPKIUXGCMQWCXXBKMCASYREVCDFXWPBQUJWPELCAWKWZYXHVIMCPSQIVNVOVGOPQREJFPZBEOPXSHYAHWGAHBOHSKBYRZMFLRUZGKDAIFXBMITOSBWIOMNFAPLLDWVKTEVAJUMAQZ");
    msg.sensor_class.assign("CUFVTWFDZZXDRSEINVVLCBHSZSQMCDJMDRFFBFMAWRWJZUJGQSAPYRVKQHUDYPURFSRTNRUENOAMBZFEMNUQKQCMWEMTHUSKOGLNNXJYAWJYKBNRGGLQXLHBQAYDAYBLXSMGVQBUYOEGQBTZSKRXGIHIJOICJVVXPOKUWNJOWEPUMGHLTYOCOGZAHNKDXAKTRIYZTKI");
    msg.lat = 0.23401873293025421;
    msg.lon = 0.5739719705164259;
    msg.alt = 0.021631554093437755;
    msg.heading = 0.7079544326814337;
    msg.data.assign("OBEPRMRBQCTIWXXSQVSOLUQAWTFYEUKREGVLZKEMMVNMUUDHWZDUNREINHKMWHIIJPOLCOGWJGYXHMXHHSCNZRCZDAIY");

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
    msg.setTimeStamp(0.4029625069508176);
    msg.setSource(62761U);
    msg.setSourceEntity(159U);
    msg.setDestination(25117U);
    msg.setDestinationEntity(145U);
    msg.id.assign("WIJOWUYCGDIZYUXLLYYFLISTACFREUZAKUNSJPMXWRHOSSXPTKFUCAXBEWNKNJENHIKWIXSNLUZQRXFLWMFVGVJAFJBUJMGDIDVMWMSGARAIDUHFGCKDQYBPIZHVLSJGQBGFQZWLLKEKQXEZJOGVRBPHARSF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TLAUKJIHQACFXZGIXUSBIFLQEEQCGNKEEBHWSTQDBDFOKEUIPBRLOIEDQZLFFOPGPGDCYKQGBMTTWXAJFCMUHUQZATTIJXPXJQOUNURMSVVNNNIGOFNHDYGYVSMFMAHPYMRKTLXQSWLDZXZWPQBYNDEMDPYKJPYXCNVAHZYLIGLKCBROSYGWOUVSJRKHHNZXDKVTLPBDHBVZLFMGMSWCOMFAAN");
    tmp_msg_0.feature_type = 93U;
    tmp_msg_0.rgb_red = 73U;
    tmp_msg_0.rgb_green = 38U;
    tmp_msg_0.rgb_blue = 174U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9348569217771069;
    tmp_tmp_msg_0_0.lon = 0.6370039721762331;
    tmp_tmp_msg_0_0.alt = 0.9128615300793319;
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
    msg.setTimeStamp(0.7723518386451645);
    msg.setSource(44852U);
    msg.setSourceEntity(11U);
    msg.setDestination(20086U);
    msg.setDestinationEntity(244U);
    msg.id.assign("HXFXSPEULNNBPDFPPWDKVAOYHYUQYMVAGISIKBJYMPQDQSAZIAKYLVNQURLDFYTEHHNVKBKFCJJRJVBXDGNPTWQDRFBGQTETAOLZCGETWASLJUFGWQKHZUMLRSXRCSAAZVIDOGRXPQMCMUIRANCKGJKLOOFUOZPITCZXZIMNCDWIPNHNMYKOMTCOCEKLOX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ARRSKXBHENOPTAZCWGIRIFTRBADGJQZKTVKKVOIDEAQNQKMXCROCYSSDVEXDKSFMNYOGYCMSTVRSJCFWLQZBXPJWZOZHIFFSNLSOJHCYFBNBEPSMPREBUBTWPYOHWTDNAPGIEZGOETFYBYPLYCTAQLGMXZFLCPVBWHWQOEXO");
    tmp_msg_0.feature_type = 220U;
    tmp_msg_0.rgb_red = 223U;
    tmp_msg_0.rgb_green = 249U;
    tmp_msg_0.rgb_blue = 103U;
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
    msg.setTimeStamp(0.8318686986542182);
    msg.setSource(14759U);
    msg.setSourceEntity(92U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(37U);
    msg.id.assign("WUVMLQZVXZNJEGJNOWZMSMNP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XLWWQSDHXIELDNIAXQYEBIJZUNFVGARRSCFXWNVEJRZKOHMWAJFJFTGMLPBBASPUCDNXORDKQNSSYYRLZAQOKBVHDCQLYTYTRAUZXGAHKYWPQGPBUTRAWFCMUSEUKGAKHXPZEMOCKCJFMECORUDKVIMEOTFJOZZYJMWAHTFHHYBUPVRUBMMKHUSTOVPFXGMNDJIQIBTNWSEQHELCLGCNQBOPJRTITPIGYZDQN");
    tmp_msg_0.feature_type = 179U;
    tmp_msg_0.rgb_red = 140U;
    tmp_msg_0.rgb_green = 176U;
    tmp_msg_0.rgb_blue = 56U;
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
    msg.setTimeStamp(0.4349484064005632);
    msg.setSource(3910U);
    msg.setSourceEntity(188U);
    msg.setDestination(7960U);
    msg.setDestinationEntity(5U);
    msg.id.assign("RXZUEYUNMIJXVQOZHOXIBXZFWTPNXXFVSJUVYFOJMPCZYYSOKKKTZAWWBCQAZYFHGLDTNGAGMUSACYGDRCQRIAQLNJKLRQQGSQHBHFBPCXLRWPEETJMGGFBYVKJVLJQPNKIUCOBTHXIAMHHMWBBEDGMFNMWVRRHEEWPEANF");
    msg.feature_type = 92U;
    msg.rgb_red = 115U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 221U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3505595464729534;
    tmp_msg_0.lon = 0.7954473011109098;
    tmp_msg_0.alt = 0.010443619012254546;
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
    msg.setTimeStamp(0.4896823437145992);
    msg.setSource(59332U);
    msg.setSourceEntity(16U);
    msg.setDestination(33659U);
    msg.setDestinationEntity(74U);
    msg.id.assign("RALESMIRHNJHXXYBYKYMWAAMGBTQGDCZAVGUAKXIEWMDVRVPUOFPDEBUSORQPJKNNACUYZLSIHLYQPTDOWGGFOBLJKWYBINFMIMDBQXKLPTEZXDHGZDFJULNOOEERQJYORAGFFBNCII");
    msg.feature_type = 173U;
    msg.rgb_red = 50U;
    msg.rgb_green = 61U;
    msg.rgb_blue = 87U;

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
    msg.setTimeStamp(0.44570162614713216);
    msg.setSource(50770U);
    msg.setSourceEntity(157U);
    msg.setDestination(34905U);
    msg.setDestinationEntity(102U);
    msg.id.assign("KFKBAQAQSIIZUERLTGXRHJSUCBJHXMINOZCJYDKFURGVSIGVUTOOAEEFCHSNDNQWQBCZLYNAVJMFBKWLNAOXIHDSMNDVNPBTGPFHJZWOITCYEJEOMLIWZUHWSDTWSXRFKGGKZXDLAUHLAMYJDZRYGWHMPTQXECWZQCQPGRVXFSLTFAEKPNOMOKJBPNQYTVLPGFCNITJWBVLCP");
    msg.feature_type = 177U;
    msg.rgb_red = 71U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 247U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.028248183772469293;
    tmp_msg_0.lon = 0.22131008094550497;
    tmp_msg_0.alt = 0.6470778255953739;
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
    msg.setTimeStamp(0.5183953240823153);
    msg.setSource(58119U);
    msg.setSourceEntity(67U);
    msg.setDestination(17953U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.8979341612223265;
    msg.lon = 0.9861173295015865;
    msg.alt = 0.5359014184757921;

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
    msg.setTimeStamp(0.9212938804778767);
    msg.setSource(15058U);
    msg.setSourceEntity(165U);
    msg.setDestination(3531U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.10647624831328228;
    msg.lon = 0.0021552515508219683;
    msg.alt = 0.7941319270396526;

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
    msg.setTimeStamp(0.21732377442673623);
    msg.setSource(48380U);
    msg.setSourceEntity(104U);
    msg.setDestination(52720U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.8277756610031562;
    msg.lon = 0.6234737107121436;
    msg.alt = 0.9951293050734805;

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
    msg.setTimeStamp(0.24837413315628787);
    msg.setSource(32079U);
    msg.setSourceEntity(239U);
    msg.setDestination(26691U);
    msg.setDestinationEntity(126U);
    msg.type = 56U;
    msg.id.assign("CYNOCVVYNNKDFMXBPNLKWJFJMYPGWIH");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9525483597126615;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 17839U;
    tmp_msg_0.custom.assign("QYTBGEUHXAZWHEWXAGFYNKSFPFLIAHJOHVFMSCHERYSDZ");
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
    msg.setTimeStamp(0.2629691961834676);
    msg.setSource(14225U);
    msg.setSourceEntity(123U);
    msg.setDestination(63452U);
    msg.setDestinationEntity(88U);
    msg.type = 181U;
    msg.id.assign("HUZVFRZYITDKRLEEUFQMKS");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.45116096987325927;
    tmp_msg_0.lon = 0.35875790726577717;
    tmp_msg_0.eta = 1092355250U;
    tmp_msg_0.duration = 32649U;
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
    msg.setTimeStamp(0.9208945404533695);
    msg.setSource(1563U);
    msg.setSourceEntity(190U);
    msg.setDestination(27362U);
    msg.setDestinationEntity(210U);
    msg.type = 37U;
    msg.id.assign("JSCWGJWJCZA");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 48U;
    tmp_msg_0.value = 0.065638580279468;
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
    msg.setTimeStamp(0.4369521595240531);
    msg.setSource(58092U);
    msg.setSourceEntity(174U);
    msg.setDestination(52930U);
    msg.setDestinationEntity(68U);
    msg.localname.assign("QTSMSDSUFJAOWTFSJYVLEQYSGDLBQKCKGDEICXVNNMZCITPJBJPHYIAHZYJUZORYCJYISBWHHCANOJNQHATNRGJHFPRUMEIVCXEQHGWXDGHMJERLKEICYKQSZZSGFMLRKFGFXDOAOWPIWGMVF");

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
    msg.setTimeStamp(0.12185935972321771);
    msg.setSource(44286U);
    msg.setSourceEntity(69U);
    msg.setDestination(12713U);
    msg.setDestinationEntity(242U);
    msg.localname.assign("VFVOSZOVPLXJSUZYZBFCZDYAKPEHEVHAGNQFYFTIJQRMMCCQWLGHFOMIZVPTANERNHZRJGPNMNYUJBXKRGAJPKHDSWEUILSSNDQSRIVVBEOAXAYGCTQZTMLJFIFBQXGUWRPXKMHBUDXYUKBXPDXHGUPSKIYDWUMEWPCBZIWOCKZGUEUTJWOOBQRIEYGVEFCLNEJKIORO");

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
    msg.setTimeStamp(0.7622780609744202);
    msg.setSource(13693U);
    msg.setSourceEntity(0U);
    msg.setDestination(27139U);
    msg.setDestinationEntity(21U);
    msg.localname.assign("VBHSUVSYWPZEKZJWCUIIWOXUMGESJXJR");

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
    msg.setTimeStamp(0.10380298603556715);
    msg.setSource(15788U);
    msg.setSourceEntity(219U);
    msg.setDestination(57709U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("JDLWSUGUCDLBSHVMDYOCABEURYFMIDNGQPHMFKEBIANSRRRWVRULXMXXSXGHYOJOIKWKZYTOPGMIYZJVGBBWMNVIMKKYPPOASCRJUHLVD");
    msg.predicate.assign("MGHJQNHOHVVEOZUQWARHCMLPEOQDOWFTHCDPSTJTDPASWUTWBDADEAJEBDJUGMLSEIKYCOMFBSVAPWBKPPKBIULFFJICKUXKICHPMECQVEZSPAEHVDBXRKIGGLCOBYTZWORMSWIDKRJWNEM");
    msg.attributes.assign("UJTKAYWMDACSEMORUKYBVRFJFOXIFRXZOHQXLUXGUGRQZNTADYCWGGALMPCKPTMYZHDNUZIOYC");

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
    msg.setTimeStamp(0.8033338654946148);
    msg.setSource(24614U);
    msg.setSourceEntity(60U);
    msg.setDestination(13783U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("WLQORBPCPOTDUZQYCJECGYNBLPZLAVSRIBVZBYAPVRJHRUZJJHRTIS");
    msg.predicate.assign("NEFOPAFIXEGIPXNOHYNPBDJAEFXMLHVNRZCNJYFGMACOTKUGVZAGRWQSSGDPDIIGLMOINKPHWHVRBHHLQDELZTMHECSHLZLNWYFMQXYJUNTUAWZJHVSEWWZBFQUKBJSYIOEOTTGPOHQDFSQYUDRG");
    msg.attributes.assign("SQLHOUNSTGCCBKPZZEOKYWGIAPPSRWLEYZRFPCQNSUVRUUFLXIEVMSFLJBTQHCQZCKUFRPCLFVVRAQHLFNWOAAIJTKGHWSJJZGMTQPGCYIXNNQWSMXAEQLEGMONAMZEVDTRGOTOKTOVVBXYKPMRXDEDBBCQFKMYXEBJWMYDSXRSVBHUBKUCGFJJPHINPLQLKTTVIJEGYYZVBLHZW");

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
    msg.setTimeStamp(0.7775497483248317);
    msg.setSource(62579U);
    msg.setSourceEntity(10U);
    msg.setDestination(36739U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("DBKOEVVKDRLMYTICBMEPJQPBEMSJTUQQPYYRWSUAVMCEMOUVFZSKNOPYTIVFFGOOGJTBLCQUZSSGALZAAMDCRESNZJHMBLFGWCGHGKCDMHQJMTHAPHDPPTQAJOOQUZBJKXZGYSDTXGVUIZHCUIRIQJKXRNSKADHNRWWYICWBJFOTBANXIZGVFGETLXLWCOXXYDIWRNCXSVPIYE");
    msg.predicate.assign("XNMOJTUKYZAAROSUPEDHJVMMDHMMJPFBGHFKTFHKTBDRXCNGDSZJPEFZOFKJGYFYETCHHKMZOAPUZVLVQQRQOOSYASULMXKVXHKDDSNLTCAIWTSLILCKEZQJEABZAAYMWKJZPJICBUNRRCIVWPOV");
    msg.attributes.assign("VACUNFCVNJEQXYYKHJDQHOKJOOMBGGHTEJLPJIEATSBOOSHSHAEPWGKLAYKSGFKRPXSFQBQIGZRSAIUTVFSKXAQUQWEJUZVPRYDDUXLPXORWYEHOFWEWVXTNZLLKUDVCYEPRGPM");

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
    msg.setTimeStamp(0.9817552254497444);
    msg.setSource(48826U);
    msg.setSourceEntity(177U);
    msg.setDestination(42695U);
    msg.setDestinationEntity(100U);
    msg.command = 232U;
    msg.goal_id.assign("WOBMPEQFBTZYKFQYAJCALONZQWINIAPSRWTCBFDHZIVYKYIAHIECKBDYVTMDRPYEMERUZZPWAUGPSNVVLAFDQOWDNWDIMRRGEASADGVLXWGNCQTLJURPJQWJKERPNNBZHKXUQTRDETVFUSOBGJIHOLQGSYLHEXBHZBFPXC");
    msg.goal_xml.assign("AIOQLRHSYMJJVHAVYMLMQBFNFCMRFYKTQAGRULESLCUJWKEWDAZSMNINDPGJWSXRGDHYEVXVOOUVYCUYHKUHNKJBNPGBPZJPMTYZBKJQUXZOTTLOWTFWJIOZBDBPBTTZQSHSKSSFCHODWPDUIIQHPMFSKQABGCLDIRWXMKBDYLWCXLAOENXAVOIBEQJUGRPFXVGETQPNQKHAHNRIXLCGALFEFWE");

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
    msg.setTimeStamp(0.09336215770313716);
    msg.setSource(8581U);
    msg.setSourceEntity(139U);
    msg.setDestination(60227U);
    msg.setDestinationEntity(69U);
    msg.command = 19U;
    msg.goal_id.assign("SBMEDPYTVHHZQZVZIQFSPKSODBYCCPODUPJSFUZLXNTWDKDWOWHUYXANJGMJATRCXOURKIVNWBFXLWVEVLKEIQBNMVTBOLVXZWRYLENPUCTEQEALGIBPSHMNIKCKOAAYQFGRDSQMAGOQEZOEHYYHXTRCDSCOJPJFIRCIMGJFUUIVHBGGDKKLMDNQTMIAHMHBSJAYJRC");
    msg.goal_xml.assign("SMYXAVFQBEWNFFFZJZLSPKUURPVADHTHEMNKLGRSFDQLLJQLQXZCEOJAUBUHWDKZAGJJCNAETMIEURKY");

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
    msg.setTimeStamp(0.21355291718850256);
    msg.setSource(8203U);
    msg.setSourceEntity(84U);
    msg.setDestination(5187U);
    msg.setDestinationEntity(201U);
    msg.command = 239U;
    msg.goal_id.assign("CRDXWVQESFAQABFTZEBPHHWUZHDCMCOFSNPIMERMKSVRBBZKQNKMZOJLCNTTYGGJDXLZXZIRELJYLPRCDAMJPHJVVBUIEFWPLDTYOLQKDKKGHAWT");
    msg.goal_xml.assign("TLLVCOLPGQFSGLTPIZJZIELUXRAMAUVIYRYLESRHWXRXDZWGFJXZH");

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
    msg.setTimeStamp(0.9146513176849295);
    msg.setSource(57606U);
    msg.setSourceEntity(27U);
    msg.setDestination(1399U);
    msg.setDestinationEntity(222U);
    msg.op = 142U;
    msg.goal_id.assign("MESYJAPUWNRBXXXJFHAPIIUDOZXJMRUPAYXCITGCNIKLOMWFWCZKZGGNOPVDNDOKOTIDBQASAMLSJCTDWSWUIQOCZKQEBBLKZAJKPHZGYYTRB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QJSVGXQTWJWBGMYLDYUJTQXUMEZRPSVLAFEFMIKHGIESANBRCVCPCUEIJRDSYCIIOHOBAQKBMFXKHUHHUNKWXWLEFLZNXTOUMGCPCTOPQNNDDGTCYZIKJGXJSYFGTFNKPWKFTMWVDRJEBRHVQEZBIHVYOKUZSQFLFDLJHZSOQHBWCKDOXAOBTXGRPFGDYGXJRMPJNPILDAQRPVBNATUECRMVDMVSBNZWVLHCW");
    tmp_msg_0.predicate.assign("KJGUURCQYELEKGIVLFIFOEXCFGGNAWCXMJBADVRFICHZXHFTVTFPZDTOTIRDGQQAVESISMOHMDJAKECUPZAMVQLXZRKMXZTCWQOPDSXNSTBQUZNYEMIZGBMNNTUJX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FTUTAQDYAZLSAITXSQFJOIRKEGBVXBEBOGIRVPDLJILQMVGSMTYSUNNEMFBZSTFCVRDNSIIQKHRXRBMCIXRNUQKCXEMUQFVYFDTTPBEQNONPADSKVDYLWHEURWGCYMHWDPKJYMNXOLCZOLOKXMJFMPVKYBUADPYNVGBZSJQSJUWTAAHOBXZPBTKWVNKGIAHYGIIFCOCQGERZHWJXH");
    tmp_tmp_msg_0_0.attr_type = 6U;
    tmp_tmp_msg_0_0.min.assign("KYTHRFMFUTOUWBFTXEUGDENDKYIQXBZMPPVBKLCSZFCGNXXHNMJCERMZCLSOSZABOV");
    tmp_tmp_msg_0_0.max.assign("CSGDTRBEEVNYXETSPTJAHODUYUMZIKPKJXGDDJDWVDJINFS");
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
    msg.setTimeStamp(0.22578327271885745);
    msg.setSource(8199U);
    msg.setSourceEntity(71U);
    msg.setDestination(30191U);
    msg.setDestinationEntity(189U);
    msg.op = 61U;
    msg.goal_id.assign("UONCMHTLQGIKPSFSZBCQYGNASJGFLGNLACKVIYIPVUKVEOFDKIAXLECLJGFSWLOBAPMFJHUPZJIXKRQDGDYJACYKRAVUJZAPPDUKRRSHZDEVWQXBWYYCGLDOHIBXUDQXSCCHNFXBWULKTMNTMRMMTVZZGIPKWERMFSOENVONUBVENSIHHNTLJJHGEHVPOCQRFEYM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TOFRRFKQOOFJDUGPCCWDOO");
    tmp_msg_0.predicate.assign("VHSHNCUSMXYEWSGRFMUYUWPGEMKVJRSVQUOBXKHVPLDWXMZIVNQRMRZIOCVBORZLTNBVYDQSJLWYXDPNGJZAKCBEHXELMGKOTAPTGUBAZSECFGGLSATJPNLNCXZOHOKKUPMHSUIJTAOACNJQIAXFDSCNRBXAWBFPKFVITDLJMIIQYAWWUNBGHJD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LTUYNYMPUNKFNSYSVPLGCUEAUEIBQAJMABAPAIRZTZJZYWLDHVCKMJVFBUXVROOJ");
    tmp_tmp_msg_0_0.attr_type = 200U;
    tmp_tmp_msg_0_0.min.assign("PJMRFAHBOXWHSIMKFZXPM");
    tmp_tmp_msg_0_0.max.assign("RUZTMEYDJGPGWHVELBFRVWKNXFTSKIIDMKOUUXQYWLJZBHFCOUSSOLRDKELNTZQFPAFCGHSSWZRSRIQJMFIPZNWDYJVBEUUOESWFBPAZLJNLTOIXPFTKMYHKDNYWNEGDAMUCOYJBWSUDDCOTQGXKAMIDNNPRGRXIHQVPHVJFGPPFARICGTZQOYXLRSVIYXYQPECMZYGAUXEHWBIOGBHCMWQZM");
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
    msg.setTimeStamp(0.16014409273984764);
    msg.setSource(6377U);
    msg.setSourceEntity(125U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(11U);
    msg.op = 26U;
    msg.goal_id.assign("XTPCAOUAFNXVOTZSWJBCXZKLBKVICHJPTSJRUSUVAEYSAYQLIM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZSVFDYTYWXGAAIOFMKPXVEQQYHTJPOECUZETJEFSFANHGOVQMKNRTLYTUUGOAALNOXBLKCAZBTPFPIWPDBYU");
    tmp_msg_0.predicate.assign("JGSGRABAYZQFSLLCRSMRVTAHXKZANLVVKJYTTIJJHBJPDBUHEBKHHOYOXLHVRRNVEQWKWDPXDWPTFIFOIQUDDLMAOTJIFLVWMNFOMSBBYNRGMQK");
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
    msg.setTimeStamp(0.9809158070470922);
    msg.setSource(22242U);
    msg.setSourceEntity(143U);
    msg.setDestination(51777U);
    msg.setDestinationEntity(174U);
    msg.name.assign("SDWAKOMXERLJLPBBUCSPPINODT");
    msg.attr_type = 142U;
    msg.min.assign("ZTBHCMNNFBNDHJODPDXKHOGRLTYWJYRKBGAJNBLRBGKWDMHSZSYWTLLIQJZOJTLUNIOKICDOXVXYHMIUQHQSRFGUCNSAZCFVWVVRUISTXHATGWEXZPPQXYTGGSOETEAPUDAVXKZFCPXCQBNQPEJKSCMEONLJEBULUGMOZZKVPYHDBRSRQEEFKICNMEDAXPCVELYUCJYLDAJOMXSAWPKQVTMPFWWBNTFMMFHRAWQFY");
    msg.max.assign("MFZAZWKGLQMZQNNSWHGOWMUHLREDIQIGWHREPHQIUBIXZNTJWERBTVPRXUKZJIOVOHIMLSGUYJQFXCSBLDCPLUWARVKCRCMHIQPWCTYYKQMWKDOBJBGACDMGUR");

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
    msg.setTimeStamp(0.016565858223042462);
    msg.setSource(22739U);
    msg.setSourceEntity(48U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(90U);
    msg.name.assign("RFMUOUHHBIVNXKDBRYJRCFRJGCZNLRWOWLVXDUIBVPLXANLNVPDINYSMAQKCDZCPLLVTAGTFSMUAJCEDKRYYJUESPUCNUZOBEEZGTE");
    msg.attr_type = 55U;
    msg.min.assign("MAVSREXQJAQTLKQUHFMQQGGZVDZGTBDPQRCHGLEBDITPNOKSPWBQYNELHUDFVPBJRAJIMKIIJCWMVLUSXRJHWKBONUBJGZTKOIEOAXCENIMU");
    msg.max.assign("ZFGSDJDOVTPCMCUDPJCYMHZIOUWFOINBVKLVMYNDLHOQXLBIATAHEZWYMTUOHQCWEJZBRANFFKWTGXNYXXILKDKHYNLZCDGCLXIVAFFQEGZEEHBWIPAQWSMYLKRJYVEDBIFUCRPNBSIJBVXTBRDECRKQGSIYODKSREHTVYNPKVVSUQNOGPRGPIXYZUWMQWSUULDNTFAVRLSPHQCTZMOTNX");

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
    msg.setTimeStamp(0.45049642488905706);
    msg.setSource(29728U);
    msg.setSourceEntity(133U);
    msg.setDestination(29482U);
    msg.setDestinationEntity(234U);
    msg.name.assign("DZLTLUBPNLSCFGRBLARTZBQBTHWEWOETEIJTBYVEDQGHVWHTZJJJSDHMYESNNMYKKONDRXUEDFKLOMMTHASVHMVDIBIPSCIUPCGHRZDZCQYFNEHVNLAQVMRAAUFKUTVZNWCRKZIYVYWMQXMWFJEAYLIYXZQBRJEZXVCUIAEMFLNHSJOPUCLAKGOOXYPQRXRUFINFUJXDCDTRJZKBDKHXPQVJOUMXISQAWWGPKOFCSAKG");
    msg.attr_type = 203U;
    msg.min.assign("QGQQSEBFDKVGABKDCFXJBHABVOHURAOMGDLVYUFMWTYERCTQZUNNNUVWWSNJGMZQEICRQZBS");
    msg.max.assign("OCFYPILAXBJHLEYSQNTSFTOUOUBVWORBLGVXEVIMTHQURYPORIXNJBZFCNKZERDITZZLMPUTNDKRLEUOYNEJMAUXAYYYPISFRPZJXPQWPXMCMWAZJGHACGFCCRVIGMMVPEOWBEUQNGLHGYCJLKSHZBGTWSIVLUWVAGFSYZKESJCQWDESKBXKDMENWZPIKDKFMHZGCT");

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
    msg.setTimeStamp(0.1357647996214194);
    msg.setSource(46380U);
    msg.setSourceEntity(137U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(68U);
    msg.timeline.assign("OAYSYOXSGLGLMRCYPZGVHDMBWILBIVXIECQHJNKUJIADYAMXQIJHHPCNPFBDUEXGSGUGLWWDEIKMUAWBRRGMVYNXSDMANBLKNKZFNLYZHWTWUWMTUZJTHPDUOHTSKBTFJONZSWNRWQIZMEOMYOZOCIVQDULQSUHEPGTAQIPGFRVARHQCLFZDXRDNFEKJXXQCKNVP");
    msg.predicate.assign("AMSJLLVFYHXGWDGKDFQDOUGDLZTIOFNXPXAQKIIFZTVJVJBNWVNCBUVUQWNATPZZCKQOMKBXHFJETTKUSNOLZKPPWXVOEMAQXCURSFPFSERQJCOLNYROKMSMDDGDSRQIEJPAEXIOKPHIBWRUKYREOWEIGHHABCZCCYABCUZECIXWJBYNLJWHLNEGPBGRDARMGSTASJBZCUMJQAGYNXYHHHOIUQTRFKYETWWSMBVDVM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XDMJWNJZXOKRTUISPOMFDLQSROCVZUJWWWVSFOUCATLUMZBSCMMLRDMJWBEZLQKBJXDANTFEVGUZEDTJQRVGFNEPZGSYYQEPBXJZGLDSYGPQAIIZYCBY");
    tmp_msg_0.attr_type = 93U;
    tmp_msg_0.min.assign("QOZAINBEXHXCGLGHMSKHLJHOUVYZNQCMGJQMULQDCWYOTHQNXYRLDFKRDNXSDAGZAJYSVJHQSTWKRMIYTMGKVONPEQWZWHAETBVFAVVWOZIPNZIXMOCCJGVYRYJFHEZCTXKWTRKJEDFPEUNYSEVFBNIRPPISDOFUYTWRAFDBROGIQBX");
    tmp_msg_0.max.assign("SUBWYPIHLHFNYMCRWHZLCSKSRMLXKJEDSKHBFSZVWYUFXSIQNCCXYGJTHZPFODKKAURMSJRGDRKIFCSURBKGMXVZPPYBPIMYQVKRDZKETDQDUEJLJVGOXJZANVLF");
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
    msg.setTimeStamp(0.5271426424571943);
    msg.setSource(37995U);
    msg.setSourceEntity(17U);
    msg.setDestination(2301U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("TQUUICKGQNJEFYJQMRCMGTFBOMZBWYXDWTBHA");
    msg.predicate.assign("SCIVRWEQWYHLAMPDDEXMEMUJU");

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
    msg.setTimeStamp(0.9986717611504461);
    msg.setSource(54814U);
    msg.setSourceEntity(143U);
    msg.setDestination(49612U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("AYKPGTDAJBCXNUZSAXTNHYPBDTPJKGLCYXOPMQRTQDAHVIMQOVJRBLRWCPZOJAPMVILQCTCNFDFQZWLEENXDKZUHZKOQISBMMUIUSJWZVFGJ");
    msg.predicate.assign("SRGTCNKFRGFFRGYMGECQQKLYNZZBXJZPNFOGUCIKA");

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
    msg.setTimeStamp(0.7369683505326566);
    msg.setSource(48596U);
    msg.setSourceEntity(74U);
    msg.setDestination(38414U);
    msg.setDestinationEntity(212U);
    msg.reactor.assign("QHKYDZOFNTBUWPXLRULQSXSIYWSNSNCKQEIJJZWINABCBEQEQUANTWARXXXOPFJMODGKOBWZBUERZXGGSFRSLFDDJMGLSJJHNVHWAUMJSTIBMPLGIQGVMQIYXNVCVEUJHYPGGXAULRHIDZLQDYHVOIFMUSLBMOHDNYLPRQZMEAZASUIKHTXDFPZVVYCMWKBJTJAPOYRVRXOPCEEGUTWCCEZOFFWNDTOTQPHKCD");

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
    msg.setTimeStamp(0.028250101895761714);
    msg.setSource(31407U);
    msg.setSourceEntity(126U);
    msg.setDestination(54301U);
    msg.setDestinationEntity(181U);
    msg.reactor.assign("ETJMETTNSSBCKWLGUADGFJIO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AZBHBPYDPVWSJQOPXNFCAOZUJNHLQESVTMJXSTUCGFYIRZXVBKHVKKFBTRENPULOMYXDFNMOVOIGGZTUAGYIYKWXOOEVDCXABNGPMWSEOLMRBQIHNUHCWNYSISBAVEYFUWMHCXDZJVEIGLCKSFQSRDX");
    tmp_msg_0.predicate.assign("RTXSESJZOMPOSMLCWNLNJHAXWFVITAUMEWUBTSTCPPGXEHU");
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
    msg.setTimeStamp(0.2929267257727791);
    msg.setSource(1706U);
    msg.setSourceEntity(187U);
    msg.setDestination(4103U);
    msg.setDestinationEntity(114U);
    msg.reactor.assign("TPYHHYFYIIBRREVHQMXZQJOKBCTSWLCKEBHZEMXKZVFRAWGKGTIYRJBGREUUXERMROTMSELQJFDUCSPTAGIDSLJNHCBXTJXYSHEFUPMJDDRMAOBSVFWKLDBPLFTWNAPYLGHONZIJFVAADUZDVIANVFLKQDCDGTPQLWWZRVAVMFZQSUXNIEBHWNGPMCPCBYJPXTCYXUYAMCUNVOQKWDMPIUXSYFHTGCWEXQVOEKHOOBGZOKZZIOQLGIRQNKNW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EMOFKSECUOXSXUVDUBIJRDDIJFFDRGIEADCYVOMZWDSPVCGWOLVLBUCFTEBOJNQFCHGKNRLYIGAOSUREQMRNWHPTNMOHBUBRWSKASCEPGJQEHLKOBLMHDTYAVCILDQZWVCNKQLCSMDXQAAPISPEYJJZRMYFUGFQLZKXHRKZGOXVYVJL");
    tmp_msg_0.predicate.assign("HSLVNLYMFGJLAUQIDKPGHPORKDZINBTQWXKKFJFWRLGIIUS");
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
    msg.setTimeStamp(0.9370999368125199);
    msg.setSource(28111U);
    msg.setSourceEntity(237U);
    msg.setDestination(15840U);
    msg.setDestinationEntity(250U);
    msg.topic.assign("LZGDMTRSHCYKMQDZYAOWRRHHDSWPWNRSXDPJBVJJJUZXOHFWOLSJNKFZQAZPOVNZQMNFRWJCTGGWTREAOVNIRVIPNMUWXXPHLZCKBLUSLWUITUUTCKYMVDCFYPLGGCFBOQPTQRTMTQXSBLEBCUVCAYHMHOGCKJTKLDKIAFHKTEELDWXAALRVMAXENEOKBVJEYWGI");
    msg.data.assign("OXWUILULSRZZCFXQMSYDKZHEQOMVCAURNGILOEKYHVSKCTRODJFUVHCDEZDVIJXOVBWZYBLPJALKWXGBHTPZQEQMQEFOKDVARIAFJILUDISERTAJSCTNXJOVMDKOUPHPJGWBEYGRTMFGQHRXP");

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
    msg.setTimeStamp(0.06280205261364258);
    msg.setSource(41129U);
    msg.setSourceEntity(203U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(122U);
    msg.topic.assign("IHFJKXUMBWXAMUZKJLMPXVDCELPORJN");
    msg.data.assign("YQXURTVVSLALOIBJGPNCYDDSTLIZGVVCFWNPMFQOBZEPKZYXVBSRGQEZLVRKQMPGMFYTOQFDXDXWFBHMZBDUKCJBTENYYOOJMZUDDKJFJNPIALVVXJCHUENQSILEJSWPSZYLIENACAWRUHLPSBOMOZNYAETHARMODUWKAVGNRGTOKCXLCHJPKESBIDJGRRIFJVWELWXMXWBAIRRZSMIHMDHTBHNWTIXFAFQWKXZPUQKKCFGQHHQATCPYTO");

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
    msg.setTimeStamp(0.23720427548998468);
    msg.setSource(40383U);
    msg.setSourceEntity(132U);
    msg.setDestination(7558U);
    msg.setDestinationEntity(169U);
    msg.topic.assign("APZDLTMVPCICRQWZHGWEWUZRCALWJVQKDFKKBWYNUGZOGJAOOIBDYGTCBBSZDIORUSFZPQYUFJEVLFEJPMAXEMGBEVMEDQMATNZZSTGYQDIXFBCAPRXVAEILRNSJRDJOVYJUVLGNHIUNDLRKAKMFHJCOA");
    msg.data.assign("EYPEHJHIEDYFNBQGOGEVPLOWPEQAPTLGAIMEYORSRZGHGPYFMRPMUOMZLMYJOUIFFVNKRWPYTXTWOBAIURHLEKZJBCTKKBAROQSVSQJHZSUMQJCBBCMHKSIUOXIDANMFXC");

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
    msg.setTimeStamp(0.6758190514768677);
    msg.setSource(33947U);
    msg.setSourceEntity(29U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(124U);
    msg.frameid = 54U;
    const signed char tmp_msg_0[] = {-47, -45, -88, -122, -26, 35, -55, -91, 31, -88, -69, 57, -82, 6, -104, -94, -99, -52, -81, 61, -33, -32, 38, -57, -49, -6, -111, -29, -128, 44, -103, -19, 29, -88, -21, 74, 57, -91, -62, -90, 26, -78, 0, 19, 94, 37, -101, -28, 6, 2, -82, -109, 22, 81, -46, -41, -86, -19, -72, -88};
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
    msg.setTimeStamp(0.3563332494792316);
    msg.setSource(5398U);
    msg.setSourceEntity(223U);
    msg.setDestination(3027U);
    msg.setDestinationEntity(145U);
    msg.frameid = 222U;
    const signed char tmp_msg_0[] = {-35, 5, -67, -10, -107, -29, 41, 109, 87, -74, 106, 80, -91, -96, -124, 62, -95, 33, 71, -76, -111, -61, -106, -85, 123, 121, -26, -119, -108, 84, -121, -91, 44, 18, 116, -28, 121, 17, -87, 76, 54, 85, -80, -92, 17, -34, -128, 103, -117, 126, 126, -54, -28, 38, 121, 82, 58, 16, 26, -70, -100, 95, -114, 90, -50, 49, 45, -42, -97, 62, -28, -75, 6, 86, 83, 88, 67, -66, -37, 0, -18, 37, 108, -7, -3, 27, -115, 15, 54, -31, 38, 67, -23, -127, -77, -112, -112, -89};
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
    msg.setTimeStamp(0.3186186532935721);
    msg.setSource(31915U);
    msg.setSourceEntity(2U);
    msg.setDestination(48824U);
    msg.setDestinationEntity(95U);
    msg.frameid = 31U;
    const signed char tmp_msg_0[] = {-110, 117, -87, -29, -26, -67, -77, -18, 68, -42, -117, -12, 93, -46, -81, -62, -52, 75, -92, -32, 33, 21, 126, 36, -72, 84, 126, 111, -68, -3, 122, 96, 7, 77, 44, 111, -93, 54, -13, -18, 38, -20, 57, 112, 96, -25, 71, 68, -58, 62, 5, -24, -94, -11, -112, 116, -35, -87, -44, -66, -77, -45, -58, -87, 73, -113, -37, 35, -64, -105, 6, -100, -105, -56, 71, 77, -116, 94, -114, -67, -40, -97, 112, -92, 24, -17, 107, 116, -55, 76, 39, 87, -39, 26, -94, 32, 59, -82, -127, -45, 115, 82, -41, -90, -127, 85, -66, -86, 125, -23, -46, 51, 13, 42, -62, 123, -113, 117, 14, -38, 13, -49, -118, 126, -29, -30, 123, 2, 80, 112, 13, -26, 107, 98, 18, 41, -76, 61, -91, -125, 6, 18, 100, 39, -5, 2, -66, -78, -34, 52, 33, 34, -67, 126, -73, -44, -126, -21, -23, 35, -18, -102, -108, -42, -45, -78, -39, -62, 109, -103, -3, -68, 27, -13, 44, 19, 15, -61, -81, -83, 85, 26, -51, 115, -115, 43, -58, -38, 29};
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
    msg.setTimeStamp(0.5312614116003193);
    msg.setSource(25614U);
    msg.setSourceEntity(217U);
    msg.setDestination(54669U);
    msg.setDestinationEntity(32U);
    msg.fps = 28U;
    msg.quality = 115U;
    msg.reps = 27U;
    msg.tsize = 27U;

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
    msg.setTimeStamp(0.7313467513491273);
    msg.setSource(31213U);
    msg.setSourceEntity(211U);
    msg.setDestination(40672U);
    msg.setDestinationEntity(244U);
    msg.fps = 37U;
    msg.quality = 206U;
    msg.reps = 63U;
    msg.tsize = 190U;

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
    msg.setTimeStamp(0.42014305648896755);
    msg.setSource(26868U);
    msg.setSourceEntity(74U);
    msg.setDestination(14775U);
    msg.setDestinationEntity(95U);
    msg.fps = 183U;
    msg.quality = 142U;
    msg.reps = 7U;
    msg.tsize = 130U;

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
    msg.setTimeStamp(0.44600256540096905);
    msg.setSource(63876U);
    msg.setSourceEntity(70U);
    msg.setDestination(33943U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.4876283943486892;
    msg.lon = 0.48319724722690094;
    msg.depth = 38U;
    msg.speed = 0.39218585124830085;
    msg.psi = 0.6344909326343959;

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
    msg.setTimeStamp(0.21294788151016297);
    msg.setSource(48005U);
    msg.setSourceEntity(113U);
    msg.setDestination(53767U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.4596447010940342;
    msg.lon = 0.47310308706654547;
    msg.depth = 40U;
    msg.speed = 0.07785471593095894;
    msg.psi = 0.3961964707646721;

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
    msg.setTimeStamp(0.027803276498825524);
    msg.setSource(5802U);
    msg.setSourceEntity(177U);
    msg.setDestination(16627U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.950215087401941;
    msg.lon = 0.05837088855654271;
    msg.depth = 207U;
    msg.speed = 0.3529791147933242;
    msg.psi = 0.9455365785882393;

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
    msg.setTimeStamp(0.7520019982646278);
    msg.setSource(38658U);
    msg.setSourceEntity(169U);
    msg.setDestination(8380U);
    msg.setDestinationEntity(158U);
    msg.label.assign("WSSQRIALAZAXBDVMIPATZIODOBQWKVDNGFHUPBQSUKXI");
    msg.lat = 0.36748217822134244;
    msg.lon = 0.7567310238135875;
    msg.z = 0.4861682780469987;
    msg.z_units = 45U;
    msg.cog = 0.8989548286417094;
    msg.sog = 0.0720421644271394;

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
    msg.setTimeStamp(0.5189899928110494);
    msg.setSource(40648U);
    msg.setSourceEntity(169U);
    msg.setDestination(21536U);
    msg.setDestinationEntity(90U);
    msg.label.assign("BSYPAACIYSSWFQQOZYXPHFNIIYNFFKZJCUIXGHSGLGJLBPBAVBKPVQVRVGRCGDHWXNKRWLKSKUSDMQTCQLHEOGMASWEVVXVGQNXROYKYUAUTCTXOODDFQRZILFVLTLWPAKVXN");
    msg.lat = 0.5316714619203818;
    msg.lon = 0.09156892390182958;
    msg.z = 0.6646013898163549;
    msg.z_units = 244U;
    msg.cog = 0.633102978492959;
    msg.sog = 0.478059861157755;

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
    msg.setTimeStamp(0.7686462274152075);
    msg.setSource(61458U);
    msg.setSourceEntity(229U);
    msg.setDestination(11077U);
    msg.setDestinationEntity(101U);
    msg.label.assign("DEFCYGIBRJDTPVRLYBFJWEHCCPOGMKHYETKIPYNYLQHXFJPTUARTSUMGUJGQSVECQNWGFDBIBEPQZZKVGRHCPPFCDALWIFLQSJAAJSGDCZSVUNQHXSMPDISZNMXMDROJXXKAJWOPLKSWQDWNZHUXKQWADVIBLOZBNZYFIRISEMLUOQMTJUYHTXEAEOFXGWABHVZNHCFKURKXMHWC");
    msg.lat = 0.9757616367323643;
    msg.lon = 0.2452702688236169;
    msg.z = 0.47295225872055535;
    msg.z_units = 138U;
    msg.cog = 0.3345355584030969;
    msg.sog = 0.9131504347744883;

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
    msg.setTimeStamp(0.831987500615089);
    msg.setSource(48895U);
    msg.setSourceEntity(32U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(17U);
    msg.name.assign("KGVVQIIBGESUAUYAOFCBXZOJFNMXZMWEUOJRMSRLDSABPYTGTMDBQKPAVOONVRGJHREUVTAJBLMDCZGOCKKZNJATHNZWFDNGPPWYLLXFNIYIXKMPPUBVCALTHCLSXVSQQKBFUMEPEWJKHFGPCRAVRQJILJFHRENFXZXIRNETXTELLHQSZIIBGYTZWCYVBZHNEO");
    msg.value.assign("LHQNHXVJTMLDCDACJPQIMMPXIUROTKZGIYZVDMPBTWDIQHHDVCOEKL");

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
    msg.setTimeStamp(0.32794438634162215);
    msg.setSource(9487U);
    msg.setSourceEntity(157U);
    msg.setDestination(34216U);
    msg.setDestinationEntity(123U);
    msg.name.assign("TKQYPOHOAEDJOFWOAUSTLNPILOCQPWJNUDSHJYZKYWLZJEVBAHWYVEXHFVCFHLDMKALLTUPQRBZBRGJDBKJR");
    msg.value.assign("VGWMKOALYPTELNNOCCGAZDMCQEVFROULHAFYSGADBDVNEJKOJBLSUNSERDKOVFPTXBRWVPXCSUILXNCQQOLYWYFRPTRJPHPTFAZICSWIKWZSENWITNMLJRPSEFJBULWINDMFOGIOBUJUFUXBTNQJXTARKCYJYQHPYQZTBKVDTJGEEZPEZPHGXIMBVLJHYAQZRXDMIXXARZZKUXDE");

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
    msg.setTimeStamp(0.9486678230323939);
    msg.setSource(1237U);
    msg.setSourceEntity(233U);
    msg.setDestination(35909U);
    msg.setDestinationEntity(149U);
    msg.name.assign("JCDZLIANFPFVBFDCWQCLETATZWCVBXSEIMMCEUYBGGNJGCPBAPXWJLWKDJPVDUZUHZSDQIRLIEGVJRFPRPWXKAJEYFKMISSSKYZOSKAOVQHNROXMYNGBAMTJWXHCHQROZNESCEQUQXNYNVJPDKMUQYGDCLQMLKINFALQDXTWFGXBABFMROFXWVIUAXEA");
    msg.value.assign("GJWKBVABWWEIINGRLHDUOZSDKAJXHXJPOMUERQEEUNXPDKUPQSXHRVWLNXRMYAJMQJAWBECDHCQBJWULRZLZISETGPPIXRFOXCLKYTRDORULAFIYMMOFBSDSHFHSYSGZLAYKQOQFAYBRNXF");

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
    msg.setTimeStamp(0.3241844405239337);
    msg.setSource(47116U);
    msg.setSourceEntity(117U);
    msg.setDestination(63346U);
    msg.setDestinationEntity(243U);
    msg.name.assign("JXGYTRUJYVAEGZRDLFTSPACZGURSYINJHIEOUTQNYCRPBHRNLVKDQQSXBLUBBZDYOMTYSTYWZZYXPMBAPGBFDWFVIAINQLWFW");

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
    msg.setTimeStamp(0.14622392669870632);
    msg.setSource(13788U);
    msg.setSourceEntity(205U);
    msg.setDestination(60362U);
    msg.setDestinationEntity(161U);
    msg.name.assign("QLHQVXIBETCBKCXDWUGLGKMPTNTTFJVLIFIFHXSKLQRDAXWEZZJDCPXYAFIOHUZNCUJOOCXTFEVAAICPTMYSWMQDYLHIVWLBGJADUOEIPXQJTGFSSVVVWXHKKYLYGDDNTKZ");

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
    msg.setTimeStamp(0.8181629805574062);
    msg.setSource(46743U);
    msg.setSourceEntity(4U);
    msg.setDestination(64856U);
    msg.setDestinationEntity(194U);
    msg.name.assign("WYDGHPVEQEGHSEJZUUJOPHGXJMDZEZAZJTEKSZFTFFCHWQRXJABOFKXQQQPBGKDDHFGXTYWSWDSCORBEFNMXVFVMJBSGLMKSSWXREICJUVLMCKLMHWCFNAIZXPTAPQUPQWQILOIVTYYT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PSOOHYLCCZUQZUBWCKGSVCBRYCTVKZGNARGFMCZQSUWQHHHFVMPGEEWIGUVNLDFMLIRHDRMPMDGOERUHIFPAMIXPUGFFTTJEKLDKXNYXMJDXSWNZPQTUUSAOQHJVWNAVZCYPBBWLDNCMGXGTPQKOAVZEIXLYVJKDFRTAYYUEOKNOUKSKZCRWLXBWQWSIDFYBTFIBXALLJBJ");
    tmp_msg_0.value.assign("ACCPEIIGFKSUXSUKVKFYRLMHZXKKWLWNORDAOLMWPCESDMUBMWPLMLHAVMBVYWERTFZVICNODCZUNZBTGLZCQWRFUSTUQHRQRNTOREYJBMKEVSLDZKHSIWDLAPAHHBJBYJGTLVIVNEHHPQPYNGVDSAGJLJKYDNUGDKFZNXEIBPWOTSTYZRYIBSKOXMDIRGZPAXTYAWUAVEMCGT");
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
    msg.setTimeStamp(0.5985894692108791);
    msg.setSource(59341U);
    msg.setSourceEntity(101U);
    msg.setDestination(8452U);
    msg.setDestinationEntity(4U);
    msg.name.assign("TJDMSDFAJSPDJXVWCNUDAQELXRODMOZTMQTHULZU");
    msg.visibility.assign("UORVUGOIYDEZFZPTNEHDXHZHPRXLWACQDRTVNEHMLAXXWKNEDBOKJPQIDSTHOFSDGJFIQQEMBPGHCKCHJZTUDKDFJQPNMVXTNKCQZINCUSZSQMZGETJZTTMPBFYALLCVUOAJPMAXWLBIFNSGPSKVZVBARBIKWKUIMPYBCYMVVGDYSBENCGZLXIJRW");
    msg.scope.assign("PNFRAVZCDILTFEQHTHSNMAZXGGWLPUSSZYPZIVRXZJCQKZDHBBWCMDMXLSPAEIGBDCJWWYNMVQANSKOOEJIEUOQBUZMSXPIAWVYJKRPDJVTVLUERL");

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
    msg.setTimeStamp(0.6311255121776441);
    msg.setSource(53436U);
    msg.setSourceEntity(38U);
    msg.setDestination(6038U);
    msg.setDestinationEntity(253U);
    msg.name.assign("WGSSLDIUQVOKPWMYLRIKLZOEBUICMYUZMVGZZMVERGCIAPOPMKKQTDXCXSKNBAIJCWIXNNVFYYXSCIQSKXCNFHSMLIULVTNBQRYZNUUHQ");
    msg.visibility.assign("UORPOAMRILOU");
    msg.scope.assign("BVCQMLFTZBEIZXRISTCQRYEGYLWNCGSFDROYLHBEPBDLJUZSFD");

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
    msg.setTimeStamp(0.19656629804692183);
    msg.setSource(8136U);
    msg.setSourceEntity(167U);
    msg.setDestination(51218U);
    msg.setDestinationEntity(181U);
    msg.name.assign("VAZOSMBSWYDMDVIJKMNLKTHFIBGKWVYFCZMLGQUNQUZJRRSHDAZCQJFMLZHMCDEWPOXDBBYFXHHINVEKCYMHJUUUNERGT");
    msg.visibility.assign("QULDRJMGUNSOZOESILEFEQWTDGGNQIXFSJLGEPPGMYINDXINGRCZOIBZTLTJPNVEOZAQRNWLXFBUJCPQOYOZA");
    msg.scope.assign("PVPDYXIZEVZIELNJWFZVLKQBOCRANYRRMPKUGRFPMGAMJYBVUHNOURZEXCCPPXJJCISRWQJISENCKQLHAQCSJEUBSIIDHBUXTYEEYLVZDDTWMALZIYOXFWHUMYVBBKVTCRWJXFLNJLMBZSAPKGOAWQOAMFUHLGUFVOAGIWWNBKHLZXDXOSSPFFTFTFPDBVHWSHLQNBETCGODHGUNKUGPMASETGDKGCXCJWKYEKOSYDTTMVQTIZR");

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
    msg.setTimeStamp(0.4018242915087732);
    msg.setSource(53007U);
    msg.setSourceEntity(54U);
    msg.setDestination(2930U);
    msg.setDestinationEntity(200U);
    msg.name.assign("QTJIOHTEYUYINJADZPHGRLASFFUNNDZMNSCDPTHWKPZWUBNVWAKFWTEPOFIAHHXSQOZBVVNSQSDZPWXFVZZLDXCVBGEHCEWEWQPTOJXVTKRWXQOIAERXOOZNRJKLURVMLWKRXBYKIFZAVLUKYUMJJQSHRBFMFYTCKROQAGOIGDLFBMCOJPHLXYQKSGRUJEMIXDULDVSBETIGUCJNMIEMLVIGJUHDHBEQBPMGAYDYQACPLRCZ");

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
    msg.setTimeStamp(0.6841655301826611);
    msg.setSource(34950U);
    msg.setSourceEntity(69U);
    msg.setDestination(61218U);
    msg.setDestinationEntity(43U);
    msg.name.assign("GPDMAWBIXNWKRSNYAYDMCNGIXFVLOBQVLAIAOOHNNTKTBYVBQOWRKJTQGEPFDEVHKLTNVDSOKTWAIJHWHGYJUVU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SMMXRIZHIQJNLYRDNLCYFASYLQBEDZKWGXRJOWVVUVQKXMFPRLKWODATENYFKLYVOLSSVXPKXSGUSEFHWFIEUCMHBYIOGEZUENRRBJQXBVCUOMCWDFATDSEHMWZTKTUQTXTPXLICWLDAYBSQLFLUKKZYJKZMPCHHPCBNAHSSIJNTQBPNATZBINWIFPIOKJZDDOFGURTNCB");
    tmp_msg_0.value.assign("HTVMYCFXDQLUOCJXHVZDVQPUSJKZMPNMVNQTNBFZISNGTPBGLWBPXAFVSBGSATOSAEYWQYBYGMIEDV");
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
    msg.setTimeStamp(0.6288107652705786);
    msg.setSource(9295U);
    msg.setSourceEntity(100U);
    msg.setDestination(17465U);
    msg.setDestinationEntity(218U);
    msg.name.assign("CCFSZHAYPMAKLSGXFUKEMAYVWQZAJIVIVJVQQJXVLWQKCPAKWXOOQWIDMFQZPIBFBDGQUIPXWEKMYTSBNZDUGFVTFKHCUUIUXLGFKXLOWICATSMPYWWNTABOBWDGDPYZMDXEBOHPUQHOVLNSJVURDHXRNHRTXNTMREBCFXEJRL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HFRJKLPLYURPVITDBFBKNQKYMYVEOSCEBETBUWIZNFDICGCTHJBQTXVJZXGHEFYPUZQ");
    tmp_msg_0.value.assign("OGVNDUGEVFTUMXNWORYTRRXSEDGHAYJNRPQARDZUUFYBGGBHEXPBRXTXLXUCPPMOYJAUMSZEEAUVSLNWYYIEOSWCVFOQTKQLUFSYZYDNZQMCJRWOFHPDIFKIBNIEMBBGBMHIVYFJJQVOMGDOQBLLIEFZZACCJJCQMWRNCOJWXQPCABYSSRNOFNTACWHZLKGDDJHLTIHKK");
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
    msg.setTimeStamp(0.3713812879871665);
    msg.setSource(45560U);
    msg.setSourceEntity(153U);
    msg.setDestination(6128U);
    msg.setDestinationEntity(162U);
    msg.name.assign("IATPJTGVSFBXKIHREESCUHOLZEFFNPDFEERMWUBMAHOCMSEIRYYRAWDHNJFXZAYOTBAPDBFBQRQCRDVUZMLZOGQJUCMWLPAVAYXBBFWLJGJYISUKPDSWWMCXVYMKUZCHCFUVSKJCNMJ");

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
    msg.setTimeStamp(0.851192324795408);
    msg.setSource(51539U);
    msg.setSourceEntity(116U);
    msg.setDestination(57411U);
    msg.setDestinationEntity(203U);
    msg.name.assign("HZXGYPDOXGRYAELHGXSFZCKSAJAAMGXRZIPSYS");

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
    msg.setTimeStamp(0.6303114556826138);
    msg.setSource(41433U);
    msg.setSourceEntity(64U);
    msg.setDestination(57011U);
    msg.setDestinationEntity(231U);
    msg.name.assign("DWEMHPWXYJEKTUVTTSCQIUBLJXPTSHFVRPTCWNWNDLNECXXJJPGJLKTLPBFZYUOYQGGLZIRRINMFPCDONSILCLZWFKTIAMYALHIKLDWCRVGBXMZJS");

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
    msg.setTimeStamp(0.5198208691904403);
    msg.setSource(25308U);
    msg.setSourceEntity(50U);
    msg.setDestination(54476U);
    msg.setDestinationEntity(90U);
    msg.timeout = 2329176227U;

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
    msg.setTimeStamp(0.9552012485429642);
    msg.setSource(36578U);
    msg.setSourceEntity(172U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(189U);
    msg.timeout = 3047581552U;

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
    msg.setTimeStamp(0.2380789077999782);
    msg.setSource(3029U);
    msg.setSourceEntity(223U);
    msg.setDestination(26510U);
    msg.setDestinationEntity(203U);
    msg.timeout = 2661249499U;

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
    msg.setTimeStamp(0.3832058091859991);
    msg.setSource(64927U);
    msg.setSourceEntity(234U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(162U);
    msg.sessid = 2524190292U;

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
    msg.setTimeStamp(0.3513948552663708);
    msg.setSource(11758U);
    msg.setSourceEntity(110U);
    msg.setDestination(47142U);
    msg.setDestinationEntity(208U);
    msg.sessid = 1653263118U;

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
    msg.setTimeStamp(0.7999096696305241);
    msg.setSource(2494U);
    msg.setSourceEntity(72U);
    msg.setDestination(57705U);
    msg.setDestinationEntity(100U);
    msg.sessid = 2889321503U;

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
    msg.setTimeStamp(0.08521028382349372);
    msg.setSource(49062U);
    msg.setSourceEntity(25U);
    msg.setDestination(46509U);
    msg.setDestinationEntity(8U);
    msg.sessid = 2686817554U;
    msg.messages.assign("FJGVLQAKEWZLSDDBNPPRLCOUVYDWYQIKNHWRNPDOIZUPHWVHRBPNRJSQMWYMUCQMMXVSFBNCTTHECXFUWACTRYJDAOKHWGDCDBGKETATNOZEWRSCYVYBFKBGBBNGOYJEFMVHZXYSFGXXFPDOJMBASQNXRKJUTGQVLYXGFTAOUUEENVMDHFGHATMZJLIIVLAVOSCREQXNKDPLAKXGELOJBZPZUHCFEXILSIILKOMRCZPKQWQQMZJAW");

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
    msg.setTimeStamp(0.45108320531419344);
    msg.setSource(37458U);
    msg.setSourceEntity(200U);
    msg.setDestination(63867U);
    msg.setDestinationEntity(95U);
    msg.sessid = 2430473946U;
    msg.messages.assign("AXZHSQJSIVAMYAJALBAKNGLZVUJMRILUHZRFMATLUIYKNSJYEOBUSKZYKWLAMXWKMUFZQHSCFAGFPBHIPRUGZREQYDPWWMUVVBGHZZUNYKACFKTNXKEIDIXDG");

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
    msg.setTimeStamp(0.25591090932318794);
    msg.setSource(31961U);
    msg.setSourceEntity(153U);
    msg.setDestination(42583U);
    msg.setDestinationEntity(90U);
    msg.sessid = 308014657U;
    msg.messages.assign("ULSVDCWEZFOOPNBURYFXTMBBRQSYCLGJIFVTYETPCRODVVYRVZAZLJHDEANERXJRHMXCGQGIFASMPBPCFQZVAJCBIBTHKRXYMUDAHWMLQTUOXISZEIKZKSYWHWXEEPSBSFPHIMOJZUGHQNZYKLSURNTHNQMCWBGZVHONDQMZAGPCDPNHXXXTLPYGJJLWWGIKMNPKETJVFFOEYQWKLJDMWU");

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
    msg.setTimeStamp(0.16350943717312538);
    msg.setSource(63799U);
    msg.setSourceEntity(178U);
    msg.setDestination(16089U);
    msg.setDestinationEntity(231U);
    msg.sessid = 584135895U;

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
    msg.setTimeStamp(0.09111689758354158);
    msg.setSource(54569U);
    msg.setSourceEntity(183U);
    msg.setDestination(48046U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1989605772U;

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
    msg.setTimeStamp(0.04740640670614671);
    msg.setSource(43421U);
    msg.setSourceEntity(173U);
    msg.setDestination(20777U);
    msg.setDestinationEntity(15U);
    msg.sessid = 3700463426U;

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
    msg.setTimeStamp(0.06055037988148815);
    msg.setSource(31810U);
    msg.setSourceEntity(118U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(94U);
    msg.sessid = 4026559642U;
    msg.status = 197U;

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
    msg.setTimeStamp(0.265577333340547);
    msg.setSource(12066U);
    msg.setSourceEntity(148U);
    msg.setDestination(17519U);
    msg.setDestinationEntity(32U);
    msg.sessid = 1743391414U;
    msg.status = 27U;

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
    msg.setTimeStamp(0.8396186404091291);
    msg.setSource(51402U);
    msg.setSourceEntity(148U);
    msg.setDestination(64064U);
    msg.setDestinationEntity(45U);
    msg.sessid = 1717517146U;
    msg.status = 122U;

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
    msg.setTimeStamp(0.8294357063832457);
    msg.setSource(23916U);
    msg.setSourceEntity(194U);
    msg.setDestination(25823U);
    msg.setDestinationEntity(37U);
    msg.name.assign("CGMIGNKKNDYYBLWFYNOEBXCKZCPLDYVXQRNOIHIVJFKFCVJBLEDWSCQIIPJBNJIYGSUFERMVVIWOLGPQHQBMRABATFCOZGETCFEXEHMDRRSSHPHAWWGNKBWEJHVESNDZAZOMJKIMPFEJXYDOSUQWNFUPZHITIQUXALJVURXTJFRXYAZCSWYGWCTPRDMMRZTCPEKOU");

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
    msg.setTimeStamp(0.516000398239031);
    msg.setSource(44521U);
    msg.setSourceEntity(220U);
    msg.setDestination(6894U);
    msg.setDestinationEntity(240U);
    msg.name.assign("QYKYIBWWTJZNYKHCXVJHQHHGMELHWCAEAWIFM");

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
    msg.setTimeStamp(0.9226990433480778);
    msg.setSource(43416U);
    msg.setSourceEntity(225U);
    msg.setDestination(47163U);
    msg.setDestinationEntity(34U);
    msg.name.assign("NNOCHVTKQQXWTMXPOFWHDRPXGZRWPTJHQWKZPUAIGXVJOLBIPTNTKUULYEIYEGDCXBRAXOWFSNEOMBSJHINALESWXUUZQDFWROFEKTTRZQOMYCLKQIODBVGZBTZEEOBEQGYCDLYHALHDWXSHCSSBIMR");

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
    msg.setTimeStamp(0.6705758504985005);
    msg.setSource(56658U);
    msg.setSourceEntity(30U);
    msg.setDestination(115U);
    msg.setDestinationEntity(102U);
    msg.name.assign("AACZELTOBUECMCPNOLZYIJLSNSUSKKXDJBCZGVYZTCB");

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
    msg.setTimeStamp(0.17236641738972802);
    msg.setSource(37698U);
    msg.setSourceEntity(161U);
    msg.setDestination(23552U);
    msg.setDestinationEntity(35U);
    msg.name.assign("QJLWMISAXKTN");

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
    msg.setTimeStamp(0.8968127255324025);
    msg.setSource(16973U);
    msg.setSourceEntity(241U);
    msg.setDestination(6909U);
    msg.setDestinationEntity(103U);
    msg.name.assign("TEVEQYBUQTJFGXEZRHVCFDRWBAWYPZHRKYQXBIBITOWLTSZNAFSSNAOSAWDYBCJQQGEAVSNLJKMDWBUOEKOKLWHYQFSABHXDRFMPOXWIHGCCRBJVCZHGDTTYNUDIENNYELGXTPFXKHXRRKJLKRDGHMTLMDCZUZMOECKBHSDVTUPUVLFIFDPCQZVJASTVPSPGK");

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
    msg.setTimeStamp(0.6450511619076544);
    msg.setSource(58316U);
    msg.setSourceEntity(15U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(220U);
    msg.type = 144U;
    msg.error.assign("EIFEPWLNJMKBMGOCXSWCBDAL");

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
    msg.setTimeStamp(0.5777420375000754);
    msg.setSource(5475U);
    msg.setSourceEntity(212U);
    msg.setDestination(39150U);
    msg.setDestinationEntity(184U);
    msg.type = 205U;
    msg.error.assign("VPDIMWABRMBVLEQJLKVXVUAWKLYFXRILGSTXGWLYAGMDJRHFFFXPZVUDNZZVJPASLTJZQINKSUQFHEHMCIEBKYGVNAAZPMLZWOABDSHPSQFPTDQWNELUIASMJNBUKNTWMM");

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
    msg.setTimeStamp(0.2507461868514895);
    msg.setSource(46172U);
    msg.setSourceEntity(169U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(245U);
    msg.type = 207U;
    msg.error.assign("TFVRRQTFJDQPIKMWZNDYJBSWSJYRMFXYBXYEGBLZEW");

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
    msg.setTimeStamp(0.8041338870487819);
    msg.setSource(57688U);
    msg.setSourceEntity(2U);
    msg.setDestination(3320U);
    msg.setDestinationEntity(109U);
    msg.seq = 42412U;
    msg.sys_dst.assign("PVNREYUZPVVIXWDHURKJOUVNDJFGKOTXOWZVKGNEWGQCHJKIEVFMFBERDGHLIEFUSMMECVGHRREHLCYZFJQKSBVDDUFMAXWAMAJOIDUTQCVZSIJFNLQOPFD");
    msg.flags = 220U;
    const signed char tmp_msg_0[] = {-72, -104, 64, -35, -78, 105, 31, -107, 13, 11, 45, 56, 10, 84, -23, -80, -62, -127, 1, 84, -21, 87, 44, -97, 17, 124, 91, 101, 83, -56, -101, 76, 86, 54, 72, -14, 71, -68, 8, 14, -21, -122, 59, -111, -29, 9, -8, -54};
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
    msg.setTimeStamp(0.805124605049143);
    msg.setSource(64233U);
    msg.setSourceEntity(136U);
    msg.setDestination(57274U);
    msg.setDestinationEntity(120U);
    msg.seq = 28604U;
    msg.sys_dst.assign("NEMUFHXFRFMKOYEARETKVLNMLBTQZDFXSLCWYRMFVNOAZCUWPNKQJEXQIJNIR");
    msg.flags = 216U;
    const signed char tmp_msg_0[] = {-83, -31, -93, -96, 69, -113, -68, -8, -27, -19, -49, 2, 1, -112, 120, -60, -91, -62, -42, 1, 62, 78, 36, 29, -46, 123, -34, 52, -90, -85, 52, -68, 16, -100, -87, 68, 91, -125, -93, -14, -85, 84, 115, -8, -16, 53, -9, -18, -122, -110, -50, -17, 83, 55};
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
    msg.setTimeStamp(0.31462933490370537);
    msg.setSource(58678U);
    msg.setSourceEntity(231U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(0U);
    msg.seq = 62981U;
    msg.sys_dst.assign("RKMSWZYIQGRJBQPOMULVIVVPKBCOXOJKPTHLNFHHBJZANVKRTACIFSWYNVFUOCHEGKYMDEYTHANBYGTLEHUYHYCJMLFYBRQFEVXLKLTIKCMTATSEISOSDQJVNBPMWJFLUXQMGNIARGMZZQQFSBTPHUCAQZNEWPZYIRDRSBSXGGPBRQVOIEDOOCQMXXSDAJGWDZJUXEKPDTVRILYPDNZHE");
    msg.flags = 173U;
    const signed char tmp_msg_0[] = {-55, 71, -123, 74, 41, -69, -45, 16, -89, 31, -11, 75, -5, -15, -62, 95, 110, 107, -67, 67, -25, 2, 43, 110, -28, 124, 4, 114, 13, -21, -54, -36, 63, -117, -93, -14, -52, 1, 91, -105, -18, 4, -6, -81, 84, 58, 0, 52, 122, 62, 4, 90, -41, 120, -63, 19, 11, -49, 92, 27, -17, -68, -4, 41, 0, -73, -13, -65, 60, 29, 115, 108, 12, 71, -58, 92, -22, 4, -126, -90, -30, -77, 65, 68, 71, -126, 2, 117, 43, -76, 83, -13, -39, 70, -60, -19, -103, 3, 5, 88, -79, -118, -18, 110, 117, -122, 116, 112, -106, 115, -53, 52, -49, 60, 23, 88, 88, 7, -8, 117, -77, -118, 29, 94, 78, 39, -50, 5, 122, 99, -123, -58, -70, -108, -21, -100, -105, -110, 122, -53, 2, -13, 102, -9, -16, -35, 112, -2, -71, -85, -47, 26, -104, 33};
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
    msg.setTimeStamp(0.11745565025478888);
    msg.setSource(65331U);
    msg.setSourceEntity(118U);
    msg.setDestination(20979U);
    msg.setDestinationEntity(199U);
    msg.sys_src.assign("ZXRLMGKTINQZYWIASRVLAMPLPTJDATQMYYVUSPDCYUDLKONNGNYSWQKJIZIDGADBUDHPBFAHEDIMFBRIXJBABEUBIWFUMAECZUFSKTSGKHQJHHFXXTVIOGMLELHTGCGDJJWXGYFHYPUVRJCKYCSVTRUPXRGLVOBAKW");
    msg.sys_dst.assign("XZGQTFCQLVSPJEFYFLGBHBINNTQKACDNZLDTSHPYZOEWJOMMWPXBCAPLJAZIGQXZMCYENNUQIAVJATQKLLSPWPCLFBYEDAHBBWEUDPZXDKCNBOTRTZRVRMGFDTKTAHNRSSNUMMIYMIWKJROJRPZRWOEVUSQQKGVGHDDPLJEWBHGYTNHJMCYDPYDXULCHIIHCMUFUFXOGJEZUIUCZOAQIXKGJEOHVLMAOBWKXSRFRWQBORFUVIKSVYY");
    msg.flags = 225U;
    const signed char tmp_msg_0[] = {-112, 7, -29, -124, 62, 105, -68, -89, 70, -1, 25, 87, -72, -69, -26, 53, 95, -25, 88, -64, 115, -126, -108, 114, -120, 98, 91, 26, -82, -68, 120, -35, 54, 120, 85, 53, -37, 126, 84, -3, 63, 118, -83, 103, 23, -16, -24, -89, 81, 55, -36, -15, 103, -122, -50, 82, -13, -7, 0, 104, -8, -124};
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
    msg.setTimeStamp(0.4829103435400879);
    msg.setSource(61689U);
    msg.setSourceEntity(69U);
    msg.setDestination(21322U);
    msg.setDestinationEntity(207U);
    msg.sys_src.assign("BVNKDBEWAAUXZIXAQQQXRBJKIGHROHVHAGFEMJFBSHOIOYSJCYACMEIQYHVIONLNPKWACTEMYDTEXSQPDPGPSOCFUAWNFDNFCKFRFICRYIYUUZPDBXIWAZDMDMVLBUOFUSMGRRWWMSGPZMEWEAKD");
    msg.sys_dst.assign("NWLRPBVDVZFFGHTCOLIZJHULWGZPXFHKQTXNGRWNWI");
    msg.flags = 88U;
    const signed char tmp_msg_0[] = {124, 70, 61, 63, -112, -94, 0, -68, 39, -56, 89, 22, -116, -77, -114, 100, -74, 116, -84, -22, -74, -2, 33, 29, -29, -78, -90, -96, 79, -13, 114, -122, 0, 85, -31, -61, -42, 65, 45, -7, -120, 122, -59, -87, -117, -8, -66, 56, -115, -7, -80, 36, -73, -22, 105, 68, -25, 113, -80, -81, -80, 29, 67};
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
    msg.setTimeStamp(0.49166124959202073);
    msg.setSource(1410U);
    msg.setSourceEntity(119U);
    msg.setDestination(22867U);
    msg.setDestinationEntity(73U);
    msg.sys_src.assign("HJTIKYMXHETGLKZYNPSZQAOPLGGMRRVHUSSMPNOBBGIZXWWQNDKCJTFZXYDUHDMVEGFILUDZWXXIJGFONAIWDOESJQZTPMZPRKWMJFHILJUCDLWQVUKKORGBEFXMDRYEEYYFKHSSXFQDUAZCMRBRBOOASTRNEQYTTDEWTLMHRDVIGWGSPAVUJBIXNXYZKCSFPLQNPAVEICIUE");
    msg.sys_dst.assign("RDXJIJJEZKUGCLGHEKKHVFXYLURCGDQYOBQNMDCWHZYZYAKYWUKCTSKRLYQAQJEOQMTPIJCVPWXFXENBRDEHYSVLBFQQWPNTBIXATMRCMXSLB");
    msg.flags = 2U;
    const signed char tmp_msg_0[] = {44, -31, 61, -93, 48, 121, 6, -34, -19, -58, 25, 98, 6, -51, -30, -84, -43, 61, -123, 115, -7, -71, -32, 113, -115, -3, 126, 59, 113, 105, -123, 24, 16, 119, -64, -45, -71, -45, 125, 76, 5, -98, 12, 120, -106, -6, 69, 55, -105, 33, -50, 40, -63, -47, -70, -92, -49, 73, 21, 28, 88, -124, -56, -8, 0, 6, -51, -43, -31, -37, 111, -51, 91, -38, 90, -51, 6, 37, -45, 82, -70, 93, -97, -20, 100, -28, 50};
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
    msg.setTimeStamp(0.7625106612995578);
    msg.setSource(12523U);
    msg.setSourceEntity(121U);
    msg.setDestination(48362U);
    msg.setDestinationEntity(229U);
    msg.seq = 49863U;
    msg.value = 24U;
    msg.error.assign("BYJCFCFSPZXRVEPEXXLDEFOZMXJUFJOLLGQGTKSMKAVTXARUTVCTUXABKXTHKPJANNBHTUMCKCLTRIIBOEZUDYPGOYYBWXADQHOMYPRNSLJODGEYCEJNGZYEVZUVILEQNHIZGHANIQCMSFAQBIHPVTZJGGNKTHQAXWKCLMUFOWTMWREWVSMOOHEFKVKZRJWGQIVPDGBMKQNDYNCWLISSDYVPZHUUSSQIFA");

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
    msg.setTimeStamp(0.28213172090670224);
    msg.setSource(495U);
    msg.setSourceEntity(231U);
    msg.setDestination(23248U);
    msg.setDestinationEntity(9U);
    msg.seq = 20364U;
    msg.value = 60U;
    msg.error.assign("FLCVMNDBDBBHRUBFQFHYVSXRQILGCLXLAQWTZMYJKLFEPURWNNPDIXGNXJSVPMQSBVBQZDYYIDHYAWWVWQXECOXQMDMAUNZKRRTYDSDKWMXWFAGEMHECQZOLKILJGUCWTOHHGKWAKGYHKZGPKFFESHSVJRYIJIXGMVOLCEBDJNVBCTSJOZAMTKRETEILXOWPTNOPYERZUSPUPGIUMOBQTNFQJTILYSAURDHVKUOACJNSHCFAIZEURPXTVC");

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
    msg.setTimeStamp(0.7611544810281327);
    msg.setSource(54056U);
    msg.setSourceEntity(132U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(203U);
    msg.seq = 1577U;
    msg.value = 109U;
    msg.error.assign("SLUJGNNZZAL");

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
    msg.setTimeStamp(0.7038004357389211);
    msg.setSource(58944U);
    msg.setSourceEntity(44U);
    msg.setDestination(47388U);
    msg.setDestinationEntity(196U);
    msg.seq = 48695U;
    msg.sys.assign("LITJMPLMLFMHZRZZJQNZFYSTFBNQVQOHNMCROSWPXVAXJSQEPCUGGRUOMPNOTEDBAPPFCFXDDKIKCONOIUZXVUFQEVBMDJKYIYKTKQOASMAYWWFZJKULCSIDLWNQPGBBJUVSGANKXYSDHAWOHRBIXHALGLPUBFFELBDZYVRCSJSIVVYMZKWAHJEVBYWNLYHEAXNZIHUPUITSKWGBTCGXDELUFTZQHJOCROIENMRW");
    msg.value = 0.0341027393854082;

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
    msg.setTimeStamp(0.5555224022977124);
    msg.setSource(1175U);
    msg.setSourceEntity(48U);
    msg.setDestination(46626U);
    msg.setDestinationEntity(57U);
    msg.seq = 39820U;
    msg.sys.assign("WVTNKXZSHDUCVDCIIXMPFLGOEWLTCHYMVOFISFVEDBVEXMNETFNBWAZHAISJAVCIKLYVILYRTTMZUXSOPKJUZLJGBYDKPNDLESBQIEKEEXQNZWKBXDMGFCRCQRLGHPUGZNXFZJGHWGOADSYMOUFXFGYUZFRDQO");
    msg.value = 0.8495174561748137;

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
    msg.setTimeStamp(0.5419686779617412);
    msg.setSource(2404U);
    msg.setSourceEntity(114U);
    msg.setDestination(44756U);
    msg.setDestinationEntity(201U);
    msg.seq = 44949U;
    msg.sys.assign("EIMRISWVTYAZMG");
    msg.value = 0.20280540660588964;

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
    msg.setTimeStamp(0.05565149671267866);
    msg.setSource(20988U);
    msg.setSourceEntity(15U);
    msg.setDestination(39268U);
    msg.setDestinationEntity(66U);
    msg.seq = 10895U;
    msg.sys_dst.assign("DYMIMJIVRLXVDXLGAPNMWZWSLYEOHJUQVZEAVOYNCQDUSIVJOHKKSQTWFQIRSWALLMECGFKPQOXPAJNSEHCASKXBDTMTXHKXROKUVZXFLNUCBEBJHPVGWAWLQPOFCLRWYTPVCTYCFIFIZTGGQHMZSBCPMTAPUWRRDCVUDWAGIJVKLMKCZGNYJ");
    msg.timeout = 0.5677927740497393;

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
    msg.setTimeStamp(0.8081751346279292);
    msg.setSource(11205U);
    msg.setSourceEntity(38U);
    msg.setDestination(6262U);
    msg.setDestinationEntity(40U);
    msg.seq = 29496U;
    msg.sys_dst.assign("QSIWIQFZBIPCOBFTSQRWAMOLWMYZJWQUURESHXJSFDWKHLPJMIRHXQKZURJWVVYTRIUDANHJMDABODUZTXCKSEGUTBUTCAATXGEFXDPBYAOGELFMCBVHYGAWMOCFEXZOXKHMPFLMEGALSGZOEYOKILYAHZPQTQLANJIKZRCOPIEVRVNBPVRTMKCYNDQJFUNBCXSNUONGPCKWHDNSVDFFPDLJKXIWZEVRBYVGBTHDSTHPEQLL");
    msg.timeout = 0.898123701667542;

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
    msg.setTimeStamp(0.15772128190732826);
    msg.setSource(21606U);
    msg.setSourceEntity(183U);
    msg.setDestination(64702U);
    msg.setDestinationEntity(108U);
    msg.seq = 64983U;
    msg.sys_dst.assign("BHPNINFHVBGJRFFFMLVLRLNBJWRBSOPLNWRPZZCVYJVERJWUKZUPICPAFKXHKMLFTEJZWQEVGIIRSOZDOSLZXATASHAONUDKPTUGQDLQTXMJTXE");
    msg.timeout = 0.6467492120718012;

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
    msg.setTimeStamp(0.809006044210133);
    msg.setSource(40990U);
    msg.setSourceEntity(153U);
    msg.setDestination(18681U);
    msg.setDestinationEntity(52U);
    msg.action = 5U;
    msg.longain = 0.044583854760653296;
    msg.latgain = 0.5564364943939197;
    msg.bondthick = 2671989398U;
    msg.leadgain = 0.9178935783103767;
    msg.deconflgain = 0.7029238140593009;

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
    msg.setTimeStamp(0.5084479611219341);
    msg.setSource(12072U);
    msg.setSourceEntity(212U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(110U);
    msg.action = 248U;
    msg.longain = 0.8571940991251545;
    msg.latgain = 0.2877769211030048;
    msg.bondthick = 3590057372U;
    msg.leadgain = 0.7548721947852801;
    msg.deconflgain = 0.5358065982124174;

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
    msg.setTimeStamp(0.5089972470053503);
    msg.setSource(28966U);
    msg.setSourceEntity(247U);
    msg.setDestination(62164U);
    msg.setDestinationEntity(111U);
    msg.action = 193U;
    msg.longain = 0.9582479541287864;
    msg.latgain = 0.20142799458568506;
    msg.bondthick = 84645244U;
    msg.leadgain = 0.7204793351320711;
    msg.deconflgain = 0.9475035611888516;

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
    msg.setTimeStamp(0.21646687854727342);
    msg.setSource(29835U);
    msg.setSourceEntity(136U);
    msg.setDestination(5436U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.9895174014865369;
    msg.dist_min_abs = 0.20740510739474072;
    msg.dist_min_mean = 0.7854472240702365;

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
    msg.setTimeStamp(0.7467692620854224);
    msg.setSource(15593U);
    msg.setSourceEntity(173U);
    msg.setDestination(21191U);
    msg.setDestinationEntity(170U);
    msg.err_mean = 0.5927677519549709;
    msg.dist_min_abs = 0.6177007276873955;
    msg.dist_min_mean = 0.549760491534109;

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
    msg.setTimeStamp(0.595515852346067);
    msg.setSource(20003U);
    msg.setSourceEntity(134U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(26U);
    msg.err_mean = 0.01846844664856695;
    msg.dist_min_abs = 0.7725736360078292;
    msg.dist_min_mean = 0.9610771492472866;

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
    msg.setTimeStamp(0.3161623892295675);
    msg.setSource(42096U);
    msg.setSourceEntity(229U);
    msg.setDestination(3008U);
    msg.setDestinationEntity(211U);
    msg.action = 251U;
    msg.lon_gain = 0.3854549751010824;
    msg.lat_gain = 0.7791962598382597;
    msg.bond_thick = 0.2895045486076522;
    msg.lead_gain = 0.7349694054131775;
    msg.deconfl_gain = 0.19781775710730765;
    msg.accel_switch_gain = 0.41550746362299695;
    msg.safe_dist = 0.024115030503829016;
    msg.deconflict_offset = 0.5091900955215013;
    msg.accel_safe_margin = 0.3601481754068303;
    msg.accel_lim_x = 0.8323621592413153;

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
    msg.setTimeStamp(0.40857612462239346);
    msg.setSource(20088U);
    msg.setSourceEntity(64U);
    msg.setDestination(46698U);
    msg.setDestinationEntity(119U);
    msg.action = 199U;
    msg.lon_gain = 0.7693012582699168;
    msg.lat_gain = 0.9557469079115025;
    msg.bond_thick = 0.052418628187448024;
    msg.lead_gain = 0.7007834022051265;
    msg.deconfl_gain = 0.9626875701225637;
    msg.accel_switch_gain = 0.5122345071540955;
    msg.safe_dist = 0.5070953503048827;
    msg.deconflict_offset = 0.720669721319093;
    msg.accel_safe_margin = 0.5924177126789665;
    msg.accel_lim_x = 0.025548448177189043;

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
    msg.setTimeStamp(0.8316569683513458);
    msg.setSource(63380U);
    msg.setSourceEntity(116U);
    msg.setDestination(57081U);
    msg.setDestinationEntity(123U);
    msg.action = 178U;
    msg.lon_gain = 0.4075376915758284;
    msg.lat_gain = 0.06833441941483531;
    msg.bond_thick = 0.09074095431945872;
    msg.lead_gain = 0.6056778226472537;
    msg.deconfl_gain = 0.11238249916692966;
    msg.accel_switch_gain = 0.8879797739484424;
    msg.safe_dist = 0.008503270802701746;
    msg.deconflict_offset = 0.9013845285938594;
    msg.accel_safe_margin = 0.5735619810935334;
    msg.accel_lim_x = 0.08219570854899039;

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
    msg.setTimeStamp(0.5177116601252855);
    msg.setSource(57957U);
    msg.setSourceEntity(194U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(104U);
    msg.type = 149U;
    msg.op = 158U;
    msg.err_mean = 0.438102915002507;
    msg.dist_min_abs = 0.20925665682047834;
    msg.dist_min_mean = 0.7678718903995889;
    msg.roll_rate_mean = 0.7960641360911597;
    msg.time = 0.8272237608542563;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 39U;
    tmp_msg_0.lon_gain = 0.9230240027175199;
    tmp_msg_0.lat_gain = 0.3356017178920603;
    tmp_msg_0.bond_thick = 0.16272242419813077;
    tmp_msg_0.lead_gain = 0.09840364101229393;
    tmp_msg_0.deconfl_gain = 0.14957224654383983;
    tmp_msg_0.accel_switch_gain = 0.4649354134070577;
    tmp_msg_0.safe_dist = 0.6344560468309022;
    tmp_msg_0.deconflict_offset = 0.824504819842738;
    tmp_msg_0.accel_safe_margin = 0.38683494524763884;
    tmp_msg_0.accel_lim_x = 0.6869636214534606;
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
    msg.setTimeStamp(0.03549097785793709);
    msg.setSource(22838U);
    msg.setSourceEntity(189U);
    msg.setDestination(45109U);
    msg.setDestinationEntity(28U);
    msg.type = 72U;
    msg.op = 76U;
    msg.err_mean = 0.07090295787676093;
    msg.dist_min_abs = 0.8598328182390271;
    msg.dist_min_mean = 0.7444795382700895;
    msg.roll_rate_mean = 0.33642454949842726;
    msg.time = 0.8454580174776737;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 200U;
    tmp_msg_0.lon_gain = 0.8567643241352733;
    tmp_msg_0.lat_gain = 0.24883465349634093;
    tmp_msg_0.bond_thick = 0.5110742653160675;
    tmp_msg_0.lead_gain = 0.952808672345857;
    tmp_msg_0.deconfl_gain = 0.054042069576369145;
    tmp_msg_0.accel_switch_gain = 0.5982245611787131;
    tmp_msg_0.safe_dist = 0.514555911947897;
    tmp_msg_0.deconflict_offset = 0.2891721264878482;
    tmp_msg_0.accel_safe_margin = 0.6506428881883591;
    tmp_msg_0.accel_lim_x = 0.3381056116818969;
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
    msg.setTimeStamp(0.7387783968739772);
    msg.setSource(43180U);
    msg.setSourceEntity(171U);
    msg.setDestination(15585U);
    msg.setDestinationEntity(92U);
    msg.type = 22U;
    msg.op = 53U;
    msg.err_mean = 0.08442587984598737;
    msg.dist_min_abs = 0.8930114268991447;
    msg.dist_min_mean = 0.5608021506610219;
    msg.roll_rate_mean = 0.21900691122339466;
    msg.time = 0.02759715150130626;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 29U;
    tmp_msg_0.lon_gain = 0.981057539430794;
    tmp_msg_0.lat_gain = 0.014426336125191286;
    tmp_msg_0.bond_thick = 0.6228724538719094;
    tmp_msg_0.lead_gain = 0.5018077143771897;
    tmp_msg_0.deconfl_gain = 0.005662662164266585;
    tmp_msg_0.accel_switch_gain = 0.7425835657172782;
    tmp_msg_0.safe_dist = 0.884655102547605;
    tmp_msg_0.deconflict_offset = 0.15144888313111093;
    tmp_msg_0.accel_safe_margin = 0.29090344939558477;
    tmp_msg_0.accel_lim_x = 0.9502093621076059;
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
    msg.setTimeStamp(0.5778740202406262);
    msg.setSource(17420U);
    msg.setSourceEntity(26U);
    msg.setDestination(65195U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.03352940080381839;
    msg.lon = 0.8763992392099391;
    msg.eta = 446174843U;
    msg.duration = 27961U;

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
    msg.setTimeStamp(0.10929005482409526);
    msg.setSource(17310U);
    msg.setSourceEntity(212U);
    msg.setDestination(63126U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.7443125849440004;
    msg.lon = 0.21018359139625908;
    msg.eta = 1457822281U;
    msg.duration = 21251U;

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
    msg.setTimeStamp(0.45001556704403667);
    msg.setSource(62845U);
    msg.setSourceEntity(193U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.3682611305581378;
    msg.lon = 0.8777183404385682;
    msg.eta = 1292261840U;
    msg.duration = 48841U;

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
    msg.setTimeStamp(0.03865296061043022);
    msg.setSource(23676U);
    msg.setSourceEntity(47U);
    msg.setDestination(16773U);
    msg.setDestinationEntity(48U);
    msg.plan_id = 43U;

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
    msg.setTimeStamp(0.16450514864206456);
    msg.setSource(7229U);
    msg.setSourceEntity(179U);
    msg.setDestination(11246U);
    msg.setDestinationEntity(86U);
    msg.plan_id = 10859U;

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
    msg.setTimeStamp(0.3990021847365246);
    msg.setSource(8375U);
    msg.setSourceEntity(44U);
    msg.setDestination(30744U);
    msg.setDestinationEntity(65U);
    msg.plan_id = 58013U;

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
    msg.setTimeStamp(0.09385011171545798);
    msg.setSource(24670U);
    msg.setSourceEntity(238U);
    msg.setDestination(37860U);
    msg.setDestinationEntity(185U);
    msg.type = 23U;
    msg.command = 89U;
    msg.settings.assign("SHWGQUSZCYOPUSCTJIQNBEDMEBIKDFVKCKJNFFBZNJJCNDWWGAXMDNMOJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 57600U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ITTZZCXMSYHNBXPFMRUTLXXOBEFDRFRQJRYEGPBUCGELWTAZCYIEOVHVKNMCJRDWXENKWDHSBQKJQQJWFLSFRHBISJXMGSLCALQPYNMGORHIOPOVQHKYWAZRBAJLZZVIVYEGMUDGEDZXYFHFEPLDSUHWHMBGJQFVWDNDLNYXOBFZTNIKGYJVKVPMWIASONKTLS");

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
    msg.setTimeStamp(0.46581015882616805);
    msg.setSource(19878U);
    msg.setSourceEntity(108U);
    msg.setDestination(36712U);
    msg.setDestinationEntity(84U);
    msg.type = 163U;
    msg.command = 173U;
    msg.settings.assign("BHBHQSTAXTLQEADZFWENCNAGMGQREQUISYCDWVVQJZNZLCOLYFNTAMDREKAEGBTGRVIXSDNNHFPJXVVYOHFYTAMIGZPBRBHOYDMCSZSZPSGOPJJIRKKKULECLUWEEPTRPQRADAFIOIHHXSLXXVWNUMDSUDQUZWJRBJKQKWO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24251U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9590299763076762;
    tmp_tmp_msg_0_0.lon = 0.9847572341592774;
    tmp_tmp_msg_0_0.eta = 2789800316U;
    tmp_tmp_msg_0_0.duration = 53115U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PINBNTWETSD");

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
    msg.setTimeStamp(0.7366059820989977);
    msg.setSource(33101U);
    msg.setSourceEntity(169U);
    msg.setDestination(29360U);
    msg.setDestinationEntity(129U);
    msg.type = 247U;
    msg.command = 91U;
    msg.settings.assign("JDFCLQUWITIJLYIMTIPEEWWCVZJBBKHMMIALNHPRWJCYUMYMVLIAODDNBTMOHAKTDFPQTSOOGSHJFYAMKTYKYEWSZZVJJREOZOOLMGPRTPNRNXGSWAZOAPJQGATLVCBHDEUNUEDNIFAXKBLAUNXNZBKMXQKFOVE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41088U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7891832923081007;
    tmp_tmp_msg_0_0.lon = 0.5042782822623514;
    tmp_tmp_msg_0_0.eta = 665388332U;
    tmp_tmp_msg_0_0.duration = 3943U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZYRRDJQIDDAHICVJLWTJZWMLYYRNUNFFIYMFFB");

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
    msg.setTimeStamp(0.47492705100996024);
    msg.setSource(2446U);
    msg.setSourceEntity(101U);
    msg.setDestination(62085U);
    msg.setDestinationEntity(186U);
    msg.state = 64U;
    msg.plan_id = 31695U;
    msg.wpt_id = 209U;
    msg.settings_chk = 59556U;

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
    msg.setTimeStamp(0.08941660152807207);
    msg.setSource(36951U);
    msg.setSourceEntity(77U);
    msg.setDestination(26248U);
    msg.setDestinationEntity(66U);
    msg.state = 114U;
    msg.plan_id = 15991U;
    msg.wpt_id = 127U;
    msg.settings_chk = 49273U;

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
    msg.setTimeStamp(0.7260236842404602);
    msg.setSource(1083U);
    msg.setSourceEntity(152U);
    msg.setDestination(27493U);
    msg.setDestinationEntity(103U);
    msg.state = 214U;
    msg.plan_id = 48175U;
    msg.wpt_id = 98U;
    msg.settings_chk = 50908U;

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
    msg.setTimeStamp(0.23732994688940867);
    msg.setSource(33885U);
    msg.setSourceEntity(200U);
    msg.setDestination(3373U);
    msg.setDestinationEntity(114U);
    msg.uid = 30U;
    msg.frag_number = 147U;
    msg.num_frags = 231U;
    const signed char tmp_msg_0[] = {71, -22, 68, -112, 41, -38, -17, -66, 115, 74, -90, 73, 119, -109, 72, -47, 36, -67, 76, 92, 2, -49, 92, -109, -88, 34, -6, 102, 54, -9, 20, 85, 107, 53, 116, 6, -18, 1, 57, -32, 65, 69, -57, 40, -54, 60, -92, -59, -36, -19, -47, -78, 72, -23, 58, 11, -121, -113, 10, -110, -52, 115, -74, 43, -30, 119, 91, -28, 67, -103, 25, 119, -12, -5, -60, 124, -89, 84, 98, 106, 30, 119, 12, 54, 41, -84, -41, 54, 108, -58, -125, -119, 38, 31, 20, -2, 113, -34, 46, 8, 11, 27, 48, -70, -97, 109, -43, -42, 37, -35, 35, 99, -112, -112, -105, 121, -54, -67, -122, 122, 0, -126, -37, 5, 54, -46, 48, 95, 73, -71, 63, -37, -92, -111, 98, 18, 43, 89, 28, 60, -41, -119, 64, -89, -115, 4, -59, -109, 14, -40, -66, 39, -92, 87, 6, -19, 32, 47, 55, -76, -107, 93, 38, -126, -99, -103, -111, -21, 79, -49, -116, 124, -73, 13, 114};
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
    msg.setTimeStamp(0.4932531339594598);
    msg.setSource(2120U);
    msg.setSourceEntity(20U);
    msg.setDestination(44975U);
    msg.setDestinationEntity(59U);
    msg.uid = 95U;
    msg.frag_number = 78U;
    msg.num_frags = 79U;
    const signed char tmp_msg_0[] = {44, 100, 25, 46, -25, -27, 88, 107, 61, 5, -120, -14, 68, 14, -94, 1, 117, 92, 57, 17, -59, 66, 114, 9, -109, -120, -56, 24, -121, 11, -63, -63, -90, 97, 6, -101, 81, 72, -9, 10, 107, 62, 0, -73, 67, -4, -26, 82, 122, 37, -93, 33, -52, 120, -124, 15, -53, -78, 77, -117, 36, 57, 36, -89, 73, -5, 3, 44, 96, -46, 6, 24, 19, 35, -78, 74, 0, -48, -42, 46, -43, 86, -71, -61, -67, 53, -114, 63, -43, 37, -77, -87, 53, -81, -62, 9, -38, 111, 92, 34, 93, 109, -87, 12, -29, -50, -90, -69, -8, 64, 13, -126, 76, -72, -12, -120, -4, -113, 71, 40, -77, 47, 34, 76, 28, 9, 107, 74};
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
    msg.setTimeStamp(0.11847012471366758);
    msg.setSource(38565U);
    msg.setSourceEntity(40U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(226U);
    msg.uid = 163U;
    msg.frag_number = 159U;
    msg.num_frags = 216U;
    const signed char tmp_msg_0[] = {27, -1, 113, 53, -82, -49, -113, 90, -126, -39, 7, -107, 84, -65, 94, 17, -67, -89, 24, -15, -42, -102, -4, -128, -86, 79, 36, -26, 16, 120, -108, 11, -54, 7, 71, -39, -87, 118, -112, 99, -96, 72, -19, -16, -67, -76, -47, -36, 70, 8, 32, 115, -62, 61, 120, 51, 66, -83, 95, -31, -59, 34, -9, -13, 69, 63, -59, 27, 91, 98, -16, 30, 74, -16, 112, -33, -16, 77, -106, -3, 6, -119, 92, -88, -104, 99, 50, -128, 79, -16, -34, -111, 91, -39, 61, -112, 102, 120, 42, 86, 58};
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
    msg.setTimeStamp(0.12466093677327661);
    msg.setSource(36179U);
    msg.setSourceEntity(214U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(164U);
    msg.content_type.assign("DRBKDOCOHMNJFJQQRNSLUGSXEMZMNVKMJRUQNZGLIEWVVSHUHYXTLKYMYFYOGNCBKPFXBGTBOIGAIVGADASDHSNVRUXFCFHZZMUZGBCUPKJASBWOQZZZEJFGPEWHOSEBAXHRVYARWDWALJQPOPQIVTUKDSEYNFEUXIC");
    const signed char tmp_msg_0[] = {-41, -7, -24, -24, -79, 41, -57, -122, 36, 48, -27, 108, -51, -34, -62, -67, -97, 8, 103, 109, -74, -109, 126, 6, -24, -52, -5, 59, -28, 40, -104, 19, -61, -1, -102, 108, 102, -98, -1, 0, -42, -64};
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
    msg.setTimeStamp(0.9015521071211822);
    msg.setSource(1015U);
    msg.setSourceEntity(26U);
    msg.setDestination(31910U);
    msg.setDestinationEntity(34U);
    msg.content_type.assign("FPCOGNJQGUYUONFRIMUVUXTKPKJSQMSGLFNVRIQQWZGNGSPRVAFVZIKULBKHJBRIAJEDWFVMOESADCSQBXJHTKCLMDPVLCQVUPD");
    const signed char tmp_msg_0[] = {57, 74, 33, -115, -106, -11, 32, -124, 69, 31, -36, -68, -101, -107, -80, 46, 123, -44, 82, -70, -116, 30, 123, 68, -96, 81, 66, 67, 57, -91, 21, -14, -44, -71, -75, 106, -13, 53, 15, 48, 13, -108, -71, 95, 51, 123, -7, 68, -2, -83, -66, 74, -7, -98, 83, 99, -2, -99, 39, 51, 81, 64, 73, 37, -2, -8, -50, -30, -126, 28, 2, -34, -100, 26, -85, -77, -63, -69, -26, 50, -54, -41, -34, -103, -80, -44, 8, -92, 126, -117, -74, -118, -60, 20, -1, 45, -111, 38, -47, 70, 5, -5, -52, 4, 51, -23, -68, -31, -110, -17, 100, -4, -108, -51, -79, -112, -96, -110, -73, -5, 67, 68, 33, 89, -90, 97, -124, 49, 23, 110, 78, -83, 11, -108, 9, -92, -49, 56, 93, -43, -82, 22, -111, 121, -30, 39, 27, -27, 58, 51, 53, -108, -128, -42, -96, -15, -122, 49, -114, -100, 110, 108, 71, 9, -42, 32, 106, 75, 34, -62, -75, -115};
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
    msg.setTimeStamp(0.6817449002983601);
    msg.setSource(21553U);
    msg.setSourceEntity(230U);
    msg.setDestination(50370U);
    msg.setDestinationEntity(30U);
    msg.content_type.assign("QFDACOYXMCEQLI");
    const signed char tmp_msg_0[] = {91, 19, 98, 0, 124, -17, 61, -61, 118, -96, 70, 17, -118, -92, -12, -92, 40, 77, 85, -62, -70, 68, 77, 52, -35, -92, 51, 85, 106, -81, 85, -87, -118, 123, -84, 9, 84, 17, 52, -22, -7, -46, 49, 6, -103, 16, 97, 67, 105, -22, 124, 54, -43, 8, -32, -89, -63, 71, 84, -118, 45, -97, 34, 29, 94, 9, -3, -85, 104, -24, -67, 109, -62, 65, -44, -116, -95, 0, -13, -48, -82, 40, -43, 15, 24, -111, 54, -54, 90, -127, 32, -75, -78, 29, 89, 45, -63, 8, 95, -101, -122, 77, -90, -24, -54, -117, 6, -46, -49, 10, 5, -127, 22, 114, 121, 98, -1, 16, 62, 87, -47, 44, -42, 39, 13, 19, 8, -108, -9, 121, -7, -4, -75, 112, -96, -65, -70, 17, 90, 68, -29, -29, 119, 92, 48, -49, -33, 36, -124, 65, -45, -117, 64, -104, -33, -78, -92, 91, 86, 22, -124, 23, -47, 95, 115, 89, 72, -54, -53, 63};
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
    msg.setTimeStamp(0.6366775806064364);
    msg.setSource(13013U);
    msg.setSourceEntity(244U);
    msg.setDestination(44999U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.24882498685940135);
    msg.setSource(41834U);
    msg.setSourceEntity(213U);
    msg.setDestination(27290U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.7431988758338018);
    msg.setSource(34436U);
    msg.setSourceEntity(23U);
    msg.setDestination(43561U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.1482420868258124);
    msg.setSource(30427U);
    msg.setSourceEntity(44U);
    msg.setDestination(50593U);
    msg.setDestinationEntity(119U);
    msg.target = 65154U;
    msg.bearing = 0.6756918531001634;
    msg.elevation = 0.026039499606682392;

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
    msg.setTimeStamp(0.3221101473403445);
    msg.setSource(7893U);
    msg.setSourceEntity(37U);
    msg.setDestination(39567U);
    msg.setDestinationEntity(212U);
    msg.target = 61073U;
    msg.bearing = 0.9674415193129418;
    msg.elevation = 0.5753194405741476;

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
    msg.setTimeStamp(0.3475713580997396);
    msg.setSource(17563U);
    msg.setSourceEntity(200U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(211U);
    msg.target = 9536U;
    msg.bearing = 0.6111239514094899;
    msg.elevation = 0.916488462313773;

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
    msg.setTimeStamp(0.9772475925463999);
    msg.setSource(61026U);
    msg.setSourceEntity(157U);
    msg.setDestination(53844U);
    msg.setDestinationEntity(100U);
    msg.target = 23050U;
    msg.x = 0.4539116609405154;
    msg.y = 0.4321303817491857;
    msg.z = 0.7695740173344318;

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
    msg.setTimeStamp(0.17495018692610786);
    msg.setSource(48091U);
    msg.setSourceEntity(199U);
    msg.setDestination(7649U);
    msg.setDestinationEntity(29U);
    msg.target = 451U;
    msg.x = 0.5702017678694049;
    msg.y = 0.44310815617870214;
    msg.z = 0.5248211159398006;

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
    msg.setTimeStamp(0.27339398599545384);
    msg.setSource(34253U);
    msg.setSourceEntity(52U);
    msg.setDestination(49573U);
    msg.setDestinationEntity(137U);
    msg.target = 62852U;
    msg.x = 0.23203249107730795;
    msg.y = 0.23386362846429776;
    msg.z = 0.9053839385358083;

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
    msg.setTimeStamp(0.8714430881014552);
    msg.setSource(50014U);
    msg.setSourceEntity(241U);
    msg.setDestination(29176U);
    msg.setDestinationEntity(125U);
    msg.target = 22783U;
    msg.lat = 0.85210131414825;
    msg.lon = 0.055990965634735934;
    msg.z_units = 204U;
    msg.z = 0.9032820294655731;

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
    msg.setTimeStamp(0.16093294726884277);
    msg.setSource(24900U);
    msg.setSourceEntity(154U);
    msg.setDestination(12805U);
    msg.setDestinationEntity(209U);
    msg.target = 13307U;
    msg.lat = 0.29972985147823794;
    msg.lon = 0.3303400087448525;
    msg.z_units = 135U;
    msg.z = 0.038014723021509766;

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
    msg.setTimeStamp(0.4932848798296815);
    msg.setSource(33166U);
    msg.setSourceEntity(133U);
    msg.setDestination(34758U);
    msg.setDestinationEntity(37U);
    msg.target = 54699U;
    msg.lat = 0.9807920747007259;
    msg.lon = 0.77273785739143;
    msg.z_units = 235U;
    msg.z = 0.52576075614068;

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
    msg.setTimeStamp(0.4972469743397655);
    msg.setSource(58197U);
    msg.setSourceEntity(217U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(54U);
    msg.locale.assign("IUBALNVDXQJMBPGUULTUJMCOGFWAKWUWQYIFZOHBLBFTNRFAHUQZSGHYGRCFLMVODMKNYSPIODMRPXMDEEMGA");
    const signed char tmp_msg_0[] = {-22, -48, -69, 43, -121, 91, -27, 124, 122, -94, -116, 63, 71, 17, -93, 94, 26, 103, -42, -69, 51, 73, -22, -40, 26, -111, -70, 57, 74, -43, -65, -44, 116, -11, 28, 0, 88, 123, 99, -82, 121, -34, -20, 51, -128, 12, 82, -63, 68, -18, -67, -116, 35, 87, 33, 116, -74, -45, -10, -17, -97, -13, 111, 75, 54, 89, -118, -124, -87, 0, -43, 42, 115, 63, 100, -13, -102, -64, -66, 126, -22, 40, -92, -53, 100, -122, 107, -110, -88, -94, 60, -94, 33, 114, 60, 92, -11, 122, 9, -93, 120, -51, 112, -26, -65, -74, -62, 12, -15, 58, 55, -116, -75, 3, -43, 60, 109, -121, -14, 123, 88, -107, 107, -127, 125, -33, -80, 32, -26, -90, -2, -31, 24, 124, -17, 93, 68, 98, -11, 45, -128, -99, 97, 116, -55, 68, -63, 94, 80, -72, -104, -25, -5, 61, -31, 44, 96, -61, 117, 72, -107, 69, -88, -46, 105, -62, 20, -11, -115, 35, 60, -121, -74, -62, -44, -99, 114, 80, 19, -34, -12, 21, 37, -36, -47, -14, 116, -64, 67, 105, 97, -64, 67, 15, 32, 2, 34, 92, 46, 71, 6, 123, 35};
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
    msg.setTimeStamp(0.003713332597036212);
    msg.setSource(56337U);
    msg.setSourceEntity(166U);
    msg.setDestination(32085U);
    msg.setDestinationEntity(21U);
    msg.locale.assign("AKXCZDRGQCCYLLESWSYUCBJBXFKTJKTLHEWZTNDHFJSHWMHUINECDAJLSOPGRACBBVQVRQPRZOOAILPYEZJLELHRVGMXYGFQJMWKKKLBSNTAIK");
    const signed char tmp_msg_0[] = {-34, 8, 16, 22, 120, -90, 51, -89, -109, 48, 120, 79, -5, 51, -100, 92, 38, -93, -122, 28, 52, 111, -18, 39, -68, -33, 64, 27, -66, 12, -20, 74, 52, -82, 102, -83, 29, -126, 72, -75, 125, -19, -39, -58, -46, -126, 119, 28, 112, 108, 16, -5, 120, -43, -63, -118, -20, 117, 23, 42, 56, -69, 50, -51, 118, -77, 111, -46, -29, 6, -83, 1, 60, -19, 92};
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
    msg.setTimeStamp(0.6363635521784093);
    msg.setSource(4815U);
    msg.setSourceEntity(191U);
    msg.setDestination(40740U);
    msg.setDestinationEntity(237U);
    msg.locale.assign("TDTAEKNUQQTBQMVTETIHIUXELVYFTFJIPOZAWFBUMKBYXLXBWZDDNEZIYRNONBVLYQLNFJUDZQFRASTAJDRIZGRJPMEHHOTOGHJIUFDDUMCSJGOWB");
    const signed char tmp_msg_0[] = {-43, -80, 83, 91, -114, 13, 85, 40, 38, 55, 119, 110, 8, 6, -8, 63, 104, 123, 22, 119, -81, -51, 96, 50, 69, -51, 117, 75, -77, 79, -52, 36, 80, 64, 28, -67, -63, 98, 76, 113, -126, -58, 104, -65, -102, -22, 32, -17, -29, 26, -123, 79, 6, -85, -31, -36, -22, 20, 46, -24, -36, -32, 125, -38, 104, -23, -121, -98, 87, -50, 40, -44, 56, -60, -40, 60, 16, -18, -47, -31, 91, -117, 115, 68, 100, 31, -14, -92, -100, -49, 48, 100, 79, 18, -36, 90, -32, 40, 54, -67, -72, 104, 10, 0, 36, 73, -53, -86, 72, -72, 12, -80, -63, -94, 11, 42, -64, -45, 126, -105, 12, 67, 47, -124, -32, -38, 14, 113};
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
    msg.setTimeStamp(0.2933815560795675);
    msg.setSource(55947U);
    msg.setSourceEntity(164U);
    msg.setDestination(32947U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.287331051368407);
    msg.setSource(23968U);
    msg.setSourceEntity(220U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.22654987685081363);
    msg.setSource(54557U);
    msg.setSourceEntity(113U);
    msg.setDestination(6236U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.11725393355169078);
    msg.setSource(22901U);
    msg.setSourceEntity(193U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(28U);
    msg.camid = 235U;
    msg.x = 7385U;
    msg.y = 30226U;

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
    msg.setTimeStamp(0.8007322756796573);
    msg.setSource(54915U);
    msg.setSourceEntity(169U);
    msg.setDestination(1241U);
    msg.setDestinationEntity(34U);
    msg.camid = 207U;
    msg.x = 52482U;
    msg.y = 47189U;

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
    msg.setTimeStamp(0.46987086637502007);
    msg.setSource(21898U);
    msg.setSourceEntity(213U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(130U);
    msg.camid = 187U;
    msg.x = 51528U;
    msg.y = 10395U;

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
    msg.setTimeStamp(0.5058612634029136);
    msg.setSource(49760U);
    msg.setSourceEntity(43U);
    msg.setDestination(18680U);
    msg.setDestinationEntity(7U);
    msg.camid = 92U;
    msg.x = 26928U;
    msg.y = 34885U;

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
    msg.setTimeStamp(0.4798297673560111);
    msg.setSource(58138U);
    msg.setSourceEntity(187U);
    msg.setDestination(14178U);
    msg.setDestinationEntity(197U);
    msg.camid = 228U;
    msg.x = 56091U;
    msg.y = 25987U;

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
    msg.setTimeStamp(0.28957561204718074);
    msg.setSource(9692U);
    msg.setSourceEntity(23U);
    msg.setDestination(25270U);
    msg.setDestinationEntity(110U);
    msg.camid = 142U;
    msg.x = 56894U;
    msg.y = 44046U;

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
    msg.setTimeStamp(0.7216160586352952);
    msg.setSource(37469U);
    msg.setSourceEntity(24U);
    msg.setDestination(36369U);
    msg.setDestinationEntity(108U);
    msg.tracking = 141U;
    msg.lat = 0.7482087671708667;
    msg.lon = 0.9276215258754882;
    msg.x = 0.1767461038688306;
    msg.y = 0.650068186202711;
    msg.z = 0.44487276352160643;

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
    msg.setTimeStamp(0.3961097320172273);
    msg.setSource(6071U);
    msg.setSourceEntity(12U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(118U);
    msg.tracking = 7U;
    msg.lat = 0.8723329204793291;
    msg.lon = 0.4937755779867544;
    msg.x = 0.5990882548655976;
    msg.y = 0.3171780764811981;
    msg.z = 0.5988821217992202;

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
    msg.setTimeStamp(0.25548530149164006);
    msg.setSource(15408U);
    msg.setSourceEntity(202U);
    msg.setDestination(4362U);
    msg.setDestinationEntity(190U);
    msg.tracking = 192U;
    msg.lat = 0.0023121452452254943;
    msg.lon = 0.7089151568972741;
    msg.x = 0.28501421176600006;
    msg.y = 0.9889730349864254;
    msg.z = 0.679078992706387;

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
    msg.setTimeStamp(0.8460432717287433);
    msg.setSource(20166U);
    msg.setSourceEntity(120U);
    msg.setDestination(1894U);
    msg.setDestinationEntity(52U);
    msg.target.assign("NSVNMLPWIFGHWGCKODUVUJCCVAYLQNSAGHORYDRKGNYBWVYNMQCQBMQXAGLQKCEZPVPYSRPUETKVYOZUUPNXRYBHBWBZJJBIKCULTWRAKFSRTXELCEZWOQFRNFBLQDDAXAO");
    msg.lbearing = 0.12132642352461509;
    msg.lelevation = 0.5111436590269111;
    msg.bearing = 0.5328067329635181;
    msg.elevation = 0.3791635000069993;
    msg.phi = 0.778674892764942;
    msg.theta = 0.9792869387297779;
    msg.psi = 0.7034355121277093;
    msg.accuracy = 0.4963077289895771;

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
    msg.setTimeStamp(0.5647527759553701);
    msg.setSource(55100U);
    msg.setSourceEntity(163U);
    msg.setDestination(36184U);
    msg.setDestinationEntity(77U);
    msg.target.assign("XDRPKJDMDWKLUHMIQSZSNGPZGQZZCFRUDGSYEMNIPLJMJFNAVGVABLLFBOREXGFDVQWULGQNJKVGMHMVEHQUVUCYTJHVTTFBRKWOLFUISCBPXRFU");
    msg.lbearing = 0.7196644985450529;
    msg.lelevation = 0.6756549940849692;
    msg.bearing = 0.20141049528994737;
    msg.elevation = 0.4336655124968536;
    msg.phi = 0.7410139064283989;
    msg.theta = 0.8002753823411187;
    msg.psi = 0.63860898359915;
    msg.accuracy = 0.7623529936488267;

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
    msg.setTimeStamp(0.4478934423094304);
    msg.setSource(36945U);
    msg.setSourceEntity(105U);
    msg.setDestination(10445U);
    msg.setDestinationEntity(14U);
    msg.target.assign("DQUJXNBDSOWXRLAHLGVQ");
    msg.lbearing = 0.15521550567252662;
    msg.lelevation = 0.8029292869954034;
    msg.bearing = 0.40303363698861716;
    msg.elevation = 0.1427052435363385;
    msg.phi = 0.38606054557075065;
    msg.theta = 0.17068405884901694;
    msg.psi = 0.15054147321736921;
    msg.accuracy = 0.9874609228171739;

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
    msg.setTimeStamp(0.5816359559402111);
    msg.setSource(62996U);
    msg.setSourceEntity(150U);
    msg.setDestination(30575U);
    msg.setDestinationEntity(4U);
    msg.target.assign("FSKSMATNSONQGPHZFLPTEQJGUDBQRFMTZVXTSWAGBXGLINUZCQHYRNAEDVZEVXJXNZMXYCPYRBYOYDCLVHGJDYOHQACWQGIUJVQRALWPJZHMFSFSLYSASUZPMQBSUMWCTKQXPZWXHRYROH");
    msg.x = 0.2908147668465848;
    msg.y = 0.8194624131893703;
    msg.z = 0.67614696781682;
    msg.n = 0.23274911493838302;
    msg.e = 0.3951564733310222;
    msg.d = 0.8570974316173836;
    msg.phi = 0.925637298547611;
    msg.theta = 0.2888296797711051;
    msg.psi = 0.09789459446320825;
    msg.accuracy = 0.9920783358725657;

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
    msg.setTimeStamp(0.7265782373421534);
    msg.setSource(25980U);
    msg.setSourceEntity(195U);
    msg.setDestination(36935U);
    msg.setDestinationEntity(130U);
    msg.target.assign("PXVWEFFPVRWEDNJPSPIKOWLYXQCPAEBHIEHDYOBEQORRBMUAUOHGISUNZRJZSHRDYQLMZSIPEYEIGCLAAQLRDBPHSHYNQZFMJDNMIIQFXOVFAMMUE");
    msg.x = 0.8871219134891115;
    msg.y = 0.5721918499148568;
    msg.z = 0.2901654803929249;
    msg.n = 0.8348920510947399;
    msg.e = 0.8725448977089338;
    msg.d = 0.9231657814302554;
    msg.phi = 0.5484465815986288;
    msg.theta = 0.4433947355418968;
    msg.psi = 0.18703575247557802;
    msg.accuracy = 0.9111992739988503;

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
    msg.setTimeStamp(0.32417344995301267);
    msg.setSource(64616U);
    msg.setSourceEntity(197U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(160U);
    msg.target.assign("ECNGUGQETJIBZYWFLRDYYORQTPEDEVCIRLMLJJNKOEUAIODLGCVSMBOLFHPXIESIJILPTIYNNBPHTVLQVRJWEBFQWXOCUWHDWOECONGPPDZUXQXIBFRHYZAYPVQSWDHUJRTICMTGGMPRVUKAKBEKRVDCZL");
    msg.x = 0.08078535224493344;
    msg.y = 0.6434536459762503;
    msg.z = 0.383771260772506;
    msg.n = 0.1440823927097017;
    msg.e = 0.6448451145690826;
    msg.d = 0.07870759248945114;
    msg.phi = 0.9818041468905544;
    msg.theta = 0.15493148456108707;
    msg.psi = 0.3977397333599141;
    msg.accuracy = 0.246200816652958;

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
    msg.setTimeStamp(0.19425154922007315);
    msg.setSource(53171U);
    msg.setSourceEntity(111U);
    msg.setDestination(63837U);
    msg.setDestinationEntity(152U);
    msg.target.assign("FFIYVETZSGLXRNJYYSOBPAPXOHCCZXEWDDADHUVIBWLVNHTCDTTGELIRAQXDUHNQXEKBOPQZUIPMHFBRJSZPQRRMWJILOEHEKPXKMWZDYCKVCYSQXFVQZQJEKFPWKLGEVDSGVJLQJDBFLITXLZINPOTMAOHKUAZXJXGI");
    msg.lat = 0.5081376912079179;
    msg.lon = 0.6130891321078523;
    msg.z_units = 60U;
    msg.z = 0.8178256271214063;
    msg.accuracy = 0.5525413034242421;

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
    msg.setTimeStamp(0.7940809695729378);
    msg.setSource(57328U);
    msg.setSourceEntity(32U);
    msg.setDestination(38354U);
    msg.setDestinationEntity(161U);
    msg.target.assign("CSKNBKYXUQWCZRQRFZABNLHNMUSWGBCBXRXYHUNNIYMHUOWDWQTGHKTGGAHBUXMBDMZZHJRCSJESQ");
    msg.lat = 0.8263584769607245;
    msg.lon = 0.33175207180728805;
    msg.z_units = 10U;
    msg.z = 0.08248599795315403;
    msg.accuracy = 0.32416497995359084;

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
    msg.setTimeStamp(0.057955810019790555);
    msg.setSource(5961U);
    msg.setSourceEntity(24U);
    msg.setDestination(42481U);
    msg.setDestinationEntity(230U);
    msg.target.assign("PGWCVYDXWVPXEDAJGDUKKNDRRBGITHVXTXYPMHBQEKHEEJOGMAFCSJUTUIDMHKHAPVFAVA");
    msg.lat = 0.107438355086653;
    msg.lon = 0.7637407540615322;
    msg.z_units = 23U;
    msg.z = 0.3345666843517028;
    msg.accuracy = 0.0893653567740903;

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
    msg.setTimeStamp(0.9068665046863225);
    msg.setSource(64355U);
    msg.setSourceEntity(83U);
    msg.setDestination(2701U);
    msg.setDestinationEntity(36U);
    msg.name.assign("OCNGTQCLWUJVQMQPEKNFNHRUTWCM");
    msg.lat = 0.23234900227533384;
    msg.lon = 0.586490546678379;
    msg.z = 0.6310223242862986;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.9217750724172225);
    msg.setSource(46361U);
    msg.setSourceEntity(219U);
    msg.setDestination(56253U);
    msg.setDestinationEntity(157U);
    msg.name.assign("WPCJMIZACFEVYQAJLXQMILFHEPLHRSDYYBIGUAMMUQNTWWZYJIYF");
    msg.lat = 0.5074146633006736;
    msg.lon = 0.5376763477291776;
    msg.z = 0.8059702151349046;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.18961275169114444);
    msg.setSource(7301U);
    msg.setSourceEntity(87U);
    msg.setDestination(18391U);
    msg.setDestinationEntity(101U);
    msg.name.assign("CDCDTIFDLXTODQODRVLJSUHQVASSQEEXKQZSAYQMGGJWGTKAHCNNISUTZMZCBGHAWBPBRVPVWNFGSWCONBFVYJHHYGCLVEILLYLPXEBYLZEKPNJOQALOMZWODECUXBUJUYRIMYOIRPXMHZMVFMUXZPBNQWGUEKXDLFPMPGYZYAVNOSKIBREAFSPDTMBYHKAURJ");
    msg.lat = 0.9151965774988163;
    msg.lon = 0.98240776250951;
    msg.z = 0.6563512653467757;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.7691262570660267);
    msg.setSource(60461U);
    msg.setSourceEntity(211U);
    msg.setDestination(37144U);
    msg.setDestinationEntity(208U);
    msg.op = 17U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XNERDTKVIKDQFSPBG");
    tmp_msg_0.lat = 0.827349689307643;
    tmp_msg_0.lon = 0.07497028742206757;
    tmp_msg_0.z = 0.4352705649418922;
    tmp_msg_0.z_units = 6U;
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
    msg.setTimeStamp(0.48184594688990257);
    msg.setSource(24461U);
    msg.setSourceEntity(99U);
    msg.setDestination(59657U);
    msg.setDestinationEntity(103U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.8606470141973673);
    msg.setSource(22088U);
    msg.setSourceEntity(32U);
    msg.setDestination(50480U);
    msg.setDestinationEntity(15U);
    msg.op = 141U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RMMWIGPHASAWOPACWJOURYFPLKLWFIAQTQFDNROUUBTHALGWCPZKIKABJNNQHHUMESVIBCCERNZPHYAEOMBIQDPYTKWCMKKYXSJCTKDSGTCYODZUPVEJTNPGFHEEOTLLWJLIRBZAEIFOHHJMRMDYDCZOLXNFQGDWUAQYSLWXGGDZJGVUXBMQXZGISRGHPLVVFWTYRXIQJVNCVSHBCUZYUFZXAULZQEEROKDTMDKRKB");
    tmp_msg_0.lat = 0.6658086550285552;
    tmp_msg_0.lon = 0.036629773574825664;
    tmp_msg_0.z = 0.4558929784392943;
    tmp_msg_0.z_units = 117U;
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
    msg.setTimeStamp(0.9633584301314565);
    msg.setSource(4686U);
    msg.setSourceEntity(38U);
    msg.setDestination(14659U);
    msg.setDestinationEntity(13U);
    msg.value = 0.20570404798421715;
    msg.type = 104U;

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
    msg.setTimeStamp(0.5663955724368674);
    msg.setSource(6557U);
    msg.setSourceEntity(28U);
    msg.setDestination(54370U);
    msg.setDestinationEntity(113U);
    msg.value = 0.4394826287893725;
    msg.type = 85U;

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
    msg.setTimeStamp(0.7943505719778328);
    msg.setSource(3805U);
    msg.setSourceEntity(79U);
    msg.setDestination(52632U);
    msg.setDestinationEntity(254U);
    msg.value = 0.18265424157477206;
    msg.type = 76U;

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
    msg.setTimeStamp(0.16294900639466825);
    msg.setSource(22251U);
    msg.setSourceEntity(102U);
    msg.setDestination(7626U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6539123820692592;

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
    msg.setTimeStamp(0.7204533616520273);
    msg.setSource(18286U);
    msg.setSourceEntity(149U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(143U);
    msg.value = 0.23994885429340507;

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
    msg.setTimeStamp(0.979652998482869);
    msg.setSource(29161U);
    msg.setSourceEntity(53U);
    msg.setDestination(28154U);
    msg.setDestinationEntity(1U);
    msg.value = 0.1918559991877421;

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
    msg.setTimeStamp(0.952691334851437);
    msg.setSource(28920U);
    msg.setSourceEntity(6U);
    msg.setDestination(5456U);
    msg.setDestinationEntity(247U);
    msg.timestamp_last_service = 0.5427699187587152;
    msg.time_next_service = 0.036837063552651705;
    msg.time_motor_next_service = 0.795912150043079;
    msg.time_idle_ground = 0.22174746658637623;
    msg.time_idle_air = 0.22579547165226366;
    msg.time_idle_water = 0.11817198428971853;
    msg.time_idle_underwater = 0.31040007655283897;
    msg.time_idle_unknown = 0.5859259153604106;
    msg.time_motor_ground = 0.4390442445516004;
    msg.time_motor_air = 0.36201153505350503;
    msg.time_motor_water = 0.31817450161248695;
    msg.time_motor_underwater = 0.1995738029797841;
    msg.time_motor_unknown = 0.04157944889775178;
    msg.rpm_min = -27802;
    msg.rpm_max = -31875;
    msg.depth_max = 0.10263534210087721;

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
    msg.setTimeStamp(0.284306089637536);
    msg.setSource(9044U);
    msg.setSourceEntity(2U);
    msg.setDestination(8466U);
    msg.setDestinationEntity(15U);
    msg.timestamp_last_service = 0.29181087005344986;
    msg.time_next_service = 0.43293414183565837;
    msg.time_motor_next_service = 0.29855902470799334;
    msg.time_idle_ground = 0.0937578940045165;
    msg.time_idle_air = 0.5983301526942366;
    msg.time_idle_water = 0.6626876397741456;
    msg.time_idle_underwater = 0.595398103355815;
    msg.time_idle_unknown = 0.7319178720967517;
    msg.time_motor_ground = 0.1228705390835354;
    msg.time_motor_air = 0.14218293055714482;
    msg.time_motor_water = 0.20863081896338076;
    msg.time_motor_underwater = 0.11109782569565219;
    msg.time_motor_unknown = 0.32970758977358117;
    msg.rpm_min = 10273;
    msg.rpm_max = -200;
    msg.depth_max = 0.0278214073105455;

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
    msg.setTimeStamp(0.7515712384475629);
    msg.setSource(36436U);
    msg.setSourceEntity(74U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(74U);
    msg.timestamp_last_service = 0.30388335469494665;
    msg.time_next_service = 0.5771654944046929;
    msg.time_motor_next_service = 0.40436183255307623;
    msg.time_idle_ground = 0.9358357507371693;
    msg.time_idle_air = 0.5782087164579061;
    msg.time_idle_water = 0.4137534158255064;
    msg.time_idle_underwater = 0.361778860674676;
    msg.time_idle_unknown = 0.7142291507364679;
    msg.time_motor_ground = 0.6395785627589596;
    msg.time_motor_air = 0.4527451095954891;
    msg.time_motor_water = 0.8346532420528514;
    msg.time_motor_underwater = 0.9018441615391906;
    msg.time_motor_unknown = 0.8046651157832675;
    msg.rpm_min = -5257;
    msg.rpm_max = -16595;
    msg.depth_max = 0.270705487729064;

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
    msg.setTimeStamp(0.9878803382134846);
    msg.setSource(5557U);
    msg.setSourceEntity(161U);
    msg.setDestination(62819U);
    msg.setDestinationEntity(18U);
    msg.severity = 205U;
    msg.text.assign("XGCXEITFRRXXKEHPSJEPDVTNMWZODHFFISNFILBJXENYUDNQISKQVHPSYHGQMCEVPTIAMJDYJLMWGWSGHPBXLCWZAC");

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
    msg.setTimeStamp(0.14885392159103683);
    msg.setSource(10089U);
    msg.setSourceEntity(96U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(44U);
    msg.severity = 5U;
    msg.text.assign("DVTSEKYOFPJRZZYINTZKVDTNTGMYBOZMRQJSWLROTONLCHASKGYQLOSAIYXHBWSPJPUJSWFRISFPYGPHWJHASUMXULZLOU");

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
    msg.setTimeStamp(0.03634889509306327);
    msg.setSource(3633U);
    msg.setSourceEntity(177U);
    msg.setDestination(22895U);
    msg.setDestinationEntity(99U);
    msg.severity = 237U;
    msg.text.assign("JYQQCZXLJZILRANEKQIBSXJTTMXZIFJPWSLLQQOFVJOCCDRJPBZDHLPRZCUWGZUORBNMGZIQBSFEFPVOWWQHDRZGHCOPMPNDCKMXYGFMTWUSEBSFKBHODLGDYHYSNXKDUJZJMTTVYAGFAHCLWJUXTAYECVDUNXBIPDJHEHVTNVNTFSPSOYVAKMCVLEUYADEWGKKQXIIQALBWGXKKHWIUPFEBKAHZLRGUMUNENSVQ");

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
    msg.setTimeStamp(0.17079523510994699);
    msg.setSource(24688U);
    msg.setSourceEntity(30U);
    msg.setDestination(15483U);
    msg.setDestinationEntity(157U);
    msg.channel = -87;
    msg.value = -618421536;
    msg.gain = 96U;

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
    msg.setTimeStamp(0.8002941208918514);
    msg.setSource(35817U);
    msg.setSourceEntity(5U);
    msg.setDestination(20745U);
    msg.setDestinationEntity(223U);
    msg.channel = 46;
    msg.value = 361916848;
    msg.gain = 139U;

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
    msg.setTimeStamp(0.40840124206183737);
    msg.setSource(6394U);
    msg.setSourceEntity(72U);
    msg.setDestination(59927U);
    msg.setDestinationEntity(237U);
    msg.channel = -83;
    msg.value = 170779117;
    msg.gain = 167U;

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
    msg.setTimeStamp(0.4542789000762322);
    msg.setSource(4575U);
    msg.setSourceEntity(17U);
    msg.setDestination(59188U);
    msg.setDestinationEntity(117U);
    msg.ch01 = 0.4223047857329073;
    msg.ch02 = 0.8542193545771019;
    msg.ch03 = 0.010266215854950689;
    msg.ch04 = 0.11636268691240526;
    msg.ch05 = 0.2859846679702074;
    msg.ch06 = 0.799679049502608;
    msg.ch07 = 0.81806307361434;
    msg.ch08 = 0.9541648765671127;
    msg.ch09 = 0.6056513713077389;
    msg.ch10 = 0.4447440247822714;
    msg.ch11 = 0.3359005498606703;
    msg.ch12 = 0.41972455437704304;
    msg.ch13 = 0.5682417683535953;
    msg.ch14 = 0.8380864945554308;
    msg.ch15 = 0.49092857643661647;
    msg.ch16 = 0.8374212082270623;

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
    msg.setTimeStamp(0.99043097276492);
    msg.setSource(17764U);
    msg.setSourceEntity(121U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(38U);
    msg.ch01 = 0.57979426232536;
    msg.ch02 = 0.936008356916285;
    msg.ch03 = 0.3371961599517761;
    msg.ch04 = 0.5682189916931355;
    msg.ch05 = 0.4147388801449339;
    msg.ch06 = 0.6357877927241556;
    msg.ch07 = 0.1328681898728592;
    msg.ch08 = 0.6803055445689377;
    msg.ch09 = 0.41326420786043316;
    msg.ch10 = 0.6937633115776067;
    msg.ch11 = 0.1510377188628469;
    msg.ch12 = 0.7995235042890774;
    msg.ch13 = 0.899787657062638;
    msg.ch14 = 0.37387922664950524;
    msg.ch15 = 0.3948019827380439;
    msg.ch16 = 0.6972968711493734;

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
    msg.setTimeStamp(0.49594084887076406);
    msg.setSource(31119U);
    msg.setSourceEntity(252U);
    msg.setDestination(41594U);
    msg.setDestinationEntity(133U);
    msg.ch01 = 0.2328592781768325;
    msg.ch02 = 0.04295509819684373;
    msg.ch03 = 0.015733000143337783;
    msg.ch04 = 0.7664032861219379;
    msg.ch05 = 0.28428914238780056;
    msg.ch06 = 0.47087244188776;
    msg.ch07 = 0.9894786319387254;
    msg.ch08 = 0.08349319604715122;
    msg.ch09 = 0.1792510535794991;
    msg.ch10 = 0.8397605715832647;
    msg.ch11 = 0.3976319831511341;
    msg.ch12 = 0.10788785571611859;
    msg.ch13 = 0.9582637759553735;
    msg.ch14 = 0.21722279315182724;
    msg.ch15 = 0.628039712102457;
    msg.ch16 = 0.9921750063497674;

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
    msg.setTimeStamp(0.9315415626269282);
    msg.setSource(15269U);
    msg.setSourceEntity(198U);
    msg.setDestination(21809U);
    msg.setDestinationEntity(135U);
    msg.op = 155U;
    msg.lat = 0.5336300249900375;
    msg.lon = 0.20074153132277772;
    msg.height = 0.16674444108978415;
    msg.depth = 0.3235840094366984;
    msg.alt = 0.5559938558689107;

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
    msg.setTimeStamp(0.8327318239592484);
    msg.setSource(44105U);
    msg.setSourceEntity(116U);
    msg.setDestination(41916U);
    msg.setDestinationEntity(3U);
    msg.op = 16U;
    msg.lat = 0.7063564683063125;
    msg.lon = 0.07930398352435519;
    msg.height = 0.39461561966314984;
    msg.depth = 0.3574490347266519;
    msg.alt = 0.9120972605781793;

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
    msg.setTimeStamp(0.8412734977352323);
    msg.setSource(33222U);
    msg.setSourceEntity(24U);
    msg.setDestination(26740U);
    msg.setDestinationEntity(108U);
    msg.op = 102U;
    msg.lat = 0.6025685722503955;
    msg.lon = 0.47214052333129364;
    msg.height = 0.8329081304315566;
    msg.depth = 0.4787823835138152;
    msg.alt = 0.7529290490150862;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.22759771704872145);
    msg.setSource(63343U);
    msg.setSourceEntity(34U);
    msg.setDestination(18134U);
    msg.setDestinationEntity(111U);
    msg.nbeams = 14U;
    msg.ncells = 200U;
    msg.coord_sys = 162U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.14895504748303245;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7436494196217742);
    msg.setSource(18954U);
    msg.setSourceEntity(91U);
    msg.setDestination(31145U);
    msg.setDestinationEntity(242U);
    msg.nbeams = 109U;
    msg.ncells = 145U;
    msg.coord_sys = 91U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8740714858098114;
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
    msg.setTimeStamp(0.6580775215003408);
    msg.setSource(44491U);
    msg.setSourceEntity(95U);
    msg.setDestination(33927U);
    msg.setDestinationEntity(109U);
    msg.nbeams = 162U;
    msg.ncells = 160U;
    msg.coord_sys = 220U;

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
    msg.setTimeStamp(0.7612735743011556);
    msg.setSource(54282U);
    msg.setSourceEntity(166U);
    msg.setDestination(37138U);
    msg.setDestinationEntity(115U);
    msg.cell_position = 0.916401332062597;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.7814829913425179;
    tmp_msg_0.amp = 0.673425169894081;
    tmp_msg_0.cor = 195U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7473763656154532);
    msg.setSource(36356U);
    msg.setSourceEntity(214U);
    msg.setDestination(29243U);
    msg.setDestinationEntity(115U);
    msg.cell_position = 0.4060103505658005;

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
    msg.setTimeStamp(0.9640861305446423);
    msg.setSource(28199U);
    msg.setSourceEntity(188U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(99U);
    msg.cell_position = 0.7846680445132238;

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
    msg.setTimeStamp(0.05790548854993649);
    msg.setSource(43590U);
    msg.setSourceEntity(95U);
    msg.setDestination(44011U);
    msg.setDestinationEntity(59U);
    msg.vel = 0.09454287205554435;
    msg.amp = 0.29479980506972925;
    msg.cor = 118U;

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
    msg.setTimeStamp(0.5788187865401555);
    msg.setSource(34635U);
    msg.setSourceEntity(56U);
    msg.setDestination(12120U);
    msg.setDestinationEntity(178U);
    msg.vel = 0.8999296101437964;
    msg.amp = 0.17072092911766845;
    msg.cor = 131U;

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
    msg.setTimeStamp(0.6536312994935224);
    msg.setSource(43391U);
    msg.setSourceEntity(32U);
    msg.setDestination(48745U);
    msg.setDestinationEntity(113U);
    msg.vel = 0.4300660191092176;
    msg.amp = 0.981912533736098;
    msg.cor = 188U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.5954449967194515);
    msg.setSource(36562U);
    msg.setSourceEntity(143U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(129U);
    msg.name.assign("TUOQLTLUECIIBBZCYADWMBKITGOUQPVYJIREWHZKOACYUZJHKZCJLRMGDAWTBBZSDCPDMVCYJSPFIMZWPAMPTKHYXDLTQNUYFJZLWRNDIFAXSAQOVSBPG");
    msg.value = 93U;

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
    msg.setTimeStamp(0.9097854327288633);
    msg.setSource(36737U);
    msg.setSourceEntity(92U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(207U);
    msg.name.assign("UWTOAJJODSUCXBPYNTIZIAPONBDMQHRVTCWHCGRJZVAMDEWZPRUUDOJDKYGKUINRCTZQFZZKVA");
    msg.value = 51U;

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
    msg.setTimeStamp(0.10809044387421252);
    msg.setSource(181U);
    msg.setSourceEntity(228U);
    msg.setDestination(42096U);
    msg.setDestinationEntity(190U);
    msg.name.assign("XENDBYJFOTDLBXNFHKOQJFXAZHUQHPPZJJSLBEBGLXUYIORKYXDQVEILCTSMAQSNHCNEWRES");
    msg.value = 26U;

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
    msg.setTimeStamp(0.34067773119859956);
    msg.setSource(63097U);
    msg.setSourceEntity(22U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(249U);
    msg.name.assign("XVFJUDPVGFNDXGFGVJAPQUAVDQSBJWCHUAJMBRMTDRJIQLHAJMYHEAHDSWSQBNZTENEBNWKGGXJYFLDGUPCIRLRAHRJZVMUUPLCKGKPZTRSLWNDXSAGBVZMYRCSFEBOZYNZLOQKXUFEYCKSYUTDCC");

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
    msg.setTimeStamp(0.08477343133670623);
    msg.setSource(61188U);
    msg.setSourceEntity(28U);
    msg.setDestination(16350U);
    msg.setDestinationEntity(11U);
    msg.name.assign("DWPDYJMNGOWBLWQZECYAWDTXSYAEFCQENPHRBNBZXVHRGDOIVXKLNIIZRSLNQTZXUNACRYWSHAJFZXXDIFKISVLMHAHYQTFMXAYRQTURBOWLGGUEHKJMFCNUPEMVUWUKKEHHDTFSVFVEGSMCCXTMECSSIJJJBW");

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
    msg.setTimeStamp(0.6969469024672286);
    msg.setSource(8942U);
    msg.setSourceEntity(155U);
    msg.setDestination(55072U);
    msg.setDestinationEntity(192U);
    msg.name.assign("PRZLBLVZMHKTDFWHGBLQXPBMOFCJRFKKCMEXJFQAEZDBTNITZLNXNAMYSEWKLTDVAKTYTSIHIEPDFHSASWCYUQPVZDTIQHPYWHEJZQIGMXNUQRWYHXVQNCJLHVNJKBRWAOGKUKAWESOYOHYPMSKMBEEJGFODUXMBLIZQVXKBJJBVAOUNAWNRQJSRGVIQVYJYSRPLXTZGCBDZSRHGFCDCDSUTGLCRWGPUUAUONYUFIZDW");

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
    msg.setTimeStamp(0.20492999594761774);
    msg.setSource(58941U);
    msg.setSourceEntity(175U);
    msg.setDestination(17681U);
    msg.setDestinationEntity(237U);
    msg.name.assign("AUFNLVYEWQQEPVETOETQJDIIXRSNYBOXIXRBPPVHEUCEQTJGUUGGDBBXTXEZCYNLWLDGIRBHMAJLCFYCUNVHHJDAXAHRQMOSUQMUDAZZGYJNKJCTMUVNTWSVAWPFTDOPDMUGEWKKRVLYNGFZAORRZSAXSJNAWKUJTISOOMEYSLJYNMICKSOQ");
    msg.value = 119U;

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
    msg.setTimeStamp(0.2049132175371452);
    msg.setSource(50930U);
    msg.setSourceEntity(142U);
    msg.setDestination(64171U);
    msg.setDestinationEntity(1U);
    msg.name.assign("WHXWPPUTNYPNZLNOFKAZWXSEZUXHYJJTVCTQKWWEYR");
    msg.value = 182U;

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
    msg.setTimeStamp(0.9719260065043965);
    msg.setSource(34491U);
    msg.setSourceEntity(57U);
    msg.setDestination(36137U);
    msg.setDestinationEntity(31U);
    msg.name.assign("FLCMJRRHGPBQRRPDYUJCA");
    msg.value = 205U;

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
    msg.setTimeStamp(0.1270326521380818);
    msg.setSource(21179U);
    msg.setSourceEntity(137U);
    msg.setDestination(23262U);
    msg.setDestinationEntity(157U);
    msg.value = 0.06435462517035295;

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
    msg.setTimeStamp(0.2933350879680202);
    msg.setSource(2765U);
    msg.setSourceEntity(206U);
    msg.setDestination(13563U);
    msg.setDestinationEntity(2U);
    msg.value = 0.9157277395385246;

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
    msg.setTimeStamp(0.8280246040976692);
    msg.setSource(41944U);
    msg.setSourceEntity(13U);
    msg.setDestination(43585U);
    msg.setDestinationEntity(70U);
    msg.value = 0.1815593361553186;

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
    msg.setTimeStamp(0.1977797116359027);
    msg.setSource(58947U);
    msg.setSourceEntity(247U);
    msg.setDestination(11899U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8167494681767552;

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
    msg.setTimeStamp(0.20395412983995642);
    msg.setSource(64160U);
    msg.setSourceEntity(68U);
    msg.setDestination(22538U);
    msg.setDestinationEntity(126U);
    msg.value = 0.0634536672140289;

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
    msg.setTimeStamp(0.9191921367739326);
    msg.setSource(14354U);
    msg.setSourceEntity(168U);
    msg.setDestination(18005U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6211183641775262;

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
    msg.setTimeStamp(0.2595077623582228);
    msg.setSource(26917U);
    msg.setSourceEntity(243U);
    msg.setDestination(21922U);
    msg.setDestinationEntity(14U);
    msg.value = 0.28322791953671755;

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
    msg.setTimeStamp(0.11176284387718671);
    msg.setSource(56361U);
    msg.setSourceEntity(2U);
    msg.setDestination(60323U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8131588412306496;

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
    msg.setTimeStamp(0.9503371821327332);
    msg.setSource(55337U);
    msg.setSourceEntity(53U);
    msg.setDestination(41573U);
    msg.setDestinationEntity(86U);
    msg.value = 0.10512827960189342;

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
    msg.setTimeStamp(0.3719044823527887);
    msg.setSource(10017U);
    msg.setSourceEntity(235U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(221U);
    msg.restriction = 92U;
    msg.reason.assign("ONWTHMNEORQUHJGXGTEWIGLEMMIBOMMBBXVOZJBUQXZTVWTLZNDCHRIHYPIMPPVTJYJCALUXODSUQSKNPUDFVUFUFVKYIHHLHDIUEHTQWCIXJRSXLHFSZYTZEDSNMIEEDXPYEPZQYJLCSTULORYZLWCVXMSAVZXFAPODGFGNE");

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
    msg.setTimeStamp(0.742685498338839);
    msg.setSource(10510U);
    msg.setSourceEntity(77U);
    msg.setDestination(12152U);
    msg.setDestinationEntity(131U);
    msg.restriction = 223U;
    msg.reason.assign("CNUVUEQNJIAZDDLZLPSCXLXXBERJFMK");

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
    msg.setTimeStamp(0.6779504173068583);
    msg.setSource(9859U);
    msg.setSourceEntity(86U);
    msg.setDestination(35078U);
    msg.setDestinationEntity(7U);
    msg.restriction = 66U;
    msg.reason.assign("HLJWGEZVDHVTDLLIXSDLSEQRHCRWVSARAGFZXXCQNTVEIHSYUOGNBWIYCDHIOWZWROZUTQGHFGUEUSOABKOGSMFNNKQTWEMOOKDFKZUKJAKTVWFPXXPFQGNYC");

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

  return test.getReturnValue();
}
