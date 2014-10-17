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
// IMC XML MD5: 5b5c5af1e3ff987b5a799ccc51cc51ea                            *
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
    msg.setTimeStamp(0.963174215128);
    msg.setSource(10757U);
    msg.setSourceEntity(112U);
    msg.setDestination(18953U);
    msg.setDestinationEntity(233U);
    msg.state = 230U;
    msg.flags = 235U;
    msg.description.assign("JPZUBNDFJUFWRUDQJUBGETHTOLFZBCMAWAADIPOPIVLGFQPYQGZWANGXOTQVMHNAXGZYFMENHQUXLLWAYQHXFGECGSLIJZELXPDFRVZYBCVBIKRRFAFDKSSFKVYJGJUYTBKMEBWQYQJNKNQBPNSXZODROMHRXUKVLRCVSTHEKDPWOYCUARYNKVCESTNQCHUWMUZIDXBSW");

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
    msg.setTimeStamp(0.926227859815);
    msg.setSource(5788U);
    msg.setSourceEntity(4U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(189U);
    msg.state = 58U;
    msg.flags = 170U;
    msg.description.assign("WWMROXYSJIAJUXJXJVNZZLDYAKTZPDZNUMJEZZEXQOXHGXKCZGVXEFLTDATLHUBBGJXMIFRHWAPFANCOYKXEOISHSBILFORNTRYHKZOFVPGJIGDSUNVFVBWBSPLIGOTQLCPDNGVKWCZLZCULCEMHDWAUEMCKENTAKUMVIRPUWWOPDTNEDHRASKFUAY");

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
    msg.setTimeStamp(0.765855576618);
    msg.setSource(29739U);
    msg.setSourceEntity(80U);
    msg.setDestination(55022U);
    msg.setDestinationEntity(220U);
    msg.state = 76U;
    msg.flags = 64U;
    msg.description.assign("VACKEZLUKKQZMK");

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
    msg.setTimeStamp(0.642053468459);
    msg.setSource(22492U);
    msg.setSourceEntity(117U);
    msg.setDestination(54450U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.273743939097);
    msg.setSource(56564U);
    msg.setSourceEntity(217U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.460434697332);
    msg.setSource(58129U);
    msg.setSourceEntity(173U);
    msg.setDestination(35009U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.0546570444546);
    msg.setSource(56003U);
    msg.setSourceEntity(230U);
    msg.setDestination(13057U);
    msg.setDestinationEntity(181U);
    msg.id = 76U;
    msg.label.assign("FMLIBQOODEUIGTGSCODHLLQWFTENZPNHKKUJMWXAICKRQZHOKXPFJVJRCPWVZHSVMKBOJXZABAWNOAEARRFSQLYWIRSXMCCEFIZZTBOUKNLSLNGYGSKAEYYCOYHJJVCFVQNQBTNHUMGKDMLOYMUVQLPLWIXFMIWAVWKETCDPRXSGBQARLIAXDDEMXDMXPIGZZDH");
    msg.component.assign("VPGHPZFJDSAWOHRAHLNALBNLZEIEBBYTZMQZCXAYFTUTEPAFRGVFVHEHSKFUXUTBJQDVBRGLZJQWTMCSPBFVFDNDRYOWCWJAZYEUESOZQOIEJPIRLLKOWPZIXOAQVBYGUQCVTBXRJYXWPBVQLMSTSIGGIKQXNIWNCIRPEKVYKKAAMSGINOKZUMUJSRXKYNOIBTDPDDRCFLQCECYOSJTAMHGKXWCHJUDSCKFUZLXDPNHMRVXJHGWFHGTELOWM");
    msg.act_time = 21443U;
    msg.deact_time = 8358U;

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
    msg.setTimeStamp(0.694667421593);
    msg.setSource(25010U);
    msg.setSourceEntity(219U);
    msg.setDestination(50022U);
    msg.setDestinationEntity(135U);
    msg.id = 34U;
    msg.label.assign("EYHKRNYTQSRZUCXAUBRPSEIRTUZWZQLXVPYUQKJMHOOWWMWLMINYADJWZUCOFKDNYLHULKCGJEBSFPATAPYVV");
    msg.component.assign("DAYEKCEQLWWANBDSSWDHUXR");
    msg.act_time = 44286U;
    msg.deact_time = 16256U;

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
    msg.setTimeStamp(0.260906276543);
    msg.setSource(34387U);
    msg.setSourceEntity(157U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(184U);
    msg.id = 242U;
    msg.label.assign("IZRAFTEADARBJFHYGVPIFKFQNEYKOOTPZYHXXHEOQJTUXWNPHNZKNDLIXGLTELDMYWFWRSKLJBRFGLGMIEPLUEFKYAJGWRWSWVRBQEAYHJRQXOYTXNBVMZVCTZAIEOGYIFPDFJGCKPTBHQTHUICKWLYRMIWUCOMPVHCDJZQSGMZIXD");
    msg.component.assign("UXEYQNQYNAKGEONPECRJJAEKIMIVFHHFVSDLBAKOYTGFTMDMMJKMIULXJVWGBWYTSPZSALQCIXDLSNACAXGVPTXMIOSYRLKOV");
    msg.act_time = 23491U;
    msg.deact_time = 22002U;

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
    msg.setTimeStamp(0.752225256523);
    msg.setSource(15621U);
    msg.setSourceEntity(219U);
    msg.setDestination(4677U);
    msg.setDestinationEntity(188U);
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
    msg.setTimeStamp(0.435687110048);
    msg.setSource(19144U);
    msg.setSourceEntity(243U);
    msg.setDestination(8431U);
    msg.setDestinationEntity(142U);
    msg.id = 223U;

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
    msg.setTimeStamp(0.239438218335);
    msg.setSource(377U);
    msg.setSourceEntity(246U);
    msg.setDestination(58545U);
    msg.setDestinationEntity(138U);
    msg.id = 7U;

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
    msg.setTimeStamp(0.937697320895);
    msg.setSource(14722U);
    msg.setSourceEntity(139U);
    msg.setDestination(44573U);
    msg.setDestinationEntity(183U);
    msg.op = 235U;
    msg.list.assign("LLVMXMPAAMQKYUBZZWCEUMRWLVDMBOZSJAOSGRESVSPBLFEZBMHVCGKOHRGVBFZKLFTHICQEHYVGGHOSDTDRQKMTXVUOETAXADWOWANNUWSLIHGJFUKNDEQJPZJFPWAFFDNWQUTIQKYXKUSTYBRSWBZXCCMKTQYYHIKWFEZNPXRJYPDXRECYHFINTLNAKJDUNM");

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
    msg.setTimeStamp(0.156917983457);
    msg.setSource(36142U);
    msg.setSourceEntity(74U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(29U);
    msg.op = 217U;
    msg.list.assign("IOXTXCHFJVREXMTXVIVFUEBXKLRSFGLWUCUMBIHYBPSTRXEYKIBOFTDHRYLOHDSLSYRTQGLQQPLAZMGNWRPFRSYRHJZVAGOTUDCKXTWCEIETCZGDINFUJHPCZTQWSJHP");

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
    msg.setTimeStamp(0.315670192684);
    msg.setSource(30208U);
    msg.setSourceEntity(120U);
    msg.setDestination(24770U);
    msg.setDestinationEntity(150U);
    msg.op = 17U;
    msg.list.assign("UXHCWPIMHTWFOCKJNQGYOJQCGNNDBFCUIRYANOTCEBULFYZNVFSBZZTNGOEEVPRNFBAXSIIRFKKTRWKGVHIBSXCAAODBBWLMZVPOXGKPUDHDIATZQEFLXSFWCAHOJHXSOWRBSQDJBEVTLZLIWSYPLRJGDGUNIYYTPKBUUMFQVDLXREGMXVSKAOKDHXRZQZQDVPTE");

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
    msg.setTimeStamp(0.0246334860977);
    msg.setSource(55746U);
    msg.setSourceEntity(236U);
    msg.setDestination(35663U);
    msg.setDestinationEntity(228U);
    msg.value = 142U;

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
    msg.setTimeStamp(0.00669634126745);
    msg.setSource(33374U);
    msg.setSourceEntity(74U);
    msg.setDestination(18161U);
    msg.setDestinationEntity(242U);
    msg.value = 235U;

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
    msg.setTimeStamp(0.0952867642601);
    msg.setSource(40523U);
    msg.setSourceEntity(174U);
    msg.setDestination(12425U);
    msg.setDestinationEntity(176U);
    msg.value = 70U;

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
    msg.setTimeStamp(0.367442019375);
    msg.setSource(54943U);
    msg.setSourceEntity(200U);
    msg.setDestination(22528U);
    msg.setDestinationEntity(13U);
    msg.consumer.assign("NDIZFDFQRIZAAYTJPMKSGUVHTACRDXGKBFBQXOVGMWSWSLZVLNWKXRXNLUCYNWQZYBKXVTVTCQYZOUPOLRIVFKTLHZOAHDROIJMTYTRAOMCBNEUOEVNSIUBFKYQZUEIGRWKUDUDFRAHSFOCYVLMEFAHYPJLNNWCHT");
    msg.message_id = 16649U;

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
    msg.setTimeStamp(0.79326019771);
    msg.setSource(53604U);
    msg.setSourceEntity(24U);
    msg.setDestination(52900U);
    msg.setDestinationEntity(110U);
    msg.consumer.assign("IVESKOHHOLQXGZZEDQTQMCMXVGGPGVKWWAQYRJORQRPJSUICODBWYHTLORUHD");
    msg.message_id = 15039U;

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
    msg.setTimeStamp(0.353389370744);
    msg.setSource(31816U);
    msg.setSourceEntity(51U);
    msg.setDestination(44354U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("AGNVTJWCRRMTWVSMZWADUTPIYQSSPVZHHBBRBQDMRWSLZKDLQANFGOENMUIELTKHDUKBRNKBVOFQTRBJFKWVMWLETYEMCHTZNHRIBWNYZSWHPDQUYCQJNKSLKQLCGIXCUPZAFQECFSEUNSVDPJHAPCWMFOMODIOZOLDYUKZFXJZIJHCYRSDJXYFDYLMCUIVINXCEOGBGKZGUWGABOHFNHEOKLP");
    msg.message_id = 28786U;

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
    msg.setTimeStamp(0.336596210148);
    msg.setSource(58889U);
    msg.setSourceEntity(199U);
    msg.setDestination(48156U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.72320540666);
    msg.setSource(8940U);
    msg.setSourceEntity(242U);
    msg.setDestination(16377U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.188292332462);
    msg.setSource(19282U);
    msg.setSourceEntity(194U);
    msg.setDestination(39042U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.320358187823);
    msg.setSource(51500U);
    msg.setSourceEntity(122U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(44U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.084720518078);
    msg.setSource(25162U);
    msg.setSourceEntity(244U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(211U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.408824435677);
    msg.setSource(45305U);
    msg.setSourceEntity(15U);
    msg.setDestination(64475U);
    msg.setDestinationEntity(6U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.901782611053);
    msg.setSource(44340U);
    msg.setSourceEntity(13U);
    msg.setDestination(20075U);
    msg.setDestinationEntity(246U);
    msg.total_steps = 237U;
    msg.step_number = 127U;
    msg.step.assign("ZUSVKJMREVQGIZCHWJVRPSOTUVFVFUUAJMPRCMYLSXZLNKDHHEDTFYZINQXZYXFTECKNAMSPORSBIKNTWHWJWONBBRWOGIZYNRQB");
    msg.flags = 130U;

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
    msg.setTimeStamp(0.66035536914);
    msg.setSource(59902U);
    msg.setSourceEntity(169U);
    msg.setDestination(15494U);
    msg.setDestinationEntity(158U);
    msg.total_steps = 143U;
    msg.step_number = 47U;
    msg.step.assign("FALCKTJCNHWVDOIVAJHULPZECEYNQULADKNMYGHXIUVSRAGEMDZLTAVIDPXCR");
    msg.flags = 208U;

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
    msg.setTimeStamp(0.89960894212);
    msg.setSource(55766U);
    msg.setSourceEntity(175U);
    msg.setDestination(14897U);
    msg.setDestinationEntity(224U);
    msg.total_steps = 220U;
    msg.step_number = 32U;
    msg.step.assign("JKOXLJFDZMVQAOYTWZGVMCNVDZPRYNIHFTDIECNVZSORJWUZGEB");
    msg.flags = 159U;

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
    msg.setTimeStamp(0.846071805851);
    msg.setSource(3896U);
    msg.setSourceEntity(122U);
    msg.setDestination(29880U);
    msg.setDestinationEntity(16U);
    msg.state = 144U;
    msg.error.assign("GZQMKOVMCXMDKXVHUQAJABGVBSGDYJQJETEFPOFWYLWOIGKIWLVIVLXCASZWASRPNLSNAHZKOMRYBCWTEFEBPVDDNXEQFYJBAZLINQDJGETVTONNRPCVCJBTFUMHJCUXFWPQUGIHWEZCVRDIYRDYLXMJRHVXLTUMLXPRYIQIBCPTTPZHKFWTDTZEUASUAJCJ");

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
    msg.setTimeStamp(0.865213274143);
    msg.setSource(20866U);
    msg.setSourceEntity(135U);
    msg.setDestination(6152U);
    msg.setDestinationEntity(168U);
    msg.state = 214U;
    msg.error.assign("VQLJAPWTDGWIVSPYVUEDXHGZVOIJXAWWYHKBQORXZRYCLXJEOGIIU");

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
    msg.setTimeStamp(0.906060970779);
    msg.setSource(1472U);
    msg.setSourceEntity(136U);
    msg.setDestination(51957U);
    msg.setDestinationEntity(168U);
    msg.state = 222U;
    msg.error.assign("TNDIMDSXTTXCTMWCYZSBMKYFTIZPCWKMJEKZGVLRKQEMBAHUOT");

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
    msg.setTimeStamp(0.273194349478);
    msg.setSource(35988U);
    msg.setSourceEntity(232U);
    msg.setDestination(3161U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.673101506698);
    msg.setSource(58784U);
    msg.setSourceEntity(136U);
    msg.setDestination(10213U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.186287423462);
    msg.setSource(13340U);
    msg.setSourceEntity(160U);
    msg.setDestination(29091U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.982035242023);
    msg.setSource(8837U);
    msg.setSourceEntity(5U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(250U);
    msg.op = 32U;
    msg.speed_min = 0.204466661784;
    msg.speed_max = 0.912214045952;
    msg.long_accel = 0.845509980118;
    msg.alt_max_msl = 0.485890743231;
    msg.dive_fraction_max = 0.883215215974;
    msg.climb_fraction_max = 0.111198920408;
    msg.bank_max = 0.5285087944;
    msg.p_max = 0.107407300022;
    msg.pitch_min = 0.565825074301;
    msg.pitch_max = 0.505593968563;
    msg.q_max = 0.446972136263;
    msg.g_min = 0.39868649041;
    msg.g_max = 0.73723384213;
    msg.g_lat_max = 0.748017820329;
    msg.rpm_min = 0.595385453204;
    msg.rpm_max = 0.249970097991;
    msg.rpm_rate_max = 0.575376713779;

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
    msg.setTimeStamp(0.0990417246089);
    msg.setSource(3275U);
    msg.setSourceEntity(183U);
    msg.setDestination(27732U);
    msg.setDestinationEntity(234U);
    msg.op = 207U;
    msg.speed_min = 0.0765518772834;
    msg.speed_max = 0.521497267632;
    msg.long_accel = 0.704189773948;
    msg.alt_max_msl = 0.590740435417;
    msg.dive_fraction_max = 0.507968304826;
    msg.climb_fraction_max = 0.959142462141;
    msg.bank_max = 0.414591594679;
    msg.p_max = 0.470773753547;
    msg.pitch_min = 0.722500280096;
    msg.pitch_max = 0.495965180932;
    msg.q_max = 0.356977239748;
    msg.g_min = 0.098703866746;
    msg.g_max = 0.127762389976;
    msg.g_lat_max = 0.371964776742;
    msg.rpm_min = 0.800635127221;
    msg.rpm_max = 0.0720219743729;
    msg.rpm_rate_max = 0.097722121141;

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
    msg.setTimeStamp(0.938003667242);
    msg.setSource(59148U);
    msg.setSourceEntity(130U);
    msg.setDestination(43311U);
    msg.setDestinationEntity(149U);
    msg.op = 162U;
    msg.speed_min = 0.503104567206;
    msg.speed_max = 0.386170825178;
    msg.long_accel = 0.040234337775;
    msg.alt_max_msl = 0.29574219271;
    msg.dive_fraction_max = 0.583314180311;
    msg.climb_fraction_max = 0.712621135924;
    msg.bank_max = 0.994914408426;
    msg.p_max = 0.650915953731;
    msg.pitch_min = 0.650388603059;
    msg.pitch_max = 0.132997834944;
    msg.q_max = 0.602716978889;
    msg.g_min = 0.0506258478333;
    msg.g_max = 0.587193305073;
    msg.g_lat_max = 0.0582912984963;
    msg.rpm_min = 0.31064215263;
    msg.rpm_max = 0.167449205252;
    msg.rpm_rate_max = 0.353988738927;

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
    msg.setTimeStamp(0.793626066649);
    msg.setSource(40498U);
    msg.setSourceEntity(53U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(52U);
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.252202320651;
    tmp_msg_0.y = 0.435595678433;
    tmp_msg_0.z = 0.793742228634;
    tmp_msg_0.t = 0.666694554845;
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
    msg.setTimeStamp(0.945645243705);
    msg.setSource(57986U);
    msg.setSourceEntity(120U);
    msg.setDestination(16063U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.651101314547);
    msg.setSource(20U);
    msg.setSourceEntity(220U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(154U);
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 102U;
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
    msg.setTimeStamp(0.255893168012);
    msg.setSource(805U);
    msg.setSourceEntity(175U);
    msg.setDestination(27158U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.790539275429;
    msg.lon = 0.1432109741;
    msg.height = 0.496363832557;
    msg.x = 0.537036797104;
    msg.y = 0.499741334114;
    msg.z = 0.204160861887;
    msg.phi = 0.200908091008;
    msg.theta = 0.982779168198;
    msg.psi = 0.518768350941;
    msg.u = 0.430849821024;
    msg.v = 0.953876279019;
    msg.w = 0.703936235484;
    msg.p = 0.930900717969;
    msg.q = 0.0160080402459;
    msg.r = 0.547960627993;
    msg.svx = 0.918518741004;
    msg.svy = 0.680616622809;
    msg.svz = 0.627088031826;

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
    msg.setTimeStamp(0.541241589432);
    msg.setSource(23877U);
    msg.setSourceEntity(106U);
    msg.setDestination(20492U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.42211203298;
    msg.lon = 0.588367478351;
    msg.height = 0.708673995946;
    msg.x = 0.856748941615;
    msg.y = 0.222646123332;
    msg.z = 0.56837502635;
    msg.phi = 0.823014096902;
    msg.theta = 0.5521408013;
    msg.psi = 0.786095950287;
    msg.u = 0.760727778005;
    msg.v = 0.730853076829;
    msg.w = 0.793283822231;
    msg.p = 0.45099416064;
    msg.q = 0.403531450191;
    msg.r = 0.866899150979;
    msg.svx = 0.23576053777;
    msg.svy = 0.257088217062;
    msg.svz = 0.88696926035;

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
    msg.setTimeStamp(0.239242792971);
    msg.setSource(8230U);
    msg.setSourceEntity(191U);
    msg.setDestination(401U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.163964932761;
    msg.lon = 0.072027578379;
    msg.height = 0.897487479408;
    msg.x = 0.396354569968;
    msg.y = 0.718075620996;
    msg.z = 0.153279554959;
    msg.phi = 0.395262042662;
    msg.theta = 0.0364826582311;
    msg.psi = 0.336375234474;
    msg.u = 0.502805290646;
    msg.v = 0.0585157458622;
    msg.w = 0.72661633897;
    msg.p = 0.130220082534;
    msg.q = 0.660217033597;
    msg.r = 0.107669315294;
    msg.svx = 0.421347085578;
    msg.svy = 0.724994507661;
    msg.svz = 0.780743807931;

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
    msg.setTimeStamp(0.811129646881);
    msg.setSource(20805U);
    msg.setSourceEntity(249U);
    msg.setDestination(55909U);
    msg.setDestinationEntity(117U);
    msg.op = 23U;
    msg.entities.assign("IOOTKGUBFVWGJCLHHTDUWDRPMFPKAAPSFOAOHMILCQXMSSFBEZKGXSKTLUYVSDUBTXSQMEKJOUWYKEDWCIRCPMAXHPDNHQPINVWLABJYWQZNQWZZTCJNJGXXCOZNDSDYYIGYRXMKWXEIVFXRETVRYTMSOJAHGKNVFARWCIUAVEBJQPDZZNIGAPKSQGRGHJVMMLRJZCBLLYFYPDETBLUDTQEYUH");

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
    msg.setTimeStamp(0.336997740627);
    msg.setSource(13067U);
    msg.setSourceEntity(150U);
    msg.setDestination(54733U);
    msg.setDestinationEntity(60U);
    msg.op = 174U;
    msg.entities.assign("VAWIBYYXRG");

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
    msg.setTimeStamp(0.655250200798);
    msg.setSource(37229U);
    msg.setSourceEntity(170U);
    msg.setDestination(31167U);
    msg.setDestinationEntity(44U);
    msg.op = 222U;
    msg.entities.assign("FLEUEDHLTURYVHPQVDMHLZDMSHPSFSHTVISBAMNXUGIGPUAKVKERFFAGGDWFGIWJDJLIZKKMZTCBKGGUQQPVIKPDPGSMPNQONWMSMZQBWTACUSCFVRLWHEQFCIHDTJNRVINMPMDOCZUBNXQXFAULXTJBWVYCNHAJEDQWCYOZKYOCCXENBRYVFJOATAGHYSJSWTFYUBKRXOIXIZZDELUBJMTOGZKNTEJJAQXRVEILXZEOSBLQBPXLYRYNHR");

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
    msg.setTimeStamp(0.746178787379);
    msg.setSource(42823U);
    msg.setSourceEntity(139U);
    msg.setDestination(24556U);
    msg.setDestinationEntity(33U);
    msg.type = 219U;
    msg.speed = 50834U;
    const char tmp_msg_0[] = {33, -116, 9, -7, 15, -98, 36, -112, 97, 0, 43, 7, -127, 101, -90, 32, 86, -65, 110, -28, 104, -83, -18, 22, 13, 72, -31, 3, -17, -45, 51, 70, 32, -70, 45, 5, -86, -99, -109, 106, -67, 111, 99, 68, -70, -110, 38, 12, -123, -43, -107, 87, 25, -17, -104, 95, 30, -90, -110, -74, 63, 74, 68, -38, -99, -123, -87, -120, 98, -29, -9, 24, 115, 79, -113, 24, -6, -115, 60, 94, 126, 13, -80, 126, -16, -79, -95, 24, 78, 19, 12, 99, 8, -11, 41, -89, -39, 8, 121, 87, -51, -69, -86, -25, 124, -9, -43, 79, 25};
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
    msg.setTimeStamp(0.187845423558);
    msg.setSource(36976U);
    msg.setSourceEntity(102U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(248U);
    msg.type = 35U;
    msg.speed = 1636U;
    const char tmp_msg_0[] = {-110, 62, 32, 68, -92, 38, -13, -24, -55, -12, 35, -52, 12, -26, -49, 28, -15, 34, -41, 45, 75, -126, 123, 58, 94, -115, 28, 37, 91, -31, 107, -35, -45, 37, -102, -28, -105, 24, -66, 62, -109, 96, -19, -58};
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
    msg.setTimeStamp(0.378509797771);
    msg.setSource(11960U);
    msg.setSourceEntity(75U);
    msg.setDestination(48742U);
    msg.setDestinationEntity(155U);
    msg.type = 214U;
    msg.speed = 305U;
    const char tmp_msg_0[] = {5, -118, 32, 52, 106, 64, 39, -76, -109, 54, 115, 42, -65, -48, -71, -114, 94, -76, -79, 103, -101, -94, 8, -24, 62, -78, -52, 94, 63, 33, -103};
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
    msg.setTimeStamp(0.361144921891);
    msg.setSource(36157U);
    msg.setSourceEntity(87U);
    msg.setDestination(15257U);
    msg.setDestinationEntity(232U);
    msg.op = 36U;
    msg.tas2acc_pgain = 0.433431167008;
    msg.bank2p_pgain = 0.413237674648;

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
    msg.setTimeStamp(0.536712817035);
    msg.setSource(61557U);
    msg.setSourceEntity(213U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(231U);
    msg.op = 180U;
    msg.tas2acc_pgain = 0.504316845546;
    msg.bank2p_pgain = 0.452495009647;

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
    msg.setTimeStamp(0.413562839729);
    msg.setSource(29173U);
    msg.setSourceEntity(123U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(148U);
    msg.op = 236U;
    msg.tas2acc_pgain = 0.156364925927;
    msg.bank2p_pgain = 0.0809478437775;

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
    msg.setTimeStamp(0.385063795699);
    msg.setSource(59018U);
    msg.setSourceEntity(109U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(11U);
    msg.available = 2752801782U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.434088074802);
    msg.setSource(17251U);
    msg.setSourceEntity(192U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(215U);
    msg.available = 375479157U;
    msg.value = 238U;

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
    msg.setTimeStamp(0.312491979465);
    msg.setSource(37572U);
    msg.setSourceEntity(253U);
    msg.setDestination(54665U);
    msg.setDestinationEntity(138U);
    msg.available = 3762798136U;
    msg.value = 6U;

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
    msg.setTimeStamp(0.347711148243);
    msg.setSource(47585U);
    msg.setSourceEntity(18U);
    msg.setDestination(61225U);
    msg.setDestinationEntity(194U);
    msg.op = 226U;
    msg.snapshot.assign("YWLEDXKNEPXKQTUWDSMDZKSYFPVDOIMPBFERLQCBEKJPBDQZLUPSAJVHHAGEGFXMADIHWRQNCXVLUISRTVPZIRKCYLUUKGGJQMTYIWWQECQYNBLAUTRIKMFKRDICFJSFWSPZONOFTYEGJCAHYVTVEOSMYWITJUVCNOAMHAHODTAZCZLZOJKRMMRGNXGLNDIODGKLBSJXNVVMJ");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.491317804496;
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
    msg.setTimeStamp(0.929302992093);
    msg.setSource(50140U);
    msg.setSourceEntity(175U);
    msg.setDestination(34303U);
    msg.setDestinationEntity(167U);
    msg.op = 233U;
    msg.snapshot.assign("BXYHEXJYFVKOAIPTAWFDRPGQEPQOBEJXVMVOYOIEAEQXUCDJGGDTIOUPZKNPUAAKNISGOLQICITPKBJVUBDENDUSAYNCXOYXHZTEMUOTZCVWNDWWNCLGWJMMDBGKSMMSNUWFTYHVGZPB");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.845880055427;
    tmp_msg_0.i = 0.32694019617;
    tmp_msg_0.d = 0.937287016966;
    tmp_msg_0.a = 0.977317705527;
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
    msg.setTimeStamp(0.101715439335);
    msg.setSource(31211U);
    msg.setSourceEntity(159U);
    msg.setDestination(49790U);
    msg.setDestinationEntity(201U);
    msg.op = 252U;
    msg.snapshot.assign("KQRFEJFWIIFHVSJ");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.805959872832;
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
    msg.setTimeStamp(0.485655613021);
    msg.setSource(47474U);
    msg.setSourceEntity(33U);
    msg.setDestination(61598U);
    msg.setDestinationEntity(37U);
    msg.op = 169U;
    msg.name.assign("NJDSMHGPAYHTQTZTLUHDGNVZOQSLHXCOWHAYNVJWUNYYOIJTMALXOOFSFMBIRZDVZGWDGLJASJBUFMQXZZFBEFEXOYRDIJESCLWAXTVRMAWNVJBUIYCHKHQRVFNZRBMRZUJACDSMKCFGXLNFHAIVIEWWXUQLIGUGP");

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
    msg.setTimeStamp(0.842103432594);
    msg.setSource(44960U);
    msg.setSourceEntity(237U);
    msg.setDestination(16028U);
    msg.setDestinationEntity(5U);
    msg.op = 37U;
    msg.name.assign("AFHIKUQFXWJYIDZHVVEQBHTZPDOFJSKYKQFSBXFJQGJLVCQBJPLFCPCHPRU");

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
    msg.setTimeStamp(0.303546895112);
    msg.setSource(19348U);
    msg.setSourceEntity(234U);
    msg.setDestination(30549U);
    msg.setDestinationEntity(97U);
    msg.op = 81U;
    msg.name.assign("TKDUDGBTAYHLKYOLONVYNHYBXMJXPYWARNRXDWOIBZFTIWMGJWUWILMSDEJULYPVYKSKBIUXYWNSFEEHBIZJOOCESCTLYKPOUTNDISMNBLMXADSMAXMXIJBQECFHIVTRRQPVJNAPJDJUGGVOXTPMOF");

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
    msg.setTimeStamp(0.981039765471);
    msg.setSource(10118U);
    msg.setSourceEntity(187U);
    msg.setDestination(53583U);
    msg.setDestinationEntity(68U);
    msg.type = 242U;
    msg.htime = 0.805409491313;
    msg.context.assign("XLXWEGWNHMOFNHVERLFLACTEUMCJDRKQHIGURRZWTKTIDGNFNTMBAJRPRYOWLRNEBXTYQQVIILOAZK");
    msg.text.assign("ECAVUWIYEGIKHNQNXUDAIGQZQPAJJRX");

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
    msg.setTimeStamp(0.71952496306);
    msg.setSource(63729U);
    msg.setSourceEntity(178U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(229U);
    msg.type = 210U;
    msg.htime = 0.834919869115;
    msg.context.assign("ENAPVAHUTBTCFPJFJGLJBPTPNEILSRFRPCDKZFURRVHDCSMUQLQTUYMYNCYHVPSJQQBWTVODXQYZRJWODAMWXFBZMTUGZWAQWCDTASEXCD");
    msg.text.assign("JXBNLVKLWUKPJIUUKSQIOONHIKCGFMRUDUZTDHVGFIRPIKREBZPCKLYQQDFLT");

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
    msg.setTimeStamp(0.916739464014);
    msg.setSource(63611U);
    msg.setSourceEntity(116U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(34U);
    msg.type = 143U;
    msg.htime = 0.908416184234;
    msg.context.assign("NIULRHCWPYVAYZDEFYGOCXMEJVOVNIQJSYLSABAAKQYKG");
    msg.text.assign("CKTOWQTQWVCEDWKTUBDEKIRFIWGRQGRYZPYUEDAQGFXUAAPXDKMOEMSENTLSWMTBEHSLIZXCZEHPLFWKMFHTHUSRIQMIHTLIGRXVVBOVYYDZQWJRCSOSCMBQIOZPKHBVONRUCMKXNJPOUHLXCJYVAUEGMXZJSFAOLGYTBZCCDLZHKNBAUJQXSDJMEINRAYCTVNJBJADQBJHRNZPMASFPOAYGLUTNB");

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
    msg.setTimeStamp(0.216035731147);
    msg.setSource(47474U);
    msg.setSourceEntity(199U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(45U);
    msg.command = 92U;
    msg.htime = 0.742812114382;

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
    msg.setTimeStamp(0.71482821827);
    msg.setSource(39461U);
    msg.setSourceEntity(182U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(23U);
    msg.command = 207U;
    msg.htime = 0.344334884563;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 9U;
    tmp_msg_0.htime = 0.218776779494;
    tmp_msg_0.context.assign("JTTVJNNWYGRQRAXJLKPEFCVLCSWROHQBGMOWMICKZIZHFFFPNNSISUPGIEAAQBLBBUMCSUWDA");
    tmp_msg_0.text.assign("ULXRPVBREFBJMIZVYUBRGUPTXNQJ");
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
    msg.setTimeStamp(0.883802305658);
    msg.setSource(47115U);
    msg.setSourceEntity(85U);
    msg.setDestination(45401U);
    msg.setDestinationEntity(113U);
    msg.command = 142U;
    msg.htime = 0.516820828754;

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
    msg.setTimeStamp(0.82929150432);
    msg.setSource(28212U);
    msg.setSourceEntity(244U);
    msg.setDestination(4443U);
    msg.setDestinationEntity(75U);
    msg.op = 190U;
    msg.file.assign("JCSQIBQGGHLAJRBAYFVXBJEMYCSVUYSTYMDKDAPBZNLTIVPMTOTYKEKOWCBLGJOZKSIFUERIQOZWXGFXBECOSUVMFKWSATRORDITQCRTENHNNJKHKAGETUMJDJXQFIIFXRXCHGWSEDWNUYGZMHFHVALPGKHHRZPXPXNPSAWILUDRWJBZFLPNWZDKEBQWHRVALCAEQOZHZNYBMVIQVJPRSVZJUOUYFNLEQXYYGQLMDTSFDMDCON");

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
    msg.setTimeStamp(0.655261757393);
    msg.setSource(27798U);
    msg.setSourceEntity(224U);
    msg.setDestination(10526U);
    msg.setDestinationEntity(115U);
    msg.op = 193U;
    msg.file.assign("QVZZRLKQMEGUEIHADOCQELCZSXORPWZMMDZBIRCIFCTCQIGYWFTVHKCTFANNYMJXTWDYKLVSHKBGJXBBVTLDJUGMDYOLWONUVZLFYQBTSTSABPCX");

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
    msg.setTimeStamp(0.720498122501);
    msg.setSource(56075U);
    msg.setSourceEntity(176U);
    msg.setDestination(666U);
    msg.setDestinationEntity(57U);
    msg.op = 120U;
    msg.file.assign("UXIIPOTCBYYZAQDHRHZPCOWGQFCXDKNVSDGJXRLRTVYGJHMNMNFFKEUIWSQJMGHFYKQJLJXLBACIBZDUXYQFDYLQIOEGCUKTSWOFCMKGWPDSEUSTKXHBNZBYLMMDCOPMFJTBSWXJNNIKTXFAISZQSCZZDUJAAOLN");

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
    msg.setTimeStamp(0.604488315141);
    msg.setSource(2762U);
    msg.setSourceEntity(31U);
    msg.setDestination(41424U);
    msg.setDestinationEntity(58U);
    msg.op = 85U;
    msg.clock = 0.26607052454;
    msg.tz = -8;

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
    msg.setTimeStamp(0.14732494892);
    msg.setSource(40934U);
    msg.setSourceEntity(158U);
    msg.setDestination(51803U);
    msg.setDestinationEntity(231U);
    msg.op = 220U;
    msg.clock = 0.288898775551;
    msg.tz = 50;

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
    msg.setTimeStamp(0.613385428458);
    msg.setSource(17067U);
    msg.setSourceEntity(36U);
    msg.setDestination(3981U);
    msg.setDestinationEntity(218U);
    msg.op = 102U;
    msg.clock = 0.260291425843;
    msg.tz = 114;

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
    msg.setTimeStamp(0.367973604778);
    msg.setSource(21267U);
    msg.setSourceEntity(50U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.326515557108);
    msg.setSource(11463U);
    msg.setSourceEntity(54U);
    msg.setDestination(25427U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.0793096277304);
    msg.setSource(48201U);
    msg.setSourceEntity(235U);
    msg.setDestination(58089U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.760828586635);
    msg.setSource(7717U);
    msg.setSourceEntity(109U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(253U);
    msg.sys_name.assign("RAACHJUHQXNIECTVHXKEMNMNHIISXEULUOIPFNFOLKYOBBAOBSGDXLRQMSIKDNSAKWGYOBZFOAIFUCXRPYCIGRWGBXBAJMVFUPSVKHDSKJGDIUWQLMMEGTXEJTFYZSWUEWTVFHWYBGKRPKZYBZPNSUNJKTUVUHQPMTGAXPCQJVEYZYLHJAPJVVNETNACLZSRLAYIMVQWZQTEDTLOZDDQRKZLNDQI");
    msg.sys_type = 59U;
    msg.owner = 36330U;
    msg.lat = 0.341027245514;
    msg.lon = 0.528908061276;
    msg.height = 0.184487176619;
    msg.services.assign("VBOAKTBKXSVXLUUOJPUQISCCKSNLFSXZBBGWOHHEIQVHUVJCWSUBWJEHXJWCGHIHJQUIFEONGZLSKKMGMDCJNZQTPEGQLAGTRAPKLVMYHAOAVXZOSQLGDHUBRPPYWKMLXVNLRASJISWNGTYRBONTXSYYLVZCERYMGFEAJMXDRYQWOMFBFNBPALFTKH");

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
    msg.setTimeStamp(0.0116463444378);
    msg.setSource(47372U);
    msg.setSourceEntity(165U);
    msg.setDestination(51605U);
    msg.setDestinationEntity(182U);
    msg.sys_name.assign("DMBIJUDSAVEJMVSHKWDYGSXCQGBWYMUHAUPKPQLUNZAFUQPORJNCXRUQDKYMJXRPSOTLTHDPZBMDZGQPLWLZEHRENVVFGTEXXOIGKNHQSTRMZQFV");
    msg.sys_type = 241U;
    msg.owner = 10390U;
    msg.lat = 0.1121310118;
    msg.lon = 0.910729719335;
    msg.height = 0.678896545564;
    msg.services.assign("WLKGDXZSBGYAAHTTLLYUARFZSMBGAXUPVQLMKHDSSPFIVEOGIYUTXNZSYVVHVKBRANLJKCKHSCJGLHWROTJORYCLOWMWXTYRDZEI");

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
    msg.setTimeStamp(0.0281276541571);
    msg.setSource(30973U);
    msg.setSourceEntity(141U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(242U);
    msg.sys_name.assign("GKDLETKOLCBIFZJYBKIIKZVYOYDNPUUXQODSSGBZNBFBAIADIJAJQR");
    msg.sys_type = 177U;
    msg.owner = 25382U;
    msg.lat = 0.927645013401;
    msg.lon = 0.0300963998035;
    msg.height = 0.955299264363;
    msg.services.assign("OWRDKDTXOGQYPUQPIOSIRLFOSDMRVKFMVNGXRURHGXNLMUQCJRWSHUOSTDBALBQZCSCCVENLQYGUPDJSYFGNIPBUEWEMATOMWWZCBEFYLZHHZQAHBYKKUUFTWTEHLPPNPQGMIFEMWDILXEVPXFIILMJAJZOKRKVXWYPFSGPNTVDNQYXONLZJTHMCZJFCBGSVDZIXDMQJCHNVOLBBYKKVOAADAZTQBNIRVEHACTJSAJWGB");

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
    msg.setTimeStamp(0.544560314197);
    msg.setSource(25406U);
    msg.setSourceEntity(155U);
    msg.setDestination(52933U);
    msg.setDestinationEntity(5U);
    msg.service.assign("EQBIGABIOSUYCRIAHALAKYBHOFLZFHLXNXUFHKSD");
    msg.service_type = 175U;

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
    msg.setTimeStamp(0.116413622969);
    msg.setSource(48721U);
    msg.setSourceEntity(236U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(181U);
    msg.service.assign("VCDMIIWLJFVVZJUBLVSNACEAEGLBYZMOAETPUUTODQEIDGZNGCJJYTHGFFZJYWDMDXWMRRGUJAEVXMRDQMGW");
    msg.service_type = 224U;

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
    msg.setTimeStamp(0.656743667953);
    msg.setSource(59320U);
    msg.setSourceEntity(65U);
    msg.setDestination(22514U);
    msg.setDestinationEntity(172U);
    msg.service.assign("AHDMOGQNLLIPERKJDEPUVLELADGSGBKZMRRELNEOYNZPPXBHKUPOZUEAFSOIZLBYKFSXROYAWGZQGDCDQFSWJZTYYDPWAJHYVOPVQNKBTCUKVHTUIJOSDXGVTFXJMKIWCSXURBFAWKZTBSZEVUYXMUCXMHBPJHLQCNZKBFCGCFCDWOGRWHMFIDIXNI");
    msg.service_type = 110U;

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
    msg.setTimeStamp(0.53092525358);
    msg.setSource(49871U);
    msg.setSourceEntity(119U);
    msg.setDestination(18930U);
    msg.setDestinationEntity(91U);
    msg.value = 0.878845929007;

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
    msg.setTimeStamp(0.466418906267);
    msg.setSource(58524U);
    msg.setSourceEntity(38U);
    msg.setDestination(13621U);
    msg.setDestinationEntity(45U);
    msg.value = 0.620334245002;

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
    msg.setTimeStamp(0.234477775104);
    msg.setSource(32635U);
    msg.setSourceEntity(208U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(30U);
    msg.value = 0.590776204125;

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
    msg.setTimeStamp(0.227894636841);
    msg.setSource(40116U);
    msg.setSourceEntity(80U);
    msg.setDestination(55060U);
    msg.setDestinationEntity(214U);
    msg.value = 0.234319441398;

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
    msg.setTimeStamp(0.791980913123);
    msg.setSource(18099U);
    msg.setSourceEntity(97U);
    msg.setDestination(46652U);
    msg.setDestinationEntity(136U);
    msg.value = 0.310310227521;

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
    msg.setTimeStamp(0.830998085258);
    msg.setSource(35615U);
    msg.setSourceEntity(125U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(49U);
    msg.value = 0.571317276514;

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
    msg.setTimeStamp(0.774856892226);
    msg.setSource(64214U);
    msg.setSourceEntity(163U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(114U);
    msg.value = 0.784529924906;

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
    msg.setTimeStamp(0.0525942328476);
    msg.setSource(10088U);
    msg.setSourceEntity(247U);
    msg.setDestination(35421U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0117697123412;

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
    msg.setTimeStamp(0.228750861175);
    msg.setSource(51665U);
    msg.setSourceEntity(37U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(45U);
    msg.value = 0.811988432769;

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
    msg.setTimeStamp(0.219221782728);
    msg.setSource(11553U);
    msg.setSourceEntity(73U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(151U);
    msg.number.assign("CURQOWPLYQXVUOWAEFWXEQNPZZHAMYDTLKXJAKJRDCEOTQOKNZKFSTGSNFODYPNXRYCUVROCLGDAILKOLD");
    msg.timeout = 38890U;
    msg.contents.assign("NXKWAJODOZMUJYBXMAUBUVIFTEMDNXDKBCNLBRCGTQKZWYCCCRKADZMOZIMDDNUTFZUCNGHTXLXMHB");

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
    msg.setTimeStamp(0.556192631354);
    msg.setSource(44705U);
    msg.setSourceEntity(101U);
    msg.setDestination(11372U);
    msg.setDestinationEntity(15U);
    msg.number.assign("TNFAZPMJUXAJIHXNYPROCDHMCLWFTIEWNIZYKNUSLYUIMUUSBNWCOOYROVYUZYGJRJSDEFMVXXZKNTADZMBCZLMSMXJADJWQYKDHWLYEVYVPTGHVGXKCDZOFSIROCIIQEHDRHPANZBGDWLZLBRPSNNPQSUJHKHARKMPXEBLEYSMMRTGNXUQBATVAAKXTQRQTJVWOSUZWIEVFJPPCLKFKEFJCGFRFTWVHCEQDOBQOFBSEGLIQVPIUKTAXOWCLGB");
    msg.timeout = 30718U;
    msg.contents.assign("KLIIPFZDVWUYOTASNPXRIRZBAUEADXSCKJGPHDWHZECBGJUJBJFXHQLGEGRDVHYKHXYMYNXBOJLDNQMGOZLLGFFETNVORYIUPPJODPMQHUEKWOMYCWKUSTGAPDJWRWVWCLTIQMOBZIQDCJFMUAWEVOTKJFTJNAERWGYFAHUPSUHSNNISHZAQSRICYKDEBBBAGQKZCBMLLQMGFYSINV");

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
    msg.setTimeStamp(0.997622311948);
    msg.setSource(40812U);
    msg.setSourceEntity(212U);
    msg.setDestination(9172U);
    msg.setDestinationEntity(209U);
    msg.number.assign("MGJTDGGVOWMBKOBHEBDDSAVHMNLUSJEHHAWGLQFUTGZBKEOZZWIEGWZQKJRIVXAQNXQFSPDXTCTIAQAHUOOTUDFKZNLYVEXDKGEKUZOPGJRGOTSCHDREUYMKILLLNZCNUULXCTSAUTXPIRKMVJVYDRMRYVIQSHQTYOBZOCNTFFXJPPXGQNWYHMRFBENPJPPQCWLPMVDIIEJAFSZLENXISDWPYFVCIWXRYFSAABYUYJCHZBLVJMQMSOCNKBW");
    msg.timeout = 58014U;
    msg.contents.assign("ITOOKZOBGCEUVRLLUYJCSHYSMJUCZDVWVORTXMNEBRTKG");

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
    msg.setTimeStamp(0.351192113988);
    msg.setSource(38655U);
    msg.setSourceEntity(35U);
    msg.setDestination(48063U);
    msg.setDestinationEntity(127U);
    msg.seq = 3452257054U;
    msg.destination.assign("UXEVVOFEWXPPEMXPHXCRZUEYYDTMAZKZIRALH");
    msg.timeout = 858U;
    const char tmp_msg_0[] = {59, 17, 53, -103, -70, 37, -41, -10, 81, -44, 45, 86, 22, -90, -47, 44, 31, 49, -107, 45, -73, 48, -2, 5, -20, 105, -86, 21, 3, 13, 106, -23, -81, -44, -19, -13, -24, -12, -13, -22, 50, 40, -29, -20, -79, 71, -126, -16, 63, -59, 87, -44, -33, 73, 20, 71, 11, -45, -124, -32, 96, 77, 54, -46, -46, -37, 126, -81, 31, 88, 56, -30, -37, -48, 74, -89, -28, 50, 56, 7, -15, -82, -83, 72, 67, -52, -125, 64, -93, -21, 6, -63, -41, -9, -26, -93, -98, 92, -117, -114, -33, -61, -39, 126, 116, 73, -87, 9, 121, 29, 98, -34, 115, -120, 30, 63, 3, 104, 47, 82, -17, 15, 89, -74, -28, -116, 26, -88, 76, -94, 77, -113, -75, 58, 69, -35, 83, -47, -23, 39, 71, -61, -115, -57, 32, 46, 79, 13, -98, 59, 108, 54, -124, -126, 115, 60, 6, -122, -51, -55, -60, -14, 3, 113, -29, 58, 60, 68, 20, 78, 18, 116, -40, 35, -38, 21, -121, -81, -81, -109, 96, -107, 30, 100, 112, 60, -45, 121, 23, -2, 81, -19, -122, 109, 38, 76, 24, -49, -113, -73, 95, 53, -7, -126, 71, -101, -78, -121, 26, -39, -124, -94, 49, 61, 14};
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
    msg.setTimeStamp(0.613138223327);
    msg.setSource(62157U);
    msg.setSourceEntity(247U);
    msg.setDestination(4870U);
    msg.setDestinationEntity(25U);
    msg.seq = 3856780599U;
    msg.destination.assign("UTPEWOCIXKQBJUTUHRRSTREJNWZUMXZVGYEQBVCHSOQQZDAFMAZHJUYMDTAEWAPFCAVRJBMRBYOEPCILKZGWWRFPSXOBVZAIKPMLZQCQDAVNRWTGSGFNHGLHLOVJYAOJDYB");
    msg.timeout = 54217U;
    const char tmp_msg_0[] = {15, 60, 78, -13, 97, 23, 76, -41, -114, -47, -94, 8, -46, 4, 121, -99, 7, -30, -39, 35, 101, 99, -66, -53, -66, -86, 21, -32, 101, 98, 113, -11, 13, 40, 90, -6, -118, 40, -94, -59, 12, -78, 11, -66, -31, -7, 24, -88, -63, 35, -27, 0, -21, -37, -63, 94, -53, 79, 112, -97, -76, -46, 55, 114, -40, -67, 119, 100, -97, 8, 43, 4, -48, 123, -24, -80, -20, -102, -60, -16, 29, -82, 98, 4, 107, -76, -70, -113, 125, -122, 18, -66, -21, 71, 101, -14, 89, -55, -44, -13, 105, -71, 49, -118, 51, 18, 121, -125, 99, -5, 122, -11, 34, -45, 74, 62, 111, 66, -70, 46, -68, -75, -109, -111, -100, 101, 91, -12, -118, -106, 77, -67, -121, 1, 29, 49, -75, -61, 71, 34, 67, 61, 94, -65, 92, -19, -69, -20, -106, 119, -64, -93, 29, -100, -91, -9, 113, 32, 126, 49, 12, -107, -39, -11, -34, -16, 54, 22, 38, 54, 12, 24, -38, -4, -34, -97, 110, -21, 16, -45, 11, -84, -78, 86, -77, 112, -92, 51, 39, 17, 66, -10, -92, 116, -125, 23, 7, -54, 47, -20, -98, 8, 60, 71, 101, 103, 10, -54, -110, 96, 48, 28, 81, 54, -17, 72, 30, 65, -105, -72, 51, -116, 98, -14, -49, 23};
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
    msg.setTimeStamp(0.0819283016584);
    msg.setSource(16468U);
    msg.setSourceEntity(223U);
    msg.setDestination(18358U);
    msg.setDestinationEntity(222U);
    msg.seq = 1635088700U;
    msg.destination.assign("DAGPLPHXOBNCGAPYAYPDQEIGPZNYCMZAADGXJZW");
    msg.timeout = 18589U;
    const char tmp_msg_0[] = {-8, -86, -2, 71, 88, -51, -59, -59, 56, -58, 49, -37, -123, 120, -39, 35, 61, 63, 18, 70, 94, -38, 4, -19, -45, -5, 100, -79, 4, 12, 70, -31, -74, 14, -107, -93, 44, 24, -63, 117, 4, -6, 55, 92, -124, -110, 38, 23, -36, -124, -120, -72, 35, 92, -77, 10, -111, -64, 92, 61, 14, 115, 110, 99, 89, -45, 53, -55, -96, 7, 112, 108, -40, 124, -84, 126, 104, -77, -31, 116, -56, -124, -82, 44, -42, 83, -43, -66, -64, 61, -72, 111, -48, -49, -19, 118, -66, 105, 107, 19, 14, -105, -24, -106, -2, -63, 64, -96, 60, 57, -95, -106, 22, -5, -73, -96, -81, -71, 67, -103, -95, 4, -33, -19, 121, -57, -37, 15};
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
    msg.setTimeStamp(0.997213105786);
    msg.setSource(29010U);
    msg.setSourceEntity(37U);
    msg.setDestination(64211U);
    msg.setDestinationEntity(28U);
    msg.source.assign("OENJTLOBJIVETAJDICJRDENCXFSPBTFIAQITEPMNLEWCVTMYKUXBHNRJCUYVFFYYMXCCYIHFELNNYLBQRKLSQBURZQIFMBAXKCQKLZUODOSAOZXTDSCEWWWRGCLPGVYKZRXOBZOGLMSYJPHAZKHTRWGLDREZETPYHNJKJDGWOUQXQGABXUGPYUKGWFESZDLQPHHCZKABURP");
    const char tmp_msg_0[] = {-46, 18, 119, 92, -114, -35, 61, -88, -99, 88, -11, -16, 87, 78, -48, -63, 70, -74, 81, -91, 122, 69, -98, 99, -9, -54, 96, -83, -9, 50, 20, 96, -95, -104, -98, -29, -74, -83, -101, 47, -83, -5, 37, 114, 2, 81, 2, 53, 1, -126, 4, 98, -119, 105, -38, -37, -97, 111, -110, -127, 80, -101, -74, 62, -78, 121, -107, -99, 104, -103, 93, 83, 69, -12, -122, 82, -79, -108, 117, 69, -54, -119, -17, -5, -32, -2, 13, -55, 1, -8, -32, -64, -65, 44, 64, 7, -55, -5, 115, -57, -54, 125, 70};
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
    msg.setTimeStamp(0.0792513130943);
    msg.setSource(7797U);
    msg.setSourceEntity(22U);
    msg.setDestination(62127U);
    msg.setDestinationEntity(207U);
    msg.source.assign("DXSMMTLCTQVKHIKFYDALMYVYDOZEKFVSYHOUHPIMDOYAVUOGO");
    const char tmp_msg_0[] = {-114, 125, -114, -4, 125, 65, 89, 54, -4, 79, -25, -96, -45, 91, -38, -26, 8, -46, 4, -80, -89, 111, 71, -81, 35, 97, -80, -89, -86, 117, -83, 3, -72, 108, 48, -5, 111, -54, -57, -27, -75, -118, 61, -48, -31, -73, 51, 14, 112, 99, -87, -55, 122, -81, -70, -2, 41, 57, -55, 88, 103, 45, 42, -114, 3, 83, 7, 46, 93, -45, 72, -102, 53, 125, 122, 90, 123, 80, -106, 70, -91, 63, 116, 28, 113, -29, 47, -79, 100, 14, 4, 13, -77, 100, -93, -82, -98, -78, -47, -11, 47, -61, -81, -117, -11, -62, 86, 28, -13, -108, 125, 66, 83, 98, -118, 117, -58, -80, -25, -94, -39, 85, -101, -81, 116, 81, -90, -77, 122, 30, -2, -99, -29, 0, -84, -120, -57, 114, 34, -5, -123, -83, -47, 109, -23, -65};
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
    msg.setTimeStamp(0.636517970722);
    msg.setSource(56584U);
    msg.setSourceEntity(63U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(202U);
    msg.source.assign("ONIVNRHLCRBEBZSWUNHFXKGJUPLNRXTDXYMTRWAMFSJTCONJKIAWJDZQOYIENLQLBASGOVZVYBDVWPXQQTYCKCZKIHDQVPUDYTOHPQBYCQGFXGYGZQGUBVEZQXBBFUTPYFYNZMMGRAWICDTZXAHEXRPCIUFOESRKARPLJGYLEEEWJMONPLWWLJDEILUJMCCHRLUAXIIFVSUCMVEMSMIFOFTFSKHNSOWHSGQKP");
    const char tmp_msg_0[] = {124, -86, -43, 125, 94, -25, 54, 49, 125, -38, -20, 113, 9, -101, 6, -107, -61, 21, -94, 119, -106, -113, 28, 121, -111, -113, 74, 86, 31, -65, -62, 62, -69, -20, -12, -97, -39, 29, 90, -40, -95, 101, -97, 27, -103, 61, -126, 86, 50, -53, 109, 1, -80, 111, 71, -122, -46, 79, 18, -102, 16, -101, -122, 104, -127, -83, 23, 126, 71, -57, -42, 115, 39, 63, 18, 35, 46, 81, 3, 27, -42, -62, 76, -54, 52, -115, -16, -59, 90, 115, -81, -128, -105, 91, 34, -57, -125, -46, -25, -100, 121, 28, -97, 70, 15, 95, -27, 90, -22, 100, -71, 18, 30, -115, -32, -48, 111, -58, 126, 5, 90};
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
    msg.setTimeStamp(0.831678561077);
    msg.setSource(3009U);
    msg.setSourceEntity(175U);
    msg.setDestination(33591U);
    msg.setDestinationEntity(79U);
    msg.seq = 3664340301U;
    msg.state = 107U;
    msg.error.assign("UQIJLHTZGXCXTXASUIMUHCOMTLCINVKTWRCAF");

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
    msg.setTimeStamp(0.203168511707);
    msg.setSource(3533U);
    msg.setSourceEntity(76U);
    msg.setDestination(40104U);
    msg.setDestinationEntity(24U);
    msg.seq = 3032888823U;
    msg.state = 197U;
    msg.error.assign("CVYDLYDUNXPENKTPNFWQFZOMGBFIABYJJTQWALUCZMOOKMCASPTWUUKLZBRGXVDCOXFKHFOYSCTVJATVMRHROUXSWQDVUNTMMEESVIQKEPEHFIXXZDPXWMJRBKRCTHZJQGOLLBJDYBGFFIDSESZYEMK");

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
    msg.setTimeStamp(0.774006275468);
    msg.setSource(19090U);
    msg.setSourceEntity(169U);
    msg.setDestination(34011U);
    msg.setDestinationEntity(25U);
    msg.seq = 1591312740U;
    msg.state = 13U;
    msg.error.assign("ZAIPOIFRNJSIPRLXNMKMGUTOVROMMCVRHIIOWHTLKAGZUJOBKFZIJSXUBDAMNFQCUEXFXLRZDRALJYJSLQCBPEMLQHNTJ");

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
    msg.setTimeStamp(0.387275174937);
    msg.setSource(29311U);
    msg.setSourceEntity(218U);
    msg.setDestination(50631U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("KLSRQDUCOACMEXBFUNJKCSEVNKKEIYALJXDAQJOZQHCHGGBMFIALBKAMBDMPRJGODWTRGCHYOTKALAIYJSWSGOIVGXUYFLNEZOBKKGVZCAFZHJDHTFVMQYGRQQTTBUHXGNZRPULEHXQNPQGPVRXJQBMCIFUZXVAZYIIXBYTUEZOYFWWNUFISSQZYMSNRRWHLKFPLPCVO");
    msg.text.assign("TQFUPJTCGIQFFTNBYLBASYGPCKQSCKNOTQVPKEWCCKQZNRUNMTPGBFMSOUOOTPZJLRIHGINMYMVBOBNHIMIMRSGWEOJAEH");

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
    msg.setTimeStamp(0.0326682641735);
    msg.setSource(53329U);
    msg.setSourceEntity(103U);
    msg.setDestination(55060U);
    msg.setDestinationEntity(219U);
    msg.origin.assign("OOSKQBDWPJYDTJNAFUMPVQJEXWWYHPOTJTLESEOOMHBNTOIGQVFPKAH");
    msg.text.assign("SMYDWFCXUMPYZVXSIJBOBQEIQQURSWNXA");

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
    msg.setTimeStamp(0.156535094348);
    msg.setSource(8472U);
    msg.setSourceEntity(237U);
    msg.setDestination(61715U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("PYMCNIKMNYMPAWKGWJDKWSLIGHBRTFROQRTBXBIVCBVFIYANQJLYQMIDYEMUOXFIPQJYOMNLPAUCVPHUZNURATPH");
    msg.text.assign("THEMHJLORMMGONIJ");

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
    msg.setTimeStamp(0.0764308500759);
    msg.setSource(16464U);
    msg.setSourceEntity(36U);
    msg.setDestination(14277U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("LPSTIIZTAUWCBNCHJOWAFIUFIDGXDXHLXHUVJHOVSRBYVRSQEHFMMXFWCCUGDQMKOMWXXMOOTKYZOEYPGIJBMJQJAEPZSMLFQKAAWDVZCLYFRJLZTSXWKKTMWAFHJRGEZSJLWNVAWQUOFLBGRLCTEAGYZYIINQBTSPZWPPVDTUSIOKQBBIPCZYRAQFETEHDYUTXFUVNGB");
    msg.htime = 0.0122509267546;
    msg.lat = 0.251803713945;
    msg.lon = 0.0884342822665;
    const char tmp_msg_0[] = {-124, 65, 67, -69, -48, -19, -68, 114, 9, -40, 104, 124, 125, -92, 20, 53, -87, -6, 83, -114, -69, -4, -64, -37, -55, -127, 97, 82, 15, -113, -116, -53, 7, -6, -12, -90, -48, 27, -23, 70, -36, 37, -39, 24, -65, 115, 95, -123, 110, 70, 26, 74, 84, -50, 18, 95, -84, 112, -100, 90, 72, -5, 55, -16, 73, -31, 125, 106, 115, 30, -28, 117, -77, -118, 109, -65, 120, 86, 125, -125, 49, 97, -110, 33, -107, -40, -41, -97, -53, -48, -15, 71, 69, 14, 123, -84, 24, 28, 98, -69, 52, -37, 55, -108, -56, -104, -35, 2, -68, -115, 17, 30, -75, 26, 4, 86, 69, 125, -21, 47, -3, -32, 23, 93, -106, -11, -82, -126};
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
    msg.setTimeStamp(0.711435849181);
    msg.setSource(58810U);
    msg.setSourceEntity(48U);
    msg.setDestination(9357U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("FCGITPWMXRQLBHGSEWPNMPKCITROJBTIQFUVLZXAALOVEKKCEABRQNPGUPNMJTMSSWZSEUGLVSQPAGYJQC");
    msg.htime = 0.603603808047;
    msg.lat = 0.792701722583;
    msg.lon = 0.476688783046;
    const char tmp_msg_0[] = {-36, 45, -92, 86, -52, 121, 66, -110, -113, -25, -12, 110, -76, -5, 81, 59, -85, 40, -68, -45, -77, 47, 118, 89, -56, -70, 86, 117, 64, -52, -20, -39, -35, 35, -62, 0, 57, 79, 90, -62, -115, 123, -32, -15, 71, -103, -20, 111, 77, -59, -83, -120, 34, -73, -27, 20, 42, 95, 24, 17, 23, 4, 103, -42, 99, -116, -111, -114, 80, -49, -36, 74, 121, 65};
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
    msg.setTimeStamp(0.730197129814);
    msg.setSource(49974U);
    msg.setSourceEntity(221U);
    msg.setDestination(62847U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("TJUERNQBNMUDOAOWONVKKWVIAMZAENEDZZGPBEHRPQSP");
    msg.htime = 0.166469251985;
    msg.lat = 0.585682942683;
    msg.lon = 0.976591047962;
    const char tmp_msg_0[] = {18, -70, 39, 124, -14, -9, 70, -54, -17, 3, 87, 100, -52, -9, 58, -12, -98, 114, -61, 101, 39, -20, 71, 50, 47, 6, 51, 13, 47, -90, -53, 13, 70, -40, 3, 109, -72, 105, -63, -16, -41, -41, -38, -125, 108, -103, 43, 71, 79, -40, 88, -84, -55, 97, -64, -120, -96, 104, 75, 70, -53, -97, 35, -92, 117, -119, 123, 113, 77, 118, 58, -65, 77, -111, -112, -67, -122, -10, 75, 78, 99, -105, -63, 109, 105, -3, 107, -88, 23, 47, 66, 107, -70, 96, 68, -22, -89, -100, -121, 118, -61, -91, 96, -51, -8, 53, -74, -78, -49, -10, -15, -23, -37, -67, 66, -76, -84, -69, -26};
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
    msg.setTimeStamp(0.105727538611);
    msg.setSource(46932U);
    msg.setSourceEntity(121U);
    msg.setDestination(29246U);
    msg.setDestinationEntity(241U);
    msg.req_id = 19654U;
    msg.ttl = 32291U;
    msg.destination.assign("MVFRSAMAVKBQDKPENOUJIGCWDNTBKXEANNHCGEORNOPGLLWXWHAVKUCAUXJTYPZZOQGKYLZNYDSJHMCXIKJIZSWJWSTYQSIRFBDUCXYLKXRVBCNRRENMEDXLWAUESPNPWYQRJDLGFCLEWX");
    const char tmp_msg_0[] = {-106, -17, -115, 36, -96, 92, 23, 105, 123, -78, -76, -6, 110, 2, -6, 1, -8, 124, -104, 58, -98, 108, 24, 30, 75, -13, -94, 101, -121, 8, 55, -31, 77, -1, 19, 65, -90, -51, 87, -11, -86, -70, -27, 96, -90, 109, -88, -40, 111, 43, -31, 1, -19, 119, 79, -66, 90, -79, 14, 24, -88, -116, -14, 110, -80, 29, 114, -27, 108, -116, -125, -5, 120, -117, -75, 49, 51, 117, 17, 60, -54, -89, -59, 57, -51, -4, -98, 23, 17, 97, -79, -47, 95, -30, -26, -49, 81, -124, -1, -13, -50, -44, 69, 96, -58, -61, -55, 70, 104, -105};
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
    msg.setTimeStamp(0.448686454935);
    msg.setSource(17465U);
    msg.setSourceEntity(36U);
    msg.setDestination(48928U);
    msg.setDestinationEntity(64U);
    msg.req_id = 17533U;
    msg.ttl = 54144U;
    msg.destination.assign("JKIMLHXLNABNGSNJUTGBPPDEATZPTJLOGFCOVWQHUJBWBTGSBROCXTVLCLUIKRQARMVGACZTPWYRDGOWKCVFCCDZJKMBATTOROROYBKFQMTHPTFOFJMEEMASVJVQCNDXZYCYESHNEIPZMZPPAQWCLKEOZBFKVLZYFRZSHYWKDXHJHUQOEMQSYXDDPFI");
    const char tmp_msg_0[] = {122, 55, 44, 22, -117, 82, -33, 120, -47, 74, -4, -127, -92, 95, -75, -67, 1, -37, -119, 87, 85, -90, -93, 91, -30, -17, -2, 87, -59, -2, 110, 6, -110, 90, -55, -83, -18, 93, -25, -125, 109, -37, -4, 41, -115, -123, -108, -102, 17, -79, -18, -115, -15, -120, 107, 126, -69, -94, -54, 102, 23, 63, 62, -107, 101, 21, 13, -81, 107, 73, -118, -4, -126, -17, 20, -38, -31, 115, -30, 52, -62, 60, -126, -99, 24, 107, -84, -71, 19, -109, 0, 36, -42, -24, -74, 80, 25, 96, -117, 41, -7, -72, 61, -1, 50, -128, -95, -87, 18, 88, -38, 21, 117, -98, -103, 111, 12, -47, 35, 24, -109, 108, 100, 66, -109, 97, 41, -105, 31, -7, 99, -13, 14, -108, -40, 45, 24, -82, -17, -68, 71, -95, 39, 53, 35, -111, -53, 79, 72, 73, 22, 34, -2, 118, 102, 124, -82, 93, -29, -21, -73, -103, -123, -36, -3, -3, -79, -74, 30, -25, -37, 8, -49, 44, -89, -32, -41, 73, -96, -14, 69, 61, 74, 78, -84, 31, 8, 65, 117, 67, 10, -92, 103, -74, 55, 84, 88, 68, 39, -78, -83, -104, 18, 6, 76, -62, 50, -124, -34, 107, 113, -33, -60, 22, 6, -90, 56, 27, -30, -127, -44};
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
    msg.setTimeStamp(0.918403039989);
    msg.setSource(44659U);
    msg.setSourceEntity(203U);
    msg.setDestination(8742U);
    msg.setDestinationEntity(5U);
    msg.req_id = 14766U;
    msg.ttl = 25647U;
    msg.destination.assign("LLUTUKYIYGVZQOAVNYLWJARFITGFKZJAIJMIOKTHNNSJSBPDDMLHOEXRCTLPXJLAQKCOUGGMKZHNLTUQYORMESWCYEJPCVJODJWPOPBEFQOUMMGVPWMWWAXXZ");
    const char tmp_msg_0[] = {57, 56, -74, 4, -126, 38, 9, -74, 44, 17, 108, -37, 98, 118, -49, 20, -123, 29, -88, -56, -115, 29, 18};
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
    msg.setTimeStamp(0.099164780772);
    msg.setSource(2964U);
    msg.setSourceEntity(235U);
    msg.setDestination(31756U);
    msg.setDestinationEntity(120U);
    msg.req_id = 54490U;
    msg.status = 160U;
    msg.text.assign("PXMSPKTQTKJMBXPQJWAQPPXEXSDIEDKZTKHICIXCLGZKEEGBHAAUCORHTLUVJHCFVFMJDLQLLDYXJHNNGBFGLAZGGKQVNNKMCYWSJMERPEVURUFYITRIWZGKGVFBOKJSUYOYDOSTALQUCFNECXUJSZCPUBQLBZSVJWDBONLIXBXRMAMWNMZHCJDEHOYRIHELWYAQVW");

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
    msg.setTimeStamp(0.531628045369);
    msg.setSource(33246U);
    msg.setSourceEntity(238U);
    msg.setDestination(19066U);
    msg.setDestinationEntity(248U);
    msg.req_id = 27928U;
    msg.status = 129U;
    msg.text.assign("ELWOGFZRYMIWVUSPNMWSUZDWBQNSBQCVRYLEHTEHXNFDPAYXCGKZGUOFWCBQEORWGUWDSJCHURLFVKKHKYUCKILTPAJWRBIVYAJFXSAUUHBLGISVQKMLYMJEJNFOZMTXNCLECAWBIVRQOBOITDVCJUCGGGQJLHEFZOUMREQRTIGXXMRQDHSBNADQXLKDFNOTEZZZPYVPHAGBMQJDDYWNPEIXDZAHTSKSLMRAAYXTKZNMYTVPVKFNOJFBCIX");

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
    msg.setTimeStamp(0.473108392404);
    msg.setSource(11425U);
    msg.setSourceEntity(167U);
    msg.setDestination(6212U);
    msg.setDestinationEntity(233U);
    msg.req_id = 4389U;
    msg.status = 130U;
    msg.text.assign("BGSSSSOXFQEVSYJDQCWJXHUTAOOHURTPZEOZRTXCEGGFBDDZKVROJMLDQCWUCUBCOLQYNWEIRVZUPDQZPFQBOXLLOVHDGRDEVYKCWEAYFLWTPPGZWAPWHMEUADFPTEMQRNJEFINXTFZMMUFKNSVSGTMAHSKEQVNHMVIOCNNKSACKACZBKAJKITRVPJPUINXFHLUYGMSBTKQYLJGMJBRHPXIYGJHIYRTYORXAYWVDXLBCGIBWDKZQBXL");

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
    msg.setTimeStamp(0.729725993497);
    msg.setSource(22967U);
    msg.setSourceEntity(90U);
    msg.setDestination(50697U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("HCJYNYGTLBPWYMWQVTUXZNLDOREJGEJVAHVOZISSGCFGMJIRALERSSYOVZNMNPBXIDZMKSNCEBFZYFIVOHDKFQNPTZNMNPAUBTDYEFHUXLUV");
    msg.links = 3624224008U;

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
    msg.setTimeStamp(0.152180610856);
    msg.setSource(32620U);
    msg.setSourceEntity(251U);
    msg.setDestination(16438U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("RFSJHQBGHDCAPOITMSAIDIUAQSWQKLTVTKPXCWHQARQKN");
    msg.links = 1563164987U;

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
    msg.setTimeStamp(0.384403608723);
    msg.setSource(31735U);
    msg.setSourceEntity(96U);
    msg.setDestination(14010U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("YXOOJFUXRLOVBCBSVTZQGHFVACWNFFAXJHIZMFZSALLJWTYYRLNOEVUMKWCYUTZGWJKUICGPWDVOQBQKLKJTHKHGVDXKESHTEDZEVGUMBJAVUFDNNEPBLNQVXZTBPFUUDIDBRQMDFNNQRRBXWOGRBSEHSJINPGLWEUPGSILOWQCIFCZQAMKAQIKPDHHESZHPXCCGNKXSMUDYAAXTPWOYPSCRPLXZIQJIV");
    msg.links = 973520177U;

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
    msg.setTimeStamp(0.167335137653);
    msg.setSource(4784U);
    msg.setSourceEntity(253U);
    msg.setDestination(30235U);
    msg.setDestinationEntity(192U);
    msg.groupname.assign("BAPEOCHAHZTZJHASFREJKAKRITSJJWBRWGMTLFAMTWGEYVZUZXKDBUQOWM");
    msg.action = 154U;
    msg.grouplist.assign("LFIQOXTCMLVXRVQFJBCVRJUTRPPX");

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
    msg.setTimeStamp(0.915999449187);
    msg.setSource(52513U);
    msg.setSourceEntity(10U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(33U);
    msg.groupname.assign("TGIHUYSPDPOVLXFDJOUUQFBEEAEPVHZXVYMVRZBGGJDYWFBPYONCYVLYMJKAHOJIERFINSZRHWUZCDZAXCZIHUHOERLAIRQSHKQRYPTMACD");
    msg.action = 53U;
    msg.grouplist.assign("FZKGMZYNYUZDPNUWSGXKLOYKBABDBAJZHKWYIGZHDAXLVFRVLDKKLTMOJBCIIXUYJNUSXWLMVNELAUNMEAZCPGPXCFCIAKFXHPVEQBCVSTEIASMXLHBXTOPHHFBTYWMXIVNCBRDGGQYAJHNMWPDWUHZZSNSTTQAHPXVQWJDYFOJIHQCBRVKJIOCRSLEMJSFTQPKNWGOYDWUWARCTDEQPBEFPTFRVOKF");

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
    msg.setTimeStamp(0.877777587593);
    msg.setSource(5756U);
    msg.setSourceEntity(139U);
    msg.setDestination(30021U);
    msg.setDestinationEntity(157U);
    msg.groupname.assign("BKSJPZVLLNSTVXPDWDBUSGEVFHWTKAIGPZCMMDACYUUBOLJJXTEWBNZLRMYQCFSKYZOUGJEOGWYPCXQLRMZAQMZRSRMHZEQNLDJNIVJDOVVLRCNUCFIDZEKHPEAMWCFCVIWAHFZJBRLQSTVDXKBHGMAWFKMJWPXGJIZPEHIGYPCCOSBPWVBTSXYNNAWYEBNQIDGXTJOQAVDHYOXRFFKRMLUQNOYTHAKKIGTUABSTNG");
    msg.action = 206U;
    msg.grouplist.assign("CQNGQVYCTZAPYJYXJBNJQIXGSCTXPUEKPFLWAEHVYIDPMZMRQZRMDZAPXOHKXQBOFRMRVYUGAHHUQJNFVTOUYOMHAMWSSADEENVSIDBOCZTAISVUFUWPBAGIXOQSWEEMIYAWSVLDJCKNGUFGQNKHZRKJVUOONDZCPTNNLAYUBOIDJKRYPWBFQFZWIXCREKITEGBFCWLXYXVSJZTKCSTLKQJFBDGBLWHUMVDLBSRJGTP");

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
    msg.setTimeStamp(0.964190297546);
    msg.setSource(22289U);
    msg.setSourceEntity(13U);
    msg.setDestination(45083U);
    msg.setDestinationEntity(12U);
    msg.id = 197U;
    msg.range = 0.578070111349;

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
    msg.setTimeStamp(0.934606886838);
    msg.setSource(219U);
    msg.setSourceEntity(186U);
    msg.setDestination(6015U);
    msg.setDestinationEntity(157U);
    msg.id = 165U;
    msg.range = 0.809929019835;

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
    msg.setTimeStamp(0.625223192176);
    msg.setSource(29703U);
    msg.setSourceEntity(174U);
    msg.setDestination(18798U);
    msg.setDestinationEntity(211U);
    msg.id = 36U;
    msg.range = 0.471211723664;

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
    msg.setTimeStamp(0.748071736206);
    msg.setSource(43382U);
    msg.setSourceEntity(100U);
    msg.setDestination(23978U);
    msg.setDestinationEntity(34U);
    msg.beacon.assign("DSWXJXHEOEDNIMYJZMPSBCWZGSGTDTUEGWAVGSLVILXAHQYKCIDZFXJUJJDYNTZZBIRTZXJGLPGNVHYROCINANPFWFVPFEAOYPQUQSDBQLFIJELWGEUQFUHFSXFCKNTOERBDTLBABASUHG");
    msg.lat = 0.967200484481;
    msg.lon = 0.761868452139;
    msg.depth = 0.543412385238;
    msg.query_channel = 128U;
    msg.reply_channel = 145U;
    msg.transponder_delay = 194U;

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
    msg.setTimeStamp(0.768105371965);
    msg.setSource(32957U);
    msg.setSourceEntity(27U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("IIQUPDOOIVKYTCQGOUL");
    msg.lat = 0.330317038053;
    msg.lon = 0.829199716226;
    msg.depth = 0.218405435026;
    msg.query_channel = 227U;
    msg.reply_channel = 252U;
    msg.transponder_delay = 30U;

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
    msg.setTimeStamp(0.835542802408);
    msg.setSource(43676U);
    msg.setSourceEntity(21U);
    msg.setDestination(56193U);
    msg.setDestinationEntity(72U);
    msg.beacon.assign("FAOSVMDODFXNLFYBDMWPPQYXHTKUQCJYNTSFYAPEDSSZVAFSJITUHCYIGTYNCTBMVPZWPXBDGKCXCOTYMGPBFUIGLWUAEKMQEBKOZZBUXUPAGG");
    msg.lat = 0.341387034831;
    msg.lon = 0.224004170327;
    msg.depth = 0.943833570406;
    msg.query_channel = 191U;
    msg.reply_channel = 160U;
    msg.transponder_delay = 150U;

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
    msg.setTimeStamp(0.453178751938);
    msg.setSource(24220U);
    msg.setSourceEntity(208U);
    msg.setDestination(8944U);
    msg.setDestinationEntity(91U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.668103862598);
    msg.setSource(23712U);
    msg.setSourceEntity(224U);
    msg.setDestination(32766U);
    msg.setDestinationEntity(22U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.548477326396);
    msg.setSource(9540U);
    msg.setSourceEntity(146U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(227U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.799419207967);
    msg.setSource(6464U);
    msg.setSourceEntity(180U);
    msg.setDestination(30890U);
    msg.setDestinationEntity(32U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 68U;
    tmp_msg_0.time_remain = 0.485526581382;
    tmp_msg_0.sched_time = 0.801827107048;
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
    msg.setTimeStamp(0.644917879002);
    msg.setSource(13168U);
    msg.setSourceEntity(76U);
    msg.setDestination(22980U);
    msg.setDestinationEntity(224U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.514385928026;
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
    msg.setTimeStamp(0.652675220296);
    msg.setSource(29319U);
    msg.setSourceEntity(3U);
    msg.setDestination(23U);
    msg.setDestinationEntity(33U);
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 86U;
    tmp_msg_0.actions.assign("BXDQHLOQCJPNYJRDNSBXMYFLVZCAPNCHDZJXYDJXHGEXJSFZAIKUZSBOPVGQENZOUTRRUOTEKPUVXMODECQMABFONKQCYDANYBWAWJBNIGWVVFCJPGTMDBXRYJMZGDWOCVCTWZVNFVOZSXLRTLFMIUTSGRKILEWOYIHSNHKLGXKL");
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
    msg.setTimeStamp(0.50603206942);
    msg.setSource(40027U);
    msg.setSourceEntity(61U);
    msg.setDestination(10367U);
    msg.setDestinationEntity(242U);
    msg.op = 200U;
    msg.system.assign("TDNQAYNTRJWDNSSGRULXZVMNBUGXSMOIWBCEMVRIASRCFGPJATSVPUCZOHVSAYLGFEAWXFRHXQDXBYCZAUJWBXWLCEPVWCOXHEEIAYFRHEHCJXMPJLGLXJKWUEOTCMUNUGIJHJGMKVOBFOSEJ");
    msg.range = 0.647740104817;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.117568211712;
    tmp_msg_0.ay_cmd = 0.620870553632;
    tmp_msg_0.az_cmd = 0.584758431112;
    tmp_msg_0.ax_des = 0.329578319057;
    tmp_msg_0.ay_des = 0.377247162815;
    tmp_msg_0.az_des = 0.0275943753361;
    tmp_msg_0.virt_err_x = 0.152793857172;
    tmp_msg_0.virt_err_y = 0.25675920311;
    tmp_msg_0.virt_err_z = 0.723271165526;
    tmp_msg_0.surf_fdbk_x = 0.244616155329;
    tmp_msg_0.surf_fdbk_y = 0.850751883103;
    tmp_msg_0.surf_fdbk_z = 0.536005423643;
    tmp_msg_0.surf_unkn_x = 0.251585326327;
    tmp_msg_0.surf_unkn_y = 0.614249625089;
    tmp_msg_0.surf_unkn_z = 0.688650265441;
    tmp_msg_0.ss_x = 0.566918619129;
    tmp_msg_0.ss_y = 0.164846492421;
    tmp_msg_0.ss_z = 0.191678820294;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("BUGGRYBCAJKOFGUMVKWDXTIQEMYCKHLGLQRIOXIRYAVCIKXQGPAXPHBUHCPOPHNQSEIFNGYFLPTECFZXLRMXRSHVOZDDMGDNVBLNDQFBQTPHWOQCHJSUKCFKTOPTLZRONEWFWRKOMGXCQJWQFEHBHEMQBWJTVNTIYBAWZUTAVJWFWAUMDSEUCEXGDXDOUPBSYYAYXSEPKLJYBNLMLDUSNZUSSAGKZJAYZOTJERVNIANW");
    tmp_tmp_msg_0_0.dist = 0.452027039945;
    tmp_tmp_msg_0_0.err = 0.0198214170878;
    tmp_tmp_msg_0_0.ctrl_imp = 0.605317560905;
    tmp_tmp_msg_0_0.rel_dir_x = 0.127886227579;
    tmp_tmp_msg_0_0.rel_dir_y = 0.453288050754;
    tmp_tmp_msg_0_0.rel_dir_z = 0.293602308143;
    tmp_tmp_msg_0_0.err_x = 0.582339832629;
    tmp_tmp_msg_0_0.err_y = 0.85406558425;
    tmp_tmp_msg_0_0.err_z = 0.622870991518;
    tmp_tmp_msg_0_0.rf_err_x = 0.0439515202247;
    tmp_tmp_msg_0_0.rf_err_y = 0.308677529112;
    tmp_tmp_msg_0_0.rf_err_z = 0.782856974288;
    tmp_tmp_msg_0_0.rf_err_vx = 0.694443539138;
    tmp_tmp_msg_0_0.rf_err_vy = 0.561433511243;
    tmp_tmp_msg_0_0.rf_err_vz = 0.747875832819;
    tmp_tmp_msg_0_0.ss_x = 0.987276766142;
    tmp_tmp_msg_0_0.ss_y = 0.0388370951221;
    tmp_tmp_msg_0_0.ss_z = 0.826670665094;
    tmp_tmp_msg_0_0.virt_err_x = 0.625039123032;
    tmp_tmp_msg_0_0.virt_err_y = 0.793756485321;
    tmp_tmp_msg_0_0.virt_err_z = 0.79465500124;
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
    msg.setTimeStamp(0.656001099791);
    msg.setSource(39483U);
    msg.setSourceEntity(39U);
    msg.setDestination(61609U);
    msg.setDestinationEntity(157U);
    msg.op = 222U;
    msg.system.assign("DCQDAIWMWUFJLUFYOTQIHDAJMTLRAECTYBBRMEIQRNHAKPFLKCMUWRAHLQMCXJKDQGTFLSEEFUYXTVPEKGANSYABNSFPVGBWOTSQPGHHOVADWHXIOZPCGOLJYSKXDEFLCBZOMIZSHXRKGJBCHWQUPGNVQIPFAOUSRTPQJKOEBRQKUMRSCLZEOIUGWIYVWUXHNGKL");
    msg.range = 0.333945688022;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 20U;
    tmp_msg_0.mnames.assign("JLPKISDFJAEBLFPMYOCTAHQCSGFPNIGDGUZTUPIHUTFTWAEJYHOZRSVIAQIJQYFXQRMFMLMNPAHEMMLKNMLBWV");
    tmp_msg_0.ecount = 235U;
    tmp_msg_0.enames.assign("XVEUXZNRMYUXPKIHORWUHXGOZHQNRJBYICHSDPMRNZFDGSGXODNJVGBHBZCZTXYOYQUWJDNQFPAXVDBMVKKFVOZPVHUAVLGLMGFIEMGKZBANLCDUENXTITEEABFRTKGMKSQTDEOJZICOJWBWEPMQBMUWAYHLEVFRCRSZPYSRQOYTGPNXRJEWTUIQDLFLIBMGHJYMFKSOUQLYKRPENAZUASAPIBOHCDLXCVCJQKPSWATLIQC");
    tmp_msg_0.ccount = 20U;
    tmp_msg_0.cnames.assign("DQWOWYRFHPOPIEIMNQSETFFPFEVEQBWLZINELWFGTKENHJZGXIDPTTGYVTASHEUQRVVJMOANYJORIOLWUNBHAHUOSZNGXYLKKUFNHWRKLIOEBZHUTGBBTFHQEOJKMAFSYLXTHKDCBSI");
    tmp_msg_0.last_error.assign("DMALPDSXBBFTPJVOJILQMZCVQBRWHFOVYAGUCMEUWLBKTFIMYEQOYYMFWNDHKBRIGZSCUZDGLNQUYZATBIWVEXRAEPGYCLEZNHFKQBQAZZRJTXAMKZNHSPDBDOGWXEWEUJVCURYYRJTJTSPIGLFGIVXCWORLMEJFVDXIR");
    tmp_msg_0.last_error_time = 0.49688766253;
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
    msg.setTimeStamp(0.576054879332);
    msg.setSource(52111U);
    msg.setSourceEntity(13U);
    msg.setDestination(14505U);
    msg.setDestinationEntity(31U);
    msg.op = 41U;
    msg.system.assign("SMLJJLNDUSZPHZPODQVUEDIFEPFUMHUFDCXTMJVLKKZWOGTNCFPQDQRXMAGYCWBSIORVQYZKEWNSRLUTUXCOSCBVQCCHAIRLRZABZSJWAKTVBQYPGNIOATIWIJRTAAWJRBJNUMXNXXWJYTOTOZYDLENFNZRFFCZY");
    msg.range = 0.888847309362;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 7U;
    tmp_msg_0.error.assign("FTXJGRHKMWJUOFZNMJCZVSGFZFPDOZYLSLLOAHBPEZYNVMMNVZOAEFSVCLIUDKDTNIPEUEZGJABNHJBWYJCIVXTARKXBHCCUSTGMPYJQRKIHSNPMQMXGKHTXOCJTQIAYLKUQG");
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
    msg.setTimeStamp(0.655228833436);
    msg.setSource(64599U);
    msg.setSourceEntity(16U);
    msg.setDestination(30549U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.674708031936);
    msg.setSource(40956U);
    msg.setSourceEntity(125U);
    msg.setDestination(63507U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.848634540347);
    msg.setSource(65015U);
    msg.setSourceEntity(60U);
    msg.setDestination(32322U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.165282164604);
    msg.setSource(28211U);
    msg.setSourceEntity(242U);
    msg.setDestination(37675U);
    msg.setDestinationEntity(214U);
    msg.list.assign("DORFOABXHGIGYIOJUHKKDREWRNNXLQZYTDRZAERWYEYZHSEXAPHFLVIYKMZNIPSQFFAUYWUBMQNPCGDGWHVOEERPOEDJVVNOUXIOUZWYCDBVLLPKHLUYQIHWLDWUJPJQFNNJLHMSXBVKSAGAWPZTCLKINQKBSZFYRFMMCBOXGWMETLQLZADTJJNBQTZTFU");

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
    msg.setTimeStamp(0.298788862794);
    msg.setSource(6850U);
    msg.setSourceEntity(250U);
    msg.setDestination(40636U);
    msg.setDestinationEntity(213U);
    msg.list.assign("NHGYKEBSIDAMJPPWRKKLEFQJQVEPMAZULVUDCGVYUCTAIKCNGYAPCXAQHSQUWXTNTGQZQYWCPWYSNL");

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
    msg.setTimeStamp(0.17747308106);
    msg.setSource(4044U);
    msg.setSourceEntity(10U);
    msg.setDestination(64347U);
    msg.setDestinationEntity(174U);
    msg.list.assign("XGYVJSZXOBSLINWBTOMQOJLGHWPSQUNWVQJFWUYRHXOLJWDZKIHXWBPVLNHFUDDTMBEYTYKKRWMRKXYKNQUDVJULMFCPRNEYQEVMZDQAKZEIFZOWBMCAUOCRBWYWHXCDKTRHDZTAAGMYUSHSSXACDIGZCQBORFFKRMAKOQJCOTGJZ");

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
    msg.setTimeStamp(0.179374998841);
    msg.setSource(25272U);
    msg.setSourceEntity(68U);
    msg.setDestination(58423U);
    msg.setDestinationEntity(123U);
    msg.value = -7810;

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
    msg.setTimeStamp(0.140379853012);
    msg.setSource(40663U);
    msg.setSourceEntity(190U);
    msg.setDestination(17274U);
    msg.setDestinationEntity(152U);
    msg.value = -31552;

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
    msg.setTimeStamp(0.4026736346);
    msg.setSource(63324U);
    msg.setSourceEntity(8U);
    msg.setDestination(5960U);
    msg.setDestinationEntity(181U);
    msg.value = 22438;

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
    msg.setTimeStamp(0.771799644855);
    msg.setSource(33842U);
    msg.setSourceEntity(213U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(0U);
    msg.value = 0.647823476309;

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
    msg.setTimeStamp(0.806006678482);
    msg.setSource(41322U);
    msg.setSourceEntity(33U);
    msg.setDestination(21422U);
    msg.setDestinationEntity(54U);
    msg.value = 0.292358007027;

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
    msg.setTimeStamp(0.538923963214);
    msg.setSource(49704U);
    msg.setSourceEntity(104U);
    msg.setDestination(22382U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0618409005959;

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
    msg.setTimeStamp(0.56698624609);
    msg.setSource(30750U);
    msg.setSourceEntity(105U);
    msg.setDestination(15017U);
    msg.setDestinationEntity(179U);
    msg.value = 0.0363420354862;

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
    msg.setTimeStamp(0.323604578562);
    msg.setSource(21032U);
    msg.setSourceEntity(130U);
    msg.setDestination(1034U);
    msg.setDestinationEntity(139U);
    msg.value = 0.803414166919;

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
    msg.setTimeStamp(0.41148588063);
    msg.setSource(61494U);
    msg.setSourceEntity(181U);
    msg.setDestination(3747U);
    msg.setDestinationEntity(151U);
    msg.value = 0.64830059638;

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
    msg.setTimeStamp(0.916997080658);
    msg.setSource(50988U);
    msg.setSourceEntity(127U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(147U);
    msg.validity = 10164U;
    msg.type = 197U;
    msg.utc_year = 48427U;
    msg.utc_month = 142U;
    msg.utc_day = 165U;
    msg.utc_time = 0.825994818803;
    msg.lat = 0.643501184921;
    msg.lon = 0.297774528127;
    msg.height = 0.373170403698;
    msg.satellites = 187U;
    msg.cog = 0.187139851379;
    msg.sog = 0.1556738118;
    msg.hdop = 0.129278940328;
    msg.vdop = 0.2408696461;
    msg.hacc = 0.361298810124;
    msg.vacc = 0.662157502791;

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
    msg.setTimeStamp(0.273987928247);
    msg.setSource(21705U);
    msg.setSourceEntity(129U);
    msg.setDestination(16518U);
    msg.setDestinationEntity(234U);
    msg.validity = 38155U;
    msg.type = 180U;
    msg.utc_year = 15379U;
    msg.utc_month = 254U;
    msg.utc_day = 50U;
    msg.utc_time = 0.849133337036;
    msg.lat = 0.222360637639;
    msg.lon = 0.0210885041182;
    msg.height = 0.0942583981145;
    msg.satellites = 185U;
    msg.cog = 0.10522080097;
    msg.sog = 0.113130612201;
    msg.hdop = 0.402635898138;
    msg.vdop = 0.797108863987;
    msg.hacc = 0.829924391899;
    msg.vacc = 0.73886982587;

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
    msg.setTimeStamp(0.170008163646);
    msg.setSource(54803U);
    msg.setSourceEntity(229U);
    msg.setDestination(59458U);
    msg.setDestinationEntity(250U);
    msg.validity = 8443U;
    msg.type = 193U;
    msg.utc_year = 39747U;
    msg.utc_month = 167U;
    msg.utc_day = 14U;
    msg.utc_time = 0.635186717115;
    msg.lat = 0.71619870388;
    msg.lon = 0.871137574592;
    msg.height = 0.265961241067;
    msg.satellites = 164U;
    msg.cog = 0.654568114496;
    msg.sog = 0.854521135052;
    msg.hdop = 0.713624896374;
    msg.vdop = 0.275344785993;
    msg.hacc = 0.441018929045;
    msg.vacc = 0.904126459318;

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
    msg.setTimeStamp(0.990423048167);
    msg.setSource(56077U);
    msg.setSourceEntity(64U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(170U);
    msg.time = 0.479977023438;
    msg.phi = 0.669950203712;
    msg.theta = 0.503928129437;
    msg.psi = 0.923439022092;
    msg.psi_magnetic = 0.809388732142;

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
    msg.setTimeStamp(0.122548072525);
    msg.setSource(23253U);
    msg.setSourceEntity(223U);
    msg.setDestination(41091U);
    msg.setDestinationEntity(23U);
    msg.time = 0.324153717294;
    msg.phi = 0.358204100766;
    msg.theta = 0.192870685906;
    msg.psi = 0.822560593854;
    msg.psi_magnetic = 0.415425219792;

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
    msg.setTimeStamp(0.64576188295);
    msg.setSource(53833U);
    msg.setSourceEntity(78U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(172U);
    msg.time = 0.558219197444;
    msg.phi = 0.453293399499;
    msg.theta = 0.632985619634;
    msg.psi = 0.510690768262;
    msg.psi_magnetic = 0.841766913931;

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
    msg.setTimeStamp(0.568545359323);
    msg.setSource(20691U);
    msg.setSourceEntity(180U);
    msg.setDestination(40434U);
    msg.setDestinationEntity(141U);
    msg.time = 0.194064707402;
    msg.x = 0.818088957864;
    msg.y = 0.5760471617;
    msg.z = 0.764784657078;
    msg.timestep = 0.501514420625;

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
    msg.setTimeStamp(0.589760263243);
    msg.setSource(6007U);
    msg.setSourceEntity(29U);
    msg.setDestination(11518U);
    msg.setDestinationEntity(244U);
    msg.time = 0.893607775216;
    msg.x = 0.216048244572;
    msg.y = 0.697900505819;
    msg.z = 0.761508482693;
    msg.timestep = 0.977179014304;

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
    msg.setTimeStamp(0.566418636344);
    msg.setSource(44057U);
    msg.setSourceEntity(111U);
    msg.setDestination(11302U);
    msg.setDestinationEntity(73U);
    msg.time = 0.00241290404333;
    msg.x = 0.0260550882754;
    msg.y = 0.467565661702;
    msg.z = 0.0674060782756;
    msg.timestep = 0.6021357774;

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
    msg.setTimeStamp(0.487597084043);
    msg.setSource(64692U);
    msg.setSourceEntity(197U);
    msg.setDestination(26651U);
    msg.setDestinationEntity(89U);
    msg.time = 0.250159418626;
    msg.x = 0.150727450136;
    msg.y = 0.143175522232;
    msg.z = 0.146413188989;

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
    msg.setTimeStamp(0.114892034825);
    msg.setSource(56376U);
    msg.setSourceEntity(3U);
    msg.setDestination(54178U);
    msg.setDestinationEntity(230U);
    msg.time = 0.937459148675;
    msg.x = 0.984373952349;
    msg.y = 0.391921426734;
    msg.z = 0.621866040009;

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
    msg.setTimeStamp(0.0957095109916);
    msg.setSource(46820U);
    msg.setSourceEntity(31U);
    msg.setDestination(43719U);
    msg.setDestinationEntity(78U);
    msg.time = 0.509679722919;
    msg.x = 0.962145123826;
    msg.y = 0.428284772899;
    msg.z = 0.550769305687;

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
    msg.setTimeStamp(0.91217651466);
    msg.setSource(30154U);
    msg.setSourceEntity(114U);
    msg.setDestination(35447U);
    msg.setDestinationEntity(31U);
    msg.time = 0.731793826219;
    msg.x = 0.840366290023;
    msg.y = 0.107155229861;
    msg.z = 0.407478554157;

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
    msg.setTimeStamp(0.424473950443);
    msg.setSource(1214U);
    msg.setSourceEntity(89U);
    msg.setDestination(35591U);
    msg.setDestinationEntity(119U);
    msg.time = 0.156090028604;
    msg.x = 0.855023679857;
    msg.y = 0.902306106619;
    msg.z = 0.87134999054;

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
    msg.setTimeStamp(0.714386093025);
    msg.setSource(61000U);
    msg.setSourceEntity(151U);
    msg.setDestination(2867U);
    msg.setDestinationEntity(226U);
    msg.time = 0.118395844028;
    msg.x = 0.176835839294;
    msg.y = 0.964662778424;
    msg.z = 0.0809857521882;

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
    msg.setTimeStamp(0.115454717042);
    msg.setSource(2589U);
    msg.setSourceEntity(224U);
    msg.setDestination(24959U);
    msg.setDestinationEntity(230U);
    msg.time = 0.810662130308;
    msg.x = 0.129002409974;
    msg.y = 0.5240025667;
    msg.z = 0.280612265529;

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
    msg.setTimeStamp(0.147215144711);
    msg.setSource(5446U);
    msg.setSourceEntity(67U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(9U);
    msg.time = 0.356297837073;
    msg.x = 0.100938719937;
    msg.y = 0.623284423048;
    msg.z = 0.672484765247;

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
    msg.setTimeStamp(0.190207235833);
    msg.setSource(20855U);
    msg.setSourceEntity(158U);
    msg.setDestination(65310U);
    msg.setDestinationEntity(185U);
    msg.time = 0.207348584364;
    msg.x = 0.808305074654;
    msg.y = 0.0941629998757;
    msg.z = 0.933606460879;

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
    msg.setTimeStamp(0.257164682117);
    msg.setSource(58127U);
    msg.setSourceEntity(133U);
    msg.setDestination(6755U);
    msg.setDestinationEntity(218U);
    msg.validity = 156U;
    msg.x = 0.781856889856;
    msg.y = 0.554437073776;
    msg.z = 0.751963107365;

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
    msg.setTimeStamp(0.0513932092943);
    msg.setSource(59261U);
    msg.setSourceEntity(100U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(207U);
    msg.validity = 113U;
    msg.x = 0.594105655384;
    msg.y = 0.143925216008;
    msg.z = 0.956062488183;

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
    msg.setTimeStamp(0.954240869376);
    msg.setSource(15591U);
    msg.setSourceEntity(25U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(94U);
    msg.validity = 141U;
    msg.x = 0.617353190516;
    msg.y = 0.631290066503;
    msg.z = 0.457251966413;

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
    msg.setTimeStamp(0.772665470688);
    msg.setSource(47802U);
    msg.setSourceEntity(26U);
    msg.setDestination(30365U);
    msg.setDestinationEntity(42U);
    msg.validity = 140U;
    msg.x = 0.31082373135;
    msg.y = 0.441633505573;
    msg.z = 0.641615147718;

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
    msg.setTimeStamp(0.126033348763);
    msg.setSource(64243U);
    msg.setSourceEntity(59U);
    msg.setDestination(40244U);
    msg.setDestinationEntity(185U);
    msg.validity = 247U;
    msg.x = 0.244404552289;
    msg.y = 0.529850615619;
    msg.z = 0.319662758492;

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
    msg.setTimeStamp(0.0209483814531);
    msg.setSource(18187U);
    msg.setSourceEntity(132U);
    msg.setDestination(41770U);
    msg.setDestinationEntity(28U);
    msg.validity = 235U;
    msg.x = 0.992461540574;
    msg.y = 0.3393008677;
    msg.z = 0.868776579245;

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
    msg.setTimeStamp(0.193103414485);
    msg.setSource(46824U);
    msg.setSourceEntity(175U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(155U);
    msg.time = 0.59221981991;
    msg.x = 0.00676859482132;
    msg.y = 0.110023297817;
    msg.z = 0.886012210603;

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
    msg.setTimeStamp(0.9878422752);
    msg.setSource(3027U);
    msg.setSourceEntity(25U);
    msg.setDestination(27796U);
    msg.setDestinationEntity(154U);
    msg.time = 0.814037896399;
    msg.x = 0.537495692674;
    msg.y = 0.45681514178;
    msg.z = 0.787299505718;

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
    msg.setTimeStamp(0.0283479764764);
    msg.setSource(54169U);
    msg.setSourceEntity(119U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(10U);
    msg.time = 0.0818732577659;
    msg.x = 0.969549739175;
    msg.y = 0.519045020483;
    msg.z = 0.0276132896888;

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
    msg.setTimeStamp(0.113318185202);
    msg.setSource(54031U);
    msg.setSourceEntity(1U);
    msg.setDestination(57115U);
    msg.setDestinationEntity(211U);
    msg.validity = 54U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.439095919836;
    tmp_msg_0.y = 0.904990361012;
    tmp_msg_0.z = 0.237906883528;
    tmp_msg_0.phi = 0.877906180116;
    tmp_msg_0.theta = 0.742229338201;
    tmp_msg_0.psi = 0.795057979661;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.686518760937;
    tmp_msg_1.beam_height = 0.250196051924;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.98563945333;

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
    msg.setTimeStamp(0.204005999493);
    msg.setSource(13572U);
    msg.setSourceEntity(7U);
    msg.setDestination(26004U);
    msg.setDestinationEntity(176U);
    msg.validity = 57U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.207260998153;
    tmp_msg_0.y = 0.509882636653;
    tmp_msg_0.z = 0.0678304252711;
    tmp_msg_0.phi = 0.110880444727;
    tmp_msg_0.theta = 0.5392076758;
    tmp_msg_0.psi = 0.431956026004;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.344500736043;
    tmp_msg_1.beam_height = 0.939111266133;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.459119088703;

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
    msg.setTimeStamp(0.190807768002);
    msg.setSource(59067U);
    msg.setSourceEntity(143U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(21U);
    msg.validity = 141U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.725296163191;
    tmp_msg_0.beam_height = 0.389223301093;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.734062827548;

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
    msg.setTimeStamp(0.481853809564);
    msg.setSource(18755U);
    msg.setSourceEntity(201U);
    msg.setDestination(46062U);
    msg.setDestinationEntity(94U);
    msg.value = 0.469139004387;

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
    msg.setTimeStamp(0.895510235409);
    msg.setSource(54764U);
    msg.setSourceEntity(17U);
    msg.setDestination(35176U);
    msg.setDestinationEntity(199U);
    msg.value = 0.383668055067;

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
    msg.setTimeStamp(0.93148061942);
    msg.setSource(5180U);
    msg.setSourceEntity(89U);
    msg.setDestination(29682U);
    msg.setDestinationEntity(214U);
    msg.value = 0.124737080507;

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
    msg.setTimeStamp(0.899611343338);
    msg.setSource(18855U);
    msg.setSourceEntity(47U);
    msg.setDestination(2631U);
    msg.setDestinationEntity(2U);
    msg.value = 0.476420473175;

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
    msg.setTimeStamp(0.957896702017);
    msg.setSource(40463U);
    msg.setSourceEntity(224U);
    msg.setDestination(52933U);
    msg.setDestinationEntity(32U);
    msg.value = 0.68891641952;

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
    msg.setTimeStamp(0.484132425923);
    msg.setSource(11669U);
    msg.setSourceEntity(142U);
    msg.setDestination(10622U);
    msg.setDestinationEntity(15U);
    msg.value = 0.283470641061;

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
    msg.setTimeStamp(0.562475686636);
    msg.setSource(56230U);
    msg.setSourceEntity(35U);
    msg.setDestination(27076U);
    msg.setDestinationEntity(46U);
    msg.value = 0.683514758147;

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
    msg.setTimeStamp(0.872415917708);
    msg.setSource(29866U);
    msg.setSourceEntity(58U);
    msg.setDestination(31367U);
    msg.setDestinationEntity(243U);
    msg.value = 0.51611097856;

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
    msg.setTimeStamp(0.391882560736);
    msg.setSource(43669U);
    msg.setSourceEntity(191U);
    msg.setDestination(7727U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0323121872396;

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
    msg.setTimeStamp(0.4650748206);
    msg.setSource(64232U);
    msg.setSourceEntity(196U);
    msg.setDestination(32422U);
    msg.setDestinationEntity(244U);
    msg.value = 0.319760487054;

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
    msg.setTimeStamp(0.202889352155);
    msg.setSource(2652U);
    msg.setSourceEntity(237U);
    msg.setDestination(8144U);
    msg.setDestinationEntity(160U);
    msg.value = 0.836597435487;

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
    msg.setTimeStamp(0.916768628679);
    msg.setSource(42028U);
    msg.setSourceEntity(69U);
    msg.setDestination(57707U);
    msg.setDestinationEntity(13U);
    msg.value = 0.110284934316;

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
    msg.setTimeStamp(0.590346964797);
    msg.setSource(52656U);
    msg.setSourceEntity(242U);
    msg.setDestination(45625U);
    msg.setDestinationEntity(114U);
    msg.value = 0.86847706154;

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
    msg.setTimeStamp(0.674512701099);
    msg.setSource(32098U);
    msg.setSourceEntity(180U);
    msg.setDestination(40435U);
    msg.setDestinationEntity(122U);
    msg.value = 0.000504149394915;

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
    msg.setTimeStamp(0.500315645717);
    msg.setSource(46289U);
    msg.setSourceEntity(22U);
    msg.setDestination(47745U);
    msg.setDestinationEntity(86U);
    msg.value = 0.827072477054;

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
    msg.setTimeStamp(0.483307550674);
    msg.setSource(59817U);
    msg.setSourceEntity(66U);
    msg.setDestination(3933U);
    msg.setDestinationEntity(154U);
    msg.value = 0.746799056453;

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
    msg.setTimeStamp(0.810702559456);
    msg.setSource(35333U);
    msg.setSourceEntity(115U);
    msg.setDestination(53266U);
    msg.setDestinationEntity(145U);
    msg.value = 0.471194228846;

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
    msg.setTimeStamp(0.61052631145);
    msg.setSource(11502U);
    msg.setSourceEntity(52U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(125U);
    msg.value = 0.298729584569;

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
    msg.setTimeStamp(0.796334308038);
    msg.setSource(39469U);
    msg.setSourceEntity(176U);
    msg.setDestination(20459U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0741353754986;

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
    msg.setTimeStamp(0.618809361904);
    msg.setSource(35263U);
    msg.setSourceEntity(249U);
    msg.setDestination(59280U);
    msg.setDestinationEntity(124U);
    msg.value = 0.928053065461;

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
    msg.setTimeStamp(0.707962717638);
    msg.setSource(48496U);
    msg.setSourceEntity(26U);
    msg.setDestination(13261U);
    msg.setDestinationEntity(29U);
    msg.value = 0.961535954317;

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
    msg.setTimeStamp(0.125910034046);
    msg.setSource(14499U);
    msg.setSourceEntity(192U);
    msg.setDestination(53691U);
    msg.setDestinationEntity(178U);
    msg.value = 0.104817861967;

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
    msg.setTimeStamp(0.698139214914);
    msg.setSource(47349U);
    msg.setSourceEntity(90U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(252U);
    msg.value = 0.993582346695;

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
    msg.setTimeStamp(0.206502604017);
    msg.setSource(58438U);
    msg.setSourceEntity(246U);
    msg.setDestination(39455U);
    msg.setDestinationEntity(219U);
    msg.value = 0.0622951245016;

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
    msg.setTimeStamp(0.00132297451396);
    msg.setSource(3037U);
    msg.setSourceEntity(67U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(52U);
    msg.direction = 0.662774175428;
    msg.speed = 0.453883823657;
    msg.turbulence = 0.105091696809;

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
    msg.setTimeStamp(0.436547738975);
    msg.setSource(17831U);
    msg.setSourceEntity(40U);
    msg.setDestination(35822U);
    msg.setDestinationEntity(1U);
    msg.direction = 0.220621248248;
    msg.speed = 0.354153574451;
    msg.turbulence = 0.131898746491;

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
    msg.setTimeStamp(0.97388817014);
    msg.setSource(48943U);
    msg.setSourceEntity(125U);
    msg.setDestination(29514U);
    msg.setDestinationEntity(248U);
    msg.direction = 0.433364171836;
    msg.speed = 0.189817147601;
    msg.turbulence = 0.812302830274;

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
    msg.setTimeStamp(0.321710429931);
    msg.setSource(51953U);
    msg.setSourceEntity(157U);
    msg.setDestination(50854U);
    msg.setDestinationEntity(50U);
    msg.value = 0.0385097693264;

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
    msg.setTimeStamp(0.241270454167);
    msg.setSource(38394U);
    msg.setSourceEntity(249U);
    msg.setDestination(1691U);
    msg.setDestinationEntity(149U);
    msg.value = 0.583578220938;

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
    msg.setTimeStamp(0.502437997366);
    msg.setSource(60883U);
    msg.setSourceEntity(62U);
    msg.setDestination(35848U);
    msg.setDestinationEntity(163U);
    msg.value = 0.927197167946;

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
    msg.setTimeStamp(0.121134694258);
    msg.setSource(61362U);
    msg.setSourceEntity(160U);
    msg.setDestination(21629U);
    msg.setDestinationEntity(95U);
    msg.value.assign("VPWKGMTTAVAPXQTOURMNWIGALWIHLWXNYSEJONLDAPLUWBUBJYTVBSFVLDROXPLIMHXYSYXEUJFPZISVAVCAIGUEBQFEUAHFCAI");

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
    msg.setTimeStamp(0.468237021871);
    msg.setSource(40113U);
    msg.setSourceEntity(235U);
    msg.setDestination(7262U);
    msg.setDestinationEntity(1U);
    msg.value.assign("CGFBJDKCSMRLDOEUAGBVRPM");

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
    msg.setTimeStamp(0.909862568759);
    msg.setSource(14647U);
    msg.setSourceEntity(58U);
    msg.setDestination(19194U);
    msg.setDestinationEntity(241U);
    msg.value.assign("ZCXCSRIUAPQHIDRDTFNCEETCJVJFMAWYZKMFWCTOHGHLDUZYZXPNVRJBYBSATMMRVGSPUXKZXJOANIKQVSBXTKPAXMFNZZCZABTWPWQLWJJYCOVBMALELCDM");

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
    msg.setTimeStamp(0.690522269711);
    msg.setSource(5547U);
    msg.setSourceEntity(123U);
    msg.setDestination(20791U);
    msg.setDestinationEntity(66U);
    const char tmp_msg_0[] = {-87, 83, 17, -101, 79, 96, -118, -12, -13, 118, 82, -13, 26, -105, 119, -29, 75, 96, -53, 67, 47, -46, 126, 41, -111, 46, -103, -73, -128, 85, -26, -83, 21, -109, -78, -121, -114, 65, 66, 107, 89, -59, -54, -120, 105, 21, 22, 73, -102, -103, -85, -45, -96, 7, -4};
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
    msg.setTimeStamp(0.680392061621);
    msg.setSource(57936U);
    msg.setSourceEntity(160U);
    msg.setDestination(57980U);
    msg.setDestinationEntity(178U);
    const char tmp_msg_0[] = {77, -38, 17, 44, -44, 15, 10, -87, 24, -106, 11, 121, 106, -61, -90, -18, 75, 74, -65, -112, -32, -69, -59, 0, -35, 114, 90, -1, -115, 116, 3, -96, -105, 33, -40, -113, -97, -99, -44, 45, -122, 78, -24, 124, 16, -11, -109, -72, 96, -38, -31, -20, 10, -121, -108, 63, -78, 89, -37, 18, -45, -26, 89, -119, 34, 58, 30, 48, 119, 83, 95, 86, 47};
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
    msg.setTimeStamp(0.760268703059);
    msg.setSource(42170U);
    msg.setSourceEntity(24U);
    msg.setDestination(58373U);
    msg.setDestinationEntity(14U);
    const char tmp_msg_0[] = {-16, -98, -29, 122, 114, -58, 19, 91, -116, 96, 81, -76, -81, -94, -35, -33, -100, 60, 77, -71, -103, 81, 78, -105, -121, -78, -38, 11, -75, -108, -128, 109, 64, -75, 15, 80, 50, 12, 73, 58, -122, 70, 15, -6, 70, 90, -118, -106, -24, 72, -20, 84, 46, 21, -53, -63, -102, 35, 29, -104, -4, -59, 84, 56, -106, 17, -12, -33, 111, -48, -4, 96, -121, 111, -19, -21, -117, -40, 3, 38, -128, 100, 48, 15, 97, 42, -92, 2, -69, 85, -116, 0, 51, 107, 61, 9, 6, -72, -86, -60, 72, 31, -36, 104, 76, -42, 13, 3, 54, -118, 13, 94, -100, 117, 104, 14, -85, 107, 66, -100, 57, -9, 22, -50, -62, -59, 110, 34, 46, -89, 121, 123, -20, -22, 70, 46, -18, -91, -122, 98, 42, 19, 34, 47, 75, 106, -34, 70, 1, -15, -25, 92, -45, 69, -14, -99, 65, -81, -34, 92, 29, -27, -43, -26, 6, 58, -100, -5, -81, -86, 78, 76, -34, 31, 6, -122, 9, -121, 77, -117, -59, -25, 53, 88, -113, -53};
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
    msg.setTimeStamp(0.877430569897);
    msg.setSource(39050U);
    msg.setSourceEntity(182U);
    msg.setDestination(57017U);
    msg.setDestinationEntity(37U);
    msg.type = 71U;
    msg.frequency = 97835420U;
    msg.min_range = 32423U;
    msg.max_range = 58030U;
    msg.bits_per_point = 206U;
    msg.scale_factor = 0.711141409969;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.747044610765;
    tmp_msg_0.beam_height = 0.188715090307;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {12, 75, 114, -6, 49, -43, 126, 62, 2, -27, -108, -101, 51, -56, 92, -88, -10, 82, 99, -99, 45, -10, 19, 107, -122, 94, 103, 48, -4, -36, 48, 110, -48, -60, 27, -110, 101, -110, 39, -110, 68, -68, 61, -97, -62, 53, 89, -24, 104, -17, -18, 103, -105, -45, -25, -43, 80, 119, 22, 36, -117, -92, -114, 66, 1, 13, -42, 38, 94, -49, 1, -13, -65, -94, 113, 106, -93, -126, -22, -75, -89, 9, -10, 73, 109, -18, -75, 46, 83, 20, -119, 35, 33, -50, -52, -35, 63, -1, -124, 23, -22, -8, 109, 114, 22, 18, 115};
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
    msg.setTimeStamp(0.0888528514589);
    msg.setSource(52522U);
    msg.setSourceEntity(88U);
    msg.setDestination(5300U);
    msg.setDestinationEntity(212U);
    msg.type = 121U;
    msg.frequency = 2042590817U;
    msg.min_range = 33548U;
    msg.max_range = 59540U;
    msg.bits_per_point = 156U;
    msg.scale_factor = 0.486751957535;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.432092421795;
    tmp_msg_0.beam_height = 0.0764715270886;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-12, -5, -9, 68, 94, 7, -98, 111, -106, 30, 26, 87, -71, 74, 50, 102, 44, -84, 57, 29, -60, -16, 50, 79, 21, 58, -89, 75, 59, 44, -57, 9, 6, 84, -124, -48, -79, -111, -121, -86, 54, 14, -30, 26, -126, 54, 83, 72, 67, -10, 32, 3, -123, 94, -23, 49, -46, -26, 112, 98, 89, -121, 17, -5, 120, -99, -99, -74, -85, -38, -123, -99};
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
    msg.setTimeStamp(0.939027452981);
    msg.setSource(36325U);
    msg.setSourceEntity(81U);
    msg.setDestination(60686U);
    msg.setDestinationEntity(85U);
    msg.type = 96U;
    msg.frequency = 3657155302U;
    msg.min_range = 3188U;
    msg.max_range = 25736U;
    msg.bits_per_point = 52U;
    msg.scale_factor = 0.7868503288;
    const char tmp_msg_0[] = {35, 3, 62, 90, -56, -108, 75, -76, 33, 50, -87, -119, -32, 7, -58, 111, 44, -2, 119, 48, -41, 94, 69, -44};
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
    msg.setTimeStamp(0.487762771073);
    msg.setSource(56634U);
    msg.setSourceEntity(18U);
    msg.setDestination(42143U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.244936487893);
    msg.setSource(36460U);
    msg.setSourceEntity(245U);
    msg.setDestination(35933U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.254463150871);
    msg.setSource(52380U);
    msg.setSourceEntity(80U);
    msg.setDestination(7062U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.0880299045212);
    msg.setSource(45395U);
    msg.setSourceEntity(18U);
    msg.setDestination(32849U);
    msg.setDestinationEntity(7U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.320558501817);
    msg.setSource(12999U);
    msg.setSourceEntity(157U);
    msg.setDestination(62282U);
    msg.setDestinationEntity(126U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.116146086967);
    msg.setSource(43460U);
    msg.setSourceEntity(143U);
    msg.setDestination(4265U);
    msg.setDestinationEntity(60U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.976746302969);
    msg.setSource(11081U);
    msg.setSourceEntity(167U);
    msg.setDestination(5764U);
    msg.setDestinationEntity(222U);
    msg.value = 0.686125929731;
    msg.confidence = 0.49857666398;
    msg.opmodes.assign("BLVEQWPDGAAYPLMRTGLUNZVPTDRLSBZVYVOMFAOJCENEVGRNKICWRQHKBIOBMVSJEFOXGKYLNVDKDTDLJHNTOGDAEPNVCTGYTMIYTLHAJZBMGEPSXFWOCKUARJGWXJULWCMIYRJHNVAYXXWZIPDFFNHTUKWYZIECFJIAESBJVEBUGSPXIIHGTSSRWKFNZWIZMARBXMMQODPLUMQHCQPXZPHQEXUKUCYSZ");

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
    msg.setTimeStamp(0.477225036697);
    msg.setSource(14690U);
    msg.setSourceEntity(86U);
    msg.setDestination(58006U);
    msg.setDestinationEntity(216U);
    msg.value = 0.237484037599;
    msg.confidence = 0.345552323404;
    msg.opmodes.assign("EMVJTNPXCZJLDJUWASAPAOZUMISVLTVCXYJUSBCQTCCLTXGY");

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
    msg.setTimeStamp(0.0834627792191);
    msg.setSource(41655U);
    msg.setSourceEntity(59U);
    msg.setDestination(27049U);
    msg.setDestinationEntity(43U);
    msg.value = 0.25064123583;
    msg.confidence = 0.511626764385;
    msg.opmodes.assign("PGTNDTPILEADGEOVNMTVWEQBVKQDGMLLXUOZXSCCOLRCMCHFNKTUZYPBGTTCAUXVYTWJHMIFEIEBRSSLVWDPNHIHUAZLMGVRHGCAQDQYMGBFBHOTKHYTQPYTXEXRPEZZRXFHXYAUBKUOAEDAASJKENCQCPHHEIJKDMOUIYFNRJWYKNLSOMDNPOWOORJPRJJFGZVFXWDSYMJNFNIGXFZBJWGIUWQXJKURZKVWFBKLZACRU");

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
    msg.setTimeStamp(0.185442788555);
    msg.setSource(14773U);
    msg.setSourceEntity(139U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(194U);
    msg.itow = 10622538U;
    msg.lat = 0.521846762855;
    msg.lon = 0.265547382302;
    msg.height_ell = 0.829508042229;
    msg.height_sea = 0.507230857003;
    msg.hacc = 0.32936711038;
    msg.vacc = 0.73591596037;
    msg.vel_n = 0.0606028832868;
    msg.vel_e = 0.490816199607;
    msg.vel_d = 0.561296602538;
    msg.speed = 0.985962690447;
    msg.gspeed = 0.902505248087;
    msg.heading = 0.0241268123209;
    msg.sacc = 0.360258552162;
    msg.cacc = 0.953973232636;

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
    msg.setTimeStamp(0.314845895896);
    msg.setSource(22624U);
    msg.setSourceEntity(185U);
    msg.setDestination(25317U);
    msg.setDestinationEntity(167U);
    msg.itow = 2501514158U;
    msg.lat = 0.71900909446;
    msg.lon = 0.938226365688;
    msg.height_ell = 0.935776810104;
    msg.height_sea = 0.402781505076;
    msg.hacc = 0.926630047171;
    msg.vacc = 0.660821840532;
    msg.vel_n = 0.697434629299;
    msg.vel_e = 0.251693450994;
    msg.vel_d = 0.108744525981;
    msg.speed = 0.349213959981;
    msg.gspeed = 0.61099167888;
    msg.heading = 0.516810562481;
    msg.sacc = 0.716944272747;
    msg.cacc = 0.941105774534;

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
    msg.setTimeStamp(0.586735040003);
    msg.setSource(62804U);
    msg.setSourceEntity(131U);
    msg.setDestination(37361U);
    msg.setDestinationEntity(152U);
    msg.itow = 2509384784U;
    msg.lat = 0.847467651322;
    msg.lon = 0.690853530022;
    msg.height_ell = 0.100277375101;
    msg.height_sea = 0.422918276291;
    msg.hacc = 0.143142745555;
    msg.vacc = 0.833624631218;
    msg.vel_n = 0.777220317657;
    msg.vel_e = 0.524232043472;
    msg.vel_d = 0.567677683543;
    msg.speed = 0.275413575138;
    msg.gspeed = 0.315998114405;
    msg.heading = 0.152647839514;
    msg.sacc = 0.698100054519;
    msg.cacc = 0.895861390713;

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
    msg.setTimeStamp(0.718724850879);
    msg.setSource(41885U);
    msg.setSourceEntity(102U);
    msg.setDestination(32158U);
    msg.setDestinationEntity(50U);
    msg.id = 165U;
    msg.value = 0.0847883998197;

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
    msg.setTimeStamp(0.228651430872);
    msg.setSource(53198U);
    msg.setSourceEntity(236U);
    msg.setDestination(59876U);
    msg.setDestinationEntity(228U);
    msg.id = 10U;
    msg.value = 0.740130581134;

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
    msg.setTimeStamp(0.572289611521);
    msg.setSource(62344U);
    msg.setSourceEntity(125U);
    msg.setDestination(51363U);
    msg.setDestinationEntity(231U);
    msg.id = 59U;
    msg.value = 0.990301376812;

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
    msg.setTimeStamp(0.0267708249084);
    msg.setSource(47281U);
    msg.setSourceEntity(77U);
    msg.setDestination(2372U);
    msg.setDestinationEntity(61U);
    msg.x = 0.798390882778;
    msg.y = 0.521495754897;
    msg.z = 0.281218272496;
    msg.phi = 0.461483296322;
    msg.theta = 0.496302556457;
    msg.psi = 0.881280895038;

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
    msg.setTimeStamp(0.113997350745);
    msg.setSource(2450U);
    msg.setSourceEntity(143U);
    msg.setDestination(15284U);
    msg.setDestinationEntity(235U);
    msg.x = 0.778876953697;
    msg.y = 0.447301138599;
    msg.z = 0.633543014571;
    msg.phi = 0.0161965680584;
    msg.theta = 0.143252810159;
    msg.psi = 0.0593946990167;

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
    msg.setTimeStamp(0.157448443315);
    msg.setSource(50194U);
    msg.setSourceEntity(136U);
    msg.setDestination(64953U);
    msg.setDestinationEntity(236U);
    msg.x = 0.258822464776;
    msg.y = 0.0261873823489;
    msg.z = 0.534485157297;
    msg.phi = 0.238624143325;
    msg.theta = 0.280152769615;
    msg.psi = 0.204075853325;

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
    msg.setTimeStamp(0.356034006589);
    msg.setSource(64432U);
    msg.setSourceEntity(73U);
    msg.setDestination(35343U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.990500684848;
    msg.beam_height = 0.771089301754;

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
    msg.setTimeStamp(0.108920011855);
    msg.setSource(13185U);
    msg.setSourceEntity(45U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(41U);
    msg.beam_width = 0.877059360968;
    msg.beam_height = 0.288070121304;

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
    msg.setTimeStamp(0.091012287275);
    msg.setSource(6219U);
    msg.setSourceEntity(223U);
    msg.setDestination(61558U);
    msg.setDestinationEntity(42U);
    msg.beam_width = 0.997806671517;
    msg.beam_height = 0.419711285823;

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
    msg.setTimeStamp(0.848432871776);
    msg.setSource(37120U);
    msg.setSourceEntity(241U);
    msg.setDestination(64558U);
    msg.setDestinationEntity(62U);
    msg.sane = 98U;

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
    msg.setTimeStamp(0.251819932139);
    msg.setSource(19547U);
    msg.setSourceEntity(232U);
    msg.setDestination(47318U);
    msg.setDestinationEntity(113U);
    msg.sane = 31U;

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
    msg.setTimeStamp(0.00339769623567);
    msg.setSource(45890U);
    msg.setSourceEntity(216U);
    msg.setDestination(4U);
    msg.setDestinationEntity(29U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.0600700118946);
    msg.setSource(2920U);
    msg.setSourceEntity(14U);
    msg.setDestination(2515U);
    msg.setDestinationEntity(10U);
    msg.value = 0.751482499255;

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
    msg.setTimeStamp(0.614981783597);
    msg.setSource(58914U);
    msg.setSourceEntity(138U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(27U);
    msg.value = 0.468462209862;

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
    msg.setTimeStamp(0.747268931943);
    msg.setSource(50744U);
    msg.setSourceEntity(95U);
    msg.setDestination(9504U);
    msg.setDestinationEntity(87U);
    msg.value = 0.334385265726;

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
    msg.setTimeStamp(0.551087742197);
    msg.setSource(61714U);
    msg.setSourceEntity(46U);
    msg.setDestination(21076U);
    msg.setDestinationEntity(20U);
    msg.value = 0.718790316964;

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
    msg.setTimeStamp(0.610661400163);
    msg.setSource(42409U);
    msg.setSourceEntity(23U);
    msg.setDestination(46436U);
    msg.setDestinationEntity(139U);
    msg.value = 0.63261356605;

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
    msg.setTimeStamp(0.0404918369847);
    msg.setSource(58790U);
    msg.setSourceEntity(223U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(71U);
    msg.value = 0.7687616843;

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
    msg.setTimeStamp(0.133900769442);
    msg.setSource(63621U);
    msg.setSourceEntity(145U);
    msg.setDestination(63284U);
    msg.setDestinationEntity(209U);
    msg.value = 0.865226933739;

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
    msg.setTimeStamp(0.874684930383);
    msg.setSource(2010U);
    msg.setSourceEntity(129U);
    msg.setDestination(6547U);
    msg.setDestinationEntity(207U);
    msg.value = 0.325558541669;

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
    msg.setTimeStamp(0.294771238506);
    msg.setSource(17903U);
    msg.setSourceEntity(21U);
    msg.setDestination(9851U);
    msg.setDestinationEntity(197U);
    msg.value = 0.418340782116;

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
    msg.setTimeStamp(0.249849425702);
    msg.setSource(38246U);
    msg.setSourceEntity(119U);
    msg.setDestination(13370U);
    msg.setDestinationEntity(181U);
    msg.id = 117U;
    msg.zoom = 22U;
    msg.action = 44U;

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
    msg.setTimeStamp(0.62516150435);
    msg.setSource(34311U);
    msg.setSourceEntity(177U);
    msg.setDestination(55032U);
    msg.setDestinationEntity(53U);
    msg.id = 151U;
    msg.zoom = 0U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.929724824803);
    msg.setSource(14005U);
    msg.setSourceEntity(193U);
    msg.setDestination(18640U);
    msg.setDestinationEntity(46U);
    msg.id = 39U;
    msg.zoom = 159U;
    msg.action = 248U;

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
    msg.setTimeStamp(0.0342971666256);
    msg.setSource(23882U);
    msg.setSourceEntity(78U);
    msg.setDestination(47117U);
    msg.setDestinationEntity(46U);
    msg.id = 250U;
    msg.value = 0.771119164353;

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
    msg.setTimeStamp(0.190121351556);
    msg.setSource(15412U);
    msg.setSourceEntity(159U);
    msg.setDestination(6285U);
    msg.setDestinationEntity(83U);
    msg.id = 134U;
    msg.value = 0.217071265572;

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
    msg.setTimeStamp(0.444376371498);
    msg.setSource(50913U);
    msg.setSourceEntity(188U);
    msg.setDestination(54833U);
    msg.setDestinationEntity(18U);
    msg.id = 23U;
    msg.value = 0.681778609846;

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
    msg.setTimeStamp(0.894734158507);
    msg.setSource(20720U);
    msg.setSourceEntity(126U);
    msg.setDestination(3043U);
    msg.setDestinationEntity(248U);
    msg.id = 91U;
    msg.value = 0.174357926012;

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
    msg.setTimeStamp(0.242594295895);
    msg.setSource(23946U);
    msg.setSourceEntity(157U);
    msg.setDestination(28918U);
    msg.setDestinationEntity(190U);
    msg.id = 106U;
    msg.value = 0.074459246221;

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
    msg.setTimeStamp(0.952906406255);
    msg.setSource(56538U);
    msg.setSourceEntity(195U);
    msg.setDestination(10889U);
    msg.setDestinationEntity(46U);
    msg.id = 254U;
    msg.value = 0.48603973053;

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
    msg.setTimeStamp(0.648510209459);
    msg.setSource(47223U);
    msg.setSourceEntity(39U);
    msg.setDestination(13353U);
    msg.setDestinationEntity(189U);
    msg.id = 241U;
    msg.angle = 0.204290722295;

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
    msg.setTimeStamp(0.143203167803);
    msg.setSource(49997U);
    msg.setSourceEntity(167U);
    msg.setDestination(38221U);
    msg.setDestinationEntity(158U);
    msg.id = 126U;
    msg.angle = 0.886344249528;

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
    msg.setTimeStamp(0.761445069223);
    msg.setSource(14461U);
    msg.setSourceEntity(95U);
    msg.setDestination(34254U);
    msg.setDestinationEntity(110U);
    msg.id = 81U;
    msg.angle = 0.19904078946;

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
    msg.setTimeStamp(0.989655266759);
    msg.setSource(43593U);
    msg.setSourceEntity(79U);
    msg.setDestination(41260U);
    msg.setDestinationEntity(99U);
    msg.op = 96U;
    msg.actions.assign("KSRYAEJWOVVMUGXKZZAMDOHKWVPYADKLONSLTSOSFPQVABEIQFWCRHXJSXBYEDWZUFUWFGDUPYSJDGBFNQMKAYQZYWYQLRNDXHBTAPJAL");

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
    msg.setTimeStamp(0.0894914165894);
    msg.setSource(52583U);
    msg.setSourceEntity(35U);
    msg.setDestination(26516U);
    msg.setDestinationEntity(129U);
    msg.op = 19U;
    msg.actions.assign("ILBKWUOJDTEZXKPMUGUSCTEGGBMPUJOYEVSSFDANTELISPQRGCWILXZJAAIWVROYWCUXWVZQAMVOUXNICVHUAPWNXGL");

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
    msg.setTimeStamp(0.482857080269);
    msg.setSource(59876U);
    msg.setSourceEntity(14U);
    msg.setDestination(44709U);
    msg.setDestinationEntity(182U);
    msg.op = 6U;
    msg.actions.assign("HCHRGADNXQCWIPVQYOUSDQJKRGBWWBCVREYFHTSER");

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
    msg.setTimeStamp(0.552325862598);
    msg.setSource(56999U);
    msg.setSourceEntity(169U);
    msg.setDestination(29785U);
    msg.setDestinationEntity(202U);
    msg.actions.assign("DCUHLGFAHHTUEMFSPWWIVEOWZGRKSKOCWTXDXTBZTGMGLQQJRRF");

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
    msg.setTimeStamp(0.211064289563);
    msg.setSource(65490U);
    msg.setSourceEntity(150U);
    msg.setDestination(65301U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("SDNVPQZLPAKIXLGJMLDGGTXQSOBWIINGQKJQXADBBOROJNXZZCXMXDTMVYCOYSARPCFKSGDNBDYXAORUVXOKWNTHKHJSENBWWRLVLEHAOCOCDPMVGOYPCJJAGXICHWRFXQWSZZQMQTWBVUUENQZFEFDBULHGJMRLPEHYEAFUAPVBPYFSCUHMKKIGAI");

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
    msg.setTimeStamp(0.79957584302);
    msg.setSource(55600U);
    msg.setSourceEntity(86U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(249U);
    msg.actions.assign("VQKLJHVKVZEJQGDQVWFMBQRUDDUBKNBKGXVSUSIOZNSKVUNTZDOHRRYOGJISRAYGLOIGIPLTBSZCUZAMYAMTENKTEJHRAIQTPTXFACMCLFLPIUDXFEDVHRM");

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
    msg.setTimeStamp(0.179057208663);
    msg.setSource(47341U);
    msg.setSourceEntity(194U);
    msg.setDestination(25549U);
    msg.setDestinationEntity(147U);
    msg.button = 35U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.339322642346);
    msg.setSource(31858U);
    msg.setSourceEntity(220U);
    msg.setDestination(58497U);
    msg.setDestinationEntity(178U);
    msg.button = 126U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.354233290964);
    msg.setSource(31834U);
    msg.setSourceEntity(66U);
    msg.setDestination(2994U);
    msg.setDestinationEntity(229U);
    msg.button = 100U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.599484924084);
    msg.setSource(33843U);
    msg.setSourceEntity(82U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(143U);
    msg.op = 205U;
    msg.text.assign("YMRFHUCVXSRERECBTLOJMADOZKLSAQIRBWDRJIGAGNUIOFSBCPLODHMTJHKQMXQJQTJYKUKJQPWTOSOYRXLYUIYIEPKVGUQYVFXBDQHRZVHXDAOKCMTCDEQZTYUIVBTRWAEYMLBIKENCGZHFYXLXNNFLPDPGZWZUGKZUXAIWATKJFEWB");

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
    msg.setTimeStamp(0.70655855963);
    msg.setSource(48695U);
    msg.setSourceEntity(38U);
    msg.setDestination(24160U);
    msg.setDestinationEntity(247U);
    msg.op = 254U;
    msg.text.assign("TMBDPYVZBOAFGMJXIQHMTEJEHWLKFAVMLVQTKZIOSEVGCKDNZSWFRVMIZOERLISBTCBWASIWDBCINBQI");

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
    msg.setTimeStamp(0.928165105413);
    msg.setSource(15768U);
    msg.setSourceEntity(51U);
    msg.setDestination(53945U);
    msg.setDestinationEntity(21U);
    msg.op = 236U;
    msg.text.assign("IQXIGBFOPXUDJNMHEXWLPBEFCJVBGRSPZFMMWMWHQJIXUKFNPAZFGSCCJATRRNRCTYNPAUSDOORYKGTQRLLWDOHLWIYXPZLKTFUVVDOVQCCSXBNDUHAMIKBJNGXKENSVYTQZVBTTONUBXBQADYEKVDTEDCZWSGOMQMBSOLKILCMH");

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
    msg.setTimeStamp(0.303400035904);
    msg.setSource(55739U);
    msg.setSourceEntity(191U);
    msg.setDestination(4215U);
    msg.setDestinationEntity(238U);
    msg.op = 8U;
    msg.time_remain = 0.989938941228;
    msg.sched_time = 0.960782131216;

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
    msg.setTimeStamp(0.0293977109274);
    msg.setSource(49903U);
    msg.setSourceEntity(162U);
    msg.setDestination(26538U);
    msg.setDestinationEntity(45U);
    msg.op = 222U;
    msg.time_remain = 0.562660911516;
    msg.sched_time = 0.374050047712;

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
    msg.setTimeStamp(0.582266516339);
    msg.setSource(5827U);
    msg.setSourceEntity(45U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(23U);
    msg.op = 19U;
    msg.time_remain = 0.541652929141;
    msg.sched_time = 0.650037819233;

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
    msg.setTimeStamp(0.375650566766);
    msg.setSource(55360U);
    msg.setSourceEntity(54U);
    msg.setDestination(64545U);
    msg.setDestinationEntity(15U);
    msg.name.assign("MHYHXAITXNNLDCTEVDWLNFCSDLGUBQRYAZPRJJJITMDFIUPAGWSMOBAYCWVBEZBGLAAVXGMMQPCXEKDUOAMWARWFYFYXBCJVZRGFNBVPBQTEPOIHQRRUPJGJKWBCQQCTNYNMKEXVHLOFHKKOI");
    msg.op = 96U;
    msg.sched_time = 0.784962025009;

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
    msg.setTimeStamp(0.557094733911);
    msg.setSource(64793U);
    msg.setSourceEntity(150U);
    msg.setDestination(28830U);
    msg.setDestinationEntity(143U);
    msg.name.assign("QWZRYSXNGCIGMXPHASJRFLFIQJLSBYPNYTVYFKQOOWQECUCXZMWQFBEKIRJIWQQUMGJOWPXHXLUPNWNBRPHAYPENHZGRVXPTHHDKHBFHVJLVVAAFEZYYGRBEIUEXDBTNRVDMJIEDBOULZRPKNUGHFXDXGLCJQLMZSA");
    msg.op = 64U;
    msg.sched_time = 0.69044128736;

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
    msg.setTimeStamp(0.332450307008);
    msg.setSource(47645U);
    msg.setSourceEntity(74U);
    msg.setDestination(8342U);
    msg.setDestinationEntity(87U);
    msg.name.assign("AGFTBOZIZCKOPLTPTIJPFQZARBFERXNVZZOQSDGHLRDCYSUSHXVHDONYWWUWXXG");
    msg.op = 57U;
    msg.sched_time = 0.925051147204;

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
    msg.setTimeStamp(0.526481643692);
    msg.setSource(3666U);
    msg.setSourceEntity(158U);
    msg.setDestination(48956U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.862681710286);
    msg.setSource(62203U);
    msg.setSourceEntity(212U);
    msg.setDestination(16458U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0600281502979);
    msg.setSource(60756U);
    msg.setSourceEntity(239U);
    msg.setDestination(16213U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.915052257145);
    msg.setSource(43895U);
    msg.setSourceEntity(99U);
    msg.setDestination(20098U);
    msg.setDestinationEntity(115U);
    msg.name.assign("SWVKUFHGWYVVQSLHGMOXSMCQNNZIADRCAYGFPGAIXRTXIWCQWHSQYWQHLOIEBNJQJWCKXLZCSIHROLRRHAHMXSQAMGXFJGETPYTFYBQNFZUOONLENZEEZPEVJSZQHTPTBGDFFLFJEVBTBVTMJUOALPIFUYTSUMCBDYVBPGKIKGUWRCOJLLADJZKOYK");
    msg.state = 108U;

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
    msg.setTimeStamp(0.603275330212);
    msg.setSource(8818U);
    msg.setSourceEntity(181U);
    msg.setDestination(9336U);
    msg.setDestinationEntity(173U);
    msg.name.assign("HDFNLIPBBOAWHCBVMO");
    msg.state = 67U;

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
    msg.setTimeStamp(0.606073478751);
    msg.setSource(11696U);
    msg.setSourceEntity(23U);
    msg.setDestination(62589U);
    msg.setDestinationEntity(218U);
    msg.name.assign("SPBFKRCNUHXJJQSQCADNLUVZNGYDIMFEAEOILTXLUROJPMYVTANGPZHBFKOJQHKEZZICXICDVZGLIFSPPOQPUXVSMPEHBERBGMZYVNMGCKANYTDWAXWDIMRXXKWZGOKFRNG");
    msg.state = 84U;

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
    msg.setTimeStamp(0.141346967299);
    msg.setSource(5942U);
    msg.setSourceEntity(127U);
    msg.setDestination(32583U);
    msg.setDestinationEntity(187U);
    msg.name.assign("GZRGFPBYVLWGOIOTODKMBJCEZIIEBXLBSUHOSEYOYR");
    msg.value = 174U;

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
    msg.setTimeStamp(0.397025050087);
    msg.setSource(12972U);
    msg.setSourceEntity(117U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(241U);
    msg.name.assign("WODRGHQISDMFAQNIVCTSRGBBVK");
    msg.value = 230U;

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
    msg.setTimeStamp(0.744822827257);
    msg.setSource(61778U);
    msg.setSourceEntity(146U);
    msg.setDestination(13703U);
    msg.setDestinationEntity(207U);
    msg.name.assign("OJGVKKUGGNSPXSWUCIHVPDXVRBTGPEXCOFFPCGAMHQZHZUCSJTLUJMOHWGUDFNRXNDDZIBRGYHAWJZRYVRPDLOELVIATBXXDN");
    msg.value = 89U;

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
    msg.setTimeStamp(0.0700946137029);
    msg.setSource(8899U);
    msg.setSourceEntity(55U);
    msg.setDestination(41242U);
    msg.setDestinationEntity(231U);
    msg.name.assign("RXSMECQCFAJEPDTMHGDHGQFINWOBPCNLGBKFBFRIPZVSVBOZGHJCMIOQQNROUKRRQLRBIFFBKQLABLVWODOAZGJXGUJDIUJRSPSQITCNAQJLCIWGYYORMWYKBOXHDGMRVVZSXAACVNHOPDSYTFVNSWYYFKHLKXKWXUHDSPLADYINTCCUUAU");

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
    msg.setTimeStamp(0.774304978104);
    msg.setSource(24847U);
    msg.setSourceEntity(178U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(205U);
    msg.name.assign("TQIEUZPXBVIDXWZQDKCRNLMNJTKPHXXOXQWSXIKQGDFJLRHTMSGZWLZCNIDVOSTUOAJYHELJGLCWFIIAYZKFRUPUYRQSNJNHRWYFDDTZXNBBOLWDVTLOSOIPYDZCUFMSAVYBRIMMFFUZPEKUVMDVVYGORBGCJAXSGZIEPPHMJOHEVGSKNBXJCKGARREATUTMYNQWHZFOLKNWYQEMUHRQQPJPHEEPAVOKFBGACKYVBSLBAXW");

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
    msg.setTimeStamp(0.679837210283);
    msg.setSource(58120U);
    msg.setSourceEntity(123U);
    msg.setDestination(24354U);
    msg.setDestinationEntity(164U);
    msg.name.assign("RPBNDRGPIKMCWGAENK");

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
    msg.setTimeStamp(0.580786077404);
    msg.setSource(18228U);
    msg.setSourceEntity(22U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(229U);
    msg.name.assign("VIZRNNZXTHSVDBIGTBLJYEGOXEFIIVUDIBOMLUDQKQFHHRRCANYXYPTSSWDAMMXOZAEMJOWPQSIIQTGPAUNGOWWULBRPJWUGPJGEYGBQCFEUWBXIQQDOJVZMCBUFLKNTB");
    msg.value = 23U;

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
    msg.setTimeStamp(0.731316370535);
    msg.setSource(19133U);
    msg.setSourceEntity(100U);
    msg.setDestination(59777U);
    msg.setDestinationEntity(8U);
    msg.name.assign("TANCJBIOLCXRIWAMIGPFJYRSNBQGEFQAKQXEYKRWKWJAHCLBRQACSXVRXYGUFINCKMRRODJZWYNZHOLBCBNGPZNEAVJXVSTHPRINHYDWDTSDFFYVDQLKXEATJULMZZMLUELTUWEYLTKCGBIGUVHKQANEAUZQOUVMHXPYMTMZQJXJZDSYDBXVKDNJZFPVPTIHPSWDSBVPFPRUCRLEQAOGOCQPMBKYDZIT");
    msg.value = 251U;

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
    msg.setTimeStamp(0.757884553181);
    msg.setSource(39557U);
    msg.setSourceEntity(214U);
    msg.setDestination(49612U);
    msg.setDestinationEntity(150U);
    msg.name.assign("BTRCDTFGXVMFZUHLRLZXFJLKLWJKXQYOSSSLIWABQIQDAIGNRMJBUGMDVUATOQPW");
    msg.value = 37U;

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
    msg.setTimeStamp(0.338932649808);
    msg.setSource(11307U);
    msg.setSourceEntity(157U);
    msg.setDestination(31485U);
    msg.setDestinationEntity(56U);
    msg.id = 48U;
    msg.period = 484061093U;
    msg.duty_cycle = 3427231733U;

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
    msg.setTimeStamp(0.881484464205);
    msg.setSource(43569U);
    msg.setSourceEntity(42U);
    msg.setDestination(21840U);
    msg.setDestinationEntity(126U);
    msg.id = 11U;
    msg.period = 21360841U;
    msg.duty_cycle = 529591695U;

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
    msg.setTimeStamp(0.0730643501169);
    msg.setSource(20542U);
    msg.setSourceEntity(203U);
    msg.setDestination(13236U);
    msg.setDestinationEntity(64U);
    msg.id = 158U;
    msg.period = 3923091903U;
    msg.duty_cycle = 1879222375U;

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
    msg.setTimeStamp(0.413258091388);
    msg.setSource(3052U);
    msg.setSourceEntity(192U);
    msg.setDestination(710U);
    msg.setDestinationEntity(16U);
    msg.id = 144U;
    msg.period = 708600389U;
    msg.duty_cycle = 65235535U;

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
    msg.setTimeStamp(0.836114631974);
    msg.setSource(17251U);
    msg.setSourceEntity(160U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(189U);
    msg.id = 171U;
    msg.period = 3437192466U;
    msg.duty_cycle = 3570609394U;

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
    msg.setTimeStamp(0.421982286456);
    msg.setSource(28397U);
    msg.setSourceEntity(140U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(189U);
    msg.id = 155U;
    msg.period = 4118645583U;
    msg.duty_cycle = 1115119044U;

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
    msg.setTimeStamp(0.102217364921);
    msg.setSource(39799U);
    msg.setSourceEntity(117U);
    msg.setDestination(46143U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.591684140963;
    msg.lon = 0.474812500631;
    msg.height = 0.380791537871;
    msg.x = 0.138512693198;
    msg.y = 0.835464689711;
    msg.z = 0.951173601748;
    msg.phi = 0.258673940049;
    msg.theta = 0.253207530611;
    msg.psi = 0.216379574251;
    msg.u = 0.0664286780548;
    msg.v = 0.764428876323;
    msg.w = 0.304992613704;
    msg.vx = 0.195088815584;
    msg.vy = 0.0720575599988;
    msg.vz = 0.303514425979;
    msg.p = 0.599371696604;
    msg.q = 0.865630722312;
    msg.r = 0.98101583217;
    msg.depth = 0.602595017617;
    msg.alt = 0.970881699025;

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
    msg.setTimeStamp(0.823322544639);
    msg.setSource(9088U);
    msg.setSourceEntity(11U);
    msg.setDestination(42622U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.841835907368;
    msg.lon = 0.450937474529;
    msg.height = 0.407017731986;
    msg.x = 0.449622291235;
    msg.y = 0.699421494962;
    msg.z = 0.335777378384;
    msg.phi = 0.645887598333;
    msg.theta = 0.0613347171878;
    msg.psi = 0.794291039484;
    msg.u = 0.634380005974;
    msg.v = 0.680456836196;
    msg.w = 0.540073986108;
    msg.vx = 0.0938394613499;
    msg.vy = 0.733903274403;
    msg.vz = 0.0823122679687;
    msg.p = 0.759082808009;
    msg.q = 0.360443078155;
    msg.r = 0.608563755412;
    msg.depth = 0.488080013122;
    msg.alt = 0.0175255539279;

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
    msg.setTimeStamp(0.813779460973);
    msg.setSource(7233U);
    msg.setSourceEntity(250U);
    msg.setDestination(56713U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.994996749536;
    msg.lon = 0.000709135136657;
    msg.height = 0.78428534944;
    msg.x = 0.249121977579;
    msg.y = 0.037034591167;
    msg.z = 0.688608577755;
    msg.phi = 0.686854897554;
    msg.theta = 0.125650005121;
    msg.psi = 0.495435695368;
    msg.u = 0.0571193468086;
    msg.v = 0.9935112844;
    msg.w = 0.322337898312;
    msg.vx = 0.47190386759;
    msg.vy = 0.9340910827;
    msg.vz = 0.770359383826;
    msg.p = 0.41159690297;
    msg.q = 0.784837097879;
    msg.r = 0.306274203005;
    msg.depth = 0.0673777539178;
    msg.alt = 0.353611727864;

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
    msg.setTimeStamp(0.427851728364);
    msg.setSource(15281U);
    msg.setSourceEntity(193U);
    msg.setDestination(1052U);
    msg.setDestinationEntity(16U);
    msg.x = 0.632607716482;
    msg.y = 0.317733795349;
    msg.z = 0.917579504357;

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
    msg.setTimeStamp(0.688983713647);
    msg.setSource(53176U);
    msg.setSourceEntity(107U);
    msg.setDestination(38128U);
    msg.setDestinationEntity(154U);
    msg.x = 0.0813132903235;
    msg.y = 0.197867097992;
    msg.z = 0.264870752211;

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
    msg.setTimeStamp(0.257250866212);
    msg.setSource(49422U);
    msg.setSourceEntity(233U);
    msg.setDestination(33233U);
    msg.setDestinationEntity(126U);
    msg.x = 0.313107389855;
    msg.y = 0.302671433233;
    msg.z = 0.0624517001491;

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
    msg.setTimeStamp(0.175409347641);
    msg.setSource(56610U);
    msg.setSourceEntity(38U);
    msg.setDestination(6740U);
    msg.setDestinationEntity(152U);
    msg.value = 0.783122342881;

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
    msg.setTimeStamp(0.776448297462);
    msg.setSource(47355U);
    msg.setSourceEntity(160U);
    msg.setDestination(42749U);
    msg.setDestinationEntity(28U);
    msg.value = 0.182932651456;

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
    msg.setTimeStamp(0.916806234458);
    msg.setSource(15633U);
    msg.setSourceEntity(161U);
    msg.setDestination(62159U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0161997824492;

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
    msg.setTimeStamp(0.60196664256);
    msg.setSource(23392U);
    msg.setSourceEntity(247U);
    msg.setDestination(51745U);
    msg.setDestinationEntity(72U);
    msg.value = 0.710701150339;

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
    msg.setTimeStamp(0.336966590577);
    msg.setSource(3963U);
    msg.setSourceEntity(127U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(45U);
    msg.value = 0.405378175702;

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
    msg.setTimeStamp(0.02649733098);
    msg.setSource(14681U);
    msg.setSourceEntity(50U);
    msg.setDestination(32328U);
    msg.setDestinationEntity(107U);
    msg.value = 0.12762063029;

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
    msg.setTimeStamp(0.484633865431);
    msg.setSource(4658U);
    msg.setSourceEntity(243U);
    msg.setDestination(25331U);
    msg.setDestinationEntity(138U);
    msg.x = 0.227671544379;
    msg.y = 0.768473821709;
    msg.z = 0.713095313468;
    msg.phi = 0.41252804868;
    msg.theta = 0.670526240184;
    msg.psi = 0.533041548717;
    msg.p = 0.935537913574;
    msg.q = 0.00417369770655;
    msg.r = 0.873373041105;
    msg.u = 0.868538465834;
    msg.v = 0.728872924557;
    msg.w = 0.997407597729;
    msg.bias_psi = 0.993918546233;
    msg.bias_r = 0.822961236695;

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
    msg.setTimeStamp(0.971093138787);
    msg.setSource(41913U);
    msg.setSourceEntity(153U);
    msg.setDestination(21557U);
    msg.setDestinationEntity(204U);
    msg.x = 0.207858302571;
    msg.y = 0.45681694399;
    msg.z = 0.977460997452;
    msg.phi = 0.997044497262;
    msg.theta = 0.487262480651;
    msg.psi = 0.834990091441;
    msg.p = 0.859415769641;
    msg.q = 0.0347207916613;
    msg.r = 0.810553968558;
    msg.u = 0.923543753042;
    msg.v = 0.213140375709;
    msg.w = 0.130997762348;
    msg.bias_psi = 0.501674561901;
    msg.bias_r = 0.0920726140041;

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
    msg.setTimeStamp(0.287731280699);
    msg.setSource(1921U);
    msg.setSourceEntity(77U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(97U);
    msg.x = 0.717861464643;
    msg.y = 0.54256618321;
    msg.z = 0.615523629872;
    msg.phi = 0.948723068689;
    msg.theta = 0.801178619732;
    msg.psi = 0.625632231582;
    msg.p = 0.643036925994;
    msg.q = 0.389461664889;
    msg.r = 0.963601677905;
    msg.u = 0.889906487295;
    msg.v = 0.883877300986;
    msg.w = 0.137347945832;
    msg.bias_psi = 0.684548123022;
    msg.bias_r = 0.646854047849;

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
    msg.setTimeStamp(0.103789802637);
    msg.setSource(13910U);
    msg.setSourceEntity(52U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(238U);
    msg.bias_psi = 0.501668500882;
    msg.bias_r = 0.765851811137;
    msg.cog = 0.622843809728;
    msg.cyaw = 0.108941363304;
    msg.lbl_rej_level = 0.172456150229;
    msg.gps_rej_level = 0.368294578377;
    msg.custom_x = 0.460520488534;
    msg.custom_y = 0.604480117775;
    msg.custom_z = 0.0509653854472;

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
    msg.setTimeStamp(0.907365006762);
    msg.setSource(42369U);
    msg.setSourceEntity(201U);
    msg.setDestination(11687U);
    msg.setDestinationEntity(112U);
    msg.bias_psi = 0.727194537854;
    msg.bias_r = 0.276506129736;
    msg.cog = 0.193878123601;
    msg.cyaw = 0.439823738139;
    msg.lbl_rej_level = 0.455824717983;
    msg.gps_rej_level = 0.780749713656;
    msg.custom_x = 0.308353520754;
    msg.custom_y = 0.172781852778;
    msg.custom_z = 0.812260867638;

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
    msg.setTimeStamp(0.500369303932);
    msg.setSource(38813U);
    msg.setSourceEntity(187U);
    msg.setDestination(56191U);
    msg.setDestinationEntity(63U);
    msg.bias_psi = 0.972901991308;
    msg.bias_r = 0.355008202478;
    msg.cog = 0.390268347238;
    msg.cyaw = 0.84161122004;
    msg.lbl_rej_level = 0.0243913329081;
    msg.gps_rej_level = 0.0402990212436;
    msg.custom_x = 0.951419285462;
    msg.custom_y = 0.997344146574;
    msg.custom_z = 0.981471316867;

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
    msg.setTimeStamp(0.0254196756498);
    msg.setSource(18219U);
    msg.setSourceEntity(183U);
    msg.setDestination(44848U);
    msg.setDestinationEntity(177U);
    msg.utc_time = 0.851483378678;
    msg.reason = 48U;

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
    msg.setTimeStamp(0.673664606758);
    msg.setSource(15405U);
    msg.setSourceEntity(5U);
    msg.setDestination(9048U);
    msg.setDestinationEntity(65U);
    msg.utc_time = 0.250030355665;
    msg.reason = 166U;

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
    msg.setTimeStamp(0.834114390821);
    msg.setSource(59130U);
    msg.setSourceEntity(12U);
    msg.setDestination(16311U);
    msg.setDestinationEntity(107U);
    msg.utc_time = 0.837071272368;
    msg.reason = 223U;

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
    msg.setTimeStamp(0.635144386953);
    msg.setSource(40832U);
    msg.setSourceEntity(52U);
    msg.setDestination(10739U);
    msg.setDestinationEntity(159U);
    msg.id = 30U;
    msg.range = 0.255838561365;
    msg.acceptance = 163U;

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
    msg.setTimeStamp(0.577134607862);
    msg.setSource(51703U);
    msg.setSourceEntity(83U);
    msg.setDestination(58427U);
    msg.setDestinationEntity(20U);
    msg.id = 241U;
    msg.range = 0.418811395026;
    msg.acceptance = 207U;

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
    msg.setTimeStamp(0.566220658333);
    msg.setSource(38269U);
    msg.setSourceEntity(127U);
    msg.setDestination(27597U);
    msg.setDestinationEntity(101U);
    msg.id = 224U;
    msg.range = 0.781227977681;
    msg.acceptance = 203U;

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
    msg.setTimeStamp(0.673884919222);
    msg.setSource(4403U);
    msg.setSourceEntity(190U);
    msg.setDestination(64687U);
    msg.setDestinationEntity(99U);
    msg.type = 132U;
    msg.reason = 48U;
    msg.value = 0.741777499732;
    msg.timestep = 0.231115815715;

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
    msg.setTimeStamp(0.825865944451);
    msg.setSource(5955U);
    msg.setSourceEntity(31U);
    msg.setDestination(20618U);
    msg.setDestinationEntity(177U);
    msg.type = 239U;
    msg.reason = 154U;
    msg.value = 0.174854162205;
    msg.timestep = 0.750144691664;

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
    msg.setTimeStamp(0.331976751939);
    msg.setSource(29899U);
    msg.setSourceEntity(46U);
    msg.setDestination(40463U);
    msg.setDestinationEntity(232U);
    msg.type = 12U;
    msg.reason = 29U;
    msg.value = 0.990106821069;
    msg.timestep = 0.409282532686;

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
    msg.setTimeStamp(0.543278620096);
    msg.setSource(24285U);
    msg.setSourceEntity(23U);
    msg.setDestination(54026U);
    msg.setDestinationEntity(118U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RMKMBBQPRJDDSFKCNGGRVUXBJNTCDPZLNNKZGVEJQHWHRHNKUIAWPXKOGFUGHOOGLDOBCNFBTPSLYQFPAISNVLBQECHZLIINQQYCWZDBSIJUGXOUTVXETKMRXHBYBWJLLXHOVJEAYAYNSANYUMZKHAOSKAZQWODHVEYMWXRLDQTCAVREPZEHMSMPIUTMWGRSFSZFCLOGZIJJRIQTFPUTXDOBMWJEKCVYAFULEVJVPYAFIDEXGPUMTYCDK");
    tmp_msg_0.lat = 0.979578672392;
    tmp_msg_0.lon = 0.814715926925;
    tmp_msg_0.depth = 0.155016967589;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 76U;
    tmp_msg_0.transponder_delay = 42U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.949472083957;
    msg.y = 0.836716587104;
    msg.var_x = 0.407878796673;
    msg.var_y = 0.355726066719;
    msg.distance = 0.742098528623;

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
    msg.setTimeStamp(0.369865729041);
    msg.setSource(34058U);
    msg.setSourceEntity(29U);
    msg.setDestination(47303U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FHLXIMBZNOFPGIBOQJNIAZILZCSXPAXGBJBTZLOYCFBXGTEGPSRYYYXFVZJDWUYHAQDJRGQSTPVVOSDVKYHXKUFSSXLAWTJICLZHGMNREOYMQVNDBEENXACCDWXUYNRBMWIWRKDJSMWCQNOOJUAHHSLVKFYAKQPU");
    tmp_msg_0.lat = 0.410286205373;
    tmp_msg_0.lon = 0.989826017114;
    tmp_msg_0.depth = 0.208456469084;
    tmp_msg_0.query_channel = 229U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.408142608112;
    msg.y = 0.823268489566;
    msg.var_x = 0.731032531744;
    msg.var_y = 0.752057238217;
    msg.distance = 0.400979318994;

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
    msg.setTimeStamp(0.667324644993);
    msg.setSource(36571U);
    msg.setSourceEntity(99U);
    msg.setDestination(551U);
    msg.setDestinationEntity(119U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KSCMBSCDWLBZDNVTYTQALFDFJWIWPVSNYROTDIKFUIEVGFEKCOCJXWELTXJESVIVSOYAFBDXNHABOKBOZFWCXIWKLEGRJSFGYHPALOLBUMHUY");
    tmp_msg_0.lat = 0.406548105518;
    tmp_msg_0.lon = 0.696955916101;
    tmp_msg_0.depth = 0.659266338506;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 128U;
    tmp_msg_0.transponder_delay = 199U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.494502668452;
    msg.y = 0.576752753935;
    msg.var_x = 0.815773232627;
    msg.var_y = 0.523139596174;
    msg.distance = 0.732335379989;

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
    msg.setTimeStamp(0.21681520059);
    msg.setSource(45244U);
    msg.setSourceEntity(162U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(34U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.593656782247);
    msg.setSource(27602U);
    msg.setSourceEntity(195U);
    msg.setDestination(52978U);
    msg.setDestinationEntity(76U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.462288756632);
    msg.setSource(60218U);
    msg.setSourceEntity(243U);
    msg.setDestination(15871U);
    msg.setDestinationEntity(164U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.580031030146);
    msg.setSource(15423U);
    msg.setSourceEntity(230U);
    msg.setDestination(55857U);
    msg.setDestinationEntity(202U);
    msg.x = 0.681981065136;
    msg.y = 0.973238492069;
    msg.z = 0.17042895148;

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
    msg.setTimeStamp(0.586226888147);
    msg.setSource(55066U);
    msg.setSourceEntity(171U);
    msg.setDestination(10762U);
    msg.setDestinationEntity(158U);
    msg.x = 0.134433036946;
    msg.y = 0.569435239028;
    msg.z = 0.574336257128;

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
    msg.setTimeStamp(0.589664605686);
    msg.setSource(39477U);
    msg.setSourceEntity(154U);
    msg.setDestination(64921U);
    msg.setDestinationEntity(115U);
    msg.x = 0.707864847686;
    msg.y = 0.488725191223;
    msg.z = 0.73408440408;

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
    msg.setTimeStamp(0.4169794028);
    msg.setSource(65480U);
    msg.setSourceEntity(51U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(197U);
    msg.value = 0.384841193103;

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
    msg.setTimeStamp(0.611027681752);
    msg.setSource(28732U);
    msg.setSourceEntity(191U);
    msg.setDestination(12655U);
    msg.setDestinationEntity(123U);
    msg.value = 0.663531658705;

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
    msg.setTimeStamp(0.555371683726);
    msg.setSource(51818U);
    msg.setSourceEntity(199U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(0U);
    msg.value = 0.721001829699;

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
    msg.setTimeStamp(0.237752996027);
    msg.setSource(4061U);
    msg.setSourceEntity(157U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(147U);
    msg.value = 0.794869191671;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.756792448461);
    msg.setSource(7195U);
    msg.setSourceEntity(80U);
    msg.setDestination(28148U);
    msg.setDestinationEntity(190U);
    msg.value = 0.104742743237;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.657590432361);
    msg.setSource(26405U);
    msg.setSourceEntity(236U);
    msg.setDestination(41121U);
    msg.setDestinationEntity(127U);
    msg.value = 0.0499273958546;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.768134797179);
    msg.setSource(7224U);
    msg.setSourceEntity(29U);
    msg.setDestination(33677U);
    msg.setDestinationEntity(40U);
    msg.value = 0.67667844716;
    msg.speed_units = 169U;

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
    msg.setTimeStamp(0.196687333778);
    msg.setSource(15683U);
    msg.setSourceEntity(96U);
    msg.setDestination(17666U);
    msg.setDestinationEntity(102U);
    msg.value = 0.731301197891;
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
    msg.setTimeStamp(0.738053395706);
    msg.setSource(15341U);
    msg.setSourceEntity(237U);
    msg.setDestination(7899U);
    msg.setDestinationEntity(37U);
    msg.value = 0.578919384017;
    msg.speed_units = 119U;

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
    msg.setTimeStamp(0.936185042812);
    msg.setSource(37104U);
    msg.setSourceEntity(223U);
    msg.setDestination(55098U);
    msg.setDestinationEntity(10U);
    msg.value = 0.400207658073;

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
    msg.setTimeStamp(0.603869949477);
    msg.setSource(20877U);
    msg.setSourceEntity(186U);
    msg.setDestination(20790U);
    msg.setDestinationEntity(247U);
    msg.value = 0.86256790504;

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
    msg.setTimeStamp(0.131655223503);
    msg.setSource(46196U);
    msg.setSourceEntity(92U);
    msg.setDestination(43768U);
    msg.setDestinationEntity(139U);
    msg.value = 0.810671716027;

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
    msg.setTimeStamp(0.125598937534);
    msg.setSource(48240U);
    msg.setSourceEntity(130U);
    msg.setDestination(27844U);
    msg.setDestinationEntity(50U);
    msg.value = 0.560063581922;

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
    msg.setTimeStamp(0.678641868831);
    msg.setSource(46543U);
    msg.setSourceEntity(37U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(114U);
    msg.value = 0.292129829058;

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
    msg.setTimeStamp(0.547522991408);
    msg.setSource(64565U);
    msg.setSourceEntity(238U);
    msg.setDestination(16180U);
    msg.setDestinationEntity(49U);
    msg.value = 0.73412020823;

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
    msg.setTimeStamp(0.871238814597);
    msg.setSource(8797U);
    msg.setSourceEntity(172U);
    msg.setDestination(18284U);
    msg.setDestinationEntity(170U);
    msg.value = 0.466313290171;

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
    msg.setTimeStamp(0.321857497304);
    msg.setSource(21846U);
    msg.setSourceEntity(88U);
    msg.setDestination(59362U);
    msg.setDestinationEntity(236U);
    msg.value = 0.71692698902;

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
    msg.setTimeStamp(0.747315629925);
    msg.setSource(46692U);
    msg.setSourceEntity(235U);
    msg.setDestination(46798U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0427181634236;

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
    msg.setTimeStamp(0.561009778693);
    msg.setSource(50967U);
    msg.setSourceEntity(230U);
    msg.setDestination(27325U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 3536862564U;
    msg.start_lat = 0.278985600582;
    msg.start_lon = 0.354002547041;
    msg.start_z = 0.120085290343;
    msg.start_z_units = 14U;
    msg.end_lat = 0.755345209483;
    msg.end_lon = 0.511273485754;
    msg.end_z = 0.117821842193;
    msg.end_z_units = 136U;
    msg.speed = 0.106817716047;
    msg.speed_units = 53U;
    msg.lradius = 0.306669921269;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.0431408558753);
    msg.setSource(50688U);
    msg.setSourceEntity(252U);
    msg.setDestination(13835U);
    msg.setDestinationEntity(85U);
    msg.path_ref = 3476435896U;
    msg.start_lat = 0.33222583683;
    msg.start_lon = 0.848968424796;
    msg.start_z = 0.366851721107;
    msg.start_z_units = 224U;
    msg.end_lat = 0.126293266374;
    msg.end_lon = 0.0774415381505;
    msg.end_z = 0.505058478763;
    msg.end_z_units = 162U;
    msg.speed = 0.613426937583;
    msg.speed_units = 122U;
    msg.lradius = 0.189758128249;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.716886546399);
    msg.setSource(35227U);
    msg.setSourceEntity(241U);
    msg.setDestination(14223U);
    msg.setDestinationEntity(6U);
    msg.path_ref = 832284030U;
    msg.start_lat = 0.0481214912197;
    msg.start_lon = 0.0607108547363;
    msg.start_z = 0.512921813991;
    msg.start_z_units = 111U;
    msg.end_lat = 0.694534991936;
    msg.end_lon = 0.432293267539;
    msg.end_z = 0.0891016334372;
    msg.end_z_units = 172U;
    msg.speed = 0.796530550233;
    msg.speed_units = 44U;
    msg.lradius = 0.355790455315;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.524471923407);
    msg.setSource(16154U);
    msg.setSourceEntity(126U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(58U);
    msg.x = 0.363899365464;
    msg.y = 0.665681847017;
    msg.z = 0.122837917253;
    msg.k = 0.851595410989;
    msg.m = 0.275567642512;
    msg.n = 0.395149479513;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.640811609175);
    msg.setSource(23687U);
    msg.setSourceEntity(52U);
    msg.setDestination(29853U);
    msg.setDestinationEntity(87U);
    msg.x = 0.0586336615914;
    msg.y = 0.819245791901;
    msg.z = 0.0538644617184;
    msg.k = 0.414772104998;
    msg.m = 0.779405078439;
    msg.n = 0.922626052132;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.230942169108);
    msg.setSource(58858U);
    msg.setSourceEntity(74U);
    msg.setDestination(48078U);
    msg.setDestinationEntity(17U);
    msg.x = 0.73281608174;
    msg.y = 0.917713669672;
    msg.z = 0.507766507087;
    msg.k = 0.565784075019;
    msg.m = 0.41479272156;
    msg.n = 0.202110898617;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.659277029539);
    msg.setSource(18652U);
    msg.setSourceEntity(180U);
    msg.setDestination(45233U);
    msg.setDestinationEntity(88U);
    msg.value = 0.0919871056604;

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
    msg.setTimeStamp(0.432188229868);
    msg.setSource(13844U);
    msg.setSourceEntity(33U);
    msg.setDestination(7347U);
    msg.setDestinationEntity(25U);
    msg.value = 0.852466120645;

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
    msg.setTimeStamp(0.0972926132564);
    msg.setSource(12809U);
    msg.setSourceEntity(125U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(135U);
    msg.value = 0.329446605083;

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
    msg.setTimeStamp(0.0225421844526);
    msg.setSource(54327U);
    msg.setSourceEntity(99U);
    msg.setDestination(11409U);
    msg.setDestinationEntity(209U);
    msg.u = 0.0470472435367;
    msg.v = 0.518648486639;
    msg.w = 0.496601800516;
    msg.p = 0.499794776219;
    msg.q = 0.674294950293;
    msg.r = 0.402752270645;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.346181313846);
    msg.setSource(62664U);
    msg.setSourceEntity(91U);
    msg.setDestination(1169U);
    msg.setDestinationEntity(254U);
    msg.u = 0.802456578916;
    msg.v = 0.205799874301;
    msg.w = 0.223557338642;
    msg.p = 0.524497910346;
    msg.q = 0.0130293922071;
    msg.r = 0.221149885872;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.263954717801);
    msg.setSource(31451U);
    msg.setSourceEntity(232U);
    msg.setDestination(11469U);
    msg.setDestinationEntity(144U);
    msg.u = 0.709543386864;
    msg.v = 0.452192099479;
    msg.w = 0.575590329666;
    msg.p = 0.482878226054;
    msg.q = 0.464582374512;
    msg.r = 0.0904240380376;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.578855475572);
    msg.setSource(6447U);
    msg.setSourceEntity(61U);
    msg.setDestination(12201U);
    msg.setDestinationEntity(103U);
    msg.path_ref = 673022677U;
    msg.start_lat = 0.00772566200142;
    msg.start_lon = 0.650210646188;
    msg.start_z = 0.178582057727;
    msg.start_z_units = 149U;
    msg.end_lat = 0.920226880552;
    msg.end_lon = 0.748902572695;
    msg.end_z = 0.117839140904;
    msg.end_z_units = 106U;
    msg.lradius = 0.687446120168;
    msg.flags = 92U;
    msg.x = 0.00620856731687;
    msg.y = 0.289997291684;
    msg.z = 0.742473896585;
    msg.vx = 0.107333937336;
    msg.vy = 0.252544877407;
    msg.vz = 0.19430415232;
    msg.course_error = 0.745518507049;
    msg.eta = 1859U;

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
    msg.setTimeStamp(0.795380079572);
    msg.setSource(24776U);
    msg.setSourceEntity(51U);
    msg.setDestination(33804U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 3599764551U;
    msg.start_lat = 0.139552896821;
    msg.start_lon = 0.379871285431;
    msg.start_z = 0.489577520107;
    msg.start_z_units = 64U;
    msg.end_lat = 0.247405406897;
    msg.end_lon = 0.577536533561;
    msg.end_z = 0.39549108735;
    msg.end_z_units = 59U;
    msg.lradius = 0.641769081171;
    msg.flags = 97U;
    msg.x = 0.494004011542;
    msg.y = 0.554011317061;
    msg.z = 0.938179196166;
    msg.vx = 0.535545936283;
    msg.vy = 0.427108364138;
    msg.vz = 0.914666357848;
    msg.course_error = 0.854082948652;
    msg.eta = 49993U;

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
    msg.setTimeStamp(0.569694355486);
    msg.setSource(28262U);
    msg.setSourceEntity(159U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(98U);
    msg.path_ref = 2782363000U;
    msg.start_lat = 0.0176093239159;
    msg.start_lon = 0.652875850075;
    msg.start_z = 0.144389888621;
    msg.start_z_units = 1U;
    msg.end_lat = 0.985877637207;
    msg.end_lon = 0.0189698829896;
    msg.end_z = 0.827958289338;
    msg.end_z_units = 187U;
    msg.lradius = 0.38693324571;
    msg.flags = 51U;
    msg.x = 0.219591130286;
    msg.y = 0.182294574203;
    msg.z = 0.58801901224;
    msg.vx = 0.608953494632;
    msg.vy = 0.629381201563;
    msg.vz = 0.333600962797;
    msg.course_error = 0.0859420884238;
    msg.eta = 14514U;

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
    msg.setTimeStamp(0.865422927802);
    msg.setSource(59598U);
    msg.setSourceEntity(101U);
    msg.setDestination(50522U);
    msg.setDestinationEntity(199U);
    msg.k = 0.535213048122;
    msg.m = 0.709833815276;
    msg.n = 0.0736659538784;

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
    msg.setTimeStamp(0.857471863659);
    msg.setSource(37662U);
    msg.setSourceEntity(196U);
    msg.setDestination(24968U);
    msg.setDestinationEntity(154U);
    msg.k = 0.635745171794;
    msg.m = 0.404106353617;
    msg.n = 0.256261787331;

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
    msg.setTimeStamp(0.503518990363);
    msg.setSource(27267U);
    msg.setSourceEntity(209U);
    msg.setDestination(12531U);
    msg.setDestinationEntity(33U);
    msg.k = 0.424479000616;
    msg.m = 0.224648805107;
    msg.n = 0.264719707795;

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
    msg.setTimeStamp(0.0229070788585);
    msg.setSource(38634U);
    msg.setSourceEntity(68U);
    msg.setDestination(43840U);
    msg.setDestinationEntity(98U);
    msg.p = 0.408014097382;
    msg.i = 0.330218991178;
    msg.d = 0.819316938505;
    msg.a = 0.528043393835;

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
    msg.setTimeStamp(0.540691808418);
    msg.setSource(30607U);
    msg.setSourceEntity(80U);
    msg.setDestination(27858U);
    msg.setDestinationEntity(21U);
    msg.p = 0.480065621796;
    msg.i = 0.254407966547;
    msg.d = 0.867761053215;
    msg.a = 0.6732611047;

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
    msg.setTimeStamp(0.206285001693);
    msg.setSource(45652U);
    msg.setSourceEntity(224U);
    msg.setDestination(21251U);
    msg.setDestinationEntity(171U);
    msg.p = 0.791474843847;
    msg.i = 0.265920845561;
    msg.d = 0.730643249341;
    msg.a = 0.313608520942;

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
    msg.setTimeStamp(0.495694107477);
    msg.setSource(36382U);
    msg.setSourceEntity(227U);
    msg.setDestination(21187U);
    msg.setDestinationEntity(152U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.877622818929);
    msg.setSource(552U);
    msg.setSourceEntity(254U);
    msg.setDestination(9061U);
    msg.setDestinationEntity(47U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.377181133244);
    msg.setSource(47160U);
    msg.setSourceEntity(158U);
    msg.setDestination(9880U);
    msg.setDestinationEntity(139U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.181080195876);
    msg.setSource(24500U);
    msg.setSourceEntity(135U);
    msg.setDestination(28911U);
    msg.setDestinationEntity(217U);
    msg.plan_ref = 3872222877U;
    msg.id.assign("CHVTQRMDCKBANHCRYHNMGWZLCTENPNELPZGJDUPVNVULXAUBECHBGRQIPMEFO");
    msg.memento.assign("POBCIIBHNPOYJMJZWFLTKSOFEXQAEQEIBHTCDVJGBNNKIWHVKTZV");
    msg.timeout = 64547U;
    msg.lat = 0.109078041203;
    msg.lon = 0.798425089976;
    msg.z = 0.552172393089;
    msg.z_units = 185U;
    msg.speed = 0.752607767357;
    msg.speed_units = 230U;
    msg.roll = 0.959683891627;
    msg.pitch = 0.548617569181;
    msg.yaw = 0.412988936918;
    msg.custom.assign("ANFAEAWYBUOJNBAVOMNCNGPUFDIHPUGTKIIMPCJLHODXQXBRQIOALYDYBZRGJMZVEBGYPZUXWWAXRLWTSZMESHQQXFOQXKVFXMDWONBOCJYEPCSMJESMWSJIUSVURFUDZSSETOQIKKKHXELMOBIBLYCLVCHIRZNLTOQFVCYTACZHZY");

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
    msg.setTimeStamp(0.189346230788);
    msg.setSource(47597U);
    msg.setSourceEntity(125U);
    msg.setDestination(49982U);
    msg.setDestinationEntity(193U);
    msg.plan_ref = 1204952987U;
    msg.id.assign("TGFEHSWKWWAEDFBBSKCKLATSIPCYJVBVFYUGMPWBDPVQSRNPKMGEBRXXEQRWVRLVQEGHTYFFMXFHRMDZJHKOBESNDTWTOTMQLMWTTPIKITLGONKBNDAZJLQJPAYE");
    msg.memento.assign("KMWSECRWNHVCDOWMSYPYEZTMELRKNXHVVGZDQNUDCSYLWJOMQXEORBXQVXVHOZKGOURAKJOZDUGCYSSUNEJXLFQFWCXCBIPYMZNFGCZAHRSQTFLQPGCSAQNGQVKDDPXMLEHDUPIKLYBEDMZTBUPYHVBEEWJXTIOWFIOWSGXGFRIKRIXNTFBUPPKIJNBIRZASGYQPSAMTILEMKTFOVAUZKTCJJVUGLDIQFZPAYLNLTCFJHYJDBABJNRAVW");
    msg.timeout = 50326U;
    msg.lat = 0.223318999745;
    msg.lon = 0.919741297162;
    msg.z = 0.0198475300478;
    msg.z_units = 199U;
    msg.speed = 0.00432810777122;
    msg.speed_units = 69U;
    msg.roll = 0.0701811122466;
    msg.pitch = 0.797026589313;
    msg.yaw = 0.0336308885173;
    msg.custom.assign("NLJQZHRAIZTSWMBFKQWARDQIJPSWEZFSYGMUZSRIHBOXVWCULUXFTYXKDOWRJFSJEYEVBMDMHGIWRAJOMZWFBSIZGAFOBEMQYOFVMHNQVNMDSYNBOLRTBNGVNAAWXUPHFUCKVXTJUOEZCISWJJNVHACBFXELDGPN");

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
    msg.setTimeStamp(0.874045675894);
    msg.setSource(11408U);
    msg.setSourceEntity(148U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(249U);
    msg.plan_ref = 1874397138U;
    msg.id.assign("AAPNRJAVIJIOVKAPSISHWOSOBNJMTUKUWLWIDKDLEJRCHVBKMOZBOBMVZQZNIYMQQUDIUBQPOVXJHMYGYRQCCCSLTDPFHBPMSXZEAGIZQXMLQEXDFWSTFQXXFGKMTCJFGTCWEIUZYTNIPGSZURVMTYUY");
    msg.memento.assign("VSDGFOWDKXQGRTWLAEUKIYTZXRRJNOMEBXIGOPGUBMDRBTUDHJMBIVZTIHVRWABWSSFQVHLOQKWUGYCGTYEJKTFKEFRPPINSESHHHHYEIFHZUNSGOQIRXWUVPBCYXMYCJVBOIGOCMNGMCJWKMZIYSKEJVDPZTWBOKMJCKNULHEXTGSNXKJZOLCEXPAOZEALUFCVBMDDDFPTLRJNQQHAQQQNYTRLFAPJYWMPARLCSBXDDPFVL");
    msg.timeout = 49247U;
    msg.lat = 0.976088639273;
    msg.lon = 0.693472552836;
    msg.z = 0.73896777935;
    msg.z_units = 226U;
    msg.speed = 0.442624993803;
    msg.speed_units = 14U;
    msg.roll = 0.2805268234;
    msg.pitch = 0.603037551537;
    msg.yaw = 0.370863050035;
    msg.custom.assign("JVUVRKXGYERZGXDWCENBYKACBKIQUSSJJKPOXDPUBLARH");

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
    msg.setTimeStamp(0.394665103322);
    msg.setSource(33921U);
    msg.setSourceEntity(216U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(245U);
    msg.plan_ref = 1507532101U;
    msg.id.assign("DCJJYYSVDTFPWYBGLPJJWRJZCHNMUGWEEPCGVLSORCQCGASSLDUBHZNFXADAUWIRFONPTSOTERNHTCUFLLZQTCMISWEKDKNIAVVATSMQUHMRDGMIOZFI");
    msg.memento.assign("FDIVKJMNTPVIYDVXRONIGKBRXVA");
    msg.timeout = 43133U;
    msg.lat = 0.755491266702;
    msg.lon = 0.435028356348;
    msg.z = 0.461992426942;
    msg.z_units = 43U;
    msg.speed = 0.470021432397;
    msg.speed_units = 191U;
    msg.duration = 45237U;
    msg.radius = 0.814026464338;
    msg.flags = 177U;
    msg.custom.assign("UNZTXUKXSCUPSWAMJLGRRVSTHDEGPQCIUORRDJOAPAIRJSQWZMHHVLFOQOTPJFFFERNWZTSKWNUIVMDVFYVIRAUZQHMBXLXKOHDDFLSAJGWPATAWRDYUEYLSCKLTYBBSITVKAUIMPYHT");

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
    msg.setTimeStamp(0.14352130094);
    msg.setSource(44748U);
    msg.setSourceEntity(114U);
    msg.setDestination(53377U);
    msg.setDestinationEntity(236U);
    msg.plan_ref = 4042919337U;
    msg.id.assign("RKCQOKJNHOXFELULEFCBQFELLYKJGKUFIBDBHLDPMMAPFQWLQGXIIDFJPFPRIEY");
    msg.memento.assign("GQINOACUZLFVGKXWFRPXNBYDZJPFZAMHJIACQPPDGCSYOPBYYBFCGXRXTLSBWGGOOJPHTCTVADCMZUYLVMXPHKIQTGVZHEBPSKOSRFHYGFUVXTKDXKIEEFREJAWXNUZALUQJQDWOWKIWNDHNHBHVXSRLKHLNRTCLIZJMQUOLHBTZJEWTVBMUMMCOEMZQAXPBYQSIJ");
    msg.timeout = 16930U;
    msg.lat = 0.875659170956;
    msg.lon = 0.805602690345;
    msg.z = 0.424358404617;
    msg.z_units = 118U;
    msg.speed = 0.322429294524;
    msg.speed_units = 195U;
    msg.duration = 42193U;
    msg.radius = 0.525694353532;
    msg.flags = 5U;
    msg.custom.assign("ZIMHTWCJWZTMFCXEGKUEGRFBVECKZDIGMRORSNVSGKBQMAYOOZFQZEGANCZHVWBSIEMHKEYRFCZVNRIXDAUWQJWJUFUDIMMSBLKHCYRXABRLJFUQRHTVHLKTXNLMGSDBTKVTGLBYXDPADCUJYPPFPOLOICPXHTZCQNSWGRFSQZFBSKOUXXCAOYUNLLZDSLPNXTWJWONNURVIV");

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
    msg.setTimeStamp(0.723890837239);
    msg.setSource(59553U);
    msg.setSourceEntity(70U);
    msg.setDestination(55768U);
    msg.setDestinationEntity(3U);
    msg.plan_ref = 3023275080U;
    msg.id.assign("ZTVYSKRFVWYGMSCJHFQBRVKGBKWTJKCSAKJRUXEVUDOHHPONMBHZQBAPLLWYXNGTPUTOMBAIIHNVCYJUFQJXZEGYSLXBMJZUGWIZATNNWFDDQRWQQZIWMVCHKGCSYVP");
    msg.memento.assign("MEXFBSAMBGDHEIAUNNAMVXEUNOWEMXHGHHIFDYPNGJTBQUWUXZDBDLTKXCDJPRKWQRYQSOWZFMUCSVIMFBGYGBAKKJSOWCQBPHQQJGSRVVYNLLYJHDWBPZYBPAROVCJIMKVLTRQNIWVFYDCJAXLFDGGSYEVHCQVEZNB");
    msg.timeout = 57813U;
    msg.lat = 0.519541763541;
    msg.lon = 0.0848148851785;
    msg.z = 0.846292744929;
    msg.z_units = 85U;
    msg.speed = 0.132056976183;
    msg.speed_units = 227U;
    msg.duration = 41189U;
    msg.radius = 0.0482841655064;
    msg.flags = 186U;
    msg.custom.assign("UAALPLTQRSGYOJRMQJRZYUWODIMTYEFIFSECTIBOFECFDNMXPNDYQRHRLPKSCDNGYNPBQBGYAGRCZZCDTHYFXZOYLIWHBVLJAHGVUOURZQSPNMGIJQOAASSALSVEQCOTCUEFBXGYAHSGJWXTMOIHXEFNUJHZOVCVYPSDWVTEXWNDFUKWXQJARJKGUFXWHPJZOMKMMZRXDCKBVEBLMNMBZVNULKBKIWNSWRFKDUZL");

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
    msg.setTimeStamp(0.325898723309);
    msg.setSource(5125U);
    msg.setSourceEntity(250U);
    msg.setDestination(9233U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 1383162096U;
    msg.id.assign("WRNCCIFTYYJLFFUVJANAPFOISCTRJKWMXCCDQKXERACGUCYQMVBPKQMVVKJODILIQESFWKNWWJDAZWZOTHYLSVXLNEXYSYSFSIGTZQAHJXTEGMSLOGKXUPBSHUBNKNZAALYZJOGCIZRHGJVUMEBZPLEXRFAHMOEONPJNOUQOYSMRIKPTBHTDVHAPDENBFDDUWYLWSQHZQMCPGPRLIQZGGBLDNRJEOKPDBXUIWIHWTXRTYKABVEBDRV");
    msg.memento.assign("EKUDVOMYOTDIXFWSNVPIMKOBYKRCNZOACBVRRCKNSHYOYNGFYTMUNRHBBUVFUDJRZISPQJXTLMGQOCIPTRXQILBYPMQVTABNLJDKXCSSOPJJARENJGZDBBKAWVLAIQCPZKGPZZLKDWAAASRKWHEMTUDHTEGHUTYSDYOVGMFXQCCLIYXNREJSJZGIHMOUEFLFTTWAWAEUYGWELQQCPEMXPWSSWONFPWNUXBGXBHHQDIRFDVXHE");
    msg.custom.assign("MQIFAOGXPQQBWRXMOTPGBCJEBCDLDLOUUYPPPIXJACPUBMITJHVOKGKEVKAAINBUZKJKPLVMYAKQZDBJNYGWVYWTJSFZFAUQHATTLDVFSNNGOOQLZCSGRXCHBVVRWSOPEPXCKRLKMRARIFEXRCMJHQNVIHZFZTDSJGSUEZSWMSZXYLII");

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
    msg.setTimeStamp(0.384525373655);
    msg.setSource(31064U);
    msg.setSourceEntity(23U);
    msg.setDestination(8002U);
    msg.setDestinationEntity(53U);
    msg.plan_ref = 2401878218U;
    msg.id.assign("ZYNQGYXECEINGNHMLFLCUOPFBOPGYUPTRQTIRLLRPUDQFOSVYDBDEVPACBUGOHRBHZKWXWEQVIIHXUJDRANCLGTYTVODDCSVCNJZKTZEHJZZGXYXMEAMIJXLBCKWTQMZWRZJHSVAARVNSEQQNZAWUTDKB");
    msg.memento.assign("ESTHRTAULJMTMEHLBVHDUELBRBBYZMEIUUKGUBKQSZKTLKPOCIEORKSOWWQSYJFYLBTWSUWZSMDWTJGUTTAWGGXQXXJRCYGDCBUKSAWSQXAHZFHMYBJJUFVKIKDOEFVZPWZOXFQGLOHFPHCCNCWQLADHGFMNEXDCONEJZEZYTOX");
    msg.custom.assign("QCFUAJHCBZBBJSXZGZNFSZUWTJANLQZWCPIWBROGVXDAFUOTMKPSJOEGLLUKYHWVTGHEXZBBLQPTMOVRMHPVDMOOIGEMQPARFZLLWINEDZTBWHXLZCXQERKQKRFGVHCBGJVMDYXSLRKHIFEIYQJJFAJSFWMNKGYVDBASWTEQVITNYMAQGNVUGMEWLNARXQKIIDOTYUETJLDMOHJAKYSEPUIPYVPYNDCXUKFSDO");

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
    msg.setTimeStamp(0.427703341705);
    msg.setSource(33682U);
    msg.setSourceEntity(251U);
    msg.setDestination(11285U);
    msg.setDestinationEntity(203U);
    msg.plan_ref = 2227929084U;
    msg.id.assign("YAVUOVMKFJYYTRNUMDVQPBSKQCLFPXVIXJOWKOOVHIJHTCRNXYYDRGNOWQCAQTAPQBWFMKXRZYBXTMDJLPFCVUAOZNPUKUDNWPSPHDBEDRSWZVFRWXZULMCLPREOLVHKDIUCIFDJQAFSMEQGECIISXLBGMMKWZSBXYJORZZIGOIHIHCWRQVTWZTLQYGAMEALEFULGKBDSPNBSBHIEJHJDEAE");
    msg.memento.assign("NIMWVDBRSOMIDDTQUPZORCWFNFNKYGNKQOWHMVMAYTDBFEMEUNNTIFDMLKJJMLHRYNBVZTKONTUPAPPBE");
    msg.custom.assign("QXOQSKWQTMZLOSUKJDRXTCOYHJLACALQEZMGZHKUBOBNZTIAQEKWMSIYSQEYMJFWRUWYRFIBTWMQFWYZKPMQJWNNQCMATXSDGGPUGFHYJTAJRIRBHICJBVAJXJHWZEPCKTPVELGRLATNZXERUK");

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
    msg.setTimeStamp(0.415735578387);
    msg.setSource(2751U);
    msg.setSourceEntity(248U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(104U);
    msg.plan_ref = 330575395U;
    msg.id.assign("IRVVPRLXQWCLLTCKWQFFJGYLIHONJGPKUYIWAWJBJMNAWQMGRSJUV");
    msg.memento.assign("YYTPDQQUUGRHQLDDXWTFPQEMQOAAPLKLBMFIHMFTPOSTSLGVZBSEJRPJTEIBYKZNWYLEELHECHCEPSZGIKOVFIKCOKGSHMZDAJDXDNPNASUVUNBBNCJTIEYSKIAQHJZTGWDNKFVWISLCOLVLUJTBCOOZNYXRAQCZORYUMNWFRWNBWHOPXSQDFAGVVAXULRIYNCJYMKRWWMXIXARRVUBEECMTKHTXJVMYXPGADQHWGZFGFBCZGSJRFPOIMB");
    msg.timeout = 11987U;
    msg.lat = 0.0508676377325;
    msg.lon = 0.483008288757;
    msg.z = 0.0194235848558;
    msg.z_units = 65U;
    msg.duration = 63836U;
    msg.speed = 0.963736893103;
    msg.speed_units = 2U;
    msg.type = 228U;
    msg.radius = 0.290736184972;
    msg.length = 0.609662612384;
    msg.bearing = 0.0440722023187;
    msg.direction = 86U;
    msg.custom.assign("WQCWHBAPBHNTFZGNELSWDTQEOKHQLJMFUFLCEXWCPZHJLNYUKPDYEYZBDRTAAAXOHSKFKGDTMSQNJCENSYGQOUVDJOZIKMNUGPIJVCEHOIMANNUGJVOB");

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
    msg.setTimeStamp(0.489993925234);
    msg.setSource(613U);
    msg.setSourceEntity(45U);
    msg.setDestination(26779U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 3208817159U;
    msg.id.assign("IFBRFJESSBRWIUXAVOAQJBVVNWJZOVVOJXZMZSKEDHHKFJEDCOKKSMLABUVTDYTLGLYGSUDANWZBWKMIHYUGEURDELRJBTPLETWGCQICQQTPYUHPYEXRQYVWHRPZXCYOBFFOLRZQBCBAKJGXDYSTIFMSTZRTHWWOCURKAKNDIORPKDLEGOHGTZMLCZFNSAMNVJVHJINZNSFMQMAWHXPMILSILPEFBVAWXUENKNOQTICNP");
    msg.memento.assign("XUJLKRIHEYVYUTCYSBTWDWMVKZEGYXDMWRRHRDYVOMQJLQEYRGOESLJVIUABJZPDPOMEKLQLLXXNBXXFYNTVOUEZSXXCZKBTPENUSHKRQSFDEPNTWCMGHMEYVRBDPNYIUWFOLPCPFRKCCMFHGTBIFGQAZLIMPNWVZUBWUFCRKNVRQGKADVNFXQSBOGAJELLOBQSHXNJHAIIHZCVDGCYWSFTSTJTMOKWA");
    msg.timeout = 57812U;
    msg.lat = 0.896014650905;
    msg.lon = 0.0919348885639;
    msg.z = 0.71343268759;
    msg.z_units = 201U;
    msg.duration = 32582U;
    msg.speed = 0.898763526673;
    msg.speed_units = 150U;
    msg.type = 94U;
    msg.radius = 0.761273793598;
    msg.length = 0.293339364296;
    msg.bearing = 0.123678464515;
    msg.direction = 86U;
    msg.custom.assign("ZXLNMHHENPRBGZBIJVUZSJPWGKJSFYZSNNRVWJBMBTLSDYMKCXBPQTNJUIMHCNDFPRPSPAQVPAOLZQFRRKMFUADIALGDOHGTSOIEXOLJVTDEVXGAHCKIKLHHMQUWOCOENRJRUDVIMSOZQAXEAINQLQOTURNRHIBYUJFZILSWKDMZQDCQEVOEBETWQAUBFZPACODEXUWTSYGBYRMF");

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
    msg.setTimeStamp(0.0692963454888);
    msg.setSource(13496U);
    msg.setSourceEntity(57U);
    msg.setDestination(26661U);
    msg.setDestinationEntity(223U);
    msg.plan_ref = 2684018754U;
    msg.id.assign("FXPMDFYVTDONNCIKZCWWAZUKWJWGQCTQYDNYRBWTJRJIKMOZISKZWXKVYNBLGBEKCCMYQQDULLRLLRVIPBGRHJOTTSTKSAGAFQPNEJALKXOHMGPXOSXOJOEWVHUBCHUVTVBUPBAXLZMCSELHJAUHGFOVAHDTFYHRJVBJXJGSECSUXMIURFEIOKDYRPYBUGPDFNHMHPCIAWGQYEQYZFNQXNMLUBNEOT");
    msg.memento.assign("PYNQZLOGXCPRWWQBYZUCHYFESCPTVCWPYAAKESIHXBCCVEUNIZILJNTZRSTSAOTOMSTZKIMBIOLOZFKVEOUCZACJWJMFTAABBUKXRXHAZPHEQBDUHBYFSDNFJOPKAJQVDWIXJDRJUFXGQDGTVMUFSEKKPP");
    msg.timeout = 3200U;
    msg.lat = 0.451102652715;
    msg.lon = 0.444374327484;
    msg.z = 0.768842687114;
    msg.z_units = 46U;
    msg.duration = 24742U;
    msg.speed = 0.370638261585;
    msg.speed_units = 1U;
    msg.type = 13U;
    msg.radius = 0.446999216271;
    msg.length = 0.419448968674;
    msg.bearing = 0.0591056450701;
    msg.direction = 136U;
    msg.custom.assign("ERFDVGHAQXRMYOHZPSJGYQNBXGCZKXUPAXHEBWJYLLZOSFNIMFOVBLYDHIALCPJUEQYAINTGP");

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
    msg.setTimeStamp(0.224120454951);
    msg.setSource(39916U);
    msg.setSourceEntity(26U);
    msg.setDestination(386U);
    msg.setDestinationEntity(49U);
    msg.plan_ref = 1159407434U;
    msg.id.assign("BZVEGOCNOGPSJDONPRYSQXLLIBTDIOHQTWG");
    msg.memento.assign("ANDBAMSJSUHYEPXPBBMDYZOAPGMLFPPCWAGJKZHKBKQDPUOMYEHYHTSJLWQFINLNTENTGSLQZOBFSLAUIUWXUOEYFNWVNLGRBSZRNNYKUHWVFCKOZKUKYXCUVCIVYVDIQAQDGTSVTDQJPRTXIOZCSZNWLKDXQIRRHTDK");
    msg.duration = 4571U;
    msg.custom.assign("KJMNKOGZLLW");

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
    msg.setTimeStamp(0.709915983097);
    msg.setSource(16558U);
    msg.setSourceEntity(66U);
    msg.setDestination(48731U);
    msg.setDestinationEntity(95U);
    msg.plan_ref = 4193175850U;
    msg.id.assign("WWXHCNNLDSJFFIJSRZWVLOZNAOKBIQROCXFGTJYPNBUPQDKQUQNEGZJOQWPHLWGVJJBVUMZHMGEEAJYURYIJGTGNAUMEPGCFSRDHFHGMSOBELUTCMYLJZXEAB");
    msg.memento.assign("CUIBYPIIRVRQBVZJTPAOAKECEEXXGVTUCTRIHVQMZHQEGKDOFXXJSRFRLHAEQPTPLUKRFFAXKNUSJPDJCSPSNOCYAZOBHIENMRPMGNPOWUQGDZCDMXJGRYTUPFWBNDCSJWPHZFNMTXXDUQLHUUNEDCVABHAEOFIHMVRYHLDGVYSN");
    msg.duration = 5518U;
    msg.custom.assign("TLOUOFBCYLRXIMBXJNRDRHIWCDPPZJPAYZQVGHFSIIVSAHZPPMJNGRWHOYSEZYAKBGBHMIKIZDHKWFJRGXBMSPGOUNYWQYTNHVWVMDUYDHFDUXRKERLWXUEQVPBNKMIVQWKJMATZ");

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
    msg.setTimeStamp(0.912663968263);
    msg.setSource(50466U);
    msg.setSourceEntity(78U);
    msg.setDestination(27902U);
    msg.setDestinationEntity(218U);
    msg.plan_ref = 2187994387U;
    msg.id.assign("IZZIOHEMDWFYXDFUXTXRELAMKKKLULOUKDJVWQSEMYCGHYYHBYSNSWDAFSCIAFTSPACZVVJSKPUDXTVYXXPHIRASPPVNLBCEEOGRLTCUGUWTRYHNJXPCHUOKIQIRRGUPMHGCRQEGJKIHKNCTEYBDZONZWWCLQWTBPDSSMOGRVVPYBUXGERLFGOXNQQDVOJJKFZONTRQMGIYHLDQIMMBEATULVJSKIAZZANHQVZNWBZ");
    msg.memento.assign("WVOQHTECSJLIJJASZLWRNJUGLKMHZEXBQKPRVUYIPOXTEBHBJZCFDUSJPRNOGEJOSWWVBMGODXPEAUERTFSAGURWGZWATKXAHVDLRJDVAWXVYNTGWSXAKESLHGYEDIMMC");
    msg.duration = 55222U;
    msg.custom.assign("LWFYXWMXTTZXYFWEMKPAVJDLCQMBGOONBGMDHFZIDQAXTPOWRBHMUVYNIBGJDFHIVGSBLHXOJVCQJSVQWVXURZRYCOINTAZSJUBWAVEDJNSPCSINTIEUFJXASKKECZPBTDZGRDNLQAOPHSFMMIEEVPHYPBVQKAEPYTTHGGUGKH");

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
    msg.setTimeStamp(0.53814244778);
    msg.setSource(43177U);
    msg.setSourceEntity(201U);
    msg.setDestination(3906U);
    msg.setDestinationEntity(156U);
    msg.plan_ref = 17734923U;
    msg.id.assign("XAQTRYMJSLBSPJCTWKMTBJPITRWQCROBVJUXYQSCUQQUBBKCNUZEGEOVWDIDJIFYIRHUWKXRQHLKDZDXFEIGTPVRORPBPTNGUHPMAZKMMJTEYHXUVFZHANEBGNONHOKYSIAGURCWWVZCGQDCFGSNLSWNBSZDULPYHMQDFXQLD");
    msg.memento.assign("AYIPGCWPEWMYGEXSARGKNJWBFSNVKLFWEXSLKBQAPZOMPMPTSBFYKAIFQEWJXRBCMUTIYWJKFGFDGCFWBENQBGVHZXFVHDTJZKODKDHMLLYCEHEXDQXNLTAXJKBDBFCVNZIDUJJNOIPQIIAXRXOSMPVXRFKGJCIWCJYQTNLOVAPTAMHGYDLUZJRNOGYTUYCVHMGQOAWRBCCZVTNLZQZSBQOU");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.201298249211;
    msg.control.set(tmp_msg_0);
    msg.duration = 54069U;
    msg.custom.assign("DCLKUWVDRAFLPSHLBFHZRPMOKBWDATYQLCJGODJMWBYELUPJOFXCEAVDIFREECZZPHGSLQX");

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
    msg.setTimeStamp(0.127898664009);
    msg.setSource(9647U);
    msg.setSourceEntity(208U);
    msg.setDestination(61830U);
    msg.setDestinationEntity(92U);
    msg.plan_ref = 3807781965U;
    msg.id.assign("RNZVPKMYILIIHPBUKZZEFADSJCEGR");
    msg.memento.assign("WKTSRTKSHJZIVUBUCRGATVFEMSLCVKNYSPEOSENIJGRWMPFTYJLWMHWPAVOKKBHLGACSFZOIIXJSILGDQXPVFBHUWFWBTXPYFQGRHYAEAOOVZPMEOVBKTVEJNMMAEJJECIPDIMUZHPYRUNEQVGWDKUXNJUKLIWDDYOOINNCDBHUXDQBBRWDOBKGAFGIATQZMWOUEHUNZGDZSCXXRYZFLY");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.100148519675;
    msg.control.set(tmp_msg_0);
    msg.duration = 61499U;
    msg.custom.assign("YWGPRWVOZPCWBJLCGSTNHYOBNHAVQIGFELVXBHPBQNPVUCM");

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
    msg.setTimeStamp(0.264511038074);
    msg.setSource(22687U);
    msg.setSourceEntity(196U);
    msg.setDestination(20027U);
    msg.setDestinationEntity(54U);
    msg.plan_ref = 2106256506U;
    msg.id.assign("RWEXKFJHKABIQVETMNIPPVMYOBZRTEVEGNQLFTVWUOGGSTCFOQCYNLWIOHHTRAPXJSTCDCQOBYUNYXPGNBHZQLAZQXMHTQYDYGMTBEWIMUTPHUXJCAPIXMSZNUO");
    msg.memento.assign("HXIJLVWDYZYRGUXVIIRCOSEAWCYUIYZLAIJACZMEGPCLGOPF");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.824368064515;
    tmp_msg_0.speed_units = 196U;
    msg.control.set(tmp_msg_0);
    msg.duration = 34140U;
    msg.custom.assign("UVOUCEGVBKXYKYGECWYRDFXL");

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
    msg.setTimeStamp(0.664038231101);
    msg.setSource(44175U);
    msg.setSourceEntity(35U);
    msg.setDestination(41226U);
    msg.setDestinationEntity(90U);
    msg.plan_ref = 717640852U;
    msg.id.assign("MXRKLNKWGHGNKUYJMKKIRSOLFRELQWBPFVKPFUSXEMACYOVDBQCCPAMYTUH");
    msg.memento.assign("BUYEGIEZHNUGWFLIVTFXTYCVONAWTGQVRBCNYLSGFEVCIPRSGALJKMHPUAKMASUFLZAZNJVHAXJEITZFTBZHSXWEKWPCLTNJZBMBIMYYM");
    msg.timeout = 49033U;
    msg.lat = 0.793709638483;
    msg.lon = 0.250699379964;
    msg.z = 0.161882956124;
    msg.z_units = 124U;
    msg.speed = 0.189140694879;
    msg.speed_units = 43U;
    msg.bearing = 0.620093144394;
    msg.cross_angle = 0.0618005367756;
    msg.width = 0.675359439132;
    msg.length = 0.626943641962;
    msg.hstep = 0.084336281507;
    msg.coff = 36U;
    msg.alternation = 205U;
    msg.flags = 143U;
    msg.custom.assign("YXQEUMAPOCYNDCLFPYXSCQYFDIZOAJYKJHGBFUJYCTLXIHRQJQOVBPZHCWRNBCGLUETKISXRJEJQIMFNVPNYTBVJONPJEBROHWAVAGZLVXPSIGGRFHSSZMFQRBBWVVHDUXYUTVSKZPSRENRB");

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
    msg.setTimeStamp(0.542687749446);
    msg.setSource(37521U);
    msg.setSourceEntity(6U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(26U);
    msg.plan_ref = 1084534156U;
    msg.id.assign("HENLFIQSFBVZJCFBAUNGUKSZMUFZCDWHHIKQOHRPWRMUZJISNVSSXIJGVQDEBXACWHKYVLXGILFEYRIOOCRBCDPMOQTTKOWYHLDREDL");
    msg.memento.assign("EGBBLRHIPJQKDJBVMGDLQAAAAPGHTEEAHDSIWZQENDLHMFQDXJKTYTRIQMHOCOMAOGKTUSJRSNESBHCNWPYZVOBZTYQTSZLXFJJMLHLUXTPIMPOJWRXSIVJBVY");
    msg.timeout = 32586U;
    msg.lat = 0.788791258793;
    msg.lon = 0.437283650174;
    msg.z = 0.168886582988;
    msg.z_units = 78U;
    msg.speed = 0.0709068668824;
    msg.speed_units = 254U;
    msg.bearing = 0.975555179672;
    msg.cross_angle = 0.772442237943;
    msg.width = 0.0418081599563;
    msg.length = 0.538385949603;
    msg.hstep = 0.187488528254;
    msg.coff = 9U;
    msg.alternation = 210U;
    msg.flags = 61U;
    msg.custom.assign("NGUUBVMOTQDYRINFWQLXPZYBEYIHGGQMPSMZXQIFYGTUAJJFRRHGWAVAJNLJPNWSXMEGYSLCRDIBOHBLKAZKSZAREDBNHDSAIIHWUNKHKMVJQOLMVYBCREHTYVRBIZZFSSOWNCLDANSEGGWIOMVCKIXKDZHF");

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
    msg.setTimeStamp(0.968263928453);
    msg.setSource(44951U);
    msg.setSourceEntity(247U);
    msg.setDestination(61006U);
    msg.setDestinationEntity(178U);
    msg.plan_ref = 3425179358U;
    msg.id.assign("XWIRRHHOTSCYCRKALBVBEVYRZATSLCDZZMVGTPEOGXHZMITWAIFAFQMCLUIEYBJPBBMSNELFMGVFCYFHHXHYFQTTRVZSJSWQVECWHXCIXGJUVWLUFZIRJWCUYMNRPKQGWZYMYKXCYBBJSGFQJUPNDJVNCWUDNEAPGNSKZKASLEKDREJUXMKEALDNOGKKAXNLDOPWOGKQQJYQIAFPOIOTOFPUPOOPHQDDDDXXTUVGZBTQIEJUNWHARTRBLHLNS");
    msg.memento.assign("REQPYYZNSBMGWRMFRYGDIHTCCNGXDV");
    msg.timeout = 40060U;
    msg.lat = 0.171373998561;
    msg.lon = 0.361525854255;
    msg.z = 0.994605248323;
    msg.z_units = 111U;
    msg.speed = 0.194066027915;
    msg.speed_units = 61U;
    msg.bearing = 0.824703724368;
    msg.cross_angle = 0.719907389882;
    msg.width = 0.654088825452;
    msg.length = 0.459324923275;
    msg.hstep = 0.356641016914;
    msg.coff = 204U;
    msg.alternation = 161U;
    msg.flags = 228U;
    msg.custom.assign("TQNGALFVCLSEASBBQOVFMECUDJFHCQCRIOLDYGQHBWFHXVRZDRZPZDEVOBLDXPDPDOZJWMCETMGJOOKQNHBFYSSPSYCSTPZNKAIHNLP");

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
    msg.setTimeStamp(0.362410253315);
    msg.setSource(37350U);
    msg.setSourceEntity(219U);
    msg.setDestination(35897U);
    msg.setDestinationEntity(213U);
    msg.plan_ref = 2432981837U;
    msg.id.assign("KDFFCQGOUIZGWYTCEYIRHZYCXHMOXEUZVOXQJHXNBMVWTLMMNYYSGAKORFPNNFROTQXFJKSIWQPUSTSRIQYSOFUZMAVCJVATDUMRTKANLDEUOBKKDGLVDPQVQHPXFATWCWIXJPLAZPTHKJOLHNRZEYXMQOKUNBJWEPHIILQXGDNASUNWJASKCHKOIYVHDLEFIEAA");
    msg.memento.assign("JSXPVSHYOUBQVWWDDGTNHSHWQPPGECMMZJHUEHMWGEZLGSIMTFBAOKFAQQJBRPWVARRYPXKTZKXQEDZXLNICQTIPUWDZCNEKCXIPISSIEXVQNJKAYIFENUMAKTGORZFLTYKORBUOTJIMUEAJVOGVINCLSDDDQDNFFFNYTEZZYLPJXXLAMLVCJZAOJHHNSDTAFUHHWBVWURCFICAYKXRSSGOLRVKKMPBJRYQLBWYGYZPGNTGOCOUEFBWVX");
    msg.timeout = 21300U;
    msg.lat = 0.95471010368;
    msg.lon = 0.280048748847;
    msg.z = 0.352398562807;
    msg.z_units = 132U;
    msg.speed = 0.676819235169;
    msg.speed_units = 48U;
    msg.custom.assign("VHSJMDYMBVZWZTNGEWKIVLUWJYVMEUCXFHFUUBTKCLNJKTISKIPFSDPXHSKEFGOUFTNXVJSFCQTHNRXMXNEPCESHWTVSOFDGEWMGDLWEBZDYGFBXYUQIAKWXDAMODGXJRJZPRHARCXRREALVRCIJCZ");

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
    msg.setTimeStamp(0.458130737275);
    msg.setSource(25781U);
    msg.setSourceEntity(28U);
    msg.setDestination(17168U);
    msg.setDestinationEntity(198U);
    msg.plan_ref = 865934432U;
    msg.id.assign("ANYIXDQDRQVAIEGYSLFEDSDLJOGIXDBIWSLPDCKBSLOPRPWMQPCZRVFHRQZFMWNXIMEEFTJIZTROGQZHOCLHRIWJPXWYSHNTGOQYJAHOHWGKKSJXTIQTUUBOMKCMMQWJSXV");
    msg.memento.assign("PXDJXUAZGGCCXOWHZOJBEIPHCNYOMQTYPWDAJIITYICDXEXVMJUFETVPUDLNZYYHEBMNVONDZGAFNRBABKSVIHJEEHFOTUSVYUCBBSZLZWZEIJHKRSLEBKOYKVPFNAGQAIUHQDOPLQMCJFWULTFIMQINDPLVGRORBYYMMTCLSQHQZQXGRKQPRZKTPZRKCXS");
    msg.timeout = 56548U;
    msg.lat = 0.491970238951;
    msg.lon = 0.398705894699;
    msg.z = 0.538050913522;
    msg.z_units = 211U;
    msg.speed = 0.00376950151951;
    msg.speed_units = 67U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.507595671242;
    tmp_msg_0.y = 0.574019205769;
    tmp_msg_0.z = 0.698606267174;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SWAGICLHURFFZOGGQIXXUJBOWGDAMZNTCSIOFLWDXHVSTWVLBNGJZVDBFMVENDQGMTZNYTPMHRCUUPYSHFUZHWVVXHTOZDIRNTKJAQEJHMPJTOIHCRYXZYYKPMIVUSFCSERCFXBIACARWKMONQAGJMDBSJYQZNPKXFIGBOUBVECRYWDOETPNZKMUELTKESKSHLTDBWGPAQHALBRNYRGOLYQLVS");

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
    msg.setTimeStamp(0.291699181206);
    msg.setSource(45516U);
    msg.setSourceEntity(173U);
    msg.setDestination(22638U);
    msg.setDestinationEntity(108U);
    msg.plan_ref = 3481359392U;
    msg.id.assign("ZJAXENYRXETBLVBWFPDFPGVAVDXMCFJNUUSXVCCOKLGSHNKNWRVCKBCTYANCMORWFHMMMVSDHVPZSJKTVQZFTKSYJPMRCVYQTQPAQLORMLQWGYLOZEOAAWCDAOHQQOHLGSTPBWYIFKBYUBEJWIHYISAWUEGXRHWNXOTPTZIHIAZPHXMSHXCEMQEJGRNRTJNDZZXFXIEULEGSFPKDKWDBBBLUEIDDNJSMYKT");
    msg.memento.assign("CWZVWUOVJIBQXZXRTKANBOESSAEBTSDVQPWRGWAGPXIDYBBSQNUHUZVCQTTNEHFXUTVOCMVMQFMPPKLALTYPOKMIFQFBUNJWONCXHDROVFDKHQKDDHMORLGUELJ");
    msg.timeout = 40541U;
    msg.lat = 0.743135090138;
    msg.lon = 0.635408452558;
    msg.z = 0.97222904753;
    msg.z_units = 39U;
    msg.speed = 0.149711382415;
    msg.speed_units = 178U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.969166989684;
    tmp_msg_0.y = 0.0527696147277;
    tmp_msg_0.z = 0.826957696136;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SZEBIXAEFQAJDIZKBIOQAKLAEPFJMKCGSOKEACCZBOKQOKYLIE");

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
    msg.setTimeStamp(0.315414498718);
    msg.setSource(11479U);
    msg.setSourceEntity(130U);
    msg.setDestination(60266U);
    msg.setDestinationEntity(97U);
    msg.x = 0.820091230645;
    msg.y = 0.474500333617;
    msg.z = 0.281966177094;

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
    msg.setTimeStamp(0.286148582394);
    msg.setSource(64198U);
    msg.setSourceEntity(69U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(55U);
    msg.x = 0.810883507243;
    msg.y = 0.404438888134;
    msg.z = 0.168321807323;

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
    msg.setTimeStamp(0.226298623312);
    msg.setSource(15609U);
    msg.setSourceEntity(126U);
    msg.setDestination(53231U);
    msg.setDestinationEntity(146U);
    msg.x = 0.619244102402;
    msg.y = 0.0726427371975;
    msg.z = 0.235254440618;

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
    msg.setTimeStamp(0.435821202454);
    msg.setSource(60649U);
    msg.setSourceEntity(86U);
    msg.setDestination(53677U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 450961529U;
    msg.id.assign("FTIURCGBVPLRLCVYDTIEFRPGWWOZDAVSGSGFPIWACOIPNUBMKKVSMSOJHDTQESIKBNKERFUIJCARVZVMRNOBTIHYQYMNXSUFHWAWBQQTOZTNCGJDMKQDQPRSCKZJGPPYVETZRZKTFMKFUSCHXYYMGPAFBIJXOCJJLLPGXALLNNEWCXUDRYQEQOMHOIVHW");
    msg.memento.assign("GSZEOTKYDXMTOHNUQVYZMERPWKTUIMCIWOVLEEXBAEWAXRHUFSYDHYKLJGTNKFBKZDYLEWZBJEAPEAVRGXUCBUVFHHCVKHQWRKDHJFJKVPSSGZXYJFFKAMUFGZEOBPLDQXKCRMQLAIQINUHPONTMAZAYMRHEWXVDBNOZPLFZNDCLBCFSJIPGBMNRYRRJAYPXSONOCGJDPOHWIVIIDRTLQATUGVSMQQIOBLTCJCVBJGIPNUTLFWWSXQYCG");
    msg.timeout = 51015U;
    msg.lat = 0.770993357447;
    msg.lon = 0.813148268438;
    msg.z = 0.0596398595577;
    msg.z_units = 191U;
    msg.amplitude = 0.557404225904;
    msg.pitch = 0.810649551042;
    msg.speed = 0.673566307571;
    msg.speed_units = 172U;
    msg.custom.assign("UZYWXXODPSGQFHMFMVAXVYSVIPROZDMQSJEUNBNLMEDHIWCGOTBRBHUWGUIYWUNQMKYJQKEKOWZDXBPHAGTBTFVJAJBADIVWKMSVKBUCN");

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
    msg.setTimeStamp(0.973245778693);
    msg.setSource(30990U);
    msg.setSourceEntity(88U);
    msg.setDestination(52688U);
    msg.setDestinationEntity(64U);
    msg.plan_ref = 1803541814U;
    msg.id.assign("FBWQMGGGVVBVFFKSVUBOWUJKZEJICDAQKVWASXTIJZGXZGKYMFJIRTUHQBOFCNLZBDITOYEHNZPKCRMUBWRMCAELQCOHOADSQNRNHEAXAT");
    msg.memento.assign("HCNUZNIAVBENDALWJKBQTTYACZXAUTLPCPXVDROVNUQHBLTRXDF");
    msg.timeout = 35117U;
    msg.lat = 0.137930787834;
    msg.lon = 0.286967233761;
    msg.z = 0.857490308574;
    msg.z_units = 119U;
    msg.amplitude = 0.0753274759303;
    msg.pitch = 0.475121335605;
    msg.speed = 0.628690360242;
    msg.speed_units = 241U;
    msg.custom.assign("CKNDILABATDPCCHXFSHZPTSLJRFWRSJHQBNFBBYCRRDKSZADOJYVJYKXLORJTVWZXHWECQTKNRIMWSDZGUQJAZEEHXYYSNJI");

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
    msg.setTimeStamp(0.495999565249);
    msg.setSource(45356U);
    msg.setSourceEntity(159U);
    msg.setDestination(43878U);
    msg.setDestinationEntity(83U);
    msg.plan_ref = 2375415110U;
    msg.id.assign("UAMSBXKJNLXAEWMYFKXVUDVBXGNQROSIJGLXWOBADGZPHCQIBTWBZGCPAKRGPWMLDYLTGCZXBJZCSHF");
    msg.memento.assign("YPWBUYCNYZSNIIBBKCYXNMPL");
    msg.timeout = 40583U;
    msg.lat = 0.642014990841;
    msg.lon = 0.389363433451;
    msg.z = 0.3075522563;
    msg.z_units = 124U;
    msg.amplitude = 0.548785066317;
    msg.pitch = 0.404939577983;
    msg.speed = 0.0170278892408;
    msg.speed_units = 19U;
    msg.custom.assign("XBEQVTZSXYLTN");

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
    msg.setTimeStamp(0.476020576106);
    msg.setSource(17369U);
    msg.setSourceEntity(12U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.697151477061);
    msg.setSource(54973U);
    msg.setSourceEntity(19U);
    msg.setDestination(16357U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.668958286474);
    msg.setSource(25813U);
    msg.setSourceEntity(70U);
    msg.setDestination(50088U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.0816749602198);
    msg.setSource(21011U);
    msg.setSourceEntity(179U);
    msg.setDestination(10696U);
    msg.setDestinationEntity(167U);
    msg.plan_ref = 3760937082U;
    msg.id.assign("RIMBNWUCIDBHJRBJDJQWKTULENCWWFJPUXPOGMBLVMAZFJPMJAHISSZYVUCXOZR");
    msg.memento.assign("JYBVKADNEODUCGFLHAJRCWBXPUFRTBXWAJJCVNZNILZPEBZESJIOJVHHGFEAOGUHGYIXZMVXWSZDULXXZEQGFUVMYQPMPIBGBIWTBCPGLRSLNLXDFZQUJVDIOTNTFNCALUPQJYMWCCZFYYOORRWYNIDGMKBWVKSQTHSWIRGUKQVBWQMPSKKQASAIQHNKTYPPSTYUPTCMSLXLBUSAODOK");
    msg.lat = 0.438042216762;
    msg.lon = 0.846772721776;
    msg.z = 0.333835985732;
    msg.z_units = 224U;
    msg.radius = 0.00316308383473;
    msg.duration = 24071U;
    msg.speed = 0.399536933823;
    msg.speed_units = 96U;
    msg.custom.assign("AYGOIPIBVYUXKHR");

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
    msg.setTimeStamp(0.291618644102);
    msg.setSource(31421U);
    msg.setSourceEntity(167U);
    msg.setDestination(8282U);
    msg.setDestinationEntity(56U);
    msg.plan_ref = 2241694514U;
    msg.id.assign("PGUBRDXVABRNVGUDNJJIKKYMYBZWFFAPHVKMTSZRPRHZTJTUJPWGTEWGPCVOWADLABISHMGOIQRZXDMYLQWKZUCGGNVEVJMSQF");
    msg.memento.assign("IEFEWBMMJDMYDSCSCEPDKYYQNUGXFMFCICLVJLEPHHGSGIFGMVYFNEBOFSKMJLXCTLDBZLWVHOKBXWTIWXMBPTCXNKTCEVJXDTRKSHVBCGTTSROZZEAPRARQWWJZORYHWDW");
    msg.lat = 0.727155123753;
    msg.lon = 0.96467349824;
    msg.z = 0.335448281802;
    msg.z_units = 156U;
    msg.radius = 0.507117952744;
    msg.duration = 2518U;
    msg.speed = 0.664082291619;
    msg.speed_units = 5U;
    msg.custom.assign("YDQLTKVAXQWOTTXJJRPLE");

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
    msg.setTimeStamp(0.0290233236054);
    msg.setSource(50942U);
    msg.setSourceEntity(144U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(150U);
    msg.plan_ref = 1490153255U;
    msg.id.assign("UUETBIPOQOGYKDSRSXWFJJTNJNNKAXXRJDLCJGZQREECLIMLONWHUFVCYTLRKXJDHVLHFHRTLHEPVHEPHJXLLUNXCESUIAYCVMUEGKUTCKIXIFMPSBKVFWZTPMURPRCTPNREZUOKMIWFIBSYDWSCGMAMMYWWQKAZPBZWYXGQQQIVIDOTSCCBMGSFPOKTKJV");
    msg.memento.assign("VTFVVGHIKHPULDZWBJVIJUKPVZVBYACQIANJESHYEDUBNFDLFDTA");
    msg.lat = 0.819187378627;
    msg.lon = 0.414938027776;
    msg.z = 0.380719335911;
    msg.z_units = 186U;
    msg.radius = 0.866375379169;
    msg.duration = 23636U;
    msg.speed = 0.97718966929;
    msg.speed_units = 97U;
    msg.custom.assign("XRIGJZXMZLSUHSA");

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
    msg.setTimeStamp(0.709024403843);
    msg.setSource(60301U);
    msg.setSourceEntity(172U);
    msg.setDestination(38929U);
    msg.setDestinationEntity(11U);
    msg.plan_ref = 2222246923U;
    msg.id.assign("OSFFIPGQXVDNJIQLMAYHPPYBAFOHOTEYINHVLNSFTDTWNQACVOWYVISKWYKTUDUWASOFJLSCOFMKDHQYBHRHBGUBT");
    msg.memento.assign("LFHTADYJPTOALKJRAADSXXMEPCGXLIJKXLBVVVAYCLMBHGCGACPWMQ");
    msg.timeout = 64332U;
    msg.flags = 155U;
    msg.lat = 0.686604669037;
    msg.lon = 0.399031550052;
    msg.start_z = 0.875464082919;
    msg.start_z_units = 74U;
    msg.end_z = 0.684192266384;
    msg.end_z_units = 89U;
    msg.radius = 0.307790914247;
    msg.speed = 0.694392700391;
    msg.speed_units = 122U;
    msg.custom.assign("SMLYTLMPXXGDHEBINNAUDZDPJYYZYCGFICVNZFTONSCJGPMJVDRFEAJVBELNHRWVBNVQOBDRTLLATUAHXUVXNTPEFSUEUMCILUKMRWBSQTACKZHRAVPKHRTJBFMKZFQOI");

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
    msg.setTimeStamp(0.633787845193);
    msg.setSource(52981U);
    msg.setSourceEntity(7U);
    msg.setDestination(26453U);
    msg.setDestinationEntity(12U);
    msg.plan_ref = 2557583521U;
    msg.id.assign("SLICBFKVFJQMSPRMQZHSXYAUZFJEIWQKRHAOIEELGYZZNLIWWONZRLNTZVHTRGXXRJUYVZPWNINUKRPJOJKVHCLFVSGTU");
    msg.memento.assign("YNIHABWWLSGXWJHGWHCHGCSEPUBVAIYESKMBNVZPMXQDOKNXBFJNDBECDOEYCSPBTQEKDGRYTMJUOUEUBOGDLXATNSQXUMYLWPQWVOBHFQRXSEFKITBPKLWHUKFLANJAZUZDNVOLEGJROMYNLGCTRFOWUYMCAQK");
    msg.timeout = 35575U;
    msg.flags = 27U;
    msg.lat = 0.321885591603;
    msg.lon = 0.680103542586;
    msg.start_z = 0.879468835635;
    msg.start_z_units = 249U;
    msg.end_z = 0.479548722163;
    msg.end_z_units = 184U;
    msg.radius = 0.0783368545011;
    msg.speed = 0.266093085546;
    msg.speed_units = 139U;
    msg.custom.assign("BNNFBXIDXTOLENBDEKTWMIEEWXYWILJDQLWSZLSJIITSFASHPGLIFGJBMOXUCADWVXCCCXDPUVVGEWBA");

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
    msg.setTimeStamp(0.452508791011);
    msg.setSource(55861U);
    msg.setSourceEntity(19U);
    msg.setDestination(41236U);
    msg.setDestinationEntity(33U);
    msg.plan_ref = 2459805818U;
    msg.id.assign("WSASDCUVGLXBNPQGDPYXBNIJSZRLMCRVKTCRBIQOZYS");
    msg.memento.assign("YLNXTASRGREXEGWYQAROEIBMGKJJIUXLIPEQCWQXVRXGVKIKZIKPCMSWKFCFJWVHYCQZQXSLRUHBHMBSZFFZCLSVKSFNSCCPMBPSNHHJGITYLEHUBTTTTHWDVTDGWULCGAVBDATJREFOWQYYDZAPZVYNADEPBMPALOSYZGQMNMXUONQOCFKJOTOUOAVRRBJ");
    msg.timeout = 44328U;
    msg.flags = 44U;
    msg.lat = 0.136163452979;
    msg.lon = 0.555362542674;
    msg.start_z = 0.105212116348;
    msg.start_z_units = 56U;
    msg.end_z = 0.777029706041;
    msg.end_z_units = 40U;
    msg.radius = 0.720267744803;
    msg.speed = 0.342507953544;
    msg.speed_units = 145U;
    msg.custom.assign("LVUSBNJFYFXEOPJRNXKSKCWITLLIENAEWJHSOKYURVBUMBQFGZQDEDFPAJUKDEZZUIHNHTLIVIWCTDQXJGWPOOKZOMOTYOPCLVPLBZPFVGLFITKWNDGUIRYVTJYQDUGUADHSLOZTCSLVWJFFJQSCSVKYZMSWAX");

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
    msg.setTimeStamp(0.264423554969);
    msg.setSource(40492U);
    msg.setSourceEntity(176U);
    msg.setDestination(30914U);
    msg.setDestinationEntity(104U);
    msg.plan_ref = 3509208637U;
    msg.id.assign("YDYXYNBQTONJNIEZFLDCVOLAMNPRXOOQEUGPNSTLFWPOADZEMSPZZXYFKUHIIBZPCVGMIGTAWGHIJZGCUXVFNVRWLAGLJNFOVCUDORFHLEXPVKMATIJFDZUGSEYJGSBJARXZCTSFMMVKXHYDIBKBQYAPWLHYWYKBMFPHEPVZXLKPWCJRSTHIWUSRWBKHCQNTMTODOIRQYAEULMDMBQHQWBEQUVDQGXJKABJELCS");
    msg.memento.assign("HJABEKZGBFTNDKQOWLNIRJAEXWZSDGDGZWPWUFFIPEQJCSQJLAZACRUXEUEYXQITXHABEHFIBTHTVLKUGVUINUCFUMGQUQVUCYD");
    msg.timeout = 7951U;
    msg.lat = 0.270069951642;
    msg.lon = 0.925400592064;
    msg.z = 0.856920539156;
    msg.z_units = 147U;
    msg.speed = 0.708001785591;
    msg.speed_units = 141U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.523005304564;
    tmp_msg_0.y = 0.922268839686;
    tmp_msg_0.z = 0.228332719217;
    tmp_msg_0.t = 0.416092056356;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QHBOBFDAHIHDNTSXLBIAEMOCYJHKOYBUEOATXVSWCWOKFQRAHYLDVURVFOAKGYTVZIPTQXUXYJPRYFTRPOWNMCJB");

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
    msg.setTimeStamp(0.886962074971);
    msg.setSource(62652U);
    msg.setSourceEntity(123U);
    msg.setDestination(50044U);
    msg.setDestinationEntity(29U);
    msg.plan_ref = 1690043128U;
    msg.id.assign("RKEUTFXUQOMWHSYZYPNKQLMNNGPUJTADRUMMZBBNGMKVPUMGDBHKQQWCJYIPFGNTWNDHOEOWMAGRPYQEYIOFVZVHRSNKKORIIQ");
    msg.memento.assign("FMUPTNRBIPAPQKTYFYHDKEWTEGBMNDPXPSEKTFGSLJYGCSDZNWIQVBXNQNJEWMQHODQHCPGVAOODRRJZLQMOR");
    msg.timeout = 50979U;
    msg.lat = 0.924571051591;
    msg.lon = 0.443683862661;
    msg.z = 0.0973849415241;
    msg.z_units = 205U;
    msg.speed = 0.774417359848;
    msg.speed_units = 191U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.521639875208;
    tmp_msg_0.y = 0.622526766311;
    tmp_msg_0.z = 0.91172101906;
    tmp_msg_0.t = 0.753764660439;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IDGOPATSSMYTQIFSGJYYEKWSDKRCOMKWARZCBOHSKFMWVNXEFQDJJYRUCIPZLNWQBETNDMSBCTFVSZLTNVXARWCWUZQVINSIHAQPCPOQFEXXHYYTKNWQDZMFOEFRGDETMGLDHUCVJ");

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
    msg.setTimeStamp(0.683564205433);
    msg.setSource(61960U);
    msg.setSourceEntity(13U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(104U);
    msg.plan_ref = 655994642U;
    msg.id.assign("MMUTZLHUWPKREDXGYUYZXITGBZFLIOKDSSZQQVVFQBJSQAZARBYWBUXXPTEJKZHCCERQRIOXFTOMLEHJHYQPABOBSGCDMWXSTSPUEOLPEBYIGJLHGAPGCBQKEFIZKFNYBILOJNHODPKNNPGLSJMIRHITXLCKDMCDKCUGORNFIFCNQTWYJAFXVHMRVEAF");
    msg.memento.assign("QTRVBQTKYFHIKUUTGXVZPXJOOOAJIYKFNIBLUQPLTQENMDGBBGWMFLTYGKMRZSYHENFPCSJCHUUKJRPYWHOCFXUVTQYZMHERFXAJZSMPRSAWDVJQCIUQRJCYVFIMSVBCLWPHPDDNDTOIZBGQVLJGIEDEAOOLAKOFENEQYWOADEHYB");
    msg.timeout = 60101U;
    msg.lat = 0.329831723607;
    msg.lon = 0.489858577315;
    msg.z = 0.454430642816;
    msg.z_units = 208U;
    msg.speed = 0.478848678959;
    msg.speed_units = 147U;
    msg.custom.assign("GGKSIQOAAMPGPFHHRZYVROHTOFUXJYBXYFLXCPAGEMKKQDKKNFUESQMJFTGTUAYLGBMNAJASIISZWVDZGVYHDKLCDOJIEBFLECQWZBPJUIBOLXEEXFPCVPJJWZLFZWPISCGWXZLKQNXOVJOJKDSWRDYUZCWPDYUHQV");

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
    msg.setTimeStamp(0.238830586405);
    msg.setSource(10768U);
    msg.setSourceEntity(207U);
    msg.setDestination(12301U);
    msg.setDestinationEntity(65U);
    msg.x = 0.990000185307;
    msg.y = 0.0121709359907;
    msg.z = 0.24838981126;
    msg.t = 0.118582377291;

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
    msg.setTimeStamp(0.147099688631);
    msg.setSource(60897U);
    msg.setSourceEntity(181U);
    msg.setDestination(42222U);
    msg.setDestinationEntity(161U);
    msg.x = 0.592370006472;
    msg.y = 0.885131613095;
    msg.z = 0.801886405566;
    msg.t = 0.199403034557;

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
    msg.setTimeStamp(0.951877401426);
    msg.setSource(342U);
    msg.setSourceEntity(14U);
    msg.setDestination(35861U);
    msg.setDestinationEntity(147U);
    msg.x = 0.106886066804;
    msg.y = 0.231283852067;
    msg.z = 0.67588526339;
    msg.t = 0.0376631131702;

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
    msg.setTimeStamp(0.306077749015);
    msg.setSource(24071U);
    msg.setSourceEntity(234U);
    msg.setDestination(46820U);
    msg.setDestinationEntity(163U);
    msg.plan_ref = 2700839631U;
    msg.id.assign("JABHQQJUGAJMWHQWKAIXZKFXCFNASWOVOGJNXBISDOXJTNLHSCRTYJNLLIDRTPZABXEYGCTZGOTXEWICOUHVPFIYYAKBZECLAYOMFGUBLPPOFUJCITSUDQKXWMVCTFLHRFJYRQSXULDUGOZBVSPXQDLVETYRNDWKQZRHIPZRJHCIPMYYDVMKDPARVKENLZUEBVYQNEHLMWVGSWMGONZQHKNE");
    msg.memento.assign("DEWLJGRVDEZMZYBUUKYMJXUQSDJZTCCYLOILFYSKOJKVLOOAMDPRAZLBLBUZJLSOMPHQWNVIKGAUNGNSTBQNWSWMOLTQVZGPXNYSEBGFBYNAZRMPAQIIWZFIPSUVDFRPRXVOUKFXPWZOCNKKCGDGAHHXNGEEXYFUIXTDDJPYUCHMKSRMEHDEPSDAMIACBTBUMCJHFVQORJGXRNTFH");
    msg.timeout = 22332U;
    msg.name.assign("IQPDHAHMGOFTKLUKLWCXSOMSBLCNSLDHSATPGMYWIZDUWBPYSTXVBKUNDQLVRIUZPURHGXHWVZOAEWEVFDKKOLLPWYGRJUNENEZGMZHBZOKMJIJEYKKVJQNFFJVENSUXIXODMQCFRYFGTQEWBFCJTQBPYTIATBMHCAQTYEGDWSWRPNVPSCFINRURLUE");
    msg.custom.assign("UPWIRCEEKRFYDXHHMVFSSTKNVTEAJANTBWUJYKXZBMGMHQNVPJLFHCBNPPEPYMAZRFXULQYWYWQDGMRWDXTEVKGTJIGJYAILONGOIKODTECVLKLGWMBOYWNACZCYDILF");

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
    msg.setTimeStamp(0.953937020563);
    msg.setSource(26897U);
    msg.setSourceEntity(36U);
    msg.setDestination(64251U);
    msg.setDestinationEntity(176U);
    msg.plan_ref = 3452311600U;
    msg.id.assign("HYMOZTIFLIBHAMWEIAOXVFUODJKLQBJNRPEHINZDHYRMOXXOMMZPCUVWNNUSYWNBYUYRZTPJGODZQLVV");
    msg.memento.assign("KTGQJFVPJPSPGGQNMOLJQAIEEZVDXWDGKVHHIIGFJJFLCPCDLSQPWDONPEOIXGLXYRNRLCRVFIOUHIGNUFLBGBSKMMQHCPTMIEZAMSZCEDBKFAHHQCNODAUFKBOQCZFAWDBCSKYKSBEXXMFITHOTZKGRLRHVRJQBAVDWZYYXCTARJEYVTSDEOUJTAWMYKRTEKOMRPTNWZNAJQVUJCMBSM");
    msg.timeout = 51893U;
    msg.name.assign("SOOEEZIMGUHKZWKOXMGXSCKMGLDETITYAWVHNMVKTTNVJQSXBRUKNPK");
    msg.custom.assign("OWXSIKZRMXXIFAFCPWXFIDPSUNFJELLDUYPADCNSVNQBUUOVAXVDJNNMWVSRILOWAKERGEZFPGWTLIMKSOHJVZNGZEHTWMQRKMEBXKQJOWMJCOYIAKDIDDPTAWTHBYXILDBSKUMEEFAFRLGPYNRJUVZILUACMLBTDMTKVTDVWYJQGQNGZKPZRXUCWYLGJQMKIOJAZHORHYZEGXBBTCFYVQLBHPRACTGCSOSPRXVHSOHSBCU");

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
    msg.setTimeStamp(0.236272152345);
    msg.setSource(55863U);
    msg.setSourceEntity(143U);
    msg.setDestination(52056U);
    msg.setDestinationEntity(235U);
    msg.plan_ref = 1265011789U;
    msg.id.assign("STBFVWKLRQWHPWEMIAXNXURARUJVZXCMCLYKTABIEFOJNUGNYZZJBKNEWPPWUGASRFBVHRQGHYFDKWOIDMTMYF");
    msg.memento.assign("MPVNUFOVAYTRZRMHDHZAEVYZASEMBESMGHALCTQZPXJNNIDIDQDKYMZOZRPADISXSBPXUDOURMRQYLTFTRLOVSJWHILRBCRZGBLUSIKEEKWJCXILUJZEBCKHNQOP");
    msg.timeout = 25621U;
    msg.name.assign("GZGOMKGPOAJBHLKXYFJZLQLYZVQIRHITFUQETGVEGKZWZQUDDIESFZHLEFUTTKBADHRJYVOUGBAKXJSGAPNOPEOTZHVXNASWZHTAFPLBMDNUFCWSVFSMXHLLBWICNNCXBONRCACYYPSUDWQDJSMVHBAQNWL");
    msg.custom.assign("USBQUWEKWEUVLZBQGBQIEKIUMWRMFAH");

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
    msg.setTimeStamp(0.915222744552);
    msg.setSource(49979U);
    msg.setSourceEntity(110U);
    msg.setDestination(46156U);
    msg.setDestinationEntity(126U);
    msg.plan_ref = 1809737400U;
    msg.id.assign("SDRFUEWFGIOMTUMBDDPRODSMRVMLZTKHYRBSV");
    msg.memento.assign("OUIJDSNKWUEPPZYVMTWGIJCHXTPXKLFTHILNHDKQWUNQSRXMBVQEIEKHXSGLFYLPWSSKCLQEOUCIPMWZYYEVNCMMMADEZLLDPHWSIDFGOIRUNJFIXOVODOZBGGMAYWTCUFAZYQDHQQRTUGHBOSMBNLVIVCROFVKADNWRBRYNMTXXATYMYCBFVZSEFAAZWRSOGDYP");
    msg.lat = 0.833154770793;
    msg.lon = 0.187191868476;
    msg.z = 0.0708743760511;
    msg.z_units = 40U;
    msg.speed = 0.13816619536;
    msg.speed_units = 243U;
    msg.start_time = 0.395202258339;
    msg.custom.assign("XDBBBXSANFPEPHWRMANWZFNBTCNBYASKOEBSRXRWIICULAVWKGJZUZTYJGRV");

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
    msg.setTimeStamp(0.620286227823);
    msg.setSource(22589U);
    msg.setSourceEntity(249U);
    msg.setDestination(25362U);
    msg.setDestinationEntity(118U);
    msg.plan_ref = 57067109U;
    msg.id.assign("JCRLEWTFGZHBNLPDMAVOIODOAXCOOJFWPZFZWFQQANTAFYEKFJSYEIMQDKXIAECQHMIDQKCEPQLLHAYOKGDXESVGLJJDQTPMMNCJRGWUAYPIUACVNTXGDINPINSGYWPBNOFCSWUZHUSKXSFJVZLEZQGFXRTJKGUZVEAZNOOWTBKVHYIDPPOSRGMTUWTEBVIAMHEMKHXUYVYTTJZCDCQWRYMRUDLGWRNSHBVXQIJLSFKCPXNUXVBBLHHRBUMR");
    msg.memento.assign("ZOBHLVWIESZKOKZBLQVXJLDKYIACIIQXXBLLUPCSQCHMFCBEJPIKCXTXOBVTAFD");
    msg.lat = 0.948382769789;
    msg.lon = 0.59522192385;
    msg.z = 0.0960317785637;
    msg.z_units = 148U;
    msg.speed = 0.529597428432;
    msg.speed_units = 119U;
    msg.start_time = 0.547303009826;
    msg.custom.assign("EHRNFCULFYAOCWCIPJYWIKMNAQPKVCCHKTAIRSBEMMDIBVNZRHUXLJXPPXYGPREFJABWHWXWREAVDJSAXZNDJDGHDAPMFGEUGNEOYRSZDEWZHFGVCSSLLRKQEKPFUFMB");

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
    msg.setTimeStamp(0.308224951113);
    msg.setSource(25042U);
    msg.setSourceEntity(48U);
    msg.setDestination(32519U);
    msg.setDestinationEntity(116U);
    msg.plan_ref = 2547512195U;
    msg.id.assign("HYMNQKNBQOHWFOMWXDMSMPGGELMZWHYTTZUZPQOOCPXDCJQVHTHYFRQARXGSELKRVYUXPNIISKUMLWJGVFDZAEXBAGSIMDNSWVKDKMIBDCJUULDVVQXIHLZHIAKZERQCNVYOOKWJBFPSHPWUFKHRNYIAMG");
    msg.memento.assign("AXWRALXVGKEQJWZUYGHKVZYHPCTYQILJXQBZSWQEVOMVYDOAGPEFKDYCTNDBSGLREZNWRACMFLBUNUQJSAHQDJCOIPRRBTJUTPUYDNBYYJTKKLNHAUZFFOIHPUNDZVHGEMBWRFPXJBFIVFLCXBNZVOAPSFIKHMSAPQODOGORGKZZCKEWJFCSJRXEGLKMXPZGXAMUELLONLYGNIXRAUVJCHHEWITTTYTWKIDQRTSSIPWUS");
    msg.lat = 0.712349966373;
    msg.lon = 0.00555637818126;
    msg.z = 0.564241985715;
    msg.z_units = 196U;
    msg.speed = 0.0579170945291;
    msg.speed_units = 50U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34868U;
    tmp_msg_0.off_x = 0.474182859949;
    tmp_msg_0.off_y = 0.85045234943;
    tmp_msg_0.off_z = 0.421085085514;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.657785849894;
    msg.custom.assign("JTBBSHWXNFAXLIRGLUJOHUNFJERDEUSYGUKANAIFTCDWQZZHQGTDUMXGMCGQQOKVPBJIWGVWOMZUURDIANPPESGRZVDNSWXODMZEFMHVRVSXWTXLBKBVLD");

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
    msg.setTimeStamp(0.994795743754);
    msg.setSource(63957U);
    msg.setSourceEntity(244U);
    msg.setDestination(48610U);
    msg.setDestinationEntity(131U);
    msg.vid = 63578U;
    msg.off_x = 0.411961834363;
    msg.off_y = 0.431431689968;
    msg.off_z = 0.102247093797;

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
    msg.setTimeStamp(0.0624241407304);
    msg.setSource(3507U);
    msg.setSourceEntity(188U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(144U);
    msg.vid = 24228U;
    msg.off_x = 0.756971719972;
    msg.off_y = 0.0178516809975;
    msg.off_z = 0.690778141618;

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
    msg.setTimeStamp(0.421371248764);
    msg.setSource(2664U);
    msg.setSourceEntity(222U);
    msg.setDestination(63954U);
    msg.setDestinationEntity(107U);
    msg.vid = 15832U;
    msg.off_x = 0.97186341151;
    msg.off_y = 0.982994360163;
    msg.off_z = 0.0543468853707;

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
    msg.setTimeStamp(0.28992660838);
    msg.setSource(6015U);
    msg.setSourceEntity(41U);
    msg.setDestination(57015U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.0504606948905);
    msg.setSource(57871U);
    msg.setSourceEntity(12U);
    msg.setDestination(55022U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.857325073002);
    msg.setSource(25356U);
    msg.setSourceEntity(72U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.201330907808);
    msg.setSource(26510U);
    msg.setSourceEntity(65U);
    msg.setDestination(50323U);
    msg.setDestinationEntity(150U);
    msg.mid = 45980U;

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
    msg.setTimeStamp(0.11850713543);
    msg.setSource(41944U);
    msg.setSourceEntity(176U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(50U);
    msg.mid = 48433U;

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
    msg.setTimeStamp(0.544809166209);
    msg.setSource(47701U);
    msg.setSourceEntity(17U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(2U);
    msg.mid = 7740U;

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
    msg.setTimeStamp(0.861567405323);
    msg.setSource(26132U);
    msg.setSourceEntity(141U);
    msg.setDestination(28104U);
    msg.setDestinationEntity(135U);
    msg.state = 19U;
    msg.eta = 43291U;
    msg.info.assign("ZPCDWHUYJSNTHQQWRJIFLIUPWZTUEJFTRCQOKTKSPACWBILAWKJJMGMYVMCYPGOGPBKLRACUZYWDOJBMA");

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
    msg.setTimeStamp(0.616787264926);
    msg.setSource(24434U);
    msg.setSourceEntity(45U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(234U);
    msg.state = 0U;
    msg.eta = 64756U;
    msg.info.assign("GRYHVXPROVMJGCPTXTJEEMZBFDQLJBPQYULDASBUNIUCAGKAMFIWMCYNRAQNBZTBJFXHWMJBWOAXNZBROHHHEIIFEJCVLDVSPCHOAASWMHQVOGQETOZXMTQUTPZCSBIETWPVUEIEJKHJROCRKRVULIGUNVPRFGAWUEIPDBSKFHWYZAKZSCCGZDGQGNLUUYYWJLKOMNYDVKBKYKRESOSXGNSYONZXXFFNLDQVI");

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
    msg.setTimeStamp(0.457336387281);
    msg.setSource(3668U);
    msg.setSourceEntity(88U);
    msg.setDestination(43107U);
    msg.setDestinationEntity(149U);
    msg.state = 30U;
    msg.eta = 16664U;
    msg.info.assign("TLKGGFTXNQYAIRTEHQLACDDMIINJPPMMWTPVAZTSBJYBGGDQQBCNCSCOMMPGRNSHDNGQIUHGLFTPRKPLAHUQXUZAHMIVMWRDKQEKAROJOQCEWPWGURLJZUOQZLEZMYXSFWLDKPULAQBOJBJBSTIIHZZVGNBKXXETWYDKVSXVLKLWCY");

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
    msg.setTimeStamp(0.451158338081);
    msg.setSource(47860U);
    msg.setSourceEntity(43U);
    msg.setDestination(35252U);
    msg.setDestinationEntity(31U);
    msg.plan_ref = 1550317833U;
    msg.id.assign("SGOYWIOTRBSGFOYVXHVNKBNVSLWAELUGQTNWPCJZOSYVASZRKLOLRXFCOEZOGLFAMJMDBZWCMHEMOXCFIFSCXZBMKNHGGADAYUJLKQMUYMIPKTYQQGJTESQVZRIBDEDNSCHZIDRBVYABCESIILWGMXZYCQTTWPTNQDURURHUPNXTAYQCLDAEBKNBWPKUWUKTJNBOKQLYJVDCPWFJAVDGPGFTR");
    msg.memento.assign("WNCEPBOZFUX");
    msg.system = 52970U;
    msg.duration = 13065U;
    msg.speed = 0.988943726526;
    msg.speed_units = 37U;
    msg.x = 0.564651748838;
    msg.y = 0.149623202294;
    msg.z = 0.755430081546;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.470798285464);
    msg.setSource(58228U);
    msg.setSourceEntity(109U);
    msg.setDestination(7910U);
    msg.setDestinationEntity(47U);
    msg.plan_ref = 377115325U;
    msg.id.assign("UMFZLDERCTKZKFUHUDIQYLTIZRCYZWPFQGXXHWOBNLFIJWXMOBDRWXZKRNVNEMMTYZPBBKGMVHAHDDGQVEHBOUUGPXRCPSSCKQEMSIRIQAIHVBJFUXEAXIBVRDJJOMPLKAONSCMHSVIYFQCTULFZDTKGBKGWAAGWAANAWYX");
    msg.memento.assign("BCPSJIUXKCHDEFGZMZQBFGNRVJZKVQBITXYOFAUNKSIWFGDMOXADWWKEGMQMCPKICLTXLRLELFXIJUQCIYB");
    msg.system = 51009U;
    msg.duration = 20274U;
    msg.speed = 0.441575066005;
    msg.speed_units = 141U;
    msg.x = 0.713300143883;
    msg.y = 0.412431644537;
    msg.z = 0.785907405512;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.586263291494);
    msg.setSource(3699U);
    msg.setSourceEntity(187U);
    msg.setDestination(37126U);
    msg.setDestinationEntity(85U);
    msg.plan_ref = 3070950927U;
    msg.id.assign("ZDRIZXGHFVVICFGYXGTJMWEBNYVPBQZQXEXHBGRWKDMFYQWGILMJLITHIEHLDTANRZUKKDOUJFPTSMWAVVEBJKXUTAFDUWDYHUZPKLOHSPOQBSLWSECMPTNEKAJGFDOQAMABRGMKYUZOLSNOHKJSPICRBBMCXUAUNQTNLYVQAOUDALTNILPIGZDJHLXZNZYXGPO");
    msg.memento.assign("OKBOULRHWIZWYUVJMTVOGSVUUYLRMQBSQPKLUDIVEFLPBIEXZDRZEROWJKXDEYTFPKAUTXSOZFICBRUMXSWQNNZUGADSJDLQRIONEPKUGVLSMKHCAYDDFPNKCCXKTVYCJFROVSDDBAEMMQGBGFYHNUHXTJDPIGHFLYLACCWTVGIRNMNPTNABHBZLJK");
    msg.system = 25387U;
    msg.duration = 38761U;
    msg.speed = 0.20924671145;
    msg.speed_units = 69U;
    msg.x = 0.970721464392;
    msg.y = 0.7598803846;
    msg.z = 0.462812951116;
    msg.z_units = 166U;

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
    msg.setTimeStamp(0.0916641069668);
    msg.setSource(5752U);
    msg.setSourceEntity(52U);
    msg.setDestination(37251U);
    msg.setDestinationEntity(182U);
    msg.plan_ref = 3696149892U;
    msg.id.assign("CKCZADBVASXZLLCHKUAZOMVGQFDSHYJJFMSNXXFYJXMEGXXENIOSLPLLGMNIOSVRQEHGONOCMTK");
    msg.memento.assign("UKQDFCHFITAXRALBZLBRCPHCVGUTZWVRDENYGXETARQMXIPXL");
    msg.lat = 0.968570936504;
    msg.lon = 0.157233991089;
    msg.speed = 0.444615365737;
    msg.speed_units = 71U;
    msg.duration = 37440U;
    msg.sys_a = 46411U;
    msg.sys_b = 20553U;
    msg.move_threshold = 0.249759776951;

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
    msg.setTimeStamp(0.507726450985);
    msg.setSource(8274U);
    msg.setSourceEntity(120U);
    msg.setDestination(26136U);
    msg.setDestinationEntity(66U);
    msg.plan_ref = 718506096U;
    msg.id.assign("HLSQJHLSISEIKHKTHEQKYTPCYOQZPWTGHVDKJDEPFQNMBENKQHNDMCQYEDBXCXCXYINRPNRDWXUVODUTHRBXSJBVAEVOQJRHWPSNDGBYHVPRDCUVZNFPFCLOFKZUSMDYUIMGAWLVOALTMGBKAKGJJFELGGLSZFRMOLBXAJPIYSMWTOAWYGUXZQFIUTC");
    msg.memento.assign("JDEUIRKZZGRCWJJSPRCEERVNBXQMZYVUZMKUPFSWFPFFWYHWATSKPRDLMODQRMVQNWGLJXCEQHYDMAKUEJUHQADYTXFWEYTLLFHVJQKXOISWZDPVOEBGBNAZGLBTQPKLIIUPBXEASTGYURVPENISHFDXRZGHVLDLWOACVIXHTMCHHGOZXBAFPONCBZNVOQKCCJHDOKNUAIAGUKMJSYELCPJYCMRTTSGIALYKNTSFMIGMN");
    msg.lat = 0.864094093759;
    msg.lon = 0.7613171581;
    msg.speed = 0.484401555548;
    msg.speed_units = 96U;
    msg.duration = 45402U;
    msg.sys_a = 4547U;
    msg.sys_b = 57361U;
    msg.move_threshold = 0.665257814528;

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
    msg.setTimeStamp(0.0684451666259);
    msg.setSource(52405U);
    msg.setSourceEntity(80U);
    msg.setDestination(53446U);
    msg.setDestinationEntity(29U);
    msg.plan_ref = 4010160984U;
    msg.id.assign("EUBBGIURKPDCYXBJLLLMJVVFRAM");
    msg.memento.assign("EOXWEOHGWDRDUCLYAIVQBYWZCVRSXKPBENVQGRHUVLNTOCMIFVBPBNQNKVYVZSEIZWNYWXNHMKJAUOZGISTVQPWRSPAXIVQBJUJPGUISHEINEDOJDF");
    msg.lat = 0.0200713740966;
    msg.lon = 0.281058956822;
    msg.speed = 0.555796761331;
    msg.speed_units = 117U;
    msg.duration = 15801U;
    msg.sys_a = 3367U;
    msg.sys_b = 1289U;
    msg.move_threshold = 0.484148625286;

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
    msg.setTimeStamp(0.290886110362);
    msg.setSource(6716U);
    msg.setSourceEntity(60U);
    msg.setDestination(7785U);
    msg.setDestinationEntity(254U);
    msg.plan_ref = 2841066321U;
    msg.id.assign("QMEVJHLCJDJGGOWTUJBYBYAAVAQLWJNPXZKFOAQSFSIILVSZAMQANDSXGWOHBMMUYJFTGAQCTAPUUXEISLEKDTBSUTOYGBBYHYFMHRDQBFMYUQMZEGDUKJHNPZRWSKTTHDWLZEEMIQRBCRHQUODUQEEFG");
    msg.memento.assign("UOHCHVMEIJIVKZYNKSQRSDIJDGYQURVZBHBOXOGHKDFMZACWSKEIJRLLEDZYDAPAOJLJZNTNGXNYXNMZOPIDOLPSMPTPWMMAJSWYBSWDRLQOLFTYOSASFIGMBTPTQJNIUUXVWLEYGHNOFVEUYBWIFVHATXKVRXCELTAG");
    msg.lat = 0.359338722382;
    msg.lon = 0.680001644188;
    msg.z = 0.235369528116;
    msg.z_units = 208U;
    msg.speed = 0.529001179822;
    msg.speed_units = 3U;
    msg.custom.assign("SEKPLQUHJOZFHWBBV");

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
    msg.setTimeStamp(0.243412331001);
    msg.setSource(23487U);
    msg.setSourceEntity(148U);
    msg.setDestination(46292U);
    msg.setDestinationEntity(25U);
    msg.plan_ref = 3330372186U;
    msg.id.assign("WVEFZMSGBMYNFMSNKCIGSRIBDKKELGMZICLVYXGVZUPBHHSQREDPPMINHTWUUHJZKZCAQLJFRAMRENDQVOHJJBMOEVKYBCQOTADCLDXSXAPTZTVRBFUJUPZXXTJEYBRSDBTHYYPBCMENDGAZLFYRYEDUVLQOGKNQQDLVQLWTICHGWRPKASCAVSUKSXTRINNWFVHMFJHIXYWOAAOJLIZQOKWIGFMUQPCWPUFJOXIGANXBPROZWJECT");
    msg.memento.assign("CRRJBVEWIVYXWCQFQCHUKUSBVVPHQJBMIEHHMPWWIGUGIGIVTMOTYKVUOFDICXNGBMSKTXOHOPHXNOAVSHEEIQGDQIYELPDHEXRPFFFVALAAXZKBZCRKQKQYPGYWYOJLXCKHUTGA");
    msg.lat = 0.403746027153;
    msg.lon = 0.698289679153;
    msg.z = 0.711909203426;
    msg.z_units = 22U;
    msg.speed = 0.32021466494;
    msg.speed_units = 33U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.903132850276;
    tmp_msg_0.lon = 0.576963014326;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BDDHIQOQTPTFBHADPWCAXCLRPOPKZFUOHIMARETYROXPWIZOPVQNQANLFBIEBJLGBNAUSTSATRGTMNXCYWFWWEEMVECYDGPYZRDVLPUTFXRXUNKLERNIUMKIDBTLNGWUNSYJYUDSMLJSJFQLBGQIHRXC");

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
    msg.setTimeStamp(0.764329835721);
    msg.setSource(2534U);
    msg.setSourceEntity(53U);
    msg.setDestination(29546U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 3186641372U;
    msg.id.assign("PWWWGAJBEXOPTIGGWBLSBTITWETZFENZULRMJYCZKOHKOUMHLLORQPMGVUIHIAPBYCMYULYBQLEQMQFXNZACUBQJMVDVXYLFGZAUSQTRKNRTYNLBTJRPPNYFASHICGCSXRKIONWGSXVWXJDVY");
    msg.memento.assign("HFBAKARSYWOKEGMVUVATOBBPCDPNQGZBOIFYLNLDIXSYELXSCTFPYZKSYLCGRVSUQFJRRXWWSPZIWENTLRGBRVCJOFDOGOZDIGFJNMEHJYDTPQLFLSYDPVMMPAUQMIUMXJFRZACBOOEBKHXHLVNABYJXLMSNWTOHBKUQUUISDEIGMKNPNOHLXWYWEKWPHAHEZWYJJKRDMNHRRUQMZDQZCPXJXIKQQICAGFWNTAG");
    msg.lat = 0.735444211912;
    msg.lon = 0.254985447333;
    msg.z = 0.43841467468;
    msg.z_units = 50U;
    msg.speed = 0.59888867134;
    msg.speed_units = 25U;
    msg.custom.assign("VBDYNLTWCWIRMISHJHGWOPHDHHUAQVXQZQMVTCWEOGOEYSFQJCTBFIXSKARSORTRKBQQGHTYAZBHCVFTPFDHLGFUQGSHDOVCBMCYSJMCYKPEPJSXMSJGGRE");

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
    msg.setTimeStamp(0.912335071596);
    msg.setSource(4285U);
    msg.setSourceEntity(95U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.636122361914;
    msg.lon = 0.251602493478;

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
    msg.setTimeStamp(0.34560692259);
    msg.setSource(50250U);
    msg.setSourceEntity(165U);
    msg.setDestination(30834U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.0776428502748;
    msg.lon = 0.373743950346;

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
    msg.setTimeStamp(0.649868438823);
    msg.setSource(53335U);
    msg.setSourceEntity(59U);
    msg.setDestination(58377U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.451649099842;
    msg.lon = 0.930403178537;

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
    msg.setTimeStamp(0.145877072534);
    msg.setSource(10285U);
    msg.setSourceEntity(218U);
    msg.setDestination(50651U);
    msg.setDestinationEntity(177U);
    msg.plan_ref = 3431552914U;
    msg.id.assign("ZJJGSNAVCOLFWTURYULGNATFGOMVPQKAUFVHHSEZIZXCENUMXLODXURDEAIKUDKTGDQDIWPAILHVSIZGBCBITJIEHPVBX");
    msg.memento.assign("ZRSFMYFPIWREWKXSJRZEKXVOLOTOMDPBWQYIAQBAHNSXTJMOKSUVMDGEQIIGHDTGWUDGRXCJUHENVEGZVSJPCPGNOFDQRCFNLUACVTILXGBJPNJBURXEDTZZWAYGUITUOOAIZHDNTBRKBDEGMCPQABFFYMSEPCQUZAHBEKMPHJLYZZOLMBCSHZINFIRWQWPJTDUVCTNKFWHLBXGUWYLSNQRVDLKASX");
    msg.timeout = 23196U;
    msg.lat = 0.442729643512;
    msg.lon = 0.320950613496;
    msg.z = 0.922385381804;
    msg.z_units = 146U;
    msg.pitch = 0.659742486129;
    msg.amplitude = 0.330203148963;
    msg.duration = 23907U;
    msg.speed = 0.284557565906;
    msg.speed_units = 65U;
    msg.radius = 0.134286363898;
    msg.direction = 42U;
    msg.custom.assign("AHUBTXPEXZNMGQQUMOATMJQPOHAJCHNKOCDUBQWSGIISIVEZGJSTESGYC");

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
    msg.setTimeStamp(0.230275344583);
    msg.setSource(12943U);
    msg.setSourceEntity(42U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(151U);
    msg.plan_ref = 3921747426U;
    msg.id.assign("VRAETOZXBEXYHGFXBNVFOUMZGIIASXBKNPDGQDJXHHDUFITBSPBKHCHIMMZRHMOQLIQCGLMXIOMOKASORMEPLUE");
    msg.memento.assign("MNRKJNVVRNNQTWEGYWBZLEHXKYMNFBFLWEVZTGKOPJMPVAWHHKEJSDAQCCYUGWKQBBPMIVAZJNBILRAMGHZPLXRSOIMKSOAXPDCSFTDUCXWXFJISHIMMYJMAOVCJZHXWLNEYCXJESOQURBCZQEFXFQVOKNVHVDIYXUSBWGLNO");
    msg.timeout = 34134U;
    msg.lat = 0.956483965137;
    msg.lon = 0.89679004798;
    msg.z = 0.297704852117;
    msg.z_units = 207U;
    msg.pitch = 0.699427937649;
    msg.amplitude = 0.0155059295623;
    msg.duration = 21326U;
    msg.speed = 0.498761872226;
    msg.speed_units = 48U;
    msg.radius = 0.281938342431;
    msg.direction = 164U;
    msg.custom.assign("ZBQOERAJYOISCQOZLFWPRFMJKGSFLDHKSPCQWNEJMFDXHYOTXSRRJPNAQNKMAIBJVVVUBGKCGWHNJUXNOEBEBTCTUBIHJQUCVUOPGOKXQLREEGALVFPNWYBQMQWRWLZEXPHFNXVYAMPJOKBMNGXRSIFGTZHTZMQPSFBETSIVDAJWZCXDYADUDKSDYXRCTHMTCNINEAXUIKUEOLBYJMPVZRHGZUKWWCIYDALLZSMLIKGHLH");

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
    msg.setTimeStamp(0.541661148167);
    msg.setSource(58023U);
    msg.setSourceEntity(236U);
    msg.setDestination(38516U);
    msg.setDestinationEntity(102U);
    msg.plan_ref = 1841999703U;
    msg.id.assign("YKQKGPMMYJUJELSZNHWMFKXEUOMZZYMIKLLUPLSBGYNSWJQILOQVERVHEFBCDHGGKDXRBOTDNJDAPBSDTYDCTHMZOYNZZHPTAIHYJUURQEAPOBXKFFRXQWKRXQXCIZRTTOTYMQRVWIJW");
    msg.memento.assign("RPSKTJWUXVRSBTKFUNVDOYEFBHSQPSNFBYZVLTTSKXGCHUEUGNOUMVIAFBRNJBQEMDISXHFOCJRVHPLJFWZDOJEZCHYTVFDMMZQWRIIYAHPMLLEQGYUNLFHQZZWFHALUQSYATJARNKBKIDARCNCKSMKMWOXXIWN");
    msg.timeout = 64452U;
    msg.lat = 0.376045800986;
    msg.lon = 0.471553308911;
    msg.z = 0.580271243299;
    msg.z_units = 236U;
    msg.pitch = 0.127783824168;
    msg.amplitude = 0.830091731534;
    msg.duration = 9199U;
    msg.speed = 0.730395760637;
    msg.speed_units = 197U;
    msg.radius = 0.693833059411;
    msg.direction = 138U;
    msg.custom.assign("PFWLLKWOIMMREFGZRXAUDVPTQUA");

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
    msg.setTimeStamp(0.442289752804);
    msg.setSource(9668U);
    msg.setSourceEntity(127U);
    msg.setDestination(36959U);
    msg.setDestinationEntity(4U);
    msg.formation_name.assign("PMMUQUSQLQCYFHNTORKJTEWLSKTABXLMAVLDARYPXRQISEMWDGIAUVRMYXXAAPMDFHCKNPZEVEXBRMWNEQVNRZGFWZRXYBLEBYNDLJHHSDFTPCEWCYOOSDQMV");
    msg.reference_frame = 81U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14961U;
    tmp_msg_0.off_x = 0.408025831039;
    tmp_msg_0.off_y = 0.342680898949;
    tmp_msg_0.off_z = 0.561856376633;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VCBELGSBCCHBJWJ");

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
    msg.setTimeStamp(0.159074598566);
    msg.setSource(28068U);
    msg.setSourceEntity(3U);
    msg.setDestination(21823U);
    msg.setDestinationEntity(86U);
    msg.formation_name.assign("DQQAQKIBNBRRAEBYFIWHFJKTFKUEIFKWUWUPPJRCGIVFDJMLZCSI");
    msg.reference_frame = 7U;
    msg.custom.assign("PHJVFKRCUGRTXVRZIDIJPJCTHERWPSBEUNCZSQDGKOKSBFEWRTIDSZMCANOHUTXOJUFNBAKLYONGEJUXDEVVSRQQQKNMZLYIHKFHZMRKAUPLHHDLXWVXPLTRGWDBATFYJHAMJZCLQDFOGFJGPQRGDOQSFKGQINY");

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
    msg.setTimeStamp(0.31793675236);
    msg.setSource(42494U);
    msg.setSourceEntity(98U);
    msg.setDestination(47160U);
    msg.setDestinationEntity(227U);
    msg.formation_name.assign("RTXJCVHHQEMNBRRHWKKMKQEVCEXIKPUHTOBOZUNGEDFLFPEURLHSHAVVJNZFBOCDDBWJSJRLELXQYDSFZQPWGVBCUDXYKQKQMVLYSTYGUMSCAYPAYIBKRWEHFMXAEGFONMNBGHIHZFZGBKWEAZCKNGVYMGKTOLMUZWJSXJWXRPXTPDALXPOVJZRZJWQOXQNIFVCFUVNNSFBCDPSOIROAPLWTAZYUCBLQIIYDTMTNCISQAERDATJDUGY");
    msg.reference_frame = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58652U;
    tmp_msg_0.off_x = 0.837769796702;
    tmp_msg_0.off_y = 0.451786474561;
    tmp_msg_0.off_z = 0.897945487475;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JQOQCXUKFLJHSUFXHBYZODEJCWASMUNZONZBZSQCOXMZDOOMCYVMYOLMPSPCUWRHNSEYTDFYYAQPWFRJYDGTRMGKPHLISBVDFAMBHQILJXEPWFMQDLVBEWJTLXRFVPHVNDVNFKCETTIZZSFBHLIVJSYWEPZXINCNYXIGAADQFQEKGLZEMZXAXUUXHGNRILGRCQODVIQKJGKKTNWCUBJPSBTOIWTRWBMPEUGUCKLTARHDIPHGOUAAVBJVKNSWE");

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
    msg.setTimeStamp(0.542093182921);
    msg.setSource(12505U);
    msg.setSourceEntity(83U);
    msg.setDestination(48948U);
    msg.setDestinationEntity(15U);
    msg.plan_ref = 4064131686U;
    msg.id.assign("IFIJDXHDUARBPZCIGTECVBCLCPHRSWIOIYUDKZDC");
    msg.memento.assign("EEEPEIBFSERFIXMXVPRPNAOGUQOCCNLKHXRRMJGUBGTLYRDBWLWVDNDAKJRPJRWWAYZSUKZIBCZXIPFHEBTGABHOMHZFXVAZXIOQIQMXUKOKSGYOWKCPVGTCGFYWFYXVQWNCNJFIBTAKLAJESYTHQDVPKDMFJLUPMGTNHIDNSALDJUCSBUKBDQMCGGYNAMYOZDWZQEUYY");
    msg.group_name.assign("ROGBJEYMQDHGSISYRJPDREYCGKRVVOGYDHWSIJTPETPBKTDTARTCJXHDYHKVFHWLHUKOBZFALHUVWSMSWNENCAADBMVJXQZGESRFNMIQECOHTUILDRHCOMLFPVEZFSYVBZGAOITKLZPCKRYNKWWSQIXLPPZVZDCNNLQUBACOKOWXMTFAYQJMGCACBNJUASTZINBXUJJXZIXFLHU");
    msg.formation_name.assign("TQUYUYDDAOYQJMWQVGEHYLXIHHFMPSEZKDYNBRJCRGBEXLYTQANRCTMPSHEKWDGRNQLJCRBOSIWMBU");
    msg.plan_id.assign("NFLWOEANESVFDUJYZUHWSAFJHOQSSTUSRRJCZGCKYAOJNWJBUALQSWMSZVVSDOHMVTYTDDCOJNLPIPGPKTXBVLVGBGIMKPDHUBYCENQEITLRBHGBIDXDKBXQPZWIUMUXEZARLQBPDOU");
    msg.description.assign("JDSHZHAUWKECUXDMSRHC");
    msg.leader_speed = 0.768567394953;
    msg.leader_bank_lim = 0.38214648218;
    msg.pos_sim_err_lim = 0.63464581776;
    msg.pos_sim_err_wrn = 0.957925609288;
    msg.pos_sim_err_timeout = 25386U;
    msg.converg_max = 0.285003109396;
    msg.converg_timeout = 38261U;
    msg.comms_timeout = 52100U;
    msg.turb_lim = 0.494312751053;
    msg.custom.assign("MIIWYYZJUASKOXMHVXWYPEFUAABWHWOZTXGIWFHHRASDJJFENCBSPJYAFCGZDAKKRNLBZEYKFOHNHQZANELTDFMUIIPLFVLESYBVGIOMRWWDLQKTOUTQHSREIMAHYMZSGNMBCOJRESXJXVLQVOBJZGKRNNCNKCUUZGBPVAHMQTK");

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
    msg.setTimeStamp(0.685965065048);
    msg.setSource(49923U);
    msg.setSourceEntity(170U);
    msg.setDestination(52818U);
    msg.setDestinationEntity(132U);
    msg.plan_ref = 1984138965U;
    msg.id.assign("PLEDRSILRJYXXDTWHJNPPQNTKEOUBMLPFOKAHWIDECMGNYHVDZYWSIVGZWETZCAMNRQJJPUMSTXQEPXKUEHUSBRASDLVZRGFWDHVVADFVBHNECVILQTYNCURJPEJMHZIZUECDUGCXAZKYZKRFBIOICFYXNRJIZIYUKXBUTKALTVQNMGOBOXPAMWYJTDYTWLXVKWWYSCCIFJCGQLAVODQSHLPARPGBGSRMHQWMXOQOTBFLJMNENGOBSAZSKGHQ");
    msg.memento.assign("AKOPXLPCWIDSLMAXTFDRMWTSKNBHBLWQVDBIYTFJIPZUPWBOGDAEZMOTEB");
    msg.group_name.assign("XGIQDFAJMBMYURITGBWDCQGINFQVHQZHCFESJLEHZWWZTAPSJTMJQUVKGMFLMRYWQHEIIVEORGDNAPVFVXRAYWGNPPUGBXCLYCXYSTCEADMTTKFKVFRKZPVJKJZFWOHSFVQSBBBJPSXLBGCDUYHJQNIRHSYJBODTSRONPUDTRHBJPIOGVZGCZLKOCRLKXDLCACMEBWUEAUPNXAWHNELRLWZO");
    msg.formation_name.assign("VYIPTIGDIXZVEEFMJEKSKGRELXMAQYCGDKAVXCBFXDTWWDDUBCSXQVINKYIPIOGDQHQEYUVLZMGAYWSCPXLMBCKUMBXQRJULPPUTFOVHJFLQPCTVBCUBINQFGWZAHCKMZJRRCGAJSVIIFZGHRFSXVQNROKTXHYOEZXUBHHJGEMSIZPJTLEQBZLKAWTNQNPSEOATVUCMPOYEUJLOAHHRRAJNZBNDJTWHSUD");
    msg.plan_id.assign("DHOULGDRJEAIJFZDGKVPMSNYGCVRXCQXHZOAIAAJLIBHQUPDMRSTOPYPBOPKNENGRZLOABEENWOZSCLLMLSUEEFXOVHAEFTKYWINJLYZGECFIDPEZDDQQYOLBSKPRQMPGOHTBVWJMFWHFTBUIVBGTXFCCMWUGNVDDBORNSSXKZTZWAQISCZKFBIRIVGWZWFKXXRGUKJUYHUXJMIUVSRKYQCLNTPUVHEQMFQMTJBTWALANDHYCRMCAH");
    msg.description.assign("UBFBXYFCLMTHSKYPTBMVAUFNVIQKWUGKJAACPIBKHMDDEIJHJSICTUFMFJOGZORQZHYQPEVGRFLAPAOEDBKNOZWNVZGGOYGJKURAEPEYQHZDQWNXMXXXGDCJEGTMVQIZEWURSNTHLMFJBNPNPFCQQTIWIALRTROHYGUKFDDHSUCVSCDAXDQINQHLYMYSYANO");
    msg.leader_speed = 0.854828998791;
    msg.leader_bank_lim = 0.310156618844;
    msg.pos_sim_err_lim = 0.394734300943;
    msg.pos_sim_err_wrn = 0.213054989624;
    msg.pos_sim_err_timeout = 10014U;
    msg.converg_max = 0.996487370958;
    msg.converg_timeout = 11439U;
    msg.comms_timeout = 22711U;
    msg.turb_lim = 0.729754171873;
    msg.custom.assign("RBLUXZSYMOAKNYNXHCMUXREQAKRJMSKVUJTSCVIKJDXNGHGPFHLRDUIPCCJBBEFGRQQNOZHITJPBVPYLSKQHCMOWYIWMFFHFVUV");

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
    msg.setTimeStamp(0.598969420845);
    msg.setSource(35119U);
    msg.setSourceEntity(111U);
    msg.setDestination(52492U);
    msg.setDestinationEntity(75U);
    msg.plan_ref = 349594278U;
    msg.id.assign("MQVGGQTYXKICAAFBUQPJMGJTVTEETGWELXMLGWMNPCOZRUPKEFEHDCPUDSIOWUWBNTAHCSNKKTOKUVMXASSFOCLZWFHNKDJZLRTNXSVUSHMPCRTMWMBQYUWQUOFVHQXRDDVCFXZYAYILRBIPPJBKDODNRFEGLTCDAQGYICYSSGLEYFDVJWHRGBWAHMHIEGVOR");
    msg.memento.assign("TONOKLOIMCWYAGXVSWHWRVVFIVNFOZJRUYPUGMQDMLXVILWHGDYDSTNUOJZAQ");
    msg.group_name.assign("SZEYXZOEBBFNLDTFDHJAWPJLXRZGUSEATAJKGHUL");
    msg.formation_name.assign("XISEWWFUYWNAIACQPPRMIQRKXICCHYPJKPEMAZTTDEADCYBAWNMUELTLYPDOGSOELQGTRWOBQSEY");
    msg.plan_id.assign("NALMLOUSAQMXRJNDVBHNVOYMJQCJGRCNGJIVQXHPKUQAGQHMHWTNPMZGRWBVETCRJGTEZKAVZKQDABLJBGSAXTCEH");
    msg.description.assign("PNQLOYARHPGSUZD");
    msg.leader_speed = 0.636153969148;
    msg.leader_bank_lim = 0.317260215845;
    msg.pos_sim_err_lim = 0.377792043817;
    msg.pos_sim_err_wrn = 0.474225120741;
    msg.pos_sim_err_timeout = 64982U;
    msg.converg_max = 0.17998268286;
    msg.converg_timeout = 31760U;
    msg.comms_timeout = 42322U;
    msg.turb_lim = 0.6576427534;
    msg.custom.assign("RLHBQWTWBYLEFKRJV");

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
    msg.setTimeStamp(0.0708205961687);
    msg.setSource(31740U);
    msg.setSourceEntity(106U);
    msg.setDestination(64269U);
    msg.setDestinationEntity(149U);
    msg.plan_ref = 2795269396U;
    msg.id.assign("GCPJFCWOMOEETWIGAQDAWHSVZUIJPPCMHZQLDDEQWZMLUZLTBJOFVCGVPEOZCZVTSEOUXDRYPVGOJZRHTIFEPAQLYKDSUYOQFMFAPXYQHNRKHATBKJXMYUILAVXKEVTVKBNSKUOZGUAGMMHNZFBJWCWRNXUHVQFINXLHXKSIXN");
    msg.memento.assign("NSYKETXHMGTZRARIHMJFDDBHBGTCVZNJMWTRLSPLDDSIYOBBOAQAXQLBOPQAJRVWOHKFUMFGQKGKQRSCSJYUYTDQUWUPHPQALNNQHMYLSBJYFEXZNDCSKECWHPBPFBGEIUVGZSJUMFLIUDHGUCKLXYTXLWTMQVIWVTUWBLRJYKIECRGCTPWXHQNAGAUEMPDZHCZJDK");
    msg.control_src = 41431U;
    msg.control_ent = 170U;
    msg.timeout = 0.862670748408;
    msg.loiter_radius = 0.629408200065;
    msg.altitude_interval = 0.0222297020266;

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
    msg.setTimeStamp(0.74946117032);
    msg.setSource(45113U);
    msg.setSourceEntity(138U);
    msg.setDestination(25853U);
    msg.setDestinationEntity(160U);
    msg.plan_ref = 4164694533U;
    msg.id.assign("WJMVUGXGSAVBAWWZDOOJQXPISZNFMROTQQZWHKXTDFQYKNHMHLDISOEVFFHBCUKBYFKKHVCEMCIVJZSXXDHSPXGXMPJJFYNNFVEWQSNYWIUNBUOGWRDNJSZIDYEVKKHYVMTOUGTYAPBRBUEJZAVGWJ");
    msg.memento.assign("CCCRXOYNOXLOBIHFJLAZTDONXOTSWWNBVBOU");
    msg.control_src = 2143U;
    msg.control_ent = 223U;
    msg.timeout = 0.637074558759;
    msg.loiter_radius = 0.798828688694;
    msg.altitude_interval = 0.6177788874;

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
    msg.setTimeStamp(0.228410939396);
    msg.setSource(3048U);
    msg.setSourceEntity(77U);
    msg.setDestination(17510U);
    msg.setDestinationEntity(174U);
    msg.plan_ref = 833223754U;
    msg.id.assign("NHBHJPVDJYYQPXHTWIENVPJVLXCZSXTFUGDLJWWTZFDPAKIYUFYPSWOAPUNUOAKKXSCRUEWUMTHGZBMOOQYDVALGVIFFEMTECKKZLBMGQRJYINBZCSEIYWHQCIRVASSHGKVINQMXRFMTNDCLUZKNGWSWJRSJYHARUHFLYNZFXPHAZOGXSTICBMRBMLEQLNROTAQBWUAOXPAQKOYJDECEEDFLBZFVIVSZGPCMJDOKX");
    msg.memento.assign("FXCGHQGWPBWRYJMGOXHFEIOVBUNCBMRDNLDRMNYPKDYSTTTVEJJISNTFMNHAHVORFPQAGAZORWJLLQKYZKIKXMUVZRPOJEEGFKXLEHWHVYKRUVGCTAXARMJIYEXYLWZTSIUAMFA");
    msg.control_src = 22625U;
    msg.control_ent = 11U;
    msg.timeout = 0.555550957453;
    msg.loiter_radius = 0.97119747842;
    msg.altitude_interval = 0.800627549529;

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
    msg.setTimeStamp(0.442374989063);
    msg.setSource(5814U);
    msg.setSourceEntity(35U);
    msg.setDestination(48528U);
    msg.setDestinationEntity(241U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.311641271561;
    tmp_msg_0.speed_units = 164U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.770800957616;
    tmp_msg_1.z_units = 22U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.601899333392;
    msg.lon = 0.32088262594;
    msg.radius = 0.200675518249;

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
    msg.setTimeStamp(0.160056931687);
    msg.setSource(4423U);
    msg.setSourceEntity(28U);
    msg.setDestination(5431U);
    msg.setDestinationEntity(156U);
    msg.flags = 33U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.354850060384;
    tmp_msg_0.speed_units = 135U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.383062136119;
    tmp_msg_1.z_units = 49U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.340127912143;
    msg.lon = 0.450465969202;
    msg.radius = 0.117016138072;

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
    msg.setTimeStamp(0.765872761339);
    msg.setSource(13521U);
    msg.setSourceEntity(93U);
    msg.setDestination(55578U);
    msg.setDestinationEntity(161U);
    msg.flags = 24U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.693985194844;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.577659653977;
    tmp_msg_1.z_units = 19U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.632674684854;
    msg.lon = 0.689835592645;
    msg.radius = 0.775424002442;

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
    msg.setTimeStamp(0.122840529359);
    msg.setSource(53899U);
    msg.setSourceEntity(230U);
    msg.setDestination(13908U);
    msg.setDestinationEntity(105U);
    msg.control_src = 56710U;
    msg.control_ent = 162U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.469667676297;
    tmp_tmp_msg_0_0.speed_units = 191U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0944998027415;
    tmp_tmp_msg_0_1.z_units = 65U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.146145921827;
    tmp_msg_0.lon = 0.267178284412;
    tmp_msg_0.radius = 0.643807296369;
    msg.reference.set(tmp_msg_0);
    msg.state = 156U;
    msg.proximity = 239U;

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
    msg.setTimeStamp(0.869315952618);
    msg.setSource(12710U);
    msg.setSourceEntity(42U);
    msg.setDestination(11989U);
    msg.setDestinationEntity(76U);
    msg.control_src = 44460U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 71U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.997648522494;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.412165913033;
    tmp_tmp_msg_0_1.z_units = 218U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.834207691652;
    tmp_msg_0.lon = 0.266729956197;
    tmp_msg_0.radius = 0.632735166063;
    msg.reference.set(tmp_msg_0);
    msg.state = 38U;
    msg.proximity = 75U;

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
    msg.setTimeStamp(0.57194380272);
    msg.setSource(53948U);
    msg.setSourceEntity(89U);
    msg.setDestination(35510U);
    msg.setDestinationEntity(103U);
    msg.control_src = 19008U;
    msg.control_ent = 254U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 35U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.541532820991;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.798763223022;
    tmp_tmp_msg_0_1.z_units = 134U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.509019628704;
    tmp_msg_0.lon = 0.352676224576;
    tmp_msg_0.radius = 0.91243697711;
    msg.reference.set(tmp_msg_0);
    msg.state = 214U;
    msg.proximity = 249U;

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
    msg.setTimeStamp(0.652611748186);
    msg.setSource(37813U);
    msg.setSourceEntity(212U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(68U);
    msg.ax_cmd = 0.371594281321;
    msg.ay_cmd = 0.771495324914;
    msg.az_cmd = 0.876826854667;
    msg.ax_des = 0.134644659555;
    msg.ay_des = 0.447543755761;
    msg.az_des = 0.267462676496;
    msg.virt_err_x = 0.449642920326;
    msg.virt_err_y = 0.233615016457;
    msg.virt_err_z = 0.245533297974;
    msg.surf_fdbk_x = 0.557999817729;
    msg.surf_fdbk_y = 0.260489724529;
    msg.surf_fdbk_z = 0.202786840602;
    msg.surf_unkn_x = 0.644439104465;
    msg.surf_unkn_y = 0.0581669340384;
    msg.surf_unkn_z = 0.0366201720971;
    msg.ss_x = 0.316943130464;
    msg.ss_y = 0.420040493687;
    msg.ss_z = 0.156503826946;

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
    msg.setTimeStamp(0.316785626323);
    msg.setSource(31727U);
    msg.setSourceEntity(202U);
    msg.setDestination(34241U);
    msg.setDestinationEntity(130U);
    msg.ax_cmd = 0.0831994326261;
    msg.ay_cmd = 0.761074575217;
    msg.az_cmd = 0.843791426334;
    msg.ax_des = 0.824792262502;
    msg.ay_des = 0.974001769769;
    msg.az_des = 0.183073163862;
    msg.virt_err_x = 0.416630048646;
    msg.virt_err_y = 0.985173906742;
    msg.virt_err_z = 0.651793479318;
    msg.surf_fdbk_x = 0.735098743265;
    msg.surf_fdbk_y = 0.874733670534;
    msg.surf_fdbk_z = 0.81234220522;
    msg.surf_unkn_x = 0.747482542774;
    msg.surf_unkn_y = 0.34293407689;
    msg.surf_unkn_z = 0.752849846083;
    msg.ss_x = 0.402098963413;
    msg.ss_y = 0.291185403938;
    msg.ss_z = 0.156299088445;

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
    msg.setTimeStamp(0.285151105098);
    msg.setSource(28594U);
    msg.setSourceEntity(26U);
    msg.setDestination(20270U);
    msg.setDestinationEntity(212U);
    msg.ax_cmd = 0.429522076027;
    msg.ay_cmd = 0.0469444332717;
    msg.az_cmd = 0.915338107711;
    msg.ax_des = 0.128866585071;
    msg.ay_des = 0.169206847119;
    msg.az_des = 0.702695173191;
    msg.virt_err_x = 0.498950672202;
    msg.virt_err_y = 0.74949241978;
    msg.virt_err_z = 0.444668101644;
    msg.surf_fdbk_x = 0.0410116385848;
    msg.surf_fdbk_y = 0.0999464671328;
    msg.surf_fdbk_z = 0.126173239769;
    msg.surf_unkn_x = 0.875448742671;
    msg.surf_unkn_y = 0.491708249287;
    msg.surf_unkn_z = 0.897819936979;
    msg.ss_x = 0.537286856373;
    msg.ss_y = 0.72568211634;
    msg.ss_z = 0.749836924077;

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
    msg.setTimeStamp(0.240339860464);
    msg.setSource(31325U);
    msg.setSourceEntity(241U);
    msg.setDestination(46904U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("JBNKRUZTANISYCWMTEUOXEVPORWWJ");
    msg.dist = 0.594556819157;
    msg.err = 0.461980404574;
    msg.ctrl_imp = 0.931681395515;
    msg.rel_dir_x = 0.684900618364;
    msg.rel_dir_y = 0.83611859102;
    msg.rel_dir_z = 0.646193058318;
    msg.err_x = 0.129989616048;
    msg.err_y = 0.778980366122;
    msg.err_z = 0.401937492717;
    msg.rf_err_x = 0.85994520331;
    msg.rf_err_y = 0.170097459336;
    msg.rf_err_z = 0.361758035268;
    msg.rf_err_vx = 0.79764242189;
    msg.rf_err_vy = 0.0391016005591;
    msg.rf_err_vz = 0.741959013632;
    msg.ss_x = 0.290306088866;
    msg.ss_y = 0.00222079104588;
    msg.ss_z = 0.478050013683;
    msg.virt_err_x = 0.916708360515;
    msg.virt_err_y = 0.267003323339;
    msg.virt_err_z = 0.919040022486;

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
    msg.setTimeStamp(0.137922930445);
    msg.setSource(10726U);
    msg.setSourceEntity(143U);
    msg.setDestination(47191U);
    msg.setDestinationEntity(6U);
    msg.s_id.assign("DQEBNHHGCFKKYPCVTCMBUGQZHXLOJQIXBRBIWMM");
    msg.dist = 0.547795232843;
    msg.err = 0.0688571412614;
    msg.ctrl_imp = 0.160256065688;
    msg.rel_dir_x = 0.286956481307;
    msg.rel_dir_y = 0.561827962545;
    msg.rel_dir_z = 0.687598155167;
    msg.err_x = 0.548596622418;
    msg.err_y = 0.272875512424;
    msg.err_z = 0.341557680907;
    msg.rf_err_x = 0.492192069015;
    msg.rf_err_y = 0.0455301460885;
    msg.rf_err_z = 0.986887287304;
    msg.rf_err_vx = 0.601224171333;
    msg.rf_err_vy = 0.873315494664;
    msg.rf_err_vz = 0.677503475882;
    msg.ss_x = 0.517406182488;
    msg.ss_y = 0.428641471216;
    msg.ss_z = 0.959628234133;
    msg.virt_err_x = 0.785215252497;
    msg.virt_err_y = 0.434966250348;
    msg.virt_err_z = 0.853202843578;

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
    msg.setTimeStamp(0.863266610041);
    msg.setSource(60609U);
    msg.setSourceEntity(121U);
    msg.setDestination(58090U);
    msg.setDestinationEntity(203U);
    msg.s_id.assign("DCKIMSMBNOVOCXEDWGVHJQVLKWJSQMHMJACPULNCYWPEUHESNXKPQUJNHTMKTVZBBRMNPAPDUOXRGAFFAQPVTZEUPKCOFWTFBYRIUKOWZWHDYQIYATJNHXLGINTWRUFSVHNXTYRSAACQDBVOFROYSYEFLRGJXHEZIMKSDZGSUKXHZYLMBLJELMORIEPBFBSYOKAGLZCWMKELDPCRXIWFNQGBBLVIAGJ");
    msg.dist = 0.85732674875;
    msg.err = 0.824593688446;
    msg.ctrl_imp = 0.342837314457;
    msg.rel_dir_x = 0.200638717118;
    msg.rel_dir_y = 0.56398817542;
    msg.rel_dir_z = 0.925195276985;
    msg.err_x = 0.608849077095;
    msg.err_y = 0.927448154408;
    msg.err_z = 0.851768925124;
    msg.rf_err_x = 0.734630116862;
    msg.rf_err_y = 0.0126379314817;
    msg.rf_err_z = 0.595676976174;
    msg.rf_err_vx = 0.363289504198;
    msg.rf_err_vy = 0.136916951062;
    msg.rf_err_vz = 0.414029218932;
    msg.ss_x = 0.364784401733;
    msg.ss_y = 0.475603923354;
    msg.ss_z = 0.261154450951;
    msg.virt_err_x = 0.311707861283;
    msg.virt_err_y = 0.400763173693;
    msg.virt_err_z = 0.535627598161;

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
    msg.setTimeStamp(0.0337805072304);
    msg.setSource(41818U);
    msg.setSourceEntity(213U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(165U);
    msg.plan_ref = 3459023255U;
    msg.id.assign("GEABGMEDBUCMIWHSZKYHEIXASVHKISTFTLZFHDSONROIVCVCXMRXJWVLXFKOQJPDGASPPWTQITXCCZRZYKWUAEYZGOLZEGSDEBPPRWRJKMXEVPMTUKBLKBIACXDNGTUFDYESUYDA");
    msg.memento.assign("GVWVOSEWOOKTZUAFUYTMJTLDDNYEPMJGKMSIJGBGKQMIIEBUAJPGCWTZQYFXFEFZRQBGWDCTTKXJXMEVSHCDHBAIVAYJZUHMCRAKHOBMCJLA");
    msg.timeout = 59458U;
    msg.rpm = 0.38981887008;
    msg.direction = 202U;
    msg.custom.assign("NJJYTVNBXVAQDAOGNVDWBGKTPYQTBZ");

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
    msg.setTimeStamp(0.898168968735);
    msg.setSource(58711U);
    msg.setSourceEntity(217U);
    msg.setDestination(9445U);
    msg.setDestinationEntity(24U);
    msg.plan_ref = 2727540150U;
    msg.id.assign("FOJGNIWMBUNCLBAGJWLALYRTDCQUSEQSZRJKQIWIVHXVMSJ");
    msg.memento.assign("QUAPELXYMLHSOEMSVIBHNSINXGBDECK");
    msg.timeout = 26085U;
    msg.rpm = 0.253654267381;
    msg.direction = 76U;
    msg.custom.assign("XIFHSKKQQJEWEBURWRBPCOLFETKVDYWREVAPHNNVJRCZJSBKNJCAZTIXLQZRAOQSYLDRYHIADYXRFQKGEZUAFBOOJCROPDXIKCMTZBZFLAVZYGELEDTUDMAYFMWKQOV");

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
    msg.setTimeStamp(0.502391308337);
    msg.setSource(45854U);
    msg.setSourceEntity(187U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(82U);
    msg.plan_ref = 853216053U;
    msg.id.assign("DRKVQLGTDHFQHYWWIOBWPTGXFTLGAIFLJVRSMHSIUDLBMASMHGDFFYOKZGHRJYXNORWJY");
    msg.memento.assign("VYAGWCOPVSTGTFQIVEKABIQUBIDOZDXHGQEPITTPESZKZLTLMFHQTGMOAVMNERQVJTUYKYWJYKLDGUTPYCRJUZOYIBCAXHOCQAJRGDVKWJHBFKPCCAMPIAOVZSDMBHNCYSLWAFJLNZFVSRYADDSSWKIFRBXGQKCOWJCBSUYXHHNNPXNLMBWUUSJCHGBRMQUBNOXJNEZRMXQFTSWDUJZQLYFEKIOALRVPLERDZG");
    msg.timeout = 4421U;
    msg.rpm = 0.0779087106596;
    msg.direction = 110U;
    msg.custom.assign("NKFBZCQRMZICUDIBSSZAKBKNYHFQCOPVHNQOVESIRPLNECAHDPPVYNDGYWQCFEDYHZMPFOLWEALGJQNKZDAKGBOEQODJOJBPVUCPHAHYFDFWLMVTLOMSKGQWBSGXJZZEIJEXJLRLMHUNVKIJWCPTXRXOTPCUUAIUEVILQSLYAHAT");

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
    msg.setTimeStamp(0.344292938943);
    msg.setSource(36531U);
    msg.setSourceEntity(103U);
    msg.setDestination(1449U);
    msg.setDestinationEntity(252U);
    msg.plan_ref = 2350977180U;
    msg.id.assign("DWXEVIRDDUEQELTPETDMRKCORNCAAJYNRJPUTSYPRZMCBKGYPJBOZZRRFNLRDCJPUNHTVQXSBOSMFSSAMYQAKPIFNGAUAGZXWUOHOWEJKMAUUUVZKFXMKHJIZXLQXGBNCKWPWBBETDTHIWXAFUOQOYYKGEIHAXYCMITIZGVR");
    msg.memento.assign("XMLRTMAOLFBLEPPJXAOWFHOGTXNDKYGIEEBUHXPFFBDYQAZKIVXMWZ");

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
    msg.setTimeStamp(0.601287433383);
    msg.setSource(54458U);
    msg.setSourceEntity(115U);
    msg.setDestination(4121U);
    msg.setDestinationEntity(122U);
    msg.plan_ref = 1975699218U;
    msg.id.assign("HZHXPKLIAWMKMTKUXCONISOBZYVCGMYONRNAMWERUDZNREORFALSMZETBUQWFWTLUGHXNCQUZPMISVHLTDGYDIVXSULCRSJPVNDVKQCFAKEDTOCHRZPFVJNQAHBPJILRNJGJOWEPTXWDXKZRBUHEG");
    msg.memento.assign("AWADFYADEUCXQJ");

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
    msg.setTimeStamp(0.174048818615);
    msg.setSource(37689U);
    msg.setSourceEntity(119U);
    msg.setDestination(24451U);
    msg.setDestinationEntity(127U);
    msg.plan_ref = 1223070974U;
    msg.id.assign("WROFBRCIFYCCWLPQUJSAWTTFTZNPRHDMIGLGYTSATJBCHRVYXMTXGGYKKCBDNSVZDPRFXNMLQXZYUVLVWRAOIIBQZLPXXUUKOFHZXAYPYJEAVAYEGAOJQWYGLAQDWBDPODSCDZOVJZHMKHDDVITLUKEHJIUDQ");
    msg.memento.assign("RWSSKFLDOQFPAPYALTRAQABNSJWIOROVHHHZLFXEWGJRTSVTNGBIBZABKAOULMJNWNOPROVUDOOZEPTITCGTBFYKPJOKBLFWIMEGRFCUPUTEZGKBNRDLNXFKMZMBRQIF");

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
    msg.setTimeStamp(0.0941586035772);
    msg.setSource(55299U);
    msg.setSourceEntity(48U);
    msg.setDestination(31848U);
    msg.setDestinationEntity(112U);
    msg.op_mode = 131U;
    msg.error_count = 6U;
    msg.error_ents.assign("WHLCVQXWONQOSFWDXHJWSXFVQQUVHROMEETPJMALINBJMVCILABVSCHPQPMNPQRROCRRWYURADADMSJPAMIBCKAYKGEYIDZZZAUIQGTYRRTOKPPCJWZQQMSUUOSGNSIDNUTFNHSGNTAXPDJMBLGZROCXHYEEYFGFVLWGKDITGECBLXPJLJRKPYJNXSIHZUUOABXLBLBFCKTVHKGKZTFLFKZZTOSFVNKNYHOQBUYGXIEXZU");
    msg.maneuver_type = 14848U;
    msg.maneuver_stime = 0.959410794965;
    msg.maneuver_eta = 15385U;
    msg.control_loops = 3833024656U;
    msg.flags = 71U;
    msg.last_error.assign("WPTPEHDRHXKOYJSRSGOQFULBUINWYJHWYUJTSCVNEDIPYWZCHRXNQGAKZWLQVJTAOGVMCTLMROXJGBHNILAZPXOXEMGHYCVCRTHLEXSKWINMEQYHZCZRURAQKURUYCRPVFLBFRKSLEBIDKFJBOAZNBKJFOQVSTALDZQMYIVWEDDZG");
    msg.last_error_time = 0.699358830399;

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
    msg.setTimeStamp(0.71805072537);
    msg.setSource(48875U);
    msg.setSourceEntity(196U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(141U);
    msg.op_mode = 217U;
    msg.error_count = 178U;
    msg.error_ents.assign("TEKJORKBVBBWFOQTXXJLVYAASNJIFXPCZDHGXPIPGBVIHEFBATFUJZDIRWPVYCKHCIRAFQPOTYIERNWMYYOLIYCZNDARBLCYQVUYQOGEIFZVGNANGKJLSQMOAXJQDKFQWZTPEHNJKYVAEMFEZMXQKUCUVTOXGRDWBHUGUJWNQMWXTZLUTHLPRGZGLHEVSKJTRLDMCAKMABNOHDSPZBUNSDSHEGITWSFXPZMQJVRWLRBSCDMKWLUCUCSO");
    msg.maneuver_type = 13781U;
    msg.maneuver_stime = 0.173807965449;
    msg.maneuver_eta = 55425U;
    msg.control_loops = 3042986201U;
    msg.flags = 231U;
    msg.last_error.assign("VXITAOPKFTVVZTRQWBLCGZUGVADYKNEKZQBBZNTSLYFRROCNBHMSANFCXYPOULJSAIEMDLBLIJMKBAUFTIEDCIQHKNRPSMIPORELEJVBGDICRSJBSJXLQRPIXQJTDSMASOLWDPQWTAQZPNRGRMJLEJGZKPDTWTKOOQ");
    msg.last_error_time = 0.698274475414;

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
    msg.setTimeStamp(0.0646138736568);
    msg.setSource(61218U);
    msg.setSourceEntity(105U);
    msg.setDestination(47185U);
    msg.setDestinationEntity(64U);
    msg.op_mode = 98U;
    msg.error_count = 152U;
    msg.error_ents.assign("MQAZPHYTRF");
    msg.maneuver_type = 23175U;
    msg.maneuver_stime = 0.0996275589507;
    msg.maneuver_eta = 44497U;
    msg.control_loops = 3998173687U;
    msg.flags = 8U;
    msg.last_error.assign("PNSZPPAGLGIBOGTAUACITPBZXRTKKULQYDLQXDKIODWKMSSAYBQPKVJBZDJRXIACCUSNWZKCHBTVQXSXJTLGFMFAJFEETEUCMAXYODTJDJDANOUTLCDEPNHEGJLWOBVMUWWYWUXYMWORQDLVTVBNBRKSIKQZHZUFFWNOUVYVVLXSRQIYXRQPNHRIYPSPSBHVGCGDNQFZFFAWKNGLLOJHRSCECOIHMUFJRBRCMVHOYGEYWEEI");
    msg.last_error_time = 0.651507078646;

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
    msg.setTimeStamp(0.601283765687);
    msg.setSource(45776U);
    msg.setSourceEntity(13U);
    msg.setDestination(230U);
    msg.setDestinationEntity(187U);
    msg.type = 67U;
    msg.request_id = 38554U;
    msg.command = 132U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 1338438658U;
    tmp_msg_0.id.assign("KCXVITLPNSRPVDJXLLZOWHRCEXBAPAALRQODBYLHPJMSPYDOURWSILBWCEUPRKNMFHYQTZFRNBINAFENXZBPHBHXEAMSIWEVSQRZKUBJOENNDGHKXMFYPEOVXMUTATMASORDWPZOYNPQUQZDICEVYGJHUWKLRBMYFUKWQLSSFBMOSMJ");
    tmp_msg_0.memento.assign("PHHZBCLKIDZHQGBKJEOWASDGYZURXPLMFGLKRBTAXPDBIARQXRYWGFCWRGNMGEVELYLPXOQIQFPHHADUPULZNSJYNYDRFZOTYQIVJOEVNOEMBESZHBQOWIGAILNWMBSZRTQHJIMZQNXEDDTWGVKTXIHJCCAJTDUX");
    tmp_msg_0.timeout = 32083U;
    tmp_msg_0.flags = 15U;
    tmp_msg_0.lat = 0.876580773565;
    tmp_msg_0.lon = 0.698402505656;
    tmp_msg_0.start_z = 0.233552392409;
    tmp_msg_0.start_z_units = 64U;
    tmp_msg_0.end_z = 0.640938477707;
    tmp_msg_0.end_z_units = 162U;
    tmp_msg_0.radius = 0.451565964929;
    tmp_msg_0.speed = 0.0658714681539;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.custom.assign("NOWBBRTGBAPXKEJMUKXYXONHISVICZDCTLSKPELTPDFPVTTPRVMQHQJZLUISPQAUXAWIIWNLGOGVDHIHVHWSREXWBANMFCFTGMBJZYNWBJNRXOKLZUYNDOXWTSKLPRERECJOMMDKPHJGMEFQECPUOLTKAAGVURZKBLQUCJSSVVFZBYWSZNQJMZBXFQXKIIYIANDHSEKQTCWCHRQDGMUJELDBYCOIPMFFHDLWRDUYAFAVYZCHFAGYTJGRVG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59719U;
    msg.info.assign("OPPZNDCKAAQSMOGMRKADWPUBBAFDTOCHEYSSDRUQZJMPPZFTOHAZFOGQWWSGMIQZSABAXGQHECNKYNUXUXIESYXVROGYJHTERECJEULGQGOJKSMTURVNTZWHDVSFEUFIKLGMXYJNKLSLPDZWCVRWBNJJMYDITYSGYDVHRXACXTKCOFVAFLXFHHVTWLZNRKIBICJQMUKMQEHACTOJIDFPQPBLFYNXLIEHZXBVLOUWNELYZBJUCGVRRWVQWDTKPM");

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
    msg.setTimeStamp(0.188090519372);
    msg.setSource(24885U);
    msg.setSourceEntity(72U);
    msg.setDestination(24946U);
    msg.setDestinationEntity(126U);
    msg.type = 173U;
    msg.request_id = 8720U;
    msg.command = 74U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.plan_ref = 2274388328U;
    tmp_msg_0.id.assign("XUQTQTRKHTCDFMSIQVKRYAXDRHGJCDMKPWPZBXUIEZYRJZSBJLBIWKVFHHGFTCNUMYBASPPPKBAWECHHLHIUCZLQTEEAXBKYUVVCFOBZTMWLPXZBJNSMVNOOUNXOVNATMQGYDAERGGUTZSYNGSOAMOHAUERLEPJZDZOLLQGXICSZJSWGXFRWGELFOXVYFJFWBCEDAKKXVPWNRJDEUCLYWRTPIIIVAOYINQYBHRDDHKJQTUWDSNNKJSPQGMLVQ");
    tmp_msg_0.memento.assign("HYGRIMFNBJDEOLQBKNFOULVVUQHYXLFJNBVVJUUGLLBSJSCCOMJHJOTQXCKUHTWRCZWXCAEBBNORFTIZLFACDYREVXSKFMGGBMDIJLIIQYOWDOYAQFGINRTAPQLRWZDSG");
    tmp_msg_0.timeout = 22946U;
    tmp_msg_0.lat = 0.454303426408;
    tmp_msg_0.lon = 0.593171714577;
    tmp_msg_0.z = 0.727812487554;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.pitch = 0.201533344747;
    tmp_msg_0.amplitude = 0.773773066905;
    tmp_msg_0.duration = 24764U;
    tmp_msg_0.speed = 0.190375332308;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.radius = 0.319683395666;
    tmp_msg_0.direction = 170U;
    tmp_msg_0.custom.assign("AEAYIHARSFDIBOF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28689U;
    msg.info.assign("WDBPZVCJBGXHNGERXYCSAJSPPHSMFTSUPOLLJBVTIZSTAPVZSPAWSXAFKXIZWYJXJJNMUZISBHGBYWICIXREHCMNECQNUEZFYXHQMQUOHZBKLBZRWBKUHEOQIGCXLQODTPTETXRVNLDQDIADICYWYYACMAMJQGEUTTJLRYHVMGNKSWUHRVEOAOFOMISBKFGC");

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
    msg.setTimeStamp(0.878541289033);
    msg.setSource(10356U);
    msg.setSourceEntity(228U);
    msg.setDestination(4811U);
    msg.setDestinationEntity(142U);
    msg.type = 11U;
    msg.request_id = 1097U;
    msg.command = 180U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.plan_ref = 1124511076U;
    tmp_msg_0.id.assign("RIURJPDYIUYFHGYNXSSMLYNGQUPMKCTLXMBHTUKCAIQQG");
    tmp_msg_0.memento.assign("EPVSPCTZUBCOSBIZIAQORYESGIQRNXSIWFYTUZABURSDUOXWZQFMNNYMRLHWIMCSGUWZFIGLMK");
    tmp_msg_0.timeout = 49377U;
    tmp_msg_0.lat = 0.712730901512;
    tmp_msg_0.lon = 0.53005493694;
    tmp_msg_0.z = 0.452522456195;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.speed = 0.871494763462;
    tmp_msg_0.speed_units = 126U;
    tmp_msg_0.custom.assign("TZQIQRKOBGUQMVPZGVFTUHDJNDAHRXLOPJWGSBDYIDAAMXOMTAEG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57186U;
    msg.info.assign("TYEEFOGRCAXSVZLRAYGDYCMCHIWGPOZHNJDUBEATGBCUDTPWBYNOSKGOBMWUHHTFXFRWOPTVQRHQQCJMFRLZDGPCSKHLWUVOLRQWAIJPDPMKWEHCWMXTXYEOXXNAVVIIQZMZDLIHFZYSEMURJTBTDBIVJEKUUGWFVKZXLQOVIBJSFYAKAQFJNRLNXNTYGZVXSZOGMQUWBJAQYSUUHOEM");

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
    msg.setTimeStamp(0.17597494611);
    msg.setSource(1403U);
    msg.setSourceEntity(254U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(66U);
    msg.command = 149U;
    msg.entities.assign("DLGATVRXVWMSQUPZOZWKEEDVBBTBBONNSDLPMNYFOBPWEWEORMJKLGRISSLMZOYWIKZRPGSCBDCCMFKIHRYIBZDACVJCUSYHBZZMNKWWVFRDURUXAXHTWHEAVMSCIOFNTYUIUPGYJLGOTEQJCGVEEFKFKQVFGKJQFSXUJMIB");

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
    msg.setTimeStamp(0.412018220589);
    msg.setSource(19995U);
    msg.setSourceEntity(129U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(240U);
    msg.command = 1U;
    msg.entities.assign("ZMJNOYRQKHVSBBTBIUORMAWIPFRYNQTNOSRPIYHZRRHZLLZISXNHPVDNORWKXLEIUCDYJWVCALRPFDPUYPWFTULISIKQQGGBOQJMWUGHMJBMDUJHLTUWPFGSQUDTUDMMHLJFMZXYGAC");

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
    msg.setTimeStamp(0.702832521126);
    msg.setSource(18413U);
    msg.setSourceEntity(110U);
    msg.setDestination(57205U);
    msg.setDestinationEntity(150U);
    msg.command = 0U;
    msg.entities.assign("VZXCQYURJUBNMNKXMFYIXIKJVKZPTMEBWLKFYVWAHIRYOJSECGGLLADZAKDXGXAQIPKQAUOZJPTQKMYACSNINHDFLQQTMNCUVZHSWQIENXNESVFBRDDVNSZEWZAPPJFKOEUJBCBUJGNMTXFKHOSQLTYRCXCSJMATFVDOADTHSQUWG");

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
    msg.setTimeStamp(0.444551885834);
    msg.setSource(34686U);
    msg.setSourceEntity(175U);
    msg.setDestination(18049U);
    msg.setDestinationEntity(57U);
    msg.mcount = 111U;
    msg.mnames.assign("RCRWMFTOBRAHIWDACDTOFRVWJCRYVXLXSDMWOEEQPXDNPZIFBUEYTAOVKZLAIXASVHFIJCNGIRQSQULEBGPYUTMLHMLEQUFXCKYSUTFMIJDAIHEQNDBGLWZZFGYPZUUZXEDVKSHYGIJ");
    msg.ecount = 49U;
    msg.enames.assign("QFNXUVGIBJWCVADNGWQLPCEKYQPRDKMIARLAQSUCPOXZBQPGRJMPOHFJDQTFWWZOIAKCWIMLJNVVSEOXENBIBVRAEOMGPQMYURBBRTEPHCRPZCSFVISPWTQLEJJVVONJKZUCVYFQMKYRUIKSUPMEWGDFJXMWMFTSLLHXZNZNAAGOZAUGHAITDKLTBYIDYWYLHHSXLYUYZXTOKKXXHIESJBDDXLONDCTBOZNFGJFGEHWHRMHRSDCGNB");
    msg.ccount = 16U;
    msg.cnames.assign("YQDRIXJBMFZEGELWUYQOTXWUYLCXPDEHWSHVGTAASQRPKPBCWGYZJUOYDNUWEPIFZSNJCKJPDCBSSCYHIOJZPZQWRMYTJGVUEHEVFQNFCKBMFOAZKHWNOJTAEIGGQDOBVPNRGFVKALKFOADVYIMAMBRICWZYZHMSNNNEHUJBEINQCSAQPLQQJHZYBUBLLTGEMKWXJTDKVUSMZIGRAURTMTBLDLXSRXMVTRV");
    msg.last_error.assign("SUXAIHKFUYPSESNJNPGSAHZYEUXCTCWFXPBAICUNUMLORIVTHCOZFEAKJXRBMUQPYDFMOQWIHQYGVMJWTYFFYXHQSIKQTMVDTSUECOWCDNBEPJQKRVBLVUGKGVYZCJJPMSTNVMOMIWGLZCNHSWEHIRVKJELMTLATPADNKEB");
    msg.last_error_time = 0.460400520634;

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
    msg.setTimeStamp(0.483134129271);
    msg.setSource(37499U);
    msg.setSourceEntity(115U);
    msg.setDestination(43303U);
    msg.setDestinationEntity(180U);
    msg.mcount = 169U;
    msg.mnames.assign("RTHDJMFIFMYYCAPNXCDWNPNGQZXLQNKKPRSEZDSJJXBDVWKHUSQSGWUISOVOXYESANPLARKKTZHLSOAGIFCTOWZRVWZLSBBMGTQWVNQCBOTYXDTDBAUUJLQTIVEXBELWEHBRHYJYUGRMZFPOSFSGP");
    msg.ecount = 137U;
    msg.enames.assign("WFTJMMMJZCVRJELSZBAYBSGXWILZNGXQVXRAJMWWQKQCTRYKHHCQUWJSZFJPXNPMHWUQFXSOOEPIBAGSVETPWVNGAAHWGYEZARDOMOJCCONZAPDAIUTLNQIDRLIPHHGCAQPBMXJKKPXXFUHDLLFUZNUEZILNSCC");
    msg.ccount = 75U;
    msg.cnames.assign("VUYGRLGPXQFVXHBZVKUBEEPZPIJKEHVLHJIVOFBCURPUTFSWRCFRNXTCAXNMEDBMQALFDIGTHSGMAYXSQACPEEULSDMJSQHHMTZOIDCTIOTYEYDLGQOQBWXCQSRKMZHSIXNDQOXVVMPSNZYKTXARNQNGOZFRALKDUORMBAQAJPWTGFRTDJNPLOYLPVWKHVNGFKDJFIBJONBUKWMOKEBHIWSGANYSUUXBZDETJWGCIYHL");
    msg.last_error.assign("BXCUWXFIGXYPNHNUFYLXSSQXRUERRUJATPAFBHNOTWEBLAVHDMZRPGEBUWUCTSRDQIDVHQHKOBMYJKDMIYLVNVMIRSASSMHECWMCGKQTDORNQTSKKBTIOJQRMXGDIEJFZNJFUPOQNTGZAZJDFSAZFAHJTYHOHJPZMOWWQXNICPCBYKVAEOVBXGWTGFEAPZKWWSZUXJDPMLGVAMQLTPRCFLZILHBWXIELPVOSUJGCQCLE");
    msg.last_error_time = 0.665029130191;

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
    msg.setTimeStamp(0.355000540011);
    msg.setSource(27350U);
    msg.setSourceEntity(106U);
    msg.setDestination(47631U);
    msg.setDestinationEntity(154U);
    msg.mcount = 130U;
    msg.mnames.assign("ADEHCXCPMKHM");
    msg.ecount = 38U;
    msg.enames.assign("QCAIRAREFSWXZJSEAJSEBADZNLJSDVZDKDXQZUDKZLXXAKWHGFRPNNWPQVWRHTMVMGOSXHUHJQEKEMLYYNQRJRHLJDYEGUFBFNBDJDMIWNXKXWFHAGBRMUMWYIGKXRGFUQ");
    msg.ccount = 26U;
    msg.cnames.assign("ZLDLBKPVZSTXECUIEROKZWOACJUCTVTSINFQDLMWNCGYNMALRCLSBHRJPLNOJOVQWIDKREVZLFAYTBFXMHFEDXRLIKIFUFAXCHUPJRZNSVKTDCNIPUSATMXZZYYJXXVBDM");
    msg.last_error.assign("RYCUDNQAXNXBRWDKXWTWOOLYHEVQWMQWRFJFYAGMATWPTANBXYCOJOJNAWMGPHZNPZYAALUBMVCYKLRKMACDISGNAEFXYHHZMVNCLCGQIOKZVMCOLRKXETSYEUDJZPIPVGLQTWUPEFFHFJFCHPIQBGPEZDSLDPGKVOOQQXIYBNNSRZHRZTVTCUIF");
    msg.last_error_time = 0.735466307841;

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
    msg.setTimeStamp(0.021244775932);
    msg.setSource(3802U);
    msg.setSourceEntity(232U);
    msg.setDestination(32696U);
    msg.setDestinationEntity(47U);
    msg.mask = 91U;
    msg.max_depth = 0.0717790925734;
    msg.min_altitude = 0.54909303567;
    msg.max_altitude = 0.0551631395457;
    msg.min_speed = 0.0534360728681;
    msg.max_speed = 0.765723932377;
    msg.max_vrate = 0.928854144401;
    msg.lat = 0.968364023026;
    msg.lon = 0.933189822988;
    msg.orientation = 0.776309751108;
    msg.width = 0.399560386256;
    msg.length = 0.38227177144;

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
    msg.setTimeStamp(0.825647484908);
    msg.setSource(10934U);
    msg.setSourceEntity(44U);
    msg.setDestination(26504U);
    msg.setDestinationEntity(161U);
    msg.mask = 241U;
    msg.max_depth = 0.0855627748118;
    msg.min_altitude = 0.0399153682709;
    msg.max_altitude = 0.334666602202;
    msg.min_speed = 0.0645416378257;
    msg.max_speed = 0.0159418927883;
    msg.max_vrate = 0.723909514842;
    msg.lat = 0.228557477781;
    msg.lon = 0.547876398204;
    msg.orientation = 0.889253513556;
    msg.width = 0.646016103252;
    msg.length = 0.951693002285;

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
    msg.setTimeStamp(0.867537920221);
    msg.setSource(3991U);
    msg.setSourceEntity(13U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(43U);
    msg.mask = 155U;
    msg.max_depth = 0.265841037608;
    msg.min_altitude = 0.064588243934;
    msg.max_altitude = 0.391030396317;
    msg.min_speed = 0.908417240586;
    msg.max_speed = 0.311515945109;
    msg.max_vrate = 0.250903357693;
    msg.lat = 0.843469263381;
    msg.lon = 0.676060026487;
    msg.orientation = 0.835535695269;
    msg.width = 0.967539850659;
    msg.length = 0.936583684053;

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
    msg.setTimeStamp(0.721542717388);
    msg.setSource(18625U);
    msg.setSourceEntity(2U);
    msg.setDestination(37271U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.0993885897617);
    msg.setSource(53974U);
    msg.setSourceEntity(27U);
    msg.setDestination(9579U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.267478452484);
    msg.setSource(46262U);
    msg.setSourceEntity(218U);
    msg.setDestination(64536U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.503100866719);
    msg.setSource(2032U);
    msg.setSourceEntity(19U);
    msg.setDestination(15489U);
    msg.setDestinationEntity(91U);
    msg.duration = 62653U;

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
    msg.setTimeStamp(0.604945141817);
    msg.setSource(3821U);
    msg.setSourceEntity(96U);
    msg.setDestination(51248U);
    msg.setDestinationEntity(176U);
    msg.duration = 49109U;

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
    msg.setTimeStamp(0.630556122724);
    msg.setSource(6208U);
    msg.setSourceEntity(250U);
    msg.setDestination(21326U);
    msg.setDestinationEntity(202U);
    msg.duration = 24687U;

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
    msg.setTimeStamp(0.278355750419);
    msg.setSource(3600U);
    msg.setSourceEntity(106U);
    msg.setDestination(14982U);
    msg.setDestinationEntity(133U);
    msg.enable = 91U;
    msg.mask = 653068435U;
    msg.scope_ref = 873808048U;

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
    msg.setTimeStamp(0.0908949958848);
    msg.setSource(26726U);
    msg.setSourceEntity(23U);
    msg.setDestination(59999U);
    msg.setDestinationEntity(153U);
    msg.enable = 205U;
    msg.mask = 1068353552U;
    msg.scope_ref = 1375899751U;

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
    msg.setTimeStamp(0.77407586617);
    msg.setSource(21271U);
    msg.setSourceEntity(27U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(42U);
    msg.enable = 181U;
    msg.mask = 4285488961U;
    msg.scope_ref = 1064627516U;

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
    msg.setTimeStamp(0.913419088619);
    msg.setSource(21818U);
    msg.setSourceEntity(122U);
    msg.setDestination(35089U);
    msg.setDestinationEntity(148U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.0798860944556);
    msg.setSource(28029U);
    msg.setSourceEntity(127U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(30U);
    msg.medium = 101U;

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
    msg.setTimeStamp(0.15975916164);
    msg.setSource(14478U);
    msg.setSourceEntity(242U);
    msg.setDestination(11379U);
    msg.setDestinationEntity(87U);
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
    msg.setTimeStamp(0.289707257891);
    msg.setSource(61969U);
    msg.setSourceEntity(235U);
    msg.setDestination(43699U);
    msg.setDestinationEntity(46U);
    msg.value = 0.649642943244;
    msg.type = 188U;

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
    msg.setTimeStamp(0.576339667133);
    msg.setSource(1177U);
    msg.setSourceEntity(175U);
    msg.setDestination(19805U);
    msg.setDestinationEntity(254U);
    msg.value = 0.36094749006;
    msg.type = 133U;

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
    msg.setTimeStamp(0.410077564467);
    msg.setSource(34720U);
    msg.setSourceEntity(57U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(187U);
    msg.value = 0.322526849942;
    msg.type = 43U;

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
    msg.setTimeStamp(0.897483652444);
    msg.setSource(9164U);
    msg.setSourceEntity(131U);
    msg.setDestination(27724U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.700024771876;
    msg.converg = 0.705386979503;
    msg.turbulence = 0.354664063309;
    msg.possimmon = 200U;
    msg.commmon = 102U;
    msg.convergmon = 100U;

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
    msg.setTimeStamp(0.338229262308);
    msg.setSource(19489U);
    msg.setSourceEntity(241U);
    msg.setDestination(14598U);
    msg.setDestinationEntity(135U);
    msg.possimerr = 0.177504070138;
    msg.converg = 0.808629233359;
    msg.turbulence = 0.936119794402;
    msg.possimmon = 68U;
    msg.commmon = 207U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.868890969241);
    msg.setSource(16164U);
    msg.setSourceEntity(162U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(19U);
    msg.possimerr = 0.637907519379;
    msg.converg = 0.442395744828;
    msg.turbulence = 0.622248923948;
    msg.possimmon = 43U;
    msg.commmon = 154U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.874147592213);
    msg.setSource(29350U);
    msg.setSourceEntity(201U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(2U);
    msg.autonomy = 29U;
    msg.mode.assign("COCAKTNVBDFGKFVCOZISYUHBTYRSNNPXUGZSHFAJLCKCOYLBKRTOYJGYXYTJLEMPSDNMOPPEPZIGSLMTNYBXQOVWRAPKHECSBEBXDJVAGRMHWULUCWILSAHMMQBOKUKTQECEJHZEPLPIJKFHXNBOWIAKDADVFLLIIMZWGDJQQGFJVHQQDFXDWRYSTGJQRQFM");

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
    msg.setTimeStamp(0.204474143171);
    msg.setSource(52943U);
    msg.setSourceEntity(164U);
    msg.setDestination(50095U);
    msg.setDestinationEntity(106U);
    msg.autonomy = 181U;
    msg.mode.assign("XMKFMDGNBWPJEGSKGTJTVYSEJLIKOJHFMBHDNUQTGNYHXWWVOHCNMMGMYMXBJQKFOWPDNIOFGKJVXNDWPVLSTAUCSQSTER");

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
    msg.setTimeStamp(0.0354175625382);
    msg.setSource(49707U);
    msg.setSourceEntity(228U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(19U);
    msg.autonomy = 100U;
    msg.mode.assign("MVHLFUDTQSOYENLASZYJMYDBCLBQBIAWMJOANYMETVRXA");

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
    msg.setTimeStamp(0.681105310798);
    msg.setSource(18097U);
    msg.setSourceEntity(128U);
    msg.setDestination(65308U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.332812109487);
    msg.setSource(60472U);
    msg.setSourceEntity(220U);
    msg.setDestination(34584U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.751171483407);
    msg.setSource(8922U);
    msg.setSourceEntity(236U);
    msg.setDestination(22824U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.30162669132);
    msg.setSource(3412U);
    msg.setSourceEntity(128U);
    msg.setDestination(44027U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("DJFITURAZRXJDOGNVRXWLZTZUSMXZDFSRAFQVAPXKC");
    msg.description.assign("CKVKXCBONOGEXLRRFCVNFIWFLTTVSQHTMUMDDUWZIXVIEGRTZWEBPLAMATQTMJLTGJXCRDFH");
    msg.vnamespace.assign("LGTGXOSQCMBSVWPENOAXDNXKMQRQSLNCARUQGJJVQUWKFZJEPGLREHDTXIVLJUVXBLFZNGCIKHDPDZQGZHUBLERFWYEONZURYZSLOFYITWWCJFXBMCTYYUFWQCMGZOCMKWMKVUVKTAXTMEAOUUSYIVDCTIVOBOQSSIPBLBJO");
    msg.start_man_id.assign("JMAUNRQLJCCPIVYFRAYQEXVGNZRLEVPLSBCZCQYYYWLVWWRGBXVAQEMXTZTQQULOCICMBUXA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FZYCCQBLZUUOSESVRTZEBIKKJIDDEKPUEXXUZVYHETAVRSQYURCVJOPNZKFGMCCLRTEMGBRVYWZTWBRNNVOBVCAJSWEISFXMRQGMSUYXFNDSNPZWLDULHYIWQPLGLMQKEHAATLZGSKVXJRNIWQNYPAIJFXUMXFYGVKZDPGOMTGXJJADSWAZNUAIHADJGFOELTDOPBGJBOCYTQLQ");
    tmp_msg_0.dest_man.assign("VUGQLUEQIWKPTKHIOUYWJBXKBNAHQZLVSINEABNXDWIZRZUJFXASHBVSJXGAOTCVEQKLRGRFNCCJDVAKTWXQPEDSFPUHHMGRDPXWHSINCYCCQTEVIFFQFXXOMODYSNMCPEKVBCQZSFUPYYZRJGNJNKLZAVXMYFUO");
    tmp_msg_0.conditions.assign("HSOMEXMLUMXTWDLQBKURNBCVDXHNGHGLBNFJRQNNUJGFASODLTPCQSYKLSWIMGXZLESAVCVZWAJQYYUILENPFPUOCRRWXFXIHCXEGPWXTTQXMJJCYHODT");
    IMC::PlanDB tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 225U;
    tmp_tmp_msg_0_0.dt = 25U;
    tmp_tmp_msg_0_0.op = 143U;
    tmp_tmp_msg_0_0.request_id = 21903U;
    tmp_tmp_msg_0_0.object_id.assign("AZNZHVQSIHINLZWKAYXOKLBEEXNYETYGMTJJFDKBBACBVSDRJATHPFENUHIAFQQIXONNEPZGGLEXYKMRYQSBSVSEIUXQXMJDSXOG");
    IMC::MonitorEntityState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.command = 102U;
    tmp_tmp_tmp_msg_0_0_0.entities.assign("VVEWGTVKPBLYQOVBKBEAMXMEFBXARSJWRMDQTNJNSTHTNQDIVFHCPKCAYPBGTHCFGXSPTKRAHFSBYYDBNDUGMSYUIONJGUEAZPBLGUJXMDIFGQRVOQRCVWHNQNVZOBNRWUIC");
    tmp_tmp_msg_0_0.arg.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.info.assign("TLYIRRHNTVRVIKDVWSMNPSPGCAPXSHXQZYCKFMUVNKXBGYIJXGMWSBUKMAANPOAKOOMLKQDMJHUJINEPCIQRPJKLAYJEHGPMMXGSSHKOZRWLGUYGWRIVRIRFCQENFZAHPTWOKCEYQKFTDOMZWDTJREPHTRVXDFUFWUQAAOLOTITQLAUVDYCFVXQLXBGSHUSIBZPEFCZNAXGDQHHDJONSUDCJEFJBDBVLBYVJ");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.381120459361;
    tmp_msg_1.beam_height = 0.220511220496;
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
    msg.setTimeStamp(0.243852753163);
    msg.setSource(15989U);
    msg.setSourceEntity(205U);
    msg.setDestination(33181U);
    msg.setDestinationEntity(176U);
    msg.plan_id.assign("VUSCIBVGEXYJZTNAFYUQQLENZDREWYAHOSLFPFAFUHYQBMLHMTJQIGPNKFZJAKSUYXEMBOLKORHLQSTDTGROQDJDWPMZLGSNXPMPGFDDGVHKHUPZKXZCLTUWCEJTHUXMICVBKBJAFIYEVKALUTBINEXYQBDAUYWMENQYOFWCVCVEAERLWKHQKJANOGMXPORSZSWCPHTGMCRPJIWVOCVJIDRZFMXICDUODZRQZBILINN");
    msg.description.assign("MXYIVGUVUMQQAWABWUEQILIECHDPULAYPALNTOIPCJSJPGMLGDELYSNIKKPKOSJSQRRFWXZRTY");
    msg.vnamespace.assign("DEQYOVSXNUURDHSNGUCNZGZPFZBLNUFDQPJWVBQWHMJCVIZATTIXLKSIJSYJIAUBYYODFYZTUHBGYGGAGRRAJONLBOYIIQSXIJOVWCUHMEEMVXPFTOCNHSDCEREWALGQJPLESLPNFMEMRLKKABHIKKHUTRNIXLYGXCKYQVNRAWIFWACQVQKJRFZCKBEAXOVRFTTMZAEWQLJMYPZBWCOD");
    msg.start_man_id.assign("XVEEGRZZRMNGOFBXAOSWBFIWKKZVUYRKMIUFCUWJDQGNXETCHPDRITWMIPEQZJNEZBYTEPOGAVNFJXIJXRJGTHPEOYEALEFAGASVTAJYSHFLYCBVILPQQOLCWQKQHFVRXJFZRETDXKTXAJVVHSVLNUNDDHZKBRFUTIPWYMPLLMHYQTYSNGSYDCBKNOHUOGQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("USBCFMPKKBCGJRAMXIIKRJAHZEOQFHHLFBEWBBXPHUTMDYKXMUARQVLSRWGBEIEINFNYVFVZNJJCWXCGREPGFDHQULQLELPPCDFOHERHYWWQLJUPUCKGGZPZXVUJGUIR");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 3394579544U;
    tmp_tmp_msg_0_0.id.assign("HWXLQLHPJBUQEIKGPWXKTMVZJRZYDHTOYCNYOCHNABMCAOJZPPYIZCXSMNXGDXVIYDXFWYQFWQUDMPCFUFVXWNLTS");
    tmp_tmp_msg_0_0.memento.assign("SANYHBNHRYPFEPRTMGLIARUZCXDFNONXXOYCWVQLKTYJKGCS");
    tmp_tmp_msg_0_0.timeout = 63909U;
    tmp_tmp_msg_0_0.lat = 0.016028013394;
    tmp_tmp_msg_0_0.lon = 0.581883352587;
    tmp_tmp_msg_0_0.z = 0.813925893444;
    tmp_tmp_msg_0_0.z_units = 13U;
    tmp_tmp_msg_0_0.amplitude = 0.503457885251;
    tmp_tmp_msg_0_0.pitch = 0.064525815036;
    tmp_tmp_msg_0_0.speed = 0.761916317224;
    tmp_tmp_msg_0_0.speed_units = 53U;
    tmp_tmp_msg_0_0.custom.assign("ZERPGRSQJKHVPLOXFCQTRFBTKWYKOQWXCVKRAXWUDZXCTLQOHDJVXZREEVZMQBNGFFIT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AnnounceService tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.service.assign("VMFSDJLAWCTDLDUCAIRYMBZEWEWONDGOZIUCUTWZZPOKBVQKWQNVPXYGFLVHBT");
    tmp_tmp_msg_0_1.service_type = 169U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::EntityState tmp_msg_1;
    tmp_msg_1.state = 154U;
    tmp_msg_1.flags = 54U;
    tmp_msg_1.description.assign("EAMBFELEXITKWISFGVYZIC");
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
    msg.setTimeStamp(0.862407360436);
    msg.setSource(7736U);
    msg.setSourceEntity(185U);
    msg.setDestination(50789U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("GFGIMEUGITCWCISDNEGDNOSJZRQKHDWRIYCGMFADXHCTMKVIUBUEHDCRWDKBNXCBZRQLAMZJVSZJVIAXEVTLJAADHHXBKTQZJMIARFYYRQOMTBELFGYXXRTXPALWLPYJESSKFARBFOCQSJCKEHYPUBNGUZWVOHLSNA");
    msg.description.assign("CMGRCVUEYCZPWNQEKESSJOBJIH");
    msg.vnamespace.assign("BPMRFSJTYKAHZALENWUMOXRAIAIMSEAGHXDVKOFNOUVWERHQODBLSGYTREYQSYIONUYXF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TSIJPOKPIJRMWUHTYEKPCRRQUVNAYODBEBBKKKQOJDGUHEAGXWPIEYZMVSUZSRSKOORISQRPDYCHVAPBFXVXWNRSJBJVACMMQKOZUXASHKEXGZZAEVJIIDFGLTCTDTKEBEYOGQMCUMMKFZIRYFVDFBGZIWGYDLJLTHXHNNLTAHHE");
    tmp_msg_0.value.assign("NWTTKSBZAOYLPEBUXFRSWKQRGIKMPMMIFRNQWBYFQWCHYAYABAGQECYJQXZXVXHTUPGTDYUAPFAAFDKSPATRVVRYZFRFBEVSEUOKGLQWIZJMTGGQCXRWJLHLDJJQUJWMFOHGXIUCMUXDTUOCHDOUARVNEDJNTPCBSNKBLNDEXGSSHNTGKLZBZOLHPQLERNGUSWSCODKDHKMVIJCJVIBXYHRJAPDIEHLBNPZIWZIVIFLVSMEYVNZKOFMZXEQOCY");
    tmp_msg_0.type = 153U;
    tmp_msg_0.access = 57U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BNZZLMYCYTVKHGEMYXZCDKQTTKLTMBHOJOXVYQAIIDZHDOIITEUVVNPNXZCELWFSQADBFXYWHGBHIDQSKLONVIJSAFKEUFMPPQXKZIGASLZXTVKCXEBGRCWXUOLIUFIAYTGAHRSQPEOM");
    IMC::EmergencyControl tmp_msg_1;
    tmp_msg_1.command = 143U;
    IMC::PlanSpecification tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id.assign("YNRWQZYSHJMHMZKOQGTPMYJTDHISWRHHUDMUXCLVXQANUUINABROIZFDWIFWL");
    tmp_tmp_msg_1_0.description.assign("AECGIITBOVQHABSFBEABEYUGPYOJFCBUDRVFLPEMWJQLQFSDLCWAORSDXYFFPGYIYADJJMDDZSCPINCUOWYQPVNZDUGTKWIKNEIKRIRZNNVTTFGWZYNSETMSNJL");
    tmp_tmp_msg_1_0.vnamespace.assign("OLHYEGMOSNLVRUOUKUKWFFTEVFKNXDKOXMLTVMBXORFGOZWHCNZEZDMITTGCOCPLJOUZRYVYAKHNXTNZBABRZEDRPDKPQRUDYEXSUYJSQLHUPVWDBTYZGPKESHACTDAJCRHXSNXUCQBPGYUGZWTIBMKZFGSHHQEONIRMRJSIAWEFXFXVALTBQWIEMDJWHSQ");
    tmp_tmp_msg_1_0.start_man_id.assign("XTZLNMFBHCBUTVLECPUZTEKYTCDHSOYADAOBVWQVRIXMKRJAFCATVECHALSJFPQUWKSTXAWZZND");
    IMC::DevDataText tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value.assign("KOKMNZRWXDZPZGBGSHETKQMBEYTFJMSFBSQGLKFXVVQHKUFPRQNLFUVCASHJHSPJLXVDGWQZTIHMVBKANASZX");
    tmp_tmp_msg_1_0.start_actions.push_back(tmp_tmp_tmp_msg_1_0_0);
    IMC::VehicleCommand tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.type = 71U;
    tmp_tmp_tmp_msg_1_0_1.request_id = 19776U;
    tmp_tmp_tmp_msg_1_0_1.command = 64U;
    IMC::CoverArea tmp_tmp_tmp_tmp_msg_1_0_1_0;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.plan_ref = 1534511407U;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.id.assign("HFPPSBTLNBSMPCSBGTEQQKEHJMUEEKXPFRGDIDFXWKGHNMIXKBXIIIBDFAABICGVNRLMZZZVJMVDUUNROCULXAKLCFRMCMOTOZVCYAYWWFXOZYBUHRVGOOOMJYVRMHVJWNUQNUQBWNPTQAUZJYNJTDAFGSKLIFHFJGFZTQWSAPYDXLJEPVSLRYCPHATGDSNBVCEPYWECRWJLLSQCUQQXXYUWQKRADGHSWDTKBAOTZRSEGE");
    tmp_tmp_tmp_tmp_msg_1_0_1_0.memento.assign("XPZWLIIZUTLDOCRZEPBMXFHFRHGTTAXZMSQHSUVYFDBYAMJOKXCKVKIJKNFZWQDPXOSQRVESEDKFOMDEJEUTBNNFMZWLVCGHZYDSYUGDCBAMNFMWAVCGIKIDKNROATFJNWHGLLEKKSRRLDMXJZDCANTCRAGLJRWLMTIXHEEXZVWWJFUUEMCVQVEYGAQKSISIYBVHHGIBBLUOUQOYYPQCANNJPQBPTRPAOFWCPIHUBPPGYSJGVUQHXWSTLN");
    tmp_tmp_tmp_tmp_msg_1_0_1_0.lat = 0.362257926508;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.lon = 0.491061309382;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.z = 0.622729610683;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.z_units = 24U;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.speed = 0.367804786137;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.speed_units = 56U;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.custom.assign("OTEPUOAMILKZUVGRNKNTMDYFYTXSSGCIYRXWDQWFZHSTTJHDKQDQENIDLUYZYOGFMMNTVWOYIIGUBGIWZRGOFESXZXTUMTBZCNMFSHCQVICXHOSM");
    tmp_tmp_tmp_msg_1_0_1.maneuver.set(tmp_tmp_tmp_tmp_msg_1_0_1_0);
    tmp_tmp_tmp_msg_1_0_1.calib_time = 27763U;
    tmp_tmp_tmp_msg_1_0_1.info.assign("FPSNKMMDOSUFMOXAKHUWK");
    tmp_tmp_msg_1_0.end_actions.push_back(tmp_tmp_tmp_msg_1_0_1);
    tmp_msg_1.plan.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AutopilotMode tmp_msg_2;
    tmp_msg_2.autonomy = 215U;
    tmp_msg_2.mode.assign("RITPMWZJFTDXKLLXRSGBKIBHVILSQDNLGFDUIIADYGBJUHVBWSUINVLDHAQNPVKYQREMDMPVBGMOZWJZZMQTGGPYUHBXXJRNVTVWBNWOTFECTKKWTZYOLYOMUDOZOWQSMAEZRRPNUFXGTPRMEKPCAHFKAIYJENPVSQHAGL");
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
    msg.setTimeStamp(0.814337324008);
    msg.setSource(10033U);
    msg.setSourceEntity(173U);
    msg.setDestination(36835U);
    msg.setDestinationEntity(233U);
    msg.maneuver_id.assign("BHIRDJILFNAVXDRZGUDLMBEXASTQWMPIWTLRHNQLPUCMTHTGXAHKIMQQQVQTGWSYMAZNPBBYCPGSSLWTOMZYCUSKPYOOGBUMYBCINKNVVAYWTJZYCKMZFSZATBVKOZILCXZQFPIJXOINTDZAAJKDFHOLSETRISEKHJFFQRQEGWU");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.plan_ref = 1824157058U;
    tmp_msg_0.id.assign("UCENVZVFXXFSVMIKQY");
    tmp_msg_0.memento.assign("TCAVRWHZHFPIJERTUFKIXLWYPISVIPFZARLRBSQTZNJYILTPKAUEDBSHZBOQOCXDJGYXFHKWEKNEKYRQOPMEXWKOMMEJYZBVYENHNAKOUXWYZZHUCJCDUSSMLASQVNGPSNVOGOXQMRXDRNIKOYFDJMNWTWDCDXQCDBJIGBRXTWLXFQPICYHTGYVPLJOUEUNPVCZIQGCRJMIHMKFSLVZWLHMDVAPUVRALAESNUUCWG");
    tmp_msg_0.timeout = 31323U;
    tmp_msg_0.lat = 0.542303221578;
    tmp_msg_0.lon = 0.637695992626;
    tmp_msg_0.z = 0.211596443764;
    tmp_msg_0.z_units = 112U;
    tmp_msg_0.amplitude = 0.298225357894;
    tmp_msg_0.pitch = 0.512499337417;
    tmp_msg_0.speed = 0.379751405429;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.custom.assign("IWKIEGADFPYJCVSARNFGLPEZWGBCUUKYSOVMVTWIAKQYKDJEVUJBTSDWOYZLCNXIUYIRJDRRJKRGKQSIMEEFLOXQYTPHBFOAHHQMRHPVKOQGALCVKPXLSHTLSIZTXGITLFZEWOMPQDESSATCZPZLMNCVNUDMBZOABFRHDKQBSGEYAMFWMVCLTGDOZPAWNXTBXUXHMBNPXJTWXJFHUNNOYHIXRYKVNFVCIZHBBWJEUQJ");
    msg.data.set(tmp_msg_0);
    IMC::DesiredControl tmp_msg_1;
    tmp_msg_1.x = 0.997664457753;
    tmp_msg_1.y = 0.834353143178;
    tmp_msg_1.z = 0.71666181775;
    tmp_msg_1.k = 0.947467915448;
    tmp_msg_1.m = 0.578230672025;
    tmp_msg_1.n = 0.775073483573;
    tmp_msg_1.flags = 197U;
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
    msg.setTimeStamp(0.62499499243);
    msg.setSource(5397U);
    msg.setSourceEntity(253U);
    msg.setDestination(50019U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("YPZMFSWTPHXMRJOIMEYEAYDUZRHUPLXNGZFVZYDGXAQKTMFQBARGBNASIODTDXRPSLWZRL");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.plan_ref = 1117456532U;
    tmp_msg_0.id.assign("GQJNNADILVOQOVGHISCCFYROBOOWXYBEEEMCKJQQOVJSTVRYRTMWCGRXLYWJSNF");
    tmp_msg_0.memento.assign("IPASHZWLNULFCZAEGGPIFDRERJBBAVUMYAIMFLSXHMEFADOGMOQCUSJVBFXDKQCGYCMILJCPUZVSYHKIMJLUCNTWKEKJEJKNYLIXZVJKYNICWOPPWIRSTHEW");
    tmp_msg_0.group_name.assign("JBGCXVMWCOVMZVEPSLNGXTXIAKKUQZYJVBDUEBSJLBCPPMCMZKFRADQFOFKEAQONCQTLBKITAAKYEQKUHIYVTIQJYPPXDRHNNBXGXQUWNRSYDWAVLOHHJWGMAANDVGYUTHWFCLMITRJGOMTKPUQSPDLKHHNXBWRTFDSSYBGZRFUEXRNLLZQMMVBJFFILZGRMGERDOOAJIJDOCWCLPNYTQZUO");
    tmp_msg_0.formation_name.assign("OJZGFQGMLIDDBYYSSJYKVFAWGAHMIKYJPRYOMFADEZTYRQIGNQSTGCLTORUUXGZBUNDEKPKUPGPBAEOQHOFYWNKHKXBOVWUAKTUWHRSRQFBFBTILCYREEDQXEMCIYUEPPZGSCKSWEXZIOPQMFSUDNKTBBJHCZFIJAVHU");
    tmp_msg_0.plan_id.assign("UQWVRBYSBVHMFVLGWOHPQVRHJCKYEALQJYPVBJMNGZRASDCNASXHSTBOCDDFJSMNNWIBHVRPYJHRRLQDNNKKYYEIVXNXUCCMBDOUXYPSPQMGXNUMAFZBQUEJTFGFFECWUOILAOLKEPWTDXMZRWFLQZTRKTAADRGBEVH");
    tmp_msg_0.description.assign("HMRHAYYPDZGMVVZGIPRBFUWAIPWNKATRPJFUSNWPQQOBXDYTLSZQAJQGOLIGNFIIOYRIHCOEUFCCMZDOVJVTUCLBSSPZTMVNIJOJBIJVEFLHKPQJBIZLTRMCNVBQLWQXTDHSYPCZXLKWYAWYTHXQOURTHLJ");
    tmp_msg_0.leader_speed = 0.992817692237;
    tmp_msg_0.leader_bank_lim = 0.24544000929;
    tmp_msg_0.pos_sim_err_lim = 0.00099535421742;
    tmp_msg_0.pos_sim_err_wrn = 0.969087647941;
    tmp_msg_0.pos_sim_err_timeout = 63482U;
    tmp_msg_0.converg_max = 0.510786457145;
    tmp_msg_0.converg_timeout = 17195U;
    tmp_msg_0.comms_timeout = 17025U;
    tmp_msg_0.turb_lim = 0.966157290051;
    tmp_msg_0.custom.assign("SMHVFNQAUTDFLVJDKXEWUDXQABXWIGEZCYPDPYPKMMNMOPOTLUSXGCSGYESYBLYGIDJQERDNIVCVKZBOTOQLWIXRSEOCBOWXCRFCKZREUGAV");
    msg.data.set(tmp_msg_0);
    IMC::AutopilotMode tmp_msg_1;
    tmp_msg_1.autonomy = 7U;
    tmp_msg_1.mode.assign("YJHFWKPQHFXBEYYJMANHFJQMHDZCPYCQARNGPBWQPRVZIBOTAXLEDQAWNCJPNMUKMGGQXDZKICLDUTJMKOILESGVPSUVNORSWVKSDAUNXBECHDOVRLXITYBRRETKFVFCWOBSRBZVNLLTJD");
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
    msg.setTimeStamp(0.388206086089);
    msg.setSource(54084U);
    msg.setSourceEntity(225U);
    msg.setDestination(29540U);
    msg.setDestinationEntity(186U);
    msg.maneuver_id.assign("RKAHCNZJRNMRFVHMNIRWQUZCDPGLQWXJWOZHZACPBBOAQSTISUWZLRDRDVTYBKPFKKFGAINVTEMAXGEQDIMOKEXNHWIITWYQVEASERAQPHPKSZBMUYUPLOMLDJFUUWUGIQDJAJBFYEMOXC");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.plan_ref = 4233345609U;
    tmp_msg_0.id.assign("QVDICUUXJDDTETLJOTBOHGNCIAFQBNMUZPHKBRGLEKKMJYJQLBCPQQJMZDATLXIKJFQSHTFIONYYRYHNQ");
    tmp_msg_0.memento.assign("ZVLBLSZBTWEAPYLUVYPYFHCIKIBSGCLDKRDKVBHUANHPBSXHMSORYKHMTINVOKJFQPFTPEIZWTRHXSTXUXWIHTKJNOINUPYOUNVWJCKVWXYEPBVCQKROBUGLBQTVJAFMNGFCGYQRDMNZJBFMZEEDTDZJFZRAHSANGYSMYNMQARHSJRELEQLQAEJCDCGECARUXHWGOVOPXWKDARCCGUQTFXJLIJDOQUVODMNT");
    tmp_msg_0.lat = 0.0686086695835;
    tmp_msg_0.lon = 0.626026375428;
    tmp_msg_0.z = 0.456397950009;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.speed = 0.252893623509;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.custom.assign("OYPPFGXIPTIULIOJQVTBNNB");
    msg.data.set(tmp_msg_0);
    IMC::ReportedState tmp_msg_1;
    tmp_msg_1.lat = 0.420630004467;
    tmp_msg_1.lon = 0.719593525839;
    tmp_msg_1.depth = 0.0699956407878;
    tmp_msg_1.roll = 0.128753470672;
    tmp_msg_1.pitch = 0.646878723731;
    tmp_msg_1.yaw = 0.176522580115;
    tmp_msg_1.rcp_time = 0.728804175178;
    tmp_msg_1.sid.assign("IQUERMQXCFTDHMCUPDIMBRRVIVGYMDTLQXIKVUFZNBUFSEPLIDEHAVWDLQXEHJKGQUSBWQRXXCGVQJPHPZYBZJEZSUOYRNXNAHYDWCDKYXJYEIZAA");
    tmp_msg_1.s_type = 66U;
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
    msg.setTimeStamp(0.465453227308);
    msg.setSource(43316U);
    msg.setSourceEntity(17U);
    msg.setDestination(43299U);
    msg.setDestinationEntity(175U);
    msg.source_man.assign("IRKQANPYOAJSBHKCKDYFQCGKNUFEOLBEONTZZPGYZXTBTCBIHRHLNAPMHFDDKBAZRNQDGULFDQGVBWWKQVLZVQZKIS");
    msg.dest_man.assign("ALPDPNREQKKKYXBZRMBCIJQCSYMUZHGMZDVDOZZSJNLCSVINPFGOCXXWESHDYVEQTURI");
    msg.conditions.assign("RYAXFSHVSTXTPGPQQLYGWDBSZFELKZTZWYNGZGXTLZBATDFABBTSSEOMIMKVZVEFPRFCPHRGUDPGVEXFCLQXBRJNUJDLOVMKGKAE");

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
    msg.setTimeStamp(0.451399748602);
    msg.setSource(17490U);
    msg.setSourceEntity(215U);
    msg.setDestination(13301U);
    msg.setDestinationEntity(29U);
    msg.source_man.assign("VAPYMAGSSRFUEXPDBWKDWKNJRNHUMJEGFPEJYSVYYKGEEZXQLNEUTFTZFJKJODVZZMRIWNNZQTBICLOFXAYDJLOBIXLBGNUQATCLOYYKROCDWQNTOGLOXDMECNUXFCGPDMGBILIPPKFZEPQAHKJCVVRQURSGURYDHLXHTMZOQSRJHSAIVM");
    msg.dest_man.assign("EXGMKCVZSTCASYKYGCGEGPYBPFQHIQYANBWBMTOOQRBMTGGUSIXTSLWWUIWDHFPCLRQFMOADRMZLZHEZAYVDASNQHGGRFAPBHANOYUUJSKTMXKZJETMRWKOJIWQXHNPDROXSRBSGAVPKMUI");
    msg.conditions.assign("APCEOYZGJDZVEFSVTHBWGSQXAMNGNYHYRZSFIOAOHXTNZFTQVPCBMJGRRLCPRXLSFIIJKRILUTVDKTYOEZAXHSDVBUKOWRUUYPTXUQQTOLKGWYBULBNWAMTFFEIMWLZZJFJVTWWWB");

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
    msg.setTimeStamp(0.580781480233);
    msg.setSource(1718U);
    msg.setSourceEntity(242U);
    msg.setDestination(25068U);
    msg.setDestinationEntity(212U);
    msg.source_man.assign("RTGYUVGLJABPEDIXOJXUFVHYDYEVPJNVZIBTVJTBFEAJRQWDGHTPSLOBKRNGGMXKOKFYSWEABEXLSCUYNBUNIIGAWHZFHPMEWZAJYXQQIDLOJKZUQZPXDTFXXFMBKERKWDNNCADPISRZQQCOFNYGEXUOKIPWAURIOMGLUBPSSRUHVWYFKNCPLGOBCMMFTVYZTHMHIVCBAQVTFYUIEMOZJLWSTNOPK");
    msg.dest_man.assign("YKZCNSWISGCECDROTNQNERKJNPZMWFIJXGDHUBJMLOZUSXNQDSRNEMXOTBFCEKRMVLMP");
    msg.conditions.assign("ZVJKZPQPDLQYTWXXMJWCFAJEDYAYILNPVJFCWDRVLZKIICKRGMIQEJJSXBFQMLOXSOOMBGSHYCUJO");

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
    msg.setTimeStamp(0.253492206502);
    msg.setSource(47584U);
    msg.setSourceEntity(69U);
    msg.setDestination(27985U);
    msg.setDestinationEntity(141U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TCDOXMEWTNAUBYGKCNFCWJMVVKMNJGJOZWJOPEXKXCHTLVFLNYISSYOIHSFRVQWGZDRLGCATYCPVPQBAXJRMJIAQJGMUWBFFHDKAFTN");
    tmp_msg_0.description.assign("RSUVFXOHZFSWQCWQB");
    tmp_msg_0.vnamespace.assign("BPKJAPRGTEYWCDULSZLURUOUPDLXXWRHQZYDBFKIOHFMSYGMSXQIBVRSWOGETTLLPSLGNRNLMHZZPNVXBMCVMFZFDAJQFEOZTDTDRVVMFYJBH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NHWDNKHUMTEDRPXPSWZEYZSGHRICWYGAXNVVEVBHYZABOSFRDXPMFHOBMDHAJNVGYBFUSLTUBOISRANJKURIWSJYKTZPBNAQOXKZQTPGQQKUKXYCBFMGJCKERIQCOJYTKMWKLIWGADLJEMUVFRLCRTBVEISKTWGB");
    tmp_tmp_msg_0_0.value.assign("KXOJVQSFEJRQIKPVZEXIGBYQYLZWVAHIPHLELNFVCTSJRDOOKJPZHQFMMZBDAYIXGWOORGTVSJNEHQFQLCUD");
    tmp_tmp_msg_0_0.type = 0U;
    tmp_tmp_msg_0_0.access = 141U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FGCOCBYSBFPXLPMB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PUAEZYTWRQPDLIDMDDXCOFHGBFWGMUQBEYEZPOEBRDJRTFNBRSMVCABELJYUASXAZBQLZVEHWJTJWPICNVOXGOQHAMPQFYMLSQYAXKFBIMJVHQDKUZCQJMTIAZFLSBETDKNNNUFLWGSPJZMZGHVOUUYRXCKZJGZSEVCPRFOJHVWPGNSYDYSPIUUAHXSWJYQNEIXCPTSBFTUCNKWKXHVGOND");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 2458006742U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("BWJELWMRIANWPRZKXWOCEGYZZMRTIUINVCZPMFLORNLXVJXIFNDYPZSHKBUHDVTJYCPVNEIVXWYUKQPOZZOSSFQMLLJITJCHBNKCFEAIVLVJMRKGQYRNEXSSUXONHCPKBFHUIGUPJBDBWOFABPRJUEYWTOYQHSVULEMG");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("IQMXCLUHTWZIYOHAKZQGWFMXLBYEWZZHBEUJQU");
    tmp_tmp_tmp_msg_0_1_0.duration = 16891U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("RZRFRTISHEDHGYTPQDBSPYGQLGDWLKQBMPDLRJWCZMDINHQWBZDNMQFYGWQOUGOXBDNGXRVTYHFXMPPIKFPWBSYLLFJXNGEJCDLVBTLCXFVSZDKUIIVGHYTZJOJQXQSBBKEWECNKOOSMTYAOP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::GroundVelocity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.validity = 55U;
    tmp_tmp_tmp_msg_0_1_1.x = 0.923879962446;
    tmp_tmp_tmp_msg_0_1_1.y = 0.548542203052;
    tmp_tmp_tmp_msg_0_1_1.z = 0.697160433843;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.763450847373);
    msg.setSource(9308U);
    msg.setSourceEntity(120U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(100U);
    msg.command = 16U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UBTDVYOVTKASGZHDTJOMAEUEKZXUTWZQPWLJPVZBYPGBWMWCGQUKEYZEVYFVXREUKPEZHCRKDAFXDXWDONQTWIFUZWHCAKTLJPLTBXCIASMSQPBSJMCLHNJNBPDMKVXZFSHKPFSBCYFGBHXUACYQXOOGGANOJDFWBIHONCIIYKHEVE");
    tmp_msg_0.description.assign("JEBGXCULOAMOGWDQMHHPQCAEPTNBDIGSGTFSVNYZDGLHMMNEYZHWWZIPXLZMUEICKKXQQQULSEAJBMHJDTJXIZKXMUVRYCQVAGYUQRDKBRUGWHXCOVFBAVDBPORTPIBRALAZWTDJISWDASRIWEISPZKXEQGUCRUZWPQKYNOJNJXLBVPFNWILGHOMPOMTYYNFDLCLCXVKJREHVPARCNYEJBRVFSUNGFLOV");
    tmp_msg_0.vnamespace.assign("DKETGASPRYXAWVWQNKSYLAEQDMLZMCJLDYEZUCHOZKVSFDIORHCXVTDDUFQTEWROQSFJHXCPJBVBQBRCLFRFHDUBZJDWYKYBOMORTSNOTZMWJBUISPVPYSKXZKEOKIYGQTIGNVWXUNJRTNUTVMJFMDOXNMPCHRLIGFPLTRGUCYHUNLWAIFXASXISMIPCWACEBPBCAFOUQZLZFMJKVZZJKMPAGG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PRJOHAIJXOABF");
    tmp_tmp_msg_0_0.value.assign("VBCWUEHDTYXHJWEZYQVATRYBAEAYFGEOBYWOVSPFCRDBVTTNUSZWALFBWHMGMHGDTTUBGCLLZFNCDDEIQVVNWAFIVNMQJGCLPRQAJODOXCXKHCJLBJUXQATSXWGMEKSDQOTZHITHEIEUUFIMKCNUDCBJRKLSXDVPUUB");
    tmp_tmp_msg_0_0.type = 124U;
    tmp_tmp_msg_0_0.access = 28U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LAAMQAQFLUDKEGQUSVLYCOKKLNAXTGNAFGBNHSHKDZFDSXJWXYAOSGOWVHMYDQNYQXGCOZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FUPHYCCYWSIRQRGASJYGQQCFLYCXKCOAZJAVHONMWUVEHUTHFCHJDUZVINTWPIEBZKEZOSCOKLTFRXKGYVFERAJ");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 2743204117U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("CEJUZEXLJCUTBADTCYYKRQVRGBUZIIOYDZXVAEFNXRUVOGHGXUODWFATUZZMIJONDBDBLEHFWCIJALKWSACVPDNZYQSKQPPGYOKWRNFNEBERONHCQJVYHJAFRQOPXRDQUWTHTMECTGDHPQOVWJPBTCUPPMTZSDFYNAMSECIASFYMAKFHMXNXKIG");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("IULGRCDZCFCCSWBMKUATOYQNAKPJXM");
    tmp_tmp_tmp_msg_0_1_0.lat = 0.202616102524;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.357109308224;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.208877728879;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 90U;
    tmp_tmp_tmp_msg_0_1_0.duration = 43071U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 40712U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 28504U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.802666183887;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AngularVelocity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.time = 0.737809982161;
    tmp_tmp_tmp_msg_0_1_1.x = 0.649146480433;
    tmp_tmp_tmp_msg_0_1_1.y = 0.830958883016;
    tmp_tmp_tmp_msg_0_1_1.z = 0.57814678956;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.plan_ref = 2422950603U;
    tmp_tmp_tmp_msg_0_1_2.id.assign("OHZBCBYVDQWARNXBLILGQDQBLHOJOSKMUOXBRUMDSGRBRAJXITQFECJBUMSFUXVBZOKOQYQSFFYQWUFQUMGCTXNXDLTHSZGPIJBIWAEVCGLXLFOIEVYHVYDPCTDRSNFDZNWZANKPCKDWTPMJEWJSMVLVTGOGVTETWCPAJEXGMGMHPSWLKKEMJKNWUYY");
    tmp_tmp_tmp_msg_0_1_2.memento.assign("AFAFUIUROQRCVBRNZPTBJQHTDTTLHHKBDHMMXPFSHESHIWBHOPFBNWRPIWSCUJQLVJTSYCKEXCMGNYOZVUEJWOLDZJHZIQKVUBXTAWNVOMDYAFRRJFPQQFSUYPLSZGCWPDBKFXMXOWSPJ");
    tmp_tmp_tmp_msg_0_1_2.timeout = 13196U;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.653445756304;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.0990660246695;
    tmp_tmp_tmp_msg_0_1_2.z = 0.489685708102;
    tmp_tmp_tmp_msg_0_1_2.z_units = 100U;
    tmp_tmp_tmp_msg_0_1_2.pitch = 0.0456503969308;
    tmp_tmp_tmp_msg_0_1_2.amplitude = 0.12960433339;
    tmp_tmp_tmp_msg_0_1_2.duration = 31291U;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.029998188911;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 83U;
    tmp_tmp_tmp_msg_0_1_2.radius = 0.847775030708;
    tmp_tmp_tmp_msg_0_1_2.direction = 198U;
    tmp_tmp_tmp_msg_0_1_2.custom.assign("MUPQTFJFIA");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SessionSubscription tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 3397355802U;
    tmp_tmp_msg_0_2.messages.assign("YUBUBQIJZZOMOFZIDGNUYYQIATTULADNMPIYGQQTXVEVWXOJWFHFUBOTUXRCIEOZRDJKQGDKPCLCFZKMHTSECFZGSDQIHXXHLMXEXAJPCLFFKVPDLLERBGTDNGJOWWZWGCBEVLNRXSDHEHVIVJHNANMUYKFDPONFYSBPRSAYMVOZACAABAALRRVUISTPXBWGGWWSJBKOGQVBSWIKUMHNCPP");
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
    msg.setTimeStamp(0.936680954992);
    msg.setSource(20092U);
    msg.setSourceEntity(231U);
    msg.setDestination(50417U);
    msg.setDestinationEntity(226U);
    msg.command = 138U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VQWOJGZTCJECBKZCRHYQXYVXVGXULFLLOEUIAYTNLRIQCTUEMYKCBUJWJPRBPPXUZWULBDWLYZEQSGIYAFUSKHALNTZQHDGSEGVMP");
    tmp_msg_0.description.assign("ZZIFMAINQLDOLMOJSQWOVCMKXYVCLGXDNELHXMTERTIESIKTDZTURTVRQTLFEJMZLTHRCJENUFNCJYKQBFRNWQGAQGRHPLJJDGK");
    tmp_msg_0.vnamespace.assign("JQFPZSKCSNBVQGLDILTQXKGNJIBUBXFVMVSLMAZDHHFPH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZKPWUPIDXNBJXXHCEU");
    tmp_tmp_msg_0_0.value.assign("OEYDILJOOT");
    tmp_tmp_msg_0_0.type = 159U;
    tmp_tmp_msg_0_0.access = 178U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GYVOBDRGAFAVWEJSHQNRPRMEBDIKHWTUNZUVQTVYCZYSXXRLGUQRQGIDCNJWEFPMWNIDYPZHNAQFQJLSKVJZCUYWOIDXBKSEHQDJJSITMILBWSCLSKJTBYTNRUS");
    IMC::EulerAngles tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.873733260971;
    tmp_tmp_msg_0_1.phi = 0.368517877844;
    tmp_tmp_msg_0_1.theta = 0.632861707263;
    tmp_tmp_msg_0_1.psi = 0.866389418799;
    tmp_tmp_msg_0_1.psi_magnetic = 0.31082753496;
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
    msg.setTimeStamp(0.663677538358);
    msg.setSource(12628U);
    msg.setSourceEntity(116U);
    msg.setDestination(37818U);
    msg.setDestinationEntity(119U);
    msg.state = 222U;
    msg.plan_id.assign("GCAMBHTGWHZKJYBRMRTJKOMIYVFLFHLWXASXUJKKBUNRVFVYADPXNFSKVVFZQFQCAWXBGSCMODQSOGCRJFPYAYJTXNNBZPUVOAVRPZTOLGUCGQBSZVIDWGRHNEUJNZCDYTTJIMIELEKRLDMAYAOQCTEPBWXCSRBNKMPCFQLSDZQYBNONYAXTIKETDGHPHDJSLQIWQ");
    msg.comm_level = 164U;

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
    msg.setTimeStamp(0.256480127334);
    msg.setSource(42678U);
    msg.setSourceEntity(130U);
    msg.setDestination(15926U);
    msg.setDestinationEntity(166U);
    msg.state = 207U;
    msg.plan_id.assign("OFMPGLDMCKYNZTXERYGNLFXQIRGVOYNOQCKJTJZIHEVJRGDJSPVBZTRJQIRXWHRKVQMIBPVUBCQGNWYRHHUDFPFMNHUIUFCXOTZWCFPRBLBLYUKWSOOXWJMSULBQAYTKWADE");
    msg.comm_level = 175U;

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
    msg.setTimeStamp(0.65331038422);
    msg.setSource(60028U);
    msg.setSourceEntity(109U);
    msg.setDestination(18514U);
    msg.setDestinationEntity(14U);
    msg.state = 69U;
    msg.plan_id.assign("AWEMMPRYANHBHFVFCSXDNJOGKXV");
    msg.comm_level = 20U;

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
    msg.setTimeStamp(0.0506637440783);
    msg.setSource(30961U);
    msg.setSourceEntity(180U);
    msg.setDestination(28892U);
    msg.setDestinationEntity(102U);
    msg.type = 100U;
    msg.dt = 88U;
    msg.op = 89U;
    msg.request_id = 44538U;
    msg.object_id.assign("ZQKJAMSILYSRRRUAWJTUVHALORSDNLABDKVXUUEVKTJXXGHHGBALEJFTBIFNFKRWVYEOKWXPZCVLQZKIHWYHTELZBNQFBRACJUJMVYZXDVAUUOWDYNWDSCKMCNEAYMEHKYFPGSKIQNINRCQHCUITLYIXGFVIDVMZSQFPZLSNXFPMBWXGCBGHCAMTMVQHCCQHQLSOJEWRPBYDGQDWBOPFNXDTTWRMAOGGJZBOSTISZGYOPLE");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.516964753736;
    tmp_msg_0.v = 0.398159757173;
    tmp_msg_0.w = 0.494709620333;
    tmp_msg_0.p = 0.891511935597;
    tmp_msg_0.q = 0.190695090759;
    tmp_msg_0.r = 0.754171763772;
    tmp_msg_0.flags = 28U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JSAAWEUHWKUKWWCFSBNDBAWOJAOUOPNYCODIQHTYMUJMCFFHLQTINGMVFCSACZXRPTFLETDXR");

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
    msg.setTimeStamp(0.203714294258);
    msg.setSource(27241U);
    msg.setSourceEntity(29U);
    msg.setDestination(2270U);
    msg.setDestinationEntity(159U);
    msg.type = 195U;
    msg.dt = 83U;
    msg.op = 19U;
    msg.request_id = 43265U;
    msg.object_id.assign("JVWYYBPVZLTFJMYCMTVWVBOHMUWECRBSVKXGXOPKDFZKMILOEMPFOLJSQZKMAXTUXQUIILYDSHCEAFZUNKOCJGUZINJRUCZHGZDNKQYYREAIHPFSAELRRADCBBQVOPDNDHXBYKGJSWJMSXFGHLOMAC");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.135018612697;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JPYDPCDLMSBCJQROLEXOLVKTGSDPNRO");

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
    msg.setTimeStamp(0.182574460239);
    msg.setSource(12659U);
    msg.setSourceEntity(236U);
    msg.setDestination(53618U);
    msg.setDestinationEntity(211U);
    msg.type = 39U;
    msg.dt = 145U;
    msg.op = 146U;
    msg.request_id = 6478U;
    msg.object_id.assign("OVYERIIWUBRUHBOORGIAWULJVLXJERXAHTPUMMTTFSRKYEGWEQAYCYMASWXNTFINGPEGNYZDOSJCTZGBEMVPDMHIAAFDFNBTFVHWCAKPCUJAVCDNUCDIELCPXSTHKSJYFTEMPBKQSVOKXLONRZQSMQKJZPNNUJBPYZQGMFZGYDKMVZBIIXEBLGCRRLZXZWRGDRXHHCNO");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BHTXMPDGQFPOBOAMITR");
    tmp_msg_0.lat = 0.574947108931;
    tmp_msg_0.lon = 0.834274654778;
    tmp_msg_0.depth = 0.286827973222;
    tmp_msg_0.query_channel = 145U;
    tmp_msg_0.reply_channel = 229U;
    tmp_msg_0.transponder_delay = 244U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YOZIAFVDSVXKNEGSIZKGBEDLENORVQANHDQPETAAQGHIMBZEVWLCLADJMZHEINIQXLOQGQJVKXSZUBUXWFKHYRVXQNIGHNYKSC");

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
    msg.setTimeStamp(0.819447267308);
    msg.setSource(23415U);
    msg.setSourceEntity(193U);
    msg.setDestination(40197U);
    msg.setDestinationEntity(109U);
    msg.object_count = 44733U;
    msg.object_size = 269820210U;
    msg.change_time = 0.268595425104;
    msg.change_sid = 24335U;
    msg.change_sname.assign("XBMPIJOWKLCVUGRNCSAYLCRKTILVDDHAEVZMLKOOCRHIUWZXOBGDEVBHZDWFFTZZHNXFEDFQJQUUONEBEJJWHOINIGMIMTYDZFLSQSBPTGJSITGDKVYHYMEKRKOERGXNDTJLXGVMFPQQPISGXJSBDL");
    const char tmp_msg_0[] = {-66, 67, 32, -113, -76, -105, 91, 115, -103, 84, -88, -84, 114, -65, 93, -70, -67, -83, 18, -113, 20, 53, -6, 122, 76, -35, 113, -125, -127, -20, 47, -13, -53, -26, 75, -62, -115, -54, -43, 117, 85, -27, 67, 7, 36, 49, 70, -104, -106, -51, -11, 35, 104, 3, 77, 44, -8, 123, 47, 39, -109, -94, 2, 42, 101, -9, 46, -28, 113, -101, -120, 121, 108, 109, 39, -112, -32, 54, -116, 44, 97, -86, -101, 75, -19, 8, -66, -90, -118, 30, -80, 124, 22, 48, 46, -70, 50, 114, 89, 23, 24, 83, 71, 105, -68, 21, -42, -48, 22, -40, -68, -42, 103, 98, -33, -89, 120, -105, -36, -124, -97, 20, 72, -97, 57, 84, 67, 64, 24, -59, -111, 103, -116, -124, -29, -61, -115, 91, -58, 32, 62, -6, 53, -64, -87, 116, -26, -2, -115, -63, -108, 8, -63, -63, -18, 17, 4, -127, 40, 93, -98, -3, -4, -3, 23, 53, -32, 90, 76, 75, -72, 57, -25, -76, 29, -7, 82, -18, 7, -85, 96, -120, -43, 17, -58, 109, 73, -85, 76, -8, 97, 120, -8, -87, -42, 51, -4, -63, -84, -113, -64, -66, 86, 94, 117, -100, -25, -37, 46, -101, -72, 57, 59, -125, -44, -53, -15, 75, 123, -111, 24, -10, 90, 36, 16, -100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("GEJUYJCHBMEGACXZZRAVSGIJHOYXUVCKJSUIAJNXIYQQVVDSAIPAHRYYOTPHPJGBALWFRLNCRBSELOFIQWUDDYKZGECTYTRMUSKLXSEQOPKHLQXVTKMRDMKOGBNXQLYEWWFNMDAKECREZMHLMFTYWBTFMRZVGFZQVECNHLWAZUUJRSGBPWTVTPPCIQPDWYBIPIUJDPZNCDAIUWMAVFJQHOXNCGKEDBNSBLJMUXOFO");
    tmp_msg_1.object_size = 55965U;
    tmp_msg_1.change_time = 0.102371249732;
    tmp_msg_1.change_sid = 27950U;
    tmp_msg_1.change_sname.assign("APIMRJDXCLWERITUVMCBCGBYBSUWXGFXINXXOHHPLULUDHHTEFYWYOTCLKPJESZFPXZYRZIKZAZEJKYVVVPCGJKPOJYWECOEJSOA");
    const char tmp_tmp_msg_1_0[] = {53, 35, -118, -25, -115, 121, 123, 123, 27, -39, 42, 103, -128, -89, -84, -71, 86, -114, 15, -25, 114, 117, -57, -127, -68, 25, -80, -35, -10, -116, -49, -72, 57, -84, 120, -70, 80, 102, 107, -13, -17, 61, 90, 83, 91, -96, 72, 48, -90, -42, 33, -105, 23, -10, 6, 60, -73, 2, -121, 69, 87, -5, 19, 48, 123, 60, 17, -72, -11, -19, -94, 7, -83, 79, 118, -69, 58, 90, -99, 81, 111, 93, 100, 107, 9, -40, -96, -3, -9, 109, 61, 43, -99, 39, -85, -19, -94, 10, 112, 31, 8, 126, -85, -66, 38, -109, -22, -101, 41, -3, -117, -63, 0, 73, 117, 6, 69, -53, 117, 126, 52, -21, -107, 115, 50, -118, 24, -75, 108, 108, -100, -15, -102, 35, -123, 108, 117, 123, 113, -8, -61, -123, -102, 111, -7, 78, 89, 67, 72, 56, 16, 62, 18, -27, 7, 88, 107, -23, -31, -38, -23, -123, 121, 117, -116, -128, 118, -80, 28, -5, -79, 11, -50, -8, 23, -72, -49, 41, 122};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("PLRXGIITSWUVOSREPWWUHQGKYZXGSOTNJCXWJAYJWHIEODBOBAIQBKTTMRTDRJEDKHXIYHCSYRNWUDMYYBGCOEFHOLKSLVVUZPTPFPTCYSWLQYMOFSXIBBAZMMKENRQFUZIFGLNMAKZUCRAIRVDCDNSQJBGVLJFNDQNAFWPYCPLBVTFMJOPGWHQTZQZHXNTD");
    msg.object_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.131632490816);
    msg.setSource(14067U);
    msg.setSourceEntity(66U);
    msg.setDestination(9829U);
    msg.setDestinationEntity(100U);
    msg.object_count = 51730U;
    msg.object_size = 2720913924U;
    msg.change_time = 0.701369680379;
    msg.change_sid = 26304U;
    msg.change_sname.assign("QYTINHOWWBFNHUNLNGNMPWEONUDOZSCJXXFLTDFKRZRSBXKJGIJHAXYPMAASOHXWWETTQFIXIZGRXQERUMPACDUKMKAWUARVVPACOEDPSCJTCREZW");
    const char tmp_msg_0[] = {-77, 68, 125, -68, 59, 28, -111, -84, -127, -117, 57, -112, 41, 101, 88, 31, 77, 2, 29, -123, 21, 42, 34, -92, 30, -30, -90, 86, -1, 104, -4, 99, -113, -112, -126, 51, 100, -105, -58, 117, -42, 95, 43, 1, -111, -24, -117, 51, 109, 121, 98, -28, -104, -91, 124, -50, 14, -110, -12, 36, -27, 77, 73, -1, -67, 99, -29, 3, -48, 30, 122, 88, -39, -21, 119, 20, 77, -2, -68, -106, 4, -61, 14, 77, -55, 116, -113, 45, 11, -16, 67, 72, 53, 98, 3, 2, 75, 88, 111, -58, 51, 65, 86, 35, 89, -113, -13, 46, -52, 79, -20, -36, 24, 21, -40, -75, 105, 114, 4, -64, -104, 96, -13, 81, -2, -121, 122, -8, -20, -103, 19, -34, -124, -86, -116, 103, -123, -56, 114, -61, 45, 23, -85, -3, -35, 105, 116, 18, -126, -97};
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
    msg.setTimeStamp(0.203970541154);
    msg.setSource(62578U);
    msg.setSourceEntity(6U);
    msg.setDestination(27922U);
    msg.setDestinationEntity(137U);
    msg.object_count = 50984U;
    msg.object_size = 1938501946U;
    msg.change_time = 0.332070030135;
    msg.change_sid = 27838U;
    msg.change_sname.assign("BTJXNSOKCARYISDGWADIIILPJKOWZKQVMWHPESTIZOWPMGTDXHPUYKYXHQKVAIGFYVZZAMGRXHDVCPWMYPQPBHWHSNCDVUTJZJCFVJLCBLBEGHAECUNVYFFBLJEXLGMRUSQSIAVTWPUISMGFSZWCNNDOIKNTDUUNAEJGRRTVRLMZLQXCEBLESROFNYZKYFBMUFGAABQJEKWCFBYXRUTSOUDOHDQCJVFHPXK");
    const char tmp_msg_0[] = {-75, 58, 73, 63, -1, 39, -33, 65, -101, -51, 23, 59, 122, -25, -89, -122, 76, -82, 125, 33, -18, 40, 83, 78, 76, -96, -89, -36, 103, 36};
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
    msg.setTimeStamp(0.978821605813);
    msg.setSource(62845U);
    msg.setSourceEntity(14U);
    msg.setDestination(27431U);
    msg.setDestinationEntity(220U);
    msg.object_id.assign("KTFBQFPIWMZYGNFMPOSDIPCVKTQVUNMCMIJXKUWIHLOALLHIFQTBNQAZGEYPERVVWTTOHOMDUYHBGXBLDMGPCLBMYKTSFKDKBDNLWDIODXUAHKOXOMARYQNHEHXEUCLRDILSIRFNUNWSZAWAGYWBWFJHEIGXCTCPHFXTVSQZXLJKGRAQVJPSAAJSYONQXOEGZZYUPETJUVQBDDPZBXEVUVESYEIJMFJBYKJRZCGUGSLRWA");
    msg.object_size = 4316U;
    msg.change_time = 0.214978995705;
    msg.change_sid = 55571U;
    msg.change_sname.assign("WYVTHAGOHMMLXJPLAKOKJOPHFWSX");
    const char tmp_msg_0[] = {90, 36, 64, -68, 46, -28, 50, 30, 4, 94, -39, 98, 95, 74, -41, 13, 42, 111, -3, 100, -8, -78, -95, -19, 17, 119, -86, -8, -104, -53, -69, 114, 70, 89, -89, 59, 105, 108, 5, 46, 24, 104, 52, -23, -38, 96, -111, -108, -76, 121, -91, 69, -115, -104, 104, 45, 101, 46, -46, -58, 65, 104, -115, 0, 111, 96, -89, -37, 92, 43, 24, -85, 89, 39, 38, 76, 94, -75, 49, -34, 116, 11, 71, 119, 71, 81, -21, 118, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("QOCTIUEJZPPGKYJUUSQPKIAGGUFHTQFNDPLWARXO");

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
    msg.setTimeStamp(0.738303640534);
    msg.setSource(16285U);
    msg.setSourceEntity(13U);
    msg.setDestination(63140U);
    msg.setDestinationEntity(41U);
    msg.object_id.assign("IJWDELFBJQTXUJORWOVDJHOLCRSBASZLURMPCZQFOHMYSBNYIUFXRVFGVAEKZOQEQQWSDUVPBMDJYHUTOOHBNWQMMAYHGCGZTIKEFCXEBNQSWNBUHMWLBSBY");
    msg.object_size = 48057U;
    msg.change_time = 0.728043592703;
    msg.change_sid = 39599U;
    msg.change_sname.assign("OQGGCJKRLFUQTDNCOMOHESQEECZZJYNQMNYFJJYMFKSWDMAFUEPYVCDPWHXCAZOGMGVIPMBBEJFULKIXOEHSWLHUKBCYRWKKIBSGBFNHRNLQYBUUBHSDZEJZNLDTIWTVDXDRADIVRSWAZOTOTIOVKTFCDZKISYLPZALAWJRVGQTPIVFIXKHDHZAGUJYYBHZNXNXU");
    const char tmp_msg_0[] = {-48, -35, 78, 13, -14, -93, -31, 101, -10, -80, -83, -100, 8, -85, 87, 13, -17, 85, 67, -126, -34, 30, -26, -4, -55, 119, 23, 114, 121, 73, 89, 100, -14, 43, -52, -116, 13, 79, 72, -90, -26, 40, 87, -82, -13, 117, -98, -22, 76, -31, -3, 81, 93, 117, 20, 102, -45, -123, -58, 16, -35, 65, 94, -88, -110, 38, -82, -42, 99, 0, -120, -49, 89, -114, -89, -102, 24, -14, 61, 6, -81, -69, 83, 109, -14, 20, -99, 118, 65, -26, 109, -61, 123, 115, 23, 91, 31, 6, 97, -50, -73, -104, -87, -98, -100, -10, 106, 96, 63, -109, -35, -118, -5, -52, -61, -127, 74, -5, 105, -95, 68, -120, -127, 22, 89, -99, 58, 83, 118, 107, 9, -59, -85, 31, -110, 46, -57, 126, 121, -69, -71, 16, 99, -10, -26, 39, 124, -2, -56, -11, 53, 24, -75, -108, -125, 69, 60, -60, 82, -25, -117, -101, 67, -12, 32, -126, 91, -18, -4, -126, 45, 97, -79, -61, 24, -108, -93, 39, -42, 78, 104, 61, 91, -36, -64, 123, 39, 81, -57, -61, 23, -67, 95, 89, -93, -43, -6, 37, 28, -1, 17, 27, -34, 104, -23, -40, 3, -66, 21, 31, -70, -42, -119, 1, 63, 38, -110, -128, -9, 15, 98, -73, 101, -83, -56, -75, -87, 37, 93, -19, 14, 47, 76, 66, -80, -78, 22, 52, 100, 63, 55, -41, 105, -15, -87};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("DZLFTQBJYQBDVSHKQJNIZQMTMUAWVLOBUSYMKFHAYVNZPAWM");

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
    msg.setTimeStamp(0.529092982934);
    msg.setSource(40641U);
    msg.setSourceEntity(184U);
    msg.setDestination(61754U);
    msg.setDestinationEntity(175U);
    msg.object_id.assign("BOPSEXORUTQFHBGOWKYZIIUXHTCRWOTVPYMZMWOHTFVQQMZGQHZADMAIGHKXXHLKFVCUGCBBGJDSNDLYLIBCBAVYIWLKETYJDCDFHUYIZGDZWKUAWBFYOPSZPJQRNAJDNAERMPNQRSWXPAIENFGOJWDZGLEIXCJNWWKQYAQHKMVUJLACSRKRGYZJMTJLVTHVZYXFMS");
    msg.object_size = 22094U;
    msg.change_time = 0.487448048542;
    msg.change_sid = 4181U;
    msg.change_sname.assign("KRKMITKFHZTSHDABFIRMYRXGQCMFJCNJVOBAYAUEVKYIEIWTJLGKXBHNRGTNSANDECJUBGPASODGHQJQHWHPYXEIFUNLNMDUITBKNJNRPSAXFEEXZDZTMMAVQYOIVDXMOJQWPPVSZLZDLDLCLCNZRFOSUOWMXBBPB");
    const char tmp_msg_0[] = {-96, -77, -47, 117, 12, -3, 119, -34, -96, -118, 42, -120, 76, 11, 91, -53, 99, 52, 71, 103, -125, -120, -79, -75, 3, 24, 71, -75, -32, -121, -121, 111, 20, -108, 30, 77, 112, -124, -16, -91, 56, -99, 104, -82, -26, -51, 122, 112, 44, 71, 90, -95, 82, -47, -2, -113, 101, 110, 62, -76, -47, 18, -126, -85, -113, -126, 29, 84, 34, 69, -13, 31, -51, -77, -63, 62, 40, -14};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("YCMUTJEPPSPRTMUKXBYUYIFGWSZOSREOBQNYNONAWKLCQRMKVPSFMDAFDLOTPIELSGNGQPHVHFFLZKHSZNCTNNCXBQGMNZPVLIITQEOGGDZGWALUWZYIOBFXPDXKUYODNUVLIXSRLJHVJUSIABIECCPSIDIJJJADBATZBYTMDVKOKCCZWAGEHXVMGVQNZRJCMDWWRGRSVUJVOHRAFFQKPHBQBWMUEJZCTBHQA");

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
    msg.setTimeStamp(0.30789057795);
    msg.setSource(50411U);
    msg.setSourceEntity(211U);
    msg.setDestination(53565U);
    msg.setDestinationEntity(164U);
    msg.type = 86U;
    msg.op = 13U;
    msg.request_id = 4183U;
    msg.plan_id.assign("QWNCJAGTTZZTFKPWLNRHUFQIRAHVOJAOEAGFZLCJBSYQWRTOSSBHHMHPCILRQMYMDLXUKEUQSARD");
    msg.flags = 40007U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("CHNILWHYHPAGGVTBTEDMBZWHIRVELGQGXUYPQJXOLMJGNLCFZQCRPPEFYUNCJEZLOJYNBUULXRHVWPCMAZRGRLZNQSJUSDTBICGKDCOBFTZROQRNVTZQSIEHSYJYLMNJWDXPVRXKGKLSTDBFOVBPTZVQXPGDAVFXREXQOWN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HORGATLIWBUKJQPDWIYOKAIOEZRCGHFQSWNFJQJVKMXNZBXCCWDXBGKUNHZRCAODXGKLVSBMFMVQPPUZNBEKKEKKWFRSGPIBVCQBCAWOSJTZDPABJXDIOOHBBYUECUMOXVYZGYNGMCWNVJEJAUNRTEUNSRAPYDHRDLFTDZVHIG");

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
    msg.setTimeStamp(0.401617627363);
    msg.setSource(7041U);
    msg.setSourceEntity(19U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(31U);
    msg.type = 28U;
    msg.op = 234U;
    msg.request_id = 59460U;
    msg.plan_id.assign("BLMCNESUFKBBFKDXGVWREACPJVJEULYZWYCJPVXXOPUICAOONKNOIJDWPIZHWSNBHBMNTVOPIGPZMJBRFJKZGTSHPJHDDBVYWKEZOYQMBQTNLXZQAGOQYWNUJFMSLZYGCDXEULXULFVTYFTGATCAYIDVGWHWIPRIBGDSVYHMQEMKHFUHQAMNDJOGRTUAJKDAQXLCQCGMZRHZIYPQETONXVTRLCKFVOCSAXXFWPQKHLSMUSIRERF");
    msg.flags = 26221U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 306904049U;
    tmp_msg_0.start_lat = 0.599039391523;
    tmp_msg_0.start_lon = 0.315994820253;
    tmp_msg_0.start_z = 0.476833505422;
    tmp_msg_0.start_z_units = 228U;
    tmp_msg_0.end_lat = 0.603653350751;
    tmp_msg_0.end_lon = 0.852101690797;
    tmp_msg_0.end_z = 0.280607292232;
    tmp_msg_0.end_z_units = 214U;
    tmp_msg_0.speed = 0.0738656343272;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.lradius = 0.536037655308;
    tmp_msg_0.flags = 111U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SGYNSYIJWSFCMWGQEUXFZEAGDPRHTPEIAROLNJPXGLVOIIXZNNDVBIKZXNAEMXYTRCDZVJMUPTZECTUNXGUWWFSKQOOSMWDDVNSHPBMSFDQTZIYWVLYPRXLJGRLAKLCITVSOBUKYPRQKVLCMTJAKMLFUKFWDKBXOAUYRRZVLLHBNCMKBYEJEZQUPEGCQORAQVXAIQHJAWBDIBGHHQZTZJOUQGVWFIFSGJ");

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
    msg.setTimeStamp(0.543167963584);
    msg.setSource(28497U);
    msg.setSourceEntity(183U);
    msg.setDestination(56183U);
    msg.setDestinationEntity(182U);
    msg.type = 225U;
    msg.op = 180U;
    msg.request_id = 63000U;
    msg.plan_id.assign("BMGNWMEVPX");
    msg.flags = 24701U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XEAKRSGJFYQFNVKNAHDTTCTKPVLXTZWKALHVCLIFCEIZMKYVVWZGJMBEDVNFBKPSXEWUZQUFHVXLDJGFXAAIKFGIILDUZMOUTWZOHYDWMWJPCNGGCYUOBFEMWPNUZTZLSNDEGPUWAXQKFJSYXRNYJQOKSPHOQENLZBHJTRJQWNHBYMAGPIHXOQSBYHIGUJ");
    tmp_msg_0.lat = 0.495492189407;
    tmp_msg_0.lon = 0.198846380607;
    tmp_msg_0.depth = 0.189058075657;
    tmp_msg_0.query_channel = 28U;
    tmp_msg_0.reply_channel = 69U;
    tmp_msg_0.transponder_delay = 111U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XPQYZAVPHHTTFBORYDPWTGHLQHDAEZEZZWVRTAPOMWVVWTQNCLMGPO");

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
    msg.setTimeStamp(0.967359993007);
    msg.setSource(32417U);
    msg.setSourceEntity(215U);
    msg.setDestination(57351U);
    msg.setDestinationEntity(163U);
    msg.state = 150U;
    msg.plan_id.assign("ODEZVVIOZAGFNQCNNDGRVSSLCFUVNMOQHYVBYDDSVFVQLCPZKNJPNCZEXXOMWBHWPCUEJBIPWUNFRI");
    msg.plan_eta = -697069246;
    msg.plan_progress = 0.199669697734;
    msg.man_id.assign("WHDMQIRSQBSOZTYDFISVTRMIBKQMQUKNEQIGCRBMEJKRFNNUUPEZMAGWWOLPDDLKBWWIMAXXZNWBOPDAIZLYGCVTHJSCBERRMYGLTOOEPESG");
    msg.man_type = 15256U;
    msg.man_eta = -317666108;
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
    msg.setTimeStamp(0.666838072709);
    msg.setSource(1680U);
    msg.setSourceEntity(181U);
    msg.setDestination(33252U);
    msg.setDestinationEntity(116U);
    msg.state = 89U;
    msg.plan_id.assign("BKQGRXMHJABEVWTNRGEXPPYBYSRIWIYLAWVPYBHFHRXBDHLXINTWYDNVCZSCZINQVSFZPFXYMVCPELYDALKSCAOOAKXPGEQXBNZZWUZQFFRWKUUJNONRDJLHPLSVSFLRJHDTPQYUSTQGUTROVGFGUEMGYAKONHHABJP");
    msg.plan_eta = 1269632247;
    msg.plan_progress = 0.456131278135;
    msg.man_id.assign("XCWYLTQAPLUFCSZVETVNEWVJGBIHGMBMKVDXXVYHAXPDGOEQHQPROSYNPLCOCWEXWFVNOFGMTQFIWJSIUWVLLKRDHAMWEOFQOTP");
    msg.man_type = 26634U;
    msg.man_eta = 216504377;
    msg.last_outcome = 190U;

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
    msg.setTimeStamp(0.743035249691);
    msg.setSource(60928U);
    msg.setSourceEntity(242U);
    msg.setDestination(33558U);
    msg.setDestinationEntity(42U);
    msg.state = 209U;
    msg.plan_id.assign("TUJNIYDMEQRTHEQVOWCRCXTGYKSMUVGVHZFASGABOENZJLMLTOZRJANLDZCBWGN");
    msg.plan_eta = -1776852060;
    msg.plan_progress = 0.345518741809;
    msg.man_id.assign("VRMSGKNMHCBSLIMVGZSTRXWIHRDPPQDXIJRRYFQYVKOVEBIPPFPZJAAFGENNKSPLJIGJXCNLCTKKCXNAOZGMZIFXJGSQCFWZKDTAYDFAALSZW");
    msg.man_type = 30475U;
    msg.man_eta = 733569297;
    msg.last_outcome = 242U;

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
    msg.setTimeStamp(0.528610360478);
    msg.setSource(43429U);
    msg.setSourceEntity(223U);
    msg.setDestination(18265U);
    msg.setDestinationEntity(67U);
    msg.name.assign("IJCZKFUYCZDHEAUXVESFHOWTHMZVOMYBXRSTNFDWJKTZRQBXTYBNMAHLDDXYROJRLFIGNSRVWPJRXLRSTZHTDYHHXPUEBBNMSOPLCVUTWIAFSD");
    msg.value.assign("WIXMWIPCLQUPGZZEKJBLGHJYMFASYKJGPURTAYOCMYQZBENVVDGCBAEXDVXNEMFOXJXZNKNRFBWEIKDMOPDTXPTIPFQGVKZQSDIEJGOPNKDTGZLMXTKDSCTUWMOBQVWNUKLUAQEDPAMRASISBMUZSTALUFYHYIQYVVFORJFOUBKMOEPHQLORHNTV");
    msg.type = 205U;
    msg.access = 241U;

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
    msg.setTimeStamp(0.564104053953);
    msg.setSource(42352U);
    msg.setSourceEntity(48U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(70U);
    msg.name.assign("USFXRDOIQXYFTJXEZKMDQXBFEQIBJVSLYPZEKXMDDTFOGFBSHAQKOOIEDPJVT");
    msg.value.assign("DSZHGDJWYWMMWQOGXCZSQNONHLLAVNQNYYSOPXVDWFGSUPBZZKTRTRPEHLLVFHESTZWADPQDLIDGEGKBUADIISHENKVFWMAOAGCPYUNCBIMOJJGJNZZBOELNPWIBRCCFAKVKGJTUBAFV");
    msg.type = 127U;
    msg.access = 94U;

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
    msg.setTimeStamp(0.533629763769);
    msg.setSource(62370U);
    msg.setSourceEntity(227U);
    msg.setDestination(37385U);
    msg.setDestinationEntity(0U);
    msg.name.assign("XIUBJZREKSEKGEMKQRWZQKLTGCODBKHTMFLVEASUTRJLWYFRVXDCXVTGJPWJDLVFMSYOYGHAQUQQQBXONMTQCEEOAMSLOZABXIDRNOVOWDIYBITKJHGPEYDQWKNFXUFCFSPWLPFYMSUZFRNJQWJMBKPDJFEZRBZZAINYEGYOTPNAGKXVNUVRTSIYNP");
    msg.value.assign("NCUJKIWQTDYDPKKPFUXPYIXWTIYYWDLMFHHRAWVGYOUXBEWSVYAFKJGHXPTBNIUZGGRGUYLINJJJOZRVMUKOBEVJCHRVUYZTQFMOIMEQSAIJH");
    msg.type = 146U;
    msg.access = 201U;

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
    msg.setTimeStamp(0.301055261928);
    msg.setSource(58068U);
    msg.setSourceEntity(157U);
    msg.setDestination(2391U);
    msg.setDestinationEntity(244U);
    msg.cmd = 45U;
    msg.op = 91U;
    msg.plan_id.assign("JUDVSLOKAVMXDOIYUEMGSVOZKPFAFCDBWXMTDFIGEVQJAOZBOKXRGQCYYWUQJXDMRPDPHKTNIYAAMHXNCPXMSTBXGKBI");
    msg.params.assign("LZMNFNNDJXSFRKUCQJKVIWGCUYETMEUWOIEOFFDABOCEETH");

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
    msg.setTimeStamp(0.156400603899);
    msg.setSource(38176U);
    msg.setSourceEntity(61U);
    msg.setDestination(4137U);
    msg.setDestinationEntity(47U);
    msg.cmd = 28U;
    msg.op = 21U;
    msg.plan_id.assign("STNJLETKYVILKLHUDOCEXXTKVJYGGXRADVRFHPIJDOBPDSLYSYZFCAIKOIXOBUCWQGJMQYVXYVTBJYZSMIGLWILTGASHZNNVRFNTJXEGRALODWTNMMGETVGFPEVNILMWQHSEHZUGLUBPCZYFUREWMJTNZNVFWDUSYDRLEUAHBU");
    msg.params.assign("LPCRAUZWMPQSFPTCGRARAIZKALNNSD");

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
    msg.setTimeStamp(0.436655141685);
    msg.setSource(34729U);
    msg.setSourceEntity(106U);
    msg.setDestination(54165U);
    msg.setDestinationEntity(85U);
    msg.cmd = 228U;
    msg.op = 169U;
    msg.plan_id.assign("YNJESGDCNSVCLGVWJUSKRDNHQRPBZUVICDOEZQZFLGDDWWCPFFKSALETIKZQDVHCLHCSSYXNOOGRNJNQGJOMPOCAMEACVMWOFFSGMTJRKZBTRPPAJBHUFFMQMQYXWWVXKRLJIFBFBAATIYXHBNUDGVHWESRISNJYVRTEMTZZPOIHLQCNXQEJXUWTXBTBILMYIX");
    msg.params.assign("YDRQALPKFATADGGRMRQHNWLYJWTFKVVULHCWDCSEKLPQZSNQLUTZYCRBBGFFIICWBEGAMBMAJUCICPJOQXCIFRUPOQJRJLPHEHBAOWXXHNAPCYHJVPAUXFZVRWUYKYTCFQDKOUIWGOFDCTBNMEWLUSEJZNNTKRDENKHYHDMBORXEBXVVZPDDIEZMLLPEXVKUATXJYKUOJOVMSWQSGHLPYWSTGMZQIQXZFNVGGKBYMHSEXMNROIATZZN");

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
    msg.setTimeStamp(0.760677010038);
    msg.setSource(64848U);
    msg.setSourceEntity(134U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("WSZTHXFUKWVDTPBMOKCLBDJSFBXQNJQWZFPBLNEVHSIVQAMEOJRYQGBWAIMJMQCWLUWNWHOXXGJJRGGRAZGGHVPSRZUXCSEJKIYYBCEHYFAAFLELTIFTKZILZXDLVPAMOPUGWKAPUMQIUBOCF");
    msg.op = 48U;
    msg.lat = 0.462045276726;
    msg.lon = 0.180821129579;
    msg.height = 0.348797973185;
    msg.x = 0.392783044804;
    msg.y = 0.812697215572;
    msg.z = 0.803951617844;
    msg.phi = 0.270186095903;
    msg.theta = 0.367671163948;
    msg.psi = 0.247083687825;
    msg.vx = 0.254673131411;
    msg.vy = 0.935089252962;
    msg.vz = 0.849371003005;
    msg.p = 0.712220063989;
    msg.q = 0.19973656459;
    msg.r = 0.483072547404;
    msg.svx = 0.543245931417;
    msg.svy = 0.227936178185;
    msg.svz = 0.870487648904;

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
    msg.setTimeStamp(0.832749605538);
    msg.setSource(22785U);
    msg.setSourceEntity(123U);
    msg.setDestination(16617U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("KRGARCCGLQSGBGAYDJVQJSFHPKBDXFNSWBTLGZAVTCTGMJERFUDFZYOTXSSFVECDAZJOPAXORXUYNFDYUPMMBWKWHOKHNEYVPWLEPJNGIVHXZEEZMLXGCNPJBTUVPXORUCOWIWEDSIHPLIKUOSNISHDMIUALUFYJUMRCVWEBMQHQZTBVJMFGTPROOL");
    msg.op = 14U;
    msg.lat = 0.53156217501;
    msg.lon = 0.204133246969;
    msg.height = 0.219477541627;
    msg.x = 0.00343207801133;
    msg.y = 0.519161417955;
    msg.z = 0.529476807221;
    msg.phi = 0.405105141292;
    msg.theta = 0.525282160262;
    msg.psi = 0.288019447638;
    msg.vx = 0.852296875309;
    msg.vy = 0.0676501197415;
    msg.vz = 0.910577246595;
    msg.p = 0.306644057347;
    msg.q = 0.912866995324;
    msg.r = 0.0495796611238;
    msg.svx = 0.767358987324;
    msg.svy = 0.109640080738;
    msg.svz = 0.129656696343;

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
    msg.setTimeStamp(0.390643968994);
    msg.setSource(29538U);
    msg.setSourceEntity(51U);
    msg.setDestination(55532U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("EWFJSVDLPDXRQNWGEONJENGMIPVXSQRBBNHLQNGCFTBCMSHQUBUXMQKJCFFNVVYSGROHAJQYIMDPLFULAFYPUSWJAKQONJDXPDZATOSAMOKXFVGGIKAFWHGZEMFJZIKDMTRCRZIMBZOWAEAHETTPHQPDVPHKO");
    msg.op = 146U;
    msg.lat = 0.795458727749;
    msg.lon = 0.59587600034;
    msg.height = 0.392468637271;
    msg.x = 0.956186301571;
    msg.y = 0.0965401937062;
    msg.z = 0.593808229467;
    msg.phi = 0.176588664989;
    msg.theta = 0.171482549284;
    msg.psi = 0.0838197289096;
    msg.vx = 0.471902920815;
    msg.vy = 0.136417797412;
    msg.vz = 0.997205019892;
    msg.p = 0.619816123277;
    msg.q = 0.689740377058;
    msg.r = 0.560048621182;
    msg.svx = 0.635294356693;
    msg.svy = 0.888066831117;
    msg.svz = 0.974678405507;

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
    msg.setTimeStamp(0.57508485387);
    msg.setSource(29088U);
    msg.setSourceEntity(113U);
    msg.setDestination(20886U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("YWIBEXBFXSDFRSKPIXDVBXXOWNKCVGRSGLJACDRZIHHKOMQJNOLEKYKPBKMTIZGGDLWXMCGYAVJSXUYDINUEXFHDBGSUTWNWMVVYQUEEJBPGHJWMJFATKZCUADCHLVQNBMTKJELGSYYYFAZOUQZBT");
    msg.type = 172U;
    msg.properties = 30U;
    msg.durations.assign("EFKGJMNMBJURNGHWOWVDOXFOOGSITQRNLJSRUNZCFMITKWAXSWTEJLTFUJIECGHZXSIRTWMIHCXPJ");
    msg.distances.assign("XCLQGWPCDYU");
    msg.actions.assign("FMIRCUOHRPFDJIIHZVZNBGEAOJUJFMJXELABPWQBCQRSLOOGQHSUIRXVLGDQVMTTEJCSIBSYGZAXSV");
    msg.fuel.assign("KRZFTNMUSBSMVARBIKBLOCNZFACUSOXRWFEEUPELXJYSNPPBRMVDLNWKARLBSGYBINJJGXPQNUGTROZINKDKADQAWCZWWXLTQEYHULYVOPCJWCNEWICJFGOJWDVTIWQVXGDSZKZYXEAMKFJOCIIVDOUCSEEBFERYEZVGTLGP");

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
    msg.setTimeStamp(0.599981186989);
    msg.setSource(9312U);
    msg.setSourceEntity(182U);
    msg.setDestination(58311U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("MRMDLGFAJHLOQZXLBSJSDAYHCHLRUXSGOJTGEIBPLYPFHAQKKKPOWXALQTNRMLFQGNJVAWEKWGCXSYEUWVEOJNFHIKVOEHCNHVYUTFNXAIIIPBIWJFTQOVMGPFZGPSBAMDZJMX");
    msg.type = 48U;
    msg.properties = 82U;
    msg.durations.assign("CHBOADAQERFWUAXJMNEGKYXRCLASPUUSPSNAFPGGHMOVLVJEIOHRYALISCKPMPNIMJJVWVYCVETJZBNMIUAUJVIGFGHTLRDTEZHXFBOYGMRKTZPZXBQ");
    msg.distances.assign("KDCTSKYHXQJNEQFGKARMBNFHBBFJMWUTKPGFPBROITVK");
    msg.actions.assign("SKJJJYURHINXZTWSDBAUPECRWJBWZIGTDIEPMGDATTDWHXTCBSXBGHLSDVXLZCQQVDOGOKNYYBGMMYNZGKLPZPHVSOVTBHRFBPNKFBCAEWLLZXFKZEPFJDXRITMLRQYNOLYQTWVOEFVKIYOJAHINNLCPUQVBJILAGGNRSTUEKDFWMFKSIQSIWOZFCUDTMOPAXXCAQEPACYVVPVHRJYGWXOZJXUUY");
    msg.fuel.assign("JWIBVRDWRKHCFYDQOEQE");

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
    msg.setTimeStamp(0.105535838974);
    msg.setSource(6867U);
    msg.setSourceEntity(254U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("CEGMWKMLWTLHNGIDUFPOBQHCZKZEMZO");
    msg.type = 93U;
    msg.properties = 190U;
    msg.durations.assign("JXWZJVRFFALAFAQYLEXUZKVBXTSYUEXHUCTADILZNE");
    msg.distances.assign("MTDXOIQBSKUONKGPROLMXFWASQDCFJHJRDJEZ");
    msg.actions.assign("KNGZGHHGDGTKOXHSLRIHPSHMNZLZTEQUKBPCIUZKTKNFIVUSAMYPUAYWJAPAPJVLCHODFOYBSXCGRYBEEHRKHZASMZBSLVOTBXHTOWWEQXWTVUWDCBQMEJMWVKEFRPQBCPJDUEICYDQLQDJXFCDLBJJXVNFOYEDVNAROFPXKZZJZXVGVFSNCXLFDLNIENIWAKCSALIMTOOPYYQAOERSHWTYBKUMMFUMJLSWJGNRQFQR");
    msg.fuel.assign("EZLHUQGOUYSIMTCMPFJVOSUVHNEIWKRCSORNRZYVNYKPXXHKJFGWGN");

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
    msg.setTimeStamp(0.523969460963);
    msg.setSource(25755U);
    msg.setSourceEntity(191U);
    msg.setDestination(50520U);
    msg.setDestinationEntity(158U);
    msg.id.assign("AACERFPAPWPLXMZAGOXXICZZHPQHFFKWBGEZSASGJFWTKWQKFTHVAMQYCNKYXSADALADOBKZIVMCOIKNZXNDFSBKXMQHYXLUPNNCYMBJOMIBQVJJYIPUOIBMRVNRSJPUJDYZPLQHXGHCMEKYUGELHNUGVNSJBVGBSERZIYQKXMLZCORFHWGWETQTOTGZMXAOINU");
    msg.plan_id.assign("VYKLXLHJFYKJZEXJUHMUVQJOKNIXOLRYWAWZAFDDKOMRHIVWBYQORTYGLBFDEHMBDCUDWXSENBHYABYUOPSP");
    msg.maneuver_id.assign("KABBATAAUYWQYGDKZLLIJYYCSDIUORIOPUTYPFJQJTTWPETWPCZRLPANNWGWOXQBA");
    msg.memento.assign("RXMEPXPQMKBKGLEAIKFTNGMOVDGCDQDAKKMVIJSEKSHPSDWTBAPWJRIZOQVSZMVOHYTJWRTPNOYZFFNUVRZQHVALLNEDUZYHXDVBWBLUGHKFUOIUYCOSHWFWGXNUYJNBYGZESJGIECOQJJETGWKTMXHCSBMQWEZYRLSNXPAKSDRILFVVPXRLQPKATDIULCHYAUGOCUMRCPACOJAFQYZBBRHQNHWN");

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
    msg.setTimeStamp(0.892253231576);
    msg.setSource(750U);
    msg.setSourceEntity(84U);
    msg.setDestination(16981U);
    msg.setDestinationEntity(121U);
    msg.id.assign("HMMCSCMDAOSLSBSUCDUIKJJFRZWPNYDKWUEJHVYYNCGCOFNZUQHZVMGHLMAEAITOUNVNFHAJVX");
    msg.plan_id.assign("JIFOSMHBSLIZRHDUTZGKOLIZESFPEOQZXLLOQXFISFRKJIQWBUMOCRNDRBSINJMANUHXEDMTVXPBENCFOLKLLOPEMVVICSX");
    msg.maneuver_id.assign("ASLWNHESNCSFFLWBNOBQZUEKHWHBMOTKNFWMOKRJXGRT");
    msg.memento.assign("YQCVJARLMPATMHLUNORVX");

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
    msg.setTimeStamp(0.824961938884);
    msg.setSource(29742U);
    msg.setSourceEntity(226U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(254U);
    msg.id.assign("SWVVHAHNTKRMNEPLHDLZUZFCYDARO");
    msg.plan_id.assign("ZUUQFLINOPTSRXKDRXRVOWJJEGEXEBCPFQAQRATVOCPNUQVKMMSXPVYJXGBWNPOCJHECPKNYFNWODPDAEOSZUFDZEASZMMLGGLLYTCAYSVAYCXIRJRULICKJABIHKOMDILAELB");
    msg.maneuver_id.assign("NCFVJPUCQWGHTOAJEETPVNVFMEKSZVVNMGZCBDPYXYULWMDXZISVUMASEQHYWBLOEXNYUFBRDCATRQFDVUKHRXGIDJNJLUZOKLYNQDLNSYNHBZLQPCVYFRKSDUFKJRCJKCTFDAIIIYUTCFTKOIKXZHLPOSSSGAEYWXFTVEJMRGJJWMMTHHHOXPPHWGZBQUCQWTGWRDSULILQAAZBXFJTXASBOXVOEDQYHLIIOME");
    msg.memento.assign("RMWIVBTBPBHWCGVMZGPTMCUSXLZOQDTBTH");

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
    msg.setTimeStamp(0.299424560069);
    msg.setSource(33521U);
    msg.setSourceEntity(198U);
    msg.setDestination(6459U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.0582506950314;
    msg.lon = 0.460085995516;
    msg.depth = 0.878397537869;
    msg.roll = 0.926225483707;
    msg.pitch = 0.772966168584;
    msg.yaw = 0.190473069988;
    msg.rcp_time = 0.913172292983;
    msg.sid.assign("LZQVYDISCEYMRHNAWYPBEPTUHOPWYFSCXZEZVKSTAWGMHZNCCOBXRVYTODDOSIGKISSMXAXWBKCJEUBFKUXLFUPXOEYJGCBTDPHIOJQYYRKWFUMVMVVGXPDRNURQYWBDBVLHTTGGCQGEYCGNICENANNJMBLQVMHAELKICSRLLBBIZDVVJIOEZT");
    msg.s_type = 235U;

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
    msg.setTimeStamp(0.767942506532);
    msg.setSource(15885U);
    msg.setSourceEntity(12U);
    msg.setDestination(22022U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.716854817904;
    msg.lon = 0.178233837405;
    msg.depth = 0.455683897896;
    msg.roll = 0.276036652936;
    msg.pitch = 0.331718800016;
    msg.yaw = 0.0638848990573;
    msg.rcp_time = 0.701522398386;
    msg.sid.assign("IRKUEJIUGCXCCSTWHPYNMMO");
    msg.s_type = 78U;

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
    msg.setTimeStamp(0.948558453069);
    msg.setSource(14663U);
    msg.setSourceEntity(75U);
    msg.setDestination(35815U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.535495229296;
    msg.lon = 0.322495561137;
    msg.depth = 0.468305713275;
    msg.roll = 0.356998173989;
    msg.pitch = 0.425724477341;
    msg.yaw = 0.926030506298;
    msg.rcp_time = 0.172372063892;
    msg.sid.assign("IHSULCJFTGUCHIAEWCXZKTDXGKFKWSXHPNBYXACUPWGEOPEUXAWYRUHVQPJLBVPNUYZFIQPDCJAMGHFDAXQFBSJDJYOLEGIRHOLRHCTGZWGTQFMKKBEMOXQYNAQKWTIWPMJMIP");
    msg.s_type = 71U;

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
    msg.setTimeStamp(0.892146557004);
    msg.setSource(21165U);
    msg.setSourceEntity(250U);
    msg.setDestination(39543U);
    msg.setDestinationEntity(210U);
    msg.id.assign("TAZFNSHBKLKHEKEKIJTNXKONPQLOGOVKIVSNZWRFREGNBDIULESQRMJDPAPHEOXPYMJRFLAGDUPMXHYMYOXTNELPWOGXYIPLQWDZT");
    msg.sensor_class.assign("UVGISUXMODBCVLBDRJRKPTRVBVWTEWFPSTRDNYWLNOQUWAFDNWWJEUJVPPZNOKUSLONLSWSCVFSAYECJHMXFEQQEXZJHKGHXNMKFSACFRXGJOPVZFYDLZRYAZAZB");
    msg.lat = 0.533900328617;
    msg.lon = 0.987097205838;
    msg.alt = 0.599174695066;
    msg.heading = 0.995595656684;
    msg.data.assign("XJOUJHUVURTZPPOOHSKUAUQXZHUIQGDSTZIGDBHUPWLGLLTMAMIDKWEXXPELLXVSBAIQXMBSKDMREDLGDWEQFGTBPLPZDYJEFQJOBIHZXBZRHMVYRGERXFRQQIIHDWSUHTSFZJCQCLMLGCQCXBGPCIVSNYYFKESCIJYGVIOCKYOBYTKNNVCANYVPNOERNVEUWRAAMSWNFJNZAQZJTGBACNMYHVYFSWPPEDODFAO");

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
    msg.setTimeStamp(0.666712791775);
    msg.setSource(46953U);
    msg.setSourceEntity(51U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(200U);
    msg.id.assign("IFQJNKLGHNQCYVUZZXXQWHNXNJRLCEVGWSCUJMRZBGLECBPXVZDWQVZPSSVGIQBHVXRFYHTLCAVKIHKPEVNTSPJYODSSLAWLSNMWRZREANKFDMMBCWCMPMYIOOYDEMXEYATUCOZFTILPJURZHPBFOUGNKCRDPODFMVERBGXQAJATNKDFPJHWUJKBKXQSWYYGIKABRDSMMLH");
    msg.sensor_class.assign("QVJZQKSXOYYGSWIRIJPQDKTPZKVGYKAEOPDFTIUZROOXEJHRWAAVHLGLLPMGBEMJMWABIXBSPMKMVJTNCFBQPTKZRUIBWQVEFXHCLRXFRMKFLWAHSTOXOURHHDYHZCMSICNMDOZVGCCENWENMOLCPPBDSYLAQLEFHBGQOZGNUVFBUNWKASAKPWXJDGZJQIVRPXWNTZF");
    msg.lat = 0.633963376403;
    msg.lon = 0.361896565589;
    msg.alt = 0.687166008987;
    msg.heading = 0.0220821476425;
    msg.data.assign("UQPEXCLFIWSAZCQVEHOLISXBXPKZCSHTNHCRKQXNYQVYGKTQPDGVTYODIDIFQUHKVUUBMJZMRFAJLEAOBTDEOLPUPGWRNFFAPTJKZSIGXFTSBVSRGWOLJWGMZTVDMNLIMEIOBKLYUMKLYMDGFWERKWJZXOWZBYQMYRGNLVHYRWGMNHLAIPNSCAFAOPYQOACHPNETTHFSTUEDSIXEVABNCJYBZXNJAJXQHUKDWZESFKWDVGBPZUHUBQICC");

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
    msg.setTimeStamp(0.778812372114);
    msg.setSource(60414U);
    msg.setSourceEntity(183U);
    msg.setDestination(32501U);
    msg.setDestinationEntity(123U);
    msg.id.assign("EJHGPWRLSVPPSHRUNTIGWZOJCOVIXXOVKJWMYPTTVUFNIZARZWSTBMFIKBUNOKSHRZDYBOYJA");
    msg.sensor_class.assign("EPSVSGMKRAHMMQIDOIRYAHCLCWYNQWPXHYKXNLODHETKXKJP");
    msg.lat = 0.442165192332;
    msg.lon = 0.221446865149;
    msg.alt = 0.947390765734;
    msg.heading = 0.954484677119;
    msg.data.assign("KKBIEIEPSQMOVFFOFPHRRHAMBDGSSXILDTNZVPAYECLEUCTGYDUBNDAVNNZKEYCPSVOTZOOPXSEAQDAKBYJMHIBABUKBLPHLFCVJFTPNXMMWGLBIWZJPPZUXORNXVXQTBHFQHXLFAQMGEUREGMERPTDVYKZCZDDOSZWYIAROFGWFDHVXUQZWWGNQSFURELTHVCYCOQJAXWIKZCIWJSYCJJSSAHHLOTMCKW");

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
    msg.setTimeStamp(0.349116024926);
    msg.setSource(23507U);
    msg.setSourceEntity(25U);
    msg.setDestination(25299U);
    msg.setDestinationEntity(37U);
    msg.id.assign("CWSQKXVPFRESHEBENFGYAQDJGISLQINQHGTRYLTTFKRHUHK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SHQSKOPLSWYPFMDSKJNZUFKUWBHOFMGGRPVUFIGKNPHAVZFILUNCJADXUJQRBSQJREIVJAMTEJCOGWFAYBXBTIXLPNUYZXRLWRZXMXQSTLAOFNGLPYTTEEJKYECCKHIHYLSOGNOACWSJKEPGTCWAIHUGHUOIHQQXBMWTKBDENADAIEUFVDHTZMWBYRCUIVZRETJG");
    tmp_msg_0.feature_type = 115U;
    tmp_msg_0.rgb_red = 25U;
    tmp_msg_0.rgb_green = 212U;
    tmp_msg_0.rgb_blue = 109U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.957130217281;
    tmp_tmp_msg_0_0.lon = 0.89705011293;
    tmp_tmp_msg_0_0.alt = 0.690477228936;
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
    msg.setTimeStamp(0.807291761524);
    msg.setSource(36671U);
    msg.setSourceEntity(252U);
    msg.setDestination(53591U);
    msg.setDestinationEntity(170U);
    msg.id.assign("VMRQTJRCDRSHUUEMRFNJMCNHISHBVIRDPTQWXPAGYYIFOTXZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JQPZVCCPZZGWUAHXEMTDYZPHUJFTQFKFJWHMMOEZWVLFNUQKAXDETLSNLCGUPBLBWZMKWBEQOXMH");
    tmp_msg_0.feature_type = 105U;
    tmp_msg_0.rgb_red = 34U;
    tmp_msg_0.rgb_green = 245U;
    tmp_msg_0.rgb_blue = 120U;
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
    msg.setTimeStamp(0.223787874627);
    msg.setSource(58204U);
    msg.setSourceEntity(71U);
    msg.setDestination(52903U);
    msg.setDestinationEntity(98U);
    msg.id.assign("GMJTAHEVGVFBLVJVPRHYXWFQCYXTSNPWUQKMKGDVHVLNGXMLYKUAGCOQELPRTOJSYEDBDHOXLACLUSTMUCKNESRXHKBNFCTPBQBJWFFHFPUZRZYNOHRQCSSZOAFHKPVTABSMMUDIWXVESWIRDVRUTHNQYRZJZRCPJCDKAQBYNZWSNBIQQVGEITMEUJPZSKBDJ");

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
    msg.setTimeStamp(0.142978658699);
    msg.setSource(35941U);
    msg.setSourceEntity(207U);
    msg.setDestination(11544U);
    msg.setDestinationEntity(231U);
    msg.id.assign("TZNRPASXAKBWUPACSXZEBGFYVDLTLRCIPFTDBHEWRXMHLZKVIWWMNSYHHNYJKJCYKJLTWNZDOGNVTGIVIDUHPHXXPWOYO");
    msg.feature_type = 201U;
    msg.rgb_red = 146U;
    msg.rgb_green = 178U;
    msg.rgb_blue = 206U;

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
    msg.setTimeStamp(0.115170108157);
    msg.setSource(45468U);
    msg.setSourceEntity(152U);
    msg.setDestination(9587U);
    msg.setDestinationEntity(83U);
    msg.id.assign("KYDWHNXTPAOIZKMRTNFKUFZFRIFALHDRHFISUGNZBGGJXCBQJFIWWPJVSGIUUXSHOWSDTWOYVQZYZFEBMJIJ");
    msg.feature_type = 99U;
    msg.rgb_red = 160U;
    msg.rgb_green = 133U;
    msg.rgb_blue = 99U;

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
    msg.setTimeStamp(0.621583303624);
    msg.setSource(23528U);
    msg.setSourceEntity(82U);
    msg.setDestination(36623U);
    msg.setDestinationEntity(69U);
    msg.id.assign("PHDQSHTTMBJFEFGYKWEBPLURXMDDCFAAVOVHGTOJBNZJDILVBPOSBAWZCDSQZIRLJWXTTKIUWUNSRAQVVNNOPANXIZDFTZAHDCSZXMHKCJSAWFYNXWFEPNNOCAXQAPFGLFPWJLLNQEENZAOGETSBEWJIXKUGQQUUKBSYQXYQRKVBVXEIUJOMHBVHTCRRRI");
    msg.feature_type = 74U;
    msg.rgb_red = 51U;
    msg.rgb_green = 174U;
    msg.rgb_blue = 162U;

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
    msg.setTimeStamp(0.423695235166);
    msg.setSource(58215U);
    msg.setSourceEntity(75U);
    msg.setDestination(907U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.096254158451;
    msg.lon = 0.354106776401;
    msg.alt = 0.375135683341;

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
    msg.setTimeStamp(0.675527987175);
    msg.setSource(48528U);
    msg.setSourceEntity(2U);
    msg.setDestination(49707U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.0626257438404;
    msg.lon = 0.0791404340386;
    msg.alt = 0.506839014253;

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
    msg.setTimeStamp(0.378572274335);
    msg.setSource(64116U);
    msg.setSourceEntity(47U);
    msg.setDestination(64215U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.752938927473;
    msg.lon = 0.982468016851;
    msg.alt = 0.239598650252;

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
    msg.setTimeStamp(0.918495836606);
    msg.setSource(45663U);
    msg.setSourceEntity(138U);
    msg.setDestination(6899U);
    msg.setDestinationEntity(95U);
    msg.type = 66U;
    msg.id.assign("MXTPASIUEZQPZGGLNBTGJAJLKSLRDHJLEBDVGZNCAPUHBBPOMFYSACRMYAOGRYYFMHHERXQVCBUKWCUEXBDISJWOVYZGGQNZESFWXEEFKSGYNFJUDLVRDFQVILHXGCXFYPBWMLSHZLYQNVJXOIWSARRUCIYPTBOTCTIBSJWWZRZTHDCIUNEUAKPJTKNOFHDKQTEVDKX");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.937111973291;
    tmp_msg_0.y = 0.995662014545;
    tmp_msg_0.z = 0.493172701551;
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
    msg.setTimeStamp(0.739603519603);
    msg.setSource(26639U);
    msg.setSourceEntity(228U);
    msg.setDestination(23020U);
    msg.setDestinationEntity(140U);
    msg.type = 216U;
    msg.id.assign("QWTBUPTCIGAWICBNOVZSCQZRJCFONZZPRVZQSGLKPOYICTWZLGEWUDCVZQFQEBXTXHLLDRHBXJDRHXSOLBCDAFHYEMZMYRSYGTMPKKBSWHJAVVNGPAHLMBNNMYODUUUCZVPREEMFXPGLVLBWJDWHEYIFDKTSFTCLYKONUTCQTQAS");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 5158U;
    tmp_msg_0.status = 205U;
    tmp_msg_0.text.assign("AAPINERNETKXXRNQEJXHYFCNLIFEKVQBVYDBHQ");
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
    msg.setTimeStamp(0.50733924987);
    msg.setSource(17618U);
    msg.setSourceEntity(207U);
    msg.setDestination(10797U);
    msg.setDestinationEntity(140U);
    msg.type = 182U;
    msg.id.assign("GYYIDHGOCFSUZDMECXXKZJOYZQXSVMDVEAIFOCGSQPBBJSCJWYHXQNGOSXHOCKHOCYZOUUETVHHERLJLWUSPVPKYRAYNEIHFAJQLEUPEUGMIFASFBWDPCTMVNWG");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 126U;
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
    msg.setTimeStamp(0.558244009222);
    msg.setSource(41353U);
    msg.setSourceEntity(83U);
    msg.setDestination(20782U);
    msg.setDestinationEntity(22U);
    msg.localname.assign("HCBYMZHWZACDELOTAATPONHRTPTUZTLNYVQXKJEBGAVIKVPNVRMWNKEUNQZJSUYXMIIKROQQSJPYLSLCSBFDDZTBKCQZAUYBH");

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
    msg.setTimeStamp(0.890882298483);
    msg.setSource(39757U);
    msg.setSourceEntity(73U);
    msg.setDestination(46596U);
    msg.setDestinationEntity(167U);
    msg.localname.assign("TOKSJMTAVMVENABPUYCRLNVBFAIUQEWNVXDXFJMBQTPHYOIIMBPRKQXSBZLSHHDOCNDJZVRNHPPQSIQLOZWKLQEMDXZKMCSQOWSSUBAFPYFWNYXUGGKRPFHJQDRHENGVIWHZHTVHLJEYCSXBXYUZKUPEAWSUOMJWYKQOGYEXTDLGHRJOZVJGREMTSPNGWFAGGRZIVPIIOFAELZCCUCNOBBYDDJZLMTBUCTTUG");

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
    msg.setTimeStamp(0.661485334867);
    msg.setSource(9971U);
    msg.setSourceEntity(38U);
    msg.setDestination(23387U);
    msg.setDestinationEntity(136U);
    msg.localname.assign("RYYEUDTQITMHFUWHKBCEPVLJZXQVYGNYGARQLRJJITKLHQPEVLSMXHVEDERVBLCSYUQTFPIPKFXFAOPOXTTAQJMNVYMZWHNNZRWQBVGJNDLUEGYEWHPAYIR");

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
    msg.setTimeStamp(0.154031214927);
    msg.setSource(15U);
    msg.setSourceEntity(102U);
    msg.setDestination(59495U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("VJWTUELKWXVCKZEJEZHMSWYWNNQCMBUZBBPFRPBKQJNONOMVWKPRSFBKUCYTXJLVVRAXJHAFCEBJIRIVWIUBGYIMFPEHSDQXMEDLUTRSSCYLYOIMUTGJFNIRELLZZHGMADQZ");
    msg.predicate.assign("IYXRTIXTEHVMOQLJCAOIAINBVVARFYPVBFGLSFLDBVHOIUAZYZJKSSPEBYCILYDKCMFODPXOARMCXJRJRKJUPTUWOAKXFNZHMWJYBRWURQTQKGZFGQMGQUMUXUEUQECSLGIJFHZGJJKSGSFAWHQHKLSHTHGSZVPXABPXFTZWLAKIUJQRVGSPBMNERDYMOKCXYWCDUVHNOWKQDMXBNMABPYTZWDNEYWTNCVNIDEHZCRQDSZ");
    msg.attributes.assign("OSOAXWLGESJUPGMNDVBDWPUNYBCHYUNPHTEQODYGACOMBAFULKJFVNQAHLRDOURTJNVNTSUQRWSTXIIMCJYLTZUZGFDYKUNONZAKZKYKWLFGSQDERNQQXOWJASVYRDYVBEHHMHRMDVJZJQIZXLZHQDZGEUSKCNMEZAIJJALFCCAPBTEWFMVLFGFEPHRKGUICIMBPC");

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
    msg.setTimeStamp(0.76826734255);
    msg.setSource(27206U);
    msg.setSourceEntity(251U);
    msg.setDestination(679U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("OBDCNWTPYMHNOSKBENOSEEYZICVCZVAMQQLXNPXKLZHHGLCGYHGBNPIWTBMQHIUAPVMXJDQUXCLRFJPRQCOYPAOSWKYOUAFKQRYIENKGVKPIPHGAWTLUIPTWYXHBGSPFEDAYEFDUVGTTOEM");
    msg.predicate.assign("ORPARNPKXEZIHPBHRAJLBHMNCKNQRMGHGGFHIERGUCQASTAQDWZFTAECODXSBRBANWZANYWUGXLEMYVCWREGTAUSUEHRJOGIJFPFEQSNPDVMVHCZICJGDPDLPXITFKPKOOAZGOYRFLNBWEBBLWNHJYBNVUJDBVPLOLUSFKJWHZWFTQYDHFMJUTXYKOBKSMPYDZVNXJUWYQXVSITI");
    msg.attributes.assign("AIZPSEXBKZJIEURROSNGAYERUQFZNQNJTVYAQEJDDOLNPUOHGKSTMSAKDKXBJK");

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
    msg.setTimeStamp(0.393841361862);
    msg.setSource(37563U);
    msg.setSourceEntity(96U);
    msg.setDestination(23936U);
    msg.setDestinationEntity(79U);
    msg.timeline.assign("EKPHCABYQPBLGIMEFCAYYKCPBJJZLGATHFMSZHXAOVWGRKQQUNWICMLVDZPNOBNDONLYYCSUBTWTJUWHRMMMRXSUIGZQYWMFGIAGPPRETUBVTAWGZRKDIIOJQCMIOQKZQFSNHAKWHJFZXUIWGVUDXJVHHDSEZLOTOSOJRLFKXJRCONFQDPBYDVZBDECSBKEEEUAXQTEGNGJYWLVYFEXMKRFSTPRUCBLHKNNDRDLSXTVPOSLIAJQW");
    msg.predicate.assign("YPDLJEUSVIJRLMAYDVHJTXIKDIAXJUXRGUZIHRMKKDETONLPFQYNEJPUBUCMPOYCZNDFTVCMFDLZLQAFHNH");
    msg.attributes.assign("RGMLENGRSTUSXYJOHLZFTPEXFUJREXYAGODURPELCBXFNCQEYMBSBYZKONFGWETVKHVDQVFIEYNQSUJTHPKQMVCUMXVALWYAQDTTNWNWTVCZOSAUNDSBPFJFJJAVBWJZMWPKIHPXUBHCKMHLVOFYDACCSDPKG");

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
    msg.setTimeStamp(0.917319234772);
    msg.setSource(19730U);
    msg.setSourceEntity(174U);
    msg.setDestination(22466U);
    msg.setDestinationEntity(160U);
    msg.command = 113U;
    msg.goal_id.assign("KSHUHFNRTMOHZTEYGA");
    msg.goal_xml.assign("ZKTPJNFDBRIWEYAQSLZEMPXIXJIGVOHAYHUDYSKZUJMVQDMVBL");

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
    msg.setTimeStamp(0.721594028033);
    msg.setSource(42820U);
    msg.setSourceEntity(21U);
    msg.setDestination(24367U);
    msg.setDestinationEntity(184U);
    msg.command = 159U;
    msg.goal_id.assign("ZLHWMIWCLWVCTSWHBURXIOYBPYAFGGQLPOQAVRMMJAZHLOECSVZMMGBOPRWIVODMXNHGZKVJFNYQXVNTZKJLOYNKTDXKQYDJQDWECHAIOTVOGPPXBGFUJZHPSBNDKIRLQCGXFCUCXFTUSMPLEPNVKYKEICTJUSXFKTEFDHLSRECGTXSWWDAEZRTBRWBQMJUHSYYPAMIXHUQNNUKSRVFJDGZAUHJQLVPELOZEUYIEADROZRFDKBIGMTWSFAQ");
    msg.goal_xml.assign("EQUJLBJCTPKBYTJFCONZBBSJQXNNDDICOAPKSMQGZIYFOAPDMVPXIZSFKIHLKRIEQUIRDSZHPUFJLVLYRJVXGEQHYIEMUHULZUGRQOVIPXZNHHABJGXCUKRGBFDASMTWX");

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
    msg.setTimeStamp(0.0554507228387);
    msg.setSource(42131U);
    msg.setSourceEntity(226U);
    msg.setDestination(54201U);
    msg.setDestinationEntity(174U);
    msg.command = 249U;
    msg.goal_id.assign("NKGUDSGKFTSNMPBOKLBNXSGYMZZSQIOEUCZTILWWGJLKHPRYPOQUEDRKFJULCXRYXSEAAPIBXPDMCYNPTCHZYJDDCLGFAOLVNOEKQQHWZKSOHDADLZAILQPVDCFUQHMMAXCTBCRKKZOVVFEYVPERHJJJUGJAPXMVT");
    msg.goal_xml.assign("NREFNRLQFUTIGFARFLKHIAUOWGMTLMHQTXAEBKRGSDYBDIVEVECHJQIPCNXSTLXYVUSXODHNGSEBWXCRVLYNPGKWCHSTHZMTRNCPYVSRPJDOPVONQTZMRLZXOBMIAJLZCEKVZJZQTLGXAEAWMSCBFSLKQSJBIEIFQUVZFUJK");

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
    msg.setTimeStamp(0.0578777125434);
    msg.setSource(43416U);
    msg.setSourceEntity(126U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(56U);
    msg.op = 188U;
    msg.goal_id.assign("SZAJAWBPLWDQPZCKEHDWTDEGRTLLEMDHSEVEGJGMPKIQBGENBDTGQWDQFIMOBLKXBRQRXTVMRFDYZXIXHOOZLUGNRWNYVZICOYJUKSKUMLTAPTWKYHKIIAKAMVMJYOKPTAFLZSWNJRPQXNBINDBXHECDQIQUJNCZBOHTRRYFFMSSGLHQFNNQFPUNJBFYIPHVCCKPCGHRCVAWAUXVMMIDOTFEZXXHYUAFULABTYJPV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KDRPTGAXJKDWSRMGMPNVS");
    tmp_msg_0.predicate.assign("TXRBLNKTQVQPRDOWIJRPVHMLZBNWZDHSWSDGYVICOQNKYMETJXUMOPYUHUYFWPMXLPKOCEJBPBBXGKIJQBEREKDEQRMMVUNSNG");
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
    msg.setTimeStamp(0.748759133596);
    msg.setSource(5643U);
    msg.setSourceEntity(40U);
    msg.setDestination(22248U);
    msg.setDestinationEntity(69U);
    msg.op = 14U;
    msg.goal_id.assign("HZULQCOPQIRAYJVMQFREWQWBOFEAHSEYFDJTOCNXBMESG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CIEBPVQMJCWSZKUZYULQQJBEWGRSHBJHWAHURRTVRTOZURCYXLSURTLDOVQEJCHCPSCWUAAJTFJROCIMGOGWMZDUZNJILPF");
    tmp_msg_0.predicate.assign("BPBMMPMUUGXRIKHBWDUOKLZVDYKM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JFMRHYZWGGXYZAPJRNEBBGBPLMJEXIBGRRVRGLAERIATOQIQBWXUWQEEDVMPMINPQ");
    tmp_tmp_msg_0_0.attr_type = 66U;
    tmp_tmp_msg_0_0.min.assign("CEGSZPQCIZNCDMEHAZPUGULGDSBLHSXMYBTVT");
    tmp_tmp_msg_0_0.max.assign("ECKCELBQJVLKMLQMXVPBFVSXJJIKOIHZFWRYVTWOWWEBHDSAXQYMASOPLGWXGQAGLSHMCBTYRRLUDZDEJWMSOYCJFBFEKBINJRIARXVCKUKOMEZZBHINXPGZWWYTNMRIGZMNSSEDJPPAYZTPMAARSWRVQQNDXZKBLSVRBNDWTLGVEHUTUYQSLCTDDTCUCUIOOEJZUOGXHLEDQGNKFUPIIKGKRYAPNHPIVUABOCTQHFCZHGF");
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
    msg.setTimeStamp(0.629585784949);
    msg.setSource(15910U);
    msg.setSourceEntity(118U);
    msg.setDestination(4358U);
    msg.setDestinationEntity(167U);
    msg.op = 113U;
    msg.goal_id.assign("KCUOEEFIAGOVXINGKPKRIXXDJMZVENJDKZQPWPFQCQTCOB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PVHIMDRCMIQSRRAZWTPAUSTYCJPOVLWDUZMCXHPJNKSGNWMBWYSQWLBJAREOUYLEEHONAHOZAQJVKXPSKBNGZEQTIAFZBCLGQYVUJZNPPCDMFHHKAUNSYXHIVQXZEIYRBMBTQNJBXWGDAYXFDJGTLNUSRNLFWQFGCIHCTDQPMRBCVXPTMSLKSIFFLFJOEBIEKRFUXTZWZDKVYLCT");
    tmp_msg_0.predicate.assign("WJRJGHHFFDKVPFXKBJQMLCXHJLSLDPZVUAGVKLUSWFTBSOTUIUKHSTUMBVXAFYABGKPZIKKNUM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SIMPUCWBDCUEVESNEXOXVEGIKDVGDLYWSIKRPULETHKCNKMXGBOBCUTJODMWWXWHVYLCQZLSIUOAOBZGKFNIHMPFHNRATPMDFRQWPDPZYLGZWKAPNSFQBJOTSPGAVNVXIKFJQNU");
    tmp_tmp_msg_0_0.attr_type = 87U;
    tmp_tmp_msg_0_0.min.assign("UPPOXRWJLTAOMGTCYNAHWDLJZGWOUSEKGCYBZSOJSSUMWXCTVIYFVBBPPJRTXNHSYGPYIIUMLHXZKMRDLDTEWWFRSAHHOQRAFADZZXGRLBFTKCAHUVQHQQCSDVIEBNLCDYISOQGKVFMXETJLPPY");
    tmp_tmp_msg_0_0.max.assign("AQXAIJIWJDGDOAHULWHGMPEBNFJPBVNNWEFGYZBUWUKDCJGKSYJULQATIKERZLFZDBCUOPDGHPDWRYKGDUPHBYRPANBKUMHGNAENMOEBCHTPZYSRXQLERWYOQUBFIMVTFCCMWMGNEECXNBZVZACAXRZJEVSTQFKSVJOMIMLHVXGUJFTTLOQPYLYIIJTEYAJFXDQIIOQXKORRHCVVSOHHSKLSFCMRUNTLKCZITYWAT");
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
    msg.setTimeStamp(0.268116748875);
    msg.setSource(50641U);
    msg.setSourceEntity(230U);
    msg.setDestination(2642U);
    msg.setDestinationEntity(158U);
    msg.name.assign("QEPBMCPTKXXINVYAIYTGUJOCWPAGQQADAAAVJSMUXAMYRVCQNVOBXZJNWQPZOUUKHYJNFSFBTEBIDAPDNFJNMXORKTHZQLKDIOILRGGCBMCEKVKGDBGWWBDPNKXRTPYWWUHHULXBJFCTTOJHOMYXKHVIPVSJCFZKSE");
    msg.attr_type = 221U;
    msg.min.assign("SENSPEUZGYLDGGLRACFVEY");
    msg.max.assign("RCEILOUOGBXUATZFPQJFDTKCWAEHH");

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
    msg.setTimeStamp(0.914923038724);
    msg.setSource(38147U);
    msg.setSourceEntity(173U);
    msg.setDestination(34495U);
    msg.setDestinationEntity(47U);
    msg.name.assign("FMQWDIPKWUMTUNQGYRPQCKEBJBHMVVVIUVIEWIMQLEWJFZCBSXCAXUDMEMPVAWZTDZQPSLNOFXSBGWNHYBFKVEHLHNDCGPCWKOXNTLGEYQHWHLDCIODMOT");
    msg.attr_type = 253U;
    msg.min.assign("RKOXFOGQKBSPTMLIRJWUCQQRTKUJBJVDVQWLRGIUZVAOBUFZFNSTPPIJWAKKFNEFEJZCXAGMDTSUUASHUEPYMRCIZDDXG");
    msg.max.assign("IKOFGRANHWDUCQEDDOK");

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
    msg.setTimeStamp(0.265832476222);
    msg.setSource(5917U);
    msg.setSourceEntity(38U);
    msg.setDestination(47419U);
    msg.setDestinationEntity(85U);
    msg.name.assign("WBMBJMBFOAHWVIIKGUSIQFVEFRDXPBRDVROTCZTGTNFDDVURLWBAQNEHSWLQPFEMYSOOEZYZKMWIPPV");
    msg.attr_type = 172U;
    msg.min.assign("YLYOYUFPRZCAAFSZBQMIOZFQECDUCYKMKDDWFUNJOIHOWLTDOEVQVJTVMKPVGKNSTIKCGZEQIABVLEECTXSNXDJNKTYNVJTJOWLJCRHBOFRHOARBRATCIEWSDPUVMEXAYAMBUFAUCPWSHXZMPNQCGILHQTJGVPHRKIMSNZGQUKBWXRNDUDLXSQFTRNGZYLHYDAUHEZSOXXACOXBGWWTPIKMVWF");
    msg.max.assign("OAZMIBXRDFFSSWOKGMKTJQIQKBNHINIRGEJAWGBCAKTEPSLPURF");

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
    msg.setTimeStamp(0.278740855291);
    msg.setSource(1119U);
    msg.setSourceEntity(35U);
    msg.setDestination(33080U);
    msg.setDestinationEntity(222U);
    msg.timeline.assign("TQVCFUKBTIVDEIPAPHEYWGTRBNSUXPDGPUILZXMAKTGCWTLHSJSJBNWQGWJAACODTVGAVZLPUVEJKLXCLJCBEMJGRAQNYAULZBBLMGQRS");
    msg.predicate.assign("XQYZHLBRXRQEAVOSPFGXZXRBRAPWGUPVIOKLUXKKKPJGGHEYWFNLUOBNLFDTTRTTHYLCPOTMMJLRVQZZDUIYDPCHFQQADEIRANONWMJAHLGRMSCTAASZKTMYXKPEOXVRDNURVMVMBIWUEDMWYJKGNBQZMJNVUBUCILAFCDOFNWDPNSDGVAYV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RJNOYKEXFYITRXSKAHMMFDRICTPAXMDFUOFTBXGRQQSFRPOJZKJGZDQENUUKWIVTWODJKSCVPTCNYJOASGWRYMNPEALABCSCYHLWSQSZZJKBGJBJNBNMAOIEFXLDRHPDVSRBIAUAPEOXUYDNFIHGTWGSKTDXEJHZH");
    tmp_msg_0.attr_type = 36U;
    tmp_msg_0.min.assign("CBDFHFHXADRKDLIZAWQMYYLNMMZTBUWBQFLIRVVC");
    tmp_msg_0.max.assign("BNOSTRDYZZXXGCPCFGWHVNNDHWUGFZIZYZANEQMCFHSOCUIWPFBVRLXREQBAMAPJOBDGQMNVAAIEIVITHQRNJODWLUFDJJXPTPYWTVZRPXZBIOBUMYSLPGMFUCHKWEQPQNWKBOCXHDVUQQOWQSXBMJIUQPBMGYFCCAUGSZKSATD");
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
    msg.setTimeStamp(0.929934431598);
    msg.setSource(47883U);
    msg.setSourceEntity(176U);
    msg.setDestination(20943U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("ABKXAVFCXFKKLMBVYCFFTMPWNUMCPSEDCDGOUKWHHXZIDGGLQNNTOKYEZYUJKKPHDBHVTFIYWLCCAJIGMLEOXNRGUOMJQVJCLHAWAASQGJXARVEPIGZWUVVVXPQRNUHBSLDOFOGHLYQZYIKURROGZQUHNBSUSJDTFYWOESXYCMPELJFZBJKMPOQTMXQRNAYRPBGSBRPTFZVCUYTI");
    msg.predicate.assign("EQSNUIYGGBCMAJOZHDODIKVSLCZVGNDOFNPYBLTNLNRPPDWHBBGFFAGKCQAPKPVLSMFQACPFXJUJWZNTKDMQCFXZDOCNBTQQJFXGAEMSVEKDULLLYTPSWNXVBTYGWZOHYOCOQTXAREJQITEIMNSBMQIJVFSULRZABSTGPHCVUVMPDDAYKOFGVYGYJIWKESJZNAPRMXHJBOXJZUMXVZXURHOIEKCBITYFHWHXMHHRTICRWWURADRESYEIUWEKKL");

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
    msg.setTimeStamp(0.163730650741);
    msg.setSource(30923U);
    msg.setSourceEntity(157U);
    msg.setDestination(15231U);
    msg.setDestinationEntity(19U);
    msg.timeline.assign("FWHFDANKBZOIHBXXCVDJCSGUEMS");
    msg.predicate.assign("NIFPLZITRETQGYCBARHOVAFXCPDQBJCYBKEFRACLXIMFHAUOTBLMEEVYXTWNVTDUULAGLCLAVOKVOPNRRBKZOCWJGDBKBBCNDNEKZYDUWMERYTTIL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UWOUOXBOQASNJDYITJTFFGZKPUMRCBMBTQNXVHBUGHDLEQMHHQ");
    tmp_msg_0.attr_type = 136U;
    tmp_msg_0.min.assign("OINCSTFVYMRDUCXYTMPZWGMEFKCQNKBRTRTQOOICJXLQWFOEBCUAXSDJXWBP");
    tmp_msg_0.max.assign("ECNTZCCHNEQUXVXVTKBTHIYNFGEKSEDOVLIMFVSWSXQYQFQGTWCXSJJGZJKWCBLTDQKDXNUFFPRKSHOBGPIIMNLTNONYRWEH");
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
    msg.setTimeStamp(0.925621087116);
    msg.setSource(19356U);
    msg.setSourceEntity(176U);
    msg.setDestination(56358U);
    msg.setDestinationEntity(161U);
    msg.reactor.assign("SCWGWRIXQVMBJDJGCTZEWJEGAAZINUVWBLGSCTRMBOONFXCTDEUMADOBCLYVLXSCBMJVYFOABASXHQVI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RKOGXJPTCIUJZPYPZVRTVOUAAALWLLMWEQHPJPLJLVIMAAOYXGXPLSFJCGXYCIJIEFLEQWYDHDEMTRKGOCWGEVQUEIFMTZUSEAGBAUNKNHVJMLBEISBSCBW");
    tmp_msg_0.predicate.assign("NONVDWMHHPMSURLWPQKSAOQKWAHJYSZUWCGSFMLBJNUVQLDJRALCDEISTCWVDNOXWKKLYGTQXVVEYGLFRTBXICEXICBMEFXWUTUMPWTDUZQFPBIEGX");
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
    msg.setTimeStamp(0.890000123902);
    msg.setSource(51863U);
    msg.setSourceEntity(164U);
    msg.setDestination(64042U);
    msg.setDestinationEntity(188U);
    msg.reactor.assign("FNPMVTUYHJXMBDHMPOXADBCG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GBIMPFTAZNNJHOEBDAYQRKHOMUXRPEZWYZIZKEBDFQVDUVBUFJMLVFMBFWPRRTWLUJDGHUODCPCSNTPUSHXXJDWRWVWEKNHTTBNRPYAXSOGHQUOZLOQBUZFVZUYBJGKKSTEYQHRYZZCYYAUGXFPMSFEHHXAQCIABGHJSATCXGIYTQJDKNOISLLXCOLIPLVAFMCQOICNKVWMAPXQLX");
    tmp_msg_0.predicate.assign("FRPXTYODOGGZZDOQZUOVYEVVNMGOTOIOMWLEHMUTKYM");
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
    msg.setTimeStamp(0.213812378429);
    msg.setSource(25994U);
    msg.setSourceEntity(18U);
    msg.setDestination(13580U);
    msg.setDestinationEntity(249U);
    msg.reactor.assign("VZACNJLPPBGMZHURDZFFLUTVMMTRYSXEPCJSLONDNQHRFOYGNLCZOUJHERYUCDYHJWIEBKVXAVSXUKXNIFPOUGFSXARNXAKKEGUQKBXISRSAJMCNWPEJWAPYOLMTICMOUGMGDVTYVWAOYHIQWHFYXGZPJFLI");

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
    msg.setTimeStamp(0.724254029532);
    msg.setSource(20062U);
    msg.setSourceEntity(69U);
    msg.setDestination(54530U);
    msg.setDestinationEntity(56U);
    msg.topic.assign("FLOPTLRJUCLRRGHYMYKMKIAWOSEXVQPQQSUCBYBEWQNLRENJOIFDXGIJXUQDNPYDOQSTEUJJMCQEUTNVQIPZNBAQPGWAHSBLKBBSLHUMKLAGRZFTIHMLXKAFDPWESXHRPXXAGKVEVHKOUGTBPRZXQJNMCIDBNKOMOGWVKFGUTMNJHHLSCXCMXYADSZSMCZYTRHZVWDCDJIBIUOAZFUITTHZIWZD");
    msg.data.assign("ZSRDJWDXLSLDLWIWIOIYDQMFOSDCJHPFAZVUPBTHLDYIOUWBKQYCUYHCXOQUZTGUMVNETTYSKONSADWFEMZLUWIRIBZHWGTMJKOHXJFNJOZPHJBXTRMCYDLKKMNBPKXPYFAJBBFSLFVMKCILNRJNIGCLLHEGPERTZAXQAQHANVDJWOFKIAPSPJOVVQMNCTZGBRQGTRENXHRPABBUQOQZKCSECSUYXFKXQCRVFVWVAMRAUGENXHY");

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
    msg.setTimeStamp(0.341473999789);
    msg.setSource(47426U);
    msg.setSourceEntity(39U);
    msg.setDestination(51858U);
    msg.setDestinationEntity(227U);
    msg.topic.assign("XUVSVLEDOBQUUOZOQWEWDHIFRCNUNEJIYICXBRGQWNACDJETRWBMSDGKNFJFBQLHMMMHJMAOWKYMFHBZUEZFYRAKLEZTRDVBYOXUNGRBQXQLNTALHBKKWTWZGXMHHEUSCVKFVVTZSIASIFKIPSOPCJLA");
    msg.data.assign("KVNBJDQIGGQNEZZHDYSJMACUTXUVWMPSDXHXMJUCRSZQMIWKRLDRJYTRALUMKLBHDSHXJZZWPNKCSNFDYPWIRFLCUHTGD");

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
    msg.setTimeStamp(0.831445654183);
    msg.setSource(4695U);
    msg.setSourceEntity(35U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(141U);
    msg.topic.assign("HDCQXDPMURLCYLVKHMOOCXSBIPYHASFHVNZYGEKLGOJIVZYGSQYCSCEQUJSYNHFJGORNUGTFIUGDQBKWGTAXJNZBJFXWNECEWZKZHGDALQONQCEVTNSLBKSVZGTYEEKFBRIFDRLPOXFRBICHHXPPPEKTKIGQSPPRMOZZXBDTXWPWAMMHLILUDAEWIRFIUOJDNUOLQAMVUJTVBFXWXJQKEMNNMSOAZJCMTWHPTRVVWRVUBWQ");
    msg.data.assign("KRSOKLOXTBYRJOKBGSRNOVOYTPXWBXFQLAVDCHCPJFLHZUZWAKDJWEYUPAERIFY");

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
    msg.setTimeStamp(0.858926170008);
    msg.setSource(45395U);
    msg.setSourceEntity(29U);
    msg.setDestination(45558U);
    msg.setDestinationEntity(141U);
    msg.frameid = 239U;
    const char tmp_msg_0[] = {42, -60, -97, -117, -91, -10, 16, 0, -118, -35, -14, 32, -116, -2, 77, 43, 121, 21, -35, 61, 86, -68, 62, 125, -14, -100, 90, -16, -127, 61, 47, -108, 101, 32, -88, 36, 21, 87, -82, 52, 52, -96, -64, -20, -52, -109, -32, -80, -44, 2, -51, 14, -104, -5, -127, -83, -29, 74, -70, -41, -78, 58, 25, -31, 2, -40, -102, 79, 98, 93, 77, -27, -101, -53, -55, -47, -66, 101, -19, 73, -98, 65, 101, -73, -53, -13, 72, 114, -99, 25, -3, -92, 98, -1, 71, 98, 89, -122, -100, 51, -80, -16, -24, -25, 36, -76, 49, -25, -124, 95, -51, 12, 58, -118, 67, -115, -9, 24, -15, 118, -48, 19, -62, 83, -104, 75, -72, 93, 123, 2, 95, 15, 44, -46, -70, 118, -92, -7, -61, -93, 62, 86, -114, 30, -56, 70, 28, 48, -106, 7, 23, 91, -14, 124, 105, 28, -108, 107, -82, -25, -47, 41, -47, -34, -7, -100, -45, 19, 106, -20, -122, -86, -1, 119, -73, 1, -24, 85, 76, -106, 33, -4, -99, -23, 126, -108, 99, 126, -45, -58, 47, 11, -22, -95, -28, -15, -69, 36, 10, 52, 76, -30, -7, 79, -15, 36, -114, 91, 22, -22, 14, -24, 36, -46, 40, 22, -112, -58, 20, -48, -31, 78, 15, -10, 49, 31, -127, 67, 86, -112, 23, 4, -70, -101};
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
    msg.setTimeStamp(0.625613719367);
    msg.setSource(35651U);
    msg.setSourceEntity(38U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(125U);
    msg.frameid = 137U;
    const char tmp_msg_0[] = {125, 92, 114, 76, -69, -9, 68, 109, -66, -91, 100, -88, -37, 94, 21, 36, 16, -93, -70, -63, 97, 109, -77, 112, -27, -9, 121, 113, -81, -80, -112, -101, 52, 102, -60, 21, 85, -10, -71, -67, 80, -54, 64, 111, 83, -123, -91, 71, -64, 64, -20, -57, 40, -11, 8, 35, 42, -69, 76, 81, -109, -16, 91, 13, 42, -39, -98, -32, 85};
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
    msg.setTimeStamp(0.420878197492);
    msg.setSource(47806U);
    msg.setSourceEntity(219U);
    msg.setDestination(15000U);
    msg.setDestinationEntity(8U);
    msg.frameid = 49U;
    const char tmp_msg_0[] = {113, -91, 15, 57, -66, -85, -58, -99, -36, 79, -27, 88, -63, -124, -114, -23, -92, -96, 107, -48, 80, -34, 124, 25, 10, -38, -9, -87, 106, 116, -98, 106, -120, 107, 95, -86, -70, 13, -15, 120, 38, -2, 65, -29, 64, -113, 88, -81, 3, -18, 114, -40, 84, 106, -44, 6, 47, 126, -123, -83, 109, 12, 68, 79, 122, -103, 42, -98, 121, -12, -74, 47, -7};
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
    msg.setTimeStamp(0.242559283873);
    msg.setSource(6580U);
    msg.setSourceEntity(142U);
    msg.setDestination(21190U);
    msg.setDestinationEntity(74U);
    msg.fps = 117U;
    msg.quality = 25U;
    msg.reps = 89U;
    msg.tsize = 225U;

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
    msg.setTimeStamp(0.473907194366);
    msg.setSource(2563U);
    msg.setSourceEntity(125U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(56U);
    msg.fps = 198U;
    msg.quality = 56U;
    msg.reps = 172U;
    msg.tsize = 221U;

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
    msg.setTimeStamp(0.872801356387);
    msg.setSource(33397U);
    msg.setSourceEntity(153U);
    msg.setDestination(4924U);
    msg.setDestinationEntity(176U);
    msg.fps = 89U;
    msg.quality = 150U;
    msg.reps = 216U;
    msg.tsize = 65U;

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
    msg.setTimeStamp(0.850499863509);
    msg.setSource(5279U);
    msg.setSourceEntity(37U);
    msg.setDestination(39745U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.0998553235779;
    msg.lon = 0.14440059972;
    msg.depth = 79U;
    msg.speed = 0.975774992405;
    msg.psi = 0.354354442654;

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
    msg.setTimeStamp(0.176676032477);
    msg.setSource(5009U);
    msg.setSourceEntity(71U);
    msg.setDestination(36424U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.229687644519;
    msg.lon = 0.406277715873;
    msg.depth = 245U;
    msg.speed = 0.894260414946;
    msg.psi = 0.19578845413;

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
    msg.setTimeStamp(0.489762237456);
    msg.setSource(39068U);
    msg.setSourceEntity(8U);
    msg.setDestination(59572U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.993120841991;
    msg.lon = 0.70595853411;
    msg.depth = 132U;
    msg.speed = 0.602287901014;
    msg.psi = 0.0175458735535;

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
    msg.setTimeStamp(0.837531919136);
    msg.setSource(29103U);
    msg.setSourceEntity(27U);
    msg.setDestination(4093U);
    msg.setDestinationEntity(102U);
    msg.label.assign("EOPFLATDMHLSPPOIIBTKBBBHECYMHJZFUNFMQRBHIASRRXKYUCVGAXZETZRJEHVUWJXTWWJQMAZWSWJQKHGRCSMUGLJTDPJZOHCYPUYDVUXBYMMWSRLJIOCABRDMYPQDGNDCUFXKGLNXIKOTTYPRMTIEQGNKXWRLEUVCLKMEFSFVCVGFWLODPKNGSAJACWNVQZQ");
    msg.lat = 0.748487772212;
    msg.lon = 0.00259832488857;
    msg.z = 0.954680599846;
    msg.z_units = 24U;
    msg.cog = 0.294883031796;
    msg.sog = 0.788693107382;

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
    msg.setTimeStamp(0.190480568642);
    msg.setSource(1545U);
    msg.setSourceEntity(141U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(85U);
    msg.label.assign("IYQGZNRVEBMKHCKXFUWXBYXQKLVJONBEEXSABYEJDIREGIJEUJKDSJMJZUFCUUFTSOWRWRVCEKZKPAJSCAWGONHAVYCAHRFRVQNEOQTHNXFMFNYZWZOLCQWKWAQTLOSAIC");
    msg.lat = 0.0117077047618;
    msg.lon = 0.387155026646;
    msg.z = 0.548157630348;
    msg.z_units = 117U;
    msg.cog = 0.692494234687;
    msg.sog = 0.793764263395;

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
    msg.setTimeStamp(0.262463809299);
    msg.setSource(29310U);
    msg.setSourceEntity(98U);
    msg.setDestination(42465U);
    msg.setDestinationEntity(196U);
    msg.label.assign("VCGKMNZXNIWKTJOWQLNLHHMXQCAZYUECJSPDKNWJJASFSVNNSWBUPYWVUZNFDQORIHCXVGZFLMQMSLSDOEHLGVFRXAAMHLYVZETFNYHNLQROAK");
    msg.lat = 0.401966024864;
    msg.lon = 0.691740396521;
    msg.z = 0.654878991118;
    msg.z_units = 243U;
    msg.cog = 0.972400677843;
    msg.sog = 0.0883963449508;

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
    msg.setTimeStamp(0.00506789592892);
    msg.setSource(29776U);
    msg.setSourceEntity(94U);
    msg.setDestination(51199U);
    msg.setDestinationEntity(37U);
    msg.name.assign("AOUGYVAFBLQPMDAZGSKBETLZSFBYPSXIO");
    msg.value.assign("ZCDPFYYALCEPVDRBYQDNJJMSHBG");

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
    msg.setTimeStamp(0.933393433104);
    msg.setSource(20422U);
    msg.setSourceEntity(86U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(32U);
    msg.name.assign("SDKDYWRYSADDHZLQIWDKQKIOJGNLEAAASOKDYKXSBQJUHWOHQMXIRAMMZVGPPSOTACNMRQYCMQTCRKMCFLWXCUUXOXDNJNSWBIXVIXSRTFFFEYIERPLLVJUHBBCIJHBVGSZM");
    msg.value.assign("TKNQXFCSWDWRQVEHVCTOJSTLNPLLJRQEGQQXBSYFIFTZKKQJJZEOTDQOLIKGRGPMIMVIHNUBAPEWUHCMGPTFUFIMQDYDOGBYWJZYERXLOVACAYLUWATGNMVBPCWTRZYQSHWYBQPHHDFRBSEUNZVAYJJUFRMIUKMONACLHDLMXZFYLHTIAYNC");

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
    msg.setTimeStamp(0.60808940796);
    msg.setSource(27410U);
    msg.setSourceEntity(100U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(67U);
    msg.name.assign("HUZKTLAHNBIVRMEDHEMRGWRPMHJLKEKOFFLMQXKXSQFACPGTBORTGIUNYNTDBPESDZCGOJXVCCTVTUEJUXQNNYRRDJHEPRNGLVMNDKHPVXOWAVYXQSGAWVMHZEYNJISUWQNBUZCRIWZCZ");
    msg.value.assign("ABSDAUTWYQKNOCFAKXOINMLIMVXCCYKVLCHTBYSPEURSGODNHKQUTEGDMBHVICTTYJRNZUMRDIFSLFKPRPIRIXNZIAGWOGHVAEPKFFVWYZPABWDHABELMLNGWPQMOLMDFAQTHQVJVJBVCUSEIVQXXLUUXNFXF");

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
    msg.setTimeStamp(0.330986829963);
    msg.setSource(12301U);
    msg.setSourceEntity(61U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(220U);
    msg.name.assign("HOQTXTVCTORQVHUVBGMMSZSYNYFQVNBXYURQPOHUQGITNCCBEREIWRTWHINAMANLDPGMEVWMACQJSFSPPZRYDDFGJNMLLDTFYOYMGEMPXTVEKJCQYGGZYIJBSDWJLWUHPZHREZOJBZKUFXQVOFTZIUIJMBCUHDSFXBAKOWNLACBOPVXXUANORUHHZKVQACSGVPWGKOBLKMEEFYFLISJDILDALEDXWAJTXLQJPZRHNF");

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
    msg.setTimeStamp(0.715817694033);
    msg.setSource(46928U);
    msg.setSourceEntity(149U);
    msg.setDestination(11904U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DWPYLIUEVPXDJQIZFTDRDBFUFIFSKJYUCZCUOPOHQONOG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DRJRNRYAPBQGXSOWCAEJRGAHTODBOTBITOXHJ");
    tmp_msg_0.value.assign("VFGILQOTBAGZOMALRRDSEDHJJQMEDUJETSTGHMQUPMHPLSZIPEVAEIGCXHBZCXWZFYCANIUFNMNPXONILERYLDZVGPTMCVDQQBBEKHMJJIJNLVNFSDPOBZWWXXZDFUTCVQYKBRKCTWYUVLFHOLORWAAEBLZVMPYPWHVCGYBJYAHOAINTOGJQWKJVTGAYKXSKCXFXPWUUDQLHUSIOXCMSKYRZKTTZIKRCDWSOWNUEUJREXGSQQRFPRSFNANMY");
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
    msg.setTimeStamp(0.429543002184);
    msg.setSource(48154U);
    msg.setSourceEntity(95U);
    msg.setDestination(4398U);
    msg.setDestinationEntity(191U);
    msg.name.assign("IRSXCIIGBGKNDVWVGPKQEGXKIUPXHDZUUEJTAOIKEDHAYIIFSLQUMWSRXZSJMVHRVJOZPSYBTTOVCMQWFXKTRZTHBAPVZMFOCFXBUYWTLTIHHNTXQMLAFCEQBENUNNYVPWNEMCOOSUHWLJCEFIKTWBLJSBXTDMYJENOWPQAMKPFMDYJHCWROZGIARVJBHKHNFQKYQPEYVGAZGZLWVRXSLRA");

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
    msg.setTimeStamp(0.235955699978);
    msg.setSource(62837U);
    msg.setSourceEntity(243U);
    msg.setDestination(36150U);
    msg.setDestinationEntity(241U);
    msg.name.assign("YCOIDSVYYDVIUVXXXEQZYHIRDXEHTGNRNELHZBJCGHOKCZ");
    msg.visibility.assign("DJYXFLTMMUXSVZSTJTBHBYGUPUQSWNEMOZVAXBXPZQDDLCRVKEXQGFUOVWTIOWYLLFHSRTAOLKFCGPFTDBNPBNFEOJUCYSINGMPMVMDHAVLKPRPRWNMXRIHEQNESZEWGMFODQKUWECZQRT");
    msg.scope.assign("OWFDKMQAOXGNHJWNROUXKRSQWEVDRCICHYECZNEUAHZVPVEWPVXEQVSEOKYMTBGUDTWAXNLROASPNWGKNBHYQPYXSKDLUP");

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
    msg.setTimeStamp(0.764364385021);
    msg.setSource(2968U);
    msg.setSourceEntity(198U);
    msg.setDestination(4325U);
    msg.setDestinationEntity(234U);
    msg.name.assign("ZCQOZNFSICPKGGHQBHXXAGYGOYLIMBIEFOTJTYLINCXKMZZWGMUINCMCCYGKLJNARDPQPWXIMHFIDEGSSJPBVXWTNTGHASABDLTETOEIWOVRKNJDKWAGXNNAUVHDL");
    msg.visibility.assign("MOOECWTTYJHSWFBIQIOGAGERCZUJJIUCHKNNVCKMVGMZVULSPYBXOPXBJJCWOEXMDLDPIYFYQPNMGUAPDDZEKKNRVBSOLFRYMKYEGDICUYMUHPRQRBIUBWKMYYANUXIHSFTVLKEGHAOOCZTXGBWFSPXOMFYISGSJFVNOPZFRDHTZTTWKWZPWPNCLQUSVS");
    msg.scope.assign("ZJPVQCIIRCXKXNSPIBPFQGPYCGZQPNUKTMXBAFZMEYORMXOVHOIHJEMTNSKHWYOBGKZLSDTBR");

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
    msg.setTimeStamp(0.513092128077);
    msg.setSource(9995U);
    msg.setSourceEntity(41U);
    msg.setDestination(21451U);
    msg.setDestinationEntity(25U);
    msg.name.assign("MFGSZWOKEZSBCSIIVBPBIZOQATHCTWOFKISJKWCTHWNXYJMHVUOBJAEMESKLKJVLXWAXDHFTJEEQWKNTPHPBMGWNTVYSZRIIVMKOQOGFIDNUBBGGLVOKCSXRMUGCEMAGFNQDNYLQCBZYPHDNTAXWXUJZMAPQDRRAEYZEFCYCDOPWSUDOMAQRBRUNXDZYLRZLMCKFIRHXTJJGWHXGLHRPYUNFFJUPVABDTLSOPZVNTGKVAQJ");
    msg.visibility.assign("HMOAEBMVYVDDCJYVZVUXLZAXLOOIPRPAOXUCSPHIULHL");
    msg.scope.assign("BROLNYFMLOYWTCQOPFDSMTZJXSJBWKGXUCTYRKINBHUBZOOTKLFYEC");

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
    msg.setTimeStamp(0.923074113484);
    msg.setSource(2476U);
    msg.setSourceEntity(235U);
    msg.setDestination(48719U);
    msg.setDestinationEntity(124U);
    msg.name.assign("WFNDFIRIUUTOGGWCWZBCMZRMQOUB");

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
    msg.setTimeStamp(0.71831220122);
    msg.setSource(17307U);
    msg.setSourceEntity(26U);
    msg.setDestination(16528U);
    msg.setDestinationEntity(246U);
    msg.name.assign("PSLJJFZXFLMQNDNVZTRBONWTAZDTPCYHTUIPTKGUDMDEMJIUOAQBVAUJWFFBTCMOIFSRKVXPBQZUIYSCDLULHDEVZRQNTDKQGAPRGJVLYFNTPOLKORKJYNVVITCCECRXWHKEDXKCXIVAFOKPYBUGHHZYIBAJABHSKOQCQFG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UCPPUHJJXGTIALJLZOPCVKQRMAJMQPZVETFOAIE");
    tmp_msg_0.value.assign("YTSHIESQMBGAMQMDAUUATUZEAENLTGXYBVDTTHJKRKAKCCOPMZHKNLHYPAVVDBTBBSOIDFPTSERJIXZURJNSLFPJPODUZCMOAGLWEZUSMGYYGWVSVPGXRJKINLNMIOUEXKWBEVDPFLLMQDWXCGFQIZFNANBYXGCOCQWQSDOJLHYIDQC");
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
    msg.setTimeStamp(0.297702138812);
    msg.setSource(23519U);
    msg.setSourceEntity(203U);
    msg.setDestination(47953U);
    msg.setDestinationEntity(128U);
    msg.name.assign("YCVQYAGXSKGWFAZMIGGDABDWKUBONOMJLJKOGFAHGCEBPUDFHJEWSBDEXBOLPGZOOTLRDRPYYHPZDSPEVUETNRTKUMEZFATJQEDLJVUYUIZFVSYAICPWQFTNFMUFRVRNSDGXRSYNLIXIIHOLZBIMHJZHJAAICTMIPCCSZMAXFWYCNTCQZFKVMAIEQHGKVTSCRYBRKPMHOLPTVL");

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
    msg.setTimeStamp(0.582645664622);
    msg.setSource(12848U);
    msg.setSourceEntity(83U);
    msg.setDestination(19946U);
    msg.setDestinationEntity(151U);
    msg.name.assign("LQGUYWKTLMZMSFPCREBTLGPXHMVSAXSAACDCSIHWCGREYSLWRDLYELLKFITARZZMZ");

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
    msg.setTimeStamp(0.846415179183);
    msg.setSource(21645U);
    msg.setSourceEntity(55U);
    msg.setDestination(20132U);
    msg.setDestinationEntity(18U);
    msg.name.assign("PXWAUIAVHGCRPSJNTMWAELLNEGPFMCWYIJVEBDKETYUKHWJWOQULEHYDBZQHXBDGSUURGTAJJZPWURSQMUDXFPFZMROOLBSRCHVECUSSFIVWDTOGOGEEWILXGZFTIAODVZVICBFMJBFHPVHRDRMENBZ");

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
    msg.setTimeStamp(0.752075089921);
    msg.setSource(22825U);
    msg.setSourceEntity(30U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(211U);
    msg.name.assign("ILKANPSJGDYFVWNZDFJXSPKVESPRUTBSNYRJIENNXCVECYPMHCNVTIVLXLDWLACNKEDYHBTMJMHOYTOFMJXULKXUAEPTZZYRCFLJIERFCVMJEZVSQDTPUQUCEJBJSVCHMWPUDOPDHGJIAVAPQKQVRNAFNWGBSDAQWBLCIIBTKMOKEQREYHRURGUGYOBIXTLBFFWRZKSQDZWGXAGZUTXMFLZIQLMDGB");

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
    msg.setTimeStamp(0.268446568337);
    msg.setSource(57226U);
    msg.setSourceEntity(145U);
    msg.setDestination(3455U);
    msg.setDestinationEntity(149U);
    msg.timeout = 3125141573U;

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
    msg.setTimeStamp(0.712438890363);
    msg.setSource(62077U);
    msg.setSourceEntity(97U);
    msg.setDestination(17484U);
    msg.setDestinationEntity(47U);
    msg.timeout = 817375177U;

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
    msg.setTimeStamp(0.259159285092);
    msg.setSource(6702U);
    msg.setSourceEntity(152U);
    msg.setDestination(9505U);
    msg.setDestinationEntity(23U);
    msg.timeout = 2057842577U;

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
    msg.setTimeStamp(0.00191126514128);
    msg.setSource(32567U);
    msg.setSourceEntity(221U);
    msg.setDestination(24865U);
    msg.setDestinationEntity(110U);
    msg.sessid = 2485889275U;

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
    msg.setTimeStamp(0.503087369154);
    msg.setSource(47154U);
    msg.setSourceEntity(26U);
    msg.setDestination(33678U);
    msg.setDestinationEntity(164U);
    msg.sessid = 741110227U;

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
    msg.setTimeStamp(0.806504143998);
    msg.setSource(8190U);
    msg.setSourceEntity(138U);
    msg.setDestination(6753U);
    msg.setDestinationEntity(22U);
    msg.sessid = 3978442482U;

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
    msg.setTimeStamp(0.758077470109);
    msg.setSource(48648U);
    msg.setSourceEntity(23U);
    msg.setDestination(43751U);
    msg.setDestinationEntity(27U);
    msg.sessid = 4193873939U;
    msg.messages.assign("LBRTHAHCVYNIXQNUGSJEYVOFJLGXJVBIURESSIAUUDJHFCRPBMMSQMBVXVUEDOYNPYVEHSMAVLYPCZLKBZURGFETXZYLXZIFMWVNQQHIGDWOVFYFKWGNJHITLQZQDBSHNBRXOQXKTJPCRNOCBHTROOQWPOKJEKSLUHVQMDGRWIWZTSXGSDACURXTKHZNRYKSFEACJFBDELFIOPJYONDXIMAWITQPAPCBMADTEUFWPWLAKMCZZAGGKYGZPMTNE");

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
    msg.setTimeStamp(0.991900591036);
    msg.setSource(47844U);
    msg.setSourceEntity(101U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(228U);
    msg.sessid = 3729244573U;
    msg.messages.assign("UDOJNBWGYOUFGLJFROFSJXTMRIXVGCUDYFAKXXNSKUWTAKHHYJJATKVXTXNZVKCCSFPIMODPHTIOCHRLADDEUGQZFHXJPCRIWPFVRAPMQQXGJYRWZPEAADNTZDWKMKISPIZHWVLFQGTYBQETNZOEOXYRHPLMMDUMFNJESUWNEIZBCULYARGVMNBPSHWTWGWBVKQBYMRLLVOQLVIESDZI");

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
    msg.setTimeStamp(0.0762761037336);
    msg.setSource(46108U);
    msg.setSourceEntity(189U);
    msg.setDestination(25898U);
    msg.setDestinationEntity(148U);
    msg.sessid = 3573167217U;
    msg.messages.assign("EILXCXGAMJIOAVMBNOLGJYGXKWYTWVPUUIDAUYLJFCHEIRRZBCPUTZYFSHQMNRBCFOJWGEALIAPHEHJZKKUEKUWOPSEJSEVRHTXRUZYFIYHUCXWFMLJSGIBVSBTWSKZJLQMRZDDDLTDWLGXMQVLFPHJSDOFJCTB");

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
    msg.setTimeStamp(0.263043621084);
    msg.setSource(13607U);
    msg.setSourceEntity(181U);
    msg.setDestination(54862U);
    msg.setDestinationEntity(134U);
    msg.sessid = 2699463744U;

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
    msg.setTimeStamp(0.885644694971);
    msg.setSource(42421U);
    msg.setSourceEntity(151U);
    msg.setDestination(6923U);
    msg.setDestinationEntity(186U);
    msg.sessid = 184356658U;

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
    msg.setTimeStamp(0.438495307882);
    msg.setSource(59335U);
    msg.setSourceEntity(120U);
    msg.setDestination(17140U);
    msg.setDestinationEntity(129U);
    msg.sessid = 2824057462U;

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
    msg.setTimeStamp(0.0616223830808);
    msg.setSource(62871U);
    msg.setSourceEntity(89U);
    msg.setDestination(53415U);
    msg.setDestinationEntity(22U);
    msg.sessid = 968846196U;
    msg.status = 121U;

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
    msg.setTimeStamp(0.0325666202805);
    msg.setSource(41691U);
    msg.setSourceEntity(102U);
    msg.setDestination(35813U);
    msg.setDestinationEntity(196U);
    msg.sessid = 1644000139U;
    msg.status = 88U;

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
    msg.setTimeStamp(0.0618025007468);
    msg.setSource(14277U);
    msg.setSourceEntity(249U);
    msg.setDestination(39328U);
    msg.setDestinationEntity(168U);
    msg.sessid = 1952729981U;
    msg.status = 240U;

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
    msg.setTimeStamp(0.122659332318);
    msg.setSource(3729U);
    msg.setSourceEntity(31U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(206U);
    msg.name.assign("TTJZCIOXFGNONBECGKBWLQZZKEBJOGHEICPHSONGXVQRKFQKVJQUZYQRVRAHNFAJVLIWMJHUOPEHEFMKUIPNGODILNFL");

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
    msg.setTimeStamp(0.389468884302);
    msg.setSource(29801U);
    msg.setSourceEntity(6U);
    msg.setDestination(53498U);
    msg.setDestinationEntity(57U);
    msg.name.assign("TDOQNBATOYAEFOWEATFORUNPJUBGYLNWILACFYTVKILGIVKWWKAJDQJXSBCEWUNCZFYNQOMQHFXHIDJRHEGAXNCEEWSVXGPCYKUAVLBHOGYRRYVTVTVWQLPTXUMFCUBGKJBIBHMKALRVHQELPMAJURBWZMPDSKUPLWHQYSCCFBGZMXISDPOZJZKZNGVISAISIMSDZSFFLID");

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
    msg.setTimeStamp(0.594315641654);
    msg.setSource(31140U);
    msg.setSourceEntity(150U);
    msg.setDestination(6509U);
    msg.setDestinationEntity(166U);
    msg.name.assign("ZLSAJSKVUBGSFAQNGNKCENYPKCVGXCEQIMPZPRVIYPAFDAXWFRNRIRCN");

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
    msg.setTimeStamp(0.708987519471);
    msg.setSource(23889U);
    msg.setSourceEntity(78U);
    msg.setDestination(44302U);
    msg.setDestinationEntity(126U);
    msg.name.assign("BFQALWNOPEWMQCXYSFLVTSDORBEBFMHIHKYTCHIOCJKHNZYIJNPSTYIZLOJLWNWUKJWXPJUZVZWTWSFGZVBDQTXECORRPLVRMKCLACRVYGDNBXJUOI");

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
    msg.setTimeStamp(0.439316080629);
    msg.setSource(29177U);
    msg.setSourceEntity(20U);
    msg.setDestination(11918U);
    msg.setDestinationEntity(245U);
    msg.name.assign("ZRAKPAZSYBNVXUNDWIBTPETWMXRCQQEGFFFGCNOHSZRPIOBNCWUORHUHIFKRGCNVLUDKPYJYELOCRTGYASSSIJOUMMPSIPGTRKMAYIINWDNHIZLZJIYHJKWCHVD");

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
    msg.setTimeStamp(0.390035493034);
    msg.setSource(45460U);
    msg.setSourceEntity(175U);
    msg.setDestination(17680U);
    msg.setDestinationEntity(153U);
    msg.name.assign("NYKDREWQLIBJTJZBMFJQCIXSTRZPYUWMVXHBFKSESXHLWBKVUHAFNGAE");

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
    msg.setTimeStamp(0.262737844046);
    msg.setSource(45669U);
    msg.setSourceEntity(208U);
    msg.setDestination(33379U);
    msg.setDestinationEntity(133U);
    msg.type = 125U;
    msg.error.assign("XNWKXDBFQENWUVAT");

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
    msg.setTimeStamp(0.768692867753);
    msg.setSource(54541U);
    msg.setSourceEntity(109U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(202U);
    msg.type = 201U;
    msg.error.assign("ZYKOSQKFBYQDPBSQFGHANYLEJIIOACGAGRVLVMDIUFNYCBMAKUYMPJGUBADAEEJVWKZZEB");

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
    msg.setTimeStamp(0.294177996898);
    msg.setSource(45642U);
    msg.setSourceEntity(67U);
    msg.setDestination(24426U);
    msg.setDestinationEntity(59U);
    msg.type = 76U;
    msg.error.assign("PITWXPBVMKVLMJIYQWGBZTHSUKGSEALQVUBLODRVJOZTUMDGKFMQQBYRVFLEZCDJTQGMCZZJZGUXFQDFEOXBURACSVFCOJXUHTFNRGLAKHXONDBJPPPDNHVFEFWEUPRAGSIWLKKRZWEHUFBJRCERGZJTANOBUHOIMMCYSHUWHQVNTZHYXIEGFADQXLSTYQDEXIYEARTCLMGNVYJWIOWOACZXNSDXCBWYNB");

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
    msg.setTimeStamp(0.569183380356);
    msg.setSource(54924U);
    msg.setSourceEntity(8U);
    msg.setDestination(48877U);
    msg.setDestinationEntity(71U);
    msg.seq = 575U;
    msg.sys_dst.assign("BJJSQUDFKCQMRPCKAHZZO");
    msg.flags = 189U;
    const char tmp_msg_0[] = {9, -88, 104, 92, 71, -115, -41, 102, 33, 19, -29, -127, 12, -121, 67, -44, -88, 126, -8, -32, -4, 72, 89, 19, -30, -14, 121, 72, -43, 47, -7, -12, -18, -64, -99, -95, 39, 45, 87, -111, -94, -121, 5, -122, -128, -13, 49, -26, -44, -100, -101, -57, 49, 55, 33, 125, 125, 121, -44, -11, -116, 105, -106, 116, -55, 77, 40, 27, 45, -83, -93, -93, -62, 23, -15, -65, 90, -70, 121, -48, -125, 70, -69, 115, 126, 96, -38, 122, 122, 108, 81, -113, 62, 95, -31, 59, -29, 22, -30, -57, 89, -82, 18, -9, -93, -112, -38, 124, -45, -115, -6, -33, -42, -50, 45, -9, 10, -60, 10, -116, 73, -38, -114, 121, 46, -81, -42, 59, -125, 14, 112, 76, 35, 75, -93, -111, -80, -14, -76, -110, 60, 30, 114, 42, -54, -40, -103, -41, 105, 35, -127, -56, 28, 121, -42, 94, 25, -54, -12, 44, 39, -105, -121, -71, 91, 97, 15, 8, 49, 16, 19, -28, -89, -105, 26, -70, -74, -44, -16, 11, -120, -44, 38, 70, -5, -9, 86, -1, 53, -79, -73, 81, -21, 24, -20, -110, -83, 75, -28, 57, 122, -103, -107, -92, -35, -77, 40, -70, 13, 18, 22, 64, 54, 33, 42, 81, -42};
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
    msg.setTimeStamp(0.52862297815);
    msg.setSource(39158U);
    msg.setSourceEntity(172U);
    msg.setDestination(45971U);
    msg.setDestinationEntity(147U);
    msg.seq = 58695U;
    msg.sys_dst.assign("ADTDZFJDZZBRBTDWWLCXTQRKOHDTIWCRNHZJBEHSGIJSZMNAYCWBAKVZHRES");
    msg.flags = 114U;
    const char tmp_msg_0[] = {-124, -24, -1, -38, 106, 106, -58, 38, 64, 37, 83, -72, -24, 52, -84, -118, 63, 75, 55, -122, 74, -104, -48, -41, 73, 9, -42, 94, -124, 47, 96, 56, -34, -41, 13, 103, 23, 57, 83, -22, 10, 48, -118, -106, -2, 0, -83, -76, 81, -5, 81, -96, 80, 75, -26, -16, -113, -96, -69, 120, -71, 77, -22, -18, -44, 94, 112, -95, 58, -70, -42, 63, -117, -90, -62, 49, -27, 115, -8, -93, -15, -32, 35, -47, 108, 50, 30, -95, -13, 2, 84, -111, 36, 123, 100, 84, -97, 33, -31, -63, -27, -42, 19, -55, 74, 11, 6, 16, 99, -40, 21, -23, 68, -31, 118, -24, -77, 117, -24, -30, 7, 122, -40, -75, -101, -91, -71, 73, -126, 11, -37, -24, -122, 56, -80, -89, 33, 27, -8, -35, -103, 96, 117};
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
    msg.setTimeStamp(0.94872590132);
    msg.setSource(52818U);
    msg.setSourceEntity(133U);
    msg.setDestination(40415U);
    msg.setDestinationEntity(251U);
    msg.seq = 55038U;
    msg.sys_dst.assign("KANZHGUZRDVHBQLCIFSKJCCKMHWFSNVDWPRNDUCAUORMLPA");
    msg.flags = 111U;
    const char tmp_msg_0[] = {-75, -123, 11, 106, -106, 12, -24, 58, 29, -116, -91, -11, -51, -31, -40, 76, 87, -33, -108, -6, 1, -123, 63, 100, 87, 41, -58, -80, -21, 3, -46, -127, 74, -120, 33, -115, -49, 6, -48, 113, 11, -82, -26, -127, 50, -44, -34, 23, -39, 88, -54, 5, -125, -118, 98, 68, 87, -33};
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
    msg.setTimeStamp(0.664096147708);
    msg.setSource(60946U);
    msg.setSourceEntity(68U);
    msg.setDestination(45791U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("BJQKDJOEMJOLWSLEPSILMKQJBGBHDJGAPPTPERNVSGIELEAGELUHVOQNWGIBURZUVFMAIYCZFUIUQTTZVCHUEAEFQJLTWABZDFIKVROHRBXUXERLYCMZMOOTLSCCWBGYIPFQPMWBUTHSXXFZNOKYXTSNGRFJVCWIHJNTNDFVHZICJHXNMCKKAXBUKSWDYTYQAIGMXRUJMLDHYMWCRVFAZWNDOQTDYKVQRRFDPSLZYXVGBQKWNC");
    msg.sys_dst.assign("ZDSLTBPKAMMEMIYNSVAEUSRGXBXPSSZEAIHZZYLRNRGAKEJQGWEGIKCLRUJHNWIVNLDLOMBUMEARNYNMABYPRBOPRQDJTTOLBZDTCGGOVKNZQNIUMZBFTDHYWLEIFRTV");
    msg.flags = 167U;
    const char tmp_msg_0[] = {3, 80, 15, -59, -3, -14, 73, -119, 0, -22, -49, -119, -98, -79, 98, -109, 34, 69, -22, -18, -77, 94, -115, -100, -3, 51, 18, 10, -61, 119, -126, -51, 19, -121, 17, -52, 111, -89, -15, -33, 4, 98, 16, -116, 121, 116, 11, -40, 77, -39, 35, -110, -18, 29, 63, 98, 64, -16, 97, 89, 96, -34, -28, -50, -48, 117, -64, 75, 17, 64, -89, 23, -91, -83, -94, 4, 67, 10, -127, 57, -54, -69, 2, 20, 8, 111, -123, -81, -18, -109, 66, 45, 118, 117, 44, -27, -23, 36, 70, -48, 101, 87, -37, 17, 107, 112, -101, -55, -73, 77, 1, 71, -91, -32, 96, -23, 5, 110, -115, 101, 99, -101, -19, 121, 104, -108, 15, -54, -72, 6, 46, -11, 109, -106, -102, 70, -19, -51, 24, 104, 38, -54, 22, -9, 44, 31, 112, -80, 50, 24, -4, -40, 69, -83, -66, -77, 107, 113, 30, -35, 4, 78};
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
    msg.setTimeStamp(0.316627352717);
    msg.setSource(42396U);
    msg.setSourceEntity(77U);
    msg.setDestination(56825U);
    msg.setDestinationEntity(250U);
    msg.sys_src.assign("OLNTGEUGAMTFNRTTEDASXMVDBDSIPRXZAVXRHFOVEDNUTBUVMDHDZIDONYKGVPIFNLCPZOBGAJTSLWCAIYGBCZSALSIHDKWQQZGTOZMXRGPJALNSVOGSSYUOZQJYJGADHRKVYFWCWEFKKOAWTOHBNKWCIUAYVJUJJVJPHKSGCQJHBJRYWLNFWNHEFZCBXFRRPRMCBNTQEOQCFWBQXIPUMEXPQKSFLEXMUEKLIXYZKMUIW");
    msg.sys_dst.assign("CWVBPRKKXTTSUPOCKNPMDZIMTMHZAXGLEDSXOQYNGARNWRMEROQWOH");
    msg.flags = 85U;
    const char tmp_msg_0[] = {-46, 90, -25, -35, 120, 93, -38, 45, 122, 15, 42, -8, 104, -109, 69, 59, -31, 14, 4, -51, -37, -7, -125, -128, -85, 7, -47, 93, -109, -95, 17, 119, -34, -112, 121, -57, 71, -76, 74, 45, -22, 59, 98, -126, -45, 67, -16, -126, 90, 49, -36, 97, 56, 102, -76, 93, 62, 90, 13, -5, 78, 50, -118, 34, -98, -40, -30, -75, -98, 56, -93, 34, 89, 75, 17, -27, -85, 76, 55, 57, 124, -88, -15, -28, -49, -23, 8, -38, 42, 97, -62, -125, 59, 101, 83, 0, 2, -99, -122, 3, 3, 12, -27, 64, 121, -34, -81, -94, 74, 110, 61, 24, 33, -23, -109, 21, 62, -119, 98, 84, -14, -108, 75, -21, 42, 39, -62, 40, -9, 72, 117, -98, 74, -21, -109, -89, 73, 43, -74, 26, 91, 65, -101, 107, -102, 106, -16, 81, 108, 81, -101, -45, 23, -94, -119, 57, -33, -76, 17, 35, -1, 26, -126, -90, 70, 92, 116, -56, 20, -61, 7, -105, -112, 25, 113, -52, 62, 62, 64, 111, 30, -92, -109, -31, 40, -38, 8, -74, -23, 7, 11, -84, 79, 122, -105, -38, -14, 32, -33};
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
    msg.setTimeStamp(0.0989093837684);
    msg.setSource(7407U);
    msg.setSourceEntity(149U);
    msg.setDestination(1859U);
    msg.setDestinationEntity(111U);
    msg.sys_src.assign("RQCEJYEZOSMCXHPMQFGLMLWATXZRBDTWWEGEPUKAFUMYDBDPVGUVIGHBWCAXPGRXNOBQHZJJHXRXTIJNTJLPYHUQFIOKXZAYLTMCAOYSNAVVNJVUASQ");
    msg.sys_dst.assign("BPSPTNTMLFDRTQJHXRZIEFTTEODYOKAGSVEAFTHKWURLEUZBOWXYB");
    msg.flags = 0U;
    const char tmp_msg_0[] = {-53, 61, 55, -55, 57, -7, -118, -98, -29, -47, -116, 119, 6, 88, -49, 13, 53, 45, -117, 23, -124, -27, -42, 80, 99, 52, -126, 41, 106, 77, 106, 26, 99, -57, -42, 39, -117, 119, 20, -32, 46, 19, 91, -75, 82, 94, 106, 66, 73, -37, -66, 112, 114, -48, -82, -49, -36, -98, 93, 121, -111, 48, -97, -88, 84, 3, 41, 52, 5, 2, -63, -114, 20, -4, -22, 74, -18, -41, 72, -54, -47, -100, -128, 20, 53, -3, -26, 32, 83, 65, -33, 66, 9, -88, 44, -49, -19, 111, 3, 82, -128, -68, -37, 22, -72, -17, -39, 81, 63, 110, 91, 29, 15, 53, 10, -122, 37, -77, -8, 3, -33, -12, -87, 16, -98, 101, -104, 96, -27, 122, -11, 118, 46, 99, -6, -126, -124, 110, -126, 38, 73, 84, -75, -16, 68, -67, -99, 122, 96, -112, -56, 44, 0, -44, -32, -29, 102, -37, 43, -3, 97, 110, -94, 113, 12, 33, -19, -31, -118, 85, -110, -109, 51, 95, 29, -66, 59, -63, 58, 14, 39, 50, 42, -75, 92, 87, -99, -58, -54, 119, 125, -103, -57, 91, -89, -124, 1, 12, 95, -90, -56, 10, 63, 0, -77, -91, 30, 48, -26, 33, -37, 111};
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
    msg.setTimeStamp(0.852543158313);
    msg.setSource(18912U);
    msg.setSourceEntity(53U);
    msg.setDestination(8367U);
    msg.setDestinationEntity(40U);
    msg.seq = 45991U;
    msg.value = 85U;
    msg.error.assign("HMWMKHYZKAJAFDZSBVYJSWZXEGGOMPYVMYRLTEGTNAKSLOCDVJICQJQFEIDDJHWDRHDVVKKULXQEYSWCUVLGPSBYWOMWCLFJFZBIBXTOAGZLJPCXDRMYLXHYRHBNNBGJZSEPVGPHECBKRHFZQOPRIRTLTWNJUIXEQFDQEEGZWAPSLUPNINMFZUCQWGRGHUYJATAXMKIBFMPFKCNIQXUPTXARWTUZKNSSO");

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
    msg.setTimeStamp(0.904075283213);
    msg.setSource(62055U);
    msg.setSourceEntity(188U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(127U);
    msg.seq = 16469U;
    msg.value = 171U;
    msg.error.assign("HXWYHUGAOXQNSPSXGXXICYOZLFYEPKLZZEABGYDEFQJIKADCOQBFKVOLWNXLMJFAWIOHMZVRESAIKNMVSDPWUIQNXMYITCUHEPGKBGQEXUTKQDRKDOTDKFQDRNVEJEACLGTPIOFFD");

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
    msg.setTimeStamp(0.367976166847);
    msg.setSource(16843U);
    msg.setSourceEntity(87U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(198U);
    msg.seq = 32032U;
    msg.value = 112U;
    msg.error.assign("HRFURQYWTWDOADRCQHPXGCHPWLONCFUTVFIFWEJJGNTBMVEEHYLWJBVSRIFNZIAHIJIBQFJTEGJUPTMASEQNBLDYCOAHRHJSHKATTGDSNRUZPAFRKMXZMKULOQERZXATGYXWGVGNGSCBHNOUPYQEPMJNPKKRQKFUOWUYKAKCZFXJYBDOGSXFMDODSUISBIRLIDOXPQB");

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
    msg.setTimeStamp(0.137147171581);
    msg.setSource(6763U);
    msg.setSourceEntity(158U);
    msg.setDestination(1004U);
    msg.setDestinationEntity(1U);
    msg.seq = 29764U;
    msg.sys.assign("SXSLGFUJYMUKXCPTEMRAPXUKRHFSURIHJHILWCVSNIPVGNVBGSPKHWDYRDLKNWRMAZAZJFOUTMVGNJAXXSAQMNGZOPCXGPWFDHUDYYAHUFXQJQUNSRYSLHTXQLLCZNLWPCKEVZCVDHEFMBRFRWMVPQYLJJSBODIEBEBPFUAY");
    msg.value = 0.299342671674;

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
    msg.setTimeStamp(0.0415071405216);
    msg.setSource(39631U);
    msg.setSourceEntity(0U);
    msg.setDestination(65203U);
    msg.setDestinationEntity(111U);
    msg.seq = 60575U;
    msg.sys.assign("EIVEHVNBARUUOVAMEISXXQHAFCDMBBFQJOLYBNFDKVDAGFWNKDNQMALOPUSZEYBVNWYWPCUWJZWWNTXPHKTYFSPOHFUREEYJZMTPGTQQHLUZPGSIOBGLSKEA");
    msg.value = 0.64724576009;

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
    msg.setTimeStamp(0.0818282065298);
    msg.setSource(39015U);
    msg.setSourceEntity(112U);
    msg.setDestination(63041U);
    msg.setDestinationEntity(105U);
    msg.seq = 20310U;
    msg.sys.assign("QCDNSXJECWAKQTIXBGCJCVEOVPZQVBKCYHUPFAOPJOXIHTNOJNXGTPAADUQITJWWRXYOWZVYLHBJEQXNRARRMZFFKIGWEHDMLJMSWOKIJMHKVISQFRSGGNBSYRYUCMBHDMDYTCZOFNPDVCLHZXLQKZUHJPXPMSTPCNZEERNKLENLTWFDCTAKHSPBXZVAUUOLEUDGJRDDMLTHXUELVZGIWQBZYNSSOIOBVRWYQPFIFKMTGUBYFW");
    msg.value = 0.427107027535;

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
    msg.setTimeStamp(0.595968298717);
    msg.setSource(46236U);
    msg.setSourceEntity(180U);
    msg.setDestination(31844U);
    msg.setDestinationEntity(143U);
    msg.action = 239U;
    msg.longain = 0.406396127573;
    msg.latgain = 0.800441396878;
    msg.bondthick = 939829108U;
    msg.leadgain = 0.0244779151779;
    msg.deconflgain = 0.406706969086;

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
    msg.setTimeStamp(0.148621142304);
    msg.setSource(34977U);
    msg.setSourceEntity(154U);
    msg.setDestination(52547U);
    msg.setDestinationEntity(38U);
    msg.action = 206U;
    msg.longain = 0.86840625447;
    msg.latgain = 0.538150772064;
    msg.bondthick = 2126363422U;
    msg.leadgain = 0.331005057629;
    msg.deconflgain = 0.448764228862;

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
    msg.setTimeStamp(0.624671560649);
    msg.setSource(37419U);
    msg.setSourceEntity(110U);
    msg.setDestination(33996U);
    msg.setDestinationEntity(139U);
    msg.action = 239U;
    msg.longain = 0.464745249161;
    msg.latgain = 0.905981851658;
    msg.bondthick = 2841272706U;
    msg.leadgain = 0.259824013917;
    msg.deconflgain = 0.30484435269;

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
    msg.setTimeStamp(0.796695524321);
    msg.setSource(55403U);
    msg.setSourceEntity(25U);
    msg.setDestination(6676U);
    msg.setDestinationEntity(161U);
    msg.err_mean = 0.918418584649;
    msg.dist_min_abs = 0.966377145562;
    msg.dist_min_mean = 0.589973947912;

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
    msg.setTimeStamp(0.875318168539);
    msg.setSource(43010U);
    msg.setSourceEntity(194U);
    msg.setDestination(4840U);
    msg.setDestinationEntity(121U);
    msg.err_mean = 0.53125656088;
    msg.dist_min_abs = 0.119305364849;
    msg.dist_min_mean = 0.733580475446;

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
    msg.setTimeStamp(0.488129099226);
    msg.setSource(59959U);
    msg.setSourceEntity(176U);
    msg.setDestination(10123U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.771867761792;
    msg.dist_min_abs = 0.66993750975;
    msg.dist_min_mean = 0.448110938439;

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
    msg.setTimeStamp(0.454763998838);
    msg.setSource(14197U);
    msg.setSourceEntity(198U);
    msg.setDestination(10876U);
    msg.setDestinationEntity(49U);
    msg.uid = 173U;
    msg.frag_number = 202U;
    msg.num_frags = 78U;
    const char tmp_msg_0[] = {-54, -67, 58, -5, -53, 2, 33, -82, -10, 12, -6, -63, -1, 7, 98, 75, 99, 3, -60, 30, -25, 29, 11, -111, 44, -64, -95, 55, -74, -29, 106, 0, -80, -96, -47, 64, -113, 100, 123, -92, -92, -22, 104, 17, -112, 118, 29, 16, -73, 103, 3, -25, -126, -58, -41, 6, -20, -35, 49, 100, 5, -116, 60, 24, -126, 116, 115, -65, -47, -71, -20, 91, 73, -18, -110, 35, 111, 116, -104, 20, -47, 125, 58, -104, -91, -72, -123, -54, -55, 38, -52, -68, 121, -27, 21, -64, 52, -98, 29, -109, 13, -97, -2};
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
    msg.setTimeStamp(0.939119742642);
    msg.setSource(57085U);
    msg.setSourceEntity(150U);
    msg.setDestination(14127U);
    msg.setDestinationEntity(112U);
    msg.uid = 31U;
    msg.frag_number = 246U;
    msg.num_frags = 246U;
    const char tmp_msg_0[] = {-35, -106, 32, -11, 12, -127, -15, -6, 37, 46, -119, -70, -46, 28, -78, 85, 8, 96, 27, 50, 83, -49, -56, -99, -73, -87, 50, 23, 124, 97, -35, -39, -71, -21, -125, -49, 30, -51, -37, 116, -19, 54, -79, -15, -126, -125, -61, 72, 30, 91, -96, 56, -58, 109, 70, 90, 76, 71, 122, -86, 12, -6, -44, 59, 85, 97, 48, 39, 106, -80, -90, 69, 74, 103, 36, -92, 19, -78, 57, 88, -95, -27, 58, 0, 22, 88, 49, 58, 90, 119, -38, 91, -79, 106, 81, -29, 15, -116, -60, 59, -9, -94, -91, 58, -113, 124, -6, -18, 56, -128, 67, 107, 26, 1, -12, 59, 82, -52, -71, -75, 61, -60, -62, -18, 11, -15, 46, 22, -48, 44, -44, -17, 117, -10, -64, -89, -87, 91, 93, 111, -16, -61, -113, 85, -114, 16, -46, -60, 5, -8, 106, 15, -90, -31, -5, 77, 99, 7, 110, -110, 72, -92, -23, 9, 53, -81, -105, -95, -18, -58, -27, 83, -103, 123, -60, 28, 62, -84, 16, 103, 21, 122, -73, -122, -123, -49, 61, 21, -2, 78, 121, -12, 104, -89, -23, -92, -52, -122, 49, -23, -126, 87, -104, 114, 106, -86, -31, 57, -15, 78, -118, -119, -1, 89, 0, -64, 110, -121, -83, 62};
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
    msg.setTimeStamp(0.717688742727);
    msg.setSource(56899U);
    msg.setSourceEntity(54U);
    msg.setDestination(40958U);
    msg.setDestinationEntity(57U);
    msg.uid = 101U;
    msg.frag_number = 43U;
    msg.num_frags = 204U;
    const char tmp_msg_0[] = {-109, 45, 57, 57, -17, -16, -28, 21, 111, -15, 102, -89, 40, -36, 99, 70, -58, 49, 124, 28, 23, 93, 84, -101, 9, -99, -70, 7, 74, 86, 96, 32, 123, 102, -112, -26, -35, -37, -55, -49, 11, -98, 118, -116, -74, 36, 110, 96, -19, 46, -47, -46, -78, -68, 98, -79, 97, -90, 112, 38, 4, 89, 77, 92, 33, -100, -62, -18, -123, 28, 3, 58, -109, -115, 43, 102, 40, -96, 75, 8, 96, 85, 98, -110, 19, -34, 92, 50, -71, -67, 24, -63, 98, -122, -41, -50, 1, 118, -119, 103, 97, 6, 30};
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
    msg.setTimeStamp(0.125421431245);
    msg.setSource(55329U);
    msg.setSourceEntity(86U);
    msg.setDestination(2720U);
    msg.setDestinationEntity(163U);
    msg.content_type.assign("UFGIYVEXGSLTTLBLSJXBEIERIWOYHGLLRZYGFQ");
    const char tmp_msg_0[] = {50, -108, -1, 97, 73, 71, 76, -75, 65, 56, 102, -116, -28, -117, 92, 103, -115, -109, 53, -6, -84, -12, 44, -1, -106, -43, -72, -126, 96, 83, 83, 104, 75, 77, 11, -101, -26, -49, 65, 75, 79, 97, -97, -104, -46, -107, 70, -31, 1, -75, -108, -115, -28, -54, 1, -58, -96, -33, -7, -45, 48, -41, -14, 2, -73, 83, 24, 27, 106, 109, -58, -29, -99, -44, -51, -88, 101, -14, -4, -14, 32, 80, 58, -54, -92, -62, 110, -91, 98, -43, -91, 23, 54, -103, 72, 72, 7, -75, 68, 65, -73, -93, 89, -80, -97, -76, 52, -29, 93, 45, -122, 82, 83, 62, 125, -125, -85, 118, -48, -73, 117, -94, 0, 126, 98, 18, -123, 31, -122, -49, 13};
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
    msg.setTimeStamp(0.729680087467);
    msg.setSource(49576U);
    msg.setSourceEntity(244U);
    msg.setDestination(50173U);
    msg.setDestinationEntity(130U);
    msg.content_type.assign("GIDCRXBAGVUGCVFMPONLNWRIHNUDSPXJIMIWMDFJYJPGUTVOICZEZOQLGQNLTFCFXUSMSUERVVDABQTSZKJHHOETZOYLRZEUCTHEEJDYFXAVWYQYTZAGWBIPWAPSLJXMAFFBEQXKLVYHOCEDOXILJDCLWSQNOCKBDYSBNBRBLXXQWPJGKHXRRGBSTRFKFUKSPHEOSTKNKNVMQIOD");
    const char tmp_msg_0[] = {-79, -85, 39, -11, -65, 102, 98, -63, -93, -45, -14, 118, -52, 56, 2, -57, 11, -59, 43, -20, 8, -26, 46, 20, 78, -23, -112, 89, 93, 48, -3, 93, -115, -104, -113, -10, -46, -44, 81, -7, 106, -71, -123, 40, -73, 4, 84, 91, 100, 32, -37, 118, 91, 99, 80, -58, 114, 102, 99, 25, -45, 100, -70, -89, -110, -73, -113, -89, 20, 63, 39, -27, -21, 84, 41, -127, 52, -93, -40, 39, -15, 102, -46, 53, 44, -1, 119, -42, -16, -109, 25, 52, -5, 78, -17, 76, 54, 55, 33, -119, 97, -103, -16, 119, 84, 51, 26, -120, 72, 97, 116, 17, -120, -128, -21, -4, 31, 114, 60, -107, 72, -97, -126, 57, 79, -99, -29, 121, -4, -79, 126, -104, -103, 65, -10, -28, 90, -124, -107, 21, -126, 83, -102, -114, 18, -52, -92, -67, 23, 78, 13, 26, -96, 81, -37, 110, -103, 14, -71, 20, 3, 76, 58, 80, -1, -43, -66, 58, -31, 63, 22, -47, -90, 89, -100, -63, -69, -72, 46, -17, 26, 62, 43, -106, -41, -100, 55, 87, 77, 99, -68, 20, 30, -15, 32, 98, -68, 63, -28, 21, 90};
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
    msg.setTimeStamp(0.316977173291);
    msg.setSource(52194U);
    msg.setSourceEntity(28U);
    msg.setDestination(916U);
    msg.setDestinationEntity(24U);
    msg.content_type.assign("RUBVAWWSILCHRKIOZPTSPGLSJWTEMZAAPYEBTKXPZNOVPNPJEOHJGYXWFMKIDQAHJZFGVXUTNNQNNFRRQFBRSACMCBRGQOZARIJRMAJDJOHFACTFBZWMNSNGEHKGDCYTUPERQTVXHSVPKECLHMGDLWOQGCYBXCVMEJRBKDYUDONDLXLXWXIQQCBHIWXOIYCBDGPLMWMKHVOYFEQIZZVHASUYTLYFSZUUYUAOEFMJUZXILKTVLWGTI");
    const char tmp_msg_0[] = {37, 33, 92, 12, 116, -27, 1, 8, 91, -125, 45, -28, -112, -71, 0, 89, -31, 75, 113, -81, 21, 57, 114, 19, -4, 4, 27, -39, 0, -101, -59, 125, 114, 61, -60, 17, -85, 36, 85, 87, 119, 53, -15, 1, -127, 33, 13, -57, -61, 40, 85, -51, 107, 81, 74, 7, -3, 52, -20, -98, 108, -56, 109, 70, 76, 2, -50, -42, -46, 82, 42, 58, 97, 86, -53, -76, 74, -84, -62, 16, -76, -22, -111, 95, -85, 2, 71, -82, 4, -84, -42, -92, -52, 90, 14, 118, -125, 26, 17, 52, 52, -16, 31, -85, 87, 28, -87, 115, -11, -58, 124, 69, -29, -18, -124, 120, -53, -73, 115, -16, 13, -47, -97, -17, -125, 40, 10, 120, -31, -44, 125, -30, 95, -95, -109, -93, -40, -116, 116, -116, 70, -66, 5, -56, 112, -82, -64, -75, -5, -4, -43, -71, -109, 92, 102, -52, 71, -59, 119, -51, 30, -90, -19, -98, 22, 27, -53, 102, 51, -110, 62, 30, 94, -80, -117, -32, -82, 70, 27, 66, 103, 43, -121, 39, -46, -113, -68, 41, 68, 113, -45, -40, -19, -29, -115, 50, 124, -91, 26, 56, -127, -38, 100, -31, -117, -19, -125};
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
    msg.setTimeStamp(0.302639039405);
    msg.setSource(9695U);
    msg.setSourceEntity(136U);
    msg.setDestination(52529U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.00232714875786);
    msg.setSource(22013U);
    msg.setSourceEntity(240U);
    msg.setDestination(43447U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.266333422131);
    msg.setSource(54342U);
    msg.setSourceEntity(35U);
    msg.setDestination(62396U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.996896386929);
    msg.setSource(19132U);
    msg.setSourceEntity(22U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(166U);
    msg.target = 26048U;
    msg.bearing = 0.689946386062;
    msg.elevation = 0.788842107379;

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
    msg.setTimeStamp(0.0397801065551);
    msg.setSource(41732U);
    msg.setSourceEntity(153U);
    msg.setDestination(45195U);
    msg.setDestinationEntity(111U);
    msg.target = 64962U;
    msg.bearing = 0.953917845665;
    msg.elevation = 0.0664904699444;

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
    msg.setTimeStamp(0.636710815148);
    msg.setSource(31325U);
    msg.setSourceEntity(93U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(175U);
    msg.target = 17497U;
    msg.bearing = 0.807232538765;
    msg.elevation = 0.324497378407;

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
    msg.setTimeStamp(0.945979260194);
    msg.setSource(36049U);
    msg.setSourceEntity(81U);
    msg.setDestination(53445U);
    msg.setDestinationEntity(249U);
    msg.target = 8728U;
    msg.x = 0.0125686336504;
    msg.y = 0.101432856298;
    msg.z = 0.534276580378;

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
    msg.setTimeStamp(0.434898183916);
    msg.setSource(51712U);
    msg.setSourceEntity(137U);
    msg.setDestination(62682U);
    msg.setDestinationEntity(189U);
    msg.target = 768U;
    msg.x = 0.517063509041;
    msg.y = 0.0155174204636;
    msg.z = 0.500516857506;

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
    msg.setTimeStamp(0.857802302042);
    msg.setSource(50135U);
    msg.setSourceEntity(72U);
    msg.setDestination(48147U);
    msg.setDestinationEntity(141U);
    msg.target = 58874U;
    msg.x = 0.938925398156;
    msg.y = 0.0517937119634;
    msg.z = 0.197296608698;

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
    msg.setTimeStamp(0.56517366756);
    msg.setSource(50890U);
    msg.setSourceEntity(53U);
    msg.setDestination(434U);
    msg.setDestinationEntity(46U);
    msg.target = 44549U;
    msg.lat = 0.455619949759;
    msg.lon = 0.787787551069;
    msg.z_units = 128U;
    msg.z = 0.461224772041;

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
    msg.setTimeStamp(0.522573154334);
    msg.setSource(18605U);
    msg.setSourceEntity(63U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(244U);
    msg.target = 58968U;
    msg.lat = 0.346921913441;
    msg.lon = 0.974113465438;
    msg.z_units = 11U;
    msg.z = 0.895757240243;

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
    msg.setTimeStamp(0.361161404985);
    msg.setSource(53111U);
    msg.setSourceEntity(127U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(117U);
    msg.target = 65355U;
    msg.lat = 0.159964989151;
    msg.lon = 0.443385935323;
    msg.z_units = 126U;
    msg.z = 0.216303719839;

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
