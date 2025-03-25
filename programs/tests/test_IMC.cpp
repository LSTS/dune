//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 6e8033743562af8755e5e0350f6d63ca                            *
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
    msg.setTimeStamp(0.33029070600938826);
    msg.setSource(9030U);
    msg.setSourceEntity(171U);
    msg.setDestination(45529U);
    msg.setDestinationEntity(110U);
    msg.state = 2U;
    msg.flags = 154U;
    msg.description.assign("MRAXLZBCHMKSNSQFEFOTMDPVHTMSQGREIKQNRNAWWMRRKLPZFGNYGLXFHYHZYHLDYQDPAIXVDVASLTGRSDIUEWJYZDJNZSIDELTDNOWBGYJSJWEHCA");

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
    msg.setTimeStamp(0.10009942660735405);
    msg.setSource(59828U);
    msg.setSourceEntity(115U);
    msg.setDestination(54207U);
    msg.setDestinationEntity(210U);
    msg.state = 33U;
    msg.flags = 149U;
    msg.description.assign("FHSIGIJZXRWIKTCMWQUGRILTDHLOFEFRLNOYCPDQIPHXHMOJYSGOXLTSXRGHBJZEKDJYXVNWNTUZXGKPNAPAACSLEUYEDSNTDDXVJTFPARJIUTMKNZWZQKSMRFPVMVOLOVBKAZZBFNOBWSKBHVTAWQQJWSLKGUXGPTEOYFENLMMOCUDVAQAQYULVZSHZMFFXJUHBDWIQWFMKHYCXJEHBVDRRODEZJCIRTPYBWGLAGIBINNUCQUSM");

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
    msg.setTimeStamp(0.4097144617856898);
    msg.setSource(55397U);
    msg.setSourceEntity(59U);
    msg.setDestination(61152U);
    msg.setDestinationEntity(253U);
    msg.state = 142U;
    msg.flags = 5U;
    msg.description.assign("LEORXJAZVTPLEOOLXORAMEGYRXYTTMWGODGBSLINICUHDJUMQZGGPGOEDEQBIVALNFPRYBUOAUFRJQOLSGFIPHQFVAEDXNXZKSFPQBAGEINQYHPRHDYA");

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
    msg.setTimeStamp(0.629094999092723);
    msg.setSource(933U);
    msg.setSourceEntity(114U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.39777954863618226);
    msg.setSource(10846U);
    msg.setSourceEntity(240U);
    msg.setDestination(55572U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.7246140373510476);
    msg.setSource(35172U);
    msg.setSourceEntity(79U);
    msg.setDestination(36035U);
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
    msg.setTimeStamp(0.9551289759708604);
    msg.setSource(47101U);
    msg.setSourceEntity(62U);
    msg.setDestination(29038U);
    msg.setDestinationEntity(72U);
    msg.id = 141U;
    msg.label.assign("ENXLYLFQHEBUZJEZTYMIJELWDKTTWVKOLQVXNKBKFUPMWFMFFKGGTLSWNOKIGBBCRCYSBVNIZYD");
    msg.component.assign("BRLDCAKIJGNJVKSTMZEYCOCXQAKFOVFYXNUTHAQDWDUFIGMGVIDARRESFXHWRNXTPEZYWHWUTOZVWVYHZEIROIDDNCWKKNFGRZLSQPBFVMIEXSJNULREYFXORHHTJBALMBSJPSMUUWXJNISPXYLFBTTEUPVWOZFQGHMAUQBSEPABUCQOOQMZYJWNZVKDJGBKSLQCKQSTIMATZEUYDWOOGKYCPLIAHMHVJBLZPJXGRKXQYIGR");
    msg.act_time = 49832U;
    msg.deact_time = 9948U;

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
    msg.setTimeStamp(0.7406327320686023);
    msg.setSource(43543U);
    msg.setSourceEntity(186U);
    msg.setDestination(26205U);
    msg.setDestinationEntity(196U);
    msg.id = 220U;
    msg.label.assign("XVCFRSPKRHLWHMGDLGKSRHAUITXUIICRYKGWOESELLCNIGTKUWMXPFBFMDAANEBAIUJUVFPLYAYYBNPUVQYTUSZJUHXTHZEDHPXIKWMNNJMANDOGCXKDJZAPWDFCJFELSTKYFCGFCOMJQQQFUUWNRYMFKLGWYWZNMTRZTRSLHGZRDMAEZAQYVQJJEXW");
    msg.component.assign("XKQVMDABILBFHJWUMIFSYOWXDBEW");
    msg.act_time = 1133U;
    msg.deact_time = 534U;

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
    msg.setTimeStamp(0.2565697620963453);
    msg.setSource(15231U);
    msg.setSourceEntity(153U);
    msg.setDestination(12683U);
    msg.setDestinationEntity(132U);
    msg.id = 67U;
    msg.label.assign("SMGPURPYFPZXQEQLDDNNUIGXUZAVBYJHZDHZWZEDHMYJNDCBLCZFABOFLKPRWLYNLCCWSJWODUJSTBMCNIHRUIQKOVRFMTRHWXEUUWNWQSKEMZABOECYAWSMQYCUHPIAGDVTAPVILVDVJWJONVAKARAHYNILUEGMAXBICRTOSJJGKZZPXFTTSOXQQQXJQKHSZYRUVMBCGLFXRTPELXFYHHNGKEOJKDEFIVGTYSBDCNFBPOGKLV");
    msg.component.assign("WSSBBONAOXZZHAJCNZNEXRGAMQKMJIVXSRSTDXZHNXMTJHGSCHHURELAWPCZBXOVIWTGJKVJOPVEMKNWDAUDEQWVEZTJLYFIGLIQRQQAVRCUHYIWOQNKWRRFBAGJBKSIGQYSFH");
    msg.act_time = 8152U;
    msg.deact_time = 60641U;

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
    msg.setTimeStamp(0.606675155945983);
    msg.setSource(58207U);
    msg.setSourceEntity(201U);
    msg.setDestination(49532U);
    msg.setDestinationEntity(202U);
    msg.id = 225U;

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
    msg.setTimeStamp(0.4294009825951751);
    msg.setSource(4213U);
    msg.setSourceEntity(6U);
    msg.setDestination(32308U);
    msg.setDestinationEntity(30U);
    msg.id = 133U;

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
    msg.setTimeStamp(0.3330741076907181);
    msg.setSource(36038U);
    msg.setSourceEntity(253U);
    msg.setDestination(39440U);
    msg.setDestinationEntity(171U);
    msg.id = 234U;

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
    msg.setTimeStamp(0.08728463922248153);
    msg.setSource(4901U);
    msg.setSourceEntity(62U);
    msg.setDestination(36732U);
    msg.setDestinationEntity(31U);
    msg.op = 25U;
    msg.list.assign("LVVNXKHJOOXMQRCEFBTPMZJFQREZQL");

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
    msg.setTimeStamp(0.4321476515966367);
    msg.setSource(47671U);
    msg.setSourceEntity(194U);
    msg.setDestination(65514U);
    msg.setDestinationEntity(61U);
    msg.op = 68U;
    msg.list.assign("CHYXKOLHTMWUPEIWVRXVQHUETOSNMRDOQVBUXNMEPLSQKAQYYRGSHSPHZVAFG");

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
    msg.setTimeStamp(0.7243352969782335);
    msg.setSource(25172U);
    msg.setSourceEntity(69U);
    msg.setDestination(22015U);
    msg.setDestinationEntity(103U);
    msg.op = 137U;
    msg.list.assign("LXKXPLTPNIQKEVOTBHILMLGDNJEUWXQDZYQBAVOFABEMSJDHUXPUFSNMCQACMDNRENTVBGBROEDRYEEKKMRAHPSVHXIDIECPJYYGDYZHCTLOUTRAUTSQXZPLYMYJUFYAUBNFXLG");

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
    msg.setTimeStamp(0.6585032796900184);
    msg.setSource(29992U);
    msg.setSourceEntity(105U);
    msg.setDestination(42620U);
    msg.setDestinationEntity(70U);
    msg.value = 102U;

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
    msg.setTimeStamp(0.5228396402848066);
    msg.setSource(56565U);
    msg.setSourceEntity(14U);
    msg.setDestination(37348U);
    msg.setDestinationEntity(23U);
    msg.value = 154U;

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
    msg.setTimeStamp(0.8142643046458249);
    msg.setSource(33384U);
    msg.setSourceEntity(154U);
    msg.setDestination(59119U);
    msg.setDestinationEntity(31U);
    msg.value = 90U;

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
    msg.setTimeStamp(0.04811360108154561);
    msg.setSource(54635U);
    msg.setSourceEntity(222U);
    msg.setDestination(46656U);
    msg.setDestinationEntity(251U);
    msg.consumer.assign("JCKRHFQVPBLGMDAJTWYGZHFVGXABTEHBIWJBKQZQNUVIVMWKPFQIQZYASJPZLHURTUYAPKHBFWTSA");
    msg.message_id = 20600U;

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
    msg.setTimeStamp(0.14558232967839935);
    msg.setSource(25960U);
    msg.setSourceEntity(79U);
    msg.setDestination(29872U);
    msg.setDestinationEntity(150U);
    msg.consumer.assign("GCMJZDGWUOLUIPYCPRJUBKVWFZTJFAHNPYVKGHDKRDRNXVPKXOZHIREAQQCHCIAGEFTBBBWKLZWGSNSGSZGTIGYDHVFSWFQYCEOSMPVTMFRNBXWEESXMYXRBJMHUEXWWMNLTXZOOZPOALNPDIUSJDOJZLUSYIGAKNUVQDQKRVDBIMKPMNHUQAXLWLDBSNPJJFITELKCQFXHBUTVGHQVPRDEREAYRNTIJZYTOHFISOYECMK");
    msg.message_id = 52341U;

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
    msg.setTimeStamp(0.5766974153025374);
    msg.setSource(47319U);
    msg.setSourceEntity(199U);
    msg.setDestination(45961U);
    msg.setDestinationEntity(136U);
    msg.consumer.assign("YTSOBAEVVTPUDXWDKZLYFZFIUZJYLTUIGSHVZHTIFQOYMMGKKEKYLGPJQZLCMXXATPNXJSEZABGXOYXNOGFJSMBMZKCWQALYPNUEDHCCOEPEADVPWOFAXLBBHNUWNUFHDYOGTVSPXLLTPRFQIFQVHGCRSMMDGQUMNBCCJKRATIYU");
    msg.message_id = 15271U;

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
    msg.setTimeStamp(0.07798934786330902);
    msg.setSource(41138U);
    msg.setSourceEntity(130U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(96U);
    msg.type = 61U;

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
    msg.setTimeStamp(0.8649412106842067);
    msg.setSource(41831U);
    msg.setSourceEntity(10U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(95U);
    msg.type = 140U;

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
    msg.setTimeStamp(0.560044068365223);
    msg.setSource(52818U);
    msg.setSourceEntity(45U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(88U);
    msg.type = 225U;

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
    msg.setTimeStamp(0.7504878282802747);
    msg.setSource(56481U);
    msg.setSourceEntity(50U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(179U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.9958215120116447);
    msg.setSource(63785U);
    msg.setSourceEntity(164U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(154U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.8793717685594113);
    msg.setSource(30657U);
    msg.setSourceEntity(15U);
    msg.setDestination(5819U);
    msg.setDestinationEntity(11U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.09755867355197578);
    msg.setSource(22023U);
    msg.setSourceEntity(135U);
    msg.setDestination(20481U);
    msg.setDestinationEntity(203U);
    msg.total_steps = 124U;
    msg.step_number = 193U;
    msg.step.assign("MVCUNTOBLRNQNCXTYDMZJXNIHXSTCMVAOZWXZMESHPQAZWIUPXOFEILSAUKFHMHHASVDGLHPOPOHGXJIBLPUEYIXRULFOBJWSDKMBQJGOJBVLFQJJWIFYJWGUANZMBCXTPDKFIRLESQZZFYWVNZTYCXRIBKPSSNFVNHLTRDXEATRNWYDCOEBGPMTEGWVPDMVRTWFFO");
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
    msg.setTimeStamp(0.7984017661836174);
    msg.setSource(54666U);
    msg.setSourceEntity(123U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(30U);
    msg.total_steps = 143U;
    msg.step_number = 10U;
    msg.step.assign("ZQYHYRLENZRJRMXNLSNVEOVWUJSAYYMVBHEMQRQBDDUFUTWTRVXPLTPCGVLNAQSKCPPFCKUSTSLSITOVKQPHWRAMSFNXDBHPTIUJCWCIEHCGZWZQYOWXAWQMXAXRMJBLGKCELTYFDNIOIYNZGFFBQKKPUOFKPYSJNIFBJLUR");
    msg.flags = 182U;

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
    msg.setTimeStamp(0.07522201780318216);
    msg.setSource(6434U);
    msg.setSourceEntity(97U);
    msg.setDestination(53910U);
    msg.setDestinationEntity(42U);
    msg.total_steps = 220U;
    msg.step_number = 138U;
    msg.step.assign("XFBQNGCUOPLJNJAKHSLTDZBWWAETVMCMWOIZJEGDLIRTBUHOLYMFWWKNEFRCFLLBNSATSPNHRWXGKCRCRTEELFFVRUVADRIATOUEDFPTSCGRINFIZVUPQYYIMYXKMDAZJOPFDYXGGLQH");
    msg.flags = 202U;

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
    msg.setTimeStamp(0.44325921495929477);
    msg.setSource(6446U);
    msg.setSourceEntity(162U);
    msg.setDestination(59455U);
    msg.setDestinationEntity(105U);
    msg.state = 128U;
    msg.error.assign("SQAWQKXGFJDTWPYHBYJEEHVVXVZUSEABWACYFXLHHRSSLZSVOHKANFQODYNBJRCKTPDOTPGNITHLJUSGQQDPFUXCNEOBNAYIYDMUACKVKSUZXMUMRXTOANMXCZKQOFGARWPOJXDFNGVBSELGEQRTZLDOJTXILGBZPWRIH");

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
    msg.setTimeStamp(0.1298122446165002);
    msg.setSource(54061U);
    msg.setSourceEntity(205U);
    msg.setDestination(17727U);
    msg.setDestinationEntity(7U);
    msg.state = 51U;
    msg.error.assign("QBHLPBRNKPYSUIMIKBQTWJDWYLHNWGOYXKKEZXGPMUJFZZYNUXRSHPPBMUFEDURDXKAFKKWSXWTDAMCFVJCTFCFMQZRIORKBNXSPUBWTGJVJRIKTZLKJERIEHDHLLEJTTUCAGNRVYGBVOHFPACLCFLZDOWJICMUXWZGDJLQQYGQZBVGAAH");

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
    msg.setTimeStamp(0.8027444853904502);
    msg.setSource(39305U);
    msg.setSourceEntity(207U);
    msg.setDestination(52001U);
    msg.setDestinationEntity(245U);
    msg.state = 242U;
    msg.error.assign("VJNXMEQACSMUQAVBXGKPJCHESKYBOUMUPRJQZDEQZBRWBNWKZDODGZKJCULFPLOBQRGWDRRISEIBAXLHKHNM");

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
    msg.setTimeStamp(0.22784908685078054);
    msg.setSource(27251U);
    msg.setSourceEntity(213U);
    msg.setDestination(41646U);
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
    msg.setTimeStamp(0.2792821623281947);
    msg.setSource(45023U);
    msg.setSourceEntity(195U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.40611112409302674);
    msg.setSource(35905U);
    msg.setSourceEntity(115U);
    msg.setDestination(8485U);
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
    msg.setTimeStamp(0.5143913345661069);
    msg.setSource(50882U);
    msg.setSourceEntity(56U);
    msg.setDestination(16623U);
    msg.setDestinationEntity(141U);
    msg.op = 51U;
    msg.speed_min = 0.12994914111191302;
    msg.speed_max = 0.9745971706118272;
    msg.long_accel = 0.8382095080044438;
    msg.alt_max_msl = 0.9020398109092763;
    msg.dive_fraction_max = 0.1563715128352231;
    msg.climb_fraction_max = 0.7172419252253099;
    msg.bank_max = 0.720265809874561;
    msg.p_max = 0.6304913668723927;
    msg.pitch_min = 0.3182083831502863;
    msg.pitch_max = 0.0693971114251547;
    msg.q_max = 0.7965465824398262;
    msg.g_min = 0.6606869130227561;
    msg.g_max = 0.2399261266676982;
    msg.g_lat_max = 0.7989343454900529;
    msg.rpm_min = 0.9475655548747508;
    msg.rpm_max = 0.23897769250906786;
    msg.rpm_rate_max = 0.46774091858833544;

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
    msg.setTimeStamp(0.6805545992793652);
    msg.setSource(13172U);
    msg.setSourceEntity(149U);
    msg.setDestination(27581U);
    msg.setDestinationEntity(65U);
    msg.op = 134U;
    msg.speed_min = 0.00672342894063771;
    msg.speed_max = 0.46986780148759755;
    msg.long_accel = 0.14329898786718642;
    msg.alt_max_msl = 0.967322253595833;
    msg.dive_fraction_max = 0.4609256517622953;
    msg.climb_fraction_max = 0.48539706851034214;
    msg.bank_max = 0.2560445364098253;
    msg.p_max = 0.007255426709117385;
    msg.pitch_min = 0.13378295846982302;
    msg.pitch_max = 0.21840938973731472;
    msg.q_max = 0.9597618803599044;
    msg.g_min = 0.7250082942691745;
    msg.g_max = 0.9240930353154589;
    msg.g_lat_max = 0.9173468357769471;
    msg.rpm_min = 0.6803293214984727;
    msg.rpm_max = 0.7059798356323933;
    msg.rpm_rate_max = 0.8771654394641714;

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
    msg.setTimeStamp(0.4083645776928093);
    msg.setSource(6910U);
    msg.setSourceEntity(14U);
    msg.setDestination(38265U);
    msg.setDestinationEntity(9U);
    msg.op = 247U;
    msg.speed_min = 0.1686007245924973;
    msg.speed_max = 0.9258511899370034;
    msg.long_accel = 0.830766644283169;
    msg.alt_max_msl = 0.44843431313406557;
    msg.dive_fraction_max = 0.5062329320090744;
    msg.climb_fraction_max = 0.754459114001813;
    msg.bank_max = 0.31976620360164576;
    msg.p_max = 0.3600135021559183;
    msg.pitch_min = 0.9675465316402907;
    msg.pitch_max = 0.4279414202681522;
    msg.q_max = 0.08387920200524346;
    msg.g_min = 0.5637402622546837;
    msg.g_max = 0.2902906069137817;
    msg.g_lat_max = 0.5391564484531264;
    msg.rpm_min = 0.7661250711864451;
    msg.rpm_max = 0.7080808293734084;
    msg.rpm_rate_max = 0.24070654191680452;

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
    msg.setTimeStamp(0.6705658585171342);
    msg.setSource(40912U);
    msg.setSourceEntity(8U);
    msg.setDestination(33136U);
    msg.setDestinationEntity(63U);
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2627719141350501;
    tmp_tmp_msg_0_0.lon = 0.8675783085934153;
    tmp_tmp_msg_0_0.height = 0.9978269526101518;
    tmp_tmp_msg_0_0.x = 0.3296636294892764;
    tmp_tmp_msg_0_0.y = 0.8640109938656129;
    tmp_tmp_msg_0_0.z = 0.8754908684463751;
    tmp_tmp_msg_0_0.phi = 0.5706346049231705;
    tmp_tmp_msg_0_0.theta = 0.4125886515385315;
    tmp_tmp_msg_0_0.psi = 0.013908707983384172;
    tmp_tmp_msg_0_0.u = 0.7116357299351622;
    tmp_tmp_msg_0_0.v = 0.5938647404799479;
    tmp_tmp_msg_0_0.w = 0.1910090513842968;
    tmp_tmp_msg_0_0.vx = 0.7965412036547863;
    tmp_tmp_msg_0_0.vy = 0.8666462529543814;
    tmp_tmp_msg_0_0.vz = 0.06651731442552866;
    tmp_tmp_msg_0_0.p = 0.598681842376732;
    tmp_tmp_msg_0_0.q = 0.15108978237317938;
    tmp_tmp_msg_0_0.r = 0.6129785465281026;
    tmp_tmp_msg_0_0.depth = 0.45329195388789834;
    tmp_tmp_msg_0_0.alt = 0.6160417673898249;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 76U;
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
    msg.setTimeStamp(0.7055576413529807);
    msg.setSource(41089U);
    msg.setSourceEntity(80U);
    msg.setDestination(6065U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.9430983219542775);
    msg.setSource(63614U);
    msg.setSourceEntity(185U);
    msg.setDestination(11982U);
    msg.setDestinationEntity(153U);
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.7665197546611447;
    tmp_msg_0.dist_min_abs = 0.6773546278714425;
    tmp_msg_0.dist_min_mean = 0.8084641301218268;
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.1431218198070201);
    msg.setSource(5981U);
    msg.setSourceEntity(162U);
    msg.setDestination(48063U);
    msg.setDestinationEntity(114U);
    msg.value = 0.6443004917016939;

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
    msg.setTimeStamp(0.76232639130859);
    msg.setSource(56250U);
    msg.setSourceEntity(251U);
    msg.setDestination(58795U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0926066701661995;

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
    msg.setTimeStamp(0.6616833719914397);
    msg.setSource(11619U);
    msg.setSourceEntity(65U);
    msg.setDestination(24126U);
    msg.setDestinationEntity(220U);
    msg.value = 0.45667340258561384;

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
    msg.setTimeStamp(0.34426145076059245);
    msg.setSource(25313U);
    msg.setSourceEntity(115U);
    msg.setDestination(15040U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.7303212754715506;
    msg.lon = 0.5042899390645428;
    msg.height = 0.8751870231032808;
    msg.x = 0.5296933944310092;
    msg.y = 0.9325103291892078;
    msg.z = 0.7650895620942886;
    msg.phi = 0.6458008406324981;
    msg.theta = 0.4043367750886375;
    msg.psi = 0.09199358213068365;
    msg.u = 0.12077787053888223;
    msg.v = 0.9972591605628328;
    msg.w = 0.4691642872648182;
    msg.p = 0.13602628861231314;
    msg.q = 0.39072841083715915;
    msg.r = 0.03330407396980961;
    msg.svx = 0.355282473388685;
    msg.svy = 0.7872859178680849;
    msg.svz = 0.42118206783626533;

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
    msg.setTimeStamp(0.922469244995734);
    msg.setSource(7484U);
    msg.setSourceEntity(177U);
    msg.setDestination(46981U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.5421567924668759;
    msg.lon = 0.5773882397651247;
    msg.height = 0.134364385310476;
    msg.x = 0.8009046031650574;
    msg.y = 0.2363432524936777;
    msg.z = 0.6223030177333301;
    msg.phi = 0.4169093140778676;
    msg.theta = 0.19752635362519333;
    msg.psi = 0.9181598558634262;
    msg.u = 0.9571232346944061;
    msg.v = 0.37165828453150973;
    msg.w = 0.659224837519681;
    msg.p = 0.5320083303690053;
    msg.q = 0.6988693859357185;
    msg.r = 0.24402602860288036;
    msg.svx = 0.23663056760233203;
    msg.svy = 0.06284855921073063;
    msg.svz = 0.5889860713285282;

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
    msg.setTimeStamp(0.5277395554098815);
    msg.setSource(45351U);
    msg.setSourceEntity(57U);
    msg.setDestination(6946U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.005722988847800425;
    msg.lon = 0.0032054016317716316;
    msg.height = 0.3279965208126474;
    msg.x = 0.4009634697276544;
    msg.y = 0.8379066567244239;
    msg.z = 0.027218278592498812;
    msg.phi = 0.7576110013705707;
    msg.theta = 0.2790484308245844;
    msg.psi = 0.13190864874698505;
    msg.u = 0.8365353364657092;
    msg.v = 0.714261333653491;
    msg.w = 0.3741652160925064;
    msg.p = 0.3864178565927352;
    msg.q = 0.5888401071275282;
    msg.r = 0.8074928897263426;
    msg.svx = 0.273274205309063;
    msg.svy = 0.05761013983509533;
    msg.svz = 0.5848072328334118;

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
    msg.setTimeStamp(0.5024111465812364);
    msg.setSource(31209U);
    msg.setSourceEntity(104U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(218U);
    msg.op = 134U;
    msg.entities.assign("GTMHOJKLCBKCYSEQPNWMGSSTVJQTAHRXJRNDGJPOC");

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
    msg.setTimeStamp(0.04411619639305209);
    msg.setSource(5629U);
    msg.setSourceEntity(1U);
    msg.setDestination(14802U);
    msg.setDestinationEntity(187U);
    msg.op = 194U;
    msg.entities.assign("JMPVWKHWZRVGNKJQVLBTFERSPTZQCJJDYDLMQAQUOPEONXTH");

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
    msg.setTimeStamp(0.7751792092729342);
    msg.setSource(54688U);
    msg.setSourceEntity(33U);
    msg.setDestination(45420U);
    msg.setDestinationEntity(146U);
    msg.op = 15U;
    msg.entities.assign("CFBGWBVIDMHLHNTDRLELNITDEJEQPYYMFBFHIDONCJKDMOFBOGAFQ");

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
    msg.setTimeStamp(0.028283363852657284);
    msg.setSource(63480U);
    msg.setSourceEntity(40U);
    msg.setDestination(58662U);
    msg.setDestinationEntity(209U);
    msg.type = 48U;
    msg.speed = 22239U;
    const signed char tmp_msg_0[] = {20, 46, 82, -80, 25, -47, -72, -45, 121, 62, 42, 98, 101, -61, -55, 8, 124, 36, 53, -101, 30, 93, -91, -37, -83, -15, 109, -12, 101, 103, 44, -126, -98, -84, -100, 62, 7, -47, -31, 115, -114, 12, 59, 34, 58, 0, 93, -13, -2, 3, 42, -33, 11, -118, -25, 31, -117, 65, -31, -17, -44, -78, 37, 15, -5, 111, -16, 66, 18, -59, 82, 80, -67, 80, 73, 119, -79, 86, 95, -92, -119, 41, -8, 28, 86, 98, 71, 18, -38, -23, -57, 63, -3, 25, -1, -87, 89, 65, 54, 84, -69, 37, 48, 16, -50, -68, 65, 20, -22, -73, 29, -122, -56, -28, -124, -19, -117, -12, -50, -24, 12, 7, -95, -89, -66, -116, -51, -117, 14, 44, 26, 32, -97, 17, -81, -114, -126, -12, -5, 40, 90, 24, -28, 94, 122, -115, -72, 64, -49, -36, 67, -109, -115, 91, 82, -69, 120, -1, 71, 63, 117, 36, -56, 99, -30, -48, -100, 27, 13, -84, 11, -92, -69};
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
    msg.setTimeStamp(0.9354145569986172);
    msg.setSource(35549U);
    msg.setSourceEntity(156U);
    msg.setDestination(31890U);
    msg.setDestinationEntity(182U);
    msg.type = 62U;
    msg.speed = 14001U;
    const signed char tmp_msg_0[] = {-97, 53, 34, 24, -121, -26, 115, 73, 21, -1, 38, -88, 110, -69, 48, -32, 110, -115, 104, -66, -12, 92, -42, -5, -68, 73, 53, -41, 0, 125, 45, -48, -64};
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
    msg.setTimeStamp(0.45026509437759576);
    msg.setSource(63360U);
    msg.setSourceEntity(68U);
    msg.setDestination(36165U);
    msg.setDestinationEntity(45U);
    msg.type = 97U;
    msg.speed = 29052U;
    const signed char tmp_msg_0[] = {87, -126, -112, 5, -112, -126, 117, 39, 30, 14, 120, 102, -25, 86, -87, 32, 111, 120, -30, 6, -56, -86, 91, 58, -31, 95, 48, 74, -50, 11, 114, -27, 66, -49, 9, -30, 6, 119, 59, -54, -56, 45, -62, -63, -45, -87, -32, 42, -34, -63, 1, 88, -76, -50, 43, -111, -5, -9, -124, 27, -40, 41, 28, -118, 118, -30, -119, -30, -64, 58, 32, 23, 59, 106, -4, -78, 15, 121, -107, 108, 34, -81, 61, 25, -72, -98, -8, -2, 51, -25, -94, -116, 31, 54, 93, -82, -58, 52, -49, 75, 12, -127, 73, -122, -72, 24, -72, 38, -59, 33, 96, 17, -19, -58, -108, -43, 59, -48, -69, -125, -122, 38, 54, -96, -8, 75, 13, 49, -120, -103, -48, 16, 82, 49, -125, -28, 110, -3, -101, 108, 112, -22, -102, -112, 118, 17, -123, -9, 47, -32, -65, -32, -87, -20, -103, 10, 66};
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
    msg.setTimeStamp(0.9041673753728626);
    msg.setSource(2477U);
    msg.setSourceEntity(87U);
    msg.setDestination(62341U);
    msg.setDestinationEntity(215U);
    msg.op = 31U;
    msg.tas2acc_pgain = 0.4273218685265068;
    msg.bank2p_pgain = 0.5314685458595237;

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
    msg.setTimeStamp(0.38291580564411387);
    msg.setSource(6505U);
    msg.setSourceEntity(238U);
    msg.setDestination(35382U);
    msg.setDestinationEntity(152U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.20221046065636727;
    msg.bank2p_pgain = 0.43956606799992304;

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
    msg.setTimeStamp(0.8425522308087459);
    msg.setSource(10752U);
    msg.setSourceEntity(204U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(246U);
    msg.op = 209U;
    msg.tas2acc_pgain = 0.43943428013595043;
    msg.bank2p_pgain = 0.6842516518424662;

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
    msg.setTimeStamp(0.4809468924809437);
    msg.setSource(3272U);
    msg.setSourceEntity(113U);
    msg.setDestination(64846U);
    msg.setDestinationEntity(183U);
    msg.available = 676313529U;
    msg.value = 22U;

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
    msg.setTimeStamp(0.5495348996849782);
    msg.setSource(18571U);
    msg.setSourceEntity(143U);
    msg.setDestination(35723U);
    msg.setDestinationEntity(191U);
    msg.available = 2425092754U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.9771596891586245);
    msg.setSource(15285U);
    msg.setSourceEntity(23U);
    msg.setDestination(30420U);
    msg.setDestinationEntity(203U);
    msg.available = 1584440757U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.9149552046649262);
    msg.setSource(14529U);
    msg.setSourceEntity(181U);
    msg.setDestination(3020U);
    msg.setDestinationEntity(208U);
    msg.op = 118U;
    msg.snapshot.assign("PMIHECNAIIOSWTNFVJEMICAHJQGUVKZJDSDQTYVLZPYSUGBXFIFJRXIUKOPBLERXWUTUYWBRYWOVGNCAQTGDXWMQLPFSZQZXMXQJUYUVZDWARXXOADIJNFSJKAPKGGPAVEFTKZXPQZTVUQBBILOSWKDBRTPMUHRASUYYHRKSHSGHNOHOZKZTFMLCWSEACWGRTBOFKHBYMKDJYMDVCICNLEXELNFROJNMQJTCLINCRHOYHFVEGBPAC");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.9202233878707823;
    tmp_msg_0.lon = 0.15320717739226186;
    tmp_msg_0.z = 0.4730665282978409;
    tmp_msg_0.z_units = 185U;
    tmp_msg_0.speed = 0.428349728752793;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.takeoff_pitch = 0.9961444024549606;
    tmp_msg_0.custom.assign("JQETKYEXVLHVCLSFWZUNYZLDWKUHRIOIAOBYBYNPGLBRXHECTMPPULQOIFRHEANENNFQBGPIXFPJVGTZHJRXMKMLLUPHNOOBKSXUZVBCWEBKMGKDLGFJAJCQFXIETWOYMBFMGRJOSIHWRMISKITGASQRQOAZARQSRJJBQJUNASUIFMCJMZCNUZHICFQWBGHOKYDSEHTCXPMWXDNPADPAYDKTPRNVXTXYWGFZEYZTTVSOSVCW");
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
    msg.setTimeStamp(0.356434992146343);
    msg.setSource(32503U);
    msg.setSourceEntity(1U);
    msg.setDestination(65226U);
    msg.setDestinationEntity(126U);
    msg.op = 62U;
    msg.snapshot.assign("HITYCZHYNCDEWHDVECFQRZXBCQVFYLSY");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("JENXNGOAMKKNGAHAJMSVZ");
    const signed char tmp_tmp_msg_0_0[] = {110, 12, 120, 31, 26, -87, -12, -94, 106, -17, -5, 93, 81, -41, 89, -46, 115, -114, 50, 110, -95, 31, -100, -125, 47, 12, -38, 48, -128, 40, 97, -68, 110, -2, 112, -115, 24, 106, 86, 121, 101, -120, 126, 44, 100, -8, -51, 64, 7, 94, -17, -85, 19, 69, -26, -104, 91, 112, -4, 35, -18, 96, 2, -20, -25, 12, -54, -36, -46, -48, -68, -31, 70, -59, -116, 83, 100, 26, -16, -75, 105, 102, -32, 5, 48, -76, -128, 72, 93, 44, 113, 68, 120, -44, -56, -70, 37, -69, 27, -2, 81, 83, 22, -59, -72, -103, 109, 102, -71, -44, 118, 26, 66, -76, -19, 66, -49, 107, -45, 15, -1, -124, 8, -66, -49, 35, -25, -47, 79, -69, 84, -63, 73, 60, -125, -45, -121, 75, 95, -100};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5797934955527656);
    msg.setSource(62146U);
    msg.setSourceEntity(10U);
    msg.setDestination(38999U);
    msg.setDestinationEntity(66U);
    msg.op = 144U;
    msg.snapshot.assign("UEJOCEQTZNNTLDJIPSYRBOJUOAEAZAITACLOZLHYQQEGUWWAUVYGBIYETNPHAUCVKDXQPADQKX");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9624728424402144;
    tmp_msg_0.lon = 0.26175312378971594;
    tmp_msg_0.height = 0.098477447658193;
    tmp_msg_0.x = 0.6959383946712537;
    tmp_msg_0.y = 0.7888229955445627;
    tmp_msg_0.z = 0.886298967716253;
    tmp_msg_0.phi = 0.8598779627881334;
    tmp_msg_0.theta = 0.4638466814055754;
    tmp_msg_0.psi = 0.3444256566597944;
    tmp_msg_0.u = 0.23149286575169947;
    tmp_msg_0.v = 0.14937834258952942;
    tmp_msg_0.w = 0.7197039496548624;
    tmp_msg_0.p = 0.7540991595746208;
    tmp_msg_0.q = 0.640629352477441;
    tmp_msg_0.r = 0.09117449378659326;
    tmp_msg_0.svx = 0.9426271276899896;
    tmp_msg_0.svy = 0.22737964290198254;
    tmp_msg_0.svz = 0.00012722914249252426;
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
    msg.setTimeStamp(0.18455704175248733);
    msg.setSource(56817U);
    msg.setSourceEntity(52U);
    msg.setDestination(18064U);
    msg.setDestinationEntity(195U);
    msg.op = 119U;
    msg.name.assign("FEMOIIKWNJHHGQXXWWHMCMYURTLXTPLEICRXZWECDDLVXJPDYYHBRROAQCNDMVIJKRPAMZAAVGQBRBABNEWIGYPXYNCSQLSSDFKLQJXUKGESWNVQAVSJLKUXQZZEN");

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
    msg.setTimeStamp(0.7894124170961148);
    msg.setSource(41925U);
    msg.setSourceEntity(67U);
    msg.setDestination(52161U);
    msg.setDestinationEntity(94U);
    msg.op = 89U;
    msg.name.assign("IEVJKIUOBGRCMQOXBTDFHAXEXLBDFMABAMVOPLFQDAEGOAEZTWONNCVYOCRUGPVZEASLJWSLKVKBDAGGIZDZPWZXUSETINPBRWOSTOH");

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
    msg.setTimeStamp(0.09252542400928354);
    msg.setSource(55662U);
    msg.setSourceEntity(14U);
    msg.setDestination(6349U);
    msg.setDestinationEntity(42U);
    msg.op = 73U;
    msg.name.assign("XRPXDRROTNWKMPRAHTMQVDJDMNMJIAMDHHVQZAPMSFOZACGEGWKLBTEOUVBASVSIURFSKMTUHQBGYPECXCLAYPAXAKSQBOBIJIJSZJZRBXRQONKUBUXFWDZYPIONPPBSSCLRIYMFSDZEUAQMXYKGDHLHNHXOTYIEKQBGQYETLXYCHLJKFVELCWTLBJWCKGGFNLTHLNNCVZTCW");

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
    msg.setTimeStamp(0.6552223727853341);
    msg.setSource(25498U);
    msg.setSourceEntity(133U);
    msg.setDestination(23540U);
    msg.setDestinationEntity(40U);
    msg.type = 217U;
    msg.htime = 0.5384850401470763;
    msg.context.assign("KPWALXDEXYDGLNOIYMFBZTIFLUWBWFJKKEBBQHZZYRMSUVJMLZEHKERKQLWCZFRKXPCBRWTGVZBGTOOIAFDXJEBGVLWTBDVRAUIHHVDHARIUFTEQFISYXMNLPHOAHIHSXPJNXQMFXPCHDPUQONPBJXSOYEJDROOZLPGAKZTJIGVEMAUVKSCBYWGTQXQSTMCJDWVWCMLNCPRFDYRNQAGTOITSUGYQDAVYONNRSWHQLMKEFI");
    msg.text.assign("OSPERFHXPSJGWCHOIGHIVGYADAF");

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
    msg.setTimeStamp(0.7097478389658834);
    msg.setSource(52389U);
    msg.setSourceEntity(55U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(106U);
    msg.type = 193U;
    msg.htime = 0.3822456843985973;
    msg.context.assign("ZNCIPWOQWXQAPKJCPBFTIDIZNMKMBZOKJCYRMETMRZDNI");
    msg.text.assign("CZGSUDWPIOMCIWEGTPQKZROBHPNFBOKFLMPLFBNJWXGOHAZSPRHAYKYKCMOAYGYVYXUFGZXRUTBSYCXTMCWLFTVTALENTXNGBAHZJBEABJNZYMOHURJZLMYISEQDCWJJVHREIHKVEJQRODDXUEKEKFFQNHCLSNWR");

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
    msg.setTimeStamp(0.6551115676122136);
    msg.setSource(26561U);
    msg.setSourceEntity(194U);
    msg.setDestination(57381U);
    msg.setDestinationEntity(68U);
    msg.type = 50U;
    msg.htime = 0.303707314425129;
    msg.context.assign("NKJKNPHHGHCPZQFEVVRQNMZ");
    msg.text.assign("IUGOLNHLBBWQCSTDLRMESSWRGGWTEBNJAIXEAOKUAAYCAHUZHXUOXFFMMRDCBRFC");

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
    msg.setTimeStamp(0.6282988375323247);
    msg.setSource(8189U);
    msg.setSourceEntity(236U);
    msg.setDestination(48135U);
    msg.setDestinationEntity(43U);
    msg.command = 152U;
    msg.htime = 0.8672837185998417;

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
    msg.setTimeStamp(0.39656404024202563);
    msg.setSource(32411U);
    msg.setSourceEntity(206U);
    msg.setDestination(751U);
    msg.setDestinationEntity(231U);
    msg.command = 182U;
    msg.htime = 0.28900642693055656;

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
    msg.setTimeStamp(0.4620112496222337);
    msg.setSource(10273U);
    msg.setSourceEntity(14U);
    msg.setDestination(53308U);
    msg.setDestinationEntity(82U);
    msg.command = 194U;
    msg.htime = 0.004196234537409138;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 249U;
    tmp_msg_0.htime = 0.7493621312343499;
    tmp_msg_0.context.assign("ODCTHUDQPVULNVDFWNXJNCLQVCMFBSWLMDQXHEFCAHXTJBHXZAFYHNDURZOIIAOJOIVWVCRXSKYRCUETBWVNGQVWFJBGMRGCIMDNBRY");
    tmp_msg_0.text.assign("KXJFNHCQPNDNMOJXNGWCXOGRLHULZVRQAYTUVACZLJDJQUGMDBYZQIMBNPBEZPWWFJTHDIFLOYJXBHKZHCGFHLJOAPOEHOHSGCRLTGLPXKAFNDMVATSQJOLOZWYYGMMZKOUAPNGFKYMWUEVZWYDSSBIYHDXIXKYSR");
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
    msg.setTimeStamp(0.6729936734456806);
    msg.setSource(39973U);
    msg.setSourceEntity(5U);
    msg.setDestination(59269U);
    msg.setDestinationEntity(223U);
    msg.op = 244U;
    msg.file.assign("DSTPKNNKLRQDQIWVNNISSRXEVLOUHUMNSUVYEPPQLEQUUFGZBJBBDQMDISYVJCHJRPGERXFYWNOCMWJQOMCJNIDYJDZIETDRNWGFXAKEFYJTWZQXQCPGHTDFVUOTAXFIFSEBANPWCTCSAVHSLZGXBBUNVGHSZHROYOJKFIPQWTYKIEYXSWVBQTEKJAJHAMBOWRZLZUMHPAILTBRMVGFLLZCGHUMXC");

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
    msg.setTimeStamp(0.6558682289180197);
    msg.setSource(4863U);
    msg.setSourceEntity(83U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(226U);
    msg.op = 28U;
    msg.file.assign("JJSUHYUHFRALYDTGOQCGFOETFZRQMIGUEPELMKONXCPVAWQLZUNGITDOZINGJQO");

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
    msg.setTimeStamp(0.04711340287989607);
    msg.setSource(55770U);
    msg.setSourceEntity(134U);
    msg.setDestination(46136U);
    msg.setDestinationEntity(93U);
    msg.op = 28U;
    msg.file.assign("CHIAXVOKAZLXZPCSEBLYMSXVBRKOXGUGMNTWANCFZQLKHOFXWLXYHSAGURPTIFQZHQJRLMOIOFPNMVPBJUSXEJVUURCTETJZIVEBDHYAZEERQHCFOMDEODIKNEPTYKMVWUGBSWQMIEVGHRQYKJTGWXNLVIDGOSKWSGU");

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
    msg.setTimeStamp(0.9385834972433256);
    msg.setSource(57327U);
    msg.setSourceEntity(111U);
    msg.setDestination(49671U);
    msg.setDestinationEntity(216U);
    msg.op = 230U;
    msg.clock = 0.07491779079000316;
    msg.tz = 14;

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
    msg.setTimeStamp(0.9928764021177086);
    msg.setSource(14176U);
    msg.setSourceEntity(75U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(252U);
    msg.op = 219U;
    msg.clock = 0.9764719485265814;
    msg.tz = -43;

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
    msg.setTimeStamp(0.05008650567187234);
    msg.setSource(62789U);
    msg.setSourceEntity(176U);
    msg.setDestination(11477U);
    msg.setDestinationEntity(37U);
    msg.op = 104U;
    msg.clock = 0.5606620247654807;
    msg.tz = -43;

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
    msg.setTimeStamp(0.6416417487200926);
    msg.setSource(18779U);
    msg.setSourceEntity(53U);
    msg.setDestination(37779U);
    msg.setDestinationEntity(22U);
    msg.conductivity = 0.057007319731053885;
    msg.temperature = 0.6791531763578948;
    msg.depth = 0.3702557375224097;

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
    msg.setTimeStamp(0.7707126212531584);
    msg.setSource(52109U);
    msg.setSourceEntity(109U);
    msg.setDestination(20620U);
    msg.setDestinationEntity(142U);
    msg.conductivity = 0.8235963749660083;
    msg.temperature = 0.9718336686303609;
    msg.depth = 0.0747530290375793;

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
    msg.setTimeStamp(0.002687466317159326);
    msg.setSource(21563U);
    msg.setSourceEntity(54U);
    msg.setDestination(52743U);
    msg.setDestinationEntity(177U);
    msg.conductivity = 0.04702940100436903;
    msg.temperature = 0.46674229744424145;
    msg.depth = 0.5086213046179721;

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
    msg.setTimeStamp(0.6719599793920048);
    msg.setSource(16452U);
    msg.setSourceEntity(37U);
    msg.setDestination(9912U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.9481776241394894;
    msg.roll = 38002U;
    msg.pitch = 42463U;
    msg.yaw = 23144U;
    msg.speed = -4870;

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
    msg.setTimeStamp(0.6727522382321752);
    msg.setSource(37981U);
    msg.setSourceEntity(151U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(77U);
    msg.altitude = 0.039366422678096646;
    msg.roll = 18346U;
    msg.pitch = 27580U;
    msg.yaw = 43688U;
    msg.speed = 26223;

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
    msg.setTimeStamp(0.8679130278833559);
    msg.setSource(16683U);
    msg.setSourceEntity(40U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(51U);
    msg.altitude = 0.3304745125453984;
    msg.roll = 39730U;
    msg.pitch = 27526U;
    msg.yaw = 43442U;
    msg.speed = 27174;

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
    msg.setTimeStamp(0.4196982197244965);
    msg.setSource(3875U);
    msg.setSourceEntity(46U);
    msg.setDestination(4573U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.6547716124702523;
    msg.width = 0.40239539144753955;
    msg.length = 0.6488869472260621;
    msg.bearing = 0.5377988167340318;
    msg.pxl = 13873;
    msg.encoding = 211U;
    const signed char tmp_msg_0[] = {96, 3, 103, -13, 37, 72, 108, -35, 6, -88, -55, -83, -28, 13, -6, 81, 34, -39, -40, -72, 110, 50, 86, 84, 11, 38, 31, 102, -43, -72, -23, 5, 21, -28, 36, 23, -27, 53, 7, 41, 110, -96, 96, 114, 92, -101, 97, -65, -93, -123, 112, 86, -128, 95, 43, -42, 90, 102, 27, -119, -2, 83, 112, -58, -22, -5, -30, -39, -77, -48, 12, 123, 33, 92, 98, 32, 94, 31, 1, 86, -1, -69, 47, 2, -79, 125, -18, 11, -116, 25, 51, -74, -70, 123, 6, -41, 122, 7, 32, -64, -10, -88};
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
    msg.setTimeStamp(0.49442206745091466);
    msg.setSource(59531U);
    msg.setSourceEntity(163U);
    msg.setDestination(26826U);
    msg.setDestinationEntity(26U);
    msg.altitude = 0.9037994980999515;
    msg.width = 0.6852770956465232;
    msg.length = 0.5435326504597192;
    msg.bearing = 0.74644967982108;
    msg.pxl = -31520;
    msg.encoding = 98U;
    const signed char tmp_msg_0[] = {-21, 43, -107, 82, -128, 85, 108, -88, 97, -3, 124, 96, -26, 7, 115, -126, -10, -85, 40, -5, -40, 113, -120, 39, 26, 117, 17, -128, -1, -89, 124, 17, 23, -92, 123, -40, -98, 90, -63, -90, 30, -34, 94, 53, -10, -16, -31, 18, 77, -85, -27, -55, -42, -51, 41, -12, -88, -106, -120, -113, 71, -119, -112, 30, 72, -21, -30, -67, -96, 114, 29, -62, -62, 81, -126, -31, -106, -62, -20, -57, 71, 78, 35, 4, -14, 92, -86, -117, 99, -65, -9, 113, -86, -27, -59, -82, 9, -63, -37, 125, -2, -108, 115, 46, 83, -36, -88, 121, -80, -107, 2, 5, 111, -34, -41, -11, -10, 3, -91, 24, -89, 35, 91, 20, 87, -107, -114, 2, -115, -64, -126, -73, -89, -4, 126, -86, 15, 40, -82, -41, -82, -113, 59, 121, -70, 15, 114, 84, -36, 112, 15, 33, -126, 71, 49, -53, -47, 42, -54, -73, 40, 93, -94, 126, 113, -98, 105, 36, 109, -67, 31, -60, -64, -15, 90, 83, 11, 98, -97, 41, 24, -36, -7, -120, -48, 16, 13, -127, 95, -78, 71, 123, -23, 104, -96, -85, -10, -48, -63, 115, 15, 20, 14, 114, 78, -50, -118, 3, -110, 122, 67, 100, 16, -26, 101, -13, 62, -106, -114, 117, -81, -56, -113, -67, -30, 55, 46, -1, 38, -98};
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
    msg.setTimeStamp(0.43932023443290724);
    msg.setSource(19589U);
    msg.setSourceEntity(40U);
    msg.setDestination(18248U);
    msg.setDestinationEntity(5U);
    msg.altitude = 0.1455005644143068;
    msg.width = 0.27116373179130826;
    msg.length = 0.2526842111030684;
    msg.bearing = 0.8618999021340092;
    msg.pxl = -19239;
    msg.encoding = 87U;
    const signed char tmp_msg_0[] = {54, 73, 69, 41, 79, -109, 59, 68, 23, -35, 7, 10, 59, 109, -62, 100, -46, 38, -78, 49, -55, 100, -117, 45, -3, -16, 21, -119, -29, 6, 75, -50, 57, 32, -103, 76, 91, -53, 90, -112, 44, 34, -88, 90, 78, -99, -4, 77, -36, -36, 119, 117, 125, -123, 95, 70, -99, -103, -114, 110, -120, 66, -33, 75, 36, 55, -128, -58, 44, -49, -52, -93, -110, 77, 52, -90, 50, 28, -104, -2, 31, 97, 41, -52, 84, 44, -59, 25, 2, -35, -80, -36, 79, 110, -83, -116, 118, -102, -2, -106, -76, 75, 80, -68, -118, -59, -32, 78, -61, 66, 28, 58, -28, 59, 96, -62, 40, -100, 18, -97, -75, -67, -60, 102, -29, -51, -84, -96, -69, 103, 90, 9, 85, -6, 60, 12, 53, -9, 107, -2, -65, -12, 77, 96, -93, -104, 95, 112, 25, -49, -78, 93, -82, 100, 104, -39, 2, -109, -114, -51, -75, -43, 72, 120, -35, 95, -73, 95, 63, -95, -88, -75, -88, -111, 21, 56, 69, 122, -65, -67, 71, -50, -107, -122, -70, -44, -48, 62, 36, -9, -103, -48, 94, -20, -37, 106, 53, -57, -98, 95, -109, -80, -2, -107, 108, -128, 3, 123, -29, 75, 89, -97, 27, 1, 91, -32, -50, 36, 15, -79, 111, -5, 117, -111};
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
    msg.setTimeStamp(0.6750668300454367);
    msg.setSource(20473U);
    msg.setSourceEntity(122U);
    msg.setDestination(22083U);
    msg.setDestinationEntity(38U);
    msg.text.assign("JSJAUPLWTETOGBCNGBZEHQJWCVDDOWVRLWSBORRVHTQPAFBDEDMABCOEUSVMEIPMHXZGYCBFKPYPNYV");
    msg.type = 204U;

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
    msg.setTimeStamp(0.7860890558466554);
    msg.setSource(25243U);
    msg.setSourceEntity(33U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(136U);
    msg.text.assign("OIEFOEYQVXWHQVTUECDOKPLZTKWVBHJDGRWOKSUHRKZLJRMRZTMGIVMHQLOBQNPGSMNIMOQZJQXAIGKLSHRIOFZIRAPSUDGSJDBNJGSWHYAAWSUTKGFXVYQYYHVJKPTKLGWSMMTHCAPPOXXBEQFEXURFDFIMKB");
    msg.type = 45U;

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
    msg.setTimeStamp(0.35332355410298677);
    msg.setSource(5678U);
    msg.setSourceEntity(211U);
    msg.setDestination(39452U);
    msg.setDestinationEntity(205U);
    msg.text.assign("NWEFOZOIQWYGKDMQQGUYJCMKCFGFMJPIKMGLNFKPFRJFSGUDAOERRUTVWYUIXDGHNVSXRKXEBDSZRABUWBHSKKLVNADQFSXFKZYFJHQBXASTHWQIJRXTBNIIWNEN");
    msg.type = 243U;

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
    msg.setTimeStamp(0.09874185037223537);
    msg.setSource(53181U);
    msg.setSourceEntity(123U);
    msg.setDestination(43690U);
    msg.setDestinationEntity(195U);
    msg.parameter = 105U;
    msg.numsamples = 219U;
    msg.lat = 0.683755834853487;
    msg.lon = 0.06486304419115163;

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
    msg.setTimeStamp(0.2096106034070122);
    msg.setSource(35042U);
    msg.setSourceEntity(49U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(90U);
    msg.parameter = 194U;
    msg.numsamples = 230U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 11907U;
    tmp_msg_0.avg = 0.9758216585233542;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.38777861776825295;
    msg.lon = 0.3385099298923514;

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
    msg.setTimeStamp(0.012271262808008498);
    msg.setSource(38397U);
    msg.setSourceEntity(238U);
    msg.setDestination(17758U);
    msg.setDestinationEntity(251U);
    msg.parameter = 71U;
    msg.numsamples = 202U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 36816U;
    tmp_msg_0.avg = 0.01174915421736733;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.71110261234502;
    msg.lon = 0.18026182616269282;

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
    msg.setTimeStamp(0.8920887139071217);
    msg.setSource(3125U);
    msg.setSourceEntity(155U);
    msg.setDestination(12927U);
    msg.setDestinationEntity(163U);
    msg.depth = 50599U;
    msg.avg = 0.6311994478393419;

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
    msg.setTimeStamp(0.43031601974428824);
    msg.setSource(51776U);
    msg.setSourceEntity(48U);
    msg.setDestination(23920U);
    msg.setDestinationEntity(90U);
    msg.depth = 34265U;
    msg.avg = 0.5329810129921162;

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
    msg.setTimeStamp(0.6351604344332372);
    msg.setSource(592U);
    msg.setSourceEntity(30U);
    msg.setDestination(39621U);
    msg.setDestinationEntity(24U);
    msg.depth = 55960U;
    msg.avg = 0.8240705685090636;

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
    msg.setTimeStamp(0.4032961824894422);
    msg.setSource(49641U);
    msg.setSourceEntity(172U);
    msg.setDestination(1788U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.6942995524347598);
    msg.setSource(31368U);
    msg.setSourceEntity(203U);
    msg.setDestination(63687U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.06353011404484932);
    msg.setSource(4419U);
    msg.setSourceEntity(250U);
    msg.setDestination(45937U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.6247342597424362);
    msg.setSource(62081U);
    msg.setSourceEntity(141U);
    msg.setDestination(51763U);
    msg.setDestinationEntity(188U);
    msg.sys_name.assign("ITGDXNXTEAUGZACLBHGRDOTHQJJKKRYQYLKCEMRSUNOMHEVTFVXRAUYCCRAIEFYBUBMAYLGQTMVVORBKWGICPLCVPVNPDBVCMYHLIIYXBRGWOYSPDFZOLOJEDFXSXZNAEQOSLXFZZUFMZRUDYVKGHKPQMMIEBWOJJOCNXIOMKDSHQSNEQRVCNAZDTMZBSBWUJFGTAPPWWHNTTHA");
    msg.sys_type = 170U;
    msg.owner = 59134U;
    msg.lat = 0.8955767718480003;
    msg.lon = 0.7102686994784096;
    msg.height = 0.6520036846640442;
    msg.services.assign("XXNWDIHMTWQUPNQZJQWSUBLJKVVOWRGNNEPJHDEELLGICHVHOJFDFMXLONWASTMZABIKCCUSMAAXPWHDZBUGCGBJFNPVRUXNPEXYKBPKNMIZLBTVKNQOKHRKCHZMBLLTSQIAESKAIQIJAGYAJCXFMEGVFYFUZRSDEFFHBFXXOULSPCWVUYLWTYOORSDZWIYJZHGGQPDMECRQTGUZEYCCHYRBDDOLJZIPTFMUTTPVRIAVWYKKOQSQG");

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
    msg.setTimeStamp(0.4176377171618906);
    msg.setSource(24770U);
    msg.setSourceEntity(167U);
    msg.setDestination(15228U);
    msg.setDestinationEntity(213U);
    msg.sys_name.assign("XGADFXWNJVZAATDSGRQJUAHQBBOBGXBDFYM");
    msg.sys_type = 4U;
    msg.owner = 58577U;
    msg.lat = 0.5270151091347486;
    msg.lon = 0.253689447045119;
    msg.height = 0.6399115604439201;
    msg.services.assign("ECMBFCAHATNDLGYJGQRKPONJYUWGWSJMAYGLFGXKITTEDCAUHDSUSYNUVRDJVCQYDZEJAOBLJDIFJSZAEJLUQCAWMKZFRLYGBKWDIRLVQVOGSFPRNVWXAKYHTDNFHLULMEAHNFCRBXWYXMUXWWTVMQNBTXBCPHEUICEKEISTBDZA");

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
    msg.setTimeStamp(0.12169615037760906);
    msg.setSource(48209U);
    msg.setSourceEntity(60U);
    msg.setDestination(36642U);
    msg.setDestinationEntity(161U);
    msg.sys_name.assign("TRUIBJRCIYIVXWQFKFBDNKWROHQYXQSFNVCHAFDQRTSFPCUCXJASWCJWCVTLCKOGMVIZMUMXLRDEIOJFNKETEAZSMKXERIOVOLZOQAZHBTVGGBWSJFXLEEAKBSEJJOZHXPUXFCRNDWWBAKMYCUYULLKDYXEPTMRVYSONQDSTNYGRFMHUMAEYJAH");
    msg.sys_type = 161U;
    msg.owner = 10536U;
    msg.lat = 0.06152912617912709;
    msg.lon = 0.15846145492262176;
    msg.height = 0.20502951972537153;
    msg.services.assign("NAGMMWKIELBDACURLPSTUHZZBKOFJLMZAWPTYPUZEWYJMOTGEUPVIQDTJNYGWLWHCEYAUZSIBYPXWMDNVIPYXZCWCKKOFEOC");

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
    msg.setTimeStamp(0.40816060073221083);
    msg.setSource(60838U);
    msg.setSourceEntity(161U);
    msg.setDestination(11878U);
    msg.setDestinationEntity(165U);
    msg.service.assign("AWYJDYLNZVHGAHVAVPZFO");
    msg.service_type = 119U;

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
    msg.setTimeStamp(0.8334419251767019);
    msg.setSource(37233U);
    msg.setSourceEntity(141U);
    msg.setDestination(9372U);
    msg.setDestinationEntity(12U);
    msg.service.assign("JQGUIMTXIJBUHFPUIWZGVNIVBOKNFPZLQSDUYAXLKGFOOFXXYRCJPGKGYHVWCNVMEZDXTQCB");
    msg.service_type = 234U;

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
    msg.setTimeStamp(0.23035953772804907);
    msg.setSource(12121U);
    msg.setSourceEntity(166U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(148U);
    msg.service.assign("KOGACRMCIKJUXGSXKZWJENRHECAMKYQOCWFETAQZBANJUFRLVOQRPZFLDETIDYMOBWPWQDUHVGHJEQPLQDCAYVLJIOOZTGJWVURAQSBVKWICUIJXA");
    msg.service_type = 147U;

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
    msg.setTimeStamp(0.6525929724634478);
    msg.setSource(4652U);
    msg.setSourceEntity(136U);
    msg.setDestination(1642U);
    msg.setDestinationEntity(80U);
    msg.value = 0.07320151951213139;

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
    msg.setTimeStamp(0.7081357386094207);
    msg.setSource(11507U);
    msg.setSourceEntity(214U);
    msg.setDestination(58079U);
    msg.setDestinationEntity(188U);
    msg.value = 0.22135500239662242;

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
    msg.setTimeStamp(0.5277024788949384);
    msg.setSource(30724U);
    msg.setSourceEntity(212U);
    msg.setDestination(25724U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6629067094357041;

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
    msg.setTimeStamp(0.12607449995249043);
    msg.setSource(1361U);
    msg.setSourceEntity(185U);
    msg.setDestination(50738U);
    msg.setDestinationEntity(151U);
    msg.value = 0.3518995520441831;

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
    msg.setTimeStamp(0.10106625847323991);
    msg.setSource(55610U);
    msg.setSourceEntity(145U);
    msg.setDestination(35359U);
    msg.setDestinationEntity(231U);
    msg.value = 0.42783318277321014;

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
    msg.setTimeStamp(0.5752863491743216);
    msg.setSource(61326U);
    msg.setSourceEntity(175U);
    msg.setDestination(17703U);
    msg.setDestinationEntity(46U);
    msg.value = 0.4014941375978931;

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
    msg.setTimeStamp(0.6977084378223722);
    msg.setSource(20259U);
    msg.setSourceEntity(145U);
    msg.setDestination(16702U);
    msg.setDestinationEntity(242U);
    msg.value = 0.617492149861425;

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
    msg.setTimeStamp(0.5615772283634193);
    msg.setSource(52823U);
    msg.setSourceEntity(69U);
    msg.setDestination(5173U);
    msg.setDestinationEntity(133U);
    msg.value = 0.6242083168131182;

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
    msg.setTimeStamp(0.8918658877279553);
    msg.setSource(17865U);
    msg.setSourceEntity(106U);
    msg.setDestination(34115U);
    msg.setDestinationEntity(57U);
    msg.value = 0.8890923679056635;

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
    msg.setTimeStamp(0.9015104642556229);
    msg.setSource(47884U);
    msg.setSourceEntity(131U);
    msg.setDestination(40118U);
    msg.setDestinationEntity(7U);
    msg.number.assign("XIFRVHDTAECAKHVSXOYROWHTWQYVIWKOFTBEUHDAFGCKTKQSMYMPVLACDHQTJSJAXMNGJUOOUPYEIGJBEFMAWLIQPTNZPTDZOLWXCENGPRPMCEHXBGXIZMKDXPWSLNVRQJYFFBJVQQL");
    msg.timeout = 26994U;
    msg.contents.assign("QYEDUBEKDBAJLBRZIHTWONCUKKYJTETJSFEAQYANYEDOWKPAICMOYFHVUPJCYJJLNTU");

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
    msg.setTimeStamp(0.34935715776882625);
    msg.setSource(61205U);
    msg.setSourceEntity(214U);
    msg.setDestination(2905U);
    msg.setDestinationEntity(219U);
    msg.number.assign("VIRRWRSDXPAZEHTTMWSRPNVAIHJOOISLGSJMXLDHSALJJEEDYENTLPZUUQKXEWCVWISZGLFFDSUVBQFSBKANMGSHGPUDHVTKVCRIZMZYQDOPHZFJJBAYGBAUMKOAGOSWYQOCUPRWZBQWYJZFYJUFIIYGOYBXDLPXHFQKTFQXHQTOMCKBXNTARCRHIEYHJNNPEQBCYTFKLJLMXLAVWVOVQEWUAK");
    msg.timeout = 41755U;
    msg.contents.assign("LORDOLWXQKJXJMGVMERWQNMYOAKHESWQBUAFYOVQEKLUQICCWV");

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
    msg.setTimeStamp(0.0955786101012367);
    msg.setSource(34584U);
    msg.setSourceEntity(52U);
    msg.setDestination(38250U);
    msg.setDestinationEntity(82U);
    msg.number.assign("RRCERYZXPGCTSRBVIPDHNUBJAEJYUZTZWUBISWJJVMGPVFDNLSYXQPGKYCDNGGHHOCEOPXOXRTRL");
    msg.timeout = 12539U;
    msg.contents.assign("FYVPGKUPBRYJOIOTYHKBZNFRNDRASXOUSVTWXSCPBULKFOWMTFZXD");

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
    msg.setTimeStamp(0.7099437997975199);
    msg.setSource(33883U);
    msg.setSourceEntity(58U);
    msg.setDestination(22834U);
    msg.setDestinationEntity(184U);
    msg.seq = 1178470527U;
    msg.destination.assign("YDBPAUBLOXOOFFLPAWDDFJBFGYABKGKJFUKHQTQINWUDHSXXOKTNXCNCBBZRMMCAHJJPWOMTQTXQDINCCWNEUPESVZTTQNFDXRGSYAHSJSHLUMVKFWBOMQHEVGGIRWVXHPQATRVCFGUQBNZZBDJWPSVAOLMYRPOEEEREBQALGRDDNWXLZQHMRZRESTTMICAZKLXGYHCFDLOIYWRMCN");
    msg.timeout = 54594U;
    const signed char tmp_msg_0[] = {-86, -10, -38, 123, 108, -30, 21, -26, 76, -6, -125, 68, 123, -86, -99, 67, -87, 119, 34, 46, -64, 34, 71, 42, 91, 105, 106, 66, -88, -22, 63, 57, -109, 74, 103, -53, -50, -13, 32, 106, 52, -51, 34, 17, -95, -102, -104, 67, -6, 21, -12, -127, -67, -84, -87, -69, 92, -103, 43, 27, -23, -67, -85, 99, -75, -102, -101, -95, -1, -106, -39, 27, -51, 6, -28, -62, 86, -123, -79, 51, -24, -50, 27, -11, -36, -121, 41, 126, -12, 8, -48, -45, 12, 79, -14, -56, -100, -17, -98, -87, -31, 17, 61, 33, 37, 101, -87, 89, -28, -39, 113, -83, -108, -90, -77, -85, 45, 115, 69, -128, 39, 122, 66, 29, -124, 70, -113, -29, -103, 49, -81, 87, -42, -5, -9, 42, -75, 4, 90, 22, 6, -32, -63, -84, -76, -76, 37, -121, -61, 123, -26, -118, 12, 58, 102, 110, 22, 37, -22};
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
    msg.setTimeStamp(0.4641850869574553);
    msg.setSource(36860U);
    msg.setSourceEntity(140U);
    msg.setDestination(37714U);
    msg.setDestinationEntity(111U);
    msg.seq = 2301910349U;
    msg.destination.assign("RZEPJBSRGCVOUMTEIEDFNLQBFKSEJVOLXJYIOCTPMTJCKWJXAETDLRHEVXILHCTTZIUGIHRMPAQUNBGKXTRPDHGXFFYWBZDWPRQYWYUWHJSTGQANVQGRUZPQKFUOLNGGUCLECJIWCOXMPDWGDYNMYFQQHHZITIKAVADFOZJMSNBQJNKCQMHSULSXIDZU");
    msg.timeout = 22410U;
    const signed char tmp_msg_0[] = {-73, 27, -35, 65, -31, -35, 43, 56, 38, 26, 116, -65, -24, -77, 86, -17, -99, 114, 92, 88, 72, 90, 93, 50, -64, -71, 51, 94, -13, 95, 73, 106, -18, 10, -125, -119, -30, -64, -99, 8, -36, -66, 61, 47, 59, -38, -14, -104, 84, -78, -60, 13, -5, 80, 85, 84, -56, 55, 31, 17, -109, -77, 122, 76, -53, -95, -75, -9, -105, -4, 11, 24, -114, -47, 4, 93, -47, 37, 3, -77, -100, 27, -58, -19, -128, 72, -94, 119, 93, -46, 57, -75, -52, 97, 55, 33, 90, -31, -33, -4, 72, 83, -98, -24, 106, 124, 0, 55, 87, 37, -57, 69, -36, 122, 13, 40, 24, -8, -59, -42, -12, 89, 97, -18, -58, 43, -128, -68, 50, 9, 71, 46, -61, 37, -111, -29, 61, 31, 66, 1, 99, 4, -65, -80, -102, 69, 105, 87, -101, 8, -37, 49, -10, -105, -32, 85, 24, -16, 65, 84, 61, 85, 26, 110, -115, 37, 96, 61, 41, 118, 101, 25, -39, -37, -48, 110, -94, -107};
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
    msg.setTimeStamp(0.3771912455719544);
    msg.setSource(61866U);
    msg.setSourceEntity(149U);
    msg.setDestination(14187U);
    msg.setDestinationEntity(133U);
    msg.seq = 1823007139U;
    msg.destination.assign("GSHPZRYNXUWJXQYSTNHFSMNREULVIAPWGIONSKYOWMLOXPZVJTVBJCSZZLXCIELUEAGGFUTIMQBDJWHTKQWUMDJCZRXEVPIKRMUXMMKLLFJXHHCKBWQAQFFDYY");
    msg.timeout = 17617U;
    const signed char tmp_msg_0[] = {-8, 85, 16, 79, 117, -80, -24, 69, 51, -46, -77, 83, 0, 3, -95, 16, -78, -112, 46, -84, 13, 123, 10, -23, 115, 22, -48, -68, 104, 25, -93, 5, 103, -63, -29, 108, 5, 39, 26, -122, -54, 93, 85, -6, 41, -97, -99, 114, -53, 3, 5, -38, -26, -12, 6, 90, 22, 27, 124, 123, -23, 105, 90, -110, -93, 6, 122, -125, 96, -65, -64, -112, 45, -106, 2};
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
    msg.setTimeStamp(0.4245222058080703);
    msg.setSource(39424U);
    msg.setSourceEntity(15U);
    msg.setDestination(52626U);
    msg.setDestinationEntity(94U);
    msg.source.assign("UFRGLKQBTEJKWVOJNISNULMVDIBVLGHSKHYCDSKRTPVWNXNKXAOYBPLSRNOQYVCFIGDJBPIAJWFQWDPXHJ");
    const signed char tmp_msg_0[] = {-122, 29, -102, 1, 80, 71, -118, -41, 30, -122, -97, -68, -53, -59, 73, 108, 80, 116, 97, -39, -66, 117, 49, 8, 6, -13, -68, 19, 88, 94, 20, -49, 47, 1, -77, -102, 114, -86, -61, 122};
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
    msg.setTimeStamp(0.9158192283469556);
    msg.setSource(32986U);
    msg.setSourceEntity(227U);
    msg.setDestination(19352U);
    msg.setDestinationEntity(251U);
    msg.source.assign("ZGCZQKQYLBYSMMHEETGUWHCVDIUQRYGDSXDFMTGOYYPSCKZ");
    const signed char tmp_msg_0[] = {50, -1, 83, -55, 57, 64, -29, -105, -42, 110, -57, -65, 51, -105, 113, 122, 56, 33, 34, 74, 4, 69, -32, -64, -85, 51, -98, -60, -128, -20, -118, -116, -59, -94, -124, 114, 9, 45, -99, 49, 73, -31, -107, 30, 12, -69, -11, -125, -98, -29, -30, -89, 69, 119, 12, 2, -66, -10, -38, -108, 108, 82, 44, 93, 9, 115, -97, 34, 124, 62, 112, 96, 6, 88, -36, -73, -36, 25, 53, -31, -56, 26, 78, -71, -34, -86, 26, 68, -112, -14, -54, 120, -12, 6, 22, 82, 38, -81, 103, 23, -45, 87, -128, 12, -63, 61, -42, 26, -29, -118, 15, 88};
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
    msg.setTimeStamp(0.47168190813861366);
    msg.setSource(3438U);
    msg.setSourceEntity(105U);
    msg.setDestination(25625U);
    msg.setDestinationEntity(49U);
    msg.source.assign("CFZTGNFMHRPJWTAWXLDILDQSOVPWBYUUMURGPLESZFSVGSVGLNOMFPAIOJSKGKDIIJEPYUHSCVZWUXZOEBSKWEQBKNNEANXBLZHURHCQQFTJZKYOHIXNEYWQXHDBJBILOBHXYFEMJHAYUPKZYWRDZTUXFXXGETMAVLVNGVCUZCLIFQMOGRBNGWTJXTIKNYHDTFJCOPVVNDASARQRAWKVMWSMRIJALKDTYQBUPRLCDJBZGCMQTSFYPE");
    const signed char tmp_msg_0[] = {14, -72, 105, 79, -106, -66, -32, -94, 81, -81, -114, -4, 52, 91, 88, 82, -44, 95, 118, -2, 123, 18, -120, -77, -63, 44, -66, 112, 24, -104, -26, 26, 22, 73, 86, 17, 18, 109, -83, -4, 15, -108, -128, 17, 101, 88, -27, -17, 3, -125, 52, 16, 38, -75, 25, -103, -126, 34, -92, -78, 25, 104, -88, -70, -121, -13, 27, 53, 114, 4, 7, 21, 85, -86, -96, 6, -51, -60, -111};
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
    msg.setTimeStamp(0.808553666109817);
    msg.setSource(8006U);
    msg.setSourceEntity(98U);
    msg.setDestination(39458U);
    msg.setDestinationEntity(89U);
    msg.seq = 2506704180U;
    msg.state = 168U;
    msg.error.assign("NIHZJRYMYWGYHWBVMJAPNDXYAIKMADSNBKBXBPBQXGOATRCUUQULHUCDUHKARDCRHRGUSQOMBPJRZSEZPBKVTXUYLZFWKJZW");

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
    msg.setTimeStamp(0.49151112708907785);
    msg.setSource(21736U);
    msg.setSourceEntity(13U);
    msg.setDestination(54177U);
    msg.setDestinationEntity(114U);
    msg.seq = 150227172U;
    msg.state = 45U;
    msg.error.assign("RQIVELJHHIRSFWSPSLYEI");

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
    msg.setTimeStamp(0.3657160202948817);
    msg.setSource(2666U);
    msg.setSourceEntity(155U);
    msg.setDestination(23035U);
    msg.setDestinationEntity(141U);
    msg.seq = 2507309943U;
    msg.state = 203U;
    msg.error.assign("ZUIJTTKNJRECTCELEPKAILTNBFHDCCJEWDQOGBXKFFFEJPDAFKIRDZPJFIHUBVKWZMOCNYYQDEYTQSXWWGQXLYYYPJAWTIMYVMSXONDVNURDXBGMVMFPBMZPAGHFWQZOYKRGFXPSEIMZMZOJPVZHXIRVNJCKCERVSHUPNHUSWYUFGNGRVQXAKSESODAITQBHKVKQHLGLCGBOJPIHXJARUBUAIDSBUMQCWMOTWTA");

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
    msg.setTimeStamp(0.33180702835464815);
    msg.setSource(37902U);
    msg.setSourceEntity(62U);
    msg.setDestination(45989U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("FICGLLKCDAXGCDKTWETUCQXHCXNWUHLHVFJMPVT");
    msg.text.assign("XXALQGHLNSWUNNGKVHHMEJOFUMRRYZOGWYHSNMRBGRAUKBJZTTFYDTSZQSENDTOCIAWOECTAPXDHCRZGMQUWBUXHPOLKPFVURJHGNPCQLQODTLFPFYPLUOZJUOJFSEFGTDWMROSWEZANWKXAAUQMIDIBLBQZQPMNHEDNVCVDNXLJHJYVPYKYLIK");

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
    msg.setTimeStamp(0.3329828803791589);
    msg.setSource(44609U);
    msg.setSourceEntity(32U);
    msg.setDestination(8104U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("PTTPNYQYDMQAZXLGWTJBIRUPFAOZRYIXPWFTGNSMHBHAZDIJSOVCGWZFNBJSRDWMHQZEYQQHXGORNPCVAMGDGVHJIKKWDKBBLBIFYJOELTCMYVKESIBCHQNEACDJJBVSMBMTSLIYWVXPFAQZJKVMXPUTFPZKKSJKDKCFQSHXZRGYXXSUALFEDNUYCVNHEGOUWDXLPBIQNCAQEFZLLOEGDWKSHCAHOOWAFCUTRGOMRYPO");
    msg.text.assign("JAWBKPUTDWHNPXTGIFHECDWDPIMRAZEHYSBHSMECUXOKMZZMFHAQURJSETTTIVEZPUWYAXNONDJMQKFWTORFNBLPORQHDCUOAVABTYH");

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
    msg.setTimeStamp(0.6173899728117701);
    msg.setSource(28954U);
    msg.setSourceEntity(216U);
    msg.setDestination(28036U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("RZDZEIEMBROZNTYSXYTQGNDWCDZAPSVUHKTWWAXHBCOPESLOVJLWBCEGSQKZLMCNJGRZMKZIESIPRLHKPOFKGBLJVDEYUTXZBDPIUJGSENFMKBKMKRVBWUOMQMNUPXDANQVHELTQSFSPHXVANMGYYAYQGQNFPHCVAERJNTA");
    msg.text.assign("AYOWEMUNCLJIBUHPNITMMNTCQJPHDABQPDSBABIAIOKUPTDJQRHTWXBIAHUGKYJXWYLYJCBHPTALMCUZDUSXDJZWKLJIFSMKXJSBXIENORNEUGKYCKRYVZVFBHCVDTRXNSZSFFGFEOATMLLMFIPUGXFHGLTGFNZORVQXSSYELPZMWAMNPHWJLSZVDVZVQIWGKQYBNJOKQOUXERKBVEIADRCXPSCGCEYOUFQQZTPMGVFWD");

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
    msg.setTimeStamp(0.4806993854064924);
    msg.setSource(28474U);
    msg.setSourceEntity(19U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("QIWVQBJGCMLIMJGGGNOF");
    msg.htime = 0.7675523132054827;
    msg.lat = 0.7696901340636821;
    msg.lon = 0.5141453263238267;
    const signed char tmp_msg_0[] = {102, -88, 56, -104, 28, -85, -13, -57, -80, 42, 91, 33, -61, 113, 109, -91, -90, -60, -14, 99, 11, 94, 66, 52, 74, 118, -79, -8, 111, -101, -44, 66, 125, 67, 78, -43, -34, 106, -26, -102, -114, -18, -25, -26, -108, 102, 63, -49, -120, 110, 89, 88, 98, 98, -109, 71, -48, -117, 41, 8, -1, 72, 39, -31, 125, -52, -79, 110};
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
    msg.setTimeStamp(0.6249876756256908);
    msg.setSource(32999U);
    msg.setSourceEntity(46U);
    msg.setDestination(56890U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("OGEYGSFDZLULMPXEECYIOLVLIBRACEQUNUKQMGXAUTIDIZXFDINJNEOHSTSTTIAVNZMEXFSKSURODACWHJZKWPVQJXONDHFMNEMLAZJGHEPUKHSFMBKQBWRSXQOANXUGJHTIGVMRFLZQBRCHCPWKBXOR");
    msg.htime = 0.029135192615651118;
    msg.lat = 0.030746041026858406;
    msg.lon = 0.9006846653470861;
    const signed char tmp_msg_0[] = {117, -103, -48, 74, -85, 8, -108, 28, -98, 121, 33, -19, -80, 24, 7, -117, 4, 6, 118, 113, 42, 62, -40, -92, -70, -83, -52, 83, -31, -82, 72, 110, 69, 14, 25, 84, 116, -104, -57, -41, -66, 87, -34, 16, 70, -83, 97, -113, -23, -63, -81, -24, 17, 110, 73, -68, 22, 14, 58, 30, 3, 73, -93, -126, -14, 50, -56, 30, 94, -56, -113, 48, 37, -124, -74, 34, -96, 101, 119, -26, -48, 113, 88, 68, -107, 16, -23, -27, -113, 17, 103, 62, 66, 73, 48, 90, -124, -19, 53, -111, -50, 6, 119, 92, -126, 36, -22, -76, -112, 115, -1, 46, 119, 88, -30, 30, -82, -37, -127, -111, 47, -81, -64, -81, -99, 1, 91, 124, 118, -62, -39, -17, 25, 106, 29, 85, 44, -78, -77, 77, -63, -95};
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
    msg.setTimeStamp(0.6516315060003891);
    msg.setSource(59891U);
    msg.setSourceEntity(66U);
    msg.setDestination(49322U);
    msg.setDestinationEntity(209U);
    msg.origin.assign("EKORWQOTZIIFTXOBXMVABRNVJEPQRFJACLDMUNYSDBUD");
    msg.htime = 0.1598134831478355;
    msg.lat = 0.6025272348638128;
    msg.lon = 0.7380573889825219;
    const signed char tmp_msg_0[] = {46, -66, 87, 50, 5, 108, -113, -86, -93, -97, -47, -28, -49, 74, -119, 33, 77, -3, -32, -33, -22, -91, 54, -118, 27, 34, -124, 71, 111, 72, -3, -26, 22, 0, -61, -50, -1, 96, -70, -10, -45, 92, 11, -38, -52, -15, 73, -69, -95, 54, 121, 68, -26, -98, 17, 15, 2, -17, -78, 75, 17, 18, 72, 34, -45, 95, -13, 98, 84, 14, -87, -31, -4, -61, -108, 17, 117, -93, 20, -42, -111, -105, -124, 108, -25, 97, -61, -27, -100, 100, 42, 81, 48, 82, -54, -26, 82, -58, 8, 43, -26, 49, -87, 124, 80, 51, -30, -70, 125, 75, -88, -79, -50, 46, 43, -116, 93, 14, 37, -67, 62, -47, 111, -90, 39, 46, -65, 88, -66, -44, 115, -55, -18, -89, 94, 96, -31, -117, 10, -32, 63, 50, -65, 76, -54, -69, 89, 86, 87, 119, -74, 92, -37, 29, -94, 36, -75, -92, 62, -35, -62, -72, -76, -19, -90, 109, -94, -122, 60, 38, 76, -72, 91, 33, 28, 16, 61, 9, 118, -4, 60, -70, 37, -115, -57, -54, -12, -81, 71, -81, 65, -5, -19, -102, 77, 7, 1, 97, 12, 59, 57, 120, -44, 43, -7, -75, -117, -84, -25, -25, -46, 48, 82, 90, -63, -104, 2, 77, 125, 74, 75, -96, 5, -15, -8, -114, 42, -5, 61, -106, 70, 37, -6, 26, -38, 27, -88, -111, 33, 8, 123, -24, 30, 62, -36, 106, 49};
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
    msg.setTimeStamp(0.6883866462333095);
    msg.setSource(27573U);
    msg.setSourceEntity(55U);
    msg.setDestination(40924U);
    msg.setDestinationEntity(50U);
    msg.req_id = 26977U;
    msg.ttl = 35759U;
    msg.destination.assign("UAXGMMEKWPPEOXRNIEWRTFJGBLAYWWNDOVXWUMPGPDFZYPMHFWNMMNTBWQRZYDQPJMOIZLFIBTOSKHCLHXRZUZVHKTFSBXIAMTX");
    const signed char tmp_msg_0[] = {-44, 104, 17, 101, 19, -100, -53, -74, -32, -26, -75, -128, -68, -121, -23, 75, -45, -9, 98, 48, 49, 8, -59, -5, -44, 79, 83, 33, 70, 69, 109, 63, 40, 23, 14, 70, -89, -49, 86, 7, -103, -23, -49, 49, 113, -12, 61, -79, -82, -60, 57, -126, 2, 100, 102, -21, 36, -20, 121, 23, 100, -3, 94, 6, 123, 62, -23, -108, 79, 32, -28, 21, 70, 12, 1, 65, 31, 60, 82, 9, 54, -86, -16, 51, -62, -29, 116, -33, 86, 109, 36, 105, -102, 4, 27, 51, -53, 76, 114, 29, 68, -88, 87, -119, -16, 2, -14, 83, 126, -30, -28, 110, -55, 35, -49, -38, -89, -10, -60, -69, -79, -83, -26, -96, 113, 125, -22, -40, 33, 124, -125, 120, 84, 25, 2, 20, 92, -79, -86, 73, -38, 81, -80, 23, 124, 89, 95, -122, 22, 113, 95, 70, 84, 21, 79, -127, 33, 80, 98, 28, -79, 93, -128, -126, 123, 70, 124, -78, 35, 66, -28, -48, 64, -23, 95, 87, 90, 111};
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
    msg.setTimeStamp(0.24798686379633295);
    msg.setSource(43024U);
    msg.setSourceEntity(123U);
    msg.setDestination(20664U);
    msg.setDestinationEntity(28U);
    msg.req_id = 19794U;
    msg.ttl = 22222U;
    msg.destination.assign("KTJCWYKSCKROQFXHLAZLQJEKRVCAALEUMZHFDNSYZZIWOHRJIKBFEOYWDSHZVXEYTBAHTBUDPAFXUPYZLTTFPOCYJGEWLQSLAJPULRVEVHMRCGSQXGXHSMPQHWCJFVMGFNXURNOMI");
    const signed char tmp_msg_0[] = {43, -58, 51, -62, 72, -124, -83, 99, 122, -2, -75, 5, 25, 80, 9, -35, -60, 36, -41, -92, -93, 24, -119, 36, -127, 119, -26, 116, 93, 65, -31, -74, -106, -10, 23, -102, -53, -17, 1, -120, -74, 94, 73, -81, 110, 98, 23, 64, -5, 114, 76, 57, -62, -21, -22, -94, 42, -7, -115, 58, -43, 6, -80, -93, 104, -48, 91, 124, 45, -88, 39, -62, 25, 73, 47, -77, 14, -54, -18, -43, 20, -102, 19, -121, -5, 84, -1, -96, -27, 113, 101, 84, 124, -94, 102, -66, -110, 108, -13, 19, 7, -19, 38, 104, 93, -30, 113, 107, -113, 75, -46, 96, 32, -111, 57, 62, -104, 113, -47, 62, 29, 14, 39, -14, -108, 71, 82, 3, 105, 121, -42, 42, -99, 46, -86, 10, -121, -53, 19, 39, 100, 33, -102, 84, 17, -40, -112, 107, -19, 63, 69, 79, 45, -125, 90, 118, -74, -25, -61};
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
    msg.setTimeStamp(0.0359447925165689);
    msg.setSource(7521U);
    msg.setSourceEntity(182U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(240U);
    msg.req_id = 64201U;
    msg.ttl = 3475U;
    msg.destination.assign("JHHEWGIGVDQ");
    const signed char tmp_msg_0[] = {-90, 122, 27, 112, -87, -103, 4, 89, -110, 45, 21, 124, -108, 2, -10, 82, 59, -29, -20, -60, -59, -5, -119, 49, -42, -123, 38, 46, 104, -46, -127, -94, 93, 69, 15, -111, -92, 65, -36, 93, -67, -16, 53, 122, 87, 32, 104, 19, 100, -85, -52, -73, -85, 28, -91, 45, -44, 62, 24, 7, 22, -104, -82, -113, 118, 43, 91, -53, -3, -36, 53, 6, -3, -56, -58, -122, -69, -9, -38, 28, -58, -102, 115, 86, -73, -105, 92, 31, -108, -33, -33, -50, -24, 37, 121, -48, -1, 43, 22, -32, -110, 23, 57, -51, 47, -125, 36, -46, 14, -50, 110, -89, -46, 26, 61, 83, 80, -12, -120, 3, -8, -23, -55, 14, -87, 108, 38, -123, 121, -93, 74, 30, 118, -32, -8, -41, 15, -48, 86, -67, 122, 87, -104, 100, -67, -31, -14, 74, -87, -54, -76, 51, -119, -28};
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
    msg.setTimeStamp(0.2090199480862034);
    msg.setSource(52886U);
    msg.setSourceEntity(194U);
    msg.setDestination(22551U);
    msg.setDestinationEntity(157U);
    msg.req_id = 27502U;
    msg.status = 107U;
    msg.text.assign("QLRYERVPYKRNBDGNZDXONCMEEPOKAJLIDIAFANTTTRPUWSNLHSXFUSGKXDH");

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
    msg.setTimeStamp(0.3918402518504519);
    msg.setSource(20686U);
    msg.setSourceEntity(216U);
    msg.setDestination(64162U);
    msg.setDestinationEntity(20U);
    msg.req_id = 37873U;
    msg.status = 124U;
    msg.text.assign("ILHOYIPHQPMYNMUDCOUNDVESIGHBNHTPRKRYRENNZQALBWRBVTMAEAVVOUWTAJAZRLXREKRPOUZLSHWWPTSYFOFEOCJYKVEQJLOCPGDJXNSKTQMAITTVIVTXENMJBILUFRSTAUDNYWKLCN");

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
    msg.setTimeStamp(0.45686232253398884);
    msg.setSource(57301U);
    msg.setSourceEntity(216U);
    msg.setDestination(56051U);
    msg.setDestinationEntity(225U);
    msg.req_id = 39780U;
    msg.status = 34U;
    msg.text.assign("OCVEFOSBOLVMQSHZLJYWBUYUHXMDOTHZFWNQNEBBDJLKMFMEHUXQFGQSPZHPYOIHPSLCORZHRGWGVFKXAXRRVEOWTCKZBYYCIFBWGDCNQJBFWYUXATLEWMTDDVQCOJZABZXUUAAPGZGILJAGUJIEGSIAQNCMDMKVTLPTVQVRIEOSDVGTWMPQRKAPFTDFTJISHOYQX");

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
    msg.setTimeStamp(0.8716508502592476);
    msg.setSource(54778U);
    msg.setSourceEntity(150U);
    msg.setDestination(42193U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("JJUELYVEBDFSBCTXDVSXYHTUXAHSYGJYLTFDPKSXDRWRGVMPEOTOPQOUORRMHZDPFKAKLRURDIOXWWNEPWQBZMMGLEPJOUTFALUHEEFXDIPNOCMGIVBJVHKRTCSQYTGZBONIRECZVNIXASWBIOFVHPFQKHHAPKKFMYJPCNSTMNYQWUHAMCSUKKWLZLVDKBTWAJAJN");
    msg.links = 3051945911U;

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
    msg.setTimeStamp(0.5504659886310322);
    msg.setSource(41945U);
    msg.setSourceEntity(37U);
    msg.setDestination(53803U);
    msg.setDestinationEntity(18U);
    msg.group_name.assign("BHCKQCACGJZUZWWREWVISKFXDLEOFVVPGZYZNXKXELYOPWMNORSMSJJKDIUEAPYKRRYBPNWRBFIWMDHNUXARUKWQUBZCSDSTFQELOGOAXYLUFTILYTBHOBYSSGYBRTJIPGDOTKHPHMOPNCGKRTGDEFGXVDL");
    msg.links = 2653597794U;

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
    msg.setTimeStamp(0.10929339081094436);
    msg.setSource(3173U);
    msg.setSourceEntity(185U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("CXAWWUQYTSFJAYFRQDEBULOXKEPMQIQRMHSSVPJNRIFRAAMCDHCHZYRTKCLIAICGQVSJUGWOYHIXLLSCCSMNEBOJZPGTUEEPMEWWXYTNTSRLSJYOAFCBQAUAARBGCMFJBSDHTRAHEOOLJZUUGIDWGQOWTZWYRGCFBBYYKNVVDBXDEVT");
    msg.links = 3106091067U;

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
    msg.setTimeStamp(0.24923623245089577);
    msg.setSource(12810U);
    msg.setSourceEntity(180U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(207U);
    msg.groupname.assign("XZNUARVUEUNHUSAAMECTVNCFJKNHJCQPMCDLEDSRTCEQXZRKAYNFOKSKOTGSUOXMDDGLWTWCESYWLHGJDNMIZVIBHXAIQGDNVKNCQSCYEYNCBXLOTEBJMTWGYSNPYJGBHUHZAWZUOPPLEATVWSTWXGMHIIBZUFLACHIDMXZRZPUGFJLQLRWBRHZOQIRRBVRPQOMPISKDGQUVQKFYFBPPXJMRZODYFIFDYKJKIJVSFFGHQPWMAXOBJ");
    msg.action = 118U;
    msg.grouplist.assign("NJTVEJQHAPMCQQEKC");

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
    msg.setTimeStamp(0.31044370023144385);
    msg.setSource(34418U);
    msg.setSourceEntity(186U);
    msg.setDestination(49042U);
    msg.setDestinationEntity(118U);
    msg.groupname.assign("IHYTKELZLELAGEFDVNBSWVGMYYQDLUIVUXCYZPKVMQPPTZKDPOOTSJNUJSBHWBAVUGQEPRNECLTLRJJKGLBACZKCTTKOFKTAUTMWBXRXNWPBVNCXIBBUAAADYSCGGFJHRCXHZQ");
    msg.action = 193U;
    msg.grouplist.assign("SZPBWQPFXFWS");

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
    msg.setTimeStamp(0.009233237395464444);
    msg.setSource(8993U);
    msg.setSourceEntity(74U);
    msg.setDestination(6909U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("PQHQRNKOBOMLVTINHCKHDXRNLPNXOJPAWZOCDVUQDKHFKCAGNDHREBIWVHLLZNRNKEZPHYADEBZUJLCNFOZDVPQPAKMXRYIVDMIUTXCVTOQSCMBAQCPKFMVOJEWLBXFMCZYSLOTEYLKWJSJVRLJPOPSWTGVYHJGGYYRIRQSNJBAUUGSQRDMEIEAYYZBXFCDHTTWFJANXUQSWUEXZUFWUKUHYIGXVGJIWTGXWGS");
    msg.action = 4U;
    msg.grouplist.assign("LGADEZWQWYQOPJCRMBEIWOUQNBFMZAR");

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
    msg.setTimeStamp(0.31652796825946705);
    msg.setSource(743U);
    msg.setSourceEntity(18U);
    msg.setDestination(44840U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6334031056009419;
    msg.sys_src = 35755U;

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
    msg.setTimeStamp(0.28018798066500006);
    msg.setSource(19401U);
    msg.setSourceEntity(48U);
    msg.setDestination(33702U);
    msg.setDestinationEntity(7U);
    msg.value = 0.27896496391093506;
    msg.sys_src = 14661U;

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
    msg.setTimeStamp(0.3732724732579148);
    msg.setSource(39813U);
    msg.setSourceEntity(175U);
    msg.setDestination(17176U);
    msg.setDestinationEntity(252U);
    msg.value = 0.17972901584434575;
    msg.sys_src = 36840U;

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
    msg.setTimeStamp(0.16550977191555616);
    msg.setSource(9836U);
    msg.setSourceEntity(230U);
    msg.setDestination(25102U);
    msg.setDestinationEntity(123U);
    msg.value = 0.7698202591918457;
    msg.units = 39U;

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
    msg.setTimeStamp(0.051791753627923987);
    msg.setSource(22095U);
    msg.setSourceEntity(44U);
    msg.setDestination(10856U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6122084879489939;
    msg.units = 175U;

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
    msg.setTimeStamp(0.8518860776119997);
    msg.setSource(10070U);
    msg.setSourceEntity(0U);
    msg.setDestination(9984U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8722456887942215;
    msg.units = 23U;

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
    msg.setTimeStamp(0.693117506280498);
    msg.setSource(14288U);
    msg.setSourceEntity(78U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(104U);
    msg.base_lat = 0.20332581225598712;
    msg.base_lon = 0.48068680870428593;
    msg.base_time = 0.21369170200348941;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 58738U;
    tmp_msg_0.destination = 48144U;
    tmp_msg_0.timeout = 0.07174510329922779;
    IMC::SimAcousticMessage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8627077209770033;
    tmp_tmp_msg_0_0.lon = 0.07416301106586198;
    tmp_tmp_msg_0_0.depth = 0.648248465913064;
    tmp_tmp_msg_0_0.sentence.assign("CAMIKXSBGFAOJUHDUEYWCNSJXZVUDXNNPXHULBDIRGDDSJAHNJZVDNILQQQY");
    tmp_tmp_msg_0_0.txtime = 0.10829813700228619;
    tmp_tmp_msg_0_0.modem_type.assign("VYPSZPRYGPYMA");
    tmp_tmp_msg_0_0.sys_src.assign("YTTUXSJLLITVCWCJMNSKZSNOFWXEDIEVWYCSKVTSEKYZZDBRDAQCJLHDNUJSHWTANUOEUIPQCZXEZRFWRQBSYBXYTOMOQFAEJMBHGGJBIXBRCGVOPAXFPZCWQTZMMLTAEOLNPOHYPHRRDNIFFQLSBJMJWVGABZASLUTWTVMDLOVKMPGAIRRQONIXIXGWGVEQXIJPYGZFHMMIZHUUJPNNXDKGALKCHEYFDSLPHAWBGNFRYKEHYC");
    tmp_tmp_msg_0_0.seq = 26515U;
    tmp_tmp_msg_0_0.sys_dst.assign("QAIASJYWIGUPPERXPKZTCSILGHMSMGIXHKPJEIBBWEXJBVIWERHAZVFSEZEPHOYCFMBSCGHFLYPDCOXVGKFTWMWBFGREYHMGLZRSQMFTRKDOIBKMPIRHDQFAUYCUVLDYCQG");
    tmp_tmp_msg_0_0.flags = 79U;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-30, -116, -122, 36, -51, -86, 121, -56, 87, -6, -21, 15, -17, 36, -87, 5, 104, -106, 70, -87, -20, -85, 25, -66, -125, -123, 118, -100, 3, -99, 10, -57, 93, -105, 113, 109, -21, 13, 115, 28, -77, 67, 7, 2, -31, -125, 43, -69, -100, -49, 87, -31, -96, -85, 91, -12, -13, -43, -56, -1, -18, -120, -66, -47, -41, -9, 19, 71, -24, -26, -114, 89, -16, 119, 30, -96, 98, -57, -92, 64, 44, -88, 71, -123, -43, -104, 100, 53, -87, -65, -5, -34, 111, -93, -64, -55, 75, -91, 71, -104, -45, 102, -117, -117, -24, -1, 85, 104, -85, 89, 126, -71, -78, 37, -73, -88, 74, 119, 10, -108, 18, 122, 19, 6, 33, 79, 81, 57, 50, 58, -70, -105, 67, -12, 89, -49, 52, 112, 39, 116, -96, 126, 118, -8, -31, 46, -92, -95, 59, -113, -5, 33, 91, -30, -1, -57, 24, 106, 37, 103, -110, -24, 31, 17, -49, -62, -20};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.1180426056345989);
    msg.setSource(49046U);
    msg.setSourceEntity(250U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(204U);
    msg.base_lat = 0.8373132990761414;
    msg.base_lon = 0.35684289728411367;
    msg.base_time = 0.6993881697734973;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 14406U;
    tmp_msg_0.destination = 60893U;
    tmp_msg_0.timeout = 0.7742626911114727;
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("IZBIUTUNTTCAIHRDQXQRKPPVEWCYBUDJBGEWAFPNIBJAUTZOITMKTDOSCIMIFPQVVGVSABYYCUYFOBNENWRMPJM");
    tmp_tmp_msg_0_0.formation_name.assign("DGPBVZWNADCNZWIHRAIGTGOOCXXPBTEJIQPQUDUHWNJBMWQHYSKWJXFETPRQRVEKKFVHWIFBFYAIYOQDTSCVMEREFWBFGKFNOJJYAMNZZUGSHYVZLUMSKALRTPF");
    tmp_tmp_msg_0_0.plan_id.assign("EYQJRNQLUEXUVZJTABSBBMFSYIRIYQLTJGWJIGZMWEAPWGCVEULKLSTATHRUXPWBSPDDQAOWGFEMCJDAIDORSNSRCSCMMKB");
    tmp_tmp_msg_0_0.description.assign("JTQVQZSGUQFSTOCIHCJRPYYGDUHFAALIMRDNVDJODWEVXDVQFKEGHYGELSRCHUKYOOIYDQHGPBEGBAHUKPGDNDWKWKLHJVXFUWWZMLEJGMAQVCIZMTZBBOVNLEBXQJVBZZOYZCRESRANCUULJMWWEHWIBXVBMFLSCXFCTCGRLEJXYPLUTOSRZFSPMITANAIBPJQVIKJFRHNNZTKFTEPQNTLAXHSYBRSKIPMAY");
    tmp_tmp_msg_0_0.leader_speed = 0.7910184547303536;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.04866711449304861;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.32445374062010834;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.16051812691402878;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 15728U;
    tmp_tmp_msg_0_0.converg_max = 0.9305819106116865;
    tmp_tmp_msg_0_0.converg_timeout = 14768U;
    tmp_tmp_msg_0_0.comms_timeout = 30750U;
    tmp_tmp_msg_0_0.turb_lim = 0.6601817992758683;
    tmp_tmp_msg_0_0.custom.assign("NQSYMRNBIIYRWKNOIEIUAGWQLKQVXATNLNUOJHQDSXZDSFLLNFUVDBPBEUCJIMPGXEMJXDSRACVYZIMHQSHLTZYOTAWCYUEFOLFTIXPCEMEEXMZKANZEXFVXLIQPUVC");
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
    msg.setTimeStamp(0.08534674607459525);
    msg.setSource(31985U);
    msg.setSourceEntity(58U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(50U);
    msg.base_lat = 0.5890935217178834;
    msg.base_lon = 0.06121436513019807;
    msg.base_time = 0.005303935867390863;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 42445U;
    tmp_msg_0.destination = 1593U;
    tmp_msg_0.timeout = 0.8793907815185311;
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("JJNFGSHNTCWPLYATJIYIGWBTRNUCTYLFXNHYXJGYPWGOBMQKJACQUVUWSGOYHMGQKOSHNEIFSVEDEZTLMXNLTODUFLQXPVKNYUQCDDDRRFREFARVHWAZOFWEEPZQADYPBVKQJKLISNFAGJLZSGHPMWPMQNXRCLICTARFDBRYKIZQOTIKBVZMOMJEWIDCWTRZHAFXYSTKWEVOBSDCUOLEEHBUKGJB");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9032617817864992);
    msg.setSource(19303U);
    msg.setSourceEntity(86U);
    msg.setDestination(4176U);
    msg.setDestinationEntity(143U);
    msg.base_lat = 0.21436848380083517;
    msg.base_lon = 0.06997653502988632;
    msg.base_time = 0.4995251688783353;
    const signed char tmp_msg_0[] = {-121, 28, 111, -97, 79, 52, 29, -108, -61, -103, 16, 56, -44, -119, -69, 88, -6, -104, -43, 126, -109, -51, -21, 125, -119, 38, 29, 109, 9, 5, -113, -14, 125, -42, -115, -122, 105, 70, -21, 1, 69, -15, -77, 94, -22, 82, -31, -96, -27, -16, 107, 19, 68, -18, 11, 40, -100, -2, 70, -108, -5, -37, -72, -123, -39, -6, 68, 80, -76, 93, 59, -76, 16, 60, 8, 119, 58, -8, 5, 87, -45, -8, -48, 87, 112, 125, -64, 121, -21, 89, 100, 99, 59, 53, 79, -55, 95, -82, 88, -70, -69, -119, 59, -27, -14, -41, -116, 126, 23, 71, -45, -14, -89, 102, 124, -52, -74, -68, 33, -49, 47, -128, 121, -77, -63, 68, 60, 33, 77, 105, -40, -83, -35, -94, 2, 33, 19, -53, 66, -74, 27, 59, -44, -42, -25, 117, 15, 93, 65, -64, 54, -116, 105, -75, 109, 105, 28, 80, 9, 100, 41, 85, -60, 104, 3, 35, -100, -105, -100, 117, 70, -13, -77, 76, -104, 40, 74, 77, -42, -82, -16, 1, -104, 79, -124, -92, 95, -7, 58, -19, -78, -37, -79, -104, 122, -38, -29, -9, 16, -113, -4, -24, 100, 12, -121, -90, 5, -68, -101, -47, -41, 108, 10, -6, 52, 58, -19, 82, 126, 7, 0, -18, -4, -20, 112, 8, -107, 119, 123, -91, -78, -47, -38, -123, 111, 115, -96, 96, -26, -13, 79, 85, -44, 19, -85, 56, -19, 44};
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
    msg.setTimeStamp(0.8561396527276202);
    msg.setSource(52654U);
    msg.setSourceEntity(41U);
    msg.setDestination(33054U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.46973834737750264;
    msg.base_lon = 0.6328868933649542;
    msg.base_time = 0.8771750515290835;
    const signed char tmp_msg_0[] = {-76, -72, 7, -106, -87, -90, 115, 2, 15, 58, -120, 35, -119, -84, 0, -39, 12, -118, -123, -98, 62, 110, -76, 68, 6, -79, 4, 24, -127, 112, -100, -8, -68, 55, -112, 126, -66, 56, 125, 84, 0, 80, -47, 5, 69, -38, -32, -80, -22, -94, -14, -60, 44, 76, 60, -65, 83, -110, 16, -25, 119, -31, 12, 91, -50, -68, 14, 100, 111, 11, 85, -22, 99, -64, 31, 73, -31, -46, 112, 76, -55, 22, 27, -65, 28, 15, 83, 63, -76, 11, 13, -101, 102, 14, 0, -70, -49, -102, -117, -29, 114, 0, 56, 112, -67, 71, -123, 84, -2, -45, 49, -123, -6, -11, 113, 12, -26, 3, -49, -101, 24, -19, 9, 97, 62, -17, 72, 21, -96, 99, -2, 22, -30, -15, -6, -36, 97, -94, -61, -20, 63, -53, 106, 28, 32, -31, 93, -110, 53, -51, 64, 94, 123, 80, -42, 90, 48, 32, 43, 34, 3, -128, -43, -73, -96, 22, 82, 59, -77, -17, -60, -28, 95, 124, -80, -89, 2, -21, -93, -41, -19, -121, 42, 77, 87, 9, -39, 126, 99, 39, 4, 86, 12};
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
    msg.setTimeStamp(0.8667848626241184);
    msg.setSource(28495U);
    msg.setSourceEntity(246U);
    msg.setDestination(49555U);
    msg.setDestinationEntity(56U);
    msg.base_lat = 0.060558302399203456;
    msg.base_lon = 0.12392030835378953;
    msg.base_time = 0.6407626522659825;
    const signed char tmp_msg_0[] = {12, 46, 98, -2, 99, -83, -110, -59, -65, 20, 38, -47, 35, -42, -123, -31, -106, 3, -23, 51, 105, -15, -51, -92, -88, -29, 114, -74, -48, -107, -119, -2, 86, -70, -28, 67, -113, 117, 121, 107, -61, 75, -126, 69, 79, -90, -89, -54, -81, -43, -8, 114, 103, 24, 66, 123, 7, -119, 103, -52, -56, -93, 8, 16, -103, -5, 11, -90, 108, 98, -71, -2, -8, 67, 7, -9, 75, 9, -87, -43, -70, 77, -122};
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
    msg.setTimeStamp(0.35337795075994827);
    msg.setSource(38785U);
    msg.setSourceEntity(229U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(69U);
    msg.sys_id = 32097U;
    msg.priority = -21;
    msg.x = 10301;
    msg.y = -13289;
    msg.z = -29203;
    msg.t = -4029;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.19953959546925015;
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
    msg.setTimeStamp(0.8265543694061418);
    msg.setSource(48330U);
    msg.setSourceEntity(27U);
    msg.setDestination(38929U);
    msg.setDestinationEntity(68U);
    msg.sys_id = 54981U;
    msg.priority = -123;
    msg.x = 1798;
    msg.y = -32121;
    msg.z = 16676;
    msg.t = -18727;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3610366975458784;
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
    msg.setTimeStamp(0.6092702426942298);
    msg.setSource(24626U);
    msg.setSourceEntity(222U);
    msg.setDestination(18218U);
    msg.setDestinationEntity(52U);
    msg.sys_id = 61834U;
    msg.priority = 13;
    msg.x = 26194;
    msg.y = 21411;
    msg.z = -32373;
    msg.t = 14241;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 81U;
    tmp_msg_0.flags = 131U;
    tmp_msg_0.description.assign("DZMVVEKASUXGVZVNNWAU");
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
    msg.setTimeStamp(0.251866748915201);
    msg.setSource(43710U);
    msg.setSourceEntity(3U);
    msg.setDestination(63811U);
    msg.setDestinationEntity(211U);
    msg.req_id = 53525U;
    msg.type = 74U;
    msg.max_size = 22106U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.12370201198912045;
    tmp_msg_0.base_lon = 0.7326183041530473;
    tmp_msg_0.base_time = 0.5694717325123225;
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
    msg.setTimeStamp(0.24271888166027333);
    msg.setSource(2078U);
    msg.setSourceEntity(79U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(22U);
    msg.req_id = 50230U;
    msg.type = 84U;
    msg.max_size = 57951U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.15880473447158794;
    tmp_msg_0.base_lon = 0.5948118436197996;
    tmp_msg_0.base_time = 0.43784938787556926;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 54770U;
    tmp_tmp_msg_0_0.destination = 32934U;
    tmp_tmp_msg_0_0.timeout = 0.9723893440223724;
    IMC::VSWR tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.32433392903018654;
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
    msg.setTimeStamp(0.39533647793423077);
    msg.setSource(57416U);
    msg.setSourceEntity(36U);
    msg.setDestination(9414U);
    msg.setDestinationEntity(224U);
    msg.req_id = 36107U;
    msg.type = 74U;
    msg.max_size = 20201U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.11552304153401671;
    tmp_msg_0.base_lon = 0.41213195426756044;
    tmp_msg_0.base_time = 0.31446539662141904;
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
    msg.setTimeStamp(0.5350391374250847);
    msg.setSource(12722U);
    msg.setSourceEntity(83U);
    msg.setDestination(17780U);
    msg.setDestinationEntity(236U);
    msg.original_source = 46149U;
    msg.destination = 3273U;
    msg.timeout = 0.8754243123088207;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 41165U;
    tmp_msg_0.value = 10U;
    tmp_msg_0.error.assign("UWEMYVRILOYVXPIFGLNWCMGGGMBFZOXSNJUDJFHAYXECTUKONVETRCTOWKZDHHFIPUSWNKOKAAHTSPVMBSIXFSUIAYQZHWZAEWVEQCCKVV");
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
    msg.setTimeStamp(0.9470943410020145);
    msg.setSource(22719U);
    msg.setSourceEntity(82U);
    msg.setDestination(54238U);
    msg.setDestinationEntity(27U);
    msg.original_source = 39411U;
    msg.destination = 22193U;
    msg.timeout = 0.8744859271294301;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.4102062140841163;
    tmp_msg_0.lat = 0.3758423185520223;
    tmp_msg_0.lon = 0.5358868212617037;
    tmp_msg_0.z = 0.24512460889603171;
    tmp_msg_0.z_units = 171U;
    tmp_msg_0.travel_z = 0.0825999375786245;
    tmp_msg_0.travel_z_units = 6U;
    tmp_msg_0.delayed = 57U;
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
    msg.setTimeStamp(0.47063935264529166);
    msg.setSource(30506U);
    msg.setSourceEntity(126U);
    msg.setDestination(1280U);
    msg.setDestinationEntity(20U);
    msg.original_source = 2581U;
    msg.destination = 25693U;
    msg.timeout = 0.9526794428742686;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 139U;
    tmp_msg_0.zoom = 63U;
    tmp_msg_0.action = 69U;
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
    msg.setTimeStamp(0.8754721953433572);
    msg.setSource(40027U);
    msg.setSourceEntity(91U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(208U);
    msg.type = 109U;
    msg.comm_interface = 39580U;
    msg.model = 15695U;
    msg.list.assign("ZYLITOFCMCZXRCYVTJMGCCMNDIGUKFXNJQMOTMJQAQRMFBLGAUJNPGOWRNZUDNXBKYLILIKTUFCVDZFWDHJPEPUWEHESDOVWRSVXFSHPQBHTJUCMOATBMVWLXXRAZNKYJZSUDSHRQGOJBSDRIXTV");

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
    msg.setTimeStamp(0.8231520209845757);
    msg.setSource(50996U);
    msg.setSourceEntity(151U);
    msg.setDestination(28595U);
    msg.setDestinationEntity(243U);
    msg.type = 46U;
    msg.comm_interface = 36043U;
    msg.model = 29138U;
    msg.list.assign("OLPDFSYFWBLLCAHQQKRHMKNMBVVBNWEBXOJFRXLVZDNGGCUHTXKRKQEGZMEZIGTPGCCPQ");

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
    msg.setTimeStamp(0.4601235002069566);
    msg.setSource(36481U);
    msg.setSourceEntity(249U);
    msg.setDestination(6653U);
    msg.setDestinationEntity(218U);
    msg.type = 176U;
    msg.comm_interface = 42389U;
    msg.model = 56647U;
    msg.list.assign("IXNZTJNQEZURRHRKBXVJ");

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
    msg.setTimeStamp(0.7264519454314207);
    msg.setSource(26875U);
    msg.setSourceEntity(225U);
    msg.setDestination(41121U);
    msg.setDestinationEntity(135U);
    msg.type = 221U;
    msg.req_id = 1589546655U;
    msg.ttl = 30969U;
    msg.code = 176U;
    msg.destination.assign("WLSNDITOWKBTDEATXHEYWVLGWPOWMSZVCVELDDYFHEDONKCKPVTBWKFJZQKFA");
    msg.source.assign("JTOFCWZVHDFMKHUXQYZTK");
    msg.acknowledge = 230U;
    msg.status = 173U;
    const signed char tmp_msg_0[] = {42, -19, 122, 81, -119, -12, -94, -87, -124, -46, -90, -81, 57, 18, -1, -124, 77, -49, 27, 40, -24, -95, -65, 111, 49, 40, -88};
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
    msg.setTimeStamp(0.8377223246102813);
    msg.setSource(993U);
    msg.setSourceEntity(224U);
    msg.setDestination(15067U);
    msg.setDestinationEntity(158U);
    msg.type = 157U;
    msg.req_id = 628068058U;
    msg.ttl = 16639U;
    msg.code = 66U;
    msg.destination.assign("SUVSPYOJNWFARUMPNNEFSXZJJOZISRZYEBFMKBXLEEQQLYGOGWQFSVWIKHYZZTSCHULPQKYDVRPLKYJJNRLZMVIUXBXFMAHKZGJRHCBKBVRXRYTJVWCKHNOGYCPOTMEDUDOTQSWIARJAJGBOLANPENBGTAFCFMFITRCWHFAJUEBKGLASCUDRSMHIIWIXXQNTXOYMTTHIPE");
    msg.source.assign("QZMPRPZXFEYMSQJWVLAILNTZBMAHVJJRKKWKGSTNVEWEZCYEJBURUSFUDICNUJPTEGXORCEDFOSDXEMMXHOZBSBJTWHGPQVIYIMLFQAZDVZWLTWQHOEIWXAQJCVYVIXYWXUYOYRTOIDLSHVZCNWXBLUKKTPRZ");
    msg.acknowledge = 240U;
    msg.status = 119U;
    const signed char tmp_msg_0[] = {-68, 83, 43, -79, 56, -76, 18, 29, -4, 101, -52, -78, -111, 37, 89, -41, -94, 0, -77, 110, 84, 59, 78, 125, -119, -39, 124, 65, 7, 49, 22, 99, 83, -110, -84, 33, 43, 97, 33, -125, -6, 16, -73, -19, 34, 96, 119, 123, 106, -87, 120, -85, 81, 72, 44, -127, 16, -46, 45, -24, -96, 81, 111, 31, 123, -9, 109, 52, 97, 83, -72, 58, 120, 38, -105, -111, -126, -52, -104, 41, 4, -121, -96, 19, 101, -56, -59, 11, 105, -14, 45, -24, 60, -44, -96, -23, -80, -73, 125, -49, 89, 43, -31, -81, -77, -72, -57, 74, -126, 13, 18, 51, -58, 56, -122, 51, -110, -113, 14, 54, 76};
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
    msg.setTimeStamp(0.7562221963649668);
    msg.setSource(23455U);
    msg.setSourceEntity(87U);
    msg.setDestination(25136U);
    msg.setDestinationEntity(117U);
    msg.type = 239U;
    msg.req_id = 2455598834U;
    msg.ttl = 48721U;
    msg.code = 10U;
    msg.destination.assign("BEJJJCEMQIRSPZYJISWMRZSHEOBYMDASTUWMIRKTYRPLUOBDFGYLGNSODVLXHIMOQNOYFMUCANQZDMEIPKUVSQJWGAUQGSWLJZEWNABECXXADCGXCDRBPSZRBCQQTVWIXVVKZLIOFACVALJWKCKXTVCFVTBQKNXOHYVTTPHGPKHYSCBARGIWGPUEIHKMONFDDZFQTUKWGHANRTPRWEZTLIOJYPDF");
    msg.source.assign("VIZEQCQOLHUSRZCBCXRFTWWTBNDAXZXMGDEKNTSTQDQRIQLLCSADNBREZMWCJNLBYJREHTTLMFBTPWSXZJOVUDLXVMICHWZFZRWDGFPPGAASLJTUKUTLSZCJBAFBYJOGKYHAEINJNKCYOPEVEVMSL");
    msg.acknowledge = 33U;
    msg.status = 15U;
    const signed char tmp_msg_0[] = {81, -33, 93, 68, 70, -16, -62, 98, 57, -34, -101, -7, -53, -54, 49, -119, -79, -34, 5, -108, -126, -81, 38, 23, -25, 43, -120, 111, -22, -83, -75, 85, 126, 123, -89};
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
    msg.setTimeStamp(0.35312608632384557);
    msg.setSource(58661U);
    msg.setSourceEntity(130U);
    msg.setDestination(28229U);
    msg.setDestinationEntity(5U);
    msg.id = 86U;
    msg.range = 0.5252755910588108;

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
    msg.setTimeStamp(0.5697965657949996);
    msg.setSource(16930U);
    msg.setSourceEntity(105U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(217U);
    msg.id = 33U;
    msg.range = 0.818814828073915;

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
    msg.setTimeStamp(0.025362298758897617);
    msg.setSource(2480U);
    msg.setSourceEntity(202U);
    msg.setDestination(47970U);
    msg.setDestinationEntity(215U);
    msg.id = 237U;
    msg.range = 0.8053398645710576;

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
    msg.setTimeStamp(0.7204714327861177);
    msg.setSource(31677U);
    msg.setSourceEntity(194U);
    msg.setDestination(57004U);
    msg.setDestinationEntity(138U);
    msg.beacon.assign("MOEEFDAGGGWRCPKLCFBSGEOMPAZQUPOXXWXLSZKXINXAINCHLJPJPMZVCYZCWZOYAKRHFRLOCBIQUYVDJGHXFHQMLSNMXVUKDVDCNIATTZFPMBCBNHISUJVBROODKYFXOPUSQHVU");
    msg.lat = 0.5169482706299233;
    msg.lon = 0.44332693901589015;
    msg.depth = 0.45265397946927644;
    msg.query_channel = 223U;
    msg.reply_channel = 96U;
    msg.transponder_delay = 76U;

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
    msg.setTimeStamp(0.44711673596643386);
    msg.setSource(4597U);
    msg.setSourceEntity(228U);
    msg.setDestination(28457U);
    msg.setDestinationEntity(106U);
    msg.beacon.assign("JWQGHOIEPAVCDKSUTQYEZADABXEPUXYRIWOAGILPAEQDSKRUDTUBMWZTQVIBUTAHBRFKGGEWHWMPBWKXYLSXOVLICANYHMPXWKNZUCCTOZBOOJWHFIENPEVLNBXDSBFCSVSFFOYNF");
    msg.lat = 0.6564564984336737;
    msg.lon = 0.3749618256706255;
    msg.depth = 0.3929639247776555;
    msg.query_channel = 119U;
    msg.reply_channel = 120U;
    msg.transponder_delay = 56U;

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
    msg.setTimeStamp(0.7743102569947449);
    msg.setSource(27814U);
    msg.setSourceEntity(52U);
    msg.setDestination(60986U);
    msg.setDestinationEntity(59U);
    msg.beacon.assign("LEVYUJLGBWUHVIYCSBETBPYFGHNSDFETXDBTPQLHKDMGSKQOUSFUIGOZJGDZOOLHAZMEEFZYHLNWBFZYMBRIEQIJCZVMIJJZFUJSTVEXOTJNJLIUHYIZSPQOGZMMOVLNBCNQTCHFHQRWEKRASVNKOKHCXRGBCCWLUQXYUAXWAVXMVOPXAXAPKIPCKCFARDBTFURPGNYJSWNCWM");
    msg.lat = 0.6186139646646672;
    msg.lon = 0.9297595006262448;
    msg.depth = 0.0524018978466535;
    msg.query_channel = 132U;
    msg.reply_channel = 223U;
    msg.transponder_delay = 166U;

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
    msg.setTimeStamp(0.9238949801961225);
    msg.setSource(45178U);
    msg.setSourceEntity(33U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(28U);
    msg.op = 230U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SWGVMDLDMNVPOGJXAZWESXDLHNZYLGSTGFCCUFHSVIAZXKBFJLERUPBGIINGCEUQIQCQWOVYZBVRGTBRROFSTVCNPJUPXTTNDWMDINHUOHMEDQATFZUEFYTPMCEOMINREIAWJSUJZAHPKGXDDIOPNVUXXNCBOHRXGLSCQAFBAZCKLWEYXTKIHAWVBKLUMQJJZYJLHWOHDEOMWXLRJQZSKPYCZPYKQOFQWQKKFFRHEVKADJYTBIT");
    tmp_msg_0.lat = 0.1085185722365547;
    tmp_msg_0.lon = 0.15293133277310356;
    tmp_msg_0.depth = 0.6163485939496748;
    tmp_msg_0.query_channel = 113U;
    tmp_msg_0.reply_channel = 123U;
    tmp_msg_0.transponder_delay = 225U;
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
    msg.setTimeStamp(0.5926944126123537);
    msg.setSource(50390U);
    msg.setSourceEntity(210U);
    msg.setDestination(46221U);
    msg.setDestinationEntity(113U);
    msg.op = 49U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("THJRPYEFQSYSPQNWOHLUETSWVIIOZNHSOWOWAHVKURVAXBLJKUKQCQMCOLPEBUJIXJGIGVHREUZKDDMFYBHARCQAUVODJCBFRPG");
    tmp_msg_0.lat = 0.5217192222578066;
    tmp_msg_0.lon = 0.3602970101775821;
    tmp_msg_0.depth = 0.35009031871875285;
    tmp_msg_0.query_channel = 36U;
    tmp_msg_0.reply_channel = 249U;
    tmp_msg_0.transponder_delay = 138U;
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
    msg.setTimeStamp(0.7370820628961516);
    msg.setSource(52468U);
    msg.setSourceEntity(228U);
    msg.setDestination(29903U);
    msg.setDestinationEntity(19U);
    msg.op = 136U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VHXHRDVRLOYZDUHXOZMAOWZQDEVIGTCLGGEWUOIFDMSOGRSBCLZANDELKKEGBNIRZKWPJZXAHGVQJFGAZCYDJKFCVWZRUYOSMBLJKAOBULYCAFSBTYQTCNSKVXMNDNISPVONJEYTBIALUIWMMRQWXURY");
    tmp_msg_0.lat = 0.15507163991813933;
    tmp_msg_0.lon = 0.7107601838971501;
    tmp_msg_0.depth = 0.6145967676860566;
    tmp_msg_0.query_channel = 246U;
    tmp_msg_0.reply_channel = 37U;
    tmp_msg_0.transponder_delay = 78U;
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
    msg.setTimeStamp(0.5618603278599152);
    msg.setSource(36833U);
    msg.setSourceEntity(52U);
    msg.setDestination(64175U);
    msg.setDestinationEntity(51U);
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 81U;
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
    msg.setTimeStamp(0.6168099967510224);
    msg.setSource(49223U);
    msg.setSourceEntity(149U);
    msg.setDestination(11541U);
    msg.setDestinationEntity(169U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 59U;
    tmp_msg_0.request_id = 2452U;
    tmp_msg_0.command = 73U;
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 38744U;
    tmp_tmp_msg_0_0.lat = 0.030637620538639387;
    tmp_tmp_msg_0_0.lon = 0.8206925477491923;
    tmp_tmp_msg_0_0.z = 0.850487701705225;
    tmp_tmp_msg_0_0.z_units = 145U;
    tmp_tmp_msg_0_0.speed = 0.5284398522945822;
    tmp_tmp_msg_0_0.speed_units = 63U;
    tmp_tmp_msg_0_0.bearing = 0.18091905498658578;
    tmp_tmp_msg_0_0.width = 0.8502237084247872;
    tmp_tmp_msg_0_0.direction = 20U;
    tmp_tmp_msg_0_0.custom.assign("PPBIXYQQXKZZWFTYTIVZEEXUCJYBDGRWAFQBBIFHTNZ");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 47186U;
    tmp_msg_0.info.assign("MKHVRQGSTZOVJKOKTXGRHMXAAKCVDMQJESBCXSIFCPPGRNSDDIEPGZPSFRHMIUNXBAYNDTALDCKDWKFEFOYBVDYCWMCNWUSLIVNHAFR");
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
    msg.setTimeStamp(0.9744923092863004);
    msg.setSource(47478U);
    msg.setSourceEntity(7U);
    msg.setDestination(7715U);
    msg.setDestinationEntity(241U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 28U;
    tmp_msg_0.entities.assign("HEKTNHRBEQFWKLOCYFQGKVAM");
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
    msg.setTimeStamp(0.4421770925930143);
    msg.setSource(59964U);
    msg.setSourceEntity(232U);
    msg.setDestination(50242U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.44520552360207144;
    msg.lon = 0.832688753993893;
    msg.depth = 0.28243830747187226;
    msg.sentence.assign("LEHTXGRNYRJKHWCCVDKBTHSAPKEBDQICVQLJHKHLPLIIKVFMMYSPWBXLIBHWZDUQAMDINPESEYXGXKCVFVTNSDMGIUXYWTLNGBMGXVZYAOFPGPNYFXNQSJRSCQOLFDOYFEZZRZUMEQAHWTVUYPGNIWORBADYBCUFCTJ");
    msg.txtime = 0.3590360530917649;
    msg.modem_type.assign("QWXNGAPKGQKVEJDBAONRGXXGGNZNXAQOMRWPUUTSZCRFYKARGOJJOHZAEQQPWVKIMRZFSPRFDOJYLIWEBZHFCIUFPTVTDBOOXGXLXHUJYFNLVZIKZYQQMKTCSDUUQKAGFFVLECLNBSIMJBHYWOZBTIKUSCRYE");
    msg.sys_src.assign("CNMBVVKCUMORZCIQBPOZHKDYMDUBFTLOQOEACPMXLUQQAPIJGPZBQZYIMZFEXLHDIPGWKWGWMEBZMZMABTDIHFBNQFEFHSTXGFPWDFFYQRBHZJAAJQGMNOYLAARXXIURKROVEOGHPHNQXNYWLUYJJAETKTIOLLUMLVIURGCDANWSCVVKSATCKIXXNYPTTDVUYSIYKVXRGWSWYH");
    msg.seq = 9838U;
    msg.sys_dst.assign("IFLQJLJJISRHGDJTQNOVBFXPWYBCRSSQGKICIVHMJQNVZJFKDOXWAFIMLZNEYAUDXDBMTTCBXIZALIAFMDVEZJSLPCPBLHIRFKNUQMFALROYGAZEZZLWLRGXDTCZHUTGLMJVMQXVIBAYUFOUNFGTEDGTWJ");
    msg.flags = 65U;
    const signed char tmp_msg_0[] = {32, -50, 5, 111, -16, -72, -26, -126, -30, 26, 17, 61, -33, 107, -78, -37, -52, -9, 99, 58, -61, 10, -22, -127, -121, 101, -118, -80, 73, 21, 52, -109, 13, 99, 80, 72, 37, -15, -108, 53, 67, 39, -96, 55, -56, 39, -109, -88, -54, 23, -50, -73, -47, 2, -92, 124, 38, 71, -64, 104, -106, 75, -112, 33, -124, -120, 28, 108, -37, 23, 78, -1, 46, -56, -106, -84, 85, 39, 61, -22, 72, 52, -89, 65, 47, 48, -19, -80, -78, -73, 93, -39, 85, -49, 8, 6, 35, 44, 121, -23, -29, -101, 118, 34, 15, -107, 112, 73, 20, -86, -78, 60, -14, 113, 22, -11, -58, 72, -91, 92, 42, 65, -121, -78, -13, -58, 67, -119, -38, 120, -114, 26, 96, -107, -2, 8, -35, -90, -13, -125, -16, -112, -40, 83, 75, 114, -72, -115, -86, 78, 7, -64, 47, 34, 114, 64, 58, -79, 123, 74, 93, -42, -1, 84, 121, 116, -123, -78, -93, 20, -44, 13, 98, -44};
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
    msg.setTimeStamp(0.5911514994289707);
    msg.setSource(46506U);
    msg.setSourceEntity(40U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.6025496288398999;
    msg.lon = 0.33158668098207067;
    msg.depth = 0.35366241663377185;
    msg.sentence.assign("VFOPXDQIUHQRMFAUNUKBSHLAAYHKYJHSNHBOWDGRYGTKUNMIFCQCJFDNQDNTBOLOHVDZLWOTTGSKTHGYCPOABUWIVEZGSYCQWCGSCJNRMCFKQEIBVIHXPHSBOZLLTMDATYYZUXRPEMNPFPXERBCDPERVXLXPJYTSLODIBZNWSXMILCRAPFPMNARLQKZCXVLWMADXGWNJEAFRZVBOQYGSEYHEIGWOZGKVZMSWJIFFJZQTBQUKEKKITUUXJVD");
    msg.txtime = 0.7203034726446834;
    msg.modem_type.assign("EQCNXIJXACDDUIQATHBNSGIIWFWAGSVGDZOJRHWDERTSWTXMNJZRABAMDSZNKHLMBMWQIJDESHSVKYYXCWXDGOUMEPZGKXBJBUKPHNMEFQKRUVZPFPKZYXYFVMPENBODHHIEVCNVUGTJBVRELMRFSUZEXYPOST");
    msg.sys_src.assign("JLTKNVVNUTVMGSHBNBITNFRCUKVOMZJSDNPWPEVXGTFWSQPHZMQWXHERAJOPUFNODCDLETASBHUWLOMWIZEXBDESSRRLXKFNIKDAWZYSJLYSKEAYDLQIEFYGUHOWHQOBBKWRCNOMUUKVIKLUQKOTCCFHVMRPZMRGNPZPEXTLIUBYEGQCFFZILYVFDYCVYCWZAZOSGZPJJCMTLGHRRQTHJQEXHYYIDQBAXJIAXVXOGQMRDJBAFKAMPADUS");
    msg.seq = 60071U;
    msg.sys_dst.assign("ZIEKICHGXUPTKUWQGJDNEBCKESLHGOLNOVKYPRCMUIZTMUWWTVMNBWCNZMQYOYMVZLXTZRVXJGOKDSAJOCGSPHLEQQZSEHKRHFODAPMEIPBEZNUCFTEPMJPCNQGNFHTDRXVKMTLALYFAULODPSVDM");
    msg.flags = 183U;
    const signed char tmp_msg_0[] = {-76, 63, 15, 124, 124, -37, -41, 34, -103, -49, -29, 54, -32, -114, -1, -70, 10, 82, 124, 6, -12, -10, -83, 70, 100, 103, 81, -10, 122, -114, 3, 115, 57, -9, 53, -43, 3, 99, -89, -104, -86, -59, 70, -43, -20, -19, -10, 61, -50, -92, 65, -126, -60, 5, -87, 75, 58, -103, -95, 44, 97, -4, -62, 32, 82, 44, 117, -89, -86, 121, -54, 5, -82, -104, -71, -12, 45, 30, -52, -78, 97, 92, -58, -2, 0, 57, -12, 100, -86, -109, 94, -91, -55, -81, -120, 5, -120, 1, 65, -41, 77, 20, 41, 4, -49, -17, -64, 42, -52, 122, 13, -49, 5, -28, 44, -23, 84, 125, -9, 106, -42, 31, -98, 34, -51, -74, 88, 9, 13, 22, -93, -81, -42, 83, -72, -71, -10, -96, -104, 65, -86, -22, 73, 0, -79, -62, 36, 5, -18, 47};
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
    msg.setTimeStamp(0.7205601810325104);
    msg.setSource(62644U);
    msg.setSourceEntity(127U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.4894245686894494;
    msg.lon = 0.5297705061265363;
    msg.depth = 0.7281679681556049;
    msg.sentence.assign("VKSGULPEKJXCSPYDSWTIGPALCVNEWUNATVXMBKRBFNHJLMMMIHJBQJUYITWAIDYOFDXHLJICWODXGDIURZVUJHEKZGDMGQRWFYPAVRHJKNEPENSYMOSUBBPSDDXQVPXEITNFKHOPZYUNGZXWRORFLNHECCPHTAKQYYHMZOFUKSCYBJZOHSZDVWNVZXOTGJQBSKCGJAEQGMMTEBUWAV");
    msg.txtime = 0.9551853108457917;
    msg.modem_type.assign("QMZSPAYMJEXUGBQOWEPBJPWJCDHMBUMHVMKSLFMWJHBCFELBZTNXNQWGGSJXZDUIMKUGVILDMLHNFPGFRRICOCICTNIZNCYRFLWZHDKUZAGSDAKPZJTVFEIBSBGESKO");
    msg.sys_src.assign("JCWIPIKKXDRC");
    msg.seq = 47963U;
    msg.sys_dst.assign("CJCKTAVQKHOSOACLDOWMIVWPGFZRGOKYJQYAOHSKYUAIZYFZZBPBFQEMWJVPTNLULTHWPRVINUEHDYKXRASBLPGIXEFQXNXNMDHSXALMVAGTHZNQMCHXCGEGMDCORORUFGAWCQBJSD");
    msg.flags = 240U;
    const signed char tmp_msg_0[] = {-93, -114, 60, 93, 122, 7, -40, 110, 1, -28, 51, -119, 21, -61, 30, -75, -77, -18, 22, -5, 4, -33, -18, 25, -26, -30, -96, -12, -26, 124, 117, -128, -21, 21, -22, 106, -20, -106, 55, -20, 13, 115, 38, 40, -64, -104, 31, -50, 86, -60, -100, -52, 19, 56, 52, -47, -64, -123, -23, -29, -114, -90, -7, -53, 6, 11, -90, 36, 72, 74, -38, -126, -23, -120, 98, -68, -91, 94, -9, 42, -85, 0, 10, -40, -36, 76, -4, -1, 81, -77, -128, 40, -110, 102, -21, 105, 113, 51, 28, 23, -111, 123, 79, -120, 49, -127, -89, -75, -41, -29, 34, -125, -120, -33, -51, -69, 104, -29, 103, -93};
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
    msg.setTimeStamp(0.3757323080312853);
    msg.setSource(50207U);
    msg.setSourceEntity(212U);
    msg.setDestination(26967U);
    msg.setDestinationEntity(40U);
    msg.op = 181U;
    msg.system.assign("QTUANLJONDNEBSSOSEKRVXIXXY");
    msg.range = 0.39656516973275713;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.3213850762719406;
    tmp_msg_0.ay_cmd = 0.8825120286088396;
    tmp_msg_0.az_cmd = 0.4139533540620045;
    tmp_msg_0.ax_des = 0.7868604200831719;
    tmp_msg_0.ay_des = 0.04547108911393527;
    tmp_msg_0.az_des = 0.18113280601945725;
    tmp_msg_0.virt_err_x = 0.22358910164260348;
    tmp_msg_0.virt_err_y = 0.927838158130388;
    tmp_msg_0.virt_err_z = 0.9630100447596014;
    tmp_msg_0.surf_fdbk_x = 0.43650096010313466;
    tmp_msg_0.surf_fdbk_y = 0.09747616040366236;
    tmp_msg_0.surf_fdbk_z = 0.9262985821552893;
    tmp_msg_0.surf_unkn_x = 0.4374598591089941;
    tmp_msg_0.surf_unkn_y = 0.7839508309607616;
    tmp_msg_0.surf_unkn_z = 0.8100812158436944;
    tmp_msg_0.ss_x = 0.1340614193520242;
    tmp_msg_0.ss_y = 0.7516974058274652;
    tmp_msg_0.ss_z = 0.9119229396166719;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("SKTNKFDYSXOLSIJSGTVUBVKRMQEODWQETKWUFGUPLGGGPJOGIOLZCUWNSMAHPLFVIYEYNJJTLXTAFRQOODBUQANBVPJNRCGLSADABVMKDJRQNWPFYLEVNOHYWTZKAGZSSNICJXQTUYWOKRBMLFC");
    tmp_tmp_msg_0_0.dist = 0.7881172003809466;
    tmp_tmp_msg_0_0.err = 0.8712687949756885;
    tmp_tmp_msg_0_0.ctrl_imp = 0.7395146881967705;
    tmp_tmp_msg_0_0.rel_dir_x = 0.4672675653444427;
    tmp_tmp_msg_0_0.rel_dir_y = 0.7714301253266551;
    tmp_tmp_msg_0_0.rel_dir_z = 0.7457785340268929;
    tmp_tmp_msg_0_0.err_x = 0.9518158400146957;
    tmp_tmp_msg_0_0.err_y = 0.5124916635840946;
    tmp_tmp_msg_0_0.err_z = 0.8728531131950904;
    tmp_tmp_msg_0_0.rf_err_x = 0.27521367056495327;
    tmp_tmp_msg_0_0.rf_err_y = 0.20991418846387777;
    tmp_tmp_msg_0_0.rf_err_z = 0.5123362805233874;
    tmp_tmp_msg_0_0.rf_err_vx = 0.16461521397419177;
    tmp_tmp_msg_0_0.rf_err_vy = 0.4981171033515618;
    tmp_tmp_msg_0_0.rf_err_vz = 0.5068218637027495;
    tmp_tmp_msg_0_0.ss_x = 0.6927792322111856;
    tmp_tmp_msg_0_0.ss_y = 0.27619799295642755;
    tmp_tmp_msg_0_0.ss_z = 0.5663414055593475;
    tmp_tmp_msg_0_0.virt_err_x = 0.5262850346112402;
    tmp_tmp_msg_0_0.virt_err_y = 0.7304534942950989;
    tmp_tmp_msg_0_0.virt_err_z = 0.667831188652293;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.534052373108844);
    msg.setSource(63846U);
    msg.setSourceEntity(90U);
    msg.setDestination(8413U);
    msg.setDestinationEntity(76U);
    msg.op = 73U;
    msg.system.assign("PGMKWONKYXIAVSZXCSBZKMZAXRCVKYABHMMBGHRZACIGYVKMWYNZIUJYQOVNTOLWATILVFFWPGNFJZSFGRCVBDQEOKPNXQMBQSUPIKSEOAGSUQDGQXBMVWXLAAZRJMXDQWKTHZEFCLSFQITNHDPEOUDEHJGAPCNLJLRMKDLZILWNEKEEEJUXZLGYUFUYPYJIOUHBTUETNOPRSRTLHVIVD");
    msg.range = 0.20280677698964777;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 3027384910U;
    tmp_msg_0.latitude = 0.49614709933893386;
    tmp_msg_0.longitude = 0.3750966399759811;
    tmp_msg_0.altitude = 42513U;
    tmp_msg_0.depth = 44415U;
    tmp_msg_0.heading = 10305U;
    tmp_msg_0.speed = -14057;
    tmp_msg_0.fuel = -36;
    tmp_msg_0.exec_state = -1;
    tmp_msg_0.plan_checksum = 21069U;
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
    msg.setTimeStamp(0.0812548573247801);
    msg.setSource(21750U);
    msg.setSourceEntity(113U);
    msg.setDestination(22826U);
    msg.setDestinationEntity(25U);
    msg.op = 141U;
    msg.system.assign("TFGQBNTVKUSTVIMHXNPQGZRIYOQOUXUJMKMKLNUPKAZYEFYXFELAEQJQNPHO");
    msg.range = 0.8283648706834916;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.26684059568554697;
    tmp_msg_0.phi = 0.8810075557657621;
    tmp_msg_0.theta = 0.8082966546684628;
    tmp_msg_0.psi = 0.5619597080638395;
    tmp_msg_0.psi_magnetic = 0.3702024795196064;
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
    msg.setTimeStamp(0.979044154501068);
    msg.setSource(29228U);
    msg.setSourceEntity(96U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.5428181612922708);
    msg.setSource(57634U);
    msg.setSourceEntity(109U);
    msg.setDestination(13317U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.1483546871846121);
    msg.setSource(3765U);
    msg.setSourceEntity(2U);
    msg.setDestination(18055U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.9600755711147324);
    msg.setSource(13379U);
    msg.setSourceEntity(209U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(77U);
    msg.list.assign("XKFAJZHPPCFWDGIDSLCGZTJUWBSTCHLDFBOMHIPZGNBUIQGFJGEOEAGZVXREEJRSQFOSVQYRIWAHOZIVMPVIGMAAANNJPNXRBKKEFRXTXYCUUKIDJLJKFKMVXKDIQWPCTAUUSBIUCCNCZDRBDKFXQLSXJELKRJVHFUYPRWAEOSQZMXM");

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
    msg.setTimeStamp(0.28246125127225674);
    msg.setSource(1676U);
    msg.setSourceEntity(242U);
    msg.setDestination(65422U);
    msg.setDestinationEntity(243U);
    msg.list.assign("NQDWKTMDGMZIDLUDBFMUZXISUZRLXPTAQRAOTBOORFUHSZTKEPKJDWNJCBJSXPTFHNBSRCDAMGGCVASCBVFOIHAYIEJGMXHOMWQGJGQAPONTHJOONQIYBLKYGPWVWYOGZNRLMHXWNMSUCWKYVICUZUZYEEAHXLBXEKFSNXNFKJFP");

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
    msg.setTimeStamp(0.32074616427475655);
    msg.setSource(51799U);
    msg.setSourceEntity(134U);
    msg.setDestination(21937U);
    msg.setDestinationEntity(222U);
    msg.list.assign("CAPZKYBWJIVLWDWPEXQOAKQJLOHFNSYPGBCSGPZREHNVTRZXZGDMNEWFSNBFZHLTGYFTORGJVOYUDRJHUISUVYDMVOGUTGSOQGPLPPOMBZIEHQRLDEIMIIMLSHMAQLBMMRLAQCUDJDEDUKJNKWSUFACOTNKAKQBUYXCWEAVOSKVHZWCRLMQYZFAWPJNFCWYHNKFQXPXITDFPYHHKVXJOJBTWVTIZBXAUGDYJ");

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
    msg.setTimeStamp(0.6628436645262025);
    msg.setSource(22148U);
    msg.setSourceEntity(181U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(41U);
    msg.peer.assign("ULTDBIDDLJMCBYRKNQCKGLJNCQBGCEIXYWJDZHAZEWXJPPYUWRWCCVWAOTITUWQPKIHBFGNSQEFCNFRYRMPDGQSKLKEHRVMUXLBOPXLDNTZGFERXMQPZFXIJZYEUIDQNJIMCJKOUPBSHIEUNYABFRN");
    msg.rssi = 0.028993618623664563;
    msg.integrity = 33657U;

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
    msg.setTimeStamp(0.4517434053481878);
    msg.setSource(56686U);
    msg.setSourceEntity(168U);
    msg.setDestination(25102U);
    msg.setDestinationEntity(149U);
    msg.peer.assign("RTLCXFHRYKDFAUPSKZCUKDMIWEIZVUIFOE");
    msg.rssi = 0.8572575064602106;
    msg.integrity = 53280U;

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
    msg.setTimeStamp(0.9117748657395404);
    msg.setSource(20648U);
    msg.setSourceEntity(200U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(130U);
    msg.peer.assign("OFCPENTSTNNMNXGHNFVODBIUWBRWCOCKPTWDJDWOSXYSIINPAIMRXUFPBQSSFQEXWTUBMPKOHILGVMNXNZNSDRRJKMDZTEACHRNRGJX");
    msg.rssi = 0.48811961184462616;
    msg.integrity = 39365U;

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
    msg.setTimeStamp(0.7886795378470973);
    msg.setSource(18128U);
    msg.setSourceEntity(116U);
    msg.setDestination(42585U);
    msg.setDestinationEntity(211U);
    msg.req_id = 23371U;
    msg.destination.assign("UEIGVERZEMDYOJQODZOMXUNUWAWJOABVHVWQTBRL");
    msg.timeout = 0.571661078449756;
    msg.range = 0.6239218532536713;
    msg.type = 228U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 50U;
    tmp_msg_0.longain = 0.014077823018414426;
    tmp_msg_0.latgain = 0.9404622438033979;
    tmp_msg_0.bondthick = 2145952386U;
    tmp_msg_0.leadgain = 0.5008373098982507;
    tmp_msg_0.deconflgain = 0.7388100791021033;
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
    msg.setTimeStamp(0.15195583446843064);
    msg.setSource(48028U);
    msg.setSourceEntity(104U);
    msg.setDestination(59158U);
    msg.setDestinationEntity(239U);
    msg.req_id = 19074U;
    msg.destination.assign("TBQFESRTSXWAQYFVBGUDRGQEKHFQOWDOKRCPGDBXJYLKTBMZPVAMMYZCWXIZYLHXBZRJZOOSAFIZSLANSDJCOBNFBTFHRPGZDNDGKQNIGVIGJPTLVEANPOFIIIYIWHDEXWRCVCGODHATRMPYYQORCHJWEOSGBYPMFLZQXCUMCBYVWXHECSRUIKDPNHYXTLVNUQAUAHMNVUOMWVWLEENJZUQVNEWJJXJFTLUBDAZPTSJ");
    msg.timeout = 0.5603494879738709;
    msg.range = 0.4533120668140832;
    msg.type = 84U;
    IMC::ENCAwareness tmp_msg_0;
    tmp_msg_0.depth_at_loc.assign("PFIWLEJYZOQRNPCSJEZMHUQRPZXIKJGUGKPOKWFUGPMIZXAUCUOSFWPBNUWTTBPDEGYUTCFCNLYMTKLAHRSRETCZTRZSKANWLBLQHFVYYIJXYGO");
    tmp_msg_0.danger.assign("DBQEKBWNDAUOBCJVIWKIMDTXNXEPYWOLSSWPKHADELTUIEHVCZSOZJXGNHBNZYLHIDRESTVUGVVITVWXCARQADIFLZYJXFSTVRZJBXWAYMMOMUAFZTGBUPFFTRTEWGBBLHKQJESXZKCYVBSPJWIUONTRHCROJGGDPTVSLGOPECLPHRKYYCULAURJOJXOHPZYWQIFPNCVAYIKQBNQNCLJDEQGGQRFFFKDHZM");
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
    msg.setTimeStamp(0.5085656456821666);
    msg.setSource(34426U);
    msg.setSourceEntity(239U);
    msg.setDestination(14419U);
    msg.setDestinationEntity(150U);
    msg.req_id = 8752U;
    msg.destination.assign("ZAMJFYDTWCOAGPCDBYKRTUIXLVSXLXPQPFSRISHBLYFXWM");
    msg.timeout = 0.7182440730105254;
    msg.range = 0.5674423875511349;
    msg.type = 187U;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("ARKWMEKNWWLYUQOLVVSLCEOWCURPQLTGTNHFJFSIGYTXAQFWUEKFAGJYRVSNVGONMNBUVQNPMDVTRBLFMRBPXWEDIPMJINEOTKXVLBDIXBTCXDTROMLZJMAQGTRQSXLREIJPIZBWOZHAZOIUHCIYBFKRJHPPXFRDNBHXSUQMQGLDCYZHZCYKZVCPWDUDTJKFEUSDBYGZAHXCNJFY");
    tmp_msg_0.sensor_class.assign("MJCXJHJGPLSDIGDVSIALWUKVBIELAGUQMCGJORIARKOKYFMFYVDMJEQFBSAXBCLSZMHSFTVNSFBCGGFDWPZIDULTHCPKOSCPEXRWJWXZJEMBDUQAQXCZSASORKZVTZCLZUXFUCOAYRNOTOQFLEMNAYTHEP");
    tmp_msg_0.lat = 0.5987671033802123;
    tmp_msg_0.lon = 0.10309795991935267;
    tmp_msg_0.alt = 0.5164668205082318;
    tmp_msg_0.heading = 0.357971372527755;
    tmp_msg_0.data.assign("BZXLTJYLTK");
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
    msg.setTimeStamp(0.1839415730023296);
    msg.setSource(50037U);
    msg.setSourceEntity(190U);
    msg.setDestination(63800U);
    msg.setDestinationEntity(215U);
    msg.req_id = 43661U;
    msg.type = 6U;
    msg.status = 242U;
    msg.info.assign("ESBNMTZOHAWBXGNUSCZGOZYQXYMSBTKIVKNQSWVFHIUHVKJQZAYORJYORWCAGQLPWPQZTDVMQZEAGXESYCVNFLSWCSOAIWNUQNMMQKHDJGIGUVOMPMYBWLAOXTATZJHNTOJXI");
    msg.range = 0.2502107792253975;

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
    msg.setTimeStamp(0.3342143523015514);
    msg.setSource(27922U);
    msg.setSourceEntity(196U);
    msg.setDestination(47494U);
    msg.setDestinationEntity(198U);
    msg.req_id = 20209U;
    msg.type = 163U;
    msg.status = 39U;
    msg.info.assign("LNWBCLFSKEFQTDNSTUHVSFCEYJLALADOHSMPYWYIQQXQQLEEOXHSKMGYCZRTQOKEP");
    msg.range = 0.29036643970168063;

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
    msg.setTimeStamp(0.36307274725361716);
    msg.setSource(31587U);
    msg.setSourceEntity(39U);
    msg.setDestination(9009U);
    msg.setDestinationEntity(254U);
    msg.req_id = 61675U;
    msg.type = 71U;
    msg.status = 205U;
    msg.info.assign("HIBEFMLDXYZDDYVFHRURCQJCQEBKQXACENTVFOKCALXYNFWCRDFPRJSNUPADUBUXVGUFWWTZOLQOXWEGTSOSORJKXBGJZNMBQZLTIQCSFODJGMQNJEGPJVOMPZZLYFJDHTIWYKQWPATMIGASYPRINNEACOEINBQCKVPKUGAXFMNBDUVMJYEIHMBSVOWUARRWTEDAXYLLZMHTSTHIWVHPFHSYGDERCJKGVOZLXLCYHTISKLKGZRUHBVAWSN");
    msg.range = 0.3026200090201894;

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
    msg.setTimeStamp(0.30182945347376366);
    msg.setSource(49276U);
    msg.setSourceEntity(99U);
    msg.setDestination(21684U);
    msg.setDestinationEntity(128U);
    msg.system.assign("KZCGGXJACRPANBTWONDHCKLYKOXQQXZRUBULOJDJTYBWJWYAOICQXDOXGGPPHAVCCRMAPMOFZRMPNGFMOBKTPXLWSNEKWEOFNHPDCMDNLQGJKFSBEAYQXGSSDVHHRKROWEMVJPWIFXHXMZIZVBZHYENFSUYUMFGSTDBPLCDCVRJEVBUMNIIOWVRPSETJWIANYNLKDHUTLYATEHRCJIUTIURJVSZ");
    msg.op = 167U;

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
    msg.setTimeStamp(0.7360915617589565);
    msg.setSource(49579U);
    msg.setSourceEntity(250U);
    msg.setDestination(52336U);
    msg.setDestinationEntity(141U);
    msg.system.assign("NVIFUNHFWCWQVXXVOPELMCCAPQBSTUJKQKEUFSODNPLSVTWBFQEHONMZNULJTY");
    msg.op = 141U;

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
    msg.setTimeStamp(0.03132876171198884);
    msg.setSource(11959U);
    msg.setSourceEntity(112U);
    msg.setDestination(64970U);
    msg.setDestinationEntity(10U);
    msg.system.assign("EVOCYJRUFHWMIEWMHXVEHVEUKCVPSBELCXLJRZBRYTCIPUBYAKSZD");
    msg.op = 58U;

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
    msg.setTimeStamp(0.6434838702099299);
    msg.setSource(44460U);
    msg.setSourceEntity(132U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(11U);
    msg.value = 23516;

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
    msg.setTimeStamp(0.9550114796040798);
    msg.setSource(45214U);
    msg.setSourceEntity(6U);
    msg.setDestination(51430U);
    msg.setDestinationEntity(173U);
    msg.value = 6075;

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
    msg.setTimeStamp(0.7459604449017642);
    msg.setSource(4012U);
    msg.setSourceEntity(17U);
    msg.setDestination(13835U);
    msg.setDestinationEntity(154U);
    msg.value = 8240;

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
    msg.setTimeStamp(0.8572621945118993);
    msg.setSource(29560U);
    msg.setSourceEntity(75U);
    msg.setDestination(55768U);
    msg.setDestinationEntity(112U);
    msg.value = 0.2697958152707899;

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
    msg.setTimeStamp(0.5124691956643876);
    msg.setSource(43948U);
    msg.setSourceEntity(42U);
    msg.setDestination(16749U);
    msg.setDestinationEntity(202U);
    msg.value = 0.3970993597029421;

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
    msg.setTimeStamp(0.6302481129001566);
    msg.setSource(45481U);
    msg.setSourceEntity(221U);
    msg.setDestination(31524U);
    msg.setDestinationEntity(4U);
    msg.value = 0.08185323189400073;

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
    msg.setTimeStamp(0.13810171448166042);
    msg.setSource(36921U);
    msg.setSourceEntity(85U);
    msg.setDestination(37398U);
    msg.setDestinationEntity(167U);
    msg.value = 0.966636084534781;

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
    msg.setTimeStamp(0.6446720532963125);
    msg.setSource(1513U);
    msg.setSourceEntity(68U);
    msg.setDestination(11588U);
    msg.setDestinationEntity(50U);
    msg.value = 0.8797803757099476;

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
    msg.setTimeStamp(0.1233900025454917);
    msg.setSource(21872U);
    msg.setSourceEntity(74U);
    msg.setDestination(56118U);
    msg.setDestinationEntity(203U);
    msg.value = 0.5642902804357731;

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
    msg.setTimeStamp(0.23783577166192404);
    msg.setSource(56823U);
    msg.setSourceEntity(83U);
    msg.setDestination(6144U);
    msg.setDestinationEntity(196U);
    msg.validity = 35048U;
    msg.type = 169U;
    msg.utc_year = 64146U;
    msg.utc_month = 203U;
    msg.utc_day = 90U;
    msg.utc_time = 0.6703988170184866;
    msg.lat = 0.811688257334117;
    msg.lon = 0.39315210775684317;
    msg.height = 0.6626911333120094;
    msg.satellites = 58U;
    msg.cog = 0.7879251303758213;
    msg.sog = 0.7288284078934276;
    msg.hdop = 0.6518808709785375;
    msg.vdop = 0.7998154064889169;
    msg.hacc = 0.7602157930238964;
    msg.vacc = 0.3880034740463403;

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
    msg.setTimeStamp(0.8620539562798322);
    msg.setSource(7144U);
    msg.setSourceEntity(20U);
    msg.setDestination(12795U);
    msg.setDestinationEntity(5U);
    msg.validity = 46068U;
    msg.type = 167U;
    msg.utc_year = 55764U;
    msg.utc_month = 97U;
    msg.utc_day = 52U;
    msg.utc_time = 0.08490167350908251;
    msg.lat = 0.5944325596202052;
    msg.lon = 0.42409121108078685;
    msg.height = 0.8755171078981605;
    msg.satellites = 96U;
    msg.cog = 0.38770535135982687;
    msg.sog = 0.561443668863657;
    msg.hdop = 0.3656488122964111;
    msg.vdop = 0.8049471488488785;
    msg.hacc = 0.783270465796781;
    msg.vacc = 0.53486621654495;

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
    msg.setTimeStamp(0.7758049420895893);
    msg.setSource(18455U);
    msg.setSourceEntity(45U);
    msg.setDestination(44014U);
    msg.setDestinationEntity(19U);
    msg.validity = 47281U;
    msg.type = 44U;
    msg.utc_year = 10547U;
    msg.utc_month = 237U;
    msg.utc_day = 41U;
    msg.utc_time = 0.5511906358164744;
    msg.lat = 0.7327251562029676;
    msg.lon = 0.8548083497743955;
    msg.height = 0.45920216770422173;
    msg.satellites = 30U;
    msg.cog = 0.5364668367409939;
    msg.sog = 0.2314134139178906;
    msg.hdop = 0.22755544652689963;
    msg.vdop = 0.3484757176492542;
    msg.hacc = 0.21109295615933932;
    msg.vacc = 0.2235666336228037;

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
    msg.setTimeStamp(0.3930447137021784);
    msg.setSource(21796U);
    msg.setSourceEntity(120U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(5U);
    msg.time = 0.7190457476928435;
    msg.phi = 0.125139353330744;
    msg.theta = 0.2524180607874784;
    msg.psi = 0.03627233102734284;
    msg.psi_magnetic = 0.06865271622585012;

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
    msg.setTimeStamp(0.9731901429045616);
    msg.setSource(33420U);
    msg.setSourceEntity(136U);
    msg.setDestination(55474U);
    msg.setDestinationEntity(190U);
    msg.time = 0.6971255626774258;
    msg.phi = 0.7295337900001855;
    msg.theta = 0.21620688229406482;
    msg.psi = 0.07633766976955147;
    msg.psi_magnetic = 0.41896793776005015;

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
    msg.setTimeStamp(0.515693940170304);
    msg.setSource(11170U);
    msg.setSourceEntity(202U);
    msg.setDestination(61023U);
    msg.setDestinationEntity(115U);
    msg.time = 0.5328013884851828;
    msg.phi = 0.5755414521690142;
    msg.theta = 0.5663418703412804;
    msg.psi = 0.7508620101006982;
    msg.psi_magnetic = 0.9891229633525577;

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
    msg.setTimeStamp(0.2431693732850695);
    msg.setSource(26101U);
    msg.setSourceEntity(240U);
    msg.setDestination(15583U);
    msg.setDestinationEntity(162U);
    msg.time = 0.06679580634458748;
    msg.x = 0.06921634308341917;
    msg.y = 0.15118555286669155;
    msg.z = 0.26229917417548276;
    msg.timestep = 0.45471921070682586;

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
    msg.setTimeStamp(0.45471189977074766);
    msg.setSource(48950U);
    msg.setSourceEntity(212U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(94U);
    msg.time = 0.25890851383368507;
    msg.x = 0.2612396320631194;
    msg.y = 0.666082256932395;
    msg.z = 0.2506766347428778;
    msg.timestep = 0.18743489445707084;

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
    msg.setTimeStamp(0.9802894482347675);
    msg.setSource(12796U);
    msg.setSourceEntity(203U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(88U);
    msg.time = 0.9141641748933265;
    msg.x = 0.2608937902391001;
    msg.y = 0.1611890943903428;
    msg.z = 0.45530651487106755;
    msg.timestep = 0.30314036240566267;

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
    msg.setTimeStamp(0.5087699951298255);
    msg.setSource(13868U);
    msg.setSourceEntity(227U);
    msg.setDestination(14236U);
    msg.setDestinationEntity(160U);
    msg.time = 0.04024574064594644;
    msg.x = 0.8549831602485429;
    msg.y = 0.3523022227907928;
    msg.z = 0.6884779853946305;

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
    msg.setTimeStamp(0.6089668184369746);
    msg.setSource(60398U);
    msg.setSourceEntity(129U);
    msg.setDestination(5540U);
    msg.setDestinationEntity(117U);
    msg.time = 0.20949753257394232;
    msg.x = 0.9237706580890758;
    msg.y = 0.2038334925655666;
    msg.z = 0.15384309676547048;

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
    msg.setTimeStamp(0.33341380437470947);
    msg.setSource(11535U);
    msg.setSourceEntity(212U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(218U);
    msg.time = 0.9004123472228273;
    msg.x = 0.8944913320803187;
    msg.y = 0.6510314492279996;
    msg.z = 0.9470579669139672;

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
    msg.setTimeStamp(0.2389156091689142);
    msg.setSource(20244U);
    msg.setSourceEntity(57U);
    msg.setDestination(32457U);
    msg.setDestinationEntity(85U);
    msg.time = 0.41208447110884794;
    msg.x = 0.9455364698632557;
    msg.y = 0.31192424129739704;
    msg.z = 0.9613126209043305;

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
    msg.setTimeStamp(0.5150919668613405);
    msg.setSource(46793U);
    msg.setSourceEntity(61U);
    msg.setDestination(39283U);
    msg.setDestinationEntity(64U);
    msg.time = 0.02093464796670419;
    msg.x = 0.08541882958805747;
    msg.y = 0.10015948659500618;
    msg.z = 0.686523407566026;

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
    msg.setTimeStamp(0.5589389063514792);
    msg.setSource(58904U);
    msg.setSourceEntity(183U);
    msg.setDestination(38969U);
    msg.setDestinationEntity(173U);
    msg.time = 0.35440778542372164;
    msg.x = 0.1622026860858522;
    msg.y = 0.6694231371308506;
    msg.z = 0.991912405156989;

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
    msg.setTimeStamp(0.5721622556984763);
    msg.setSource(1991U);
    msg.setSourceEntity(101U);
    msg.setDestination(607U);
    msg.setDestinationEntity(187U);
    msg.time = 0.8164972065651593;
    msg.x = 0.5407989798492893;
    msg.y = 0.19213112028345647;
    msg.z = 0.7497938715991765;

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
    msg.setTimeStamp(0.8514218227339223);
    msg.setSource(53592U);
    msg.setSourceEntity(79U);
    msg.setDestination(24696U);
    msg.setDestinationEntity(202U);
    msg.time = 0.9719141696702567;
    msg.x = 0.2316703656311978;
    msg.y = 0.07271432590594573;
    msg.z = 0.7716978802592618;

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
    msg.setTimeStamp(0.20835076639604677);
    msg.setSource(51528U);
    msg.setSourceEntity(2U);
    msg.setDestination(18377U);
    msg.setDestinationEntity(6U);
    msg.time = 0.47519595721539987;
    msg.x = 0.9753335046302092;
    msg.y = 0.10277423722093637;
    msg.z = 0.9913623672002784;

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
    msg.setTimeStamp(0.2774162020854076);
    msg.setSource(31447U);
    msg.setSourceEntity(44U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(72U);
    msg.validity = 202U;
    msg.x = 0.6823866875730122;
    msg.y = 0.7628247102405071;
    msg.z = 0.32980543463800494;

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
    msg.setTimeStamp(0.5945474607528733);
    msg.setSource(40560U);
    msg.setSourceEntity(19U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(0U);
    msg.validity = 162U;
    msg.x = 0.3179518197145117;
    msg.y = 0.48001068458785423;
    msg.z = 0.5434072976885317;

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
    msg.setTimeStamp(0.8190052975482123);
    msg.setSource(97U);
    msg.setSourceEntity(239U);
    msg.setDestination(19166U);
    msg.setDestinationEntity(227U);
    msg.validity = 53U;
    msg.x = 0.6192327227206248;
    msg.y = 0.9420889363089975;
    msg.z = 0.709386770116727;

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
    msg.setTimeStamp(0.03238359359470877);
    msg.setSource(10646U);
    msg.setSourceEntity(152U);
    msg.setDestination(12395U);
    msg.setDestinationEntity(73U);
    msg.validity = 38U;
    msg.x = 0.523025984148653;
    msg.y = 0.9083162735510728;
    msg.z = 0.3690035449050819;

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
    msg.setTimeStamp(0.551231605077253);
    msg.setSource(6626U);
    msg.setSourceEntity(229U);
    msg.setDestination(41074U);
    msg.setDestinationEntity(97U);
    msg.validity = 44U;
    msg.x = 0.21747044168076723;
    msg.y = 0.804930323937019;
    msg.z = 0.9510042607469997;

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
    msg.setTimeStamp(0.2786038716053022);
    msg.setSource(25694U);
    msg.setSourceEntity(33U);
    msg.setDestination(39678U);
    msg.setDestinationEntity(126U);
    msg.validity = 190U;
    msg.x = 0.8046757527220118;
    msg.y = 0.22173434465091812;
    msg.z = 0.10858465171677723;

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
    msg.setTimeStamp(0.902772832727918);
    msg.setSource(43774U);
    msg.setSourceEntity(76U);
    msg.setDestination(4466U);
    msg.setDestinationEntity(147U);
    msg.time = 0.5628208927145579;
    msg.x = 0.23489935603473788;
    msg.y = 0.9794336334164627;
    msg.z = 0.9469363466028722;

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
    msg.setTimeStamp(0.513282779591939);
    msg.setSource(22378U);
    msg.setSourceEntity(10U);
    msg.setDestination(4037U);
    msg.setDestinationEntity(66U);
    msg.time = 0.2076211909042559;
    msg.x = 0.6806577166994492;
    msg.y = 0.9931712894419854;
    msg.z = 0.8395717590999648;

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
    msg.setTimeStamp(0.5762624264916019);
    msg.setSource(21689U);
    msg.setSourceEntity(160U);
    msg.setDestination(40674U);
    msg.setDestinationEntity(67U);
    msg.time = 0.40212370047357826;
    msg.x = 0.9208928696355848;
    msg.y = 0.19972648474743426;
    msg.z = 0.29209021730882423;

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
    msg.setTimeStamp(0.14744188808642777);
    msg.setSource(6620U);
    msg.setSourceEntity(200U);
    msg.setDestination(302U);
    msg.setDestinationEntity(63U);
    msg.validity = 133U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5616525575532318;
    tmp_msg_0.y = 0.011695315371191506;
    tmp_msg_0.z = 0.4720596522898004;
    tmp_msg_0.phi = 0.9629600907093327;
    tmp_msg_0.theta = 0.3535056775936214;
    tmp_msg_0.psi = 0.472538468586545;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.024179501360333422;

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
    msg.setTimeStamp(0.44455531064553866);
    msg.setSource(54770U);
    msg.setSourceEntity(46U);
    msg.setDestination(29427U);
    msg.setDestinationEntity(148U);
    msg.validity = 220U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.42911899141718657;
    tmp_msg_0.beam_height = 0.7178601891161743;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.29564549185600253;

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
    msg.setTimeStamp(0.06971661613748825);
    msg.setSource(43687U);
    msg.setSourceEntity(205U);
    msg.setDestination(6361U);
    msg.setDestinationEntity(25U);
    msg.validity = 19U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9989141682994694;
    tmp_msg_0.y = 0.49444056612609677;
    tmp_msg_0.z = 0.1982608577862972;
    tmp_msg_0.phi = 0.2110644635044393;
    tmp_msg_0.theta = 0.5240023074682583;
    tmp_msg_0.psi = 0.3980298416869721;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9151343073283491;
    tmp_msg_1.beam_height = 0.08528261615298482;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.3944533920020695;

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
    msg.setTimeStamp(0.4532001683104594);
    msg.setSource(6064U);
    msg.setSourceEntity(160U);
    msg.setDestination(38624U);
    msg.setDestinationEntity(143U);
    msg.value = 0.2946016060689223;

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
    msg.setTimeStamp(0.2671529499642793);
    msg.setSource(13205U);
    msg.setSourceEntity(117U);
    msg.setDestination(7303U);
    msg.setDestinationEntity(65U);
    msg.value = 0.033498248631261496;

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
    msg.setTimeStamp(0.5857380289279419);
    msg.setSource(56809U);
    msg.setSourceEntity(108U);
    msg.setDestination(37202U);
    msg.setDestinationEntity(13U);
    msg.value = 0.15532112499105266;

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
    msg.setTimeStamp(0.12798408312613674);
    msg.setSource(9131U);
    msg.setSourceEntity(3U);
    msg.setDestination(21746U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9475465179554182;

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
    msg.setTimeStamp(0.3209433034751985);
    msg.setSource(42811U);
    msg.setSourceEntity(50U);
    msg.setDestination(45637U);
    msg.setDestinationEntity(178U);
    msg.value = 0.30028475683939815;

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
    msg.setTimeStamp(0.6011928176693753);
    msg.setSource(23361U);
    msg.setSourceEntity(210U);
    msg.setDestination(21368U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9513997089887001;

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
    msg.setTimeStamp(0.1901568984675268);
    msg.setSource(6765U);
    msg.setSourceEntity(132U);
    msg.setDestination(6499U);
    msg.setDestinationEntity(204U);
    msg.value = 0.7236887509849059;

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
    msg.setTimeStamp(0.3640983353217321);
    msg.setSource(27842U);
    msg.setSourceEntity(242U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(105U);
    msg.value = 0.8487398093737447;

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
    msg.setTimeStamp(0.025065180548340282);
    msg.setSource(27939U);
    msg.setSourceEntity(145U);
    msg.setDestination(13531U);
    msg.setDestinationEntity(144U);
    msg.value = 0.12158935627020517;

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
    msg.setTimeStamp(0.4711552109855164);
    msg.setSource(25388U);
    msg.setSourceEntity(131U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(178U);
    msg.value = 0.2789863922911354;

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
    msg.setTimeStamp(0.6755310667781884);
    msg.setSource(60853U);
    msg.setSourceEntity(130U);
    msg.setDestination(8088U);
    msg.setDestinationEntity(116U);
    msg.value = 0.22127801735846253;

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
    msg.setTimeStamp(0.636415592452655);
    msg.setSource(40119U);
    msg.setSourceEntity(139U);
    msg.setDestination(5091U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8422249483906099;

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
    msg.setTimeStamp(0.7009803692415028);
    msg.setSource(17168U);
    msg.setSourceEntity(146U);
    msg.setDestination(5279U);
    msg.setDestinationEntity(46U);
    msg.value = 0.22203666330298244;

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
    msg.setTimeStamp(0.8418559695205082);
    msg.setSource(46741U);
    msg.setSourceEntity(117U);
    msg.setDestination(41307U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0888552507761784;

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
    msg.setTimeStamp(0.20001331356978258);
    msg.setSource(28612U);
    msg.setSourceEntity(28U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(243U);
    msg.value = 0.6992004881948082;

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
    msg.setTimeStamp(0.3027697150318027);
    msg.setSource(27983U);
    msg.setSourceEntity(77U);
    msg.setDestination(52701U);
    msg.setDestinationEntity(20U);
    msg.value = 0.669131381440017;

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
    msg.setTimeStamp(0.12007747076344899);
    msg.setSource(45978U);
    msg.setSourceEntity(8U);
    msg.setDestination(63139U);
    msg.setDestinationEntity(125U);
    msg.value = 0.34959731765084456;

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
    msg.setTimeStamp(0.4966441356551392);
    msg.setSource(3488U);
    msg.setSourceEntity(56U);
    msg.setDestination(9879U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6228385006057241;

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
    msg.setTimeStamp(0.04799727841350798);
    msg.setSource(58126U);
    msg.setSourceEntity(58U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(36U);
    msg.value = 0.08042547565919989;

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
    msg.setTimeStamp(0.05005611272443822);
    msg.setSource(53317U);
    msg.setSourceEntity(92U);
    msg.setDestination(28265U);
    msg.setDestinationEntity(114U);
    msg.value = 0.8617109528344679;

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
    msg.setTimeStamp(0.6215597404902978);
    msg.setSource(56065U);
    msg.setSourceEntity(142U);
    msg.setDestination(12768U);
    msg.setDestinationEntity(87U);
    msg.value = 0.3476466114451898;

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
    msg.setTimeStamp(0.1697574941974186);
    msg.setSource(3470U);
    msg.setSourceEntity(41U);
    msg.setDestination(47358U);
    msg.setDestinationEntity(133U);
    msg.value = 0.022745328283701904;

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
    msg.setTimeStamp(0.1376603726197746);
    msg.setSource(40012U);
    msg.setSourceEntity(190U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(88U);
    msg.value = 0.011878960298049135;

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
    msg.setTimeStamp(0.4081599355753084);
    msg.setSource(61899U);
    msg.setSourceEntity(191U);
    msg.setDestination(6763U);
    msg.setDestinationEntity(158U);
    msg.value = 0.44604627938522234;

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
    msg.setTimeStamp(0.20078221513268357);
    msg.setSource(44064U);
    msg.setSourceEntity(59U);
    msg.setDestination(26104U);
    msg.setDestinationEntity(111U);
    msg.direction = 0.4344453920458883;
    msg.speed = 0.9598606226959869;
    msg.turbulence = 0.6729616086527169;

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
    msg.setTimeStamp(0.7523438662804611);
    msg.setSource(22225U);
    msg.setSourceEntity(82U);
    msg.setDestination(42898U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.43609287592804025;
    msg.speed = 0.4884481415879479;
    msg.turbulence = 0.3967194817188694;

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
    msg.setTimeStamp(0.5104116924956905);
    msg.setSource(33978U);
    msg.setSourceEntity(201U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(17U);
    msg.direction = 0.892884425897717;
    msg.speed = 0.39956884636479373;
    msg.turbulence = 0.6591784327720261;

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
    msg.setTimeStamp(0.11669174097293977);
    msg.setSource(21114U);
    msg.setSourceEntity(105U);
    msg.setDestination(27073U);
    msg.setDestinationEntity(175U);
    msg.value = 0.27038812492947417;

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
    msg.setTimeStamp(0.5959710060156274);
    msg.setSource(13070U);
    msg.setSourceEntity(193U);
    msg.setDestination(37379U);
    msg.setDestinationEntity(138U);
    msg.value = 0.8735188117462495;

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
    msg.setTimeStamp(0.9212783949652452);
    msg.setSource(50244U);
    msg.setSourceEntity(36U);
    msg.setDestination(8190U);
    msg.setDestinationEntity(252U);
    msg.value = 0.18364127295008625;

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
    msg.setTimeStamp(0.3617163850302908);
    msg.setSource(21562U);
    msg.setSourceEntity(122U);
    msg.setDestination(60047U);
    msg.setDestinationEntity(40U);
    msg.value.assign("NSOCRGHTTRATZCIFVGNPUDHAZPYSYRNWFK");

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
    msg.setTimeStamp(0.5048879030309609);
    msg.setSource(42482U);
    msg.setSourceEntity(5U);
    msg.setDestination(15022U);
    msg.setDestinationEntity(220U);
    msg.value.assign("SAQMFSRNTFYXXGVPMAVLXIIPAHUYCCKUFHVVYBHBGVDSCBXKIEOANGZFZRTCANPISMIDPGCINNJBZOEUJ");

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
    msg.setTimeStamp(0.5681142875646593);
    msg.setSource(53932U);
    msg.setSourceEntity(145U);
    msg.setDestination(6252U);
    msg.setDestinationEntity(215U);
    msg.value.assign("RVIBBUAGHMJVOXWPORYULWHJTWUKNJNDXXUWSGXJUAUXRXDDGWPTLTHMIQWSILCBVXAYOSVYDTOSXAMQAPVWCETNZKSMYOCZFSLJKLEFDWHZGWELSMKQRUENGWCQLSMKUZGYQTEJCAEEPPTFPPVFVFSEBQIFJSHGDFRHVYNZARRBFTLCQHHOOHBGFLEIRQQMVPBZVBILTDCYFCUDOIPNNIIAEQKHTARNGKZIUKJZYDXKCZBYKGBPNMZOAJMDOC");

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
    msg.setTimeStamp(0.13789554488877276);
    msg.setSource(29605U);
    msg.setSourceEntity(164U);
    msg.setDestination(35293U);
    msg.setDestinationEntity(1U);
    const signed char tmp_msg_0[] = {-17, -28, 96, 122, -73, -99, -3, 97, 100, -127, 43, 16, -89, -54, -37, 17, 69, -59, 48, 30, -40, -20, -56, 114, -58, 71, 50, 25, 76, 46, -42, 33, 32, 104, -83};
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
    msg.setTimeStamp(0.2810818020962712);
    msg.setSource(14819U);
    msg.setSourceEntity(207U);
    msg.setDestination(45892U);
    msg.setDestinationEntity(195U);
    const signed char tmp_msg_0[] = {-24, 123, 67, -17, 66, -103, -13, 69, 48, -118, 104, 79, 10, 92, -19, 45};
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
    msg.setTimeStamp(0.5370124201109909);
    msg.setSource(64999U);
    msg.setSourceEntity(74U);
    msg.setDestination(21266U);
    msg.setDestinationEntity(99U);
    const signed char tmp_msg_0[] = {-91, -106, 67, -127, -23, 5, 113, 48, 50, -98, 123, 6, -17, 118, -92, 58, 26, -9, -60, 79, -28, -27, -17, 64, -54, 9, -75, 35, 117, -81, -25, -66, 71, -56, 53, -68, 103, 123, 5, -85, -45, 70};
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
    msg.setTimeStamp(0.3309210226857684);
    msg.setSource(27259U);
    msg.setSourceEntity(136U);
    msg.setDestination(623U);
    msg.setDestinationEntity(75U);
    msg.value = 0.40461404615898255;

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
    msg.setTimeStamp(0.33459280459108864);
    msg.setSource(61013U);
    msg.setSourceEntity(230U);
    msg.setDestination(61755U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7189297946504721;

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
    msg.setTimeStamp(0.02228809562309486);
    msg.setSource(45939U);
    msg.setSourceEntity(223U);
    msg.setDestination(2707U);
    msg.setDestinationEntity(232U);
    msg.value = 0.3836777796056724;

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
    msg.setTimeStamp(0.07309808665775475);
    msg.setSource(42453U);
    msg.setSourceEntity(68U);
    msg.setDestination(63468U);
    msg.setDestinationEntity(236U);
    msg.type = 135U;
    msg.frequency = 762914385U;
    msg.min_range = 36919U;
    msg.max_range = 51091U;
    msg.bits_per_point = 105U;
    msg.scale_factor = 0.6541874143164472;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7684752603170618;
    tmp_msg_0.beam_height = 0.1507291346676044;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {122, -22, -1, 80, 35, -4, -58, -89, 4, 9, 25, -50, -60};
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
    msg.setTimeStamp(0.4263802132798804);
    msg.setSource(2014U);
    msg.setSourceEntity(204U);
    msg.setDestination(48140U);
    msg.setDestinationEntity(207U);
    msg.type = 103U;
    msg.frequency = 550930931U;
    msg.min_range = 11016U;
    msg.max_range = 61191U;
    msg.bits_per_point = 122U;
    msg.scale_factor = 0.6781276678793295;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3605998112418384;
    tmp_msg_0.beam_height = 0.5463208023366098;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {36, -46, -86, 86, 74, 98, -6, -81, -121, -109, 93, -111, 106, -123, 121, -41, 35, -99, -72, -61, -106, -124, -115, -58, 26, -105, 104, 92, -125, 76, 75, 111, -37, -104, -30, 37, -83, -16, 4, -3, 80, -97, 63, 57, -61, 94, -100, -24, 120, 97, 29, -10, -20, -12, 15, 97, -37, -16, 8, 118, 83, -60, 59, -21, 34, -101, -16, -3, -27, 96, -51, -85, -12, -126, 34, -112, 111, 58, -42, -53, -111, 67, -98, 54, -116, -30, 19, -110, -126, -106, -77, 110, 7, -32, -70, 67, 74, 36, 73, 125, -7, 81, 68, -35, -36, -30, -68, 23, -127, 101, 54, 108, -45, -72, 55, -26, 119, 6, 100, -121, 20, 10, 126, -39, -41, -48, -51, -52, 28, -36, 124, 36, -56, 89, -123, 57, 79, -38, -124, 8, -51, -19, -97, 101, 85, 114, -78, 26, 113, 15, -64, -4, 16, -52, 37, -62, 12, -58, -116, 28, 66, 36, 116, -32, -88, 63};
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
    msg.setTimeStamp(0.9851731164740429);
    msg.setSource(40702U);
    msg.setSourceEntity(41U);
    msg.setDestination(42867U);
    msg.setDestinationEntity(152U);
    msg.type = 5U;
    msg.frequency = 2248018257U;
    msg.min_range = 55413U;
    msg.max_range = 56911U;
    msg.bits_per_point = 18U;
    msg.scale_factor = 0.6375931303802977;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.43893048153375636;
    tmp_msg_0.beam_height = 0.6302948900497508;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {72, 21, 26, 55, -55, -38, -127, 40, -46, -112, -17, -29, -114, 116, -54, -48, 59, 8, 117, -119, 80, -13, -105, 5, -44, -90, 6, -36, -13, 67, 104, -67, 115, 74, 65, -96, -106};
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
    msg.setTimeStamp(0.25063891819561723);
    msg.setSource(5601U);
    msg.setSourceEntity(38U);
    msg.setDestination(25122U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.22088190355972326);
    msg.setSource(29408U);
    msg.setSourceEntity(197U);
    msg.setDestination(58483U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.11780337909098504);
    msg.setSource(26143U);
    msg.setSourceEntity(99U);
    msg.setDestination(21934U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.09602641487637653);
    msg.setSource(7076U);
    msg.setSourceEntity(110U);
    msg.setDestination(6437U);
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
    msg.setTimeStamp(0.12671076589367003);
    msg.setSource(3158U);
    msg.setSourceEntity(121U);
    msg.setDestination(3439U);
    msg.setDestinationEntity(195U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.5080778021332023);
    msg.setSource(42016U);
    msg.setSourceEntity(148U);
    msg.setDestination(25189U);
    msg.setDestinationEntity(24U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.6941353125010128);
    msg.setSource(21778U);
    msg.setSourceEntity(28U);
    msg.setDestination(898U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8494679767600124;
    msg.confidence = 0.1682210312649327;
    msg.opmodes.assign("USTDOKJDXKVJKVGNQZEFYHIZTVZCYLYBEJIIYLRQUNMUBSAFIEHSNKSWOBDSIMVQPDQRMPBOINILTCCHYSBFTRGFMZCGXGKPPGRLAQMPUSCBESACDZREOCHNWVJSEOTZKTXTWEBXGVVJQDRWGUWUFUAUFSCXFNGAMKXRXNANELMIBHIPJKBUFHKFLRGOWYZHYVTFDPADMPRLNOAHMDWOAPAMNXCJBJEHQOZKC");

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
    msg.setTimeStamp(0.7279457051745979);
    msg.setSource(43152U);
    msg.setSourceEntity(7U);
    msg.setDestination(36250U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7949747948151039;
    msg.confidence = 0.27101403261323287;
    msg.opmodes.assign("TORFPZLOHKILYZUJNWBHDDJNVVVOHJFXEPXZDNNTDALUFBSBRODJGLPAYYQGBJBVQUAAPYISBPUESUHYUYYCLJOVEXGILBERRIIWAUPBUYEZFKDZOVXPPXHZSCQDSOAINJHAQDBJNWEQMORZMVMEVSHTWDAHKMGRJFISGPHJZTIKLLFQFMZOWGGNVU");

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
    msg.setTimeStamp(0.8120698607916083);
    msg.setSource(63657U);
    msg.setSourceEntity(96U);
    msg.setDestination(53765U);
    msg.setDestinationEntity(170U);
    msg.value = 0.6597477959718633;
    msg.confidence = 0.29983609097834973;
    msg.opmodes.assign("XHAWXDAGNBRORYHOFMNUJCXCXEVIRZMNONQZOLCWUVJAPTJMTVGTMPGYFMPYLXUQBTFFJESSIBJCHUEBRYIGNHOEIZXVLHARESRA");

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
    msg.setTimeStamp(0.6157488195482145);
    msg.setSource(58624U);
    msg.setSourceEntity(1U);
    msg.setDestination(30053U);
    msg.setDestinationEntity(65U);
    msg.itow = 1523859843U;
    msg.lat = 0.0012551164827179218;
    msg.lon = 0.6211099987426778;
    msg.height_ell = 0.3403025301575321;
    msg.height_sea = 0.36595992175299796;
    msg.hacc = 0.46698709667199123;
    msg.vacc = 0.7716485495078984;
    msg.vel_n = 0.5164027939587925;
    msg.vel_e = 0.6582616258750286;
    msg.vel_d = 0.3295759335576538;
    msg.speed = 0.5695319227437806;
    msg.gspeed = 0.011349867499053645;
    msg.heading = 0.11616613584887137;
    msg.sacc = 0.6018065998725984;
    msg.cacc = 0.13216923763790478;

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
    msg.setTimeStamp(0.7264893418614808);
    msg.setSource(4952U);
    msg.setSourceEntity(44U);
    msg.setDestination(41166U);
    msg.setDestinationEntity(133U);
    msg.itow = 2933379502U;
    msg.lat = 0.39368315595834746;
    msg.lon = 0.5821197314235436;
    msg.height_ell = 0.9001660157040372;
    msg.height_sea = 0.9173035699125218;
    msg.hacc = 0.5550353006207724;
    msg.vacc = 0.4537924620018534;
    msg.vel_n = 0.0018538154212076607;
    msg.vel_e = 0.26909800470871137;
    msg.vel_d = 0.1259282298264618;
    msg.speed = 0.5911501185844916;
    msg.gspeed = 0.37858962333953006;
    msg.heading = 0.45807133766913277;
    msg.sacc = 0.7556871707903297;
    msg.cacc = 0.4802323602494336;

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
    msg.setTimeStamp(0.9218205705316996);
    msg.setSource(48511U);
    msg.setSourceEntity(198U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(56U);
    msg.itow = 1037594520U;
    msg.lat = 0.5828267964053356;
    msg.lon = 0.21104436732759257;
    msg.height_ell = 0.607608462937455;
    msg.height_sea = 0.09959352320239512;
    msg.hacc = 0.08326092212020808;
    msg.vacc = 0.23096991896536057;
    msg.vel_n = 0.4224891709257609;
    msg.vel_e = 0.7601545178637509;
    msg.vel_d = 0.9719784885915854;
    msg.speed = 0.459259967908879;
    msg.gspeed = 0.8447359494299129;
    msg.heading = 0.4926691575650892;
    msg.sacc = 0.3237138278710098;
    msg.cacc = 0.5765980019980345;

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
    msg.setTimeStamp(0.7523859266071059);
    msg.setSource(24246U);
    msg.setSourceEntity(218U);
    msg.setDestination(65508U);
    msg.setDestinationEntity(249U);
    msg.id = 60U;
    msg.value = 0.20115950601629373;

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
    msg.setTimeStamp(0.5163162413139917);
    msg.setSource(44679U);
    msg.setSourceEntity(88U);
    msg.setDestination(5592U);
    msg.setDestinationEntity(86U);
    msg.id = 178U;
    msg.value = 0.6609563947181507;

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
    msg.setTimeStamp(0.04087198185971841);
    msg.setSource(65430U);
    msg.setSourceEntity(252U);
    msg.setDestination(65467U);
    msg.setDestinationEntity(218U);
    msg.id = 56U;
    msg.value = 0.011578081426781184;

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
    msg.setTimeStamp(0.6066645470716863);
    msg.setSource(24609U);
    msg.setSourceEntity(47U);
    msg.setDestination(34000U);
    msg.setDestinationEntity(251U);
    msg.x = 0.28889046582990907;
    msg.y = 0.008954975786919728;
    msg.z = 0.5030032687148106;
    msg.phi = 0.6296794861813556;
    msg.theta = 0.4397429863249045;
    msg.psi = 0.13021920185588043;

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
    msg.setTimeStamp(0.9816517279456525);
    msg.setSource(62940U);
    msg.setSourceEntity(94U);
    msg.setDestination(6393U);
    msg.setDestinationEntity(233U);
    msg.x = 0.296724396600586;
    msg.y = 0.5527476674536365;
    msg.z = 0.170236432228682;
    msg.phi = 0.7155355301265816;
    msg.theta = 0.6971093722899171;
    msg.psi = 0.06483334865165147;

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
    msg.setTimeStamp(0.6780947002709837);
    msg.setSource(38040U);
    msg.setSourceEntity(75U);
    msg.setDestination(26391U);
    msg.setDestinationEntity(154U);
    msg.x = 0.35382563480498286;
    msg.y = 0.9419542651244015;
    msg.z = 0.04427224225479243;
    msg.phi = 0.17471003393503426;
    msg.theta = 0.41820764145751255;
    msg.psi = 0.3656296922300514;

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
    msg.setTimeStamp(0.9340475543981315);
    msg.setSource(45085U);
    msg.setSourceEntity(134U);
    msg.setDestination(54848U);
    msg.setDestinationEntity(105U);
    msg.beam_width = 0.7270890046237332;
    msg.beam_height = 0.7001835574635914;

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
    msg.setTimeStamp(0.7045597287410724);
    msg.setSource(54986U);
    msg.setSourceEntity(150U);
    msg.setDestination(37512U);
    msg.setDestinationEntity(151U);
    msg.beam_width = 0.17682720901484583;
    msg.beam_height = 0.368617443133628;

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
    msg.setTimeStamp(0.03943375646326286);
    msg.setSource(30394U);
    msg.setSourceEntity(123U);
    msg.setDestination(58178U);
    msg.setDestinationEntity(91U);
    msg.beam_width = 0.889354699713049;
    msg.beam_height = 0.5218328303441366;

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
    msg.setTimeStamp(0.4079946567356977);
    msg.setSource(51057U);
    msg.setSourceEntity(91U);
    msg.setDestination(63465U);
    msg.setDestinationEntity(137U);
    msg.sane = 101U;

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
    msg.setTimeStamp(0.5344349157849976);
    msg.setSource(7461U);
    msg.setSourceEntity(31U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(18U);
    msg.sane = 119U;

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
    msg.setTimeStamp(0.5281326239853679);
    msg.setSource(20735U);
    msg.setSourceEntity(18U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(138U);
    msg.sane = 138U;

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
    msg.setTimeStamp(0.7196442322999208);
    msg.setSource(44385U);
    msg.setSourceEntity(235U);
    msg.setDestination(42860U);
    msg.setDestinationEntity(210U);
    msg.value = 0.9668326636704802;

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
    msg.setTimeStamp(0.23716498929538155);
    msg.setSource(21871U);
    msg.setSourceEntity(155U);
    msg.setDestination(9151U);
    msg.setDestinationEntity(242U);
    msg.value = 0.11803223568349752;

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
    msg.setTimeStamp(0.6601678098711832);
    msg.setSource(61093U);
    msg.setSourceEntity(154U);
    msg.setDestination(49644U);
    msg.setDestinationEntity(93U);
    msg.value = 0.7936690314401872;

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
    msg.setTimeStamp(0.2903593388830127);
    msg.setSource(35246U);
    msg.setSourceEntity(63U);
    msg.setDestination(27887U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7627821551273022;

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
    msg.setTimeStamp(0.1545867136766088);
    msg.setSource(44063U);
    msg.setSourceEntity(170U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8450096536072883;

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
    msg.setTimeStamp(0.9502154027770953);
    msg.setSource(22892U);
    msg.setSourceEntity(125U);
    msg.setDestination(17282U);
    msg.setDestinationEntity(125U);
    msg.value = 0.20407626178000582;

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
    msg.setTimeStamp(0.9085993321457311);
    msg.setSource(7246U);
    msg.setSourceEntity(59U);
    msg.setDestination(20740U);
    msg.setDestinationEntity(138U);
    msg.value = 0.45235397408608713;

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
    msg.setTimeStamp(0.6630609586691827);
    msg.setSource(5766U);
    msg.setSourceEntity(154U);
    msg.setDestination(52537U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6763630651395893;

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
    msg.setTimeStamp(0.08493928256917338);
    msg.setSource(27406U);
    msg.setSourceEntity(254U);
    msg.setDestination(24065U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6602737524919597;

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
    msg.setTimeStamp(0.7334752486138559);
    msg.setSource(28971U);
    msg.setSourceEntity(27U);
    msg.setDestination(9208U);
    msg.setDestinationEntity(33U);
    msg.value = 0.23165018247134816;

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
    msg.setTimeStamp(0.9549089833591682);
    msg.setSource(33642U);
    msg.setSourceEntity(72U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(192U);
    msg.value = 0.15452855902710494;

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
    msg.setTimeStamp(0.5464031209509899);
    msg.setSource(63603U);
    msg.setSourceEntity(115U);
    msg.setDestination(34293U);
    msg.setDestinationEntity(86U);
    msg.value = 0.40501211925507385;

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
    msg.setTimeStamp(0.3690485910498805);
    msg.setSource(8276U);
    msg.setSourceEntity(222U);
    msg.setDestination(61730U);
    msg.setDestinationEntity(107U);
    msg.value = 0.40406807535887557;

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
    msg.setTimeStamp(0.10207538375801462);
    msg.setSource(33430U);
    msg.setSourceEntity(3U);
    msg.setDestination(37584U);
    msg.setDestinationEntity(115U);
    msg.value = 0.29515255572050136;

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
    msg.setTimeStamp(0.6954469957453102);
    msg.setSource(42124U);
    msg.setSourceEntity(119U);
    msg.setDestination(62175U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8783634490288245;

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
    msg.setTimeStamp(0.8999313549868903);
    msg.setSource(31295U);
    msg.setSourceEntity(88U);
    msg.setDestination(27209U);
    msg.setDestinationEntity(11U);
    msg.value = 0.2623146576710115;

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
    msg.setTimeStamp(0.7748513559486746);
    msg.setSource(40093U);
    msg.setSourceEntity(63U);
    msg.setDestination(44338U);
    msg.setDestinationEntity(73U);
    msg.value = 0.4460845522703186;

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
    msg.setTimeStamp(0.31622629021237725);
    msg.setSource(26674U);
    msg.setSourceEntity(109U);
    msg.setDestination(42416U);
    msg.setDestinationEntity(34U);
    msg.value = 0.30465890686710917;

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
    msg.setTimeStamp(0.4860941988925708);
    msg.setSource(54659U);
    msg.setSourceEntity(44U);
    msg.setDestination(22637U);
    msg.setDestinationEntity(64U);
    msg.value = 0.27774568336771477;

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
    msg.setTimeStamp(0.2979905431365618);
    msg.setSource(16225U);
    msg.setSourceEntity(115U);
    msg.setDestination(15044U);
    msg.setDestinationEntity(207U);
    msg.value = 0.35987355222244066;

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
    msg.setTimeStamp(0.8197698024416686);
    msg.setSource(48948U);
    msg.setSourceEntity(45U);
    msg.setDestination(50040U);
    msg.setDestinationEntity(51U);
    msg.value = 0.891690541517369;

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
    msg.setTimeStamp(0.07947089437072385);
    msg.setSource(19950U);
    msg.setSourceEntity(169U);
    msg.setDestination(53225U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7058487240686264;

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
    msg.setTimeStamp(0.8199797808240773);
    msg.setSource(62098U);
    msg.setSourceEntity(165U);
    msg.setDestination(15762U);
    msg.setDestinationEntity(199U);
    msg.value = 0.874436094469702;

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
    msg.setTimeStamp(0.35650147974942514);
    msg.setSource(6416U);
    msg.setSourceEntity(212U);
    msg.setDestination(42345U);
    msg.setDestinationEntity(215U);
    msg.value = 0.33812532152916075;

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
    msg.setTimeStamp(0.659295330444049);
    msg.setSource(8835U);
    msg.setSourceEntity(244U);
    msg.setDestination(40785U);
    msg.setDestinationEntity(158U);
    msg.validity = 38851U;
    msg.type = 194U;
    msg.tow = 3215015717U;
    msg.base_lat = 0.1605215298722893;
    msg.base_lon = 0.637096841420818;
    msg.base_height = 0.21357440481966172;
    msg.n = 0.37627481703852184;
    msg.e = 0.21931609866464985;
    msg.d = 0.8064612895743789;
    msg.v_n = 0.5026370432853917;
    msg.v_e = 0.4768785334184398;
    msg.v_d = 0.11729196748789306;
    msg.satellites = 142U;
    msg.iar_hyp = 61491U;
    msg.iar_ratio = 0.8966432833827391;

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
    msg.setTimeStamp(0.26939034566733);
    msg.setSource(29971U);
    msg.setSourceEntity(29U);
    msg.setDestination(63426U);
    msg.setDestinationEntity(94U);
    msg.validity = 45137U;
    msg.type = 91U;
    msg.tow = 4223556375U;
    msg.base_lat = 0.10468775495115956;
    msg.base_lon = 0.462757607837776;
    msg.base_height = 0.15116794427153224;
    msg.n = 0.27779196150777696;
    msg.e = 0.29274857683028566;
    msg.d = 0.5537238181898517;
    msg.v_n = 0.7223316400197617;
    msg.v_e = 0.08505216485076261;
    msg.v_d = 0.6262862987788176;
    msg.satellites = 231U;
    msg.iar_hyp = 407U;
    msg.iar_ratio = 0.1411087229120016;

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
    msg.setTimeStamp(0.48484534853027494);
    msg.setSource(6441U);
    msg.setSourceEntity(136U);
    msg.setDestination(64301U);
    msg.setDestinationEntity(134U);
    msg.validity = 12382U;
    msg.type = 212U;
    msg.tow = 3987850582U;
    msg.base_lat = 0.5745350752844465;
    msg.base_lon = 0.4483779601044976;
    msg.base_height = 0.2797020022651482;
    msg.n = 0.29086957420530113;
    msg.e = 0.12359100163313863;
    msg.d = 0.9346023321676823;
    msg.v_n = 0.42179700272299026;
    msg.v_e = 0.7430892995403103;
    msg.v_d = 0.08253695417831053;
    msg.satellites = 15U;
    msg.iar_hyp = 31587U;
    msg.iar_ratio = 0.37994600213255736;

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
    msg.setTimeStamp(0.6416142138755824);
    msg.setSource(64468U);
    msg.setSourceEntity(137U);
    msg.setDestination(30538U);
    msg.setDestinationEntity(87U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.502410573009407;
    tmp_msg_0.lon = 0.8753291063711516;
    tmp_msg_0.height = 0.8739099583571864;
    tmp_msg_0.x = 0.7034456853959306;
    tmp_msg_0.y = 0.8728239739878708;
    tmp_msg_0.z = 0.9791599521588011;
    tmp_msg_0.phi = 0.3032743070854186;
    tmp_msg_0.theta = 0.5133119854583433;
    tmp_msg_0.psi = 0.858564974868208;
    tmp_msg_0.u = 0.9798890862246533;
    tmp_msg_0.v = 0.5316937848419402;
    tmp_msg_0.w = 0.5813061354538639;
    tmp_msg_0.vx = 0.6245367149848879;
    tmp_msg_0.vy = 0.5543061014814371;
    tmp_msg_0.vz = 0.7506647560751014;
    tmp_msg_0.p = 0.2370807604446068;
    tmp_msg_0.q = 0.35119025184034713;
    tmp_msg_0.r = 0.8518429097324064;
    tmp_msg_0.depth = 0.9245978160021406;
    tmp_msg_0.alt = 0.5150229955184762;
    msg.state.set(tmp_msg_0);
    msg.type = 234U;

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
    msg.setTimeStamp(0.6099245733007163);
    msg.setSource(6989U);
    msg.setSourceEntity(215U);
    msg.setDestination(58514U);
    msg.setDestinationEntity(15U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3745046550951736;
    tmp_msg_0.lon = 0.9867498723250426;
    tmp_msg_0.height = 0.8903537888015234;
    tmp_msg_0.x = 0.13461602855926313;
    tmp_msg_0.y = 0.34172325098794853;
    tmp_msg_0.z = 0.24124317815430774;
    tmp_msg_0.phi = 0.3308883103090582;
    tmp_msg_0.theta = 0.38337985937593677;
    tmp_msg_0.psi = 0.8404240453312753;
    tmp_msg_0.u = 0.6668448082071223;
    tmp_msg_0.v = 0.6808677634669966;
    tmp_msg_0.w = 0.45147387468377465;
    tmp_msg_0.vx = 0.3947280200271488;
    tmp_msg_0.vy = 0.9802545536606471;
    tmp_msg_0.vz = 0.44427003044409474;
    tmp_msg_0.p = 0.5879498946172146;
    tmp_msg_0.q = 0.6699373857627116;
    tmp_msg_0.r = 0.8450661744714861;
    tmp_msg_0.depth = 0.6629351436422263;
    tmp_msg_0.alt = 0.3933152543017545;
    msg.state.set(tmp_msg_0);
    msg.type = 229U;

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
    msg.setTimeStamp(0.5452290798633724);
    msg.setSource(53374U);
    msg.setSourceEntity(22U);
    msg.setDestination(19198U);
    msg.setDestinationEntity(196U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.578336650112236;
    tmp_msg_0.lon = 0.27438864867883495;
    tmp_msg_0.height = 0.2915141054022258;
    tmp_msg_0.x = 0.47486710840036617;
    tmp_msg_0.y = 0.7247505776501473;
    tmp_msg_0.z = 0.8991036545882198;
    tmp_msg_0.phi = 0.016093813224306586;
    tmp_msg_0.theta = 0.19277601650554355;
    tmp_msg_0.psi = 0.8872759500016797;
    tmp_msg_0.u = 0.4022763749135876;
    tmp_msg_0.v = 0.31647883614824757;
    tmp_msg_0.w = 0.6770785683958206;
    tmp_msg_0.vx = 0.8286862405332015;
    tmp_msg_0.vy = 0.19704456217216282;
    tmp_msg_0.vz = 0.29901218007333574;
    tmp_msg_0.p = 0.8094815830807088;
    tmp_msg_0.q = 0.6898821644548546;
    tmp_msg_0.r = 0.6789897513002047;
    tmp_msg_0.depth = 0.2673947523621354;
    tmp_msg_0.alt = 0.12382672273055184;
    msg.state.set(tmp_msg_0);
    msg.type = 248U;

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
    msg.setTimeStamp(0.5808764937088271);
    msg.setSource(2762U);
    msg.setSourceEntity(74U);
    msg.setDestination(50205U);
    msg.setDestinationEntity(208U);
    msg.value = 0.04746585152602256;

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
    msg.setTimeStamp(0.1152583798054927);
    msg.setSource(53037U);
    msg.setSourceEntity(215U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5028689976795382;

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
    msg.setTimeStamp(0.7273723959311514);
    msg.setSource(13894U);
    msg.setSourceEntity(206U);
    msg.setDestination(30061U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9109972365036143;

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
    msg.setTimeStamp(0.19237523140431867);
    msg.setSource(14368U);
    msg.setSourceEntity(106U);
    msg.setDestination(24368U);
    msg.setDestinationEntity(254U);
    msg.value = 0.8892249175310923;

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
    msg.setTimeStamp(0.44761259387167174);
    msg.setSource(24283U);
    msg.setSourceEntity(52U);
    msg.setDestination(20714U);
    msg.setDestinationEntity(211U);
    msg.value = 0.02551431009037619;

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
    msg.setTimeStamp(0.857880771101519);
    msg.setSource(20736U);
    msg.setSourceEntity(250U);
    msg.setDestination(40804U);
    msg.setDestinationEntity(37U);
    msg.value = 0.2316257121978701;

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
    msg.setTimeStamp(0.17060424467124624);
    msg.setSource(65410U);
    msg.setSourceEntity(161U);
    msg.setDestination(4012U);
    msg.setDestinationEntity(122U);
    msg.value = 0.923900057992914;

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
    msg.setTimeStamp(0.8960911452531893);
    msg.setSource(60416U);
    msg.setSourceEntity(202U);
    msg.setDestination(45805U);
    msg.setDestinationEntity(215U);
    msg.value = 0.47273027999411854;

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
    msg.setTimeStamp(0.44960510663496045);
    msg.setSource(16235U);
    msg.setSourceEntity(68U);
    msg.setDestination(52670U);
    msg.setDestinationEntity(207U);
    msg.value = 0.7874977214200649;

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
    msg.setTimeStamp(0.4035389198980517);
    msg.setSource(32830U);
    msg.setSourceEntity(94U);
    msg.setDestination(53114U);
    msg.setDestinationEntity(71U);
    msg.value = 0.7096531109565457;

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
    msg.setTimeStamp(0.004806036473715469);
    msg.setSource(57369U);
    msg.setSourceEntity(192U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(92U);
    msg.value = 0.11261540928516467;

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
    msg.setTimeStamp(0.9041920628841175);
    msg.setSource(56996U);
    msg.setSourceEntity(28U);
    msg.setDestination(56449U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9233468622574437;

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
    msg.setTimeStamp(0.5540673288421032);
    msg.setSource(17927U);
    msg.setSourceEntity(49U);
    msg.setDestination(58569U);
    msg.setDestinationEntity(161U);
    msg.value = 0.05474582751801926;

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
    msg.setTimeStamp(0.953437028628935);
    msg.setSource(6539U);
    msg.setSourceEntity(109U);
    msg.setDestination(3098U);
    msg.setDestinationEntity(140U);
    msg.value = 0.3431326100222962;

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
    msg.setTimeStamp(0.04257451847714322);
    msg.setSource(41980U);
    msg.setSourceEntity(225U);
    msg.setDestination(54004U);
    msg.setDestinationEntity(176U);
    msg.value = 0.05344578962216728;

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
    msg.setTimeStamp(0.4305503151465646);
    msg.setSource(47105U);
    msg.setSourceEntity(57U);
    msg.setDestination(12072U);
    msg.setDestinationEntity(135U);
    msg.id = 25U;
    msg.zoom = 219U;
    msg.action = 15U;

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
    msg.setTimeStamp(0.12042425256622913);
    msg.setSource(65030U);
    msg.setSourceEntity(185U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(211U);
    msg.id = 51U;
    msg.zoom = 192U;
    msg.action = 68U;

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
    msg.setTimeStamp(0.022997393181190318);
    msg.setSource(44920U);
    msg.setSourceEntity(181U);
    msg.setDestination(24065U);
    msg.setDestinationEntity(163U);
    msg.id = 130U;
    msg.zoom = 44U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.19180484994408342);
    msg.setSource(44339U);
    msg.setSourceEntity(72U);
    msg.setDestination(32302U);
    msg.setDestinationEntity(164U);
    msg.id = 150U;
    msg.value = 0.16807273888722785;

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
    msg.setTimeStamp(0.6866479781462536);
    msg.setSource(20115U);
    msg.setSourceEntity(152U);
    msg.setDestination(32488U);
    msg.setDestinationEntity(90U);
    msg.id = 55U;
    msg.value = 0.612854128273146;

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
    msg.setTimeStamp(0.9737798962291051);
    msg.setSource(41711U);
    msg.setSourceEntity(126U);
    msg.setDestination(57345U);
    msg.setDestinationEntity(161U);
    msg.id = 249U;
    msg.value = 0.3817189017704956;

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
    msg.setTimeStamp(0.04807661349971437);
    msg.setSource(48839U);
    msg.setSourceEntity(133U);
    msg.setDestination(18878U);
    msg.setDestinationEntity(158U);
    msg.id = 101U;
    msg.value = 0.7186517901354378;

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
    msg.setTimeStamp(0.3041068128077834);
    msg.setSource(13915U);
    msg.setSourceEntity(176U);
    msg.setDestination(47930U);
    msg.setDestinationEntity(59U);
    msg.id = 51U;
    msg.value = 0.4074489451390503;

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
    msg.setTimeStamp(0.8385693142388151);
    msg.setSource(61751U);
    msg.setSourceEntity(220U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(10U);
    msg.id = 98U;
    msg.value = 0.14455427254905084;

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
    msg.setTimeStamp(0.8210187524780697);
    msg.setSource(46446U);
    msg.setSourceEntity(8U);
    msg.setDestination(25069U);
    msg.setDestinationEntity(105U);
    msg.id = 191U;
    msg.angle = 0.7335975906727101;

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
    msg.setTimeStamp(0.5465685413497715);
    msg.setSource(22791U);
    msg.setSourceEntity(32U);
    msg.setDestination(29347U);
    msg.setDestinationEntity(120U);
    msg.id = 251U;
    msg.angle = 0.1343239410567818;

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
    msg.setTimeStamp(0.05338542492195297);
    msg.setSource(60251U);
    msg.setSourceEntity(240U);
    msg.setDestination(11130U);
    msg.setDestinationEntity(71U);
    msg.id = 57U;
    msg.angle = 0.1337315107599214;

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
    msg.setTimeStamp(0.2980308997705078);
    msg.setSource(25424U);
    msg.setSourceEntity(167U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(129U);
    msg.op = 8U;
    msg.actions.assign("QFPBTSDTOEZTYPXLGTDFYYMVWRVTQQAEHULAAVPMLS");

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
    msg.setTimeStamp(0.7705717315353756);
    msg.setSource(11603U);
    msg.setSourceEntity(134U);
    msg.setDestination(62371U);
    msg.setDestinationEntity(146U);
    msg.op = 209U;
    msg.actions.assign("KUEKMZVJQSUBNLMATKOCFRJRGYQHASXWZLRBTBOQKAVNSMZIUHVRETZBWCFDFAYIPPE");

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
    msg.setTimeStamp(0.790828537290875);
    msg.setSource(46345U);
    msg.setSourceEntity(61U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(22U);
    msg.op = 123U;
    msg.actions.assign("VTOQDVSSPQGBOWEQCEPJUGDSYPLAUMQJBTVAKMYOUHVILBRAWVDOXDZPNJMPPEZWVLTQCEBCYWTCQNCBTRDPPHLDOIQULZAJHRONIFRECGZYYLRSRVKEGCUJGVOAEIDEJAZJZGZFGWQWYOYITGLNZXTFTFSMNFMCXFFBANKBRHSNDWIRFEFTVMAXMUUXLNYRIZUY");

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
    msg.setTimeStamp(0.5093276537375441);
    msg.setSource(38097U);
    msg.setSourceEntity(86U);
    msg.setDestination(54057U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("SBFSHXMUOSDU");

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
    msg.setTimeStamp(0.14032317703732355);
    msg.setSource(30836U);
    msg.setSourceEntity(73U);
    msg.setDestination(54467U);
    msg.setDestinationEntity(197U);
    msg.actions.assign("KYRUONHBDBHAZHODRDBDSHGTJBMDDHMJVDCVCREFTHWQZRJTALMSIVYWZMABVNEONXVVJCNVMFKPPUNLLHJGWCQFUATMPELLDPPFYMRFTPQOUEXGGXUTWXPAWCXTEEXASUGRFBIXMIBBRGQSILCNKWZS");

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
    msg.setTimeStamp(0.1374861589167683);
    msg.setSource(51339U);
    msg.setSourceEntity(57U);
    msg.setDestination(62119U);
    msg.setDestinationEntity(176U);
    msg.actions.assign("NHESFHRTYKOAAVREHUVKHQPTVZUDBNYHLPMGETLUQLZBBYINPRSOFDATJORCDUTFLIJFLWWXFFDNWABCYMSEEKRAOWHWBXSORPJVPXWYGSFENCRSPBHDTNVDNSUMJMXXYWJHQVMQJYKCGMQIRJVUVYCZUEOAIVZLDKSZQTIQ");

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
    msg.setTimeStamp(0.849930147653085);
    msg.setSource(15214U);
    msg.setSourceEntity(242U);
    msg.setDestination(6351U);
    msg.setDestinationEntity(150U);
    msg.button = 108U;
    msg.value = 201U;

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
    msg.setTimeStamp(0.047141238016221276);
    msg.setSource(11972U);
    msg.setSourceEntity(189U);
    msg.setDestination(29865U);
    msg.setDestinationEntity(126U);
    msg.button = 30U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.8309401748215012);
    msg.setSource(15120U);
    msg.setSourceEntity(17U);
    msg.setDestination(42116U);
    msg.setDestinationEntity(13U);
    msg.button = 209U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.9628630232599301);
    msg.setSource(40746U);
    msg.setSourceEntity(164U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(236U);
    msg.op = 2U;
    msg.text.assign("OENXOUVMFSQNFBWLHGQXQQSFCDGGOCMUJIGTURWODRKXQTOAUNHCZEAPTIZNSATICEAHADJGLMZEAGHMWVOJXYZFKTBMXOESBSNOQLZBWYNMLDHYAFUHVMPDJRTQYRTWYGMVQPKJFILWCDKLIPYODCREAPZKPCVHFJEBRDHVVBXMXJXBCSSRZBYADRXAUQLVOFKYRVLIPMCYPEKWGPWTZNXVQHEUWZLN");

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
    msg.setTimeStamp(0.2736818048987668);
    msg.setSource(30268U);
    msg.setSourceEntity(123U);
    msg.setDestination(35682U);
    msg.setDestinationEntity(71U);
    msg.op = 83U;
    msg.text.assign("GFDFVKZTIUKKAWECRCFJYBAQVNWXHQOOSMLTWJUHQJQUZDYJOUBROSTKAEWFPWQGRONPPXAAVYTCMZLI");

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
    msg.setTimeStamp(0.7788504222038894);
    msg.setSource(47528U);
    msg.setSourceEntity(192U);
    msg.setDestination(13730U);
    msg.setDestinationEntity(86U);
    msg.op = 114U;
    msg.text.assign("DCOLSVFDOAVTDUWIPXWQBNOREWCKBPSDGVLAFIKHGZVQYBEDHRLYXJBMC");

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
    msg.setTimeStamp(0.63050600163643);
    msg.setSource(63532U);
    msg.setSourceEntity(27U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(106U);
    msg.op = 61U;
    msg.time_remain = 0.24208797680214844;
    msg.sched_time = 0.2975185689220776;

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
    msg.setTimeStamp(0.2392579058387908);
    msg.setSource(35318U);
    msg.setSourceEntity(10U);
    msg.setDestination(52416U);
    msg.setDestinationEntity(110U);
    msg.op = 92U;
    msg.time_remain = 0.704449933934857;
    msg.sched_time = 0.2862322147851373;

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
    msg.setTimeStamp(0.13890875712040263);
    msg.setSource(50568U);
    msg.setSourceEntity(50U);
    msg.setDestination(14315U);
    msg.setDestinationEntity(127U);
    msg.op = 197U;
    msg.time_remain = 0.6156743090634954;
    msg.sched_time = 0.5176296988978684;

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
    msg.setTimeStamp(0.8123956651389284);
    msg.setSource(4008U);
    msg.setSourceEntity(171U);
    msg.setDestination(30810U);
    msg.setDestinationEntity(149U);
    msg.name.assign("KSFWRKDOGYGL");
    msg.op = 89U;
    msg.sched_time = 0.886225712891021;

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
    msg.setTimeStamp(0.6592077615222908);
    msg.setSource(36806U);
    msg.setSourceEntity(124U);
    msg.setDestination(32154U);
    msg.setDestinationEntity(49U);
    msg.name.assign("RULFLBKQSKQHPQEIXTHIFGYMWYPQSCYQWLTXZEGMANIHHWGXUQPXCANZRLBUOPJMSOGMDM");
    msg.op = 192U;
    msg.sched_time = 0.8096865035184803;

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
    msg.setTimeStamp(0.4817104856654052);
    msg.setSource(43103U);
    msg.setSourceEntity(56U);
    msg.setDestination(23957U);
    msg.setDestinationEntity(97U);
    msg.name.assign("BDRJPJGOBUJJIDWEVQLWYRMSDQUVLZXYVEBVWCNWQLHFVCEFPNDKOLUWTBKHGHBCJAUISUJVOYUDXLAZPTRRSOIEGALGQEBJXHTMFKRNALLFAFMFVZIEIMSDXIXHQMROMRZRTGEOKQBAVNDTBSTGNHQGGCYQSCLJCFFABEPPIHVQCDMKSCUTTHXYJLKSYJURNPPMWYHNCCUKUXAVAWMORTIXWEHKWOMYPNZDSSGZINBEWPX");
    msg.op = 46U;
    msg.sched_time = 0.6599616305909988;

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
    msg.setTimeStamp(0.3903711987441827);
    msg.setSource(45219U);
    msg.setSourceEntity(226U);
    msg.setDestination(47025U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.6438538764857323);
    msg.setSource(31865U);
    msg.setSourceEntity(114U);
    msg.setDestination(42173U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.9813111987833251);
    msg.setSource(3814U);
    msg.setSourceEntity(145U);
    msg.setDestination(20721U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.46445774373629023);
    msg.setSource(48794U);
    msg.setSourceEntity(74U);
    msg.setDestination(56284U);
    msg.setDestinationEntity(155U);
    msg.name.assign("APOBFALDVYCBAKLWYBWAEBXEXOHDMPRHNSKTFPGACHEMFYIMZFNKGZZJ");
    msg.state = 76U;

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
    msg.setTimeStamp(0.9782230383750933);
    msg.setSource(47443U);
    msg.setSourceEntity(104U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(19U);
    msg.name.assign("IRRMMFBTDAGOITNCDGXOZBCECMEOHTCPAIBVZEDHWPNWIFUBITECHMODUPPKVDCHLXBGLKVLRBFNGALADKUQFNIHXPBNQGSOQLMWHARNSVMPGVJQZOTXEXTHYXBSBXRUWLFCZANVHFTKZUSSJUTLMQUIYJIYHQOQEFCRDHZUNMOSDKQVEMXXDJFJDJGR");
    msg.state = 164U;

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
    msg.setTimeStamp(0.8190247507467885);
    msg.setSource(32455U);
    msg.setSourceEntity(29U);
    msg.setDestination(17029U);
    msg.setDestinationEntity(142U);
    msg.name.assign("HCTCOHVYQAGAKOHMBDSAFFWHVBEG");
    msg.state = 66U;

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
    msg.setTimeStamp(0.9997738588537763);
    msg.setSource(10495U);
    msg.setSourceEntity(230U);
    msg.setDestination(35510U);
    msg.setDestinationEntity(169U);
    msg.name.assign("ZCILVKFEQHFXRHHURSSMSTJPQMTKPGIHSMPZLGOESBSSKSKVLQNYERCJOZNDAQOXMQBDYENJVZYHBGCEVOFPYWBPDKVWPICEDAZCTEJDGUONTAYJOXBXAAUYVFOXFUTMJQBFXDKVOWRAGOGCUL");
    msg.value = 180U;

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
    msg.setTimeStamp(0.013141971854054413);
    msg.setSource(44674U);
    msg.setSourceEntity(228U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(183U);
    msg.name.assign("TQFILLNYRFUAJUGJZTSQVKJ");
    msg.value = 164U;

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
    msg.setTimeStamp(0.5242615282563117);
    msg.setSource(48343U);
    msg.setSourceEntity(153U);
    msg.setDestination(47152U);
    msg.setDestinationEntity(115U);
    msg.name.assign("SAUVLTQZBSRQHKWEHH");
    msg.value = 22U;

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
    msg.setTimeStamp(0.7685024491792394);
    msg.setSource(6091U);
    msg.setSourceEntity(11U);
    msg.setDestination(64717U);
    msg.setDestinationEntity(38U);
    msg.name.assign("ZZWNWQDDAKXYIHYALWNVPAQLRYZPEFWPOBJTCKOMQCTWBEDYJXRUSZMGSIIUBNVMCLYRKAEZTFDLBOUTKJTKHRFPPNDF");

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
    msg.setTimeStamp(0.01968421131406406);
    msg.setSource(8894U);
    msg.setSourceEntity(127U);
    msg.setDestination(44242U);
    msg.setDestinationEntity(8U);
    msg.name.assign("RLYNOFVFLSIXLXTLIOGUKBETWAOSXOYYNQQCNJZJVHJHUFDDSZEDCKFMPIWHNIJJTQUYCSZEVUZCVBIWPPEMPGCUQALTOJACXHFRMMSGNVXXQYYXLPEMHKSWPVRGSPGRJAIJEYHSLDIAWNDLQVUTZOUKNALTOTXYHUWTSPG");

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
    msg.setTimeStamp(0.18318499009955258);
    msg.setSource(33013U);
    msg.setSourceEntity(59U);
    msg.setDestination(26656U);
    msg.setDestinationEntity(11U);
    msg.name.assign("POGNPSUGEIYJCJRKKHYOUCTRSIQMYOUOAUOJJWDIYBCD");

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
    msg.setTimeStamp(0.8180928861271684);
    msg.setSource(64877U);
    msg.setSourceEntity(38U);
    msg.setDestination(32301U);
    msg.setDestinationEntity(213U);
    msg.name.assign("BLKCZTIDTRJUSLAQWPAJSJDTBQHKVWBIRGJBTSVMRRDABJTCWAYYVPDMZPBRMUKFOAUUCECVAY");
    msg.value = 143U;

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
    msg.setTimeStamp(0.5519694748875368);
    msg.setSource(43433U);
    msg.setSourceEntity(248U);
    msg.setDestination(6494U);
    msg.setDestinationEntity(205U);
    msg.name.assign("LEBFVBTIRGGXLJWSIILQBGA");
    msg.value = 87U;

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
    msg.setTimeStamp(0.8425932874216189);
    msg.setSource(65519U);
    msg.setSourceEntity(253U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(185U);
    msg.name.assign("NIXUEMATUWCUMKDXNTMTIKVIILYRVLWGISRHBUFFHKOOQAIVWEQULEYSECBJBTRJMDUBPYRDKJAAVPSLKOCHALHLNXWPJQQEOUTOCZFRDIJVTHQXYPYBNSEGPJVGVCDMTLZMZEBPFGPARQS");
    msg.value = 211U;

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
    msg.setTimeStamp(0.8882123898425156);
    msg.setSource(4233U);
    msg.setSourceEntity(114U);
    msg.setDestination(54170U);
    msg.setDestinationEntity(70U);
    msg.id = 137U;
    msg.period = 2532422534U;
    msg.duty_cycle = 1305047494U;

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
    msg.setTimeStamp(0.41067357906775726);
    msg.setSource(8967U);
    msg.setSourceEntity(131U);
    msg.setDestination(5308U);
    msg.setDestinationEntity(212U);
    msg.id = 133U;
    msg.period = 2582227904U;
    msg.duty_cycle = 3843069184U;

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
    msg.setTimeStamp(0.8064645892802672);
    msg.setSource(24268U);
    msg.setSourceEntity(188U);
    msg.setDestination(40798U);
    msg.setDestinationEntity(123U);
    msg.id = 222U;
    msg.period = 1961912992U;
    msg.duty_cycle = 536961653U;

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
    msg.setTimeStamp(0.18885382130865414);
    msg.setSource(48633U);
    msg.setSourceEntity(39U);
    msg.setDestination(15495U);
    msg.setDestinationEntity(244U);
    msg.id = 183U;
    msg.period = 731806285U;
    msg.duty_cycle = 2208458024U;

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
    msg.setTimeStamp(0.44484830906052275);
    msg.setSource(14213U);
    msg.setSourceEntity(87U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(71U);
    msg.id = 225U;
    msg.period = 4211149439U;
    msg.duty_cycle = 1880905134U;

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
    msg.setTimeStamp(0.8536327227979276);
    msg.setSource(782U);
    msg.setSourceEntity(29U);
    msg.setDestination(43351U);
    msg.setDestinationEntity(120U);
    msg.id = 128U;
    msg.period = 158835559U;
    msg.duty_cycle = 4247524790U;

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
    msg.setTimeStamp(0.15629889189500978);
    msg.setSource(54210U);
    msg.setSourceEntity(138U);
    msg.setDestination(34650U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.10724732259892478;
    msg.lon = 0.25556449067114995;
    msg.height = 0.6241482560237335;
    msg.x = 0.710959607775796;
    msg.y = 0.08578978025355555;
    msg.z = 0.29425498350135804;
    msg.phi = 0.5650771182617519;
    msg.theta = 0.8530673413952672;
    msg.psi = 0.2005033315605711;
    msg.u = 0.401448415629826;
    msg.v = 0.49699973257072827;
    msg.w = 0.4321964523158972;
    msg.vx = 0.18666004351584176;
    msg.vy = 0.6248287553481272;
    msg.vz = 0.7922501381545168;
    msg.p = 0.7702170047556474;
    msg.q = 0.9058876489215049;
    msg.r = 0.23423005358074067;
    msg.depth = 0.5316390418177215;
    msg.alt = 0.5250847556711562;

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
    msg.setTimeStamp(0.31869029245594405);
    msg.setSource(30323U);
    msg.setSourceEntity(57U);
    msg.setDestination(36033U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.6052951546875192;
    msg.lon = 0.8252594957700177;
    msg.height = 0.9116825226496096;
    msg.x = 0.7876267454469805;
    msg.y = 0.5013077610370258;
    msg.z = 0.41088417381493947;
    msg.phi = 0.5294306495390233;
    msg.theta = 0.07660009418902858;
    msg.psi = 0.1394388528563223;
    msg.u = 0.8225671606122176;
    msg.v = 0.453238589908186;
    msg.w = 0.9486164671869195;
    msg.vx = 0.2525590243476854;
    msg.vy = 0.46450092794719366;
    msg.vz = 0.48597089349664724;
    msg.p = 0.4358275946946849;
    msg.q = 0.41403247093137774;
    msg.r = 0.29551351840361784;
    msg.depth = 0.25188121262438445;
    msg.alt = 0.443953316457121;

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
    msg.setTimeStamp(0.9816221559288859);
    msg.setSource(53178U);
    msg.setSourceEntity(90U);
    msg.setDestination(20610U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.42523724238466576;
    msg.lon = 0.45774869286974607;
    msg.height = 0.26393928468394334;
    msg.x = 0.5286693200927964;
    msg.y = 0.30324728405199586;
    msg.z = 0.17718651378881323;
    msg.phi = 0.9133173528481338;
    msg.theta = 0.6229083851628215;
    msg.psi = 0.27572436279044255;
    msg.u = 0.43841347006244236;
    msg.v = 0.9427341375021422;
    msg.w = 0.2121168156888419;
    msg.vx = 0.05808680762434171;
    msg.vy = 0.3889960169030885;
    msg.vz = 0.05862738308549875;
    msg.p = 0.5085311339488943;
    msg.q = 0.40943457477948275;
    msg.r = 0.20286213883646298;
    msg.depth = 0.7951774803293297;
    msg.alt = 0.9119500567645206;

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
    msg.setTimeStamp(0.05311860055883255);
    msg.setSource(37359U);
    msg.setSourceEntity(250U);
    msg.setDestination(27570U);
    msg.setDestinationEntity(95U);
    msg.x = 0.8672469651837402;
    msg.y = 0.815902283026116;
    msg.z = 0.12872066750566424;

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
    msg.setTimeStamp(0.9263086826286927);
    msg.setSource(23369U);
    msg.setSourceEntity(118U);
    msg.setDestination(11971U);
    msg.setDestinationEntity(8U);
    msg.x = 0.7877352323932205;
    msg.y = 0.9856396963583434;
    msg.z = 0.30573871650839035;

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
    msg.setTimeStamp(0.5682974951062592);
    msg.setSource(37486U);
    msg.setSourceEntity(9U);
    msg.setDestination(34405U);
    msg.setDestinationEntity(127U);
    msg.x = 0.022737035777389836;
    msg.y = 0.06762995059697496;
    msg.z = 0.6799717483788345;

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
    msg.setTimeStamp(0.9022431506515551);
    msg.setSource(38671U);
    msg.setSourceEntity(62U);
    msg.setDestination(13354U);
    msg.setDestinationEntity(211U);
    msg.value = 0.4827442624206043;

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
    msg.setTimeStamp(0.8190779420739185);
    msg.setSource(15979U);
    msg.setSourceEntity(107U);
    msg.setDestination(62942U);
    msg.setDestinationEntity(125U);
    msg.value = 0.2031693140852966;

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
    msg.setTimeStamp(0.42733244803506787);
    msg.setSource(44961U);
    msg.setSourceEntity(190U);
    msg.setDestination(51460U);
    msg.setDestinationEntity(76U);
    msg.value = 0.3898619205863517;

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
    msg.setTimeStamp(0.37428327706665454);
    msg.setSource(43304U);
    msg.setSourceEntity(101U);
    msg.setDestination(44760U);
    msg.setDestinationEntity(123U);
    msg.value = 0.18213397650657326;

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
    msg.setTimeStamp(0.35361545066891553);
    msg.setSource(55305U);
    msg.setSourceEntity(158U);
    msg.setDestination(36650U);
    msg.setDestinationEntity(85U);
    msg.value = 0.697792050219398;

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
    msg.setTimeStamp(0.4780809619115137);
    msg.setSource(9297U);
    msg.setSourceEntity(55U);
    msg.setDestination(13968U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5141089766268381;

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
    msg.setTimeStamp(0.707978525614742);
    msg.setSource(60320U);
    msg.setSourceEntity(156U);
    msg.setDestination(21526U);
    msg.setDestinationEntity(207U);
    msg.x = 0.0700929916181291;
    msg.y = 0.614195716343603;
    msg.z = 0.9620467426569724;
    msg.phi = 0.7850068068740309;
    msg.theta = 0.5917652081104563;
    msg.psi = 0.8749675079163598;
    msg.p = 0.21952374828256216;
    msg.q = 0.7133412598327461;
    msg.r = 0.5697699967309768;
    msg.u = 0.7649745302269758;
    msg.v = 0.6510982761142224;
    msg.w = 0.5260825320424922;
    msg.bias_psi = 0.9188618470704908;
    msg.bias_r = 0.9800853469549313;

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
    msg.setTimeStamp(0.11914727543839332);
    msg.setSource(57473U);
    msg.setSourceEntity(117U);
    msg.setDestination(63895U);
    msg.setDestinationEntity(10U);
    msg.x = 0.40187851692798493;
    msg.y = 0.7855659649167014;
    msg.z = 0.7387010416555099;
    msg.phi = 0.7025626930049824;
    msg.theta = 0.3647160618487558;
    msg.psi = 0.31088131055036816;
    msg.p = 0.14377881817415805;
    msg.q = 0.1572353404143333;
    msg.r = 0.06759030210459882;
    msg.u = 0.938148705573602;
    msg.v = 0.09993939040658029;
    msg.w = 0.13772871023085753;
    msg.bias_psi = 0.039164674297699986;
    msg.bias_r = 0.6538294041554319;

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
    msg.setTimeStamp(0.9868392660419457);
    msg.setSource(2613U);
    msg.setSourceEntity(103U);
    msg.setDestination(52901U);
    msg.setDestinationEntity(80U);
    msg.x = 0.9971379521145762;
    msg.y = 0.0730098358617477;
    msg.z = 0.38853222042655855;
    msg.phi = 0.7526118576224348;
    msg.theta = 0.970042163262083;
    msg.psi = 0.6288077709379676;
    msg.p = 0.37870436468948765;
    msg.q = 0.7846433898059327;
    msg.r = 0.2740698229556269;
    msg.u = 0.4276383065295396;
    msg.v = 0.5653383966629015;
    msg.w = 0.860344918652521;
    msg.bias_psi = 0.24581355116691428;
    msg.bias_r = 0.06551193026129998;

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
    msg.setTimeStamp(0.6239008024187656);
    msg.setSource(9553U);
    msg.setSourceEntity(10U);
    msg.setDestination(1455U);
    msg.setDestinationEntity(16U);
    msg.bias_psi = 0.0523027988748469;
    msg.bias_r = 0.3208656238888641;
    msg.cog = 0.09253229809288943;
    msg.cyaw = 0.20141654712938561;
    msg.lbl_rej_level = 0.7887836649494788;
    msg.gps_rej_level = 0.5908818117086158;
    msg.custom_x = 0.5684022052556119;
    msg.custom_y = 0.011630762827984475;
    msg.custom_z = 0.6406039186704443;

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
    msg.setTimeStamp(0.8393953510169329);
    msg.setSource(33274U);
    msg.setSourceEntity(138U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(227U);
    msg.bias_psi = 0.7487122598397032;
    msg.bias_r = 0.5100523551741839;
    msg.cog = 0.20485033820554654;
    msg.cyaw = 0.629838845178566;
    msg.lbl_rej_level = 0.7945228574622933;
    msg.gps_rej_level = 0.926478655561066;
    msg.custom_x = 0.2554836993504107;
    msg.custom_y = 0.44303775010636115;
    msg.custom_z = 0.30155468737733415;

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
    msg.setTimeStamp(0.8206860064297168);
    msg.setSource(21704U);
    msg.setSourceEntity(197U);
    msg.setDestination(58905U);
    msg.setDestinationEntity(19U);
    msg.bias_psi = 0.7633240357280296;
    msg.bias_r = 0.26986222772952506;
    msg.cog = 0.3028861658381654;
    msg.cyaw = 0.12229094891902403;
    msg.lbl_rej_level = 0.5055659990779724;
    msg.gps_rej_level = 0.06987074463003184;
    msg.custom_x = 0.686641726153091;
    msg.custom_y = 0.8274204581836535;
    msg.custom_z = 0.6405857390106415;

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
    msg.setTimeStamp(0.07211184451075736);
    msg.setSource(61216U);
    msg.setSourceEntity(103U);
    msg.setDestination(61384U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.911782817955798;
    msg.reason = 248U;

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
    msg.setTimeStamp(0.6638203288029063);
    msg.setSource(25489U);
    msg.setSourceEntity(76U);
    msg.setDestination(26165U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.9262590694558857;
    msg.reason = 145U;

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
    msg.setTimeStamp(0.3057192777496597);
    msg.setSource(31723U);
    msg.setSourceEntity(218U);
    msg.setDestination(17339U);
    msg.setDestinationEntity(143U);
    msg.utc_time = 0.18210141937154378;
    msg.reason = 155U;

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
    msg.setTimeStamp(0.6762495122117115);
    msg.setSource(39806U);
    msg.setSourceEntity(76U);
    msg.setDestination(57865U);
    msg.setDestinationEntity(246U);
    msg.id = 77U;
    msg.range = 0.6199196264272355;
    msg.acceptance = 12U;

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
    msg.setTimeStamp(0.9571198442786747);
    msg.setSource(14605U);
    msg.setSourceEntity(77U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(215U);
    msg.id = 210U;
    msg.range = 0.929209244355029;
    msg.acceptance = 211U;

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
    msg.setTimeStamp(0.9756549376560157);
    msg.setSource(37726U);
    msg.setSourceEntity(153U);
    msg.setDestination(55793U);
    msg.setDestinationEntity(161U);
    msg.id = 228U;
    msg.range = 0.38433340670460303;
    msg.acceptance = 244U;

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
    msg.setTimeStamp(0.8809373073608867);
    msg.setSource(42567U);
    msg.setSourceEntity(238U);
    msg.setDestination(23961U);
    msg.setDestinationEntity(65U);
    msg.type = 174U;
    msg.reason = 240U;
    msg.value = 0.8210796952721044;
    msg.timestep = 0.6627776699931738;

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
    msg.setTimeStamp(0.9186862429917558);
    msg.setSource(34780U);
    msg.setSourceEntity(215U);
    msg.setDestination(37031U);
    msg.setDestinationEntity(213U);
    msg.type = 45U;
    msg.reason = 28U;
    msg.value = 0.3588147196496094;
    msg.timestep = 0.5747694555748226;

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
    msg.setTimeStamp(0.37109720616299424);
    msg.setSource(26467U);
    msg.setSourceEntity(59U);
    msg.setDestination(18593U);
    msg.setDestinationEntity(65U);
    msg.type = 156U;
    msg.reason = 97U;
    msg.value = 0.7273942099907033;
    msg.timestep = 0.6981835665984889;

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
    msg.setTimeStamp(0.15883110389977295);
    msg.setSource(13097U);
    msg.setSourceEntity(115U);
    msg.setDestination(17604U);
    msg.setDestinationEntity(147U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WFNPQYBYFXHRSKTJRSAMZVPXGZOTDPSHEOREKBTPLZBHZ");
    tmp_msg_0.lat = 0.404726678264674;
    tmp_msg_0.lon = 0.42897830230523404;
    tmp_msg_0.depth = 0.21579121987325078;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 199U;
    tmp_msg_0.transponder_delay = 121U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18453908081478076;
    msg.y = 0.3769702514554397;
    msg.var_x = 0.47984946789292526;
    msg.var_y = 0.5612468223558912;
    msg.distance = 0.7117629263040026;

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
    msg.setTimeStamp(0.3983487691097818);
    msg.setSource(56478U);
    msg.setSourceEntity(40U);
    msg.setDestination(37749U);
    msg.setDestinationEntity(237U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BCKFKERDFQOCYIYODBBPQTAOWZXYZJDSUWPVUKAOLFZPQXOZCZZRVPEFHHKVERLWKJAENNVGHSPCPPCVJIWUQSYTLVFRZG");
    tmp_msg_0.lat = 0.38213324229583157;
    tmp_msg_0.lon = 0.8070964400365481;
    tmp_msg_0.depth = 0.5987908764135184;
    tmp_msg_0.query_channel = 25U;
    tmp_msg_0.reply_channel = 22U;
    tmp_msg_0.transponder_delay = 211U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.11252779143446123;
    msg.y = 0.341912393883107;
    msg.var_x = 0.167722456662181;
    msg.var_y = 0.951537281618981;
    msg.distance = 0.7679327653877261;

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
    msg.setTimeStamp(0.877106484684339);
    msg.setSource(4491U);
    msg.setSourceEntity(90U);
    msg.setDestination(37750U);
    msg.setDestinationEntity(49U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NAZSYRPVNCRVIMOXLJVUCEOQIZBJJLQYNUZFLFJPDEOWGIPAVSSMRMHZOKYKAQAQFMWAPJHQGEKVHDMGUMRIQLFQUJZGAYRCIL");
    tmp_msg_0.lat = 0.2600531672889851;
    tmp_msg_0.lon = 0.7538663819616619;
    tmp_msg_0.depth = 0.9418783747895823;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 224U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7284956589143926;
    msg.y = 0.5342583456901441;
    msg.var_x = 0.6870898619494893;
    msg.var_y = 0.8404427882615091;
    msg.distance = 0.6627736321368128;

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
    msg.setTimeStamp(0.8543018344635479);
    msg.setSource(18774U);
    msg.setSourceEntity(24U);
    msg.setDestination(37877U);
    msg.setDestinationEntity(194U);
    msg.state = 252U;

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
    msg.setTimeStamp(0.17850712679293002);
    msg.setSource(13182U);
    msg.setSourceEntity(202U);
    msg.setDestination(40054U);
    msg.setDestinationEntity(29U);
    msg.state = 155U;

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
    msg.setTimeStamp(0.2022225213292944);
    msg.setSource(9603U);
    msg.setSourceEntity(141U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(74U);
    msg.state = 188U;

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
    msg.setTimeStamp(0.9005201521071163);
    msg.setSource(46876U);
    msg.setSourceEntity(252U);
    msg.setDestination(50611U);
    msg.setDestinationEntity(218U);
    msg.x = 0.4496544029936673;
    msg.y = 0.30199163855758804;
    msg.z = 0.7093487392889374;

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
    msg.setTimeStamp(0.26745502650017694);
    msg.setSource(60958U);
    msg.setSourceEntity(3U);
    msg.setDestination(63746U);
    msg.setDestinationEntity(59U);
    msg.x = 0.05270669652058424;
    msg.y = 0.3500754197784687;
    msg.z = 0.4410205652550243;

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
    msg.setTimeStamp(0.4206674023712875);
    msg.setSource(653U);
    msg.setSourceEntity(199U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(37U);
    msg.x = 0.47201705219759393;
    msg.y = 0.6009778521101218;
    msg.z = 0.12228995215800131;

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
    msg.setTimeStamp(0.2843262163472189);
    msg.setSource(57320U);
    msg.setSourceEntity(25U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(200U);
    msg.va = 0.27444265522154;
    msg.aoa = 0.6987770457431618;
    msg.ssa = 0.9621044249575064;

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
    msg.setTimeStamp(0.9640159819109836);
    msg.setSource(4050U);
    msg.setSourceEntity(86U);
    msg.setDestination(179U);
    msg.setDestinationEntity(149U);
    msg.va = 0.42767712704573313;
    msg.aoa = 0.28878620257083454;
    msg.ssa = 0.20372360337243312;

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
    msg.setTimeStamp(0.11491075112888938);
    msg.setSource(8333U);
    msg.setSourceEntity(100U);
    msg.setDestination(58999U);
    msg.setDestinationEntity(178U);
    msg.va = 0.21984979491001178;
    msg.aoa = 0.15188604833588315;
    msg.ssa = 0.11102845185656607;

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
    msg.setTimeStamp(0.22526792272442353);
    msg.setSource(1111U);
    msg.setSourceEntity(91U);
    msg.setDestination(45001U);
    msg.setDestinationEntity(5U);
    msg.value = 0.49367004905594325;

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
    msg.setTimeStamp(0.37904413104498724);
    msg.setSource(33456U);
    msg.setSourceEntity(16U);
    msg.setDestination(2350U);
    msg.setDestinationEntity(62U);
    msg.value = 0.09190545185402188;

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
    msg.setTimeStamp(0.7749018424203445);
    msg.setSource(32171U);
    msg.setSourceEntity(14U);
    msg.setDestination(65039U);
    msg.setDestinationEntity(144U);
    msg.value = 0.4672470128258648;

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
    msg.setTimeStamp(0.5263249150407047);
    msg.setSource(51426U);
    msg.setSourceEntity(240U);
    msg.setDestination(35620U);
    msg.setDestinationEntity(112U);
    msg.value = 0.41257531517371604;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.586869277040688);
    msg.setSource(28407U);
    msg.setSourceEntity(59U);
    msg.setDestination(1804U);
    msg.setDestinationEntity(187U);
    msg.value = 0.37118201637170967;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.7461940046714248);
    msg.setSource(10120U);
    msg.setSourceEntity(139U);
    msg.setDestination(14805U);
    msg.setDestinationEntity(168U);
    msg.value = 0.45671128275845274;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.5937416839676963);
    msg.setSource(64765U);
    msg.setSourceEntity(225U);
    msg.setDestination(56250U);
    msg.setDestinationEntity(210U);
    msg.value = 0.24705075697435142;
    msg.speed_units = 114U;

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
    msg.setTimeStamp(0.3158180589735168);
    msg.setSource(48984U);
    msg.setSourceEntity(194U);
    msg.setDestination(33199U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8281480814104711;
    msg.speed_units = 16U;

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
    msg.setTimeStamp(0.2631857380542537);
    msg.setSource(41540U);
    msg.setSourceEntity(207U);
    msg.setDestination(55172U);
    msg.setDestinationEntity(77U);
    msg.value = 0.6644937492230979;
    msg.speed_units = 65U;

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
    msg.setTimeStamp(0.15879924793787115);
    msg.setSource(9154U);
    msg.setSourceEntity(126U);
    msg.setDestination(30730U);
    msg.setDestinationEntity(159U);
    msg.value = 0.6657415509553525;

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
    msg.setTimeStamp(0.6803885832199335);
    msg.setSource(32535U);
    msg.setSourceEntity(94U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(203U);
    msg.value = 0.7492742904312824;

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
    msg.setTimeStamp(0.9879966171804555);
    msg.setSource(24017U);
    msg.setSourceEntity(210U);
    msg.setDestination(25125U);
    msg.setDestinationEntity(25U);
    msg.value = 0.15949426667812006;

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
    msg.setTimeStamp(0.9297810217937765);
    msg.setSource(30885U);
    msg.setSourceEntity(230U);
    msg.setDestination(8890U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7630007154857951;

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
    msg.setTimeStamp(0.2453287290592705);
    msg.setSource(61295U);
    msg.setSourceEntity(147U);
    msg.setDestination(53001U);
    msg.setDestinationEntity(83U);
    msg.value = 0.5257420273267874;

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
    msg.setTimeStamp(0.837935846224476);
    msg.setSource(10972U);
    msg.setSourceEntity(197U);
    msg.setDestination(41722U);
    msg.setDestinationEntity(54U);
    msg.value = 0.35564720149936135;

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
    msg.setTimeStamp(0.04651936077449048);
    msg.setSource(37702U);
    msg.setSourceEntity(61U);
    msg.setDestination(10366U);
    msg.setDestinationEntity(4U);
    msg.value = 0.850454478289325;

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
    msg.setTimeStamp(0.05375831925307273);
    msg.setSource(49003U);
    msg.setSourceEntity(90U);
    msg.setDestination(17719U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8598896139285718;

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
    msg.setTimeStamp(0.46225941903714896);
    msg.setSource(24791U);
    msg.setSourceEntity(189U);
    msg.setDestination(14965U);
    msg.setDestinationEntity(249U);
    msg.value = 0.7142814744943257;

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
    msg.setTimeStamp(0.7809817775282125);
    msg.setSource(32209U);
    msg.setSourceEntity(58U);
    msg.setDestination(30091U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 1285750563U;
    msg.start_lat = 0.3782236314806763;
    msg.start_lon = 0.13264612665332876;
    msg.start_z = 0.030246823740670892;
    msg.start_z_units = 33U;
    msg.end_lat = 0.7187145375573638;
    msg.end_lon = 0.6006948400470294;
    msg.end_z = 0.2914628178592378;
    msg.end_z_units = 205U;
    msg.speed = 0.31167297121504056;
    msg.speed_units = 190U;
    msg.lradius = 0.7014591825657455;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.04780383611665928);
    msg.setSource(23522U);
    msg.setSourceEntity(201U);
    msg.setDestination(10761U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 3642122767U;
    msg.start_lat = 0.8917958142084936;
    msg.start_lon = 0.12927833500739416;
    msg.start_z = 0.9036639202940201;
    msg.start_z_units = 1U;
    msg.end_lat = 0.03873010608413596;
    msg.end_lon = 0.2994651596803789;
    msg.end_z = 0.5685064617091717;
    msg.end_z_units = 254U;
    msg.speed = 0.3771651362571883;
    msg.speed_units = 174U;
    msg.lradius = 0.4069568766147812;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.1298241963139457);
    msg.setSource(38056U);
    msg.setSourceEntity(48U);
    msg.setDestination(21702U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 1715463893U;
    msg.start_lat = 0.1518453249894336;
    msg.start_lon = 0.35251694694786595;
    msg.start_z = 0.4622146463251303;
    msg.start_z_units = 169U;
    msg.end_lat = 0.25777318361431834;
    msg.end_lon = 0.6455895231439185;
    msg.end_z = 0.12693490222173398;
    msg.end_z_units = 75U;
    msg.speed = 0.8956877334730043;
    msg.speed_units = 200U;
    msg.lradius = 0.5994695702181494;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.5433751538342712);
    msg.setSource(26539U);
    msg.setSourceEntity(138U);
    msg.setDestination(32216U);
    msg.setDestinationEntity(86U);
    msg.x = 0.302156229514817;
    msg.y = 0.024445471102050642;
    msg.z = 0.06388729343664556;
    msg.k = 0.5616986838263844;
    msg.m = 0.023179005271258935;
    msg.n = 0.29693158312692647;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.3671317332252704);
    msg.setSource(37892U);
    msg.setSourceEntity(94U);
    msg.setDestination(11995U);
    msg.setDestinationEntity(30U);
    msg.x = 0.7738689279170169;
    msg.y = 0.575124417071247;
    msg.z = 0.3484273521054445;
    msg.k = 0.9053210671480074;
    msg.m = 0.29658320253285353;
    msg.n = 0.9146843735131843;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.6412609143454399);
    msg.setSource(60275U);
    msg.setSourceEntity(10U);
    msg.setDestination(17680U);
    msg.setDestinationEntity(229U);
    msg.x = 0.18553082111482733;
    msg.y = 0.46621625587029414;
    msg.z = 0.4538418683243226;
    msg.k = 0.18581691024481384;
    msg.m = 0.06875692476270256;
    msg.n = 0.3430460342181981;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.34522365699935686);
    msg.setSource(32225U);
    msg.setSourceEntity(26U);
    msg.setDestination(33048U);
    msg.setDestinationEntity(74U);
    msg.value = 0.9169589409367849;

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
    msg.setTimeStamp(0.41052967291100584);
    msg.setSource(3044U);
    msg.setSourceEntity(136U);
    msg.setDestination(35984U);
    msg.setDestinationEntity(121U);
    msg.value = 0.61673891947947;

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
    msg.setTimeStamp(0.008615299039777091);
    msg.setSource(10138U);
    msg.setSourceEntity(183U);
    msg.setDestination(3865U);
    msg.setDestinationEntity(162U);
    msg.value = 0.9684847974047873;

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
    msg.setTimeStamp(0.7467469405001841);
    msg.setSource(17998U);
    msg.setSourceEntity(235U);
    msg.setDestination(19965U);
    msg.setDestinationEntity(113U);
    msg.u = 0.8242202581489202;
    msg.v = 0.33538153957356376;
    msg.w = 0.07632402749727796;
    msg.p = 0.806031880088122;
    msg.q = 0.9564951714851451;
    msg.r = 0.26483531395225657;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.21242738567554298);
    msg.setSource(51763U);
    msg.setSourceEntity(58U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(12U);
    msg.u = 0.8713388468904331;
    msg.v = 0.39971355848020407;
    msg.w = 0.6755079121381128;
    msg.p = 0.9212592636420509;
    msg.q = 0.642566629767756;
    msg.r = 0.2382644329453496;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.33489382855172356);
    msg.setSource(42160U);
    msg.setSourceEntity(144U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(103U);
    msg.u = 0.15615872268512065;
    msg.v = 0.4456367794025802;
    msg.w = 0.19612901824914186;
    msg.p = 0.9495459953146603;
    msg.q = 0.017782053575066348;
    msg.r = 0.8449882183191236;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.5876961905515875);
    msg.setSource(26088U);
    msg.setSourceEntity(105U);
    msg.setDestination(55517U);
    msg.setDestinationEntity(16U);
    msg.path_ref = 801016011U;
    msg.start_lat = 0.6201058610750619;
    msg.start_lon = 0.43783446872957665;
    msg.start_z = 0.9039349700883031;
    msg.start_z_units = 234U;
    msg.end_lat = 0.46173685061588665;
    msg.end_lon = 0.2998936710011447;
    msg.end_z = 0.28765004475957934;
    msg.end_z_units = 129U;
    msg.lradius = 0.43092276918691885;
    msg.flags = 20U;
    msg.x = 0.6555388991619969;
    msg.y = 0.43035353917299524;
    msg.z = 0.831432557818617;
    msg.vx = 0.42439468118595525;
    msg.vy = 0.9172942491546718;
    msg.vz = 0.22598018612186876;
    msg.course_error = 0.5104001687631771;
    msg.eta = 3058U;

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
    msg.setTimeStamp(0.09416623821569492);
    msg.setSource(24720U);
    msg.setSourceEntity(32U);
    msg.setDestination(58311U);
    msg.setDestinationEntity(130U);
    msg.path_ref = 320875429U;
    msg.start_lat = 0.010025082755595216;
    msg.start_lon = 0.1527007498534516;
    msg.start_z = 0.01537439775088112;
    msg.start_z_units = 66U;
    msg.end_lat = 0.45401112563184465;
    msg.end_lon = 0.856992097234259;
    msg.end_z = 0.6589792015421319;
    msg.end_z_units = 150U;
    msg.lradius = 0.4937109137369148;
    msg.flags = 18U;
    msg.x = 0.4781824239755236;
    msg.y = 0.7680193937226931;
    msg.z = 0.18603097385681022;
    msg.vx = 0.39505237293054196;
    msg.vy = 0.7450832347901787;
    msg.vz = 0.9747149241729771;
    msg.course_error = 0.9858110612570254;
    msg.eta = 39946U;

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
    msg.setTimeStamp(0.9268008801825972);
    msg.setSource(1117U);
    msg.setSourceEntity(121U);
    msg.setDestination(11300U);
    msg.setDestinationEntity(125U);
    msg.path_ref = 1360965532U;
    msg.start_lat = 0.7045729446546541;
    msg.start_lon = 0.02088729771135578;
    msg.start_z = 0.5809956305649995;
    msg.start_z_units = 158U;
    msg.end_lat = 0.32476797160357873;
    msg.end_lon = 0.6316370446289349;
    msg.end_z = 0.21057862331133503;
    msg.end_z_units = 149U;
    msg.lradius = 0.21711748984834178;
    msg.flags = 42U;
    msg.x = 0.6382975907756366;
    msg.y = 0.31764822154842065;
    msg.z = 0.08275172418949639;
    msg.vx = 0.6040520907541458;
    msg.vy = 0.020668996172870213;
    msg.vz = 0.6288447074168974;
    msg.course_error = 0.534685592232268;
    msg.eta = 57790U;

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
    msg.setTimeStamp(0.12815335821632012);
    msg.setSource(33579U);
    msg.setSourceEntity(10U);
    msg.setDestination(23097U);
    msg.setDestinationEntity(180U);
    msg.k = 0.6241490859348525;
    msg.m = 0.38751474032876876;
    msg.n = 0.4869772998683879;

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
    msg.setTimeStamp(0.7447572767640336);
    msg.setSource(64060U);
    msg.setSourceEntity(68U);
    msg.setDestination(12027U);
    msg.setDestinationEntity(215U);
    msg.k = 0.43086599328114616;
    msg.m = 0.6375096408704024;
    msg.n = 0.2548385875363173;

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
    msg.setTimeStamp(0.3040112573314193);
    msg.setSource(60512U);
    msg.setSourceEntity(137U);
    msg.setDestination(37615U);
    msg.setDestinationEntity(46U);
    msg.k = 0.002051646814940744;
    msg.m = 0.296336391974251;
    msg.n = 0.13833724744961862;

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
    msg.setTimeStamp(0.3898883481838479);
    msg.setSource(24076U);
    msg.setSourceEntity(121U);
    msg.setDestination(61297U);
    msg.setDestinationEntity(105U);
    msg.p = 0.738293999092376;
    msg.i = 0.18794427587094653;
    msg.d = 0.9811395562131158;
    msg.a = 0.12372195284074894;

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
    msg.setTimeStamp(0.2686622688434853);
    msg.setSource(26204U);
    msg.setSourceEntity(188U);
    msg.setDestination(35614U);
    msg.setDestinationEntity(249U);
    msg.p = 0.6108978451873442;
    msg.i = 0.5122045095581247;
    msg.d = 0.7608613358768085;
    msg.a = 0.6539221037590426;

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
    msg.setTimeStamp(0.9747873507933957);
    msg.setSource(45159U);
    msg.setSourceEntity(187U);
    msg.setDestination(21413U);
    msg.setDestinationEntity(202U);
    msg.p = 0.8810363996253298;
    msg.i = 0.39611013205012646;
    msg.d = 0.9553957396343354;
    msg.a = 0.9988232901259493;

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
    msg.setTimeStamp(0.03634537106169289);
    msg.setSource(15802U);
    msg.setSourceEntity(77U);
    msg.setDestination(54645U);
    msg.setDestinationEntity(188U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.2396948360906056);
    msg.setSource(56192U);
    msg.setSourceEntity(122U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(157U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.7264193970457795);
    msg.setSource(50968U);
    msg.setSourceEntity(56U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(19U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.5860556964446911);
    msg.setSource(36076U);
    msg.setSourceEntity(115U);
    msg.setDestination(28854U);
    msg.setDestinationEntity(127U);
    msg.x = 0.3376816832361661;
    msg.y = 0.4204454098281949;
    msg.z = 0.8841118372750452;
    msg.vx = 0.6723022616443125;
    msg.vy = 0.5093293988710151;
    msg.vz = 0.7025732566479127;
    msg.ax = 0.1470726803895852;
    msg.ay = 0.11901930570657515;
    msg.az = 0.5762598116010211;
    msg.flags = 62706U;

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
    msg.setTimeStamp(0.635567447376399);
    msg.setSource(31489U);
    msg.setSourceEntity(201U);
    msg.setDestination(24345U);
    msg.setDestinationEntity(140U);
    msg.x = 0.5986983552840027;
    msg.y = 0.3232499370240305;
    msg.z = 0.5194864788503488;
    msg.vx = 0.6126997968126424;
    msg.vy = 0.25494801774013476;
    msg.vz = 0.09380692833700932;
    msg.ax = 0.36179116951673074;
    msg.ay = 0.07745173473867817;
    msg.az = 0.7276961163954565;
    msg.flags = 59529U;

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
    msg.setTimeStamp(0.964015793321447);
    msg.setSource(56416U);
    msg.setSourceEntity(61U);
    msg.setDestination(19515U);
    msg.setDestinationEntity(242U);
    msg.x = 0.38166995837991646;
    msg.y = 0.5143169902010982;
    msg.z = 0.7917473116363599;
    msg.vx = 0.9399878871776702;
    msg.vy = 0.38129519205693563;
    msg.vz = 0.12298733055709954;
    msg.ax = 0.3828880316829869;
    msg.ay = 0.9580457469396482;
    msg.az = 0.9470544507666527;
    msg.flags = 4951U;

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
    msg.setTimeStamp(0.3696195196530041);
    msg.setSource(29760U);
    msg.setSourceEntity(45U);
    msg.setDestination(51434U);
    msg.setDestinationEntity(2U);
    msg.value = 0.08941292678469315;

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
    msg.setTimeStamp(0.8002625045345885);
    msg.setSource(8897U);
    msg.setSourceEntity(51U);
    msg.setDestination(43295U);
    msg.setDestinationEntity(15U);
    msg.value = 0.9329820996594201;

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
    msg.setTimeStamp(0.7922881549482611);
    msg.setSource(39551U);
    msg.setSourceEntity(234U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(68U);
    msg.value = 0.1263232203662935;

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
    msg.setTimeStamp(0.7953125810449159);
    msg.setSource(14623U);
    msg.setSourceEntity(102U);
    msg.setDestination(49733U);
    msg.setDestinationEntity(165U);
    msg.timeout = 51354U;
    msg.lat = 0.18876141446674388;
    msg.lon = 0.20492691055827683;
    msg.z = 0.376439553923384;
    msg.z_units = 249U;
    msg.speed = 0.6543095648316374;
    msg.speed_units = 17U;
    msg.roll = 0.8787566523616248;
    msg.pitch = 0.20518385861265542;
    msg.yaw = 0.9338054938278603;
    msg.custom.assign("OUZHKXSSQMLZVUGRUSCRZFVWCOGOWBAMBIQICLWTLCDDYKAFWBXGILPBZUIDXJINXXJVUVVTFRDGPNCDOKPWMPSBYNFFAALRDSXFMMZQTTNCCGGXMRTRHJZEYMESWJTQNXSHEDLSUHFBGTHIIUTMNJMLNFVFVEJEWYUMIETHDKKZEFBIXPBRQNEDYSPEQBNOKQYRKUSCYKLOAGPEZHGJRNWBYAQY");

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
    msg.setTimeStamp(0.2195843539231056);
    msg.setSource(32590U);
    msg.setSourceEntity(41U);
    msg.setDestination(7246U);
    msg.setDestinationEntity(243U);
    msg.timeout = 65033U;
    msg.lat = 0.1795110597621552;
    msg.lon = 0.5078752206283621;
    msg.z = 0.5058190055037971;
    msg.z_units = 53U;
    msg.speed = 0.6728203325051062;
    msg.speed_units = 75U;
    msg.roll = 0.30694021215366973;
    msg.pitch = 0.6943525831740972;
    msg.yaw = 0.6889016882215465;
    msg.custom.assign("PJJLOSBPDMNQZOYHCVXOHBVUZZYKMQXJMBAYPBBQXQVKMKZKTZOVTTJYQQNUDFQCUGHKMTHGLTABTCSPOFJZNXSGZLLKRRPYICISQYXRHKXXSJKILCFGUVGORNUGFEEFUIWIVNMETIFCHROSYDWJFJRZKAWYXSCDVIDLEQ");

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
    msg.setTimeStamp(0.6596021960454732);
    msg.setSource(50870U);
    msg.setSourceEntity(191U);
    msg.setDestination(38942U);
    msg.setDestinationEntity(183U);
    msg.timeout = 48629U;
    msg.lat = 0.4213215156566571;
    msg.lon = 0.23077803930501795;
    msg.z = 0.28414843999893646;
    msg.z_units = 109U;
    msg.speed = 0.07090263203384795;
    msg.speed_units = 22U;
    msg.roll = 0.6715936291289087;
    msg.pitch = 0.9233886687475512;
    msg.yaw = 0.42524258644876667;
    msg.custom.assign("DYPSLCNOVZYWSNHXVURACDMCVIZXGBPTE");

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
    msg.setTimeStamp(0.9476099296575932);
    msg.setSource(20400U);
    msg.setSourceEntity(104U);
    msg.setDestination(20739U);
    msg.setDestinationEntity(57U);
    msg.timeout = 21294U;
    msg.lat = 0.31377557640795783;
    msg.lon = 0.489742934202661;
    msg.z = 0.45353302399296525;
    msg.z_units = 175U;
    msg.speed = 0.1908868004994766;
    msg.speed_units = 50U;
    msg.duration = 7772U;
    msg.radius = 0.7096636312664336;
    msg.flags = 168U;
    msg.custom.assign("DFCBAITNRZSQZPXZOVMOXWVDPTXHSGHZXOIZCWNXPNBLHDLYMKJVLWHQBDHJHZHGIUDALWWAEZEOVLJSJNMGAJKIQRNVXBYQQIYPNJFCICVJYRFGRPTMLUBKPMIGCAQYMEZLSMKVKPTTKDNKDL");

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
    msg.setTimeStamp(0.4369099539186009);
    msg.setSource(4912U);
    msg.setSourceEntity(50U);
    msg.setDestination(7067U);
    msg.setDestinationEntity(123U);
    msg.timeout = 35117U;
    msg.lat = 0.20762417082378826;
    msg.lon = 0.7797247486484498;
    msg.z = 0.046538368163351995;
    msg.z_units = 85U;
    msg.speed = 0.796181077939137;
    msg.speed_units = 142U;
    msg.duration = 21758U;
    msg.radius = 0.37068795851137704;
    msg.flags = 90U;
    msg.custom.assign("IDCPFBURHCVE");

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
    msg.setTimeStamp(0.857857956802828);
    msg.setSource(9408U);
    msg.setSourceEntity(29U);
    msg.setDestination(35495U);
    msg.setDestinationEntity(163U);
    msg.timeout = 59295U;
    msg.lat = 0.11617813038698;
    msg.lon = 0.15116523103070845;
    msg.z = 0.4835606705113792;
    msg.z_units = 218U;
    msg.speed = 0.680406203840134;
    msg.speed_units = 86U;
    msg.duration = 25592U;
    msg.radius = 0.8001813626112756;
    msg.flags = 108U;
    msg.custom.assign("HGWZGNNVIRPQBVAPFHWVOXPYMJYAONAJMQWLKYTCDNPMRVOAIMWJYQJTTHYZVEBLDTXHLTMNQLJQRQKTOIUEFSIKJSQVDJJWBMDUWWRHVQBRXUXSE");

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
    msg.setTimeStamp(0.8536124496295555);
    msg.setSource(46180U);
    msg.setSourceEntity(169U);
    msg.setDestination(61318U);
    msg.setDestinationEntity(229U);
    msg.custom.assign("IPCUSEDGFCPZAUVAIWCOQREIYGSCRCKRJEXMTWHEQNUMCOYVPTZGTVXJCQPTSKUPOMHIBOSBSJHMJAZCYIAGYYMEDDLWNKDQTMLHXGMVISCZUYNCSXVDKDBMRTJTOFKUOAFINDJJAZB");

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
    msg.setTimeStamp(0.011457882658239549);
    msg.setSource(57745U);
    msg.setSourceEntity(252U);
    msg.setDestination(30761U);
    msg.setDestinationEntity(73U);
    msg.custom.assign("RREWLBPSUDPEQYXLQAGYFVLAMPOJMZJBTQBNUUSPDKUUJZOEPWFIDXTZTKFNCNUFRSOWQZUPKTTRIKZAXHSV");

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
    msg.setTimeStamp(0.30217691981579287);
    msg.setSource(8110U);
    msg.setSourceEntity(193U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(196U);
    msg.custom.assign("DSSUTEUFJHNGSHIOVLZHKHFEIZKTJVHYUVNMOZXIZBLCKXXCRGZMDOPSQCQCNWDUGGHFEAKZGXTIHGIJNMDNPFMGUMRLIPRQWNUIBSYAMBXYVOPLJCIQOWWRDAGSLATTSYIUOHC");

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
    msg.setTimeStamp(0.7006302026864574);
    msg.setSource(52925U);
    msg.setSourceEntity(97U);
    msg.setDestination(34424U);
    msg.setDestinationEntity(254U);
    msg.timeout = 35055U;
    msg.lat = 0.9281945716083636;
    msg.lon = 0.2741786038826509;
    msg.z = 0.5328348512910481;
    msg.z_units = 71U;
    msg.duration = 62128U;
    msg.speed = 0.6934877302903557;
    msg.speed_units = 85U;
    msg.type = 172U;
    msg.radius = 0.39958824817734273;
    msg.length = 0.979473915999767;
    msg.bearing = 0.10252889440804436;
    msg.direction = 70U;
    msg.custom.assign("NEIIYQGPEWBBATSKXJCXVTVTUUUEUWXYRGJYTQFGIPCDSNKIPEFSMMABKVQSPCBCWECSFLWXIGJORJTAIHYDCTMGKGCNFTDYWZJLRWKF");

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
    msg.setTimeStamp(0.39302479672888835);
    msg.setSource(63455U);
    msg.setSourceEntity(205U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(61U);
    msg.timeout = 43302U;
    msg.lat = 0.591607819345469;
    msg.lon = 0.9468910126243091;
    msg.z = 0.971594403261719;
    msg.z_units = 48U;
    msg.duration = 52667U;
    msg.speed = 0.4332471181769739;
    msg.speed_units = 214U;
    msg.type = 253U;
    msg.radius = 0.7705550188403962;
    msg.length = 0.9198971891977495;
    msg.bearing = 0.6849813605489089;
    msg.direction = 123U;
    msg.custom.assign("ZHNADAGXFHMJXLNHTNEGLWPOPWXFXJYVJWDKLGRBCMZNMJVMHPJRKPQAUQCWUBSFTCDXHWYSSJBZWTSH");

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
    msg.setTimeStamp(0.07022501176178564);
    msg.setSource(30275U);
    msg.setSourceEntity(86U);
    msg.setDestination(55830U);
    msg.setDestinationEntity(17U);
    msg.timeout = 7722U;
    msg.lat = 0.7574689979224537;
    msg.lon = 0.5870784360416145;
    msg.z = 0.9845823346419205;
    msg.z_units = 88U;
    msg.duration = 50732U;
    msg.speed = 0.9288286192112798;
    msg.speed_units = 225U;
    msg.type = 72U;
    msg.radius = 0.303264527823781;
    msg.length = 0.6038923333266355;
    msg.bearing = 0.06357159832880643;
    msg.direction = 179U;
    msg.custom.assign("POHJYZDHTUJZXSYQVBQUROFCGABPKWHLWMGJFFNUHMFLAVXLLRFEGUDQNOQMJCLTHTNSVRHAZAOKWFIFBSLCBSIVPVWIOATYEEMZDCAXKLVRPTOYPWMTSLMGCSJKUPHJNFAVNIOCJUQVKAZGYVBZDIDJMDUTDSQHWPNEUNKEXYXQZGHRGDYPKVYEGAFCSNKPJUKRMIUBBXTWCWBMX");

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
    msg.setTimeStamp(0.8098471022992857);
    msg.setSource(27393U);
    msg.setSourceEntity(126U);
    msg.setDestination(4961U);
    msg.setDestinationEntity(225U);
    msg.duration = 64647U;
    msg.custom.assign("ZEYUCAUDVRTNWTSKOJNQWMXZBNHGDBEFFWFAFRZMJSVRCPUVIVMBGBXXMVKBFIKAQRWQWTFYNXSGQMEEAZJYDLGNPESTIURODKETSZCHCXJQUILYHMMYPUUAPPMWNVHQGDMDCAKICDHTMQVOUWRZSXYLTBWJPOLCUBGIXFZWIOJNNXOWAFAJPKRQZKHTGEERYLSQKPCAIOFURELVVSKQDBJCHIGYDEJYHLTNHKXATZBSRLV");

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
    msg.setTimeStamp(0.9870837820391737);
    msg.setSource(26646U);
    msg.setSourceEntity(114U);
    msg.setDestination(52795U);
    msg.setDestinationEntity(191U);
    msg.duration = 21524U;
    msg.custom.assign("UEZDGWSSPLQMQFXSCVCQVTXZWBBRWYYRXJEMILJBMITLTSNDJQNYHHJRUUUWRXIJJDKICVTIBTFZUTIFMVANVNSASZKVXLFLOKOZGAJNAICBOGPPDPZEAQPTREBEUQZYODEUXFYXGNOGWVAGGOQRNCHCKQGCZESYLJPHAHBKHXKUIIXFMZBOQHKCZFKWYQHEDRVRAMFLETSWPJADVCDFWMTPSVMELAGY");

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
    msg.setTimeStamp(0.21063108147569354);
    msg.setSource(25879U);
    msg.setSourceEntity(40U);
    msg.setDestination(21680U);
    msg.setDestinationEntity(113U);
    msg.duration = 56504U;
    msg.custom.assign("NCSDTFQACJNWIVVTIGZEKTLWPDYFIYRZAXREAESVUKDQCMXYMZXVVMABBPJGTJDXLUIBNXFISSZVJWAEHWODSZWCTTYQZURBFYHQQJVYIJNXFBONSEOGPXORTODYEOOCAXYHYJKLRKKWHJBEFUPMAZEBYMUEQLSMRGDSIWAGUKQMFXKZPPLRCLAJHTFGLGONNUCPRUSNGEDAKBLQRMZNBPPKFISZCTVHINOUDGHGVIRFVWU");

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
    msg.setTimeStamp(0.35302173480410604);
    msg.setSource(46544U);
    msg.setSourceEntity(202U);
    msg.setDestination(24653U);
    msg.setDestinationEntity(70U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.27230708409244087;
    msg.control.set(tmp_msg_0);
    msg.duration = 5309U;
    msg.custom.assign("ZRAHAABJQGGUDMJVESZEEXGGMKDYPFTKEXOHBRGCUOOFQGZMZVCPCPAIODYEJBIYKUFWRHAQIQMSDHDTPZKMZTJBNUONKNUOTFZNWNRHBAWNDWLVCTLUHSEDSKCFKZYKALDYIGBLHGPJTTNLQWYHVDNVYOFUNEPXA");

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
    msg.setTimeStamp(0.7071411920432488);
    msg.setSource(55073U);
    msg.setSourceEntity(12U);
    msg.setDestination(61683U);
    msg.setDestinationEntity(206U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.01325517178071145;
    tmp_msg_0.speed_units = 183U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11468U;
    msg.custom.assign("ZHALHFBTQRUSSHXFFWAQPFAFMLJIKMCQTJIOMGFKWAPILMVGIVUYPLYKDVTGNNJNHWQSJFDJZEDKYJDSHABRHUHOCOZXPLWPVNBKGSNSUMLZYEYYUEXQFEITWNGSGGISPEAZKMJNCQWKDZYUMOQPBCUOXHCLRJCDWEOVAQRDIPBQSXMZTOVKTYCLVBRWALIQDVGCXETPERRRHXATYIDBNRXZOPUZYVEOCGVXZFBKTR");

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
    msg.setTimeStamp(0.8485572957505191);
    msg.setSource(29654U);
    msg.setSourceEntity(26U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(16U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.316276156707188;
    msg.control.set(tmp_msg_0);
    msg.duration = 53992U;
    msg.custom.assign("EXWDWTIWXFPGPPGIOEAEKVHFDXPOEBADSQPUVCUYFIGGDRBLPCDQYIFJKNMKMXEELZIEZDVTBNWCDYPGHVCCKZVHTRSXVTOQOGXJHGRZLXLWKITJTONOINVRMOYMKUBOLYRCYRYCEUCCUQAJNQLQZMZWJBJO");

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
    msg.setTimeStamp(0.6274552546442547);
    msg.setSource(50885U);
    msg.setSourceEntity(160U);
    msg.setDestination(39778U);
    msg.setDestinationEntity(28U);
    msg.timeout = 997U;
    msg.lat = 0.5364344290589828;
    msg.lon = 0.5033015028658014;
    msg.z = 0.6151334433203198;
    msg.z_units = 94U;
    msg.speed = 0.6723674527334005;
    msg.speed_units = 161U;
    msg.bearing = 0.8912935207657886;
    msg.cross_angle = 0.19740839475431748;
    msg.width = 0.6704975508297187;
    msg.length = 0.46091566523568817;
    msg.hstep = 0.44911634579396875;
    msg.coff = 176U;
    msg.alternation = 100U;
    msg.flags = 96U;
    msg.custom.assign("EWLFPTXCGLRYOOSNHMBYZKLOTBIMVOPNAUFCILKIDOPAQGZVTARGSIVKSLWQHWJVXDFHTRCFHOUNZIMENZTIOSRBWJYZSRDVBBCSPRYWGNVPXLNFUGBEYGXRUNUEGUFMMDNCTHMRXKSRAXPYJIHDOXIGKSJUYEKCQFDVHOZEBPVFMWGZULTYAQTJEKTXWFDCHNCVWHDHQMLIUECJEKOSSPJAEKBQBVAGBPJDMXANAWZQCJUKXTLQAZQRLDZMFQ");

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
    msg.setTimeStamp(0.45096278279750834);
    msg.setSource(31416U);
    msg.setSourceEntity(25U);
    msg.setDestination(44U);
    msg.setDestinationEntity(225U);
    msg.timeout = 43223U;
    msg.lat = 0.5672646022326071;
    msg.lon = 0.10270889359819546;
    msg.z = 0.9972446315452851;
    msg.z_units = 19U;
    msg.speed = 0.009887656918075471;
    msg.speed_units = 239U;
    msg.bearing = 0.7617907621942749;
    msg.cross_angle = 0.027844392716765642;
    msg.width = 0.09372873059500897;
    msg.length = 0.9066786310106337;
    msg.hstep = 0.8892859170214608;
    msg.coff = 247U;
    msg.alternation = 66U;
    msg.flags = 202U;
    msg.custom.assign("WXILSJCTWTOLXQZPKTGEISPKSGBFDDXFJJOTSBHYGGDZFIAJVNEKH");

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
    msg.setTimeStamp(0.7676152185903248);
    msg.setSource(65511U);
    msg.setSourceEntity(247U);
    msg.setDestination(5416U);
    msg.setDestinationEntity(220U);
    msg.timeout = 35174U;
    msg.lat = 0.17296638701480282;
    msg.lon = 0.17155033431232058;
    msg.z = 0.938597404350366;
    msg.z_units = 252U;
    msg.speed = 0.3842153667430859;
    msg.speed_units = 242U;
    msg.bearing = 0.15230543151330667;
    msg.cross_angle = 0.7400273645037985;
    msg.width = 0.7656681068261065;
    msg.length = 0.2500222878621188;
    msg.hstep = 0.16939437491715081;
    msg.coff = 173U;
    msg.alternation = 1U;
    msg.flags = 134U;
    msg.custom.assign("TTXVLOJZFCEYJKDTPPKMCJIIHQSFINLBBSBDHWRJAYPKAZHDUA");

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
    msg.setTimeStamp(0.7453287327854965);
    msg.setSource(21134U);
    msg.setSourceEntity(130U);
    msg.setDestination(16631U);
    msg.setDestinationEntity(124U);
    msg.timeout = 50649U;
    msg.lat = 0.7999272278858968;
    msg.lon = 0.1045875401265195;
    msg.z = 0.9235564472249962;
    msg.z_units = 195U;
    msg.speed = 0.8668347106695168;
    msg.speed_units = 219U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.30487623877967884;
    tmp_msg_0.y = 0.6042975784346787;
    tmp_msg_0.z = 0.7588103350648503;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BYDLEYZPOJIXTFCCCTENSDINNEAHGIYPHYZXRFCZASJFVFMHBJVIJJIHXXCHDMQEKXWVRGQTKPLBLGDRSSDHZFBJPOFUJAMQYKOORALQUKWVOFNMNVQ");

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
    msg.setTimeStamp(0.8606715679766155);
    msg.setSource(12583U);
    msg.setSourceEntity(200U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(21U);
    msg.timeout = 14057U;
    msg.lat = 0.14964202946795213;
    msg.lon = 0.4378897264098224;
    msg.z = 0.3386583359818224;
    msg.z_units = 17U;
    msg.speed = 0.9404744805934521;
    msg.speed_units = 219U;
    msg.custom.assign("XIAKNOGCEBWODCSMFOFVAZBIYTZCFRKWEDIOVQWTZHBWMOXDPGNGTTYXNUHDMHVZXIYPEWRCDYMPC");

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
    msg.setTimeStamp(0.6453758773266768);
    msg.setSource(38570U);
    msg.setSourceEntity(181U);
    msg.setDestination(28937U);
    msg.setDestinationEntity(70U);
    msg.timeout = 51492U;
    msg.lat = 0.6657587881588914;
    msg.lon = 0.2740643522644105;
    msg.z = 0.5353513042878327;
    msg.z_units = 74U;
    msg.speed = 0.7450757816092698;
    msg.speed_units = 39U;
    msg.custom.assign("DNCPDFMVTWIIOYLHYRXUEGVYLAZIFQDJGKHBAKCFOPMCRXSMMTGZZVTLYHFHRESFVONUIOZBEEFISSDNBXWKIMAZTXGSFOHGGPGBDHYJJJJBJSDKVWMYUEOENVSOJKRARCDAZQLVWUQPGQIVIHEHZNRULYLQHSXBYDUQCSFRTRSKYBWBXWCKYOWWPFJZWEWATZAGHCBPMRCKM");

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
    msg.setTimeStamp(0.3308210337009675);
    msg.setSource(13467U);
    msg.setSourceEntity(171U);
    msg.setDestination(49719U);
    msg.setDestinationEntity(121U);
    msg.x = 0.06937210096072355;
    msg.y = 0.2523553222517164;
    msg.z = 0.3298334168353674;

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
    msg.setTimeStamp(0.4097718147416817);
    msg.setSource(4269U);
    msg.setSourceEntity(173U);
    msg.setDestination(59556U);
    msg.setDestinationEntity(185U);
    msg.x = 0.8718937835260677;
    msg.y = 0.7784096669020313;
    msg.z = 0.4832385831335563;

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
    msg.setTimeStamp(0.3277896366036739);
    msg.setSource(39722U);
    msg.setSourceEntity(112U);
    msg.setDestination(19714U);
    msg.setDestinationEntity(98U);
    msg.x = 0.48687923326677374;
    msg.y = 0.5542147650561294;
    msg.z = 0.08078683279161336;

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
    msg.setTimeStamp(0.9451966429656435);
    msg.setSource(45885U);
    msg.setSourceEntity(171U);
    msg.setDestination(58624U);
    msg.setDestinationEntity(9U);
    msg.timeout = 58862U;
    msg.lat = 0.8903949015043057;
    msg.lon = 0.032178374614595606;
    msg.z = 0.020490065458285023;
    msg.z_units = 104U;
    msg.amplitude = 0.02167998121761716;
    msg.pitch = 0.8702938232393309;
    msg.speed = 0.05073519469116339;
    msg.speed_units = 217U;
    msg.custom.assign("HSNHKQUBOIIYAOBVTHAYWXLUFZJNNEQMDJVEMZATIHCRCVPAVOJLKILPIZFCXXCYQMPZZRSSLSAMZOYOAPTYSCPDCJFREEKEAKRMYUJZILUJSPIRQUWWXGLZUTMLEBQDGEND");

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
    msg.setTimeStamp(0.8761699063491641);
    msg.setSource(6424U);
    msg.setSourceEntity(240U);
    msg.setDestination(45093U);
    msg.setDestinationEntity(121U);
    msg.timeout = 19167U;
    msg.lat = 0.08177229178679002;
    msg.lon = 0.1017806318928357;
    msg.z = 0.6578044800951558;
    msg.z_units = 134U;
    msg.amplitude = 0.6057277555838195;
    msg.pitch = 0.7490915450615712;
    msg.speed = 0.5083654023826012;
    msg.speed_units = 118U;
    msg.custom.assign("AXHKAVUSCKHBLDWQIUVBSIVUSHZABYJO");

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
    msg.setTimeStamp(0.7175171417581535);
    msg.setSource(42600U);
    msg.setSourceEntity(247U);
    msg.setDestination(60285U);
    msg.setDestinationEntity(72U);
    msg.timeout = 15496U;
    msg.lat = 0.39409517504998415;
    msg.lon = 0.17285692280835352;
    msg.z = 0.7745770134530443;
    msg.z_units = 252U;
    msg.amplitude = 0.010193604439906578;
    msg.pitch = 0.05310586933338135;
    msg.speed = 0.19832441440018667;
    msg.speed_units = 233U;
    msg.custom.assign("WHTXCHCTQLFYQNRNWR");

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
    msg.setTimeStamp(0.11491944958534195);
    msg.setSource(30318U);
    msg.setSourceEntity(216U);
    msg.setDestination(234U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.9714184067470092);
    msg.setSource(37621U);
    msg.setSourceEntity(212U);
    msg.setDestination(61037U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.529536695655416);
    msg.setSource(56071U);
    msg.setSourceEntity(91U);
    msg.setDestination(397U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.36859934833629604);
    msg.setSource(30765U);
    msg.setSourceEntity(111U);
    msg.setDestination(44626U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.8624311855538132;
    msg.lon = 0.15822146829828865;
    msg.z = 0.4970395235812324;
    msg.z_units = 132U;
    msg.radius = 0.4114016255484826;
    msg.duration = 25627U;
    msg.speed = 0.6036773792639297;
    msg.speed_units = 144U;
    msg.custom.assign("PYSTCJMYBUUKFPMKUNOJNNVGSQDTJMOBZTGCAPMEEDOFZFLSDRPIJ");

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
    msg.setTimeStamp(0.0581854545049475);
    msg.setSource(36041U);
    msg.setSourceEntity(21U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.3314421515540594;
    msg.lon = 0.5689642727183576;
    msg.z = 0.5693664509072522;
    msg.z_units = 103U;
    msg.radius = 0.509700824037169;
    msg.duration = 44100U;
    msg.speed = 0.03341651406922708;
    msg.speed_units = 65U;
    msg.custom.assign("WXHUWJHNGITRO");

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
    msg.setTimeStamp(0.19172595656209956);
    msg.setSource(3482U);
    msg.setSourceEntity(8U);
    msg.setDestination(50969U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.42341117616837987;
    msg.lon = 0.9226626121672484;
    msg.z = 0.22519341308944452;
    msg.z_units = 52U;
    msg.radius = 0.6655553827116313;
    msg.duration = 10921U;
    msg.speed = 0.7954627046031914;
    msg.speed_units = 225U;
    msg.custom.assign("AJILHTEFSUOZUKZNGHYYIPLUKKRCCNMNGCYBFOWWVKOOARWAFLTSVNXSXDJXFBLUFYANVURHLBJXGSGITPJNVGDWPLERHUBLAHMMEHTDCXMSIFQJMVSPVDJDDGNECYSFWCIPRUXYGAXQQHMQWKEPTNLRTGVABBKKVEFMMSPFWIUZAKXOQNKIIIRQPROIDBETJQCEORVUTZCD");

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
    msg.setTimeStamp(0.46363756047161686);
    msg.setSource(62328U);
    msg.setSourceEntity(146U);
    msg.setDestination(35082U);
    msg.setDestinationEntity(241U);
    msg.timeout = 42042U;
    msg.flags = 140U;
    msg.lat = 0.7931329827757575;
    msg.lon = 0.06612824110011495;
    msg.start_z = 0.17448473970459955;
    msg.start_z_units = 130U;
    msg.end_z = 0.5825530422521835;
    msg.end_z_units = 235U;
    msg.radius = 0.47695337755329614;
    msg.speed = 0.8095645130381204;
    msg.speed_units = 164U;
    msg.custom.assign("AARDWDLEWJOSTXMYQCALAQRTLMPMGURXYBGPULURGDXITNIPCTFBEUJNBVHYZJWHSEXCZXHAWQORPJEIVTUVFVDELZBNVRWNIJIJWBFCCKGMUYJFCCZQWXMBAESXWOVQSXLNAXUMILOCSKUEDSZOQHHKIYAGGZ");

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
    msg.setTimeStamp(0.3203229066647594);
    msg.setSource(35817U);
    msg.setSourceEntity(129U);
    msg.setDestination(25782U);
    msg.setDestinationEntity(85U);
    msg.timeout = 2803U;
    msg.flags = 187U;
    msg.lat = 0.5648183354832186;
    msg.lon = 0.9023276810213735;
    msg.start_z = 0.5604127534758964;
    msg.start_z_units = 143U;
    msg.end_z = 0.6672480807632382;
    msg.end_z_units = 161U;
    msg.radius = 0.3739257692883212;
    msg.speed = 0.7796330312720776;
    msg.speed_units = 37U;
    msg.custom.assign("VREKBJWLDRMBVKSPTURDBYNCNVAQTEJYLLCHIYCQSLBGDRAZIXCJYVDUJNSSZZLKRIKDMPZQRXAHEENHUGUWKAX");

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
    msg.setTimeStamp(0.13738298179531983);
    msg.setSource(31454U);
    msg.setSourceEntity(126U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(40U);
    msg.timeout = 53639U;
    msg.flags = 11U;
    msg.lat = 0.5933182133021387;
    msg.lon = 0.7478352731913335;
    msg.start_z = 0.5877967764906591;
    msg.start_z_units = 56U;
    msg.end_z = 0.6758997025542348;
    msg.end_z_units = 147U;
    msg.radius = 0.12309026735463335;
    msg.speed = 0.5799273271022922;
    msg.speed_units = 209U;
    msg.custom.assign("HFIXPOIPHLPTRKLNTKPFXYZASZNOTBVAQXZKNNDYDIJKEPVDYHCKABGRUOGRCBMVEERCUAGLTWRAWVCEQCTAJZYHDBVTMVQUOXKLMQPQZNIOARCJDLSOMYOYUBCSQDXEGICL");

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
    msg.setTimeStamp(0.23217358786458087);
    msg.setSource(12423U);
    msg.setSourceEntity(33U);
    msg.setDestination(38202U);
    msg.setDestinationEntity(222U);
    msg.timeout = 57993U;
    msg.lat = 0.806761333544445;
    msg.lon = 0.3476150326786651;
    msg.z = 0.05272432629309376;
    msg.z_units = 182U;
    msg.speed = 0.27243915358670834;
    msg.speed_units = 44U;
    msg.custom.assign("BQUVIUSJDTNVIGHGCNKJZTE");

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
    msg.setTimeStamp(0.14880538743580873);
    msg.setSource(11376U);
    msg.setSourceEntity(48U);
    msg.setDestination(56715U);
    msg.setDestinationEntity(179U);
    msg.timeout = 8735U;
    msg.lat = 0.8995812824452938;
    msg.lon = 0.2001773549794421;
    msg.z = 0.006330479743753337;
    msg.z_units = 190U;
    msg.speed = 0.5102176998298434;
    msg.speed_units = 84U;
    msg.custom.assign("ZMGNYTJFPKKTYSLDSPJPZMUVVOOMEBBAZGRYQBIGTYVRMCFHIHGKXYQEOCOIBKOCHYQUVMQJAVZTUGO");

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
    msg.setTimeStamp(0.027746586400376416);
    msg.setSource(61077U);
    msg.setSourceEntity(235U);
    msg.setDestination(14625U);
    msg.setDestinationEntity(240U);
    msg.timeout = 53216U;
    msg.lat = 0.18169064176600558;
    msg.lon = 0.7405511782949052;
    msg.z = 0.9097245954377593;
    msg.z_units = 177U;
    msg.speed = 0.20757167719243463;
    msg.speed_units = 97U;
    msg.custom.assign("MHVMAVTPCFZEYUQKWODGYODPHEZOOPCHHSTRJLLBZKILDYKMEJIUQPMBJKXUSNCPFQMGLRXVBASAHZWJJXFBJYIRLWWVZGMARSDTRDKMIGDSUALIEVZRKFFTZAWXDKSPFQNDWSJVAWOFDKPHPBVRAN");

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
    msg.setTimeStamp(0.462813285310689);
    msg.setSource(32220U);
    msg.setSourceEntity(195U);
    msg.setDestination(27133U);
    msg.setDestinationEntity(16U);
    msg.x = 0.1252686702431388;
    msg.y = 0.8779013420373166;
    msg.z = 0.7301280617509001;
    msg.t = 0.1938633933110776;

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
    msg.setTimeStamp(0.22736176537781894);
    msg.setSource(64893U);
    msg.setSourceEntity(124U);
    msg.setDestination(52685U);
    msg.setDestinationEntity(134U);
    msg.x = 0.5485108933771169;
    msg.y = 0.2851392358545545;
    msg.z = 0.16506306361602363;
    msg.t = 0.9664541797702301;

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
    msg.setTimeStamp(0.6061080783031597);
    msg.setSource(32321U);
    msg.setSourceEntity(5U);
    msg.setDestination(11509U);
    msg.setDestinationEntity(3U);
    msg.x = 0.7888528252280236;
    msg.y = 0.10735197023767595;
    msg.z = 0.5516401409393593;
    msg.t = 0.0636823136130712;

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
    msg.setTimeStamp(0.475863764957581);
    msg.setSource(57290U);
    msg.setSourceEntity(190U);
    msg.setDestination(12525U);
    msg.setDestinationEntity(175U);
    msg.timeout = 42234U;
    msg.name.assign("JYBAWYSIKMCHFKNAHTGKZEEHNZFRXPXBJUIMKLHYNLNZPMZDSDOBEMISAYCHJFDVFUGCGHXCKGMQJCMVJPDCHXPVVVNRCZMKWXKEWGSBYTVB");
    msg.custom.assign("WFHHLLHAZFHSMIRKFYDJSBNEOTRNGWQQNXOYVZELGUPRHDHILHOPQGLMJCRZNFKKMUUGRHTAZQYGMISQIASDOCDZNKZAFOLBNWVVLEGDGWUUWTMWSEMJXDQXEGJTUICO");

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
    msg.setTimeStamp(0.3528312754332371);
    msg.setSource(11362U);
    msg.setSourceEntity(52U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(217U);
    msg.timeout = 24586U;
    msg.name.assign("CKIALBDCMQSFBIFKUXOZPFTYWHYNVCFGLJPZKJAYZFKEGUWTJNPDUQSHBJHKRRIULYXPBYMYOQMOBMZTEDJKVOBEJ");
    msg.custom.assign("XSHSVJOAKWNTOSRQERHWBOICIITNARCBXWDLBGKUMVIUIIYZVSNPJCVOPPMOGAHDFBJARNXYYUNYDRNBUTGGSAKYSQXZMJPOPTZETTFDQLKGTCYHLJOWMAHMWTDVLPZIFSZYQE");

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
    msg.setTimeStamp(0.6162168078458627);
    msg.setSource(27521U);
    msg.setSourceEntity(225U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(13U);
    msg.timeout = 47238U;
    msg.name.assign("AMVLLMETJXPYLSTWYDTGDRGENEDQMHDGGTIMZIRPADUBVVGPTZBNSQKSHUNKHAEPEQAOZDZJFTHOXYCOWPOKWPUFCCYRNVSBVNJIQCKJZSIZFGLCITJOLNJFDNQTZNBYYQQWPVKJUFXXWEIVRFBYPBEIHOUVYAAYBHCOUIMELZCRGOCV");
    msg.custom.assign("FROVXFKFDCHOHFTMAJWGVIPYCAZXIKIBNZWAFDGRMQKYGRVCCWK");

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
    msg.setTimeStamp(0.07347351819770664);
    msg.setSource(3167U);
    msg.setSourceEntity(0U);
    msg.setDestination(13955U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.9700467271767279;
    msg.lon = 0.7158779495944162;
    msg.z = 0.550145870410934;
    msg.z_units = 223U;
    msg.speed = 0.7401067630648241;
    msg.speed_units = 112U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6600U;
    tmp_msg_0.off_x = 0.9898660664668623;
    tmp_msg_0.off_y = 0.9153581149628651;
    tmp_msg_0.off_z = 0.2004708476623872;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.21224686644172164;
    msg.custom.assign("WLDLFSNBUAMXXWUOXVGXBVHRKYLZIXHOWHODPFNIQYBCIRIYZTQFOXXSKRRTSOKGAZAVJTADYJPYYJKJAHDGXZOSPWECHVCQPURKCMNDUERWSQKAMYNKWFIEBLMUGGJGVPXFZLDUGEPALVEQBDZU");

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
    msg.setTimeStamp(0.01351467867686007);
    msg.setSource(63635U);
    msg.setSourceEntity(60U);
    msg.setDestination(44058U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.9782703743942726;
    msg.lon = 0.4131501998788445;
    msg.z = 0.9163157276278787;
    msg.z_units = 166U;
    msg.speed = 0.6234839888909328;
    msg.speed_units = 145U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1734667833954533;
    tmp_msg_0.y = 0.6060327908195345;
    tmp_msg_0.z = 0.48285765555566307;
    tmp_msg_0.t = 0.7652983709033502;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.14412448561464686;
    msg.custom.assign("NNPMMAOGXGTEWBDFXPWZQMWSLUIKUJSERIJYQNJECSUJYINQFRSHIACWYVLGFMAUUUHITVAZVPUDPCVBSTZTYBORZUVLTXFOKAOZYEWVHHHHKBNVFEEPIWXHOOODNYPGLAYZASQGMQ");

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
    msg.setTimeStamp(0.40568701915639094);
    msg.setSource(47595U);
    msg.setSourceEntity(83U);
    msg.setDestination(24360U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.7456093248450355;
    msg.lon = 0.9662977709102397;
    msg.z = 0.25682502683241815;
    msg.z_units = 186U;
    msg.speed = 0.35246922905251565;
    msg.speed_units = 55U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29910U;
    tmp_msg_0.off_x = 0.9249953398569631;
    tmp_msg_0.off_y = 0.21736610278752488;
    tmp_msg_0.off_z = 0.7953349621651431;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.20166747889446457;
    msg.custom.assign("FGKEJLVSBZSFQHVLHP");

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
    msg.setTimeStamp(0.22349925886277722);
    msg.setSource(26502U);
    msg.setSourceEntity(231U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(20U);
    msg.vid = 2174U;
    msg.off_x = 0.9403228477774684;
    msg.off_y = 0.19033249223860527;
    msg.off_z = 0.836269597729883;

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
    msg.setTimeStamp(0.7265374772665779);
    msg.setSource(6997U);
    msg.setSourceEntity(56U);
    msg.setDestination(52604U);
    msg.setDestinationEntity(200U);
    msg.vid = 22839U;
    msg.off_x = 0.26156496841610244;
    msg.off_y = 0.14860716399845186;
    msg.off_z = 0.504722357389915;

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
    msg.setTimeStamp(0.5272935845075137);
    msg.setSource(36890U);
    msg.setSourceEntity(49U);
    msg.setDestination(9541U);
    msg.setDestinationEntity(248U);
    msg.vid = 60912U;
    msg.off_x = 0.7426921011073715;
    msg.off_y = 0.2358142961339107;
    msg.off_z = 0.33916958789871365;

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
    msg.setTimeStamp(0.9428260985873931);
    msg.setSource(40568U);
    msg.setSourceEntity(30U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.17050442835001445);
    msg.setSource(62798U);
    msg.setSourceEntity(48U);
    msg.setDestination(48495U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.7374372157917447);
    msg.setSource(62281U);
    msg.setSourceEntity(184U);
    msg.setDestination(34906U);
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
    msg.setTimeStamp(0.9248549516489503);
    msg.setSource(6801U);
    msg.setSourceEntity(244U);
    msg.setDestination(24776U);
    msg.setDestinationEntity(62U);
    msg.mid = 40212U;

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
    msg.setTimeStamp(0.03025665052306481);
    msg.setSource(42638U);
    msg.setSourceEntity(107U);
    msg.setDestination(14741U);
    msg.setDestinationEntity(237U);
    msg.mid = 39286U;

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
    msg.setTimeStamp(0.24272526010460727);
    msg.setSource(34710U);
    msg.setSourceEntity(148U);
    msg.setDestination(30008U);
    msg.setDestinationEntity(25U);
    msg.mid = 34002U;

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
    msg.setTimeStamp(0.7969112426007687);
    msg.setSource(14985U);
    msg.setSourceEntity(17U);
    msg.setDestination(53943U);
    msg.setDestinationEntity(118U);
    msg.state = 204U;
    msg.eta = 41496U;
    msg.info.assign("BXRWIGAJDSHLDWUFCLYIARGLNHFFSMXVKMUZOIKHDFELPUBYSAWZDFVCWPYKXSTPATKMRNCVGRYIWJZBZRUKUFOIUCPTKJHBLCACEZCQZBUWOKOPFZQTMYNWDOSEEROIRMMLPKQMENXJPXVYVIUQHITNZYVOBDSEUYSFESTBIRHQJCPCBNGWLAWQYIRQVDHMLAJDQOODDPT");

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
    msg.setTimeStamp(0.5853529145984803);
    msg.setSource(21994U);
    msg.setSourceEntity(51U);
    msg.setDestination(57446U);
    msg.setDestinationEntity(12U);
    msg.state = 227U;
    msg.eta = 29643U;
    msg.info.assign("AHMKMADBOHFHJPCKYYQWQCVBTIUGFUSNFIKKZXCISETBYEZQU");

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
    msg.setTimeStamp(0.3258632003104204);
    msg.setSource(13352U);
    msg.setSourceEntity(231U);
    msg.setDestination(19862U);
    msg.setDestinationEntity(194U);
    msg.state = 100U;
    msg.eta = 27827U;
    msg.info.assign("UQPIBQPRVDBPHNAZFBMEEFWPAXDEOLTXMZQMYRATVKRNHNMJSWVUKDZNJHDJATCFFQQCEKXQKUIFDGMWPHCDQPMYWZQCAATSRJGNVTOUOLSDCGLMXSGIRGYFUYTNXLGXRWHKYUEBOYZBTHKSGYNOTSOIFVJCGJUWUOKNBUFHFIHSIBZGHTKZPXVACZLDARRPNTRPWFLMX");

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
    msg.setTimeStamp(0.8719329441032194);
    msg.setSource(32984U);
    msg.setSourceEntity(251U);
    msg.setDestination(16133U);
    msg.setDestinationEntity(113U);
    msg.system = 33483U;
    msg.duration = 61744U;
    msg.speed = 0.6214227042519533;
    msg.speed_units = 41U;
    msg.x = 0.2377304757115991;
    msg.y = 0.45163251966630447;
    msg.z = 0.9147812276290417;
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
    msg.setTimeStamp(0.4040743798535408);
    msg.setSource(28162U);
    msg.setSourceEntity(148U);
    msg.setDestination(26384U);
    msg.setDestinationEntity(235U);
    msg.system = 49154U;
    msg.duration = 56316U;
    msg.speed = 0.08161694424363164;
    msg.speed_units = 126U;
    msg.x = 0.11544575297224602;
    msg.y = 0.16693979645718793;
    msg.z = 0.1638964834511587;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.8424069082402764);
    msg.setSource(55928U);
    msg.setSourceEntity(195U);
    msg.setDestination(17759U);
    msg.setDestinationEntity(116U);
    msg.system = 40063U;
    msg.duration = 21206U;
    msg.speed = 0.3777179424735996;
    msg.speed_units = 227U;
    msg.x = 0.35476952503291603;
    msg.y = 0.08978566259235421;
    msg.z = 0.028699169987247086;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.46773862889126494);
    msg.setSource(41814U);
    msg.setSourceEntity(83U);
    msg.setDestination(49113U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.059062471036324116;
    msg.lon = 0.9998377778908037;
    msg.speed = 0.6258663804940303;
    msg.speed_units = 40U;
    msg.duration = 32629U;
    msg.sys_a = 63914U;
    msg.sys_b = 60476U;
    msg.move_threshold = 0.029115067163006936;

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
    msg.setTimeStamp(0.9831607639312092);
    msg.setSource(19344U);
    msg.setSourceEntity(52U);
    msg.setDestination(12660U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.2541328651294116;
    msg.lon = 0.8249054605142279;
    msg.speed = 0.3484932655302936;
    msg.speed_units = 230U;
    msg.duration = 15741U;
    msg.sys_a = 57922U;
    msg.sys_b = 52678U;
    msg.move_threshold = 0.22031516252053285;

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
    msg.setTimeStamp(0.8112876562982847);
    msg.setSource(24184U);
    msg.setSourceEntity(239U);
    msg.setDestination(57084U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.5447922323468831;
    msg.lon = 0.6324208720351642;
    msg.speed = 0.6491329353882332;
    msg.speed_units = 72U;
    msg.duration = 50563U;
    msg.sys_a = 28764U;
    msg.sys_b = 22013U;
    msg.move_threshold = 0.7487289946815905;

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
    msg.setTimeStamp(0.5944411159116781);
    msg.setSource(26764U);
    msg.setSourceEntity(228U);
    msg.setDestination(29836U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.6487904040927126;
    msg.lon = 0.8655151867888604;
    msg.z = 0.3830370363192277;
    msg.z_units = 148U;
    msg.speed = 0.8260924695939793;
    msg.speed_units = 38U;
    msg.custom.assign("WCWQTIIBEQVKZRSXLASNXINQTZFOMARUBSXFTRTWUGSXUGBNKJGGUSLTZOVYHJPMCDRCWIBTAEKPLQDYLYAVCJFSRGHXLLYRSIHOMH");

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
    msg.setTimeStamp(0.740015369232926);
    msg.setSource(30354U);
    msg.setSourceEntity(75U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.43878026164660666;
    msg.lon = 0.9170695095816581;
    msg.z = 0.7801011788025868;
    msg.z_units = 212U;
    msg.speed = 0.3817638191441004;
    msg.speed_units = 131U;
    msg.custom.assign("BPMJOKCGXBOUQBKSJZCXTLKECWNPTLEMBLVFNCVZHKPJGYGLSCODSNBRRSBYATYJCNUMMBRQYAPOSWXFEJQARWUUVJPHEHKBLHONNDYLCUR");

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
    msg.setTimeStamp(0.23229990708908765);
    msg.setSource(10945U);
    msg.setSourceEntity(76U);
    msg.setDestination(18425U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.35585102355710707;
    msg.lon = 0.6053352257294107;
    msg.z = 0.9175918703633192;
    msg.z_units = 43U;
    msg.speed = 0.3392946654484298;
    msg.speed_units = 67U;
    msg.custom.assign("GWUEJHTBQLBPNITVUFUQHBMJGCJHICPNHLNCMOIGKZMOPZCVBTJFKIMMYIXROGQXPADAFLQXEIFWFRNUOEHCSLDDMYOBHYMJNJCYEJN");

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
    msg.setTimeStamp(0.5498209708754632);
    msg.setSource(58857U);
    msg.setSourceEntity(221U);
    msg.setDestination(15081U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.3806098251315385;
    msg.lon = 0.5345479715841859;

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
    msg.setTimeStamp(0.7050194835672852);
    msg.setSource(53335U);
    msg.setSourceEntity(169U);
    msg.setDestination(46760U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.20111105394848994;
    msg.lon = 0.846451132391291;

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
    msg.setTimeStamp(0.767868149129898);
    msg.setSource(21274U);
    msg.setSourceEntity(160U);
    msg.setDestination(47262U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.8728940770098391;
    msg.lon = 0.5873014526703836;

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
    msg.setTimeStamp(0.5182045744461043);
    msg.setSource(8971U);
    msg.setSourceEntity(127U);
    msg.setDestination(60941U);
    msg.setDestinationEntity(10U);
    msg.timeout = 61968U;
    msg.lat = 0.09776468200759347;
    msg.lon = 0.7996358866980049;
    msg.z = 0.2361168536660022;
    msg.z_units = 91U;
    msg.pitch = 0.8711850798095292;
    msg.amplitude = 0.30161916148947077;
    msg.duration = 11170U;
    msg.speed = 0.605753505898025;
    msg.speed_units = 233U;
    msg.radius = 0.6474847920224363;
    msg.direction = 147U;
    msg.custom.assign("QSGLDSDSHLLFPOUESQTTAJBWEUMVAQNRFLPPXKVFGOXGJJPNJPFYMZHFKEYNZXOUOJECQTZOZCIUFPWFMSRAVWDXEXSWYGUGOBKEXYXMEYJZSKWVKDWRAMBH");

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
    msg.setTimeStamp(0.08857871461740197);
    msg.setSource(60926U);
    msg.setSourceEntity(218U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(162U);
    msg.timeout = 50905U;
    msg.lat = 0.6144740605762247;
    msg.lon = 0.039779252875992155;
    msg.z = 0.19654388538379952;
    msg.z_units = 74U;
    msg.pitch = 0.47461456389876133;
    msg.amplitude = 0.026834751212239105;
    msg.duration = 16436U;
    msg.speed = 0.7942879991472823;
    msg.speed_units = 107U;
    msg.radius = 0.263871386718708;
    msg.direction = 77U;
    msg.custom.assign("ODSQBBTEHKJYPEBSMCFMZOPAZAONCBXJHPZODVCKUJEDRONMYUHPGFAZ");

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
    msg.setTimeStamp(0.4523885584909171);
    msg.setSource(17594U);
    msg.setSourceEntity(130U);
    msg.setDestination(59966U);
    msg.setDestinationEntity(230U);
    msg.timeout = 7517U;
    msg.lat = 0.2033153242548239;
    msg.lon = 0.9893252999858134;
    msg.z = 0.1554360799949065;
    msg.z_units = 83U;
    msg.pitch = 0.16392106366192483;
    msg.amplitude = 0.4355671771930574;
    msg.duration = 8991U;
    msg.speed = 0.4876587152714619;
    msg.speed_units = 190U;
    msg.radius = 0.4307966360191219;
    msg.direction = 2U;
    msg.custom.assign("UDNTERUJCJJDUMSFCUKPBJDAXBZO");

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
    msg.setTimeStamp(0.5403071533540744);
    msg.setSource(44906U);
    msg.setSourceEntity(10U);
    msg.setDestination(45732U);
    msg.setDestinationEntity(132U);
    msg.formation_name.assign("PIFKXEDCBRWWQMBQPHALZDFHABYESGYIWUQSVWILNPATHIQINOCFUOFXBWGMRRLQTQOOARNCTXJRJQVTTBNFMUDJUSIMCIOHVUUKRGPBOTLKVCKHIFJPXEYMKJBKAJPEEVUAOGJDZMYXDHAFEXKFBRLXZFQTDQZDBNZTSDGRNZHOPGM");
    msg.reference_frame = 252U;
    msg.custom.assign("JAZYQKGQBKDMBQEUFWBTMLCMCZWDKSRAYLRVZOLFCKWBXIUAWJNMQUGSIMUHEOIKRMNNWZPTCENHUQFSKCAQSQFPHAXBNVGOHKEWVTXSRHTSAWHHA");

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
    msg.setTimeStamp(0.30047249630901096);
    msg.setSource(3447U);
    msg.setSourceEntity(81U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(42U);
    msg.formation_name.assign("MTFWCDJVMXWCQKFUPQECKGABPYKYAYFQIYBYPOXSVQTXPGIIDSISNMVZBGLLRBBJWVRUVXGQKTAYVWFTBNPQEHJOLDPKOWJMUILWZ");
    msg.reference_frame = 188U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35591U;
    tmp_msg_0.off_x = 0.07866322023095107;
    tmp_msg_0.off_y = 0.6830451731910124;
    tmp_msg_0.off_z = 0.996162237441085;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GMRRIGQGJXUWOPAKXVXDLJCVAUMXBDNVBNXYBNZTFEKLABIMHVLWHKDYBGMDSAKJTTKSFLEVOUTDNNKPOJOYWELHEHAF");

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
    msg.setTimeStamp(0.07478885410817404);
    msg.setSource(20648U);
    msg.setSourceEntity(106U);
    msg.setDestination(2348U);
    msg.setDestinationEntity(86U);
    msg.formation_name.assign("BTSOVAAGIRFXZHKKVDJMGPNKWJTAUDNFSFWZELQCGLGRZGAYPWVHTSPCNMVMQLLCBMHKRQJRUNUNHISFKDBVYXICMHCCGXYKDBQWUESCINVJXIMFEZJYDEZLXRPTWOKBMOMNUKWEJJLGETYVXEHKA");
    msg.reference_frame = 143U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14611U;
    tmp_msg_0.off_x = 0.19203782119927792;
    tmp_msg_0.off_y = 0.5797981187931583;
    tmp_msg_0.off_z = 0.7943964716098832;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YVHTDQGINLAPDSUQAKPNLAVVXAQVQPFCRFQEAWYIGKWBGIDLURDJTQLMMYCITHUBFOGXKKCRBIJPLVNGHHXOZDHMJLESTIOFIHBRCARVJYSNENXXOSAJY");

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
    msg.setTimeStamp(0.8703590971400827);
    msg.setSource(22992U);
    msg.setSourceEntity(94U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("MWMZOXABSRQAGGLQBKFRQLOYQJUFQVJFTDDYXBTNNVIZLGTTKRGNVCHSBQNUXAQVBVKNYRBGDGDZVXOEIZPGTSXIAKDFHRYZCJHOPXWIYDTUSGYHMCKUULXKECDNDHZVYFXCWF");
    msg.formation_name.assign("DRERLETXTFCUMRTBNSZXIQVFZMSJQYASVOKKHYWLONGEWDFFSYIUCKFGMAFHLKQHXUEFJBGUOERWPHCDMJUGQINUZQFVBC");
    msg.plan_id.assign("CEIAJXNYHTDSFTFXVRGSKXPRSZWHMONJIFUIDFQVWNKTYLXZTHGROLMDMMPDGEBSZNFINASTQEVDVAIOL");
    msg.description.assign("IJEEKSZKVLCNSXSGATAQIBMZDJBXQWCSAUHPDBXCEH");
    msg.leader_speed = 0.7862797998789115;
    msg.leader_bank_lim = 0.506896099471978;
    msg.pos_sim_err_lim = 0.9532687329214137;
    msg.pos_sim_err_wrn = 0.06607338388882833;
    msg.pos_sim_err_timeout = 5975U;
    msg.converg_max = 0.8156895398972265;
    msg.converg_timeout = 31255U;
    msg.comms_timeout = 4719U;
    msg.turb_lim = 0.1245907113629875;
    msg.custom.assign("RCMSBHUIFTEYXHHGYWAFJKSXMAXDOARJUMERFIVYAAZPAIPOEIONJVFLIYMONGDWQMGGNAKERQHUSZJRZPTRQOZUNQCJDVMGNJGBIZBSLVKLKFMCRLSXXUSQWFWVTLZYQQRUQQHTCIAOFEKUVBJNHPCUOMKHEBYBZLDCGWYQDEWZVWLYXJNCOAERMCIFTWGRXGVNPBXSOODUVSNNEDPTZXKXSAWKBTZHGLMTBFDDJWFPLPVYTPHTILJEUKCDYB");

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
    msg.setTimeStamp(0.9134991864191033);
    msg.setSource(53486U);
    msg.setSourceEntity(160U);
    msg.setDestination(16907U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("HSDNKTBHAPKVCFUUMSYAOHAYKCLPXODYGJKW");
    msg.formation_name.assign("RAFIMDUCLFQGBNEUCDJFPEXZTXGSCNIOMIVKGYYIFIDLFAAEEAZZMWJSXBIRCKTHTYVAPCOETKKVSSGTZKCQYDWALNWBMMRXVLBMVGJJWLZJXUUSNOLKQAKWRUDNAYZGYGWHWTCYVPMRDQWTEQLFRPONBOIHEKJOZCGNSJRNVLUACZ");
    msg.plan_id.assign("YSVFDEXEVTHMQZFFKRPGPTPFNJOQFJCMLBWVHNJXQACRVIEHCMSRPEOIWMANZBYBZBWKZVIQNXQFNYTGLTTZWRWGKUNDMNPUNUPKHTXQLDYLXOCYIHPBLVBK");
    msg.description.assign("EZIMGUZRUXYKCWQOWMMHHUMSKXFQIFHFVIYSFDUDAERDTDVFKGNDPCUCHSRSQDQAAOQDNBPHRLLIBJMUXNAPWICOCRRBWVTSNPTASHIYJWSLBNXVBWYENLEOJFGLMFQNXRVTMRMHTROGNUYIDLBKVAGDRBGWLJXEDKSEATHZKZEPQYIQCJPWIYZYOCQSFENZJTOJWOGHTOXKSBHNUPPT");
    msg.leader_speed = 0.7889360876640867;
    msg.leader_bank_lim = 0.44601440586531904;
    msg.pos_sim_err_lim = 0.504458490849757;
    msg.pos_sim_err_wrn = 0.3653193673858143;
    msg.pos_sim_err_timeout = 25571U;
    msg.converg_max = 0.8256881296615991;
    msg.converg_timeout = 43176U;
    msg.comms_timeout = 18025U;
    msg.turb_lim = 0.12289266242068686;
    msg.custom.assign("JUXVPSDYRRMVZUZIYWXTAHHLIAYEKG");

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
    msg.setTimeStamp(0.03393477417903157);
    msg.setSource(6740U);
    msg.setSourceEntity(88U);
    msg.setDestination(44256U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("LUXWECMJSPEITUYVKKLSKJCIQYBTDVWVEXGZCEQSMLQAWYOPYFYKCJGJKDXQCFZUZQSHEONAQLFUOUWYFDSTPQHHKPYBPTJXHEXIAJKMLRROIIIFOGZANUUNIUYHJDTRZCITVCLFWHLQDUEAND");
    msg.formation_name.assign("FMDPTILYKBDVCFRJALOFWMJESRBYBATCPRRZUNHGEJPPRLAKEYRHGPODAVVSTYUZNUBKSBKFDXLWATMVLOSVHXTDZMUULZYUTNFFRXSECLISXKCGBQEVJDCWNOZKJCAXXEPZVAQWJGKN");
    msg.plan_id.assign("XJWSNSLLOCRDUMCECFNZRZVNJQWVLPOYKZMCDDNRTKEIXLLEEBSPTPLOAZZRJKHOVUFZIFVACUZGRSYBPOTEWUFMQEAAHCQRVOPHBAMCKIDYBKQKBQPYCJTEPGLUNIZNUAOWIXPJDNNALYTDADDMEPGHIRHXFSFWVNSNBQTTFMUGHJVKSFRVMWJYBGMYWQYPXDKWZXREUMUXSYKWQMJUIFBGDBJILXGXOCFWRKVIHZTOJGHBSTG");
    msg.description.assign("NDCVNAFWYXAJGFKUTCQLFAWYEROPNSFBDBXCWHJZBFATXYACJKKJKLORSIZOTHGUFCWLFVOPANIQMWWLXDXMSGNTIYVBGETYYPJVZYARXNPHPGBLGXFIRBHCUMXSQRKHPSZEERHRSUDKPDTPCUJSMIDCDVVMOURKHQTOEEECSQKYHZBVMMXYDBNJJZ");
    msg.leader_speed = 0.9113323515449318;
    msg.leader_bank_lim = 0.8562507579633573;
    msg.pos_sim_err_lim = 0.15133788821363514;
    msg.pos_sim_err_wrn = 0.26869644569680984;
    msg.pos_sim_err_timeout = 46432U;
    msg.converg_max = 0.8653718829350305;
    msg.converg_timeout = 14422U;
    msg.comms_timeout = 549U;
    msg.turb_lim = 0.45110978840684;
    msg.custom.assign("WDJAFYCAOCEVDVMWAUDOUHIPBTNZQRHFRBAOUSVXEPXQHZILBSVWACAMQGXKNLUTKINJSMVCHHUQSCRCYRMTQFGVEWFVEOUYDMMXEMP");

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
    msg.setTimeStamp(0.18925132651936394);
    msg.setSource(53196U);
    msg.setSourceEntity(48U);
    msg.setDestination(4046U);
    msg.setDestinationEntity(213U);
    msg.control_src = 45851U;
    msg.control_ent = 25U;
    msg.timeout = 0.16413188564866166;
    msg.loiter_radius = 0.8175466282383888;
    msg.altitude_interval = 0.6035853294869334;

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
    msg.setTimeStamp(0.8133611129729732);
    msg.setSource(2720U);
    msg.setSourceEntity(13U);
    msg.setDestination(4931U);
    msg.setDestinationEntity(168U);
    msg.control_src = 52613U;
    msg.control_ent = 92U;
    msg.timeout = 0.11369347367892302;
    msg.loiter_radius = 0.499896470025215;
    msg.altitude_interval = 0.9864685097171054;

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
    msg.setTimeStamp(0.4445467853031848);
    msg.setSource(32913U);
    msg.setSourceEntity(31U);
    msg.setDestination(56492U);
    msg.setDestinationEntity(177U);
    msg.control_src = 531U;
    msg.control_ent = 47U;
    msg.timeout = 0.5032686451337965;
    msg.loiter_radius = 0.38199621959504826;
    msg.altitude_interval = 0.5813650565853729;

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
    msg.setTimeStamp(0.5074207987145567);
    msg.setSource(58807U);
    msg.setSourceEntity(169U);
    msg.setDestination(27582U);
    msg.setDestinationEntity(130U);
    msg.flags = 41U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.45785378200500737;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1502645370183745;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.16474892941026653;
    msg.lon = 0.7090226825132813;
    msg.radius = 0.6708394925235275;

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
    msg.setTimeStamp(0.7249030752672454);
    msg.setSource(33433U);
    msg.setSourceEntity(0U);
    msg.setDestination(46372U);
    msg.setDestinationEntity(174U);
    msg.flags = 32U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.06168178322399853;
    tmp_msg_0.speed_units = 241U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.06940232621242692;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0014021831248487437;
    msg.lon = 0.4249639043014568;
    msg.radius = 0.6766904942003589;

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
    msg.setTimeStamp(0.3029414050811403);
    msg.setSource(57479U);
    msg.setSourceEntity(124U);
    msg.setDestination(46138U);
    msg.setDestinationEntity(239U);
    msg.flags = 127U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3305214203378827;
    tmp_msg_0.speed_units = 14U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3300933116208864;
    tmp_msg_1.z_units = 68U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9341694772560032;
    msg.lon = 0.3172923100113574;
    msg.radius = 0.6417428913946152;

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
    msg.setTimeStamp(0.5986427376227172);
    msg.setSource(57767U);
    msg.setSourceEntity(84U);
    msg.setDestination(20946U);
    msg.setDestinationEntity(116U);
    msg.control_src = 53455U;
    msg.control_ent = 218U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 87U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6916779358697184;
    tmp_tmp_msg_0_0.speed_units = 163U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.945316621529502;
    tmp_tmp_msg_0_1.z_units = 172U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6261415376445495;
    tmp_msg_0.lon = 0.6257613047906534;
    tmp_msg_0.radius = 0.7694012590173036;
    msg.reference.set(tmp_msg_0);
    msg.state = 182U;
    msg.proximity = 83U;

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
    msg.setTimeStamp(0.4179650443691457);
    msg.setSource(35946U);
    msg.setSourceEntity(10U);
    msg.setDestination(43966U);
    msg.setDestinationEntity(193U);
    msg.control_src = 37694U;
    msg.control_ent = 202U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 36U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.24547048456632248;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9891192425459705;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3418669163612339;
    tmp_msg_0.lon = 0.2628120559824112;
    tmp_msg_0.radius = 0.6517298483435436;
    msg.reference.set(tmp_msg_0);
    msg.state = 134U;
    msg.proximity = 93U;

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
    msg.setTimeStamp(0.393968666488684);
    msg.setSource(26274U);
    msg.setSourceEntity(79U);
    msg.setDestination(45121U);
    msg.setDestinationEntity(212U);
    msg.control_src = 49415U;
    msg.control_ent = 231U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 94U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.39450241232514915;
    tmp_tmp_msg_0_0.speed_units = 63U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12614293379944408;
    tmp_tmp_msg_0_1.z_units = 222U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5613090416569734;
    tmp_msg_0.lon = 0.49526894299753;
    tmp_msg_0.radius = 0.5233232629392088;
    msg.reference.set(tmp_msg_0);
    msg.state = 240U;
    msg.proximity = 77U;

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
    msg.setTimeStamp(0.23291908704692388);
    msg.setSource(62471U);
    msg.setSourceEntity(105U);
    msg.setDestination(50535U);
    msg.setDestinationEntity(129U);
    msg.ax_cmd = 0.49153949013996123;
    msg.ay_cmd = 0.18818166363938216;
    msg.az_cmd = 0.4313121646552939;
    msg.ax_des = 0.41222036530785644;
    msg.ay_des = 0.9195438342866519;
    msg.az_des = 0.13531064579837382;
    msg.virt_err_x = 0.5522381370077496;
    msg.virt_err_y = 0.4706605178293194;
    msg.virt_err_z = 0.2150146723585532;
    msg.surf_fdbk_x = 0.5335076106427662;
    msg.surf_fdbk_y = 0.9113240919494761;
    msg.surf_fdbk_z = 0.45741247169281496;
    msg.surf_unkn_x = 0.5440285090226711;
    msg.surf_unkn_y = 0.15966809465774834;
    msg.surf_unkn_z = 0.04957073120019706;
    msg.ss_x = 0.457620147327249;
    msg.ss_y = 0.13441913866971145;
    msg.ss_z = 0.19170776709903536;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FQMXWGNFIHBEDRNOGKMOQGJIPYBTKEQEU");
    tmp_msg_0.dist = 0.9861471261429159;
    tmp_msg_0.err = 0.5216190614429107;
    tmp_msg_0.ctrl_imp = 0.376559002915981;
    tmp_msg_0.rel_dir_x = 0.7012219006492301;
    tmp_msg_0.rel_dir_y = 0.7328834921389955;
    tmp_msg_0.rel_dir_z = 0.2702230160102498;
    tmp_msg_0.err_x = 0.14779963796391626;
    tmp_msg_0.err_y = 0.9109443862715395;
    tmp_msg_0.err_z = 0.05753940786105782;
    tmp_msg_0.rf_err_x = 0.560196005888598;
    tmp_msg_0.rf_err_y = 0.5937348257125475;
    tmp_msg_0.rf_err_z = 0.3560981501877729;
    tmp_msg_0.rf_err_vx = 0.013310618206237912;
    tmp_msg_0.rf_err_vy = 0.9438266640818377;
    tmp_msg_0.rf_err_vz = 0.3732566870769919;
    tmp_msg_0.ss_x = 0.021426150704671243;
    tmp_msg_0.ss_y = 0.4045452935992151;
    tmp_msg_0.ss_z = 0.06009121888287672;
    tmp_msg_0.virt_err_x = 0.7888711779483895;
    tmp_msg_0.virt_err_y = 0.6513501603054184;
    tmp_msg_0.virt_err_z = 0.29460305401315334;
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
    msg.setTimeStamp(0.6008028347281673);
    msg.setSource(44981U);
    msg.setSourceEntity(232U);
    msg.setDestination(57531U);
    msg.setDestinationEntity(236U);
    msg.ax_cmd = 0.6930274505854571;
    msg.ay_cmd = 0.9858142930231711;
    msg.az_cmd = 0.7514299132378612;
    msg.ax_des = 0.5920084512194941;
    msg.ay_des = 0.15005125118224028;
    msg.az_des = 0.4264480009796051;
    msg.virt_err_x = 0.16306777142007;
    msg.virt_err_y = 0.8395131047739929;
    msg.virt_err_z = 0.23923125541554013;
    msg.surf_fdbk_x = 0.32328301337378496;
    msg.surf_fdbk_y = 0.327499341750906;
    msg.surf_fdbk_z = 0.8638312987452585;
    msg.surf_unkn_x = 0.7377028192981095;
    msg.surf_unkn_y = 0.546900887801163;
    msg.surf_unkn_z = 0.2621772802596257;
    msg.ss_x = 0.37909718639032786;
    msg.ss_y = 0.1498641749898798;
    msg.ss_z = 0.0967668343688769;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YCRNVUNLQAJE");
    tmp_msg_0.dist = 0.2793936330111122;
    tmp_msg_0.err = 0.923809051420839;
    tmp_msg_0.ctrl_imp = 0.9868169827118072;
    tmp_msg_0.rel_dir_x = 0.4239409789583529;
    tmp_msg_0.rel_dir_y = 0.7767853166370813;
    tmp_msg_0.rel_dir_z = 0.9812422926222318;
    tmp_msg_0.err_x = 0.7945521716381557;
    tmp_msg_0.err_y = 0.09157879792264245;
    tmp_msg_0.err_z = 0.42973030548327695;
    tmp_msg_0.rf_err_x = 0.3300356700363255;
    tmp_msg_0.rf_err_y = 0.6917265995039371;
    tmp_msg_0.rf_err_z = 0.09043948982502814;
    tmp_msg_0.rf_err_vx = 0.3329988676675484;
    tmp_msg_0.rf_err_vy = 0.5342465061064887;
    tmp_msg_0.rf_err_vz = 0.9855987088560958;
    tmp_msg_0.ss_x = 0.09344823352961407;
    tmp_msg_0.ss_y = 0.6422130432631292;
    tmp_msg_0.ss_z = 0.056857495646902345;
    tmp_msg_0.virt_err_x = 0.27632315653289363;
    tmp_msg_0.virt_err_y = 0.01907968131618687;
    tmp_msg_0.virt_err_z = 0.35663002573064584;
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
    msg.setTimeStamp(0.6443710768472595);
    msg.setSource(56227U);
    msg.setSourceEntity(170U);
    msg.setDestination(36024U);
    msg.setDestinationEntity(59U);
    msg.ax_cmd = 0.7460846713728676;
    msg.ay_cmd = 0.5054488280327316;
    msg.az_cmd = 0.6396446772214163;
    msg.ax_des = 0.1973464168638096;
    msg.ay_des = 0.2226356268088444;
    msg.az_des = 0.09919246337049614;
    msg.virt_err_x = 0.14693764846013502;
    msg.virt_err_y = 0.07409117184441516;
    msg.virt_err_z = 0.419433012259844;
    msg.surf_fdbk_x = 0.3388450633606185;
    msg.surf_fdbk_y = 0.24659812103259382;
    msg.surf_fdbk_z = 0.7025348982882543;
    msg.surf_unkn_x = 0.38067221028451625;
    msg.surf_unkn_y = 0.9365003659483248;
    msg.surf_unkn_z = 0.33735503472301087;
    msg.ss_x = 0.19160963504897832;
    msg.ss_y = 0.2597266843716711;
    msg.ss_z = 0.5800276683748902;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CDNTEVBGXSAQXYAKLHHZVQCGOKRRLQPKKFBIRTZHTGZNLFTHQLTOBFQXCYNOQJLKDWQNDLHJCUEDEXXLWXJVMYESIRARSZAASVYRIMVJKZTZKQLOTNDJECJRJCPFNMPFFMGIHWUBIUHHUYZ");
    tmp_msg_0.dist = 0.2302574296907406;
    tmp_msg_0.err = 0.45388653969819226;
    tmp_msg_0.ctrl_imp = 0.7717479296126253;
    tmp_msg_0.rel_dir_x = 0.12800970327643701;
    tmp_msg_0.rel_dir_y = 0.12213054638663356;
    tmp_msg_0.rel_dir_z = 0.1838543375169357;
    tmp_msg_0.err_x = 0.7012743297693229;
    tmp_msg_0.err_y = 0.9375121705199542;
    tmp_msg_0.err_z = 0.015440412382360824;
    tmp_msg_0.rf_err_x = 0.7871279043355908;
    tmp_msg_0.rf_err_y = 0.4017740138887247;
    tmp_msg_0.rf_err_z = 0.07528072739176206;
    tmp_msg_0.rf_err_vx = 0.7232019214570297;
    tmp_msg_0.rf_err_vy = 0.7870867624982653;
    tmp_msg_0.rf_err_vz = 0.737206095093655;
    tmp_msg_0.ss_x = 0.4178995319051362;
    tmp_msg_0.ss_y = 0.34309799423465914;
    tmp_msg_0.ss_z = 0.8826411073107788;
    tmp_msg_0.virt_err_x = 0.813318684851001;
    tmp_msg_0.virt_err_y = 0.573871762945005;
    tmp_msg_0.virt_err_z = 0.5788583859064373;
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
    msg.setTimeStamp(0.6201428306722863);
    msg.setSource(11501U);
    msg.setSourceEntity(4U);
    msg.setDestination(57542U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("KUMVITEIZNXCPWQUZJPYFPUUOQLTOEPFDBGMVGCFFFWZMTSFWDSYDVJCYYYUKZXUKHQPUHXBNFOLBVQTRCYRKYQIBRHBSIHIVVJJNDRHIHESLZXTJWSWNCMELNAVOEQLJUKHXEZTONADAISFXODLPZKEPXRLPHGYZMKRWNJVANUKKOGSTBSG");
    msg.dist = 0.15536555707322486;
    msg.err = 0.6491647485531106;
    msg.ctrl_imp = 0.3727954450111859;
    msg.rel_dir_x = 0.7701940014087362;
    msg.rel_dir_y = 0.808884027026313;
    msg.rel_dir_z = 0.9925248725980096;
    msg.err_x = 0.8674072031945583;
    msg.err_y = 0.16843202697127724;
    msg.err_z = 0.3511817877125275;
    msg.rf_err_x = 0.7124937126828728;
    msg.rf_err_y = 0.4731112161087285;
    msg.rf_err_z = 0.07046885748201048;
    msg.rf_err_vx = 0.7891313235279418;
    msg.rf_err_vy = 0.5534812021144663;
    msg.rf_err_vz = 0.29358397050247875;
    msg.ss_x = 0.03253862209227243;
    msg.ss_y = 0.7815576665801671;
    msg.ss_z = 0.42456527881673856;
    msg.virt_err_x = 0.18118332336692922;
    msg.virt_err_y = 0.3249501587777456;
    msg.virt_err_z = 0.8668564011970249;

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
    msg.setTimeStamp(0.7869467643596046);
    msg.setSource(63145U);
    msg.setSourceEntity(111U);
    msg.setDestination(52489U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("IIHQAFHCTXTHZCKJVRVZURJCSSJNOPQDKKPWBYGWZYAUETFONRFPONLFHZVZYLYIJWMWSLVTRBFCROBDQPRTRMHCVDKJXMOKXDQTM");
    msg.dist = 0.2780263623288125;
    msg.err = 0.7969236918652849;
    msg.ctrl_imp = 0.29550788306594833;
    msg.rel_dir_x = 0.2249254487980228;
    msg.rel_dir_y = 0.16409429785808372;
    msg.rel_dir_z = 0.04611656941858544;
    msg.err_x = 0.9906578260773932;
    msg.err_y = 0.7305656651436125;
    msg.err_z = 0.43931627646822535;
    msg.rf_err_x = 0.03145396824217117;
    msg.rf_err_y = 0.23970137359880317;
    msg.rf_err_z = 0.110111417310221;
    msg.rf_err_vx = 0.673966819585535;
    msg.rf_err_vy = 0.11306084476866629;
    msg.rf_err_vz = 0.769089690627724;
    msg.ss_x = 0.6213452040862837;
    msg.ss_y = 0.1512175811448584;
    msg.ss_z = 0.8066426360617597;
    msg.virt_err_x = 0.39347885400079885;
    msg.virt_err_y = 0.8755941570962437;
    msg.virt_err_z = 0.7253691765547298;

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
    msg.setTimeStamp(0.5197407630934601);
    msg.setSource(44914U);
    msg.setSourceEntity(26U);
    msg.setDestination(22455U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("XJLWYXSRVATBMOEQERFZNPPFPZXQFKPOWHJKDPHNTUGDYVGJWJABYRBDNBGCVZCWMC");
    msg.dist = 0.8645657205623192;
    msg.err = 0.051210501020054755;
    msg.ctrl_imp = 0.6428716353216317;
    msg.rel_dir_x = 0.9287627080465884;
    msg.rel_dir_y = 0.20302626793254508;
    msg.rel_dir_z = 0.2325311458489565;
    msg.err_x = 0.20844520453029058;
    msg.err_y = 0.041135897119639275;
    msg.err_z = 0.7373570955072728;
    msg.rf_err_x = 0.4548241673580925;
    msg.rf_err_y = 0.8868580208468358;
    msg.rf_err_z = 0.40658386635834487;
    msg.rf_err_vx = 0.20146256177033917;
    msg.rf_err_vy = 0.418747380575079;
    msg.rf_err_vz = 0.9155845943813828;
    msg.ss_x = 0.13654490465841118;
    msg.ss_y = 0.8144171743782502;
    msg.ss_z = 0.6187982172223788;
    msg.virt_err_x = 0.6646460148707724;
    msg.virt_err_y = 0.9863311612076594;
    msg.virt_err_z = 0.6808233202048382;

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
    msg.setTimeStamp(0.4716230027970638);
    msg.setSource(6840U);
    msg.setSourceEntity(94U);
    msg.setDestination(5771U);
    msg.setDestinationEntity(99U);
    msg.timeout = 24996U;
    msg.rpm = 0.2597459937843565;
    msg.direction = 207U;
    msg.custom.assign("DQAPIXCSWQUFYM");

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
    msg.setTimeStamp(0.7219405170533765);
    msg.setSource(760U);
    msg.setSourceEntity(26U);
    msg.setDestination(37181U);
    msg.setDestinationEntity(33U);
    msg.timeout = 39276U;
    msg.rpm = 0.7326618870352787;
    msg.direction = 155U;
    msg.custom.assign("QSNETXGVLYIXJPQMZSPXCWFXAGGIVMHUBNFOQKJIBPOHUVXSRSZWBOAR");

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
    msg.setTimeStamp(0.283095977603924);
    msg.setSource(53891U);
    msg.setSourceEntity(168U);
    msg.setDestination(57175U);
    msg.setDestinationEntity(108U);
    msg.timeout = 3996U;
    msg.rpm = 0.6098114655921651;
    msg.direction = 86U;
    msg.custom.assign("UQAWOWDVNJXWHPDGGMFEGQEEGE");

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
    msg.setTimeStamp(0.9031254591154927);
    msg.setSource(20352U);
    msg.setSourceEntity(89U);
    msg.setDestination(11360U);
    msg.setDestinationEntity(159U);
    msg.formation_name.assign("XHZMOFXDJWYNDQGTTKRJWIWZCZWJTRFWQJFYWPNGAGQAUMWLGRBBLSMORSXLQMFAJVSFEIBNSNQCXBHUTOIMESKLMJAUAETUKMOTJLGDUCYYVFBEADXBSTOGGKDVLLHBVPHBAXTJSKDNRIGUPYPVVHKCCZVQBNMFKALRQPHKXIWREYCWLITVZREUUDCUOHEIUOFDOSZCJEQXSJN");
    msg.type = 42U;
    msg.op = 76U;
    msg.group_name.assign("KZNBVFHGMMKVYTTUUKHLZMOXHFCHGZIMGZJMISJADHBDTWOXBYRMYGJEXCCTGFEHJBVAALUWFTNKIPNAJLRIQJYRSYVVSGBGOESUXBHGICVRRBKFLCQZNLLAEDCQUZXFKVAWPDBKEVQYOGNNYNURHNIJJTQOBTXVMDEITROZQOQWIPUQDYAFLYHMKFDOOUGAZRBKWIAJJSNPKCWPHPRIPXEYTQSVDS");
    msg.plan_id.assign("UXHYLFRPDXNWGCAJGPTXWWFNDMYAISKQEOOFHWZKVXKAJSTHLASKYMTZPYLDJBIITRVLSEGMQBAQLJZHNXUWREOYPZTMRPRQPECONIKJAZNLCQYVUMFGUNGHKSFIAPDEXFGJQPOVJLZUVFBWZASEHDYCMVSDF");
    msg.description.assign("ARCVMHBZEOOOUQFTDNJGWCKGOLSGKIVUTTEZEYEMSBNSMYRKGLPHRLCKYQFFWVMVSKOHCCETMZBEXRBJZZGQAWFDQUAUMCXQXRCXTBQKQLBYPAMPNGTVRBLEYNXIMOKFYFXIZIRVDUJYDKJFWIJNHYAH");
    msg.reference_frame = 219U;
    msg.leader_bank_lim = 0.40185479879554875;
    msg.leader_speed_min = 0.10078798853540205;
    msg.leader_speed_max = 0.16751701105487882;
    msg.leader_alt_min = 0.6057704203486816;
    msg.leader_alt_max = 0.8986971432126729;
    msg.pos_sim_err_lim = 0.6136335492286312;
    msg.pos_sim_err_wrn = 0.46076332160694655;
    msg.pos_sim_err_timeout = 25874U;
    msg.converg_max = 0.04229587550878122;
    msg.converg_timeout = 26087U;
    msg.comms_timeout = 50971U;
    msg.turb_lim = 0.8957637554688843;
    msg.custom.assign("ZHFYHPNHHQJIJQMLMTGUHPMQNBDGWBOGJZWOFKCHOZCEXFLKVUYWEQSAWISGBNEUXBFWXCLWXMTJOKYKNYTEYATETSCGFAIZDULBVFKRTAURTIRBWYSBVNKNXLSZFVKJLSOAZSIEVXORAJILMQNNZGAQSCXIBKBDOCRTJVFZMHWVMYQDSTKDCSVYMEQVXRCDXHVLNFD");

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
    msg.setTimeStamp(0.4494426056185383);
    msg.setSource(25660U);
    msg.setSourceEntity(209U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("YFTRISEYVIPYYIRIPGQUOCQGLDNFZUUMHMMWYQHTLOZCOSZBWLAUFNLXPUGMDPZAHNUFSRBPHCAFZHSDJMJJEOUKCNOXZVNVXGPVRRYTAWKKCSHKETZPBVACNTCSDDWOJB");
    msg.type = 237U;
    msg.op = 130U;
    msg.group_name.assign("AZSWECTMABFLYFLBWCPFYEQDDHQQTARRWCSGEJXQCENRYHBKVPI");
    msg.plan_id.assign("SXJYYRRVKMWQYEWAJSOLBHRIHIFNQHUZLPNOATJIFPISKXFKPLSDCBPGGBIIWOBECFRWIGXMVUCVNQZOTBQVXLTECXSLYEWMGQIWDMXPVKEIQAOKFWNMDPJGVVUYEHLRVTFURQLERQDOMETSNZBMMTBCAAJGXDSREWGVAUTFKGZDJUVHTAUSXALCBMJLZPZFUFJIOQNCCHZKFC");
    msg.description.assign("SQBZXYFIUONELKQPSKFTNOSYVPWTGETNGVLYIPYZKVFHQYWTKOPXANIXIAVYADOLFZMDXPTOBSBCSYPUNPRRBEAZEMHQWRMJTQSDZKTYFAMXGYQBWBCXARZLUTLJE");
    msg.reference_frame = 19U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 93U;
    tmp_msg_0.off_x = 0.04561237760757786;
    tmp_msg_0.off_y = 0.8261522355604125;
    tmp_msg_0.off_z = 0.8104069046124754;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.30130184266912874;
    msg.leader_speed_min = 0.8728919178385361;
    msg.leader_speed_max = 0.47848610711248296;
    msg.leader_alt_min = 0.15862548670583354;
    msg.leader_alt_max = 0.5112439134356751;
    msg.pos_sim_err_lim = 0.3397877697229308;
    msg.pos_sim_err_wrn = 0.7819215942185291;
    msg.pos_sim_err_timeout = 59166U;
    msg.converg_max = 0.1740105465661319;
    msg.converg_timeout = 29206U;
    msg.comms_timeout = 1536U;
    msg.turb_lim = 0.44646132659754023;
    msg.custom.assign("TJMKMENIGDGFRIKXPX");

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
    msg.setTimeStamp(0.2718904712837409);
    msg.setSource(53371U);
    msg.setSourceEntity(132U);
    msg.setDestination(9425U);
    msg.setDestinationEntity(57U);
    msg.formation_name.assign("VUHBYAGNANKLGHWSQNPRIMJDAMKIOHZXCRDKWIAGFBUUQDZRIZFLYGOKVAGSITVGJYHOFQWEAORIXSOEEVFTWHNAQIBPSYLLNKJXXFWZDBJQB");
    msg.type = 209U;
    msg.op = 191U;
    msg.group_name.assign("MLCXKMZLWYJTGDNZLTIMLCSAQQXZHAKMVKZIDKWCOGKYJCBVSJMPUINXTAOZVSIOXPOLGBUDTHJEEQAXETJRPAGXYQHNBVRYOOTWIYKMPCRFOHLQYFFLRURXPHGSFWAERPHDHICRZRRUMZVCFBGEDSQWUDBONTMPLHJFBYQABMKFIAQVZZGKHJUEMKVNAKBGEJJSUNWISTCWEDNW");
    msg.plan_id.assign("VUSIUBIBOQJJRYYXHCCIAWWYSDTQDJEXMFTWSCUTLIXHWTFSEKLOBXLQJKZQVIFJZMKKOOCVMJSQNPNUXLSTREZCVHNCCPZBSVQEEDLAWHWPAGZPBHKGAFDFJLERHWMQDZAYVRGLIPAMKXNPCOOCEZTRPY");
    msg.description.assign("CQKGACHOJRHGXKRWYIIKQECYQNSJNPUACLPDJEUIZWVFYRUWGXAXUIRVBDPGDJKLQZPJQSKJALXSXCAZGSUVIUGAOYKOTFBZZBSONJMPYYKCYCGDEFEIAMMFLMJBCQBDTVMNFSWQVSTPVHQEIWGHZYWYVHNILMSPLAIBXXKVAZHTFQWIZBOZDUZDWKSTHTORPBEXRMNLBCNRFVUARJNRTSDKMERGOTFW");
    msg.reference_frame = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57143U;
    tmp_msg_0.off_x = 0.009996033640657598;
    tmp_msg_0.off_y = 0.7712197318198718;
    tmp_msg_0.off_z = 0.6630747253096106;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8181883068792701;
    msg.leader_speed_min = 0.6240391049844736;
    msg.leader_speed_max = 0.48430402362762826;
    msg.leader_alt_min = 0.736008404094496;
    msg.leader_alt_max = 0.1549559654665288;
    msg.pos_sim_err_lim = 0.42111066244321804;
    msg.pos_sim_err_wrn = 0.2934912108632426;
    msg.pos_sim_err_timeout = 59920U;
    msg.converg_max = 0.9893765555781927;
    msg.converg_timeout = 48095U;
    msg.comms_timeout = 63107U;
    msg.turb_lim = 0.44865406434632193;
    msg.custom.assign("NJFTAFLABSDVQOHVEBGWMUQBDIDBMQLRYTVEHBUYNHVBHAPOCHFHJTGNQRUINEJKYNOXAJXGXKOOBMHNPOSKPYJLIPMCAKYQSYLIJDPLDPCVMECMUZFSDCZJCVSTEXRPORIKKPAGNXSNAGMMLFPQWZWWDBRMJVQVQVHWKTTZRGWLMKFJQAZKIRGGZDEPYDOQNUELZBOKSFVCWYIWHSAZEZGUUXOUAIWISIZJBY");

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
    msg.setTimeStamp(0.7571899673150567);
    msg.setSource(53454U);
    msg.setSourceEntity(166U);
    msg.setDestination(29580U);
    msg.setDestinationEntity(66U);
    msg.timeout = 5716U;
    msg.lat = 0.9634378818012955;
    msg.lon = 0.9734117991272213;
    msg.z = 0.9695782259095733;
    msg.z_units = 207U;
    msg.speed = 0.48124586061476193;
    msg.speed_units = 190U;
    msg.custom.assign("HLSOPMRUXJNIMZDEDCQJEMYMZJIHXWNYNQJOLYJFXTQIXIIUKQOACMENXHSZRRTBGFSIEPCMWFPCDWKXXF");

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
    msg.setTimeStamp(0.7564041159823307);
    msg.setSource(41133U);
    msg.setSourceEntity(206U);
    msg.setDestination(31886U);
    msg.setDestinationEntity(247U);
    msg.timeout = 65348U;
    msg.lat = 0.8309906580172078;
    msg.lon = 0.5060043300656785;
    msg.z = 0.42984878810408866;
    msg.z_units = 182U;
    msg.speed = 0.3462664639549309;
    msg.speed_units = 1U;
    msg.custom.assign("JLZGIEKABAONRYWPCGHCMUJYEBUPTONJVUUQVTIXULCVAMUZUMJOOZAAXBHPHIWVOEAHZWFQDMRBIHVWOXQXRHSJNBYLDYLSVEPDIBPHXJMOGGTSXCRGAXIGZWLVPYNBXSKPRNFNNHKERZGJFAGPDDKWNEKRLDMFFUMQVCDZQLKGOSIQEITWTBVPYRZVXESYERCINDURQJQQUZTYDCHKTOKCKSWHSMCTLLJWFMXFTDBYBSZOIYFSAEWACFG");

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
    msg.setTimeStamp(0.6772605569615584);
    msg.setSource(30648U);
    msg.setSourceEntity(141U);
    msg.setDestination(60206U);
    msg.setDestinationEntity(209U);
    msg.timeout = 57277U;
    msg.lat = 0.9477071747582237;
    msg.lon = 0.6326956299822343;
    msg.z = 0.9614841351182215;
    msg.z_units = 161U;
    msg.speed = 0.4008895017273757;
    msg.speed_units = 105U;
    msg.custom.assign("SGJOXFPQTCCVTHWBTPNGMODVOJJVHQSBTGIBCWJDEWACRGRDVATCCXFFSOGSMBWYPSAUKEHTANAYIVVIMHJPRLNQAJBOHDXIRLQOZLOVREYVMSZZKKFBMXHQINWGQPNPNAWAYGOFISKRGMECOJJTHILZTGXPK");

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
    msg.setTimeStamp(0.25489776107064144);
    msg.setSource(28734U);
    msg.setSourceEntity(218U);
    msg.setDestination(56887U);
    msg.setDestinationEntity(136U);
    msg.timeout = 34440U;
    msg.lat = 0.6508936412620286;
    msg.lon = 0.35192506758077624;
    msg.z = 0.9243998013788455;
    msg.z_units = 104U;
    msg.speed = 0.5792047515184668;
    msg.speed_units = 125U;
    msg.custom.assign("VRQYTWOXYMIEHPDPJRNMCJRYCLFKBMILPZIYUJOVGNJVUXGFDUKSH");

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
    msg.setTimeStamp(0.33483083442744177);
    msg.setSource(58031U);
    msg.setSourceEntity(73U);
    msg.setDestination(21069U);
    msg.setDestinationEntity(70U);
    msg.timeout = 11516U;
    msg.lat = 0.7365336927008469;
    msg.lon = 0.13738116831348546;
    msg.z = 0.7200642099079306;
    msg.z_units = 130U;
    msg.speed = 0.6910234141174242;
    msg.speed_units = 123U;
    msg.custom.assign("LRBXYALZRDOIFJTUJTPEBVSBFZHFZIZCQHIQRXEOUUFXAIMIKQDECFPLOIWEKYKCDWTXPHKXRUVZCUNUJJQAOW");

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
    msg.setTimeStamp(0.570531178418393);
    msg.setSource(33396U);
    msg.setSourceEntity(106U);
    msg.setDestination(61172U);
    msg.setDestinationEntity(198U);
    msg.timeout = 36331U;
    msg.lat = 0.15497456416550504;
    msg.lon = 0.2252596091497664;
    msg.z = 0.22042207891014254;
    msg.z_units = 35U;
    msg.speed = 0.5711792731811787;
    msg.speed_units = 106U;
    msg.custom.assign("CRDPJOAJFYMNSNTWPGBIRUGBUDXFBFBHQEJ");

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
    msg.setTimeStamp(0.4027088107438036);
    msg.setSource(30557U);
    msg.setSourceEntity(79U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(80U);
    msg.arrival_time = 0.742135947839118;
    msg.lat = 0.30258498145668866;
    msg.lon = 0.46165376354883836;
    msg.z = 0.38629549775363825;
    msg.z_units = 105U;
    msg.travel_z = 0.7845743345016009;
    msg.travel_z_units = 185U;
    msg.delayed = 194U;

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
    msg.setTimeStamp(0.06963053265797514);
    msg.setSource(20205U);
    msg.setSourceEntity(151U);
    msg.setDestination(52464U);
    msg.setDestinationEntity(49U);
    msg.arrival_time = 0.4968377693182562;
    msg.lat = 0.8918254306572939;
    msg.lon = 0.04015688894548142;
    msg.z = 0.2803227031217168;
    msg.z_units = 253U;
    msg.travel_z = 0.6808725032609386;
    msg.travel_z_units = 242U;
    msg.delayed = 190U;

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
    msg.setTimeStamp(0.3126082730711758);
    msg.setSource(8356U);
    msg.setSourceEntity(95U);
    msg.setDestination(48041U);
    msg.setDestinationEntity(101U);
    msg.arrival_time = 0.4095457305232698;
    msg.lat = 0.4615709713677365;
    msg.lon = 0.0586720680589502;
    msg.z = 0.2979010229492719;
    msg.z_units = 251U;
    msg.travel_z = 0.10101279496164117;
    msg.travel_z_units = 198U;
    msg.delayed = 24U;

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
    msg.setTimeStamp(0.8347942148119616);
    msg.setSource(40953U);
    msg.setSourceEntity(188U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.5314903590373632;
    msg.lon = 0.18783787716363465;
    msg.z = 0.8742671282290183;
    msg.z_units = 132U;
    msg.speed = 0.9892154846057986;
    msg.speed_units = 58U;
    msg.bearing = 0.6527040191354289;
    msg.cross_angle = 0.13916173372448748;
    msg.width = 0.3945687552126289;
    msg.length = 0.42904803560409543;
    msg.coff = 155U;
    msg.angaperture = 0.8396507570643027;
    msg.range = 20343U;
    msg.overlap = 116U;
    msg.flags = 3U;
    msg.custom.assign("BWAPADBHGSYABLBVCVPOPOSRSUMJZUDRBIRTHQVIZXBRKIFDAHEAIZVHENIUSJRFMHSRNXXFYTCXRPROATDPAOGEFVNUXWMMZWBKPTSCSOFNNWNYQHJVDGWGLGHG");

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
    msg.setTimeStamp(0.05112048440243011);
    msg.setSource(25946U);
    msg.setSourceEntity(223U);
    msg.setDestination(2902U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.6530963674856906;
    msg.lon = 0.11433905017772417;
    msg.z = 0.13008848469232592;
    msg.z_units = 155U;
    msg.speed = 0.4560193431481787;
    msg.speed_units = 244U;
    msg.bearing = 0.4431537611973534;
    msg.cross_angle = 0.6413956493291447;
    msg.width = 0.4616060530462365;
    msg.length = 0.5354264741965152;
    msg.coff = 225U;
    msg.angaperture = 0.4761853920401474;
    msg.range = 6361U;
    msg.overlap = 210U;
    msg.flags = 211U;
    msg.custom.assign("XYCXANUPWYNYEIWCDYUM");

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
    msg.setTimeStamp(0.9295393470671961);
    msg.setSource(1387U);
    msg.setSourceEntity(56U);
    msg.setDestination(64637U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.8692884673552991;
    msg.lon = 0.6147075002063797;
    msg.z = 0.322134601304944;
    msg.z_units = 55U;
    msg.speed = 0.6312042973302986;
    msg.speed_units = 221U;
    msg.bearing = 0.4382179587531402;
    msg.cross_angle = 0.8188586254694437;
    msg.width = 0.5007233711417135;
    msg.length = 0.7634826503382457;
    msg.coff = 134U;
    msg.angaperture = 0.055531999535675336;
    msg.range = 59822U;
    msg.overlap = 189U;
    msg.flags = 140U;
    msg.custom.assign("XGHAJYJWVCHRQLQRQGXWAFPKBRBOBKMOXJMJWQHWUOPPTGYGUZMCRMYXIZAGFJCQESAQCWDXTUABHYXYWNDVRIQCMVHYLXZXIAJZOZKJZCLK");

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
    msg.setTimeStamp(0.8733756362130776);
    msg.setSource(303U);
    msg.setSourceEntity(102U);
    msg.setDestination(56447U);
    msg.setDestinationEntity(130U);
    msg.timeout = 30657U;
    msg.lat = 0.0012710674613091166;
    msg.lon = 0.9362541489104915;
    msg.z = 0.6143396538077686;
    msg.z_units = 188U;
    msg.speed = 0.031574236381404885;
    msg.speed_units = 109U;
    msg.syringe0 = 56U;
    msg.syringe1 = 40U;
    msg.syringe2 = 217U;
    msg.custom.assign("VRUOQWEHBERJQXXBTVMNNSYHPXLUBTVIDTASHHEQSLYIWAFDUHOCRDGACUKDYCLWLRCTREBCEMJGTJGGPFYBILKJFVDVPRWZMRGKTIGNNORMLSABMTMQGQYLEBJADKOEBINHWQNVYGXROSOWXOMSISGHUJZETMA");

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
    msg.setTimeStamp(0.6166058374751959);
    msg.setSource(33829U);
    msg.setSourceEntity(73U);
    msg.setDestination(24827U);
    msg.setDestinationEntity(155U);
    msg.timeout = 42443U;
    msg.lat = 0.7923345271185572;
    msg.lon = 0.09310241078849801;
    msg.z = 0.3329794830078545;
    msg.z_units = 36U;
    msg.speed = 0.5940819330915857;
    msg.speed_units = 74U;
    msg.syringe0 = 37U;
    msg.syringe1 = 158U;
    msg.syringe2 = 18U;
    msg.custom.assign("UDUMBDGKHRAKZWSSSTHFXQTNYMWVQHAGGIZIGDUIKDSERTJZMARRQXOQOBILZVWYRVLHPCZXJMASOTUTEVPKUKCHZZUZYLWNLBETGACQZQNHVVDCDMGVKEXIFDRPLSOBBBVCKEKHYVMRFNJTQJXXGLNRFARVTJHIAPUEJHNIFMCZCIEDJAPKWYEBWFPQOBOYXTNLRWQKG");

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
    msg.setTimeStamp(0.9105863987363367);
    msg.setSource(9685U);
    msg.setSourceEntity(129U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(214U);
    msg.timeout = 36915U;
    msg.lat = 0.8141178101625797;
    msg.lon = 0.9424712776980891;
    msg.z = 0.35946453219331076;
    msg.z_units = 181U;
    msg.speed = 0.6296241701071558;
    msg.speed_units = 45U;
    msg.syringe0 = 46U;
    msg.syringe1 = 153U;
    msg.syringe2 = 147U;
    msg.custom.assign("EUAQSBEOJIRTLMGDIJPFTZWDHVXTKOLHGJEFMYUGERFCURCXAXQH");

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
    msg.setTimeStamp(0.6792265025278287);
    msg.setSource(15364U);
    msg.setSourceEntity(113U);
    msg.setDestination(24138U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.39860221084594327);
    msg.setSource(43236U);
    msg.setSourceEntity(3U);
    msg.setDestination(21725U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.9240632618179295);
    msg.setSource(14930U);
    msg.setSourceEntity(54U);
    msg.setDestination(23608U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.1084019631486024);
    msg.setSource(18151U);
    msg.setSourceEntity(187U);
    msg.setDestination(53134U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.9405789290086893;
    msg.lon = 0.7816620351168445;
    msg.z = 0.25577015859467067;
    msg.z_units = 120U;
    msg.speed = 0.013095566505467615;
    msg.speed_units = 119U;
    msg.takeoff_pitch = 0.06415031456945364;
    msg.custom.assign("QCHDLEVPREDZCJMQSIENUIFLFGGAIMNAPYNZUZTPWDOUTFTXS");

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
    msg.setTimeStamp(0.4254873424178811);
    msg.setSource(2057U);
    msg.setSourceEntity(179U);
    msg.setDestination(52740U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.1005794812289722;
    msg.lon = 0.9393590114859942;
    msg.z = 0.6292812844696763;
    msg.z_units = 126U;
    msg.speed = 0.6133866160784495;
    msg.speed_units = 140U;
    msg.takeoff_pitch = 0.13065674135076855;
    msg.custom.assign("SZKZUJVOEKDTGPFTSJBQOEIELSMVXWAYJHIBWFPPIQMUPMXZJMPTURCGRQNPUCOXLXTNZSLKXAQGQKYZJITLCKYUAJNZHGYMYFVPVAXDNRBOPIGWCLDNEJFGZQXYPGTUDXQG");

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
    msg.setTimeStamp(0.543274630029406);
    msg.setSource(37032U);
    msg.setSourceEntity(165U);
    msg.setDestination(22866U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.2690534084092765;
    msg.lon = 0.37644560441269226;
    msg.z = 0.23416068407112778;
    msg.z_units = 166U;
    msg.speed = 0.015132776829592576;
    msg.speed_units = 112U;
    msg.takeoff_pitch = 0.7214312458180641;
    msg.custom.assign("QXGYPKIGGWYBCFIQKOMOITERBWFYXMZZYFEWTTJQJEAUVYADPFEMPDVSOIVBKTMLPRXZQHVSXMTJEARBNURXWSZYXIPFUSIRUBNQUSZSBDWNRPHFWCCRMVHKKAKGFHWQOJIKLTVQQOWBDZTXEGUCEEGNCOHLHKMEWUVAUGAHSNLBDJFHJKRAGNCRDNONPDVIEHAITHDQCMKGFGULAVJO");

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
    msg.setTimeStamp(0.753773664302231);
    msg.setSource(29452U);
    msg.setSourceEntity(13U);
    msg.setDestination(2044U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.1972974504165903;
    msg.lon = 0.21341423604227905;
    msg.z = 0.7368708175885902;
    msg.z_units = 127U;
    msg.speed = 0.8405042902133452;
    msg.speed_units = 226U;
    msg.abort_z = 0.3771536297505912;
    msg.bearing = 0.28591134188708567;
    msg.glide_slope = 36U;
    msg.glide_slope_alt = 0.6051165910789761;
    msg.custom.assign("LERZQIOKALGHYFHMEIGWHVYRMARYKMWXANTNBSVYMFOCBVXJGSBBJEELSCZVTLWFFEDBZGIDFMZZYCWNQCWDJASZHUAVRKSUQASWHOGDHGZCNVZM");

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
    msg.setTimeStamp(0.96246032603896);
    msg.setSource(16100U);
    msg.setSourceEntity(172U);
    msg.setDestination(27034U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.9083597118491659;
    msg.lon = 0.03890336529909233;
    msg.z = 0.340633219122758;
    msg.z_units = 62U;
    msg.speed = 0.8494938229726029;
    msg.speed_units = 252U;
    msg.abort_z = 0.4402380295726862;
    msg.bearing = 0.3537483846935735;
    msg.glide_slope = 251U;
    msg.glide_slope_alt = 0.46428760645748324;
    msg.custom.assign("ZSPIQULQMSEXPBWIECIQUVHHXGJJBNEGEKVGNEGOYBMDYWNFOCKETRIAQTIJHKFYBLMVSVHJNDBXYGYWSUPJIMERXHOTMUFDZLVISWJJJNGVOMRAVBCCZDSSFODNXFAFDTRZXNGHBTPLFMTAOXLAFQNPAPYCOJZVBHMKQIXQAZXGSYEVCGIZMBPZKHSPLADQYLUSKP");

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
    msg.setTimeStamp(0.9735885789602244);
    msg.setSource(10933U);
    msg.setSourceEntity(49U);
    msg.setDestination(36345U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.23668122922468504;
    msg.lon = 0.4548961976200121;
    msg.z = 0.2796986597397886;
    msg.z_units = 78U;
    msg.speed = 0.87928344457026;
    msg.speed_units = 100U;
    msg.abort_z = 0.7024852311491561;
    msg.bearing = 0.11751387711851469;
    msg.glide_slope = 29U;
    msg.glide_slope_alt = 0.09245959889193534;
    msg.custom.assign("PWYOGCLATUDRTFBIRNJUJLLYQGWPQWKJKEMESXXBPSNZUSITHSKRWYRVXLPDKDFKLDZOASMRBCVLPVJVIXRISRAYPURWZKOPBPSRBTLKNGC");

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
    msg.setTimeStamp(0.5257894256035502);
    msg.setSource(9986U);
    msg.setSourceEntity(142U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.7044334089004184;
    msg.lon = 0.2246416171468043;
    msg.speed = 0.4162752843675156;
    msg.speed_units = 35U;
    msg.limits = 214U;
    msg.max_depth = 0.29311281605965755;
    msg.min_alt = 0.9063918476478232;
    msg.time_limit = 0.6206911239272668;
    msg.controller.assign("WVCMSIYFTGULHMBOFYRUYMTDUCZCNNFLINOERNBPYQZRGAGCEXEVCPEOLAPWOEYRTPXKBRWMPKUDNSEQGITGEDCDQMDFTIJJPIKXVUJFPWJHHQ");
    msg.custom.assign("ABDWTXBRTFGDXNPZJJXHVOCPUBGBOFUMZAWHNEIMNZEUSNODMCJAPFLRZVCOKFRAYLMFXJAHPRHQOLUTZALHZCEUMWKATIGNVFSYJQEYPEMQTQWCLXYJMQCSIKMQRSTPBVOIMUBKITXGZOKHNKRVKSPSBQIHDEPFDKRGXFOBSLQWUETRYHDDOLZWLGHGUCKHVXPADJIWSJ");

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
    msg.setTimeStamp(0.22606248232108783);
    msg.setSource(51330U);
    msg.setSourceEntity(53U);
    msg.setDestination(24782U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.12632219903374986;
    msg.lon = 0.5590834260425641;
    msg.speed = 0.8953954969550784;
    msg.speed_units = 44U;
    msg.limits = 170U;
    msg.max_depth = 0.5986535862891947;
    msg.min_alt = 0.28471633420922393;
    msg.time_limit = 0.4126210771836012;
    msg.controller.assign("DVKCWEQJTRHVUYAWAJAUOFYAVBJCHILJQXXNVNWMCNOQITIPCRZNHGUDGDKAJQKCOBPHOKZDHQNOZZNMLDXYFTMSYBPWNTCSREGMIKWRAXSRUYHQJVRQJAUXEGEIZHL");
    msg.custom.assign("BNASDUGAONKEXBBGPMHQKSLVAJAKIKRUHZYQUYEELHPVRWDHTHXICOCOYALVZWFLJWGMNDUOSPHGTPFZQDKTBETJBJTDPBVPAOGYBAGFTTVNHQNVFUKIESLTLWYCMQYRRXQBWWEMSMXMPEJRIORUZYZXFHVYUEIDNZAUSWJ");

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
    msg.setTimeStamp(0.6945582259781469);
    msg.setSource(54715U);
    msg.setSourceEntity(53U);
    msg.setDestination(13300U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.8887475973809229;
    msg.lon = 0.7542366389177612;
    msg.speed = 0.7655611563810596;
    msg.speed_units = 196U;
    msg.limits = 166U;
    msg.max_depth = 0.029936889029449243;
    msg.min_alt = 0.22171619179630742;
    msg.time_limit = 0.9889694566857522;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.26640015857557;
    tmp_msg_0.lon = 0.3136732230267196;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BYOIBFPLWLGISUQJOCPFPDAPEHOTUVDPCJYONIRJVRBGDAQXPHZHCTTMLYVQKHQNSRLFYECJUCEMBQKDECNVGLFWHJBXZRERTXJOTZBIPLBZSYGWRTCAVIKUBQMIGGGKMPVCSHFSRUUKIAXXWEEQMHNAXELZMTOEDWCDHUIZWSQAAVDFAULSQYISKNZXY");
    msg.custom.assign("FVNZSFJBIQGIYURKDGVKZLNG");

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
    msg.setTimeStamp(0.6436289562292471);
    msg.setSource(54863U);
    msg.setSourceEntity(51U);
    msg.setDestination(33056U);
    msg.setDestinationEntity(201U);
    msg.target.assign("JKLMPMCGBINRWZWGZRIEKBSNZDQKRIMVQITAHRGQVMODVUFQXLLCTXSCBREXYWCTPMOLZHDJTLYPXYIYHPNKSCFJEBODBGAJYWIZXTDUWIFKLERUTZMGASFBEWDRUZERUVJUQFQGTSTPATVEPHCJSJDOUVZCHAXOUBXKRKZFPCJVBAYGLJPDQOSYVPIPEFZBMO");
    msg.max_speed = 0.9495941561249404;
    msg.speed_units = 2U;
    msg.lat = 0.5245493289587397;
    msg.lon = 0.3879200033220407;
    msg.z = 0.34836894577609734;
    msg.z_units = 18U;
    msg.custom.assign("JABYWITQFWWUKELJQZSJDAUXANGYQAUWNGSFUBSZGPKTPLDFNUZDHVIDMTR");

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
    msg.setTimeStamp(0.8977286638261267);
    msg.setSource(49492U);
    msg.setSourceEntity(157U);
    msg.setDestination(33943U);
    msg.setDestinationEntity(65U);
    msg.target.assign("WWJCINOFPGGSAMLZBYEMCJLWSSTFONBMESZOLVYKAHVWJFDFIOLLVVYBGWAAWNBWGEHQPFSLEICRVXSQCTQXBIVHBBQON");
    msg.max_speed = 0.5783343433314339;
    msg.speed_units = 8U;
    msg.lat = 0.023518759215833684;
    msg.lon = 0.987843939904266;
    msg.z = 0.26712135215673194;
    msg.z_units = 58U;
    msg.custom.assign("QHJGIGRDYEYQODZEVDZCKSXYZJMGPLHGCIAJFMJJZRUSYVYXCATKIDCGXGLPIDOLWWHZLAAVTWFVBKBACYXKXKQWKYROODWUWJBPGVZRAIPKRVHRNOUPHXSGQFQCWBFRHCX");

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
    msg.setTimeStamp(0.37317608914063205);
    msg.setSource(16163U);
    msg.setSourceEntity(143U);
    msg.setDestination(55230U);
    msg.setDestinationEntity(184U);
    msg.target.assign("XXVEVMAIWAABBEAZUECTSCRGRMKRGEXTSNNRWWFCDZGPQSF");
    msg.max_speed = 0.7092382229901203;
    msg.speed_units = 187U;
    msg.lat = 0.3847586208955962;
    msg.lon = 0.8597205873339644;
    msg.z = 0.3281725141787226;
    msg.z_units = 78U;
    msg.custom.assign("ATQTGEGVPTILOJYAKBWZBTGEPYVRELEZHKDHVBHQBZYWNFFKXLDRYHXPLJXFTFJMPIQXJWHYLODWHRGPRQKWKDXABTRSSFBMMRSCZUNNVOJISCYICOCFCUBADKVCXQPCGNLDZMVXUOEIAFJMUBBZQGDGLQKA");

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
    msg.setTimeStamp(0.05207852573507621);
    msg.setSource(14980U);
    msg.setSourceEntity(253U);
    msg.setDestination(34136U);
    msg.setDestinationEntity(153U);
    msg.timeout = 45604U;
    msg.lat = 0.8814511465391653;
    msg.lon = 0.5717875408875926;
    msg.speed = 0.5775003359406138;
    msg.speed_units = 176U;
    msg.custom.assign("IHTBIHAKZJIXIMQUZVHMBSIZUWTVRMKEWGRLSKHIOLXDKZCYGKVIZDALNOQGFFWAUDFOQJGCNNLYSRBABVHWTLPZNWPRJEUCQCGBEXJGZTFEPHDVFTXCHQSSTUONBQBEOJYQJGPCPFFTVRIJBNLALFMGVVIEGDXEEVPNVSUPXZYKEU");

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
    msg.setTimeStamp(0.85093049775982);
    msg.setSource(7531U);
    msg.setSourceEntity(47U);
    msg.setDestination(6426U);
    msg.setDestinationEntity(95U);
    msg.timeout = 7097U;
    msg.lat = 0.06538658995520419;
    msg.lon = 0.7923959020680256;
    msg.speed = 0.3501044456672644;
    msg.speed_units = 136U;
    msg.custom.assign("HCDDBHQDPCTSKMKHXGKWYFSKLTEFOQLBDJPWEQXQYVWFKVLBPBVDWMJZRGOQZLRDMWYAABYCBLAROVJCIAIADIARTEWZSGVIVXWFPCZTUFZEMBUOLTREXQFGPPKIMQINCPLXMESNMYUQIUONIRUGINVCJYZEJOTXWMVBHUJGGMSLHYHQSOAXIAQDRKCPXCBZYHBDAOUJLNFAZTSRDPXFSUGEVEUZMT");

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
    msg.setTimeStamp(0.16740219977356796);
    msg.setSource(6418U);
    msg.setSourceEntity(198U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(240U);
    msg.timeout = 10419U;
    msg.lat = 0.8247623075317234;
    msg.lon = 0.4023370007931646;
    msg.speed = 0.8160470439406879;
    msg.speed_units = 148U;
    msg.custom.assign("OYDSDFYMLOZNIIPWKEZHOFZPVUNXAXJCOARQLPMNLFXDTKFDBTQBRZTHIDILXIRQGGJAPAPULNRSCEJCVNMNEDGZFICVNF");

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
    msg.setTimeStamp(0.7538438136529744);
    msg.setSource(6618U);
    msg.setSourceEntity(154U);
    msg.setDestination(63303U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.12856609908919925;
    msg.lon = 0.5810897356650934;
    msg.z = 0.26400826157643;
    msg.z_units = 98U;
    msg.radius = 0.5945405771858353;
    msg.duration = 8139U;
    msg.speed = 0.3548071562555195;
    msg.speed_units = 48U;
    msg.popup_period = 62540U;
    msg.popup_duration = 47079U;
    msg.flags = 120U;
    msg.custom.assign("FGLOLYXGTINRINVTPSIICKUH");

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
    msg.setTimeStamp(0.7805162668547625);
    msg.setSource(37530U);
    msg.setSourceEntity(192U);
    msg.setDestination(47519U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.6155362036888682;
    msg.lon = 0.9691878558796849;
    msg.z = 0.6057307686627952;
    msg.z_units = 53U;
    msg.radius = 0.32814158293458495;
    msg.duration = 47812U;
    msg.speed = 0.4352644384800972;
    msg.speed_units = 27U;
    msg.popup_period = 50817U;
    msg.popup_duration = 50453U;
    msg.flags = 147U;
    msg.custom.assign("VBCASMZXQDJBKAAXHKTQYXYCWNRHUMTBQLENELTPOFGIICQMRXABQJUZAKVWGLOFOBBQNAJIVZRLKPKDJLWJSMMOOMHPYWXBRQWUJNKHQIWECFJOSXQEPCTGGASFKATHDXEVYTCPPYXJBOFUSGDWUASGITFZDSHDI");

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
    msg.setTimeStamp(0.16466720933587087);
    msg.setSource(55153U);
    msg.setSourceEntity(93U);
    msg.setDestination(4170U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.3025499353352731;
    msg.lon = 0.9134122417757055;
    msg.z = 0.49278694497997566;
    msg.z_units = 111U;
    msg.radius = 0.6347573876292858;
    msg.duration = 19034U;
    msg.speed = 0.015402563801785174;
    msg.speed_units = 45U;
    msg.popup_period = 110U;
    msg.popup_duration = 42017U;
    msg.flags = 71U;
    msg.custom.assign("IDYONKYSRTZSBHGNTMWZLDMPGBGIFQCATPLJXGVZKZVZJRRDICESRMBMLCUZQNRMHRUIMTUVUHVCNHIJASFEISBOAQWWYSELKLHEOHFWUFEBZPHKDOGMHYFIOWQIXRZRDFWAUNOZAO");

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
    msg.setTimeStamp(0.06717062388816919);
    msg.setSource(46814U);
    msg.setSourceEntity(30U);
    msg.setDestination(9938U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.1114224092567041);
    msg.setSource(56137U);
    msg.setSourceEntity(143U);
    msg.setDestination(58656U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.7677368250827837);
    msg.setSource(8501U);
    msg.setSourceEntity(152U);
    msg.setDestination(20381U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.9945586060299532);
    msg.setSource(62611U);
    msg.setSourceEntity(30U);
    msg.setDestination(6769U);
    msg.setDestinationEntity(240U);
    msg.timeout = 20124U;
    msg.lat = 0.0985570590013004;
    msg.lon = 0.6708246843723861;
    msg.z = 0.8445317601126567;
    msg.z_units = 159U;
    msg.speed = 0.4914990697392436;
    msg.speed_units = 127U;
    msg.bearing = 0.20599597173747797;
    msg.width = 0.3440409962261961;
    msg.direction = 209U;
    msg.custom.assign("WYBTIISZJBJNRUDNFVPFYBCSDXUVEHDYUXYJESAQHIFHYOWNKBAASJXRECGSXQLXLBHXMZLZISIGSNMBELWDFNHSFLLEPQNPOQGQYKHLLOAEIUAGWOZCKWCKKZZPVACQGRPTTJDHAOOZMODJKJXUFMGFBHPBEDIVPPZCZCEETUM");

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
    msg.setTimeStamp(0.7342592473846711);
    msg.setSource(30710U);
    msg.setSourceEntity(179U);
    msg.setDestination(5950U);
    msg.setDestinationEntity(41U);
    msg.timeout = 5942U;
    msg.lat = 0.3587659170012698;
    msg.lon = 0.08318535965458906;
    msg.z = 0.6749623232293372;
    msg.z_units = 148U;
    msg.speed = 0.48413219323988754;
    msg.speed_units = 166U;
    msg.bearing = 0.15515744380820506;
    msg.width = 0.9090352879883676;
    msg.direction = 78U;
    msg.custom.assign("YXJUBDSKJTYMHHTUGEOSADMMUQKEMEQBUXWAFFZJLQDSLXUMSJILWZOGJOCBPFYCWLRQ");

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
    msg.setTimeStamp(0.6605626988893136);
    msg.setSource(28049U);
    msg.setSourceEntity(81U);
    msg.setDestination(32306U);
    msg.setDestinationEntity(221U);
    msg.timeout = 54023U;
    msg.lat = 0.2715548175644765;
    msg.lon = 0.9966040054826625;
    msg.z = 0.14210229121734597;
    msg.z_units = 252U;
    msg.speed = 0.5987491789700411;
    msg.speed_units = 80U;
    msg.bearing = 0.6659447877723931;
    msg.width = 0.7608173648222339;
    msg.direction = 170U;
    msg.custom.assign("QUMNSYDJHKFXKUMACWXJXTDKBCRFGEFBXTIRBPJAPNOSCMB");

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
    msg.setTimeStamp(0.9107373877279462);
    msg.setSource(19358U);
    msg.setSourceEntity(53U);
    msg.setDestination(5773U);
    msg.setDestinationEntity(65U);
    msg.op_mode = 31U;
    msg.error_count = 141U;
    msg.error_ents.assign("HWKDKQWBPOMMNUMPDRULLHWHOCWZIFXYRTLWUZGVINVOQCGLHDXDKYMHOMEODQLEBMCSFAQXQSVBJUKBTKFTF");
    msg.maneuver_type = 49377U;
    msg.maneuver_stime = 0.31565264973601415;
    msg.maneuver_eta = 2411U;
    msg.control_loops = 4106476720U;
    msg.flags = 232U;
    msg.last_error.assign("MGTVJTRAUPDFGSIOAKHENFYFNTZRNXLCIHYXDXOUXEGFUNWSVHWQYWUBYSJANMGSMJJOPVBTIQHBWEDSLZSIXNZEZCJGTUFXOLJDPXDZEABSEIVOJLFCQZTTOPPUJVOPLUPKNJNBYSMYQWOWDXZLYRLRRBPQMVBDWBVCYCYAQVCACUKFMIIGYZKRQHKXDLEVKMAMWHWBUIPNJRGLKKRSIHTQHADCMHPKKQFUXCEEGGFFOVBTMCETRSQLHZANO");
    msg.last_error_time = 0.18518675645033345;

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
    msg.setTimeStamp(0.5945912405809161);
    msg.setSource(44466U);
    msg.setSourceEntity(201U);
    msg.setDestination(39308U);
    msg.setDestinationEntity(110U);
    msg.op_mode = 119U;
    msg.error_count = 247U;
    msg.error_ents.assign("QVAQBHILCLNNQIBVODWLJLTRKPLBZKCBAJXPXNNPYFHHGVADIHYCXATQILTSDLMDHTJCSOYARUFEAWYKZPXRJRKSTHMVFZWOEKGZPTXEXRRESRTBSEOHIFHJSYKDKXLYUOQIJMWAVKEFLZWJAPWFFIRNCGQZSJYYFVCUOOVZRCNMDPGUGXUWGJZTMAIXBVUOBXBTGUVBGBWSFLKPCEZRUJNQHPEZHEYTQNDOGWFQMOUWDSIA");
    msg.maneuver_type = 35459U;
    msg.maneuver_stime = 0.8507246498810599;
    msg.maneuver_eta = 22098U;
    msg.control_loops = 3897500986U;
    msg.flags = 125U;
    msg.last_error.assign("HNBRBYLDFGPJNYESMRDQSAJKKVGPTIHUHLHAKRKRHKADATAIWFSYISIQFXTXQSINOCONBMFZCRZDBTNREJTPQCFGEYHLYCLLKDBLSODSQQYZHWJLREVZXGFUCMRSWUUOYSPUVCNVNYOMIEMKLAXJCJRGERFGAPFDQIBADVBZXAXDVGOJMEHCIMFU");
    msg.last_error_time = 0.9185883741185519;

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
    msg.setTimeStamp(0.7423603746325709);
    msg.setSource(42145U);
    msg.setSourceEntity(248U);
    msg.setDestination(15592U);
    msg.setDestinationEntity(253U);
    msg.op_mode = 34U;
    msg.error_count = 91U;
    msg.error_ents.assign("KQCSFLJDWZFACVEXZHLAXJOVEQBINZLMTAZRYGUQLHMQFNDVPDMFWEINNADJSTHTI");
    msg.maneuver_type = 10262U;
    msg.maneuver_stime = 0.9498199343077489;
    msg.maneuver_eta = 4792U;
    msg.control_loops = 2378972893U;
    msg.flags = 86U;
    msg.last_error.assign("VWKXKFCTATCOHDTIANTIAUSTJWCYTMZNQYBYEPYPDOJYVDLVFAKKXFYPOCHVFJGGQWCXZHDGZJPBIRGILEJCXOKTUKBSPVIENPLOOZQNLSDOMDXRRACJMQGFCBAZNUMBVAMOTHBREYMRFNAWURZIZSWWQLNXLAVFMBEWDLEJSMHBSGQAXCEULKWZEVNJOREJXDFNRIGYQIPZGPQWFSRJVLHUPQRGHBUXEGHSYIXFT");
    msg.last_error_time = 0.8017591493526585;

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
    msg.setTimeStamp(0.8394436550904674);
    msg.setSource(59478U);
    msg.setSourceEntity(123U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(69U);
    msg.type = 113U;
    msg.request_id = 2260U;
    msg.command = 171U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.8041801470928756;
    tmp_msg_0.lon = 0.07238227570345879;
    tmp_msg_0.speed = 0.8767612515622418;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.limits = 208U;
    tmp_msg_0.max_depth = 0.24115422278707754;
    tmp_msg_0.min_alt = 0.4459018210177381;
    tmp_msg_0.time_limit = 0.4977573546735462;
    tmp_msg_0.controller.assign("HPRYDNWXWKIODRHDOZQQGOUMLXNSVIVLNTFXOUNPMGTJFF");
    tmp_msg_0.custom.assign("DPRGVKPPBOIMUWGMOREULOOGBTFVTEUUPWXYEKKIYFBCVHAAZQCFJWIYEIKNLYTBJOLODXUBJVTLXWKHZHUCVBCYYQXBMDRNYMSNVQZYYZKXDMTQWHHTOBSAZMGDJJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11482U;
    msg.info.assign("WUVZKSCEFOZPKBPEKWEIGIKQFPCXOHZCDUWZGIDTXJNBFALJLSCOVBEJHCMSTSLBKJNAMYKCVNURMTNCXQHPOSWPKLVFOJVZHUGYYJNIYDDLBJWGZBIQDPNLPZLAQFYCQSDVVWTWSREHTWYRPRFIUQSTLZEROMFTUPYNNPYVMZXTGJDHWMBRJXZDESLQGEQKXUORDGRYXODAB");

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
    msg.setTimeStamp(0.12490467565261842);
    msg.setSource(41230U);
    msg.setSourceEntity(154U);
    msg.setDestination(42920U);
    msg.setDestinationEntity(133U);
    msg.type = 244U;
    msg.request_id = 9262U;
    msg.command = 33U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.8192184298423479;
    tmp_msg_0.lon = 0.35348204829970753;
    tmp_msg_0.z = 0.45471966067811687;
    tmp_msg_0.z_units = 22U;
    tmp_msg_0.speed = 0.6113947406194526;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.custom.assign("GHHAWZZXIQXIAWVYFVDXIVDFGUDZXIBNGQEKNISPOHTUERTSZKZMBUWCEKGPJUTCYARKQUIKLLNLRHKLHIHMTLTXORVYRXDWITMLHSLMHJIJWDONRJYDYKGPENFXEBXFYFTUVQXMBNABCBVUZAANGMZPKCOSGSGNMDCUJRPBCMOEOSR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48310U;
    msg.info.assign("XMHVDLXUVCTEVSGNJPQHUNHCPRETGRFIPGVYJKUFZAJGEQTFKXUDCYSHWNSVLIHSSDLZKPKQCFBHTJXQPADATJMOPMROOOCXZNOKDOWGXDQXTMF");

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
    msg.setTimeStamp(0.006262329848128356);
    msg.setSource(17227U);
    msg.setSourceEntity(251U);
    msg.setDestination(31860U);
    msg.setDestinationEntity(82U);
    msg.type = 4U;
    msg.request_id = 22420U;
    msg.command = 132U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.4176925577494982;
    tmp_msg_0.lon = 0.41686440677474723;
    tmp_msg_0.z = 0.81479981855358;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.speed = 0.43106624539412397;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.takeoff_pitch = 0.034601905599618954;
    tmp_msg_0.custom.assign("COZAZEFKLZAJJBQOWGCGIMUQOWYDZJPSUAWOINMUSHECTVXXUWDKO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7714U;
    msg.info.assign("BIBNBEVOORNEWZNIEBUHEDPXSFJHSMHMVSZCPAMKLSJYKALCJBTOOWLOZLAKNEZDGZGFACNEGRUDSQGKRUQSQMNUIWLIWCVVHPHLYDRJA");

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
    msg.setTimeStamp(0.9145250351718676);
    msg.setSource(9238U);
    msg.setSourceEntity(172U);
    msg.setDestination(7214U);
    msg.setDestinationEntity(89U);
    msg.command = 102U;
    msg.entities.assign("VXNXKOYSMIFN");

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
    msg.setTimeStamp(0.8156878287129499);
    msg.setSource(44874U);
    msg.setSourceEntity(9U);
    msg.setDestination(29789U);
    msg.setDestinationEntity(32U);
    msg.command = 121U;
    msg.entities.assign("WYCCFMHJOAFDJIXQQREQIQYDVZXECYM");

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
    msg.setTimeStamp(0.10165583692865887);
    msg.setSource(32660U);
    msg.setSourceEntity(148U);
    msg.setDestination(58782U);
    msg.setDestinationEntity(108U);
    msg.command = 37U;
    msg.entities.assign("CLWPQEHRBVQUEKAGAJUXUKQAOTTIRFQNTGOIENJGSPCMGYGTZTMIDUWZQTHIEQSMXYIPHZWNSEAPAELBMXEDJSSYRWMVLZQZEZUIOYVUDCCONYRQEVRMQVYWTKHVFOHBZTWOIXPDQNOPBRNPFYSNSLDMWBABCHSAIJEHFCGDMMUGRBHPDK");

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
    msg.setTimeStamp(0.1692403214726994);
    msg.setSource(52991U);
    msg.setSourceEntity(64U);
    msg.setDestination(28269U);
    msg.setDestinationEntity(225U);
    msg.mcount = 94U;
    msg.mnames.assign("RYZMNBIQABEHMPHWNMPYXTTLNPIHMTJYSCQSXCEINDKVUELRVXQCZUQGKLNUAKFHESDSBORWGBLXYOOZPPGYJACFUTQBASFLDRQGOOFERCOHKSBMIFMFNFHDZUPADDYUWJRIVWGZUMSHEVZLEERGIDCNUXAKBQJJEIWDETOCWKSCGPWVNZFTNHKYWXOQOYVJDMUDUVLHBGLLARRIBXZVWQFYXMWVSANMAYP");
    msg.ecount = 241U;
    msg.enames.assign("PPGWVWADMKBMQGGA");
    msg.ccount = 254U;
    msg.cnames.assign("JIGBRHPMPADWIYUFQLTPWJPVJUFUBQBBBFVRYRLALXDKCWQXLPZARBOPCKYHATJTQOOELOW");
    msg.last_error.assign("RQOTZPULDWVCOZJRABXNPLFDZQXQAPGNSVWOGEDCBNUGYJSJOPSYKDMHALRURWAMWTRFSTDKIIGRYKIREDMKHBEFUVTHZYFAUQSLOSQZRYXBKLCDSOABBTWNEVIEGPUXDQICYDOFCZZJKPYHKURCHGKAUWVEBFHVVPTIJFKNMLCVQPTCZJYWPHXHJMPLBMGHCFJMORCEYNSAZXTIDNIFAZEEMSQLQNGYGASKITVLQGWBUWINNFTJUMXLBEHXOX");
    msg.last_error_time = 0.18478224190107218;

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
    msg.setTimeStamp(0.47473841397866);
    msg.setSource(55668U);
    msg.setSourceEntity(110U);
    msg.setDestination(17226U);
    msg.setDestinationEntity(149U);
    msg.mcount = 249U;
    msg.mnames.assign("SVLGUFISJWHVLROQPWCLGBWOQVPDNDAQEZWOCKOUEIWHFDQXXYXVACSWFUSHSUHODJEKRAIHTIUPSIYBJBDZJBKMZANIPLVTFTEXTFBPDJKBYLIOGNNQAZWKRVVVAOAZMMEQQUUIDUKTRQYKTMBDPCQLSCOJGVBYWMPNERLFHO");
    msg.ecount = 173U;
    msg.enames.assign("XGRBRBERQUKJOUCQPAYNEXICMPTJGZPAWWHAWHNHDQPBPXWJKUSMYCIGCNOWULLDYFQNWCASTDLDWLPISOJVXFFIBNWUXNZASYGTUTDKMDVJHTHQJOQXBMKJOAYQSFZQIKXKCRAMZJVIFBPTULVEGRDKYECZVMWLGYBG");
    msg.ccount = 144U;
    msg.cnames.assign("CMKRUTFTUDNMTZAGNGPVGDBOOBHTVAHCWLKQUJUIEDGDHVFFZWXHBAVLSTBLHUXTERACTJMQJAZULYVIZEPALEXGBKRXKZSLYIRMIDPXDOFUJMP");
    msg.last_error.assign("JMVDBVRTVFWCUDMFGEITGUTVEAUKXTYLBMBWOYDQDUVPUARBIWCWRUYCEQDNEQXZFAEZYAWDKCFJPHEWHEBQORFONWHVIOEJKQXSFNPZXNGROHFFVOGIQBRMNCQPLLNISWUSJXSPSLWIBIWGFAIQ");
    msg.last_error_time = 0.22802399898973402;

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
    msg.setTimeStamp(0.5297407344550971);
    msg.setSource(43126U);
    msg.setSourceEntity(94U);
    msg.setDestination(54001U);
    msg.setDestinationEntity(246U);
    msg.mcount = 34U;
    msg.mnames.assign("CBZWXYTHZTLVXVQUDOWWHTAPSAVMLADJVTEZPLJMXRUYWYYVMJOEMZBHIIYFJJSNCXLGGDVXJOXDSPZFDGTBEICJCZUSYSVBUOYNKVZADGPNIDRDARYRMTOPBZBFFCRGATPHZAHBLBOHHMRVMFXNKIRNALQJCE");
    msg.ecount = 141U;
    msg.enames.assign("ZOKWWVZKXHAWFIVYBRWIFYWKPGYTMRWYAYNLHUUQQNMCNRBYEDTIFMJJXVXVSUURA");
    msg.ccount = 244U;
    msg.cnames.assign("EORBKFUTIFIOYMWZXHUVPRAONPCTZXVBPJDBO");
    msg.last_error.assign("ULKOFIQPZRJQPBYFYYKUXPHWAWZCEPISDTKQAEGHEGSNVPNLTAKGCMEYUBMJGJHZFDCUOLSAXPQKUDMJZSHCNOPWLSXFZYFCMIQAZPQDQRRMWCBALAFZPWULMXVONIUZWQWBOJNQHBRBFZOHJURNGTWMZIJDXTEEGEBTTLLALSGJGWNHHCJTKDPYHKJRICIOVATOUGVDGSAUSRXDYXQKVKCRBLONVFEIKDVNMYVTISTMI");
    msg.last_error_time = 0.016512198212306206;

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
    msg.setTimeStamp(0.6920225043369099);
    msg.setSource(28379U);
    msg.setSourceEntity(57U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(223U);
    msg.mask = 49U;
    msg.max_depth = 0.40979901189896484;
    msg.min_altitude = 0.2856726079422215;
    msg.max_altitude = 0.09066568677917619;
    msg.min_speed = 0.7139797510818081;
    msg.max_speed = 0.6760122946897624;
    msg.max_vrate = 0.32613721314047817;
    msg.lat = 0.579607129902737;
    msg.lon = 0.3360927069767583;
    msg.orientation = 0.09357260763335762;
    msg.width = 0.20490479496065028;
    msg.length = 0.6506809597866742;

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
    msg.setTimeStamp(0.5178869638115781);
    msg.setSource(49673U);
    msg.setSourceEntity(178U);
    msg.setDestination(47205U);
    msg.setDestinationEntity(191U);
    msg.mask = 238U;
    msg.max_depth = 0.9679990458051597;
    msg.min_altitude = 0.2847224390174278;
    msg.max_altitude = 0.5700827167952975;
    msg.min_speed = 0.3452815757230492;
    msg.max_speed = 0.21917787678925738;
    msg.max_vrate = 0.6555191932962904;
    msg.lat = 0.05238690126332768;
    msg.lon = 0.5770465435429412;
    msg.orientation = 0.5832300260480915;
    msg.width = 0.0835244881088254;
    msg.length = 0.5806733954518419;

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
    msg.setTimeStamp(0.4555843131167615);
    msg.setSource(58139U);
    msg.setSourceEntity(39U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(155U);
    msg.mask = 243U;
    msg.max_depth = 0.9328418712237869;
    msg.min_altitude = 0.8078694326323277;
    msg.max_altitude = 0.5776035366996763;
    msg.min_speed = 0.5091875372053762;
    msg.max_speed = 0.3759192887207531;
    msg.max_vrate = 0.16419021265728384;
    msg.lat = 0.5876114233960629;
    msg.lon = 0.647986431440953;
    msg.orientation = 0.02824758442222597;
    msg.width = 0.16000930331372065;
    msg.length = 0.21640567677018063;

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
    msg.setTimeStamp(0.7483436482520196);
    msg.setSource(53375U);
    msg.setSourceEntity(202U);
    msg.setDestination(48644U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.7265077567404598);
    msg.setSource(31873U);
    msg.setSourceEntity(182U);
    msg.setDestination(12197U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.5140401252373574);
    msg.setSource(40507U);
    msg.setSourceEntity(8U);
    msg.setDestination(19549U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.9413892637130561);
    msg.setSource(14584U);
    msg.setSourceEntity(84U);
    msg.setDestination(45111U);
    msg.setDestinationEntity(104U);
    msg.duration = 40610U;

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
    msg.setTimeStamp(0.31038008775244286);
    msg.setSource(21260U);
    msg.setSourceEntity(163U);
    msg.setDestination(41042U);
    msg.setDestinationEntity(34U);
    msg.duration = 48156U;

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
    msg.setTimeStamp(0.15074701256918277);
    msg.setSource(24874U);
    msg.setSourceEntity(29U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(55U);
    msg.duration = 28399U;

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
    msg.setTimeStamp(0.47473571603760967);
    msg.setSource(20286U);
    msg.setSourceEntity(94U);
    msg.setDestination(47399U);
    msg.setDestinationEntity(86U);
    msg.enable = 234U;
    msg.mask = 2888675006U;
    msg.scope_ref = 3758084260U;

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
    msg.setTimeStamp(0.20729185954986185);
    msg.setSource(24520U);
    msg.setSourceEntity(31U);
    msg.setDestination(26893U);
    msg.setDestinationEntity(145U);
    msg.enable = 194U;
    msg.mask = 331360285U;
    msg.scope_ref = 4115732850U;

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
    msg.setTimeStamp(0.3485944936080143);
    msg.setSource(38182U);
    msg.setSourceEntity(165U);
    msg.setDestination(482U);
    msg.setDestinationEntity(241U);
    msg.enable = 146U;
    msg.mask = 2725111661U;
    msg.scope_ref = 434460597U;

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
    msg.setTimeStamp(0.6830170948309884);
    msg.setSource(37258U);
    msg.setSourceEntity(45U);
    msg.setDestination(18782U);
    msg.setDestinationEntity(47U);
    msg.medium = 28U;

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
    msg.setTimeStamp(0.13951461667003429);
    msg.setSource(62288U);
    msg.setSourceEntity(211U);
    msg.setDestination(60786U);
    msg.setDestinationEntity(130U);
    msg.medium = 46U;

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
    msg.setTimeStamp(0.8191830742679698);
    msg.setSource(12118U);
    msg.setSourceEntity(81U);
    msg.setDestination(3287U);
    msg.setDestinationEntity(171U);
    msg.medium = 201U;

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
    msg.setTimeStamp(0.4231108713341144);
    msg.setSource(52832U);
    msg.setSourceEntity(31U);
    msg.setDestination(60200U);
    msg.setDestinationEntity(104U);
    msg.value = 0.7915093934486889;
    msg.type = 81U;

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
    msg.setTimeStamp(0.13042503555261964);
    msg.setSource(5820U);
    msg.setSourceEntity(120U);
    msg.setDestination(56529U);
    msg.setDestinationEntity(236U);
    msg.value = 0.7259612796511076;
    msg.type = 155U;

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
    msg.setTimeStamp(0.3100194273675424);
    msg.setSource(34087U);
    msg.setSourceEntity(27U);
    msg.setDestination(37731U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8095837650749811;
    msg.type = 112U;

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
    msg.setTimeStamp(0.7013269541613895);
    msg.setSource(52367U);
    msg.setSourceEntity(108U);
    msg.setDestination(25675U);
    msg.setDestinationEntity(83U);
    msg.possimerr = 0.8948657658232306;
    msg.converg = 0.07158071721821802;
    msg.turbulence = 0.3079219721577996;
    msg.possimmon = 246U;
    msg.commmon = 230U;
    msg.convergmon = 36U;

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
    msg.setTimeStamp(0.4060562973712757);
    msg.setSource(37585U);
    msg.setSourceEntity(24U);
    msg.setDestination(43193U);
    msg.setDestinationEntity(96U);
    msg.possimerr = 0.7485962966170951;
    msg.converg = 0.6641942983355406;
    msg.turbulence = 0.36310617044543714;
    msg.possimmon = 2U;
    msg.commmon = 200U;
    msg.convergmon = 146U;

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
    msg.setTimeStamp(0.6065593414485012);
    msg.setSource(33656U);
    msg.setSourceEntity(202U);
    msg.setDestination(25650U);
    msg.setDestinationEntity(124U);
    msg.possimerr = 0.30153742204603573;
    msg.converg = 0.87431747324836;
    msg.turbulence = 0.8360071388511229;
    msg.possimmon = 156U;
    msg.commmon = 165U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.9570930641443431);
    msg.setSource(54059U);
    msg.setSourceEntity(167U);
    msg.setDestination(33308U);
    msg.setDestinationEntity(39U);
    msg.autonomy = 8U;
    msg.mode.assign("MQNQTVWZXQMVUCPEKALCERNISKEPTJDCPSDKGSFTQMXFIRJNJLPALOJBXOEVHHGLMTKQCMVYDDTFKONNAGGHASBEWFWQDRIJWZQODZIJUHEEYQSUVPVUQDDARIWXMXOCFGCXBXQIRAZSKBWLZJDHYNCBGOBKNZVFURMPIYSBWCCZRATUCSLOEDPTPYGFLLRKVNOGGYUIJBHTUSXGAKEHYLXW");

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
    msg.setTimeStamp(0.18487474462996456);
    msg.setSource(33871U);
    msg.setSourceEntity(50U);
    msg.setDestination(43381U);
    msg.setDestinationEntity(124U);
    msg.autonomy = 196U;
    msg.mode.assign("RRNCSICMNWCXORXFAVBDIXAPYCUHLZIQZQPIWTRWNFOOTJGLVKWSDGMFODCBJQVDNKBJMAIPAUFBLPYTRLFVGNWTPJRRAZUHYKKMXBECTZHLGEJMWPSVUYYBEQFZOJBTMWANFYNHGEGKVHVIUSYLRKQEPEOHCXJFSIMHOGRAZMHTLDQQZPJVELQXELKRPHJHXNPCCXUYGVZTUQBJSZBGNUDUSDGWSDAFNK");

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
    msg.setTimeStamp(0.12601536861712892);
    msg.setSource(10055U);
    msg.setSourceEntity(11U);
    msg.setDestination(5040U);
    msg.setDestinationEntity(110U);
    msg.autonomy = 85U;
    msg.mode.assign("DWLHXANQLWXYJYBNPXXERJFOAKTFZBEUHOSVHBXEACNPXXAKNZKTICHFFUYFUZDRRHXSMJLIPRZUDFDGJLMVHNORVMDBKUELPAINOKMKUAGSIBHLXZFQTVZTIAWEYCUP");

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
    msg.setTimeStamp(0.8402854362360116);
    msg.setSource(30278U);
    msg.setSourceEntity(203U);
    msg.setDestination(7840U);
    msg.setDestinationEntity(68U);
    msg.type = 182U;
    msg.op = 104U;
    msg.possimerr = 0.5417419371349761;
    msg.converg = 0.05873095825399122;
    msg.turbulence = 0.07563508907710603;
    msg.possimmon = 147U;
    msg.commmon = 202U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.9687547469339495);
    msg.setSource(10124U);
    msg.setSourceEntity(180U);
    msg.setDestination(54820U);
    msg.setDestinationEntity(244U);
    msg.type = 106U;
    msg.op = 230U;
    msg.possimerr = 0.8107037351913845;
    msg.converg = 0.5809914669926272;
    msg.turbulence = 0.6055993312585269;
    msg.possimmon = 172U;
    msg.commmon = 151U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.7885894254363632);
    msg.setSource(53511U);
    msg.setSourceEntity(73U);
    msg.setDestination(26392U);
    msg.setDestinationEntity(109U);
    msg.type = 105U;
    msg.op = 183U;
    msg.possimerr = 0.6645531256988602;
    msg.converg = 0.8091146685080398;
    msg.turbulence = 0.16091085623242063;
    msg.possimmon = 247U;
    msg.commmon = 131U;
    msg.convergmon = 250U;

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
    msg.setTimeStamp(0.07782606511694623);
    msg.setSource(6873U);
    msg.setSourceEntity(144U);
    msg.setDestination(60240U);
    msg.setDestinationEntity(103U);
    msg.op = 214U;
    msg.comm_interface = 42U;
    msg.period = 41747U;
    msg.sys_dst.assign("LFYGFQTESNPYCJMSKNQKDSNMEJMHZUBNXAJZ");

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
    msg.setTimeStamp(0.89747769584715);
    msg.setSource(38116U);
    msg.setSourceEntity(10U);
    msg.setDestination(10338U);
    msg.setDestinationEntity(93U);
    msg.op = 111U;
    msg.comm_interface = 87U;
    msg.period = 14495U;
    msg.sys_dst.assign("RZEECWJZQBSMROCXGMBXAWOFHIAJLKGWZNKEMFCVTISQIJBGZUGKGYHFNMRCSBLHOTGEKXLCMSUIYIDORHVDUPOBEZZNCAYKDLRBXBYCHWRXMPHKCUZXRKPATEJQWHYGITYMPLVNNASLBVIDPVTGQTPHONACKDEOQOEMSAXJPBQYQDHJKYNUKWRQVFOQSLCIEWLXJFYVNIGM");

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
    msg.setTimeStamp(0.9636236898178839);
    msg.setSource(26290U);
    msg.setSourceEntity(81U);
    msg.setDestination(34880U);
    msg.setDestinationEntity(172U);
    msg.op = 92U;
    msg.comm_interface = 175U;
    msg.period = 31346U;
    msg.sys_dst.assign("OMZEJITSABCXXDHLRPEYHRHWYOFSFPFIMVFQBAYAMOQOFAQSNJGKEJPSHZRRIK");

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
    msg.setTimeStamp(0.04046712135142527);
    msg.setSource(18914U);
    msg.setSourceEntity(24U);
    msg.setDestination(16635U);
    msg.setDestinationEntity(18U);
    msg.stime = 546562206U;
    msg.latitude = 0.4419131173916476;
    msg.longitude = 0.9013933712051978;
    msg.altitude = 63169U;
    msg.depth = 3820U;
    msg.heading = 7783U;
    msg.speed = -2861;
    msg.fuel = -73;
    msg.exec_state = -104;
    msg.plan_checksum = 32095U;

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
    msg.setTimeStamp(0.6406017544590025);
    msg.setSource(65117U);
    msg.setSourceEntity(32U);
    msg.setDestination(24534U);
    msg.setDestinationEntity(35U);
    msg.stime = 815789800U;
    msg.latitude = 0.31951189545231207;
    msg.longitude = 0.8289042870348321;
    msg.altitude = 24760U;
    msg.depth = 30677U;
    msg.heading = 12555U;
    msg.speed = -15158;
    msg.fuel = 19;
    msg.exec_state = -91;
    msg.plan_checksum = 5699U;

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
    msg.setTimeStamp(0.5498731136484979);
    msg.setSource(35564U);
    msg.setSourceEntity(175U);
    msg.setDestination(13663U);
    msg.setDestinationEntity(31U);
    msg.stime = 2823706976U;
    msg.latitude = 0.08013226804523366;
    msg.longitude = 0.2122563008551256;
    msg.altitude = 4350U;
    msg.depth = 20466U;
    msg.heading = 27437U;
    msg.speed = -14813;
    msg.fuel = -7;
    msg.exec_state = -122;
    msg.plan_checksum = 48828U;

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
    msg.setTimeStamp(0.6042847494065614);
    msg.setSource(55159U);
    msg.setSourceEntity(240U);
    msg.setDestination(56876U);
    msg.setDestinationEntity(146U);
    msg.req_id = 2401U;
    msg.comm_mean = 91U;
    msg.destination.assign("QXDTNQBTWCSFYNMBEORGNBWULKBVOYGSIIKXDRFSAJFAEGLRBCQLFNWYEWNBDHNRXWZLRFDSPPBXDLQNMCOMRPTXQMCQVSFAHUMVYHIEHZEPEBEXLQML");
    msg.deadline = 0.9218260940529172;
    msg.range = 0.8185160447316073;
    msg.data_mode = 237U;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("VJPCGQLDZPDVXCGANKXCBZGUYUNOIUSZJQLCEHVHJSDWBKNWYQEAHLESXKZPEBKPOJRRFGYWZKVFUGCRYRNLUYHAYXRZ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KCETXLMFLPXGMSOZGXLRDXQSQJHEDIFJAHTBSCUKGAWHSNZAFUZYIOYPAVLZXWCZXBMQMWYCHPSTBPATDMKRFPVKLKRXIKLBOMGWOSOCWAIFBTUZYMUNDDRZORACGUPWNIMQBSDKEWBLDVXUEJENGECYFVQZSITTHVGIRZW");
    const signed char tmp_msg_1[] = {51, 80, 14, -39, 22, 41, 90, -33, -57, 101, 84, -95, 8, -13, -12, 101, 110, -14, -58, 5, -20, 66, 48, 38, -25, -74, -97, -86, -10, -111, 86, 8, -125, -51, 2, -76, 54, 79, 71, -10, 69, 16, 21, -104, -62, -103, -53, 120, -83, 85, -31, 101, -75, -14, 114, -128, -51, 99, 125, -12, 18, -40, 68, -81, -84, -11, -128, -113, 61, 55, 56, 12, -41, -25, 67, 36, 66, 32, -56, -46, -9, -31, 92, -70, -54, 45, -40, -22, 94, -8, 118, -35, 50, 69, 4, -125};
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
    msg.setTimeStamp(0.7028159090130496);
    msg.setSource(54607U);
    msg.setSourceEntity(181U);
    msg.setDestination(5514U);
    msg.setDestinationEntity(116U);
    msg.req_id = 60843U;
    msg.comm_mean = 199U;
    msg.destination.assign("FGGJIIITTSLNRATVAJKJWLJXSTPQPSMPYZVYXZTKFECLFCZRDJQWNXEGUBKBHJVWOPIWLKEMDWFMOUEWNEBAEQMOZFOVCIOWYKGNDESCNPIARZCJTVQJFRRSGYXZMFQGIZZUHYAXKSMNUOGXNBUPLSTYMURDGYWNVDIHMHPHHPEKHZLCDUHJLYBFUQTEPKNXEAXQOHBAXRUSOKJCPMSBQDVOWUWSYTVDLLT");
    msg.deadline = 0.7084340710516536;
    msg.range = 0.38288353484607374;
    msg.data_mode = 249U;
    IMC::HomePosition tmp_msg_0;
    tmp_msg_0.op = 109U;
    tmp_msg_0.lat = 0.7818511854774766;
    tmp_msg_0.lon = 0.034940777599612116;
    tmp_msg_0.height = 0.5600181545723218;
    tmp_msg_0.depth = 0.4609063204307775;
    tmp_msg_0.alt = 0.10608614454261922;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YTJCZEMQSGWBJHRTELOTCNXCNHVPWHNRRKRHBXENNIKCGDZAIPDIYUYSYJKMKMAJOMLZMOIBTESJWDAPHHQ");
    const signed char tmp_msg_1[] = {36, -103, 123, -103, -2, -114, 124, 96, 106, -65, 122, 107, -108, -84, -73, -64, 6, 119, -33, 60, 71, -27, -116, 47, -87, -49, 40, -84, 76, 17, -114, -110, -28, -72, 23, 16, 116, 69, -112, -86, 75, -24, -110, -112, 12, 66, 16, -85, -44, -2, -78, -88, 102, -20, -60, 56, 42, -93, -96, 3, 2, -8, -71, -95, 98, 117, 36, 83, -53, 6, 85, -46, 74, 50, 92, -100, -6, -121, -7, 36, -45, -80, 75, -68, 89, 16, -16, 43, 75, -113, -126, 103, 19, -50, -83, 95, 66, 31, 110, -73, 79, -58, 26, 89, -50, 68, -123, 84, -79, 25, -12, -68, 14, 71, 106, -70, -15, 85, -127, 73, -40, 91, 63, 29, -41, 93, -35, -19, -89, 5, 66, -76, 65, 5, -105, 84, -121, 89, -41, 53, -20, -67, 114, -60, -33, 9, -105, -39, 30, -114, 46, 90, 24, -78, -83, 104, 19, -117, 123, -9, 31, -36, -31, 16, 37, 45, 57, -53, -67, 23, -126, 72, -15, -45, 10, -26, 99, -31};
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
    msg.setTimeStamp(0.31793331089644394);
    msg.setSource(50864U);
    msg.setSourceEntity(127U);
    msg.setDestination(50872U);
    msg.setDestinationEntity(35U);
    msg.req_id = 16143U;
    msg.comm_mean = 243U;
    msg.destination.assign("KFGTCMXVQNCPVYSYYBJDTGJLWBRUQFHETSSYS");
    msg.deadline = 0.33587845806615657;
    msg.range = 0.3913478933239717;
    msg.data_mode = 207U;
    IMC::Pulse tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CXQEOIBWRQUJNGMWZLWDPFETHRPCVRTFVULDABYGOCNBGMGKKPDVUOUHIFAUDFECOMYR");
    const signed char tmp_msg_1[] = {49, 36, -122, 123, -32, 56, -128, -49, -1, 46, 106, -62, 57, -19, 19, -97, -6, 10, -31, -11};
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
    msg.setTimeStamp(0.35366134514957714);
    msg.setSource(41947U);
    msg.setSourceEntity(187U);
    msg.setDestination(9551U);
    msg.setDestinationEntity(8U);
    msg.req_id = 53553U;
    msg.status = 142U;
    msg.range = 0.28585215377478246;
    msg.info.assign("SAOWFPQWIJAIBKJKXQWXHCMSUHTEZPDSAERWJVRWBILVEQGHTTWAOKHXICNURPKPRZESOMZUNPACUMAJQUUZFYCTIVLFTFBZMDRPJPYYLGLDQPDERNZLXLLBKFOTTNZYVGFCGPBCASHSWHTCNFHICUQGJLQBOCGUJGMDH");

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
    msg.setTimeStamp(0.4683860478565749);
    msg.setSource(41810U);
    msg.setSourceEntity(240U);
    msg.setDestination(2812U);
    msg.setDestinationEntity(141U);
    msg.req_id = 44024U;
    msg.status = 230U;
    msg.range = 0.4055043994500199;
    msg.info.assign("QZKMXNSAPCEMURSDCJFXKIIRBUPQAIUDVZYZPCJEXAIGWQODSJLMPVXYNSJHQXOGBAYDDQCIABOLOGTRTNOUVAZKEJKWZCIVKUPNPDCQYLMGSKYRGYRHGVHICEWTSNBIFMQHQHBFFSNRPJYHWTBDVBOVTGMXRFHETSOPRFENLGZH");

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
    msg.setTimeStamp(0.5988037619599175);
    msg.setSource(19888U);
    msg.setSourceEntity(231U);
    msg.setDestination(21640U);
    msg.setDestinationEntity(0U);
    msg.req_id = 24110U;
    msg.status = 85U;
    msg.range = 0.5983748198723309;
    msg.info.assign("TKUUJJXHCOTBNGTZPELKGWPDZYDROUXRLXITZWECHHGSAVIIBGQOPXQGVKACGJYFKPMMWJAMAJYOIMHUKLMQFQHWVKVIJZXLWVTAHVNNYNNVSEBYZBSEHGQLPRUBFLCASBMQBSNVSMNN");

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
    msg.setTimeStamp(0.11488942111537559);
    msg.setSource(30523U);
    msg.setSourceEntity(215U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(254U);
    msg.req_id = 37307U;
    msg.destination.assign("OYVIXLFQOYYNMYCCKQTIIXPFQSXZHJFBJUUALDOFC");
    msg.timeout = 0.6855614466445011;
    msg.sms_text.assign("GZWQZKICBCIWVYHBROXSJUIMNDUVWWBQNCDEENLYCTFILJEKQRHDXALKDVUOGNOHNTEXAGUOBQZJWRWZTJPRXSHLEE");

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
    msg.setTimeStamp(0.20070839019919318);
    msg.setSource(30329U);
    msg.setSourceEntity(148U);
    msg.setDestination(50933U);
    msg.setDestinationEntity(236U);
    msg.req_id = 46989U;
    msg.destination.assign("AEQKCFNQVWRMAPYTXDFMUNHYNOZFAYIOSIOAZDCJWSSIBJPQWDPDNTTEQMGOLXPTJIZTQZMYVSYBXNWWNTKVCGRGMUVPISFNRBLUDBVGHTBOJFSXJBQZZEHACLMAWI");
    msg.timeout = 0.8273822333711917;
    msg.sms_text.assign("IGEWNKOKRKBKWAJWCTGSPNTWZXFQGBEINXDVMYIGFITIBPSERXMYVKSHQMSZBSPGMWJHVKIXGTDCAQZTYNKPULBQKOWUADVGAFURZORLWAXJCPNOUMRXYEJPVCXYIDODPOFUDPZNLXABGEAHNCOJPDIJDYKSRJVHFJNFESBMWZSWCUTCQVMZYEHXQYUFLBVHDBHHLZTFVQ");

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
    msg.setTimeStamp(0.48142172618661616);
    msg.setSource(17638U);
    msg.setSourceEntity(162U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(43U);
    msg.req_id = 15880U;
    msg.destination.assign("AYQHKHCLEJFMPPOPVDNQLXYBRJZMBSDWDZIFBKLYUKCYDYTAJNPGQMAZMYHEVTEXAFDVQZOASGEGTOJOYMWYJZPUIWALKKPZQNRVKOJYRF");
    msg.timeout = 0.9198035768839986;
    msg.sms_text.assign("SPJNVWQZMWPWSDEAZFZLJVWULXNOCPRTZFCQFGYLPBRZGVVWJYIBPEXMCCLYQIUKTLAOZJWKWHMRCDBXKJRQEIPEOFENYGTDEHHZWDIQQYMKBWFCOQOSZNDINMKRCCPFSKBTBRHTAFZUGNQVUKHXBDGALMPHIRXNILTNUEACXNMYDOY");

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
    msg.setTimeStamp(0.9428027406009598);
    msg.setSource(57070U);
    msg.setSourceEntity(67U);
    msg.setDestination(61426U);
    msg.setDestinationEntity(212U);
    msg.req_id = 24148U;
    msg.status = 84U;
    msg.info.assign("KKSZILPZUTOIYZTICVXPFEJTCTMWVWGXXRETJIQSZYTQALCNKTCNRXUQDTWNDGBGOHUACK");

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
    msg.setTimeStamp(0.5041697652092353);
    msg.setSource(1044U);
    msg.setSourceEntity(160U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(53U);
    msg.req_id = 37566U;
    msg.status = 73U;
    msg.info.assign("JMOEJSCEOEJGIQQTQOPNPTRRXQBRCVLWDRWEOMHMPHROEBNVTVYUPZLDBGKNXPGIWKXWVGJTXMKQJDTJKUYSNPOYSZDCDBJWTYYEZDBCBHGOIICJMILZWFACEZMLKFNBSRZLLNULQHDFFDSUWYVKZUBRKKNFG");

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
    msg.setTimeStamp(0.018707939501483084);
    msg.setSource(13376U);
    msg.setSourceEntity(226U);
    msg.setDestination(33673U);
    msg.setDestinationEntity(10U);
    msg.req_id = 57546U;
    msg.status = 108U;
    msg.info.assign("KJFZFDECTXVPWIQBMSDGBNX");

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
    msg.setTimeStamp(0.8452495106459084);
    msg.setSource(11545U);
    msg.setSourceEntity(127U);
    msg.setDestination(34317U);
    msg.setDestinationEntity(246U);
    msg.state = 102U;

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
    msg.setTimeStamp(0.9676612149927327);
    msg.setSource(32503U);
    msg.setSourceEntity(225U);
    msg.setDestination(31407U);
    msg.setDestinationEntity(155U);
    msg.state = 83U;

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
    msg.setTimeStamp(0.07844864986823241);
    msg.setSource(45555U);
    msg.setSourceEntity(243U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(208U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.8119246168191487);
    msg.setSource(32057U);
    msg.setSourceEntity(89U);
    msg.setDestination(47869U);
    msg.setDestinationEntity(209U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.40787993554705104);
    msg.setSource(51311U);
    msg.setSourceEntity(32U);
    msg.setDestination(765U);
    msg.setDestinationEntity(31U);
    msg.state = 61U;

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
    msg.setTimeStamp(0.46501368642158414);
    msg.setSource(54099U);
    msg.setSourceEntity(230U);
    msg.setDestination(13969U);
    msg.setDestinationEntity(90U);
    msg.state = 11U;

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
    msg.setTimeStamp(0.7198796264473105);
    msg.setSource(3627U);
    msg.setSourceEntity(124U);
    msg.setDestination(39944U);
    msg.setDestinationEntity(118U);
    msg.req_id = 37669U;
    msg.destination.assign("LLQKYKPUXDWRRLAOZIPBHCTMWOFYVAVXANEIVPWSYELPICESHTIBOSWOG");
    msg.timeout = 0.8523430726826663;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.1652440627762669;
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
    msg.setTimeStamp(0.03879734223509168);
    msg.setSource(40255U);
    msg.setSourceEntity(181U);
    msg.setDestination(8354U);
    msg.setDestinationEntity(56U);
    msg.req_id = 30118U;
    msg.destination.assign("VMHEVRIZKSRMJAJZDEYWAXRSOKQLLJDVTGJUPNQBSPBZXGGVLSNEFNKGGZRLLTAUTLVTPBPUYBHCRILFPFWDKSFWMDBXONVCQDPGBWNFZTVQHJQDYZGCHPKOOEBEZNMHIDONVPAHKBNLJQYOCOAAHTXZQZESWQEJJCOAKFUGMRRMLIITTKAFVSHEBWXUXOXUBYFCZFXDHGRMYUSJIIXGMACTLPPICCNYKAHIESCUYY");
    msg.timeout = 0.4491217251947588;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 35486U;
    tmp_msg_0.lat = 0.6367986220855911;
    tmp_msg_0.lon = 0.7507704175924915;
    tmp_msg_0.z = 0.601443012846712;
    tmp_msg_0.z_units = 161U;
    tmp_msg_0.speed = 0.05272052040471875;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.custom.assign("HIOMHCTPXSRQTWSGKFZDMNEUDJSGAQLLLCZBMBXJOVTWIZDWBLLHPWJQTHYVAMKEFNKXOXWQLUNTXECYBSUJHXHQWRVZAFURLKEGUJTYOSNTHCFYMLXBRNGVOWKCZKKPBAZFOFDPJCRIBHHFZIPNQBITCADVGDIXWRQO");
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
    msg.setTimeStamp(0.5388136248885799);
    msg.setSource(48655U);
    msg.setSourceEntity(141U);
    msg.setDestination(64080U);
    msg.setDestinationEntity(192U);
    msg.req_id = 54551U;
    msg.destination.assign("XIKNUGHENBXCFIWXUIWRMTJZNSSWMTADSJZMBWURQDXKICBJMEMAYAPQ");
    msg.timeout = 0.44371253130835964;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 154U;
    tmp_msg_0.eta = 45212U;
    tmp_msg_0.info.assign("DXERCIPTBFBLOPVUPKWIEJTLGUAMQOARYJRVXZNSGENIAYFDJJIDUYALOBQYOADFMGXDVBCSHZIKXVZGBYTF");
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
    msg.setTimeStamp(0.548200500172893);
    msg.setSource(14613U);
    msg.setSourceEntity(169U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(229U);
    msg.req_id = 58394U;
    msg.status = 89U;
    msg.info.assign("KKBKHLCFAAUYTEROJGLAWSSEXWPHHBJWQFQEMIVZLEHDFDXBOPAEJIIYREAVJKAUSPNICADBDXSTVLZGOYQXOEXFRGBWALVDZNFBQXQRZITKDHYMUKJTQNQJVMBIPLWZISOOMJVYCFBJMLROMYFNZZCHNKGKCWGJEVPIGGPOMJHRCNGIOADWPPIGUVRUXUTSHUENSFRSACWH");

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
    msg.setTimeStamp(0.9393315939544584);
    msg.setSource(58383U);
    msg.setSourceEntity(123U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(233U);
    msg.req_id = 11134U;
    msg.status = 225U;
    msg.info.assign("VLGHFJAPLRHUAEGBUDKSYLAWSXOYDUJIBORERDTLLXRCJTIRJVLXPXAMGGGECTQKXPQDKVUUCCKVIFNXQZVFSHEMIBZRBGHDEVAIUMHOKSRBKNIHNRHLZJQRTWDCLYWJBQYMASUNJIOPVBSESOWCIJOZNXPNKMYTNUGULPEWQZEBDFNDPSYTWSCNYHMQZZFOTVADCGWTPXOMC");

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
    msg.setTimeStamp(0.45735851307795206);
    msg.setSource(50169U);
    msg.setSourceEntity(165U);
    msg.setDestination(59376U);
    msg.setDestinationEntity(225U);
    msg.req_id = 56199U;
    msg.status = 71U;
    msg.info.assign("BVNQJRZPKFPGPBDECBYNKQUOEVDJILIENHPSYVMVEHOODCOYWXITIDFWRMJTFJZBOFDGSOMAWBZHTAVCHLHAJMBUGSIAUDQXQXGNJNLMPLZGRDLPGCKRGUICOESFZRBCXWZCDVMQPQKCJIKFFCUURKWSYHZKRIZAXYTATVTPHMXLTEHFKNLWEGOLEBIWWMQICWJQJQDUPNARXOVKSHNNUTEPRATLXUVFEVKSXBZHSLYOYMQATANXRBWUG");

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
    msg.setTimeStamp(0.3923237012746362);
    msg.setSource(33826U);
    msg.setSourceEntity(66U);
    msg.setDestination(15943U);
    msg.setDestinationEntity(183U);
    msg.name.assign("EVGTMUQHYSEBYJOVBOHOMBYUZQFDKFTAMWOSJAIEDDWUPEAJOVCPIHPZNTZTZSNUXQTQRGWKYDMAXXGGGCKRNYNOHPAFDMDURAZGROBUDMJJKMSIOEFAOFLCHUSBZIPJECLANHBYWQVXNTNJ");
    msg.report_time = 0.9901465497054504;
    msg.medium = 98U;
    msg.lat = 0.2725735652576917;
    msg.lon = 0.8553593061567621;
    msg.depth = 0.9971392499105387;
    msg.alt = 0.15880177992169464;
    msg.sog = 0.6313196696535629;
    msg.cog = 0.13027674634166153;

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
    msg.setTimeStamp(0.120842463861911);
    msg.setSource(42112U);
    msg.setSourceEntity(113U);
    msg.setDestination(34468U);
    msg.setDestinationEntity(180U);
    msg.name.assign("NLBEQQDWUZPODJMSCZDDQYVOHGWNAFMHLXSFROJBLGTTJMPKEKFKYTROUFOIVUBZLZRTIIQTRPGTMYHUBUMWKKAFYCYQOAMOWKKBAFPDARVJAPJUGLGMTVEGNBQVGXILCDUVZQEPWWXJDFASHOEVJKYRZNQBPDTSSHNHXGJXVLIWICPZUJXMYHKCEYERQHYCRFGIXDXIVJXKBGLFMUNSWBWNAQHZRAYFMZEPWXOVECCNOIZPDBSH");
    msg.report_time = 0.3273292166076802;
    msg.medium = 152U;
    msg.lat = 0.7561532464362501;
    msg.lon = 0.5393317450922483;
    msg.depth = 0.3305708627461509;
    msg.alt = 0.5208216211586594;
    msg.sog = 0.9005806487569924;
    msg.cog = 0.6999966422979199;

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
    msg.setTimeStamp(0.6379187041963118);
    msg.setSource(29811U);
    msg.setSourceEntity(68U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(142U);
    msg.name.assign("BFLGZZYMWXTVAUJNKIALHOWTIWNSNMGNDJBFIRWFDVPO");
    msg.report_time = 0.43628158490570257;
    msg.medium = 49U;
    msg.lat = 0.4366717890704296;
    msg.lon = 0.2095901577744621;
    msg.depth = 0.4704159167092248;
    msg.alt = 0.24100747219645302;
    msg.sog = 0.10491270112151208;
    msg.cog = 0.6589586236984347;

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
    msg.setTimeStamp(0.5640901543465708);
    msg.setSource(6155U);
    msg.setSourceEntity(132U);
    msg.setDestination(45943U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.18892102135159794);
    msg.setSource(14073U);
    msg.setSourceEntity(154U);
    msg.setDestination(1582U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.978565154830114);
    msg.setSource(26898U);
    msg.setSourceEntity(251U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.8203927650806188);
    msg.setSource(47373U);
    msg.setSourceEntity(231U);
    msg.setDestination(62572U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("ACTFHJDAUMSDFIBCDIGNRDBGOANUHWSMIRQPKYXYXUZJBHQLGFORDMQHKVZOWRFJCLMEZXVDVBYQDTMPLEJICQXSFAIKXCSCMASLSRKZLTXPYILVYTERPRUNYYHUBEPMGWVEHOZNPPGQLEWMNCERLYMSHWT");
    msg.description.assign("GTUTALZXPYAARKUPKMJERVODUHIZBPQHXITPWYRNTSFPEOHHIDCCUSWIJBLPOMHKJBLAPQFJQGSRAFKSNXMGZDCXTGCDYKWAJHFUSELWWIDVRMNOLQCAMGWBIVXXEJZCGLXUMKVRJIVZOUBJMVSHNUQRAY");
    msg.vnamespace.assign("ULOTVRNNRZTHGEWBYDIUKBNILBKWAQRLZJCUYYMZJOYWYZCSILCRQVWBFFROQGSRFVLSPPTSVLDYAWGFTUYAUJXJTZPO");
    msg.start_man_id.assign("BMZVIHGOLLYXOEMHPFYCVJLIRZSBFRSBERIXHHRBUXZXTDXEEUGWXTPDYZFHIQSSKODFAZUGKUUQKLJQKGONNYWWMVEIDL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EIZKXERCWLVBVIKSNHOZE");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 52650U;
    tmp_tmp_msg_0_0.name.assign("DMPEKXKCTPZNZIPBNTFFDLZMRULHTPYRORRYXPCFGSIRHXGMHGVRXHPQUOGJVCLXAFIJDUTS");
    tmp_tmp_msg_0_0.custom.assign("RAUAORTVMJOP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UsblPositionExtended tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target.assign("QYSEAAZMAIKPXCGFKBKQS");
    tmp_tmp_msg_0_1.x = 0.001173451012250748;
    tmp_tmp_msg_0_1.y = 0.5088211729627717;
    tmp_tmp_msg_0_1.z = 0.8363846047920204;
    tmp_tmp_msg_0_1.n = 0.5251156112199574;
    tmp_tmp_msg_0_1.e = 0.0970310099781383;
    tmp_tmp_msg_0_1.d = 0.3786889955612728;
    tmp_tmp_msg_0_1.phi = 0.7298071161576769;
    tmp_tmp_msg_0_1.theta = 0.3236115152317206;
    tmp_tmp_msg_0_1.psi = 0.47669986355795124;
    tmp_tmp_msg_0_1.accuracy = 0.7214629639534266;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsFixRtk tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 36279U;
    tmp_tmp_msg_0_2.type = 20U;
    tmp_tmp_msg_0_2.tow = 4266710186U;
    tmp_tmp_msg_0_2.base_lat = 0.5122779991292606;
    tmp_tmp_msg_0_2.base_lon = 0.20024688809830882;
    tmp_tmp_msg_0_2.base_height = 0.6026531756557025;
    tmp_tmp_msg_0_2.n = 0.9651846068650115;
    tmp_tmp_msg_0_2.e = 0.7550807497629264;
    tmp_tmp_msg_0_2.d = 0.7322309193099045;
    tmp_tmp_msg_0_2.v_n = 0.5865836667759714;
    tmp_tmp_msg_0_2.v_e = 0.540344777419188;
    tmp_tmp_msg_0_2.v_d = 0.37645011553003704;
    tmp_tmp_msg_0_2.satellites = 169U;
    tmp_tmp_msg_0_2.iar_hyp = 25539U;
    tmp_tmp_msg_0_2.iar_ratio = 0.12046725241206901;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JGBKIIQDBWFXLRYLMNVVXUMUHNJGBKQMBMZAIOCHUPVMJPFPKAGHADLCAWTEASPSEJYEUALUYOZHZFIGNPZMHOVEYTVRVGPLKCORUUCZYROWGJSMFWSTJQLZCSPOJYTXZTXISKABOBYWEKBXICARRJQDZOFNWBUIJDXDQKEXVINOSFDVNBZTTRKKMLTPENHWNBQGFERWVYUYXXFAUR");
    tmp_msg_1.dest_man.assign("WMHKUSKRWNLANTOEQOEBGQYETSPCBRJJRVKDEMGVLPIXKWFLECIVXUAYAAYFYKFRNNFRDRGWSVBDBUJNUPXCUBXAOPYHWNHOCJJQZBRMJHAMZTQCQVSIZDYMCXOGHOMETCYJWWPSBLFPORGNAHZVIJFRNKSXBT");
    tmp_msg_1.conditions.assign("VLUOYCSXLYTFWFZHUDZGSJMCSVZGUHXZGHENTNUQOANQWIFHRUPQWTARAFYPKHBYMXLUQOTCFJOWBFVAMLNIDVAJJJPJDOVLRXYKXMSKIOEYMKYOGNYHJTMMQUEVCBFXQGGQXMIRBCQAFWTKGPBAECRVHSVNOEZEPFBSUWZUBZQKLPEWHPCPEDFZNKHKRJLIR");
    IMC::Force tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.026163380371715506;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9806719220709778);
    msg.setSource(36353U);
    msg.setSourceEntity(99U);
    msg.setDestination(46910U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("OJCWHRPTYWJZ");
    msg.description.assign("HFOTGCSADSZZSVXBZTNGBLOCKCFCRJDILJNNZMIYHHWHGAKKFUYZYXBVFWLXSIQIPNOIQEBFL");
    msg.vnamespace.assign("KMTVHIAEPGCONEIMBBEXUHDEYVSWWJIMEBCFWBVZPSNTFXPLSRPTVCKVHXUSWNBUROWAIEMGORXDQZOKVZNKWAWFLKLIGJQNHHQTXHFNFUNMDVCEYGOXSIQYAUYRKZJQQBCSMFQLPRBVGP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OSAUIABRAXHWLRBVTSOCJPEUXFMNIPXBZPMELWJDMHFUNFQAGXHGNXRGYUNBPHYWCUWWPRIWXRKINUDHRYDDXGQEDFASDKCEELOZSZGTVVMKYQYAQRCNJMSHZYNWCBMJTGQTTDJPUPUTFBDSMYZPJJYEZVVEE");
    tmp_msg_0.value.assign("NWSCMMLOMWGKWLOHYJTZKOXERYXCECCMGUVXQAGUHNZIXZFFJJTNWWISZGLNPUVLAKUVONINAPLKTFIWSAETCQJYUVBOMILMCQRBDYEPHFFPSVHLIZKQJJMYEKYXHANPHDLTEOXURXGPSAUVMOWTRZTDDGWBZRDROXCZJHNEIRZGBSJMQFFNCIQQKHVHXDJSRIAGESHFYD");
    tmp_msg_0.type = 116U;
    tmp_msg_0.access = 134U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CSJRHOHTKVAYNAXFMLVRPBCKHRTNWZWGZGKVBWIZENJATVQTEBFDPEDCXUFKZNPOB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WCMQLPOVOLMRCXDAYMZYCMNNYHOTOXCWIILPDMCWLRJZVDXSIJGZFAIFOQDZFKKRUHIUBISSZFVQNFTKCJURLTPIWNZYHXAKAAXBPEESGAZTBDXGCLGBOV");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0666836491504359;
    tmp_tmp_msg_1_0.lon = 0.1683508058116573;
    tmp_tmp_msg_1_0.z = 0.3436028229784407;
    tmp_tmp_msg_1_0.z_units = 127U;
    tmp_tmp_msg_1_0.speed = 0.8005727845761132;
    tmp_tmp_msg_1_0.speed_units = 31U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.vid = 8586U;
    tmp_tmp_tmp_msg_1_0_0.off_x = 0.33860472546610443;
    tmp_tmp_tmp_msg_1_0_0.off_y = 0.2698587932591616;
    tmp_tmp_tmp_msg_1_0_0.off_z = 0.4007268251362992;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.85198047836437;
    tmp_tmp_msg_1_0.custom.assign("LWRMGLEIEYIVQCXFVMNNFGJGXWZQVNMMCGFIZDSHXIQUYUGAECHSQKLAQHSHPMDEAVVXCQROVXTTIZYZRUWCCVWWFEQYPMNNCRHIBPNCNPALOFJBDDWDBPLKKLZWKZRRKSZKTEJAQVSFNCVZJGFOXMGJYFYRLTBIJESTWYUUERTBBKOIYAHHEPXOKPNDLOOSWEGCAODMTDTKLMUYIMUPSXJBBZONKDJH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("EYDVCHETSZLFHQD");
    tmp_msg_2.dest_man.assign("AWSIBIHZDSVXJAMHWPPOCSBXINFSDFEOJLTRXVKQHNIPJOJUCSARNKKOAYNUWRYZGRVTYQ");
    tmp_msg_2.conditions.assign("GLMPTWZNHOJKJEVGMJDTPKLWR");
    IMC::RhodamineDye tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.7622866590196888;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::ScheduledGoto tmp_msg_3;
    tmp_msg_3.arrival_time = 0.20736922990599693;
    tmp_msg_3.lat = 0.13051914715080748;
    tmp_msg_3.lon = 0.21786955995776303;
    tmp_msg_3.z = 0.6193378361459195;
    tmp_msg_3.z_units = 72U;
    tmp_msg_3.travel_z = 0.7467880545867454;
    tmp_msg_3.travel_z_units = 228U;
    tmp_msg_3.delayed = 31U;
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
    msg.setTimeStamp(0.5740803415054928);
    msg.setSource(17622U);
    msg.setSourceEntity(39U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("KCBHPMFDMQCHPAFZURTWRMBPVSNQULMBZGZXWAJSIIGFIPDBWYYLKPHKITMELSSNPNXFBTSBQEAHROKTLTUOEPYICVWJSVELSXCABGKLVJCDCGMLIZAVORUNYYCPNYIXKCTLWWFWQDUUIHNNDGYQZYKAROOOOVQFFESTNAKZMVEJQBREJQEXDIUKZJHYATDRJZKHAYGCSOBTDDXELIOPR");
    msg.description.assign("BMPXKKBWURUTYDRE");
    msg.vnamespace.assign("ZQWJKPSOERWTOEAOLGABWUZHGOTQWAMPRACYGUFVIAHMHNPHVBAXKDTLTDLHZBXZZPKVPZMNMGDLGNLUVDEWQPSLYWMYXAJENUOZTUNOWBEFXJYBNQBYJJPMTVKHYPCHTBKEXKKTCIHDZMIWOSFAFRTILULU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RADBXMQZDXJVFJNJXDYMPKSRCHIETWJLNAQIDSSEMYMMKNUPGPUAPZOLDNCFZPZRMEKOTIHTGLSBHOOTGHFMPGHTBULWCKITGXEEGNVNOJARYKCYTZCGMUIBNLZHBSWXWZQYMPWQQVIHJAEBQEETJYQOCIYGVOXRGOKKIDULLXFWSK");
    tmp_msg_0.value.assign("WQBHDNRAUAAQOITTHKBFBLXPYGWWFCLJTCDBGTEXDNMDKELSZUAWKDVWAD");
    tmp_msg_0.type = 134U;
    tmp_msg_0.access = 74U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SIWOMULLDXSLMJUQEPGMPSGFELBLPRTVCEURLHHDVBCJHTOSEVGNIWIFONZWIBMRAAVSWKEJUKVNWZQTPKYGGKGOBJQMCAGYEUXHNKURVTROCNRPJELEHXSNIEPYTMKAISXUMIQOJWJWPBTXHVKQNFTKBCYHDYOCRMCKSPBFAUMUTVBXCDZAVFYDWDQJHIPRX");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BBJWIUOIOEAKXJOULLUQDNLDJWMBFAXYJZYTVKFUPRNVMOHRYXDQTAALVWYHEASIZBPGLKBWWKQSOCAEZZCTPKGPDRJKOGRSQNDARHCHYTMHGEQJOHVNANETSMBUAPNFJMHBUYGZDGXFUPGHMQSVEJZDPISVBXSGIRULFCRWFWPSTSIRMZYYDPGCLCBJHDYWERLLNUQZCQOIVFMWHJOQIAKXZNPTXGMFXVVERYE");
    tmp_msg_1.dest_man.assign("ONLIHDUDJWZVPSYQXNDQMJROVLEGBGFQYCQVVUEXDHVGQGQETJOHRTLIWUNIAKXWPNPPSHAFRBZCHDGVUMWOSBTVRJELMZWBXSFCQXHBBMAPJTULCCFOCJMVOBTKFXWIXCF");
    tmp_msg_1.conditions.assign("MSXUYWBDEEFHTEYGSWDLGRWFWBTRVSKQKTYJDIDJCYPKHGVKULUTPWGJGOTOOBZPCI");
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("EWKQKSHPRMTHIBPUTCOTDOMLOYKVA");
    tmp_tmp_msg_1_0.lat = 0.858256102894983;
    tmp_tmp_msg_1_0.lon = 0.14740429828081325;
    tmp_tmp_msg_1_0.depth = 0.6835866008016172;
    tmp_tmp_msg_1_0.query_channel = 216U;
    tmp_tmp_msg_1_0.reply_channel = 22U;
    tmp_tmp_msg_1_0.transponder_delay = 187U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DesiredRoll tmp_msg_2;
    tmp_msg_2.value = 0.9248201376412308;
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
    msg.setTimeStamp(0.49882875284153994);
    msg.setSource(59850U);
    msg.setSourceEntity(202U);
    msg.setDestination(18925U);
    msg.setDestinationEntity(65U);
    msg.maneuver_id.assign("FLCYANXJUAVNQVEGSPGMSUMEQDVOLBIPGJWKQQTCAJPOQABFHYJKRRLGUEHPTNUQJ");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 40778U;
    tmp_msg_0.lat = 0.779604699663356;
    tmp_msg_0.lon = 0.20216533331285302;
    tmp_msg_0.z = 0.3079974320276878;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.3226079478000127;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.custom.assign("HVRHULLEFPJAOMSHWKQTEFMLSTDMFOXIOFEOPDTUATQEAUSFNVXXICVUSOPGOPJPAKCULRSHUWCZJKTRBJX");
    msg.data.set(tmp_msg_0);
    IMC::EntityParameter tmp_msg_1;
    tmp_msg_1.name.assign("ODSKGUEMAKZMQYUGDNVFGANKWECNDJJZIALMHSJIDZFORHPKIMYURRSYAJOUNYHVLSNCULUILLDCS");
    tmp_msg_1.value.assign("ZSRDHFUKPGGPYZUIHVEOEWDYVPMJEBSGWWXLXSBFRGTBYCLVGTQRARMVNXYTWVIQCIMBOJHOAILOKKWKOTTDBYQFXYNNGMEATFYJJHJHGAIPQBWPKFBVKMQZDCHCXDLIQUKJJ");
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
    msg.setTimeStamp(0.43291690529724924);
    msg.setSource(57645U);
    msg.setSourceEntity(39U);
    msg.setDestination(43539U);
    msg.setDestinationEntity(39U);
    msg.maneuver_id.assign("WPEEBVPNREINHZMOJKQSVUKDDDYARWJIGIJNOPUXEUYHWFEBSQXQ");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 37921U;
    tmp_msg_0.lat = 0.7274054061280578;
    tmp_msg_0.lon = 0.43603808366014896;
    tmp_msg_0.speed = 0.6714169214528954;
    tmp_msg_0.speed_units = 112U;
    tmp_msg_0.custom.assign("CNGFZNHGEXPIYJEIUBZGLZJOUEEMPBVZMKQRDZQVZVRBVZKMHAPRWRSFVHCOXLRPDKXCNNEDSPNNYPFLLTNDNVWATIWSBRZXFAJQLXYTUPWMYCUCRNBLJJSOOIWHEZMCKMGGVBXQFBRDPA");
    msg.data.set(tmp_msg_0);
    IMC::Land tmp_msg_1;
    tmp_msg_1.lat = 0.6630572268567047;
    tmp_msg_1.lon = 0.891191329679839;
    tmp_msg_1.z = 0.3047344867034356;
    tmp_msg_1.z_units = 213U;
    tmp_msg_1.speed = 0.6452324602318252;
    tmp_msg_1.speed_units = 179U;
    tmp_msg_1.abort_z = 0.21673336234282092;
    tmp_msg_1.bearing = 0.8535206165455002;
    tmp_msg_1.glide_slope = 16U;
    tmp_msg_1.glide_slope_alt = 0.6877774385668215;
    tmp_msg_1.custom.assign("VWDNGFOXBHURGGSXZEDXMPZBHXLFNXFQMESTSERQIMRIUNVTIUHMECVCBZOCIXSZBSJSURJZPVGTMJKDHFDQFSCUNCPIVIEFYAJPUIVLEPTQB");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevDataBinary tmp_msg_2;
    const signed char tmp_tmp_msg_2_0[] = {34, -36, 43, -115, -4, 67, -124, 1, 104, 12, 54, -90, 17, 47, 93, -68, -22, -109, 30, 101, -99, -63, 82, 121, -106, -109, 96, -91, -41, -120, -47, -23, 71, -51, -11, -26, 73, -82, 39, 9, -68, -115, 62, 5, 111, -55, -42, 3, 116, -49, 19, -76, 45, 76, -56, -85, 5, -40, 39, -38, -41, 43, 63, -73, 105, 116, 42, 13, 55, -109, -106, -12, -122, -63, 12, 55, 79, 9, -37, 44, -59, -95, -128, -103, 5, -21, -120, 18, 22, -119, 92, -39, 18, 20, 108, 99, -81, -15, -38, -100, -108, 102, -40, -42, 44, 120, 92, 20, 10, -48, -83, 32, -68, -101, 24, -32, -29, -59, 115, 27, 41, -96, 114, 52, 26, 118, -84, 20, -41, -7, 27, 41, 38, -81, 81, -22, -97, 41, 47, 89, 11, 2, -34, 72, 122, 68, -21, -92, -25, 91, 87, 16, 64, -28, 118, -24, -121, -12, 25, -90, 21, 82, -99, -125, 97, 23, 72, 100, 32, -52, 119, -53, 110, 109, 26, 47, -121, -85, -124, 90, 38, -25, 83, 32, 21, 116, 24, 102, -44, -112, -105, -98, 81, -12, 110, -89, -51, -45, -127, 121, 8, 64, 106, -65, 119, 95, 105, 83, -126, -13, -90};
    tmp_msg_2.value.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.5311633051733896);
    msg.setSource(58233U);
    msg.setSourceEntity(115U);
    msg.setDestination(35367U);
    msg.setDestinationEntity(142U);
    msg.maneuver_id.assign("CSWKBKSAROYNSWFLGCMQXQZGQKJRQQDYTEYGFTNPNVNZRJLQECFUGCSEQSFGWERSXOAALQUIPHRLZBKKWRHVJTZTRKBMOTDMKXIXWAUAUDVVCTIHIPPMONAAJAJLIAMRIUELOBOYDJGVVNCVGMBYIXSPJFUDZPUCTIFANSKRUGMPWBCFKRNN");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 54262U;
    tmp_msg_0.lat = 0.1802669937097181;
    tmp_msg_0.lon = 0.5752694118166362;
    tmp_msg_0.z = 0.05083034520083973;
    tmp_msg_0.z_units = 58U;
    tmp_msg_0.speed = 0.7169722563482829;
    tmp_msg_0.speed_units = 36U;
    tmp_msg_0.bearing = 0.2344915052527784;
    tmp_msg_0.width = 0.44697606300445125;
    tmp_msg_0.direction = 109U;
    tmp_msg_0.custom.assign("PCVBUCOWSONPUHXJKJPWQBZROKHXFIGFJSSYZJZAMZDOSEEXOH");
    msg.data.set(tmp_msg_0);
    IMC::SmsStatus tmp_msg_1;
    tmp_msg_1.req_id = 8653U;
    tmp_msg_1.status = 145U;
    tmp_msg_1.info.assign("WJFPQZFYDXQIPSHBMDAWLFVOUZXOEXVTAUVBMDMCPUBPRAKCVHYMSQCWBZHVGSQRIAPJRASDIUONINMWTMMWESIES");
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
    msg.setTimeStamp(0.33124261811659383);
    msg.setSource(31198U);
    msg.setSourceEntity(118U);
    msg.setDestination(63143U);
    msg.setDestinationEntity(193U);
    msg.source_man.assign("CVCHXKLDVBSQGAWTXSLKVH");
    msg.dest_man.assign("SUNRRVEFTWPQPLYGJIZAMSQLGSDGITUZYWBRZGLDJSWFBKRGRHKZQTOXNRWBIQJAUJOGBQULCFBHTRXULRPPEESZXPEIIVFQKDYKOYCMSNNRM");
    msg.conditions.assign("EDBNWSTUCNTRJEFZUAHEYPWWJDONXSLDGFZAGDOBWHPMMZCBCPZUDIXOKMOIKSSTPOVLLRSAZRYCGNQLPBE");

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
    msg.setTimeStamp(0.9916134947049585);
    msg.setSource(62062U);
    msg.setSourceEntity(94U);
    msg.setDestination(41450U);
    msg.setDestinationEntity(251U);
    msg.source_man.assign("UWWZJDFPXGMQIVITD");
    msg.dest_man.assign("RZLBCYGIGDFLXAHSKFUZYXJZCVCDMFAQCNDPYKFSOGNSOTGMCMEOFADZREMPGWJCTSVMDZUXUDDWVQRCAIGINBIOVOCUTREBVSHTUTADKPWPXOSLOKATXEYLSRXORHONBDWJMPIEIVRIWQNMGNLADEUFJTUHYXAZAPNQGBTCLPBSYKPGFRQQELKIIPJYVSKXWXHFJRBXCGJWMHOBNEBSEHLNMMZWN");
    msg.conditions.assign("WCINWJBGGFSJPMDLZESDUMHLITFHLQOHZRFISJAUZZBKBRJQETWAFBMLEKBITHPAEXFWSYBMFTVDQYYWWZOTXOEPYGTZYRGKTLWHEGNCNVVMUSMACXLKNXXBNKOMTIWELVAYBNHSSYNURPRJRZOVUMZ");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.9228135056002237;
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
    msg.setTimeStamp(0.03835102304523086);
    msg.setSource(16048U);
    msg.setSourceEntity(64U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(207U);
    msg.source_man.assign("AYXPYKPUQZBGEENRKHIMMPYYRJI");
    msg.dest_man.assign("QRITOFPAJRJOR");
    msg.conditions.assign("PDRDQVXBKHVNCWYWBTBDAKEWSWFSLZAMBMWJOJTHITRUHUNJBGPJMPSCMGNKZKYWFIQUQGBMTQNEWNCKDRNFXXVUTRCJXZUEXSAXDHVMKGFNCBDEYMBLIKJJZXLUZIBUBVQPHAAYORLEYPCZJRDHEIKNCQZYOIIVRULVEZSGGOFOSAPSJNJRYQOCQZOFXSIYALMUNMVEPFTFSCLETTXCPDPVGOGWWSDQYAFOYLFWALHRHHKI");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.8093194483369518;
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
    msg.setTimeStamp(0.4897229028279938);
    msg.setSource(352U);
    msg.setSourceEntity(161U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(52U);
    msg.command = 218U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IYNFGDSKFKIZNJAOJEUOCW");
    tmp_msg_0.description.assign("CYZYRGCGAPGNCQTOSPCOIL");
    tmp_msg_0.vnamespace.assign("NUOVEOZBGCNNFSLVJJPSQUTIKIYDFORFPXPFETIBAKRTHCEHVZQRKGOUDEGJUKWANTSMZRWQCHWCRIDAHPLDUYPXYKAOCLRGKMWLEGIUBSLULDWJBDBYOEQMZTQZJJZRBSSYDABOXLSNHLOYVIQKESDGVSAQPLQTEVXAFWFNZHCQVHLYIIQMTZYUXHYCBGRXYGPCKJXRNFNSMZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJWYWHAELZUVOLRXYEBTDLMGYOXVIHCPQROJUZOZKDFZKHIJPFRUEJXLNPZLEWYCQWCSKRWWFFDYJVOHEUDTHTNEZZGKFI");
    tmp_tmp_msg_0_0.value.assign("FXTXBYHKDPH");
    tmp_tmp_msg_0_0.type = 68U;
    tmp_tmp_msg_0_0.access = 30U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("COQSQUYNEZEXMMHGVPVKDTICISLZEKTCOTARVFTYFDFGRGHWMPEKIARWJUGSYHYOKSHMVBISSVQGNDZZXKJRAUCLWFXJUJGQHOLBXKMUFEWNZSPXDQALSQPTVZBCBYODVTOAHWFYQNOGQMOSRPNOTW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JLXSBWBTUTQDOWIDWZAGEZVKCGJNUPPWXGVJSLRDISLGVTRKHSIZCTRXFEGNLADUF");
    tmp_tmp_msg_0_1.dest_man.assign("YDGXWFRCOCGTWQJEXZHHHBGUNHFRCNEGTPVJWAHDKKUOZKYIZTHWYVVSRPFVTOSOOTLUIJMFNIFZIMAYHGKFYQUSQDOFEOYORSMSCWAIDEMTCSONJJXQXEBUAHDZDQIAKUPXMBWGZTUEFIDAEPBVUTCAVLLHWJCWAXRFGBSNYDUKYQJTALLZQTEEKEPJRHXIGLMLPFBMCBNRGNPDPMNWQXIGVX");
    tmp_tmp_msg_0_1.conditions.assign("JSVKTGMMZHKDKUCJQJJPDZTHGJBFCWKUFZKHZLPPQOXWGEJQHEMEUBEOIIMSHRHORMSZPGFJTVLZOWDMISNFVDODNTABLNNSDYFRBIKRVCLGBXHDONGLPQDOJIPBOLLNZCNKIEEKAJXMVMA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UsblAngles tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.target = 25615U;
    tmp_tmp_msg_0_2.bearing = 0.9507349086169561;
    tmp_tmp_msg_0_2.elevation = 0.7564732704706854;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FormCtrlParam tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.action = 176U;
    tmp_tmp_msg_0_3.longain = 0.16874656028704693;
    tmp_tmp_msg_0_3.latgain = 0.28784836658984336;
    tmp_tmp_msg_0_3.bondthick = 3552038307U;
    tmp_tmp_msg_0_3.leadgain = 0.30883099808071124;
    tmp_tmp_msg_0_3.deconflgain = 0.5747910938782633;
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
    msg.setTimeStamp(0.26877347300982035);
    msg.setSource(2062U);
    msg.setSourceEntity(236U);
    msg.setDestination(47288U);
    msg.setDestinationEntity(184U);
    msg.command = 103U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YKDYPMSREMKRQGPYRAUGBMJURZFLHXXBSVGUYHYWXDCBYVHNGJNDBIGDGUMQNWMAPOHJBQBCIOVQKZJWPZKHGGVEAFOWTRISITNOLZUXPJOALJQMZNQFHCFAEIYQZTFMDFDPNMUCSRADBPBNU");
    tmp_msg_0.description.assign("TKHAVOOROMZEJFSADMVUXZAIAQLGHSDTPTRRZDNRYGVGNCUHEBCIPHUUDQJZZNWGQUCWBPEQUBVBSPYHAZEXIYLRHLPNXKGPUHISKHOSVXRWCAMFBQC");
    tmp_msg_0.vnamespace.assign("IXDKJJSFXUOLOFUNEWBMXACVDMTNFIHPBBRQYZIVLSGNHFBXPOJRHNHCR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YYJWYOGEFPTKDQBAXJLRBPQVRBINPMAGRJQMPHACEDEWVOQSADNCDMCPKGRTBTMHWNSYNXFAIASFKIZKTTBJCZRGWMDNVJCUPVKYUTZE");
    tmp_tmp_msg_0_0.value.assign("VXQCSHGCAUGTUXSSMHMIOYUPLIVUNDBWYNYWIBNLHPDRZDAWIXRCSKADHCFZIZOPDNWEPAVUYVXJOJKKRBMAFCPLGERXZEUFQKRJAFVMHZYKJXEJRENXQ");
    tmp_tmp_msg_0_0.type = 218U;
    tmp_tmp_msg_0_0.access = 219U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PAXWEETOZWHFVNWYBDLSDQNPJYGGR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RLGVTETTAUOWFJITKELKIZPAIYYALPGNUTFWPCCSOQVMKTGVVXNIDDRNGYNPPLGD");
    IMC::Takeoff tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9389904195448467;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.04592561115184013;
    tmp_tmp_tmp_msg_0_1_0.z = 0.6225447668990717;
    tmp_tmp_tmp_msg_0_1_0.z_units = 27U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7700714104510048;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 100U;
    tmp_tmp_tmp_msg_0_1_0.takeoff_pitch = 0.8806827523720817;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CHUTCBXPOSSCGNEIDGMVVDXYJSWRYQNPQJSDBGDXSPJKNDQDIUEROWYDPEQHPXXNXVELIUUYFRTPIKGHMWBOWFRGRMEETUWTIDXJFCOLPGGIJQOSTBZSRNVTEKQQDGGLABFKTIOQPLBMZXMWCSPZYZYZDLQBJUANTTCJUMENUAFAKHKHLVVNEZREFAIWCKGAKOOXWL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VelocityDelta tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.time = 0.28874710331108433;
    tmp_tmp_tmp_msg_0_1_1.x = 0.8077935733794539;
    tmp_tmp_tmp_msg_0_1_1.y = 0.8309809413354102;
    tmp_tmp_tmp_msg_0_1_1.z = 0.8530488939985538;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XVUYVGZKIJINSYRHQQILDYENSDLHFHZUVEHLTSCRGYXGNTLTOQMRWGYUIPBOFPTDCUNQQWEYBISFUVSWWIVKTWCKRCKDVUMKXLZMPULZHEKEVXYRTXKOTLHYIBRQFGBUPVKFPZBPFHAMELJAXXXJPHMJROQESPLBSOSJEVZXJYCDHDWWIGFLAOBFTJMZTQMRAUGPZEONNCDFABOPAWAJECDCOFMRGSMKANCNMKTXNZYDIADWQQG");
    tmp_tmp_msg_0_2.dest_man.assign("JQSGLFLQPJKPUAIVRKZRVQJASXFEYBSCMVTCPK");
    tmp_tmp_msg_0_2.conditions.assign("BFGJCTESDEJPAMBEJWBQXCTCTUYNQZTJPMNZDLKJFNPJRYKURFSULOINFHWGTBAXWIGWVHUBDEWSFWOOZDUMQXKNGYMCIXJHNMREZIWVMIYSCQCOHTAZAMDYPDPMUFKXIRSBUPAZRPJEISBNGRSARDKRGLUYDQQLNOPHTOAVQHZX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::ManeuverControlState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.state = 129U;
    tmp_tmp_msg_0_3.eta = 1235U;
    tmp_tmp_msg_0_3.info.assign("QKKBPBPROLMFHLRXLQZHCQMWZZRCNXQLAEBENNBZPHUDGFTIMRVLEMFAGVZPRAHIMOTPQZGSKKDZIOBIYRGBOIKYKG");
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
    msg.setTimeStamp(0.29020873078817755);
    msg.setSource(1082U);
    msg.setSourceEntity(221U);
    msg.setDestination(33993U);
    msg.setDestinationEntity(180U);
    msg.command = 51U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QJKXBQLSLSUSUFFLXNJSCIMKVQACUTARCHJOCAWHUVEQHBPPPMSCJZQEGVBDCKIHOTDUPRWEVLFDIZIHKIZJSTJPTNBIWREAKBERZRHBEIUDAXVMWCQKGBSJXANOPWACGYLJDIYSABTBQXKTMJZHAUPDADGXJKMYRNOGVLFZYWIWFYIMOGCGFVRSWOXLNOXNVXMLDFRECOMVNKQEYZLPPHTYUWFTKOOFHTQGVLTNPWRMDMXBYFQGNYYUED");
    tmp_msg_0.description.assign("DNLXAAUXKCUNIDHUQFMTBYZNGMTMVNJDIJVIXNZZZPDIZVYRHSQUGFHDLYSPQSRVGVUKBUTOGBGJMYXXWRJFSEPACLRFARLUGTRTOWKCATQKJUMJPKQXAJPQGYACIRBWBWBCRCHNIOKQNVILPGSPOEOVFNWMDLGWZCZCDTUKSNWJSZQFFBYSMQBESTDEBOAHOHXYQAGZV");
    tmp_msg_0.vnamespace.assign("FBKVENXBXOWOUTIFBLOYMKZBGVELE");
    tmp_msg_0.start_man_id.assign("CVNLRFZOWWSXRBMAIKVUGXJUYAIHXLCODYVIHQGPQACQCEJXTBIGTYNNIMITGWUPJZLZTYXMXDKHRUEMDMONEAECLEBJKPNSLOBFDCTOWHYS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TAGFIRAGDZAFCEMRMIMYFMYLMVYTNIUVZEFMRHUUXWNKGKGRHKQNBHGNUPHXLUWQBQVPTBRSSMZSCNIOKZQOBDCAPZYSHZSCJOWHVWYAIAVPENBXDZTQREWJDORRCBQVLNGGHIYJJPTKVGOKIKAEJTCJTEOCNHQOJFVVSMDTJAUTRLEPWXPABIDDKLXVFYJYHXPDCLJSIOSBGDCFOAOQXMKLEZNXSLFLKEWQBDFXIZRYCSXUUYLTNBPZPUHW");
    IMC::Land tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9754153841589973;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7528629270670913;
    tmp_tmp_tmp_msg_0_0_0.z = 0.18626828900943726;
    tmp_tmp_tmp_msg_0_0_0.z_units = 79U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6034928656634612;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 229U;
    tmp_tmp_tmp_msg_0_0_0.abort_z = 0.4245334981780534;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.04746171959112555;
    tmp_tmp_tmp_msg_0_0_0.glide_slope = 61U;
    tmp_tmp_tmp_msg_0_0_0.glide_slope_alt = 0.40067663492026706;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TEQRFZHRUSMTXXDZDVRFZBJNBFFIEXVVJOCVANUKYFIXEHNVXYOWRWACJMFXRCJKVSGHUHBW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SoiCommand tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 48U;
    tmp_tmp_tmp_msg_0_0_1.command = 157U;
    tmp_tmp_tmp_msg_0_0_1.settings.assign("ASFUWFDQYUPZDIVUFSQOMUWSKDFTPQVSXJNDELQLUVRMMUZJCPQERGHKYBONDOXHCOSGQZNTGTMICXLAKUGWLFXIXLHBRIOQXDODKPUXRLEPMBPYJIBJNBYSACVTEZCZSEGOKLELMTWHBIDQMAAEEBMJXJFRCVGNNYTYCEMYRICWUZRPBGIVKVVZGNWHPWNBSDPWASYAFDGAVSO");
    IMC::SoiPlan tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.plan_id = 24186U;
    tmp_tmp_tmp_msg_0_0_1.plan.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.info.assign("UIPWMBOIKLMSGHGNPDGHZYLWREIBXEBWIFFQCVFQYBOPNTKCMICFPBBVAPXYZUYVELESYGHIMONDKEJVNKBUDTAXARLGM");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ParametersXml tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.locale.assign("VXCDGFQSMBKRNLCJEUEYNIZKSFMLWARALHGYJSTWCCXEMPNPRXZVIANHDVEFQGPKISMLOWZYZDVFDZXEZWKKHZGZPCMECENBORXLSWX");
    const signed char tmp_tmp_tmp_tmp_msg_0_0_2_0[] = {-102, 37, 31, 42, -116, -22, -50, 22, -121, 55, 24, 53, 72, -25, 110, 86, 111, 48, 70, -32, -16, 113, -35, -121, 107, 40, -83, 33, 90, 69, -125, 33, -40, 84, -34, -119, -98, -124, 81, 3, 44, 105, 42, 38, 104, -5, -6, -40, 35, 22, -10, 72, 47, 28, 92, -43, 12, -27, 12, -38, -46, 111, -113, -66, 64, -115, -71, -102, 52, -73, -117, -66, 113, 58, 53, 126, 50, 72, -66, 9, 70, 103, 83, 86, 11, -14, 104, -61, 103, -41, 103, 65, 33, -59, 61, -15, 30, 107, 91, 92, 113, 73, 106, 3, -27, 62, 76, 79, 1, 85, 91, -94, -11, 5, -18, 14, 78, -47, -117, -32, -115, 24, 48, 6, 75, 30, -11, -72, -37, 32, 22, 9, 119, 25, -126, 93, 96, 5, 111, 70, 108, 3, -100, -53, -12, 11, -122, 114, -58, 111, -65, 51, -80, 16, -19, 48, 112, 24, -109, 109, 5, -67, 8, 108, 59, -53, -30, -4, -90, -126, -5, -39, 50, 41, 105, -32, -33, 11, 24, 15, 66, -97, -75, 66, 50, -115, -20, 27, 125, 87, -93, -90, 30, 83, -82, -67, 65, -8, 3, -28, 84, 40, -106, 54, -35, -68, 19, 104, -94, -28, 102, -103, -14, 113, -123, 103, -24, -37, -118, 18, 103, -35, 120, 75, -43, -118, 23, 27, 81, -72, -108, -33, 76, -56, -95, -121, -22, -104, -125, 103, -88, 17, 4, 55, 87, -77, -42};
    tmp_tmp_tmp_msg_0_0_2.config.assign(tmp_tmp_tmp_tmp_msg_0_0_2_0, tmp_tmp_tmp_tmp_msg_0_0_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_2_0));
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::HistoricSample tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sys_id = 25682U;
    tmp_tmp_msg_0_1.priority = -36;
    tmp_tmp_msg_0_1.x = -27111;
    tmp_tmp_msg_0_1.y = -16422;
    tmp_tmp_msg_0_1.z = -28483;
    tmp_tmp_msg_0_1.t = 8057;
    IMC::SaveEntityParameters tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("GEFTXHIXLLSNADVCYCZUKHIJKFHJFESTPBWQPZSUDEFOCTFUPEFCWMVHBEYYSOCMQDDCXVMFWIVISSAUWXNARNH");
    tmp_tmp_msg_0_1.sample.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::BeamConfig tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.beam_width = 0.6922570384462862;
    tmp_tmp_msg_0_2.beam_height = 0.7764201759093807;
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
    msg.setTimeStamp(0.5949421339284563);
    msg.setSource(40865U);
    msg.setSourceEntity(201U);
    msg.setDestination(32097U);
    msg.setDestinationEntity(222U);
    msg.state = 96U;
    msg.plan_id.assign("RLMSEYYARHWECPTUHBXTUOSHUPESEIVJYFLWENQOABBIWPDRZQBEDFNRWCPIEKMNNMKFBYQTTHGACDUVYOCLGHBTXTDOLFSDQHSLGGKXPBQVHPCDXUSNTICXGXYNCZBRHMTPJUZHFFORMDULWYOVWZMJHAVAMKNWKQKJRZZCRZJACXRDNQEFIBTYOWJJFBMJQMKSKLSVNVKDJGZXUXANEZ");
    msg.comm_level = 215U;

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
    msg.setTimeStamp(0.244647008141196);
    msg.setSource(11933U);
    msg.setSourceEntity(178U);
    msg.setDestination(21297U);
    msg.setDestinationEntity(34U);
    msg.state = 50U;
    msg.plan_id.assign("XKDXUELNXAKTZTQRJHDNRYGJIQVYKIMOWNENMITNSSFWZVNGOSAFMZTYIQUJGTOEVQCZMPQXLUOMWRZKEZNYPOVCLJEKWVUSMUSHYKCIZLBILBFPNCQMBHXHRTZJMJWPHOFCYSVAHSQCVLARWACRLP");
    msg.comm_level = 165U;

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
    msg.setTimeStamp(0.8867293010016601);
    msg.setSource(58189U);
    msg.setSourceEntity(36U);
    msg.setDestination(62727U);
    msg.setDestinationEntity(151U);
    msg.state = 51U;
    msg.plan_id.assign("JMEMDJABXVHYSHKUKYMNGGUAROEQPOXWXNGFINCRFPVEBIVXVMFLHLDARZEIFCUITNDMWJRBFQCVHXFLZHYSETIQKGNFCYBHQIKJYCTWKWNZLRMMDVTVSENDGELECPQFAXPTARLBSEVRYYVSDBQILURSOTUWIJP");
    msg.comm_level = 117U;

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
    msg.setTimeStamp(0.3404727781648985);
    msg.setSource(55895U);
    msg.setSourceEntity(26U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(93U);
    msg.type = 126U;
    msg.op = 224U;
    msg.request_id = 10074U;
    msg.plan_id.assign("JBMSOUEEEUENORJRKQLXACSHZYUSQWKFXYGVXTHFXSTIPQDGLUSYQTGDDXNUTWEGNWCYJJWHMPSYDNBACLDRNZW");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 56075U;
    tmp_msg_0.priority = 5;
    tmp_msg_0.x = -5884;
    tmp_msg_0.y = 3493;
    tmp_msg_0.z = -11433;
    tmp_msg_0.t = 24894;
    IMC::EntityMonitoringState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.mcount = 12U;
    tmp_tmp_msg_0_0.mnames.assign("UNJSFELYRWCEAJHBSAJHLIUBJVQIICQYPQNUHWTOGRFRDVXBLJLNTCJENGGKHSBOOMZDREFTVBUSACAOMYPUGNYPB");
    tmp_tmp_msg_0_0.ecount = 117U;
    tmp_tmp_msg_0_0.enames.assign("NGBAUTLIVMNKZOAQWBRAMIKCFPMWYJPMRWIXNJTKAKASOKXSYVBQBHYISYVTXHAQZBELGSTTFHN");
    tmp_tmp_msg_0_0.ccount = 156U;
    tmp_tmp_msg_0_0.cnames.assign("UWZIQBEVGAKI");
    tmp_tmp_msg_0_0.last_error.assign("UDCXEPRRPKLSRAJNPQKFUKFPYDSTSAGWXCJAVAMIMHLNV");
    tmp_tmp_msg_0_0.last_error_time = 0.1135173289406387;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QOOHTBCEADGINKVIHWUTAYNNBOXXCUNYYCPFUDBMPKLFSSINJXTIMCNSMLSJVWVOWSRUEIZKEMCXVZTIVPEMEMYRCQQVSXRUJKFJHWXWREAWQQCXOYLIOJXDKRGHLONZLATZBECDOHRHBDKRIQSLSINAGUEGJVPFBTZDZFNALXUADGJJFDQV");

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
    msg.setTimeStamp(0.09938966332582766);
    msg.setSource(21297U);
    msg.setSourceEntity(191U);
    msg.setDestination(5085U);
    msg.setDestinationEntity(248U);
    msg.type = 84U;
    msg.op = 109U;
    msg.request_id = 53962U;
    msg.plan_id.assign("UAZVQKFSMRRMKJTETUBONJNVGDUOPCIREFLMACRLPIGQWPHSTYHMNHHVQIGDQXTZVKPBOCXUFZDKXVYZFVDFGEGZBKVJOGWSIIYAYTKYIBBZCHLQJAUIUZVEJNDGMOVHNPCDSNFWWAWRJUIPYWNQXKEQCZXMRTXLXYQWFALCPEMMKSGUSEHLKRDODSSNUOREOVWYQLAAJRFZYXLDXBCIZRBPFNMHKDNIHPACCLBUWGWOQFJEAOTJTMXG");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 72U;
    tmp_msg_0.op = 176U;
    tmp_msg_0.plan_id.assign("OZRJRBTYMWKGRMUNT");
    tmp_msg_0.params.assign("SCRIKKIXYRODTAGJWDNZIPLFFPOOKLCHTYMENLORATPMMUYRWNHEGVJCCXPBCIUECKMLHTALARVGSCRDEFILOLISYPKHFZQZWEBSBOWGZCNOWGHWQFMNSFEOGJXAMDXZOJAYWQXJIDYDFTULGPUGTVL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NJBYPSWXPDHHJCBSZZFMLOTCVFGOPDQUKGBRMHDOOSLKFLSZMASMXDXERZUGODSZVMVRIUWETZXZGBYIWGXHWBQENXYHMUDVRCFGTUTNZJQHLRKQYQRLUXOIVHRXKUJSCWEPJIWQDVCOAQPADI");

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
    msg.setTimeStamp(0.79007623051808);
    msg.setSource(64309U);
    msg.setSourceEntity(140U);
    msg.setDestination(876U);
    msg.setDestinationEntity(195U);
    msg.type = 190U;
    msg.op = 208U;
    msg.request_id = 39499U;
    msg.plan_id.assign("GILJSQUXJQJXBVVZVRLUNOFJ");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3532012040U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZYGPMRUMQBCNMQBMICQWCVMKVZ");

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
    msg.setTimeStamp(0.0470266378336921);
    msg.setSource(54957U);
    msg.setSourceEntity(72U);
    msg.setDestination(18437U);
    msg.setDestinationEntity(182U);
    msg.plan_count = 31378U;
    msg.plan_size = 1919175546U;
    msg.change_time = 0.8915040530201942;
    msg.change_sid = 48613U;
    msg.change_sname.assign("CKNUBXTBKGDVTADWNJFCZIJOAYAOZDHLNDBIPERQTJPFPSIGNYBFSNRWFXARVXBKHEVJUHZUFJELZJNTUGCHTYCIQMDZLFOSEYBMMIBYOOHHGTTPGPOSGG");
    const signed char tmp_msg_0[] = {-34, 73, 2, 12, 100, 47, -92, -68, 72, 34, -12, 1, 123, 118, 81, -45, -112, -73, -13, -105, 88, 16, 20, 2, -94, 45, -88, 62, 9, 84, -58, 4, -93, -122, -13, 121, 5, 1, 6, -86, 36, 59, -81, 41, 22, 55, 23, -3, -11, -113, 44, 12, -98, -16, 112, -10, 77, 20, 119, -69, -27, -17, -27, 42, -9, -12, -35, -67, 24, 63, -36, 106, -30, -82, 39, -34, -46, -109, 82, 6, 38, 30, 58, -99, -19, 56, -94, 94, 65, -114, -118, 39, 100, -85, 59, 21, -128, 16, -29, -28, 26, 64, -63, 52, 103, 100, -95, -17, 14, 121, -39, 43, -126, 65, -113, -121, 66, 28, 93, 28, 98, 77, -2, -85, 34, 108, -40, 43, -123, 111, -104, 11, 56, 119, -110, -67, 104, 7, 126, -45, 86, 120, -122, 77, -126, -60, -12, 34, 38, -41, -104, -27, -55, -3, -34, -1, -73, 126, -62, -121, -3, 13, 97, -117, -21, 62, 51, -79, -123, -118, -107, 33, 65, 32, -42, -39, -101, 15, -120, 81, 118, -83, -110, -100, -8, 87, 11, -1, -125, -80, -20, 79, -8};
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
    msg.setTimeStamp(0.21465699615297973);
    msg.setSource(42675U);
    msg.setSourceEntity(178U);
    msg.setDestination(57732U);
    msg.setDestinationEntity(113U);
    msg.plan_count = 40474U;
    msg.plan_size = 2096064167U;
    msg.change_time = 0.05748653316142527;
    msg.change_sid = 12989U;
    msg.change_sname.assign("LTISVNNOVKXYBZMBYEXFPVINACKWEMSBCMKRWXHQIVRAPYGXDLXGOZYYINTSOMVCFCFFUFQVTISYUYMCHQBQUSOXQKUMTGRSBZSLVNGZGRLGJRCDJGNUNYJQDPSLEMIDDFXOTA");
    const signed char tmp_msg_0[] = {48, -118, 112, 7, 112, 47, 106, 97, -71, -60, -43, -100, 41, 45, -25, 60, 103, 64, 43};
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
    msg.setTimeStamp(0.11967706119507904);
    msg.setSource(32524U);
    msg.setSourceEntity(210U);
    msg.setDestination(38297U);
    msg.setDestinationEntity(64U);
    msg.plan_count = 4737U;
    msg.plan_size = 1626712210U;
    msg.change_time = 0.07561767390273821;
    msg.change_sid = 49976U;
    msg.change_sname.assign("YRRNEJTEKYADGMIFXNFZNLCKQSOOFRYANPRSUEGWLEHWDEKFUZPSUCTCYLYKLLWZZMANTDNKIORHPGKJNWVUWXVOKKJJDQDXSGJVIJXOXBIOPBHPXEGUPBLBNGQTWVGPIXECBOTUSFJRZXFDSVSJBILLHOMIOULTSEMYIHYACXWDFWRWTCGZBFDUZMVMKCZQTQHQSGZAPHEBINCMJCIMDVQBKYAXEQMQSOUJ");
    const signed char tmp_msg_0[] = {-45, -63, -125, -119, -5, 37, 9, 99, 72, 98, 121, 111, -72, 21, 102, 4, -92, -103, 86, -18, -39, -86, -40, -28, -91, -117, -67, -82, 71, 99, -107, 38, 60, -21, 115, 78, -87, 102, 88, -61, 17, -127, -28, -51, 66, -21, -11, 4, 2, -106, -73, -32, 107, -85, -59, -95, 84, -112, 76, 102, 123, 116, 40, 121, -93, -79, -1, 121, 97, -10, -61, -109, 32, 6, 119, -24, -100, 6, 4, 33, -1, 90, 69, -58, 5, -45, 102, -115, 110, 102, 62, 76, -114, 2, -50, 123, -14, 19, 75, -30, 117, 77, -104, 76, -107, -101, 96, 106, -113, -46, -78, -12, -62, 41, 22, -78, -50, 67, 98, 109, -56, 53, 89, -116, -79, -38, 66, -55, 78, -41, 17, -102, 109, 113, -97, -115, 106, 49, 76, 30, -34, -113, -11, 34, 123, -112, -120, 92, -7, -59, 27, 40, 118, 122, 61, -110, -2, 91, -113, 24, -115, -128, 89, -128, -16, -119, -26, -13, -20, -78, 54, 106, 106, 85, -86, -63, 43, 110, -27, -51, -111, -105, 48, 5, -111, -20, -54, -119, 48, 26, -17, -122, 94, 35, -30, -96, -29};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BLKDPEALWGVNGJAKSFIRQWKLTBMTSVSUYZVHKFMTFSOXMQDZLHCJMCOKPGGJXCWTLMFBECMXMAODNNAGOUSETHMRYFXFHVJQWHBDYXTBIINHWKEKPLPOXAIWGVUQKFZDJWLFSNXEAQZHOUSDTQPYVMXRDCKLZGNNBXGURSHAYBWITEDIIIZRLOJBAUZBOGTZUHINRHQROPKZPCJYQRAVOUWCYJEPFRP");
    tmp_msg_1.plan_size = 8213U;
    tmp_msg_1.change_time = 0.653016682828524;
    tmp_msg_1.change_sid = 46441U;
    tmp_msg_1.change_sname.assign("OBHNNXXGEOWISUDXGJPUGEYDTHLNCWMLTARMEBQQAHCYJFCVKTMWHRDAZYQXFKWXZVTKLSKZVGAMMVMUYQJMG");
    const signed char tmp_tmp_msg_1_0[] = {68, 15, 58, 52, -75, 66, 21, 51, 39, -51, 59, -34, -94, 25, -89, -111, 27, 72, -52, 9, -94, -125, -41, -55, 73, 107, -18, 58, -35, 93, -111, -11, -117, 81, -25, 94, 9, 60, 0, 33, -49, 56, 50, 71, 115, 122, 64, -19, -127, -31, -126, 99, 43, 117, -56, -59, 67, -113, -84, 95, 98, 99, 83, 18, -57, -47, -27, 61, 11, -42, -92, 9, 9, 35, -89, -98, -75, 7, 42, 38, 1, -99, 30, -40, 47, -36, -78, -112, 13, -121, 68, 55, -15, 67, -19, -127, 83, 71, 82, 125, -59, 116, -83, 69, 110, 37, -10, 43, 37, 70, -113, 3, -56, 83, -106, -103, 40, -24, -85, -4, -110, 72, 35, -19, -30, -33, 50, -81, -37, -16, -37, 124, 11};
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
    msg.setTimeStamp(0.16395653666521637);
    msg.setSource(19576U);
    msg.setSourceEntity(143U);
    msg.setDestination(25416U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("MUZUFVFGXCUQKSJOEXHIECRYNZSZNGBZLKOJDRTALNKTCCMXAVFPVSDFLOMJIQWWRMQSXJDLPTIUMZSPGHHHFYQTMSOLJUVITCDRSGEYOIMDQOK");
    msg.plan_size = 57435U;
    msg.change_time = 0.7331151517077431;
    msg.change_sid = 26109U;
    msg.change_sname.assign("BYFWDNYSSZEHIMOBRGDDGQNLMGPSRWAEQKYNIRIJKZJZTZYAOAFEWMHABQDRDBJUPPVASCCOGXRTWNINSNVETXPQSIKDALHNJETZMITWOAKZVRYEVIHPMHDBSWHYFLYTCQPPVTBAGLFGDWUCGJTJOBNUYMIWJFSXLEIHKZXTQVXVJMCIXFQSBGOKPQCKQ");
    const signed char tmp_msg_0[] = {-106, 59, 66, -65, 51, -33, 76, 124, 24, 39, -74, 58, 8, -58, -107, -61, 124, -123, -115, -119, -19, -54, -65, -69, 50, -98, -22, 83, 70, -104, 96, 98, -80, 125, -44, -48, 76, 65, 115, -69, 115, -128, -51, 96, 92, 119, -90, 8, -111, -77, -92, -66, -51, -106, -25, -51, -126, -37, -72, -56, 39, 101, -32, 88, -58, 17, 19, 119, 116, -65, 44, -80, 15, -48, 20, 33, 62, 82, -78, -121, -101, -86, 53, 69, 56, -76, 108, -59, -31, -54, -51, 126, 87, -41, -12, 100, 101, 40, 71, -55, -116, 4, -61, -35, -81, -124, 14, 44, 45, -90, -121, -66, 91, 3, -126, 82, -70, 2, -66, 77, -108, 53, -56, -117, -92, -46, -50, 80, 38, 2, 34, 30, -68, 95, -16, 21, -24, -115, 7, -2, 115, 8, 100, -99, 126, 81, -125, 92, -97, 91, -100, -52, -74, -38, 97, 67, 94, 0, -60, 117, 122, 37, -63, -124, -10, 12, 63, -88, -29, -85, 95, -39, 86, 103, 32, -99, 63, 87, 115, 16, -6, 11, 15, -107, -9, 56, -109, 120, 32, -61, 6, 108, -36, 46, 67, -2, -59, -31, -53, -61, 19, 27, 5, 43, -58, 107, -23, 5};
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
    msg.setTimeStamp(0.9546469106398048);
    msg.setSource(53627U);
    msg.setSourceEntity(207U);
    msg.setDestination(18342U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("HYBEVWDQMJVZPZGNXMYSKDZPXPNMX");
    msg.plan_size = 32356U;
    msg.change_time = 0.21211695743894743;
    msg.change_sid = 45171U;
    msg.change_sname.assign("WJCNQPHDRJIMDTZDBJXRIIYQADFLAKXEFYQJBGHANPPMZCPRSHNGNMCFR");
    const signed char tmp_msg_0[] = {74, -4, -82, -93, -34, -77, 17, 105, -65, 108, 68, 30, -21, 77, -51, -15, 84, 45, -8, 43, -98, -53, -19, 63, -34, -45, 8, -63, 123, -57, -99, -105, 83, -20, -101, -62, -24, 123, -84, -102, -116, -115, 64, -124, -80, -57, -82, -16, -112, -107, -15, 99, -128, -34, -113, 124, -116, -64, -42, 81, 76, 116, 8, -49, -7, -4, 52, -34, -83, 22, -110, -44, 105, -65, -1, -87, 17, 108, -115, 81, 6, -113, 82, -15, -96, -81, 104, 41, -22, 22, -86, -91, -34, 89, -94, 104, -64, 59, -90, 21, 37, -86, 60, -126, 23, -59, -72, 7, -10, -113, 29, -17, -123, -35, -119, -20, 5, -57, -74, 107, 6, 63, 111, 1, 106, -124, -106, -109, -102, 112, 33, 101, 33, 39, 26, -104, 32, -63, -76, 82, 4, -14, -41, -11, 79, 87, -64, -13, -90, -99, 37, -9, 87, 58, 115, -41, -91, 53};
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
    msg.setTimeStamp(0.3051428695388533);
    msg.setSource(21051U);
    msg.setSourceEntity(17U);
    msg.setDestination(53719U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("LZJGHRXCWPNSXDXQYAVNFKIJUIKSCCSOZHTEUONGWETNPZSCYWVBICYYZPLZNCYWFJBPOMDSUDIAORECLNMVFGKYJUTQBDZUYTSAEQFVZBTYVTMQYSIENGRHFBFEKKVEHTRKDQGZYHFBJFHLRSWAFLDQPMIKRJVLJOPWLSXRIEETWMGCGHWKOVGAXPGPOBBUAKUHRXIXJXGOMRXJQDMDQIJEDOPDQNWNAMANZUKLAUVHBFOBHMTLXIVLTMUSC");
    msg.plan_size = 61616U;
    msg.change_time = 0.08533960776324911;
    msg.change_sid = 40967U;
    msg.change_sname.assign("OWNOWTNFAPBJOGRMITOJRZJZLKIUFXYZBRFUOHHJKKBLCRLAWXSIFJWWMVGVULFIRPSRLZTCQYXAVTPVOUXSYTBFBGVYJJUAUNXCCYVRUMJQWMVCUIGICDPTBHPVDSRVSYZSMAMQXKQDINTWEQRULYNHGTZAMQWGQFIEQEBPDHICZQDUGFABJSDLFGNKMGYZNCTODHKHPNEZETRNLGNZLOWMCJSDAEADXAEBEYDEPP");
    const signed char tmp_msg_0[] = {11, 22, -44, 49, -31, -98, 51, -119, 47, -81, -15, -48, -73, -92, -119, 9, 43, -28, -122, -87, 18, 120, 3, -102, 84, -2, -121, 98, 124, -60, 122, 66, 112, 30, 80, 105, 21, -126, 36, 9, 100, -82, 54, -52, 119, 125, -125, 58, -25};
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
    msg.setTimeStamp(0.2885474848629753);
    msg.setSource(35656U);
    msg.setSourceEntity(92U);
    msg.setDestination(5390U);
    msg.setDestinationEntity(191U);
    msg.type = 239U;
    msg.op = 174U;
    msg.request_id = 40713U;
    msg.plan_id.assign("VWHSHTZGCQMROAYUSOAQLTEZNTEKZAWYYRGPDIDVPOPCWXYNJFEPLEJQSKPFMZOZCFKAWEBEMVAPABOXIOIQWMMIPULKUNDQYGCRLKSLNVAHFTLRIVXPYWHZBEOZMBCUVYDLRHSDAJJNNKEFLTMNGUF");
    msg.flags = 58084U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1474534061U;
    tmp_msg_0.destination.assign("PQKSCRUFKROCZKMEUCYINTWJVSDBMGCBMYZKUPNIMQCVLINLAGNJNMBNVYQFBMGJHNQKQKUTDPQSXIGTPTVXDIESSWYGHLLEHZTPMZGSHHZOBJXASLAXHOJUKERZBFYFWNV");
    tmp_msg_0.timeout = 52027U;
    const signed char tmp_tmp_msg_0_0[] = {117, -35, -65, -123, 57, 19, -121, -62, 71, -109, 31, -81, -95, 90, 24, -77, -63, 117, 55, -94, 34, 33, -113, -5, 28, 60, -128, -89, -124, 62, -38, -103, -7, 92, -93, -72, -29, -26, -122, -46, -31, -98, -73, 98, -51, -69, 46, -112, -75, -75, 79, 21, 109, 85, -72, -120, 50, -55, -51, 64, -103, 101, 67, 80, 65, -77, 98, -10, 20, 53, -38, 107, -118, -112, 89, -51, -17, 76, 92, 27, 97, 83, 112, -10, 54, 7, 57, 59, -128, 106, 111, -57, 46, 44, -117, -128, -61, 30, -84, -79, -81, 77, -98, -90, 45, -18, -101, 58, 76, 90, -106, -111, 13, 119, -8, 32, 6, 65, -108, 109, -15, -13, 79, -70, 32, -35, -14, -79, 53, 66, -73, 82, -8, 90, 0, 106, -56, -72, -119, -78, 117, -37, -102, 27, 123, 40, 69, 73, 0, 86, -112, 40, -45, -42, 117, 112, -60, -94, 96, 29, 112, 23, -37, -86, 21, -83, -2, -67, -43, 105, -30, 34, 91, -70, 52, 62, 82, -71, -55, 40, 124, 58, 121, 42, 48, 31, -53, 80, 77, 124, -19, 56, -38, 71, 105, -97, -111, 32, -120, 15, 50, -29, -85, 41, 70, 37, -125, 75, 62, -122, -45, 71, 93, 1, -75, -52, 40, -8, -85, -29, 14};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UKSYAGAUFJGRAGZGTOCXLPKQNPFRCQHIMPXYTN");

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
    msg.setTimeStamp(0.7187166333958078);
    msg.setSource(22620U);
    msg.setSourceEntity(29U);
    msg.setDestination(34981U);
    msg.setDestinationEntity(164U);
    msg.type = 232U;
    msg.op = 240U;
    msg.request_id = 61307U;
    msg.plan_id.assign("IQPPXWOJGZVRALTQGCJQDMUEHZBZEBKVCSJBWTQCMEUCYMPZNEYKWITIUCCUJYJDPDFDSENAZBHFSZUSFHBJDWIWTVAPRHVEAQSQXBMRXSJPNNONMNELCKFRSFXFWREHWYALZLOOMKGKMPSNJNYYZVKQGSUUFIHWOCRLOSTARDXEDXGDBQVVMVIGALUNIPYXBYKIYUFHRODXCATVKOUCDGOJQINLLJFXGWYBZHHVPBQWRK");
    msg.flags = 1905U;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.44408532661635747;
    tmp_msg_0.confidence = 0.33403118747553384;
    tmp_msg_0.opmodes.assign("HBYXTPNGJYZXHXOALAOGGNPTTGMWERJDVFUDNKVJIPWUWAXIRSIUDFPWUJOYNZAOFETHLRNLNDWTIRCKGENXQSFDCKJBIWYQDHIUBHYETGDHSRDFPAQVLOCZMVQPOXCJJZZBNMBMYPSMPPGVAZEXXA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TNFYLHNPCFMIKJMGANSRGGTSAHVAESAIUKEBVNXJIQEFPOMPTFRJUYMPGNVRXXOVJGSTGZYWLIHVLWTHNREWHDJREBAJXBEGLQKZQAHMIDYCNQIWZVYIUBLIJGWUPYUAONYBFFTTVTAOLHDBBKQDDWELOSZKH");

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
    msg.setTimeStamp(0.26663417228999975);
    msg.setSource(10956U);
    msg.setSourceEntity(186U);
    msg.setDestination(55823U);
    msg.setDestinationEntity(129U);
    msg.type = 98U;
    msg.op = 225U;
    msg.request_id = 46758U;
    msg.plan_id.assign("GQZBYGANWLHDRMRJELYQOAPVMEAWXPRHTJXTNDFGVQXEUEIVIXHFPXHGKFRUHFYHFDVNLYQNLBOOPRMMAXYBOBBSVKNAKSOCAGAJVFKTIJRSMDXHMVEEQNOYQHSEVZSWDLMPLSUBCZVUYMAOAWCCBIFTOIWRNQJUGLUHWFJLJUEXQMLSKGDQCNCTQZWHZBZYSXKTTTXVZTRUZECPBIFBDONJGISNKIPMRJS");
    msg.flags = 24113U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("XTZJIAOMVL");
    tmp_msg_0.reference_frame = 115U;
    tmp_msg_0.custom.assign("KSBLMDKYZDWQIDPTNALGBDAZSUQQMMVWXQGNOTNCNGTHKVRSOOWJRXUGUEVSYGBOCVRTTLEAAXUDBFCPHEFALDCLBZHPJYHMFVTZIWWCROQTFOCMGLJXKDZHPEDAIYBPOFYNENZUTHDPF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ARRQKVTIMJEKXIHBPZTMVUTNJPDCLZREQNQHJLBCTWIIFARZFMKWWEIUVSKFRGFJJHTFZEJEBCSGGMTYVFYBUWQSZHNWPMDQUBZKFXNXONBEHOJJASOBMPLNDDDOORASDCZIWEPWMVHOEBLAQXSKNGGBAHOIYLXSCNHUDWNZDRGAYFXVEKYDRGVIVKBOCLUTTQSKPWTROYAQUQPLWPHMKXJOEDMSGQXFYPGCZRSAFYJIUYGNLXCMVXUZUPI");

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
    msg.setTimeStamp(0.5797842633307537);
    msg.setSource(569U);
    msg.setSourceEntity(189U);
    msg.setDestination(53271U);
    msg.setDestinationEntity(109U);
    msg.state = 215U;
    msg.plan_id.assign("MFJYNUVHALNOXDLVEMFSHUFHKNHWOMBETTG");
    msg.plan_eta = 92706134;
    msg.plan_progress = 0.08477306103655446;
    msg.man_id.assign("OJRALALXBROZLUBWLLSDPEKBALYNZVMWBJXDZFAELOSIBLQNNCIMXSEHHRRECPACJGZDFXGPXRWQHYNBVMIUQJIJPZUBKXDLHTTAVGJYSKDFFVDPFIYYDFKXWWJCHRDBNAOFKMTOKQMTIVTYPGKSMWWJZPUDQLNNHPGBOUYIRKUECMJJCSCYEGMSFIQHCYCZETNHUPUTUFBAUQVGKQSGSGOAYDNZERAMNZRWWV");
    msg.man_type = 1318U;
    msg.man_eta = -540393720;
    msg.last_outcome = 38U;

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
    msg.setTimeStamp(0.13341579618328459);
    msg.setSource(30987U);
    msg.setSourceEntity(188U);
    msg.setDestination(62563U);
    msg.setDestinationEntity(220U);
    msg.state = 95U;
    msg.plan_id.assign("TBZHGQGTXZNKJYMTKJAUTETDNCBXCXXYFLGRTXIZVZNALDSZLCFTMFBCMOSWSGAVUBTQMTRHKDSECBIETBMEZKCEADIEOQDYPHKLBBPIMOMFGPYOGZCKUNP");
    msg.plan_eta = 962808913;
    msg.plan_progress = 0.01813284740693888;
    msg.man_id.assign("WWLPFVVKSYANIQDQWWNFKSRHPXCCKTWPXOUGAHGDJZELMAEFZNBJTFUYJTGYVBNDMHXGNZDWOXIEKFBQJRBYRYQCF");
    msg.man_type = 22336U;
    msg.man_eta = 1833771741;
    msg.last_outcome = 179U;

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
    msg.setTimeStamp(0.23207581023051604);
    msg.setSource(37967U);
    msg.setSourceEntity(21U);
    msg.setDestination(1390U);
    msg.setDestinationEntity(11U);
    msg.state = 89U;
    msg.plan_id.assign("ANFAOHUPCSCMSRGCJWTBNAVEPNHDCYDJRBWINLJMUIVOSUIZTHFIUTGKTZSPLVITZOJNTMBQGODWIWGBDHGWSUFGZJJFBRTREPEYLBHDGVVIXFRVXDHKULENJFKNCOYOQOMVEK");
    msg.plan_eta = -1784845688;
    msg.plan_progress = 0.4366222134878285;
    msg.man_id.assign("KRALRQFLLTSBGVKVIKNIPGRDPIUHTWETOXIXFQVQOZUSEDLVJLTXZSXANUNNMDNMCEEWGJIVBHBHGBBKDKJODOPJKYCHRDQPSNZQURHCEFRPJEQWGXBKOOXKMHEH");
    msg.man_type = 26869U;
    msg.man_eta = 993125028;
    msg.last_outcome = 162U;

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
    msg.setTimeStamp(0.23688837681439778);
    msg.setSource(15923U);
    msg.setSourceEntity(169U);
    msg.setDestination(17395U);
    msg.setDestinationEntity(217U);
    msg.name.assign("WPWHFKQBTWRIRGOYZGFCMRRADRKJHCTRLEPVPGNEEXMLZJYYCKDOOXBIWVSZMDZZVUQNNUBENLIUYAUCDNBXXXQFGTSFVKFKCRZADJVMIFZAUTH");
    msg.value.assign("OJLLEJBNSEHXZOPUDGPSWRBSIXXGMJFPESBEBCXRFZANFDLZKWYHYGDVPTYTGTDDPRVXNESZYQYJVPAOKN");
    msg.type = 53U;
    msg.access = 231U;

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
    msg.setTimeStamp(0.8918608878777786);
    msg.setSource(59715U);
    msg.setSourceEntity(169U);
    msg.setDestination(63791U);
    msg.setDestinationEntity(33U);
    msg.name.assign("KEKZLQRPDUFGUILRSCHMOAMIXUHXJMQPMZSBXYRTPVGYBQKAIJDCSUUBPPNUHACJXLNAFZNYHKWGGKWXZXBMSXYDVSNWRKEEYIZYTADOJYVKFCTMKBKUJGWHSGKETENNRMTSILVDCGROOIZSBRVOFHGLMFVQTFTQQLPIFLQJYMZBJEJUJAR");
    msg.value.assign("GBQCFETWMZWGIVKGSNAQGETVMQUYLJBGMNLLWGIGECPKTSS");
    msg.type = 20U;
    msg.access = 128U;

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
    msg.setTimeStamp(0.29431728080268305);
    msg.setSource(17686U);
    msg.setSourceEntity(169U);
    msg.setDestination(31542U);
    msg.setDestinationEntity(156U);
    msg.name.assign("MWKCCYAKUYCAQXDNVNJOCOSHVOURUNNWKEXXFVTDCKZBCMJDYPVGOHAXSUGECOVXQHBTGIQGQVXWBIJCETRZYDHSQIZUDUZTALQBQOFMFRGAATSPAJBYZIGCXMDRCJQKIERTHEFNTOSGLPFKM");
    msg.value.assign("FIYFPBQFCTJEAIQYCEMCGFASTPWRRUTFJBRYNOLMVEIPZFELDBMAVYGSTQYHGTVONUPPSFETGKOKBABGDQUIKSZWOAQWMSQBWZVGAJOSVXO");
    msg.type = 29U;
    msg.access = 60U;

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
    msg.setTimeStamp(0.8253123137606015);
    msg.setSource(61562U);
    msg.setSourceEntity(64U);
    msg.setDestination(49713U);
    msg.setDestinationEntity(239U);
    msg.cmd = 204U;
    msg.op = 56U;
    msg.plan_id.assign("GZYWDGPOHGDXFQVRY");
    msg.params.assign("ODKWTIFPBYLVTLOMGDHREFYGQCOAAPEMIKWBCPKUASQYEJBQNWICJXUTOASRKRQDSCEBXWGIWPDENPCGOCMIMHSSZTQGPDVBIMQVYTNCVYWHYZQUYALGFWUEKZZXUIJVHUQZRAEBJOVDSAFENAYSRHJR");

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
    msg.setTimeStamp(0.33955882733310383);
    msg.setSource(47623U);
    msg.setSourceEntity(37U);
    msg.setDestination(39120U);
    msg.setDestinationEntity(24U);
    msg.cmd = 211U;
    msg.op = 159U;
    msg.plan_id.assign("DMUMCNZOMTBGTPEBLAHVWJTWMLGTZWHUXSFRUPTAXVSSQGJICQGQIQOMVDFKSNGLNEOZRHFJXAREKAQQIXKPIMLDKXZSXHXRBKEXFNYYJDRAIDEJKUSLMOFPSTGCRCXLKHCCUNYVGRKJZLDSNMTEZEAFZEGJNRPMOWTNWUHIBZPHEHUAAUYWHYU");
    msg.params.assign("OZKNPPLABUPJTNOYODLTCJJUFYKXPEEOFXAMMEWVSJSGEUFMFZVTZHBFILNIOAHKRYMSNLGVZBHUBRDBEZRFBUSYXENUPJTCMGQINCCODZFSQCHYEQYMKLYLXOURYIHBKWDLCDSYZRSLQPAPXGESUTDEFFXDADYICXVGVWRRJBAUODWPQCHOTXVKLKQWRGWKNTMPWFILZNAAMRSKBQHTVXPXQJBUIJNHD");

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
    msg.setTimeStamp(0.3005832572164291);
    msg.setSource(28525U);
    msg.setSourceEntity(93U);
    msg.setDestination(15633U);
    msg.setDestinationEntity(208U);
    msg.cmd = 143U;
    msg.op = 89U;
    msg.plan_id.assign("ACYEHWVGSAITLPOHZWEFSJLKIMVCCIDBBBVGMMURUNBOPVENYEBINFWLLPUQAYARMQAMHHVQGDENZCHEEDZGKLWSQAKMMMBJGKDDTSYXUZNHYZOLNRTSSWVXRQUJLOCCJWFUDDRKRC");
    msg.params.assign("XPSOARRQGZQVHLCSMINRJSOLNHRTLXMMFNWAEGMIBTNRUKNPOKMJBDVFECFHEMYYBVLDDZIBFLOEWEGVAHGVBBPFHCRAIBMTJAQZJZTYEFQBMPIYJYBIUUEGDZUKXEJLZJQZKRZIIFUXIPQYPHCHUDKFJCUQCGSPZOXGGPKVDXLNCHRKGSEVYQWKCRKDAWNWLKYJWRAOU");

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
    msg.setTimeStamp(0.24105339922408497);
    msg.setSource(13983U);
    msg.setSourceEntity(54U);
    msg.setDestination(64122U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("KACTUFCTRVXEUASZZVWFOAOYHCQRMROGPCIBOBTBZDZDEAYDEMKHQYCNWHNURRFQYKQTJMUKBWWOKXXPISCOBZJCWPIVHNSXBWRGEQRQH");
    msg.op = 61U;
    msg.lat = 0.4139525888227167;
    msg.lon = 0.7231605877869641;
    msg.height = 0.12321237218178693;
    msg.x = 0.5490430484390001;
    msg.y = 0.7484614748471603;
    msg.z = 0.2486774503452065;
    msg.phi = 0.12067447767306672;
    msg.theta = 0.20032620514469945;
    msg.psi = 0.5832664484799319;
    msg.vx = 0.4134061196575042;
    msg.vy = 0.8832474755621001;
    msg.vz = 0.006752456885451785;
    msg.p = 0.7261723940579532;
    msg.q = 0.5401068008797761;
    msg.r = 0.8361413359235422;
    msg.svx = 0.4315125292642924;
    msg.svy = 0.8108594369738955;
    msg.svz = 0.6159031512798818;

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
    msg.setTimeStamp(0.1392348901273026);
    msg.setSource(25852U);
    msg.setSourceEntity(100U);
    msg.setDestination(60486U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("EFSTQABAXSBTGPQLWNMPEXPKUHYFUYQTGCOCXLKSHPVEMPWXYSVLBDGIXZNJHDKKKFVWSIESLKWBCGMHNFZJIJANOMNNBHXGQXGSPTOVOLVJPOUYEMXOIGJQQDJBHGFHZXTCNEQDVZUZZABAAUYGUVLRRYERKUIWERTJZMOLAKCTCUIWWDMAIUJYCPFIJYZTQZRKEAVHFTDMBSFWZNHGOO");
    msg.op = 178U;
    msg.lat = 0.6871859827035195;
    msg.lon = 0.7021557233230016;
    msg.height = 0.1594383558003667;
    msg.x = 0.9380475294009653;
    msg.y = 0.8473166437331671;
    msg.z = 0.5422459948203215;
    msg.phi = 0.9974949700890203;
    msg.theta = 0.8094968103046191;
    msg.psi = 0.7087089299619797;
    msg.vx = 0.28037553691335326;
    msg.vy = 0.8208214306512754;
    msg.vz = 0.18206705504095988;
    msg.p = 0.6302191339368676;
    msg.q = 0.7568908735562582;
    msg.r = 0.25138248138076513;
    msg.svx = 0.22251288342475273;
    msg.svy = 0.4296117833444789;
    msg.svz = 0.9651956654839615;

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
    msg.setTimeStamp(0.2154968166961554);
    msg.setSource(41992U);
    msg.setSourceEntity(56U);
    msg.setDestination(15686U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("MUSIZEFQDAZYHOKXHCDWOMCYGERYIIYNJRBFNOQWZXQRWSUTZMBFTUXFZMORPXONNERQOFHOCBRWBYWKAVCHCPMXPOKSSSDJGSA");
    msg.op = 151U;
    msg.lat = 0.8007272634586959;
    msg.lon = 0.37439240075271674;
    msg.height = 0.5034487922003652;
    msg.x = 0.43999607495695725;
    msg.y = 0.8531536954428168;
    msg.z = 0.5575218121511396;
    msg.phi = 0.5840397979324555;
    msg.theta = 0.6733514048745189;
    msg.psi = 0.39929719586223733;
    msg.vx = 0.22698545272163773;
    msg.vy = 0.9288074105224761;
    msg.vz = 0.561641284368484;
    msg.p = 0.8623582075285599;
    msg.q = 0.29870760524802553;
    msg.r = 0.9209332147439072;
    msg.svx = 0.6489939600313279;
    msg.svy = 0.8534871609898207;
    msg.svz = 0.22640047389523266;

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
    msg.setTimeStamp(0.49873010049645183);
    msg.setSource(18977U);
    msg.setSourceEntity(63U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("YDPYOKLUHDXMFXYWIACWSHGFMBWNDUPAIBWARCUMCCPROCEAFGNJMSQLOKGHTTXKERZQWJTOMNNNPBOJUUYGNYDQQOLKKTLELEZGDHAPWMTHJBBGPLBTSAHFVYVKYCFRSTKUOHVQGGSRRLEWQFITIZLNEIVFPPTXOPAOZHAQZSODVMZQEEHGFIDQWXEJBFZVXYZVBRN");
    msg.type = 94U;
    msg.properties = 40U;
    msg.durations.assign("GXOHQHKIKOXTQPCPNVZZHGSJKLLILPANUKWQGFCIADSYWLLVLADXXJTVLQRYHHDOEGMVRZXNISEAKBUEFYUPDGMSAVOWXZDTMFOMPXZKYWGDKVJGYWSMXCWIUCPNDLSNFZGJWYZYEYJCASCRPJDAKHQNJVQBSBIBPOZRIBENLTVBVQPSMCFUDXMGEIRKVQONTUIFEUFEKQHBRBZSETLCUTCMOHBRYHYFJUBUAWOTGOJTWEPWAQ");
    msg.distances.assign("IIQIKNDCOSZRWNLJBVFXQARQGYEEKBYRQMLILTWZCANGYKKAEJJVOAMWOQGDFHBPOTZOOYVDLLBIPAUTTFHENRYWZSBHXRUJNCSFXCGTKPSVEJBGZPHTNXADNNEFXWDALIHUJEONXGZFSKSIHBCJAACVJEIUUZUJGKXZCTENPRZQFZYLFMRPDYDWCGHYMUHGUVQGXTBQMQWMSOFP");
    msg.actions.assign("TKJEKRHBXBROQMFNUZAOLTRCCOHOMNIVZSVGKID");
    msg.fuel.assign("RPGCZFVPCJMUNTTQDXBEXWOBZADNRAQFHWUHLBEWVOFTDOULAMIRSZSPYVBBBNCXEFJJWZCIWHOZMLKRUJNEFKHFKLQLJICGOXUIKPACXHKSEXALMRIQSQUWBDLAVGTMDLYMLNYRFFUIQWXEYECFPTNKIXWGTHYVQHOGUDGSSESKXJDEPRTVRJNKSJLOBH");

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
    msg.setTimeStamp(0.2829714802238301);
    msg.setSource(45209U);
    msg.setSourceEntity(19U);
    msg.setDestination(12052U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("XEYKWHPXULFYJAYTSKHMAIVXJASBFVCYJHULERCRICXEDOCLFVHMTSMPQWMOQNCMJZKZWHPVHFCVTNELDVJTWUIFHWZTHKXORSBBGYSAGIQBIPLQHAXVAQYKJAQLDSPUJNKDAQXNFSQRPUNJNGCLC");
    msg.type = 80U;
    msg.properties = 70U;
    msg.durations.assign("IJOOFZMLFJCHPCEFHLUHTYOFNAPCSKXVIBVHUJRSCYBMDEYEEVRNQTEJLTQKMGUEXWZTQGHEAXWLSMMIZDJBYSAAHBMVOCXGKCPJZUWCDOFRGQDMNUVEPIXUZSETFLNCYBOZANKWYYDKIACURJWXZ");
    msg.distances.assign("YWDODATOQQFIFXXJKUEXMDHKSCURUWVLZIXGZQAOEDRPXSNMRHWIMXURAFPPLZNQQJPMDDRQKAKIGAGHJGJJOZPFLMISYLCZEIFUEHVSABHQPSZIYKOWETOKBGNALYCGXNATFNKRLYFDTFWVZMCLXNPKGIRNDWBSWZAVEQDNIYOYWTWHPMTCTQMMPHZ");
    msg.actions.assign("FRMDGPBJDKLOBMZXTIBXCOLWYHZRAXPOCTCPXUFBXWZYHIURCADGZWVBJCVPIHVKBFCESHOWEQQMWGVLAQUSZTUZKDTHAJAVNKDEUXTKGJYHVJEPHDZYNFPNEJXMPBKCOWYHPTUYMQSZNGTTFMLQOCJPSAQIXYULGLGBLEOQWIKNGWGLUSIUMDHPFASREOENIQIWMRYTLRSFTKYFRWSHOXEIMCDKXFBAVDSVZKCSLNUAFEVZYOAR");
    msg.fuel.assign("BVZCIBPSKAFDFUKYAFVLMYQRHCPQUOFSDKNCOEPHSZLEWIMXQUNABHOXEJRETTAJUUCIVSKWMGZVTZMLLTPXKJKSCTDADHDYKFYVHJOGVZNWRRCUCINMZFMGJADIGXBEQDONMRCWLWWBIXVWGPWJFREBNMCISZJLCKJGAHEEONQFLLGXQEDYQLMYXVZRHINUOOJVP");

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
    msg.setTimeStamp(0.24488195901538867);
    msg.setSource(43345U);
    msg.setSourceEntity(23U);
    msg.setDestination(59929U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("UZRKTHMUBOUXPFBTRPGVCSXEIPRVMDBWIMAGLWCYROBOLOX");
    msg.type = 160U;
    msg.properties = 199U;
    msg.durations.assign("TCHTZQFABMNIXSFVOQBVKDROFVHKQMEIDGOKNDCMDVJUVGTQMSFOLLHIBVJNWTFMAPVLHHCDKICJJZUJZEWLDYEPVFDNLRBTKXORCRSMXBALCWUJUTYOWDCPNOELASIPPGXRVAZYKTGEJTGZEWTBYBSNZIZWGKZY");
    msg.distances.assign("KODLPMWYQFJKCWYAVGGTLRCXAYQDUIFUCIMBCLNLEBBHNZTEYOTMYZFWLJRIWZPOXOWEVAMVEVPX");
    msg.actions.assign("ZIEUZFRJHPPPSSOKNZEBYOEFMTXAWSOQDAGFUXGBLODTOZIRFTRKZHLITDYCBIIQGAFOJHMXCDGKPACDSRJWBCPQVRQXRHMVCVBCELWYCLXNQUDJNKVHZKUWULASXMZTVULUDMLZVNIYEWOMJTVSIAISMDENHR");
    msg.fuel.assign("FJJJHAVDUDCZVHWQNOYJGWCHXEWLEDLIZWKBVQTPPNTB");

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
    msg.setTimeStamp(0.851200818964588);
    msg.setSource(13801U);
    msg.setSourceEntity(17U);
    msg.setDestination(61331U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.7818623598278899;
    msg.lon = 0.5554272509240138;
    msg.depth = 0.9398677044847626;
    msg.roll = 0.22734881996010792;
    msg.pitch = 0.2587404601238379;
    msg.yaw = 0.9730673101268341;
    msg.rcp_time = 0.41517521856389783;
    msg.sid.assign("NUEADTMJOHUMGKSCNQTCOTWZICOGQTKULDKEVRSYQDBPOPVPCUBYIBWBJQAFAPYWJYIWDRHIXVSTNAVLMZN");
    msg.s_type = 91U;

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
    msg.setTimeStamp(0.05363786913147428);
    msg.setSource(41154U);
    msg.setSourceEntity(75U);
    msg.setDestination(2935U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.6830674265883347;
    msg.lon = 0.9675712237076156;
    msg.depth = 0.7629232839487201;
    msg.roll = 0.353458781428188;
    msg.pitch = 0.6433927391854394;
    msg.yaw = 0.033010170451605036;
    msg.rcp_time = 0.1480438802468026;
    msg.sid.assign("LXIFHUBVHHLPNSGRRXODEYMNSDTOBJZIWQPZU");
    msg.s_type = 64U;

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
    msg.setTimeStamp(0.0209711810548332);
    msg.setSource(24066U);
    msg.setSourceEntity(183U);
    msg.setDestination(41645U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.20853512743481617;
    msg.lon = 0.4410805239227563;
    msg.depth = 0.6901613416715663;
    msg.roll = 0.45884703199754606;
    msg.pitch = 0.4155562983275445;
    msg.yaw = 0.6538260618059197;
    msg.rcp_time = 0.0769161296967964;
    msg.sid.assign("KVSSDPPFSGVBLWMPWVEYJ");
    msg.s_type = 42U;

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
    msg.setTimeStamp(0.8809964476068715);
    msg.setSource(16246U);
    msg.setSourceEntity(192U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(147U);
    msg.id.assign("ZBQHGCOLDGQHYHRLCSKCZCORDHQNZUVTQOEXPBWYUEXXPPURHMVIQNJFRDI");
    msg.sensor_class.assign("IJBPZXIJLUWDWEESPYAJHFXFBNOYCEEBFQZHNHYFGNBAXIGRVWQFLDFADTAUPXLBSEHZOCLGOATRPMXKYQ");
    msg.lat = 0.9217884817954327;
    msg.lon = 0.5123351595851546;
    msg.alt = 0.24271000993559322;
    msg.heading = 0.36006893170407517;
    msg.data.assign("WIVQJDCRZMJCAZMWGYNDEXOKGXBBLNPRXZVYZUIJYLWUMKAZCJGTWUHYWKVFVYIZBFTKJXUPTXJXHDWTGDSILFQAQWVTPBDQZYWXMTIJNPNEQQCCXLLMGCZSTAEPMYIYFC");

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
    msg.setTimeStamp(0.7464006815737415);
    msg.setSource(2070U);
    msg.setSourceEntity(207U);
    msg.setDestination(4742U);
    msg.setDestinationEntity(202U);
    msg.id.assign("XHKNILHSBSPGWEBXNPCCNGMUMZXJNVEROHNUKOTJLYLRQKGKQZJMFOQZXFCOYIJBLOMOWHBPNDWHRRVPUPJTVPUQMSVGZXRTABJZVQHBSMEBYDCDNICUAGHZGZRIZDXAJTSZFHIKYERSLWEBQLFNSAVWWIAJHQLHUGTCAVSUCIVKPYPKDDUELWZKYJYFITGVAOULTMC");
    msg.sensor_class.assign("KNDVNZSXXHTHSDOUNOYGEABCAZREGRHTPBFWIVRSLYBZQDHBJZSVYJWUXONUXSMUDOOWTLZPNHFRCUJYJYVIZVEROHCWPJUWLTEBFKUCPUOPOAESIKYIMBN");
    msg.lat = 0.9409310428105389;
    msg.lon = 0.9122149110951038;
    msg.alt = 0.7739762163583959;
    msg.heading = 0.3603431632677748;
    msg.data.assign("NCDWFDRTPKOLWHWBSNUU");

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
    msg.setTimeStamp(0.9013446765032523);
    msg.setSource(61649U);
    msg.setSourceEntity(42U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(179U);
    msg.id.assign("ASPAZJLEDXLUEBMPHHVYRHLFAODHDCRESCWHITQGLNJTFNFNBKYKTDXPUMDKJXKRPUTIFWMNNRSYMIZVVYYVH");
    msg.sensor_class.assign("YIZGZVNFXDXLAXIEMOAPKPCLMBUWRFTBWZPWVPNZYRWEBUTMHPRRTJBEDJSKJEHBULNOCGJPKUSLWEINFRJOMLMUEQDQXFISZUPAKFLAVQZDJYUIMKROIGCLJHYHIGNTLSOGTMXWGPNTYLVDYQXKJXHIBDSBAEHVFYZZKJLOWQXRTGFFMPYSNAIHKGVAZTOWQGGN");
    msg.lat = 0.4149697341288793;
    msg.lon = 0.5823807652223536;
    msg.alt = 0.4101654930477209;
    msg.heading = 0.32858304483152123;
    msg.data.assign("KTPZBXGAJPTMEOQELAZLDZJFQSETTHTXXEQNNPZHUBEWJIWGHKTCPPVXLAUVRIWSWMKVOVYTVKKJUPNLFHBXIORHCQLAXRSXGIGYFDEIACKUMAJMESHQWNLTDCJQPXJ");

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
    msg.setTimeStamp(0.10036083260943873);
    msg.setSource(60484U);
    msg.setSourceEntity(251U);
    msg.setDestination(57565U);
    msg.setDestinationEntity(133U);
    msg.id.assign("XOPUCSBYUZSLGVAJJENXJZSHEPILFCFLHNJWRVGPSWHVDXNFOYCGPZOZWQBPIVUULSCINRGXKUCUFSQSMDNEQY");

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
    msg.setTimeStamp(0.30316067535415714);
    msg.setSource(29161U);
    msg.setSourceEntity(102U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(75U);
    msg.id.assign("PYCONBOEJMUWCRZQJZAXGNHHUAALPFZGAFMVNXOPXGPCBDFLQKAKJYJAZYFEUSWCLUDMSKWOWRHYZOPVEOEIXXXJZEMDSNNICIQCUTULVVVETDDHDDYLDKZSZNIJUVARHQKWBQYNEIBTRBHFHGMDMVGXWRMYFXPSTRPNIOCIYZKFL");

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
    msg.setTimeStamp(0.7419602707536106);
    msg.setSource(33158U);
    msg.setSourceEntity(40U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(223U);
    msg.id.assign("WDBWCTADNNFYWSMGCEQMYQAZCYEIIXTBXVBDESXRLJCYPQWLIWLJWPSGXLJQRTKHCLBBIZWNVGIUXSKCZJRQMSNSUGZVVYTUCDZMHIMZBDDQVKSDLAOOMJPKUKHZMXPXPIAPVMTRUCEREXSHXZETNWKOQVFFPDYGKCRHERBTTFDBTLRHYSAPXVQGLMYEGPUAGFTOF");

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
    msg.setTimeStamp(0.7993393631358784);
    msg.setSource(47846U);
    msg.setSourceEntity(154U);
    msg.setDestination(14492U);
    msg.setDestinationEntity(224U);
    msg.id.assign("NRVIXBLXQCXJPRLHUPUOWQBJBGLUQNHVDMGUDOFKTHVMFEEOLWWAYRUEDQKDVAOSBEJJCMUNHPCWTCKXROCVFCCWYATMDSRZYFPANDMTWOWAQREPXNJGLJKIBYMGTAGSNCHGZBQXUBHLZIYIEKFEALQSJPMODIAYMNFTGWZNKXMUTHJIVPDXOTSZXSTCSIIJQBDMUHFIHRUZCLFXSGPQWAKVGEOWYZLKGDYQLZSKTEJ");
    msg.feature_type = 44U;
    msg.rgb_red = 247U;
    msg.rgb_green = 226U;
    msg.rgb_blue = 82U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1760253646504535;
    tmp_msg_0.lon = 0.055801297452123144;
    tmp_msg_0.alt = 0.9427639626060755;
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
    msg.setTimeStamp(0.1770858327961765);
    msg.setSource(4303U);
    msg.setSourceEntity(7U);
    msg.setDestination(53083U);
    msg.setDestinationEntity(174U);
    msg.id.assign("OFUZLBHDNDYRJBYNWXVJXDDCOOFNWXRNLWPPBZXBEAFYEKPNSYGKDOYHIJUVRSQOHKKIZRLLVSBUIRMEEJKINNAMTTWRXSRZJOBPAMXLMTVWOJSMZYXUGPHQXQZPQFPSUJTQKBVCFSATCAQVVLLVPYKWSTMNHOGAGZTTBBRNZJAUPOTQAWVFXGFHQFQEDQCCHEHGKFBYZIEESFCYJCIRLEIMGEMRCIZ");
    msg.feature_type = 123U;
    msg.rgb_red = 46U;
    msg.rgb_green = 33U;
    msg.rgb_blue = 242U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6681632527270382;
    tmp_msg_0.lon = 0.226140071325716;
    tmp_msg_0.alt = 0.09153430287296649;
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
    msg.setTimeStamp(0.8559216245351456);
    msg.setSource(63372U);
    msg.setSourceEntity(104U);
    msg.setDestination(27734U);
    msg.setDestinationEntity(133U);
    msg.id.assign("LZBCKISVHOMJUGOHCYWBWFTRNMULGUVZZKBNTESWFQLRMNAZAKNSXXDFNKUVWVGRDBPOTNLURJYONZJFEPWJVFCDQAR");
    msg.feature_type = 17U;
    msg.rgb_red = 226U;
    msg.rgb_green = 86U;
    msg.rgb_blue = 167U;

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
    msg.setTimeStamp(0.045754476218361706);
    msg.setSource(18555U);
    msg.setSourceEntity(102U);
    msg.setDestination(26388U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.6842594445745995;
    msg.lon = 0.336309997316511;
    msg.alt = 0.9764323131759386;

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
    msg.setTimeStamp(0.28487208138301023);
    msg.setSource(38371U);
    msg.setSourceEntity(149U);
    msg.setDestination(28294U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.9320840714888087;
    msg.lon = 0.8406384559108495;
    msg.alt = 0.7812973425604358;

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
    msg.setTimeStamp(0.640749469564414);
    msg.setSource(29750U);
    msg.setSourceEntity(21U);
    msg.setDestination(45037U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.2471309475691077;
    msg.lon = 0.5182559357218836;
    msg.alt = 0.1163674173201279;

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
    msg.setTimeStamp(0.2389445927287146);
    msg.setSource(63048U);
    msg.setSourceEntity(172U);
    msg.setDestination(17453U);
    msg.setDestinationEntity(105U);
    msg.type = 74U;
    msg.id.assign("ZSURJLLVNTHVHKLUVTHHMZNUTMLTZPUXQBZEFBLWSZNIKKDYEQBXWNCQVCXRAJSCCJKAWOIODSPIPVBSMCOESORXVJGMWFDXYUWHLEAZYWFGWJIZUSRDPNLBAVCYFJUNJARFDQFAROQOUN");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 507100119U;
    tmp_msg_0.lat = 0.6411835715289275;
    tmp_msg_0.lon = 0.49286451219117355;
    tmp_msg_0.height_ell = 0.3257110666896017;
    tmp_msg_0.height_sea = 0.10916646881834768;
    tmp_msg_0.hacc = 0.26311826734047705;
    tmp_msg_0.vacc = 0.6458758989652261;
    tmp_msg_0.vel_n = 0.84571652910109;
    tmp_msg_0.vel_e = 0.10362931586084445;
    tmp_msg_0.vel_d = 0.8353066212736557;
    tmp_msg_0.speed = 0.7143675451307971;
    tmp_msg_0.gspeed = 0.9432589063694;
    tmp_msg_0.heading = 0.6335930365042735;
    tmp_msg_0.sacc = 0.6696978885223249;
    tmp_msg_0.cacc = 0.7264104904970061;
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
    msg.setTimeStamp(0.2794709453175245);
    msg.setSource(11764U);
    msg.setSourceEntity(213U);
    msg.setDestination(42173U);
    msg.setDestinationEntity(194U);
    msg.type = 242U;
    msg.id.assign("JWSESUSXHELQNWJWYTNJLIKXCLVNLLYFAFSCAIOCBCKRFZYOAJBEZAMSHVQPMVUIBBULGNBJSHSBYGQJDUWUFXQSRPKNKZKFJCZHRYVTWKIRDBHMTHAXXNYVALZGMGCRKDAXMDQYOJIMVNDTZVBEGVJWRQOYXJTUHYRUMWRPIPQFOMAAZOGDNR");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6990745838699136;
    tmp_msg_0.lon = 0.04935729550899848;
    tmp_msg_0.eta = 1841951530U;
    tmp_msg_0.duration = 4135U;
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
    msg.setTimeStamp(0.1977038187271316);
    msg.setSource(25977U);
    msg.setSourceEntity(75U);
    msg.setDestination(63215U);
    msg.setDestinationEntity(241U);
    msg.type = 62U;
    msg.id.assign("HCLLVIHPRZZQICYMEMSVXAJCRLGVRTBRPYXFDLTIJIWCDXKCUPWYJQJJUOAZWNZADUYSMBTZUNDPGANKVZBYTSPI");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("BJYRLKNSSYBVMVOPIKBNTUWZMKNXRCPQFPZGZNHLHHJZCUQJHCEHETRIGDGFLALPMOQWWXCKRGXKHEPZDAIGGELXTBOBUCYMFF");
    tmp_msg_0.lat = 0.14325254753517214;
    tmp_msg_0.lon = 0.220871772089281;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.z = 0.5125814953648624;
    tmp_msg_0.accuracy = 0.4680415634394134;
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
    msg.setTimeStamp(0.8136402490375984);
    msg.setSource(57116U);
    msg.setSourceEntity(78U);
    msg.setDestination(1976U);
    msg.setDestinationEntity(206U);
    msg.localname.assign("MHDZRAIRPQIANPLNUSEYKYCKUQBHDJCOOFXOPSTZIERGQFIXKZPTTVHKPARSXSVCQLGACOHHEKEEWENZUTVPWBMSHBAZCGRFNCRLPYMFJWAXZYNNAGEWMDYDQURQULDQJBMJEHZLUWZSXHUTMHKNOGXLBPXLKHAAWSUZLNYVOIBRZTWCOYVIGUFTBTBNYGFIVJGMKOQDSVLODWCMFJFEDDSJQIIGXKCTRJKONFAJGCFMJWMPXVQWREBVX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YOEYZSMJRQFVDNPDUZNNWNCRGZLAAFJFUEBEGQDMVWDPELBBNCDSEZCYKSQGTAAPPIMOGHCOXVBDNYFLKSLCBDFFXKCOMTXJJSKWSJRWPOHCIYNMXMBJNVSJHDCYTOWAXGPSWTVHALIYLOVIIDBOLXUBYKNEWRUEXYGMVRTPCRJT");
    tmp_msg_0.sys_type = 230U;
    tmp_msg_0.owner = 57766U;
    tmp_msg_0.lat = 0.0716496885518817;
    tmp_msg_0.lon = 0.9073669951356166;
    tmp_msg_0.height = 0.44324795442736364;
    tmp_msg_0.services.assign("HWCNRIHKJWZRQDOJCMNRRAZXVMPDCDTV");
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
    msg.setTimeStamp(0.6564489492044473);
    msg.setSource(26349U);
    msg.setSourceEntity(186U);
    msg.setDestination(13180U);
    msg.setDestinationEntity(219U);
    msg.localname.assign("PNQWSXJHLTMDRXFOPORPZCDCAWNZWAGNJPDBDAVRKKTUVBBDKCYFMBAGLJUPCSHFTYCHGLCGXGOZLMOKQAVQMEHUYWVIQMEOYLSIFVKDKRGUAYYQDNJXQDNRSDIBHLEEWGSPJENLVURBTBSTRWPKMSXNFPLMEOATESQHCEJQIXMYNWJIQLIDGVZIXUFBHCPCZOPGEJKKZRNYAE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DLIONQQJUZGLMBTMOIFBKZIMQGECLNFDYWCVBKZOCYYYAZKVDZNJBIHQTIKRUFPMGIBVVNUJEUBTYRD");
    tmp_msg_0.sys_type = 230U;
    tmp_msg_0.owner = 42151U;
    tmp_msg_0.lat = 0.5908596265794849;
    tmp_msg_0.lon = 0.5196649378758157;
    tmp_msg_0.height = 0.0021012505757389555;
    tmp_msg_0.services.assign("MLXCKUYBLGINAREBZWPMRJLMBCRZOKEDESVUGFRCWPTAGBCJUXTDZNNWQWQYYLGVQXTPIYJRRWJEVGNNIMMUDTQMVITUBWEPOBSKKFYMAYLSEXFPTDJCDQHADSMUUILMHJOWRKTAAGPZBOZUOSGTNTAHEYTKRNEVFXGOWYGFSCHFLYKBPHQEFZ");
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
    msg.setTimeStamp(0.13461672672307);
    msg.setSource(14155U);
    msg.setSourceEntity(64U);
    msg.setDestination(48694U);
    msg.setDestinationEntity(84U);
    msg.localname.assign("AMJMORKLHURSHBDKJMOWUGYKHNNEKEDWVPEXDYONGSICQXNTEZGLPVSCEXQNSNTDLTVBXQGNQFFSNJVRFWNMEIUPQFRZIAEMOJRFLYGAWLIWPMMQCVGITUFJJOZDQTVCPJTMAXLEVKFCBQNYOQYLCWPSZHUMSLHSHQVUYWRRTVUPXIIPBYS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MRABLPBQQRBTJVNAKVFRVOWJGHMPDJMGUYDCCNSGHJSPMVTNNNUELTDNRAGZRGPOLUXOHSTWZIKHLEQCBTIAOVYZCVHZFKGKMELEASJHOXGDYZVKNLSISOWBRLKIVJTDSXLQXXMNMYKUKXYBCTUACLDFRYCWXQZKHUWOYFWQUCFGFUMOHRQG");
    tmp_msg_0.sys_type = 241U;
    tmp_msg_0.owner = 60891U;
    tmp_msg_0.lat = 0.37611085871613115;
    tmp_msg_0.lon = 0.8430186804969632;
    tmp_msg_0.height = 0.2737202222435897;
    tmp_msg_0.services.assign("PUVSXQBOMKLWVZSG");
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
    msg.setTimeStamp(0.8371013676656313);
    msg.setSource(54877U);
    msg.setSourceEntity(83U);
    msg.setDestination(5217U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("XKPREJRCAGJDHSJZWIUIYAQRDWVEDEGSINVFFBEUJKNOYHTWAOYDHFKHROUWWPFNKGDKPNPIQHBDBIPACPLKXVIXCACVRNFDCUAWFQOGQVUNEXVZETYZOSFLXBDXWGAKLLFLTHBMJTTWHQLESLMVAVYGLUMUBXMQTZNRPWSYJBFYUUTECOTOMDEVYKDGW");
    msg.predicate.assign("GBSITIAXMLRWTLOPWSXRQWIDPPB");
    msg.attributes.assign("TRUVBTBEGCQEZYZMLKXMIZDOCNMGCCKZQTBEOUFRTCLVDUXHNSALTTNWYWXGFNWVSTQVQKITXWVGISMUMCDJQGZWYAMRFGNODRKFWJPREXYCWZFOJDVPEXEUVBEATFBQYLIVDGPHSYJFSLQBHFPSSHLWBEGJXEOWHRRIKMMARPXOVJKCCRMOLUPNSPATKYHVWN");

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
    msg.setTimeStamp(0.3545013741793679);
    msg.setSource(57114U);
    msg.setSourceEntity(192U);
    msg.setDestination(48539U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("MVCMKBVORTKOWEUFMHCZSQWTTBFQDQLNNKJXZUGPBQUXJIJWOMSNAHIZHYTCXCGLUB");
    msg.predicate.assign("XLVOCTWQTGFRIUSQWKDKBDKXBVXBGUNBWUEJIBQTLVEAPISWUEUXMFDFBNSKDPGZIQSMFAVFMVVFYNUYQNJFLLKNEGTLDBRHULMOOGVHMZTZQYJSW");
    msg.attributes.assign("TIPJCOBRYSHPCQJRKQYRNTHLVPNZCFNGRAUGNCZKNFMGNBSBMWVUFLWSKBYTFGEWSEVWBILSUSIRMLQRXAGMEOMIJEICYQDWJZCLOYIDWAPYFXUDCPJUHJMTWXMCLJNOKNVWOXITHGPQDULIOAYVEJXKQTHFZZFIMGQGBABHDPSADGUTEUDR");

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
    msg.setTimeStamp(0.34782856861536515);
    msg.setSource(20189U);
    msg.setSourceEntity(148U);
    msg.setDestination(22086U);
    msg.setDestinationEntity(82U);
    msg.timeline.assign("KIQZWJBDWRFUCPLTLABMNGUDIWXYQDANXKJPVTSVGNYHFGELDDAQHBJUOQTPINQVPCSEHAJYEXDCNXLTSBXZVBUMEGISFAZ");
    msg.predicate.assign("GXMOMQVHNWRAWZXRZPCGRBTQEXKYDAGCLOXLWXSWQXUFBZHQIBEZDZQJELEMKVSTZYUCHIHHFJVNQZAMLTAGIFVEWRISCSAKTWURKSKUJQDNDVVVHZCPJHNGVXXYUXBOBVDKMIPHLQTFZABHKQRLRRUMTPOJMKLYSJXIBLFANICODPLOKOJYTPPNDZGOM");
    msg.attributes.assign("BUVVQHHOMJLPOIHXHTQNGVRZRZGIFVTDRNDQBSABSPYCESEXAFCYITQENNOHWKWXGITGZPSSBOSZRLNFJFLJYEXJHFRBACDPIIGBEQQZGAVHWQDTQNYACLEYGBLMAXCBKCTKOARKEMMHUNXLDMTAWYXYEJDZBWCXZY");

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
    msg.setTimeStamp(0.6685502856034337);
    msg.setSource(47431U);
    msg.setSourceEntity(26U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(76U);
    msg.command = 84U;
    msg.goal_id.assign("LOESNQYBYYPLPPDVZLHLGDMHTOONIVSGQBPDXKFRLCTCUGIDJGKUIGFLCISXZHBFQKJMGPPKVRRCDJFYGBYFEKRLACVWXQQNZMXTOWXYDZRPCAYEJTFGUXQBVGAEYHLVBZLBFIIEPXUVTXWRKOOIAEWKEPIHMJUQDYJUOMUVSNTSFSKBAXHQNJSEZUHWBORHKRJWYWHTEQVMSZCF");
    msg.goal_xml.assign("GXCNENLEYLGCKUSOKPWMATVHLFBOMWIDUDXVQFGMSPBFARDVJMZOBZTXQFSSNRRSCHDJPLBLGAIOQRTAGJBVZACMOSEOUZXXSUULKGWPGFLKKVMYCLSYCHTDVIQPFTEFZJTMQOKWQQHVNHNCXJPACWNZDSHQGIRKMHGOHIAMEUYSYTJEGVFRNFBXJUHADNCAJIDNYXDLNPPRKEMVUWBYCFTWPYLZTJZURIAQKEBRBXIOQTZEWUK");

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
    msg.setTimeStamp(0.6930958134411594);
    msg.setSource(58077U);
    msg.setSourceEntity(22U);
    msg.setDestination(55746U);
    msg.setDestinationEntity(135U);
    msg.command = 161U;
    msg.goal_id.assign("QQMLIRKOQKPNKLUJJBTHAGUAOYZCEGKHITWIYCWOBMFXDERGBAQRCSZZXGHTQZCHOXLGZWKRBDVYPLQSDGWYKFSOCBTBPXMHJLXPUQWJVHHXQOYDICLJMAMXBVFNUFIUQCFFSKOFFGIMEPSPVOKXMRLDJKGTDOCARINNDZTFUWXAEMDNHWUZUBYNAPIEENISRYNBECPUBURSOYVZEVTVRYQDTIHWKVWJEAJALZAFSHSWYJR");
    msg.goal_xml.assign("RBVFWOKNDVBKGOEWRIALWZWUWHRUCGQXBBKVRLZQNDHVXNOQFPILOXFGOOLATLAPHRCZJLGUMYPFAKSVSJPQYMZEYEFSOYGMVZTTJIBEVFTNAQATPGNQUVYTHWIYYUMORVECWTBOXPIACPXGAYETZDPDMQSXMIJUCJLQQSNXHCOXHULXFKJNDHPKNNZIFYYTLESMSBDDJZAHHEQKFGMRHGFBCSMZPBEWGTWJDDSRMNU");

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
    msg.setTimeStamp(0.6355099202127147);
    msg.setSource(4957U);
    msg.setSourceEntity(224U);
    msg.setDestination(59267U);
    msg.setDestinationEntity(253U);
    msg.command = 218U;
    msg.goal_id.assign("QPWSYWRNAGALKWBFHLZKTKWXPVJVGUJJOJMUTGEDZTTCITAVLGFCVKKDQIZUOUDGQQFFUYIMHTMBUPEXEWYLSBIEESDHHPDPDZTSYUDOQBPJCXHMYLITTIGQ");
    msg.goal_xml.assign("CVGFJXXMHTJRKBZNEGDRPRWRBZSJYJNVJMDXEQYGDBLIGCCCSYHIOOFPIUXSQRNTUJWKIEGFOSSEQWMDMWRDYHJBBIWGXZACKMQEZTPOAFWXLUFXSTKMNAZLMMHWQVQJGYEOL");

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
    msg.setTimeStamp(0.25700585213685445);
    msg.setSource(60032U);
    msg.setSourceEntity(227U);
    msg.setDestination(49592U);
    msg.setDestinationEntity(180U);
    msg.op = 233U;
    msg.goal_id.assign("PZSCMLLCOGLBKRTNBOTLLGVDMYSKKKUFIQFMWEROYKYXHJQDSZGYKNYNWSHXWPTWMKPZUJRNPBZIOYWQTNQCTCNJUPIQKMECZJJGAGADPXTFWBEDRQZXVUONZRHVYHHUHVPAJOFVKWESMACYTOLVNADEZSXXOUBAENEHGRDIGBATQFEDZMJCATIRCASFCHWIEIHGIGFYVXDXSMQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GUXXAGUFXMOEKYIAFVWNJHXXSBWHLRRNIDZBMIERVPQQSTXFSGCLOSJFYGFKPUWKEHFEELTJILJWLZJPH");
    tmp_msg_0.predicate.assign("MBHMLZPGISIABURXAVUHHNPJXLFKFJMOBAOXCVYFLCTXTQVOROSWKRVNQWUFAQBYWKKEOBLSZGJXTVDQWEMJVVAJQGAPZRERJHTNCOACTHDSFCSPVYSCQMNKOBTHNDGDNTEZXGUWNICUQQOFJBAGISHNLDMDLIGTJKLERFMEXLWSYFXZHEUYCWYU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UCUPTSIINLAPTWEOKMXDRWGZOZXHQZZQRHFMJHBGGWYNFVZUQEUOCTJMGTFBDKCXWNCYBIKUBWUIYIENLKSSRTVGRRPPJFGOIYJXJXAKVTPOWKUYMDUJXEQBQGNXBRSBAVQDTORVVROMVEXOGHQNCVSZWFJXHPQSTRADEDNMIDLAKAKYF");
    tmp_tmp_msg_0_0.attr_type = 18U;
    tmp_tmp_msg_0_0.min.assign("NBMJGNFAQHLOFKOEDJGXEQUWSCSVPXONUCHRFQTUKAQXVZZQXUDYIFDVKWYBRUPPTYARKXYRGJGRHUMNBPDNMOLQVAVWLHBYTTYJEPVMKQCGPMEISZREBHZPWILUTLJHOMHQCAHXSJIFATCVYBDSBEUMOKGSRTCXJGOUZMAXTJPHBRKCBRSCDSILOLPKGXWFTRNNNFZTCGKPNQSAILWBWLNZVHFXIYWAZIDWJIYFLZVZ");
    tmp_tmp_msg_0_0.max.assign("JZJTBSOIQFQLCA");
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
    msg.setTimeStamp(0.7463649129431731);
    msg.setSource(60225U);
    msg.setSourceEntity(246U);
    msg.setDestination(8495U);
    msg.setDestinationEntity(82U);
    msg.op = 145U;
    msg.goal_id.assign("GGASHBDQTCDBLRYTMJINVHSSDWPFRCUBFLZMCPZIPCCCLMGCXXQABWNYDJEBJFKEKQFPAJUZGAAYIGIROBXNBHPGVIBGFSNNRGHMPQQHFPWXKYMYLYZNEVUMIDLKSLNETDYMXUTXKBIEYSCOQOZRPAHHCTEHVATOWTJLOEDQJMYFUIEUQRQVCZJRKORVWGUKWSJARVJLOSZUP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JESLKQHIWGYBRUNDUDPOVQDEPRTVWNICHTOUMGSKDOJCFWQDDLPKFUPKPVKXPRTIQAE");
    tmp_msg_0.predicate.assign("IEKRTQKPTZZLIWSMOFXSKVZNQKSNCIHAUCLYKFYXLDMUGFUOUQCVXSTUPBAICEIHIAANVJHDNHPJHGSGRYTWPUVYUXOEVDVK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KYOHOWCEQWTMVKVHEMXTEQBIFMCFPZURUEFQXJFYGRDHUUMWOVLPJQASHIKOLKSXHLIKNBNOAUZMYTSEGBXDARDUEBWJICKZALCLBJSDGZQKTWDPTZOWFTHBXFWAMAJBYPZTXLAFYCNMMDVIVWNOZLVDJRDIIELRBGPCVGETNIGKZCDBJNPPZSSYNWIQQPPINSBYPYQHKCNUKNXUVSUDGWAVUFFJYVQAHES");
    tmp_tmp_msg_0_0.attr_type = 173U;
    tmp_tmp_msg_0_0.min.assign("XEFZFGBQDKNOIRJCEGYVNJPDWITSYPMADWM");
    tmp_tmp_msg_0_0.max.assign("HUQKCEEXNMCDPANLZELUUQGDXVGHGHSIYZZPMRFFYOMAALGGVIBOQRITFBNMAVWGYUJPAPNVDTACXNDKMWMKRCXBEGKPSSCRGBQWUOQFTYKVFRJAIQRSNHWSMBCFLLROUWJRZVFLJXIZBLELHKJBHIUCXYDWOOKEJXTSMZVSHYYVFUTIYTDDVONGNWPCLPRCKNTLEIMUJGIIPBJXEPZSOQAHOWFDKJEQPAEZUKQFXRZADSHCBDO");
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
    msg.setTimeStamp(0.9077225911231128);
    msg.setSource(49366U);
    msg.setSourceEntity(136U);
    msg.setDestination(54259U);
    msg.setDestinationEntity(132U);
    msg.op = 15U;
    msg.goal_id.assign("YRXYLIJBFXTHDOAOIKQVISLDRTLMGRFCUMDAWGVKUEDSIPDKLHJKABISFJWUQZWSQVKFYQVIYMQCTBFJDEWQFBBOXNMUOWLHSOZEEVOVLCEAWNBDYXEXGRPASRHTDXNJHKALZNBPOXCAZQAVPIXJHELKWJMVZZUTGVNPLSQGYPGGPCAMYTXWTIRK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CLJZMZYIJCQHNBGKYZPHYOSGGQTREEDHLNGKNIHPUNTAEPEFSJHFUFLQTDXTYXFXNVZMWMREUKBVGDYUWYZKBVJZYNXQMFLZI");
    tmp_msg_0.predicate.assign("EECVAOTXMWKQWJWKXYYMWJRTRQAIQHQXBQBUTYVDLNIUMUIXBLPPABNJVTXMZGPDETDWJUILITMWGLNVHELAHSHLPXSDJGNTAZKZLBKOHDGRNEFKRLFVYHMHSCSEJDZYKNJGKCIJYOMRVXRMOAZBACEIVDTOUDOADQNTVNZGHXSIQWTQFCJFYWULLQOCSPRSHDPZSFEFGM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UEDTAKKHWLNPRSOFHJGHRWACNOPIWVJTIQCBQELUEJKYOFNUMVPUQDUEDBDBOOWXLIQTMLUISRCFWYRKNCYWMRMAAURSYHCTCDGGZRKJRWHBTQRXNXZXHLXGGTFIJ");
    tmp_tmp_msg_0_0.attr_type = 131U;
    tmp_tmp_msg_0_0.min.assign("VAQPSSJBVISTBDDCAPUZGHHNMGBTCXGQRXOFZKDLZSILNPUTDFGXOFNDZCJUKINASASORQNFLTOZVXJFCHVLCZHMWEXPXPCNCQBKGEWDWEXZKDIRXEBOZFMAHQWKGEUHQYVFQ");
    tmp_tmp_msg_0_0.max.assign("XHUWSVOXTFCJCFVZNPMMQGHMDHZRTQOOKXDZDHBJSBCJQWBBPWSWMIXMGBZQZAUPZNFTAOYXNTTHXKTRFVYVJASXGBGFEAEVESREQNWGAYDGODGWXWUUVVILJKHRKBPMQGAUNCJLRQPLTDQCSRCIUWYZ");
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
    msg.setTimeStamp(0.48247229123556135);
    msg.setSource(6972U);
    msg.setSourceEntity(239U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(221U);
    msg.name.assign("BSIWADVXERZYRMCGGKZPQLVDCSDKBZCNOPWZEYYYOBLVKWELLCEVMHOQLKDNFJQGGUMPTMNQBCWITKWUTZEMNHJAZXRCABFNLFRDJVMBYFFFJPKMEFQXSURYOQJKHIJOIZELPQKIVBFLXXGTJAJ");
    msg.attr_type = 115U;
    msg.min.assign("GNZPKQORTZIVMEUVORQOWYOKHSZVKEMANMFUWWOMTZAQZEGBDAQFRZPGHJRDMMUYHGJXZJOCKQFNUM");
    msg.max.assign("NZJHEAUEGARHXDCOLYRFGXU");

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
    msg.setTimeStamp(0.10637198721992402);
    msg.setSource(35578U);
    msg.setSourceEntity(70U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(130U);
    msg.name.assign("BLREAMJWARMSUGDWJDKMOMASVCXADZHLGNDQZUYUBCMDMNZRGCJEE");
    msg.attr_type = 231U;
    msg.min.assign("HTHQOBOVMSZWANDXVQAYMDKQIKZSAUIYFVLZJPXEBFRXWWZMYPJNWXPOLRGLVGNLHOHGFBTPLJBETHPSVFGPECDFEXRSGDCL");
    msg.max.assign("ISPCHZETDLJWNGKLOIKTCKXISWQKBZEIJPYFJOFGTPREXZFFBKWMFPXCUZBMJZXLFJHXVVEOFYLUBKGMKTNZCMTTUXAYALYORPSRCJFBMNHIYIVINQYCMWTNTASTQJADOUZDHYJHHADEDQSFGUIGQUVDAZMBHOLYRFHUPNVEBPKXKNSEWAQJRTOWGKIOGRWVAHJCLLNXVAGQRPNDSQQCUNIUSXZHCWODBODGBGV");

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
    msg.setTimeStamp(0.6495244602589496);
    msg.setSource(30807U);
    msg.setSourceEntity(133U);
    msg.setDestination(14329U);
    msg.setDestinationEntity(251U);
    msg.name.assign("GUNXFBVGNKDNIVAYIQFYDTLQIOUJMYTOEMLUPTQUXUWBESKOYTCSYQERMOMPFXZIDAZBEJKRCQJVRFNFQUQVXHHPHMMASTGPGIOPDGJFZHTNWDAVEBHYRJPFGIKCJKYHJNMQLZOGDGVZKUELMKCSHRWBD");
    msg.attr_type = 72U;
    msg.min.assign("LCJDYQXYHQRYQDCNYFUVXFOPPQWSEGIJHJRTNHMCBLLQFIPZRREWGAKCEXKQLEITITDBMTEMFZCAOGAOPTXR");
    msg.max.assign("SHJZYHVAMFLLFXLZRLEQYOFERWNXUCEWGTMPHDWQKAAEURFIZHNNIYCOYYTQFIRTMFBONDSKVOMSWZPIRKAZVTOGNRMYQSYNRUXUCNEFQKWUUBOCMUVTBBHBXWGAXADHDHKRDWTJHJWPQCTGHOUXOVTPQSUEXRJIFSOCWIYJAYLQPEKIGVDDFVZBPDEMLQIFSSIMZGGCMDPPSKHNTAJJPJZGNTLAZBIZOX");

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
    msg.setTimeStamp(0.04684329381984986);
    msg.setSource(7574U);
    msg.setSourceEntity(17U);
    msg.setDestination(47359U);
    msg.setDestinationEntity(190U);
    msg.timeline.assign("IFONYRDCHXSZHUPYUHARWHXODNVCIPFOKXIMDLLMBOYYDITLFEJVFXMMDARKQYBTOGZQDEWPUXHGTWEALSUMMJVLBXGWMTBSNNHCKBERUMAWROMUNBXFZZFNZRELYIWTQGSVHEVVQKDOZZJLZPROPQRAAGSVQNSEXPSVDUAAKTYCLFEHAIGJWATOBUIQJGGTSRJLVYPIOJPKWLZCTBQYJFCKJXIRHPIQYEKDKFCBXMQ");
    msg.predicate.assign("AZKXGSNEAGXIGJWPUPXWAFJODENFTKSGWQJQDQRUBZBULVBILFOVLCNDVENDKUXRUTMKDYPSIQXRZCUGTPZGAAEPCVHUWFOIFBXBAJSNGRVDNHBFLGCKIEQZNRCWQDAZSVDMMJRHPARFEPOYSFCBHAQELKJWCDTIJGWWTRJYPBBHIOUWOIZVNYRTKPHSOYZXAMFOVXMETHNWSNVCKQQXYEOOCZTMBMJLYSYCXEMYLYTT");

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
    msg.setTimeStamp(0.14376083513868498);
    msg.setSource(50966U);
    msg.setSourceEntity(107U);
    msg.setDestination(45994U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("UGHJZBXFWYDHSCCKFXSVETUGPUEZPONHKXBQTXRLKMBQEIWIGKAPVPFJZPCRVRLPWOIARRLFTGSOKMIGTBAKISEMSKNQOGVLBMVCZAQXHLWWVUTBNPQRRMZESTLWCFTFEBHDJJECMWCFDSIMXQQGEAGYUQRKGNUUENZTWQFZNNIRYWDNHOSYHDDAHNHGIDMDOHFWXPAYMQBSNZROBUUTCJZLJOUCVZLKEOJDKJDAYXLLYVYYTMAV");
    msg.predicate.assign("TFPNFUBBWMEHOPIDLJRLKWYHVBUUDFRYLPIYLEGQKVAVBYMAPRUSNCWTNJGEUQXTJLJAIDPBMLURDWEEPJHAVMZTVCQFLQFNOJYROLGTPSWDOZTCXFTIUERFXAXKQYDNIUEDAPDHHTMINNZNGJKMVEZLGGYHVBMSOXWSMCWSCNYOOXWQOSEBEZXAMXHYWZCXSVCFXIAQOCABS");

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
    msg.setTimeStamp(0.16094165789560644);
    msg.setSource(37339U);
    msg.setSourceEntity(178U);
    msg.setDestination(22193U);
    msg.setDestinationEntity(35U);
    msg.timeline.assign("TSHPAYLLZURIHXFHKIMFDVCOYXIMENJHQYZAYLEMJNKDGDCNPTGUOBQVOWCGNOPMACVXRCAFZJUEIVWZBZLXUXKGFRSUJRVMZGWDEFJDTQRIK");
    msg.predicate.assign("WDRTXWJXWTIRVDJYOVGTPFQQELOKBDPRPZBNODRHAPHHEBYBZBXOJULJFWRIYFVTAJLFGAISRQQENKEWBOXBKEKATAKQNIFNGLWHCUNTARPOCMIUQNGMBK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YHNOHWOVNKZRIMOLVWMOFPQSZWKBBNAQRAPBRADDQIJUZFTEHMQKZOQJIBAWSCIGTLACEMGNJYVRPMWUTPMQDVQXKDVVFVYLYATHPKNDLMQONATILCMVDUUTPCBAFAQOFTFNZCPJYYTXURBGJAWXTUCQLZFFIWJHONXCFZEJEHGEHNXJOXLUDKHSCHPWDJDZWXCYIXGNCPSKGRYUXUKMEJZVKRYWHMROLFBEPESSLYRSVISZSLBDEIIRTGXGB");
    tmp_msg_0.attr_type = 145U;
    tmp_msg_0.min.assign("KMGKPEDTETISVJLTFAKZHYLTWOWALFRHRQMARMJYFUORPINHWVRDGDXEWZYZQZHUJRVTSAASHGJDPWZYDQINDTZEWVVCEHLFPOOIXLJDMFTMNXZNHKVGMCOUAPBSYKXZINVFGQXILCFKUMPHRXFDJCIVBIESTGUNUPXSPGLACFOHNEBIKKAPBBRCZJUNINGYVEOAEXCMJTUKQJMJLTLSQVWQFOYWHBCQMEYGNCBAKBBDCBDZGOXRURWQPS");
    tmp_msg_0.max.assign("ZDVKPBSUATLJBIOMWSFCUSLQXXETAJGYDLFGRHIDMPYRRNOEEUHMMWCNRUXTAMKCJHADUGDSRSUHTDGGNDYEXFITJDVPCEVCYPFBEHAVWCRVLIOXPCTYLYXKXJVZIQOBQSCXELNNDIKKZSBFWNZBHOCPJMHHZPSALNZWUVPYPQHKZLIMUGMFTOQKZZROQJDQOWFUKLAQOIBEWIKWMFKJMPNRIRXWJVAEYAWYUGCSAYJXVTBOTQGGFTBNZQSRNF");
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
    msg.setTimeStamp(0.9066678670612524);
    msg.setSource(58886U);
    msg.setSourceEntity(237U);
    msg.setDestination(37321U);
    msg.setDestinationEntity(101U);
    msg.reactor.assign("DYGYSJTEDAJZQSIHDIHVOENBQFTGPNXHXMFWAJCAKWJOQEPKTFAYWKFLCMOOFOIOPSZGDZJTVJLTOVWSCSEWAWVPSSMKUPHUAIYORJVHKLIMYYHSRCIYJFTHHUAUGVKUQPMRLFALEDLXLBNUBXUOZMITXTPMNGCVGREWR");

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
    msg.setTimeStamp(0.038061036816338656);
    msg.setSource(17317U);
    msg.setSourceEntity(117U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(240U);
    msg.reactor.assign("XPAWMLQJSUXRGTKJFCTLYYXVPKNKPWHDNIVYXGTWOEKXIYCNVYTOJDHFUQIEOWECASROGVRXCNHCBRJVZNUQTQWPOHHGGTVHVLGFNBYGJZLZOKWYDFBDFDXYFANZAVMKARHKETLJPQOZUUZHSBMPNMQBMBCUWTIOQEDQSTRJZTXWOIREIQKLNDUCEUJAPMJRRSASFLSQLHAOZBKSICREDUBPXESVMIEA");

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
    msg.setTimeStamp(0.45571459484057464);
    msg.setSource(4877U);
    msg.setSourceEntity(152U);
    msg.setDestination(49310U);
    msg.setDestinationEntity(101U);
    msg.reactor.assign("HHHPYWDXXCGBFKVXMJEGVVHBHIYZQZIVOTTBLAPDPXDDYNUYRTCWRSMWMDVQREBPVFGPBZIVTJYLVBRNIJWLQXTBAFDZUTAYUXOHLGSKNCLNDBNSJACZMZJNJEHZMPVCFDIMSEKCXWGJEONKAQFWKLSASKSROULNACQOFPIEGATXZNMPHKUMGYEWDDYRKBHUSOWYLALPB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ELQFLJHJPHXIRTMGREISFOGADKWZVBEZLIKIPGHXJBJIMPCPURFCDSZLECNFUMBBWGOYZNGXYDOLSWVXNXTRSKGCZVBLYHKZWRDNMXUNUVWZKEPAZKMQOCAOACNLDJWTRACKDKAJVOQSCTYFTHHVFGBFGPEUUQQSLASTRTQCQAOXPRMSWOQGFHPYZYSQJZEBEMIAIKYUHNJJWYLTVMNVJSUCV");
    tmp_msg_0.predicate.assign("DEIVTKJFGGNGTPFQPQJWLABLSDWKBSFWPIKIRAHFBMLGCAXLCMOBDSHLXUPCGYGEUHESCVMOUWDPRNXSCZTUHAKKELRQAVWHDORMGSSINUXFOOYJNNUTHDOFQDPZIUUTNQAZPJIRFNVYFOBJPEXMZZZAOAWXJNRTXKRRXECSZTGIBWHQLXTKYFXJYQGOMBPYCVDWQCLRJVAYNWMJMRQNZIVPTIZHSBBICBEVYVVMWAEUU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GSCTHGRLTXDLJKACYZLSAYMPQBERDSLJHNLESFNMIHKZNKNNTQVFYOIVDWFFHWZLAUAVGXCQXUDOLBTG");
    tmp_tmp_msg_0_0.attr_type = 156U;
    tmp_tmp_msg_0_0.min.assign("UIPBLCKPXPYDLZDQCCMXAAUROMTFXYVFVPNRQZIARQRTTEFEATJHWIRSYGHLSPJOWVHJWCAKOOHGIPMYLTAOGUNYXLLQAHKHMPIWEJEJRFDBOMZUEMWZJCHAWOIFNICFKZRFNJLBXXYVDGCMRWGCJVBBRPTFZVQAVSURNUNHSSWXFGDCNJQQOMGSLDWCZOKVPZBNEUVENSTPKDKULYTDMZ");
    tmp_tmp_msg_0_0.max.assign("FKTLEDSIVNGLQTLVXHIDPZDQVMASWXURQTAMOCTNZWKSMGMEHGKHICIWRYRSSOONFFHUGXFZFDSVQHWOLJAUKWYGYIONVPRLYZPYIELTIMKCZJRNSWJROFLOWZIBDMEAKUBRPEAQACUWVCTUAMZUQIYRPCKEBYXPOMNPEHEPSRZFMGTUDIA");
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
    msg.setTimeStamp(0.7716323707329726);
    msg.setSource(24562U);
    msg.setSourceEntity(141U);
    msg.setDestination(33301U);
    msg.setDestinationEntity(180U);
    msg.topic.assign("IQYFFSABPBSECJLUENXKIUHKTLBGJQHQOKGRXBLVCXZGVJFLZHGXPAGPOWLZEKYZMBQZCXPDPNYOJEBEDPOUEUNWRWDUZQDAIDEXJVJXCVLZLNGFVQMGFNRHNJKPBHRHCMTWMUFTDUNHOWKOEB");
    msg.data.assign("SVSICUJTWPUSXBUVRLPWANQCEJKBXRLMLGNKWXXIAMFQEHNJQCMTAXNQBUQUKCKTWROEHKZPFJCGJVHYTBXZZNSEWZFOXVDPNMCPOGKUQVGOXEMFKKREELYDJBSBWIAVYDFQFCKFIWGOLGBWNYTKGCFNOGSPBHTTERVLHYDDTCJDADNSLOITWUAA");

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
    msg.setTimeStamp(0.1778587910423549);
    msg.setSource(34978U);
    msg.setSourceEntity(253U);
    msg.setDestination(47805U);
    msg.setDestinationEntity(93U);
    msg.topic.assign("LZBEHFYYNPQLKDXILHWVZFWQKICZDJQTXTABRMAY");
    msg.data.assign("JDXHVGCTXBDWSHTYMERWBGOGVMMCEFIFLKAPDPELCDBOFYAMGTZNOPPKBVVPJDCPFROYWKDHVCJNAYZUNWUEIXUSLCOWZSDGFQYHSJYLJMVOJIDQGCFKXHPENSXOJEUFGRKCIKPUESESXASRLAIZ");

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
    msg.setTimeStamp(0.8657647477448518);
    msg.setSource(51427U);
    msg.setSourceEntity(164U);
    msg.setDestination(64687U);
    msg.setDestinationEntity(182U);
    msg.topic.assign("CEZHLDHWDGQPEVJVTQQAPUQCVMLXSLUZGJZUZMCYNTYWNXXMSTXIEJRVTPVHCNIWRMDQTYKJMAWSQZLKZAVVBSNDEODIPSUTBTFXGKBDVFQHCUFCPOXEEBNWEEUZUIHPKMNIJDUDBLMLAAMCIYHVDXGGNWNFLXJYKSSIRTCIPKRFBYSRKQNXBRRLAZH");
    msg.data.assign("WZMGLGGLXHMDBJTAYOEQ");

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
    msg.setTimeStamp(0.6256786065806469);
    msg.setSource(33605U);
    msg.setSourceEntity(166U);
    msg.setDestination(9021U);
    msg.setDestinationEntity(124U);
    msg.frameid = 195U;
    const signed char tmp_msg_0[] = {-106, 72, 124, 25, -17, -94, 8, -89, 15, 87, 63, -29, 39, 32, 42, -66, 26, 91, -40, 43, 48, 80, 9, -99, 36, -26, 60, 58, 24, 0, 92, -124, -32, -19, 71, -89, 6, 93, 45, 74, -10, 56, -9, 30, -30, -3, 62, 10, -67, -11, 96, 81, -116, -25, 15, -79, -112, -72, -38, -102, 2, 68, -47, 71, 28, 112, -52, -125, -59, -45, 20, 58, -39, -42, -48, 86, -29, -46, 114, 111, -31, -49, -98, -67, -64, -41, 44, -62, 100, 14, -73, 3, 98, -7, -30, 43, 43, 115, 7, 78, 110, -33, -114, 14, 87, -48, 126, 38, -121, -85, 84, 94, -1, 107, 80, 59, -29, 97, 25, -42, 68, 115, -45, 100, 123, -111, 64, -14, -30, -90, -46, -72, 119, -53, -13, -119, 50, 91, 59, -54, 66, -71, 77, 105, 28, -24, -55, 110, -124, 71, -5, 122, -81, 82, 24, -114, -46, -106, -102, -111, -127, -5};
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
    msg.setTimeStamp(0.0909778290940697);
    msg.setSource(38672U);
    msg.setSourceEntity(132U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(168U);
    msg.frameid = 193U;
    const signed char tmp_msg_0[] = {-31, -98, -37, 3, 72, 78, 12, -114, -67, 38, 22, -117, -45, -85, -121, -91, 126, 63, 84, -9, 67, -75, -111, 18, -48, 105, -115, 65, -12, 8, -47, 87, 9, 116, -7, -19, 104};
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
    msg.setTimeStamp(0.5698793888613023);
    msg.setSource(23203U);
    msg.setSourceEntity(195U);
    msg.setDestination(45847U);
    msg.setDestinationEntity(122U);
    msg.frameid = 9U;
    const signed char tmp_msg_0[] = {87, -9, 114, 112, 120, 14, -110, 25, -89, -77, 21, -68, 105, 101, -68, 57, 48, 24, -53, -71, 124, -117, 85, 116, -76, 64, -68, -13, 46, -5, -69, -54, 101, 21, -112, -64, 63, 63, -21, -46, -102, 8, -3, 98, 85, 74, 48, -46, -85, 107, -76, 65, -107, -20, -120, 96, 9, -42, -20, -36, 92, -128, -38, 1, 66, -18, -68, -62, 53, -94, 73, 117, 47, -106, -63, 48, 82, 124, -108, 23, 93, -42, -44, 22, -38, -32, 6, -34, -62, -110, 122, -21, -68, -117, 56, -27, 42, 49, -120, 93, -75, 4, -106, 0, -15, 96, 121, 23, -75, 8, -40, -13, -72, 72, -14, 23, 93, 110, 23, -118, -118, 86, -46, -25, -75, -46, -106, 14, -92, 58, -18, -7, -122, -51, 108, -12};
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
    msg.setTimeStamp(0.42859453830276606);
    msg.setSource(18406U);
    msg.setSourceEntity(48U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(37U);
    msg.fps = 158U;
    msg.quality = 143U;
    msg.reps = 186U;
    msg.tsize = 137U;

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
    msg.setTimeStamp(0.5308458773321009);
    msg.setSource(27678U);
    msg.setSourceEntity(99U);
    msg.setDestination(23187U);
    msg.setDestinationEntity(244U);
    msg.fps = 40U;
    msg.quality = 11U;
    msg.reps = 124U;
    msg.tsize = 218U;

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
    msg.setTimeStamp(0.24965947737813032);
    msg.setSource(43625U);
    msg.setSourceEntity(51U);
    msg.setDestination(16404U);
    msg.setDestinationEntity(118U);
    msg.fps = 38U;
    msg.quality = 144U;
    msg.reps = 158U;
    msg.tsize = 87U;

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
    msg.setTimeStamp(0.9097222953773003);
    msg.setSource(49049U);
    msg.setSourceEntity(23U);
    msg.setDestination(38675U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.2697594162875625;
    msg.lon = 0.5348350534235574;
    msg.depth = 0U;
    msg.speed = 0.530626706409885;
    msg.psi = 0.9203403230281162;

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
    msg.setTimeStamp(0.5789740983716208);
    msg.setSource(8383U);
    msg.setSourceEntity(253U);
    msg.setDestination(63717U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.034612033531957964;
    msg.lon = 0.6002105729588635;
    msg.depth = 70U;
    msg.speed = 0.5039812956448425;
    msg.psi = 0.6322790366247044;

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
    msg.setTimeStamp(0.5400610596155766);
    msg.setSource(43015U);
    msg.setSourceEntity(242U);
    msg.setDestination(49984U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.6994454086446755;
    msg.lon = 0.7583095487102276;
    msg.depth = 116U;
    msg.speed = 0.7733672524754842;
    msg.psi = 0.42344629882939444;

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
    msg.setTimeStamp(0.8568027515628448);
    msg.setSource(10925U);
    msg.setSourceEntity(126U);
    msg.setDestination(47567U);
    msg.setDestinationEntity(6U);
    msg.label.assign("MTMVOFMPBGGZQNCFSYSYCAXXKEYZLJIHWQRNPIBUWTPPGDKBQTWOTHZLWEDBJGFPPWJALIIJYS");
    msg.lat = 0.1857454615060561;
    msg.lon = 0.7749580355522928;
    msg.z = 0.5638797099560031;
    msg.z_units = 96U;
    msg.cog = 0.19646904180604896;
    msg.sog = 0.9345538787635022;

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
    msg.setTimeStamp(0.1330105278351097);
    msg.setSource(27472U);
    msg.setSourceEntity(76U);
    msg.setDestination(43253U);
    msg.setDestinationEntity(123U);
    msg.label.assign("SCGPXCLWRUDPOSIKWGYHVLKZVXXTRTPHKWORCTFMGTFBMSWRQEMDAMQKLVNVGUJFBAARBIVUOOFEXJNLHPUCCYADXIQZULSYHDOKKUDKYMDFQAHQEZGSFVJJJMNXVWTAQNWEOYJNWSEHDYSYCOXKNZFBJSPOGAWHTAFTXCPTZAZIHDNXLIMLHPLIQQPMBUQRJOMFU");
    msg.lat = 0.7939757735745921;
    msg.lon = 0.05926840833188607;
    msg.z = 0.4084497319846918;
    msg.z_units = 43U;
    msg.cog = 0.5677237010231088;
    msg.sog = 0.7889302000808119;

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
    msg.setTimeStamp(0.6518702803994016);
    msg.setSource(35945U);
    msg.setSourceEntity(38U);
    msg.setDestination(3739U);
    msg.setDestinationEntity(7U);
    msg.label.assign("ISQYQWEMQYXABPJUURGTAXBGRXZDJZTFSDFUKZLJGJYHIGFHNPLLNYYHPIMLEXLKCCCBEUSJOBQZRVKDBPGUSQJMEIXNWYMLJDUFECBLNPANCEMPRRNZDLAFCAJOEMWMOBQKAIRIBVTLQYFPRMGHTVDNOWIHZSKIOESBVWUCWGSOFTRZUOAZIOOPWDKCFXZOYSKPVGVEEG");
    msg.lat = 0.002947704819848962;
    msg.lon = 0.7505952191589091;
    msg.z = 0.4899079311663975;
    msg.z_units = 58U;
    msg.cog = 0.28992819059303354;
    msg.sog = 0.9416444588811175;

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
    msg.setTimeStamp(0.3349190771990713);
    msg.setSource(32245U);
    msg.setSourceEntity(220U);
    msg.setDestination(37133U);
    msg.setDestinationEntity(4U);
    msg.name.assign("NWABQZJSVVPRNGXTEBCANPUDUGKSJXCMPEZPCLHROMAOTKLHRDEGXJNWINABJFYDHQZLIVLCOZJEYVTRBGZAFPZENQLBNUHFGRSHQZSXNQFXIVRGAWWSTQOFBUHZDIVYXSXDCJEQTDMWKDSZDJBUCT");
    msg.value.assign("PZGWNTPUZECBZVIMUTQWQTRGEOYSIXKHVFQCCPYRKYIVNAMVSGOSUPHIAJSATBMEFXYWJVGAJUBXRAEYWYIJXWGKVNWEHGCLDCHUQGOEEVAAZYSZUJZERFXFSGPTMPDOYTAKVGITBJUUHLPGAWSJMXDXRNNUSNZJRFVOHLRPCKLBHQNKEFBZRK");

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
    msg.setTimeStamp(0.3603579128974892);
    msg.setSource(24243U);
    msg.setSourceEntity(92U);
    msg.setDestination(8584U);
    msg.setDestinationEntity(144U);
    msg.name.assign("VCZLGJRORQDWZJELBXABUIFMBHQDEVSFVIDIDMRBOVEPFPZUPTKGKUSWUPPFXYFOAFCKZIAOQIWUICPOCLYBHIVUOTMRODAYIQXGVOQHUJYBWBYFVPSNMZMEGQFRCWHZBCYATPYBNKXLTSATNJDOKNXGGTGHALTMZSYKQIWLNGHHXC");
    msg.value.assign("RZJGBVCBAYPIMATYMDJFFAIXCARWAYBQIQXQRVZELPXBAWEOWPQFMSJGXQQEUUMSVNEKVVTLADPWUKDSWTETCGIVMLLOYJAYHCHRZXOMKT");

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
    msg.setTimeStamp(0.7677373884829763);
    msg.setSource(48102U);
    msg.setSourceEntity(239U);
    msg.setDestination(18546U);
    msg.setDestinationEntity(86U);
    msg.name.assign("NURJRJKHGBATNZWIVYMXKCAGTXV");
    msg.value.assign("DLHFKLJVOPRCUMYZSPOYDFEDNJSYISVMUZAWEOHPMSRXGOVSUWEUOTDSNAIMGBNCVGDLPBNLKGRFKACBQINPWPBWZXSIAUKZERTZRALXKJWHTFEYHXTAIFXNZUUWORLJRMIQQSBXACPYLNQDPTJDCNACWRQIXVEHZJJKTCBUCJCQZMVQTVOGGSFGHMYFDVAXWQHOJGGZTHTEOY");

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
    msg.setTimeStamp(0.4112141286975174);
    msg.setSource(40532U);
    msg.setSourceEntity(23U);
    msg.setDestination(2625U);
    msg.setDestinationEntity(193U);
    msg.name.assign("KZOZJEUUYOPZSNBUTVQZDAVKBSFISMOANUNYCEHJDIDALHELWUWOCBYMTTUQBJEECGLSTGRSCBXRUIKXHAHVOZMVPFHQGDNWSAMQFYMNVATDJIGQDZLREJXXRX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QZPKDGOPIVXO");
    tmp_msg_0.value.assign("TRNDNJKHFFRESGIXCLMPFCQQY");
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
    msg.setTimeStamp(0.13461587451358437);
    msg.setSource(53558U);
    msg.setSourceEntity(126U);
    msg.setDestination(26131U);
    msg.setDestinationEntity(146U);
    msg.name.assign("HRSKGIZQLJMNUDOVAAYQPTXLFWDKIJEGXCTWGULTMXMCOMJAODKSRFNBQWZRSMEPYASAXWRFBWTYZAPQX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SDHLGYLOYUPVLURTAWSKFGEUATQYSNLWZWPAUJGULIKARHEEVSNMBYKFMPHHHPJNQBHTDMZHCCJTNYRUJIQVTFTAWMXJIJMWRBGWQGBRNOQIOJJPKZODIFKXYQPIPZXWJBKVYVELQRVOEEKHGYWLDZCMUXIKBCFKTROSXNCGGOMXAWIKVCTVVSQBYXHTLDFNJNMASWMEZEFORDSZHLUQNBFERODGOIAVAXBDQNDMYCXXFFEDSAZLIGRPSTCCZ");
    tmp_msg_0.value.assign("WWCDJERBQAJHXZGKJLYRWTBXOQIKCULGSTTDJRNLYMIBRXIXKTWMANDAGLYCSVOZZELHLYFAWATFKSCBHQPZIIVRCYGFVKGUXJSNHBPGLQEPPVNJYBOPBFRZMJWPEQBZTYMGYSHDHUUKAVCHAUMUAOOPZKNMPFVCZINDXNRFIJ");
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
    msg.setTimeStamp(0.255471582691837);
    msg.setSource(59062U);
    msg.setSourceEntity(218U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(231U);
    msg.name.assign("ISLWEEFSPTZKDJFGFBKLTCKDOLBPJ");

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
    msg.setTimeStamp(0.6192082492284183);
    msg.setSource(17399U);
    msg.setSourceEntity(232U);
    msg.setDestination(40763U);
    msg.setDestinationEntity(165U);
    msg.name.assign("HNAWUOMHUQSHZFCPEPUFZOKGELXJGXDNFGDQNWTKREMEMPKFVNWBLLYSJCVMFPPJDRRGOXHDTIQFRDYEPLKGPCQRAZKQVLHYRZCYKVOMGAUTTTLIRTMXUGBIEHNPBSVNTWIIAIXWKNIEHKJXHCXZQYMEFOFZMCMBY");
    msg.visibility.assign("DVSCOHVZIABILANMYCRWKWTPWPUOGIWHMGVDHOJYOKFRDBNPSLYVAGJQMBDWVRKZMHVCXJUNWPJZSDQXARCDIXAPFQETHITQCORYUGHCODAZBMZLGOXKTELEPWPTZAUNBFMGNGIKJPWWBDXFKOLYEZXMBQLGKLZXHTHGCCLBQUQPSFEVYUTXKARPRUTVNBCEJNLVISNSNYDQRZMI");
    msg.scope.assign("OJXTIRUVZNOFPZGDTEWNGFEIDNKKXAMCLWMGUSDHFECCSUPQYAL");

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
    msg.setTimeStamp(0.8003961406483852);
    msg.setSource(18301U);
    msg.setSourceEntity(122U);
    msg.setDestination(33627U);
    msg.setDestinationEntity(198U);
    msg.name.assign("TYRVEKDWUYUWQWLQCNCDCYIIKPPZYFXXZTPHGAOVIFRXNFNRRXYSTOFPGUMVKAFYJNMZZKMKKKCLLSBYCGCBHOOWALQPWEEBIBWBDHHBXYMUGCXYUNFJHAJSPPEDPREZNJMIALZGQPDFUEQSJJTDDSOR");
    msg.visibility.assign("HEVVGPXOZBWOWXRMRGHDCUBERGKYIZASONAMKEJLHBYYDSTNGJXCODKQSLHBQRMSDBZXJCKAUVUXEOQYTGMQKTEPONGVYIFKQWNLLGICPBNPCFQJZJJESB");
    msg.scope.assign("KAQKHEUQAZXZYIMNVQCVISULNOVPUQGFWLRUBEBBIIVMVSABWSDQJDTZADEPKKPBJEVNTLCRLINLEXNPZLPLEBBJIDVACWWMBPSEVRJRTMOZZKMODFZMIPNGLAFKSHBUPRQTQYOQYMORTSOJXOFXXZCWQQDSGITDNPLRHFWOGKAPKLHUUHYYHKVZHYTU");

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
    msg.setTimeStamp(0.9112278200262975);
    msg.setSource(27437U);
    msg.setSourceEntity(78U);
    msg.setDestination(37151U);
    msg.setDestinationEntity(129U);
    msg.name.assign("KRCHLKVVCJZFKTNGMBWDNBXBICIOIOHNHMRUUSLJLEFNTBUDBYVJFGVQPPRQJFZLPSKJYFZCZKSIEHXXYXZDDSEWRPBSPDMTAYXODWGOIEGPTLIVCHBYWQFZXANFSVPADMVYJOKZHCAUOQURSNUHCNGLWOJWWAZGTMBEUGAYKGSMM");
    msg.visibility.assign("YHCYOUQYQSJVJWVNGGGMPPKTCTCOWTLIJGWZKUZBHAFBBNXSEPEEPGDUALPQWTDKWJVQLIDAHIFUHBAKXCCZSFVNLDUQVMCJXIBALYMVKGLXSWOEHPFRPCCFTVKERIDRYAEBPADUNWKUCHQOUNQXQVTJXMJNEDJGLHTMPYLOYZPFOSRYAVKZBHSZEUISGYFWDCMXDNSBZOGFJYOIBJRRTITLSOXFKEMNFOUMARK");
    msg.scope.assign("YALOLJIKDHAPHVEFRPMDCBKBMXYHLNDAYGFKVZTGXAYUVRZYCQSTZHVMFHQAIOYWIMPEIZFPBGPOTNJGRJOQJYJSKUJWTFFCFWEVMWRWPVLUQSCXCGOTYKPNZGPXTLQKJDESLSQXCEEVAPSVBMDHDCRAYBEJGBBXFMUOWIMADJHNNA");

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
    msg.setTimeStamp(0.6983177461905618);
    msg.setSource(5139U);
    msg.setSourceEntity(142U);
    msg.setDestination(32751U);
    msg.setDestinationEntity(165U);
    msg.name.assign("APFVXOMUMDHCXWKLLJZGGBUDBGDMZYBTRSDWLDBSNLYWCWHYELRL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LVHEJRPKDKNZRPXRJCBPYOVBLOXMSCHGFRRYIMFXFHFXZAYIATYOSBDYQRKPZUDQVYOSBGSFYWLNUSESOUFAZQJRLBLMIHSNWPVXODQNGZDPDTKW");
    tmp_msg_0.value.assign("UTXDEJNUDJKXDFIPEGXMIYUMHVLPSMIQQJIAFXCLPUBCEWQWCOTFTZGELFDNLYKLUPARUOXAUTS");
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
    msg.setTimeStamp(0.6191748951040632);
    msg.setSource(11971U);
    msg.setSourceEntity(247U);
    msg.setDestination(13880U);
    msg.setDestinationEntity(119U);
    msg.name.assign("DZZPJJQJUAAOVMZEHRNAUGYTYLZBYFTGIVAXLPEADOUOMBXFHUVZKKWMTPIQRJNHAEAFMC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EFCDCURGALUKERMWNTCZVWGLXQJR");
    tmp_msg_0.value.assign("OTNCPKMOBISUWEPETQFZHY");
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
    msg.setTimeStamp(0.18683559419247364);
    msg.setSource(30463U);
    msg.setSourceEntity(230U);
    msg.setDestination(23162U);
    msg.setDestinationEntity(83U);
    msg.name.assign("CYVGCAPVAUJZOAPRPICAEGPLNPGGDHMILNHTAB");

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
    msg.setTimeStamp(0.8069201108616066);
    msg.setSource(8016U);
    msg.setSourceEntity(120U);
    msg.setDestination(48807U);
    msg.setDestinationEntity(55U);
    msg.name.assign("BHUOZVGMGPCRXFLRVPAHDQNOSKQAELEWZJSCSDZSRDYJJQFFIXUMVJCOAVPPRYMFNEHICTUYOITSXLQZTAKYQZFOCLDZMXHRXWHRFWYUJHXBXKWLBZEBPNKMBOTOPGLDHUJYVDWBANOIZAKEYQGGJHZWNDGJSUKUBIKGVPGLAI");

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
    msg.setTimeStamp(0.11400392628734235);
    msg.setSource(15016U);
    msg.setSourceEntity(65U);
    msg.setDestination(16907U);
    msg.setDestinationEntity(123U);
    msg.name.assign("HXTZIUCZLRZRIUBEIZYKEXJECLMUGUDPEVSLDPSQPEXXNKFFVGZVNXLGNAIHWRYKQYFKLYWITKAMXSXJBKFAFSWGBWSKPATNHGNMCRDONFTPQURWDWZMUKVVPHADYSMACEEORMCGUUHEYMYBLRTWRGBZBCOMSZQIQBJXAABSIPZFHJVVETRDDOTJDBFTHPOKCANNYKNXQLWJVLWOOVJHRQOOYCFV");

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
    msg.setTimeStamp(0.16471738513055678);
    msg.setSource(49908U);
    msg.setSourceEntity(230U);
    msg.setDestination(53161U);
    msg.setDestinationEntity(131U);
    msg.name.assign("HOWRTZZMCEWYAVSKPXQHWCWXKHDLJHZOIDJWGSBRKZFAPCEHRIJPDDBXNWZOMKTNPNLCCOUVUGFZSQKMXFBSPTSFLKLQELJZGIWLVDMDKHEYYAIGVNGYDMODNRJEZBVFANKVZYPDRRITTM");

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
    msg.setTimeStamp(0.8057111940468525);
    msg.setSource(7603U);
    msg.setSourceEntity(51U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(217U);
    msg.timeout = 2545478332U;

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
    msg.setTimeStamp(0.9144629725913941);
    msg.setSource(22724U);
    msg.setSourceEntity(225U);
    msg.setDestination(49112U);
    msg.setDestinationEntity(243U);
    msg.timeout = 2861859276U;

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
    msg.setTimeStamp(0.35721849860245813);
    msg.setSource(12994U);
    msg.setSourceEntity(179U);
    msg.setDestination(28687U);
    msg.setDestinationEntity(103U);
    msg.timeout = 3493166417U;

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
    msg.setTimeStamp(0.9475906435086633);
    msg.setSource(11984U);
    msg.setSourceEntity(85U);
    msg.setDestination(38661U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3075989314U;

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
    msg.setTimeStamp(0.34820756633847616);
    msg.setSource(22851U);
    msg.setSourceEntity(4U);
    msg.setDestination(43089U);
    msg.setDestinationEntity(61U);
    msg.sessid = 2752998444U;

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
    msg.setTimeStamp(0.020541379537214688);
    msg.setSource(8247U);
    msg.setSourceEntity(222U);
    msg.setDestination(22783U);
    msg.setDestinationEntity(134U);
    msg.sessid = 2882079756U;

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
    msg.setTimeStamp(0.22714187952401654);
    msg.setSource(13382U);
    msg.setSourceEntity(170U);
    msg.setDestination(33453U);
    msg.setDestinationEntity(224U);
    msg.sessid = 1163124244U;
    msg.messages.assign("DJOTVIKNSZJOZVPLLGLRBJQPIVAHUODYWUQRUSMFGNACSWRPFGQKTSSQTNMEYKIDHG");

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
    msg.setTimeStamp(0.5899940673763762);
    msg.setSource(38244U);
    msg.setSourceEntity(47U);
    msg.setDestination(54278U);
    msg.setDestinationEntity(51U);
    msg.sessid = 56831662U;
    msg.messages.assign("UCKVXDUYFAVYENTLEBUHSMXACUKDBLXGVVHDURZYPTVVJNJWYSNZOONSETUTBYGDONSCZIAANPTQDOJPYANBWOCILOFGNGMKMEWWFHMCGHDVQMIXQRDMAZZZNSRXAWQUFFLYSUWIROUKEPKKJGZTPWLHRTEL");

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
    msg.setTimeStamp(0.3054320853873288);
    msg.setSource(60808U);
    msg.setSourceEntity(92U);
    msg.setDestination(6443U);
    msg.setDestinationEntity(2U);
    msg.sessid = 2984994019U;
    msg.messages.assign("ILNMCYMEHYUSLLHXNDNXBUJRMSHWBCLJFXATOLDGQFFCONLABCXIYOXDAWBVXXONIKQSJZSXQRSNMJTAHCIIDAQBLHNRZHBOVGUHLVIKSUXYCEQEGWWADIRFMSOOAWMQJKUQJTRVOTPGTMDEZEVVKXMVVNGIDYOPKDRRFJLKCTBESRZYAFTPSRGUAKJZETUYPPBHKIGGZTCNRBFYBOZZDWIGAKZCYWZVJMJSLPHF");

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
    msg.setTimeStamp(0.01855112089650557);
    msg.setSource(56036U);
    msg.setSourceEntity(24U);
    msg.setDestination(47448U);
    msg.setDestinationEntity(70U);
    msg.sessid = 2171359905U;

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
    msg.setTimeStamp(0.26018949198853203);
    msg.setSource(30331U);
    msg.setSourceEntity(208U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(140U);
    msg.sessid = 416811529U;

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
    msg.setTimeStamp(0.7341239455722396);
    msg.setSource(39327U);
    msg.setSourceEntity(237U);
    msg.setDestination(33349U);
    msg.setDestinationEntity(132U);
    msg.sessid = 4156093196U;

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
    msg.setTimeStamp(0.0680672240898833);
    msg.setSource(52172U);
    msg.setSourceEntity(78U);
    msg.setDestination(20428U);
    msg.setDestinationEntity(191U);
    msg.sessid = 3133451938U;
    msg.status = 216U;

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
    msg.setTimeStamp(0.02892630890465475);
    msg.setSource(24477U);
    msg.setSourceEntity(26U);
    msg.setDestination(13165U);
    msg.setDestinationEntity(180U);
    msg.sessid = 4100838154U;
    msg.status = 104U;

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
    msg.setTimeStamp(0.09399748146973563);
    msg.setSource(5259U);
    msg.setSourceEntity(73U);
    msg.setDestination(60405U);
    msg.setDestinationEntity(32U);
    msg.sessid = 2491965169U;
    msg.status = 142U;

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
    msg.setTimeStamp(0.8899904253094815);
    msg.setSource(43747U);
    msg.setSourceEntity(22U);
    msg.setDestination(22140U);
    msg.setDestinationEntity(171U);
    msg.name.assign("ZZIDOPFCXRFNTHWNTMSYAHZBMLLHZFUVOQWLXUYQLPXRCAPUBVMEIVAGKSGTSWMIYUEMBRZDQDFHCHYOVAHPGQBDJJBYXFSRAMUWGENELWZQGEXXIGXUZRZ");

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
    msg.setTimeStamp(0.4575676770032562);
    msg.setSource(49086U);
    msg.setSourceEntity(233U);
    msg.setDestination(22766U);
    msg.setDestinationEntity(148U);
    msg.name.assign("RACDMUFTKNVILMXBJRFXWADNYBMOSHUYMXXMWHIXLQLKEICAMGRMQBBYVHEJQDOISVKSJVLGCLPODNBXWC");

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
    msg.setTimeStamp(0.24211205171406502);
    msg.setSource(54520U);
    msg.setSourceEntity(62U);
    msg.setDestination(9820U);
    msg.setDestinationEntity(52U);
    msg.name.assign("QXCTINCUUIYUFKGXJCXKHMMAEPYMFTMGXLBWEKOWEPOKORLZPRANTFRMERLYNTPJCDHJDCQQUSKMVZNHWSTZTMYAGHYVHSVGOVVPUOSBAULNXKHJXPUSBRXOEGMXYVHDBWIEGHLYRACDYPNJHMVPJORKFVLGIBVINBDZDSCDAQDKQGQCSCSAWRFCSLQJJRZFENBFFUTTXUIIWGIPLDYTWZKFJIJAMBDQZEOPWNYQONVUFEBAW");

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
    msg.setTimeStamp(0.11647909194047679);
    msg.setSource(59084U);
    msg.setSourceEntity(240U);
    msg.setDestination(20938U);
    msg.setDestinationEntity(101U);
    msg.name.assign("GBAPGLLXZNJZYURCSQDBUWHAPDUNSVRBQZKPEKRFJT");

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
    msg.setTimeStamp(0.8472272227144029);
    msg.setSource(14449U);
    msg.setSourceEntity(180U);
    msg.setDestination(8518U);
    msg.setDestinationEntity(88U);
    msg.name.assign("RPVIDSGOZQZHRQRNTUVIERFARZXSZJSJAVGWMYLEQPJWUSYXGAVXDJFDKEYRDBIEOPLWGLRJUQCEAMPPFOBODFRNCNMFWTAVWPYLWIGJFBZYKLQEDOCLKYQSNCNJHOIUFJBTXUITDGPCB");

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
    msg.setTimeStamp(0.027700221704033523);
    msg.setSource(46925U);
    msg.setSourceEntity(135U);
    msg.setDestination(22298U);
    msg.setDestinationEntity(192U);
    msg.name.assign("JJLXIMTEWRUWZAOVLLUYPZLVMRBBYLOEAVLNMJGDMQYNPXRPADPJZXPA");

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
    msg.setTimeStamp(0.6882157077607017);
    msg.setSource(16075U);
    msg.setSourceEntity(28U);
    msg.setDestination(42206U);
    msg.setDestinationEntity(152U);
    msg.type = 138U;
    msg.error.assign("BIHAELGTBZQSGWRPJUKHYVKHTKXRRKDLYCFECHRSUTFMBHOPWNONZFUWWXUQVPMEKYNOJSCXBZGILAOQSHJGEHHEWJLUFYFFOMDJQXBOZDLIMXVDNALEMZARVSGCEYRELPAOKAIONFAVGPJGNCDJRKMCAVTBIKMNMLXUIWUIZPIWSXTTVEPUGNZPWHOINMUCBTXXVQSCAWDIKDTYXTZRQRBKGFQMLJSJH");

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
    msg.setTimeStamp(0.662045225739625);
    msg.setSource(62209U);
    msg.setSourceEntity(93U);
    msg.setDestination(42563U);
    msg.setDestinationEntity(61U);
    msg.type = 74U;
    msg.error.assign("XXQEPECIGNRUNBEPFKHXEQJUNVUCSGHIGNVGSSFOYCJARUEBCWLLCJQNXZGVMWZOJBLCVQXVTNXZBJDBKBPFPTUIJVWAUZTSKMCDGHDASSPPYDVHTHBWPWPNKQITSMQRMMHMEQYGIPWMATTFZFRDOQXFOETINRQWJDFVMSXFMCLYDBQYEAOOFHZKJRWOJUTIUDGAYHJYZZRCNYDLVXLOXNLBYZLRKWAISLKYHOIDS");

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
    msg.setTimeStamp(0.9213490487494002);
    msg.setSource(3382U);
    msg.setSourceEntity(85U);
    msg.setDestination(35742U);
    msg.setDestinationEntity(132U);
    msg.type = 147U;
    msg.error.assign("NUFJFGCYKYBUERRYDLXHOXKFHSNBGXWGSTWEWVRPZINMQTKXEOAAKJVYIXSFAEVIYEMVFMCYIZAFPTTSQZAXLLCQNUJXZBVZYZAZXRLSSMJDIORHWBINRCILODLCIKCTNUVLFUDITAJTKQVNULEAWGG");

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
    msg.setTimeStamp(0.07484592859750949);
    msg.setSource(39437U);
    msg.setSourceEntity(40U);
    msg.setDestination(45195U);
    msg.setDestinationEntity(94U);
    msg.seq = 44825U;
    msg.sys_dst.assign("NJTEQIQRMWBTQICJKBTOSBFTOOFFRYJKGSCJKKHNYNRPFZHYGPKCSIXNXDKAUSLNPPTJEHCGCWWVNDNYWFQNLCWJJAEIVTGYPAYAKBVFVEXRHLLOGRKXYSNXMLLZPVBAHQUZMVLJBQULOPAKXMECBQWJVETILLGUDXIWRQ");
    msg.flags = 175U;
    const signed char tmp_msg_0[] = {-59, 122, 2, 88, 125, -63, 4, -126, 95, -123, 124, 103, -60, 121, -14, -20, -11, -1, -83, 38, 116, -48, -49, -17, -43, -32, -58, 69, 30, 92, -38, -23, -121, 26, -18, 78, -110, 46, -33, -88};
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
    msg.setTimeStamp(0.24660103503755337);
    msg.setSource(9019U);
    msg.setSourceEntity(92U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(161U);
    msg.seq = 17982U;
    msg.sys_dst.assign("WNWEYUHHUSUTHOKJJIKGSINOAAGGFTSOSKPATBERPOYRPGKFVNMJTGOQQXSQKECZMRCRVJJOHFHDXFEJBXYQTMUUIEIYLQEWIMZLLBIPMWCNRAPUSNTADULFPKWLRWCIYBAGTBRAYALFZDJKDUZVRDEYMNSFZSXQEQHSIVINF");
    msg.flags = 28U;
    const signed char tmp_msg_0[] = {-82, -30, -102, -19, 46, -19, 80, 113, 90, 97, 118, 49, -46, 80, 42, -108, 89, 45, 31, -42, 2, -122, -122, -113, 58, 15, -96, 85, -70, -43, -8, 77, 113, -26, 28, -11, -83};
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
    msg.setTimeStamp(0.17505413071595655);
    msg.setSource(39446U);
    msg.setSourceEntity(74U);
    msg.setDestination(15167U);
    msg.setDestinationEntity(175U);
    msg.seq = 47208U;
    msg.sys_dst.assign("TZHXJMINVFILMAUEFFEAMOWQSWLDPXCKDSBHRGPCWZYTDICAYKDXRKIMZBDHJJSEJPWHMBNWOEVPMKSBKULJCGSCYMVDNPMHROVGWJQGNSYTGUTAKYZRNHQXFZJVTJQCWNYBARC");
    msg.flags = 68U;
    const signed char tmp_msg_0[] = {6, -63, -37, -81, -92, 99, -61, 69, -2, -50, -109, 89, 62, 116, -75, -126, -16, 81, 33, -2, -120, 10, -120, -22, 105, 9, -51, -110, -55, 54, 58, 70, -69, 117, -119, -26, -105, -104, -2, -58, -5, 37, -47, -73, -6, 31, -20, -114, 63, -18, -28, -55, 110, 102, 90, -20, 84, -97, -3, 73, 115, -100, -44, -40, 32, 98, 15, -56, -27, -62, -31, 118, 48, -119, -125, -93, -68, -57, -96, 79, 38, 68, 88, 73, 101, 78, -90, 19, -120, -1, -96, -19, 91, -33, -86, 4, 90, 2, -122, -113, -96, 62, 5, 9, -69, 16, 12, 81, -31, -30, -87, -119, 24, 31, 2, 14, -93, 86, -78, -32, -37, -49, 20, -41, 22, -42, 108, 55, 1, -104, -9, 118, -97, 46, 64, 15, -21, -105, -103, -52, 81, -25, -101, -1, -84, 87, 25, 66, -13, 20, -40, -52, 67, 86};
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
    msg.setTimeStamp(0.9995140207019302);
    msg.setSource(18411U);
    msg.setSourceEntity(39U);
    msg.setDestination(47441U);
    msg.setDestinationEntity(40U);
    msg.sys_src.assign("WKATUUIYLRGJQBUPYZDNTLDQSALBRPTCUN");
    msg.sys_dst.assign("CNEIDRKFIDBOTSUNZRXPKBBPZ");
    msg.flags = 21U;
    const signed char tmp_msg_0[] = {20, 46, 19, 62, 13, 16, -118, -119, -116, -88, -50, -91, -50, -73, 89, -66, 50, 112, -31, -66, -87, 4, 52, -21, 77, 24, -41, 29, -39};
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
    msg.setTimeStamp(0.8029950119032521);
    msg.setSource(25974U);
    msg.setSourceEntity(194U);
    msg.setDestination(43817U);
    msg.setDestinationEntity(218U);
    msg.sys_src.assign("TTHTODTMFEEARQXFPVPZQIGMJGTMWPAVRYLTKCSGKHKXNGWGJUMNWFQRZOABRKFVWSQRXVUIGJFRCYIVBDLQZVVAIQMYXXDZFOBWBLZSOMRYNHPIUOHULTPJXAQUNCCCUPAHTCOMSUUJNZQESTWEYSNSWNLXJZBKSWNAPVGSIMJIMDDJNBAVFYXXKHEENFYGYYFBUEOLMDPOLL");
    msg.sys_dst.assign("LPWXOUBJKTVOADFUKMEBQEJAYPAZOQLMHARWHOYERZYUGLMQNZLATCATAWKSDLDCMPVYCYRWGJIICPPVV");
    msg.flags = 0U;
    const signed char tmp_msg_0[] = {66, 8, -97, 67, 35, -64, 44, 89, -14, 57, 120, -82, -43, 75, 56, -60, 40, 70, -10, -93, -85, -64, -124, 53, 105, 73, -5, 124, 81, 4, 8, -10, -21, -30, 101, -20, 54, -47, -53, 0, 41, 124, -121, -113, 107, 42, 43, 40, 88, 114, -117, 117, 34, -20, -76, 93, 76, 72, -6, 85, 71, -118, 75, -115, -31, -28, -62, 9, 63, 60, 87, -22, -8, 5, -48, 43, -11, 105, 81, 35, 50, 39, -25, 103, -98, 22, -87, 28, 35, 92, -55, -46, 22, -19, 72, -99, 67, 117, 26, 70, -84, -6, -74, 13, 64, -59, -108, 52, 114, -35, -80, 40, -15, -10, 37, -60, -13, 67, 10, 55, 122, 30, 80, -95, 90, 98, 16, 81, -43, -101, -71, 126, -30, -38};
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
    msg.setTimeStamp(0.27003216263875063);
    msg.setSource(16666U);
    msg.setSourceEntity(188U);
    msg.setDestination(39888U);
    msg.setDestinationEntity(72U);
    msg.sys_src.assign("GNQBBNXEGVRPMFFUEGUYOMQTTUPWRSBBCIQKRALLZQWJEYGHCXCQUVTNSJSXJHHAJYGVKFCHKKOUBOLVOUQJIKAXMVUIMRMPYQAFZZSSIDDPXTGNFGZCQSDTKLNMJLVKSRYHINDBTVORVZHRDMUDGZOJMNPTPCFKOBHWEQZPAIETLSEYCAMCYWKDALWXBTXCRJDLRHBWAVLAUFVQYPOFESEWUO");
    msg.sys_dst.assign("HBHDISLZKOPUPONWUHUWMFRYDACIVGBITWKLJZJFUYTKDDEGSZOWIEUTTYGBKKIKPSONEEEWJHQOANRXBATOYSKNYDCXWAFGYKIGHBQXXRMBQCEWFPMHQXAVAZLTSGVUOFMFYZCPTIQZQOCNQMAXJVMEUCUXVXVWMMNLFJRRSGCIEDTRVOJRIRJCNBSAPUFYHXHQTNZMVSDBRKSVWJDKGZPLQBVIPYAFFLASHPWZNEGCBUOXEZDQRPTYCJH");
    msg.flags = 59U;
    const signed char tmp_msg_0[] = {110, 41, -41, 81, -33, -90, -105, 71, 95, 35, 112, -88, -106, 4, -29, 100, 1, 65, -42, -52, 2, 115, 18, 78, -10, -82, 87, 66, 51, 98, 41, 36, 45, -109, -72, 51, -5, 121, 34, -125, 30, 114, -120, -93, 88, -49, 122, -110, -12, -3, 76, -105, 106, -58, -116, 4, 55, 108, 0, -77, -62, 48, 126, -33, 90, 88, -94, 4, -50, -71, -47, -12, 107, 31, 16, -78, -71, -103, -125, -124, -63, -102, 11, -36, 60, 72, -45, -115, 19, -15, 56, -9, -78, -21, -74, -61, 49, 44, 106, -114, 124, -48, 82, -53, 1, -20, 27, -125};
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
    msg.setTimeStamp(0.9930202351912163);
    msg.setSource(28758U);
    msg.setSourceEntity(102U);
    msg.setDestination(33006U);
    msg.setDestinationEntity(254U);
    msg.seq = 58011U;
    msg.value = 157U;
    msg.error.assign("REUWRTTHBTSRIRLRNASEVOGXYNHHZTYNDRXAHCDLDLQLGSBOBJQDBLIDJWCBMKZZDVYXUSWKPEPJMTQUJXTPKWWVXZUTMVAAHCFRAMKOLGBHTQCPIUSKCQDWMMFPXEYAKNHBEBPHOMKUBFINFUTGEISNVTQFLCOOQWPROOXZAKGVPSJCLGDZRKVSLEFSYGUKYEZRULPQXYFZNJMZYCGAAGQJINYHFDFWOGOIEZISVJXYNHVIDNEAUWMVQCBPJ");

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
    msg.setTimeStamp(0.3625579587075012);
    msg.setSource(33430U);
    msg.setSourceEntity(173U);
    msg.setDestination(60766U);
    msg.setDestinationEntity(180U);
    msg.seq = 18094U;
    msg.value = 17U;
    msg.error.assign("CAIQPKWHTMGNACBLOUITIOXCXGRRDVJYVZYZAKOSJOHHSYLQBCTJAFRAVAIAXVRXZYBKIDSNKUFKWTRBEOMSOULHPIRJMXUZPYYWNQDEMMLDYGQJCKJZHRCWSCWIQONPGXBDEWPFNJFAHUDPSYCBHZJTFMTILBKEOQGUBUGEKVSUUPGOENGXWRYQSOSZKEAVQRWHLDDHZGVINEDVVMWJLFETDPFXRXWBLMJTPFKNIFFXNHLYAPGVQL");

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
    msg.setTimeStamp(0.811592722776117);
    msg.setSource(34606U);
    msg.setSourceEntity(10U);
    msg.setDestination(31408U);
    msg.setDestinationEntity(169U);
    msg.seq = 10861U;
    msg.value = 59U;
    msg.error.assign("QSBGIYFTNZMVQERHFULFMMMDXXTAULKRSDUOIWNVDXLNJNSSIYZBNOAZVSGEIPGYJQOVZBUDHJTRVSGSJFREAICATJADUPZPWOFKSTMXBQQIGTCWDCXEMNLQDCVCIMJWMTGWSYRMFYRPKCTP");

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
    msg.setTimeStamp(0.24142855987592016);
    msg.setSource(20765U);
    msg.setSourceEntity(176U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(221U);
    msg.seq = 36546U;
    msg.sys.assign("UUFINQZQEYHHBMHIRXYPLMYQTIZEDNVROEQEHJGECTRSTJHGZWEQSAELSELWUEFOGJSCQTAUTDCLWXWYYIBFPYUDIAKGPDMKTDVJNIUBMOPNAAGRNDGCIVHBFLKSVDBRTXVWSKZIMALYZGJFQOPAXPHXGSVNOQFPMPOBJUMZTARNVPAYURC");
    msg.value = 0.8989761666060541;

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
    msg.setTimeStamp(0.8370016539194799);
    msg.setSource(49996U);
    msg.setSourceEntity(225U);
    msg.setDestination(4407U);
    msg.setDestinationEntity(236U);
    msg.seq = 9922U;
    msg.sys.assign("PVYICJXVIOJKBLYHYZSSALQGEXTBPJVDGDEBPVETDNUURBGLDVLOFJSWZPOUALWYGGEEPXSHWZNTVKDEIIYAXXOQOSKLGTWZQDLAZRABZKAUPMIQZZFFJMSQR");
    msg.value = 0.7609427632809664;

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
    msg.setTimeStamp(0.37874248176511505);
    msg.setSource(48750U);
    msg.setSourceEntity(20U);
    msg.setDestination(35295U);
    msg.setDestinationEntity(113U);
    msg.seq = 16947U;
    msg.sys.assign("EVWUKOGWJGFBKSQTOIBRDOHZMDXYPBMJPTNRJQUCXFRSVVFZDSCKNMKVSCYRSDWNPRAMGBDHUZQTYDHEEJIBWPMAEFMLJFWYTNLGDINUWMOLBWAQVSOHZXWX");
    msg.value = 0.6219950372003561;

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
    msg.setTimeStamp(0.7305571107057999);
    msg.setSource(3792U);
    msg.setSourceEntity(218U);
    msg.setDestination(57377U);
    msg.setDestinationEntity(49U);
    msg.seq = 9387U;
    msg.sys_dst.assign("APLQJKPRQIMAQXGBDZCUWQEYCRHEIJOIEFINUAAZTQZLNSGJVEMBPTCBGBZDDQWQCPEITOSHRTOUXXYTNJLPUCHGOOEFZGLVYMBVUPAOZWGDMOJKJIQTWLDFKWHEPG");
    msg.timeout = 0.42883652635798597;

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
    msg.setTimeStamp(0.975356564933785);
    msg.setSource(32833U);
    msg.setSourceEntity(109U);
    msg.setDestination(64941U);
    msg.setDestinationEntity(214U);
    msg.seq = 48530U;
    msg.sys_dst.assign("CTRGKEFFOXFSWVLWDAQRSQIODMMGGJCBL");
    msg.timeout = 0.6936791891342873;

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
    msg.setTimeStamp(0.5953189444287817);
    msg.setSource(5450U);
    msg.setSourceEntity(254U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(197U);
    msg.seq = 48494U;
    msg.sys_dst.assign("XSMHCAFMMVGYKIFGILDEYGDTSPKMIWYGBEULQCPAJSMBHADSTPTIZLREEYRNRLEYJBDGQAKINOGXICXANFOJEAXURJHVZRZPJEXKYPVFCRBROSAVFOHUGMMDKXWORCVWZGXRZZQJLLVCNCWKVPOMIQOZBIBEQUITPUCSYVTSTVEQWBNPNQHZUBQYHHLRKOBIXUOCFDFSUZWTJWBHDWWMFOUDPJTQLDXKTKAEPDXUCYZNGK");
    msg.timeout = 0.5007624314374858;

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
    msg.setTimeStamp(0.5111425530028981);
    msg.setSource(6305U);
    msg.setSourceEntity(167U);
    msg.setDestination(4473U);
    msg.setDestinationEntity(126U);
    msg.action = 189U;
    msg.longain = 0.3141281811946157;
    msg.latgain = 0.5135473185171295;
    msg.bondthick = 1758526223U;
    msg.leadgain = 0.9277006747855419;
    msg.deconflgain = 0.9471587046484126;

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
    msg.setTimeStamp(0.4367306210642249);
    msg.setSource(56881U);
    msg.setSourceEntity(173U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(104U);
    msg.action = 119U;
    msg.longain = 0.6137071126802746;
    msg.latgain = 0.7381557249600593;
    msg.bondthick = 1564941736U;
    msg.leadgain = 0.7094403070624133;
    msg.deconflgain = 0.016938786593296173;

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
    msg.setTimeStamp(0.9835184254405002);
    msg.setSource(18460U);
    msg.setSourceEntity(228U);
    msg.setDestination(22140U);
    msg.setDestinationEntity(20U);
    msg.action = 43U;
    msg.longain = 0.05883499717536267;
    msg.latgain = 0.6554371467432926;
    msg.bondthick = 1753140932U;
    msg.leadgain = 0.6157765813532292;
    msg.deconflgain = 0.9314570797499633;

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
    msg.setTimeStamp(0.23921229661398036);
    msg.setSource(19460U);
    msg.setSourceEntity(207U);
    msg.setDestination(44937U);
    msg.setDestinationEntity(2U);
    msg.err_mean = 0.2730163529645767;
    msg.dist_min_abs = 0.6555385717390837;
    msg.dist_min_mean = 0.17553826904222336;

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
    msg.setTimeStamp(0.9275599300390834);
    msg.setSource(19706U);
    msg.setSourceEntity(43U);
    msg.setDestination(7976U);
    msg.setDestinationEntity(204U);
    msg.err_mean = 0.7581557420688053;
    msg.dist_min_abs = 0.4827429311715872;
    msg.dist_min_mean = 0.6005919441199397;

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
    msg.setTimeStamp(0.6920394443978887);
    msg.setSource(25630U);
    msg.setSourceEntity(55U);
    msg.setDestination(2171U);
    msg.setDestinationEntity(44U);
    msg.err_mean = 0.6213366942684643;
    msg.dist_min_abs = 0.8813457367661623;
    msg.dist_min_mean = 0.5444751737185104;

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
    msg.setTimeStamp(0.35944084448338043);
    msg.setSource(51071U);
    msg.setSourceEntity(58U);
    msg.setDestination(55912U);
    msg.setDestinationEntity(195U);
    msg.action = 160U;
    msg.lon_gain = 0.03664461733620472;
    msg.lat_gain = 0.2208501274060738;
    msg.bond_thick = 0.6184623782067036;
    msg.lead_gain = 0.8411574376765216;
    msg.deconfl_gain = 0.7405271642203399;
    msg.accel_switch_gain = 0.05450389862293714;
    msg.safe_dist = 0.3337811651002176;
    msg.deconflict_offset = 0.6880135869347098;
    msg.accel_safe_margin = 0.23808013728980126;
    msg.accel_lim_x = 0.009006070847640824;

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
    msg.setTimeStamp(0.9191285627867202);
    msg.setSource(62911U);
    msg.setSourceEntity(213U);
    msg.setDestination(57121U);
    msg.setDestinationEntity(1U);
    msg.action = 143U;
    msg.lon_gain = 0.1196467905583507;
    msg.lat_gain = 0.6425085492715715;
    msg.bond_thick = 0.8782050652748834;
    msg.lead_gain = 0.2136500961691753;
    msg.deconfl_gain = 0.8744668617207862;
    msg.accel_switch_gain = 0.3559559852595937;
    msg.safe_dist = 0.9089710831485442;
    msg.deconflict_offset = 0.1750917554088146;
    msg.accel_safe_margin = 0.49603740142257857;
    msg.accel_lim_x = 0.045428899269207346;

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
    msg.setTimeStamp(0.3803516377185865);
    msg.setSource(2309U);
    msg.setSourceEntity(139U);
    msg.setDestination(12986U);
    msg.setDestinationEntity(142U);
    msg.action = 254U;
    msg.lon_gain = 0.899624323277422;
    msg.lat_gain = 0.6275896127416298;
    msg.bond_thick = 0.3141004752896829;
    msg.lead_gain = 0.9525918621092211;
    msg.deconfl_gain = 0.7034910429116559;
    msg.accel_switch_gain = 0.5762350958499867;
    msg.safe_dist = 0.1729541409325256;
    msg.deconflict_offset = 0.9832376492811462;
    msg.accel_safe_margin = 0.6499287282387697;
    msg.accel_lim_x = 0.11004530532958245;

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
    msg.setTimeStamp(0.7530041793588742);
    msg.setSource(24325U);
    msg.setSourceEntity(0U);
    msg.setDestination(12283U);
    msg.setDestinationEntity(8U);
    msg.type = 57U;
    msg.op = 176U;
    msg.err_mean = 0.5551113510744203;
    msg.dist_min_abs = 0.07752122228156544;
    msg.dist_min_mean = 0.6231265574487039;
    msg.roll_rate_mean = 0.573338613598323;
    msg.time = 0.09810642420894289;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.02690042931886727;
    tmp_msg_0.lat_gain = 0.5553373907205034;
    tmp_msg_0.bond_thick = 0.49114292777283;
    tmp_msg_0.lead_gain = 0.020429332641251685;
    tmp_msg_0.deconfl_gain = 0.6018089866043254;
    tmp_msg_0.accel_switch_gain = 0.5948450655019034;
    tmp_msg_0.safe_dist = 0.7064131604647285;
    tmp_msg_0.deconflict_offset = 0.025527782953073674;
    tmp_msg_0.accel_safe_margin = 0.5410722323037511;
    tmp_msg_0.accel_lim_x = 0.6123686504688154;
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
    msg.setTimeStamp(0.602408465606719);
    msg.setSource(17103U);
    msg.setSourceEntity(23U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(81U);
    msg.type = 180U;
    msg.op = 152U;
    msg.err_mean = 0.3310676767162849;
    msg.dist_min_abs = 0.7818246334921051;
    msg.dist_min_mean = 0.6216228769750716;
    msg.roll_rate_mean = 0.9517173604176372;
    msg.time = 0.5107978285465116;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 92U;
    tmp_msg_0.lon_gain = 0.4755627161842776;
    tmp_msg_0.lat_gain = 0.43201456834422924;
    tmp_msg_0.bond_thick = 0.8749870596031982;
    tmp_msg_0.lead_gain = 0.723172876855405;
    tmp_msg_0.deconfl_gain = 0.43086660485343686;
    tmp_msg_0.accel_switch_gain = 0.9979277031380482;
    tmp_msg_0.safe_dist = 0.5824319501873895;
    tmp_msg_0.deconflict_offset = 0.1487378487542107;
    tmp_msg_0.accel_safe_margin = 0.8472018449492995;
    tmp_msg_0.accel_lim_x = 0.8221088142311557;
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
    msg.setTimeStamp(0.5418548158719475);
    msg.setSource(15009U);
    msg.setSourceEntity(113U);
    msg.setDestination(62582U);
    msg.setDestinationEntity(116U);
    msg.type = 165U;
    msg.op = 192U;
    msg.err_mean = 0.5575260564668111;
    msg.dist_min_abs = 0.5309229224021624;
    msg.dist_min_mean = 0.7960800418636268;
    msg.roll_rate_mean = 0.9201296850729379;
    msg.time = 0.4484212196020212;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 226U;
    tmp_msg_0.lon_gain = 0.47574227169797534;
    tmp_msg_0.lat_gain = 0.6440938290576452;
    tmp_msg_0.bond_thick = 0.8241784226331159;
    tmp_msg_0.lead_gain = 0.4746217046889005;
    tmp_msg_0.deconfl_gain = 0.3270074809939729;
    tmp_msg_0.accel_switch_gain = 0.37978301728510444;
    tmp_msg_0.safe_dist = 0.16344662420507827;
    tmp_msg_0.deconflict_offset = 0.6072623561501463;
    tmp_msg_0.accel_safe_margin = 0.7880886243802285;
    tmp_msg_0.accel_lim_x = 0.34797872863417934;
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
    msg.setTimeStamp(0.3509274696556287);
    msg.setSource(56411U);
    msg.setSourceEntity(204U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.19904689643900852;
    msg.lon = 0.3724858662007354;
    msg.eta = 2580338001U;
    msg.duration = 56997U;

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
    msg.setTimeStamp(0.17142291586249658);
    msg.setSource(13916U);
    msg.setSourceEntity(44U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.5834363247924543;
    msg.lon = 0.540783783743883;
    msg.eta = 2347374862U;
    msg.duration = 56848U;

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
    msg.setTimeStamp(0.5921216153607499);
    msg.setSource(33882U);
    msg.setSourceEntity(51U);
    msg.setDestination(64234U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.3816545164186753;
    msg.lon = 0.963541657591105;
    msg.eta = 4134873625U;
    msg.duration = 60905U;

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
    msg.setTimeStamp(0.914340957647274);
    msg.setSource(51652U);
    msg.setSourceEntity(114U);
    msg.setDestination(15513U);
    msg.setDestinationEntity(242U);
    msg.plan_id = 13640U;

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
    msg.setTimeStamp(0.9734166984508598);
    msg.setSource(60909U);
    msg.setSourceEntity(156U);
    msg.setDestination(64085U);
    msg.setDestinationEntity(55U);
    msg.plan_id = 12197U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4670432765842889;
    tmp_msg_0.lon = 0.8956660807013864;
    tmp_msg_0.eta = 3686163628U;
    tmp_msg_0.duration = 28377U;
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
    msg.setTimeStamp(0.6115362558805096);
    msg.setSource(30441U);
    msg.setSourceEntity(135U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(178U);
    msg.plan_id = 31042U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9269379803214454;
    tmp_msg_0.lon = 0.6172874563729331;
    tmp_msg_0.eta = 1988427081U;
    tmp_msg_0.duration = 64846U;
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
    msg.setTimeStamp(0.12489546103187477);
    msg.setSource(14426U);
    msg.setSourceEntity(41U);
    msg.setDestination(50634U);
    msg.setDestinationEntity(181U);
    msg.type = 168U;
    msg.command = 214U;
    msg.settings.assign("FPUCBQOFRVSARNALJTIZSOBLMBPOUIFFKIRNLWR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23425U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.09473863020359274;
    tmp_tmp_msg_0_0.lon = 0.5666262785951075;
    tmp_tmp_msg_0_0.eta = 2557432226U;
    tmp_tmp_msg_0_0.duration = 55320U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AIGTBOLNPFWTSHSGCBGFMVYECHZQXTEDFRMRZZIIXINVDKFIBUPWSYZDYIYAVNYXFRFJPKNHHOETMYMSFZNLUAFHMFKWAAGSLTJAVPDVLWCHPCXVDADPMSPVBDDZMJGHJNYDPSBBSCIRKABYGUQMQQWELTRDOEWUCQWCJSXMELIKZYWJTFKJKHLYOLBJTNXRCPIRHSEUGNEOUXKQWZEBVXU");

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
    msg.setTimeStamp(0.17262714944705482);
    msg.setSource(48811U);
    msg.setSourceEntity(7U);
    msg.setDestination(59162U);
    msg.setDestinationEntity(72U);
    msg.type = 23U;
    msg.command = 55U;
    msg.settings.assign("RCYLSKTSGLMGAAPGPUKHSBJQBEOOXVZLEIJEIONRZBJGCPIYLTUZXRYSTZFYVSAJZZWXWUELMMJDVXLUPFTMOVROBCOHIOBXHQMUCHNGQGSIRZBIXSOAFWKLVSGCAYPRMHICHAWQRNBNEFTNQVLAFVDJMIORDTEBWQHQPDJAPZTJKUWTUVMAMUNFLZETPHXKYFFCFTSYQNUPRSFGKEKYZRGBVHINWCDYV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36312U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.10965259319513898;
    tmp_tmp_msg_0_0.lon = 0.5073063458671169;
    tmp_tmp_msg_0_0.eta = 341730148U;
    tmp_tmp_msg_0_0.duration = 10688U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KOUFGQBRCWTEMQBAFAEYIEPYDLAVTVTDK");

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
    msg.setTimeStamp(0.9354285597323069);
    msg.setSource(63897U);
    msg.setSourceEntity(27U);
    msg.setDestination(29337U);
    msg.setDestinationEntity(226U);
    msg.type = 148U;
    msg.command = 136U;
    msg.settings.assign("NVJXKUNWKSPTZOVQTNSPEQRUTOBEJEVGNUYFMEEDWNKVZEOCPIDAQCJAQBHUBBUIYVHYLWYJJDDIDTNCCOUWGCHETGVKVZATGGWZGSXLYIEGFDQRZKZBLWSCUBTHV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23035U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KZSWOOXPBICURTQZPDNEWNYUHZCRNDJJRUWIKYYZAGHKZBIUNKTMLLWSBQDFCUNHJVSFMBHDRLDRMEVQVIHAYEGNTGCJWERZUPZHOUTLIMCDZLJPSRQXCMQFQWHEXWOFGTMDXMBNNQEZUBOJILLBQDVJXCFFYGVWBAWPGNXILZTRDYKXMYPPXSVALPS");

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
    msg.setTimeStamp(0.6100421714822243);
    msg.setSource(56990U);
    msg.setSourceEntity(30U);
    msg.setDestination(54084U);
    msg.setDestinationEntity(87U);
    msg.state = 44U;
    msg.plan_id = 45316U;
    msg.wpt_id = 229U;
    msg.settings_chk = 20047U;

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
    msg.setTimeStamp(0.21508756054999179);
    msg.setSource(22633U);
    msg.setSourceEntity(42U);
    msg.setDestination(17797U);
    msg.setDestinationEntity(46U);
    msg.state = 63U;
    msg.plan_id = 54820U;
    msg.wpt_id = 119U;
    msg.settings_chk = 51079U;

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
    msg.setTimeStamp(0.44019782612829184);
    msg.setSource(53133U);
    msg.setSourceEntity(125U);
    msg.setDestination(44298U);
    msg.setDestinationEntity(176U);
    msg.state = 50U;
    msg.plan_id = 19030U;
    msg.wpt_id = 244U;
    msg.settings_chk = 53002U;

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
    msg.setTimeStamp(0.44068534610747656);
    msg.setSource(7834U);
    msg.setSourceEntity(183U);
    msg.setDestination(3190U);
    msg.setDestinationEntity(121U);
    msg.uid = 253U;
    msg.frag_number = 50U;
    msg.num_frags = 136U;
    const signed char tmp_msg_0[] = {-38, -84, 71, 84, -82, 81, -46, 93, 79, 43, -28, -85, 125, 52, -110, 38, 39, 94, 102, 119, 7, -63, 48, 56, 32, 71, -104, -109, -11, 24, 103, -63, 16, 47, -59, 48, -25, -67, -59, 111, 82, 118, 47, 95, -79, -26, 54, -42, 57, 20, -14, 36, -78, -29, 107, -124, 16, -4, -32, 87, 45, -111, 126, -104, 89, 24, -53, -3, 36, -72, 36, -107, -67, 92, -126, 95, -17, 73, 113, 37, -33, 77, -51, 49, 64, 77, 87, -75, -57, -20, 40, 22, -114, -1, -64, 83, 29, 115, -125, 112, -122, -31, 42, 41, 14, 31, 45, 16, 85, -126, 23, -127, -127, -63, -101, -29, 32, 16, -120, -47, -82, -36, -88, 91, -28, -109, -66, -84, -6, -17, -2, 71, 46, -61, -19, 46, 38, -47, 13, 3, -42, -72, 89, -100, 15, 5, -7, 18, -114, 70, 32, -122, -12, 120, 126, 5, -38, -125, 85, 101, -46, -97, -100, 45, -21, 119, -110, 47, 74, 69, -17, -64, -16, -60, 90, -42, 6, -66, -33, 31, -66, -50, 3, 72, -87, -60, 45, -10, -85, 29, 88, 117, 78, 122, 18, 36, 92, 67, -64, 95, -116, 60, 46, 2, 26, -127, 18, 91, -43};
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
    msg.setTimeStamp(0.5966719840960851);
    msg.setSource(54133U);
    msg.setSourceEntity(163U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(172U);
    msg.uid = 184U;
    msg.frag_number = 159U;
    msg.num_frags = 252U;
    const signed char tmp_msg_0[] = {-4, -3, 125, 66, -113, 97, -109, 61, 85, -96, 35, 4, -108, 107, -45, -97, 27, -94, -5, -103, 6, -32, -31, -110, 45, 116, -61, 28, -102, 79, 56, -96, -89, 50, -42, -44, 123, 101, -125, 31, 61, 106, 22, -65, 97};
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
    msg.setTimeStamp(0.6193950939163019);
    msg.setSource(40842U);
    msg.setSourceEntity(71U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(19U);
    msg.uid = 62U;
    msg.frag_number = 79U;
    msg.num_frags = 83U;
    const signed char tmp_msg_0[] = {-43, -115, -106, -73, -60, 19, -71, -89, 125, -20, 101, -94, 49, -71, 86, -78, -106, -121, -100, -96, -6, 48, -20, -120, 62, -49, -44, -116, 114, 9, 65, 75, -115, -72, 21, 0, -18, -18, 79, -7, -126, 109, 101, 117, 121, -61, -11, -8, 31, -52, -49, 5, -85, 120, 11, 119, -96, -19, -41, 0, -76, -72, -3, -66, 13, -103, 70, -97, -115, 34, -21, -120, -16, 77, 41, -3, 104, -121, -51, -66, 100, 44, 44, 56, -51, -114, 16, 76, 113, 61, 65, -22, 119, 6, 44, -71, 100, -33, 12, 22, -128, 47, -127, 88, -42, 1, -20, -57, -74, 57, 116, 22, 113, 54, -116, -81, -83, -74, 69, -96, -46, 90, -79, -22, -101, 91, -115, -120, -75, 46, -78, -111, 5, -29, 3, -31, 40, 20, 44, -7, -123, -68, -91, -22, -44, 82, 65, 77, -26, 83, 125, -66, -14, 0, 121, -57, 76, 68, -109, -59, 66, 61, -46, -92, 42, -69, 68, -107, 101, -32, -40, -87, 54, 121, -2, -11, 69, -2, -107, 108, 60, 85, -36, 31, 109, 9, -13, -80, -35, -119, 61, 61, -96, 63, -74, 52, -26, -112, 64, 63};
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
    msg.setTimeStamp(0.7656337532510984);
    msg.setSource(31341U);
    msg.setSourceEntity(57U);
    msg.setDestination(2584U);
    msg.setDestinationEntity(232U);
    msg.content_type.assign("CUMADQHEDPTQAFGURHUGHALXFXNEUKSOOBQOKGMJKZRSINGXMOIPLQSHJWDNDKVFSAVGXTFAPRTFWZZTBWUJWVIIGODUSUDQYWXBCDXMZYAAYIGNSHKQRGKEXSNBONUDTZXJRAEELTIBQKIHHWMLWLVOZWKMTNLZNLBPIOBJMNYVJZKQZTXLVPRWFLVREMSEFCTCYDADCNPWITBHVYCMJPRMCBRGGPSECJYKUEYQJROFVPC");
    const signed char tmp_msg_0[] = {-97, -25, -29, 114, 43, -76, -95, -34, -91, -47, 88, -3, 29, 46, 6, 111, 98, 83, 77, 120, -53, 119, 100, 68, -120, 1, 10, 92, 120, -69, 125, 99, 111, -49, -91, 14, -53, -48, 4, -34, -80, -44, 107, -46, -105, -56, 73, 13, -112, -3, -110, 69, -89, -10, -30, -121, -128, 56, 20, -16, 106, -43, -79, 37, -95, 51, 89, -116, 6, 47, -53, 20, 83, 101, 80, -126, -110, -32, -119, 36, 45, -1, 74, 122, -20, -89, 19, 10, 15, 113, 3, -82, -105, -26, 27, -115, -87, -41, -85, -105, 115, -18, 66, 69, -23, -98, 13, 108, 11, -59, -106, -25, -123, 33};
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
    msg.setTimeStamp(0.38836179132336734);
    msg.setSource(63164U);
    msg.setSourceEntity(198U);
    msg.setDestination(40790U);
    msg.setDestinationEntity(232U);
    msg.content_type.assign("BAMGHEGKBMWSBYRSFXWNKSDTHMSTGBOCLVIYRGLXPFETNWJONEODZXQTDDNDUZHNJROGUROYOXTHHJQMUDVJIPYY");
    const signed char tmp_msg_0[] = {-50, -105, -60, -111, 60, 7, 94, 75, -100, 2, -3, 5, -116, 105, 20, -115, 122, 34, -127, -67, 105, 21, -115, 36, -124, -40, 48, 65, -100, 58, 19, 10, 43, 101, -46, -44, -42, 94, 126, -62, 16, -29, -36, -17, 125, 120, -79, -86, -20, 105, -106, 18, -20, 121, -54, -30, -13, 39, -98, -32, 53, -89, -121, -19, -74, -48, 29, 101, 68, -125, -39, -59, 122, -76, 54, -7, 49, -75, -28, 47, 1, 118, 17, -63, -72, 79, 35, 24, -77, 69, 31, -43, -49, -97, -67, 35, -13, 85, -77, 85, 101, 61, -2, -12, -47, -95, 57, -49, -7, -20, 113, -14, 7, 43, -66, 21, 53, -126, -49, -110};
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
    msg.setTimeStamp(0.7816011457541971);
    msg.setSource(64723U);
    msg.setSourceEntity(170U);
    msg.setDestination(15148U);
    msg.setDestinationEntity(145U);
    msg.content_type.assign("UXWGMISOBFTLGIJJJEXFYOBGXFPXBRLVPGGRKWXRDESPKUTPZNUPOLJGVREUNNWKSZZUMFVEQUQNQRRUQNHCDKRLSFZVODFYVHTYWDPGZMVWCIWRAEBCIIAYHMBZZHVNJTXMIKYLTSDIONNHDQOPLEIMCUUXGFTA");
    const signed char tmp_msg_0[] = {44, 77, -40, 1, -121, -98, 111, -63, 58, -60, 75, 43, 19, -114, 26, 32, 118, 90, 111, 96, -119, -40, -107, -17, -21, -56, 59, -8, 4, -24, -78, 56, -82, 19, -62, 123, 118, 17, -41, -52, 111, -51, -60, -42, -46, 98, 85, -124, -100, -127, -56, 50, -88, -15, 111, 125, -14, -123, -75, 101, 70, 57, 77, 22, -37, -69, 14, -59, -63, -37, 29, 8, -47, -43, 15, 80, 8, 82, -102, -22, -57, -116, -57, 55, 9, -63, -10, 32, -109, 66, -54, -41, 120, -58, -125, 11, -104, 47, 107, 67, -74, -104, 20, -97, 118, -63, -63, -31, 52, -83, -21, 46, -73, -26, -27, -68, 91, -71, -37, -5, 105, -41, -109, -124, -55, -24, 56, 76, -102, -69, 75, -10, 103, -116, -110, -113, -109, 19, -98, 36, -77, 93, 103, 77, 50, 18, 91, -47, -99, 57, 124, 8, 23, -80, 123, 81, -118, 4, 110, -36, -3, 115, -44, -25, -108, -106, 36, -49, -52, 72, -88, 61, -1, -19, 113, -38, -52, -70, 22, 82, -5, 100, -65, -17, -101, 5, -41, 51, -22, -69};
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
    msg.setTimeStamp(0.10615030880650644);
    msg.setSource(14571U);
    msg.setSourceEntity(40U);
    msg.setDestination(15412U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.3804573426667588);
    msg.setSource(16020U);
    msg.setSourceEntity(61U);
    msg.setDestination(7675U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.6635118937028749);
    msg.setSource(49563U);
    msg.setSourceEntity(47U);
    msg.setDestination(50883U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.4061871209924538);
    msg.setSource(54644U);
    msg.setSourceEntity(52U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(103U);
    msg.target = 60682U;
    msg.bearing = 0.024960904019452057;
    msg.elevation = 0.018295266160471613;

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
    msg.setTimeStamp(0.08057206863109856);
    msg.setSource(48755U);
    msg.setSourceEntity(66U);
    msg.setDestination(43282U);
    msg.setDestinationEntity(192U);
    msg.target = 48049U;
    msg.bearing = 0.20602239656098043;
    msg.elevation = 0.4482838819166599;

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
    msg.setTimeStamp(0.3003006527310119);
    msg.setSource(3453U);
    msg.setSourceEntity(119U);
    msg.setDestination(29575U);
    msg.setDestinationEntity(51U);
    msg.target = 34663U;
    msg.bearing = 0.6653456828322575;
    msg.elevation = 0.23987959054661445;

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
    msg.setTimeStamp(0.40468755062811235);
    msg.setSource(25393U);
    msg.setSourceEntity(54U);
    msg.setDestination(25968U);
    msg.setDestinationEntity(239U);
    msg.target = 8677U;
    msg.x = 0.7583084621352436;
    msg.y = 0.08644071672070408;
    msg.z = 0.09381471692689547;

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
    msg.setTimeStamp(0.32586839075962226);
    msg.setSource(55662U);
    msg.setSourceEntity(209U);
    msg.setDestination(64079U);
    msg.setDestinationEntity(108U);
    msg.target = 3280U;
    msg.x = 0.24998274525751263;
    msg.y = 0.3517915483862295;
    msg.z = 0.008279069386102456;

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
    msg.setTimeStamp(0.2948246906316634);
    msg.setSource(57829U);
    msg.setSourceEntity(235U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(228U);
    msg.target = 40938U;
    msg.x = 0.0659165741359079;
    msg.y = 0.07740571709647637;
    msg.z = 0.9256523115205392;

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
    msg.setTimeStamp(0.5200395935994769);
    msg.setSource(27740U);
    msg.setSourceEntity(252U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(49U);
    msg.target = 6954U;
    msg.lat = 0.4592065418184099;
    msg.lon = 0.12965508247381852;
    msg.z_units = 182U;
    msg.z = 0.5070813549236687;

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
    msg.setTimeStamp(0.9035623779323828);
    msg.setSource(64905U);
    msg.setSourceEntity(54U);
    msg.setDestination(29561U);
    msg.setDestinationEntity(175U);
    msg.target = 1673U;
    msg.lat = 0.6202928220196846;
    msg.lon = 0.13629054138658803;
    msg.z_units = 87U;
    msg.z = 0.8861240817176562;

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
    msg.setTimeStamp(0.29982088837707155);
    msg.setSource(4428U);
    msg.setSourceEntity(108U);
    msg.setDestination(20713U);
    msg.setDestinationEntity(74U);
    msg.target = 53917U;
    msg.lat = 0.22369717345596485;
    msg.lon = 0.2292442637750941;
    msg.z_units = 58U;
    msg.z = 0.7103990727423382;

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
    msg.setTimeStamp(0.08197545869955936);
    msg.setSource(20306U);
    msg.setSourceEntity(96U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("ZIBPNKZBALIQJJHKWSKMRXOFPMKMITWUHXKTXIIAAVRPNJQGDQCOSRQI");
    const signed char tmp_msg_0[] = {-92, -26, -99, -127, 9, -43, 85, 119, 81, 34, 122, -119, -33, 110, 91, -82, -39, -32, -109, 25, -43, -60, 47, -72, -94, -59, 65, -55, -125, -101, 3, 106, -46, 64, 119, 76, 97, -99, -25, -120, 1, -14, 55, -66, -78, 98, 38, 68, -123, -88, 3, 77, -14, 79, 110, 81, -4, 95, -51, -14, -17, 74, 86, 13, -84, 58, -71, -98, 79, 86, 72, 110, -36, 6, -16, -101, -19, 70, 115, 74, 57, -32, 72, 29, -68, 26, 0, 25, 106, -49, 55, -99, -42, -114, 103, -31, -87, -80, -94, -49, -113, -124, -121, 50, 9, 24, 72, -105, 34, 123, 56, 45, 22, 102, -65, -25, 14, 27, 84, 51, 86, 77, -38, -1, -8, 4, -75, -43, 18, -100, -79, 49, 111, -36, 125, -65, -36, -32, 53, -25, 38, 114, 113, 50, 44, 47, 6, -13, 109, 103, 63, -115, 34, -73, 90, -122, -106, 0, -27, 27, 56, -33, 99, -82, -68, -117, 119, 24, -62, -84, 67, 120, -122, -37, 1, 69, -90, -75, -58, -46, -61, -26, 116, 54, -35, -34, -67, 100, -84, 102, -51, -96, 36, -32, -92, -123, -112, 27, -66, -45, -5, 102, -128, 122, -46, -127, -60, 60, -88, 108, 60, -49, -120, -72, 23, 29, -27, 7, 58, -102, -19, -56, -121};
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
    msg.setTimeStamp(0.7631384591673431);
    msg.setSource(42362U);
    msg.setSourceEntity(16U);
    msg.setDestination(18594U);
    msg.setDestinationEntity(190U);
    msg.locale.assign("AKRCLQXDUQUSZS");
    const signed char tmp_msg_0[] = {-37, -113, -25, -1, 65, 76, -83, 73, 109, -20, -125, -19, 19, 113, 39, 2, -55, -35, -13, -82, -12, -16, 102, 25, -93, -9, 12, -7, 33, -80, 59, -5, 16, -94, -28, -56, 8, -48, 110, 125, 73, 52, 19, -1, 61, 86, 105, -97, -114, 116, 32, -65, 106, -72, -24, 17, 67, -102, -89, 34, -40, 37};
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
    msg.setTimeStamp(0.7931569736591176);
    msg.setSource(705U);
    msg.setSourceEntity(125U);
    msg.setDestination(31770U);
    msg.setDestinationEntity(7U);
    msg.locale.assign("OFEVRBBXJETROQAEHTLFYUIHBMCFJJOXHBIUNSFLKGXXCYBMLSSOCLLNADRSSNPHUGMXTRQNZYLNSUHICKGQATVA");
    const signed char tmp_msg_0[] = {-11, 77, -46, -51, -12, -60, 11, -6, 72, -126, -30, 9, 13, -83, 10, -75, -94, -89, 30, 93, 113, -42, -7, 123, -116, 73, 116, 6, -123, -86, 32, 77, -18, 16, 39, -121, -72, 48, 33, -56, -99, -120, 110, -105, -36, -67, 42, 61, -105, -78, -41, -5, 112, -112, -79, -4, 121, -54, -71, -115, -126, -97, -97, -30, 114, -96, 39, 108, 25, 23, -59, -3, -52, 106, -107, -92, -35, 77, 40, -35, -69, -94, 13, 126, 11, -88, -82, -107, -23, -65, -28, 6, 61, -78, -72, -23, -34, 61, 22, 63, 73, 98, -58, -53, -82, -95, 14, -108, 41, -24, -14, 65, 66, 8, -113, -40, 92, -26, -67, 123, -43, -7, -19, 108, -50, 99, -52, 27, -63, -80, -61, -6};
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
    msg.setTimeStamp(0.31713232107122247);
    msg.setSource(14105U);
    msg.setSourceEntity(54U);
    msg.setDestination(49944U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.5591326215598877);
    msg.setSource(35164U);
    msg.setSourceEntity(2U);
    msg.setDestination(64850U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.9702029590030641);
    msg.setSource(30766U);
    msg.setSourceEntity(139U);
    msg.setDestination(23637U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.5871457048326515);
    msg.setSource(47025U);
    msg.setSourceEntity(17U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(108U);
    msg.camid = 116U;
    msg.x = 23915U;
    msg.y = 7133U;

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
    msg.setTimeStamp(0.9429420933799446);
    msg.setSource(48242U);
    msg.setSourceEntity(246U);
    msg.setDestination(2627U);
    msg.setDestinationEntity(233U);
    msg.camid = 48U;
    msg.x = 45548U;
    msg.y = 30386U;

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
    msg.setTimeStamp(0.46592790781304605);
    msg.setSource(5788U);
    msg.setSourceEntity(29U);
    msg.setDestination(25643U);
    msg.setDestinationEntity(184U);
    msg.camid = 241U;
    msg.x = 15361U;
    msg.y = 7313U;

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
    msg.setTimeStamp(0.44012662692443316);
    msg.setSource(26291U);
    msg.setSourceEntity(132U);
    msg.setDestination(30466U);
    msg.setDestinationEntity(94U);
    msg.camid = 10U;
    msg.x = 13714U;
    msg.y = 39827U;

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
    msg.setTimeStamp(0.48847063834087523);
    msg.setSource(58129U);
    msg.setSourceEntity(163U);
    msg.setDestination(33723U);
    msg.setDestinationEntity(116U);
    msg.camid = 124U;
    msg.x = 59154U;
    msg.y = 5269U;

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
    msg.setTimeStamp(0.7047480659462576);
    msg.setSource(14720U);
    msg.setSourceEntity(248U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(176U);
    msg.camid = 219U;
    msg.x = 6882U;
    msg.y = 54975U;

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
    msg.setTimeStamp(0.27753470834061644);
    msg.setSource(64452U);
    msg.setSourceEntity(154U);
    msg.setDestination(33590U);
    msg.setDestinationEntity(163U);
    msg.tracking = 16U;
    msg.lat = 0.016619297744132844;
    msg.lon = 0.5025901540321738;
    msg.x = 0.7913615371403528;
    msg.y = 0.26375129446212586;
    msg.z = 0.5664905259438905;

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
    msg.setTimeStamp(0.28448360958634333);
    msg.setSource(11104U);
    msg.setSourceEntity(47U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(19U);
    msg.tracking = 166U;
    msg.lat = 0.10067813454193875;
    msg.lon = 0.7030527095387077;
    msg.x = 0.19869598032242308;
    msg.y = 0.9006821538156179;
    msg.z = 0.6654446821845796;

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
    msg.setTimeStamp(0.911009397903157);
    msg.setSource(19463U);
    msg.setSourceEntity(82U);
    msg.setDestination(44666U);
    msg.setDestinationEntity(169U);
    msg.tracking = 183U;
    msg.lat = 0.2677209636813995;
    msg.lon = 0.23544202145447302;
    msg.x = 0.6766217634145009;
    msg.y = 0.609639456328616;
    msg.z = 0.2516862283796861;

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
    msg.setTimeStamp(0.9345677691099884);
    msg.setSource(24499U);
    msg.setSourceEntity(78U);
    msg.setDestination(56882U);
    msg.setDestinationEntity(115U);
    msg.target.assign("SGZOBHWZOOMAYYDVKZJDTHETUTPVJBOSWXFIFEZHLOWNODTRBGUAGTWOGQAGQFJMNHONIKNSZIWESXIRHLUKZRCQCTLWVUXNPRSYJXJGEUIZUJBAEAXEYCFKENHHMQDTAYSDIRMXLPRGDDPKFYQVORAFSRPIRLJKMYBIKHYKLQICKDGJUFRSZVACBDNWLAGH");
    msg.lbearing = 0.6216976389580778;
    msg.lelevation = 0.33908179677306194;
    msg.bearing = 0.2957211034240693;
    msg.elevation = 0.858432775093481;
    msg.phi = 0.8069346603534142;
    msg.theta = 0.03405522132625738;
    msg.psi = 0.8786474674439073;
    msg.accuracy = 0.529647676860639;

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
    msg.setTimeStamp(0.14897891244209938);
    msg.setSource(153U);
    msg.setSourceEntity(63U);
    msg.setDestination(1713U);
    msg.setDestinationEntity(1U);
    msg.target.assign("QIRCMUXBOQZWTKQJRMNEOLHYPJXTWMTFBMZ");
    msg.lbearing = 0.019259674445231245;
    msg.lelevation = 0.5649925397730503;
    msg.bearing = 0.32470779078384915;
    msg.elevation = 0.18028521063796166;
    msg.phi = 0.676395287949836;
    msg.theta = 0.14023289965184182;
    msg.psi = 0.5067769617564962;
    msg.accuracy = 0.3119715715054898;

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
    msg.setTimeStamp(0.7671375711535424);
    msg.setSource(54459U);
    msg.setSourceEntity(243U);
    msg.setDestination(23801U);
    msg.setDestinationEntity(98U);
    msg.target.assign("HWVZGWSCYBGDLJKOFLCNIRAFXBYHGZGIKJTIZEKJIOBDWRVJPBPAKLRQMETLVUJTUEPDUUSYEOGFLLAQQMNSCVNCRBTRJVQWBFFPOSKUAXCZNFFXRWMZOCQXYBXHLGYWUXHDMDOSGXMBZOCMEHAVUIDLCUGZIFTGFNWPDEEAQDSTYIJRMOZMCHFEWJLVSIUSANYHKVI");
    msg.lbearing = 0.569691218540007;
    msg.lelevation = 0.060584207020504266;
    msg.bearing = 0.5901060354673902;
    msg.elevation = 0.0250373262231135;
    msg.phi = 0.25510998836560017;
    msg.theta = 0.08522691298384444;
    msg.psi = 0.16769258991536817;
    msg.accuracy = 0.6932594929425603;

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
    msg.setTimeStamp(0.249737541411573);
    msg.setSource(39807U);
    msg.setSourceEntity(145U);
    msg.setDestination(46917U);
    msg.setDestinationEntity(1U);
    msg.target.assign("QBAHDGBETSXIJUYUMOLJUOVRHSTJQFYXUBEAOCVUFMHMOVMDOGRNUGBLWWHYFWBNJEHZLNNRXTXPZAJFDGTLROBYNVRNACNREXESPIIYLYHZNSMIEBWIGCAKDZTJVWFKJELVPAVETVJPILCQGHWEXMHUCKYUSDPICYRRPTOJKSHQKYQMMMHQWDOWFSGXOFSPPEZDJAKNWLZXCAPDZPIVD");
    msg.x = 0.7129158987214067;
    msg.y = 0.26274354866011507;
    msg.z = 0.14446993335331404;
    msg.n = 0.37780449663538596;
    msg.e = 0.9346197267113782;
    msg.d = 0.4284297299776645;
    msg.phi = 0.34131713910549466;
    msg.theta = 0.5696574483486632;
    msg.psi = 0.09277283335579589;
    msg.accuracy = 0.6549581184173902;

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
    msg.setTimeStamp(0.1576879194598232);
    msg.setSource(26234U);
    msg.setSourceEntity(47U);
    msg.setDestination(60052U);
    msg.setDestinationEntity(128U);
    msg.target.assign("HXCOBZICDLZIUWXBXMDFNJSRAKZVNUNBKLDDJZSOIGWOYUWHRLLAJRPZPTACIEKPWMLESNWVTMTYCDGBPDTJSJWITIOLA");
    msg.x = 0.47019310179583684;
    msg.y = 0.5281886424354754;
    msg.z = 0.58011847322377;
    msg.n = 0.3081633193441633;
    msg.e = 0.018026207520336346;
    msg.d = 0.46118508349733556;
    msg.phi = 0.45921719725781074;
    msg.theta = 0.6634222562544803;
    msg.psi = 0.0871350034885553;
    msg.accuracy = 0.8141387246322633;

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
    msg.setTimeStamp(0.24372987726207807);
    msg.setSource(24558U);
    msg.setSourceEntity(133U);
    msg.setDestination(51533U);
    msg.setDestinationEntity(62U);
    msg.target.assign("GTDYBTZSDQDXYASCBRGHXIZZEPNIGXFVXNSPDQIASUSHGZJJCRYOOZCYQNOAVHURUTMUZDMKMRLLHPSPXIKWOMVSWRKQNBEPMCMJFIORGEDUXLVJPAWBMNHNRYVPGFENISOVGYKAFMZZJHCAJQLGGJUXLLRYJIECBM");
    msg.x = 0.42090879090674893;
    msg.y = 0.7056388490538836;
    msg.z = 0.7460395230560577;
    msg.n = 0.3357388216806987;
    msg.e = 0.9535660378815969;
    msg.d = 0.730386793668554;
    msg.phi = 0.17532158370107398;
    msg.theta = 0.5946162670896621;
    msg.psi = 0.9227066409790916;
    msg.accuracy = 0.7630328084193393;

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
    msg.setTimeStamp(0.8882601628656706);
    msg.setSource(6463U);
    msg.setSourceEntity(18U);
    msg.setDestination(40200U);
    msg.setDestinationEntity(138U);
    msg.target.assign("NUVFAHLFLGGUJUGAZRXSLHQMLTIZCUXZQLXCBFWUGZYQANVEWVJDKJEJNXCFVYQHCJROLDLWCQIT");
    msg.lat = 0.14622720736969785;
    msg.lon = 0.660376837174792;
    msg.z_units = 148U;
    msg.z = 0.320892512480647;
    msg.accuracy = 0.008693569181505767;

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
    msg.setTimeStamp(0.8862766431995888);
    msg.setSource(64152U);
    msg.setSourceEntity(162U);
    msg.setDestination(40671U);
    msg.setDestinationEntity(203U);
    msg.target.assign("WGBQXADIXDAVQEDSBNNUZPI");
    msg.lat = 0.32353149459483077;
    msg.lon = 0.9525512001967577;
    msg.z_units = 44U;
    msg.z = 0.793179266367153;
    msg.accuracy = 0.64779753967122;

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
    msg.setTimeStamp(0.9962651916352765);
    msg.setSource(31575U);
    msg.setSourceEntity(109U);
    msg.setDestination(47U);
    msg.setDestinationEntity(89U);
    msg.target.assign("VSWPEMMTBTREJXAMSECMNGSFEFLRZVQQTUCWBUIBTPJJXNQUCLJHYZXLIAYNAGVXTDZBTFIZMAGNGKWWQZVSFTSTKBIJUHMPGAWSPZQHDFODKFBXDQXEIHNFZZPWFOYEYPCRKCBNJKBKKBVRTNMANHQGXLEHRDCYMJJEPHSADYUFCLOEVRGACZVOORIDVLLRJMUHIZXNCUK");
    msg.lat = 0.039503509634029266;
    msg.lon = 0.6420301787102356;
    msg.z_units = 145U;
    msg.z = 0.8993987094246787;
    msg.accuracy = 0.7339228413498997;

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
    msg.setTimeStamp(0.3168790450548892);
    msg.setSource(39769U);
    msg.setSourceEntity(2U);
    msg.setDestination(56027U);
    msg.setDestinationEntity(18U);
    msg.name.assign("IYUJASJKQRSLYWRUJTKRSKXRVUCIKDNMSDKMTESWCVJIW");
    msg.lat = 0.8234297898620611;
    msg.lon = 0.42717795086266597;
    msg.z = 0.7873128562248913;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.5130946455810713);
    msg.setSource(47844U);
    msg.setSourceEntity(15U);
    msg.setDestination(48437U);
    msg.setDestinationEntity(195U);
    msg.name.assign("ZKALVKXSHTJQPWIVPBSZIYDHFHEUDILHPYGEXHDBDEXRISVYICEKZHFNDRFWXEMWAXZQNOUVOTHBGCOABGQKBRLQWDGUOATSQIFMAQAKGDGEKYILIJJMJNCUUZMOAYXPTSZRIXSYVFBMPSGTSEKCUWMYXJWAQNCYOJSLXFRNIUYLUPTMVLTCTSMQOVBZEDCPNRHZGQHMBLQOJPEWKCUYFXHRLGPRPMUAFREDZWNKBFVLBGRN");
    msg.lat = 0.9275723623571119;
    msg.lon = 0.3398322695606276;
    msg.z = 0.7921779299858799;
    msg.z_units = 1U;

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
    msg.setTimeStamp(0.7865705412391218);
    msg.setSource(7743U);
    msg.setSourceEntity(223U);
    msg.setDestination(52443U);
    msg.setDestinationEntity(136U);
    msg.name.assign("PFGCNAPDGRQSRUFBPFTYOK");
    msg.lat = 0.48922576821269625;
    msg.lon = 0.2712764293458212;
    msg.z = 0.47105723582563575;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.940645861952345);
    msg.setSource(42485U);
    msg.setSourceEntity(170U);
    msg.setDestination(15640U);
    msg.setDestinationEntity(247U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.21438969377413009);
    msg.setSource(34386U);
    msg.setSourceEntity(109U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(69U);
    msg.op = 89U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IAGYDAYHRSWRQCJTYZKODVUQSORRAQVEIJAQWYKTUWOILKRECHBLPVCFNFITUAXK");
    tmp_msg_0.lat = 0.949411747401663;
    tmp_msg_0.lon = 0.8107876838083742;
    tmp_msg_0.z = 0.9086120977273335;
    tmp_msg_0.z_units = 4U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7398613155616159);
    msg.setSource(55397U);
    msg.setSourceEntity(148U);
    msg.setDestination(1260U);
    msg.setDestinationEntity(184U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.24248308618449843);
    msg.setSource(9804U);
    msg.setSourceEntity(96U);
    msg.setDestination(63096U);
    msg.setDestinationEntity(21U);
    msg.value = 0.5473463053631081;
    msg.type = 154U;

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
    msg.setTimeStamp(0.12933958422682112);
    msg.setSource(18565U);
    msg.setSourceEntity(77U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5600464746616884;
    msg.type = 207U;

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
    msg.setTimeStamp(0.8632440064757542);
    msg.setSource(49344U);
    msg.setSourceEntity(151U);
    msg.setDestination(4518U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9538267854919221;
    msg.type = 165U;

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
    msg.setTimeStamp(0.30100337741162797);
    msg.setSource(1640U);
    msg.setSourceEntity(136U);
    msg.setDestination(38841U);
    msg.setDestinationEntity(180U);
    msg.value = 0.3217773127998872;

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
    msg.setTimeStamp(0.6830359341076871);
    msg.setSource(1260U);
    msg.setSourceEntity(57U);
    msg.setDestination(42316U);
    msg.setDestinationEntity(198U);
    msg.value = 0.2361780631751801;

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
    msg.setTimeStamp(0.2651968201170155);
    msg.setSource(19340U);
    msg.setSourceEntity(42U);
    msg.setDestination(48293U);
    msg.setDestinationEntity(203U);
    msg.value = 0.3567984740380018;

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
    msg.setTimeStamp(0.19242449621601487);
    msg.setSource(26730U);
    msg.setSourceEntity(203U);
    msg.setDestination(49077U);
    msg.setDestinationEntity(201U);
    msg.timestamp_last_service = 0.7469138988736788;
    msg.time_next_service = 0.8792495153054641;
    msg.time_motor_next_service = 0.0005862359231038061;
    msg.time_idle_ground = 0.8650105489362447;
    msg.time_idle_air = 0.7964017143156962;
    msg.time_idle_water = 0.0786273357325552;
    msg.time_idle_underwater = 0.3651268671791402;
    msg.time_idle_unknown = 0.869064956929718;
    msg.time_motor_ground = 0.39104817673358594;
    msg.time_motor_air = 0.7678364542870357;
    msg.time_motor_water = 0.8731029276030927;
    msg.time_motor_underwater = 0.3735134150037167;
    msg.time_motor_unknown = 0.0311122233992438;
    msg.rpm_min = 22559;
    msg.rpm_max = -20191;
    msg.depth_max = 0.6864217526201327;

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
    msg.setTimeStamp(0.7613229872159907);
    msg.setSource(27070U);
    msg.setSourceEntity(94U);
    msg.setDestination(61447U);
    msg.setDestinationEntity(223U);
    msg.timestamp_last_service = 0.781185132189508;
    msg.time_next_service = 0.6972870758569879;
    msg.time_motor_next_service = 0.969983751241301;
    msg.time_idle_ground = 0.5809518890016229;
    msg.time_idle_air = 0.0005865524063465299;
    msg.time_idle_water = 0.2794548870295537;
    msg.time_idle_underwater = 0.3372769009513489;
    msg.time_idle_unknown = 0.49805024123114194;
    msg.time_motor_ground = 0.5675400626729001;
    msg.time_motor_air = 0.43936758614817706;
    msg.time_motor_water = 0.47077646224111425;
    msg.time_motor_underwater = 0.7465292538485286;
    msg.time_motor_unknown = 0.39714453321814547;
    msg.rpm_min = 31952;
    msg.rpm_max = 22210;
    msg.depth_max = 0.06711145724397505;

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
    msg.setTimeStamp(0.35540113785542216);
    msg.setSource(45274U);
    msg.setSourceEntity(195U);
    msg.setDestination(35388U);
    msg.setDestinationEntity(49U);
    msg.timestamp_last_service = 0.4927485317792759;
    msg.time_next_service = 0.5941296706395937;
    msg.time_motor_next_service = 0.10548718298412696;
    msg.time_idle_ground = 0.11722568941103262;
    msg.time_idle_air = 0.11166620704959562;
    msg.time_idle_water = 0.5340460066789269;
    msg.time_idle_underwater = 0.0427343321985898;
    msg.time_idle_unknown = 0.9701275067797214;
    msg.time_motor_ground = 0.4665030218109524;
    msg.time_motor_air = 0.6060921162068599;
    msg.time_motor_water = 0.7248382915295787;
    msg.time_motor_underwater = 0.16536323233144057;
    msg.time_motor_unknown = 0.8588641905691207;
    msg.rpm_min = 20340;
    msg.rpm_max = 5580;
    msg.depth_max = 0.39410863803577834;

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
    msg.setTimeStamp(0.34163829741547724);
    msg.setSource(24660U);
    msg.setSourceEntity(214U);
    msg.setDestination(17840U);
    msg.setDestinationEntity(5U);
    msg.severity = 234U;
    msg.text.assign("MKMLSWUJRLMAORIOEBDREHUKAPXFMRSYXCDWJLSWEVMDBUMVXSTIPDHXGLXGQXIITGHUUEIIDHOTVLKVFQFSHYFLSHECYCRUJTZALHWNPTRPHAMQMWNILSEJNYQAXJYOWBFTKBTNTZBFVCZDYQSJOYGZDCMGHELXBXOOVNVUJYOBENAJNZCGVE");

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
    msg.setTimeStamp(0.8707519537116453);
    msg.setSource(47095U);
    msg.setSourceEntity(149U);
    msg.setDestination(47195U);
    msg.setDestinationEntity(204U);
    msg.severity = 111U;
    msg.text.assign("FLSHKJEQOKOCIMOPGFDTQFJZQMOTUYMQXZOKNUASKBDTGBLZCCVUWXPAUSVXQQSRPEBKJRYYDWRVPURUV");

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
    msg.setTimeStamp(0.8121114848993851);
    msg.setSource(32866U);
    msg.setSourceEntity(99U);
    msg.setDestination(18597U);
    msg.setDestinationEntity(160U);
    msg.severity = 225U;
    msg.text.assign("PLIBXXUJSTDEMRZU");

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
    msg.setTimeStamp(0.928500986224001);
    msg.setSource(5389U);
    msg.setSourceEntity(220U);
    msg.setDestination(57143U);
    msg.setDestinationEntity(156U);
    msg.channel = 64;
    msg.value = 1974468673;
    msg.gain = 195U;

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
    msg.setTimeStamp(0.6297756529842042);
    msg.setSource(39840U);
    msg.setSourceEntity(170U);
    msg.setDestination(50421U);
    msg.setDestinationEntity(200U);
    msg.channel = -55;
    msg.value = -853795107;
    msg.gain = 118U;

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
    msg.setTimeStamp(0.2579088228682004);
    msg.setSource(33147U);
    msg.setSourceEntity(115U);
    msg.setDestination(2917U);
    msg.setDestinationEntity(77U);
    msg.channel = -109;
    msg.value = -1082734260;
    msg.gain = 88U;

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
    msg.setTimeStamp(0.8290676334917398);
    msg.setSource(16987U);
    msg.setSourceEntity(48U);
    msg.setDestination(20192U);
    msg.setDestinationEntity(225U);
    msg.ch01 = 0.22817149026667838;
    msg.ch02 = 0.024322151912127277;
    msg.ch03 = 0.7178462370243295;
    msg.ch04 = 0.6661346231949009;
    msg.ch05 = 0.8285519101855626;
    msg.ch06 = 0.7519246587799322;
    msg.ch07 = 0.03596730844999341;
    msg.ch08 = 0.7451651140737964;
    msg.ch09 = 0.19166944190073743;
    msg.ch10 = 0.7342180696114956;
    msg.ch11 = 0.18941341307097903;
    msg.ch12 = 0.504117516546175;
    msg.ch13 = 0.8448671670180236;
    msg.ch14 = 0.918182202414477;
    msg.ch15 = 0.4404330408554924;
    msg.ch16 = 0.6235769541563984;

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
    msg.setTimeStamp(0.7964412530508467);
    msg.setSource(50534U);
    msg.setSourceEntity(189U);
    msg.setDestination(44033U);
    msg.setDestinationEntity(9U);
    msg.ch01 = 0.7100953287592564;
    msg.ch02 = 0.8619652142967419;
    msg.ch03 = 0.36003720818214624;
    msg.ch04 = 0.2240353968686154;
    msg.ch05 = 0.0067553306696997995;
    msg.ch06 = 0.7826774986906413;
    msg.ch07 = 0.11466184521396261;
    msg.ch08 = 0.0175132472673728;
    msg.ch09 = 0.9714054753310348;
    msg.ch10 = 0.326589116917114;
    msg.ch11 = 0.2940699215581688;
    msg.ch12 = 0.734168347764525;
    msg.ch13 = 0.35815979169133805;
    msg.ch14 = 0.69201726331938;
    msg.ch15 = 0.22418318864987263;
    msg.ch16 = 0.8141618550905246;

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
    msg.setTimeStamp(0.23606814780550323);
    msg.setSource(23864U);
    msg.setSourceEntity(234U);
    msg.setDestination(5661U);
    msg.setDestinationEntity(67U);
    msg.ch01 = 0.867449368406604;
    msg.ch02 = 0.6295120827930561;
    msg.ch03 = 0.08573278195978506;
    msg.ch04 = 0.3732881778592557;
    msg.ch05 = 0.11999200446270697;
    msg.ch06 = 0.3938303717839652;
    msg.ch07 = 0.12870034182984247;
    msg.ch08 = 0.47443016039556596;
    msg.ch09 = 0.05053988567363721;
    msg.ch10 = 0.8215139768037143;
    msg.ch11 = 0.11791698024953179;
    msg.ch12 = 0.7817488420415454;
    msg.ch13 = 0.26013851248529485;
    msg.ch14 = 0.8196013455059831;
    msg.ch15 = 0.1688091214168539;
    msg.ch16 = 0.21948810814149877;

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
    msg.setTimeStamp(0.8919645789526265);
    msg.setSource(21676U);
    msg.setSourceEntity(61U);
    msg.setDestination(57815U);
    msg.setDestinationEntity(154U);
    msg.op = 202U;
    msg.lat = 0.7574542343149685;
    msg.lon = 0.9117242067202533;
    msg.height = 0.9365091341450078;
    msg.depth = 0.2993281335433233;
    msg.alt = 0.5403139107266831;

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
    msg.setTimeStamp(0.9561145318868168);
    msg.setSource(3393U);
    msg.setSourceEntity(246U);
    msg.setDestination(39092U);
    msg.setDestinationEntity(220U);
    msg.op = 181U;
    msg.lat = 0.8844384582832264;
    msg.lon = 0.37668763132166005;
    msg.height = 0.9053380191230533;
    msg.depth = 0.3243105121250799;
    msg.alt = 0.25506766823496374;

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
    msg.setTimeStamp(0.20527917729712197);
    msg.setSource(2506U);
    msg.setSourceEntity(126U);
    msg.setDestination(29334U);
    msg.setDestinationEntity(64U);
    msg.op = 38U;
    msg.lat = 0.8093142729921768;
    msg.lon = 0.5527924178357015;
    msg.height = 0.13463668519299254;
    msg.depth = 0.16500092514415532;
    msg.alt = 0.6549952609810189;

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
    msg.setTimeStamp(0.45211703885187804);
    msg.setSource(60391U);
    msg.setSourceEntity(219U);
    msg.setDestination(24322U);
    msg.setDestinationEntity(195U);
    msg.direction = 0.6692383850773522;
    msg.speed = 0.9864742158975439;
    msg.turbulence = 0.08829471694170143;

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
    msg.setTimeStamp(0.5651269238139552);
    msg.setSource(18709U);
    msg.setSourceEntity(162U);
    msg.setDestination(6375U);
    msg.setDestinationEntity(81U);
    msg.direction = 0.5661945304687832;
    msg.speed = 0.23174626796522513;
    msg.turbulence = 0.687899346968105;

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
    msg.setTimeStamp(0.8415367441469813);
    msg.setSource(7812U);
    msg.setSourceEntity(159U);
    msg.setDestination(5737U);
    msg.setDestinationEntity(191U);
    msg.direction = 0.7235603276889688;
    msg.speed = 0.5625590394699642;
    msg.turbulence = 0.07805375981754403;

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
    msg.setTimeStamp(0.937763008288966);
    msg.setSource(50337U);
    msg.setSourceEntity(179U);
    msg.setDestination(11789U);
    msg.setDestinationEntity(239U);
    msg.msg_type.assign("HGWJXMMXVUXDHTGKFYHQGUVDNWSXITQCSABATLWMZPQNRLZBFVBYJGDMSMLLODOCGFOFRSCKKZCMQCADIWJRDEGJWOPEWXBGEKRASUQPUOYAGHSEEMUBZBQEXRYRACVIPLJAZKLPJOYVHRWNBUYPCNWMYFLDKJVQNLIEKNBROCVQVCZFTAITKLFAZPMWGNJSFSIDOZPRTTYNIXEDUVBIPRJCWYXQKZINOAKPHXHHF");
    msg.sensor_class.assign("WUNWETUJSLUDZJGOCYOWJZMQWKRHPLSKAQXVDXVFTEZAQIBDXGCPOIFHMJHBRTUDBQRHZAIFRJXYUTXGFGVQDYMFBBLUJHWYQQTNKGNXBVFLEROHTRODAYPVZKSOZIEKXEQLCZSWQLWJOFTOCOVSDCXYYRHRCYMUEUMMZMNBCHAGBPSPGEHJDLAKBPZYIATMUMPWIFLCAJKIDKMVNSZENXTKNESWPQSLACOFDVNULFAYIGG");
    msg.mmsi.assign("BWYMZYZLWCSQPOLGACGYLGSIGGIDEJWUMMQSAXDETZAZSXXQLVTWJCBXWHFDMJHBGHFZDIQZPAEVUQCYEPKY");
    msg.callsign.assign("FALQDPIXENWRAYBLLPBDGVQGRVCZIGZSUGVCPWFXLKXOOMKPKFEFYCZKYYLHEVUSMAQVQMNOBYTVXKTAESYXRJPCIOWDRHHQBEWMXWROICBBLMDWZMUISUKHJMDKTFMORYOPLLNXKFJVFWJCVSJUSJXOWJGUIXDNAVKPQWDUMLJZYNUHFFTCIQHGZNHBTACQNYNGTJROSGAGIBCZUOGSDBTQZSBA");
    msg.name.assign("MTCDKWRBILOEYUFQYTXIXGFMRLPUDIBSFPCVORFWDWSEIXCUMLPWVKTOJOYOIMTIJKNPTYBBJHSGJZGVFZKXRZQSEFDNBGYAHZVWWXGGZQTZKYBKYHQJIUXQFHDVJRMAZCSFECNEARQUQWKVEFNCPWEYULGRMEEMSCNKLRXYNJCSPDUDTNVAZLGXYDAPUNIJGHTWXIKCBLTAXJAANDAQWOOLZUZOCGVQLVTSJOFNHRMVLPHKHQRIEOM");
    msg.nav_status = 229U;
    msg.type_and_cargo = 2U;
    msg.lat = 0.36006081520944777;
    msg.lon = 0.11403447612173423;
    msg.course = 0.5862549551623948;
    msg.speed = 0.09996686936238053;
    msg.dist = 0.23487389566216166;
    msg.a = 0.19250520273423777;
    msg.b = 0.595048213073636;
    msg.c = 0.94370454170556;
    msg.d = 0.5634574869929804;
    msg.draught = 0.46250290489639045;

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
    msg.setTimeStamp(0.6844021196387253);
    msg.setSource(31910U);
    msg.setSourceEntity(146U);
    msg.setDestination(47399U);
    msg.setDestinationEntity(210U);
    msg.msg_type.assign("VRWCGDXATERXXHKIMWSDRMCURPQSNVKOVBFZHHKUCQGYQFJOGCBIZYMNVUYYCCCELUVBTAFJASAIFIESQ");
    msg.sensor_class.assign("KXPXPOVGFSIPGCZMLDIYZQDHVCHYEWWBKMYMHHSOJRTCFUGYGKKMKBAYFOFEZZRZNEWJYNSBGXLWAIJRHOLTABBSVVVKBRYSOCDXYHVQQIUTAVDA");
    msg.mmsi.assign("TBRTYQHXYBTHRZYQELCAGNAAJOVECIKJQSRZFEUBVDWYXKANOCHLIBUYZNTPMPKVDNIFDXWVHHCAHAUXIWQIWEUHXWHRKATWSNFLVJSJVYEIGUSJPTMYSNPIGGPQGEBKRCFC");
    msg.callsign.assign("KKLOOQMCLLYVFAHTBGGYRJNCYNKVJZQSVZCUAOMGYVJWOZQECHWUSMEXSCVBZNRRWXUXDOCCAJNBOAXTWHWPUQZDIIIPWOGERJQFKBOFKAJCLFJDMWPARGTDAALUXJFNPZNVBJNVPMSHY");
    msg.name.assign("ANCPTMTAKMLIYPYCCVRNMFDTRWAAZBTXWOBYWBPUJKKGBSPYKZEKORENJHQFLMLSTCXBKFORSAPUKYZHAREQGUDPZFFCAGDGSJZNUBEMDFTOHQUTMBHOIDOVQVCSGIERDLFZYHBXWLAXQGJDNXTIRIMNJPZIDXIFIFVJCTGPYHQZRLYLVVASJNSKEGQUOWNSVLWNHZGUTQERJBBLCNFEIKHWDRCWOVXMJPXSCLHEMUPDVZXWQUGOVYWEO");
    msg.nav_status = 21U;
    msg.type_and_cargo = 94U;
    msg.lat = 0.8283832197128356;
    msg.lon = 0.31116484385949694;
    msg.course = 0.8239856192528158;
    msg.speed = 0.5006089917635479;
    msg.dist = 0.5839688520610684;
    msg.a = 0.5055117226589864;
    msg.b = 0.4239776547338878;
    msg.c = 0.9205651023036006;
    msg.d = 0.18847393903248488;
    msg.draught = 0.009981844468128998;

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
    msg.setTimeStamp(0.06063285641661664);
    msg.setSource(41802U);
    msg.setSourceEntity(232U);
    msg.setDestination(23801U);
    msg.setDestinationEntity(90U);
    msg.msg_type.assign("ECRMCAAWVWICGBOIHSVNHRIVJGCGKMRALLLELTFMHLZNSKXFKJEFWZBHUZQMTOJPAKSGNUXFDEPKMWAJZCJYFHFBGJCNBOOHPEBJHZYUXUDUOATTFKQYYHKOEPRYWOIMGKLADIAYTSIHMBUZVDXHUULJTTILVWLGPPVGCGNMMDXOTINRSAIQVVOQCYYEXXPFOMXIBQSWGJPNERYQDVPXQZDY");
    msg.sensor_class.assign("WLYNNXISPRBXWOUVOGXPBHPBXTSUKWFBJ");
    msg.mmsi.assign("JKIXWCFTFKBKRTTOFFNSAQRWPYQDUXBUVWDQTWAAUPMWMJSRPHYORFJCYH");
    msg.callsign.assign("ASOQYWBESWAIYNJMMYBEQQVHJKMRGGJGQRHORJTVSIYGBRHTTUADNRKLTZLPZYSJTSOBJOKADFGNSLAJHAGFNPDSIMAOXZVGKMDVVWCWWACNYJUXGKLPDXNXIELMFRHNVBDSDNVMPIXWIBOXZCKVUFJGMCQCZHEFUZURQEDCEDOBEFIACDFCFQCLOUMYQBYTPIXKQWPZIUR");
    msg.name.assign("RKMHENXEDPUYNCVGPJUFFSQIVLCBSBUCUTNBMWINCLTSAMZITTYONMWMBGOFTEMALKVAYWLJVFLJRREQNDLPMPCLXKEZ");
    msg.nav_status = 213U;
    msg.type_and_cargo = 195U;
    msg.lat = 0.7029666130769852;
    msg.lon = 0.6887474418329684;
    msg.course = 0.12740880496871676;
    msg.speed = 0.6666291296862927;
    msg.dist = 0.26813208880521633;
    msg.a = 0.8785760739787525;
    msg.b = 0.4393876157621385;
    msg.c = 0.9904253778374211;
    msg.d = 0.4039409344458359;
    msg.draught = 0.09121548218738207;

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
    msg.setTimeStamp(0.15263185828594872);
    msg.setSource(33959U);
    msg.setSourceEntity(15U);
    msg.setDestination(2020U);
    msg.setDestinationEntity(3U);
    msg.depth_at_loc.assign("YQRTESQXJVNWMSUHLFTWFCUPEWHCVKJWKNOMJTJRVSJKSPKTZWVBYUBFQDCDYHVCSILWTWIDZIPMXCSZOKUFWNQFSJKOALBBIAHJVATKADCYPCWQRHGUCEVZVXUUPGQLZBRZRQOIJXYTUPDXIABQZGPSMHIUMAJIHEBOTOGSIZLCCZF");
    msg.danger.assign("DULRGLUHZUXYD");

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
    msg.setTimeStamp(0.1472983880666543);
    msg.setSource(1597U);
    msg.setSourceEntity(61U);
    msg.setDestination(20275U);
    msg.setDestinationEntity(106U);
    msg.depth_at_loc.assign("OXZCGVUMXUWYMBDLWTIIYPJSZDXEFEYYMRQMQVJPTRRCQGQIOBIJDDZVWFSCATCBEBGVHHKAEHTSNZPJKWFSDYDFGZHOLFVJMQGEELJNIDTNQHATEHLEUOPZRQBFMXVKWYPJAEHGRNHIUWKTZCBXKSUSXRRDRJTBKDZIBZRZIVCOMUNYPBKXGPAOPECOGHAOVQLAAXSOQSMLIMTNKWLNJNFTYUYWRNDGWXSFCSCJL");
    msg.danger.assign("KYWAPNGCUESTIXWECFZUOIOQNOYDRZLUTAMRGZLXIWPLTOHIYPJIJXZWYNZWTJSNAFRGLQEYEFEMHCPK");

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
    msg.setTimeStamp(0.21846684651497972);
    msg.setSource(31288U);
    msg.setSourceEntity(221U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(229U);
    msg.depth_at_loc.assign("PGUIMUWZAKVBBQQCFAVYURYYHILMZZDGNZRGRMCJIXZYDEOVBHEKQLOESRRHNIMPULHODLBGPGECFIBSJBHADIIJZKAZQCVHVQIDCKJDLKCNPTCYXXSPQUJVMOFKHJTTYYBRAWOEMUWQAHSGNSEIEBCWLTFXTGDNIFORUSRNNRKSGBSAKMLDYCXQTVTWZOLJGPPVYNTAPZDCXAGWXOSMQJOYEZKHUUFWLERMFBSWMTXPEJUFVQLOWFHKNJ");
    msg.danger.assign("JDOTYZICSWYCBDNYRTQQYZFZHAMLRBVKJTZFAYQMQZMPHDJDUKPKTDGQCRFRNUWGSWMBFLRERUC");

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
    msg.setTimeStamp(0.35764081262194647);
    msg.setSource(12186U);
    msg.setSourceEntity(121U);
    msg.setDestination(13726U);
    msg.setDestinationEntity(249U);
    msg.time = 0.0938541271440253;
    msg.x = 0.081382765172196;
    msg.y = 0.7659016949551942;
    msg.z = 0.02320919229297802;

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
    msg.setTimeStamp(0.901011202135391);
    msg.setSource(58183U);
    msg.setSourceEntity(190U);
    msg.setDestination(48629U);
    msg.setDestinationEntity(74U);
    msg.time = 0.7466148739100145;
    msg.x = 0.5126533842830806;
    msg.y = 0.7003770229159489;
    msg.z = 0.6363729948868699;

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
    msg.setTimeStamp(0.9092305199512517);
    msg.setSource(32418U);
    msg.setSourceEntity(208U);
    msg.setDestination(724U);
    msg.setDestinationEntity(207U);
    msg.time = 0.3159237688560905;
    msg.x = 0.5132716130094777;
    msg.y = 0.581239918665865;
    msg.z = 0.10294880372975135;

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
    msg.setTimeStamp(0.9609839583480231);
    msg.setSource(18873U);
    msg.setSourceEntity(6U);
    msg.setDestination(15712U);
    msg.setDestinationEntity(119U);
    msg.nbeams = 112U;
    msg.ncells = 153U;
    msg.coord_sys = 81U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.19678102071344994;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8734964246743906;
    tmp_tmp_msg_0_0.amp = 0.04633688380470802;
    tmp_tmp_msg_0_0.cor = 148U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8322543723842619);
    msg.setSource(3243U);
    msg.setSourceEntity(117U);
    msg.setDestination(64557U);
    msg.setDestinationEntity(57U);
    msg.nbeams = 185U;
    msg.ncells = 69U;
    msg.coord_sys = 192U;

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
    msg.setTimeStamp(0.6401803817428451);
    msg.setSource(63823U);
    msg.setSourceEntity(67U);
    msg.setDestination(14688U);
    msg.setDestinationEntity(199U);
    msg.nbeams = 49U;
    msg.ncells = 5U;
    msg.coord_sys = 119U;

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
    msg.setTimeStamp(0.8633274105223865);
    msg.setSource(16834U);
    msg.setSourceEntity(10U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(126U);
    msg.cell_position = 0.5448916561363197;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.37659701536997814;
    tmp_msg_0.amp = 0.5605904428038966;
    tmp_msg_0.cor = 43U;
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
    msg.setTimeStamp(0.5926189416587191);
    msg.setSource(40342U);
    msg.setSourceEntity(31U);
    msg.setDestination(39499U);
    msg.setDestinationEntity(175U);
    msg.cell_position = 0.04778805374594974;

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
    msg.setTimeStamp(0.9758246050462658);
    msg.setSource(2564U);
    msg.setSourceEntity(136U);
    msg.setDestination(55084U);
    msg.setDestinationEntity(49U);
    msg.cell_position = 0.7361877967063846;

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
    msg.setTimeStamp(0.1802176500300554);
    msg.setSource(33577U);
    msg.setSourceEntity(247U);
    msg.setDestination(11863U);
    msg.setDestinationEntity(106U);
    msg.vel = 0.12488993928274816;
    msg.amp = 0.6743033302191556;
    msg.cor = 116U;

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
    msg.setTimeStamp(0.007780954194614775);
    msg.setSource(1264U);
    msg.setSourceEntity(120U);
    msg.setDestination(8333U);
    msg.setDestinationEntity(152U);
    msg.vel = 0.010526463040618328;
    msg.amp = 0.41343592838179544;
    msg.cor = 194U;

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
    msg.setTimeStamp(0.16628214745231307);
    msg.setSource(64854U);
    msg.setSourceEntity(80U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(248U);
    msg.vel = 0.5251249723018655;
    msg.amp = 0.27367171976039706;
    msg.cor = 60U;

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
    msg.setTimeStamp(0.053071436362633784);
    msg.setSource(34231U);
    msg.setSourceEntity(209U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(90U);
    msg.value = 0.38109165978987536;

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
    msg.setTimeStamp(0.31929162091760366);
    msg.setSource(6269U);
    msg.setSourceEntity(121U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6882686513320643;

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
    msg.setTimeStamp(0.4128023178497222);
    msg.setSource(19565U);
    msg.setSourceEntity(168U);
    msg.setDestination(21070U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8155405191417429;

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
    msg.setTimeStamp(0.15115418859635765);
    msg.setSource(58952U);
    msg.setSourceEntity(82U);
    msg.setDestination(1976U);
    msg.setDestinationEntity(88U);
    msg.sig_wave_height_hm0 = 0.3180457251774603;
    msg.wave_peak_direction = 0.8411190334607445;
    msg.wave_peak_period = 0.019104846014423083;
    msg.wave_height_wind_hm0 = 0.8172150032539226;
    msg.wave_height_swell_hm0 = 0.6301633880813357;
    msg.wave_peak_period_wind = 0.8894809676277096;
    msg.wave_peak_period_swell = 0.6292498384330711;
    msg.wave_peak_direction_wind = 0.8582010073114735;
    msg.wave_peak_direction_swell = 0.24684634515580461;
    msg.wave_mean_direction = 0.5700787993273753;
    msg.wave_mean_period_tm02 = 0.4621149198808293;
    msg.wave_height_hmax = 0.6506253806317143;
    msg.wave_height_crest = 0.746030232242332;
    msg.wave_height_trough = 0.06875236383827787;
    msg.wave_period_tmax = 0.6291464572386247;
    msg.wave_period_tz = 0.6876010120731967;
    msg.significant_wave_height_h1_3 = 0.002104105190894656;
    msg.mean_spreading_angle = 0.8230378544464098;
    msg.first_order_spread = 0.26700676938825674;
    msg.long_crestedness_parameters = 0.18947825824322972;
    msg.heading = 0.4543498610682555;
    msg.pitch = 0.9339151398984832;
    msg.roll = 0.824076165910407;
    msg.external_heading = 0.7808129128678338;
    msg.stdev_heading = 0.9270929067401802;
    msg.stdev_pitch = 0.11471428430520081;
    msg.stdev_roll = 0.6365483877971629;

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
    msg.setTimeStamp(0.058819926447059245);
    msg.setSource(15832U);
    msg.setSourceEntity(194U);
    msg.setDestination(54751U);
    msg.setDestinationEntity(205U);
    msg.sig_wave_height_hm0 = 0.33104647486164573;
    msg.wave_peak_direction = 0.0011492449620270628;
    msg.wave_peak_period = 0.4368881355717795;
    msg.wave_height_wind_hm0 = 0.42711977633767684;
    msg.wave_height_swell_hm0 = 0.8252109947714622;
    msg.wave_peak_period_wind = 0.8441133931556091;
    msg.wave_peak_period_swell = 0.7138035668232922;
    msg.wave_peak_direction_wind = 0.7793299456527438;
    msg.wave_peak_direction_swell = 0.4075189658773384;
    msg.wave_mean_direction = 0.17116500754135477;
    msg.wave_mean_period_tm02 = 0.8892341487273471;
    msg.wave_height_hmax = 0.7578096418863238;
    msg.wave_height_crest = 0.17167224291528038;
    msg.wave_height_trough = 0.7874166794726931;
    msg.wave_period_tmax = 0.6834600927557872;
    msg.wave_period_tz = 0.6260944748702403;
    msg.significant_wave_height_h1_3 = 0.82369331161074;
    msg.mean_spreading_angle = 0.6969855207077235;
    msg.first_order_spread = 0.334588285398019;
    msg.long_crestedness_parameters = 0.22701328509031937;
    msg.heading = 0.9024413461866903;
    msg.pitch = 0.31265900925737633;
    msg.roll = 0.5534805423093697;
    msg.external_heading = 0.7199851224931046;
    msg.stdev_heading = 0.4623282308959604;
    msg.stdev_pitch = 0.10250443295935552;
    msg.stdev_roll = 0.33953918880856804;

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
    msg.setTimeStamp(0.8409665776792099);
    msg.setSource(2275U);
    msg.setSourceEntity(240U);
    msg.setDestination(60044U);
    msg.setDestinationEntity(246U);
    msg.sig_wave_height_hm0 = 0.21459636978265428;
    msg.wave_peak_direction = 0.21229056314689743;
    msg.wave_peak_period = 0.177485012792425;
    msg.wave_height_wind_hm0 = 0.9590393465904223;
    msg.wave_height_swell_hm0 = 0.7580442257417079;
    msg.wave_peak_period_wind = 0.5618546958598604;
    msg.wave_peak_period_swell = 0.9212826381131187;
    msg.wave_peak_direction_wind = 0.5745243506954907;
    msg.wave_peak_direction_swell = 0.9404240499423554;
    msg.wave_mean_direction = 0.07613234402639946;
    msg.wave_mean_period_tm02 = 0.6398333061809485;
    msg.wave_height_hmax = 0.6480763055171553;
    msg.wave_height_crest = 0.08092549508754676;
    msg.wave_height_trough = 0.206336142197991;
    msg.wave_period_tmax = 0.19860516935036931;
    msg.wave_period_tz = 0.2969344784046284;
    msg.significant_wave_height_h1_3 = 0.304821165769967;
    msg.mean_spreading_angle = 0.19520462137243688;
    msg.first_order_spread = 0.8407417957480846;
    msg.long_crestedness_parameters = 0.034035882484268254;
    msg.heading = 0.3349582192815912;
    msg.pitch = 0.468741623286116;
    msg.roll = 0.44880971561956884;
    msg.external_heading = 0.06261263561913055;
    msg.stdev_heading = 0.1387039828691945;
    msg.stdev_pitch = 0.2899560146673057;
    msg.stdev_roll = 0.3302359153100103;

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
    msg.setTimeStamp(0.41875771469351486);
    msg.setSource(45706U);
    msg.setSourceEntity(43U);
    msg.setDestination(15882U);
    msg.setDestinationEntity(21U);
    msg.name.assign("MTNCCXVZBSKIHWLGAKZAOIJDOKQYAANSBEPSHKHVTPBORDBGUGYLHHIVGWFRQZZQTUJVMZJCU");
    msg.value = 238U;

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
    msg.setTimeStamp(0.5380105259021398);
    msg.setSource(18856U);
    msg.setSourceEntity(80U);
    msg.setDestination(28629U);
    msg.setDestinationEntity(231U);
    msg.name.assign("AIXBOUMZJGIZAAGLHDAIXRCHNNFGUTBPYBMOZQGSTOZUKZSLDMMBZWYESIQMYYQTQEYEXOXAVWMEWFDULSCCFDGDRRVOBYLTWBKI");
    msg.value = 69U;

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
    msg.setTimeStamp(0.4647187098803529);
    msg.setSource(55657U);
    msg.setSourceEntity(14U);
    msg.setDestination(80U);
    msg.setDestinationEntity(221U);
    msg.name.assign("BADVJDRHGOBYZCEWHKRAPHRRSBEHPUINRXLNUXZAFHDCFCGOWEHRDAEMJBMOGDCACKNYIFKJKVNTPLWCXBILFUYLPMFJKZWVMTIUZOVGRVMOJDTRHTIKBIMOSSSZEKUIAYSIVSETWLSZQWQTYVEIJUHRSXGWPYQJJZXLBHTQIBOXCMKQVJKCLLWYOPLBAQPDJGFQPNUBGQFSUZCTLCXONAAFWHDNNFSTQMKGUMODZVRNYXEDPXMEUGFAGYE");
    msg.value = 177U;

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
    msg.setTimeStamp(0.610623889672089);
    msg.setSource(27711U);
    msg.setSourceEntity(227U);
    msg.setDestination(47449U);
    msg.setDestinationEntity(3U);
    msg.name.assign("QXEXSSCSGLLULRWELYGULKAOOPTOOTQMRVRTOEWQGEIPAMCUDOWWJGNIBKXEFNFRIPSMLZK");

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
    msg.setTimeStamp(0.5408026730625487);
    msg.setSource(47453U);
    msg.setSourceEntity(44U);
    msg.setDestination(44364U);
    msg.setDestinationEntity(185U);
    msg.name.assign("RTMLQWYKUYWZOYTQZUZXOIHHLKLVCNHFFJKJVUBCSCGGLJIQLZUBATNAJNTPVDEVLDHUJWXBXMYZIODEKAQCR");

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
    msg.setTimeStamp(0.20154513471049995);
    msg.setSource(49015U);
    msg.setSourceEntity(214U);
    msg.setDestination(50519U);
    msg.setDestinationEntity(17U);
    msg.name.assign("IDTHIJRNUCDYRPMAYLXVNEXBZIDVGVUFACQRZSDVPTYDYVPKGGBKWQTHKWMLHGVKPCOYTKWMSOBRNGAUFCSABIUCFMUJHEOROWNLISXAFWOOKAKUBOTXPPFOSOJQHYCGKRVAUQSBCSUZHQMLZTENABZSIUNIPZNUQPZJPMWQMWYDFJHWYX");

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
    msg.setTimeStamp(0.4100338079897914);
    msg.setSource(42651U);
    msg.setSourceEntity(214U);
    msg.setDestination(35453U);
    msg.setDestinationEntity(120U);
    msg.name.assign("TUSHLTKUTJRRMIYIWGDBXOCZXWFZMDDJRGCAANFHRCAAVCKVJYWUMFYHNOVAESIGUNXFNLRLHKKZGIYFARQFEBZOUJVZECSDWVKEHBTGOGVWSJQNPKUREXKBEPOZXTGLCLFFJISGSUGZYQIUVRFXHBG");
    msg.value = 32U;

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
    msg.setTimeStamp(0.3493967580363877);
    msg.setSource(60909U);
    msg.setSourceEntity(159U);
    msg.setDestination(24633U);
    msg.setDestinationEntity(36U);
    msg.name.assign("UHFOITUGNZTUEMEUMIZHKHLXZXJHNIEZYKTXVMZXVQXJECGDU");
    msg.value = 60U;

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
    msg.setTimeStamp(0.5050171456374166);
    msg.setSource(32083U);
    msg.setSourceEntity(18U);
    msg.setDestination(5366U);
    msg.setDestinationEntity(124U);
    msg.name.assign("HLZOXLTVNHRAPYLKWZDGINCEFVBZUZVNMNUNDURYUNBIRDPOGETOXFGZVQGBJIHLXOGUGNNRLGTLBJEYXYESQIVKKVQYW");
    msg.value = 65U;

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
    msg.setTimeStamp(0.13444105201412115);
    msg.setSource(50683U);
    msg.setSourceEntity(231U);
    msg.setDestination(42320U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5901330847850711;

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
    msg.setTimeStamp(0.4155744673593674);
    msg.setSource(11212U);
    msg.setSourceEntity(15U);
    msg.setDestination(45818U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5046588622587618;

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
    msg.setTimeStamp(0.5998030604006971);
    msg.setSource(11656U);
    msg.setSourceEntity(102U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(170U);
    msg.value = 0.5749457656825521;

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
    msg.setTimeStamp(0.877659888624453);
    msg.setSource(19073U);
    msg.setSourceEntity(134U);
    msg.setDestination(22760U);
    msg.setDestinationEntity(106U);
    msg.value = 0.6872310993718861;

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
    msg.setTimeStamp(0.058060025899858925);
    msg.setSource(50187U);
    msg.setSourceEntity(93U);
    msg.setDestination(30561U);
    msg.setDestinationEntity(6U);
    msg.value = 0.45147589725924653;

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
    msg.setTimeStamp(0.778432619010761);
    msg.setSource(11538U);
    msg.setSourceEntity(142U);
    msg.setDestination(17314U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7236003506828383;

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
    msg.setTimeStamp(0.9746909111673651);
    msg.setSource(35118U);
    msg.setSourceEntity(184U);
    msg.setDestination(53500U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5083683092230522;

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
    msg.setTimeStamp(0.3869409505850465);
    msg.setSource(38271U);
    msg.setSourceEntity(65U);
    msg.setDestination(34092U);
    msg.setDestinationEntity(34U);
    msg.value = 0.3206332487684299;

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
    msg.setTimeStamp(0.3694175500893718);
    msg.setSource(5754U);
    msg.setSourceEntity(108U);
    msg.setDestination(41567U);
    msg.setDestinationEntity(54U);
    msg.value = 0.512655053944072;

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
    msg.setTimeStamp(0.4742037463691634);
    msg.setSource(20794U);
    msg.setSourceEntity(159U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(49U);
    msg.restriction = 237U;
    msg.reason.assign("OTEXTGGLGXKWZCAIGTEXMJEOORTWPNRPSZMGVKNHCZNDFKBMIEQVHLASNVMZDLSDBXWXAMAPWPPFQPIYQKGDCOSKQYLSJBJRNRFJYWFECCJHUYQDUXFVLZKRXIBVKPUMDKMJIVYFFK");

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
    msg.setTimeStamp(0.9340170968776841);
    msg.setSource(14591U);
    msg.setSourceEntity(200U);
    msg.setDestination(51688U);
    msg.setDestinationEntity(79U);
    msg.restriction = 109U;
    msg.reason.assign("ROPXVSOSQFRLWTFJWQYQYKWIOPZADRADZJDFXFCWMJOYJBORFIMRPCDHQAZYRRGMOIUPGVNFQCTDUOKPBNIZHKMPUQIBEVFBANLN");

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
    msg.setTimeStamp(0.3652744905302189);
    msg.setSource(14778U);
    msg.setSourceEntity(3U);
    msg.setDestination(49540U);
    msg.setDestinationEntity(226U);
    msg.restriction = 5U;
    msg.reason.assign("APKVZDZRZFJQBCXMOGEQAIILHRKRCPVYTSLBFCHUMZIYRTUSAFLJNG");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.389517520190516);
    msg.setSource(63069U);
    msg.setSourceEntity(102U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(203U);
    msg.op = 68U;
    msg.version.assign("STBQMUTPRBVDDGYFDBHKETMVCXGSKKRFGTKWSAVVZSVNAMXOKVDIRXALOIFCQWTJERENWWHIRYSJJKHLEXNOQYUIOPFLVGOMHZWCPBVUORBBQHWZULQDXTUIRLUXCYNNCDZIOCQVOFFAYAMFNMHGWJLFLZWCIXSIHJMZUBPYHBAXNPKNKNPZKOAAYDKEGREHBGPFLJCPOGEPMJPICZUNLSF");
    msg.description.assign("CCFPIHIJRPLGHDNINSUXZAQCYPYKX");

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
    msg.setTimeStamp(0.14509075091839296);
    msg.setSource(25867U);
    msg.setSourceEntity(207U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(220U);
    msg.op = 138U;
    msg.version.assign("FDYANJTZDILJBNOLLCTDSWVAQFKZDWLDFBIVOZDRGEWRSQTYTIBFWBIIBJIYSMEHCNTVEJGRTZMIGEKXFBJNQPYWONUCIQOALHEUQZBXXCRMUSH");
    msg.description.assign("XJJOQUQPLLCHDOAGZVINPVYCRAYPZSKGGXCWFHKYUYTC");

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
    msg.setTimeStamp(0.38468852521631336);
    msg.setSource(39909U);
    msg.setSourceEntity(189U);
    msg.setDestination(7754U);
    msg.setDestinationEntity(6U);
    msg.op = 98U;
    msg.version.assign("YVZZISLDQDSLCUAWVSMGPGQTSORGWMNPZMAGYTUKXOJVPTWFLGVLFOTQYAHQXOKBGEIWXPAGWABMDSKIBUPHYZMCYLNRQNHEECZHO");
    msg.description.assign("ZGVJBURQJPRYJZDWJKRBXEPVAFJWEIGMGLHBZYUZQFRKYUKARCKOMDKLKAVTNLTYEDLPHINNCHCEAGSFMHTGYJNXAPIKLUVXCYQJJWAVGS");

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
    msg.setTimeStamp(0.6983078292305633);
    msg.setSource(52378U);
    msg.setSourceEntity(248U);
    msg.setDestination(64792U);
    msg.setDestinationEntity(54U);
    msg.value = 0.567596144830087;

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
    msg.setTimeStamp(0.8318252417847567);
    msg.setSource(9774U);
    msg.setSourceEntity(214U);
    msg.setDestination(2482U);
    msg.setDestinationEntity(137U);
    msg.value = 0.6390870994728124;

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
    msg.setTimeStamp(0.39258455867129516);
    msg.setSource(59696U);
    msg.setSourceEntity(238U);
    msg.setDestination(49136U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5436354506401159;

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

  return test.getReturnValue();
}
