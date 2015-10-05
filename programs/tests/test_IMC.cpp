//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 46963dd0144367b7b8ebe169ae5edf4d                            *
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
    msg.setTimeStamp(0.1762451901664993);
    msg.setSource(1677U);
    msg.setSourceEntity(2U);
    msg.setDestination(14908U);
    msg.setDestinationEntity(201U);
    msg.state = 7U;
    msg.flags = 29U;
    msg.description.assign("OGGEHTWLMZJXCZZMLTGCJQFIRRWOHYUHDEOIZJDAVCFIJSHDZIVLIGPACYNGWTSGKRARXODYPMXKQWBMIKNJKSBQEDLVLTJNJKNMUAMILRZSOKHKUDDHNXMWWKTNPGOQOPFVGUEAJQFCZOUANTAXSYPAFPTQGQYKZYIFNHCSBHXROHLULPUQLBSMVGBENRVWFSWYSFUACUPVRSEMYQIBWYMVNPTDDBTEVQYCJZHXALEVJRBFFBKPDROCZI");

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
    msg.setTimeStamp(0.6799110252112371);
    msg.setSource(48703U);
    msg.setSourceEntity(151U);
    msg.setDestination(49861U);
    msg.setDestinationEntity(248U);
    msg.state = 158U;
    msg.flags = 37U;
    msg.description.assign("YIKAKXIAOQPGKDNGPQMCRBGNJSVBUKQQZLGAPIYQDTSKAZGKMBWTUFFWHJCCHNSVCOLGEBSBRCTSHDPVLXNOSGNHH");

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
    msg.setTimeStamp(0.6690634155562266);
    msg.setSource(47496U);
    msg.setSourceEntity(96U);
    msg.setDestination(51818U);
    msg.setDestinationEntity(9U);
    msg.state = 245U;
    msg.flags = 42U;
    msg.description.assign("YJZJXUWTGYNGZCFTBEPFKSMLYSGTCDAZPHLPJYPMHEOVDVAUNRLQSCFXZFPXNTZPTYLCUKKEIFDZIQDZIE");

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
    msg.setTimeStamp(0.9974918078189572);
    msg.setSource(44925U);
    msg.setSourceEntity(172U);
    msg.setDestination(28126U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.23761633322172837);
    msg.setSource(51642U);
    msg.setSourceEntity(26U);
    msg.setDestination(64777U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.8696862959259986);
    msg.setSource(54920U);
    msg.setSourceEntity(185U);
    msg.setDestination(15208U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.07260000324869953);
    msg.setSource(6684U);
    msg.setSourceEntity(137U);
    msg.setDestination(38899U);
    msg.setDestinationEntity(214U);
    msg.id = 209U;
    msg.label.assign("WOKQIDSLVWNYRKYIXITRZVIVTKNQYLXCWMAGECWSCVCFXPVNDCSYPMKMVPSKMALZJVHKGACLFDNNLOQLLTPGPZAWPEETMFOURPEXLHFGOHZUVQKBQQDXEIBWOGQYDUEPXHJGDEOODBNHOKPSFAEQXIVBBIJJHRUCSQNZRHJ");
    msg.component.assign("JQPQYQAWUDDEJMZILTOVXFQGNNMPFSWGZJPBLAGNVRHECFMKWNMNRKBEQZTESHIEOHDRTYPNLQVLIXBVEGDPOMCYESZMXULQXHKOCZYKFYGDMDQTVAIBSAGIOEVBHMLFO");
    msg.act_time = 20344U;
    msg.deact_time = 33969U;

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
    msg.setTimeStamp(0.4219840886910583);
    msg.setSource(8588U);
    msg.setSourceEntity(18U);
    msg.setDestination(43874U);
    msg.setDestinationEntity(108U);
    msg.id = 12U;
    msg.label.assign("ABVHPFMPBAFYHZJZIYACGWXOECDWLEXCURWGYAQHZWRROKBIQYMHBARWNCLJSLCIISNJDDVWGLCQHQMNZEGSTLCFDXXUSVBYKPJKFLTMFIETUFGVTZXCGHWKUBRURPRQOQZYNMQNWTMSGLWSXHPUAUENSDEZFVTKYXIUZSPGDVCMEPNMFNLQHKIBJJVFYBPPRIJOADQREOKAVMZXUSMILBHHE");
    msg.component.assign("IPRIBNQSFVBHQFDUUWAPRPQONYILEJBZHNSCWRSVJUHKBNERJAQWDFKSNEHGXIEKDGLRYZMBTSGKDZMJKOWQWLBAJEZBOJVPDPEVQNUIRJORVLPBRMFUEJTSAYUMEPGMMGYGXXNUFVLYCFYIWYZHHMQSKLACXIDRWDZTDWCPUTATHEOTLZVQKQRODZMFFBHZNJPGLOKFOFGHCXCVYNLTCXCYOXXSAXKISVSUMJTPLQXZVBWWDNAY");
    msg.act_time = 27857U;
    msg.deact_time = 38102U;

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
    msg.setTimeStamp(0.8775386395236618);
    msg.setSource(20069U);
    msg.setSourceEntity(240U);
    msg.setDestination(4647U);
    msg.setDestinationEntity(164U);
    msg.id = 133U;
    msg.label.assign("ZEZZLKGJALGAYMGXDAFMBVNGSHWSICTTSWAGLDUMBDBIFPXWVLFCQZJOFPOJKIXUOAHQOEKVSGHHNPLWUHLKXBGZLAYWVHFXKXDQVSZTPRKAMRVRUWJNOUB");
    msg.component.assign("BGHFGOKGIFKLCTGUDZDSUFHXRIMRXFTBPCBZTHXIQMEVYILSEJXZJYAAFKWYPDCPOYBVXBAYUERQVXEYPBQZCQKXJQRFCGNHCSRKPALNKXPWOOLJKNTCMFQLBLGZWLNMPZDUMVSWQMGZWWAUIBKOJRKSJJJTUNSAEUALTQEIDQPDFNKOMDHEPDTAHYDHNMIXJUHCWXRTFSZZJCIMESNLUAWVHYYVQGBYTSENOWVAGLSMORTORIDBRFOZ");
    msg.act_time = 30985U;
    msg.deact_time = 60395U;

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
    msg.setTimeStamp(0.7417808687675843);
    msg.setSource(17836U);
    msg.setSourceEntity(138U);
    msg.setDestination(44022U);
    msg.setDestinationEntity(189U);
    msg.id = 27U;

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
    msg.setTimeStamp(0.29573176986726324);
    msg.setSource(51983U);
    msg.setSourceEntity(59U);
    msg.setDestination(56584U);
    msg.setDestinationEntity(14U);
    msg.id = 64U;

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
    msg.setTimeStamp(0.7432723019822);
    msg.setSource(31260U);
    msg.setSourceEntity(179U);
    msg.setDestination(24302U);
    msg.setDestinationEntity(99U);
    msg.id = 154U;

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
    msg.setTimeStamp(0.5375821488532945);
    msg.setSource(33633U);
    msg.setSourceEntity(161U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(63U);
    msg.op = 192U;
    msg.list.assign("EDHZCRJQHIXVUWYNFWPQNIJAWPLWSIIWNEZFDQPSRNEMMEOXQSOTCHLANVDPZQRBARAZRBCMFJOKLXGDLBULHTANUYJNTSIRHLAJUMBVGEEFUFHFEJYEMXSMIGROIDQSIZVWLSTWPYTTCPZSOAQLKYQFFUBGBJNKPVYYKYUZKRMIHUZAGKPGOCWGNTWKYLHCHYAMC");

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
    msg.setTimeStamp(0.8114394615825206);
    msg.setSource(30004U);
    msg.setSourceEntity(66U);
    msg.setDestination(36924U);
    msg.setDestinationEntity(101U);
    msg.op = 218U;
    msg.list.assign("HWNDNOOYJKGGSWIHECVXIAHMMEMZMRWCUNSUUBPPAXOZNEUCYVUXDDSJ");

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
    msg.setTimeStamp(0.6848137209377532);
    msg.setSource(13376U);
    msg.setSourceEntity(151U);
    msg.setDestination(58340U);
    msg.setDestinationEntity(71U);
    msg.op = 98U;
    msg.list.assign("LKYVJQTIFDONKHMWOSSGFGDWIEKCWXIJXE");

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
    msg.setTimeStamp(0.25477271145449953);
    msg.setSource(50337U);
    msg.setSourceEntity(201U);
    msg.setDestination(36297U);
    msg.setDestinationEntity(129U);
    msg.value = 87U;

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
    msg.setTimeStamp(0.037833184895733396);
    msg.setSource(50406U);
    msg.setSourceEntity(74U);
    msg.setDestination(6974U);
    msg.setDestinationEntity(139U);
    msg.value = 251U;

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
    msg.setTimeStamp(0.7434290673934768);
    msg.setSource(46055U);
    msg.setSourceEntity(30U);
    msg.setDestination(54035U);
    msg.setDestinationEntity(203U);
    msg.value = 145U;

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
    msg.setTimeStamp(0.06571536922306442);
    msg.setSource(2309U);
    msg.setSourceEntity(132U);
    msg.setDestination(52709U);
    msg.setDestinationEntity(180U);
    msg.consumer.assign("AGZMFGQUALCMECRGHXJYKNNMBXZWMPJABEYFYKWMODDAUSRUSWLITAWRJIHUOKCFEQOLNRZHYTYAUJOCEYXZQNADLXNKXOULEPIWTVGHIPBENVOPYFERZKHTLSMNJJBKGVCRVDVCIXZIOLNSLDFPVYQPFFPSEVHDKCVQDSWGBLQBYTGXMSMZXAHBQWTUDZERJSOHGCLUM");
    msg.message_id = 31484U;

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
    msg.setTimeStamp(0.7970412316135171);
    msg.setSource(17360U);
    msg.setSourceEntity(31U);
    msg.setDestination(34848U);
    msg.setDestinationEntity(111U);
    msg.consumer.assign("QFAGHLHDJOIYNPXLFLURFWWKSUORJEQOLQNPWKINXDRCCFDYGPHZPXRLMLJWTYRCGGAJDNYAHEAMQMFDBPRXAQOTGVRZVSKOVMNKAOMZHQEY");
    msg.message_id = 56001U;

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
    msg.setTimeStamp(0.993811152334271);
    msg.setSource(21864U);
    msg.setSourceEntity(101U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(187U);
    msg.consumer.assign("JNWRNIPSSDNTPLSDSZBGSMUPLFGAUAVQEADBEKZWKYBUMRZZDCUHXTJRQEEAIXNKDTJJYXQKBJYPBYEOOFRJXZCVEPOVOZVSTGRCICIFOCPRXKVJSTKUWLQZBHMZYWZFJHHBKHLTTGNROPQGIMTMNDAZAHOCGONLEVTCLIEFWHEKBUWDQMMAW");
    msg.message_id = 15675U;

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
    msg.setTimeStamp(0.8264923416445834);
    msg.setSource(14095U);
    msg.setSourceEntity(79U);
    msg.setDestination(57538U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.46708966598395996);
    msg.setSource(31452U);
    msg.setSourceEntity(104U);
    msg.setDestination(17116U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.6647543050428865);
    msg.setSource(13244U);
    msg.setSourceEntity(138U);
    msg.setDestination(51584U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.12131173671333229);
    msg.setSource(46160U);
    msg.setSourceEntity(194U);
    msg.setDestination(4837U);
    msg.setDestinationEntity(241U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.019684165943848586);
    msg.setSource(4833U);
    msg.setSourceEntity(221U);
    msg.setDestination(49663U);
    msg.setDestinationEntity(160U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.1384257879414793);
    msg.setSource(58496U);
    msg.setSourceEntity(202U);
    msg.setDestination(37073U);
    msg.setDestinationEntity(221U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.7247832198302934);
    msg.setSource(29244U);
    msg.setSourceEntity(151U);
    msg.setDestination(27847U);
    msg.setDestinationEntity(1U);
    msg.total_steps = 4U;
    msg.step_number = 228U;
    msg.step.assign("ZPHGAXZLINLLASCRSVNUQDNRLKVXSGAVVKGDZAQZMJMYLPAMBMQYMVEEOPRBZHYVTSQVWKHUTLGPJCFQUBVNNY");
    msg.flags = 71U;

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
    msg.setTimeStamp(0.05830221400362867);
    msg.setSource(24161U);
    msg.setSourceEntity(41U);
    msg.setDestination(18547U);
    msg.setDestinationEntity(31U);
    msg.total_steps = 231U;
    msg.step_number = 208U;
    msg.step.assign("PBBSCPBELCHCXNEFFEZZRKKZVKZCTWOGZMJUXRDBKDODYSSHINYQGRBKYVTFKMCQGVDFUSAMXVZEMVJHHDUUFCBT");
    msg.flags = 132U;

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
    msg.setTimeStamp(0.0425259756507651);
    msg.setSource(1327U);
    msg.setSourceEntity(217U);
    msg.setDestination(42374U);
    msg.setDestinationEntity(54U);
    msg.total_steps = 86U;
    msg.step_number = 114U;
    msg.step.assign("FXBDDIBDZCXBFGOMLMMAKKTHRPHOGNZSAISBXHJYDUKWWSHPJHZBCIRDCAKIUVPPIXRSGPVHGCNQOMVJRUFWHBTTDOKYCQFFWSAL");
    msg.flags = 19U;

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
    msg.setTimeStamp(0.5249533654457451);
    msg.setSource(62435U);
    msg.setSourceEntity(162U);
    msg.setDestination(57889U);
    msg.setDestinationEntity(43U);
    msg.state = 59U;
    msg.error.assign("HCZBEUGGHMNPQDACRNYBXYASJEQHBDODR");

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
    msg.setTimeStamp(0.9507023579650532);
    msg.setSource(45479U);
    msg.setSourceEntity(66U);
    msg.setDestination(12994U);
    msg.setDestinationEntity(110U);
    msg.state = 72U;
    msg.error.assign("POBDAVNWKKJUKRSMJRUGNSABMMSWCTFLRAQGMYAFVJCTFHZQXIUCGNLKYYZBXCVKZLULIETOSZHODUERVAMDFKJWZXLDDDWCULJWTPASFBTCZIU");

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
    msg.setTimeStamp(0.25845722104954927);
    msg.setSource(5123U);
    msg.setSourceEntity(206U);
    msg.setDestination(53436U);
    msg.setDestinationEntity(140U);
    msg.state = 216U;
    msg.error.assign("UKYTVHLICFUSHTZRXIKWZNHWHRIODUUTKNEEYVFWXQBEYOUMYGYQFPEWOMXSAIAACPDPKXCQZBCAAECLKJMEGXVQGLLOIOTIPDDBSNF");

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
    msg.setTimeStamp(0.015812780326411868);
    msg.setSource(29154U);
    msg.setSourceEntity(244U);
    msg.setDestination(13652U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.8254688867661869);
    msg.setSource(45891U);
    msg.setSourceEntity(164U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.5462326825213555);
    msg.setSource(49744U);
    msg.setSourceEntity(124U);
    msg.setDestination(29592U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.8430619499682787);
    msg.setSource(45971U);
    msg.setSourceEntity(69U);
    msg.setDestination(61347U);
    msg.setDestinationEntity(211U);
    msg.op = 26U;
    msg.speed_min = 0.9602965855265406;
    msg.speed_max = 0.7360401162354083;
    msg.long_accel = 0.5191010498152075;
    msg.alt_max_msl = 0.7811883171276945;
    msg.dive_fraction_max = 0.8529632196692022;
    msg.climb_fraction_max = 0.7971159576441449;
    msg.bank_max = 0.7405756097290497;
    msg.p_max = 0.9664034996817266;
    msg.pitch_min = 0.06430241782539847;
    msg.pitch_max = 0.9148260203264683;
    msg.q_max = 0.6658276465669601;
    msg.g_min = 0.23974084849290467;
    msg.g_max = 0.2086598619752641;
    msg.g_lat_max = 0.2061737953681606;
    msg.rpm_min = 0.3888583225634269;
    msg.rpm_max = 0.9474579321396751;
    msg.rpm_rate_max = 0.35439370570673956;

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
    msg.setTimeStamp(0.3907698134561235);
    msg.setSource(43035U);
    msg.setSourceEntity(241U);
    msg.setDestination(848U);
    msg.setDestinationEntity(189U);
    msg.op = 231U;
    msg.speed_min = 0.6918832206390656;
    msg.speed_max = 0.8942160591526827;
    msg.long_accel = 0.38703093156529933;
    msg.alt_max_msl = 0.8844319403482093;
    msg.dive_fraction_max = 0.006787469722570272;
    msg.climb_fraction_max = 0.8847643049751769;
    msg.bank_max = 0.2521986892173598;
    msg.p_max = 0.3886218782994627;
    msg.pitch_min = 0.06346216521679138;
    msg.pitch_max = 0.57064927063717;
    msg.q_max = 0.18730843870756875;
    msg.g_min = 0.8624685314475828;
    msg.g_max = 0.875247799920519;
    msg.g_lat_max = 0.1133935673254387;
    msg.rpm_min = 0.16811783398420133;
    msg.rpm_max = 0.1152444017855685;
    msg.rpm_rate_max = 0.43539143607293185;

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
    msg.setTimeStamp(0.014996608740449058);
    msg.setSource(53596U);
    msg.setSourceEntity(95U);
    msg.setDestination(56849U);
    msg.setDestinationEntity(202U);
    msg.op = 173U;
    msg.speed_min = 0.9481831307461449;
    msg.speed_max = 0.9735513516682728;
    msg.long_accel = 0.12147838138740785;
    msg.alt_max_msl = 0.43978438674493026;
    msg.dive_fraction_max = 0.7750714723095398;
    msg.climb_fraction_max = 0.8238120864044289;
    msg.bank_max = 0.48998630609718785;
    msg.p_max = 0.5793013702299246;
    msg.pitch_min = 0.9371165396856287;
    msg.pitch_max = 0.5392907003715303;
    msg.q_max = 0.7481012752463859;
    msg.g_min = 0.4591897253702597;
    msg.g_max = 0.4458094701999602;
    msg.g_lat_max = 0.9678291944756983;
    msg.rpm_min = 0.8874718119830322;
    msg.rpm_max = 0.46240070624965957;
    msg.rpm_rate_max = 0.0018628009678951507;

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
    msg.setTimeStamp(0.5896865600247243);
    msg.setSource(54693U);
    msg.setSourceEntity(12U);
    msg.setDestination(19254U);
    msg.setDestinationEntity(248U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 19U;
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
    msg.setTimeStamp(0.3898045507103747);
    msg.setSource(46100U);
    msg.setSourceEntity(189U);
    msg.setDestination(25654U);
    msg.setDestinationEntity(226U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.7768599241882762;
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
    msg.setTimeStamp(0.4391339259961362);
    msg.setSource(27870U);
    msg.setSourceEntity(27U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(167U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.7109397625804676;
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
    msg.setTimeStamp(0.5175256152234335);
    msg.setSource(61799U);
    msg.setSourceEntity(173U);
    msg.setDestination(1665U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.058447392727263736;
    msg.lon = 0.508583874301059;
    msg.height = 0.09781891357366324;
    msg.x = 0.1347178678895804;
    msg.y = 0.7331195469580324;
    msg.z = 0.9207135374173381;
    msg.phi = 0.478623467205601;
    msg.theta = 0.5669877589896039;
    msg.psi = 0.10777857317604111;
    msg.u = 0.14727863578300637;
    msg.v = 0.6492845788768559;
    msg.w = 0.6847332694715687;
    msg.p = 0.10681518125717937;
    msg.q = 0.6714959460056951;
    msg.r = 0.1706321577804033;
    msg.svx = 0.5175291796510083;
    msg.svy = 0.6604799099064221;
    msg.svz = 0.9875102287759705;

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
    msg.setTimeStamp(0.07644081514177448);
    msg.setSource(8549U);
    msg.setSourceEntity(213U);
    msg.setDestination(55707U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.7818661454557944;
    msg.lon = 0.14645207397909632;
    msg.height = 0.20129504188598624;
    msg.x = 0.4587923433793625;
    msg.y = 0.5420655569813079;
    msg.z = 0.07726188629152542;
    msg.phi = 0.5575336848501343;
    msg.theta = 0.36940603228693547;
    msg.psi = 0.6557378433743868;
    msg.u = 0.5406112532225036;
    msg.v = 0.8051517202616382;
    msg.w = 0.1404577421076344;
    msg.p = 0.43887480211325214;
    msg.q = 0.4792234609110594;
    msg.r = 0.227182062012812;
    msg.svx = 0.6377772469214398;
    msg.svy = 0.4200681922786951;
    msg.svz = 0.4740621238417787;

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
    msg.setTimeStamp(0.028928099953893227);
    msg.setSource(64893U);
    msg.setSourceEntity(97U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.7652199782738127;
    msg.lon = 0.9018494168018524;
    msg.height = 0.9192169779454709;
    msg.x = 0.7107515406720201;
    msg.y = 0.11108280330310605;
    msg.z = 0.22441768473973767;
    msg.phi = 0.680567598835162;
    msg.theta = 0.5108114622346174;
    msg.psi = 0.354719227029073;
    msg.u = 0.9485641455606165;
    msg.v = 0.7790231551147603;
    msg.w = 0.8269359208207548;
    msg.p = 0.6981834952299647;
    msg.q = 0.22431006953306576;
    msg.r = 0.410766128335996;
    msg.svx = 0.7238818831429904;
    msg.svy = 0.8445244090219821;
    msg.svz = 0.5292526623836453;

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
    msg.setTimeStamp(0.7252435063914795);
    msg.setSource(40456U);
    msg.setSourceEntity(71U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(247U);
    msg.op = 230U;
    msg.entities.assign("UFUEHJMVCSDQQGONPNNQWEJFXYOJWKVJIUYITUOLJ");

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
    msg.setTimeStamp(0.8201107819605638);
    msg.setSource(65493U);
    msg.setSourceEntity(251U);
    msg.setDestination(46984U);
    msg.setDestinationEntity(137U);
    msg.op = 243U;
    msg.entities.assign("TGXOWRNJZTEJUKTLGPICGQZUYERVUQHQFMYBXXJKWBVFDPUDILPCHKNAHSZILWMVALPTOWFRYVUPMOWDGOWBPVXWREFFIHQCNJUKSKSCHQQQCJLGRKKCSANTSJHMIAAICDAXZCVQALVLV");

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
    msg.setTimeStamp(0.2212577777548923);
    msg.setSource(28636U);
    msg.setSourceEntity(105U);
    msg.setDestination(8002U);
    msg.setDestinationEntity(125U);
    msg.op = 35U;
    msg.entities.assign("BZXOEGTXLIXPSWZQZOLXTEGSYMDFQRYFUMEKBDNHUWJESZUVBXUWUMLMPSHGYHJLXVPAEPAFIENOHSYFJQEWNFTVKOQDFBVAPHJQRQNNXQDADFUPDECJPOURY");

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
    msg.setTimeStamp(0.4729982466270063);
    msg.setSource(59063U);
    msg.setSourceEntity(251U);
    msg.setDestination(62048U);
    msg.setDestinationEntity(42U);
    msg.type = 127U;
    msg.speed = 983U;
    const char tmp_msg_0[] = {39, -7, -59, 25, 48, 97, -41, 110, 50, -29, -103, -97, 109, 49, 20, -77, 79, 105, -58, 118, 99, 29, 88, 67, -38, -20, -52, 85, -41, 76, 39, 39, -7, -24, 48, -2, 123, -89, -72, 70, 36, -52, 69, -81, -35, -43, -1, 120, 39, 20, -30, 86, -9, -51, -102, 85, -29, -15, -94, 94, -4, -88, -26, -100, 14, 76, 4, -32, 113, 71, 75, 61, -94, -93, 80, -76, -56, -100, -73, -77, -65, -31, 44, -45, 109, 117, -122, -16, 104, -72, 117, 63, -56, -119, 92, 18, -16, -88, -11, 6, 43, 107, -14, -100, 71, -127, 115, 9, -48, -13, -41, 15, -86, -90, -24, -117, -38, -8, -116, -30, 98, -106, -54, 36, 68, -34, 86, -97, -108, -107, 121, 24, -114, 98, -15, 3, -91, -48, 10, -96, -60, 85, -48, -116, 17, 87, -38, 108, 41, 105, 117, -1, 102, 46, -1, 79, -93, 26, 20, 84, -113, 0, 62, -75, 66, -74, 16, 95, 126, 64, -115, 97, 38, 106, 23, -87, -7, 3, -104, 40, -119, -61, 121, -90, -67, 61, 32, -87, 14, -61, -87, 50, -122, -10, 41, -113, -126, -54, 93, 34, -112, 118, 56, 2, -13, -101, 69, -83, -72, 114, 39, 112, -72, -73, -57, 35};
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
    msg.setTimeStamp(0.08630601831185869);
    msg.setSource(16783U);
    msg.setSourceEntity(49U);
    msg.setDestination(47025U);
    msg.setDestinationEntity(66U);
    msg.type = 209U;
    msg.speed = 18208U;
    const char tmp_msg_0[] = {-120, 82, -10, 77, 123, 52, 106, 62, 31, -2, 34, 27, 97, -106, -87, -103, 54, -17, 86, 50, 2, -69, -13, 116, 113, 39, -76, 67, 43, -90, 87, 96, 44, -84, -35, -128, -10, 21, 74, 109, -34, 66, 24, -126, -127, -113, -121, 67, -126, -36, 109, 126, -3, 83, 120, 3, -95, 34, 14, 106, 99, 89, 108, -39, 15, 119, -18, -53, -46, -69, -72, -27, 95, -15, -114, 117, -41, 57, -77, 61, -98, 56, 20, -19, -94, -96, -126, 8, 83, -118, -103, 117, 28, -37, -31, 43, 15, 64, 115, 33, -117, 85, 80, -68, 80, 29, -13, -36, -31, 102, -121, 102, 76, 30, -34, 97, -60, -10, -93, -42, -67, 36, -17, -71, 15, -114, -100, -19, -88, -92, 13, -100, 23, -33, -98, -27, -12, -5, 83, 98, -33, -117, -1, -49, -74, 57, -37, -43, -51, -17, 29, -72, -48, 2, -19, 46, 69, -104, 15, 3, -19, 42, -22, -113, -23, -16, -13, 89, 66, -61, 34, -41, -30, -94, -8, -92, 72, -6, -86, 83, -32, -81, -52, 25, -106, 56, -42, -19, -8, 118, -80, -41, 91, 55, 54, -96, 69, -64, 41, -41, 44, 26, 39, -18, 47, 118, 113, -15, 83, 26, 119, 113, 85, 37};
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
    msg.setTimeStamp(0.04004305748711978);
    msg.setSource(1353U);
    msg.setSourceEntity(227U);
    msg.setDestination(63642U);
    msg.setDestinationEntity(78U);
    msg.type = 212U;
    msg.speed = 59629U;
    const char tmp_msg_0[] = {16, -40, 54, -79, -6, -8, -53, 117, -99, -83, -127, -68, -10, 55, 91, 101, -11, -73, 95, 24, 6, -27, -55, 125, 46, 114, 39, 2, -20, -94, 25, -87, 116, -56, -80, -41, 54, 59, 72, 109, -14, 15, -63, 105, 12, -103, 27, 91, 90, 124, 32, -50, 95, 126, -86, -24, 83, -12, -53, 5, -98, -54, 82, -52, 116, 96, 20, -39, -111, -104, 51, -108, 89, -118, -40, -49, 36, 101, -120, 85, 7, -18, -60, -68, 64, -93, 65, 66, -4, 4, -16, 52, 63, -107, -72, 88, 68, 104, -114, 39, 111, 79, 55, -122, -18, 67, -73, 68, -40, -32, -87, 117, 80, -51, -98, -62, 79, -85, -50, -67, -63, 101, 24, 29, 126, 27, 35, -43, -10, -34, -80, 4, 41, -44, -60, 105, 39, -102, -42, 73, -113, -109, -112, -41, 123, 37, -84, -59, 112, -28, 3, 4};
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
    msg.setTimeStamp(0.2805876330805165);
    msg.setSource(64719U);
    msg.setSourceEntity(205U);
    msg.setDestination(16998U);
    msg.setDestinationEntity(154U);
    msg.op = 63U;
    msg.tas2acc_pgain = 0.2814779753983101;
    msg.bank2p_pgain = 0.988816101984373;

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
    msg.setTimeStamp(0.7573547752611275);
    msg.setSource(41313U);
    msg.setSourceEntity(146U);
    msg.setDestination(58497U);
    msg.setDestinationEntity(113U);
    msg.op = 176U;
    msg.tas2acc_pgain = 0.9903813470174416;
    msg.bank2p_pgain = 0.19108635177210576;

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
    msg.setTimeStamp(0.2888840004459523);
    msg.setSource(56402U);
    msg.setSourceEntity(124U);
    msg.setDestination(53058U);
    msg.setDestinationEntity(13U);
    msg.op = 119U;
    msg.tas2acc_pgain = 0.615475677449281;
    msg.bank2p_pgain = 0.43163029671122866;

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
    msg.setTimeStamp(0.7949029130759638);
    msg.setSource(16751U);
    msg.setSourceEntity(237U);
    msg.setDestination(21585U);
    msg.setDestinationEntity(227U);
    msg.available = 3355351888U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.871267762081572);
    msg.setSource(17764U);
    msg.setSourceEntity(228U);
    msg.setDestination(21853U);
    msg.setDestinationEntity(119U);
    msg.available = 626758117U;
    msg.value = 171U;

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
    msg.setTimeStamp(0.02465513044517631);
    msg.setSource(44346U);
    msg.setSourceEntity(239U);
    msg.setDestination(30787U);
    msg.setDestinationEntity(120U);
    msg.available = 3678828243U;
    msg.value = 68U;

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
    msg.setTimeStamp(0.20379630456794262);
    msg.setSource(635U);
    msg.setSourceEntity(96U);
    msg.setDestination(27973U);
    msg.setDestinationEntity(207U);
    msg.op = 12U;
    msg.snapshot.assign("CWZYAWWYKYSXERHNWTMKASYYBOLHNO");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("SNMOWEDWPZIGKXSWEUYRFLVYIPLQLLCPLDVSBHCCFEZNFZIXQVMRIBMZRNJUJATIISBFEHDAUTPSZCKJYNLLOHWRNHAVQCOTPHLADVJOSVEMMSGHBRTYRTWXXBJGQHWNHBGOGPXRVNQFPKPYLUEUFOBZTXKCOAK");
    tmp_tmp_msg_0_0.lat = 0.706501827169021;
    tmp_tmp_msg_0_0.lon = 0.5462772769650438;
    tmp_tmp_msg_0_0.depth = 0.09747402007830186;
    tmp_tmp_msg_0_0.query_channel = 146U;
    tmp_tmp_msg_0_0.reply_channel = 116U;
    tmp_tmp_msg_0_0.transponder_delay = 117U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.34980517224527163;
    tmp_msg_0.y = 0.605701409791016;
    tmp_msg_0.var_x = 0.45193024508065216;
    tmp_msg_0.var_y = 0.12174329022449526;
    tmp_msg_0.distance = 0.25601966613393234;
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
    msg.setTimeStamp(0.8281575822436162);
    msg.setSource(48709U);
    msg.setSourceEntity(43U);
    msg.setDestination(31417U);
    msg.setDestinationEntity(228U);
    msg.op = 142U;
    msg.snapshot.assign("WOULDEAPHJAYFJSCJORTPHRBIHQEWTZYNAAZGISODWKSBZPDYEHBBPYQXMRMNIGXWSJQBODCNVIVRLOYVTKARCXTNQFIEUCUQWVZXJTRWEVUJUVPGTJQHXGYPUIXFMZMCJSLASGXQLMPEFUHMSALGUQQPVBMOED");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.959880006550701);
    msg.setSource(42064U);
    msg.setSourceEntity(226U);
    msg.setDestination(56210U);
    msg.setDestinationEntity(121U);
    msg.op = 207U;
    msg.snapshot.assign("BVLAGRJGPQZRJTTRMDKSTIMLMCDLHHAVQANDBNNUMSCHJFNTFJXUFYMOPXXBYJDSKFLLOMRJUY");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 125U;
    tmp_msg_0.range = 0.8963528171445102;
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
    msg.setTimeStamp(0.6590425463519604);
    msg.setSource(6381U);
    msg.setSourceEntity(16U);
    msg.setDestination(45179U);
    msg.setDestinationEntity(146U);
    msg.op = 142U;
    msg.name.assign("BQMZHZGYKLPHIZDAIDRAXMBVUMHFGSPITJEJXLLVWMTVM");

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
    msg.setTimeStamp(0.08845296930952973);
    msg.setSource(46418U);
    msg.setSourceEntity(51U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(72U);
    msg.op = 249U;
    msg.name.assign("ZPQINRJXFSKSAMUHKKPZMNZNHVCVBBIISJFFLGBPWHVDYSKGWRJLKELUBCGQDZQVGJKEAYIYPZWHMAJCOQMUSDALOUIGYRLWNOFACSRMEYPCIWXCXLYERMZXKOMJXQXWKOSTNEBSWATBXHUDKFXUCGDAJKIRFQNDPQYTSRUWPHNQVDGLLF");

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
    msg.setTimeStamp(0.07273958026851668);
    msg.setSource(13844U);
    msg.setSourceEntity(226U);
    msg.setDestination(55426U);
    msg.setDestinationEntity(80U);
    msg.op = 149U;
    msg.name.assign("HNLBNAEBNNVVBQMRFVFPETGYMUJKZXQNRCDIEWEGCZSGLSTGUMMRYVYLWGDXEDHPTIKDUMYLAJDFYBEHHCJTYIIICIZBGOWRVAZPJKLOSYQHXSKUHEBQZEUZFFLI");

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
    msg.setTimeStamp(0.049368561644388964);
    msg.setSource(8095U);
    msg.setSourceEntity(36U);
    msg.setDestination(55655U);
    msg.setDestinationEntity(16U);
    msg.type = 208U;
    msg.htime = 0.7594942973404059;
    msg.context.assign("FCENDENIFLWGBVZBWEMKSLLXFGRAYIIVPMDUCBZYQKSROPQTNRMRTEGDDWKNEXFXEFSDNAHIOIBVCOGGHWEMLFNYNONRTQSYXAIYLVZQBMALFZHCJFUBRJWUXQAYHEUWRXJJJFWOKMMSRPOVGDPDLHHTXDKCKOXGKPWSHSCNSQ");
    msg.text.assign("IATVQBIUHOUMLHYDKDEOQHWOISPZWGPMLAJXDFSGUNILAGWTFLPCCYAPHRFRMIKTRSQAFBZLXUVQNQZKDQAXYGVUCXWKVRJIPVSKJERIWGAVEGSLZCZXMJBPUWLTYQXHDFNTDJCWKSWHDUTXZNSWNJNTESVTKOFIZTSEKOVCYCNWPH");

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
    msg.setTimeStamp(0.371635914393848);
    msg.setSource(50119U);
    msg.setSourceEntity(124U);
    msg.setDestination(51741U);
    msg.setDestinationEntity(103U);
    msg.type = 125U;
    msg.htime = 0.5105144206109395;
    msg.context.assign("IFFUFPLGUTKJSTOJSGMHQQODNXRBPPFXNOORZIDJLTXYLXOEXZOEAJVKQEMLFHVMVIAJCPKPDEUEFLSWRNCVMHNJIGTVWISMPJYAPYHIFEENYNQRKDZCCQKPXMNCLRAHBYBEHCCBPXGGGBSIVBUZVWWUOLNAZVZQWCISYH");
    msg.text.assign("PTMDXQVBOQZXLOJIRXGEMETSDMXEXRKQIVSECJQUKQUYUNAGSKFLZOHPUOVZEWCILPSMHTLORZSUV");

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
    msg.setTimeStamp(0.5085670591848063);
    msg.setSource(63174U);
    msg.setSourceEntity(151U);
    msg.setDestination(61300U);
    msg.setDestinationEntity(53U);
    msg.type = 165U;
    msg.htime = 0.8153961756201216;
    msg.context.assign("XSCFONBJEDLKKLYAIOASNWQFWTMWZNLNQMIECQVQZJZPIJALCMKJOMNGMBLCMUAFHXBQHXPKSECOSBMCXGERVDHGDNHQRCJUTRODCWMVJUEQGTLNTHSGYUXJHRT");
    msg.text.assign("TUXLQETYBHWHCJQYFNFFLCSYXUXIFLZPYFUHPJFDHVLXKAVXGAPCNHRJVNMPCBZIXTAEVYORMPMKTKDCLGXAHOFQHOGAOQNWPJRCPBKYDCLXGQGMTOJMTBGWTRKPZVVSMZWIJRRWOZZDAQMKDBCSQTSBRVEABSFBMDWJNFZNZKRAWRKWJLHUSNOQYDXBIUQCLYAWINUUWNKHBYUMH");

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
    msg.setTimeStamp(0.5654914780476393);
    msg.setSource(57024U);
    msg.setSourceEntity(244U);
    msg.setDestination(64871U);
    msg.setDestinationEntity(3U);
    msg.command = 169U;
    msg.htime = 0.5307105282307285;

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
    msg.setTimeStamp(0.6277646427471498);
    msg.setSource(51300U);
    msg.setSourceEntity(171U);
    msg.setDestination(30903U);
    msg.setDestinationEntity(59U);
    msg.command = 83U;
    msg.htime = 0.04764323609251042;

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
    msg.setTimeStamp(0.6188829824318178);
    msg.setSource(8483U);
    msg.setSourceEntity(30U);
    msg.setDestination(31026U);
    msg.setDestinationEntity(18U);
    msg.command = 172U;
    msg.htime = 0.31013901875556793;

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
    msg.setTimeStamp(0.4085747561823816);
    msg.setSource(62395U);
    msg.setSourceEntity(58U);
    msg.setDestination(47930U);
    msg.setDestinationEntity(150U);
    msg.op = 35U;
    msg.file.assign("PEUVCNSSZCPSQBHRZIVEUDQLHKTDUNFAOGOEYGMFPDIABYCGBYDOIEWJIOOIHSGSBBMEIFAO");

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
    msg.setTimeStamp(0.06624183669889327);
    msg.setSource(8303U);
    msg.setSourceEntity(212U);
    msg.setDestination(23849U);
    msg.setDestinationEntity(104U);
    msg.op = 30U;
    msg.file.assign("ALZHYJMZYUVPZANWPJPVXJLDUUVIRDAZLQGKLLYKXHHAHGJENDIEGHZLWGYNXAXCYPSDMJYRRBUHPOVQFMKSMWCNWTZQGXIEXIROEKAWJUETOIRLONMSXLKSVIYOUQXYFLVKVODSARFFSWDFETHHNJRITVYCIVRMNEPEOIGTGKWGDCXKHBBQXTNUWJTUZSQZFBQJDBBCZQZ");

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
    msg.setTimeStamp(0.20855134636796469);
    msg.setSource(45577U);
    msg.setSourceEntity(237U);
    msg.setDestination(29218U);
    msg.setDestinationEntity(193U);
    msg.op = 5U;
    msg.file.assign("GIKTDPXIPOFKUVEHULEOE");

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
    msg.setTimeStamp(0.36354580408843673);
    msg.setSource(47943U);
    msg.setSourceEntity(116U);
    msg.setDestination(61607U);
    msg.setDestinationEntity(232U);
    msg.op = 45U;
    msg.clock = 0.5729494231043019;
    msg.tz = -70;

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
    msg.setTimeStamp(0.9790737420690693);
    msg.setSource(24664U);
    msg.setSourceEntity(164U);
    msg.setDestination(60139U);
    msg.setDestinationEntity(139U);
    msg.op = 0U;
    msg.clock = 0.3931394056827442;
    msg.tz = -19;

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
    msg.setTimeStamp(0.45492408965241204);
    msg.setSource(26701U);
    msg.setSourceEntity(0U);
    msg.setDestination(41507U);
    msg.setDestinationEntity(242U);
    msg.op = 14U;
    msg.clock = 0.09280937619443663;
    msg.tz = 10;

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
    msg.setTimeStamp(0.02595553367942638);
    msg.setSource(32083U);
    msg.setSourceEntity(212U);
    msg.setDestination(18384U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.22766849635948427);
    msg.setSource(1787U);
    msg.setSourceEntity(146U);
    msg.setDestination(56990U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.9604462208749668);
    msg.setSource(54441U);
    msg.setSourceEntity(39U);
    msg.setDestination(46336U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.5808751495909625);
    msg.setSource(4439U);
    msg.setSourceEntity(236U);
    msg.setDestination(11720U);
    msg.setDestinationEntity(251U);
    msg.sys_name.assign("TCXWWOOFYJGGDMKUYCTHHMZZBWFZSWYHOXIRXCJCRNZDALQNGHHSFBDUBEBOKXUUMZPCJZZENELWAXVYQIMZYMFGEMOJTFEWJQINNUS");
    msg.sys_type = 16U;
    msg.owner = 40283U;
    msg.lat = 0.045125532996447615;
    msg.lon = 0.4825131710310552;
    msg.height = 0.34574361255662345;
    msg.services.assign("EMPAQPDNEIBCWDEMIEXNHUYNLWAGQYWEUIJFCQBAPTHTKMCLCOMLGRXOXKVWUYVMKRXJPLJKGXVJQATZYQMUEPOBCZYKNWNTDNOZFPGBTXJFLLYECAAXSILAUGEAMMRFESFQVEXVQSSBJURGZLDOUVBBMDXRGDIDOQYSPAOCZRWVHYJHZHPSBC");

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
    msg.setTimeStamp(0.3089878667537217);
    msg.setSource(39789U);
    msg.setSourceEntity(58U);
    msg.setDestination(64916U);
    msg.setDestinationEntity(136U);
    msg.sys_name.assign("LOUPXSQMPUFRLXNVQYPICSMXOTOXEBUVEABLHUHVUSGPOYTQEQBWAHCBDQLECLTTGCYLRGWMBWFYLCFDHKZNBETDNVZIFNEKUJSFKUKTJPEJIIVICTINIKZMAYAXWJISBQKLEJQHXZVWOGMEFGCSSFRFUXQZJZBWA");
    msg.sys_type = 28U;
    msg.owner = 27018U;
    msg.lat = 0.04433973156615534;
    msg.lon = 0.18648953397198664;
    msg.height = 0.7237012840938194;
    msg.services.assign("UPTXVIFNOHPLQORAWNYMADPKIUITBJNZPOFLEZLQBIDPSTNEYGECQHOGHVBDQOGSJDHHIZETRJXLHYKWVWFXXLGPMMFWUMLZPCLNRMAAPEQFRCGFJLGILHPVWHNFQNPRLTBZSMJACZGYZKARBWSTUGRNCVXVWACURKWOUKQDMZSVUFQ");

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
    msg.setTimeStamp(0.39847823740510024);
    msg.setSource(24512U);
    msg.setSourceEntity(169U);
    msg.setDestination(51295U);
    msg.setDestinationEntity(219U);
    msg.sys_name.assign("BMGXCDKFYAPCIAZHNMXTFVODDVLNKXYSEWANBJTTKLAUDLHFKUQSSWWHUQXXPZLZGJNQQQTFCBCURLZNFUZWGMEUZRHFKKCJDZJTXSYHNDOIMVQW");
    msg.sys_type = 235U;
    msg.owner = 32645U;
    msg.lat = 0.7564746672382817;
    msg.lon = 0.16806884866402627;
    msg.height = 0.863441975141285;
    msg.services.assign("GISLMBLPFNHQEBVNWVGKFGUFMIKLODTAAGKILBJWDNKASEOPHVLXPZORDABNBFWPAVRMDQVIHVJOTTFINXMXGZJWNMUBNYLKLBJSUTTWCLFYHYFYKVOERRUSZAHKJQWLLYBIDRXJFPPYK");

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
    msg.setTimeStamp(0.4581624902489857);
    msg.setSource(16302U);
    msg.setSourceEntity(245U);
    msg.setDestination(50713U);
    msg.setDestinationEntity(172U);
    msg.service.assign("PRDSKTYBOCIPBNQJUHKOQHYUHCDUAPMPUVSYWTRFAUDWHTVTNYRNIRXBGULZZENUBNVQTHSPDXEFEZYZMOQHNYSXMVOCLOKFCLWVARTFLAVEXFOVVWACMTEDRAPJOTNDVGPKMIA");
    msg.service_type = 235U;

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
    msg.setTimeStamp(0.5591518573852);
    msg.setSource(27714U);
    msg.setSourceEntity(204U);
    msg.setDestination(46032U);
    msg.setDestinationEntity(148U);
    msg.service.assign("HNXMASVWDJTGXFIVTHZDPSKSNOCTNXSWTSKCVLIKAJHVNQBDULVWFBZHRPNOLKYPBWYIQREXEKMNDMKFHIQVITNYOMQMOXIHEJPWEUUYTGAPQGZFCBAKDWKZYEEQDLJZRLBMCCOWFYVZBAZPNQEPVEYXLCNOBPUQPIWKKCWFBCURGARXORJUTDSCZYRSGSTZOAYHMMMGLDNOABIULGSQGRJTGGWPZFHARXFOQMSALJHUJLJXCBTRVF");
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
    msg.setTimeStamp(0.6302028854095332);
    msg.setSource(42293U);
    msg.setSourceEntity(27U);
    msg.setDestination(45244U);
    msg.setDestinationEntity(230U);
    msg.service.assign("QLZZCTTBIYZURVHXZLJJXIQKHTGERED");
    msg.service_type = 155U;

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
    msg.setTimeStamp(0.04669762122094778);
    msg.setSource(13636U);
    msg.setSourceEntity(112U);
    msg.setDestination(47993U);
    msg.setDestinationEntity(48U);
    msg.value = 0.31981137824480976;

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
    msg.setTimeStamp(0.12253777189151627);
    msg.setSource(20756U);
    msg.setSourceEntity(40U);
    msg.setDestination(45510U);
    msg.setDestinationEntity(41U);
    msg.value = 0.14595356570518392;

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
    msg.setTimeStamp(0.5642345519357317);
    msg.setSource(59747U);
    msg.setSourceEntity(24U);
    msg.setDestination(61848U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8946469850190215;

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
    msg.setTimeStamp(0.9664393214001195);
    msg.setSource(14752U);
    msg.setSourceEntity(95U);
    msg.setDestination(48940U);
    msg.setDestinationEntity(123U);
    msg.value = 0.7286564826598743;

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
    msg.setTimeStamp(0.17972731809402376);
    msg.setSource(41388U);
    msg.setSourceEntity(213U);
    msg.setDestination(37607U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8115208307486121;

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
    msg.setTimeStamp(0.3006956600659054);
    msg.setSource(57354U);
    msg.setSourceEntity(131U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0008692590379154597;

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
    msg.setTimeStamp(0.7779402467338997);
    msg.setSource(59705U);
    msg.setSourceEntity(136U);
    msg.setDestination(5246U);
    msg.setDestinationEntity(32U);
    msg.value = 0.45052050600966487;

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
    msg.setTimeStamp(0.6266783185961265);
    msg.setSource(52451U);
    msg.setSourceEntity(135U);
    msg.setDestination(27539U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9178633367292636;

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
    msg.setTimeStamp(0.2371411634239935);
    msg.setSource(19158U);
    msg.setSourceEntity(57U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8789410285538463;

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
    msg.setTimeStamp(0.7362514796386678);
    msg.setSource(6364U);
    msg.setSourceEntity(101U);
    msg.setDestination(58205U);
    msg.setDestinationEntity(62U);
    msg.number.assign("JJFHWJVUYBPXRPSKDPOSYFADIRXPRXOXSGJVURVEMAQHXQIIZEEBTUUKPKMHABRVTKBEAOBXQYWONZMNLCIZVSLKTTYQLFTMODFSZAODQCXKRGACZRWTLWFACDYP");
    msg.timeout = 43461U;
    msg.contents.assign("ZQNECZVSKQVDVSJSMXFSIYPEMWZWEXGLXLHCUUXRHQBUEPMHTTLSLHOWJDJKTLGXIGYUVEFNBWCCCFZNFIPDXAUPPMZPDTQQRBTNBDMASOXQDVLRIAYXRICNAHBMADOOBSDUMRKDAYASWKYUIUIGOLKPXTWRGYEJNWAJBJDHTGPTYKGCMALRJIOZLMTVGNOCZGHZQIXEWBKEO");

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
    msg.setTimeStamp(0.5276303803580105);
    msg.setSource(53860U);
    msg.setSourceEntity(238U);
    msg.setDestination(55890U);
    msg.setDestinationEntity(188U);
    msg.number.assign("EAHLJKXFVRMHVTMFAWXZZJPSLNFXHPUTWBBGBGPPHIJQPYUCRORIEGY");
    msg.timeout = 19233U;
    msg.contents.assign("UVBEPZBPUZZJNGTXUXOBBTOHADDCYTCOMHQCHGVQNBIEYMIXTUSIQERWMGLJEOWSMPINAEARKJI");

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
    msg.setTimeStamp(0.462669180643246);
    msg.setSource(3951U);
    msg.setSourceEntity(171U);
    msg.setDestination(5542U);
    msg.setDestinationEntity(120U);
    msg.number.assign("GQAHDUZXEXBUZFPTWRQYLJVCTVTFOHBNAFPHEOSMZYPLILAINDGMDJM");
    msg.timeout = 64047U;
    msg.contents.assign("DDQTNRZVWSOHSLZPEKMRHNOVCPUNHJTPOZIYDUJGICOUMPWBRWDHBIMLJEBGWUHJAHNLPVEDNTJATNUFPQSPQCQYKYGITFIEWAMVYLWFCDYHJHQXGMYRWRFTFMCEZUZZLCVEOSQBNPFQRNCCB");

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
    msg.setTimeStamp(0.7328668538784462);
    msg.setSource(51517U);
    msg.setSourceEntity(226U);
    msg.setDestination(16047U);
    msg.setDestinationEntity(185U);
    msg.seq = 1244189022U;
    msg.destination.assign("QHLJNJSELYWCUXGAGPMIIEYMCCPWNXQILGJCVVQOTUKUQXWARRXIGHXZEVUYXVJMYNPNEYBDHKWCHIUHZTLIJIMBOHDYENRMPRFXQSVJCCHWBPPGOGKTBBGOEAKBYVOGPPPJSLFKTVOBQRWOBBYSASOZLZAILMJUOWHTVFIVSMZMSXDZWMFPTORVKFUALDXAASAZUNWAFCZ");
    msg.timeout = 26579U;
    const char tmp_msg_0[] = {102, 84, 21, -110, 0, -119, 116, -86, 75, -33, 118, 15, -122, -99, 49, 7, -71, -39, -26, -113, -110, 76, -31, -74, 66, 40, 45, -107, -123, 106, -37, -58, -73, -121, -71, -14, 62, -73, -14, -122, 42, 77, -82, -53};
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
    msg.setTimeStamp(0.9608158367894744);
    msg.setSource(7263U);
    msg.setSourceEntity(99U);
    msg.setDestination(44678U);
    msg.setDestinationEntity(69U);
    msg.seq = 3148139147U;
    msg.destination.assign("QXNLODHOJYJHPSGOJSBKAZEQYMUVDZDBMIVOGWTRWRUCYSAJYHFGKZVPUBLXFOJFDYUUSRXRS");
    msg.timeout = 5615U;
    const char tmp_msg_0[] = {43, 86, 113, 54, 21, -125, 35, 54, -123, 98, 24, -86, -51, 122, 116, 79, -126, 77, 61, 4, 99, 81, -80, 44, 61, -9, -101, -55, -46, -31, -2, 100, 32, -33, -71, 117, 78, 72, 66, 97, 108, 7, 79, -124, -6, -64, 72, -26, -65, -41, -1, -10, -49, 102, 86, -120, 35, -93, -38, 32, 11, -92, -102, -31, 91, 121, 112, -13, -95, -50, -67, -8, -65, -17, -25, -55, -76, 4, -120, -47, -16, -49, -93, -92, -31, 62, 48, 117, 82, 39, -48, -77, -71, -52, -46, 98, -31, 118, -105, -124, 47, -119, 55, 63, 59, 76, 97, -88, -8, -88, -88, -51, 110, 92, -40, 55, 107, 21, -25, 28, 117, -67, -81, -51, 17, 35, 88, 68, 49, 84, 86, -32, -38, 52, 125, -22, -82, -98, 117, 33, 121, 23, -118, 90, -115, -80, -116, 86, -80, -2, -32, 58, 12, 18, 11, 94, -13, 31, -101, -50, 75, -33, -126, 5, -10, 80, 10, 57, 14, -3, -35, 123, -105, 88, -68};
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
    msg.setTimeStamp(0.12114330124107453);
    msg.setSource(17444U);
    msg.setSourceEntity(54U);
    msg.setDestination(34558U);
    msg.setDestinationEntity(200U);
    msg.seq = 234112483U;
    msg.destination.assign("STZYJCNXLOCSBAMCFOUFPUCXDHPWPVQJFIUXRMUQKKRXPAMKOEVMW");
    msg.timeout = 31175U;
    const char tmp_msg_0[] = {-113, -91, -120, 109, -86, -96, -57, -46, 10, 110, -39, -107, -20, -98, -36, 106, -106, -45, -122, -116, 101, -75, 1, 29, 36, -83, 41, -102, -43, -51, 41, 4, -24, -123, -7, 109, -71, 66, -70, 109, 64, -50, -78, 100, -115, 77, 112, 48, 24, -81, -106, -127, -34, -78, 59, -124, -37, -98, 49, 6, 13, -98, -33, -21, 83, -14, 63, -44, -5, 23, 97, 75, 71, -101, -124, -32, 47, 53, -81, 86, -39, -10, -63, 76, 18, 119, -124, -117, -37, 81, -82, -108, -72, -79, 41, 53, 71, -57, 40, -74, 65, 15, 82, -78, 101, -95, 105, 104, 14, 7, -9, 126, -13, 39, 102, 18, -112, 14, 6, 108, 26, 20, 39, -36, 47, 99, -52, 109, 70, 28, -49, -101, -98, -120, 81, -67, -13, -44, 57, -46, 23, 9, -92, -2, -96, -31, 89, -127, -43, 75, 88, -119, 70, 25, 38, -128, -76, -62, 73, -92, 66, 66, -18, -65, 104};
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
    msg.setTimeStamp(0.5730832651210226);
    msg.setSource(41035U);
    msg.setSourceEntity(85U);
    msg.setDestination(6963U);
    msg.setDestinationEntity(179U);
    msg.source.assign("DOAZJECVONTTYINNSTLZFRIMBNEPVZQGXVDLLBZBGEZUHJDXWHKLMWADBSQHXLFFQDTQVZPYYXYSROIYVIAPUBJSALMVKSWUXZXIZNNHYPXERJBDQPMRDYUMSDOTIGVINHTOBCCWZAJSUCCOKQBIKGWLPPLESETQJKRLGXAFAEVCTHWUSCCOAIIFGABMYBKQCGXOVGCREJNPKPUNUARMHTRQVYMM");
    const char tmp_msg_0[] = {79, -111, -102, 71, -15, 120, 61, 49, -61, -69, -100, 59, -99, 96, 67, -23, 15, -14, -100, -19, 35, 70, 23, 27, -93, -84, 68, 75, -24, -39, 35, -70, -126, 3, -26, -124, 16, -66, 72, -20, -38, -76, -23, 74, 104, 39, 26, -123, -49, -81, -65, -39, -70, -38, 15, -61, -99, 8, 41, -125, 76, 83, 1, -9, 68, 33, -112, -111, -60, 91, 119, 66, 20, -69, -18, -106, 50, -58, -24, -31, -22, -48, 28, 36, -20, -106, 10, -101, -27, 87, 118, 74, 44, -49, 115, -28, -70, 74, -54, -33, -47, 8, 22, 7, -117, 3, 74, -116, 56, 95, -103, -87, -115, -81, -17, 53, -100, -63, -108, 103, 35, -65, -26, -81, 102, 49, 80, -108, 122, -22, -38, -97, 32, -125, -95, -115, 84, -46, 82, -17, -107, -67, -91, 69, -46, 16, -40, 104, 111, -82, 86, 116, 52, -70, -124, 17, 94, 27, 56, -59, 10, -126, 98, -89, 109, 52, 42, -107, -115, -42, -97, -18, -124, 8, 94, -54, -18, 14, -62, 117, 47, 1, -39, -72, 105, 12, 26, -14, -124, 31, -7, -44, 51, 53, 33, -9, 112, -31, -25, 126, -66, -125, -3, 60, -127, 114, -93, 39, -72, -36, -113, 73, 103, 53, 116, 109, -114, 46, -45};
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
    msg.setTimeStamp(0.19701541271919687);
    msg.setSource(55688U);
    msg.setSourceEntity(58U);
    msg.setDestination(35524U);
    msg.setDestinationEntity(144U);
    msg.source.assign("PFBQHIBTLVDBYZJAAKFKWCNVOZKPPSUUCHFVUZGSDQRBOJZHFHCTSTHGFCUKJEWEBQJRYDFNWJBFQIGEPOLCXNNCCTRKBIBIAPQZEVGEQGHVBHPNIEDYXDUDMEAYWTLUAOQXTJMESJRXWKNGIRKRGGLSWQM");
    const char tmp_msg_0[] = {0, -115, -70, -16, 39, -113, 26, -21, -20, -113, 109, 78, -12, -62, 107, 40, -6, -84, -105, 38, -92, -124, 2, 9, 8, -51, 16, -10, 1, 8, 114, -122, -105, -93, 22, 51, 12, -15, 114, -25, -80, 68, 32, -82, -123, -98, -80, -13, -51, -105, 55, 20, -112, -27, -12, 75, 19, 98, -62, -123, 102, -79, 15, 8, -106, 42, 94, 5, -59, -95, -94, 49, 30, 4, -101, -59, 10, -103, 25, -104, -91, -2, -52, 83, 115, -51, -32, 37, -102, -14, 16, -119, 106, 1, -79, -79, 116, -16, 9, -19, -20, -56, -19, 105, -44, -73, 60, 46, 104, 11, -40, -127, 100, 64, -102, -14, 35, -2, 116, 30, -61, -107, -55, -15, 115, 109, -42, -40, 5, -107, 50, -63, 117, -109, 122, 112, -22, -61, -19, -80, -82, -103, 112, 88, 41, 61, 110, -79, -104, 99, -114, -100, 38, 61, -126, -7, -49, 113, -25, -74, -40, -115, 89, 31, 18, -83, -82, -50, 43, 125, 8, -54, -81, -55, 66, -78, 74, -80, -9, 63, -76, 63, 47, -53, 24, -99, 121, 85, -60, 75, 59, 98, 75, -37, -18, -28, 50, -62, 78, 40, 55, 47, 9, -33, -84, -28, 105, -116, 7, 89, -63, 72, -31, -55, -100, -33, -16, 89, 110, 126, 0, 75, -73, -50, -90, -89, 91, 91, -9};
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
    msg.setTimeStamp(0.8906048411762527);
    msg.setSource(31789U);
    msg.setSourceEntity(168U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(223U);
    msg.source.assign("MKOVCNEIXKLHKWHZJXTXYYIKWJOLDMOVEGOBAWWHMQAXTFPGTXGYPFMUDCHCVMMVKC");
    const char tmp_msg_0[] = {103, 26, -22, 97, -69, 54, 96, -44, -86, -52, -23, -3, 44, -82, -80, 57, 20, 4, 49, -84, -53, -64, 91, 124, -50, 121, -126, 57, 104, 75, 96, -127, -8, -47, -79, 14, -69, 20, -12, 19, 98, 90, -26, -42, 62, 20, -123, 121, -99, 93, -97, 123, -72, -86, -23, -21, 13, -71, 56, 20, -58, 78, -1, -16, -56, 20, -60, -99, 49, 38, -32, 1, -67, -128, 104, 8, -30, 98, -78, 87, 81, -41, -79, 76, -24, -72, 20, -93, 106, -19, 19, 59, -16, -91, 78, 87, -115, -16, 37, -98, 103, 12, -60, 32, -18, -117, -31, -69, 81, 28, 21, -5, -57, -116, 32, 42, 120, 51, -9, 95, 42, -74, 75, 45, 48, -35, -16, 78, 124, -127, -11, -51, 59, 33, 60, -98, -19, -79, -51, 11, 7, 57, 124, -4, -72, -4, -84, 74, -127, -98, 88, -106, -73, -30, -87};
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
    msg.setTimeStamp(0.387946302744513);
    msg.setSource(61033U);
    msg.setSourceEntity(140U);
    msg.setDestination(31721U);
    msg.setDestinationEntity(36U);
    msg.seq = 3129977506U;
    msg.state = 15U;
    msg.error.assign("EXMIVZXTKDCZZNGEYUHCAZRSMXCFGRSIIRBMIPTGVJVKHSJCHSFEYPRFIDDSVXPJURHBFVABXMILGWJGLJYLHAQTPZUFQSKZSXLYWTCYEVTKNNRWYDLAXFDRWDQPIRNDCVQHOOFOBILCEDWNOEXBHWIKMMMOMGQQWZUOYDLOAOPRNTEZVRGHUAYHQHUFQZKXMQSNBSUJGCO");

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
    msg.setTimeStamp(0.7904409266348102);
    msg.setSource(60759U);
    msg.setSourceEntity(230U);
    msg.setDestination(23692U);
    msg.setDestinationEntity(157U);
    msg.seq = 3377681241U;
    msg.state = 83U;
    msg.error.assign("NMGDKLMVKXSOVYCJIAWZKGDLHOIVFUNF");

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
    msg.setTimeStamp(0.0031389973486700695);
    msg.setSource(39410U);
    msg.setSourceEntity(153U);
    msg.setDestination(43445U);
    msg.setDestinationEntity(55U);
    msg.seq = 1610751225U;
    msg.state = 240U;
    msg.error.assign("GWKDXWYXUSUKDBOOJPZKAJRQMNDNKXVULZRLWFATPMGHCYNFLXXLRPWWEWYVQAMINMJKDJMRDBMOUQSKPAGRHLHGWEDNZSGTTOFQJXSNCNOGPRIMXKPHQTVUYFJMQSCTITQABZCTNYDWFODBJHKEGIJLBLTUNTCBZZFQMNBEEBQOE");

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
    msg.setTimeStamp(0.33209386401321284);
    msg.setSource(19894U);
    msg.setSourceEntity(131U);
    msg.setDestination(25741U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("VGVIZZTEAIEGJUTUEFASTABTBSRMY");
    msg.text.assign("IMOJGVGMKFCRIGJUIJHTZKHZTKMNDDAOSELNATQPAGQWAWLUDKQAPEUVCLBPFXJINKIZRNAPMQHGBJVCIUFCHKHSCGTJGYBZYUYQVJTBRVZZTQPAOWBLNGOQLTINEXOXUXLYFNWYTEEJOKKWVCHQIEVULDFNSMRNOAFHDQCKSPQSFDYXFWSOHRVSWLYDTNRMMSMZICUXBHHJDJBKXYXSTLPDC");

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
    msg.setTimeStamp(0.22603850575160656);
    msg.setSource(50704U);
    msg.setSourceEntity(244U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(112U);
    msg.origin.assign("GZAWMNABNVGBCFBUIDDVXATKKADMKUJKWDEXFQQAJBZWYHFWKWWGJWSRFZMYFRNUUSPXITGASPKNMROLGEFBMYYOVQGLGDKAFINVBIHMXCVEXQJLIPXTQIJTXRQVTORNWHWRQYLGSYJHOCSCZHHAJROYQSYIH");
    msg.text.assign("HTHRARDUWJOXCBAGIPVZTQCUVKJIYGMTQEKIRAYKFRBOASCTSKZCJDLQIUVCWJNEISXGCSAYYMOFRSWKEWLUFKXPQHUAZTREJEHPGIPDMJYWJMIMOBWVZHQEHZAZNHZYNZZBKJMFGXSYOVROCSXBFKROGXVH");

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
    msg.setTimeStamp(0.4012170388686944);
    msg.setSource(53287U);
    msg.setSourceEntity(100U);
    msg.setDestination(2975U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("DYBVMNXZEKZN");
    msg.text.assign("CTBYJDWGFSVJIRPJUWJEZQFARYCVHJXMSOPBGZIDSQMYREODEEYTQMBQNYKAJDISAJAHXCULODZZXFHBVBIQLRMNGTQIXXEFJDKOLHZRIWAVTMDSLWDGYINTUFJ");

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
    msg.setTimeStamp(0.8272182685073685);
    msg.setSource(54332U);
    msg.setSourceEntity(173U);
    msg.setDestination(41414U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("HSSAKWQKPBAIAXDVBMPDKEFMVJZUBPZFMNVURSZWESVUCVQIJKZHXOEOVEHAROEALQTCVOJNIBNKKJLHDWGNCOMTCXFVYIGKAHSKFHOJCESBZIFWWRGNOJECSRTZUJRLUDPNLGGDKCGXPYATCWYZNBHGIHLDMYJMEYOFJQYLGXQYPBMOCCDYRYADAXLPFMPSHGFGBSZLXTMQTMTWWVTIEBIDFUXPKNQNTRRSQRQZRXAF");
    msg.htime = 0.492808863021984;
    msg.lat = 0.9874167645931283;
    msg.lon = 0.19493058706523259;
    const char tmp_msg_0[] = {32, -12, -72, 107, 100, -51, 2, -21, 4, 104, 117, 60, 16, -92, -6, -13, -98, 75, -69, 5, 107, -15, 20, 46, -113, -115, 48, 73, -66, -98, -110, 81, 108, 52, -88, -125, -104, -83, 41, -27, -44, -88, -21, 80, -29, 48, -82, -70, -7, 6, -42, 62, 14, -26, -113, 69, 105, -46, -3, -3, 16, -98, -83, -107, 1, 86, 38, 91, 42, 121, 85, -69, 70, -32, 43, 88, -17, -86, 24, -118, 61, 73, 20, -45, -88, -108, 99, -128, -98, -79, -38, -78, 118, -9, 9, 111, -85, 121, -44, -71, 111, 27, -96, 46, 79, -35, -85, 45, 13, -82, 109, 46, 65, -67, 47, 76, -67, 99, 5, -119, 96, 65, 100, 21, -111, -128, 67, 109, -122, -127, 11, -121, -30, -99, 92, -55, 49, -37, -76, 84, 13, 12, -13, -57, -6, 126, -49, 39, -107, -125, 121, 50, 108};
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
    msg.setTimeStamp(0.2178567970760943);
    msg.setSource(38133U);
    msg.setSourceEntity(17U);
    msg.setDestination(43725U);
    msg.setDestinationEntity(7U);
    msg.origin.assign("ZYOTZLKPHCAPJYSPNI");
    msg.htime = 0.7726554194240826;
    msg.lat = 0.061343505040394986;
    msg.lon = 0.9044789617845646;
    const char tmp_msg_0[] = {82, 36, 49, -19, -43, 118, -112, 81, 53, 48, 88, 6, -110, -65, -68, 102, -67, 87, -41, 118, 19, -81, 103, -117, 95, -94, -107, 13, 90, -89, 8, 63, -4, -58, 50, -111, -52, 123, 117, -107, -105, 110, -44, -126, 88, 119, 81, -85, 23, 26, 60, -98, -30, -90, -62, -34, 8, 39, 68};
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
    msg.setTimeStamp(0.5850885101604998);
    msg.setSource(10295U);
    msg.setSourceEntity(53U);
    msg.setDestination(31447U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("CVPGKBSCMRRXUAZXHNVVWDFUDLVNCTTFYDOBIIRJMETTLUAAQEGLXUXJFQAGFLLNPTSNMZOKSAQHQXDTBHDZTSDRJSKZOZVPYBHUISRNAFIWEWFLNZHBHMOYQEJCGVMIVZPGASHPWXZQDJYDZEENQKPROCUKCFCTYGHPQIUFYGLMSLFVGKTCBHKDIHUJXSLPYNYMBKTKMDEUOLWVFOOWUNPPXYJSVABRIXOCXKEYBMRCR");
    msg.htime = 0.30851732051236425;
    msg.lat = 0.23129907179026388;
    msg.lon = 0.30266722594174444;
    const char tmp_msg_0[] = {123, -80, -74, 101, -34, -122, -61, -43, 66, -80, -87, -65, -92, -107, -22, 112, -13, 37, 81, 119, -61, 100, 28, -106, -104, -114, -28, -26, -87, -105, -127, 13, -42, -4, 94, -78, 94, 34, -103, -83, -76, -75, -21, 91, -83, -35, -74, 105, 78, -34, -9, -44, -48, 26, -82, 63, 46, 29, -47, -92, -123, -29, -54, -16, 54, -54, -73, -40, -61, -40, 22, -56, -86, 15, 42, -59, -80, -100, -70, -60, -39, -3, -51, 45, 81, 12, 56, -99, -24, -71, -38, -11, -104, 55, 80, -110, -5, 35, 20, -39, 53, 107, 42, 81, 67, -69, 88, -6, -101, 88, 86, -45, -4, 37, -72, 49, -4, -19, 65, 71, -38, 98, -106, 35, 35, -117, -4, -75, -121, 53, -74, 84, -125, -83, -81, 110, -106, -128, 82, 114, 8, 31, 29, 74, -52, -7, 26, -60, -35, -102, 124, 56, 44, 68, 87, 0, -122, -108, 46, -30, -59, 3, 96, 68, -51, -5, 42, 70, -60, -46, -28, 75, 0, 75, 95, 95, -92, 118, -9, -68, -26, 113, 9, 60, -104, 85, -82, -45};
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
    msg.setTimeStamp(0.3910420402393716);
    msg.setSource(42579U);
    msg.setSourceEntity(114U);
    msg.setDestination(64076U);
    msg.setDestinationEntity(252U);
    msg.req_id = 65037U;
    msg.ttl = 13511U;
    msg.destination.assign("UNKFNATCZANCDDFXDADEEVYCGZRSQVEXOHWKOWDILLAAHBCELPFTTLZGIVUIFNWHRMYBKMXLWJFWWIACSABCKICQYRBSCUVLMPOQJMFXTKOSDZVTSXPRMRLZFIPGUUJMVWYOUTHVVGMQMSDXSPOUHYLLQGRDGIQCRNQYDJSASJUHINGXEJQAOMUQHKTNZNGTDO");
    const char tmp_msg_0[] = {68, 40, -122, 55, -12, -38, -66, 95, -72, 31, -100, -100, -107, -51, 77, -109, -81, 31, -18, -24, 7, -61, -116, 4, 45, -75, -90, 34, 113, -19, 126, 27, -118, -92, -59, -23, -9, -112, -124, 95, 81, 28, -46, 43, 58, -23, 42, -95, 23, 121, -97, 74, -63, 78, 48, 67, -100, -43, -6, 94, -55, -99, 124, 7, -47, 26, 126, 24, 30, 79, 109, 105, 122, 4, -48, -61, -82, -74, 92, -81, 57, -83, -14, -126, -70, 107, -22, -79, -106, 85, -92, 53, 124, -15, -25, -58, -90, 86, -24, 10, 73, 25, 70, 99, 29, 119, -126, -112, -81, -21, -31, -118, -71, 72, 25, -33, -47, 77, 37, 65, 63, -63, 11, -94, -58, -17, 45, -21, 27, -108, 39, 103, -50, -45, -84, -100, 61, -30, 6, 22, -117, 119, -17, -101, -47, -43, 61, 105, 103, 80, 8, -20, 9, -17, -29, 57, -46, -123, -42, 53, 30, 123, -41, 65, 32, 86, 89, 35, -123, 105, 46, 117, -23, 14, 51, -27, -98, -27, -18, -31, -44, -112, 122, -72, 20, 10, 0, -96, -80, 65, -51, 35, -98, -107, 83, -49, 12, -121, -23, 82, 65, 0, -100, 112, -56, 51, -68, -89, 52, 9, -121, -110, -120};
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
    msg.setTimeStamp(0.2315747810591804);
    msg.setSource(16460U);
    msg.setSourceEntity(161U);
    msg.setDestination(38541U);
    msg.setDestinationEntity(115U);
    msg.req_id = 61766U;
    msg.ttl = 51842U;
    msg.destination.assign("PIDGNYWZQRGMABUTVSFEIXBXIKRJDPFAQYVSCUANJHUFGOLHNRCTBWVBZFDEDVHNMOLQDJNIZFAJXHSNPWZFMWPUUSSWLUIPXFGYLTEDOUVITFAILZZEYEVQXKTTALKPLWRYOCPLQUQOASCJUDYHXBHHFDQZ");
    const char tmp_msg_0[] = {-127, 102, 0, -41, -93, 20, -97, -77, -113, 15, -45, 90, -77, -122, 86, 81, 112, 55, -90, -88, -42, -3, -20, -107, 81, -45, 60, -8, 122, 112, -9, 79, 78, 6, -56, 97, 86, 96, -118, -5, 59, 55, -69, 110, -121, -71, 116, 73, 35, -43, 125, 42, 12, 45, -74, -16, 37, -52, -14, 97, -28, 6, 115, -85, 72, -91, 11, 88, -87, -85, -24, -94, -53, 84, 69, 8, 90, -49, 13, 23, -57, 99, -118, 18, 4, -74, -64, 119, 120, 98, 74, -14, 8, 14, -14, -16, 72, 77, 49, -109, -28, 30, -7, -120, 70, 51, 88, -75, 102, 99, -88, 98, -38, 122, -4, -62, -121, -74, 90, 13, 117, -103, -34, -95, 109, -36, 93, -58, 38, -53, 8, 84, 115, 113, -88, -84, -124, 7, 110, 45, -93, 28, -92, -89, 74, -28, 39, 29, -61, -105, 35, -87, 110, 76, 94, -86, 4, 107, 92, -63, 54, -12, -28, -109, 37, -119, 74, -126, 82, -116, -119, 20, -66, -9, -11, -90, 56, 77, 18, -49, -59, -40, 25, 72, 102, 99, -66, -124, 82, -21, -3, 44, -114, 125, 57, -61, -38, 7, -87, -39, -122, -104, 86, -74, -23, 17, -107, 47, 23, 90, -89, 66, 5, -45, -104, 114, -57, 108, 69};
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
    msg.setTimeStamp(0.5660721563503537);
    msg.setSource(14665U);
    msg.setSourceEntity(196U);
    msg.setDestination(51263U);
    msg.setDestinationEntity(228U);
    msg.req_id = 7413U;
    msg.ttl = 60235U;
    msg.destination.assign("ZYGNPZCPSDYHTFNYILLRQJEKUKBLQLEKPPAIIMMCEROKPOFMQMRSXNNHWUQLPJYXJKFCWVPIDJNWUAQNTTGXXAAISKYLIKKCDLVYHHCCSNBKCZYSECOZUDAUHOAFXWIWMUGDVTEEAPAMDGBOFSVWZRRGVEHFEHFMJJRGEIHOGSEXAZDBGBZUVRROSUHUVJINVXCMNVOTWYVQRJSTAHTMXLOURJDBYZXMBTKGFBLCWQTQQQYZJWSPDBOBFTXZPN");
    const char tmp_msg_0[] = {-39, -51, -119, -89, -120, 27, -4, -32, 92, -110, -25, 50, -110, 13, 50, 56, -89, 1, 114, 63, -4, -81, -33, 96, -76, -69, -68, 120, 32, -23, 120, -5, -40, -39, 26, 14, -64, -18, 82, 84, 13, -65, -96, 95, 105, 70, 4, -36, 124, -9, 3, -58, 14, 73, -50, 54, -123, 66, 110, 97, -43, -55, 47, -77, 121, -13, 123, -80, -92, 34, -14, -54, -21, -100, -33, -23, 126, 28, 36, 95, -83, 17, -2, 19, -70, -88, 87, 76, -71, -89, -37, 38, -54, 58, 114, 43, 55, -3, -82, -2, -121, -71, -63, 18, 38, -21, -126, -99, 77, 21, -103, 91, -85, -74, -94, 27, 121, -31, 11, -98, 114, 14, -91, -81, 33, 13, 64, 24, -36, -30, 95, -15, 77, -60, 39, 122, -25, -95, 39, 91, -62, 34, 111, -70, -100, 60, 2, -79, 96, -51, -97, 78, 105, 76, 26, -52, 9, 11, 21, -2, 13, -54, -26, -51, 58, 44, -65, 14, 79, 48, 80, 109, 74, 62, -66, -18, 124, -74, 55, 0, 20, -87, 44, 98, 106, -106, -67, -28, 90, -40, -23, -69, -114, 65, -118, -62, 41, 8, -10, 67, 122, 4, -64, -101, -94, 12, -41, -31, 108, -46, 74, 91, -87, -102, -11, 23, 93, -85, -38, 83, 31, 84, 44, 93, 46, 19, 56, 24, 106, 104, -12, -2, -8, 44, -48, -87, 22, 51, -40, -95, 26};
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
    msg.setTimeStamp(0.8663617929769256);
    msg.setSource(40707U);
    msg.setSourceEntity(132U);
    msg.setDestination(44622U);
    msg.setDestinationEntity(253U);
    msg.req_id = 41338U;
    msg.status = 128U;
    msg.text.assign("LQHGAWFBNCDLIZRYZSHJTHKELEUPOCOUUJEPMZQSFUGSEXKTZOOCJVZWSJPVDXNQXDVNVKTWCLEPCIDADSXIEUWNWZKPJYTNFWXAYPTVWNALUEHTMIIBYB");

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
    msg.setTimeStamp(0.3268777706221081);
    msg.setSource(12732U);
    msg.setSourceEntity(103U);
    msg.setDestination(9297U);
    msg.setDestinationEntity(154U);
    msg.req_id = 6066U;
    msg.status = 175U;
    msg.text.assign("TYDEJOCOQFQJFXLHHXG");

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
    msg.setTimeStamp(0.8569575533922625);
    msg.setSource(14105U);
    msg.setSourceEntity(65U);
    msg.setDestination(1836U);
    msg.setDestinationEntity(212U);
    msg.req_id = 27988U;
    msg.status = 163U;
    msg.text.assign("KAHXHSCGDDURVVJMEPRWOZSYIKEBMGCYTAFLELKOIAAWMORQAYNZUCPAYHHMVLFBRYWKAQXHKIUXQTZMBFGRTOZTMBRPWOQPLGCWIDQWYUXQRSPWNLXSVAEDYNMXBUEVMELZRKNHEFIOEJZQBTCGGPYVGATJJMRGFMNBRWSTFOJQIUSSIABSFLPXDUGKL");

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
    msg.setTimeStamp(0.9399527948849374);
    msg.setSource(52219U);
    msg.setSourceEntity(45U);
    msg.setDestination(48536U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("WINWNOCBLTROPSIDYIALCMDNURDVHQGZYYLWIXYTPGDFPUGZIJUMXAWZOELWJLRJNLGRJKBAIGQGREJBYVYATMDPMSWEOCVHAZXHWSPUVCMHFSZTDSBAKTVOXQHNNTVNIXGNFUYXOKMKGXQXUXCVUSBTQQTPNXKZFRZEOKEEVMVCCBMPQFQZOWJDYUULUFKHAGHIZHBDRHBATSPCMLKPGWFHOTKJQISDDVMFA");
    msg.links = 4075022054U;

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
    msg.setTimeStamp(0.48907534697472765);
    msg.setSource(57796U);
    msg.setSourceEntity(131U);
    msg.setDestination(44787U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("OTHWAXJVKZGSTYTMESNCGEBDUKCXGZTNPIAKLSZETKNIRDMRKEWAOJYUYZKJLJVEFAMRVLTTLYNGCDDOMWHAEBKFBQYPUNK");
    msg.links = 523167628U;

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
    msg.setTimeStamp(0.8032808672787257);
    msg.setSource(48447U);
    msg.setSourceEntity(253U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("KAWQYDPJGETPYAVLWWQMVJMDNCAMPCVXCSXIFEDDZGCRBUHHWOTHAJTLGMFTTPUHGYVPYMKGBLWTOKHFJMLNOSLFHEOZNRQZEQSSSJ");
    msg.links = 3770252809U;

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
    msg.setTimeStamp(0.5850540567750014);
    msg.setSource(48983U);
    msg.setSourceEntity(46U);
    msg.setDestination(47210U);
    msg.setDestinationEntity(233U);
    msg.groupname.assign("YJINBCRGKAORLHZRRXBDPQXQLJUWFTANVT");
    msg.action = 54U;
    msg.grouplist.assign("TEHWULHDORMSTWJKRIEZXLWGOXRGYFPNAPLNDCZIBMLNQBNHNVGJWMDEJFPWWYQDPPAQQXTDIUHRSYWPPIVSSDMXXRFCBCVUVOHLUOJWUSMDSOAEKRPJQVFLAXZBEAEGNBVAKTZQOUVROWZGYCW");

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
    msg.setTimeStamp(0.29714607464839093);
    msg.setSource(27164U);
    msg.setSourceEntity(12U);
    msg.setDestination(53114U);
    msg.setDestinationEntity(84U);
    msg.groupname.assign("DWZDXPXHCTLKHWTRHUXFUMXGROLAUAOELQEAWSKFIPZGGKVGAUXNHFM");
    msg.action = 179U;
    msg.grouplist.assign("MZVNVDUEIMXTNEHUIFDHVVFUFTGWYAXEMTSCNKMPUMIERLMAQRGDYKHZBNWHDUSRLVZNUKLQOIOBLAIJDEHQLNRZJRXXYMOUGQCSWSEDBGVEHSNAICIUKPJYFNIDKHNRVSXJKXZDXAKPLTRZITHWLVESAOFPHGWSQCICTQYBTMBFQWPSJKFWYZRPFCJGCECMVOZGWKGUGBB");

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
    msg.setTimeStamp(0.44749998748645414);
    msg.setSource(49695U);
    msg.setSourceEntity(40U);
    msg.setDestination(44641U);
    msg.setDestinationEntity(74U);
    msg.groupname.assign("HSLNLIVEMAZMHKHDKVTIYKHEWEDJJAPRBGEQGWUDSXLBKRXSUOCUPM");
    msg.action = 89U;
    msg.grouplist.assign("HUBFSTBEEMCROWUWAFWOYHYGWNTSNDJMXLJBHEOCRFZNIZRZSTJMQBUXVZSVDWTOIVSKCQAZGRUFAXOICFUEIHCELYJWAGSVXLRXKEPTIAYTRLPDIAFDDBPPQRMHGUKXTBUXDUBVXINWTUILLQZE");

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
    msg.setTimeStamp(0.21474307510234636);
    msg.setSource(22805U);
    msg.setSourceEntity(180U);
    msg.setDestination(55822U);
    msg.setDestinationEntity(99U);
    msg.id = 221U;
    msg.range = 0.2804739417973383;

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
    msg.setTimeStamp(0.5950803407945346);
    msg.setSource(10854U);
    msg.setSourceEntity(252U);
    msg.setDestination(9108U);
    msg.setDestinationEntity(74U);
    msg.id = 126U;
    msg.range = 0.8211625951517144;

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
    msg.setTimeStamp(0.24374725297607425);
    msg.setSource(46004U);
    msg.setSourceEntity(107U);
    msg.setDestination(41234U);
    msg.setDestinationEntity(162U);
    msg.id = 136U;
    msg.range = 0.5655860244533412;

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
    msg.setTimeStamp(0.48723703414528796);
    msg.setSource(44169U);
    msg.setSourceEntity(138U);
    msg.setDestination(65104U);
    msg.setDestinationEntity(231U);
    msg.beacon.assign("GLVXTGXQTFMLAJQRDGXZCIEULCCHNDTQXKHTLRXZVZIBWQQZDARYDMDYCOUCJTTRPMVTQHOSOWYZHBAPOXUNIPZFEMHLKYJVCLKJKOLYZSIANWSVKOSINXOGHWEVGFKEFJNUWGPGIRQDEUBPSPIDJMFESPGSZQQYLSUNJIGAEMKZVFDSPRMFNVAZEAJYOARLDVNKWUJYOWDXTUQBGEBPKELKMRFCVBOXTNHBMFCJRT");
    msg.lat = 0.4886906647589693;
    msg.lon = 0.763913376322676;
    msg.depth = 0.5438614598414727;
    msg.query_channel = 24U;
    msg.reply_channel = 85U;
    msg.transponder_delay = 204U;

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
    msg.setTimeStamp(0.3980987733814153);
    msg.setSource(13879U);
    msg.setSourceEntity(37U);
    msg.setDestination(58472U);
    msg.setDestinationEntity(126U);
    msg.beacon.assign("EZYFTRSRBMPCNRSSDGECUIQSWRZTSNRHZNIVXSEAAROVTKAHWFLKKDTVZQTPGQDEGGSYMAHJATVHQECAIKGQUDWPBCGRYXUGBFZBOSJXWGLMFVPFYMELWUDDYNOVAXBHTQKIWVWPNNJKJVRNABUGKHQQFMNWOEILNZRUMXXITZUPYOHYLBXXQRGEBSPMCCZJVZHWUHCHVILPDYFFLPOBUOC");
    msg.lat = 0.5167660528292698;
    msg.lon = 0.40317598536017707;
    msg.depth = 0.29853517889094816;
    msg.query_channel = 81U;
    msg.reply_channel = 222U;
    msg.transponder_delay = 143U;

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
    msg.setTimeStamp(0.2753249077795039);
    msg.setSource(20339U);
    msg.setSourceEntity(137U);
    msg.setDestination(3393U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("PRZLJWLVVKBJZJTAMKEGQZVCEVQMVIYCEPNHYANEVCFFAIITCYFAFGAJKYTUCROWKKSAUKODUWWFSPUZJLDBWGPLMRICDDKHMRPNXXXQXUSRWRGUYQUSTEPJZHHIESQJXONIOWOSTTMECNSMXYCKHBIPDVZHEYADFEUBHLBTWZDXQETGBIMKPSOAZHOILZMYGVZSRIQYANNJNCPBHHMTRRFGXODB");
    msg.lat = 0.12140767480033943;
    msg.lon = 0.11121270302186337;
    msg.depth = 0.7854309152664934;
    msg.query_channel = 50U;
    msg.reply_channel = 185U;
    msg.transponder_delay = 13U;

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
    msg.setTimeStamp(0.020113040900935797);
    msg.setSource(52247U);
    msg.setSourceEntity(103U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(28U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.35167993990567936);
    msg.setSource(52485U);
    msg.setSourceEntity(35U);
    msg.setDestination(57882U);
    msg.setDestinationEntity(232U);
    msg.op = 16U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IQULYBNXNPTRMDQODNAMQCSHVCUIOBJJZILXTEJCSWFQSXPYPHTPDQYOBGMBIANJHUGCGWZIJBVTNJZYWLVJZNANZWBVUXAYUPWRWAISCROEQPKLKFFGCRMGCABDPXFKLDAPXSSYQPQXLWTOVKAF");
    tmp_msg_0.lat = 0.4475662021309874;
    tmp_msg_0.lon = 0.579044612430884;
    tmp_msg_0.depth = 0.6320815887763405;
    tmp_msg_0.query_channel = 214U;
    tmp_msg_0.reply_channel = 168U;
    tmp_msg_0.transponder_delay = 64U;
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
    msg.setTimeStamp(0.053553162396495546);
    msg.setSource(47660U);
    msg.setSourceEntity(137U);
    msg.setDestination(3217U);
    msg.setDestinationEntity(217U);
    msg.op = 83U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IVTGGLWOXPVKELQJQHQKWWQISSHDYFOSOZIQTSGJXBVRYTPPUSDWZUXRROHFAKKAPXCJXVHVFBEYAGLOZPDZIEBMTHILCBSVDRJWMLXWIFYCKUFEUPUKQNNBZSHEQBCAGWAMMVZTEUBFOMGUHJZGFVDLCNTDEGPG");
    tmp_msg_0.lat = 0.01975021011505107;
    tmp_msg_0.lon = 0.5366478641420458;
    tmp_msg_0.depth = 0.21391704116997845;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 143U;
    tmp_msg_0.transponder_delay = 176U;
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
    msg.setTimeStamp(0.06364960880342818);
    msg.setSource(18992U);
    msg.setSourceEntity(92U);
    msg.setDestination(3770U);
    msg.setDestinationEntity(141U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 165U;
    tmp_msg_0.eta = 46178U;
    tmp_msg_0.info.assign("YZADNPDEWLPRNYLVGOCRQELWBGMORWBDSFYIZJZIRYUSCTCGLVWUVKBGKAGWVQIOQXZQDDPMORUXTZUOCNBOMLXNSJHJXLSTFXKBNFUKFPIFXJMSSWTOTPNDGVKOBKYMVVFXBHRDHKVTLHQGCFBXIPJSVAHAAYTZTUJFPQK");
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
    msg.setTimeStamp(0.23912393158610623);
    msg.setSource(5399U);
    msg.setSourceEntity(167U);
    msg.setDestination(976U);
    msg.setDestinationEntity(218U);
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PKRJPRHTNJDREVGAVSGIHENDCXGUELHQDAVBLBWUDRQABDFOJWHJPWTBZDTNOZZBFCKGKWUXOFGCOXEABOIQTCIVMRKSLMDSKVPE");
    tmp_msg_0.dist = 0.23140957208601542;
    tmp_msg_0.err = 0.7793616778383115;
    tmp_msg_0.ctrl_imp = 0.6104409299495684;
    tmp_msg_0.rel_dir_x = 0.23350916870585792;
    tmp_msg_0.rel_dir_y = 0.4143757241232764;
    tmp_msg_0.rel_dir_z = 0.21856223401679253;
    tmp_msg_0.err_x = 0.6932590232368291;
    tmp_msg_0.err_y = 0.9676772272660464;
    tmp_msg_0.err_z = 0.4807545168353452;
    tmp_msg_0.rf_err_x = 0.7690624352736142;
    tmp_msg_0.rf_err_y = 0.2982051641767707;
    tmp_msg_0.rf_err_z = 0.7464226562046189;
    tmp_msg_0.rf_err_vx = 0.8839459546526874;
    tmp_msg_0.rf_err_vy = 0.79408942486918;
    tmp_msg_0.rf_err_vz = 0.9348638973114212;
    tmp_msg_0.ss_x = 0.7586072525956629;
    tmp_msg_0.ss_y = 0.2692500119341972;
    tmp_msg_0.ss_z = 0.3198167803276166;
    tmp_msg_0.virt_err_x = 0.33054585599379205;
    tmp_msg_0.virt_err_y = 0.6175218782182625;
    tmp_msg_0.virt_err_z = 0.5171796105275637;
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
    msg.setTimeStamp(0.9784961001335845);
    msg.setSource(59623U);
    msg.setSourceEntity(110U);
    msg.setDestination(21483U);
    msg.setDestinationEntity(133U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2703668201636188;
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
    msg.setTimeStamp(0.4862305665595943);
    msg.setSource(58705U);
    msg.setSourceEntity(96U);
    msg.setDestination(60641U);
    msg.setDestinationEntity(234U);
    msg.op = 14U;
    msg.system.assign("RQMKEWCAJYVUAKJFJSFNUYOKLIXILQTWTPHHVUFDSUQYBWEJGUBMBNPMDNXASEOZHCVVCBEUQTLGZMUYJTRJPTXHGS");
    msg.range = 0.07792461308893628;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 250U;
    tmp_msg_0.op = 11U;
    tmp_msg_0.err_mean = 0.7892733760096905;
    tmp_msg_0.dist_min_abs = 0.542496733051008;
    tmp_msg_0.dist_min_mean = 0.8179310153335312;
    tmp_msg_0.roll_rate_mean = 0.10893234924025907;
    tmp_msg_0.time = 0.6262901553740782;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 245U;
    tmp_tmp_msg_0_0.lon_gain = 0.8216837046600622;
    tmp_tmp_msg_0_0.lat_gain = 0.9591482072435817;
    tmp_tmp_msg_0_0.bond_thick = 0.9226211607056136;
    tmp_tmp_msg_0_0.lead_gain = 0.31421732998649177;
    tmp_tmp_msg_0_0.deconfl_gain = 0.4908648327759315;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.8255545389147124;
    tmp_tmp_msg_0_0.safe_dist = 0.32833767610119846;
    tmp_tmp_msg_0_0.deconflict_offset = 0.8090561958733046;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.7451273353118132;
    tmp_tmp_msg_0_0.accel_lim_x = 0.3339357050134414;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.43547242806346365);
    msg.setSource(18679U);
    msg.setSourceEntity(115U);
    msg.setDestination(47294U);
    msg.setDestinationEntity(104U);
    msg.op = 202U;
    msg.system.assign("YIPFPNXISOTDPFOCILBEYJCNBOPSZKECHUSBLLZVMOFXZFIBJVQUFRLIQEXRHGGAWRQUNWUMNQOEKXHQPSNRWTOJQZENKLJHCKBGXDAGYMCXVSBLCLSSVQRVDTFGJNQAPUTKJAPWZGTYYDTZGMKCHMBYLJVAP");
    msg.range = 0.4083959300849217;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GASYHUSJTLHQTOACELNBRVOKXWDMEGEQFICXBQLXNUMIUGENQDCYQAISVEDJEDIFZNHBXWWLPNDVHJTVIUFBLENZFHMOXBQMRDSKMXYALVMMPRCDBUVIYRGPPYVCFLVKPFURRFJHAKSPWAWROYZWRSTLZNGN");
    tmp_msg_0.description.assign("AQBIMBWIGDBOEWEOTUWHCMDHWVMLVXTPTZVKFUDHKTXMBSACMLSQVPIIAJPIIBRZCGRWZDATVSOLAKRKATKFWZQFRNCRYZHPQSNBFWDIHDTXLJDSUPQSSGTPEVNH");
    tmp_msg_0.vnamespace.assign("HXBHPLVTGDXJVACTGDNXGCCIORSAMKHIXKEQEUDNJSXSYMUAQQSUEURPFHCBJTRIMKPEWLZVJDIFYNBIOGQGXEFJRTLEBIXLAWWJNNDECCUAGRTWRHPMOOCJFDBBLZRJBVDQWKSKMUHTDYSKFETBKNNVUICQYSRGOOMZQVYSVUXBPIKSTVDCYAKWPPU");
    tmp_msg_0.start_man_id.assign("UIXCPCJGMPWAEAILNT");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("LYXBPRZYZUHHJBSULDFLBHRYXVFRHQVLCPRGUBMMKCITTLEJVWABLJH");
    tmp_tmp_msg_0_0.dest_man.assign("ERUZAFCSCDPVQUIJLBPDWZCJPRLCQCZGGXUZPBFVUKS");
    tmp_tmp_msg_0_0.conditions.assign("WKKEAYHIICJXWULRPXTFWCOOXBCNPSDEKAITAXZAIDLJCQIYMNEOQOAJHNVVOGCIJTGUPFANXWPQSOTVWGQYADVHVMUORLDMNMOQSKHCENFPFAHIVUUXZQOGXLKZNPVMPHQSMDSMKBJBDZGS");
    IMC::Calibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 30702U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::EntityState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 7U;
    tmp_tmp_msg_0_1.flags = 98U;
    tmp_tmp_msg_0_1.description.assign("BIEQLONQEYVNNJKOHQRMRRLRWHCZKAWVXICXTAFKHVXGYJSMDAFJQPIZIDKGZDEBGPLCEBKAHZFRBEDOARZRXJNVW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::OperationalLimits tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.mask = 208U;
    tmp_tmp_msg_0_2.max_depth = 0.7289430389341495;
    tmp_tmp_msg_0_2.min_altitude = 0.4648449999323243;
    tmp_tmp_msg_0_2.max_altitude = 0.2817131912708025;
    tmp_tmp_msg_0_2.min_speed = 0.6553717835481299;
    tmp_tmp_msg_0_2.max_speed = 0.5305261607609305;
    tmp_tmp_msg_0_2.max_vrate = 0.5814903359429272;
    tmp_tmp_msg_0_2.lat = 0.6462643803761458;
    tmp_tmp_msg_0_2.lon = 0.5544146300840578;
    tmp_tmp_msg_0_2.orientation = 0.6784709292022717;
    tmp_tmp_msg_0_2.width = 0.2539737396921341;
    tmp_tmp_msg_0_2.length = 0.12255229661544342;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.6452488756575291);
    msg.setSource(51192U);
    msg.setSourceEntity(214U);
    msg.setDestination(35468U);
    msg.setDestinationEntity(166U);
    msg.op = 220U;
    msg.system.assign("ZJARQFLGUGCHYOSZUENXNPYBKFPZAVMDOPULAMXKXIQMXFKZVMVIJGKHWHOMOZUZMYPKAJZWVTWHHVODSVOAWLDJIWDXODJPCRRGNLNTLEGTRCAWZMNJQWMMQXNVBQQHFQEYDFEY");
    msg.range = 0.09873632650995612;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("IJJWZWTWBPGOFCSDSPYSFANABUEVXIROTUPPJVTYSLSEYCDIYOTNGDGPFHMNMVCHSXUCMSAFTWRXEXCSQWTQLNLQYHIFBXBEUKELQFZHJUXZRCUDEZRGISQIUZBAIUDAR");
    const char tmp_tmp_msg_0_0[] = {-56, 89, 6, 104, -100, -108, 125, -54, -110, -101, -57, -52, -18, 12, 122, 60, -52, 118, 27, 15, -92, 53, -16, -106, -102, 1, 9, -108, 21, -9, -116, 15, -39, -69, 48, -74, 67, 55, -117, 29, -118, -91, -13, -86, -72, 29, 28, -62, -76, 100, 30, -6, 107, 46, -17, -55, -117, -32, -93, -77, 94, -42, 59, 97, 33, 108, 102, -45, 11, 54, -119, -6, -34, -78, -67, -66, -84, -105, 109, 118, -1, -14, -28, -69, -6, 116, -96, 101, 5, -111, 44, 61, 65, 65, 68, -15, 94, -94, 114, 50, -20, 46, -15, 86, 14, -105, -110, 73, 65, -79, -17, 100, 18, -110, -124, 26, -101, -107, 62, 123, -44, -93, -34, -63, -86, 102, 42, 40, -9, 37, -128, 109, -27, 96, 27, 18, 86, 38, -103, -53, -6, -74, -86, 18, 106};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.34769367733890855);
    msg.setSource(5962U);
    msg.setSourceEntity(179U);
    msg.setDestination(1524U);
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
    msg.setTimeStamp(0.000429009515857004);
    msg.setSource(60186U);
    msg.setSourceEntity(78U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.6222821841866807);
    msg.setSource(48481U);
    msg.setSourceEntity(7U);
    msg.setDestination(15012U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.337619162729601);
    msg.setSource(65013U);
    msg.setSourceEntity(185U);
    msg.setDestination(24639U);
    msg.setDestinationEntity(134U);
    msg.list.assign("JEEUHZWVATUAZRVYDTWXXGYZZIVBPWBNKOSLICLIJKQIXEVKYLAZPOXLDUPCGUMRCYIDNXSFVOAKGOBNRQFLSLICZFYHVVNFHPMJZJNHQRVMFLZALJGHLBWAPSNXATBUNGURRMEQBECCVMTSKDPPUMKUCWJKJTBOCSUFJOTQGCYEYHREIDOFAWETQEPWRGBYMNTADSQXQIVXBMXDHOQJZIXBEFKKSMQCGFWGIHDGNRSHFSDTKLMPHRJUDPAYY");

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
    msg.setTimeStamp(0.7457225525422932);
    msg.setSource(53768U);
    msg.setSourceEntity(207U);
    msg.setDestination(20002U);
    msg.setDestinationEntity(89U);
    msg.list.assign("FJOIOIZFJNFVQRAXBNRYUXYEFPIHJEJCDCEKELDWFTZANRCVSWPGPJNWUARNQMXUQBOTLQLSITPCYXAZGFOALUYBOEBMOPKLVQSCCKSYDDSJEPARXTRYHSDUIRXEDUNPGHOKGAHHWZGATKOVGCDXXHNSHIABEDZGZVVQJMGJFRLEOKEGZFNHFGYWVSMWHDQKPLVCUNKB");

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
    msg.setTimeStamp(0.6713874955337308);
    msg.setSource(1751U);
    msg.setSourceEntity(235U);
    msg.setDestination(23729U);
    msg.setDestinationEntity(149U);
    msg.list.assign("QLSDGSLTLBPFPVKOWNDHBVUIMTLHWSQZXUQZJZWKEXVGDHDBZTAVWNYZFCDEVPTRGUYTBKUMJTHNIBRSNHPNWVXHGMLLUVHJOOEFFQRZJUYGCKIJLLTBCRQEHXSDFCFYYMZOBJSNJUCAWMLAYBIZVFIPTUSRJOIPPIIYGDBCNZTEDRAYMKQQFQPKOGIGEOAZNLEKXKFODNRUEMARCGFKAEAVYXHQOCSMWIHJMXGV");

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
    msg.setTimeStamp(0.5930029692101841);
    msg.setSource(51793U);
    msg.setSourceEntity(103U);
    msg.setDestination(1450U);
    msg.setDestinationEntity(14U);
    msg.value = -5070;

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
    msg.setTimeStamp(0.15337632568745885);
    msg.setSource(7172U);
    msg.setSourceEntity(173U);
    msg.setDestination(10015U);
    msg.setDestinationEntity(5U);
    msg.value = 1512;

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
    msg.setTimeStamp(0.8791138928685589);
    msg.setSource(32318U);
    msg.setSourceEntity(102U);
    msg.setDestination(33786U);
    msg.setDestinationEntity(213U);
    msg.value = -22796;

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
    msg.setTimeStamp(0.008481975969031885);
    msg.setSource(21832U);
    msg.setSourceEntity(161U);
    msg.setDestination(22404U);
    msg.setDestinationEntity(155U);
    msg.value = 0.46732923922806;

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
    msg.setTimeStamp(0.43138419298745545);
    msg.setSource(35100U);
    msg.setSourceEntity(68U);
    msg.setDestination(10675U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9457498233024545;

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
    msg.setTimeStamp(0.3843865354112407);
    msg.setSource(18240U);
    msg.setSourceEntity(9U);
    msg.setDestination(445U);
    msg.setDestinationEntity(97U);
    msg.value = 0.2598044812986806;

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
    msg.setTimeStamp(0.6135946709278844);
    msg.setSource(22936U);
    msg.setSourceEntity(155U);
    msg.setDestination(25624U);
    msg.setDestinationEntity(45U);
    msg.value = 0.4538148536321651;

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
    msg.setTimeStamp(0.26295351659763555);
    msg.setSource(4982U);
    msg.setSourceEntity(200U);
    msg.setDestination(4092U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5490205596137298;

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
    msg.setTimeStamp(0.7106769562816453);
    msg.setSource(35874U);
    msg.setSourceEntity(216U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(138U);
    msg.value = 0.45604204497078893;

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
    msg.setTimeStamp(0.9088741968310678);
    msg.setSource(50658U);
    msg.setSourceEntity(43U);
    msg.setDestination(22596U);
    msg.setDestinationEntity(94U);
    msg.validity = 10635U;
    msg.type = 131U;
    msg.utc_year = 59809U;
    msg.utc_month = 189U;
    msg.utc_day = 62U;
    msg.utc_time = 0.23628190934824167;
    msg.lat = 0.420500076314382;
    msg.lon = 0.7549437481550962;
    msg.height = 0.8022508008105831;
    msg.satellites = 122U;
    msg.cog = 0.8869158224149534;
    msg.sog = 0.6418939095974119;
    msg.hdop = 0.21934693897713076;
    msg.vdop = 0.07363458896949115;
    msg.hacc = 0.5780632996830668;
    msg.vacc = 0.18206935903328214;

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
    msg.setTimeStamp(0.9598846791866746);
    msg.setSource(40430U);
    msg.setSourceEntity(56U);
    msg.setDestination(21711U);
    msg.setDestinationEntity(136U);
    msg.validity = 10170U;
    msg.type = 6U;
    msg.utc_year = 29381U;
    msg.utc_month = 101U;
    msg.utc_day = 79U;
    msg.utc_time = 0.928088191804948;
    msg.lat = 0.12065769967076145;
    msg.lon = 0.19113579008122095;
    msg.height = 0.11350310414283482;
    msg.satellites = 102U;
    msg.cog = 0.8386146080384631;
    msg.sog = 0.7391676073943022;
    msg.hdop = 0.707678381789287;
    msg.vdop = 0.4023325347414958;
    msg.hacc = 0.27931811700225573;
    msg.vacc = 0.11238643353908218;

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
    msg.setTimeStamp(0.3095434310196914);
    msg.setSource(13928U);
    msg.setSourceEntity(145U);
    msg.setDestination(57169U);
    msg.setDestinationEntity(96U);
    msg.validity = 28481U;
    msg.type = 185U;
    msg.utc_year = 15064U;
    msg.utc_month = 60U;
    msg.utc_day = 167U;
    msg.utc_time = 0.4424521007770307;
    msg.lat = 0.6001177802753123;
    msg.lon = 0.535737754099313;
    msg.height = 0.8151416529343921;
    msg.satellites = 206U;
    msg.cog = 0.9219399825698213;
    msg.sog = 0.089722459700046;
    msg.hdop = 0.9420971412414844;
    msg.vdop = 0.7777125617199683;
    msg.hacc = 0.8508492247172034;
    msg.vacc = 0.7300371135899864;

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
    msg.setTimeStamp(0.2747513417455817);
    msg.setSource(21883U);
    msg.setSourceEntity(157U);
    msg.setDestination(60985U);
    msg.setDestinationEntity(25U);
    msg.time = 0.32799474789255356;
    msg.phi = 0.4456824045572325;
    msg.theta = 0.5542500960543694;
    msg.psi = 0.5485247427178874;
    msg.psi_magnetic = 0.967312030527475;

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
    msg.setTimeStamp(0.7256791747420839);
    msg.setSource(19291U);
    msg.setSourceEntity(192U);
    msg.setDestination(55120U);
    msg.setDestinationEntity(53U);
    msg.time = 0.5642358887444118;
    msg.phi = 0.5129727497943269;
    msg.theta = 0.4275561186129292;
    msg.psi = 0.6843187665636347;
    msg.psi_magnetic = 0.689632979301347;

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
    msg.setTimeStamp(0.6455944930222801);
    msg.setSource(16605U);
    msg.setSourceEntity(49U);
    msg.setDestination(62040U);
    msg.setDestinationEntity(237U);
    msg.time = 0.3981796232146305;
    msg.phi = 0.31296586698259776;
    msg.theta = 0.5992576553605663;
    msg.psi = 0.5602515863694039;
    msg.psi_magnetic = 0.6908972814938884;

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
    msg.setTimeStamp(0.11900329151958311);
    msg.setSource(54585U);
    msg.setSourceEntity(238U);
    msg.setDestination(29338U);
    msg.setDestinationEntity(6U);
    msg.time = 0.9716309668308792;
    msg.x = 0.7233480522997848;
    msg.y = 0.09180040410608059;
    msg.z = 0.35586343065729953;
    msg.timestep = 0.1661532459145374;

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
    msg.setTimeStamp(0.17156743388808304);
    msg.setSource(36753U);
    msg.setSourceEntity(252U);
    msg.setDestination(8999U);
    msg.setDestinationEntity(160U);
    msg.time = 0.013798788010913943;
    msg.x = 0.6296870178948366;
    msg.y = 0.9216809566348388;
    msg.z = 0.4453579190041659;
    msg.timestep = 0.27821199756439485;

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
    msg.setTimeStamp(0.3388779301791188);
    msg.setSource(46971U);
    msg.setSourceEntity(59U);
    msg.setDestination(64239U);
    msg.setDestinationEntity(175U);
    msg.time = 0.2590477248993913;
    msg.x = 0.19452149670358543;
    msg.y = 0.41483900552866626;
    msg.z = 0.6858864158470436;
    msg.timestep = 0.37229791762439535;

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
    msg.setTimeStamp(0.8577328861419194);
    msg.setSource(37875U);
    msg.setSourceEntity(83U);
    msg.setDestination(60435U);
    msg.setDestinationEntity(188U);
    msg.time = 0.4795381052549573;
    msg.x = 0.8213205719673762;
    msg.y = 0.16402031796779415;
    msg.z = 0.2939735058466004;

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
    msg.setTimeStamp(0.4444910833946847);
    msg.setSource(53262U);
    msg.setSourceEntity(180U);
    msg.setDestination(65404U);
    msg.setDestinationEntity(204U);
    msg.time = 0.7047636068849099;
    msg.x = 0.7511502058251421;
    msg.y = 0.3264683634333565;
    msg.z = 0.431134553218096;

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
    msg.setTimeStamp(0.5502981302719409);
    msg.setSource(56071U);
    msg.setSourceEntity(254U);
    msg.setDestination(25319U);
    msg.setDestinationEntity(225U);
    msg.time = 0.13267037059952136;
    msg.x = 0.9918070774043891;
    msg.y = 0.9055496026040831;
    msg.z = 0.33823232197919795;

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
    msg.setTimeStamp(0.3611333386161888);
    msg.setSource(61516U);
    msg.setSourceEntity(140U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(207U);
    msg.time = 0.706705184818549;
    msg.x = 0.7582443538394626;
    msg.y = 0.8998745932056856;
    msg.z = 0.9467957156463815;

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
    msg.setTimeStamp(0.5566808621084083);
    msg.setSource(43431U);
    msg.setSourceEntity(197U);
    msg.setDestination(5504U);
    msg.setDestinationEntity(238U);
    msg.time = 0.8131188905991216;
    msg.x = 0.8426889068912754;
    msg.y = 0.712148569913015;
    msg.z = 0.19665242826306595;

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
    msg.setTimeStamp(0.41000164194817723);
    msg.setSource(52017U);
    msg.setSourceEntity(211U);
    msg.setDestination(23418U);
    msg.setDestinationEntity(182U);
    msg.time = 0.3641825548011449;
    msg.x = 0.682846742566307;
    msg.y = 0.5744463754864162;
    msg.z = 0.0412291398821093;

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
    msg.setTimeStamp(0.864983227464768);
    msg.setSource(63785U);
    msg.setSourceEntity(155U);
    msg.setDestination(46166U);
    msg.setDestinationEntity(56U);
    msg.time = 0.40130277623718014;
    msg.x = 0.18988505267445122;
    msg.y = 0.5203905296708726;
    msg.z = 0.22020583228540702;

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
    msg.setTimeStamp(0.09622855201718616);
    msg.setSource(9548U);
    msg.setSourceEntity(168U);
    msg.setDestination(8113U);
    msg.setDestinationEntity(28U);
    msg.time = 0.17163746493592869;
    msg.x = 0.6979663463324557;
    msg.y = 0.5442280463466759;
    msg.z = 0.6916229466328542;

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
    msg.setTimeStamp(0.6403164019203155);
    msg.setSource(29782U);
    msg.setSourceEntity(115U);
    msg.setDestination(23068U);
    msg.setDestinationEntity(168U);
    msg.time = 0.7167349894104216;
    msg.x = 0.018702445367953846;
    msg.y = 0.9231112835510997;
    msg.z = 0.7998671029189541;

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
    msg.setTimeStamp(0.5109003084085216);
    msg.setSource(52007U);
    msg.setSourceEntity(61U);
    msg.setDestination(3837U);
    msg.setDestinationEntity(132U);
    msg.validity = 30U;
    msg.x = 0.7177765419272634;
    msg.y = 0.5048697854739169;
    msg.z = 0.15397735098023868;

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
    msg.setTimeStamp(0.9936300602157264);
    msg.setSource(10622U);
    msg.setSourceEntity(124U);
    msg.setDestination(32981U);
    msg.setDestinationEntity(216U);
    msg.validity = 218U;
    msg.x = 0.4070974368578889;
    msg.y = 0.14585914341524386;
    msg.z = 0.35564664923768363;

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
    msg.setTimeStamp(0.708638796167342);
    msg.setSource(34473U);
    msg.setSourceEntity(202U);
    msg.setDestination(41975U);
    msg.setDestinationEntity(67U);
    msg.validity = 101U;
    msg.x = 0.04471253414224596;
    msg.y = 0.035460574255609445;
    msg.z = 0.5497069755045236;

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
    msg.setTimeStamp(0.7460999324834829);
    msg.setSource(24082U);
    msg.setSourceEntity(244U);
    msg.setDestination(672U);
    msg.setDestinationEntity(225U);
    msg.validity = 210U;
    msg.x = 0.4366217366080596;
    msg.y = 0.7740991690889641;
    msg.z = 0.15352025531192526;

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
    msg.setTimeStamp(0.7507838082337204);
    msg.setSource(65177U);
    msg.setSourceEntity(61U);
    msg.setDestination(46326U);
    msg.setDestinationEntity(129U);
    msg.validity = 212U;
    msg.x = 0.2126725057176957;
    msg.y = 0.8108504252550737;
    msg.z = 0.6685854054751479;

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
    msg.setTimeStamp(0.43574673487984805);
    msg.setSource(35051U);
    msg.setSourceEntity(72U);
    msg.setDestination(49122U);
    msg.setDestinationEntity(126U);
    msg.validity = 29U;
    msg.x = 0.4892215879691396;
    msg.y = 0.9284608700163922;
    msg.z = 0.2978270796783332;

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
    msg.setTimeStamp(0.4112974703940153);
    msg.setSource(14811U);
    msg.setSourceEntity(9U);
    msg.setDestination(39490U);
    msg.setDestinationEntity(131U);
    msg.time = 0.7615538655246431;
    msg.x = 0.7837749512604146;
    msg.y = 0.7671434312023547;
    msg.z = 0.9075604167695218;

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
    msg.setTimeStamp(0.6420664029160823);
    msg.setSource(39609U);
    msg.setSourceEntity(31U);
    msg.setDestination(1240U);
    msg.setDestinationEntity(162U);
    msg.time = 0.843279496840855;
    msg.x = 0.4379663409798643;
    msg.y = 0.8799522265207803;
    msg.z = 0.9891691958329559;

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
    msg.setTimeStamp(0.9762976525869531);
    msg.setSource(4699U);
    msg.setSourceEntity(204U);
    msg.setDestination(62329U);
    msg.setDestinationEntity(101U);
    msg.time = 0.8799889232801529;
    msg.x = 0.30262014791467284;
    msg.y = 0.41177502835265334;
    msg.z = 0.5327872093519901;

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
    msg.setTimeStamp(0.16603737218266368);
    msg.setSource(20639U);
    msg.setSourceEntity(16U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(127U);
    msg.validity = 12U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8860607146459339;
    tmp_msg_0.beam_height = 0.6731143412598726;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4676097493907061;

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
    msg.setTimeStamp(0.6105335631508058);
    msg.setSource(54490U);
    msg.setSourceEntity(204U);
    msg.setDestination(8533U);
    msg.setDestinationEntity(162U);
    msg.validity = 225U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8554732812883167;
    tmp_msg_0.y = 0.010458326098722326;
    tmp_msg_0.z = 0.3432590358577682;
    tmp_msg_0.phi = 0.9923250112122081;
    tmp_msg_0.theta = 0.7959317555370041;
    tmp_msg_0.psi = 0.4102237510975224;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.034025904365991955;

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
    msg.setTimeStamp(0.24890600384623818);
    msg.setSource(47795U);
    msg.setSourceEntity(35U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(74U);
    msg.validity = 27U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.12544880279591297;
    tmp_msg_0.y = 0.35505325846053504;
    tmp_msg_0.z = 0.6977057836690732;
    tmp_msg_0.phi = 0.31735173114139714;
    tmp_msg_0.theta = 0.9856464897850584;
    tmp_msg_0.psi = 0.12552090559211315;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8365230057482749;
    tmp_msg_1.beam_height = 0.9608221300246815;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7031627612547654;

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
    msg.setTimeStamp(0.19536640334219357);
    msg.setSource(31662U);
    msg.setSourceEntity(89U);
    msg.setDestination(60606U);
    msg.setDestinationEntity(58U);
    msg.value = 0.9407248481348935;

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
    msg.setTimeStamp(0.8102381483766358);
    msg.setSource(6706U);
    msg.setSourceEntity(223U);
    msg.setDestination(62580U);
    msg.setDestinationEntity(153U);
    msg.value = 0.9766301775021455;

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
    msg.setTimeStamp(0.38584718284617026);
    msg.setSource(17458U);
    msg.setSourceEntity(168U);
    msg.setDestination(59225U);
    msg.setDestinationEntity(43U);
    msg.value = 0.32911784366791674;

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
    msg.setTimeStamp(0.23316427873266132);
    msg.setSource(38197U);
    msg.setSourceEntity(27U);
    msg.setDestination(60544U);
    msg.setDestinationEntity(96U);
    msg.value = 0.08907805331814522;

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
    msg.setTimeStamp(0.30030465585710986);
    msg.setSource(63963U);
    msg.setSourceEntity(125U);
    msg.setDestination(8175U);
    msg.setDestinationEntity(14U);
    msg.value = 0.2456168664081505;

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
    msg.setTimeStamp(0.10973940651089298);
    msg.setSource(54446U);
    msg.setSourceEntity(239U);
    msg.setDestination(33150U);
    msg.setDestinationEntity(1U);
    msg.value = 0.5403884097746164;

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
    msg.setTimeStamp(0.7549796455109755);
    msg.setSource(20977U);
    msg.setSourceEntity(111U);
    msg.setDestination(44973U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6243897317789467;

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
    msg.setTimeStamp(0.8126696762166279);
    msg.setSource(57731U);
    msg.setSourceEntity(190U);
    msg.setDestination(52005U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5915011358626411;

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
    msg.setTimeStamp(0.8797897186278861);
    msg.setSource(19037U);
    msg.setSourceEntity(91U);
    msg.setDestination(51778U);
    msg.setDestinationEntity(29U);
    msg.value = 0.2644154573589871;

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
    msg.setTimeStamp(0.06404774999012208);
    msg.setSource(44147U);
    msg.setSourceEntity(201U);
    msg.setDestination(7732U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5428413259435373;

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
    msg.setTimeStamp(0.3067818738699647);
    msg.setSource(42734U);
    msg.setSourceEntity(79U);
    msg.setDestination(40147U);
    msg.setDestinationEntity(81U);
    msg.value = 0.1334353959880039;

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
    msg.setTimeStamp(0.5670890559398505);
    msg.setSource(25352U);
    msg.setSourceEntity(73U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(216U);
    msg.value = 0.09152525015156265;

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
    msg.setTimeStamp(0.9447360057289607);
    msg.setSource(54930U);
    msg.setSourceEntity(184U);
    msg.setDestination(45927U);
    msg.setDestinationEntity(246U);
    msg.value = 0.23368736304909732;

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
    msg.setTimeStamp(0.13095008849141843);
    msg.setSource(8456U);
    msg.setSourceEntity(254U);
    msg.setDestination(15027U);
    msg.setDestinationEntity(181U);
    msg.value = 0.003439281245102954;

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
    msg.setTimeStamp(0.0937857462768179);
    msg.setSource(58589U);
    msg.setSourceEntity(245U);
    msg.setDestination(47769U);
    msg.setDestinationEntity(65U);
    msg.value = 0.22898099981597253;

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
    msg.setTimeStamp(0.6653490126047089);
    msg.setSource(50735U);
    msg.setSourceEntity(62U);
    msg.setDestination(222U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6249485225772171;

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
    msg.setTimeStamp(0.3078375553732642);
    msg.setSource(8375U);
    msg.setSourceEntity(106U);
    msg.setDestination(54543U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7185587763847403;

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
    msg.setTimeStamp(0.4154095101806985);
    msg.setSource(14675U);
    msg.setSourceEntity(245U);
    msg.setDestination(3226U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8766619998198542;

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
    msg.setTimeStamp(0.35937792079250686);
    msg.setSource(15360U);
    msg.setSourceEntity(88U);
    msg.setDestination(6950U);
    msg.setDestinationEntity(189U);
    msg.value = 0.22411796330067946;

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
    msg.setTimeStamp(0.6502985035070805);
    msg.setSource(30459U);
    msg.setSourceEntity(72U);
    msg.setDestination(28700U);
    msg.setDestinationEntity(181U);
    msg.value = 0.9626856256852762;

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
    msg.setTimeStamp(0.6987358601475027);
    msg.setSource(46286U);
    msg.setSourceEntity(142U);
    msg.setDestination(58043U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6216923589743262;

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
    msg.setTimeStamp(0.290253019491325);
    msg.setSource(11302U);
    msg.setSourceEntity(153U);
    msg.setDestination(43935U);
    msg.setDestinationEntity(173U);
    msg.value = 0.48800793871147674;

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
    msg.setTimeStamp(0.36600235623586286);
    msg.setSource(52804U);
    msg.setSourceEntity(193U);
    msg.setDestination(2537U);
    msg.setDestinationEntity(174U);
    msg.value = 0.38922947103001204;

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
    msg.setTimeStamp(0.470110951159179);
    msg.setSource(17930U);
    msg.setSourceEntity(32U);
    msg.setDestination(15333U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5742901901863152;

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
    msg.setTimeStamp(0.9275166444608527);
    msg.setSource(22613U);
    msg.setSourceEntity(31U);
    msg.setDestination(64183U);
    msg.setDestinationEntity(168U);
    msg.direction = 0.07075312836395731;
    msg.speed = 0.34400025420291236;
    msg.turbulence = 0.7225252318340776;

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
    msg.setTimeStamp(0.19592881988070643);
    msg.setSource(3707U);
    msg.setSourceEntity(136U);
    msg.setDestination(39257U);
    msg.setDestinationEntity(101U);
    msg.direction = 0.9655410678398693;
    msg.speed = 0.2126281211293124;
    msg.turbulence = 0.3363317388334023;

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
    msg.setTimeStamp(0.2516217361589882);
    msg.setSource(48932U);
    msg.setSourceEntity(74U);
    msg.setDestination(19330U);
    msg.setDestinationEntity(47U);
    msg.direction = 0.4119791253209403;
    msg.speed = 0.8594280532807211;
    msg.turbulence = 0.35732263541002984;

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
    msg.setTimeStamp(0.0061611462802965145);
    msg.setSource(15326U);
    msg.setSourceEntity(111U);
    msg.setDestination(27550U);
    msg.setDestinationEntity(132U);
    msg.value = 0.43236603294761367;

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
    msg.setTimeStamp(0.025918668193791294);
    msg.setSource(35253U);
    msg.setSourceEntity(63U);
    msg.setDestination(40297U);
    msg.setDestinationEntity(208U);
    msg.value = 0.06859315081634187;

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
    msg.setTimeStamp(0.8818519752093287);
    msg.setSource(49133U);
    msg.setSourceEntity(97U);
    msg.setDestination(18238U);
    msg.setDestinationEntity(86U);
    msg.value = 0.20860114228718352;

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
    msg.setTimeStamp(0.5244827456214374);
    msg.setSource(6929U);
    msg.setSourceEntity(190U);
    msg.setDestination(38528U);
    msg.setDestinationEntity(102U);
    msg.value.assign("GORXOEQSSXVXLPCEJBUXLHCFTTHGTTWUFRYQAUVPJJXXTWBMSCLILPIUKFAFFPKLXPGIHEVHVDKDYTFWTBPQCLCJLYFMAGVTYBLVDZXCSEUQNEJIBKYWEOONLLQUAESHNIDIKHHENBAYRUNJFHGDKOFDNWXRFXSMTYWISBPMPAVNJJVRSHARVWKDEZZWBDAO");

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
    msg.setTimeStamp(0.030490793394763682);
    msg.setSource(13403U);
    msg.setSourceEntity(223U);
    msg.setDestination(36667U);
    msg.setDestinationEntity(45U);
    msg.value.assign("WCXGNYQYHUVGXTIOSJNRKHCVNABZRTQPITNVXKEGORZSMYWZSOIVPQGPWZPHHGYWLHEECCMPMDYIUTCYBOWAIIBXADGICVPSGXDSNVHBEJMFAYTVALITOTMAWRFTJCFFPJOBKSVEWZFGOCXETLIKZXDQORPQUDUQULLMDNKOQSWNUKBMANXVYTJEBZBDMKMUKDFCREUB");

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
    msg.setTimeStamp(0.8163880952651923);
    msg.setSource(12283U);
    msg.setSourceEntity(26U);
    msg.setDestination(25304U);
    msg.setDestinationEntity(9U);
    msg.value.assign("TUCYDVTLEHMYKANMGAZLMRBYAEWBRMSSWDRJOSHHCKEBQOSQCHPFVNVRPUHFWNUNPGOGPHLQPTCONAKJDBIDBNXVCDOHWNZMWAJIKKEEFZMEBNVHCGLFSIIQQFYLKTCTHNKFUVXXEVLYGFUIOWGIEZBLTPGPGTAULVDDXORUOJIBUICJYKJWPQXZMTCXMQLXMXIA");

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
    msg.setTimeStamp(0.5410764903535559);
    msg.setSource(54451U);
    msg.setSourceEntity(170U);
    msg.setDestination(24741U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {42, -65, -50, 35, 8, 12, -21, -115, -45, 8, 42, -79, 65, 4};
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
    msg.setTimeStamp(0.19983778098494098);
    msg.setSource(45350U);
    msg.setSourceEntity(83U);
    msg.setDestination(4803U);
    msg.setDestinationEntity(253U);
    const char tmp_msg_0[] = {69, 99, -52, -80, -48, -5, 107, -90, -40, -45, -27, -78, -35, 51, -50, 122, -13, 58, -21, -53, 120, -110, -10, -66, 95, -4, 77, -52, -66, 111, 68, 2, -84, 14, 42, -41, 49, 102, 125, 10, -54, 64, 18, -59, 106, -11, 39, -69, 51, -98, 64, 13, -36, 117, 82, 25, -46, -93, 125, 72, -76, 69, -35, 15, -119, -5, 5, 32, 24, 94, -102, -119, 63, 98, -49, 104, -104, -18, -107, 104, 92, 65, -53, 73, -111, -104, 71, 98, -4, 75, -43, -88, 87, -14, -98, -36, 78, -28, 37, -21, -8, -3, 75, -58, -28, 63, 41, -22, 57, 98, -42, 88, -79, 5, -97, 55, 47, -17, 122, 61, 116, -122, -42, 10, 81, -41, -49, 79, 62, 58, 115, 13, 94, 36, -58, -75, 43, -2, -107, -120};
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
    msg.setTimeStamp(0.6375472473327688);
    msg.setSource(29345U);
    msg.setSourceEntity(8U);
    msg.setDestination(24703U);
    msg.setDestinationEntity(179U);
    const char tmp_msg_0[] = {-89, 75, 112, 110, 76, 93, 23, -3, 78, -122, 38, -4, 45, -56, 14, 106, -115, -60, 24, 62, 115, 78, 84, 91, 34, -16, 97, -114, -115, 3, 80, -111, 28, -20, -85, 47, 113, -33, -68, -42, -67, 85, 58, 65, 97, -78, -25, 56, 97, 31, 126, 90, -49, -125, -98, -51, 70, 93, 97, 37, -73, 65, -74, -30, -117, -59, -51, -126, -19, 1, -23, -57, -116, -39, 94, 13, 83, -23, 44, 122, 26, 13, -124, -123, 109, -79, 85, -6, -42, 119, -103, -5, -39, -4, 1, 48, 122, -50, 39, 12, -83, 83, -44, -3, -21, 19, -112, 54, -18, 116, 32, 121, -73, 3, 102, 96, -21, 21, -9, -46, 82, 60, 114, 62, -78};
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
    msg.setTimeStamp(0.0029009871797028852);
    msg.setSource(32140U);
    msg.setSourceEntity(15U);
    msg.setDestination(62085U);
    msg.setDestinationEntity(38U);
    msg.type = 130U;
    msg.frequency = 1979615490U;
    msg.min_range = 35443U;
    msg.max_range = 50304U;
    msg.bits_per_point = 109U;
    msg.scale_factor = 0.881176492473473;
    const char tmp_msg_0[] = {-75, -106, -10, -83, 32, 63, -95, -95, -123, -16, -65, -15, 68, -105, -112, -111, -40, -51, -7, 28, 13, 65, -67, 3, 85, -99, 6, 102, 27, 102, -124, 92, -24, -96, -70, -51, -54, -38, -52, 86, 55, 55, 4, -86, 72, -75, 82, 90, -95, -115, -2, 32, -103, -47, 10, -32, -118, 88, -41, -122, -121, -77, -87, -78, -128, 43, 11, -86, -76, 70, 25, -50, -9, -121, 83, -118, 57, -7, -45, -57, -7, 87, 52, -78, -11, 116, 67, -66, 99, -84, 123, -43, -11, 10, -16, 51, 65, -122, -10, 100, -106, -37, -16, 109, -9, -16, -127, -16, 102, -88, 87, -37, 104, -31, -15, -19, 109, 72, -61, -121, -24, 63, 108, -124, -112, 50, 20, -96, 109, -24, 98, -30, -45, -80, 69, -125, -83, -40, 118, 61, 44, 76, 123, -41, 5, -20, 30, 121, 18, 73, -109, 75, -58, 77, 97, 64, -11, 72, -92, 40, 67, -28, 43, 17, -28, -15, -78, -73, -73, -120, -32, -1, -68, -29, 56, -81, -44, -7, -86, 1, 4, 31, 87, -93, 9, 125, 17, 65, -95, -78, 48, -65, 95, -35, -30, 46, -35, 119, 90, -37, 30, 42, -95, -15, 117, -71, -64, 8, 85, -28, -47, 4, 122, 79, 58, -43, 79, -120};
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
    msg.setTimeStamp(0.5778648487738602);
    msg.setSource(55525U);
    msg.setSourceEntity(122U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(192U);
    msg.type = 176U;
    msg.frequency = 1630209705U;
    msg.min_range = 41659U;
    msg.max_range = 41554U;
    msg.bits_per_point = 100U;
    msg.scale_factor = 0.4358873924783859;
    const char tmp_msg_0[] = {39, 110, 30, 38, 26, 24, -6, -81, -56, -108, 116, 120, 3, 13, 91, 44, -67, 24, -18, 117, 86, -41, -30, 72, -125, 64, -91, 49, 34, -82, 29, -68, -120, -61, -98, 64, -16, -59, -76};
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
    msg.setTimeStamp(0.03373703720705845);
    msg.setSource(40517U);
    msg.setSourceEntity(169U);
    msg.setDestination(37638U);
    msg.setDestinationEntity(105U);
    msg.type = 143U;
    msg.frequency = 2920236048U;
    msg.min_range = 47183U;
    msg.max_range = 45544U;
    msg.bits_per_point = 11U;
    msg.scale_factor = 0.8063091629831991;
    const char tmp_msg_0[] = {-21, -124, -72, -21, 78, -86, -28, 104, 82, 110, 9, 29, 66, -96, 10, -103, -40, -8, -56, -91, -8, 10, 109, 106, -67, 75, -109, -122, 110, -92, -33, -4, -78, -3, 10, -86, -25, -112, -27, -64, -19, -25, 29, 25, -48, -87, 101, -67, -22, 56, -53, -102, 102, 22, -96, 25, 7, -63, 64, 56, 117, 78, 106, -111, -49, 58, -90, -29, 6, -53, 34, -122, 30, 34, 8, -78, -123, -87, 99, 51, -66, -72, -47, -88, -93, 69, -56, 21, 84, -112, 121, 98, -88, 83, 23, -109, -95, -7, 92, -52, -85, -45, -5, -103, -45, 45, 11, 20, -107, 120, 67, -126, 24, 123, 110, 94, -42, -63, 21, 92, -126, 46, -112, -128, 9, -95, -82, -123, 109, -80, -112, 41, -58, -20, -45, 35, -99, 33, 8, -34, -40, -68, 52, -56, -32, -53, -48, 117, 73, -124, -28, 11, -93, 98, 109, -123, -58, 118, 64, -84, -60, -23, -95, 46, -80, 109, 78, 5, 51, 59, -39, -2, 97, 119, 108, 5, -55, -7, 117, -41, 119, 103, 22, 46, 84, -15, -118, 24, -76, 2, 28, 24, 69, -5, 56, 81, 46, -4, 45, -125, -51, -80, -93, -41, 1, -104, 32, 16, -102, 0, -65, -95, 82, 34, 37, 39, -14, 109, -128, 23, -106, 45, -113, -126, -97, 63, -35, 39, 120, 13, 87, 37, 44, -73, -2, 76, -41, -128, 53, -126, 38, -44};
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
    msg.setTimeStamp(0.5024309956965688);
    msg.setSource(2620U);
    msg.setSourceEntity(63U);
    msg.setDestination(23431U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.8812636397413647);
    msg.setSource(31415U);
    msg.setSourceEntity(253U);
    msg.setDestination(16750U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.7879496292689644);
    msg.setSource(16097U);
    msg.setSourceEntity(124U);
    msg.setDestination(61390U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.052232790719277444);
    msg.setSource(35074U);
    msg.setSourceEntity(27U);
    msg.setDestination(22425U);
    msg.setDestinationEntity(220U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.63706324874024);
    msg.setSource(11688U);
    msg.setSourceEntity(71U);
    msg.setDestination(9643U);
    msg.setDestinationEntity(9U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.46081405182780344);
    msg.setSource(3159U);
    msg.setSourceEntity(115U);
    msg.setDestination(8478U);
    msg.setDestinationEntity(5U);
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
    msg.setTimeStamp(0.21727290528181287);
    msg.setSource(64394U);
    msg.setSourceEntity(144U);
    msg.setDestination(45811U);
    msg.setDestinationEntity(184U);
    msg.value = 0.2762898859301778;
    msg.confidence = 0.2408144754976389;
    msg.opmodes.assign("XWANMOJTXVDGFRYRGBQPPAOCDQCCIGRZGMDPZBNIUBYAYARF");

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
    msg.setTimeStamp(0.09409877206851569);
    msg.setSource(21554U);
    msg.setSourceEntity(232U);
    msg.setDestination(34503U);
    msg.setDestinationEntity(25U);
    msg.value = 0.8921047659146983;
    msg.confidence = 0.010170168486919429;
    msg.opmodes.assign("SAWWEZCEUJDLRBJAKPAVTMODDJSPBMUQKTGLXBICXUCKOTQRAIINGDBSMUOYREAMJXETOXYGWFSLONIHAQVNNBUFVLLDOJVBHPYMYOMCPFKAVWPGMKDQJFTVFVHHCJKSSUCXKYHBEXTQKNHSTPEISIMYETZZQNQOLSGIHTIXLOCAFRGHVD");

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
    msg.setTimeStamp(0.4695041516368924);
    msg.setSource(35055U);
    msg.setSourceEntity(73U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(53U);
    msg.value = 0.10907136944473439;
    msg.confidence = 0.1723037249713142;
    msg.opmodes.assign("OGLFIWBCYRXOYFNXORWPCTQZHIUMQFJZGTTCFXWPBOYGZDFSP");

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
    msg.setTimeStamp(0.9233878377611395);
    msg.setSource(17136U);
    msg.setSourceEntity(236U);
    msg.setDestination(42561U);
    msg.setDestinationEntity(125U);
    msg.itow = 968540246U;
    msg.lat = 0.25280184125734184;
    msg.lon = 0.41825328732304146;
    msg.height_ell = 0.049167829441375654;
    msg.height_sea = 0.8510509461398648;
    msg.hacc = 0.7117268189658346;
    msg.vacc = 0.32880779810725436;
    msg.vel_n = 0.6253849147797012;
    msg.vel_e = 0.9472390712863694;
    msg.vel_d = 0.020208273922677322;
    msg.speed = 0.32611998875456416;
    msg.gspeed = 0.5937065018266978;
    msg.heading = 0.4556387868920163;
    msg.sacc = 0.14809506894524538;
    msg.cacc = 0.8826975365913745;

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
    msg.setTimeStamp(0.17605850121288635);
    msg.setSource(50990U);
    msg.setSourceEntity(240U);
    msg.setDestination(39583U);
    msg.setDestinationEntity(23U);
    msg.itow = 3179110752U;
    msg.lat = 0.14365253192548622;
    msg.lon = 0.258006158328136;
    msg.height_ell = 0.7665226571536343;
    msg.height_sea = 0.5872144122644605;
    msg.hacc = 0.4106571185076977;
    msg.vacc = 0.739629001007702;
    msg.vel_n = 0.7788817076892751;
    msg.vel_e = 0.34653840790210944;
    msg.vel_d = 0.509561646911763;
    msg.speed = 0.6236264498105769;
    msg.gspeed = 0.6703590365633255;
    msg.heading = 0.058202238220003144;
    msg.sacc = 0.10949836479636832;
    msg.cacc = 0.20957385540202556;

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
    msg.setTimeStamp(0.011456800456192462);
    msg.setSource(23993U);
    msg.setSourceEntity(153U);
    msg.setDestination(49032U);
    msg.setDestinationEntity(221U);
    msg.itow = 1021426325U;
    msg.lat = 0.31224050176172;
    msg.lon = 0.24462016112107487;
    msg.height_ell = 0.7833030826962939;
    msg.height_sea = 0.8556490749423077;
    msg.hacc = 0.2963577318647782;
    msg.vacc = 0.1288237880934;
    msg.vel_n = 0.007027353456725449;
    msg.vel_e = 0.21001334272018402;
    msg.vel_d = 0.5184390291268293;
    msg.speed = 0.5080757481397419;
    msg.gspeed = 0.6198858559387936;
    msg.heading = 0.49041938476859326;
    msg.sacc = 0.6385112595926565;
    msg.cacc = 0.8197407672147371;

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
    msg.setTimeStamp(0.9323167146650717);
    msg.setSource(5660U);
    msg.setSourceEntity(147U);
    msg.setDestination(54201U);
    msg.setDestinationEntity(94U);
    msg.id = 196U;
    msg.value = 0.230953453934153;

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
    msg.setTimeStamp(0.6275373732713516);
    msg.setSource(57232U);
    msg.setSourceEntity(62U);
    msg.setDestination(43137U);
    msg.setDestinationEntity(101U);
    msg.id = 247U;
    msg.value = 0.4297391593084512;

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
    msg.setTimeStamp(0.1402171639273495);
    msg.setSource(52948U);
    msg.setSourceEntity(58U);
    msg.setDestination(30465U);
    msg.setDestinationEntity(25U);
    msg.id = 14U;
    msg.value = 0.18716226694962967;

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
    msg.setTimeStamp(0.10991682718060625);
    msg.setSource(37628U);
    msg.setSourceEntity(182U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(106U);
    msg.x = 0.10253789533119362;
    msg.y = 0.2163352934728282;
    msg.z = 0.3044480581540485;
    msg.phi = 0.26377746873419194;
    msg.theta = 0.8560484904877809;
    msg.psi = 0.9155683289804795;

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
    msg.setTimeStamp(0.8691145086109846);
    msg.setSource(16859U);
    msg.setSourceEntity(130U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(215U);
    msg.x = 0.8928866564765416;
    msg.y = 0.03191165401818308;
    msg.z = 0.377808659822338;
    msg.phi = 0.6810219008316554;
    msg.theta = 0.5684313791615582;
    msg.psi = 0.1796189846436802;

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
    msg.setTimeStamp(0.9219565245753452);
    msg.setSource(147U);
    msg.setSourceEntity(228U);
    msg.setDestination(50851U);
    msg.setDestinationEntity(113U);
    msg.x = 0.9456712428144672;
    msg.y = 0.9106908267262651;
    msg.z = 0.34528883240540187;
    msg.phi = 0.6669027767772109;
    msg.theta = 0.09884977727358846;
    msg.psi = 0.25506489001727617;

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
    msg.setTimeStamp(0.20133447562557738);
    msg.setSource(23696U);
    msg.setSourceEntity(61U);
    msg.setDestination(51052U);
    msg.setDestinationEntity(202U);
    msg.beam_width = 0.43977215817627147;
    msg.beam_height = 0.176356122792642;

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
    msg.setTimeStamp(0.9387974320220646);
    msg.setSource(54745U);
    msg.setSourceEntity(118U);
    msg.setDestination(21875U);
    msg.setDestinationEntity(146U);
    msg.beam_width = 0.021119621844347125;
    msg.beam_height = 0.7557083639546777;

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
    msg.setTimeStamp(0.5188362422506949);
    msg.setSource(64483U);
    msg.setSourceEntity(148U);
    msg.setDestination(4511U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.7647596703692094;
    msg.beam_height = 0.9786776594455338;

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
    msg.setTimeStamp(0.2819931723227693);
    msg.setSource(1132U);
    msg.setSourceEntity(220U);
    msg.setDestination(60242U);
    msg.setDestinationEntity(14U);
    msg.sane = 195U;

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
    msg.setTimeStamp(0.6341373539056968);
    msg.setSource(27869U);
    msg.setSourceEntity(12U);
    msg.setDestination(51984U);
    msg.setDestinationEntity(254U);
    msg.sane = 24U;

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
    msg.setTimeStamp(0.5842791823112397);
    msg.setSource(4784U);
    msg.setSourceEntity(229U);
    msg.setDestination(63363U);
    msg.setDestinationEntity(149U);
    msg.sane = 8U;

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
    msg.setTimeStamp(0.05359952219181985);
    msg.setSource(63021U);
    msg.setSourceEntity(210U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(190U);
    msg.value = 0.4412620573813085;

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
    msg.setTimeStamp(0.19647070074642836);
    msg.setSource(50511U);
    msg.setSourceEntity(177U);
    msg.setDestination(58075U);
    msg.setDestinationEntity(15U);
    msg.value = 0.4721958267878771;

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
    msg.setTimeStamp(0.40311526482603033);
    msg.setSource(40534U);
    msg.setSourceEntity(219U);
    msg.setDestination(5007U);
    msg.setDestinationEntity(132U);
    msg.value = 0.11450685939750127;

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
    msg.setTimeStamp(0.5533137569581373);
    msg.setSource(51078U);
    msg.setSourceEntity(29U);
    msg.setDestination(35025U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9235124865933461;

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
    msg.setTimeStamp(0.6959676905357154);
    msg.setSource(29301U);
    msg.setSourceEntity(220U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(208U);
    msg.value = 0.6400488851931831;

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
    msg.setTimeStamp(0.8254386973989677);
    msg.setSource(65057U);
    msg.setSourceEntity(133U);
    msg.setDestination(58438U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8974383376213977;

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
    msg.setTimeStamp(0.3546707653377834);
    msg.setSource(44703U);
    msg.setSourceEntity(211U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(231U);
    msg.value = 0.7901640704160959;

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
    msg.setTimeStamp(0.5840695699168234);
    msg.setSource(3905U);
    msg.setSourceEntity(164U);
    msg.setDestination(5555U);
    msg.setDestinationEntity(211U);
    msg.value = 0.40475431722509636;

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
    msg.setTimeStamp(0.7058024497567393);
    msg.setSource(53346U);
    msg.setSourceEntity(248U);
    msg.setDestination(51894U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8944300038495323;

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
    msg.setTimeStamp(0.6594051852302063);
    msg.setSource(30652U);
    msg.setSourceEntity(248U);
    msg.setDestination(18492U);
    msg.setDestinationEntity(173U);
    msg.value = 0.15807679588864543;

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
    msg.setTimeStamp(0.23095122305857674);
    msg.setSource(44019U);
    msg.setSourceEntity(16U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(155U);
    msg.value = 0.6576979415451909;

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
    msg.setTimeStamp(0.7357879040213466);
    msg.setSource(51884U);
    msg.setSourceEntity(228U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(92U);
    msg.value = 0.30482907791887603;

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
    msg.setTimeStamp(0.91085503171405);
    msg.setSource(23718U);
    msg.setSourceEntity(80U);
    msg.setDestination(28036U);
    msg.setDestinationEntity(29U);
    msg.value = 0.5888901621177479;

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
    msg.setTimeStamp(0.881265077135619);
    msg.setSource(37424U);
    msg.setSourceEntity(238U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(160U);
    msg.value = 0.43109354030535185;

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
    msg.setTimeStamp(0.646419561710302);
    msg.setSource(15253U);
    msg.setSourceEntity(58U);
    msg.setDestination(30113U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6893656016413293;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7540527206218408);
    msg.setSource(59944U);
    msg.setSourceEntity(25U);
    msg.setDestination(39933U);
    msg.setDestinationEntity(223U);
    msg.id = 121U;
    msg.zoom = 30U;
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
    msg.setTimeStamp(0.8875925673187072);
    msg.setSource(24248U);
    msg.setSourceEntity(213U);
    msg.setDestination(12727U);
    msg.setDestinationEntity(102U);
    msg.id = 146U;
    msg.zoom = 146U;
    msg.action = 103U;

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
    msg.setTimeStamp(0.44844649042295537);
    msg.setSource(41870U);
    msg.setSourceEntity(229U);
    msg.setDestination(27920U);
    msg.setDestinationEntity(178U);
    msg.id = 179U;
    msg.zoom = 72U;
    msg.action = 140U;

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
    msg.setTimeStamp(0.9592847050751856);
    msg.setSource(2402U);
    msg.setSourceEntity(203U);
    msg.setDestination(301U);
    msg.setDestinationEntity(45U);
    msg.id = 88U;
    msg.value = 0.19996280276911693;

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
    msg.setTimeStamp(0.6495211575152811);
    msg.setSource(4255U);
    msg.setSourceEntity(233U);
    msg.setDestination(45706U);
    msg.setDestinationEntity(159U);
    msg.id = 218U;
    msg.value = 0.17110497188247442;

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
    msg.setTimeStamp(0.1795481885642336);
    msg.setSource(54192U);
    msg.setSourceEntity(211U);
    msg.setDestination(32718U);
    msg.setDestinationEntity(4U);
    msg.id = 150U;
    msg.value = 0.14645912554580987;

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
    msg.setTimeStamp(0.2887084984001689);
    msg.setSource(62713U);
    msg.setSourceEntity(146U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(59U);
    msg.id = 229U;
    msg.value = 0.8898019674454958;

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
    msg.setTimeStamp(0.3894977925585228);
    msg.setSource(51020U);
    msg.setSourceEntity(115U);
    msg.setDestination(2734U);
    msg.setDestinationEntity(5U);
    msg.id = 85U;
    msg.value = 0.4324672556438197;

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
    msg.setTimeStamp(0.01662806782360926);
    msg.setSource(59389U);
    msg.setSourceEntity(229U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(60U);
    msg.id = 217U;
    msg.value = 0.03910136813544762;

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
    msg.setTimeStamp(0.46230305530996363);
    msg.setSource(54354U);
    msg.setSourceEntity(194U);
    msg.setDestination(35884U);
    msg.setDestinationEntity(3U);
    msg.id = 19U;
    msg.angle = 0.5136710613021213;

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
    msg.setTimeStamp(0.7272128099797565);
    msg.setSource(33323U);
    msg.setSourceEntity(195U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(199U);
    msg.id = 152U;
    msg.angle = 0.5620739765154713;

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
    msg.setTimeStamp(0.2308901386494454);
    msg.setSource(53272U);
    msg.setSourceEntity(118U);
    msg.setDestination(23848U);
    msg.setDestinationEntity(131U);
    msg.id = 133U;
    msg.angle = 0.5786093583887838;

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
    msg.setTimeStamp(0.014226724962497994);
    msg.setSource(24151U);
    msg.setSourceEntity(7U);
    msg.setDestination(11726U);
    msg.setDestinationEntity(66U);
    msg.op = 94U;
    msg.actions.assign("EGZAKNPNAUZAAFSQFUFSCMOJUEZFRTQVCAAGNZUECHRIKYPOJDQYLDMEBKVIVGNAPGTBJTOSRYNIIKZWKWYPBBNPZNN");

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
    msg.setTimeStamp(0.3564258942559214);
    msg.setSource(62284U);
    msg.setSourceEntity(41U);
    msg.setDestination(14959U);
    msg.setDestinationEntity(84U);
    msg.op = 63U;
    msg.actions.assign("EKPRHXRMYSPVFJWEWHSILGAXYSKXEWBEQHUOLLGMDCHEZNBPYDAJKXTYRBLQQRBZWORWBKPGBPSZFNDAOVRACMEWUMCPDZCKZVTKKVRTGAIROCQNXXSQYMITTPWCSUY");

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
    msg.setTimeStamp(0.1610898082717105);
    msg.setSource(59262U);
    msg.setSourceEntity(139U);
    msg.setDestination(42443U);
    msg.setDestinationEntity(174U);
    msg.op = 162U;
    msg.actions.assign("GLCVPDPIUKAENXIJATGQSKYBTSOEFSHZWRMKDJLHHWNCZHSNWUOJFPTFMSKZQREAJROJKZWRYMHWNMUQJCHFLVISIRZPDJBFDJNZVEQLUCXCGUDIZBDIFTHSXQTIESPYOPZWTDEPALGLMUGXSBAXKTKHEGNKQM");

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
    msg.setTimeStamp(0.935132890729387);
    msg.setSource(48037U);
    msg.setSourceEntity(210U);
    msg.setDestination(19384U);
    msg.setDestinationEntity(130U);
    msg.actions.assign("KPPRYZZOXFFEUWENAAZDOPFKCJJYZNSAGSYHCDRQUAGKKBCBMEXDQZVNSNIJYRVJCSYKYBVTEFGSRNQEVQCCSQCBVTMXKUZMPPFEGRFJCVVZUYWTINMGYEODUHJZHZHHTUBRLIEAJFBCXPVQGBNEMJZXHFHXIXLMABOWYUTKNGLLPTPLUIHKODXLVXSBEWNASJIMGXIMCKWQOQYIDMHOOHMIGRDRIWRBNDOTGADLUVFWQTTWKDL");

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
    msg.setTimeStamp(0.0215986860408246);
    msg.setSource(45084U);
    msg.setSourceEntity(126U);
    msg.setDestination(396U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("LDDTZEKFQJVFBO");

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
    msg.setTimeStamp(0.9657299737448731);
    msg.setSource(13171U);
    msg.setSourceEntity(115U);
    msg.setDestination(58086U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("XEAPXXWWHCJBDVKSORIINCVTDSZXISSIQBBOQTSDUKIQYWEQDLLMQNUYCOPZZJOZZWXBEZLSKROMNGIMRMIWZWLGKCDUMWYNQEIJJTFAUWULERUDUHHUHVUJZHMKJSXNRVTEXLVSNAFYNJLYSGJCCQKGDPXPGGSQFMPROHDKQDVLYIOKKCFPBEGGTUTRFYARNGBTKEAAEFMRIEBOPBZNBAHVLFCPYVGYBCVZRJHHJFAYDLMPVXTFTXFNCWTP");

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
    msg.setTimeStamp(0.4822158127959656);
    msg.setSource(30897U);
    msg.setSourceEntity(243U);
    msg.setDestination(40667U);
    msg.setDestinationEntity(124U);
    msg.button = 116U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.9548816145158628);
    msg.setSource(50449U);
    msg.setSourceEntity(8U);
    msg.setDestination(25898U);
    msg.setDestinationEntity(91U);
    msg.button = 154U;
    msg.value = 232U;

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
    msg.setTimeStamp(0.7301536188845569);
    msg.setSource(21181U);
    msg.setSourceEntity(190U);
    msg.setDestination(30636U);
    msg.setDestinationEntity(88U);
    msg.button = 215U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.7351446337106793);
    msg.setSource(2628U);
    msg.setSourceEntity(57U);
    msg.setDestination(49274U);
    msg.setDestinationEntity(130U);
    msg.op = 36U;
    msg.text.assign("LKFDBQIDUKFCBXYEYMYQYFIXGIJSLOFZTJBVHNCJZOATJRREHNBMGVIVK");

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
    msg.setTimeStamp(0.9177353322467937);
    msg.setSource(12187U);
    msg.setSourceEntity(174U);
    msg.setDestination(62742U);
    msg.setDestinationEntity(232U);
    msg.op = 15U;
    msg.text.assign("KSBDQMULPXXMBXIWUKXDTEQCZVMC");

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
    msg.setTimeStamp(0.36321263856154273);
    msg.setSource(21506U);
    msg.setSourceEntity(91U);
    msg.setDestination(16009U);
    msg.setDestinationEntity(124U);
    msg.op = 32U;
    msg.text.assign("VVQFLRGHKAIQCGZLPYCWDVNSFISODGPOMVPDYVKOUIUEAGZJREURJXKHEECHWCTQBMONWBEXCXTKWTLQDRDVCRLPDPXETNXBJLGBXZFSJSINTHYFXWWCBLQRHHVUT");

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
    msg.setTimeStamp(0.4307368683058167);
    msg.setSource(21696U);
    msg.setSourceEntity(55U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(240U);
    msg.op = 96U;
    msg.time_remain = 0.9416843720671968;
    msg.sched_time = 0.14925993176489072;

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
    msg.setTimeStamp(0.901429137787574);
    msg.setSource(47067U);
    msg.setSourceEntity(27U);
    msg.setDestination(56497U);
    msg.setDestinationEntity(238U);
    msg.op = 171U;
    msg.time_remain = 0.807745834110527;
    msg.sched_time = 0.7091833070961765;

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
    msg.setTimeStamp(0.8489162675574846);
    msg.setSource(43423U);
    msg.setSourceEntity(234U);
    msg.setDestination(18862U);
    msg.setDestinationEntity(240U);
    msg.op = 81U;
    msg.time_remain = 0.9939818529315839;
    msg.sched_time = 0.40884679906254895;

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
    msg.setTimeStamp(0.2548165842505905);
    msg.setSource(2874U);
    msg.setSourceEntity(68U);
    msg.setDestination(50152U);
    msg.setDestinationEntity(8U);
    msg.name.assign("EWDHFFWDGMJALBHWRCGBIQKAGNLIAZSCPCOWRORVALVLIUTQZHZHCTXERZENWTJOLBHQQJYXITEQPJTCPQVBMSLMOBPXHIXDARNMWYFLUOBGBUROWRCBYCDVFJDUAKRSONIYBCMRZIVNOPMKZVGHKIEYDNJPUXGUMUANUDSKMVGDHJXGZVWMFUTYJSESHELKOTXPOPFDMFPQFGBEIQSJDHWSNVTPXYTAXSZYEIWGAZAZLKJEXCK");
    msg.op = 109U;
    msg.sched_time = 0.6975247796237535;

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
    msg.setTimeStamp(0.18778718225805646);
    msg.setSource(13745U);
    msg.setSourceEntity(215U);
    msg.setDestination(11065U);
    msg.setDestinationEntity(148U);
    msg.name.assign("GJLGZSHFCIUMOAIWFEBOQXVARLCYQDJLEMGTNCAHDGZQYIDXYDPWBTDCUBVRYPVMZWKTVFWTHYKDGPCQGLEGIWNZCFQJJCPPKFORSYKOHVWJEKSNKFDVUQBSBIJINARBBMLIJQYNRTZRPMBFEPHXRLQOAXNVVIAUCTIRIMOMTSADNXOUQ");
    msg.op = 166U;
    msg.sched_time = 0.651775619528555;

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
    msg.setTimeStamp(0.6570581345223161);
    msg.setSource(28682U);
    msg.setSourceEntity(16U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(62U);
    msg.name.assign("IBECRTVYXGQFIMRVXOHLKEUDHRHNVBYCXQBSMMSOJSICKGAPMAVPCGOIFVIVNOUSMXPOHDYBGODMJTZNZULNPFGWRLNWIIGLZBWRAXHWOQFAGDQDMZQBRTPSYTIEZACXYLWTVWNMERQDYKKSIDLZBNQAKHUVGLEWZFOVKQIFWYJNHJSGDEVYT");
    msg.op = 159U;
    msg.sched_time = 0.2420601411498473;

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
    msg.setTimeStamp(0.734347010501519);
    msg.setSource(25073U);
    msg.setSourceEntity(178U);
    msg.setDestination(16935U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.4050928716053964);
    msg.setSource(63733U);
    msg.setSourceEntity(47U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.2382548305032095);
    msg.setSource(24098U);
    msg.setSourceEntity(109U);
    msg.setDestination(5075U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.04880128622249613);
    msg.setSource(55379U);
    msg.setSourceEntity(249U);
    msg.setDestination(31658U);
    msg.setDestinationEntity(38U);
    msg.name.assign("MFWWEZVAMWQWENJPDPADEOQUNAVLUDUWNPVFQMFOIFRBTMGBXPEJBCLYDPNDDQLILTQCCAFETGTHEAZKKMWSELCKUGFZQNKLGITSLAXNMVDNVVSKBHNVJHWZPSYIRBDWKIJUXCXQBRYERIGHWTKKCCPSPNKRBTZOMAWSZLSEOSOBFFFVCTUMTMURGXOYNDBYSBMFHHGDZQJJUPAOUGQLAJJLYKVHUZIXXXROY");
    msg.state = 194U;

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
    msg.setTimeStamp(0.162511253939573);
    msg.setSource(18726U);
    msg.setSourceEntity(189U);
    msg.setDestination(19975U);
    msg.setDestinationEntity(0U);
    msg.name.assign("GXCIGAHXWVRFKUAMBFAMMDYUEUWICFDIYWNRVKCNKECDUHXAMTQGHERJGMXPQXPRCPKBWNSEUCQOIHJMTFSYMVGRRSISWETUBLSUXMIWCZQNFHLADNDNIDWOAKENTOCKYNUZTKRPLBHPXRZLZHAGWLMHVRVGAXBJTSPQPJUYSAFDOJJTSWCLPHJSVMRGYOSLFGIZQQYFDTJDKN");
    msg.state = 153U;

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
    msg.setTimeStamp(0.4393335534538717);
    msg.setSource(23636U);
    msg.setSourceEntity(54U);
    msg.setDestination(52149U);
    msg.setDestinationEntity(5U);
    msg.name.assign("HZLWHPKJEJTSUXXSXMNKONUHWYAPMBDETBCZFYPAWOUODCRPHFSEEAAAJNMURMRHAWTWVUTVQGNICKWYQDTWIPAXHNFWLSUIOIGXJNCKCMZQPASBRNUFGQQNRGKZLI");
    msg.state = 102U;

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
    msg.setTimeStamp(0.9115998143256652);
    msg.setSource(38723U);
    msg.setSourceEntity(157U);
    msg.setDestination(49094U);
    msg.setDestinationEntity(16U);
    msg.name.assign("QLRHLRDNDRSUUJEXSSLZEESWEPQXOAVJLOXJIIYKFVZEVHYGKWHDZMPTOIYEMPNTAXSZQGXGJFQGGRCPHDXKRERUOTHCNPYZVCZLWVPRHUDAKCTYLNFEHAIQBVSMBELNOIDYNFPVYBEOMCZGVKAKBMOUMQMHCMYQAATRDWKKRWYMXBJRHIWOSPINMUNZABWAFQCOIQXTZGXWNIBFBQXTCIG");
    msg.value = 73U;

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
    msg.setTimeStamp(0.7776478929836147);
    msg.setSource(25170U);
    msg.setSourceEntity(245U);
    msg.setDestination(40249U);
    msg.setDestinationEntity(237U);
    msg.name.assign("CPSRTQMZGNYKYSYBMAQZEXIAVMBEUJCQHFXLESUIGFDEAYKSYNTZAFVRKTIOBIPFIWEZPNDYXEHGIILVVUGFJVYWHHTRSBGQFOPMQWBNFWQKLKTNHLTDLRMJPNMXWSACYRWLNPXSPCGXHCSBLBVYXMJIFQGKU");
    msg.value = 68U;

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
    msg.setTimeStamp(0.813352335962721);
    msg.setSource(55722U);
    msg.setSourceEntity(9U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(99U);
    msg.name.assign("IGRGNFKCRNKJCTIAYAQFRMHYCVDJPLBROOEXENBZSNHNXGBFYPDOAPIAXLGKVB");
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
    msg.setTimeStamp(0.40197513350797287);
    msg.setSource(31322U);
    msg.setSourceEntity(102U);
    msg.setDestination(33925U);
    msg.setDestinationEntity(211U);
    msg.name.assign("PMTKQDCOYZWBREDRDDCJYQSNPISXOQSQWTMVIYOEFULGUJJBHVCXUGGZVFYWHOJTVNLWRPVZIMEWSLVLUKWXKAKOQKTJRAKZTPGQVDBJDMUBHAEILBYWARLDCEGRNZHFCYWSBXXYOHDFDQBHUCSJSOJQFJPPCZTIRHSRVQKACNZAULMEFGFFLMHAINGNBHYKNEEDGWITRBZQUUIPIFTAUMGTSXFXOMNXPKXSNECLAGWNZHBOKXVVYZPRL");

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
    msg.setTimeStamp(0.047608589027536063);
    msg.setSource(34935U);
    msg.setSourceEntity(202U);
    msg.setDestination(39342U);
    msg.setDestinationEntity(107U);
    msg.name.assign("ODPVNLLWVBPEAWGUVDFYKVEQVPTTGMYCFIHRCNYSFNCGGJEUOIKTLODKHFIQXBVTTTFGQLOVDZDMRAMDXARQZJFELMDOZF");

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
    msg.setTimeStamp(0.3362896338944563);
    msg.setSource(31334U);
    msg.setSourceEntity(126U);
    msg.setDestination(9029U);
    msg.setDestinationEntity(130U);
    msg.name.assign("NCYLEJRWWZPKULBTAYVPBQSTXCUOLUPEYELCHVBUFYNIYCOFZMZRSAFTNWFAZKOJOXIQSMFTADJCLJOQZDYZMWHQIBOMYXVPMQVJMCTJNUZDTFPXOSQACOKVINEHZALTGDGUPCLFEWAVPWNKHTYDDEWPNGXRWHKUBSJIKZMJKDSYRGSAEBVHGFDIXUMEXJPOOGRTNBBPHMI");

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
    msg.setTimeStamp(0.4702747765734746);
    msg.setSource(37316U);
    msg.setSourceEntity(139U);
    msg.setDestination(62594U);
    msg.setDestinationEntity(69U);
    msg.name.assign("ROBEJYVRAXLRIGZWLYPUQFPCMIVWUAOTEFGDVUFTEJSGBAKUZQOFTLHTKHORVTVIQNMMQQJPXVNYLSXSPKXGYDBSHCABKWEBOKY");
    msg.value = 61U;

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
    msg.setTimeStamp(0.3666203059964832);
    msg.setSource(32837U);
    msg.setSourceEntity(198U);
    msg.setDestination(31398U);
    msg.setDestinationEntity(192U);
    msg.name.assign("OWOPWNHYHRWPFYBPCOMWEHSSGDSDFJQWTQRASLVKACFRFNUOPEJCLRYMNUWEXVBGNLVVJOVXEJMPOYXAMYHLRZHVURVZXXPIRS");
    msg.value = 193U;

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
    msg.setTimeStamp(0.3433631871031131);
    msg.setSource(4845U);
    msg.setSourceEntity(44U);
    msg.setDestination(60637U);
    msg.setDestinationEntity(103U);
    msg.name.assign("NKEDYGXQVDOSVAFLQMSYBAFFXWOXKRNLTKOJRBNEUAJDFGKPKPFGIUZAHWJXCWOCRCQVTPDEITPSGVWISIVXHDIWFQRAEMULXWHLWUOINTPLSQJPPJBCLLHZYYYGRSUAFTEM");
    msg.value = 154U;

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
    msg.setTimeStamp(0.321264575830674);
    msg.setSource(14985U);
    msg.setSourceEntity(131U);
    msg.setDestination(46691U);
    msg.setDestinationEntity(51U);
    msg.id = 142U;
    msg.period = 1830553076U;
    msg.duty_cycle = 932714904U;

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
    msg.setTimeStamp(0.6478353601505856);
    msg.setSource(45997U);
    msg.setSourceEntity(193U);
    msg.setDestination(23963U);
    msg.setDestinationEntity(169U);
    msg.id = 166U;
    msg.period = 2822130902U;
    msg.duty_cycle = 3087769396U;

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
    msg.setTimeStamp(0.1548623914006939);
    msg.setSource(37428U);
    msg.setSourceEntity(4U);
    msg.setDestination(9088U);
    msg.setDestinationEntity(239U);
    msg.id = 6U;
    msg.period = 3272490866U;
    msg.duty_cycle = 3907275157U;

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
    msg.setTimeStamp(0.12465368771262919);
    msg.setSource(23754U);
    msg.setSourceEntity(90U);
    msg.setDestination(41316U);
    msg.setDestinationEntity(54U);
    msg.id = 70U;
    msg.period = 3111561317U;
    msg.duty_cycle = 2863280615U;

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
    msg.setTimeStamp(0.44914465431564576);
    msg.setSource(4597U);
    msg.setSourceEntity(68U);
    msg.setDestination(28305U);
    msg.setDestinationEntity(9U);
    msg.id = 153U;
    msg.period = 1438917926U;
    msg.duty_cycle = 3720132112U;

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
    msg.setTimeStamp(0.0075379449472012805);
    msg.setSource(34145U);
    msg.setSourceEntity(152U);
    msg.setDestination(29894U);
    msg.setDestinationEntity(62U);
    msg.id = 153U;
    msg.period = 2187816924U;
    msg.duty_cycle = 1677753266U;

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
    msg.setTimeStamp(0.34089207232285634);
    msg.setSource(18665U);
    msg.setSourceEntity(238U);
    msg.setDestination(58521U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.21518207342779727;
    msg.lon = 0.09364725992906986;
    msg.height = 0.973774783889382;
    msg.x = 0.6561313654013537;
    msg.y = 0.20408930903839317;
    msg.z = 0.9941819423073593;
    msg.phi = 0.539616968857282;
    msg.theta = 0.10991437054606257;
    msg.psi = 0.771130139331943;
    msg.u = 0.685601591462494;
    msg.v = 0.020600405494454854;
    msg.w = 0.13416676295013652;
    msg.vx = 0.8693852353710716;
    msg.vy = 0.3631222983604342;
    msg.vz = 0.9142323394588435;
    msg.p = 0.4474747705794554;
    msg.q = 0.6972409542665639;
    msg.r = 0.9179150524915565;
    msg.depth = 0.39868546822890216;
    msg.alt = 0.3539921722966103;

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
    msg.setTimeStamp(0.759629215533057);
    msg.setSource(43581U);
    msg.setSourceEntity(177U);
    msg.setDestination(34449U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.8296068068343891;
    msg.lon = 0.12663568529578417;
    msg.height = 0.5007441888298572;
    msg.x = 0.27170820975961574;
    msg.y = 0.34524249330525814;
    msg.z = 0.12530792225907916;
    msg.phi = 0.9968207676178096;
    msg.theta = 0.45635203247092904;
    msg.psi = 0.5153557104213665;
    msg.u = 0.26599037471361897;
    msg.v = 0.3282134130748233;
    msg.w = 0.8733727929081653;
    msg.vx = 0.9195857413363593;
    msg.vy = 0.769526025278271;
    msg.vz = 0.3573261261364705;
    msg.p = 0.9397047906628295;
    msg.q = 0.169481371754019;
    msg.r = 0.8647609608606159;
    msg.depth = 0.7476624175367151;
    msg.alt = 0.17950259360328213;

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
    msg.setTimeStamp(0.7270127370740472);
    msg.setSource(34751U);
    msg.setSourceEntity(66U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.37257681651021146;
    msg.lon = 0.4432986404708358;
    msg.height = 0.3791087718555163;
    msg.x = 0.1507157413502913;
    msg.y = 0.6691855843572853;
    msg.z = 0.7824702471276339;
    msg.phi = 0.7044924821387992;
    msg.theta = 0.26817797056615555;
    msg.psi = 0.12104441653742826;
    msg.u = 0.36623641945618624;
    msg.v = 0.43372831585375404;
    msg.w = 0.4956950132421666;
    msg.vx = 0.9988063342204012;
    msg.vy = 0.4574828531068269;
    msg.vz = 0.9205073318139171;
    msg.p = 0.8500921981072321;
    msg.q = 0.33156552783975524;
    msg.r = 0.07677725196116991;
    msg.depth = 0.13711445304646097;
    msg.alt = 0.8776237367123864;

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
    msg.setTimeStamp(0.4148383525520275);
    msg.setSource(20195U);
    msg.setSourceEntity(202U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(110U);
    msg.x = 0.9087113383451897;
    msg.y = 0.9769031644207888;
    msg.z = 0.3876381629862041;

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
    msg.setTimeStamp(0.9456474283023751);
    msg.setSource(51167U);
    msg.setSourceEntity(188U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(23U);
    msg.x = 0.3270083297818487;
    msg.y = 0.06526741504911204;
    msg.z = 0.5528035501905102;

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
    msg.setTimeStamp(0.3730254249365671);
    msg.setSource(32188U);
    msg.setSourceEntity(248U);
    msg.setDestination(54935U);
    msg.setDestinationEntity(32U);
    msg.x = 0.12674059342769384;
    msg.y = 0.405396252781851;
    msg.z = 0.01930248155551606;

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
    msg.setTimeStamp(0.7458062497081073);
    msg.setSource(21724U);
    msg.setSourceEntity(161U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(126U);
    msg.value = 0.4813735424703074;

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
    msg.setTimeStamp(0.20530200862824377);
    msg.setSource(4154U);
    msg.setSourceEntity(192U);
    msg.setDestination(48407U);
    msg.setDestinationEntity(98U);
    msg.value = 0.6165430259563588;

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
    msg.setTimeStamp(0.37733698185270104);
    msg.setSource(15416U);
    msg.setSourceEntity(142U);
    msg.setDestination(54845U);
    msg.setDestinationEntity(72U);
    msg.value = 0.4037763745593268;

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
    msg.setTimeStamp(0.9895106587916473);
    msg.setSource(11848U);
    msg.setSourceEntity(151U);
    msg.setDestination(19370U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8078182294835579;

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
    msg.setTimeStamp(0.345559530762768);
    msg.setSource(64761U);
    msg.setSourceEntity(156U);
    msg.setDestination(39738U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6950727451014302;

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
    msg.setTimeStamp(0.15972507909784028);
    msg.setSource(1949U);
    msg.setSourceEntity(172U);
    msg.setDestination(50476U);
    msg.setDestinationEntity(6U);
    msg.value = 0.2203495031020195;

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
    msg.setTimeStamp(0.38906251000451997);
    msg.setSource(46127U);
    msg.setSourceEntity(90U);
    msg.setDestination(46194U);
    msg.setDestinationEntity(127U);
    msg.x = 0.9080162013428746;
    msg.y = 0.9915893660603992;
    msg.z = 0.9683431797974154;
    msg.phi = 0.57690069580459;
    msg.theta = 0.44685463941484393;
    msg.psi = 0.7482473715701355;
    msg.p = 0.5354565926063232;
    msg.q = 0.9155899571820281;
    msg.r = 0.5949550158606568;
    msg.u = 0.21230064692686834;
    msg.v = 0.5208065163047303;
    msg.w = 0.4260732020754868;
    msg.bias_psi = 0.07865619257696366;
    msg.bias_r = 0.040989226277850954;

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
    msg.setTimeStamp(0.7758280875187726);
    msg.setSource(33312U);
    msg.setSourceEntity(134U);
    msg.setDestination(30685U);
    msg.setDestinationEntity(198U);
    msg.x = 0.2545705865031167;
    msg.y = 0.715562594281907;
    msg.z = 0.7193824125920502;
    msg.phi = 0.347484516596112;
    msg.theta = 0.8756679762826499;
    msg.psi = 0.1710817266084701;
    msg.p = 0.4771473822694331;
    msg.q = 0.7843386785715319;
    msg.r = 0.19794409028823634;
    msg.u = 0.128281458118781;
    msg.v = 0.516942650404887;
    msg.w = 0.5586860280775648;
    msg.bias_psi = 0.34721667486612884;
    msg.bias_r = 0.2770197731053208;

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
    msg.setTimeStamp(0.5859315850793303);
    msg.setSource(43101U);
    msg.setSourceEntity(192U);
    msg.setDestination(29479U);
    msg.setDestinationEntity(114U);
    msg.x = 0.5562362958565579;
    msg.y = 0.650693815378861;
    msg.z = 0.29646747974401544;
    msg.phi = 0.5230087477022272;
    msg.theta = 0.09851603982641843;
    msg.psi = 0.5178785938415714;
    msg.p = 0.07058674792278086;
    msg.q = 0.0486016303681277;
    msg.r = 0.9367387050239567;
    msg.u = 0.7980316413605151;
    msg.v = 0.1877772990705565;
    msg.w = 0.5018311471684495;
    msg.bias_psi = 0.2112022023537995;
    msg.bias_r = 0.7702846395185218;

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
    msg.setTimeStamp(0.9832972895852675);
    msg.setSource(19865U);
    msg.setSourceEntity(98U);
    msg.setDestination(2147U);
    msg.setDestinationEntity(195U);
    msg.bias_psi = 0.6096212393627749;
    msg.bias_r = 0.2401571942195012;
    msg.cog = 0.5105434159765021;
    msg.cyaw = 0.42721204052157835;
    msg.lbl_rej_level = 0.6301929352111262;
    msg.gps_rej_level = 0.3924814163354644;
    msg.custom_x = 0.11983858892526533;
    msg.custom_y = 0.9701339597488015;
    msg.custom_z = 0.0664515174367577;

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
    msg.setTimeStamp(0.26160576899023014);
    msg.setSource(57192U);
    msg.setSourceEntity(107U);
    msg.setDestination(30328U);
    msg.setDestinationEntity(27U);
    msg.bias_psi = 0.712051728736914;
    msg.bias_r = 0.20813368880894334;
    msg.cog = 0.07298216093045906;
    msg.cyaw = 0.05110602528239838;
    msg.lbl_rej_level = 0.2975378196672309;
    msg.gps_rej_level = 0.48459029312424395;
    msg.custom_x = 0.2023428344604843;
    msg.custom_y = 0.5924266731624934;
    msg.custom_z = 0.8317569820030436;

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
    msg.setTimeStamp(0.7872908987740433);
    msg.setSource(51329U);
    msg.setSourceEntity(14U);
    msg.setDestination(63184U);
    msg.setDestinationEntity(206U);
    msg.bias_psi = 0.6801551923576126;
    msg.bias_r = 0.41512849915878725;
    msg.cog = 0.4456291363894387;
    msg.cyaw = 0.26282549045608794;
    msg.lbl_rej_level = 0.8375228871456093;
    msg.gps_rej_level = 0.1350345575754729;
    msg.custom_x = 0.8527823324448449;
    msg.custom_y = 0.937918335301763;
    msg.custom_z = 0.4800012612368866;

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
    msg.setTimeStamp(0.07431690050359818);
    msg.setSource(40397U);
    msg.setSourceEntity(228U);
    msg.setDestination(37142U);
    msg.setDestinationEntity(113U);
    msg.utc_time = 0.0075578882189630825;
    msg.reason = 59U;

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
    msg.setTimeStamp(0.8669335516244392);
    msg.setSource(43120U);
    msg.setSourceEntity(82U);
    msg.setDestination(51755U);
    msg.setDestinationEntity(60U);
    msg.utc_time = 0.04093231791290364;
    msg.reason = 28U;

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
    msg.setTimeStamp(0.5166091696728873);
    msg.setSource(10021U);
    msg.setSourceEntity(138U);
    msg.setDestination(52682U);
    msg.setDestinationEntity(132U);
    msg.utc_time = 0.5232371078073562;
    msg.reason = 121U;

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
    msg.setTimeStamp(0.08507684737015786);
    msg.setSource(16479U);
    msg.setSourceEntity(203U);
    msg.setDestination(40039U);
    msg.setDestinationEntity(232U);
    msg.id = 213U;
    msg.range = 0.6282535434528068;
    msg.acceptance = 191U;

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
    msg.setTimeStamp(0.08994465810143437);
    msg.setSource(17649U);
    msg.setSourceEntity(67U);
    msg.setDestination(55051U);
    msg.setDestinationEntity(163U);
    msg.id = 243U;
    msg.range = 0.3996402888862094;
    msg.acceptance = 247U;

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
    msg.setTimeStamp(0.7415051636522523);
    msg.setSource(16772U);
    msg.setSourceEntity(238U);
    msg.setDestination(17502U);
    msg.setDestinationEntity(244U);
    msg.id = 33U;
    msg.range = 0.6232107594011138;
    msg.acceptance = 33U;

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
    msg.setTimeStamp(0.18924323145510547);
    msg.setSource(13184U);
    msg.setSourceEntity(51U);
    msg.setDestination(16411U);
    msg.setDestinationEntity(141U);
    msg.type = 121U;
    msg.reason = 222U;
    msg.value = 0.3958584297159847;
    msg.timestep = 0.4349571550837439;

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
    msg.setTimeStamp(0.19168118521000566);
    msg.setSource(26430U);
    msg.setSourceEntity(12U);
    msg.setDestination(6918U);
    msg.setDestinationEntity(68U);
    msg.type = 215U;
    msg.reason = 190U;
    msg.value = 0.620401309838423;
    msg.timestep = 0.8988180862837418;

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
    msg.setTimeStamp(0.718399096076207);
    msg.setSource(53284U);
    msg.setSourceEntity(142U);
    msg.setDestination(14732U);
    msg.setDestinationEntity(217U);
    msg.type = 104U;
    msg.reason = 157U;
    msg.value = 0.8017414360706845;
    msg.timestep = 0.532922073837711;

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
    msg.setTimeStamp(0.48419569804048357);
    msg.setSource(2152U);
    msg.setSourceEntity(145U);
    msg.setDestination(33840U);
    msg.setDestinationEntity(178U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OXLCTRRTXGGJECKBCVVEOMKAPNCLKQMYVIKATOUTAWGYKJNFWDLBJIRYWPNTLEKPCEVXNLPCHQUYFABDDNVQRPCXGOZNUTZEIGUKEMMNVRLVISDLOBJDORQGHVNMKUIZAJXQPTXHJGCDZEWXJHRKXFMPRMOFFSILAPKBJXYSBAFZYDPRTJ");
    tmp_msg_0.lat = 0.9838720046770697;
    tmp_msg_0.lon = 0.4001588734481686;
    tmp_msg_0.depth = 0.099781547299857;
    tmp_msg_0.query_channel = 93U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 202U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7207876625821379;
    msg.y = 0.04440722563049615;
    msg.var_x = 0.87214730306753;
    msg.var_y = 0.5484637961603543;
    msg.distance = 0.973242442537695;

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
    msg.setTimeStamp(0.09872220413531307);
    msg.setSource(52070U);
    msg.setSourceEntity(47U);
    msg.setDestination(50192U);
    msg.setDestinationEntity(90U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WWUHTCQZRDOUWBSRRUPXIISDIYJZLGJISZUSMTNKKGVODRMIYDQWEOEBVVZJWWTYNAEPOLWHXQAFPNCKQVLYCJPVVZKHYIAOGFGGRXQZQBDDEALWANXOTLAHMJHEXIZOUXSHGNLSBABFNNPLAKHUFBXBZMQCPFRDHMOTNIECGFVEXTLVBCYBNGTOMYWJYDSRFMVICBKPUSGDSKCRTKMMLFUZAUJJYVTCJOQ");
    tmp_msg_0.lat = 0.4315145382717809;
    tmp_msg_0.lon = 0.9253183221613371;
    tmp_msg_0.depth = 0.5380848803869683;
    tmp_msg_0.query_channel = 218U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 252U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3525286249362667;
    msg.y = 0.9981566891834418;
    msg.var_x = 0.566659298443555;
    msg.var_y = 0.3007903477380678;
    msg.distance = 0.40929151744848447;

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
    msg.setTimeStamp(0.5260533440750707);
    msg.setSource(65316U);
    msg.setSourceEntity(10U);
    msg.setDestination(53466U);
    msg.setDestinationEntity(24U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MURMUKDLNZAAMLSLYLYECDSXLXTCSU");
    tmp_msg_0.lat = 0.34811092902825636;
    tmp_msg_0.lon = 0.2605125472217178;
    tmp_msg_0.depth = 0.8387228657316287;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 112U;
    tmp_msg_0.transponder_delay = 16U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8540912509966804;
    msg.y = 0.43595725687829;
    msg.var_x = 0.5702908493006433;
    msg.var_y = 0.45251411788534746;
    msg.distance = 0.6320723066492102;

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
    msg.setTimeStamp(0.696458143692446);
    msg.setSource(48439U);
    msg.setSourceEntity(242U);
    msg.setDestination(33788U);
    msg.setDestinationEntity(206U);
    msg.state = 212U;

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
    msg.setTimeStamp(0.3271358068477438);
    msg.setSource(21740U);
    msg.setSourceEntity(85U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(172U);
    msg.state = 248U;

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
    msg.setTimeStamp(0.39240552640922177);
    msg.setSource(50773U);
    msg.setSourceEntity(36U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(45U);
    msg.state = 219U;

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
    msg.setTimeStamp(0.7650796219182989);
    msg.setSource(55801U);
    msg.setSourceEntity(78U);
    msg.setDestination(24952U);
    msg.setDestinationEntity(25U);
    msg.x = 0.3708705486671834;
    msg.y = 0.7005437923016087;
    msg.z = 0.7408634122502306;

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
    msg.setTimeStamp(0.8917613494057111);
    msg.setSource(10125U);
    msg.setSourceEntity(246U);
    msg.setDestination(51580U);
    msg.setDestinationEntity(231U);
    msg.x = 0.7481121829338978;
    msg.y = 0.6383697493301407;
    msg.z = 0.4348770003579331;

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
    msg.setTimeStamp(0.1787772558464531);
    msg.setSource(44820U);
    msg.setSourceEntity(79U);
    msg.setDestination(17043U);
    msg.setDestinationEntity(104U);
    msg.x = 0.6433066134523452;
    msg.y = 0.9547891774106174;
    msg.z = 0.49921999449164167;

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
    msg.setTimeStamp(0.9382755426785084);
    msg.setSource(2611U);
    msg.setSourceEntity(177U);
    msg.setDestination(34770U);
    msg.setDestinationEntity(46U);
    msg.value = 0.12161782792365572;

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
    msg.setTimeStamp(0.014509215765622918);
    msg.setSource(51631U);
    msg.setSourceEntity(212U);
    msg.setDestination(56549U);
    msg.setDestinationEntity(235U);
    msg.value = 0.5726054412912059;

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
    msg.setTimeStamp(0.4366838490512118);
    msg.setSource(65145U);
    msg.setSourceEntity(191U);
    msg.setDestination(32670U);
    msg.setDestinationEntity(116U);
    msg.value = 0.5692608508918574;

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
    msg.setTimeStamp(0.4666561592695352);
    msg.setSource(46986U);
    msg.setSourceEntity(57U);
    msg.setDestination(18138U);
    msg.setDestinationEntity(185U);
    msg.value = 0.04857849900412814;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.17638654500009499);
    msg.setSource(5434U);
    msg.setSourceEntity(98U);
    msg.setDestination(17999U);
    msg.setDestinationEntity(145U);
    msg.value = 0.07606288564058239;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.9034064231419544);
    msg.setSource(56989U);
    msg.setSourceEntity(88U);
    msg.setDestination(40825U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8415903123532846;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.9013774715249501);
    msg.setSource(35801U);
    msg.setSourceEntity(143U);
    msg.setDestination(44131U);
    msg.setDestinationEntity(194U);
    msg.value = 0.37102431087234344;
    msg.speed_units = 131U;

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
    msg.setTimeStamp(0.054109248885605754);
    msg.setSource(27517U);
    msg.setSourceEntity(64U);
    msg.setDestination(23821U);
    msg.setDestinationEntity(201U);
    msg.value = 0.5566628201892193;
    msg.speed_units = 168U;

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
    msg.setTimeStamp(0.17773881777481093);
    msg.setSource(15778U);
    msg.setSourceEntity(45U);
    msg.setDestination(52128U);
    msg.setDestinationEntity(90U);
    msg.value = 0.6250366932302301;
    msg.speed_units = 215U;

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
    msg.setTimeStamp(0.4494027291550292);
    msg.setSource(65444U);
    msg.setSourceEntity(211U);
    msg.setDestination(29113U);
    msg.setDestinationEntity(60U);
    msg.value = 0.4764554344012145;

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
    msg.setTimeStamp(0.35660610256604286);
    msg.setSource(49993U);
    msg.setSourceEntity(192U);
    msg.setDestination(32520U);
    msg.setDestinationEntity(37U);
    msg.value = 0.17320468995664162;

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
    msg.setTimeStamp(0.19333236747729576);
    msg.setSource(11786U);
    msg.setSourceEntity(228U);
    msg.setDestination(26783U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0028820057369446372;

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
    msg.setTimeStamp(0.3624992413364678);
    msg.setSource(19678U);
    msg.setSourceEntity(78U);
    msg.setDestination(53836U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6840015269277981;

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
    msg.setTimeStamp(0.15362313314986586);
    msg.setSource(6491U);
    msg.setSourceEntity(64U);
    msg.setDestination(4174U);
    msg.setDestinationEntity(45U);
    msg.value = 0.23620542233675468;

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
    msg.setTimeStamp(0.3652302347271448);
    msg.setSource(50490U);
    msg.setSourceEntity(69U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(60U);
    msg.value = 0.4569292487474884;

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
    msg.setTimeStamp(0.05707442881412461);
    msg.setSource(4631U);
    msg.setSourceEntity(252U);
    msg.setDestination(23636U);
    msg.setDestinationEntity(107U);
    msg.value = 0.7071485210502408;

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
    msg.setTimeStamp(0.3122702129711057);
    msg.setSource(36698U);
    msg.setSourceEntity(112U);
    msg.setDestination(49067U);
    msg.setDestinationEntity(117U);
    msg.value = 0.41439285538230586;

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
    msg.setTimeStamp(0.058552486578408725);
    msg.setSource(12664U);
    msg.setSourceEntity(114U);
    msg.setDestination(48308U);
    msg.setDestinationEntity(213U);
    msg.value = 0.2976566504902879;

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
    msg.setTimeStamp(0.9426847143241985);
    msg.setSource(30036U);
    msg.setSourceEntity(140U);
    msg.setDestination(43887U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 2679120369U;
    msg.start_lat = 0.9863235433476043;
    msg.start_lon = 0.2852866793208251;
    msg.start_z = 0.26252758545630994;
    msg.start_z_units = 15U;
    msg.end_lat = 0.2068486402354076;
    msg.end_lon = 0.947984684975496;
    msg.end_z = 0.6930150839236583;
    msg.end_z_units = 84U;
    msg.speed = 0.5897747484767804;
    msg.speed_units = 1U;
    msg.lradius = 0.17175265603024725;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.08492012113278047);
    msg.setSource(26870U);
    msg.setSourceEntity(9U);
    msg.setDestination(52580U);
    msg.setDestinationEntity(45U);
    msg.path_ref = 2378409528U;
    msg.start_lat = 0.4358032110741865;
    msg.start_lon = 0.16081554587738678;
    msg.start_z = 0.7207522357762697;
    msg.start_z_units = 165U;
    msg.end_lat = 0.046499589448250944;
    msg.end_lon = 0.6605866519259839;
    msg.end_z = 0.14677620615687603;
    msg.end_z_units = 137U;
    msg.speed = 0.07902212964339561;
    msg.speed_units = 37U;
    msg.lradius = 0.6144285660267744;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.6405710837778907);
    msg.setSource(44945U);
    msg.setSourceEntity(56U);
    msg.setDestination(53991U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 3729285423U;
    msg.start_lat = 0.9082183037420956;
    msg.start_lon = 0.6947219621928605;
    msg.start_z = 0.6601883729453805;
    msg.start_z_units = 109U;
    msg.end_lat = 0.4460383133653679;
    msg.end_lon = 0.27918057807264685;
    msg.end_z = 0.46546699479890874;
    msg.end_z_units = 249U;
    msg.speed = 0.636580407235379;
    msg.speed_units = 148U;
    msg.lradius = 0.9909113295712545;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.16280239300313581);
    msg.setSource(8966U);
    msg.setSourceEntity(224U);
    msg.setDestination(26490U);
    msg.setDestinationEntity(236U);
    msg.x = 0.8882732614540603;
    msg.y = 0.6565434890657806;
    msg.z = 0.5050970974804733;
    msg.k = 0.7299375594041395;
    msg.m = 0.8371511678825663;
    msg.n = 0.07744099687794037;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.11672902546684427);
    msg.setSource(58517U);
    msg.setSourceEntity(124U);
    msg.setDestination(57012U);
    msg.setDestinationEntity(37U);
    msg.x = 0.4793564693628275;
    msg.y = 0.18306248581773532;
    msg.z = 0.34061016730785953;
    msg.k = 0.6526880668272815;
    msg.m = 0.9102519098164321;
    msg.n = 0.8338844618466262;
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
    msg.setTimeStamp(0.32658719374274126);
    msg.setSource(48033U);
    msg.setSourceEntity(8U);
    msg.setDestination(49860U);
    msg.setDestinationEntity(208U);
    msg.x = 0.08507398542717992;
    msg.y = 0.8848529410836595;
    msg.z = 0.36442817979402664;
    msg.k = 0.4922810092471631;
    msg.m = 0.08052500853803679;
    msg.n = 0.29862972007747446;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.9722983631910711);
    msg.setSource(46298U);
    msg.setSourceEntity(133U);
    msg.setDestination(59810U);
    msg.setDestinationEntity(49U);
    msg.value = 0.16973124997480793;

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
    msg.setTimeStamp(0.5904812053916648);
    msg.setSource(32659U);
    msg.setSourceEntity(176U);
    msg.setDestination(20168U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9178989824179602;

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
    msg.setTimeStamp(0.17530236458597914);
    msg.setSource(15978U);
    msg.setSourceEntity(221U);
    msg.setDestination(30429U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5240045942453698;

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
    msg.setTimeStamp(0.3940967517423255);
    msg.setSource(50605U);
    msg.setSourceEntity(107U);
    msg.setDestination(64822U);
    msg.setDestinationEntity(252U);
    msg.u = 0.30713781540778595;
    msg.v = 0.9365262308001502;
    msg.w = 0.522598712365575;
    msg.p = 0.7166588895101424;
    msg.q = 0.46234579291931344;
    msg.r = 0.7419025286326759;
    msg.flags = 191U;

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
    msg.setTimeStamp(0.4742567245153426);
    msg.setSource(41720U);
    msg.setSourceEntity(199U);
    msg.setDestination(19208U);
    msg.setDestinationEntity(74U);
    msg.u = 0.6001719279326218;
    msg.v = 0.6160186517062809;
    msg.w = 0.006906040506184596;
    msg.p = 0.1846657827254523;
    msg.q = 0.04308983110511089;
    msg.r = 0.5212687793337227;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.9787625891800877);
    msg.setSource(53831U);
    msg.setSourceEntity(215U);
    msg.setDestination(63308U);
    msg.setDestinationEntity(124U);
    msg.u = 0.1471923200039318;
    msg.v = 0.10414558910984173;
    msg.w = 0.2378173620271804;
    msg.p = 0.008265058052068341;
    msg.q = 0.6804632350258192;
    msg.r = 0.6874629494129838;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.3783911835501762);
    msg.setSource(31060U);
    msg.setSourceEntity(249U);
    msg.setDestination(57021U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 3608144704U;
    msg.start_lat = 0.2855835718699693;
    msg.start_lon = 0.5660825982148676;
    msg.start_z = 0.14587342475813192;
    msg.start_z_units = 125U;
    msg.end_lat = 0.47243974987750814;
    msg.end_lon = 0.8226251814259472;
    msg.end_z = 0.44475520724839146;
    msg.end_z_units = 56U;
    msg.lradius = 0.36492864327618146;
    msg.flags = 111U;
    msg.x = 0.2565346200619807;
    msg.y = 0.17197261258176288;
    msg.z = 0.49206722147882254;
    msg.vx = 0.3911528198396721;
    msg.vy = 0.3018555879762541;
    msg.vz = 0.5183398164157224;
    msg.course_error = 0.853358609211887;
    msg.eta = 38922U;

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
    msg.setTimeStamp(0.8649122797909526);
    msg.setSource(54053U);
    msg.setSourceEntity(84U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 987776309U;
    msg.start_lat = 0.4540365820703338;
    msg.start_lon = 0.6219229326236579;
    msg.start_z = 0.21362056998256618;
    msg.start_z_units = 234U;
    msg.end_lat = 0.7022344549520961;
    msg.end_lon = 0.8594965081329745;
    msg.end_z = 0.07497769091303685;
    msg.end_z_units = 139U;
    msg.lradius = 0.6437975996687048;
    msg.flags = 26U;
    msg.x = 0.07116193885267086;
    msg.y = 0.4463792612919658;
    msg.z = 0.38300455093921015;
    msg.vx = 0.24550521204550668;
    msg.vy = 0.6116260110760747;
    msg.vz = 0.08188798714136891;
    msg.course_error = 0.4438454147474705;
    msg.eta = 51957U;

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
    msg.setTimeStamp(0.6940301925996561);
    msg.setSource(45632U);
    msg.setSourceEntity(134U);
    msg.setDestination(41133U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 1558127731U;
    msg.start_lat = 0.34148482733337726;
    msg.start_lon = 0.08436758726189997;
    msg.start_z = 0.2900563775609436;
    msg.start_z_units = 137U;
    msg.end_lat = 0.8281689900184264;
    msg.end_lon = 0.986684421056334;
    msg.end_z = 0.7906394373405706;
    msg.end_z_units = 163U;
    msg.lradius = 0.032877464603985884;
    msg.flags = 16U;
    msg.x = 0.44315084632074664;
    msg.y = 0.7924410977561003;
    msg.z = 0.9914978793786539;
    msg.vx = 0.7817159970241078;
    msg.vy = 0.9310906431727617;
    msg.vz = 0.9998980027732915;
    msg.course_error = 0.3222304920775054;
    msg.eta = 59313U;

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
    msg.setTimeStamp(0.018512303048285994);
    msg.setSource(19167U);
    msg.setSourceEntity(240U);
    msg.setDestination(53274U);
    msg.setDestinationEntity(93U);
    msg.k = 0.000600490203707893;
    msg.m = 0.766554516581237;
    msg.n = 0.6755040886174473;

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
    msg.setTimeStamp(0.4145910023265623);
    msg.setSource(31690U);
    msg.setSourceEntity(95U);
    msg.setDestination(41646U);
    msg.setDestinationEntity(200U);
    msg.k = 0.7334955127759873;
    msg.m = 0.19233699543571203;
    msg.n = 0.5018429322807453;

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
    msg.setTimeStamp(0.3426137852600535);
    msg.setSource(40301U);
    msg.setSourceEntity(18U);
    msg.setDestination(21268U);
    msg.setDestinationEntity(90U);
    msg.k = 0.4648441408732754;
    msg.m = 0.2756417513795065;
    msg.n = 0.42536348849370587;

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
    msg.setTimeStamp(0.789657988375001);
    msg.setSource(5463U);
    msg.setSourceEntity(176U);
    msg.setDestination(59522U);
    msg.setDestinationEntity(131U);
    msg.p = 0.9881381866596382;
    msg.i = 0.9545522503020496;
    msg.d = 0.40629534492218444;
    msg.a = 0.9933926269971998;

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
    msg.setTimeStamp(0.5857038771081506);
    msg.setSource(20987U);
    msg.setSourceEntity(56U);
    msg.setDestination(19256U);
    msg.setDestinationEntity(118U);
    msg.p = 0.46103456889328553;
    msg.i = 0.9071717824965196;
    msg.d = 0.6431595027933427;
    msg.a = 0.488523776461642;

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
    msg.setTimeStamp(0.05610787813919427);
    msg.setSource(18892U);
    msg.setSourceEntity(195U);
    msg.setDestination(34192U);
    msg.setDestinationEntity(222U);
    msg.p = 0.42191400589020556;
    msg.i = 0.5759543374038515;
    msg.d = 0.7568155788890456;
    msg.a = 0.7336806688088248;

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
    msg.setTimeStamp(0.6953571448929308);
    msg.setSource(31682U);
    msg.setSourceEntity(17U);
    msg.setDestination(62678U);
    msg.setDestinationEntity(236U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.6681688223391634);
    msg.setSource(53527U);
    msg.setSourceEntity(199U);
    msg.setDestination(32828U);
    msg.setDestinationEntity(17U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.5720946317651332);
    msg.setSource(22102U);
    msg.setSourceEntity(75U);
    msg.setDestination(17250U);
    msg.setDestinationEntity(25U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.6425519459351701);
    msg.setSource(8682U);
    msg.setSourceEntity(106U);
    msg.setDestination(18703U);
    msg.setDestinationEntity(137U);
    msg.timeout = 24250U;
    msg.lat = 0.40328862733303583;
    msg.lon = 0.06373379817452529;
    msg.z = 0.6682608002822281;
    msg.z_units = 179U;
    msg.speed = 0.9362990418658974;
    msg.speed_units = 89U;
    msg.roll = 0.8298793862218765;
    msg.pitch = 0.8648658111790853;
    msg.yaw = 0.8497254833409711;
    msg.custom.assign("NBRIRTDVZKYKYWLNCOVWQXXWKDBBDZLHYRDRUNTFILCRFHLUKAZIGOHOKAUQGSNDEDJSYCZIAWLHZBBXFENOXZUJYUVSJXEQMWSDNAIKSNMJKRKQORALXRUGGCVCPHIOQBLVTBZXXVJZGYTXWSAAUJEJHTECFTGDMAFJOYSMOWJMFDPUHQVTDIUFXVY");

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
    msg.setTimeStamp(0.6018281232665585);
    msg.setSource(36472U);
    msg.setSourceEntity(95U);
    msg.setDestination(37035U);
    msg.setDestinationEntity(161U);
    msg.timeout = 25292U;
    msg.lat = 0.07482057306411327;
    msg.lon = 0.493656807829843;
    msg.z = 0.23092827216472234;
    msg.z_units = 31U;
    msg.speed = 0.904085806369238;
    msg.speed_units = 180U;
    msg.roll = 0.49212158462543665;
    msg.pitch = 0.6170970943848941;
    msg.yaw = 0.2391703092701739;
    msg.custom.assign("NVHESZLHACABZVLOGQULUBTGPJUOQINFEPTSVEJHPGXGAURWKWJWCIMMGKOXBKFBCMOONMNWUSNGTOGVQDRADBWHLVDZRQVXDHXMVNBKSOSTQXALJZFQMQFILLKYADYRMHXPXIQIFSWDTWDZQIWSR");

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
    msg.setTimeStamp(0.04378336554677342);
    msg.setSource(31950U);
    msg.setSourceEntity(178U);
    msg.setDestination(13315U);
    msg.setDestinationEntity(238U);
    msg.timeout = 26237U;
    msg.lat = 0.650216895017767;
    msg.lon = 0.8091884828794654;
    msg.z = 0.9228079222770603;
    msg.z_units = 92U;
    msg.speed = 0.002925440541062252;
    msg.speed_units = 141U;
    msg.roll = 0.639751455084686;
    msg.pitch = 0.33420964960863864;
    msg.yaw = 0.49656615261693826;
    msg.custom.assign("HAOHUWKGSKTDZDEUOJVXYVJEHKPOZPRRQTDDMMGZQABAHAGFJRFIOODJTVHZBWJXLLRKOZWXCQWNNXXBULJOPMXQHIHQWXIYKDLUSNFYXLSTHITNTBWFSBZZ");

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
    msg.setTimeStamp(0.3321129546152102);
    msg.setSource(36400U);
    msg.setSourceEntity(246U);
    msg.setDestination(37911U);
    msg.setDestinationEntity(231U);
    msg.timeout = 2564U;
    msg.lat = 0.20620478461061953;
    msg.lon = 0.4032911016872188;
    msg.z = 0.831017209453107;
    msg.z_units = 8U;
    msg.speed = 0.5174324821162483;
    msg.speed_units = 178U;
    msg.duration = 51805U;
    msg.radius = 0.5260786055884039;
    msg.flags = 47U;
    msg.custom.assign("ZAQNHGPKZOMDXCNDMHJEEAQXOBZ");

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
    msg.setTimeStamp(0.22535030380277643);
    msg.setSource(54615U);
    msg.setSourceEntity(229U);
    msg.setDestination(33750U);
    msg.setDestinationEntity(139U);
    msg.timeout = 26092U;
    msg.lat = 0.5391934725756302;
    msg.lon = 0.7298733168145812;
    msg.z = 0.3752096085317169;
    msg.z_units = 83U;
    msg.speed = 0.7494237629419823;
    msg.speed_units = 207U;
    msg.duration = 55727U;
    msg.radius = 0.9841109132850393;
    msg.flags = 30U;
    msg.custom.assign("WEPDIPTGXMCYZWRPVAIWUXFHUYBCGIJYEIRZRTYNJKDFOMHSKGQLWOMXEAJAGYQOPXPKCFFTHKQAYUVCXUVWLSPUWRDHWJXAFWK");

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
    msg.setTimeStamp(0.20097285217066152);
    msg.setSource(22613U);
    msg.setSourceEntity(207U);
    msg.setDestination(35497U);
    msg.setDestinationEntity(226U);
    msg.timeout = 32065U;
    msg.lat = 0.07276932493874522;
    msg.lon = 0.4752316928970781;
    msg.z = 0.024676018773058805;
    msg.z_units = 57U;
    msg.speed = 0.30122458196975865;
    msg.speed_units = 196U;
    msg.duration = 23298U;
    msg.radius = 0.06188587134540657;
    msg.flags = 5U;
    msg.custom.assign("CDLXHUDBXBLFTTTOVRTKAJMABYJAWGQEOVEPYKPTSQUPOHZRRMLOWKYMYCBWYZAOIMQCMRIDXNCVEZWPRHQLKJNQONDPUUHUQDSDNYNQXCBRWG");

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
    msg.setTimeStamp(0.8724862844812533);
    msg.setSource(38774U);
    msg.setSourceEntity(150U);
    msg.setDestination(6404U);
    msg.setDestinationEntity(221U);
    msg.custom.assign("EXMTXERUEBZHOSUHXYNZQJPDPODISBQMNSRTURCZUCPDLTRQLMVGAZLRXXFHOSGNLBEANKQLSXFKRZUBMYGCVJSG");

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
    msg.setTimeStamp(0.0019012009267397323);
    msg.setSource(17586U);
    msg.setSourceEntity(183U);
    msg.setDestination(4574U);
    msg.setDestinationEntity(40U);
    msg.custom.assign("GEOXZQEQLBOHRBCYSZUVBDQVDVNQJODDDYHTGDKMFZTIKTBWSMOQJYTLDXJAZKXFMOGUSKFGCJLSOYOKCZENTGMVWNYUPH");

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
    msg.setTimeStamp(0.14097564921916705);
    msg.setSource(60513U);
    msg.setSourceEntity(88U);
    msg.setDestination(62621U);
    msg.setDestinationEntity(75U);
    msg.custom.assign("DHFTJHRMNYBBXSHYTFGYRRVCLVNCUYJFQWKWOFQVJEDPBVQGNLBFCQKWQAYSCLXPDKNOTCLGMVXPRYWKL");

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
    msg.setTimeStamp(0.7150937763166363);
    msg.setSource(23636U);
    msg.setSourceEntity(130U);
    msg.setDestination(33881U);
    msg.setDestinationEntity(55U);
    msg.timeout = 63494U;
    msg.lat = 0.20805161692189178;
    msg.lon = 0.3499369084019891;
    msg.z = 0.10744437398303941;
    msg.z_units = 92U;
    msg.duration = 18422U;
    msg.speed = 0.80169281870564;
    msg.speed_units = 14U;
    msg.type = 197U;
    msg.radius = 0.5078655318845408;
    msg.length = 0.11292664054664636;
    msg.bearing = 0.7230056276155685;
    msg.direction = 48U;
    msg.custom.assign("SIEWNJRBIHHNWPYSMUTYCMSXACSMBDRL");

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
    msg.setTimeStamp(0.9256197280556258);
    msg.setSource(25908U);
    msg.setSourceEntity(5U);
    msg.setDestination(37572U);
    msg.setDestinationEntity(181U);
    msg.timeout = 22648U;
    msg.lat = 0.14396156849541186;
    msg.lon = 0.1698168273859335;
    msg.z = 0.33491450850908155;
    msg.z_units = 31U;
    msg.duration = 2451U;
    msg.speed = 0.33721051176480543;
    msg.speed_units = 70U;
    msg.type = 211U;
    msg.radius = 0.1919908895198713;
    msg.length = 0.7206241170263042;
    msg.bearing = 0.043435415004476896;
    msg.direction = 84U;
    msg.custom.assign("LVQBNKNSFMSJRLLGBBMYLVVLIYAOUXNOPCCVVHPMMQBTTPDZCGGGHWRHDEIXNTSSRBQDUQQROGIVPDHAMQHTW");

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
    msg.setTimeStamp(0.8997326260114735);
    msg.setSource(24878U);
    msg.setSourceEntity(230U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(132U);
    msg.timeout = 41860U;
    msg.lat = 0.5884966638224808;
    msg.lon = 0.8212655402525353;
    msg.z = 0.10573944056350837;
    msg.z_units = 193U;
    msg.duration = 47372U;
    msg.speed = 0.8426258745508771;
    msg.speed_units = 168U;
    msg.type = 78U;
    msg.radius = 0.495824644844003;
    msg.length = 0.12794265891446022;
    msg.bearing = 0.7757688526851724;
    msg.direction = 53U;
    msg.custom.assign("BJMOJZJGZWCBPSTTSPREZWQHWMCTPKZFQRSSARZEYNPYAGDMUYELARVEQWFOSZBABQXRKFKPOHMEDIASWDLAVXILANTTYCYBWNUPKBHIDUDNIZYQUGVJVVGKKTWADJCCFESTRYHVXDRYPLMVFSXNLHBONTZQLBRVURQVEJWZGKZCUGGIOMPKMFDXLHIQFHEBPGIWGRXQJMX");

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
    msg.setTimeStamp(0.10871818469003625);
    msg.setSource(61172U);
    msg.setSourceEntity(146U);
    msg.setDestination(44614U);
    msg.setDestinationEntity(177U);
    msg.duration = 27903U;
    msg.custom.assign("BJQLJHHVRROREGOIMKWESFTPIUZBARTSKYCZIELBDLEBZVHBZLZDNVCMPJFICWFTELSNAUJTTEMKEUJLLRWRKFEDPWHVQGLJSOSKFDDHGXCWBQMPYVSRCHQDBPKHOAKNYNSOUXZWTGFQUJONCWGXFQIZPKRSGCXJQXDMUFAWIMJIVEOYOCQCAYQUPWHDXGHAZXCBMKFNAKGNJDZUBGXNVADTWUBYTPANIVOITXINMQUMRLPRVYTS");

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
    msg.setTimeStamp(0.8782494830876422);
    msg.setSource(32637U);
    msg.setSourceEntity(173U);
    msg.setDestination(58013U);
    msg.setDestinationEntity(201U);
    msg.duration = 1282U;
    msg.custom.assign("KXAEMRNJMBXBGIWUKUBZQLXFIRFXCZZUTGPCWWPZDAEDOKBSOREXMNZBUKSTESUJPCX");

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
    msg.setTimeStamp(0.3792361858439257);
    msg.setSource(5481U);
    msg.setSourceEntity(23U);
    msg.setDestination(62627U);
    msg.setDestinationEntity(118U);
    msg.duration = 18642U;
    msg.custom.assign("HAGNRSWTZVLLWPFHPFKKBXJUDEGOMVDIQSTGHQFROI");

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
    msg.setTimeStamp(0.09224747357156127);
    msg.setSource(22887U);
    msg.setSourceEntity(157U);
    msg.setDestination(63887U);
    msg.setDestinationEntity(215U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.273979292029101;
    msg.control.set(tmp_msg_0);
    msg.duration = 6619U;
    msg.custom.assign("KZEVAHNQELDFIMNFILQNXGEEDGJRTYUDXSPTTPTBKNNIQHIZHPZWXWKDJTGPPCJTJPBSHE");

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
    msg.setTimeStamp(0.0038318498696922054);
    msg.setSource(55431U);
    msg.setSourceEntity(198U);
    msg.setDestination(15796U);
    msg.setDestinationEntity(197U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.859514699267002;
    msg.control.set(tmp_msg_0);
    msg.duration = 47078U;
    msg.custom.assign("CMPCOXDBMDZLHUJANTPDHWAYIICEVWJRRZUQKCSRHJQOAFKLRBLEDYZVPZNVPNYYQXHPSCWJSZEXAZKDHNXNUMVQIFLVYXCIEQRDUVKSFNQIYZMRHKFDCSGJRKFUOSIGQKJLPCCBGZZOGWDKOBXSEFYNRMWZMIHHGMBETLUXJVOSYVKBVTAFGGNP");

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
    msg.setTimeStamp(0.03269404420750255);
    msg.setSource(58574U);
    msg.setSourceEntity(199U);
    msg.setDestination(21836U);
    msg.setDestinationEntity(67U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1634094664U;
    tmp_msg_0.start_lat = 0.42707836474640093;
    tmp_msg_0.start_lon = 0.8508491792797491;
    tmp_msg_0.start_z = 0.9428410068107995;
    tmp_msg_0.start_z_units = 226U;
    tmp_msg_0.end_lat = 0.6971999492607306;
    tmp_msg_0.end_lon = 0.07399509829204787;
    tmp_msg_0.end_z = 0.6933227392943672;
    tmp_msg_0.end_z_units = 175U;
    tmp_msg_0.speed = 0.49552925719190644;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.lradius = 0.9174267880375959;
    tmp_msg_0.flags = 94U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47292U;
    msg.custom.assign("YGXTSLIVWGCAYVSXVUASHGCUHAUQWRXDZZTBFXMDXGSAJMPEMLFNUPOONGPLTJCGJZCXRMABIYIIZVULHXIMWUTADQZHOPIKNVRJHPTYIPLCEVACJNSRCBFNWT");

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
    msg.setTimeStamp(0.7916945246434097);
    msg.setSource(400U);
    msg.setSourceEntity(180U);
    msg.setDestination(4037U);
    msg.setDestinationEntity(135U);
    msg.timeout = 6906U;
    msg.lat = 0.20322602218261587;
    msg.lon = 0.020537216933744995;
    msg.z = 0.3933650954366992;
    msg.z_units = 233U;
    msg.speed = 0.7337421499054029;
    msg.speed_units = 106U;
    msg.bearing = 0.9443304289067851;
    msg.cross_angle = 0.0988104697450275;
    msg.width = 0.6125831746007947;
    msg.length = 0.2295134837986007;
    msg.hstep = 0.9151254392328605;
    msg.coff = 169U;
    msg.alternation = 46U;
    msg.flags = 242U;
    msg.custom.assign("NAIIPXUAVZPXRBYSGQMPNESIRKDXLTUTEWVBJWDBVELGIDJKRLVWVQHAUDQSHZAVNZPBEWSOISGODTUBKPJFOYSIOISLCEWTAPFNZYJLMPGFUFSHORHKEYWJWKYQYNEAUBEXXQCCHXRXPTIEQGGURMC");

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
    msg.setTimeStamp(0.40202281242718574);
    msg.setSource(15122U);
    msg.setSourceEntity(176U);
    msg.setDestination(38446U);
    msg.setDestinationEntity(75U);
    msg.timeout = 37965U;
    msg.lat = 0.8541105976389017;
    msg.lon = 0.035497145630692395;
    msg.z = 0.32884130581224424;
    msg.z_units = 9U;
    msg.speed = 0.27592254032298835;
    msg.speed_units = 80U;
    msg.bearing = 0.8460785672901618;
    msg.cross_angle = 0.004627362528102585;
    msg.width = 0.7533291634848308;
    msg.length = 0.7294906654014517;
    msg.hstep = 0.16169403916618819;
    msg.coff = 82U;
    msg.alternation = 167U;
    msg.flags = 12U;
    msg.custom.assign("ZLHGIXCUIPXTPDTLWGWTDEGIQAJNQVGYGETQWPWVBDZSFVIVSELSSAWCXZSIOKQELLSFJTEPJBGFOXUEIBOGMBFYVXHZPIMDDRIXXMMCNMOQLURBRDUN");

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
    msg.setTimeStamp(0.5048612371578497);
    msg.setSource(9602U);
    msg.setSourceEntity(72U);
    msg.setDestination(28399U);
    msg.setDestinationEntity(110U);
    msg.timeout = 57040U;
    msg.lat = 0.31129320332127874;
    msg.lon = 0.6527186693330308;
    msg.z = 0.4561953348164278;
    msg.z_units = 204U;
    msg.speed = 0.8503001226522217;
    msg.speed_units = 123U;
    msg.bearing = 0.3648620610029213;
    msg.cross_angle = 0.8505354296386304;
    msg.width = 0.7561555626244416;
    msg.length = 0.8581498829635866;
    msg.hstep = 0.27947887931576076;
    msg.coff = 85U;
    msg.alternation = 197U;
    msg.flags = 170U;
    msg.custom.assign("CPTNWQXDTAQGIBHQIGDUQKUWRVZJVFGRSFHTUKUJUPOREIENLOBXFGAYYMNSMVKUPGHWVWJLCJNTPOBZXWVGTMWKBSENMBPDHACFASZWQVQBJMUWFKXZ");

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
    msg.setTimeStamp(0.21144663447735756);
    msg.setSource(37520U);
    msg.setSourceEntity(208U);
    msg.setDestination(2676U);
    msg.setDestinationEntity(17U);
    msg.timeout = 18354U;
    msg.lat = 0.8964549661141;
    msg.lon = 0.01993820583007988;
    msg.z = 0.7886071141896368;
    msg.z_units = 181U;
    msg.speed = 0.425005173159536;
    msg.speed_units = 87U;
    msg.custom.assign("TREKBLDBBKXCIFLUOXCRDFPACRSSPLTIEQXGZCFRUNUHQHLUIKXOYXGVXCISITWFMUZBRZIQLDBIDNAOVMDFEOAVRZQKTCIFATLSDMPUFXHUEWGNZPCARYJBYLSKQGMONLRJGEMPYAJLUKFEPWNHTHOMJQOTFKYIUXBZMZQHXWVPZAVQUJNWJEWSRWPOCGNHNDRAQKSGZMHBKJEWVOZDHJQKBJBYA");

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
    msg.setTimeStamp(0.5285201913473029);
    msg.setSource(40050U);
    msg.setSourceEntity(178U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(23U);
    msg.timeout = 55037U;
    msg.lat = 0.9390032847972544;
    msg.lon = 0.934713274702755;
    msg.z = 0.8886223342364928;
    msg.z_units = 191U;
    msg.speed = 0.3019474802474076;
    msg.speed_units = 161U;
    msg.custom.assign("SNJXTZDGGLYQWQEYIFVEURPLWRHGJVCHPLJBCWFZUPVDQZSCXKNIIDTQDMOTLTOMSITMQAHTABEUNIPMKZEZUPAGXKMZNKEVFGSZHCDAWXKXDJNLLRHPMNFDDAPRFLWMJYUKZBZCOJCTCWNBNUTBILQOUROAKXSADHJSYYXUEQPLHBMSGZTWCJHXHFRK");

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
    msg.setTimeStamp(0.3536534697557838);
    msg.setSource(287U);
    msg.setSourceEntity(136U);
    msg.setDestination(15977U);
    msg.setDestinationEntity(17U);
    msg.timeout = 25592U;
    msg.lat = 0.17582228727115623;
    msg.lon = 0.5484240951187892;
    msg.z = 0.46840977450625776;
    msg.z_units = 96U;
    msg.speed = 0.13095271269973363;
    msg.speed_units = 6U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.867384716846031;
    tmp_msg_0.y = 0.9327288834156676;
    tmp_msg_0.z = 0.8080630877046275;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IIAQQLCJUTCAGYPMZABNFINDREXIMDKKRQDCSGFISJBVSRIOKIGZPTMMEODSWEXGZWDKNVTUVDNBUXBYHWFHRSNCEQQRTKULLHWGYEEDNXEWFXCACPTTHHOXFGEMAQGGSHLYDVFJRIGROPBPZIYJHORWLPJYJZMVFKOZKHUNVWONOWTABLPDZRYEFZMQHXXCVJGUSKFFMOWIBHJNCSUAUXUZTJDAYLAPLCBNPRTQMLWOBLSZMETPUXBYSKVY");

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
    msg.setTimeStamp(0.733952179939663);
    msg.setSource(39114U);
    msg.setSourceEntity(41U);
    msg.setDestination(929U);
    msg.setDestinationEntity(172U);
    msg.x = 0.874910925705457;
    msg.y = 0.12202788193085101;
    msg.z = 0.14715360833353452;

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
    msg.setTimeStamp(0.3249059084745063);
    msg.setSource(13594U);
    msg.setSourceEntity(65U);
    msg.setDestination(61230U);
    msg.setDestinationEntity(152U);
    msg.x = 0.3289859748540066;
    msg.y = 0.6688098033665115;
    msg.z = 0.8181620664700519;

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
    msg.setTimeStamp(0.12277131219796678);
    msg.setSource(6133U);
    msg.setSourceEntity(246U);
    msg.setDestination(18744U);
    msg.setDestinationEntity(250U);
    msg.x = 0.6918201925717828;
    msg.y = 0.6295193035564735;
    msg.z = 0.7061222795305384;

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
    msg.setTimeStamp(0.25998420161597935);
    msg.setSource(8472U);
    msg.setSourceEntity(200U);
    msg.setDestination(46556U);
    msg.setDestinationEntity(125U);
    msg.timeout = 56355U;
    msg.lat = 0.526590930020335;
    msg.lon = 0.7799225396395671;
    msg.z = 0.9856900111180419;
    msg.z_units = 220U;
    msg.amplitude = 0.7588435415923138;
    msg.pitch = 0.12626346338258232;
    msg.speed = 0.2135469394275029;
    msg.speed_units = 228U;
    msg.custom.assign("QPBQXMEHRSIHRPZJKDUNTZPEWFDLMKMODBHDDFUVGUSNZDIILCNVLLXAWVCAVGZIZJTKXCQWTPCNIYIQETTBJXUILVBMAKXF");

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
    msg.setTimeStamp(0.08500176026343809);
    msg.setSource(63726U);
    msg.setSourceEntity(149U);
    msg.setDestination(52256U);
    msg.setDestinationEntity(90U);
    msg.timeout = 57601U;
    msg.lat = 0.0354587552846608;
    msg.lon = 0.5558281769969188;
    msg.z = 0.8755183846531299;
    msg.z_units = 110U;
    msg.amplitude = 0.9786455132069459;
    msg.pitch = 0.6650346783342335;
    msg.speed = 0.733124246903289;
    msg.speed_units = 153U;
    msg.custom.assign("KWRKJTFQSKSJURZTHLAYLEUFAHMUHKBAPFITLEXPBEYZMLYGPKASJPWIDSSJBKSBCPSOZQEMOIKYQFCFMPDUSACGYGH");

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
    msg.setTimeStamp(0.7870742016169141);
    msg.setSource(52252U);
    msg.setSourceEntity(187U);
    msg.setDestination(13556U);
    msg.setDestinationEntity(60U);
    msg.timeout = 52724U;
    msg.lat = 0.5697508810858021;
    msg.lon = 0.16983275041468826;
    msg.z = 0.5270613908947838;
    msg.z_units = 29U;
    msg.amplitude = 0.13187562762339045;
    msg.pitch = 0.18656362991385944;
    msg.speed = 0.5886480673237715;
    msg.speed_units = 49U;
    msg.custom.assign("NFXBYJVLOEHKUDEYXAJKVPCCQZJDHQNJTZODGQPKQIRLINEEPHYXMIUBEVKSTTQXCGWJSNLPBZDSAYRTOYGUOFTRWVZOXBLUFAJDLLAKUUAEFXRVKYWMTHIRMHJHVRPGMSGFMSRDTOTHNLVQBEPYBNDXUSIRCQOYEDGWBPZJVAZGCQIPEUFCOMNWCIZPAWCQJ");

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
    msg.setTimeStamp(0.37537999880151796);
    msg.setSource(51074U);
    msg.setSourceEntity(195U);
    msg.setDestination(64673U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.3435156759305419);
    msg.setSource(62684U);
    msg.setSourceEntity(250U);
    msg.setDestination(40968U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.9904213187692157);
    msg.setSource(17551U);
    msg.setSourceEntity(253U);
    msg.setDestination(6522U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.18822186514246464);
    msg.setSource(47936U);
    msg.setSourceEntity(37U);
    msg.setDestination(4698U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.882987964097501;
    msg.lon = 0.27512223977083894;
    msg.z = 0.8308246791607045;
    msg.z_units = 46U;
    msg.radius = 0.8613393667264277;
    msg.duration = 53329U;
    msg.speed = 0.8374194209931207;
    msg.speed_units = 233U;
    msg.custom.assign("IOEYQDEIVWSQHNLLCBJCIOCUCGESFFCFZGUCUJTATESJOLLAFLDPRWFUIKRXZQLGAWBCFZJRWELSDRCGNMTSNXMQOOAPOKJINXZBPTUXPVWVHBGCHBQISQPAKW");

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
    msg.setTimeStamp(0.973928119012288);
    msg.setSource(54334U);
    msg.setSourceEntity(103U);
    msg.setDestination(53709U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.1924620139488934;
    msg.lon = 0.06973352685742784;
    msg.z = 0.8006598497535787;
    msg.z_units = 242U;
    msg.radius = 0.9022123081547218;
    msg.duration = 26199U;
    msg.speed = 0.5276213825824199;
    msg.speed_units = 181U;
    msg.custom.assign("UXCJOOMXVKH");

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
    msg.setTimeStamp(0.750648291780763);
    msg.setSource(42139U);
    msg.setSourceEntity(24U);
    msg.setDestination(29808U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.06062655195486699;
    msg.lon = 0.8804954937956293;
    msg.z = 0.09190266254340718;
    msg.z_units = 155U;
    msg.radius = 0.5510651729455825;
    msg.duration = 46165U;
    msg.speed = 0.45792080351588926;
    msg.speed_units = 93U;
    msg.custom.assign("AXILSAKCTBEFMLNDJCFAVNDGXBBTXGOHZYNZZFIDGIREFBDHAITTZOKCLVGESNOQNOOPCLVGTQOVUKDIXSGHUHKLGODYLRWDPIKACZEIYJUBHFWUZLVLWDMTNILQSUNXPVVKYUXWEHMMCBOFXVFYBJKFWZRXRBEUPNRA");

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
    msg.setTimeStamp(0.3051674036351073);
    msg.setSource(51708U);
    msg.setSourceEntity(159U);
    msg.setDestination(25227U);
    msg.setDestinationEntity(147U);
    msg.timeout = 30804U;
    msg.flags = 88U;
    msg.lat = 0.3145784693053073;
    msg.lon = 0.23041604311749675;
    msg.start_z = 0.56764487949143;
    msg.start_z_units = 97U;
    msg.end_z = 0.28384510607855973;
    msg.end_z_units = 159U;
    msg.radius = 0.351835418524887;
    msg.speed = 0.9252751638015666;
    msg.speed_units = 37U;
    msg.custom.assign("CTEPYKFBFYCXTHMWYEUGTQNCIPLCOJHBAUHHAJLXGBDCELYRBCVDXTEVYXONHDNKFJSHTEX");

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
    msg.setTimeStamp(0.3130625989009874);
    msg.setSource(20716U);
    msg.setSourceEntity(112U);
    msg.setDestination(16715U);
    msg.setDestinationEntity(210U);
    msg.timeout = 33743U;
    msg.flags = 146U;
    msg.lat = 0.6833056998817412;
    msg.lon = 0.41792278585319687;
    msg.start_z = 0.10696148028715846;
    msg.start_z_units = 129U;
    msg.end_z = 0.8297297964440745;
    msg.end_z_units = 15U;
    msg.radius = 0.5681400608289879;
    msg.speed = 0.09358942446341234;
    msg.speed_units = 157U;
    msg.custom.assign("PMXEEAUAAOHYUIHTVUSXNARWIWGZGGBVMQZFDBIPIWE");

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
    msg.setTimeStamp(0.9863776338960698);
    msg.setSource(3193U);
    msg.setSourceEntity(103U);
    msg.setDestination(18796U);
    msg.setDestinationEntity(2U);
    msg.timeout = 9056U;
    msg.flags = 45U;
    msg.lat = 0.8270228583095847;
    msg.lon = 0.1820815059488584;
    msg.start_z = 0.25164346565598705;
    msg.start_z_units = 159U;
    msg.end_z = 0.4272635551967793;
    msg.end_z_units = 12U;
    msg.radius = 0.06539680399028025;
    msg.speed = 0.37413435857385724;
    msg.speed_units = 48U;
    msg.custom.assign("RSYQDCKJBDNRHJAMJBEAGZLWFFZKALDSHXMXTDJUIGOOWRTSTEVYAZYYIEVCMWRTTPLKOUQGCOSSDALNMUXFXVUONBBEHEAFXPVNYUSHZMUJCLVZTEAQKXHALVBFUFDRPWXPNPXVMMMBHJGECGICSQLQXGSPMWSVOCQZHLKHCKB");

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
    msg.setTimeStamp(0.011244975730981932);
    msg.setSource(9082U);
    msg.setSourceEntity(52U);
    msg.setDestination(21996U);
    msg.setDestinationEntity(167U);
    msg.timeout = 22853U;
    msg.lat = 0.30776649406763235;
    msg.lon = 0.21507542487961562;
    msg.z = 0.6929401500883142;
    msg.z_units = 95U;
    msg.speed = 0.5326294025045255;
    msg.speed_units = 100U;
    msg.custom.assign("WQDQLABANSREJKNMJDWOVDFTCYYCUCQNLGTGHKAEVQPXVTHCTQQIWUZLMBCTUFBUPFKUAYVXTIBYHUUIXEYZAFHOJPKFQKROHSUXELGYCRCIJIQALRPAFIJLWOOBWPNESVNVGCIKZOJDZJNDOYCZ");

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
    msg.setTimeStamp(0.2690528471621474);
    msg.setSource(53104U);
    msg.setSourceEntity(100U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(216U);
    msg.timeout = 30858U;
    msg.lat = 0.6664364485127959;
    msg.lon = 0.5571472771330244;
    msg.z = 0.18845902492801192;
    msg.z_units = 232U;
    msg.speed = 0.8435916968885135;
    msg.speed_units = 253U;
    msg.custom.assign("GLAPFLFIOTZHFWUUHSPEEHXPFKDKDWOKIJOGXQOCFYSSJZCUB");

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
    msg.setTimeStamp(0.18182091825942226);
    msg.setSource(19285U);
    msg.setSourceEntity(7U);
    msg.setDestination(59801U);
    msg.setDestinationEntity(53U);
    msg.timeout = 5845U;
    msg.lat = 0.8354446753657968;
    msg.lon = 0.8356828885779795;
    msg.z = 0.958491362570638;
    msg.z_units = 198U;
    msg.speed = 0.22732359143661895;
    msg.speed_units = 126U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9339822610046555;
    tmp_msg_0.y = 0.9384051013255776;
    tmp_msg_0.z = 0.6333463256615309;
    tmp_msg_0.t = 0.564479554054537;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EHOLPFPALJNBVTAGESBHIERXKNXCTYIUGPXHIWALUSVQDFPZZYECRQJCJSTQZMLGTIMYWAGLEDYMKHBGATQTSOAUCVZQZXBRXDLRROOCZQNJSBJMLCMNADABIULEFAVZJTGSKPCKXYTSVHXYGDWFXRSWRVDQFNIUDCDOWNMXTHWDCUEZFXQJVRYRNAWHNLYHONKSYULHZKEBS");

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
    msg.setTimeStamp(0.24852829425018208);
    msg.setSource(11361U);
    msg.setSourceEntity(148U);
    msg.setDestination(59563U);
    msg.setDestinationEntity(117U);
    msg.x = 0.6302178684765478;
    msg.y = 0.5114774803720382;
    msg.z = 0.997311713972448;
    msg.t = 0.2931008122462815;

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
    msg.setTimeStamp(0.549371812673993);
    msg.setSource(13183U);
    msg.setSourceEntity(71U);
    msg.setDestination(24369U);
    msg.setDestinationEntity(16U);
    msg.x = 0.5464187122541863;
    msg.y = 0.48559372062666584;
    msg.z = 0.14872640647455437;
    msg.t = 0.17680139153683205;

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
    msg.setTimeStamp(0.45025239092294334);
    msg.setSource(7488U);
    msg.setSourceEntity(125U);
    msg.setDestination(38858U);
    msg.setDestinationEntity(9U);
    msg.x = 0.0404542067754452;
    msg.y = 0.4858791119125082;
    msg.z = 0.1837973333311813;
    msg.t = 0.6280944620448062;

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
    msg.setTimeStamp(0.9025978893014651);
    msg.setSource(61760U);
    msg.setSourceEntity(28U);
    msg.setDestination(17261U);
    msg.setDestinationEntity(74U);
    msg.timeout = 21908U;
    msg.name.assign("XOEKAOWRRQATWWNBIYL");
    msg.custom.assign("RBWKXBNVHUOVFIEKPTGVSYEJQLNHPPGCPDCMHZXHAQNBHTGYSIVEXAZSWULWLYPOVHVWMSTMIXNCVIJOSYIURZIENPHCBZPCGXPMRYAOAUTOFHREJCWZUKDGUTLKLANKFBSLEHZDIJDQKGOQYF");

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
    msg.setTimeStamp(0.7196668646946843);
    msg.setSource(61353U);
    msg.setSourceEntity(48U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(94U);
    msg.timeout = 37200U;
    msg.name.assign("FMTNQAURRIOCSHORAJIILKXSTNVITHCHBCXKOSWUNDKXYBITZXMEVGHDZEYZVUYY");
    msg.custom.assign("SFPDEJQDWGMYCNRPZJWBBUGQIOFMHCBQOIJUVIKHOQNKSBMTTDRHUYXRFJYMAKJDZOFQKRGGOQNAGAZZULVEOAVJMILNOWECJMJOHJUNNCFVTIEAIXEBFLJBXAKLRYLSWZDKQAVBGOPTPPKRHAXXVVBNFEWGZVNRHLOWATWWXXUSYXCBK");

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
    msg.setTimeStamp(0.610507524714311);
    msg.setSource(10189U);
    msg.setSourceEntity(123U);
    msg.setDestination(10881U);
    msg.setDestinationEntity(132U);
    msg.timeout = 1164U;
    msg.name.assign("VOKFINEVDAJPYLWLRRYOPEQVSCKCVELBTHUUZRGNOIXADXNWBADOZAJPKAXWSIPGHMPHWBPXMVNIKDAYGRBBUTSAGIOSNWJQQZHFMGXDMOSVCHLGQMGJPXJLOBGFUSRJEJLIKRCDMMEJARWTECTQWJQETPOGQOBRUDMCWSSPKZUUBLVK");
    msg.custom.assign("ZRFLPMOJABNCL");

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
    msg.setTimeStamp(0.0007483085284504254);
    msg.setSource(60445U);
    msg.setSourceEntity(252U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.022139461949852057;
    msg.lon = 0.7037060220093585;
    msg.z = 0.4659333687831386;
    msg.z_units = 7U;
    msg.speed = 0.011647061105869883;
    msg.speed_units = 132U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63436U;
    tmp_msg_0.off_x = 0.563194066603865;
    tmp_msg_0.off_y = 0.519463434386332;
    tmp_msg_0.off_z = 0.4517503038799283;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9976585078869139;
    msg.custom.assign("IYZKZSVINLMEHWZBMRTMTILRDWISQOACRANVUIPGQGNXIKHZYBOSHHELBZZANWEQHFEMJFTQJNGSWQRVIXUBTHHQPABBIGVMVXMJNQGJFHOYMADLDBWECBQFUDXSJZLLCPIDJXPONRZPBUKTYOF");

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
    msg.setTimeStamp(0.39455657334228567);
    msg.setSource(40934U);
    msg.setSourceEntity(232U);
    msg.setDestination(45573U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.8604113411582668;
    msg.lon = 0.3084791453594542;
    msg.z = 0.17813780244511157;
    msg.z_units = 175U;
    msg.speed = 0.5777523192394768;
    msg.speed_units = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54784U;
    tmp_msg_0.off_x = 0.605775798600584;
    tmp_msg_0.off_y = 0.5620251156554663;
    tmp_msg_0.off_z = 0.5167217754609359;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9125647909970409;
    msg.custom.assign("SHVTZEGZGXOTLUMCHMKIRYHDPTZXLKQISDNEYBBKFEAUNELBWHMMOQSPBCFTFWKVNOQLTKRQSZVZWBKEIFLUSXVJYJCDDJYVUAOJJKTUSJMPWLIP");

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
    msg.setTimeStamp(0.2551749303310542);
    msg.setSource(7212U);
    msg.setSourceEntity(23U);
    msg.setDestination(45085U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.1708240038998724;
    msg.lon = 0.7700750885630029;
    msg.z = 0.602239463787549;
    msg.z_units = 205U;
    msg.speed = 0.8465657064313058;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9160194408031215;
    tmp_msg_0.y = 0.14714363585153167;
    tmp_msg_0.z = 0.9675701473884322;
    tmp_msg_0.t = 0.04094531782173494;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 24873U;
    tmp_msg_1.off_x = 0.44505922896199024;
    tmp_msg_1.off_y = 0.08114536862197619;
    tmp_msg_1.off_z = 0.5275233179361892;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5094559948758103;
    msg.custom.assign("QMFIJWTUZLQOSUFABCDGSRXFRSLRMNSNUNAUSFOCYOQQLZHAOGLEFYZHJAZQVMDRXMUMHNJYAHITEHCQUYLXBBFXAIOXXVRYOZPYZNCACNBZHFBKDLUHRZPFLUVAKLDDCGXVFSJYGNXMPISJHVBIRWJITJSXRTEMPFVNKBGY");

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
    msg.setTimeStamp(0.8653882349152981);
    msg.setSource(32502U);
    msg.setSourceEntity(170U);
    msg.setDestination(7789U);
    msg.setDestinationEntity(183U);
    msg.vid = 17033U;
    msg.off_x = 0.8886940066385778;
    msg.off_y = 0.20776025801672482;
    msg.off_z = 0.7301540251760752;

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
    msg.setTimeStamp(0.45376800683096163);
    msg.setSource(34651U);
    msg.setSourceEntity(166U);
    msg.setDestination(18049U);
    msg.setDestinationEntity(119U);
    msg.vid = 34825U;
    msg.off_x = 0.19021795543021214;
    msg.off_y = 0.012162125254419953;
    msg.off_z = 0.20267279654087567;

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
    msg.setTimeStamp(0.3823171937067317);
    msg.setSource(28541U);
    msg.setSourceEntity(135U);
    msg.setDestination(36206U);
    msg.setDestinationEntity(102U);
    msg.vid = 4151U;
    msg.off_x = 0.6327246353471465;
    msg.off_y = 0.5918199314922677;
    msg.off_z = 0.39645100129951083;

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
    msg.setTimeStamp(0.298984299667146);
    msg.setSource(39377U);
    msg.setSourceEntity(59U);
    msg.setDestination(20673U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.659179746963532);
    msg.setSource(28722U);
    msg.setSourceEntity(108U);
    msg.setDestination(18907U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.06936605581707589);
    msg.setSource(18383U);
    msg.setSourceEntity(12U);
    msg.setDestination(25421U);
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
    msg.setTimeStamp(0.8461547217629584);
    msg.setSource(39664U);
    msg.setSourceEntity(9U);
    msg.setDestination(63579U);
    msg.setDestinationEntity(120U);
    msg.mid = 31357U;

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
    msg.setTimeStamp(0.6995916920237856);
    msg.setSource(37638U);
    msg.setSourceEntity(97U);
    msg.setDestination(29498U);
    msg.setDestinationEntity(222U);
    msg.mid = 15180U;

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
    msg.setTimeStamp(0.10129585720683221);
    msg.setSource(14028U);
    msg.setSourceEntity(245U);
    msg.setDestination(36728U);
    msg.setDestinationEntity(146U);
    msg.mid = 44761U;

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
    msg.setTimeStamp(0.6106535001911747);
    msg.setSource(64849U);
    msg.setSourceEntity(22U);
    msg.setDestination(46263U);
    msg.setDestinationEntity(83U);
    msg.state = 48U;
    msg.eta = 51626U;
    msg.info.assign("TCXIKEYEULBIREDCQGUXDQKZTPKXJVRGFMXBCCFHJYCRBXMJHAEKAAOILXLSHKPUWCUZKFMFDPFOJZMTPABJWVHYSZWUZANSOTBZSIABYYHKVVTRXNVYZGFAVIVRAHJ");

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
    msg.setTimeStamp(0.0972232052785621);
    msg.setSource(23017U);
    msg.setSourceEntity(142U);
    msg.setDestination(32028U);
    msg.setDestinationEntity(60U);
    msg.state = 104U;
    msg.eta = 46688U;
    msg.info.assign("PQBIMZMUEGSEGGMOCJPOTVQSGPTFDNVAIUJOHTNAYDQXKYFZQTJZJHAVHWFEBVSLDRGPQBUFOQCUOXEWHIQUBYYIWEAVLZNPORJJDYGXLGSEWMQOJUXZTLJBTGENLDXKRPYMLWFROKCNBGECWYCXZMHRUCACHASNNSDCVZFXUGZXXKNYPCJOVHVIHZKRQRKSWCN");

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
    msg.setTimeStamp(0.6612305878410517);
    msg.setSource(28695U);
    msg.setSourceEntity(161U);
    msg.setDestination(43433U);
    msg.setDestinationEntity(219U);
    msg.state = 177U;
    msg.eta = 17894U;
    msg.info.assign("DYHNAWHUSRXFPLXQDMDEBHPKVPEKWORYDNZIGJNDUWQAEJPCDFOHLYDLYQTRZOXYIXQWBTHSKFXLSSEGVTLIFGBGPODQMRDUCOWERGJAMRGWCV");

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
    msg.setTimeStamp(0.7121537997768717);
    msg.setSource(9204U);
    msg.setSourceEntity(151U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(144U);
    msg.system = 30438U;
    msg.duration = 1836U;
    msg.speed = 0.6093862619174923;
    msg.speed_units = 91U;
    msg.x = 0.12339622906607439;
    msg.y = 0.7238058765412632;
    msg.z = 0.03410407620818767;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.03967623890328231);
    msg.setSource(55504U);
    msg.setSourceEntity(9U);
    msg.setDestination(40983U);
    msg.setDestinationEntity(17U);
    msg.system = 58917U;
    msg.duration = 41433U;
    msg.speed = 0.23547270816828558;
    msg.speed_units = 226U;
    msg.x = 0.004775655110046517;
    msg.y = 0.5308510088978589;
    msg.z = 0.800148535985387;
    msg.z_units = 99U;

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
    msg.setTimeStamp(0.4632749981676516);
    msg.setSource(42684U);
    msg.setSourceEntity(230U);
    msg.setDestination(41187U);
    msg.setDestinationEntity(36U);
    msg.system = 30399U;
    msg.duration = 21085U;
    msg.speed = 0.5352527615587608;
    msg.speed_units = 143U;
    msg.x = 0.9851849579857779;
    msg.y = 0.995332685316546;
    msg.z = 0.26730122367157283;
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
    msg.setTimeStamp(0.4185132920807524);
    msg.setSource(63854U);
    msg.setSourceEntity(61U);
    msg.setDestination(27435U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.999147540367678;
    msg.lon = 0.7163049028407499;
    msg.speed = 0.42234872891216835;
    msg.speed_units = 159U;
    msg.duration = 26696U;
    msg.sys_a = 1375U;
    msg.sys_b = 48910U;
    msg.move_threshold = 0.3882534326784409;

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
    msg.setTimeStamp(0.42640480205116094);
    msg.setSource(64541U);
    msg.setSourceEntity(61U);
    msg.setDestination(20068U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.15722882878140376;
    msg.lon = 0.9515437049892873;
    msg.speed = 0.41582108608707313;
    msg.speed_units = 142U;
    msg.duration = 29958U;
    msg.sys_a = 58667U;
    msg.sys_b = 43046U;
    msg.move_threshold = 0.5143120680044094;

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
    msg.setTimeStamp(0.9168681559792373);
    msg.setSource(34388U);
    msg.setSourceEntity(148U);
    msg.setDestination(49392U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.0006573636406496108;
    msg.lon = 0.31149919958420347;
    msg.speed = 0.5843425433218882;
    msg.speed_units = 20U;
    msg.duration = 51654U;
    msg.sys_a = 48800U;
    msg.sys_b = 35180U;
    msg.move_threshold = 0.6955715986386283;

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
    msg.setTimeStamp(0.20786412229321405);
    msg.setSource(6287U);
    msg.setSourceEntity(55U);
    msg.setDestination(7765U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.6288458982303872;
    msg.lon = 0.3861037268490545;
    msg.z = 0.910519178868833;
    msg.z_units = 250U;
    msg.speed = 0.9821617959694117;
    msg.speed_units = 136U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7766833924217993;
    tmp_msg_0.lon = 0.20720945186689466;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YILRXTTWWLSCBWCKMAKYVEFLZCOLDJIVAZFSWZMTEESAMVCSMNHMVJILMVZIDNFJVKLFARDOOEXQCPFWQOQGUDMOCANOEQXDNKSMYOSXGXYWQIKAFBLFFSNAYSYTURDBVLAPAXPHVHOUBKRHHIPGQOQYRTZVWRDIJTTEBNPDJBBLDQQCGWHJNXCUAUGMPJXBGZZRWHNRZIUEHTWEUGSYHPFKMKLIJUUCPDGXJNGPEFV");

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
    msg.setTimeStamp(0.3562646154290766);
    msg.setSource(12957U);
    msg.setSourceEntity(103U);
    msg.setDestination(53465U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.07389611007808805;
    msg.lon = 0.8079612583485839;
    msg.z = 0.8380674077194324;
    msg.z_units = 8U;
    msg.speed = 0.27480957165793707;
    msg.speed_units = 77U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.36083906854175973;
    tmp_msg_0.lon = 0.8077168428195574;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EUIOBOUNBOXFFBAZVNXJANCLYHHBHVCRFWIRQQISMDNLSPWVEAZCPYHABBYTVWYTFDXHAKNAQHISWNMUOPUILCJRDXJTGGBDJMZPEW");

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
    msg.setTimeStamp(0.6894359478279676);
    msg.setSource(43128U);
    msg.setSourceEntity(209U);
    msg.setDestination(64765U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.6128103584629111;
    msg.lon = 0.9437789395937316;
    msg.z = 0.7896163598643798;
    msg.z_units = 25U;
    msg.speed = 0.6326489182655116;
    msg.speed_units = 167U;
    msg.custom.assign("EHFBYWLEFIKSAPHNFDQIUE");

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
    msg.setTimeStamp(0.9742071891675659);
    msg.setSource(30948U);
    msg.setSourceEntity(196U);
    msg.setDestination(5036U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.12343344812556811;
    msg.lon = 0.6835218487637936;

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
    msg.setTimeStamp(0.8677436460522621);
    msg.setSource(54172U);
    msg.setSourceEntity(218U);
    msg.setDestination(46420U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.7467045746890854;
    msg.lon = 0.3643197454267425;

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
    msg.setTimeStamp(0.9741290986716793);
    msg.setSource(1943U);
    msg.setSourceEntity(188U);
    msg.setDestination(35023U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.38443538416939116;
    msg.lon = 0.3717957183448021;

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
    msg.setTimeStamp(0.3124488519695112);
    msg.setSource(49011U);
    msg.setSourceEntity(99U);
    msg.setDestination(60007U);
    msg.setDestinationEntity(203U);
    msg.timeout = 60295U;
    msg.lat = 0.10838051212336286;
    msg.lon = 0.0686974744095098;
    msg.z = 0.7614154434590317;
    msg.z_units = 228U;
    msg.pitch = 0.04252467034918306;
    msg.amplitude = 0.20018083710386203;
    msg.duration = 55944U;
    msg.speed = 0.8334633407969911;
    msg.speed_units = 227U;
    msg.radius = 0.8075238597080237;
    msg.direction = 158U;
    msg.custom.assign("UBPGROZMKUUFRVSIQMARRLPRWLFMQCKNMVEABMVPBSMAZYONNXRQZDEFSLYPJLBFXHKMUJTEYRCGIUGOJBJPIQB");

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
    msg.setTimeStamp(0.015245462656107045);
    msg.setSource(58787U);
    msg.setSourceEntity(124U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(236U);
    msg.timeout = 33857U;
    msg.lat = 0.769285284969384;
    msg.lon = 0.48925400996885937;
    msg.z = 0.10693610006757515;
    msg.z_units = 241U;
    msg.pitch = 0.7473599511306858;
    msg.amplitude = 0.37019689259353983;
    msg.duration = 5359U;
    msg.speed = 0.7598636661199073;
    msg.speed_units = 87U;
    msg.radius = 0.21741091693044678;
    msg.direction = 232U;
    msg.custom.assign("DBMHAXJPZREEANSWIMCYAKPQTEXEUCMMBBFBRB");

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
    msg.setTimeStamp(0.6908086823893967);
    msg.setSource(17897U);
    msg.setSourceEntity(254U);
    msg.setDestination(49566U);
    msg.setDestinationEntity(211U);
    msg.timeout = 54580U;
    msg.lat = 0.783184609374536;
    msg.lon = 0.12392800202772969;
    msg.z = 0.28901230110820486;
    msg.z_units = 47U;
    msg.pitch = 0.7176410596483906;
    msg.amplitude = 0.9589153464355704;
    msg.duration = 60137U;
    msg.speed = 0.5774003721420655;
    msg.speed_units = 44U;
    msg.radius = 0.4074962765687453;
    msg.direction = 134U;
    msg.custom.assign("NSZFINFAQLPMHGBYCPNTGDAYYKZWOTRRARMZWKFMHCPECBCIJTSBXPXSKVIABPSKCLMJSFETZYDXNTUHDYBBIHJPDOSXQKJMZGKGBCMVKODDIWEGJWIEPDTNDCTCEUYPBIGHOUEAESLR");

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
    msg.setTimeStamp(0.7000375624559685);
    msg.setSource(45769U);
    msg.setSourceEntity(234U);
    msg.setDestination(10920U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("LBVIPASYALLFIIZMNWEQRQSAEMFXPXIHEXIROYPLFODLEZBWUVLJOMVGMRNZUTEXTCRBFCKGRWWNHGMUASCFOIUYDYAUKVTADQUFSHIFDGOPOTAHUTRLXQEOSPJRVXGKSBPLCSBVHNZWJXKKZLUXEYGNHWQKRBWJHZNZPFDZTDCBBPTMQFRXFTSHDWIYSHTLYJ");
    msg.reference_frame = 232U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19153U;
    tmp_msg_0.off_x = 0.02413274780250574;
    tmp_msg_0.off_y = 0.741004631829478;
    tmp_msg_0.off_z = 0.28103644760153546;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DRJEUWKFLWQWJIWEISDOPGMOHZKXJCPXBLSYWYKWNZAYNXILPQFVPKZRTUFNVMWQVJCTACLACXFBBILAXSAVBKNDVPJHRLZHPBRFJYGCFTOTWBIXMOXYSDHHEVRBFPALSOOXFNUHEPVTBJANOMLVKHDGGSSRJQZJMCRGAZGDBKMGUKNDFSZUETLIMCXIIAMPTEZSYDWNAOIRFUNQERBMTXCLSQRGEIKYVDQZOEMCUNJUYUYPKT");

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
    msg.setTimeStamp(0.23011216171196247);
    msg.setSource(38275U);
    msg.setSourceEntity(172U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(2U);
    msg.formation_name.assign("XUBGXKGOCKLRHUKPUTCQVQVRSDDYVKRGJGQTKSJJWAZNWHPELJQPZREUDLRMBEMXXZFMPPINFCQOOWMRWITCHPXRMWOVDZGYNMACJQFQDCEVSETWPIHAJNVIDX");
    msg.reference_frame = 23U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13637U;
    tmp_msg_0.off_x = 0.44224025593924265;
    tmp_msg_0.off_y = 0.39648010534589906;
    tmp_msg_0.off_z = 0.8747683864897837;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZNPZXPQCYVNZQPEWVIZSHZEDASPIWZFGYYFTMHPCUKJWLNDMPKXRDAFNNCAJLGHRIPOAXXDAJWCMJBGLSZSVUERNILKWRWQFAOHBYHITFIWUDOXFELKWKDEQVQUOYXMZQYTKVSNYS");

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
    msg.setTimeStamp(0.6825314152779641);
    msg.setSource(26226U);
    msg.setSourceEntity(162U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("FURAQNKVZWESICZJDMJUHSCAGYF");
    msg.reference_frame = 250U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32150U;
    tmp_msg_0.off_x = 0.9697424937334599;
    tmp_msg_0.off_y = 0.9372550132079461;
    tmp_msg_0.off_z = 0.9553680227037864;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BNJYMPQLZEQKMVPWHJSTGXFDNVBGOXZZCEFDWOKVSSJGTCKPQNEVGMVRIZXXUDXAKCWLETAUGKIGKNSQFOREYWYYBTAZDJFZSFYPZHQJUWGLRDWQTVHNYLYDDHTIJPRHLWNCTLATTAHRDNELQSOURCOABJVOPJOSOXHMECLBFSAYI");

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
    msg.setTimeStamp(0.17363636592022613);
    msg.setSource(47387U);
    msg.setSourceEntity(19U);
    msg.setDestination(17093U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("JRBCPKLFIYNEKHPPSODYVVYNVYQGWRXMAWKHZLRZTNXYYQGIIHVBQJWBLOJQETWPAZFUSKUIXY");
    msg.formation_name.assign("LXHZJTNCKDVVPESAVZVAKZGLAREWKHOCCPPGVXHTNKITIXJDIIMWTYFFQKOJQLRXIAKMBFVFGLTTFWDBLNGTPLWASVAWIRDGJCIQSFCAAXGSLEEPNGHCPJYIWHABSUQYOODHSX");
    msg.plan_id.assign("VWIHWSAYFXLBMUPSJINFRCLVJZIKWBTEGDCWJOMRUVXRATMDFEZSLCAZPDVQIPUOAKVFVQVHENFXEGTBZDBOGLTDECLYXYCNVDJFMRNHJZRHMBNSUGJXMCTEBWXFTNKREKHHLWOTPQDPUPMAVARNGIFSVESUJRPXCOMNHOWNRCIDYXQDOZXAAZGSUKIZJPYOIYPHLQIHYHBATQXRCSKQ");
    msg.description.assign("TRIFDYFMUPLYQLXQQAWZSJUFANJGGCBOMYMULDKWIALLDXNDGUQYNFDBYRSJZZMZHCYNVVCYBZTTXXNRCOJUJOVONYIHFMHKLHEZR");
    msg.leader_speed = 0.4820936133736904;
    msg.leader_bank_lim = 0.29940443345574475;
    msg.pos_sim_err_lim = 0.7375211226007631;
    msg.pos_sim_err_wrn = 0.6733639195553008;
    msg.pos_sim_err_timeout = 8173U;
    msg.converg_max = 0.7857322990514759;
    msg.converg_timeout = 52671U;
    msg.comms_timeout = 40582U;
    msg.turb_lim = 0.9814650810542808;
    msg.custom.assign("IVMTWWHGQPNQQOMHGDBFHNPSYXCBDRUCRHNSOBUNXDWLHAQCXFBAIPTOKUZGIYOAUCKEEWJPUFORXQNPZKYVICYERZUCIEFEFDKMMJAEYJBWZATKUTMYNLWJGIDHFPXWOUYPFKUCHWGJLXVLEKLXIRCTRBCQTASQGVVX");

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
    msg.setTimeStamp(0.8090848969612574);
    msg.setSource(33876U);
    msg.setSourceEntity(37U);
    msg.setDestination(4524U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("AKXZOUPZDZIEHKIERVBSVVTTSUJGNXXFQRBKIMFQVDQAHQXGCJMLPTEYHPCNBSXKPBDUPFDQXLFVDGTREZEUBACUQIKHOOYAJYXBWHJWHAYKYWQDWRJFSOKRFLWOLWMIEKJSWNSOUAIOTGRURKUAWHUCEINLSZCGYMDEPDTYVXNZUMRLVALHVHCOJLCGCQBMFTEZBGZNI");
    msg.formation_name.assign("JKPNWSFGGYIFNLZQQMOECTXDNYONAWNTBSUXAYGQTTQLZTHDWYHQVAUBVKFXYENMBPFETJDCABBKXTGFUTSPPXKCTIGNZYGRZJQSHSROIRCZLDSPCQZREJRBOLSDVYLEXAROSFXUVCDLURBDBAOZFZQHHHJWZUKVPIMPUKWGOODJJVFVKMJMISKYQWPOLHGENRKNTIX");
    msg.plan_id.assign("DWVRAMDOVFOSVMGNEZJWUMMHCDUOOTJEAZBKIQAOMFCCFXZJCOSBWPYYSKNDZJXOGEXJPLLAQQQFMNRVEBCUELENTYGUCTBHKJPSSPYCAAILEKRILWZPVNSPCXNMGGIWVRCRBXETMBQU");
    msg.description.assign("UTGNXGFSFGGLCDREDM");
    msg.leader_speed = 0.252066556717357;
    msg.leader_bank_lim = 0.6930182805072372;
    msg.pos_sim_err_lim = 0.5775259779738081;
    msg.pos_sim_err_wrn = 0.4035030171675875;
    msg.pos_sim_err_timeout = 59971U;
    msg.converg_max = 0.2473996053634846;
    msg.converg_timeout = 33883U;
    msg.comms_timeout = 31084U;
    msg.turb_lim = 0.3197381330623369;
    msg.custom.assign("ACKSIVXOQYBNJDYLWWWBJBUTNACTYNWUMTFEZRJBXJPUYUOMXALJWLYLSVZRJWVJNMUZSALEXFSCZMAPDHWDIPDDUYMQGCYRBPRZLTHCHDMOKPWQOZRB");

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
    msg.setTimeStamp(0.6039384451066894);
    msg.setSource(43578U);
    msg.setSourceEntity(15U);
    msg.setDestination(14237U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("IRYUDPOVRLCJEONIVXCFZVZDJIRPZTXZDAYGNOBJKUCLYKKSTIHDRVMYGOUZVSDMSQWZPWNESDOGKBMALPOQSCWJ");
    msg.formation_name.assign("TERTWUSATMURGNPNCAVWHJYRXIFXFEHMCNMATIMKGHUSMKBXQRKZASSDPZCJMZKCQOUWSBLQCKFEDFBHXZMASXPHGIADYMZAOSYHBVIZQPZHPRVTFXLJJKWREOPXRYYDMCVHGWACBXVUBDXLKDLEKNPFLISLPJHKGWIJFBWANLXULFVTDKPCSNQVWYWORWGYMBDSJGNBOYTONJLNZZNVICUUYQ");
    msg.plan_id.assign("IYXJDAEBCOQBFSFYTSNDQYKVDGXVINTXVWCNTQPTWGUXAJHTWKGCRYALBHJFPRWZCJZDHUHXHUSOZEJUEMQONCGRKJQD");
    msg.description.assign("WRBNRUDYIARROMQWGSLXQFMJKGORRAPDAICLVWSMGTZLYAKZJEQWPFKICEOHBVGBCTHDSHFHXMKZXJWNUPKOCCSBXRUJGJAKIEALHTPPZEBHWIGSHPVSRNMHGMNBDFSXCZQSEJEVBMFUCGLRVYYSDTEXNNXQVFAJQVPWNDXLQZVXTUMQREZINBFHUIFMAGJIVYOKKUNPNLTVCPELCQYTOOI");
    msg.leader_speed = 0.952050236878683;
    msg.leader_bank_lim = 0.32732632667274775;
    msg.pos_sim_err_lim = 0.8289222414245617;
    msg.pos_sim_err_wrn = 0.30616165490503344;
    msg.pos_sim_err_timeout = 12019U;
    msg.converg_max = 0.6287614522361035;
    msg.converg_timeout = 49051U;
    msg.comms_timeout = 18587U;
    msg.turb_lim = 0.11368279183375274;
    msg.custom.assign("ZLCQWJUSUBOQOPCNMCTTWMUBDMXMRPEIZJLZLBBKVWIALUPXFWEPHNQQIJGOEENPGVCHOSZBEKDTVLLQFUGVWEGYYGHRXPQJCSVZZFDNAKXTYEIFJWAXVFPAAIBNGXDANRXUHONLYKTYHDAXYSXNBOMYVPAUHHRFZTUQPAVIHZEZJSKCKWBNIRGGSKSXABIJUDMTRDBWQCYCFTK");

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
    msg.setTimeStamp(0.24375580258210772);
    msg.setSource(12099U);
    msg.setSourceEntity(20U);
    msg.setDestination(19497U);
    msg.setDestinationEntity(52U);
    msg.control_src = 35133U;
    msg.control_ent = 219U;
    msg.timeout = 0.7374675951560158;
    msg.loiter_radius = 0.13846423409262698;
    msg.altitude_interval = 0.44811030721882106;

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
    msg.setTimeStamp(0.45685204202011864);
    msg.setSource(30602U);
    msg.setSourceEntity(85U);
    msg.setDestination(46193U);
    msg.setDestinationEntity(62U);
    msg.control_src = 4519U;
    msg.control_ent = 189U;
    msg.timeout = 0.07574344323022875;
    msg.loiter_radius = 0.1173168307719088;
    msg.altitude_interval = 0.8629510704954322;

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
    msg.setTimeStamp(0.9425336973426931);
    msg.setSource(33755U);
    msg.setSourceEntity(169U);
    msg.setDestination(43482U);
    msg.setDestinationEntity(104U);
    msg.control_src = 26186U;
    msg.control_ent = 6U;
    msg.timeout = 0.4363966413717283;
    msg.loiter_radius = 0.4498003980674581;
    msg.altitude_interval = 0.9537692517086467;

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
    msg.setTimeStamp(0.43580550604045765);
    msg.setSource(51567U);
    msg.setSourceEntity(103U);
    msg.setDestination(9115U);
    msg.setDestinationEntity(11U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.30423199736181106;
    tmp_msg_0.speed_units = 201U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2997933848029868;
    tmp_msg_1.z_units = 43U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.25548477647010137;
    msg.lon = 0.7373516574439074;
    msg.radius = 0.7308430943428831;

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
    msg.setTimeStamp(0.6478101145544968);
    msg.setSource(59895U);
    msg.setSourceEntity(41U);
    msg.setDestination(65153U);
    msg.setDestinationEntity(43U);
    msg.flags = 196U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5199168110824738;
    tmp_msg_0.speed_units = 104U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6185239766167584;
    tmp_msg_1.z_units = 235U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9142253427623802;
    msg.lon = 0.7021434650194334;
    msg.radius = 0.44615742462754093;

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
    msg.setTimeStamp(0.379350847736836);
    msg.setSource(53962U);
    msg.setSourceEntity(242U);
    msg.setDestination(19122U);
    msg.setDestinationEntity(169U);
    msg.flags = 36U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6930774014621032;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.34547783513808195;
    tmp_msg_1.z_units = 207U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9793406498790068;
    msg.lon = 0.3973447062039629;
    msg.radius = 0.5832556123839957;

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
    msg.setTimeStamp(0.47858005573707985);
    msg.setSource(60423U);
    msg.setSourceEntity(104U);
    msg.setDestination(52051U);
    msg.setDestinationEntity(141U);
    msg.control_src = 61307U;
    msg.control_ent = 135U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 123U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5579024225754137;
    tmp_tmp_msg_0_0.speed_units = 136U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8980565971343633;
    tmp_tmp_msg_0_1.z_units = 23U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9389712026639991;
    tmp_msg_0.lon = 0.47310269786187176;
    tmp_msg_0.radius = 0.6095578109077483;
    msg.reference.set(tmp_msg_0);
    msg.state = 232U;
    msg.proximity = 199U;

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
    msg.setTimeStamp(0.2876437956470651);
    msg.setSource(34380U);
    msg.setSourceEntity(27U);
    msg.setDestination(47330U);
    msg.setDestinationEntity(157U);
    msg.control_src = 10188U;
    msg.control_ent = 22U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 78U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.24039221704468017;
    tmp_tmp_msg_0_0.speed_units = 13U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5535192960373532;
    tmp_tmp_msg_0_1.z_units = 216U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5791576361612618;
    tmp_msg_0.lon = 0.2725550816157941;
    tmp_msg_0.radius = 0.2533122189890582;
    msg.reference.set(tmp_msg_0);
    msg.state = 232U;
    msg.proximity = 116U;

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
    msg.setTimeStamp(0.7046474636913511);
    msg.setSource(40753U);
    msg.setSourceEntity(163U);
    msg.setDestination(65077U);
    msg.setDestinationEntity(87U);
    msg.control_src = 35628U;
    msg.control_ent = 175U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 202U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.07736864078647687;
    tmp_tmp_msg_0_0.speed_units = 152U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9743944021510967;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6604226754881222;
    tmp_msg_0.lon = 0.11880802980042737;
    tmp_msg_0.radius = 0.24905749681124234;
    msg.reference.set(tmp_msg_0);
    msg.state = 222U;
    msg.proximity = 71U;

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
    msg.setTimeStamp(0.3714849206686096);
    msg.setSource(53342U);
    msg.setSourceEntity(146U);
    msg.setDestination(11102U);
    msg.setDestinationEntity(208U);
    msg.ax_cmd = 0.7741443960355013;
    msg.ay_cmd = 0.6830944659909168;
    msg.az_cmd = 0.7424575974541021;
    msg.ax_des = 0.0920434082029864;
    msg.ay_des = 0.121762991652693;
    msg.az_des = 0.541747435651105;
    msg.virt_err_x = 0.44957634317899586;
    msg.virt_err_y = 0.5762162441579782;
    msg.virt_err_z = 0.04599181091342275;
    msg.surf_fdbk_x = 0.27492287806973525;
    msg.surf_fdbk_y = 0.06670813460474012;
    msg.surf_fdbk_z = 0.21403931797192288;
    msg.surf_unkn_x = 0.901658376029324;
    msg.surf_unkn_y = 0.4294093686370044;
    msg.surf_unkn_z = 0.8340639140382393;
    msg.ss_x = 0.5680022689902534;
    msg.ss_y = 0.7093620884336909;
    msg.ss_z = 0.268321642022571;

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
    msg.setTimeStamp(0.6500815780815559);
    msg.setSource(26857U);
    msg.setSourceEntity(214U);
    msg.setDestination(8412U);
    msg.setDestinationEntity(245U);
    msg.ax_cmd = 0.07729928299656641;
    msg.ay_cmd = 0.7648884229206276;
    msg.az_cmd = 0.8634778074089681;
    msg.ax_des = 0.8862644546031072;
    msg.ay_des = 0.7228324304006;
    msg.az_des = 0.9467474379041726;
    msg.virt_err_x = 0.13833021021860037;
    msg.virt_err_y = 0.8059457536812346;
    msg.virt_err_z = 0.8133158557121819;
    msg.surf_fdbk_x = 0.800280272350259;
    msg.surf_fdbk_y = 0.02396106899815209;
    msg.surf_fdbk_z = 0.4094674034144288;
    msg.surf_unkn_x = 0.23039959636849916;
    msg.surf_unkn_y = 0.4260848438237086;
    msg.surf_unkn_z = 0.45213581039009276;
    msg.ss_x = 0.8217887730367254;
    msg.ss_y = 0.6317087709983531;
    msg.ss_z = 0.7164655181865057;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FKUSVLMAWTWXPUNGLHMQRXBPX");
    tmp_msg_0.dist = 0.7462767435329509;
    tmp_msg_0.err = 0.972212310474519;
    tmp_msg_0.ctrl_imp = 0.7520507433723675;
    tmp_msg_0.rel_dir_x = 0.9874283732136598;
    tmp_msg_0.rel_dir_y = 0.8928268315041001;
    tmp_msg_0.rel_dir_z = 0.17495467981538104;
    tmp_msg_0.err_x = 0.06761136594961303;
    tmp_msg_0.err_y = 0.5520777191422628;
    tmp_msg_0.err_z = 0.33833319715791177;
    tmp_msg_0.rf_err_x = 0.9943494405686865;
    tmp_msg_0.rf_err_y = 0.47821712425544505;
    tmp_msg_0.rf_err_z = 0.4736053328223976;
    tmp_msg_0.rf_err_vx = 0.245367737761224;
    tmp_msg_0.rf_err_vy = 0.44183310022207967;
    tmp_msg_0.rf_err_vz = 0.1886193258495722;
    tmp_msg_0.ss_x = 0.5361628146830819;
    tmp_msg_0.ss_y = 0.534309282659205;
    tmp_msg_0.ss_z = 0.8751318514118948;
    tmp_msg_0.virt_err_x = 0.8336539603458355;
    tmp_msg_0.virt_err_y = 0.30117402457600273;
    tmp_msg_0.virt_err_z = 0.4541195945324785;
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
    msg.setTimeStamp(0.958758614140542);
    msg.setSource(10039U);
    msg.setSourceEntity(67U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.01777265160393393;
    msg.ay_cmd = 0.9358223615656786;
    msg.az_cmd = 0.5183384154459294;
    msg.ax_des = 0.8060517128048647;
    msg.ay_des = 0.2724682612381255;
    msg.az_des = 0.07009335519964188;
    msg.virt_err_x = 0.35668502291729;
    msg.virt_err_y = 0.6996684851000985;
    msg.virt_err_z = 0.26555847269877253;
    msg.surf_fdbk_x = 0.5554700229001543;
    msg.surf_fdbk_y = 0.8015213084748751;
    msg.surf_fdbk_z = 0.8671506343929671;
    msg.surf_unkn_x = 0.9197161126614743;
    msg.surf_unkn_y = 0.4677875445948192;
    msg.surf_unkn_z = 0.7888011532757461;
    msg.ss_x = 0.45089656602873085;
    msg.ss_y = 0.2870934713636062;
    msg.ss_z = 0.5384811286015704;

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
    msg.setTimeStamp(0.13632582550980765);
    msg.setSource(22822U);
    msg.setSourceEntity(114U);
    msg.setDestination(12053U);
    msg.setDestinationEntity(5U);
    msg.s_id.assign("EYOONJNWDDGUSWTHYIDFAGFEGUDYHFLXEVBHKQJKFKJSVZYIEAPKRBAINKCGZHDTZMQIGTLSSTHVOTQTDGKNNSNFELCYRJTAJMRMROLAEMBCPSRIQMHKRWUXMZRXPUQDVKEVAWZLFZMWBRNXALBAVGZOPAWPXUOCFKXSOBDAMZZNEWWYVBNIHFCSQQUUNITTGKYO");
    msg.dist = 0.6288753031414782;
    msg.err = 0.8636911846472091;
    msg.ctrl_imp = 0.9697818079284702;
    msg.rel_dir_x = 0.839770703736005;
    msg.rel_dir_y = 0.4100613240404165;
    msg.rel_dir_z = 0.6308233575753615;
    msg.err_x = 0.7652733013011763;
    msg.err_y = 0.3195295303671135;
    msg.err_z = 0.5437756288739248;
    msg.rf_err_x = 0.3264420160210415;
    msg.rf_err_y = 0.4304854215283993;
    msg.rf_err_z = 0.6659853960720666;
    msg.rf_err_vx = 0.9377594879222079;
    msg.rf_err_vy = 0.8213993318041918;
    msg.rf_err_vz = 0.438220025309474;
    msg.ss_x = 0.08665377224207205;
    msg.ss_y = 0.215437279177225;
    msg.ss_z = 0.8944977330789291;
    msg.virt_err_x = 0.4821326200638292;
    msg.virt_err_y = 0.17063154793367818;
    msg.virt_err_z = 0.3592352880021945;

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
    msg.setTimeStamp(0.04222556443844783);
    msg.setSource(54073U);
    msg.setSourceEntity(218U);
    msg.setDestination(28773U);
    msg.setDestinationEntity(38U);
    msg.s_id.assign("GYPBZEMFPNSFIARYBVECSHWMTCDZLCOLHOWILRVDKPBTGSTJHCESQQDOYFNIJCRXSIDWNZVSJEVKMTJWNUFQVDPNPLTGSRMNAOOXZCFRYIUAMUQBRZHJFDEGLCPJAJQZHVBBVMFYPYKBEHNAUGWRXHALDXVQEEOXDVWOTGUKBMWUPZMICZAGQKTUOHGRHOLUXCDLZCYEGILX");
    msg.dist = 0.1457980134083543;
    msg.err = 0.9316475027207549;
    msg.ctrl_imp = 0.9013881767297856;
    msg.rel_dir_x = 0.6067196397360073;
    msg.rel_dir_y = 0.6465947097481383;
    msg.rel_dir_z = 0.29647738635746346;
    msg.err_x = 0.5428397702896137;
    msg.err_y = 0.5366217772357293;
    msg.err_z = 0.5603635889953936;
    msg.rf_err_x = 0.8165329396038778;
    msg.rf_err_y = 0.4510404515826485;
    msg.rf_err_z = 0.4792994302268738;
    msg.rf_err_vx = 0.967817748030078;
    msg.rf_err_vy = 0.35686673277973446;
    msg.rf_err_vz = 0.8463904747390055;
    msg.ss_x = 0.29926975803580336;
    msg.ss_y = 0.308989669684796;
    msg.ss_z = 0.55066659185103;
    msg.virt_err_x = 0.561253442810796;
    msg.virt_err_y = 0.5698175667133056;
    msg.virt_err_z = 0.28751518693796485;

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
    msg.setTimeStamp(0.5163854425177851);
    msg.setSource(26429U);
    msg.setSourceEntity(103U);
    msg.setDestination(37327U);
    msg.setDestinationEntity(42U);
    msg.s_id.assign("XIQBSUUVTCZXEBVDMEKPWDSBFHPFESDWRIUCKUNRQFJVVYNQMBJUZBOQJYNJWQIMKZSGLOIMSVHCUCAYWMEEHAGHWVFTQRTHBLQOYHQVLHNPRKKYIBMZIFRU");
    msg.dist = 0.1327024320161413;
    msg.err = 0.12482300375334054;
    msg.ctrl_imp = 0.4421501030863244;
    msg.rel_dir_x = 0.7198090853574751;
    msg.rel_dir_y = 0.23246509221702805;
    msg.rel_dir_z = 0.8407357466327912;
    msg.err_x = 0.472862008892196;
    msg.err_y = 0.08760527051128919;
    msg.err_z = 0.1878845173747239;
    msg.rf_err_x = 0.7601348787668986;
    msg.rf_err_y = 0.034225751141001126;
    msg.rf_err_z = 0.8486199155043234;
    msg.rf_err_vx = 0.5728207925545675;
    msg.rf_err_vy = 0.42318510705602086;
    msg.rf_err_vz = 0.10280471974255967;
    msg.ss_x = 0.5049114496105734;
    msg.ss_y = 0.5869161848002117;
    msg.ss_z = 0.5939715358515122;
    msg.virt_err_x = 0.7879210173166363;
    msg.virt_err_y = 0.40898045533926874;
    msg.virt_err_z = 0.1781339572370545;

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
    msg.setTimeStamp(0.38549055248755193);
    msg.setSource(36633U);
    msg.setSourceEntity(206U);
    msg.setDestination(1658U);
    msg.setDestinationEntity(49U);
    msg.timeout = 41256U;
    msg.rpm = 0.9063426482693391;
    msg.direction = 89U;
    msg.custom.assign("OSBIBIEDGJGEEAUWJJHAAUOQYBLMNFVUYUYRHIUINAABQWDVNXZKSBEBQLQMVXVHDRJVSUXGWGYPAMRKJHPBDLIXTEQQWGKRYCRFWJHVJCZVS");

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
    msg.setTimeStamp(0.8850499449056719);
    msg.setSource(61036U);
    msg.setSourceEntity(135U);
    msg.setDestination(41905U);
    msg.setDestinationEntity(161U);
    msg.timeout = 40578U;
    msg.rpm = 0.889873131762808;
    msg.direction = 186U;
    msg.custom.assign("FYPWUEAOSSNQKOOZJWFKDBBGVLQUCLOYMTJJBHHUQTNXXZKJSPJKSMUQTAFRIZWZYKPWYMHMTDKELAIHRGULBEXQVEFQRXTTIMNFECHCLVVBHECFAVWFMYEZRBOXCSPRVNYCIWDZTPWSRBEJDTMCMVAKRGXJBNDIZMEGAGUXYNSGDWGPZLPIOROOCXDKBKGISZDNVLNYJHDXHGHRBQSARJAUHFZQPTCOATGL");

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
    msg.setTimeStamp(0.9047065117040286);
    msg.setSource(37921U);
    msg.setSourceEntity(110U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(243U);
    msg.timeout = 41998U;
    msg.rpm = 0.1652936013860552;
    msg.direction = 65U;
    msg.custom.assign("NVDICLNWDIUCSNECWUHZRBBQHSZCQMRPTHVUVVUKHFXXKWSVRHBDCUGEDTQOSAIZCZMUZBFILIXDYTPIFGUFFWZNVOEXAJIXOMAWSZGQLMHEXJKSPEWVTQNEMKSJNVPBKBMGLKHOFRCATGTSZQSTDOWKQYVWEGNXKDYPLAGRNWUVYRPPCJD");

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
    msg.setTimeStamp(0.8161896194714836);
    msg.setSource(11505U);
    msg.setSourceEntity(64U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("WSMZDYEAQFQUOYYDCBARJEQHNJKREDSSTMUBGKWLUOMOQAHUODFLTGIKCAKXFPDIWVMIAMNGPOWAIAHYGQKMCXNVPHHMJEQVIPSEVEYXSCSYIQXXXNLEPHJLTOOQRFEFJVTNODTWRQZCVRDKBHKFVGTBLZWSFOGMVUUIHAJILBETLJLSCDXBMBGWYONHPPLYZNSGKHJ");
    msg.type = 219U;
    msg.op = 1U;
    msg.group_name.assign("WLTWTODGQMYEILVDJWZINCBQVJHHHPZYPPMHRLSTAGSBBAKRQZQKBJGUTYSQMAFKGESNHDOZIVGXQDNTZXBSHWVVUZOGPBJBXCFTYZDHFYXHLJMFZFKBUXQTCANNCXBWWCTIEYXEUUVVPCRRJELIAYYODKOUKELZOECAEVKRDCKRZFAIRNSFCYLGDGSMUMUYXPPKNNFHRAKABD");
    msg.plan_id.assign("DWVZKCXXJLQQZTSFTUHJXZMPZMEWXCRZWFVUTUNDEILVPCYZGYTNMVPSDYAHHRMHATVQXYGVOMKSVRQYKSKZPAGUXBITXLYKVHYADGEFMUWAUDJKAFBEEQ");
    msg.description.assign("PTKPMIXFLUYWNVHJBPMQYLPQXAPTJECGAWGRBBGWPECCDRFFUSCDDQFBKNNEAPGKEZLMNRKFWSZHOQMVHVYTBZMBQWJRLSSLIOBODLCWCVLWPTTYZQBOERXRUVLWZEGHTUXDMBMEJATMATKZSXJHOQCSZBTLADRWWGUIHYRVYEVAUFFVACEVXXTYPAYDJGZSNXKOAOORKVEIINSUCHFXUDZDHIKOPKZQGJQLUFFJGNHDMNGSJINUCXYHJKR");
    msg.reference_frame = 12U;
    msg.leader_bank_lim = 0.18907350454923477;
    msg.leader_speed_min = 0.3770516406774863;
    msg.leader_speed_max = 0.8823942645164815;
    msg.leader_alt_min = 0.7485568265193402;
    msg.leader_alt_max = 0.22229524684950053;
    msg.pos_sim_err_lim = 0.6569792656326265;
    msg.pos_sim_err_wrn = 0.25504128502930956;
    msg.pos_sim_err_timeout = 42527U;
    msg.converg_max = 0.15268328903046657;
    msg.converg_timeout = 22673U;
    msg.comms_timeout = 7042U;
    msg.turb_lim = 0.5085394658312035;
    msg.custom.assign("CSZYNOONNFUINGAQNGUYKIXMNF");

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
    msg.setTimeStamp(0.3689788170262379);
    msg.setSource(22317U);
    msg.setSourceEntity(23U);
    msg.setDestination(46270U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("HNOZPUNDRREUUXAJPGATXYODIFTFYKTKLUAFIGXXCAWGOVYBYNGDQSSVEMVJCWKCFJXYFCLVDRISALMO");
    msg.type = 195U;
    msg.op = 242U;
    msg.group_name.assign("BSDODZFCUWXNOXDTMVERBZKLCSIPGHLCSSAQAFAUQIXZPNJCQMYCVCMPJDUFBKVOQTWQWFANLRBE");
    msg.plan_id.assign("PUVIZDXBPQRRUWGFELBXWWMYKCAEKZBRIBYJOSSTUMBNJGUPOHMMWFBZMPTXVCUTLDXJNLFHDAQYNTELQUQXXZJGLPAZSYFIKYSMTIKQWCJUUYBPHINSGSVHWIYSRFMAOHJJIBTQMAURWTOVEQEIZOERQRCTKTHPDHNOGESKRAAVCZABJDSCDMADEGJXGRPWGIEFNQHVNDKDAOSXKVLCONPLYGOHEGLCLXPJVQZWK");
    msg.description.assign("PAXXFTFKZFRNBGGGZUNOBBQOVDHBWUYMKKTNRMSTJLKCZGVLWTUHVPWYUUCJCUVLJJJQHCOYBHKAERBLWOHQWWQBEPJCNUXXSSZINVLAYIVBSFRNJVEYF");
    msg.reference_frame = 20U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48574U;
    tmp_msg_0.off_x = 0.6662432680992328;
    tmp_msg_0.off_y = 0.8610610866076367;
    tmp_msg_0.off_z = 0.8019575040137465;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6032180891065275;
    msg.leader_speed_min = 0.14492736610645152;
    msg.leader_speed_max = 0.10398892452559871;
    msg.leader_alt_min = 0.639078098498668;
    msg.leader_alt_max = 0.031553908767087635;
    msg.pos_sim_err_lim = 0.3739521448251727;
    msg.pos_sim_err_wrn = 0.34320875957665453;
    msg.pos_sim_err_timeout = 29243U;
    msg.converg_max = 0.3731402778053945;
    msg.converg_timeout = 53680U;
    msg.comms_timeout = 63741U;
    msg.turb_lim = 0.6674685313830901;
    msg.custom.assign("VWGZHWGORZPMCEBOTKBTMSKROGAIWGKPJCBCDEPGXJIQFNBWDFEYVJYHEUFKHLXVESXFRIUNXHVVTBIDXJGAHSVLMPBZDEHNXAPLWOUAJIGQLLXENBQKMRYZKSWBPLYAARYIQVOZTFPGBHWZROCPSSJZBRORLNCTGCXNHFXCCFTURWXJFNOMUWAEFETMQ");

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
    msg.setTimeStamp(0.718906735951859);
    msg.setSource(46162U);
    msg.setSourceEntity(84U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(106U);
    msg.formation_name.assign("VWNKDEORCCGWNLVGXAJGNPQJMWCEYHYSIKGRAFRMXIVSBURBJVI");
    msg.type = 61U;
    msg.op = 211U;
    msg.group_name.assign("FKPCRKUSMHXKRKTNWOWIWVQTABWPXQUCYUVRGSGXXBGNRFMYLKDIPTILKDICOAZRLTDZQWIEDAZSZJNLPWCHCYITOJVYYOMBENPBZOREJGQGSFEKQPHGVDIUXQFVNXTCSPABJSCBRUUSFCJGRFJWYHNDRHBZAXNOLIMEWJUED");
    msg.plan_id.assign("DHWEVLHNJOZPMUHOJMWTCCNJFDZKOBSKRZDOIIQYAKKYOQFOLNEAPBJTXKXMRXXCSAPJHAPOUBLXUIPLRWTQI");
    msg.description.assign("KMNVDRHOQZKEYGFWLCROYHZBFIJGABUTCYKLPYLOIKEEZDCPWXJTGSTZTKMMZPQZRZDZESEDXKTRWANVWDATMXUOXALBHMGVBQUTEIBQGUXYNEHPLOAYSXBIPVSTMWQAHSMDKRMFOSOHBLVQJVQQKNAZHGVLFPSRFWCUIZSNOQRNKRMRHPWVDJB");
    msg.reference_frame = 222U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49334U;
    tmp_msg_0.off_x = 0.6971515291511917;
    tmp_msg_0.off_y = 0.19219332188692617;
    tmp_msg_0.off_z = 0.955424443028012;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4804122656312897;
    msg.leader_speed_min = 0.34604179086974607;
    msg.leader_speed_max = 0.8302001341343387;
    msg.leader_alt_min = 0.43135674246427436;
    msg.leader_alt_max = 0.7773349671090358;
    msg.pos_sim_err_lim = 0.9891094052624573;
    msg.pos_sim_err_wrn = 0.7249970702916912;
    msg.pos_sim_err_timeout = 25124U;
    msg.converg_max = 0.5892505373322887;
    msg.converg_timeout = 57402U;
    msg.comms_timeout = 24137U;
    msg.turb_lim = 0.6221306658062782;
    msg.custom.assign("ZMGZIPIRSAGJGYDIMRDJVAFSELMNJJBQYRPSLNGOYFOYZSVPZJFRFWHOMMTENKJNIAXSYEWBIKSXXQWCSQTDPRRUZNKFFOABCIDXJXEVYTKKLWWAUTOHYTBJGCXBUFLVWQCCDPNIDZAADOEKTVOOWYXFDJDUWGUHRSLQKLPGBKZIAMSTGHLEYNMIZLTAHUVMZGXVWCCBPVNHZDQHMRGBRKB");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.8368104927132515);
    msg.setSource(24006U);
    msg.setSourceEntity(20U);
    msg.setDestination(24124U);
    msg.setDestinationEntity(124U);
    msg.op_mode = 117U;
    msg.error_count = 72U;
    msg.error_ents.assign("YWDTNXZBUIZVWKLVVWHIALIITVKBZGZQWJBKCPJOVYYFHHPPXBJSAAQRMRXZFJBYRLCXBOYQEIUDELQHQMWOHZACINTLPNSIVSNVLYO");
    msg.maneuver_type = 2912U;
    msg.maneuver_stime = 0.4594448443767888;
    msg.maneuver_eta = 35503U;
    msg.control_loops = 2768980649U;
    msg.flags = 176U;
    msg.last_error.assign("EYCZSRLHOBEZMXPDUWJVRFHSZDTPLGSKNTYZMMJNALIMAFCMSJAPHAYEJNWSONSAGWZBBFIHXTIUYIQHNAEQBJHUPTDIOKJQDDVRIVPBLOGCMGDXEVRJZBDEYBTXEXSYFQYCKXUARTEZEPRVQAANCIWPFMAMTDBOTKCFIWQGKXI");
    msg.last_error_time = 0.13808580544746585;

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
    msg.setTimeStamp(0.9232127846902292);
    msg.setSource(21515U);
    msg.setSourceEntity(171U);
    msg.setDestination(21606U);
    msg.setDestinationEntity(252U);
    msg.op_mode = 116U;
    msg.error_count = 162U;
    msg.error_ents.assign("EKWYGNERIXWTZTDWODMTQRYFRNPIXAYILEJJQXOBIMUKEUDFMMCIKTFNZOCKDGAWGQNONQXTJCLBSROTXSCUQPFHZKVUVGRJHQYKCYFMUIVLERWIHDWKPSYIZXSEKGAUAHRPBNGDBHHSUCVFVQXNZGRDMOZGXMDPJASLCARULVPIFNQAPCBBRYQDWOUTFFPZB");
    msg.maneuver_type = 62282U;
    msg.maneuver_stime = 0.9163226472919737;
    msg.maneuver_eta = 30107U;
    msg.control_loops = 3520477978U;
    msg.flags = 60U;
    msg.last_error.assign("YJKYOAAYYMWKHROTDLGSJTGZEDEKXAB");
    msg.last_error_time = 0.6884211755708732;

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
    msg.setTimeStamp(0.2137786415317322);
    msg.setSource(28006U);
    msg.setSourceEntity(180U);
    msg.setDestination(55024U);
    msg.setDestinationEntity(194U);
    msg.op_mode = 167U;
    msg.error_count = 5U;
    msg.error_ents.assign("WUAMTFCYXFNV");
    msg.maneuver_type = 6742U;
    msg.maneuver_stime = 0.7192903903027171;
    msg.maneuver_eta = 17379U;
    msg.control_loops = 2652307572U;
    msg.flags = 209U;
    msg.last_error.assign("JHVIWBABZWKBTKZATUSDDUPPPAKAHJHZEGQVBTFGIDIPSCMFTVJDSDDENVCCSYHRKQXOCQJNMJUYYUSPHBKORQNGIROWMCPOFXGELLZGYEFEOBUWZXBROVAYCABMPIJUERJDLCFYZFLDNRYJMESKJSCMKBIXQITZEUTONVWXHHILSVYIOSYAT");
    msg.last_error_time = 0.8160616048135243;

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
    msg.setTimeStamp(0.005299027249636157);
    msg.setSource(13770U);
    msg.setSourceEntity(228U);
    msg.setDestination(8518U);
    msg.setDestinationEntity(28U);
    msg.type = 191U;
    msg.request_id = 1398U;
    msg.command = 142U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 30426U;
    tmp_msg_0.rpm = 0.4929463710191455;
    tmp_msg_0.direction = 9U;
    tmp_msg_0.custom.assign("VSSNMHSBGZCGIRJRVVQWSCTQPPMCVZQQFTZIBFD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40894U;
    msg.info.assign("CEYFPKGEQRAXXASDHFCYRHPYVKVUSLDASI");

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
    msg.setTimeStamp(0.8785931430964964);
    msg.setSource(4584U);
    msg.setSourceEntity(96U);
    msg.setDestination(28301U);
    msg.setDestinationEntity(72U);
    msg.type = 240U;
    msg.request_id = 45720U;
    msg.command = 77U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 46422U;
    tmp_msg_0.flags = 57U;
    tmp_msg_0.lat = 0.42263384507431756;
    tmp_msg_0.lon = 0.26403230341019346;
    tmp_msg_0.start_z = 0.18061678274587023;
    tmp_msg_0.start_z_units = 86U;
    tmp_msg_0.end_z = 0.9577139639064071;
    tmp_msg_0.end_z_units = 201U;
    tmp_msg_0.radius = 0.3643679625527887;
    tmp_msg_0.speed = 0.5787444840453427;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.custom.assign("JIPNFQQWNYXGVHMXVPRXGBLLEQPGKLLTCIQIVBETQCOKHABDQYCSBIHJSYVSJZNJKHZFMBSKARCTWYTAYEPFKGJXNPELBNGKOSIOCJQDRCHFSWTGXFIGOEPSQVXYCZUBDDBXJNCZMYZAQME");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12208U;
    msg.info.assign("SSFAZQTPESLDGRLXHLTAVRJSPIKOBFLMZFEAEQVFWIUPTAQTCXZOABHKGTRNQKKW");

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
    msg.setTimeStamp(0.8881284545112311);
    msg.setSource(30593U);
    msg.setSourceEntity(215U);
    msg.setDestination(28373U);
    msg.setDestinationEntity(226U);
    msg.type = 191U;
    msg.request_id = 35571U;
    msg.command = 129U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 12003U;
    tmp_msg_0.lat = 0.8425788368586904;
    tmp_msg_0.lon = 0.7890943159699824;
    tmp_msg_0.z = 0.38476936835004294;
    tmp_msg_0.z_units = 244U;
    tmp_msg_0.speed = 0.5887752381273098;
    tmp_msg_0.speed_units = 199U;
    tmp_msg_0.roll = 0.09363389661158794;
    tmp_msg_0.pitch = 0.35925793549582696;
    tmp_msg_0.yaw = 0.08484449971842489;
    tmp_msg_0.custom.assign("GAKZVXEDLOLOKSPNZEOQNGQXJRVTNVAISPCGMXXBFDZBGBVIGYJDIBMTQJEHNTUOFHSWPNHWRMDIMVNFBEXWTDYRQHLRAFXKBUDCFHYWEMZIWKLYGCUEOVDUBUHNQASMLGHOLWAQEJXQBZFQRUSCUIHEMLOMYQBJJARMPWGSLPYODUZDCNVFGSCTPZCCIFYKEULWDQTSTVAYJYXPTCSPCKIAAOTGPSFRPFZRKYEK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38901U;
    msg.info.assign("ZJVEQSWTCYOBWGJTSAUGJGGDBTQXTPXWSEPVOAUZPXLQTQZZICARZEOYWHFCCEMSVYJFBNBCXZXXKSHUVZDJLYKDONVYCDRKYHXMMFTUDNAZDURJPPSWJNASYIKCRIXB");

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
    msg.setTimeStamp(0.1093909205101834);
    msg.setSource(7439U);
    msg.setSourceEntity(223U);
    msg.setDestination(48483U);
    msg.setDestinationEntity(207U);
    msg.command = 100U;
    msg.entities.assign("ICWFOBHYKSCHBIBOSWKKLZZLMSRKNJDJIIHJCMVEGLLDAYHTLNWAXQXIQOVYYTRUMWLCVDTGHZTGEPANBQVSUASOPCIFVIXMSPDAKRMECNNARMKWVGTNYLRMLSBOCHZSZYDMPFUBQTWUXXFPCAPGZNFFDWQFOCSETJBFFWSZQQJBTVHQXGRNEZRGIBIAMIGKUZOVMNEGJEVJAKUDPUFYZADLTTHYEOPHOYPWRKJURYXX");

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
    msg.setTimeStamp(0.41856990097109303);
    msg.setSource(29727U);
    msg.setSourceEntity(127U);
    msg.setDestination(162U);
    msg.setDestinationEntity(120U);
    msg.command = 48U;
    msg.entities.assign("AKWRQBMHRJGQUDXILRCAWIANFFOHPFWFZCGOVLAEYCVBXYBENYVCPTPTNSTUOVKSYBSQQQJDHMMBUTUIWBJAAGKZFRMWVABXYSZYXEXCBCHOSGXWHMWHMRNZZNJMKFEKJSIKFEOYTEHGLLDJIVWXPNUSDVQOVPULCAEHGQGJYGKMILMNXCPRUTZSKRULKNOTFLVTCZSOGILEZKNTIPD");

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
    msg.setTimeStamp(0.93870194190105);
    msg.setSource(39053U);
    msg.setSourceEntity(242U);
    msg.setDestination(15703U);
    msg.setDestinationEntity(220U);
    msg.command = 95U;
    msg.entities.assign("BJOXLVRWVMDSOMTAVXESGBRSW");

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
    msg.setTimeStamp(0.6051100167460753);
    msg.setSource(57970U);
    msg.setSourceEntity(231U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(180U);
    msg.mcount = 10U;
    msg.mnames.assign("HSYWMGCFKQTFFYYULTEAINHVIOFGTEAOYKZCSHBDKLZPJNXXJBLSGCSZBSVHTOUQMJKUJRIQBDOAOAXEFSUWDOOLJKIAU");
    msg.ecount = 145U;
    msg.enames.assign("XBWQCWXRRMMVRWDHQRBWPSZWUHKUWXQSKGCKMLFRLFXZGCTVIMCPXGGVN");
    msg.ccount = 247U;
    msg.cnames.assign("BSGUTZSTIXYHQNUZJYFPDWTYPHXWFYLOHOFKOZPBZKFJXVNYVQWDMWQWGDLUMKKLZXLNDRAZFIQTSYVELXOZDZSPPCBEHGQGGFTLXYCRDFUQDR");
    msg.last_error.assign("XKHEYAIHJWCVOGNXRCGISOGBYZCFOKOAFYLZFAYEMFYBACVBPHJWUUUXNLJDVCRDNJBHNDJSXRTVIKFPO");
    msg.last_error_time = 0.4485244442486068;

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
    msg.setTimeStamp(0.1507038323452381);
    msg.setSource(54734U);
    msg.setSourceEntity(67U);
    msg.setDestination(45599U);
    msg.setDestinationEntity(248U);
    msg.mcount = 60U;
    msg.mnames.assign("UFVYKFKWOBJWTUFMGOLZDVREAJTAYJIISEWQQQJTUSRBTULTHPNQVDLFKOSXCMQPNSDWEJXOVZPYRDFSEHFDNOLWMGWMVNXZLURDIGGJWZCBAZJSTBSNHYHNIOVERYSHQUEBCMUBUPAQWCHIEXDTNACSCLPSOJXOIAFKMRMIEXLOHHRMRMUGGQNZALPKLZVBJKERDXYVRNVPOLGAYVUZBQYFYIKMTCXADDBICKFIYGPZABW");
    msg.ecount = 234U;
    msg.enames.assign("QCXQIGWNETBDZUBVBDFFWTNRKSIVOJGLQWJWZLEONABZMUTGPCQDJZONAKFSCVLHENUVEWPKBOYPAIBDJFHGCFSODRCMZAWAIEWCJJKWOFKDQLGHIANLRIFKEUXRUMFMTSQVSYQSWRUYVBRJBELQIMBXVKTVXEFBHEKEHMPMTOCOKDXXTSFYMJYNCXUDMDRLPYCGHZAIHHIDURNXGNUASTXARCQKPAGQTVWJZGUOSSP");
    msg.ccount = 73U;
    msg.cnames.assign("RCBFHEMQAMUPRTMTSHAKUQYIHLSDDJCYUCQWYUYOGWAVJFIEPFNDLWKXRDIGTUSOBOIGKJJZCTTOZGIRNDGHJNBBKC");
    msg.last_error.assign("IKSRUXIIHVWGHWCBHPGD");
    msg.last_error_time = 0.05156087285603361;

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
    msg.setTimeStamp(0.2759996866174126);
    msg.setSource(63164U);
    msg.setSourceEntity(45U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(65U);
    msg.mcount = 122U;
    msg.mnames.assign("ZUPGYAKOPKVUPBVLHSPZOTFKCNJKKXHIOFZOCGYLSEWBRSEPTROGWSYMHQGYULLCTITDCADSYXEJWQUWBBGMAFNAKIZHBSAIFJDTDQARFOVTCMAEWDRBQUVHELXXQNRZGXJENSSMXQJFATCVROZLIQWXBPUCZAWZLGICBNMGUFBMVFNPRCRCUVP");
    msg.ecount = 131U;
    msg.enames.assign("TGFUWTMZBJIGYCULGROYBMCAPKQRZUMEZNMTLDFI");
    msg.ccount = 202U;
    msg.cnames.assign("ZJEVSBCPLNKCGRFDYDRXGCERCHHUWTPUXKRENASYWRGGJOGMVFKSTEECHOIU");
    msg.last_error.assign("WSAOROADPCERRXILMLHXBFWQAXWLLVUOEMBBAPONITJUKWGPAJVHJHSDEPQTUSHYVTQABGOMZSLDZHIUHDFCJYYZCEZSRDWQLNURLWPYCHGYL");
    msg.last_error_time = 0.9929444997440273;

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
    msg.setTimeStamp(0.5393984457115527);
    msg.setSource(60263U);
    msg.setSourceEntity(147U);
    msg.setDestination(10903U);
    msg.setDestinationEntity(45U);
    msg.mask = 43U;
    msg.max_depth = 0.8151445214390269;
    msg.min_altitude = 0.8496150260279892;
    msg.max_altitude = 0.27929860471024837;
    msg.min_speed = 0.4908540572884189;
    msg.max_speed = 0.2281159594460923;
    msg.max_vrate = 0.5252913967676912;
    msg.lat = 0.15065134202305908;
    msg.lon = 0.3264169879820421;
    msg.orientation = 0.7020585322236939;
    msg.width = 0.35087342224878737;
    msg.length = 0.67824809320237;

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
    msg.setTimeStamp(0.009112602732257113);
    msg.setSource(713U);
    msg.setSourceEntity(182U);
    msg.setDestination(58493U);
    msg.setDestinationEntity(81U);
    msg.mask = 193U;
    msg.max_depth = 0.7727963480763353;
    msg.min_altitude = 0.16679127879525257;
    msg.max_altitude = 0.5934418435003649;
    msg.min_speed = 0.8386896188838594;
    msg.max_speed = 0.27443931010735145;
    msg.max_vrate = 0.7291218338413377;
    msg.lat = 0.19124690746108253;
    msg.lon = 0.5985097947184829;
    msg.orientation = 0.7449009309686132;
    msg.width = 0.9510865134380083;
    msg.length = 0.2818483869935644;

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
    msg.setTimeStamp(0.5329877071058381);
    msg.setSource(32995U);
    msg.setSourceEntity(4U);
    msg.setDestination(54542U);
    msg.setDestinationEntity(86U);
    msg.mask = 28U;
    msg.max_depth = 0.7512020188504117;
    msg.min_altitude = 0.10585897244842446;
    msg.max_altitude = 0.7791974150408179;
    msg.min_speed = 0.22168169696474926;
    msg.max_speed = 0.15496487917734247;
    msg.max_vrate = 0.1598075886722391;
    msg.lat = 0.9367562980741949;
    msg.lon = 0.9174386933567686;
    msg.orientation = 0.8118853937391683;
    msg.width = 0.8154223513663927;
    msg.length = 0.009893983329997136;

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
    msg.setTimeStamp(0.028823270039583182);
    msg.setSource(62299U);
    msg.setSourceEntity(118U);
    msg.setDestination(50890U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.17254297324688395);
    msg.setSource(28438U);
    msg.setSourceEntity(201U);
    msg.setDestination(29481U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.8738160539643874);
    msg.setSource(34726U);
    msg.setSourceEntity(86U);
    msg.setDestination(58877U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.12836537922884372);
    msg.setSource(3776U);
    msg.setSourceEntity(10U);
    msg.setDestination(48730U);
    msg.setDestinationEntity(249U);
    msg.duration = 58565U;

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
    msg.setTimeStamp(0.9665067371716122);
    msg.setSource(48220U);
    msg.setSourceEntity(232U);
    msg.setDestination(38632U);
    msg.setDestinationEntity(50U);
    msg.duration = 33088U;

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
    msg.setTimeStamp(0.9317814953806132);
    msg.setSource(57579U);
    msg.setSourceEntity(31U);
    msg.setDestination(20901U);
    msg.setDestinationEntity(210U);
    msg.duration = 22758U;

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
    msg.setTimeStamp(0.9929785024650861);
    msg.setSource(62954U);
    msg.setSourceEntity(121U);
    msg.setDestination(63722U);
    msg.setDestinationEntity(77U);
    msg.enable = 93U;
    msg.mask = 2160148155U;
    msg.scope_ref = 3462038253U;

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
    msg.setTimeStamp(0.22098749891974168);
    msg.setSource(20265U);
    msg.setSourceEntity(209U);
    msg.setDestination(10426U);
    msg.setDestinationEntity(254U);
    msg.enable = 133U;
    msg.mask = 2426584360U;
    msg.scope_ref = 734779222U;

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
    msg.setTimeStamp(0.47228789281665495);
    msg.setSource(43082U);
    msg.setSourceEntity(204U);
    msg.setDestination(18096U);
    msg.setDestinationEntity(179U);
    msg.enable = 189U;
    msg.mask = 3345033092U;
    msg.scope_ref = 797328482U;

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
    msg.setTimeStamp(0.11164075476703128);
    msg.setSource(53827U);
    msg.setSourceEntity(233U);
    msg.setDestination(1444U);
    msg.setDestinationEntity(192U);
    msg.medium = 47U;

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
    msg.setTimeStamp(0.3013619420252517);
    msg.setSource(31151U);
    msg.setSourceEntity(185U);
    msg.setDestination(26721U);
    msg.setDestinationEntity(216U);
    msg.medium = 176U;

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
    msg.setTimeStamp(0.9115681631038485);
    msg.setSource(51066U);
    msg.setSourceEntity(82U);
    msg.setDestination(8297U);
    msg.setDestinationEntity(155U);
    msg.medium = 247U;

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
    msg.setTimeStamp(0.9258771420806752);
    msg.setSource(37393U);
    msg.setSourceEntity(223U);
    msg.setDestination(36154U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5783981285998266;
    msg.type = 5U;

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
    msg.setTimeStamp(0.2930054427718979);
    msg.setSource(50709U);
    msg.setSourceEntity(76U);
    msg.setDestination(49089U);
    msg.setDestinationEntity(250U);
    msg.value = 0.3733384093376395;
    msg.type = 83U;

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
    msg.setTimeStamp(0.9502325429382077);
    msg.setSource(16948U);
    msg.setSourceEntity(117U);
    msg.setDestination(37888U);
    msg.setDestinationEntity(185U);
    msg.value = 0.9164887749404664;
    msg.type = 155U;

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
    msg.setTimeStamp(0.48498296634274374);
    msg.setSource(37676U);
    msg.setSourceEntity(116U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(129U);
    msg.possimerr = 0.2663656459073829;
    msg.converg = 0.15728530909699334;
    msg.turbulence = 0.36760661250852344;
    msg.possimmon = 203U;
    msg.commmon = 106U;
    msg.convergmon = 12U;

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
    msg.setTimeStamp(0.31762946577864526);
    msg.setSource(41375U);
    msg.setSourceEntity(40U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(1U);
    msg.possimerr = 0.39185942782408745;
    msg.converg = 0.8359863577971047;
    msg.turbulence = 0.9990607111040178;
    msg.possimmon = 145U;
    msg.commmon = 15U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.37752913603230875);
    msg.setSource(46889U);
    msg.setSourceEntity(123U);
    msg.setDestination(28461U);
    msg.setDestinationEntity(94U);
    msg.possimerr = 0.5271922155788618;
    msg.converg = 0.19422811259312467;
    msg.turbulence = 0.9695408901755588;
    msg.possimmon = 22U;
    msg.commmon = 23U;
    msg.convergmon = 45U;

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
    msg.setTimeStamp(0.21470468991465264);
    msg.setSource(56011U);
    msg.setSourceEntity(71U);
    msg.setDestination(26114U);
    msg.setDestinationEntity(41U);
    msg.autonomy = 177U;
    msg.mode.assign("HVEUIPKUCWQPRZINZSECIVGZYVEGNSAZIYZLWXQBTOIFGCPCFXCJMXWOU");

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
    msg.setTimeStamp(0.05904208940028233);
    msg.setSource(9234U);
    msg.setSourceEntity(114U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(74U);
    msg.autonomy = 131U;
    msg.mode.assign("IGURMQUWRNACKGLHIZZCPEOWEQNNLLKHLHKPMCFDGFQNHZZMCZJBGQVVLZBBALACSDDMHKZVOELOJGSIYOJDXUCXXNRPDVBAMDLPQUVOSZYEYRRJILXTOAGQYJIIEDNEMUUFZPVMLACYNBFQGUEFY");

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
    msg.setTimeStamp(0.818267819459413);
    msg.setSource(55580U);
    msg.setSourceEntity(66U);
    msg.setDestination(11226U);
    msg.setDestinationEntity(70U);
    msg.autonomy = 101U;
    msg.mode.assign("HKCIEFMVEUEXAROVWXWBRLTWZDBEUVTDPVZHJWZQOSYCIDN");

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
    msg.setTimeStamp(0.1001469477680429);
    msg.setSource(36682U);
    msg.setSourceEntity(1U);
    msg.setDestination(20704U);
    msg.setDestinationEntity(34U);
    msg.type = 76U;
    msg.op = 129U;
    msg.possimerr = 0.0793400101475048;
    msg.converg = 0.6161044426171781;
    msg.turbulence = 0.8016304258856471;
    msg.possimmon = 10U;
    msg.commmon = 151U;
    msg.convergmon = 27U;

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
    msg.setTimeStamp(0.12201221051046729);
    msg.setSource(7770U);
    msg.setSourceEntity(113U);
    msg.setDestination(25703U);
    msg.setDestinationEntity(176U);
    msg.type = 3U;
    msg.op = 66U;
    msg.possimerr = 0.5620977858732353;
    msg.converg = 0.3751832499743837;
    msg.turbulence = 0.8459685912151367;
    msg.possimmon = 92U;
    msg.commmon = 229U;
    msg.convergmon = 41U;

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
    msg.setTimeStamp(0.5749834704007447);
    msg.setSource(4142U);
    msg.setSourceEntity(146U);
    msg.setDestination(16621U);
    msg.setDestinationEntity(0U);
    msg.type = 129U;
    msg.op = 138U;
    msg.possimerr = 0.7144983392734057;
    msg.converg = 0.7472040697782704;
    msg.turbulence = 0.15580820389475658;
    msg.possimmon = 195U;
    msg.commmon = 128U;
    msg.convergmon = 251U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.06831677124314883);
    msg.setSource(30282U);
    msg.setSourceEntity(219U);
    msg.setDestination(44245U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.8181650596322743);
    msg.setSource(6567U);
    msg.setSourceEntity(23U);
    msg.setDestination(39759U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.2657482392130299);
    msg.setSource(57643U);
    msg.setSourceEntity(189U);
    msg.setDestination(17631U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.7337593932973907);
    msg.setSource(54100U);
    msg.setSourceEntity(146U);
    msg.setDestination(4155U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("QGDHXVQGJIQFXQQNGKJMRUQDGUPHYZVAFLIOZVHWWEXJUNVBOYILBEZAIQEYFHWANKNIPHIWRHXJWSFZXZYSAZETAAHIMHIMRSOSOBJFCYQHQESKCXYVEDYCNVUZXHWXNRMKCNLEEGT");
    msg.description.assign("VUPPQAHXLVAHCTUSNUZLDCHIEYMILYVTMNUPHZDZXBSAATWLBZXNBXJJQERNXARKONGGZIDDWJWRGXGPXFLNVLHWSTJGBNPEHSLZMPYYEXUEZHGLQUCNVKJCCHOSV");
    msg.vnamespace.assign("ABUUVNSQGLSCFQECWZPOJTFZGCOUQNIKLPXUFGMMRPYOTSOYDTGRCXCAWRVLJPGBDEGOYBDVWSZMRPIXYEJDLIJKVNCVTYCZJWBHPIOUHBSHLUQSJOAPENIBRTIXFXVMGIMQU");
    msg.start_man_id.assign("POHTFIJVCUSSTPXTAHNTMIGTUITNBOCVJIZMNDJQHVQDFJRTYPSEEXZDKFLDMYJTCKTMRWKHSNUVEEJJQOQPNMHUFKZLEADXXNVGYBFPCKUJGJWIKYLERIRPWLWSUBDLPLBIXZYGPQSHEHOGMIAIXCDLXWRFKDRQYVYNCKOARAKUGUSHFOMXWOGJYQQWAQDYHCSN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UOAWLKAXEECGGOIOGFEGYEYYAIRHBAUHNSABRQCEEZFZEKDRIYEYJCLXCFWDFEDRZUBRPMUFSNSUSSKRLPNVMQZQAQILCBIFMPQKSVEUBUMNSGUYUKSHUJVNMWODDMKXVLZCCHTTKXAGMXNHJBQMFLVRNANDVKHPKXTDYLZPARTQPBWKOPGGWDGAOMFWYLIJOLJYMTTNJTNZWITJWRIHZIQQXHFBCCOXTVHSYWRCLTS");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9931503761196977;
    tmp_tmp_msg_0_0.lon = 0.07241617783176257;
    tmp_tmp_msg_0_0.z = 0.11325734830334067;
    tmp_tmp_msg_0_0.z_units = 52U;
    tmp_tmp_msg_0_0.speed = 0.849940976785317;
    tmp_tmp_msg_0_0.speed_units = 41U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6613428060971293;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3202026021939989;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("CNZUZJUWPTPIFNTJXNMQDCSGRUXHPYTTRVAGEOOAPBAVCYEKNMBEVEBJBFSLZBQIOELTNPILHESRCHKGSMWBQXARLLSHJWTYBAAWGAOLNIXGAUMFBKYNDMCZVOHGPIHSTGWHZKFDNJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FSESXILMAHTMULVTPJVFSKCAMMJICWKPTHZJQTRWWZDGFTNZRGHDWYPSYPCDYSHOENDJIHFIAYKAWZELUVJQ");
    tmp_msg_1.dest_man.assign("FFVGSNUTBK");
    tmp_msg_1.conditions.assign("EXQSTFKRVGLUIQAXXFPUPOQHMQLLNZTTNMYUWEAN");
    IMC::ImageTxSettings tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.fps = 44U;
    tmp_tmp_msg_1_0.quality = 74U;
    tmp_tmp_msg_1_0.reps = 18U;
    tmp_tmp_msg_1_0.tsize = 13U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::WaterVelocity tmp_msg_2;
    tmp_msg_2.validity = 111U;
    tmp_msg_2.x = 0.871787267468485;
    tmp_msg_2.y = 0.977683949295338;
    tmp_msg_2.z = 0.4780238205933868;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::EstimatedState tmp_msg_3;
    tmp_msg_3.lat = 0.8519143419938826;
    tmp_msg_3.lon = 0.09241149557365713;
    tmp_msg_3.height = 0.8441251618412118;
    tmp_msg_3.x = 0.3121784695284936;
    tmp_msg_3.y = 0.23401543118627732;
    tmp_msg_3.z = 0.5738247070988539;
    tmp_msg_3.phi = 0.7805523177872818;
    tmp_msg_3.theta = 0.032922666719710225;
    tmp_msg_3.psi = 0.7781742140116171;
    tmp_msg_3.u = 0.5208738299408461;
    tmp_msg_3.v = 0.04921599094605644;
    tmp_msg_3.w = 0.41313865323591126;
    tmp_msg_3.vx = 0.39817700725414507;
    tmp_msg_3.vy = 0.16372921196988688;
    tmp_msg_3.vz = 0.595510009128608;
    tmp_msg_3.p = 0.4986809813516647;
    tmp_msg_3.q = 0.09211880086890512;
    tmp_msg_3.r = 0.9100056236424467;
    tmp_msg_3.depth = 0.8480689795065118;
    tmp_msg_3.alt = 0.8301726197736606;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.05968101991928032);
    msg.setSource(15625U);
    msg.setSourceEntity(105U);
    msg.setDestination(40196U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("RKNCBPZPPACGOBOTCWLBRLXDCOWJVIDJWZMSKMSQWMJVDLPPTDAAXMPPMBIBEBWYIANXMSCQLTKAMLFSGKGVTRTSIHUCYLWVHTGEWKQYNQGUXXFFOAVCHIVMZSWLARPLGFBGHRHSKYEQGVNNUQHSNYHQDAWCBQJENMEJKZDXJZOHUDUJXQLSYMOBZJDQYPFNYZATJPFXVFURANRIZKYXY");
    msg.description.assign("PNHAUPBJCRAINLZUKHHSMOMIXAQJXZFRKEXVWEMVHYNKKUBYYGFBNSWBDZFNXBVSDLEPSIYQTPXOTGRMPFSYLSME");
    msg.vnamespace.assign("BNBKKALBAXIZDLSKQBENXKFDCCUXBDVVZSTXIVFRUPGHBMNEPVYCFRGKZMDISUYYPSOJZUQERDXXWUFBTA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CFELRJZPIXKLHCQIHSNFNUCFWXJBCRHIAFPZDZEXLCSVTIKCUHRYTNKPJWUDSGJPBLXB");
    tmp_msg_0.value.assign("UTXQVUJYOYQAVPRNEILYFHVNYHJXHBCLDQDXPUSGKMELGEWFFCOBOXHBFDQBCBKUMKOFMZMWROKOFJGWMXAUTCZDNVPQIATPBAPCFIOBWWATHYVKJKJAKMKZRUDCJAXAHJSNZEQIZHJDIQIBMSVXYLCNSTBCOMSCYJQFPVLNOHZLOCINILNMAEGNRPZIASRKWHDTDSYDUNRUJWRFUZZRXMGQFPTGXTEDLEEEEGZTPVBHPVYRYRXGLS");
    tmp_msg_0.type = 249U;
    tmp_msg_0.access = 237U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WSTYQZWPVJDVYVKULZWTYOVZZRFWBZEYMXIMOBZLOFIXKGOXJFHENTUYNNVLJGCTOUAJSKICUTRVPOTAXIFBEBYHRSFUBRMSCJPXEJNARQQC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KEDWTDNABQNMURGNAHTKQXSOSVKBPRSVQNWOIDJUNIVDBXCTMWKGJGIAPGJSRLRUYLLNYWNVZGRVXOXFUOTONJJIXDHDLOOHEZNFMYIUCDLHJDAJHAFASHSYKEAZPBZGZECRQDKQQQCFAOXBKIRSQEUSTLZYLRUWHXUMQIWYFWOXUSWCCPTZZTAFYZYXLFOEBFNPIDYERPXIMZLPJF");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 12432U;
    tmp_tmp_msg_1_0.custom.assign("DBHSVXEEQMSIDFWVSUJEAMOQYLQMSMOBPHTIHSVTWKYGNJHGOQYJKLUYMBZXQYCJYZDEAFALGPREGCRHWKASDIWIKBANHG");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::TeleoperationDone tmp_msg_2;
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
    msg.setTimeStamp(0.25392592566997707);
    msg.setSource(62442U);
    msg.setSourceEntity(87U);
    msg.setDestination(55670U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("YDTXCTGCMEPGOJHZALGJYFWTGVFYIWKBCIDJNMXQZEBBNULCFDSCHXLJORVJXJVKSAMGKGINZGNPAUNHSSWNYRKFHLTMLDUQHONPPRQWRUODDLETZQDOIEHSCGFWSPTWOZJBTWRIKSQAECUAOQKFLRECXVJOMVYKKNFQHELM");
    msg.description.assign("TJPPQQZBDYWTIJJSPQQKZMMKACBNAXLNEW");
    msg.vnamespace.assign("ALAEFONDIHWLAHVRFUMWDHXNSXNLHXTQYBSSXVYACDNWQILXELYTAKXBVKRFWOPZMKPRTSXVBABZLWYNQIDJGKUUHBIJDXJJWOUPDYHGJFINCNJRKOGEZUYUTSFPKCORQEGLKZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EBYUDOMPAODRZGZQGGOWZABXRFJIOSHKANSZIWNPNAQMFCWHZNYLHJDWIJKXKLODFSULXVHVCJPCWCYHFLHZMFDGHALTTKQJRQVAXMCLSMFKMNIRKIEEMTUNNVYLRUEFDYLWUKIGOJQDWPMFFCJPJSOSGRANPXFTGJVUBQQQNYKDBTKDTSQHEUTWETWHIWOXPVEAAAUYCIOBCEBZBRBRVXYUSJBGXIVNZCSCQIO");
    tmp_msg_0.value.assign("CAMDLJZSBNTSNOXAJAWBGKLFDXBOIHKLAKTZAVPKZVKHCRFHXIYESJBTNSAVPLBZQDCLSQMXSWOODJCXIEUCDXFHIOFJHNESJMSUVYGLMERIKRRGUUWAMNVTKHOYYGMQCGZNNGWOQWTPCXNLQORPIUIEQRXBC");
    tmp_msg_0.type = 40U;
    tmp_msg_0.access = 6U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CPKKZAJAJFHDSZDWXGAIGGLBSWWRVPOZVMIYGNAYNGSXXYANORJNVLOBSQPUQRQNVOOXMTVIJKZMZWNRDQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HYNJKARISEJNDXKPWKOQSYXUSZXZPWOHYRQSIIPNOPKEQRCBVLIWTTQLXCCDPQTYHIMSKOSMDJUUVUYRVDPBBMCPGQFFDHZXWJUAJZFCACNLMBFBAGQLVBANMGPQAGVJXFTRBVCZIUJVKPAMOTKMOWESGELZEMQDNAVYZHKRNFIHKROHFEYJPFFQAUTDEYZWLHNOMBVRYJGXLDOMDIGZXCXTEWHSGT");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 42679U;
    tmp_tmp_msg_1_0.control_ent = 16U;
    tmp_tmp_msg_1_0.timeout = 0.535204805594221;
    tmp_tmp_msg_1_0.loiter_radius = 0.10248486097273235;
    tmp_tmp_msg_1_0.altitude_interval = 0.24251944335904319;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8583626988295339);
    msg.setSource(8165U);
    msg.setSourceEntity(92U);
    msg.setDestination(43946U);
    msg.setDestinationEntity(126U);
    msg.maneuver_id.assign("NHUMFWIMIZMCMJKYGJDWZJAXAFTKSOP");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 33057U;
    tmp_msg_0.lat = 0.5950090028654658;
    tmp_msg_0.lon = 0.3443220391325754;
    tmp_msg_0.z = 0.1429388409798077;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.6850214930953485;
    tmp_msg_0.speed_units = 166U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6171817602121835;
    tmp_tmp_msg_0_0.y = 0.8289397837841378;
    tmp_tmp_msg_0_0.z = 0.769346326312267;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BENQKQKCJMFBWBDIJNTVHDKDWKXJFMXRKEVDYNTMPMJLSQLFISAMMZRVSOEDSUCHIVZLQ");
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
    msg.setTimeStamp(0.6300692816029995);
    msg.setSource(11452U);
    msg.setSourceEntity(200U);
    msg.setDestination(5247U);
    msg.setDestinationEntity(21U);
    msg.maneuver_id.assign("OAKEAXQGHHQGIMWIDSVLGYPTYERIWNTIZXBWZWNQFABENXCTMHCZTQSJRMKHQODJQILSNFNSRWVNMREIXZTQKVCXNOPFIMLPRWKQSCXBDKYLHMPPIRDSRFZPGUOKNWZSHUAJAUBOCBFYGEFVLPOTUTFTWURDLZGCHEEMEDMJEDUJTFVXBVZVUPJNDUBBHHBHYGCBFPSAKYCUXDONGCRGKLQMAPVLRLJCFS");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 56758U;
    tmp_msg_0.lat = 0.2892205849688312;
    tmp_msg_0.lon = 0.5270707005128281;
    tmp_msg_0.z = 0.743397282080185;
    tmp_msg_0.z_units = 253U;
    tmp_msg_0.speed = 0.17968930124270388;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.roll = 0.11362660704739469;
    tmp_msg_0.pitch = 0.7785520527468591;
    tmp_msg_0.yaw = 0.7913859518610853;
    tmp_msg_0.custom.assign("SPRLLNTGZPBEDQRWYTR");
    msg.data.set(tmp_msg_0);
    IMC::IndicatedSpeed tmp_msg_1;
    tmp_msg_1.value = 0.7923888256612129;
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
    msg.setTimeStamp(0.4232782225455818);
    msg.setSource(4510U);
    msg.setSourceEntity(195U);
    msg.setDestination(37793U);
    msg.setDestinationEntity(95U);
    msg.maneuver_id.assign("RCWDWRTAFBHVANOEHLVPYRXWCLEIIFQZYSPVBOSLPNLXDRPWIEIMVGQFJZTXOTXGAXFEHUEBCULRFFASXASRJIENHPBLZDKBLIGUAVHQGQVCSZCAXYQFAPYHYGBTKTHIEUNJSKKOWUZOZYBYXTKAPQJHRIZHHZBTOCXGRGBWLWCSASDKKQEPY");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 43978U;
    tmp_msg_0.lat = 0.41477504217866823;
    tmp_msg_0.lon = 0.3638100985462518;
    tmp_msg_0.z = 0.5025370487396013;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.5263169940526974;
    tmp_msg_0.speed_units = 34U;
    tmp_msg_0.duration = 42250U;
    tmp_msg_0.radius = 0.9097641281601796;
    tmp_msg_0.flags = 37U;
    tmp_msg_0.custom.assign("XDOSIONMYFEZSHPUSNPD");
    msg.data.set(tmp_msg_0);
    IMC::WindSpeed tmp_msg_1;
    tmp_msg_1.direction = 0.24070416109562642;
    tmp_msg_1.speed = 0.10714624210547885;
    tmp_msg_1.turbulence = 0.9403700436668648;
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
    msg.setTimeStamp(0.2916118454969069);
    msg.setSource(35542U);
    msg.setSourceEntity(149U);
    msg.setDestination(47444U);
    msg.setDestinationEntity(39U);
    msg.source_man.assign("YYLIWDHTJOXETLUSSIASMAZOZRQBTWUJBESXMJGDKLUVFTONLPQYIRYKEOFDDBCKICLOZEDNGJJNPUAHOBQLWCGRLDEIUJMZDBJZVOYIWCQHIVTXEFYQQPXCGGFGLQXAESPGYMMKFWSVWTVHXIRMCQGNWR");
    msg.dest_man.assign("JWFXSEDPDZCCUYIJBDDMWMJVVCMZWAPJBLBVF");
    msg.conditions.assign("PSWZJURMWPWKPCNZDQUGJMTDZTZCFKAROPERFITRNHYPTCBLEYCFIFBAKDMICIQCGVZKBOTSHSAVSXPHTXERDNVMODDMYESCFHHLLNKLDYCUMGGXPQONHRZEBSDBGXBXGIMVXVNJPQEKCBLFOHEMFNXJGXVSQUROXJHGQNULLGYLLAQRRMIOYX");

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
    msg.setTimeStamp(0.5208347044519863);
    msg.setSource(10234U);
    msg.setSourceEntity(119U);
    msg.setDestination(26925U);
    msg.setDestinationEntity(4U);
    msg.source_man.assign("RATHBGZUJWVWMNDHOXAJUNSJXEZVZHTDBVFPXJRIXRDWEPFHJGWVQFZWYYIMCESNQLCWOKAYHQLYHUTUSAZMXLAIAKPPGQFFOEDZRWZHQYSJCTBBIEOBQYXNIFBOGPHEJLKSSACDKNYCTXBVTTOS");
    msg.dest_man.assign("DZBEDWCGAIEAYVDIKQSMWMCAAZATBSIHBBVMJMKXXIWOKVOGBILRWWHJUNTDQZHHGODMYWVCXFEHAYCRIJYWJQRUUDYJFSGSATQLNCZPCZSLTBRUBOVIGPIMNQLZTCYRGONREEHHYAXPUGFKRWPQHNNTRNJXJBQFZZVXIYOQFMQPLLSUETXFUKMDFJWEOLSPTHEWVFVTKGLDKPCMRDNUYXJPKPSFCOECGAURKOUXLZVN");
    msg.conditions.assign("IISAEPJGKXUBDOKTSCFCOFXJUADRHOCCPOOJSKEWESZKNVXQVJTUPTBZIRITBIHABPYRYYODWKSMGOUMXGXHEYLDFJBAPNYZCGNQQFHZQVEWWILCKZPRPKFOECZMNWDRMBDZBMRMPALFGUBDQVITLGFRMNSTVQIQSQGNXGTKARFO");

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
    msg.setTimeStamp(0.25771692119481315);
    msg.setSource(63493U);
    msg.setSourceEntity(189U);
    msg.setDestination(57470U);
    msg.setDestinationEntity(200U);
    msg.source_man.assign("BHZFLMPVGKVCTMKUWMAZNYAXLWQKDFXMBXJQEOMIBQRKJDXOBGPFPYBGDHLFDGQUBGLOPIWSMBFEJPEMCRCSQBACPOMVWYBYZQZFKZVTYHQHWONAEUTDINIJEKNTQTAS");
    msg.dest_man.assign("KQXGCTQTIOGJYEOSZFPQFWTHIXHMILSVCFSBMKRXTMLPWBJRGAUKNAKRICENAOXOMHBONVFPCBEKSDVEEAVIGJMSEPFSHGTYPUPARNZCWHXTDTEZTVZNWFUCLPNLMGILNILPKZHYVRWWDAGHKYBERNXJNFYJKZOSIDOBDDMDQIWYVEDKSJWYOBJJFCVDHMMTAUVTQZJRRKCUBZGAE");
    msg.conditions.assign("IYRASANHORGOKXGLRYMUEUENLBVCJFDKMWABXVYISLUFRTFAUFMBJNXKTTSDMICDMSIQRPYWISADBGWQVSFBOBGDKPUIQZCKTJVNGOUXAZIZLFZYS");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("GVXEXGJWYID");
    tmp_msg_0.state = 36U;
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
    msg.setTimeStamp(0.020055088325155346);
    msg.setSource(22834U);
    msg.setSourceEntity(49U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(157U);
    msg.command = 50U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KSYZLEWERPABLCQLYVWGCJVRUBFYKJAFYIGHBZSMFXHIOHJEPEPJCFANCWQMKHUDRQAXMPFSEWBXNHMDKDYINAFGWUUKVCOZQOGQOUTIWGHHQZRTPUEMBVNPRBYZVLWWCVQIAUXXAVMJSNOJTOYKZDKTJCIMDSEXLNZQASWMGYIONUGBCTIKQDPSJMATLTIBKNPHFDYPOLHCLTLSEBNBCXVVGFFGDDZ");
    tmp_msg_0.description.assign("GUVBKBCBKMMYBODRLAIXNFJZHYRVOQUWJGKGXWKZJTVIALLDQPAQKWENUMASLVUAQSUAUWFEGRIXQBNPZYRXCVGJLNVSDTNDHTDWIZNLAIURLBJFTQWPHNXWSDQKXGJRYQHSRCTHVXSGLANYSYFFWQDMFPYUXOIXAOZUSHEWOOLCEZXGCCKWERFHBFZYCTSHBYSJZCICVOIDMEOKEBTBEJDCEMKIVZNMVOPMHMTHIMPQ");
    tmp_msg_0.vnamespace.assign("RCCBYGHZZTVRSWEREUXDIRJFWPNAEQFPMNDLWIQOWDIXJDNHOKEOSIVFVSXQUPUUHCXJANFZSZBIEZLKCHPKWTOCROGIUPDTAHTDEJJVSYGDPIWNGYLJWRDMUZRZVRYIKKMSFEQTGAJCHSAZMLVESBMKSNBQMOWFXJOLBCNZDFYXAYKYMLPUUUHTCUBFDOVGQBHGVTFKQRP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MOIOOGQKVGQSEJMKPMYFZAXVVEGJSUWZEWUHPTZNLGRJYMKRWSXXLMXNDDQAKSMYZVRBHXBRCSZOGHPNCVTGDKZZDRUKVFLIDTUYETDXQULSQTFJBTZDYPPWJZAQBNFHELNHVWAOOVCUOYFYIPSMTGEUQHRXJLQNDIYJOJMCLCGBCLFWLBSPPMXXTMFULIJNRDANWTIZCNFEEFHRDOGVHKROIBBIC");
    tmp_tmp_msg_0_0.value.assign("POKPNOTBYMSCFHRXNPLOYXPJWEWHVIBABRFEMIUOUBFOHHGEIHYOFQAZUTANIWENGWVDGBZECAJDIKCDBDGSSZBSNEEQCVYNTUHGZBHSQCFMOQZCCKNEWWPCSISYKQRXQRTWCZJKLZQIKTYPMXJXVHPVWJAIGRWOLJFAJAYMFVHKAKUPKEGLLIRRNFRWVJULNLYZRNVUTMOXXKVPAMMLTSLQTTDVB");
    tmp_tmp_msg_0_0.type = 70U;
    tmp_tmp_msg_0_0.access = 246U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TOPRBVMJQJLDBDXMXIFMRTCUYYBDLJSWZBPWRFUIFNWUICSULZJOENKWKZFIVBQWPKOZIKLAXMCXIEMSIBDEDLLKSPLMVRYPDXBWGHJGOWTSD");
    IMC::Reference tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.8508228771626343;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 123U;
    tmp_tmp_msg_0_1.speed.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.41144165490971185;
    tmp_tmp_tmp_msg_0_1_1.z_units = 8U;
    tmp_tmp_msg_0_1.z.set(tmp_tmp_tmp_msg_0_1_1);
    tmp_tmp_msg_0_1.lat = 0.41809558749623155;
    tmp_tmp_msg_0_1.lon = 0.26989424651157834;
    tmp_tmp_msg_0_1.radius = 0.12008636267148265;
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
    msg.setTimeStamp(0.9048263532782483);
    msg.setSource(18793U);
    msg.setSourceEntity(136U);
    msg.setDestination(6615U);
    msg.setDestinationEntity(169U);
    msg.command = 179U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DFFIOQADTGQDLAETQUNDNCAVYVOSYIWJEJJFBPMZMMLBJBUFBWIWVRA");
    tmp_msg_0.description.assign("PNOEZFYWQHVNQSFKUWJZLQJZZWBDAAMYXRCPNSSYTXWDMPFTULBDIJTWUBJMKSEGCMNCILMFWBXQCTTZMKQBNLHACJOEEJPVAZQJVVKUSDATBOTAPBRAIIPJIZHVAHPEGCHYRVFRLIRSKIWVDRDMXC");
    tmp_msg_0.vnamespace.assign("NNBVFJQXRQBRPWLMQGVNEWSARWTKGXHFIHXPDDYQJZPOEDZNBNUINFBOXIBROOGUOKAMWHOUUYZXFPXCNJIVKOLPTKQAGALYURGCVZSCQCFQHLKSMOTOBJDZWUEAEYGGHYYWXLCWI");
    tmp_msg_0.start_man_id.assign("AQEOZRKVLEYJMFVLBPXPJBOKIYASOBJSUNRWHYQGTAKPEWXVUTLNLBOYITPXADDFLHDQOSELNCEHWMJOGDNFGADJSGBUDYZFQMXXENDVCBEYIZFTVSFXZOKGPTRKRXKZMMQTZUROUTIFHAIHPQQJYNOMGOLUWLZJVBGMKUHCZTDAIFYWWNPJVRAQRPQZCMEUWXHDHSDVGEFNKJWJCRLSSCTHRKGYBLYTAXHZUUBKGVCCMV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CLJQWPURDCMUWHMMKWKVZZLNXJHXEPMRYINBUSHLNTGVJUHEPADIYSTSDFBVVMTWMLTGJYWLWXEXOQ");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8606139778644296;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6249005626961467;
    tmp_tmp_tmp_msg_0_0_0.z = 0.5770078466723281;
    tmp_tmp_tmp_msg_0_0_0.z_units = 76U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.476932006273471;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 2U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TDJMEZSIUQUIJQLYQBRFSSFRDFQVWUJICKRAMCGTVXVKLMENAIGXPNMJSCKSWPIHCVHYRCMCORVUY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FormationMonitor tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.ax_cmd = 0.9094811064365023;
    tmp_tmp_msg_0_1.ay_cmd = 0.7564074284079552;
    tmp_tmp_msg_0_1.az_cmd = 0.9904556737107124;
    tmp_tmp_msg_0_1.ax_des = 0.9275353275194856;
    tmp_tmp_msg_0_1.ay_des = 0.28880508400147464;
    tmp_tmp_msg_0_1.az_des = 0.9522455166826781;
    tmp_tmp_msg_0_1.virt_err_x = 0.5160997943609004;
    tmp_tmp_msg_0_1.virt_err_y = 0.9459697107950673;
    tmp_tmp_msg_0_1.virt_err_z = 0.11698668872062679;
    tmp_tmp_msg_0_1.surf_fdbk_x = 0.08240340045032879;
    tmp_tmp_msg_0_1.surf_fdbk_y = 0.12035271719616802;
    tmp_tmp_msg_0_1.surf_fdbk_z = 0.2872934770724792;
    tmp_tmp_msg_0_1.surf_unkn_x = 0.7830702482393432;
    tmp_tmp_msg_0_1.surf_unkn_y = 0.42645889649214874;
    tmp_tmp_msg_0_1.surf_unkn_z = 0.0894153261424172;
    tmp_tmp_msg_0_1.ss_x = 0.1956478172255398;
    tmp_tmp_msg_0_1.ss_y = 0.00022036298900529605;
    tmp_tmp_msg_0_1.ss_z = 0.6710990440088631;
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
    msg.setTimeStamp(0.9631938360897884);
    msg.setSource(30386U);
    msg.setSourceEntity(23U);
    msg.setDestination(8639U);
    msg.setDestinationEntity(61U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EBKYNCWPSLCOZFIZHIOVCVRPLVGNPJXHAOAFGOIJOGUNDOFEZASMTYTTDBSHUOYSKWWNFMFULJYRFUZGNVGMKKULFZYZQGLAEBYRDAQQTXVKBJUYHGNBPVVZLXPKQXPCDMHSHDUIOLHWLOJZURJCKOTWHQHNRKGMDNWXCXASXMCSMEEYIDTJFETWYTCPPBIJECBBIZAKRJELMQRNWPSRBISWTXWVRAMKMFXGVSLQZDHUNJAD");
    tmp_msg_0.description.assign("QODODWOKBTRZMASOVDCNATUZZRKGNVCLGOIXLQQJMEFJKENFJJXHWYPMWMPHLEVEDZBAYJMWCUFVYILTAOBECHGHCPPNTPNPNYSYCBNFZISKIIUHULBIFVQAAFXNMVUVRGWQJPASVDKSUGWMYDUCXQNF");
    tmp_msg_0.vnamespace.assign("RCBSCCPXPNELFZUSYEPGPDLIJZQAEFLGOERQFPQCHVPTUOLIVBYNMLQPURODNHLATTZTIUNZXHCXSCYUWPKKE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TYWFPQMNXRFKYRKIHDBJPSAACWOBHMOEZKOFJYVZOCIBBCDYRW");
    tmp_tmp_msg_0_0.value.assign("IRRCIGAVLWKHZFPOSOZERMXBEPNYTPAUJNUNSLNYOMDCBYZDXFQTRMNHQBMIMRRJKLTSIYGWGZJFGRFKNYGXBIYTCCNZQJAOWRKFVOEUKMHBIYPXOVOUYVFKGPVVYUQWFG");
    tmp_tmp_msg_0_0.type = 85U;
    tmp_tmp_msg_0_0.access = 227U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DQBMOHFOYGTBURVQWHVGAFIDGOEJZZLKMIHXUWIPQFKNFRRUAMNNATMXUQYXSBHEESWJRTAOXSHGOJXJLQTCCKIIPHRJKBGZKQHKRZMAPSSEHEQAKOISACEPUXYYLIGCAMJUYDTYKTVOZRDPIAGIRYJSVNYQQVTCWSBPRNSLXDNHDHLGCLKWFNEVIWTG");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("CBISORMZKUGNTRIQGXAHCEECHSYLLRXKFVDXVSARRMIBZBYGVGNPHZOUA");
    tmp_tmp_msg_0_1.dest_man.assign("FXZTLEHIDGPYPLBRIHHCQWCALNPBFEMJVVGTFQMWMBQGCKXXDJJUPVCYMJOCIOPLHNSGLZSQJRHTJGNHOOAIADPTVGEXNBGMQWBMLABWHTYZIUDTRYLOUPPWTGSRQRXFZOWWKXYEZGUZSDLFAAPKYICQXVOJDKIZFAYNFVHOVEJBCVYVFEARDXSZIHKSRAPCUQOBWMWDYCSBYDF");
    tmp_tmp_msg_0_1.conditions.assign("YYCRRIETYVVFQIPGGAVOVUBTIBQWPYGUZVWCCNFNJQZBWGTZIZXAWPBZNGNCHZFPSEYLVLQQLZUHRLNSEIGCSZHVNWHUJTGAFBDXKWDMUKJIRCJLAJPOJADFHDPNPATOJFEMUEIFRABVOMBOXBYOPHMHEJKSSMVXMWISFQEURSTYYHKTEKNAFTLKOTCXXHNOUGMETXZWECRDCLUNSQXHLRJYKWBGPDQIVSCPRSFMADAJDLRUBKGKMLYZMDWD");
    IMC::MessagePart tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.uid = 194U;
    tmp_tmp_tmp_msg_0_1_0.frag_number = 106U;
    tmp_tmp_tmp_msg_0_1_0.num_frags = 235U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {67, 33, 57, -28, -101, -65, -93, 120, -26, -7, -46, -32, 90, 119, 45, 39, 73, -89, 72, -18, 91, 96, -118, -88, 71, 16, 99, -109, 66, -115, 45, 114, -29, -120, 121, 5, -100, 56, -107, 81, 116, -36, 88, -127, 46, 28, -13, -90, -66, -127, -82, -17, 120, -62, 54, 18, 118, 77, 15, 37, 102, -71, -115, -94, 126, 93, 66, 77, 12, 54, 48, 106, 5, -21, -66, -2, -89, -111, -49, -86, -101, 66, 115, -18, -2, -64, 101, 96, 52, 42, 61, 16, 69, 13, -95, -82, 113, -36, 35, 77, -102, 30, 56, -28, 63, -19};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LNBMCNCRMNUUCQSIRKEMHLHOAAHTOYIHOEDYJYTEGXDBMSSCOJMBEUOJTYXWDLTNQBURIRDEOLLKFPPFACDZESXPGWHSPTXYDMIVVEPHGQPQUJFYBVFKICOYQQZ");
    tmp_tmp_msg_0_2.dest_man.assign("KYZXEMQPZATW");
    tmp_tmp_msg_0_2.conditions.assign("KPYMLELQNRQJQGBIUZJDDHWXVTOEUXGNITNAZRQMWEGVHJCFFITKCAMSCESTZUFOMLKTCLFSDULEVRVZCZPEIVKVMPYGBWCCGBNJXLOBZYRQFDOYUKRBQLTGNSSIHWBRJXUFYXSCUAOWDVHNJHGKQROQAKBYQUHJBPSIMNATXYOFMILPSXMHWTDDHUOLDVWWXTMHPRKIUEDGHPZNXFGTJOPBCBSNDZAKSVOGRAPIMWZFPZYXIVRNEJJ");
    IMC::FormCtrlParam tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.action = 63U;
    tmp_tmp_tmp_msg_0_2_0.longain = 0.6704239567102913;
    tmp_tmp_tmp_msg_0_2_0.latgain = 0.22301170979420404;
    tmp_tmp_tmp_msg_0_2_0.bondthick = 3899539715U;
    tmp_tmp_tmp_msg_0_2_0.leadgain = 0.5150379757214884;
    tmp_tmp_tmp_msg_0_2_0.deconflgain = 0.9416439303998425;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.9295623046581993);
    msg.setSource(24385U);
    msg.setSourceEntity(196U);
    msg.setDestination(11697U);
    msg.setDestinationEntity(140U);
    msg.state = 113U;
    msg.plan_id.assign("GNVBQVNOPZHNLKWKYXELRDZSFFJMJ");
    msg.comm_level = 62U;

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
    msg.setTimeStamp(0.20988329342888534);
    msg.setSource(2174U);
    msg.setSourceEntity(98U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(54U);
    msg.state = 189U;
    msg.plan_id.assign("USSIBRNSJDOFCYPNTMKNARJHWKLOLANFTZKIZOVXTYLTZZWEYRWLASKQRIPFQTBMUPDBDCXHRWIPUNPOUKCGRSYJGVAAHAIUVMPGENGZESPPDICXBNUMEMTEOCQMKHAYSWXZIRMIZDFALIKCKJABCJGBQQQDMGOLDLZSSFHLLMXEJJVFNKUXWGJUOKJXLYVOBGZEHURFMHXBHDATDTVTRYVSGWYGHCZXFOVFICQJUQHOPDVNWBCRQEB");
    msg.comm_level = 116U;

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
    msg.setTimeStamp(0.12018665764766834);
    msg.setSource(8087U);
    msg.setSourceEntity(208U);
    msg.setDestination(9366U);
    msg.setDestinationEntity(244U);
    msg.state = 15U;
    msg.plan_id.assign("YUREGCNHWYILIXUDJJSHNZVVHBTWPZZAQSTZTTAEFJMOWDFJJVHEFBJYCBJKEURAFQNUAAOFBMQBNHYLRIDESI");
    msg.comm_level = 210U;

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
    msg.setTimeStamp(0.7110488112666665);
    msg.setSource(47492U);
    msg.setSourceEntity(163U);
    msg.setDestination(47916U);
    msg.setDestinationEntity(163U);
    msg.type = 65U;
    msg.op = 247U;
    msg.request_id = 9810U;
    msg.plan_id.assign("AWCDBALYZGDHYNDGKIQWHAJZDQODAMHMTJXLPCKZRKZGONWEPUJPDIISCKMKYTSCTETVFJHGDRQSEVOJJXZXKUCCPRPOJIAZOQCVNOHVXGBXV");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 2U;
    tmp_msg_0.name.assign("ZSUZQRKWNVFTAVAULRLTXJXHDYFSOFKMUABABVNTXGMVYQUKWXJCNEGBZFXMJEIJVCBWIIFFKYLSDZWRAWPMNHIGSDGNKIOHQPETTUYTNFXBQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XGGYDVHHGHOPFGCVABWZIBTTPYGHDFVKVOGEINSEBJITTIVEHWCJKUWWRYQLTJSVLKHOMRIWAXOUMWOJJUYIOODBRPYAKGBCZPERCCYADZATVWROM");

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
    msg.setTimeStamp(0.43930241826146177);
    msg.setSource(21253U);
    msg.setSourceEntity(234U);
    msg.setDestination(51686U);
    msg.setDestinationEntity(188U);
    msg.type = 110U;
    msg.op = 182U;
    msg.request_id = 31979U;
    msg.plan_id.assign("WSDNRHWFGOWWFOVTVHODGPPRSNEJBVPLQOKDRVADBC");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("VWNWOZRNYOGWSEPAEEFQIRCHBDJMCZESZFOTGBJEPVYNUEMMUYMPYLPVASJTOMELOFNXCKXKNTKCLJGWFCGJBQPXATWGTAIRNDYEZBLYTIYDLPVOTQBLUWQPLHGSVHKNQXIIHAMRBUSNIPUZORDUVXZHRKHUEHMYDAJJGJZLEHFCCWGVXGFROVBQMKFCKILKACNAFD");
    tmp_msg_0.type = 240U;
    tmp_msg_0.op = 118U;
    tmp_msg_0.group_name.assign("XBJIZGAZONBZQPUCGVIWBXJFQKAPDVCCHEYXGOWOTABENILECPMKUMCNBISJNZMCVMGSFCRIVMMGPLKGYFWTETOHCMHHTPQDDZEKGVAGNRAFOUQUJPFZBRJJCUMFLFHXRKUYNSSKRDDWCUQWOINILKLZUSYWEPVJXEAHQZHSNOUJYYFLLYSBLQAWAQBPQREORFSWHFMIDWV");
    tmp_msg_0.plan_id.assign("NRJJSUINDMGFCHURBOXPINRFKYCNIFWXEAHNWQPQXQRMPBVSGNBRYSXUOOVFNTKIWMLMGLUB");
    tmp_msg_0.description.assign("QWTFRIAXODHCJYMHGDQZJNLAYQHAIEGFRCACBGYTDWIDFMDELKKOLEMRXUWXLVRKOPYNDHYGHKLMFWPRKBRHTZBIEVLMHFUSVPKSFDCAIKAYEXRQPTUVIFCVUQWHTMQXTJPNWRDVVTGWLDJGKCENVPPOBCTZGYMSXZI");
    tmp_msg_0.reference_frame = 214U;
    tmp_msg_0.leader_bank_lim = 0.85995141643408;
    tmp_msg_0.leader_speed_min = 0.477782348152033;
    tmp_msg_0.leader_speed_max = 0.8170465047774562;
    tmp_msg_0.leader_alt_min = 0.5043629531180139;
    tmp_msg_0.leader_alt_max = 0.004781474420668008;
    tmp_msg_0.pos_sim_err_lim = 0.2750331965878623;
    tmp_msg_0.pos_sim_err_wrn = 0.03596657613194698;
    tmp_msg_0.pos_sim_err_timeout = 14242U;
    tmp_msg_0.converg_max = 0.31562493552102666;
    tmp_msg_0.converg_timeout = 27622U;
    tmp_msg_0.comms_timeout = 27303U;
    tmp_msg_0.turb_lim = 0.2491402814844209;
    tmp_msg_0.custom.assign("JBOHWFPUGVVYYPKWXBOYXFTCPZQSSIQFMFHRLEONEZUVQMDVHXMMZEXKSBQCMYTXVRZNCTEZAFWWICRPQJGQGDAJRUXAJHSZGCELVIMLWUGSQFALIUYBRYOXDPZTBNKQBDRJYHCJNBDWTJMAKTOFKASPSPUGPRHGBAUZYFLPHNGFRBRHAXSJPUKZWVILTWCOJDUMNQDDRXNCIIICSMLMILDOQE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QZAMPRKYZTREYJHBDWZZVKPIPBX");

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
    msg.setTimeStamp(0.015271190613881491);
    msg.setSource(35975U);
    msg.setSourceEntity(49U);
    msg.setDestination(62059U);
    msg.setDestinationEntity(58U);
    msg.type = 158U;
    msg.op = 170U;
    msg.request_id = 37127U;
    msg.plan_id.assign("UQOUIQYATKLMYRDORWVLKJMYGVDCKUBJLTEFBOKARFMFEZIAOQPPXFWKIVWNEEDBRFUKRAOGXTABYYIJTIWCEYCZMEJJXVQ");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3147872513550496;
    tmp_msg_0.speed_units = 143U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PDAUWVWDIEDXMEPROJFNDGEEZCBCXSFNSYEOMJUJCITPZWMMWFAKJSMLMLHXBUOXYLRSUGARNDXAGQJZOWZTLNCBKRVCCUNKFWUFRWFMNOAUBREGBCYQHFIIKYBYBZNWTHOCLTPWISXIXPJ");

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
    msg.setTimeStamp(0.5308031221545501);
    msg.setSource(61206U);
    msg.setSourceEntity(103U);
    msg.setDestination(18772U);
    msg.setDestinationEntity(4U);
    msg.plan_count = 8109U;
    msg.plan_size = 1725570724U;
    msg.change_time = 0.06440229078406001;
    msg.change_sid = 6387U;
    msg.change_sname.assign("FTWQNQAGEGXPQAVULBDEMHYORFNDOELHMILSSPENUCKCCIOQVKJLHJPYTHGVNLVFZBLAJQFBAOTJBKEOCSJMWRTMJKBGYWZKI");
    const char tmp_msg_0[] = {10, -113, 50, -104, -36, 25, 12, -112, 50, 103, -121, 44, 89, -50, 108, 14, -37, 18, 58, -80, -52, 23, -63, 74, 13, -10, 49, -85, 67, 85, -21, 4, 17, -52, -39, -92, 105, -45, 88, 58, -25, -49, 123, -68, -110, -108, 126, 111, 103, -114, 31, 115, 124, 107, 70, -42, 79, 103, 96, 105, 81, 3, 26, -87, 86, 17, 76, -5, -23, -101, -40, -76, -21, -60, -114, 122, -29, -83, -18, 0, -63, 10, 41, -43, -37, 111, 30, 18, -91, 32, -7, -15, 8, -103, -85, 84, 106, 94, -6, -40, 13, 33, 107, 111, 71, 103, 10, 38, 24, -90, 85, 71, 14, 113, -64, -95, 78, -53, 85, -90, 42, -63, 36, -12, 28, -8, -122, -67, -97, -111, 59, 15, 88, 94, 35, -51, 10, -123, 49, 14, 88, 0, -105, 112, 104, 74, -37, 9, 76, -16, 45, -93, 65, 96, 9, -71, 77, 118, 103, -64, 38, -49, -49, 14, 18, -59, -40, 64, -36, -67, -26, 113, 37, 14, -18, 4, 17, -46, -97, -75, -40, 54, 20, -43, 108, 121, 54, 25, 123, 113, -90, 41, -54, -94, 115, -25, 10, 51, 83, 63, -49, -73, 89, -109, -120, -39, 68, 10, -31};
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
    msg.setTimeStamp(0.445896063963762);
    msg.setSource(51445U);
    msg.setSourceEntity(191U);
    msg.setDestination(25090U);
    msg.setDestinationEntity(207U);
    msg.plan_count = 7U;
    msg.plan_size = 1817681047U;
    msg.change_time = 0.4891192409658347;
    msg.change_sid = 15098U;
    msg.change_sname.assign("TECVBFDYEHZMHAXJSKCUFWXUVRLZNCVHPSKLTIKLRBPJNKBXFJUPNQKXPJDAIZNQURSSRJPAOZWHYLFVSDXMLXAHFBPYPQZLINJYRDMVGCDDRKNACDREBAMABSOIIALXZWKSIGUFIZYJGGOVIWMJITHZWDPGUTGBPQJKXOJNZCDEGGWSUKWEGR");
    const char tmp_msg_0[] = {109, 52, 51, -119, 106, 51, -94, -78, -12, -45, -26, -87, -15, -21, -11, 2, -94, -77, -22, -89, -108, 119, 4, 80, -122, -69, -9, -66, -83, 111, -56, -53, -128, -3, 61, -61, 53, -68, -61, 98, 90, 85, -30, 18, -80, -107, -41, 7, -42, 115, -104, -123, -11, 59, 50, -118, -8, -78, -46, 15, 10, 83, -10, 72, -43, 111, 3, -21, 122, 66, 122, -114, -12, 23, 59, 55, 124, -46, -23, -100, 58, 19, -24, -72, 115, 69, 105, -42, 65, -70, -27, -65, -13, -97, 56, 80, -31, 38, 70, -8, -82, 35, -88, 5, 27, -24, 94, 80, 83, -97, -65, 34, -92, -49, -23, -13, 31, 16, 83, 62, -34, 70, 116, 61, -23, -72, -110, -1, -100, 76, 103, 100, 53, -24, 28, -84, -84, -64, 104, -76, 104, 123, -81, 96};
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
    msg.setTimeStamp(0.9271557592872887);
    msg.setSource(15661U);
    msg.setSourceEntity(53U);
    msg.setDestination(17891U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 1127U;
    msg.plan_size = 1950778784U;
    msg.change_time = 0.9478797148853679;
    msg.change_sid = 44686U;
    msg.change_sname.assign("BJNEJJSLSEUIRYWIAAYRQGVQUUXPDHSNHYSPVILMSOKCBKHTNBRHXYUFZQIFYIMALGMXPXXGTKHVLPEAZHXBWYLHQLGCTHBJUIO");
    const char tmp_msg_0[] = {2, -60, 100, 8, -26, -18, 54, 56, 88, -93, -122, 37, 34, -62, 100, 67, -68, -28, -124, -74, 96, -28, 13, -75, -125};
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
    msg.setTimeStamp(0.31466131336338954);
    msg.setSource(45396U);
    msg.setSourceEntity(1U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("SPQGAGSZMYTNQBOXBWUTRMKCHUIWXUSWEQVWOUPHADDJKDQMJKTJFBJDXYGVBMFUILLBVIZPLPMEMOYZDIFOWRNCRLVQAUCZOVHFWRPKAMHUUCXZHHDRARWQXVWYSNTFSDHXADCSOYONKSXOGMNCKONEFMYICITRTIBXWBJGKYUCNJVBKZSUHHQCETNECHTNNKTRASLWJPYEYFZ");
    msg.plan_size = 14021U;
    msg.change_time = 0.870804780613945;
    msg.change_sid = 4179U;
    msg.change_sname.assign("QHHBUQVDRROQFYBGITMXCLYICPBZEMBWKONLOTVQBYJCVRADPIGSIHJJYDSVSWMMWEFTAISEPUXKRXDMHEXNDGFKNPAUMPBSAYHQVKZFZPCQSTVRQDEJTHSROLYIZWRZZOATDNGQXVIJLNPCVGLJKTTOULKOOGJODKUYTMRSGEEWCBNYVLGMFYOHFHIMAUKLPUWCJAUWAHKFLXWXCBMPLAHIJJGDREBVXCSETUZZAPSGN");
    const char tmp_msg_0[] = {114, -41, -97, 43, -58, -87, -61, 56, -55, 62};
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
    msg.setTimeStamp(0.7169524469066371);
    msg.setSource(16385U);
    msg.setSourceEntity(1U);
    msg.setDestination(11516U);
    msg.setDestinationEntity(30U);
    msg.plan_id.assign("VKFPPJLNKFQOFOSNEWWIURVXELXVVRGBZQRLLMHSHNKAOQCOSHFAMTYDJAZKOJADAIGLFEPIMDNZVYWYGLCSCTNW");
    msg.plan_size = 58880U;
    msg.change_time = 0.2698816301305219;
    msg.change_sid = 44557U;
    msg.change_sname.assign("SVNYWBOCIPAZIQKVWBCJFCXRXDRDSUZJGBCYSVIRDWKJYPWHHORSXXXAQTVAEOMDV");
    const char tmp_msg_0[] = {39, 73, -40, 4, -25, 77, 25, 111, 87, 76, -20, 124, -83, 6, -102, -75, 21, -37, -14, 57, -122, 38, 46, 125, -68, -92, -11, -117, 71, -90, -86, 93, -97, -126, -104, 113, 100, 39, 13, 126, 68, 39, -45, -4, -54, 38, 21, -69, -55, 45, -116, 113, 126, -66, -58, -15, 87, 13, -68, 20, -1, 68, 82, 109, 69, 83, 25, -60, -117, 77, -113, 4, 9, -75, -81, 67, 54, 65, -118, -2, 34, 92, 24, 55, 110, -49, -83, 106, -40, 24, -29, 11, -84, 105, -74, -33, -82, 5, -123, 20, 113, -72, 93, -93, -68, 13, -41, 52, 107, 61, -101, 99, 8, 81, 10, 111, 100, -69, 67, 39, 116, -68, -127, -100, -16, -80, -60, -3, 57, -114, -48, 125, -51, 5, -50, -114, -99, 7, -100, -88, -9, -74, -103, -75, 41, 80, -63, -15, -95, -77, -76, -108, -77, 104, -52, 58, -94, 15, 24, 84, 65, -68, 28, -84, -119, -8, -100, 0, -62, 18, -109, 59, 98, -71, 113, 20, -19, -33, 11, 33, 12, -90, -16, -128, -25, 7, 36, -74, 10, -128, -37, 9, 10, -90, 81, 33, 11, -102, -121, 42, 64, -58, 77, 27, 88, -65, 17, 34, 57, -25, 11, -61, -32, -64, 18, 17};
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
    msg.setTimeStamp(0.7804505650549987);
    msg.setSource(9195U);
    msg.setSourceEntity(239U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(53U);
    msg.plan_id.assign("UDBTAGZAQHEPWBEHLIRFVLWYTFRKTMJBVSIKUFHVBEZJJH");
    msg.plan_size = 46963U;
    msg.change_time = 0.8192632719516161;
    msg.change_sid = 48661U;
    msg.change_sname.assign("BRTRGGEESUBBVAAUYKQFXWXLOJVSFPXZICJMQZUCJCSWCQWWTCVQUGRLULFRLIYGCTWKZMFIEFAKRPRJLPLJBWHMGMYLXQSGD");
    const char tmp_msg_0[] = {122, 79, 27, 1, 55, -5, -98, -17, 72, 23, 10, 75, -107, 119, -72, -8, 27, -89, -31, -86, -43, -103, 4, -63, 109, 61, 0, -87, 123, 123, 43, 89, -17, 4, 107, -87, 80, 55, -19, 121, 45, 10, 40, -72, 72, 60, -59, -30, 84, -53, 32, -63, -36, 123, -42, -80, 29, -25, -66, -1, -44, -29, -127, 23, 46, -96, 51, -32, -38, 95, -99, -88, -59, -91, -70, 126};
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
    msg.setTimeStamp(0.1872925723078943);
    msg.setSource(55251U);
    msg.setSourceEntity(50U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(6U);
    msg.type = 188U;
    msg.op = 22U;
    msg.request_id = 35811U;
    msg.plan_id.assign("ZSJOWAOKXIQITPZFUQTHZNWFSRJHRQVYTZEPIOCAJTGGVBBXVVLJTJEVQMKYBSOMHCYLWPIMOMPPTCXAALJNAXDKNTQOOMNPOTZGLEDWAJYWFVBXBLLUHVOSYIVADUM");
    msg.flags = 51822U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 167U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("WWYDTCJXHDFWYAZRUXCAUMPAWSOTLGOGCYYPUFYBDLOHQQLBYQMYZPKUVSCZYDXQKAFUDTRTCKBJNKBZIDGXRMQKELGRBJFKEHLMHEHVBQ");
    tmp_tmp_msg_0_0.description.assign("EWMELSWQCSAAXMJHVNZEBOJGNYIPQZBMQPRRGPYIULQBKFGINVDJKEUDUJQHT");
    tmp_tmp_msg_0_0.vnamespace.assign("WIZBASVYUFBHQONRHQEQNZFHDMYMHLIUHVBKFRCJAAREPDEUXWPJWQIPMSTSYARGTZVGDKTHZEJXY");
    tmp_tmp_msg_0_0.start_man_id.assign("OBGNXDISWISRTUEJYIOHTGRDPXKFQQMCVNSNQBPGCZJOLQRBAHRUFHLZSKKOEXDRONJCKCOYMRIZDAEAGTLTQSCIUDYFPFIMWYMVVZHFPKPKVVFDOHSCEJRIRTYUOGETYLVKNUAAHBLYUZWARXBUAACLCLSXWCPHUGRQTVS");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.47775537121059386;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6802741639575319;
    tmp_tmp_tmp_msg_0_0_0.z = 0.998521519828147;
    tmp_tmp_tmp_msg_0_0_0.z_units = 44U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.2978126081701252;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 40U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.6737280677740473;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.7311116940338466;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.16530598771612615;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.012560317920834674;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.vid = 36632U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_x = 0.6128910514108133;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_y = 0.7084767709892819;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_z = 0.8203644837610642;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.8968892155951638;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NJDAJILEPWDJVAHNCHTZGBLFITGIGRSAWQLJKQXDMRSKBCCNMUYUUXMUPABKFDREWGWKZVMVXCEOYFPHLHEQWSSOGQDTOIFPDI");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SAITMXFBGAISVUIHZGMRHKYEYCHCYWOZMAZNUGGFUGINXHPFTJXZLTEHQPEZJPCNBZRHFYIASPUDYOWJBQIVHRSTDSQICJPUXUNXCNYWCKZVWVAWMLVGDFDEPMKPAOMTTAVNJOKUKQCJSQESWOENRWQCFHJWVJQAGYXOTPRFOKNVBDBGRUR");

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
    msg.setTimeStamp(0.2298534284428151);
    msg.setSource(6120U);
    msg.setSourceEntity(85U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(127U);
    msg.type = 76U;
    msg.op = 217U;
    msg.request_id = 22034U;
    msg.plan_id.assign("AUTHFZIYAOHKYMPCVMFVSRKLXSQUFCPVZTYNMWYECUIOIBBYLWEKWQGNBVUUIAWAGXPMERYXLZNRSFPERRDCBKODYFQRJJDSVHGSPLOICBZFLQFSDWVHOOXVNWTYX");
    msg.flags = 26597U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6639592075721378;
    tmp_msg_0.speed_units = 139U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RYVWAZQOXUPNIRSLBKYRTJVXOHFQZSSLCLCKM");

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
    msg.setTimeStamp(0.5249829317308518);
    msg.setSource(17126U);
    msg.setSourceEntity(125U);
    msg.setDestination(11085U);
    msg.setDestinationEntity(240U);
    msg.type = 237U;
    msg.op = 241U;
    msg.request_id = 33248U;
    msg.plan_id.assign("NMDFALPWVABLRVVCQZHLCUZTVKJRDCHKYUZFJPXPDQFPLTXUAMMZQQAZTSUTDJVYQHNOTEMAFISEBKKWSUIBOSKKXQMHPTVBFHPJUOUDHBAEILLYKEURLOXBHGFUJHI");
    msg.flags = 23596U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7946934162056566;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DWUMTOUBZWSRPCQLKJHITPQEKFDHCTZVELMXHJQZIXXZKOGSOTYWXRTWHCCDPHAKPGIHWXUSJHLVBENMPQJTDWWNNUOUGHMAPBHYRBKUJUVIOVTLCCJSDRVORBFWZSAHRYANEURYNILKOPKRTDOAFMFKIVBBAYLEYNQMASFJQLV");

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
    msg.setTimeStamp(0.9321730338320818);
    msg.setSource(16245U);
    msg.setSourceEntity(241U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(84U);
    msg.state = 133U;
    msg.plan_id.assign("FCYQVJCKZWEOOQNWGADUAHJTNARBQHOXXIUMGASME");
    msg.plan_eta = -1199520089;
    msg.plan_progress = 0.7223753830750195;
    msg.man_id.assign("HLJTVBOUWYDCCIAFYXXOZLSHUHFKPEKQZZCEGXHADGSNPBXZNFAMKLFKXWVRDGYRSVORYGEIWKBLTNZGASLWCGEFZPQHOUELZFGQRJUMWIQAJONBTMVIKHKVDQJWCSOWSVLBBRKZJIEITMELSCEHXAUUROMLYRFIDDJNYF");
    msg.man_type = 47099U;
    msg.man_eta = 2021841973;
    msg.last_outcome = 34U;

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
    msg.setTimeStamp(0.7304763587551987);
    msg.setSource(28662U);
    msg.setSourceEntity(253U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(55U);
    msg.state = 29U;
    msg.plan_id.assign("HSSZFTDFRNNLOLKUMJGWTQJADVEODVCAPGQBOYVBUHKJEFXNHJIMOLPGAV");
    msg.plan_eta = -241837084;
    msg.plan_progress = 0.0034524907609725375;
    msg.man_id.assign("PAMAYNTTQACBLUBZKZEGPJOBKHLKODEGIOFLRIIQNEHDUDAVRUTXTDRVONVPFDNVEMYZCFMESIQRCFSOABMYJCLXZGTBXAEHSVXWHZLRWJUMSYUIWWKNWFJLUVMYBCAQFHWAJEJGNWRWDVKPIZYSMHWGXOGFURGFLOKLSDJLIYQDQRQUGAYUJOLQNDMGXVSXFQ");
    msg.man_type = 11191U;
    msg.man_eta = 2092157924;
    msg.last_outcome = 111U;

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
    msg.setTimeStamp(0.6192397844792337);
    msg.setSource(44630U);
    msg.setSourceEntity(48U);
    msg.setDestination(30174U);
    msg.setDestinationEntity(42U);
    msg.state = 110U;
    msg.plan_id.assign("YDSIXPIYLDNL");
    msg.plan_eta = -2136943104;
    msg.plan_progress = 0.999895383941299;
    msg.man_id.assign("TXUGVNMIPQDLMASUOAFWSRROGMSVKTGHNMELFITIEMFCZWWNKGIXBORUZMATBXGQJTDWWNUWHXAIDJTVBZZPRCJHYALQ");
    msg.man_type = 42727U;
    msg.man_eta = -1135653128;
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
    msg.setTimeStamp(0.09992318517513898);
    msg.setSource(25843U);
    msg.setSourceEntity(18U);
    msg.setDestination(58721U);
    msg.setDestinationEntity(249U);
    msg.name.assign("TODDCMBLNLOXOFZVNLKLTKTGDNPDQBGASGVZLJKPOZWNPYUACTUUUZQQFNCAFMKEDYDRWJDQBTSOKBEMXVQBHYMDMNREEEHWSWXOCMJXKRIUZWYQXSGNDRALHCIHPSUJTRRJBHJIPECVOPCXSNPTYERYAXFEISZHHYVVCKAUVOBLFPWFWKJLIZHPZFKPUGLGAGQXXYIUSVFMBNNEBAAEVYLOKJCIHMZDFQF");
    msg.value.assign("PDZOTHBDZGLJDCRFJGNQKPBOMUEBDBEUOZXFCITFMSYKINBVXKVMSNZCUPJMDCZONKIRPJXTFXJPQYRWERAJKXXWBVKUZWSVCTPAIODCOTGSXCWZFILSSDOIMGXLEJDHBUSIEIMCDYPOYTICUQOAHDBHQJWVZ");
    msg.type = 79U;
    msg.access = 126U;

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
    msg.setTimeStamp(0.315520436312385);
    msg.setSource(30087U);
    msg.setSourceEntity(190U);
    msg.setDestination(48572U);
    msg.setDestinationEntity(142U);
    msg.name.assign("IKEVHNORUPYLEMPBYTDPRUQUYZJGOOECGSV");
    msg.value.assign("KVXYAGZJGEHDQUUVJTYZFJCPVDPQRAWNEIWMTVSFUCOFHCBOIXVROUBSYEDOLEGYZALBIEDEMDCLCWOPGNVHJZJBQHEDPWWDPHJCXPMQRFZWTSSVFYMVNMIOFHBWJGMGSFXMACKPTRXUFBZBKBKRT");
    msg.type = 154U;
    msg.access = 16U;

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
    msg.setTimeStamp(0.6443177112923986);
    msg.setSource(6008U);
    msg.setSourceEntity(115U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(201U);
    msg.name.assign("OCIFPHJTMQISTKDZAEFBHBHFLPCTSABWJKHLVQPAVRDAXTWIMWHIJCZOVQDJMVUBPUDJGCKDINJXBUYGMTMYLZNOYRGGMNVPCMICXNQGQZJTDULGLHUQXRFNEGCYPXAWWUVSIVVQEKSKECGPRDCLZULJDELSAYMLRWWIPEIQQRANOOTSFFY");
    msg.value.assign("NJYVULWFKEVRCUJQRYIVBEWMFXFYYXUEISVNKKJBDXZOXSSVV");
    msg.type = 53U;
    msg.access = 215U;

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
    msg.setTimeStamp(0.2365049302954415);
    msg.setSource(33157U);
    msg.setSourceEntity(157U);
    msg.setDestination(27001U);
    msg.setDestinationEntity(89U);
    msg.cmd = 163U;
    msg.op = 53U;
    msg.plan_id.assign("BWVLMWOXXSGSBPPOACLRQXHHTKYXNPPSLZROQVUOUKIFYCPWKMHKOLNJGRBJAUTNNRW");
    msg.params.assign("AYRWJCGRTQVCRAWVIYEYELDHLZPBLGAECWAWYWYPXVHCEYGDUCLUJNFEOTSBGOZXZBFTMNIPOLBAJIMKUQWTUXCMJBJRHXFHMBBCIY");

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
    msg.setTimeStamp(0.9940749267163675);
    msg.setSource(45808U);
    msg.setSourceEntity(58U);
    msg.setDestination(41502U);
    msg.setDestinationEntity(95U);
    msg.cmd = 208U;
    msg.op = 228U;
    msg.plan_id.assign("AHXTEEWOWKVNBCRPCQCUCUZAPTECNLZKELDFMDUQFZUAYARJEWGOISUWVBCUQQYVSHZONJEVOGVXITNPWXUKBBPGLTQCBLSABKLNMXASOHASFZHRMGPAEKJTCTBJYNJPIDIJIEMVOGDTYFXWFIMADYGDVMIZKHSSXLZORWPZYHZYJOWDTQHDEFHNFQXMJXATFSLVNLRBNVNMMKP");
    msg.params.assign("KIEZTIYXMNNKGTKGNYJAHELCFLWDWKHODTSKDYSVCDEKWFVBMDQDJVEWVVVCAANLHHGXJRFZQBPUKGAHIMPZNSUCCLGXWUZCSPRYNXLOWFMZFABNMZBOMMQBRUOFQAXOKJRYFTYCKIHXGSRIVWTLOLEIGEHBPELNAYUWVR");

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
    msg.setTimeStamp(0.8705726002470279);
    msg.setSource(4414U);
    msg.setSourceEntity(99U);
    msg.setDestination(14914U);
    msg.setDestinationEntity(130U);
    msg.cmd = 166U;
    msg.op = 189U;
    msg.plan_id.assign("TKZEOPEEBZBCTREEDHKKNLJFJIYJCOBOMJATOYMYZPCWGLEDHTHQBFLMNMVIRRWEIJGPIWONUYGKNEGITLCADCDWLTUPAUGSXIQVCBFS");
    msg.params.assign("RLGDFCKLBZZLARQAXIFWDKDJIZJJZDEEBTWIVWZYOBXZDVNLZXKCFGKHTQUPENMPTAULLYTKV");

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
    msg.setTimeStamp(0.7166865100890402);
    msg.setSource(53149U);
    msg.setSourceEntity(167U);
    msg.setDestination(23057U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("YTJVPFKNIEHLOZPTROLYTSNOEYGFHRKHCWGPDBRFAOAVZECZFGWWLTCXFZCKGDZISVUUQXWPXUCHJBDAGLXCSJNEVFXREIQBWMGWTJMUMCOMGTKUBAPPHQJBJPFDBXKHKNSINLQNSZSWBKIDIHAVQSHKRIAOGE");
    msg.op = 176U;
    msg.lat = 0.32110753062904696;
    msg.lon = 0.01679815101033555;
    msg.height = 0.7056996947502069;
    msg.x = 0.08384373826867164;
    msg.y = 0.9931545596412685;
    msg.z = 0.9561115944996998;
    msg.phi = 0.6778941879195779;
    msg.theta = 0.35530383286405454;
    msg.psi = 0.6274217996020109;
    msg.vx = 0.7175209415306114;
    msg.vy = 0.6380664646834024;
    msg.vz = 0.2431598486233153;
    msg.p = 0.8976330827032883;
    msg.q = 0.47711033340803377;
    msg.r = 0.09081045161241819;
    msg.svx = 0.010362875824356355;
    msg.svy = 0.31133268504296663;
    msg.svz = 0.0775480073929935;

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
    msg.setTimeStamp(0.029883000776937063);
    msg.setSource(21812U);
    msg.setSourceEntity(7U);
    msg.setDestination(51662U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("PMMYUJIQQOPIKQZTQ");
    msg.op = 6U;
    msg.lat = 0.21539477247345518;
    msg.lon = 0.22218163044883688;
    msg.height = 0.4684084936236699;
    msg.x = 0.599630195005451;
    msg.y = 0.8254904923730867;
    msg.z = 0.47020262425678894;
    msg.phi = 0.9943128789516632;
    msg.theta = 0.6562695814466135;
    msg.psi = 0.13751282784732666;
    msg.vx = 0.73593178629571;
    msg.vy = 0.8416706539261284;
    msg.vz = 0.3624307245547531;
    msg.p = 0.707022200223233;
    msg.q = 0.10187979588657092;
    msg.r = 0.4934638302877916;
    msg.svx = 0.8638648324162392;
    msg.svy = 0.6886988175260494;
    msg.svz = 0.35189846549339543;

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
    msg.setTimeStamp(0.25306809239710004);
    msg.setSource(63707U);
    msg.setSourceEntity(254U);
    msg.setDestination(37415U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("YDGUYRLCRBEMWEGDZQGNVJFUUQAHPPQTUQKXEZSWKPNLDRHMSQIAIOXXKAZBOEHZTDAGT");
    msg.op = 11U;
    msg.lat = 0.8230143690789008;
    msg.lon = 0.5290366502318977;
    msg.height = 0.8053704403512788;
    msg.x = 0.32061033288244944;
    msg.y = 0.6547268419198271;
    msg.z = 0.5730969653734959;
    msg.phi = 0.8634842197535538;
    msg.theta = 0.9904686131975612;
    msg.psi = 0.05507897191609801;
    msg.vx = 0.8041737764544844;
    msg.vy = 0.6742715240116973;
    msg.vz = 0.1254238142260481;
    msg.p = 0.07235039328683346;
    msg.q = 0.4705377813192404;
    msg.r = 0.6035879762001639;
    msg.svx = 0.7741053824405102;
    msg.svy = 0.42187531638561016;
    msg.svz = 0.011427249728520716;

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
    msg.setTimeStamp(0.6889411455667556);
    msg.setSource(17774U);
    msg.setSourceEntity(0U);
    msg.setDestination(38658U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("EKMQGDOXIWNSDDPXZHLBCCKUJQMZHPODDPRWPKHSTFNYNGSWEAXELYZVFKMTVCCPUMMHNVTQAADJOLSDPEEDBTOEEJDTAYCWLFKUKBPBVLIEXMGLMSGBHASZORLTWOQIARRGELHWCUJZFUHZXGVTBJZJVGSCWIJFKOBPIQKCNUQEFM");
    msg.type = 160U;
    msg.properties = 63U;
    msg.durations.assign("APZGHMLTWXDIHNROXQLCNTUIFWQKKNXQBPRSJALXQ");
    msg.distances.assign("AUTEUUEMKYZQHOKDYPFSJDZSRAYBMITJWVFEJJBZKEHDYVMDSWCVHTXQRSUDOYOKGLOLXRWLLNVNUCLQXYYWPFCSGVUUKJOHDRQZHQXMBMZVEBOYMXZJTGORNAZZJXJEPMAHCCCULVBCGKZNDQSWN");
    msg.actions.assign("MVARMEACYTVFQKIJAAKZZTHCCVGILBMDADZORVKUOXFJQTJUSHKJUOXLXFIRPZOGDWAONDLGFYDZTSIDLSKUIRYCSAFEMABBHINWEQZHGFXEVHOKLMCTUMLECSJPPBBDKPHXJT");
    msg.fuel.assign("KBNVYQELDXUICIWFWSWTHYXEVCGGDEPPIZLJAATDHJZIBGJAM");

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
    msg.setTimeStamp(0.03387290202220761);
    msg.setSource(44927U);
    msg.setSourceEntity(124U);
    msg.setDestination(64665U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("REUAYFRCFSHHJYJUOQLXIQWBRBVENJGDTBQKZIEWLUPDUYUZZDKDHKTUAKRHYLOHITJOWSEFNUBLZDFCMHLCDRXSDWAGXCVFWMOYAQENNMRTTKSBKVVLXEKMU");
    msg.type = 135U;
    msg.properties = 229U;
    msg.durations.assign("HLLOEGTFQOBJXUBGYSSGJTPDBGNNIAMQQXTEMXKFOHZDARWHQBSXICYPYUPLZPOTPJMIYBXTDKFNGBFFOVPICOONMEVLQXIYPPBGVDCGQZEMWARJUEZEFLYVDKHUA");
    msg.distances.assign("UKAZHQLGDPTEIKNCBCQBGDWRNZJRXURZGAXGSPOYXPRXRHBUMLSFNLYFMFTDRLMP");
    msg.actions.assign("QEOAKHPYIXNBJDUPYDBRSKGQFVTAWVRQVDPJXHQMWAUVYHBZVWZRIJYPEXJAOIQELZZDCAZORLLDUFVNIEIYRBDNLRLXGSHBJKNYKOPWZISLMNQWYSPHHFCOTFMB");
    msg.fuel.assign("ESDORAYZPVKMMVYTVXGIJVMIPXFBGJBOOTJFMZDOHWSNUHGAHKSOTGTJTWNECNHKHYSNLOCOMQS");

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
    msg.setTimeStamp(0.7754335407426592);
    msg.setSource(46384U);
    msg.setSourceEntity(91U);
    msg.setDestination(10348U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("IFVIDNMIAWMEKNLDIMBFGH");
    msg.type = 178U;
    msg.properties = 14U;
    msg.durations.assign("TMVYATOXYNTRYDDAHHVBOESCJRNTSWQPWGHNLQYIOTBQFFSFSCBNHDNZRVHEFBZKXJJJQAR");
    msg.distances.assign("MQMHZVJFROEGHGCZQESSTKPAVCU");
    msg.actions.assign("UUNIHZBCBQJRTJJYGJTHHTDWFXPQTDJMSZRHQAHAHZPLJYVIDTOWWLGXVGOYBFFTTSBGFZTEIJCPUHOZXWKUZCMFXEODRBPMZXYIUCFMQSXMGKCMHAECABONWKVFUAYAACWXUNHRRWJVUBGYGNSYKERIOOPGRNSQATRGFGDIQDVLKIZXIEUIWNQXNPJVSSPKFLVKLXPTDNPEYDZWEZAFCD");
    msg.fuel.assign("XKOZBTHXLQTEQXFAEPCMTWYZNPVBXUPILGAGRGGWHUGN");

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
    msg.setTimeStamp(0.7300319137429702);
    msg.setSource(36898U);
    msg.setSourceEntity(119U);
    msg.setDestination(58526U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.29999896088959666;
    msg.lon = 0.5088799627250993;
    msg.depth = 0.748001934101659;
    msg.roll = 0.7136432648533805;
    msg.pitch = 0.5682932237974211;
    msg.yaw = 0.45172065801123296;
    msg.rcp_time = 0.7457085397170239;
    msg.sid.assign("MNGTOENUCKOUFBIYUXECVSMRHAKNMFKQJFONZXSSOMHYRGBZHGAHCQABUZSNSRJMBVQUOXQJOCGPDTDYGXFEZPTHZJJJAKGUNZTRGIYLHDKUDDWVMLWPNVXVNOWSRTCPAWBHXOMSNBTCRLQKDWJZCUYLXTCKITIHVYFPMXAJGUIOPFAIQBALACQZAWXTHJVWPWEMORPKYRIWRHLQESYELKDXEFEGVBGFFDBBWJYFNVERKZPDQ");
    msg.s_type = 89U;

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
    msg.setTimeStamp(0.39792325624153013);
    msg.setSource(47037U);
    msg.setSourceEntity(71U);
    msg.setDestination(11073U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.41411934590691346;
    msg.lon = 0.5073249812683063;
    msg.depth = 0.5927717195650758;
    msg.roll = 0.459021757216694;
    msg.pitch = 0.38399127954112744;
    msg.yaw = 0.19746128821417586;
    msg.rcp_time = 0.7706276408230611;
    msg.sid.assign("FQRAIYNMTORFDCXHRGHXYEPMDWWWPOOOZDYAETIXRTIBTXBQWKKIQCCBXAFHIWYJTQEMPJWIJHLNHBMAOALWTKRIHRNZBIGOPVLJUDLBNGEVGMGVEQXLVLVFSKKBTKNANQXEQYNTQAJHHSSOGKDSDNMBUYRJFMRCVZEF");
    msg.s_type = 4U;

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
    msg.setTimeStamp(0.16211912266120898);
    msg.setSource(54114U);
    msg.setSourceEntity(26U);
    msg.setDestination(61545U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.9094160309235466;
    msg.lon = 0.06592828398834627;
    msg.depth = 0.877920352090651;
    msg.roll = 0.43249517141655425;
    msg.pitch = 0.836017316107355;
    msg.yaw = 0.42740158030879527;
    msg.rcp_time = 0.6572778273402644;
    msg.sid.assign("NCTXTYULFAQPTLARLXFDNPDOUPPWVUFABWSKZHHIDLCPNVXAAOKBFECNMBOACKGWAUPNORHKPTZCIGVJGHIZXFUKGHYRXIMETJQPKFWDFBKREYMDSQQCEUBMFVZMEVXDEIZRJJDYMDCCNSNOWCSZGVBIYQJO");
    msg.s_type = 48U;

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
    msg.setTimeStamp(0.3582122558149208);
    msg.setSource(29594U);
    msg.setSourceEntity(105U);
    msg.setDestination(16747U);
    msg.setDestinationEntity(152U);
    msg.id.assign("LZAULHFEIPKOKDQZAWDPXGFBHTYPRJZDSKJJZHNICWWRJNLRFQGETXTRYBCEMOUXLGRBMKRXIXPIUCHVUYEAOLFGTNNTTGXUDZMLHRARAPAWPIQIAOVQDBQTMYJNPYSVVVQIHKQYUKEDMELPCEFMLVGMKOVVKSSRJGBWONB");
    msg.sensor_class.assign("MRDRAISZKOADCEDIYSGEPANTYEUOKPHWPIROMUYHSWODQDWWTLXYMZBPFAVGDUHPKMCCRIPYQCINJIRLAVESCXAVYDQBFHKGVQNOYLCQZJIITSHBGAZOJUQZMCGAQMJZTPOETBKZXKWHJOJJFRWEMVVUTEGGFZPQKWBANXEBGQSPV");
    msg.lat = 0.8843447278780043;
    msg.lon = 0.08075109551453274;
    msg.alt = 0.8925796364108527;
    msg.heading = 0.8082783574558824;
    msg.data.assign("FTBQHZWMUUKADLOVNRJUMVNBBFELNQOPQOYELMBUIEAGMBEQYJRFXVTDFZSDHRTGIZAMBYLICPDSGSYXVTLZPVIOOMFHSYOYMGWKJQUTHHWRTCFKBSLEIAEITXADQMKREYA");

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
    msg.setTimeStamp(0.5364153694159371);
    msg.setSource(22802U);
    msg.setSourceEntity(135U);
    msg.setDestination(34230U);
    msg.setDestinationEntity(40U);
    msg.id.assign("DTMWMHUXUCAYKSOFQVWNSSZYBQHGZAGGILCNMQMREDKDIFROOFLJZSNEZKUYTKPIWAWTHBKYBCUXWWJIHWZEQAKARRLZXXBCJVWAMYMOCSZNOJIDJX");
    msg.sensor_class.assign("QULNPPKVMTDVEKXKNAUPVMLTDBDGSZIAPLFYNDRSFIZYFGHORBFFCAKN");
    msg.lat = 0.3664615333656589;
    msg.lon = 0.6218337651318728;
    msg.alt = 0.8299105196917965;
    msg.heading = 0.5875966621737244;
    msg.data.assign("PABKCXVIHGTGYQZKGUNCOZMWMDISCRWRMOLHZUXETJBTSEB");

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
    msg.setTimeStamp(0.06758236262956308);
    msg.setSource(33141U);
    msg.setSourceEntity(191U);
    msg.setDestination(19000U);
    msg.setDestinationEntity(38U);
    msg.id.assign("JKCZILNVMAHFRQWTTLRDDZIODBCRXPMIJYGVBZQARUUXTLMUOZLWASXGFFKJRAMKONNXQJYMCLEYWUTHIUFMPPNRDHWZXUGOKBQREHBFULTSYWVJJBDKQCRSSBLQVAOFEOKEYDJAGIALBSOIWSQCGWWNZCASWYXSRYYCVIAEVONFYHCGHRXEHNENZZFOUTBLQSXITHMPUZQMEAIDGUMGZOGPXPKPHBMFVVXKNDEC");
    msg.sensor_class.assign("YCULEZJTCAMP");
    msg.lat = 0.8892908837749156;
    msg.lon = 0.09815263069341085;
    msg.alt = 0.992161283743572;
    msg.heading = 0.049468620371870387;
    msg.data.assign("YKUCNUALNHIAHA");

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
    msg.setTimeStamp(0.8163818874276568);
    msg.setSource(49006U);
    msg.setSourceEntity(66U);
    msg.setDestination(3935U);
    msg.setDestinationEntity(120U);
    msg.id.assign("RRVPOYXHWDCYXYGKJDAGMGJIIFOCANWGUCKZRTZABISIQLXXBNAMVVYDPUACMMDYHWFASFOZQOMOQWSGPHVIJAOUWEVSFHREQBPPHUZHPQOWDEMLLDBTNNTWRRTUQWRJRZYYEEKHIGJOBWSWBNUFCQHUMNYXFPKLZBV");

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
    msg.setTimeStamp(0.6053592742134197);
    msg.setSource(21571U);
    msg.setSourceEntity(37U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(144U);
    msg.id.assign("EVJGPXDQNJRGICURUFQFROXAYYYNUVHGNHGH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EBYOSOUVWGJOUHZWESYEWFTCIEJLQSWJATLTGEQCCOFDNVZNXGEWFUSIMWDYMSLCFLLJDKEBNKDYSGDMIXYJUKZNUJTMRHTPNDVDRHDNNRXTMUZPORVJXJIFKMMRFZXKBAXMCAAWIGH");
    tmp_msg_0.feature_type = 149U;
    tmp_msg_0.rgb_red = 153U;
    tmp_msg_0.rgb_green = 161U;
    tmp_msg_0.rgb_blue = 88U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0639455873718745;
    tmp_tmp_msg_0_0.lon = 0.0655275875869501;
    tmp_tmp_msg_0_0.alt = 0.14118108867702528;
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
    msg.setTimeStamp(0.6943448592425914);
    msg.setSource(38142U);
    msg.setSourceEntity(15U);
    msg.setDestination(7823U);
    msg.setDestinationEntity(247U);
    msg.id.assign("NISMXWKBAHPRFNRIXVBDPDTTXYZZJFNUWBZJEDKONRXWARFQMZHZBYTFFHYOCBGLUWBSHCTEJZMTSNCTDXQNGYKSFKNMMAMAPKPGQGTPXLQPUIKMNJEQPEYMHJXIRDBAHUVWCRFYRQDOZCOSJVENRBEISVOLUCKIUEGBSVFIYMZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SMUUGABLNPBYXRSCJWETLNNYACSSYWWPRQYJIKPYKQMBKDLWTHAZAEAZHBIUBDQXZQQLDAXCKOWNYGGPSUQPPLIUXNMHLSARHWUOKJKYVNKMVFRJIPESWEZOJWI");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 164U;
    tmp_msg_0.rgb_green = 69U;
    tmp_msg_0.rgb_blue = 55U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.15239391372090738;
    tmp_tmp_msg_0_0.lon = 0.01933097523885452;
    tmp_tmp_msg_0_0.alt = 0.37776588892390306;
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
    msg.setTimeStamp(0.17816782077411686);
    msg.setSource(40094U);
    msg.setSourceEntity(227U);
    msg.setDestination(28076U);
    msg.setDestinationEntity(238U);
    msg.id.assign("DZCQYXLMXSQKIYVJLUNBGHWUQYTCPWFNKHSNDFYWILSQAHPRBLMEVADAKLMAOTWSYUJHSOUIPVFTITJBBKCBDNBZCJRKUPGGHQOFZTQVTRMOVRMRSXNEAGXSUODPKHRLZAMFQCCIPWFFTUGXTZXWOWDIWVCAOUAGSWKRMYEYVQHSSPWC");
    msg.feature_type = 180U;
    msg.rgb_red = 251U;
    msg.rgb_green = 205U;
    msg.rgb_blue = 144U;

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
    msg.setTimeStamp(0.2844380931719638);
    msg.setSource(46066U);
    msg.setSourceEntity(64U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(206U);
    msg.id.assign("BKVMAKPKOAUQWYXEVVFPBVZYYCNMAXIDYMT");
    msg.feature_type = 189U;
    msg.rgb_red = 34U;
    msg.rgb_green = 22U;
    msg.rgb_blue = 209U;

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
    msg.setTimeStamp(0.5488596101931568);
    msg.setSource(50467U);
    msg.setSourceEntity(164U);
    msg.setDestination(51990U);
    msg.setDestinationEntity(112U);
    msg.id.assign("WCFFEDFZNUOVGBEZHQCVWANOCVLXNLVIZBUAJETNBTMNFQDYHPVAMLWXBIQPRDWNOAKTXIKGHKAKHMJVJJFLKITVZTQGBSXDGLWSJYQAZIROUNAYEJXVCDZBKQZWELPHKFGZRCHMISOEBTOYGIFUPQEPENJURPHAPYSYQOIOVPGDJQRGUCBWZXYJRLHVIESKLMXFJNGMMUYWASSSNSFKWTT");
    msg.feature_type = 109U;
    msg.rgb_red = 222U;
    msg.rgb_green = 217U;
    msg.rgb_blue = 77U;

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
    msg.setTimeStamp(0.31722934199250974);
    msg.setSource(30486U);
    msg.setSourceEntity(212U);
    msg.setDestination(56561U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.10849267988981193;
    msg.lon = 0.9729015559967396;
    msg.alt = 0.04365568492232286;

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
    msg.setTimeStamp(0.6879196173722832);
    msg.setSource(47436U);
    msg.setSourceEntity(159U);
    msg.setDestination(11253U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.09661669680054508;
    msg.lon = 0.45733472652984397;
    msg.alt = 0.25025573946374036;

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
    msg.setTimeStamp(0.518288913528957);
    msg.setSource(18167U);
    msg.setSourceEntity(229U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.24634640008100828;
    msg.lon = 0.44078037957818716;
    msg.alt = 0.8419495043906362;

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
    msg.setTimeStamp(0.7112004062206014);
    msg.setSource(54299U);
    msg.setSourceEntity(8U);
    msg.setDestination(1956U);
    msg.setDestinationEntity(206U);
    msg.type = 26U;
    msg.id.assign("EYHANJCYHQMQTYZPPKLEZAJVVGVRXVYWXGHMWBCCTDCKYDTVMBDFXLFVHRHSLFYSDIOVZLTQBDIETZLFAOAKIXAS");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 41062U;
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
    msg.setTimeStamp(0.576568757552189);
    msg.setSource(380U);
    msg.setSourceEntity(109U);
    msg.setDestination(11957U);
    msg.setDestinationEntity(200U);
    msg.type = 53U;
    msg.id.assign("KHAHJPSUXESSQPCYQIZUM");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 139U;
    tmp_msg_0.x = 0.8917970985442836;
    tmp_msg_0.y = 0.5187149797906291;
    tmp_msg_0.z = 0.8630820322540963;
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
    msg.setTimeStamp(0.5738164519072516);
    msg.setSource(37996U);
    msg.setSourceEntity(114U);
    msg.setDestination(63270U);
    msg.setDestinationEntity(172U);
    msg.type = 231U;
    msg.id.assign("QBJZAXJJPKCBTVWNEVTLAMDRBXHWISQOCCKVPQPDHLUGYLXTOTGGONRWRUJSIOMUTSQADTRFUENQDPCMYMKRNQIRIERKQHCMHUZLOZWFNHSVATSAHUESWMGJCJZSLAICWFLEVMFJIELOPKYYMQZYOFZBXLIFXDLZOKAVWHGBXVZXVSABFNEJKYELNRSG");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2584382302U;
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
    msg.setTimeStamp(0.3711095959419114);
    msg.setSource(56408U);
    msg.setSourceEntity(145U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(250U);
    msg.localname.assign("UUFXVSYAQSDKYPQOLRJRMAHEIYHLPXDYSBHEQDFTCVNNZYBUBPIGXEAMXLWXHYGRGYWYKCAFHAZMWWSPWAXXMPRITNORUYEOTMMDIQHFETWPFEENWTWQAXJKDPMKZGODFCNIENNBSCITJZCJKUOJMUUHJGRGFTQBVOZLCLVIKSSLJIRGXJHUFFFZMVMSDPDAKEHWOQNURVGBJROG");

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
    msg.setTimeStamp(0.11932997204795126);
    msg.setSource(37471U);
    msg.setSourceEntity(82U);
    msg.setDestination(33867U);
    msg.setDestinationEntity(219U);
    msg.localname.assign("AQKESEOXSGJJRGJGAWMNFWWRLHTYZHVFJZFKLJRLUIHZMBGABXWXREOYUMHKIDQIYOBKCRFCYDFYCCIDIOGZXDJOVYNOTOCQVPDMHJVGUCXWJJCKSEGCPRIKVRDEAPTQLEYAIPLOEZGRDKRUMVMCTSDPHTNPYWQVHUKIUQUJEFIB");

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
    msg.setTimeStamp(0.738903722649473);
    msg.setSource(25780U);
    msg.setSourceEntity(42U);
    msg.setDestination(57325U);
    msg.setDestinationEntity(148U);
    msg.localname.assign("WYGLEBPJZDTZPSIBKOEPBNKGKSPRQYXBFXTCEODJCCAARADWXXTYNIKRNYPLSEUFVLETLEWSZBCSARIUETAXRIEJZPOCBVHTTOKXVYZQMYNHEODDQMUJWROPFGZYOMVIHNVSLZUDDMMMGFGPQRBUHZGVOAHQSMMRUFKFATUOMWIWWXXBFGDHTKXSHBFRLFJIWWJPIYNGGHBJCD");

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
    msg.setTimeStamp(0.8337757186446418);
    msg.setSource(33006U);
    msg.setSourceEntity(152U);
    msg.setDestination(15028U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("DJBIWQAXNHWFNVYUZKYTEDFOXNGIFRNOVFKZIDVPQTEMHQNMNVMHTSVKGKLJTDFUOHLSDWUPTKJLQHXBAMTMMCICUFSAGYXGZQRILJUVKXVLPMQOSFZQAEGCCKBZSRZJIWBWTPBCOBWEGJIHCJKUGZYDAEOSLVN");
    msg.predicate.assign("GMIHSVHKVAIMVUDQPXVZFPGPNJPJLYYYREMZWPQIGUWGFJONWFVRZRTFIIQCTNXDBUGNESLAUBHIIROGVCZGSJOMCHPS");
    msg.attributes.assign("GGFPELJTDTKHMXVDZYWZYEJQMJNOXQIAYEFKOORPSBPGAXYUHDCZAPFPTGTELNMHHUIUUSAJMTWWVKZKIILRRTXRCPNOQOYTQGIWLFTQWWCIVBCFZZBFICSIWJDGSMWEBNAAQRRDCOURYVOCPXVHDMUODFFS");

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
    msg.setTimeStamp(0.90292042198324);
    msg.setSource(26335U);
    msg.setSourceEntity(115U);
    msg.setDestination(11580U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("ZSMRYMJHPAXCSYLTFQUXEKNGKHRWENBVNRLZIWYCQMEMLHEITHLYMSPCYSZYHIIQCDJITOE");
    msg.predicate.assign("HSUJSQWWUDBDPONMFPHRFOTJIXYGLXKOZZVTJCQNSUVMLXSJPSCJIQOTBGXHGWAGEDVFFMBELNYSBLENVCXVAYRRGKAUTFOMEMWXYMKRZUTVOFGLABKZRROQHESDWPNFPIYJUTYKLQXIWSOTAXDMQWHEWNAOIYPARBZRESJCUZGLDUWZFJGPFHIJLQUHPR");
    msg.attributes.assign("CWDPTBANKFOBAURCEGOECKKLFQWUKTCTUMZOVFVEYDDMCPUYTJEVEYXSHLNTGRMTJRSTXQFNUCEGYZOYBTUMVCURAFPPVIVJOPMHPGLYHQXJWEZBGBMHZHHSZULQIORQHQFDOBBFMLACXXSRFJYNLJKPICSDWDNPZMRRENZ");

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
    msg.setTimeStamp(0.8631863906427256);
    msg.setSource(61262U);
    msg.setSourceEntity(32U);
    msg.setDestination(40827U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("CURUXCAHDOSQEZABDUWHXTGWMGTWXTRGISRAJPZJYDONGHKBLOSWVONKEMJWPIQQNEMDPLMIBLEKMGYXCWZBPHFCCZFAOFGYFRUKZPXGOZYWIDLTTJBHAPSJLXZWVGRZKBZNJVBMOQUSXKNDKKEOCIVNSMJCFRDVADPYKWVRRVYJTVQLUUFIYTLMVFSQHCZFGHXQA");
    msg.predicate.assign("QOJBWUABCZXSRLMGEWLMHDYISS");
    msg.attributes.assign("AGLBXJHKGDNLQESUQFTIBXOFYOVTATRWLAVZZFWSXUCMDNLVOSEFABRGPHNCDWAVYJCUOVTIHAXJFXNGVTKHYKMSOIIFDCFUHKMMEFCNGABSZBOACWXXIMWINPBXQBNTRRJJTHVBQSECRCXRGVVQLHOWJEQD");

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
    msg.setTimeStamp(0.03256762113995182);
    msg.setSource(37052U);
    msg.setSourceEntity(47U);
    msg.setDestination(17104U);
    msg.setDestinationEntity(94U);
    msg.command = 51U;
    msg.goal_id.assign("WDIUTRJTLITRMGEVLBZVIJOMVZFOGBBLTSSESZVDJECBMDQSIFKFHGXVJWOYOKSXKNNHSEOPTGMEJRCKIWXEAYURBWJVGCBZZFWHDFWZEAWHXOJOFNQAAKYJGUJSVUP");
    msg.goal_xml.assign("YBJRMCQDXYLZMBKZD");

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
    msg.setTimeStamp(0.8307871569786589);
    msg.setSource(11400U);
    msg.setSourceEntity(238U);
    msg.setDestination(2532U);
    msg.setDestinationEntity(143U);
    msg.command = 74U;
    msg.goal_id.assign("HAGSAROJAFJWVJPSGVAUIXEJEGBCBVCGXQYWOYQMNVXEMOUWDGJETHNZLNHHCPDMFPLYNFIZSKRCYQGTCBXXUCKWF");
    msg.goal_xml.assign("ZGMWAETSXDZUROARKEGYQQEAZNQGTUCNKPKQCLACUJPYXVVWINPDVEIQXFGLLFXZASQYHCSOTZUROUZUHNOUOPFACPBDKSIDTMIUXBQOAMNZOWPFV");

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
    msg.setTimeStamp(0.5182616141460918);
    msg.setSource(22889U);
    msg.setSourceEntity(57U);
    msg.setDestination(24690U);
    msg.setDestinationEntity(123U);
    msg.command = 226U;
    msg.goal_id.assign("XUDHTYNRQWZZZWWFAHLPPSCLRAJCEDRWDJBZTHRVLKVGJLIPEVMAM");
    msg.goal_xml.assign("URKVZAPSDVJIZKSTMXYCESNOUPHPVMYMSHVFILGIWLOUOADJBABCWVXOAZFQBITKRMDYXVNLHWZWBQMYBEYZCTQQVOKGHJDKIJDZRCANMNMCEXGJEJXUWYZPBMSERFGPEPPYWSIUHVCQSGZJEXHFGGHKQDNKFLKYKBTXYVOTAJPCIZOCULATFOMLFIPRFFQWNOCOEHBDNNTRSEAXRLRRTD");

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
    msg.setTimeStamp(0.8393169118469079);
    msg.setSource(11227U);
    msg.setSourceEntity(2U);
    msg.setDestination(38093U);
    msg.setDestinationEntity(84U);
    msg.op = 106U;
    msg.goal_id.assign("CAIKQLZQZXRYVFKMACZWFSKBKNROIDCIDEGYOXJKHBHRYYZSEAUTONACEVHNSBPBVIVSBTHCESLAVWWPPRFNQUMOPOCIYFNZWIPWEMUDTJBJRTJKVSIMSCQVQRMLPUZULGTRHMBPWDMLWZNATGFOLJDRWWKOLS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LGQORDJRYGFJRKYGXQJQFQXRAHMPUTSCWFCZNBHTZMRJKJJPWVWCAALGGDOMPGBPXIPYSNWMXKBXSBHVFNVHKZHKZHKYOBSAAFADTEYLADZOOCSNKWYBUQSQDHKIPEAWUWGFNCMGDDSNHLYOVNCEEOPPOELYN");
    tmp_msg_0.predicate.assign("WVTELCRKROOMRHQBJMYRGMPZWTAWJUDATQTHNINJOKSVRMMYKBEEXSOSVSGNYWDGTYMXHNQPLKIIDECDYFHFNMDAEFGZYTYWKZCPZCLQRZFPULDFUMFCBWCKZIKNHPHBPVNLZENGGNQDAYAIJBLASXQXSCAASFWYSLHIJXKRTFHLWRHJBGZFXOUGJVIWEKDPQCMJVEXOLXQVEJUDQYUTRSGBPXUENRODKVBSVA");
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
    msg.setTimeStamp(0.24680877234492737);
    msg.setSource(3177U);
    msg.setSourceEntity(135U);
    msg.setDestination(7229U);
    msg.setDestinationEntity(36U);
    msg.op = 181U;
    msg.goal_id.assign("DNYXFRPFMOGKQPUYKBEJOBANSHMUEIDYTRQZTRIDMGVBNNWKTGGEBHEM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CGZTVLYEKOSQOZQVQKRCKNAMMIRSOCHOAIHNTQOCISEUZNWTEIJAEJRIHZOPYHJADYFPLCDDJEKBBBAFKRQLSDBQKNGQUSIQGVURBDHVPTXXRZQGAUENMXKEWVBDBKYTUSWVXLLOAIHZXUWGJJTWGIFBMDWYRLTWDXYD");
    tmp_msg_0.predicate.assign("DYQGXORCXIEMNMDLTRCAIZMCIPUVKLGGTDSKHDEJBHPXXRLPURPHTUHXYCKETQFVSNHKGQVKKHWXDWXNFBOOESYNLSWSXJMFZHBLOVZHZILZEFCQTTHUIDYYWWJJGVGVORMSIMBYCRNNAQAWWJFPZGXPTPUSDBALOBFMSGQDFRUVYMEJGLCBEUPESKZOGAUOLPTFANZQQFELUBRTCJJAROWVQZBIMKEWDHXRFPAWOAYINZYQJIMDJV");
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
    msg.setTimeStamp(0.12423926821520492);
    msg.setSource(24159U);
    msg.setSourceEntity(76U);
    msg.setDestination(17184U);
    msg.setDestinationEntity(36U);
    msg.op = 159U;
    msg.goal_id.assign("UBUJHZRNWYZODBJNQAGCTKPIFCDNCBHIEVDFSXZSEBRUMFXYQEZGAOQTRCKFQBOYWPWUSKJMZFXKHLWPOSUYQXUNH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UBEWIGRAKABJUQMQLZGLBMDQGVRFELMQCMYFTLH");
    tmp_msg_0.predicate.assign("AUPHMVGUBRAPOOJCIYCYWLMTJPSHOSYSTXYDKIXWFJHGPADGKQLNMQUXGWCTPBDYVLZASNFIRXAHAQENHTTSDBGMIMBNMEGXCBZUFTYSVRKOAVKPJNVDIXBCSWUITLVCECWWSDTOEPOIMRKQZVLQPTVZZEOGVLRUKFHJHLEUJEEZQPYEFWYDBRJFKLFUYLNXJZLRNMOG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CNNPOBXBHFODOGRJTAFCKBNSVGAYOAZZGTYJBUUISAMPZZUPPE");
    tmp_tmp_msg_0_0.attr_type = 171U;
    tmp_tmp_msg_0_0.min.assign("REBNDIIFMTUCPQXCPFVBFFOTUDCXTAMJTYZLWOUEWHHZULIVGPLGBZSVQKTRJRDCCQEJOANOXWUQMQLLUYRHNJDPIVQYZCLPTRKUHDLWUDKLKMXVMKZAOWAPVBSDKXCRPVVJNHZBJIIFSXNFETODATSSDNSRPIP");
    tmp_tmp_msg_0_0.max.assign("WRGLZWGCRAYXZSDDELPTGNUJPRTIXVCPIHAHMBBTTNVNODFEQDJOQQQWHAHOXDIOBZEAZDHXALWYXVEEUQLOSJSGGLYDKKYQGRUEAFGJBUDYRUXLXBWBBGMXINWOEHNCSNVSHFJGEOCPFLZCAJONNYNIUMFRXCRWFEJHIAZKJOFKVHBKIAVVSTMQIFTPZUWZUTULBXVOPKIYKKKJNYVMFYKSRAIMTHTVDPECWZ");
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
    msg.setTimeStamp(0.8059767263017323);
    msg.setSource(39574U);
    msg.setSourceEntity(133U);
    msg.setDestination(30295U);
    msg.setDestinationEntity(94U);
    msg.name.assign("VKUYQCXECBJBRLDPEXEPULVOWXPZPGTJNTSBUDODZGMIJQSBPWNBLZHNIOTYYJTSPNFCFQFRTQFAVAQEVAZTIKCMPAFWJKZBMGLTLAIHDUDPYWIRNQMMQGQWMFKUNFYTUTKGVELCHSHELRHAABJONEHRCMXJLDSOSSDIGFDJHRZRTVCIZFVZWFCABVDDWMHGXIGHKXOXNYKGLSOOZCGQEOBANIKXWPUSRMEZJKRWWNYXPVXL");
    msg.attr_type = 185U;
    msg.min.assign("CDPIEDSESUZKPOVHEQRLEDZWMFJOBGVWRRDZHSCQNORKUYJTDHKQFGEWMYABURSJXLLPOJFPPYQDPBYIOBRFALNUNQZGQAFXLMYWANBYGMMCOIRGRDCAAAOKCGXWNTQZMSLPVUHKZTNJCHAGPNSBFL");
    msg.max.assign("OGNWXELXITQFXKGLMIQOHZYDVGKRJVCEHBFGP");

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
    msg.setTimeStamp(0.9527612819793606);
    msg.setSource(33060U);
    msg.setSourceEntity(161U);
    msg.setDestination(61187U);
    msg.setDestinationEntity(85U);
    msg.name.assign("YNHCGOPMVLNUMNCVNKHRCJFTPSXXFGLWGBWRJXKMFBUOEMMYJDJYVAEJAWXAOPBVRRZANGSWIXDGWZUTYJRRIQBLPNNRKWLYQTOZGZSYBTZEVEKDRPIHUTBAVKUYEIVVCHDYGIOILTEMMHQQNKXBBAIPJIRKPKVVMUZCZOZQTDLSFUDXQGEPCDQFCJAMSSAFQHIHGAIZWTBHLXBPDLJSXEOUPSAQDETQFWFDWLCEMRNWGO");
    msg.attr_type = 43U;
    msg.min.assign("ONMPFIFJHONMYDNPGPKTVVIANBBCMXDPGBMXTUKQSRKJXVUZLYTCPOUSZEOJWHFVILVJIESALFWOFGZJWXGQBQOYCTAZEBFKAOJENCKFKOWURSQEDYJGICNMQYUXALNQGTACMSLRWEXZGVSURXWUSPYMSSWVIHPAWEJRCJHQDEMXDAEBRFEUVXGYNDPUM");
    msg.max.assign("GQQIWJMRGJMDEJLRYGVBIPCSZHJO");

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
    msg.setTimeStamp(0.3005197586236321);
    msg.setSource(4240U);
    msg.setSourceEntity(80U);
    msg.setDestination(56906U);
    msg.setDestinationEntity(17U);
    msg.name.assign("NVQLKMBVPFVXVTGMGESPDJRAIGEWZRSMBXVBCQUIPORJLVSMFIRLCZIECMJKTRQCRDIDZAJUIFFBFEONLERRAHLXBBHGCWXAADSFEPTTZ");
    msg.attr_type = 237U;
    msg.min.assign("MYMHIPHHDLFJJZVGOWYGNWXQCYLOTFSRZWBGXLWSDSLHGPSFBJKBAPELKSDDVFMQEIEUOXCE");
    msg.max.assign("HNTIPTIAXCAYGGWZAWZMLGKVFISHOI");

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
    msg.setTimeStamp(0.541647557702347);
    msg.setSource(61960U);
    msg.setSourceEntity(51U);
    msg.setDestination(61000U);
    msg.setDestinationEntity(65U);
    msg.timeline.assign("UTPWWBETHIYFEQBTWZQPYFGLHQGSCOSMMMXXYSZGPRKLABHMCHACJRJEPVKFIMZDKDWTSPNQYVBNSARFHRIAQYRBJMSUTQZOPSLWAIGPOUDAXTNOXCE");
    msg.predicate.assign("WIQFNBMSGDZYMRGLKAUGSRANFFQSKRBECSLXXVWJMGMGPQPRQLGWHAOJNCRCJDNBNXIYFIYZBHLUMAWHYFUCAMWTFOIVGEEHWTBAQTMJJJVQHMZAQAJSVIPXIXDQNZYOONPBXHUHMVAVZHZJVCYCTCTUSUWKPIORCVROAICZGFOOOTEIOSCZLFDNTEMXSBTWEHGLDKDEPDVDK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SENJKMLIMWWCBSFYMOYVFQNBUAVDRHDGYHYHLLKHABGEMYAFXPRVUHRDIQLZZZMIAAOKGLNJTKKVXSDKXUTWZGPKXZOEDLNWCOTAZCVHXDEOVLWOSNDVKEXQIRPGQNDMJSBMTQWJBZPFFOCNEVIPE");
    tmp_msg_0.attr_type = 23U;
    tmp_msg_0.min.assign("PXWAPWBVMFSZMHGJZHIXWKTQTNRKDJOKNWFTEFITEZPUQLJOQSDYEEVPCOJADXBZHA");
    tmp_msg_0.max.assign("SMLIJPDEXGUFEILUYHZOMKQDJOKGZCWPXYPGNETAOVTXVRZNJKNYUPGXGROSHQQHMDFOKFJYZLHIJYFLDICWVRBAIEVVDCVYTBZQZMAUAQBCLPFEHKAMSEEUVLZBDOTMKHIILJEVWABUNXCKGHVBWATTTCNGOXUMQNRJEKYHIYQAOFWAXCGHURRCCBKPLXZFWTXPTSLMBJSRINNJCWNSYJGQMDLWDRIZATPQM");
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
    msg.setTimeStamp(0.5062125133908187);
    msg.setSource(8198U);
    msg.setSourceEntity(208U);
    msg.setDestination(60694U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("LGVOCSPMVLJJZBKDAABAXGNJDQYFWWWBSDFQMZOEDBJAKCLYRSIYOUOJUFZHTVPKTFEAK");
    msg.predicate.assign("YOGOIIFFGXTAGTFNJSAUQNUXSIQCKVRBECKHFYVKUTACBZACOMDVXJYRERTBRLPJHCWBGPNODWTTXBKZKNDTJIKVMWMXYOLMEBFOHQXGKRZALAEUWBQHHDWNPWNAGCEPDRMPQXYRVDFAESGOJLLQKEFUSYQPSNPFHWVWLDRZFZIHJYKTYDBZSVGNIPUAUUYSQEBNQCBCIXMOSSGUIEEJXWSZQIPJIVHVHDZLC");

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
    msg.setTimeStamp(0.8994533116266632);
    msg.setSource(5605U);
    msg.setSourceEntity(120U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("JCRCIFMMMAHEIFALVQOLTTQXZXFZYY");
    msg.predicate.assign("TOZOSRPEQCSWQATEJVLAKXCYWFHENYXWPNWZPMIJRUDSOMFAWZBUMYUQZZMQGBMEWPGTBBHPITFMXDPY");

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
    msg.setTimeStamp(0.10015302480289345);
    msg.setSource(17544U);
    msg.setSourceEntity(168U);
    msg.setDestination(35650U);
    msg.setDestinationEntity(72U);
    msg.reactor.assign("YQSSABWIAHJQIODHNMKSQLPYOFIEXIYHUMTVOVVQGCWIFJHIFMXNHMWAUBLMVQOCXCFODRJBHVADCQAGZUKLNPTWFJVEJLTVZZRZREEIRXCZDGXCCBILSQBOESLZHRXFEKZPNODNLURYLYCTWOHSVERTGTBZGPTYCQWLYPAWQJGMDBICUEAVRPBPMNMAGNFSBJNNEZSPWHSKPMKKDRZUKXDFQULJRSWYOKYXEXTOX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TJIYZVMGPTJBFCCMOENCLFNNXPRHYNPHDJZAJWTIJEVTQCFJJVBSZKFOSOFTRJZDZIXPPKNWTEHZPYHMKSQVVBSLNGUMDPZDXKOCRWTHYXLNLBIYINQHRKUYBWAQEUOVOCMQOLEYGGRIXBJQFKTVIRYDDAQAIBICEUUULPSQKDZFUAFUZDSHMJLVWLWD");
    tmp_msg_0.predicate.assign("OYHJHKKEPTURWQTSRJMWBHBRNYTSVHGAJTGTYAALSLFGRPEOCDOCDHOIXJSZXMCXSJTZHIDZOBSMAUQARXKLQNFQD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TWEDPCQKGCGNYJDGPGHEAXLDXYLRHGZRRJVNBQB");
    tmp_tmp_msg_0_0.attr_type = 107U;
    tmp_tmp_msg_0_0.min.assign("KPUPVXWXBUVOIWQWKWAIFLFEVECQGCLJNXKMSJAXAEKODUZDGZXXETTTZEEDOWBHEIDRVHWCLSGODYVCFREHZRMWNMLDWJBQDZQILSVOSEHIQIDHTBSBHXMUCUMUNWUIQQYFHVHTRXJNHLAXIHGPFBYANVMYYCFGYJNJYUONCORZMFWKAQULZACRMPDTBGPYPJLZTCONRK");
    tmp_tmp_msg_0_0.max.assign("AVEBAZWQWMLVVSPZGTAEGXAKZXZNQEXCMTXNDAEOBODDOPKGFIFNOFUQJGBUWIUHCGRCPGXEWYYUZCCNMVDHBPWKBFGTIQDVIVBVLLRFLSYGWJISJDMWOGPNAISMYYBBRNNLOASXWTXDJHSLHZWCEFMUHMIMQJZOHHKPIKYCHWRTVUILDCUACQSRPDVEFXKROLQQRYJEOFQPKSHQMUXZFYNBTIRPMXHTZUFJPSKOTERNSAVTACDJUYNTB");
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
    msg.setTimeStamp(0.44113785268256833);
    msg.setSource(33114U);
    msg.setSourceEntity(239U);
    msg.setDestination(52368U);
    msg.setDestinationEntity(143U);
    msg.reactor.assign("ALYGILYZBBF");

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
    msg.setTimeStamp(0.0692431962034532);
    msg.setSource(12275U);
    msg.setSourceEntity(224U);
    msg.setDestination(50355U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("XJOMLGJNRHXDWLZKIQKGJTMCSVLVQPRPTEFZO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GHGAMOSHVDTXPFOZAXIKDGMQKWGWALEWCACRYOGHSLGYGWLCLZMHWJBMBYPFERRKCOIXTZCTHBJABOQCLDQEASRUVCKYVBOXTMADEYNQXFINJMVYITSSVTFDPKZRJEMFHAZOJPRUNNYTAYNPQNEWLVZRTXIGKVXUDXEHWLNOENPGWZUYMOIMEFSQVDWULUPZBXQZAHPOVLJIFTJKKGDHPSLDJZCUQISDSKQHSUTRKBBIMJUVXFNRUICNYEBJWF");
    tmp_msg_0.predicate.assign("OLQGDNKWFVGDPAIMGHSJAMICCECHZSBRVEPPDGMTRCZBWEQJNWMMKCLUYZFFNIILDFWXFBBLTGICLIOANRHRNBKQCAKQGUTAZLXVXZOTZEIOSBDDUHSVDIGHMXSQXRNBQADFJWPYJGKEYKDQXRA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UOXMIQRGRSHYJSTTOVPOFWLIAVINDFHGQRJNGKYQKAQYRLMIUPCLMMLHCVRDKEHCUQGNHJPCNETHFOKGYACXZKUCDKFIJTVOKDZBANBGUIWX");
    tmp_tmp_msg_0_0.attr_type = 197U;
    tmp_tmp_msg_0_0.min.assign("ZQYYFFXIZDNDPPYQXZHVXAOCPOWGMPJCDOHFDRMZKLECNALRJFGNSELIRYVTGQEGSZMABHUYRAGBFEKTLAEVPSWDUGTGUMZYHXIJTOQPQLZSUBSWTKXNHTBUDASIIUMAOCSRY");
    tmp_tmp_msg_0_0.max.assign("MUXLZFLXCBPAUCIMUGTMRBQVMENNZLPFNQZISZXRDETVYJIWKVCVKSDMWLSXYIGGRJURMLHTNQIIJMQVWYHDEFXTZIJHWKGAJSGMNRKDHWCG");
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
    msg.setTimeStamp(0.19104567614572832);
    msg.setSource(909U);
    msg.setSourceEntity(108U);
    msg.setDestination(63295U);
    msg.setDestinationEntity(196U);
    msg.topic.assign("BHYZEERHAFSBYDEEMWVWGSFXFDHEUFKLTHFDOZPPOHQGMTAXIAHLVRJQIBZRQVXYBJMZVJSCJVADTUBWYNMYMNZXFHLSAXSTJIRDTXYSTPVHOWZPVAIMNGTRFRPENWUOIJUEOQYRGLCPCHKTNIBIMQZNCRNDLOPWWQWCZKOMSETWBJQFMBBGNDCCPNIFABVLLWPHSJOUEGOAUZYMXJUACQTGXAUKKIYDDKGNCKR");
    msg.data.assign("XOILXFJWVYEIDKCWXIGWNYPLJYMOYUNZJQWQIJAZGPOSLFZZZKVUZFNVSSFCMKMMMJSGIBGQSQPIDWDWSJXFZYFWTKQWLRDCMDPMFOPNEDEMXPAZEBBWAAQRUVIGABCNTSRRFOHRUCAGRKKTKBGNYXECLJTHFEKCQILYNTPVJVHQZNHHUHOCDKTCBILOPPVREQYUBJHYHYXVUUBLLEEDMNU");

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
    msg.setTimeStamp(0.828636091737467);
    msg.setSource(61757U);
    msg.setSourceEntity(208U);
    msg.setDestination(49088U);
    msg.setDestinationEntity(73U);
    msg.topic.assign("ODUVSPBAJCMAHNARJHFASFGJGGWVHQVJQLNPHBBWQOPYNMAKDKLUQFCRPHEKVQDTOGSSJWZRPSISYKPRRYGFYYBQDETWOMOTRDFVKNZGZWEJNEKAPSIXLOAYEUKQUXKGXYMXWUJZFLPSBVRLUBIPBNJRIHTWSMKEWNDARLWZFUCXHGLLYTHOZEAGTWUDAUBNNICXVRZBHDFT");
    msg.data.assign("JFOLGNXTCXPPKDPATEHMMLMFTRFIXPSGZBUZWSOCNYYE");

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
    msg.setTimeStamp(0.9211593300065525);
    msg.setSource(20526U);
    msg.setSourceEntity(4U);
    msg.setDestination(30697U);
    msg.setDestinationEntity(109U);
    msg.topic.assign("XWYDYBWZCPMSKHNBALLONATXPNJTITLUCMZHIRWHT");
    msg.data.assign("ZGAEWOOVPOTAPWNBKADKW");

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
    msg.setTimeStamp(0.14926498306614233);
    msg.setSource(57639U);
    msg.setSourceEntity(124U);
    msg.setDestination(61430U);
    msg.setDestinationEntity(164U);
    msg.frameid = 66U;
    const char tmp_msg_0[] = {20, 114, -115, 96, -116, -117, -63, -93, 57, -4, 106, 119, -99, 121, 114, 63, -56, 116, 9, 27, -95, -64, -68, 18, 39, 79, 72, -6, 77, -32, 59, -81, -16, -125, -79, 29, 23, -117, -27, 108, -125, -7, -67, -127, -28, 75, 44, -79, -24, -15, 2, -16, -121, -86, -99, 42, 28, -69, -35, 78, 118, 7, 19, 90, 89, -110, -74, -8, -86, -44, -79, 23, -117, -55, -69, 87, -118, -14, 26, -68, 62, -10, 4, -85, -98, -31, 49, -100, 119, -42, -35, 92, -66, 83, 25, 89, -9, -5, -106, -116, -48, 63, -44, 57, 19, 84, -8, -53, -50, -46, 9, 27, 82, -87, 99, 59, -72, -6, -74, 86, -51, -111, -14, -1, 111, 91, -96, -63, -5, 102, -105, 112, -37, -121, -100, 55, 23, 34, 12, -17, 93, 18, -24, -94, 103, 2, -44, 42, -107, -65, 105, -36, -124, -57, 91, 121, -118, -76, -34, 9, 100, 85, -19, -121, 60, 82, 1, 84, -34, -80, -90, -106, 92, 27, -96, -110, 106, -28, -124, 31, 60, -115, -95, 90, 22, 15, 107, 55, 53, -23, 22, 33, 75, 126};
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
    msg.setTimeStamp(0.9103647469051703);
    msg.setSource(56315U);
    msg.setSourceEntity(133U);
    msg.setDestination(49639U);
    msg.setDestinationEntity(147U);
    msg.frameid = 12U;
    const char tmp_msg_0[] = {31, -97, -59, 43, 26, 60, -103, -80, 104, -57, -117, -12, 51, 22, -127, -26, 52, -52, 26, -11, 43, -57, -9, 57, -35, 71, -29, -127, 72, 18, -24, -78, -99, -51, 8, -67, -68, -93, 16, -75, 62, -13, -33, 4, 73, 17, -94, -107, -92, -64, -94, 62, 49, -116, -56, -47, 65, -17, 2, 126, -114, -68, -1, 33, 19, 102, 46, -62, 37, 12, -64, -70, -97, 35, -79, 46, 98, 94, -75, -86, -77, -101, 14, -11, -100, 32, 100, -88, -88, -63, -25, -80, 72, 109, 38, -46, -28, 113, 11, -56, -114, -120, -26, 68, -36, 112, 117, 119, 1, 47, -98, 73, -122, 79, 125, -54, -57, 117, -109, -2, -83, 21, 110, -121, 15, 1, 71, 72, -33, 21, -96, 30, -35, -13, 33, 36, 59, 102, 62, 91, 0, -44, 59, 55, 55, -58, -101, -95, -13, -120, 38, 81, 14, -102, -40, -16, -79, 35, -14, -113, 119, -32, 109, 13, 91, -71, 51, -53, -64, 87, 93, -106, 9, -86, 74, -27, -11, 30, -54, 89, 63, 6, -40, 101, 58, 74, 37, -51, -120, -41, 85, 113, -39, 100, 66, 19, -63, 2, 121, 71, 100, 112, -114, 47, 1, 123, 14, -12, -15, -127, 22, 122, 116, -24, 88, -28, -86, 31, 114, -113, 112, -98, 22, 44, -75, -37, -66, 24, -39, -119, 73, 91, 93};
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
    msg.setTimeStamp(0.53401060061651);
    msg.setSource(33124U);
    msg.setSourceEntity(102U);
    msg.setDestination(44963U);
    msg.setDestinationEntity(43U);
    msg.frameid = 140U;
    const char tmp_msg_0[] = {-25, 94, 77, 117, 115, -110, 30, -16, -10, 88, -18, 1, 79, -67, 23, -57, 27, -110, -9, -88, -98, -49, 100, -5, -112, 116, -114, -57, -59, -66, -41, -20, 125, 88, 92, 29, -8, -108, -50, 56, -98, 22, -11, 66, -81, -127, -60, 73, -119, 17, 10, -35, 98, -6, -51, -49, -106, 76, 12, 8, 109, -93, -24, 75, -82, 52, -47, -11, 75, -83, -41, 113, 35, -72, -19, 3, 87, 110, 7, -39, -21, -91, -114, 123, -74, 114, 71, 82, 114, -57, -119, 70, 65, 112, -66, 29, 93, -93, 18, 14, 112, -103, -53, -112, 104, 27, -87, 89, -69, -13, 81, -3, 114, 45, 14, -13, -111, -36, 124, -66, -52, 6, -107, 76, 125, -79, 109, -96, 66, 16, -62, 44, 75, 11, 15, 33, -85, -123, -15, 101, -90, -71, 105, 12, 51, 45, -108, -126, 4, -63, 6, -113, -118, 66, 62, -105, -113, -57, 102, -16, -46, 91, 113, -118, 38, -127, -24, -95, 111, 108, 45, -100, 78, 28, 56, -32, -8, -2, -110, -118, 92, -78, -21, 30, 98, -52, -87, 25, 7, -125, 86, 107, 108, -7, -47, -125, 26, -102, -125, 116, 37};
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
    msg.setTimeStamp(0.6714543333279896);
    msg.setSource(33050U);
    msg.setSourceEntity(102U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(146U);
    msg.fps = 104U;
    msg.quality = 4U;
    msg.reps = 146U;
    msg.tsize = 146U;

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
    msg.setTimeStamp(0.2909131697496016);
    msg.setSource(53021U);
    msg.setSourceEntity(233U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(92U);
    msg.fps = 197U;
    msg.quality = 39U;
    msg.reps = 48U;
    msg.tsize = 175U;

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
    msg.setTimeStamp(0.7223799887867788);
    msg.setSource(52611U);
    msg.setSourceEntity(35U);
    msg.setDestination(53616U);
    msg.setDestinationEntity(250U);
    msg.fps = 95U;
    msg.quality = 158U;
    msg.reps = 165U;
    msg.tsize = 227U;

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
    msg.setTimeStamp(0.8325225475939759);
    msg.setSource(60668U);
    msg.setSourceEntity(90U);
    msg.setDestination(43174U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.4827675087415181;
    msg.lon = 0.24863174161930457;
    msg.depth = 249U;
    msg.speed = 0.7194663980683887;
    msg.psi = 0.7365606473569362;

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
    msg.setTimeStamp(0.013397141499791654);
    msg.setSource(14507U);
    msg.setSourceEntity(65U);
    msg.setDestination(7957U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.13901833609404024;
    msg.lon = 0.14353976613842723;
    msg.depth = 70U;
    msg.speed = 0.9617604256208289;
    msg.psi = 0.4555094520213513;

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
    msg.setTimeStamp(0.3566403093030729);
    msg.setSource(45682U);
    msg.setSourceEntity(30U);
    msg.setDestination(65263U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.6839504013101019;
    msg.lon = 0.9330479012835816;
    msg.depth = 201U;
    msg.speed = 0.5347625286588714;
    msg.psi = 0.6640003481165032;

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
    msg.setTimeStamp(0.8497392956566412);
    msg.setSource(34856U);
    msg.setSourceEntity(134U);
    msg.setDestination(52289U);
    msg.setDestinationEntity(20U);
    msg.label.assign("QUSUXEOFCWJMHGUUGYSPSXHJAKRVUORSJZPBLOAJIXCKQZKSMOVGWFEHODZJLDSRTKAOUMBXZNNYCUENIBJFXOETYITQEILHEHCNNBTGXTNRFPNKKZDHPKYNNVQXGYMYXGCOMYPDZIBPPGWIRHAKUVIEOAQBJGVTE");
    msg.lat = 0.003398168507725119;
    msg.lon = 0.06554840603739187;
    msg.z = 0.2608608279657586;
    msg.z_units = 143U;
    msg.cog = 0.4358169265269991;
    msg.sog = 0.16816187020883622;

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
    msg.setTimeStamp(0.950818481846737);
    msg.setSource(63701U);
    msg.setSourceEntity(121U);
    msg.setDestination(46799U);
    msg.setDestinationEntity(64U);
    msg.label.assign("KPXONIUVSAGYDPIQCYDCPUNXEZVKZFDYJLTBWRGKHSHHUL");
    msg.lat = 0.07525693878349382;
    msg.lon = 0.5641833073597428;
    msg.z = 0.05241698417097396;
    msg.z_units = 215U;
    msg.cog = 0.6177078174862695;
    msg.sog = 0.8352599789553662;

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
    msg.setTimeStamp(0.6430445454824042);
    msg.setSource(6030U);
    msg.setSourceEntity(59U);
    msg.setDestination(3268U);
    msg.setDestinationEntity(48U);
    msg.label.assign("ZZMQLRFDRBTXFCNAMMQVWOZGNCDQJWXOSUWFOUUFJEKARKLJK");
    msg.lat = 0.03433923053692434;
    msg.lon = 0.0028067399634152945;
    msg.z = 0.4308446225058322;
    msg.z_units = 130U;
    msg.cog = 0.1723567730539156;
    msg.sog = 0.8876621466023996;

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
    msg.setTimeStamp(0.8692639637278767);
    msg.setSource(61739U);
    msg.setSourceEntity(149U);
    msg.setDestination(12203U);
    msg.setDestinationEntity(234U);
    msg.name.assign("VVJURIQGNWMXCUDXXTITOBGVEOBRDGSSHISFYZLDFSEQHBWMUXIDXBDWKDYJFLDRAJZIECHTYVZINFMLCPJJOQXMNFYVISABLOSKAHHHMLZRGSPLZWYBPMHNSGYFGXQPPARTEEYFQKGJJDYLJRNVFAQUOQGMCELOUNSJKCCZCDHWZUPETZKAQVWSUOKUETZRUAXAPWORFBPEHTUKTHATJTFQGYEZPKWVVRMLNBIBKOMVXGRNCWABDILQYNPXMC");
    msg.value.assign("EGBSYUWOLJASUKBDUYQKHNBLQAFVCKLQIINRHVCGPPUNZQRRSMVHSLKILQQNPJUIVMEOOGHGXWCRIOZQAMZUPIGLFVHAGNJMKXCXVUNCQTTNORAFGEYAJFLWZBT");

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
    msg.setTimeStamp(0.3403255656079792);
    msg.setSource(33426U);
    msg.setSourceEntity(205U);
    msg.setDestination(31331U);
    msg.setDestinationEntity(254U);
    msg.name.assign("YNASGNBSNOYFGPO");
    msg.value.assign("YJDUFAVTBJNPEFZUWYLDNKISIINZTHMTXQHDGKBCPXAWGVQQZCDNXRWWLBGSBMCQXKDJXQWVOUOLFNYWRLVVEKFWPIBHODJMXIOYMRQZDVGXVNPOOJUKEOBEIEEMFLSFIMWEPCBZIRSJFSEAYBKARVWUTCJPSQOJGDJTFWFTSCXBXKCUCVTBUYRRUHY");

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
    msg.setTimeStamp(0.232725503322197);
    msg.setSource(37898U);
    msg.setSourceEntity(251U);
    msg.setDestination(42144U);
    msg.setDestinationEntity(47U);
    msg.name.assign("ZAWJDCZKCJJXEIMYLPORRWXJWNPBKESMTPUAQNFFTTLFHCRUFJJBGOOVKDPLXGYFHATNLNZMJSXSXVQRG");
    msg.value.assign("TXGWNMWLLTTZMZSUCCODPSVPBDUCNSRTFLYUJCUUZTWHLMOWQIKBCENTAVBSRPNNBXLVWSMUUQORFZYIRRPZUEAQYDVHRVCZRKEVGTOJLQJAKSAIOLBWUQZSLAKXIHKMFAFAQACWIFGTGXWDHMXVGGNDYOFTCIPVFYODKEVOJSHXWBBZAIDICEEDWOGVRMKSSQLPJKQYZTHKBYZBXFMPNUYEIHKHXJGFRNYLQEJDMCXXIJYPRMDBJNENJ");

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
    msg.setTimeStamp(0.16061009435861495);
    msg.setSource(21446U);
    msg.setSourceEntity(136U);
    msg.setDestination(9136U);
    msg.setDestinationEntity(218U);
    msg.name.assign("CQEVVVLAGXMHEWCBALYGALDDGTCPWUZYKCWYSHQNLHYMAIHYLEHSTJDKUUMLMRKTZKLTVEOMBWVSSDYHFRQYTDAETGPUCQUWZOHRWLDOHBBNCFIPBFTNMBJSTVXZKBGOSARZEKFRFPGWBVYUJADBUSWPFMKCERJJVSSMOGHNNAJ");

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
    msg.setTimeStamp(0.22331392541589978);
    msg.setSource(5104U);
    msg.setSourceEntity(106U);
    msg.setDestination(50208U);
    msg.setDestinationEntity(243U);
    msg.name.assign("XIELSDPLSSTTPTHICUBWGQZLUHHPFTVSNXZJYVELLTKGOLFOVGXVUHBFUFIWRRPWPXHOBSWRJSMMPVTKKZBMJNYWJWMKTMDJAQBKUOUEMQPONHRDIGVYZEKWFZKQMODWDGDJCSQODKYBYRVQSLYRUXS");

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
    msg.setTimeStamp(0.8206783104996258);
    msg.setSource(10184U);
    msg.setSourceEntity(183U);
    msg.setDestination(15935U);
    msg.setDestinationEntity(122U);
    msg.name.assign("DSMOGLRJPELTZCILYAYCBCHHUYNSXGFSKTWVFIWAZVIEZUYYRAITQNFTZNFEDRUPFOGWTMXHPJTJCNOPAOJVO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IBFYTZGOCPVSDEGOSRVJGHDJACVMVZHAOGGTRSUQANQLZBUMUARLDRQCFJQUOXEWHEHMSARNBFQLZBSMITSEJWEEGZIHUYMNXZAFBSTPUDWCKSWXLZKGTCPLXKRTVFDAXLQABYIYRWCQFICHRNDCPEFYATSVBUSOBWZIF");
    tmp_msg_0.value.assign("KFZJPBHDRCBRINJCNXEEKHABMNLKYGWNKHLTUCMAHSFSAWCNXUAFRGRQKOAQRRCGHWDQVLIYOLNPALOJCCVEUFEJHMISDMJUSXET");
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
    msg.setTimeStamp(0.9827291429124814);
    msg.setSource(64308U);
    msg.setSourceEntity(237U);
    msg.setDestination(55661U);
    msg.setDestinationEntity(42U);
    msg.name.assign("ZRDNZVMFKFAYYZEVZUXFRGKUDJZSCUENHWIEKLOCSJOSZBGOBLYTTBNXYUWZLEKTNHGYFPQRMMMSGJJQFSQSNMXOABOEIHULRWVNDELYJRGGQSFPHGATDNKOAPWNUXYMBHQPCDVYGLTKPDUNCPIYKIHPVCMIDOA");
    msg.visibility.assign("UJZFYSRQCRBDFKUSVBFRHZWJOMOINQEYACNUURTKLTQNTPILJXJQIEZNRHZKHFQJCGBLDBYQCZERMAWYOPPMWOIEUNGHSRAKXGTDFKWHKBNGVUHCFIMWCXRDQXSVOPIDBEMITSYXWYVAIUGPVLJGBNSMFPPZKQPUGFPAEZDLHHVNUYAWZJXFHLGXMXONXYKEMAITJLOLFDREGOQTJNZDTVVICWEMLRTVCLBCS");
    msg.scope.assign("KARIOUGEYXNPABKRWWLTUNHLL");

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
    msg.setTimeStamp(0.4206488680186967);
    msg.setSource(43792U);
    msg.setSourceEntity(167U);
    msg.setDestination(39083U);
    msg.setDestinationEntity(20U);
    msg.name.assign("TVOVSYEYWNVQITBCFNEWYYSPEQMRQLRQFIDMXRAKNHRZJIMCMACZTOLPSMEPYEJBSDKAOTCERJHUFRGQKAFAUFGFQRGBVPZYGXULJGQZFEZAJESPUFUMGBULBAILFWDOVLDWCAMMQUQLKQZWHIGDJNSBBLODAXDEXPVNPHGBLCYMVIPSJJKUYRKXNUHCOVFTRDPZNDYWXBOTTEVZJWAKOXHWNUKXICCTNNXHKBSMHZDSGWYOHJLXRGIIKSP");
    msg.visibility.assign("GQRYTSNHFVUZPQTOTMGJEETOCHKYWAKEAAFSNRLBZUJUOWBTYHULFQQVJWKXWADUQZRPDVIJLWLIAIBOXQYMKTIINHNWCCMXCAZRYLHGNBTMROVIFQDMIFOUDKXRBAPJDPMIVHFZUJJNRJENULXHNDLPSCUVMRCDEBJPMOHGHDQEBOAKSMCGPEFKMSSZVNALFTBXBGYQREPZEJXWEGZKWYAVIWIWNDXVCOSOPCKYFFZCGXVSXPYLDYQT");
    msg.scope.assign("HZZZHWRNKMDEIBGEBTUYKIAACJFEXNBUIZHDZWUGAGURXEBOUHJFJXFEDTSJTVILFVLLGSMALMKKIOVKPHMHCZXEBRLZRGBVXRS");

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
    msg.setTimeStamp(0.13416969560066505);
    msg.setSource(55112U);
    msg.setSourceEntity(35U);
    msg.setDestination(18622U);
    msg.setDestinationEntity(39U);
    msg.name.assign("OIROHECGZAZMLVZYOABQYJWVDLKJPPDXQJBNETATUXDRDQZNLFGMXWHBHWUICKSFBSVNLLVXYVTPRMTHWBQUG");
    msg.visibility.assign("VUKRLDBGAISSDVRGQMVWOGFCZURUGWHTVPZPSOWSXIQKBZVVJMCPEQXAGBAWGNFZDAYBRJXPXPBFDOHUFEAERFNQKRKKYLGXLJHSEFIMPVWUEWOSLNYJEHWTONJCMMRKPFEIZHDDELYWDODATGYHZMYSCWTKSHNLMQBBAVUAZFBJK");
    msg.scope.assign("JOTLQSIRBMDXPMXDBKROPGWSAVIBOKBREKZYAEHCITFWNBQHIMXRCDKAUMPGDZUXCNLFQUNPNRTBLMPMYLNNBMUXPFPHRQSZUAJRLMVZEYILFQNRVSV");

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
    msg.setTimeStamp(0.8657270901251893);
    msg.setSource(44043U);
    msg.setSourceEntity(227U);
    msg.setDestination(14527U);
    msg.setDestinationEntity(209U);
    msg.name.assign("SNBILUMFEZILWYYZOVEIDQMOGZWJTDOSGBFIWKHVLLUFPVEYMPGYQBNROTQFOPQVTLUZPCNSHXHDERNVFGTXYEXFJIRTQHUIWWJUCOMGXAKFZRKNKPERVBGDXHDJVKOMXCRMMSDKBMKIGQUVYJPTBCGAUCF");

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
    msg.setTimeStamp(0.4034206075869078);
    msg.setSource(42914U);
    msg.setSourceEntity(79U);
    msg.setDestination(15438U);
    msg.setDestinationEntity(156U);
    msg.name.assign("FKYSRWETHYWYQSNZVDJVCNVYBWJSUOUVFNCVVRWFKXQCIHTTUAZBDEGYLFDODSHGQSXBDCYUJHEELMYTFDAKQZOEWQTNBEIPAPMOCGNLKZMFUTVJZLWIJILYSHNMRXGKVEHHSVQQHCLRRPBJHFPDAMAYMGUBKZLWCBLKAXOQKGSQRWTLPMBXJZRBNIO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TKMMYYNFUYAHOBSLRDNMHTJMJVWBXIDAXQKXBHBAMQKZVHXGFCUPPYYTADAXCGWVSEUIPQICNHQULSRYCKXZIBXIAYSKHDQWZGVLLWWQEARRNGNFTOUVOJUOMPPZVYDHTGWODSLRCBS");
    tmp_msg_0.value.assign("SCWJVFKQXBM");
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
    msg.setTimeStamp(0.26052915799503773);
    msg.setSource(38713U);
    msg.setSourceEntity(225U);
    msg.setDestination(24052U);
    msg.setDestinationEntity(254U);
    msg.name.assign("OMOZRVNSUDRDWMHQLAWCNLNIGZLSEAYLEESNUDCKTZPRWVFEMKCTGIVOZHYXJOFNEOJCIRZRGXUDSIPBIKJMSVKUBMJBBCFVQBPLOXQSWOZXATEBYCGHPURNYAWYHSZXUQTPUQPBWEANEJPZMOFXQCGGRIXJMDWKPOBTIDRVGJIDLBAFTVWFQQTKXONGYPAJASLCSFRUVZVCDKYFHXTYALWHJKHUALWIMKQZVBNTQJXHGLIFNKMDYDGEESH");

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
    msg.setTimeStamp(0.656999003156211);
    msg.setSource(51453U);
    msg.setSourceEntity(224U);
    msg.setDestination(44985U);
    msg.setDestinationEntity(145U);
    msg.name.assign("CRIWTDLHSKXEMZIFZYQ");

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
    msg.setTimeStamp(0.3556245855340636);
    msg.setSource(32803U);
    msg.setSourceEntity(25U);
    msg.setDestination(18263U);
    msg.setDestinationEntity(142U);
    msg.name.assign("IQCVBTVVSYJEKPABIQZEHSRWYDRHTZVQCTMGGAYXNEYRXDERZODSCCVJLGMHZMNCPROIAWTUWBPYVQMXLSJLJEPUDBDNXMHEUQGWXIWOWKVFLTVCLWIDRGUFBLZFORCYZSNUOKGYMZWRSFTBJNXIYUHGJUIFPZAQRHHKXDQDJBQPTLMDZKSAHFPBSTJFF");

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
    msg.setTimeStamp(0.742732467127737);
    msg.setSource(44061U);
    msg.setSourceEntity(205U);
    msg.setDestination(3163U);
    msg.setDestinationEntity(76U);
    msg.name.assign("HPHSWIQMJAHCPBJUKQBYOFCXENYDWVFWEQXBWHEP");

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
    msg.setTimeStamp(0.471619567905017);
    msg.setSource(40864U);
    msg.setSourceEntity(63U);
    msg.setDestination(26245U);
    msg.setDestinationEntity(63U);
    msg.timeout = 1919424570U;

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
    msg.setTimeStamp(0.5749388252773939);
    msg.setSource(59294U);
    msg.setSourceEntity(140U);
    msg.setDestination(460U);
    msg.setDestinationEntity(205U);
    msg.timeout = 3174601205U;

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
    msg.setTimeStamp(0.2984489567966139);
    msg.setSource(22603U);
    msg.setSourceEntity(238U);
    msg.setDestination(26116U);
    msg.setDestinationEntity(142U);
    msg.timeout = 1031647975U;

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
    msg.setTimeStamp(0.8187194082046443);
    msg.setSource(52686U);
    msg.setSourceEntity(204U);
    msg.setDestination(8559U);
    msg.setDestinationEntity(39U);
    msg.sessid = 1644027126U;

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
    msg.setTimeStamp(0.6458671447682004);
    msg.setSource(10533U);
    msg.setSourceEntity(213U);
    msg.setDestination(10143U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1234163991U;

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
    msg.setTimeStamp(0.3084183224097058);
    msg.setSource(14582U);
    msg.setSourceEntity(2U);
    msg.setDestination(2395U);
    msg.setDestinationEntity(8U);
    msg.sessid = 779569387U;

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
    msg.setTimeStamp(0.6600477238311927);
    msg.setSource(43712U);
    msg.setSourceEntity(246U);
    msg.setDestination(10326U);
    msg.setDestinationEntity(121U);
    msg.sessid = 896805371U;
    msg.messages.assign("OIKHEHQFBNCSLNRZIPYKNGDLMHFRTQCEREQWWYJXGDTQVQYUALRFOROLUPDMXLINDTBHUGSFLZPZAKHJYXOTQXNMJMIXNSOGKNBBUBAEVIBBAGQUKSOZWZWMEEDPXEHJAVUZSWKHKMCWKSGNVLQDGSPJBTCISQYYCGIGCACE");

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
    msg.setTimeStamp(0.663370269084761);
    msg.setSource(45657U);
    msg.setSourceEntity(24U);
    msg.setDestination(63667U);
    msg.setDestinationEntity(103U);
    msg.sessid = 633997815U;
    msg.messages.assign("LLLFWDIQDRISQTLXYKTNIBUGPNWFNNBQIWIREUFOUBMXOWRFGQATBDPYEJTFHGZKRZODKBOAUGRNUQJEPCVGIJYMHWVPSJMHUTAWRBGAOUWZOYMCBDCSXEHQFNXSEKXENLGQQUHTVZATZVVIGEMLESSIXIVPJBHKGJFFWYMPSNKAPVPTJXWOJIBWYGZXMRKCYKVOEYDCPMSOMD");

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
    msg.setTimeStamp(0.6016232082955001);
    msg.setSource(42885U);
    msg.setSourceEntity(228U);
    msg.setDestination(4169U);
    msg.setDestinationEntity(238U);
    msg.sessid = 1893672010U;
    msg.messages.assign("KHNXQDGPVRDCAOICFQEVOOLEULONBRFQQXLHUBUAIPYIREDQLBSHQNMYTBPHKAFUCMUARRSSKYZXZVQJGOFDERSITWIIBOONUDKWKARLXYNMGAZTTVJJQNXBFLSCDUWLTPMGPJGEYBJLEWAXYXEPJKFCBVDSKBWTGTVPIPFOQCUNMHYRNHSTFVCDEKNMKMJGHCMMUGZSCGUCZLWTWPEZWLNBWHZFOVVGMXOA");

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
    msg.setTimeStamp(0.6400186883347435);
    msg.setSource(53120U);
    msg.setSourceEntity(204U);
    msg.setDestination(2770U);
    msg.setDestinationEntity(1U);
    msg.sessid = 78760806U;

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
    msg.setTimeStamp(0.6335501725559607);
    msg.setSource(27332U);
    msg.setSourceEntity(154U);
    msg.setDestination(62677U);
    msg.setDestinationEntity(93U);
    msg.sessid = 440403959U;

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
    msg.setTimeStamp(0.00733863916013433);
    msg.setSource(11525U);
    msg.setSourceEntity(76U);
    msg.setDestination(11529U);
    msg.setDestinationEntity(227U);
    msg.sessid = 352880341U;

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
    msg.setTimeStamp(0.17835517710475446);
    msg.setSource(8843U);
    msg.setSourceEntity(144U);
    msg.setDestination(8534U);
    msg.setDestinationEntity(56U);
    msg.sessid = 4028212109U;
    msg.status = 153U;

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
    msg.setTimeStamp(0.45824998181325427);
    msg.setSource(34143U);
    msg.setSourceEntity(59U);
    msg.setDestination(20312U);
    msg.setDestinationEntity(224U);
    msg.sessid = 648636946U;
    msg.status = 153U;

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
    msg.setTimeStamp(0.021806627341343643);
    msg.setSource(5020U);
    msg.setSourceEntity(166U);
    msg.setDestination(51009U);
    msg.setDestinationEntity(140U);
    msg.sessid = 533569362U;
    msg.status = 127U;

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
    msg.setTimeStamp(0.8229245519613632);
    msg.setSource(30232U);
    msg.setSourceEntity(205U);
    msg.setDestination(28973U);
    msg.setDestinationEntity(30U);
    msg.name.assign("SOXWPAHZJUDENXEHUWEADQSQYAFRXQCPBLRAZNJZPGTNFQOQDTACDIOVEPGWWENASUGSCTULLBEIHXJHQCPBDVCGKLNKUMVYCLHRSKPZPWGRFITYWCGQRXJTIK");

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
    msg.setTimeStamp(0.16414929746799212);
    msg.setSource(40039U);
    msg.setSourceEntity(79U);
    msg.setDestination(10723U);
    msg.setDestinationEntity(169U);
    msg.name.assign("EZIKFHHQDOVQUDRWSJUSXMWCTVIRKDIXEDASNBZCZPGTCFBZTRHOCFIRMFBLOQXFPHSJPAETPWGSIJYDFOTQJKAEZYNZTLPYGEHNKLOCRKUUFVQXRXLQNJGQJLMVAAABPOWNSFP");

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
    msg.setTimeStamp(0.6864383281009588);
    msg.setSource(9568U);
    msg.setSourceEntity(48U);
    msg.setDestination(11267U);
    msg.setDestinationEntity(18U);
    msg.name.assign("FOOOQOIDTOHVHUPUUNBMMQNIMXEDFGIIDPKDCEAJUHMZSBNVCAJFAALABVNJWEQCVBOQFZCSACZAEFPQRWGJRZZKJIADWSFHEDZWMGBSNQGBBTYLRDMILTSKXIFKKVJJPSYWUVNPEJWRYEYWRQTHNXYCRVJZVZUZOEDLMKOXHDIGXVSLECBGXBXXEJPXXMLCPKDLTITZSSFYNIWHWKUTRGMGNWHOPO");

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
    msg.setTimeStamp(0.20261039409620463);
    msg.setSource(53973U);
    msg.setSourceEntity(43U);
    msg.setDestination(39398U);
    msg.setDestinationEntity(221U);
    msg.name.assign("FNNMYNBJVKAHACACTVBVJXCOZISFSTHJSGNOERJEBKVDHTTWHRUZQDGNCTJTYUMLHVONFERMZFEDMSFXIQPLDGJWZOZNSPQHOYCFQXMGYAUUUMIBKELWZESAIEUHMVGPRFHVWBA");

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
    msg.setTimeStamp(0.6482150003317803);
    msg.setSource(62066U);
    msg.setSourceEntity(220U);
    msg.setDestination(45744U);
    msg.setDestinationEntity(137U);
    msg.name.assign("TVWOIYUBLYGQWEDZSLTJVZWDDKKYMBMMSDHJQMZRTFUTNXUOFSIXVXTNVYNFETVMLEHXUEBKEPZAAZTCOXMLUKFZSKBPRBZYCECORVXQQNEOHMRTLZSXGPPAMJJBPCFQDWIANTUSGDLAIHNRIOGZLMEYHQOUVGAQIPKJORHJNVIIUMKAHIUOGWRVDCYJWCBOFEGAJFUKDSWJSYQPKHWXQAHPRYVNNPELZRBFICACCFRWDSPKBSGGQJXFYW");

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
    msg.setTimeStamp(0.22509036316548725);
    msg.setSource(42645U);
    msg.setSourceEntity(70U);
    msg.setDestination(911U);
    msg.setDestinationEntity(63U);
    msg.name.assign("NSWSNAWTCLHETPHMKPTKDZCKJTIJGYCEVTYGSCRASVKNWZQTLQRBGCDXHBAMPSFTLHRIUHQDOSYYXYUHSLQVESAGEDDETFUVNRZNJKFKWZRHIFCFGKOQEMRPNOJUGWJABTZPXMIFXGCIETDYLDJRMFLPAVYBKYHHHWIBNBUGBKCSZOIMIXUWP");

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
    msg.setTimeStamp(0.2521584087602652);
    msg.setSource(48073U);
    msg.setSourceEntity(172U);
    msg.setDestination(2321U);
    msg.setDestinationEntity(130U);
    msg.type = 98U;
    msg.error.assign("CMSKIMRXBSBTKKBVRUJCQNHZGQBCUQNPJRFPEUUWOYILXRUZSDSFAEOLOTNEEFWGPPYTIRODGNZXPTEAVYSECZZXBSFPHNOFEWQXQMKWQHLWDAAIXUGOJXVTPCMVXHLSJOFHKPDDKCQRCNGNHIKDEHJVARWHZWVFZWZAJHAMFTUSZTNPNBXUGKYSDFAIQTMOLGMJJ");

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
    msg.setTimeStamp(0.5752381122215936);
    msg.setSource(6148U);
    msg.setSourceEntity(88U);
    msg.setDestination(34729U);
    msg.setDestinationEntity(247U);
    msg.type = 141U;
    msg.error.assign("ECDYMWRJGEKZCJFDFZSFMYAXJKCJWPYPUXJRQVALIKUEWSMXBXIHWLTWPZGYDUQKRGZHPJFWXBLIKTAMALVOSCSFRFGEHUKXTBIHQNAYIQILVXGSOCSPTIYJNIWACPGUBTNKBDALMLOUHRMHOVGRZVSWAXLABZGUFMNKYSNMCSVMQZXYPSZKPHVOZWLUIIGEQYECNCTREHOXNTZQANCDUE");

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
    msg.setTimeStamp(0.4041120974223913);
    msg.setSource(4604U);
    msg.setSourceEntity(50U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(98U);
    msg.type = 125U;
    msg.error.assign("XGQEDVLQPXSMRRBJJDXXTJJGZEBWSRQMOURWKOCBGHVLFMGLSLZQNVLSPQTWKNIZBLBULIHWNYEGLPOAEJNKKQDFUWCSHMOMCDOSVJYXZWGBCDCCJRWGTILJXAXPGYAUWMIXRDFTRAB");

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
    msg.setTimeStamp(0.49215405467688267);
    msg.setSource(19456U);
    msg.setSourceEntity(78U);
    msg.setDestination(25361U);
    msg.setDestinationEntity(3U);
    msg.seq = 51355U;
    msg.sys_dst.assign("VLGFXZAYNVLYSDJENBOPDIDTIUZGGMIMAGUFLNQKCKUQDUEXOBSIGXQFXVMXMUQATKCCQSIVPHSWGGAZTNVZXXAMJPZQBQQKPCPYDHBCFBNYWVTNMDVTCIJDJNKRYBIOAXKRHHIOQTFOWLARXFNJ");
    msg.flags = 229U;
    const char tmp_msg_0[] = {-128, -106, -117, 93, 79, -81, -112, -11, 21, -122, -34, -68, 5, -100, -101, -7, -6, 64, -119, 74, -32, -26, -109, 31, -59, 33, -24, 85, 97, 24, 56, 95, 41, -42, 95, -63, 21, 44, -50, 77, -103, 90, -27, 115, -58, 34, 79, -7, -114, 32, 95, -7, 57, -62, -122, -127, 22, 41, 86, 42, -109, -120, -57, 83, -126, 64, -1, 54, -22, -90, 40, -1, 28, -92, 120, -30, 3, 67, 98, 91, 51, 53, -3, 47, 80, -57, -81, -85, 53, 69, 59, 15, 49, -6, 39, 119, 122, -111, 57, 19, 86, 97, -128, -127, -9, -106, -104, -78, 88, 16, -76, 116, 56, -95, 78, 16, -61, 100, 2, -117, 121, -39, 98, -77, 119, 85, -42, 6, 114, 26, -17, -13, 8, 59, -50, 124, -49, -128, 5, 92, 116, -100, 124, -12, 2, 109, -106, 33, -108, -29, 3, 15, 8, -77, 97, 85, -56, 77, 45, -40, -86, -30, 16, 57, 115, 30, -74, -7, 72, 92, 61, -42, 108, 47, -113, 117, 89, 84, -52, 20, -13, 63, -88, 29, 109, -47, 53, -88, -111, -61, 36, 35};
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
    msg.setTimeStamp(0.34381697624562);
    msg.setSource(13488U);
    msg.setSourceEntity(38U);
    msg.setDestination(58408U);
    msg.setDestinationEntity(91U);
    msg.seq = 65373U;
    msg.sys_dst.assign("ABLOOGFZQKSOCYRDVCLABBKPDKDEFJUJGIZTSDMNHRISZMXMYMLUPRDUTHNGWHWMGDPNUJKTAGMIYIJXUEFLJBSXIKRETCPUPEDOIIWKAWHIMNFBONIHQYAVS");
    msg.flags = 240U;
    const char tmp_msg_0[] = {62, 107, 62, 94, 59, -44, -49, 75, -92, -21, -74, 15, 79, -114, 19, -115, -7, 125, 45, 67, -50, -91, -32, 123, -61, 82, 31, -98, 4, 117, 45};
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
    msg.setTimeStamp(0.31299840438644977);
    msg.setSource(11910U);
    msg.setSourceEntity(9U);
    msg.setDestination(15641U);
    msg.setDestinationEntity(230U);
    msg.seq = 6155U;
    msg.sys_dst.assign("XFYUIHGQTVSDAOJGTIOZWNAZUJNSGKFVONFDZXYRFBRUJPTGKRSQIZARNYJSTMFNDSUQPIIASZNCGGEPLNQOHDECIPJWQLKUBDEFPP");
    msg.flags = 60U;
    const char tmp_msg_0[] = {75, -126, 23, 46, -3, 14, 20, 80, 17, -55, 61, 111, 64, -123, 98, -82, 99, -123, -88, 70, -101, -110, 78, 60, 70, 100, 39, -41, -71, -34, 99, -123, -107, 113, 23, 57, -37, -74, -13, 42, -109, 43, 76, -119, -94, 118, 61, 3, 95, -14, -4, -126, -120, 89, 26, -119, -79, 109, -22, -116, -110, -56, -82, -83, 125, 75, 118, 26, 49, -39, 29, -15, 22, -81, 92, 35, -108, 69, 61, 104, -6, -114, -60, 68, 28, 9, 1, 2, 28, -58, 86, -2, 108, 76, -8, -79, -18, 42, -69, -28, 4, -31, -88, -107, 115, 96, 97, 45, -111, 10, 24, -44, -42, -7, 6, 16, -68, 110, 84, 117, 6, 50, 57, 55, -18, 121, -10, -125, 92, -121, 27, 51, -115, 3, 83, -3, -94, 31, -26, -51, 63, 65, 122, -28, -31, 98, -41, 106, -107, -48, -65, 122, -28, -47, 121, 126, -116, -13, -115, -63, -3, -62, 1, -46, -26, -20, -21, -21, -9, -128, -82, 49, -97, 62, -91, -3, -84, -101, -125, 101, -99, 4, 79, 17, 70, 14, -3, -82, -89, 68, 39, 125, -87, 61, 6, -71, 98, 126, 66, 95, 49, -17, 15, -35, 70, 54, 95, -105, -84, 80, -33, -2, -39, 14, -85, -42, 48, 107, -98, 87, 76, -85, -92, -107, -111, -62, -44, -6, -32, 88, -13, 3, -58, 69, 122, -26, 76, 10, -124, -55, -125, 11, -123, 109, -89, -80, 60, 5};
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
    msg.setTimeStamp(0.6807518260118923);
    msg.setSource(14086U);
    msg.setSourceEntity(129U);
    msg.setDestination(19866U);
    msg.setDestinationEntity(129U);
    msg.sys_src.assign("QFNPTAWUQYOAWWNZTQVPGWAOGMORCKMMNMYRSQRSKWFCGYM");
    msg.sys_dst.assign("JVNNXVBLGWQIRZGQLMTJJUHVDVVWCYLDVGBMRSDQTNGWIFZBKDUTZRCGOKJPPATRFDFFXRJCLHGBYFTNOOHCAMJNSSYIBOVGHNLMYFGUIROKGEXET");
    msg.flags = 81U;
    const char tmp_msg_0[] = {-9, -111, 123, 109, -76, 55, 92, -62, -22, 30, 122, 33, -73, 106, -117, -8, -105, 20, 21, -92, -116, 38, 35, -21, 114, -65, -9, 23, -39, -65, 112, 53, 106, 30, 33, -47, 15, 87, 77, -100, 98, -52, -24, 120, 29, -66, -80, 1, 0};
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
    msg.setTimeStamp(0.943079850827944);
    msg.setSource(24525U);
    msg.setSourceEntity(173U);
    msg.setDestination(40022U);
    msg.setDestinationEntity(75U);
    msg.sys_src.assign("WDPYVQDPEDHAUFGDJMDHPIWGXITJOTVFCBABFGJHKODBMLURVJKZCMYWQWLSZRKLTYXXNCYUOMXECZLFWGXIHOFWUAHUNHQDPOKWUZQSYODSCJKYJBLTUEVBAIHFKAXGWLMTYJYJNGCNVQVQNLKKNCSIPGPWMTFZTEMXSRMBEERVLFNPYCEYQQ");
    msg.sys_dst.assign("BWJRZUMSLYDLANMRTVD");
    msg.flags = 61U;
    const char tmp_msg_0[] = {-60, 105, 67, 92, -58, -52, 126, 27, 70, -113, 80, -1, -107, -36, -82, -126, -116, -110, -76, -85, -50, 108, 45, 3, -119, 33, -33, -96, -76, 90, 108, -72, 23, 88, -55, -126, -73, 24, 55, -27, -14, 31, 54, -37, -90, -55, 94, 109, -45, -85, -81, -65, -48, 104, 119, 47, -127, 2, 41, -59, 88, -68, 23, -40, 1, -46, 56, -53, 4, -100, 74, -104, 41, -52, 102, -126, 51};
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
    msg.setTimeStamp(0.992478891787355);
    msg.setSource(32328U);
    msg.setSourceEntity(180U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(78U);
    msg.sys_src.assign("QIYXCGYAADMCXQOCEEUQANGSJLFHKEVBDVLXPQEKOTVFEROYIZHHCMDSNKGBHFDJGNNGKZOPOESAQIEBTQPFGRGWBPTIKOHRRGNCUDPASDTUJLMSRHWDHNAPGFTPLUMZYPIBYQTZILOVLSMIECBBEOYUJLZRWSBSRVHFDVNMKXUQHWUNBLUO");
    msg.sys_dst.assign("QCSRNJYOMTRWJJEMZVEZDFTWTOGCXQJNUKWSGICFFRHQBATPJNOSJZBRHMIPUWYYXXUJPXF");
    msg.flags = 32U;
    const char tmp_msg_0[] = {-87, 53, 92, 27, 69, 45, -100, 10, -13, -125, 126, 56, 92, -74, 29, 72, 36, -57, -59, 40, 31, 38, -79, -78, 17, -121, -109, -5, -34, -86, -51, 79, 59, -38, 42, 59, -4, 6, -14, -73, -21, 0, -103, -57, -82, -122, -112, -66, 97, 62, 57, 112, -104, 105, 114, -64, -4, -23, -87, -102, 53, 3, 115, 38, -4, -78, -87, 15, -3, -41, -107, 119, -102, -22, -89, 46, 85, 123, -59, -58, 92, -65, 106, 9, -23, -128, -117, 106, 70, -24, 65, -12, -99, 10, 24, -86, 39, 89, 27, 39, 25, 120, -4, -1, 90, -1, 5, 45, 126, -14, -96, 96, -84, 74, 11, 26, 73, 13, -67, -118, -70, 91, -71, -116, 58, -82, 71, 96, -32, 92, 112, -60, -70, 82, 10, 84, -50, 51, 118, -112, -105, 34, -7, -84, -88, -32, 108, -35, -35, 93, -116, -49, 92, -28, 112, 105, 12, 47, 32, -42, 83, -74, -67, -124, -26, 37, 53, 89, -2, -123, -115, 17, -59, 75, -103, -28, 82, -2, 5, -108, -10, -124, -72, 30, 42, -3, 48, -97, -83, -23, -92, -58, -94, 62, 123, -31, -14, -104, -128, -64, -88, -83, 51, 119, -124, 89, -76, -62, 44, -30, -10, 108, 19, 36, -48, -120, -3, 44, -97, -35, 45, 39, 109, -25, 47, 116, 0, -34, 39, -86, 15, 55, 60, -94, 88, 98, 62, 25, -37, 103, 26};
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
    msg.setTimeStamp(0.48939601825069257);
    msg.setSource(20463U);
    msg.setSourceEntity(212U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(34U);
    msg.seq = 22605U;
    msg.value = 173U;
    msg.error.assign("PPTVGUMNFBRVWFVLNPSXCNJSOFVIUKQBUAWNRSYOLECLAYJVJZXIDIUEWAFMRPHHLDLMUCKJTGGCQIESIUYBSDWKONUWLMHNTKYRQIGRIEATMLPKFEZAUXMCDSQKFMCPMOUMPADTQLFLGOGMXJOKKQXYHVLDAYTWZBVDKZHPQXIAJEHRBQSHXGRDZJHTTRVZCEYZWWXYSD");

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
    msg.setTimeStamp(0.030118244065273414);
    msg.setSource(11081U);
    msg.setSourceEntity(141U);
    msg.setDestination(25074U);
    msg.setDestinationEntity(3U);
    msg.seq = 61628U;
    msg.value = 34U;
    msg.error.assign("HJTEQQICITMMDSUX");

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
    msg.setTimeStamp(0.9717157030950692);
    msg.setSource(60414U);
    msg.setSourceEntity(198U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(238U);
    msg.seq = 10557U;
    msg.value = 213U;
    msg.error.assign("CMDXXDBFWPTTUSHNDZIEPQZVNJRLSPRDYTCLYQEJADCJCQBTRYOBF");

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
    msg.setTimeStamp(0.07118948071929343);
    msg.setSource(53986U);
    msg.setSourceEntity(73U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(139U);
    msg.seq = 9579U;
    msg.sys.assign("ECBIMCCHKCBVXZWQWSFICNHTEBMYADWXYBZNZZMBYKYIAAZLBDQXUXMATWEOOMTAESLYEEYRVZVGCFLNDFRLKNAVJESYODRQNUXLOJWAKPSUJPIXFNRSUGWJOFPHJINRLBQUKGVZRJSDIZDYAJUZEMPJCNHSXCHWUHMFMBOCGBTFNQJGPRYQTGZTLRMSAGCWLPLFNPWIHYTXPKQIVDHRKUUVTJABFPUKSQVLDXOGOKQDVMTGPTXHS");
    msg.value = 0.842537631106233;

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
    msg.setTimeStamp(0.9213019981785947);
    msg.setSource(53159U);
    msg.setSourceEntity(50U);
    msg.setDestination(19032U);
    msg.setDestinationEntity(34U);
    msg.seq = 19563U;
    msg.sys.assign("FLRIWNFPMXBRDVBKVARKKARYUCHOUOVDRXUEFUJP");
    msg.value = 0.2870858013118893;

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
    msg.setTimeStamp(0.7683289604129876);
    msg.setSource(52658U);
    msg.setSourceEntity(102U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(112U);
    msg.seq = 7290U;
    msg.sys.assign("XPETUQFYVTNLRUEVQUDXOUHSMVMEEDFPHCXLBRAATTVFIEGISSWSJUANQJSOTDLLPTJXORGYKGBRWGPAGAQRUMYYMIBLYAXCHSHMJJIKJKCWMCZRTNKBGPMPKHLSKFZXYHB");
    msg.value = 0.40039679427752084;

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
    msg.setTimeStamp(0.15019249706456073);
    msg.setSource(54401U);
    msg.setSourceEntity(54U);
    msg.setDestination(62893U);
    msg.setDestinationEntity(67U);
    msg.action = 238U;
    msg.longain = 0.322315857245807;
    msg.latgain = 0.25741357747468885;
    msg.bondthick = 3021796506U;
    msg.leadgain = 0.683156271505343;
    msg.deconflgain = 0.7546419874856757;

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
    msg.setTimeStamp(0.3076220835418886);
    msg.setSource(18666U);
    msg.setSourceEntity(60U);
    msg.setDestination(7356U);
    msg.setDestinationEntity(3U);
    msg.action = 233U;
    msg.longain = 0.5952831532801721;
    msg.latgain = 0.3140312346511881;
    msg.bondthick = 1373987900U;
    msg.leadgain = 0.5109361988280628;
    msg.deconflgain = 0.12611425016253874;

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
    msg.setTimeStamp(0.19194921542070276);
    msg.setSource(62792U);
    msg.setSourceEntity(26U);
    msg.setDestination(33496U);
    msg.setDestinationEntity(133U);
    msg.action = 72U;
    msg.longain = 0.2782204007676218;
    msg.latgain = 0.8142138518242785;
    msg.bondthick = 477305526U;
    msg.leadgain = 0.4976428415549894;
    msg.deconflgain = 0.772222504635935;

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
    msg.setTimeStamp(0.9312622420286492);
    msg.setSource(19059U);
    msg.setSourceEntity(165U);
    msg.setDestination(25404U);
    msg.setDestinationEntity(129U);
    msg.err_mean = 0.4761814802982033;
    msg.dist_min_abs = 0.0894078933604896;
    msg.dist_min_mean = 0.328598313106654;

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
    msg.setTimeStamp(0.38279378723135826);
    msg.setSource(53859U);
    msg.setSourceEntity(125U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(202U);
    msg.err_mean = 0.7749044549422711;
    msg.dist_min_abs = 0.9728373547342523;
    msg.dist_min_mean = 0.818577608737416;

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
    msg.setTimeStamp(0.606370856778723);
    msg.setSource(17313U);
    msg.setSourceEntity(130U);
    msg.setDestination(15445U);
    msg.setDestinationEntity(177U);
    msg.err_mean = 0.7875726961844792;
    msg.dist_min_abs = 0.9441167156506031;
    msg.dist_min_mean = 0.05377269863947831;

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
    msg.setTimeStamp(0.31150606187989693);
    msg.setSource(43278U);
    msg.setSourceEntity(130U);
    msg.setDestination(41972U);
    msg.setDestinationEntity(111U);
    msg.action = 62U;
    msg.lon_gain = 0.22690487370074064;
    msg.lat_gain = 0.28885029953933894;
    msg.bond_thick = 0.636848981357219;
    msg.lead_gain = 0.007951621183696078;
    msg.deconfl_gain = 0.1293793240599731;
    msg.accel_switch_gain = 0.5909340567632156;
    msg.safe_dist = 0.2072506876606045;
    msg.deconflict_offset = 0.5839220679518599;
    msg.accel_safe_margin = 0.3422979655559468;
    msg.accel_lim_x = 0.1327182638926706;

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
    msg.setTimeStamp(0.37147035434610565);
    msg.setSource(64748U);
    msg.setSourceEntity(251U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(155U);
    msg.action = 143U;
    msg.lon_gain = 0.9060219141731009;
    msg.lat_gain = 0.07689495984331074;
    msg.bond_thick = 0.2437516963807902;
    msg.lead_gain = 0.2755900197550797;
    msg.deconfl_gain = 0.6242346123165111;
    msg.accel_switch_gain = 0.3747346717704646;
    msg.safe_dist = 0.37881300089838355;
    msg.deconflict_offset = 0.9930883600874818;
    msg.accel_safe_margin = 0.2196981791754904;
    msg.accel_lim_x = 0.8566275844731092;

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
    msg.setTimeStamp(0.5590337243306103);
    msg.setSource(36127U);
    msg.setSourceEntity(135U);
    msg.setDestination(2539U);
    msg.setDestinationEntity(47U);
    msg.action = 185U;
    msg.lon_gain = 0.9298662404948062;
    msg.lat_gain = 0.12205998302922239;
    msg.bond_thick = 0.06090757862374441;
    msg.lead_gain = 0.7554500097151368;
    msg.deconfl_gain = 0.8303218495852717;
    msg.accel_switch_gain = 0.4898731368952761;
    msg.safe_dist = 0.15359580601229983;
    msg.deconflict_offset = 0.6172411120214637;
    msg.accel_safe_margin = 0.4472148151779297;
    msg.accel_lim_x = 0.7437551254665555;

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
    msg.setTimeStamp(0.07955662290695498);
    msg.setSource(43915U);
    msg.setSourceEntity(57U);
    msg.setDestination(13992U);
    msg.setDestinationEntity(154U);
    msg.type = 219U;
    msg.op = 138U;
    msg.err_mean = 0.17106604577058937;
    msg.dist_min_abs = 0.7789749313346389;
    msg.dist_min_mean = 0.5096830126655014;
    msg.roll_rate_mean = 0.29951628721399304;
    msg.time = 0.5886662258370481;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 184U;
    tmp_msg_0.lon_gain = 0.7452874241903893;
    tmp_msg_0.lat_gain = 0.9631950721570389;
    tmp_msg_0.bond_thick = 0.5772478751787817;
    tmp_msg_0.lead_gain = 0.9076963747521838;
    tmp_msg_0.deconfl_gain = 0.10895550199972548;
    tmp_msg_0.accel_switch_gain = 0.6596407830499088;
    tmp_msg_0.safe_dist = 0.05960459755272651;
    tmp_msg_0.deconflict_offset = 0.1580608364666446;
    tmp_msg_0.accel_safe_margin = 0.13418675617272935;
    tmp_msg_0.accel_lim_x = 0.26991081963683117;
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
    msg.setTimeStamp(0.13643510590327768);
    msg.setSource(42731U);
    msg.setSourceEntity(65U);
    msg.setDestination(50589U);
    msg.setDestinationEntity(39U);
    msg.type = 125U;
    msg.op = 208U;
    msg.err_mean = 0.9453468516191804;
    msg.dist_min_abs = 0.11760481834792924;
    msg.dist_min_mean = 0.5589013990008077;
    msg.roll_rate_mean = 0.7685427015818094;
    msg.time = 0.7927317922201711;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 215U;
    tmp_msg_0.lon_gain = 0.12070947386573572;
    tmp_msg_0.lat_gain = 0.013979440828453704;
    tmp_msg_0.bond_thick = 0.6532170218770571;
    tmp_msg_0.lead_gain = 0.8932390598228072;
    tmp_msg_0.deconfl_gain = 0.38371176612586444;
    tmp_msg_0.accel_switch_gain = 0.9779980020592826;
    tmp_msg_0.safe_dist = 0.02098389962746572;
    tmp_msg_0.deconflict_offset = 0.69507842168488;
    tmp_msg_0.accel_safe_margin = 0.7532559800553921;
    tmp_msg_0.accel_lim_x = 0.6174172617251384;
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
    msg.setTimeStamp(0.23942145438898987);
    msg.setSource(35305U);
    msg.setSourceEntity(128U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(10U);
    msg.type = 181U;
    msg.op = 5U;
    msg.err_mean = 0.6880935119490001;
    msg.dist_min_abs = 0.24122213929892067;
    msg.dist_min_mean = 0.018310185484280872;
    msg.roll_rate_mean = 0.27790310127113704;
    msg.time = 0.926556083426706;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 206U;
    tmp_msg_0.lon_gain = 0.9693324624645242;
    tmp_msg_0.lat_gain = 0.5972903235626974;
    tmp_msg_0.bond_thick = 0.8509902786570157;
    tmp_msg_0.lead_gain = 0.29493291866943516;
    tmp_msg_0.deconfl_gain = 0.5076732711132812;
    tmp_msg_0.accel_switch_gain = 0.9261076892320455;
    tmp_msg_0.safe_dist = 0.26399898592590443;
    tmp_msg_0.deconflict_offset = 0.49118549190578953;
    tmp_msg_0.accel_safe_margin = 0.22897215950051808;
    tmp_msg_0.accel_lim_x = 0.7252176980973657;
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
    msg.setTimeStamp(0.11402351198930749);
    msg.setSource(61610U);
    msg.setSourceEntity(177U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(178U);
    msg.uid = 166U;
    msg.frag_number = 40U;
    msg.num_frags = 137U;
    const char tmp_msg_0[] = {-111, 94, -24, 56, 123, 98, 95, 73, 79, 3, -64, 47, 23, -78, 79, -66, -30, -121, 7, 51, 46, -23, 19, -39, 88, -76, 8, -111, -107, 32, -85, -14, -6, -11, 6, 44, -95, 3, 11, 76, 78, -105, 32, 60, 87, 6, 80, -113, -111, 99, -42, 110, 23, -22, -48, -62, 103, 107, 125, -127, 94, 38, 10, 75, -34, 88, 9, 52, -24, -38, -20, -114, -105, -34, 119, -4, -46, 45, -1, 97, 55, -90, 61, -93, 107, 18, -4, 21, -29, -88, -19, -34, 104, 28, 96, 64, 87, -59, 0, -74, -98, -119, 102, 118, -108, -19, 8, 29, 65, 119, 63, 99, 72, 86, 76, 6, 49, -106, 85, 98, 53, 41, 79, -20, 58, 13, 17, -73, 81, 83, 119, -70, -79, 13, 45, 56, 21, 37, -116, -27, -114, -1, 9, 12, 117, 77, 113, -5, 25, -117, -74, -99, 84, 41, -119, -110, 120, 3, 12, -100, -60, -41, -71, -5, 76, 3, -85, 66, -76, 62, -109, -109, 57, 51, -8, -1, 82, -60, -13, 80, 54, 40, 39, -24, 7, -122, -88, 73, -109, 54, 59, 58, -13, -118, -85, -13, -128, -31, -48, -88, 107, -123, 117, -43, -36, 62};
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
    msg.setTimeStamp(0.0718827359938512);
    msg.setSource(25483U);
    msg.setSourceEntity(14U);
    msg.setDestination(27213U);
    msg.setDestinationEntity(234U);
    msg.uid = 51U;
    msg.frag_number = 130U;
    msg.num_frags = 189U;
    const char tmp_msg_0[] = {110, -62, 19, 76, -83, 12, 3, -88, 65, -99, 34, -34, -30, 114, 16, 84, -113, -14, 119, -86, 87, 47, -128, 33, -31, 38, 4, -105, -46, 21, -16, -90, 23, 48, 108, -94, -62, -8, -52, -86, 68, -109, -55, -113, -71, 99, -76, -7, 6, -20, -97, -42, 0, -41, -45, -35, 37, 73, 81, -66, -100, 31, 46, 59, -1, -24, -54, -51, -38, 32, 12, -5, -51, 93, 28, 38, -119, 96, -99, -36, -86, -21, 9, -21, 70, 121, -110, 4, 14, 122, -42, 78, 78, -110, -28, 61, -118, -100, -41, 106, 84, 124, 23, -87, 34, -10, 101, -44, 97, -94, 91, 60, -38, -57, -8, 21, -100, -84, -56, 109, 76, 11, 15, -51, 95, -95, -74, -3, -28, -94, -100, -49, -39, -103, -79, -51, -65, 37, -66, 14, -1, -72, 24, -53, -123, 105, -27, -34, 106, -28, 53, -52};
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
    msg.setTimeStamp(0.8501120618933571);
    msg.setSource(24835U);
    msg.setSourceEntity(51U);
    msg.setDestination(53028U);
    msg.setDestinationEntity(210U);
    msg.uid = 12U;
    msg.frag_number = 162U;
    msg.num_frags = 121U;
    const char tmp_msg_0[] = {-109, -40, -46, 69, 55, -59, -91, -120, 13, -87, 105, 53, -33, -9, -42, 86, 28, 90, -20, 84, 8, 4, 41, 57, 102, 68, 76, -99, -14, 2, -9, 32, -94, 63, -112, -52, 119, 61, -102, -117, 81, 66, -15, 45, -42, -98, -56, -108, -42, -27, -61, 11, 12, 62, -79, 1, -30, 18, -113, 2, -127, 94, -2, -21, -21, -101, -116, -85, -110, 74, -90, -100, -30, -1, -102, 1, 4, 52, 99, 93, -5, 50, -84, -94, -7, -40, -92, -83, 62, -123, -71, -19, -66, 26, 51, -89, 80, 120, 49, -108, 25, 91, -67, 79, 21, -28, -87, 43, 41, -110, -102, -89, 48, 19, 86, -34, 67, 7, 44, 70, -119, -126, 14, -73, -118, -117, -46, -7, -85, -100, -70, -110, 18, -63, -97, 103, 101, -88, -28, 62, -96, 111, 38, 49, -103, 9, 19, -54, 63, -44, -87, -128, 19, 27, -48, -83, 86, 83, 1, -55, -4, -9, -28, 78, 108, 99, 41, 58, 74, 27, -88, -121, -60, 101, 5, -58, -21, 17, -117, 102, -80, -15, -80, 17, 26, 43, 117, 80, -68, 115, -25, 87, 79, -92, -69, 117, -95, -37, -107, 70, -67, -5, -113, 97, 69, 122, 83, 87, -9, 90, 79, 29, 114, -38, 81, 57, 38, -84, -36, -24, 125, 90, 102, -67, -115, 57, 55, 66, 81, -70, -94, -79, -35, -121, -87, 69, 38, 49};
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
    msg.setTimeStamp(0.13340847931250377);
    msg.setSource(28394U);
    msg.setSourceEntity(231U);
    msg.setDestination(27337U);
    msg.setDestinationEntity(159U);
    msg.content_type.assign("JXBCGHJPHDYNQFKSYONBOOSXCELWTGDMRJSNTFCXIVII");
    const char tmp_msg_0[] = {-120, -86, 38, -102, 59, -110, 43, -42, 11, -118, -17, -47, -111, -124, -55, 43, 22, 110, -120, 8, -21, 65, -34, 99, -19, 116};
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
    msg.setTimeStamp(0.778362169851978);
    msg.setSource(1325U);
    msg.setSourceEntity(57U);
    msg.setDestination(17831U);
    msg.setDestinationEntity(172U);
    msg.content_type.assign("EXLFEDGUQCDCUWGAJKZLVKLKMHOBTHGQNNVEXSYUZARTXTUUCNVPSVYGWNVOBXKJBINQWRLJZMQMBFPXJYWENVMDDSZAHDMGJWMIEYCYF");
    const char tmp_msg_0[] = {-127, 87, 5, 87, -68, 11, -128, -48, -18, 92, -96, 20, 35, -41, 90, -23, 118, -41, -7, -3, 66, -2, -104, 32, -10, 54, 78, 82, 62, -52, 35, 73, 11, -41, 83, 1, -90, -72, 17, -87, 49, 84, 98, 100, -117, -87, -42, -34, -62, -35, -101, -78, -25, -37, 77, 124, -15, -20, -99, -52, -61, 15, 73, -100, 44, 113, 40, 86, 43, -43, 13, -106, 43, -21, -83, -110, -101, 77, -92, 16, 35, 43, -124, 45, -42, 109, 115, -104, 108, 40, 76, 56, -89, 68, 39, 5, -61, 43, -74, 107, 25, -79, -114, -9, 63, -105, -85};
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
    msg.setTimeStamp(0.40729641956438767);
    msg.setSource(2475U);
    msg.setSourceEntity(129U);
    msg.setDestination(28483U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("QNGBNQOIDXORWQWDJBBLBLSRRTSJCPHZTRSHOVETGQXJKNSMNJIBFNAARQLWAFQNFZLMYHYFVOLCDJKYIBGSRMGGWVYWLWCTKKYCRIGKMMOHPTSLESZVKUFZZAFTXRFBAXOBGAOWDYFKNIEKMNLXDHKGPXZHDJMQUUPHLDVBRVVNPEHAQYZPCGUOSZAAEECUXFHZNQJPVEIUEVWY");
    const char tmp_msg_0[] = {-54, 17, -1, -73, 44, -82, 21, 99, 15, 120, 58, -12, 113, 74, -83, 19, -36, 122, 73, -48, -43, 39, 59, 43, 44, -99, 84, 99, -13, 40, -69, -23, -36, -19, -110, -12, -80, 100, 60, 92, 56, 85, -2, 11, -67, 12, 29, 76, -45, 61, 68, -18, -38, -51, -18, -41, -24, 64, -95, 110, 21, -55, 114, 73, 114, -86, -31, -123, 105, -17, 12, 64, -19, -98, -29, 20, -57, 85, -53, -1, 14, -119, -125, 8, -126, -23, 47, 29, -42, -103, -62, -14, -86, -115, -114, 23, 110, 62, 92, 45, -43, 105, -16, -72, 41, -89, -91, 47, -25, 68, 117, 98, -123, -58, 80, 113, 119, -1, -87, 18, -71, 114, 29, -45, 71, 44, 20, 74, 61, 9, 45, 113, 99, -100, 25, 112, 78, 46, 124, -76, 101, -39, -40, 68, 17, -49, -58, 84, -39, -42, 20, -118, -96, 42, -115, -87, -115, 92, 104, -37, -24, 53, 116, 34, -63, 112, -5, 11, -74, 43, 117, 103, 60, 53, 69, -58, 78, 68, -64, 5, -33, -4, -38, -106, 19, -30, -107, 106, 100, 29, -76, -60, -19, -32, 8, -50, -25, -68, 33, -110, 89, -17, 112, 5, 95, -128, 67, -101, 10, -22, -34, -95, 116, -20, 93, 61, 98, -82, 84, -21, -118, 83, 14, 43, -65, 32, -37, -28, -54, 68, 67, 73, 7, -79, -79, -46, 107};
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
    msg.setTimeStamp(0.14874648930031986);
    msg.setSource(55160U);
    msg.setSourceEntity(138U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.4575391154366977);
    msg.setSource(36115U);
    msg.setSourceEntity(249U);
    msg.setDestination(59353U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.37200817590185653);
    msg.setSource(65293U);
    msg.setSourceEntity(39U);
    msg.setDestination(8879U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.9078374026461219);
    msg.setSource(32397U);
    msg.setSourceEntity(174U);
    msg.setDestination(7297U);
    msg.setDestinationEntity(56U);
    msg.target = 34105U;
    msg.bearing = 0.08934184944089052;
    msg.elevation = 0.7837056150339059;

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
    msg.setTimeStamp(0.9668872677213187);
    msg.setSource(31430U);
    msg.setSourceEntity(45U);
    msg.setDestination(60715U);
    msg.setDestinationEntity(44U);
    msg.target = 41027U;
    msg.bearing = 0.9014221049900446;
    msg.elevation = 0.9091821099465053;

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
    msg.setTimeStamp(0.8765138271228253);
    msg.setSource(37417U);
    msg.setSourceEntity(129U);
    msg.setDestination(1114U);
    msg.setDestinationEntity(23U);
    msg.target = 4825U;
    msg.bearing = 0.053690948448082976;
    msg.elevation = 0.11701272124435436;

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
    msg.setTimeStamp(0.1952602417599616);
    msg.setSource(11660U);
    msg.setSourceEntity(201U);
    msg.setDestination(10191U);
    msg.setDestinationEntity(9U);
    msg.target = 54142U;
    msg.x = 0.7932903513685993;
    msg.y = 0.019596823610455227;
    msg.z = 0.3043752900405412;

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
    msg.setTimeStamp(0.3760483428600234);
    msg.setSource(56927U);
    msg.setSourceEntity(179U);
    msg.setDestination(7598U);
    msg.setDestinationEntity(103U);
    msg.target = 42720U;
    msg.x = 0.9593816903722109;
    msg.y = 0.0499952262402652;
    msg.z = 0.04404311698458274;

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
    msg.setTimeStamp(0.8769766900260006);
    msg.setSource(354U);
    msg.setSourceEntity(229U);
    msg.setDestination(49877U);
    msg.setDestinationEntity(153U);
    msg.target = 7965U;
    msg.x = 0.3672009010539412;
    msg.y = 0.25155043628403084;
    msg.z = 0.4120726161265936;

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
    msg.setTimeStamp(0.002193412522635496);
    msg.setSource(5553U);
    msg.setSourceEntity(183U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(55U);
    msg.target = 24537U;
    msg.lat = 0.18672807666661995;
    msg.lon = 0.7135793386274865;
    msg.z_units = 94U;
    msg.z = 0.6126305732517003;

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
    msg.setTimeStamp(0.7566328038777524);
    msg.setSource(42427U);
    msg.setSourceEntity(233U);
    msg.setDestination(12619U);
    msg.setDestinationEntity(103U);
    msg.target = 16959U;
    msg.lat = 0.8313107244400041;
    msg.lon = 0.5332998471810724;
    msg.z_units = 44U;
    msg.z = 0.08091464067034726;

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
    msg.setTimeStamp(0.37428658451153873);
    msg.setSource(56987U);
    msg.setSourceEntity(228U);
    msg.setDestination(3351U);
    msg.setDestinationEntity(194U);
    msg.target = 43886U;
    msg.lat = 0.19346147122926294;
    msg.lon = 0.8383573702903241;
    msg.z_units = 51U;
    msg.z = 0.9940058155802307;

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
    msg.setTimeStamp(0.4823684152874834);
    msg.setSource(48592U);
    msg.setSourceEntity(156U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(189U);
    msg.locale.assign("NGVKPAUABFZTZHWYDRHWOKGQXSFKEDFZJFHLXYLYJJZASXHAIDNXBCSRLCEIVTQLYWROPCSIQNAPMUJFQK");
    const char tmp_msg_0[] = {99, -121, -24, 21, -24, 20, 39, -80, -95, 35, -19, -39, -84, 1, 1, 107, 7};
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
    msg.setTimeStamp(0.08196304727529136);
    msg.setSource(56924U);
    msg.setSourceEntity(183U);
    msg.setDestination(57731U);
    msg.setDestinationEntity(98U);
    msg.locale.assign("SLXKPEHEKMAUSBMJNBJYTMSHKTBUAJZLWNRNKKZFKUBODBVYCZRRHVE");
    const char tmp_msg_0[] = {83, 56, -69, -128, -31, -98, 98, 40, -46, 21, 53, -46, -103, 66, -81, -35, 60, -124, 0, 39, 120, -44, 68, -108, -11, -78, -6, -2, -56, -65, 14, -80, 109, -56, -93, -46, 82, 59, -93, -65, 96, -14, -46, 77, -95, -27, 120, 102, 1, 122, 34, 75, 108, 126, -122, 87, -31, -53, -80, 36, 53, 53, 40, -30, 80};
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
    msg.setTimeStamp(0.898319069178848);
    msg.setSource(3943U);
    msg.setSourceEntity(111U);
    msg.setDestination(60691U);
    msg.setDestinationEntity(129U);
    msg.locale.assign("YOMPVSWSHLBRTZY");
    const char tmp_msg_0[] = {11, -11, -65, -95, -102, 113, 76, 13, 41, -84, -9, 121, -19, 106, -107, -9, -33, -41, 44, -75, 12, 2, -2, 59, -40, 31, 47, 98, -26, 75, 107, 22, 64, -92, -119, 90, 2, 74, 46, 95, 93, -44, 35, 63, -85, -87, 84, -89, 64, 49, -22, 53, 64, -70, 16, 90, -60, -61, -109, -63, 48};
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
    msg.setTimeStamp(0.12345513699816879);
    msg.setSource(29199U);
    msg.setSourceEntity(18U);
    msg.setDestination(49673U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.5651455069719463);
    msg.setSource(16503U);
    msg.setSourceEntity(137U);
    msg.setDestination(52126U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.9917321435427222);
    msg.setSource(7954U);
    msg.setSourceEntity(184U);
    msg.setDestination(3058U);
    msg.setDestinationEntity(62U);

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
