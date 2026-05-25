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
// IMC XML MD5: 2293d9e5efdaaeeeab6cb84d3f81ae72                            *
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
    msg.setTimeStamp(0.18188979516598236);
    msg.setSource(8639U);
    msg.setSourceEntity(231U);
    msg.setDestination(33604U);
    msg.setDestinationEntity(95U);
    msg.state = 90U;
    msg.flags = 228U;
    msg.description.assign("UTQRVYUWINVBCSZKJXRFRNJTJOVYMXUZQJFTOQDNOOPRCELHHCTBMGABQHSSPJAFVDMHVNXYICBKYMSNCCLNAQWNXZUEMXQDPEINMVSKBZUOUERGMLJPIVFCHIHLSWDWGSBIFKWEAYKWPLGSEMULXLLGTIWACQXVDZOEPDGNEDGCIKORGTBXJKYADCRBOKGZXUAOHZTLQPUAZJRMEAFMYVKHX");

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
    msg.setTimeStamp(0.5240888253434068);
    msg.setSource(28454U);
    msg.setSourceEntity(247U);
    msg.setDestination(21014U);
    msg.setDestinationEntity(77U);
    msg.state = 79U;
    msg.flags = 254U;
    msg.description.assign("PIJGJUPHFYBZDVTWWLOPUTGLVKYPCIISLJJWYZZIZOUXZQDGEYSZHAOEBFWEFHMNACXLDXUTFUKAZQANTREKPVROFGDVOESJJPAPAULHTVIAEWMZEYNGLRXSAWUQXOQHCPCRXVOCOJLBKMYSKRVIMEIBUDMURHMOFUXBASGQBJWQNXMHFDGQSXJIGVYTGCTYQENKMSMQKT");

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
    msg.setTimeStamp(0.5455920806310579);
    msg.setSource(13289U);
    msg.setSourceEntity(67U);
    msg.setDestination(56511U);
    msg.setDestinationEntity(34U);
    msg.state = 29U;
    msg.flags = 129U;
    msg.description.assign("WFNBVEKANUKHUFZAGUKYKEUIMRVBXYUXYIBICJQLBKXWCPOPXIPFXCMOGZOLAZKKLOQWJTZPFFFEBOSYQWNGMZDBRRCTUZJDDUOAMJHHZWVPRDVCQVFAAEMRPNNYYSYEOENXOYLGJSEHPMDCNAGDQZPVIFALSJHWJIQFSLHLWTUVDIQZXXCFGTBRNUARHKMWTISQORZVHNUIJQGEBMLYLDXWTXTEJILRTEKPQBPSGWSMVCNKTACRJSHOHSGC");

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
    msg.setTimeStamp(0.15103419223535897);
    msg.setSource(24091U);
    msg.setSourceEntity(228U);
    msg.setDestination(19233U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.9794703943141558);
    msg.setSource(6988U);
    msg.setSourceEntity(26U);
    msg.setDestination(19985U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.547328994537579);
    msg.setSource(50664U);
    msg.setSourceEntity(87U);
    msg.setDestination(38272U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.8844329137728301);
    msg.setSource(18122U);
    msg.setSourceEntity(246U);
    msg.setDestination(50208U);
    msg.setDestinationEntity(16U);
    msg.id = 223U;
    msg.label.assign("LOGNOAZBVSICKSCSKMRWMRWTYEZOFGWCTTTLXOJPVGJBLIRUKRNPPKHGNRQNLGZAOEMSTNQDQPZXTQTCQWJMEQIZQXDULWCGFJHBVMVNQKHHEGKPIYWNTFCCNOUVVYZUYJDXJBSKASVVCEDDXFIQAUAZELJIIQXWBJDOUKUGCGISYLMBMNRNFBDLUVHYFUEERFPRXIXAHZAOAGSHWOITYFFEXRLYPFDPM");
    msg.component.assign("MKSUDUWDRYFDIRKA");
    msg.act_time = 46239U;
    msg.deact_time = 57629U;

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
    msg.setTimeStamp(0.6780371447855061);
    msg.setSource(52213U);
    msg.setSourceEntity(21U);
    msg.setDestination(19279U);
    msg.setDestinationEntity(150U);
    msg.id = 186U;
    msg.label.assign("TYEWFMCJOGSMNIUTUPKCOJVHFODPLBYXDCIWHRHMZGRDRVUEIYKROBLSTDAVTQSUKAABGXTLMVZGXPBQZCDWZTQRSWIBSMNEDQPJWSBIEGIQQWFZGYGRPZOJJUEESAKMQVAMYRFHKSGWTFGJFQNLCEZVTNHETFHFPHXAXAMLDRLJVCEZUNZUVTRSWCQHGPPAYJYRBKKAWNCXMKOHOOIFCVIYNCSPNLYO");
    msg.component.assign("VIQRUDCHGLLRWTJFKQIXMZLRCLDDIWVKFWTEOVENSLDZEPKPXIMGZPRFMXYQHGQNBQNKTTQRTVZNPLUNYJAVJMHQSPUOBJLJTZGRZQOPAIYBSIUARFSBDFGINZOCXOOMYYXYYDETKDEBVWZUYDTYPAVMKISXADJEH");
    msg.act_time = 40373U;
    msg.deact_time = 5868U;

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
    msg.setTimeStamp(0.1540110039679522);
    msg.setSource(48093U);
    msg.setSourceEntity(98U);
    msg.setDestination(56944U);
    msg.setDestinationEntity(114U);
    msg.id = 61U;
    msg.label.assign("CLWXNQEFBVJEBQVYOTLXKDSESGDTVLEQKGCFJVHPPSVWVCPNXFPXGFUKIKVVCZPOTMFKSCRYKXHXEYWLEHHYPHMFBGLHTUMNHYNHROIADYZIQP");
    msg.component.assign("JQZDLDZVHSBAQSIAMWRJVMSPUOGXNCGUVVWNUDRTXCXZGYPNEJIJHENUMIFVGDUTFPNBFDQMJPWXXIXYBWKWWUVNBMJNQYLSTENOOFZDHCPABROOWMSLIEWKWKHGFPEUXPKFTMLJGXKQOTVWUJTYZSHMTHIPDQCFLBFESBKIKQLAQVZDACAMYVRJNCNHOXYZLAOARMGAOEUKQHYCYXDHKCGLCUOZLBPRRDGHCQYZIBY");
    msg.act_time = 60356U;
    msg.deact_time = 46559U;

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
    msg.setTimeStamp(0.25894832528240874);
    msg.setSource(18018U);
    msg.setSourceEntity(234U);
    msg.setDestination(24311U);
    msg.setDestinationEntity(32U);
    msg.id = 118U;

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
    msg.setTimeStamp(0.02262526984314739);
    msg.setSource(22495U);
    msg.setSourceEntity(160U);
    msg.setDestination(58235U);
    msg.setDestinationEntity(45U);
    msg.id = 131U;

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
    msg.setTimeStamp(0.12613550552485353);
    msg.setSource(21151U);
    msg.setSourceEntity(210U);
    msg.setDestination(17006U);
    msg.setDestinationEntity(197U);
    msg.id = 26U;

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
    msg.setTimeStamp(0.784497568870115);
    msg.setSource(3241U);
    msg.setSourceEntity(116U);
    msg.setDestination(42521U);
    msg.setDestinationEntity(224U);
    msg.op = 91U;
    msg.list.assign("XZUZWOTSUDTALQUELNWYNQTMTFEMZBDFNMKQAQVRBOEPZNYJOYGYBYHDNXPYGIRTAENFSFNRCOQCRIGUZEHMUTGOBIWZMJTPXYCDHMIPKBULHJKZCCQTVKPJLWXGPUBWLQFPCADLKVHDAWEUFGXWVVUDFBJZNCNXMDJXLKOJOEIIMLHOHHFLYAWONSMCXFSSQZIGBXEYAJSTWHACSBDQTIGFRPMVRZWGDQRCRJSSXVLAVVRIIKESY");

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
    msg.setTimeStamp(0.5573191147025629);
    msg.setSource(13034U);
    msg.setSourceEntity(44U);
    msg.setDestination(62802U);
    msg.setDestinationEntity(103U);
    msg.op = 74U;
    msg.list.assign("VYZAQOUOQHVKVSZESSYMRXMOGRLD");

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
    msg.setTimeStamp(0.6448308301130456);
    msg.setSource(60599U);
    msg.setSourceEntity(108U);
    msg.setDestination(3018U);
    msg.setDestinationEntity(49U);
    msg.op = 232U;
    msg.list.assign("CJGIJXGKJJUBKVDTJXSMOFUXDKXUDPEYWIUNOMIARNRHKGIFUWSALFPCZSRQDNTIJZNWSKVJDNQTVZYXPZBACDPVZMMYGTREGYETCW");

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
    msg.setTimeStamp(0.48737599889243066);
    msg.setSource(5951U);
    msg.setSourceEntity(100U);
    msg.setDestination(45549U);
    msg.setDestinationEntity(91U);
    msg.value = 164U;

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
    msg.setTimeStamp(0.8607005806699148);
    msg.setSource(27498U);
    msg.setSourceEntity(38U);
    msg.setDestination(62134U);
    msg.setDestinationEntity(149U);
    msg.value = 95U;

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
    msg.setTimeStamp(0.7617215511670559);
    msg.setSource(54872U);
    msg.setSourceEntity(90U);
    msg.setDestination(25411U);
    msg.setDestinationEntity(154U);
    msg.value = 26U;

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
    msg.setTimeStamp(0.5077226811762632);
    msg.setSource(47730U);
    msg.setSourceEntity(119U);
    msg.setDestination(39799U);
    msg.setDestinationEntity(1U);
    msg.consumer.assign("GCXGKBJGIIJWCBZJNOVMRQLAGJSKASZWYTUVZQKALPMVPLOFSLTYLUOVMRDKZXDZUDLTZJFGFYFNUBNCNEMHQUTTETTGNSQEVNYVADPWDCISTBCYUMJTKMEAKCSBMRMXAXHGWZYTCAJXHOBH");
    msg.message_id = 49170U;

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
    msg.setTimeStamp(0.161352892526334);
    msg.setSource(53298U);
    msg.setSourceEntity(183U);
    msg.setDestination(47754U);
    msg.setDestinationEntity(25U);
    msg.consumer.assign("POOZECKOVJQHGRZCCPQBFAYFHQXLHXYITYYWJLSBIMVWVZRYJRAGDVLTPFSNCOABZYUQDHMCXXIXMDQAPIKHTLFPGEOJYTCWTSJGGPCQYNWQYQVWRRNIXUYCURKLBGUPWZBMFNNPIUBHGNZVQASANVLGJKLIEKVZMRSEDTFUGFAJFOZNHBJENHHUEWLQEONOMASXTXVEUCGDMRIRMFSKBSTOJBSWVETSDMAUDZLPI");
    msg.message_id = 54341U;

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
    msg.setTimeStamp(0.584402786789193);
    msg.setSource(6413U);
    msg.setSourceEntity(136U);
    msg.setDestination(11562U);
    msg.setDestinationEntity(95U);
    msg.consumer.assign("ZUEEPDLTCTWPGDQAYWQCQVYKYXEMLMPAYCTBLVXOSKKNLHRXJKOFTPNBI");
    msg.message_id = 11163U;

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
    msg.setTimeStamp(0.7073984587362617);
    msg.setSource(13805U);
    msg.setSourceEntity(91U);
    msg.setDestination(20407U);
    msg.setDestinationEntity(170U);
    msg.type = 119U;

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
    msg.setTimeStamp(0.9385408491621409);
    msg.setSource(25031U);
    msg.setSourceEntity(119U);
    msg.setDestination(35284U);
    msg.setDestinationEntity(184U);
    msg.type = 218U;

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
    msg.setTimeStamp(0.4460547504307453);
    msg.setSource(40647U);
    msg.setSourceEntity(138U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(44U);
    msg.type = 31U;

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
    msg.setTimeStamp(0.07182735165710652);
    msg.setSource(40706U);
    msg.setSourceEntity(222U);
    msg.setDestination(7888U);
    msg.setDestinationEntity(86U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.9671913894403472);
    msg.setSource(58848U);
    msg.setSourceEntity(248U);
    msg.setDestination(8783U);
    msg.setDestinationEntity(86U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.24457991229312837);
    msg.setSource(32650U);
    msg.setSourceEntity(83U);
    msg.setDestination(58664U);
    msg.setDestinationEntity(189U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.2520954737157549);
    msg.setSource(12680U);
    msg.setSourceEntity(218U);
    msg.setDestination(64254U);
    msg.setDestinationEntity(65U);
    msg.total_steps = 119U;
    msg.step_number = 251U;
    msg.step.assign("QJTVFHFLQQUXBAPKRTOPZVNKWWZSCKWMLXDLELPZXFQUTQMNBJFOKVCUIGUFXNXQOKPIHNZKJSUJIDBJABAGECQOMEYPIROEMPCZIYNLZQBIGRTSVPTSODKHHWMVRCARZHDKESUJBRZWMCUQYCUVOULSFKZXAYVJTGMSJORKXRGYHDNMHFNRJFLLEAPBTVHCTSDYWFUGLCWBNSQAMYEDNLGVTCAIOEWIGRHDFEYHBTNVGYWDAGJ");
    msg.flags = 223U;

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
    msg.setTimeStamp(0.022868757875851187);
    msg.setSource(30061U);
    msg.setSourceEntity(209U);
    msg.setDestination(34273U);
    msg.setDestinationEntity(237U);
    msg.total_steps = 22U;
    msg.step_number = 210U;
    msg.step.assign("SQYXELZYGENYJTZWTBKSDMGUVGOOPNCQADVMDURDVJGSVOCVOYIHYFKHQYTINETIZYAINWRFFKDABXXIIQKHBTOAASAEUCKLFUFPZHWDSRGWHQOZHNGGIPJSVUSCNSCKXBTEABGPTVOXMLMILLRBZQTMJBBPVXLBUXAWPHGICJHUJKNFORDRKCDONLERDHSJZFXZQZYMWWCRPJMXULAJPZUYPU");
    msg.flags = 30U;

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
    msg.setTimeStamp(0.5078344018645872);
    msg.setSource(5802U);
    msg.setSourceEntity(114U);
    msg.setDestination(30599U);
    msg.setDestinationEntity(3U);
    msg.total_steps = 55U;
    msg.step_number = 33U;
    msg.step.assign("GGMZLHAZSOKOXRWYFVTDINNINBFORTPSJQLFRIWPIAJJNXMARWFBDCGQSVPNIKMBBRMFKZRULXYQDUCHRXBTQEMYCKNAWTIQJZTJXVEHALCFPBGAOMUDRVEJVOMNCDXQWZSDXVSOPNTPFHJBOHZJYDTKGEUGCNXCZLCQTSWUPUWCZVXPVHSTFUEGJWLHGDYDHWXTSUZSJNQLAOFGHECYEALPAVKIIKPMDSYZQRLUBFHVLBWGEOUMBKMQ");
    msg.flags = 45U;

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
    msg.setTimeStamp(0.965291260201861);
    msg.setSource(18459U);
    msg.setSourceEntity(38U);
    msg.setDestination(49462U);
    msg.setDestinationEntity(148U);
    msg.state = 143U;
    msg.error.assign("VTLSVXIBGRHEMALOBLHGFFVJKSVZTNQQXBLVLOESFYLBCGJFXTKYAZSCKWAQWBRCSHDBLBMNWTRPKYSZITEH");

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
    msg.setTimeStamp(0.8878559577441512);
    msg.setSource(58296U);
    msg.setSourceEntity(99U);
    msg.setDestination(31338U);
    msg.setDestinationEntity(129U);
    msg.state = 36U;
    msg.error.assign("MLLQMFYKRSSNUAUURYTBTEWMCTBOACTDHUOKDDQPWMPGEONCWESDWWXYOZNIOJHQGZQSHAPUGGNGBDZTCLLKGJNLUAODXQYCOJHEFRPIQAWTQRDQTZBRBMYKYWUAICQCPKOFLVLYPBARXEIXJQGYOCIFHVVWELG");

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
    msg.setTimeStamp(0.8463480471064424);
    msg.setSource(2086U);
    msg.setSourceEntity(177U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(249U);
    msg.state = 249U;
    msg.error.assign("JTIWEBRZKNTZKEUMOHNNVCBKAJJSNCPQHDWHXVBROMMFXLZHYJQFHSIWUXXQGNWHLYVVQADSQMOWSADGDYJBFOLILTBAHMDRXETFSEZJCGHOBSALOCMBHPQEQIKLAUDPGDSFVAYCILJEKZSCUCWZMTEPLFRZPKEIUWUIGFSZTGYFOVQZNGOPYVTRPRXVOBUJEAYURKCOIWMBXJTTVM");

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
    msg.setTimeStamp(0.2537193206510929);
    msg.setSource(11186U);
    msg.setSourceEntity(161U);
    msg.setDestination(9110U);
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
    msg.setTimeStamp(0.5876866431246841);
    msg.setSource(28209U);
    msg.setSourceEntity(202U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.6491403331924782);
    msg.setSource(57747U);
    msg.setSourceEntity(46U);
    msg.setDestination(62779U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.4609484489081561);
    msg.setSource(28436U);
    msg.setSourceEntity(200U);
    msg.setDestination(44590U);
    msg.setDestinationEntity(205U);
    msg.op = 160U;
    msg.speed_min = 0.23195742924428564;
    msg.speed_max = 0.5370352125366572;
    msg.long_accel = 0.113582320905245;
    msg.alt_max_msl = 0.13601953586817306;
    msg.dive_fraction_max = 0.43968019251845036;
    msg.climb_fraction_max = 0.07062673588926704;
    msg.bank_max = 0.9104617930418295;
    msg.p_max = 0.8771887363473608;
    msg.pitch_min = 0.6689084453212132;
    msg.pitch_max = 0.7857493940902522;
    msg.q_max = 0.8814011183116077;
    msg.g_min = 0.0234070546804781;
    msg.g_max = 0.08086370904106455;
    msg.g_lat_max = 0.48370102398873016;
    msg.rpm_min = 0.12066488399190689;
    msg.rpm_max = 0.7830582081873778;
    msg.rpm_rate_max = 0.6115030629844547;

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
    msg.setTimeStamp(0.4755864899711367);
    msg.setSource(2486U);
    msg.setSourceEntity(206U);
    msg.setDestination(19601U);
    msg.setDestinationEntity(241U);
    msg.op = 1U;
    msg.speed_min = 0.6139050379916514;
    msg.speed_max = 0.38265067105937023;
    msg.long_accel = 0.30013351115033415;
    msg.alt_max_msl = 0.8277159680638739;
    msg.dive_fraction_max = 0.8098876603279447;
    msg.climb_fraction_max = 0.3668160588901087;
    msg.bank_max = 0.8901940641443538;
    msg.p_max = 0.80872620067417;
    msg.pitch_min = 0.9482603470057779;
    msg.pitch_max = 0.7321905513212028;
    msg.q_max = 0.7502619158018555;
    msg.g_min = 0.3821581464018846;
    msg.g_max = 0.8459483237175115;
    msg.g_lat_max = 0.8077919063665175;
    msg.rpm_min = 0.6854624106081225;
    msg.rpm_max = 0.15799067284425272;
    msg.rpm_rate_max = 0.6359597815301231;

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
    msg.setTimeStamp(0.2949081827174952);
    msg.setSource(22505U);
    msg.setSourceEntity(207U);
    msg.setDestination(59198U);
    msg.setDestinationEntity(176U);
    msg.op = 2U;
    msg.speed_min = 0.13344009678573587;
    msg.speed_max = 0.6674240520398832;
    msg.long_accel = 0.8271508716510368;
    msg.alt_max_msl = 0.3879104069599374;
    msg.dive_fraction_max = 0.6500312725835694;
    msg.climb_fraction_max = 0.1016905616051863;
    msg.bank_max = 0.47778195955179603;
    msg.p_max = 0.507321075468084;
    msg.pitch_min = 0.8713333157402587;
    msg.pitch_max = 0.2859739291842618;
    msg.q_max = 0.584844907824347;
    msg.g_min = 0.3203342922051048;
    msg.g_max = 0.42259805221325597;
    msg.g_lat_max = 0.3093757242084578;
    msg.rpm_min = 0.22385955878373542;
    msg.rpm_max = 0.7080056685898115;
    msg.rpm_rate_max = 0.7891598455584672;

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
    msg.setTimeStamp(0.6969323263934123);
    msg.setSource(59861U);
    msg.setSourceEntity(212U);
    msg.setDestination(54637U);
    msg.setDestinationEntity(240U);
    IMC::Frequency tmp_msg_0;
    tmp_msg_0.value = 0.5875481163818874;
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
    msg.setTimeStamp(0.6724869514956123);
    msg.setSource(13126U);
    msg.setSourceEntity(203U);
    msg.setDestination(32882U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.4301690920332094);
    msg.setSource(27021U);
    msg.setSourceEntity(235U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.512963336923318);
    msg.setSource(16766U);
    msg.setSourceEntity(193U);
    msg.setDestination(13498U);
    msg.setDestinationEntity(204U);
    msg.value = 0.08989719151330078;

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
    msg.setTimeStamp(0.8845319881806493);
    msg.setSource(44467U);
    msg.setSourceEntity(243U);
    msg.setDestination(5907U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9103993772382526;

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
    msg.setTimeStamp(0.19935785738598866);
    msg.setSource(38762U);
    msg.setSourceEntity(143U);
    msg.setDestination(54153U);
    msg.setDestinationEntity(183U);
    msg.value = 0.15815559451606898;

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
    msg.setTimeStamp(0.5560565077546229);
    msg.setSource(40723U);
    msg.setSourceEntity(55U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.7201987165687805;
    msg.lon = 0.32703135621997725;
    msg.height = 0.2766995059224564;
    msg.x = 0.4510725055019206;
    msg.y = 0.6573823873788811;
    msg.z = 0.8245848191989198;
    msg.phi = 0.24467154073431496;
    msg.theta = 0.03982927334595754;
    msg.psi = 0.31824202324898876;
    msg.u = 0.0630239919619342;
    msg.v = 0.2130531042686471;
    msg.w = 0.9454272347323138;
    msg.p = 0.7054823557967257;
    msg.q = 0.28297043107767383;
    msg.r = 0.617664061724057;
    msg.svx = 0.3742314089915387;
    msg.svy = 0.20265736214894503;
    msg.svz = 0.0973868368120483;

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
    msg.setTimeStamp(0.6656186606830705);
    msg.setSource(24672U);
    msg.setSourceEntity(1U);
    msg.setDestination(48350U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.28162864094620643;
    msg.lon = 0.6480834017619064;
    msg.height = 0.28805292729552556;
    msg.x = 0.8890630819849078;
    msg.y = 0.2582848544969104;
    msg.z = 0.9608931287697501;
    msg.phi = 0.13331266550839072;
    msg.theta = 0.958753205790797;
    msg.psi = 0.49485153376168645;
    msg.u = 0.4592744323556074;
    msg.v = 0.21007234730780877;
    msg.w = 0.3628661805869444;
    msg.p = 0.738297691365271;
    msg.q = 0.20097149824305294;
    msg.r = 0.2566826224607637;
    msg.svx = 0.03268961093424272;
    msg.svy = 0.918531339117728;
    msg.svz = 0.2826775644442039;

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
    msg.setTimeStamp(0.4810310199320179);
    msg.setSource(35046U);
    msg.setSourceEntity(95U);
    msg.setDestination(56033U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.5505659455287937;
    msg.lon = 0.5721335655083657;
    msg.height = 0.9915080352648782;
    msg.x = 0.2521516025483247;
    msg.y = 0.08245913899490975;
    msg.z = 0.6619242354500424;
    msg.phi = 0.14240189443351137;
    msg.theta = 0.14231208107508275;
    msg.psi = 0.8847292673038175;
    msg.u = 0.18106033313589498;
    msg.v = 0.48209487631224146;
    msg.w = 0.5902732317178726;
    msg.p = 0.1298034830556627;
    msg.q = 0.5335272924982014;
    msg.r = 0.666188225439939;
    msg.svx = 0.04297796983518687;
    msg.svy = 0.3508974661300147;
    msg.svz = 0.5159559641377737;

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
    msg.setTimeStamp(0.6674517243139513);
    msg.setSource(9567U);
    msg.setSourceEntity(177U);
    msg.setDestination(38745U);
    msg.setDestinationEntity(49U);
    msg.op = 0U;
    msg.entities.assign("MOKJYIUUTHXIOMJWPIUFZVCBBZUMZKXUQJACHSOSXEBYALUNDXREUBHIAMDDIDSDITFTEBPQPAPYGAFAUWIRCCYLGHIPDWHNDKCQEJZFRTFOGVLAFTPKPMRRNTGPSG");

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
    msg.setTimeStamp(0.7248699047628178);
    msg.setSource(22552U);
    msg.setSourceEntity(139U);
    msg.setDestination(38666U);
    msg.setDestinationEntity(206U);
    msg.op = 147U;
    msg.entities.assign("LPDQKEUMOUUGNLITRGUWBCSWIOSMERRJUWXPCOALTBSASCHAGSDRKAQNWDTBXBYIDAUYWRSEGQWFYHDFGESQWMFEBTVLFFJPYJMXVKKVEWZCXKOHOMVAUDRBQJWPQZFZKXIFHTBIOZPMZQIHZVTKYY");

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
    msg.setTimeStamp(0.17937320805399926);
    msg.setSource(16414U);
    msg.setSourceEntity(155U);
    msg.setDestination(44617U);
    msg.setDestinationEntity(236U);
    msg.op = 197U;
    msg.entities.assign("USTMICAEIMWHVWCOSVRQOVVQODZXCCVHIUQFYP");

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
    msg.setTimeStamp(0.41098009522315904);
    msg.setSource(16377U);
    msg.setSourceEntity(38U);
    msg.setDestination(57356U);
    msg.setDestinationEntity(132U);
    msg.type = 2U;
    msg.speed = 5494U;
    const signed char tmp_msg_0[] = {-17, 89, 11, -125, 118, -77, 43, -86, -20, -78, 76, 105, -65, -9, 104, -76, 126, 52, 24, -32, 57, -101, -25, 71, 30, -68, 97, 87, -51, 115, -25, -23, 6, 87, 70, -5, 64, -90, 117, -102, 47, 27, -115, -125, 25, 17, -35, -12, 6, -104, 81, 83, -54, -86, 99, -81, -81, 6, -22, 11, -79, -67, -23, 21, -54, -71, -60, -80, 81, 91, 99, 49, 67, -26, -29, 42, 23, -41, 31, -7, 10, -108, 99, 39, 64, -108, 107, 51, 56, 125, 19, -95, -27, 11, 19, 30, 7, 21, -2, 85, -24, 74, -45, 57, 4, 2, -66, 34, 6, -30, 65, -43, -13, -38, -80, -109, -59, -10, 17, -1, -36, -47, 81, 111, 10, 100, 37, 44, -14, -53, -41, -22, 37, -106, -74, 13, -49, 2, -34, -70, -12, 76, -122, -18, 86, -14, -38, -31, 36, -62, -34, 68, -84, -125, -102, 24, -14, 89, 119, 90, -107, -50, -96, 114, -8, 75, 67, 69, -123, -65, 118, 93, -128, 45, 17, 5, 114, 68, -40, -94, 49, -23, -42, -85, -91, 97, 26, 36, -22, 61, 8, -38, -68, 126, -121, -61, 13, 42, -61, 39, 55, -59, -38, 116, -6, -126, -5, 104, -120, 15, -91, -58};
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
    msg.setTimeStamp(0.7175014909665688);
    msg.setSource(44475U);
    msg.setSourceEntity(32U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(41U);
    msg.type = 20U;
    msg.speed = 7934U;
    const signed char tmp_msg_0[] = {-113, -82, -48, -63, 80, -13, 28, -116, -67, 53, 125, 52, -82, 36, 44, 30, -66, 48, 86, -122, 106, -8, 94, -57, -105, 14, 100, -17, 94, -42, -6, 84, 0, -11, -21, 30, 79, 86, -9, 39, 121, 99, -15, 58, -126, -9, -3, 121, 55, -92, -57, 38, 91, -76, 37, -71, 51, 101, 58, -81, -66, 92, 44, -69, 39, 9, -114, 73, 4, 114, 43, 17, -23, 50, -72, 59, -47, -93, 16, -7, -83, 0, 96, 30, 30, 83, 106, 22, -52, 87, -61, -92, -113, -16, -101, -104, -31, 32, 100, -15, -114, 16, -75, 55, -31, 29, -63, -50, 97, -80, 120, -38, 41, 68, -80, -47, -15, 73, 3, 19, -57, 56, 4, 43, -109, -15, 74, -19, -68, 36, 80, 100, 51, -94, -3, 37, 88, 102, -115, 9, -4, -99, 82, 102, 32, -100, -7, -18, -76, -2, 73, 80, -84, 12, 81, -97, -110, -112, -53, -71, 59, -125, 100, -57, 76, 3, 0, 42, -70, -13, 96, -51, -70, -39, 111, -24, -4, 105, 23, 50, -113, 118, -114, -95, -14, -19, 55, -33, -125, 96, 9, -69, 58, -94, 92, -90, -60, 94, 66, 39, -4, -118, 65, -51, 34, 51, -23, 100, 53, -70, -59, -45, -63, -58, 6};
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
    msg.setTimeStamp(0.7166414762290584);
    msg.setSource(16057U);
    msg.setSourceEntity(175U);
    msg.setDestination(18835U);
    msg.setDestinationEntity(118U);
    msg.type = 212U;
    msg.speed = 50430U;
    const signed char tmp_msg_0[] = {55, -127, 99, -19, -44, 107, 75, 46, -15, 43, 122, -84, -60, -68, 61, 37, -7, -106, 89, -24, 118, -123, -105, 67, -86, -66, -94, 98, 10, -121, -45, 36, -9, -113, 55, 42, 105, 102, -80, -43, 13, 84, -2, 20, 111, -81, -12, -62, 62, -123, -36, -111, 31, 17, 106, -61, -122, 88, 102, -73, -4, -52, -89, 20, -107, 94, 45, 25, -119, 125, 98, -81, -105, 67, -100, -97, -119, 45, 118, 32, -88, 61, -2, -78, -91, 119, 30, 70, 77, 3, 26, 120, -96, 83, 122, -120, -84, 20, 111, -86, 85, 56, -31, -117, 105, -52, 8, -106, 3, -112, -65, -15, -101, -120, 126, 85, 61, -74, -55, -34, -36, 109, -57, -29, 113, -32, -62, -4, 98, 110, 9, 125, -42, -47, 34, -126, -88, -60, -86, -36, -124, 63, 26, 16, 38, -50, 100, 108, 47, -42, -113, 101, 104, 80, -16, -89, -96, -121, 116, 37, -109, -125, -105, -92, 114, -123, 17, -44, -75, -19, -27, -53, 48, -128, -10, 17, -96, -92, -23, -48, 118, -4, -11, -58, 22, -102, 102, 38, -61, -41, 12, 62, 82, -19, -125, 73, 82, -66, -122, -42, -78, 52, 71, -25, -75, 5, -97, 23, 59, 45, 11, 75, 105, 120, 83, -33, -63, 43, -37, 102, 65, 44, 23, -97, 32, 72, 10, 25, -42, 18, -98, -73, 124, -103, -60};
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
    msg.setTimeStamp(0.545402865408874);
    msg.setSource(21232U);
    msg.setSourceEntity(98U);
    msg.setDestination(26288U);
    msg.setDestinationEntity(35U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.2602671052892993;
    msg.bank2p_pgain = 0.27466334544309845;

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
    msg.setTimeStamp(0.8340476300660994);
    msg.setSource(2123U);
    msg.setSourceEntity(79U);
    msg.setDestination(58658U);
    msg.setDestinationEntity(204U);
    msg.op = 94U;
    msg.tas2acc_pgain = 0.2965687447365011;
    msg.bank2p_pgain = 0.19743796237863398;

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
    msg.setTimeStamp(0.755168030172579);
    msg.setSource(29969U);
    msg.setSourceEntity(68U);
    msg.setDestination(49126U);
    msg.setDestinationEntity(97U);
    msg.op = 182U;
    msg.tas2acc_pgain = 0.3901802136663791;
    msg.bank2p_pgain = 0.3173768424704606;

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
    msg.setTimeStamp(0.35642798289474753);
    msg.setSource(16647U);
    msg.setSourceEntity(211U);
    msg.setDestination(48711U);
    msg.setDestinationEntity(200U);
    msg.available = 2886057889U;
    msg.value = 21U;

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
    msg.setTimeStamp(0.921566652966194);
    msg.setSource(1134U);
    msg.setSourceEntity(135U);
    msg.setDestination(24868U);
    msg.setDestinationEntity(74U);
    msg.available = 1875106762U;
    msg.value = 32U;

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
    msg.setTimeStamp(0.4812551359606374);
    msg.setSource(26323U);
    msg.setSourceEntity(247U);
    msg.setDestination(25388U);
    msg.setDestinationEntity(102U);
    msg.available = 630276346U;
    msg.value = 233U;

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
    msg.setTimeStamp(0.2494819317494651);
    msg.setSource(14306U);
    msg.setSourceEntity(161U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(220U);
    msg.op = 153U;
    msg.snapshot.assign("CHGWQBDOYMEYNJEZFZANCWOSMAXMTVDIZBQFPAUKGGCGJQZJBIYKIMLBARQJMLOACEMXMTFLPEQXHQFXUORIAUVXVCTOEHNJBDVMOXLRVRWKBQNUGHUFFTZPFJEGSWPBKJECNYPSSZLHQQNSCITGWOPADSDYKTTWVCBFRBFQOKKRJLCDIOVLMRSPVDSVKHWYNATUHYIDWPDLRRYEHIZAMDEUTTYOWPCZSSIABLJJZGNF");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("JNMDPSOZJVAQWQXMBCMMLEJNUCXVDGBTQAGOFONWNREIRQWUAEWPXBLSATTYZXWBTZKMQKUUFSFVIRDHBJVOLGHPSEUMIEAXHWTOYPPHVZTGRHYGHEHPKUFTNLJCXFIHGZQQDFALFOKUNIZNXKRRWOYZCEBXKEGPWYZZWTBHLCVYRJIDDJNFYTTHKGKACMP");
    tmp_msg_0.type = 231U;
    tmp_msg_0.properties = 30U;
    tmp_msg_0.durations.assign("MDJHODLWERRYEOSMMR");
    tmp_msg_0.distances.assign("FCAXHFXTJVQSLLQINTTZEAICGXNDZZSKCLHYSONFPWJCWHPMHPEKSENYGYKDDQBOOSBKZKDDNXYZQMVDWHAFMFDWESOHYGUZNCPEPJJOIFQIEBANWVGZVGCZIIWOWEPFABQRUUJWXSUGLTJLRCROYNLFRMLMBTTNVLVOGSPDQBXZTGJTVSSRWVMOMRYRGQAMAKDPAZIIYXJMXGXPEKYHIFUUUKFM");
    tmp_msg_0.actions.assign("MHITYYLSIGSMCWCHCJHKVVPWFLYHAXKASZNQWPWCHUSUGFEMYUVRYAIUDQXHQIRFUVZICXOGOCNNSBFEMXPEGRJEHNGTQFBMSMUZQBDDSDRGIDQUEWBOINSYFWHOZXBZQLSWJAHJDICJOQTHKGDMPXPWEBPITYLVAZCXTVRCPEAZKTBPTZPWZAXFEEYKVAYYLZRJVKDNGJRFROQWTTJLRLNMNODLKVOREKOP");
    tmp_msg_0.fuel.assign("DDASIEZCAOVGRGETKZPABCIZVUBDLXHSVOEPCYXATULBAQOAMRQXMKHCWQBORUGFIWWZUTAPXJCYNHDZYXJPJGIWJNXBGMBIANUKKYSPHYVJWC");
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
    msg.setTimeStamp(0.4707236213533966);
    msg.setSource(17994U);
    msg.setSourceEntity(47U);
    msg.setDestination(59304U);
    msg.setDestinationEntity(54U);
    msg.op = 68U;
    msg.snapshot.assign("LMSVMRRNKINPRBKWKEEPKXCHXDJGEDJPJWXSBHTNFYRIPSPGUVZJDKUFTHESAQKWAVSYPOIBTAPMNYXXVXXJALNVIIQIFJJLJFUZHRQSWMCGRHUNGRVTKUYVNGGWLAFPZXSAPUUJLQOMS");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 22U;
    tmp_msg_0.text.assign("KBKHEHAJLADGZQHDVPPCXTFFNTXBXXYGPGOOJRQVFYMURZWNMLKAODRTPUDWWSBGJOTYZHRUSWDGQNARDSIGUMIEJXBCWZJLLCWVZQCSHGPFKAYLSAUEXACJZHEMMLTKYINPNFEHNYFVCVXQOUBZCEMVARWSBXUJFROWXAMVKNGLNFPDIHUIKDVYJUYCRVPCBRNOFWJRYKHGOQBIBTJQZMLUWMPIISQKCFPEZBSVYLH");
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
    msg.setTimeStamp(0.6236015036802242);
    msg.setSource(40091U);
    msg.setSourceEntity(13U);
    msg.setDestination(29767U);
    msg.setDestinationEntity(63U);
    msg.op = 143U;
    msg.snapshot.assign("ASEVMDDELXSRQGNQGJCLCMUNHCTYKKYUQEZJPTOMSNUAQFBZBUUBAVTQINJGHGXEPZZPWOXZYMCDWXOQBUZMLYW");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("QQISFPUVMBRFAUTGHBKRROMEKEPONYBJJCNCQCDVIBGVOGQYSRMWZRJCLZXGIYSACCNWWQLKSXVMAUYCXKOJGGNRWUAZNLEE");
    tmp_msg_0.type = 142U;
    tmp_msg_0.properties = 62U;
    tmp_msg_0.durations.assign("NYLNTELUMMOQBTFIKPCEBTRYRYAJESUHSTWSBDAJZXYMNXNCJVIIVBJZLFEAQFMYEPKDOGWWIGSRXPNKXVEHCZULNWJCULUQDOIAYSOJKHSDZTRPPVWVSYOTONMCYAIDGOIKHUJGJSQDAMBGEZADLMHOKNAWAFTUMVGIFQWQOLCIZETVXUGFZEIDPHQHVLTRXZBYZPQXFGKNSRCFBGKFESBPHXMWFLQXOBU");
    tmp_msg_0.distances.assign("FDACPKZRFQMFSITOGUKXBJOXKMHTVGJNIVACPXMXWUDAGMPNGDKYZYXULVDTSTWASMNMHRQSBBJQNKNDPPII");
    tmp_msg_0.actions.assign("YBJVPGUBYKGSULVNLNDRKZPCMVJHIPFSUEJKGXYYQWHVCEDFQSUKOFFVWHPRUNWOBVCKGIQOITMXHPQLWOSPRLZBHWOELQGGQNJCENZGUBRDLWYMITMHTHCMJFNLZFCINAASPPSEAMMHVAZAOWROKMABRXDIALKBXQOSUOAMPIEZTEQCJJJUYYRIBSYXXDXCNDRXGPDNKUYADFITRBCLQTHXFBFZWEXNUKVTQJOVWZSE");
    tmp_msg_0.fuel.assign("CKMPYRZILTJXYESPLFBPJAMDAZYDPOYNAUUSZGRGGRTJWOYELWVZBCYFFOECHBNXVTDJRZFUASMBDWFQOTMPDPLHRHVIOKTKAVQCJIQQEZAHFFVKGGXMZNGIIKWAEQNCWXVQCOMNLLWUOTCWNUVHRUJXASSAEQIIR");
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
    msg.setTimeStamp(0.1999051184285986);
    msg.setSource(13505U);
    msg.setSourceEntity(230U);
    msg.setDestination(60635U);
    msg.setDestinationEntity(164U);
    msg.op = 160U;
    msg.name.assign("RZDXENVMSQVSTFJFBLIIWFUFYMMEQBJVZZKENSZYOIDTZOZONTVAEPJBIISJOD");

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
    msg.setTimeStamp(0.19674987599725202);
    msg.setSource(5305U);
    msg.setSourceEntity(108U);
    msg.setDestination(52460U);
    msg.setDestinationEntity(136U);
    msg.op = 237U;
    msg.name.assign("BNHSRLPOEAQCELVSMUSJNGIZDSYKUZWTCLJWYKEZYTQJULKAAITDATEXTMVNIJCTMVHDJXQZKGXPGWKM");

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
    msg.setTimeStamp(0.47879109466492775);
    msg.setSource(36984U);
    msg.setSourceEntity(45U);
    msg.setDestination(34069U);
    msg.setDestinationEntity(62U);
    msg.op = 126U;
    msg.name.assign("AEVEFLCJVHQJKXCIGHHMHLYWWTCOYTFDFTLIQPPWZEAGCADIKIXQDFCYXBBIREQDUIGHAPBNYUEDGFKLXSJGZBWKOONSQPTKAZGRMPVMSMWCWDQUJJEYCRSXXJULCZMFRGUZSRHIVXNEGVZMBYMZAQUMTVHYNCWAJLKQNFJSEXNG");

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
    msg.setTimeStamp(0.8979638028492513);
    msg.setSource(11966U);
    msg.setSourceEntity(224U);
    msg.setDestination(43801U);
    msg.setDestinationEntity(104U);
    msg.type = 76U;
    msg.htime = 0.7040976824457285;
    msg.context.assign("ELWANDYAXPEXWUOMHTRNBARNWIEBLUZMZUTWSESMMJSTZFGPILROEFVBIFEVWQKQYVX");
    msg.text.assign("DYEHFAHHBZBMCXYLWBIKFOMESPNSKNNPRVRABXOSVMDRJBFUUGJKDXMWGOVQPCJWJRXDTCPREKYSYEZEUXIDFSGICVMSZOGHCQGILMFWTVXFRCAVEWGUBTVCDAOTOISHNJWAPJCITBVQUYQUEPTLSQRHGTFJBRPAIAOIPXNTUKVAOCSMP");

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
    msg.setTimeStamp(0.5303366076162208);
    msg.setSource(5843U);
    msg.setSourceEntity(192U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(213U);
    msg.type = 167U;
    msg.htime = 0.9220898584736671;
    msg.context.assign("SHDDCAXIPCCTDYMTVXQOFGVQJTVWRTNLUFWTLFRXZVGCACWTUYVXMHRDFYRZZPOUHSWPNFSYQRYZHBUGKNOKFUJWMJJFXEPLDKBQNKROYB");
    msg.text.assign("HVUJLLNQTNTQHYPTENWSZDUGDZRXISUMXJABVLOZVKQXYBMCHCBJRPGQDKGPEWWXYPANCLZVPUFDQJNDFSUBCWRWYVPOLLTJOTPGHRLXVSBTDRZIRCXEMYQFATUPZARJHCUECUALETQKFVHMYYJYRWOKUGEFAXMDZKMQODMTAHWBMNEGSMBNOIKRPVSVE");

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
    msg.setTimeStamp(0.4609457482315834);
    msg.setSource(63874U);
    msg.setSourceEntity(1U);
    msg.setDestination(51094U);
    msg.setDestinationEntity(95U);
    msg.type = 18U;
    msg.htime = 0.7848463078105568;
    msg.context.assign("SOJLQNHDXWHSIXHGSGFUKLLMBTZXZBOIVHXQPIVRDJRFMPNEYYHGDVQUKQSEXDKNAFPKHJTFZFIJQTAHKOVIOZVRCDTDUOFRTKZPNNCGOAXQTFQAXXEFPLBOBWCPTVZCGSWRYUNGEJVIEGKQJPHAYOCJIDAOBBMDHTBJKRXEMULBKWLVEUIWLMNPMSFLJUWYYUWMRPWQSGE");
    msg.text.assign("HVDYCNGDDTCPNOGDSAXKCQSMOCDMZVZFMNQYJBTZGJQFHTPXRDGYIRYEZUQBCOWXWWOLZUBEZCIEBPRHDSUKQYSTZGZASULGBHIKGUFXIXEOGCSL");

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
    msg.setTimeStamp(0.02759923156683841);
    msg.setSource(59097U);
    msg.setSourceEntity(41U);
    msg.setDestination(39202U);
    msg.setDestinationEntity(158U);
    msg.command = 52U;
    msg.htime = 0.18191539100298193;

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
    msg.setTimeStamp(0.1125514531575672);
    msg.setSource(16948U);
    msg.setSourceEntity(62U);
    msg.setDestination(12077U);
    msg.setDestinationEntity(191U);
    msg.command = 96U;
    msg.htime = 0.6749235909246286;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 6U;
    tmp_msg_0.htime = 0.03361170059620733;
    tmp_msg_0.context.assign("ALSFXNSZMBOWRVKEUBBPLRLUUJOMJMWLKJKBNZZDGHVFBRAVKSDOMQDAGHXYSDPFKJPUQGEBBYODTGOTOCUTVFZGZMJZRSREVOCNQZJDIRYBCQPICYIFPHORQDEHFLLTTVGUIXH");
    tmp_msg_0.text.assign("PACSZJTWTRDKSMYGFBMJDKQHGANTWUMXVHEHXCOXBBUTLWQLBWAMTRBXNAEIBPZNYVVDJAGRFIKGLEKIRQIUCCFEISSXTZUCXZFYKNTPWLXYCHOZPSEXKYGDUGDDFROFINRCHVYJHWSLEROBNATEOAGINMKEPTUNUPSQEWKPBLOSHGYMEBMFVLMQJZVZZUINOCVLWQSAZLSJBYRXVDD");
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
    msg.setTimeStamp(0.9186859362906301);
    msg.setSource(25629U);
    msg.setSourceEntity(93U);
    msg.setDestination(352U);
    msg.setDestinationEntity(7U);
    msg.command = 176U;
    msg.htime = 0.8317180198600016;

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
    msg.setTimeStamp(0.48862142429350786);
    msg.setSource(13274U);
    msg.setSourceEntity(211U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(237U);
    msg.op = 5U;
    msg.file.assign("SRUCXGJZBQHZTRQJIWTLWXRUZDJUBCFKBWSDDLWLDFARNGYCEOADPQDRJQVMHYGXJFLHRPWCVLNOJFAQGRPGGQIGOLVCKFUUWAABIWKTTHIXPQOVWVTVPZHMIBUBCTCHIUYPMQEC");

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
    msg.setTimeStamp(0.7570818367254751);
    msg.setSource(4791U);
    msg.setSourceEntity(27U);
    msg.setDestination(19105U);
    msg.setDestinationEntity(145U);
    msg.op = 137U;
    msg.file.assign("WHNABFBMTVUQMRDYJNAQJHOWNJWGFVBMYEQDXUBACLVTNRRVKGGMKRPWYASHLNFHZDTWQDICQCWXTKLNRIZAXYXBSFJXMWYJJUFQJXOLJIMEXZGWQQKLZVGYDRVPBERUKZYYWBIHHSCCMMIGXOVWIQEIJSATZFKNQALKFNEBCGTYLLAOUMKSMTDUODPFCOOPDSZBARSPNHCBCZKZODNVTHCFPUUOP");

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
    msg.setTimeStamp(0.7867825476725316);
    msg.setSource(47283U);
    msg.setSourceEntity(70U);
    msg.setDestination(65328U);
    msg.setDestinationEntity(123U);
    msg.op = 121U;
    msg.file.assign("NANIRIRFFFPAKKTLZJQMWXILOVWFHNEMGVEYGIYICBIZYSUPWAQZOGRSYHEGSE");

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
    msg.setTimeStamp(0.6504867708468036);
    msg.setSource(5968U);
    msg.setSourceEntity(174U);
    msg.setDestination(1438U);
    msg.setDestinationEntity(64U);
    msg.op = 48U;
    msg.clock = 0.007549325525307959;
    msg.tz = -110;

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
    msg.setTimeStamp(0.18962818502022816);
    msg.setSource(60866U);
    msg.setSourceEntity(62U);
    msg.setDestination(32530U);
    msg.setDestinationEntity(246U);
    msg.op = 252U;
    msg.clock = 0.3282483043662472;
    msg.tz = -69;

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
    msg.setTimeStamp(0.711274463225331);
    msg.setSource(39829U);
    msg.setSourceEntity(191U);
    msg.setDestination(37507U);
    msg.setDestinationEntity(84U);
    msg.op = 53U;
    msg.clock = 0.9272948787910247;
    msg.tz = 122;

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
    msg.setTimeStamp(0.7828169492610607);
    msg.setSource(17506U);
    msg.setSourceEntity(54U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(74U);
    msg.conductivity = 0.02980196353278397;
    msg.temperature = 0.40885021454041237;
    msg.depth = 0.6233131653349385;

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
    msg.setTimeStamp(0.5356932747641885);
    msg.setSource(5871U);
    msg.setSourceEntity(245U);
    msg.setDestination(35947U);
    msg.setDestinationEntity(229U);
    msg.conductivity = 0.46801611190181114;
    msg.temperature = 0.9621250587228799;
    msg.depth = 0.059630401575211156;

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
    msg.setTimeStamp(0.8649878764009095);
    msg.setSource(63065U);
    msg.setSourceEntity(227U);
    msg.setDestination(57201U);
    msg.setDestinationEntity(136U);
    msg.conductivity = 0.39076424116486896;
    msg.temperature = 0.6906811911715718;
    msg.depth = 0.8100665109490659;

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
    msg.setTimeStamp(0.7807129729753299);
    msg.setSource(25468U);
    msg.setSourceEntity(135U);
    msg.setDestination(10779U);
    msg.setDestinationEntity(64U);
    msg.altitude = 0.5327449530666328;
    msg.roll = 22155U;
    msg.pitch = 62127U;
    msg.yaw = 13537U;
    msg.speed = 13506;

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
    msg.setTimeStamp(0.8603177539679518);
    msg.setSource(39960U);
    msg.setSourceEntity(165U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(221U);
    msg.altitude = 0.7713611480467129;
    msg.roll = 4416U;
    msg.pitch = 2914U;
    msg.yaw = 21459U;
    msg.speed = 668;

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
    msg.setTimeStamp(0.2966322812818758);
    msg.setSource(31326U);
    msg.setSourceEntity(143U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(217U);
    msg.altitude = 0.7258846172774029;
    msg.roll = 54892U;
    msg.pitch = 41985U;
    msg.yaw = 58044U;
    msg.speed = 4387;

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
    msg.setTimeStamp(0.528074065840558);
    msg.setSource(42547U);
    msg.setSourceEntity(6U);
    msg.setDestination(31829U);
    msg.setDestinationEntity(41U);
    msg.altitude = 0.6401386258642312;
    msg.width = 0.15051143885186868;
    msg.length = 0.8530027042205934;
    msg.bearing = 0.4087948738543393;
    msg.pxl = -15903;
    msg.encoding = 68U;
    const signed char tmp_msg_0[] = {-67, -38, -74, 6, 91, -67, -73, -106, 53, -102, 8, -40, -79, -122, 68, 94, -97, -124, 113, -8, 123, 98, -39, 96, -77, 34, -19, 84, 73, 51, -45, 8, 3, 22, -103, 23, -46, 20, 8, 1, 117, 91, -106, -46, -7, -44, -72, -4, 40, 118, -52, -97, 121, -20, -85, 45, -126, -28, 126, 89, 104, -115, -122, -112, 100, -111, -96, 48, -15, -59, -56, 84, -122, 75, 43, -87, -66, -85, -73, 82, 96, 61, 43, 98, 6, -44, -28, 10, 49, 104, 39, -121, -18, 115, -98, 110, 87, -128, 64, -79, 119, 79, 2, -17, 12, 14, 64, -49, -25, -98, 118, -33, -26, 80, 3, 58, -57, 56, -77, 57, 104, 54, -100, 117, 95, -109, -95, 105, 63, -91, 2, -66, 90, -14, -52, 16, -116, -52, 46, -53, -3, -94, 78, 61, 4, -115, -93, -124, -121, -45, 99, -56, -95};
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
    msg.setTimeStamp(0.21174687126459435);
    msg.setSource(23182U);
    msg.setSourceEntity(173U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(127U);
    msg.altitude = 0.49921120798133367;
    msg.width = 0.784693808855671;
    msg.length = 0.14945792301535887;
    msg.bearing = 0.23195940223970568;
    msg.pxl = 3813;
    msg.encoding = 113U;
    const signed char tmp_msg_0[] = {25, -14, -88, 52, -17, 87, -105, -105, 107, -84, 22, 116, -95, -103, 95, -81, -15, -95, 94, 49, -17, 70, -43, -125, 72, 18, -49, -82, 73, -7, -60, 12, 64, -32, -103, 15, -46, -92, 54, 89, 113, 106, -71, 125, 0, 120, -99, -112, 1, -101, 101, -10, -3, 48, 108, 65, -74, -56, 111, 79, 67, 100, -67, -124, -37, 108, -81, -58, -6, 77, -115, 72, -70, -21, 108, -32, 3, -116, 13, 4, -60, -29, 54, 116, -103, 21, -109, -67, -43, -106, -82, -11, 12, 41, -82, 111, 105, 42, 101, -110, -9, -30, 30, 88, -100, 35, -125, -26, -30, -72, -73, -54, -20, 28, 82, 3, 12, 9, -54, -68, -62, -82, -122, -112, 2, -87, -71, 97, 104, -96, 100, 87, 111, -93, -16, -117, 28, -51, -52, 14, 75, -67, 39, -9, -29, -125, 48, -10, -40, -31, -114, -113, 93, -13, 117, 29, 52, -11, -24, -13, 74, -55, 39, 76, -4, 109, 87, -50, 39, 77, -126, 49, -50, -122, -118, 103, 125, -120, 115, -107, -56, 97, 27, -61};
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
    msg.setTimeStamp(0.5013246545303609);
    msg.setSource(19618U);
    msg.setSourceEntity(57U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.47767729111405055;
    msg.width = 0.6767561413018786;
    msg.length = 0.4302358775505053;
    msg.bearing = 0.31787566673155676;
    msg.pxl = -18624;
    msg.encoding = 104U;
    const signed char tmp_msg_0[] = {63, -54, 79, -74, 55, 49, 3, -42, -115, -16, 101, 72, -87, 91, 103, -64, 110, -109, 12, 79, 118, -88, -94, 126, 71, -22, 106, -97, -114, 0, -113, -128, -96, -67, 83, 71, -75, -78, 81, -80, -115, -127, 92, 116, 83, 118, -90, -89, -29};
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
    msg.setTimeStamp(0.03551954386299894);
    msg.setSource(12145U);
    msg.setSourceEntity(134U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(72U);
    msg.text.assign("VUGJNONAFWGYGCLJTAVBKUQBXN");
    msg.type = 207U;

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
    msg.setTimeStamp(0.6209443273796824);
    msg.setSource(33940U);
    msg.setSourceEntity(55U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(165U);
    msg.text.assign("RABCVTMLYRVSLNZSWWQLPFEVDHTAQQCKZVHYEWBSCVYPSJTVYZHFEJOALHJUPNRDKKUKYRCLZQECQDHBEJBMWGGWAUBUFWDIBMXTLXMDONPISHPYXOKGLZULBJMZBEUNZTAFPZYRFIYQ");
    msg.type = 248U;

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
    msg.setTimeStamp(0.5113282835201791);
    msg.setSource(64242U);
    msg.setSourceEntity(250U);
    msg.setDestination(26875U);
    msg.setDestinationEntity(249U);
    msg.text.assign("FYKIPFPHCSRFERYOQIOQBMUVPZEJUFXQAXQSIEGRSILOFTJTTIRATGTNJQMWSBQZRGWBMHGKNSKCOGUJIAZQMNJZPBWHEASACWTHJLIEGOZSHCSJBC");
    msg.type = 66U;

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
    msg.setTimeStamp(0.028955854401435888);
    msg.setSource(55440U);
    msg.setSourceEntity(214U);
    msg.setDestination(14939U);
    msg.setDestinationEntity(120U);
    msg.parameter = 153U;
    msg.numsamples = 105U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 14380U;
    tmp_msg_0.avg = 0.30904701780566;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6774817717746805;
    msg.lon = 0.560034083153288;

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
    msg.setTimeStamp(0.29853359537760393);
    msg.setSource(24985U);
    msg.setSourceEntity(112U);
    msg.setDestination(2764U);
    msg.setDestinationEntity(148U);
    msg.parameter = 185U;
    msg.numsamples = 73U;
    msg.lat = 0.39008872634643676;
    msg.lon = 0.7506026347893313;

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
    msg.setTimeStamp(0.4009242102289049);
    msg.setSource(17879U);
    msg.setSourceEntity(224U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(74U);
    msg.parameter = 209U;
    msg.numsamples = 56U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 47832U;
    tmp_msg_0.avg = 0.8020338483171481;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.13855675358807895;
    msg.lon = 0.306036411344474;

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
    msg.setTimeStamp(0.21608290590567436);
    msg.setSource(16672U);
    msg.setSourceEntity(147U);
    msg.setDestination(37559U);
    msg.setDestinationEntity(183U);
    msg.depth = 62738U;
    msg.avg = 0.1577296162627424;

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
    msg.setTimeStamp(0.04850979633267205);
    msg.setSource(52189U);
    msg.setSourceEntity(81U);
    msg.setDestination(53560U);
    msg.setDestinationEntity(88U);
    msg.depth = 63523U;
    msg.avg = 0.2247369611769392;

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
    msg.setTimeStamp(0.8725725637711153);
    msg.setSource(24626U);
    msg.setSourceEntity(138U);
    msg.setDestination(50089U);
    msg.setDestinationEntity(15U);
    msg.depth = 44860U;
    msg.avg = 0.003412673901472596;

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
    msg.setTimeStamp(0.09227787061923409);
    msg.setSource(61544U);
    msg.setSourceEntity(248U);
    msg.setDestination(13184U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.27552329952927657);
    msg.setSource(58439U);
    msg.setSourceEntity(246U);
    msg.setDestination(40372U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.6683514702481159);
    msg.setSource(25799U);
    msg.setSourceEntity(68U);
    msg.setDestination(27813U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.02869200210226086);
    msg.setSource(53627U);
    msg.setSourceEntity(74U);
    msg.setDestination(4515U);
    msg.setDestinationEntity(205U);
    msg.sys_name.assign("UFLKMKTFYRRDQCAHQEGODZSBXVAYTESZMVNEMIBKDLBIFELYDVISYYITUCHXTGG");
    msg.sys_type = 26U;
    msg.owner = 23704U;
    msg.lat = 0.47173849409524815;
    msg.lon = 0.7125898568016876;
    msg.height = 0.029017878836398725;
    msg.services.assign("VXBKHIVHCBAAKOPWBVNNJILRZKCILAVOHSNICFIJYOZWTMIRLSPQTGHEJUGFYRESXWTANPDQBOVJTGJDFZXNEZWULEHDPSBGDGCUVFLOBMFCLQLFDIPTRFHSVWAZDRYSDKQTFNBLGFJKFAQIUMDIXUSEEQWGUHRQNTAGPMUWJRYRJOZSPNCQKYCGEXOZXKHSSPDVHXYUMDBBW");

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
    msg.setTimeStamp(0.8294606188607032);
    msg.setSource(52116U);
    msg.setSourceEntity(146U);
    msg.setDestination(7250U);
    msg.setDestinationEntity(28U);
    msg.sys_name.assign("PORPRFOVCUTPZOQDELHFLAIBOXDGFND");
    msg.sys_type = 231U;
    msg.owner = 29956U;
    msg.lat = 0.18421525442296716;
    msg.lon = 0.22818250148485764;
    msg.height = 0.4718986590941334;
    msg.services.assign("WUWBHHNJVPNSSCIWXHVNODUEPPPJNZMLYHIXUMUVFYZYKZTGORRVEIHWHAHRCJURTESBIOOOADNPHUITIWDXKRTHLUGDCCJXPQZJWSWWOQDEJGGCMGYZEGUBYGOLALUXAFSNAVSNNCQJFANCHDKDBQMFQYLYBFTAJFSB");

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
    msg.setTimeStamp(0.29952609725112045);
    msg.setSource(40826U);
    msg.setSourceEntity(33U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(79U);
    msg.sys_name.assign("MJSNPOJBMOXMVHKDNKOAPMFANDECHGGXUBRNRDOWECWTEIJIYIZFZLZIMPSUJTJHDRIZCIQFIUODVOWFWQWNUSKWTHOORHPDG");
    msg.sys_type = 43U;
    msg.owner = 57701U;
    msg.lat = 0.2329340090677139;
    msg.lon = 0.9380423833229022;
    msg.height = 0.39589441585096496;
    msg.services.assign("YOVRJAJYFPXIPLAQPSBOGHWDSGYGDZORXCVCBALWED");

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
    msg.setTimeStamp(0.5443200740436988);
    msg.setSource(38209U);
    msg.setSourceEntity(87U);
    msg.setDestination(37520U);
    msg.setDestinationEntity(254U);
    msg.service.assign("QVXBPHHDOPGTKGQCHVUMZBKULCRYONRHRIJDXGUFLSNIHTTMMUPHQGKZIBTFWQKKLYZYOAIFWWJUXYQCHRVMRUOFMRAUSFTOGAJTIPTPDABYPWKRA");
    msg.service_type = 120U;

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
    msg.setTimeStamp(0.47374768161716174);
    msg.setSource(44618U);
    msg.setSourceEntity(55U);
    msg.setDestination(54946U);
    msg.setDestinationEntity(73U);
    msg.service.assign("LKHDYRAURGCBDYHVUASCLINJYWUEAMIJUYZISELURMECORNH");
    msg.service_type = 168U;

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
    msg.setTimeStamp(0.6604019512089838);
    msg.setSource(38962U);
    msg.setSourceEntity(1U);
    msg.setDestination(22220U);
    msg.setDestinationEntity(148U);
    msg.service.assign("MPSWCSDHAZDLNRDDJGVMURBJREGKRAKXTEXHCYVHHFCSZZRFBOIYMTYFXOHXAUOKNRERTOULHDELVBZUTWKIYAKQWSXMIJEIJGFFEAQPPAIDPS");
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
    msg.setTimeStamp(0.06574874838342215);
    msg.setSource(52438U);
    msg.setSourceEntity(11U);
    msg.setDestination(17719U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6440704701201763;

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
    msg.setTimeStamp(0.1625235892728255);
    msg.setSource(35032U);
    msg.setSourceEntity(158U);
    msg.setDestination(5159U);
    msg.setDestinationEntity(212U);
    msg.value = 0.5910124252172982;

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
    msg.setTimeStamp(0.8005017767541581);
    msg.setSource(4539U);
    msg.setSourceEntity(48U);
    msg.setDestination(32156U);
    msg.setDestinationEntity(86U);
    msg.value = 0.13746413783633427;

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
    msg.setTimeStamp(0.33000496081250363);
    msg.setSource(17036U);
    msg.setSourceEntity(31U);
    msg.setDestination(43166U);
    msg.setDestinationEntity(152U);
    msg.value = 0.482214291709096;

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
    msg.setTimeStamp(0.8062863570065798);
    msg.setSource(34230U);
    msg.setSourceEntity(207U);
    msg.setDestination(3394U);
    msg.setDestinationEntity(216U);
    msg.value = 0.12503125794274328;

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
    msg.setTimeStamp(0.8221614889834566);
    msg.setSource(32415U);
    msg.setSourceEntity(207U);
    msg.setDestination(35522U);
    msg.setDestinationEntity(46U);
    msg.value = 0.7546515290221851;

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
    msg.setTimeStamp(0.43781561387694057);
    msg.setSource(60692U);
    msg.setSourceEntity(131U);
    msg.setDestination(5795U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2844490081543428;

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
    msg.setTimeStamp(0.8770935287524657);
    msg.setSource(25431U);
    msg.setSourceEntity(47U);
    msg.setDestination(39226U);
    msg.setDestinationEntity(97U);
    msg.value = 0.5502309495123798;

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
    msg.setTimeStamp(0.0012519200012468534);
    msg.setSource(25633U);
    msg.setSourceEntity(166U);
    msg.setDestination(43694U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0389153484060939;

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
    msg.setTimeStamp(0.6876171817144326);
    msg.setSource(58735U);
    msg.setSourceEntity(238U);
    msg.setDestination(34997U);
    msg.setDestinationEntity(79U);
    msg.number.assign("CPLPVMDTLKCMVTEFLRTGYJJAOUDOBTZFEPOFBZNOUWIJWCESQXVAXGMCNIKSMUCNAXFFJKBXATRHSUGNGIDLPLAMEUXLBYLYBADBKKQNFCBERHKTSHVXUUQQINHGFDHXJJNNZEHMBIUGQODTCSV");
    msg.timeout = 44272U;
    msg.contents.assign("JIFBBQPGYLCVIEDNLPDIUUHTLYYKESKSJMRINVLKMHCGGZQCDPGLFSONIQERJQKCOHUMTYHOYYVIHBFAEVVSTXAROSULNNLRPSOYLKWUXBNOGYXJVVZJZAZHEBFGFQJYDRHUGBEMOKXEAWDPJCOSAWWXTZQWKOAGXWPFMRHDMGCUMPNFYRVTGIUFCNDWPPAZIUKLRZZOQBTM");

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
    msg.setTimeStamp(0.151828034958834);
    msg.setSource(4112U);
    msg.setSourceEntity(105U);
    msg.setDestination(42613U);
    msg.setDestinationEntity(0U);
    msg.number.assign("ELNUIEXTHXDEEFJNIYLIWKMDYZUIQANKYVQGCUPQAYHRSFZALOJAQXTCOGJCKLGXBCHHCPVFKBERZUFSJBOCEBRMXSRNWUJDGUVYPARNYSGHLYQRURNVJPHBTOBWZKZSAUWAEPDWSXFXHDYZUOQVGI");
    msg.timeout = 28559U;
    msg.contents.assign("EBEZNUOMCKAVYLHCGVPQSRPRCASBXJRWCNAZRXEYHWNCQDRTUNTXQDTOMZPMJKHRFIGMDIZECDOWNSUGBWVBIXLGKJTTRGQWMFYMCWJQNSGBNHHTQWSYVAODGVOMBSFP");

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
    msg.setTimeStamp(0.7766687105624649);
    msg.setSource(14659U);
    msg.setSourceEntity(253U);
    msg.setDestination(15555U);
    msg.setDestinationEntity(161U);
    msg.number.assign("DQEIZMMNQRPJULKDFQZJSVTVTAHJCNPVLKUOUHOBEZIWEXJBPXHAMMVHWQCWMTJBADXDKUQFGCVCYWIBZUOKRSAKUZJNFXPCCMKOIUWPGWGLJTSGSJQDLUDVVYMCKUWDGYGPNHEDSZPJOPFCLIZTXFNEBQLRAQAVMECQXRIVHCRPRAE");
    msg.timeout = 44904U;
    msg.contents.assign("QPIPUCAJJSBCNATSINPLBPVSAWEGORFJIMMQZUFMRFRIUNLOMZLRYUAKJAAWOERTVYGMSFIZTURUUHVWMCOISODRASCECYRDYOTJGVDQEUBVKZHNHXYBGCNHBWZQWKWQWYMBOL");

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
    msg.setTimeStamp(0.30208829589049613);
    msg.setSource(59417U);
    msg.setSourceEntity(51U);
    msg.setDestination(7310U);
    msg.setDestinationEntity(222U);
    msg.seq = 2493798001U;
    msg.destination.assign("DRNXYIDJINCGMUTWDBRVDPOYIVJRKHLOFQTWTRBWVEFYARUDDXOGMSOYCFIJTVHKMZXXQZGUKMFHQPIYNGFWCNCVLETHZZZEOKJSESEXHGCBTMHFPJRXDXSGKKQAXQEAITOWKPYJBOZNJJRYLPRVKYLSSUZEUUVGNYCQMAIWKULPZALVOPUCSBURUAO");
    msg.timeout = 42781U;
    const signed char tmp_msg_0[] = {53, 92, 104, -104, 103, -50, -113, -39, -70, 28, -92, 76, 19, 108, -48, -68, 39, -16, -44, 37, 38, -63, -1, 1, -18, 30, -81, -102, -29, 109, -82, -17, 100, 51, 13, -43, 61, -27, 126, -100, -2, 92, 26, -26, 70, -15, 31, 79, 50, 72, 10, 56, 93, 117, 120, -88, 10, 66, 69, 2, -58, -98, 42, 99, -34, 34, 101, 86, -43, -19, -123, 120, -29, 80, -43, -90, -96, -2, 89, 65, -9, 107, 110, -90, -74, -8, 2, 82, 6, -20, -8, -60, -35, 126, -43, -39, 80, -124, 39, -56, -62, -55, -112, -57, -70, 111, -115, -35, -39, 120, 108, -108, 49, 2, 40, 15, 23, -11, 6, -110, 65, -8, -82, -35, 40, 22, 126, -103, 69, 19, -65, 46, -55, -10, -18, 8, -47, 33, -21, -3, -64, -69, 50, -100, -97, 117, -13, -92, 120, 31, -105, 7, 57, -51, 55, 113, 93, 120, -123, 12, -56, 78, 62, 29, 67, -95, -58, -42, 67, 53, 91, 95, -69, 69, -31, -69, 32, 40, -86, 12, 110, 1, -53, 15, 111, -23, -80, -112, 24, -98, 27, -58, 110, 56, 91, -45, 69, 44, 79, -4, 50, -102};
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
    msg.setTimeStamp(0.7263298034932169);
    msg.setSource(10314U);
    msg.setSourceEntity(97U);
    msg.setDestination(6020U);
    msg.setDestinationEntity(127U);
    msg.seq = 4169421511U;
    msg.destination.assign("UQEWZFXMRZEXSXTABHNZJQELPVMOQAOWQUISCJRRTIKLHNNWUVNGQYJKHOJXWHMTPXJMSSRPVJNRCHRVEBJGSIEMOFU");
    msg.timeout = 62820U;
    const signed char tmp_msg_0[] = {105, -14, 65, -99, -30, -89, -1, 122, 87, 121, 59, 1, -91, 43, -64, 72, -68, 106, -9, -35, 28, -23, -44, -21, -7, -122, 4, -19, -47, -66, 69, -34, 117, -119, -45, -75, -83, 99, 72, 85, -83, -57, 33, 42, 0, -46, 96, 19, -10, 87, 13, -116, -90, -64, -71, -101, -35, -107, 20, -16, 74, 27, 14, 66, -119, 105, -72, 37, -8, -5, 121, 54, -22, 79, 46, -39, -34, 120, 86, -110, 56, 60, -118, 110, 32, 38, 49, 56, -109, -115, 27, 1, 9, 90, -51, -82, 23, -28, -125, -33, 6, 80, -65, -61, 66, 55, -101, -94, 64, -102, 19, -36, -54, 115, 122, -85, -74, 99, 18, -13, 77, 113, -45, 92, 123, -126, 88, 111, -19, 5, -86, 24, 22, 31, 113, -3, 41, -37, 68, 80, -7, 124, -123, -31, 46, 34, -16, 65, 86, 73, -47, -62, 69, -29, 101, 57, -57, 79, 101, -71, 11, 61, 0, 106, -22, 54, 90, 43, 7, -63, -6, 21, -109, -120, -18, -101, 85, -106, 93, -96, -43, -78, 66, 79, 115, 104, -108, -121, -40, -118, -50, -12, 76, -42, 101, -124, -124, -35, -59, -18, -9, 100, 78, -18, -13, 116, -85, -22, 20, -93, -107, 106, -65, -42, -128, -91, 98, 0, -23, -99, 109, -39, 13, 19, 61, -82, -59, -82, -113, -72, -23, 63, 92, 45, 116, 29, 26, 100, -58, 116, -61, 52, 68, -99, -89, 59, 49, 69, -17, 42, -100};
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
    msg.setTimeStamp(0.9757634893615823);
    msg.setSource(20230U);
    msg.setSourceEntity(133U);
    msg.setDestination(50155U);
    msg.setDestinationEntity(7U);
    msg.seq = 3705316477U;
    msg.destination.assign("TIRYTRUGZGLZLEDCXRHYERBTOXBILMKUVLZJNULMUGQZKIQOHVVFAZLBCNZHYTAMIJSKOXDSMXFPDNNEWOSJJYSQGBGGMYDRWBTZPIHQWPTDSQUELHNLFBQRKGFMMVQXCCKNWXWKGRCHEFMCCFNWEKJWAWAJDVAOZUCHTYMJOEPEXAAWPUAHQAVQPVUVFXXDSYPYFKBIPTLIVNSYNDWVEGSEFPNTCHZTOUOIBJGZXJAYBHOKRSF");
    msg.timeout = 58598U;
    const signed char tmp_msg_0[] = {20, -126, 42, -74, 94, -118, 33, 88, 13, -96, -65, -111, 48, -21, -25, -85, -120, -72, -88, 85, 2, -5, -94, 113, -102, -14, -54, -90, 120, -26, 71, -43, 105, -80, -70, -83, 108, -108, 42, 100, 101, -101, 56, -128, 51, -60, 96, -114, -1, -104, 25, -3, 74, -107, -29, 75, 75, 101, -2, 71, -4, 23, -8, -97, 63, 80, -103, 12, 110, -115, -27, -37, -59, -76, -4, -105, 112, -52, -43, -66, 77, -25, -125, -16, -35, -5, -5, 33, 52, -120, 112, -96, -101, -50, 61, 49, -2, -40, 35, 115, -47, 46, 41, -57, 60, -67, -39, 107, -126, -113, -51, -14, -122, 64, -17, 11, 1, -122};
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
    msg.setTimeStamp(0.23331123582665014);
    msg.setSource(11005U);
    msg.setSourceEntity(202U);
    msg.setDestination(19266U);
    msg.setDestinationEntity(40U);
    msg.source.assign("ZXQULBBRSKYUCYEXZQXMTXEVXLDKNIDZYKRCHSDKNREARGZBYOZWLWTAPJPGOMJBQFNWQZSULJZTBIMJOKJOBGGJVONVUUTOTSONQZGGL");
    const signed char tmp_msg_0[] = {-35, 92, -78, 64, -32, 97, -81, 80, 104, -95, 87, 56, 57, -12, 84, 107, 20, 79, 40, 29, 100, -114, 69, 95, -125, -86, 81, -127, 16, 53, 126, 10, 2, -124, -103, 25, 44, -83, -16, -62, 112, 33, 47, 81, -16, -127, 19, 74, -48, -99, 61, -13, -23, -95, -122, 101, 81, -115, 103, 26, 114, -30, 80, 35, 17, 42, -112, 16, 30, -53, -69, 77, -78, -45, -13, 53, 29, -59, 45, -29, 48, -125, -10, -99, 67, 34, -11, 47, -53, -67, 26, 34, -58, -39, 91, 54, 67, -89, -3, 117, -83, 89, -2, 85, -32, 102, -94, -106, 32, 94, 28, -102, 23, -79, -109, -93, -89, -19, 63, 64, 32, 62, 105, -30, -58, 78, -27, 111, 26, -96, 14, -81, -11, -76, -95, -54, -123, 94, -10, -22, 16, 112, 60, 74, -36, 126, 94, 74, 66, -66, 74, -50, -88, 56, -28, 96, 33, -24, 42, 15, -128, 113, 24, -26, -26, 40, -27, -104, 104, 13, -124, 97, 9, -110, -8, 35, -98, -23, -79, -31, -68, 14, -45, -68, 93, -124, 94, 21, 21, 68, -112, 83, -69, -118, -123, -8, 86, 45, 121, 64, -82, 71, 105, -97, -111, -15, 98, 106, -12, -36, 27, -122, -5, 126, 83};
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
    msg.setTimeStamp(0.03820518939032569);
    msg.setSource(64114U);
    msg.setSourceEntity(70U);
    msg.setDestination(16257U);
    msg.setDestinationEntity(113U);
    msg.source.assign("IYEFXGCICHTLRPWHTHIBFGSMWTUZXWXDAOPSCADWKYEYMVOOMLPMJXFRFY");
    const signed char tmp_msg_0[] = {111, 115, -10, 54, -84, 17, -100, 97, 6, 16, -83, 39, -74, -106, -104, 33, -62, -127, -27, 63, 33, 7, -83, 73, 106, -18, -7, -67, 43, 29, 36, -114, -84, 104, 93, 26, -24, 104, -108, -79, 35, -86, 92, -38, -5, 39, -70, -28, 61, 26, -55, -119, 59, 20, -35, -72, -71, 4, 19, -112, -116, -111, 5, -95, -97, 99, 107, -94, -8, 41, 65, 16, 126, 114};
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
    msg.setTimeStamp(0.9843003282046545);
    msg.setSource(47999U);
    msg.setSourceEntity(203U);
    msg.setDestination(57754U);
    msg.setDestinationEntity(22U);
    msg.source.assign("UWSQZZIWVRROAZBYMCSIXZINLTVLSHNGZPOBOQOGIQXMXYKFTLYMESIVIANNSADTMGCXJKJSHFCPDONRFHUYQUHFHTQMNRLEJJCKAJWWDKGYETLUZTBIIYYNLPARONFABIGXFREXMGQYUPFWVCEQBUTCPXKNNSPHFSBYZVWGDLDADZX");
    const signed char tmp_msg_0[] = {77, -58, 38, -108, -114, -12, -72, -104, -5, -23, -88, 81, 12, -112, -79, -11, -123, 43, -36, -58, -85, 84, 52, -99, 10, -67, -83, 61, -70, -69, -71, -33, -21, -9, -2, 112, -101, -91, -114, 123, -10, 6, -22, 1, 5, 49, -49, 110, -107, 43, 67, 32, 77, 89, 104, 77, 39, 83, 90, -118, -21, 57, -9, -101, 69, 17, 93, 99, 40, 19, 61, 55, 77, -34, 68, 120, 23, -104, -7, -125, -111, 38, -37, -72, 54, 27, 120, -121, 19, 65, -32, -107, -40, 25, 39, 88, 123, -92, -44, 76, -90, -58, 30, 31, -25, -58, 81, 37, -72, -122, 36, -32, 34, -22, 63, -128, -81, 8, 18, 91, -127, -48, -20, -15, -28, -119, 123, -21, 56, -60, 124, 105, 82, 95, -47, 63, -41, -19, 119, 43, 42, -12, -117, -75, -119, -46, -85, -113, -52, 41, 3, -51, 103, -90, -33, -112, 83, 85, -108, -109, 32, -128, -29, -6};
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
    msg.setTimeStamp(0.9124017653838603);
    msg.setSource(16463U);
    msg.setSourceEntity(103U);
    msg.setDestination(28033U);
    msg.setDestinationEntity(78U);
    msg.seq = 388128879U;
    msg.state = 18U;
    msg.error.assign("MGZHSJAWKASUVYFDYDANYHLUQFZNTIZYGHFQFZGLSFJHMUXOLDTLCICDBKCJPWWQELKBEROUAKJWBRYTRNFJXCDKPCPQBYDRMRXDVUWULTQPEKMOMSUOBDZUZPIEEQRGRVBIVLNINMVDISXPBAWKJNJSFVRAXVYHWGNSIBQPHTLHDUOQIXTIEQNFVU");

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
    msg.setTimeStamp(0.37983282318857126);
    msg.setSource(63028U);
    msg.setSourceEntity(172U);
    msg.setDestination(54803U);
    msg.setDestinationEntity(126U);
    msg.seq = 2775385419U;
    msg.state = 145U;
    msg.error.assign("OBVDTJRNFETHMQMVETWKPQOZPQGGRQXILEJRYZBRF");

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
    msg.setTimeStamp(0.3076326956322989);
    msg.setSource(57679U);
    msg.setSourceEntity(144U);
    msg.setDestination(12669U);
    msg.setDestinationEntity(229U);
    msg.seq = 1835030403U;
    msg.state = 110U;
    msg.error.assign("DIVBSGGZKFBEZWUGQNJCKJQNTWUMOAMXVPRLCOWRDVMEZCNKXJLOJDDBSUSQANAWTVGNFZLXVQBYZMDSJGYPQONCXWKHUFQFUXWPWZGZXKOYLQHRHCBJSYEBLIGITR");

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
    msg.setTimeStamp(0.883942174362695);
    msg.setSource(63705U);
    msg.setSourceEntity(45U);
    msg.setDestination(43835U);
    msg.setDestinationEntity(82U);
    msg.origin.assign("PJPBLYVSRHMYPFDNTZKWJFKAZNGSDKKMIPGVNJOTHVFKMGFZLXCBCU");
    msg.text.assign("DSVOPSNSAIGUBRIBOOUQHJLWQVFKCWUIPTZJBGTPQVVGFBZKDWEYISOAJIJGLKUEAYYJPMXVUNXWWBARSWSJDTMCDRQCOXQHAXYZUZMVRHSFFQNFOAFMRTDFDTFWYVRNOQEKGCMX");

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
    msg.setTimeStamp(0.3474901808427968);
    msg.setSource(20442U);
    msg.setSourceEntity(244U);
    msg.setDestination(32855U);
    msg.setDestinationEntity(216U);
    msg.origin.assign("ACSNAHQCHMGODYZDTKSJZPIOGBANZSAQMIMTKZPLMWHWPFGKZIQHDBVNPQORVJQWTRMCTJPIOQEWVGFNEDFUJWZUFNLKJVLCYRRJEQRVGLXULIVLZEIZKLSCSCFXNDFXBLSARTPZNCADYHSUNBGSYGCRERNVZOGHWRAEYOIVIXEKWMHCFU");
    msg.text.assign("SBKWWIDEPGOFMNDQLXARUEICAMDYPSZUTAYHHCV");

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
    msg.setTimeStamp(0.19457556291745048);
    msg.setSource(2857U);
    msg.setSourceEntity(190U);
    msg.setDestination(21454U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("JQGYNUWFZZSVFTRLZFAPBNPRBLKODHWNJJAOHJVIROQLKKUGNRSPRBTWUUGRSATBUNEGXHNQJQEMJODICGBDWGEWPEHSOQXQUCYAXACLRFORNYAIFIMWKJKTMNFERDSZGPYVLBZLMFEZEIBHHFZAZLXAIQBILVWXVBCSDDXTVGAQYUFICJTOCIYCWPQUYXMTSLOPCYBTDK");
    msg.text.assign("GIXRBKWBJDDINSBJTEUOZSRCZFFYKFKBOAAPDOEOPYNDGOVJYDNUTGGVPZCVQBQMIXHSKVJTLQLFLBRKJVGFXBFRWPANXEGRCVNZXSXNIMTYVUORTYRIKHNIHERWNUWWLQHCPDERLYBKVDTXLOGCUXKZSKBSSAA");

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
    msg.setTimeStamp(0.40706069608185946);
    msg.setSource(18082U);
    msg.setSourceEntity(24U);
    msg.setDestination(2308U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("OWQFCUWUNCHGPANOUKNIMRQDLMRAQVMOHCWQKHXPPFCNNLRDRYXZGAVVPHJKITKBDSKFEZTNBKYBORLVATXZHAMWTJDDVAMNPZTPUXGYWLPCFOTLZPLYHYZGOVIDSANDZJJLYQFMKDEISAISLAXOBGICGTJBXNIJYKUUITARGMZVNSXGZRVKBEWCKYIRDCYFBLDQOSPGRUEESFMEWFJMXEFEJYQWXJSJHHFSGTRQVOEQCIZEBBQTMUWHOSP");
    msg.htime = 0.7072954108880032;
    msg.lat = 0.7806596236092248;
    msg.lon = 0.8467195476588422;
    const signed char tmp_msg_0[] = {-87, -72, -4, 79, 79, 13, 38, -91, -120, -17, -28, 5, 31, -47, 103, 53, 21, 53, 59, -5, -78, 3, -112, 5, -9, 49, -31, -37, -115, -89, -128, -120, -33, -63, 124, -96, 51, 106, -58, -7, 22, -125, -83, 102, -121, -106, -4, 118, -124, -40, 50, 71, 113, -60, -58, 43, 48, -27, 18, -39, 122, 9, 49, 123, -36, -33, 30, 105, 122, 72, -114, -6, -100, 98, 40, 18, -109, 101, -37, -117, 20, -110, -118, 106, -18, -71, 78, 61, -40, -35, -70, -13, -123, 82, 82, 115, 23};
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
    msg.setTimeStamp(0.5061815744647961);
    msg.setSource(37417U);
    msg.setSourceEntity(234U);
    msg.setDestination(35653U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("EUBQGZKSHTPXDQDWBZGSQMMMKPLKUYIIFNLIYGWOLJRENVXAZQPFZLHRIBTOUXJUGBSKTMJLYSVOGYRJWYMIAJAESVMFMPGISWBWXBKTDTHPFBREDEEZNJXZKULXVCACCZLFEOQCMYVYNCDATOOVSNXEADORTNNHZKHMWVFFPGKJDKFHFXCZDRCHROUDWZWMNOAQRIJJTIRVYYPGUQYQXVBRQUULSHI");
    msg.htime = 0.9695275216047562;
    msg.lat = 0.15768620121090926;
    msg.lon = 0.18667446426842849;
    const signed char tmp_msg_0[] = {18, -75, 52, 37, -118, -42, 8, -15, -35, -75, -7, 114, 18, -124, -93, -79, 40, -24, 116, -53, 31, -78, 40, 90, -6, 3, 38, -20, 86, -95, -53, 75, -63, -55, 103, -85, 73, 65, 62, -58, -118, 13, -12, 26, -35, 0, -40, -10, -45, 91, -63, 116, 11, 2, 116, -28, 108, -52, -33, -124, 111, 108, -112, -47, -86, 11, -46, -87, -91, 74, -125, 104, 64, -107, 24, 73, -12, -67, -126, -60, -65, 52, 82, -43, -55, 58, -1, -38, 107, 39, -96, -127, -69, 23, -60, 2, 64, 18, 73, -34, 61, 37, 9, 8, -75, -15, -14, -63, 96, 29, -74, -7, 123, -4, -128, 65, 115, 6, -44, -103, -48, 96, 100, -47, -19, 94, 20, 90, -81, 51, -30, -87, -102, 104, -61, -121, -98, -31, -21, -4, 123};
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
    msg.setTimeStamp(0.6271392338054808);
    msg.setSource(61146U);
    msg.setSourceEntity(40U);
    msg.setDestination(53568U);
    msg.setDestinationEntity(180U);
    msg.origin.assign("DBZIXPXWVUNMINECZWCCEPOHGYYOXUUNQRNFOPWOPZHHDXLWSSXXZDJCGSLNV");
    msg.htime = 0.8505087727494377;
    msg.lat = 0.4695975410672347;
    msg.lon = 0.7818817255426519;
    const signed char tmp_msg_0[] = {31, -124, 29, 57, -93, 79, -100, 99, -21, -109, -7, 109, -82, 120, -47, 50, 54, -67, -29, -122, -7, -83, 120, -122, -90, -56, 84, 69, 104, 59, -59, 119, -1, -92, 112, 88, 76, 104, -125, 108, 61, 47, -80, 57, -89, -70, 108, 105, 14, 0, 8, 21, 40, -18, -100, -11, -84, 67, 43, -125, -65, -73, -118, -38, -35, -39, -33, -25, 107};
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
    msg.setTimeStamp(0.3449777025778259);
    msg.setSource(20700U);
    msg.setSourceEntity(55U);
    msg.setDestination(49514U);
    msg.setDestinationEntity(67U);
    msg.req_id = 56575U;
    msg.ttl = 59507U;
    msg.destination.assign("DQLMDVEEFPHXYZYARZJDXYUKFHVQJNZPLOFVYGJTXKOGVBIZRPQEZRQEIMMUWFRUSEFBHTMGKOCVICNMPTNGLJETIYLWNQVMRSNKCBHIBXWYPTFTOZMEABDUSALUWBLNCUCBHZHSRNZIODLTGWJGWVSFEQGRCVWDJBPDAOVWVQJSUYRRCHHFTGDAAZLBJIKLOKEFKHQUXXNOAJQADGYSQSBUZWSYUIC");
    const signed char tmp_msg_0[] = {30, -103, -27, 122, 23, -89, 104, 3, -47, -45, 31, 71, 90, 68, 7, -94, 3, -110, 10, -12, -40, -76, -111, 92, 103, 55, 126, 32, 62, -91, 47, 97, 71, 20, 41, -106, -49, -126, 6, -103, 124, -2, -93, 12, 64, -11, -28, -90, -31, 107, 106, 74, -80, -73, -128, -59, -5, 95, 59, 111, 69, 17, 109, 35, 96, -104, -49, -47, 17, 119, -7, -46, 44, 46, -55, -32, 121, -57, 91, 26, 19, 115, 10, 51, -51, -73, 80, 4, 6, 35, -9, 117, 57, 74, -52, 29, -73, -125, -64, 78, -107, 74};
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
    msg.setTimeStamp(0.48186653524970324);
    msg.setSource(62260U);
    msg.setSourceEntity(178U);
    msg.setDestination(30106U);
    msg.setDestinationEntity(245U);
    msg.req_id = 63676U;
    msg.ttl = 19792U;
    msg.destination.assign("PLOBOXWHIWWNLEJJJMGEZVOILRXDIHJBDHSNTAERKKNVKSCLFUCHEMLWWWNZTMNTFVTGAQXOZTXZXGEYLFSSXIIPAUPTCLQMM");
    const signed char tmp_msg_0[] = {-77, -90, 5, 77, 116, -37, 82, -103, -128, 11, 101, -46, -64, -101, 6, 39, 31, 32, 65, -110, 27, 48, 77, 93, -3, 23, 119, 97, 57, 64, -104, -120, -9, 6, 22, -82, 76, -100, -86, 112, -49, -55, 119, 75, 99, 42, -39, 66};
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
    msg.setTimeStamp(0.595303730616727);
    msg.setSource(17932U);
    msg.setSourceEntity(49U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(237U);
    msg.req_id = 62920U;
    msg.ttl = 61057U;
    msg.destination.assign("MWUOBCYSRJNZPSKMPNIBNTXYZIVIEMQQONEPMH");
    const signed char tmp_msg_0[] = {46, -103, 116, -32, 82, 6, 49, 112, -96, -55, -51, -85, -3, 87, -37, 105, 87, 94, -50, 48, 62, 89, -43, 67, 44, -17, 27, -115, -119, -85, 14, 57, 88, 75, 52, -77, 12};
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
    msg.setTimeStamp(0.04681861928144826);
    msg.setSource(52658U);
    msg.setSourceEntity(133U);
    msg.setDestination(14177U);
    msg.setDestinationEntity(190U);
    msg.req_id = 26654U;
    msg.status = 71U;
    msg.text.assign("ELDIPHCPDKEJJXWYPUGYHDCISXSMIOUUQTLTFFFHGJLQCVGIOCKEZWRQTESZFYZHDSRUMJVCDAXAHZLNGYKYFVCNXYEURQJAXNEOZWMBRHWAGBFHBBNGOPZJFXNBYKKKBIQETUVALMSW");

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
    msg.setTimeStamp(0.519095754999313);
    msg.setSource(56292U);
    msg.setSourceEntity(245U);
    msg.setDestination(40048U);
    msg.setDestinationEntity(78U);
    msg.req_id = 18637U;
    msg.status = 49U;
    msg.text.assign("YLVFRZSQGOSMJADNOKDWARSJLDQRANFXMKPIPEBBYXGKVYDZAAZJNBOWYAUMHIPBXFOUESTHDQWOXAGYVKZAWJDZVLYGXLUCEUWWBYKFZKHIFATDGMHPTCVEENCYHQOFNRSNMNUTVGGHXAZLO");

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
    msg.setTimeStamp(0.7610556754190725);
    msg.setSource(49012U);
    msg.setSourceEntity(82U);
    msg.setDestination(11482U);
    msg.setDestinationEntity(66U);
    msg.req_id = 870U;
    msg.status = 97U;
    msg.text.assign("AWFYAGQJLKSBWTOAWLWUEBHHVJGREPUMCRTFXKACEFEAGMMBFQPQKGFXBPMEZKRQFZXKGJDPCOTHREWCHCDDXVBZYHNXALIPLQMOUTQPJDYTVSNSPKIMOSNOIIBXXLGZJLSTUTACGCXBSGWKADMULYOMDENFHKZUVRFBERGLFTCVPOJPQDZFQ");

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
    msg.setTimeStamp(0.5647160381324875);
    msg.setSource(53663U);
    msg.setSourceEntity(238U);
    msg.setDestination(45798U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("VUDCJQFAWPKWZUZDNXUZKESINCIQDRCLTUTTHXNHGFVOHGMCRXNFSHPFEYYUGJBEEOOIKLFSSYMWTKMRKAOTYKZZMMAAFEOHFBNAZDQAHXNVURHCQBNNVJRWOEWGPVPCAWBKCIFTGDTILKEBFYKUPWSUMXGHZBGR");
    msg.links = 3812625457U;

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
    msg.setTimeStamp(0.759698289038344);
    msg.setSource(50261U);
    msg.setSourceEntity(13U);
    msg.setDestination(11344U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("DTBTPJDRILZRYOM");
    msg.links = 3669535649U;

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
    msg.setTimeStamp(0.7777850285673703);
    msg.setSource(55928U);
    msg.setSourceEntity(5U);
    msg.setDestination(57545U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("RBXHARZFNVVWODSBTLHQNCGNDEPUQEJQLTA");
    msg.links = 2815482119U;

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
    msg.setTimeStamp(0.6603473347857522);
    msg.setSource(14434U);
    msg.setSourceEntity(231U);
    msg.setDestination(20674U);
    msg.setDestinationEntity(31U);
    msg.groupname.assign("POCQOUTGYZ");
    msg.action = 155U;
    msg.grouplist.assign("NLDPHSSMFPZUSYVDNNZAYFHGJJBTZRKJICGRAZAVPLVXPWHMXKUNOONZQGRPGDARBOCVJLOQYEMMZIRIISPQYEGUEKJVSZACIFMEVAWZVCTPZFDCKWBTFRXIMDRETFTNQWLHWBMFTXXTGYGXSQOKLHLGCKXYNIQLMFJEOAQSHVSQKDOPOMIIFUPBSLSHNIHUYPDNVUJFUKODYEYCOBBAULRWJWG");

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
    msg.setTimeStamp(0.6211719289002927);
    msg.setSource(52670U);
    msg.setSourceEntity(234U);
    msg.setDestination(42358U);
    msg.setDestinationEntity(205U);
    msg.groupname.assign("UGMMJGZXBROCBQGULHPEZUCHPQC");
    msg.action = 50U;
    msg.grouplist.assign("TQXESSYXDVNIVHFNXYYMVSFUJOLCUQLEHMUIKJCUTMDVLTQ");

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
    msg.setTimeStamp(0.42748064038987366);
    msg.setSource(41884U);
    msg.setSourceEntity(115U);
    msg.setDestination(58668U);
    msg.setDestinationEntity(58U);
    msg.groupname.assign("SQYELWFCAQFMMGGLYTCAUHLWQUBGD");
    msg.action = 129U;
    msg.grouplist.assign("VYTQHLEJDJKQGCTYCLFWQFFJYROUXNKUAIZSCZFZHMTKXGRDKRNXASJXYPTMDXWFDARKJBHZGHONUUULEVGHUIRCYPIIJCCYRBDHOWJEJVTLOQTINOKLQDXLIYNCSGIVDKFBEOEZVQNIBSHWXGANKFPZCQVBZWZMPHMBUEODUOZRAPVKE");

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
    msg.setTimeStamp(0.8224302416536192);
    msg.setSource(11719U);
    msg.setSourceEntity(207U);
    msg.setDestination(8070U);
    msg.setDestinationEntity(254U);
    msg.value = 0.19535065027925036;
    msg.sys_src = 37864U;

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
    msg.setTimeStamp(0.20497107844983553);
    msg.setSource(57931U);
    msg.setSourceEntity(221U);
    msg.setDestination(18387U);
    msg.setDestinationEntity(18U);
    msg.value = 0.4657899298730612;
    msg.sys_src = 42160U;

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
    msg.setTimeStamp(0.4197392694956631);
    msg.setSource(24246U);
    msg.setSourceEntity(145U);
    msg.setDestination(31483U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4641466514722916;
    msg.sys_src = 57211U;

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
    msg.setTimeStamp(0.4549848351470076);
    msg.setSource(42450U);
    msg.setSourceEntity(160U);
    msg.setDestination(22359U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4599504700379382;
    msg.units = 0U;

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
    msg.setTimeStamp(0.09464223536243432);
    msg.setSource(7646U);
    msg.setSourceEntity(98U);
    msg.setDestination(52829U);
    msg.setDestinationEntity(136U);
    msg.value = 0.8138356962931506;
    msg.units = 15U;

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
    msg.setTimeStamp(0.16727413174827432);
    msg.setSource(31692U);
    msg.setSourceEntity(45U);
    msg.setDestination(57699U);
    msg.setDestinationEntity(41U);
    msg.value = 0.8190206656553224;
    msg.units = 97U;

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
    msg.setTimeStamp(0.45194340460944027);
    msg.setSource(9904U);
    msg.setSourceEntity(1U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(19U);
    msg.base_lat = 0.5044919721031779;
    msg.base_lon = 0.37056448251260976;
    msg.base_time = 0.7734608743162055;

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
    msg.setTimeStamp(0.6304681208257569);
    msg.setSource(53842U);
    msg.setSourceEntity(240U);
    msg.setDestination(23775U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.022357726256331922;
    msg.base_lon = 0.9408831311540818;
    msg.base_time = 0.6358688094360281;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 53057U;
    tmp_msg_0.priority = -128;
    tmp_msg_0.x = -19131;
    tmp_msg_0.y = 5093;
    tmp_msg_0.z = 6201;
    tmp_msg_0.t = -32458;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7465591293811046;
    tmp_tmp_msg_0_0.z_units = 140U;
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
    msg.setTimeStamp(0.16287879678163242);
    msg.setSource(32793U);
    msg.setSourceEntity(155U);
    msg.setDestination(59959U);
    msg.setDestinationEntity(92U);
    msg.base_lat = 0.9225925292210072;
    msg.base_lon = 0.07118967088612327;
    msg.base_time = 0.43559602609926795;

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
    msg.setTimeStamp(0.08849959119047834);
    msg.setSource(20912U);
    msg.setSourceEntity(182U);
    msg.setDestination(48888U);
    msg.setDestinationEntity(119U);
    msg.base_lat = 0.009583033213670045;
    msg.base_lon = 0.767538888392814;
    msg.base_time = 0.1923352684546502;
    const signed char tmp_msg_0[] = {-66, -4, 50, 24, 119, -22, 117, 99, 41, -42, -99, 79, -31, 120, -77, 116, -64, 50, 106, -55, -101, -16, -57, -29, 125, 93, 12, -8, 30, -110, 105, -127, -68, -98, -74, -89, 106, -55, -95, -110, -42, -86, 57, 32, -55, -50, 50, 114, 0, -111, 58, -105, -128, 22, 75, -16, 31, -74, 17, 69, -72, -94, -30, 110, -83, 60, 0, -6, 48, -77, -88, -13, -51, -116};
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
    msg.setTimeStamp(0.22553344106275597);
    msg.setSource(14845U);
    msg.setSourceEntity(114U);
    msg.setDestination(3319U);
    msg.setDestinationEntity(24U);
    msg.base_lat = 0.10001391186062136;
    msg.base_lon = 0.9633602820615189;
    msg.base_time = 0.6756794100833378;
    const signed char tmp_msg_0[] = {-95, 92, -10, 123, 121, 3, -92, 59, 60, -112, -94, -23, 22, -26, 13, 42, -94, 13, 118, -104, 116, 81, -85, -83, 58, -58, -61, -81, 44, -86, 15, -14, -105, -91, -96, -81, 30, -45, -1, -124, 22, -109, -14, 30, -81, -26, 122, 46, 93, 101, 45, -19, 10, -85, 56, 63, -18, -77, -108, -32, -95, -104, 57, 68, 30, -47, 81, -35, -9, -11, 57, -61, 101, 71, -73, 96, 54, 1, -78, 81, -61, -127, 69, -16, 123, 98, -100, -58, 17, -15, 55, 57, 8, 59, -24, 48, 12, 54, 45, 47, -10, -101, 67, -107, -110, -91, -66, 22, 104, 18, -111, 21, 92, -113, 116, 121, -13, 87, 108, -56, 40, 19, -33, -60, 117, -7, 59, -121, 42, -98, -77, -109, -78, 115, -128, -35, -28, -106, -94, -88, 1, 123, -44, -125, 16, -105, -70, -35, 55, 80, -59, 29, 118, 47, -51, 97, 102, 44, 110, -67, -39, -118, -73, -94, 56, -83, -35, 114, 112, -3, -52, -31, -97, -119, 118, 38, 54, -110, -95, -76, 43, -73, -3, 125, 40, 34, -19, -40, 73, 75, -85, 100, -31, -31, 75, -69, 15, -71, 64, 117, -51, -78, 49, 97, -1, 86, -69, 105, 60, -94, 24, -118, -105, -61, 25, -128, 106, 29, 113, -32, 25, -91, -6, 55, 5, 96, -37, 2, -19, -101, 50, 19, 118, -83, 36, -58, 61, 0, -34, 102};
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
    msg.setTimeStamp(0.7949922265922843);
    msg.setSource(34360U);
    msg.setSourceEntity(159U);
    msg.setDestination(28752U);
    msg.setDestinationEntity(216U);
    msg.base_lat = 0.8380896153910607;
    msg.base_lon = 0.8885919014717989;
    msg.base_time = 0.49205187700740305;
    const signed char tmp_msg_0[] = {94, 46, -25, 93, 26, -116, 26, 115, 85, 4, -124, 1, 8, 57, -99, 48, 25, 90, -52, -100, 83, 73, -40, 10, -36, -90, -8, 84, -122, 80, 65, -108, -71, 92, 26, -82, -80, 18, 43, 59, 84, -39, -32, -13, 69, -94, 6, 7, -102, -124, -126, -49, -19, -9, 89, -48, -84, -81, -52, -114, -92};
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
    msg.setTimeStamp(0.9209185676131078);
    msg.setSource(37421U);
    msg.setSourceEntity(190U);
    msg.setDestination(51161U);
    msg.setDestinationEntity(137U);
    msg.sys_id = 62949U;
    msg.priority = -36;
    msg.x = -14952;
    msg.y = 10659;
    msg.z = -14773;
    msg.t = 24426;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.4307315192833142;
    tmp_msg_0.speed = 0.8401374035369505;
    tmp_msg_0.turbulence = 0.5289778472541414;
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
    msg.setTimeStamp(0.6400607916860034);
    msg.setSource(54555U);
    msg.setSourceEntity(40U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(236U);
    msg.sys_id = 6393U;
    msg.priority = -66;
    msg.x = 22130;
    msg.y = 28985;
    msg.z = -5232;
    msg.t = 30229;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9144783118678081;
    tmp_msg_0.y = 0.5284950905903385;
    tmp_msg_0.z = 0.6388689956646053;
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
    msg.setTimeStamp(0.7763760152155131);
    msg.setSource(61233U);
    msg.setSourceEntity(66U);
    msg.setDestination(38329U);
    msg.setDestinationEntity(187U);
    msg.sys_id = 23107U;
    msg.priority = -69;
    msg.x = 13660;
    msg.y = -21018;
    msg.z = -18124;
    msg.t = -21855;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.8129652879001018;
    tmp_msg_0.lon = 0.15203759253557625;
    tmp_msg_0.speed = 0.008419894736565237;
    tmp_msg_0.speed_units = 196U;
    tmp_msg_0.duration = 43566U;
    tmp_msg_0.sys_a = 46207U;
    tmp_msg_0.sys_b = 56920U;
    tmp_msg_0.move_threshold = 0.9255314406734938;
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
    msg.setTimeStamp(0.21733695435463285);
    msg.setSource(13608U);
    msg.setSourceEntity(121U);
    msg.setDestination(54178U);
    msg.setDestinationEntity(185U);
    msg.req_id = 31621U;
    msg.type = 104U;
    msg.max_size = 37393U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6419007881076079;
    tmp_msg_0.base_lon = 0.103104999235625;
    tmp_msg_0.base_time = 0.2538073041867662;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 46392U;
    tmp_tmp_msg_0_0.priority = 71;
    tmp_tmp_msg_0_0.x = -10899;
    tmp_tmp_msg_0_0.y = -2327;
    tmp_tmp_msg_0_0.z = 27625;
    tmp_tmp_msg_0_0.t = -18951;
    IMC::NavigationUncertainty tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.5299398033258529;
    tmp_tmp_tmp_msg_0_0_0.y = 0.6203185373782253;
    tmp_tmp_tmp_msg_0_0_0.z = 0.04054800762453514;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.43581954696913994;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.4956442373224138;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.6473606849330749;
    tmp_tmp_tmp_msg_0_0_0.p = 0.4306226787868078;
    tmp_tmp_tmp_msg_0_0_0.q = 0.6595503611145784;
    tmp_tmp_tmp_msg_0_0_0.r = 0.6602911908851733;
    tmp_tmp_tmp_msg_0_0_0.u = 0.7556493711146922;
    tmp_tmp_tmp_msg_0_0_0.v = 0.5311848657966569;
    tmp_tmp_tmp_msg_0_0_0.w = 0.006144935770037274;
    tmp_tmp_tmp_msg_0_0_0.bias_psi = 0.5976103738990269;
    tmp_tmp_tmp_msg_0_0_0.bias_r = 0.06762145394301522;
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
    msg.setTimeStamp(0.8794139652492379);
    msg.setSource(62090U);
    msg.setSourceEntity(185U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(233U);
    msg.req_id = 7860U;
    msg.type = 7U;
    msg.max_size = 44952U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5371271862904392;
    tmp_msg_0.base_lon = 0.06395897121667482;
    tmp_msg_0.base_time = 0.7950427253406837;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 48489U;
    tmp_tmp_msg_0_0.destination = 5640U;
    tmp_tmp_msg_0_0.timeout = 0.9811705859889553;
    IMC::GroupMembershipState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("WJUWMYGZMLDNEUIMUOHZEAXBCBPMBVSBZHPJHPVDFKBRBYZMAISHRJGMNOEVNOYCWHIVEKYXRMQPUPWICTQWCODPDJLZTQGVVPKJBFRVKDPNNSNEYPKAYMEZUWXKZSVKGJMIUGCPRE");
    tmp_tmp_tmp_msg_0_0_0.links = 916032517U;
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
    msg.setTimeStamp(0.28176413451539584);
    msg.setSource(46933U);
    msg.setSourceEntity(23U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(23U);
    msg.req_id = 43929U;
    msg.type = 69U;
    msg.max_size = 38456U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3180705998935158;
    tmp_msg_0.base_lon = 0.19687404582112455;
    tmp_msg_0.base_time = 0.9119497649668648;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 21217U;
    tmp_tmp_msg_0_0.priority = 66;
    tmp_tmp_msg_0_0.x = 22896;
    tmp_tmp_msg_0_0.y = 10960;
    tmp_tmp_msg_0_0.z = 7838;
    tmp_tmp_msg_0_0.t = -18038;
    IMC::VehicleState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op_mode = 162U;
    tmp_tmp_tmp_msg_0_0_0.error_count = 56U;
    tmp_tmp_tmp_msg_0_0_0.error_ents.assign("GXSUNOIGPBSDWFQYQNFCQZTDYSULJBEMTXXZEFJAE");
    tmp_tmp_tmp_msg_0_0_0.maneuver_type = 61851U;
    tmp_tmp_tmp_msg_0_0_0.maneuver_stime = 0.7791765907318151;
    tmp_tmp_tmp_msg_0_0_0.maneuver_eta = 48949U;
    tmp_tmp_tmp_msg_0_0_0.control_loops = 1873953987U;
    tmp_tmp_tmp_msg_0_0_0.flags = 68U;
    tmp_tmp_tmp_msg_0_0_0.last_error.assign("IDIEBXZLUGQXQAFSAFHIVJWBQXLOYZAEYTPPXYUIKYCWOWNXSCJHECVUPGCYFYHMYJ");
    tmp_tmp_tmp_msg_0_0_0.last_error_time = 0.8266526767424404;
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
    msg.setTimeStamp(0.351237002775167);
    msg.setSource(32909U);
    msg.setSourceEntity(12U);
    msg.setDestination(30414U);
    msg.setDestinationEntity(169U);
    msg.original_source = 20930U;
    msg.destination = 8371U;
    msg.timeout = 0.3228207780246206;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.3089543979251955;
    tmp_msg_0.x = 0.7356506547737365;
    tmp_msg_0.y = 0.3914412463578769;
    tmp_msg_0.z = 0.7991259474077367;
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
    msg.setTimeStamp(0.5618659510692094);
    msg.setSource(55541U);
    msg.setSourceEntity(109U);
    msg.setDestination(28116U);
    msg.setDestinationEntity(127U);
    msg.original_source = 19425U;
    msg.destination = 16654U;
    msg.timeout = 0.07855762282809742;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.709471629862593;
    tmp_msg_0.y = 0.9313091514956252;
    tmp_msg_0.z = 0.9641106022941379;
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
    msg.setTimeStamp(0.7827134717914598);
    msg.setSource(46795U);
    msg.setSourceEntity(61U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(5U);
    msg.original_source = 35647U;
    msg.destination = 4653U;
    msg.timeout = 0.7680662131321938;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.02958386334914931;
    tmp_msg_0.lon = 0.5458355422406821;
    tmp_msg_0.height = 0.6767768887190252;
    tmp_msg_0.x = 0.8014100378321507;
    tmp_msg_0.y = 0.11194686964331868;
    tmp_msg_0.z = 0.3405251983186922;
    tmp_msg_0.phi = 0.5516312488277973;
    tmp_msg_0.theta = 0.9926517219270999;
    tmp_msg_0.psi = 0.18687680661195694;
    tmp_msg_0.u = 0.24659693087194046;
    tmp_msg_0.v = 0.40106584957686664;
    tmp_msg_0.w = 0.8433097858670797;
    tmp_msg_0.vx = 0.06645486760493069;
    tmp_msg_0.vy = 0.8239184344300697;
    tmp_msg_0.vz = 0.22486248468578418;
    tmp_msg_0.p = 0.8102575891062538;
    tmp_msg_0.q = 0.7262008336142536;
    tmp_msg_0.r = 0.6495596893002493;
    tmp_msg_0.depth = 0.908512912904757;
    tmp_msg_0.alt = 0.5181275999801751;
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
    msg.setTimeStamp(0.9622551551765219);
    msg.setSource(15385U);
    msg.setSourceEntity(29U);
    msg.setDestination(40710U);
    msg.setDestinationEntity(253U);
    msg.type = 215U;
    msg.comm_interface = 23684U;
    msg.model = 44561U;
    msg.list.assign("TVNJJIHMCEUEDUODAMRTSBBAMGNXTVXJMXCFPCRZPQT");

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
    msg.setTimeStamp(0.8129003519812847);
    msg.setSource(6136U);
    msg.setSourceEntity(236U);
    msg.setDestination(45526U);
    msg.setDestinationEntity(208U);
    msg.type = 76U;
    msg.comm_interface = 57196U;
    msg.model = 27132U;
    msg.list.assign("NOKQTICMTFCFZSFQGKOOTJBVYARMZZWPIXMLXVWVOYLZQZXWQYLLMPMLHHJSEGUPTQHFWNZCIKMXBVRLGNBIRGFSUEFJNSDWKQPBJZVZIAPYNBWUDVPEUMYCHQEEGTQMKXNTJKSJLUHQTCJDTRXDSAWT");

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
    msg.setTimeStamp(0.5024412041346248);
    msg.setSource(27641U);
    msg.setSourceEntity(214U);
    msg.setDestination(56714U);
    msg.setDestinationEntity(56U);
    msg.type = 2U;
    msg.comm_interface = 51984U;
    msg.model = 45667U;
    msg.list.assign("KNFYGOIKWJXKQJPZSRHRPDNDXTBREWGHUNNYYJBMYDSTCATGNIEMHLOQJMZVCDLEXAYEURCFMAHOFTWHVUBRATUPJVZEBZGLXGLPOFFPSAQTZRWAJPVNXEZEACGJLDYS");

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
    msg.setTimeStamp(0.23463674145803393);
    msg.setSource(7594U);
    msg.setSourceEntity(25U);
    msg.setDestination(50032U);
    msg.setDestinationEntity(178U);
    msg.type = 7U;
    msg.req_id = 1488244682U;
    msg.ttl = 25259U;
    msg.code = 102U;
    msg.destination.assign("ZCFLCOKYIHAYWLPVWURRAZJHJGDWUFNQINFAPDGAWDGFMXQPRTJDCQLOMHTIBCPEYQSCXXCYBDBQSTGQKSINNLMBTFQZLONOARAIJDHAUJZQEVCLVNGTUERPNXRTDKMVYVMDZERTWOWHENEAKFBSHSIBDXJZUGSMIOGGQCWMSZKVWRIPYLOEVFZFTVYXAUXEZJWLIBOSCUBXDRXXGMYVKNVKLJNHJUT");
    msg.source.assign("JANWMBTMDXEJKRMFRKQGNTTUDZNFGMTUPKBVHIAWLBYIXFRXGRCEJQFYNYAVYCNBYLPBTUPHPSYZIMUYNOUHQKXSKBDCNAETSWSBORJDJZTHIKXQSZRJBQOFVKPUXLABZLNSGTCVAAAUQZHOMFIBERQTWHOEXEOPHDZKIMMLGREWDFIATINXUDPEQCUMORONWHCDEGJCVWI");
    msg.acknowledge = 113U;
    msg.status = 120U;
    const signed char tmp_msg_0[] = {-4, 71, 9, 126, -109, 115, 30, -74, -20, 95, 81, -76, -29, 71, 30, -21, -76, 63, 4};
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
    msg.setTimeStamp(0.5516482651480593);
    msg.setSource(45604U);
    msg.setSourceEntity(126U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(216U);
    msg.type = 54U;
    msg.req_id = 3828039382U;
    msg.ttl = 65254U;
    msg.code = 199U;
    msg.destination.assign("JUKTBQAJFGQGCOIWLCOEADCZBWXPUHBMQJXTCDWOOBMLPQYZ");
    msg.source.assign("RQDQECSUHHHOAROSBXWDJDCBVWASRAQYTSFTJTZCJVPUBJMFINVGXQWNMVYUDGHJMJFEQMWYXMMBZOTUGRWLHOYZGVTGTVLQHYGUPDMNKGTEORENWYDTISWOCTMBUQZOPJCGBECRFAOPHOSLLYFWVANAZQLYENKPKFDWXXKANHKGOQNDIRPWZBSEICSCCGBTBZNLDILJKXDHXFXVIUCXBQPIPJEKEALNEZHMVAFVZXRSLZUFKRKIMSFIY");
    msg.acknowledge = 200U;
    msg.status = 64U;
    const signed char tmp_msg_0[] = {-8, 95, -55, -81, 119, -46, 35, 13, 126, 85, -66, 55, -78, 82, 110, -49, -38, 0, 124, -94, 85, 35, -109, 5, 2, 26, -74, -7, -56, -118, 30, 53, 45, 111, -36, -112, -30, 16, -48, 120, -105, 40, -58, -127, -97, 77, -122, -53, -1, 43, -62, 81, 18, 47, 122, -9, -41, 70, -34, -40, 51, 44, 35, 19, 39, 99, -86, 117, 75, 41, -59, 96, 73, 31, 68, 44, 61, 26, -111, -120, 65, 96, 98, -11, -44, -49, 31, -107, 28, -78, 27, 20, 63, -4, -61, -50, 102, -40, 42, 33, 123, -47, -48, 43, 61, -53, -119, -115, -41, -87, 118, 100, 10, -128, 4, -113, 64, 82, -73, -49, -95, 60, -69, -35, 100, 105, -85, -18, 94, -114, -65, -27, -2, -104, -81, -70, 122, -89, 101, 118, 66, 110, -122, 7, -8, 81, -86, 9, -15, 0, 52, -88, -8, 126, -67, -6, -109, -109, -58, 52, -98, 70, 116, 15, 54, 28, 73, -6, -75, -98, -44, -111, -111, -9, -105, -119, 34, -98, -46, -125, 107, -90, -101, 49, 4, -121, -90, -19, -103, 35, 46, 42, 44, -113, 62, 58, -57, -32, -84, 120, -95, 93, 64, 30, -4, -73, 6, -86, -88, -64, -121, -3, -79, -1, 7, -19, -41, -39, -48, -16, -128, 38, 82, -58, 78, -48, 85, -8, -100, -40, 33, 120, -31, -37, -117, -67, -102, -111, -68, -5, 62, -22, -118, -44, 18, -118, -96, -113};
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
    msg.setTimeStamp(0.5725957341173666);
    msg.setSource(25367U);
    msg.setSourceEntity(101U);
    msg.setDestination(42266U);
    msg.setDestinationEntity(150U);
    msg.type = 34U;
    msg.req_id = 51472406U;
    msg.ttl = 49138U;
    msg.code = 36U;
    msg.destination.assign("KGCXWAYFZUNZBCZFUUESNNTGEPHCNTXJSBMOPQGLDJVWAMDULRQDXNRIELODRPJIYZVWJAPTFGVNGJLBSUSLMCOLB");
    msg.source.assign("ZLBITUZFLIAKIUTEMUENMDFRHWSTCSLVYPJDHPPCKEWHRPYXOXACPQWSFASTISHKDBOUEXHITUSDGBBQJPRELTGNCIUPXQLGWGZGHVKOHFIMQCTEXYPNKDOCJQTERTMBCDVAFE");
    msg.acknowledge = 112U;
    msg.status = 233U;
    const signed char tmp_msg_0[] = {-88, 79, 1, -94, 45, -114, 106, 102, -84, 14, 61, 105, 15, 38, 115, 25, 115, -48, -19, -40, -9, -107, -62, 32, 91, -120, -20, -15, 111, -27, -39, -68, -76, -12, 111, 38, -6, -94, 37, 65, -94, 48, -40, 2, -26, 52, -74, -67, 86, -56, -37, 12, -83, 98, 22, -7, 21, 96, 126, -87, 102, -7, 88, -25, -36, -27, 37, -53, -58, -86, 53, -39, -53, -46, -125, -71, -19, 40, 9, 70, -51, -33, 13, -105, -111, -60, -103, 89, -59, 53, -17, -123, -41, 20, -30, -72, -110, -111, 48, -28, -54, -12, 93, -91, 126, -79, 31, -26, 104, 69, 20, -99, 16, -44, 87, -105, -92, -34, 40, -128, 81, -64, 62, -9, 23, 43, -66, -109, -122, 55, 92, -112, 88, 80, 29, 67, -84, -115, -117, 50, 125, -6, -36, -64, -48, 96, 55, 26, -22, -61, -119, -57, 7};
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
    msg.setTimeStamp(0.8927089885420769);
    msg.setSource(4502U);
    msg.setSourceEntity(206U);
    msg.setDestination(33770U);
    msg.setDestinationEntity(5U);
    msg.id = 69U;
    msg.range = 0.5938874345175221;

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
    msg.setTimeStamp(0.7959454257090811);
    msg.setSource(43880U);
    msg.setSourceEntity(159U);
    msg.setDestination(7054U);
    msg.setDestinationEntity(20U);
    msg.id = 225U;
    msg.range = 0.21480456692494287;

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
    msg.setTimeStamp(0.6331723564705735);
    msg.setSource(30685U);
    msg.setSourceEntity(38U);
    msg.setDestination(14150U);
    msg.setDestinationEntity(103U);
    msg.id = 61U;
    msg.range = 0.13517013690753255;

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
    msg.setTimeStamp(0.999366107225278);
    msg.setSource(34066U);
    msg.setSourceEntity(225U);
    msg.setDestination(50346U);
    msg.setDestinationEntity(28U);
    msg.beacon.assign("XDYACLVQWWRUXYRYFPHKJZTLBXWTUGVHZVNGWMXMNTZSDZRCKFZOUUFAROOBLJDVQVWUFVNEMRPMPCAYFCWLWPDPCWQBUVIDJTEQGEFNDKYONPYPGLIYJIONBUABFLXGTSUDDBPSGNBSFINQXYZRASVEARUHJESHEHQGRTHHUQSPHREXMMOPWKQMMXQELICJDSOBTXDHXAJKICHNIOGJBMTTJOBKEKSKZGYCINVTLAEZCJ");
    msg.lat = 0.9901956773176042;
    msg.lon = 0.67987057291078;
    msg.depth = 0.1245497089009675;
    msg.query_channel = 44U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 202U;

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
    msg.setTimeStamp(0.818504548170356);
    msg.setSource(59098U);
    msg.setSourceEntity(5U);
    msg.setDestination(14866U);
    msg.setDestinationEntity(197U);
    msg.beacon.assign("HFOMJEZITOHNXNUSOKIEKGCFUHNVSJICVBQQWNWF");
    msg.lat = 0.09958790473690293;
    msg.lon = 0.13106959164223497;
    msg.depth = 0.8317116544383527;
    msg.query_channel = 95U;
    msg.reply_channel = 55U;
    msg.transponder_delay = 94U;

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
    msg.setTimeStamp(0.60370749529114);
    msg.setSource(39582U);
    msg.setSourceEntity(63U);
    msg.setDestination(43061U);
    msg.setDestinationEntity(7U);
    msg.beacon.assign("ODYFCOTDGJYCTBYHKTTLCNPWIUVPJEHKZWDGOVBHWMWTZRMPOHPNJKFFEQAZEPQQNJLSKEQAQUFLWRSUGRBJPSKRIANZEWEOSN");
    msg.lat = 0.4529493419673315;
    msg.lon = 0.29518528201560945;
    msg.depth = 0.10324969509767223;
    msg.query_channel = 164U;
    msg.reply_channel = 66U;
    msg.transponder_delay = 167U;

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
    msg.setTimeStamp(0.43087999829063517);
    msg.setSource(12879U);
    msg.setSourceEntity(251U);
    msg.setDestination(15003U);
    msg.setDestinationEntity(188U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.30462573487502165);
    msg.setSource(15526U);
    msg.setSourceEntity(112U);
    msg.setDestination(4093U);
    msg.setDestinationEntity(157U);
    msg.op = 6U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IUQYDAJEPCDBJIWZHBXWSRHUKZNUPPEGGOAKFQEHURWNZYLZFXXXIJKCYIVJLQGPXGROWLRRLILSOQLXTWVPMNGYTUTZGEYXNWRIHGBZKJQLCGSQIKLFTJRAPNFAVFVVUGDPAHWBF");
    tmp_msg_0.lat = 0.9382701958725262;
    tmp_msg_0.lon = 0.5362260491002167;
    tmp_msg_0.depth = 0.9893460625338916;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 233U;
    tmp_msg_0.transponder_delay = 157U;
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
    msg.setTimeStamp(0.8609044733890774);
    msg.setSource(26611U);
    msg.setSourceEntity(83U);
    msg.setDestination(36847U);
    msg.setDestinationEntity(202U);
    msg.op = 88U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XVXZJZJKHQDQOFMRRSMOIYGVNQGEHDOBFUSJPMZAXREZDBBLHTZUGGBLSDIBGPFLARBLENPDUKEAVELYEUASDHTYOTBLMGMCXNQJZMFNWXQCLESSFUXGEWWBOPPY");
    tmp_msg_0.lat = 0.019696979153834282;
    tmp_msg_0.lon = 0.7853269179714059;
    tmp_msg_0.depth = 0.029502437796598446;
    tmp_msg_0.query_channel = 32U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 180U;
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
    msg.setTimeStamp(0.9240481078639956);
    msg.setSource(24747U);
    msg.setSourceEntity(234U);
    msg.setDestination(20947U);
    msg.setDestinationEntity(17U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.3178992301099536;
    tmp_msg_0.units = 171U;
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
    msg.setTimeStamp(0.5494162467317623);
    msg.setSource(47922U);
    msg.setSourceEntity(238U);
    msg.setDestination(7265U);
    msg.setDestinationEntity(226U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.20026845239698654;
    tmp_msg_0.confidence = 0.33985703174954596;
    tmp_msg_0.opmodes.assign("SACGKGTJIGKJAASALLAKMNBCNLBDGQHQXQNXDOOMELHWXPVVRSFHFYUDFXNEYTDJMJTVVIUHUWUMCJQMYDEZWYUTBXOHTCPBBZEKQGHLIZBCHIBLGNWZVXAHCLUVSUTIXGRFKSOKKHOZSGLEZXKVSHQAOMDXSRDARFVOWPYIFKE");
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
    msg.setTimeStamp(0.4638345860134163);
    msg.setSource(53750U);
    msg.setSourceEntity(47U);
    msg.setDestination(7429U);
    msg.setDestinationEntity(20U);
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("FPTXHXZIKJZFNYDOPZGZSWDNGOQYXILYPKUQABUMRNOVXHEMPPRNJHJDSBGSFCKGFVIXVQAQSTJUNYFQGZODLRCLQWRBEXJMASHLLWZWIPKLRWUUPFTQSFMCECJZVGRBUHMBOEPEDFYVANDCWQCKQVNUXOJLZAUDNYOUAVNJEIZMRKIETXSBVIDCHNKOLLTDFWCTEVYBG");
    tmp_msg_0.value = 157U;
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
    msg.setTimeStamp(0.38760914592585927);
    msg.setSource(15682U);
    msg.setSourceEntity(29U);
    msg.setDestination(11670U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.3133830662491327;
    msg.lon = 0.4577992625992028;
    msg.depth = 0.1747501368857206;
    msg.sentence.assign("WKTHSAWRJTJTJADKFOYDPKYJOJMEQVQARZNUTMWYEFDTTIUWZYXEVCXOISFHJDGNBONUSOZIRHKUAXSTQKMMFKLVDPHECHNDGPMIQSTGTDGZCNEVWACZPKYUHGCGHRNGBEXBCZXKPUXZRPFPTEWDBEFWYLADQMFNVBOJZIDFUOYQJRPJSMSUAQNBYVKBGCVIQOGZXOASQL");
    msg.txtime = 0.6790936313789372;
    msg.modem_type.assign("ECWMTJSELVTGBADEMENUPOAVSSIVQARCADZIECDOOZJLTKLAAHPXGQRYGLNQRJEPBWMNSOILPTXWQMFSKCTGHMEUJCXUVHHQJQKTDH");
    msg.sys_src.assign("XBDRKZEHGSPOQYEEWUDVPRAWMBASZMJVZGQWJXDTREANJLLYPAHVBWTJGWUVNRRKBOWLIYSVFNMSERQXTYFOQIBECJKJGHKKNHUVHITIHJCQSNQZFXMFHGIBTGLRHCSQLYOFXGKTGJW");
    msg.seq = 40415U;
    msg.sys_dst.assign("HXZUUUIWFNGMWLVZZERRMFXNSYGIVRMEXNYOTLSHVVGIJKDOPTWYDTCNPQWKVOVOCFAKWLMUISSGRXRASIZOZQHHJFKMXWVBUBNLQHZJTVKNDKYZFTRUFNTABDCBIHVPEMRRUAMYDWELHGLOBUOQEPHECKNPRGTAQDJFCOGUGSPCYJPEKYKBZJTPOJINJXIZ");
    msg.flags = 20U;
    const signed char tmp_msg_0[] = {-43, 116, -58, -53, 30, -3, 14, -1, -70, -39, 46, -87, -105, -83, -47, -57, -116, 74, -28, -43, 114, -122, 103, -19, -10, 60, -22, -1, -60, 97, 108, -31, -50, 91, -77, 50, -71, 47, -121, 76, 47, 99, -116, -25, 114, 102, 22, -93, 100, 33, 38, -1, -53, -111, 121, 40, 65, -62, 62, -92, 81, 22, -126, -72, 119, -127, 87, -76, -128, 8, -16, -45, -47, 34, -111, 4, -93, 22, 86, 82, -59, 15, 90, -116, -110, 123, -30, -53, 20, 95, -18, 120, -78, 84, 119, 101, -4, 4, 15, 36, 80, 92, 35, -122, 50, 62, -78, -92, -34, -42, 50, 66, -86, -19, -2, -4, 27, 94, 124, 1, 3, 78, 75, -116, -119, 97, -108, -110, 27, -18, 101, 61, -99, -86, 56, 113, -12, 66, -27, 25, 123, 14, 21, -82, 81, 47, 120, -21, -14, -94, 3, 74, 106, 74, -16, -123, -76};
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
    msg.setTimeStamp(0.9446343103152062);
    msg.setSource(40857U);
    msg.setSourceEntity(175U);
    msg.setDestination(61682U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.5351445800651973;
    msg.lon = 0.20848661744356123;
    msg.depth = 0.699615491652129;
    msg.sentence.assign("DFZNATHSRCCBFGWLTXHUYYMMBMBFDOVYPVIQQLCRDTSCQWJZZQHFFCMJXXKAQZLJRWXHTXGNHCUJWAVBPPEDVFAKKIODRLEGIEPOYONEFPJJGRQLBJBPPWKLMJNXVGSZTMGIQHLIKKBZOCHEIXOSAQKTNUVEUMGJUMUVVNRDYL");
    msg.txtime = 0.3427284389509029;
    msg.modem_type.assign("MMWMDLQDTLLBBPT");
    msg.sys_src.assign("EMXAIWVOZZKLIESMEDIOJBPHSQHRJSREILQCUUALBTGZIVMTISULNYQAKCDYWOLVORDYCBWSQXAAPZDFEWLKXZGGFBOHVOXHGNEPPNPCDKKQCYFIJZPNAOQRPRYXLZTKGVIXHUHT");
    msg.seq = 52117U;
    msg.sys_dst.assign("UAJNTOPZEEMYAJSQMIRIIRHPNDGGFVKNIRZEYYILVBEDZSAHPHMSUHXOYMDMRKNOYUNYTZBPEDOUKCFHJZXHVCLHPMMVHGCGDTWJSBLTZUKVWDIVEUJAYWAFXAOWPK");
    msg.flags = 123U;
    const signed char tmp_msg_0[] = {-77, 58, -59, 27, 23, 8, 59, 43, 57, -32, -65, 2, 116, 122, 120, 29, -80, 45, -84, 69, -32, 67, 68, 28, -45, 108, -43, 11, 0, -101, -84, -20, 12, -81, -96, -31, -62, -97, 37, 48, 86, -33, -5, 31, -75, -127};
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
    msg.setTimeStamp(0.559485882931706);
    msg.setSource(21029U);
    msg.setSourceEntity(193U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.1983944210392753;
    msg.lon = 0.17577619389482324;
    msg.depth = 0.24475805342661094;
    msg.sentence.assign("ODVFJOCEWCTZKNEWNMFPLPKFDSTZZRFAZTELPBANLZDBXVRURXXDUTHTIEISOYTOYLXNSEBXPRQYHMXZZWIUBJNUCSQJUYOCNOOJGVNUDMEOPLTRBZZXVDVSWERNDGPQQJOXMSAYGABMLLJVIKYRDGTYGWYGUCZEUIHVCWMSRLK");
    msg.txtime = 0.7923015473618742;
    msg.modem_type.assign("ETBBWCQIDZSWPEPYMUMXGLXQWNIXULSMSMIIUVHGOIAZHRXCFWJLNQKCASTBS");
    msg.sys_src.assign("LNAYRAYDAEBOAQKBCSKJHDXPXXTQIDYMKSSTZWOEEFWWZUKGZXPLTSSHOKLRRXGFBZCGSMMMLRTIVJQCHJHITROMBAJVGLWSBSDOQBYJTKLWVUHQQBVFJKSLZHNAUPKYEXRZXJOVNXUDQMAFHFETJI");
    msg.seq = 24843U;
    msg.sys_dst.assign("GNOSKGRLQTUMGXSATSKSWMZRLJIBGPJSFIWYNAPVXHRSKEEGEHKNJXMYFAJKXNFCYXSTPAVCCLVVRAIPCPTTXUMFATXIKEWSMKGUBZISCENMYTOHMOIPUQTJXULLODKMAEJDZHILDREINVPZUYCZCQOUQOQNGABQGVZLNWYHAPYBWPWRHGOUZJOIVIVWEJQQX");
    msg.flags = 228U;
    const signed char tmp_msg_0[] = {84, 1, -109, -92, -94, -94, 118, -90, -45, 106, -73, 62, -48, -103, -97, -65, 12, -6, 17, -48, -93, -56, -33, 25, 81, 83, 38, -61, -29, -19, 12, 125, 51, 6, 117, 65, -51, 85, -75, -104, 39, -87, -103, -73, -67, 35, 112, -61, -82, -26, 53, 77, -74, -6, 96, -101, 54, -6, 63, 46, 14, 92, 106, 65, 65, -51, 0, -121, -7, -118, -41, -103, -23, 81, -105, 100, 114, -7, -54, -102, -102, 37, -96, -40, 116, 95, 74, -97, 102, 96, 30, -76, 86, 93, -17, 121, -73, -114, 46, -107, -52, -65, -9, -15, 86, -14, 29, 60, 81, -109, 51, -53, -54, 24, 126, 80, 43, 110, -3, -103, -82, 104, -11, -118, 76, -75, 72, -116, 74, -20, -89, -117, 118};
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
    msg.setTimeStamp(0.8887190649638206);
    msg.setSource(35118U);
    msg.setSourceEntity(78U);
    msg.setDestination(22118U);
    msg.setDestinationEntity(135U);
    msg.op = 72U;
    msg.system.assign("QVFSTBTVSRJSUEWCYYGMZYUIOLCXIEUFRNWHTKMHHERFIZZSPSZDMFUTRRAAHIABCTVPZDODFYHGJQZWOFJNJCNKQZGBPDXXAEJHJTFUNGWQLKDMQLMEZKPHNVONJGKLLYEQHDITLXLYBVKFCBWRWGBCLXRQAYU");
    msg.range = 0.13799100034442746;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.31264784350227015;
    tmp_msg_0.sys_src = 62582U;
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
    msg.setTimeStamp(0.23598392187909312);
    msg.setSource(9153U);
    msg.setSourceEntity(71U);
    msg.setDestination(23558U);
    msg.setDestinationEntity(34U);
    msg.op = 254U;
    msg.system.assign("YZQZVXPIRIQLYLIJVJQCWFXKTGJERRBRIDTFITNQVZTPDNWYMOMOWVGUFGNVMFITGYWJBDSRBQVEHYPTNXWEKL");
    msg.range = 0.5827759187418802;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.1256229154767935;
    tmp_msg_0.x = 0.9524066061757285;
    tmp_msg_0.y = 0.604726044204762;
    tmp_msg_0.z = 0.3353535213847011;
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
    msg.setTimeStamp(0.6696517190221047);
    msg.setSource(2074U);
    msg.setSourceEntity(144U);
    msg.setDestination(44060U);
    msg.setDestinationEntity(7U);
    msg.op = 214U;
    msg.system.assign("OXHNHPZUWAKRUBPLNWADBYMRLMEUJMQSLSXXKLPWCMHBLMIDMCEBYZMYEPRKOFQXAINRVXEHLJZURVCHQADWGXTZAWHSBAKQUKVVGLBEDCPITITNRIMCYSXIKNWCITPPAOZUGUHVFBEVGNQWBTMXRVZTSSDDISGFHIKDVOJOKYLYKHNOFUJODRDYFCKQGFM");
    msg.range = 0.5294171560771663;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 9U;
    tmp_msg_0.actions.assign("YJTJUFUVSGRFOKNHLZIUAOZNPNLYVXWFR");
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
    msg.setTimeStamp(0.1691802183622303);
    msg.setSource(46929U);
    msg.setSourceEntity(71U);
    msg.setDestination(17754U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.6111826501003601);
    msg.setSource(1141U);
    msg.setSourceEntity(202U);
    msg.setDestination(41187U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.3478808989143669);
    msg.setSource(4370U);
    msg.setSourceEntity(29U);
    msg.setDestination(11707U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.5107180006171762);
    msg.setSource(37110U);
    msg.setSourceEntity(34U);
    msg.setDestination(62833U);
    msg.setDestinationEntity(238U);
    msg.list.assign("BAROLGJEQERKXPNYRECNCTWGRHTEVTLDQZHYFLFSXGBCDBKVEJNKCIGNVUOWRBVJAQXUCJBSCJYWEYWXFYAFNHLIDWOUVMMFTAPTFDLXSBZPZVVOLIFUKCMHSPCJRDHYGJWWUPGAXXXRVZSYFIUQITXMRAOGMQSQAOOAEKMVUJIFPEBSQNUETAEQDAHZSZINGUYNCBMDJDLPTPJWMUQKZYIVWIOSRPNXKHTLLZ");

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
    msg.setTimeStamp(0.8521994994120983);
    msg.setSource(30408U);
    msg.setSourceEntity(82U);
    msg.setDestination(55787U);
    msg.setDestinationEntity(201U);
    msg.list.assign("RFFNCQINZBOHCHXHFNTLSPVSZGGULLZPNLTXRCSFYFNPMODTYEVTSCWSEIPKIWBIEHZOMKYISDTXKUDJEYLCGANXOGLNUGGFWEKQZJRORIATIQUOAKMIEECOXUWDHRTDVRZGWB");

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
    msg.setTimeStamp(0.3219588018953268);
    msg.setSource(28566U);
    msg.setSourceEntity(125U);
    msg.setDestination(63573U);
    msg.setDestinationEntity(230U);
    msg.list.assign("AIUVSCXKXPVSDJPKICQRUVCDWNWDTEGEGIXBHTJKAMFZCNZTTWOQIPMHWDMHHIGSMTEWGQEOQISXQPCOPQEKANVJHLMKGFCELAOARATUBVRODMHWNJSOGQFIILJECRBGBCOHSZJVGFNKLRZRONRLAVDYMXAGQWXKXXCRTYV");

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
    msg.setTimeStamp(0.30032326557382705);
    msg.setSource(19671U);
    msg.setSourceEntity(159U);
    msg.setDestination(61481U);
    msg.setDestinationEntity(209U);
    msg.peer.assign("STDQTUWVKVRDQATIFEFHICHDEYAMBJUMCYRDFPZKZKRBBGECBHRSRSFPSSIENZEBPFXOLAZUJEZYYPGSEWNTFQNCDQNGJATHIXRLTXWAWIZPZKDKCJOYUYAMTLXPGMENXFAPXOWNKJOIEAGLRRQUCIGMXTMHAWSHMNUVKM");
    msg.rssi = 0.7392261503402562;
    msg.integrity = 60301U;

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
    msg.setTimeStamp(0.042048915371992734);
    msg.setSource(2644U);
    msg.setSourceEntity(57U);
    msg.setDestination(32954U);
    msg.setDestinationEntity(92U);
    msg.peer.assign("JTNBIRXIWTALKOXHUOJYMGTLQTQCIDS");
    msg.rssi = 0.25044146993802296;
    msg.integrity = 43891U;

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
    msg.setTimeStamp(0.2276550716841519);
    msg.setSource(38574U);
    msg.setSourceEntity(43U);
    msg.setDestination(3854U);
    msg.setDestinationEntity(30U);
    msg.peer.assign("KPPKIIMBPKPDGHLVXGTXFBJFRUOERWIYZQWVQDPUVXNLFSMLVCDDCBXSHAWXSRPBGHJGDLLDQZOIKILVJMRAPNFTKGUETVTQCMAYWKWZWLITDRSVQNCSMUHLTJTMOFEFAQMXXDCACYPBUEHKPJNZRAKNYORXHIWSNAUAQJULOYOMBRAHGHIEOUNUYRTSSJHJYBQZJKYVFUISQOFX");
    msg.rssi = 0.41284715591665655;
    msg.integrity = 15835U;

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
    msg.setTimeStamp(0.11519046783423936);
    msg.setSource(36243U);
    msg.setSourceEntity(34U);
    msg.setDestination(35082U);
    msg.setDestinationEntity(198U);
    msg.req_id = 17785U;
    msg.destination.assign("BYADCWTMPWKRYQIUPLMRTEXCFTLLELTKCISLPIHHTDRBEXNHHJHBBOCRSAFRPJKOKETSRJMSMUQFSNWEXXKAAOYIRZEIMGYRVWVOQZJQXBZDZMWVSEKTHMZZQOKIPNFNNRBSNUXAOVPEUNHFDLCLUDPLXAGYAWBXBIQ");
    msg.timeout = 0.5095992053111194;
    msg.range = 0.1404266139322966;
    msg.type = 215U;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.8172575564794317);
    msg.setSource(18442U);
    msg.setSourceEntity(12U);
    msg.setDestination(9354U);
    msg.setDestinationEntity(244U);
    msg.req_id = 51814U;
    msg.destination.assign("ELNTAUSMBUIYXBGSHRLJPNCKXKMFRSOGJHNQCDZASJFIXFLEJDPDMJXDLBYBWWGONFVTSBKQILOZFLEGKDCRKCJZTJREPFYSKHYXLR");
    msg.timeout = 0.3811830374422891;
    msg.range = 0.21975888660018372;
    msg.type = 56U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4750032601524341;
    tmp_msg_0.lon = 0.7779686497429669;
    tmp_msg_0.height = 0.025926141374336686;
    tmp_msg_0.x = 0.6768819715284218;
    tmp_msg_0.y = 0.3239043659182895;
    tmp_msg_0.z = 0.11485221051566785;
    tmp_msg_0.phi = 0.795776397858223;
    tmp_msg_0.theta = 0.09187913458499242;
    tmp_msg_0.psi = 0.4809301463007102;
    tmp_msg_0.u = 0.9533762455616003;
    tmp_msg_0.v = 0.5028550708838663;
    tmp_msg_0.w = 0.29859179015552473;
    tmp_msg_0.p = 0.0950576790128761;
    tmp_msg_0.q = 0.8950145654274305;
    tmp_msg_0.r = 0.754569278039157;
    tmp_msg_0.svx = 0.3351784021013282;
    tmp_msg_0.svy = 0.6044260327249716;
    tmp_msg_0.svz = 0.15730465730074694;
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
    msg.setTimeStamp(0.45766195481464356);
    msg.setSource(25533U);
    msg.setSourceEntity(39U);
    msg.setDestination(8787U);
    msg.setDestinationEntity(157U);
    msg.req_id = 7726U;
    msg.destination.assign("DPHGUQGSELZYVXRKWAUPXPFMHBYCRQOJASWOOMVGYRINYLATQXGRBHTMPEVXCCPXOZZPLRHWCBUMTLIBSTYLKHWEJLXKLAQVRGDTMJNZSSRRUUCY");
    msg.timeout = 0.8075608689434407;
    msg.range = 0.8294092392618345;
    msg.type = 9U;
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("COGLWYLSOGZDNQSRKLBIJIPQETBVBRREYQXIWHNHYLZVDYYWCXMEXMANQGNHFMIXSCNZVQVMSJGCUCAWJOOKUEHPQEXLLKKDMDMTDZQYTSNFXREJJCPBKIEKUZFUPJANVAKUCMFKBNMHDRWUVZTHCAYYLGAMRNGWSIIFH");
    tmp_msg_0.report_time = 0.09564143664063351;
    tmp_msg_0.medium = 79U;
    tmp_msg_0.lat = 0.0704665299892061;
    tmp_msg_0.lon = 0.8071946911191931;
    tmp_msg_0.depth = 0.6882911583243994;
    tmp_msg_0.alt = 0.9674230326110708;
    tmp_msg_0.sog = 0.46160670173320195;
    tmp_msg_0.cog = 0.9363813857347177;
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
    msg.setTimeStamp(0.40529712642924487);
    msg.setSource(58787U);
    msg.setSourceEntity(116U);
    msg.setDestination(25638U);
    msg.setDestinationEntity(147U);
    msg.req_id = 34098U;
    msg.type = 193U;
    msg.status = 210U;
    msg.info.assign("IZZZKQITOPCENQOCQREVGAITNRGNDXBZYMCWLUPMVGUMDKXZEOMAUMWBJBUIRLNRYOYYTZJAZCCJEVGCSGMKWIHOAPBIHMSVLKFAIUAKCRXMVFKYJETCWJYVZXOT");
    msg.range = 0.3377209824338593;

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
    msg.setTimeStamp(0.8885243771896505);
    msg.setSource(23051U);
    msg.setSourceEntity(185U);
    msg.setDestination(14382U);
    msg.setDestinationEntity(104U);
    msg.req_id = 1873U;
    msg.type = 71U;
    msg.status = 162U;
    msg.info.assign("ZEIKIKCBHGQVYQXIOUACPAWIJM");
    msg.range = 0.528580189636064;

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
    msg.setTimeStamp(0.6180389975500917);
    msg.setSource(41648U);
    msg.setSourceEntity(107U);
    msg.setDestination(19807U);
    msg.setDestinationEntity(51U);
    msg.req_id = 31231U;
    msg.type = 68U;
    msg.status = 199U;
    msg.info.assign("ZBEUBBFWTGKRODPWWUULYXBCRGWEIZLQXVERMQKBKVCNKFGGGZDDPQYIOWNJEYTSDJAMMVVTFFZS");
    msg.range = 0.6052935820098749;

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
    msg.setTimeStamp(0.9823196405660873);
    msg.setSource(37763U);
    msg.setSourceEntity(8U);
    msg.setDestination(17530U);
    msg.setDestinationEntity(128U);
    msg.system.assign("SVNFCBMZVJVYPGMCIXCOTOORKPRTNLLPEODBFDDRZLKHYNBIXCLJPEQMRPURMUGCWOWUFZYNJBZVBNMZWTYTUKVPBXIPYAAKQFTAWIUYDIJAEYFEGSTAJQZWWXLSULDJTKBVSRFAQLOGOYYTHXXJWFMJQKTECXVWQUXMLKCGAQEGHPALKZIQURHXRZNOHSJOSHSDNFLDSAZEUXGSVNSAHDGMCHWCQUKZYEETPHFDINJR");
    msg.op = 29U;

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
    msg.setTimeStamp(0.6551288584548813);
    msg.setSource(21749U);
    msg.setSourceEntity(124U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(157U);
    msg.system.assign("PVSETGKLGDPBYNOANXIHJCWPQOXJQJWREUGDJFAMBSYZRLIWXBFOJAMRGGGCADHOWNWCPNTUHCTZTUFQZDRZUYPKDALBDZVPZLVQYNUCKEFEE");
    msg.op = 229U;

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
    msg.setTimeStamp(0.26045372347766704);
    msg.setSource(55920U);
    msg.setSourceEntity(29U);
    msg.setDestination(6456U);
    msg.setDestinationEntity(176U);
    msg.system.assign("NEXKCBJYKGKECFXOWTMJAVCSIGLXNCQDXPPDULPLVFOYRABKLHQYNYDFDSKWYLQKQWCDHVMAIAOZUGHHPBPZVOPRVVYSCNIFPNGRQUNTATERJECUXBRYMMVSPXHRFWHZQUEGEZZALAWDYQJEOVDRMPJSIRKTFWNFDNFBGFRSA");
    msg.op = 231U;

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
    msg.setTimeStamp(0.20195744950208494);
    msg.setSource(17055U);
    msg.setSourceEntity(117U);
    msg.setDestination(17840U);
    msg.setDestinationEntity(147U);
    msg.value = -30232;

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
    msg.setTimeStamp(0.01059774269546554);
    msg.setSource(29595U);
    msg.setSourceEntity(145U);
    msg.setDestination(19682U);
    msg.setDestinationEntity(76U);
    msg.value = 29896;

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
    msg.setTimeStamp(0.9444172759121493);
    msg.setSource(41620U);
    msg.setSourceEntity(20U);
    msg.setDestination(2182U);
    msg.setDestinationEntity(176U);
    msg.value = -10895;

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
    msg.setTimeStamp(0.4368029780474618);
    msg.setSource(33072U);
    msg.setSourceEntity(172U);
    msg.setDestination(2034U);
    msg.setDestinationEntity(224U);
    msg.value = 0.09551340516331341;

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
    msg.setTimeStamp(0.7759441184341357);
    msg.setSource(26346U);
    msg.setSourceEntity(120U);
    msg.setDestination(39141U);
    msg.setDestinationEntity(199U);
    msg.value = 0.35209249733090175;

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
    msg.setTimeStamp(0.5064593203110824);
    msg.setSource(56225U);
    msg.setSourceEntity(18U);
    msg.setDestination(16526U);
    msg.setDestinationEntity(137U);
    msg.value = 0.8739843786169423;

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
    msg.setTimeStamp(0.3280104735485362);
    msg.setSource(58462U);
    msg.setSourceEntity(202U);
    msg.setDestination(19163U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8725440155294615;

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
    msg.setTimeStamp(0.7521163887084833);
    msg.setSource(58534U);
    msg.setSourceEntity(79U);
    msg.setDestination(45166U);
    msg.setDestinationEntity(212U);
    msg.value = 0.30311725014339463;

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
    msg.setTimeStamp(0.6931476001327762);
    msg.setSource(44692U);
    msg.setSourceEntity(82U);
    msg.setDestination(50474U);
    msg.setDestinationEntity(69U);
    msg.value = 0.9017353079674504;

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
    msg.setTimeStamp(0.4876410294606859);
    msg.setSource(35742U);
    msg.setSourceEntity(69U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(53U);
    msg.validity = 49886U;
    msg.type = 41U;
    msg.utc_year = 41030U;
    msg.utc_month = 215U;
    msg.utc_day = 6U;
    msg.utc_time = 0.7026008878706586;
    msg.lat = 0.11183543861279521;
    msg.lon = 0.3567445386275109;
    msg.height = 0.20517585578658126;
    msg.satellites = 71U;
    msg.cog = 0.09702815630455985;
    msg.sog = 0.6756942141892722;
    msg.hdop = 0.7062936546691566;
    msg.vdop = 0.2107707840516586;
    msg.hacc = 0.23775373214146367;
    msg.vacc = 0.5079135801415803;

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
    msg.setTimeStamp(0.4395641537975855);
    msg.setSource(17530U);
    msg.setSourceEntity(7U);
    msg.setDestination(24295U);
    msg.setDestinationEntity(72U);
    msg.validity = 48196U;
    msg.type = 89U;
    msg.utc_year = 62756U;
    msg.utc_month = 191U;
    msg.utc_day = 103U;
    msg.utc_time = 0.30585417027297757;
    msg.lat = 0.8355002980174883;
    msg.lon = 0.6084867411561425;
    msg.height = 0.10659149119479894;
    msg.satellites = 210U;
    msg.cog = 0.7564218417854232;
    msg.sog = 0.30888560203647986;
    msg.hdop = 0.05255677948124504;
    msg.vdop = 0.948642405458947;
    msg.hacc = 0.7661880572941978;
    msg.vacc = 0.9556144881454756;

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
    msg.setTimeStamp(0.19214325829819723);
    msg.setSource(36456U);
    msg.setSourceEntity(172U);
    msg.setDestination(44228U);
    msg.setDestinationEntity(106U);
    msg.validity = 60158U;
    msg.type = 6U;
    msg.utc_year = 60066U;
    msg.utc_month = 204U;
    msg.utc_day = 93U;
    msg.utc_time = 0.35990390702879405;
    msg.lat = 0.1124993558070001;
    msg.lon = 0.4548259163534243;
    msg.height = 0.08421287895156682;
    msg.satellites = 148U;
    msg.cog = 0.527584126077431;
    msg.sog = 0.10005359142038472;
    msg.hdop = 0.7331590359201767;
    msg.vdop = 0.99009776043751;
    msg.hacc = 0.37049144982377147;
    msg.vacc = 0.8702837055680808;

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
    msg.setTimeStamp(0.9264781251721489);
    msg.setSource(23123U);
    msg.setSourceEntity(103U);
    msg.setDestination(24180U);
    msg.setDestinationEntity(155U);
    msg.time = 0.44590293755610433;
    msg.phi = 0.4440990916311002;
    msg.theta = 0.710376502073699;
    msg.psi = 0.965819218199628;
    msg.psi_magnetic = 0.0930044837664934;

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
    msg.setTimeStamp(0.6656626098710791);
    msg.setSource(42368U);
    msg.setSourceEntity(117U);
    msg.setDestination(34412U);
    msg.setDestinationEntity(109U);
    msg.time = 0.31137542144333274;
    msg.phi = 0.7269886980908938;
    msg.theta = 0.4408164180233798;
    msg.psi = 0.49162012124384746;
    msg.psi_magnetic = 0.5233273037917188;

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
    msg.setTimeStamp(0.030904631578336672);
    msg.setSource(10357U);
    msg.setSourceEntity(99U);
    msg.setDestination(14214U);
    msg.setDestinationEntity(233U);
    msg.time = 0.3068095035149394;
    msg.phi = 0.29600441493071084;
    msg.theta = 0.2637177074786664;
    msg.psi = 0.9758248110037749;
    msg.psi_magnetic = 0.49255608949053176;

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
    msg.setTimeStamp(0.4038180307530057);
    msg.setSource(60560U);
    msg.setSourceEntity(1U);
    msg.setDestination(13591U);
    msg.setDestinationEntity(197U);
    msg.time = 0.8052847597542514;
    msg.x = 0.033905207771426804;
    msg.y = 0.17234726017663216;
    msg.z = 0.7156199427410468;
    msg.timestep = 0.27348478376173224;

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
    msg.setTimeStamp(0.26731691269509006);
    msg.setSource(45722U);
    msg.setSourceEntity(22U);
    msg.setDestination(5023U);
    msg.setDestinationEntity(71U);
    msg.time = 0.5400708386420436;
    msg.x = 0.35306818274642815;
    msg.y = 0.3722698688260767;
    msg.z = 0.95508770359306;
    msg.timestep = 0.17051041119798693;

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
    msg.setTimeStamp(0.6706490255357314);
    msg.setSource(1578U);
    msg.setSourceEntity(185U);
    msg.setDestination(6546U);
    msg.setDestinationEntity(236U);
    msg.time = 0.5605243371893464;
    msg.x = 0.565992616925407;
    msg.y = 0.731131690299888;
    msg.z = 0.45764124513661864;
    msg.timestep = 0.8323855813787117;

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
    msg.setTimeStamp(0.15453013953188144);
    msg.setSource(53271U);
    msg.setSourceEntity(175U);
    msg.setDestination(60705U);
    msg.setDestinationEntity(114U);
    msg.time = 0.47104727230457477;
    msg.x = 0.7985966654189425;
    msg.y = 0.543700093325371;
    msg.z = 0.6436555350579656;

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
    msg.setTimeStamp(0.327770055288381);
    msg.setSource(21470U);
    msg.setSourceEntity(45U);
    msg.setDestination(2015U);
    msg.setDestinationEntity(164U);
    msg.time = 0.8041285982699813;
    msg.x = 0.5410444271683309;
    msg.y = 0.3877868177631948;
    msg.z = 0.09944430467249554;

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
    msg.setTimeStamp(0.228347694540734);
    msg.setSource(65079U);
    msg.setSourceEntity(41U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(130U);
    msg.time = 0.16732966001383653;
    msg.x = 0.9970947030906825;
    msg.y = 0.421830847608042;
    msg.z = 0.0024062136278787394;

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
    msg.setTimeStamp(0.4303903615273834);
    msg.setSource(57018U);
    msg.setSourceEntity(1U);
    msg.setDestination(22516U);
    msg.setDestinationEntity(148U);
    msg.time = 0.8439487152434054;
    msg.x = 0.4433660932286767;
    msg.y = 0.5334758318655276;
    msg.z = 0.9387325261157455;

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
    msg.setTimeStamp(0.5442526888848569);
    msg.setSource(2081U);
    msg.setSourceEntity(77U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(212U);
    msg.time = 0.08567908744454367;
    msg.x = 0.6157499184438112;
    msg.y = 0.4939910843268468;
    msg.z = 0.2846319616515013;

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
    msg.setTimeStamp(0.2957539316061306);
    msg.setSource(17969U);
    msg.setSourceEntity(133U);
    msg.setDestination(28290U);
    msg.setDestinationEntity(181U);
    msg.time = 0.7112814299691357;
    msg.x = 0.4604672897013362;
    msg.y = 0.8540714932269704;
    msg.z = 0.03698392575973142;

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
    msg.setTimeStamp(0.897416022913438);
    msg.setSource(60042U);
    msg.setSourceEntity(141U);
    msg.setDestination(4010U);
    msg.setDestinationEntity(56U);
    msg.time = 0.6216962297493721;
    msg.x = 0.46373295123801106;
    msg.y = 0.1884371946296316;
    msg.z = 0.5377130511396911;

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
    msg.setTimeStamp(0.3750980689631608);
    msg.setSource(21837U);
    msg.setSourceEntity(239U);
    msg.setDestination(2699U);
    msg.setDestinationEntity(184U);
    msg.time = 0.4795801368724619;
    msg.x = 0.7410310353118212;
    msg.y = 0.9833360116991753;
    msg.z = 0.5899819111166402;

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
    msg.setTimeStamp(0.37929154525291375);
    msg.setSource(7441U);
    msg.setSourceEntity(91U);
    msg.setDestination(28304U);
    msg.setDestinationEntity(206U);
    msg.time = 0.9830263706604823;
    msg.x = 0.35916461775685404;
    msg.y = 0.9508010914498829;
    msg.z = 0.9742137571029293;

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
    msg.setTimeStamp(0.9494571337358758);
    msg.setSource(38617U);
    msg.setSourceEntity(212U);
    msg.setDestination(29273U);
    msg.setDestinationEntity(163U);
    msg.validity = 134U;
    msg.x = 0.8686883400062428;
    msg.y = 0.7423831145207318;
    msg.z = 0.24131833629370125;

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
    msg.setTimeStamp(0.30940401514508253);
    msg.setSource(48042U);
    msg.setSourceEntity(14U);
    msg.setDestination(35007U);
    msg.setDestinationEntity(190U);
    msg.validity = 241U;
    msg.x = 0.3028625489615602;
    msg.y = 0.5852077724463063;
    msg.z = 0.6217247387026448;

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
    msg.setTimeStamp(0.18752244555440067);
    msg.setSource(54477U);
    msg.setSourceEntity(250U);
    msg.setDestination(36506U);
    msg.setDestinationEntity(208U);
    msg.validity = 136U;
    msg.x = 0.39577963980335884;
    msg.y = 0.7390377792188106;
    msg.z = 0.5356249211197494;

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
    msg.setTimeStamp(0.1323216286359593);
    msg.setSource(26359U);
    msg.setSourceEntity(77U);
    msg.setDestination(29445U);
    msg.setDestinationEntity(66U);
    msg.validity = 82U;
    msg.x = 0.7369505538111081;
    msg.y = 0.06802173682612966;
    msg.z = 0.7679543156814103;

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
    msg.setTimeStamp(0.8683398914809227);
    msg.setSource(6258U);
    msg.setSourceEntity(150U);
    msg.setDestination(35648U);
    msg.setDestinationEntity(113U);
    msg.validity = 185U;
    msg.x = 0.9504239287219047;
    msg.y = 0.47200749692901833;
    msg.z = 0.4340712427477206;

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
    msg.setTimeStamp(0.9616094106241276);
    msg.setSource(1931U);
    msg.setSourceEntity(200U);
    msg.setDestination(18296U);
    msg.setDestinationEntity(91U);
    msg.validity = 76U;
    msg.x = 0.47715173339322614;
    msg.y = 0.8458828072287496;
    msg.z = 0.48926551346599867;

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
    msg.setTimeStamp(0.03487432101912824);
    msg.setSource(55881U);
    msg.setSourceEntity(43U);
    msg.setDestination(9915U);
    msg.setDestinationEntity(235U);
    msg.time = 0.31500589842818194;
    msg.x = 0.8880553671978084;
    msg.y = 0.05063413466372091;
    msg.z = 0.26474264164686523;

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
    msg.setTimeStamp(0.8496440887870754);
    msg.setSource(13440U);
    msg.setSourceEntity(168U);
    msg.setDestination(60010U);
    msg.setDestinationEntity(74U);
    msg.time = 0.06016440355998409;
    msg.x = 0.4626017463033453;
    msg.y = 0.4607498651316544;
    msg.z = 0.5741352829101957;

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
    msg.setTimeStamp(0.3938772581148089);
    msg.setSource(42810U);
    msg.setSourceEntity(14U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(245U);
    msg.time = 0.7285697357528677;
    msg.x = 0.9948634870030628;
    msg.y = 0.21853369136229306;
    msg.z = 0.37576879865457513;

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
    msg.setTimeStamp(0.09067396193938737);
    msg.setSource(62211U);
    msg.setSourceEntity(128U);
    msg.setDestination(31566U);
    msg.setDestinationEntity(242U);
    msg.validity = 72U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8857395471525364;
    tmp_msg_0.y = 0.8664660172497376;
    tmp_msg_0.z = 0.031669778267407245;
    tmp_msg_0.phi = 0.4947431928974868;
    tmp_msg_0.theta = 0.7370564709307097;
    tmp_msg_0.psi = 0.417398695195902;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.42577552095870763;
    tmp_msg_1.beam_height = 0.4163376142456443;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.541188823473486;

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
    msg.setTimeStamp(0.29093854542484976);
    msg.setSource(17053U);
    msg.setSourceEntity(147U);
    msg.setDestination(790U);
    msg.setDestinationEntity(12U);
    msg.validity = 177U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.02983056800028938;
    tmp_msg_0.beam_height = 0.7268099025335434;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.20007674366391204;

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
    msg.setTimeStamp(0.9404760457290515);
    msg.setSource(10429U);
    msg.setSourceEntity(171U);
    msg.setDestination(4520U);
    msg.setDestinationEntity(150U);
    msg.validity = 66U;
    msg.value = 0.08821605093447604;

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
    msg.setTimeStamp(0.9653984436115501);
    msg.setSource(25846U);
    msg.setSourceEntity(107U);
    msg.setDestination(18186U);
    msg.setDestinationEntity(117U);
    msg.value = 0.12559949819339777;

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
    msg.setTimeStamp(0.17573477791720238);
    msg.setSource(36561U);
    msg.setSourceEntity(148U);
    msg.setDestination(18948U);
    msg.setDestinationEntity(82U);
    msg.value = 0.58849086541878;

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
    msg.setTimeStamp(0.3611442196647665);
    msg.setSource(38434U);
    msg.setSourceEntity(80U);
    msg.setDestination(13411U);
    msg.setDestinationEntity(227U);
    msg.value = 0.07072505709132171;

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
    msg.setTimeStamp(0.49592018859387643);
    msg.setSource(8145U);
    msg.setSourceEntity(37U);
    msg.setDestination(8755U);
    msg.setDestinationEntity(62U);
    msg.value = 0.1050703634152379;

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
    msg.setTimeStamp(0.667063875093302);
    msg.setSource(32893U);
    msg.setSourceEntity(200U);
    msg.setDestination(38028U);
    msg.setDestinationEntity(55U);
    msg.value = 0.7833910973815338;

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
    msg.setTimeStamp(0.4286103168650981);
    msg.setSource(8521U);
    msg.setSourceEntity(111U);
    msg.setDestination(41683U);
    msg.setDestinationEntity(15U);
    msg.value = 0.9483674177687407;

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
    msg.setTimeStamp(0.858317875514655);
    msg.setSource(1170U);
    msg.setSourceEntity(127U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(12U);
    msg.value = 0.28881192400617894;

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
    msg.setTimeStamp(0.787164108931845);
    msg.setSource(14662U);
    msg.setSourceEntity(160U);
    msg.setDestination(867U);
    msg.setDestinationEntity(183U);
    msg.value = 0.23918838976816714;

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
    msg.setTimeStamp(0.9579462011156816);
    msg.setSource(2009U);
    msg.setSourceEntity(81U);
    msg.setDestination(32168U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9883513232005376;

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
    msg.setTimeStamp(0.5503835763625533);
    msg.setSource(6534U);
    msg.setSourceEntity(191U);
    msg.setDestination(2983U);
    msg.setDestinationEntity(3U);
    msg.value = 0.4593016241202498;

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
    msg.setTimeStamp(0.7202208945594694);
    msg.setSource(35171U);
    msg.setSourceEntity(155U);
    msg.setDestination(49834U);
    msg.setDestinationEntity(117U);
    msg.value = 0.01745061042605267;

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
    msg.setTimeStamp(0.7937766219626256);
    msg.setSource(35201U);
    msg.setSourceEntity(138U);
    msg.setDestination(12765U);
    msg.setDestinationEntity(232U);
    msg.value = 0.354277554907957;

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
    msg.setTimeStamp(0.6033531636409295);
    msg.setSource(348U);
    msg.setSourceEntity(231U);
    msg.setDestination(11284U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9674070978776419;

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
    msg.setTimeStamp(0.350512154198829);
    msg.setSource(12843U);
    msg.setSourceEntity(109U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(40U);
    msg.value = 0.009427492702463902;

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
    msg.setTimeStamp(0.5316801381793136);
    msg.setSource(21709U);
    msg.setSourceEntity(175U);
    msg.setDestination(25584U);
    msg.setDestinationEntity(102U);
    msg.value = 0.28745247435299504;

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
    msg.setTimeStamp(0.5200775992735);
    msg.setSource(53777U);
    msg.setSourceEntity(115U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(236U);
    msg.value = 0.7181766289435377;

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
    msg.setTimeStamp(0.013891478449599037);
    msg.setSource(12632U);
    msg.setSourceEntity(18U);
    msg.setDestination(36193U);
    msg.setDestinationEntity(6U);
    msg.value = 0.5076718592602995;

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
    msg.setTimeStamp(0.9499426101619695);
    msg.setSource(51322U);
    msg.setSourceEntity(3U);
    msg.setDestination(64105U);
    msg.setDestinationEntity(154U);
    msg.value = 0.6842540659612187;

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
    msg.setTimeStamp(0.1351265375224785);
    msg.setSource(34694U);
    msg.setSourceEntity(225U);
    msg.setDestination(27623U);
    msg.setDestinationEntity(79U);
    msg.value = 0.05422027514571248;

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
    msg.setTimeStamp(0.15360518356629893);
    msg.setSource(53316U);
    msg.setSourceEntity(198U);
    msg.setDestination(20034U);
    msg.setDestinationEntity(225U);
    msg.value = 0.7740857850382011;

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
    msg.setTimeStamp(0.6317289869681051);
    msg.setSource(45146U);
    msg.setSourceEntity(132U);
    msg.setDestination(8185U);
    msg.setDestinationEntity(192U);
    msg.value = 0.05327725774581449;

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
    msg.setTimeStamp(0.5070687907165835);
    msg.setSource(43901U);
    msg.setSourceEntity(237U);
    msg.setDestination(34429U);
    msg.setDestinationEntity(68U);
    msg.value = 0.5762903614803045;

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
    msg.setTimeStamp(0.5887606479739966);
    msg.setSource(50657U);
    msg.setSourceEntity(124U);
    msg.setDestination(36340U);
    msg.setDestinationEntity(69U);
    msg.value = 0.1363483932252494;

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
    msg.setTimeStamp(0.02855136388191204);
    msg.setSource(28348U);
    msg.setSourceEntity(130U);
    msg.setDestination(34537U);
    msg.setDestinationEntity(153U);
    msg.value = 0.39387889582466096;

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
    msg.setTimeStamp(0.519010496630639);
    msg.setSource(7504U);
    msg.setSourceEntity(120U);
    msg.setDestination(41869U);
    msg.setDestinationEntity(68U);
    msg.direction = 0.7691640683606312;
    msg.speed = 0.8919965291120859;
    msg.turbulence = 0.32840472309710433;

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
    msg.setTimeStamp(0.4115387693062612);
    msg.setSource(63728U);
    msg.setSourceEntity(98U);
    msg.setDestination(23483U);
    msg.setDestinationEntity(97U);
    msg.direction = 0.7702362422227882;
    msg.speed = 0.49392874876849313;
    msg.turbulence = 0.9840177407490914;

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
    msg.setTimeStamp(0.35821271107074837);
    msg.setSource(19745U);
    msg.setSourceEntity(243U);
    msg.setDestination(40378U);
    msg.setDestinationEntity(190U);
    msg.direction = 0.25272522274304854;
    msg.speed = 0.16937195529538862;
    msg.turbulence = 0.7007199821403237;

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
    msg.setTimeStamp(0.6635886012061154);
    msg.setSource(62109U);
    msg.setSourceEntity(183U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(184U);
    msg.value = 0.9287149314240882;

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
    msg.setTimeStamp(0.5507391756234447);
    msg.setSource(22864U);
    msg.setSourceEntity(173U);
    msg.setDestination(56594U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8913269893816391;

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
    msg.setTimeStamp(0.8190359396044458);
    msg.setSource(44541U);
    msg.setSourceEntity(50U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7668542712567281;

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
    msg.setTimeStamp(0.5522151817039923);
    msg.setSource(63839U);
    msg.setSourceEntity(41U);
    msg.setDestination(28126U);
    msg.setDestinationEntity(75U);
    msg.value.assign("MIQZUSXEXNFOCQZEJGUNPXLZAGEYXEIYKTWKRSNOANDRCAKOWZFHFZKBSNVVKYAIGYPUCECWWUVBHBJSXHTELNFJDIPMGEIOILGYKSAVLQKZPCZYAYKNRAXSRJMHDTIIH");

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
    msg.setTimeStamp(0.3582523950640981);
    msg.setSource(26845U);
    msg.setSourceEntity(157U);
    msg.setDestination(58111U);
    msg.setDestinationEntity(8U);
    msg.value.assign("GYUKFDQYRTTOUVFOEHIXMVQPJRLOJNSWSGPAXRIZJZSDMXWCFUCTYWVNIIFGKILQQMEIOGXCUHSWJVMRZFERMMDOZFSXPGIHJTBOZAZTYLCNHDVHPEASAGOTRGLUGPZVYXQEQRNBNUNDKTAKPHBHFLWJFCCJNIPKYIEM");

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
    msg.setTimeStamp(0.29086029647335854);
    msg.setSource(34727U);
    msg.setSourceEntity(56U);
    msg.setDestination(41851U);
    msg.setDestinationEntity(171U);
    msg.value.assign("PBWFBWLIJQXHFHANNRKRTYSFODLGLLTBBEVZSQHFJGZCXEJYSNIOGJLCUQMBSAHDWWXMDYOKKRWWKUJYAZBESABHNFIRQ");

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
    msg.setTimeStamp(0.7394178208109516);
    msg.setSource(5638U);
    msg.setSourceEntity(232U);
    msg.setDestination(35686U);
    msg.setDestinationEntity(197U);
    const signed char tmp_msg_0[] = {96, 109, -36, -8, 7, -42, -63, 78, -86, -83, -1, 76, -61, -79, 118, 81, -66, 109, -76, -38, -24, -85, 93, 56, -112, -62, 113, -60, 0, 116, 77, -22, -118, -124, -21, -41, -109, -6, -62, 68, 126, 90, 119, 28, 120, -63, -81, -100, -112, -123, -103, -51, -84, 7, -21, -42, -74, 126, -81, -125, -50, -85, 6, -74, -38, 104, 115, 83, 17, 78, -55, 125, 69, 39, -25, -106, 13, 80, 60, 63, -4, -72, 22, 39, 20, 26, 45, -81, -95, 72, 71, -89, 0, 112, -26, 60, 111, -105, -72, 20, -95, -58, 66, -107, -96, 44, 18, -93, -20, -89, 83, 113, 61, -32, 32, -84, 94, -105, -107, -5, 40, -115, 71, -91, 80, 32, -76, -96, 108, 4, -73, 88, -74, -58, 35, -78, -19, 113, -111, 60, 72, 60, -59, 66, 80, -99, 94, -117, -93, -84, 116, -61, -128, -35, -37, -66, -60, 54, -10, -65, -115, 59, -35, 84, -57, -44, -73, 110, 119, 54, 95, -23, 12, -110, 110, 75, -124, -27, 15, -110, -111, 7, -60, -28, 71, 21, -65, -77, -39, 97, 89, 34, -97, -91, 81, 11, 81};
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
    msg.setTimeStamp(0.43155749858472825);
    msg.setSource(28864U);
    msg.setSourceEntity(71U);
    msg.setDestination(13449U);
    msg.setDestinationEntity(73U);
    const signed char tmp_msg_0[] = {-109, 67, -110, -85, -120, -85, 87, 61, 87, -101, 22, -95, -96, 117, 96, 53, -32, -49, 103, 110, 59, 68, -27, 30, 40, -45, 32, 72, 38, 54, 111, 126, -58, -115, 56, -54, 9, -47, 73, -128, -25, -103, -37, 61, -33, 119};
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
    msg.setTimeStamp(0.5452329387869831);
    msg.setSource(52514U);
    msg.setSourceEntity(96U);
    msg.setDestination(16864U);
    msg.setDestinationEntity(32U);
    const signed char tmp_msg_0[] = {-102, 100, -17, 2, -68, 7, 72, -51, -89, -111, 95, -15, -75, -90, 33, -108};
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
    msg.setTimeStamp(0.08719483409952555);
    msg.setSource(52841U);
    msg.setSourceEntity(227U);
    msg.setDestination(44644U);
    msg.setDestinationEntity(3U);
    msg.value = 0.9118302409429311;

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
    msg.setTimeStamp(0.8266160210680645);
    msg.setSource(63254U);
    msg.setSourceEntity(95U);
    msg.setDestination(20383U);
    msg.setDestinationEntity(103U);
    msg.value = 0.4800707304155173;

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
    msg.setTimeStamp(0.796036433833139);
    msg.setSource(9816U);
    msg.setSourceEntity(20U);
    msg.setDestination(29361U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6798686519476915;

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
    msg.setTimeStamp(0.2810461241975345);
    msg.setSource(53887U);
    msg.setSourceEntity(186U);
    msg.setDestination(57433U);
    msg.setDestinationEntity(67U);
    msg.type = 164U;
    msg.frequency = 1672416188U;
    msg.min_range = 16901U;
    msg.max_range = 8780U;
    msg.bits_per_point = 55U;
    msg.scale_factor = 0.2318234024681014;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.30648595147416857;
    tmp_msg_0.beam_height = 0.8288485173794852;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {66, 100, -34, -46, -58, -10, -93, -14, -79, -46, 78, 92, 22, -101, 38, 103, -89, -95, -116, -61, -9, -20, 4, -93, 101, 9, -90, 76, 33, 45, 103, -46, 33, -89, -34, 2, -25, 42, 123, 24, 108, 30, -11, -103, -73, 88, 108, 67, -70, 71, -38, 2, 0, 47, -125, -40, -22, 19, -4, -36, 99, 103, 50, -19, 92, 61, 32, 47, -79, 43, -60, 126, 72, 47, -3, 0, 44, 11, 74, -68, 23, -83, -21, -39, -40, -13, 83, 64, 69, 109, 40, -24, 126, -54, 73, -3, 30, 50, 86, 83, -33, -116, -128, -119, -122, -117, -125, -118, -61, 88, -66, -59, 106, 43, -99, 41, -6, -57, 39, -43, 11, 112, 59, 0, 91, 93, 118, 94, 37, 23, -23, -46, -107, -18, 97, 0, 56, 117, -62, -2, 99, -22, -113, -70, -29, 53, -53, 90, -121, 16, -23, -19, -78, 63, 117, 41, -29, 81, -35, -101, 11, -57, -59, -62, 94, -18, 92, 48, -123, -21, 113, 62, -16, 71, 91, 125, 16, -68, 12, 98, -30};
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
    msg.setTimeStamp(0.8225790634009509);
    msg.setSource(61906U);
    msg.setSourceEntity(238U);
    msg.setDestination(43903U);
    msg.setDestinationEntity(101U);
    msg.type = 168U;
    msg.frequency = 1459607461U;
    msg.min_range = 7039U;
    msg.max_range = 4601U;
    msg.bits_per_point = 232U;
    msg.scale_factor = 0.2772005371874965;
    const signed char tmp_msg_0[] = {-36, 113, -64, 75, 103, -9, -65, 98, 119, 114, -115, -14, 27, -67, -107, 39, 118, -51, 7, 113, -46, -123, -19, 87, 36, -119, -38, 37, 80, -111, -18, -60, -86, -102, 19, 44, -101, -61, 26, 1, 126, -101, 5, 37, 76, 109, 66, -27, -21, 10, -78, -63, -76, -19, -30, -28, -37, 91, 116, -39, -116, -2, -14};
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
    msg.setTimeStamp(0.3125218281013338);
    msg.setSource(3231U);
    msg.setSourceEntity(170U);
    msg.setDestination(22873U);
    msg.setDestinationEntity(33U);
    msg.type = 78U;
    msg.frequency = 1400793752U;
    msg.min_range = 10878U;
    msg.max_range = 60573U;
    msg.bits_per_point = 118U;
    msg.scale_factor = 0.9481687341814654;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7358146127949305;
    tmp_msg_0.beam_height = 0.6071385392847035;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {123, -42, 41, -122, 34, 81, 24, -72, 87, 87, 99, 95, -11, -121, 48, -122, -2, 96, -28, -27, 1, -42, -51, -73, 63, 109, 21, -6, 115, -96, -31, 53, 114, -125, 57, 103, 20, 1, 111, 53, 16, 62, 65, -120, 55, 1, -2, 109, 121, 105, -89, 43, 82, -24, -122, 8, -75, 59, -93, -13, 114, 31};
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
    msg.setTimeStamp(0.7764302961943688);
    msg.setSource(38338U);
    msg.setSourceEntity(250U);
    msg.setDestination(54607U);
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
    msg.setTimeStamp(0.9580981535583183);
    msg.setSource(17272U);
    msg.setSourceEntity(152U);
    msg.setDestination(31152U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.33138641750283215);
    msg.setSource(51311U);
    msg.setSourceEntity(231U);
    msg.setDestination(14953U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.6560640694868876);
    msg.setSource(28191U);
    msg.setSourceEntity(144U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(101U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.44313982598242585);
    msg.setSource(48359U);
    msg.setSourceEntity(222U);
    msg.setDestination(19748U);
    msg.setDestinationEntity(59U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.6758791253084216);
    msg.setSource(33506U);
    msg.setSourceEntity(113U);
    msg.setDestination(33541U);
    msg.setDestinationEntity(161U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.5434122072742877);
    msg.setSource(36326U);
    msg.setSourceEntity(188U);
    msg.setDestination(34923U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9404106041146618;
    msg.confidence = 0.6885063974960658;
    msg.opmodes.assign("ANBCORQFOVPHMDVTLBLDJXQVZXLCCPVSAUXWDFPSILYUZDRDNIGGQTGCKRKEZRXVZHIJYUPSVUNUKFFYJSQROBLVJKITRTDOJMGRDPOJDOSKXZXVGBIURYFMBUNNQ");

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
    msg.setTimeStamp(0.2604426145344536);
    msg.setSource(35963U);
    msg.setSourceEntity(154U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8942113799419346;
    msg.confidence = 0.10622978169170239;
    msg.opmodes.assign("NYTRWWFYISYRKRXUTXCIEYSFIBBMEHRHHNDFZQCOHGMJVCTKMSEDIBMWLWKVMMSYMJIGSKCZIPRSWJZPAJGPEXBDWSVYMKNFOPDXUOTFMTXKQNBKJAUPRTQLKJFIZHXUHYPZQLLTKQHEIFDCOKJATILASXGLEQVGTMBWOJXGZONLASOCNVOFDHAYQLBGYJDYUPDZNUGGNSLFQWRENVAXHPQOVPBURADUZCCGVWXZ");

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
    msg.setTimeStamp(0.2943365118579986);
    msg.setSource(43870U);
    msg.setSourceEntity(180U);
    msg.setDestination(39805U);
    msg.setDestinationEntity(128U);
    msg.value = 0.4972024700732237;
    msg.confidence = 0.9536615848944274;
    msg.opmodes.assign("FECXSYDIKPUXBJUFOKMYTXKAZNGXZWJAPJEDDJUPBMMJWAGMWAVVJGNQCXOLTFHRALTNTEXPDYQRWNHYFMNKVUFGJCPIRGRWNMYYCHMWQLFCGEODSZZRVEXQYSGUUQSAMWQGYILTTCSIMNOOKKGDUBCBCTQHYLDAHPSOTVTBPNXVDRQLWUOJLZIBAIVNCSZRWCSFOZQPEXJIQDEVMHSZSUZHERILHLB");

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
    msg.setTimeStamp(0.8951922324813723);
    msg.setSource(52617U);
    msg.setSourceEntity(8U);
    msg.setDestination(60630U);
    msg.setDestinationEntity(178U);
    msg.itow = 1281200284U;
    msg.lat = 0.8763429012113526;
    msg.lon = 0.07638321233530565;
    msg.height_ell = 0.23093892611280598;
    msg.height_sea = 0.08494572926760868;
    msg.hacc = 0.2593363498430775;
    msg.vacc = 0.1591555028802626;
    msg.vel_n = 0.3309246910611858;
    msg.vel_e = 0.3932490006927144;
    msg.vel_d = 0.9996562767382988;
    msg.speed = 0.4119957827447015;
    msg.gspeed = 0.6727464938839823;
    msg.heading = 0.956706674049795;
    msg.sacc = 0.7691072135729748;
    msg.cacc = 0.07994767204096642;

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
    msg.setTimeStamp(0.8744719320591823);
    msg.setSource(38558U);
    msg.setSourceEntity(184U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(35U);
    msg.itow = 2922466446U;
    msg.lat = 0.9229236178461808;
    msg.lon = 0.5145591875182471;
    msg.height_ell = 0.6610763988069785;
    msg.height_sea = 0.6678428795221655;
    msg.hacc = 0.5678483067134003;
    msg.vacc = 0.11624158177717803;
    msg.vel_n = 0.6429049099669975;
    msg.vel_e = 0.4150772005912482;
    msg.vel_d = 0.288533751428803;
    msg.speed = 0.3617756209191725;
    msg.gspeed = 0.5264770120220262;
    msg.heading = 0.5945552282058808;
    msg.sacc = 0.27431937682573615;
    msg.cacc = 0.8815304699397339;

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
    msg.setTimeStamp(0.265398846538314);
    msg.setSource(56411U);
    msg.setSourceEntity(242U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(123U);
    msg.itow = 3519019489U;
    msg.lat = 0.5957784829544215;
    msg.lon = 0.7513447117509513;
    msg.height_ell = 0.7607765111621637;
    msg.height_sea = 0.062277793504252776;
    msg.hacc = 0.13097301298637454;
    msg.vacc = 0.13931063833472124;
    msg.vel_n = 0.9494120104106977;
    msg.vel_e = 0.056582407348021335;
    msg.vel_d = 0.7379709735463804;
    msg.speed = 0.8383367860480005;
    msg.gspeed = 0.26006467696962676;
    msg.heading = 0.2137227961801289;
    msg.sacc = 0.7357857218680148;
    msg.cacc = 0.13018771317013722;

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
    msg.setTimeStamp(0.4551419510083444);
    msg.setSource(19380U);
    msg.setSourceEntity(15U);
    msg.setDestination(21996U);
    msg.setDestinationEntity(38U);
    msg.id = 54U;
    msg.value = 0.8403410273707125;

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
    msg.setTimeStamp(0.19814889716314144);
    msg.setSource(45122U);
    msg.setSourceEntity(210U);
    msg.setDestination(6225U);
    msg.setDestinationEntity(247U);
    msg.id = 104U;
    msg.value = 0.4634766768595554;

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
    msg.setTimeStamp(0.9822181656512318);
    msg.setSource(1052U);
    msg.setSourceEntity(66U);
    msg.setDestination(41483U);
    msg.setDestinationEntity(199U);
    msg.id = 23U;
    msg.value = 0.668779881758641;

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
    msg.setTimeStamp(0.7442117731401332);
    msg.setSource(48024U);
    msg.setSourceEntity(19U);
    msg.setDestination(38392U);
    msg.setDestinationEntity(51U);
    msg.x = 0.109745002160896;
    msg.y = 0.5884600758228532;
    msg.z = 0.23847085092320364;
    msg.phi = 0.20941557251743037;
    msg.theta = 0.734561514313882;
    msg.psi = 0.4955796227112187;

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
    msg.setTimeStamp(0.8806277518824349);
    msg.setSource(16580U);
    msg.setSourceEntity(192U);
    msg.setDestination(13096U);
    msg.setDestinationEntity(157U);
    msg.x = 0.2382860873846594;
    msg.y = 0.10838661187086396;
    msg.z = 0.3649990505861368;
    msg.phi = 0.8157406320226626;
    msg.theta = 0.18183905861829375;
    msg.psi = 0.6782287557785022;

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
    msg.setTimeStamp(0.8231674734828743);
    msg.setSource(59618U);
    msg.setSourceEntity(124U);
    msg.setDestination(24842U);
    msg.setDestinationEntity(252U);
    msg.x = 0.761589129130774;
    msg.y = 0.7936225611181621;
    msg.z = 0.1894499391059915;
    msg.phi = 0.37534587375749817;
    msg.theta = 0.21879516058175652;
    msg.psi = 0.12332539007474264;

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
    msg.setTimeStamp(0.611022902861577);
    msg.setSource(14936U);
    msg.setSourceEntity(169U);
    msg.setDestination(56637U);
    msg.setDestinationEntity(131U);
    msg.beam_width = 0.3660903866301831;
    msg.beam_height = 0.11037205380770332;

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
    msg.setTimeStamp(0.3203452372581115);
    msg.setSource(27222U);
    msg.setSourceEntity(163U);
    msg.setDestination(56556U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.6064692653730419;
    msg.beam_height = 0.9489351446350867;

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
    msg.setTimeStamp(0.8669968456287415);
    msg.setSource(5536U);
    msg.setSourceEntity(187U);
    msg.setDestination(13416U);
    msg.setDestinationEntity(44U);
    msg.beam_width = 0.3129854189520028;
    msg.beam_height = 0.6871931573378376;

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
    msg.setTimeStamp(0.8767767582314071);
    msg.setSource(11972U);
    msg.setSourceEntity(128U);
    msg.setDestination(46926U);
    msg.setDestinationEntity(18U);
    msg.sane = 128U;

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
    msg.setTimeStamp(0.8934341755565598);
    msg.setSource(13257U);
    msg.setSourceEntity(79U);
    msg.setDestination(30378U);
    msg.setDestinationEntity(61U);
    msg.sane = 133U;

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
    msg.setTimeStamp(0.639638357679232);
    msg.setSource(37000U);
    msg.setSourceEntity(19U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(73U);
    msg.sane = 115U;

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
    msg.setTimeStamp(0.9146540707546932);
    msg.setSource(37288U);
    msg.setSourceEntity(15U);
    msg.setDestination(16689U);
    msg.setDestinationEntity(186U);
    msg.value = 0.650358820341902;

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
    msg.setTimeStamp(0.421114655131678);
    msg.setSource(14047U);
    msg.setSourceEntity(151U);
    msg.setDestination(52014U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9522309891751752;

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
    msg.setTimeStamp(0.44335439978861957);
    msg.setSource(64829U);
    msg.setSourceEntity(219U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9853480657546728;

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
    msg.setTimeStamp(0.975816088286647);
    msg.setSource(21290U);
    msg.setSourceEntity(223U);
    msg.setDestination(60702U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5737535667845944;

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
    msg.setTimeStamp(0.47985850368867977);
    msg.setSource(22268U);
    msg.setSourceEntity(78U);
    msg.setDestination(11998U);
    msg.setDestinationEntity(25U);
    msg.value = 0.7228529821111318;

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
    msg.setTimeStamp(0.777544769846262);
    msg.setSource(8914U);
    msg.setSourceEntity(0U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(47U);
    msg.value = 0.18031944143517464;

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
    msg.setTimeStamp(0.7862396182119549);
    msg.setSource(12545U);
    msg.setSourceEntity(154U);
    msg.setDestination(17617U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5888943986574844;

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
    msg.setTimeStamp(0.24140464791819172);
    msg.setSource(48618U);
    msg.setSourceEntity(128U);
    msg.setDestination(45967U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9698887216339331;

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
    msg.setTimeStamp(0.20235519076057285);
    msg.setSource(15230U);
    msg.setSourceEntity(165U);
    msg.setDestination(6862U);
    msg.setDestinationEntity(202U);
    msg.value = 0.7908553859865416;

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
    msg.setTimeStamp(0.8938279283513306);
    msg.setSource(35928U);
    msg.setSourceEntity(97U);
    msg.setDestination(30398U);
    msg.setDestinationEntity(82U);
    msg.value = 0.2004651533457481;

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
    msg.setTimeStamp(0.645484666861086);
    msg.setSource(35051U);
    msg.setSourceEntity(25U);
    msg.setDestination(37535U);
    msg.setDestinationEntity(177U);
    msg.value = 0.792139231279326;

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
    msg.setTimeStamp(0.8849702157760507);
    msg.setSource(33852U);
    msg.setSourceEntity(131U);
    msg.setDestination(19059U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8790004051212587;

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
    msg.setTimeStamp(0.6109234236201035);
    msg.setSource(1141U);
    msg.setSourceEntity(155U);
    msg.setDestination(10084U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8321000645371548;

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
    msg.setTimeStamp(0.51118139225486);
    msg.setSource(48907U);
    msg.setSourceEntity(160U);
    msg.setDestination(39087U);
    msg.setDestinationEntity(160U);
    msg.value = 0.36404497382530165;

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
    msg.setTimeStamp(0.2997772777703398);
    msg.setSource(65134U);
    msg.setSourceEntity(14U);
    msg.setDestination(59770U);
    msg.setDestinationEntity(131U);
    msg.value = 0.3369755997189795;

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
    msg.setTimeStamp(0.9870986661848016);
    msg.setSource(64725U);
    msg.setSourceEntity(177U);
    msg.setDestination(50767U);
    msg.setDestinationEntity(203U);
    msg.value = 0.07430298037799543;

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
    msg.setTimeStamp(0.5649563217873096);
    msg.setSource(54286U);
    msg.setSourceEntity(132U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(186U);
    msg.value = 0.3104467934963415;

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
    msg.setTimeStamp(0.24020185332617394);
    msg.setSource(52595U);
    msg.setSourceEntity(98U);
    msg.setDestination(1482U);
    msg.setDestinationEntity(202U);
    msg.value = 0.5214157239040461;

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
    msg.setTimeStamp(0.13351869531263472);
    msg.setSource(57746U);
    msg.setSourceEntity(221U);
    msg.setDestination(4036U);
    msg.setDestinationEntity(168U);
    msg.value = 0.38348895993475773;

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
    msg.setTimeStamp(0.5463765893329049);
    msg.setSource(51443U);
    msg.setSourceEntity(142U);
    msg.setDestination(41138U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8859072996926961;

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
    msg.setTimeStamp(0.1504388806783049);
    msg.setSource(34929U);
    msg.setSourceEntity(37U);
    msg.setDestination(15414U);
    msg.setDestinationEntity(165U);
    msg.value = 0.1995900269005927;

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
    msg.setTimeStamp(0.23580443298760845);
    msg.setSource(37468U);
    msg.setSourceEntity(110U);
    msg.setDestination(36078U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0979919077220468;

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
    msg.setTimeStamp(0.7585275849312986);
    msg.setSource(30608U);
    msg.setSourceEntity(145U);
    msg.setDestination(60618U);
    msg.setDestinationEntity(84U);
    msg.value = 0.7192126020502637;

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
    msg.setTimeStamp(0.8833227456771138);
    msg.setSource(27651U);
    msg.setSourceEntity(195U);
    msg.setDestination(63333U);
    msg.setDestinationEntity(231U);
    msg.value = 0.20604575795585245;

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
    msg.setTimeStamp(0.33272500865742205);
    msg.setSource(58453U);
    msg.setSourceEntity(251U);
    msg.setDestination(49202U);
    msg.setDestinationEntity(118U);
    msg.validity = 56885U;
    msg.type = 212U;
    msg.tow = 3559326149U;
    msg.base_lat = 0.8534727728255911;
    msg.base_lon = 0.33478836214432095;
    msg.base_height = 0.7131653709532804;
    msg.n = 0.16143882427224676;
    msg.e = 0.5268041322501357;
    msg.d = 0.11911478288907384;
    msg.v_n = 0.05789971933192761;
    msg.v_e = 0.6399698050553133;
    msg.v_d = 0.10158639061960106;
    msg.satellites = 166U;
    msg.iar_hyp = 1485U;
    msg.iar_ratio = 0.636798633274687;

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
    msg.setTimeStamp(0.8662033784581715);
    msg.setSource(50771U);
    msg.setSourceEntity(138U);
    msg.setDestination(49287U);
    msg.setDestinationEntity(227U);
    msg.validity = 59189U;
    msg.type = 253U;
    msg.tow = 3419700301U;
    msg.base_lat = 0.8618449076471686;
    msg.base_lon = 0.9326699181629583;
    msg.base_height = 0.4435621083496174;
    msg.n = 0.927916444769695;
    msg.e = 0.6363806932015867;
    msg.d = 0.3951420089541875;
    msg.v_n = 0.6815626798817733;
    msg.v_e = 0.02466835810124024;
    msg.v_d = 0.7403347199452759;
    msg.satellites = 192U;
    msg.iar_hyp = 7691U;
    msg.iar_ratio = 0.2906690370616165;

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
    msg.setTimeStamp(0.9865757557083138);
    msg.setSource(15255U);
    msg.setSourceEntity(57U);
    msg.setDestination(37924U);
    msg.setDestinationEntity(166U);
    msg.validity = 54921U;
    msg.type = 119U;
    msg.tow = 596835838U;
    msg.base_lat = 0.7456296420190349;
    msg.base_lon = 0.6757907810872407;
    msg.base_height = 0.6519106902931632;
    msg.n = 0.6568780510282586;
    msg.e = 0.8421550339628083;
    msg.d = 0.3674747900186224;
    msg.v_n = 0.2741255178904426;
    msg.v_e = 0.7082916140111555;
    msg.v_d = 0.6910985971467986;
    msg.satellites = 70U;
    msg.iar_hyp = 37305U;
    msg.iar_ratio = 0.9764979915445571;

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
    msg.setTimeStamp(0.7148832100423081);
    msg.setSource(52220U);
    msg.setSourceEntity(91U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(41U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.28348206011029864;
    tmp_msg_0.lon = 0.14733123150590055;
    tmp_msg_0.height = 0.5820362603552987;
    tmp_msg_0.x = 0.6612175204655903;
    tmp_msg_0.y = 0.5148153350706176;
    tmp_msg_0.z = 0.6929939000195354;
    tmp_msg_0.phi = 0.657424780217204;
    tmp_msg_0.theta = 0.9684722372962862;
    tmp_msg_0.psi = 0.133182782887734;
    tmp_msg_0.u = 0.2765159420054827;
    tmp_msg_0.v = 0.2781732197660499;
    tmp_msg_0.w = 0.49738749967768914;
    tmp_msg_0.vx = 0.2647182023385387;
    tmp_msg_0.vy = 0.8934619248195633;
    tmp_msg_0.vz = 0.8749158120748192;
    tmp_msg_0.p = 0.6506183079281271;
    tmp_msg_0.q = 0.9491240730287016;
    tmp_msg_0.r = 0.7298568356009988;
    tmp_msg_0.depth = 0.261951690156047;
    tmp_msg_0.alt = 0.4242656636319141;
    msg.state.set(tmp_msg_0);
    msg.type = 253U;

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
    msg.setTimeStamp(0.7659932131116346);
    msg.setSource(4404U);
    msg.setSourceEntity(205U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(19U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.08383327186266365;
    tmp_msg_0.lon = 0.7516750758969591;
    tmp_msg_0.height = 0.013135246262499622;
    tmp_msg_0.x = 0.7009432555924685;
    tmp_msg_0.y = 0.6738886950748721;
    tmp_msg_0.z = 0.2898219713476228;
    tmp_msg_0.phi = 0.559965915586787;
    tmp_msg_0.theta = 0.16930463075863333;
    tmp_msg_0.psi = 0.8871999048672226;
    tmp_msg_0.u = 0.8614140301983987;
    tmp_msg_0.v = 0.484619904872579;
    tmp_msg_0.w = 0.038086417372508063;
    tmp_msg_0.vx = 0.15087858861759196;
    tmp_msg_0.vy = 0.6560951577508477;
    tmp_msg_0.vz = 0.24026063305768974;
    tmp_msg_0.p = 0.4188821449971484;
    tmp_msg_0.q = 0.8541238129521443;
    tmp_msg_0.r = 0.2838999042746967;
    tmp_msg_0.depth = 0.11575030688063281;
    tmp_msg_0.alt = 0.4860835538368815;
    msg.state.set(tmp_msg_0);
    msg.type = 43U;

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
    msg.setTimeStamp(0.1830543720235822);
    msg.setSource(61013U);
    msg.setSourceEntity(238U);
    msg.setDestination(30047U);
    msg.setDestinationEntity(107U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.11717896632726243;
    tmp_msg_0.lon = 0.9455297852054079;
    tmp_msg_0.height = 0.9383910857019478;
    tmp_msg_0.x = 0.7472060454568855;
    tmp_msg_0.y = 0.41107601189669996;
    tmp_msg_0.z = 0.31833607892168914;
    tmp_msg_0.phi = 0.4014837586080233;
    tmp_msg_0.theta = 0.25607890648627873;
    tmp_msg_0.psi = 0.9012275267587251;
    tmp_msg_0.u = 0.308955280626814;
    tmp_msg_0.v = 0.7330365729119693;
    tmp_msg_0.w = 0.3082139360014785;
    tmp_msg_0.vx = 0.8745836441164996;
    tmp_msg_0.vy = 0.6144522391646432;
    tmp_msg_0.vz = 0.7003189347205327;
    tmp_msg_0.p = 0.46778117065035707;
    tmp_msg_0.q = 0.40819356249129946;
    tmp_msg_0.r = 0.13719737759787387;
    tmp_msg_0.depth = 0.9826329485708295;
    tmp_msg_0.alt = 0.9837480415390069;
    msg.state.set(tmp_msg_0);
    msg.type = 229U;

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
    msg.setTimeStamp(0.5426698710267572);
    msg.setSource(42572U);
    msg.setSourceEntity(130U);
    msg.setDestination(53243U);
    msg.setDestinationEntity(95U);
    msg.value = 0.867500736767108;

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
    msg.setTimeStamp(0.2107144933535421);
    msg.setSource(36652U);
    msg.setSourceEntity(191U);
    msg.setDestination(4666U);
    msg.setDestinationEntity(39U);
    msg.value = 0.28675524825488463;

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
    msg.setTimeStamp(0.10071066934976991);
    msg.setSource(52213U);
    msg.setSourceEntity(29U);
    msg.setDestination(15176U);
    msg.setDestinationEntity(170U);
    msg.value = 0.09904702875377891;

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
    msg.setTimeStamp(0.028584699300418293);
    msg.setSource(48474U);
    msg.setSourceEntity(247U);
    msg.setDestination(34825U);
    msg.setDestinationEntity(92U);
    msg.value = 0.29006630595759253;

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
    msg.setTimeStamp(0.13219834269647235);
    msg.setSource(25654U);
    msg.setSourceEntity(115U);
    msg.setDestination(25592U);
    msg.setDestinationEntity(225U);
    msg.value = 0.5135616379765366;

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
    msg.setTimeStamp(0.1094320547555605);
    msg.setSource(17989U);
    msg.setSourceEntity(43U);
    msg.setDestination(55118U);
    msg.setDestinationEntity(212U);
    msg.value = 0.02783584274741613;

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
    msg.setTimeStamp(0.5438813028533701);
    msg.setSource(52136U);
    msg.setSourceEntity(202U);
    msg.setDestination(61047U);
    msg.setDestinationEntity(15U);
    msg.value = 0.9267168688143601;

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
    msg.setTimeStamp(0.24291177357142757);
    msg.setSource(7438U);
    msg.setSourceEntity(181U);
    msg.setDestination(28087U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9618826018668045;

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
    msg.setTimeStamp(0.46164621009290463);
    msg.setSource(263U);
    msg.setSourceEntity(89U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(123U);
    msg.value = 0.016468403223954486;

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
    msg.setTimeStamp(0.20439283557693255);
    msg.setSource(26893U);
    msg.setSourceEntity(253U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(20U);
    msg.value = 0.14207106847531759;

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
    msg.setTimeStamp(0.8707472811495162);
    msg.setSource(33655U);
    msg.setSourceEntity(68U);
    msg.setDestination(61144U);
    msg.setDestinationEntity(49U);
    msg.value = 0.4773542808005894;

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
    msg.setTimeStamp(0.5586397171829736);
    msg.setSource(58845U);
    msg.setSourceEntity(12U);
    msg.setDestination(10401U);
    msg.setDestinationEntity(231U);
    msg.value = 0.25963378075703236;

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
    msg.setTimeStamp(0.045119683158338364);
    msg.setSource(13629U);
    msg.setSourceEntity(21U);
    msg.setDestination(57253U);
    msg.setDestinationEntity(10U);
    msg.value = 0.45805035807192374;

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
    msg.setTimeStamp(0.30421901328541157);
    msg.setSource(60177U);
    msg.setSourceEntity(219U);
    msg.setDestination(45004U);
    msg.setDestinationEntity(145U);
    msg.value = 0.32808553499773707;

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
    msg.setTimeStamp(0.2699757800313328);
    msg.setSource(38211U);
    msg.setSourceEntity(37U);
    msg.setDestination(46554U);
    msg.setDestinationEntity(104U);
    msg.value = 0.08671066219691026;

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
    msg.setTimeStamp(0.6318251445647426);
    msg.setSource(5415U);
    msg.setSourceEntity(189U);
    msg.setDestination(6744U);
    msg.setDestinationEntity(179U);
    msg.id = 130U;
    msg.zoom = 252U;
    msg.action = 168U;

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
    msg.setTimeStamp(0.9562749899614462);
    msg.setSource(21526U);
    msg.setSourceEntity(70U);
    msg.setDestination(40661U);
    msg.setDestinationEntity(58U);
    msg.id = 79U;
    msg.zoom = 157U;
    msg.action = 226U;

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
    msg.setTimeStamp(0.6250098555377991);
    msg.setSource(30502U);
    msg.setSourceEntity(241U);
    msg.setDestination(46606U);
    msg.setDestinationEntity(250U);
    msg.id = 183U;
    msg.zoom = 82U;
    msg.action = 63U;

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
    msg.setTimeStamp(0.8495055591582189);
    msg.setSource(9170U);
    msg.setSourceEntity(135U);
    msg.setDestination(48895U);
    msg.setDestinationEntity(116U);
    msg.id = 107U;
    msg.value = 0.9176681067632833;

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
    msg.setTimeStamp(0.29352471948497993);
    msg.setSource(62400U);
    msg.setSourceEntity(88U);
    msg.setDestination(26759U);
    msg.setDestinationEntity(235U);
    msg.id = 141U;
    msg.value = 0.2202126447876952;

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
    msg.setTimeStamp(0.6543426008813009);
    msg.setSource(22073U);
    msg.setSourceEntity(34U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(134U);
    msg.id = 231U;
    msg.value = 0.4902850515898356;

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
    msg.setTimeStamp(0.2581972796415879);
    msg.setSource(6643U);
    msg.setSourceEntity(29U);
    msg.setDestination(29632U);
    msg.setDestinationEntity(171U);
    msg.id = 50U;
    msg.value = 0.7413058470480538;

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
    msg.setTimeStamp(0.5697240334486793);
    msg.setSource(11553U);
    msg.setSourceEntity(24U);
    msg.setDestination(61273U);
    msg.setDestinationEntity(208U);
    msg.id = 91U;
    msg.value = 0.6989470219066032;

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
    msg.setTimeStamp(0.3704435880539012);
    msg.setSource(38575U);
    msg.setSourceEntity(4U);
    msg.setDestination(25228U);
    msg.setDestinationEntity(181U);
    msg.id = 121U;
    msg.value = 0.45564539565575624;

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
    msg.setTimeStamp(0.6633590037943312);
    msg.setSource(29840U);
    msg.setSourceEntity(165U);
    msg.setDestination(34984U);
    msg.setDestinationEntity(159U);
    msg.id = 14U;
    msg.angle = 0.4942297050704322;

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
    msg.setTimeStamp(0.3381097142027293);
    msg.setSource(46065U);
    msg.setSourceEntity(95U);
    msg.setDestination(57562U);
    msg.setDestinationEntity(159U);
    msg.id = 108U;
    msg.angle = 0.12890859773585017;

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
    msg.setTimeStamp(0.8396777746357997);
    msg.setSource(60747U);
    msg.setSourceEntity(36U);
    msg.setDestination(64484U);
    msg.setDestinationEntity(201U);
    msg.id = 139U;
    msg.angle = 0.6158458573487784;

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
    msg.setTimeStamp(0.9482740410041661);
    msg.setSource(42493U);
    msg.setSourceEntity(130U);
    msg.setDestination(27915U);
    msg.setDestinationEntity(89U);
    msg.op = 78U;
    msg.actions.assign("AVNTAINYMMOYAYSYSUGZLVMZZDPAAX");

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
    msg.setTimeStamp(0.7135178246667362);
    msg.setSource(59789U);
    msg.setSourceEntity(71U);
    msg.setDestination(47929U);
    msg.setDestinationEntity(177U);
    msg.op = 136U;
    msg.actions.assign("AKVYELBQKNUWSNQZGIFFCHJQHZBUJDWSPUFABE");

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
    msg.setTimeStamp(0.2848403455799551);
    msg.setSource(46384U);
    msg.setSourceEntity(229U);
    msg.setDestination(28662U);
    msg.setDestinationEntity(103U);
    msg.op = 139U;
    msg.actions.assign("LYDSZTDBKUFZSTKMEKWMBJFIPUUNVCATWOTPWZEZKBTDCCLZKDYVMSSWWXXAFFIMEVHXPDCTGUUHPJDHRSVGPWLMFEBKQNIHJQRXOPAHZAPFCOOVIIVGKHLVQHJSRCJFETNSNLAMYEKEJULQDNOGXCKMBUCIFQPAHACAMAZFYRKDDVOIGRXDQTQBYFSXITBYYEZWWEIR");

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
    msg.setTimeStamp(0.8408194751011823);
    msg.setSource(13264U);
    msg.setSourceEntity(26U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(60U);
    msg.actions.assign("KUOHLXVBKHBNMMTTYIOLXQZHO");

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
    msg.setTimeStamp(0.08804163315896929);
    msg.setSource(21512U);
    msg.setSourceEntity(70U);
    msg.setDestination(29168U);
    msg.setDestinationEntity(206U);
    msg.actions.assign("THFTQZKVAPBXPZ");

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
    msg.setTimeStamp(0.2013268829560656);
    msg.setSource(57017U);
    msg.setSourceEntity(160U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(127U);
    msg.actions.assign("QWBYNVTLORMJYSAGDMQXFVPDLNMQDLUOBDZEYTGLDGIXWIYIANTIAOUAZVZEFSFMCOPXXODKWRUGWWKTPEIENTWQKRRJBRVHXJCHZNCKPGZRZJTJBYYXXODOZPPQHCTFOMBNCPYMFNTUSYZUGZ");

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
    msg.setTimeStamp(0.1855221548896745);
    msg.setSource(62340U);
    msg.setSourceEntity(102U);
    msg.setDestination(40864U);
    msg.setDestinationEntity(193U);
    msg.button = 232U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.6236299579375904);
    msg.setSource(6696U);
    msg.setSourceEntity(241U);
    msg.setDestination(25177U);
    msg.setDestinationEntity(24U);
    msg.button = 239U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.3749527136923867);
    msg.setSource(48380U);
    msg.setSourceEntity(196U);
    msg.setDestination(5779U);
    msg.setDestinationEntity(18U);
    msg.button = 94U;
    msg.value = 202U;

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
    msg.setTimeStamp(0.09209494878288316);
    msg.setSource(13166U);
    msg.setSourceEntity(172U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(129U);
    msg.op = 143U;
    msg.text.assign("HTNNYYLVXQCJJYGEPWATTJUXFJZLGIILJYAWUESWJHVJGVBDEHYEDOSUNJUROCIZCBLTPDIOTRCSBJMXZCYCPSBXLFHKPSTQMWFBYZOHNSZCRNGFUGLIQSQHYPIXEWCPDNMTRXMKOA");

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
    msg.setTimeStamp(0.3257583711307045);
    msg.setSource(6820U);
    msg.setSourceEntity(78U);
    msg.setDestination(2455U);
    msg.setDestinationEntity(71U);
    msg.op = 72U;
    msg.text.assign("PANZPZDGFWMFOIQGMTHPKGNTQBJXRCGBLOBBBQEGVRQFSFYRCKCHRNTHEFRCORVZIKNVAQSLZUUUFLJQIEPOHW");

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
    msg.setTimeStamp(0.9936851479297467);
    msg.setSource(44593U);
    msg.setSourceEntity(9U);
    msg.setDestination(8124U);
    msg.setDestinationEntity(170U);
    msg.op = 97U;
    msg.text.assign("QLKMCCEYUYMQZRGGGVBJAMXABFRMTIIFOPFKPNZUUVPMRFLHOSBKOSPSIALBAUCAMVRHLMNSASHTPZHADXOOPYKWNTUHDSCXHIHZEELXNKDVZQZBWKNWPPEABLGNTHAJEJDYFGGCFSHVRLDOABIJBHTFXZFREIQCUTEOYJGQFKGSYOUNWNXFZELTKYCWYY");

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
    msg.setTimeStamp(0.9582227258489061);
    msg.setSource(60194U);
    msg.setSourceEntity(126U);
    msg.setDestination(3452U);
    msg.setDestinationEntity(134U);
    msg.op = 98U;
    msg.time_remain = 0.8508984455154791;
    msg.sched_time = 0.12128268152912958;

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
    msg.setTimeStamp(0.16892828910598012);
    msg.setSource(14356U);
    msg.setSourceEntity(18U);
    msg.setDestination(57053U);
    msg.setDestinationEntity(117U);
    msg.op = 84U;
    msg.time_remain = 0.9228032970199471;
    msg.sched_time = 0.6428915547821654;

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
    msg.setTimeStamp(0.07841522461359995);
    msg.setSource(13052U);
    msg.setSourceEntity(68U);
    msg.setDestination(56928U);
    msg.setDestinationEntity(114U);
    msg.op = 187U;
    msg.time_remain = 0.7834915141760891;
    msg.sched_time = 0.25713914994973364;

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
    msg.setTimeStamp(0.11125529112446664);
    msg.setSource(57756U);
    msg.setSourceEntity(213U);
    msg.setDestination(65257U);
    msg.setDestinationEntity(72U);
    msg.name.assign("MTBRRYOMMESBSPCBFODDEDPDXICJFZVIQVENENVWMIDCANGXTLXQXSFQHSGZGFNFYJUGJUPZXTFULHEAHRITEHZQKAOILBCDHDBIDLKPYMBRVAESMKLQVIWBSXLUTJQJZWIAVAJJCKUOZEKAPOWAHCMCZJLFLKNCHYYNTPWWATWPRFOQVUMUPEIRGGYYXZNMRWCRSYPGGUOKYXNSHSGRCFBQDLRUBQHKLVVFKTBXOZTOGOSPT");
    msg.op = 171U;
    msg.sched_time = 0.585308458602923;

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
    msg.setTimeStamp(0.4452996248144674);
    msg.setSource(53846U);
    msg.setSourceEntity(142U);
    msg.setDestination(34127U);
    msg.setDestinationEntity(240U);
    msg.name.assign("GTXLEHHFXCVRCJRKWMPCRNDQJOOUFUQGRTKYGAYVJYJGBUGHBZANDUNGHHYLUXX");
    msg.op = 221U;
    msg.sched_time = 0.306340589734466;

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
    msg.setTimeStamp(0.37513537927713136);
    msg.setSource(26019U);
    msg.setSourceEntity(187U);
    msg.setDestination(14567U);
    msg.setDestinationEntity(9U);
    msg.name.assign("OMSAXNRFVRCDUHFSEYXZPZTUNHXLEMUEAARYBHXPTWIHYODAAGNSQLSAO");
    msg.op = 183U;
    msg.sched_time = 0.5290939776081507;

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
    msg.setTimeStamp(0.4966194322215922);
    msg.setSource(64293U);
    msg.setSourceEntity(46U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.05839412023125712);
    msg.setSource(34002U);
    msg.setSourceEntity(223U);
    msg.setDestination(40548U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.2603551982359624);
    msg.setSource(42916U);
    msg.setSourceEntity(41U);
    msg.setDestination(40403U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.9030216322013069);
    msg.setSource(55117U);
    msg.setSourceEntity(9U);
    msg.setDestination(62443U);
    msg.setDestinationEntity(182U);
    msg.name.assign("UJONBGPRCNOHK");
    msg.state = 183U;

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
    msg.setTimeStamp(0.10863087735658539);
    msg.setSource(11310U);
    msg.setSourceEntity(134U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(25U);
    msg.name.assign("ZIHLKITQDRH");
    msg.state = 231U;

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
    msg.setTimeStamp(0.3535743979317574);
    msg.setSource(27114U);
    msg.setSourceEntity(241U);
    msg.setDestination(5192U);
    msg.setDestinationEntity(59U);
    msg.name.assign("SYRBNCMOLGRRCXMPOUYIJQPWFEPIOIJMUYINWSRBTGAKNVDKLXQRLXFQNBFSHCBESIFZSKCHXALOOCDMAUQDVMAFFONKEKCBDTZZCYHKMDDLGHFGZPXPBZGIEWWKOJQMNVHMTWJRUQPHDDIULYXVFYFUPQAREAZSDAJJJRUHWMAWZRNCRAKTMWHXHJVUDLKOBU");
    msg.state = 90U;

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
    msg.setTimeStamp(0.4102271452565708);
    msg.setSource(56981U);
    msg.setSourceEntity(109U);
    msg.setDestination(45964U);
    msg.setDestinationEntity(116U);
    msg.name.assign("VJNGKNPSBHGPUDWQAJAAEGOGNVRWYIGZXHLXDNRKVBDSPEUSIZCROXETHDNPTXZBIGZYXCQIDNDCZBOZJPHDEICXFRCLMJEKONAGAEOMIWTJIKTHPGFORIKCPAATTCYLPEVYRUCJQXWOSYQUUDQUOKTSQYRQMLWJSUWELJVCVNADYQBMTCYBFGYSFOUXFZVKHDIHWFGEMBBAQZKJLBVMHQNKWRUHSSEFUOZFYJLMRBHMALPWPFLMSTXVKXT");
    msg.value = 196U;

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
    msg.setTimeStamp(0.5758005843853351);
    msg.setSource(52869U);
    msg.setSourceEntity(79U);
    msg.setDestination(17367U);
    msg.setDestinationEntity(76U);
    msg.name.assign("ZOWEHWROIPTDPFIJNJHHXSFUKPYFBSABJGQNYQVJZZDTXRGVBNIHZFPCZTCUNAVYVUEMSEEUDMKCUYZQQTLSAECYOQFWTNYBXGUDOSXXKIEIPMVSKCKQLTKCZQREHYVEBORRWKKZKOSNBRIO");
    msg.value = 203U;

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
    msg.setTimeStamp(0.13143613410564314);
    msg.setSource(25889U);
    msg.setSourceEntity(104U);
    msg.setDestination(7320U);
    msg.setDestinationEntity(160U);
    msg.name.assign("NLNGQLTEWGSNWESPLQZOPAMKIDMIJPGXKBHOOEZRQALMTADPJKMTDDSQCYCXBVVVSJMTVVTXWSUZYGJT");
    msg.value = 217U;

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
    msg.setTimeStamp(0.36411822652830805);
    msg.setSource(40298U);
    msg.setSourceEntity(12U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(204U);
    msg.name.assign("IOXPDPVEMOCEBEVUERLBFCETMGKUUTWKKXGBVGBZZVHLISHSQFYUIBG");

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
    msg.setTimeStamp(0.6560753097356015);
    msg.setSource(56437U);
    msg.setSourceEntity(67U);
    msg.setDestination(56693U);
    msg.setDestinationEntity(119U);
    msg.name.assign("GZVPCCROFMNNKGEELDTATQIUNOLYHBAWGEWPCEHMUAJRQGOOWKRYNLULZDQCIZLBNDPCUUBQFLJEMNXVXHNTIZYPVOSTAXBMMPQGKGHTSAHJGQF");

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
    msg.setTimeStamp(0.8921114766415696);
    msg.setSource(22652U);
    msg.setSourceEntity(72U);
    msg.setDestination(7780U);
    msg.setDestinationEntity(63U);
    msg.name.assign("TPIEYJOMXXFKBNHREHTPZJJTUBWHAUYUGRPDJPXBEAKVSMRELSDAHMZZZUSTQAD");

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
    msg.setTimeStamp(0.06030670870308141);
    msg.setSource(5391U);
    msg.setSourceEntity(28U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(121U);
    msg.name.assign("NCVTRESQMVCXPDQLHMKUNABPNCJRIVUOWCXYSGCHFPFJBDTGHMPWESZHPDBIGGFYZFAASYLVMDDGBRLFNTZIOJEDEPFTKJEBVJVBMXWXCGMRNYBSQIOOZSTWZWUEVELFIHZ");
    msg.value = 141U;

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
    msg.setTimeStamp(0.934553648532838);
    msg.setSource(39714U);
    msg.setSourceEntity(132U);
    msg.setDestination(58479U);
    msg.setDestinationEntity(27U);
    msg.name.assign("KFGLPCXAMGDQFYZUHTXKLWEAYLVCVLPMSPWOTVESUBPNDPUGGZSWQDKAWNSKOSIYHRMAWZPMREVCBBXULFQUMLYUXBQHXRUZHJMFBYXCELUUTTFJIMRMWQMYBEJNWULTPTHVOGTOENELMKDKOEZAVPSVIODQAHFYDIHIYTORCDVBQIAJGIEIYNCGWOCHIPYAJOLANJNGKKZQGZCFDTCRNFKHROFXBPNCJZVGASRIZWTXJRFQVXSQSZH");
    msg.value = 177U;

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
    msg.setTimeStamp(0.07806784990543647);
    msg.setSource(56905U);
    msg.setSourceEntity(169U);
    msg.setDestination(36073U);
    msg.setDestinationEntity(50U);
    msg.name.assign("YIPKWAJRWFLOGMWMJTYGUHLECDYWOVEYBXXOMPUKKYVSTARFCXOODCTBPELPYYKQQPEXUIHLRIPDXIIJUNVTNVJQUBSNNJVOPUQCFRBZBOFFJXGNKFUXWURZANCDCPHYQDMLOCFWLQZAAYZGGARNRKDXVSJIGWLDSNQEPGJKVHQCDKDWRMGFAVZIVMGXOPEFWAZUWETHSZEH");
    msg.value = 115U;

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
    msg.setTimeStamp(0.35386547288166803);
    msg.setSource(47421U);
    msg.setSourceEntity(102U);
    msg.setDestination(20408U);
    msg.setDestinationEntity(165U);
    msg.id = 18U;
    msg.period = 2451357892U;
    msg.duty_cycle = 2075501417U;

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
    msg.setTimeStamp(0.37660202256019104);
    msg.setSource(47065U);
    msg.setSourceEntity(250U);
    msg.setDestination(45114U);
    msg.setDestinationEntity(230U);
    msg.id = 60U;
    msg.period = 519532749U;
    msg.duty_cycle = 1144653633U;

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
    msg.setTimeStamp(0.09013626521120077);
    msg.setSource(56124U);
    msg.setSourceEntity(115U);
    msg.setDestination(4841U);
    msg.setDestinationEntity(242U);
    msg.id = 10U;
    msg.period = 458375283U;
    msg.duty_cycle = 2191672531U;

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
    msg.setTimeStamp(0.25344376561492465);
    msg.setSource(1893U);
    msg.setSourceEntity(146U);
    msg.setDestination(22386U);
    msg.setDestinationEntity(52U);
    msg.id = 120U;
    msg.period = 2568103084U;
    msg.duty_cycle = 1821215352U;

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
    msg.setTimeStamp(0.8435746168398484);
    msg.setSource(5586U);
    msg.setSourceEntity(87U);
    msg.setDestination(47305U);
    msg.setDestinationEntity(139U);
    msg.id = 242U;
    msg.period = 3058450833U;
    msg.duty_cycle = 969561154U;

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
    msg.setTimeStamp(0.08445328713765554);
    msg.setSource(52350U);
    msg.setSourceEntity(65U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(127U);
    msg.id = 30U;
    msg.period = 2082360764U;
    msg.duty_cycle = 1815647448U;

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
    msg.setTimeStamp(0.7052069026500194);
    msg.setSource(10699U);
    msg.setSourceEntity(203U);
    msg.setDestination(59402U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.43160511118703504;
    msg.lon = 0.056769381896445315;
    msg.height = 0.7195040237739049;
    msg.x = 0.6909777781145863;
    msg.y = 0.45984859919159393;
    msg.z = 0.7939929625767914;
    msg.phi = 0.8244088691374816;
    msg.theta = 0.08079565981367842;
    msg.psi = 0.8263761941200596;
    msg.u = 0.2520484998259773;
    msg.v = 0.853160935633927;
    msg.w = 0.6105004321654395;
    msg.vx = 0.037046562865995836;
    msg.vy = 0.6837251199903581;
    msg.vz = 0.7085718214546765;
    msg.p = 0.012019487387285532;
    msg.q = 0.5705752100946353;
    msg.r = 0.02962765506192766;
    msg.depth = 0.4399288584208023;
    msg.alt = 0.36978541425904676;

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
    msg.setTimeStamp(0.16719741392231358);
    msg.setSource(20499U);
    msg.setSourceEntity(40U);
    msg.setDestination(5291U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.053024857622126165;
    msg.lon = 0.3496436851620571;
    msg.height = 0.3658524337229866;
    msg.x = 0.4781918147433152;
    msg.y = 0.5437649373331036;
    msg.z = 0.5528275671861085;
    msg.phi = 0.9201831494406456;
    msg.theta = 0.9654029969341617;
    msg.psi = 0.4744684743155665;
    msg.u = 0.8688439589152335;
    msg.v = 0.1082150104587043;
    msg.w = 0.2693542698133895;
    msg.vx = 0.49238563185040973;
    msg.vy = 0.28446176665824763;
    msg.vz = 0.8095563926241838;
    msg.p = 0.024514193586058775;
    msg.q = 0.6753978364801899;
    msg.r = 0.24019985758878426;
    msg.depth = 0.9419230789106771;
    msg.alt = 0.7201834467196322;

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
    msg.setTimeStamp(0.5917998416295398);
    msg.setSource(36212U);
    msg.setSourceEntity(11U);
    msg.setDestination(25268U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.04260379904081779;
    msg.lon = 0.30148929377174427;
    msg.height = 0.8295141484345605;
    msg.x = 0.45381641519844307;
    msg.y = 0.6743165979314591;
    msg.z = 0.6433892152460186;
    msg.phi = 0.5492324367606191;
    msg.theta = 0.34068529793316293;
    msg.psi = 0.9714483184080919;
    msg.u = 0.09112672982424685;
    msg.v = 0.5556615077983245;
    msg.w = 0.25487008151058044;
    msg.vx = 0.23277769568614182;
    msg.vy = 0.7890481334409971;
    msg.vz = 0.5314140411712032;
    msg.p = 0.43743432584783926;
    msg.q = 0.054219781062529004;
    msg.r = 0.285688654300273;
    msg.depth = 0.09433830336297877;
    msg.alt = 0.5556263580321039;

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
    msg.setTimeStamp(0.04635554402417208);
    msg.setSource(45801U);
    msg.setSourceEntity(101U);
    msg.setDestination(65025U);
    msg.setDestinationEntity(32U);
    msg.x = 0.4485605141223372;
    msg.y = 0.35843384083335583;
    msg.z = 0.5524479001333864;

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
    msg.setTimeStamp(0.007363554189345867);
    msg.setSource(29345U);
    msg.setSourceEntity(66U);
    msg.setDestination(5494U);
    msg.setDestinationEntity(95U);
    msg.x = 0.8644516693613074;
    msg.y = 0.9294220045011987;
    msg.z = 0.28252612066799254;

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
    msg.setTimeStamp(0.927753427868239);
    msg.setSource(16830U);
    msg.setSourceEntity(66U);
    msg.setDestination(51783U);
    msg.setDestinationEntity(102U);
    msg.x = 0.005593939978242535;
    msg.y = 0.5154413254308355;
    msg.z = 0.6447746726814341;

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
    msg.setTimeStamp(0.9969817429938569);
    msg.setSource(56461U);
    msg.setSourceEntity(76U);
    msg.setDestination(32762U);
    msg.setDestinationEntity(87U);
    msg.value = 0.7778021512315798;

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
    msg.setTimeStamp(0.5919968831784416);
    msg.setSource(60538U);
    msg.setSourceEntity(133U);
    msg.setDestination(44832U);
    msg.setDestinationEntity(163U);
    msg.value = 0.20222656926454352;

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
    msg.setTimeStamp(0.926418142112475);
    msg.setSource(61117U);
    msg.setSourceEntity(142U);
    msg.setDestination(23129U);
    msg.setDestinationEntity(41U);
    msg.value = 0.17782423701398176;

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
    msg.setTimeStamp(0.8181838527731665);
    msg.setSource(33778U);
    msg.setSourceEntity(197U);
    msg.setDestination(3206U);
    msg.setDestinationEntity(23U);
    msg.value = 0.09201786419987734;

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
    msg.setTimeStamp(0.9539345769544979);
    msg.setSource(45304U);
    msg.setSourceEntity(72U);
    msg.setDestination(47128U);
    msg.setDestinationEntity(121U);
    msg.value = 0.06567228039909545;

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
    msg.setTimeStamp(0.5318513630189111);
    msg.setSource(23723U);
    msg.setSourceEntity(189U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(240U);
    msg.value = 0.46426271263344276;

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
    msg.setTimeStamp(0.5699066031784963);
    msg.setSource(60206U);
    msg.setSourceEntity(203U);
    msg.setDestination(54253U);
    msg.setDestinationEntity(124U);
    msg.x = 0.037025421478474874;
    msg.y = 0.616673939433837;
    msg.z = 0.9549545315022953;
    msg.phi = 0.6576589207337972;
    msg.theta = 0.8560863857730948;
    msg.psi = 0.39079923822590446;
    msg.p = 0.06920166276616058;
    msg.q = 0.3831633212089872;
    msg.r = 0.3232216631217766;
    msg.u = 0.02676519772205388;
    msg.v = 0.5833276396024196;
    msg.w = 0.16671501067529693;
    msg.bias_psi = 0.19830053565271843;
    msg.bias_r = 0.5397752075089475;

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
    msg.setTimeStamp(0.5849215159623169);
    msg.setSource(47553U);
    msg.setSourceEntity(158U);
    msg.setDestination(58856U);
    msg.setDestinationEntity(18U);
    msg.x = 0.04299855579969092;
    msg.y = 0.48570305162295946;
    msg.z = 0.953200787687528;
    msg.phi = 0.22494591052192925;
    msg.theta = 0.9424399522637734;
    msg.psi = 0.3343849312376488;
    msg.p = 0.2770790153841953;
    msg.q = 0.7013759994699237;
    msg.r = 0.23878476761878564;
    msg.u = 0.09873560388131586;
    msg.v = 0.4328933539118146;
    msg.w = 0.18591838234322833;
    msg.bias_psi = 0.040283974220901686;
    msg.bias_r = 0.3632716112914981;

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
    msg.setTimeStamp(0.7527495997877767);
    msg.setSource(14257U);
    msg.setSourceEntity(120U);
    msg.setDestination(27634U);
    msg.setDestinationEntity(129U);
    msg.x = 0.11416287394938585;
    msg.y = 0.03973726151405743;
    msg.z = 0.8603340115623465;
    msg.phi = 0.8386993464716507;
    msg.theta = 0.49240141768617995;
    msg.psi = 0.28956167794872867;
    msg.p = 0.6205465502005759;
    msg.q = 0.9478886857156537;
    msg.r = 0.2536595957114707;
    msg.u = 0.8714524209204169;
    msg.v = 0.15061661365417134;
    msg.w = 0.6379332582703864;
    msg.bias_psi = 0.45103657380023865;
    msg.bias_r = 0.4637756897078651;

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
    msg.setTimeStamp(0.2654145363588709);
    msg.setSource(20300U);
    msg.setSourceEntity(118U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(52U);
    msg.bias_psi = 0.23920287111593053;
    msg.bias_r = 0.775551983519409;
    msg.cog = 0.8166539791235282;
    msg.cyaw = 0.8240666296897773;
    msg.lbl_rej_level = 0.7126241516662272;
    msg.gps_rej_level = 0.8867738623199811;
    msg.custom_x = 0.19512882103447815;
    msg.custom_y = 0.6128163054498317;
    msg.custom_z = 0.5921752829219169;

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
    msg.setTimeStamp(0.6948970411404909);
    msg.setSource(8714U);
    msg.setSourceEntity(89U);
    msg.setDestination(28646U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.6642478253050556;
    msg.bias_r = 0.7409749524797931;
    msg.cog = 0.6324557144763365;
    msg.cyaw = 0.6962926455686097;
    msg.lbl_rej_level = 0.36243818694188734;
    msg.gps_rej_level = 0.5612890386981823;
    msg.custom_x = 0.4847089299770563;
    msg.custom_y = 0.6216938436915237;
    msg.custom_z = 0.809507822969112;

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
    msg.setTimeStamp(0.7867590371917196);
    msg.setSource(36030U);
    msg.setSourceEntity(88U);
    msg.setDestination(28420U);
    msg.setDestinationEntity(251U);
    msg.bias_psi = 0.41948581843663524;
    msg.bias_r = 0.8760409713594937;
    msg.cog = 0.5697695942253084;
    msg.cyaw = 0.8217402918741387;
    msg.lbl_rej_level = 0.7757798456995093;
    msg.gps_rej_level = 0.22848169983271438;
    msg.custom_x = 0.7005647567580213;
    msg.custom_y = 0.05897821984901508;
    msg.custom_z = 0.905177980524414;

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
    msg.setTimeStamp(0.1871922424469169);
    msg.setSource(62761U);
    msg.setSourceEntity(9U);
    msg.setDestination(41037U);
    msg.setDestinationEntity(73U);
    msg.utc_time = 0.276730172302707;
    msg.reason = 235U;

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
    msg.setTimeStamp(0.9446186905087766);
    msg.setSource(58132U);
    msg.setSourceEntity(235U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(252U);
    msg.utc_time = 0.679927235652347;
    msg.reason = 37U;

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
    msg.setTimeStamp(0.916941727767684);
    msg.setSource(31167U);
    msg.setSourceEntity(87U);
    msg.setDestination(8799U);
    msg.setDestinationEntity(113U);
    msg.utc_time = 0.7588740701848999;
    msg.reason = 79U;

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
    msg.setTimeStamp(0.7156877717541636);
    msg.setSource(29908U);
    msg.setSourceEntity(15U);
    msg.setDestination(26741U);
    msg.setDestinationEntity(249U);
    msg.id = 17U;
    msg.range = 0.096934336095708;
    msg.acceptance = 239U;

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
    msg.setTimeStamp(0.7192752776631685);
    msg.setSource(17556U);
    msg.setSourceEntity(79U);
    msg.setDestination(22244U);
    msg.setDestinationEntity(214U);
    msg.id = 38U;
    msg.range = 0.3797418396128246;
    msg.acceptance = 159U;

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
    msg.setTimeStamp(0.5387650391361151);
    msg.setSource(53918U);
    msg.setSourceEntity(98U);
    msg.setDestination(9330U);
    msg.setDestinationEntity(12U);
    msg.id = 207U;
    msg.range = 0.3277520852487239;
    msg.acceptance = 169U;

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
    msg.setTimeStamp(0.9202052884956725);
    msg.setSource(23111U);
    msg.setSourceEntity(197U);
    msg.setDestination(30634U);
    msg.setDestinationEntity(155U);
    msg.type = 161U;
    msg.reason = 68U;
    msg.value = 0.897122667175283;
    msg.timestep = 0.5143167762934424;

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
    msg.setTimeStamp(0.5747435968744129);
    msg.setSource(59761U);
    msg.setSourceEntity(209U);
    msg.setDestination(15958U);
    msg.setDestinationEntity(27U);
    msg.type = 192U;
    msg.reason = 239U;
    msg.value = 0.9575549367126216;
    msg.timestep = 0.8826584094551014;

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
    msg.setTimeStamp(0.09321675724201706);
    msg.setSource(59036U);
    msg.setSourceEntity(184U);
    msg.setDestination(3067U);
    msg.setDestinationEntity(120U);
    msg.type = 211U;
    msg.reason = 129U;
    msg.value = 0.2649521840893603;
    msg.timestep = 0.88171866627625;

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
    msg.setTimeStamp(0.11631946721727116);
    msg.setSource(21266U);
    msg.setSourceEntity(30U);
    msg.setDestination(643U);
    msg.setDestinationEntity(71U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BCFZRGTUNYKBRIFDCACYUBQXVONQGJBWSOUORAIYZPDMAIGDAHVLVQDT");
    tmp_msg_0.lat = 0.4965750681346145;
    tmp_msg_0.lon = 0.06029039268853775;
    tmp_msg_0.depth = 0.6569452193307903;
    tmp_msg_0.query_channel = 1U;
    tmp_msg_0.reply_channel = 90U;
    tmp_msg_0.transponder_delay = 251U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.05068708826796342;
    msg.y = 0.8461157674028855;
    msg.var_x = 0.6702679018109681;
    msg.var_y = 0.6476317490522127;
    msg.distance = 0.6741500941066368;

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
    msg.setTimeStamp(0.0417477494853733);
    msg.setSource(50008U);
    msg.setSourceEntity(55U);
    msg.setDestination(63384U);
    msg.setDestinationEntity(27U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YLFFCUEOGPJEFSVKVABFPBQEQCNOHYZZJVSCYDZTMIAHXBNSTKIOYADLMYIXJHQRNCKZAPSONSOLAKPTUOBIMDXIHPMNVCNDAEFKGIWFWXLRHVLILFJZRINGRAMBXVQGLQMTDQETYKEZSDGJNWRMXBBYGUFWWWJGHEZXWPPIUQGUTHEBRBBJMYNOQKKSCYASOWHVRUDH");
    tmp_msg_0.lat = 0.506937711545645;
    tmp_msg_0.lon = 0.07070748254840131;
    tmp_msg_0.depth = 0.5008686526303421;
    tmp_msg_0.query_channel = 153U;
    tmp_msg_0.reply_channel = 180U;
    tmp_msg_0.transponder_delay = 219U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7550531562828983;
    msg.y = 0.4049795648282082;
    msg.var_x = 0.18318161506715414;
    msg.var_y = 0.197089375358955;
    msg.distance = 0.4114850009406543;

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
    msg.setTimeStamp(0.7456966534904818);
    msg.setSource(20723U);
    msg.setSourceEntity(219U);
    msg.setDestination(58330U);
    msg.setDestinationEntity(233U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KXYXYBCULMYETNZNTKMSUFENZGSBFKTWEHWXQCQXLSJIKARLPXAZMECHTGIDKRZFBFLJFDLIPVMNYQVDQZOPRHIJOZVALROSCVIGOBJFEAKMQMBXABXOSCBBWVSZKVQGCDDWPXHRRRMNGYHZOWUYCFLFKNEPWHAQJYWEPONADHWAZQLTBOPSPRGDIHSJOURNIPGVUQCUKGIYGCIKMZSUDXLMEQEHNRCUADDAXYSTLMJNTEUVPIHVTTYO");
    tmp_msg_0.lat = 0.6147445827950687;
    tmp_msg_0.lon = 0.14017948472321895;
    tmp_msg_0.depth = 0.31557284268782604;
    tmp_msg_0.query_channel = 5U;
    tmp_msg_0.reply_channel = 228U;
    tmp_msg_0.transponder_delay = 151U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5703856663661322;
    msg.y = 0.6324833160974244;
    msg.var_x = 0.4036048845020632;
    msg.var_y = 0.7948267522010642;
    msg.distance = 0.27222589846330525;

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
    msg.setTimeStamp(0.18479326079510616);
    msg.setSource(46674U);
    msg.setSourceEntity(140U);
    msg.setDestination(57270U);
    msg.setDestinationEntity(64U);
    msg.state = 131U;

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
    msg.setTimeStamp(0.1607127035679744);
    msg.setSource(17399U);
    msg.setSourceEntity(252U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(229U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.02273317967434152);
    msg.setSource(17980U);
    msg.setSourceEntity(118U);
    msg.setDestination(33822U);
    msg.setDestinationEntity(146U);
    msg.state = 54U;

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
    msg.setTimeStamp(0.6362173191077442);
    msg.setSource(20958U);
    msg.setSourceEntity(18U);
    msg.setDestination(36959U);
    msg.setDestinationEntity(78U);
    msg.x = 0.48747655567299497;
    msg.y = 0.7766704283887436;
    msg.z = 0.7934915537612618;

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
    msg.setTimeStamp(0.657793315613612);
    msg.setSource(46832U);
    msg.setSourceEntity(185U);
    msg.setDestination(2764U);
    msg.setDestinationEntity(254U);
    msg.x = 0.13333307406763673;
    msg.y = 0.16492690193616233;
    msg.z = 0.21695179878952164;

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
    msg.setTimeStamp(0.17337503477129346);
    msg.setSource(56201U);
    msg.setSourceEntity(164U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(218U);
    msg.x = 0.06505085352361828;
    msg.y = 0.46467285096198996;
    msg.z = 0.8841868832876606;

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
    msg.setTimeStamp(0.734965862120502);
    msg.setSource(42383U);
    msg.setSourceEntity(209U);
    msg.setDestination(47675U);
    msg.setDestinationEntity(66U);
    msg.va = 0.3772583055511898;
    msg.aoa = 0.7673319295167914;
    msg.ssa = 0.13840725338847804;

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
    msg.setTimeStamp(0.7165224176686813);
    msg.setSource(6248U);
    msg.setSourceEntity(49U);
    msg.setDestination(62004U);
    msg.setDestinationEntity(48U);
    msg.va = 0.36192672070235665;
    msg.aoa = 0.935059549603311;
    msg.ssa = 0.27722248428670404;

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
    msg.setTimeStamp(0.21653939388529864);
    msg.setSource(63467U);
    msg.setSourceEntity(96U);
    msg.setDestination(29557U);
    msg.setDestinationEntity(155U);
    msg.va = 0.8663430875889573;
    msg.aoa = 0.390912332487486;
    msg.ssa = 0.11471389591594172;

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
    IMC::Power msg;
    msg.setTimeStamp(0.2230834863159813);
    msg.setSource(57091U);
    msg.setSourceEntity(90U);
    msg.setDestination(61605U);
    msg.setDestinationEntity(175U);
    msg.value = 0.1119508084909474;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.9976939299754667);
    msg.setSource(4335U);
    msg.setSourceEntity(143U);
    msg.setDestination(13685U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0596787634013648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.7762600868315856);
    msg.setSource(45192U);
    msg.setSourceEntity(112U);
    msg.setDestination(17849U);
    msg.setDestinationEntity(38U);
    msg.value = 0.044099164357762954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #2", msg == *msg_d);
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
    msg.setTimeStamp(0.851066736559774);
    msg.setSource(56809U);
    msg.setSourceEntity(126U);
    msg.setDestination(59701U);
    msg.setDestinationEntity(88U);
    msg.value = 0.08296525664344578;

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
    msg.setTimeStamp(0.8976921127336875);
    msg.setSource(45985U);
    msg.setSourceEntity(192U);
    msg.setDestination(19542U);
    msg.setDestinationEntity(191U);
    msg.value = 0.3012592609412472;

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
    msg.setTimeStamp(0.3101339042481155);
    msg.setSource(52595U);
    msg.setSourceEntity(78U);
    msg.setDestination(22862U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7245969921093088;

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
    msg.setTimeStamp(0.3145018557235578);
    msg.setSource(38985U);
    msg.setSourceEntity(55U);
    msg.setDestination(8870U);
    msg.setDestinationEntity(230U);
    msg.value = 0.3857396099213032;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.03525244344227618);
    msg.setSource(49532U);
    msg.setSourceEntity(59U);
    msg.setDestination(20527U);
    msg.setDestinationEntity(68U);
    msg.value = 0.42224423654299137;
    msg.z_units = 190U;

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
    msg.setTimeStamp(0.9644520276835086);
    msg.setSource(27027U);
    msg.setSourceEntity(55U);
    msg.setDestination(196U);
    msg.setDestinationEntity(227U);
    msg.value = 0.06397392390825896;
    msg.z_units = 98U;

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
    msg.setTimeStamp(0.9914645064764687);
    msg.setSource(28604U);
    msg.setSourceEntity(148U);
    msg.setDestination(29905U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5188673059492575;
    msg.speed_units = 8U;

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
    msg.setTimeStamp(0.2296925389118155);
    msg.setSource(42142U);
    msg.setSourceEntity(207U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(68U);
    msg.value = 0.9150118755974286;
    msg.speed_units = 142U;

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
    msg.setTimeStamp(0.4707894022652779);
    msg.setSource(2459U);
    msg.setSourceEntity(249U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(91U);
    msg.value = 0.4205640100294158;
    msg.speed_units = 4U;

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
    msg.setTimeStamp(0.13621658538082004);
    msg.setSource(61978U);
    msg.setSourceEntity(146U);
    msg.setDestination(9995U);
    msg.setDestinationEntity(17U);
    msg.value = 0.24710994343467474;

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
    msg.setTimeStamp(0.9452263044044843);
    msg.setSource(30299U);
    msg.setSourceEntity(129U);
    msg.setDestination(51654U);
    msg.setDestinationEntity(58U);
    msg.value = 0.3067692895886023;

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
    msg.setTimeStamp(0.02479952302405053);
    msg.setSource(43108U);
    msg.setSourceEntity(10U);
    msg.setDestination(2719U);
    msg.setDestinationEntity(72U);
    msg.value = 0.7612395414205032;

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
    msg.setTimeStamp(0.5036113592492518);
    msg.setSource(24383U);
    msg.setSourceEntity(23U);
    msg.setDestination(64888U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3148034268863753;

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
    msg.setTimeStamp(0.6626996507110845);
    msg.setSource(64510U);
    msg.setSourceEntity(131U);
    msg.setDestination(40376U);
    msg.setDestinationEntity(212U);
    msg.value = 0.18926216190330014;

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
    msg.setTimeStamp(0.803998627664174);
    msg.setSource(25460U);
    msg.setSourceEntity(243U);
    msg.setDestination(23653U);
    msg.setDestinationEntity(244U);
    msg.value = 0.9072996904385294;

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
    msg.setTimeStamp(0.926416921041113);
    msg.setSource(48461U);
    msg.setSourceEntity(30U);
    msg.setDestination(27655U);
    msg.setDestinationEntity(12U);
    msg.value = 0.23769314717730272;

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
    msg.setTimeStamp(0.3954599494690755);
    msg.setSource(26582U);
    msg.setSourceEntity(1U);
    msg.setDestination(53383U);
    msg.setDestinationEntity(5U);
    msg.value = 0.5426169767148179;

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
    msg.setTimeStamp(0.8319119661220126);
    msg.setSource(4099U);
    msg.setSourceEntity(78U);
    msg.setDestination(4774U);
    msg.setDestinationEntity(14U);
    msg.value = 0.27644384757579876;

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
    msg.setTimeStamp(0.609718787446644);
    msg.setSource(18949U);
    msg.setSourceEntity(251U);
    msg.setDestination(2564U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 4276917613U;
    msg.start_lat = 0.6581441329207829;
    msg.start_lon = 0.5207142283129886;
    msg.start_z = 0.10100281722617344;
    msg.start_z_units = 126U;
    msg.end_lat = 0.9473245934219109;
    msg.end_lon = 0.08917685912471585;
    msg.end_z = 0.7429261376454308;
    msg.end_z_units = 202U;
    msg.speed = 0.45023876755299885;
    msg.speed_units = 168U;
    msg.lradius = 0.5562300853581233;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.7522108054125802);
    msg.setSource(62728U);
    msg.setSourceEntity(217U);
    msg.setDestination(37324U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 3417870407U;
    msg.start_lat = 0.07361662199413155;
    msg.start_lon = 0.6006684615839243;
    msg.start_z = 0.9823467254655243;
    msg.start_z_units = 210U;
    msg.end_lat = 0.9620393692094806;
    msg.end_lon = 0.7188943380712403;
    msg.end_z = 0.7086000603264001;
    msg.end_z_units = 250U;
    msg.speed = 0.5287392445300039;
    msg.speed_units = 27U;
    msg.lradius = 0.8386432762628725;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.14468234522669288);
    msg.setSource(17522U);
    msg.setSourceEntity(15U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 2357593389U;
    msg.start_lat = 0.002149333140834986;
    msg.start_lon = 0.8253179574203051;
    msg.start_z = 0.1435878672423514;
    msg.start_z_units = 68U;
    msg.end_lat = 0.8184656903938035;
    msg.end_lon = 0.6619841683166386;
    msg.end_z = 0.49220109188723216;
    msg.end_z_units = 201U;
    msg.speed = 0.9571369720154305;
    msg.speed_units = 66U;
    msg.lradius = 0.538626186246246;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.12731296896720212);
    msg.setSource(17813U);
    msg.setSourceEntity(207U);
    msg.setDestination(2831U);
    msg.setDestinationEntity(150U);
    msg.x = 0.5203193671387727;
    msg.y = 0.34535946347438484;
    msg.z = 0.010548314184947172;
    msg.k = 0.5957155674476884;
    msg.m = 0.11530547023205628;
    msg.n = 0.3357959411799195;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.7754283876838101);
    msg.setSource(52221U);
    msg.setSourceEntity(17U);
    msg.setDestination(22598U);
    msg.setDestinationEntity(178U);
    msg.x = 0.10311654478780063;
    msg.y = 0.6999450401253299;
    msg.z = 0.1271479157767661;
    msg.k = 0.9720767059382207;
    msg.m = 0.13574616058467948;
    msg.n = 0.9724359029304176;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.6853805426682852);
    msg.setSource(22307U);
    msg.setSourceEntity(185U);
    msg.setDestination(56561U);
    msg.setDestinationEntity(163U);
    msg.x = 0.20162372485549573;
    msg.y = 0.0308799495808898;
    msg.z = 0.07613303644695502;
    msg.k = 0.37930341574330817;
    msg.m = 0.794656811147932;
    msg.n = 0.793838426633106;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.85510680023515);
    msg.setSource(33896U);
    msg.setSourceEntity(181U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(166U);
    msg.value = 0.24077126807229055;

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
    msg.setTimeStamp(0.774964703835409);
    msg.setSource(51118U);
    msg.setSourceEntity(215U);
    msg.setDestination(10409U);
    msg.setDestinationEntity(52U);
    msg.value = 0.13029206099419888;

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
    msg.setTimeStamp(0.8140511735181966);
    msg.setSource(49883U);
    msg.setSourceEntity(222U);
    msg.setDestination(63488U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8592870963876469;

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
    msg.setTimeStamp(0.2770874984935586);
    msg.setSource(4989U);
    msg.setSourceEntity(244U);
    msg.setDestination(4612U);
    msg.setDestinationEntity(250U);
    msg.u = 0.4436880947370032;
    msg.v = 0.055929739781267584;
    msg.w = 0.7641756738070886;
    msg.p = 0.08751538276719606;
    msg.q = 0.3492842987829555;
    msg.r = 0.3271415350626513;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.7571281078260821);
    msg.setSource(21208U);
    msg.setSourceEntity(174U);
    msg.setDestination(43521U);
    msg.setDestinationEntity(210U);
    msg.u = 0.734202045060069;
    msg.v = 0.5810686544624138;
    msg.w = 0.262149501058236;
    msg.p = 0.9286265932862117;
    msg.q = 0.5294144637953285;
    msg.r = 0.5526707325228349;
    msg.flags = 228U;

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
    msg.setTimeStamp(0.8064861717474626);
    msg.setSource(12246U);
    msg.setSourceEntity(221U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(246U);
    msg.u = 0.10065522353158596;
    msg.v = 0.8424828963574097;
    msg.w = 0.5933369640047047;
    msg.p = 0.635293468406851;
    msg.q = 0.07888031594221645;
    msg.r = 0.4847301293445512;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.04422657599906232);
    msg.setSource(60306U);
    msg.setSourceEntity(221U);
    msg.setDestination(39889U);
    msg.setDestinationEntity(23U);
    msg.path_ref = 146809482U;
    msg.start_lat = 0.13792635742798265;
    msg.start_lon = 0.7971340897708754;
    msg.start_z = 0.20113629376070497;
    msg.start_z_units = 44U;
    msg.end_lat = 0.7408335238892079;
    msg.end_lon = 0.23187151322778787;
    msg.end_z = 0.9610991664902537;
    msg.end_z_units = 120U;
    msg.lradius = 0.986719447535575;
    msg.flags = 148U;
    msg.x = 0.36311290923981154;
    msg.y = 0.04183940877001546;
    msg.z = 0.45376990158924535;
    msg.vx = 0.9829897137241377;
    msg.vy = 0.04419948423719822;
    msg.vz = 0.7258431263144501;
    msg.course_error = 0.544996581947367;
    msg.eta = 31688U;

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
    msg.setTimeStamp(0.47877285041413353);
    msg.setSource(23108U);
    msg.setSourceEntity(187U);
    msg.setDestination(49898U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 3491417065U;
    msg.start_lat = 0.8009600945043507;
    msg.start_lon = 0.8240984863223249;
    msg.start_z = 0.2190578088527736;
    msg.start_z_units = 239U;
    msg.end_lat = 0.9276600613496864;
    msg.end_lon = 0.2230720294827887;
    msg.end_z = 0.2504429485831081;
    msg.end_z_units = 36U;
    msg.lradius = 0.6862003457354873;
    msg.flags = 67U;
    msg.x = 0.10073989451478182;
    msg.y = 0.1601202472897505;
    msg.z = 0.9583353317174618;
    msg.vx = 0.6399376892446227;
    msg.vy = 0.8152138531143607;
    msg.vz = 0.5768107322763967;
    msg.course_error = 0.03319028652706224;
    msg.eta = 833U;

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
    msg.setTimeStamp(0.5096393144305602);
    msg.setSource(9436U);
    msg.setSourceEntity(162U);
    msg.setDestination(11814U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 3542815497U;
    msg.start_lat = 0.6577585573143196;
    msg.start_lon = 0.7110899014839585;
    msg.start_z = 0.9013113261243771;
    msg.start_z_units = 155U;
    msg.end_lat = 0.7384230419492536;
    msg.end_lon = 0.7379237832564995;
    msg.end_z = 0.3311352219800473;
    msg.end_z_units = 19U;
    msg.lradius = 0.1838423254534609;
    msg.flags = 234U;
    msg.x = 0.9074266688541468;
    msg.y = 0.04067283548245115;
    msg.z = 0.2759851674584747;
    msg.vx = 0.6876317150551768;
    msg.vy = 0.02076255640329172;
    msg.vz = 0.45811731632137664;
    msg.course_error = 0.11580748064747604;
    msg.eta = 3139U;

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
    msg.setTimeStamp(0.7100862734934443);
    msg.setSource(15506U);
    msg.setSourceEntity(190U);
    msg.setDestination(65515U);
    msg.setDestinationEntity(163U);
    msg.k = 0.20206361292799646;
    msg.m = 0.7239787598020562;
    msg.n = 0.6391599812716076;

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
    msg.setTimeStamp(0.4193563489886134);
    msg.setSource(33243U);
    msg.setSourceEntity(14U);
    msg.setDestination(31467U);
    msg.setDestinationEntity(33U);
    msg.k = 0.3678222350762582;
    msg.m = 0.1154423697707021;
    msg.n = 0.5226639151897693;

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
    msg.setTimeStamp(0.16710303644109625);
    msg.setSource(41956U);
    msg.setSourceEntity(112U);
    msg.setDestination(50298U);
    msg.setDestinationEntity(37U);
    msg.k = 0.07977095923804722;
    msg.m = 0.2169671089202616;
    msg.n = 0.3655224443560181;

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
    msg.setTimeStamp(0.47358127681611706);
    msg.setSource(59809U);
    msg.setSourceEntity(182U);
    msg.setDestination(8613U);
    msg.setDestinationEntity(214U);
    msg.p = 0.6108392006057476;
    msg.i = 0.7813587606799721;
    msg.d = 0.6270682826399276;
    msg.a = 0.041853634127250516;

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
    msg.setTimeStamp(0.24748564024303865);
    msg.setSource(28041U);
    msg.setSourceEntity(237U);
    msg.setDestination(21677U);
    msg.setDestinationEntity(105U);
    msg.p = 0.2799945292665452;
    msg.i = 0.8786907980685238;
    msg.d = 0.697464697334801;
    msg.a = 0.45065461440685506;

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
    msg.setTimeStamp(0.07384090742857174);
    msg.setSource(42813U);
    msg.setSourceEntity(143U);
    msg.setDestination(23287U);
    msg.setDestinationEntity(53U);
    msg.p = 0.5447772894339165;
    msg.i = 0.12721220981373538;
    msg.d = 0.7127413965040618;
    msg.a = 0.8290820229649997;

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
    msg.setTimeStamp(0.6792908423059209);
    msg.setSource(18427U);
    msg.setSourceEntity(198U);
    msg.setDestination(34201U);
    msg.setDestinationEntity(155U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.9892625745127844);
    msg.setSource(6748U);
    msg.setSourceEntity(25U);
    msg.setDestination(10160U);
    msg.setDestinationEntity(209U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.9023359257866485);
    msg.setSource(12828U);
    msg.setSourceEntity(41U);
    msg.setDestination(61293U);
    msg.setDestinationEntity(139U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.9998611001942255);
    msg.setSource(37750U);
    msg.setSourceEntity(24U);
    msg.setDestination(26630U);
    msg.setDestinationEntity(224U);
    msg.x = 0.12698533553406366;
    msg.y = 0.9663052548104443;
    msg.z = 0.8765776027994412;
    msg.vx = 0.6088611555854241;
    msg.vy = 0.9306048403662366;
    msg.vz = 0.5053129973944791;
    msg.ax = 0.09855131160112918;
    msg.ay = 0.318561126570038;
    msg.az = 0.4253650319361848;
    msg.flags = 31412U;

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
    msg.setTimeStamp(0.7937657945076675);
    msg.setSource(50686U);
    msg.setSourceEntity(146U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(154U);
    msg.x = 0.9116899101622807;
    msg.y = 0.2611437207869327;
    msg.z = 0.45878475361868587;
    msg.vx = 0.7624159089638004;
    msg.vy = 0.0076705232085065855;
    msg.vz = 0.4144574487832453;
    msg.ax = 0.8142010491787774;
    msg.ay = 0.19264129963321708;
    msg.az = 0.9861607323245275;
    msg.flags = 18093U;

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
    msg.setTimeStamp(0.5478784817153622);
    msg.setSource(12602U);
    msg.setSourceEntity(94U);
    msg.setDestination(22949U);
    msg.setDestinationEntity(158U);
    msg.x = 0.5433374423603425;
    msg.y = 0.0965900167078787;
    msg.z = 0.7599748943748166;
    msg.vx = 0.5410171779603152;
    msg.vy = 0.3497211767257965;
    msg.vz = 0.8686932010138887;
    msg.ax = 0.4361242928033481;
    msg.ay = 0.7696574353179447;
    msg.az = 0.11357689441236396;
    msg.flags = 43428U;

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
    msg.setTimeStamp(0.6702139156825866);
    msg.setSource(35893U);
    msg.setSourceEntity(85U);
    msg.setDestination(28464U);
    msg.setDestinationEntity(155U);
    msg.value = 0.30076847988810773;

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
    msg.setTimeStamp(0.5599218955423212);
    msg.setSource(17477U);
    msg.setSourceEntity(223U);
    msg.setDestination(54509U);
    msg.setDestinationEntity(194U);
    msg.value = 0.03391620944784346;

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
    msg.setTimeStamp(0.041376383399952865);
    msg.setSource(57182U);
    msg.setSourceEntity(245U);
    msg.setDestination(54260U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6041205603760427;

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
    msg.setTimeStamp(0.01592693970206782);
    msg.setSource(7316U);
    msg.setSourceEntity(251U);
    msg.setDestination(63764U);
    msg.setDestinationEntity(152U);
    msg.timeout = 51871U;
    msg.lat = 0.7923277818038229;
    msg.lon = 0.008902313094210967;
    msg.z = 0.7863146970516542;
    msg.z_units = 13U;
    msg.speed = 0.8962314145379083;
    msg.speed_units = 194U;
    msg.roll = 0.6370897498227102;
    msg.pitch = 0.09786867790290332;
    msg.yaw = 0.28025960415600926;
    msg.custom.assign("OQZLOBYITXLLBHAVAQKUIEWKFUFKJSLZEYVPQXPNWYFRBHFRSZAVERMYBUORUMDGJKHCDJLSYLYTYIDHQIPSTIHQRPABNNKYRQWSKICLTZOVJCIPMRJZJLBSXWACXURGYGXCWJVPEMXUPFMBAPCKDDCODVNYOMQCDMSGDGVUJQBOTKNNCAZAZETANHFWXWWAF");

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
    msg.setTimeStamp(0.558180695305809);
    msg.setSource(24469U);
    msg.setSourceEntity(11U);
    msg.setDestination(39097U);
    msg.setDestinationEntity(170U);
    msg.timeout = 6727U;
    msg.lat = 0.5562597664600811;
    msg.lon = 0.7051192701742928;
    msg.z = 0.8838783682038882;
    msg.z_units = 252U;
    msg.speed = 0.5665688311542729;
    msg.speed_units = 26U;
    msg.roll = 0.6922155319807454;
    msg.pitch = 0.39773607210222905;
    msg.yaw = 0.9084856867816329;
    msg.custom.assign("GGVYSWJTQTMPCMXWBJQMOOFAUIDTMYWMOXABBAIBJKOVMGORVNPSDGYLKFTZJX");

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
    msg.setTimeStamp(0.29155896161462025);
    msg.setSource(29170U);
    msg.setSourceEntity(147U);
    msg.setDestination(18027U);
    msg.setDestinationEntity(206U);
    msg.timeout = 64692U;
    msg.lat = 0.5323486405298506;
    msg.lon = 0.23568463252210659;
    msg.z = 0.0881226823089496;
    msg.z_units = 42U;
    msg.speed = 0.6279766341826052;
    msg.speed_units = 174U;
    msg.roll = 0.8439420317834075;
    msg.pitch = 0.08983918560002857;
    msg.yaw = 0.12891411170206846;
    msg.custom.assign("UMWYEFXVAQFQZAUDPRZSCJVNMGOFKLPXRXJZIRRIHQATZWWLMKOGNF");

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
    msg.setTimeStamp(0.7075251679322012);
    msg.setSource(10008U);
    msg.setSourceEntity(21U);
    msg.setDestination(37437U);
    msg.setDestinationEntity(187U);
    msg.timeout = 50254U;
    msg.lat = 0.165302810512988;
    msg.lon = 0.28918662560219344;
    msg.z = 0.811292595366271;
    msg.z_units = 146U;
    msg.speed = 0.46631894936949114;
    msg.speed_units = 183U;
    msg.duration = 14550U;
    msg.radius = 0.7073945669550908;
    msg.flags = 170U;
    msg.custom.assign("BSVORYTFCXVPHCNEYEJMIUMQKZTNXGFMFXWVTXRAJZVHVICLQZSPFENKYCEOKHQZXRKJLHOPBQLZKDKBBJNLHHDSKKNGSPIYPUWEOMAIPSRGWLRVPZDWRGAHBOKHCMGFYHNFABIB");

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
    msg.setTimeStamp(0.6447543976724276);
    msg.setSource(38563U);
    msg.setSourceEntity(192U);
    msg.setDestination(17069U);
    msg.setDestinationEntity(37U);
    msg.timeout = 60015U;
    msg.lat = 0.6507139490002962;
    msg.lon = 0.46353208499799725;
    msg.z = 0.5903356103546337;
    msg.z_units = 71U;
    msg.speed = 0.07644381393804278;
    msg.speed_units = 190U;
    msg.duration = 61731U;
    msg.radius = 0.5566913321990022;
    msg.flags = 0U;
    msg.custom.assign("WRHHPVROUBVNODEPYKVIJBXFHPLEGACFOKXZHWPIYYNXHXADIYBEVORYDKQNUDZGHAW");

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
    msg.setTimeStamp(0.9272902850173914);
    msg.setSource(22139U);
    msg.setSourceEntity(252U);
    msg.setDestination(46035U);
    msg.setDestinationEntity(141U);
    msg.timeout = 25578U;
    msg.lat = 0.8283776642271848;
    msg.lon = 0.38122354625764354;
    msg.z = 0.8112067671741735;
    msg.z_units = 110U;
    msg.speed = 0.8418206070816799;
    msg.speed_units = 75U;
    msg.duration = 65147U;
    msg.radius = 0.5454898721148232;
    msg.flags = 99U;
    msg.custom.assign("MIOMELCFWQIRLAIKXJANGKOSXICGFFNZTZIZETEBJWOEPPQHKQKQNJHYKZOKZIDFNUPMJPAIJIEYVWZRZCOLGDUWQALYUBYGYPHCJTWQCFSVOYHQBAVSHSTDRHLEZPBYOLPAVMREOUDATPEFUHMWODLSYRBFZHDHMXXMERCTBUEBJNRCVCSVKKWNSUWMDLQPXFMNBJMXVGKKABZQGFIDAD");

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
    msg.setTimeStamp(0.12522903320986123);
    msg.setSource(52072U);
    msg.setSourceEntity(134U);
    msg.setDestination(15682U);
    msg.setDestinationEntity(11U);
    msg.custom.assign("FBQDPEILCIQEZZKVDTBVXXLSHLSTNYFQYIKOCTRXXARIORUFOBAGJKJJJHMKQMPGYRHUZORRJJZILIHPEVNDSCJAAVMPQRDNPEULDYOSDZFFFEQNQVJFCHYKHWKMZXAL");

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
    msg.setTimeStamp(0.5887082822311979);
    msg.setSource(12862U);
    msg.setSourceEntity(75U);
    msg.setDestination(669U);
    msg.setDestinationEntity(244U);
    msg.custom.assign("OFVDPZKYOQXBWRDBMGETSTBSPUDSQERCSTNJCHGJBFRRYYUXYLGZTPQINTUDCQQTVSNUJMKLAAOZGDMSXZICPFCVHBFMPVBYETHLLIUJHVAWNEOQILVKGFKOE");

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
    msg.setTimeStamp(0.25506447366023255);
    msg.setSource(41767U);
    msg.setSourceEntity(36U);
    msg.setDestination(24830U);
    msg.setDestinationEntity(72U);
    msg.custom.assign("LJURUGCWKLWWCMIYMJSJFQYLHENXKTBRZYWAKPGABPIVOFEDBSXFZOKOAYIMUYEJNOGSDTFMMZXXRUTZCPODWNQPLPGSSHRCVZANXHBDUVKAJIQINQQWBZEDJCENYFARGWLFXTMXKVLIQQNPTFVCDBODZKTUBKSUVIZYT");

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
    msg.setTimeStamp(0.1896829531855485);
    msg.setSource(44U);
    msg.setSourceEntity(20U);
    msg.setDestination(27306U);
    msg.setDestinationEntity(132U);
    msg.timeout = 62887U;
    msg.lat = 0.181324128051217;
    msg.lon = 0.03326805792314558;
    msg.z = 0.4181226769938309;
    msg.z_units = 189U;
    msg.duration = 10345U;
    msg.speed = 0.9542336756813418;
    msg.speed_units = 121U;
    msg.type = 167U;
    msg.radius = 0.3785268969931421;
    msg.length = 0.6870748748782595;
    msg.bearing = 0.528601561326171;
    msg.direction = 240U;
    msg.custom.assign("YNJIUMRRKJTBMAKVJGESKBEDRMBSPSXINBWDJPESFLAIXOONIYHIYDFLNOHGFTZYZMNCQGGGUE");

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
    msg.setTimeStamp(0.47082095004299185);
    msg.setSource(2206U);
    msg.setSourceEntity(37U);
    msg.setDestination(29752U);
    msg.setDestinationEntity(142U);
    msg.timeout = 50437U;
    msg.lat = 0.6960363196766381;
    msg.lon = 0.34053450479816094;
    msg.z = 0.11547986260071463;
    msg.z_units = 220U;
    msg.duration = 46708U;
    msg.speed = 0.44625185239342025;
    msg.speed_units = 128U;
    msg.type = 194U;
    msg.radius = 0.3089592320431622;
    msg.length = 0.4413898830604628;
    msg.bearing = 0.7547681295876006;
    msg.direction = 83U;
    msg.custom.assign("DTYOVXWIAETRXFGTABPXXVDSBSKOJTKFAKZRNPQOT");

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
    msg.setTimeStamp(0.13290082748742005);
    msg.setSource(12228U);
    msg.setSourceEntity(253U);
    msg.setDestination(29057U);
    msg.setDestinationEntity(24U);
    msg.timeout = 11446U;
    msg.lat = 0.9771240003269579;
    msg.lon = 0.20369857730969354;
    msg.z = 0.6652415214658657;
    msg.z_units = 170U;
    msg.duration = 46318U;
    msg.speed = 0.31770859027735954;
    msg.speed_units = 247U;
    msg.type = 93U;
    msg.radius = 0.4436671104398622;
    msg.length = 0.5668167460675058;
    msg.bearing = 0.8212398071491664;
    msg.direction = 23U;
    msg.custom.assign("HBEOZQFCJYLZTZOBHCHMKRS");

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
    msg.setTimeStamp(0.290450165107644);
    msg.setSource(52302U);
    msg.setSourceEntity(93U);
    msg.setDestination(28215U);
    msg.setDestinationEntity(158U);
    msg.duration = 63685U;
    msg.custom.assign("SINBQTLAFVVOIAQNCAKJDIMAWCBROGMKTCLXPMWEOFOQSXXYHWNLHZKFN");

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
    msg.setTimeStamp(0.6839099186069195);
    msg.setSource(51591U);
    msg.setSourceEntity(15U);
    msg.setDestination(11422U);
    msg.setDestinationEntity(161U);
    msg.duration = 52076U;
    msg.custom.assign("JVNROZHFQOCDGDRDFFJTEIMOASHKFSBARWBVBZFOEOEIFEJBGFXZLWSBEAQMJZAPHPILONLWNHGYRVCEVYUU");

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
    msg.setTimeStamp(0.7488009667156021);
    msg.setSource(58139U);
    msg.setSourceEntity(68U);
    msg.setDestination(1969U);
    msg.setDestinationEntity(114U);
    msg.duration = 61586U;
    msg.custom.assign("BGXLEVMUOSAHKNDWEWBXOIOCNFREJUZSPTUNATJMYBGNNRHHLCCIFSLFGPEVDDSJDUYTXOBERIZFCVFEGLVATZGVEBHJAECYYMKWLAWYPAAXVTDYXXNXZCGXBVWUJTLHCRQXSDUNIMIDRQCIFOPUBRKIRCSSZMRL");

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
    msg.setTimeStamp(0.7698095691738508);
    msg.setSource(59026U);
    msg.setSourceEntity(131U);
    msg.setDestination(55464U);
    msg.setDestinationEntity(219U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4219973781U;
    tmp_msg_0.start_lat = 0.5397148527584825;
    tmp_msg_0.start_lon = 0.9730307420545724;
    tmp_msg_0.start_z = 0.22335130678676196;
    tmp_msg_0.start_z_units = 206U;
    tmp_msg_0.end_lat = 0.4211043749450908;
    tmp_msg_0.end_lon = 0.8165877908116719;
    tmp_msg_0.end_z = 0.9378094829571414;
    tmp_msg_0.end_z_units = 78U;
    tmp_msg_0.speed = 0.3323726278047572;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.lradius = 0.6346891015915221;
    tmp_msg_0.flags = 236U;
    msg.control.set(tmp_msg_0);
    msg.duration = 49255U;
    msg.custom.assign("XAGXSADVHDIDORECBRKPJIWGVBQZTIYJGYRUUZXWBAFZAVALKOMQVOWVPIZAPWOBMNKPEZKEKHLMAQLIFREMJYHSJSCUZDZXPTVHAECBMQOWHGIDCZLJNON");

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
    msg.setTimeStamp(0.8896733522910554);
    msg.setSource(62847U);
    msg.setSourceEntity(200U);
    msg.setDestination(6750U);
    msg.setDestinationEntity(98U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.08589461895295114;
    msg.control.set(tmp_msg_0);
    msg.duration = 1237U;
    msg.custom.assign("AQMFDNPDFIIJVEADMMEKUCZ");

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
    msg.setTimeStamp(0.6042536924217459);
    msg.setSource(64566U);
    msg.setSourceEntity(88U);
    msg.setDestination(31288U);
    msg.setDestinationEntity(61U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.34652417055492757;
    tmp_msg_0.z_units = 24U;
    msg.control.set(tmp_msg_0);
    msg.duration = 33412U;
    msg.custom.assign("ZHOJDGNNWVBB");

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
    msg.setTimeStamp(0.7810518200273684);
    msg.setSource(4042U);
    msg.setSourceEntity(233U);
    msg.setDestination(31070U);
    msg.setDestinationEntity(90U);
    msg.timeout = 31966U;
    msg.lat = 0.03739665252562485;
    msg.lon = 0.35833810522862786;
    msg.z = 0.3568231992075077;
    msg.z_units = 9U;
    msg.speed = 0.4734520417990703;
    msg.speed_units = 35U;
    msg.bearing = 0.24349391162353284;
    msg.cross_angle = 0.4003735894675571;
    msg.width = 0.007232111608655556;
    msg.length = 0.8196669999418746;
    msg.hstep = 0.8661361643249804;
    msg.coff = 154U;
    msg.alternation = 71U;
    msg.flags = 60U;
    msg.custom.assign("HSVGCYIZAOTQTLXHVSHQYTPAXQIRMTQUEXCVTYULRMDKQSFG");

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
    msg.setTimeStamp(0.31806523129684106);
    msg.setSource(21088U);
    msg.setSourceEntity(60U);
    msg.setDestination(9679U);
    msg.setDestinationEntity(232U);
    msg.timeout = 64447U;
    msg.lat = 0.6144717592955439;
    msg.lon = 0.8123096329046575;
    msg.z = 0.2827716593190355;
    msg.z_units = 19U;
    msg.speed = 0.4291342860767924;
    msg.speed_units = 48U;
    msg.bearing = 0.16496027022604864;
    msg.cross_angle = 0.37504241837333396;
    msg.width = 0.31378792259882204;
    msg.length = 0.6348867794366375;
    msg.hstep = 0.745340443488808;
    msg.coff = 177U;
    msg.alternation = 105U;
    msg.flags = 228U;
    msg.custom.assign("VSQECHYNFRKIJSKDPENQTBLHJYOAMYZYTMJVOAVLCIFTVPQXQG");

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
    msg.setTimeStamp(0.6222977102111098);
    msg.setSource(18191U);
    msg.setSourceEntity(82U);
    msg.setDestination(44842U);
    msg.setDestinationEntity(27U);
    msg.timeout = 65018U;
    msg.lat = 0.03580123100897248;
    msg.lon = 0.239792830073983;
    msg.z = 0.3826821843270767;
    msg.z_units = 232U;
    msg.speed = 0.337341521981668;
    msg.speed_units = 226U;
    msg.bearing = 0.5927892837913316;
    msg.cross_angle = 0.3321109230468816;
    msg.width = 0.6195406595763003;
    msg.length = 0.16812056574778234;
    msg.hstep = 0.01955397756110744;
    msg.coff = 94U;
    msg.alternation = 171U;
    msg.flags = 77U;
    msg.custom.assign("TGOWHFLLWJMFIWZZVQBUQAONPDZFEUEZYVXARZRBENMMSFPLDCZHUYSXLJKHFODJDPAUMQIJRLNAAYHMSULXBLKKBDCGEMDITDXVBXGNNFKXCEOCOQKSFPUCJJHIRKOZBWWBQUCIWSNPKHTNTXYBNCVVGMDZAEIWSYRBGETUVFSQMAPVPWSEJTFJGGEZIYOUMXNAAGHEHKYZQVTYCQLWXOWTACY");

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
    msg.setTimeStamp(0.35763188294696424);
    msg.setSource(61021U);
    msg.setSourceEntity(234U);
    msg.setDestination(20632U);
    msg.setDestinationEntity(72U);
    msg.timeout = 4127U;
    msg.lat = 0.36721640106871745;
    msg.lon = 0.8462025858070537;
    msg.z = 0.002745797016999285;
    msg.z_units = 106U;
    msg.speed = 0.7995546810090122;
    msg.speed_units = 215U;
    msg.custom.assign("RMCUMBVHPAXSXRWRXUYHHYXEZLFMREJTRVEOYMUKNNJGQOKBCQEJCZWDFAIVYJPAVIHKVGUBEHIDNGKZVDOSZWBCZZSSEHIRLQBYFXBAFFZKMGHOISUSAQKNPJEDPPYBU");

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
    msg.setTimeStamp(0.26562924568644275);
    msg.setSource(54013U);
    msg.setSourceEntity(143U);
    msg.setDestination(59961U);
    msg.setDestinationEntity(34U);
    msg.timeout = 30258U;
    msg.lat = 0.06882799076972168;
    msg.lon = 0.9996438309838972;
    msg.z = 0.6323146918559815;
    msg.z_units = 128U;
    msg.speed = 0.7833799292993999;
    msg.speed_units = 195U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1943996557676524;
    tmp_msg_0.y = 0.5764120892252562;
    tmp_msg_0.z = 0.6792397711593935;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JRPJFDLLVHXRGHRBQVQWJCKBUCZRYLTEDPEAKDEZFHNKLRUZUFSTGILGIXDXAAQZWNZULYVDJKELYZBVMFVAZUVTTPIMGRYJMQSZPSRC");

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
    msg.setTimeStamp(0.8016484736084007);
    msg.setSource(6121U);
    msg.setSourceEntity(26U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(242U);
    msg.timeout = 5101U;
    msg.lat = 0.9794434593288746;
    msg.lon = 0.2074709308278091;
    msg.z = 0.5197701622061813;
    msg.z_units = 163U;
    msg.speed = 0.23839391728396098;
    msg.speed_units = 115U;
    msg.custom.assign("KONBTJCIHFXLFJKYXZTJKEAEBJRFYEZHNAORSVESDQHWXQDNAZGBYGKGMQANRLGUNTWHKNPPYJTXZUNZDHTHCVQFIREEGWMVYGORKSKNPUUGNTUXLQGJFJCJISMXSVEACWATQMJWIGDEVWIMIYFZSDVELMZMLYYLJRTLISBPAOUHLGFFVUAKKHLXCXKCTFXQOSYWCVBULHEQPNXRPBWZPM");

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
    msg.setTimeStamp(0.13006874313402506);
    msg.setSource(900U);
    msg.setSourceEntity(156U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(60U);
    msg.x = 0.7349032415504572;
    msg.y = 0.5635084780990957;
    msg.z = 0.6622956152327467;

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
    msg.setTimeStamp(0.681005304845712);
    msg.setSource(10818U);
    msg.setSourceEntity(1U);
    msg.setDestination(3095U);
    msg.setDestinationEntity(74U);
    msg.x = 0.15578958260171238;
    msg.y = 0.18603798629607293;
    msg.z = 0.0024916420912576287;

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
    msg.setTimeStamp(0.21950850225741037);
    msg.setSource(54197U);
    msg.setSourceEntity(163U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(176U);
    msg.x = 0.32228997897014955;
    msg.y = 0.1829824006161651;
    msg.z = 0.2647983974698911;

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
    msg.setTimeStamp(0.5663669535145757);
    msg.setSource(65240U);
    msg.setSourceEntity(21U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(38U);
    msg.timeout = 34494U;
    msg.lat = 0.48673163047057355;
    msg.lon = 0.4576025372422118;
    msg.z = 0.26957531153786307;
    msg.z_units = 118U;
    msg.amplitude = 0.08905600030032335;
    msg.pitch = 0.34925040331637813;
    msg.speed = 0.3208045393515305;
    msg.speed_units = 20U;
    msg.custom.assign("UGCGORNIMQEXAXKDRVAEMDYBYIBUCZZXMVNFSNTAIWRQRFQHBPFMJGNKDISGVJSDHNIKOWJTPCNUQEH");

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
    msg.setTimeStamp(0.22329968356323449);
    msg.setSource(32005U);
    msg.setSourceEntity(118U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(34U);
    msg.timeout = 31439U;
    msg.lat = 0.8558089058515922;
    msg.lon = 0.9490708733666301;
    msg.z = 0.2688306387458089;
    msg.z_units = 83U;
    msg.amplitude = 0.6066128078107944;
    msg.pitch = 0.07677438508186107;
    msg.speed = 0.29146244568919777;
    msg.speed_units = 164U;
    msg.custom.assign("BYKUBNJNSNYGWGKZEVKPFFQUVNGPIDFOVXFARTUBJAHBQIDFJZDZWIYACHWPQSPLHIWUKCDATFGROCZOHOYIOTHIBWTRFVKJKAPGSJBCYSZSUAXRKZXWMXJTDNTQPLDCEGRQESILHUNLMXXLENTEAUBERDMOYYMPXVOSCRHZYQGJSLSKZQBUVJKQAAXGXYTEMHLBCVMVDFYDQDXWRLRVJQW");

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
    msg.setTimeStamp(0.047185466682475474);
    msg.setSource(14625U);
    msg.setSourceEntity(202U);
    msg.setDestination(21659U);
    msg.setDestinationEntity(74U);
    msg.timeout = 39240U;
    msg.lat = 0.21316357901477478;
    msg.lon = 0.34683447248486954;
    msg.z = 0.9774246281646147;
    msg.z_units = 189U;
    msg.amplitude = 0.39093092649590855;
    msg.pitch = 0.592693275587027;
    msg.speed = 0.04984370009053618;
    msg.speed_units = 72U;
    msg.custom.assign("TBIEWYTXUNULMQHFPZRBCMUDRGSQHDWDQWLJFSCLKSOMSQORBZQEDIACHRMMTQSGEIJJLZYXHATUZHHTDJZYTVWRYANZUNXRGCEURMUDTPARYDDJETJGLWMKELYPCFSNOVAJVFIXTGEUZSKXOTPVMPBSYGKIOKPQOQHDPIOBSVFCAOBXRIBKZCAXMCKKWCJVVHXQNEAKFWBNRGNZACHVMYDO");

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
    msg.setTimeStamp(0.23504836955095865);
    msg.setSource(63477U);
    msg.setSourceEntity(120U);
    msg.setDestination(1110U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.9617851222872204);
    msg.setSource(12165U);
    msg.setSourceEntity(66U);
    msg.setDestination(9640U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.7995428824481177);
    msg.setSource(64701U);
    msg.setSourceEntity(150U);
    msg.setDestination(19400U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.9994677518475031);
    msg.setSource(49540U);
    msg.setSourceEntity(20U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.09557406705424909;
    msg.lon = 0.1878795576108948;
    msg.z = 0.5444236443240761;
    msg.z_units = 191U;
    msg.radius = 0.8585596534637254;
    msg.duration = 60171U;
    msg.speed = 0.13224422788117451;
    msg.speed_units = 219U;
    msg.custom.assign("OWJPGSTBRNHPXDPHSXCSVWADAYBMTJOYFTEJZMUXDSSXMGGOONRFEIEBLYIEJWIKEVXXACHRFUMQRAWEYWQQRLRBGELGKNIPKJCFZQNCIYYMUGXNHBDBWTMGCWIJZZVQLWOLUWBAROVCMHFBTXYCRTLSQMCSQLTHQJVPZTFAKVDZGIVMSIHVOKKGZZSHNICBPNKOANJALUXWPPDUJBX");

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
    msg.setTimeStamp(0.833214898200001);
    msg.setSource(24112U);
    msg.setSourceEntity(154U);
    msg.setDestination(64834U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.7995810773748274;
    msg.lon = 0.5994957964778765;
    msg.z = 0.7213787600812139;
    msg.z_units = 78U;
    msg.radius = 0.7099013514760971;
    msg.duration = 50920U;
    msg.speed = 0.24813068380161152;
    msg.speed_units = 119U;
    msg.custom.assign("PCWQCGXGSHVXXBPYVPNPVQYCQUXNEEYUWDSBYZVIKFKTHDEJMVFUIRDASQYKRSTTRXLBMTDXOFCUAZERBBMELYKBR");

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
    msg.setTimeStamp(0.6130434288285429);
    msg.setSource(49052U);
    msg.setSourceEntity(97U);
    msg.setDestination(15217U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.12146460510418822;
    msg.lon = 0.03437807957654304;
    msg.z = 0.699652264670224;
    msg.z_units = 76U;
    msg.radius = 0.2644359324018124;
    msg.duration = 58387U;
    msg.speed = 0.8422630247552123;
    msg.speed_units = 225U;
    msg.custom.assign("HMRPLPFIKQEUQUUAUBIUCIEERORJOKKVDSIXGKTERHTLFIUHTUBODXDJBZEWFTROVGPQICZAMYABCQJRJLWKVALWQMKEPVNHDRLHVEGGDTCCSVOJUTOSCYOQZSKBYSMASXKWDNBIIEHHQFPWBGBYVENQBKJXDFGMFTMMAUOGWDUZNYZOCZXQXPSZAFEBNNAWRXJLSRTFFHAVIGWJSZVMIOXPRNPXJTPHTKLQDYDYLJFNCLZZNCNMHYSCMX");

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
    msg.setTimeStamp(0.29944354575137133);
    msg.setSource(15369U);
    msg.setSourceEntity(82U);
    msg.setDestination(12273U);
    msg.setDestinationEntity(192U);
    msg.timeout = 1675U;
    msg.flags = 32U;
    msg.lat = 0.5926132334165736;
    msg.lon = 0.48608470683625427;
    msg.start_z = 0.0007089136484403902;
    msg.start_z_units = 126U;
    msg.end_z = 0.2905001969656815;
    msg.end_z_units = 22U;
    msg.radius = 0.06526605292363996;
    msg.speed = 0.13620604264328817;
    msg.speed_units = 42U;
    msg.custom.assign("VJXAKMJYKMFJMVNXPQTLSVSPEIDMTBAKRPEISMWNVRKRUJCAOXGSCULHNDWGZBEPRSFPQOCTUMLNKYKVBGXORNPEMCPYDONRDILNFDECHWCGLHGUJGCZDYXMAAKICVLAUJHQTFAIDUYXIOZUSQFASJHGLATQHXVLNXVBRWHIBQEBWXGSGFKROHZKLYCVOBNZJUBDKZPOEIIEUSBTFZNEZHAPQSWRYUQGVW");

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
    msg.setTimeStamp(0.996373523253335);
    msg.setSource(16541U);
    msg.setSourceEntity(115U);
    msg.setDestination(57546U);
    msg.setDestinationEntity(214U);
    msg.timeout = 14416U;
    msg.flags = 160U;
    msg.lat = 0.8701867577707777;
    msg.lon = 0.018416745547339075;
    msg.start_z = 0.8040135617384623;
    msg.start_z_units = 90U;
    msg.end_z = 0.520607802577745;
    msg.end_z_units = 246U;
    msg.radius = 0.7829044945809986;
    msg.speed = 0.8261980330315222;
    msg.speed_units = 63U;
    msg.custom.assign("WEJYJBUPUDWVONSWLCIXSBOBWTNNXCQGAXHQUSDYDPVETGAXRIEPVQFUKFHERMGFSPBDSBWCNDQFGSCWMJKKYHLQRMAJLHXZMFCPGKUPYCNYZNAFKZYPFUTLJQLOOMHZENVJRRNRGVJSTHDTIPFTZHJQYLTJHC");

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
    msg.setTimeStamp(0.02756022813285175);
    msg.setSource(55290U);
    msg.setSourceEntity(87U);
    msg.setDestination(37483U);
    msg.setDestinationEntity(69U);
    msg.timeout = 40107U;
    msg.flags = 126U;
    msg.lat = 0.6123449547488448;
    msg.lon = 0.4192826993078289;
    msg.start_z = 0.3882324990327809;
    msg.start_z_units = 49U;
    msg.end_z = 0.3612196855248635;
    msg.end_z_units = 226U;
    msg.radius = 0.2856982213259307;
    msg.speed = 0.926706301202998;
    msg.speed_units = 21U;
    msg.custom.assign("HJWVSJOYAQFFZTUMAGTCANGLEOHOEFZEHRDMAWFATQKFZUXAGXSJBIFBMSKAOMPVGCRYCIECINQTYGLDROITEQPDJREBIOIRGKKUYZVUMCIQBFDXBDAJFLTYUIZQRAVRLBYZIPLSMXGZKPQKVPIFWHWVKZRDTOTHCHSOMSVNBPU");

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
    msg.setTimeStamp(0.8942230774267765);
    msg.setSource(38311U);
    msg.setSourceEntity(128U);
    msg.setDestination(64249U);
    msg.setDestinationEntity(7U);
    msg.timeout = 3459U;
    msg.lat = 0.8644508261200332;
    msg.lon = 0.032861183796033866;
    msg.z = 0.10969131470572047;
    msg.z_units = 50U;
    msg.speed = 0.053052613493263956;
    msg.speed_units = 0U;
    msg.custom.assign("BVLQGZPJQEEYTGURQDTNKWKWAQYCGMSLKAXKRTGZWBZYAIZYUMZTDZVUTUJVFFBOCBQRFOCLYXTFIZMLXHSJGWLBYCQSJTSFCPOJNDFIVAKZYCXHJGRBKJDBFVRNGSWMSWNQDOWRHONIZXTEUUEHSBVICLCRBEHRLPEDXYPNEUEYLFNMMOGQ");

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
    msg.setTimeStamp(0.7818993443466842);
    msg.setSource(19872U);
    msg.setSourceEntity(254U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(233U);
    msg.timeout = 45517U;
    msg.lat = 0.7200225671288849;
    msg.lon = 0.2756998595819533;
    msg.z = 0.14096473903927775;
    msg.z_units = 34U;
    msg.speed = 0.06231812699136541;
    msg.speed_units = 181U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.538391681473504;
    tmp_msg_0.y = 0.7909691531692702;
    tmp_msg_0.z = 0.05461028096030052;
    tmp_msg_0.t = 0.9558016552399886;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GASWTLRWOOEPBEYYYFZVTSFFYVWRHNQYSGPFAFJKMHRLSPMLQOAHCDOCJZYLZWNXVNBQCXWEARXRKVG");

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
    msg.setTimeStamp(0.9861611387706207);
    msg.setSource(62660U);
    msg.setSourceEntity(140U);
    msg.setDestination(46898U);
    msg.setDestinationEntity(62U);
    msg.timeout = 23957U;
    msg.lat = 0.3062796946839702;
    msg.lon = 0.10539017203262646;
    msg.z = 0.9053958747154287;
    msg.z_units = 103U;
    msg.speed = 0.7344002511246291;
    msg.speed_units = 123U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5586822105582272;
    tmp_msg_0.y = 0.3488542201874879;
    tmp_msg_0.z = 0.46865597240827006;
    tmp_msg_0.t = 0.8520673124701382;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EEDMWQKLLMPTNDYKYVYM");

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
    msg.setTimeStamp(0.6639624154995254);
    msg.setSource(28736U);
    msg.setSourceEntity(154U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(149U);
    msg.x = 0.4698621193993343;
    msg.y = 0.918748082837775;
    msg.z = 0.6578900283316886;
    msg.t = 0.04924487304846992;

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
    msg.setTimeStamp(0.7764657056259683);
    msg.setSource(29476U);
    msg.setSourceEntity(183U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(22U);
    msg.x = 0.08505884188155677;
    msg.y = 0.7106187404314037;
    msg.z = 0.45216116981203813;
    msg.t = 0.7216648356448487;

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
    msg.setTimeStamp(0.7053262292985134);
    msg.setSource(60178U);
    msg.setSourceEntity(182U);
    msg.setDestination(47451U);
    msg.setDestinationEntity(60U);
    msg.x = 0.5480552497063085;
    msg.y = 0.29651877825031614;
    msg.z = 0.2748599849302549;
    msg.t = 0.9018241951039633;

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
    msg.setTimeStamp(0.5941371525085372);
    msg.setSource(36717U);
    msg.setSourceEntity(184U);
    msg.setDestination(36677U);
    msg.setDestinationEntity(68U);
    msg.timeout = 32439U;
    msg.name.assign("VRTVUWZTFWCZODWGXMWWXDTLGEMMHIIKPKQALQDJDCAHEBTFXOOBSLWRSNJZQAEKIXHUYPDNPRCGLUTKEWBJCLXTCSHYCIYPXSNHWKDVBVJVOBREYDDFFMGMIYJXSOOEBXFGOCSVCIPFFCJASKNSLMUOGAHRHQHMJKGLRUGTAEZUQXNAATKEPBPHCRAAEMBXNBRZYPKOMLJGUYHYUYTJWPJIDBTSRQRZ");
    msg.custom.assign("TXZDTEUNHUWDATDVZMVLNBZOZPQQLJUDWLRGZFLAHMRUICQACVXHCITPQEIKJGKNTXNOCSRTTAURJNEPTMUOMRJRONWXVPHIDDBQLACMVPMIXLDPYYDBJKAXEFKOOEXMDCOWYPUSYHMCYFAFGOXIZNABKGWGQSLISWXFQSKGZSHWFEFAHFVLIJNYFPBLYGJWHBVSDVKMZYLXKOPWSPZBKFISJBEQBAEKUTJRJIUVBOURYYWGQRHGHTM");

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
    msg.setTimeStamp(0.5463131941192516);
    msg.setSource(5131U);
    msg.setSourceEntity(98U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(206U);
    msg.timeout = 5118U;
    msg.name.assign("ZFXWLYRXNUTQEZPSOYXUZCZDKJBEFSCTQIUALMIOJTVWHKFDIJZQPGGEHUPGSDRTAWWMBQNRPAOBKFETIPPYKPGOXYMLYJUHQFRZBIIKESDASZGHSNXYRVJCOEXCEGBFHXTMIQESOPDQEVARFHBBCHLGGRZDMRGQOAFWLWSAUZKQLMVUJSWDJACXOVHBNVXNYMNVMEILKRCHDOKDSWXCMYBTNVZTNPTIUCWJICTLVRLNPNOFJWDKAQ");
    msg.custom.assign("UJLTDKFWPBENFGFPALWWQHMNINROUDJJBXVLSBQRMTYLJMEPZJMZVTBYQNBNTVSPZCYAUHEUUDADHFZVCJFQSGMKLWHOANGISSS");

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
    msg.setTimeStamp(0.30936129041747196);
    msg.setSource(20094U);
    msg.setSourceEntity(19U);
    msg.setDestination(35284U);
    msg.setDestinationEntity(243U);
    msg.timeout = 64066U;
    msg.name.assign("UUATUCXSZAPCZCZGBKYWTEBMVFYSOJPXRSSPBQVDG");
    msg.custom.assign("EZEXRWOVYBYMPRGMUPDDPLHBGSXSNWPISOJMUQTAWZHGTWEVOMJBKWUUMDMNFSXDUUOGQBQHRZPLMVFGBTKALXIVYQHNTKKUC");

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
    msg.setTimeStamp(0.4497594958566101);
    msg.setSource(35146U);
    msg.setSourceEntity(13U);
    msg.setDestination(52522U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.9023472536067321;
    msg.lon = 0.7490626572904424;
    msg.z = 0.289494268851598;
    msg.z_units = 163U;
    msg.speed = 0.08498440682034625;
    msg.speed_units = 244U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9183281392725194;
    tmp_msg_0.y = 0.49762314049869727;
    tmp_msg_0.z = 0.292840795429971;
    tmp_msg_0.t = 0.46050334663163706;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8804177365996264;
    msg.custom.assign("CYRYLCAMDTPZVMSEJAZUQTWCOHXKKJXCCABIFQLIKMTNZVSTWHNFQEFQXKXHQGTITJZAVKOTSJBYUWHNFUKRJRDIAUKONFWMEPGYHOOBVEJEYGUAFISMOZRSZMUIJLOEDYGXXQPZZFBFCLWYMHRBUAFLGSGTPAMALPBMRJUKBRPHHQWDSCVDLZVUDHSDCTGNDYEAEXHP");

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
    msg.setTimeStamp(0.4083662604542927);
    msg.setSource(48906U);
    msg.setSourceEntity(7U);
    msg.setDestination(43681U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.8896937550016513;
    msg.lon = 0.6658317737088881;
    msg.z = 0.10625595777730956;
    msg.z_units = 248U;
    msg.speed = 0.3721630143118406;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9771202131498612;
    tmp_msg_0.y = 0.4333704872781713;
    tmp_msg_0.z = 0.9401622742486506;
    tmp_msg_0.t = 0.9277724279137518;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.20408546099004665;
    msg.custom.assign("OQDYTWXYYGEQMOLZZEVACHVBCGUNBIIFNVWOCKRYAVTZJKRZRHUHVMLTQMKHDDXLKUGAUFIXXHVGQCXREZWDJSDEVRGCSBQBTZGTBORHNRODUTYXOIPUZJNBPCZWMKASGAIJEKGTBTSVJWXLESOVENKDWKOXZFOXPPMFJBUMEMAQARWLIYXLJOZBIYSLLCIJFDHWTSPYDPIGGFLIJQNUHRRFHENKVNLSNCANCJHDPFFQWASPEM");

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
    msg.setTimeStamp(0.784050052838178);
    msg.setSource(40909U);
    msg.setSourceEntity(49U);
    msg.setDestination(31224U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.5982661280300033;
    msg.lon = 0.027852416117342904;
    msg.z = 0.7882538039219977;
    msg.z_units = 142U;
    msg.speed = 0.022047894752354136;
    msg.speed_units = 83U;
    msg.start_time = 0.7367707046024974;
    msg.custom.assign("ABMPFLJKBIIBNABZAJIHVADRPVWMNIETVQMVQPPRVDQCXZSDYKGLC");

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
    msg.setTimeStamp(0.48231743158373397);
    msg.setSource(31477U);
    msg.setSourceEntity(140U);
    msg.setDestination(54545U);
    msg.setDestinationEntity(126U);
    msg.vid = 36212U;
    msg.off_x = 0.13403422479083793;
    msg.off_y = 0.851794202552284;
    msg.off_z = 0.9184138917479374;

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
    msg.setTimeStamp(0.475711931595342);
    msg.setSource(9631U);
    msg.setSourceEntity(137U);
    msg.setDestination(60833U);
    msg.setDestinationEntity(19U);
    msg.vid = 25162U;
    msg.off_x = 0.2795088413601118;
    msg.off_y = 0.028760757302600082;
    msg.off_z = 0.5096745553736769;

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
    msg.setTimeStamp(0.0529998720238003);
    msg.setSource(34194U);
    msg.setSourceEntity(106U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(235U);
    msg.vid = 11387U;
    msg.off_x = 0.5274545469110791;
    msg.off_y = 0.0012050107590483305;
    msg.off_z = 0.1877011935325137;

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
    msg.setTimeStamp(0.676852918833411);
    msg.setSource(147U);
    msg.setSourceEntity(132U);
    msg.setDestination(43540U);
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
    msg.setTimeStamp(0.7645989173359449);
    msg.setSource(20366U);
    msg.setSourceEntity(146U);
    msg.setDestination(41110U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.1484551558504722);
    msg.setSource(18355U);
    msg.setSourceEntity(214U);
    msg.setDestination(35310U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.5251056749108954);
    msg.setSource(5776U);
    msg.setSourceEntity(149U);
    msg.setDestination(33905U);
    msg.setDestinationEntity(131U);
    msg.mid = 61332U;

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
    msg.setTimeStamp(0.2925043349656147);
    msg.setSource(53678U);
    msg.setSourceEntity(41U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(139U);
    msg.mid = 56120U;

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
    msg.setTimeStamp(0.27153966451256883);
    msg.setSource(44384U);
    msg.setSourceEntity(100U);
    msg.setDestination(54038U);
    msg.setDestinationEntity(64U);
    msg.mid = 54226U;

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
    msg.setTimeStamp(0.5476497333206019);
    msg.setSource(57662U);
    msg.setSourceEntity(222U);
    msg.setDestination(17621U);
    msg.setDestinationEntity(245U);
    msg.state = 140U;
    msg.eta = 7434U;
    msg.info.assign("ZWMKANUHGIJFBXCBARWAIWVPMSWQHYEHJLRLTRWOUSBCSFIUKOHGXEXNWPGLLQXLGKIDBQNSRMHXHFDORJQEFJZYCCKSQZYZTQIJVNXQAMZULJIPYYUAVFPKNLNCCGLXVFIRAHCNZTPEDDHYYETCJROURHBUDXDETGFK");

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
    msg.setTimeStamp(0.43832950327666287);
    msg.setSource(56032U);
    msg.setSourceEntity(210U);
    msg.setDestination(16660U);
    msg.setDestinationEntity(39U);
    msg.state = 182U;
    msg.eta = 58605U;
    msg.info.assign("AGHADPZTJWLCLXQFTUJXSVEOUKJOKNXVNCHBQDCQVJKMFMYKQHPVEBJWAZBOPXDMVFTZKLDOFESHORSUBMYCQADNGMCYSIFEPFQXAWYDGDLJHFMQSNKUFRMVYTTONRONIGPWJSQTGQURIBOIYVRPHRWDEWZZQG");

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
    msg.setTimeStamp(0.4570479068055302);
    msg.setSource(21601U);
    msg.setSourceEntity(33U);
    msg.setDestination(41092U);
    msg.setDestinationEntity(181U);
    msg.state = 84U;
    msg.eta = 52602U;
    msg.info.assign("YHUKGBHPNJSXFARAJEFBOGHPDOJQEJCRLNYKCOLBYARVKUHDAPWIZXVOYPUTIGBWFTVHBMGOWTJZUPYMMSSRMUQICLDPVGFKFDABMCQVWWIRIYCSOTXUBRSWHXNEKYHWVVQZKBQXCQAXEKXZSCJRGBSLCBALEHNZMUOJENDIPFAVLVTLDEDQOUFDUITQJIWNEKGMMLOTKPYMRNXWGRLJCLYOGZFRXSAQVTT");

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
    msg.setTimeStamp(0.395120555669389);
    msg.setSource(50605U);
    msg.setSourceEntity(46U);
    msg.setDestination(51614U);
    msg.setDestinationEntity(224U);
    msg.system = 12989U;
    msg.duration = 46700U;
    msg.speed = 0.1443560787715209;
    msg.speed_units = 56U;
    msg.x = 0.8126881861130149;
    msg.y = 0.3572066244593616;
    msg.z = 0.21677468529020671;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.3436823906084102);
    msg.setSource(59970U);
    msg.setSourceEntity(154U);
    msg.setDestination(50141U);
    msg.setDestinationEntity(198U);
    msg.system = 48521U;
    msg.duration = 29588U;
    msg.speed = 0.5495636126628902;
    msg.speed_units = 234U;
    msg.x = 0.43415241907264834;
    msg.y = 0.05193706567509637;
    msg.z = 0.718047095452688;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.41864516555667974);
    msg.setSource(25405U);
    msg.setSourceEntity(183U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(159U);
    msg.system = 62843U;
    msg.duration = 1761U;
    msg.speed = 0.7046606343793064;
    msg.speed_units = 78U;
    msg.x = 0.5993537201623556;
    msg.y = 0.6860506544828732;
    msg.z = 0.5965229132809622;
    msg.z_units = 176U;

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
    msg.setTimeStamp(0.6197794047697156);
    msg.setSource(33262U);
    msg.setSourceEntity(219U);
    msg.setDestination(59705U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.6027181483831296;
    msg.lon = 0.7322185556974358;
    msg.speed = 0.12985980777590078;
    msg.speed_units = 40U;
    msg.duration = 1434U;
    msg.sys_a = 13270U;
    msg.sys_b = 60851U;
    msg.move_threshold = 0.7805504582040137;

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
    msg.setTimeStamp(0.18724630087677352);
    msg.setSource(62060U);
    msg.setSourceEntity(62U);
    msg.setDestination(39070U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.3689658247863522;
    msg.lon = 0.279581549085017;
    msg.speed = 0.12457017590781105;
    msg.speed_units = 9U;
    msg.duration = 44897U;
    msg.sys_a = 14284U;
    msg.sys_b = 27925U;
    msg.move_threshold = 0.013006024532175475;

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
    msg.setTimeStamp(0.8342392523248122);
    msg.setSource(56766U);
    msg.setSourceEntity(202U);
    msg.setDestination(52877U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.7575086893477678;
    msg.lon = 0.23409770916011308;
    msg.speed = 0.27822931941214835;
    msg.speed_units = 76U;
    msg.duration = 40119U;
    msg.sys_a = 30184U;
    msg.sys_b = 8250U;
    msg.move_threshold = 0.6354992148472323;

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
    msg.setTimeStamp(0.4661565568437498);
    msg.setSource(21632U);
    msg.setSourceEntity(1U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.5399580711789956;
    msg.lon = 0.10550028212745088;
    msg.z = 0.3059687263462776;
    msg.z_units = 63U;
    msg.speed = 0.76827119981494;
    msg.speed_units = 40U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1178379295955434;
    tmp_msg_0.lon = 0.760501772599078;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UVRSGUSALEJCEXNCACGFBWJRQTYOQPNODSBAWYMSYTZVIXWYCDELQYMJJEDAKKKCLLWJDNIEECGDVYVSQZQMGPFDDAYMLIKOPKGGEWDDBYAUFKHHMPGZMYMETPV");

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
    msg.setTimeStamp(0.8789318087766115);
    msg.setSource(58267U);
    msg.setSourceEntity(250U);
    msg.setDestination(39216U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.11089993773133511;
    msg.lon = 0.6139258532397436;
    msg.z = 0.08757723741408607;
    msg.z_units = 78U;
    msg.speed = 0.6477321168932948;
    msg.speed_units = 186U;
    msg.custom.assign("GIWYYOPKMEYSDNBHNOXWSYBHNDQILVNFSPGKPAHOLQGREMKFTBCTDINIVKRJFWEZUSDPHAHWSCDXQPWLECWEHFXDCJQKKLJNAOASQIRZRPVXRHRJEDEMFSJYDWIJYZHRXOTUQCMQLLQUGBOBCBJIVTPYVUPIPLRRNZQRHYIZBVOLBZCEQYZAMSVLNUCVTXFJYJAGEGEMXDGLJUXOGGHDIUKUFWZ");

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
    msg.setTimeStamp(0.8606267358709425);
    msg.setSource(41418U);
    msg.setSourceEntity(248U);
    msg.setDestination(21514U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.14998737718274047;
    msg.lon = 0.4678015829481307;
    msg.z = 0.09093514505652067;
    msg.z_units = 18U;
    msg.speed = 0.51663486513797;
    msg.speed_units = 223U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.04928851952993685;
    tmp_msg_0.lon = 0.3101114477758208;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GNEITHVFCLUKKBEULPBCGPJXIKNYNRWHTMBAPUFNXDUBEOXAQIHERGZDRGATXCKMCDTWSPOIZDVEHKFVZTKRY");

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
    msg.setTimeStamp(0.14959038904429345);
    msg.setSource(36528U);
    msg.setSourceEntity(215U);
    msg.setDestination(30197U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.42574424176076553;
    msg.lon = 0.08515152035261386;

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
    msg.setTimeStamp(0.2738241078634388);
    msg.setSource(59785U);
    msg.setSourceEntity(138U);
    msg.setDestination(37563U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.9764643286182884;
    msg.lon = 0.7111189127693222;

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
    msg.setTimeStamp(0.8563226403994404);
    msg.setSource(37255U);
    msg.setSourceEntity(94U);
    msg.setDestination(62439U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.6264611347993292;
    msg.lon = 0.5113643460460997;

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
    msg.setTimeStamp(0.6765299451279321);
    msg.setSource(14096U);
    msg.setSourceEntity(108U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(104U);
    msg.timeout = 42122U;
    msg.lat = 0.6894483621741401;
    msg.lon = 0.5268593999990426;
    msg.z = 0.9770151892677376;
    msg.z_units = 23U;
    msg.pitch = 0.8580487324952024;
    msg.amplitude = 0.8207941410878087;
    msg.duration = 40198U;
    msg.speed = 0.25901451396654795;
    msg.speed_units = 221U;
    msg.radius = 0.11996334484423121;
    msg.direction = 79U;
    msg.custom.assign("TXHMIBIMZUKSNTOBOQZAZKDDVSMQJEUVTHHYDVYAKNRCLPVAJIYGYHVVKWRCRVPDJLTGBCHUJSMSROXGZOJELGLHBZSQHKWSLKGNXUUKYNBDMVNADWQHPQTBLEUILFHJCCQXMAAANEIHTXTQOSLZZKFRJFIZSTIZQEPPUAANBJC");

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
    msg.setTimeStamp(0.946012765041326);
    msg.setSource(4404U);
    msg.setSourceEntity(3U);
    msg.setDestination(19016U);
    msg.setDestinationEntity(193U);
    msg.timeout = 40085U;
    msg.lat = 0.07091812535355291;
    msg.lon = 0.5341358306037339;
    msg.z = 0.7232896432737143;
    msg.z_units = 187U;
    msg.pitch = 0.2510872339778888;
    msg.amplitude = 0.8478323172111005;
    msg.duration = 62010U;
    msg.speed = 0.04497802269667728;
    msg.speed_units = 237U;
    msg.radius = 0.32069503098045593;
    msg.direction = 196U;
    msg.custom.assign("HSHYTZJNQZCPALHWXSMRCEOVGCQPIOZUAWMF");

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
    msg.setTimeStamp(0.6610179615128201);
    msg.setSource(14990U);
    msg.setSourceEntity(228U);
    msg.setDestination(6593U);
    msg.setDestinationEntity(166U);
    msg.timeout = 56495U;
    msg.lat = 0.9424407224204213;
    msg.lon = 0.9884810916814346;
    msg.z = 0.21202242871057508;
    msg.z_units = 190U;
    msg.pitch = 0.12722479912437856;
    msg.amplitude = 0.4882982258444043;
    msg.duration = 2921U;
    msg.speed = 0.269968764123814;
    msg.speed_units = 92U;
    msg.radius = 0.6216126885859297;
    msg.direction = 6U;
    msg.custom.assign("CAFKTFGZBQXBIXOTRKEVDNYLF");

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
    msg.setTimeStamp(0.6344713614069727);
    msg.setSource(51894U);
    msg.setSourceEntity(248U);
    msg.setDestination(2760U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("OIHLIEJGKVNWXXISIRGAUOXOOGAUIRVGZCPSZHMOAPWGPVXDKEYRSMMAHAAZGVTOJQJUTOSUYVQKLFGMNVNMWTXEBVJYDQRLBCEYKDBWZSWJFZFJCCSNKVCZNMBNXKIML");
    msg.reference_frame = 27U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11461U;
    tmp_msg_0.off_x = 0.9477941858242755;
    tmp_msg_0.off_y = 0.02241566757079605;
    tmp_msg_0.off_z = 0.1198076412714012;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SVGDRIMSGQAMVKYODPBXBAKXNXJAVCLJBWVLVUJKMJDEGSUGWRJNDNY");

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
    msg.setTimeStamp(0.5457520258533487);
    msg.setSource(2516U);
    msg.setSourceEntity(138U);
    msg.setDestination(257U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("KXWKLVGFHTQDFVMHZAACEUFJVZTDAUAGSWPBRQYRIXTBVZKKLRMFSTQTQMUGGYIYXCGPYEJKDDYUNFCOMOBYHPYWVOWNDQVTXTLCOBOQPGBSGPXHIZSOVDHNIRNHPGSMHOBLRRLKJLHAWUHDZNNCEDRPGSIGFERCQZFZBLXBAUOTTMZVVPAAUCEJFBYEAXWFXBRSZJKWDUYMTZNNNRKLULEJQJQIEJNMVACUSOC");
    msg.reference_frame = 153U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1946U;
    tmp_msg_0.off_x = 0.23334730150701932;
    tmp_msg_0.off_y = 0.6234135560591203;
    tmp_msg_0.off_z = 0.3537844060574469;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LKHTAOSAVPATZQNSCVYNILQGFUCIWNQZEBFSCFOCWITGJMREQRQARQXGEOGYIMKNFBBGGFWEATOSDDBTICHLIMSJAVXHUZMHJWLWUKHKWWIGPILTOQDEEE");

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
    msg.setTimeStamp(0.43723050949890097);
    msg.setSource(40086U);
    msg.setSourceEntity(205U);
    msg.setDestination(23100U);
    msg.setDestinationEntity(211U);
    msg.formation_name.assign("EJYZAKVWDXUSGLZCRJTVHLUSWBPGLFSGFSBNNELYDOVTMISAROXTKIGOXPOZNZUPHYXVDBOFSVANIHAZMWIWTJRHLKCJKTBCXSUTUQFCFWKYWGULGMMNVZNVOSPAFGQXNMGHJBAZAICYMQAUBDETCUVXRIHEYYOI");
    msg.reference_frame = 208U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53903U;
    tmp_msg_0.off_x = 0.6900219866633165;
    tmp_msg_0.off_y = 0.8062179044429181;
    tmp_msg_0.off_z = 0.0778674550532319;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FRCJENQNKOHFXPSLVTUNBTXTCVIJQZQNEUGTCIVDXSAMZYHWANHIMXFRFHFGFXPZTZZUOICNEXXZIDDRPSXHQKVJKCCYAVUPTLCLSVGKXGRHULTIRBWSWBUHKLOKRBMYBEKUQJKSDWRJBAMUENIWZDSYZMLUIKCYYBFKZOWTVGPQAAELHCJLTSIYSAWNEOJMWOBTOEMCDQMGURMYRBGVYPNNIRAEVQPHFDZQMJJGLFDWVGGXAHPAYDSDJFEPL");

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
    msg.setTimeStamp(0.18093765079540047);
    msg.setSource(53812U);
    msg.setSourceEntity(28U);
    msg.setDestination(780U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("CSTRUBZYPCNZSWGQWNHACKAFZEKLKVOGPKLYVFONTBRNYQSGCOVQUNIXVMBHSIIEJDEWFFXGIOHOUPZJKWYJTDSDTAHASQPLMYKKZXIFXIOWMTAXCEB");
    msg.formation_name.assign("WPBXNDFNOEPRLPSMRUZIKYRJRJZXAVLBABSOYEYXEGHWOFWOCEPWLVQCJZELJVQNUBAIFZMWOKBSWIMXDWUIZZQHFXGKNBHHQRYBOCQPUHVEKAXMFWIOLGLUVARUXAANPYNTUKRGWDVZGNEIYGDUTAGUVTQDDENKXCFTMWYCPJYSYSAJIOCKVCNKVUKTISZYFZRTIQVQMCBBPHHFHMCLTMFXJQHRT");
    msg.plan_id.assign("SWNMFKOHVEWEUMRISGJBCICLKFQKKGJIEPRPMIFBYWKDNXRSFAVCMAOZIAEAPUUSCQVKVHVCJXNPWCCTOBCMJLHDHTZGSXDUTGUGDATBJSURALTSVFIMSZPPWDWQQGBYPYZJRXXPMYCTVWJFQUZFNHTUZRRZKKGMGBBEWLUYRYCEDMQDEBUPIGTLAKNHLAOTOBVLFFEOQOYPIJOMOTLVZQYNYHZRENNKLJ");
    msg.description.assign("WQXXWOPWGRYGGJTNKUAKEWJHSCCMFMBZSSZCTNYBZCTZUJXVODRSKORXEDSOOVVPAECIVVQMJDLRWQTVYGCBCYHFPBFGNUIBIJXXKGHNZXFLBJKNTEFHDCUXDUGEIZYHZWDMEBOAPQERIJLLEDOGIHOAY");
    msg.leader_speed = 0.10668001906307345;
    msg.leader_bank_lim = 0.8131059334455993;
    msg.pos_sim_err_lim = 0.4584814457635261;
    msg.pos_sim_err_wrn = 0.6966677372192632;
    msg.pos_sim_err_timeout = 58790U;
    msg.converg_max = 0.5794367300347584;
    msg.converg_timeout = 27586U;
    msg.comms_timeout = 21570U;
    msg.turb_lim = 0.3651532801579296;
    msg.custom.assign("WFIDLXUXPCSCORCISBARSQQYTCNBMOTGLEYUWXWOBQAKNNCFCTODIHEVLZMFDRMGLEHNSQVAGBHJFUVXU");

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
    msg.setTimeStamp(0.9785879870508152);
    msg.setSource(30707U);
    msg.setSourceEntity(124U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("BCNEJNTVEJKHERDJDQBODCJWND");
    msg.formation_name.assign("NEASUHIBCHQZEAVERBJDPSDHUAIVRUUWYBPVIDGWUKQXLDDOFFLQEXEAXJGZOPSDXJMUINRMQYECHJCCTEGQTLWAYXSMACFHBDNGJIFKRSKDNIMMWWPWIOGMZSCVRPSQYUOSPNOBVFZWNZZMOYLUPLAGQKUIRZFQVTXROYNKKTDGCEZYCCXTTNJTXMTLJPKWYXGZCGBIIBMUPVKBVFFTEXOTGFMEJLYNDNLWOVJZSHWKHK");
    msg.plan_id.assign("OBOANQGAHRCOVDNILVMUVFFVCSSJBAQDNTAOIJEXYLZGAXZAFSGLULWYYOLEIDNXNQVMPUECJQUMKDJMREPERXLHFYKBFOPVSMFN");
    msg.description.assign("ZPTOSJXVMWXLMYBOITLPJTEOQLENOPFNTUIQBYBKNWCVOHRTHESXXHOSBGCLMDVFM");
    msg.leader_speed = 0.0797144360794908;
    msg.leader_bank_lim = 0.02691102796395184;
    msg.pos_sim_err_lim = 0.15463118634254214;
    msg.pos_sim_err_wrn = 0.05499330122646884;
    msg.pos_sim_err_timeout = 35691U;
    msg.converg_max = 0.9614946743878872;
    msg.converg_timeout = 10075U;
    msg.comms_timeout = 44997U;
    msg.turb_lim = 0.7944372029070912;
    msg.custom.assign("CFTDBGHTNIWLPRRXHRDQMQNJUVWTMCNUSYORHAPJIGJLOBXGIASACERXTEUJBXJVEYFJWLVGNNBOHSDDIRTGRGLXIXPZZHTOJEYMQBPWZJVYSIAXFZZIKYFVIZZLNEE");

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
    msg.setTimeStamp(0.7805333078515413);
    msg.setSource(52444U);
    msg.setSourceEntity(144U);
    msg.setDestination(62399U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("NJBPLADXOMUVJBFPAUMZNSQXBCNYQVCKTTFLLMGJFIPBAFQTJLSYHOOAFXVPONOKZCVWXCUZGFEVHSDRMVGEBHSYBFAELTXIKRANJHGMIWDCOCISYSDVERXKEDGDEZXYKGZRCBCBSQWPEOVLVZUXPWIOEAHXYATHQIJNPLMZKUIZEFF");
    msg.formation_name.assign("LZNCODPGTOJPOEICLDMWBQHPCIEWTGPVHAFJJDJHAWJTOASJNLBZTDYSUEVACFU");
    msg.plan_id.assign("GNZUIPIQRLBMVVWAXTIDNLARDPRVFRZHXIEQOWFEOARYPJZQONVKZPEDKTQTEZQJKFSJBXTERUEWSTGYNWKNXQXJIGEBCSGEXBAVHHXCJTWKSLGJSLJNGDYOLCOXGLWIHCUUPGLRSXLEFYWBFKQCZNVKBJDSFJTDUU");
    msg.description.assign("KMMZYOIQZYXWMYZVFSHCFJRIFKBEHESDIYTXMDTJMYHVZQUPDGZDCMRQWYTTQAOQMPRLZOEMGWPDBUIJSLUSSSESELBRVXBDCRVJLIPKJPFJZBGFHTOTEQTPKIONKD");
    msg.leader_speed = 0.39842638289746235;
    msg.leader_bank_lim = 0.2554002336846922;
    msg.pos_sim_err_lim = 0.16324310871412406;
    msg.pos_sim_err_wrn = 0.07715689956990313;
    msg.pos_sim_err_timeout = 60967U;
    msg.converg_max = 0.23997023789662897;
    msg.converg_timeout = 52423U;
    msg.comms_timeout = 46640U;
    msg.turb_lim = 0.491546523498816;
    msg.custom.assign("YDJKAQGRUGJPNBVBEMQCOWCJOKCVCZYSVJOHBONAXSBEB");

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
    msg.setTimeStamp(0.08161239056480729);
    msg.setSource(36633U);
    msg.setSourceEntity(111U);
    msg.setDestination(41814U);
    msg.setDestinationEntity(216U);
    msg.control_src = 44224U;
    msg.control_ent = 36U;
    msg.timeout = 0.8024772153633756;
    msg.loiter_radius = 0.6803278005769704;
    msg.altitude_interval = 0.4644752296437167;

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
    msg.setTimeStamp(0.27775716819446794);
    msg.setSource(22303U);
    msg.setSourceEntity(57U);
    msg.setDestination(37849U);
    msg.setDestinationEntity(15U);
    msg.control_src = 15736U;
    msg.control_ent = 147U;
    msg.timeout = 0.7075992713705987;
    msg.loiter_radius = 0.9654955349009784;
    msg.altitude_interval = 0.860367329321757;

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
    msg.setTimeStamp(0.06758755805623651);
    msg.setSource(52633U);
    msg.setSourceEntity(78U);
    msg.setDestination(10660U);
    msg.setDestinationEntity(155U);
    msg.control_src = 61545U;
    msg.control_ent = 189U;
    msg.timeout = 0.8336214186851291;
    msg.loiter_radius = 0.8158756309615653;
    msg.altitude_interval = 0.039775316565779484;

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
    msg.setTimeStamp(0.502629050379203);
    msg.setSource(48696U);
    msg.setSourceEntity(12U);
    msg.setDestination(13661U);
    msg.setDestinationEntity(231U);
    msg.flags = 50U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4743805841758998;
    tmp_msg_0.speed_units = 46U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3137405114892605;
    tmp_msg_1.z_units = 133U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.045351673291255334;
    msg.lon = 0.4114946970239636;
    msg.radius = 0.5274753441289606;

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
    msg.setTimeStamp(0.4035136918228558);
    msg.setSource(64897U);
    msg.setSourceEntity(126U);
    msg.setDestination(62284U);
    msg.setDestinationEntity(162U);
    msg.flags = 27U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9713586861453642;
    tmp_msg_0.speed_units = 160U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.47838405281653207;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.12380370752872116;
    msg.lon = 0.36512543528712527;
    msg.radius = 0.6466759066633873;

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
    msg.setTimeStamp(0.5707483602909682);
    msg.setSource(36186U);
    msg.setSourceEntity(112U);
    msg.setDestination(15285U);
    msg.setDestinationEntity(10U);
    msg.flags = 182U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5134283863792689;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6605938735259824;
    tmp_msg_1.z_units = 33U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3596217367797394;
    msg.lon = 0.14788927405033725;
    msg.radius = 0.3057044236246622;

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
    msg.setTimeStamp(0.5210012958492287);
    msg.setSource(30058U);
    msg.setSourceEntity(59U);
    msg.setDestination(53125U);
    msg.setDestinationEntity(130U);
    msg.control_src = 39518U;
    msg.control_ent = 227U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 113U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2319047609779893;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2572432870989251;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.12697903965111046;
    tmp_msg_0.lon = 0.6738620720672559;
    tmp_msg_0.radius = 0.003818201440254021;
    msg.reference.set(tmp_msg_0);
    msg.state = 47U;
    msg.proximity = 18U;

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
    msg.setTimeStamp(0.8287131302376094);
    msg.setSource(24613U);
    msg.setSourceEntity(60U);
    msg.setDestination(35611U);
    msg.setDestinationEntity(243U);
    msg.control_src = 42209U;
    msg.control_ent = 239U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 92U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9118291327756016;
    tmp_tmp_msg_0_0.speed_units = 151U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.32191303688373163;
    tmp_tmp_msg_0_1.z_units = 61U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2801118678138709;
    tmp_msg_0.lon = 0.8166711246407624;
    tmp_msg_0.radius = 0.035408925262331525;
    msg.reference.set(tmp_msg_0);
    msg.state = 247U;
    msg.proximity = 153U;

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
    msg.setTimeStamp(0.08260011591914918);
    msg.setSource(37617U);
    msg.setSourceEntity(239U);
    msg.setDestination(46036U);
    msg.setDestinationEntity(20U);
    msg.control_src = 28600U;
    msg.control_ent = 109U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 225U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.297533653104025;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.1465528977041186;
    tmp_tmp_msg_0_1.z_units = 76U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6675931797739262;
    tmp_msg_0.lon = 0.17200372174159195;
    tmp_msg_0.radius = 0.10268122376927358;
    msg.reference.set(tmp_msg_0);
    msg.state = 160U;
    msg.proximity = 178U;

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
    msg.setTimeStamp(0.6344063354980654);
    msg.setSource(28036U);
    msg.setSourceEntity(232U);
    msg.setDestination(38666U);
    msg.setDestinationEntity(44U);
    msg.ax_cmd = 0.9097164025281957;
    msg.ay_cmd = 0.6331627157669246;
    msg.az_cmd = 0.938511537508697;
    msg.ax_des = 0.5842870709380257;
    msg.ay_des = 0.876986813079375;
    msg.az_des = 0.8712416225873204;
    msg.virt_err_x = 0.11129014126565262;
    msg.virt_err_y = 0.8486078266574911;
    msg.virt_err_z = 0.5028238334769339;
    msg.surf_fdbk_x = 0.2607445952163724;
    msg.surf_fdbk_y = 0.061431151756793145;
    msg.surf_fdbk_z = 0.11082211298377798;
    msg.surf_unkn_x = 0.8736217406681956;
    msg.surf_unkn_y = 0.3524123929386458;
    msg.surf_unkn_z = 0.5462015618343771;
    msg.ss_x = 0.2240888225749461;
    msg.ss_y = 0.20755954971649004;
    msg.ss_z = 0.26267223316056965;

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
    msg.setTimeStamp(0.7551157674649303);
    msg.setSource(21648U);
    msg.setSourceEntity(213U);
    msg.setDestination(27978U);
    msg.setDestinationEntity(241U);
    msg.ax_cmd = 0.9823701586118679;
    msg.ay_cmd = 0.14223971893515774;
    msg.az_cmd = 0.723916512020519;
    msg.ax_des = 0.759875235913127;
    msg.ay_des = 0.46864443039691783;
    msg.az_des = 0.4758877442869546;
    msg.virt_err_x = 0.3703259391261132;
    msg.virt_err_y = 0.17945934617021575;
    msg.virt_err_z = 0.9296031455552066;
    msg.surf_fdbk_x = 0.33661164858160586;
    msg.surf_fdbk_y = 0.011540924594991564;
    msg.surf_fdbk_z = 0.05825033092082588;
    msg.surf_unkn_x = 0.7196634755628387;
    msg.surf_unkn_y = 0.7432787111917185;
    msg.surf_unkn_z = 0.12941905248462826;
    msg.ss_x = 0.7435945979155479;
    msg.ss_y = 0.9528248659539263;
    msg.ss_z = 0.6009989086960785;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NSTEWTZEXBATQYTRSHHQKIWJXEUKBLFVHBXXLJXIEOMGDAMYGCQDLOUEXUCUR");
    tmp_msg_0.dist = 0.5377219559191444;
    tmp_msg_0.err = 0.5388849578403098;
    tmp_msg_0.ctrl_imp = 0.22766652990946656;
    tmp_msg_0.rel_dir_x = 0.478002613778045;
    tmp_msg_0.rel_dir_y = 0.7253972318917343;
    tmp_msg_0.rel_dir_z = 0.40170771794494076;
    tmp_msg_0.err_x = 0.9527516611782308;
    tmp_msg_0.err_y = 0.5401220123895257;
    tmp_msg_0.err_z = 0.8049992008834936;
    tmp_msg_0.rf_err_x = 0.45539962827898073;
    tmp_msg_0.rf_err_y = 0.46245202561746135;
    tmp_msg_0.rf_err_z = 0.7609102046517876;
    tmp_msg_0.rf_err_vx = 0.8793144424294546;
    tmp_msg_0.rf_err_vy = 0.47715036596882776;
    tmp_msg_0.rf_err_vz = 0.25434139928249877;
    tmp_msg_0.ss_x = 0.1445469392809251;
    tmp_msg_0.ss_y = 0.08924996854864753;
    tmp_msg_0.ss_z = 0.9425672057360838;
    tmp_msg_0.virt_err_x = 0.23646468073055538;
    tmp_msg_0.virt_err_y = 0.2831104230412792;
    tmp_msg_0.virt_err_z = 0.033573833010192344;
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
    msg.setTimeStamp(0.8668805437786612);
    msg.setSource(63166U);
    msg.setSourceEntity(164U);
    msg.setDestination(48923U);
    msg.setDestinationEntity(251U);
    msg.ax_cmd = 0.13748523824463932;
    msg.ay_cmd = 0.4286281737306976;
    msg.az_cmd = 0.7174791602039167;
    msg.ax_des = 0.9660440400824699;
    msg.ay_des = 0.6518295199171112;
    msg.az_des = 0.6223551736172411;
    msg.virt_err_x = 0.09072631499318007;
    msg.virt_err_y = 0.24143636568325166;
    msg.virt_err_z = 0.0778114998671755;
    msg.surf_fdbk_x = 0.07712921081440871;
    msg.surf_fdbk_y = 0.28268726645345466;
    msg.surf_fdbk_z = 0.8907135356046829;
    msg.surf_unkn_x = 0.9725103961304242;
    msg.surf_unkn_y = 0.15784407579285265;
    msg.surf_unkn_z = 0.2633176480016357;
    msg.ss_x = 0.8785659864097446;
    msg.ss_y = 0.25307093099737554;
    msg.ss_z = 0.39004607243570133;

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
    msg.setTimeStamp(0.8393261015627028);
    msg.setSource(1976U);
    msg.setSourceEntity(42U);
    msg.setDestination(48909U);
    msg.setDestinationEntity(238U);
    msg.s_id.assign("FKDZFYEWQSKXHQCBCBIECBPAVJKUIBGOBGYQDGWKQZXQSNKSZARBNVTYVMOUXKPEXWOGZHGVYURIUYTQCXVDCIKWIF");
    msg.dist = 0.19784396407454863;
    msg.err = 0.3516840697937257;
    msg.ctrl_imp = 0.635646735201851;
    msg.rel_dir_x = 0.8544381287024955;
    msg.rel_dir_y = 0.07646187824726847;
    msg.rel_dir_z = 0.406800374475102;
    msg.err_x = 0.24504022320347707;
    msg.err_y = 0.22973980455562393;
    msg.err_z = 0.3664247677852793;
    msg.rf_err_x = 0.8027825184461344;
    msg.rf_err_y = 0.5148033713703132;
    msg.rf_err_z = 0.14329887760287463;
    msg.rf_err_vx = 0.5988307399180346;
    msg.rf_err_vy = 0.17711603627233896;
    msg.rf_err_vz = 0.539467505387162;
    msg.ss_x = 0.7263487652954187;
    msg.ss_y = 0.9267287963051349;
    msg.ss_z = 0.8029634061304269;
    msg.virt_err_x = 0.319483473066566;
    msg.virt_err_y = 0.45311066220488105;
    msg.virt_err_z = 0.10978680640084604;

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
    msg.setTimeStamp(0.5748710216190079);
    msg.setSource(57140U);
    msg.setSourceEntity(158U);
    msg.setDestination(20134U);
    msg.setDestinationEntity(30U);
    msg.s_id.assign("FNDHOSBAWYPDEAHTOLKSPNGUEFXKNKFQQKTGOSIKYZIYKCZXWUBQWRBIHGZXFVRXPAOJFHTDTERTAHSQHXQAPTWMVVESAIPUEFZGGZYRHUXQCLOYYCJWMPLRNMIBLOTKHIAUPMZUVCOCICVJXWXBDLXDGCQPNZLLSERHDROA");
    msg.dist = 0.8320701169607657;
    msg.err = 0.5136617219501065;
    msg.ctrl_imp = 0.09136865128154437;
    msg.rel_dir_x = 0.1351063456710666;
    msg.rel_dir_y = 0.6356605102213062;
    msg.rel_dir_z = 0.7406226227981411;
    msg.err_x = 0.6101578665163208;
    msg.err_y = 0.6551996906902078;
    msg.err_z = 0.3859577125703977;
    msg.rf_err_x = 0.2472111404604881;
    msg.rf_err_y = 0.4816236431071964;
    msg.rf_err_z = 0.6370551590229058;
    msg.rf_err_vx = 0.8814882707085567;
    msg.rf_err_vy = 0.7967918209451207;
    msg.rf_err_vz = 0.4935070803886402;
    msg.ss_x = 0.32260648381186663;
    msg.ss_y = 0.7914990979126476;
    msg.ss_z = 0.9482123036451068;
    msg.virt_err_x = 0.510692624021131;
    msg.virt_err_y = 0.9067775227433339;
    msg.virt_err_z = 0.12620335245011738;

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
    msg.setTimeStamp(0.2596845784245727);
    msg.setSource(46997U);
    msg.setSourceEntity(248U);
    msg.setDestination(23538U);
    msg.setDestinationEntity(150U);
    msg.s_id.assign("TDCXLGJLYRYWJZRUQLEEIXXRWVHJIWTYJZNGONFYFBRGVDFQKRWAEDKILEFUNZMPHJCGB");
    msg.dist = 0.22475853911448263;
    msg.err = 0.02870303567609167;
    msg.ctrl_imp = 0.2311317962133601;
    msg.rel_dir_x = 0.11333816709270139;
    msg.rel_dir_y = 0.7054866094956417;
    msg.rel_dir_z = 0.36908369047928646;
    msg.err_x = 0.43880170582511;
    msg.err_y = 0.3312011063106809;
    msg.err_z = 0.4189225392663549;
    msg.rf_err_x = 0.8073746191126322;
    msg.rf_err_y = 0.9192012217568206;
    msg.rf_err_z = 0.18935717141522035;
    msg.rf_err_vx = 0.9672787300249279;
    msg.rf_err_vy = 0.24571047131377233;
    msg.rf_err_vz = 0.10609746115250052;
    msg.ss_x = 0.8797606249696354;
    msg.ss_y = 0.38613456785562306;
    msg.ss_z = 0.9553042711256282;
    msg.virt_err_x = 0.10831415289673962;
    msg.virt_err_y = 0.6278240751035257;
    msg.virt_err_z = 0.06779683023077132;

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
    msg.setTimeStamp(0.718364837518549);
    msg.setSource(29529U);
    msg.setSourceEntity(218U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(33U);
    msg.timeout = 26215U;
    msg.rpm = 0.6518339773521834;
    msg.direction = 157U;
    msg.custom.assign("RIMZONJUTYQOCECBZVVNQCCTMCLQXJDNNWEXGWACLMHXOHZSUGAPOZHRBDKJVYOFGGEXVAJBTBLCYQOYPYDPUWYABCKHPJDTSMSDUDNEQ");

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
    msg.setTimeStamp(0.3793654601298073);
    msg.setSource(51808U);
    msg.setSourceEntity(125U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(92U);
    msg.timeout = 26864U;
    msg.rpm = 0.46701905854936265;
    msg.direction = 202U;
    msg.custom.assign("HLXSHEQTMWQKKEUNLOIFBNNJFJCNUYCGJHAOBYIGRVNSZXMUMUBYPQCELXKGEHDHJPNTINBLCZXUQBFGZTWOKGCVDBVWUZLQXWRRZMFQCZTDTVQEKWAIQCKCZVHISIZLTONRROTBSBTQDAIFAMEXWBDWPOAVAAVZIRPPQVDOGYEDSHJUTEJSOJDHSBWLCYNYPFMXPZXSSJJOMHUFKFFXIUYLUVGPPKGDAMPJEGMXGLIRESWHRTRKNLDYKYMR");

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
    msg.setTimeStamp(0.18280693243662316);
    msg.setSource(65036U);
    msg.setSourceEntity(251U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(137U);
    msg.timeout = 31027U;
    msg.rpm = 0.5163857569798985;
    msg.direction = 193U;
    msg.custom.assign("ORDQSIZUKVGMFCYTZATASRHVJXNXMSOLKMZNZWVNWHVKNCUAVORLAEDAIMVYBRWTGPMUMJDUJTITMQDFJGBJNYWUUSPIDWYLSDTTBHDGKPYZWGSBWVJOUNXVNAFPLHEHEOKLSCWAZERWLZIAKOXCNBIXCUKDZDHFZGDPAEKVEWKTGTSPEPLMSTGXCECYOXQ");

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
    msg.setTimeStamp(0.5038232816271626);
    msg.setSource(45478U);
    msg.setSourceEntity(123U);
    msg.setDestination(17362U);
    msg.setDestinationEntity(33U);
    msg.formation_name.assign("KBVJRKNAYFMQPY");
    msg.type = 76U;
    msg.op = 161U;
    msg.group_name.assign("HXRTVFWBBMUWOOHPQYXJZBGRDRYROWYYRAGZKAXLMJDXTLGSEKDVIKANVDISYMOJSXPYBWCBHGUWWZVKMGEGABPIWKVCPPGZFZWXZUBMEAHGYKMSLFYQNBLHLUCPGVNCSFISIDNMNTEJTIRKBMADNQEXUQPUKLYHZOFOXQTWHFHJALELEVUQORICFKZANPJMSOJSZPTJILACIDFTUVKY");
    msg.plan_id.assign("VYAQVJXQRMTPNFHXPSNHYVTCSVZJFPSRMAT");
    msg.description.assign("JXTNXWXTOJLSJCQYCXKAYMSUWFUWFEUTAIOADBJWYKZASRMGVMNQNPCOLPRLTVUIDUGUIKKDBTCYZROEQIOIGODKZBLWZHIWNBFLYVKXPIHFNPHTCMHZNRXBIGESVDQDEHSFESZTKAHXZLLXMJDFGZMAMGAPTIQZPCLAUWBXMDPGEEUBNJYDUCJMFWKGNVQOWKTRVRYPWUAGKST");
    msg.reference_frame = 210U;
    msg.leader_bank_lim = 0.036920433713468204;
    msg.leader_speed_min = 0.5562812487270066;
    msg.leader_speed_max = 0.3638782719853396;
    msg.leader_alt_min = 0.2139092906248501;
    msg.leader_alt_max = 0.49395903331567115;
    msg.pos_sim_err_lim = 0.014446463501087359;
    msg.pos_sim_err_wrn = 0.49357029641182826;
    msg.pos_sim_err_timeout = 15202U;
    msg.converg_max = 0.8287567536676376;
    msg.converg_timeout = 56028U;
    msg.comms_timeout = 63105U;
    msg.turb_lim = 0.14631498543979915;
    msg.custom.assign("GVEWHGLIXFBANNDXWORMJIAOMNQERIRNQXDMROPIFBEXSSWUFTBHAEIECIHVBUTYNLYZSPNYTWRPVUDFCGHMKKKUNPQHPHPLAZGDWAXIWJCXETAENYGQSZAIOFDRXDLBTBBHCQZSWRKTQJ");

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
    msg.setTimeStamp(0.11854537158019063);
    msg.setSource(24133U);
    msg.setSourceEntity(14U);
    msg.setDestination(46692U);
    msg.setDestinationEntity(154U);
    msg.formation_name.assign("IZJQUVNACDRIULQMCNNMTTFFQEVVGZGMOZBGDJHZSFOGBOSXB");
    msg.type = 83U;
    msg.op = 50U;
    msg.group_name.assign("UBPXMYBLRBGHSZQMAOQPNHCDOCHYVWLVLPXKXKTMOOYZVSGBEEIACBTUEXNUIPXPLGVEKMPWTPDIMVRPEIJFTHLXQEADOGNXUCKJURCZL");
    msg.plan_id.assign("MQBNTISYEHEODGURBIVDQSMWBAHGSMTSBXVQNQAPNDTPIXYDQTXJVRJYYDSGJIFFZHPUABBCBGNSWSNRKLVVIPQVIMLONNSFLYHEAECBCJZOBEPPQOZGRAGHLJMTLKAGJWGMHIUZKWTCKHKQAOWJHSQNUXTTMJROOKYCJNXFRPZEXRIZUFXNHVA");
    msg.description.assign("LDPZQVOKJNYPTSRUKQFHSYVQEUOCJTJGXPLUBVMTHWAKWDCJWKQZOAMPDIOJUJODSIKKGHRFISWPEJGSKINMHVWYUYTMIAHBSAVAPLYZXVOLPZQTQNDPGHCNDMEOCUFIARDTHXZXKBIGVEOMGSHPNVYPNWUJMFRKSECCGTLWJ");
    msg.reference_frame = 238U;
    msg.leader_bank_lim = 0.14851488378925792;
    msg.leader_speed_min = 0.694311068930058;
    msg.leader_speed_max = 0.6914254839186269;
    msg.leader_alt_min = 0.6707526335928673;
    msg.leader_alt_max = 0.2590461020798692;
    msg.pos_sim_err_lim = 0.8582606292909358;
    msg.pos_sim_err_wrn = 0.04028387192064886;
    msg.pos_sim_err_timeout = 14351U;
    msg.converg_max = 0.16156219391078563;
    msg.converg_timeout = 61845U;
    msg.comms_timeout = 9707U;
    msg.turb_lim = 0.8598535864446789;
    msg.custom.assign("SFTVHXJEZAGXNHXMNXRFYKMIDUWJPRLZMRDJUQUWLACHXVMKBDCTXVZWMNZIFBOBJALLLGFWTRL");

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
    msg.setTimeStamp(0.2663443936882851);
    msg.setSource(63899U);
    msg.setSourceEntity(243U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(237U);
    msg.formation_name.assign("ZPJTPEDTWJURHYTGXXNFLDNKIVKZSYPRRPVFGLOSKRWBXXPLSEFUHRAMZXNUQPFLADJOIGWFNFYKTGILEUJQCOOVERCTLBACHTEITSKGRLZLWPQVYZCWQAMEDDHBDNBYFZMWGMYIDSTRURCBHHAPQNGKGRQULCGQOUZVSIHV");
    msg.type = 240U;
    msg.op = 53U;
    msg.group_name.assign("KKJIGFUAJJFKFXJVOLHGLPGTNLEHCPAQHZPDUEBRYYQGVWCMGMSNBLISVRXUIHQICSYTALOAY");
    msg.plan_id.assign("DMIAEESXMWCZBTPCBHZHFEJANJOLWNGOPOWKWNHXKATNFOATFRLMGMVDURFLRSIYVQUGOEASCFWOCYQUYZMLMZKUNICAYEBIGAPDZMBLURCRPWVQJUXVCAVKRSDTJKKJIBSYTNZJDMJDDOBOZPKRNCFQVRWYARVQDUPQSCTZCLDOEHULPHUXMFTGYVTITJBHNLVNXXMNPYPXHZIJPYVEEGBXIQWAFGHHIRXIKFSBWZGQGXJHQSGKUSWK");
    msg.description.assign("ESHMXFAHJRFZDNBFKHTADLPAOVZYNNUEFDPFFCNODMEGNGKBOJNFBASXCCQGTKVDAWRPIQZMQILTXKBC");
    msg.reference_frame = 145U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56262U;
    tmp_msg_0.off_x = 0.8986879624317045;
    tmp_msg_0.off_y = 0.2530529143681838;
    tmp_msg_0.off_z = 0.310883097805316;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8602325558699341;
    msg.leader_speed_min = 0.7315156071229039;
    msg.leader_speed_max = 0.102664952506479;
    msg.leader_alt_min = 0.12663996408964706;
    msg.leader_alt_max = 0.2148932530134029;
    msg.pos_sim_err_lim = 0.9651918064072744;
    msg.pos_sim_err_wrn = 0.9301638469693606;
    msg.pos_sim_err_timeout = 6118U;
    msg.converg_max = 0.732685349876075;
    msg.converg_timeout = 38109U;
    msg.comms_timeout = 57212U;
    msg.turb_lim = 0.33431277086038;
    msg.custom.assign("YEOBQKNNLIXRCVZBDCOVVDMBZWUZCDZEPWHQFHEQUTTYKMEKFSNTRGPFSHTCQEMNFKGFYNKSOIASMEEZIYAKQEXYGJURUPDUYSJAZBBBKWIAJMUCBRSWGWJSDHVLEWCHOHLCAUFROVOHATPWQLVSEJZNVHNPCUHBWKJXDJDNFCPTMXTGWFDSAXWXLYQMOOGMYZYSQOLAQBLMVGMITXUFQGXJPZGITIIXBJDIJLTDPRNFKCIHZPUNV");

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
    msg.setTimeStamp(0.36552700634890567);
    msg.setSource(22109U);
    msg.setSourceEntity(6U);
    msg.setDestination(28906U);
    msg.setDestinationEntity(187U);
    msg.timeout = 33391U;
    msg.lat = 0.8521210817712721;
    msg.lon = 0.4652694292090691;
    msg.z = 0.7361694371464634;
    msg.z_units = 77U;
    msg.speed = 0.04216226008813706;
    msg.speed_units = 130U;
    msg.custom.assign("ZSFUKKXELUJWLROFTTEBRVXZNQETZWUCXCGWEWZCMAEJAKWJFIHVSXDRDOYZXDYOQ");

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
    msg.setTimeStamp(0.7374951814250829);
    msg.setSource(61959U);
    msg.setSourceEntity(110U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(137U);
    msg.timeout = 40745U;
    msg.lat = 0.4658198125264934;
    msg.lon = 0.6915275312518329;
    msg.z = 0.055271625577619554;
    msg.z_units = 36U;
    msg.speed = 0.6379003647107354;
    msg.speed_units = 108U;
    msg.custom.assign("ULDQATCUMHLAELIMDVOITTDYKRJPQFLWOHCVVSQKMCOWEHGCDGBPDOCUZVYONBYYXMVBNTTYZAHKAOJWUNLNMLEMESFIUOWHXGNCGBZFGBWZIIHAFPDRIYVZBOWPIGRWFEQULOBXVFVNDEWPJJIXQSFQAEQCJWGRTTSMKXTZYTVUNAIKRSXJXRJPXJLUQLJK");

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
    msg.setTimeStamp(0.7183848439016093);
    msg.setSource(36220U);
    msg.setSourceEntity(246U);
    msg.setDestination(30743U);
    msg.setDestinationEntity(110U);
    msg.timeout = 14872U;
    msg.lat = 0.6819697645119059;
    msg.lon = 0.7574247004027576;
    msg.z = 0.0027840648847964333;
    msg.z_units = 178U;
    msg.speed = 0.721504147366744;
    msg.speed_units = 221U;
    msg.custom.assign("DAVESWKLZUTJVTRMYBFHDFTHZFMEMDKCHXQSZZYVBMWVTIMGFPHWCGPXHUJXDOTLPRBITEFVDRVCSXIWSQQGAVNJYLAQAJJGLIGHIVOFZYPQMPHEKQJBCRDNEARRTRYNXMWFIJPZWRMLLPLOMOUDP");

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
    msg.setTimeStamp(0.7792179589710311);
    msg.setSource(47136U);
    msg.setSourceEntity(88U);
    msg.setDestination(20291U);
    msg.setDestinationEntity(196U);
    msg.timeout = 31611U;
    msg.lat = 0.1955014345382453;
    msg.lon = 0.9813668485194051;
    msg.z = 0.7432955987037885;
    msg.z_units = 7U;
    msg.speed = 0.027339013921566013;
    msg.speed_units = 210U;
    msg.custom.assign("HZGICPZGHJSLFLAAQQNVVUUKUVDMSVWCNHSHTKKTLVRBKTOMAGXUBZGDETVPCPPFJJOUSETJCIFBHDCSEXIREFLEDWYPQWNQEWTXWYDPVZNOAIRKOYJKFELRSPNCDGUXEQAHYBXZRRHVBHDIOTMDMGHBMVCMUTSKMUDJFSZZOILZRTWXDPUYUIIGQYRFYBHXIXFQVFGGKNQCBLYRJRJPWETNWCNONMAYXAKAFQLAJKQYGWE");

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
    msg.setTimeStamp(0.3061098887616369);
    msg.setSource(25943U);
    msg.setSourceEntity(59U);
    msg.setDestination(4757U);
    msg.setDestinationEntity(55U);
    msg.timeout = 62089U;
    msg.lat = 0.28184190013707544;
    msg.lon = 0.08810333622785671;
    msg.z = 0.7946666416919589;
    msg.z_units = 163U;
    msg.speed = 0.002188687545353063;
    msg.speed_units = 226U;
    msg.custom.assign("RNQFMWKOBOAUIPNOZXOLHCSMVKVSFJAAUQHLDDYPNPXSUGJUJUVWZOPHYFFZUWSTKZGHHZOKMPTIGYTXVACBQQVLTJINYANESFQMFCLVRYYQXBMRNZSKDEPVLIDIMTRWNGLS");

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
    msg.setTimeStamp(0.6057890299628214);
    msg.setSource(39404U);
    msg.setSourceEntity(214U);
    msg.setDestination(28243U);
    msg.setDestinationEntity(127U);
    msg.timeout = 44355U;
    msg.lat = 0.5993407532129105;
    msg.lon = 0.7572146671658576;
    msg.z = 0.09701042070029309;
    msg.z_units = 2U;
    msg.speed = 0.9300287570513478;
    msg.speed_units = 3U;
    msg.custom.assign("QKHNNJOTATBPBSNHWXWPNNVGAVUKVRFFAORTKJCCLFTBXNNXTITVEJOKJOWLASPARFAELWXUMXCTKUMYQMDDFYQESBZMQCZQJKSIRRMLMHNOSBGQRXHBEVFKGEFUZBZRH");

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
    msg.setTimeStamp(0.3284528058611407);
    msg.setSource(34852U);
    msg.setSourceEntity(42U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(83U);
    msg.arrival_time = 0.6168136720780937;
    msg.lat = 0.9981332980969885;
    msg.lon = 0.9710284282908973;
    msg.z = 0.11397489145447703;
    msg.z_units = 121U;
    msg.travel_z = 0.30087177391990105;
    msg.travel_z_units = 154U;
    msg.delayed = 181U;

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
    msg.setTimeStamp(0.628223822980546);
    msg.setSource(55406U);
    msg.setSourceEntity(74U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(67U);
    msg.arrival_time = 0.36006969037162884;
    msg.lat = 0.3985083048509809;
    msg.lon = 0.3580405686124458;
    msg.z = 0.5060573029454714;
    msg.z_units = 184U;
    msg.travel_z = 0.9687451583238967;
    msg.travel_z_units = 249U;
    msg.delayed = 79U;

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
    msg.setTimeStamp(0.16392962057630622);
    msg.setSource(19760U);
    msg.setSourceEntity(174U);
    msg.setDestination(15275U);
    msg.setDestinationEntity(94U);
    msg.arrival_time = 0.8611757691233545;
    msg.lat = 0.4357351195391548;
    msg.lon = 0.8476836460696316;
    msg.z = 0.12320521761815639;
    msg.z_units = 77U;
    msg.travel_z = 0.6808608670750819;
    msg.travel_z_units = 242U;
    msg.delayed = 131U;

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
    msg.setTimeStamp(0.5747546056620139);
    msg.setSource(23550U);
    msg.setSourceEntity(205U);
    msg.setDestination(11129U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.09247629049909978;
    msg.lon = 0.6503126273723525;
    msg.z = 0.9873820560701368;
    msg.z_units = 179U;
    msg.speed = 0.8544323678524481;
    msg.speed_units = 32U;
    msg.bearing = 0.5096375867030508;
    msg.cross_angle = 0.6333387805414947;
    msg.width = 0.5065038330836463;
    msg.length = 0.9519219702970261;
    msg.coff = 85U;
    msg.angaperture = 0.12231146185426289;
    msg.range = 19132U;
    msg.overlap = 111U;
    msg.flags = 206U;
    msg.custom.assign("GYPVUGKQWPJTWZEOQSMAWIVPFIJMGAQXVYORLILNIFWCAHLJRQMGXNPFGHRKTOOZYTVBYSLTNSBLIPLMKYAGZCDIPSQTKUZVWBPTHOEZNTWSFAYRDMSRCSOXCJEXCNDPDPHSFJWYXBHZKNTGELEHHM");

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
    msg.setTimeStamp(0.7054109292708421);
    msg.setSource(24781U);
    msg.setSourceEntity(155U);
    msg.setDestination(32249U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.044039690179311086;
    msg.lon = 0.5669039382149577;
    msg.z = 0.569359597206446;
    msg.z_units = 32U;
    msg.speed = 0.25632703254906375;
    msg.speed_units = 12U;
    msg.bearing = 0.045840854090744676;
    msg.cross_angle = 0.5498260729457616;
    msg.width = 0.07484228693981976;
    msg.length = 0.9193379493934146;
    msg.coff = 1U;
    msg.angaperture = 0.8732275026847429;
    msg.range = 36214U;
    msg.overlap = 64U;
    msg.flags = 254U;
    msg.custom.assign("EBNPSOTJDXOIHOZLPEJAWGVZXDXHRQDHUQADKQYSSNWJAKUHUTJZWFPIQEPRDKBRRYSXGTWJVHTUEXSMJZBLXBEHLVMIJNQUVQNWAEZSKYDRQTVAYKLSSCTHIGIFFUTMMPYAWGEOGLNJCUFFNHXIMBRQTLIXPZIBYTLIZPZQPAMBCZONVMLWL");

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
    msg.setTimeStamp(0.09322442517376706);
    msg.setSource(61560U);
    msg.setSourceEntity(17U);
    msg.setDestination(889U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.5517021625249146;
    msg.lon = 0.6212245425539009;
    msg.z = 0.12092613356753923;
    msg.z_units = 73U;
    msg.speed = 0.4986354920528131;
    msg.speed_units = 178U;
    msg.bearing = 0.08874351818045068;
    msg.cross_angle = 0.6536020263204954;
    msg.width = 0.6271494086961885;
    msg.length = 0.4010002687115941;
    msg.coff = 242U;
    msg.angaperture = 0.4389294774838186;
    msg.range = 35799U;
    msg.overlap = 110U;
    msg.flags = 164U;
    msg.custom.assign("PCGGKZONLSCMRWIGGUMEWVQREVJGVFSHENZYPEUZQQSVTHAHKCKOYUYZLNISMFOQAUOXPKKRHEJOIAGNCFPBKKCDPIWJSWRUOBZFCGNNBYMJAYBIHMKYLDFWWFLEXRIWTLSLNTAPTGEHULVOMZOVQLYKUHZLYPBDAWVWDJSPGTC");

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
    msg.setTimeStamp(0.32018657928212435);
    msg.setSource(11241U);
    msg.setSourceEntity(252U);
    msg.setDestination(11777U);
    msg.setDestinationEntity(25U);
    msg.timeout = 31038U;
    msg.lat = 0.10407136029678887;
    msg.lon = 0.17836431371900607;
    msg.z = 0.9479308327067874;
    msg.z_units = 127U;
    msg.speed = 0.8629421350736912;
    msg.speed_units = 65U;
    msg.syringe0 = 86U;
    msg.syringe1 = 57U;
    msg.syringe2 = 233U;
    msg.custom.assign("QTZAPFCNLISILZCSQXFIFGEXJTMYZXHGLWROJCXPVBYQNYBBTSUJPIEIPXSBLBHVTNTLKEKEDOGUQKRMKYPYCZNZEDRSECONQBJEPMVWAVDGYHRAWDFKCATLHDGMQHHIGESGMOWYCLXYW");

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
    msg.setTimeStamp(0.9383806246008995);
    msg.setSource(64610U);
    msg.setSourceEntity(57U);
    msg.setDestination(55978U);
    msg.setDestinationEntity(111U);
    msg.timeout = 30101U;
    msg.lat = 0.47458539316291903;
    msg.lon = 0.8902186916782427;
    msg.z = 0.08950895538043524;
    msg.z_units = 30U;
    msg.speed = 0.40878604150541054;
    msg.speed_units = 33U;
    msg.syringe0 = 94U;
    msg.syringe1 = 70U;
    msg.syringe2 = 153U;
    msg.custom.assign("GJUXNNWPQSJZIDDYLEUXHHRQXOYXGZEWDYFSIINDAZCCHMMNNKKOUTGFYBKCKSQUWDSXCROTURTBEPOJDLUFCVMSGKQPMWALNHPLXXSUJPBCOOTDBFSQBYTCYJVFPBKWCNHEYZMJGXESREUNLMGRXKYIEEWZFFYICTFLVNSAZHJDIBHF");

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
    msg.setTimeStamp(0.7404292817847564);
    msg.setSource(61911U);
    msg.setSourceEntity(80U);
    msg.setDestination(6869U);
    msg.setDestinationEntity(76U);
    msg.timeout = 14067U;
    msg.lat = 0.8055943139738159;
    msg.lon = 0.03658054110475095;
    msg.z = 0.21206746761625928;
    msg.z_units = 201U;
    msg.speed = 0.8965903987134093;
    msg.speed_units = 62U;
    msg.syringe0 = 31U;
    msg.syringe1 = 66U;
    msg.syringe2 = 175U;
    msg.custom.assign("ZPROKYMDZHTNLPKMHHQRRYIRWEHYEBLMEUYOURHSKBAKAIZHASZCCYUBFGOOQWKNFFMDTXBFEKVDWSJPOQMQFETBCKXZNLTSGKCRRNMGBSRLCEZDUXJYQCHHZNFDDSWOXWJOAALFBYTIPNJVXPLXQMSUKTGVPUTLJTEQVQZIHSKAFYSO");

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
    msg.setTimeStamp(0.3791755102070592);
    msg.setSource(13616U);
    msg.setSourceEntity(191U);
    msg.setDestination(24251U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.28054184668260795);
    msg.setSource(4177U);
    msg.setSourceEntity(38U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.8714815434614818);
    msg.setSource(356U);
    msg.setSourceEntity(67U);
    msg.setDestination(57173U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.36131978936414944);
    msg.setSource(42297U);
    msg.setSourceEntity(203U);
    msg.setDestination(7991U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.8441867474396875;
    msg.lon = 0.6970870188930602;
    msg.z = 0.055227932180889394;
    msg.z_units = 131U;
    msg.speed = 0.4248039192950923;
    msg.speed_units = 252U;
    msg.takeoff_pitch = 0.3211155903029841;
    msg.custom.assign("LEEOCDTUQDEOFHITQRNMPQFMRDSISFPTLXNCHCUQWDKLNJBJNCXMRKYGUUVUKDKZWOGSVJIGEGMOBJOAEPLTRNJZVEGVJLDSXVHYPWOXJA");

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
    msg.setTimeStamp(0.7934908577635056);
    msg.setSource(48979U);
    msg.setSourceEntity(122U);
    msg.setDestination(35365U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.518328418737681;
    msg.lon = 0.7271054111994767;
    msg.z = 0.3036492933872368;
    msg.z_units = 213U;
    msg.speed = 0.8326701114017333;
    msg.speed_units = 121U;
    msg.takeoff_pitch = 0.4735875438616022;
    msg.custom.assign("HQRLAAGOINIEAGVLBUPSINCVFLVQMNGZCOEALDSOBXSJJNMCBEFHWVFKDYIMXVASURQGNZJKRGGCVZYTYXXLFXIOJBIXKBUHPHGWWDKHVADOWWJODPXMDSKDVEFZFMMC");

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
    msg.setTimeStamp(0.5226778345633215);
    msg.setSource(49250U);
    msg.setSourceEntity(208U);
    msg.setDestination(57688U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.5835752994632939;
    msg.lon = 0.90861803395427;
    msg.z = 0.7857169342898643;
    msg.z_units = 81U;
    msg.speed = 0.30182902353732166;
    msg.speed_units = 211U;
    msg.takeoff_pitch = 0.33898706543161927;
    msg.custom.assign("WPWEKZQFGPTHYTSQYIGPHVUJVHDBSIXIVTWXHNIPGSRNZRWRKDXRQYUUNIBNAMPOQEKLGTOLKIGCLNCPAJLOQXVLLKKFWTTMZZMGDSTIWCOETNQFDYYEGYOUWCMJECNSQISVEUSQHRVEFHBCVHMGABWPJFWKUXUDAWJSJPAIAEZLMBARCDBYZIQEAGGPVHZMRBOXDUCAUMBQSFTTHKXNFOCROUFZDDRDLLVECOYYX");

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
    msg.setTimeStamp(0.7740799590941482);
    msg.setSource(31142U);
    msg.setSourceEntity(233U);
    msg.setDestination(8339U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.4045672201666727;
    msg.lon = 0.266341475256582;
    msg.z = 0.519304440072921;
    msg.z_units = 189U;
    msg.speed = 0.9623846412379704;
    msg.speed_units = 39U;
    msg.abort_z = 0.41024558981099746;
    msg.bearing = 0.15512991585942837;
    msg.glide_slope = 249U;
    msg.glide_slope_alt = 0.31348134951753337;
    msg.custom.assign("EMMNEUXRFXPABZPESJZZHITMGLQWFQGQVTXXCDJREIBTSQDROARQHEEAVCRGVFHSZHBPDGRUKLRBJXXZIWHJAYXJOIJTKYPWLZNHZFAGDQJIFB");

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
    msg.setTimeStamp(0.9164623268972092);
    msg.setSource(16962U);
    msg.setSourceEntity(47U);
    msg.setDestination(40636U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.5728490754816746;
    msg.lon = 0.8151769141443903;
    msg.z = 0.28808191652978554;
    msg.z_units = 48U;
    msg.speed = 0.22301112579731852;
    msg.speed_units = 202U;
    msg.abort_z = 0.7526995972543421;
    msg.bearing = 0.04511729574445644;
    msg.glide_slope = 26U;
    msg.glide_slope_alt = 0.5111506846062552;
    msg.custom.assign("HJSFTJKVAXCWDHUIKTKHBLETKUXXCEQHDHZJVUIUUGCEZMTYPXZNWVOCGVXJBZCRPCWBSVOGUXIWSRYTHQVRLCGMSPLYUHGYJMXIZKQTLYVLFJYHOFA");

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
    msg.setTimeStamp(0.2928670833066277);
    msg.setSource(17501U);
    msg.setSourceEntity(205U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.8462405452799786;
    msg.lon = 0.09773548439500623;
    msg.z = 0.19546463358866695;
    msg.z_units = 123U;
    msg.speed = 0.7265950610049161;
    msg.speed_units = 202U;
    msg.abort_z = 0.9556189433966267;
    msg.bearing = 0.8046146774152912;
    msg.glide_slope = 12U;
    msg.glide_slope_alt = 0.7473739741597116;
    msg.custom.assign("WBUGOQTSGFRGSUGLXAFAYOVAZJNJBXKNJFPFQLFXWHYQERSKXDIRIZYELVTWUMPNRCTPKFYBRTLOHYCQCSZNDSIUMLVUOHQWNMXCCXAQOCAZVJPPITO");

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
    msg.setTimeStamp(0.04754113029456852);
    msg.setSource(61414U);
    msg.setSourceEntity(169U);
    msg.setDestination(24722U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.37472343853453915;
    msg.lon = 0.39963813089024625;
    msg.speed = 0.8707799744514734;
    msg.speed_units = 246U;
    msg.limits = 129U;
    msg.max_depth = 0.6212134845350291;
    msg.min_alt = 0.8811806697750423;
    msg.time_limit = 0.10252648510652862;
    msg.controller.assign("LFEIGVKDGMPOQHMYWDXNUKSZCWZOAIIEWXPXPEEBHMLAQLRAGJ");
    msg.custom.assign("KWZOXAOUSQKIMCOQUMMEGEDUOZLMCIBURCOPEEKLNFUMSXWBPVMHZBMLDOFGWFXAVIOZVRXNBUWQHECJJKDUTGHYJAPYGDDJRGKXNEVSNCYHPPVWICEBNYCYZFNGBQYAKOHFTAIQONHLTIUKXNPAVSFKZMJERAGSXHZWRTKTARRHTUFEMHPFASIVIQWSFDPDJJLYBQTV");

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
    msg.setTimeStamp(0.9925908066020716);
    msg.setSource(2499U);
    msg.setSourceEntity(100U);
    msg.setDestination(62921U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.9867912324749132;
    msg.lon = 0.03060445672094181;
    msg.speed = 0.6304486415835714;
    msg.speed_units = 179U;
    msg.limits = 14U;
    msg.max_depth = 0.5674437371205348;
    msg.min_alt = 0.589703495501823;
    msg.time_limit = 0.41753194311986896;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8364786832632246;
    tmp_msg_0.lon = 0.7235307374970488;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RKNZDESABIVZEIBXJJLLERQXYPIFJXMGHUKBAOFHYESGWUGCXWEZRARFZHOYNPCPTKDOZKCXOWVSGEJOIELPSDGCQMAOBJVYJFHRTNPY");
    msg.custom.assign("SKMIFZJMDZZCHAOSYIWETPNDDMAIJWNKAEASLENPHYRFMSXQIDFYVUIRIEJVVQRDYPGDYIZWJLUHENQKHLBTWFEMKUMXFQESVIPVAAILFMUOWIWTLHNUBAXHXNQGOKTZUYOPXCRBOAZXZCKHQCLUXOMUTPJHCTTQEVCWYBKERFWOVLWMDHGSRLTJN");

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
    msg.setTimeStamp(0.7137844810392556);
    msg.setSource(35579U);
    msg.setSourceEntity(238U);
    msg.setDestination(11727U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.7655746515130736;
    msg.lon = 0.1201321767455209;
    msg.speed = 0.045749199380956895;
    msg.speed_units = 149U;
    msg.limits = 44U;
    msg.max_depth = 0.8062287213536844;
    msg.min_alt = 0.12193322146973606;
    msg.time_limit = 0.6638284014644907;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6422428334229168;
    tmp_msg_0.lon = 0.7479732947664932;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UYBGAAHQQXRDJUFQWI");
    msg.custom.assign("XWYLZJHAZOPLAZYTZIFME");

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
    msg.setTimeStamp(0.6586749062475392);
    msg.setSource(52972U);
    msg.setSourceEntity(181U);
    msg.setDestination(9788U);
    msg.setDestinationEntity(184U);
    msg.target.assign("WJNHJUZZTWRXNGVJBMNRSWQJOKWWLDMNKRKCIYJNHAOSNOICIPHQPGHQTEGDAZ");
    msg.max_speed = 0.8421428981150606;
    msg.speed_units = 226U;
    msg.lat = 0.4940510401338203;
    msg.lon = 0.657857924979005;
    msg.z = 0.8607148058721796;
    msg.z_units = 80U;
    msg.custom.assign("QBDMXEVDAUJKANOFFWETCCZJPJIBCZPGEQKBLAMOGNKZDMLTCEWKKVHLADIQRAYJNSWRJFOTPNTJHPUKWHZHBNURUZKIFQOUNHNCUMFFKDZOOFBBJVYCSLBVAPMNYRHWLXPMFTICXXSIYCXEAVEBOWGWLEBRGXIWMGVRDDFPTLKSDGYJPVEUSBSZHUTYZRYGOEQDOGQIMXTAMICQYLCGASLLTURSXVGVAXJTWPIEHNIHH");

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
    msg.setTimeStamp(0.38865134121900924);
    msg.setSource(7482U);
    msg.setSourceEntity(4U);
    msg.setDestination(26069U);
    msg.setDestinationEntity(61U);
    msg.target.assign("OKPJWTAXHDM");
    msg.max_speed = 0.6982865795580157;
    msg.speed_units = 154U;
    msg.lat = 0.15448567630399934;
    msg.lon = 0.40933831701380263;
    msg.z = 0.29683267471412667;
    msg.z_units = 116U;
    msg.custom.assign("LYKVZKJLFNIDQLIZKXXUSNDIEJ");

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
    msg.setTimeStamp(0.5311550051424384);
    msg.setSource(15466U);
    msg.setSourceEntity(156U);
    msg.setDestination(22890U);
    msg.setDestinationEntity(130U);
    msg.target.assign("FPAZRRALXSYCOUYMHAHLXQOLUJSJVYFXOPYBZPACHGEHCFZVGELZDONIZAKOWSIYVQURGMFDJTWFRKBRFLHJANMXPWXTBXTYGUZCSGOPNMQRNNZEQUPWPGCUVGHXBEJOTLSAQQSHMIUNKWDDYFXXWSK");
    msg.max_speed = 0.595710208538997;
    msg.speed_units = 50U;
    msg.lat = 0.5803972691401594;
    msg.lon = 0.2596121337551528;
    msg.z = 0.7154813416185349;
    msg.z_units = 197U;
    msg.custom.assign("JOTFYBIDFWAOROCGXKASSMKBGJPPGJQXNZOZEXBMBEYVZYRYGBEQJBHAIVQUHQWKWDEWVAWYNDTVMXNFACRJZPDINBCKUFBPITWRDUNXHCLOWVNUUHVVIRKJCA");

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
    msg.setTimeStamp(0.8588144885431804);
    msg.setSource(47926U);
    msg.setSourceEntity(209U);
    msg.setDestination(34704U);
    msg.setDestinationEntity(227U);
    msg.timeout = 7826U;
    msg.lat = 0.5246957086645426;
    msg.lon = 0.06791062219585942;
    msg.speed = 0.46938165620489125;
    msg.speed_units = 44U;
    msg.custom.assign("SADGRAUROMUUFTQTXGQPQDHQYNZQSHKULMOWRCGPHMWGSCMXZRINAPNEIDGSLNWBYCESTAZGLERMMNYZLZTBKCGYRBFSTVEPJWAECXUDJWXPVVOBTJXOKMBXVIHVBLYEQTBQJNJDIVDOGSJEFAYDOLOQYECXVFNBLLOCKFHSAKPTLEFUBHAPZKITANFXXYWRIZFHNYDQUHP");

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
    msg.setTimeStamp(0.25925401652490965);
    msg.setSource(15050U);
    msg.setSourceEntity(8U);
    msg.setDestination(23152U);
    msg.setDestinationEntity(229U);
    msg.timeout = 37260U;
    msg.lat = 0.22308605344591326;
    msg.lon = 0.4502844271693801;
    msg.speed = 0.8670828754447357;
    msg.speed_units = 58U;
    msg.custom.assign("WDWEZYLQPCSEJIMUWKIQGSHPDZDJWJXJZKMEZLYIVQFBJWRCMYASTRLTQRQXBHXVHGKRXANYRBGATVMBONNGSOGSYPLMILNVIOUMPFJHZSEPNAVRWLZBARCXQUANNKTMTGBELZHOJSHQKDVAETVELYVWTBCZSIEYOAKQZCWURRNPEDKOMFWHCUDNFPGTTLXAIHOXJRODFXWPSDDMCXP");

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
    msg.setTimeStamp(0.8194278051461735);
    msg.setSource(11425U);
    msg.setSourceEntity(198U);
    msg.setDestination(18358U);
    msg.setDestinationEntity(104U);
    msg.timeout = 17162U;
    msg.lat = 0.26293979475825746;
    msg.lon = 0.8051421150326086;
    msg.speed = 0.13975382494643607;
    msg.speed_units = 190U;
    msg.custom.assign("LBEVTNTFRKUZJEZMFIXBXLZEXCCZJHTEGBCUWSYISWWLEEPVXQNFMOISTOJHYDAYNRFHXMKALWSUEGRQMDXIATKUYNHENXYSFZLIUVTYQGOKLRQJKTVYPTLHODOXMIBXPRDHKLSPHGPCIBQOSEUGHJDRVUZWSFJUPDRFOKKHBOFIFAAKAQGYOIOMKPSNMTYLJWUPURGCASABEDBDVTYVZZWQWNZDJX");

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
    msg.setTimeStamp(0.8573022411354663);
    msg.setSource(36213U);
    msg.setSourceEntity(219U);
    msg.setDestination(9623U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.3900929492604883;
    msg.lon = 0.17524667582168219;
    msg.z = 0.3090290061456119;
    msg.z_units = 127U;
    msg.radius = 0.6952419355444742;
    msg.duration = 48954U;
    msg.speed = 0.9072527454867019;
    msg.speed_units = 35U;
    msg.popup_period = 18779U;
    msg.popup_duration = 61374U;
    msg.flags = 94U;
    msg.custom.assign("QESHUKUUDGXXCHXENKFMWUUHPGNFPUVHCMCYFJDMMZRQBXYWGJMEOXBHWBVRFUIGYNKKLXXRLAFHCBNZLEZDKVTOLLVBAIROPQFEKSVQJAQAAERDEOVZCSLJWTUTMBFAZNYJFHTKDLXRQJOZLSBUIBJYRARPXIZCSOPSGJWOQNEYFGKDZTOYQQTIIAETNBRXDVATIGAQWSDMKORVHECDFNSOKGSWPTCHY");

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
    msg.setTimeStamp(0.296716105434075);
    msg.setSource(23373U);
    msg.setSourceEntity(180U);
    msg.setDestination(20214U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.20805335986463447;
    msg.lon = 0.30830335582820856;
    msg.z = 0.43112168808091134;
    msg.z_units = 128U;
    msg.radius = 0.031220457932227053;
    msg.duration = 56788U;
    msg.speed = 0.205632362761621;
    msg.speed_units = 98U;
    msg.popup_period = 5931U;
    msg.popup_duration = 17156U;
    msg.flags = 112U;
    msg.custom.assign("CEDOOBFDIRJUQEBNORZZGADAYYPAAWEUBMCYFXCTGRWTGHSUBHHSXTKGWRUZVMSEKZADJYJNOYPERFKNKFIKIZKMOANFPNOIILQGUYPMPVQDVPRHUTOYQAPMLWHWADALDMQGCRJVFMFRGUYRPJQCHEVQG");

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
    msg.setTimeStamp(0.4293019090044522);
    msg.setSource(28361U);
    msg.setSourceEntity(70U);
    msg.setDestination(38065U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.7273779576924002;
    msg.lon = 0.9693381404417143;
    msg.z = 0.015664248440966366;
    msg.z_units = 80U;
    msg.radius = 0.5755978816534293;
    msg.duration = 3251U;
    msg.speed = 0.6479896859629459;
    msg.speed_units = 77U;
    msg.popup_period = 40191U;
    msg.popup_duration = 32451U;
    msg.flags = 71U;
    msg.custom.assign("OBZTTPWXXPQURJWFBUDCCDMKDZMCIKIECXVFEHULPBVUUHZKTQZHSFHCFKOWVGOBDUYYLTVZASOEAHHEABAYIXASMIPRVURGUZSWVLBLLJNFNEBALQHUPQS");

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
    msg.setTimeStamp(0.5485829744667953);
    msg.setSource(48191U);
    msg.setSourceEntity(230U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.7347117161728663);
    msg.setSource(38117U);
    msg.setSourceEntity(28U);
    msg.setDestination(39045U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.7201625421861683);
    msg.setSource(34707U);
    msg.setSourceEntity(32U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.3304442105983495);
    msg.setSource(39316U);
    msg.setSourceEntity(173U);
    msg.setDestination(9888U);
    msg.setDestinationEntity(89U);
    msg.timeout = 58986U;
    msg.lat = 0.24131247377911158;
    msg.lon = 0.5447746399751923;
    msg.z = 0.9356416489338617;
    msg.z_units = 145U;
    msg.speed = 0.19387905925254056;
    msg.speed_units = 190U;
    msg.bearing = 0.17696485556134378;
    msg.width = 0.6428353786554963;
    msg.direction = 36U;
    msg.custom.assign("HXLYGKJQKPSFUQBGDEELNTYQLEQXQOYWTDVHBAZIYCJAUNPRUKMGSJSAGFJURGTTVVRDKAIEECQTRICLNWPVCXWGFQKABDOFSFSSXMZWKBVNWUBEOUVNSAJNMB");

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
    msg.setTimeStamp(0.8761289088461556);
    msg.setSource(41795U);
    msg.setSourceEntity(88U);
    msg.setDestination(50226U);
    msg.setDestinationEntity(114U);
    msg.timeout = 28825U;
    msg.lat = 0.8890977865151104;
    msg.lon = 0.001642026128820362;
    msg.z = 0.22022392184983153;
    msg.z_units = 237U;
    msg.speed = 0.20134757849161866;
    msg.speed_units = 142U;
    msg.bearing = 0.4988644987211437;
    msg.width = 0.2059388199681127;
    msg.direction = 246U;
    msg.custom.assign("ZTJHXKBVIALBECNP");

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
    msg.setTimeStamp(0.14414248855940215);
    msg.setSource(36297U);
    msg.setSourceEntity(247U);
    msg.setDestination(40498U);
    msg.setDestinationEntity(16U);
    msg.timeout = 52603U;
    msg.lat = 0.7441417717509587;
    msg.lon = 0.5224825779307521;
    msg.z = 0.07592292960824532;
    msg.z_units = 116U;
    msg.speed = 0.26883153049931874;
    msg.speed_units = 137U;
    msg.bearing = 0.6881618165050106;
    msg.width = 0.9651659878359727;
    msg.direction = 136U;
    msg.custom.assign("HAJTGESQSIGDDBRUXSDJWKZELLLXZVCKIEOHABNVRIHMVXVEZSTNUNOYCLRSLTOXZNPMZDHWGAXAPSWJDFKQ");

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
    msg.setTimeStamp(0.9747101403796973);
    msg.setSource(645U);
    msg.setSourceEntity(115U);
    msg.setDestination(43321U);
    msg.setDestinationEntity(248U);
    msg.op_mode = 86U;
    msg.error_count = 89U;
    msg.error_ents.assign("ZIORKWXYQPIRBMYOHOHYJFJQSCMAGWEFRWOZEXMRFJHIWFHTGKPVNSUYTBVRWTRQOYDSMUQZPAHJCLKDVGQPDGZAKU");
    msg.maneuver_type = 35412U;
    msg.maneuver_stime = 0.9436828833260497;
    msg.maneuver_eta = 30841U;
    msg.control_loops = 22657083U;
    msg.flags = 26U;
    msg.last_error.assign("UINOUMKBSOARDHBZFXMXQKRQJEPCLKCDOBASOQKVIFIYJCPMGIUGLROBXQLHUVHVXNFDRXEBDLFAVLNMNZAVZHQTJFPZYWXZRYTUFDPCLGUISKGIXLGJSJYJBCVTEWMROOZTJPBQSIMLKHTJMGKEFTFWWGAMNAAYIHNBFACAENUPNHVDTWZRQDXKBWYTIAVZBELWPTOMNCKUEGHSECYCYNOJHDXQPGEDQRFSZQSDSV");
    msg.last_error_time = 0.8285050373978264;

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
    msg.setTimeStamp(0.9622947220163341);
    msg.setSource(48519U);
    msg.setSourceEntity(76U);
    msg.setDestination(44172U);
    msg.setDestinationEntity(31U);
    msg.op_mode = 250U;
    msg.error_count = 182U;
    msg.error_ents.assign("KJHZGJPSDDPHUITNULXRKZKBANYQVKGWSHLZQQSGZUATENXHBBWHJRAWQVFZBNUVISNPDZTYSKATCCRBKEUGEQUPWJXTMMGXIXFARSKICTKPBHLEALWFZEXHOWDLVVPXCYEINSOUZVYMVSDFOL");
    msg.maneuver_type = 19375U;
    msg.maneuver_stime = 0.24418975974981194;
    msg.maneuver_eta = 25123U;
    msg.control_loops = 1623525510U;
    msg.flags = 28U;
    msg.last_error.assign("JYQHXEXNPKXNLGAVJQWELRELWCSYKNQAPGZOOGCGRRZPCOWQLBXRZEFFVFSDBSUBTESBNQCPVHNDAZNYAYIXDMTTRVECIUTEWLVIIWLGOJYMTUULAEHHFOYIRBDDPMKMGBDUKEQDDGDNNKAYNKRJBOJUOXSYMSYZPZBSILCGCPPTXRBFUVOVJAIHDRPOWFSHTSA");
    msg.last_error_time = 0.9553798299562657;

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
    msg.setTimeStamp(0.2868590176394614);
    msg.setSource(59870U);
    msg.setSourceEntity(46U);
    msg.setDestination(14068U);
    msg.setDestinationEntity(172U);
    msg.op_mode = 169U;
    msg.error_count = 144U;
    msg.error_ents.assign("UEOPFYVZFVQYXVXWWQRWBEBBPQMLYAOWRLFXCRTKOELOMDFCLPGAGTBZVLETOSRNYIELEVTYBUWBUXAJHESIDMGAHBHQBUHVWPQDXRHWFJKAKLNXJAOTSDGXCYMNGSWLSVHTTGBPAHYCWGRMSXJDMISWNJDCXMIBRRCPZSUOPINUMZIRGDNKTCUKUETEAUZJTQZCQDCLJNJNUCNSJIHJZVHOKDYKGZFGVHQOQNKY");
    msg.maneuver_type = 3845U;
    msg.maneuver_stime = 0.27383585911251473;
    msg.maneuver_eta = 25828U;
    msg.control_loops = 646387918U;
    msg.flags = 20U;
    msg.last_error.assign("OEHZDDDXMENMWVDQGAXHKNFWXUPKIKPNLYPAYZMJITOZHSXLYFDPIKDXNIWKCEXLESWXQLYHVIUTBJPQMVLNGJMVPAIWRBQLGETLMROATFYTEAZBHPXUOHRMETFFBCIKGOSOKZFWTCHVMFZ");
    msg.last_error_time = 0.7328031945457156;

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
    msg.setTimeStamp(0.026327394426504114);
    msg.setSource(58184U);
    msg.setSourceEntity(52U);
    msg.setDestination(29378U);
    msg.setDestinationEntity(140U);
    msg.type = 29U;
    msg.request_id = 59502U;
    msg.command = 49U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.33094957116949975;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 46922U;
    tmp_msg_0.custom.assign("RWJZJIZJXRVPCXHZP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55046U;
    msg.info.assign("WJGMENMOYAWDCIZXKVJVDYKUHANYATTTKTBHGKJKAKFNSDBBUGIVLZUNXFWAAPGYAXJWNREIIHCRHTTWMSMQXDQPDFZCFEQIMJVMGGLSHEGQEPDNHNBMLFVGRECXQOPLOTUAJPQJZSJBHEOSSBOIZAMUDEYVCYROLGVIQLBPZLRPWVYCIYSPUKMOMCZDBWRLIJEHXDPYKSXNFUF");

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
    msg.setTimeStamp(0.970754698878503);
    msg.setSource(19961U);
    msg.setSourceEntity(212U);
    msg.setDestination(54275U);
    msg.setDestinationEntity(181U);
    msg.type = 221U;
    msg.request_id = 22302U;
    msg.command = 180U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.09921869290059682;
    tmp_msg_0.lat = 0.35667130025025406;
    tmp_msg_0.lon = 0.1596124635852233;
    tmp_msg_0.z = 0.8693940263232776;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.travel_z = 0.6911936814626561;
    tmp_msg_0.travel_z_units = 190U;
    tmp_msg_0.delayed = 106U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61931U;
    msg.info.assign("XPLYWZIXQXJONNIJDWDOKEFQDJGUVXYKZGOITQNHQTKCZIMCPBFOBIFYX");

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
    msg.setTimeStamp(0.19441360738200264);
    msg.setSource(30748U);
    msg.setSourceEntity(36U);
    msg.setDestination(17538U);
    msg.setDestinationEntity(148U);
    msg.type = 72U;
    msg.request_id = 31360U;
    msg.command = 175U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.07720788129166956;
    tmp_msg_0.lat = 0.9961572646176975;
    tmp_msg_0.lon = 0.9283389376892547;
    tmp_msg_0.z = 0.45976910386695025;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.travel_z = 0.8999866152605888;
    tmp_msg_0.travel_z_units = 120U;
    tmp_msg_0.delayed = 226U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46001U;
    msg.info.assign("LMKKZFTSRZLYVEZVERUCNPFREFIDKWZHPWLQBZPFDBXWNFZTASNGVGAXTGZRTWJXDYKYIWOPGEPTJJLZBRTUDOUPRXOUYFMDBIXXLPWXEUHKGUZKOBOOMSIMCV");

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
    msg.setTimeStamp(0.9720075918426329);
    msg.setSource(49686U);
    msg.setSourceEntity(146U);
    msg.setDestination(1869U);
    msg.setDestinationEntity(241U);
    msg.command = 239U;
    msg.entities.assign("ABCOOFLYMNEEXNMELNVZMMVCISYPYUIYGDWSEDTHGJKQDIIGBHVIFANDBDZGAIRLAYKUZRC");

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
    msg.setTimeStamp(0.8405380475048476);
    msg.setSource(63019U);
    msg.setSourceEntity(87U);
    msg.setDestination(52079U);
    msg.setDestinationEntity(160U);
    msg.command = 90U;
    msg.entities.assign("PGJOAZMQDTPHSWTEPFSKHKRPYOXDFTCPIGNPZMVGFAUWYBSWZSQNSNEZMQJBFULUJWEBSVSVJYIFQGVDDYGZNMDBKYOUVQXZQXOQCCFLUVSAKUXEIVYJOWFAEZHNRWNJAIBOJTHWUY");

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
    msg.setTimeStamp(0.5764070689684867);
    msg.setSource(18905U);
    msg.setSourceEntity(122U);
    msg.setDestination(49406U);
    msg.setDestinationEntity(97U);
    msg.command = 179U;
    msg.entities.assign("TXRGZOPGBKMYLJEYJCGEBVOKTBSVUJLMYLUSPTHRANBH");

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
    msg.setTimeStamp(0.8948308874839355);
    msg.setSource(25313U);
    msg.setSourceEntity(97U);
    msg.setDestination(45288U);
    msg.setDestinationEntity(172U);
    msg.mcount = 228U;
    msg.mnames.assign("DULZRZHWYECRIPDSJXRVNSXLGGDWEHDZMKWNAKUJPASICMREGLEQTEXZNHFODVCYGBOYNBFMLUWHAIVXYCBIOBPDLRGRARHCLVOAIPKCXJQFEAFJTSQJZTARSYNFDHFWOUTSOTQJAMYOHICLIGMAHKSVKXBAIFFKXWMGPYNGOTDJHRBWWYZYURBKQVFWZBUGGQHMLNCQDNMIPUXSVIVSKLOMTQWYNJFVUPESOTCVJNBTTXZQKZEPLPUEKDZ");
    msg.ecount = 168U;
    msg.enames.assign("BKQFPEZPRE");
    msg.ccount = 82U;
    msg.cnames.assign("EPDESPFKORGYQTFCDXAOGKLLYOOGIPNOPYXOKZCRYIYLXHJHXRHYEWDMKLCUTSXMBKBQZVGSXXSWOCBHCKIQHFGLLJZBVDLXYZJDAUEFECRHVEQAPMT");
    msg.last_error.assign("RLANNSZCLXUHXKUXVOKJYZGLZMCQEWZAZMZLVXRKMCTBCFGRIHIIYBGMSHZJDPGLPLOHITLOBMEUKSYDPBQCWECKWFCXZIATVBRXTUNEOPAJRJFJEEONZNODOHQGVKDVWNBQFWWFEGNRDVSDNOHKYPPQYDWVLLUTVSMTSEUAUHRAGGCBITKJXWUIXIVFJQCXPFTY");
    msg.last_error_time = 0.5630106632647044;

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
    msg.setTimeStamp(0.32766678913107294);
    msg.setSource(50243U);
    msg.setSourceEntity(198U);
    msg.setDestination(28991U);
    msg.setDestinationEntity(196U);
    msg.mcount = 223U;
    msg.mnames.assign("ZAZQKUXPAUWMMJXPHYVTRGPQKATWMSISTAKXWIOKMFLRLTCIGFLSOBCZOHFCLHVCGRSUCVMTGDDUZXMTRVYJLYKUOCYXDKOBEEBDYXHDRBQCFGDSILWELJQAA");
    msg.ecount = 231U;
    msg.enames.assign("WOZRQGIBDLRZY");
    msg.ccount = 177U;
    msg.cnames.assign("SEIDQZMUOTFVREGJSUTJXYHIFDFJNRCDXFZZJLYLZLKPGWDCNYWWXKLEHKCVTEJBOMUSGQURNCVDYMRHYVMEPSYRQNJAUJQZYBANWAVKCADATUUIFXMWWRIVXKWBMJXBHYBFODFDQTURRNSHPHSGOOISXXCATXFKOMAZBVXPNKBGYBHIUCKMPPTTLSBWCZQQRNKEGNGEBVPLVEZWQUEPIIQL");
    msg.last_error.assign("YLZMRKMNDZVLORJJKPWCQSVLUPKUPSUDUVNFOWFNHJMCVZQOFIGOKVOUWQMTHSFIHFGGSILIRUFRELYXAHIKYOYGQHMFGESRVBWWSYPZYILKNQTDHEJQBWOYVTDBEAZRNXAQUBZNRWJDBPMDCYVNJKBRNBPQZPPOJCJEHCATDXCPUCESTXSLCLBAITTQWYFNAACGMRBXDCXHDYGTVZFPVKMATOURGASDUOZSMKLLXJQXEFBGWKWHMNHJEEIG");
    msg.last_error_time = 0.9840162183607416;

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
    msg.setTimeStamp(0.39988070000190834);
    msg.setSource(5578U);
    msg.setSourceEntity(180U);
    msg.setDestination(55920U);
    msg.setDestinationEntity(128U);
    msg.mcount = 78U;
    msg.mnames.assign("QYBXDRFJVFNXGINBCRJVOUMCWODHSLPREZFCJQCYKKVWRLWJRDRIZFNPHHYAQKAEQDKWPTJREZOOJUBHBMJTSHXSRDABDQKVMEKPEBZZQEVLXDPMZMW");
    msg.ecount = 31U;
    msg.enames.assign("MZXCTKDGEDYMYNYKKFOAESEWGSIEBUVITFXLCYJHHMZPVEKWNHAQYVNLZEDOLKOMIDCEQEDJVWRUSINKCPHUVJSSJDHIBRQRNRKOCGTWFVDAAQQXWQMFPTSYZXWVNPZ");
    msg.ccount = 108U;
    msg.cnames.assign("LIOQIYGZLATTCLTFVWMUEDHYNFUQATVVSXKEQZMOQKONNJGKBGBIRMJEAROKYSMSAMRKAPHZCHFSRBAODWIQMWKRJAQCKLBQMEJQGDDHJDIGWXJDGRXXJTXWPLVEZITFEUZHAURFYNJVDPMFVZLJCLXOUPFXZPRNHSYYXFXMKIWKVTABIOBHHB");
    msg.last_error.assign("BIJLPOKFNZPUAWSXZDBJUFHISRQTHLTZWLZTMGQWHMXUPDEJOJDLVVVBDHWPDIMPUTDQCSVNKQHGJ");
    msg.last_error_time = 0.675979456407049;

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
    msg.setTimeStamp(0.35106186532677697);
    msg.setSource(29948U);
    msg.setSourceEntity(177U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(137U);
    msg.mask = 36U;
    msg.max_depth = 0.18241743235529595;
    msg.min_altitude = 0.11720094400799519;
    msg.max_altitude = 0.3238628809770925;
    msg.min_speed = 0.825421646303306;
    msg.max_speed = 0.8313372081656626;
    msg.max_vrate = 0.2786829642196125;
    msg.lat = 0.11487325690709982;
    msg.lon = 0.2950375326313077;
    msg.orientation = 0.8505953321293565;
    msg.width = 0.15436440942694507;
    msg.length = 0.338203995718352;

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
    msg.setTimeStamp(0.03642967506128836);
    msg.setSource(49791U);
    msg.setSourceEntity(55U);
    msg.setDestination(5013U);
    msg.setDestinationEntity(23U);
    msg.mask = 3U;
    msg.max_depth = 0.022811490518229616;
    msg.min_altitude = 0.9347517067992751;
    msg.max_altitude = 0.368916406128738;
    msg.min_speed = 0.1716652539672996;
    msg.max_speed = 0.848988701542751;
    msg.max_vrate = 0.11426386611070827;
    msg.lat = 0.7690547320206209;
    msg.lon = 0.729881473036472;
    msg.orientation = 0.05559024198048601;
    msg.width = 0.4621605105270672;
    msg.length = 0.28380832275923407;

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
    msg.setTimeStamp(0.4027165065343489);
    msg.setSource(44474U);
    msg.setSourceEntity(89U);
    msg.setDestination(36193U);
    msg.setDestinationEntity(203U);
    msg.mask = 244U;
    msg.max_depth = 0.5168628950566599;
    msg.min_altitude = 0.6757745062904766;
    msg.max_altitude = 0.4486624996342681;
    msg.min_speed = 0.6412135597411579;
    msg.max_speed = 0.23920971944726266;
    msg.max_vrate = 0.82634758916059;
    msg.lat = 0.724694220232947;
    msg.lon = 0.15733239493474427;
    msg.orientation = 0.6548038918271047;
    msg.width = 0.19570698440362388;
    msg.length = 0.8232382246267929;

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
    msg.setTimeStamp(0.9735399448830182);
    msg.setSource(19492U);
    msg.setSourceEntity(157U);
    msg.setDestination(41334U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.1252769628136139);
    msg.setSource(5221U);
    msg.setSourceEntity(147U);
    msg.setDestination(61831U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.6243734654145207);
    msg.setSource(60752U);
    msg.setSourceEntity(188U);
    msg.setDestination(35556U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.6460565351733957);
    msg.setSource(56519U);
    msg.setSourceEntity(103U);
    msg.setDestination(3524U);
    msg.setDestinationEntity(35U);
    msg.duration = 28579U;

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
    msg.setTimeStamp(0.8928595577052607);
    msg.setSource(31878U);
    msg.setSourceEntity(190U);
    msg.setDestination(23252U);
    msg.setDestinationEntity(80U);
    msg.duration = 56035U;

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
    msg.setTimeStamp(0.3122224222933443);
    msg.setSource(14201U);
    msg.setSourceEntity(188U);
    msg.setDestination(60540U);
    msg.setDestinationEntity(133U);
    msg.duration = 25676U;

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
    msg.setTimeStamp(0.252489188826869);
    msg.setSource(24773U);
    msg.setSourceEntity(31U);
    msg.setDestination(38810U);
    msg.setDestinationEntity(174U);
    msg.enable = 171U;
    msg.mask = 2287041164U;
    msg.scope_ref = 3619734648U;

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
    msg.setTimeStamp(0.6459498930504967);
    msg.setSource(49900U);
    msg.setSourceEntity(133U);
    msg.setDestination(11356U);
    msg.setDestinationEntity(120U);
    msg.enable = 249U;
    msg.mask = 1900800121U;
    msg.scope_ref = 29570898U;

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
    msg.setTimeStamp(0.9595893790122252);
    msg.setSource(5295U);
    msg.setSourceEntity(65U);
    msg.setDestination(62362U);
    msg.setDestinationEntity(91U);
    msg.enable = 40U;
    msg.mask = 4147072524U;
    msg.scope_ref = 1916687263U;

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
    msg.setTimeStamp(0.40453991460165284);
    msg.setSource(14677U);
    msg.setSourceEntity(124U);
    msg.setDestination(2348U);
    msg.setDestinationEntity(252U);
    msg.medium = 246U;

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
    msg.setTimeStamp(0.7404951207390712);
    msg.setSource(29110U);
    msg.setSourceEntity(172U);
    msg.setDestination(27287U);
    msg.setDestinationEntity(83U);
    msg.medium = 175U;

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
    msg.setTimeStamp(0.7015059338066861);
    msg.setSource(31322U);
    msg.setSourceEntity(208U);
    msg.setDestination(43432U);
    msg.setDestinationEntity(150U);
    msg.medium = 186U;

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
    msg.setTimeStamp(0.6940058175302383);
    msg.setSource(684U);
    msg.setSourceEntity(86U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(34U);
    msg.value = 0.08784774836191189;
    msg.type = 35U;

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
    msg.setTimeStamp(0.04289009855161974);
    msg.setSource(33061U);
    msg.setSourceEntity(27U);
    msg.setDestination(14947U);
    msg.setDestinationEntity(243U);
    msg.value = 0.027218043221970967;
    msg.type = 16U;

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
    msg.setTimeStamp(0.42581305314800977);
    msg.setSource(14282U);
    msg.setSourceEntity(208U);
    msg.setDestination(26438U);
    msg.setDestinationEntity(137U);
    msg.value = 0.21684530719084472;
    msg.type = 193U;

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
    msg.setTimeStamp(0.3466101010804976);
    msg.setSource(11801U);
    msg.setSourceEntity(198U);
    msg.setDestination(29406U);
    msg.setDestinationEntity(65U);
    msg.possimerr = 0.2285015443725733;
    msg.converg = 0.27557280343814516;
    msg.turbulence = 0.3883927249081306;
    msg.possimmon = 223U;
    msg.commmon = 102U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.6182352707750094);
    msg.setSource(12457U);
    msg.setSourceEntity(201U);
    msg.setDestination(7195U);
    msg.setDestinationEntity(152U);
    msg.possimerr = 0.8612267748728334;
    msg.converg = 0.4288766101546242;
    msg.turbulence = 0.6615418459525385;
    msg.possimmon = 24U;
    msg.commmon = 11U;
    msg.convergmon = 129U;

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
    msg.setTimeStamp(0.15515593454327214);
    msg.setSource(12284U);
    msg.setSourceEntity(100U);
    msg.setDestination(56127U);
    msg.setDestinationEntity(113U);
    msg.possimerr = 0.6535113552026283;
    msg.converg = 0.16449263498200628;
    msg.turbulence = 0.8495981145405318;
    msg.possimmon = 0U;
    msg.commmon = 49U;
    msg.convergmon = 116U;

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
    msg.setTimeStamp(0.6919454752672339);
    msg.setSource(34004U);
    msg.setSourceEntity(68U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(54U);
    msg.autonomy = 99U;
    msg.mode.assign("OUNPNMJWRBQIALSUTMPAORDXWXQHRLGCXBARVIHFCYWWVBYGMCDJEVSTUOUBEJSXIWENUNXSJDTFSMUFGTDMEHFIIPQZPDLIMEADHYYAZEXBCVJLMJMKIOEWYVFZDLTUNCHPRCETCVUIZJPNPJCBZOMFSAGNAOQSWTLRKXIRIALCDBBXGHAGLMOFGEXZQBDTKPTCVKFFR");

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
    msg.setTimeStamp(0.7333612584361016);
    msg.setSource(57417U);
    msg.setSourceEntity(75U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(172U);
    msg.autonomy = 108U;
    msg.mode.assign("HULZGMHQTVVCYKYDQYCJUYBEBAQMLNLLCMHCSKDHXOYHTFQWTVKZGAWEZMOWHSLKXVGXCFVJQLIV");

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
    msg.setTimeStamp(0.16993929125143403);
    msg.setSource(13786U);
    msg.setSourceEntity(125U);
    msg.setDestination(39846U);
    msg.setDestinationEntity(146U);
    msg.autonomy = 218U;
    msg.mode.assign("TBGIZLWMEAEMPXUGSRCJAGUVQEUCICHPDTBDFGKLWZDIWY");

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
    msg.setTimeStamp(0.08202750852793372);
    msg.setSource(25032U);
    msg.setSourceEntity(113U);
    msg.setDestination(42819U);
    msg.setDestinationEntity(50U);
    msg.type = 87U;
    msg.op = 80U;
    msg.possimerr = 0.7311668076478216;
    msg.converg = 0.3929672590962713;
    msg.turbulence = 0.09378823010346915;
    msg.possimmon = 77U;
    msg.commmon = 230U;
    msg.convergmon = 202U;

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
    msg.setTimeStamp(0.896302416230876);
    msg.setSource(97U);
    msg.setSourceEntity(243U);
    msg.setDestination(49427U);
    msg.setDestinationEntity(124U);
    msg.type = 161U;
    msg.op = 181U;
    msg.possimerr = 0.9378761502208202;
    msg.converg = 0.8434527277031773;
    msg.turbulence = 0.5288310670829438;
    msg.possimmon = 27U;
    msg.commmon = 100U;
    msg.convergmon = 53U;

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
    msg.setTimeStamp(0.35874556685066505);
    msg.setSource(18810U);
    msg.setSourceEntity(67U);
    msg.setDestination(31695U);
    msg.setDestinationEntity(25U);
    msg.type = 130U;
    msg.op = 15U;
    msg.possimerr = 0.20007339429743176;
    msg.converg = 0.009937533798861753;
    msg.turbulence = 0.3555217169397792;
    msg.possimmon = 219U;
    msg.commmon = 78U;
    msg.convergmon = 155U;

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
    msg.setTimeStamp(0.142263142905813);
    msg.setSource(8198U);
    msg.setSourceEntity(242U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(57U);
    msg.op = 128U;
    msg.comm_interface = 213U;
    msg.period = 54543U;
    msg.sys_dst.assign("RAWECBCZEVMBRTPKNFKXQZFFBBUJVVNOEAUEXJMQSOOLYNVQSGPYSRCGLMWULYATAUXLSWUWRPZZULAPLDURYQTOHDOSTCGBQUPODNWBXYWQILWDCIUPFXASDOBJSLMGVBKNZDKCBTECNIQLPJGMPYOXIJWITUVJMSQHHCKGWGTQLEARJKIFIFTAZKEDEXNTGHTVEVNXDXIKFFJCRAY");

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
    msg.setTimeStamp(0.8088366814500167);
    msg.setSource(9102U);
    msg.setSourceEntity(153U);
    msg.setDestination(56627U);
    msg.setDestinationEntity(3U);
    msg.op = 1U;
    msg.comm_interface = 10U;
    msg.period = 13576U;
    msg.sys_dst.assign("MOIOKNGVHFGXMAHRPHMJVEDQKANEZNZRZ");

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
    msg.setTimeStamp(0.7576778598957278);
    msg.setSource(38350U);
    msg.setSourceEntity(127U);
    msg.setDestination(11043U);
    msg.setDestinationEntity(117U);
    msg.op = 79U;
    msg.comm_interface = 93U;
    msg.period = 8128U;
    msg.sys_dst.assign("NTMPOQROUWUAZUBSCTEVJNDETMVPEPQJDUHTTGXDIGWUXUSARMRJSIWBLVLKJXXVSHAWLDNGJOKFGCBXQXQRKQRAVNIZRDHKWQLPLZFDZCWOXPJGDNSYAUYOUZIAQXIPXME");

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
    msg.setTimeStamp(0.9957351438183805);
    msg.setSource(53579U);
    msg.setSourceEntity(90U);
    msg.setDestination(42550U);
    msg.setDestinationEntity(156U);
    msg.stime = 2440190478U;
    msg.latitude = 0.6541362185163638;
    msg.longitude = 0.2987454970721941;
    msg.altitude = 21334U;
    msg.depth = 25878U;
    msg.heading = 36917U;
    msg.speed = 7759;
    msg.fuel = 42;
    msg.exec_state = 23;
    msg.plan_checksum = 45970U;

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
    msg.setTimeStamp(0.9501439428721986);
    msg.setSource(5373U);
    msg.setSourceEntity(44U);
    msg.setDestination(976U);
    msg.setDestinationEntity(44U);
    msg.stime = 3661982453U;
    msg.latitude = 0.19482986658859958;
    msg.longitude = 0.7614052758230315;
    msg.altitude = 2936U;
    msg.depth = 16828U;
    msg.heading = 45166U;
    msg.speed = -15250;
    msg.fuel = 4;
    msg.exec_state = -19;
    msg.plan_checksum = 22050U;

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
    msg.setTimeStamp(0.1375142003301002);
    msg.setSource(5074U);
    msg.setSourceEntity(62U);
    msg.setDestination(37815U);
    msg.setDestinationEntity(119U);
    msg.stime = 2404465388U;
    msg.latitude = 0.4485262939529858;
    msg.longitude = 0.3122560009124148;
    msg.altitude = 20536U;
    msg.depth = 4007U;
    msg.heading = 32341U;
    msg.speed = -17761;
    msg.fuel = 85;
    msg.exec_state = -7;
    msg.plan_checksum = 39864U;

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
    msg.setTimeStamp(0.04428800397195132);
    msg.setSource(28072U);
    msg.setSourceEntity(191U);
    msg.setDestination(7727U);
    msg.setDestinationEntity(161U);
    msg.req_id = 2331U;
    msg.comm_mean = 246U;
    msg.destination.assign("OJLICQTLEEXBVPWZVPHOIQQAJISNEMJLFCLQOKAOCAKJTAIBZXIRXLWHBBWVVHZLNTYSGXJUKNAUXWYSOI");
    msg.deadline = 0.5161710912873206;
    msg.range = 0.41086762659769105;
    msg.data_mode = 104U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("CPKQERCIGJJLZIFDKKZXHBUHFXOJBDMNSVBRCGIVGSXIUQVVVYAWCSJZUCMNMNGNEUGSALEORSHTSAHRTRNKLQAZXZGKIXQIBGAICOMLPUFLSYBEEXWTL");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZHSCCPLAQRCGBEXJLVXNJIQXLWNPCNBXUTMTLZIVCHYZRYUFXO");
    tmp_tmp_msg_0_0.value.assign("ZOIFJFCUEYBNZAQPTDTHGRBGWIXZGBMVUOYENVGNOJTCCNFKCAMGHNPTIFVUCUMRQUEDIIQLXFNGJLTWZQYUTPUVEGPUJHBYSGDPKCZERGLBDXJILK");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OORFWVSMYQJVESTNHDRJSGAVEYAPPYMOSXPZLPIDIUGSRLSQGVNKDUTEOVUZRHUZYTVXGADYQMZXQHJCZPXKZYPSOJZRLCOCDBIYGYQALZHBRAFBJXGBONDWULFVPMBNSG");
    const signed char tmp_msg_1[] = {17, 64, 83, 68, -75, -50, -6, 21, -89, -10, -46, 126, -14, -53, -15, -69, -91, 13, -77, 79, -48, -15, -62, 36, -102, 6, -34, 51, -104, 69, -96, -98, -101, -57, 31, 3, -82, -91, 102, 78, 40, 57, 32, -61, 96, -34, 3, 14, -69, -28, -73, 79, 27, 126, -14, -107, 56, -60, -29, 2, 0, 11, -73, 9, -30, -44, -53, 62, -5, 5, -109, 87, 14, 2, -3, 57, -117, -34, 116, -83, 37, 108, 111, -97, -38, 85, 92, 70, -77, 66, -60, 41, 9, -31, -70, 57, -21, -4, -51, -126, -80, -58, 44, -89, -47, -62, 89, -58, -75, -30, 6, 44, -116, 89, 65, 123, -3, -54, 42, 98, 55, 84, -3, -37, -87, 84, 111, -13, -5, -91, 56, 104, 123, -79, -123, 102, 54, 84, 109, 82, 4, 21, -65, -65, -102, 70, -1, -25, -35, -125, 117, 2, -26, -82, -15, 24, 111, -84, 113, -96, -32, 80, -59, 58, 32, -87};
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
    msg.setTimeStamp(0.9864318080983698);
    msg.setSource(28737U);
    msg.setSourceEntity(144U);
    msg.setDestination(52841U);
    msg.setDestinationEntity(168U);
    msg.req_id = 25187U;
    msg.comm_mean = 218U;
    msg.destination.assign("HXWFSYXECQLNPMRVSUILINRIXYJMZJMOILYGONPLKWIJDDWZKHHDOEXVBVLKXXTZAUXNBBKEMEMUYBTYBTZACBLURHSDVFHJJOCNELTCHFGVUCZKJPGQTWORSANUACUNFFWGHFVZWIQKRPIFAVTCITOSOHTEGRQEDUGCRCDAMYVQMKSIKEZDERPCXQOQDBXMJGKOS");
    msg.deadline = 0.1712850930832257;
    msg.range = 0.9978947195622099;
    msg.data_mode = 173U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 138U;
    tmp_msg_0.op = 238U;
    tmp_msg_0.plan_id.assign("QFZJQQHPGOYIWKWSDRDARDRRFGRTUEOZJGOHGKEOXBFVGBIQNENRLCQORBTNPSXBJCGFOCRUMYBYDLHHWIZMWRLVMJSQMBNYHPXRHWZVCUMAJFJTBLJTXK");
    tmp_msg_0.params.assign("GHLRCBUKEUXIQWZKLPEVKBTZVZCYFXKQQYXDVLWQKCYEFOPSFPQBDMGFYATTAIJRQZWTSJJMLPSAIQLJXRGMTOKRPWRIEVCJVGWNWSBECXXYXJCHXDULPELFHMBDBNPSNNVBBOURZRXYUFEJOGTKCZGMHHTENGNWZYUDEHTAVFGOYOHUARABTJHWFDLOVJJAHDOOBMM");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GCEFUFGUCETXRMAQEDADJAJNBXRSVPWNJASVPSLDPWTQGBYKDQBBNLZLSTCHFT");
    const signed char tmp_msg_1[] = {95, -9, 34, 36, -111, -31, -78, -107, 98, 46, 52, -57, 33, 107, -124, -87, -42, -30, -114, 56, 101, -56, -112, -76, -25, -2, 83, 85, -30, 112, -91, 99, 31, 5, -39, 28, -85, 85, 2, 72, -100, -53, 112, 116, 93, 71, 66, 59, 115, -60, 39, 106, 88, 13, -83, 107, 110, 43, -80, -65, -61, 22, 37, 82, 114, 11, -9, 71, 109, -104, -8, 37, 64, -120, -54, -89, -97, 115, 0, -6, 25, -11, -60, -26, -34, 61, 8, 7, 53, -16, 53, -47, 11, 111, -55, 77, 31, 49, -41, 121, -98, 41, -50, -70, 125, 26, 23, -125, -117, -96, -110, -124, 2, -49, -48, 77, -120, 57, -110, 74, -68, -29, 38, -54, 89, 119, 60, -4, -11, -65, 82, 97, 112, -48, 94, 44, 126, 60, 100, -117, -45, 37, 55, 116, 5, -88, 87, 122, 126, -5, -30, -16, -38, 7, -50, 4, -38, -66, 4, -128, 47, -59, 0, 78, -93, 112, 83, 77, -65, -78, -91, 17, 35, -88, 19, -67, 25, -56, -101, 57, -35, 35, 104, -119, -57, -73, -23, -22, 14, 92, 78, -71, 8, -46, 97, 96, -40, -27, 10, 108, -6, 122, 17, 9, -3, 102, 120, -21, 50, 97, 32, 92, -4};
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
    msg.setTimeStamp(0.6284503274200471);
    msg.setSource(13054U);
    msg.setSourceEntity(247U);
    msg.setDestination(53611U);
    msg.setDestinationEntity(12U);
    msg.req_id = 61124U;
    msg.comm_mean = 248U;
    msg.destination.assign("XYKRLMHLUSYZGLAMQJOOFBKSPJWCJYTXRYNMSSWQBIMMRJIWKIHWAGQLVLXMMUEZNXTADOZKWGIWJKNRUYCHMPCQADAKCPBVHMGFUPEDXZGKHRXRPEE");
    msg.deadline = 0.736754343208129;
    msg.range = 0.3332277366452553;
    msg.data_mode = 196U;
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("FRXKDWGFOMLEWDRTFHYWBHUMWIHXDBYTWYMSCVZVQKSMCPTJCFAMLZOGZOSRRLXEEQIZKPTVPMGVLPAAJFEJFVBRONQNTGNPJNGZFJJYRYVSHHCHVKGIBUSSLTYFKDCKQUOLKBITQPPNQDAUNXMEEXRSPWPULTGCLAAMOCSRGACWOXKBUBEQQZJIOGHARNFETBVSYDBPAQECQIHUMKFXZXMJYVSJYDLJKBWLXUCUGDDENAIWIOZIHRINU");
    tmp_msg_0.report_time = 0.4562291006186089;
    tmp_msg_0.medium = 150U;
    tmp_msg_0.lat = 0.5871643883209166;
    tmp_msg_0.lon = 0.4452548159976343;
    tmp_msg_0.depth = 0.5015377471014593;
    tmp_msg_0.alt = 0.8773740855800702;
    tmp_msg_0.sog = 0.863021346660455;
    tmp_msg_0.cog = 0.6499772204593082;
    IMC::GetWorldCoordinates tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.tracking = 206U;
    tmp_tmp_msg_0_0.lat = 0.876627125618079;
    tmp_tmp_msg_0_0.lon = 0.2188815144189623;
    tmp_tmp_msg_0_0.x = 0.8666925640214564;
    tmp_tmp_msg_0_0.y = 0.4445118883061969;
    tmp_tmp_msg_0_0.z = 0.18396148183032757;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LHBDKCRLBCMBGHITKYANXZITWLSRNBDETFKTNPPDFFOIWWAOXKMUCHZJHHKWEVGDYOQVJPDFPFQXIPJFDVIAPQANBE");
    const signed char tmp_msg_1[] = {25, -35, 80, -97, 20, -20, -52, 35, 70, -4, 121, 69, -85, -59, 126, -115, -4, -39, 99, 120, -110, -114, 120, -29, -36, -115, -76, -60, -46, 29, -65, 118, 16, -77, 45, -6, 68, 48, -66, 101, -125, 24, 42, 45, 37, -29, 50, 8, 11, -101, -25, -16, 26, -108, -103, 18, 14, 50, 60, 40, -96, -96, 1, 8, 124, 14, -89, 5, 62, 113, -59, 104, -76, 77, 33, -73, 92, -35, 76, 103, 97, 31, 107, 77, 122, -8, -66, -54, -13, 120, -118, 18, -71, -86, -111, -112, -13, 16, 73, -55, -28, -106, -28, 70, 20, -70, 2, 83};
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
    msg.setTimeStamp(0.7470322058645485);
    msg.setSource(9181U);
    msg.setSourceEntity(149U);
    msg.setDestination(34178U);
    msg.setDestinationEntity(145U);
    msg.req_id = 20418U;
    msg.status = 47U;
    msg.range = 0.23133839556061908;
    msg.info.assign("QBORPIHMWSGUBRBMULNGAWEGS");

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
    msg.setTimeStamp(0.6223916313517656);
    msg.setSource(54453U);
    msg.setSourceEntity(168U);
    msg.setDestination(4955U);
    msg.setDestinationEntity(191U);
    msg.req_id = 38372U;
    msg.status = 78U;
    msg.range = 0.2980648424430774;
    msg.info.assign("VXXZSERADHPEESGAFKSSNBROKHLHCFNOFMLRZYGTVMAGRYCOSKGJNAUTBPIBNIUFERCOPVMHQLKLQOCWIIGOJKPUTWEMMSGSSULYHWODLWAHTJTOBQVAOWTHHLZBZZCPXMCZGMNRFTFDYSZIIZGZMADFVGKQUCNUYTYBVPWNUXUXDEGXZBJJQMFFRDCWUKQKNHXDITRUYKADPDPEEXBNWCPJ");

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
    msg.setTimeStamp(0.2704215905249395);
    msg.setSource(3427U);
    msg.setSourceEntity(215U);
    msg.setDestination(25208U);
    msg.setDestinationEntity(56U);
    msg.req_id = 39833U;
    msg.status = 204U;
    msg.range = 0.14902112113874189;
    msg.info.assign("AYTLNGLOUEJPLABIQTNOIQDCMXQBIGATCOYBTEGUTXXWEJWGBRSDRVGKNDEXMNZTVAVMVSKRHLJFZAJUGDCBCIRXMMYMKDPCQJJVEFPACEKQ");

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
    msg.setTimeStamp(0.6129327180208504);
    msg.setSource(59205U);
    msg.setSourceEntity(221U);
    msg.setDestination(25181U);
    msg.setDestinationEntity(216U);
    msg.req_id = 8628U;
    msg.destination.assign("ZIVKPFRCBLYGHYXXH");
    msg.timeout = 0.896064577922244;
    msg.sms_text.assign("QTYYJWDOQBZSCSKQFLUAHJYSNLIIADKMRRFSFFBISGNZELFQKVOWUNUEZJXNXMSOPYUKHEUNHROZRJCVVKNCWSMCBPENHPFBHSIECBIYDGFEOVUTWOLJLGCGXLTLEHQMRUAWWRAPBLUBMOVCIZCDPAKDHOTKGTGDGCPJYTBVRPVALFZTEGZXKCMWNTBRQQG");

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
    msg.setTimeStamp(0.6758587060438911);
    msg.setSource(24207U);
    msg.setSourceEntity(90U);
    msg.setDestination(13772U);
    msg.setDestinationEntity(170U);
    msg.req_id = 12174U;
    msg.destination.assign("FUWXTUDJCDAAPKLGWMSEOCMIPVMHRZCLOHVNFAQZSDGIOYKNIHHBWYRUOPTWENFIXQPFXMRJDXEWWISJQPEDCEDFABPXLNLUVHMPNRBBBXTWTOZLWUVSEIIAEIBQGFSGTTLYGCTNUAKXPLZGJFKQHGTMOCYYHUDKVSABVLDEGOWRWRJBMMGYFSOMZZKCJVZBTHHZFSQYURURUJJKZQAOAQBPHLYFOEI");
    msg.timeout = 0.3645010533371358;
    msg.sms_text.assign("BMRKGYHPGXPJJKCFWOALLKGQCFNLJXYSMIM");

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
    msg.setTimeStamp(0.5081259855876158);
    msg.setSource(23173U);
    msg.setSourceEntity(146U);
    msg.setDestination(23173U);
    msg.setDestinationEntity(107U);
    msg.req_id = 47166U;
    msg.destination.assign("MUIUJWLUQRSYXMBHZMDHQEWQKSMTDGCWVKJHLJEWLVTXAHIDXYBZAXQPXBPXEGJGNYFIFTIWCBNRPSKMBTYITNGRZOBMCRBHXNNPUETQPD");
    msg.timeout = 0.2792252390304538;
    msg.sms_text.assign("IKCPBCIEKRKUQTCGDSVTXUPNRVJCRRWEIYNAQDWZHFJHOCMGDTCZYOJJNFNEXZZXGHLRNLMEYYSAPRWGLAQLUKCIIZHSWUNOSOVNVXXZFPEALDZOAPGYWXYLTSGWAUYJSYGMIIEEBFJMESKKIWPCBJFTHJBKLUQWQZLHFQQFMYVRKGTAVCPUVUOSMD");

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
    msg.setTimeStamp(0.4650310306152522);
    msg.setSource(19246U);
    msg.setSourceEntity(134U);
    msg.setDestination(40063U);
    msg.setDestinationEntity(148U);
    msg.req_id = 55463U;
    msg.status = 27U;
    msg.info.assign("YONDEQRKIHRNWQCZMFUVHBADGAWCZFDYAPEHIPLYSFBSNBKMYCROFZDKKMTHLREXAFSLNCXKFBXLTNPXCRRIWUWZDYSGZJNBDQYZJSVCGTXAJDWOOXEQTWWNFJKGGPJBVEPMLZIFORZOKDIHBTK");

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
    msg.setTimeStamp(0.033496061956403755);
    msg.setSource(57640U);
    msg.setSourceEntity(154U);
    msg.setDestination(7889U);
    msg.setDestinationEntity(107U);
    msg.req_id = 9890U;
    msg.status = 20U;
    msg.info.assign("MESPJQTHZDDFWWAGRBUPLCWBJRXGPFBZUYENOTKVVJVRDLFHOXIORPEIAUAZQNNUNWWIKEODJZGUBKGVJIDCMFGCQWNOQOLEPRSASIDQTEVYRJEXIJPOBXQMBGAGYMJECBRDGAXKEVPLLFTNWQVHVHCAIZVKNIILZQTBAUHCKJSGCLAIUEZHDUYGHOTKCMKBVHX");

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
    msg.setTimeStamp(0.8739976730296818);
    msg.setSource(2018U);
    msg.setSourceEntity(219U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(121U);
    msg.req_id = 49248U;
    msg.status = 116U;
    msg.info.assign("DVUBMAGRWPFPLCQTDGYWHBV");

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
    msg.setTimeStamp(0.5743040594631472);
    msg.setSource(16364U);
    msg.setSourceEntity(249U);
    msg.setDestination(34369U);
    msg.setDestinationEntity(94U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.8561471309117702);
    msg.setSource(26937U);
    msg.setSourceEntity(52U);
    msg.setDestination(1772U);
    msg.setDestinationEntity(218U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.17897024233486158);
    msg.setSource(58772U);
    msg.setSourceEntity(124U);
    msg.setDestination(33515U);
    msg.setDestinationEntity(80U);
    msg.state = 156U;

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
    msg.setTimeStamp(0.11997521835436231);
    msg.setSource(12165U);
    msg.setSourceEntity(127U);
    msg.setDestination(10494U);
    msg.setDestinationEntity(106U);
    msg.state = 80U;

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
    msg.setTimeStamp(0.30707405399660626);
    msg.setSource(40234U);
    msg.setSourceEntity(117U);
    msg.setDestination(21145U);
    msg.setDestinationEntity(13U);
    msg.state = 184U;

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
    msg.setTimeStamp(0.5643200954230743);
    msg.setSource(41714U);
    msg.setSourceEntity(155U);
    msg.setDestination(4771U);
    msg.setDestinationEntity(252U);
    msg.state = 180U;

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
    msg.setTimeStamp(0.7115277043003999);
    msg.setSource(49531U);
    msg.setSourceEntity(191U);
    msg.setDestination(20732U);
    msg.setDestinationEntity(221U);
    msg.req_id = 17216U;
    msg.destination.assign("AKTOFWLOPIXVAIWYYPWVOPIBOKEHUBNHCNOPSJWHXFXEEMPMQEKFTYNCTJCFIYPUCMJSRTZQQOVRXNHUZRXZEMHNYLPRPCNZAFBIDAVDNPAOAOFFBIHZLSLDDSBHWYXVZIGGZQLDVTJNETUYCXCERKYKFXJVRVKWIDYNSFJAGJIADTTWJLKGGKAWTSENULSXEMQZOACUTDRZGQGDMEQQJHCMFWUCYLVMMU");
    msg.timeout = 0.3668724356157852;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.6034639599548063;
    tmp_msg_0.lon = 0.9590644940324126;
    tmp_msg_0.depth = 0.9795164620170915;
    tmp_msg_0.roll = 0.9240238138271304;
    tmp_msg_0.pitch = 0.44929333660415016;
    tmp_msg_0.yaw = 0.8731338843811448;
    tmp_msg_0.rcp_time = 0.22602808370233418;
    tmp_msg_0.sid.assign("TQCAHBPRPIKGFCMAFHGNTZYXHXYJRPRSTNCBJEOBGDISZDGCVISKOUUDJBSQALNWDDWXKWQGEFLMPRNLJNMCIPCVENGLRHOICTWFYNCLEAKACUVOUFDBRXOLXMYTDHMDKLQOSJJRNZVVTTESWOMBZXOYNKQHZGHWIFWTWQEFIZBAIPPWEJAKAMQBLPYMOMIUIFYRFVQAJJHDSZEPJPVRLZOHXZZEAXNHVKSK");
    tmp_msg_0.s_type = 105U;
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
    msg.setTimeStamp(0.7912249607644866);
    msg.setSource(30232U);
    msg.setSourceEntity(34U);
    msg.setDestination(30138U);
    msg.setDestinationEntity(168U);
    msg.req_id = 33463U;
    msg.destination.assign("YYKQWVFAUZMVMNVISFTGXZKTDZNCVVBYXSCWIOWMIOWOZSXSKKUGPAFAHJXZTZDODJBHMSZBHGHPRVDISEZPNJDTOQHUVRRIAWPHYLJZFWNYQLLGRRKCBAOIHCLDKMFRHJUEGXEYCXCGQORFQPGI");
    msg.timeout = 0.9273342731922946;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.08270595441253692;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6886752411392844;
    tmp_tmp_msg_0_0.amp = 0.735350464855688;
    tmp_tmp_msg_0_0.cor = 251U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5450400402270876);
    msg.setSource(52679U);
    msg.setSourceEntity(196U);
    msg.setDestination(15015U);
    msg.setDestinationEntity(235U);
    msg.req_id = 11050U;
    msg.destination.assign("CMMSHZYOFUATHBRCILCORPMYMSQVLBGOOPFNPGQOVLQENHSJFOPATQOKONTJMCWJIHDLUNDVAYKSXLIUWVJVXCPFUCZARYFHXKADVWZQXDZZLNAKDAGXUGGZZTGXBPJHBOHMUBIDYJKYZTMCEWNRELWQNWQSPXXTDUPWQDUBGTRSQKFJBXZZJVXWUARNGBNCEKUYLIPVJVEFHVCNYTIHMQYKSSLGERJWCPHMAEDRISIETFEW");
    msg.timeout = 0.6434666243628048;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("YAKFVPIMVNHXMRLGPZOWHRZEWIKHVDOMTQU");
    tmp_msg_0.formation_name.assign("NRNZONUEBPAFTBPZLAPIULGVSDWCZKVNDQIXROAHYERWOMYJWMTLJBSRJSDXYSJRYJFTPQCCMIJFOYQFAEVWNIPGSGRLBUQJZFLBEOGUVIDRVZQQPOXEMEBWLHJCDKHPES");
    tmp_msg_0.plan_id.assign("OHBHABMJFLJIQNMFSWDOXATCGNTTWWFMNAGZHVRVPAJHKWWJYVSTUWPQXXBNYWUFPPSPQAYZYUKQESGHRKBELCUVDXYDZVBMVLFFJUDILMNLMDXJBDROHLJZIHNNOTZQQUBOYOSXWSGUZLQCZTZFPMKPSMDVEKOOABQJQROHSGIFIBTEHUCPGYYAVWFJRMRWFCYVBXCL");
    tmp_msg_0.description.assign("VKZSHEGHGYQGYTSFLBKTZVAASPKRKOPOTUVQPHMYWAOELMARMWXSCNDFWFMZKDRKLPOUOZEYZDAPLJNIXIIJVHYVNHZRJIPMXFUDNITTMYBFQLUSVHBAGAGIQRCSOBJEHQPKTLVDCXCCCOWXJCTUEULXTLVFWTYROYWCLNFUPXWSRRFNDWNBHXZGJWTGJPIGUAMUCMZQJDNESHMGRZFSBBYECNOQEBJKQQMDKFDNO");
    tmp_msg_0.leader_speed = 0.6003687184261304;
    tmp_msg_0.leader_bank_lim = 0.8177661885024066;
    tmp_msg_0.pos_sim_err_lim = 0.765598451517111;
    tmp_msg_0.pos_sim_err_wrn = 0.581950923862434;
    tmp_msg_0.pos_sim_err_timeout = 42634U;
    tmp_msg_0.converg_max = 0.8921269244435205;
    tmp_msg_0.converg_timeout = 60469U;
    tmp_msg_0.comms_timeout = 11957U;
    tmp_msg_0.turb_lim = 0.008097735069001799;
    tmp_msg_0.custom.assign("NUTQMHDJLCWEAJPXYBKBWCQEFWXUCIJFPEQWCIHRXBHKVRTSIVQOYYDNCKQMLLDZBAZSREFVDFYJJUDKIPGVCMLEAQUIQKBJZZQPUAMWEUXUCTOPQDKSPWDTONTNVVNJIXLISMZPJZWVWZMMNBTEVRGIVTFHWUXVUNHLFOZNLS");
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
    msg.setTimeStamp(0.6869811512541314);
    msg.setSource(26167U);
    msg.setSourceEntity(120U);
    msg.setDestination(14650U);
    msg.setDestinationEntity(191U);
    msg.req_id = 43040U;
    msg.status = 192U;
    msg.info.assign("YLLUSAFNUOWBHLNQQOPCPHMINYKJIZDEJVHFYFBBDSLUKEVIBATHTJRCWSMFEIZSQXTPHDRMHAZXEDWCXGETW");

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
    msg.setTimeStamp(0.2270899144731391);
    msg.setSource(3326U);
    msg.setSourceEntity(239U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(220U);
    msg.req_id = 28771U;
    msg.status = 79U;
    msg.info.assign("GCZYQRXHAYONWLRCJZOZBOMUKSZPKJGRUZYDWHTMEIOXQFGAINTPMDRVEAMCCDYYYXYFFVGJTFQBXQVMTUNWJQKULVIDAXDQCUQJKOIENAZMPEERUALBHFIELJONMZKFTPMSFXMXKGPWJCWVOPJIHSBNAGLHYIGNTJVKWLUBXLYMFRIEFBWLSAQNHWTDHUPSROLNAKBLABIPCCCWPX");

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
    msg.setTimeStamp(0.5674207305984403);
    msg.setSource(39233U);
    msg.setSourceEntity(4U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(69U);
    msg.req_id = 16914U;
    msg.status = 113U;
    msg.info.assign("AOEFBGSVTMBDKRXECWIIFEBBOUVCGRUADJXPLTKYBQRFDDOZIJJXOPEDXLIZUPPAFSOCFVMEWINCRBCKANZNLOYMPQVBQKSRUJLXHWHKPJTIRZGIXEHAUTIMCWEQYVBDEYYSYZLHSNNOLVQGYJPXRHZQDKAUMOXGYZFPVQKODBCTBFG");

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
    msg.setTimeStamp(0.5713742825937221);
    msg.setSource(3727U);
    msg.setSourceEntity(239U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(125U);
    msg.name.assign("SZUZKQUURMOKRIKXDHIKATFATOKIPCLUUFLOLVODRPPJVWYLFQVUBRTNSEYOVLJEFTTCRUVTXYRZRBWTDEPGQTKGBYZQDZMHYHGEESPWALQWAGTBCWSMUHIG");
    msg.report_time = 0.9284720855544929;
    msg.medium = 7U;
    msg.lat = 0.1619950980716106;
    msg.lon = 0.8824294879304915;
    msg.depth = 0.6720471623873707;
    msg.alt = 0.48237315486774324;
    msg.sog = 0.20018443109802642;
    msg.cog = 0.25518942589681015;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("POYYLZGOBXTBYNHHHQGHQFXGOURWZKCLSCNDMCEGVRZRABOFBKZZUCTARIOALTWJBUYUIYMXVZXTWFQRLBVCNEHKZTXWAOLMEOOUTAHFLDCIMPQAENJKFINPGASSQMVNSIWEOPYKMJFIVUQCFSSDVWAFCEYSPQGXJMDPZJIIPWKEEMGEYOJGLJKSXXBLRBJRDQLNNDDFJVTDUWAPXAMUHUDTKPVRQGTZNSJGRVSUFTQ");
    const signed char tmp_tmp_msg_0_0[] = {57, -81, -34, -112, 53, -102, -109, 47, 76, -93, -78, -72, 120, 83, 74, 40, 91, 49, 103, 84, -22, -114, 29, 37, -109, 46, -30, 87, -97, 125, -30, -86, 5, -20, 86, -109, -64, -119, 42, -101, 124, -40, 18, 104, -24, -50, -47, 17, -114, -95, 65, 16, -1, -85, -37, 78, -12, -38, 73, -37, -83, 105, 113, -120, 89, 62, -53, -10, 76, -12, -16, -89, -44, -51, -50, 9, -82, 99, 43, -118, -95, 4, -117, 20, -67, -3, -8, 123, 41, -108, 38, -19, 77, 61, 87, 112, 10, 118, -72, 53, -70, 1, 117, -31, -59, -120, 92, -94, 118, 35, -86, -56, -64, -27, 117, -117, 125, -61, -32, -119, 93, 45, -32, -74, 35, 80, 126, -20, -85, -125, -62, -121, -85, 80, -21, -121, -94, 10, 120, 95, -15, 51, -27, 44, -113, 61, -53, -127, -29, -7, -27, 59, -92, 76, -15, 56, 40, 82, -89, 50, -95, 90, 84, 107, 37, 31, 40, -113, -66, 79, -97, 21, 18, -75, 113, -128, 45, 117, 114, -111, 36, 82, 26, 0, -99, 26, -43, -44, -8, 19, 44, -42, -99, 22, -23, -38, 104, 77, 17, 45, 27, 116, 25, -15, -70, 61, -88, 22, 118, 70, -95, -112, 42, -99};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7239042797257522);
    msg.setSource(52562U);
    msg.setSourceEntity(78U);
    msg.setDestination(53450U);
    msg.setDestinationEntity(221U);
    msg.name.assign("OOCEEGLRKAIGFNBDIPBSNMVJOOAJZACAOGHWHSQCJSGWTSBVNMJWMTJDNXZBKWKHRVVKPRWPDGOIHUNQZQEPYJEOBLYNRYPNQOUKSPWJFGMNFDJKUWKTFFKWRTDMYLAIILTHGPDLZZNUOGSVPLSBTBXOSCXZLDMBGSUQFXBYQFEACBUTQTDYCEHACYFMAXKVYUFCSHWAZYIHUGEDNMIXQAZVELXXZVXRURMRH");
    msg.report_time = 0.4661272334219;
    msg.medium = 26U;
    msg.lat = 0.5479969943069942;
    msg.lon = 0.7890315903786685;
    msg.depth = 0.018991401062561364;
    msg.alt = 0.9696206488631249;
    msg.sog = 0.33640073694049055;
    msg.cog = 0.7328475268197563;

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
    msg.setTimeStamp(0.12114989140820887);
    msg.setSource(50902U);
    msg.setSourceEntity(25U);
    msg.setDestination(11088U);
    msg.setDestinationEntity(69U);
    msg.name.assign("BMTBHYVJEGNYAWATDJUHYLEPORNCQCJTXAZFWNUSVKFBNTRVMBCSXDGJZBSIQQOORYWNBSEVOQUUANOKZWVUWRIIXKOWXALOEALHUPV");
    msg.report_time = 0.8648364385112645;
    msg.medium = 9U;
    msg.lat = 0.43391607379641584;
    msg.lon = 0.22401096993794611;
    msg.depth = 0.2617422867814021;
    msg.alt = 0.4875926125154716;
    msg.sog = 0.8092729093323213;
    msg.cog = 0.5764572778873156;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 41417U;
    tmp_msg_0.control_ent = 164U;
    tmp_msg_0.timeout = 0.023056960983011354;
    tmp_msg_0.loiter_radius = 0.7092698996100532;
    tmp_msg_0.altitude_interval = 0.8060556864226864;
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
    msg.setTimeStamp(0.7849088029315575);
    msg.setSource(51574U);
    msg.setSourceEntity(181U);
    msg.setDestination(38096U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.46753310679617266);
    msg.setSource(41928U);
    msg.setSourceEntity(233U);
    msg.setDestination(58702U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.36192729866179507);
    msg.setSource(27582U);
    msg.setSourceEntity(236U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.780583799170095);
    msg.setSource(56578U);
    msg.setSourceEntity(77U);
    msg.setDestination(59613U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("RIXLMDPBBRUBUFMJCUWRNDIYHBDEAPIWNDLKBUYWRASWGFQOTRGPYLHEECZDRWBQXZHNSAYDCPGXHXGQYSXJWWERZHVNTXDTZXGGGPBKJNYRSM");
    msg.description.assign("KHODBTLEVJSKDGGIOQZJKOUCLAEQLQOOBAAMDMJLEHRZJOGEHKTUTHRNUJNSSTGRFGFQZZOVRBOCDQRWNMYDYBLPZKNPIYIYHHCTLXFBPCWTRUUPURVEVWIJQKMZZARXGPBEOPMYHTMIQFYYSBBBCEZKTOXSSVCQCCVXAMDPXEQKSMDXGJELXYUQTMUYIYRZFAWNDAUBPWWVNTSCXDRWJIHUNEWHJILSZFDAXFWCLFVXGAFHANWN");
    msg.vnamespace.assign("YRVIZGXKUIQEOWMFAPZDWULJNHLXVHUBVLJMWJHIAGINUKSGFNOIKSAZCFCPHUMSEZEZECGMDLQGLBLMIHAHEWRGECSPXIZPMSECFWFRONOAXHCRUTKMXXMAUKMPEZQTBUVSDAASFTCVXTKBDLBSQVRBINUPGTNPJQVQSPLZXJIJZRQDJFDUYGOBRZWHKPFXNYKRNWFQV");
    msg.start_man_id.assign("ITEKHESIQNXMBAYGDRYOEBAGBGISQFLQKCZMEDAVWBBCOZGTDLTAAHENHNWIRMUVGYLFWTRYDE");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NXFGLXAHIRINTNXGFNRJWRSKBMTZADMUBNQWNYVGYUDRNXUMAMZLTEVDIJZLYJJRRXWPJWZQAEWXVBVYQMKUFFKFKNCGOFHMEBCZASYOERLOQPCSOVBUPCMFASICIZLPQESLYVEGQPFBTCXKDWZWTOOLGAAHDRTYOHHZGAJBUQCKZLSHPFCUHRQVHEPWSNBMEIUIPDUTVGCJJGSYCBRIMLEKKLXKMTDGUOTJQSWPP");
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.44538767784047606;
    tmp_tmp_msg_0_0.lon = 0.7114726847331084;
    tmp_tmp_msg_0_0.z = 0.43989807061002206;
    tmp_tmp_msg_0_0.z_units = 181U;
    tmp_tmp_msg_0_0.radius = 0.4340891513653258;
    tmp_tmp_msg_0_0.duration = 39098U;
    tmp_tmp_msg_0_0.speed = 0.24171338515047303;
    tmp_tmp_msg_0_0.speed_units = 120U;
    tmp_tmp_msg_0_0.popup_period = 19023U;
    tmp_tmp_msg_0_0.popup_duration = 58430U;
    tmp_tmp_msg_0_0.flags = 37U;
    tmp_tmp_msg_0_0.custom.assign("YMAFFRDMGYAWLPZOQVGIEFOQDJMSEVNGXUHGSZTSIJPNOPRGSAKPEXWZIBMIMQWSKTBASDTIAKCKLLDKVXFLWIFLDYFQGBGMUAKNRXMYESVPEKGJBOZRJOIZYXUYTCHQBSYBRRSVQKHBHCKEXFIXIJZNVQSAPNRJAVULVQHRWPNOTTPOULCXQPCOEBAXUWFNCHWGUULRJZHYNGFOTNHKLRAMWMWNCICHBZUJDCUHXTZWJOYPFYBVEDDV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::WaterDensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6458309472559709;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SmsStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.req_id = 40323U;
    tmp_tmp_msg_0_2.status = 124U;
    tmp_tmp_msg_0_2.info.assign("TTNCZEPCUKUASZZVQXZRZTMGIDLBEPQSODYXLAAQNCCVDIJYTILALRJWQDBAINTQQXVTELGIOFEIFXPBJJHOLZXVRKWKHMDUQCHHFAPNFTC");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SessionKeepAlive tmp_msg_1;
    tmp_msg_1.sessid = 818002112U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AutonomousSection tmp_msg_2;
    tmp_msg_2.lat = 0.7029873769107288;
    tmp_msg_2.lon = 0.37185284683027586;
    tmp_msg_2.speed = 0.5115897174274868;
    tmp_msg_2.speed_units = 72U;
    tmp_msg_2.limits = 70U;
    tmp_msg_2.max_depth = 0.8492266368741485;
    tmp_msg_2.min_alt = 0.5718207201042872;
    tmp_msg_2.time_limit = 0.4238001541653377;
    tmp_msg_2.controller.assign("INKANZJXXXSAMBRTJJYKDPDWTRIGWIUKMCYHVZHARPHLLQDJFXABHQTDOKQEUFKOCESWHKKWRRBTOFPCOILDMBSLAWQIWNSPJMPUEHUBEKXVBLWAENQXQRNPFTIIYZNOUSZGJFTFVZRCNYMUYUQTTLDUGBDQMMKXMCGYXZCVFFCZAVVSYXOTEHDFAPCGIDAGOBLFZJMSNEPUQOZLEYGCSTSZRKWLRHYVOUPGBWNAL");
    tmp_msg_2.custom.assign("FFNJVARWOMUFVAXGHSTSZQRRNVIHWKKUYGNCTMLDQLSQMSUGNPIRCTEUAKJGCCDLCJVQUOHGAHYAZTSYJXSKZNBNAJDZKWXPGHXXMWRMIVJOPCURVXCTXZGEFKGTYDINBZYSIVZHWILDPQPBOAYLOTEXMFLBOLFH");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.8853759652472815);
    msg.setSource(24373U);
    msg.setSourceEntity(154U);
    msg.setDestination(18161U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("VEYWURKAAITLFLBTXXDNOHLSJSCPZWYNHFBNALSXCONXRLWVRTIAFCOPETZMVOLEGEEKYMXSISJZYDDUYRMUGRGKCDJTGVNNPBFKNJTQWQDMIUOYADRILVZWGBEKUKCHPMFEZOPBEAVNPFJDLIETASUFZMFYKGHJJRQAVCWBFPTHRHIXQCEQPL");
    msg.description.assign("THQMRLVUARCAJSTZGGNWIDHVLKACWZOGYMXRBZOLDRFVSCILBURXXUPWIFQNNZPFUPFCFAVTDGVKNPVRVUNCKQHLLNYSQXTADFKLYHQWGTJZLCBGWKTJCZCPKPHSUZXKCOGHBNIKMVEUIBCYTVOZRXBOTOEJGPQGIWSEJSHYKZIDYSIJMJQWXQELESNRMJDEGNFXBADFUMEAOWKBEDRHLSJUBAQPTVZBNAHP");
    msg.vnamespace.assign("SLFCMBPBDZZZBJIFNRGXJHJYWYIGVQKUXGKDJAXJVWOVNWZUXQHKNCLSFTQEVOXZZFUCSEFUPMLSKYSQCOWALYJCKXSMPKGAEPRNRNYKZUJTNIC");
    msg.start_man_id.assign("SBJGKFHXWHEVWQFLXNBPNFOSORGTGVFZNOGGYAJRWBKTXOEBETPIOKQQDXVCKIVBMQRLXXENLVUZQVUQWSZNYWXZMZFYIQKPXCYTMMPZMMJGJIJIUBLSDAEUEPLRJDNOMZCLARTCDINYDHRVOLQJIEKKDSCOHNJPWYMPWNEFURYVRPTMHLUVQBSHSBCGJXSJRTCAZKSWUQWARCHAGKGU");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("TEWXMRIKCIPBDUFEJMOPBESZFJMLXXPPWDSKUDLNRNPSQFBBXGTSNKTAEAVWKAMSVIKLYEDRRNBDRXGWZMULOCFHAHLIBM");
    tmp_msg_0.dest_man.assign("NHHGCAXOKYYTIJEAYOGILAWAICVKCBMUGVRRJGDRJPGGGRRKZWTMQDNWCFPFLFPUAXGBWSWJXXJISAVLHMPKNQRINBWLMHVPBSCVNRUWGKXMSLNDQWYOXQSXPDFWVN");
    tmp_msg_0.conditions.assign("JKAOMJYITGRPIYKNCLNMEFEGJSHSULSXQTZFSQKMPZYQCDEOQDKOXSKKIFRWIYMGABDIEIHMPJSBPATXHSPRMPRKNYFXURPQWQLBTLDENAYBUTNTXNXHCRJZGXMBEGGLBXNYJZAAWODIWFCKVRSNOJOEWPSSBVDTVZUOEUNQQLUZJXRLDVHCWCINWBD");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("QCIMVAKJKKZGMKEJVVWXKQSHYBGZAUNSCELPMFQUOEPUPMLPFPARRDVCVLBHRYISP");
    tmp_tmp_msg_0_0.predicate.assign("YNXWYPMSAHOBUHAKFQVZBVQXJLPVMAOEWNQYJXANXJTBBILMSDJEOLXBNRWZPTNINECJAAUJIVNSGENGOQYMQHIDDJHXPFKERZWWKICXVRZUVGRTOVFHGGTV");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9258649702522826);
    msg.setSource(47554U);
    msg.setSourceEntity(251U);
    msg.setDestination(17609U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("SXTZUDMVLNAKWOUFIWMXPITNSGRIUQWDXERLYQLIUSNZZQRBFCWVKADKPHXONJWFCFCBHARUOGUEHDKPOEANPZYXIMEOJJLMAOSMZXVWTYVGULXSFTKVKDXDEWJTLJIOKTFMDEVRGSRJFCQLGIPYBZTQBNAPZYJSBJL");
    msg.description.assign("IRXQLAPJZYIESKVIHPHWTPDSDRNB");
    msg.vnamespace.assign("OPPZFHBWLPZYRRSSIUSCPSJXWSVJALJSU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MXEXMLGABEJSQVXATAGRHGCPPALXINZRLGAZYXEHIQYAWMCBZMOSIYSFFCQSOLODGDFVMRAWUEZFVSJQRHPNGBUDCPIS");
    tmp_msg_0.value.assign("IHAJZBGHDHNQFXFWDVRIWPQRGACOMVVESXPFNRXNYRMAXNPLIABCUZJWMQOYPRCGNHTRDQAGBKTOIUPDMIEOBVSJNFDSGSFXCEEWBQLMSTRXUWYLHSKWJAQOMZCJEDLKFIFQBAGLYNTDHVPCNJTABJSKVLUXLMQIVAGGXZUTEDFXPWREKMZPYEKXHEIKURITTU");
    tmp_msg_0.type = 224U;
    tmp_msg_0.access = 128U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CINDUZQYHGFSWKSIYTEQJSSNPXERKVMIBHFTZWOAGCIWKJIDVEAHBLXKIEBJLROEWWCZHGVNOBPFPTLMQFBXQDBVRIFKDMUQGRCNM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZBGJTXZFZWLQMWAZGHBZUWAYWPEYPEGRCHFYXWFVRPVTUNMJOBTVSIDXYUWDQUNKPKURIZTBFYKGGIJHJWOHMUMEFMYCOQPRLOZLKGRXRRCKDEXECISVNHTQSCLTQEKAHROLYDECINYJQTDBXVULSRSANUBPIINSSXDVJFWCCAYJFOFZTNAMAODLZLHFBTGQGOMWIAYDXLWJKXPVCHEMDGNZVOPJQNMHFXOQBCEPP");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::TypedEntityParameter tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("UMDTWPKXIYGZLVIQPHJTRADWASOHXXURGXPSMBQAEFYRYGPPIXLPTGUBHEVKHSHLZVDEFAQVWFBYTYVMHNYSGNHBGDOBKUJIOMQQOCDTODNLINVZFBRBHSOJLQGUYJCEUFEFOARTCIWYFSEEXULPPWCSSDWKAKWRZIQVXDINRCQEAUYKMOXMRJHZS");
    tmp_tmp_msg_1_1.type = 223U;
    tmp_tmp_msg_1_1.default_value.assign("TARDNCVQYFTQDJVGAEERFRRKRTYCPGMAPAOPLHPTNARMDXZJJVUPLZFZWGEXENJDGYICANOSJSLXEBOHWRLQIEUWJPSPEOGKYZUKKHWTQFSXCOHFRKYUOVUGXTQJLGSHQMSDLEHXMQMFJWWHYXBLLEIZWQFANGZHZVIYMFCNWTANSOFDBKVYBTBMTQMALVPCONCSPSIIKZLHJRXZBDIDVCXIMYBTXWUNDUHNUBRBEKCOA");
    tmp_tmp_msg_1_1.units.assign("ITKZLWJGRWCYOXUTSMHAGWWBWBXIGZHA");
    tmp_tmp_msg_1_1.description.assign("USTCWMMXOVFMWIPMFJFYXJDRRPAZSCQGUZBYNQHERBMXVYYJKPDWDHKPGFKTENTGEUCMWMJPIMZSOHGEZZNXVUVWNVBFIXPOAIRLZUGKFJNOULEKCRTUHFATELKNGLKANTRYIGCTMWVXYSDSOAKHEQTEJUKYALIOUBXFOQ");
    tmp_tmp_msg_1_1.values_list.assign("KEYGESRGOMKAHSAZFSPYNUURJHHNXNXQBMLVXTPBVTPWDKZQFMIXABWLPKUJUEVWCKAUDFXZGZQALIKBFHHFJYCWFHMBECCWBJIODFIWDPAK");
    tmp_tmp_msg_1_1.min_value = 0.9862292754265134;
    tmp_tmp_msg_1_1.max_value = 0.7620008525373155;
    tmp_tmp_msg_1_1.list_min_size = 67U;
    tmp_tmp_msg_1_1.list_max_size = 135U;
    tmp_tmp_msg_1_1.visibility = 205U;
    tmp_tmp_msg_1_1.scope = 1U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ISHJXPSMYBTJBIBORWIEAMUHQJUNWOFTQJDTRTILVLTXPJGPPUKSPVMXUYNEZKJQPKHDVEBYXZYJJWIMFJDMCNYOAQMIWQUVXLADALAQRLWSSIHOBZMWFNZESFANFF");
    tmp_msg_2.dest_man.assign("EKEPJDAHMGVTEOCOXLHIEXNMHEOFSPBTCKGERSTQHBYVSPKKMJHNSAPCCIRAAMCIZCQXKGRWDYXUKLSYXGIMKDWNGJJYPNLWGUEUMPUBOANHTKINIZLBVOYRVLEQLVZBJVCXJHIUUOPFFEB");
    tmp_msg_2.conditions.assign("JLDKRKQEWPVKXOIRUUMEZTTLMBLPNTURYVERZCQEMZHRUHXIOOLDOLHFPLFMMEQIDYMAWWGAAPOH");
    IMC::Temperature tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.06958300044120391;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.18535072728000124);
    msg.setSource(36564U);
    msg.setSourceEntity(69U);
    msg.setDestination(34300U);
    msg.setDestinationEntity(8U);
    msg.maneuver_id.assign("PQQGJIBMCLZTISBTQRLUOPIRXIOKRUMDCYTHGDXRETEWKU");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::FormationState tmp_msg_1;
    tmp_msg_1.type = 187U;
    tmp_msg_1.op = 251U;
    tmp_msg_1.possimerr = 0.9031055941268826;
    tmp_msg_1.converg = 0.6814009617812125;
    tmp_msg_1.turbulence = 0.5887111141200746;
    tmp_msg_1.possimmon = 38U;
    tmp_msg_1.commmon = 20U;
    tmp_msg_1.convergmon = 252U;
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
    msg.setTimeStamp(0.5260176084131999);
    msg.setSource(33825U);
    msg.setSourceEntity(216U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(221U);
    msg.maneuver_id.assign("POOBRRBTAPFQBLWQQTVHVRUJEVYIMGUPROZDFCHIDHLYIZPKIIXDMGREAJARUOHPMKEVCYOHBEHMJGKJYJLQXPMGKTUPNSRZSDVYEFDBQYFFNYSKGTWXUWKZTXREQNNAHJWLLIYGWSBJCUMNHWEFITLGXLCAOZWFEZXAERGUNCBRTVWDNLM");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2807998003078682;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 9541U;
    tmp_msg_0.custom.assign("ZGLZAHKBVYCXMMJSDQOUDLCRUKEQBGUYOHELMYOKHWKV");
    msg.data.set(tmp_msg_0);
    IMC::Fluorescein tmp_msg_1;
    tmp_msg_1.value = 0.041123861178327115;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EstimatedState tmp_msg_2;
    tmp_msg_2.lat = 0.45938092997188285;
    tmp_msg_2.lon = 0.9043802864483733;
    tmp_msg_2.height = 0.9976830587043368;
    tmp_msg_2.x = 0.07710319126660758;
    tmp_msg_2.y = 0.07509056560734673;
    tmp_msg_2.z = 0.608430791424087;
    tmp_msg_2.phi = 0.6134261927497034;
    tmp_msg_2.theta = 0.31619552788571725;
    tmp_msg_2.psi = 0.7284501747296762;
    tmp_msg_2.u = 0.5832281685900799;
    tmp_msg_2.v = 0.9481790311135225;
    tmp_msg_2.w = 0.5434006671638396;
    tmp_msg_2.vx = 0.24642917304597522;
    tmp_msg_2.vy = 0.6629774630232965;
    tmp_msg_2.vz = 0.0670733716856653;
    tmp_msg_2.p = 0.28822274226307987;
    tmp_msg_2.q = 0.5941569941013174;
    tmp_msg_2.r = 0.8764582443194333;
    tmp_msg_2.depth = 0.363058498539348;
    tmp_msg_2.alt = 0.4432595329942587;
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
    msg.setTimeStamp(0.37571503821895813);
    msg.setSource(31562U);
    msg.setSourceEntity(121U);
    msg.setDestination(3667U);
    msg.setDestinationEntity(143U);
    msg.maneuver_id.assign("PQVTOBKLGMQZDDNMPEVXWFNCDETUYJHKNVPMCXHRIJPEWULLRZFBOKNJQZYSNTEOPPKWWUGPKZAJOQXCYGSVITJXSBTICQHGVKDOBUXRSDYIHRUHFYZPOOLGFJUPFNQXBDRXVLKBSUIDEMBESEXHIVADKCIAVBCMZUFRCTVJTOFFMYCCZHHKAHBSKXXYZLSWEQRNNTUYSPRDGGWAYWMQALLAAVNIGIBAZYJJWCEIZ");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 8695U;
    tmp_msg_0.lat = 0.28680831860602596;
    tmp_msg_0.lon = 0.5566085186741045;
    tmp_msg_0.z = 0.06473469252771513;
    tmp_msg_0.z_units = 109U;
    tmp_msg_0.speed = 0.9543667630274686;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.custom.assign("FDWEMEXWEALUTJ");
    msg.data.set(tmp_msg_0);
    IMC::HistoricCTD tmp_msg_1;
    tmp_msg_1.conductivity = 0.01793654834658709;
    tmp_msg_1.temperature = 0.784612928278318;
    tmp_msg_1.depth = 0.3417248100426269;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticSystems tmp_msg_2;
    tmp_msg_2.list.assign("XPWFLSCBXLFYBNDXGECNIECLCZGUINQRILUDPQUVSXJKMVHDKLFKORJTOQYWTUHXTBVMUHTQBVFMSGEUMTLBAEFLWEYZMPTQOWOIJOAZEMVBKXFGQO");
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
    msg.setTimeStamp(0.6048239571562757);
    msg.setSource(46815U);
    msg.setSourceEntity(188U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(47U);
    msg.source_man.assign("OJLVGCSKPANZRWMQSQTD");
    msg.dest_man.assign("FDRHXPEFMDAYSXEUPUPLRNBYIIBGALJJQPZSTVWEXMZIHYNIGKWDCPLJKODNCLSDVDMCTFRIUECVTTDMRPQLQKBCOOSNCCTXIWFNVAXMFUYLEBHHHPFLLIMTWFTBGRQHZFUN");
    msg.conditions.assign("NQPWUYODKZCKMNAFTPJOTYFTVEZBCGXKDDLLJMPEORYOPGRRSUMCDTAVFREKCFQINEHVPJLIAWOIVCIWXKAZKWYIXXJYWZNUHWBSLMEWKYIBOXJMJGXHGDAJCLSDTEMBRDQTMSTANLNKUSUTVSHXQIZIBDFOWIAFUZNUZSVHGNXQIDEMAFFVQRUQPXOQBJKBPCWZQPRY");

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
    msg.setTimeStamp(0.1857348402030854);
    msg.setSource(43897U);
    msg.setSourceEntity(2U);
    msg.setDestination(10618U);
    msg.setDestinationEntity(66U);
    msg.source_man.assign("TPSNCXFAJOADQLZDOOGRQHBCVYNQEKKZNAHRSVALBFFHNXUFFNRPZNJFORMHXLUFGKYJQXWJLSYBQBAJBANIMVJEXUDO");
    msg.dest_man.assign("PFNGJIIMMWZHLPEZEJPBGEWGRKYVZHQVWZJHULECAGKFODRBXGXDUODYZBKVRJJOTLIRQIZEHHPSRTLYLCTWATPUEWAMQCKYHUIVNDLAXXLXWQCFQMCCQHNIDQDGTGZYASUNBGSEMDKOSPNVRSVRUNKOIXWD");
    msg.conditions.assign("CYYWORBORVATMZMTUPDJQLJVAHIYUAEAPDAUWBXITIBWQECFKDQSNVFNJJNEQPNUHGZLFMLJIHDUDONXOVPIKWKLVQTXCUONLCSFIXSPHRIOINKRKGNYVSVGGFKHHSSRTQUJHRZLGPXUVWNXEYKDRCYFGMSZTUFHCYOJFVXCMAYGFPRQSCRKLTQ");

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
    msg.setTimeStamp(0.9887661278887886);
    msg.setSource(5203U);
    msg.setSourceEntity(25U);
    msg.setDestination(27132U);
    msg.setDestinationEntity(189U);
    msg.source_man.assign("LXHAGWWBDDHEYAZDJKHPYIIIIFPFXIUQWYITVUXJFPGSODMQJECVOVXNAWCXFFQACKSYIIEJMSRYXQCVLHLGTPHOHNLAMMCOVJDGUJMLMZGRHXEHQZSHETNLTJKRRQRYUSZGDAJNWBFWOLWARPZKWINUZPUQZZPNEFTPJNMNWPBORSKUHEDLXUJNATATCIOBSXRBSDRLEKKVMGEBZBYQPDFFTQSOBUDYVYLGVWFGNTX");
    msg.dest_man.assign("JDNOTQIPJUYUZRYMXZHWBHIFPWCPAMOI");
    msg.conditions.assign("DUSCDQMQZCVYYFPKTCCRELUSLIKZLWNPOSRPFKVYVOSHHUPFHKCMGRJTDGHIUHLVKZBSPMWNKNOBKKLABQOUGDLJAQFMXJIECORMSHRAGTARHBBYZBFEDGTLJVVGVWVEDRXMDWFZSGEPRCATTNWBFVGPIRVXGAXFZUOLCQMWXMN");

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
    msg.setTimeStamp(0.549347359163082);
    msg.setSource(2039U);
    msg.setSourceEntity(84U);
    msg.setDestination(36558U);
    msg.setDestinationEntity(240U);
    msg.command = 91U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FBSIPKTAKJCZRDWQMYFZYPJSCOJMWLHMDG");
    tmp_msg_0.description.assign("QDMUQELRHXEZAVJYBCHKUGDCUFXKWRSQHMZWJBKTN");
    tmp_msg_0.vnamespace.assign("QISDNNLPSXKAOHFRRVHHXBGTEPRYKBJNQKUHIOEAZJRVSNKQHTTRFACAUVOOWJEWGCEYYRILGSXWKOSRRMIFJAYUPTBEUZEXVECWPZZLXMTLANNLUJHZCEFPTBFNJXPIYPFQNKWSSLVCIKZXLMSDROGGWYJCSWEQBBTERKFYUIZVDYTNCZGMMJDLPMNAPQGTUOIODVYACDUHOHHLWWTMBAHICXBSOGFJG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TLGHYBJRFUKVWKBEXYGWYQPFWVSCGLUIFVYOZMCICJTFSUDNUGYGPCMJKXGDUJNPNRBXPWDOXATSYCHQBWOZCGLQEONHPCMTFXYRJITDALSYNDKXWUQPDAXVFKHBOOEQGQEUFNQSBADGXJZOQVHPWGSJERALTZTZKT");
    tmp_tmp_msg_0_0.value.assign("HRCXMEMCBIASCSXP");
    tmp_tmp_msg_0_0.type = 109U;
    tmp_tmp_msg_0_0.access = 83U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NMFMXCKTSYLRHHZGQYRDVFSWMOVJIZABGYPRZRNOKFPPQCUPQZPQEYUYLSOOJAVFHYTDKPGFSXURTDSMTHCQFKZTMIUWOEONFGTVYLHANGXZBBJXVDIUZTAKUYAOETDNJLOSAXIMWXPIEK");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HBCOERUKKCIOFONUQTETUBMRPCWALTPAYXBVDDGRKGUSPFZRLLBWOHHCVXDDITMDHAFRWDUZTCEBXMJSVBFLIAVQZYXQAANNRHSZMAVEVEQEVBYTEAONFNJDEINJCXFEODXGSICZLYKKRHPMJJGFOQHWPCFKUWABOSGSRDFJTPRUMQXWTISLUXZRLTPOGPKGWXISNVAKUOMQYMMILHNGYYJCZQZIFT");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.3147633804392328;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.25097784228960496;
    tmp_tmp_tmp_msg_0_1_0.z = 0.7413297702996952;
    tmp_tmp_tmp_msg_0_1_0.z_units = 245U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7390834264664718;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 171U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.8289335426966712;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.47012690803565027;
    tmp_tmp_tmp_msg_0_1_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WTZEJJGTQQOUZSSCQJBVDZRVAOQWBWITZHIGUSNWRFEMCKELDNAHMKNHXDKYADQPTXHIMPAYRVJFXPTSFWIXJSVXDHEGTBNQVZFODQUKNJZGCWTAEGTLOKOKBPREJMCBZWDKVLRMMYA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EntityState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 254U;
    tmp_tmp_tmp_msg_0_1_1.flags = 66U;
    tmp_tmp_tmp_msg_0_1_1.description.assign("FLTQBVGDHSQZVBYARVBAMDTGNRYQXEKGSPTTAPAJXCPVUBEGAOQYQVMLZGQSRMRXUWCHSXDIHFWTKIWLCNWJIDHGEXDIVCNSVUSYWKMYMRMXNNVLFHKKGJSYRDCNTPKMPYCQWBLFEOSVSRDZHYJFFUIHXWOQKOPAZXQULTBENOZQGUCWBDNPRRRPOGOWHDYZALPJMMTGEKLKYJII");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Abort tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("GAOSLFIVRDFIPKEMXDYZYVIAUMSHWNRGBIQPXMCFLMHPVDILSUPCKLBRQXGZQLTHXJWVPJCBBBCARLJWVYYBFKQEVXKNKTXZGSZRTKYQOEAZXBGJGXLAOYUEAYIMKGE");
    tmp_tmp_msg_0_2.dest_man.assign("FYVICVHABQXJCOJCGETZFFZXVJSQZBTRAMALJVYPQVYLNRSPTKRLYBIERVSGUXCJEXTYNRZYGQKZZBFXUQHQGUJEWEITKMRWLEHKMSHWHJJCMOPARKWADPMKTULTUODCNNXOCCKNTEBSUGGZXUYWPSPVZCVFYRMFBASBHTSI");
    tmp_tmp_msg_0_2.conditions.assign("SFJDZDMIAJGVYYSIEAKTYOODIAFWGHUXBXCAWJFRXOZNFTWJXSURCBXTJJVNRCMBMSPPABSQPEIHGKNDFGZMFGBBVVVZNDHDWYWMEAWSIHXQQQQUXWEDGXQNKVJCTOUHHIODTNILLZQILLYCRLMYQCAAFYWUAUKSKMRNVBJRUERLIKKDRCOSYTEEKHVEMHONPNWVNCUZEPZCMFZOPVYKCPQS");
    IMC::RSSI tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.07405280199338071;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::FormationEvaluation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 209U;
    tmp_tmp_msg_0_3.op = 41U;
    tmp_tmp_msg_0_3.err_mean = 0.7971946215074955;
    tmp_tmp_msg_0_3.dist_min_abs = 0.052393865325868205;
    tmp_tmp_msg_0_3.dist_min_mean = 0.5789653839968207;
    tmp_tmp_msg_0_3.roll_rate_mean = 0.4387999476668073;
    tmp_tmp_msg_0_3.time = 0.8449358442499053;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.action = 187U;
    tmp_tmp_tmp_msg_0_3_0.lon_gain = 0.5382438579311339;
    tmp_tmp_tmp_msg_0_3_0.lat_gain = 0.10935703105054562;
    tmp_tmp_tmp_msg_0_3_0.bond_thick = 0.4483327975481234;
    tmp_tmp_tmp_msg_0_3_0.lead_gain = 0.7922472245486435;
    tmp_tmp_tmp_msg_0_3_0.deconfl_gain = 0.3555687692182744;
    tmp_tmp_tmp_msg_0_3_0.accel_switch_gain = 0.9571075182670218;
    tmp_tmp_tmp_msg_0_3_0.safe_dist = 0.9677223799821406;
    tmp_tmp_tmp_msg_0_3_0.deconflict_offset = 0.9756765249056043;
    tmp_tmp_tmp_msg_0_3_0.accel_safe_margin = 0.9448483153598409;
    tmp_tmp_tmp_msg_0_3_0.accel_lim_x = 0.6604258571713258;
    tmp_tmp_msg_0_3.controlparams.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::DesiredRoll tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.5214781180020059;
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
    msg.setTimeStamp(0.7216529279084242);
    msg.setSource(41246U);
    msg.setSourceEntity(59U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(176U);
    msg.command = 220U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HFVPWRXSFOIYZTROLBNJHHOTXTJVQRRWARDGQOIJEPEIBAZFHYVSDZUXKLXSHOIZAJGCQFBZXPFBQTGURXIVAHPHJJNTKYJBKGQALJIAELZCQVABU");
    tmp_msg_0.description.assign("FPHRCMLIKJVLEVXLIIZHIBAZYCTNLFYGPPJQBUYKGVQMBBWUVCJNTYZJXWAGXJVMQDEEJSRFTJSLFGSCUWECISOFMVBLVXUGDTDROMAQJBRDEKWPFWNXSD");
    tmp_msg_0.vnamespace.assign("KHTCMKNKUMBAGTUMCJZDDDJRNBWTFBQHKKLHCLCXYENQWHOCZOFBVIU");
    tmp_msg_0.start_man_id.assign("DSCMLKXJCEGRHTLGZBSASXZQUJYKRIRAVOVYKEFFKSWOADUGJJQPIDXPHRSYNRYIDNZKWIQQUGJAHEIKBYWLGPGNWOCZULQBFTMOBYFANCBYYHVFVZAOFUKOLWGTIUCJIDCMFLOPWOVHESGVJIZWRVDMZJMXVSHZAGKQKWF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MCUXMRTYLRFCVMRPCJRYFANSCMNEOUQHNSFLSWWLHIKZZWOYUPWBBGPXVWGHIZTQLGZUZDMVFFMKQUZCBSZVWGDULXXQBACBOYJIANXTQQACTOVTNMWDAHICRKIBDCUEJMGLAPXVTNUHRLEHXYVJENUYXLBGKSQGYXSTUVKZRQNIOMKGENKFEEPDVPQIIKOPJJLJPRFKNKLRSSRBBAEOWSFOYHZPJGPYBJWZAFSDIYEIXTDQ");
    IMC::ImageTracking tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Force tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.3845234444572607;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::UamTxFrame tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 20641U;
    tmp_tmp_msg_0_1.sys_dst.assign("INKTBSNDVPXIIFRORFBCGNVNJEOPSUNSURMWPLUJWDYWALRFTEUNYHRUNGYHDBBUQWTHSBIGTMASEVQCZXMZPBMLXKYSHAEVIJFOTVOCVPHGOIVGRKETVNXDKCQWEYYZOYYCGXUUXJQTXAWHFFPAXIIJMOQJHLTYEIFQXEOWSCCZFZALLMTZGQKEDCDKJNOHUQZBLMRELFFOPNMAKGHLALMZRUBTJZKJXHQBSDSCWDBDGWVPKAMWCRZISPDJ");
    tmp_tmp_msg_0_1.flags = 108U;
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {-114, -124, 0, -84, -63, 77, -72, 109, 35, -3, -93, 96, -37, 72, -127, 119, 81, -88, -40, -30, -52, -12, 123, -32, -36, -29, -49, 46, 71, 122, 55, -103, -67, -113, 90, 40, -53, 101, 42, -84, 7, -75, 82, 35, 72, 61, -8, -18, 66, 18, 28, 42, 59, -3, 6, 98, -17, 108, -89, 1, -21, 36, 124, 84, 88, -37, -119, 9, -29, 126, -17, 57, -32, 45, 74, -42, 73, -14, 19, -74, 16, 102, -16, -119, -4, -63, 52, 14, -30, -86, 65, -84, -24, 38, 3, 4, 97, -64, 51, 124, 0, 88, -118, -71, -36, 75, 65, -43, -118, 28, 54, -54, 119, 38, 46, 47, -65, -6, 10, -16, -29, -27, 44, -102, -78, -42, 25, -128, -105, -37, 42, 86, 72, 69, 110, 18, -111, 29, 115, 3, 113, -18, 118, -108, -82, 32, 7, -83, 93, 113, 60, -4, 33, -22, -28, 33, 70, -5, 94, 98, -56, -44, -56, 17, -18, 72, 35, 107, -30, 44, 29, 101, -116, 115, 92, 113, -114, 30, 96, 64, -84, 63, 10, 31, -118, 36, 54, -16, -44, 52, -77, 70, -102, 74, -6, 76, -87, 44, 1, 20, -43, 40, -25, -17, 7, -86, -117, -5, -40, 124, -81, -37, 110, 49, -17, 102, 112, -57, 88, -61};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Pulse tmp_tmp_msg_0_2;
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
    msg.setTimeStamp(0.9403848421276846);
    msg.setSource(12904U);
    msg.setSourceEntity(123U);
    msg.setDestination(46225U);
    msg.setDestinationEntity(3U);
    msg.command = 64U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HUGECDLARUBEHTMYGBECSUWGEYJBJJPNUVJUYBXKPKXQDKICOOOZFPWFTVZVLNURTRKTPUBLUHDZMJNNVAZLZHCGGGKHEVQKSS");
    tmp_msg_0.description.assign("DKITUBNQMLVWPKAZEPZMHXUXFTLB");
    tmp_msg_0.vnamespace.assign("IOUZBOLAJVRREVKGDRNAJEYYWZSCYYTCCVXRHYDXVWQKUZNGVPAQBSCGITXFMPDQUAMTWNZFRIOQWUDGIJJKGFJOSVNNZBUTUHQFFSGHMBVHKSKAVTUXWYLMWZMYFCBOJTMQSZBJWELBGMPNFBHVVNIFHICXFUTPDWKBEDKIQSNOATBEETCHLXGQMHRXXDGIQOPKLOSPDPLPAHUYRYHASMZLACWPEQFOKLNIEECPZNXUTJLZKDDGJRLIRREYAX");
    tmp_msg_0.start_man_id.assign("JVJOZGUWADGMDMSHZTILKPAUFUUVCIFMQPQVGSZRDPVCTGTIFQWKFPJBIVKRRLURYLIWKZDSCUAMKCFEQWWWSHPSUZBXGEKVRBFWMRGJJEPXXKEPTWTOCUSGCNOHBMOIIWQTZNJUOQTNLCAYXYLHQYQTBXOJHIQXMXYMMTHUOESSMHYYCHD");
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
    msg.setTimeStamp(0.42664316002995917);
    msg.setSource(21852U);
    msg.setSourceEntity(99U);
    msg.setDestination(43789U);
    msg.setDestinationEntity(221U);
    msg.state = 49U;
    msg.plan_id.assign("FQMNRAVNOXNYISBVZFUVRHFKPKBWFGXXIMAEXEHUQVAPGHYMQDRMNXNJWYOXMOXBHHOLMFBTKSIKLWDHEXQH");
    msg.comm_level = 6U;

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
    msg.setTimeStamp(0.1593031063034086);
    msg.setSource(33028U);
    msg.setSourceEntity(70U);
    msg.setDestination(54953U);
    msg.setDestinationEntity(220U);
    msg.state = 251U;
    msg.plan_id.assign("REGXWIYJXMMYPIUNNPQGORHHHWFXLBJSDCAMXAYPUOTOZVGVWPKBMRHXKBJPUBHPEMSEKXSJIHYUPMCSPARGSSJXUEHGARZKZTIJZTDIOFDAOWULSKJFQBQEYTFVWONTWAVWKMLKERRQUEAJVVNQFFXGYLRQYLTGFSIAMZJEI");
    msg.comm_level = 196U;

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
    msg.setTimeStamp(0.9888042850049475);
    msg.setSource(41231U);
    msg.setSourceEntity(122U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(219U);
    msg.state = 99U;
    msg.plan_id.assign("YGHXMASPILKEKMBMATLEWYWEEPCALDIRTPCDFDHUHJSNQYYCHUBTSSYVAAEBAQQFXFOENHRFHXLKDSEVMWCDSWSOHBGMRDMISJTILVTPAGUPNKQPBFIIPUM");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.807088290502454);
    msg.setSource(17811U);
    msg.setSourceEntity(136U);
    msg.setDestination(1836U);
    msg.setDestinationEntity(55U);
    msg.type = 137U;
    msg.op = 204U;
    msg.request_id = 49171U;
    msg.plan_id.assign("IJVWAJTVMZWMDVXIJEUHSQUZWEBNSSGDHUGHOXKFPTWSKIRLZHFFQLPLXJJGTAEZG");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 182U;
    tmp_msg_0.clock = 0.8840369397717338;
    tmp_msg_0.tz = 7;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NWUTBEHILBCQFMATWFXNNOYFDURIEDSLMBLVSWRMCDGEJWXUJOJMFLDAENAIGOTLOERCYIYDZIPMRYKZRQSBWKYEXAAYPPQFBWAHLOQXVOJTPZFTMNTSJWJINUPAVHFKE");

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
    msg.setTimeStamp(0.3085085872800091);
    msg.setSource(46775U);
    msg.setSourceEntity(87U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(96U);
    msg.type = 73U;
    msg.op = 160U;
    msg.request_id = 7859U;
    msg.plan_id.assign("VMYEHTVXORYCOLSUMUNNNTGGJWWEABUXIHIOXCJOEUGTEPJMDFVRJWNIFPUCGTKTAJZFWUKSUQCHYJNPBZKNDHLSYQCDLMFIGGNQELHAEFSBEIXPMZLVWCVMZERAXGMCOFZWQBYJKQDMBPHQRCYODPQOLXVSCYGTAFRMNPORHIWYVJSYFUSTAAVKBYZPZKKOXARUNIHLSRUWTSDOXEBNBJGPZDLDIKLVPDBJVAIRWKRF");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6511023265418057;
    tmp_msg_0.beam_height = 0.55156768475629;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TYUECGIQXFNSZGKJOVONTSINWEFNYUKCYLPJMBLPEMFSLWSPCDLTQCAAZCUAXDFNHMEKZVJDZDJSDYWRQBIXHZOVOGTQHSWZFIZOFPVHBWPEPHSDEIKNXPYRUMEHMJMLXCYINHVGMKQMFOHQOLKZGLJGPPMVAOLDNSWRSKOHQAQXXRXAYVCTJLAY");

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
    msg.setTimeStamp(0.737399912641928);
    msg.setSource(34889U);
    msg.setSourceEntity(35U);
    msg.setDestination(19596U);
    msg.setDestinationEntity(7U);
    msg.type = 80U;
    msg.op = 74U;
    msg.request_id = 38203U;
    msg.plan_id.assign("UHBPSCONUQEELUCMOXYSPMMVUFMWJFHTAYBYQAJXZVSZEPAEAFGRSNJQMIMVSOOKTUREHQIGHTVZVIJCKDOWSLYNIDRY");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("KOZWMAYEXQRIJORKYCVPSBFWKIKYDUYMGKLHNVPXSWGBVJDGTREGOTBONQVLIZDZECAFYDMBLIXRCWHZJUSJVLRWAPFPRIGVPFSFNEAMONJBKGQSXVUQANQTDHUOWFSCPERAJESZYSYQFMZZOJWELYXYQXTCGMPRTVYZMXZVSDQALVLOENUWDDWFBFTHCUTHTMGPU");
    tmp_msg_0.text.assign("QLMVAJDXWVEWBYZMLELLXAOEPRCKLCJKKZQYJBZUZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FYCEVWRUFAIQCEBIIVGDPDFMJFNQVHDPOWJBQGWMBDVRUUJ");

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
    msg.setTimeStamp(0.2467032278203093);
    msg.setSource(64755U);
    msg.setSourceEntity(235U);
    msg.setDestination(39774U);
    msg.setDestinationEntity(171U);
    msg.plan_count = 60119U;
    msg.plan_size = 1124731900U;
    msg.change_time = 0.5413509125097795;
    msg.change_sid = 16988U;
    msg.change_sname.assign("EEKALWIGDKQBTHTJQXQPUNMIAMVZKVVSCFUCOVNPGRINXNWGCZFMPASWCUOWOJSPHFTIVY");
    const signed char tmp_msg_0[] = {-126, -51, 74, 57, 41, 122, 43, -2, -18, -14, 27, 81, 30, -26, -50, 55, -63, -39, -80, 95, 51, 13, 107, 43, 42, -47, 6, 43, 15, -96, -29, -116, 27, 31, -28, 96, 115, 71, -96, 78, 38, -53, -83, -68, 103, -128, -101, -27, 63, 87, -10, -124, -98, -79, -34, 84, 15, 102, -123, 5, 45, -117, 65, 119, -46, -59, -76, 94, -16, -17, 106, 40, 30, 30, 49, -99, -22, 76, 113, 29, 6, -31, 5, 47, -84, 122, 53, 87, -6, 20, -110, -31, 103, 68, 95, -71, -102, 14, 1, 69, -5, 32, -13, -89, 120, -45, -70, 29, 31, 78, -13, -4, 121, 59, -78};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ODTTXOZKRJIJHPPZBZPHUEINMGHTSCLNUWAHAXDEGCYBDNTVRNOBTVHDWAQYCHJYAKNLZSWPIJJHFCLKYGZ");
    tmp_msg_1.plan_size = 18638U;
    tmp_msg_1.change_time = 0.5203315040297073;
    tmp_msg_1.change_sid = 60553U;
    tmp_msg_1.change_sname.assign("IBKVFVATZCMIWKBSVNGGVULBBHNILWWOQSPBIOBSWLQRFRMVFRXDOYJPDOYHQMZPBBMDDENSOGYDELJYMJEOQQWAXWS");
    const signed char tmp_tmp_msg_1_0[] = {20, -102, -35, 117, -33, -109, -109, 17, -2, 85, -124, -50, -25, -59, -12, 50, -128, 15, -11, -65, -68, 4, -96, 53, 84, 27, 62, 76, 4, 111, -5, -46, 45, 82, -113, -99, -102, -78, 91, 58, -31, -27, -70, -104, 14, 41, -119, -90, -79, 34, -20, -62, -100, -80, -15, 17, -26, 116, 53, -7, 2, -104, 69, -29, 80, 78, -72, -42, 95, -117, 110, -119, 26, 28, 59, -7, -108, 80, -50, -59, -40, -11, 100, -52, -14, -16, 24, 126, -66, 118, -60, 82, 22, -46, -27, 109, -75, -44, 96, -1, -108, 80, 62, -117, -13, 99, 4, 56, 82, -6, -105, 105, 52, -11, 71, -36, 44, -80, 65, -122, -57, 91, 53, 101, 79, 47, 31, -93, -89, -6, 1, 70, -70, 112, -93, 12, 95, -33, 40, 21, -86, -6, 14, -24, -128, 30, -111};
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
    msg.setTimeStamp(0.025271720859005642);
    msg.setSource(46165U);
    msg.setSourceEntity(205U);
    msg.setDestination(29923U);
    msg.setDestinationEntity(224U);
    msg.plan_count = 33257U;
    msg.plan_size = 932703529U;
    msg.change_time = 0.12560396554016906;
    msg.change_sid = 18166U;
    msg.change_sname.assign("FMBHQJFQIDKKDIVUJXUGAUBMCYXGNTPSUXMHFLCTJVLLVCDHURBJTGBGZGOMSUWRCFOTTQOYXSFWJ");
    const signed char tmp_msg_0[] = {47, -46, -91, -116, 98, -40, -31, -94, -74, 103, -113, -93, 51, -62, -57, 3, -23, 92, -13, -66, 30, 65, 38, 22, -57, -3, 81, -103, 32, 66, -122, 112, -118, 37, 36, -119, 23, 85, 59, -59, -87, -55, 120, -89, 85, 21, -117, 7, 15, -68, -59, -83, -4, -44, 52, -58, -7, -11, -70, -109, 89, -28, -39, 19, 32, 126, 17, -127, -80, -117, 48, -97, -61, 93, -73, -55, -79, 30, -59, 41, 65, -20, -60, -76, -18, -57, 18, -30, 78, 76, 26, 77, -121, -21, -48, -69, 48, -109, -30, 92, -33, -3, -65, -86, 49, 76, -124, -86, 94, 39, 91, 48, 99, 12, -46, -66, 61, -30, 37, 8, -98, 70, 29, -122, -96, -16, 28, 88, -85, -75, -125, -64, -81, -125, 35, 10, -42, 119, -40, 49, 118, -115, 88, 14, -108, -59, 126, -29, 31, 70, 13, 69, -91, -65, -33, -121, -116, 24, 108, 12, -31, 55, 12, -15, -111, 77, 91, -53, 117, 86, 33, -37, 82, 46, -7};
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
    msg.setTimeStamp(0.7946803717512707);
    msg.setSource(7731U);
    msg.setSourceEntity(251U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(240U);
    msg.plan_count = 58424U;
    msg.plan_size = 1777839945U;
    msg.change_time = 0.6517953832807188;
    msg.change_sid = 1709U;
    msg.change_sname.assign("ISCWGLBBTZZLQBTPXMLKMHCGQIIPPDKPPHVBMAZYXZAARONKJCQKMIPBIDZFYDGHFVDHMWJDOSYXBSGDYSNEHHQRQBTVOOTTJRVMBRIFLPYTEJZAAUFFOMRGSDXTLNVENNCGJOAIYVGEOKZUXCMYFIQUWULIRPUCRXQLNPWFEXYKSANZKQMHOQEUDOGSGUWBZ");
    const signed char tmp_msg_0[] = {50, 28, -2, 21, 62, -34, 101, 94, -8, 112, -58, -75, 98, 21, -13, 120, -16, -1, -92, -70, -50, -36, 39, 10, 106, 73, -2, 111, -122, -97, 16, -98, -106, -16, 33, -127, -79, 106, -86, -87, -106, 31, 118, -25, -109, -17, 121, -102, -71, -67, 108, -72, 90, -35, -68, 116, 121, -116, -48, -101, -53, 29, 16, -80, -47, 72, -11, 56, 84, 18, -98, 10, 125, -94, 75, -18, 47, 10, -108, 16, 86, -46, -11, -53, 88, -120, 71, -100, -9, -124, -70, -76, -91, -16, 89, -32, 94, 124, -108, 17, -94, 69, -52, 11, 121, -57, 123, 35, 84, 77, -45, 70, 82, -87, 24, 30, -23, 34, -118, -69, 116, -100, -121, -73, -77, 22, -108, 26, -124, 72, 36, -109, 18, 68, -67, -36, 117, 30, -49, 66, -8, -34, 0, 92, -104, 117, -66, -76, 26, 59, 1, 115, -98, -31, 42, 111, -42, 39, -36, -11, 74, 114, 4, 57, -76, 125, 29, 31, -17, -123, 73, -24, 14, 120, 92, 109, 45, 2, 122, 4, 12, 47, -8, -127, -95, 28, 67, 2, 112, -61, -71, 95, -24, -33, -87, 34, 1, -55, 104, 111, 27, 10, 87, 67, -113, -114, 33, 106, 12, -68, 95, -107, -10, 107, 56, -25, 48, -74, 125};
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
    msg.setTimeStamp(0.3626029733205548);
    msg.setSource(39086U);
    msg.setSourceEntity(121U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("DAYJSVPCKTPRKKXIQGGNSGMHHWGDMMTZQUMTOBFIJZHIIUXLVKHPCNOIZDTPDTHJUVGROELHLENVQARCHXLIYHXZKGYWORPVHYDSWXQLRSQBFSKYDFAUMWNQAAFTOUWODXYMUFBYQCBZCUSZJNLBQWAVKK");
    msg.plan_size = 61013U;
    msg.change_time = 0.6465977733719047;
    msg.change_sid = 10176U;
    msg.change_sname.assign("SMSYPFYXDAJLUUDAUEPLEFYGJOCJZZKBSAFLSWNEXBWKQKVRBRTBYOFQKIZAJAMLXDQAMMTOVMVUVJKVQYLQXGDYPSJLZBTBWHRKKVHGUQSGOTWIGIIRORMBVOFSHFGTZJWSGEXDQNES");
    const signed char tmp_msg_0[] = {-55, 82, -41, -4, 60, -128, -3, 17, -1, -28, 32, -61, 100, -102, -26, 78, 30, 45, -97, -100, -28, 5, -75, 54, -23, 72, -3, -36, 54, -84, 46, -18, 44, -109, -13, 22, 120, -12, 83, 97, -81, 99, 56, 69, 121, -7, 104, -32, 118, -46, 69, -87, -24, -28, 16, -89, 101, -126, -10, -62, -93, 93, 75, 94, 113, 102, -114, 51, -112, -7, 84, -23, -66, -44, -75, 80, -28, -30, -15, -30, 28, 109, -100, 21, -96, -120, 63, 114, 78, -113, -47, -118, -28, 64, 110, 26, 0, -43, -58, -55, 32, -78, 74, 0, -64, -6, -72, -68, 46, -72, -98, 92, -109, -73, -80, 21, 49, -39, 50, -12, -11, 2, -122, 99, 90, -104, 59, 10, -67, -70, -114, 117, 51, -7, 66, -51, 43, -24, -61, 67, -88, 94, 126, 23, -36, 125, 68, -12, -101, 27, 54, -94, 57, 63, 2, 94, 98, -62, -21, -10, 19, 34, -21, 79, -95, 68, -72, 35, 39, -2, -56, -109, -70, 122, 44, -94, -3, -55, -9, -69, 60, -75, -25, -9, 69, -34, 65, 83, 55, -116, 24, 49, 19, 70, 35, -47, 30, -9, 116, -103, 30, 94, 119, -126, -66, 121, -59, -94};
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
    msg.setTimeStamp(0.306763139707828);
    msg.setSource(58007U);
    msg.setSourceEntity(192U);
    msg.setDestination(62436U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("RSFOSPEHZMAWCIERGZXORMGLAXNLJGFOINCXDOLVQMKMBAAQCJKSBIXQRCGEVUNRWQJTUVBYRZQPWAPZFNYQSORYDDEVELCZHSPSTCILZKOIBDXKDYSTWLIPUEZM");
    msg.plan_size = 21335U;
    msg.change_time = 0.9274934077497848;
    msg.change_sid = 49235U;
    msg.change_sname.assign("JRWPVBVIIULIMDQZZMXPZIYUXUXPODZBBXTJWRHLXOLNIOIMHDOKXJVTZPCBBCBHESCXYNNJNPQZBIOERVSDNBLAFWCYDQULAXHVKTREOMXVKKMBKWLZKFRG");
    const signed char tmp_msg_0[] = {93, 126, 57, 113, -118, -55, 68, -127, 79, 4, 64, -124, 101, -61, 96, 52, 28, -115, 82, -105, 111, 123, -125, 113, 19, -54, -54, -110, -107, 13, -46, 64, 37, -90, -18, -123, -114, 5, 22, 54, -43, -126, 37, -58, -40, 45, 91, 88, -102, -5, -104, -126, -108, 88, -15, 99, -63, -10, -31, -117, 46, 68, 66, 92, -64, 97, -47, -108, 73, -47, -73, -110, 71, 69, 44, 5, -23, 70, 62, -97, 109, 68, -84, -53, 69, -69, -75, 96, 42, 121, -75, -80, 54, 5, -98, -47, 63, 60, 33, -77, -67, -77, -113, 39, 63, 87, 84, 88, 87, -42, 68, -66, 55, -92, -124, 104, -1, 107, -14, -38, -105, 33, -46, -123, 38, 76, 79, -52, -1};
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
    msg.setTimeStamp(0.9850141022467218);
    msg.setSource(12896U);
    msg.setSourceEntity(166U);
    msg.setDestination(57139U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("LBTMMCQGRRTSCUVAYYUUWKOPPNTTWHLCKYQCBXKYNZGTGNCKVROAZOAUVDAQHNQKVYUHYCXKNCVFOVNEMIWJLORTHFFJDGSEQSZTBJMLMSNPKXFTZIFCWDSE");
    msg.plan_size = 21383U;
    msg.change_time = 0.18995810473609942;
    msg.change_sid = 55606U;
    msg.change_sname.assign("URKTESUGNDPMOCILBQCDZYGESVMPAFUGDCNSOCAVVYMLGBMHRCIIJWVTKVJFELIZXZBFBQSOZKGEWCWTIKPNXHDJJJZHAVLCUIBJPEKXHUKVWTKRNSIEGZMWYLYIZOSWBTWDTELMLAUHQUFOHFEOQMZOXPLH");
    const signed char tmp_msg_0[] = {-78, 120, -64, -38, 58, 90, -38, -29, 119, -41, 55, -34, -27, 1, 88, 22, -91, 81, 100, -57, -116, -34, -87, 16, -78, 106, -79, -111, -108, 88, 11, -65, 33, 30, -108, 13, 12, 25, 106, 65, 64, 37, 78, 56, 124, -54, -128, -108, -49, -70, 97, -69, -55, 122, -76, 104, -89, 111, -4, 71, -91, 118, -88, 76, -118, 34, 66, 11, -65, -74, -72, -126, 39, 59, -44, 17, 39, 3, -67, 26, 18, -56, -79, -22, -41, -76, 119, 94, 124, 70, 25, 77, -90, -37, 26, -39, -31, -36, -88, 96, 90, 66, 63, 122, -40, -2, -125, 74, 77, -40, -61, 121, 88, -76, 99, 24, 120, -96, -54, -93, 95, 87, -107, -31, 63, -88, 68, -68, 25, -29, 108, -31, 92, 118, 42, 13, -58, -95, 87, 101, 17, 47, 42, -16, 116, 7, -100, -53, 100, 105, 32, -70, 55, 50, -56, 80, 117, -67, 51, 92, -9, 82, 25, -114, 83, 113, 60, -57, 120, 55, -72, -60, 114, -91, -90, 123, 106, -84, 21, -33, 121, -36, 73, 71, -122, -112, -74, -16, -49, -45, 9, 34, -95, 4, 115, -21, 19, 91, -114, 22, -53, 119, -123, 108, 0, -31, -116, 78, 5, 34, 15, 96, -65, 9, 41, 0, -46, -117, -10, 43, 109};
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
    msg.setTimeStamp(0.5249099474252017);
    msg.setSource(56179U);
    msg.setSourceEntity(210U);
    msg.setDestination(19922U);
    msg.setDestinationEntity(206U);
    msg.type = 10U;
    msg.op = 241U;
    msg.request_id = 49145U;
    msg.plan_id.assign("IVNJCVVUYIAJNLLADMUMVWSZCRBFFOXZFRMGAOZFBBPUGMZIOLEPXKFHUI");
    msg.flags = 61554U;
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 109U;
    tmp_msg_0.op = 229U;
    tmp_msg_0.request_id = 3983U;
    tmp_msg_0.plan_id.assign("JAWAHUIYIBGLGVXSFLZCLZUPZOEWRSRAYGJJYBKNJQOPCQTKMGQOCILEHYIQEVRNBKWXWBDEQFHDOWGXYXWFHDCTGYVLVALARSVELSPRANUHIFMUNKWDJYUQPQVHRLMGUTSAFAVMCBZPLKZ");
    tmp_msg_0.flags = 21785U;
    IMC::Distance tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 70U;
    IMC::DeviceState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.11572656141119009;
    tmp_tmp_tmp_msg_0_0_0.y = 0.4108057452383129;
    tmp_tmp_tmp_msg_0_0_0.z = 0.178094162308718;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.8986173590393134;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.2555560210564374;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.3484805063826385;
    tmp_tmp_msg_0_0.location.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.value = 0.04268754916695938;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("UDHRXINUNCSAUNIJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZHWCIHCQFYRPXAKYSPPRZECFXEPMUCIWXIGGGIDFQBADORCKHQIYORYIXTBSOKVNJTMYACUSXFRLEANJAWOZYTQWVGSHNXMDGRFJLPLMVDGHEVUCVYMYTEDBNPQNPZDJWDZYSBKMZUFKLVQUKZHULFUVAMCKNBEPVJLKLUDAQOKTXNHPBOHJOABTWLVL");

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
    msg.setTimeStamp(0.6067770075187094);
    msg.setSource(47578U);
    msg.setSourceEntity(0U);
    msg.setDestination(27431U);
    msg.setDestinationEntity(132U);
    msg.type = 249U;
    msg.op = 55U;
    msg.request_id = 38086U;
    msg.plan_id.assign("MKYPAELWPIEQWPNQWDPIDUQNQCDKQFZFMMJHPHVJFZRPJJYICQMHGDTEAUJWRXYDHJXZAAOWICEIGUZZBDUBSZHRQOLULUOCVVOHSBQZEBDFWOXSWKOSHCFGHIKJNWBSCKNLXRVTUONLNYFJRXTITRAUOBBRBUMDNSHPFCAHMYTGYXZDFLEFRSGFXXYDYGTZELMMWOIKKPXMVVVTJTLCEUTCKPVGAYWAEAGENC");
    msg.flags = 26227U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("UJHVJARXZLDGDWXXBMTAEABFGXKLTRPFQWPJIPSHVCYCBHYNPKIQVWDDVCBIJFRVRZXMGVUSZPGSYHEAHNDBEMFXEUYRJVIKFOPYLFBLUL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GVTZXYPXAKOBFSPGHERPBZWOTHJUVIV");

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
    msg.setTimeStamp(0.11357290793780506);
    msg.setSource(22069U);
    msg.setSourceEntity(63U);
    msg.setDestination(46878U);
    msg.setDestinationEntity(19U);
    msg.type = 253U;
    msg.op = 27U;
    msg.request_id = 22913U;
    msg.plan_id.assign("GGJIKBKIPOHUGTRCEVZQPKDKHMZDHJBZHQFGGQIUSJVOEOKRKRLRULXDLQFWSLPHWHZMY");
    msg.flags = 22456U;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 64452U;
    tmp_msg_0.type = 184U;
    tmp_msg_0.max_size = 61836U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.02863559370778823;
    tmp_tmp_msg_0_0.base_lon = 0.7345733356784839;
    tmp_tmp_msg_0_0.base_time = 0.5674242790837729;
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.original_source = 41870U;
    tmp_tmp_tmp_msg_0_0_0.destination = 3676U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.8396669923930764;
    IMC::LblRangeAcceptance tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.id = 73U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.range = 0.4403631192895259;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.acceptance = 82U;
    tmp_tmp_tmp_msg_0_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CWZUAEXCEIKZHVDTUMIVRGPMCOUSWKDGZUNNUQJYPHUEQJMFRMUCRLOMLHAKEEOIWTWVKVOGZLLMWGBERIPPXSSIHGUCJDKBYXAXPOAFFFPGZVQAXXDTFPCOTYQXENYKHTJETHHBGLVYYDJVLHKFEJDSBO");

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
    msg.setTimeStamp(0.9869768112493937);
    msg.setSource(35012U);
    msg.setSourceEntity(48U);
    msg.setDestination(61855U);
    msg.setDestinationEntity(87U);
    msg.state = 155U;
    msg.plan_id.assign("LODZIPZIGRBSPCBXCQTLLFNOMVRINUVKVTBWAOUTQIACCXMHTJEUHWUKCISHUHGWFYXAHCYDJTLBPVSRTXMMMCSLIKXQOFMOGGZHBQCXBGWOUFCKEFOOTQLNZDJXDNYUQIJKAYVKAEFNDDFAFWFEEHISTHBPNMYVRQJHQJRCPSSVLEASBWWZEVNAVHZWYRQJDOISDYMFRGZQYAPLKLZUTYUVMONEJRJEPNRKKXSXZWIPAPWGPZGUBBDMRGTKXJ");
    msg.plan_eta = -99671559;
    msg.plan_progress = 0.1454988621185176;
    msg.man_id.assign("ZTTWYRRSQWFSUDYYQQHTYQJLMTECOHKMUEGSPYRUHKVTEBKDENZFNKAPFXFICPBMTRXKFCSYHUXIDJNRANCGOIJPOPQMMBWFBLXRVHVGSJLMHCZLVDNUXONUGOODDZRKXCEYCVPZJDNGSBTOLFZATIEMYMGKHERGIPJAILDBVFWKZFYHQJOURNLBHPLXQDXQWIOKZJABXHAUVQPIWJFVBSVZGTGRZJIDIWWSOWMSELUAKGYQ");
    msg.man_type = 40535U;
    msg.man_eta = 1426221969;
    msg.last_outcome = 207U;

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
    msg.setTimeStamp(0.6321116634863101);
    msg.setSource(37879U);
    msg.setSourceEntity(142U);
    msg.setDestination(11226U);
    msg.setDestinationEntity(179U);
    msg.state = 79U;
    msg.plan_id.assign("GGYCPKCNKLJCHOZBPBLNXOEDILGVNVMPYTPDANIMGQCLMPOTMARHUBJOQTLVKCRDZKRSXXZKSGDFEQYSAKBXJDOTWYIZWWZMAZKOFLHEXDCGHMJNNXJUUAYREUBJISICGGPBHEWFGQOUKZWFYXZVSQZMRJXTHTDSANBKRNOFVFTALDBJEYQQT");
    msg.plan_eta = 1631071541;
    msg.plan_progress = 0.2507568078924256;
    msg.man_id.assign("WVLNGGPOFJJCSOMDEZQMGJYQCCFNEASDLF");
    msg.man_type = 62605U;
    msg.man_eta = -374376431;
    msg.last_outcome = 141U;

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
    msg.setTimeStamp(0.6363358477893383);
    msg.setSource(48462U);
    msg.setSourceEntity(109U);
    msg.setDestination(54595U);
    msg.setDestinationEntity(201U);
    msg.state = 39U;
    msg.plan_id.assign("DGHBQHZHCJFBGJXDCIOAZJYQMVYGIXNTPGJDANXRJERUITZYLWATUDTIPQBEPWCMDPZLMVIEPRERJNVVSJOMZVPUTZGKMLCIBVKSQKCSRXBNDYAQZLCMXDGFSUOKYZPIABTYMODQNFDCEA");
    msg.plan_eta = -1400049512;
    msg.plan_progress = 0.8814749978437456;
    msg.man_id.assign("FZPVGJAHWYWBZUKWBTOVDHNYHVXZXORXMPCHQECFKWNEKLAFEKXRNZIIQGPNZPOXQFZKDLEHYABUSMQQCEJNNMJRYICXLUMOIFPITQYBVXLLFJSWBZEGYZIVPTBWWYRTKOGRSZEWASENFTPJGXSTOMLHKQJSOADUEDLMTUDGSQPHBXOLHRVRVWPJTAQIMQOPZVBHRIGAMVHCLGCXTUMFY");
    msg.man_type = 35225U;
    msg.man_eta = -986704985;
    msg.last_outcome = 35U;

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
    msg.setTimeStamp(0.3865831956744693);
    msg.setSource(4143U);
    msg.setSourceEntity(69U);
    msg.setDestination(37762U);
    msg.setDestinationEntity(29U);
    msg.name.assign("NODVHDZZZSONUWXCWPGTCWABQWSHOAXSSNXAZJNMHCBYKUDOVTBPCINYOLYKOJOWEXCEQHVEAUJJIOUIMKCDCMZTRMAHPRXKVRBEEQCDTTSUESOYQZCAKQINGPFKVYEKGRQBJPAKUZGGLEELMPWXPEJYVQFIIYNABBLLAWRODKXUPLYBWCFSIRGKQJSTLMVRRVJIHVYFBIUNQDUHPFTYLGTVASFNMGJQFMPBD");
    msg.value.assign("WQGSFSXSZQIAFNJKEQMNCHEOGVGIEZBGLBEPNO");
    msg.type = 181U;
    msg.access = 215U;

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
    msg.setTimeStamp(0.6603851944643593);
    msg.setSource(47045U);
    msg.setSourceEntity(32U);
    msg.setDestination(6879U);
    msg.setDestinationEntity(65U);
    msg.name.assign("QECMPAJDJXXTLEFYGVSBTROCFPIDMHFUZEKREIKIWWWYXTXKKAZAOFORKUNVCJPYCBSBMMAZEXEWVAJKFBVNDDHNKUQRPUCWAPNAZLGRLLSZWWTSHYOKQIXVYMQOEGTFLMIBYMQCEJFPQDYTGGHRVJHG");
    msg.value.assign("BQPBZGIJSYPROUETDJIALIZSSCLNBAUKMLVIOEDXCWXWESIXKWIZNHFSCWVZAYHOFDYYFSAVD");
    msg.type = 147U;
    msg.access = 66U;

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
    msg.setTimeStamp(0.9141059755153911);
    msg.setSource(20805U);
    msg.setSourceEntity(206U);
    msg.setDestination(63016U);
    msg.setDestinationEntity(0U);
    msg.name.assign("ZWPJUABYRCHHEYMRTMCJVABKCPLKJVXQSVMYTXOCUSCDOLKHFIAUTXFZNPIWHERPWTTJXDQPQUOGQBBPSJHZISFDFAWQIWPYHRQNKASISDICUFZYVYJCOVZBGNQGYKSUKREXFAIAWHMJXLCXPFPOQEMODEBLXKETDGGVDAMTULVNWKFPBCLDHWHYYMYRWDZQVMTLMWRBSNIZSGUNZOEJEOCXNAJMOGNTOTRUUGBERZGAKDJLLBRIFNIG");
    msg.value.assign("OSRFHEPFQVGOGSMYLMMJQSFUXEFZYGCLWIRKXZRQKOGNMYQIVRTXWTLAVJAKCQOOQHRDZUUOAZYPIUVBWVIABCZ");
    msg.type = 86U;
    msg.access = 184U;

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
    msg.setTimeStamp(0.13002710488596403);
    msg.setSource(53758U);
    msg.setSourceEntity(136U);
    msg.setDestination(4969U);
    msg.setDestinationEntity(14U);
    msg.cmd = 216U;
    msg.op = 205U;
    msg.plan_id.assign("IQAPXHWVGPSTJWCFNEJBPSEGOZA");
    msg.params.assign("BVLMPEBVLWVJTRTXULTUIIHGDNRZKGVFPJUPPNZQGMFBVWBRJTFATKVGGBMKRHWXQATVZHFQWJGYHEFNSUOIHJISHNZYGSCUNKEHCSOWVOSXWAEYOFDAVSHPBOYPXCRHCFXJTAMRSVWMLRPLDAAQAGQNKUBFCMENONGQSCUTEDDOUJLWZEPTXDXKHQERIYAZEBNYFTRYECALZKKMLUNXDCXPBQJDMKJWIRIDZ");

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
    msg.setTimeStamp(0.4823022850362342);
    msg.setSource(52362U);
    msg.setSourceEntity(148U);
    msg.setDestination(6688U);
    msg.setDestinationEntity(110U);
    msg.cmd = 57U;
    msg.op = 174U;
    msg.plan_id.assign("LCZLGJYINPOGECAQCOHWSJFCDXTEXSUUEYVUBCMZOHEKPMOPGSYASQRLVRVQUKCBXNDFWXIQTJLWGETTBVDICXHXATZSWZVUIIQRWKHQVMGPIRTQZKORNJGMSBEZEDLUIZJXNYSIWTVORAGMJOVMFPFDHNFDZWGLOKACHAYLBMAXHRFDNLTRB");
    msg.params.assign("JGDNYISWSLCZHBRHUAQCXREPFZNYVQIYPGAQUTRXKWZTXJKQDIKCJUOLSUABWFYLAMYOVOKEUBXLFGQXUTLFIDCEYUVFEJKMDIWMEORPHDGPTLFCWQKZFVAWSHLPGVXCHIXMSWXPIQGWHIAJZBTSRNLTVKOBNDPYRCUBRYOKPDYRCOMMAECGGFYHEFZUVPSBZHBOXWNZSQVKMANJGHLBDLVRNJSMUVFDIQZQJAMTJONZXCEB");

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
    msg.setTimeStamp(0.8869375821999874);
    msg.setSource(55278U);
    msg.setSourceEntity(223U);
    msg.setDestination(38029U);
    msg.setDestinationEntity(233U);
    msg.cmd = 35U;
    msg.op = 206U;
    msg.plan_id.assign("WIPUFKQBVVABSRELNIMAOOCMIDPNUTETJYFMNJLCFFVWDHGTVGJBLWGAXXCVLYJRVDFXSTWIORSOVFMNSBMZACVBEYEGUHMNQYGSLQBAEUIMTSXPIUUROPZZBSTJNEOEKRGUKRPNCKZOQDDWKAQTGMLIHKTGDWXYQHR");
    msg.params.assign("GDMYKZCFXQTUKNKRYVURCNOWGDDSUQAVMVUBUSMMQXWGGBR");

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
    msg.setTimeStamp(0.2158254874313995);
    msg.setSource(47860U);
    msg.setSourceEntity(110U);
    msg.setDestination(24871U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("RCETMNNJUHJLMXXRUSXWVFGLFPJIWVDBRUQS");
    msg.op = 100U;
    msg.lat = 0.8271312762949193;
    msg.lon = 0.07009778826086588;
    msg.height = 0.5798482428274717;
    msg.x = 0.004715676625739351;
    msg.y = 0.8517913966393832;
    msg.z = 0.47821887218745107;
    msg.phi = 0.37077661351361957;
    msg.theta = 0.8972732061483334;
    msg.psi = 0.026194083405842172;
    msg.vx = 0.48952317999379646;
    msg.vy = 0.8240903000622033;
    msg.vz = 0.36593420042769953;
    msg.p = 0.2596319155329627;
    msg.q = 0.6031508536578166;
    msg.r = 0.8837667482517184;
    msg.svx = 0.24170875517062074;
    msg.svy = 0.6980450175039066;
    msg.svz = 0.6177282961386666;

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
    msg.setTimeStamp(0.8702432533346299);
    msg.setSource(53201U);
    msg.setSourceEntity(44U);
    msg.setDestination(37530U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("EBEHDEHHLMOXKFCJXDURTIWQRWRTWNCT");
    msg.op = 62U;
    msg.lat = 0.4446113559500716;
    msg.lon = 0.1204304770874236;
    msg.height = 0.2926348076400732;
    msg.x = 0.8041655272856135;
    msg.y = 0.8151750558071751;
    msg.z = 0.9436506872041452;
    msg.phi = 0.34704931087453916;
    msg.theta = 0.11169876728222428;
    msg.psi = 0.7990443030597996;
    msg.vx = 0.7292504254840926;
    msg.vy = 0.33241125843975317;
    msg.vz = 0.8226537072740235;
    msg.p = 0.6050493945330518;
    msg.q = 0.2899470049177123;
    msg.r = 0.7108548784689651;
    msg.svx = 0.933115018314967;
    msg.svy = 0.08882590787899292;
    msg.svz = 0.44608505164111556;

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
    msg.setTimeStamp(0.9123164502918116);
    msg.setSource(52113U);
    msg.setSourceEntity(12U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(131U);
    msg.group_name.assign("CNBSDXQSHSWICEBEBTCELYIRZTQJOVFXQMCIGYRESJDLBNKZMXYQTFOOZYPCQMJMJQKNNNPIESZNBWCLVRYIGKHOCUXSAPQUCJJGHXPAIHAWVESVYUILPSJSYJPDTSYZAPTGRZXDFLBXDFFQTHPKFKZFMLVRXBL");
    msg.op = 56U;
    msg.lat = 0.6224904574385025;
    msg.lon = 0.31054444785081736;
    msg.height = 0.20301587243813202;
    msg.x = 0.6823555225953942;
    msg.y = 0.6233867492986047;
    msg.z = 0.6357593325929479;
    msg.phi = 0.6700614481182526;
    msg.theta = 0.21304652820601078;
    msg.psi = 0.19550343299073947;
    msg.vx = 0.6473201323845688;
    msg.vy = 0.3300390358915729;
    msg.vz = 0.3278793859326389;
    msg.p = 0.21309565397134522;
    msg.q = 0.2416303826978673;
    msg.r = 0.9005044634038732;
    msg.svx = 0.6132285211240406;
    msg.svy = 0.008649310979785052;
    msg.svz = 0.08117373991069365;

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
    msg.setTimeStamp(0.535269460308472);
    msg.setSource(14332U);
    msg.setSourceEntity(64U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("AALQVSDXQIPFRYCUTUHVWRJPOSXHPBFFMULNLCYWEZKDDJSNUHBRZCFMDEZSSIVHCERZEBVTJBSVCKNZNRISSKZTPUZFDLLFKTBMAIDLWRXWLOCOBAFYJAHHTKARPRFQLQWVOXOUPC");
    msg.type = 142U;
    msg.properties = 199U;
    msg.durations.assign("HKFBZYEEXDGXBYLIKRZIECOHVPXNRDHRQNZFMTSVAQACTUHNMUSRUPEEGLZYPDMYPFJLIQIOSZKZGIKTLAFJQSOAKRGFBQQLCRVNOLXWBFQXJCBPDIOVYZNBEZLTFNPFKGUCMXWTOOTVQJXCDOUPYBSWTWDLPZWZJXHNBGRBEYMSWMLHNSKJEOSUHPIEANDJMRPKTWRYWHMYAUFQJOUJXTBCD");
    msg.distances.assign("USQMZUHFJRUDWAEYPROLVXWTTRLYHQNCDKJKLFUBTKJY");
    msg.actions.assign("ETCTVLKVFQPOSJEHGNVHOLKKVBHJWRRXGDIGAGCBWSAXZFNWCTMAJFLUATZUSXZRNPQKEANGCSRLJMVDEEPGUQUDRLUIBNATYTYYQTHCDWZWQKJPVMSNEHZVLIYJORNDVIODWITOBMZJZEYGQQPHZKNRBAOJHUCNKBHCXMQRKTZOACSBDICBXBAPWLIVMXYHGMF");
    msg.fuel.assign("FZAUSJNOOGFROTRGGDVDMPYAHXHWQYRDXFJUMQGCCQFRVZWKQCCLRZURSLDMIHQEPRJAEMMINXLHYYVKNRFNSBMWFEUUTAPBTSOJKUPHYIXIKHZVGJBEKWXMNCKQLXZPMWDPBIWQWLNVNVFEQCZBSXZIHLAQNKAFZMRZLYXC");

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
    msg.setTimeStamp(0.6761847937966561);
    msg.setSource(18235U);
    msg.setSourceEntity(44U);
    msg.setDestination(31083U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("JDGDQRMQZLYQFKCXMGZOUVDMJVMKFOWZHTSAYYWCUEOAGJDJXADKAPBQYINBJOTXLHFLEEBBNSLOCACPUDNL");
    msg.type = 116U;
    msg.properties = 84U;
    msg.durations.assign("ACVYBTDYFFHDWUVPUTTSNHCYUNNJZZUEITMUSXJWQDEKIEAQXJTO");
    msg.distances.assign("DSRXJFMDMAYLPMVHBWFEOPC");
    msg.actions.assign("MPOJOFFJJDBOVDQWRFBYXZWSYPWRDNYUURYJOPWGYRNUGTRMKDSXKGTCJGEGAESIZWETZMSTLHSSEVBXCENVBPXZQCSTFPSWMPVMMUAXLUXHBAREBSDKAZLFDIRODIALIGXWQJKVYINDYAIBMPHNXMOKQCUUMPANGRLVCGPJRHJRTJKFNFTHKQVWIOFQGOYOZBEDVQCKCPLYVZNYEIAMLFCIAHIUHQXCLFDZWHOKSHZBL");
    msg.fuel.assign("YCGVXKNTCTDAZMXNVRWLOFZCPNNSLSQJVKBMKPUKGGTGICVVFMSEELQDSGLNDQKMSDEQO");

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
    msg.setTimeStamp(0.2384090831029707);
    msg.setSource(13640U);
    msg.setSourceEntity(78U);
    msg.setDestination(15266U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("VZKOSUOIPYFDGMDCEEVBGHFRWQPNXUGMKUXCJKRYEFNSDGLLKYCXHQLPQAIALDFYTZRFIQYSGGALNDGUWZBFRWHIIJVCASDWFREKHJNZJCZSZ");
    msg.type = 165U;
    msg.properties = 162U;
    msg.durations.assign("XUBQWSIEUOLPHWSTXWZFQXSLVKWDMRZEKQVIJTWYBCJEDKG");
    msg.distances.assign("UFGDOMEFEJKPRRBWDSTKJJLZRAPLAUUXQWSBZNOJTTXSUTCMGNNYPRVGDIZJBNKGJPOBOUENCSYDMOVZQKGTQQBCXJGFNAQJ");
    msg.actions.assign("CMUZGBFPGHDCLGMWNAGUI");
    msg.fuel.assign("EZXUNDUNUEAEGRENGPIGBTWCDWGWHZCEIOUEZPZABTJQBZMXMXKPNDQMMINDTUPZTDVSLOLYIYRHLQEJYCRAB");

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
    msg.setTimeStamp(0.9732901197505996);
    msg.setSource(16775U);
    msg.setSourceEntity(241U);
    msg.setDestination(13436U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.6044630771894766;
    msg.lon = 0.8397660121393187;
    msg.depth = 0.545577006510374;
    msg.roll = 0.5786280629120507;
    msg.pitch = 0.5419467258358771;
    msg.yaw = 0.9006997758248805;
    msg.rcp_time = 0.11064706947063585;
    msg.sid.assign("HYMDOCSWTSMQMJIEBLOBZVYBXMQBCLKXWGSYHRWGFHXZDEAVEGSTCJDFJFKBNFDRWTLISROFXMWZEKTRSVTJQNOUKRKNNFUDGTPYGFKQBXYIRHIGYOIIFQCPKAKQURWPCXASMILDAXATCVWSPFUXVYRNJCUTXLWBEZKUHGLNOLNHHHUVOCTWALSBQCDEHVPDDTAHEJEBVIIRWYCVPKNIMMFJZNURZLVQPZPBOJPEUOEXSQOAALYYZZGADG");
    msg.s_type = 134U;

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
    msg.setTimeStamp(0.3096521319030755);
    msg.setSource(30508U);
    msg.setSourceEntity(223U);
    msg.setDestination(29869U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.33457860549196683;
    msg.lon = 0.3422640297498285;
    msg.depth = 0.20234930841354137;
    msg.roll = 0.25839238668965525;
    msg.pitch = 0.5451227099687919;
    msg.yaw = 0.8999118974741668;
    msg.rcp_time = 0.8553663627063477;
    msg.sid.assign("LHWVXUEVKIMFOIFGWKHIDZIPXKRJQNUVYNJCO");
    msg.s_type = 197U;

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
    msg.setTimeStamp(0.08891912327780538);
    msg.setSource(9932U);
    msg.setSourceEntity(88U);
    msg.setDestination(27481U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.5601462959831416;
    msg.lon = 0.013085533348656142;
    msg.depth = 0.28286781534719985;
    msg.roll = 0.3754468076997771;
    msg.pitch = 0.2804797975467783;
    msg.yaw = 0.729159759299754;
    msg.rcp_time = 0.49625929691294723;
    msg.sid.assign("GZXYBANDVWJEVAJRXTWFMBOURCQWACIPEUOIKMBVIFPBHZTZLJNPIKIXVWXHVNVQWVYLKJCVINDDPBDOYMJWINKRBXHAZOHGZFTVRCDTSYGDKYGYYRLRAEZZSHYQAHNUCBEUOKRCUSLMFTQPSPIERDOSRWQMHBYDNAGWPGOPATXSSTZLBS");
    msg.s_type = 215U;

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
    msg.setTimeStamp(0.5611344369933111);
    msg.setSource(50368U);
    msg.setSourceEntity(241U);
    msg.setDestination(55662U);
    msg.setDestinationEntity(216U);
    msg.id.assign("BFIEOXTMOKRWBCCKQJMHOLLXNSGRBSWJTFRITXRISEODIKDACJMUNOFAKDDILUKECTMIKJQZNZCCHFESRHTISUSPAYGFWU");
    msg.sensor_class.assign("FRCILZNBAKLDZSCJYCNNHGZQLXAZFAMDJRAWKWUXPWFVFOQOFOTBMHDVOMTSGYKRXWLEKJFTIQBIINGIVNUQMTDVLKQJHTSPEWVEZWDBNIEYNOCHFPSDGPUVUJCJRMUOEVDCHSLB");
    msg.lat = 0.5627374831396665;
    msg.lon = 0.23756448372833983;
    msg.alt = 0.5522199443497391;
    msg.heading = 0.718658473220251;
    msg.data.assign("ZBHJKVAOPOIXQKODGFXMFTHWZECKDZTMXXKUJJFVEXORXJSZBMHODGLUEXULQIGKSRLQBAJSNPFVQAMVHMFKUCLOLAUTFMRBIUGAPSAKDZYYYWSB");

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
    msg.setTimeStamp(0.8087097479839018);
    msg.setSource(22154U);
    msg.setSourceEntity(216U);
    msg.setDestination(20430U);
    msg.setDestinationEntity(221U);
    msg.id.assign("DIFUHTBMRICVASBGCIGQXUGLUVNLQIIAOWBEJWYXGTRPMWXNFPPDVMISJXMIQCMQZWFYFRNP");
    msg.sensor_class.assign("QPRWNDMUHXLXWJWQPOHAFSRZQHBJCCROXSYJOIEMSAAOAAIDFFSEIWTBTTSOIVAXGJCP");
    msg.lat = 0.7534489186431632;
    msg.lon = 0.30705835661124725;
    msg.alt = 0.40529880796813145;
    msg.heading = 0.4357149159317447;
    msg.data.assign("RCABLQDDBPSDGMLNFQRKOKFBF");

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
    msg.setTimeStamp(0.34112480121639044);
    msg.setSource(19875U);
    msg.setSourceEntity(48U);
    msg.setDestination(13704U);
    msg.setDestinationEntity(144U);
    msg.id.assign("RBYYGZAODEXAMFFQBVZIVGARDWMVSGB");
    msg.sensor_class.assign("DSIVRKXYUCTIKKQVDXGYEZGSQSN");
    msg.lat = 0.7951215698132665;
    msg.lon = 0.5378603440714073;
    msg.alt = 0.45514916315129483;
    msg.heading = 0.9928104435871661;
    msg.data.assign("HUMZICDWVATKHPJISROFFCQXAMYSRAXKLTXXRZJJGXCHBKGHWDUJHAEKNGBVLPAKZZBECIOFBKGGSIJBWOMFALUZFUQYJUJPNGPEFEHLFDPRWQHURNCSSMCPWZMYBQETQNOQPSNEFCSNQMZTORUYGYZCUALJWNEKSBPSMMLXUUVLTZTGOIAWAHEMDRVRNXOBFODJJWSXLWOIEHTKGIVT");

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
    msg.setTimeStamp(0.9919569064268664);
    msg.setSource(58219U);
    msg.setSourceEntity(46U);
    msg.setDestination(15178U);
    msg.setDestinationEntity(63U);
    msg.id.assign("GQOMCPYNFDYAUMIJDZTYNFWAXTUZPFNPKHHJEMCCIKUVTWIKGJRKTHELRBOUJEVROHBXSQGUCSEYNFAJDBQVCLKURKIDWEGINYERUXBYZXFDMKJXQKTALGOAHZXTYFPBXWQLJNZXOLGOJJDVYQJHKIDBZNVOCCPCPAQETHODMUGBQFWFLVVUKZISPYRMLIIMPBSBO");

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
    msg.setTimeStamp(0.9205223525909907);
    msg.setSource(7926U);
    msg.setSourceEntity(125U);
    msg.setDestination(65055U);
    msg.setDestinationEntity(75U);
    msg.id.assign("UVDUDXBGSVVNSOWOBOWGQQITEKZCPMWPLXLCSVUAVEBKAOVDTCCXNBNHKIINUVUFIUTLBEOVZWLFHPIGBEEPKIRKSNQDDBQNHGUSYYFOXQKSQDJHDVFFYQPRL");

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
    msg.setTimeStamp(0.8181047369370488);
    msg.setSource(21238U);
    msg.setSourceEntity(3U);
    msg.setDestination(8273U);
    msg.setDestinationEntity(245U);
    msg.id.assign("SWKWRFHDIEJFANHMGWPRGDIEDECTMFEHLXLBYQPWJJIJBDPBOKMLUEPFZKPCGYMVIKCIISGNNYAXRGJBYLLDEDIAXDQAAFIJ");

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
    msg.setTimeStamp(0.23591464708099064);
    msg.setSource(61620U);
    msg.setSourceEntity(226U);
    msg.setDestination(43489U);
    msg.setDestinationEntity(250U);
    msg.id.assign("EZLQNVCYZXVBGAKPHPZA");
    msg.feature_type = 80U;
    msg.rgb_red = 242U;
    msg.rgb_green = 162U;
    msg.rgb_blue = 82U;

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
    msg.setTimeStamp(0.8054559351751343);
    msg.setSource(7690U);
    msg.setSourceEntity(174U);
    msg.setDestination(56638U);
    msg.setDestinationEntity(212U);
    msg.id.assign("VWSECGGUMUPWIFSVKCLKNMAFVLYSZJENEAAY");
    msg.feature_type = 191U;
    msg.rgb_red = 107U;
    msg.rgb_green = 152U;
    msg.rgb_blue = 18U;

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
    msg.setTimeStamp(0.1183449923808344);
    msg.setSource(53913U);
    msg.setSourceEntity(253U);
    msg.setDestination(12743U);
    msg.setDestinationEntity(95U);
    msg.id.assign("NTKFECFCWPWCHQBUPYRJWFFZWNLBADMLMCDENQYJRMBXILLSUTLPHCVIOIXZATLGZNUXQVHDISQGIYNRYYWSAIRTFWFEHKNQTXKMDZUSEORDUXOQOFANYVFIAWGRCXCHDLPXGBEDCXBKBRLDZPSNLVTBMJQMYQUHP");
    msg.feature_type = 50U;
    msg.rgb_red = 58U;
    msg.rgb_green = 99U;
    msg.rgb_blue = 136U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7844200779983757;
    tmp_msg_0.lon = 0.06551044516005311;
    tmp_msg_0.alt = 0.9278449841820513;
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
    msg.setTimeStamp(0.4071540308643349);
    msg.setSource(5968U);
    msg.setSourceEntity(190U);
    msg.setDestination(48738U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.2233118430761588;
    msg.lon = 0.3553761566877457;
    msg.alt = 0.09279674888070333;

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
    msg.setTimeStamp(0.5110045933738888);
    msg.setSource(60844U);
    msg.setSourceEntity(8U);
    msg.setDestination(30160U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.6942562225928808;
    msg.lon = 0.7183811907308387;
    msg.alt = 0.7614097560661339;

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
    msg.setTimeStamp(0.2583244685083731);
    msg.setSource(15545U);
    msg.setSourceEntity(175U);
    msg.setDestination(42600U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.6389402413178259;
    msg.lon = 0.7552944396303619;
    msg.alt = 0.7254097088547378;

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
    msg.setTimeStamp(0.8512383855035719);
    msg.setSource(59007U);
    msg.setSourceEntity(170U);
    msg.setDestination(46065U);
    msg.setDestinationEntity(196U);
    msg.type = 59U;
    msg.id.assign("SDMSZTNGROOEBLNGTCGNDRMHMYQVQQFLMYBJPFBNFUMSXWRNQPXQFEAHKRBJIRMXOIJCOIJHGDNIUYHKTKHQWCCKVWAFNKHVMPFMXJDFOBGLNTFJAFVRGXIHPTVETRPELMHZJMYWIPDLPLDQSYZEOKCEBBAABTGUVYXQDZFYDQUZNWYTIXPDCJSWVZECVEWTKPDGHHGLLXZNVIOUBUPASUKAZSGZIILOEZXBUUSYROVOUTAWASESCWKJA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UQCKIJTXJEVCPWYSXBHRUNNMLWFIDGDDDAFBWTSARDCPNWQEVRGDROYTQEBYQQYNLMDHRWFLTDVUOVHPPJWMGXCMZSDYCWUVUEVMPFFBJKJSHWMZSQIYVYGNFABKHXXZQGHQLAJSHPNTOGKPYURHNIUZZUDBEAKLVSVZPOOVMONSJSEGNZQCSOKPOKWRUCJCAQOWOFTIYBMIXMRTCGNFBLBXAZZFKLIYIMRHJTKUKIFABECGXZLA");
    tmp_msg_0.attr_type = 182U;
    tmp_msg_0.min.assign("PCANXANJCMZMVTZFXFTUOLYQJNWRIMPGCEZDAIMUOJBUEXDLEWXZWYBIXRKDIKXQABICIQAEGTYBWSQLBSJBHGNPYPWVICYUBPLDJOEDIOOTTQWSXNUHPRYOLM");
    tmp_msg_0.max.assign("DVDEERRBLMXBTRWECIFYVQHUWIFWENXQNJBGRGZZTOJMSQPFQKEAUVWSMEPTPIKHTPROFRDIWNZKHJHTTVOMXEGALXFKLSTJFHHJSLLOJNAQ");
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
    msg.setTimeStamp(0.4803870812628769);
    msg.setSource(50137U);
    msg.setSourceEntity(128U);
    msg.setDestination(45110U);
    msg.setDestinationEntity(132U);
    msg.type = 152U;
    msg.id.assign("WSBXMZKABLBWOGNVQGITNMRSCIUJOUIOSOTFGPGJNEIKAGWVWPFVUPMELJIXTCTJXJMLBHAFNWZPADNPRSTBFFEXAEJZFPNMSCJFYMIQHZZUWCYCUCBYGLAGFVPTEXRBERPOSJPIVOHYRQWX");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8097734834042983;
    tmp_msg_0.y = 0.1439318199996542;
    tmp_msg_0.z = 0.6260517147793645;
    tmp_msg_0.phi = 0.7493233980596435;
    tmp_msg_0.theta = 0.6967145872971778;
    tmp_msg_0.psi = 0.2975778737372684;
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
    msg.setTimeStamp(0.19264482811196382);
    msg.setSource(1998U);
    msg.setSourceEntity(78U);
    msg.setDestination(62641U);
    msg.setDestinationEntity(248U);
    msg.type = 176U;
    msg.id.assign("HBCCVSDTCIDUTNADZOYPJOWYHRPQBHVEDEFRPCGLNRAMJPWUOJYPWOBPXQMHLOGUQEBIDIGMNIWJSCSLGDAYSAIKFQKTQRURGLOUYYUBPRNONDSULMNBZKJILJHWNKMWREFLCFAZTTLGMTFZBXJCVJCETFWUCQHKVIMNAXZXGYJUZUKXSABBSVWPSFITKLXXHZVWEVXVBHNSGIXDMFPOZZARTKQGHDXE");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("DCTICJYQPHLZVTGPHVCCAJPTZONIKSNZTUVEESCAPFSFSRZORKZINCLITKQIDJYOGDGYLAHXFKQJMYHBCEVOYBBVUGKHXDALJMDUNQMUXGYNWCWJPDBMQYZIAO");
    const signed char tmp_tmp_msg_0_0[] = {22, 9, 91, 79, 52, -119, -61, -126, 62, -82, -49, 73, 32, -123, 113, 28, 115, -100, -94, 83, -51, 97, 84, 89, -10, -122, 47, 60, -52, 28, -7, 26, 28, 89, -21, 28, 126, 74, 40, 104, -67, -18, 49, -10};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.049826279179622346);
    msg.setSource(57818U);
    msg.setSourceEntity(53U);
    msg.setDestination(56271U);
    msg.setDestinationEntity(43U);
    msg.localname.assign("MVGDZKNZSIVMCAHPBMVNUJLOBPYMGQJPSHLRVPFFTXQLQKGXWCRPFWCZEEFLKAWJZSUDSMJYZAEMTQSOTHBOPOGTRZRQXABRCIYISDCDUQWS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YMFYMZEYCIVWILXCIOFQBVEHTMKDYWHHKSRNVVTWRZNJRMHGSZVDZBERBIFLZSEEGGRBUSMTSLUWIHPQGMKX");
    tmp_msg_0.sys_type = 19U;
    tmp_msg_0.owner = 39258U;
    tmp_msg_0.lat = 0.42871822541720506;
    tmp_msg_0.lon = 0.7870351506984008;
    tmp_msg_0.height = 0.3389398252003152;
    tmp_msg_0.services.assign("MZLSVTTDUVAQURAJHSKHFOPLSPAFIMGOFOCJPPSFKBVMSJUWZRFWOLYQOZDPZVUTRIMTYNINKTUYNDKXAKILQNALGJLGEJPXGYXNNBDFLURWVLRJZEWPYWUTAHEMTCHKIBKUHZMIBQLNESEFGDQYIHZYWQBCJVMVTMYCXEMPNOGOFKAHPEQXOYNNCVKDRBDFSCOMCCBPHFRGVTDSTIEKGZDYW");
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
    msg.setTimeStamp(0.6339952167313273);
    msg.setSource(44582U);
    msg.setSourceEntity(184U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(154U);
    msg.localname.assign("NEVAAXAOLRPOMHSJIZVBQDOMIPYVHNVTKZOHCSUKKTMAAGNSLAPPNVCREBGUPQZUAMLISYGKZGMFEWFJEVPCZOSMQOCFSLUWUXIBFXEADSWTDZIRYMMBUVKNUJAEISCZNNLOWDYFR");

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
    msg.setTimeStamp(0.08172722553044198);
    msg.setSource(64781U);
    msg.setSourceEntity(125U);
    msg.setDestination(5553U);
    msg.setDestinationEntity(75U);
    msg.localname.assign("TYAAVQLPVRSBOMGWRTKTRPNPPTNDNEISYBEMYQMOKCXYXYCNJRCDLAYMUUXKBSIOHUZIZIUZBDSWHFYMJCMGCWCGOLGDSTJQJAWNRBWXCVQEFTPQLHJHSRBXKFXGWDOIQMJBXIRNGXUXJZECARYOVNTDFEPOAZVSFBPEQRYOADDKWHGIVJEKLYUTELOTFK");

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
    msg.setTimeStamp(0.2645037644162267);
    msg.setSource(36244U);
    msg.setSourceEntity(65U);
    msg.setDestination(53928U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("WASJUGUJIWOENXXHSTEXOSWWEUHRGHINQYTLEVQRNEVPCVAUKSZKNXKGTFCOXMLZNAKLEAZDCNALFGTMCSZCUQDBJLNQIOZWODPBGYDUAIUNPOLKMYMQCJVFKIIBNDMTPHOXJWTAXPVKSLVUBAVVXDJWXGYHBYYTLFRHQRZKOEVDBREJMWPGOBEFYP");
    msg.predicate.assign("MZMFIRVLNKHYKGBCWIFOCUENILGIRZKEYLYQJGEHNFJCQCPTWEXMVYWNUPNZPHTCZYDOYUBQUJSDTQETSMMRSEAYTLJCNBGJSRISPXSKMBRNBUJTJTMEQHKIZWDTH");
    msg.attributes.assign("EINBDJSEQDLMGTKPKXUNYQVRXRDWVZUTTYGCOQBZUHJLBVDBFWVSXPTCWLZYOFGJLIZLEMHKARJBIOKWSWHUOSITCRIMAJAPDCTXZNPWPWNPSDDIEZTADQVAQCLVJSJLBZSSTVNEVKREGGIYJOKLSUGMRUGLAKQFBCPNUMTYXVMQJTBEWYBOOHGFXWOYWAXHHAZYPVKCEAGMDXFHZMZF");

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
    msg.setTimeStamp(0.5891078322271163);
    msg.setSource(22142U);
    msg.setSourceEntity(46U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(180U);
    msg.timeline.assign("DIRSFLVMRUQWQWCTRJYQZLNEGGNYOKWFGRCTKOGUYAYRHQPWWEWSBACFJSEGBPBHTQESDJUHDJYWPIZUNHXRAUMOKQVMDCJCSKTMQXFSPFHZDVSYIQXUPHIYPYAIJBZBGSJGCZUTCZADMLJEWMZDNAVWXLYJKRBVFLJLQNABPROHEEIKOFEVLNZOWGKOXCBVLFHZA");
    msg.predicate.assign("USOWMTNINSNTRRNNBDVMXQMTZUPUKMIDXAGWBGYQYDMHWJBLBYRJPYDRVFOLXKBTTMIPBLXJRDIWYOKOHHXE");
    msg.attributes.assign("TZGODPDYGPQZHKNRWREJIZNCLHBDVIGAYTEOLBYJSNXJKIRYWNREBNZMXLVMUIYHDVPGVRUFYGJOFQOZXFNMRQKEOMFDSIVRWQWLHIHHLCSFPSDYAKCQLUSXLJCBKJGAPKAGKLGFNSHBDUQJZXCDUSMEOEQBQHCFMTMANVUPTXVOXEX");

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
    msg.setTimeStamp(0.2760953684344166);
    msg.setSource(18505U);
    msg.setSourceEntity(129U);
    msg.setDestination(11347U);
    msg.setDestinationEntity(147U);
    msg.timeline.assign("NCPTIMDHUFCACBNMODDXOQDDYMLMMQLJJYHGWPPQZZTWCEIYKHHUSZWDQXIYNZPVSQRLIYMCZMQIGRAXELAOFGASIFLTTSXANLGEWRJXHVCGFWSBEKDAKTRGYNAGVIJSFSQFUKDEYOXTBUDWLYOOWLSKTBZRQBHEUKPHBQOPLRRHKUUSVWIBJEOBXG");
    msg.predicate.assign("LYYSFCPNOQUDPICJOHIZLZRMJZUDJGKZUUGNEXWYIREDQBMICBQYRIWTVVAAJXZNTKVFCPWUEWNSEABBKTVRCJFHONRJPBZGALDFIKALPKBKUPFODWMLYHCCDTNXMDHYONTXWOQQERNODIQSLDSHFBVKA");
    msg.attributes.assign("YADZFHIDVLIFGRFRJXAYWVZJLJGUIQCXDTSFZLCBGOZYTFFUFTDRIBOYAZGHEGPDUWWUHSCXNLIKIMXHUVNDFTAGBLBZPTZDENKMMPHURSNCRIPOSVVOURAPEEGAPUBYSCJH");

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
    msg.setTimeStamp(0.8449151867192677);
    msg.setSource(530U);
    msg.setSourceEntity(137U);
    msg.setDestination(55976U);
    msg.setDestinationEntity(252U);
    msg.command = 161U;
    msg.goal_id.assign("SWIEEGKLPCSMHZPGPHGJTFUTJYHKCHNOCYKCFHCFVWMDHJNAWETXDEDQ");
    msg.goal_xml.assign("SGXQOHSZJNTEEVDPOLXFDQCQYPOKIPRKGNDFWUGKQNCFTZMPCLEWIVXVUDIUSTJNODUAFASHJVMGOAAPVAIBKQUWMMDMTNBRACJDGGPMXXFUTBZRBYAHSHEAWNBIILNOZDTQYHVALLLKXEQZUNHJRRPBWXSIQQRJFKVYROERBKPGYGLWPTMCAUEZLYLEIKFETCCLVSZHYMFVXCZREOZYOBWTHBSNYHWJNT");

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
    msg.setTimeStamp(0.2102245964630315);
    msg.setSource(52520U);
    msg.setSourceEntity(131U);
    msg.setDestination(30211U);
    msg.setDestinationEntity(1U);
    msg.command = 127U;
    msg.goal_id.assign("LTXZKHKUDKVCGCVKYKYNJERCCSWPUPFOPSRSLCRNSTIABJZHWAFRNTDIXZVBKVGCFFJTGJCDYEUQDCPWDZSWSFEIROHXWLKCPOVORQYTLERXEKTNQJXZVFWWQIMHGXLWNDSUSBTZQGMDJYEYHORUEWLTZGCORBVMMKNMPGKZXQPXTGQAFPFEPEYISMILILQOVBHLNOJIYBQDBAUBHHMAPAONJBIMZYIFUJXEVXAVNDLTNDSGUQ");
    msg.goal_xml.assign("VVKGDSSGORAOBCWFIPOIRJMTLKSYMYPUGXNBCITBNPQTTXZYIJWTMYZDOVVHDXMNVKDLONGUBFJXHKSKIQUFBRWGPAMRJREENLPHGVPFALSEMWQYUKWJZIBEQJIINZUEHLDFADRTVNETOHISXHQFKLMFEPKCDUAHQQXONAKXAYQDLSXBRLLMFDGSXORTGCAJCQWJGCSVPTFYCJHLYZWQNMZEYYUGJUPTOHDZAES");

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
    msg.setTimeStamp(0.7758698601365102);
    msg.setSource(486U);
    msg.setSourceEntity(150U);
    msg.setDestination(44659U);
    msg.setDestinationEntity(191U);
    msg.command = 213U;
    msg.goal_id.assign("WZIHHLAUCZMIEUGCMQBYHNSYVMLTHVIMQABZHETNHXKPVCDLVNEAERJLPDBYVSNXCCJBXWOWUXZEHNAOOOUCMQRZYPSWXWJUANDDRJETCRJXGBEXMIYVTMGGPPGVWLSYYHLKDNAQDMNKGYTFUKROSMQGSSEUWKRRJWJJYGBSZCRAQQJQBAIFTSBPFNHGUVOTOFIYLBKFRIOEQKFDTZFOFBXKFZGIKRNULDI");
    msg.goal_xml.assign("JFKDHWWHDVQAOPSOZRCVQHYOMBLVACRMUKDPBDHRPLR");

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
    msg.setTimeStamp(0.6740224293487445);
    msg.setSource(24991U);
    msg.setSourceEntity(75U);
    msg.setDestination(7042U);
    msg.setDestinationEntity(240U);
    msg.op = 6U;
    msg.goal_id.assign("WLJNQAMMEMPLSVKSLPEKGRCUJPQOKWRYTYHOQSWODCILGGHQCGBILWBEFYIWYSAGWGKDUNQAYVTETXYZJRNJFIIDMWSZDGRIJOIRLCDQZRFZRUOXNMBAIJYFAPMSC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MYHNMRUAHAZQNFOXZDZRJDBRGMPFRQSRCKMYPIJQZUBQAQFVGMLXNENDFOYEGWLBGVEHWSFEVINCITDZRXSLQGWNMOGYCDAUVENFPXZEYWCCHPKOAOTEMPOIHKZXCMFLSOXZOGWHIAXTUJACKDVUTBBYTKIMOWLXDVTHSBJLDKHVJBY");
    tmp_msg_0.predicate.assign("UNHSJZYXBVRYNMMWMSYWVGEDJQCQBPQRGQAUFSYAGZZSZAXVFWZBCAOFQUXOOHDOVLJGZTPSTOKNOQSVOWUDLUXKCMHIPEVRWHIHGOAIUT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UEJOEZVPWLUHUABWQFNGOISCTOUJTTVQWJCGECVNCNUOTLQSAMXBEBLSVATCMFKFMRDHVKRMKLNHRFSLZJHDTUSGIOXKTKVXAZUVPMDXTXLUKYNVJOPBCCDIWPREYBPIMAAYHQPFFRKOYFDDYGQRATPWFMSWQNIDAHLNGRABMJEQBKZCLSVZGHCBCEJDMGNVHYJXNAZSOWRTIYXMEWFL");
    tmp_tmp_msg_0_0.attr_type = 159U;
    tmp_tmp_msg_0_0.min.assign("ICAFPSGMELJSCSVDGLHMEKGCYYUISCICOROHWTUBZVDJAFOXWDVUKSJNZYUSFDCBGHBAQEVPIHQAGCTDLWYEQZSJBHHNEVRUEQBPJDGEIINLPGROCOZXILOXOYF");
    tmp_tmp_msg_0_0.max.assign("IYAXKVYQJEBFRMBPLSLWDNGTZZZKGKRVQDSBNACEHTUWBYLZJBTUXNXRPJEJKQHFHKUGBCPWDLEFQAUKIGSNYEETBIISHSBK");
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
    msg.setTimeStamp(0.5192702112573594);
    msg.setSource(40423U);
    msg.setSourceEntity(44U);
    msg.setDestination(22866U);
    msg.setDestinationEntity(19U);
    msg.op = 20U;
    msg.goal_id.assign("LQKTCRPJWGOTFBNIVWASURWOXBHGYUHMSDEYXQFNZUKBGWXJSUDWZVFDDEDOKJCZAFIOKHSWUUQWKLTLGKJPLGXBTICCAEPETWOEPYHRDVCKVRGQQYPBMAHZPQVDRBNOPULQZHFLBNJVOFMCJMUFBZRDIYQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZTKWYEXUXXCNPACFIEVAKTBROGQJQHHMLYPCLZQRUHSTAWEZMYTDSWGSZOTHEIVHXGZQQPNKMMNNUETDUCIELFSPLPBBIHSGMLFDYITDVOVUOKZANWQTUFNCBSSSDLRRHPNIOJREOAVVHPEYXIQULZJGCWDISFOYKMB");
    tmp_msg_0.predicate.assign("NTFCZOBMFGOOMULTIXUFDXMHDYQYJIBTLBPIMVBPJOLUUWVBAVSNZYNKCDUUAPQPDYVBKHDJSTFEOYXEPJJKKECSDHZI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MBZWGHJPOKVUMQQRAJPIFHLCAHICYNDAFEQCJEHLTSAJUBBBOGAEYPHNKZVWOEIWCLZFLLZDYGKPYORBACIODYTYMOIDIFUFIUTGTLXKHYGXDSQVDFTFMHJRMKSCG");
    tmp_tmp_msg_0_0.attr_type = 233U;
    tmp_tmp_msg_0_0.min.assign("VCFXHSQXCMPZRUUUZEKQGYZCTPMNOVRETEYNDGEGVZHCUQYVBSUQLEOKQXWMLIVHBJXZYHIPGHZEPIJNIXWOXVLNFFGNKYDLRKAYZEFKPBWLDTOURSRRGZLNIQJRJJIAWBATTVMBJBSOCGEYTILSCBNOJAGOKUWQLAHXFEOAMDHAYMSNMXEFYSSBVVWKNMCBQWPWGDLKKJHUNTPJCWFZZPTOJPSTDXWDIAYTQURFMQAUPHCFFKRDVXADMRDSHI");
    tmp_tmp_msg_0_0.max.assign("ONGJDRJCCFEJCTSLRTLULFUJINXWIMAKKGINIDUIOUTZRSIYKVPHOPUNSYDKGHPVSMYLGSAZPJFIEGAAKZTHVQUWATVSEMRRVDQYBOTWVEKFSRAIOSDLQXZFAAGQZWSELBVJJXXPBQCMDCLBKBFGEBWCBMSEYANJHFBVXPMENDDPWOMNLPQFTGUDQZXYPCIEHRMWK");
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
    msg.setTimeStamp(0.30338138122293146);
    msg.setSource(19364U);
    msg.setSourceEntity(183U);
    msg.setDestination(48031U);
    msg.setDestinationEntity(61U);
    msg.op = 31U;
    msg.goal_id.assign("HZJCHDZNIUOIFNPCEEBXBVVQUI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GFAYKLMCLJQIEKTDHBZZSMXXFYSBRDXNASGJFTFCGGXOIQNEDFWMWQDTNREJHBCJOXAHBDUYZHGQYYLRFVIORNQZVQZDTCSAVACOLSLYWTAFUKUMBQJUJLCUFXGANSYCKGKCWRWQUGIKUMIUPMZBADJDRHPFVEYPIBTOFQBPPPSBNVAOCDWEPILEXKAGIODHPZMCMREMRTZWOSUWSZTE");
    tmp_msg_0.predicate.assign("UTVOYNTIJEDGLAEFTAUTPHLDKONOEHGLFA");
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
    msg.setTimeStamp(0.005117707346853018);
    msg.setSource(21311U);
    msg.setSourceEntity(223U);
    msg.setDestination(48223U);
    msg.setDestinationEntity(56U);
    msg.name.assign("BRJDZQJLAFXKLSHPSMQPZYHJODNWFKIMSBWCASYUETGTJQWINXAWVGPMFSESIFNOEYIMDYTPANJJCCDHPHENPOHYJCQUZGIKCJHYUDSNZGZCGFWCIDAPWIZGYFTTDNVQSNLTWVGHVXBSLWJZXCOQAJNRLVBRFADTPBDMOOMFRBBQTLFMXKNUEHVUKZTLOEUPXZEAKYVWVEBZHIFORDUVKMQEOVKSXQBKRELMIWC");
    msg.attr_type = 209U;
    msg.min.assign("CWASGOELERZZKPCUOMWJSQIMETVHSRAVQAPOTKJEMJDEKPUVGDOGCLQBLKHAGQTMPEMISUYHFRVIFXQYGZXIVFJOQURNTNTHYLQYEDQDAXQBVZRYXSOJSRYPFJBLGOOHZGJCZQIXLAJHUPVYSHKTPTNHMV");
    msg.max.assign("LZWMZLNFGKSUXKXGIVNDKYFFCJHNHOIQFALFZMPXDNKLMWBIETRKSNEVZTCNSQEQWVAWVLGRQBDJESFSBWXYUVROIUOLMTGXUXEJCOBUWCWGPUQZDJYZOAAYYSXJIMJOTPEHTAPYCKNZACRVTKRVHKMRMKXAGQIAHYVPJNUQIRLSHAXRFDPEGGBYQTJNPQJL");

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
    msg.setTimeStamp(0.5223505751283114);
    msg.setSource(52515U);
    msg.setSourceEntity(125U);
    msg.setDestination(41088U);
    msg.setDestinationEntity(157U);
    msg.name.assign("ZFPHCMMHMTRSKEXSUSFRDGAGWBIZQETPAJDW");
    msg.attr_type = 228U;
    msg.min.assign("DBEFIPALRKRRMUDCKEWXTQJSLUQUJZNVBQQMJDPJZCNRTVOVDAGBBISJHGRZVNHCXVZYMEQCBLYJDLCIFSOIJBFKLFPVECHZGWHUFKITNWVJOTGCTYWKXYFLXYHDSORAITZTSNLYEOOPKVQWJAQFXAEIDBC");
    msg.max.assign("SBUFMWCAVOWIPCEIHHHZTXSDBIVLUUNMCZQQEGFLFLFLWTSWMUXUOXOMSJAVVBUIXJWRYETQURHDFRGCEGKLGSYPRMUKXSORJRIPRHAQKKPAZQWGNFNPIYCJFIJEXMJTINRVYWHEZLXCZOKBDFCSNKPYBNOTXBGVQKKSQJTNHDZNCKPPROMFQWCFHIIEBTQBLDDVNYZMLOBTLAAALKJQO");

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
    msg.setTimeStamp(0.6368145383044003);
    msg.setSource(50935U);
    msg.setSourceEntity(87U);
    msg.setDestination(36668U);
    msg.setDestinationEntity(31U);
    msg.name.assign("WHQJFTDTXGQLAHAOASUVWPPNHAOLWSKQXEVFYUYOEMQAJEIOZRFMKVJBAYRZOEGRQXVMBRLDECTCSCTEJNITLTRIGOCALAHQCJKYJAZROETSRGKJUIDVWUIBBZRXHBRXVWNWJGZZFSOMFXGGMFMKCPBJCDUPWPYKSDYPNZCTKFQOLJSBPNZNMAUIMEYYLTPVQ");
    msg.attr_type = 30U;
    msg.min.assign("LHBUMXDKONRSNWYZVZZCRRHCUSHWEAEOZSYRYRFICSYVMNUYBKLAFUGQKXGCIZVYNYUCSAFPGMQBSPMDJPLAPOGBIEMINLTGWFLZFFQUVMOPGDVTDVFIBTJXKQBIHRPAUIWDK");
    msg.max.assign("UPQVANMDJPZLHNNFQIZDREYABVZJRIPWDMZHIWDCUXADUYDTTZGGKQGUHXTYCBYHWOIYUSIXHUAJZBSRGSGFQ");

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
    msg.setTimeStamp(0.6580261592106883);
    msg.setSource(4753U);
    msg.setSourceEntity(55U);
    msg.setDestination(36671U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("WJXYWVBFWFJLKXMBYORZDQYACAIXFIZ");
    msg.predicate.assign("HRZHYKBYWWUISJEZTKDBTIKNCERRGNHCHDJHDFTGYUJTRFNNGOWMSOG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QUQFTRVHBWQWKNOPVOCMSYRFSCTMTTHGGZNSBPAUOFTXSMCHZRRFFKWUZOPMGWKODKGYAHAQTLJIULCHWOBRMANJILCEBVPSARXSERQICAKXZWMCOIVANYSCGQTSNGUDUVROZOFLYSWZPEHXFCHJFNXIULMXSILEAMQEVEYUJKXBJNGTQFDBWLZALGBWJADXDDBYTYXQPNUIPVHPJXNJUIEPKWKIBZ");
    tmp_msg_0.attr_type = 95U;
    tmp_msg_0.min.assign("KTGLIYYCWMQSZZEUMCBOJNXCDRVKQKYMFNSDAFFEAVKQGTCGSBNOQIRBIRXNQNGGVTHALXMSBNNVFCFZKYYSDDADOXHDZUIUBXHSFULSJVHDWVPKPPIGHSPUUIWBPCIDJCAAOULOZHRLITVNAUWYKWDESZQOBEQTWTJAKLOOQZHVFHJLO");
    tmp_msg_0.max.assign("OVTETDHPJOXMYVZFILFNAOPBSZZLTRDJRDPBIYNHPRIBSZKVTIEAWBQOARAMEEDVOIVYQXIMYGKMHQMCBTJFEBTFIBUSQYKGJJJNKUYTCEMJHDFXNBWFKVCVUWLCSGPIZXSNALLVIOLQLCRRROPUTZOXEMVQDWCKEFGGUFUXAUSHANOHQJCKDKJGHTPURPVNRWNLCLZDFZNSSQSAPITZXCZJHSGUHYWAYXDYBMKWUNM");
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
    msg.setTimeStamp(0.42175481532030834);
    msg.setSource(34375U);
    msg.setSourceEntity(60U);
    msg.setDestination(13112U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("VLBBOSXLMXOUPDRPKDJYIKZFQOIMIUQVFBGNQWWLECABYJOJBESNUKF");
    msg.predicate.assign("NZBUPQCQXVMQKGEJYVZYWERDIDXHUJGIGDSPBEFIYDHKJKWMUOQEKFWZSIRJFLZKNU");

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
    msg.setTimeStamp(0.4490168269956022);
    msg.setSource(63723U);
    msg.setSourceEntity(150U);
    msg.setDestination(26973U);
    msg.setDestinationEntity(43U);
    msg.timeline.assign("JWRLMSHODMWFGUTXZNVEAPCWRRJRNDBBOJOPKQUE");
    msg.predicate.assign("QBDRXDEEVXWKQUJYIDSWHBSQFGIDGMCBZQNITUO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ONVTFGSXRPPMOAVCFFZXKMXRUXOTSBVYKGHENQRDGZEZAVSAHEUTZLPXHCIOFQZQOQLKMJKNPWYJWPGMNQCXEKLFMSGZXNYSDPNEKMXJG");
    tmp_msg_0.attr_type = 243U;
    tmp_msg_0.min.assign("KGSAGKOFVVERJAHNZQZBMTXBEAGTRMCAIMDADRWKZIQIANPRBFUNDGMYOYJQALCJXATFJYWFMXPZIQBRWPMNLWHMSVPYJVKVSPPKUWGWFNQDYLEBJIYUNLDTHRNXCTPSKXOGHCZHKRRACUEWUBCLHDEQBCEXMMHGQECONVPMHNBKVJGUUZCZUTDSIFRYTVSIVWVDLJKYFXNCPTOWZRFHQWDQDEJZSXLXBLIUGPLO");
    tmp_msg_0.max.assign("ZWMNUWVJNQFHUTFBKGYWVUXDSPRVDNCHLMXSBRKWOVTJKVQPZPTAPHWLOQSASKMTFVBEHHOCNAMQMHDRXNDZJENYGBJIIZXCARVHFGZULXEHQULIITQZORGIGBYAMIYVSSSONXGWDYEOAVZJXGXICDIHXKQJRLMKXUKNPYQRSEWPAAYLJJPMFOQBSLYTCTDTGCEZNTDKAFRASNEURBDOBPMYWWPROKJGFGIKCWFBZLYCEOCMTE");
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
    msg.setTimeStamp(0.037680439084661455);
    msg.setSource(53157U);
    msg.setSourceEntity(57U);
    msg.setDestination(14152U);
    msg.setDestinationEntity(211U);
    msg.reactor.assign("WAOIYZJEIODGQRPJNVRCBZACLDQXSROTWKTRODSZOHEIPWUVTPKQBKLLYEJSBCKJJDAFMCUSHDEBCNWPYHGLGLCSHYXGOLPVXTFMJZBKYEBJOSNWZTNGFRCVKIJWRNGABXINUZOAZZEYYXSUPMFCYDDXGLAXIRHHMEVATSQKJVFXTHOKJFFVGRQQISIWVRMCWITKPU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UVHQTRYIWVKMZVTTYHELSQMLJZAFVAJGGCZPKMOMTGVGKVTCMGPNZCMHSNOWNZZXTGDGNBPOUHRQQDZAIWQDSBCRSLAPRIZLARFOQWIBDFIEFOLNFDYDKMPKLUOEQYFSQUNEFNLHRREJSCJZHSOEEJJBXMZPVH");
    tmp_msg_0.predicate.assign("AFPXEYMCTUKXATKPDSBAKUSXCCWQHMOXCONVFOGIEVVBGMZDBIPBGTAUAEPCPJRSUSNOUQJWFKJFHVSWMMLBHLVPHHMBNIRLKMPETRDTHQJDXULSJAUSQZVGIUITWFBNICSSNNTZYKNAHYVKZFDOZFJHOD");
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
    msg.setTimeStamp(0.2381151019214428);
    msg.setSource(54498U);
    msg.setSourceEntity(228U);
    msg.setDestination(44824U);
    msg.setDestinationEntity(161U);
    msg.reactor.assign("SQNPLYXBWWPEGINXGNBQPOIHZTWKJFCXDPZYWDESAUSRQQYPARZVMWORPNHZZKUIYDEFRVYAQIQDTOEQHMENAHG");

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
    msg.setTimeStamp(0.7935860609757596);
    msg.setSource(4333U);
    msg.setSourceEntity(233U);
    msg.setDestination(54655U);
    msg.setDestinationEntity(81U);
    msg.reactor.assign("NCAJZYJTXQDSMDMBDDPLGOGNPQCYQPJDFFWCNALMQJZGYTVSEAXOEUPCWUWGMIHYVKGRELIQHSUCBEDNIWXHOBBOFFJPZKIKVTPTARLCTKFQGOLVHVOHPVTPHOCKCISFYQMXYUYAUHJAZEABRYKWSHHZXOQNZJZEKATSDLTDQEWSSAOURHFJRICRRMFEBVKJSXKRTQU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ARSNWTUOJXZYDKWCFVLWUWUFKZUCDCMGEOQWYSCUMSHOXUEHATULTPZYKSPXRMMOAGHFMBNGJDBNHCFDUBNQVNCPXPLGBTFHZWKAEGIFSMOHUQRQIMJWJDKSOMYVZPFLRCRGZTYJSIMSQPOVBOGNIAT");
    tmp_msg_0.predicate.assign("VMJVMUBSNSRIIISLIQJKGSPTUOASFQTLIEJJIGHZHOKCZFNGBOTDXUVEQKCLQCPTDRYWFVKWKUQZZNNXQLUGCPECYDFUNNHTAYNJWCLTXRJBBDWKYZKWKHVUXTLAAFTCBCSMIEXGORTGOEPXFJ");
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
    msg.setTimeStamp(0.4083005716201249);
    msg.setSource(62902U);
    msg.setSourceEntity(138U);
    msg.setDestination(65300U);
    msg.setDestinationEntity(229U);
    msg.topic.assign("CEJHYETHPUFEATRBWQHFYTDMSUQQQPTYWVGKOKCHCIMSGUEAGLBKVWBFWZTEYUXQVLJSLOFGZZDGUMAZQLMJZHHXVBXKCRJNKEWXOPNNPHOMXBFWUYVIBSZOFQMQRIVKOFRBCNSA");
    msg.data.assign("IZPMDLJDYXREWUAIAGWBHUDDJLSKQWCVAZVXXGTPUYLTFMKOZESIWQWFCALISPZOTPMXFBPWECGUQQAIWQFIGBECLHMXFONJGYRERKAGFKTAZRVHOJXNMACJYOXSIIPSLQYYPTXYZFQKVNVUINOKPGOURHUBNFHQWVJZSCVINVOCMSQQR");

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
    msg.setTimeStamp(0.7654679360611919);
    msg.setSource(21954U);
    msg.setSourceEntity(13U);
    msg.setDestination(18162U);
    msg.setDestinationEntity(18U);
    msg.topic.assign("HFSKYOLHHWBXMULMKCPJBAJLLPYYRZXITOVPDWUVJIKZXMGLCDAKMPMOCLFJFMBQAEENJLFNRAKSQTN");
    msg.data.assign("NAFULVAXXVAXTLCAUHFZSBIWIXITMKZGDGGNTWWBMODHUZYXZCJVXME");

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
    msg.setTimeStamp(0.375863094736564);
    msg.setSource(53532U);
    msg.setSourceEntity(48U);
    msg.setDestination(34665U);
    msg.setDestinationEntity(47U);
    msg.topic.assign("CQULIIOXTMAIQSRNFXD");
    msg.data.assign("MQSRTPXIKAYMWHJSTAIJBFZXEWADCQEATGVLGN");

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
    msg.setTimeStamp(0.7876689577191481);
    msg.setSource(61237U);
    msg.setSourceEntity(128U);
    msg.setDestination(45650U);
    msg.setDestinationEntity(21U);
    msg.frameid = 77U;
    const signed char tmp_msg_0[] = {87, 94, -41, -123, 126, -5, -8, 100, -95, 119, 111, -49, 9, 16, 79, -54, -7, 91, -90, -105, -60, -84, 109, -116, 108, -17, 4, -40, 101, 61, -16, -87, -71, -126, 12, -40, -108, 18, 84, 19, 64, -2, -87, -43, 102, 25, -114, 90, -6, 116, 11, -123, 85, 22, -76, -114, 28, -63, -9, -83, 40, -124, -78, -70, -16, 81, -83, -94, 38, 55, 9, 92, -16, 67, -58, 102, 99, -78, -82, -46, -11, 105, -42, -29, 79, 63, -65, 57, 121, 85, 16, 66, 10, -71, 100, 31, 121, 69, 10, -34, -42, 84, -39, 65, 102, -69, -39, -120, -104, 22, 7, -60, -118, -74, 120, -84, 22, 1, 122, 76, 68, -37, -113, 68, -38, 9, 35, 3, -94, 54, 122, -86, 84, 16, 65, -34, 41, -62, -97, 99, -10, 92, -50, -54, 83, 105, -103, 113, 38, 38, -120, 41, -51, 124, -80, -26, 26, 103, -99, -42};
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
    msg.setTimeStamp(0.8856172238621278);
    msg.setSource(8778U);
    msg.setSourceEntity(129U);
    msg.setDestination(44933U);
    msg.setDestinationEntity(21U);
    msg.frameid = 111U;
    const signed char tmp_msg_0[] = {-101, 126, -115, 5, -47, -104, -94, -25, 38, -78, -62, 14, -62, 93, -93, -124, -111};
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
    msg.setTimeStamp(0.1944348344257386);
    msg.setSource(24124U);
    msg.setSourceEntity(24U);
    msg.setDestination(11817U);
    msg.setDestinationEntity(55U);
    msg.frameid = 110U;
    const signed char tmp_msg_0[] = {48, -105, -65, -22, -115, 30, -68, -14, -74, 75, 72, 40, -50, -19, -117, -95, 15, 87, -117, 56, -124, 29, -1, 94, -51, -64, -59, 39, 25, -106, -114, -59, 55, 99, 114, 111, 53, 59, -66, 74, -95, 77, -42, -4, -105, -127, -69, 124, -84, -128, -36, -98, 50, 125, -109, -118, -100, -63, 50, -104, -7, 27, 74, 28, -89, -38, 14, -126, -75, 77, 20, -80, -116, 113, 79, -101, -72, -27, 79, -103, 64, 16, -40, 30, -89, -72, 119, -16, -54, 3, 48, 114, -72, 5, -45, -53, 88, -106, 30, 63, -47, -43, -58, 91, -126, -76, 97, 16, 104, 82, -17, -21, 54, 56, 59, -35, -120, 105, -96, -11, 109, -26, 24, 49, -11, 86, -16, -12, 65, -19, 34, 26, -56, 28, -5, 6, -89, 120, 43, 32, 86, 111, 16, -58, -29, -89, -68, 42, -95, -34, -49, -29, 31, 18, -4, 66, 72};
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
    msg.setTimeStamp(0.520392496584279);
    msg.setSource(46314U);
    msg.setSourceEntity(222U);
    msg.setDestination(48323U);
    msg.setDestinationEntity(5U);
    msg.fps = 92U;
    msg.quality = 117U;
    msg.reps = 80U;
    msg.tsize = 59U;

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
    msg.setTimeStamp(0.6556533845539758);
    msg.setSource(9367U);
    msg.setSourceEntity(105U);
    msg.setDestination(57836U);
    msg.setDestinationEntity(207U);
    msg.fps = 111U;
    msg.quality = 181U;
    msg.reps = 73U;
    msg.tsize = 242U;

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
    msg.setTimeStamp(0.9939393458720599);
    msg.setSource(45138U);
    msg.setSourceEntity(86U);
    msg.setDestination(32659U);
    msg.setDestinationEntity(138U);
    msg.fps = 152U;
    msg.quality = 109U;
    msg.reps = 212U;
    msg.tsize = 49U;

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
    msg.setTimeStamp(0.4848307685264369);
    msg.setSource(15539U);
    msg.setSourceEntity(32U);
    msg.setDestination(45941U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.0017286926404186387;
    msg.lon = 0.41493970063390717;
    msg.depth = 118U;
    msg.speed = 0.2459826531771454;
    msg.psi = 0.7501504478742853;

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
    msg.setTimeStamp(0.08653637203154396);
    msg.setSource(60291U);
    msg.setSourceEntity(26U);
    msg.setDestination(28501U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.23688895018426992;
    msg.lon = 0.7426219060337786;
    msg.depth = 168U;
    msg.speed = 0.8669832827424518;
    msg.psi = 0.3893178553344945;

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
    msg.setTimeStamp(0.559877734210107);
    msg.setSource(31773U);
    msg.setSourceEntity(40U);
    msg.setDestination(46815U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.05036471735581438;
    msg.lon = 0.7591104392638958;
    msg.depth = 44U;
    msg.speed = 0.12741414526572525;
    msg.psi = 0.8809255701261238;

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
    msg.setTimeStamp(0.43005332279501185);
    msg.setSource(43330U);
    msg.setSourceEntity(85U);
    msg.setDestination(27695U);
    msg.setDestinationEntity(228U);
    msg.label.assign("DSFIXCEYMMIXGQWAXLETZWRBQUFWSXTVRHPPNOMVGZIBHNVSKKFOBZQLQVDLWVOJFQBNKPJHXCYSJOGPVAGJYJHVUWAMWKMYBPZDAWYAEYBBHSSGRFYZMLCYSTLEUVOFDMFKDOUHBGEDRYKRJQQLTUMA");
    msg.lat = 0.539089151987238;
    msg.lon = 0.9338068816898247;
    msg.z = 0.3936681870681712;
    msg.z_units = 208U;
    msg.cog = 0.28697763629292383;
    msg.sog = 0.5990292373152407;

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
    msg.setTimeStamp(0.940603537838573);
    msg.setSource(20962U);
    msg.setSourceEntity(136U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(106U);
    msg.label.assign("FCKDJSGYXSKFAAQEYXOFGK");
    msg.lat = 0.7804428804666826;
    msg.lon = 0.660468954389078;
    msg.z = 0.14120159149756295;
    msg.z_units = 157U;
    msg.cog = 0.4502472111457827;
    msg.sog = 0.39602321105034544;

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
    msg.setTimeStamp(0.9600384754904098);
    msg.setSource(40351U);
    msg.setSourceEntity(94U);
    msg.setDestination(9303U);
    msg.setDestinationEntity(158U);
    msg.label.assign("VUYRNOWAPYZWOTPUBNQXFVLEWFOYOZAF");
    msg.lat = 0.9016990307039684;
    msg.lon = 0.6251316354470795;
    msg.z = 0.34616496791534934;
    msg.z_units = 219U;
    msg.cog = 0.8934938827440683;
    msg.sog = 0.1971645965925971;

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
    msg.setTimeStamp(0.2973134094372982);
    msg.setSource(12833U);
    msg.setSourceEntity(239U);
    msg.setDestination(26146U);
    msg.setDestinationEntity(113U);
    msg.name.assign("OUPINDYODFYPZFTHWUZJXMOBSFDJTFUPVXNHJTLQXOMKVWSVJRLLYHRCBCCBYDGWKUETVUMKNCHTLLVWNKKBGPMLFPJPYUCGLQVSZHSMVXFGAXPGWLQVSQBFEIBCHCJBDQWMZINCZKPWJOTSSSGIEDZOAYAAVGOBHPTRROAJANYQMMXNDBIBYZNXTRHITJRZMWCXRTRR");
    msg.value.assign("GKJUFRUOPLAV");

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
    msg.setTimeStamp(0.43230691714878);
    msg.setSource(22126U);
    msg.setSourceEntity(112U);
    msg.setDestination(62691U);
    msg.setDestinationEntity(238U);
    msg.name.assign("YHDQDZZPCYUIWTOGRFJ");
    msg.value.assign("BZLXSFLCGATDLSYMTTQUNEKQWGYXJFIDCHJEAQXVWBXHNKRMBBBKSFLKNLUJYIRUDYTPVPTHVHCLNJWPIXDBZJNQPGRONFYVYCPNEKTFOWIDNUIZJWKRTOJOAWOWGWQUZZNADRCMFEFSDAFSKWAVZPSUAUJYCJYKHGRVVPAEVZHUUSQSQBYLBMVUDQSBMXXEAOGLEOAVGWHOKMFRMKIZLXNCGPIQGTPHYQ");

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
    msg.setTimeStamp(0.495098919269536);
    msg.setSource(38012U);
    msg.setSourceEntity(27U);
    msg.setDestination(28507U);
    msg.setDestinationEntity(121U);
    msg.name.assign("GHHXAIGJCDSOUCLQKSDBUVWQ");
    msg.value.assign("FRQKJDWEFIZLACLWZCUGKEZNNTVBFOHKGUUABNAJXTAVHYGPJNSFSALIXZLOBNPMHQDAYRCTGWWPSSTRVQXWA");

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
    msg.setTimeStamp(0.9094894311285743);
    msg.setSource(34823U);
    msg.setSourceEntity(14U);
    msg.setDestination(3885U);
    msg.setDestinationEntity(85U);
    msg.name.assign("HCZYTTVCEBWEYFOKFSJRNJAJJXZYPIYMTXVKEZZAYXHHMHLGMLZUEGUWBKZOIUNPVMWYNHXZAOQSINXGCCCTIDDBMKRVYFEBSFSGILCXFQQCMGUPOBJNPMRPOLLELERQUYZBXFQRWRFBGGAIKULLCVFXQKJPOQPRDQRTEUHNDDJSBMI");

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
    msg.setTimeStamp(0.8050603249558113);
    msg.setSource(43600U);
    msg.setSourceEntity(83U);
    msg.setDestination(6398U);
    msg.setDestinationEntity(64U);
    msg.name.assign("ZBMCJRDEPYYOHFWFOVHOIZHLBSWFANWIRXPGEURXXTUWVRYRGQDVVIFCKZAQIBUPGOJEHBQMIEEUUNQSPNQYKTTMBAKTSDAFSZZTXUXEURNCBEYDLVBKBKLYSMPNXCPRJWDIITRLYVLJLQGYAGSETQUFQOIZWMSXQKVWZKFUMROHYJPXLHCAVAZISACWXTFNJOQDPWDPKLZTSYLJMEHOSVXDGHOHAKJBOCJCHVBGKUZDIMGLNANDMCGRT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KLTOFPONYDUKLUNOJLHQSWPYMVSJRICVTPIFMUZEIFGHCHILKNVLKZZLQFAYBYDRZBCAPKTHJGSKBTFVLTYSMQVDPJUKMFVWNSGNIHDAOYKQPPNHZRIABXNJXFERDAOWGAQYGZBVDVAQPNUHZUGOXIYJPOEASEAGRDREFBTCYXXIWRWRCPGQBTOOERKGXTWSCDJMCVFMSQFICMJUEQ");
    tmp_msg_0.value.assign("SWWJORUVYXYGHMOLUBACHARXUNOFTVNMPEJPUIIQAAHGAXFUZPPYCSSCFTMHEVMCKUZZNHLPKYZZQDORIKJDSANHDUCTNFITFNSDGROZOPYWMSTWELOFOSACMKPHSREUMERIGFDNGRSVLM");
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
    msg.setTimeStamp(0.49014301799171633);
    msg.setSource(5438U);
    msg.setSourceEntity(102U);
    msg.setDestination(52817U);
    msg.setDestinationEntity(225U);
    msg.name.assign("NUGHCGUIUMNDJRNNKCAPWBJIZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EGKKKEGGUGQRTMUYDCYNVJHZAJVFEHAWCOGMDUMIDPUWTGPBWDFKPNHGUPSJRCHTSQSNUWQYABMRXYPEVPBMTIONIAUVRFPOVIOBTXYCKMJQSSDTESADKQHEFINWMLQRRZCJOXHRDJCLBOCQMADESZDRZMIKVVBLUJZAHYWXVXBFEYNHEIGSAXKJIXKZGHTTLITYPNCNFBFJRNFASWMKXVCZEOHRCYFQUOPFUGS");
    tmp_msg_0.value.assign("ELNCIEDWZRGUKVCANMJNAQINNKIHOSWQBTZXLJRZURDTMRSCYYJGLFNCUKPSCJVIPRGWXBJPDWNVTBYWIVOIMNYMGMFAMOOEUWBLXLPIWBXEFHZSQFZHXBOXSPWKFNEMFPFCGPLEUJJSXAQYZJOABDDZOQZGMO");
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
    msg.setTimeStamp(0.2990265895765958);
    msg.setSource(7763U);
    msg.setSourceEntity(84U);
    msg.setDestination(40719U);
    msg.setDestinationEntity(40U);
    msg.name.assign("XWGNLHQPRXCUTLVMLLOPDJHRPRVUPIZCYHUYENKMQLITWGSYLNX");
    msg.visibility.assign("IWVMJAZIPVPCDVCWIQSFRRZADKBHMUEHYOBDHQOFVOJDPJXFLGCSVNCTGQATAKHCMLUHMZRHWRXPAELEJUBUPLQVKTMNT");
    msg.scope.assign("DXRPTBYCKVZZYFJYTZRFHUVCOIAHTSXYHXE");

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
    msg.setTimeStamp(0.22150047154782293);
    msg.setSource(6597U);
    msg.setSourceEntity(35U);
    msg.setDestination(43219U);
    msg.setDestinationEntity(3U);
    msg.name.assign("VESXCDNUDRYOOLXHHAKSRBWCUKOFQNKBLZHCNEYROYYALJITGSJRDQUDKMIBQFQJATHBTKXRDGYMIVWLKZSMVWMDDNZPMAJULGNWZDRBMFNEYISOKPBNOJEUSPIQYLVCHASEXZUTOJHIFBUMWCOUIDTGEQULCXTCPVUYSQKMPVSQCAAWXGVNRXHJTEOFQPRQKYXMCYEFGBPNOIBPJJPHXTWEMKGDHLITHVTAFWGLBXFZGRWFZSJGAZV");
    msg.visibility.assign("IPWDXTPKPOEELMCGBLQSYASMFEPIGRCQKHYTJSMJQZRWJYIEBSHVKMAHDKIJYZTMBWCLJGRDKSOPVWQLVDXVDUGJCAGKLHINXYSGCALPQBXFNVGMKXKYAQUJLHLTRZDBNTERZNUSOMSIG");
    msg.scope.assign("VNARFKBYHKPQFLGMNZWELYOMHTIDJNSAEZHVPQBAKPJNRQOVASIUSRLKW");

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
    msg.setTimeStamp(0.36859398297486856);
    msg.setSource(61493U);
    msg.setSourceEntity(252U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(45U);
    msg.name.assign("CHTKDVSBJYSPLESAQCW");
    msg.visibility.assign("RVUYDGNPIYKMTTINYLPRMURUVBEEPVJCNZKTWZXVTMNMHYJYOHZJISECAKPRZXXWFVAHFKZFOOFSCTOINGZBAADPGPXTQNJELEUGBIXZTGWDEFKOJKCURPWXAPCJCQAGNKHMJVYFDKHYFJTHEPVSSLLQMXALJLSDIUOXASEHNUQWGRHFQCABLRMGWWEYQRQQIH");
    msg.scope.assign("TVDQBWSJGJQWZNWIEYIXOALFRATSSMHUXKSWWOQFNUZRKUEHAFFHKFJPORWXULRGKLKOTNDUEHEDIQJCZCIGNKIXHDCFFBZGVOGSAMJNLCEUTCYEOAJCRKOJNWGIPJ");

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
    msg.setTimeStamp(0.29263788234786214);
    msg.setSource(7254U);
    msg.setSourceEntity(95U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(100U);
    msg.name.assign("SUASIMJTHCSDEABVTUZYRVEIAJTOZTZARBQENIPWMLWDHYKGGUTCXRNWYYULIWMIMPUBCUXXJTAZRJXXOZHWALGEECKEONNRXDKHNKYQBIGRGFEGLSHBLPPWQBQDUJPBFXZFMFOQMYJNGAVOWRSVMOONVCSTSSWYJIKEKCFIZQCFPWYFLDFJCSQNDDLA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SYKNEIWHNJEOWGUNNZPSGJDMNTOLDXBHQQYZOLLTKCZDKPTFLVSHNSCBGRWCWIAZMUQKVGAXAIOLBAUYKVAYYOXUHDTCBXQJFDJFHIETMINVDPQXRDBFJTSWROKEYHZCZGCHZOXROHIYBTOPZUGXLAVTJRUFLUQZV");
    tmp_msg_0.value.assign("LVSWCCIZFHTFMOSYRZDIJLNMSFPDLWETSNPOQBPHFHWRKWAWQTSOGDLGIIXWLSDJQJHNYOKVAQJYMENETKWZJGZREICAICMZCDUZOKPSXMULPFXONBKQHRBZTHNIDLFXLFXHPGNIZKBJRBCUTVYQLGZCUDXBUXJVOUVUGTGVWUKSANYK");
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
    msg.setTimeStamp(0.12451645987362658);
    msg.setSource(35111U);
    msg.setSourceEntity(191U);
    msg.setDestination(41544U);
    msg.setDestinationEntity(210U);
    msg.name.assign("BATZDWNQUDNLOQJGTOLDWYGCMKLMAFOKCQXUSBMALOOBNDRWRPTIUYDANZZKJPHPRXVFXSXZIVRHYWYQTCIVLAYYHJKIQQHDCMJV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QOZDZFHBAKEUEMLKNEBYZWAJKCYFRGZOCRRFBYHVRUXXGXMWGDVRPJMWLUSKSBMBMHNUJHWNVIAGZJUDLXJIPDHQALMWAPIDXNQZYURWTZBFMNILATESSFDVCMOUFPYIXRNSUOJQCUTLEJYJEWALPGTCKOBPINLICJ");
    tmp_msg_0.value.assign("RLRSXUHKHJZGOTLMKKXRLOVFXSCAFXMAQOYUZKHERHNMCFZDAYEJZYTYGICABAYDGNNUGEPAHOXEOLGJBVWTDWMESGCJXZWIKAENGUSDRQCISLNEDOHLOYWHGKKFBVTZBIRPDVUMBCSICBVOIQCZTWBVQSINEZGUTXTFEWPKGYFQQYRJAVPXAMWIQMNVPDVWR");
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
    msg.setTimeStamp(0.21496224001498587);
    msg.setSource(28949U);
    msg.setSourceEntity(156U);
    msg.setDestination(21517U);
    msg.setDestinationEntity(213U);
    msg.name.assign("DJCKRMODCSDIKBXDQIXHZDNUBJMRJHWQJOAUMPHZEOKSBOZDORXDQZTLTAGMEGQRGTHQEWHYHYPOCTSIHVEWTOSUKCACRFGNLXFNVPZPSCJVKNAQWMWDPJLNOPQHZYUUFIRRNSPUTEFEBQAYKBKWTIYVLU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QRLOVQCULGQGHHGPATPODKNYZHYJREPLMLANCFEDAPRIIGSXUHRBNKNYIWHEUCGDAYEETJFWFCTLVMIMCEIKNOKNSJWTLHSBZQHESVZFCDKCNLLDBEOVZOLFGDKBMLBWEMJZMJYXFMWGSRIKAGWATRORSXWVYIPPBOJJQTVYSRIDKIUNAXZCBTUXABGPKFSYGZWIZATHHKCPFXMDUODQDWYTMMQJRAXTQNJOZVVQUWFFB");
    tmp_msg_0.value.assign("AXOMVIYSGZXWFRGRAOJSXKWVEKKXFYKIXNM");
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
    msg.setTimeStamp(0.9308256131057188);
    msg.setSource(30003U);
    msg.setSourceEntity(83U);
    msg.setDestination(31282U);
    msg.setDestinationEntity(65U);
    msg.name.assign("KNZEEXYDEXPRAUVNFOVDQWAHUQYQGCHFXBGBXQCXSBHSJXRPNCIIXTJEKWJNHMJOYOECPNRWDKRGTYAXVAUJDISAFT");

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
    msg.setTimeStamp(0.2231616314062923);
    msg.setSource(1738U);
    msg.setSourceEntity(40U);
    msg.setDestination(9657U);
    msg.setDestinationEntity(0U);
    msg.name.assign("QMWLHUBZQBQGKUWQNIYBNNHHFPPMMMSKVEDZLDCDICBCJTIOOJPYGQVKCWKMFNAUSENIHSRSTFNIYBXPJDXLLBDWTIKPMYCODHWUIICRWCAAVJQFJXXWWWYTGFGXXGKXTMOKCOSRUZAQRRTRGAMDQUGLBGVZTLUOFPZUVKSSERDJHNZ");

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
    msg.setTimeStamp(0.7919918421482434);
    msg.setSource(60738U);
    msg.setSourceEntity(182U);
    msg.setDestination(21740U);
    msg.setDestinationEntity(205U);
    msg.name.assign("TMRHMZMWAXKISXNDMZLQPFLHMOFZCQLHACEHYYPFKJTGOESIQFCJAACPWJMZYNPVRXEERGVJZXEIBDUQTZYCNE");

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
    msg.setTimeStamp(0.45035561490877585);
    msg.setSource(14576U);
    msg.setSourceEntity(121U);
    msg.setDestination(4244U);
    msg.setDestinationEntity(241U);
    msg.timeout = 3523773847U;

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
    msg.setTimeStamp(0.03300530620308029);
    msg.setSource(32660U);
    msg.setSourceEntity(223U);
    msg.setDestination(16531U);
    msg.setDestinationEntity(118U);
    msg.timeout = 3450754416U;

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
    msg.setTimeStamp(0.505188305801843);
    msg.setSource(33828U);
    msg.setSourceEntity(103U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(181U);
    msg.timeout = 3828864544U;

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
    msg.setTimeStamp(0.5779303363000616);
    msg.setSource(37577U);
    msg.setSourceEntity(225U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(60U);
    msg.sessid = 3708672759U;

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
    msg.setTimeStamp(0.6965345944144617);
    msg.setSource(16803U);
    msg.setSourceEntity(123U);
    msg.setDestination(21025U);
    msg.setDestinationEntity(34U);
    msg.sessid = 3638796356U;

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
    msg.setTimeStamp(0.014008065860957486);
    msg.setSource(11205U);
    msg.setSourceEntity(4U);
    msg.setDestination(14138U);
    msg.setDestinationEntity(33U);
    msg.sessid = 1901794311U;

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
    msg.setTimeStamp(0.2620833430460565);
    msg.setSource(50101U);
    msg.setSourceEntity(79U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(146U);
    msg.sessid = 3900905498U;
    msg.messages.assign("ILGEMPYHEWLWUIBVQV");

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
    msg.setTimeStamp(0.3740958948007248);
    msg.setSource(14363U);
    msg.setSourceEntity(158U);
    msg.setDestination(42753U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1532503014U;
    msg.messages.assign("QBPADJMTHPHUQXCXTJEYESQMODOJYQSWKENQBLTYRPYVICLLMKGDXXRIJDLPIRJI");

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
    msg.setTimeStamp(0.9385891184334781);
    msg.setSource(58771U);
    msg.setSourceEntity(186U);
    msg.setDestination(11607U);
    msg.setDestinationEntity(18U);
    msg.sessid = 1231432869U;
    msg.messages.assign("MVGIIITSUMQCWRVKYEBASPCWHPMTWNHNURLIDNODIERJQAKOZEUOWCMQRKJHBRBQKJJPJZTMNXAXDDBVWZUZTULRJPKTCLJVHFZZQBHNG");

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
    msg.setTimeStamp(0.9949468148177367);
    msg.setSource(28127U);
    msg.setSourceEntity(238U);
    msg.setDestination(40455U);
    msg.setDestinationEntity(241U);
    msg.sessid = 4024742380U;

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
    msg.setTimeStamp(0.7822397056177608);
    msg.setSource(33766U);
    msg.setSourceEntity(171U);
    msg.setDestination(10597U);
    msg.setDestinationEntity(173U);
    msg.sessid = 3561098680U;

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
    msg.setTimeStamp(0.29641799218265596);
    msg.setSource(44966U);
    msg.setSourceEntity(162U);
    msg.setDestination(31882U);
    msg.setDestinationEntity(162U);
    msg.sessid = 1051547940U;

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
    msg.setTimeStamp(0.0024536864213431375);
    msg.setSource(40549U);
    msg.setSourceEntity(201U);
    msg.setDestination(63985U);
    msg.setDestinationEntity(211U);
    msg.sessid = 3953702520U;
    msg.status = 132U;

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
    msg.setTimeStamp(0.19757746751866534);
    msg.setSource(58154U);
    msg.setSourceEntity(208U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(233U);
    msg.sessid = 907538175U;
    msg.status = 178U;

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
    msg.setTimeStamp(0.2800355744025764);
    msg.setSource(10507U);
    msg.setSourceEntity(108U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(67U);
    msg.sessid = 3097150055U;
    msg.status = 66U;

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
    msg.setTimeStamp(0.29323296811845445);
    msg.setSource(16212U);
    msg.setSourceEntity(39U);
    msg.setDestination(60884U);
    msg.setDestinationEntity(166U);
    msg.name.assign("OFALIUWTFXIBKOLQANDRSSTVNXEIRFJLZZKDAVHNAVCDHPMLZIRFGNNCCBYODSIQPIUOZRVAUNXKSMUTYVYZRZPGMYQMJ");

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
    msg.setTimeStamp(0.8216583249374094);
    msg.setSource(19650U);
    msg.setSourceEntity(84U);
    msg.setDestination(34963U);
    msg.setDestinationEntity(191U);
    msg.name.assign("UGNRZAHXWDZEGEWGJMEUPUFFIZHMIT");

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
    msg.setTimeStamp(0.05543773971351562);
    msg.setSource(39766U);
    msg.setSourceEntity(145U);
    msg.setDestination(13900U);
    msg.setDestinationEntity(87U);
    msg.name.assign("BBXTZFYDTAFIRFBPMDKLXSPJKIYUOHTLOQPCEDXXKLOYLDXTDSNWZJAXJUKCECQAKVPHIFWVAHOICJMBVWCRWQTJPUVEYUAVHVCMAMNLCSIXPJFYWTIZHVODMDJDGJKZHKE");

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
    msg.setTimeStamp(0.9126440186667782);
    msg.setSource(25118U);
    msg.setSourceEntity(226U);
    msg.setDestination(16019U);
    msg.setDestinationEntity(227U);
    msg.name.assign("JITTDGPVIRVIUCAJAPQEUGXJZKOHLFGGYQGYEDJRSFQIAUFICKCTOFHBDEHKUTPRCQPTINBNVDJOVQWWZHSDWQEBJXBMVZXDTYDNBXICJLVGXVRHXZXUHWNLAMPSRQFMNRTAUKYMFSZAOLEAYYWCNJMFXJTLOVPNIOCZLCLFGLXFDBBEONOGMLSQNZKPHPSMRVUAPPGVSIFSORYAMWASHXKWJGUZEEKNMMIOYWWKY");

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
    msg.setTimeStamp(0.12686848098619263);
    msg.setSource(15534U);
    msg.setSourceEntity(148U);
    msg.setDestination(47166U);
    msg.setDestinationEntity(89U);
    msg.name.assign("SSRGZEZXKGLDJTGJQCCGVJVIXPYEZQAGYRRLWUYZHISDHTDITDTWBEOXYVORAJNLNJHNZRVLDCXKSJPIULMOXJOGFQKDACEXHWFFTFAVHYCBVYZMAERCQEDHLMBBZMQCOBAMUFOBUQYWKKERSFIFHMVSALMAPNUNGSKCYIXPFEOZNCIKDRTDSPJXTXPKDEMLTNGWUMVTAEPWWUJWQVIBILSPHJYLZWRUNGQAXKCHOPNNFOHVTOMBZFQBKWYQ");

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
    msg.setTimeStamp(0.680984271015739);
    msg.setSource(60229U);
    msg.setSourceEntity(253U);
    msg.setDestination(30901U);
    msg.setDestinationEntity(245U);
    msg.name.assign("CAVGHJSFACPB");

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
    msg.setTimeStamp(0.7502023672807623);
    msg.setSource(48404U);
    msg.setSourceEntity(100U);
    msg.setDestination(52641U);
    msg.setDestinationEntity(61U);
    msg.type = 208U;
    msg.error.assign("YRMWYQWPZGDGCYBGKBHSUNRKVVQTCEYPENAJDXNQTSQMLEZVYWOIHILTVXBXJHXKNUWUSKCSYUTKPLCNJCJUBMGUDNMVAQAFZUILPJAIRNSSCMDQYPPKSNFYOLRFEIRXKGZWZCQFWMSZJXAHFWDUHDKZVOGHSTVWDOZUBQIBTIJVGGFKBFAFPACQLLBHIMCOZENXDOEJORTORMCXXTBHWRALEIAJAXGFSYPIRHEJTETDYOKVGMFZONP");

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
    msg.setTimeStamp(0.5645172926143737);
    msg.setSource(34691U);
    msg.setSourceEntity(117U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(57U);
    msg.type = 92U;
    msg.error.assign("LTXVNVAFCQIRUTIVDWGZSWFSMMPRZKSPHKGONGJCOTJHWNJPMMSGXUMRHECESKDOADIAXXOCNQIAE");

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
    msg.setTimeStamp(0.0496442813786665);
    msg.setSource(16412U);
    msg.setSourceEntity(103U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(185U);
    msg.type = 64U;
    msg.error.assign("EDGURAICYDURHIMJAHJNWVIGAFNJZTURCSGVOAPNUHOLKFWDJZCQOQJBXKFI");

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
    msg.setTimeStamp(0.7583659129812036);
    msg.setSource(40716U);
    msg.setSourceEntity(232U);
    msg.setDestination(76U);
    msg.setDestinationEntity(195U);
    msg.seq = 24715U;
    msg.sys_dst.assign("NBLBTLKDCSVTGSFWGMXQCRZQIRIYKLPDYCHNWPXYLXUFJHQUQJMDDKKOHVFEGALBXUOFNQJXGTVHBGENKETPAQHEXVYWDKXOBYILWSCRGDKBZZRNQLIZAGKMPLVZOURSOJFPRSPNIAJLOHPQALFTSYRHDJYVKYERCWMTWTQVGUTIHTCZVXZCRUEMXTWAM");
    msg.flags = 146U;
    const signed char tmp_msg_0[] = {-126, 25, 33, -13, -28, -95, 36, -19, 35, -106, -118, -60, 74, 84, 32, -75, 36, 104, -47, -12, -115, 62, -23, -68, 20, -93, -5, 39, -98, 39, 14, -14, -117, 77, 9, -105, -26, -80, -39, 46, -121, 89, 87, -31, -96, -118, 13, 30, 116, 116, 105, -26, 20, -25, -113, 80, 74, 83, -83, -2, 1, -41, -125, -109, 26, -110, -46, 31, 27, -14, -95, 50, -85, -60, -114, -103, -22, -106, 36, -38, 42, 34, -46, -76, -33, 25, 80, -41, -44, -68, -74, -43, 20, 50, -1, 58, -94, -112, -39, 82, -88, -69, -16, 63, 111, -37, -18, -100, 87, 21, -34, -116, -84, 56, 121, 99, 7, 110, 7, -58, -22, -52, -96, -32, -24, -92, -12, 37, 38, 39, -118, 11, -94, 65, -3, -28, -114, 56, 53, -13, -42, -25, 85, 33, -54, 26, -72, 33, -116, -68, 44, -63, -125, -97, 52, 32, 108, -22, -128, -54, 106, -79, -34, -102, -90, 62, -19, -97, -12, -10, -5, 93, 49, 91, -58, -88, -112, 58, -106, 15, -91, 6, -28, 109, 63, 23, -45, 93, -121, 114, -31, -7, -8, 77, -24, 101, 60, -96, 2, 55, 113, -98, 71, 126, 88, 21, -17, 56, 3, -23, -72, -81, 20, -88, 119, 65, -96, 52, -32, 89, -91, -110, -53, 54, -92, 118, -52, 22, -110, -106, 96, 96, 76, 108, 125, 52, 43, 63, 91, 70, 123, -46, -51, -11, 67, -70};
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
    msg.setTimeStamp(0.592435249842469);
    msg.setSource(33139U);
    msg.setSourceEntity(17U);
    msg.setDestination(95U);
    msg.setDestinationEntity(118U);
    msg.seq = 36817U;
    msg.sys_dst.assign("VPAVFIVRNJTOWQQHFNWDYBPFUYGDSOSHGEPQJQINXAEKEGJHLGRRZGESSGQVVREJVBLTXRHIGAUHOYSSYFNKPEJIXXOXAWQLLPCZIAHLNTWPJKKFCZKLXMDMXNWBNKUWKRIYYGNXZWWJMIERISUAZHHZTSCEDLORDOZYDUJBMMCZGVLBTLOADFGBJMOQPCF");
    msg.flags = 89U;
    const signed char tmp_msg_0[] = {-92, -23, 87, 39, -27, 49, 16, -88, 39, -126, 121, 2, 86, -101, 10, 31, 5, -18, 88, 109, 87, 125, -15, 42, -87, 126, 24, -114, 61, -7, 57, 94, -25, 52, -28, 123, -52, 26, -121, 83, 66, -30, -105, -115, 34, 113, 5, 6, 70, -12, 116, 24, 37, -121, -40, 79, -31, 79, 116, 56, -106, -90, 112, 28, 58, 15, 38, 1, 42, 24, 17, -88, 26, -125, -68, -25, -92, -37, 126, -112, -105, -64, -67, 54, -99, -1, 85, -93, 89, -79, -104, -97, 34, -7, 3, 10, -80, 116, -95, 4, -40, 67, -33, -110, -2, 19, 63, -92, -67, -123, 65, 76, 60, -61, -18, 8, -82, 59, -94, -12, 62, 82, -94, 74, -118, -85, -47, 75, 73, 80, 125, -14, 14, -66, 84, 115, 124, 64, 41, 105, 26, 82, 58, 72, 111, -3, -118, 12, 74, -108, 1, 81, -12, -100, -60, -105, -100, 33, 57, -101, -59, -63, -114, 13, 118, 34, 26, 46, -98, 34, 93, -13, -1, -44, -55, 76, 31, 89, -63, 48, -99, -123, 28, -59, 95, 87, 104, 87, 118, 25, 74, 87, 15, 109, -13, -68, 78, -106, 30, -85, 80, 34, 16, 92, 28, -29, -121, -125, 48, 6, -75, -97, 51, -115, 78, -96, 81, -62, 61, 35, -30, -85, 94, 99, -38, 96, 116, 6, -77, -18, 116, 100, -108, -6, 15, 116, -58, 4, 55, -64, -109, -40, 40, 103, -65, -87, 106, -78, 27, 122, -61, 118, 5};
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
    msg.setTimeStamp(0.4106198708719545);
    msg.setSource(2948U);
    msg.setSourceEntity(90U);
    msg.setDestination(31013U);
    msg.setDestinationEntity(125U);
    msg.seq = 5394U;
    msg.sys_dst.assign("JFFLIEUPHYSOZTJXCNFIXRPFJVCCZWQQJAQWAVYSSXZKSQCSMXUZNVUWXGNYXTHPTTFBASEVGKXIKDROECXEBLULGSWHLGCKYPVNKIFPEMBYSS");
    msg.flags = 151U;
    const signed char tmp_msg_0[] = {105, 24, 32, 3, 23, 84, 69, 22, -22, 63, -112, -123, 31, 88, 84, 97, -93, 123, -40, -128, 16, 46, 65, 120, 83, 68, 12, 73, -39, -120, -30, -110, 74, -98, 99, -77, 67, 30};
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
    msg.setTimeStamp(0.45071871373503103);
    msg.setSource(52426U);
    msg.setSourceEntity(142U);
    msg.setDestination(2314U);
    msg.setDestinationEntity(21U);
    msg.sys_src.assign("WMZPJZULNLEDVMHMEKQYAKQOHZSCYYOFIGYWFPKDTODJCKVPMFHWNOWOAAJDVIMFQHDBLRBJLPEAEUNCNWZTBHIOPSNTUSTDKZRHPWZCKWUNZANEIBVRGXXQTZPLUEYCWVXTOJWQHKBGSYMEPJGLDFCLOCLGTMAGXAQXDESAHUIFFHINBIKRUCRIRZSXGAXSRIYQSMVVQUHRRJZJYTTVGMXLBQ");
    msg.sys_dst.assign("YMKGVHSFYADTJEIFVAWICKPAOPJYACTYMLUKUGPVXRPQODPSYBZUAQVYYNKNFSQITSWIPCZXZLUGABDJLNFOEJFHCZFVEZWMMWPPBQNUQBLIQNTZLLXQMETWFUDFLSTQZTEISIHDDCMXAIJOPUVZVHLHRVWOJDRYHETXOMNGXSKQOGLBRRDSXJMPTKRJEINMHUFZGORCRBWAMR");
    msg.flags = 206U;
    const signed char tmp_msg_0[] = {-101, -27, -29, -93, 120, 35, -18, -68, -71, 58, -9, 0, -54, 113, 58, 1, 115, -30, -33, 120, -37, -10, 73, 113, -104, 29, 0, 118, -84, 9, 104, -4, -50, 123, -72, 88, -96, -4, 107, -110, 104, -68, -111, 90, -68, -11, -38, 91, 46, -64, 101, 63, 101, 82, 100, -96, -76, -99, 20, -106, 106, -79, -9, 68, 112, -103, 103, -109, 47, 7, -85, -29, 11, -110, -22, -88, -45, 92, 29, -109, 94, 95, 87, -21, 14, 0, 126, 120, 11, 43, 91, -21, -58, -23, -47, -65, 3, -2, 117, 27, -125, -10, 96, -15, 85, 55, -59, -36, -20, 27, 1, 34, 58, 78, 30, 87, -95, -57, -110, 22, 125, 68, -37, -51, -126, 58, -34, 53, 54, -74, 90, -53, -43, 77, -56, 66, -70, 11, 22, -19, -104, 110, -43, -123, -48, -90, 43, -10, -89, -101, -108, -112, -105, -35, -120, -57, 26, -71, 52, 78, 32, -30, -19, 90, -69, -52, -113, 102, -98, 30, 115, -101, -48, -121, -115, -15, 13, 103, -47, -123, 28, -15, -87, -63, -5, 30, 91, 73, 55, -94, -30, -120, 73, 106, 96, -53, -81, -48, -98, 120, 33, 32, 123, -19, 125, 73, 92, 16, 1, -95, -109, -52, -14, 106, -78, -108, 68, -53, -61, 111, -106, 104, 116, -45, 119, -121, 48, 21, -28, -118, -105, 49, -32, -68, -123, 107, 102, -67, 69, 94, 11, 79, -14, -106, 19};
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
    msg.setTimeStamp(0.6603385646931521);
    msg.setSource(51804U);
    msg.setSourceEntity(115U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(23U);
    msg.sys_src.assign("KYGCOTYLEZPPJXULIQUQPZKWNUZGZQGHJHQDRWWXHIMCGNCIBFONBDPHMHFVUILMDNESDVZIRDEKIMALBEJAUMGXJESTHEYXRVBMRTDJHRXYTTUIXZYBUAKPONPJQTOTFCPQOEWPAQLFCEJFKIAIMXPNNORFSRQZKVCFYVVGSWBTQHOWAAOIW");
    msg.sys_dst.assign("VHALVIDNBSWMUYELNREEAFLKZOUZITJOFDRLPACOMYMSKNHCHEZUPJJEBADMRDHLHQXIWXQTWPMPDGHHZEVCQRKYBNDMBMNTALNOKZKHZBQWFIMBGWYGNLKEZAALIFWGYFSTSKCMZDMS");
    msg.flags = 81U;
    const signed char tmp_msg_0[] = {-32, 48, -84, 58, 67, 53, 12, -63, -118, -4, -42};
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
    msg.setTimeStamp(0.21523580735740344);
    msg.setSource(32148U);
    msg.setSourceEntity(56U);
    msg.setDestination(16425U);
    msg.setDestinationEntity(213U);
    msg.sys_src.assign("JBCXGKAYKPOIXTGPZKCKUTOQUMUALFOQVAPGYQZWVOEWNDLKMXCHCWIRXPLUVDJTJYYXLZKYPIGDDYUYJFBIDEWYBBPRHABULOSFVHVRWORCRCUGHJJ");
    msg.sys_dst.assign("FVTCAFBIQAYTKPGXUAKVOQWCZMNUPAZLWCVRXVPWDJSXKGILTQTFNANQPTGVOUQVPWDOJIJDGBMHDWLTSIKKYIJJVYAEFYYFZXXSUHZFMDTDQV");
    msg.flags = 223U;
    const signed char tmp_msg_0[] = {61, -126, 111, 40, 71, -107, 30, 88, -30, 52, 3, -16, 8, -33, 74, -21, 66, 64, -85, -106, 41, -117, 23, 79, -120, -126, -67, -41, 69, 18};
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
    msg.setTimeStamp(0.9036561144285673);
    msg.setSource(32867U);
    msg.setSourceEntity(88U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(26U);
    msg.seq = 23220U;
    msg.value = 176U;
    msg.error.assign("LDUQVGONBSAQGWJKHHMRHNTHTCIKKBXSICHOOFQFTRBCIBRWAOENJVMBCBANJDTMTOSSPPDGQJMELPMSPQSXRIKTXHTNUOQGJCOD");

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
    msg.setTimeStamp(0.10683931151272164);
    msg.setSource(5969U);
    msg.setSourceEntity(39U);
    msg.setDestination(62349U);
    msg.setDestinationEntity(80U);
    msg.seq = 35241U;
    msg.value = 48U;
    msg.error.assign("FSKOFTHXRRXZCJHIUCRMIEBQMIMFCUTWCGSXOOWLTHVFOLDFSTKDQBBSLHCYJSVQQLTKMFLWYJKSXUGPKLYJNMEBPVSUAQERVAKVJYEAOWCXPONNISQBJOSTLDWHYZCUHFCORTDKBPTJHEORDRNKDMGHNEAEAWXHYGPPMUMVNNURFIAIUGDEGTYXZQPGIMODLIJIPBBJWUVFLRQTVQYXZGPFWAXN");

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
    msg.setTimeStamp(0.5128348781976733);
    msg.setSource(11778U);
    msg.setSourceEntity(232U);
    msg.setDestination(27857U);
    msg.setDestinationEntity(28U);
    msg.seq = 902U;
    msg.value = 178U;
    msg.error.assign("ZHWEHBLGBJQKAONQTNZQZMGEBPESNTHEJ");

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
    msg.setTimeStamp(0.22460900683831553);
    msg.setSource(4150U);
    msg.setSourceEntity(135U);
    msg.setDestination(55782U);
    msg.setDestinationEntity(216U);
    msg.seq = 4930U;
    msg.sys.assign("DHOVDXATXBZSEWYFVIVHOJQBDWSMZBKJIGIWDFPWLNASHHQRDJTOPTJMERSBJRCOETXPAGRVZEDHFEGAMFIAMNLFUVQJAYRVEVCKMEILBOLLCXKIPQTNYSVHTYUJFMYYWMLWAQJQCXQXLCFKATSWINPBDKOZUWEKUGPPRCGRUKLXSCZCGUBXOQYFPFNPTRBAGIFLRKESWINDKXZTUMBGLAZNNUHQCHKOOWIGHZCTN");
    msg.value = 0.22321215464289101;

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
    msg.setTimeStamp(0.9054896049340311);
    msg.setSource(25148U);
    msg.setSourceEntity(49U);
    msg.setDestination(43967U);
    msg.setDestinationEntity(155U);
    msg.seq = 34092U;
    msg.sys.assign("DSTMBVOWYRLFPDAXBCNGWMFFOMLQKSBZESIQUDIPWTVXYXIPBKGIKTGBXPAHHBCCGJNEYXDQIYWUJZYEAKZRPXBJYAYHTWVFMQZHUYOEMJOSIVEVNZQTSLKFYEHLZFXFAJQUQWBKLTPQVGUXDJHLOBCFCGRVXAXRGANFWWJKM");
    msg.value = 0.9762941394095105;

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
    msg.setTimeStamp(0.7221658953507853);
    msg.setSource(32379U);
    msg.setSourceEntity(3U);
    msg.setDestination(29579U);
    msg.setDestinationEntity(176U);
    msg.seq = 48651U;
    msg.sys.assign("FQNAYIFURQZHEVBWVCXTOGXWSAPXSJAJDJUDMAGFOLGNXYRONDTPSMERLECUPMXLEELVFCEUBVIYMDKGZOOVUFKFVTWITHOVWPWZKKHXECHYSGICHBZHGAQRMVJBLTGZSCJADQYJSZWARNIMBIJAYPOQPPMDLLMUZSRKYXPCRSUIWNNTMKFZQGATTBQDNVQPHILSNKXQDMSFDFZRZJR");
    msg.value = 0.8661645256118694;

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
    msg.setTimeStamp(0.01809183007906756);
    msg.setSource(37788U);
    msg.setSourceEntity(22U);
    msg.setDestination(55350U);
    msg.setDestinationEntity(128U);
    msg.seq = 16635U;
    msg.sys_dst.assign("ERFIVTPPXLMWIJRHTBSXRWSLLHYOFZKDKPTRMJHOHVQSMNVRSGLYCRCX");
    msg.timeout = 0.10534074089833634;

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
    msg.setTimeStamp(0.6881408829155611);
    msg.setSource(64966U);
    msg.setSourceEntity(48U);
    msg.setDestination(64551U);
    msg.setDestinationEntity(69U);
    msg.seq = 34345U;
    msg.sys_dst.assign("NJUREXWZWRBGARTYCIVQSEUBCVWZNNSIPTOEDKNZXNYZQHSSNIVKLVYDYRTRXZYZBJDJUISSRGJZMDVTATQXTIFGWQXMRZAUJBMHZRWMQFKQFYHOUTYCOBKMSDOBKHIGNH");
    msg.timeout = 0.10276816250790699;

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
    msg.setTimeStamp(0.7656264909612737);
    msg.setSource(48184U);
    msg.setSourceEntity(101U);
    msg.setDestination(7500U);
    msg.setDestinationEntity(117U);
    msg.seq = 41346U;
    msg.sys_dst.assign("SGGWRZQOQLKKDOACMKILCQNJBIBLYABOITHFANXGFHCC");
    msg.timeout = 0.558065878161462;

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
    msg.setTimeStamp(0.5759817872510139);
    msg.setSource(21966U);
    msg.setSourceEntity(222U);
    msg.setDestination(20199U);
    msg.setDestinationEntity(193U);
    msg.action = 212U;
    msg.longain = 0.23583161477367165;
    msg.latgain = 0.7932645267462023;
    msg.bondthick = 831663833U;
    msg.leadgain = 0.5873503104070841;
    msg.deconflgain = 0.260909906653787;

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
    msg.setTimeStamp(0.05195498154488809);
    msg.setSource(12305U);
    msg.setSourceEntity(232U);
    msg.setDestination(44636U);
    msg.setDestinationEntity(84U);
    msg.action = 127U;
    msg.longain = 0.7200468687882038;
    msg.latgain = 0.6349382675100494;
    msg.bondthick = 2777291910U;
    msg.leadgain = 0.4144185585869533;
    msg.deconflgain = 0.09941689522753094;

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
    msg.setTimeStamp(0.620894383119226);
    msg.setSource(1965U);
    msg.setSourceEntity(182U);
    msg.setDestination(19246U);
    msg.setDestinationEntity(80U);
    msg.action = 30U;
    msg.longain = 0.4305362478440806;
    msg.latgain = 0.3891606559770455;
    msg.bondthick = 1887811961U;
    msg.leadgain = 0.21953088136665133;
    msg.deconflgain = 0.09930632300010511;

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
    msg.setTimeStamp(0.5081076308937175);
    msg.setSource(44300U);
    msg.setSourceEntity(5U);
    msg.setDestination(52112U);
    msg.setDestinationEntity(12U);
    msg.err_mean = 0.05858951363018927;
    msg.dist_min_abs = 0.8417307739333053;
    msg.dist_min_mean = 0.6615212867534545;

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
    msg.setTimeStamp(0.8864320232756434);
    msg.setSource(24251U);
    msg.setSourceEntity(133U);
    msg.setDestination(25571U);
    msg.setDestinationEntity(141U);
    msg.err_mean = 0.04234928889683498;
    msg.dist_min_abs = 0.06385974817034601;
    msg.dist_min_mean = 0.49488329160858835;

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
    msg.setTimeStamp(0.39620030788872285);
    msg.setSource(14148U);
    msg.setSourceEntity(229U);
    msg.setDestination(65233U);
    msg.setDestinationEntity(202U);
    msg.err_mean = 0.7351768503988172;
    msg.dist_min_abs = 0.997473752793667;
    msg.dist_min_mean = 0.7551188392115853;

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
    msg.setTimeStamp(0.9974822294441331);
    msg.setSource(20261U);
    msg.setSourceEntity(158U);
    msg.setDestination(21906U);
    msg.setDestinationEntity(1U);
    msg.action = 125U;
    msg.lon_gain = 0.9231739645788837;
    msg.lat_gain = 0.3821890591878576;
    msg.bond_thick = 0.11872701534438024;
    msg.lead_gain = 0.7498568381260833;
    msg.deconfl_gain = 0.3680256540177024;
    msg.accel_switch_gain = 0.698680905782982;
    msg.safe_dist = 0.6080032701280649;
    msg.deconflict_offset = 0.24948782283294468;
    msg.accel_safe_margin = 0.0008655197288661709;
    msg.accel_lim_x = 0.6781609117698703;

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
    msg.setTimeStamp(0.011510464139184329);
    msg.setSource(3513U);
    msg.setSourceEntity(49U);
    msg.setDestination(42951U);
    msg.setDestinationEntity(187U);
    msg.action = 201U;
    msg.lon_gain = 0.32702862467874017;
    msg.lat_gain = 0.39597265409941185;
    msg.bond_thick = 0.43841848182763954;
    msg.lead_gain = 0.4877127020550128;
    msg.deconfl_gain = 0.24403841478680355;
    msg.accel_switch_gain = 0.5034700369594578;
    msg.safe_dist = 0.7620479907843594;
    msg.deconflict_offset = 0.6688488456628396;
    msg.accel_safe_margin = 0.30370267611341184;
    msg.accel_lim_x = 0.6902419338280261;

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
    msg.setTimeStamp(0.11566328649921453);
    msg.setSource(53064U);
    msg.setSourceEntity(111U);
    msg.setDestination(7504U);
    msg.setDestinationEntity(223U);
    msg.action = 129U;
    msg.lon_gain = 0.8766031301835593;
    msg.lat_gain = 0.8142937201014459;
    msg.bond_thick = 0.12943124398056693;
    msg.lead_gain = 0.3737465769957413;
    msg.deconfl_gain = 0.8094080885755865;
    msg.accel_switch_gain = 0.06866777302679927;
    msg.safe_dist = 0.25095933336059184;
    msg.deconflict_offset = 0.9312733169289265;
    msg.accel_safe_margin = 0.5367037104122936;
    msg.accel_lim_x = 0.5941014479289692;

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
    msg.setTimeStamp(0.6839371676931567);
    msg.setSource(32184U);
    msg.setSourceEntity(229U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(117U);
    msg.type = 84U;
    msg.op = 192U;
    msg.err_mean = 0.45042692578918175;
    msg.dist_min_abs = 0.1501921396006355;
    msg.dist_min_mean = 0.20586433696150608;
    msg.roll_rate_mean = 0.09476448934695558;
    msg.time = 0.363438197310645;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 186U;
    tmp_msg_0.lon_gain = 0.6577064356009241;
    tmp_msg_0.lat_gain = 0.21082818791503466;
    tmp_msg_0.bond_thick = 0.9466029152620047;
    tmp_msg_0.lead_gain = 0.7196843161237185;
    tmp_msg_0.deconfl_gain = 0.8897590701304059;
    tmp_msg_0.accel_switch_gain = 0.22389471070303868;
    tmp_msg_0.safe_dist = 0.8318638276940457;
    tmp_msg_0.deconflict_offset = 0.9879847643123539;
    tmp_msg_0.accel_safe_margin = 0.8322412962645402;
    tmp_msg_0.accel_lim_x = 0.7428130379061422;
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
    msg.setTimeStamp(0.4407387981390263);
    msg.setSource(23228U);
    msg.setSourceEntity(62U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(162U);
    msg.type = 188U;
    msg.op = 76U;
    msg.err_mean = 0.5104399558863701;
    msg.dist_min_abs = 0.5549530562547608;
    msg.dist_min_mean = 0.49318854547159885;
    msg.roll_rate_mean = 0.951821229345406;
    msg.time = 0.4940251289293518;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 116U;
    tmp_msg_0.lon_gain = 0.7424600657102094;
    tmp_msg_0.lat_gain = 0.2980580541964517;
    tmp_msg_0.bond_thick = 0.3331477080535038;
    tmp_msg_0.lead_gain = 0.46479795762239384;
    tmp_msg_0.deconfl_gain = 0.5354124259689848;
    tmp_msg_0.accel_switch_gain = 0.09231970422787483;
    tmp_msg_0.safe_dist = 0.3709110677503409;
    tmp_msg_0.deconflict_offset = 0.4606007582092554;
    tmp_msg_0.accel_safe_margin = 0.9168184164927234;
    tmp_msg_0.accel_lim_x = 0.43405644943546606;
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
    msg.setTimeStamp(0.532551819824602);
    msg.setSource(34035U);
    msg.setSourceEntity(93U);
    msg.setDestination(45777U);
    msg.setDestinationEntity(190U);
    msg.type = 149U;
    msg.op = 198U;
    msg.err_mean = 0.8164009345814062;
    msg.dist_min_abs = 0.2121300470837333;
    msg.dist_min_mean = 0.24196210193155754;
    msg.roll_rate_mean = 0.5501255369362337;
    msg.time = 0.7984310796508961;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 25U;
    tmp_msg_0.lon_gain = 0.3813487315786265;
    tmp_msg_0.lat_gain = 0.3946954953704982;
    tmp_msg_0.bond_thick = 0.5640269610167173;
    tmp_msg_0.lead_gain = 0.7592433137467283;
    tmp_msg_0.deconfl_gain = 0.3858510920070186;
    tmp_msg_0.accel_switch_gain = 0.8981707501604826;
    tmp_msg_0.safe_dist = 0.5678203740419522;
    tmp_msg_0.deconflict_offset = 0.16326541824498053;
    tmp_msg_0.accel_safe_margin = 0.19415338176519925;
    tmp_msg_0.accel_lim_x = 0.7616050996135115;
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
    msg.setTimeStamp(0.5105570912573865);
    msg.setSource(21949U);
    msg.setSourceEntity(230U);
    msg.setDestination(20616U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.7065948738169261;
    msg.lon = 0.9361586237948168;
    msg.eta = 3488189748U;
    msg.duration = 29761U;

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
    msg.setTimeStamp(0.7340246598289449);
    msg.setSource(6670U);
    msg.setSourceEntity(169U);
    msg.setDestination(49284U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.8165580328625701;
    msg.lon = 0.5127961582119213;
    msg.eta = 2471149253U;
    msg.duration = 57997U;

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
    msg.setTimeStamp(0.18278450792331258);
    msg.setSource(38999U);
    msg.setSourceEntity(159U);
    msg.setDestination(37830U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.1340499659762434;
    msg.lon = 0.010365894218423155;
    msg.eta = 4090132942U;
    msg.duration = 45929U;

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
    msg.setTimeStamp(0.3423478739263951);
    msg.setSource(27313U);
    msg.setSourceEntity(26U);
    msg.setDestination(29776U);
    msg.setDestinationEntity(43U);
    msg.plan_id = 37753U;

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
    msg.setTimeStamp(0.9949730750335986);
    msg.setSource(24544U);
    msg.setSourceEntity(60U);
    msg.setDestination(12007U);
    msg.setDestinationEntity(52U);
    msg.plan_id = 11215U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.33948971338287326;
    tmp_msg_0.lon = 0.8682545914108882;
    tmp_msg_0.eta = 1793455942U;
    tmp_msg_0.duration = 37311U;
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
    msg.setTimeStamp(0.8809896497879083);
    msg.setSource(63851U);
    msg.setSourceEntity(148U);
    msg.setDestination(19907U);
    msg.setDestinationEntity(136U);
    msg.plan_id = 7066U;

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
    msg.setTimeStamp(0.4386495403081634);
    msg.setSource(36122U);
    msg.setSourceEntity(173U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(2U);
    msg.type = 218U;
    msg.command = 154U;
    msg.settings.assign("XSBQIDZYGHSBBMSJNTGJPDRKNZOXPZTAAPRHUFJQASCQNOLXEXVXNBSZZDMRYHLWNAUMLJVMZMUTNWTPRKOYRMAOPGMNAJGXUFKOHJIFBILBPZKSLHTETOSVCDYZMBZBOHWDMWLWXIIWSQFVAEIDCQJRJDRLHHEAIJQWCYKOVSICZUXOEKVDGFEFGTUEKDPRJCUGNQYGILVFLAGCUPWFY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21811U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5613773938448502;
    tmp_tmp_msg_0_0.lon = 0.9070929894909268;
    tmp_tmp_msg_0_0.eta = 2392664177U;
    tmp_tmp_msg_0_0.duration = 16554U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RTPRQKFYVSZKFFYSMKNKXMHQJJWB");

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
    msg.setTimeStamp(0.8036461268694414);
    msg.setSource(10161U);
    msg.setSourceEntity(193U);
    msg.setDestination(47266U);
    msg.setDestinationEntity(195U);
    msg.type = 144U;
    msg.command = 79U;
    msg.settings.assign("LILTRHPKGEQCYWMZBVFVAUCZZRAZLLZXNIPHPJHQSRWRNNXJFGNQEAYSKDRFQHDOVKBZTLLWNLOEJCNOZMIPBGUXPCKWNMMGXHMABGGJPJFUTVDJYJFTCHPVOIYOEQBJFNOUWEVDLAPDOQKCTQWYUGTWDLYKMTUECMVSRVD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5477U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8143435008422916;
    tmp_tmp_msg_0_0.lon = 0.6217274046008263;
    tmp_tmp_msg_0_0.eta = 414828826U;
    tmp_tmp_msg_0_0.duration = 28728U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LAJBVCNSGISDZWOXRRPNZVXHGJXNVJFDAOIAYWAGTJQUGGLPIMBZQ");

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
    msg.setTimeStamp(0.23569586218124072);
    msg.setSource(41595U);
    msg.setSourceEntity(75U);
    msg.setDestination(32150U);
    msg.setDestinationEntity(241U);
    msg.type = 232U;
    msg.command = 124U;
    msg.settings.assign("QXOSAOCKGWTTCWPFVJSMUSIQCHAINLPVZASWLGLWLGNNWMNQFEPKHXVSTZULFPDKRTVPGQVOJELBNFQBBYLBWMRIZMPUOFHGIETCITJRRSHDBZEXBTHZBBOAYRDDVUYKENTHJIILKZHMZCEJXPACKGCSVMSSZMVUXAJHJWFFYNOERDKGJMNDRWQTRJTNBCAMEHYSRHUPKPIKRYYAOLXBUEOIWGYFQZQQOZGXDXAUCVUAMEPFOLDGXQW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 7347U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.47890716696782676;
    tmp_tmp_msg_0_0.lon = 0.9331729876798753;
    tmp_tmp_msg_0_0.eta = 3048154061U;
    tmp_tmp_msg_0_0.duration = 59204U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GOBOVWBRDEQJLUHJYBTSKGAPRMVGJOFDSJRRKTBVLMHDNNATRMCIGKKQSKHQGEXPKLYXCIPPERAGZXVTLLTFIOWCRFELPCZUPJRYTVFKMXWERMMXBUQWWONBKIYYWFKVOGNLWUUHMAPI");

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
    msg.setTimeStamp(0.20477687291570357);
    msg.setSource(14296U);
    msg.setSourceEntity(162U);
    msg.setDestination(50213U);
    msg.setDestinationEntity(199U);
    msg.state = 236U;
    msg.plan_id = 47050U;
    msg.wpt_id = 54U;
    msg.settings_chk = 25807U;

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
    msg.setTimeStamp(0.2555373929881968);
    msg.setSource(35041U);
    msg.setSourceEntity(91U);
    msg.setDestination(58633U);
    msg.setDestinationEntity(222U);
    msg.state = 83U;
    msg.plan_id = 38912U;
    msg.wpt_id = 148U;
    msg.settings_chk = 11652U;

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
    msg.setTimeStamp(0.7243015073966882);
    msg.setSource(24203U);
    msg.setSourceEntity(181U);
    msg.setDestination(44514U);
    msg.setDestinationEntity(223U);
    msg.state = 205U;
    msg.plan_id = 8657U;
    msg.wpt_id = 215U;
    msg.settings_chk = 3055U;

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
    msg.setTimeStamp(0.688892185154676);
    msg.setSource(23116U);
    msg.setSourceEntity(158U);
    msg.setDestination(41012U);
    msg.setDestinationEntity(228U);
    msg.uid = 10U;
    msg.frag_number = 72U;
    msg.num_frags = 21U;
    const signed char tmp_msg_0[] = {-38, -12, 7, 89, 104, -19, 80, 91, -108, -81, 84, 16, 61, -124, 116, -63, 114, 81, -74, 123, -109, 64, -114, 105, 28, 33, -67, -103, 16, 49, -105, 63, 84, 6, -50, -87, 22, -102, 90, 91, 93, -9, -113, 91, 16, -63, 87, -118, -9, 121, -128, 126, -22, -44, -34, 46, -85, 37, 29, -99, -77, 71, -31, 3, 78, 33, 122, 44, 22, 71, 38, -37, 36, 98, 74, -85, -127, 124, -37, -30, 31, -113, 118, -68, 57, 124, -39, -117, 25, -8, 77, 48, 57, 23, -75, -100, -65, -122, 27, 3, 22, -18, -65, -71, 56, 87, 76, -3, 74, -93, -85, -118, 34, 79, -19, -11, -126, -59, -63, 121, -15, -125, -58, -52, -121, 82, -71, -41, -117, -104, 49, -64, -58, -10, 21, -24, -87, -118, -5, -31, -49, 64, 34, 101, 20, -102, -56, -17, 119, -71, -28, 109, -47, -19, 78, 72, -49, -84, 86, -47, -125, -77, 35, 59, -84, 51, -86, 65, -46, -64, 106, -56, -46, -119, 92, -55, -41, -5, -83, 118, 15, -105, 96, -74, -84, 61, -101, -105, 17, -125, 117, 125, -12, 93, -104};
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
    msg.setTimeStamp(0.8396134176843465);
    msg.setSource(54965U);
    msg.setSourceEntity(66U);
    msg.setDestination(26967U);
    msg.setDestinationEntity(13U);
    msg.uid = 117U;
    msg.frag_number = 1U;
    msg.num_frags = 187U;
    const signed char tmp_msg_0[] = {14, 121, 53, 38, 98, 13, 101, -118, 124, 114, -116, 48, 114, 110, 21, 68, -32, 51, -96, 35, -109, 97, -76, 33, 97, -32, -82, 49, 29, 126, 107, 1, -128, 121, 32, 45, -128, 94, -44, -91, 40, -100, -73, 22, -84, -56, -40, -60, -8, -104, -96, -128, 85, -47, 111, 123, -45, -30, 55, 108, 12, -96, -110, 70, -5, 64, 108, -121, 6, 114, -89, -35, -36, -57, -16, -124, 35, -23};
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
    msg.setTimeStamp(0.2997980526863335);
    msg.setSource(619U);
    msg.setSourceEntity(198U);
    msg.setDestination(26931U);
    msg.setDestinationEntity(97U);
    msg.uid = 68U;
    msg.frag_number = 212U;
    msg.num_frags = 12U;
    const signed char tmp_msg_0[] = {-67, 93, -82, 13, 98, 70, -51, 65, -3, -92, 73, -10, 73, -94, 56, -66, 25, -26, -97, -87, 47, 28, 107, -111, -62, -86, 43, -29, -121, 46, -68, -17, 60, 54, 104, 23, -82, 81, -57, 55, 64, -15, -87, 34, 80, 120, 23, -61, 44, 72, -93, -66, 32, 58, -50, -5, 70, -65, -121, -2, 10, -82, -78, 120, -17, -108, 100, -24, -126, 47, -19, 30, -34, 91, 79, -55, 112, 97, 25, 104, 103, -128, -43, -57, 114, 99, 22, 50, 52, -28, 73, -19, 91, 125, 51, -39, -62, 60, -8, -93, -42, 95, -95, 20, -58, -122, -98, 49, -103, 22, -79, -98, 108, -119, 13, 22, -87, 25, -13, -50, -54, -45, 12, 66, 24, 72, -55, -61, 92, 107, 6, 82, 2, 120, 0, 57, -43, 49, 35, -24, 69, 104, -78, -95, -114, 112, -64, 60, 58, -93, -115, -51, 24, -65, -128, -22, -118, -117, 31, 4, -70, 6, -70, -60, 3, 79, -41, 74, -8, -57, 3, -19, -101, 50, -100, -69, 111, -33, -6, -100, 94, 112, -49, -78, -24, -46, 30, 44, -19, 90, 95, 121, 75, 29, 98, -120, 90, -58, 39, 70, -73, 59, 82, -36, 58, 110, -40, 34, 6, -123, -98, -117, -43, -62, 4};
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
    msg.setTimeStamp(0.8878093373684551);
    msg.setSource(37199U);
    msg.setSourceEntity(166U);
    msg.setDestination(33906U);
    msg.setDestinationEntity(198U);
    msg.uid = 33U;
    msg.op = 88U;
    msg.frag_ids.assign("ENKPPMJMDJCCKEFVVIFHKQQVEEYSBQBQHSVECGAZWGNUNWLYVHSWYOBJOAEBNRMFBCXEIRWRMGZEPTFGALTTOYXTZDTWABICKVDSXZAZJOWPIXYFPMYHNMLISNVTHNJYLPDLZUWUHHKRKFOQWSGGAQMCV");

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
    msg.setTimeStamp(0.09235648717068534);
    msg.setSource(33921U);
    msg.setSourceEntity(238U);
    msg.setDestination(63115U);
    msg.setDestinationEntity(154U);
    msg.uid = 159U;
    msg.op = 231U;
    msg.frag_ids.assign("EWTZKUFQVRESCBPMYTZAGQVPFELIEJRZKHXMSUFEGCVEAWGMHUPBUVDASWHDYKISUOXRMOBZZKAGRLRJXWVAGZNVIXKXKUQJSNDRFBYXPOKOGTDAPYUJIDIWXSQBTQPUMIIOADNRTQYNYWZMVJKTMFMQVDDHQE");

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
    msg.setTimeStamp(0.12917900274168304);
    msg.setSource(62998U);
    msg.setSourceEntity(172U);
    msg.setDestination(24393U);
    msg.setDestinationEntity(84U);
    msg.uid = 46U;
    msg.op = 51U;
    msg.frag_ids.assign("MMTKZEWMEOPPGIWKHAQQAEEZCBDFWLZBLFWDUWQGRSMHRNTXYRCUDHXOAVMGTQZVYHLZSSATDZ");

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
    msg.setTimeStamp(0.24874658136867744);
    msg.setSource(65057U);
    msg.setSourceEntity(225U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(110U);
    msg.content_type.assign("VWJTOUCKDMEPDBFKPBFGDJ");
    const signed char tmp_msg_0[] = {-7, -107, 116, 108, 97, 63, -115, -8, 7, 20, 25, -113, 110, -68, -50, 62, -5, 69, 93, -39, 21, -3, 59, -91, 72, 2, -11, 2, -18, 120, 45, 112, 118, -78, -85, 29, -39, -1, 73, -79, 34, -88, -128, 111, -68, 7, -14, 10, -105, -128, 6, -86, -79, 59, 50, 44, -57, 53, -64, -69, 98, 70, -41, -13, -25, 5, 29, -24, -96, -18, 98, -21, -122, 22, 12, -72, 37, 123, -29, -113, 42, 126, 116, -61, -51, 94, -76, -42, 31, -44, -39, -102, -93, -105, -36, 77, 19, 25, 88, 20, -25, -92, -81, 37, -48, -6, 17, -124, -42, 91, -2, 36, -29, -122, -102, -70, 18, 111, -97, 51, -126, -123, 63, -87, -81, -84, -90, -71, 117, -42};
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
    msg.setTimeStamp(0.19908542613206992);
    msg.setSource(64510U);
    msg.setSourceEntity(37U);
    msg.setDestination(17680U);
    msg.setDestinationEntity(252U);
    msg.content_type.assign("JDXFUOZELMNROYRRHFCMSDWZSDUQDEBPYSAZVMKXXUIOQSTCZPTBXWXBVNAECSNAQNIZMXCBUG");
    const signed char tmp_msg_0[] = {-97, 113, -114, -10, -62, -4, -34, -108, 115, -76, -55, 106, -6, -117, -30, -106, -60, 44, 121, 60, 70, -70, -81, 20, -110, 66, -11, 2, -81, 13, 0, -65, 75, -24, 16, -8, 122, 45, 91, -35, 29, -77, 59, -18, 101, 29, 97, -81, 20, 113, 67, -40, 76, -66, 114, -119, -60, 88, -48, 84, -111, -20, 80, -112, 112, -128, -93, 0, -119, 13, -37, 13, 45, 38, -78, -31, -45, -87, -12, 90, -50, 117, 87, 95, -122, 106, 123, -48, 66, 20, 68, 18, 34, 115, 12, 93, -1, 95, -104, 72, 35, 19, 120, -24, 29, -99, 124, -124, 75, -122, -66, -107, 58, 66, -24, 30, -127, -110, 117, 75, 87, 117, -97, 116, -41, -76, 112, -3, -105, -109, 99, 111, -14, 84, -2, -119, -43, -24, -19, -18, -98, -39, 21, 22, -34, -117, 16, 120, -58, 117, 21, 57, -78, -41, -80, -105, -68, -7, -82, -33, 113, 17, -115, 31, 46, 6, -127, 16, -47, -4, -70, -19, 60, -111, -42, 36, 77, 108, -43, 123, -72, 2, 113, -55, -37, 95, -128, 32, 84, -30, -13, 34, -62, -57, -87, -7, 6, 90, -59, -123, -99, -21, -44, 125, -74, -96, 93, -95, -108, 42, -69, -112, -61, -17, -34, -24};
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
    msg.setTimeStamp(0.4863418021526853);
    msg.setSource(9568U);
    msg.setSourceEntity(188U);
    msg.setDestination(30585U);
    msg.setDestinationEntity(58U);
    msg.content_type.assign("HAMZLZMGDSIDHRJVYMZKQXNWQTMFUHBSPKFEVEDANZXZRRWGJGYRVXNSALOSWSNBCHXXAWLQQRSZLFAFONVFMYOGHUGJDSOOANDIUBYZJSGIMFPQQFPWTWCBQAEIDISSWCPBKMVUPN");
    const signed char tmp_msg_0[] = {-27, 10, 126, -80, -96, 113, -117, 5, 77, 8, 68, 54, 64, 94, -59, 5, 91, -25, 67, 19, -12, -86, -81, 101, 92, 77, 70, -49, -23, 89, -119, -22, -35, -112, 37, 113, 25, 69, -37, 65, 82, 115, -117, 91, -25, 5, 60, -78, -116, -38, 24, -85, 51, -36, 51, 21, 10, 81, 3, -96, 63, -77, 32, 84, -69, 99, 49, -54, -53, -26, -124, -41, -95, -74, -122, 35, 104, -6, 29, -68, 125, 20, -53, -14, -81, 107, 104, -106, 0, -1, 11, -45, 3, 16, 113, 102, 39, 119, 32, 70, 60, -71, 113, 70, 110, -74, 70, -60, 102, -100, -23, 95, 68, 82, -21, -11, -35, 7, 3, -111, 3, -8, 41};
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
    msg.setTimeStamp(0.4014164785408716);
    msg.setSource(34121U);
    msg.setSourceEntity(29U);
    msg.setDestination(61016U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.20857272728160137);
    msg.setSource(19346U);
    msg.setSourceEntity(149U);
    msg.setDestination(29460U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.9471961524886158);
    msg.setSource(55700U);
    msg.setSourceEntity(190U);
    msg.setDestination(50733U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.5501036671500276);
    msg.setSource(53065U);
    msg.setSourceEntity(144U);
    msg.setDestination(42192U);
    msg.setDestinationEntity(59U);
    msg.target = 13099U;
    msg.bearing = 0.09182926183082663;
    msg.elevation = 0.5373727339250671;

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
    msg.setTimeStamp(0.8423245704447523);
    msg.setSource(55394U);
    msg.setSourceEntity(99U);
    msg.setDestination(21339U);
    msg.setDestinationEntity(33U);
    msg.target = 18134U;
    msg.bearing = 0.08819152217570692;
    msg.elevation = 0.05450418832546455;

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
    msg.setTimeStamp(0.22974562559175893);
    msg.setSource(48204U);
    msg.setSourceEntity(123U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(96U);
    msg.target = 28891U;
    msg.bearing = 0.018629525027127114;
    msg.elevation = 0.04667961641344642;

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
    msg.setTimeStamp(0.7487616704368769);
    msg.setSource(40001U);
    msg.setSourceEntity(138U);
    msg.setDestination(28246U);
    msg.setDestinationEntity(54U);
    msg.target = 45472U;
    msg.x = 0.4154396447128693;
    msg.y = 0.6607331055444988;
    msg.z = 0.30002434637015474;

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
    msg.setTimeStamp(0.4942700989795634);
    msg.setSource(21320U);
    msg.setSourceEntity(1U);
    msg.setDestination(60463U);
    msg.setDestinationEntity(246U);
    msg.target = 34021U;
    msg.x = 0.6132039850105061;
    msg.y = 0.14618336239399132;
    msg.z = 0.6721355666750399;

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
    msg.setTimeStamp(0.46455356546897664);
    msg.setSource(59729U);
    msg.setSourceEntity(109U);
    msg.setDestination(2103U);
    msg.setDestinationEntity(58U);
    msg.target = 64329U;
    msg.x = 0.2520589685249156;
    msg.y = 0.2724750802403776;
    msg.z = 0.34765155935198955;

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
    msg.setTimeStamp(0.7688836317730459);
    msg.setSource(63700U);
    msg.setSourceEntity(253U);
    msg.setDestination(45570U);
    msg.setDestinationEntity(67U);
    msg.target = 43180U;
    msg.lat = 0.3587709743786709;
    msg.lon = 0.3369445459113233;
    msg.z_units = 211U;
    msg.z = 0.1350412753188377;

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
    msg.setTimeStamp(0.2548260459329389);
    msg.setSource(10604U);
    msg.setSourceEntity(49U);
    msg.setDestination(1077U);
    msg.setDestinationEntity(178U);
    msg.target = 31109U;
    msg.lat = 0.044437978339908035;
    msg.lon = 0.9512094767027287;
    msg.z_units = 222U;
    msg.z = 0.8069700008648228;

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
    msg.setTimeStamp(0.06933668339261356);
    msg.setSource(36202U);
    msg.setSourceEntity(180U);
    msg.setDestination(60199U);
    msg.setDestinationEntity(161U);
    msg.target = 45686U;
    msg.lat = 0.9230191547821489;
    msg.lon = 0.7996576587670999;
    msg.z_units = 41U;
    msg.z = 0.562928019344313;

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
    msg.setTimeStamp(0.289951634085569);
    msg.setSource(18545U);
    msg.setSourceEntity(207U);
    msg.setDestination(20357U);
    msg.setDestinationEntity(65U);
    msg.locale.assign("CXFKXGEBPERYPUJXHDMCHHLVZVEACVBBZWZGIMGAZNMMWYTFCYWIBXQNFKEQGXQITXOHAZVOCPQNUCKHPNEBQWLKSUHKJOJJGATOT");
    const signed char tmp_msg_0[] = {53, -39, 72, 16, -116, -21, -105, -107, 32, 91, 104, 92, 63, -77, 86, 97, 106, 81, 70, 29, -46, -68, -62, 58, -122, 70, -58, 104, 8, -24, -87, -95, 83, 94, 18, -123, -117, 114, -126, 74, -106, -72, -62, -98, -116, -57, 98, -71, -54, -39, -88, 45, -58, 38, -5, -73, 21, -14, -54, 17, 86, 104, -94, 109, -65, 97, 35, 115, -77, 119, -25, 65, -102, 41, 58, 82, 54, 31, -52, 26, -127, 31, 82, -55, 39, 80, 100, 18, -6, -72, -57, 23, 90, 5, 66, -94, -57, 2, 51, -51, 74, -55, 84, -61, -23, 71, 11, 42, 29, 82, -38, -90, -52, 32, 20, -50, 67, -112, -36, -76, 115, -3, 51, 92, -95, -41, 6, -93, -34, 110, 26, 50, -121, -18, 79, 58, -29, 52, 21, 40, 11, 12, 92, -19, -57, -99, -76, -41, 7, 81, -103, -75, 113, 10, -9, -23, 42, -72, -30, 11, 95, 24, -56, 61, 12, -90, 102, -30, 123, 89, -87, 43, -118, 58, -38, 114, 20, -68, -55, 90, -75, -107, -57, 39, 57, 121, -75, 84, 10, 96, -1, -116, -49, -17, 111, -39, -40, 94, 58, -26, -70, -42, -122, 69, -43, 37, 46, -20, 45, 58, -34, -28, -18, 39, 40, 108, 122, 10, 63, 64, 1, 110, 14, -59, -83, -47, -3, -14, 96, -54, 55, 9, -30, 42, 91, 51, 90, 79, 33};
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
    msg.setTimeStamp(0.17001542696538008);
    msg.setSource(25607U);
    msg.setSourceEntity(108U);
    msg.setDestination(19653U);
    msg.setDestinationEntity(205U);
    msg.locale.assign("BNYRYRQXJONLHYAALFJUFEWOLTMQLIJSLFJSPSBTMGVRHVQRKCFWWABJNUNQOWEVACKNEPFKNBATYDGUMQLIZUHGWOQZWEQPRFPPIKOCHJLXVENKTJISZLXPJWHXRSHMPEVDYQPGLBXSEYHLGRZOKYWDCBAHIUWYZVM");
    const signed char tmp_msg_0[] = {105, -37, 120, 72, -54, -79, 17, -63, 18, 50, 72, 25, -3, 57, 90, -32, -9, 72, 94, 117, -114, -58, 101, 107, -70, 17, 52, -12, -123, 93, 84, -101, 80, -119, 70, 49, -125, -54, 32, 72, -114, -10, -121};
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
    msg.setTimeStamp(0.20049088567749818);
    msg.setSource(1779U);
    msg.setSourceEntity(242U);
    msg.setDestination(29006U);
    msg.setDestinationEntity(79U);
    msg.locale.assign("HVYXNBFSKMGPWOWLLKQNUKTZHWUHVHDIERDMOLWESMCUEBZKFDRESRIEIIITOAAQPQVXLNWKQUUNGYXFDWMVMREZWONXGCBGRRPHNEQCCKORFIYFAGGDZSYFQNIQBLPZCXLDECOAYJNWIZGYMJJPJBPHASYUVQBRDKZOADHJEJONMBAKRTHWMZJXGFBDQVBDCRSXTANSUEKPVTM");
    const signed char tmp_msg_0[] = {-119, -10, -84, 84, 119, 120, -38, -53, 78, -52, 60, 37, 76, -83, 64, -82, 112, 54, 116, 76, 81, -127, -30, 89, 95, 13, -15, -128, -110, 30, -65, -112, -104, -61, -3, 62, -40, -115, -54, -49, -98, -128, 104, 70, 21, 34, 81, 3, -93, 57, -85, 108, 47, 101, 126, 114, -66, 80, -38, -121, 10, -33, 37, -7, 102, 90, 59, 25, 106, -76, 55, -47, -26, -38, -92, -36, 124, 49, 81, 121, -39, 11, 59, 5, 40, -52, -126, 101, 115, -70};
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
    msg.setTimeStamp(0.5247384348843344);
    msg.setSource(38434U);
    msg.setSourceEntity(20U);
    msg.setDestination(26760U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.3836951846181782);
    msg.setSource(37440U);
    msg.setSourceEntity(21U);
    msg.setDestination(14814U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.21225132975974248);
    msg.setSource(10333U);
    msg.setSourceEntity(210U);
    msg.setDestination(1734U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.5160391926373618);
    msg.setSource(46049U);
    msg.setSourceEntity(209U);
    msg.setDestination(63186U);
    msg.setDestinationEntity(175U);
    msg.camid = 24U;
    msg.x = 49693U;
    msg.y = 14472U;

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
    msg.setTimeStamp(0.5929576192087727);
    msg.setSource(44555U);
    msg.setSourceEntity(151U);
    msg.setDestination(51657U);
    msg.setDestinationEntity(190U);
    msg.camid = 41U;
    msg.x = 30474U;
    msg.y = 30837U;

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
    msg.setTimeStamp(0.9964892314743622);
    msg.setSource(35348U);
    msg.setSourceEntity(177U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(214U);
    msg.camid = 196U;
    msg.x = 4429U;
    msg.y = 38526U;

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
    msg.setTimeStamp(0.948987746153965);
    msg.setSource(33125U);
    msg.setSourceEntity(87U);
    msg.setDestination(10597U);
    msg.setDestinationEntity(58U);
    msg.camid = 206U;
    msg.x = 5690U;
    msg.y = 33739U;

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
    msg.setTimeStamp(0.8480897855819177);
    msg.setSource(38584U);
    msg.setSourceEntity(165U);
    msg.setDestination(52775U);
    msg.setDestinationEntity(64U);
    msg.camid = 244U;
    msg.x = 5380U;
    msg.y = 36435U;

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
    msg.setTimeStamp(0.03849127688552334);
    msg.setSource(8342U);
    msg.setSourceEntity(250U);
    msg.setDestination(49852U);
    msg.setDestinationEntity(197U);
    msg.camid = 126U;
    msg.x = 37740U;
    msg.y = 11618U;

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
    msg.setTimeStamp(0.056778838527661524);
    msg.setSource(47193U);
    msg.setSourceEntity(196U);
    msg.setDestination(47599U);
    msg.setDestinationEntity(186U);
    msg.tracking = 185U;
    msg.lat = 0.46890914177064924;
    msg.lon = 0.052798685395314404;
    msg.x = 0.520317623338355;
    msg.y = 0.21681565541863124;
    msg.z = 0.9282242829677883;

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
    msg.setTimeStamp(0.39135858066508267);
    msg.setSource(27123U);
    msg.setSourceEntity(56U);
    msg.setDestination(55314U);
    msg.setDestinationEntity(4U);
    msg.tracking = 143U;
    msg.lat = 0.6997515997577627;
    msg.lon = 0.21523472839845792;
    msg.x = 0.8461654223377574;
    msg.y = 0.26978471547150107;
    msg.z = 0.7830842071736909;

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
    msg.setTimeStamp(0.5112531309223861);
    msg.setSource(59777U);
    msg.setSourceEntity(153U);
    msg.setDestination(47821U);
    msg.setDestinationEntity(145U);
    msg.tracking = 0U;
    msg.lat = 0.08666670015658062;
    msg.lon = 0.6165141138740969;
    msg.x = 0.2808783984375529;
    msg.y = 0.12883956031377009;
    msg.z = 0.9414453445689082;

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
    msg.setTimeStamp(0.9590638096677869);
    msg.setSource(40245U);
    msg.setSourceEntity(114U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(6U);
    msg.target.assign("IWRDXYMQMDHPKLYTLVOEZMERJTFRCAOFAYKXVVLWELCZWVOCAQTKVMEYUCOFNAKILRPFBOYCSLHUUCNEBYJJBWNIXPDCHNRTTJHSHGBBCOVFYNPZYWXQUWJKTEBXLPGV");
    msg.lbearing = 0.2983491440677791;
    msg.lelevation = 0.7361460860582575;
    msg.bearing = 0.8040562359239042;
    msg.elevation = 0.1227464756269574;
    msg.phi = 0.3570316179247368;
    msg.theta = 0.9286171415914649;
    msg.psi = 0.5729647395920476;
    msg.accuracy = 0.286145980225758;

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
    msg.setTimeStamp(0.9538404378954741);
    msg.setSource(45714U);
    msg.setSourceEntity(136U);
    msg.setDestination(14335U);
    msg.setDestinationEntity(11U);
    msg.target.assign("DZCEHTFBURPEOWIFHMUSHVCHMYTAOYKLSVCESXTYIQWTUDJQAHWKUCQPQNINDPBURWJPLIJNFCXUDYPLHQKORGZSXKRXLFOHWRTDDAVLMKBVTULNEAPVISRAHJSCIHVXSGZGCVYYUVTBRYADVMSJLOJJXBWSIMIXOLW");
    msg.lbearing = 0.2560274660297289;
    msg.lelevation = 0.7625810113656165;
    msg.bearing = 0.9952653957688878;
    msg.elevation = 0.8360673943163319;
    msg.phi = 0.7108513618442946;
    msg.theta = 0.1865328632339266;
    msg.psi = 0.8116705349558007;
    msg.accuracy = 0.893244186794547;

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
    msg.setTimeStamp(0.39393567509696004);
    msg.setSource(7794U);
    msg.setSourceEntity(187U);
    msg.setDestination(41985U);
    msg.setDestinationEntity(9U);
    msg.target.assign("YDZDVKCMTGNINSWJEOXFVWOUUQUWLPRPGLSAIOIDJBLSWPBCRKTNZSHCWGLAVJXHAHLEHLJYBJTLEGXAMTAPYURVQAZHMTIMRTYBQZNNDUYQKHQVSJEJINVNPAUFCMTQYOZXMWKSBOYRIKKMPVBOQYYDREVZUNZTMXDKWSCLIGHBFCARFTDPFGDRGAUCCKPWYHDXKXOMQZSXEVBFOIUGFWLJXEBZFRAJMIBJVHHGEURXOSWSIEDO");
    msg.lbearing = 0.5694625095325472;
    msg.lelevation = 0.6787413173501018;
    msg.bearing = 0.4061297929982228;
    msg.elevation = 0.08680234077372684;
    msg.phi = 0.6490953855166892;
    msg.theta = 0.2848370829159509;
    msg.psi = 0.7015648604416547;
    msg.accuracy = 0.4058970850030943;

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
    msg.setTimeStamp(0.6502671550329313);
    msg.setSource(54120U);
    msg.setSourceEntity(13U);
    msg.setDestination(18309U);
    msg.setDestinationEntity(114U);
    msg.target.assign("BVEUDPTCKJBMMBXGNNTEFCCRYXFKECTENXZAQRPVJTEAFJUMKBHFWSOKFTXPQNBAFIZVZDAANDIVLXPGSYSLXCMYBCNKGJILKDTVMOUHIUJFILSEMDVDWHGDEMPZIOYJZSWSBKDLXLYUCXRNFQVLOALIQJOWQJUDYRGZTUORNSRYSYZPHAYIBFHQHPRKTDWARVKUMNVHQALUAWZQGFOCZ");
    msg.x = 0.17015448763909535;
    msg.y = 0.5219858522325715;
    msg.z = 0.940171442157146;
    msg.n = 0.7787560035262427;
    msg.e = 0.6626043323919639;
    msg.d = 0.4784324900206798;
    msg.phi = 0.5443664256942099;
    msg.theta = 0.9928341152756375;
    msg.psi = 0.3281213947915391;
    msg.accuracy = 0.23342041100419508;

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
    msg.setTimeStamp(0.4455861255401222);
    msg.setSource(7265U);
    msg.setSourceEntity(71U);
    msg.setDestination(8120U);
    msg.setDestinationEntity(145U);
    msg.target.assign("HQWJSRDHYBTEOGFNWXTUAGLCNXBLOTISHKHQPFDJUBIHDPGKQLOOUVUXGKNDCYAYAC");
    msg.x = 0.07247100144193697;
    msg.y = 0.8279338342257857;
    msg.z = 0.1444500765398693;
    msg.n = 0.8389658020883275;
    msg.e = 0.07416100768192735;
    msg.d = 0.7144230461171054;
    msg.phi = 0.3178638189797943;
    msg.theta = 0.2998291752491784;
    msg.psi = 0.41399592104860794;
    msg.accuracy = 0.6683383365346071;

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
    msg.setTimeStamp(0.7746861366196717);
    msg.setSource(57146U);
    msg.setSourceEntity(23U);
    msg.setDestination(31299U);
    msg.setDestinationEntity(79U);
    msg.target.assign("XGIXNTVIRBZASPPCXLWGCRWKCCMOCEPKQRFNINFWQZMHMRLOXTVMEBXYDMZEAGUSCHQVAXLXNVOEYQVFFRRFZHZRXWSAQEYKTUBRWZOISZGOSPIKLKBTMBAHGYVULNJKUFATFUVOLVUXOKUOSMCWZUJWZJBTTHDRLIKHFHJRSMYGYVDDNQZWLJPYFEDYIQDLDSUWPXHOPPGTGDEIITMKENPESYBYJLJHWVGPDN");
    msg.x = 0.8211589642045451;
    msg.y = 0.6323741592278437;
    msg.z = 0.24476226720893057;
    msg.n = 0.3785552778493425;
    msg.e = 0.14364695246407055;
    msg.d = 0.43793922971953614;
    msg.phi = 0.4423005567240438;
    msg.theta = 0.7029052743093077;
    msg.psi = 0.5910415648562426;
    msg.accuracy = 0.8495758939322982;

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
    msg.setTimeStamp(0.02977789789937313);
    msg.setSource(9060U);
    msg.setSourceEntity(95U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(253U);
    msg.target.assign("ZIFPLMRAXGSKGLGAESGNBEXDZRTQVVAVKITAPWMTOYPYLBEBSXIYDJBLLPOXDYPFHKWOKIBEVSAAKZQLOOGSAZQUPRVKGUYJSGORBFDCBFTACAYLPNAYHLNVWFROEWUYREOTQEMBZMENZKFBVIFGPIJTEDQNZIZQNSCHIJWESBORJICYKMGUWSMJTLXHQMZJRPSWUKNQXCFKDCCTORDDDCMXXJIVUCUJCWQTVFPV");
    msg.lat = 0.2990953451911732;
    msg.lon = 0.6767428406128055;
    msg.z_units = 39U;
    msg.z = 0.8203698010296561;
    msg.accuracy = 0.15225952609033933;

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
    msg.setTimeStamp(0.9014549271371394);
    msg.setSource(7551U);
    msg.setSourceEntity(65U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(14U);
    msg.target.assign("VPGPYOWLZVUHAYWPZYLQIKSOBVFODGUMDJJCGIOJBEPEQHICFUBEKRPKUNTGTTBFFCKSVNBVOBALBEIPXFKWPVTIZARTEYCZAEQXESWAQGSRVYATWXMHLIIBMMBJHDSURQGWASCOKUZXJPMFAHDOLJPRRDRRXFLCPNGJW");
    msg.lat = 0.1514838481979608;
    msg.lon = 0.7917901972084999;
    msg.z_units = 76U;
    msg.z = 0.21222316169705335;
    msg.accuracy = 0.47527448186253607;

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
    msg.setTimeStamp(0.15796349173966184);
    msg.setSource(23171U);
    msg.setSourceEntity(8U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(187U);
    msg.target.assign("KMLJOJBHNHJBQCTVKYBUYS");
    msg.lat = 0.5083185851013022;
    msg.lon = 0.28256955146037177;
    msg.z_units = 192U;
    msg.z = 0.41282615397402733;
    msg.accuracy = 0.9455937886080582;

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
    msg.setTimeStamp(0.7542516316684719);
    msg.setSource(63456U);
    msg.setSourceEntity(1U);
    msg.setDestination(55440U);
    msg.setDestinationEntity(187U);
    msg.name.assign("HFGLAYINNNNISLAICDBCQWYBJHPOFMHTQOQLIMXOWIWRZYHEWGDRZPXWNKNIVJMEZBLLBZPPSWOFTPORVVQZWVXXSQEWUMJTJPFLVACFTZJAJQTRXDKNGCJDUBRMKYGQPGIQZDFCMGKRHLFEOGEKUPLYSAAVIHUVXERYUBXHCTUSOUD");
    msg.lat = 0.6419370691715455;
    msg.lon = 0.13627403449181053;
    msg.z = 0.005081042010381398;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.20687594343680815);
    msg.setSource(49144U);
    msg.setSourceEntity(95U);
    msg.setDestination(53311U);
    msg.setDestinationEntity(138U);
    msg.name.assign("SJPYYGDGGKYJOTNAOSCRFNASHFVPNUMJLBCSAIHTRBTMIYWZFBYZFSHOAEWVXREYHVAKNCFDJNSIUKWPQCHDENQYBXQZLOJAVSBFJMLXLNWVRETMOBITKWPURVXEUIOKTHDHWKJWWUXZGLNFRIVBPPITBHEQUTGDLTFZIBYM");
    msg.lat = 0.6348323526395262;
    msg.lon = 0.61002481524688;
    msg.z = 0.6726098437767749;
    msg.z_units = 227U;

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
    msg.setTimeStamp(0.5457166682709488);
    msg.setSource(13019U);
    msg.setSourceEntity(197U);
    msg.setDestination(57715U);
    msg.setDestinationEntity(236U);
    msg.name.assign("CPTPKDOKANBBWWDQOUCANIZPGYBHPNWZOINSRFIUPUIDMRHKWQIGYVTQYHIKHZOVCMRFPIIWNGJGORLBXCCQXEJRYXLCEUTYEJCEAOCVEFPUXROJSVYQZKUEEBDUBLMSUSRMSTYBPOLFRFQZXJDPMAFUVSHZGCHRDVDVWNHXBLNMPKVKVOQLWIAXSQOJFESSHAMEFLXTZGXSXDTCZTJBKGFLZTHGMAWJBERAWGYJNYFKQT");
    msg.lat = 0.08204590661396383;
    msg.lon = 0.42754579612808075;
    msg.z = 0.21420971147758372;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.8159395185018841);
    msg.setSource(37989U);
    msg.setSourceEntity(129U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(187U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.12944949505390402);
    msg.setSource(16621U);
    msg.setSourceEntity(193U);
    msg.setDestination(37540U);
    msg.setDestinationEntity(216U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.780174249718761);
    msg.setSource(48095U);
    msg.setSourceEntity(196U);
    msg.setDestination(12633U);
    msg.setDestinationEntity(223U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.7519663272339854);
    msg.setSource(45703U);
    msg.setSourceEntity(82U);
    msg.setDestination(40110U);
    msg.setDestinationEntity(112U);
    msg.value = 0.23744828104685078;
    msg.type = 84U;

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
    msg.setTimeStamp(0.8521108492318696);
    msg.setSource(32609U);
    msg.setSourceEntity(86U);
    msg.setDestination(5908U);
    msg.setDestinationEntity(92U);
    msg.value = 0.28864631025768417;
    msg.type = 25U;

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
    msg.setTimeStamp(0.7368979789643471);
    msg.setSource(5364U);
    msg.setSourceEntity(154U);
    msg.setDestination(24684U);
    msg.setDestinationEntity(116U);
    msg.value = 0.061393483035011576;
    msg.type = 62U;

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
    msg.setTimeStamp(0.012610378982346515);
    msg.setSource(12889U);
    msg.setSourceEntity(187U);
    msg.setDestination(49101U);
    msg.setDestinationEntity(155U);
    msg.value = 0.1718871309190596;

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
    msg.setTimeStamp(0.12623724780096612);
    msg.setSource(21986U);
    msg.setSourceEntity(213U);
    msg.setDestination(61308U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7385446296663298;

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
    msg.setTimeStamp(0.1703889702294974);
    msg.setSource(6807U);
    msg.setSourceEntity(109U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(232U);
    msg.value = 0.9084595758126583;

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
    msg.setTimeStamp(0.7391631531389263);
    msg.setSource(8235U);
    msg.setSourceEntity(156U);
    msg.setDestination(15465U);
    msg.setDestinationEntity(233U);
    msg.timestamp_last_service = 0.6263178448878477;
    msg.time_next_service = 0.2841614334564818;
    msg.time_motor_next_service = 0.6600280145890418;
    msg.time_idle_ground = 0.761197613943105;
    msg.time_idle_air = 0.6472823953492383;
    msg.time_idle_water = 0.16442941674856837;
    msg.time_idle_underwater = 0.5415599315457851;
    msg.time_idle_unknown = 0.6581152660318944;
    msg.time_motor_ground = 0.6498640914413023;
    msg.time_motor_air = 0.851501319949836;
    msg.time_motor_water = 0.07407967957902362;
    msg.time_motor_underwater = 0.6920467548448448;
    msg.time_motor_unknown = 0.5798080033040164;
    msg.rpm_min = 22974;
    msg.rpm_max = -22026;
    msg.depth_max = 0.7484571556246005;

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
    msg.setTimeStamp(0.6294012120326221);
    msg.setSource(57962U);
    msg.setSourceEntity(120U);
    msg.setDestination(21926U);
    msg.setDestinationEntity(145U);
    msg.timestamp_last_service = 0.22345260217371055;
    msg.time_next_service = 0.2684620627182427;
    msg.time_motor_next_service = 0.16928954354291803;
    msg.time_idle_ground = 0.09034432734261122;
    msg.time_idle_air = 0.4079208931791233;
    msg.time_idle_water = 0.8754626272371704;
    msg.time_idle_underwater = 0.47948885451609735;
    msg.time_idle_unknown = 0.6600342651361588;
    msg.time_motor_ground = 0.9870405325425339;
    msg.time_motor_air = 0.725168259740055;
    msg.time_motor_water = 0.8863768222384195;
    msg.time_motor_underwater = 0.2571311229719919;
    msg.time_motor_unknown = 0.32432565650757506;
    msg.rpm_min = 7984;
    msg.rpm_max = 22293;
    msg.depth_max = 0.29930806226175244;

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
    msg.setTimeStamp(0.29822590584285646);
    msg.setSource(8962U);
    msg.setSourceEntity(92U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(139U);
    msg.timestamp_last_service = 0.11023167324393579;
    msg.time_next_service = 0.5936912210393556;
    msg.time_motor_next_service = 0.7733176501730538;
    msg.time_idle_ground = 0.15940029966151747;
    msg.time_idle_air = 0.9603021091034126;
    msg.time_idle_water = 0.8848612662200394;
    msg.time_idle_underwater = 0.6474786546433506;
    msg.time_idle_unknown = 0.3519225723458912;
    msg.time_motor_ground = 0.3590617418949833;
    msg.time_motor_air = 0.04545339840324747;
    msg.time_motor_water = 0.28570989672205405;
    msg.time_motor_underwater = 0.2537884029548312;
    msg.time_motor_unknown = 0.6428425186208676;
    msg.rpm_min = 22363;
    msg.rpm_max = 24043;
    msg.depth_max = 0.04994191945234405;

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
    msg.setTimeStamp(0.9157061439853519);
    msg.setSource(14933U);
    msg.setSourceEntity(141U);
    msg.setDestination(44348U);
    msg.setDestinationEntity(54U);
    msg.severity = 25U;
    msg.text.assign("UFPTKTUUWTDVNGZPTNNQESOLRECMWBQTIRJIDPFFUYGAGNXKJMCCCDQYSKOIHGKBFVYJRVRSHZMIVTYIXBTGJHUWBXOQKGOETVCPDRJDGQSAMSABJCAMAYSILSFZBMQNUOGHNCXCUEXOWZOSYOWBWIXHHMPDLBXORPKYGLQNTFZXJBPEJERMYTGKKRHUEJNQZJXQAYQUYCBLLEHFDCILLVAFVIMSAKLIWODZPWZRKFZDFWPEHA");

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
    msg.setTimeStamp(0.12671391720486924);
    msg.setSource(56002U);
    msg.setSourceEntity(199U);
    msg.setDestination(23485U);
    msg.setDestinationEntity(26U);
    msg.severity = 182U;
    msg.text.assign("MXMXMDMDORUALAARDYLIRNPQKWYVCDRKVDVNHQHAIINYIIEGHVPWVCGCOYQZSBCNMCGWWZQIOTGWQAQEBXKZNRRJWXNODEGWMMTYJJWPFVUAKBQFLFXKQTDSKBZUBLJCXOLJGWTACVOXPIZCHXXRMZTKUFAYSPQQIGZHCPLXOVGLEWRBUTBSTPUMULLHZFYPZZPGEKDLJIRFAIDJNHHENYHDOYJJFSFATBEESU");

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
    msg.setTimeStamp(0.35556699716993256);
    msg.setSource(38985U);
    msg.setSourceEntity(6U);
    msg.setDestination(45011U);
    msg.setDestinationEntity(162U);
    msg.severity = 240U;
    msg.text.assign("DTKMCJIBOPFNJKVOXDXAJUIDGPABFWCMEKORJQECYWHIQDOGZXKFCFBPFBVDGESQAYZTHFKQHYSRLWRWAILILSLOVQBDJEARQNJGETAAEXDUIKTZHP");

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
    msg.setTimeStamp(0.46584778988632003);
    msg.setSource(30791U);
    msg.setSourceEntity(203U);
    msg.setDestination(4831U);
    msg.setDestinationEntity(128U);
    msg.channel = -80;
    msg.value = -695346839;
    msg.gain = 106U;

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
    msg.setTimeStamp(0.018383759672562783);
    msg.setSource(19112U);
    msg.setSourceEntity(79U);
    msg.setDestination(41404U);
    msg.setDestinationEntity(169U);
    msg.channel = 14;
    msg.value = -990464744;
    msg.gain = 238U;

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
    msg.setTimeStamp(0.29218578202425727);
    msg.setSource(13850U);
    msg.setSourceEntity(99U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(23U);
    msg.channel = 25;
    msg.value = -1006251067;
    msg.gain = 163U;

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
    msg.setTimeStamp(0.03800968585154363);
    msg.setSource(27236U);
    msg.setSourceEntity(64U);
    msg.setDestination(46631U);
    msg.setDestinationEntity(29U);
    msg.ch01 = 0.49038714271042383;
    msg.ch02 = 0.7953620840525305;
    msg.ch03 = 0.3297860507833278;
    msg.ch04 = 0.6300277539952652;
    msg.ch05 = 0.39075028792793476;
    msg.ch06 = 0.6291397855008792;
    msg.ch07 = 0.2662102421529847;
    msg.ch08 = 0.558447641043768;
    msg.ch09 = 0.2875019506180695;
    msg.ch10 = 0.8704196678133713;
    msg.ch11 = 0.9437486030294051;
    msg.ch12 = 0.5355177005963822;
    msg.ch13 = 0.22131227445386414;
    msg.ch14 = 0.2180241251858307;
    msg.ch15 = 0.9190712125656361;
    msg.ch16 = 0.8188029883865857;

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
    msg.setTimeStamp(0.3656770397047403);
    msg.setSource(38935U);
    msg.setSourceEntity(181U);
    msg.setDestination(37493U);
    msg.setDestinationEntity(215U);
    msg.ch01 = 0.6166503618741624;
    msg.ch02 = 0.9212981096820296;
    msg.ch03 = 0.05422620917591081;
    msg.ch04 = 0.8620223930934812;
    msg.ch05 = 0.4118793122263116;
    msg.ch06 = 0.3421733794638424;
    msg.ch07 = 0.804977943044742;
    msg.ch08 = 0.3256817587382883;
    msg.ch09 = 0.5715282318035562;
    msg.ch10 = 0.616132740860303;
    msg.ch11 = 0.12567821855821326;
    msg.ch12 = 0.5118489823382626;
    msg.ch13 = 0.7251983516705093;
    msg.ch14 = 0.8352468657674252;
    msg.ch15 = 0.35626528403228874;
    msg.ch16 = 0.8467354427731891;

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
    msg.setTimeStamp(0.7140365446735869);
    msg.setSource(7105U);
    msg.setSourceEntity(216U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(133U);
    msg.ch01 = 0.38333962154172063;
    msg.ch02 = 0.8745656922510613;
    msg.ch03 = 0.13436313722040605;
    msg.ch04 = 0.3893214541728546;
    msg.ch05 = 0.38681939524541475;
    msg.ch06 = 0.07673983585114386;
    msg.ch07 = 0.4533662316470125;
    msg.ch08 = 0.9925599466659243;
    msg.ch09 = 0.17986204189811672;
    msg.ch10 = 0.15817182672241314;
    msg.ch11 = 0.6692854948201823;
    msg.ch12 = 0.6940399883746005;
    msg.ch13 = 0.3925469768903441;
    msg.ch14 = 0.7926070497398704;
    msg.ch15 = 0.5917986397243981;
    msg.ch16 = 0.5752273659430985;

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
    msg.setTimeStamp(0.16948039850191532);
    msg.setSource(60598U);
    msg.setSourceEntity(43U);
    msg.setDestination(11546U);
    msg.setDestinationEntity(88U);
    msg.op = 137U;
    msg.lat = 0.662772560371207;
    msg.lon = 0.5367377057935717;
    msg.height = 0.5813033987841478;
    msg.depth = 0.4042040682168673;
    msg.alt = 0.7710856279813327;

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
    msg.setTimeStamp(0.20521836635692392);
    msg.setSource(52088U);
    msg.setSourceEntity(54U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(93U);
    msg.op = 51U;
    msg.lat = 0.02937281500551625;
    msg.lon = 0.5580212330799307;
    msg.height = 0.7187994074464203;
    msg.depth = 0.1778159166260761;
    msg.alt = 0.8214860012905332;

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
    msg.setTimeStamp(0.5547443840983941);
    msg.setSource(35128U);
    msg.setSourceEntity(12U);
    msg.setDestination(26862U);
    msg.setDestinationEntity(89U);
    msg.op = 149U;
    msg.lat = 0.815123149167344;
    msg.lon = 0.45170268867587393;
    msg.height = 0.7297381031380045;
    msg.depth = 0.21424838816507896;
    msg.alt = 0.7252806660639064;

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
    msg.setTimeStamp(0.31075209799603987);
    msg.setSource(38943U);
    msg.setSourceEntity(137U);
    msg.setDestination(48015U);
    msg.setDestinationEntity(135U);
    msg.direction = 0.31752386127601895;
    msg.speed = 0.44489449903420364;
    msg.turbulence = 0.5510582256870351;

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
    msg.setTimeStamp(0.15852671984779665);
    msg.setSource(46777U);
    msg.setSourceEntity(253U);
    msg.setDestination(44646U);
    msg.setDestinationEntity(148U);
    msg.direction = 0.6816534602235684;
    msg.speed = 0.6168025059534599;
    msg.turbulence = 0.8839620839986565;

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
    msg.setTimeStamp(0.5552589593479628);
    msg.setSource(3320U);
    msg.setSourceEntity(1U);
    msg.setDestination(13054U);
    msg.setDestinationEntity(87U);
    msg.direction = 0.34764242983854465;
    msg.speed = 0.8348184486098827;
    msg.turbulence = 0.2791013204190036;

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
    msg.setTimeStamp(0.007556348067824015);
    msg.setSource(2427U);
    msg.setSourceEntity(189U);
    msg.setDestination(27627U);
    msg.setDestinationEntity(240U);
    msg.msg_type.assign("KLZEWHVWCKGMLYRJMMQK");
    msg.sensor_class.assign("ZAFBSHQDEBJSSOHTCXRBIQHKFTNRWNNAZPHIUFJNAKAJNVOEUDQHNOFXRVMUCWWZNVWAROYEZLZYREDIUVMAOYDPIBIUGPEPMTYBYHSTPHKKLXNBVFATMLHAYKDPSRLDROITNCLLBYCWI");
    msg.mmsi.assign("XDBHTOQWOYAWKXDSJPCV");
    msg.callsign.assign("JDDAMEXLYHWTGPEICQUXNUBXPMURNSWQQUZOFHYCKGRWPSDIOADWUMQJYEBTBIBTBYWATAOCBZKMHNVFJQALWFURGODOXDCJEHOTJTBPKUSKXKOCEGLXJEPXZPNYNBEHYLVGQZVIRJNAPYKHGNUHSSEXNJZVVKTHKTNQGFOITOURFRRYZSLZT");
    msg.name.assign("XQMKNQTBPAKN");
    msg.nav_status = 60U;
    msg.type_and_cargo = 130U;
    msg.lat = 0.997773808161612;
    msg.lon = 0.18284149857871868;
    msg.course = 0.3621690605267949;
    msg.speed = 0.9469953030019826;
    msg.dist = 0.27785503669940326;
    msg.a = 0.8318324237733048;
    msg.b = 0.6722711554515373;
    msg.c = 0.6812143919969458;
    msg.d = 0.5566087051429724;
    msg.draught = 0.23650213388709662;

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
    msg.setTimeStamp(0.5455037452907067);
    msg.setSource(25082U);
    msg.setSourceEntity(47U);
    msg.setDestination(27392U);
    msg.setDestinationEntity(53U);
    msg.msg_type.assign("ATZGTIAJXJYYMXHFBFXIRRSAQQPXZKFLDWMSRRUBZPJHSLYIFRRUXQAEXJZWORSNIUCNLJALPJGBNIHUVMJEOEVOJUWHTLKFFOVUWGQTADFIMFZTSIAENRWLRVTKSQPEGMSKVWYBHKLVAKTFPVTOGMQOQLYHJCHHOSJOKZKPMZYUMPBHHSDWGCGMKBDBPZDSTCZNGUONBCYCDDCVECMXPYIGNYQATGIEOUNZ");
    msg.sensor_class.assign("RNNULWNRPKTEVORPEVPSJRADXQCZFTDPSIFIUISMBUJJEHAFMTWQCKWYDGMDXQTNCPGVKLWESMFBVXRJOAHVATHATYSBWPNJJFYBWCGCICEIOMKHUFEYGOSZWYNEAWBVUOEGJTKWYMILUAGSKAZNWOPBNLSRXJZZHNFRATLXKTVCBGKFOHXRFZDOQLDDELNHDOQZXYMXBSCYDGGTMRHQIGYKKQZRICCJAYJQPXHXU");
    msg.mmsi.assign("BMSJYDPWLOPWWXLK");
    msg.callsign.assign("JNUSOWTOAKYOUQWREFMZZCFBSRWUUHSSLMVRFOAUVKZGVCLWEGGLCLTAPVZOCCRIRFHMMMGTKKRHLZSKDPMIXYHT");
    msg.name.assign("XZVMQWLAIPYPNFZBNQSNGVEKQYSSNPNVZSWSQYLOFUOLASJFNVCRUEAWRGLCBMJKVILBUADODKDSEPW");
    msg.nav_status = 22U;
    msg.type_and_cargo = 103U;
    msg.lat = 0.9030367465695694;
    msg.lon = 0.9370970327163829;
    msg.course = 0.8042115164401008;
    msg.speed = 0.2915382567657123;
    msg.dist = 0.4407723158989705;
    msg.a = 0.03142282076538827;
    msg.b = 0.01496662217410516;
    msg.c = 0.14755687377893967;
    msg.d = 0.7045365808582075;
    msg.draught = 0.2023020361021971;

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
    msg.setTimeStamp(0.12091163037440544);
    msg.setSource(45494U);
    msg.setSourceEntity(187U);
    msg.setDestination(49583U);
    msg.setDestinationEntity(72U);
    msg.msg_type.assign("QUMKPBFPMPZRGZOGWJBJWDTYMZPUQVEBAPCMDKFBIDDTAOYNFWDHLEJCQSVNMYQAJJZWLUFRCXCJIXHFTROAQRNUCNSEINEPGTSKBG");
    msg.sensor_class.assign("RLMTTGYSNJHOKODOTAUXKBJLFMREBXVIUAZYJAMRFDMSKZWHKIJENHNCQRNFXSIYUCHVLQBAMLAWBBDLBPHTOGZVSFHIHJZXMXUDGWFNUPXLER");
    msg.mmsi.assign("OTJHAWXSJZPSEHANRMYALANQUFJHMQJVKKEUKLCISILGLPIZYPBDMBRCALDWHYSLWERCRXZBUSZAQWSUJZWHN");
    msg.callsign.assign("KOUKRSNEVTDPQCQIPPPPYJQLCSRVXSDKYWGZBITOLQUWBMOMRSFGRTKZ");
    msg.name.assign("AQFBNBYHOQWVKVPMXWOTLKRPJBMLQFPBNLFRMFFIPGEQFMEBIPUWLTVXPSDCPSOJENDTQHRWSETSDAAWYFNKCHTCXNIIYGHDVTUDLGIIBBDCKWREDWJYHJUSEEXQAAYAVJVKTYMSMEXSKGTDCRBEAXVUZGWAFIZXAIOPZJBUHRZHIVWQMGCHUYGSCJGXROCGOLLOKQZXNLDUGRUBPSK");
    msg.nav_status = 16U;
    msg.type_and_cargo = 66U;
    msg.lat = 0.033727388110614376;
    msg.lon = 0.48502556515675854;
    msg.course = 0.5743986839846362;
    msg.speed = 0.11418304624811948;
    msg.dist = 0.4383545229971897;
    msg.a = 0.5987943231862836;
    msg.b = 0.33482930922257625;
    msg.c = 0.8576041204827387;
    msg.d = 0.43617679973029144;
    msg.draught = 0.1628692828140368;

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
    msg.setTimeStamp(0.19003400571805384);
    msg.setSource(15957U);
    msg.setSourceEntity(156U);
    msg.setDestination(31418U);
    msg.setDestinationEntity(180U);
    msg.depth_at_loc.assign("SVIXTBBPKYOHZA");
    msg.danger.assign("GUHRZIFSEMMNIS");

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
    msg.setTimeStamp(0.7793851814883639);
    msg.setSource(40542U);
    msg.setSourceEntity(183U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(199U);
    msg.depth_at_loc.assign("ZXPDOIQLKUPKZXCMODMQWBNQRHWWHRBGDIGVNJLXPLEEYJVTIJYBSMBFPHBLJAEOUQIAJRLKETPHCWYETKFMDIHGVCRSSZNXRASVXBYAYLWNXOUFMIUTOIJBPMGKXHVZYAEDWFCAWURHFVBPIHIVJFMAQLSSDYTCGOKSG");
    msg.danger.assign("WSVXRCJOLXSLX");

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
    msg.setTimeStamp(0.7243333412503887);
    msg.setSource(2975U);
    msg.setSourceEntity(176U);
    msg.setDestination(13343U);
    msg.setDestinationEntity(71U);
    msg.depth_at_loc.assign("JVCAPUHILIEVVOMKEFEXOGDCLASNVGASZFSSHGSHTGDIUPYHIRZMJSDMRQUMTCXHKFGARRUOMZAUDXENYZLZKGKKRERPDFJFSBNC");
    msg.danger.assign("UZLCHSZCTMDRAEPMDYTFSSNRTNRAXDOKEUVLAXW");

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
    msg.setTimeStamp(0.519206435718355);
    msg.setSource(56578U);
    msg.setSourceEntity(11U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(88U);
    msg.time = 0.8330332145669155;
    msg.x = 0.6796729770678585;
    msg.y = 0.6505923168446115;
    msg.z = 0.7569861249610769;

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
    msg.setTimeStamp(0.9207995037837755);
    msg.setSource(28212U);
    msg.setSourceEntity(123U);
    msg.setDestination(43499U);
    msg.setDestinationEntity(128U);
    msg.time = 0.4076288650203398;
    msg.x = 0.002613515720534143;
    msg.y = 0.6341912277032372;
    msg.z = 0.9105398103998086;

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
    msg.setTimeStamp(0.6660185726385078);
    msg.setSource(19720U);
    msg.setSourceEntity(122U);
    msg.setDestination(1457U);
    msg.setDestinationEntity(22U);
    msg.time = 0.13955859774281454;
    msg.x = 0.5898297229314561;
    msg.y = 0.652981333973423;
    msg.z = 0.43699079763551485;

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
    msg.setTimeStamp(0.9623378815312756);
    msg.setSource(30267U);
    msg.setSourceEntity(129U);
    msg.setDestination(53024U);
    msg.setDestinationEntity(208U);
    msg.nbeams = 7U;
    msg.ncells = 51U;
    msg.coord_sys = 230U;

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
    msg.setTimeStamp(0.2187917172008682);
    msg.setSource(3180U);
    msg.setSourceEntity(120U);
    msg.setDestination(32249U);
    msg.setDestinationEntity(249U);
    msg.nbeams = 172U;
    msg.ncells = 31U;
    msg.coord_sys = 85U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4502277905883284;
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
    msg.setTimeStamp(0.8698888105326879);
    msg.setSource(4797U);
    msg.setSourceEntity(26U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(133U);
    msg.nbeams = 216U;
    msg.ncells = 152U;
    msg.coord_sys = 20U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.43893782346962906;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.06732614577374929;
    tmp_tmp_msg_0_0.amp = 0.48982077942884394;
    tmp_tmp_msg_0_0.cor = 78U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5145766064236075);
    msg.setSource(6166U);
    msg.setSourceEntity(60U);
    msg.setDestination(40409U);
    msg.setDestinationEntity(236U);
    msg.cell_position = 0.07809634209780358;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6498398935917497;
    tmp_msg_0.amp = 0.46399009065780583;
    tmp_msg_0.cor = 93U;
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
    msg.setTimeStamp(0.26011433592438604);
    msg.setSource(22596U);
    msg.setSourceEntity(142U);
    msg.setDestination(21787U);
    msg.setDestinationEntity(89U);
    msg.cell_position = 0.2960031187989264;

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
    msg.setTimeStamp(0.478006094084242);
    msg.setSource(43355U);
    msg.setSourceEntity(35U);
    msg.setDestination(54289U);
    msg.setDestinationEntity(35U);
    msg.cell_position = 0.6011001712017922;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.2832955718066881;
    tmp_msg_0.amp = 0.8225700711525842;
    tmp_msg_0.cor = 51U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7196463374529188);
    msg.setSource(455U);
    msg.setSourceEntity(61U);
    msg.setDestination(48805U);
    msg.setDestinationEntity(97U);
    msg.vel = 0.20697599861928961;
    msg.amp = 0.06913185872361205;
    msg.cor = 2U;

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
    msg.setTimeStamp(0.3538038851588752);
    msg.setSource(30566U);
    msg.setSourceEntity(2U);
    msg.setDestination(23756U);
    msg.setDestinationEntity(79U);
    msg.vel = 0.9990937573346828;
    msg.amp = 0.28357227628719817;
    msg.cor = 160U;

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
    msg.setTimeStamp(0.956325307561956);
    msg.setSource(6644U);
    msg.setSourceEntity(134U);
    msg.setDestination(47728U);
    msg.setDestinationEntity(22U);
    msg.vel = 0.967221643952558;
    msg.amp = 0.8087859337436364;
    msg.cor = 58U;

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
    msg.setTimeStamp(0.6118261654075426);
    msg.setSource(59515U);
    msg.setSourceEntity(201U);
    msg.setDestination(15048U);
    msg.setDestinationEntity(43U);
    msg.value = 0.21753889600540854;

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
    msg.setTimeStamp(0.1558718632579248);
    msg.setSource(46960U);
    msg.setSourceEntity(118U);
    msg.setDestination(21614U);
    msg.setDestinationEntity(133U);
    msg.value = 0.2003728706421758;

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
    msg.setTimeStamp(0.30910710927609175);
    msg.setSource(21826U);
    msg.setSourceEntity(245U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5556336153339019;

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
    msg.setTimeStamp(0.052854246060045296);
    msg.setSource(42122U);
    msg.setSourceEntity(196U);
    msg.setDestination(16435U);
    msg.setDestinationEntity(60U);
    msg.sig_wave_height_hm0 = 0.7793924895828903;
    msg.wave_peak_direction = 0.4848618806464007;
    msg.wave_peak_period = 0.953811761802353;
    msg.wave_height_wind_hm0 = 0.505360803966637;
    msg.wave_height_swell_hm0 = 0.44375236101223736;
    msg.wave_peak_period_wind = 0.8219032489370686;
    msg.wave_peak_period_swell = 0.08568095288347577;
    msg.wave_peak_direction_wind = 0.6953745018803437;
    msg.wave_peak_direction_swell = 0.3384382207923953;
    msg.wave_mean_direction = 0.26532474284068275;
    msg.wave_mean_period_tm02 = 0.2087087603770853;
    msg.wave_height_hmax = 0.923993030952734;
    msg.wave_height_crest = 0.8526155381054498;
    msg.wave_height_trough = 0.603638349586336;
    msg.wave_period_tmax = 0.1912786261003222;
    msg.wave_period_tz = 0.6661121462604869;
    msg.significant_wave_height_h1_3 = 0.38620592789035235;
    msg.mean_spreading_angle = 0.9473846813969983;
    msg.first_order_spread = 0.5044009614497451;
    msg.long_crestedness_parameters = 0.9111756987965014;
    msg.heading = 0.7942160419984422;
    msg.pitch = 0.4829926642166983;
    msg.roll = 0.05971528519306202;
    msg.external_heading = 0.5875499909935129;
    msg.stdev_heading = 0.2571457202547358;
    msg.stdev_pitch = 0.7713445867397137;
    msg.stdev_roll = 0.018560683596424488;

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
    msg.setTimeStamp(0.984750848069623);
    msg.setSource(59044U);
    msg.setSourceEntity(160U);
    msg.setDestination(31301U);
    msg.setDestinationEntity(223U);
    msg.sig_wave_height_hm0 = 0.18262457091565854;
    msg.wave_peak_direction = 0.03224612523706594;
    msg.wave_peak_period = 0.2944407346883542;
    msg.wave_height_wind_hm0 = 0.5883362114176675;
    msg.wave_height_swell_hm0 = 0.9644454788883577;
    msg.wave_peak_period_wind = 0.5717894287675103;
    msg.wave_peak_period_swell = 0.11224396825688321;
    msg.wave_peak_direction_wind = 0.4363750296397756;
    msg.wave_peak_direction_swell = 0.5510377919329876;
    msg.wave_mean_direction = 0.13859917969641966;
    msg.wave_mean_period_tm02 = 0.7522956282728673;
    msg.wave_height_hmax = 0.3680376909625842;
    msg.wave_height_crest = 0.7814451913841056;
    msg.wave_height_trough = 0.8918854555532482;
    msg.wave_period_tmax = 0.14818163661673556;
    msg.wave_period_tz = 0.268969903487259;
    msg.significant_wave_height_h1_3 = 0.11431138023706999;
    msg.mean_spreading_angle = 0.7895895156962855;
    msg.first_order_spread = 0.7217721859594208;
    msg.long_crestedness_parameters = 0.8045218023561785;
    msg.heading = 0.4604796650466092;
    msg.pitch = 0.3304409231923552;
    msg.roll = 0.06472152186785429;
    msg.external_heading = 0.39077979829368803;
    msg.stdev_heading = 0.30997110905032854;
    msg.stdev_pitch = 0.7895507312029602;
    msg.stdev_roll = 0.881454538085112;

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
    msg.setTimeStamp(0.20728775899705332);
    msg.setSource(17754U);
    msg.setSourceEntity(163U);
    msg.setDestination(50848U);
    msg.setDestinationEntity(138U);
    msg.sig_wave_height_hm0 = 0.9755927601877562;
    msg.wave_peak_direction = 0.11206231689538071;
    msg.wave_peak_period = 0.9773509295604929;
    msg.wave_height_wind_hm0 = 0.8753725669604695;
    msg.wave_height_swell_hm0 = 0.9938341808483482;
    msg.wave_peak_period_wind = 0.4449614669782115;
    msg.wave_peak_period_swell = 0.23512749631951146;
    msg.wave_peak_direction_wind = 0.4124784957744694;
    msg.wave_peak_direction_swell = 0.5516929022844859;
    msg.wave_mean_direction = 0.8776776372618802;
    msg.wave_mean_period_tm02 = 0.2123076822343528;
    msg.wave_height_hmax = 0.9382434713574741;
    msg.wave_height_crest = 0.5754146438631158;
    msg.wave_height_trough = 0.606113595956994;
    msg.wave_period_tmax = 0.23152828016276106;
    msg.wave_period_tz = 0.4665425326239513;
    msg.significant_wave_height_h1_3 = 0.6414290440767723;
    msg.mean_spreading_angle = 0.17666811880035882;
    msg.first_order_spread = 0.8204520395376925;
    msg.long_crestedness_parameters = 0.1620429962993366;
    msg.heading = 0.5817024301290161;
    msg.pitch = 0.13946841039587077;
    msg.roll = 0.012798668449756634;
    msg.external_heading = 0.663163805018607;
    msg.stdev_heading = 0.8501337587727735;
    msg.stdev_pitch = 0.4631623018652449;
    msg.stdev_roll = 0.3179841961794272;

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
    msg.setTimeStamp(0.49431179564885075);
    msg.setSource(17805U);
    msg.setSourceEntity(99U);
    msg.setDestination(37329U);
    msg.setDestinationEntity(211U);
    msg.name.assign("CDVLKZIECZLWVVUZBIZDBXWBFAJQBGXPVUYTJIRMZOTRSYKZRVTNFVIGFX");
    msg.value = 128U;

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
    msg.setTimeStamp(0.9707196536934845);
    msg.setSource(46063U);
    msg.setSourceEntity(119U);
    msg.setDestination(21517U);
    msg.setDestinationEntity(50U);
    msg.name.assign("PTEJYERJDRBWGMQJUQLHVVPRMCBFAUKZDYVFDCSZVDJEDYRGAPMJEZYLAOQNPRWRHNWBFLCUFBIFSIMHEVNMYZEMSIKOTCAFITENBXHTLAEDGHLIUCKHZJOXNVHLKCHXNXUABQTIKGWRQVZGGWSPOTOGSGBOTKCHNWUUQKDAITXHDYAYTVRRQCXPOQOLMIZYOROPIJUDPTJNVEMSEXN");
    msg.value = 182U;

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
    msg.setTimeStamp(0.5900818130089908);
    msg.setSource(48421U);
    msg.setSourceEntity(58U);
    msg.setDestination(57653U);
    msg.setDestinationEntity(114U);
    msg.name.assign("FRYVQCKXFMDNMYAUADPSQGCYVWUQBBWGIBUXALEVBILEKFCUXROFZYXVJZGIDWSLYTHEMMONPMYNJFJNTEQHGV");
    msg.value = 172U;

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
    msg.setTimeStamp(0.2752789495395219);
    msg.setSource(65385U);
    msg.setSourceEntity(144U);
    msg.setDestination(47555U);
    msg.setDestinationEntity(204U);
    msg.name.assign("DPEKZNGMKXPDAFZHLOUKSLIXYNXANAEMOMRIDPUBWWBARSONUNJYCSANZILMXCSFCMTYELRRNADUTUJRBYBTSYHKMXJMGSTHVFBTHAYFIEHVZCRWZZQYWOPLQRIVGIBSRKNKBXEGWOQWJTVLHOKKFLCBYHQOVOMFYXLJEPJKWLZCGIISVHDPRSEQQOTUPQIFNDGQVMTOUJMZHJEVCAGNUCQEFUAGXXPT");

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
    msg.setTimeStamp(0.6644059062714562);
    msg.setSource(33630U);
    msg.setSourceEntity(13U);
    msg.setDestination(39345U);
    msg.setDestinationEntity(234U);
    msg.name.assign("MDWKZJVVIJVCSTGJXPEOPRYOSDQHNLERONHSLEUFYORHLJAKQCGNXFQGGXJZQUQAKMCIVUTLKUVTQHMFINWWBAVBXFJKWCKEBHWNXXSFCMYGEBWLAEDEYOFXGHGWVZIMZSYYATDZLUXNPCTIRJZSGOALVDLEXOBZFABDGBNCQZATMRIPIITYMJFLOASNRZGBPLWDCPXHYDTKMPEKT");

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
    msg.setTimeStamp(0.6066525977164475);
    msg.setSource(8996U);
    msg.setSourceEntity(107U);
    msg.setDestination(30697U);
    msg.setDestinationEntity(246U);
    msg.name.assign("TRCZXYFJENFNFUFTNBXMCQWTQSSTSDHEOYJJJRLOKFFABGQMCSPCFMOCVWVLILOVUCFWWRHUNGXWIBZNUCTREDUAAUPQYGNARVWHWACEGXUOPLLXBVIQMNDJYYAAYOJCRXHZUKRKPMEVHYVGITPXZHGPERQXHVBZGEBBKPWOMQDUKDZIQTTZBMJXLPRYXSOIBJEATNQZISAYKJMQWESIPHFJFLVMIYDSLWDTLKOKKMZNSGZHGLUHC");

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
    msg.setTimeStamp(0.6293310913472523);
    msg.setSource(65413U);
    msg.setSourceEntity(159U);
    msg.setDestination(27835U);
    msg.setDestinationEntity(14U);
    msg.name.assign("VOAYDNLGAHLACEABZVARLSNIMKMRWFYZNODKBJUSXNWVYNVOXCCEBUHMMEKZENVTPPGKFGCEMLLVWUPPOIQYCZRFHQNKZBAWOSLHRPQKRSTAHUULHQSSIXTXLTVOIJDWBXPEFJGIWBXVEYNVYBGFPDGD");
    msg.value = 151U;

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
    msg.setTimeStamp(0.5822709426404378);
    msg.setSource(319U);
    msg.setSourceEntity(236U);
    msg.setDestination(14739U);
    msg.setDestinationEntity(16U);
    msg.name.assign("MCPWTYUHAWVSCEUURGZJGCLMBRCYJRUJUOVFLNHTFUWZHQDRFHBLWGBEQTMOFCQIUGMPDTEYPSEOGYKLETXDGDSMSEAXSJABNGITJZPMTXTILLHXVCIRVJVWGYKNKJOPLIABOBKMC");
    msg.value = 40U;

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
    msg.setTimeStamp(0.884048601748917);
    msg.setSource(59437U);
    msg.setSourceEntity(41U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(253U);
    msg.name.assign("KGIDMOJBYRVTSJSOLAAZDRDEJMBYHIPXEVRDLUTPYKURUIVWQZNKQLPDOKFYTGVPMAMEBYWRHITKQ");
    msg.value = 135U;

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
    msg.setTimeStamp(0.6456656419690411);
    msg.setSource(42288U);
    msg.setSourceEntity(150U);
    msg.setDestination(46268U);
    msg.setDestinationEntity(230U);
    msg.value = 0.7880276269376651;

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
    msg.setTimeStamp(0.792872288521065);
    msg.setSource(27974U);
    msg.setSourceEntity(23U);
    msg.setDestination(29540U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5182447872891361;

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
    msg.setTimeStamp(0.9889047276325384);
    msg.setSource(16717U);
    msg.setSourceEntity(212U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6876087254402325;

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
    msg.setTimeStamp(0.8268557474105472);
    msg.setSource(23517U);
    msg.setSourceEntity(25U);
    msg.setDestination(34948U);
    msg.setDestinationEntity(89U);
    msg.value = 0.3014684987703036;

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
    msg.setTimeStamp(0.02579854553850902);
    msg.setSource(30791U);
    msg.setSourceEntity(239U);
    msg.setDestination(9702U);
    msg.setDestinationEntity(216U);
    msg.value = 0.330872611496146;

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
    msg.setTimeStamp(0.010853269109138197);
    msg.setSource(10785U);
    msg.setSourceEntity(150U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(25U);
    msg.value = 0.8703940548361216;

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
    msg.setTimeStamp(0.5349659039247572);
    msg.setSource(12218U);
    msg.setSourceEntity(48U);
    msg.setDestination(38450U);
    msg.setDestinationEntity(249U);
    msg.value = 0.17583654861955533;

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
    msg.setTimeStamp(0.4664241966298892);
    msg.setSource(25982U);
    msg.setSourceEntity(149U);
    msg.setDestination(59713U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7129159283122094;

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
    msg.setTimeStamp(0.425218678788693);
    msg.setSource(635U);
    msg.setSourceEntity(228U);
    msg.setDestination(5905U);
    msg.setDestinationEntity(42U);
    msg.value = 0.3476148407009433;

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
    msg.setTimeStamp(0.9151897613316363);
    msg.setSource(57419U);
    msg.setSourceEntity(124U);
    msg.setDestination(6522U);
    msg.setDestinationEntity(180U);
    msg.restriction = 163U;
    msg.reason.assign("AZRYZRFZPLFBSSJANXJUIPCZBGPORSKAYGBKKBNIOWYSQDOAQLRXEJTWCOLVCBNUFJKGNRCHKIUPMAUENWEGTYHHCHIRYNKSZUGZHWPIHGMKVVLAOQMTVTHWRSQUFNTQJZXMEVQWJUEFFDCXLVUGFTTZULXGIDYOVYCSDBHQWZDPMTPIDIBYXEYWXJGEQCXEKMXLLVYMRKDIBMNRWQJPMKBEAMADFJSWPLHN");

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
    msg.setTimeStamp(0.96768723063927);
    msg.setSource(46596U);
    msg.setSourceEntity(142U);
    msg.setDestination(32281U);
    msg.setDestinationEntity(236U);
    msg.restriction = 49U;
    msg.reason.assign("NZRXUMANBPFTJPIFMXNJNHXYBLJAUGUBVKNAGXQQOYSHRQONMDTELKQSDFFUIPVZYMNGIXWGHCAPNOQRBPHABMPZFUEOHCVUCSZESDGXRTTWFJYWXPNZGXHVBBGCICXHWRKLYHIATZEOI");

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
    msg.setTimeStamp(0.12080502382825897);
    msg.setSource(23266U);
    msg.setSourceEntity(230U);
    msg.setDestination(21787U);
    msg.setDestinationEntity(97U);
    msg.restriction = 62U;
    msg.reason.assign("MQXJIBOCVXYIXGUDNUAMWGUKYTALPEQFVJCSNSKCMCYCWISQOAYUORQPFZPLXWKMDNRDZYGMERLIIHYYFDKVZEQDGKPMVFZIFRKCQQSENHZSGVTATOTDTPNAAIYILUHUZXGHTVCGFGPEEHJEJDFOALOUQVNIFJPLSYHRAHKRUJPKQATPNKRBJSZWBJERHW");

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
    msg.setTimeStamp(0.4272720471556446);
    msg.setSource(9034U);
    msg.setSourceEntity(18U);
    msg.setDestination(58879U);
    msg.setDestinationEntity(91U);
    msg.op = 195U;
    msg.request_id = 3892482492U;
    msg.entity_name.assign("JSAGIHOSTBHXOEAPREBTKRPEYMZCMPCUANQFBLYFWASCICNGJGMGFLYKGXRXNAOOUDVMDRFZXENFMSWZIKUDLMVPQWCABJHXFYVKHICXFFADZUTCDWLISTCGBUFPKTDJOEPQMWLHIMYZQJRIBJDPJANKRHJQAWYMQCLCVHOOSQRRABXTSUTZENDGYUTVMDBZEHXUWUPHJPWINDZSLE");

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
    msg.setTimeStamp(0.6830126086118378);
    msg.setSource(1930U);
    msg.setSourceEntity(81U);
    msg.setDestination(53145U);
    msg.setDestinationEntity(100U);
    msg.op = 145U;
    msg.request_id = 965862420U;
    msg.entity_name.assign("ANXOHSFNBPVWJECSNPXGRZLQIOILKDWSVUHUJOILLZPBPFFWXVIZAHZPMGVKKEMPFJPTTTYYYYIARIXSLGYPSKCQQLWBJFKRDWBDDOOXDMJJWLEDHFDCSFNKUYTGURCJDUTHFCUAXZCZUMEARNNEDRWAEJQQEEBBXRXPARSTSTURKZGVVYHTNVQQNHIMHYJAABM");

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
    msg.setTimeStamp(0.8819454149262284);
    msg.setSource(18277U);
    msg.setSourceEntity(230U);
    msg.setDestination(7201U);
    msg.setDestinationEntity(44U);
    msg.op = 216U;
    msg.request_id = 1296786064U;
    msg.entity_name.assign("QDHMHADUTDCHFVBSXTGTVOMPMSFNJXOHPXECZBGAVOEQPKLGMTMSJBEJEQDZSYBCQNOYGKAWKXNESECQFRCUUSDFAAHBMLNIHTRXRSPWZRKLWFIQRRSSDYBQDWEBPDJMCWCKLDQPUXRAKJOXIKTIVMNKUNVYHSTA");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("WTLOVONDGBPFKAAHUWDRSBYIMFYVDFKLCUWSPEHLZRTFOIKOUXCKEENTVMMBCKZUPRONICWPJARQRELXWIZYDWUGCGGGYFWQDUZAPZDJKEPEHZCBLUUDVELLIZFZPQSQQ");
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4962456591454383);
    msg.setSource(40897U);
    msg.setSourceEntity(133U);
    msg.setDestination(8743U);
    msg.setDestinationEntity(19U);
    msg.name.assign("RWZTMNGUWSMDXRWJNLRJBGAZPJNVDGCYTYHBPIISOOMEXTSKHFKIGVOGCOGXPXHCZWAPKVOBJDXPCWHSDMXUIDMMXXZVHLUYKMEEXAHCDFPCIFIPBRWRJZRASFSQVTQYQUHZJNLNUUGTDYJZCXOOTBLLEJBEALMZPAJRIWLEHHNGAKUSYC");
    msg.type = 100U;
    msg.default_value.assign("RDZVPHWLUVBEKGTCRKPRROUXOGOSBMCAOBZYBYYLSVNQFAQALPMBDLFIQYXQAKHHFDTROFNVMLGVCUPFJYMPJWDGCGFSVUTYVOSRWEJQNSHJRJIMZKEPQGJXHIDJCKQBYJTMPZIAUMUUWIMRPYMASGEDGKUZNQBFCEHABQWTXCIETEHZKQFUOSLCWKDLXPFTHOLZGNRYVDZIWAN");
    msg.units.assign("GWRDDQMDZVOKVTJFMEBWGSHNNOGLIATEHREXPRSVMHOGCSPNUHBBBBTMLWULZXEZAQCGLXLMYQMTHMBISSZFFUWIMQRXZFZBOJTNEBHCDHCSZKRTLJIANKCZDRCKGJHROHINJEVBEXNAPYWFYTJOOZUWNEWIUQLKPMAJJSUIFOCJYRBSAZIDXTXVOUGPYKKXUWYVAAFAYQQQIYDLPAVRNSDVM");
    msg.description.assign("XZWMUAROWRKWLKEIZMUJEFSIYUMYL");
    msg.values_list.assign("UBHEFFZIVBDRYXKGZOLTYGZTFCGXTALUWOWHYLWNDZCMXKJCEMGUISRJBYTAUMDXEWXHXVMQVLKLUHCKMGCCEGHSWCMUDKSVBLHZEFYZBYBRJEQJFISQWNXRNUPXJDRIQSJQAPTQSPAVOY");
    msg.min_value = 0.7114206020522832;
    msg.max_value = 0.8160280089265931;
    msg.list_min_size = 189U;
    msg.list_max_size = 79U;
    msg.visibility = 95U;
    msg.scope = 144U;

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
    msg.setTimeStamp(0.593977091158552);
    msg.setSource(46087U);
    msg.setSourceEntity(72U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(180U);
    msg.name.assign("AYMEMGPGACQDEHELOVHDVSLHITNRNINZHRHQMXKKJXZTGVXFQWLTJKKRZNOYRFNPISCXOGVZLSOUSEYSFQNUCGBABZRKVRPCCDZWTFPPCLNTPZKWJGKSQJAMDTBWHQOBIYSLKSFSPYGVWFIVYBODEMUILSCJWTHMFFRXDEAOXEJXMUJIBKVQTRLDJQIWRGCQOWXOOPUUJYHNPYNGAUVEZTABVUXDJFEYLWDDULTRMBHACCNHKWGBUXEMFA");
    msg.type = 142U;
    msg.default_value.assign("QPRQBVCMDULLONFCNFJWRKVJSGNJFQWSDVZRFRFNMOWBKMBHOPJOHJRLFMJADTSAEKZRQIHELBHXNNDIPMYCZUYEVXCSVGXYGMZPJKSXRSPSUCLBRGSUWGUAMDNYQKAVHVAGIVIKXTKCZWHCYCQEWPIZQKBECJDVFQAZUQOPMUPILGFFBHBTXYOWISEWXGGAHXJOPRMPHGOYSYOAUE");
    msg.units.assign("SRSUACNWWBGFVQGWFRCXZKWEHKKQJJVFSQWUMNVAJCRHRPLIZNCNLDORMQWGXRBOMLLHTSSHPUOKHXNAJZGRGNDFGMNHEZTLJIP");
    msg.description.assign("KOKCZANEOQDPTLWOFXIAVVOKPWJYMCJWQDHRFLRWKLERECVCVJDUCAZMNIAXQMQQSOIGSTPALJHYOUEZYFHZURHXCMSOLDJEOHDH");
    msg.values_list.assign("AWRLKHSNCNLPPDZVDHVWTCIWIHAGBADQSHFWVVLUXSTEODSSWJXCDOPYIXXGYKAERYTXUYBYQOHTPBJERNNWMJLYQKXIBWMUKNVGBXFOJRNYFTLSOPIBPGFISWZGZZYFDCUOUIANQMUJGQTBNYZCZJCEAKLTJZAMMSERDCPXHJFIGKLFHQMXRQOEFMRWVNKEFUVWAPEKHEADJLROTTLGTFSXMBPVRZCHNMHIRSVEZMAPBCDOVUQKKIJZUU");
    msg.min_value = 0.17740753574288148;
    msg.max_value = 0.7064599110265697;
    msg.list_min_size = 225U;
    msg.list_max_size = 144U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("XCZMTMRVNWIPJHMFHWWWYDZGWCHFOAUELNNXVYBTYUPCBGDJNGLTRBGWXZRISDVBHAUXJKKUVZQRXFVAFCULFZLHYONMIFVGK");
    tmp_msg_0.value.assign("MKPIZANXBBGPWOXJJYDMGSNHGGESHLQZRMWC");
    tmp_msg_0.values_list.assign("ANBZSXUGNERYEDYAVIPEOJTKKDLUEMRPHTVPMALCMKPBRPHTRENKTHBISOWOSRDRUOWUDXDTFXSJAKAGFOXKVEYGLFJWFDGWEFMGSXMJYBOCICZGBQHIQTWMDCZGBVLBJCLKUZHNTORBWHQJ");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 254U;
    msg.scope = 228U;

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
    msg.setTimeStamp(0.7215194121755242);
    msg.setSource(56475U);
    msg.setSourceEntity(232U);
    msg.setDestination(6751U);
    msg.setDestinationEntity(91U);
    msg.name.assign("HKHBFGZSDEZDQBGREPXDWJAMXSAHTBYMRXZPSKZBWTIQXAOKERIZWEY");
    msg.type = 9U;
    msg.default_value.assign("BTKYLFQOSVJAAJZFIFSYZUFBNAKNWZPZGLUPMIWUDLYHVPHQYARPWIHTTYGMKPEHQQCQSRYRUROFGXWBNAUJOBXVRZGHBXDCSYXXFDDEJLIXLIMJAYTVDGMXZTDAVRMEIHEKSKACPJWZFUUHSWEHWOOKLTRUCQEZYGDLSOZNFPMLGRIKBUXMGQCNGVAQPORIBEWXJJGJKTMDZNYDEVOQKOEKEJCSBICFRDWNBPBCANMVT");
    msg.units.assign("NZEKQHUCEJOMHHJRUITUIDKRFKSNAKOTZIOABAEXGLWOMGFGSQDDCVKAJNRFWWZYIENXKOLRUGBMMPKLFOTVFEBDPWXHHXUDWPWYLDVXEBEGCNBYDZTSACJSQWYYTVKAIRBYYIQZNJZFBXWNRRFPQVWISCWSAIVFUPAXKXBUTHZLEJMVLRSPACKNVZQMHGGOQYESVCJDNMCJCOHUPUGCZPUHOXDDQVZBHTIQGJLRYTAPLOTSLRITMP");
    msg.description.assign("PAOXCUTXFYUMIQGCWCHBEIHCQWLLOVLJMFNJWGLUYNDASXGMZKESHRGFAJORSRMJBVCYXBHKUTJDSPQFJFNHQZEAVGFFJPQ");
    msg.values_list.assign("TVSFHXBVEPCTREOHWPVQMUYJRPGAZDTAWIBKEYZBMQDNDZXFWRCAYNJLZWDEQJKJFELJZTHNHSKJINODBSXFMTGUBRNMAYROMWDGIJIWCTAXOVLRJZZNSWXWUOKCMHFUUCTULUNCQPLRIHVCIWQEESKFOXGXPIEOGZVYGZEVOXY");
    msg.min_value = 0.5220900210966853;
    msg.max_value = 0.3606867243352371;
    msg.list_min_size = 129U;
    msg.list_max_size = 0U;
    msg.visibility = 118U;
    msg.scope = 143U;

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
    msg.setTimeStamp(0.4032105968593708);
    msg.setSource(60927U);
    msg.setSourceEntity(10U);
    msg.setDestination(34696U);
    msg.setDestinationEntity(52U);
    msg.param.assign("TEHGDFIBSKFEISYJRLLCFFZMAAPRTUESWGRLMBADJIHXORAGSZ");
    msg.value.assign("MYEWYYVGRFXPLICETAHDZQHJIBKFZPPASFWNOGJEFVOQFTAXLXZREXUBHDDTWHLKWIHCCATPNUXEIBUFBQMOJNGMBJQTAJCKAPQVKLTACLIDGZRKVBJUDZMXWVWNYNSJPQBTOKSLWZVPCSCOKSUGYHOADPXUPISJQVEPSNWZAZB");
    msg.values_list.assign("LEMEPBKJDDTUXZHLBXY");

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
    msg.setTimeStamp(0.7474374546981517);
    msg.setSource(11296U);
    msg.setSourceEntity(217U);
    msg.setDestination(18397U);
    msg.setDestinationEntity(159U);
    msg.param.assign("LKVESBLNJVQIAEIOHUHOWTDUXBWBQTFALWVCWWYZRGPBMUPYTLPHDQHOKDCGHAVHSLPMLVZOWCYEMXYGFIAMQLQSHNKVJRZFZESNQUUEPJYEDVDYFAFKRBCMBEFNKXGMAGOXRVREMPKAQSAGZTPASJOIWXDRTSMBFZJGBIIMOSTFKYKDSNZLRJEFCPOZCJ");
    msg.value.assign("VHMJOGWKWVMWEWJBGIYGOCRFDRATQPYTWKBVSUBZFFTAMXMQBJEYOPBSTCCFNFKVBFTDDOPOZUBTNUJJISEDURHNWAQYTKNHRBXKVLLDMVYZZQGCXZZAJGYANEUOEJWNCNXKBMZXPVMYDZLPIIHWSJASOFILQSUVKQFIDCQEWPFRREZNPLVXUKARRVIZPHHCPEIQGJLGHYXYCQTHEKGTIANEQXTOXNICLYDSKWUOLXFDA");
    msg.values_list.assign("NSKUWQIKXVXZITMMFRKLMDNRYCDKZVYYDHBYPFAGVUWHLFXJEGXVZSPUXQJCISPXWNLYMKLQBPZPYVDXAUMAXCDUAWGZRESLYGAUJIIHSORYHZDBWMCSIORUZQKAPOXGTMEWREVOBNRRVAGKCSJZJNTFUWTEIPMGTQHAQSENLLJOHHWBOUOYEPKGORRJAQFDVFFBDQTIWXHNODCEEGSU");

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
    msg.setTimeStamp(0.9355367084676508);
    msg.setSource(5782U);
    msg.setSourceEntity(143U);
    msg.setDestination(57065U);
    msg.setDestinationEntity(18U);
    msg.param.assign("DWUTZHNDVRCYGFTDMTRYISKXUKEBFUQNQJGPODYHKEMRWHVSWIRLJZLWMZPKFJUEZTQGQVHAGXYBIOFWCHHCBYJKTMYTYOKUSQDKPWVMAXKNURJLIPGALDSNQARPCSQBPZGAANIRWWINKUUNSCIEPMLNFGLOEGCBPIEXOJAXQTEWJBTHOOCZLGVZHOFSKVNDFFBDCERLILBOMZCYSYVQDEIUUXDAVVPAXMOBSZY");
    msg.value.assign("ZKBRSIRCEPUUQSEKZMRFCYKLOQKTISZCYOSWGJKIYXHWIUDQFOXMGHQHUGWYENGJVAVBGIIUGRCMODMVFFEZDXXFQJEOVBXYCRBBGRPLWAUPJTOZCBVK");
    msg.values_list.assign("XUSPMCKWLANVDZQITSTWTVGQIDIURVIQCOEEB");

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
    msg.setTimeStamp(0.7306373840160976);
    msg.setSource(26312U);
    msg.setSourceEntity(28U);
    msg.setDestination(64008U);
    msg.setDestinationEntity(242U);
    msg.op = 49U;
    msg.version.assign("HSBAPSJBPNTFUGWAFWEIBYLIDCACJFQGWHNRGPKYMHSZVIMMZODKUXCVGGZYTMBWEFCHZXYEKXBWJANPFGROWMDCZEYVOJCVEQQDKUQMSSJMUEOSVUNTIFTCNRTZGMYWPHORVNPXOLTVIHGODUFYOAJLKLUAPTIEDTNHXSAKTCGAQGFJKPZZRZKHYRLTSCLZQNMNLXRUQLWB");
    msg.description.assign("EZXPLURQHESIVVZRIOCDNZYOHQNKFHTMQPGMCASCZBNMSRYZECHDZNWWBDKFLSTVXXGWGTJFHKAVTRJNHGIFVTKURSVWS");

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
    msg.setTimeStamp(0.6922320485580615);
    msg.setSource(49117U);
    msg.setSourceEntity(171U);
    msg.setDestination(49049U);
    msg.setDestinationEntity(51U);
    msg.op = 167U;
    msg.version.assign("GYIZEQFFWEKWMMIYYMJNMSUVGLRXEVVOYPGTZHGXSFBMULBKIGNLRNWWQOQCWQSSSRVOPJIHIBKGKLZFWQQBMDGUPQJOAYMFDRXQCHZJBVBPHPZTVRPTDPTAZWDYCYXWNURNPOADJCCNLXJELUWHRCUUOTEJSVPOSKTXIBYLNO");
    msg.description.assign("UPZELIBZVUQTQMSPUJYQRFXBSLVBJINQISWPGCBINNDFNZTHVDYANDRCVGRHAXSTSDOKYKCAKWYHVJJQJIGOUCTZLJSJXVGQKPHRAEGRVQHOPYKZXYNCUMALONWYOJDBDOXJZHVDHAOBCVHQGIERUZMJMTLTXESKYBTZEMCIIFXHRCUEIXFPRADAZGHLQRSFCVTGULKGSWEPIFYAKUFMMPXMWUNZFKCKPWNWTALLBGLDWM");

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
    msg.setTimeStamp(0.7149874682964902);
    msg.setSource(58758U);
    msg.setSourceEntity(135U);
    msg.setDestination(291U);
    msg.setDestinationEntity(17U);
    msg.op = 49U;
    msg.version.assign("QDAHISFLWTGJZZIXENNKDAGMDRYKQUAGIJAZPUCHEFYVKLFWFCQXHISIMRSMBQYBFCMUHZEGJXJOMPRASNPIIGAFDNQBGNMELCDEUKUG");
    msg.description.assign("XGKUNHNXLUKILSQHHZJQISANTMUIZJLSVUWRFOKNNVGYBPMAJKPZQBZWYAYCDNKXEGUIMPETCMNQNRWIAHBEYLYTJQMSGZVFODRDFBZZUASVDNWLZDTDHKZPQMATYXTROAMWAOVGUPJECYFIFEYROSWGMFFFIBVERSWQXTWX");

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
    msg.setTimeStamp(0.32755327287250413);
    msg.setSource(63377U);
    msg.setSourceEntity(70U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(220U);
    msg.value = 0.2104565450874356;

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
    msg.setTimeStamp(0.9487088114265887);
    msg.setSource(38780U);
    msg.setSourceEntity(199U);
    msg.setDestination(60584U);
    msg.setDestinationEntity(230U);
    msg.value = 0.9354321411594582;

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
    msg.setTimeStamp(0.3760806531027353);
    msg.setSource(31852U);
    msg.setSourceEntity(179U);
    msg.setDestination(46328U);
    msg.setDestinationEntity(15U);
    msg.value = 0.8161368336728769;

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
    IMC::BDI msg;
    msg.setTimeStamp(0.22378874451562458);
    msg.setSource(55813U);
    msg.setSourceEntity(214U);
    msg.setDestination(60132U);
    msg.setDestinationEntity(25U);
    msg.soh = 18815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BDI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BDI msg;
    msg.setTimeStamp(0.1318311560194214);
    msg.setSource(38723U);
    msg.setSourceEntity(127U);
    msg.setDestination(41105U);
    msg.setDestinationEntity(221U);
    msg.soh = 22207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BDI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BDI msg;
    msg.setTimeStamp(0.6280355012529865);
    msg.setSource(11793U);
    msg.setSourceEntity(137U);
    msg.setDestination(5997U);
    msg.setDestinationEntity(247U);
    msg.soh = -13683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BDI #2", msg == *msg_d);
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
    msg.setTimeStamp(0.18705363803795283);
    msg.setSource(65317U);
    msg.setSourceEntity(101U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(174U);
    msg.value.assign("QUBKRYDXWFVMCCUAFVRQFQLNFQWYDQFCLRWITPOJTDPGBPRTVZHNHTMUDCMSCZJAPDVQPJBCMTMWQBSFYBZYRXLEIWGWL");

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
    msg.setTimeStamp(0.2922198964875571);
    msg.setSource(59312U);
    msg.setSourceEntity(74U);
    msg.setDestination(19126U);
    msg.setDestinationEntity(0U);
    msg.value.assign("ZKBPQRBSUTRJMJKZGGJPCUFEYVOJSCRFAXK");

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
    msg.setTimeStamp(0.018731736523769582);
    msg.setSource(64044U);
    msg.setSourceEntity(112U);
    msg.setDestination(30459U);
    msg.setDestinationEntity(174U);
    msg.value.assign("HWAUAIQFCHMVAQTDXYCCJUARWBFNSTRZXJIPWMGBPFZXC");

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

  {
    IMC::QueryBmsData msg;
    msg.setTimeStamp(0.6430124411461866);
    msg.setSource(26343U);
    msg.setSourceEntity(71U);
    msg.setDestination(57075U);
    msg.setDestinationEntity(79U);
    msg.op = 194U;
    msg.pack_idx = 77U;
    msg.sbs_register = 187U;
    const signed char tmp_msg_0[] = {-1, 96, 69, -123, 120, 58, -27, -54, -38, 60, -45, -123, -104, 86, 126, 61, 19, 23, -24, 75, -28, 27, -26, 88, 11, -24, 68, 55, -125, -48, 33, -9, -68, 63, 100, 33, -61, 14, 71, -36, -40, -52, 39, -62, 36, -78, 1, 2, -55, 26, -32, 56, 11, 75, -63, -60, 16, 83, 67, 107, -51, -53, 57, -61, -117, 95, -42, -30, -33, -81, -112, -8, -49, -25, -100, -2, -54, -96, -31, 14, 58, -113, 120, -88, 102, 16, -99, -12, 121, 82, 58, -23, 16, -11, 58, -47, 90, -120, -32, -17, 16, 57, -81, -2, 118, 102, 55, -123, -71, -77, 101, -89, -27, 27, 51, 41, -7, 3, -74, -65, 15, -119, 77, -128, 50, 14, 80, 39, -94, 56, 32, 97, 15, -102, 33, 46, -52, -23, 2, 111, 32, -70, -64, 62, -46, -106, -64, 53, 51, 75, 70, 21, -125, -48, -11, -77, -21, -42, 64, -116, -41, -77, -101, -103, -26, 78, 30, -116, 20, 123, 39, -82, -118, -26, -121, 69, 113, -38, 39, -8, -29, -101, -68, -66, 3, 104, -72, -128, -67, 83, 84, 47, 65, 87, 1, 24, 100, -24, -93, 92, -117, 25, -56, 58, 15, 3, 19, -94, 91, -62, -12, 115, -69, 71, -7, 112, 120, 92, 42, -87, -45, 53};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryBmsData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryBmsData msg;
    msg.setTimeStamp(0.4354500439659086);
    msg.setSource(18327U);
    msg.setSourceEntity(117U);
    msg.setDestination(29411U);
    msg.setDestinationEntity(66U);
    msg.op = 92U;
    msg.pack_idx = 35U;
    msg.sbs_register = 26U;
    const signed char tmp_msg_0[] = {-116, -73, 37, -61, -115, 116, -114, 126, 50, -38, -92, -21, -18, -22, 97, 38, 55, 93, 109, -60, -3, -64, 40, 94, 69, -87, 38, -63, 20, 95, -20, -63, 108, -38, -125, 25, -64, 87, -98, -25, -48, 59, -44, 65, -116, 57, -97, 18, 72, 94, 62, 12, 119, 15, -109, -99, -96, 72, 35, 56, 108, -26, 50, -75, -79, 5, 30, 51, 120, 67, 8, -126, -113, 66, 13, -71, 20, -63, 119, -88, 99, 68, 101, 35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryBmsData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryBmsData msg;
    msg.setTimeStamp(0.49874630958534705);
    msg.setSource(62067U);
    msg.setSourceEntity(83U);
    msg.setDestination(31181U);
    msg.setDestinationEntity(220U);
    msg.op = 97U;
    msg.pack_idx = 93U;
    msg.sbs_register = 144U;
    const signed char tmp_msg_0[] = {47, 39, 116, -28, 90, 80, 2, -16, 100, -92, -74, 87, 52, -113, -41, -77, -93, 71, -104, -67, -127, -126, -30, -116, 51, 59, -7, -103, 67, -28, -58, -89, -8, -12, -59, 11, 31, -87, -105, 68, -110, 111, 125, 2, 35, 60, 7, -48, 110, 95, 69, -61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryBmsData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsData msg;
    msg.setTimeStamp(0.8514979850851866);
    msg.setSource(44852U);
    msg.setSourceEntity(52U);
    msg.setDestination(49530U);
    msg.setDestinationEntity(82U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UUXKRAHVDXKTBNVZMGCTWUYCADYBFQITMLCKQZSQQGOPQOFAWUWFDZPFFKLUMJRTOFMBTHXIPZASHMLIFBJDLPQGHGVENIYBNJISSHHWMAWBJCACQSFKIQBLYNTKPIIUMDBXNTVEZYVROTEUVGEEOKZYYRXPSGIZOQYLNSDIWDQXDXEKORBAMLKJOH");
    tmp_msg_0.lat = 0.022889949515578878;
    tmp_msg_0.lon = 0.5426071804615966;
    tmp_msg_0.depth = 0.07411251365846983;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 30U;
    tmp_msg_0.transponder_delay = 68U;
    msg.original.set(tmp_msg_0);
    msg.req_status = 16U;
    msg.pack_idx = 81U;
    msg.temperature = 0.4996101350609474;
    msg.voltage = 0.6993196789891846;
    msg.current = 0.7778010965928224;
    msg.rsoc = 110U;
    msg.asoc = 130U;
    msg.soh = 45U;
    msg.remaining_capacity = 49544U;
    msg.full_charge_capacity = 48370U;
    msg.cycle_count = 52940U;
    msg.time_to_empty = 4459U;
    msg.time_to_full = 54257U;
    msg.battery_status = 28348U;
    msg.serial_number = 16159U;
    msg.fet_status = 24388U;
    msg.safety_status = 2789585744U;
    msg.pf_status = 2625081697U;
    msg.operation_status = 1659710096U;
    msg.charging_status = 3843U;
    msg.gauging_status = 12908U;
    IMC::BmsRegister tmp_msg_1;
    tmp_msg_1.reg = 14U;
    const signed char tmp_tmp_msg_1_0[] = {55, -20, 57, -114, -91, 105, 103, 31, -81, 103, 97, 60, 86, -121, 63, 3, -128, 80, 9, -35, -97, -115, -96, 23, 28, -108, 99, -12, -8, 99, -35, 65, 88, 11, -121, -117, -108, -50, -44, -65, -5, -55, 71, -85, -53, -83, 74, -22, 34, -95, -100, 32, -7, -67, 28, -76, -62, -95, -65, 102, -52, 56, -99, 32, -77, 26, 11, -79, 10, 89, -28, -10, 104, 73, 107, 63, 87, -60, -62, 103, 31, -101, -84, 116, 125, -110, 11, -102, -17, -118, -119, -37, 61, -71, -29, -31, -65, 88, 90, -72, 19, 7, -118, -44, -102, -24, -109, -4, -9, 33, 80, 49, -117, -127, 43, -123, 100, -4, 5, -126, -94, 2, -106, -105, 16, 73, 62, 7, 102, -40, -51, -82, 57, -28, 124, 24, 19, -26, -10, 49, -51, -112, -87, -122, 126, -15, 44, 95, 107, 81, 63, -31, -44, 104, -30, -41, 35, 119, 65, 102, -96, -128, 119, 26, 92, -76, 29, 39, 80, 1, 13, -127, 15, 116, 3, 61, 118, 78, 92, 90, 76, 78, -49, -49, 31, 48, -122, -24, 62, -9, -1, 39, 53, 22, 115, -37, -56, -56, 51, 104, -95, -78, -52, 119, -80, 72, 118};
    tmp_msg_1.value.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.registers.push_back(tmp_msg_1);
    const signed char tmp_msg_2[] = {-96, 75, -10, 125, 25, 57, -99, 106, 7, 6, -62, -10, -105, -16, -127, -105, 122, -110, 68, -41, -68, -30, -82, 59, -15, 8, 6, 12, 18, -6, -46, 125, 44, -69, 29, -72, 110, -65, 10, -40, -101, 80, 114, 57, 118, 28, -61, 83, -71, 85, 70, 78, -48, -37, -30, 41, 101, 91, 79, -20, 92, 69, -50, 30, 36, 63, 21, 54, 25, -24, -6, 119, -73, 111, 117, 94, -24, -117, -99, 28, -49, 105, -78, 14, 38, 58, 71, 113, 87, -55, 42, 49, -27, 21, -117, -36, -8, -54, 1, 108, 72, -105, -77, 1, -122, -75, 93, 100, -119, -16, 51};
    msg.data.assign(tmp_msg_2, tmp_msg_2 + sizeof(tmp_msg_2));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsData msg;
    msg.setTimeStamp(0.5183687868989545);
    msg.setSource(15258U);
    msg.setSourceEntity(99U);
    msg.setDestination(36038U);
    msg.setDestinationEntity(77U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.46787335817509446;
    tmp_msg_0.reason = 197U;
    msg.original.set(tmp_msg_0);
    msg.req_status = 223U;
    msg.pack_idx = 225U;
    msg.temperature = 0.7915813185705043;
    msg.voltage = 0.8067759923419164;
    msg.current = 0.027319555635085147;
    msg.rsoc = 160U;
    msg.asoc = 2U;
    msg.soh = 44U;
    msg.remaining_capacity = 29749U;
    msg.full_charge_capacity = 34659U;
    msg.cycle_count = 13969U;
    msg.time_to_empty = 63565U;
    msg.time_to_full = 55968U;
    msg.battery_status = 42167U;
    msg.serial_number = 18904U;
    msg.fet_status = 51279U;
    msg.safety_status = 2257086483U;
    msg.pf_status = 3711381290U;
    msg.operation_status = 4209029859U;
    msg.charging_status = 41297U;
    msg.gauging_status = 54640U;
    IMC::BmsCellVoltage tmp_msg_1;
    tmp_msg_1.cell_number = 160U;
    tmp_msg_1.voltage = 0.8169566232649745;
    msg.cell_voltages.push_back(tmp_msg_1);
    const signed char tmp_msg_2[] = {-17, -6, 32, 56, 81, -26, -80, 79, 42, -30, 91, 122, 23, -101, -113, 112, -121, 18, 46, -17, -99, 9, 66, 91, -104, -128, 71, 67, -45, 103, -77, -15, -93, -23, -105, 108, 75, -30, 39, -13, 72, 9, 58, 42, -59, -78, 121, 107, 111, -91, 5, 30, -107, 32, -74, 32, 85, 52, -123, -55, 8, -35, 117, 22, -96, 78, -38, -114, 51, 42, 112, 106, 73, -103, -76, 115, 49, 118, -36, -41, -73, -126, 47, -71, -99, 17, 81, -120, 100, -26, -110, -13, 117, 72, 94, 114, 113, -78, 14, 18, -15, 2, -128, -102, -53, -125, -53, -62, 38, 98, -119, 17, -8, -27, 111, -22, 31, 114, 66, 64, -113, 80, 124, 55, 121, 112, 94, 87, -90, -87, -3, -97, -113, -53, 7, 88, 120, 11, 36, 22, 112, -127, 37, -31, -95, 108, -84, -62, 8, -7, 43, -56, 43, -116, 92, -32, -80, 3, -35, -117, -47, 46, -58, -40, 6, -34, -113, 68, -86, -79, -13, -84, 70, -32, -116, 76, 55, 89, -41, -89, -47, -77, 59, -17, 32, -110, 101, 64, 79, -114, 125, 119, -120, 94, 34, -91};
    msg.data.assign(tmp_msg_2, tmp_msg_2 + sizeof(tmp_msg_2));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsData msg;
    msg.setTimeStamp(0.3972680378003154);
    msg.setSource(34104U);
    msg.setSourceEntity(1U);
    msg.setDestination(63626U);
    msg.setDestinationEntity(15U);
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("SMRVYPZNBXPBUBKMCMZTKXOLSDGHWFM");
    const signed char tmp_tmp_msg_0_0[] = {91, -66, -43, 75, 27, 50, -5, -94, 6, -44, 96, -117, -59, -90, 58, 83, -65, 106, 108, 87, 30, 13, 97, -60, -94, -104, 15, -46, -105, -86, -26, 22, -2, 125, -27, -109};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.original.set(tmp_msg_0);
    msg.req_status = 46U;
    msg.pack_idx = 109U;
    msg.temperature = 0.11318392521036136;
    msg.voltage = 0.5375139112699164;
    msg.current = 0.35446133161965754;
    msg.rsoc = 100U;
    msg.asoc = 87U;
    msg.soh = 62U;
    msg.remaining_capacity = 54498U;
    msg.full_charge_capacity = 33747U;
    msg.cycle_count = 32264U;
    msg.time_to_empty = 11410U;
    msg.time_to_full = 13572U;
    msg.battery_status = 58829U;
    msg.serial_number = 26389U;
    msg.fet_status = 52314U;
    msg.safety_status = 1007681716U;
    msg.pf_status = 2072782308U;
    msg.operation_status = 1053246410U;
    msg.charging_status = 27104U;
    msg.gauging_status = 53525U;
    IMC::BmsCellVoltage tmp_msg_1;
    tmp_msg_1.cell_number = 201U;
    tmp_msg_1.voltage = 0.05466322462300022;
    msg.cell_voltages.push_back(tmp_msg_1);
    const signed char tmp_msg_2[] = {-113, -66, -76, 53, 2, -26, -106, 104, 103, 65, 16, 79, -110, -13, -100, -39, 15, 18, -36, -97, 37, 37, 55, -15, -68, -115, -43, -19, -39, -28, -86, 29, -58, 64, 108, 18, -12, 29, -72, -45, -18, 108, 112, 35, -94, -69, -110};
    msg.data.assign(tmp_msg_2, tmp_msg_2 + sizeof(tmp_msg_2));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsCellVoltage msg;
    msg.setTimeStamp(0.7165480209356617);
    msg.setSource(40578U);
    msg.setSourceEntity(199U);
    msg.setDestination(15729U);
    msg.setDestinationEntity(169U);
    msg.cell_number = 22U;
    msg.voltage = 0.07171784140447146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsCellVoltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsCellVoltage msg;
    msg.setTimeStamp(0.5622300317938272);
    msg.setSource(25019U);
    msg.setSourceEntity(50U);
    msg.setDestination(26617U);
    msg.setDestinationEntity(223U);
    msg.cell_number = 1U;
    msg.voltage = 0.8534311336717993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsCellVoltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsCellVoltage msg;
    msg.setTimeStamp(0.32101498247420934);
    msg.setSource(17597U);
    msg.setSourceEntity(247U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(74U);
    msg.cell_number = 238U;
    msg.voltage = 0.8549626501581549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsCellVoltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsRegister msg;
    msg.setTimeStamp(0.7686768153510378);
    msg.setSource(42524U);
    msg.setSourceEntity(178U);
    msg.setDestination(39205U);
    msg.setDestinationEntity(254U);
    msg.reg = 29U;
    const signed char tmp_msg_0[] = {14, 92, -8, -73, -86, -101, -66, -69, -65, -57, -89, -3, 17, 13, 63, 111, -101, -9, -49, 76, 99, 126, 59, 112, 61, -66, 17, -75, -91, -21, -48, 59, 36, 34, 98, 22, -117, -119, 126, 101, -89, 39, -73, -45, 122, -62, -59, -103, -107, -2, -27, 102, 110, 13, -126, -5, 54, -34, -90, 122, 97, 53, 31, -76, -61, -80, -48, -34, 111, -56, -98, -38, -77, 94, 30, 11, -1, -19, 6, -89, 96, 22, -108, -114, -75, -128, -51, -48, 62, -32, -95, -95, 112, -3, 61, 21, -37, 37, -69, -106, -77, 26, -85, 73, -119, 13, -38, 112, 108, 25, -30, 90, -9, 119, 64, 51, 114, 85, 109, -20, 48, -116, 83, 66, -19, -34, 72, -53, 70, 71, 52, 77, -123, 95, -110, 8, -29, 81, -72, -39, -15, 82, 95, -77, 20, 21, -90, 55, 99, 59, 62, 101, -79, 53, -66, -82, 95, 5, -49, -18, -78, -103, 119, -42, 12, -103, -77, 5, -96, 37, -62, 62, 41, -34, -108, -31, 12, -8, 49, 110, 20, 67, 18, 115, 54, 28, 93, -81, 25, 66, 44, -108, 102, -87, 72, -81, -12, 39, 59, -10, 49, 30, 116, 119, 57, -104, -68, -94, -28, -94, 6, 118, 75, -76, -24, -9, -18};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsRegister #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsRegister msg;
    msg.setTimeStamp(0.9483235448427069);
    msg.setSource(64751U);
    msg.setSourceEntity(121U);
    msg.setDestination(38996U);
    msg.setDestinationEntity(8U);
    msg.reg = 27U;
    const signed char tmp_msg_0[] = {13, -10, 64, -52, 40, -103, 50, 70, -38, -44, -40, -98, 27, -98, -11, 53, -1, 100, 110, 119, 47, 97, 5, 102, -19, -53, 13, 122, 46, -57, -123, -123, -74, 71, -53, -57, -20, -21, 110, 27, -93, 49, 71, 6, 64, -17, -21, 119, 68, -91, -42, -76, 12, -59, 122, -35, 82, -38, -126, -2, -17, -5, -2, 10, 66, 107, -48, -102, 50, 61, 125, -55, -56, 0, 35, -25, -103, -42, -59, 62, 121, -1, 119, 32, 24, -104, -69, -59, -110, 92, 50, -54, -26, 4, 14, 114, 101, 113, 0, 6, -31, 91, -16, -76, 115, -73, -118, -56, -112, 51, -84, -65, 41, 100, 114, -92, 68, -114, -97, 119, -105, 36, -89, -32, -113, 84};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsRegister #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsRegister msg;
    msg.setTimeStamp(0.15427947202719106);
    msg.setSource(29876U);
    msg.setSourceEntity(40U);
    msg.setDestination(28715U);
    msg.setDestinationEntity(136U);
    msg.reg = 127U;
    const signed char tmp_msg_0[] = {-95, -94, -83, -16, -105, 111, 15, 126, -101, -65, -35, -19, -120, 55, 123, -87, 31, -36, 90, -43, -52, -95, 17, 35, -109, 114, -11, 28, 37, -38, 40, 47, 107, 85, -52, 75, -50, 98, 73, 57, -49, 81, -41, -82, 22, 94, -76, -8, 38, 7, -15, 9, -6, 68, -99, -117, 98, 85, 10, -79, -103, -106, 26, -18, -75, 70, 80, 76, -9, 61, 1, -15, 120, -75, -46, 33, -114, 30, 117, 30, 80, 49, -5, -69, 65, -105, -9, -124, -41, 29, 41, -50, 1, -82, -62, -13, -108, -121, -19, 69, -93, -22, 56, 46, -10, -105, 20, -38, 124, -30, 27, 92, 19, 26, 64, -39, -37, -79, -19, -127, -103, 20, 103, -22, 19, -64, 91, 12, 100, -122, 107, -69, -79, -128, 97, 16, -112, 34, 15, -55, 35, -61, 49, 62, -59, 84, -90, -13, 55, -100, -46, 51, -68, -16, -56, -18, -110, -21, 26, 60, -3, 75, -119, 34, -99, 104, 34, -40, -55, -74, -8, -36, 9, 52, -121, -43, -95, -39, -91, 5, -73, -42, -23, 12, -111, 43, -48, -8, 2, -13, 63, -112, -52, 47, -116, -54, -41, 113, -112, 35, 46, 37, -70, 29, 80, -73, 27, 9, -16, 23, -7, -15, 29, 26, 9, 106, -6, -93, 120, -10, -104, -82, 113, -66, -80, 5, 106, 54, 44, -5, -86, 86, -100, 65, -35, -125, 58, -3, 49, 90, -12, 44, -55, -47, 21, 94, -25, -104};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsRegister #2", msg == *msg_d);
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
