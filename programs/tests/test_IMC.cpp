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
    msg.setTimeStamp(0.3885741833720232);
    msg.setSource(51255U);
    msg.setSourceEntity(56U);
    msg.setDestination(17693U);
    msg.setDestinationEntity(77U);
    msg.state = 234U;
    msg.flags = 54U;
    msg.description.assign("GDUNZSKGJHAQVXDHLBGWMHZEAPWXAKVVDUCUXYVXPOBDDNITRRTBFNAHOPPBLJOOZPCUZBISGVTYECNERYYNNWKRLOVRCGXEUUMYNJQXVXKGXQJRFIRSPWETGIWMKKDCLRESNMOIARCPQNPBQQJDITRHVKSEFFEMGCAVGFEDYIQQBLQLACFAUSYOZKKZCOFATELOFIWHBTTHSZMBWYDKWFZQXJJZUHYSWAJL");

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
    msg.setTimeStamp(0.7695338261088082);
    msg.setSource(26867U);
    msg.setSourceEntity(134U);
    msg.setDestination(17314U);
    msg.setDestinationEntity(143U);
    msg.state = 143U;
    msg.flags = 168U;
    msg.description.assign("IFASCHKMLLPWWGXBNHE");

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
    msg.setTimeStamp(0.06542743267105411);
    msg.setSource(38718U);
    msg.setSourceEntity(122U);
    msg.setDestination(31614U);
    msg.setDestinationEntity(8U);
    msg.state = 29U;
    msg.flags = 164U;
    msg.description.assign("YMYAMZUGZMCKLTSJGXADINOMIMKCNFBOMNTCPXDLGRDNWHEFITJMZXXETLIWEWNVJJTABKIAJSFFPQLSSOSZXKAYJEZWNFIBVT");

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
    msg.setTimeStamp(0.48163768852537725);
    msg.setSource(32352U);
    msg.setSourceEntity(174U);
    msg.setDestination(59331U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.45219101984084964);
    msg.setSource(979U);
    msg.setSourceEntity(173U);
    msg.setDestination(14156U);
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
    msg.setTimeStamp(0.5792262333343702);
    msg.setSource(268U);
    msg.setSourceEntity(187U);
    msg.setDestination(1495U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.41630878173315167);
    msg.setSource(616U);
    msg.setSourceEntity(121U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(35U);
    msg.id = 194U;
    msg.label.assign("HWEBUZQBTGHQXZXWEUPIPCEYKLPAHNFQZORRIFKJYSUGCYRGVFBOCNSJPYATJQOVDHANMCHVQQILYSLKFCPJUOZAQXBYATRTYBWDZHHABPHKSNIJFUULKEIT");
    msg.component.assign("OPDHYKUJNPPJEWSRXFMMJCZFEWNIWRZOXAIILWIZZNBUQXGWGBVUDSCASWICAVKHLIZGBYUDBMQYRMHVQOBKJJQXAKLVFYFCRQGNOFRCTQGHIPQPRMXGUNVLWDYARLNTZFSQTCJ");
    msg.act_time = 48724U;
    msg.deact_time = 37233U;

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
    msg.setTimeStamp(0.6123394907966414);
    msg.setSource(49994U);
    msg.setSourceEntity(253U);
    msg.setDestination(58443U);
    msg.setDestinationEntity(46U);
    msg.id = 76U;
    msg.label.assign("JRLIJZUPYGOTUTXXFRYADQQUYMEGJDRNCJGHHCLFACLOMNIHIEOBWMIKGOVPAKSLSKRIJLCPTPAFUDWAKXNDVIWYYYMQEXBXFHNOWEAZHZUAFMDQREBXRYVSVPWLBORZPJQMMZQKHLSAJNZVCNSPBDIGHW");
    msg.component.assign("SZUASDPSXVVWQRIDXNCIIWENUTRIRQAOMLXUMKZMUUFAPOJHHEWCVKYNEUILPRJULCQAKCYVQDPLDXCDTHJBYDMZPUVNZEYTRRAEZGMNTANSQCPYADKFJHKBVXODLCFELATBBWGPEFHUSNBYRAGXOCFCZHBUSBFEIWQQOOJJXOORMEMTJJCLMTKGIMKTZIFFDWVLVOQTHZNHNAYMLQIXIFGKGSKGZFLYBVDNXWYTWVQWJWBPGHESYHXZ");
    msg.act_time = 7530U;
    msg.deact_time = 14048U;

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
    msg.setTimeStamp(0.840100198231093);
    msg.setSource(738U);
    msg.setSourceEntity(22U);
    msg.setDestination(41652U);
    msg.setDestinationEntity(217U);
    msg.id = 66U;
    msg.label.assign("AVIRFIOBNHHLQQGSHCZOIWGGRJVIOXLTWCMODCOAPWFANDQGHMKAFVNZUPSQHWTULZEAZXOCWKBTYZENKFQPDLMSDUSGRQGYBLTFWKTDEDUMGMUPLNWMQWAJYMJCHHYEILJYVXJCRXMBFXJAEGTELHSSLXEKFNDVFJ");
    msg.component.assign("GHSZTUPIKBDJCXROJWJLIASOTMFRAFEJRPVIZTOPXQAWSOKZCPBXTWLDQYHWDGPRRYCVMQBNKJYZOUWMDRULWHSADVPTFVYTXAXVCENDMSKKDJVLKEQNDSUNGRBRJDELTJOOULFYBHLHYHFHBGKXNHEMPIGLGWJHVSOIKNUEDSPMKCUFIXSYUAQNGMAGQTUAUMPCZTB");
    msg.act_time = 37623U;
    msg.deact_time = 46435U;

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
    msg.setTimeStamp(0.7821260685552417);
    msg.setSource(43139U);
    msg.setSourceEntity(227U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(149U);
    msg.id = 254U;

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
    msg.setTimeStamp(0.4313582895525072);
    msg.setSource(30372U);
    msg.setSourceEntity(74U);
    msg.setDestination(59506U);
    msg.setDestinationEntity(37U);
    msg.id = 236U;

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
    msg.setTimeStamp(0.3011291337471679);
    msg.setSource(21136U);
    msg.setSourceEntity(86U);
    msg.setDestination(47591U);
    msg.setDestinationEntity(215U);
    msg.id = 239U;

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
    msg.setTimeStamp(0.9355922114164081);
    msg.setSource(60382U);
    msg.setSourceEntity(135U);
    msg.setDestination(22450U);
    msg.setDestinationEntity(228U);
    msg.op = 34U;
    msg.list.assign("IYRRBCMOEEHDMMFXAOIUEEXRWDTRWAXMPUUXZKBQPORHGWYHOYVQZXRRVKANUZLWYHVUUMTJYKKJOWCOPCONQPVTNEGDXVBHIINDBSTHLLXFCJUFDOHJGZTDZQVESGKSFAYZHQKPPLCBQTENAZYOVKWUKNUSSLJSGUSVXZRVGMAAZCLDMYIODFJAGQEN");

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
    msg.setTimeStamp(0.4933809326560845);
    msg.setSource(52389U);
    msg.setSourceEntity(232U);
    msg.setDestination(54201U);
    msg.setDestinationEntity(118U);
    msg.op = 95U;
    msg.list.assign("MWWBMIHMJVSRAPLOTXARUKEOOTUJHWIBBFDNEBHQPTSNXXTENDJXLWSMQWYYUTQTVNIGGECSUIRQPWDWMDPPZRSKBIHVHKQSXXYLJGLWNAZULAMDMCREJNCOQVKSRJQENXGILJYFFEKIYPMXKEGZVYFFAPDYULQNZIPSKGUZAGBBFZUKHD");

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
    msg.setTimeStamp(0.034109063644291004);
    msg.setSource(5068U);
    msg.setSourceEntity(99U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(95U);
    msg.op = 131U;
    msg.list.assign("DCNQHVCIZSDGPOGJKMAETYLXTZSAMCGEOSJAMCGFYFRLTLGKDEXHCWHODIYATUVUYDXVWDKNEIRRBXMROIAJMAMBUSM");

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
    msg.setTimeStamp(0.4736274957973644);
    msg.setSource(53755U);
    msg.setSourceEntity(35U);
    msg.setDestination(16262U);
    msg.setDestinationEntity(220U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.19716737432504694);
    msg.setSource(30711U);
    msg.setSourceEntity(18U);
    msg.setDestination(8029U);
    msg.setDestinationEntity(160U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.16673760249006953);
    msg.setSource(32382U);
    msg.setSourceEntity(231U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(215U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.02701896987669361);
    msg.setSource(6609U);
    msg.setSourceEntity(222U);
    msg.setDestination(34222U);
    msg.setDestinationEntity(231U);
    msg.value = 170U;

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
    msg.setTimeStamp(0.4619427536559356);
    msg.setSource(8706U);
    msg.setSourceEntity(168U);
    msg.setDestination(43518U);
    msg.setDestinationEntity(25U);
    msg.value = 248U;

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
    msg.setTimeStamp(0.2878424179015864);
    msg.setSource(24293U);
    msg.setSourceEntity(131U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(145U);
    msg.value = 201U;

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
    msg.setTimeStamp(0.628249026999498);
    msg.setSource(54183U);
    msg.setSourceEntity(134U);
    msg.setDestination(19345U);
    msg.setDestinationEntity(185U);
    msg.consumer.assign("RWALRLZFAUSBPBIUXWQCYAHISOTRZEZJFPZRLJOWTVRCYJYEWVWFHAEQXOOUIOSVRKL");
    msg.message_id = 31636U;

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
    msg.setTimeStamp(0.14399518776924702);
    msg.setSource(44731U);
    msg.setSourceEntity(180U);
    msg.setDestination(2264U);
    msg.setDestinationEntity(43U);
    msg.consumer.assign("RSPRMKNWSFYWCJDUYLZTCGODIUSNELASMLBENKHJLZOECGYLRBJSMADCVFIAYVYFZYCGBDGOARCHELPZVKQPOBUUUONBFODQWWTN");
    msg.message_id = 48356U;

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
    msg.setTimeStamp(0.21062829261668703);
    msg.setSource(12325U);
    msg.setSourceEntity(182U);
    msg.setDestination(62677U);
    msg.setDestinationEntity(86U);
    msg.consumer.assign("RASXDOHXUVDWHEOCJFLWCTWTSNMVFBDFHBOHGYPUDBZCNOXAEFVAEAVGMISUIQUQZRDDWMNENMAHZCWAZGPYRQKPJPJRCZGUQFIKEBBXDUBAYGVALNKOELTPRLPCVKVIUHQPPTAIYMFRVMKFIGWTWSZVBKHQXQERSMWXLOFJYXYSDHLLMMITXTJILTGHUNSQYWNNLJCTDLQRSYBOWINKDRKSGBIZFZOJYMTERCOGA");
    msg.message_id = 54204U;

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
    msg.setTimeStamp(0.6436159152922536);
    msg.setSource(45994U);
    msg.setSourceEntity(169U);
    msg.setDestination(63972U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.6550885980996373);
    msg.setSource(29733U);
    msg.setSourceEntity(236U);
    msg.setDestination(34639U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.0771510259829622);
    msg.setSource(40342U);
    msg.setSourceEntity(247U);
    msg.setDestination(57168U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.7165809268008896);
    msg.setSource(34616U);
    msg.setSourceEntity(7U);
    msg.setDestination(57393U);
    msg.setDestinationEntity(177U);
    msg.section.assign("QHIVQNCAHNRM");
    msg.param.assign("EDVFGDKAIEUPVMXRQQBOGOLZCIXVSHFKDNYIQFEUIZSLZFXBKLEMUXZTMOWRNRBJUTONVDMATQIJSWDVAGFYOIGUTCKVBBGVQPNOXGRUCWUVRPZWPHNYXSMXIGZEMEIVCPWPJMAZLDILYKGHOOHNKE");
    msg.value.assign("UQXKGPDVATLSZHPYNZINGLOQFSZMVSRZTRRFDKEPGXJWWTCTLBFNEDXYPXJBUHSKFHVKCFRIFDDCDZKAUIEXTG");

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
    msg.setTimeStamp(0.3508615005029502);
    msg.setSource(43330U);
    msg.setSourceEntity(161U);
    msg.setDestination(718U);
    msg.setDestinationEntity(0U);
    msg.section.assign("WQGRIVRJFMUPVHRJNAQELMLYHZBAQIGRZZYPUPANVGMLXYCXVXIQKITCWERLDWUDZQSXOKKCZPSDUASOQNSLPOCJWRBTPAFOXINVRZKYVHJYPPXJDHXJURIZFWJMXUFKILHSPSGNVEHWSDMBTVKOFUNCEWLYOT");
    msg.param.assign("RTCSZKEJYPZCSYXIYZJRISTFFBKOWFWIUFFMQNWSYRCJVSFGDCXENFCHOPOQRJNZTZIESGVKXCUDNBPSANAZKIMLRPDHOLKMLBTJXUVHYOWYQLHDZVJSHBOXVWAZQWTGDCBCGQIRRXHUPOMIMFDIUWAHNFXEGCUAJOLQVEKLXPKTLEJMQVBLKXQVULZSMWTRWORGJNEKAATUZPVHPKJGEYADMSPHUYEI");
    msg.value.assign("WSHIXQQEWVXHQVEAFTSE");

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
    msg.setTimeStamp(0.2522693709839755);
    msg.setSource(52866U);
    msg.setSourceEntity(16U);
    msg.setDestination(17788U);
    msg.setDestinationEntity(150U);
    msg.section.assign("TMBQNCLFNABKJDYWRMPDDKUIGEEVVLYKVPXILTSUKSOFEBGIDJBGCZCDGHRLAUGWIECJXBUWLYPAVISRENZXGPQAZOKMQORVRBWRSLMHAXEMCKQXEGFOKCBDTBXWZZNAXXZEYHQUNW");
    msg.param.assign("MTHBCWNMICBHLFIZBCRWJPBJYFJWBUGCXRLZGSJTKTGIBXKADMWJLFHPWFUNVXQSSJMPOFOHSEMXKCNKRDHKAOKFSIVVRNGYYVOSURZRKEMSXDAHAVFCDOUGWYSNCVNTQIIWRAXZHOPLNBCJEKXIOGITJOQYZDLMHVVURVXFUGDGBIZDVHYPFENBMCWGSDIGLUNOPYEEPDBSJZLAYTAUNRQEUQTPTUKJLQMKEXLADWFWTQYZYHPZ");
    msg.value.assign("ZTCILJZIQHVLXSIYYQYMO");

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
    msg.setTimeStamp(0.3278116628090836);
    msg.setSource(9293U);
    msg.setSourceEntity(244U);
    msg.setDestination(35717U);
    msg.setDestinationEntity(69U);
    msg.op = 249U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IMQAHLAKBYCLDSTHGCSFGJUKMQWAWKHBULHRBVVIZARXBPUNINOYQOPZYUYXRPWXEUFPQFTT");
    tmp_msg_0.param.assign("ETNZLWZOACYZUEQIDPLEUCWUGFKBJLAPIWHQMKHVABSFKBAGRYEXTTMFIVXJGTSZNZCOYOROFQQTJFBGVBYWDNIQFDJJWAMBHSYPYFXHDKRPLYVLORHCCZXRMGQUUWEOCVCNMYTIYDZVWP");
    tmp_msg_0.value.assign("EDEBDFLWAMSJTHBVUGIVZTSEGAKQHXWPIJMDXCPFGFFBBGDQKLOQYTVLHHNDRIAXUPOYWZOYPYURHWENEKRRZAHUKULUMPDNQBPXSVTVIOBKESEVERASODMCFDCYMBMBCWAYGHTLC");
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
    msg.setTimeStamp(0.2562511738940382);
    msg.setSource(57740U);
    msg.setSourceEntity(116U);
    msg.setDestination(45934U);
    msg.setDestinationEntity(183U);
    msg.op = 69U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("DULTJRQTPWGSMLBXOQBKJMSEASDCHIZIFRBNWMZDTRKTWNCMESCHPZLXNBDNESPHZFIPKNVAOYCUCWAOLDXMZXYSWMIPUPIRQFKGKMXOXABEURJYLUOCAIDYTUQCSIADMHLTTYICRVOWEBUQGDNGVZHMYRQOAHWDQVXSFQMPHTZBOYARJFONJJZVXNGBGBUYTEYJLFGVKKQPGFJZFJEXGEVUIPLPAV");
    tmp_msg_0.param.assign("LSRFRVUDIFTPQTSSZMGAGIMWDNOQDZBRP");
    tmp_msg_0.value.assign("IWTNADULOYVBUEHCEYGFYSJRCFORWTUOGIRBUCHAHXZISCHAPNJGFSQOBOQGDWBZSMVMBLRVKOZBFRXVNTGJPPGADMPUINXITOWUHKAZIFMDJVQQAFHQHNNJQIRTCRQSWFFSVNQSWFMAXDAKIKPIMVOIHBKUEJLLBZDGVWMSPNJVLNBXHUATZKYEMOYWDGLOBETVDZHZPPYKCWUKELEJTRETXJYCCLCXXMZYRDXYKEASMQLRTQJPUCX");
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
    msg.setTimeStamp(0.37364137334506353);
    msg.setSource(50027U);
    msg.setSourceEntity(105U);
    msg.setDestination(653U);
    msg.setDestinationEntity(129U);
    msg.op = 197U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("PQHILZSCFFWGNQCAEPDZTOEWHWOWSQYMDFEYCJZRDRGDSAHIMUKVDETFCXLYZSWBPMXKD");
    tmp_msg_0.param.assign("AXWWAUVLUCIJOMHDNLJLGUPPLFNIUMYIPCTJCUPRODNWFGSVYWFHOQUXSMRTGYKQOZNEYBVZBTSSTXRDEXAISDVXBKTRBYJBVDYYXMMTXYVQKKTOPAZS");
    tmp_msg_0.value.assign("UWMIOAFJHNADLFVVZIYKVIXGCHMMKNZIQQKEPATPGXIFEQJWW");
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
    msg.setTimeStamp(0.4443468832948999);
    msg.setSource(10833U);
    msg.setSourceEntity(46U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(51U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.750359980191815);
    msg.setSource(64447U);
    msg.setSourceEntity(226U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(71U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.40640196411762897);
    msg.setSource(38281U);
    msg.setSourceEntity(71U);
    msg.setDestination(13110U);
    msg.setDestinationEntity(144U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.3448277254286235);
    msg.setSource(29956U);
    msg.setSourceEntity(139U);
    msg.setDestination(1437U);
    msg.setDestinationEntity(214U);
    msg.total_steps = 162U;
    msg.step_number = 191U;
    msg.step.assign("VRAAZULMFJSIMNCJZOQZJYJDLXGAUCKQFHCRMBJVXMIVOVEYITDJFPSYFOVCOBEPBJRPXXWGNGRFDJBHMVKUWBQTNRRLGRXEVDUEGVKLALKDHXHGYYOTMZUDZLWTZCWSEBANSZSHHLDXNTYHGDUCCNFQQPLSKSEQQQ");
    msg.flags = 40U;

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
    msg.setTimeStamp(0.7123712949343155);
    msg.setSource(13836U);
    msg.setSourceEntity(142U);
    msg.setDestination(55378U);
    msg.setDestinationEntity(181U);
    msg.total_steps = 239U;
    msg.step_number = 102U;
    msg.step.assign("KOMQJCKLMOBXTQLFIHFDMOUXSELOZUSVPIIU");
    msg.flags = 26U;

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
    msg.setTimeStamp(0.9373499531354038);
    msg.setSource(26517U);
    msg.setSourceEntity(174U);
    msg.setDestination(46920U);
    msg.setDestinationEntity(104U);
    msg.total_steps = 30U;
    msg.step_number = 78U;
    msg.step.assign("JPNYIPELDIDVYYBBVVDKXJJSSCSSURGFPUVBCVLXNWXGTHNAPPYAAUPTTHYKEHCITMWEKKOZTDWVRUDAAIYFOEQURJOTAINBSRFRKXZECHGHDSTOLNCPUJMBKBAOWGMPZNHCDUNSOXZIFMTQQWIQQFCYVGZHJBIPMEKEKYRLXGKDBGHXTSLAJZPQKFIAEQALJGRZSVZWHHLRDVNNG");
    msg.flags = 38U;

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
    msg.setTimeStamp(0.4727997166532112);
    msg.setSource(16312U);
    msg.setSourceEntity(254U);
    msg.setDestination(60825U);
    msg.setDestinationEntity(193U);
    msg.state = 143U;
    msg.error.assign("ETTSNGZNGDWZJCAXTHEYCFUJPJUSVJIGMJHLCBWMBQGUMIBIOABXAHOWZGVTSAYDKBIMPJYYCWMOLAXLGAAYIRUCOUIHBRUHLGSIGZJOVXXSQYDJCJTVDXLYXIVPPANVKVQBZHEQVFKLVRXOOQEPSDEWNQKRZDLTRQHKWHHMLPNDCDRBBMFUZTQRZYIFUENWTALQJYCWVKFPKTBUGPZAKNRMRWESFIOXWTRNEXKLUNPEFFCKSMQEGYSH");

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
    msg.setTimeStamp(0.5202482339724736);
    msg.setSource(25442U);
    msg.setSourceEntity(164U);
    msg.setDestination(65334U);
    msg.setDestinationEntity(12U);
    msg.state = 10U;
    msg.error.assign("QARNSXHLHPNXEMYAWHHZILTOKQYWFHAWYZALJCCYEINODOMTABCKQGVJPLMOROTFMDJEJTFRSNARQIBHYYMIEXKWVESDFZJUARLKPRZUIDZAICZMSTHOOGBVFGNIUDUUPUQCSMRVBXLGTQZQHCXWBHISVTUNXCORGIBJWMRSGEOMPLHXQCBRTCGNKPUVNDJUCEAXYJKQFGLGKXQUJFEKOFPBGNTYWJV");

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
    msg.setTimeStamp(0.018497168035875422);
    msg.setSource(33248U);
    msg.setSourceEntity(34U);
    msg.setDestination(6003U);
    msg.setDestinationEntity(6U);
    msg.state = 105U;
    msg.error.assign("FNHTDLMCHYUKTXTVFTASMGECCIFDQIDFAVQZMUGMLUVEWJSZUMIBJZCNQMXETXSPPGHLQRXGHAWLHNBUPLTYOHJWDKRDOVQGVPFIJOMZZJWRNQNYKOEIXRHRLCQKOBPZUOXSEPDBAJQRIGBJZNBUOXVGXZUCDCLIWNIFBADBOUVWMGSLPARLLNOYWPFPXETYSSNFHIWKVDSXEWZYKARFEGAOVQTCBJEYSICJCKPGMDEVJWKYAZSNR");

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
    msg.setTimeStamp(0.34087643192261985);
    msg.setSource(32412U);
    msg.setSourceEntity(112U);
    msg.setDestination(30093U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.2565375200992218;
    msg.lon = 0.024121801321574043;
    msg.height = 0.4035271261661497;
    msg.x = 0.4023618243536905;
    msg.y = 0.5146219753880512;
    msg.z = 0.2018503190985299;
    msg.phi = 0.03933879579973587;
    msg.theta = 0.472393523660084;
    msg.psi = 0.9252708704938928;
    msg.u = 0.223773375246764;
    msg.v = 0.24704610310871;
    msg.w = 0.7745622219985249;
    msg.p = 0.16400209276440014;
    msg.q = 0.6200506854316705;
    msg.r = 0.26919045898471416;
    msg.svx = 0.8737655654806296;
    msg.svy = 0.5098292355044884;
    msg.svz = 0.5056268088784543;

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
    msg.setTimeStamp(0.2181965784817268);
    msg.setSource(47668U);
    msg.setSourceEntity(149U);
    msg.setDestination(17661U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.45279644216332127;
    msg.lon = 0.39438427637090023;
    msg.height = 0.2705468999990507;
    msg.x = 0.6826846044473077;
    msg.y = 0.30122365912984783;
    msg.z = 0.43621019072198197;
    msg.phi = 0.7688418506230337;
    msg.theta = 0.09284136911640373;
    msg.psi = 0.6969075309945058;
    msg.u = 0.08432839068957376;
    msg.v = 0.16196190828980983;
    msg.w = 0.5268505211557052;
    msg.p = 0.5801094094270542;
    msg.q = 0.5043779827592851;
    msg.r = 0.4751537188671259;
    msg.svx = 0.9379118258625033;
    msg.svy = 0.7587151158863656;
    msg.svz = 0.9508892451145519;

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
    msg.setTimeStamp(0.5182222813056009);
    msg.setSource(16099U);
    msg.setSourceEntity(204U);
    msg.setDestination(17830U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.3482192866861199;
    msg.lon = 0.2400405088729861;
    msg.height = 0.151034358681146;
    msg.x = 0.537638139572123;
    msg.y = 0.3070088182626547;
    msg.z = 0.9509365016291703;
    msg.phi = 0.471399136206893;
    msg.theta = 0.3779708265220064;
    msg.psi = 0.4669396642144805;
    msg.u = 0.5508066636648143;
    msg.v = 0.43569995450977406;
    msg.w = 0.7341598441286594;
    msg.p = 0.8470418605196334;
    msg.q = 0.03883514671225452;
    msg.r = 0.842914387339779;
    msg.svx = 0.9571936812502586;
    msg.svy = 0.03437513640405576;
    msg.svz = 0.20888354759126604;

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
    msg.setTimeStamp(0.011652642815555891);
    msg.setSource(7287U);
    msg.setSourceEntity(165U);
    msg.setDestination(65444U);
    msg.setDestinationEntity(182U);
    msg.op = 161U;
    msg.entities.assign("CAKAYGHHFLRICUWDNWDUOQIZJQY");

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
    msg.setTimeStamp(0.45445457749281915);
    msg.setSource(54535U);
    msg.setSourceEntity(239U);
    msg.setDestination(56395U);
    msg.setDestinationEntity(186U);
    msg.op = 64U;
    msg.entities.assign("PPFXNLWAMFOQYQXDNTSZBEQFUBLZAEOKNBEVVHYOCUPDHGAGDWUWJMMEATQYLDDMQVTGZYSQHWNCCHP");

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
    msg.setTimeStamp(0.11573067756247402);
    msg.setSource(62246U);
    msg.setSourceEntity(240U);
    msg.setDestination(14258U);
    msg.setDestinationEntity(20U);
    msg.op = 222U;
    msg.entities.assign("OURUCLDWJXPWZPRFJYDYCPURBZEEPIAKXGBTINNXTAAFCUJNGTWVHBBFTQXSBWZSIVRASGFHVYFHBNUJOEUEYIIQIINTHYGZMCZHRPEQSNPZLYYVSKACPVBQVMMHGJVOLNQONSBZWIDHLGEQUZMQWTRUOJMLGDLAZXOCISTFTFEPJSWNWEMQGCCHQYAYWXWMGXRDKOXDORSXJIQPLFTDMGLOZJCXLJVUKRFBEFKKAMYMOU");

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
    msg.setTimeStamp(0.8663151809992331);
    msg.setSource(9777U);
    msg.setSourceEntity(51U);
    msg.setDestination(3972U);
    msg.setDestinationEntity(107U);
    msg.type = 226U;
    msg.speed = 13485U;
    const char tmp_msg_0[] = {-92, 47, -115, 2, 118, 4, -30, -96, -2, -22, -46, 13, -47, 70, 29, -127, 44, 12, -82, 36, -4, 59, -13, 57, -99, -87, 1, -58, -106, 0, -116, -48, 43, 95, -48, 2, -10, -24, 11, 20, -76, 78, -88, 81, -57, 123, -85, 30, 96, 66, 104, -30, 68, -72, 97, 79, 99, 126, -64, -25, -97, -51, -110, -80, 54, 50, 76, -14, 22, -40, -8, 1, 91, 46, 94, 54, 63, 121, 37, -122, -17, -122, 29, 43, 107, -15, 91, 7, -39, 64, -89, 86, 78, 102, -28, 12, 76, 100, 3, 40, -10, -18, -75, 33, 18, -126, -67, 8, 116, -46, -55, 72, 89, -2, 22, 108, -94, 111, 93, -122, 19, -16, -12, -54, -120, 113, -48, -75, 106, -12, -95, -41, 89, -33, -58, 3, 120, 58, -112, 26, 37, -86, 75, 123, 85, 116, -105, -92, -102, 71, 5, 77, 38, -63, -100, -114, 114, -126, -1, 61, 4, 91, -93, -27, -94, -25, 121, -9, 37, 98, 54, -60, -85, 31, -86, -119, 68, 82, -43, -97, 83, -37, -16, -125, -14, 84, -97, -114, 29, 47, -79, 41, 66, -115, 120, 82, -7, 109, 14, 121, 55, 71, -6, -53, 7, 64, 49, -34, 40, 20, -4, 67, -69, 17, 81, 118, 74, -49, 94, -34, 102, 80, -17, -124, 34, 71, -59, -55, 55, 55, 53, 40, -106, 86, -12, 7, -102, -27};
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
    msg.setTimeStamp(0.18155166118037613);
    msg.setSource(42814U);
    msg.setSourceEntity(29U);
    msg.setDestination(56493U);
    msg.setDestinationEntity(33U);
    msg.type = 204U;
    msg.speed = 20321U;
    const char tmp_msg_0[] = {-40, -38, -90, 98, 69, -15, 11, 33, -101, -77, -1, -27, -35, -90, -38, -106, -5, 72, 69, -41, -40, 27, 54, -45, -82, -8, -123, 96, 84, -16, -80, -32, 56, -62, -48, -60, 3, 67, 84, 77, -111, -49, 92, 97, -119, -19, -19, -117, -56, 23, -45, -84, 55, -24, -10, 118, 95, -81, 75, -77, -63, -45, -26, -41, 86, 15, 33, -83, -100, -112, 33, 115, -11, 38, -60, 51, -30, -19, -7, 10, -64, 81, 16, -112, -114, -1, -126, -28, 74, -109, -23, -47, -11, -97, -17, 6, 108, 65, -21, -70, 7, 85, -61, -4, -1, 31, -15, 37, -50, -32, -95, 9, -72, -16, 70, 49, -87, 44, -22, 88, -61, 69, -24, -53, 87, -50, 6, -92, -9, -73, -111, 24, -84, -112, -50, 44, 115, -16, -12, -83, 3, 71, -118, -75, -4, -110, 51, -36, -1, -66, -121, 72, -4, 86, -22, -41, -55, 65, -26, 48, 39, -39, 99, 7, -97, 40, -70, 5, 119, 59, 56, 48, -123, 58, 69, 73, 87, 56, 41, 110, -6, -109, 98, 82, -9, 82, -125, 92, 119, -20, 29, 58, -113, -50, -125, 42, -107, -98, -124, 49, 31, -3, -58, 25, -76, -110, 113, 71, 47, 110, -41, -40};
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
    msg.setTimeStamp(0.29967744162788923);
    msg.setSource(20983U);
    msg.setSourceEntity(125U);
    msg.setDestination(64406U);
    msg.setDestinationEntity(136U);
    msg.type = 187U;
    msg.speed = 30024U;
    const char tmp_msg_0[] = {61, -128, 21, 61, 44, -49, 51, -117, 59, 33, 2, -86, 17, 98, 74, 31, -26, -124, 48, 40, 108, -50, -47, 104};
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
    msg.setTimeStamp(0.9077106796199856);
    msg.setSource(34228U);
    msg.setSourceEntity(12U);
    msg.setDestination(26384U);
    msg.setDestinationEntity(96U);
    msg.available = 3289467209U;
    msg.value = 205U;

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
    msg.setTimeStamp(0.11114643809340197);
    msg.setSource(4269U);
    msg.setSourceEntity(216U);
    msg.setDestination(50388U);
    msg.setDestinationEntity(162U);
    msg.available = 501240305U;
    msg.value = 78U;

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
    msg.setTimeStamp(0.3720147255297558);
    msg.setSource(8442U);
    msg.setSourceEntity(250U);
    msg.setDestination(9796U);
    msg.setDestinationEntity(2U);
    msg.available = 3065613863U;
    msg.value = 226U;

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
    msg.setTimeStamp(0.6665149869408917);
    msg.setSource(25424U);
    msg.setSourceEntity(148U);
    msg.setDestination(65132U);
    msg.setDestinationEntity(15U);
    msg.op = 95U;
    msg.snapshot.assign("VZVZRTXYSREZAXYWLOZXHVDDXWCBHNCGJFPHWFSWAWNJBABUIUSIPBIKZMSKFIIQXHCIMCCOEKQLGBPPJPGDSYDRMDPATSNVJGUTCFPCZVWQYEGDIRSVLTGTRVKIYFXBQKXNNBCWLKLRLFVEOEDQQPFKOEHONWAOYAARUHWERQQMVTNACUXHZFLBHMUONTJHGZGJJYSFOBMDMKKUOMDAZKINIFLSMEWHLMLGASXYJ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 22631U;
    tmp_msg_0.lat = 0.05574929843926968;
    tmp_msg_0.lon = 0.813724692082078;
    tmp_msg_0.z = 0.9853369904768562;
    tmp_msg_0.z_units = 193U;
    tmp_msg_0.speed = 0.7679639600202446;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.roll = 0.6910771806880688;
    tmp_msg_0.pitch = 0.7374808197526961;
    tmp_msg_0.yaw = 0.4130908889853745;
    tmp_msg_0.custom.assign("VMUUFXQYTQYESVCOTVZWFTALPFLYSUJLGAIIZRJAJSKBYCFMPKFECDNTUGSKXKIVPNGGEHFEJAWNVXWDDXPGEBNWPBRSSTCMUZJPHDYTGONJBGAMGYCRLNNHCYPJJUJIVZILQWNQNHXSAHDXTHDKLOOZZEAZKRJWQIMBBEOQMSOZWZVRTYLOQIUARTCFUYKBDGXILXVQFFBHVR");
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
    msg.setTimeStamp(0.6800358391330056);
    msg.setSource(24098U);
    msg.setSourceEntity(98U);
    msg.setDestination(42749U);
    msg.setDestinationEntity(126U);
    msg.op = 210U;
    msg.snapshot.assign("XULKKASSDQGQKVJNZPFFEVUFCXQCYXZPNKRFUZPGJTYPCADLEHLUXGLKEUZSLHDWTGXBUOEFZDYQURAKBFNINNJHTDHZWBBQMMZWEEOHUAHPASMLCOBOKYOYCNIWGQPWTMCDIMYKNQIHGXYORSGTMETBAONPSGCALXZJVWLXTFINKBUVQNDVTE");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.6869333559947017;
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
    msg.setTimeStamp(0.9738733416293414);
    msg.setSource(35131U);
    msg.setSourceEntity(162U);
    msg.setDestination(25656U);
    msg.setDestinationEntity(244U);
    msg.op = 152U;
    msg.snapshot.assign("KUTPMBLQQLEJGDAVIYXQXDPUTPKVDWPLBZUYQEEDYFMTIUIAXVAVSRHJHRCOKRMWMWLIUQCSPUNVCZMCWRFIMCO");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 94U;
    tmp_msg_0.value = 0.5957350298219733;
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
    msg.setTimeStamp(0.39193879998638037);
    msg.setSource(41284U);
    msg.setSourceEntity(17U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(232U);
    msg.op = 95U;
    msg.name.assign("KWFBAXLNZGZHJXTMQDBUEKHOSGMWHSWMVZKXMIMQKVRENMHSLZCXJOQGVCPFCQIKTCRRJYPNQWVNI");

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
    msg.setTimeStamp(0.46296371902143374);
    msg.setSource(62577U);
    msg.setSourceEntity(249U);
    msg.setDestination(22407U);
    msg.setDestinationEntity(116U);
    msg.op = 56U;
    msg.name.assign("ABJFKBLXSSKMYHRCSNMZAJWHUZOJDWERCDTYYAELNKTPISQHVYBGOCDFWEMUXSAZOBTZMGEAKZNRTHFNLLTTFGFG");

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
    msg.setTimeStamp(0.5429064571406181);
    msg.setSource(51494U);
    msg.setSourceEntity(33U);
    msg.setDestination(9502U);
    msg.setDestinationEntity(154U);
    msg.op = 219U;
    msg.name.assign("MBBHIPNTUDISZMEJUWLHXRZQCYVDZJVYJDHWUYFTCUBZMPATTMDBEHSUJGTOULXKJGMLUNUNEJHKGKPLXOJGFELVGTBFYSIXYXWWQCJUAFRWQTJGSDISCZIKQABLKDWKWVDLEG");

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
    msg.setTimeStamp(0.84047606317423);
    msg.setSource(21493U);
    msg.setSourceEntity(132U);
    msg.setDestination(10042U);
    msg.setDestinationEntity(189U);
    msg.type = 83U;
    msg.htime = 0.44578354265393394;
    msg.context.assign("REJRXLHLWDPNKEQCRZCEXQRGGUVQXQNDCTEYUJPBAIIPGRJMEXBWQOZYCOZHOXQQRUHZMZHPAISFUYAXDJCMQHVTMSXMVQWVNKYIIOYDSNAZ");
    msg.text.assign("WYPVAGQTAQGMHZVDTWCHHCIBGDUHRROYRQKIUAHBDVPWSGGAXTOFSMZXIDEHSPYYDBKIAWUGSEMJNODLVETLMIBEDRZKXGVFSTVSNCSLMYLLKMJZKNUYIQHRYXWFMQCZSXBGRSHVUWJTTTERCAOJGCUIBPFOFKWMZEKIJGTZXOXQEUPQNFCIJHLXUWJYFQKHFAYPOUFBMPZPNRCJTPWOECDVIBJKVUZOMWZL");

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
    msg.setTimeStamp(0.07930464826714989);
    msg.setSource(41279U);
    msg.setSourceEntity(77U);
    msg.setDestination(19531U);
    msg.setDestinationEntity(223U);
    msg.type = 187U;
    msg.htime = 0.31843473489049057;
    msg.context.assign("HRVJZOUTFXETMUACGZRTIKBWZLZKTIXFXAISQWOUPUIOUECBYLZKYBQZWGFGWTHUPL");
    msg.text.assign("IWZIFJZMOCMFHCNYKMSUHUNOTTJTKZXQCNDLSBWKDGRHPDTXTPPIBUXLVQDXNQHNSVXCCLIAEBPPCDPYDTUAUUNOXGVGYBSXAHUXVVJYOYPPHMAZSLROZOAXKJBWDYEFETARZQLHOTWQBGNOPMROSZMSYDAKZFQIKGMGYLNRESGDHFYJIWTQEIWWEBJKLDMIUEAGQE");

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
    msg.setTimeStamp(0.5831110352755958);
    msg.setSource(45414U);
    msg.setSourceEntity(206U);
    msg.setDestination(45746U);
    msg.setDestinationEntity(58U);
    msg.type = 102U;
    msg.htime = 0.6284119627943265;
    msg.context.assign("SVUAKBOGRLAXCJVNRMLIQQVOKOZCOVRBRLXZZXZT");
    msg.text.assign("MBXIOAZVQEXPYTHMEMULBMFSFIQMYRGZBOVDOFPVWUCVAOQUKWRDRMSGLPNPQTINXAXIFUWHBPDMFUSUGMQHWKHENCSQWYYFEBZRKKJLINAUYLCQCONTOAUDTFNVHIJJHESJQFTJTCJNKCHDTTPKAPXJICWWPEHNGIZKGGBDMKTDYELWQVVZBVSLBTLOHDXBCPURNOLDYAXCRJGWVOYZMH");

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
    msg.setTimeStamp(0.3675252341694224);
    msg.setSource(64606U);
    msg.setSourceEntity(88U);
    msg.setDestination(2886U);
    msg.setDestinationEntity(83U);
    msg.command = 196U;
    msg.htime = 0.07693879927229075;

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
    msg.setTimeStamp(0.15806851770362984);
    msg.setSource(28853U);
    msg.setSourceEntity(18U);
    msg.setDestination(17549U);
    msg.setDestinationEntity(19U);
    msg.command = 7U;
    msg.htime = 0.3202981638687872;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 223U;
    tmp_msg_0.htime = 0.5162960498101065;
    tmp_msg_0.context.assign("CHUPMBOHMTDFKHSMQQMCOVMVACLYTQLSJVUPZWGVSDKPXBRTLFNDDKDFXIPXRRMJRTTYVSEGREALVZPTUOWDV");
    tmp_msg_0.text.assign("VWMGNMDQRCMZQHJMWVGWNSFUAPIMRDSMZKYLEJVVMSLZFNOTCKLCOJOV");
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
    msg.setTimeStamp(0.7552913494616524);
    msg.setSource(39162U);
    msg.setSourceEntity(43U);
    msg.setDestination(32864U);
    msg.setDestinationEntity(43U);
    msg.command = 230U;
    msg.htime = 0.4368751225026972;

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
    msg.setTimeStamp(0.09437336120306117);
    msg.setSource(36190U);
    msg.setSourceEntity(42U);
    msg.setDestination(18813U);
    msg.setDestinationEntity(130U);
    msg.op = 45U;
    msg.file.assign("EZVSGRLIEPZGOWTMSIQGWMRCKSYCPJLAUVARLGYSPIROWBJSNFXWVBLZMYAMYPFHVBAPUXEXZGBGHJWDQBINMVPKMFFNTWDGFZRFOUCALKEALLEEYADVYXTJKIKJJOFTA");

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
    msg.setTimeStamp(0.9611083682520445);
    msg.setSource(1220U);
    msg.setSourceEntity(25U);
    msg.setDestination(43974U);
    msg.setDestinationEntity(12U);
    msg.op = 123U;
    msg.file.assign("KKKPWJENUJCYDHUUQZHHEERAEFNTMVPUKFZDTMQGGNBRTHYSCEIASKVQDNUSRYRISVQGGBCCDMAMXBKKYOAKOMWPBHOLIUXKGFSYLWUMRWVBSTLINS");

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
    msg.setTimeStamp(0.2074694176376597);
    msg.setSource(24302U);
    msg.setSourceEntity(34U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(142U);
    msg.op = 231U;
    msg.file.assign("SSGYUPEVLDZOVOYINGVFKJLAKBHPZBSAGBVCMZRGGUAYBJONJMXFOLFCEEWC");

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
    msg.setTimeStamp(0.520763852990441);
    msg.setSource(44325U);
    msg.setSourceEntity(170U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(65U);
    msg.op = 35U;
    msg.clock = 0.2551881447364016;
    msg.tz = -17;

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
    msg.setTimeStamp(0.13431717954374123);
    msg.setSource(58770U);
    msg.setSourceEntity(168U);
    msg.setDestination(21863U);
    msg.setDestinationEntity(35U);
    msg.op = 167U;
    msg.clock = 0.2499665772328552;
    msg.tz = -114;

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
    msg.setTimeStamp(0.7861090158148625);
    msg.setSource(21415U);
    msg.setSourceEntity(61U);
    msg.setDestination(43419U);
    msg.setDestinationEntity(171U);
    msg.op = 108U;
    msg.clock = 0.6562355503538825;
    msg.tz = 32;

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
    msg.setTimeStamp(0.21246088411356256);
    msg.setSource(16730U);
    msg.setSourceEntity(169U);
    msg.setDestination(52173U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.48838521616928154);
    msg.setSource(23850U);
    msg.setSourceEntity(221U);
    msg.setDestination(38524U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.24382020308307706);
    msg.setSource(1648U);
    msg.setSourceEntity(174U);
    msg.setDestination(31237U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.11425068081587197);
    msg.setSource(16617U);
    msg.setSourceEntity(129U);
    msg.setDestination(56264U);
    msg.setDestinationEntity(217U);
    msg.sys_name.assign("TUJBCTOKBBPEKMUJHCQEZFXBJXLYHKWEROWNIYAWBIDCWTISLVILNLDTFHMUGFQYIHAEQTRCELWBUVIEPZAVKXQKNANYJDSPZILPID");
    msg.sys_type = 78U;
    msg.owner = 43561U;
    msg.lat = 0.871320653462365;
    msg.lon = 0.6161177719701202;
    msg.height = 0.6692211246364296;
    msg.services.assign("ARZMELZHSRWTQDFCTEBUGJKCPBKNSXFCDKMWVJQOOJYFEBPOVTTMAFDVYVMIGPNTBQGSGHRILJHOYRAQNVBNUHEKLYZYXEIOBIMYTQKPOFDSKDBMZUTGZHVMPVDOSOLLBAUZYSWAKVQRSAWTCSUJDFEUTKRUVPNSEPJGYUMPMXHXPGHSOWTCHILQWONZXUAYLREVZXWFCHDRWQJXZNN");

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
    msg.setTimeStamp(0.4170208111418494);
    msg.setSource(18634U);
    msg.setSourceEntity(97U);
    msg.setDestination(57056U);
    msg.setDestinationEntity(186U);
    msg.sys_name.assign("KWZWGOVYSNWTMXLAUHXNYKJDVQVNWJDZCIQPNVLSAIODFGGLDKJUMFAFDSRTZPVEMOYTIQSUKRZSMHWISXEYMQVKWBGCVEJDMUAHZJFMJRGDBERKQHFJOUELREGOYIMAKRWUITPHBYLAEPVQBDPGIRYFPACGWCTXTNLTBSBYQJSCBOOTUCRBALHO");
    msg.sys_type = 59U;
    msg.owner = 10960U;
    msg.lat = 0.6566599891359136;
    msg.lon = 0.7015977078274843;
    msg.height = 0.9759079604390299;
    msg.services.assign("OUFLCTPLILXBXGDUEZSVMYRUCEGIHLHSZSVHVOWPCNOUQXROQTRNSNYWETAENCOZEHPOSPLVAGKRAFNIFDNEWIWRFXWJZIDCKBKRRFLMEVLYCIPGFURMUYRVWGBQFJZJWJGPPJCPGDYYJTUHELJHLPZKJSMCCHJKQITKMWZMVSYSNOGTZXEMSBBPBWUHVCMEADQUIABDIYZQXNJKYXNIRUQFXDQADHOABDAFKVSAKYVQBXQMMKXWAOL");

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
    msg.setTimeStamp(0.8643874914001759);
    msg.setSource(37038U);
    msg.setSourceEntity(201U);
    msg.setDestination(2505U);
    msg.setDestinationEntity(127U);
    msg.sys_name.assign("IBKCXBTLMNMNMNOGWFROBZKCIJYUMEUDTDJCVTHWWRQHLARVMMRLDXYKEHSEJNIWKPCPKVELNWKRPQXCRFTZEASMARXCZCUEVMAVFHZIVDJLDBEADFNXRI");
    msg.sys_type = 234U;
    msg.owner = 19729U;
    msg.lat = 0.36049155905198504;
    msg.lon = 0.7780686316355099;
    msg.height = 0.6259602675954538;
    msg.services.assign("KVPNAQRALIVJAYIULRFISFDJZCEGCJXUVAOEUJSBDGYGHHVQVPLUEODEXWPNMEADOHEPZGMFYNDXZTLPUFALX");

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
    msg.setTimeStamp(0.6786707430687601);
    msg.setSource(18308U);
    msg.setSourceEntity(212U);
    msg.setDestination(53439U);
    msg.setDestinationEntity(153U);
    msg.service.assign("RGSUJRRZYXQMZIHDJZMITTDFZKNJLHAUHLMCYIOWJAEQQKXKYJXLGMQQKKLDUNICLJRNWTSWEOEARJVBPHFCZBTMODSGPSXMYIBUYVOYGPGRYFURHMGNKPXQSCFFSTZEFIDIWNONADJOUNHUMWDNDTUGWVPQLPJTCATVIXIYCXOVQAESCLHOPPK");
    msg.service_type = 3U;

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
    msg.setTimeStamp(0.29151682798098355);
    msg.setSource(43848U);
    msg.setSourceEntity(221U);
    msg.setDestination(33749U);
    msg.setDestinationEntity(216U);
    msg.service.assign("PEZQHCEAFDVZHGFJUHXGETBXFRLETRJGRBPGDTYHIIUQZINMDTISAXUXUKABPLQFPZSSJOCWAZSDTQOAWDFRLTYSXQHPOIKYCYKVTJZPLSGNKNZTNMIOOCCHKDEHTWUXGRQVFIMJVUNHPUJACLCRWJSBIJSNQNBHVPAXKMOBWWDLUBCKP");
    msg.service_type = 217U;

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
    msg.setTimeStamp(0.9994471047313215);
    msg.setSource(27889U);
    msg.setSourceEntity(102U);
    msg.setDestination(64962U);
    msg.setDestinationEntity(119U);
    msg.service.assign("WDNSDUNCUSDWGLUMJWRVYOCGCEPAUPXKZAVCCFDDZZKHCVQCNQRBCOPOSVWNXTPJVREGFPEETXASGEZNWUFZLSISYBAANHGFRGHYFVHVXJFXWACTMPTJLBAYZPNYGMLBWUEXAAEKZNINOTBQQHLMBFOOWJRPSFHPLJYITK");
    msg.service_type = 41U;

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
    msg.setTimeStamp(0.9746226812805339);
    msg.setSource(15978U);
    msg.setSourceEntity(176U);
    msg.setDestination(12893U);
    msg.setDestinationEntity(152U);
    msg.value = 0.9067712665520784;

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
    msg.setTimeStamp(0.8351789920038263);
    msg.setSource(20161U);
    msg.setSourceEntity(110U);
    msg.setDestination(28717U);
    msg.setDestinationEntity(76U);
    msg.value = 0.4163803703834513;

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
    msg.setTimeStamp(0.8006494597097907);
    msg.setSource(15344U);
    msg.setSourceEntity(111U);
    msg.setDestination(422U);
    msg.setDestinationEntity(34U);
    msg.value = 0.4108251839171264;

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
    msg.setTimeStamp(0.45971392326068894);
    msg.setSource(28327U);
    msg.setSourceEntity(209U);
    msg.setDestination(35166U);
    msg.setDestinationEntity(82U);
    msg.value = 0.22361290142566226;

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
    msg.setTimeStamp(0.22648992368034482);
    msg.setSource(18825U);
    msg.setSourceEntity(17U);
    msg.setDestination(30392U);
    msg.setDestinationEntity(99U);
    msg.value = 0.898434773681039;

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
    msg.setTimeStamp(0.3276920996645325);
    msg.setSource(20544U);
    msg.setSourceEntity(213U);
    msg.setDestination(52153U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5998342710388769;

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
    msg.setTimeStamp(0.012033492700693316);
    msg.setSource(7623U);
    msg.setSourceEntity(40U);
    msg.setDestination(3434U);
    msg.setDestinationEntity(196U);
    msg.value = 0.9122332215178901;

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
    msg.setTimeStamp(0.61266083805195);
    msg.setSource(12879U);
    msg.setSourceEntity(221U);
    msg.setDestination(28261U);
    msg.setDestinationEntity(54U);
    msg.value = 0.8911566602898754;

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
    msg.setTimeStamp(0.583135381284375);
    msg.setSource(46946U);
    msg.setSourceEntity(55U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8926473784866531;

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
    msg.setTimeStamp(0.5974003062153551);
    msg.setSource(60780U);
    msg.setSourceEntity(201U);
    msg.setDestination(41213U);
    msg.setDestinationEntity(206U);
    msg.number.assign("PFHOTVWMHOTDSMWPKFIZSWHXRKUXXGZGJICHYAKWBGPLUJKVXCVONLLWNEEVRRQEGCOBRYYBQMPYDJWEMNMBZPNHSVESZQSPOXVCXSXLUKQLMVGIVDGCNPJTJFJLPTZWSYEFZJDJANFYRYHJHAITNZUBCQFEOMIEWSAUS");
    msg.timeout = 17309U;
    msg.contents.assign("TLCDDZNOHHKSAVRMEFLIAUVPXYUIFFBR");

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
    msg.setTimeStamp(0.12096517465563739);
    msg.setSource(51488U);
    msg.setSourceEntity(199U);
    msg.setDestination(47995U);
    msg.setDestinationEntity(71U);
    msg.number.assign("KTHJDAWRMTERLXYCQFEZQQMPSICWDFLBJCDSXCUTEMNXMKPAKINPPHGSDGOADHWSLUZXRSVVOUPGLARNMJNYHGUETGJTZULRBTTVVZSXOJDAGWSHBJZXTX");
    msg.timeout = 17504U;
    msg.contents.assign("YITSXKPWANVQXGEGRZR");

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
    msg.setTimeStamp(0.4681554161552852);
    msg.setSource(63325U);
    msg.setSourceEntity(215U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(187U);
    msg.number.assign("YKUATGQZTBFCKFUOBNWAOMEERAXSKVFYEMQBURURMJMGIKTJNOKCSGISHHTKCQDSLXPSPXBVOTJXQFZNDZHFMLUTZZFW");
    msg.timeout = 11035U;
    msg.contents.assign("MCNTMCPYBQGBJYLDGACRLPFYSAHXODTZWYEQFOLDXUFHGZOHA");

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
    msg.setTimeStamp(0.8094260220111129);
    msg.setSource(33077U);
    msg.setSourceEntity(125U);
    msg.setDestination(5315U);
    msg.setDestinationEntity(119U);
    msg.id = 52U;
    msg.range = 0.6084734130833085;

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
    msg.setTimeStamp(0.03367611253732372);
    msg.setSource(48104U);
    msg.setSourceEntity(184U);
    msg.setDestination(12965U);
    msg.setDestinationEntity(181U);
    msg.id = 17U;
    msg.range = 0.5227330962504272;

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
    msg.setTimeStamp(0.48547429526962815);
    msg.setSource(61354U);
    msg.setSourceEntity(174U);
    msg.setDestination(53457U);
    msg.setDestinationEntity(52U);
    msg.id = 115U;
    msg.range = 0.7550502143547047;

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
    msg.setTimeStamp(0.23356515701115466);
    msg.setSource(13970U);
    msg.setSourceEntity(2U);
    msg.setDestination(48119U);
    msg.setDestinationEntity(141U);
    msg.tx = 12U;
    msg.channel = 214U;
    msg.timer = 13439U;

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
    msg.setTimeStamp(0.08588161600471211);
    msg.setSource(5141U);
    msg.setSourceEntity(99U);
    msg.setDestination(16198U);
    msg.setDestinationEntity(212U);
    msg.tx = 155U;
    msg.channel = 102U;
    msg.timer = 36828U;

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
    msg.setTimeStamp(0.5235955145717934);
    msg.setSource(24925U);
    msg.setSourceEntity(221U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(125U);
    msg.tx = 60U;
    msg.channel = 193U;
    msg.timer = 20326U;

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
    msg.setTimeStamp(0.03438104780514739);
    msg.setSource(14889U);
    msg.setSourceEntity(37U);
    msg.setDestination(46357U);
    msg.setDestinationEntity(214U);
    msg.beacon.assign("EMQMNIUFZQCKWVROMAPASDISDLEYMBZTARZUHFHSVENWGBJIVZLMXCSNMPVTAZDRPYOJAVCSQOLQPXEPYTWUJGKPGBTCOBVKRKGQSKYQRUJZEOYCGZQHGOMHLWABADNCIXIHVZIYHUCMITXDRUVTXMEUDCFJWHDFPTOTESMRWACPFGADPJGWKFWYBKNDNSLJRKRUYHIXULRQAGHDKFINJQBBHOONNXZFKUVSTXJTYENSLVWXXOQLLBWLCE");
    msg.lat = 0.13511788587935858;
    msg.lon = 0.736447237924186;
    msg.depth = 0.6247415764252798;
    msg.query_channel = 174U;
    msg.reply_channel = 19U;
    msg.transponder_delay = 197U;

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
    msg.setTimeStamp(0.6591415105060594);
    msg.setSource(38360U);
    msg.setSourceEntity(97U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(70U);
    msg.beacon.assign("NOVMVZSKWSLUZWCDTGURHBAXMFDUHAPOVCILYUESZOHQRZETBCLLRMTONUFAIXENIEQTLOQGXFLNADJJTBCOIHWGPYVBLONZOWTNKCCMKGYITOBKDYWAKYHIDJJQBCVJ");
    msg.lat = 0.5887007686534518;
    msg.lon = 0.8133123120419116;
    msg.depth = 0.23713936485210985;
    msg.query_channel = 131U;
    msg.reply_channel = 128U;
    msg.transponder_delay = 9U;

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
    msg.setTimeStamp(0.8588677977798655);
    msg.setSource(52777U);
    msg.setSourceEntity(20U);
    msg.setDestination(7780U);
    msg.setDestinationEntity(209U);
    msg.beacon.assign("YOTRSCCABQNSNVHFLQUXDODJWCOXPNTAKVMZFOL");
    msg.lat = 0.32385770070005615;
    msg.lon = 0.8441442963114464;
    msg.depth = 0.5560976607397874;
    msg.query_channel = 116U;
    msg.reply_channel = 88U;
    msg.transponder_delay = 162U;

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
    msg.setTimeStamp(0.7325843185166584);
    msg.setSource(31054U);
    msg.setSourceEntity(180U);
    msg.setDestination(41903U);
    msg.setDestinationEntity(47U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.3086275807719713);
    msg.setSource(8874U);
    msg.setSourceEntity(189U);
    msg.setDestination(245U);
    msg.setDestinationEntity(39U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.4110185754208121);
    msg.setSource(65395U);
    msg.setSourceEntity(150U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(188U);
    msg.op = 248U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YKJVIJZNXFVOQYYNISRRBLQKBMPRULDGAJUKWBXGVEUTALEGXJBBPSPQWXVSAMQUHFRFVDBAGCNHFZDNRXWZHEEEVUVCMZXOUQXWLKRWUDNQKUXZNPGMLHPCFRNSFELZGCDMJPHEOJOZNRSHKYHTWPDYJ");
    tmp_msg_0.lat = 0.20217029688780885;
    tmp_msg_0.lon = 0.2015476015874076;
    tmp_msg_0.depth = 0.768022382367043;
    tmp_msg_0.query_channel = 123U;
    tmp_msg_0.reply_channel = 56U;
    tmp_msg_0.transponder_delay = 54U;
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
    msg.setTimeStamp(0.093429011260179);
    msg.setSource(35055U);
    msg.setSourceEntity(73U);
    msg.setDestination(17887U);
    msg.setDestinationEntity(71U);
    msg.address = 166U;

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
    msg.setTimeStamp(0.608312051365089);
    msg.setSource(17387U);
    msg.setSourceEntity(204U);
    msg.setDestination(56983U);
    msg.setDestinationEntity(63U);
    msg.address = 90U;

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
    msg.setTimeStamp(0.5756058549969283);
    msg.setSource(52666U);
    msg.setSourceEntity(87U);
    msg.setDestination(28816U);
    msg.setDestinationEntity(65U);
    msg.address = 236U;

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
    msg.setTimeStamp(0.5542535148408839);
    msg.setSource(39509U);
    msg.setSourceEntity(216U);
    msg.setDestination(32512U);
    msg.setDestinationEntity(25U);
    msg.address = 62U;
    msg.status = 180U;
    msg.range = 0.21463232577604774;

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
    msg.setTimeStamp(0.09041772499229017);
    msg.setSource(45963U);
    msg.setSourceEntity(58U);
    msg.setDestination(18896U);
    msg.setDestinationEntity(204U);
    msg.address = 37U;
    msg.status = 221U;
    msg.range = 0.9142662822141591;

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
    msg.setTimeStamp(0.8957040774458206);
    msg.setSource(2641U);
    msg.setSourceEntity(240U);
    msg.setDestination(15372U);
    msg.setDestinationEntity(65U);
    msg.address = 44U;
    msg.status = 46U;
    msg.range = 0.3802816337749374;

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
    msg.setTimeStamp(0.9261014731452857);
    msg.setSource(63512U);
    msg.setSourceEntity(38U);
    msg.setDestination(698U);
    msg.setDestinationEntity(229U);
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 105U;
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
    msg.setTimeStamp(0.4831331346484877);
    msg.setSource(61757U);
    msg.setSourceEntity(157U);
    msg.setDestination(38709U);
    msg.setDestinationEntity(182U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 144U;
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
    msg.setTimeStamp(0.702007151363715);
    msg.setSource(6002U);
    msg.setSourceEntity(31U);
    msg.setDestination(56160U);
    msg.setDestinationEntity(25U);
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.7685013861572967;
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
    msg.setTimeStamp(0.9496880327985197);
    msg.setSource(35249U);
    msg.setSourceEntity(39U);
    msg.setDestination(30382U);
    msg.setDestinationEntity(218U);
    msg.enable = 56U;

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
    msg.setTimeStamp(0.6168866483597659);
    msg.setSource(7110U);
    msg.setSourceEntity(5U);
    msg.setDestination(903U);
    msg.setDestinationEntity(100U);
    msg.enable = 147U;

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
    msg.setTimeStamp(0.1949496707624092);
    msg.setSource(36720U);
    msg.setSourceEntity(117U);
    msg.setDestination(33205U);
    msg.setDestinationEntity(34U);
    msg.enable = 34U;

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
    msg.setTimeStamp(0.48430564540322074);
    msg.setSource(28829U);
    msg.setSourceEntity(84U);
    msg.setDestination(1915U);
    msg.setDestinationEntity(170U);
    msg.summary = 246U;
    msg.level = 83U;

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
    msg.setTimeStamp(0.5015296245042169);
    msg.setSource(38430U);
    msg.setSourceEntity(199U);
    msg.setDestination(3292U);
    msg.setDestinationEntity(72U);
    msg.summary = 176U;
    msg.level = 182U;

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
    msg.setTimeStamp(0.3206662055626831);
    msg.setSource(47217U);
    msg.setSourceEntity(119U);
    msg.setDestination(1891U);
    msg.setDestinationEntity(59U);
    msg.summary = 220U;
    msg.level = 143U;

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
    msg.setTimeStamp(0.34810800458539826);
    msg.setSource(39402U);
    msg.setSourceEntity(128U);
    msg.setDestination(31013U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.294346144924983);
    msg.setSource(62103U);
    msg.setSourceEntity(151U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.6449858284812673);
    msg.setSource(35660U);
    msg.setSourceEntity(174U);
    msg.setDestination(62991U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.25440420045612944);
    msg.setSource(10796U);
    msg.setSourceEntity(244U);
    msg.setDestination(59744U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.39327034991812426);
    msg.setSource(59230U);
    msg.setSourceEntity(69U);
    msg.setDestination(7449U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.6220600623696101);
    msg.setSource(44126U);
    msg.setSourceEntity(163U);
    msg.setDestination(55794U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.40394560151870884);
    msg.setSource(21375U);
    msg.setSourceEntity(95U);
    msg.setDestination(56322U);
    msg.setDestinationEntity(51U);
    msg.op = 226U;
    msg.system.assign("XMFYTNTUYGITNMKCODWECBFOUMLVLUHLYDHHCJXWEPHTM");
    msg.range = 0.5642741859953672;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.727636682446001;
    tmp_msg_0.beam_height = 0.38050723947770126;
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
    msg.setTimeStamp(0.905061692552644);
    msg.setSource(49942U);
    msg.setSourceEntity(180U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(82U);
    msg.op = 73U;
    msg.system.assign("EAGVFMZSEFYFAGPBHCVUTQXKKOLJSUNTZABREMRDBLKZNPOZCQTOPXUEWPDUOKTEWMEFWAZGMKGHJYAHXMMPKRSGLXPCZFIWQIDLJCVNRQWJFFZTQFIXBVYOCIESJAJIPSAXDQODVNIMVQIYKHRLBUNWRHLUVPYU");
    msg.range = 0.08338234000872158;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.5302598837671221;
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
    msg.setTimeStamp(0.1477376724472832);
    msg.setSource(45954U);
    msg.setSourceEntity(10U);
    msg.setDestination(36762U);
    msg.setDestinationEntity(106U);
    msg.op = 195U;
    msg.system.assign("MWBCRBDYKYMDJDQVSCSJFUQXBMA");
    msg.range = 0.39328667283551766;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("BICVFTKKYJOEABTZDSOFQLQUDWPXFEXGNJWJNTWNGXBAOFKFSHFIVLNCMTQYJSBRILLPKUBPOOZUMEODIWJCLMKLXLQMIMIRVSZNKMPRYAGVTUMNSTUKCNASXCQAWVBGIDRAYQCYWYMZEXVVJLHGTPGJYJVEACQDCTUNFBQEGIZHDVSKWAOEPZBGOXYSRHUWZFPRDRJKWKMGSDHQLEBTEHNHVDJCZXUMIWORR");
    tmp_msg_0.lat = 0.6816612682754849;
    tmp_msg_0.lon = 0.0572212840327736;
    tmp_msg_0.z = 0.2485910319625919;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.cog = 0.5995602283597445;
    tmp_msg_0.sog = 0.36824879020069645;
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
    msg.setTimeStamp(0.04491693346236181);
    msg.setSource(50308U);
    msg.setSourceEntity(60U);
    msg.setDestination(49523U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.8741972816785919);
    msg.setSource(52275U);
    msg.setSourceEntity(134U);
    msg.setDestination(51738U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.4733350266621561);
    msg.setSource(13263U);
    msg.setSourceEntity(2U);
    msg.setDestination(46078U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.5174242470145571);
    msg.setSource(10984U);
    msg.setSourceEntity(0U);
    msg.setDestination(21484U);
    msg.setDestinationEntity(23U);
    msg.list.assign("RSNNNXCKPRGVUHDNYXZDIDXNAYDCCVFWXXEIMLRTXOVRJWXBCBKAZLNQMLMUGFBHOIOPPIJIMXZJSHBOUPMIHHXBGNYOYBAGNRPBQJTUUBWQDUBEWWMLTCADLEOSXVCYFUSUKACCMATFKSDYKTAQZEJDR");

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
    msg.setTimeStamp(0.7756014268331648);
    msg.setSource(29991U);
    msg.setSourceEntity(33U);
    msg.setDestination(65127U);
    msg.setDestinationEntity(216U);
    msg.list.assign("PGTDKPCIBAIFXTOMWZOLGNDOUKZIRBNBZFXWSMIRHFOLMHUWMGHKBETTOKLMEKSBSFSNXQNXLSANEZPYTKVHRCYHNUUHQCLJAGGAMLXDKNJQXJAPILBAGCMQFPQZWO");

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
    msg.setTimeStamp(0.15736844968127106);
    msg.setSource(7436U);
    msg.setSourceEntity(36U);
    msg.setDestination(50687U);
    msg.setDestinationEntity(1U);
    msg.list.assign("PDOKJZJGJSHWMFALQTNYHAHOXWMKJRAFRINBJIHWKFWRRZSXEDBVUCECVXPROEPCBNATZMQSBQCRZUNZHMPMMNAPQJHIOSYSYVGLVQIBWHYFGKNXOEVADDEDDTOSDTCKARFWBYLCZMSXTKCBLBCOPYZULOXKLSZDNQNDIGZGVHATDFKWT");

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
    msg.setTimeStamp(0.4350667486324301);
    msg.setSource(14901U);
    msg.setSourceEntity(212U);
    msg.setDestination(56911U);
    msg.setDestinationEntity(134U);
    msg.value = -20409;

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
    msg.setTimeStamp(0.5503852251525009);
    msg.setSource(33746U);
    msg.setSourceEntity(55U);
    msg.setDestination(39358U);
    msg.setDestinationEntity(126U);
    msg.value = -19594;

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
    msg.setTimeStamp(0.11595149837658725);
    msg.setSource(18166U);
    msg.setSourceEntity(104U);
    msg.setDestination(41229U);
    msg.setDestinationEntity(217U);
    msg.value = -26056;

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
    msg.setTimeStamp(0.1280088433547698);
    msg.setSource(23297U);
    msg.setSourceEntity(206U);
    msg.setDestination(35007U);
    msg.setDestinationEntity(153U);
    msg.value = 0.8952921029946014;

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
    msg.setTimeStamp(0.5569980214758143);
    msg.setSource(6022U);
    msg.setSourceEntity(147U);
    msg.setDestination(55947U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6072288628317528;

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
    msg.setTimeStamp(0.7937321983258513);
    msg.setSource(31063U);
    msg.setSourceEntity(104U);
    msg.setDestination(44783U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7187913577894509;

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
    msg.setTimeStamp(0.33000961874055);
    msg.setSource(44981U);
    msg.setSourceEntity(83U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(133U);
    msg.value = 0.4424844971168179;

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
    msg.setTimeStamp(0.6692429899303097);
    msg.setSource(46318U);
    msg.setSourceEntity(55U);
    msg.setDestination(17096U);
    msg.setDestinationEntity(13U);
    msg.value = 0.12906463304281424;

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
    msg.setTimeStamp(0.3320731873989403);
    msg.setSource(12130U);
    msg.setSourceEntity(102U);
    msg.setDestination(22794U);
    msg.setDestinationEntity(241U);
    msg.value = 0.008760098793667126;

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
    msg.setTimeStamp(0.21444194137252004);
    msg.setSource(38795U);
    msg.setSourceEntity(53U);
    msg.setDestination(17071U);
    msg.setDestinationEntity(212U);
    msg.validity = 2257U;
    msg.type = 13U;
    msg.utc_year = 39072U;
    msg.utc_month = 236U;
    msg.utc_day = 125U;
    msg.utc_time = 0.6085248943526446;
    msg.lat = 0.619879403569992;
    msg.lon = 0.7707512407689833;
    msg.height = 0.5487162563052967;
    msg.satellites = 46U;
    msg.cog = 0.38657282220653344;
    msg.sog = 0.6305123563903583;
    msg.hdop = 0.08189118914505866;
    msg.vdop = 0.9797139766632852;
    msg.hacc = 0.1805035140650023;
    msg.vacc = 0.20303367963742625;

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
    msg.setTimeStamp(0.26177303389855533);
    msg.setSource(54003U);
    msg.setSourceEntity(203U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(61U);
    msg.validity = 42706U;
    msg.type = 174U;
    msg.utc_year = 3027U;
    msg.utc_month = 2U;
    msg.utc_day = 192U;
    msg.utc_time = 0.9144510387426534;
    msg.lat = 0.7124773774649773;
    msg.lon = 0.4011167797546624;
    msg.height = 0.41776645862465733;
    msg.satellites = 82U;
    msg.cog = 0.3645883237507854;
    msg.sog = 0.4251642531566059;
    msg.hdop = 0.583170260654414;
    msg.vdop = 0.6655671816227664;
    msg.hacc = 0.14390713850324865;
    msg.vacc = 0.418694939106696;

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
    msg.setTimeStamp(0.1924367637111304);
    msg.setSource(34801U);
    msg.setSourceEntity(18U);
    msg.setDestination(63403U);
    msg.setDestinationEntity(185U);
    msg.validity = 33465U;
    msg.type = 101U;
    msg.utc_year = 6025U;
    msg.utc_month = 159U;
    msg.utc_day = 192U;
    msg.utc_time = 0.18668812518695688;
    msg.lat = 0.18665591654640656;
    msg.lon = 0.41075668437431956;
    msg.height = 0.6008958807334085;
    msg.satellites = 78U;
    msg.cog = 0.3275739100222358;
    msg.sog = 0.48755038632767267;
    msg.hdop = 0.636259552329383;
    msg.vdop = 0.25746540262512874;
    msg.hacc = 0.6563276847586736;
    msg.vacc = 0.5406270777881259;

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
    msg.setTimeStamp(0.3337713292273208);
    msg.setSource(42258U);
    msg.setSourceEntity(197U);
    msg.setDestination(32048U);
    msg.setDestinationEntity(95U);
    msg.time = 0.4090388174153583;
    msg.phi = 0.45172627040968394;
    msg.theta = 0.2916908730579769;
    msg.psi = 0.06765529111379698;
    msg.psi_magnetic = 0.20771953427969825;

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
    msg.setTimeStamp(0.45792906530503974);
    msg.setSource(62284U);
    msg.setSourceEntity(96U);
    msg.setDestination(13117U);
    msg.setDestinationEntity(25U);
    msg.time = 0.8383214728605588;
    msg.phi = 0.9260430751581108;
    msg.theta = 0.5747009824503863;
    msg.psi = 0.6264040361283923;
    msg.psi_magnetic = 0.6401284053607552;

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
    msg.setTimeStamp(0.5413115104298);
    msg.setSource(54172U);
    msg.setSourceEntity(66U);
    msg.setDestination(29499U);
    msg.setDestinationEntity(178U);
    msg.time = 0.5735653303162438;
    msg.phi = 0.033204210906593645;
    msg.theta = 0.8538335408557692;
    msg.psi = 0.06713996797292898;
    msg.psi_magnetic = 0.6901565368375353;

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
    msg.setTimeStamp(0.9551653167820212);
    msg.setSource(22642U);
    msg.setSourceEntity(24U);
    msg.setDestination(49965U);
    msg.setDestinationEntity(47U);
    msg.time = 0.29245145930016225;
    msg.x = 0.45665151659768854;
    msg.y = 0.8314591190191399;
    msg.z = 0.2956868846137316;
    msg.timestep = 0.13526289108572087;

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
    msg.setTimeStamp(0.6082077028143997);
    msg.setSource(22933U);
    msg.setSourceEntity(55U);
    msg.setDestination(630U);
    msg.setDestinationEntity(60U);
    msg.time = 0.4751069092871787;
    msg.x = 0.2493425704615062;
    msg.y = 0.31531240747099964;
    msg.z = 0.8169785305422359;
    msg.timestep = 0.938137340218125;

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
    msg.setTimeStamp(0.20282263061127492);
    msg.setSource(35584U);
    msg.setSourceEntity(57U);
    msg.setDestination(32333U);
    msg.setDestinationEntity(28U);
    msg.time = 0.18811543416080256;
    msg.x = 0.9611077028415461;
    msg.y = 0.10060372810488338;
    msg.z = 0.7634788368430518;
    msg.timestep = 0.31886486541073966;

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
    msg.setTimeStamp(0.7999430655214282);
    msg.setSource(10788U);
    msg.setSourceEntity(28U);
    msg.setDestination(11606U);
    msg.setDestinationEntity(75U);
    msg.time = 0.6243273294877738;
    msg.x = 0.5171812639064849;
    msg.y = 0.7431058406941462;
    msg.z = 0.013427221609948026;

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
    msg.setTimeStamp(0.5587316614289505);
    msg.setSource(64724U);
    msg.setSourceEntity(85U);
    msg.setDestination(40107U);
    msg.setDestinationEntity(137U);
    msg.time = 0.9276812418254883;
    msg.x = 0.5032415376560756;
    msg.y = 0.033180282588541;
    msg.z = 0.27767999520347697;

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
    msg.setTimeStamp(0.9399942718039863);
    msg.setSource(15967U);
    msg.setSourceEntity(61U);
    msg.setDestination(54669U);
    msg.setDestinationEntity(228U);
    msg.time = 0.47923955074884994;
    msg.x = 0.5915421552042028;
    msg.y = 0.27173752057221434;
    msg.z = 0.9802321629298912;

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
    msg.setTimeStamp(0.9424882570214583);
    msg.setSource(24556U);
    msg.setSourceEntity(49U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(95U);
    msg.time = 0.40814151761542594;
    msg.x = 0.5365463113467416;
    msg.y = 0.2813982244217511;
    msg.z = 0.49110003765601506;

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
    msg.setTimeStamp(0.9697786111011326);
    msg.setSource(60790U);
    msg.setSourceEntity(104U);
    msg.setDestination(59936U);
    msg.setDestinationEntity(117U);
    msg.time = 0.7958809429327732;
    msg.x = 0.7829696245280471;
    msg.y = 0.7056805082092924;
    msg.z = 0.2206807762731604;

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
    msg.setTimeStamp(0.650490210465046);
    msg.setSource(17888U);
    msg.setSourceEntity(63U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(162U);
    msg.time = 0.5924697551593059;
    msg.x = 0.6496039771340612;
    msg.y = 0.22378827771422216;
    msg.z = 0.07601704732233916;

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
    msg.setTimeStamp(0.8118589305525723);
    msg.setSource(31573U);
    msg.setSourceEntity(249U);
    msg.setDestination(63627U);
    msg.setDestinationEntity(20U);
    msg.time = 0.08158749572382751;
    msg.x = 0.03335618383477301;
    msg.y = 0.3726965863509998;
    msg.z = 0.635457321883363;

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
    msg.setTimeStamp(0.7367156459004595);
    msg.setSource(42572U);
    msg.setSourceEntity(161U);
    msg.setDestination(29687U);
    msg.setDestinationEntity(198U);
    msg.time = 0.5428919207325142;
    msg.x = 0.43309459691558116;
    msg.y = 0.06629961160500131;
    msg.z = 0.6931530825137415;

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
    msg.setTimeStamp(0.06041927730157892);
    msg.setSource(24643U);
    msg.setSourceEntity(152U);
    msg.setDestination(45739U);
    msg.setDestinationEntity(29U);
    msg.time = 0.15680900427660993;
    msg.x = 0.8099884807145882;
    msg.y = 0.06761025177928492;
    msg.z = 0.08032455614106004;

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
    msg.setTimeStamp(0.11520887420243431);
    msg.setSource(47302U);
    msg.setSourceEntity(143U);
    msg.setDestination(9928U);
    msg.setDestinationEntity(226U);
    msg.validity = 52U;
    msg.x = 0.9187584740200954;
    msg.y = 0.35381018392194397;
    msg.z = 0.7350851815426247;

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
    msg.setTimeStamp(0.562024896139891);
    msg.setSource(34868U);
    msg.setSourceEntity(240U);
    msg.setDestination(53465U);
    msg.setDestinationEntity(178U);
    msg.validity = 200U;
    msg.x = 0.48435552447729147;
    msg.y = 0.2571624239379262;
    msg.z = 0.8085939048142053;

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
    msg.setTimeStamp(0.9103811547693723);
    msg.setSource(19110U);
    msg.setSourceEntity(238U);
    msg.setDestination(55980U);
    msg.setDestinationEntity(158U);
    msg.validity = 226U;
    msg.x = 0.11960767732418842;
    msg.y = 0.7281463740880486;
    msg.z = 0.38021988349655766;

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
    msg.setTimeStamp(0.34005529317956595);
    msg.setSource(56345U);
    msg.setSourceEntity(167U);
    msg.setDestination(55997U);
    msg.setDestinationEntity(41U);
    msg.validity = 87U;
    msg.x = 0.3634935132579322;
    msg.y = 0.9616427737565971;
    msg.z = 0.6057164235894917;

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
    msg.setTimeStamp(0.011394594077220654);
    msg.setSource(44429U);
    msg.setSourceEntity(215U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(118U);
    msg.validity = 146U;
    msg.x = 0.8424209380073671;
    msg.y = 0.9114831273358379;
    msg.z = 0.800574796016421;

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
    msg.setTimeStamp(0.22691256440482532);
    msg.setSource(48006U);
    msg.setSourceEntity(155U);
    msg.setDestination(55245U);
    msg.setDestinationEntity(166U);
    msg.validity = 41U;
    msg.x = 0.13547870740901247;
    msg.y = 0.19762150551300128;
    msg.z = 0.7154532540166383;

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
    msg.setTimeStamp(0.7512956317321249);
    msg.setSource(54372U);
    msg.setSourceEntity(5U);
    msg.setDestination(11826U);
    msg.setDestinationEntity(127U);
    msg.time = 0.9739085129435588;
    msg.x = 0.6259870038029849;
    msg.y = 0.19523848024015444;
    msg.z = 0.7475831003734712;

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
    msg.setTimeStamp(0.3877011314535418);
    msg.setSource(24569U);
    msg.setSourceEntity(80U);
    msg.setDestination(26561U);
    msg.setDestinationEntity(247U);
    msg.time = 0.062130643440618805;
    msg.x = 0.6640160317461244;
    msg.y = 0.8003675528264674;
    msg.z = 0.6774562668452537;

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
    msg.setTimeStamp(0.7970109753347554);
    msg.setSource(2070U);
    msg.setSourceEntity(95U);
    msg.setDestination(62524U);
    msg.setDestinationEntity(32U);
    msg.time = 0.9360914313320486;
    msg.x = 0.5885812948015631;
    msg.y = 0.6603288994296471;
    msg.z = 0.6742074457012261;

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
    msg.setTimeStamp(0.9408033098512851);
    msg.setSource(57502U);
    msg.setSourceEntity(109U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(131U);
    msg.validity = 236U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7782716950931837;
    tmp_msg_0.y = 0.41141483484377217;
    tmp_msg_0.z = 0.7503615327641516;
    tmp_msg_0.phi = 0.07516140089817169;
    tmp_msg_0.theta = 0.4788552226796422;
    tmp_msg_0.psi = 0.2648821106977628;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3091814213786911;
    tmp_msg_1.beam_height = 0.4106192010242983;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.2905406411824223;

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
    msg.setTimeStamp(0.16919678658484383);
    msg.setSource(46793U);
    msg.setSourceEntity(227U);
    msg.setDestination(47992U);
    msg.setDestinationEntity(37U);
    msg.validity = 143U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.24209315986038304;
    tmp_msg_0.y = 0.28721349652717243;
    tmp_msg_0.z = 0.38287283553426654;
    tmp_msg_0.phi = 0.8415330761936939;
    tmp_msg_0.theta = 0.9516649212265677;
    tmp_msg_0.psi = 0.2486216353910612;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.46256838817090995;
    tmp_msg_1.beam_height = 0.13235107850950378;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9429659792962688;

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
    msg.setTimeStamp(0.19117014594979032);
    msg.setSource(4500U);
    msg.setSourceEntity(66U);
    msg.setDestination(6038U);
    msg.setDestinationEntity(246U);
    msg.validity = 120U;
    msg.value = 0.903665390146228;

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
    msg.setTimeStamp(0.9575930695573334);
    msg.setSource(55317U);
    msg.setSourceEntity(78U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(32U);
    msg.value = 0.13771336255084277;

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
    msg.setTimeStamp(0.37369956235771784);
    msg.setSource(51103U);
    msg.setSourceEntity(193U);
    msg.setDestination(17603U);
    msg.setDestinationEntity(116U);
    msg.value = 0.18483160541974986;

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
    msg.setTimeStamp(0.5985063955179135);
    msg.setSource(39750U);
    msg.setSourceEntity(52U);
    msg.setDestination(2090U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7955646079160099;

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
    msg.setTimeStamp(0.4656664821530776);
    msg.setSource(23165U);
    msg.setSourceEntity(1U);
    msg.setDestination(64011U);
    msg.setDestinationEntity(132U);
    msg.value = 0.25211012414310907;

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
    msg.setTimeStamp(0.37256134537752383);
    msg.setSource(47125U);
    msg.setSourceEntity(254U);
    msg.setDestination(37223U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6429251516199037;

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
    msg.setTimeStamp(0.09036676694924639);
    msg.setSource(43616U);
    msg.setSourceEntity(153U);
    msg.setDestination(51575U);
    msg.setDestinationEntity(57U);
    msg.value = 0.23190006712803535;

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
    msg.setTimeStamp(0.3451295528589642);
    msg.setSource(62872U);
    msg.setSourceEntity(189U);
    msg.setDestination(49803U);
    msg.setDestinationEntity(125U);
    msg.value = 0.9860747252856069;

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
    msg.setTimeStamp(0.6901443594667811);
    msg.setSource(35572U);
    msg.setSourceEntity(181U);
    msg.setDestination(59588U);
    msg.setDestinationEntity(102U);
    msg.value = 0.7445509724489622;

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
    msg.setTimeStamp(0.0889493898434428);
    msg.setSource(35542U);
    msg.setSourceEntity(70U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(176U);
    msg.value = 0.8722945642304301;

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
    msg.setTimeStamp(0.7721565372738415);
    msg.setSource(58193U);
    msg.setSourceEntity(95U);
    msg.setDestination(56255U);
    msg.setDestinationEntity(250U);
    msg.value = 0.21333109304679054;

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
    msg.setTimeStamp(0.7307126976714566);
    msg.setSource(24122U);
    msg.setSourceEntity(229U);
    msg.setDestination(28157U);
    msg.setDestinationEntity(1U);
    msg.value = 0.3875256517500194;

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
    msg.setTimeStamp(0.6197313912749127);
    msg.setSource(20096U);
    msg.setSourceEntity(112U);
    msg.setDestination(2553U);
    msg.setDestinationEntity(183U);
    msg.value = 0.2767290320820778;

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
    msg.setTimeStamp(0.37094339914741514);
    msg.setSource(39059U);
    msg.setSourceEntity(55U);
    msg.setDestination(33762U);
    msg.setDestinationEntity(61U);
    msg.value = 0.47329430205552536;

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
    msg.setTimeStamp(0.14725713091299564);
    msg.setSource(41073U);
    msg.setSourceEntity(57U);
    msg.setDestination(16132U);
    msg.setDestinationEntity(4U);
    msg.value = 0.12208599176086266;

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
    msg.setTimeStamp(0.09206402406586223);
    msg.setSource(50360U);
    msg.setSourceEntity(134U);
    msg.setDestination(35310U);
    msg.setDestinationEntity(82U);
    msg.value = 0.7854594372397533;

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
    msg.setTimeStamp(0.4243788094797647);
    msg.setSource(49515U);
    msg.setSourceEntity(170U);
    msg.setDestination(33733U);
    msg.setDestinationEntity(121U);
    msg.value = 0.8208486328947036;

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
    msg.setTimeStamp(0.801221424659515);
    msg.setSource(62378U);
    msg.setSourceEntity(128U);
    msg.setDestination(27539U);
    msg.setDestinationEntity(175U);
    msg.value = 0.4753693033378902;

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
    msg.setTimeStamp(0.1542181913886218);
    msg.setSource(63967U);
    msg.setSourceEntity(152U);
    msg.setDestination(48495U);
    msg.setDestinationEntity(210U);
    msg.value = 0.3589311258917245;

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
    msg.setTimeStamp(0.38094152575157325);
    msg.setSource(58390U);
    msg.setSourceEntity(188U);
    msg.setDestination(43560U);
    msg.setDestinationEntity(158U);
    msg.value = 0.11030162489392026;

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
    msg.setTimeStamp(0.9186364666531951);
    msg.setSource(53437U);
    msg.setSourceEntity(98U);
    msg.setDestination(38573U);
    msg.setDestinationEntity(230U);
    msg.value = 0.02788258797431531;

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
    msg.setTimeStamp(0.3271196047122372);
    msg.setSource(64796U);
    msg.setSourceEntity(32U);
    msg.setDestination(56636U);
    msg.setDestinationEntity(35U);
    msg.value = 0.26843875276978846;

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
    msg.setTimeStamp(0.01337680549914233);
    msg.setSource(30550U);
    msg.setSourceEntity(48U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(152U);
    msg.value = 0.2408156107902022;

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
    msg.setTimeStamp(0.7183954058231312);
    msg.setSource(13126U);
    msg.setSourceEntity(80U);
    msg.setDestination(36825U);
    msg.setDestinationEntity(203U);
    msg.value = 0.471102182177633;

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
    msg.setTimeStamp(0.5893467825390288);
    msg.setSource(48071U);
    msg.setSourceEntity(56U);
    msg.setDestination(1080U);
    msg.setDestinationEntity(220U);
    msg.value = 0.9795892915690169;

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
    msg.setTimeStamp(0.4023116655245619);
    msg.setSource(56180U);
    msg.setSourceEntity(152U);
    msg.setDestination(41622U);
    msg.setDestinationEntity(27U);
    msg.direction = 0.0072052809823689445;
    msg.speed = 0.1383863115641425;

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
    msg.setTimeStamp(0.27080965534193624);
    msg.setSource(63752U);
    msg.setSourceEntity(111U);
    msg.setDestination(60253U);
    msg.setDestinationEntity(195U);
    msg.direction = 0.3319187235895785;
    msg.speed = 0.9032730611897662;

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
    msg.setTimeStamp(0.5468031572184497);
    msg.setSource(49851U);
    msg.setSourceEntity(188U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(197U);
    msg.direction = 0.42821916522499837;
    msg.speed = 0.2392771496909537;

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
    msg.setTimeStamp(0.3612284031186248);
    msg.setSource(43271U);
    msg.setSourceEntity(34U);
    msg.setDestination(58391U);
    msg.setDestinationEntity(7U);
    msg.value = 0.6396767188278086;

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
    msg.setTimeStamp(0.8981464593326092);
    msg.setSource(43332U);
    msg.setSourceEntity(4U);
    msg.setDestination(59766U);
    msg.setDestinationEntity(66U);
    msg.value = 0.76900671858429;

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
    msg.setTimeStamp(0.8644404584695181);
    msg.setSource(62822U);
    msg.setSourceEntity(158U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(20U);
    msg.value = 0.26984801801001446;

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
    msg.setTimeStamp(0.8416340089741932);
    msg.setSource(63890U);
    msg.setSourceEntity(186U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(234U);
    msg.value.assign("APFEVVRIYCAIELRXPUKCGYSQTZNIMAWQNLKRPURWALFUINCZJWPDGMBSRNTOTIVMKEYJKCVRIUWBWHOTYGNYNNEMYGPJLUCVBQGCHOUTHJJKPFLAFPXQGXDLUXZFXTDFSGDXUZACAUSVJHGOKYI");

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
    msg.setTimeStamp(0.5369940801382818);
    msg.setSource(14543U);
    msg.setSourceEntity(17U);
    msg.setDestination(39596U);
    msg.setDestinationEntity(9U);
    msg.value.assign("HUQAZXURGFIWREJPOIUYFWJKOKBENINYQUQMHAOEXZSFLDC");

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
    msg.setTimeStamp(0.9916395445526689);
    msg.setSource(65112U);
    msg.setSourceEntity(149U);
    msg.setDestination(20119U);
    msg.setDestinationEntity(69U);
    msg.value.assign("GQRVIGBGXHUZVJWZWNEFBZMOOHYSDPDHZQOQQLAWDNKCLYAMGHJWATMOTTXYIJVSDJYFBAPDYQERALINQHIHKFCRJJUGKNDWEXVXLVLQFMNJUGVDARMROFKZMYMB");

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
    msg.setTimeStamp(0.6864582319143739);
    msg.setSource(47624U);
    msg.setSourceEntity(107U);
    msg.setDestination(34892U);
    msg.setDestinationEntity(106U);
    const char tmp_msg_0[] = {-112, 20, 17, 118, -38, 25, -24, 88, 108, -32, 63, -88, 101, 118, 52, -112, -55, -89, 33, 119, -104, 11, -40, -118, 80, -126, -10, 51, -121, 93, -13, 48, 90, -2, -73, 72};
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
    msg.setTimeStamp(0.7995316870146973);
    msg.setSource(1023U);
    msg.setSourceEntity(233U);
    msg.setDestination(59063U);
    msg.setDestinationEntity(199U);
    const char tmp_msg_0[] = {67, -12, -79, -127, -123, -89, 117, -34, -47, -104, -94, 96, 34, 104, -38, -108, 62, 81, -9, 90, 98, -2, -21, -80, 82, -107, -108, -102, -13, 56, -15, -82, -65, 18, -115, -124, 105, -84, -14, 90, -128, 70, -1, -93, 85, 26, 10, -127, 73, 98, 60, -55, -86, 21, 117, 96, 69, -97, -6, 23, -95, -119, 92, -64, 50, 38, -106, 99, 86, -122, -69, 8, -56, 104, -68, -23, 89, 0, 32, 75, -69, 57, 84, -19, -53, 107, 99, -76, -15, 112, -81, -80, 19, 81, 118, 14, -59, 12, 34, -98, 61, -47, 60, 63, -14, 44, 45, 21, -96, 43, -126, -127, 32, -82, 60, -109, 104, 56, -114, -84, -31, -63, -127, 62, -46, -71, -45, 60, 34, -41, -24, -31, 2};
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
    msg.setTimeStamp(0.11443854042968238);
    msg.setSource(382U);
    msg.setSourceEntity(239U);
    msg.setDestination(28666U);
    msg.setDestinationEntity(165U);
    const char tmp_msg_0[] = {-21, -30, -28, 51, 13, 107, -94, -95, 55, -86, -7, 67, 120, -82, 124, 95, -66, -53, 26, 126, -19, 46, -17, -126, -82, -73, 21, 122, -126, -63, -112, -96, 58, 77, -119, -9, 119, -46, -120, -73, 29, 28, 31, -54, -55, -28, -12, -69};
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
    msg.setTimeStamp(0.3711919535214886);
    msg.setSource(45735U);
    msg.setSourceEntity(91U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(6U);
    msg.frequency = 4152915087U;
    msg.min_range = 62615U;
    msg.max_range = 43502U;

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
    msg.setTimeStamp(0.8541554515238736);
    msg.setSource(13680U);
    msg.setSourceEntity(193U);
    msg.setDestination(24230U);
    msg.setDestinationEntity(74U);
    msg.frequency = 50790866U;
    msg.min_range = 31812U;
    msg.max_range = 60320U;

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
    msg.setTimeStamp(0.24750266132986665);
    msg.setSource(26646U);
    msg.setSourceEntity(79U);
    msg.setDestination(19877U);
    msg.setDestinationEntity(251U);
    msg.frequency = 2864919680U;
    msg.min_range = 55405U;
    msg.max_range = 37022U;

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
    msg.setTimeStamp(0.7649736973099636);
    msg.setSource(4385U);
    msg.setSourceEntity(249U);
    msg.setDestination(52932U);
    msg.setDestinationEntity(20U);
    msg.type = 33U;
    msg.frequency = 1535329289U;
    msg.min_range = 37204U;
    msg.max_range = 20957U;
    msg.bits_per_point = 16U;
    msg.scale_factor = 0.2797258872049303;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.12759736329858806;
    tmp_msg_0.beam_height = 0.8062004313937725;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-93, -81, 0, -11, -30, -89, 66, -51, -46, 51, -4, 0, 102, -112, -6, -80, -123, -49, -40, -107, 81, 69, -21, -82, -98, 86, -86, 87, -14, 110, -8, -124, 10, -81, 70, -106, 60, 28, -32, 33, 82, -123, 97, 51, 18, -14, 43, 103, 1, -57, 12, 113, -9, 12, 25, -40, -60, 41, 44, -74, 68, -11, 75, 9, -4, -122, 69, -41, 31, 3, -85, 73, -93, 113, -81, -126, -108, -47, -4, 49, -88, -11, -37, -35, 92, 72, -37, -63, 24, 10, 20, 84, -16, 19, -69, -15, -43, -62, -127, -109, -84, -35, -64, -51, -53, -21, -111, -58, -22, 97, -5, -114, 31, -48, 12, -20, 120, 109, -119, -100, 49, -77, 108, 47, 48, -56, 47, -73, 43, -45, -46, -36, -69, -59, 67, -94, 14, -50, -41, -4, 86, -22, -86, 36, -3, -98, 91, 5};
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
    msg.setTimeStamp(0.5182112753219975);
    msg.setSource(33903U);
    msg.setSourceEntity(65U);
    msg.setDestination(56949U);
    msg.setDestinationEntity(176U);
    msg.type = 158U;
    msg.frequency = 2261469033U;
    msg.min_range = 4562U;
    msg.max_range = 3738U;
    msg.bits_per_point = 120U;
    msg.scale_factor = 0.36481172491558456;
    const char tmp_msg_0[] = {-11, -51, -21, -35, -5, -92, 1, 122, -49, -107, 25, -100, 81, 111, 7, 111, 96, 5, 31, -49, -11, -17, -107, -92, -127, 126, 25, -19, -95, -79, 61, 106, 48, 73, -70, 37, 117, 37, 60, 116, 24, -104, -100, -18, -88, -66};
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
    msg.setTimeStamp(0.33588696743318347);
    msg.setSource(10347U);
    msg.setSourceEntity(169U);
    msg.setDestination(40101U);
    msg.setDestinationEntity(159U);
    msg.type = 94U;
    msg.frequency = 1604881736U;
    msg.min_range = 58945U;
    msg.max_range = 5219U;
    msg.bits_per_point = 175U;
    msg.scale_factor = 0.44770644279056837;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8441257643730558;
    tmp_msg_0.beam_height = 0.40650946433265955;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {114, 82, -87, 47, -70, 87, -91, -127, 17, 56, 56, 99, 23, -13, 118, 20, 24, -28, -32, 70, 85, 15, -68, -120, 102, -32, -41, 121, 35, 83, -87, 38, 115, 124, -116, -62, -89, 80, -3, 80, -15, 112, -83, 85, -15, 65, 43, -29, -7, -92, 5, -51, 16, -8, -124, -126, 32, -93, -48, 29, -123, 56, 106, 111, -122, -50, -43, -113, -123, -83, -2, 43, 33, -32, -51, 110, 88, -47, 75, 62, 90, 79, -101, -4, 68, 72, -121, 56, 22, 91, -104, 9, -67, -42, -49, 69, 23};
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
    msg.setTimeStamp(0.001976625316655989);
    msg.setSource(44044U);
    msg.setSourceEntity(9U);
    msg.setDestination(6168U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.0773310373273719);
    msg.setSource(39458U);
    msg.setSourceEntity(3U);
    msg.setDestination(20479U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.9690733071965028);
    msg.setSource(44759U);
    msg.setSourceEntity(248U);
    msg.setDestination(53947U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.37206389783434257);
    msg.setSource(47213U);
    msg.setSourceEntity(120U);
    msg.setDestination(39278U);
    msg.setDestinationEntity(114U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.4491934046788313);
    msg.setSource(17301U);
    msg.setSourceEntity(244U);
    msg.setDestination(38501U);
    msg.setDestinationEntity(17U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.21651787061019734);
    msg.setSource(10014U);
    msg.setSourceEntity(134U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(223U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.2162719533901175);
    msg.setSource(43367U);
    msg.setSourceEntity(96U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9093448462415639;
    msg.confidence = 0.8790996494414942;
    msg.opmodes.assign("PIFQOLTRBRDEFUNTUDADSNEXCPOQJIGEGRNACLUQWTYCSUFXKMKRTIZMRFJKKMXHUETLJUJTPBJJAFZLAWVWAUOMKDUGCKZYXHHYYJEQGOPCIHSWMOZXVBZBOIPKMMRYHZWEAGVBNTYGKHINSSLBSWBKPOTQXVCVQHMVLUSRHADMGONEZMNFFJBGZVYIZEYQAYISNTOALXSWHPCAXTXRDPNZHVQCD");

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
    msg.setTimeStamp(0.5115390982552555);
    msg.setSource(31429U);
    msg.setSourceEntity(205U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(15U);
    msg.value = 0.05829088151445494;
    msg.confidence = 0.3113983211155006;
    msg.opmodes.assign("MZMLHZVPVVSDRKRNOMBBTEBGTHGYDWUEMCAPGNSOAPLLXSFBUAAKHDXYMODFJDUKHYTPRR");

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
    msg.setTimeStamp(0.12296872639662648);
    msg.setSource(27640U);
    msg.setSourceEntity(23U);
    msg.setDestination(34696U);
    msg.setDestinationEntity(149U);
    msg.value = 0.815357570127631;
    msg.confidence = 0.7262105274461315;
    msg.opmodes.assign("OWMFJETYBDBKNHFONDUDFLEFSLTSTXDJEAMWROBVOIMVKWIIYCHPJPFZPQEKLYHXZAMAJCTPIGTROWJNMGXVAJYXIQNBJCFQZGGYWXSQZUOGYHXQNXKXRVCDAUQHZRTGPQUFDVKKJDRHVLSGUFAWSBMPILSZWMTWKTLHMQWVVEBMCHELZLHXUCASENTLRIEDIHNQROZUJYCRCFSY");

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
    msg.setTimeStamp(0.8091154092373932);
    msg.setSource(5061U);
    msg.setSourceEntity(215U);
    msg.setDestination(2300U);
    msg.setDestinationEntity(23U);
    msg.itow = 573646140U;
    msg.lat = 0.16326566299941425;
    msg.lon = 0.7184518130191131;
    msg.height_ell = 0.6280398943094461;
    msg.height_sea = 0.6698690228086498;
    msg.hacc = 0.2613475042438108;
    msg.vacc = 0.016966616048313954;
    msg.vel_n = 0.2636171921273459;
    msg.vel_e = 0.33650442290321714;
    msg.vel_d = 0.320691414447958;
    msg.speed = 0.6247584958022592;
    msg.gspeed = 0.6681748105252301;
    msg.heading = 0.5714809067101125;
    msg.sacc = 0.7815654254827077;
    msg.cacc = 0.09139533064791949;

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
    msg.setTimeStamp(0.18251133223890703);
    msg.setSource(819U);
    msg.setSourceEntity(179U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(78U);
    msg.itow = 2452825619U;
    msg.lat = 0.4224373611290101;
    msg.lon = 0.8353264864310248;
    msg.height_ell = 0.9698798887877327;
    msg.height_sea = 0.8019204967448624;
    msg.hacc = 0.589507491843637;
    msg.vacc = 0.08505743548928202;
    msg.vel_n = 0.9944736698332911;
    msg.vel_e = 0.8667537380193543;
    msg.vel_d = 0.5951259251412296;
    msg.speed = 0.9653391317744998;
    msg.gspeed = 0.8537704039603587;
    msg.heading = 0.7090717289807847;
    msg.sacc = 0.13115710711240047;
    msg.cacc = 0.17218336009709656;

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
    msg.setTimeStamp(0.3541734237724944);
    msg.setSource(3151U);
    msg.setSourceEntity(123U);
    msg.setDestination(52861U);
    msg.setDestinationEntity(164U);
    msg.itow = 4197792389U;
    msg.lat = 0.6651744067981262;
    msg.lon = 0.7916063545590419;
    msg.height_ell = 0.8147520774590328;
    msg.height_sea = 0.9349249001259037;
    msg.hacc = 0.4781387470570009;
    msg.vacc = 0.25674123171890517;
    msg.vel_n = 0.5595196650707502;
    msg.vel_e = 0.6512420853232798;
    msg.vel_d = 0.6119664244663254;
    msg.speed = 0.8919662342624762;
    msg.gspeed = 0.6563204269241939;
    msg.heading = 0.07742462549778428;
    msg.sacc = 0.13659265157130707;
    msg.cacc = 0.36440569828132807;

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
    msg.setTimeStamp(0.7827952698723364);
    msg.setSource(6826U);
    msg.setSourceEntity(22U);
    msg.setDestination(64519U);
    msg.setDestinationEntity(132U);
    msg.id = 104U;
    msg.value = 0.7369138873806967;

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
    msg.setTimeStamp(0.48616838326443734);
    msg.setSource(14518U);
    msg.setSourceEntity(10U);
    msg.setDestination(60640U);
    msg.setDestinationEntity(94U);
    msg.id = 181U;
    msg.value = 0.13482936489349284;

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
    msg.setTimeStamp(0.3854636968316687);
    msg.setSource(25102U);
    msg.setSourceEntity(214U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(69U);
    msg.id = 81U;
    msg.value = 0.5626638778614943;

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
    msg.setTimeStamp(0.21631779453270927);
    msg.setSource(33637U);
    msg.setSourceEntity(220U);
    msg.setDestination(55431U);
    msg.setDestinationEntity(206U);
    msg.x = 0.8872526547553052;
    msg.y = 0.5714117884728532;
    msg.z = 0.23559507376413102;
    msg.phi = 0.8047580505496251;
    msg.theta = 0.9962672427032996;
    msg.psi = 0.6989508267655328;

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
    msg.setTimeStamp(0.35113242252144283);
    msg.setSource(10507U);
    msg.setSourceEntity(39U);
    msg.setDestination(21558U);
    msg.setDestinationEntity(183U);
    msg.x = 0.41771782938019186;
    msg.y = 0.643876553463902;
    msg.z = 0.984430833830726;
    msg.phi = 0.42899861131465;
    msg.theta = 0.3126854755656231;
    msg.psi = 0.7601792890672138;

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
    msg.setTimeStamp(0.24213041484319364);
    msg.setSource(12421U);
    msg.setSourceEntity(222U);
    msg.setDestination(29804U);
    msg.setDestinationEntity(206U);
    msg.x = 0.6460071904415374;
    msg.y = 0.9196653759109392;
    msg.z = 0.36828099465456965;
    msg.phi = 0.28134391208668086;
    msg.theta = 0.5978286013241643;
    msg.psi = 0.2912760435868612;

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
    msg.setTimeStamp(0.10016061696000633);
    msg.setSource(45268U);
    msg.setSourceEntity(190U);
    msg.setDestination(42096U);
    msg.setDestinationEntity(77U);
    msg.beam_width = 0.7845570760092101;
    msg.beam_height = 0.702354363748532;

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
    msg.setTimeStamp(0.6720467553158737);
    msg.setSource(54745U);
    msg.setSourceEntity(197U);
    msg.setDestination(43017U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.9396800279862714;
    msg.beam_height = 0.572523252630434;

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
    msg.setTimeStamp(0.389915437082754);
    msg.setSource(17114U);
    msg.setSourceEntity(239U);
    msg.setDestination(52898U);
    msg.setDestinationEntity(18U);
    msg.beam_width = 0.5488296413352041;
    msg.beam_height = 0.9151914809904254;

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
    msg.setTimeStamp(0.45745353975786796);
    msg.setSource(3315U);
    msg.setSourceEntity(167U);
    msg.setDestination(4579U);
    msg.setDestinationEntity(107U);
    msg.id = 127U;
    msg.zoom = 157U;
    msg.action = 14U;

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
    msg.setTimeStamp(0.04295914888093011);
    msg.setSource(10882U);
    msg.setSourceEntity(144U);
    msg.setDestination(56767U);
    msg.setDestinationEntity(183U);
    msg.id = 26U;
    msg.zoom = 45U;
    msg.action = 137U;

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
    msg.setTimeStamp(0.16794775047726818);
    msg.setSource(2122U);
    msg.setSourceEntity(185U);
    msg.setDestination(60067U);
    msg.setDestinationEntity(195U);
    msg.id = 163U;
    msg.zoom = 168U;
    msg.action = 184U;

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
    msg.setTimeStamp(0.6766021833675409);
    msg.setSource(46036U);
    msg.setSourceEntity(123U);
    msg.setDestination(7415U);
    msg.setDestinationEntity(79U);
    msg.id = 70U;
    msg.value = 0.8299679797944676;

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
    msg.setTimeStamp(0.21631646565543727);
    msg.setSource(58258U);
    msg.setSourceEntity(94U);
    msg.setDestination(12361U);
    msg.setDestinationEntity(141U);
    msg.id = 84U;
    msg.value = 0.9334976616437513;

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
    msg.setTimeStamp(0.8272434313482433);
    msg.setSource(47170U);
    msg.setSourceEntity(150U);
    msg.setDestination(28235U);
    msg.setDestinationEntity(160U);
    msg.id = 183U;
    msg.value = 0.6779858648829125;

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
    msg.setTimeStamp(0.6408804094168433);
    msg.setSource(22458U);
    msg.setSourceEntity(168U);
    msg.setDestination(60793U);
    msg.setDestinationEntity(215U);
    msg.id = 41U;
    msg.value = 0.2985279652707328;

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
    msg.setTimeStamp(0.5109604991949489);
    msg.setSource(15368U);
    msg.setSourceEntity(88U);
    msg.setDestination(55007U);
    msg.setDestinationEntity(142U);
    msg.id = 152U;
    msg.value = 0.8618378564512964;

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
    msg.setTimeStamp(0.2731544731016958);
    msg.setSource(19213U);
    msg.setSourceEntity(101U);
    msg.setDestination(2188U);
    msg.setDestinationEntity(171U);
    msg.id = 252U;
    msg.value = 0.9558325350780675;

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
    msg.setTimeStamp(0.2884059635302467);
    msg.setSource(38137U);
    msg.setSourceEntity(208U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(99U);
    msg.id = 164U;
    msg.angle = 0.22778797368618686;

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
    msg.setTimeStamp(0.2613977622235908);
    msg.setSource(27615U);
    msg.setSourceEntity(88U);
    msg.setDestination(45913U);
    msg.setDestinationEntity(106U);
    msg.id = 248U;
    msg.angle = 0.1843650936362503;

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
    msg.setTimeStamp(0.9247836167261233);
    msg.setSource(31130U);
    msg.setSourceEntity(180U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(51U);
    msg.id = 194U;
    msg.angle = 0.32609603947061094;

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
    msg.setTimeStamp(0.13079664144259429);
    msg.setSource(43220U);
    msg.setSourceEntity(175U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(34U);
    msg.op = 55U;
    msg.actions.assign("VWLDXOIUKVDHNENNYAOMCBILDLSGTKSDHGKVOHVOBBROFCJHLYKIEWTAZOXIFJMMFMAIPXMNOQHPBRDWUXZNYFWXMYZSMKRJSQFIEDJZMTLEUGBYMGPSPHABQHISFWTCVDNHHIJYOPAUPRNDRNAPDFPIXZAEJCTGLEKBWTQBAKLSWFYZZTPUFIMGGTQVDWJLVNXRGVTXKHXGRUBTQZSQRYWYCPJWCCEGASRROUOXQLKJCQSVLEUVZCQFYCK");

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
    msg.setTimeStamp(0.32953362576844036);
    msg.setSource(16714U);
    msg.setSourceEntity(128U);
    msg.setDestination(32945U);
    msg.setDestinationEntity(133U);
    msg.op = 136U;
    msg.actions.assign("TRUWPNNIQMGEKLVQRGWERCSYXINNFBPXOCXJHGXTGAMDHQSAHOYKCVCPWHBFOIYVVZJRZETMBEUJBBUUAWGGMKDSSCGMDXDXUNEFTSLCPVXHJTRMFVICWYYFYQGMZSNCTJUOMNKBKJQDFZZTEDJAPEPJWVBQIIDWZTFLXQYKLWKPVSPXWDEHCCFORRJFQGHOVKANOAYZILZQAOQBVBUGROARLRYNOZLAUNLHDPKZITWAJUIB");

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
    msg.setTimeStamp(0.3504872445547018);
    msg.setSource(15584U);
    msg.setSourceEntity(155U);
    msg.setDestination(60662U);
    msg.setDestinationEntity(161U);
    msg.op = 123U;
    msg.actions.assign("KFQATMOHSNSWNNLEUUDVCPQOYFHFMKJZUPEXRZKDZGAPBGCOTOEUIRRBHIUGXDRTDIXRHEENFEIMGXCSCWTJYQLSDGEBLOOXDUYVQAWUNKQOJBXJZQZPFMHLAKETYQUIBKVRFCGD");

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
    msg.setTimeStamp(0.3660757785593388);
    msg.setSource(40730U);
    msg.setSourceEntity(67U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(160U);
    msg.actions.assign("RMCEPJFSAHHTQZHFTBIVRCKPOEUYOVIVPRFENZAXQLBCHPADIRICADKIXLQFKWNYANUUMWIEZCPMCLCSKGBDJJOPMDUVYXMV");

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
    msg.setTimeStamp(0.3726130026833582);
    msg.setSource(18440U);
    msg.setSourceEntity(136U);
    msg.setDestination(31222U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("SSNACZIJZLQXETZQAUNGURUJSSRHXTEOIRMITXUMMBEXNNHFKZKTVLTWOFPCTAVQYDACOSXIXXSEJVZEZOTJSVAKBQKZMMUKLARFGQGJWOQIYVAPBBVDRIHXDTIFAGWGYHZPWHBJWRXLLSKCEQBPFRUYCAUWVHHYCIJVCUFYTGPIUWXPDBEYGLKFNBMDCDSGFPJPIA");

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
    msg.setTimeStamp(0.46777145037389);
    msg.setSource(57962U);
    msg.setSourceEntity(251U);
    msg.setDestination(48816U);
    msg.setDestinationEntity(238U);
    msg.actions.assign("IIQEORUAKLVPZVASEHCVAFCFZWPYMTUBHXIHLXHICVQSFSNTQMFVNJPYGOJJFIAMPZZUSCUBGFQOGUSCDACUIVPYKUBBCEURLTPOXLKBHNWTLSMXHKLJDBJQHTMMWBLWARAFJJEXXPDASOHZKRKGSZRGYKIKFTBGTEMDEXCTXDQUGONGTZSWZCJFHMIIVAXWRBNQVENZSRRTQYVEDKZLJOLNYRGRELGNJDBPPQXWDUQECYOKOYNAIPDH");

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
    msg.setTimeStamp(0.4590610010054471);
    msg.setSource(42927U);
    msg.setSourceEntity(50U);
    msg.setDestination(32443U);
    msg.setDestinationEntity(75U);
    msg.button = 169U;
    msg.value = 158U;

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
    msg.setTimeStamp(0.24534029272689106);
    msg.setSource(50892U);
    msg.setSourceEntity(142U);
    msg.setDestination(15344U);
    msg.setDestinationEntity(79U);
    msg.button = 74U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.155757421012911);
    msg.setSource(7347U);
    msg.setSourceEntity(10U);
    msg.setDestination(61509U);
    msg.setDestinationEntity(11U);
    msg.button = 170U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.6187412769030866);
    msg.setSource(7562U);
    msg.setSourceEntity(206U);
    msg.setDestination(54286U);
    msg.setDestinationEntity(242U);
    msg.op = 66U;
    msg.text.assign("MPJSWHAEDQLKUCCLZSEYTKCVMKRMSLJYNXCTRHZRQBWBVRSIWCBSWSFGVDHQETMJVONYLDOUNERREDGIGVZCNXIGPUABEMEIPVJRNTKRQQNGQXMVKPGUBAFFMSHVTOFDMAIKFIF");

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
    msg.setTimeStamp(0.5432212077320732);
    msg.setSource(41811U);
    msg.setSourceEntity(134U);
    msg.setDestination(54728U);
    msg.setDestinationEntity(75U);
    msg.op = 74U;
    msg.text.assign("NTRIGKKCBWGTDERLZZ");

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
    msg.setTimeStamp(0.5511880720351054);
    msg.setSource(60707U);
    msg.setSourceEntity(115U);
    msg.setDestination(52339U);
    msg.setDestinationEntity(239U);
    msg.op = 31U;
    msg.text.assign("XLRQXFFOJQTIDEOWGZMOKJNAUCBXDTFVLSMSEUVSVNZCZRIROQKGYMFPMUXWOTMBASCTLSKGZVOSBFERUWUKLIEJEBGRPGGFPZHDWRVIKUHCQCSLYVSIGBBXQDNACHLWPQLFNLIADMBEYSHUYDNYHAZPRNENUTDYZCCWAPMTPJYBWUKVZVKTIXF");

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
    msg.setTimeStamp(0.49274726906451516);
    msg.setSource(24546U);
    msg.setSourceEntity(55U);
    msg.setDestination(24299U);
    msg.setDestinationEntity(90U);
    msg.op = 7U;
    msg.time_remain = 0.45447472008389544;
    msg.sched_time = 0.035646235239244706;

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
    msg.setTimeStamp(0.06873254700834108);
    msg.setSource(698U);
    msg.setSourceEntity(205U);
    msg.setDestination(64641U);
    msg.setDestinationEntity(142U);
    msg.op = 247U;
    msg.time_remain = 0.05757064025076564;
    msg.sched_time = 0.5378495450434048;

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
    msg.setTimeStamp(0.039112797607891214);
    msg.setSource(36816U);
    msg.setSourceEntity(120U);
    msg.setDestination(19495U);
    msg.setDestinationEntity(194U);
    msg.op = 180U;
    msg.time_remain = 0.32648147059404253;
    msg.sched_time = 0.02669519690345834;

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
    msg.setTimeStamp(0.6680006529985587);
    msg.setSource(3464U);
    msg.setSourceEntity(195U);
    msg.setDestination(40843U);
    msg.setDestinationEntity(237U);
    msg.id = 83U;
    msg.op = 204U;
    msg.sched_time = 0.492115436126372;

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
    msg.setTimeStamp(0.5030847934953944);
    msg.setSource(11067U);
    msg.setSourceEntity(156U);
    msg.setDestination(24681U);
    msg.setDestinationEntity(25U);
    msg.id = 204U;
    msg.op = 67U;
    msg.sched_time = 0.8609503128966457;

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
    msg.setTimeStamp(0.5839531126425666);
    msg.setSource(30224U);
    msg.setSourceEntity(89U);
    msg.setDestination(5405U);
    msg.setDestinationEntity(243U);
    msg.id = 88U;
    msg.op = 40U;
    msg.sched_time = 0.3278990857598284;

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
    msg.setTimeStamp(0.06177856491742428);
    msg.setSource(17759U);
    msg.setSourceEntity(2U);
    msg.setDestination(19588U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.6016489727068801);
    msg.setSource(41472U);
    msg.setSourceEntity(88U);
    msg.setDestination(55957U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.8885648267479096);
    msg.setSource(9461U);
    msg.setSourceEntity(6U);
    msg.setDestination(56698U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.8088352816166722);
    msg.setSource(36312U);
    msg.setSourceEntity(109U);
    msg.setDestination(37223U);
    msg.setDestinationEntity(237U);
    msg.id = 143U;
    msg.label.assign("ULCDWZERVFKTDCSXRSPQOKPWOIQFRVHHCCTKQFDIKNUIVNWUMQSSPBLNEAYMQFZLDBQUXKGVRRJGIBNPIHCOKSNTNIMTBWXJTOJPFEBWGAGTLYEHGUZQWOQXBJUYKZZXGMQRCUYEAEBYEJ");
    msg.state = 254U;

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
    msg.setTimeStamp(0.8098247083844753);
    msg.setSource(10158U);
    msg.setSourceEntity(95U);
    msg.setDestination(8851U);
    msg.setDestinationEntity(14U);
    msg.id = 113U;
    msg.label.assign("IJHGGOPNWICNJHYXRHLGLMXMFPTKMXCUVLMV");
    msg.state = 31U;

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
    msg.setTimeStamp(0.01097378328390508);
    msg.setSource(8665U);
    msg.setSourceEntity(231U);
    msg.setDestination(62262U);
    msg.setDestinationEntity(157U);
    msg.id = 2U;
    msg.label.assign("CSGQSAQRAVMTZDUGNKSRQKHWHURCIXQIKRMSCPBYIDVEWIMFZEVUARYFYXZYUVFOLRZCWPJBMVRGVIXWNCVIHRIAFLTOUNTFLBZNPMXNSMKYFSWKEDGHZWJGBZPGLOUCFZ");
    msg.state = 128U;

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
    msg.setTimeStamp(0.5785604784717411);
    msg.setSource(56025U);
    msg.setSourceEntity(122U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(53U);
    msg.id = 176U;
    msg.op = 10U;

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
    msg.setTimeStamp(0.5753741861309996);
    msg.setSource(62298U);
    msg.setSourceEntity(212U);
    msg.setDestination(1264U);
    msg.setDestinationEntity(77U);
    msg.id = 214U;
    msg.op = 188U;

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
    msg.setTimeStamp(0.24854934706175402);
    msg.setSource(26679U);
    msg.setSourceEntity(242U);
    msg.setDestination(16332U);
    msg.setDestinationEntity(32U);
    msg.id = 175U;
    msg.op = 98U;

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
    msg.setTimeStamp(0.009843644696152398);
    msg.setSource(58568U);
    msg.setSourceEntity(242U);
    msg.setDestination(45185U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.42460351424159926;
    msg.lon = 0.9265670160651165;
    msg.height = 0.5808949998843633;
    msg.x = 0.08426555137956393;
    msg.y = 0.25941223636707733;
    msg.z = 0.10756568349281181;
    msg.phi = 0.4103106977122808;
    msg.theta = 0.7432031665794423;
    msg.psi = 0.019707528919786776;
    msg.u = 0.975246275231306;
    msg.v = 0.39753251698863457;
    msg.w = 0.2315655043708591;
    msg.vx = 0.01289550062357192;
    msg.vy = 0.40350786675105643;
    msg.vz = 0.08103862879207369;
    msg.p = 0.3924423781948382;
    msg.q = 0.05104622859975838;
    msg.r = 0.7824203340334239;
    msg.depth = 0.3897276759569205;
    msg.alt = 0.7601873428713417;

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
    msg.setTimeStamp(0.5838563741249098);
    msg.setSource(6518U);
    msg.setSourceEntity(241U);
    msg.setDestination(49931U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.587043993975157;
    msg.lon = 0.30557279644880553;
    msg.height = 0.040214948274491236;
    msg.x = 0.7746258290481117;
    msg.y = 0.2949604792163881;
    msg.z = 0.6195638714872084;
    msg.phi = 0.8684945812352345;
    msg.theta = 0.5539630095266348;
    msg.psi = 0.08218515823215733;
    msg.u = 0.40259234152310774;
    msg.v = 0.3336067594188975;
    msg.w = 0.7478267854758771;
    msg.vx = 0.550377073805187;
    msg.vy = 0.052733353628043766;
    msg.vz = 0.38460776694423415;
    msg.p = 0.7230278390184419;
    msg.q = 0.023874654333699508;
    msg.r = 0.06200076573835023;
    msg.depth = 0.6139433241073625;
    msg.alt = 0.24747205319431764;

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
    msg.setTimeStamp(0.23197329403567668);
    msg.setSource(28998U);
    msg.setSourceEntity(18U);
    msg.setDestination(14031U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.5234511022144535;
    msg.lon = 0.6804615695221173;
    msg.height = 0.8019742434615408;
    msg.x = 0.2230590907089004;
    msg.y = 0.43419248032281454;
    msg.z = 0.0664922859892354;
    msg.phi = 0.6281503534891032;
    msg.theta = 0.21087591431165742;
    msg.psi = 0.6705706846078079;
    msg.u = 0.6630433445883095;
    msg.v = 0.564902589428416;
    msg.w = 0.9223622488141149;
    msg.vx = 0.807655218882325;
    msg.vy = 0.10257157092391567;
    msg.vz = 0.11470712485536827;
    msg.p = 0.658243658835119;
    msg.q = 0.8524299012077513;
    msg.r = 0.13425985768691018;
    msg.depth = 0.6241106735765449;
    msg.alt = 0.830081536596269;

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
    msg.setTimeStamp(0.18699404612509118);
    msg.setSource(60701U);
    msg.setSourceEntity(145U);
    msg.setDestination(42515U);
    msg.setDestinationEntity(75U);
    msg.x = 0.8810791714141994;
    msg.y = 0.9826942590428395;
    msg.z = 0.356904254450653;

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
    msg.setTimeStamp(0.7041736797028519);
    msg.setSource(24074U);
    msg.setSourceEntity(53U);
    msg.setDestination(43664U);
    msg.setDestinationEntity(115U);
    msg.x = 0.5725364020881568;
    msg.y = 0.33699581757583497;
    msg.z = 0.7704199016360831;

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
    msg.setTimeStamp(0.9503298606738577);
    msg.setSource(15438U);
    msg.setSourceEntity(47U);
    msg.setDestination(29207U);
    msg.setDestinationEntity(164U);
    msg.x = 0.6006695435537791;
    msg.y = 0.5645506212272455;
    msg.z = 0.60999383358648;

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
    msg.setTimeStamp(0.025923533218633055);
    msg.setSource(42588U);
    msg.setSourceEntity(172U);
    msg.setDestination(17504U);
    msg.setDestinationEntity(70U);
    msg.value = 0.7021491660564343;

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
    msg.setTimeStamp(0.6578251793613654);
    msg.setSource(28536U);
    msg.setSourceEntity(42U);
    msg.setDestination(8476U);
    msg.setDestinationEntity(17U);
    msg.value = 0.21258917191505478;

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
    msg.setTimeStamp(0.689317104299077);
    msg.setSource(35439U);
    msg.setSourceEntity(48U);
    msg.setDestination(30319U);
    msg.setDestinationEntity(178U);
    msg.value = 0.5678046307010982;

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
    msg.setTimeStamp(0.9506063908830567);
    msg.setSource(41U);
    msg.setSourceEntity(83U);
    msg.setDestination(46993U);
    msg.setDestinationEntity(126U);
    msg.value = 0.2091003129606488;

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
    msg.setTimeStamp(0.07797722914726979);
    msg.setSource(21502U);
    msg.setSourceEntity(63U);
    msg.setDestination(32195U);
    msg.setDestinationEntity(220U);
    msg.value = 0.20545572421408909;

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
    msg.setTimeStamp(0.9072622623289829);
    msg.setSource(15930U);
    msg.setSourceEntity(118U);
    msg.setDestination(44932U);
    msg.setDestinationEntity(33U);
    msg.value = 0.08207871417732926;

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
    msg.setTimeStamp(0.54738574239872);
    msg.setSource(42371U);
    msg.setSourceEntity(100U);
    msg.setDestination(63821U);
    msg.setDestinationEntity(97U);
    msg.x = 0.3552995069033553;
    msg.y = 0.08097322797595885;
    msg.z = 0.3277794414504577;
    msg.phi = 0.48330909458903015;
    msg.theta = 0.6309314270227647;
    msg.psi = 0.5980436324169991;
    msg.p = 0.8158326431016286;
    msg.q = 0.564226615748283;
    msg.r = 0.5798332266885953;
    msg.u = 0.38395542772390256;
    msg.v = 0.6290431111798023;
    msg.w = 0.6306662508248683;
    msg.bias_psi = 0.5664288637082066;
    msg.bias_r = 0.3808766561529888;

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
    msg.setTimeStamp(0.8066526879860783);
    msg.setSource(50589U);
    msg.setSourceEntity(33U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(61U);
    msg.x = 0.761333896715243;
    msg.y = 0.8302916897977373;
    msg.z = 0.751384835803215;
    msg.phi = 0.6791995535900831;
    msg.theta = 0.8488817782408002;
    msg.psi = 0.49587069740217404;
    msg.p = 0.20598981864428234;
    msg.q = 0.021911432735544523;
    msg.r = 0.47813549348012296;
    msg.u = 0.9355080960199736;
    msg.v = 0.28465802865665224;
    msg.w = 0.2744330746452007;
    msg.bias_psi = 0.8666361711173027;
    msg.bias_r = 0.38984304427363403;

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
    msg.setTimeStamp(0.7174294661614808);
    msg.setSource(28661U);
    msg.setSourceEntity(229U);
    msg.setDestination(33907U);
    msg.setDestinationEntity(138U);
    msg.x = 0.05705486874378851;
    msg.y = 0.8453985122523177;
    msg.z = 0.5980302800765646;
    msg.phi = 0.5413802098952766;
    msg.theta = 0.8934185680908744;
    msg.psi = 0.9205786648421804;
    msg.p = 0.6016793479960576;
    msg.q = 0.48119883632053306;
    msg.r = 0.22905750684713;
    msg.u = 0.8855707119313841;
    msg.v = 0.8101696897571972;
    msg.w = 0.27159404068407456;
    msg.bias_psi = 0.5244060268776145;
    msg.bias_r = 0.9258018301609385;

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
    msg.setTimeStamp(0.6596218896974985);
    msg.setSource(2811U);
    msg.setSourceEntity(90U);
    msg.setDestination(16532U);
    msg.setDestinationEntity(132U);
    msg.bias_psi = 0.7258293331002467;
    msg.bias_r = 0.9402347029683251;
    msg.cog = 0.9633325542524721;
    msg.cyaw = 0.7349699934709637;
    msg.lbl_rej_level = 0.37287500253896466;
    msg.gps_rej_level = 0.7725368248433375;
    msg.custom_x = 0.4509923881126665;
    msg.custom_y = 0.017462157951012136;
    msg.custom_z = 0.07685892706260944;

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
    msg.setTimeStamp(0.18724507214837105);
    msg.setSource(48054U);
    msg.setSourceEntity(231U);
    msg.setDestination(34963U);
    msg.setDestinationEntity(222U);
    msg.bias_psi = 0.30163641733743096;
    msg.bias_r = 0.9647257004494558;
    msg.cog = 0.5613787873097393;
    msg.cyaw = 0.8490196529367071;
    msg.lbl_rej_level = 0.21767620682893474;
    msg.gps_rej_level = 0.2496241521325816;
    msg.custom_x = 0.298863605278779;
    msg.custom_y = 0.692525042151991;
    msg.custom_z = 0.4454621664040297;

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
    msg.setTimeStamp(0.6698015794314995);
    msg.setSource(19706U);
    msg.setSourceEntity(124U);
    msg.setDestination(52019U);
    msg.setDestinationEntity(249U);
    msg.bias_psi = 0.34715771960513364;
    msg.bias_r = 0.44074107296877474;
    msg.cog = 0.10057926392061411;
    msg.cyaw = 0.8172896198789026;
    msg.lbl_rej_level = 0.1873635528424067;
    msg.gps_rej_level = 0.8617247590671981;
    msg.custom_x = 0.8845738046269073;
    msg.custom_y = 0.9977375979111153;
    msg.custom_z = 0.34900118552274995;

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
    msg.setTimeStamp(0.49886460682830447);
    msg.setSource(34833U);
    msg.setSourceEntity(82U);
    msg.setDestination(39635U);
    msg.setDestinationEntity(245U);
    msg.utc_time = 0.22254366476353693;
    msg.reason = 188U;

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
    msg.setTimeStamp(0.8875811398356622);
    msg.setSource(20333U);
    msg.setSourceEntity(214U);
    msg.setDestination(14061U);
    msg.setDestinationEntity(115U);
    msg.utc_time = 0.7375399067165515;
    msg.reason = 204U;

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
    msg.setTimeStamp(0.21183280699103124);
    msg.setSource(10670U);
    msg.setSourceEntity(9U);
    msg.setDestination(7246U);
    msg.setDestinationEntity(151U);
    msg.utc_time = 0.2590788096255848;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.712122636656858);
    msg.setSource(19132U);
    msg.setSourceEntity(166U);
    msg.setDestination(2123U);
    msg.setDestinationEntity(133U);
    msg.id = 50U;
    msg.range = 0.6413076184763665;
    msg.acceptance = 209U;

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
    msg.setTimeStamp(0.6556259767621657);
    msg.setSource(8047U);
    msg.setSourceEntity(219U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(243U);
    msg.id = 93U;
    msg.range = 0.6259298735809151;
    msg.acceptance = 75U;

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
    msg.setTimeStamp(0.28817555018794816);
    msg.setSource(5174U);
    msg.setSourceEntity(154U);
    msg.setDestination(59079U);
    msg.setDestinationEntity(31U);
    msg.id = 247U;
    msg.range = 0.046291030488953555;
    msg.acceptance = 195U;

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
    msg.setTimeStamp(0.39292531822927157);
    msg.setSource(41692U);
    msg.setSourceEntity(75U);
    msg.setDestination(35154U);
    msg.setDestinationEntity(75U);
    msg.type = 108U;
    msg.reason = 38U;
    msg.value = 0.09532441496001309;
    msg.timestep = 0.7604501997663129;

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
    msg.setTimeStamp(0.7197268746352213);
    msg.setSource(59846U);
    msg.setSourceEntity(73U);
    msg.setDestination(47473U);
    msg.setDestinationEntity(151U);
    msg.type = 204U;
    msg.reason = 189U;
    msg.value = 0.5728586573907298;
    msg.timestep = 0.5900089381878582;

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
    msg.setTimeStamp(0.015305173680225104);
    msg.setSource(64142U);
    msg.setSourceEntity(61U);
    msg.setDestination(35154U);
    msg.setDestinationEntity(239U);
    msg.type = 72U;
    msg.reason = 120U;
    msg.value = 0.49492986744556966;
    msg.timestep = 0.26212878779379145;

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
    msg.setTimeStamp(0.3848922954432872);
    msg.setSource(21709U);
    msg.setSourceEntity(192U);
    msg.setDestination(60813U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.7557889946013604);
    msg.setSource(59031U);
    msg.setSourceEntity(20U);
    msg.setDestination(22204U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.8041438808415938);
    msg.setSource(652U);
    msg.setSourceEntity(113U);
    msg.setDestination(23010U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.6233111721807969);
    msg.setSource(14688U);
    msg.setSourceEntity(63U);
    msg.setDestination(5554U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("SMUCRDEFRSDPVYNMILDHLGEXJUNGXOTRTZXDRWTMTJVOVLWWPNUZAFAXLXPOBTOCANLRZSKBRGPCNOHRJWNVJBBCPZMMMKXDSIGFAJUNVHTLXZKQJOYORSCFBQJTCEDZMYHPXWNFWJEEEIMTEKHMEVGFKHYNRALUANDDLSCTGYZUZFVHUFCYYDGIBCEZSQJUKURXWPJQALYKOVOWSGQPGBWHQAIXMIVAKSYDUZIQ");
    msg.x = 0.8621031568556429;
    msg.y = 0.9432434917018532;
    msg.depth = 0.5026317423268156;
    msg.var_x = 0.08243629905125183;
    msg.var_y = 0.3374386052241062;

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
    msg.setTimeStamp(0.9203725433741688);
    msg.setSource(16869U);
    msg.setSourceEntity(23U);
    msg.setDestination(45545U);
    msg.setDestinationEntity(66U);
    msg.beacon.assign("YTQXDLYBIKSJNXDVLMOOUWIACQIPRZJNESJUCHUYOQKOBVRUQLINZFHPTVRWZHRSTFLCQIAXVOGZY");
    msg.x = 0.23281837262267246;
    msg.y = 0.6132424081827165;
    msg.depth = 0.6425654286832492;
    msg.var_x = 0.26390541910735565;
    msg.var_y = 0.8980720870761117;

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
    msg.setTimeStamp(0.5909164783506656);
    msg.setSource(10571U);
    msg.setSourceEntity(163U);
    msg.setDestination(41966U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("GYPJSXFXYFNZCJVYCGEUKGEMPALJUGEOBKPZNQNPRRACJDAT");
    msg.x = 0.3685672648189767;
    msg.y = 0.300295835893888;
    msg.depth = 0.43110425017839027;
    msg.var_x = 0.3702535531967629;
    msg.var_y = 0.796845774912599;

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
    msg.setTimeStamp(0.7436105208753241);
    msg.setSource(24176U);
    msg.setSourceEntity(122U);
    msg.setDestination(19212U);
    msg.setDestinationEntity(111U);
    msg.value = 0.31579071929222724;

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
    msg.setTimeStamp(0.11556067750221088);
    msg.setSource(13814U);
    msg.setSourceEntity(188U);
    msg.setDestination(15874U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5830937311830888;

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
    msg.setTimeStamp(0.30686391554607106);
    msg.setSource(28214U);
    msg.setSourceEntity(45U);
    msg.setDestination(13580U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9286538186966186;

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
    msg.setTimeStamp(0.35635348397260747);
    msg.setSource(43300U);
    msg.setSourceEntity(254U);
    msg.setDestination(56746U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9299014967416394;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.9191204792464744);
    msg.setSource(48188U);
    msg.setSourceEntity(123U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(66U);
    msg.value = 0.7924449375780014;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.5959834990420467);
    msg.setSource(9337U);
    msg.setSourceEntity(162U);
    msg.setDestination(23198U);
    msg.setDestinationEntity(197U);
    msg.value = 0.23413109144497601;
    msg.z_units = 188U;

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
    msg.setTimeStamp(0.9783215359400037);
    msg.setSource(6458U);
    msg.setSourceEntity(102U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8684256282260041;
    msg.speed_units = 83U;

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
    msg.setTimeStamp(0.06836256540823016);
    msg.setSource(49525U);
    msg.setSourceEntity(71U);
    msg.setDestination(27811U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5121094040872506;
    msg.speed_units = 28U;

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
    msg.setTimeStamp(0.3768120181097706);
    msg.setSource(16065U);
    msg.setSourceEntity(48U);
    msg.setDestination(30622U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6348544982365819;
    msg.speed_units = 29U;

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
    msg.setTimeStamp(0.8699303073800095);
    msg.setSource(14725U);
    msg.setSourceEntity(177U);
    msg.setDestination(55990U);
    msg.setDestinationEntity(148U);
    msg.value = 0.92090793436923;

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
    msg.setTimeStamp(0.9652303318434653);
    msg.setSource(51096U);
    msg.setSourceEntity(153U);
    msg.setDestination(60323U);
    msg.setDestinationEntity(184U);
    msg.value = 0.8147905384746772;

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
    msg.setTimeStamp(0.989381406129317);
    msg.setSource(59493U);
    msg.setSourceEntity(240U);
    msg.setDestination(45174U);
    msg.setDestinationEntity(33U);
    msg.value = 0.947175699849705;

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
    msg.setTimeStamp(0.8385253114249415);
    msg.setSource(50378U);
    msg.setSourceEntity(122U);
    msg.setDestination(20169U);
    msg.setDestinationEntity(215U);
    msg.value = 0.9991216006838253;

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
    msg.setTimeStamp(0.6128719602118063);
    msg.setSource(64650U);
    msg.setSourceEntity(166U);
    msg.setDestination(26395U);
    msg.setDestinationEntity(108U);
    msg.value = 0.4874896588880735;

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
    msg.setTimeStamp(0.8116395993322055);
    msg.setSource(11826U);
    msg.setSourceEntity(245U);
    msg.setDestination(55638U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6464529982462901;

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
    msg.setTimeStamp(0.7387747655587317);
    msg.setSource(21251U);
    msg.setSourceEntity(47U);
    msg.setDestination(50742U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7427161541782838;

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
    msg.setTimeStamp(0.19840533453896592);
    msg.setSource(59147U);
    msg.setSourceEntity(110U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(110U);
    msg.value = 0.06706629246406759;

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
    msg.setTimeStamp(0.8827837541030876);
    msg.setSource(10408U);
    msg.setSourceEntity(214U);
    msg.setDestination(42143U);
    msg.setDestinationEntity(44U);
    msg.value = 0.19833943699828904;

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
    msg.setTimeStamp(0.9122394598338951);
    msg.setSource(18672U);
    msg.setSourceEntity(193U);
    msg.setDestination(25109U);
    msg.setDestinationEntity(216U);
    msg.start_lat = 0.2823041131035571;
    msg.start_lon = 0.7257550331457501;
    msg.start_z = 0.7496593734607747;
    msg.start_z_units = 13U;
    msg.end_lat = 0.23455447808985885;
    msg.end_lon = 0.8842973732489936;
    msg.end_z = 0.8573329649155476;
    msg.end_z_units = 193U;
    msg.speed = 0.13834985514108245;
    msg.speed_units = 11U;
    msg.lradius = 0.04008677872706368;
    msg.flags = 250U;

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
    msg.setTimeStamp(0.5949163624705579);
    msg.setSource(55540U);
    msg.setSourceEntity(197U);
    msg.setDestination(46695U);
    msg.setDestinationEntity(142U);
    msg.start_lat = 0.5847071009771472;
    msg.start_lon = 0.26550109980325165;
    msg.start_z = 0.0872159174771564;
    msg.start_z_units = 47U;
    msg.end_lat = 0.9311265271167971;
    msg.end_lon = 0.25219781062889957;
    msg.end_z = 0.35332686437174454;
    msg.end_z_units = 209U;
    msg.speed = 0.9098127005271633;
    msg.speed_units = 16U;
    msg.lradius = 0.6737650869777637;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.5899361764483094);
    msg.setSource(6612U);
    msg.setSourceEntity(173U);
    msg.setDestination(43575U);
    msg.setDestinationEntity(108U);
    msg.start_lat = 0.6779595150786952;
    msg.start_lon = 0.3293472079652029;
    msg.start_z = 0.27669187153632013;
    msg.start_z_units = 129U;
    msg.end_lat = 0.11003782849043509;
    msg.end_lon = 0.5968849552540575;
    msg.end_z = 0.3880665053540051;
    msg.end_z_units = 139U;
    msg.speed = 0.05632394358516557;
    msg.speed_units = 26U;
    msg.lradius = 0.15391133935426382;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.6143235216422025);
    msg.setSource(25744U);
    msg.setSourceEntity(104U);
    msg.setDestination(22902U);
    msg.setDestinationEntity(188U);
    msg.x = 0.7645928469573814;
    msg.y = 0.14268444980681494;
    msg.z = 0.3702901983454294;
    msg.k = 0.28696117731375304;
    msg.m = 0.37008840663219733;
    msg.n = 0.46470958759066705;
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
    msg.setTimeStamp(0.9618711131171905);
    msg.setSource(47833U);
    msg.setSourceEntity(93U);
    msg.setDestination(12947U);
    msg.setDestinationEntity(92U);
    msg.x = 0.2550953854808544;
    msg.y = 0.610804879993774;
    msg.z = 0.9621915932728576;
    msg.k = 0.5058554483774432;
    msg.m = 0.7456356142731589;
    msg.n = 0.9311986970710139;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.45879094671757503);
    msg.setSource(33644U);
    msg.setSourceEntity(204U);
    msg.setDestination(14055U);
    msg.setDestinationEntity(246U);
    msg.x = 0.9033562670916186;
    msg.y = 0.32609627287317633;
    msg.z = 0.7269193004930337;
    msg.k = 0.8786882978837429;
    msg.m = 0.5402425579245146;
    msg.n = 0.49587470236063413;
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
    msg.setTimeStamp(0.9943838391386401);
    msg.setSource(48619U);
    msg.setSourceEntity(115U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(111U);
    msg.value = 0.8185765730907928;

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
    msg.setTimeStamp(0.3532880061557798);
    msg.setSource(38416U);
    msg.setSourceEntity(164U);
    msg.setDestination(15536U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7919319562052476;

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
    msg.setTimeStamp(0.7081815986103338);
    msg.setSource(17989U);
    msg.setSourceEntity(20U);
    msg.setDestination(270U);
    msg.setDestinationEntity(73U);
    msg.value = 0.9617462641143312;

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
    msg.setTimeStamp(0.46256163808333917);
    msg.setSource(28839U);
    msg.setSourceEntity(98U);
    msg.setDestination(45657U);
    msg.setDestinationEntity(74U);
    msg.u = 0.9941458675558015;
    msg.v = 0.9229255200392842;
    msg.w = 0.16696991247934734;
    msg.p = 0.40797237802153197;
    msg.q = 0.9887595277781145;
    msg.r = 0.9650128292967839;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.032324406614290146);
    msg.setSource(5876U);
    msg.setSourceEntity(86U);
    msg.setDestination(46701U);
    msg.setDestinationEntity(99U);
    msg.u = 0.25085628030230134;
    msg.v = 0.07137694057096278;
    msg.w = 0.15245142373498988;
    msg.p = 0.3487236927039934;
    msg.q = 0.8726658193254702;
    msg.r = 0.7668447841356412;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.9835775103949058);
    msg.setSource(36670U);
    msg.setSourceEntity(208U);
    msg.setDestination(64016U);
    msg.setDestinationEntity(226U);
    msg.u = 0.9584220227231145;
    msg.v = 0.22508113466485014;
    msg.w = 0.5000914636810545;
    msg.p = 0.0790246912514857;
    msg.q = 0.9424404893683073;
    msg.r = 0.7967658586583927;
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
    msg.setTimeStamp(0.3716763029568779);
    msg.setSource(29402U);
    msg.setSourceEntity(14U);
    msg.setDestination(43142U);
    msg.setDestinationEntity(18U);
    msg.start_lat = 0.6645063816439235;
    msg.start_lon = 0.230008934604215;
    msg.start_z = 0.11918104949292763;
    msg.start_z_units = 7U;
    msg.end_lat = 0.23603065856405891;
    msg.end_lon = 0.5251541504285419;
    msg.end_z = 0.6859134083274262;
    msg.end_z_units = 223U;
    msg.lradius = 0.4007259508036487;
    msg.flags = 12U;
    msg.x = 0.3434077061884032;
    msg.y = 0.22082959998912255;
    msg.z = 0.6431787963853097;
    msg.vx = 0.7892925158954417;
    msg.vy = 0.2976200931507118;
    msg.vz = 0.13084674588352208;
    msg.course_error = 0.5353618234186434;
    msg.eta = 55823U;

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
    msg.setTimeStamp(0.324371002985801);
    msg.setSource(20321U);
    msg.setSourceEntity(156U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(71U);
    msg.start_lat = 0.12382335640661879;
    msg.start_lon = 0.1170252537086175;
    msg.start_z = 0.6264536922236608;
    msg.start_z_units = 29U;
    msg.end_lat = 0.9537008796967326;
    msg.end_lon = 0.9214288728477696;
    msg.end_z = 0.44521556023747644;
    msg.end_z_units = 149U;
    msg.lradius = 0.8820964677245481;
    msg.flags = 208U;
    msg.x = 0.3021678194571181;
    msg.y = 0.8141967880958988;
    msg.z = 0.604110759151963;
    msg.vx = 0.5868127312876219;
    msg.vy = 0.039923199156021716;
    msg.vz = 0.2600087047872234;
    msg.course_error = 0.7334130560403914;
    msg.eta = 25058U;

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
    msg.setTimeStamp(0.04283109361427828);
    msg.setSource(57265U);
    msg.setSourceEntity(193U);
    msg.setDestination(57540U);
    msg.setDestinationEntity(200U);
    msg.start_lat = 0.3301695650280059;
    msg.start_lon = 0.44073490418113903;
    msg.start_z = 0.487766624360926;
    msg.start_z_units = 158U;
    msg.end_lat = 0.7553720636919424;
    msg.end_lon = 0.6272114959398508;
    msg.end_z = 0.5789489618130211;
    msg.end_z_units = 11U;
    msg.lradius = 0.5093305042768014;
    msg.flags = 81U;
    msg.x = 0.42473564192822155;
    msg.y = 0.17817649208170727;
    msg.z = 0.9561813547271152;
    msg.vx = 0.0055760077800327545;
    msg.vy = 0.8830125398699392;
    msg.vz = 0.08129843686886806;
    msg.course_error = 0.5806386318455363;
    msg.eta = 38912U;

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
    msg.setTimeStamp(0.8137911714869634);
    msg.setSource(55001U);
    msg.setSourceEntity(142U);
    msg.setDestination(16361U);
    msg.setDestinationEntity(68U);
    msg.k = 0.6485590022170464;
    msg.m = 0.24841324442023283;
    msg.n = 0.018045746724673517;

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
    msg.setTimeStamp(0.41727066761552845);
    msg.setSource(3557U);
    msg.setSourceEntity(43U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(174U);
    msg.k = 0.8001114030851885;
    msg.m = 0.02682064669444373;
    msg.n = 0.3918119187149356;

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
    msg.setTimeStamp(0.5612706551814833);
    msg.setSource(8217U);
    msg.setSourceEntity(148U);
    msg.setDestination(50930U);
    msg.setDestinationEntity(150U);
    msg.k = 0.5439414672843048;
    msg.m = 0.6899562667669109;
    msg.n = 0.15151637960757414;

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
    msg.setTimeStamp(0.9968840691869634);
    msg.setSource(13711U);
    msg.setSourceEntity(61U);
    msg.setDestination(16646U);
    msg.setDestinationEntity(216U);
    msg.p = 0.533652868220735;
    msg.i = 0.49599742982060735;
    msg.d = 0.7028475693194651;
    msg.a = 0.0752248678482943;

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
    msg.setTimeStamp(0.7748503556514214);
    msg.setSource(54441U);
    msg.setSourceEntity(51U);
    msg.setDestination(26434U);
    msg.setDestinationEntity(192U);
    msg.p = 0.5283094439742004;
    msg.i = 0.4570215158855707;
    msg.d = 0.1380980551247868;
    msg.a = 0.841988417879733;

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
    msg.setTimeStamp(0.8483046552815892);
    msg.setSource(59746U);
    msg.setSourceEntity(160U);
    msg.setDestination(26404U);
    msg.setDestinationEntity(77U);
    msg.p = 0.8660634610478255;
    msg.i = 0.715278979171327;
    msg.d = 0.4459455665473071;
    msg.a = 0.7485492432813616;

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
    msg.setTimeStamp(0.0657245689258884);
    msg.setSource(2670U);
    msg.setSourceEntity(188U);
    msg.setDestination(1713U);
    msg.setDestinationEntity(17U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.8447981830958508);
    msg.setSource(57178U);
    msg.setSourceEntity(166U);
    msg.setDestination(57685U);
    msg.setDestinationEntity(4U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.8340619590295335);
    msg.setSource(3965U);
    msg.setSourceEntity(164U);
    msg.setDestination(58397U);
    msg.setDestinationEntity(112U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.905476895164444);
    msg.setSource(19241U);
    msg.setSourceEntity(153U);
    msg.setDestination(11661U);
    msg.setDestinationEntity(183U);
    msg.timeout = 59285U;
    msg.lat = 0.22660172146675228;
    msg.lon = 0.6337762877235589;
    msg.z = 0.26498414216743404;
    msg.z_units = 206U;
    msg.speed = 0.9523779368688478;
    msg.speed_units = 142U;
    msg.roll = 0.2549525327778214;
    msg.pitch = 0.6469504503638055;
    msg.yaw = 0.057479380060930785;
    msg.custom.assign("CNORUUQDVSJEQLRSOMFYQFYCMZVLUPHFDHGSYPYBAUKDJIJMW");

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
    msg.setTimeStamp(0.24420817683252183);
    msg.setSource(27500U);
    msg.setSourceEntity(61U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(246U);
    msg.timeout = 45538U;
    msg.lat = 0.9128757044857562;
    msg.lon = 0.042840447023910544;
    msg.z = 0.456086849840332;
    msg.z_units = 76U;
    msg.speed = 0.9520441376557077;
    msg.speed_units = 246U;
    msg.roll = 0.9603416213013912;
    msg.pitch = 0.6101678292923898;
    msg.yaw = 0.34083826146611096;
    msg.custom.assign("BXHLWLOZQWRYXXXITITZSZNTEQEEJLMDUXTBSONGUKWYJCCRFKPDPIBVCNTKPUIVJIKCGVTPQIBPTHGZPGOCSZQCZJFVDCXVPOUFGGWVNDAE");

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
    msg.setTimeStamp(0.9441927616958905);
    msg.setSource(16325U);
    msg.setSourceEntity(187U);
    msg.setDestination(33104U);
    msg.setDestinationEntity(212U);
    msg.timeout = 29325U;
    msg.lat = 0.06071144678529816;
    msg.lon = 0.3662795260418392;
    msg.z = 0.7575825661691852;
    msg.z_units = 165U;
    msg.speed = 0.6914383618700419;
    msg.speed_units = 91U;
    msg.roll = 0.7428291245697118;
    msg.pitch = 0.2654276367196923;
    msg.yaw = 0.5613938805667761;
    msg.custom.assign("NPEEJHIFIQNHBORQGDFOIXPMYJZUOBGFRDLUUOCWPEACEITJVMCTNCGOVSVLZFGVSSSBYMJSAHDQQTABJEHFYPQJWTYFJCHUVXOIUXMBFKGYLGRADRHIEINKJABSXEZMQAFPTBRRMFLNSCDVTRUNQTHANUSYOBWWKKEKMKYOLVIBKUXLZO");

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
    msg.setTimeStamp(0.45893324543025005);
    msg.setSource(46088U);
    msg.setSourceEntity(241U);
    msg.setDestination(31264U);
    msg.setDestinationEntity(22U);
    msg.timeout = 3766U;
    msg.lat = 0.17299492027448637;
    msg.lon = 0.40444235458213773;
    msg.z = 0.6233106793975339;
    msg.z_units = 224U;
    msg.speed = 0.5523382071953357;
    msg.speed_units = 9U;
    msg.duration = 30028U;
    msg.radius = 0.034362065398212405;
    msg.flags = 53U;
    msg.custom.assign("FIHKTXTTJMRXJLMHZNHZABLUCEZAXHHYAYWHQJAUPYDRZIOSREZMCYKYSDQPWPQI");

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
    msg.setTimeStamp(0.8323560314433842);
    msg.setSource(41560U);
    msg.setSourceEntity(44U);
    msg.setDestination(35216U);
    msg.setDestinationEntity(89U);
    msg.timeout = 16378U;
    msg.lat = 0.616395026553848;
    msg.lon = 0.6034399343684174;
    msg.z = 0.21032983345769563;
    msg.z_units = 94U;
    msg.speed = 0.06281249189068305;
    msg.speed_units = 181U;
    msg.duration = 34216U;
    msg.radius = 0.04882616737597634;
    msg.flags = 200U;
    msg.custom.assign("FHZWPFPSMLVUENTHXAIMZHRPLECIMVNLXTXBKVORUYBXHQWISGGRYHDOMIDKYFYBREJBXTVBUHFISKBLQDPJKCEUCSHJNMCGLOSYWITHKQVOUUCSHYFBFTAAEUNWQZXVXXAQRPDTZOIZBUZRPRKXNMNYJGKIWPZ");

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
    msg.setTimeStamp(0.5311813955184278);
    msg.setSource(1863U);
    msg.setSourceEntity(10U);
    msg.setDestination(20363U);
    msg.setDestinationEntity(101U);
    msg.timeout = 28850U;
    msg.lat = 0.14700563946117073;
    msg.lon = 0.09380793166630474;
    msg.z = 0.8080467525685989;
    msg.z_units = 21U;
    msg.speed = 0.737745923171628;
    msg.speed_units = 187U;
    msg.duration = 4085U;
    msg.radius = 0.8482244366983912;
    msg.flags = 56U;
    msg.custom.assign("OIDHKHNUDFPMDRHUKPUAJBVBEMMOSMNAFPQCCNPXBVLYJHITKWKKJHOEJUTIZOYABSLPSJULAGAFDJNNRIOEOCRERGWGQVZDXZJGELEFYSLIQGKFYUTPLSQSTABXZCEQMOYZKWXBYUBNQWXPSUBIAVJFVFVNXOKVMJSNMQCMHTXRISNKLCHGVP");

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
    msg.setTimeStamp(0.5955831509605979);
    msg.setSource(43519U);
    msg.setSourceEntity(239U);
    msg.setDestination(43155U);
    msg.setDestinationEntity(212U);
    msg.custom.assign("EFMCIXZYCSQELBBMZQDLZNNMZHLKTBOJOUNVJHTLMFDVPPMUCIVOASDNMWIGTKZGUXVVJUXQAEHIKCZSRGELAJACQYXLBGDEWFRFFJYMZYQGSNHYUAKUXBEDIUSPJWEYJFILWAHYQOGRXIRKSGKTXDNCKRPYARLOSZYLBGMFYTPMLIOXUPVRNWUDFRBPHTKOHHOGBDOVKHNQSEJOTPPRUWBECRDSAGQMNBZEW");

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
    msg.setTimeStamp(0.5684803820152405);
    msg.setSource(649U);
    msg.setSourceEntity(79U);
    msg.setDestination(49277U);
    msg.setDestinationEntity(251U);
    msg.custom.assign("DDDCUQFCEBRNBHLAZCINWFZOEGWVPGHUZVDJWSKNNUPSLTOJM");

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
    msg.setTimeStamp(0.3753254938145003);
    msg.setSource(41974U);
    msg.setSourceEntity(97U);
    msg.setDestination(41000U);
    msg.setDestinationEntity(151U);
    msg.custom.assign("XXPCLVZJNHAHAGZRHTJLPVTJHICBUGPAYRMZVLQUSWTQODECYIMYQYZACZKZRASJVJZFBWWEZEGMOGFBBUNMKXNBLNQBKBNWILAYSUWEGLEIEDUNMMFBOKIFLOBMSSRRQLQPPOGQKTXLUWTGMAOTAMQ");

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
    msg.setTimeStamp(0.839661774893659);
    msg.setSource(24559U);
    msg.setSourceEntity(131U);
    msg.setDestination(40392U);
    msg.setDestinationEntity(181U);
    msg.timeout = 36054U;
    msg.lat = 0.9208212604376566;
    msg.lon = 0.7602628240891361;
    msg.z = 0.6232505723715198;
    msg.z_units = 71U;
    msg.duration = 61384U;
    msg.speed = 0.6215589893781721;
    msg.speed_units = 211U;
    msg.type = 190U;
    msg.radius = 0.28995447730285884;
    msg.length = 0.5575488137037229;
    msg.bearing = 0.30544265832801554;
    msg.direction = 220U;
    msg.custom.assign("GFLJURZQQQZEUTRGLRIYONSYECTDPVMTEKDNVUBJAPXNKXIHVSKIILHEPLGSOKOZZMHJANPDGBDCLXEZNMREVAJHJQVYBWNPCYZKOUWLFKTHNTSHTGTIWGSIFRYYMDQKKAOSERCKTEUJXSFYU");

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
    msg.setTimeStamp(0.840192085526123);
    msg.setSource(6514U);
    msg.setSourceEntity(160U);
    msg.setDestination(21650U);
    msg.setDestinationEntity(46U);
    msg.timeout = 37062U;
    msg.lat = 0.4397573525311437;
    msg.lon = 0.47663468076456583;
    msg.z = 0.9725247527576786;
    msg.z_units = 14U;
    msg.duration = 39985U;
    msg.speed = 0.009837501222987322;
    msg.speed_units = 204U;
    msg.type = 200U;
    msg.radius = 0.7692220108352615;
    msg.length = 0.23812252015750413;
    msg.bearing = 0.8126855160519729;
    msg.direction = 252U;
    msg.custom.assign("XKYXLKUIXNKVVJCLKQODQAOQRJHBTBYGXTYMSTSPRCNNSOKZZRSTLJFCHTLLF");

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
    msg.setTimeStamp(0.22530248239026218);
    msg.setSource(59915U);
    msg.setSourceEntity(14U);
    msg.setDestination(24182U);
    msg.setDestinationEntity(246U);
    msg.timeout = 31428U;
    msg.lat = 0.8611480325925687;
    msg.lon = 0.5838664557670948;
    msg.z = 0.32642673897072116;
    msg.z_units = 186U;
    msg.duration = 20563U;
    msg.speed = 0.9531006843612941;
    msg.speed_units = 176U;
    msg.type = 246U;
    msg.radius = 0.3021800971575449;
    msg.length = 0.7118597175125473;
    msg.bearing = 0.09713036445033929;
    msg.direction = 180U;
    msg.custom.assign("FCCQTSFDEJNPCYPJQOEWBOUEZUBYWPATKZNOFBJJWGAQJDTPXLID");

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
    msg.setTimeStamp(0.2418766300867896);
    msg.setSource(48964U);
    msg.setSourceEntity(138U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(42U);
    msg.duration = 21258U;
    msg.custom.assign("SOGTLXRVZABGVUVGHMZQLKZUOESDPGOQEWVNDRUMFKZYKZWOXYQBTUKMTTNHIFVSVDSLOVXFCJDLAJKNSZJSPWGDGNUFBLRFYCQCDSWHXEJROPXKNDSIAUJFTHHLSRBBEQAICRYZEIHTZXMYIKPMMPALPLNRXDCAOBBOYKOCZWGAAXWWIUQYHGJPXYNRXAMVKJNPYBFFQLNWF");

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
    msg.setTimeStamp(0.6515463022858394);
    msg.setSource(37833U);
    msg.setSourceEntity(45U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(56U);
    msg.duration = 63255U;
    msg.custom.assign("FQVADUYVRWGKNRLOGABOSDMIXSCPKWMEDAHJLXSKUCETYYPJXOWUPLNSEQNVJHGMTNASDMYJPDKXAFWJBNLDQZFNGTJVFGBOOXCQNZNZWBZUFIYHEJZERVEXEAOPKVCLSRXOITXTOQBRFUQBZJUOAAJFYRIYPPHGEZLLPUYBAWXMCDFVZSDXCZIHMUMRWRPEKMDVUHQQYELCBNFIWSHWGIVLHABDIZCGIMPOMHQGBNSTVSTKTFKULCRTJC");

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
    msg.setTimeStamp(0.29421514552555783);
    msg.setSource(22709U);
    msg.setSourceEntity(171U);
    msg.setDestination(5467U);
    msg.setDestinationEntity(44U);
    msg.duration = 60833U;
    msg.custom.assign("AVXGHTPXIMSFTIRYPAVHPOAHFUIZSRSBRWXKDBEEVWLOPDEPDGWDQZIEEQALHQYGWGXTNFXRQNJDRVWDGYRXCZJOZENHLOYSJLCUCUYEBIKN");

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
    msg.setTimeStamp(0.5401882280110112);
    msg.setSource(35337U);
    msg.setSourceEntity(236U);
    msg.setDestination(57074U);
    msg.setDestinationEntity(97U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7417255601587396;
    msg.control.set(tmp_msg_0);
    msg.duration = 60466U;
    msg.custom.assign("LHFGQKDMDQVZUZBVCNXHXCFQDSPVYVZKVSHFWLKHONDGGCMNYADBFLSDETSAXAPRHSTBYSATWMCERIFGIDOVTHIUEVQTZWTPPOUYYLYK");

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
    msg.setTimeStamp(0.8452181871811392);
    msg.setSource(4212U);
    msg.setSourceEntity(178U);
    msg.setDestination(19711U);
    msg.setDestinationEntity(155U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.615428665544475;
    msg.control.set(tmp_msg_0);
    msg.duration = 42813U;
    msg.custom.assign("UAWEGLXWMSFHFTGDKGCHLJIBHFHNRUGDLMWKYMOVYANHQRPYUDLEBSDRRVBSYONGUYTJDIXMVDZZNHBEI");

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
    msg.setTimeStamp(0.9950726274851298);
    msg.setSource(416U);
    msg.setSourceEntity(123U);
    msg.setDestination(12484U);
    msg.setDestinationEntity(50U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9311416715108278;
    msg.control.set(tmp_msg_0);
    msg.duration = 16858U;
    msg.custom.assign("PLFNEHXYNVMIRYDWSDMUXASIIESHSVFLSZYMCBFEKRSHHQCZWVKVRUGKLTVZ");

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
    msg.setTimeStamp(0.232792399593151);
    msg.setSource(60915U);
    msg.setSourceEntity(24U);
    msg.setDestination(13854U);
    msg.setDestinationEntity(199U);
    msg.timeout = 55262U;
    msg.lat = 0.29412036174675693;
    msg.lon = 0.1597318362342226;
    msg.z = 0.7590528806562599;
    msg.z_units = 51U;
    msg.speed = 0.916816930908757;
    msg.speed_units = 194U;
    msg.bearing = 0.6070898510722023;
    msg.cross_angle = 0.07919485802825599;
    msg.width = 0.6880658090653815;
    msg.length = 0.1836608220363335;
    msg.hstep = 0.0033734077194833567;
    msg.coff = 120U;
    msg.alternation = 168U;
    msg.flags = 34U;
    msg.custom.assign("VTVSTCEZRTYGCWQDRLKSQJGHSJZCJJMHZJTACYAOXZLVGMUXKKRABZAYTDFGGDXDTBSISKDYNVAHUVQNBTNPDLYPKPXDNQFRLFPGPOWEPRYFXXFWGBEBTH");

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
    msg.setTimeStamp(0.6551750286687519);
    msg.setSource(16939U);
    msg.setSourceEntity(220U);
    msg.setDestination(28651U);
    msg.setDestinationEntity(193U);
    msg.timeout = 17725U;
    msg.lat = 0.2982633845526559;
    msg.lon = 0.5132060660981779;
    msg.z = 0.4814122568889372;
    msg.z_units = 77U;
    msg.speed = 0.8925792446684977;
    msg.speed_units = 112U;
    msg.bearing = 0.31501186365204437;
    msg.cross_angle = 0.31745770693772934;
    msg.width = 0.5573592850598073;
    msg.length = 0.46454263130912;
    msg.hstep = 0.903968311610582;
    msg.coff = 86U;
    msg.alternation = 100U;
    msg.flags = 165U;
    msg.custom.assign("EMJNQOJDXXCNMXKYQFJGATRDGIIKXMWFLBEDXLICCYUEPYQFQOMUBPXTENVWGKKJVZBGFDJTZOHQRFWTELFRMQDASNHDDNZKESLVATWABKBJUGYRVY");

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
    msg.setTimeStamp(0.590259463972874);
    msg.setSource(21036U);
    msg.setSourceEntity(67U);
    msg.setDestination(21775U);
    msg.setDestinationEntity(236U);
    msg.timeout = 61533U;
    msg.lat = 0.33765074441509857;
    msg.lon = 0.19273971035209292;
    msg.z = 0.8670821817733363;
    msg.z_units = 138U;
    msg.speed = 0.8543604500686323;
    msg.speed_units = 142U;
    msg.bearing = 0.4805143582945507;
    msg.cross_angle = 0.9785882191473174;
    msg.width = 0.766936349908413;
    msg.length = 0.8261684799785961;
    msg.hstep = 0.8860741727817008;
    msg.coff = 58U;
    msg.alternation = 59U;
    msg.flags = 105U;
    msg.custom.assign("JPEIWIZBUEVILNKHZPCVRJMFOYAMHFULXTWJKOKYILEMNDYHCSTQWEQRRBJDEMPBAWMPSXUCHYKUIBVXATZJZNBEZOXSFOBFWEQIVDKANTGLXRODNDXMSUSYNQFSGETXVRMWRFGBQQQCCURCYGGNEOHLXLJXDSJTTOZZTHIUIJAVLZAXGFYOCUPUWVDWPKTSODTSQVCPKZHNMYBGKPH");

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
    msg.setTimeStamp(0.985240058184679);
    msg.setSource(10273U);
    msg.setSourceEntity(20U);
    msg.setDestination(39763U);
    msg.setDestinationEntity(246U);
    msg.timeout = 4832U;
    msg.lat = 0.6971561393181711;
    msg.lon = 0.49716146533844885;
    msg.z = 0.7903667271373678;
    msg.z_units = 245U;
    msg.speed = 0.5379881910873441;
    msg.speed_units = 194U;
    msg.custom.assign("RARKWHBPSMCSWSEWEYDHQZSLRUHPMBXMIWCFHYEVUOLYHVORWVTLRODIPHCBZXYEABVVNUAGLBWXQWGWKRJEXEDDFRZTBECYNDXLNQYLNOMCMNIJORUWPWAOLZDJATIENKIXKIUAZPRQMALINCTNARQBIEFPJDZCYTJTZOEPDVKGDPJKTSYFXJSNKGSXPHQZAFTPJKSBOV");

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
    msg.setTimeStamp(0.4323974338805223);
    msg.setSource(28896U);
    msg.setSourceEntity(102U);
    msg.setDestination(62347U);
    msg.setDestinationEntity(126U);
    msg.timeout = 64089U;
    msg.lat = 0.47415092504043577;
    msg.lon = 0.7121226407485743;
    msg.z = 0.24080002624920105;
    msg.z_units = 53U;
    msg.speed = 0.21619143767829252;
    msg.speed_units = 98U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.49460531616719783;
    tmp_msg_0.y = 0.586301224038443;
    tmp_msg_0.z = 0.25367530017759543;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GMTSJOYZHJYMFHBRQFVPRMVJUVVFTYBFUHAWNAVZQGMQSMBUHPDOPETRWHANAELAEMEUEJLHGTZLRWZYWBWRLEVCOHENXZJSAXRKKTUPUGYUQONYHFICNWKDJAQKFUBBZPIUXIMGXLYJQLQSTCZBEIXKVDABJMNWMDIJGSODHLPQDCKXDNZPQDSXIKPBPGDQKGCXV");

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
    msg.setTimeStamp(0.3498023445339703);
    msg.setSource(45905U);
    msg.setSourceEntity(69U);
    msg.setDestination(31446U);
    msg.setDestinationEntity(179U);
    msg.timeout = 59599U;
    msg.lat = 0.623288541202501;
    msg.lon = 0.06126925233271896;
    msg.z = 0.6450334920213973;
    msg.z_units = 129U;
    msg.speed = 0.27606688907404486;
    msg.speed_units = 216U;
    msg.custom.assign("SDZNKZFEXBVPRHIJ");

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
    msg.setTimeStamp(0.43271131739236357);
    msg.setSource(63634U);
    msg.setSourceEntity(229U);
    msg.setDestination(34702U);
    msg.setDestinationEntity(227U);
    msg.x = 0.37963331565593095;
    msg.y = 0.14699920697777602;
    msg.z = 0.338330922351344;

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
    msg.setTimeStamp(0.5601143866345736);
    msg.setSource(22804U);
    msg.setSourceEntity(179U);
    msg.setDestination(17443U);
    msg.setDestinationEntity(64U);
    msg.x = 0.6032569325388633;
    msg.y = 0.8635568939861484;
    msg.z = 0.9213340431998457;

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
    msg.setTimeStamp(0.8644182080533988);
    msg.setSource(32478U);
    msg.setSourceEntity(109U);
    msg.setDestination(65033U);
    msg.setDestinationEntity(10U);
    msg.x = 0.8677931447384976;
    msg.y = 0.5128444298311385;
    msg.z = 0.4239054319680149;

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
    msg.setTimeStamp(0.26230515280189914);
    msg.setSource(50527U);
    msg.setSourceEntity(120U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(228U);
    msg.timeout = 43208U;
    msg.lat = 0.14871165901762495;
    msg.lon = 0.472739099673244;
    msg.z = 0.5006836827914743;
    msg.z_units = 187U;
    msg.amplitude = 0.8473882801418806;
    msg.pitch = 0.5507135917951462;
    msg.speed = 0.8956123477390405;
    msg.speed_units = 140U;
    msg.custom.assign("MQOYVIOWVRACWIDOUECKWDRQCXOVHW");

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
    msg.setTimeStamp(0.5324161776831859);
    msg.setSource(30427U);
    msg.setSourceEntity(234U);
    msg.setDestination(35175U);
    msg.setDestinationEntity(137U);
    msg.timeout = 55615U;
    msg.lat = 0.41215365267388504;
    msg.lon = 0.6077038157147973;
    msg.z = 0.5050346828965003;
    msg.z_units = 152U;
    msg.amplitude = 0.3517906618899991;
    msg.pitch = 0.49888359352855327;
    msg.speed = 0.5790083260438162;
    msg.speed_units = 20U;
    msg.custom.assign("MGNVLBCNJQURJXQKOPUHZGNOGUDBKJDNEPWUXFWNIQPMSCSUMYEIOFWTXZX");

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
    msg.setTimeStamp(0.9526624608214649);
    msg.setSource(5067U);
    msg.setSourceEntity(121U);
    msg.setDestination(62472U);
    msg.setDestinationEntity(250U);
    msg.timeout = 64747U;
    msg.lat = 0.40705668249046634;
    msg.lon = 0.076550444259606;
    msg.z = 0.4800711956591075;
    msg.z_units = 70U;
    msg.amplitude = 0.03885105529126498;
    msg.pitch = 0.6067512888066523;
    msg.speed = 0.7553321676114331;
    msg.speed_units = 41U;
    msg.custom.assign("MVVGZDVBWKIREDZOIQDUQDJPRHEWFVNRTIUQZGEQZNPEMEFSBCKABRHUUKAFBUHGEJHUOQMZOQCAQUSRNYDHCBAIHTEYCJIHPBLLKESZLRMLFBNMUVYWFAXXWRTHOFCLWTDYXRYSYJPLUPWPLQGJZNZA");

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
    msg.setTimeStamp(0.4706465454573404);
    msg.setSource(58309U);
    msg.setSourceEntity(184U);
    msg.setDestination(6166U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.4571063403595568);
    msg.setSource(11687U);
    msg.setSourceEntity(41U);
    msg.setDestination(2365U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.8540151005913348);
    msg.setSource(15064U);
    msg.setSourceEntity(48U);
    msg.setDestination(4189U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.70397016675219);
    msg.setSource(40479U);
    msg.setSourceEntity(17U);
    msg.setDestination(38990U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.2145895292394907;
    msg.lon = 0.05440048204834913;
    msg.z = 0.9740456550023266;
    msg.z_units = 124U;
    msg.radius = 0.7470607470188604;
    msg.duration = 20158U;
    msg.speed = 0.17254150997965223;
    msg.speed_units = 170U;
    msg.custom.assign("RSSITZYXGEOFZGCLEKULMWNCRMZDZVIO");

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
    msg.setTimeStamp(0.9036388520161794);
    msg.setSource(7479U);
    msg.setSourceEntity(161U);
    msg.setDestination(46020U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.9917174183104933;
    msg.lon = 0.11953706032054023;
    msg.z = 0.9731448502879225;
    msg.z_units = 161U;
    msg.radius = 0.537783600106798;
    msg.duration = 56213U;
    msg.speed = 0.43327247740054875;
    msg.speed_units = 87U;
    msg.custom.assign("EHNHRGIHHGJAQIPBPFQVDRJEISRUFDJQZKKGLDGAXUTVOXDFBKHXLDYZJMSVKLLRTBNBVCEWUEYNCXPNWURROCQYJGDKGPYRPOMFAAIOSMBTVBQZACSFVEWGDSSCSXZOYAIVODNHEBDBKMPZXNWYIFIOXQUNTZTGXATMNHMYKWYLMNIPVJMLFYUBCQEUOXIGHZYLWZHJDOKTJSE");

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
    msg.setTimeStamp(0.6342579104400828);
    msg.setSource(26404U);
    msg.setSourceEntity(97U);
    msg.setDestination(22077U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.25523634165038;
    msg.lon = 0.10379742220686472;
    msg.z = 0.9864079392739536;
    msg.z_units = 178U;
    msg.radius = 0.9042637110000942;
    msg.duration = 54182U;
    msg.speed = 0.4999508567275285;
    msg.speed_units = 248U;
    msg.custom.assign("NDCQSLBQQPYZIMYNWTCFEBU");

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
    msg.setTimeStamp(0.26214931346710335);
    msg.setSource(46922U);
    msg.setSourceEntity(15U);
    msg.setDestination(14136U);
    msg.setDestinationEntity(182U);
    msg.timeout = 17395U;
    msg.flags = 136U;
    msg.lat = 0.5246455722999398;
    msg.lon = 0.13136865030746592;
    msg.start_z = 0.38904860632935123;
    msg.start_z_units = 74U;
    msg.end_z = 0.7977608327459264;
    msg.end_z_units = 226U;
    msg.radius = 0.8670282131415759;
    msg.speed = 0.6668782177502075;
    msg.speed_units = 217U;
    msg.custom.assign("ZYYXLAAYVZEFJYBLDLCMQQTVFVUUHIAKTBGFCPLMHQUKKHA");

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
    msg.setTimeStamp(0.1575729158471142);
    msg.setSource(14794U);
    msg.setSourceEntity(97U);
    msg.setDestination(24465U);
    msg.setDestinationEntity(222U);
    msg.timeout = 50038U;
    msg.flags = 250U;
    msg.lat = 0.27511325558892885;
    msg.lon = 0.08484539799294988;
    msg.start_z = 0.253511628145924;
    msg.start_z_units = 195U;
    msg.end_z = 0.14412460545670658;
    msg.end_z_units = 175U;
    msg.radius = 0.67299860483233;
    msg.speed = 0.2348841313295117;
    msg.speed_units = 138U;
    msg.custom.assign("AUGOHMKRGNDGKNVJNB");

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
    msg.setTimeStamp(0.6625265470211569);
    msg.setSource(29298U);
    msg.setSourceEntity(76U);
    msg.setDestination(13828U);
    msg.setDestinationEntity(179U);
    msg.timeout = 61857U;
    msg.flags = 127U;
    msg.lat = 0.03592656366644198;
    msg.lon = 0.13489069422547695;
    msg.start_z = 0.41030667180256175;
    msg.start_z_units = 162U;
    msg.end_z = 0.9716291290859536;
    msg.end_z_units = 228U;
    msg.radius = 0.6735704293515441;
    msg.speed = 0.6625250156155122;
    msg.speed_units = 52U;
    msg.custom.assign("LZGIRUVLDQE");

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
    msg.setTimeStamp(0.7245130203095733);
    msg.setSource(21839U);
    msg.setSourceEntity(198U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(132U);
    msg.timeout = 2264U;
    msg.lat = 0.7723307999832948;
    msg.lon = 0.3497115136820891;
    msg.z = 0.3882981713028393;
    msg.z_units = 102U;
    msg.speed = 0.4683385628258211;
    msg.speed_units = 92U;
    msg.custom.assign("LTFWWFEAWPQDNVYPDYFPXGEXNZXVEBRMLNOYVVCHPNJSTGLFKMJUMJUNCSZTURLHHWTSVFERIYGJZJOILFQWJMVQRPPHYYOSOUGOMIGLXYTHODIVOGGNECBQWHGFWVRBEFNIOCIYXCQZ");

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
    msg.setTimeStamp(0.07639965997292486);
    msg.setSource(4972U);
    msg.setSourceEntity(50U);
    msg.setDestination(47451U);
    msg.setDestinationEntity(251U);
    msg.timeout = 59493U;
    msg.lat = 0.31445950523011457;
    msg.lon = 0.7281290950048401;
    msg.z = 0.5041812138225911;
    msg.z_units = 173U;
    msg.speed = 0.16458029286815234;
    msg.speed_units = 130U;
    msg.custom.assign("ZUHZIHORCVSHZWSCTMCBYXFVKSRCBMKTFZPAKYOALEDJYLIPEGVAUOJGYWPKEJRQJOZCCUAKCQZLDXTZYGOGKWVNWTPWNZCWRDQAPQYMYRBRLDHRFINWMIVPTNOXHZBSBYXEGNDDGQGPQHXTAOKMDFTSLTWLCIBMSXRUIUGCOIPZQEGUWMJPFXLAUGKJPEVQBFEFNNOSJTSFSRKWIEONXAMUHYBDBMIHQJFADVXMURNHKDVLYNAQH");

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
    msg.setTimeStamp(0.433407610580651);
    msg.setSource(6983U);
    msg.setSourceEntity(254U);
    msg.setDestination(7278U);
    msg.setDestinationEntity(8U);
    msg.timeout = 44111U;
    msg.lat = 0.954300664565726;
    msg.lon = 0.4756777337844057;
    msg.z = 0.42497763843309766;
    msg.z_units = 173U;
    msg.speed = 0.017358422259819317;
    msg.speed_units = 148U;
    msg.custom.assign("NILCXMWKQZQGTRDYNHHWCXUFTEPRAKYRHGBHCVAHDUIASIFYVFEXNNWEXPDGQUYTVLZLTKUVOOTHVPJSNTSGNHJEDHYPKMPXGRHNGDOBQZKIJIXIIDOZZWGUOZNMFJKGTEQLSADXYBWNWLZUHEPUBPQVLEJNWOZLRKLJTBRCSCQMBGYBQYRFEAMIAKFULEKCATJXPOC");

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
    msg.setTimeStamp(0.5054959487829217);
    msg.setSource(28972U);
    msg.setSourceEntity(227U);
    msg.setDestination(44220U);
    msg.setDestinationEntity(123U);
    msg.x = 0.625892173290044;
    msg.y = 0.6659594135663109;
    msg.z = 0.6604496471589139;
    msg.t = 0.31244098552319755;

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
    msg.setTimeStamp(0.5989152682126577);
    msg.setSource(25959U);
    msg.setSourceEntity(42U);
    msg.setDestination(55093U);
    msg.setDestinationEntity(167U);
    msg.x = 0.12816538331117022;
    msg.y = 0.3184706207882513;
    msg.z = 0.040936615776134944;
    msg.t = 0.24061114357408764;

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
    msg.setTimeStamp(0.524343167226803);
    msg.setSource(56719U);
    msg.setSourceEntity(46U);
    msg.setDestination(24966U);
    msg.setDestinationEntity(153U);
    msg.x = 0.8397474983291635;
    msg.y = 0.7443967490086819;
    msg.z = 0.16385471292716636;
    msg.t = 0.303687373496477;

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
    msg.setTimeStamp(0.6363461365014225);
    msg.setSource(28188U);
    msg.setSourceEntity(197U);
    msg.setDestination(59724U);
    msg.setDestinationEntity(213U);
    msg.timeout = 61062U;
    msg.name.assign("DJIDQZGFPKZKFVYCOMVBBDUYSUBDKABBLMVGNPTLNMVRNVBENGUOPRQKYPXRNYQLNGGJHTVGJFAHIBZIJMDUYRPORGDAWCYZSSTCVIEMLSTIFXLLJFNYSTEPELYUURRITNZXKJKMZTCHQLXCZWDMRHMFXOAQEBPDEOMSXQFKCJHLUJROUKTPXBSJTGHKSZFPODGHIACICXYAKUTOGWBWOLHAIHSAHYWWOSUNZCJMVEDA");
    msg.custom.assign("VWRQEDQYXULRAJDGNJMWCVTJEQQDZYCLQKNDBYOKJTZOHRAJEESLIUGITCPICHSSRUOFZOPGBRDAZXSJNYJAFLZBDVXPNRWFLGIDFUTQGVZIH");

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
    msg.setTimeStamp(0.8540367850114889);
    msg.setSource(56949U);
    msg.setSourceEntity(140U);
    msg.setDestination(9263U);
    msg.setDestinationEntity(198U);
    msg.timeout = 30984U;
    msg.name.assign("LNXCUXGTQKUFOYKCXMERAAICYFOVPYBHIGVNGZQLJJORANBAVUHOKAEGQLSTLZWAWKGZPDZFLQYBOMVMWNTBTNEZWLJLLJGDRUTMGSRBYXQDFIBKNFWVPYFZQYSASWZMXOUDEWSQUSWRHATUIPSKHZWYTEICMVHFDEVHB");
    msg.custom.assign("BQURRVLVNUFDTOIMABANR");

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
    msg.setTimeStamp(0.5007463162301763);
    msg.setSource(63648U);
    msg.setSourceEntity(192U);
    msg.setDestination(43802U);
    msg.setDestinationEntity(196U);
    msg.timeout = 59924U;
    msg.name.assign("RHAOOXUCZNQDGBLBSWUZJJ");
    msg.custom.assign("YIOYNBEHFGYVCVNJH");

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
    msg.setTimeStamp(0.8624984762747611);
    msg.setSource(60994U);
    msg.setSourceEntity(21U);
    msg.setDestination(27555U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.9489279930749722;
    msg.lon = 0.8310811020459009;
    msg.z = 0.2942612177323036;
    msg.z_units = 6U;
    msg.speed = 0.2195044767559281;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3139506331686813;
    tmp_msg_0.y = 0.47110978018364347;
    tmp_msg_0.z = 0.8325498760956456;
    tmp_msg_0.t = 0.6672545873021869;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.46052103358205654;
    msg.custom.assign("CNUFQTPJPXMTHZYMOJJENRUWVDEADBIBSSKSOXBQNTUOCQYLNAURAPZFFAFNUVWTQGZKSQBMUPWGIZYJYLDQTBVDRPMSPLHPZEUMLXNFJFKNKBXDEGRKHAZXGQHXRGRWIBYAD");

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
    msg.setTimeStamp(0.27996457876778125);
    msg.setSource(48719U);
    msg.setSourceEntity(19U);
    msg.setDestination(34535U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.24932480634284626;
    msg.lon = 0.010648208779237;
    msg.z = 0.6821902908073595;
    msg.z_units = 20U;
    msg.speed = 0.572678543063986;
    msg.speed_units = 94U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18350U;
    tmp_msg_0.off_x = 0.8657535795091393;
    tmp_msg_0.off_y = 0.5431545960271572;
    tmp_msg_0.off_z = 0.9256385653611537;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7347310215228366;
    msg.custom.assign("STYUKHUUQUQCTAPGRQMIIESBKEWNTCLIMTXVLAWXOGXDKZBLVQVHMIOQGUQYRYTILRYZJGAVPVRISJTHLBNGAYCSPXJHVTKLOAFDUZNPVLPMVGJIHFHCRSXFYQFOCNOJUFNOPWHJNQJTENXDACJWDMFDXFXWITZUSKFYRGONWBXUZYMLCLZKNGCGAWEBZZVKJYOEZCXMSIDBD");

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
    msg.setTimeStamp(0.6522627198880627);
    msg.setSource(56680U);
    msg.setSourceEntity(204U);
    msg.setDestination(58359U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.7161988014115669;
    msg.lon = 0.38485465178376244;
    msg.z = 0.9204471346674387;
    msg.z_units = 202U;
    msg.speed = 0.9295470553233859;
    msg.speed_units = 119U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.40969280813530373;
    tmp_msg_0.y = 0.3122376907418395;
    tmp_msg_0.z = 0.12313169975622162;
    tmp_msg_0.t = 0.13178592578429604;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5823636041056894;
    msg.custom.assign("ASNIUPHJLOTOGXZIHOSPEYRMLDMJHGBSCXJFUVFYMQGXTSEYIIMELKKWKMQUXUCARPINKQWFQYLLRYBEWQSLNDBQPBWDFXWOVSELFPAPITAKVJODUNKBT");

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
    msg.setTimeStamp(0.5210639522092789);
    msg.setSource(46485U);
    msg.setSourceEntity(111U);
    msg.setDestination(19894U);
    msg.setDestinationEntity(110U);
    msg.vid = 59597U;
    msg.off_x = 0.09244885737672037;
    msg.off_y = 0.5977324984949378;
    msg.off_z = 0.5913902470848525;

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
    msg.setTimeStamp(0.473956474709174);
    msg.setSource(12436U);
    msg.setSourceEntity(78U);
    msg.setDestination(5023U);
    msg.setDestinationEntity(186U);
    msg.vid = 15880U;
    msg.off_x = 0.56801286029318;
    msg.off_y = 0.21242306891316454;
    msg.off_z = 0.5320565072822603;

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
    msg.setTimeStamp(0.0165266203213017);
    msg.setSource(57840U);
    msg.setSourceEntity(85U);
    msg.setDestination(54643U);
    msg.setDestinationEntity(28U);
    msg.vid = 41213U;
    msg.off_x = 0.6633066469905565;
    msg.off_y = 0.12069814321183991;
    msg.off_z = 0.21726895966972204;

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
    msg.setTimeStamp(0.8821196665178116);
    msg.setSource(27629U);
    msg.setSourceEntity(116U);
    msg.setDestination(7644U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.17099647872568458);
    msg.setSource(48906U);
    msg.setSourceEntity(188U);
    msg.setDestination(50286U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.272885232263095);
    msg.setSource(39226U);
    msg.setSourceEntity(242U);
    msg.setDestination(11769U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.5011846777190564);
    msg.setSource(45044U);
    msg.setSourceEntity(90U);
    msg.setDestination(60315U);
    msg.setDestinationEntity(21U);
    msg.mid = 32850U;

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
    msg.setTimeStamp(0.8418651601752544);
    msg.setSource(37U);
    msg.setSourceEntity(55U);
    msg.setDestination(37650U);
    msg.setDestinationEntity(156U);
    msg.mid = 61386U;

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
    msg.setTimeStamp(0.8720120152881753);
    msg.setSource(38570U);
    msg.setSourceEntity(26U);
    msg.setDestination(6441U);
    msg.setDestinationEntity(24U);
    msg.mid = 52445U;

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
    msg.setTimeStamp(0.2574774599518942);
    msg.setSource(27965U);
    msg.setSourceEntity(11U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(95U);
    msg.state = 168U;
    msg.eta = 20464U;
    msg.info.assign("NPFCHQFXLQRWNQFFVPKRYHQQAYJQDMMRMSLHUOZWKOUHPDSHTXDCRGHJPBWSNEYMAMGKIYHJLJXJWCBKVCYXKBFBGKCUDIQDVJMXNTEYAFKSHJJSEUBRQPZGQAZIUC");

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
    msg.setTimeStamp(0.16074524691140601);
    msg.setSource(28136U);
    msg.setSourceEntity(204U);
    msg.setDestination(40501U);
    msg.setDestinationEntity(104U);
    msg.state = 79U;
    msg.eta = 10085U;
    msg.info.assign("DNODHWZXOBK");

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
    msg.setTimeStamp(0.4011756205514858);
    msg.setSource(58356U);
    msg.setSourceEntity(162U);
    msg.setDestination(25522U);
    msg.setDestinationEntity(111U);
    msg.state = 35U;
    msg.eta = 61828U;
    msg.info.assign("ESNVTSGUBQDWXNPCGTUUCPOFLCVAMKAQLYTDDFSVRMIZNKBCMBZMWEDJNFIIUJCDCYPTQEVFPYUDUUSWGMRQIXAZQVWPXODFVTARWJGMZVHXUOIKWFTPEZBEEHYZLHPXRVJYB");

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
    msg.setTimeStamp(0.8714015837360448);
    msg.setSource(62627U);
    msg.setSourceEntity(251U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(237U);
    msg.system = 21911U;
    msg.duration = 36034U;
    msg.speed = 0.3292847469539355;
    msg.speed_units = 59U;
    msg.x = 0.2994256328724759;
    msg.y = 0.31158925802329007;
    msg.z = 0.9392302056954066;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.40583790023551614);
    msg.setSource(17629U);
    msg.setSourceEntity(144U);
    msg.setDestination(13986U);
    msg.setDestinationEntity(36U);
    msg.system = 5872U;
    msg.duration = 41910U;
    msg.speed = 0.6408500189439438;
    msg.speed_units = 234U;
    msg.x = 0.05518775677202514;
    msg.y = 0.5177959501626388;
    msg.z = 0.1484065801481943;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.04107273394109623);
    msg.setSource(37069U);
    msg.setSourceEntity(113U);
    msg.setDestination(21514U);
    msg.setDestinationEntity(223U);
    msg.system = 33536U;
    msg.duration = 37096U;
    msg.speed = 0.13392240355007223;
    msg.speed_units = 55U;
    msg.x = 0.8433171032397152;
    msg.y = 0.3395074405312005;
    msg.z = 0.7858485513643809;
    msg.z_units = 15U;

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
    msg.setTimeStamp(0.4629359573649149);
    msg.setSource(374U);
    msg.setSourceEntity(83U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.6454021622855522;
    msg.lon = 0.8463861883998388;
    msg.speed = 0.41236294543926943;
    msg.speed_units = 188U;
    msg.duration = 58791U;
    msg.sys_a = 25402U;
    msg.sys_b = 60331U;
    msg.move_threshold = 0.7181240482179744;

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
    msg.setTimeStamp(0.5616271982317854);
    msg.setSource(54894U);
    msg.setSourceEntity(13U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.2809150525422561;
    msg.lon = 0.9209439029271599;
    msg.speed = 0.9147621206463781;
    msg.speed_units = 135U;
    msg.duration = 18411U;
    msg.sys_a = 41405U;
    msg.sys_b = 37718U;
    msg.move_threshold = 0.9754608969061089;

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
    msg.setTimeStamp(0.16132490912651554);
    msg.setSource(54615U);
    msg.setSourceEntity(45U);
    msg.setDestination(8548U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.5473507444134369;
    msg.lon = 0.016137401893758674;
    msg.speed = 0.3529504761143777;
    msg.speed_units = 190U;
    msg.duration = 13326U;
    msg.sys_a = 25281U;
    msg.sys_b = 45742U;
    msg.move_threshold = 0.37348081668292654;

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
    msg.setTimeStamp(0.6553052997856236);
    msg.setSource(6186U);
    msg.setSourceEntity(240U);
    msg.setDestination(44461U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.5471836018793058;
    msg.lon = 0.7098806124187268;
    msg.z = 0.19867467692789598;
    msg.z_units = 238U;
    msg.speed = 0.2472346029625856;
    msg.speed_units = 7U;
    msg.custom.assign("FPBESRCZYKXKVCEICVZJVVMKLMIOJEEQBLWFGEZVFUPDIBOEJOGFJM");

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
    msg.setTimeStamp(0.9720055037754215);
    msg.setSource(63899U);
    msg.setSourceEntity(206U);
    msg.setDestination(33610U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.41304702315454056;
    msg.lon = 0.2041668333461396;
    msg.z = 0.13290792030014287;
    msg.z_units = 15U;
    msg.speed = 0.9485091576190985;
    msg.speed_units = 43U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9354801078095258;
    tmp_msg_0.lon = 0.17514922855386095;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BGPTIJEYXDKEJEFILOGOQHRCMYKNYJBNNCJXFMKLBUODBEW");

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
    msg.setTimeStamp(0.3521522563498335);
    msg.setSource(13909U);
    msg.setSourceEntity(96U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.41277454769926836;
    msg.lon = 0.2881398839236874;
    msg.z = 0.24112310836033113;
    msg.z_units = 47U;
    msg.speed = 0.46282011663701117;
    msg.speed_units = 109U;
    msg.custom.assign("DJUTBFTLMUBQMBPZHEKBSIFNYXTMHGWPRZMCJUULQHPFKVSRCILQWGXLSCFHADIRYJCLXCKSDAQIQCTMOGVQFZRLCPMOATKZSJSWJLCAPFWKWYNTKSRIXDBQVXXXTBMQXJOBEFYONNGCXFOZDVOWDGMMFOVHJEROZZAJTGRDNRTBGNGEDHNEKZVSYTVLSZAUAACHWEK");

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
    msg.setTimeStamp(0.46783274899846206);
    msg.setSource(46844U);
    msg.setSourceEntity(71U);
    msg.setDestination(48594U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.7318809316538051;
    msg.lon = 0.21468075640316686;

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
    msg.setTimeStamp(0.23329083472941547);
    msg.setSource(22729U);
    msg.setSourceEntity(121U);
    msg.setDestination(35922U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.8635957833641;
    msg.lon = 0.8956183834992013;

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
    msg.setTimeStamp(0.7867031839490525);
    msg.setSource(41714U);
    msg.setSourceEntity(159U);
    msg.setDestination(43591U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.018116864361689133;
    msg.lon = 0.6827542976754984;

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
    msg.setTimeStamp(0.10337485740193342);
    msg.setSource(36490U);
    msg.setSourceEntity(170U);
    msg.setDestination(52822U);
    msg.setDestinationEntity(245U);
    msg.timeout = 2269U;
    msg.lat = 0.924253489929285;
    msg.lon = 0.8786715866553909;
    msg.z = 0.1506848689885547;
    msg.z_units = 150U;
    msg.pitch = 0.09546402647265329;
    msg.amplitude = 0.4276882192485959;
    msg.duration = 62452U;
    msg.speed = 0.7482489801220061;
    msg.speed_units = 147U;
    msg.radius = 0.5904355519501335;
    msg.direction = 65U;
    msg.custom.assign("YWGCCIVTBPTJEPSWPPQLWSEXGYJYZHWKUURTSDKRMQZIOGYXDSUDTCQDXJIDPRBFBTXBSABBSEKKZIYRQZCVYRAFVQNESWYQVGLGNOFLRWMBHACUUZNOHKPUHNTRXFHTOGCUMYJAPAZDSRBJHVHHELDEGKLURNIGQFIYOPKMXZOIHAJSZXINKCGMMIMMKQTWWBIVFUJAUJ");

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
    msg.setTimeStamp(0.3890858095045122);
    msg.setSource(21908U);
    msg.setSourceEntity(76U);
    msg.setDestination(54140U);
    msg.setDestinationEntity(223U);
    msg.timeout = 20449U;
    msg.lat = 0.754350815961732;
    msg.lon = 0.24801778398974317;
    msg.z = 0.3962091391257865;
    msg.z_units = 139U;
    msg.pitch = 0.3110647199490155;
    msg.amplitude = 0.3239008820575491;
    msg.duration = 26170U;
    msg.speed = 0.3252239887119772;
    msg.speed_units = 5U;
    msg.radius = 0.09819046415387633;
    msg.direction = 8U;
    msg.custom.assign("BFDAMRVCMJYWKXYNCIIEUCLGBPIVQEJJLWOPWRKONLLHOCCKYCJHVVUHUUVPNBVOKMXBEROOZIOGGAHMILESFEMGWZSGWDHFQQX");

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
    msg.setTimeStamp(0.5430573547143923);
    msg.setSource(57986U);
    msg.setSourceEntity(121U);
    msg.setDestination(24436U);
    msg.setDestinationEntity(163U);
    msg.timeout = 4689U;
    msg.lat = 0.06703630569029195;
    msg.lon = 0.6917438061578255;
    msg.z = 0.6552850876887062;
    msg.z_units = 150U;
    msg.pitch = 0.12714564091606728;
    msg.amplitude = 0.5133344459686664;
    msg.duration = 44838U;
    msg.speed = 0.8696461734378615;
    msg.speed_units = 119U;
    msg.radius = 0.49466457052562807;
    msg.direction = 228U;
    msg.custom.assign("TXZWFRKLYWIOUVQZLWMMVRMWBGJGJSWIMIIYWHMSPTAVOAZQEGBBDXSDLXFFTUQCOHRMEJJSFCIZXESHJVJACDFNFNUOBTSOFTKDMUZHCHEDGEAPSJGHARVUEIXEZHTQNCFYQFCXKIBNHLA");

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
    msg.setTimeStamp(0.2188102908203512);
    msg.setSource(55791U);
    msg.setSourceEntity(254U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(43U);
    msg.control_src = 59985U;
    msg.control_ent = 207U;
    msg.timeout = 0.45240983952695146;
    msg.loiter_radius = 0.6980560291135688;
    msg.altitude_interval = 0.6248118212128317;

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
    msg.setTimeStamp(0.3956823372816656);
    msg.setSource(50232U);
    msg.setSourceEntity(229U);
    msg.setDestination(15075U);
    msg.setDestinationEntity(59U);
    msg.control_src = 26547U;
    msg.control_ent = 246U;
    msg.timeout = 0.5262120899980675;
    msg.loiter_radius = 0.7175299133254152;
    msg.altitude_interval = 0.6224779130541533;

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
    msg.setTimeStamp(0.5989913403934607);
    msg.setSource(59035U);
    msg.setSourceEntity(123U);
    msg.setDestination(38329U);
    msg.setDestinationEntity(90U);
    msg.control_src = 41390U;
    msg.control_ent = 9U;
    msg.timeout = 0.6997228103518145;
    msg.loiter_radius = 0.17623014121611424;
    msg.altitude_interval = 0.4584431827195464;

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
    msg.setTimeStamp(0.7898458458771509);
    msg.setSource(15860U);
    msg.setSourceEntity(45U);
    msg.setDestination(27002U);
    msg.setDestinationEntity(130U);
    msg.flags = 85U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9524197344050137;
    tmp_msg_0.speed_units = 32U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6873667300668076;
    tmp_msg_1.z_units = 13U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.23142659385125808;
    msg.lon = 0.5356307346863612;

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
    msg.setTimeStamp(0.2956802574437999);
    msg.setSource(25485U);
    msg.setSourceEntity(209U);
    msg.setDestination(41801U);
    msg.setDestinationEntity(34U);
    msg.flags = 129U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.453865540307243;
    tmp_msg_0.speed_units = 191U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8548393272977364;
    tmp_msg_1.z_units = 158U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.061786605823466845;
    msg.lon = 0.8893448179019293;

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
    msg.setTimeStamp(0.1471497833069484);
    msg.setSource(3575U);
    msg.setSourceEntity(209U);
    msg.setDestination(2648U);
    msg.setDestinationEntity(147U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3552844683941272;
    tmp_msg_0.speed_units = 189U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6526816448728197;
    tmp_msg_1.z_units = 189U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9015747664248713;
    msg.lon = 0.8671499552917665;

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
    msg.setTimeStamp(0.9891654305365856);
    msg.setSource(27157U);
    msg.setSourceEntity(68U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(15U);
    msg.op_mode = 66U;
    msg.error_count = 29U;
    msg.error_ents.assign("OEOFAMCDYZSEPWONFXZABNTUMMGVHQNYKKAXGLHGKMLPQBWJUJBVGIVPSRCZAZCGMHBHYSDTKHEKNPQZGDPKIMAPEWFKCEHXNUBLFCZUHIHNAMDFDSTNRUCLRKTZRJDLMVUQSWO");
    msg.maneuver_type = 43055U;
    msg.maneuver_stime = 0.7721709476626707;
    msg.maneuver_eta = 42911U;
    msg.control_loops = 3474787944U;
    msg.flags = 142U;
    msg.last_error.assign("FBLWDCVBGCHJVACEKZWER");
    msg.last_error_time = 0.9973475606431609;

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
    msg.setTimeStamp(0.42064102999992903);
    msg.setSource(13253U);
    msg.setSourceEntity(129U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(76U);
    msg.op_mode = 68U;
    msg.error_count = 122U;
    msg.error_ents.assign("PAGGTDWKEOXWULFRIBMRLKQZAJLXKFHENDHQUQHMNYXDPNHVFTLAGUJYMKBUTSFYRJHBRSNCDPW");
    msg.maneuver_type = 43420U;
    msg.maneuver_stime = 0.61802616784423;
    msg.maneuver_eta = 1059U;
    msg.control_loops = 3652259306U;
    msg.flags = 208U;
    msg.last_error.assign("QYHOGMEBLCCBFDGFEBCMOUZXYBXPJKNVYRMSNSOZGEZCRKXXYWECSAIBDPNWIAXAFCBTZGFRJLQKWWISTUWKSMWGANFVMQJDHANYILAUDTZJEVSHVQAWRHVUNLLDRAXNTPKQYZDMAPSFFKOWUPRUNHOTNSKZRFGWLDIVZEPEQTOZYHWEJBNOVCLLGRFUJYVTCTTPUMIBEKHJBH");
    msg.last_error_time = 0.7045319974484432;

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
    msg.setTimeStamp(0.6624572343621905);
    msg.setSource(22424U);
    msg.setSourceEntity(183U);
    msg.setDestination(56223U);
    msg.setDestinationEntity(186U);
    msg.op_mode = 71U;
    msg.error_count = 87U;
    msg.error_ents.assign("FTBOXDSYMBEKHDSNBEKEZVPSKBJJAWXCXOMFDNKWACAGSWFQMZZMYWQRBVCSNMOBXWZUYKMKUGFUSJOQGZSAACTRRAPDIGQGVYTBSXJHXDHNQFKUUPMIADPDZEXNCKAXCYLGEIHQDCWTJLUOAIL");
    msg.maneuver_type = 30357U;
    msg.maneuver_stime = 0.020589626630131308;
    msg.maneuver_eta = 30700U;
    msg.control_loops = 1646828728U;
    msg.flags = 120U;
    msg.last_error.assign("OEJHAUVOXYNJLTZEMCJYBCGFURGVFCHULBRMIMYTLNYNAETIFZKGIQDEVGJIRNFYLNQHQLJRVTKSZFUWKHJFMPBKUKPPXOSRGXMETVPEVEWXJHCXNQASKTZSOZXPRREDYZMODDHCIITNWBMITNDWWAVBUSDQXLCGABSHIP");
    msg.last_error_time = 0.5421220550287087;

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
    msg.setTimeStamp(0.5245652613712409);
    msg.setSource(53784U);
    msg.setSourceEntity(243U);
    msg.setDestination(48106U);
    msg.setDestinationEntity(96U);
    msg.type = 96U;
    msg.request_id = 61984U;
    msg.command = 171U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 48404U;
    tmp_msg_0.lat = 0.3794011630794215;
    tmp_msg_0.lon = 0.4118228896225913;
    tmp_msg_0.z = 0.14252421683123384;
    tmp_msg_0.z_units = 205U;
    tmp_msg_0.speed = 0.9288383941012947;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.custom.assign("KRQWRAQQAXWYPJVLCDIGCGRFWJOJMXMRY");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("MJARHVISRFTXJQABWMEUUSKLKNFWCQYHUFPTMGRTNLQMPUIIDMTVHP");

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
    msg.setTimeStamp(0.23406973833375788);
    msg.setSource(57313U);
    msg.setSourceEntity(112U);
    msg.setDestination(45497U);
    msg.setDestinationEntity(38U);
    msg.type = 48U;
    msg.request_id = 36006U;
    msg.command = 115U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("VSDHXYYTUSYDWNKVRQPFMWTTRLADZTCANXDBAZMNZJLWWSPMWRHSUUAAIWUEJJOURPVCMESQKEODECTFQTCPGPIHAGKGKEXLURHAVSSSBKIAXGDMUQEJFCDUQEFBPBDSCIJOYNICHKWBOGXXORVMTLFJVPQFZZBVYVPHHEYTVFZOPZNWGBNJRNWS");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("MRSGNWTIOJPLGMACWKSQKLNHILAGXXOCRHCXPOZGUBZCIQKMMSHZDAJRLBSFMFZUBSVXFEQEOCLYNBYUTAQMJETIIEPFZQVNLQPPAQBTHGOKORFSRJOFBV");

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
    msg.setTimeStamp(0.6807504970380177);
    msg.setSource(33346U);
    msg.setSourceEntity(204U);
    msg.setDestination(39810U);
    msg.setDestinationEntity(181U);
    msg.type = 189U;
    msg.request_id = 36569U;
    msg.command = 69U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("UBMMMSIUKNTDDGOQVZQCOQKRBPNXBHJKJLNFHYWZGGWFXARZRDYUSIJMVFNBEJSYWHKXGAXYRRFAWPRLBUAVOFNOMTSZCNAEEILVDFFUESPILCUWQEMJVLQOQMVIDTCXDYXNNDBUKVGIUPESLBTCEPNHMPITCQRIIJDKGDCQZGCIOSTYSXJOOTTQ");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("IDNKTRVZUOOKKWXHACOBLZLSMAVRRYWPZEMUPXVMTRHMVEELQIHAXFFLSWGYCECYCHLRFQZHTYGKFWBQFPPUSZYDHSLGOXQEJJDBGGBUQEXEYKHGTOHWVJEJQAPFHBMIDUYNSWWLDXSNCQPGMF");

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
    msg.setTimeStamp(0.18317150383800052);
    msg.setSource(8085U);
    msg.setSourceEntity(20U);
    msg.setDestination(26025U);
    msg.setDestinationEntity(226U);
    msg.command = 9U;
    msg.entities.assign("TCLQQHDHAPXBSPSPLHNWOF");

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
    msg.setTimeStamp(0.11448526046785834);
    msg.setSource(53824U);
    msg.setSourceEntity(193U);
    msg.setDestination(6110U);
    msg.setDestinationEntity(79U);
    msg.command = 80U;
    msg.entities.assign("XIXQCEHLNUBQWDOTYLBQJMJEYVYRTVLTXXTGUCPZXGVQRDYN");

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
    msg.setTimeStamp(0.35394091522732374);
    msg.setSource(46442U);
    msg.setSourceEntity(93U);
    msg.setDestination(33141U);
    msg.setDestinationEntity(139U);
    msg.command = 77U;
    msg.entities.assign("OPOFLHZUPZRRUITDBAQCHABRQDWVCTJOILKUFXFLNILJJENGVPDXFLMEQTNGNYXQUIMEJTMPAZFMKFFBSJOFBXOYWXMPORZBWPHKBPFP");

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
    msg.setTimeStamp(0.4062216715503526);
    msg.setSource(47435U);
    msg.setSourceEntity(210U);
    msg.setDestination(44893U);
    msg.setDestinationEntity(92U);
    msg.mcount = 125U;
    msg.mnames.assign("KGNXJFXTWQQHVTRYCOQIEFNDZGSWSSNGPOWHFRTFLOQFDPUYTIXMQVQLTUNZTLKEJKCVIZBSMJOGTCOALHHSYTARURETSCBHAMIGXADDOEDRBXHUEVZYVLPLBKYNZXJJFXAGBSMKWDRCHEJQUJLZIYKNORDHTJOZZRFKKXVMAMPWBSVPIKEYXLEWHFCIGNWZUANYDDFDIEPIUORGISYCKEQGPWWCRWULPZPAMCBULPMBNYQCOBUVGH");
    msg.ecount = 151U;
    msg.enames.assign("GSRMTELYMTSSVFUJECXPQTAQQNHUQVZYUPBOVXBZCNEPAXBVNLRMIBLDOXUWAWQPYXGTOIUDZWPREWLYKFDCZGHYFGVNZTHTTLZICEKGLBEQNGYJSRDUIOOANUPKHGCBILFQHMWTHPXMTICGUOCIMDIOSWNFJXERXVJ");
    msg.ccount = 103U;
    msg.cnames.assign("BHEABYJZOBQFPSMPCNPIRXXNTVPCYKLIJRCSHICKZTSRAVHYLDDQKFNGFCTXXDWGDWGXVNJB");
    msg.last_error.assign("AFLHPWOKIJIZTDTVJPSKFZQLPILLEMTOJSBOTXUIMXJFQGEROUZEATWBDMSPMBGIWCDKYXDXLTEIVAHFNJYQZHXZCWPXCIWSZTMPVAFKHTAMUYKYYUAVDMGCJHISWGXN");
    msg.last_error_time = 0.4739637962255895;

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
    msg.setTimeStamp(0.16552078105286616);
    msg.setSource(26000U);
    msg.setSourceEntity(246U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(52U);
    msg.mcount = 205U;
    msg.mnames.assign("ETPBHEOZKXFWBKQIQQFZBJREKMJZVUMSOAZHUIPTJXZYOJOUHAUIVJWBFUYQOFRRPTHDEBUQGJTGXUMNDHLCNLAMLXGSPMILXTYSRPAEXAYAHFKGLYGDPS");
    msg.ecount = 8U;
    msg.enames.assign("EKOKVRUXNKSERLRHXMQLGJZPDGDYGIZQLPBUCSJMSUETHANCLVGJMBJRVYPN");
    msg.ccount = 68U;
    msg.cnames.assign("LPFDCJFORDNEXNYKSURLKAZXJUAFQBOCXFUMNV");
    msg.last_error.assign("WXETSVGSLNSBBTNKDSQAQQACGOMKRWWBTUCDRFRIFMOAXWFAXRADOTXZGCKUPUZMXXUVXDRMGYHVLTJVDZQZQPTLUJOONTAYMRMEIYENWAIZLJPNCPWUTXHELOJDIBGCFEZWJYBBIO");
    msg.last_error_time = 0.8829306986490073;

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
    msg.setTimeStamp(0.6008276837773769);
    msg.setSource(21993U);
    msg.setSourceEntity(21U);
    msg.setDestination(27332U);
    msg.setDestinationEntity(135U);
    msg.mcount = 63U;
    msg.mnames.assign("OLMMCBTDNQEVUBKOQLDFSGWOXVUFIEAVANYIUNOGOFWWK");
    msg.ecount = 244U;
    msg.enames.assign("BUKCZNTHLRECGFJMXKHSTUCYEFCPQIHEOYLQJGXMFQBPOSOTGHFJACSMEOMBRIMPBGSWQZBBBZAYKRPINNKXQLZYFSXUJDDPPRIOQYRDAHBUFNYKX");
    msg.ccount = 73U;
    msg.cnames.assign("VLUEAIPHNKASUFJORGRTOOSCVFBHPJEV");
    msg.last_error.assign("CPBCRJSBCIEVYRCGFZLMDIJISDEOPSBWKFAXGCAKZRLXEWIYKGLAQEATHDOGFPCHWKOXKXZQQGBCTRTYMAZUEATLTMFJDSDVYKITTRHVUVOMNIRNJHZAQDNUIHAGWBSLKNNDXOCJBJYZRFEBSMBQDOYXRNVMGTIFUJLOMUVLHNANNWLVXZIEESJFTUXBKKJMLYAH");
    msg.last_error_time = 0.8932970160793272;

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
    msg.setTimeStamp(0.5567805133292882);
    msg.setSource(1482U);
    msg.setSourceEntity(233U);
    msg.setDestination(38748U);
    msg.setDestinationEntity(20U);
    msg.mask = 187U;
    msg.max_depth = 0.6642539086784776;
    msg.min_altitude = 0.32081767098556013;
    msg.max_altitude = 0.5606799085265591;
    msg.min_speed = 0.46796236403720437;
    msg.max_speed = 0.791537955819166;
    msg.max_vrate = 0.653980996724771;
    msg.lat = 0.2102732629707913;
    msg.lon = 0.7410968114749883;
    msg.orientation = 0.6816455990905685;
    msg.width = 0.18659264338084025;
    msg.length = 0.7244355932007589;

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
    msg.setTimeStamp(0.7200748001610024);
    msg.setSource(50536U);
    msg.setSourceEntity(114U);
    msg.setDestination(32588U);
    msg.setDestinationEntity(107U);
    msg.mask = 98U;
    msg.max_depth = 0.3296269509170867;
    msg.min_altitude = 0.1857121248472845;
    msg.max_altitude = 0.019792757685138107;
    msg.min_speed = 0.433730354487057;
    msg.max_speed = 0.6761239695168327;
    msg.max_vrate = 0.8957083863684043;
    msg.lat = 0.5697527842338258;
    msg.lon = 0.5803875200438244;
    msg.orientation = 0.2508369354721155;
    msg.width = 0.9262981365742006;
    msg.length = 0.24679360215871637;

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
    msg.setTimeStamp(0.37122696823394874);
    msg.setSource(40116U);
    msg.setSourceEntity(89U);
    msg.setDestination(13753U);
    msg.setDestinationEntity(94U);
    msg.mask = 55U;
    msg.max_depth = 0.8641362138782245;
    msg.min_altitude = 0.721255124716918;
    msg.max_altitude = 0.3678821946865748;
    msg.min_speed = 0.5611950993060846;
    msg.max_speed = 0.4799910142679883;
    msg.max_vrate = 0.6235867656593718;
    msg.lat = 0.6844830060697824;
    msg.lon = 0.9019099317419086;
    msg.orientation = 0.8976752248106168;
    msg.width = 0.351994762487008;
    msg.length = 0.6642434801854235;

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
    msg.setTimeStamp(0.2948176314332478);
    msg.setSource(4619U);
    msg.setSourceEntity(230U);
    msg.setDestination(43857U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.5012740994850364);
    msg.setSource(55995U);
    msg.setSourceEntity(141U);
    msg.setDestination(56387U);
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
    msg.setTimeStamp(0.5330348324045959);
    msg.setSource(1131U);
    msg.setSourceEntity(67U);
    msg.setDestination(8655U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.9791652335651934);
    msg.setSource(55486U);
    msg.setSourceEntity(168U);
    msg.setDestination(51526U);
    msg.setDestinationEntity(237U);
    msg.duration = 9084U;

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
    msg.setTimeStamp(0.5122633627171652);
    msg.setSource(43615U);
    msg.setSourceEntity(204U);
    msg.setDestination(17496U);
    msg.setDestinationEntity(231U);
    msg.duration = 33006U;

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
    msg.setTimeStamp(0.9597686569051294);
    msg.setSource(52325U);
    msg.setSourceEntity(190U);
    msg.setDestination(5289U);
    msg.setDestinationEntity(53U);
    msg.duration = 58837U;

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
    msg.setTimeStamp(0.18970152276566365);
    msg.setSource(40733U);
    msg.setSourceEntity(122U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(139U);
    msg.enable = 87U;
    msg.mask = 1174813585U;

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
    msg.setTimeStamp(0.7990416907250693);
    msg.setSource(33217U);
    msg.setSourceEntity(37U);
    msg.setDestination(19764U);
    msg.setDestinationEntity(41U);
    msg.enable = 81U;
    msg.mask = 3071013727U;

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
    msg.setTimeStamp(0.040023857971573706);
    msg.setSource(13760U);
    msg.setSourceEntity(42U);
    msg.setDestination(5577U);
    msg.setDestinationEntity(34U);
    msg.enable = 254U;
    msg.mask = 856229998U;

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
    msg.setTimeStamp(0.16992424270290096);
    msg.setSource(23029U);
    msg.setSourceEntity(157U);
    msg.setDestination(58450U);
    msg.setDestinationEntity(110U);
    msg.medium = 34U;

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
    msg.setTimeStamp(0.5112320048165874);
    msg.setSource(5085U);
    msg.setSourceEntity(122U);
    msg.setDestination(37425U);
    msg.setDestinationEntity(203U);
    msg.medium = 17U;

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
    msg.setTimeStamp(0.09363303952063018);
    msg.setSource(9043U);
    msg.setSourceEntity(77U);
    msg.setDestination(57940U);
    msg.setDestinationEntity(15U);
    msg.medium = 242U;

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
    msg.setTimeStamp(0.7877612193492922);
    msg.setSource(7612U);
    msg.setSourceEntity(27U);
    msg.setDestination(15934U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.6029366253905052);
    msg.setSource(54984U);
    msg.setSourceEntity(230U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.9627110808780801);
    msg.setSource(37278U);
    msg.setSourceEntity(246U);
    msg.setDestination(23739U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.5475611837067852);
    msg.setSource(37585U);
    msg.setSourceEntity(47U);
    msg.setDestination(48890U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("DZWVSHOSAVZFCKIROVCWOYGXFNMMFBUYPNNBBITMIZHVBEIQZCVHMMSGHNJJJHTOZRRXRJOSFUQBXOCAERTBSJLJQYJDPFKNH");
    msg.description.assign("THSDQOQDUEMRLEWEKAVGCMRNKOGUMYTFPSFMIQLLRRCGZGSQHYXIKHYHNDKZDNWYAQFVXBJOAIEXANDULGGPZ");
    msg.vnamespace.assign("HKSDFRQSDEDZSXZXXSWVWZYZYTAROHYIBDEIPTJOGLVLSRYEONWKWNQRMMDHXTUUFLWWFYCJHMVLVGDTSIVHPTFTNBSCLABYJIYEEFUGVEZTRQKBPZXGWMSPVFCSBJGIHYMWFZUJLLDAVBNMSRNVLAPMGQBKKAFUWEBURVCRYYQZMHPKGAPWZOKNRHXOCOCMTXNULOGUXOOUICUZOPKEKQKAHCNJANTLTGAPXDBJEDHQPJBNJFICCEIFDJA");
    msg.start_man_id.assign("ZUQKTLAKPLORNHLPOLUEHNTOLGRFINQWLIGQIXZWHRXXYJBIXRWEFZUTABJDGOTNCHIMPCQXEAWMQDGKTMARXUPKHSISEADSL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DHDNLPOTVENICIZQQVZKCPHIBOIUMXZPJUEPTOWQQIAYORLSVEDXKTZMNSSXBHXASJWBQJBGWNDD");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("UDLZPAZZCDZVUYYWKNPJKFFKIRUMOOPOCAQLXVOEGVTQMELZWQTBSYRRYHSWUOKLRXFJHTGXBIZCHHEWKMDLDXVIGXZRFTCJVTN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("GXYPOUATNWWNOVURKVAXCBSCZQPGBHPFVQJDEDEMMAKLRRMYLDIGEUFCZVAHRLJUEGHCQEZAKPFJFQITHEXSOJBSQRGGDWZSLAKGDJVUZTUYNMWYXFJPWGRETKSOFJQNAGDBNYMVXKVQWJDKZUWKRNIESTBUMFRCYIWHYLQZ");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 55211U;
    tmp_tmp_msg_1_0.name.assign("FPECSNMZYXCZHIYZUNSWRUWBLFICEGEWBGVTQAHGZNLCGFPGHXJCDEKTNBQMSIOJLYCXMKUOAWKRCQRJRJNFXEAKMUASEEFTZNTTWTRUZUDOVUYHADDSVMQOKCPQNGBKIYOJVSIDJRLYJOQITAQJIDB");
    tmp_tmp_msg_1_0.custom.assign("VMPWKOFTYBBTHUNQTYFNKHLRKLIRXJNMZPBHHWZQDQIBWTLAZZBYSVCNOZKWOFWVRBMIYGZJFTAESPDGQRQDLKLNMMLZTVEBIVOCMUYDPJWVSIVKREKBOEYLAMYVAPDTDURTUWAXJHEXWSYFTEHXGQUZAYJIYSQSGWNHAAUEOMORPWCIKPFECSJVBJUJJUNODNCSMFIPCCFSXSDKOUNCGXQKDVL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RSSI tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.2866069311402253;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::Sms tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.number.assign("RVWBQYAUEMIVIEOYNUSXTOETBESMFRRTYHGFGQAETXZJZCRNAXQSETHCJVDGOSGJUHFZDDQVA");
    tmp_tmp_msg_1_2.timeout = 41937U;
    tmp_tmp_msg_1_2.contents.assign("XEPVUCDUVSICEAKSMEJHLWISBBUEAIOUMRJNTKWRRQYGVYNCYHYXDGFXZEAWRWEOYDPZQKXXNI");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
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
    msg.setTimeStamp(0.6208778127247554);
    msg.setSource(22U);
    msg.setSourceEntity(124U);
    msg.setDestination(32553U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("AWCZKEQMZPYUMPHPDGTPAUGDRDCUJVXSFAACXQSQJGKDLSYNIBJWHOXBLDYYVESMZRHJZADBMTVCCDRWJPDNQRWWTZRQLWNKZNRKIYBTTOUJVFCAPTZBINZRBMEFKSFKHKQGLIQRDITHVOIOGCAGRWOHLUEFSPQSJLMVYBPHTLDMFMAXLKUSVZIUYBX");
    msg.description.assign("MXQGLTAULQWTNTOKKDYMOAUXBDKTASSOENVIBVKVTWEBGLQB");
    msg.vnamespace.assign("DYPDFIMIZDEISOQQJXBVVEYUNTKLXJPYPMWUQQNMXYWAGCLOSKPWAENDSINSUBWRYWWHAZBGCFJCZKGUDCLIHZX");
    msg.start_man_id.assign("XYVHTRFJAFLBTIJVXNIPYAXFCDUAAEJGTRZNZCUJAWJGHWJHRKGGHYYFXPLFEDSOELQDZYFRMWWSMJXTELPARTTVTBUEVGNQSFLVIKHIUZGSKDOVIBSTCOBLIQWPMUYDNEDISQMRHQZBQNPCXKHYDBSCDVOWFZNKLKUPDRCANGYJVOEIOAMRMFKVCWXHIGJQUBXZNTKOEKSPDHUIFBJTOMQZBQCGWZNAKPZRMSWREWAYGYPBQC");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("STOIYURNABYNCFEDPTBFZREQXGYDJGTXREGCAYMYJLVXGLQCGEEIDZUQQGOLAYPIGEDQYALBLNMWOJLWDSS");
    tmp_msg_0.dest_man.assign("LVSUHPFLZKTWGAWOMMSZUNVIQRMHDEMAHLHXSYRTATXXDPFRNYEGASKJYOKAKIZSCUSJJGWLQTPABUKZXEQVLSIHOMCBQZADJRIWELPIMYDTISMOPGCVCFRDSNJXYULJWQBFLZKFVBCZOQOFBNBYELDOBEYVUDXTAQHGZTLUGNTXCPDGFVPWUVWGXIGVTJRKNIBOIEHM");
    tmp_msg_0.conditions.assign("RJPCZPBUCOLBRRXGNLDFBXJPPWSGMJFMLCDWCVWVIJVZNEFPHXOHCLVRFHCSTLLGQIQTJHROGXTJFQTFGWDDRFZUIOXZANBMMXEHWJLKYMKKWASHBAHPYTDYOXA");
    IMC::RSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4230956057985068;
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
    msg.setTimeStamp(0.02560324087806265);
    msg.setSource(55281U);
    msg.setSourceEntity(159U);
    msg.setDestination(55399U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("IGYPDJYOAHVDTVOLTLWAALMTWTNREGKXGKLZUODERMJBBYPMCSSWZZ");
    msg.description.assign("INAWJTUHCBMOEXDLMKJOSDQZKDLIZGUVVXCZUUUJFYPEPJOMERSVAQPWEMGNHCSGILKQYLDCRTEFKYXIYFBOWSQFEEUCHOHJDFLOYITDYOLODJCMWFBWIKALJTZWAZRNUGCRLPPZXITRRDCSWG");
    msg.vnamespace.assign("TJCCWYLLWODBWNTFJXKVPYZRHPIFDUXAITQGWNJRFVCAVEZNUAUQSHTAFGQXJNK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WNOOHFJHWUGKPHPVMZVLEJJUETGRH");
    tmp_msg_0.value.assign("VYNVYLUXFNEYZVLFMOCRLSFTFVRIKESPHYHPDFTBOHZAWZJAOEQBJQNEHOCOTBQBVDPHPUMZDDCJRUXFWSAIEKZORLWSAURYTBZGNMWECQKXK");
    tmp_msg_0.type = 102U;
    tmp_msg_0.access = 84U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ROXUQTXXTASGWJCIBTWGROQTJMKSNDFVLXVRNQEXBKNDGPYKZKOKHDJLYTJYUKOIFZTKPDHNQTFCMDRPZVLDIZYSJGNVTZSALYMHMJUZRLZYIJECTDSTOUCOVLDGIEMCMAVNKSRQJKWPCHWQUXRAARKY");

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
    msg.setTimeStamp(0.8689767534079937);
    msg.setSource(17869U);
    msg.setSourceEntity(231U);
    msg.setDestination(47880U);
    msg.setDestinationEntity(210U);
    msg.maneuver_id.assign("SNQKUNXTBRGTCEEMMFMMDWIZXDZSCAZPGOVDSGGSCIMPJTCRUMWYOMUIUFXADAOKINZJXVCPLHYHIKSNUOQTXKYPRFVLCPZBNLQUISLPKTJQJVJGDFEKDBQPDAYVJQYITIRXKITQRDUZPQNWXEGJOWJGJVHAMRKEJVBUFLSNXYFGRQNQBZWHEZUKCDXBCYXEFZLGZFYRYBPSCIWMNOBHDSOTYFOWHTROLNLVAEHEWHOCFAWBTUAVKMSGEPLAH");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 9254U;
    tmp_msg_0.lat = 0.3301679837781536;
    tmp_msg_0.lon = 0.9715027122696516;
    tmp_msg_0.z = 0.1530895669841179;
    tmp_msg_0.z_units = 172U;
    tmp_msg_0.speed = 0.7965817985922007;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.bearing = 0.36261395318224476;
    tmp_msg_0.cross_angle = 0.5357077151230699;
    tmp_msg_0.width = 0.545413070252972;
    tmp_msg_0.length = 0.3158280999421057;
    tmp_msg_0.hstep = 0.23668469943789672;
    tmp_msg_0.coff = 93U;
    tmp_msg_0.alternation = 38U;
    tmp_msg_0.flags = 73U;
    tmp_msg_0.custom.assign("SBWDMWFBHJNXUUHLIDFBGRSSXKIYMIDTOKJRFWJEAOVQKGGLTTQNPKZSGBQLQWJTYFRKWKAINTDNYVPSMGIYBBPZMGEVSHQXZFYMZEVCYXDKADERQTEAONPUVBNUCJRCWIUNQFBJDMXFZNAVPJKAGBYJOLHMDBXHPICWUIKUJVWGVYSSZUXPRAQTEGRTCZNCXMROOCNQAVJLIP");
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
    msg.setTimeStamp(0.3024826473911746);
    msg.setSource(11588U);
    msg.setSourceEntity(152U);
    msg.setDestination(30995U);
    msg.setDestinationEntity(88U);
    msg.maneuver_id.assign("QYUOSHYXAXRVGKBOGDIQBDCCQNYUEWHDDBFCIHSGSWRLQENELMTYMMUBTNWZTQOLASLEKXREAACMXYGHINYTIIOEIDVKTPCLUVYFIDZZNNVGZFBTJAPUHKXQBWXGTKJHZXSFGPZYPKCALOZPMRNZRKCQVOBGRASPPLMTEHJ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.8588005124328509;
    tmp_msg_0.lon = 0.7156937831949903;
    tmp_msg_0.z = 0.5279830231011067;
    tmp_msg_0.z_units = 172U;
    tmp_msg_0.speed = 0.26501360854351064;
    tmp_msg_0.speed_units = 159U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.05984084291185199;
    tmp_tmp_msg_0_0.lon = 0.22513771764887536;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("TKMRJSNVJKAMXVFMODPMFCLCZSWWXEONHIJRQKBGNINJFKJVSRGKEKRCADFTRHPOUIIZHRYPUZIMCKOWYTQNEOGAXS");
    msg.data.set(tmp_msg_0);
    IMC::AcousticNoise tmp_msg_1;
    tmp_msg_1.summary = 194U;
    tmp_msg_1.level = 252U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CommsRelay tmp_msg_2;
    tmp_msg_2.lat = 0.9453305717493744;
    tmp_msg_2.lon = 0.8277173809929113;
    tmp_msg_2.speed = 0.24516721131432928;
    tmp_msg_2.speed_units = 189U;
    tmp_msg_2.duration = 871U;
    tmp_msg_2.sys_a = 33357U;
    tmp_msg_2.sys_b = 26488U;
    tmp_msg_2.move_threshold = 0.3655867514581014;
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
    msg.setTimeStamp(0.1655199219828577);
    msg.setSource(22200U);
    msg.setSourceEntity(70U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("WLMQEKYYSGCMRGIHKKJXMMWDFKMWFVRCBOQZVSZURMRJXXMWDIZZQSAYEVJKRULWRIEGGILODCGJORPUALHKQJBGQIZHKVSSHMFFDTIEEPUBGHNLPYZPYOJTBGDLYQIXQOKXTPBJPGBCXSLOCFCDRETEDHPUGBTVVOFEISKCZTUKSACOETVIRY");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 62551U;
    tmp_msg_0.lat = 0.952227808396175;
    tmp_msg_0.lon = 0.4683392419361484;
    tmp_msg_0.z = 0.7368941270573525;
    tmp_msg_0.z_units = 172U;
    tmp_msg_0.speed = 0.013378354132689174;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.bearing = 0.20983151183919113;
    tmp_msg_0.cross_angle = 0.6149604193734808;
    tmp_msg_0.width = 0.2916780909932425;
    tmp_msg_0.length = 0.5608569728988682;
    tmp_msg_0.hstep = 0.8864372336703107;
    tmp_msg_0.coff = 8U;
    tmp_msg_0.alternation = 32U;
    tmp_msg_0.flags = 30U;
    tmp_msg_0.custom.assign("NHMCFODRGWGLSUXZQUUDGJFYQTAAYSIBCEFGEHNRWYJKBJOKEEYQFIDRQTHXZZWWLIWQPPIYJRLVCMKOKTSMKUVLNNBCZVTHGFJXAGEVTYXUQLUTIUASKZRPDBSCRVBHEYHHPZMHXICGJEOAJSDGPIKYMRCAXVMMPNOUBWPYXIUBEJHF");
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
    msg.setTimeStamp(0.5484563143707603);
    msg.setSource(57426U);
    msg.setSourceEntity(58U);
    msg.setDestination(22194U);
    msg.setDestinationEntity(66U);
    msg.source_man.assign("MUPQSJRNJUDLXZQQLZTZPADHFYOWEMNIXXLITXRPECQOVAHIXNMVDKYSGNLTFWGMWAIYZHCSJWDYBZFJUFHIKYPTWRHMAVQKGBEYGJXWZZLKIEWCSPVULCIREECKSJODNJDBWNLBDHJWVRAMIVFLJUTEBKFILSMTQNMQFZHSJBYGSSHZCPDRKFAAYEGRPOQTCOOAHNCYEBTRYRXTIOADGUQ");
    msg.dest_man.assign("PRSNBTQPFEOZHGPNMBRFSYXJOWOMECXNQDXVAURAPLZTPXCBIRKWXTNVYYKKTMUFQEPLRYHUEUYEMLPNRFOQDURZVFJQONZBPGMVIGAATOFDBSGKFWRGJRLAQTETNAJUXNZOFSJMLOUHKHXDJWHCWKXJUEJYAGKSW");
    msg.conditions.assign("XIERBUVVVPENWKBHVYADGQFXAGRZUVTDMASICRLUWMQHIEBKBYRGNJJTYBNLAMZGRQYNCWLMJASFMSLIJBWELJWOGOAFUYPDPKCRYUUOHNEIRWDTUERODFNSZKBIINNZJCRSKPCSZCZZQLFJPVDYMXLIJGHEXCXAFBPMWVYEHXEIUSVTTPPCGIFOHTZPKKXTWGKUNHOGWZAHXSKNQQTVH");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 232U;
    tmp_msg_0.id.assign("YOVLMWXCVFNGERRZJVWOUTNTNLQQYDKKISEQCKADYYHJNEQXMWTQFNUGHZDXWHUUIDXKXZCLGOUQOSSOPNZRDOYMWFYJEIZEUVYSKMTRPPMAVJRSZYOBWZIUOWTCISKHLWZHGINTOKDFLHBGTJTOJPASAVBXRPFCRQWVEUSIZ");
    IMC::FollowSystem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.system = 31263U;
    tmp_tmp_msg_0_0.duration = 51921U;
    tmp_tmp_msg_0_0.speed = 0.2713833849989439;
    tmp_tmp_msg_0_0.speed_units = 37U;
    tmp_tmp_msg_0_0.x = 0.115108700351782;
    tmp_tmp_msg_0_0.y = 0.011242569931630086;
    tmp_tmp_msg_0_0.z = 0.29827806432719195;
    tmp_tmp_msg_0_0.z_units = 151U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.1912788245195981);
    msg.setSource(64592U);
    msg.setSourceEntity(22U);
    msg.setDestination(49276U);
    msg.setDestinationEntity(168U);
    msg.source_man.assign("OOQHGVEELKCRWTLQAYNZXUZSKUNITNSURLDBJBLCOXIVVKADRVOOQOEJYQITHQZHWVGJDNQHYAJJZFPCYSGHOZXWXAUJAHDXWCLFBPPTPIXIKHYSGMBEKC");
    msg.dest_man.assign("BHUHMTJMBABSAYCRAAQCMLWNFRZLZPULHXXIBNYTIKQ");
    msg.conditions.assign("VHSSCJEVCUBKWBQIAOPXMWYMIPTQIDGZAIHSYQPGZMBBILUFCYIERKZHVEZYKIQXUWTHVRVZQVKZUZTSOZEBUUDDGAJXMSEUDXMQXDUIQJLRODGYRWRPDATZWSOOCGMRFPSTAEXXTQJH");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9528619680173049;
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
    msg.setTimeStamp(0.8451165845648924);
    msg.setSource(656U);
    msg.setSourceEntity(201U);
    msg.setDestination(37085U);
    msg.setDestinationEntity(164U);
    msg.source_man.assign("LDMIZMYUDVWTKGFTTLULFGXQHROYJSCOFABSTVAPRLPWOPWJBWHUAQMPUKNVUAJCTVJTKBFHWXCHTLOGDPYCBBGEPGSBZLDYAFYQEEWRIUOHSSEXKKNRJRFDKDPBOOFWQNEXCYHEIHXWQVMNTMCJNQFCEKRYXXSAYADAVQGAVGWJPDJFLSZMPNRIPSIWZZX");
    msg.dest_man.assign("RTQZCNYGPBRRTBEUMCJUKVS");
    msg.conditions.assign("TCUQDBNLGSSEL");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.8783086570672217;
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
    msg.setTimeStamp(0.7522482130571629);
    msg.setSource(34235U);
    msg.setSourceEntity(152U);
    msg.setDestination(50955U);
    msg.setDestinationEntity(225U);
    msg.command = 38U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WPOECDGUYRBNIUSIODABCGLNXJKRSDRFRNKVTTQPCNYFAKNOQFGPVHAUBZJEQTJMQTUTRSSREBGETBXXZOJSMRNELGYOWHKPAYSLRHYLAIWTRHKSHMVJMWQNDTCYZVGJEVBOEXJDKLAILJMIOZHCMEFWUPGCUBXOWYQMPQVTEWZHLBTKZPFBMFGCDNVDYHIGVKAUFCDVXMSCA");
    tmp_msg_0.description.assign("VVWTVRUABAEOQUPCPSQGTYPYCILWQRTAFYIMTDBFDEKUYXPDHLZLBBQFMHZHJTQKFPSXUUIVYJIHKPKQDOWYXCOZRKIXQKMWQSMNRCHETUOFOQBSNJSHOSTEBIEGRMCINPJAAHDKPGXGTDZLECNAXJJERRJNIUONLKWNLZHSNPXGLKLPWAXVGWGCUG");
    tmp_msg_0.vnamespace.assign("PAPCIFXPNEPGDOKTBZXFYUHNEONTDIMLCIKHGRMYBGWZZNMYXBEVOPCRWM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YWGANYIQMJDPFQLDVQMMWSIOEPPMXAOXKIIJNZNVUSATXJBIGYPHDJUOADWSBGIBRMOFJEQLMBLFZYNJNCDRCUVVQXUWVUUIRMVZAOWAYQVLJZHNEMFFERNXAWJXLOSLXHEASLCCRLGQCGIGQZEVPTSUSONGKTBKBPKNKFYCPWPTEPRWBVBALOOTSTYKMRXBEHBNHDUDHLGRR");
    tmp_tmp_msg_0_0.value.assign("LWVNWIGLGTYZPWOVZLZCKMFOODDPXMNOWHNXKQMQUKHVEKQSUIVFIJOJVDIRKDIGRAVMZOXEATBPPGPNSFRYBBQIMVBASKULSWGHUTETTEYDZJCECYILWRAPYYISJKVUAZMCTQXWAKFSXFMESBIGRZZWLEUHGPQNLSNBQLBRPGYXDFHUYRKEFMNFYNRNUQKXJOJTWGQABZAFHSDBUCLFEHDOHDCVAHYLMXUOPNJORT");
    tmp_tmp_msg_0_0.type = 174U;
    tmp_tmp_msg_0_0.access = 152U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RHQKOCJPMOIQNLEVFWAUCWWOIXZENCBPRMTYGXDGRTBGJNLYCUTQWJIRTGDSBGOZLOZGVITELFTSZLFLBAFTIHYAO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("SFBBIUQACGMKWDVUELLVMQIMMLAKGTIPYLFOGJKPDOUEUMOIOLQDZCQYEZMADXJNWTONKRKCVEJTSHCTRSRVSECREZHBUKFVHSJHCBPLRQSUAYQUYCPKJDVMNHNIZTLKBQJQZRDNGPOXNNGVECBZCYFOLRHW");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ALJLJPTLTRSCHBPXCBJCRVUNFIYBSIZIKRTOMBVHXEJORKPDZTUFECPAPBNTNGTLVLYOKONRHDUVFKYWSODJSVEGWVIYXHBOHCISQSJCBKJWOAEAQDXVUMXRZFKQFRDYIGNDDTQFVMTLHGKFSWQWUXJQUJTXZKPAACTLYDGAIGGV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.k = 0.17972457605197822;
    tmp_tmp_tmp_msg_0_1_1.m = 0.8485159775598089;
    tmp_tmp_tmp_msg_0_1_1.n = 0.3774259836196885;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::CacheControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 113U;
    tmp_tmp_msg_0_2.snapshot.assign("MBGYVTTUCUAVMZFJDARIMBWWWYXNIJNRKPLOLHZZBCKKOSCJMAFPTTXPWGKUIKJRBGMAQHULQYSLIUOWFPTFOJQHCRWAEYNDEASLUQUBOCMRFBSNZYMZKQALYHHDXQGSLPVYHWODKTWHNGJLBBVNYXRSIMGZEXJIYVUFDDRCNWQXFVFVFUWGGKEAMZAQEHMCEQJLDPIBPOHTXGVVSPTPIGJDOVEIZBNEXZDQOUOIYCSCKHXCRD");
    IMC::PlanDBState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.plan_count = 26507U;
    tmp_tmp_tmp_msg_0_2_0.plan_size = 2695474902U;
    tmp_tmp_tmp_msg_0_2_0.change_time = 0.1117979764989735;
    tmp_tmp_tmp_msg_0_2_0.change_sid = 21101U;
    tmp_tmp_tmp_msg_0_2_0.change_sname.assign("LYSSKCDCRVONWUNECRPALNBXKLLVFKQJOJIFFDHSHORDUPMHJAYNGCKYEVAOPAJOCQIYZQHNIAWLWCGTNGDVTFEYAHKOXKLUBMAGTIXZRVRPNQIUHEJLBKFPPGBYXLZXXZOZKFAVPNZSXPFWWSWZBSZWXUQQUINNSMVTMXOGJTIKDGQMLHFJSYLBVJOCCTUERQVWDXHOABCKGTRMIWEEHTCZFBBG");
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-23, 40, 68, 99, 81, 120, -31, 90, 83, 79, -70, 53, -4, -123, -107, -92, 37, 118, -103, 117, 82, 44, 60, 61, 27, 69, 54, 10, 75, -82, 97, -13, 109, -59, -110, -49, 26, -1, -127, 47, -60, -85, -36, -3, -30};
    tmp_tmp_tmp_msg_0_2_0.md5.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    IMC::PlanDBInformation tmp_tmp_tmp_tmp_msg_0_2_0_1;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.plan_id.assign("KWDVYMUPRVXOMHPMZCYZLBKEKODUVANCDAZUYEVOOCQVYHCRAEFSUYYBDIMXNFNGMLZIXGBPTULJQIJRWPKWRJSJKCZLTVJQXFBFFROTIBZXTCIRRFGMBTTNEEHOGOUIIBSCDHWJOHQLRHPLWFXNAOSKVXTDSEJDMLLBWQZHMPAIVGKTXJGPZFJVRTCSGKNEPLBQGHYQACDMWMUAXZAYLUDWOWUEWNYDFQXPJNEIZKBUTSKGSFNQSIGQAVH");
    tmp_tmp_tmp_tmp_msg_0_2_0_1.plan_size = 42384U;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.change_time = 0.18085081645945744;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.change_sid = 2258U;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.change_sname.assign("OSKTDXWFRBQQNXLEZGPCJDETHZAUKNFYQRUQQALQFKQHKKSPJUINXTCBVOXTMUCWACXYGMJOGRCMFSNEWAJOZNFCLYKGMWOEBAAREHNMZHVDUIGCLHCWLJZVFCDPWBAYBGOQZRBXPIHYSVMEHGGOEDWWI");
    const char tmp_tmp_tmp_tmp_tmp_msg_0_2_0_1_0[] = {-125, -65, -40, -81, 71, -42, 40, -91, -33, 80, 64, 74, -55, 16, 91, 28, -124, 13, 35, -38, -59, -60, -104, 85, -103, 108, 3, -86, -79, -110, -22, 99, -115, 118, -24, -41, 66, -59, 5, -41, 123};
    tmp_tmp_tmp_tmp_msg_0_2_0_1.md5.assign(tmp_tmp_tmp_tmp_tmp_msg_0_2_0_1_0, tmp_tmp_tmp_tmp_tmp_msg_0_2_0_1_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_2_0_1_0));
    tmp_tmp_tmp_msg_0_2_0.plans_info.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_1);
    tmp_tmp_msg_0_2.message.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.024547812766155364);
    msg.setSource(6068U);
    msg.setSourceEntity(77U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(110U);
    msg.command = 48U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WVLNLQDDWYNBXYCOPGMBHXABPFLAXJEGCRXMNSJEZKVLTZZZCECOSNZUGBWYHQQZRECONLPMYURUUERGOHOXIYSRSOLMBKMYHQFHERGTSKHKLLIWJGFVKGQDYPAYTATXEZTETRQFJMVZISKRDSNICOKQXLMDPPZIZXGTNBNFKDEQITCNSMDPHPHUJWCGFMEQWSVXWKFBI");
    tmp_msg_0.description.assign("NQGCDEZVBXRTGTRHEFKVRMJZIBJVTOXKRESZIHKFUMMUUGIHUGGOLWRAPPJZBNOTDNHPTFDXPLZHZQRFTSZYKUOHLIWQGDUAFDFJTQXLRQUHKDECJWVLZONCVIEISIDVHFUWYABSTQDSKRYEJWASQQCYBSKROTASEQRFHYNWAVMKCOWVKOGDIYQPNGXGBINXMLEGLYLUJAWZYWFCOJHBCCYACXJZSAMYLXPNLJWEV");
    tmp_msg_0.vnamespace.assign("QCZFNWRVHFVRPSEFUPEDPVZPOJNGHJBEXLEPAPUYKOHBPREBILGOLKLWZYOXMLARBWGHTDHWRNUVHHBDLZJTWRLZSSEREZJKIOVDHCSRSWQTTUWAUXMMAGSSKUIAVFZDZOW");
    tmp_msg_0.start_man_id.assign("FJWPVLIQZBVAGTHZEEMOJOIVHVEKTFOYJAZMDQQYWZLNWFKZFCLIHGXJQKZBFGGWTRSCXKIXGZDCBHWNLCMIRKUDUFPBYESYMVEFGYBKGTOJCSRPOOSSBGMEXQTPZRBQNAWRAUEVSUVHJJLTLLXCDPWXPNPYYHUHYNS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HQQVJROKJISVSBRLPHRJGKQFAHUGSZJRFDXGORCKDNKIIGHFFETECIVPRHUUZPDAAUWSKCTIMOQJOSZLMDBLXHRIBIYGTKBXYTCGAZJEUYXQPYULOXMAOFTWBOEUSYBYVITWVHAEGEJRDWYR");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 61903U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4889346147049073;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9286417784025695;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8811234997235254;
    tmp_tmp_tmp_msg_0_0_0.z_units = 3U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.514482310238504;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 242U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.7615494522310389;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.15642095455311944;
    tmp_tmp_tmp_msg_0_0_0.width = 0.22438261338553378;
    tmp_tmp_tmp_msg_0_0_0.length = 0.09053056843357177;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.6835097282558822;
    tmp_tmp_tmp_msg_0_0_0.coff = 132U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 72U;
    tmp_tmp_tmp_msg_0_0_0.flags = 73U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KTUGUMSKGCEEHLXJUFIOGKTJYCGJEGSQADDQMTSOAPBRQXGEWNWVOPRZLJRNJROJDOXCWIUCDUOJURMLHXMTNBDUFYALADVWCWPZOTCLWHMKBYPPZWQSFAXWVIWKOITUQNVECHQBKBQLNANKIALXVPZZLGRHQFZJEVYNGRIXYTFVRZASM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::RelativeHumidity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.9318173421517582;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6811026274794438);
    msg.setSource(5430U);
    msg.setSourceEntity(121U);
    msg.setDestination(21503U);
    msg.setDestinationEntity(248U);
    msg.command = 226U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FZHAHGLFWOGRR");
    tmp_msg_0.description.assign("NZBEXBXUKELLCAHNVZMXFSSMRNHHLPKLVTKUGIPHXCXJSXGXWUSRXKYCEHSLPVFDRUGQGZVJBIFINZCEIWIGSZWARKWJLPYUDMUWDQLJOFTPTOAQTOEIIQMFEDNVITCAPXSWECLJBCCOPOPEFARIDGRZKRKEAWFAFVUSYNJSGLDYYVBFMNQEKKJDOPGJQRUTDWORJGJMKW");
    tmp_msg_0.vnamespace.assign("XLRQYDKXSAQOOZEKIGHMMXBADIGOSJNDYMUVZYFACUUIQHGHPGBKFEEAYRGCBGQCJRWKDYKJTPNEBMEJNRCCBKCONTGWOHYVDQAWCNOWQMLGZKPJFSTOCUVBLFBYWPEYLLAELCMRWMXXNNQVKXFREFQMAZJRDJRDHYIIAAVWDLVYWJPHISSHJTFLZHVKKILGRVBWSPUQDXXFDOPOUVMFINTIZCQUZETEBXSIUTGBMTPHPHZNXTZS");
    tmp_msg_0.start_man_id.assign("KHNSLRVFUXMENWSCHOLQVFIMZCTGEYTAYNOKMSTKSBYAJWTRDTBZFBFWCXNWEQQRVLUZNWUEPJOZXMCRDWCLJQEZTPGJPFIUFO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LIXKKGIJEUJXTBHRGXLEMXUPOPVIPDYXTUJRTZQQWXGCAYLRDFQQOSZXNKHBOFJFYRMXWJAHSRIVMQICIYACQFAHZCYOWTQZSYLNVBOYPSOZVVGCNOFIPIAJCJYBQQEWGNFULROUMDIWJGHZZUSCMTKEDPONSUVOLDDPBLTCRSGHEKPUMNEAYSMMJRHMAZRGSLLCMDDBEWAHNHTPJXFIN");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 30745U;
    tmp_tmp_tmp_msg_0_0_0.flags = 143U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.14160938317883232;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8658814225867252;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.10732583665072881;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 13U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.2619185521151227;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 44U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.5024420186711042;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3076523968417624;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 10U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IFBRXKQHXSWMLPDMTSHARKYLZDKNQRHPSBPJQKHDBQHTUOBLSJVHLWJWMVDPGCALMSYUAEXFYRTSBGMCKIEIMDXWDFZUNNZGROAYKOIYRBCIJBIAHXDEV");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::GpsNavData tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.itow = 1096367906U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.5966680262617395;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.8324416278533511;
    tmp_tmp_tmp_msg_0_0_1.height_ell = 0.08058337912720204;
    tmp_tmp_tmp_msg_0_0_1.height_sea = 0.36543422263864733;
    tmp_tmp_tmp_msg_0_0_1.hacc = 0.9674132403290413;
    tmp_tmp_tmp_msg_0_0_1.vacc = 0.1340610625188221;
    tmp_tmp_tmp_msg_0_0_1.vel_n = 0.8913310590120498;
    tmp_tmp_tmp_msg_0_0_1.vel_e = 0.6996400179974024;
    tmp_tmp_tmp_msg_0_0_1.vel_d = 0.8451701182940801;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.04868517838033215;
    tmp_tmp_tmp_msg_0_0_1.gspeed = 0.08803083457713035;
    tmp_tmp_tmp_msg_0_0_1.heading = 0.20164201538564064;
    tmp_tmp_tmp_msg_0_0_1.sacc = 0.46925275635980446;
    tmp_tmp_tmp_msg_0_0_1.cacc = 0.8324652023103918;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YTCATNAKZSMZDMMOIW");
    tmp_tmp_msg_0_1.dest_man.assign("KBHAEGQNYUDUNTTPUXPNANLHAMBWUNCXRQWQBAZECNTLUBW");
    tmp_tmp_msg_0_1.conditions.assign("BRATMFAQXCPEWYMMTCZERNUJPWYVIURWHOTAGTEDVSLYPNQJHCQNMSYTFCMSCEDIJLJOQXXYTNVZBBZIZYKBRCSVNDMQVZKIGQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LinkLevel tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.8130149503549884;
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
    msg.setTimeStamp(0.13031676623799382);
    msg.setSource(55051U);
    msg.setSourceEntity(188U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(52U);
    msg.state = 72U;
    msg.plan_id.assign("SEVEUBQIWZMFVXCAYSFGCAREPXDYOREPWHKVBQDBZAZTR");
    msg.comm_level = 22U;

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
    msg.setTimeStamp(0.11367780633020153);
    msg.setSource(46574U);
    msg.setSourceEntity(136U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(144U);
    msg.state = 131U;
    msg.plan_id.assign("EMGYXCPJDHRTNBWAICBWDIIOQPCEOOBIQAEKMYYXKUJGTLVZHRJOFWDPYOESCTBYFCCDMUVBAZTGFXJKRMODNMTPISLSCNROIEQQVLFSLKPKXBJIFTUXVQEQWDIZSWAFEPTJNWNTFQWSNZGHJMULHSTVIXJXQCKRMFNDHNCPHLGOBRAY");
    msg.comm_level = 228U;

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
    msg.setTimeStamp(0.7640624339665201);
    msg.setSource(565U);
    msg.setSourceEntity(41U);
    msg.setDestination(21453U);
    msg.setDestinationEntity(41U);
    msg.state = 27U;
    msg.plan_id.assign("RLEZPBSOIZPTGPWAOFBUYGUMBJYQYNHJORSJRHASFCELGKDKWRMNWQAXNQAQBGZLBJZPYFF");
    msg.comm_level = 184U;

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
    msg.setTimeStamp(0.8747409859674522);
    msg.setSource(19459U);
    msg.setSourceEntity(223U);
    msg.setDestination(10792U);
    msg.setDestinationEntity(57U);
    msg.type = 37U;
    msg.op = 140U;
    msg.request_id = 9314U;
    msg.plan_id.assign("POLTNRIQWMDYXZIVHGFFOGQTWCDNMKPAOYICLIBCTVUKCCJOXSXHNSNGHVNBFPCAZMUPENOXZQEHWIZJKGGYFLMSQOCAVKSO");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.21646099200580782;
    tmp_msg_0.bias_r = 0.02407345801541394;
    tmp_msg_0.cog = 0.5242352151557083;
    tmp_msg_0.cyaw = 0.7310590450261705;
    tmp_msg_0.lbl_rej_level = 0.006671839293384996;
    tmp_msg_0.gps_rej_level = 0.9918775746021948;
    tmp_msg_0.custom_x = 0.3352994856738869;
    tmp_msg_0.custom_y = 0.4946793382691608;
    tmp_msg_0.custom_z = 0.5015359210769966;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VGZBITFPVVFRSEBSYUDLFDXTRZBYTNZVISMNKWSFMAVNGNISMZHOFCRRELAXPCSOZTJQITRXYGETPWYF");

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
    msg.setTimeStamp(0.8343881723702274);
    msg.setSource(33791U);
    msg.setSourceEntity(164U);
    msg.setDestination(28086U);
    msg.setDestinationEntity(211U);
    msg.type = 190U;
    msg.op = 12U;
    msg.request_id = 36731U;
    msg.plan_id.assign("ULCLMZQRNALBQAVDFBLVBTSCXSFDPKJTNUNQOFXBVBKCRCOXEYDTPNM");
    IMC::RawImage tmp_msg_0;
    tmp_msg_0.width = 57632U;
    tmp_msg_0.height = 28783U;
    tmp_msg_0.channels = 102U;
    tmp_msg_0.depth = 19U;
    const char tmp_tmp_msg_0_0[] = {-19, 79, -124, -34, 122, 65, 92, -54, -118, -124, 70, 106, -88, -118, 67, 0, -54, 102, 31, -53, 113, 78, 54, 81, -13, 26, -55, -46, -90, -19, -81, 108, 1, -88, 56, 60, -67, 107, -8, -115, 0, -98, -17, 77, 102, 123, 115, 52, 39, 62, -74, 9, -51, -71, -49, -82, 68, -59, 113, 44, 38, 126, 42, -74, -19, -31, -16, -92, 65, 26, 25, 61, 54};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LCBMDIORBWGARJVNVAP");

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
    msg.setTimeStamp(0.3153775298319661);
    msg.setSource(48118U);
    msg.setSourceEntity(253U);
    msg.setDestination(12794U);
    msg.setDestinationEntity(150U);
    msg.type = 193U;
    msg.op = 59U;
    msg.request_id = 41322U;
    msg.plan_id.assign("OPWUIJKWAHPKZGKGEDLZWRGUOBMVGIOIOPOLJPULVYUHMYSQBSGWUWAAYNFRSYMBXEMLXRNCFVCIASQXNAEPJDYET");
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QHEHOXZAYRBJJDMNRHYFDNGCLEOTQRLAKNQEXVPQULIMLINHQJGPKEVGIPSTTJPNVKNCXIONOMZDNNCBWHRMTVLNICCZSBJUVPIDYYOPUZFCMSMAFRKURTOABIJDDGUFVSZHZBVACLPGTBYCUGJPSHLFVRIOAWYVSAMKOQHUZFSKMXVWWGLXXBJWGREFUKFLABEWTDQFWEUYMDYCEEXCEFMXSLPJISTAQHKYJZZZUPWKTXBOIKQYWXRDW");

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
    msg.setTimeStamp(0.18336233511105737);
    msg.setSource(65121U);
    msg.setSourceEntity(191U);
    msg.setDestination(14012U);
    msg.setDestinationEntity(165U);
    msg.plan_count = 63415U;
    msg.plan_size = 3985694639U;
    msg.change_time = 0.2413556609705899;
    msg.change_sid = 56116U;
    msg.change_sname.assign("UIFBGDHCGAZDGHIFKYMKQFUPXEBZRXCPOZXTLKEYZUNMHDAZKCCOOZRYQZTXWRFNWLIWFKYLJHBBSVURPQBSDMGJEOVNQ");
    const char tmp_msg_0[] = {47, 11, 54, -97, 19, -17, 58, -63, 19, 36, 99, -112, -1, -45, -120, -2, 59, 75, -108, 91, 93, 31, -45, -111, 117, -64, -50, 33, 51, 124, -39, -78, -45, 113, -79, 28, -30, -94, -75, -82, -127, -42, 121, 85, 74, -116, -126, 29, 110, 56, -35, 124, -50, 107, 88, 56, -85, -51, 8, 96, -119, 114, -62, 69, -4, 81, 51, 41, -26, -122};
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
    msg.setTimeStamp(0.0608898877616586);
    msg.setSource(41694U);
    msg.setSourceEntity(19U);
    msg.setDestination(31327U);
    msg.setDestinationEntity(200U);
    msg.plan_count = 4613U;
    msg.plan_size = 1915694035U;
    msg.change_time = 0.4062308290562979;
    msg.change_sid = 25536U;
    msg.change_sname.assign("KKOCHGCGLPXHDWYVUSBRUVZRZMFBTYYOWSYTUGDXRFWICHRSZQKDDNCPTLGQTSJLNKVQEXZJOTEFQITJCUBLIOTPSITTFCXEIKODSJJHUAWPFAIKWDSFBRRJECFXAUPIKKIEXWGIMWSZEYMHVAWXEAHMWBQPLMGYWBBAROHNEASDXNJQZCCOFMKQRU");
    const char tmp_msg_0[] = {-28, 26, 15, -110, -128, 118, 8, -85, -101, 124, -62, 67, -110, 49, 112, -23, 93, 65, 85, -17, 69, 24, 9, 122, 33, -65, 3, -26, 30, 122, -5, -17, -3, 17, -93, 109, 67, 111, -27, -122, -60, 99, 60, 27, -67, 71, 42, 15, 62, -72, -115, -17, -30, -85, -94, 66, 64, -39, -120, -97, 35, 50, 100, -101, -96, 71, 85, -19, -116, 25, 53, 60, 100, -62, 121, 63, -79, -15, 112, -86, 17, 69, -78, 72, -5};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DIQTUVOCZEPFBMSPOTASEDXYQVLMUINYFRRJKVABNFEOLVPJVZFYONJJCYGLEIAMFSXEWOVSDDWWUDRHJMPKWOTQAEZHKLSZVUOF");
    tmp_msg_1.plan_size = 36279U;
    tmp_msg_1.change_time = 0.27752310683695247;
    tmp_msg_1.change_sid = 41832U;
    tmp_msg_1.change_sname.assign("OQCZZVURCSCGGNHBLHQWX");
    const char tmp_tmp_msg_1_0[] = {82, 72, 92, -63, 118, 79, 61, -23, -84, -94, 102, 123, -97, 75, 73, 83, -86, -34, -109, -16, 78, 71, -4, 65, -88, 106, 125, 102, 118, -62, -18, -29, 52, -1, 89, -22, -8, 95, 25, 103, 94, -4, -42, -53, -127, -21, 48, -100, 113, -107, -42, 95, -8, 2, 52, 14, 48, -6, 43, -75, -111, 104, -89, 108, -117, -108, -125, 37, 81, -116, 124, 47, 4, 95, -88, -114, -11, -3, -87, -51, -21};
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
    msg.setTimeStamp(0.752598286048042);
    msg.setSource(28083U);
    msg.setSourceEntity(175U);
    msg.setDestination(44037U);
    msg.setDestinationEntity(245U);
    msg.plan_count = 60792U;
    msg.plan_size = 3924297864U;
    msg.change_time = 0.18288998340408658;
    msg.change_sid = 43305U;
    msg.change_sname.assign("QLMFRQMOMKVDTTEJXZPUQAIMSWVVAUWNZLOBAZDWYXLIBCXBCPLQSCYIFSQTVRQFZPAVU");
    const char tmp_msg_0[] = {-113, 88, -49, -125, 87, -103, -27, 59, 118, 27, -79, 16, -44, 64, -69, -48, 106, 110, 93, 36, 121, 117, -121, -14, -29, -43, 74, 69, 91, 82, 70, -96, 97, 25, 80, 62, 28, -106, -72, 88, -107, -5, 55, 54, -102, 20, 29, -109, -67, 34, 126, 37, 38, -104, 86, 67, -121, 96, 38, 43, -22, 93, 29, -93, -12, 125, -54, -98, 37, -115, -92, 76, -116, 6, 114, -33, -5, 28, 104, 18, 102, -92, -85, -120, -28, 95, -89, -99, -98, -86, 114, -124, 95, -100, -41, -2, -120, 4, -63, 46, 24, 10, -83, 53, 8, 59, 55, 46, 55, -102, 36, -123, -54, -35, -17, -12, 96, -102, -85, 110, 71, 104, -108, 77, -97, 126, 17, 57, -68, 26, 44, 71, -24, -39, -69, 95, 27, -118, 73, 44, -20, -123, 113, -87, -119, 119, -27, -8, 43, -3, 49, 49, -9, 98, -14, 30, -2, 21, -70, -60, -59, 35, 43, -1, -25, 59, -13, -81, -50, 3, 75, 34, 24, 24};
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
    msg.setTimeStamp(0.6041132518392827);
    msg.setSource(45602U);
    msg.setSourceEntity(95U);
    msg.setDestination(53390U);
    msg.setDestinationEntity(134U);
    msg.plan_id.assign("VQNECBKJOCNRRTXSUBECOIRISIUNKTLVYXYJZFEHUVZFPCPSCBYHIXBJOHIGGUURIXLFCUHRTXVFEZLHMYTLYVQANKNSCFUYEZAXKJWZZWHGAVLWOUOTBQGSKIHMYPDCZMBPUAWSXGWJXSGFIFVRSDAMMBJBWWWRDKZNCDDDHAQOCDOJGFQVWAMTJETPQESQWLHBAQASKDNMNLGNVMNFTPTDLPXPYEPMVEAKOPKHQGDFJQOB");
    msg.plan_size = 62054U;
    msg.change_time = 0.626519879646657;
    msg.change_sid = 12078U;
    msg.change_sname.assign("JKEAZTXHMZFBNSOFUKAUKYBQBDEWYOYPLIQPCTVQSNHEMZPNGIRNCTOAADTKOOJHGZUBTFJWSBCGMJHPECBECVCBRXLMPLFPAABHRSNFXYIUJYSSIGIWTRJZYUIXYEKQZOYLRJPFXQVFINHGSDRCRCPZRWKDCAHOFEKIEDQVLPNVDDU");
    const char tmp_msg_0[] = {84, 119, 12, -36, 40, -100, 59, 6, -82, -4, 74, 41, -114, -29, 7, -46, 80, 13, 80, 11, 1, -88, 61, -64, 66, 40, 113, -52, 60, -16, 82, -68, 9, 91, -127, -79, 53, -83, 93, -98, 43, -2, -109, 30, 64, -113, -124, 6, -104, 52, 85, -80, 71, -32, -24, 41, 16, -88, 18, 68, -63, -46, 63, 51, 28, -40, -91, 14, -34, 124, -87, -32, -101, -113, -128, -67, 95, -55, -81};
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
    msg.setTimeStamp(0.6012817202985108);
    msg.setSource(65374U);
    msg.setSourceEntity(191U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("ITRBHTRDDSOCSEDAHWJESVHAINKIIRMDZVZPLCWOPKUEBHMOWJQFUDTWUJWESNXHNQBYJQUFZBMCGEPYKYMVACCWPFJPFAUEOWRSYIIFJDJQ");
    msg.plan_size = 5440U;
    msg.change_time = 0.5538332920547843;
    msg.change_sid = 64541U;
    msg.change_sname.assign("XZNOLUUDGXTDKVEEWDOUQDOVVMUGVJKBTJIAGENOCSBQBCPXHWNAWCYKUEYOTEVYUGWNBKZOFALZIYLPSDGTQMPBFCBXYSSZRFMYRQORUXLICJGHVEAWNTUFDLFIRUYKFSCPRPAHGQRVBMXMEXPSKVWATGMYHABRFIVPSWJNIHHZPHYTZDVNWCHPADEPAWMLWJTNOZNINXGFKQAQZMFLICUHSTFCCXQSZZJTDIYSQJXMRJBELEBRDMOKIQ");
    const char tmp_msg_0[] = {79, 2, 38, 119, 37, 80, 32, -127, 113, 58, -58, -77, 71, -52, -32, -56, -105, -43, 29, -121, 115, -48, -41, -32, -121, -32, -83, 51, 79, -24, 5, -50, -83, -72, -14, 45, -96, 34, -65, -92, 23, 116, -75, -83, -5, 102, 75, 94, 102, 63, -24, -61, 15, -15, 12, -23, -75, -43, 115, 110, 101, 34, 103, -124, -41, -80, 107, -65, -7, 59, -27, -8, -83, 103, -47, 16, 67, -112, -92, 52, -56, 67, 17, 30, 19, -120, -100, -96, -59, -75, -6, -72, -2, -30, 28, -3, -54, 82, 77, -93, 7, -91, -127, -58, -89, 34, 89, 68, -40, 43};
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
    msg.setTimeStamp(0.9144140152083962);
    msg.setSource(9520U);
    msg.setSourceEntity(187U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("KTVRLUZZWJFRGIFVBYLXORSNDRSKJDQWQMQOXNQBDVIIXCKZGHQPHNGZKXMXZTHYYUUWWDCJAIVPRGWAEBVACTAKTLISSZCMVNZDUDQSFEDFOXTUVEWNLUGTHIHPYZHXOFTCWOWYZPNASGHYLBJKJXJALQTMNMJKOLVRCSKADJCIRFROBTQLSBUGYPME");
    msg.plan_size = 51005U;
    msg.change_time = 0.3715824386229163;
    msg.change_sid = 27923U;
    msg.change_sname.assign("EVVLURTIXKCNMFMKTPAIJJFUI");
    const char tmp_msg_0[] = {25, -54, -2, 25, -79, -106, -99, 110, -127, -55, -12, 0, 57, -42, 108, 80, -76, -104, -124, -119, 111, 90, 51, 101, -55, 0, 61, 13, 27, -92, 116, -14, 80, 65, -38, -38, 80, 59, -85, -26, -54, 79, -105, 95, 118, 116, 23, -69, -102, 19, 81, 10, 27, 8, -95, -112, 71, -74, -13, -86, 118, 31, -83};
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
    msg.setTimeStamp(0.8418623836863551);
    msg.setSource(61744U);
    msg.setSourceEntity(51U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(221U);
    msg.type = 117U;
    msg.op = 92U;
    msg.request_id = 35982U;
    msg.plan_id.assign("AVXZNHOUGRBYBIPAVJYODJHVZVKFCEWDGKKTYAWHYWEGYNJIXRCWNKYOCPXWMGPQTKZCXTRBFMYFUSLPMUANHCUFJXIPIZSQWKGEMDMORYKSHRNBIHIBSOMGSAZCUNSUPHGQNCSVHRSIJJIHKVEAZRGRJCLDRTWDOBDMXQNFJPSPXQFNFDZMEMLYTFLENQFAJDZBYAGUOUTFED");
    msg.flags = 42037U;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.8770745494441963;
    tmp_msg_0.x = 0.20819426894738957;
    tmp_msg_0.y = 0.23240444746518807;
    tmp_msg_0.z = 0.4243836378513067;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PVXQMCWAXZUCQGVAFNMWHDUBNSMTWEXFYUKTZSZOLKVEHPJEKEBXZJGYRLBBOLNGDAVVPVYUIZRLBZGCCQWFHZDXNASJVTQJIAHAIAKDKWDBPAAILEGHDQRQTNQWWNHOSWEAC");

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
    msg.setTimeStamp(0.6492194025620341);
    msg.setSource(28763U);
    msg.setSourceEntity(116U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(188U);
    msg.type = 182U;
    msg.op = 36U;
    msg.request_id = 43160U;
    msg.plan_id.assign("UKUIPNZASWPNXEQMRHZGYZLCLYQRQWTBCVHRHFSHVLDEMEDHJBUVPHPZXDDYKAMYGINVUMRQWFIAHFCOEDIONIBGBQJJSVSGNIMKGJFOOLTEYIBHBOXGRECILEGEWXRSULDNSDVWJLTWRZOYKSBYGFLSOZTCCJTXQKYGACFIO");
    msg.flags = 35499U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("OZHFRTBTEMNXZKXFMQJZEUAGKYAZYFOLUGVSCNFPQCTCRXHTIKOLOQEDWMPCDNANCGBUBESNHNWFQFRHZJEEBYHTYDXIIUBMSPARTHEDDGIJGPCYMKTCGTGULMZJGFLNQSIWOSDOFJUZZFVPNHWNGRRUKGVMYEBLBSLUYPTRXXOSYJTWIXCWLMSKDVUVMFUSPHOYKWQSQLJAQHKXWCAIVANIXAHDPKEDROBRVZIBAQ");
    tmp_msg_0.message_id = 52600U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FVJBSETIALBICBTPQTYCKOTGWHONAGZPEHFMJYOQHCCPLDNJTESGVEHYASFMYVDHCIAPQVGGJHIPUCRJOWXFLKCMZXOBGKRDRQZYQKSZQKMBDWQPRPFBEPDREAYLWXOVMIOZMSCNTNJCIIEDFSHUURXLMFNUKVCKQZZRFWOXOXJLGNDKURLVAJRXUUKPABTUBYBHQZWJSDYEKSGAXV");

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
    msg.setTimeStamp(0.7128708317482191);
    msg.setSource(48085U);
    msg.setSourceEntity(1U);
    msg.setDestination(27895U);
    msg.setDestinationEntity(252U);
    msg.type = 138U;
    msg.op = 108U;
    msg.request_id = 46209U;
    msg.plan_id.assign("MIBTMVNVPUDCLERCVYQYZQXBFOQLDHCCFKGRDBUFOMOKQGVNTNWBJVGYZROLAAPWQPGJKOOIIZARPBHJZFRHPTYLTOVHELFCDKTNXONNNDFNECXYUKPVASSLWDZJRMAAQVWLIBZTLCXMPIJFQHMAUPX");
    msg.flags = 31979U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.25791890668729855;
    tmp_msg_0.lon = 0.5441419420158126;
    tmp_msg_0.depth = 0.8021411369916188;
    tmp_msg_0.roll = 0.1586853137450127;
    tmp_msg_0.pitch = 0.2621672634782416;
    tmp_msg_0.yaw = 0.7489980179986866;
    tmp_msg_0.rcp_time = 0.13237938024976514;
    tmp_msg_0.sid.assign("NYRFWAWFFHOLOXQKXDZSOGLUVOXUIRGJPALKROAFDFLEKBNCTPZAONQFYNESXOWEEIQAMJXQIPFCEPRYTHHGOIRWODGZEWQXRHRXTBYVLHCMTNEJPGDGNLUJDKZNKGMVGWJAZSTBPBBPKWDUZCVHVUCNMEBPLNJUMVLVKFKADIEQKGCBUJQTZCYM");
    tmp_msg_0.s_type = 161U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NZQDHWJEXLLRQLHMICTCDJQGFZHMDXKPFU");

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
    msg.setTimeStamp(0.9546401460531432);
    msg.setSource(22101U);
    msg.setSourceEntity(54U);
    msg.setDestination(35149U);
    msg.setDestinationEntity(9U);
    msg.state = 65U;
    msg.plan_id.assign("ZWTNBJVJDHUTRWSQIUDBPINVUOQCCAQQMJEGXFSPABRKQZIWIXAPSPIMLLTCNAFGGCOVM");
    msg.plan_eta = 1839848699;
    msg.plan_progress = 0.8029416925068887;
    msg.man_id.assign("VJKEJHXCFTPPAAIKBINZOWMVTYHVSWPLOEDNYSOOEPIPVWCUXCSQFZTGTGINCYCKNBJAZNDSEGXSZGCOBELBRF");
    msg.man_type = 33498U;
    msg.man_eta = -2100315266;
    msg.last_outcome = 144U;

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
    msg.setTimeStamp(0.37418426277578865);
    msg.setSource(14978U);
    msg.setSourceEntity(64U);
    msg.setDestination(55227U);
    msg.setDestinationEntity(99U);
    msg.state = 98U;
    msg.plan_id.assign("DPFSQUVNPELVUOBDDSQPESZYEECGSYSLCRTGWQPBRVHANHWTAALTMDXFIZLTBQCSOCAXHQJAPDFPTQUWBKPDHYKABUKIFROOMXWYGIJGILYJZUOJAGZUEJYBIFLSIPLOHXWYZNEVLQUOMKNDCDT");
    msg.plan_eta = 1306260112;
    msg.plan_progress = 0.46451609965808816;
    msg.man_id.assign("UDSGJFZDYZHAVXIW");
    msg.man_type = 25048U;
    msg.man_eta = 678294959;
    msg.last_outcome = 165U;

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
    msg.setTimeStamp(0.14695371011118774);
    msg.setSource(32770U);
    msg.setSourceEntity(50U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(156U);
    msg.state = 214U;
    msg.plan_id.assign("ZEDMGHEPNBAYRAXIXHNUHEZGNBTCMGACQKNUTOSRVCFGWNBRHHMOUFLLPKTICFMAXBBLYQKTLPIFRDAUPKVURBJDKEZJJLEGWQIBXBFSLMECSDNPWQMOOFLGCVGXJYEUHIYMYFKWZYWHRERDPYJABLWLUVZCJRUXHEFOCHBMNJKTSMVZFDSSYQORXVKVVTPMCOPAQWUOIG");
    msg.plan_eta = 1378642634;
    msg.plan_progress = 0.07570929903733037;
    msg.man_id.assign("TERJSSSIUQHOOYJKGPMQZWFPGLIWGZUGNXIMCNCQVUJBWLYYQVNUPNZQDRA");
    msg.man_type = 4455U;
    msg.man_eta = -899307172;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.5414552522267959);
    msg.setSource(60378U);
    msg.setSourceEntity(230U);
    msg.setDestination(57523U);
    msg.setDestinationEntity(200U);
    msg.name.assign("OLNXLRGVDZZNVKTHNGPDRLMYUOINTYFWGPPEJCSQXGASUOHQUEPYBKXFRMLDMPTXRAMZERAFMHZLIONVAIJBHFFZTOUFMUSNBCBAVYTOUTCLQOVTJZCXDJBEQDUWIHTSECCZQLWKINJGJIBSQUWAZQDSDTFFFPBSYSIJSBXZIWCVYCTJNZQERVWOWDOLHXYMAXWIGMMRYCNYHRVEKNOAJKCGUVKXRPLEMSWQAWPG");
    msg.value.assign("PHKGCVUEFMCHNSEGDEHPFELONETTCOUYTKXMYNPEVWDDJVDJLFFQNKTLBXAOQULAMIVWDUZTOPHLWSBOMJIOQAKCCSQCDSQJWKOJZKHRXDJGYNLAIFAYQQBECZKSNXZXBBANRRMIYJXDTMPRSQDPSBVTIZQGIRAGXFNRAUYYPTBMJDKYGGLCHGPPKTLUZVSUEYWA");
    msg.type = 196U;
    msg.access = 139U;

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
    msg.setTimeStamp(0.32932099166244677);
    msg.setSource(1865U);
    msg.setSourceEntity(15U);
    msg.setDestination(12599U);
    msg.setDestinationEntity(184U);
    msg.name.assign("JYRSOACYTYVGILXQGEPBZZZBXWMMBQCXRQOHSAKWRNXEUQTZZQMQMKMFPYPKHTYKKPDRHDGPVQLEKUEAZJDDPTGRXNGRLMCJJACWLFWWBPUTMQBXKENVUZFOOYQPLWHWZYSCGMIPHV");
    msg.value.assign("MQGOBQHIPMFRGSXRVHJL");
    msg.type = 102U;
    msg.access = 70U;

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
    msg.setTimeStamp(0.3456778530335748);
    msg.setSource(25981U);
    msg.setSourceEntity(150U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(60U);
    msg.name.assign("AMBZHCJTSLCJLHODAYODGFWDDKSBUGDEKREZSSNQGLHJN");
    msg.value.assign("WPTXQQKCUPKIYUFWLWMJVVMZUKZKXJVNAWNDGTVRLJONERLYDBOLFWDAGYXCRRRRKHUSFEMSDWZYALDBBUTGIZCRSXNKFGAMUXXALCHPCNGYQSSGYMPIEMQKXJGBIZTIDAXCZVSFIYIPOSVFETPOLNGSPQCJEDEWUMWKEHJHBZQXBSIOUTOCROAHTAGTVRHZNIBRQXAJVEQQNF");
    msg.type = 212U;
    msg.access = 240U;

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
    msg.setTimeStamp(0.023154125078273413);
    msg.setSource(42227U);
    msg.setSourceEntity(157U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(92U);
    msg.cmd = 49U;
    msg.op = 69U;
    msg.plan_id.assign("MDYWXSDETSDTFUFHQHNYKZLBJPMCHBOZPIJWXQWWGYVPGLMIZSNCVPOGQGYETDGEGKXNJMBDXFOCSRUQUZSPRFXZIGLZJFSDIBMWCWGKGMPVHURFXGNFOUDPVUAPHYWLKHTLQIQYKRBNJLMTNYKHPRSICCBMCAANVSQAVTBXWBLNF");
    msg.params.assign("RNOHLYCLTIQFDCFTJKRUPUIUHSXPDTXBZJJTUPAVHFOFEBK");

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
    msg.setTimeStamp(0.8432903012263744);
    msg.setSource(1695U);
    msg.setSourceEntity(193U);
    msg.setDestination(39772U);
    msg.setDestinationEntity(136U);
    msg.cmd = 50U;
    msg.op = 135U;
    msg.plan_id.assign("KTJYTLDIQFCQJXQXRGLEMBOWIQACAVZKLNLNQSSOFQHPTKRHHETQLGMIIAAGDWHRAZVJJVKKUOIKOPLMBXAEUBPVTWRMOXOZTMSNJHJYZZSIGQFKLAKBVNGQDFFRPHOPNGDKVUXWUIHXCZMSYBGJYVSUWDRMCCLNRVNGTSSEOSPZVWCABOKEZUUDABXEPYWNJWPIECHIXUUBGXMMOSDHYFBTYFJJDRCPDYCWAFH");
    msg.params.assign("JPUARTBDMDOIZVXKRAGNZFDQLBQDJGOWHSPPMSZWGIQYLRFLRQNEYRSNZNFZRHYOLDBHWGVNOGUWCOTOBXNEUCFKJZPSMEI");

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
    msg.setTimeStamp(0.8033266474537858);
    msg.setSource(10068U);
    msg.setSourceEntity(27U);
    msg.setDestination(50150U);
    msg.setDestinationEntity(61U);
    msg.cmd = 26U;
    msg.op = 245U;
    msg.plan_id.assign("XXCZBTGRAEWFGYBKOSWXHYNLGYHZDYUVJWXKKGWIGAUMPXZTOJSQZNUYRJGQHBSZNAMFZNFQQPTXYKNSFGLFSORNNFHRAPKPBYQLZXXVHMHVDCUXCLQCEUKLISDWKJCOCQIITUAI");
    msg.params.assign("JGXRNYFZJGOAECJADLSHOJJYPLOWTWVNPWYZZLNQMCATUMOSCMHIHVUNEDLGTIRJGVPAEQHTRYCYFTDBUKQKQBCXRSXWXFBZIBCFVMOSUNJVLIYYHTKHECMKSIZKAZCFHLAGUWFDEQLUPKIBGKOEAFZVZMMIZRDQLDJXNOPEAEFGQBVWNGRGWHKRXGSQVDUHSLWCKZYFRTF");

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
    msg.setTimeStamp(0.2380932184009189);
    msg.setSource(15632U);
    msg.setSourceEntity(50U);
    msg.setDestination(4962U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.19978148640594606;
    msg.lon = 0.1233508877573899;
    msg.depth = 0.26660955990406476;
    msg.roll = 0.6044066350491466;
    msg.pitch = 0.2523359439744708;
    msg.yaw = 0.8667776614617334;
    msg.rcp_time = 0.6548433614837816;
    msg.sid.assign("RDBHWNVOKHMBKTJICJDWLBBVJXCXGOZXBBFQFQXHVCBPWYZFJXWLFWYWZWNMRXRCMDJEJDBAZUSHYNPTCARGNPCNXGCUDUSNHUHREUAOFLSAITIQGTYHLIMRYJNLTRNCKUKHTRMTOEAUQAYORGMB");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.1266301460404986);
    msg.setSource(23579U);
    msg.setSourceEntity(182U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.40544442945411974;
    msg.lon = 0.10322543373559923;
    msg.depth = 0.5014718993124745;
    msg.roll = 0.47966948823500255;
    msg.pitch = 0.016891309086818906;
    msg.yaw = 0.34210525567443495;
    msg.rcp_time = 0.8524193696923285;
    msg.sid.assign("VNSWIJTQFKIVMFOTHYSJUDNVOKBXVLTEPFHXUPLVDVYSNPCUXXHNQNPCYZQWTSFIXSFLQLHQTZNCTUTBOCMCUZKGJQNDDSSYYBMNBBAJPFBCIQEJPKUUMUYWEZBXYEJANSTJCLEILBRMGPRVGVWLLXRAXZHKHFIOWFWDHHGSEWSKZCIAHOOJOERTMQOIDJM");
    msg.s_type = 182U;

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
    msg.setTimeStamp(0.9199245222395998);
    msg.setSource(23804U);
    msg.setSourceEntity(197U);
    msg.setDestination(22856U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.1108116951239968;
    msg.lon = 0.34594560449111034;
    msg.depth = 0.8221415963293505;
    msg.roll = 0.11610968940758415;
    msg.pitch = 0.7186389408103179;
    msg.yaw = 0.5909442496553212;
    msg.rcp_time = 0.16178100696573705;
    msg.sid.assign("QDXWMMDSXSHFUTKBDJHCPZFPRLKEPFCAIZSGVIJYBEVZKOQCQTRMOJZOTCZZIYPALRPNFNBFLTZMTUDLVYKSSNONALIWYHHTVICJKSZXZRLYEGOIBQWNVSUCMF");
    msg.s_type = 155U;

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
    msg.setTimeStamp(0.8425847154475491);
    msg.setSource(22748U);
    msg.setSourceEntity(189U);
    msg.setDestination(1963U);
    msg.setDestinationEntity(6U);
    msg.id.assign("ROUKKRYYTYMWKMVSEMEHRUGCIYHVYHKMVSFROWFUCTRGNGFRTYJNDZWMLVFRABTQDCTNAWNVBTWIDNACOLQXJPKUEPOBQCGMUFELXZKGROGICUPCLRMPJXLVWHKVPAIABOWFXOSOPGQBCHVEIQDDPDNZZULLEFAESNAXZTJQXJEVAWQQNSCF");
    msg.sensor_class.assign("ELRGOUFJJKLGISJXXGZTJLGPWEEUHWGRJCSFWZLLRNBIAYBKVIYGIPDKTAJOWTPCEHXQYDVZIMVKXLUWORMBJGTTMFRYLATXUCCQQVY");
    msg.lat = 0.44540564198933363;
    msg.lon = 0.7352733877139691;
    msg.alt = 0.8169714415090877;
    msg.heading = 0.36541980134600704;
    msg.data.assign("NJETAKCSJVNLSPZYAULKYCGWVCYCNHFPHHCGBIZJUXARDSWGUPOGBGPFLCGONYXMJIXWMBIZCJROOKFUCGSYFKAGPCRRBWAWBBVHGERVHPPHLJLYMFWFSKQTXLROSEDAJRYINQXUKQFTXNUZTYWYQVVIMMCHBZLNROVIIVBGOZULKOJPMSAVHWBZNHDDAZQUXSEVYDTMTMRPIEERTWKXQZDOSAWDHDJ");

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
    msg.setTimeStamp(0.3170844323845198);
    msg.setSource(21724U);
    msg.setSourceEntity(246U);
    msg.setDestination(53521U);
    msg.setDestinationEntity(194U);
    msg.id.assign("IIYRXYZWTOGPLQGNBRNBIITKNUTAFCIBWYHLRBZXHEFGNYNYQPXEZRSOJQVZLHETNEDMUKGQYCJKYRWQESBMYIRQUCZMQWCKZBGCDDEKCOHSKAXLWMDMPUBNUCXFANCJGKJOXXPIAWODPMOZUVWCSTWPHRZRJPHJMNXTKSPKDVILLXXSOOCHESSNLOZJZLQDEAFVVEUBWTDOBEQJVULBHGFKFUVUJ");
    msg.sensor_class.assign("ACJZDIPZUPUXQFYGKBLURAXJDWCHWSARXJMLULGMBHCJPNMMURDNEXYRVBBSNBCQKEIAVGIBIVJGBKZDHSKFSNYSXVIEPKLCKOASQBFFIIXYGONPRHRNDMTFWOOYOLQVGLQEYRKY");
    msg.lat = 0.1787927386099093;
    msg.lon = 0.09467016907560022;
    msg.alt = 0.507248842654086;
    msg.heading = 0.3707117645321828;
    msg.data.assign("PKRGDLKMKPFGBIVNWEZHLTYYNWEIOOAXPFEPSQXAKJQLBNAPTLILNTPMUFTZCYGJBLVODBSKRKYCSUHDYHYFJDPXRRDSVVOUOUJGXXJRFNNGIQXTKEHZBUMOMBJOEJGHMZYMI");

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
    msg.setTimeStamp(0.7473182309131858);
    msg.setSource(26605U);
    msg.setSourceEntity(48U);
    msg.setDestination(43141U);
    msg.setDestinationEntity(240U);
    msg.id.assign("SDJRQNRRSPRXVKEKTBRONQYKMIMVQZTH");
    msg.sensor_class.assign("IEFYGBJCJGZYIVENOSMOKTAJBZPLGYOKFQSSWPTZZAFKQKXAWSCDMWPLJMFAEGNPADTUZZRTWNSMTVRSBCXQWWNMFXICQWGADDEFYOHUAVOTBNYEZELCCAQZPDGPFGUKMERCLV");
    msg.lat = 0.06386143864046723;
    msg.lon = 0.6536315980382076;
    msg.alt = 0.6353441694399192;
    msg.heading = 0.26683646624681134;
    msg.data.assign("MHNBZVFXIQBJCTKONLDEYXKZJOZRNCGQBRDPZGSMOOREDKJOVQHAAGUFWSGJYBQVVTIREEFVXTCCUAIDFFQYUDXUFEAPGNTICVWPJSLZQMPXVKEGBHUWILGRMADCNDTCNTZSKXIONOILTKNKZORYGJUVFUOHMAFQYHZZWUHSMNULRYLDYUKTATHMJBGIQHMFARXIEPANJQBSMDDPEIHWPFVRBEHTVCPWSCPPXMLA");

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
    msg.setTimeStamp(0.5839485534999324);
    msg.setSource(38243U);
    msg.setSourceEntity(105U);
    msg.setDestination(18493U);
    msg.setDestinationEntity(100U);
    msg.id.assign("QKEKWEUPSMFRHACCBFDGURM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GQDVCFODRYCHQBDJKBUXSOWYETLUKZWQDOGKERSVENGCLFEWBXFMPCNIXHGFUTTVKRIEBVSRNFFZXQUHUZYTRJPNYWXIBJOZEVCFPRRB");
    tmp_msg_0.feature_type = 139U;
    tmp_msg_0.rgb_red = 147U;
    tmp_msg_0.rgb_green = 187U;
    tmp_msg_0.rgb_blue = 131U;
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
    msg.setTimeStamp(0.8876640852825807);
    msg.setSource(3499U);
    msg.setSourceEntity(148U);
    msg.setDestination(18919U);
    msg.setDestinationEntity(104U);
    msg.id.assign("BPVOOUHNZHKNODXKSUCIQCCNHLREYVKNTXDIWEQWTBUIJTFCKWGZLHASXMOSFZVSFQJOLSCQUMBHOV");

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
    msg.setTimeStamp(0.2475949807559964);
    msg.setSource(58161U);
    msg.setSourceEntity(155U);
    msg.setDestination(26905U);
    msg.setDestinationEntity(14U);
    msg.id.assign("YZTFVKLOAPUBIVZRDFNQQEGIJBCLPJGUIROJOKKNIJLFLNJADDHDGMBZLQBWHKCJLOUHKLBUUJSERJWNVHZSCWGIEQLSMUQTBKGHFERVNCPVHFFGCXUPBXWXYNBVNCTOFKHMTCPSGMSUQFPAXPP");

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
    msg.setTimeStamp(0.6503754383709828);
    msg.setSource(47040U);
    msg.setSourceEntity(222U);
    msg.setDestination(3365U);
    msg.setDestinationEntity(40U);
    msg.id.assign("BOFTFUARPGYIHGHXARNQKNRVGNVMBOEVZYULFNSIKYGJDTHJWCEZWOLBTDUDRCMTPLQVNIQNEOJAIWJNCCXQZUSDCBLGVAWDUKJWGEXEWLBBSJLHFJAHTWIPX");
    msg.feature_type = 136U;
    msg.rgb_red = 31U;
    msg.rgb_green = 109U;
    msg.rgb_blue = 34U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9601302560991261;
    tmp_msg_0.lon = 0.5003088193220256;
    tmp_msg_0.alt = 0.3535226630445163;
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
    msg.setTimeStamp(0.16221894107080537);
    msg.setSource(25374U);
    msg.setSourceEntity(74U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(110U);
    msg.id.assign("WXDZFYQYVSIQNXKWDMTKJNOMMCHHGGATCAZSPQMCYRUDUMARHVHYCNITQGBXSJKEJOEPKUSDZNQOLLVPEJANLOTVWMAWKUGBRPFAIKVGDBJMOZWCIVAFURIIDXJBBHZMHTUIQWLRDYEXCTOVRCFNTUCERFQWGGSYPDWKUMYBRGLSPCVSZLUXOEVHXIANUAZGASWJEZBCZNRXYMDFKEXTYFBPTOHISWEPQPBGIBOERQOTNVJYNFK");
    msg.feature_type = 239U;
    msg.rgb_red = 161U;
    msg.rgb_green = 205U;
    msg.rgb_blue = 158U;

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
    msg.setTimeStamp(0.5112778869258865);
    msg.setSource(15556U);
    msg.setSourceEntity(123U);
    msg.setDestination(20007U);
    msg.setDestinationEntity(165U);
    msg.id.assign("TTBPBXLMPWXWYYHHXYGUSADISNOOBGWNWSGKVXTYZBWTRTIULCGVHFAFKXV");
    msg.feature_type = 184U;
    msg.rgb_red = 102U;
    msg.rgb_green = 68U;
    msg.rgb_blue = 236U;

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
    msg.setTimeStamp(0.8981148726129262);
    msg.setSource(26417U);
    msg.setSourceEntity(5U);
    msg.setDestination(57194U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.16699181531254703;
    msg.lon = 0.244282880538095;
    msg.alt = 0.4376512674712649;

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
    msg.setTimeStamp(0.8742645793798021);
    msg.setSource(45549U);
    msg.setSourceEntity(225U);
    msg.setDestination(12360U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.12138979485634327;
    msg.lon = 0.21083232898085535;
    msg.alt = 0.45534639334876736;

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
    msg.setTimeStamp(0.6041841332849645);
    msg.setSource(28005U);
    msg.setSourceEntity(201U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.03455939933827423;
    msg.lon = 0.40336001151340206;
    msg.alt = 0.3481058461550819;

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
    msg.setTimeStamp(0.28088183561024194);
    msg.setSource(37383U);
    msg.setSourceEntity(248U);
    msg.setDestination(7529U);
    msg.setDestinationEntity(211U);
    msg.type = 120U;
    msg.id.assign("VPMTPOCOHYOTOYQKDLTIOIAXHSGYYKFUGJCZWZNDIUDVSTTSXKTTNNLMUJHRYQUPGFHZLAGMZRPCJEQKZSCGEAYDOOOUEMREQLKXDLEMMAEQIPSBNGQAVJVHWLBCWFMBNBWTRDQVKEJYVUVAXROUYCFRYHWMXCQCGBBVFZBLNHRWDZDFKIPIHORJMNSCDBMUWSWFFUIZWEBVKKXFQXLGXFSGHABLXRAYQDIGP");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.00942101684669927;
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
    msg.setTimeStamp(0.9027470250214567);
    msg.setSource(64100U);
    msg.setSourceEntity(239U);
    msg.setDestination(47714U);
    msg.setDestinationEntity(20U);
    msg.type = 207U;
    msg.id.assign("XYQTMSKLVEHUJDNEIVRYPIJSAQVOVTWKLDUEBDOKUVKUBTJFRTROGBSHOLKCSIBBBRQSIPZOPXEJQLMDRKMWZGCHLSTXZOPHNPMRAAZWZXYMBEHHUKTGNIDQCEJOJDTRPFXSWZCPXULDQYXKCTMPHWQEDTJNLADBGGMXPAOEAIFVRLYNEWVYZGQAJZYDQYJFFANSHNCCW");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 109U;
    tmp_msg_0.list.assign("YHPLFZVVICYGWOUEEDGQKABDJAZSIPIQZRUSCZAKIXSICKZUAOCVGUXZAFCK");
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
    msg.setTimeStamp(0.516549970750028);
    msg.setSource(59942U);
    msg.setSourceEntity(88U);
    msg.setDestination(7209U);
    msg.setDestinationEntity(144U);
    msg.type = 72U;
    msg.id.assign("UITMXKPZRKLBUWYGFUCPKWWYIPDGUCZDQHMPOJTNYIPIQNRLBMVKCFWRYSAISOMCWKSZLMNQPOULCDRTWMWLKEJBLIHFRKBJMEUZBXFAPGJFGJXEXQGOBZGNGOHPVEQWJJRHQFTNCVEEDWTAOQRABAJFIDVDTHCYVEZMXWZVLBIGKAMISQYRJGLOVTNSJADAZHEDNXDALPGMSFFZKXYQOAYVTRNHUXEUFXHVEYUYLTVCBUSNCHICODHKOPST");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1435950600U;
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
    msg.setTimeStamp(0.5103061822892894);
    msg.setSource(54294U);
    msg.setSourceEntity(128U);
    msg.setDestination(15634U);
    msg.setDestinationEntity(147U);
    msg.localname.assign("ASSJRWZELHQTWYILGBJVNWHBZOKUWDMIYCUDLSKHVXVGFGTSSUYQRRKBCQNKZUQPHLSYSJFGBCW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QPLVIMFWTWUHOQZYGJWLBDHOFJCOAOGTZYBZMFMCJKCXEYSGUOMRAURPDKQTLXSIUDHKWERTTFQVQRFHKDXVASANJKNBSYUKBNICTKDYUXUHGIIXSLJMWKOLGGXLRZKNLAWISYPAOXADRTETWLBROCFKBOHMZWUFXDPVVQSMBYZFDAJTGPENEMIEOVAJSMYRCSJECNSBGPQWGQFIEVXYZHCDNUZZDNUXCITGPRNJPRN");
    tmp_msg_0.sys_type = 121U;
    tmp_msg_0.owner = 48630U;
    tmp_msg_0.lat = 0.47867528356963096;
    tmp_msg_0.lon = 0.1278143182947804;
    tmp_msg_0.height = 0.4809916588018439;
    tmp_msg_0.services.assign("ZDSKHABSINSPXVVTQEVLFUDBLIQQMMTSJCTPWGUFCULQTPWUMYIERGMILCFKWTHPEYJJFHBJUXLGEUFYGNVIUFDRURGDNZFBQYXEXJAQWBHSVMZCWAMOKLTOLSPEEVMIHYROCKFSTDGOPXCWNXHVVKIIRURRGGOE");
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
    msg.setTimeStamp(0.89617216137514);
    msg.setSource(22544U);
    msg.setSourceEntity(11U);
    msg.setDestination(51299U);
    msg.setDestinationEntity(54U);
    msg.localname.assign("RZPLWQSKLTKUEDADRDJHZVJFXVGYYIWISNKWWSGZOQCAWGRMJHRHZOIIOYBTIFOVNRVTXUXEUQFOQOAQUCENFPLSFLCDACLPKGNJIISJNVQPMZFSBBYRTSXVAMOEVHTWWWYKHESZULZGLDUFWOGMTJKXJVBKKGVEJRQYRBPDUBFFIBQARUMPMGUPCETYUFMZRXNGTZAWAHXVKNOYMSDEJGCC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QCDYHESYRNBKTZLKVXYJUTJOCASQFENUDJHXOZKRTFZOVSEIDQPWKFPYWSMNSATLJUCNIVXRCQQHFJBWVRPKADWSUZWQCKEDYCPGYETBHVZBGUGRKUWXLIHAARKGIM");
    tmp_msg_0.sys_type = 110U;
    tmp_msg_0.owner = 56525U;
    tmp_msg_0.lat = 0.4180619148851271;
    tmp_msg_0.lon = 0.38471939705421565;
    tmp_msg_0.height = 0.6185061144240501;
    tmp_msg_0.services.assign("PKERIQYZMDTYSKZMINCWEWSKMAXGUWVSJAPPJIQYOGSDDEGVLIKGXDFQRKPZNOCWVUTMINVBAHPSQTVEMHWXGJBSLCCQKHXUODEGQBFLTCQHACEOFLWWBAUBSV");
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
    msg.setTimeStamp(0.8533491527513315);
    msg.setSource(19238U);
    msg.setSourceEntity(126U);
    msg.setDestination(65436U);
    msg.setDestinationEntity(1U);
    msg.localname.assign("RBTBWLJWTMBWEUVSJAUOGWORDUHBDKFDZRBYYQIUTJCIZVBGH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QJVWNAJNQVULUMXZZTWZVUGFTYKNSHTJBKEEGGCAATATYBOILPMYNUFKXOQQGAEYCGDQJRLVJVJSZYDZKSHXWUOXZHLUVPDECQFTMIGAPGVVQVOINUBNYEYBIRWBMDAFQWUCNZDRBPEONKRXLOWVFORSCLGSEFHDHIRMMLSTKRHAYLJIZICHZOS");
    tmp_msg_0.sys_type = 122U;
    tmp_msg_0.owner = 4478U;
    tmp_msg_0.lat = 0.5152646604399896;
    tmp_msg_0.lon = 0.8415416296426177;
    tmp_msg_0.height = 0.19606597282234306;
    tmp_msg_0.services.assign("PUGEMBNLMQMCQNWLQHNMXAURWWPQXTBRFYFYFSIEUXEQHKHFAVYEYUGXCSHJCPMJTZSTFYXXHTWYOBU");
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
    msg.setTimeStamp(0.6187926404797757);
    msg.setSource(61712U);
    msg.setSourceEntity(106U);
    msg.setDestination(21312U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("SEXMWEPQZPLLAUZEIPIFFTBDFRBHYOFGWVXYSDJPNEVGVOQGSENMKDDNKLUBYZCVWTMTGISCHMJDTOMRAQYLLISUSJMMCLOOACIFWQILIWOXTWICSMKBFPBNUFYXRNLAYRUAKYSAGZVPOXBHZJGDDJEQXVEGADJJQJRQNBVFUWMKOVMICOWYTZGUEBFNTQOSELKCLBPJPHJUFDDPNCRACHKTVXAYSZRKBRUHYQRUATVZTXHWZKXWZHHXCKGG");
    msg.predicate.assign("USKHOMRRJNDEONTTLCRFZYWLOYUTPTSJNKXMKVIAXTWMHYTPMBBSCPLELOPCJEZHTWGPRJHDTRKZQWNQVHGPCOISBGEXFCAQFNPLXQXNXCUOWLEBIMDJKALDBQMDYCASVDPCYPNAKWSGVVMIZUZRBUDLUHKWZACCGFZJIDJUQMBEYOYKKKIMFVNSLYXHRIHXGHQGGGZTSJGQOSEFOFNDHFJONUUWFBMB");
    msg.attributes.assign("IEYDETMFCDJIGRIADCSUQJAJAPHLSAIUSXBBERBSMDC");

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
    msg.setTimeStamp(0.9220357142237102);
    msg.setSource(50356U);
    msg.setSourceEntity(105U);
    msg.setDestination(43039U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("SVQCTQNPGYVHZUQAIXWXLROKYUAGPDMXCPOQVBYJDZCFXHONHCBYZNCGKBQSUPDZWLEFYWWKRAUPXIJNEVSROEILAABJIVMTJFBWBUTJELBSYRUYDGATLXCZCHBWGSGNXGNUTWDWDEFKBUFCLRXTPNIYOXEQKXTVOUWHGAKLTFHNIPLNHMAMTFZPQESMIDRKJSEOFSQGESOKZAUKAVCDVOLMHNTDMYIPFHF");
    msg.predicate.assign("LTGDPIBSLKEJBEORFLMSMSNVZETSXHREYDT");
    msg.attributes.assign("HUFBQUFXYVRZOZWZASSMBAKELWIYLHEGEKAZDGKVPFFBCLRAESWCEUNFMXMHUHXRVHTCSXXYTRQIUWHMBPXPNBZKUIGTGTVKAPVJDDABJ");

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
    msg.setTimeStamp(0.8118668886382533);
    msg.setSource(2318U);
    msg.setSourceEntity(145U);
    msg.setDestination(42611U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("SGIQFWEHECTHNZBGVTGOJANZKZUYQOLWUCNJPOKGJWRTARDDWODTHINCABKKKPJMPEKRXTIQVDB");
    msg.predicate.assign("XMAYMAWFELZLORWKPBJGHOIUUJTXYUZMQKRBVRHPDHXFOBHOPTMPVKPRADZTGUIOVNAXUOOIIVMPHWTYCTHRV");
    msg.attributes.assign("BKSNEJXBFSAOJCLJYXXOZTEXSPZNYEDXCEZSVAVHLZFLOHAT");

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
    msg.setTimeStamp(0.7832096446186637);
    msg.setSource(54824U);
    msg.setSourceEntity(6U);
    msg.setDestination(15320U);
    msg.setDestinationEntity(74U);
    msg.command = 133U;
    msg.goal_id.assign("JIKGZMXLSFZSCHDVSOIVBSWBBHZEAKYHJROZTHIXBSHXZSDPJORWIWDLEQBWQUQCOFCRGGSDFEBROAWERQJQQNYIVXWNUMTJMVISBLNRYOCBPJEVVHVDLSYKXHLERPPEFPNNAVDTYSQNAIDYTGNAFCQFPTXXXEAUMIMGLJPVMGUCTXGJ");
    msg.goal_xml.assign("EJZIIPDAZSCHJMFQVWMXVRSHANCAWHWFFSLKIEUMCNJXMXEOGPGYNYVYDREGJMEWJHSRXBIPMWEQLGYONFBXCHOETDMWLUEIOWQQUDSLUVXHBTTGSWYGZFVWKKCACBNZKCPNDRLFZQXOZIXLXBDYJTUWTTLEUBRGMTQNQHK");

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
    msg.setTimeStamp(0.6793760310197979);
    msg.setSource(8803U);
    msg.setSourceEntity(85U);
    msg.setDestination(62334U);
    msg.setDestinationEntity(38U);
    msg.command = 231U;
    msg.goal_id.assign("TSKDFJLAGVQORWRFBFCQIDZNTPTHGZRUDGXEMMHWIROPJVYDICBHXC");
    msg.goal_xml.assign("YWTLMKUWCVBXQQXFTJPBERBFHSPKCWYREKJDSGSITOPXLMZVEYDYSQYMCZXVTYNODGGZDBHHDZXSIWQOKZGMBPAFOIRVBAQJIUUHLHYKGUHGKPAIMOFZBNJNDEDQTAFVTEPCZOKUQUNFOWMKPHGXAVACQKEFFGLDDIAXNQKWYJRCSTDRSEWCZYNMRPTNPFSNCIRQHFBWJUVGTEZJHPLIHEVNV");

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
    msg.setTimeStamp(0.059826774511466674);
    msg.setSource(14394U);
    msg.setSourceEntity(128U);
    msg.setDestination(41675U);
    msg.setDestinationEntity(9U);
    msg.command = 46U;
    msg.goal_id.assign("YEFXDHQJGUOKRLGROYRJNAEELHRWWOVZXJUONUXXAYDYDMQPKVWCLABUDTLVICFPNXREULVOPZJKNYBNQQPLQSJJBQNYMLGNHMDROINKWTGOTNKAVZHVISCIXTXBWPDEDVIMXTHPUCIGLBHTRHFTUBGSCZDSIDCKOSZYWRUSLFOGPQMNFKCQAZAFBKOWZCWVQVQJKYMTYRRGIX");
    msg.goal_xml.assign("QXHAVSYSODEDCJGOGIQIQUYAHCGWGDCZNXSVCUMETIIDZSYBYCZWOMDPTBHPFIPJZKRNVIMANLUVZHZTYHEDGFLXFAVJBYWAXPEZEMHWROKOQTVXNUTKTEEXFKMLLOVJNUILF");

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
    msg.setTimeStamp(0.9543793331369911);
    msg.setSource(16396U);
    msg.setSourceEntity(162U);
    msg.setDestination(21141U);
    msg.setDestinationEntity(200U);
    msg.id = 99U;
    msg.width = 16461U;
    msg.height = 35297U;
    msg.widthstep = 15361U;
    msg.channels = 136U;
    msg.depth = 218U;
    msg.finaldata = 147U;
    const char tmp_msg_0[] = {75, 68, 85, -121, -2, -26, 93, 5, 22, -70, 0, 88, 79, 27, 104, -67, 49, -11, -39, 68, -74, -24, -110, 88, 59, 38, -17, -10, 54, -1, 28, -79, 5, 62, -23, 76, -49, 50, -16, -64, -79, -16, 112, -92, -89, 27, -39, 19, -88, 63, 125, 54, -110, 72, 83, 109, 64, -93, 37, 27, -83, -41, -69, -50, -4, 93, 123, 64, 59, 13, 46, 83, 3, -91, 44, -68, 54, 2, 13, -43, 15, -50, -40, -82, -96, -100, 93, -68, 89, -19, -57, -34, 44, 74, 83, 63, -14, -1, 95, 25, -72, -104, 39, 101, -50, -7, -123, -29, -35, -4, 107, 100, 58, -61, 6, -94, 114, -105, -4, -34, -44, 89, 50, 50, -79, -3, 81, -90, 91, 22, 80, -124, -119, 46, 102, -74, 4, 68, 61, 120, 76, -81, -15, 77, 23, 112, -58, 26, -56, -35, -62, 69, 103, 85, 57, 93, 9, 43, -67, -95, -95, -83, 43, -123, 115, -44, -66, -77};
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
    msg.setTimeStamp(0.02325451578621196);
    msg.setSource(20665U);
    msg.setSourceEntity(245U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(119U);
    msg.id = 111U;
    msg.width = 55643U;
    msg.height = 44581U;
    msg.widthstep = 47392U;
    msg.channels = 73U;
    msg.depth = 20U;
    msg.finaldata = 28U;
    const char tmp_msg_0[] = {108, 123, -55, -65, 5, -103, 55, -22, -84, -118, -93, -108, 1, -108, -80, -23, 24, 29, 104, -116, 25, -32, -104, -46, -77, -44, -7, -45, 37, -17, -105, 34, -12, -34, -55, -72, 113, -29, -107, 7, -4, 29, -45, 113, 2, -62, 17, 108, -116, 49, 71, -1, -118, -17, -51, -68, 59, 22, 90, -50, -11, 79, 8, 70, 15, -43, -125, 104, -103, 35, -29, 17, -59, -27, 91, 126, -18, 66, -20, -22, 110, -106, 106, -40, -111, -12, -113, 78, -125, -71, 126, 97, -69, 82, 40, 109, 119, 33, -48, 26, 48, 100, -61, 92, -7, 86, -2, 116, 80, 64, 117, -41, -56, 48, 104, 99, -31, -86, -48, 80, 4, -110, -30, -126, 45, -90, 96, -66, 56, -83, -71, -112, 2, 105, -5, 120, 89, -30, -96};
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
    msg.setTimeStamp(0.6551581263667595);
    msg.setSource(36284U);
    msg.setSourceEntity(135U);
    msg.setDestination(57618U);
    msg.setDestinationEntity(217U);
    msg.id = 105U;
    msg.width = 3197U;
    msg.height = 59715U;
    msg.widthstep = 51734U;
    msg.channels = 180U;
    msg.depth = 130U;
    msg.finaldata = 139U;
    const char tmp_msg_0[] = {-125, 110, 78, -18, -120, 79, 86, 31, 25, -124, 48, 6, 57, -56, 9, 97, 73, 32, 27, 86, 47, -114, 101, -39, 26, 107, 85, 100, 24, 117, 49, 63, 76, 85, 82, -95, -61, -9, -26, -74, 105, 24, -43, -80, 90, -99, 31, -29, 73, 49, -100, 13, 27, -13, -121, 52, -107, 50, 116, -18, 0, -86, 65, -3, -21, 52, -49, 31, -105, 70, -65, 123, -112, -111, -94, 14, -88, 63, 50, -71, -111, 7, -26, -43, 40, 20, 50, -65, 101, 95, -30, -13, 73, 51, 84, -40, -94, 90, -1, 5, 75, 51, 28, 35, 86, -64, 61, -107, 126, -21, 103, -82, 1, 81, 19, -102, 115, 121, 73, -7, -127, -97, -46, 97, 115, -64, 103, 36, -69, 54, -97, 7, -24, 34, -21, 63, -80, 104, -1, -111, -48, 28, 31, -105, -116, 123, -12, 10, -99, -69, 24, -66, -105, 84, -14, 122, -55, -55, -80, -50, -23, 84, 78, -25, 113, 45, -112, -105, -112, 121, -14, 74, -58, 55, -82, 93, 95, 66, -65, -96, -92, 83, -91, 76, 81, -43, 113, -20, -24, 97, -7, -128, 16, -37, 97, -96, 70, -59, 25, 120, 104, -123, 22, -122, -112, -118, 123, 84, 83, -101};
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
    msg.setTimeStamp(0.7839040588045967);
    msg.setSource(18401U);
    msg.setSourceEntity(63U);
    msg.setDestination(24567U);
    msg.setDestinationEntity(42U);
    msg.width = 4988U;
    msg.height = 41501U;
    msg.channels = 179U;
    msg.depth = 176U;
    const char tmp_msg_0[] = {-9, -108, -107, 55, 111, -77, -39, 47, -79, -80, 63, -16, -41, 3, -21, -12, -111, -85, 54, 39, -28, -58, 76, 114, -106, -65, -72, -78, 61, 82, -102, -100, -84, -102, -55, -13, -16, -22, -7, -126, -17, 23, -3, -49, -97, 0, 10, 21, 120, -54, 23, -2, 69, -122, -43, -76, -120, 15, 45, -80, -101, -16, 30, 60, 41, -98, 89, 2, -31, 99, -111, 105, -85, 38, 116, -46, -82, 116, -22, 10, 38, 26, 93, 70, 61, -83, 48, 78, -64, 18, -84, 92, 40, -117, 39, 18, -9, 97, -114, 102, 119, -88, -8, 105, -126, -98, 27, 8, 13, 97, 10, 42, 96, 119, 111, 41, -68, -21, -61, -21, 115, 104, 3, 105, -49, 88, -66, 38, 119, -92, -42, -5, 7, -15, 118, 8, -127, -14, 4, 29, 20, -51, -38, 79, -49, 7, 38, -112, 72, -7, 50, -41, -10, -7, -27, -58, 0, -29, -77, -43, 56, -40, 42, 103, 30, 47, -26, 77, -106, -101, 78, -37, -92, -30, -84, -114, -31, -18, 96, -70, -84, -23, -108, -90, -19, 36, 39, -80, 36, 11, -12, 16, 96, -59, 118, 69, -106, -39, -71, 122, -36, 53, -21, 19, 49, -21, 44, -102, -104, 46, -67, -33, -83, 54, 67, -36, -10, -80, 75};
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
    msg.setTimeStamp(0.8220528392643202);
    msg.setSource(50656U);
    msg.setSourceEntity(108U);
    msg.setDestination(52852U);
    msg.setDestinationEntity(193U);
    msg.width = 64650U;
    msg.height = 23128U;
    msg.channels = 133U;
    msg.depth = 81U;
    const char tmp_msg_0[] = {60, 40, -101, -48, 76, 113, -115, 10, -18, 100, -17, 70, 122, -44, 47, 109, -30, 106, -42, 85, 79, -33, 125, -93, 52, 104, -106, -19, 116, 47, -55, -34, 27, 20, -66, -65, 62, 57, 36, -105, 68, -24, 0, 10, 94, -87, -37, 58, -6, -75, 86, 79, 112, 20, 85, -36, 10, -78, -24, 108, -39, -18, 19, -62, -68, -26, -99, 13, 87, 8, -124, -35, 48, 32, -26, 100, 1, 124, 58, 49, 54, -23, 41, 1, 61, 24, 44, 2, 54, 50, 45, -45, -5, -72, -29, 32, 43, -128, 118, -59, 47, -89, -50, -92, 114, 118, 11, 109, 21, -116, 111, 6, -40, -37, 16, 37, 77, 3, 4, 113, 120, -106, -71, -76, 94, 32, 69, -46, 91, -66, 14, -66, -22, -127, 8, -54, 24, -69, 88, 10, -11, -125, -99, 20, 54, 90, -51, 119, 13, 24, 25, -58, -116, -121, -71, -116, -81, -13, -66, -78, -73, 37, -31, -21, -29, -17, -26, 32, 123, -67, -17, -26, -72, 50, -67, -96, 13, 113, -35, 125, 52, 4, 37, -75, -83, 6, -110, 47, -91, 51, -66, 111, 95, 88, -13, 106, -93, -70, -3, 75, 51, -2, -19, -105, 38, 39, -60, -36, 43, 23, 124, 101, 29, -63, -110, 61, -76, -117, 58, 60, -77, -127, 122, 48, 17, 50, 87, 115, -7, 91, 24, 14, -12, -92, 126, 3, 122, -86, -99, 93, 76, 97, -11};
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
    msg.setTimeStamp(0.14302929633698291);
    msg.setSource(13U);
    msg.setSourceEntity(169U);
    msg.setDestination(19401U);
    msg.setDestinationEntity(95U);
    msg.width = 29785U;
    msg.height = 39251U;
    msg.channels = 87U;
    msg.depth = 202U;
    const char tmp_msg_0[] = {124, -45, -66, -66, -49, 66, 110, -90, 66, 15, 64, 53, -48, -116, -82, -94, 87, -93, 48, -20, 104, 44, -37, 53, 9, 27, -38, 53, 49, 100, 58, 22, 48, 75, 54};
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
    msg.setTimeStamp(0.8716467553291348);
    msg.setSource(9972U);
    msg.setSourceEntity(113U);
    msg.setDestination(2647U);
    msg.setDestinationEntity(3U);
    msg.frameid = 74U;
    const char tmp_msg_0[] = {-65, 53, 52, 51, -45, 31, 117, 50, -34, 124, 3, 37, -108, 101, 1, -64, 40, 59, -56, 60, 7, -82, 116, 75, 3, -25, 33, -83, 73, 18, 81, -49, 40, 79, 41, -120, 13, 115, 29, 25, -70, -8, -95, -112, 15, 9, -7, -94, -47, -15, 0, 15, 0, -123, -83, 7, 122, -54, -20, -70, 106, 57, 89, -61, 19, -43, 121, -24, -125, 115, -106, -50, -72, -91, -112, -51, 81, 64, 58, 104, 97};
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
    msg.setTimeStamp(0.6948054595787904);
    msg.setSource(34436U);
    msg.setSourceEntity(72U);
    msg.setDestination(39318U);
    msg.setDestinationEntity(10U);
    msg.frameid = 226U;
    const char tmp_msg_0[] = {-100, -66, -89, -75, -126, 10, -125, -124, 106, 42, -68, -17, 25, -35, -31, -86, -16, 87, -38, 38, -26, -83, -5, -88, -100, 103, -23, -108, -34, 33, -20, -82, -36, -120, -115, 83, -110, -44, 11, 19, 62, 105, -23, -9, 75, -25, 74, -18, -33, 69, -66, -53, 5, -32, -116, -85, 76, 97, 45, 34, 10, -97, 64, -112, 97, 52, 99, -108, 45, 112, 80, -86, 108, -28, 109, 27, -10, 18, -111, 38, 103, -2, -31, 74, 60, -105, 70, -91, -114, 25, -90, -74, -11, -19, 117, -83, 52, 35, -30, -120, 107, -88, -62, 106, -82, -79, -8, 18, -118, -79, 9, -75, -20, -56, -40, 113, -31, 5, -26, -28, 38, -51, 93, -53, -3, -8, -49, -32, -72, -96, 71, 81, -70, -10, 85, -117, -120, -12, 99, -51, 6, -115, 95, -61, -13, 74, -47, 113, -77, 47, 75, 4, -76, -108, -94, -111, -116, 113, 60};
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
    msg.setTimeStamp(0.6173688048174649);
    msg.setSource(4034U);
    msg.setSourceEntity(212U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(72U);
    msg.frameid = 209U;
    const char tmp_msg_0[] = {-25, 48, -66, 123, -75, -72, 112, -34, -114, 92, -52, 89, 109, -18, -59, -118, -126, -126, 111, 106, -50, 71, 97, 74, -63, -17, 80, 28, 19, 40, 96, -125, -64, -98, 105, 16, 8, -61, 44, -117, -44, -102, -94, 107, -90, -96, 12, -54, -9, 62, -76, 61, 9, 17, 10, -117, 81, -24, -115, 122, 20, -109, -113, -110, 44, -74, -81, -46, 47, -47, -17, 22, 16, 19, 57, -54, -31, 36, -23, 94, -47, 39, -59, 6, 108, 71, -98, 32, 67, -57, 106, -59, 108, -72, -74, 24, -95, 92, 21, 10, 103, -34, -92, 9, 103, 18, 100, 76, -10, 6, -112, -104, -61, -48, 99, 107, 76, 35, 27, -125, 60, -55, 84, 10, 95, 34, -5, -56, 123, 106, -126, -40, 22, 121, -7, 77, 78, 116, -77, -96, -97, -86, 6, -122, 14, -47, 96, -121, 11, -67, 106, 33, -114, 80, 81, 81, -113, -15, -87, 102, 39, 83, -74, 30, -28, 39, 81, -85, -112, -103, -56, 4, 56, 97, 23, 76, -25, 62, -89};
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
    msg.setTimeStamp(0.4805549845303141);
    msg.setSource(1820U);
    msg.setSourceEntity(200U);
    msg.setDestination(25237U);
    msg.setDestinationEntity(60U);
    msg.fps = 214U;
    msg.quality = 75U;
    msg.reps = 104U;
    msg.tsize = 40U;

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
    msg.setTimeStamp(0.6000997249436524);
    msg.setSource(29141U);
    msg.setSourceEntity(224U);
    msg.setDestination(34889U);
    msg.setDestinationEntity(9U);
    msg.fps = 123U;
    msg.quality = 232U;
    msg.reps = 35U;
    msg.tsize = 250U;

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
    msg.setTimeStamp(0.712456045809259);
    msg.setSource(62138U);
    msg.setSourceEntity(222U);
    msg.setDestination(39151U);
    msg.setDestinationEntity(195U);
    msg.fps = 123U;
    msg.quality = 8U;
    msg.reps = 36U;
    msg.tsize = 196U;

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
    msg.setTimeStamp(0.5313790856920679);
    msg.setSource(39071U);
    msg.setSourceEntity(112U);
    msg.setDestination(27121U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.4692522258210844;
    msg.lon = 0.4579532384212469;
    msg.depth = 228U;
    msg.speed = 0.6789528942030679;
    msg.psi = 0.2972444033284306;

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
    msg.setTimeStamp(0.615952033509509);
    msg.setSource(15616U);
    msg.setSourceEntity(152U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.05923570173310477;
    msg.lon = 0.04181737322001566;
    msg.depth = 1U;
    msg.speed = 0.27914995626444894;
    msg.psi = 0.11763033912021881;

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
    msg.setTimeStamp(0.5681304693351967);
    msg.setSource(62626U);
    msg.setSourceEntity(46U);
    msg.setDestination(51110U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.15482365573199885;
    msg.lon = 0.5136133423651853;
    msg.depth = 218U;
    msg.speed = 0.5908165242815361;
    msg.psi = 0.04871149070807357;

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
    msg.setTimeStamp(0.9988930165903211);
    msg.setSource(32807U);
    msg.setSourceEntity(234U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(168U);
    msg.label.assign("WSFCVPTTBOZIHCVRJEMCQGCVOVSGJNSZKZPMCZVULJBRXRJNHPZEFKFMOFDWRLXPHDRBBWUIXYRMCOHESBNPAMAVGLIXTFLWVNYXIITXWYUEQKKORCTFYDAHZWFKYONUQNBZEFKARJGQENUDMLAWTPDOJLGPYISIMLJSLUSOBAZE");
    msg.lat = 0.895422893059278;
    msg.lon = 0.1485343614972089;
    msg.z = 0.05067043747280742;
    msg.z_units = 173U;
    msg.cog = 0.4081490659349045;
    msg.sog = 0.01881015429527788;

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
    msg.setTimeStamp(0.9094079528497734);
    msg.setSource(53479U);
    msg.setSourceEntity(214U);
    msg.setDestination(19134U);
    msg.setDestinationEntity(108U);
    msg.label.assign("OPCXRMWRVWHXKHWIWYPFUZVPGJCBQVEIXJQHXFHYNYJRLHEJLWARDBATEKGNONHLRECRAOQSKDBXJLJTFCSCTNZAETNSAGJO");
    msg.lat = 0.10917382155809807;
    msg.lon = 0.8233596521471169;
    msg.z = 0.3622931441910795;
    msg.z_units = 118U;
    msg.cog = 0.31063297429253844;
    msg.sog = 0.32748663693923863;

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
    msg.setTimeStamp(0.3111350168753825);
    msg.setSource(11936U);
    msg.setSourceEntity(228U);
    msg.setDestination(18225U);
    msg.setDestinationEntity(124U);
    msg.label.assign("EJDNEYCYCAJGSWAATWCDQQDZBKLUGRLSCOIDVHJANBZQFTNXSRHUVJDKHDXZTCBMEGODUZBFRSPVRIJJGILHIOMFZOKOTLOFSYLSUZVGXEAWLIKI");
    msg.lat = 0.3516049381207139;
    msg.lon = 0.8641003797384182;
    msg.z = 0.61870497558598;
    msg.z_units = 212U;
    msg.cog = 0.3538475763993172;
    msg.sog = 0.2785789431916851;

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
    msg.setTimeStamp(0.598691517797039);
    msg.setSource(30250U);
    msg.setSourceEntity(76U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(27U);
    msg.name.assign("HPLTBGTWUVXZCYOQCJHQMRPBKKQOVLVHFKIFDNCFIEMJVDSBIMJCJYZHYHDBYEYUMJNJONWILKBBWFCZDDCUGRDZAFJQUIRXQM");
    msg.value.assign("WOMWHPGNDBMBFMKLFAGCGBKUEMRCHYYHSRXLWCAOUJFXEXOOATDUAKJCEEGSWTECXAAYZBNYOFYOSKJPIWWKMHGCVSUIXQRJGSGNCBJFQFHLZIDFAXYQIDEHRTABVDDJYAUNOPSOVBEXTQKYFDCZBHRRZXLLQGQPLTE");

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
    msg.setTimeStamp(0.7632744689260607);
    msg.setSource(30246U);
    msg.setSourceEntity(194U);
    msg.setDestination(59379U);
    msg.setDestinationEntity(220U);
    msg.name.assign("SZURXDUAOGHTZBNLKYHNXTQSOKYGXPQBZJBIUQOUKKFEFRCVJLBBANZGTUCAJLTVBIXWPMTYQXLZVWG");
    msg.value.assign("QZKSXQBEUMWAYGDPHDRFWZYOTWEECCPIYUWAXZJLUCVLHFPXOIEWNYGAQKYRHBSZPSYLBQJMSTCFNSJKKUGAJTFZOHYNKFHRIXZLUPNDCGFQQPWPOZBSMEGIFFJDGGQKRTIGVNVJ");

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
    msg.setTimeStamp(0.8192263101754835);
    msg.setSource(56649U);
    msg.setSourceEntity(1U);
    msg.setDestination(45567U);
    msg.setDestinationEntity(83U);
    msg.name.assign("OIGHCFSGMFBPEMFVNYTUNMXQOKCNQCSUQPDRVEJZDMZEIIRIBJHCAGEQZSKRJWGXYPASLUWJKPFDPZUFTQBUXYFITTNIXMVEWDAMRTJSSNNDNEMTWHOMWXYDZAWHKLROIVLWOKRDPELLKCNFSPKYGLFOADHEUGRRYSKLEKBJUAQVVXGCYZOGGWXWLCBZYCBDI");
    msg.value.assign("PWXBFYOIONAHKMBHNTGFDGHJVNTOZLMORIVRSOBULTYOYYOFNPYHTQODREHLNJHOHZGSEFSFCDFYEAZFHXWZWMGMCXCRJDVVQCNPLUAXGZRXKPREDMTSXKLEJUKUQLUSVZLELWPVAMCJMMBWUUVAIGJNHIEFTMICQKFJACRYKWZUVSZSTXJAFXVIDQYGNAYQGNAHUPDXIPQWKDJBGBAPPEOLXCQMRQEIWTIQBZBBWBTSDKEKTGZJNRSYLUCR");

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
    msg.setTimeStamp(0.9476426473385279);
    msg.setSource(16706U);
    msg.setSourceEntity(54U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(41U);
    msg.name.assign("NLJAOTECHXPNJYDYIZMSMSQUSEFYLJPWZLHFQBLQLGDFTAKPKPSAXRIQHKZEOTPAUVJZRAWAWJWTWNZCBDXUEGBYUAFXRVFERXMNWZVMWUQPBRCXZIXOEKVBKMYLXSVFKTRALYISJCFDIIUTFOVIDVQXBRMTORQJEVGOZUCJCDFGQQSHXQTBKMZEDSRDKGAKOOHKSHLDBUHCPGGJLNGVEWNYLYPDCMPHBGHZSVIMOI");

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
    msg.setTimeStamp(0.019069529321645073);
    msg.setSource(16785U);
    msg.setSourceEntity(196U);
    msg.setDestination(22778U);
    msg.setDestinationEntity(106U);
    msg.name.assign("JUNLKOSCAIXNKSWBKELDSZHOMDZVUPJPPTUMORGZGYKWNVZXMFWZJCYBIHSSQJOKUBTDQQIHLRRFMOPOQCSWHYZPJYRWHYTNLVBTQSCNWVCICVZFENMLDHWCMAARTBGRQKIRVPAFVEUGJTNXBFGFKRLJMETKNETNPPGQWQJJISSYXUJPHPLDFBFQXKDSACTU");

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
    msg.setTimeStamp(0.5629888242252882);
    msg.setSource(38193U);
    msg.setSourceEntity(42U);
    msg.setDestination(61305U);
    msg.setDestinationEntity(152U);
    msg.name.assign("WSNSVDDZBCWFPYWHHPRPFEBSUIQGPVKDRYACNMSNEQXAAKAHMTZKXZHWBJYQKTAWQVURCFAZJKLZMQOOHWKRNDYVHGUOKBNHNFQMOJMKTOY");

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
    msg.setTimeStamp(0.7523287550753388);
    msg.setSource(40394U);
    msg.setSourceEntity(236U);
    msg.setDestination(4330U);
    msg.setDestinationEntity(172U);
    msg.name.assign("QPIPNCXXNRIEPIWJXRSOGLMNVVVBLKHEDNZXBDBXQEKWPWHODXBJXQDLCOQLFKHIGGKTCFEQUZOGIMJINLROMANSKKGEYTHEZZPORVSVTVQYTQVWUHHZCLFMBBRPYAKMGXTU");
    msg.visibility.assign("VWUTUJZDASGZUVIFISVAISLXDSCAMUJTIODTNUGNWMVXWWRFBKGILLJGNLYPTJHMRCRXGCIGKSEOBDBKBQRCHQRNHUNCENOWCYJOHEKJYZAVQYGARXTQEUMBHCMLDSIEFKYTWCQNVXTXZXBZGBMJYAZUBZMHMXPTFEDWDYNMZODLZFWVIFQHTFSAJRJQFFRYSNVAKZGOLHYIADKSQWLFEROBXOWKMD");
    msg.scope.assign("NCKKSIBIKKRWRHXNCJCEXCQWWYLFYIIRYPRBSJVEMXVFEOUSOCLDGEYYPXVGVRKCZYYDTM");

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
    msg.setTimeStamp(0.5066735642039712);
    msg.setSource(43111U);
    msg.setSourceEntity(92U);
    msg.setDestination(23337U);
    msg.setDestinationEntity(229U);
    msg.name.assign("CUVXSOSMREWDIDGQENNLAANMMSNSUFKIZVOEJHTTUTCSUQNONNLWZVFXBTPWOZCPUUHOPABLWCJRDXTLQXGXWAPDKKSIQIOFHKPWABVVAYHVIWGHJNLZGMQCJTJGEGDAOMRCFRLTQ");
    msg.visibility.assign("VAZWRTFAHXMVHIEQVBCXDHREYFUKZWZW");
    msg.scope.assign("GDWGSMKTNYRGDQHEMRBSZPLMBSPYQPZVPXDIHTIOUKIMGWDHMABKHFCBCMXDUKFZCHLOSJTZKOXRGOXACMWUAUVQXFGVGAFPIFLJZZZJQNLKGFRSTQRYHWXWVLVONUPBRPVNQUGIIMLPIYXBRFWLYTOKVXZBAJY");

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
    msg.setTimeStamp(0.1345890410883538);
    msg.setSource(3436U);
    msg.setSourceEntity(2U);
    msg.setDestination(35500U);
    msg.setDestinationEntity(185U);
    msg.name.assign("QYTOAKKIIESEJVQURKUXPEZRDHQBRHOFIAGYRHMKNZEELLVFCRCTLYHMBWXIFASOEJAWTJGTTEYKXPDZDIOYCJAWGHZXVPHGAMQIKHDJHTVXPALFBFYZZAJRFKEZOXZAQLPRYUXHFMJMGBBMECMDJSIBUPBCXVSILSKCZCFKKDVUJTGIRTSCMLVPQDWWVXGDQPSFAQXWJGTODUODNSNISNNNENSFUUOWNUNPRYWWM");
    msg.visibility.assign("DOWAYPGNXAHCDLTJSOWHQGLNHSRIIDLMDLKSEBXKSQBSPEPDYTUOEHEGENTJIRRWRGYVCXDIMKOAQSXKBSZJUYUAXQWLUUTQTKUFVOABVFKVZGJEWFYEGNDRCQCWOIUPGDMTFZBLVBFRRMZVJRZGQOJMPBYVZIMWNCMMCPSEYFHEFRBNCKNTLGINHZZJTPFQXUNQDFLMLYTTWHHZGWVXIPAKAQLCIXHXVBONICPSJXORAEPDYJ");
    msg.scope.assign("DPFJZZUQASYPBDUVWEJZWQGTPYKLTKQAMWSW");

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
    msg.setTimeStamp(0.678916106727389);
    msg.setSource(4076U);
    msg.setSourceEntity(150U);
    msg.setDestination(42928U);
    msg.setDestinationEntity(12U);
    msg.name.assign("UQOQELZFJGBIVDTVFCETVQGZCDQHMGPKVKSYXSRIGYHLIJJODNLAALKULCVRRWMIWUNFFDSJMXNPZIPCQRBJC");

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
    msg.setTimeStamp(0.018769764687787904);
    msg.setSource(59293U);
    msg.setSourceEntity(40U);
    msg.setDestination(42230U);
    msg.setDestinationEntity(185U);
    msg.name.assign("JZNSSIGAAYKRFNNNYBRDQHYIBUHZWFCDQIPPTJYZZHPMCPFLWYQEPJHVMXXEIFAITSKWVUHSAFQRPTVNSALVBTVEOWDDREGWRCXNCGYNBXAVQQNBLQJVXQGGOUIENWMOFOIPWODMSKUREMGZQFVBRLYCLYMMZRVCTGBKWSFDMXSDAUCXNPTIGTCIKUAOLHWLBRBTOSTYZBIKGUCOPUHVJZRZYXMXOKJJGADJLHHEATUELXJUQSKLCMFDPJE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AWDSTOLIVFRLIPIHBQZLPZCKWXVUJOCXCLSIFQRVLVJNDQNAZBAFVPQBVMSTXHJDMHLYYZFBFEAVDWZCEZPITKFKCDOANYINAXTNPNRWEABTCXPJCGSQMPQUWMIJGUSKYFKPWHGDYDEKKBRISJAIXJOBOHJXWLRZYYPQQWYDOMRDQJLMDUMGNUOLSKEYXXFUJCCUSKTZEBHTQ");
    tmp_msg_0.value.assign("WLTNIOGTFJVHOXSINRQXCKUVQQECARMCFVOFNDUTWZNGXITMJEKXPLOGHOVKMAMWYQRGWUEHHDPJBYYOCDIJDBCFRAKLSRRAEXYJPMPDLPEPXCOCZQKSZTZELUFCMQBDABKBEGDDMINWKPZZUVBWRNFODQLBYRFZVSCKALZIRAOIBTHMKHWVPFQVXEYITJFTSYQHBYNVNGUSBTPFJLDUWAGYHJWAGSJUSARJXCMIKHPGVZSXUW");
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
    msg.setTimeStamp(0.12330355962966377);
    msg.setSource(52030U);
    msg.setSourceEntity(209U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(111U);
    msg.name.assign("ICPFDEETUVBMOYUQGJOUCYSRHEWRUYSYWZC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UIVLKNQGPJAZYESGTCZZHKMUUGWHMVVPNSWPPATUHEZOAFTDGMFDTON");
    tmp_msg_0.value.assign("ATJELBKRVGSTGZHCOPRJIABMPERNWVJRRSIUHUHFTNWYOSOOPFBPLBKELGYKKLNABYHDQYBXNWXIZMTWJZTNYFZCIOIMWZROJSSYXHPVFXJ");
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
    msg.setTimeStamp(0.5480979512276426);
    msg.setSource(46663U);
    msg.setSourceEntity(115U);
    msg.setDestination(64408U);
    msg.setDestinationEntity(89U);
    msg.name.assign("GYTGWMTYSGPNWQQIMIRCXQYFENCSZLLM");

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
    msg.setTimeStamp(0.2917903645531783);
    msg.setSource(21426U);
    msg.setSourceEntity(238U);
    msg.setDestination(58915U);
    msg.setDestinationEntity(153U);
    msg.name.assign("ZSLDCTWRJQPAXCLBMEEGMLBUNFTGDYXWHUWNFYMLVWHNTKNVOHNGSDVPJZSFDFSILQFPWXGIKJSQKOEETVYTVOCWDRYYZAFCUHKKXIXHZODRPJGQEFAGQWOKQATANUXKDBUSJOXCGVAHKZZBYQHLAGVLPLMZLPTUJRCCNBOJWPRJGUMYIVVAVKCXBIFATRITROZM");

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
    msg.setTimeStamp(0.24201281053357115);
    msg.setSource(32305U);
    msg.setSourceEntity(32U);
    msg.setDestination(61054U);
    msg.setDestinationEntity(164U);
    msg.name.assign("CBBPCSOZGZXUQLWDGCZMUOBKTDHTDDCOOYMRADTSNLVRGSWLTPJLKJZOOCXYPMNQYBHVHUNKPRYOGLFJLRBVASDXRIKVRQBAXYEKUABIIEAHLTAEXRYQFPXIDXJMNFVJUWTHJFNJBCMJTMHAZRFZLIQSGFNYTXAGNFWV");

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
    msg.setTimeStamp(0.6414821371207704);
    msg.setSource(23556U);
    msg.setSourceEntity(31U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(91U);
    msg.timeout = 95822548U;

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
    msg.setTimeStamp(0.15608774997960273);
    msg.setSource(52396U);
    msg.setSourceEntity(97U);
    msg.setDestination(23331U);
    msg.setDestinationEntity(132U);
    msg.timeout = 1378636663U;

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
    msg.setTimeStamp(0.8175092348279248);
    msg.setSource(51869U);
    msg.setSourceEntity(245U);
    msg.setDestination(42391U);
    msg.setDestinationEntity(125U);
    msg.timeout = 224412890U;

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
    msg.setTimeStamp(0.31043830997870003);
    msg.setSource(29847U);
    msg.setSourceEntity(190U);
    msg.setDestination(132U);
    msg.setDestinationEntity(131U);
    msg.sessid = 2165090094U;

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
    msg.setTimeStamp(0.25826420383380344);
    msg.setSource(43936U);
    msg.setSourceEntity(252U);
    msg.setDestination(55014U);
    msg.setDestinationEntity(55U);
    msg.sessid = 973923438U;

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
    msg.setTimeStamp(0.2074674990493809);
    msg.setSource(27577U);
    msg.setSourceEntity(34U);
    msg.setDestination(36984U);
    msg.setDestinationEntity(119U);
    msg.sessid = 1448273806U;

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
    msg.setTimeStamp(0.4097308174507792);
    msg.setSource(14432U);
    msg.setSourceEntity(238U);
    msg.setDestination(15334U);
    msg.setDestinationEntity(110U);
    msg.sessid = 2431013824U;
    msg.messages.assign("RWMNNMNCDVKAFRMKICRMZQFJKEGXXGGSSKBHQETCQVRKBUPMBIVOQFOBZLCNFPEXBWAQSZHTJHQQTWKFIFJASYCNYAHZISCPGJFIFKERTWYQHIIJZIVDALPCTIXGHTKXMRKYSSERNVHYFUTMJYPHUOUYRVYNPYFITAJ");

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
    msg.setTimeStamp(0.6900496552444663);
    msg.setSource(20400U);
    msg.setSourceEntity(214U);
    msg.setDestination(24416U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1258572305U;
    msg.messages.assign("DDTOTMCBPIJZOJGOEMDZSYQYUQPKQPOKRRCCJKIFCKCPTJNRUOWVPJLXQCHMVVHDDRNYESGFGSNLJAFULTTMENLYOBPTBEDLHYKMVNRDCNMECZFBBESWGMMTIUMIROALDUTQAPHGGAHZNRRDBTBYJZXLUXXHVEFFGKDI");

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
    msg.setTimeStamp(0.833543009972911);
    msg.setSource(60863U);
    msg.setSourceEntity(81U);
    msg.setDestination(13618U);
    msg.setDestinationEntity(135U);
    msg.sessid = 1116736973U;
    msg.messages.assign("QHPUMMVYTWDYCUAOBCSWSMX");

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
    msg.setTimeStamp(0.31216218664595763);
    msg.setSource(43299U);
    msg.setSourceEntity(4U);
    msg.setDestination(12305U);
    msg.setDestinationEntity(143U);
    msg.sessid = 1048990664U;

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
    msg.setTimeStamp(0.8279089741549005);
    msg.setSource(15891U);
    msg.setSourceEntity(211U);
    msg.setDestination(6051U);
    msg.setDestinationEntity(87U);
    msg.sessid = 2896192645U;

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
    msg.setTimeStamp(0.668796525139116);
    msg.setSource(45102U);
    msg.setSourceEntity(43U);
    msg.setDestination(28937U);
    msg.setDestinationEntity(251U);
    msg.sessid = 1629654819U;

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
    msg.setTimeStamp(0.3200311649058857);
    msg.setSource(59708U);
    msg.setSourceEntity(98U);
    msg.setDestination(48676U);
    msg.setDestinationEntity(77U);
    msg.sessid = 3585308295U;
    msg.status = 245U;

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
    msg.setTimeStamp(0.035618998268052926);
    msg.setSource(13872U);
    msg.setSourceEntity(156U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(18U);
    msg.sessid = 1219907574U;
    msg.status = 74U;

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
    msg.setTimeStamp(0.22222935500597552);
    msg.setSource(4332U);
    msg.setSourceEntity(76U);
    msg.setDestination(41353U);
    msg.setDestinationEntity(218U);
    msg.sessid = 1345017899U;
    msg.status = 174U;

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

  return test.getReturnValue();
}
