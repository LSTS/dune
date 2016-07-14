//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 26cacc3dc3beefce27c2f4c57be495c3                            *
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
    msg.setTimeStamp(0.23933651768);
    msg.setSource(44319U);
    msg.setSourceEntity(1U);
    msg.setDestination(28757U);
    msg.setDestinationEntity(44U);
    msg.state = 159U;
    msg.flags = 99U;
    msg.description.assign("FJIOPCECQEFARYYLIJHFVASICWWKEZVYNCVJUZLXKCIZZXQLVSIDKJGBCZNOEKLDAFRVMROQBPNMDNVXFZCNUGAFXRRSLCPMMEWURPJPUDUOIFQWRADNGUHDZPYYHDWTYXEIWARWMIRHJLXDXEAMHLJ");

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
    msg.setTimeStamp(0.256550915774);
    msg.setSource(46552U);
    msg.setSourceEntity(230U);
    msg.setDestination(59520U);
    msg.setDestinationEntity(44U);
    msg.state = 213U;
    msg.flags = 203U;
    msg.description.assign("NDCBRXIMJFUYKOPIQWGUICVQSNWXFYGFXFDQDCVJIWJIFOLABCBRCBPDYDKBRJAWQGLKYOLUJEOOMKETLAYQSYVRRSDNJBMXMBYHCPMIARXHCDRIYGUABZIZBZHRSSFAGVFZMBSOPDCOKEEGXQGHQEUTPSIZTZSNXVJPYWOSTVZCTNOMQHVZVGNNTHVPUHGLRUUXIATEMOPWJPL");

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
    msg.setTimeStamp(0.0891754389238);
    msg.setSource(2189U);
    msg.setSourceEntity(188U);
    msg.setDestination(22303U);
    msg.setDestinationEntity(30U);
    msg.state = 194U;
    msg.flags = 207U;
    msg.description.assign("TQPVAEMEZWJEKHVVEYYNXBUGNDCVPZBSTLUKUDFQRUXVPEHTMFQTHJQLOILUWLNLSX");

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
    msg.setTimeStamp(0.560931795157);
    msg.setSource(45006U);
    msg.setSourceEntity(223U);
    msg.setDestination(32388U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.219958595346);
    msg.setSource(52693U);
    msg.setSourceEntity(209U);
    msg.setDestination(39388U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.559653962026);
    msg.setSource(59063U);
    msg.setSourceEntity(137U);
    msg.setDestination(28184U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.955508345264);
    msg.setSource(59295U);
    msg.setSourceEntity(170U);
    msg.setDestination(47460U);
    msg.setDestinationEntity(141U);
    msg.id = 80U;
    msg.label.assign("YVMGBAXQEKYGXZXAQPFJBMZEHPLQVPRYSLERJRTMLAIUQETNFDHASMFHKKJUHMKUHOKCZBHSZGAAIVCCWTEEZBNTANETCBDYOVOLADDWFBGOZLLDVIJTNQNVJPRINUZVXNQCDAOSCGEMPSMKBBCLRWNFYQJUSFMRJNTPZWKPOUHXCOCXRLPVJ");
    msg.component.assign("BRDMNBJAQHTXJTBHPPRHHSBOGTHDYVMYFFSVIVGZESQVQZQIQKDZBSABMZYLRFVGSXMFIRXJOZIUEBMEYWZHZLAOEDJTCYIUFLAVNNUETYGSWJQKPKBTBKDSWIRLJSALPKWXKXNJDNRHOTRJLTGRUOCIOUGATLFCYZLXQQXOWNBRNJMWOONKPCUNPHVKVPWYAIPPTZAFDDMDKXQEOVAANFPHFMCGGLGWWS");
    msg.act_time = 23622U;
    msg.deact_time = 54959U;

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
    msg.setTimeStamp(0.0710745177436);
    msg.setSource(19126U);
    msg.setSourceEntity(222U);
    msg.setDestination(44056U);
    msg.setDestinationEntity(94U);
    msg.id = 231U;
    msg.label.assign("YQQGTIYACXSIBKVYQHLSCNDKMOTYJDSBFUSJSUJAABWLX");
    msg.component.assign("BNXPIHICEDMBCTYFUCZTAUEBQVYSJEWVWCOXMYFUGNDXPWAKMWTWVJBNGRKTOSKJWVOHPQRECNKTSIYNKQJLXANXOEZYMTXANXVRYHCIUKVLSRGDFCX");
    msg.act_time = 436U;
    msg.deact_time = 12461U;

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
    msg.setTimeStamp(0.179314601446);
    msg.setSource(14299U);
    msg.setSourceEntity(97U);
    msg.setDestination(53398U);
    msg.setDestinationEntity(76U);
    msg.id = 214U;
    msg.label.assign("WPCIHAHQHKPQRYNZFECKHQDKBWSXRVVGGPJEBOCHEAUFVQYKFWHMDEVACUPIKEILRTDNGEWLNXOMUSNAOGADXXFWLPVVYRONLIJSSCHPBLOOQKAFFGU");
    msg.component.assign("GVRYNKNHCDDKSWISTCYZPJBYGNTQYEOKRCMKTFVFYCUDVQNGBGVOR");
    msg.act_time = 40152U;
    msg.deact_time = 44938U;

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
    msg.setTimeStamp(0.00421884823926);
    msg.setSource(14671U);
    msg.setSourceEntity(93U);
    msg.setDestination(26936U);
    msg.setDestinationEntity(109U);
    msg.id = 236U;

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
    msg.setTimeStamp(0.65667235777);
    msg.setSource(52883U);
    msg.setSourceEntity(144U);
    msg.setDestination(13258U);
    msg.setDestinationEntity(75U);
    msg.id = 87U;

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
    msg.setTimeStamp(0.0303511992481);
    msg.setSource(27581U);
    msg.setSourceEntity(112U);
    msg.setDestination(34243U);
    msg.setDestinationEntity(106U);
    msg.id = 197U;

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
    msg.setTimeStamp(0.546083790398);
    msg.setSource(38126U);
    msg.setSourceEntity(177U);
    msg.setDestination(50127U);
    msg.setDestinationEntity(249U);
    msg.op = 168U;
    msg.list.assign("WLMWPUHXAMWHVEFDVFFJSRISJYXYYPVTLVLNPBQOEJPZQGHOIDFOCUPAZSUWUEKWRPYNOKOWVLJGTADB");

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
    msg.setTimeStamp(0.994405985568);
    msg.setSource(50635U);
    msg.setSourceEntity(254U);
    msg.setDestination(9698U);
    msg.setDestinationEntity(63U);
    msg.op = 91U;
    msg.list.assign("CDIIQBCORKJRHBOTCLHRDBHERGDNNKQPASTBTBSEYPHFDDXRWGIXTXOVMTZEPYIUOMEYJUCRJWUZSLDOUJMZTAVHWVQYNQSXKZUYQIZOFAMITFMVWGLQK");

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
    msg.setTimeStamp(0.148235115195);
    msg.setSource(18788U);
    msg.setSourceEntity(48U);
    msg.setDestination(64822U);
    msg.setDestinationEntity(253U);
    msg.op = 228U;
    msg.list.assign("FOFOWWQMBVYGIGIMVZPPFTECVNTUOAYMBEZUDSNTBQAHLUTPMINNMBKGZMSSRJTCDJXHXVYQUHIJFJFOPKBWQFUMEIHJTEAARRWKGERHAVDNAYAKGTKGPPQRLSTUWYERAQYXSFZXCSLGDVKIZSLXKVKXBHNQWCPGOBDDLENYNSOJDCWHRRNMFJOAGRQDCSYOOLIVJUDMZUXBLILHXETUZOVGJCXFXWY");

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
    msg.setTimeStamp(0.168608634876);
    msg.setSource(5023U);
    msg.setSourceEntity(228U);
    msg.setDestination(49595U);
    msg.setDestinationEntity(44U);
    msg.value = 181U;

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
    msg.setTimeStamp(0.159227060711);
    msg.setSource(26251U);
    msg.setSourceEntity(231U);
    msg.setDestination(34716U);
    msg.setDestinationEntity(233U);
    msg.value = 249U;

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
    msg.setTimeStamp(0.137648932037);
    msg.setSource(34911U);
    msg.setSourceEntity(104U);
    msg.setDestination(27672U);
    msg.setDestinationEntity(39U);
    msg.value = 195U;

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
    msg.setTimeStamp(0.422578674288);
    msg.setSource(18240U);
    msg.setSourceEntity(188U);
    msg.setDestination(14837U);
    msg.setDestinationEntity(160U);
    msg.consumer.assign("GUQPTREWCZLCQMEVZJWZJJARDROMSUZATDOEKBBHTSGTCGJJSFONVZFPJUJNPWWGGFKXLFUKTGDSLMBYBXTXAXKIHYEGRKRPVVLKYAHBDHPONIBDHCSSYOEGZULMUQAZAQQLIPRSYEPHKJHCLNYFIMMWFQHVIXWAQTLPTENNWXYCEADIXSVIOFRCOKDBMXXFCSIHBROYGDMBJOPU");
    msg.message_id = 62427U;

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
    msg.setTimeStamp(0.20183567331);
    msg.setSource(56585U);
    msg.setSourceEntity(146U);
    msg.setDestination(27963U);
    msg.setDestinationEntity(26U);
    msg.consumer.assign("KZYAXXEEKTTOLOQOILQYHWKDMXLWKDGFAWEHIMWNUEWKVDROAXZONFCEZSTXXRGNKIQYWHJGLQLLSVXSOICE");
    msg.message_id = 54618U;

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
    msg.setTimeStamp(0.152216503669);
    msg.setSource(49604U);
    msg.setSourceEntity(193U);
    msg.setDestination(30421U);
    msg.setDestinationEntity(251U);
    msg.consumer.assign("QGELSXYSHJIPDEBIUCZWDCKOZXVAVEIJUSJCSFZPQQNQHFWPRTDIPYQTRVAMNYFIOSLLAFPFWMIGAKUXAWBLXYKTUGJBQPCMDUOMFVAADHZXCNKVFNOHW");
    msg.message_id = 53236U;

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
    msg.setTimeStamp(0.965545082186);
    msg.setSource(38740U);
    msg.setSourceEntity(176U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.44012853585);
    msg.setSource(7977U);
    msg.setSourceEntity(189U);
    msg.setDestination(12030U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.605411838286);
    msg.setSource(28529U);
    msg.setSourceEntity(2U);
    msg.setDestination(56805U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.247283436203);
    msg.setSource(38169U);
    msg.setSourceEntity(134U);
    msg.setDestination(12215U);
    msg.setDestinationEntity(186U);
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
    msg.setTimeStamp(0.594380678923);
    msg.setSource(1622U);
    msg.setSourceEntity(210U);
    msg.setDestination(18326U);
    msg.setDestinationEntity(26U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.588166527782);
    msg.setSource(19207U);
    msg.setSourceEntity(34U);
    msg.setDestination(39563U);
    msg.setDestinationEntity(119U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.260338242534);
    msg.setSource(11184U);
    msg.setSourceEntity(223U);
    msg.setDestination(47114U);
    msg.setDestinationEntity(246U);
    msg.total_steps = 141U;
    msg.step_number = 116U;
    msg.step.assign("YUXKJIUFLNMFANXRAYRXVGKR");
    msg.flags = 134U;

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
    msg.setTimeStamp(0.12980120369);
    msg.setSource(48237U);
    msg.setSourceEntity(2U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(8U);
    msg.total_steps = 157U;
    msg.step_number = 178U;
    msg.step.assign("VZBEFNMDNWETJQGYEAFQTTYLZDDGZPEUDSFCBCIKYWPEYLMQNVVVDMJQMACSTZ");
    msg.flags = 7U;

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
    msg.setTimeStamp(0.72716221528);
    msg.setSource(51393U);
    msg.setSourceEntity(213U);
    msg.setDestination(62314U);
    msg.setDestinationEntity(249U);
    msg.total_steps = 180U;
    msg.step_number = 173U;
    msg.step.assign("TLXYHSASHCCYGPDJUIYLGVBEZEWXBIWEHEEHDTXEUXVZRNXOFBWXWHJDVPXGRBMZJBOXPKJOPMKARJGIFPESCRLTTFRPOAKKFQWQUIVZSHSUVEFYNUODYBZJCKFLYUUWAZFFBBPPNCMQITGTINWATXSKUWYJVDDNCMVLLCASTZWCPMNDSJJKDRFJEGVYNGME");
    msg.flags = 236U;

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
    msg.setTimeStamp(0.687237996198);
    msg.setSource(25353U);
    msg.setSourceEntity(131U);
    msg.setDestination(37155U);
    msg.setDestinationEntity(78U);
    msg.state = 121U;
    msg.error.assign("HVTOVQLJOWDILBLW");

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
    msg.setTimeStamp(0.41074325541);
    msg.setSource(40497U);
    msg.setSourceEntity(77U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(238U);
    msg.state = 222U;
    msg.error.assign("AKTDBCYWJCNGBEVIUVBGNOCSEAJTQJSEKNASZSOYIYKOIQGMDGRARYHJFCUUTJTWGFTHWZZUSEJTNWEAOUHDFKLERPNDVWSFPYODZTLEKK");

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
    msg.setTimeStamp(0.60691014564);
    msg.setSource(43020U);
    msg.setSourceEntity(58U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(133U);
    msg.state = 169U;
    msg.error.assign("VPFSRZZFIHDRBOQRNHCKMVFJGGMDDMAUYPEVRPVLMQHOHJSMUFJPSMEVKCSUPGQVTIGAMJWXJWWZAPLJBUNKCWXXIQQLRLITCBEEZLJRWYQXXYNBEFNOOAQMZKHGTSITBEMEAYRCXENWFOJJWFVESC");

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
    msg.setTimeStamp(0.3243554633);
    msg.setSource(29702U);
    msg.setSourceEntity(41U);
    msg.setDestination(23097U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.873238904729);
    msg.setSource(10910U);
    msg.setSourceEntity(63U);
    msg.setDestination(39362U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.751376475009);
    msg.setSource(42037U);
    msg.setSourceEntity(14U);
    msg.setDestination(56042U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.869349203702);
    msg.setSource(52807U);
    msg.setSourceEntity(127U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(168U);
    msg.op = 165U;
    msg.speed_min = 0.200137176969;
    msg.speed_max = 0.361263091843;
    msg.long_accel = 0.172330539168;
    msg.alt_max_msl = 0.705458085238;
    msg.dive_fraction_max = 0.0179403580283;
    msg.climb_fraction_max = 0.379524878976;
    msg.bank_max = 0.605056311297;
    msg.p_max = 0.43479115082;
    msg.pitch_min = 0.41281938224;
    msg.pitch_max = 0.682257359657;
    msg.q_max = 0.93449301412;
    msg.g_min = 0.176516258296;
    msg.g_max = 0.928041645561;
    msg.g_lat_max = 0.146260087157;
    msg.rpm_min = 0.241254884284;
    msg.rpm_max = 0.423319058165;
    msg.rpm_rate_max = 0.0274040399778;

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
    msg.setTimeStamp(0.863957484896);
    msg.setSource(9285U);
    msg.setSourceEntity(60U);
    msg.setDestination(59967U);
    msg.setDestinationEntity(76U);
    msg.op = 102U;
    msg.speed_min = 0.84925541723;
    msg.speed_max = 0.781302712745;
    msg.long_accel = 0.126099025283;
    msg.alt_max_msl = 0.0346723181889;
    msg.dive_fraction_max = 0.128664340364;
    msg.climb_fraction_max = 0.587212663603;
    msg.bank_max = 0.389591537281;
    msg.p_max = 0.267497588991;
    msg.pitch_min = 0.818042628466;
    msg.pitch_max = 0.539159348129;
    msg.q_max = 0.891140245759;
    msg.g_min = 0.946028328454;
    msg.g_max = 0.77244064338;
    msg.g_lat_max = 0.61505306758;
    msg.rpm_min = 0.769738591003;
    msg.rpm_max = 0.802879245932;
    msg.rpm_rate_max = 0.947321585957;

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
    msg.setTimeStamp(0.513602358709);
    msg.setSource(6446U);
    msg.setSourceEntity(143U);
    msg.setDestination(27308U);
    msg.setDestinationEntity(56U);
    msg.op = 15U;
    msg.speed_min = 0.17611457243;
    msg.speed_max = 0.100096150014;
    msg.long_accel = 0.909182760916;
    msg.alt_max_msl = 0.68832001711;
    msg.dive_fraction_max = 0.789229099722;
    msg.climb_fraction_max = 0.414111484749;
    msg.bank_max = 0.262048634756;
    msg.p_max = 0.925684555356;
    msg.pitch_min = 0.33982716443;
    msg.pitch_max = 0.582149635601;
    msg.q_max = 0.949167750571;
    msg.g_min = 0.176759902706;
    msg.g_max = 0.0295925152824;
    msg.g_lat_max = 0.914529758907;
    msg.rpm_min = 0.828031070707;
    msg.rpm_max = 0.341515447585;
    msg.rpm_rate_max = 0.609959700652;

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
    msg.setTimeStamp(0.123095046858);
    msg.setSource(17154U);
    msg.setSourceEntity(13U);
    msg.setDestination(7101U);
    msg.setDestinationEntity(240U);
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.763607352186;
    tmp_msg_0.lon = 0.706952216189;
    tmp_msg_0.z = 0.87095507921;
    tmp_msg_0.z_units = 51U;
    tmp_msg_0.radius = 0.533858781177;
    tmp_msg_0.duration = 25824U;
    tmp_msg_0.speed = 0.660706927742;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.custom.assign("LDGQDFWCGGRVIBTMNAQABZHGQCWGCKPJMYJMQXOOBYWCRHHMVGNSMMIHJYTVEPSVRHRULSUNWEZJLXUPWVZCONDTKDJKAODWEOSBVTHNNECXZOUZVPKQFZHBLUIEDEJCDKFAYMIBVLXBKGPFPXPRWFRQOHOUNBIRVGGZACANTUSYZAVYKWNIITLKTBLSXHYUPSSDAXKRJYEITHWBTEIJIRFFQYQFXADLKJCSYLMOMREFNAPXQ");
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
    msg.setTimeStamp(0.519363291522);
    msg.setSource(5781U);
    msg.setSourceEntity(76U);
    msg.setDestination(50475U);
    msg.setDestinationEntity(198U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("SWWQGBUWKHVMQZHYKIOFVFBGGFPXREFLDIHJAOINEVKWQNMOBTFXBUWLTVCRZECPTJZCWSOPSXIHUFYANUIGHMWZGEQQLESTFLTLYUOWLPSDOAXCAFKYUQBVXIATOATDGKMERLDZRKRSCIXMXQICSRYRNRNEUDLMZMYBOVPOMBJNPJWIJUDEFZZPJJBNQHEJCKVSHXGCZIBHYMJUTSRGPYKPW");
    tmp_msg_0.value = 72U;
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
    msg.setTimeStamp(0.14714600494);
    msg.setSource(16972U);
    msg.setSourceEntity(175U);
    msg.setDestination(2946U);
    msg.setDestinationEntity(210U);
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.847916965654;
    tmp_msg_0.dist_min_abs = 0.173465281413;
    tmp_msg_0.dist_min_mean = 0.0151178470364;
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
    msg.setTimeStamp(0.151555807435);
    msg.setSource(21648U);
    msg.setSourceEntity(51U);
    msg.setDestination(5665U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.144999425306;
    msg.lon = 0.422984890267;
    msg.height = 0.6394171658;
    msg.x = 0.273940660243;
    msg.y = 0.930394000874;
    msg.z = 0.937407121424;
    msg.phi = 0.819013787073;
    msg.theta = 0.380272576229;
    msg.psi = 0.880121455721;
    msg.u = 0.0292252788443;
    msg.v = 0.313316138403;
    msg.w = 0.0107227123247;
    msg.p = 0.275570849124;
    msg.q = 0.884966114894;
    msg.r = 0.712606734789;
    msg.svx = 0.367815285497;
    msg.svy = 0.286747254402;
    msg.svz = 0.319728332926;

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
    msg.setTimeStamp(0.930004326441);
    msg.setSource(64648U);
    msg.setSourceEntity(95U);
    msg.setDestination(19945U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.847005194358;
    msg.lon = 0.0243728618342;
    msg.height = 0.219273671529;
    msg.x = 0.795527386161;
    msg.y = 0.223856874324;
    msg.z = 0.913287479343;
    msg.phi = 0.688721026489;
    msg.theta = 0.429799969984;
    msg.psi = 0.613872840145;
    msg.u = 0.468291066874;
    msg.v = 0.478240487049;
    msg.w = 0.784580923592;
    msg.p = 0.965691935626;
    msg.q = 0.0605050972628;
    msg.r = 0.546420636127;
    msg.svx = 0.345998847556;
    msg.svy = 0.143071079277;
    msg.svz = 0.3292427529;

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
    msg.setTimeStamp(0.763531413669);
    msg.setSource(54556U);
    msg.setSourceEntity(218U);
    msg.setDestination(24868U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.0317799491104;
    msg.lon = 0.485777682961;
    msg.height = 0.874275513995;
    msg.x = 0.405607210533;
    msg.y = 0.907419239571;
    msg.z = 0.441652960831;
    msg.phi = 0.319378785009;
    msg.theta = 0.950659860371;
    msg.psi = 0.292682448264;
    msg.u = 0.795127844526;
    msg.v = 0.495373041883;
    msg.w = 0.121179101521;
    msg.p = 0.358363169549;
    msg.q = 0.0564855511547;
    msg.r = 0.855632932469;
    msg.svx = 0.0243543624978;
    msg.svy = 0.101346914053;
    msg.svz = 0.00493953453154;

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
    msg.setTimeStamp(0.0748385848984);
    msg.setSource(15563U);
    msg.setSourceEntity(245U);
    msg.setDestination(12021U);
    msg.setDestinationEntity(193U);
    msg.op = 11U;
    msg.entities.assign("IUYTAATTCEFFHWNAHTCUMCSZRIDZEQQPQDHKSSSWYVTBYEHWPBNVCIUGQBDVMMLWKSZVOMSUAPG");

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
    msg.setTimeStamp(0.545284704865);
    msg.setSource(28466U);
    msg.setSourceEntity(74U);
    msg.setDestination(34349U);
    msg.setDestinationEntity(247U);
    msg.op = 6U;
    msg.entities.assign("OEHGDXTOUHIGAEICIUHLBQUICPVBPHEATDEXSGFGVMRJPLAJCXDLNLAMPKMYUWDCLXNAMFAJIMAUEKYCNSPCMKQWLBTDYSNBCRKUOLRNYHOTJ");

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
    msg.setTimeStamp(0.428439109299);
    msg.setSource(51579U);
    msg.setSourceEntity(36U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(132U);
    msg.op = 5U;
    msg.entities.assign("PRGFIPTWHREKFXXHUKGUHOLRQQEUXMHXFCNPGARCGEYJPDFBTAYWZIIYQVRYEONQJKAMLGWXJUHISJCJUOGDPAHCBOOODWRDRQAGVVDEBAIIHGTORDZAZLEKXTDS");

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
    msg.setTimeStamp(0.050716139071);
    msg.setSource(40945U);
    msg.setSourceEntity(190U);
    msg.setDestination(12825U);
    msg.setDestinationEntity(30U);
    msg.type = 48U;
    msg.speed = 46147U;
    const char tmp_msg_0[] = {18, 29, -125, 0, -54, 45, -92, 39, 75, -12, 45, 89, 89, 70, -99, -34, 52, -37, 5, 70, -16, 87, -60, -93, 111, 95, -53, -104, 69, -19, -37, 123, -70, 95, -70, -34, 111, -124, -64, 62, -107, 115, -96, 65, 114, -124, -36, -56, 95, -93, -22, -98, 60, 81, -79, -28, -107, 50, 15, -24, -54, -62, -41, -10, -34, 0, -97, 109, -101, -114, 43, -106, -2, -38, -6, 96, -42, -103, 46, -115, 117, 87, 122, -80, 17, -19, -120, 13, -112, -61, -41, -65, 52, 99, 95, -99, 10, -90, -121, -58, 5, -49, 97, -45, 42, -57, -67, 99, 84, 59, -95, 116, -89, 68, 60, -11, -7, -53, 29, -44, 68, -106, 99, 31, 111, 108, 29, 0, -40, -14, -97, -76, -68, 5, 120, 54, -108, -121, -44, -67, -122, 25, -105, 1, 31, 76, 13, -54, 59, -117, 121, -49, -12, -68, -89, -104, 119, -43, -53, 33, -15, 90, -44, 85, -107, 20, -85, 91, -127, -31, -127, 72, -42, 17, 33, -121, 37, 8, -19, 19, -53, 51, 0, 95, 108, 34, -11, 69};
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
    msg.setTimeStamp(0.92210834784);
    msg.setSource(63418U);
    msg.setSourceEntity(173U);
    msg.setDestination(10222U);
    msg.setDestinationEntity(106U);
    msg.type = 145U;
    msg.speed = 34983U;
    const char tmp_msg_0[] = {-74, -94, 64, 71, -13, -110, 108, -71, -82, -72, -38, 66, -72, -34, -75, -54, -15, -61, -63, -106, -46, 17, -18, 63, -120, 96, -111, -34, -108, 78, -109, 102, -5, -113, 102, 46, -49, -33, 88, -79, -4, -6, 20, 48, 69, 38, 90, 55, 3, 122, -48, 28, -108, 29, -85, -94, 80, 94, 111, -53, 122, -109, 24, -39, 42, -21, -38, 92, 60, 85, -73, 12, -110, -97, -47, 68, 42, 17, -36, -71, -83, 123, 32, -111, -22, 79, -104, -87, 78, -79, -102, -103, -50, -41, 12, 94, -128, 107, -52, -29, -89, -113, -44, 34, -43, 90, -49, -19, 48};
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
    msg.setTimeStamp(0.748813222543);
    msg.setSource(49150U);
    msg.setSourceEntity(181U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(120U);
    msg.type = 103U;
    msg.speed = 21731U;
    const char tmp_msg_0[] = {-34, 41, -24, -114, 55, 115, -111, -28, -77, -114, 115, 47, 76, 35, 59, -119, -23, -68, 50, -37, 51, 45, 42, -73, -6, -81, -64, 82, 15, -72, 72, -8, -87, -62, -114, 104, -13, 82, 80, 118, 76, 53, 126, -98, -54, -57, -102, -81, -117, 3, -74, 46, 41, 16, -26, -71, -83, 91, -95, 126, 126, 87, 62, -48, 90, 65, -78, 126, 87, 11, -67, 79, -63, 52, 60, -99, -43, 61, 83, 47, -20, 106, -68, 119, 110, -2, -121, -45, -65, 41, 68, 40, 104, -118, 126, -128, 118, -120, 116, -18, 28, -6, 111, -37, -68, -32, 34, 103, 70, 58, -116, 38, 113, 91, 71, -14, 17, 36, 121, 100, 31, 116, -60, 85, 65, -112, 24, -82, -73, -91, -52, 60, -4, 96, -6, 25, -54, -98, -6, -1, 9, 36, 73, 88, 14, 5, 81, -31, 47, -52, 71, 121};
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
    msg.setTimeStamp(0.50462927224);
    msg.setSource(52445U);
    msg.setSourceEntity(23U);
    msg.setDestination(10172U);
    msg.setDestinationEntity(140U);
    msg.op = 64U;
    msg.tas2acc_pgain = 0.640440781346;
    msg.bank2p_pgain = 0.224040969277;

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
    msg.setTimeStamp(0.55465500716);
    msg.setSource(14602U);
    msg.setSourceEntity(79U);
    msg.setDestination(48743U);
    msg.setDestinationEntity(4U);
    msg.op = 144U;
    msg.tas2acc_pgain = 0.0280101425361;
    msg.bank2p_pgain = 0.458447524233;

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
    msg.setTimeStamp(0.489631999852);
    msg.setSource(48314U);
    msg.setSourceEntity(183U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(6U);
    msg.op = 71U;
    msg.tas2acc_pgain = 0.376229861619;
    msg.bank2p_pgain = 0.592084129011;

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
    msg.setTimeStamp(0.981220549968);
    msg.setSource(21945U);
    msg.setSourceEntity(188U);
    msg.setDestination(8615U);
    msg.setDestinationEntity(62U);
    msg.available = 2502872854U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.380728201833);
    msg.setSource(55425U);
    msg.setSourceEntity(221U);
    msg.setDestination(53905U);
    msg.setDestinationEntity(136U);
    msg.available = 380322425U;
    msg.value = 183U;

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
    msg.setTimeStamp(0.83657150026);
    msg.setSource(9643U);
    msg.setSourceEntity(137U);
    msg.setDestination(55781U);
    msg.setDestinationEntity(19U);
    msg.available = 3111897140U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.640596258964);
    msg.setSource(29924U);
    msg.setSourceEntity(174U);
    msg.setDestination(49424U);
    msg.setDestinationEntity(68U);
    msg.op = 145U;
    msg.snapshot.assign("MSXEFASRRCJCQZSLYBNSMBXXFIQWUXFYBISLAEYRHDUJGRTTNZTFNUEPGKGJDTEFMVQGLDRLVKFVKCTCNWUHINYOLIRKIJDHVCBHZBCNIVYNSDDOPWMNZMASKFWKPGUAGEEDBPBADWM");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 53961U;
    tmp_msg_0.lat = 0.544394352652;
    tmp_msg_0.lon = 0.996744889884;
    tmp_msg_0.z = 0.40033432562;
    tmp_msg_0.z_units = 52U;
    tmp_msg_0.speed = 0.948312804139;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.roll = 0.0656496215231;
    tmp_msg_0.pitch = 0.699234253526;
    tmp_msg_0.yaw = 0.901644538264;
    tmp_msg_0.custom.assign("HXKHHHINZHADELWRQQEGLUKMLYVYOVRGKFRDYLTBAPHEZMPNVQSXTDBUAPSIOWEBNWNTKZSODSMFBRBGWDSZCOCMLWRDVVJLIZSK");
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
    msg.setTimeStamp(0.869045583082);
    msg.setSource(62917U);
    msg.setSourceEntity(195U);
    msg.setDestination(6542U);
    msg.setDestinationEntity(191U);
    msg.op = 177U;
    msg.snapshot.assign("DHADWHDEGTEJRLLWYIPHEBLAJJVXCVCLSNWXHLIMSXSMACZBWZXHUIYQBHXZTGEQFIGKPDKBYQKUPDGBYSZARMZAJKLQATNJJVQANUOUINNMVAEVFIBYBSDFFNBTHXCRSFKGTLGELTUXAJULEOEPZFVSEKDVOXJKPFVRZWGCOSILGTCVMJTSHPHMPYYBFIGMQRAWBCTPWJUUZODQRTCDQSCIMNWNOWIFRMQMQYCRWXY");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.0339611628393;
    tmp_msg_0.lat_gain = 0.213840349159;
    tmp_msg_0.bond_thick = 0.709678518194;
    tmp_msg_0.lead_gain = 0.322590905078;
    tmp_msg_0.deconfl_gain = 0.0699052460995;
    tmp_msg_0.accel_switch_gain = 0.823221590351;
    tmp_msg_0.safe_dist = 0.252197549451;
    tmp_msg_0.deconflict_offset = 0.760452114453;
    tmp_msg_0.accel_safe_margin = 0.20247352917;
    tmp_msg_0.accel_lim_x = 0.968502436205;
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
    msg.setTimeStamp(0.23643114227);
    msg.setSource(54003U);
    msg.setSourceEntity(11U);
    msg.setDestination(6353U);
    msg.setDestinationEntity(132U);
    msg.op = 200U;
    msg.snapshot.assign("RXTDQPZLRYZQIGTPBDJLRZGPMYVOVFUDNSRXULQJHVCZXBEFSCATNREZKAZVVFHX");
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("AMDFBDWWAPRXMXUEZRXGGLRXHNZXOXITOMXCNNCEMUNZUJQEHBULRXARFHJLQAKMNYZQLYEKSWZWVKOGJVUFGSQGJWCRDPIQBHRFAZYDZKTIEPLEPTMOUCLMNLOFCDJRQFCWVDMISBPOMHFANJYUT");
    tmp_msg_0.op = 102U;
    tmp_msg_0.sched_time = 0.214488611864;
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
    msg.setTimeStamp(0.550459758206);
    msg.setSource(32459U);
    msg.setSourceEntity(154U);
    msg.setDestination(27048U);
    msg.setDestinationEntity(163U);
    msg.op = 195U;
    msg.name.assign("LIYOBQUGQDIKRTZHCTRAKMMWDKEAUETWXJGOAASZFEJPZTJNYSEMXMVRBXYAKQQZLBUVZBXJDBPRNUEIHJZCOTJIJTRHIXURTUFPOSUYSACOMGNGRBLFQDLWPVTMOHIOWXAYRLDQXSOCCERKFNFZBNALPMYNVWVHWOFFTPEYDVEUCRHNUYVWLGYFZCAPHXCNLIKSVXQIDSIXWVPJQJZCVB");

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
    msg.setTimeStamp(0.343461074994);
    msg.setSource(16409U);
    msg.setSourceEntity(176U);
    msg.setDestination(30362U);
    msg.setDestinationEntity(169U);
    msg.op = 248U;
    msg.name.assign("XETCTNKGUDMVEJNZSKYGSXEROCJGPTBKBNEPVMQS");

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
    msg.setTimeStamp(0.908555024329);
    msg.setSource(42127U);
    msg.setSourceEntity(14U);
    msg.setDestination(1616U);
    msg.setDestinationEntity(37U);
    msg.op = 25U;
    msg.name.assign("FNTPCOBZYGIHTMIDXHNFIDBCDFZOEHUERUHNPNUPHOXIAGUPVUAMLAGZUSKOWYJQDDCXHWWXQNIHEUZJSRVPRWRDTGZILGQBSBBDRZSUWOYGLKRBSZRYXNZFQNWBLYSSTNJQAAVXLIJVETRESSEPYVEK");

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
    msg.setTimeStamp(0.215054898042);
    msg.setSource(20544U);
    msg.setSourceEntity(58U);
    msg.setDestination(1259U);
    msg.setDestinationEntity(66U);
    msg.type = 165U;
    msg.htime = 0.153266752429;
    msg.context.assign("YOFRHHPTHWKOILWQKPIQIOAWNQREAQRAHYQNJBIELHTXVLPICTNTBGGSZRDRUUYQFWESLXSKVQZERVPKYNLZCJPBUXZPKMGFXYALYMCOVOWPVAAXUYPKSLHHDSDQSCRMNEBOIJZZABZMMSNHTXLMNVZGCV");
    msg.text.assign("HPCNKKTMYORLGJESANLYSZPQUIAOKUVKBVDQTRXUYWKQUAPAWDPBNUUTCXEMFFJJXVHXWNJZFYJXGLHVPARZYAWZTOAKCBGVDCXBDWCQMERIDPJZSTEOJEOMICNIGFIGCNLUYNVOLEMVHZKFLCGKHCPQMOIYMVAMRBKUWRBQVOSYSFERHEZEXYPTBPIISWXLHZUHGSDKOYLTTGRFS");

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
    msg.setTimeStamp(0.872459480609);
    msg.setSource(31916U);
    msg.setSourceEntity(186U);
    msg.setDestination(15309U);
    msg.setDestinationEntity(35U);
    msg.type = 41U;
    msg.htime = 0.727037172099;
    msg.context.assign("UIZLDEYNFYZIZREDQKLJSSUNHLSMREQWSKMIYVQVPKEZCAAWKLUGBETQTIYBUDHGFKKJSDPNLVSORHVGYGYBCQWEOPIAJMPTABHZZMOQXKIGNJLVBRXFTTWNUNBPIWNPXDWODTHPYRYZXWEGDOGFZEJZVMRQRMIGOFHSWCNDOKWQLFCACZCFBMPULOMTRDIUTYSPXCOJBLFSJXVHXHFACELJIUKDTA");
    msg.text.assign("TXIDUNVUNMWSZULMDWEVBREURIYBJZHETHBYZRWSDKJMVGWXEOIWGDGEKCVKXRVJXEKPCHVWGCAZCMDKIDQQLMHOWUNFRZFFNAFUXBUMLLAAMCYUVNBIAHNTFPZYPSRIRGWXRI");

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
    msg.setTimeStamp(0.531166569467);
    msg.setSource(32489U);
    msg.setSourceEntity(69U);
    msg.setDestination(32039U);
    msg.setDestinationEntity(77U);
    msg.type = 247U;
    msg.htime = 0.835753240633;
    msg.context.assign("LJLJUTWGBGZQUQOODMTJPFYISYJJQFTNRGH");
    msg.text.assign("UELRVMFLOHCINZCUIJNEDTNSDXYR");

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
    msg.setTimeStamp(0.0134718936307);
    msg.setSource(13163U);
    msg.setSourceEntity(122U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(254U);
    msg.command = 155U;
    msg.htime = 0.0813328938254;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 41U;
    tmp_msg_0.htime = 0.490756428869;
    tmp_msg_0.context.assign("PEUWITDTNWKMHYLGMHRTJVXIEUTMAPZEBJSQDVAHEQRIHPAMKOBNQFOI");
    tmp_msg_0.text.assign("LOWJVOFKUGWBVSOGCTQRHLAGDCBZRPOVBKIVDNYBVSFRAZCHCM");
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
    msg.setTimeStamp(0.461717659974);
    msg.setSource(9981U);
    msg.setSourceEntity(24U);
    msg.setDestination(44276U);
    msg.setDestinationEntity(192U);
    msg.command = 215U;
    msg.htime = 0.379740471023;

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
    msg.setTimeStamp(0.509785006995);
    msg.setSource(24417U);
    msg.setSourceEntity(138U);
    msg.setDestination(40928U);
    msg.setDestinationEntity(36U);
    msg.command = 80U;
    msg.htime = 0.237623969878;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 115U;
    tmp_msg_0.htime = 0.309581278081;
    tmp_msg_0.context.assign("TOGYUHEVCQACIQAGOWSAEYRQHIWWNESMCXVSTUGHJTJSVMPUSVNIWNBFIATJUOJBVFAQUFGQCZNYMGPSMLXVESRVZSFIPQXZHNJLIYJFCOPNBLDTHOPXZAVOKYRKMRPNGE");
    tmp_msg_0.text.assign("OOWLNUOOBJWNENPTCTXPYCPTSQ");
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
    msg.setTimeStamp(0.0593955372054);
    msg.setSource(43342U);
    msg.setSourceEntity(133U);
    msg.setDestination(5841U);
    msg.setDestinationEntity(226U);
    msg.op = 10U;
    msg.file.assign("GBUKRFCCRACVUZOSNMQJNKMHAPRSNVPPVRIHPDWHPLBXPRUXOMKWSDSWQGTJXUCFSIZOLUCDDKUFUZWEETHADJNKBOGEVCRFZRABQLGNEYETXQYTYTVQVMPEGDOOGTWEHLHUHPYQFOIAGXNFSSLBQVYZY");

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
    msg.setTimeStamp(0.00377753697346);
    msg.setSource(59564U);
    msg.setSourceEntity(111U);
    msg.setDestination(34133U);
    msg.setDestinationEntity(167U);
    msg.op = 42U;
    msg.file.assign("YRMEPDAZFIOXAGNBDJHLQJDFFLGUFWNBWFHIYYHDYXKOAUMNAVCODMQZMHYKSXCNRZIDWIJJWGAJHWPAGUVZTOROIVCRTFOVQQSPXLEGCQRU");

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
    msg.setTimeStamp(0.60029577911);
    msg.setSource(18002U);
    msg.setSourceEntity(119U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(111U);
    msg.op = 105U;
    msg.file.assign("OCCJLIWVHLGDXIAEDUFHFTQZJEXULTEPKUXOWRKFMDAFLSRQTOVFVNKXQWJQRGBQPPDZOZNNOYBKLXPVRGTINHVNRGD");

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
    msg.setTimeStamp(0.201393306937);
    msg.setSource(54437U);
    msg.setSourceEntity(228U);
    msg.setDestination(37225U);
    msg.setDestinationEntity(138U);
    msg.op = 172U;
    msg.clock = 0.104786607116;
    msg.tz = 27;

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
    msg.setTimeStamp(0.792322897143);
    msg.setSource(2046U);
    msg.setSourceEntity(253U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(137U);
    msg.op = 7U;
    msg.clock = 0.959756338178;
    msg.tz = -101;

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
    msg.setTimeStamp(0.0606063597893);
    msg.setSource(60570U);
    msg.setSourceEntity(208U);
    msg.setDestination(47142U);
    msg.setDestinationEntity(58U);
    msg.op = 166U;
    msg.clock = 0.761626484394;
    msg.tz = -99;

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
    msg.setTimeStamp(0.325988621958);
    msg.setSource(7163U);
    msg.setSourceEntity(120U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(252U);
    msg.conductivity = 0.25059795685;
    msg.temperature = 0.159668978856;
    msg.depth = 0.778212719745;

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
    msg.setTimeStamp(0.0802346997509);
    msg.setSource(29293U);
    msg.setSourceEntity(169U);
    msg.setDestination(61361U);
    msg.setDestinationEntity(125U);
    msg.conductivity = 0.129430181071;
    msg.temperature = 0.366680536244;
    msg.depth = 0.347398421838;

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
    msg.setTimeStamp(0.561052368508);
    msg.setSource(22445U);
    msg.setSourceEntity(47U);
    msg.setDestination(6840U);
    msg.setDestinationEntity(219U);
    msg.conductivity = 0.338484748894;
    msg.temperature = 0.747828570506;
    msg.depth = 0.82223487162;

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
    msg.setTimeStamp(0.109593792632);
    msg.setSource(54024U);
    msg.setSourceEntity(238U);
    msg.setDestination(56131U);
    msg.setDestinationEntity(133U);
    msg.altitude = 0.226957408813;
    msg.roll = 58812U;
    msg.pitch = 56306U;
    msg.yaw = 4464U;
    msg.speed = 30700;

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
    msg.setTimeStamp(0.979045969549);
    msg.setSource(55499U);
    msg.setSourceEntity(122U);
    msg.setDestination(47343U);
    msg.setDestinationEntity(41U);
    msg.altitude = 0.296008516391;
    msg.roll = 56926U;
    msg.pitch = 22412U;
    msg.yaw = 62773U;
    msg.speed = -16546;

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
    msg.setTimeStamp(0.197911789604);
    msg.setSource(59225U);
    msg.setSourceEntity(28U);
    msg.setDestination(17919U);
    msg.setDestinationEntity(123U);
    msg.altitude = 0.788189753509;
    msg.roll = 32232U;
    msg.pitch = 49027U;
    msg.yaw = 56611U;
    msg.speed = 32307;

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
    msg.setTimeStamp(0.611653805995);
    msg.setSource(63132U);
    msg.setSourceEntity(245U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(244U);
    msg.altitude = 0.854170734639;
    msg.width = 0.286088771459;
    msg.length = 0.833968358494;
    msg.bearing = 0.60832005761;
    msg.pxl = -3560;
    msg.encoding = 39U;
    const char tmp_msg_0[] = {64, -97, 123, 23, -18, -124, 70, 64, -52, 89, 10, 77};
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
    msg.setTimeStamp(0.466625829319);
    msg.setSource(58991U);
    msg.setSourceEntity(78U);
    msg.setDestination(51539U);
    msg.setDestinationEntity(211U);
    msg.altitude = 0.35557327399;
    msg.width = 0.667678052545;
    msg.length = 0.0953836009556;
    msg.bearing = 0.841710647572;
    msg.pxl = 15666;
    msg.encoding = 28U;
    const char tmp_msg_0[] = {-67, -24, -1, -2, -112, -22, -12, -71, -53, 49, 29, 38, -35, 122, 27, 108, -83, 95, 15, 66, 52, -46, 91, 22, -106, -39, -38, 52, 84, 61, -5, 47, -88, -97, 22, -118, -103, -9, 115, 121, -7, -50, -29, -11, 14, -128, 8, -78, -34, -52, 26, -95, 33, 41, 33, 117, 41, -13, 43, -95, -109, -117, -126, -34, 47, 90, -128, 62, 83, -122, -75, 30, 13, -117, -24, 78, -4, 28, 55, -105, -128, -60, 14, 6, 73, -79, 87, -122, 14, 5, 48, 71, 93, -115, -112, 115, -17, 96, -99, -47, -83, 98, -89, -30, -30, 115, -52, -106, 79, -109, -34, -58, -124, 111, 77, -33, 8, -57, 63, -85, 34, 24, -49, -75, 45, 5, -71, 105, 1, -88, 43, -78, 119, 96, -115, -90, 105, 29, -67, 53, 43, -111, 9, 4, -31, 86, -10, -93, -45, 43, 21, -39, 81, -24, -15, 108, 19, 97, -25, -18, -24, -36, 53, -30, 81, -67, 117, 74, 90, -40, 109, -118, -83, -69, 79, -60, -94, -47, -7, -7, 44, -73, 27, 27, 76, -3, 34, 10, -97, -47, 4, 106, -124, -41, 117, -26};
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
    msg.setTimeStamp(0.447667382387);
    msg.setSource(39666U);
    msg.setSourceEntity(248U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.342611492909;
    msg.width = 0.141827878753;
    msg.length = 0.0996698503999;
    msg.bearing = 0.340243179872;
    msg.pxl = 31205;
    msg.encoding = 211U;
    const char tmp_msg_0[] = {-81, 116, 70, -127, -49, -54, -79, -72, 49, 20, 37, 97, 62, -93, 70, -92, 96, -123, -24, -127, -80, 24, 28, 29, -73, -54, 92, 6, 122, -89, -24, -45, -59, 77, -93};
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
    msg.setTimeStamp(0.92941290303);
    msg.setSource(36662U);
    msg.setSourceEntity(119U);
    msg.setDestination(25300U);
    msg.setDestinationEntity(178U);
    msg.text.assign("SMZYIBDKCBVLIPMNZLVHPVYCHEOJCVIEIJCVQDDEJIGRWGAGNYEBTSYNQZYTKGVNPOUNXSTKUYRQWXFGQCMPXMJRWAHKZHSLUFEOBZXJDCPPABJEMYMEGEHSFKVBQWUWLLCPKHORGBYUMDAICRFVKWLSHPGJMGUYFXTHIDWWEWSRNPTTSSNQEJFNUG");
    msg.type = 144U;

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
    msg.setTimeStamp(0.48819611895);
    msg.setSource(31783U);
    msg.setSourceEntity(254U);
    msg.setDestination(57905U);
    msg.setDestinationEntity(190U);
    msg.text.assign("MOBFZGFUGVLMYZPFVPJECCQBKUUYOIBCLQQEJJHLVICVOJRDUNAVJBRYLBKVUVSGGWGXOXOFPENNTUWZQBXZTBNIKNNIHCWBOIMMLJYMMPKYGYMSTXUASXSWXQALPROZWBDZNFZTUJQFRRIWSBGEJCMOPXSRASFHDYVKKJDEFXADTHZOEJIONAHKCVUKIECELWRXL");
    msg.type = 182U;

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
    msg.setTimeStamp(0.237515909829);
    msg.setSource(7763U);
    msg.setSourceEntity(162U);
    msg.setDestination(35397U);
    msg.setDestinationEntity(63U);
    msg.text.assign("IBKBKJGYEIFTJBMJOKLZVVHEDHQZZTNXOKMXPIUSDAJAVZJCLRPUZXJCPQACNGVWVQTYWOWLPDXASRZUVHUGVMUXJQKEFZGEXMMNGTHNMFYPYWYKGOFKCKQHTDOPRYSQBRSRHRTNHJTVHLIUAXWBHUGDEFQBTRDXOFOSSULSOIMVCCCATDUDRASELLGGWBWBJZFPRMNTBXPYSQELDCAWEPMXNAIACIDFZEWRIV");
    msg.type = 24U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.910990844452);
    msg.setSource(42206U);
    msg.setSourceEntity(60U);
    msg.setDestination(54821U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.401297572363);
    msg.setSource(6330U);
    msg.setSourceEntity(246U);
    msg.setDestination(5790U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.110326760268);
    msg.setSource(58659U);
    msg.setSourceEntity(187U);
    msg.setDestination(942U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.659712437569);
    msg.setSource(59997U);
    msg.setSourceEntity(74U);
    msg.setDestination(55132U);
    msg.setDestinationEntity(67U);
    msg.sys_name.assign("HZAAHOKQANWROQSERMLQRFTNWCUFZSGOVGVTZSYKTOBHDZZSXBGRTWUEZDLTOQQYXCPEHTUMQLJCBHEIIPLWXFHCUIMROMWJWXGLZNCADHTGRXFMYMYIURIDDDPMNCXBFOHXCKUWVFDLIPIYPVRNXSBVBKLAWKGFCFJBVGEJYYQSMTLSKPGAAJEJJLTIEGSNGNVQPQOCPIKBSWWNXOAUUKUQBVEBRDSPMAYVZDUDOXER");
    msg.sys_type = 140U;
    msg.owner = 2211U;
    msg.lat = 0.0703998923243;
    msg.lon = 0.548128550833;
    msg.height = 0.362194839437;
    msg.services.assign("YIRTBDUCLXZCZXPYVQPZFKEID");

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
    msg.setTimeStamp(0.530770454667);
    msg.setSource(55370U);
    msg.setSourceEntity(254U);
    msg.setDestination(7988U);
    msg.setDestinationEntity(42U);
    msg.sys_name.assign("BWHWDNVITWQMZDXRQPCGXJRSAVHIGQJKRTVFOYARZTAQQCTOEHATSWMVRYXXHZJGJVRWEQTYWCJGNOVIKXSSEBCNSSZJNOEYGUUXGOPCMAOUHAPL");
    msg.sys_type = 19U;
    msg.owner = 61864U;
    msg.lat = 0.559456803126;
    msg.lon = 0.512300091529;
    msg.height = 0.915026518489;
    msg.services.assign("NKTNVCHGLWFMIHCRIEEKYBZYACSNELFAQAUJFQKURNMDKBYOVTHGOJPKWDUAMCSVDFDXTBPLHCZPZVELASOWIEPXGNABCZOKRKLICUBRWSSYDROBNNYMSVTZGIFMHJXNEQTIZMHURYZIRJUOAQGTRWYSEMVBJPCSEQYQJIXDBPA");

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
    msg.setTimeStamp(0.830948189805);
    msg.setSource(65453U);
    msg.setSourceEntity(7U);
    msg.setDestination(45461U);
    msg.setDestinationEntity(175U);
    msg.sys_name.assign("WGWPKFHBOGAFJKDUTNWCEACENCNXQVVCMUAQBTGZZWCAJRMVQOJQVNRSESZLYJWZSWIEKXHPJQVQYGFZSYBNDWQKPWPURYTNUMGDGZDHRYBOFHFSPMXZOSJCDJFVIUFVQZEWJXYBLYTRSFPMOLAMBVHAUIHKAXYTSXUTYLKRBKUHTUXSBPDHXOEITIIRJMQRXCVHYPZGIBECTC");
    msg.sys_type = 32U;
    msg.owner = 54686U;
    msg.lat = 0.639817409851;
    msg.lon = 0.985536582284;
    msg.height = 0.651511585916;
    msg.services.assign("QXVVSKTZRMDNEXTEJCWINXJWWLTPUSKJWXDQRVLQRFQPNGFOCIYQCGLUZIBZEOJBNWCYCYQFPBBBNXHYCBTEWUAOASLOLZYRPCDGAKMXHITLLWDMGSCXBEEBRAXHNAGKJOCCYKVKSWJXDMPNHHEFDFJPSHHKUVADVJZXBGLUTMRQPOZHKMVIMEWGEIAYR");

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
    msg.setTimeStamp(0.191602355651);
    msg.setSource(26461U);
    msg.setSourceEntity(71U);
    msg.setDestination(40655U);
    msg.setDestinationEntity(137U);
    msg.service.assign("MZWUYRLHTFJFWHVMNTANUNFTTIAEUUIBBOSIDMKFSEXQZCZQODTILULFQJPWRICFZJPIUYKTXDFNQVXERVQVIKBTXCLMPHGJZOKQBSKRTGXHXMGIQHOKVPYRJNYBWVUKKHPCBREGLFAJFDFGWWCHGPSJEDSDEBOANKDRVTOULMPHYGYNKRYRDZCNMMXLBAVIOZLCEWGEYZSJIEQWPHUTJ");
    msg.service_type = 163U;

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
    msg.setTimeStamp(0.690986946557);
    msg.setSource(56756U);
    msg.setSourceEntity(70U);
    msg.setDestination(45586U);
    msg.setDestinationEntity(159U);
    msg.service.assign("KQFINHTXYSSRZBXJZBURPWWSHXMWJFLVDDDHFDNIKVZTMWFULTRBLVQNEUCKJHORGYSAIGKHLFIJKVRVDICXYC");
    msg.service_type = 70U;

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
    msg.setTimeStamp(0.224066291008);
    msg.setSource(48815U);
    msg.setSourceEntity(136U);
    msg.setDestination(2581U);
    msg.setDestinationEntity(197U);
    msg.service.assign("ORVQIIIPKTZHRSEYWCUXFBIWPDNZ");
    msg.service_type = 122U;

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
    msg.setTimeStamp(0.676914786276);
    msg.setSource(26441U);
    msg.setSourceEntity(197U);
    msg.setDestination(10120U);
    msg.setDestinationEntity(67U);
    msg.value = 0.0461288419474;

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
    msg.setTimeStamp(0.0294694310481);
    msg.setSource(5439U);
    msg.setSourceEntity(215U);
    msg.setDestination(18011U);
    msg.setDestinationEntity(17U);
    msg.value = 0.782401467615;

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
    msg.setTimeStamp(0.887116422134);
    msg.setSource(65472U);
    msg.setSourceEntity(241U);
    msg.setDestination(37548U);
    msg.setDestinationEntity(6U);
    msg.value = 0.525313801867;

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
    msg.setTimeStamp(0.331952733027);
    msg.setSource(32808U);
    msg.setSourceEntity(146U);
    msg.setDestination(17272U);
    msg.setDestinationEntity(154U);
    msg.value = 0.458638639308;

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
    msg.setTimeStamp(0.2199791175);
    msg.setSource(56864U);
    msg.setSourceEntity(39U);
    msg.setDestination(11259U);
    msg.setDestinationEntity(163U);
    msg.value = 0.936104402697;

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
    msg.setTimeStamp(0.638842933053);
    msg.setSource(60402U);
    msg.setSourceEntity(10U);
    msg.setDestination(6744U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0714696193397;

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
    msg.setTimeStamp(0.569012477243);
    msg.setSource(13334U);
    msg.setSourceEntity(191U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(50U);
    msg.value = 0.889239195289;

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
    msg.setTimeStamp(0.591513809133);
    msg.setSource(29247U);
    msg.setSourceEntity(244U);
    msg.setDestination(38170U);
    msg.setDestinationEntity(62U);
    msg.value = 0.254861941894;

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
    msg.setTimeStamp(0.421299190725);
    msg.setSource(26374U);
    msg.setSourceEntity(227U);
    msg.setDestination(11719U);
    msg.setDestinationEntity(3U);
    msg.value = 0.301535713869;

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
    msg.setTimeStamp(0.65170074676);
    msg.setSource(45495U);
    msg.setSourceEntity(206U);
    msg.setDestination(7844U);
    msg.setDestinationEntity(142U);
    msg.number.assign("DKABJXOXPEFNNHTKRANMCEOUZWOKKSWILUMKADYGSQWMEAIBHYPTDFJIHDHOBTFGRYPQMEVTQSVOZHQGCHVDTMPUYZJDTMEVITBIUQRKYGNJLDPOOWQXOVZRTJDIASLIQSFXGELBVSCPXSTRMYQZMYXIAKLXCUJHZFNSWCGPNCAYJGQNZRUVPXUGYBSBFNUFRVJAWBLAIQLWKZURSYLAHIDTOGUWLZPZCEPCHRJBWNWCJFLEKXCD");
    msg.timeout = 1681U;
    msg.contents.assign("SJXAYBOAIELKJTEPOBKOVRSUHWUWTWYMDTODHMRNRJJBVAUXENLNCIJWJODXABIGOEEPRBRHJDFRYIYYWKJHUFVIAEVKZXEHKLNFHYUTLHJLQFVVXZGVZNVRCLTVYCWPZSQITQXGYSGQUFOARUYSBOVM");

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
    msg.setTimeStamp(0.90622527852);
    msg.setSource(50766U);
    msg.setSourceEntity(59U);
    msg.setDestination(59587U);
    msg.setDestinationEntity(31U);
    msg.number.assign("QINPAHPFMNVYOJPMJLIMPTCIKYQCYBLXHZSLKCTXNKQDTHRRJSATNPFWHXDKHMGZPXYBRPEIGSVFAGONDVBEXOWIGQEMLUEJLDATUCMWRVUAWUKJZNYIQUGNJBDJENRRQLVZWEGCCYOMVSPXCTBCLUPSDDLSZVJHUYUSYBERFNGKWXDUTYBFOMBUWAHQXWSKZLAKLWVDWIZSMNAIQCA");
    msg.timeout = 61309U;
    msg.contents.assign("AKDQDSYYJZINUJGBDTYLPWSYVWCSZGGCCXAULQWJMCSEPUXHCGVLINERFAQAMZIDYETWFVCFHPKZGKRDAXQVLRTFGMFYJIRTNXQAGXZNLHXRIPBWTPDMIJCZFFIRSEHNQWOEKQTDGNYURJOPPWMEMBCO");

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
    msg.setTimeStamp(0.449869722171);
    msg.setSource(61551U);
    msg.setSourceEntity(8U);
    msg.setDestination(7793U);
    msg.setDestinationEntity(77U);
    msg.number.assign("ZYTJPXYQJCGLVWXVMOBXPDLPLJUQRVSWYXYFEDGSXHSVSIOHWZOAOIPGZMCWGCZITKVKOPMIPYBV");
    msg.timeout = 43050U;
    msg.contents.assign("WDSWLJTDWDFUFNJXOXFHGGHZQ");

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
    msg.setTimeStamp(0.677739671706);
    msg.setSource(33544U);
    msg.setSourceEntity(75U);
    msg.setDestination(34857U);
    msg.setDestinationEntity(31U);
    msg.seq = 1703320502U;
    msg.destination.assign("ZMZBBVLBTQBFVQDDTLWWSAEVRRPVFWIDLUNRXVEXANTRYCPQTEIUHOHJMEHFSXORAFVLZFAKYOFPOSZQRKKUDQVDEMJDYGSDNKBANGQPINHFTCWXJYIXYMCATNOPPKUWBTJNHKJQCAHOKVRONGICWXTZXEVHZILI");
    msg.timeout = 35612U;
    const char tmp_msg_0[] = {9, -113, -106, 86, 12, -4, -52, -89, 7, 108, 41, 22, 109, 31, 100, 50, -60, -84, -73, -68, 23, -46, -91, -88, 57, -23, 41, 78, 55, 11, 103, 49, 44, 34, -123, -75, -50, 40, -96, -119, -122, -90, -97, 67, 125, -39, -8, 74, 12, 39, 96, -5, 112, -68, 14, -104, -19, 7, -53, 119, 34, 36, 11, -74, 52, 85, 101, 25, -49, -72, 33, 124, -78, -18, 73, 93, -58, -56, 69, 106, -88, -69, -2, 43, -24, -100, 28, -16, 0, -118, 109, -64, -5, -103, -6, -81, -18, -27, -32, -27, 13, 35, 87, 13, -29, -2, -121, -62, 117, 123, 39, -125, 14, -116, -14, -42, -71, 65, 23, 98, 12, 118, -52, 67};
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
    msg.setTimeStamp(0.482964901636);
    msg.setSource(52895U);
    msg.setSourceEntity(171U);
    msg.setDestination(11994U);
    msg.setDestinationEntity(170U);
    msg.seq = 3239547978U;
    msg.destination.assign("FDDCOHJSJVZUFCSBGMOIKNFZDJBHLHQMQKKWXPG");
    msg.timeout = 57758U;
    const char tmp_msg_0[] = {-75, -21, -35, 75, 1, -86, -21, 91, -44, 2, 108, -111, -27, -116, -25, 89, 103, 13, 107, 82, -71, 58, -113, -104, 35, -29, 91, 0, -101, 115, 81, 120, -68, 45, -35, 121, 47, 54, -47, -57, 45, 108, -112, -80, 16, -20, 10, -88, -106, 32, 17, -120, 92, -126, 5, 85, -20, -24, 55, 114, -59, 69, -107, -42, -58, -31, 29, -13, -89, -118, 43, -108, -9, 20, -91, 32, -56, 62, 120, 9, 48, -41, 97, -121, 23, 92, 18, 63, 31, -16, -88, -116, -82, -74, -11, -33, -8, -58, 109, 99, 3, 103, -19, 32, 27, 113, 105, -48, -70, 78, -95, 101, 0, -83, -19, -27, 5, 95, -93, -46, 79, 118, -95, 96, -6, 14, -75, 40, -125, -21, 38, -102, -111, -124, 50, 117, -70, 5, 42, -115, -43, -47, 46, -18, 30, -94, -69, 39, 3, 22, -44, -71, -69, -29, -57, 22, -9, 21, -30, -120, 111, -54, 41, 23, 110, 32, 45, 21};
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
    msg.setTimeStamp(0.274470603092);
    msg.setSource(42939U);
    msg.setSourceEntity(146U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(85U);
    msg.seq = 1614759506U;
    msg.destination.assign("MYIOVYIMZHDLUOMKEQUKGMCKUPPJJJLPLBJVCJDHMIGRAZRVGHSTSNRXHBIWWVGFBPMKXKPETMZKFEXYXVYYQNPUSMEFQCZBGDJARYIBNEBYZUDVEMNJEWKHRGCCUVVPQQLZQKFIQDRAUSXADLJBNZHNILHACCWHSDGEUVBPZI");
    msg.timeout = 24018U;
    const char tmp_msg_0[] = {95, -30, 4, -64, -56, -110, -127, 38, 122, 19, -98, -58, 101, -118, -100, 59, 102, 59, -127, -100, 45, 7, -108, 120, -78, -29, 108, -91, -96, 59, 50, -62, 39, 102, 30, 90, 41, 125, -23, -102, 110, -15, -118, -39, 57, 85, -3, -104, -22, 13, -16, 112, -54, -76, -88, -44, 52, 55, -120, -81, -8, 112, -7, -105, -72, 54, -85, -59, 34, 89, 51, -71, -63, 4, -106, -125, 93, -119, 125, 106, -98, 54, -45, -74, -25, 23, 108, -82, 43, 120, -108, -91, 88, 108, -62, -45, -115};
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
    msg.setTimeStamp(0.674755250248);
    msg.setSource(45045U);
    msg.setSourceEntity(217U);
    msg.setDestination(25007U);
    msg.setDestinationEntity(131U);
    msg.source.assign("PJQEKNUFRQUXZBSNSZCZZRCHFABOYDYZCSTPGRINGDLAGLYYFREHPTKXGMLIKKVOQMQEGIEFQQVWLDOXVNIAHPTTLYFHWRJUOMIUHCNJFSDAMZZADPHOGAXMBCKAPNUYMNJWDYTECDSFVJTUIMCESJU");
    const char tmp_msg_0[] = {78, 31, -71, 8, -49, -61, 57, 111, -14, 84, 33, 105, -105, -42};
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
    msg.setTimeStamp(0.514454592796);
    msg.setSource(11572U);
    msg.setSourceEntity(143U);
    msg.setDestination(37033U);
    msg.setDestinationEntity(190U);
    msg.source.assign("RLRIOQGUMBFGTJTDCAVZNCYCPIRMEHUWLLDGKXLVYKRBVSWYXPBTVPWWPONJRNCAIANFZIPTETIRJHUFQLFUWLUIMGIFEYNMGZSGXKALIFKHCJXHFKYSSXAOTUAOSLOVHNPBQOZKLZBPSUWUZKYLQEXJFFCWOJHNTRPCBGTCJVYMEIQXAAUFGMQDEXQDCZCRZJSYVHSEZXRDXOYODEZBDATQJBVNMM");
    const char tmp_msg_0[] = {87, -53, -77, -16, -50, 72, -52, 14, -125, -33, -118, -49, 82, -109, 122, 32, -3, 111, -90, 124, 84, 27, 101, -57, 89, -114, -106, -74};
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
    msg.setTimeStamp(0.62496227319);
    msg.setSource(13131U);
    msg.setSourceEntity(164U);
    msg.setDestination(2312U);
    msg.setDestinationEntity(198U);
    msg.source.assign("JWPLMDMQUSBUGWMSPXWDVSAJBQFLCSZVWCAOWTEORNZMRNPCZYKQBHJVHDHAWRTPYVJVQYKEHYCBUUB");
    const char tmp_msg_0[] = {95, -7, -125, 113, -23, 57, 116, -86, 79, 102, -113, -44, -98, 67, 20, -30, -113, -111, -27, -58, 70, 87, -16, -82, 82, -55, 23, 61, 19, -17, 47, 87, 110, 54, 37, -31, -51, 2, 105, -5, 114, 51, -75, -45, -128, -92, -128, -38, -42, 0, 64, 98, 48, 45, 88, -43, 101, -68, -117, -93, 75, 95, -54, -117, -18, -57, 3, -102, 41};
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
    msg.setTimeStamp(0.900614097722);
    msg.setSource(41588U);
    msg.setSourceEntity(155U);
    msg.setDestination(32149U);
    msg.setDestinationEntity(61U);
    msg.seq = 610973040U;
    msg.state = 42U;
    msg.error.assign("UVXGVNXXHOHXJRCFFRFDVMCXVFKXDHKRNEASAQWSOLSHHJKIZLXEWDKYABSIYLJXCQVXKWRBVBMLUKEBCIUZCDDIFPLMYTIGVZPAPWZWTUUQNOTBARAEGTTQMQAOYIQZEUSCHZDGKSGPPFDSACLQNUVYYMAGJWNRNFRKWIMVTFHZMKEBBZRJPJE");

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
    msg.setTimeStamp(0.314200229466);
    msg.setSource(15682U);
    msg.setSourceEntity(188U);
    msg.setDestination(40032U);
    msg.setDestinationEntity(102U);
    msg.seq = 3284304725U;
    msg.state = 90U;
    msg.error.assign("IFCSCVBQAQSRHXNJPIGLLEIVLBFQTWDWYIRJKKADMZMVSFOHUBZVEMKZBHCGUXOIOQBOUXPUPMTDWZEYAOTQCIRBNYVRFXMMKPGYXFACZ");

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
    msg.setTimeStamp(0.411193585047);
    msg.setSource(640U);
    msg.setSourceEntity(195U);
    msg.setDestination(8733U);
    msg.setDestinationEntity(90U);
    msg.seq = 4274669717U;
    msg.state = 223U;
    msg.error.assign("TCCVTNBNZVYUDLVVMWADFHUUGYPTFRPLEXSOWBYRNQMQCGRAEVUHXQAQJKEZSDMYGPBQJFDYGLBBNMKDIWPGHWAEXFRILKLWWLXNOHAFIZLFIBRMODMNVTBWCQNMGIYKACAYCKREXVXZFHUEXOIKKZZHTWEJPIWGLOTVSHNNOFQCTJNGEZMZUDJVHSBPJRAXFXBIQQTUSJAPVCSZKIJOSREBHYYSCOXSDTYOGJEAMDCDIGPPKKMRTUFOLQRJ");

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
    msg.setTimeStamp(0.0468181563319);
    msg.setSource(54041U);
    msg.setSourceEntity(187U);
    msg.setDestination(40201U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("XMGLWTUWLEKQOPMRFEPNIGADJLFNEBXWSQGFXL");
    msg.text.assign("HJYVHERKCCMHBAKIEFOHWIDMABGYKSFKOYGTXRMEIUVVTZHSBHNXXXTLSTBCOMRJLNTTNKUUXKQVFLYVLVJDGQALCMLEMEQGPUUVTQKZGSSTIWFJKPHRBEMWRHWMNBWIOMOCXRWDPFBPGTFWVQCWALFSYNZIIDJZZVZKDLAIHD");

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
    msg.setTimeStamp(0.0407609741417);
    msg.setSource(14202U);
    msg.setSourceEntity(197U);
    msg.setDestination(14437U);
    msg.setDestinationEntity(230U);
    msg.origin.assign("EOJNUJGJSAUUIBKCZGPDMJGQDUSWXCZMTLZVAHTEVNWDMCPLHVSOUXDLOQXXFHEJJZOWVNUCUMJEFQKITNHWPN");
    msg.text.assign("NEFHVYWUJDLGODJSYXOJVBNDJYIGSSEORMQLKIEHHQQGEKBMAOZRZNNPRTCCAKJXZDQMFMWDERVWSFBQBOZEYVVQTRWSOGQXPAPNACGDFGPCULTXYUHTTLZUUTFR");

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
    msg.setTimeStamp(0.0937236567302);
    msg.setSource(25666U);
    msg.setSourceEntity(225U);
    msg.setDestination(45163U);
    msg.setDestinationEntity(238U);
    msg.origin.assign("LFWJBCIVFXXXQAJLZNIUGWKIPAFQBDBODNLNBMJUOVAVDGZOJDZJXQSYYDIVGEKNBTJAYIYEQMFMRFNXVIPAEKRTWWSXKROEUXHNSLHCIDSWZUWGKYKXCLZTPOWGNEZMACMCUFDAQHOYZJEHASTTLRODSMVDNUEQOILVPSPUAPPTKMRUHMHPGHSDPGXBUQRRRYVLKZRHHQTWIOGSITLBWBFZQCJTKNRTNJBFCOZECBEGWQMKAFYCF");
    msg.text.assign("ELKBDMZLENCSRUOGRESJPGEAXAXJDBSKZQMGSBYJBUHHHEZWLGCRWZSUUCXSBDQGNXOYP");

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
    msg.setTimeStamp(0.877349099478);
    msg.setSource(44860U);
    msg.setSourceEntity(199U);
    msg.setDestination(44405U);
    msg.setDestinationEntity(47U);
    msg.origin.assign("YPVTRQESOWFTAJYHJKPMCDGVQOOXOSTKWYTXAYDSJINMWTIXDEZLBKWFNMCUTHJSRJCIKGVCNXJMUBMKIZZLADHHKSWZGLLPZUGVZIKBFBVPIIKIMED");
    msg.htime = 0.711518244256;
    msg.lat = 0.215719315567;
    msg.lon = 0.495354636859;
    const char tmp_msg_0[] = {7, 53, 62, -77, -27, -108, 39, 45, 52, 62, -49, 63, -65, 9, 3, 94, -121, -80, 78, 97, 73, 6, -84, -59, -5, -115, -109, -80, -65, 2, 38, -62, 118, -26, 51, 47, -59, -123, -103, 51, 112, -97, -97, 52, -35, -82, 76, -73, 39, -37, 56, -104, -4, -98, -74, -58, -45, -90, 26, -81, 83, -61, 1, -40, -82, -108, 86, -21, -81, -33, 103, 111, -55, 73, 75, 77, 117, 49, -21, 19, -119, 87, 80, 54, 79, 58, -110, -65, -1, -20, -25, -48, 24, -52, -42, -98, -116, 124, 33, 71, -49, 123, 89, -94, 66, -18, -11, -24, 58, 82, 51, 65, -24, 6, -75, -63, 86, -88, -46, -108, -89, 99, -34, -97, 118, 87, 118, -37, 46, 100, 92, -98, 24, -70, -34, -128, 91, 124, 8, 5, 12, 19, -27, 80, -98, 60, 77, 83, -20, 120, 98, -28, -58, -98, 123, -49, -117, -116, 30, 12, -35, -79, 105, -124, 52, -93, -110, 61, -1, 70, 40, -22, 42, -111, 9, -46, -31, 8, -22, -85, 48, 121, -65, 83, -23, -4, -92, 36, -47, -34, -36, -61, -99, 36, 89, 112, -47, -2, -9, 83, 83, 86, 116, 50, 45, 30, 70, 39, 69, 94};
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
    msg.setTimeStamp(0.977083229544);
    msg.setSource(46818U);
    msg.setSourceEntity(154U);
    msg.setDestination(11461U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("LPFWUZLYFUFOXWOLHIYRYKVOWBSCAOHTAWRTGECNPMXLKIWHDKCQRKUDRNADBLVNTJENTXQLCRKDTBSUPRKBGLCCJQEVMJDFSYBMELPIZIZBHPSAMXNZHOGVTRVKMGJQUWVALIUZKESPPEZQMESNPQSVJPTUOTJYSIFVZBIGCKMVGUDEOPEDMUQMFAXXDJ");
    msg.htime = 0.630678718941;
    msg.lat = 0.81287089051;
    msg.lon = 0.0368977196067;
    const char tmp_msg_0[] = {-89, -44, 18, -22, 51, 35, -64, 6, 53, 28, -117, -22, 73, 58, -19, 21, 67, 80, -121, -61, 74, 115, 28, 37, 34, 109, -56, -81, -1, -42, 81, -81, 96, -8, -57, 81, 106, -9, 58, 14, -86, -82, 51, 66, -62, 23, 125, 111, 79, -39, 124, -56, -78, -7, -27, -78, 99, 65, -14, -29, -42, 84, 63, -82, 105, -15, 43, -105, -82, 57, 98, 76, -15, 35, -39, 34, 56, -6, -96, -31, 10, -78, 78, 40, -118, -95, -59, -84, -24, -66, -82, -4, -68};
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
    msg.setTimeStamp(0.430998827008);
    msg.setSource(50538U);
    msg.setSourceEntity(87U);
    msg.setDestination(3898U);
    msg.setDestinationEntity(39U);
    msg.origin.assign("FTNVBHPEDDBPKDYQJGVWZTFYZHHFNUJ");
    msg.htime = 0.190592427808;
    msg.lat = 0.139018314676;
    msg.lon = 0.287467859445;
    const char tmp_msg_0[] = {118, -35, -11, -22, -111, -14, -14, 26, -42, -39, -84, -123, 48, -124, 109, 99, 4, -97, -104, -55, -43, -118, 114, 56, 90, 36, 12, 21, -78, -91, -117, 70, 89, 53, 74, -123, 40, -33, 61, 57, 69, 103, -78, -108, 9, -120, -62, -70, 102, 17, -113, 80, 10, -117, 93, 67, 51, -123, -27, 126, 68, 110, -41, 42, 48, -92, 42, -35, 120, 36, -95, 26, -112, -76, -102, -37, -23, 122, 5, -58, -56, -111, 31, 102, -119, -45, -84, -40, -67, -99, 7, 125, 13, -65, -34, -112, 63, -88, 13, -36, -102, 126, -19, -67, 123, -13, 78, -13, -28, -27, -80, 15, -39, -114, 43, 65, 1, 21, 73, -20, 44, 56, 18, -40, 67, 62, -46, 102, -101, 34, 12, 111, 46, -115, 78, -82, 58, -35, 87, 68, 42, -78, 99, -9, -71, 2, 48, -61, -40, 63, -95, 116, 81, -19, 102, -9, -128, -101, -125, -81, 41, -115, 125, -34, -42, 60, 104, 14, -92, -67, 30, 109, 101, 120, -125, 65, 38, 98, 85, 32, -53, -75, 29, -44, -59, 96, -121, -81, 20, -67, -65, 110, -18, -46, 18, -54, -46, -118, -22, 99, -31, 113, -101, 102, 88, 38, -87, -63, -109, -61, -74, 45, -106, 75, -10, 47, -91, 68, 98, 67, 37, -98, -59, -124, -68, -101, -7, -82, -19, -119, 76, 21, 36, 57, -6, -26, 2, -111, 122, -71, -110, 98, -101, 49, 49, 57, 52, -96, -5};
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
    msg.setTimeStamp(0.397125300533);
    msg.setSource(35037U);
    msg.setSourceEntity(40U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(197U);
    msg.req_id = 20226U;
    msg.ttl = 11105U;
    msg.destination.assign("TNAYILDIUXNYJIDRKGCYOPCHFRMMMVBLRSOFEUTBFWMOIZGCVQXIUFGGHSOGQKBPXYEDJMTFVJAQBMANRHYXZHDWWFCVXDGQWTRWPHDKTSXJZYYOZRURKIIJCHRAOPUKKSDPMTENCGSK");
    const char tmp_msg_0[] = {42, 76, 115, 22, -5, 106, 17, 32, -122, 89, 88, -44, 95, 28, 35, 55, 16, 101, -98, 103, -38, 29, 56, 35, -97, 56, 61, -106, -13, -118, -9, -113, -3, -86, -104, -112, 2, 120, 121, -77, 67, -89, 100, 30, -79, 84, -37, -16, 117, 84, 29, -28, 7, -85, -52, -66, -32, -87, 99, -50, -19, -40, -44, -3, -96, -100, -87, -100, -126, -51, -44, -17, -76, -24, 53, 22, 121, -97, -123, -31, -48, -10, -25, -21, -95, -2, 6, -127, 93, 62, -19, -122, 99, 96, -83, 110, 125, 91, -15, -128, -71, -89, 71, -1, -60, 11, 24, 74, 31, 112, -123, -116, 18, -57, -73, -53, 112, 62};
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
    msg.setTimeStamp(0.994248792944);
    msg.setSource(14679U);
    msg.setSourceEntity(19U);
    msg.setDestination(29690U);
    msg.setDestinationEntity(205U);
    msg.req_id = 55593U;
    msg.ttl = 51534U;
    msg.destination.assign("PDSWMSDBJZFKHEKJKIYKNWLCRWQEVJMPNQARGOPVCMHVOCCRUFGBVBXQDOSXGCGYUKYJFGEIPFIFONTVWCQJWSKUTLIMROOAALXLOFHFWGCTCNVENBZQTEVIAJAAVETLGKUYIOEKDMZESHPNUBAXTXPBZVPWCMS");
    const char tmp_msg_0[] = {12, 3, -92, -124, 121, -44, 91, 101, 116, -29, -23, -9};
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
    msg.setTimeStamp(0.208571760191);
    msg.setSource(40254U);
    msg.setSourceEntity(99U);
    msg.setDestination(27423U);
    msg.setDestinationEntity(64U);
    msg.req_id = 51148U;
    msg.ttl = 45060U;
    msg.destination.assign("OTDCBDVBIJFVRFMUUDQKXPCCFMRTAODTPLAAOLHNABTOLSXDXCTGWEFJKHAR");
    const char tmp_msg_0[] = {54, 95, 32, 89, 52, -6, -45, 82, 59, -4, 125, -110, 84, 71, 46, 74, -26, 41, 118, 106, 63, -122, 6, -53, -7, 67, -76, -61, 28, 106, -75, -77, -63, 35, -12, 42, 103, -9, -3, 115, 54, -118};
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
    msg.setTimeStamp(0.57670628681);
    msg.setSource(23963U);
    msg.setSourceEntity(40U);
    msg.setDestination(30293U);
    msg.setDestinationEntity(223U);
    msg.req_id = 32810U;
    msg.status = 123U;
    msg.text.assign("QCXGGLLAXBTDGZVHBJWAISNWFDEDRGDPVKDCKREMWSQZYRPXSKEPVCXEJGSTBZXFQNVTLZYNLJKLIAIESBBLHZFQPOOEIUWOFWEETOUGNDTEGYAWLNAIDZHCYYCQBLVAHNTJWYEYFBKUAOCMHSSUUHDTJUAVNCSRMYJTFVXRGJMHVNUIMKPVMIQGJSPOQSUWOMJAR");

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
    msg.setTimeStamp(0.583356873486);
    msg.setSource(45216U);
    msg.setSourceEntity(39U);
    msg.setDestination(20084U);
    msg.setDestinationEntity(227U);
    msg.req_id = 8177U;
    msg.status = 113U;
    msg.text.assign("PABGKXDGJFELLDZKWOWZPEEXEJMXQGWYZVJOXTJNVXDBSCTZDYIBYKULZBEMQKDCCJGXBOJXNBF");

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
    msg.setTimeStamp(0.643220142249);
    msg.setSource(32378U);
    msg.setSourceEntity(17U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(153U);
    msg.req_id = 62177U;
    msg.status = 9U;
    msg.text.assign("UVLTQPRQGWLSIECEKOCOXRQKZFWRLGZNLRYNQVDULDCVHCPVOBDSBDXSC");

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
    msg.setTimeStamp(0.38521103342);
    msg.setSource(20059U);
    msg.setSourceEntity(43U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("JFVTHGYAIATEDZRGJJDRUDWCGXUCHBTLTKTGYDAJHSALFUZFHYDHTTYBDAXURORVSBPDKZPMKHFNVOBMZOWEVWCEIQKPCMQQTEPUPCNMMEINSERICPBKQFMWLLXPQNQRPOSIWNFYZUEXANVDQS");
    msg.links = 448134333U;

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
    msg.setTimeStamp(0.119236195214);
    msg.setSource(61145U);
    msg.setSourceEntity(101U);
    msg.setDestination(2248U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("ASVOIHKFXFOWUNOBXNLZHYFJARTAGHTIZIYCVESYFDYUHFCGVMLNVEZERZPXCMLCAOOSAUITCKGXATGEGWHMIHQBZXVNUOXNWZGEWXVCDAWIGDALMQSPMRNELYUTPVRTSZMCRPQHTZGPZPPWTQJCRVRLAUBRVDEJKINWSQLOTJYBHUPFGFQXR");
    msg.links = 2841396478U;

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
    msg.setTimeStamp(0.879514586477);
    msg.setSource(10493U);
    msg.setSourceEntity(9U);
    msg.setDestination(43548U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("YJKXKRTEHOHJDATFUZHHASPGWLEVCIFOVXEQCTLBYWSNNLCEOONINCBLKAYMKQSCOUXZGPGUCJRAKXAGNEDAXZOMPITVBJGLJ");
    msg.links = 2675696341U;

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
    msg.setTimeStamp(0.353934795443);
    msg.setSource(31110U);
    msg.setSourceEntity(173U);
    msg.setDestination(10373U);
    msg.setDestinationEntity(39U);
    msg.groupname.assign("KVVYFJVRFVZGORSPZOLGCIXWIYNQWCHRINOXDFWCOWVGBYQKRYHXLHWIPALCOEUBDBAGAQSMHHTZEOINFPKVLDYIMPSMZRCMMNATJTTFKMJJMKJHGDWQKSSULJJYHXZQJTAMBETRBCQTYEDOLBHIFZIDSBIEUUSRBNXUXQXJYHDFTWLRENTANWAEFQKUALRSBXGDUZAMOIPACRGPLOKPWFVSDCPOUTYQGUWKGNNEXDBELZUHQZVZJ");
    msg.action = 135U;
    msg.grouplist.assign("YLRKFCOGOLZSMCTDCGKWVZQCUFLWBQLZUDNGBYIAKTZDANSGVONVQJYRTOVSQIRXFAOBSJFYBAMGQZUSJTSHOJVRPPPBGCEOKSFJEHEWNUTGMKEVWUGWXELJXNJXSPOUJALLUTZXFAXZPNMIIHIBGQNWMCVA");

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
    msg.setTimeStamp(0.211568811655);
    msg.setSource(59059U);
    msg.setSourceEntity(186U);
    msg.setDestination(19851U);
    msg.setDestinationEntity(15U);
    msg.groupname.assign("GDJTSCZUJTFTODROYQVEIUWWSKRPBXZFJDFGMSYRDCYLHRVTSPVFPUHEBQMBFMERLOKGEYXDJYCIAAJHHDXAXUHGEZYWUWPBGCPIXBZCFKRJBLJVMZDUIZUOVL");
    msg.action = 96U;
    msg.grouplist.assign("ZKBGGTKAWOYLIDNDCQBWQENTQCIRLYSUCQJXKWOHFWCYKUCBUPLRHVNRHMDRJEJVHPHDYRSOYFSXTTEAHMKWMLQUPFGTKBVCTJDWXZJNVZZRZIAMVLCCEGMSPEEXIXDCTAVYROMGQQTGVRXOZHTMYDJUGOBZNLRSTIBDWLDJHYXQHPZMBOFIHDBFWKKMVRKVASNAFUJGUAWJLNSAISLSNVGKIOJFFOPYPEFQXSPUBBECGZXEAUF");

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
    msg.setTimeStamp(0.987590828389);
    msg.setSource(55414U);
    msg.setSourceEntity(222U);
    msg.setDestination(4534U);
    msg.setDestinationEntity(84U);
    msg.groupname.assign("ZFRVKUHZLYWAPVURTQPRMGOYFMPLVJNUO");
    msg.action = 37U;
    msg.grouplist.assign("VOKUKOLJXQHPJTGJTCZNSWTBQSMUFYDOQMMWFDUIEQVQDXGJRZNNOJNNXUGMGLLZWNBYRZHRFTIBOHGUEAPGQSDSJIEDDBXJKOEKANBAPWKCMPTYILHHQSVFSEYTVXEUCZCUDVFITOZIEPQRZNUKKCNMFFDLAYGZAPGEAUFOGHLJBWQHJAKYACMPMSYPBLZBVCXUDWOQHRMSVXWARREHYCORBJZVYIBWEYMKLHR");

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
    msg.setTimeStamp(0.576568703594);
    msg.setSource(61379U);
    msg.setSourceEntity(239U);
    msg.setDestination(56610U);
    msg.setDestinationEntity(135U);
    msg.value = 0.975616179885;
    msg.sys_src = 48968U;

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
    msg.setTimeStamp(0.285968967136);
    msg.setSource(42885U);
    msg.setSourceEntity(170U);
    msg.setDestination(17121U);
    msg.setDestinationEntity(138U);
    msg.value = 0.894544761401;
    msg.sys_src = 47092U;

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
    msg.setTimeStamp(0.919480274826);
    msg.setSource(10160U);
    msg.setSourceEntity(202U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(16U);
    msg.value = 0.630038971522;
    msg.sys_src = 57257U;

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
    msg.setTimeStamp(0.139890452446);
    msg.setSource(22272U);
    msg.setSourceEntity(112U);
    msg.setDestination(59687U);
    msg.setDestinationEntity(65U);
    msg.value = 0.859898437398;
    msg.units = 247U;

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
    msg.setTimeStamp(0.411511232789);
    msg.setSource(7731U);
    msg.setSourceEntity(4U);
    msg.setDestination(43799U);
    msg.setDestinationEntity(10U);
    msg.value = 0.472388244379;
    msg.units = 61U;

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
    msg.setTimeStamp(0.228632329881);
    msg.setSource(54390U);
    msg.setSourceEntity(147U);
    msg.setDestination(28677U);
    msg.setDestinationEntity(243U);
    msg.value = 0.969021806259;
    msg.units = 91U;

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
    msg.setTimeStamp(0.681013453289);
    msg.setSource(10364U);
    msg.setSourceEntity(55U);
    msg.setDestination(17913U);
    msg.setDestinationEntity(198U);
    msg.base_lat = 0.786487354654;
    msg.base_lon = 0.0996157072731;
    msg.base_time = 0.814417083989;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 41015U;
    tmp_msg_0.priority = 4;
    tmp_msg_0.x = 21533;
    tmp_msg_0.y = -15009;
    tmp_msg_0.z = 28298;
    tmp_msg_0.t = 10362;
    IMC::GetParametersXml tmp_tmp_msg_0_0;
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
    msg.setTimeStamp(0.432483540676);
    msg.setSource(20640U);
    msg.setSourceEntity(9U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.114625290773;
    msg.base_lon = 0.8326407559;
    msg.base_time = 0.456521168016;

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
    msg.setTimeStamp(0.854543399428);
    msg.setSource(4446U);
    msg.setSourceEntity(40U);
    msg.setDestination(48821U);
    msg.setDestinationEntity(221U);
    msg.base_lat = 0.740117503297;
    msg.base_lon = 0.154709451335;
    msg.base_time = 0.293717452747;

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
    msg.setTimeStamp(0.426391677805);
    msg.setSource(65385U);
    msg.setSourceEntity(214U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.882778577984;
    msg.base_lon = 0.0852390420058;
    msg.base_time = 0.0670533255286;
    const char tmp_msg_0[] = {-117, -119, -15, 94, -34, -32, -58, -104, -51, -114, 32, -32, -123, -56, -121, -9, -46, 5, 121, -1, -105, -103, -51, -65, 33, -65, -43, -114, 125, -6, 43, 23, 92, 38, 28, -2, 21, -55, -59, 58, 53, 90, 111, -42, 111, -23, 75, 7, -33, -83, -7, -80, 109, -95, 47, -67, -72, 97, 106, 24, 7, -29, 81, 120, 122, -48, 9, -124, -19, 48, 87, -3, -74, 94, 123, 109, 23, -93, 83, -28, 43, 40, 82, 108, -50, -26, 90, -107, 51, -2, -8, 72, 85, -107, -42, -111, -56, -100, -92, -15, 120, -127, 96, 46, -14, 11, 72, -118, -15, -64, 67, 85, 65, -37, -89, 51, -32, 15, 71, 111, -38, -24, -5, 36, -120, -92, -108, 121, 88, 91, -24, 5, 21, -60, 84, 86, -30, -126, 23, -83, -16, -105, 9, -55, -10, -115, 56, 90, -6, 39, -126, -92, -68, 16, 107, 18, 126, -50, -91, -105, 116, -121, 1, -2, 66, -33, -104, 49, -63, 72, -66, -121, 11, -28, -32, -3, 110, 61, 36, 38, -71, 55, 70, -122, -102, -109, -68, -7, 79, -90, -47, -39, 5, -49, 36, 5, -106, -32, -17, 67, -4, -61, -101, 10, 24, 90, -41};
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
    msg.setTimeStamp(0.564121831313);
    msg.setSource(1114U);
    msg.setSourceEntity(52U);
    msg.setDestination(30756U);
    msg.setDestinationEntity(219U);
    msg.base_lat = 0.380485474819;
    msg.base_lon = 0.931013412908;
    msg.base_time = 0.630558512848;
    const char tmp_msg_0[] = {111, -53, -59, 15, -20, 74, 54, 73, -48, -111, 109, 10, -41, 10, -37, 31, 41, -19, -6, -29, 19, 38, -100, -58, -125, 61, -109, -35, 21, 22, 57, -38, 51, -61, 103, -5, -44, -80, 74, 28, 58, 82, -64, 101, -16, -99, -47, -106, 103, -24, 32, 100, 51, 39, -85, -18, -83, -107};
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
    msg.setTimeStamp(0.706719528265);
    msg.setSource(5308U);
    msg.setSourceEntity(15U);
    msg.setDestination(15465U);
    msg.setDestinationEntity(123U);
    msg.base_lat = 0.848283223998;
    msg.base_lon = 0.375976268917;
    msg.base_time = 0.766979859003;
    const char tmp_msg_0[] = {12, 99, 9, 122, 74, -122, 14, 8, 18, 21, 107, 118, -122, -92, -29, -114, 19, 87, -87, -44, 94, 93, -2, 4, 55, -45, 115, 3, 89, -28, 44, -22, 16, 107, -121, -126, -29, -35, -76, -8, -8, 7, -82, -19, -7, 60, 1, -96, -34, -105, 114, 114, -11, -76, -49, -88, 73, -18, 26, -2, -61, -124, 10, -97, 68, -63, 96, -45, -80, 13, 90, -56, -67, -40, 10, -29, -13, 56, -105, -69, -19, -23, -57, -76, -32, 105, -80, 30, -28, 76, 78, -96, 75, 112, 77, 95, 11, 16, 89, 54, 22, -97, 77, -115, 44, -16, 68, -38, 32, -96, 98, 54, -28, 50, 41, -118, 50, -86, 32, 94, 56, 77, -52, 114, 8, -112, -123, 114, -79, -101, 17, -119, -93, 107, -114, 18, 36, 17, -42};
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
    msg.setTimeStamp(0.564002857945);
    msg.setSource(43635U);
    msg.setSourceEntity(42U);
    msg.setDestination(52005U);
    msg.setDestinationEntity(10U);
    msg.sys_id = 34670U;
    msg.priority = 18;
    msg.x = -15580;
    msg.y = 16974;
    msg.z = 606;
    msg.t = -9221;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.752556983994);
    msg.setSource(13669U);
    msg.setSourceEntity(229U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(42U);
    msg.sys_id = 23315U;
    msg.priority = -83;
    msg.x = 26006;
    msg.y = -11929;
    msg.z = -25359;
    msg.t = -16039;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("RRBTCOICAVFBUQBTLWFPJ");
    tmp_msg_0.type = 93U;
    tmp_msg_0.op = 125U;
    tmp_msg_0.group_name.assign("OIZUMLAOYVLUVZHKBDXXZMBBBLERRFWQKWKNKVYJWRCICHYIJXPTQJEEPTJRCXTNTSCIPDREPHPCOYQFMQHFXBCHGJILNTXHOTFMUGDYPDXFBKQMFJQZDBSRCVWUSBCALGECWAKLUODXPGWBMN");
    tmp_msg_0.plan_id.assign("QOIJMVUHPBAAASDELCGHTRCYUYNYXCMZIZXMUDXNYNRBMDSGEVLPUYRKKUAORPJGZWJEVCSGHWXGBLTIMXLOLOHHDOAKKINLAYFSFNLWUFBMYDJUPPICKZABXTSDKCXKSYJVJJVZLCOFYESUWGHTDTBSPVYQCMQRWWEOZOBXITQROEIJAVOXNILFGCRFNPHULVHPMFRNPWEIMEQNDVZEQHCGPTGAWQQQTNS");
    tmp_msg_0.description.assign("CBVOXPXDDNHIWGZJBXGEUPMJTIWTBOVLNKCJBSGUMZPWDZXYRSQSEPHJAXPEONWTIQSUHOOIDQMAUZAMKRFOGBDKVJPENMFOJAHCIEQDF");
    tmp_msg_0.reference_frame = 118U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 580U;
    tmp_tmp_msg_0_0.off_x = 0.455126887633;
    tmp_tmp_msg_0_0.off_y = 0.0660730488635;
    tmp_tmp_msg_0_0.off_z = 0.877091752512;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.381690558916;
    tmp_msg_0.leader_speed_min = 0.808720598322;
    tmp_msg_0.leader_speed_max = 0.951500497542;
    tmp_msg_0.leader_alt_min = 0.654187377845;
    tmp_msg_0.leader_alt_max = 0.32858473053;
    tmp_msg_0.pos_sim_err_lim = 0.686201855385;
    tmp_msg_0.pos_sim_err_wrn = 0.934984862813;
    tmp_msg_0.pos_sim_err_timeout = 6587U;
    tmp_msg_0.converg_max = 0.201228037582;
    tmp_msg_0.converg_timeout = 3915U;
    tmp_msg_0.comms_timeout = 14715U;
    tmp_msg_0.turb_lim = 0.319888924534;
    tmp_msg_0.custom.assign("OISSCLIYDWYZOMSDEJEQ");
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
    msg.setTimeStamp(0.788254398244);
    msg.setSource(50116U);
    msg.setSourceEntity(173U);
    msg.setDestination(13907U);
    msg.setDestinationEntity(159U);
    msg.sys_id = 12429U;
    msg.priority = -97;
    msg.x = -23311;
    msg.y = -440;
    msg.z = 7705;
    msg.t = 27237;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("VYCOGULIAWDJJGLMISHEUAZVTKXUJFDWZOIZHAGKPQHTGFEETMCFLXEBXFYWHLKNWDXBDOSYSXQCRYRYJIRILYEMTFZVFFQNGGHLITTCRHENRCBAJQGNDQHPZJNIUVXOPUBBWJHKSPUODITBVAPUUBAUVNBTHKWAMZWMNRQKNP");
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
    msg.setTimeStamp(0.342109139967);
    msg.setSource(23052U);
    msg.setSourceEntity(60U);
    msg.setDestination(7316U);
    msg.setDestinationEntity(246U);
    msg.req_id = 10888U;
    msg.type = 218U;
    msg.max_size = 24459U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.295261686896;
    tmp_msg_0.base_lon = 0.302918444188;
    tmp_msg_0.base_time = 0.828026750125;
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
    msg.setTimeStamp(0.655567466199);
    msg.setSource(19603U);
    msg.setSourceEntity(6U);
    msg.setDestination(7905U);
    msg.setDestinationEntity(45U);
    msg.req_id = 33148U;
    msg.type = 56U;
    msg.max_size = 63584U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.418333986214;
    tmp_msg_0.base_lon = 0.478708080431;
    tmp_msg_0.base_time = 0.0889266985602;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 61830U;
    tmp_tmp_msg_0_0.priority = -31;
    tmp_tmp_msg_0_0.x = 7627;
    tmp_tmp_msg_0_0.y = -29135;
    tmp_tmp_msg_0_0.z = 30844;
    tmp_tmp_msg_0_0.t = 25748;
    IMC::Sms tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.number.assign("FHALOESUFXDDVBVBTHAMRPAGOSUIJTGBPDOMXIBRISDEBNRMCYKTZGLCRYUYSYWKDZKZZNWKOJFMMHPRZQXQQENBAIYBJ");
    tmp_tmp_tmp_msg_0_0_0.timeout = 57850U;
    tmp_tmp_tmp_msg_0_0_0.contents.assign("HEUVUGBGGAFXTTUDWRWJUAOWZHCEPKZDKAUKSPMNPDNNIXSTSBMDDVMJWIMNLIJFGZSNUBIKULWTUSORJLNGKAHYACQTSABMFLXROSQHBWYCSFRDCZROI");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.507937875423);
    msg.setSource(6396U);
    msg.setSourceEntity(20U);
    msg.setDestination(4734U);
    msg.setDestinationEntity(240U);
    msg.req_id = 11102U;
    msg.type = 74U;
    msg.max_size = 39799U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0802576831262;
    tmp_msg_0.base_lon = 0.887004904206;
    tmp_msg_0.base_time = 0.987871337761;
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
    msg.setTimeStamp(0.258208143049);
    msg.setSource(65021U);
    msg.setSourceEntity(196U);
    msg.setDestination(34783U);
    msg.setDestinationEntity(246U);
    msg.original_source = 46463U;
    msg.destination = 8342U;
    msg.timeout = 0.0155378212616;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.613550622677;
    tmp_msg_0.roll = 14808U;
    tmp_msg_0.pitch = 1540U;
    tmp_msg_0.yaw = 39217U;
    tmp_msg_0.speed = -31611;
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
    msg.setTimeStamp(0.59217451882);
    msg.setSource(18186U);
    msg.setSourceEntity(221U);
    msg.setDestination(51824U);
    msg.setDestinationEntity(201U);
    msg.original_source = 26442U;
    msg.destination = 1767U;
    msg.timeout = 0.899260425424;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.527803259121;
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
    msg.setTimeStamp(0.962908023919);
    msg.setSource(33682U);
    msg.setSourceEntity(64U);
    msg.setDestination(7453U);
    msg.setDestinationEntity(89U);
    msg.original_source = 56886U;
    msg.destination = 10801U;
    msg.timeout = 0.722012483023;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.74028700064;
    tmp_msg_0.converg = 0.273659535664;
    tmp_msg_0.turbulence = 0.177743747785;
    tmp_msg_0.possimmon = 253U;
    tmp_msg_0.commmon = 249U;
    tmp_msg_0.convergmon = 199U;
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.928653518415);
    msg.setSource(36799U);
    msg.setSourceEntity(229U);
    msg.setDestination(36771U);
    msg.setDestinationEntity(40U);
    msg.id = 175U;
    msg.range = 0.163277218344;

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
    msg.setTimeStamp(0.853811763368);
    msg.setSource(17913U);
    msg.setSourceEntity(42U);
    msg.setDestination(30424U);
    msg.setDestinationEntity(221U);
    msg.id = 215U;
    msg.range = 0.868803606268;

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
    msg.setTimeStamp(0.991010487819);
    msg.setSource(28068U);
    msg.setSourceEntity(214U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(231U);
    msg.id = 54U;
    msg.range = 0.646125869484;

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
    msg.setTimeStamp(0.560638234823);
    msg.setSource(10644U);
    msg.setSourceEntity(135U);
    msg.setDestination(59241U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("GGGCHKYKFJCWSHIJPCVNBZUORLSLNUGJOAVHWTQDEATDITXXDMFZREMJZMZDOQBXVMDUUWIOBVWLCYKILCWQXAPKZEPQUMXTFIAXSGVVBSFFYNVPJYEJZQSSFEAHXLXZKYAKUQDVFTZCEUHZRKIWLPFRITOLRYPCRIGNHLWSVU");
    msg.lat = 0.502224306889;
    msg.lon = 0.92131439595;
    msg.depth = 0.066555461231;
    msg.query_channel = 17U;
    msg.reply_channel = 33U;
    msg.transponder_delay = 239U;

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
    msg.setTimeStamp(0.85317191743);
    msg.setSource(1041U);
    msg.setSourceEntity(237U);
    msg.setDestination(37707U);
    msg.setDestinationEntity(120U);
    msg.beacon.assign("ADJDSAWJIOOZGJUXZATGYCRTZOJQBMKAFVPYUKECL");
    msg.lat = 0.0919882094822;
    msg.lon = 0.162280235889;
    msg.depth = 0.496007871886;
    msg.query_channel = 208U;
    msg.reply_channel = 53U;
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
    msg.setTimeStamp(0.510072386846);
    msg.setSource(52509U);
    msg.setSourceEntity(34U);
    msg.setDestination(65061U);
    msg.setDestinationEntity(54U);
    msg.beacon.assign("YUBRFFKCKLHEPQGVPHSX");
    msg.lat = 0.658936934982;
    msg.lon = 0.306086991629;
    msg.depth = 0.175323149823;
    msg.query_channel = 151U;
    msg.reply_channel = 67U;
    msg.transponder_delay = 236U;

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
    msg.setTimeStamp(0.445349591114);
    msg.setSource(21319U);
    msg.setSourceEntity(87U);
    msg.setDestination(47127U);
    msg.setDestinationEntity(251U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.465974705249);
    msg.setSource(1006U);
    msg.setSourceEntity(216U);
    msg.setDestination(25349U);
    msg.setDestinationEntity(34U);
    msg.op = 44U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BUROBCJFKQWLUDZPZTAMCFTKSNASYXGSOR");
    tmp_msg_0.lat = 0.909082391567;
    tmp_msg_0.lon = 0.84243736075;
    tmp_msg_0.depth = 0.80607283553;
    tmp_msg_0.query_channel = 160U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 143U;
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
    msg.setTimeStamp(0.806123013002);
    msg.setSource(41016U);
    msg.setSourceEntity(56U);
    msg.setDestination(12726U);
    msg.setDestinationEntity(82U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.101080068165);
    msg.setSource(2240U);
    msg.setSourceEntity(171U);
    msg.setDestination(25055U);
    msg.setDestinationEntity(70U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 8U;
    tmp_msg_0.quality = 171U;
    tmp_msg_0.reps = 55U;
    tmp_msg_0.tsize = 189U;
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
    msg.setTimeStamp(0.00691377658929);
    msg.setSource(28972U);
    msg.setSourceEntity(93U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(248U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.731599058265;
    tmp_msg_0.units = 141U;
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
    msg.setTimeStamp(0.807285569804);
    msg.setSource(52139U);
    msg.setSourceEntity(51U);
    msg.setDestination(43665U);
    msg.setDestinationEntity(31U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("IBTIDMXGMHSRQJZBOLTWMKRWRIDWIXKGKLPSLYDAYMMFSMDXBNSWBDVGEKPPSJJBYFKXCLZEVVEMNEAOZPPOCCLCCZJXVBQVQNJLDCUYIXAGZEXROZJSEYDSZTJROUGCAGCAHXKKJHMVBWYWPGRBCBVFUFFMWAYUTRQTPZUFUAHTKKTONLYYWUHZADGONVGQXTAFIKUHAWSVPDHHLFQWTOLPNJQOCLNXREVEZDYJTSNIRHMNPNRFBIEEHUQUQ");
    tmp_msg_0.text.assign("FLZDDDRQZYWINPNMOCLNDJGLHVWWGABPJZFNKQFKBSGBUXRIESSUVUQUJXZIPBIXREWZTVUKMFHISXLHLTIRNFHEDCVDJRCMQUNQHPFZJHEPTCTKDA");
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
    msg.setTimeStamp(0.120146841614);
    msg.setSource(6548U);
    msg.setSourceEntity(95U);
    msg.setDestination(54710U);
    msg.setDestinationEntity(225U);
    msg.op = 18U;
    msg.system.assign("XATXUNWIKGHOLSJJBLACNPYDBFWBTSZIDCCRWDRECXOAPHWGYQQQIFEUTZABHEDVIMTIKNTVVSSKYEUQEEGQSCAYCGOJQBBVMJJMSMUWJULRMOPKGYTIUHGCHLDSPZQTOBFQPTKLGEVKFRJZPFNVNTYYXLKKAWXXVUQHSJGINRICMXZSOYFCNTRGLFEVOBWYHUMHLGPKVDJDZHRRWMZYAZFLEI");
    msg.range = 0.480415163521;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 226U;
    tmp_msg_0.reason = 86U;
    tmp_msg_0.value = 0.306123862214;
    tmp_msg_0.timestep = 0.936698052757;
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
    msg.setTimeStamp(0.226168115866);
    msg.setSource(39017U);
    msg.setSourceEntity(82U);
    msg.setDestination(32380U);
    msg.setDestinationEntity(123U);
    msg.op = 60U;
    msg.system.assign("UYHIQTQIZXJLNAUBQPTIDZWQKKBCNJIMJPSKALQDBMVYIZEKKMOFNNXKESHMXYGBPMBBWAMZFRJTKNKPDTUXWWNEHQGCLMDAJZOJJEFNXUFUXPUFYHWCRTOCMLFDOLRYOFXHBHGMGCNGIFPXAYRBEDCEOL");
    msg.range = 0.383513689024;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("NNRECORJDZRQJUAQMTJAPGUGCEIKLCPXYEUVAVQRQYMMHFEWBFGUNZBWTOCEBYZCTIVAGOZGWURNKMWNOUBOLZMOUPMCAKXHBSPOTDTXIHSVPXLUIYAGIVQDPFVQDHTLKYMAJZTCYKTDMXSJFLFJLFRBGKQJILGRCGYYZPLSBNRMBNWWUFFXDDAEVCO");
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
    msg.setTimeStamp(0.344896446739);
    msg.setSource(16939U);
    msg.setSourceEntity(176U);
    msg.setDestination(46150U);
    msg.setDestinationEntity(158U);
    msg.op = 168U;
    msg.system.assign("CCEGRMNFUVFXWFBTOKBYBXYGZOSNTMYDLWFNKIYAPHASPVVYNHFAUNINQKHYEPJQZJZKOZDXDPVLJUMADNZMRYMVGKKORSCUJIXWCLQTJQDBUGLGWXZGEBHESVLVDQAZRRVGTUURLAORTTISTQBOZLRHPYKCZSLINJBTWUXMJMRDPDGNQGUFIMPHEAWVSCZICIWAF");
    msg.range = 0.187588074354;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 162U;
    tmp_msg_0.time_remain = 0.944753104751;
    tmp_msg_0.sched_time = 0.556842286513;
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
    msg.setTimeStamp(0.844197398635);
    msg.setSource(35671U);
    msg.setSourceEntity(55U);
    msg.setDestination(42616U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.806555845791);
    msg.setSource(17813U);
    msg.setSourceEntity(80U);
    msg.setDestination(28236U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.71519229924);
    msg.setSource(11027U);
    msg.setSourceEntity(71U);
    msg.setDestination(3914U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.824285485761);
    msg.setSource(38920U);
    msg.setSourceEntity(114U);
    msg.setDestination(64172U);
    msg.setDestinationEntity(117U);
    msg.list.assign("GEJVMPVOUEUMIVRLZPAKRUMVKVQZYPQPBHXXCHINJFRWKLVZURCEAAWPSSBCXGHUAYVLZIGSOSCWQBNCYYSJRLGJXYRIHTAKHBTBARLMOWNHILIDUCDPRUZSQPIAILPZTZFVCBDNNDGKCYAVZFHMSDESFEODGJFDMOEOCBFUOXTMKTMRM");

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
    msg.setTimeStamp(0.919416368588);
    msg.setSource(4922U);
    msg.setSourceEntity(98U);
    msg.setDestination(7619U);
    msg.setDestinationEntity(220U);
    msg.list.assign("OVQJUCKUTFBZRTWYIVJXCBPYZNPZYSEBWIZEARKCXBZAZSIGFFPWNDATGOOSAOHTKSQRQLFOWTBRNOIYSNSFHMQRTJCAYIFLWCLWYPULWKHVMEKIKHQGPAPLCMMRVCVURLXDGGJACPXNPJAJMHFKOQZTCQCYZSKKRVFEBZGVNDDWNPXK");

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
    msg.setTimeStamp(0.0802072638711);
    msg.setSource(53971U);
    msg.setSourceEntity(196U);
    msg.setDestination(8332U);
    msg.setDestinationEntity(1U);
    msg.list.assign("WZGBRRVBYLDIKKCFHHAZXWGUHRCLPTIOEWTIKLVSZNTQUUOPHOBGMHBXR");

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
    msg.setTimeStamp(0.44770563549);
    msg.setSource(8082U);
    msg.setSourceEntity(130U);
    msg.setDestination(39318U);
    msg.setDestinationEntity(119U);
    msg.peer.assign("NXNXSDNPZFNJVOZQKTCFIDAZTUJWDEICCULLGZVOGNTWQUMEPZRFKQFWSYOVMKHDTYDFROSCPEHIQNFXAPWVYJWKPMBXKMNRGOYKHJYQGXZEBUZTXPTUYMSLWIYIVEDEJXGJHBBJMJYNWTCGSLLVZICIDGJHULKXZHQIRLCMUNBUHHYFDIZRWDKGPFVLEQABSMQOVRVGMWEPSDSPNCRIBGLHEKFAUTRMHLYCBA");
    msg.rssi = 0.107500065273;
    msg.integrity = 9676U;

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
    msg.setTimeStamp(0.415259634469);
    msg.setSource(34908U);
    msg.setSourceEntity(159U);
    msg.setDestination(3190U);
    msg.setDestinationEntity(204U);
    msg.peer.assign("THLZNJRWAJIIPDRBRFHSLXDMEFOPXMALRQBPOFTHMVMUXGLLWZAKUGHKDEWIZYFTEAOJJEYGSMBCUGIFUYKGQINYRLZOPHZUSEIWRSSNQAQSVSMXUWLXVQUYDTTOCTBGDWKHTKICDNYLTSWCHFNCBQMPRCPKYDIYFFLEBXQQBVARJNDAOKBYNHOOEURWJHUAESCMDWANWSGVCGQXBIAPJZIGJBKJUORYFZVFQGVOLETMHTCEVNZ");
    msg.rssi = 0.540278809972;
    msg.integrity = 26163U;

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
    msg.setTimeStamp(0.0421458766381);
    msg.setSource(22231U);
    msg.setSourceEntity(72U);
    msg.setDestination(37857U);
    msg.setDestinationEntity(17U);
    msg.peer.assign("CMNOWESBUPYLUDQEADWGUWSXFWXQFEZUGSDYJRPNPY");
    msg.rssi = 0.0737111039717;
    msg.integrity = 46165U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.977942772767);
    msg.setSource(29180U);
    msg.setSourceEntity(60U);
    msg.setDestination(25363U);
    msg.setDestinationEntity(16U);
    msg.value = -16007;

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
    msg.setTimeStamp(0.554620094042);
    msg.setSource(46767U);
    msg.setSourceEntity(18U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(123U);
    msg.value = 21195;

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
    msg.setTimeStamp(0.904568318515);
    msg.setSource(4000U);
    msg.setSourceEntity(11U);
    msg.setDestination(44714U);
    msg.setDestinationEntity(177U);
    msg.value = -9604;

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
    msg.setTimeStamp(0.0642888903574);
    msg.setSource(44279U);
    msg.setSourceEntity(238U);
    msg.setDestination(13192U);
    msg.setDestinationEntity(120U);
    msg.value = 0.44206488334;

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
    msg.setTimeStamp(0.897592449272);
    msg.setSource(33814U);
    msg.setSourceEntity(192U);
    msg.setDestination(31101U);
    msg.setDestinationEntity(251U);
    msg.value = 0.807636634487;

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
    msg.setTimeStamp(0.363048298767);
    msg.setSource(6199U);
    msg.setSourceEntity(78U);
    msg.setDestination(35038U);
    msg.setDestinationEntity(205U);
    msg.value = 0.85042405849;

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
    msg.setTimeStamp(0.481614351825);
    msg.setSource(51347U);
    msg.setSourceEntity(185U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(156U);
    msg.value = 0.235927777097;

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
    msg.setTimeStamp(0.0659249499033);
    msg.setSource(52850U);
    msg.setSourceEntity(113U);
    msg.setDestination(53481U);
    msg.setDestinationEntity(44U);
    msg.value = 0.675997901588;

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
    msg.setTimeStamp(0.785840989984);
    msg.setSource(49028U);
    msg.setSourceEntity(132U);
    msg.setDestination(61781U);
    msg.setDestinationEntity(119U);
    msg.value = 0.965419625671;

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
    msg.setTimeStamp(0.195581491533);
    msg.setSource(30555U);
    msg.setSourceEntity(229U);
    msg.setDestination(64618U);
    msg.setDestinationEntity(27U);
    msg.validity = 63082U;
    msg.type = 48U;
    msg.utc_year = 61504U;
    msg.utc_month = 15U;
    msg.utc_day = 165U;
    msg.utc_time = 0.312697958087;
    msg.lat = 0.457827625565;
    msg.lon = 0.00602241376334;
    msg.height = 0.497183779349;
    msg.satellites = 99U;
    msg.cog = 0.834462998331;
    msg.sog = 0.356097547321;
    msg.hdop = 0.228104351459;
    msg.vdop = 0.16240273034;
    msg.hacc = 0.885273381798;
    msg.vacc = 0.585699209977;

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
    msg.setTimeStamp(0.95430299514);
    msg.setSource(22939U);
    msg.setSourceEntity(111U);
    msg.setDestination(51971U);
    msg.setDestinationEntity(156U);
    msg.validity = 64254U;
    msg.type = 148U;
    msg.utc_year = 22664U;
    msg.utc_month = 186U;
    msg.utc_day = 184U;
    msg.utc_time = 0.883849770221;
    msg.lat = 0.760915256961;
    msg.lon = 0.884783717186;
    msg.height = 0.952297919237;
    msg.satellites = 27U;
    msg.cog = 0.165757302089;
    msg.sog = 0.0274675643833;
    msg.hdop = 0.571986886737;
    msg.vdop = 0.368805876752;
    msg.hacc = 0.88339515307;
    msg.vacc = 0.0870256247484;

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
    msg.setTimeStamp(0.209908283891);
    msg.setSource(45272U);
    msg.setSourceEntity(136U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(201U);
    msg.validity = 42464U;
    msg.type = 131U;
    msg.utc_year = 4580U;
    msg.utc_month = 182U;
    msg.utc_day = 243U;
    msg.utc_time = 0.565411981267;
    msg.lat = 0.550559740112;
    msg.lon = 0.776237976157;
    msg.height = 0.717550999264;
    msg.satellites = 70U;
    msg.cog = 0.851441571797;
    msg.sog = 0.720945193124;
    msg.hdop = 0.511507164832;
    msg.vdop = 0.494426204991;
    msg.hacc = 0.18898304102;
    msg.vacc = 0.591836859276;

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
    msg.setTimeStamp(0.000321388722345);
    msg.setSource(35022U);
    msg.setSourceEntity(210U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(108U);
    msg.time = 0.703212247655;
    msg.phi = 0.706409960203;
    msg.theta = 0.866448097437;
    msg.psi = 0.361668000692;
    msg.psi_magnetic = 0.107844329012;

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
    msg.setTimeStamp(0.429215957434);
    msg.setSource(1212U);
    msg.setSourceEntity(172U);
    msg.setDestination(15242U);
    msg.setDestinationEntity(171U);
    msg.time = 0.341089375338;
    msg.phi = 0.722074742403;
    msg.theta = 0.277913286048;
    msg.psi = 0.272392045251;
    msg.psi_magnetic = 0.421683739526;

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
    msg.setTimeStamp(0.449105508204);
    msg.setSource(9976U);
    msg.setSourceEntity(219U);
    msg.setDestination(54217U);
    msg.setDestinationEntity(179U);
    msg.time = 0.759076390828;
    msg.phi = 0.349070866112;
    msg.theta = 0.500255090108;
    msg.psi = 0.828097877439;
    msg.psi_magnetic = 0.950224320097;

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
    msg.setTimeStamp(0.601137295868);
    msg.setSource(63162U);
    msg.setSourceEntity(43U);
    msg.setDestination(26065U);
    msg.setDestinationEntity(156U);
    msg.time = 0.291913397585;
    msg.x = 0.187047301678;
    msg.y = 0.916111800216;
    msg.z = 0.2621545081;
    msg.timestep = 0.626871264543;

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
    msg.setTimeStamp(0.206681612619);
    msg.setSource(13744U);
    msg.setSourceEntity(10U);
    msg.setDestination(46446U);
    msg.setDestinationEntity(32U);
    msg.time = 0.290858262921;
    msg.x = 0.815223708487;
    msg.y = 0.949161122742;
    msg.z = 0.322482877846;
    msg.timestep = 0.613149462911;

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
    msg.setTimeStamp(0.284696523935);
    msg.setSource(10763U);
    msg.setSourceEntity(241U);
    msg.setDestination(8084U);
    msg.setDestinationEntity(47U);
    msg.time = 0.119618837761;
    msg.x = 0.429263156279;
    msg.y = 0.54568609789;
    msg.z = 0.708946646587;
    msg.timestep = 0.816071209033;

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
    msg.setTimeStamp(0.369466287268);
    msg.setSource(57449U);
    msg.setSourceEntity(92U);
    msg.setDestination(29486U);
    msg.setDestinationEntity(58U);
    msg.time = 0.515021456989;
    msg.x = 0.90785826057;
    msg.y = 0.859599342835;
    msg.z = 0.699302905398;

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
    msg.setTimeStamp(0.458450621489);
    msg.setSource(42783U);
    msg.setSourceEntity(94U);
    msg.setDestination(25274U);
    msg.setDestinationEntity(232U);
    msg.time = 0.68176892323;
    msg.x = 0.93639498822;
    msg.y = 0.581148675497;
    msg.z = 0.598499257896;

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
    msg.setTimeStamp(0.988030653414);
    msg.setSource(30981U);
    msg.setSourceEntity(122U);
    msg.setDestination(24766U);
    msg.setDestinationEntity(131U);
    msg.time = 0.0830952252952;
    msg.x = 0.953034462142;
    msg.y = 0.710375145176;
    msg.z = 0.0439417013905;

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
    msg.setTimeStamp(0.953713084956);
    msg.setSource(10756U);
    msg.setSourceEntity(165U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(75U);
    msg.time = 0.952336674699;
    msg.x = 0.954402779178;
    msg.y = 0.182824425947;
    msg.z = 0.326163712671;

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
    msg.setTimeStamp(0.966737934467);
    msg.setSource(30047U);
    msg.setSourceEntity(122U);
    msg.setDestination(33754U);
    msg.setDestinationEntity(175U);
    msg.time = 0.955887368885;
    msg.x = 0.395411193168;
    msg.y = 0.951139041234;
    msg.z = 0.400471308051;

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
    msg.setTimeStamp(0.644800884718);
    msg.setSource(1413U);
    msg.setSourceEntity(249U);
    msg.setDestination(46280U);
    msg.setDestinationEntity(163U);
    msg.time = 0.0801157724215;
    msg.x = 0.542721104564;
    msg.y = 0.662013008897;
    msg.z = 0.0464006426202;

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
    msg.setTimeStamp(0.841516082016);
    msg.setSource(59762U);
    msg.setSourceEntity(131U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(115U);
    msg.time = 0.75317698627;
    msg.x = 0.952711770701;
    msg.y = 0.267281017628;
    msg.z = 0.603064549321;

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
    msg.setTimeStamp(0.264246123749);
    msg.setSource(51588U);
    msg.setSourceEntity(67U);
    msg.setDestination(43145U);
    msg.setDestinationEntity(246U);
    msg.time = 0.30150043104;
    msg.x = 0.104752202309;
    msg.y = 0.140459072207;
    msg.z = 0.818464269558;

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
    msg.setTimeStamp(0.683472287219);
    msg.setSource(40001U);
    msg.setSourceEntity(76U);
    msg.setDestination(10542U);
    msg.setDestinationEntity(166U);
    msg.time = 0.373232716402;
    msg.x = 0.710184967238;
    msg.y = 0.16226325448;
    msg.z = 0.359590714588;

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
    msg.setTimeStamp(0.0449115937868);
    msg.setSource(62773U);
    msg.setSourceEntity(170U);
    msg.setDestination(49680U);
    msg.setDestinationEntity(60U);
    msg.validity = 32U;
    msg.x = 0.9253567354;
    msg.y = 0.398107228738;
    msg.z = 0.103834880019;

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
    msg.setTimeStamp(0.578078147616);
    msg.setSource(8321U);
    msg.setSourceEntity(120U);
    msg.setDestination(13729U);
    msg.setDestinationEntity(1U);
    msg.validity = 134U;
    msg.x = 0.650021768315;
    msg.y = 0.535225481941;
    msg.z = 0.992709064136;

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
    msg.setTimeStamp(0.725389763358);
    msg.setSource(13671U);
    msg.setSourceEntity(107U);
    msg.setDestination(57575U);
    msg.setDestinationEntity(39U);
    msg.validity = 219U;
    msg.x = 0.275259822699;
    msg.y = 0.908489482117;
    msg.z = 0.528435762631;

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
    msg.setTimeStamp(0.694935254925);
    msg.setSource(35208U);
    msg.setSourceEntity(38U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(225U);
    msg.validity = 184U;
    msg.x = 0.646675021268;
    msg.y = 0.805904995851;
    msg.z = 0.17565555184;

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
    msg.setTimeStamp(0.514535280223);
    msg.setSource(9417U);
    msg.setSourceEntity(115U);
    msg.setDestination(60150U);
    msg.setDestinationEntity(28U);
    msg.validity = 89U;
    msg.x = 0.206110514487;
    msg.y = 0.875670312942;
    msg.z = 0.281995718346;

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
    msg.setTimeStamp(0.0450786496455);
    msg.setSource(32959U);
    msg.setSourceEntity(125U);
    msg.setDestination(57546U);
    msg.setDestinationEntity(44U);
    msg.validity = 88U;
    msg.x = 0.270123179229;
    msg.y = 0.35702900807;
    msg.z = 0.859013856625;

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
    msg.setTimeStamp(0.893364427295);
    msg.setSource(22953U);
    msg.setSourceEntity(18U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(245U);
    msg.time = 0.382663902737;
    msg.x = 0.792697793824;
    msg.y = 0.73858531237;
    msg.z = 0.596843244276;

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
    msg.setTimeStamp(0.04613300644);
    msg.setSource(49171U);
    msg.setSourceEntity(102U);
    msg.setDestination(2969U);
    msg.setDestinationEntity(97U);
    msg.time = 0.650411666728;
    msg.x = 0.124520731585;
    msg.y = 0.172181103027;
    msg.z = 0.492314105738;

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
    msg.setTimeStamp(0.865682665214);
    msg.setSource(52278U);
    msg.setSourceEntity(16U);
    msg.setDestination(63521U);
    msg.setDestinationEntity(210U);
    msg.time = 0.77068215541;
    msg.x = 0.0940433734151;
    msg.y = 0.646237847429;
    msg.z = 0.552974372394;

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
    msg.setTimeStamp(0.851307681954);
    msg.setSource(53042U);
    msg.setSourceEntity(238U);
    msg.setDestination(41235U);
    msg.setDestinationEntity(245U);
    msg.validity = 38U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.170304019403;
    tmp_msg_0.y = 0.757431310531;
    tmp_msg_0.z = 0.353640979658;
    tmp_msg_0.phi = 0.853818504675;
    tmp_msg_0.theta = 0.624971869742;
    tmp_msg_0.psi = 0.521574810566;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.121752581394;

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
    msg.setTimeStamp(0.133212932007);
    msg.setSource(31423U);
    msg.setSourceEntity(189U);
    msg.setDestination(18552U);
    msg.setDestinationEntity(227U);
    msg.validity = 10U;
    msg.value = 0.19175695544;

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
    msg.setTimeStamp(0.831239227378);
    msg.setSource(35924U);
    msg.setSourceEntity(186U);
    msg.setDestination(54582U);
    msg.setDestinationEntity(92U);
    msg.validity = 195U;
    msg.value = 0.980404162291;

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
    msg.setTimeStamp(0.102875422442);
    msg.setSource(22153U);
    msg.setSourceEntity(122U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(33U);
    msg.value = 0.185498760258;

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
    msg.setTimeStamp(0.943431742543);
    msg.setSource(18752U);
    msg.setSourceEntity(113U);
    msg.setDestination(42782U);
    msg.setDestinationEntity(118U);
    msg.value = 0.930622616095;

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
    msg.setTimeStamp(0.17076598203);
    msg.setSource(47721U);
    msg.setSourceEntity(92U);
    msg.setDestination(40108U);
    msg.setDestinationEntity(183U);
    msg.value = 0.62920296315;

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
    msg.setTimeStamp(0.160867764563);
    msg.setSource(51290U);
    msg.setSourceEntity(203U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(233U);
    msg.value = 0.149086034751;

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
    msg.setTimeStamp(0.717401305466);
    msg.setSource(9236U);
    msg.setSourceEntity(82U);
    msg.setDestination(33602U);
    msg.setDestinationEntity(150U);
    msg.value = 0.533933307534;

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
    msg.setTimeStamp(0.652972322068);
    msg.setSource(11566U);
    msg.setSourceEntity(56U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(154U);
    msg.value = 0.25841611601;

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
    msg.setTimeStamp(0.0941896772309);
    msg.setSource(53981U);
    msg.setSourceEntity(100U);
    msg.setDestination(7869U);
    msg.setDestinationEntity(128U);
    msg.value = 0.880826995892;

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
    msg.setTimeStamp(0.885502716364);
    msg.setSource(52649U);
    msg.setSourceEntity(140U);
    msg.setDestination(5188U);
    msg.setDestinationEntity(229U);
    msg.value = 0.858771527983;

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
    msg.setTimeStamp(0.060581815007);
    msg.setSource(11807U);
    msg.setSourceEntity(157U);
    msg.setDestination(23730U);
    msg.setDestinationEntity(209U);
    msg.value = 0.956590123826;

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
    msg.setTimeStamp(0.351747731102);
    msg.setSource(41718U);
    msg.setSourceEntity(100U);
    msg.setDestination(7817U);
    msg.setDestinationEntity(137U);
    msg.value = 0.266975639741;

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
    msg.setTimeStamp(0.174835783251);
    msg.setSource(56544U);
    msg.setSourceEntity(147U);
    msg.setDestination(3541U);
    msg.setDestinationEntity(117U);
    msg.value = 0.540344629024;

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
    msg.setTimeStamp(0.120645316506);
    msg.setSource(46739U);
    msg.setSourceEntity(58U);
    msg.setDestination(36887U);
    msg.setDestinationEntity(188U);
    msg.value = 0.676305628616;

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
    msg.setTimeStamp(0.989778555705);
    msg.setSource(39457U);
    msg.setSourceEntity(155U);
    msg.setDestination(57598U);
    msg.setDestinationEntity(100U);
    msg.value = 0.257930732379;

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
    msg.setTimeStamp(0.792619262207);
    msg.setSource(63005U);
    msg.setSourceEntity(89U);
    msg.setDestination(15093U);
    msg.setDestinationEntity(144U);
    msg.value = 0.340978700986;

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
    msg.setTimeStamp(0.846953882376);
    msg.setSource(37411U);
    msg.setSourceEntity(5U);
    msg.setDestination(57346U);
    msg.setDestinationEntity(86U);
    msg.value = 0.640410876984;

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
    msg.setTimeStamp(0.537545328846);
    msg.setSource(3780U);
    msg.setSourceEntity(219U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(68U);
    msg.value = 0.423275822443;

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
    msg.setTimeStamp(0.669000180314);
    msg.setSource(36507U);
    msg.setSourceEntity(231U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(226U);
    msg.value = 0.884572042023;

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
    msg.setTimeStamp(0.990632677821);
    msg.setSource(65133U);
    msg.setSourceEntity(159U);
    msg.setDestination(35536U);
    msg.setDestinationEntity(238U);
    msg.value = 0.632489846953;

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
    msg.setTimeStamp(0.892579235508);
    msg.setSource(40193U);
    msg.setSourceEntity(115U);
    msg.setDestination(5087U);
    msg.setDestinationEntity(224U);
    msg.value = 0.0428014912769;

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
    msg.setTimeStamp(0.645542766735);
    msg.setSource(51426U);
    msg.setSourceEntity(50U);
    msg.setDestination(1137U);
    msg.setDestinationEntity(168U);
    msg.value = 0.395950728544;

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
    msg.setTimeStamp(0.0728249095854);
    msg.setSource(58413U);
    msg.setSourceEntity(40U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(54U);
    msg.value = 0.666406592212;

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
    msg.setTimeStamp(0.204523215508);
    msg.setSource(25688U);
    msg.setSourceEntity(245U);
    msg.setDestination(35919U);
    msg.setDestinationEntity(133U);
    msg.value = 0.283031581433;

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
    msg.setTimeStamp(0.638947698298);
    msg.setSource(52035U);
    msg.setSourceEntity(42U);
    msg.setDestination(11797U);
    msg.setDestinationEntity(254U);
    msg.value = 0.382556153077;

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
    msg.setTimeStamp(0.900181941971);
    msg.setSource(49606U);
    msg.setSourceEntity(160U);
    msg.setDestination(36618U);
    msg.setDestinationEntity(215U);
    msg.value = 0.261613211128;

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
    msg.setTimeStamp(0.371009159089);
    msg.setSource(1263U);
    msg.setSourceEntity(65U);
    msg.setDestination(21485U);
    msg.setDestinationEntity(165U);
    msg.direction = 0.534622470262;
    msg.speed = 0.280500260772;
    msg.turbulence = 0.841696114729;

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
    msg.setTimeStamp(0.676805563674);
    msg.setSource(29869U);
    msg.setSourceEntity(20U);
    msg.setDestination(22616U);
    msg.setDestinationEntity(42U);
    msg.direction = 0.203867739061;
    msg.speed = 0.123227261792;
    msg.turbulence = 0.139951210601;

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
    msg.setTimeStamp(0.685491397442);
    msg.setSource(32074U);
    msg.setSourceEntity(217U);
    msg.setDestination(39766U);
    msg.setDestinationEntity(36U);
    msg.direction = 0.128161547072;
    msg.speed = 0.306844164074;
    msg.turbulence = 0.184735374162;

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
    msg.setTimeStamp(0.5200734624);
    msg.setSource(798U);
    msg.setSourceEntity(192U);
    msg.setDestination(41884U);
    msg.setDestinationEntity(18U);
    msg.value = 0.464871260241;

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
    msg.setTimeStamp(0.467047510318);
    msg.setSource(61619U);
    msg.setSourceEntity(227U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(111U);
    msg.value = 0.88389979681;

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
    msg.setTimeStamp(0.579413585202);
    msg.setSource(34966U);
    msg.setSourceEntity(226U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(207U);
    msg.value = 0.519508435848;

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
    msg.setTimeStamp(0.00586443687303);
    msg.setSource(56500U);
    msg.setSourceEntity(171U);
    msg.setDestination(49815U);
    msg.setDestinationEntity(113U);
    msg.value.assign("JWTXBIWCTGDY");

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
    msg.setTimeStamp(0.037942896793);
    msg.setSource(23692U);
    msg.setSourceEntity(117U);
    msg.setDestination(49832U);
    msg.setDestinationEntity(184U);
    msg.value.assign("VRLTBQLXAYGJHASLWMPDDTESRRBIOGNWJHXFQSOTVLAZRFZZYQWQXVONXIGVKRUMFZAMPHFPNLKHUUKCZGYIRVUJDQFHPXUSXDGAQGAUCXLYWRJKDEKVUFKDFIWXSSBHCEMHATLEDOQCTPRITZMWYBVJQEANBSLPCRPIQBZVINTHUEOZHWWOZOFAYWVGTUFYKBYKNBSNPGEJTYAKNIMGOOFMNPGMCJHRKQNPCJCXCLELWDMCEXUOESSVZD");

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
    msg.setTimeStamp(0.008661836875);
    msg.setSource(61379U);
    msg.setSourceEntity(187U);
    msg.setDestination(42396U);
    msg.setDestinationEntity(8U);
    msg.value.assign("VABZTOOORCMZSEYBIQKFXRXTBMCWIMFIBKNIUDEYKOMXUGQASMNJEQAYYQAPWCWPLMTGZEQSRRXXPUOPNJDCOJTEDTNNZHCRVOQDWKSLAPFLHDMHIEHOULLTFVGRIBHQGUSDWPZQHVVVGRXWBJWHUPVQNJBHIUCWVEDPNAWDCEKHFYJTXSKGTYFPUSZORLLULTFKGRXPJKMAYZUFIGYSIKIXTLBJAEKLGDFWODXSCYCVZA");

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
    msg.setTimeStamp(0.982087113273);
    msg.setSource(53365U);
    msg.setSourceEntity(157U);
    msg.setDestination(15790U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {-28, -58, -46, -79, -119, 19, 49, 16, -8, -39, -102, 54, -113, 109};
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
    msg.setTimeStamp(0.368183950946);
    msg.setSource(35626U);
    msg.setSourceEntity(129U);
    msg.setDestination(10032U);
    msg.setDestinationEntity(174U);
    const char tmp_msg_0[] = {122, 61, 103, 117, -98, 80, 29, -114, 58, -54, -21, -122, -92, 120, 85, -86, -115, -62, 31, 45, -121, -47, -25, -47, -32, -118, -9, 9, 78, 11, 71, -88, 3, 27, 115, 32, -51, 52, 102, -88, -102, -89, -108, -54, 95, 96, 69, 83, -21, -127, -89, -38, -62, 113, -33, 33, 67, 94, -121, 115, 48, 76, 44, -25, 21, 98, 58, 63, 119, 102, 115, 103, -96, 101, 31, 20, -60, 7, -28, -70, -121, 81, -33, 16, 17, -69, -82, 21, -24, 63, 86, -96, 39, -18, -53, -88, -102, -20, -74, 1, 44, -22, 3, 6, -79, 34, 115, -69, -49, 12, 113, 124, 11, 22};
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
    msg.setTimeStamp(0.844258583548);
    msg.setSource(25615U);
    msg.setSourceEntity(193U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(106U);
    const char tmp_msg_0[] = {-27, 105, 118, 37, -101, -1, -3, -69, -89, 48, 74, 1, 33, -42, 110, -109, 102, -106, -39, 54, 81, -15, 10, 61, 22, -58, -5, -43, -101, 73, -70, 14, 92, 30, 68, -112, 1, 55, 122, -30, -106, 85, -1, -76, 101, -37, 20, 12, 22, -101, 117, -113, 60, 116, -12, 8, 37, 1, 35, 94, -90, -94, 76, -117, 2, -54, 45, 51, -19, -36, -123, 119, 53, -61, -42, 53};
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
    msg.setTimeStamp(0.848325746387);
    msg.setSource(24211U);
    msg.setSourceEntity(203U);
    msg.setDestination(57276U);
    msg.setDestinationEntity(13U);
    msg.type = 186U;
    msg.frequency = 2447212580U;
    msg.min_range = 50976U;
    msg.max_range = 57925U;
    msg.bits_per_point = 38U;
    msg.scale_factor = 0.166171172805;
    const char tmp_msg_0[] = {-44, -75, -83, 90, -6, -106, 117, -89, -92, 22, 89, -27, 53, -96, 105, 0, 95, -63, -81, -17, 97, -111, 59, 71, 105, 3, 64, 55, -100, 109, -96, 22, -126, 32, -31, -102, -122, -94, -68, -113, 61, -91, -84, 31, -107, 67, -120, -53, 76, 119, -64, -83, 69, 71, -54, -34, 31, 30, 71, 5, -113, 32, -6, 57, -43, -109, -22, -22, 26, 90, 125, 5, -114, 25, -33, 31, -30, 63, 36, 67, 26, -93, 37, -72, 96, -69, 53, -124, -10, 51, 6, 31, 11, 3, 103, -36, 23, -70, 125, -27, -126, 15, -116, 87, 100, -2, -83, -44, 5, 106, -6, 105, 124, 74, -93, 33, -30, -31, 107, -47, 43, 92, 63, 29, -50, -1, 28, 19, 110, 16, 89, -8, 113, 99, 112, -14, -107, 23, -101, 81, -121, -114};
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
    msg.setTimeStamp(0.851139491648);
    msg.setSource(21482U);
    msg.setSourceEntity(120U);
    msg.setDestination(47598U);
    msg.setDestinationEntity(129U);
    msg.type = 218U;
    msg.frequency = 1094903414U;
    msg.min_range = 6070U;
    msg.max_range = 18438U;
    msg.bits_per_point = 188U;
    msg.scale_factor = 0.550781046079;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.777033284533;
    tmp_msg_0.beam_height = 0.739024488871;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-26, -48, -16, -127, -74, -37, 95, -78, -117, 10, -113, -19, -102, 13, -73, -15, 67, -26, -36, 82, 106, 56, 13, 58, -91, -107, -102, -95, -22, 57, 88, 63, -91, 47, 97, 4, 22, 77, 0, -29, -128, 74, 112, 67, -99, -4, 12, -52, 42, 8, -65, 117, 65, -59, 126, -94, 26, -63, 5, -80, 20, 68, -117, 24, -29, -113, -34, -35, 44, -112, -34, 1, 71, -94, 17, 105, -48, -5, -100, 56, -88, -72, 58, -79, 74, 90, -61, -95, 120, -78, -113, -128, -13, 111, 13, -42, -89, -49, -21, -26, 70, 93, 65, -63, -21, -80, -38, 37, 126, -28, 28, -7, -33, 123, -5, 100, -82, 44, 116, -56, -81, -43, -61, -127, 53, 93, 88, 82, -81, -85, -14, -30, -51, -98, -116, -99, 35, 63, 25, -85, -50, -42, 32, -15, 15, -70, -45, 19, -32, 91, 88, -74, -64, -99, -102, 110, 120, -72, -91, 50, 83, -103, -51, -24, -109, 29, -55, 40, -109, -102, -115, 42, 62, 35, -78, 117, 10, -68, 44, 74, 102, -72};
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
    msg.setTimeStamp(0.895526760433);
    msg.setSource(9647U);
    msg.setSourceEntity(197U);
    msg.setDestination(51341U);
    msg.setDestinationEntity(60U);
    msg.type = 243U;
    msg.frequency = 359274356U;
    msg.min_range = 15584U;
    msg.max_range = 58331U;
    msg.bits_per_point = 31U;
    msg.scale_factor = 0.216324439421;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.535712240023;
    tmp_msg_0.beam_height = 0.424551096643;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-73, 0, 12, -110, 21, 63, 27, -49, -37, -10, 105, -95, 42, 47, 29, -107, 111, 99, 20, -1, -90, 84, 68, 7, -44, 6, 83, 92, 10, -68, 67, -86, 55, -113, -17, 115, -43, -26, 122, 40, -40, 103, 102, 40, -57, 10, 64, -113, 97, -76, 59, -80, -6, -107, 6, 47, 42, -18};
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
    msg.setTimeStamp(0.678736883481);
    msg.setSource(53046U);
    msg.setSourceEntity(115U);
    msg.setDestination(35889U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.224229524066);
    msg.setSource(11951U);
    msg.setSourceEntity(183U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.688687609669);
    msg.setSource(56867U);
    msg.setSourceEntity(187U);
    msg.setDestination(28260U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.547826236531);
    msg.setSource(56013U);
    msg.setSourceEntity(50U);
    msg.setDestination(44613U);
    msg.setDestinationEntity(163U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.347724123836);
    msg.setSource(57701U);
    msg.setSourceEntity(131U);
    msg.setDestination(741U);
    msg.setDestinationEntity(93U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.779473260415);
    msg.setSource(23749U);
    msg.setSourceEntity(175U);
    msg.setDestination(247U);
    msg.setDestinationEntity(63U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.938482265326);
    msg.setSource(41262U);
    msg.setSourceEntity(139U);
    msg.setDestination(44724U);
    msg.setDestinationEntity(201U);
    msg.value = 0.445853122684;
    msg.confidence = 0.202595836119;
    msg.opmodes.assign("QVDUJUSFGWLYQMXLMIEGSKCIALRBUQFOJBIZCXRBXQRURRKQYLCKIWVUDKPQMWNXYZVAKXQHLGXSLETJHTZBAOVHOOTRQJTGYRCNLDYPZCHDLWZFOTQTZKOMWPESMWGXFEAHSRUDXSZGDNKFDCXGUPTLAEDLYAJOMVTOZCEIH");

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
    msg.setTimeStamp(0.174858124808);
    msg.setSource(61927U);
    msg.setSourceEntity(79U);
    msg.setDestination(64541U);
    msg.setDestinationEntity(66U);
    msg.value = 0.73063551793;
    msg.confidence = 0.275146878495;
    msg.opmodes.assign("DHQITWTBDGAHSTULUYBKKXVRMCXBVKCBALRPAVJNQXNWHTXYQZFNFXYYKSVRMDFB");

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
    msg.setTimeStamp(0.132534919195);
    msg.setSource(49925U);
    msg.setSourceEntity(59U);
    msg.setDestination(9965U);
    msg.setDestinationEntity(62U);
    msg.value = 0.0315832129875;
    msg.confidence = 0.332585880215;
    msg.opmodes.assign("TDYCVXKCNFCBWPNOL");

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
    msg.setTimeStamp(0.766821293718);
    msg.setSource(6270U);
    msg.setSourceEntity(197U);
    msg.setDestination(30774U);
    msg.setDestinationEntity(179U);
    msg.itow = 3343762640U;
    msg.lat = 0.653090511574;
    msg.lon = 0.428617299762;
    msg.height_ell = 0.877095734141;
    msg.height_sea = 0.515411650025;
    msg.hacc = 0.251247090517;
    msg.vacc = 0.0156225154519;
    msg.vel_n = 0.925887096272;
    msg.vel_e = 0.35845346759;
    msg.vel_d = 0.916468548549;
    msg.speed = 0.0338593996103;
    msg.gspeed = 0.0285068091338;
    msg.heading = 0.494390338699;
    msg.sacc = 0.519924802919;
    msg.cacc = 0.831496954869;

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
    msg.setTimeStamp(0.440869274496);
    msg.setSource(50072U);
    msg.setSourceEntity(134U);
    msg.setDestination(57954U);
    msg.setDestinationEntity(165U);
    msg.itow = 1412483865U;
    msg.lat = 0.580717683844;
    msg.lon = 0.211627758821;
    msg.height_ell = 0.514307863636;
    msg.height_sea = 0.169136568789;
    msg.hacc = 0.24098653408;
    msg.vacc = 0.278557683979;
    msg.vel_n = 0.0932364659006;
    msg.vel_e = 0.396153322552;
    msg.vel_d = 0.199656490915;
    msg.speed = 0.586945486365;
    msg.gspeed = 0.607175465447;
    msg.heading = 0.550371791771;
    msg.sacc = 0.683401208042;
    msg.cacc = 0.581729352201;

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
    msg.setTimeStamp(0.547193292993);
    msg.setSource(58695U);
    msg.setSourceEntity(202U);
    msg.setDestination(38865U);
    msg.setDestinationEntity(119U);
    msg.itow = 3342304005U;
    msg.lat = 0.226119500929;
    msg.lon = 0.747212997488;
    msg.height_ell = 0.153770512639;
    msg.height_sea = 0.886381966222;
    msg.hacc = 0.988776651759;
    msg.vacc = 0.520825188012;
    msg.vel_n = 0.572155125398;
    msg.vel_e = 0.183900121823;
    msg.vel_d = 0.985372345009;
    msg.speed = 0.384364341461;
    msg.gspeed = 0.621403182788;
    msg.heading = 0.141879012369;
    msg.sacc = 0.235026810715;
    msg.cacc = 0.345446597576;

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
    msg.setTimeStamp(0.0870491743958);
    msg.setSource(41051U);
    msg.setSourceEntity(243U);
    msg.setDestination(21193U);
    msg.setDestinationEntity(250U);
    msg.id = 138U;
    msg.value = 0.372859710707;

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
    msg.setTimeStamp(0.285032708979);
    msg.setSource(27509U);
    msg.setSourceEntity(214U);
    msg.setDestination(21157U);
    msg.setDestinationEntity(104U);
    msg.id = 43U;
    msg.value = 0.469553531912;

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
    msg.setTimeStamp(0.136640991537);
    msg.setSource(44564U);
    msg.setSourceEntity(82U);
    msg.setDestination(59983U);
    msg.setDestinationEntity(1U);
    msg.id = 220U;
    msg.value = 0.661082184228;

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
    msg.setTimeStamp(0.773617512506);
    msg.setSource(53682U);
    msg.setSourceEntity(85U);
    msg.setDestination(40199U);
    msg.setDestinationEntity(160U);
    msg.x = 0.276724948454;
    msg.y = 0.497498959377;
    msg.z = 0.626665633773;
    msg.phi = 0.982206335218;
    msg.theta = 0.228614580826;
    msg.psi = 0.529447672635;

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
    msg.setTimeStamp(0.669056102104);
    msg.setSource(57965U);
    msg.setSourceEntity(163U);
    msg.setDestination(57216U);
    msg.setDestinationEntity(50U);
    msg.x = 0.423437297597;
    msg.y = 0.361220834824;
    msg.z = 0.236551127972;
    msg.phi = 0.612960540277;
    msg.theta = 0.364366945002;
    msg.psi = 0.159259072502;

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
    msg.setTimeStamp(0.590576752034);
    msg.setSource(35858U);
    msg.setSourceEntity(241U);
    msg.setDestination(60353U);
    msg.setDestinationEntity(203U);
    msg.x = 0.784537330836;
    msg.y = 0.0494213574602;
    msg.z = 0.560908757774;
    msg.phi = 0.915376314678;
    msg.theta = 0.451080402151;
    msg.psi = 0.188434986804;

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
    msg.setTimeStamp(0.460301032257);
    msg.setSource(35401U);
    msg.setSourceEntity(183U);
    msg.setDestination(60279U);
    msg.setDestinationEntity(117U);
    msg.beam_width = 0.168007673864;
    msg.beam_height = 0.345251762394;

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
    msg.setTimeStamp(0.66787361261);
    msg.setSource(14714U);
    msg.setSourceEntity(114U);
    msg.setDestination(34836U);
    msg.setDestinationEntity(76U);
    msg.beam_width = 0.397279299236;
    msg.beam_height = 0.617945854138;

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
    msg.setTimeStamp(0.749746512851);
    msg.setSource(22697U);
    msg.setSourceEntity(12U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(240U);
    msg.beam_width = 0.205511870533;
    msg.beam_height = 0.777063883333;

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
    msg.setTimeStamp(0.292453525068);
    msg.setSource(42928U);
    msg.setSourceEntity(32U);
    msg.setDestination(36419U);
    msg.setDestinationEntity(64U);
    msg.sane = 135U;

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
    msg.setTimeStamp(0.623927857377);
    msg.setSource(7499U);
    msg.setSourceEntity(228U);
    msg.setDestination(45563U);
    msg.setDestinationEntity(42U);
    msg.sane = 116U;

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
    msg.setTimeStamp(0.339331756439);
    msg.setSource(16709U);
    msg.setSourceEntity(92U);
    msg.setDestination(35832U);
    msg.setDestinationEntity(67U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.203096397167);
    msg.setSource(25755U);
    msg.setSourceEntity(88U);
    msg.setDestination(12502U);
    msg.setDestinationEntity(111U);
    msg.value = 0.794968594459;

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
    msg.setTimeStamp(0.420150593984);
    msg.setSource(41757U);
    msg.setSourceEntity(183U);
    msg.setDestination(20945U);
    msg.setDestinationEntity(228U);
    msg.value = 0.466373993511;

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
    msg.setTimeStamp(0.579595518058);
    msg.setSource(45834U);
    msg.setSourceEntity(149U);
    msg.setDestination(51770U);
    msg.setDestinationEntity(67U);
    msg.value = 0.742564987043;

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
    msg.setTimeStamp(0.520525551284);
    msg.setSource(25876U);
    msg.setSourceEntity(114U);
    msg.setDestination(8242U);
    msg.setDestinationEntity(23U);
    msg.value = 0.444732940751;

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
    msg.setTimeStamp(0.17994732228);
    msg.setSource(63458U);
    msg.setSourceEntity(225U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(65U);
    msg.value = 0.304797723711;

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
    msg.setTimeStamp(0.919686178941);
    msg.setSource(48232U);
    msg.setSourceEntity(155U);
    msg.setDestination(13721U);
    msg.setDestinationEntity(6U);
    msg.value = 0.515879837048;

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
    msg.setTimeStamp(0.986264779599);
    msg.setSource(55894U);
    msg.setSourceEntity(207U);
    msg.setDestination(65257U);
    msg.setDestinationEntity(84U);
    msg.value = 0.188698065891;

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
    msg.setTimeStamp(0.641925462518);
    msg.setSource(24703U);
    msg.setSourceEntity(180U);
    msg.setDestination(15240U);
    msg.setDestinationEntity(197U);
    msg.value = 0.632756399108;

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
    msg.setTimeStamp(0.709436383219);
    msg.setSource(56648U);
    msg.setSourceEntity(116U);
    msg.setDestination(32167U);
    msg.setDestinationEntity(180U);
    msg.value = 0.84266137641;

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
    msg.setTimeStamp(0.533638319451);
    msg.setSource(13170U);
    msg.setSourceEntity(48U);
    msg.setDestination(28265U);
    msg.setDestinationEntity(247U);
    msg.value = 0.382082014999;

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
    msg.setTimeStamp(0.942697521883);
    msg.setSource(51684U);
    msg.setSourceEntity(232U);
    msg.setDestination(18604U);
    msg.setDestinationEntity(103U);
    msg.value = 0.382635888581;

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
    msg.setTimeStamp(0.273244667995);
    msg.setSource(36276U);
    msg.setSourceEntity(194U);
    msg.setDestination(50591U);
    msg.setDestinationEntity(171U);
    msg.value = 0.848302484245;

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
    msg.setTimeStamp(0.569109730237);
    msg.setSource(16609U);
    msg.setSourceEntity(39U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(94U);
    msg.value = 0.232671328955;

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
    msg.setTimeStamp(0.118446263353);
    msg.setSource(5848U);
    msg.setSourceEntity(160U);
    msg.setDestination(7532U);
    msg.setDestinationEntity(141U);
    msg.value = 0.00145894554574;

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
    msg.setTimeStamp(0.703128672485);
    msg.setSource(65238U);
    msg.setSourceEntity(3U);
    msg.setDestination(14655U);
    msg.setDestinationEntity(189U);
    msg.value = 0.688635735912;

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
    msg.setTimeStamp(0.541082506311);
    msg.setSource(30909U);
    msg.setSourceEntity(204U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(119U);
    msg.value = 0.819192088755;

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
    msg.setTimeStamp(0.117654449112);
    msg.setSource(50874U);
    msg.setSourceEntity(180U);
    msg.setDestination(12553U);
    msg.setDestinationEntity(208U);
    msg.value = 0.121113965097;

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
    msg.setTimeStamp(0.529875874282);
    msg.setSource(64246U);
    msg.setSourceEntity(78U);
    msg.setDestination(25050U);
    msg.setDestinationEntity(229U);
    msg.value = 0.75598079277;

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
    msg.setTimeStamp(0.312159513931);
    msg.setSource(34689U);
    msg.setSourceEntity(0U);
    msg.setDestination(32366U);
    msg.setDestinationEntity(20U);
    msg.value = 0.525520392808;

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
    msg.setTimeStamp(0.474161213505);
    msg.setSource(30892U);
    msg.setSourceEntity(112U);
    msg.setDestination(24767U);
    msg.setDestinationEntity(35U);
    msg.value = 0.566773726915;

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
    msg.setTimeStamp(0.345418743604);
    msg.setSource(65301U);
    msg.setSourceEntity(115U);
    msg.setDestination(14646U);
    msg.setDestinationEntity(114U);
    msg.value = 0.404922868669;

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
    msg.setTimeStamp(0.21073570837);
    msg.setSource(11158U);
    msg.setSourceEntity(215U);
    msg.setDestination(56463U);
    msg.setDestinationEntity(63U);
    msg.value = 0.292134655936;

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
    msg.setTimeStamp(0.345773558701);
    msg.setSource(29433U);
    msg.setSourceEntity(201U);
    msg.setDestination(48686U);
    msg.setDestinationEntity(31U);
    msg.value = 0.423473465903;

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
    msg.setTimeStamp(0.688782492058);
    msg.setSource(24275U);
    msg.setSourceEntity(65U);
    msg.setDestination(22444U);
    msg.setDestinationEntity(25U);
    msg.value = 0.900854955329;

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
    msg.setTimeStamp(0.0107207512635);
    msg.setSource(54848U);
    msg.setSourceEntity(220U);
    msg.setDestination(55460U);
    msg.setDestinationEntity(252U);
    msg.validity = 55864U;
    msg.type = 61U;
    msg.tow = 1062859658U;
    msg.base_lat = 0.203766670283;
    msg.base_lon = 0.691015461026;
    msg.base_height = 0.934711623249;
    msg.n = 0.987821932892;
    msg.e = 0.687995575616;
    msg.d = 0.382636580048;
    msg.v_n = 0.624723305647;
    msg.v_e = 0.37911583089;
    msg.v_d = 0.680078508457;
    msg.satellites = 117U;
    msg.iar_hyp = 36546U;
    msg.iar_ratio = 0.906092263907;

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
    msg.setTimeStamp(0.372163514973);
    msg.setSource(46543U);
    msg.setSourceEntity(17U);
    msg.setDestination(23882U);
    msg.setDestinationEntity(143U);
    msg.validity = 51984U;
    msg.type = 169U;
    msg.tow = 4148243080U;
    msg.base_lat = 0.148394049334;
    msg.base_lon = 0.642801080024;
    msg.base_height = 0.588782457177;
    msg.n = 0.520643901286;
    msg.e = 0.895640214276;
    msg.d = 0.593593775641;
    msg.v_n = 0.0380052774848;
    msg.v_e = 0.320801470216;
    msg.v_d = 0.0113093200386;
    msg.satellites = 21U;
    msg.iar_hyp = 52266U;
    msg.iar_ratio = 0.125510973221;

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
    msg.setTimeStamp(0.792727508643);
    msg.setSource(16785U);
    msg.setSourceEntity(54U);
    msg.setDestination(44809U);
    msg.setDestinationEntity(216U);
    msg.validity = 28753U;
    msg.type = 138U;
    msg.tow = 509353831U;
    msg.base_lat = 0.820881067965;
    msg.base_lon = 0.930707729561;
    msg.base_height = 0.984620815373;
    msg.n = 0.0404971990938;
    msg.e = 0.416081535359;
    msg.d = 0.395046829699;
    msg.v_n = 0.784165123339;
    msg.v_e = 0.758069068694;
    msg.v_d = 0.0263058181976;
    msg.satellites = 20U;
    msg.iar_hyp = 17574U;
    msg.iar_ratio = 0.210606049566;

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
    msg.setTimeStamp(0.879311526707);
    msg.setSource(20461U);
    msg.setSourceEntity(49U);
    msg.setDestination(58475U);
    msg.setDestinationEntity(112U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.149100483687;
    tmp_msg_0.lon = 0.724270478843;
    tmp_msg_0.height = 0.0292925328037;
    tmp_msg_0.x = 0.613682024932;
    tmp_msg_0.y = 0.565279764093;
    tmp_msg_0.z = 0.397898316819;
    tmp_msg_0.phi = 0.408980986154;
    tmp_msg_0.theta = 0.570909853999;
    tmp_msg_0.psi = 0.662054291106;
    tmp_msg_0.u = 0.541917958982;
    tmp_msg_0.v = 0.563721970187;
    tmp_msg_0.w = 0.548656651016;
    tmp_msg_0.vx = 0.53245263982;
    tmp_msg_0.vy = 0.680293769843;
    tmp_msg_0.vz = 0.986586285462;
    tmp_msg_0.p = 0.505147551536;
    tmp_msg_0.q = 0.926219473232;
    tmp_msg_0.r = 0.0904887556415;
    tmp_msg_0.depth = 0.731030457251;
    tmp_msg_0.alt = 0.150492940663;
    msg.state.set(tmp_msg_0);
    msg.type = 40U;

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
    msg.setTimeStamp(0.748942952994);
    msg.setSource(37326U);
    msg.setSourceEntity(106U);
    msg.setDestination(38425U);
    msg.setDestinationEntity(105U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.848489991722;
    tmp_msg_0.lon = 0.341349573143;
    tmp_msg_0.height = 0.533203186576;
    tmp_msg_0.x = 0.850895257041;
    tmp_msg_0.y = 0.516574260986;
    tmp_msg_0.z = 0.58580094109;
    tmp_msg_0.phi = 0.268271913907;
    tmp_msg_0.theta = 0.195672432464;
    tmp_msg_0.psi = 0.493754476087;
    tmp_msg_0.u = 0.879963819918;
    tmp_msg_0.v = 0.578078917358;
    tmp_msg_0.w = 0.0803469524496;
    tmp_msg_0.vx = 0.244698843252;
    tmp_msg_0.vy = 0.102704424611;
    tmp_msg_0.vz = 0.662105068616;
    tmp_msg_0.p = 0.768236584026;
    tmp_msg_0.q = 0.506747267572;
    tmp_msg_0.r = 0.117197170063;
    tmp_msg_0.depth = 0.397414648182;
    tmp_msg_0.alt = 0.410232203864;
    msg.state.set(tmp_msg_0);
    msg.type = 19U;

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
    msg.setTimeStamp(0.0552656656295);
    msg.setSource(17248U);
    msg.setSourceEntity(249U);
    msg.setDestination(23691U);
    msg.setDestinationEntity(163U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.395281708609;
    tmp_msg_0.lon = 0.105486644481;
    tmp_msg_0.height = 0.340976051026;
    tmp_msg_0.x = 0.909764254859;
    tmp_msg_0.y = 0.226148785403;
    tmp_msg_0.z = 0.350133148639;
    tmp_msg_0.phi = 0.149350969337;
    tmp_msg_0.theta = 0.299852361073;
    tmp_msg_0.psi = 0.759309593196;
    tmp_msg_0.u = 0.408541735578;
    tmp_msg_0.v = 0.879852182817;
    tmp_msg_0.w = 0.0110820570819;
    tmp_msg_0.vx = 0.411208477262;
    tmp_msg_0.vy = 0.691856376574;
    tmp_msg_0.vz = 0.158664187226;
    tmp_msg_0.p = 0.887142837901;
    tmp_msg_0.q = 0.785795161792;
    tmp_msg_0.r = 0.849774737666;
    tmp_msg_0.depth = 0.979305765734;
    tmp_msg_0.alt = 0.641468144312;
    msg.state.set(tmp_msg_0);
    msg.type = 167U;

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
    msg.setTimeStamp(0.943558653697);
    msg.setSource(52379U);
    msg.setSourceEntity(202U);
    msg.setDestination(26371U);
    msg.setDestinationEntity(158U);
    msg.value = 0.544970479956;

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
    msg.setTimeStamp(0.418066200179);
    msg.setSource(44427U);
    msg.setSourceEntity(182U);
    msg.setDestination(25611U);
    msg.setDestinationEntity(187U);
    msg.value = 0.218213792311;

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
    msg.setTimeStamp(0.227621087305);
    msg.setSource(13092U);
    msg.setSourceEntity(162U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(243U);
    msg.value = 0.861095590999;

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
    msg.setTimeStamp(0.255309637895);
    msg.setSource(38671U);
    msg.setSourceEntity(233U);
    msg.setDestination(6176U);
    msg.setDestinationEntity(240U);
    msg.value = 0.742584451732;

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
    msg.setTimeStamp(0.716927528358);
    msg.setSource(25308U);
    msg.setSourceEntity(207U);
    msg.setDestination(27723U);
    msg.setDestinationEntity(60U);
    msg.value = 0.69279461627;

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
    msg.setTimeStamp(0.984762422803);
    msg.setSource(39536U);
    msg.setSourceEntity(60U);
    msg.setDestination(5943U);
    msg.setDestinationEntity(205U);
    msg.value = 0.839187989012;

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
    msg.setTimeStamp(0.154829268303);
    msg.setSource(42130U);
    msg.setSourceEntity(84U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(88U);
    msg.value = 0.102427916481;

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
    msg.setTimeStamp(0.0486763480205);
    msg.setSource(55155U);
    msg.setSourceEntity(25U);
    msg.setDestination(18204U);
    msg.setDestinationEntity(165U);
    msg.value = 0.397644774569;

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
    msg.setTimeStamp(0.0380994986813);
    msg.setSource(59222U);
    msg.setSourceEntity(5U);
    msg.setDestination(30156U);
    msg.setDestinationEntity(31U);
    msg.value = 0.321115362178;

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
    msg.setTimeStamp(0.541173170645);
    msg.setSource(14895U);
    msg.setSourceEntity(77U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(44U);
    msg.value = 0.820470109367;

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
    msg.setTimeStamp(0.69028941291);
    msg.setSource(42744U);
    msg.setSourceEntity(50U);
    msg.setDestination(51206U);
    msg.setDestinationEntity(129U);
    msg.value = 0.362007591779;

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
    msg.setTimeStamp(0.0266851789049);
    msg.setSource(32710U);
    msg.setSourceEntity(229U);
    msg.setDestination(48173U);
    msg.setDestinationEntity(112U);
    msg.value = 0.00803961752856;

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
    msg.setTimeStamp(0.599403117623);
    msg.setSource(56986U);
    msg.setSourceEntity(90U);
    msg.setDestination(17531U);
    msg.setDestinationEntity(223U);
    msg.value = 0.00272647449216;

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
    msg.setTimeStamp(0.176513845084);
    msg.setSource(52226U);
    msg.setSourceEntity(219U);
    msg.setDestination(37999U);
    msg.setDestinationEntity(18U);
    msg.value = 0.105793120313;

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
    msg.setTimeStamp(0.869231326137);
    msg.setSource(24988U);
    msg.setSourceEntity(72U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(87U);
    msg.value = 0.606844787415;

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
    msg.setTimeStamp(0.673158257461);
    msg.setSource(20364U);
    msg.setSourceEntity(128U);
    msg.setDestination(52070U);
    msg.setDestinationEntity(250U);
    msg.id = 83U;
    msg.zoom = 120U;
    msg.action = 47U;

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
    msg.setTimeStamp(0.836610711902);
    msg.setSource(23311U);
    msg.setSourceEntity(7U);
    msg.setDestination(3078U);
    msg.setDestinationEntity(96U);
    msg.id = 171U;
    msg.zoom = 133U;
    msg.action = 59U;

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
    msg.setTimeStamp(0.450086278401);
    msg.setSource(11846U);
    msg.setSourceEntity(102U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(141U);
    msg.id = 80U;
    msg.zoom = 130U;
    msg.action = 113U;

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
    msg.setTimeStamp(0.0346301385345);
    msg.setSource(22465U);
    msg.setSourceEntity(55U);
    msg.setDestination(50407U);
    msg.setDestinationEntity(79U);
    msg.id = 40U;
    msg.value = 0.548570950098;

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
    msg.setTimeStamp(0.921172704818);
    msg.setSource(58391U);
    msg.setSourceEntity(210U);
    msg.setDestination(16850U);
    msg.setDestinationEntity(43U);
    msg.id = 200U;
    msg.value = 0.334300496505;

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
    msg.setTimeStamp(0.0425054883955);
    msg.setSource(13762U);
    msg.setSourceEntity(93U);
    msg.setDestination(47230U);
    msg.setDestinationEntity(200U);
    msg.id = 195U;
    msg.value = 0.000637863514588;

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
    msg.setTimeStamp(0.697717843292);
    msg.setSource(50056U);
    msg.setSourceEntity(146U);
    msg.setDestination(27778U);
    msg.setDestinationEntity(36U);
    msg.id = 248U;
    msg.value = 0.991640276332;

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
    msg.setTimeStamp(0.826177956004);
    msg.setSource(56404U);
    msg.setSourceEntity(23U);
    msg.setDestination(16350U);
    msg.setDestinationEntity(190U);
    msg.id = 253U;
    msg.value = 0.114097365533;

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
    msg.setTimeStamp(0.609200333992);
    msg.setSource(46606U);
    msg.setSourceEntity(151U);
    msg.setDestination(2898U);
    msg.setDestinationEntity(157U);
    msg.id = 176U;
    msg.value = 0.843447154579;

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
    msg.setTimeStamp(0.182022884323);
    msg.setSource(58429U);
    msg.setSourceEntity(174U);
    msg.setDestination(21149U);
    msg.setDestinationEntity(128U);
    msg.id = 152U;
    msg.angle = 0.26969165202;

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
    msg.setTimeStamp(0.629690794818);
    msg.setSource(57272U);
    msg.setSourceEntity(95U);
    msg.setDestination(14279U);
    msg.setDestinationEntity(5U);
    msg.id = 24U;
    msg.angle = 0.762153957931;

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
    msg.setTimeStamp(0.552083239963);
    msg.setSource(3795U);
    msg.setSourceEntity(224U);
    msg.setDestination(61764U);
    msg.setDestinationEntity(209U);
    msg.id = 191U;
    msg.angle = 0.190112819256;

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
    msg.setTimeStamp(0.133535101036);
    msg.setSource(44565U);
    msg.setSourceEntity(208U);
    msg.setDestination(51206U);
    msg.setDestinationEntity(160U);
    msg.op = 169U;
    msg.actions.assign("OJNZNISJXYAWT");

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
    msg.setTimeStamp(0.23463204794);
    msg.setSource(44672U);
    msg.setSourceEntity(213U);
    msg.setDestination(10134U);
    msg.setDestinationEntity(95U);
    msg.op = 231U;
    msg.actions.assign("BPDLHCHUKFBFPPXUORHYDQNHZGPHTARAXJVKISFCGDZQKJIZJOWQPYFAEBZDBZWFQIFLSFTRICXVRYMSLMWAZEDXEFNIJDZWDERXHPAWXAMAQCEJQUXZXHBWFMAVEYNUGKQVONNQTLDBE");

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
    msg.setTimeStamp(0.666875820237);
    msg.setSource(64359U);
    msg.setSourceEntity(124U);
    msg.setDestination(13810U);
    msg.setDestinationEntity(56U);
    msg.op = 196U;
    msg.actions.assign("VHSZPBBEJXTLQZKYBCRZCRQCPLPKIKRCUEGBBXFKSZFFXQNHYDTGIICGMUVUKOQGJNNRUJNUDEEAUNJQVOSKADVNCOPVPORSBSOSTXLRVXZQWNSLXMUUWMFAISBLFYIDTYYOIG");

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
    msg.setTimeStamp(0.141376121056);
    msg.setSource(58381U);
    msg.setSourceEntity(196U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(114U);
    msg.actions.assign("WMXOHORVWNZWELFBFSFOMCHDEBYYUAMRPHHYTXNXSGRSBIGHUAIDTFOFKGCCYXQVEWNZENEOCMCUGTRUXLQPNQBTMDXWGPVRJJVYGMWPLATIKIBMT");

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
    msg.setTimeStamp(0.128760089758);
    msg.setSource(63329U);
    msg.setSourceEntity(31U);
    msg.setDestination(15476U);
    msg.setDestinationEntity(97U);
    msg.actions.assign("GTBYYEZUHNOQXTVRWBCZQBJONSZATIVFRCMPFYKWURJNSWXCNFDKUCIAQJXKXOAMHVCHEIEZVNLAZSPXMBFKLXMMQKYAMEYNJYCTDBVLGBIGMGSHTUPWFOVOSAMRQJUVW");

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
    msg.setTimeStamp(0.420802192704);
    msg.setSource(3235U);
    msg.setSourceEntity(92U);
    msg.setDestination(59939U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("VRNLXIWNXKCAHQMVLPIJYGUFDXEGOZHIYSFBUECCUJIOQDNGDUOLXPMILWVHRDJDTHNEDHRBOSKHATAAAZTDRXYQMTCRONGKLVZRPUKFVTFMBUTECZXBJ");

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
    msg.setTimeStamp(0.639956044813);
    msg.setSource(16255U);
    msg.setSourceEntity(19U);
    msg.setDestination(11915U);
    msg.setDestinationEntity(175U);
    msg.button = 147U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.665315096967);
    msg.setSource(46564U);
    msg.setSourceEntity(90U);
    msg.setDestination(46926U);
    msg.setDestinationEntity(239U);
    msg.button = 122U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.286575444719);
    msg.setSource(60557U);
    msg.setSourceEntity(254U);
    msg.setDestination(14923U);
    msg.setDestinationEntity(56U);
    msg.button = 111U;
    msg.value = 199U;

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
    msg.setTimeStamp(0.609700977816);
    msg.setSource(56410U);
    msg.setSourceEntity(54U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(220U);
    msg.op = 18U;
    msg.text.assign("ABNQQYQUEQBPSTIQGXALIZMJTOKL");

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
    msg.setTimeStamp(0.412350477815);
    msg.setSource(55715U);
    msg.setSourceEntity(98U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(107U);
    msg.op = 114U;
    msg.text.assign("BPNLHQMFOOCCGZYAXFISTTLLLMGCLVQDNZABYHYPEDJVWN");

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
    msg.setTimeStamp(0.857783101054);
    msg.setSource(19394U);
    msg.setSourceEntity(237U);
    msg.setDestination(64595U);
    msg.setDestinationEntity(183U);
    msg.op = 105U;
    msg.text.assign("POWWDDHTJSTMXNAERDELZPAGHMLEPLBGGRHFAPUAUZKXKVWSYQCHEQKPPFGCIXLQDHXQQGHSUOOZEOIMKUYQTCWVHNMKBBQBGWWSCDTBZRZYDLMJNORDVJJTSIKOVROBPMLNNRFKUFJPVFIAESCXWDWXAOSOBIALNFZVJYNBTISVHWIYFQZUZSUNBNJFQXWMVKTQCRTOBLFRGMXMDUEJKTGJAXZCULGXRYYAPFCEPCMJZSYVI");

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
    msg.setTimeStamp(0.169300818999);
    msg.setSource(57467U);
    msg.setSourceEntity(180U);
    msg.setDestination(39106U);
    msg.setDestinationEntity(78U);
    msg.op = 200U;
    msg.time_remain = 0.504407559828;
    msg.sched_time = 0.962970182773;

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
    msg.setTimeStamp(0.150974049807);
    msg.setSource(17296U);
    msg.setSourceEntity(228U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(26U);
    msg.op = 57U;
    msg.time_remain = 0.353989912373;
    msg.sched_time = 0.1532457438;

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
    msg.setTimeStamp(0.357311372457);
    msg.setSource(50867U);
    msg.setSourceEntity(184U);
    msg.setDestination(35488U);
    msg.setDestinationEntity(77U);
    msg.op = 214U;
    msg.time_remain = 0.856420631256;
    msg.sched_time = 0.109662709572;

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
    msg.setTimeStamp(0.443063341519);
    msg.setSource(33776U);
    msg.setSourceEntity(162U);
    msg.setDestination(38178U);
    msg.setDestinationEntity(156U);
    msg.name.assign("CIAHAVWUCAGXBVLZPTZXOISJADLEVXXKGQBWHLCMILENBGCPFB");
    msg.op = 170U;
    msg.sched_time = 0.600115741498;

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
    msg.setTimeStamp(0.0151206001048);
    msg.setSource(33176U);
    msg.setSourceEntity(235U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(31U);
    msg.name.assign("YJTGJGPNYKRFJIDUUXAEPRITMIECOZYOGRCSBOBBGYULMHQKNYACLHMQZKLBOQPNFMXQAHURVEYVOQXVLGSEBPRZMAKRWIWNMWFNMKWXJTTSQCSPUUFIVHRSTCZPWDZXOATABAZEVRFVYPQHNJELBSZUMTVPIVJJLHDD");
    msg.op = 208U;
    msg.sched_time = 0.804840885894;

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
    msg.setTimeStamp(0.830709019048);
    msg.setSource(30006U);
    msg.setSourceEntity(196U);
    msg.setDestination(58319U);
    msg.setDestinationEntity(171U);
    msg.name.assign("OUNNDUFIQSTIJQVECMTLGBRBNWQAIYOANEZJDKHFUEKFWVXTGPYSQHSTNZGAOOXGNWJOJPLBKGGXVCPQTBXIGYBVPSJTLRZNFYIMGWFIHZSVHQNMKOPLWYMGPUJFDIUXDFECOKYPVYJRXDNXUQETLOEFVUADQMXARIAZIRANDCYHVPDMDRUWHTQHMXTMCA");
    msg.op = 216U;
    msg.sched_time = 0.632193864286;

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
    msg.setTimeStamp(0.631424941795);
    msg.setSource(44732U);
    msg.setSourceEntity(177U);
    msg.setDestination(33625U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.900284697936);
    msg.setSource(23221U);
    msg.setSourceEntity(152U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.771775647609);
    msg.setSource(42126U);
    msg.setSourceEntity(204U);
    msg.setDestination(31329U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.0648677423419);
    msg.setSource(50183U);
    msg.setSourceEntity(21U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(82U);
    msg.name.assign("YVTACDODUSYXUVZAVVYZWUGPTGXFAGUQBXOBHTBRFHBHHBKWBSNNOOXROSWQGBXSELNKZRKECPHLVRQFRYZPTNQJHEKPPIYCFVIHXEMAWAZBZILYCRCIJLSDMWEWULANIQJJWMPHMDVELLZMNGLUBPTATJJVXVPYUZEMOLCCFSRGXKDYTPSPHQD");
    msg.state = 239U;

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
    msg.setTimeStamp(0.602508767346);
    msg.setSource(13594U);
    msg.setSourceEntity(30U);
    msg.setDestination(41573U);
    msg.setDestinationEntity(176U);
    msg.name.assign("JKTQQECGMHIARPKTGXWZHYIUBTJQUDEUKVEBBWF");
    msg.state = 59U;

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
    msg.setTimeStamp(0.0744469888875);
    msg.setSource(61500U);
    msg.setSourceEntity(180U);
    msg.setDestination(65502U);
    msg.setDestinationEntity(103U);
    msg.name.assign("LTVKTECUEHAXFKTFAMRQUXOJEMTCQYQHTPDXDPDLCHZSVVGIHYTHASZOXIOGCFHVICWPIOITLDHWMNWEUHBKEYVVQCESSLNBOFXLNABKSFDTLEBMIPURVRIAQKBOOKNGJYFSUYODRCYMLYZQTIUTMYNPXGPSQNEDZVDHKJIABFCEUVWQSDC");
    msg.state = 181U;

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
    msg.setTimeStamp(0.806542667358);
    msg.setSource(7900U);
    msg.setSourceEntity(227U);
    msg.setDestination(31572U);
    msg.setDestinationEntity(90U);
    msg.name.assign("TDEOXVOFTLMQWLRUXADCUMPSDQLGJNOIIRUSCWVYYCJZLLWOACBTKEGUUHPTRRMNLGKQVJGNFXERSQYMADKVGBGTZVIHZQANUBOFAQINIAHTDYZDEIOFQDPCWLMTRRNEJSEGCWBDYLVKMUIJUGVAPFQEBBGPMGPHJWVSZQXORBJKSTMJTNKOYFFWIEOZXZYZAWJFNVHNLZCHWENPDKXYFFCRIIAUXPHSXVPKWZAXOY");
    msg.value = 37U;

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
    msg.setTimeStamp(0.398672811879);
    msg.setSource(37036U);
    msg.setSourceEntity(212U);
    msg.setDestination(21189U);
    msg.setDestinationEntity(52U);
    msg.name.assign("FHXQRMVJWYXSILEWPWRAGXRMFCFYGNCVCLBUETUFRENMVYP");
    msg.value = 252U;

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
    msg.setTimeStamp(0.344642725557);
    msg.setSource(15359U);
    msg.setSourceEntity(174U);
    msg.setDestination(21699U);
    msg.setDestinationEntity(212U);
    msg.name.assign("DMVNGYCAVLIPTWWYIJQNBFSVQKNOKPFOJEXOAANWGTUQUCPPNDZBBNDHTCIDFHGHZNKVRIPQRLGCBTYUKORRWEEJUBPVAUNMKJGZZCXYAHDMGRUPSOBGJFTLIQIXTJAKKGIEMYHREIHZTSDVWSEMDYREAMYXWIXJLVXXU");
    msg.value = 195U;

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
    msg.setTimeStamp(0.13703861444);
    msg.setSource(21396U);
    msg.setSourceEntity(236U);
    msg.setDestination(42373U);
    msg.setDestinationEntity(149U);
    msg.name.assign("YOQSGBCBFVTAQVURPRNXK");

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
    msg.setTimeStamp(0.842253621591);
    msg.setSource(23508U);
    msg.setSourceEntity(128U);
    msg.setDestination(1805U);
    msg.setDestinationEntity(244U);
    msg.name.assign("RXLGKUYBSJIAHYIFYRW");

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
    msg.setTimeStamp(0.0483567249405);
    msg.setSource(15420U);
    msg.setSourceEntity(111U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(225U);
    msg.name.assign("BPMPYANDUCMUFEQTMOUIRCPKNVPSOZPDIIDIBJRJDIRFGMAWGLTHYZBKMXWFBAXYHDVATACFHQJSULPVJWHKOU");

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
    msg.setTimeStamp(0.0316471247272);
    msg.setSource(33722U);
    msg.setSourceEntity(44U);
    msg.setDestination(2784U);
    msg.setDestinationEntity(117U);
    msg.name.assign("ZYLLCAUUYJQTVIFIMVXUCZDURFRQEASTIHERINWMOZMVSELWQTHLJUPBWFAXOBJNOKLOCTPXJOSYAUHOPFLCRQPSMFJBIXGUBLVKRJEHTDNWCTSYAEAQMDGPCZLNAMPSEHZBDKVOTJSRFDHOJGBUXMVJCFIICGXVNUSCUAHMEYHKDWLTEVQXSRFDWXYKNZIBZYQWYMEGKANQWPTKGFKOPBYINOIPKZGRYRJBCMGXNTBLDGQEPXR");
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
    msg.setTimeStamp(0.159514319772);
    msg.setSource(8517U);
    msg.setSourceEntity(26U);
    msg.setDestination(49071U);
    msg.setDestinationEntity(167U);
    msg.name.assign("NMQRKKRBBASVYXKMAUWBOGKPHNJFJRFKBOPVKXDLINCERVSADGPGXUUHBOVHDPOTVUCESWXTBHRCYBBGDLUXWYSGVBDCIAMICLPTYZR");
    msg.value = 79U;

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
    msg.setTimeStamp(0.192910331303);
    msg.setSource(20280U);
    msg.setSourceEntity(55U);
    msg.setDestination(3986U);
    msg.setDestinationEntity(91U);
    msg.name.assign("XOAPWIFHJWNLKEJWUBRGIHFSTTUNFNDQWXUZTIXFZCPSPVPEKFXAQLYWGIANUQRKWMHZFHWMPKQFTPLLHIALOMUOZTCMXVTSIRSCEDHONTVHCSZTNEBVAGNZBAUJKLWEYMNPBZBFNDRDXKTSCXRIQRJGCZDMOJGKUYMDTVMSGSUMQOOPPGHEVRKYKBGESDCEZBIIEJQXJRLHLDOHAW");
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
    msg.setTimeStamp(0.117631525085);
    msg.setSource(52157U);
    msg.setSourceEntity(12U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(106U);
    msg.id = 44U;
    msg.period = 1010879707U;
    msg.duty_cycle = 2269659475U;

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
    msg.setTimeStamp(0.994462615498);
    msg.setSource(63698U);
    msg.setSourceEntity(246U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(85U);
    msg.id = 239U;
    msg.period = 786072513U;
    msg.duty_cycle = 2783906612U;

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
    msg.setTimeStamp(0.453384738743);
    msg.setSource(35478U);
    msg.setSourceEntity(251U);
    msg.setDestination(14097U);
    msg.setDestinationEntity(192U);
    msg.id = 90U;
    msg.period = 3094560560U;
    msg.duty_cycle = 2496151816U;

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
    msg.setTimeStamp(0.230245613288);
    msg.setSource(1222U);
    msg.setSourceEntity(122U);
    msg.setDestination(13820U);
    msg.setDestinationEntity(160U);
    msg.id = 29U;
    msg.period = 923680618U;
    msg.duty_cycle = 225163316U;

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
    msg.setTimeStamp(0.265418203418);
    msg.setSource(55330U);
    msg.setSourceEntity(7U);
    msg.setDestination(10034U);
    msg.setDestinationEntity(165U);
    msg.id = 85U;
    msg.period = 4118470463U;
    msg.duty_cycle = 578247000U;

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
    msg.setTimeStamp(0.0664052047295);
    msg.setSource(23579U);
    msg.setSourceEntity(186U);
    msg.setDestination(32271U);
    msg.setDestinationEntity(82U);
    msg.id = 42U;
    msg.period = 1721609673U;
    msg.duty_cycle = 1759190358U;

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
    msg.setTimeStamp(0.163569801688);
    msg.setSource(37247U);
    msg.setSourceEntity(197U);
    msg.setDestination(15285U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.589108386033;
    msg.lon = 0.665395687894;
    msg.height = 0.0914793748482;
    msg.x = 0.621485430059;
    msg.y = 0.250840005204;
    msg.z = 0.960176840838;
    msg.phi = 0.46344689292;
    msg.theta = 0.152728044522;
    msg.psi = 0.1246205934;
    msg.u = 0.151026006535;
    msg.v = 0.801482216979;
    msg.w = 0.933505986536;
    msg.vx = 0.851399545542;
    msg.vy = 0.61166039252;
    msg.vz = 0.655420184626;
    msg.p = 0.0765660852654;
    msg.q = 0.949767460231;
    msg.r = 0.769397608209;
    msg.depth = 0.176424254086;
    msg.alt = 0.875071358704;

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
    msg.setTimeStamp(0.846058122436);
    msg.setSource(54078U);
    msg.setSourceEntity(235U);
    msg.setDestination(21911U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.960749629837;
    msg.lon = 0.842150183214;
    msg.height = 0.310714232824;
    msg.x = 0.223564905862;
    msg.y = 0.0998026860778;
    msg.z = 0.896078797875;
    msg.phi = 0.836773199537;
    msg.theta = 0.474882423518;
    msg.psi = 0.9362457321;
    msg.u = 0.42040953005;
    msg.v = 0.0383253345401;
    msg.w = 0.681273912791;
    msg.vx = 0.299863691074;
    msg.vy = 0.477985261892;
    msg.vz = 0.943655513562;
    msg.p = 0.380629526001;
    msg.q = 0.88670270101;
    msg.r = 0.0363091265043;
    msg.depth = 0.275586773611;
    msg.alt = 0.902374283937;

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
    msg.setTimeStamp(0.907321308516);
    msg.setSource(9449U);
    msg.setSourceEntity(150U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.348698901024;
    msg.lon = 0.58177058604;
    msg.height = 0.798596828074;
    msg.x = 0.791828952682;
    msg.y = 0.3542827056;
    msg.z = 0.0833513543949;
    msg.phi = 0.356764626757;
    msg.theta = 0.0921450449863;
    msg.psi = 0.786948457494;
    msg.u = 0.561353251629;
    msg.v = 0.693092843258;
    msg.w = 0.0352929120123;
    msg.vx = 0.514117348053;
    msg.vy = 0.762257774802;
    msg.vz = 0.00206862710209;
    msg.p = 0.00737219226154;
    msg.q = 0.790823774865;
    msg.r = 0.200812519478;
    msg.depth = 0.424996653182;
    msg.alt = 0.459155936111;

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
    msg.setTimeStamp(0.680522016048);
    msg.setSource(54357U);
    msg.setSourceEntity(165U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(173U);
    msg.x = 0.00269942277577;
    msg.y = 0.10643529969;
    msg.z = 0.851662126634;

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
    msg.setTimeStamp(0.124881032417);
    msg.setSource(50469U);
    msg.setSourceEntity(80U);
    msg.setDestination(5670U);
    msg.setDestinationEntity(249U);
    msg.x = 0.85489023081;
    msg.y = 0.741408236064;
    msg.z = 0.0492366083683;

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
    msg.setTimeStamp(0.566559268988);
    msg.setSource(59651U);
    msg.setSourceEntity(188U);
    msg.setDestination(59870U);
    msg.setDestinationEntity(150U);
    msg.x = 0.0841778557127;
    msg.y = 0.697974710407;
    msg.z = 0.0839637496721;

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
    msg.setTimeStamp(0.495105672522);
    msg.setSource(51631U);
    msg.setSourceEntity(149U);
    msg.setDestination(52674U);
    msg.setDestinationEntity(195U);
    msg.value = 0.544611561675;

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
    msg.setTimeStamp(0.969223680267);
    msg.setSource(6806U);
    msg.setSourceEntity(37U);
    msg.setDestination(32102U);
    msg.setDestinationEntity(96U);
    msg.value = 0.197632733112;

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
    msg.setTimeStamp(0.390330166712);
    msg.setSource(35996U);
    msg.setSourceEntity(11U);
    msg.setDestination(34823U);
    msg.setDestinationEntity(191U);
    msg.value = 0.357251568351;

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
    msg.setTimeStamp(0.861460555299);
    msg.setSource(13386U);
    msg.setSourceEntity(211U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(95U);
    msg.value = 0.219971391248;

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
    msg.setTimeStamp(0.713896937391);
    msg.setSource(37164U);
    msg.setSourceEntity(90U);
    msg.setDestination(17695U);
    msg.setDestinationEntity(95U);
    msg.value = 0.401353723331;

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
    msg.setTimeStamp(0.178668430732);
    msg.setSource(33543U);
    msg.setSourceEntity(236U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(226U);
    msg.value = 0.629638700276;

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
    msg.setTimeStamp(0.405431340726);
    msg.setSource(29938U);
    msg.setSourceEntity(231U);
    msg.setDestination(45641U);
    msg.setDestinationEntity(199U);
    msg.x = 0.789824104496;
    msg.y = 0.739091828291;
    msg.z = 0.746292304022;
    msg.phi = 0.705963265982;
    msg.theta = 0.35056362071;
    msg.psi = 0.629507495961;
    msg.p = 0.0974897805414;
    msg.q = 0.774691733531;
    msg.r = 0.700738171206;
    msg.u = 0.321138207025;
    msg.v = 0.790581651806;
    msg.w = 0.742439319829;
    msg.bias_psi = 0.459777084152;
    msg.bias_r = 0.372001635517;

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
    msg.setTimeStamp(0.0849267107235);
    msg.setSource(63433U);
    msg.setSourceEntity(253U);
    msg.setDestination(15208U);
    msg.setDestinationEntity(231U);
    msg.x = 0.00152956366312;
    msg.y = 0.812156318272;
    msg.z = 0.143004363068;
    msg.phi = 0.345539041471;
    msg.theta = 0.65695751391;
    msg.psi = 0.0521896721837;
    msg.p = 0.900134342828;
    msg.q = 0.810931934192;
    msg.r = 0.553059592059;
    msg.u = 0.799574058504;
    msg.v = 0.442894375384;
    msg.w = 0.833866083081;
    msg.bias_psi = 0.422357872865;
    msg.bias_r = 0.359418921144;

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
    msg.setTimeStamp(0.863694275207);
    msg.setSource(43237U);
    msg.setSourceEntity(7U);
    msg.setDestination(19209U);
    msg.setDestinationEntity(0U);
    msg.x = 0.946483023038;
    msg.y = 0.411937244237;
    msg.z = 0.864476078337;
    msg.phi = 0.857612832393;
    msg.theta = 0.39220957134;
    msg.psi = 0.614953848814;
    msg.p = 0.672428252089;
    msg.q = 0.639549162184;
    msg.r = 0.848494424145;
    msg.u = 0.132402424211;
    msg.v = 0.965510581591;
    msg.w = 0.0944050320926;
    msg.bias_psi = 0.736826002785;
    msg.bias_r = 0.83710297912;

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
    msg.setTimeStamp(0.244533410619);
    msg.setSource(4796U);
    msg.setSourceEntity(9U);
    msg.setDestination(43545U);
    msg.setDestinationEntity(122U);
    msg.bias_psi = 0.892589602241;
    msg.bias_r = 0.555406410032;
    msg.cog = 0.177960167649;
    msg.cyaw = 0.565387849863;
    msg.lbl_rej_level = 0.14318214311;
    msg.gps_rej_level = 0.742698347166;
    msg.custom_x = 0.767798530426;
    msg.custom_y = 0.224998491652;
    msg.custom_z = 0.979612630067;

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
    msg.setTimeStamp(0.327073479752);
    msg.setSource(24017U);
    msg.setSourceEntity(180U);
    msg.setDestination(38413U);
    msg.setDestinationEntity(127U);
    msg.bias_psi = 0.949866052451;
    msg.bias_r = 0.68728611875;
    msg.cog = 0.250100349493;
    msg.cyaw = 0.130518303699;
    msg.lbl_rej_level = 0.306820448585;
    msg.gps_rej_level = 0.629010210581;
    msg.custom_x = 0.790404366132;
    msg.custom_y = 0.61739082195;
    msg.custom_z = 0.0922790481699;

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
    msg.setTimeStamp(0.482622391613);
    msg.setSource(21874U);
    msg.setSourceEntity(15U);
    msg.setDestination(63070U);
    msg.setDestinationEntity(65U);
    msg.bias_psi = 0.0602575059542;
    msg.bias_r = 0.75054189958;
    msg.cog = 0.277109337417;
    msg.cyaw = 0.393266102767;
    msg.lbl_rej_level = 0.00655626757045;
    msg.gps_rej_level = 0.570094491456;
    msg.custom_x = 0.368501501354;
    msg.custom_y = 0.0716624975864;
    msg.custom_z = 0.128995766238;

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
    msg.setTimeStamp(0.327267014535);
    msg.setSource(36617U);
    msg.setSourceEntity(23U);
    msg.setDestination(53625U);
    msg.setDestinationEntity(101U);
    msg.utc_time = 0.313546571125;
    msg.reason = 207U;

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
    msg.setTimeStamp(0.971995900671);
    msg.setSource(33413U);
    msg.setSourceEntity(65U);
    msg.setDestination(18484U);
    msg.setDestinationEntity(47U);
    msg.utc_time = 0.303724805442;
    msg.reason = 206U;

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
    msg.setTimeStamp(0.589188532351);
    msg.setSource(42466U);
    msg.setSourceEntity(153U);
    msg.setDestination(3331U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.684497516058;
    msg.reason = 132U;

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
    msg.setTimeStamp(0.354470887655);
    msg.setSource(13944U);
    msg.setSourceEntity(36U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(178U);
    msg.id = 27U;
    msg.range = 0.299462078674;
    msg.acceptance = 92U;

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
    msg.setTimeStamp(0.799393443455);
    msg.setSource(56285U);
    msg.setSourceEntity(251U);
    msg.setDestination(1321U);
    msg.setDestinationEntity(171U);
    msg.id = 21U;
    msg.range = 0.478146052893;
    msg.acceptance = 242U;

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
    msg.setTimeStamp(0.829284437905);
    msg.setSource(32838U);
    msg.setSourceEntity(157U);
    msg.setDestination(19733U);
    msg.setDestinationEntity(210U);
    msg.id = 52U;
    msg.range = 0.0217742791741;
    msg.acceptance = 165U;

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
    msg.setTimeStamp(0.665808006172);
    msg.setSource(7900U);
    msg.setSourceEntity(158U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(246U);
    msg.type = 16U;
    msg.reason = 206U;
    msg.value = 0.491311433644;
    msg.timestep = 0.936680578856;

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
    msg.setTimeStamp(0.165302583497);
    msg.setSource(52425U);
    msg.setSourceEntity(3U);
    msg.setDestination(4617U);
    msg.setDestinationEntity(224U);
    msg.type = 202U;
    msg.reason = 152U;
    msg.value = 0.027009390231;
    msg.timestep = 0.340936219246;

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
    msg.setTimeStamp(0.443182486435);
    msg.setSource(40445U);
    msg.setSourceEntity(145U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(56U);
    msg.type = 71U;
    msg.reason = 100U;
    msg.value = 0.479929322538;
    msg.timestep = 0.648504466309;

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
    msg.setTimeStamp(0.217131276584);
    msg.setSource(47499U);
    msg.setSourceEntity(198U);
    msg.setDestination(31052U);
    msg.setDestinationEntity(149U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QAAEQTDHDFLIJCFYUAPOBPVNRBEEFTRCWJJNLGGDEVXNZSDSAEILIOVPPHPROCAGHNNKJHOVGYHDCILBZNKKECQHMMXUHQRVYDBUXRURBNKBMABYHXIHRZITYOYSWJJVIFXDXPOWZCSZLLGLWSZT");
    tmp_msg_0.lat = 0.162429082374;
    tmp_msg_0.lon = 0.0450597246405;
    tmp_msg_0.depth = 0.251832252388;
    tmp_msg_0.query_channel = 209U;
    tmp_msg_0.reply_channel = 243U;
    tmp_msg_0.transponder_delay = 75U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.132232088963;
    msg.y = 0.874517299768;
    msg.var_x = 0.956315116701;
    msg.var_y = 0.0902269220905;
    msg.distance = 0.478826017935;

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
    msg.setTimeStamp(0.855687999523);
    msg.setSource(43989U);
    msg.setSourceEntity(81U);
    msg.setDestination(60584U);
    msg.setDestinationEntity(121U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QMPNJZZVKECUSNCCLBORTORAKLBFNGIUTPXMXKQWHIEAHOFLYPPAATATFKEHNYJKRRFPXLHETWVCLZVRJZKAETZVAOTNPMZEJWRADMEPDXFPBCMUIHBKIWNMDGBQCXVWAOYLZQYHRQVXKYMXARUGGUVPDTRHFFFWZIEHJQNIOWRLSSXHZGDYSGHLOVXBNJLGDDDBISDMPQIITUUMYQWGJBYSJZXKJSKUFNSCIWYUVVCJSYBGOO");
    tmp_msg_0.lat = 0.617064735209;
    tmp_msg_0.lon = 0.336292840817;
    tmp_msg_0.depth = 0.73032779445;
    tmp_msg_0.query_channel = 58U;
    tmp_msg_0.reply_channel = 168U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.379823053709;
    msg.y = 0.00446915726152;
    msg.var_x = 0.947488859591;
    msg.var_y = 0.339571343247;
    msg.distance = 0.643818989727;

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
    msg.setTimeStamp(0.09460732348);
    msg.setSource(33690U);
    msg.setSourceEntity(157U);
    msg.setDestination(31229U);
    msg.setDestinationEntity(42U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CCNXTMJYHOBSKHBQXKUZHORIXHWLXRNIUZQODNZEFZDKIQAZGZBYQXJZVSSTVXQHOAIPFHBGHUPUAMF");
    tmp_msg_0.lat = 0.940599753769;
    tmp_msg_0.lon = 0.712449583291;
    tmp_msg_0.depth = 0.614398782276;
    tmp_msg_0.query_channel = 9U;
    tmp_msg_0.reply_channel = 55U;
    tmp_msg_0.transponder_delay = 207U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.472421957205;
    msg.y = 0.193807047713;
    msg.var_x = 0.696962035046;
    msg.var_y = 0.747247399099;
    msg.distance = 0.377571325324;

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
    msg.setTimeStamp(0.852375417861);
    msg.setSource(58128U);
    msg.setSourceEntity(3U);
    msg.setDestination(38839U);
    msg.setDestinationEntity(118U);
    msg.state = 53U;

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
    msg.setTimeStamp(0.156672199869);
    msg.setSource(46371U);
    msg.setSourceEntity(50U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(50U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.871507241436);
    msg.setSource(6512U);
    msg.setSourceEntity(22U);
    msg.setDestination(47514U);
    msg.setDestinationEntity(252U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.984096181554);
    msg.setSource(28194U);
    msg.setSourceEntity(120U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(230U);
    msg.x = 0.231371396491;
    msg.y = 0.168281133086;
    msg.z = 0.83247438058;

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
    msg.setTimeStamp(0.270522072012);
    msg.setSource(31257U);
    msg.setSourceEntity(30U);
    msg.setDestination(49143U);
    msg.setDestinationEntity(54U);
    msg.x = 0.686512948207;
    msg.y = 0.596574613675;
    msg.z = 0.66765730241;

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
    msg.setTimeStamp(0.563712233292);
    msg.setSource(5326U);
    msg.setSourceEntity(18U);
    msg.setDestination(50285U);
    msg.setDestinationEntity(128U);
    msg.x = 0.248791748844;
    msg.y = 0.996094605537;
    msg.z = 0.277618962073;

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
    msg.setTimeStamp(0.728532593693);
    msg.setSource(64506U);
    msg.setSourceEntity(42U);
    msg.setDestination(65426U);
    msg.setDestinationEntity(17U);
    msg.va = 0.678494893385;
    msg.aoa = 0.839436514642;
    msg.ssa = 0.253687969251;

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
    msg.setTimeStamp(0.566382134536);
    msg.setSource(29337U);
    msg.setSourceEntity(43U);
    msg.setDestination(27370U);
    msg.setDestinationEntity(106U);
    msg.va = 0.731932288934;
    msg.aoa = 0.280609070911;
    msg.ssa = 0.146120232763;

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
    msg.setTimeStamp(0.850972317991);
    msg.setSource(45913U);
    msg.setSourceEntity(204U);
    msg.setDestination(31120U);
    msg.setDestinationEntity(183U);
    msg.va = 0.670030289972;
    msg.aoa = 0.511815218186;
    msg.ssa = 0.783680259881;

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
    msg.setTimeStamp(0.602019382359);
    msg.setSource(63911U);
    msg.setSourceEntity(121U);
    msg.setDestination(41566U);
    msg.setDestinationEntity(91U);
    msg.value = 0.268216031733;

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
    msg.setTimeStamp(0.162122704068);
    msg.setSource(20882U);
    msg.setSourceEntity(186U);
    msg.setDestination(519U);
    msg.setDestinationEntity(227U);
    msg.value = 0.958501413264;

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
    msg.setTimeStamp(0.168594101397);
    msg.setSource(30959U);
    msg.setSourceEntity(221U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(134U);
    msg.value = 0.953077077414;

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
    msg.setTimeStamp(0.988868062452);
    msg.setSource(11611U);
    msg.setSourceEntity(196U);
    msg.setDestination(44065U);
    msg.setDestinationEntity(194U);
    msg.value = 0.377829861579;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.295626278748);
    msg.setSource(20988U);
    msg.setSourceEntity(250U);
    msg.setDestination(43706U);
    msg.setDestinationEntity(208U);
    msg.value = 0.931659768416;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.217376569183);
    msg.setSource(18469U);
    msg.setSourceEntity(246U);
    msg.setDestination(18690U);
    msg.setDestinationEntity(207U);
    msg.value = 0.745454196477;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.333402795034);
    msg.setSource(18540U);
    msg.setSourceEntity(241U);
    msg.setDestination(31772U);
    msg.setDestinationEntity(102U);
    msg.value = 0.668457346337;
    msg.speed_units = 183U;

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
    msg.setTimeStamp(0.33302471993);
    msg.setSource(10278U);
    msg.setSourceEntity(103U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0878029910963;
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
    msg.setTimeStamp(0.873577183569);
    msg.setSource(20273U);
    msg.setSourceEntity(68U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(86U);
    msg.value = 0.248504074191;
    msg.speed_units = 62U;

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
    msg.setTimeStamp(0.261292456882);
    msg.setSource(35152U);
    msg.setSourceEntity(221U);
    msg.setDestination(50244U);
    msg.setDestinationEntity(139U);
    msg.value = 0.773170701456;

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
    msg.setTimeStamp(0.248634757402);
    msg.setSource(32116U);
    msg.setSourceEntity(102U);
    msg.setDestination(6440U);
    msg.setDestinationEntity(136U);
    msg.value = 0.293016746671;

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
    msg.setTimeStamp(0.340489103349);
    msg.setSource(15066U);
    msg.setSourceEntity(246U);
    msg.setDestination(18603U);
    msg.setDestinationEntity(143U);
    msg.value = 0.943680065638;

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
    msg.setTimeStamp(0.599521012919);
    msg.setSource(46671U);
    msg.setSourceEntity(184U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(203U);
    msg.value = 0.958020677382;

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
    msg.setTimeStamp(0.511534162132);
    msg.setSource(43628U);
    msg.setSourceEntity(77U);
    msg.setDestination(4656U);
    msg.setDestinationEntity(84U);
    msg.value = 0.338225047143;

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
    msg.setTimeStamp(0.689789263964);
    msg.setSource(51812U);
    msg.setSourceEntity(82U);
    msg.setDestination(6680U);
    msg.setDestinationEntity(72U);
    msg.value = 0.681964009755;

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
    msg.setTimeStamp(0.0908236649245);
    msg.setSource(47634U);
    msg.setSourceEntity(140U);
    msg.setDestination(32888U);
    msg.setDestinationEntity(111U);
    msg.value = 0.476371854165;

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
    msg.setTimeStamp(0.0598418921812);
    msg.setSource(52736U);
    msg.setSourceEntity(153U);
    msg.setDestination(65341U);
    msg.setDestinationEntity(192U);
    msg.value = 0.974229875831;

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
    msg.setTimeStamp(0.624126209353);
    msg.setSource(23255U);
    msg.setSourceEntity(218U);
    msg.setDestination(20097U);
    msg.setDestinationEntity(167U);
    msg.value = 0.712252688145;

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
    msg.setTimeStamp(0.156209049998);
    msg.setSource(35994U);
    msg.setSourceEntity(81U);
    msg.setDestination(27996U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 2905984294U;
    msg.start_lat = 0.35860933491;
    msg.start_lon = 0.0755434444685;
    msg.start_z = 0.28553744446;
    msg.start_z_units = 236U;
    msg.end_lat = 0.459328130771;
    msg.end_lon = 0.749336654642;
    msg.end_z = 0.578537556892;
    msg.end_z_units = 42U;
    msg.speed = 0.965618451428;
    msg.speed_units = 57U;
    msg.lradius = 0.114495255106;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.905542852307);
    msg.setSource(16213U);
    msg.setSourceEntity(210U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 364801592U;
    msg.start_lat = 0.927082592931;
    msg.start_lon = 0.990016684281;
    msg.start_z = 0.978924835648;
    msg.start_z_units = 129U;
    msg.end_lat = 0.107630435132;
    msg.end_lon = 0.534918077117;
    msg.end_z = 0.801797784763;
    msg.end_z_units = 228U;
    msg.speed = 0.187877317505;
    msg.speed_units = 178U;
    msg.lradius = 0.810680458182;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.518910318605);
    msg.setSource(50254U);
    msg.setSourceEntity(233U);
    msg.setDestination(11467U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 3116968632U;
    msg.start_lat = 0.940942373414;
    msg.start_lon = 0.0456012679972;
    msg.start_z = 0.755338358699;
    msg.start_z_units = 50U;
    msg.end_lat = 0.291098963185;
    msg.end_lon = 0.940834358434;
    msg.end_z = 0.76259783654;
    msg.end_z_units = 119U;
    msg.speed = 0.040253855165;
    msg.speed_units = 7U;
    msg.lradius = 0.592302981853;
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
    msg.setTimeStamp(0.976147456619);
    msg.setSource(31389U);
    msg.setSourceEntity(138U);
    msg.setDestination(58146U);
    msg.setDestinationEntity(224U);
    msg.x = 0.0396835907917;
    msg.y = 0.316036814338;
    msg.z = 0.671553985205;
    msg.k = 0.99701715832;
    msg.m = 0.295694131756;
    msg.n = 0.53217983933;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.571542709019);
    msg.setSource(41178U);
    msg.setSourceEntity(130U);
    msg.setDestination(28498U);
    msg.setDestinationEntity(182U);
    msg.x = 0.338272553452;
    msg.y = 0.621308007618;
    msg.z = 0.762908873795;
    msg.k = 0.158245684617;
    msg.m = 0.94343504998;
    msg.n = 0.0758320615531;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.937545985041);
    msg.setSource(44840U);
    msg.setSourceEntity(156U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(221U);
    msg.x = 0.31830013237;
    msg.y = 0.711433399013;
    msg.z = 0.890196382416;
    msg.k = 0.645583493123;
    msg.m = 0.196430924895;
    msg.n = 0.23303938622;
    msg.flags = 112U;

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
    msg.setTimeStamp(0.598771381082);
    msg.setSource(43658U);
    msg.setSourceEntity(180U);
    msg.setDestination(55604U);
    msg.setDestinationEntity(47U);
    msg.value = 0.307184775173;

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
    msg.setTimeStamp(0.181687479889);
    msg.setSource(48312U);
    msg.setSourceEntity(77U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(187U);
    msg.value = 0.97808017692;

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
    msg.setTimeStamp(0.837181176066);
    msg.setSource(15845U);
    msg.setSourceEntity(128U);
    msg.setDestination(54795U);
    msg.setDestinationEntity(213U);
    msg.value = 0.0150698159457;

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
    msg.setTimeStamp(0.466638949204);
    msg.setSource(53597U);
    msg.setSourceEntity(123U);
    msg.setDestination(27367U);
    msg.setDestinationEntity(43U);
    msg.u = 0.633832835993;
    msg.v = 0.203303369739;
    msg.w = 0.967117201359;
    msg.p = 0.615331856001;
    msg.q = 0.215110941161;
    msg.r = 0.119376452061;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.286378624637);
    msg.setSource(50513U);
    msg.setSourceEntity(112U);
    msg.setDestination(16311U);
    msg.setDestinationEntity(251U);
    msg.u = 0.209828899618;
    msg.v = 0.16088262083;
    msg.w = 0.797681198589;
    msg.p = 0.431012721533;
    msg.q = 0.763232750824;
    msg.r = 0.50518525248;
    msg.flags = 202U;

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
    msg.setTimeStamp(0.543267127695);
    msg.setSource(24841U);
    msg.setSourceEntity(77U);
    msg.setDestination(32367U);
    msg.setDestinationEntity(97U);
    msg.u = 0.949659541968;
    msg.v = 0.440190559951;
    msg.w = 0.830752075662;
    msg.p = 0.699278783824;
    msg.q = 0.896621484643;
    msg.r = 0.494811110236;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.485206733766);
    msg.setSource(25315U);
    msg.setSourceEntity(177U);
    msg.setDestination(20815U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 2564584117U;
    msg.start_lat = 0.520558102411;
    msg.start_lon = 0.192593806246;
    msg.start_z = 0.869666795407;
    msg.start_z_units = 19U;
    msg.end_lat = 0.294162742393;
    msg.end_lon = 0.31989638866;
    msg.end_z = 0.53565738756;
    msg.end_z_units = 50U;
    msg.lradius = 0.924694331396;
    msg.flags = 102U;
    msg.x = 0.264920854247;
    msg.y = 0.161988206171;
    msg.z = 0.114030579347;
    msg.vx = 0.0142910623706;
    msg.vy = 0.495689803721;
    msg.vz = 0.185600397246;
    msg.course_error = 0.0427159465905;
    msg.eta = 21101U;

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
    msg.setTimeStamp(0.523734252208);
    msg.setSource(59630U);
    msg.setSourceEntity(224U);
    msg.setDestination(37686U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 2426353118U;
    msg.start_lat = 0.881970436578;
    msg.start_lon = 0.443779549333;
    msg.start_z = 0.0888190117448;
    msg.start_z_units = 40U;
    msg.end_lat = 0.523795180088;
    msg.end_lon = 0.00301482668829;
    msg.end_z = 0.500976952535;
    msg.end_z_units = 192U;
    msg.lradius = 0.52538015187;
    msg.flags = 147U;
    msg.x = 0.970998840485;
    msg.y = 0.967235149967;
    msg.z = 0.491186585246;
    msg.vx = 0.973716524222;
    msg.vy = 0.309929508748;
    msg.vz = 0.460755997876;
    msg.course_error = 0.581965227939;
    msg.eta = 60462U;

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
    msg.setTimeStamp(0.281893252504);
    msg.setSource(45861U);
    msg.setSourceEntity(122U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 2307432804U;
    msg.start_lat = 0.434570671829;
    msg.start_lon = 0.648484094156;
    msg.start_z = 0.752876558347;
    msg.start_z_units = 116U;
    msg.end_lat = 0.441272305801;
    msg.end_lon = 0.43325460773;
    msg.end_z = 0.278213091977;
    msg.end_z_units = 209U;
    msg.lradius = 0.904518833732;
    msg.flags = 8U;
    msg.x = 0.467556933249;
    msg.y = 0.304358435493;
    msg.z = 0.713625704072;
    msg.vx = 0.583739383037;
    msg.vy = 0.308019371117;
    msg.vz = 0.775539907187;
    msg.course_error = 0.109013923872;
    msg.eta = 59352U;

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
    msg.setTimeStamp(0.649511136027);
    msg.setSource(8615U);
    msg.setSourceEntity(209U);
    msg.setDestination(17796U);
    msg.setDestinationEntity(13U);
    msg.k = 0.793058840576;
    msg.m = 0.665817479619;
    msg.n = 0.130850919995;

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
    msg.setTimeStamp(0.59986951025);
    msg.setSource(35531U);
    msg.setSourceEntity(173U);
    msg.setDestination(58150U);
    msg.setDestinationEntity(9U);
    msg.k = 0.235906301573;
    msg.m = 0.297135419956;
    msg.n = 0.980619779774;

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
    msg.setTimeStamp(0.243926746725);
    msg.setSource(6258U);
    msg.setSourceEntity(164U);
    msg.setDestination(37033U);
    msg.setDestinationEntity(83U);
    msg.k = 0.450015014167;
    msg.m = 0.216956455349;
    msg.n = 0.953805924962;

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
    msg.setTimeStamp(0.859186005284);
    msg.setSource(24143U);
    msg.setSourceEntity(186U);
    msg.setDestination(21004U);
    msg.setDestinationEntity(32U);
    msg.p = 0.739268308098;
    msg.i = 0.225728662403;
    msg.d = 0.557419184427;
    msg.a = 0.149389333747;

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
    msg.setTimeStamp(0.00439401924049);
    msg.setSource(21074U);
    msg.setSourceEntity(222U);
    msg.setDestination(45369U);
    msg.setDestinationEntity(246U);
    msg.p = 0.539546491948;
    msg.i = 0.554014123475;
    msg.d = 0.202369709572;
    msg.a = 0.150062374015;

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
    msg.setTimeStamp(0.249695969985);
    msg.setSource(11321U);
    msg.setSourceEntity(81U);
    msg.setDestination(8941U);
    msg.setDestinationEntity(87U);
    msg.p = 0.986568259192;
    msg.i = 0.913501241707;
    msg.d = 0.505869274199;
    msg.a = 0.730379322088;

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
    msg.setTimeStamp(0.677234121755);
    msg.setSource(2591U);
    msg.setSourceEntity(155U);
    msg.setDestination(163U);
    msg.setDestinationEntity(163U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.940278749005);
    msg.setSource(9121U);
    msg.setSourceEntity(132U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(20U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.253547427545);
    msg.setSource(7053U);
    msg.setSourceEntity(60U);
    msg.setDestination(50349U);
    msg.setDestinationEntity(115U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.637108734547);
    msg.setSource(35442U);
    msg.setSourceEntity(71U);
    msg.setDestination(5403U);
    msg.setDestinationEntity(165U);
    msg.x = 0.0598493041447;
    msg.y = 0.63237012984;
    msg.z = 0.902710618916;
    msg.vx = 0.391503310305;
    msg.vy = 0.527442540341;
    msg.vz = 0.125678927414;
    msg.ax = 0.327489770971;
    msg.ay = 0.0217762065485;
    msg.az = 0.343694552788;
    msg.flags = 29904U;

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
    msg.setTimeStamp(0.128442584717);
    msg.setSource(15478U);
    msg.setSourceEntity(109U);
    msg.setDestination(13892U);
    msg.setDestinationEntity(146U);
    msg.x = 0.070509276106;
    msg.y = 0.450911566881;
    msg.z = 0.425692864679;
    msg.vx = 0.589556831988;
    msg.vy = 0.0993883846786;
    msg.vz = 0.84793834453;
    msg.ax = 0.552083992614;
    msg.ay = 0.672023225533;
    msg.az = 0.91841541159;
    msg.flags = 14810U;

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
    msg.setTimeStamp(0.174227576548);
    msg.setSource(52978U);
    msg.setSourceEntity(234U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(156U);
    msg.x = 0.233264132696;
    msg.y = 0.210360680031;
    msg.z = 0.999906607668;
    msg.vx = 0.167083635004;
    msg.vy = 0.972580958889;
    msg.vz = 0.681379387272;
    msg.ax = 0.958651951337;
    msg.ay = 0.226281120435;
    msg.az = 0.122602099083;
    msg.flags = 6303U;

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
    msg.setTimeStamp(0.0324721525399);
    msg.setSource(35049U);
    msg.setSourceEntity(233U);
    msg.setDestination(19781U);
    msg.setDestinationEntity(250U);
    msg.value = 0.667625260401;

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
    msg.setTimeStamp(0.600740103855);
    msg.setSource(42579U);
    msg.setSourceEntity(139U);
    msg.setDestination(38220U);
    msg.setDestinationEntity(94U);
    msg.value = 0.602223902616;

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
    msg.setTimeStamp(0.848664869592);
    msg.setSource(9957U);
    msg.setSourceEntity(5U);
    msg.setDestination(56499U);
    msg.setDestinationEntity(253U);
    msg.value = 0.213972576136;

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
    msg.setTimeStamp(0.148269839347);
    msg.setSource(64521U);
    msg.setSourceEntity(222U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(205U);
    msg.timeout = 60975U;
    msg.lat = 0.859902607527;
    msg.lon = 0.0712890720285;
    msg.z = 0.259178514004;
    msg.z_units = 108U;
    msg.speed = 0.875307973708;
    msg.speed_units = 148U;
    msg.roll = 0.492747046329;
    msg.pitch = 0.37488656815;
    msg.yaw = 0.773300290503;
    msg.custom.assign("YBKAUZGRHJTOJGTCKIIQAOVZWWXSPYHPNMBEVYMVYJLUWOQSFASWMLNANIKIBDGHUJUTRHDCZWHOROKSCTJMTMIMNNRVILLXECMRCXINYKOBBWMIVQNEUYELXDGPBWUWRFYSVSSAKUKQD");

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
    msg.setTimeStamp(0.492310619966);
    msg.setSource(42453U);
    msg.setSourceEntity(105U);
    msg.setDestination(28436U);
    msg.setDestinationEntity(118U);
    msg.timeout = 3599U;
    msg.lat = 0.96809419485;
    msg.lon = 0.920777799643;
    msg.z = 0.929493883926;
    msg.z_units = 6U;
    msg.speed = 0.0289852757927;
    msg.speed_units = 81U;
    msg.roll = 0.0357620254889;
    msg.pitch = 0.243589926734;
    msg.yaw = 0.333064207102;
    msg.custom.assign("JAHMWEFUZZHCEOTRFLBDNGDCYHSGEVWGQZUOHYGJEUFLQNWBJPIIMXDFBTZYAZJKFKOTVKRDKVNGXFNJRIDPGUDNHNYAQPOATAHDSCRBSMYHINCSSWAJJTIQSRTXVXARZMMNJOHTKOPAQVDCPGDWVCCQK");

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
    msg.setTimeStamp(0.0264127618022);
    msg.setSource(62659U);
    msg.setSourceEntity(84U);
    msg.setDestination(23465U);
    msg.setDestinationEntity(61U);
    msg.timeout = 30191U;
    msg.lat = 0.857670694003;
    msg.lon = 0.214934678117;
    msg.z = 0.0825554653644;
    msg.z_units = 191U;
    msg.speed = 0.100288331492;
    msg.speed_units = 12U;
    msg.roll = 0.648803846165;
    msg.pitch = 0.975457511844;
    msg.yaw = 0.318392015592;
    msg.custom.assign("CJHHDVSQYNFODNAHSJYNUVOPJPQGGTSGPWCZTASVXJNPAPQTOXRBJRORMNIROEPUTKXQFLQJRIUZWWCZMLHVAWWVXGPOCQKCOTGVBIVRJHXSQGFUJEUAWLMRINYJCZGUEIREPKBABNZEKEDNBGMNZFEXARUXLTDFYTFFXFDCLPYAHBVLXZKYSQMCZRUKYLW");

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
    msg.setTimeStamp(0.412697729656);
    msg.setSource(39971U);
    msg.setSourceEntity(121U);
    msg.setDestination(1117U);
    msg.setDestinationEntity(78U);
    msg.timeout = 21716U;
    msg.lat = 0.399977171351;
    msg.lon = 0.913108412782;
    msg.z = 0.411185198319;
    msg.z_units = 164U;
    msg.speed = 0.645622016457;
    msg.speed_units = 185U;
    msg.duration = 47841U;
    msg.radius = 0.45130787794;
    msg.flags = 78U;
    msg.custom.assign("RCAPYGOGDTLQFRWYJIQFNLESAPOTEJCIIYPKNUWKDZVBUNVUXOZPSFATBMDMEFBOPWRKGRBFZDOEYBMTBJLLBYCCEMPHMCLBYEVOD");

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
    msg.setTimeStamp(0.795876537364);
    msg.setSource(57344U);
    msg.setSourceEntity(183U);
    msg.setDestination(54288U);
    msg.setDestinationEntity(138U);
    msg.timeout = 40211U;
    msg.lat = 0.178680553728;
    msg.lon = 0.707598898708;
    msg.z = 0.841686498742;
    msg.z_units = 243U;
    msg.speed = 0.478421200993;
    msg.speed_units = 118U;
    msg.duration = 19989U;
    msg.radius = 0.913002142404;
    msg.flags = 25U;
    msg.custom.assign("SVBSQMHFJIUZWRVBPOZWLDWYHBTZVGMQVGCUFCRSKLMTBRDNCZNSFENSCJYCROLKPYHLTXZNVREJXTXXDIYEPENRAFFOJTQMMOKAIUJOYNKWZOPACKMWTYQVKXUXKPNOTNAFL");

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
    msg.setTimeStamp(0.832782329899);
    msg.setSource(6009U);
    msg.setSourceEntity(248U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(209U);
    msg.timeout = 39943U;
    msg.lat = 0.145175769957;
    msg.lon = 0.907669006994;
    msg.z = 0.494031035887;
    msg.z_units = 213U;
    msg.speed = 0.471040482368;
    msg.speed_units = 159U;
    msg.duration = 23374U;
    msg.radius = 0.41973902078;
    msg.flags = 239U;
    msg.custom.assign("RTEQKBRXMMCBIVWGQYMORGQYTYVGMECONPWWJTRUCPINAEYSSYUCIBVLECJLODFFYFSSRFHGROYLAXPQNHOGVFIAAFKWWOYJBWJAEPQSUBZFMRGUKTHZHJSFDKLBGLNQHUOJPACVGTZKZVUKDXBMECNEZXZZNBNHTCSKGBQFBVORDVJELWYPDILFSWSMQD");

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
    msg.setTimeStamp(0.283921590997);
    msg.setSource(27514U);
    msg.setSourceEntity(181U);
    msg.setDestination(10764U);
    msg.setDestinationEntity(35U);
    msg.custom.assign("FGAVUTYXLPVGAZHPINKBLQLAUTKAWXCAVYVCQAOUJBPQJLFONAIDRCKCDTSKRHSSBGSYMNOEBCMMAZXBHMHSRCOMQBWVTYCFKDVXZIFVUPEUPVGLQOHRPJYQSYTRKWRBBZFQWXIWZPTJRZNAURNESAVHXJFEEUJYCEMFHGKWWTVBTZEJDGQMSQXKCLMNHZWDMJGRHEJE");

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
    msg.setTimeStamp(0.0610779263912);
    msg.setSource(48442U);
    msg.setSourceEntity(23U);
    msg.setDestination(27456U);
    msg.setDestinationEntity(192U);
    msg.custom.assign("VUHFPPYQXEUEFOWOUYJRNDGJLMWNBODSSJEGBDTHUDLPHSYTQGCMKIEPVXQKNJSEVESS");

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
    msg.setTimeStamp(0.65381805081);
    msg.setSource(44360U);
    msg.setSourceEntity(19U);
    msg.setDestination(48730U);
    msg.setDestinationEntity(25U);
    msg.custom.assign("ZQJCNCQRJPCFGDKZIBRLEKEOLBKUXQOVNORUEGSAPTRYKXSADFDPSAGFMFMDVNGDKPMBZKJP");

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
    msg.setTimeStamp(0.925466665666);
    msg.setSource(4256U);
    msg.setSourceEntity(172U);
    msg.setDestination(22658U);
    msg.setDestinationEntity(184U);
    msg.timeout = 36988U;
    msg.lat = 0.202469991622;
    msg.lon = 0.446806817658;
    msg.z = 0.954942363405;
    msg.z_units = 136U;
    msg.duration = 3631U;
    msg.speed = 0.67486714933;
    msg.speed_units = 112U;
    msg.type = 17U;
    msg.radius = 0.857970179863;
    msg.length = 0.745839351781;
    msg.bearing = 0.055115137007;
    msg.direction = 134U;
    msg.custom.assign("XJSUDBEDZROVUZECPGUNDMLAICYBBTNGSJYRZPUBEWMVJIZNOYNFFEKISSAALYPCVQMXQZANVIPKLJWOUKEPSFKZOWQAXQKVFIKFOTMHQGJGFNWDRCDBFECWMRNGHCLRMXDJJBBZTKXBVPHGYCDTXVHEPGELHATBRGBOLMXSJCFQQLFUSKUSWMUESWOJHRPGEUHTMCLGANSV");

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
    msg.setTimeStamp(0.0356115640758);
    msg.setSource(27557U);
    msg.setSourceEntity(105U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(197U);
    msg.timeout = 24045U;
    msg.lat = 0.778267297676;
    msg.lon = 0.0581077182619;
    msg.z = 0.823970100477;
    msg.z_units = 83U;
    msg.duration = 48889U;
    msg.speed = 0.32740237242;
    msg.speed_units = 136U;
    msg.type = 21U;
    msg.radius = 0.764954798909;
    msg.length = 0.0772725262117;
    msg.bearing = 0.373510611675;
    msg.direction = 174U;
    msg.custom.assign("VQDFMZCPGDLXFTPMQLMMYUTZYWGDAIPWVEQSYGJLHIGHEVBMEHQVVBGHYDKNCKURHNHAPJIVDVFULSLNQNUWJKKWYTGMLYPPGDAEAESIRHIJEQJKUXZONYXBRKSGACSFDQNSJBABMJMFNBRNNRVQKLCMGYCZQAOOWFURHQHGXPOBPNDWPXOUZRLEORSITOWWSFCERJDA");

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
    msg.setTimeStamp(0.0314839342785);
    msg.setSource(25144U);
    msg.setSourceEntity(45U);
    msg.setDestination(634U);
    msg.setDestinationEntity(89U);
    msg.timeout = 56323U;
    msg.lat = 0.283976508524;
    msg.lon = 0.877755125643;
    msg.z = 0.507163516285;
    msg.z_units = 191U;
    msg.duration = 30145U;
    msg.speed = 0.0299714610602;
    msg.speed_units = 226U;
    msg.type = 231U;
    msg.radius = 0.28408927013;
    msg.length = 0.0793001712582;
    msg.bearing = 0.171358539275;
    msg.direction = 247U;
    msg.custom.assign("KWNSUVVHLTRDVEXPDHBGKXKZYPMOCBWIMOAOEICGERRLMHRMHCQQNFIPCYQLIRBTQSPRDGZLLMZVIYONIKNAQQCZFEJVYBJHJBTYTFPP");

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
    msg.setTimeStamp(0.110102550543);
    msg.setSource(5674U);
    msg.setSourceEntity(109U);
    msg.setDestination(113U);
    msg.setDestinationEntity(239U);
    msg.duration = 33428U;
    msg.custom.assign("CUGBHJDAJLGJSNLIPHDMNJXYPTOYIDHOZTAZSCSEYBLWYGFUDYQPNOKACXXLFRGUCOSTJKEDAYCRMERSEFIBWQNKJXDWXALIHWQEZWQRVNGMHMDMRTPVBFNAWYGHZSQEGUCTUVSRKQVMTULDNBIJYLFZRUQYMZGETSTDGXABBVCEFJUMORJWQZUVAOCQNHVLIKVOHDKFWQPWN");

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
    msg.setTimeStamp(0.352388763711);
    msg.setSource(21009U);
    msg.setSourceEntity(245U);
    msg.setDestination(57084U);
    msg.setDestinationEntity(228U);
    msg.duration = 572U;
    msg.custom.assign("AWAZTXJNOHNFFTZOVDTRQYG");

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
    msg.setTimeStamp(0.95812348041);
    msg.setSource(52524U);
    msg.setSourceEntity(106U);
    msg.setDestination(17385U);
    msg.setDestinationEntity(118U);
    msg.duration = 31732U;
    msg.custom.assign("VMSCDKDBFJVAZDXMVPKRNFZKZWODEKXKFJWWRZLPJYPDUSHCUBYHWXMSWXIGPEELUMXBRLRBZASDXMRSQAENHVCKAUVOAKPWVHNRCJBVFNHGJISUAYIJJTNHUMZFOPFHFLGAVTOBYJTNTDWEGGBFCEAOWQICGMTXLSMQDYVIAGRNPSCPTTPRXIFHONRIQUOLBBTKGUICCYPWOVJQWGNXOLOCESYQLTIEEHZFSEYMBUMQATZKDKQGIQYR");

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
    msg.setTimeStamp(0.204470996144);
    msg.setSource(41888U);
    msg.setSourceEntity(218U);
    msg.setDestination(11201U);
    msg.setDestinationEntity(116U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.515345985698;
    msg.control.set(tmp_msg_0);
    msg.duration = 1596U;
    msg.custom.assign("XLTOTXBOUWDRJMHSUHZHRNOKREJQXSLGCRYUQVHSAKBRZLPCNPIUPSNWPIZFSGWACRSKAEDWAFHRJNYLYVPXUWTHXHEMEPOIELFDXLEGMKWWFHZRIKMADTGKPYBWQNKBFAFWRCTIGUQTQYIDEOQZXBSZBZMVJGKVJOJNXLKAELLIBUXDM");

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
    msg.setTimeStamp(0.0685486638828);
    msg.setSource(1488U);
    msg.setSourceEntity(103U);
    msg.setDestination(63999U);
    msg.setDestinationEntity(175U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.71370772796;
    msg.control.set(tmp_msg_0);
    msg.duration = 46708U;
    msg.custom.assign("SXVQTSLDMAQKXGEEHRSYVOZFWOGFAAULZTYBLPHZKTVYGCIMXCTDPBJWQHCYOCKFPLPPVNFZUJLHKQWKKTRGNWB");

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
    msg.setTimeStamp(0.163191598072);
    msg.setSource(28054U);
    msg.setSourceEntity(232U);
    msg.setDestination(2491U);
    msg.setDestinationEntity(189U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4185198595U;
    tmp_msg_0.start_lat = 0.737968563998;
    tmp_msg_0.start_lon = 0.692996874056;
    tmp_msg_0.start_z = 0.545005900739;
    tmp_msg_0.start_z_units = 78U;
    tmp_msg_0.end_lat = 0.701089110269;
    tmp_msg_0.end_lon = 0.0337693768818;
    tmp_msg_0.end_z = 0.438301805138;
    tmp_msg_0.end_z_units = 67U;
    tmp_msg_0.speed = 0.0716635257381;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.lradius = 0.983967907164;
    tmp_msg_0.flags = 223U;
    msg.control.set(tmp_msg_0);
    msg.duration = 50500U;
    msg.custom.assign("FRBYIMIHYUYTWHJFZR");

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
    msg.setTimeStamp(0.908396256374);
    msg.setSource(16724U);
    msg.setSourceEntity(102U);
    msg.setDestination(38036U);
    msg.setDestinationEntity(147U);
    msg.timeout = 33027U;
    msg.lat = 0.177904821992;
    msg.lon = 0.984295967026;
    msg.z = 0.782235138376;
    msg.z_units = 180U;
    msg.speed = 0.463981343544;
    msg.speed_units = 83U;
    msg.bearing = 0.312234554637;
    msg.cross_angle = 0.902626891267;
    msg.width = 0.174637010932;
    msg.length = 0.347993412065;
    msg.hstep = 0.508040377036;
    msg.coff = 14U;
    msg.alternation = 103U;
    msg.flags = 190U;
    msg.custom.assign("PFDCCTNOWJXJZQHPPJHGZOVDFMTZDXGSNIZUFIRHYAGKVQSDOOJPYSYSPCGGJVMPGEMARBEQLUYQBXELOQBSVBIQRFAFXVIKEITAMNLRLUQQHBHCAAURWKADKXCWHLMATZLTCLLHODQWDTKOBWZVWIYPXNZOAJLWHIBEHMENERUJHISXIJSRBKRKKWE");

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
    msg.setTimeStamp(0.552624550894);
    msg.setSource(25672U);
    msg.setSourceEntity(160U);
    msg.setDestination(16002U);
    msg.setDestinationEntity(66U);
    msg.timeout = 54723U;
    msg.lat = 0.722330754868;
    msg.lon = 0.169681014576;
    msg.z = 0.452281535254;
    msg.z_units = 94U;
    msg.speed = 0.884985872333;
    msg.speed_units = 13U;
    msg.bearing = 0.18890093467;
    msg.cross_angle = 0.704988022275;
    msg.width = 0.335308115347;
    msg.length = 0.487046393693;
    msg.hstep = 0.0859042970756;
    msg.coff = 240U;
    msg.alternation = 207U;
    msg.flags = 62U;
    msg.custom.assign("NAXNZUOITAHEGLTXRHCVEVTMPVZIRYPRAFNWBHNRDEDPDKKFWSGSSNXAYSULUQTFOCJGWBOISBYMRTEJJRHSIFCKPQHYARCVAXAGKKBGCLVCQJHEDJPUOULIIUBWWHQJGINFMKYZVMBETWUGVOFLBUZJXBXYGLBMLWTXOZFKROECE");

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
    msg.setTimeStamp(0.0826093325238);
    msg.setSource(6569U);
    msg.setSourceEntity(53U);
    msg.setDestination(44533U);
    msg.setDestinationEntity(216U);
    msg.timeout = 40645U;
    msg.lat = 0.593341459886;
    msg.lon = 0.220192619235;
    msg.z = 0.613353622776;
    msg.z_units = 5U;
    msg.speed = 0.572854013434;
    msg.speed_units = 215U;
    msg.bearing = 0.4209111532;
    msg.cross_angle = 0.457027532157;
    msg.width = 0.14512888469;
    msg.length = 0.977796809156;
    msg.hstep = 0.244326900946;
    msg.coff = 251U;
    msg.alternation = 19U;
    msg.flags = 56U;
    msg.custom.assign("GALGAYCXLHZEUNERHWPKCWYVRABHAKDQUSBLTELBOTHUHRXFFYAJFUQNTCFZPQGKIWZ");

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
    msg.setTimeStamp(0.483070558899);
    msg.setSource(57716U);
    msg.setSourceEntity(254U);
    msg.setDestination(63930U);
    msg.setDestinationEntity(95U);
    msg.timeout = 63012U;
    msg.lat = 0.273383641009;
    msg.lon = 0.394490810193;
    msg.z = 0.530429442036;
    msg.z_units = 169U;
    msg.speed = 0.0750767224551;
    msg.speed_units = 56U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.312514032715;
    tmp_msg_0.y = 0.383425024586;
    tmp_msg_0.z = 0.507149510149;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OZGRQNGPAVLTBPRAFIJNSUWPKXUJRMXOOXMTXYYFINFGSMKIXVDVPDWMBYAOBYZWMFIOTSKJLGVCCDTGPRDUHVBJRNZCVJOFPRBJIVGYNFNMZYKXSEAOREKUKHCIMSAXWAZLUOFQWUDSPHQMLKZVCRDNEHGSJJXZBEWTGNWBGQEZEZASPLTHYLCNWSLXTXTEFOGQCAJDULRBPZNEWJPQSQRQVIUIFECKIYUWDUDYDQKHCBLOTCAHHH");

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
    msg.setTimeStamp(0.908756622169);
    msg.setSource(2036U);
    msg.setSourceEntity(204U);
    msg.setDestination(24261U);
    msg.setDestinationEntity(121U);
    msg.timeout = 56339U;
    msg.lat = 0.885754387037;
    msg.lon = 0.4882698236;
    msg.z = 0.182884912144;
    msg.z_units = 39U;
    msg.speed = 0.167093606846;
    msg.speed_units = 17U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.167290544074;
    tmp_msg_0.y = 0.0531610385733;
    tmp_msg_0.z = 0.851765693931;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QKOWEWWEGKBTYKSUJBQJFAXQMCAFHTQRRVQAVNLWNMNAFSMJRMCDSTQJBXVCCGAMVZBLIKXRNDNDELJWVEYGKGXKWSOLVSVTPSNZZLWXXTPYHQFXIORZGZLYGIPUUDJFIUZIF");

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
    msg.setTimeStamp(0.535409915765);
    msg.setSource(33386U);
    msg.setSourceEntity(183U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(55U);
    msg.timeout = 17812U;
    msg.lat = 0.00433972750954;
    msg.lon = 0.997679679064;
    msg.z = 0.490461040292;
    msg.z_units = 158U;
    msg.speed = 0.024546139724;
    msg.speed_units = 86U;
    msg.custom.assign("MPRMGZJUSKNWYZZOLEOVCZSADOEXLXJDLMEUJHEMIPLYKAUNHTCFOFVUBPZLRKQTCDUDGHWFTRGBOBLYXCSLHCCSWXDTCAIQRGIEJYYHQXMNUMKZBYBQTNUMGKSQY");

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
    msg.setTimeStamp(0.351307387006);
    msg.setSource(49357U);
    msg.setSourceEntity(174U);
    msg.setDestination(24009U);
    msg.setDestinationEntity(6U);
    msg.x = 0.956143655345;
    msg.y = 0.498816511451;
    msg.z = 0.783123870687;

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
    msg.setTimeStamp(0.0423861895304);
    msg.setSource(22873U);
    msg.setSourceEntity(142U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(211U);
    msg.x = 0.194281920006;
    msg.y = 0.913512210621;
    msg.z = 0.646221065316;

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
    msg.setTimeStamp(0.18972001098);
    msg.setSource(1647U);
    msg.setSourceEntity(138U);
    msg.setDestination(31448U);
    msg.setDestinationEntity(76U);
    msg.x = 0.784076058999;
    msg.y = 0.529169900372;
    msg.z = 0.512092671174;

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
    msg.setTimeStamp(0.893982550681);
    msg.setSource(12942U);
    msg.setSourceEntity(178U);
    msg.setDestination(45556U);
    msg.setDestinationEntity(99U);
    msg.timeout = 48174U;
    msg.lat = 0.625117526284;
    msg.lon = 0.632854557114;
    msg.z = 0.763766149058;
    msg.z_units = 90U;
    msg.amplitude = 0.355119860041;
    msg.pitch = 0.301089860229;
    msg.speed = 0.837158573112;
    msg.speed_units = 49U;
    msg.custom.assign("PLEKTBPXEHWERUOEFDKCKWEGXJVAVUGOXIZDILYHTWNK");

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
    msg.setTimeStamp(0.229675145977);
    msg.setSource(57383U);
    msg.setSourceEntity(208U);
    msg.setDestination(35649U);
    msg.setDestinationEntity(201U);
    msg.timeout = 33013U;
    msg.lat = 0.728670466043;
    msg.lon = 0.770970400338;
    msg.z = 0.93569954029;
    msg.z_units = 138U;
    msg.amplitude = 0.915841860887;
    msg.pitch = 0.349250487884;
    msg.speed = 0.667118612112;
    msg.speed_units = 109U;
    msg.custom.assign("BTDXXRLXIFVJIEEOFIZWYCOWGBEOOJPUQKELCHYNLOQCMFPOBLAKUXVYKXGHSXHEYFPGISKANDJSAZBAQUICCZ");

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
    msg.setTimeStamp(0.027058082755);
    msg.setSource(56258U);
    msg.setSourceEntity(140U);
    msg.setDestination(9573U);
    msg.setDestinationEntity(173U);
    msg.timeout = 43483U;
    msg.lat = 0.536007695561;
    msg.lon = 0.0582589246867;
    msg.z = 0.0757435599542;
    msg.z_units = 90U;
    msg.amplitude = 0.346227680644;
    msg.pitch = 0.335867268621;
    msg.speed = 0.560138164074;
    msg.speed_units = 167U;
    msg.custom.assign("HTOPDJXXFSKVEAOXSTTVWNQOTVNNGHBMQYDFIAZTRSQFYQCIAMOTMWGCVWXFPPDEEYUMWQLKSUQDXHXLUSEWNEITKUCEFESYCOZPFMJWYRBUBPNZNVALJVZZBKJAHVBDHIFTCN");

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
    msg.setTimeStamp(0.471107924991);
    msg.setSource(35763U);
    msg.setSourceEntity(50U);
    msg.setDestination(16012U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.279923237322);
    msg.setSource(7337U);
    msg.setSourceEntity(194U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.825040101589);
    msg.setSource(63346U);
    msg.setSourceEntity(42U);
    msg.setDestination(45891U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.67383274705);
    msg.setSource(26557U);
    msg.setSourceEntity(139U);
    msg.setDestination(56740U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.851395476882;
    msg.lon = 0.301063879747;
    msg.z = 0.503604023098;
    msg.z_units = 111U;
    msg.radius = 0.205298908381;
    msg.duration = 59841U;
    msg.speed = 0.360694591816;
    msg.speed_units = 57U;
    msg.custom.assign("WRJJGFQGZZYNIPCESUHSBTWREWGYRYOFBDIQIZKJTHXPKMNDGVJDSFKBACLUPDOAUYVSOQH");

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
    msg.setTimeStamp(0.644400985861);
    msg.setSource(2785U);
    msg.setSourceEntity(96U);
    msg.setDestination(39337U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.35508524315;
    msg.lon = 0.932902285467;
    msg.z = 0.129703833863;
    msg.z_units = 156U;
    msg.radius = 0.301672797462;
    msg.duration = 41730U;
    msg.speed = 0.218714187419;
    msg.speed_units = 178U;
    msg.custom.assign("CPETBPAVBTXDVNKJFGJUZJCBRBIHIJTJXYRKGBIBAMUOYYMZPOMLJNRGXFMSRURAQFHJMZWTTXJPQJGQREUHLQSHHSWZTYLELYZKUDWDOZLXUCFIMEECKDCTEWLNWSSYIDNZGI");

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
    msg.setTimeStamp(0.966368607691);
    msg.setSource(57649U);
    msg.setSourceEntity(229U);
    msg.setDestination(37188U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.40329985663;
    msg.lon = 0.184476362796;
    msg.z = 0.534530300575;
    msg.z_units = 61U;
    msg.radius = 0.792135036102;
    msg.duration = 569U;
    msg.speed = 0.195920866134;
    msg.speed_units = 251U;
    msg.custom.assign("TMJLRDWKCZHEBJYSZLKSKNAWHNZQSMGVYCYWSNBACMUIJTWHORPPUQDFRCEUCQOWIOLJCXSUQUPVPSYQWFPOLADGAZXLLBCGMMOUAFOIIVLRXLTSHJSUGEXXBJXLDIZQKSXZMOGPTEBEYMFXGFWTBYJSJRIEDVXHJAPVKFNRECPRWQEHZYRKNBAVZOTTAQU");

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
    msg.setTimeStamp(0.865210707876);
    msg.setSource(44733U);
    msg.setSourceEntity(153U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(76U);
    msg.timeout = 58181U;
    msg.flags = 39U;
    msg.lat = 0.89752714206;
    msg.lon = 0.208599687236;
    msg.start_z = 0.810820100862;
    msg.start_z_units = 179U;
    msg.end_z = 0.426836848913;
    msg.end_z_units = 75U;
    msg.radius = 0.509485703875;
    msg.speed = 0.664431289001;
    msg.speed_units = 107U;
    msg.custom.assign("AMTWOFGXBSZFARIAOUQVPEZQNOZLMEXGXVZJDRTPFGIKUUBPSWLSFQCQQVCQWUNDOSUNRMXFYRJXRQTIRTHDXYADAIEWBGVAAZPZCNY");

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
    msg.setTimeStamp(0.612605985307);
    msg.setSource(24010U);
    msg.setSourceEntity(193U);
    msg.setDestination(19698U);
    msg.setDestinationEntity(203U);
    msg.timeout = 48247U;
    msg.flags = 20U;
    msg.lat = 0.477318815727;
    msg.lon = 0.9826179165;
    msg.start_z = 0.425849795637;
    msg.start_z_units = 208U;
    msg.end_z = 0.207084720422;
    msg.end_z_units = 213U;
    msg.radius = 0.957850898163;
    msg.speed = 0.894861612586;
    msg.speed_units = 218U;
    msg.custom.assign("LDQWABFSZJCOORLFSPJBIAFGIDJIXUYYSWHPEBDETFKZUTDVABYGDNRJNALVBDHONMKAQHKKUEQSORVUCMCHJLPIIEXSNBWQWHVPRLFLJJPENTEVZYQGWPDOHULMFAGXACCG");

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
    msg.setTimeStamp(0.233656960939);
    msg.setSource(55213U);
    msg.setSourceEntity(164U);
    msg.setDestination(6984U);
    msg.setDestinationEntity(23U);
    msg.timeout = 61451U;
    msg.flags = 45U;
    msg.lat = 0.0574572978851;
    msg.lon = 0.603821370557;
    msg.start_z = 0.46695581409;
    msg.start_z_units = 47U;
    msg.end_z = 0.40980081992;
    msg.end_z_units = 90U;
    msg.radius = 0.550220247197;
    msg.speed = 0.839046742885;
    msg.speed_units = 187U;
    msg.custom.assign("HXJVHIOBUPFVHIKQYNJKSPSEPKJGCMZQIDGAVISFANCSYDKLXGAOMTRREZSMYNMIQQWLHINCVEGUXKTOIZNSJMRQYOWNUTFGVCHZOUALWHEDQTIWOLZDUCTRWPUYLC");

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
    msg.setTimeStamp(0.111859625473);
    msg.setSource(1749U);
    msg.setSourceEntity(127U);
    msg.setDestination(50450U);
    msg.setDestinationEntity(153U);
    msg.timeout = 43832U;
    msg.lat = 0.390676591283;
    msg.lon = 0.297454791039;
    msg.z = 0.510452505922;
    msg.z_units = 221U;
    msg.speed = 0.209915001965;
    msg.speed_units = 7U;
    msg.custom.assign("SDQRKZGDZBRORCXPKKHIUCC");

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
    msg.setTimeStamp(0.976711173003);
    msg.setSource(16430U);
    msg.setSourceEntity(42U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(94U);
    msg.timeout = 57458U;
    msg.lat = 0.716520292357;
    msg.lon = 0.688090130013;
    msg.z = 0.0160704946209;
    msg.z_units = 44U;
    msg.speed = 0.783307012184;
    msg.speed_units = 176U;
    msg.custom.assign("HLEPOUDRFPZLVYALQJSNFVKUMDVPRGBQZKYATFSQOGZVAYMTMGXBTBSUWJBNYGJGPGHKFENZLCHKAYTJZBPCDOQDVLFEUXHFEJISXCDFZCEWXBXBYGALONWRWNRDHMVWSLWUXVWPEJOLSTNNIVT");

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
    msg.setTimeStamp(0.929768362619);
    msg.setSource(38721U);
    msg.setSourceEntity(76U);
    msg.setDestination(17164U);
    msg.setDestinationEntity(92U);
    msg.timeout = 9553U;
    msg.lat = 0.0659203637682;
    msg.lon = 0.22318889033;
    msg.z = 0.835656549468;
    msg.z_units = 114U;
    msg.speed = 0.551159819292;
    msg.speed_units = 249U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0685110798689;
    tmp_msg_0.y = 0.166718416898;
    tmp_msg_0.z = 0.228475995453;
    tmp_msg_0.t = 0.388252611739;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VHZTKCRLJPSNYIAMRSMEBQRILWJOXSBQNAFYNMAOLJMYHYCBVUAJNYKRDRBCMFYDWGADBZTIBWVSMTWZBKHVUFFPTGHNNBHSGXUZNEXTGICEKZOQDOTUJJEVLDCIRWXUVMVDEJGIFUUIYQPFKGCAJIPRWWAYEGPVLTVEDZQICWJQHARSHINPZTMFZKYHOLLJNHKKLKAMFPRLUFCQFLGRSQEN");

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
    msg.setTimeStamp(0.296027795573);
    msg.setSource(8001U);
    msg.setSourceEntity(16U);
    msg.setDestination(41431U);
    msg.setDestinationEntity(44U);
    msg.x = 0.579171562645;
    msg.y = 0.408491711999;
    msg.z = 0.10752217129;
    msg.t = 0.244204524932;

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
    msg.setTimeStamp(0.526595491588);
    msg.setSource(49970U);
    msg.setSourceEntity(43U);
    msg.setDestination(12127U);
    msg.setDestinationEntity(7U);
    msg.x = 0.774004578773;
    msg.y = 0.132637208532;
    msg.z = 0.308773699533;
    msg.t = 0.960157630269;

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
    msg.setTimeStamp(0.0732804456759);
    msg.setSource(41U);
    msg.setSourceEntity(109U);
    msg.setDestination(11110U);
    msg.setDestinationEntity(62U);
    msg.x = 0.503397710628;
    msg.y = 0.521264312316;
    msg.z = 0.827658790157;
    msg.t = 0.941610000824;

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
    msg.setTimeStamp(0.300799);
    msg.setSource(50259U);
    msg.setSourceEntity(41U);
    msg.setDestination(16578U);
    msg.setDestinationEntity(24U);
    msg.timeout = 62406U;
    msg.name.assign("GMKUNNMNKRUQRBEYJVXDILGQIVQBLHAHLPAOPYWTQRJJQRKMXDNBXFOCSGFXHEKEPBYXUDUFOKZHKZYHTMCFUVDMFDMGVELKATGNEURLYSKZESXLHPVCVNNAIQUISPVEGYXAAOFGOWUWNZTRGHMCJTXEVOZZSLQZVWSSWTLFDORJETMYFNFBFMIBBXPWHSCCSCJWRYBKQ");
    msg.custom.assign("AOVWFSDZMFBRHFQNFRDYJLPQVTLTFBXNUYXRIEXSYISAZMIXFVOYEECSHGKXOGWOKUGNXQPPFDMLTLESCPRCQBBVYFTXZXWEVKKDADSGCDUTH");

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
    msg.setTimeStamp(0.762422010987);
    msg.setSource(62857U);
    msg.setSourceEntity(33U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(236U);
    msg.timeout = 20790U;
    msg.name.assign("HWCCLDCYMFYEBLUWHEOJLKBIQMZXKJUZGOQGSSTSRFOGDCYRNXWJXRHIYIZBKXNILNYXBMBPOLPXCDWKRMMJTODRKKUCAPJEFXXCDYGVEJGTKKDVLSIPVLJWOMTQZRWGAGFOAYZEOHCHXEQPUWLSNTPOQWAQTFXUHNNEHEFPQUTFZVWKMVVQZFJEUGBJHIVMDCHUUKVESLPGUNFHCBSPBNBDSSDAYAAIZO");
    msg.custom.assign("FSZMWDPKYCRFYCXNGTLEQRGTNXQAQUAULJYGPSKCWGHMKGMBLUBQVVIYEXXHARBHCFLYIJGWSKTFROBXMSOAXLPBIKVGBXTNPAIIW");

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
    msg.setTimeStamp(0.099371654777);
    msg.setSource(68U);
    msg.setSourceEntity(227U);
    msg.setDestination(62917U);
    msg.setDestinationEntity(74U);
    msg.timeout = 63171U;
    msg.name.assign("EUJTPTATKFPVTCCHDYBERERMVNVLQLMCWXIILGQSRUYITOAKSDZVNVKHRYMJIOJCHZILBNGNGEZYJLSGUZOMSHVNUNJBDENKVPLDDWBMTGSAMHYRXXLNZRBUQWFJHWVXJARIHCXAMOHUFQSYDEVAKFKXRDOFTPWXMIGKJKQSBQOYIAWEWSJCCXFRXAZWFCTBAGPPSZLUGZZGGQEYNUDHBPXKPFWMQMCEIILQOWSBJZBQOEVLHOPNFOTTYDCKYF");
    msg.custom.assign("TNCMKNPYTBVJRUUYXGHNQS");

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
    msg.setTimeStamp(0.493351139751);
    msg.setSource(21088U);
    msg.setSourceEntity(98U);
    msg.setDestination(37890U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.611658417942;
    msg.lon = 0.139603525995;
    msg.z = 0.548498472735;
    msg.z_units = 110U;
    msg.speed = 0.412635339342;
    msg.speed_units = 236U;
    msg.start_time = 0.961106000216;
    msg.custom.assign("RVYDGQXRVULGKTJFYNKSYORTLIJTLCXBYEMVHYWVRKVCCCZBSNHLIZVUEUBZHTVOBHNBKRBFPDTQHLAXMEDIPEOKIJHJBSAOUEDHATAQHXZWHTLLZCRCEPGURZAGJNMSBFOFZEI");

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
    msg.setTimeStamp(0.420056765441);
    msg.setSource(28565U);
    msg.setSourceEntity(13U);
    msg.setDestination(22661U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.203398836803;
    msg.lon = 0.751283437939;
    msg.z = 0.816663285596;
    msg.z_units = 249U;
    msg.speed = 0.0309121494997;
    msg.speed_units = 13U;
    msg.start_time = 0.865644174938;
    msg.custom.assign("BMUXEOMCGIOZTGSXHDPRDJCZTFVQMSLLWIZXJBIJQQLBWYGOWYEZWCKGCREAMWFEFSLGHRRUBDNALHUVJLPXNSTTNZR");

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
    msg.setTimeStamp(0.780865760599);
    msg.setSource(63127U);
    msg.setSourceEntity(156U);
    msg.setDestination(57092U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.615439389448;
    msg.lon = 0.156830860991;
    msg.z = 0.748349140525;
    msg.z_units = 166U;
    msg.speed = 0.700749154751;
    msg.speed_units = 200U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.579763423175;
    tmp_msg_0.y = 0.630353480469;
    tmp_msg_0.z = 0.893905017306;
    tmp_msg_0.t = 0.0805492191805;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.120820576261;
    msg.custom.assign("LAYVOBFQGLPCTMSZHXWJMDQUHFGWRCLTCCQGTSAUSIURTSHMADNAXOOSUEZGYNZGZNWWVPDRETKIILUNHUWULLEXMDZHFXORWJYESVPMAMNIOLZYRMJXHWODQEHRJMVR");

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
    msg.setTimeStamp(0.995481658446);
    msg.setSource(51039U);
    msg.setSourceEntity(150U);
    msg.setDestination(49647U);
    msg.setDestinationEntity(137U);
    msg.vid = 44614U;
    msg.off_x = 0.436916578075;
    msg.off_y = 0.628938306685;
    msg.off_z = 0.666771561422;

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
    msg.setTimeStamp(0.728107651001);
    msg.setSource(48922U);
    msg.setSourceEntity(164U);
    msg.setDestination(32863U);
    msg.setDestinationEntity(228U);
    msg.vid = 42096U;
    msg.off_x = 0.738963245821;
    msg.off_y = 0.662906660251;
    msg.off_z = 0.51063224771;

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
    msg.setTimeStamp(0.223204165791);
    msg.setSource(55624U);
    msg.setSourceEntity(174U);
    msg.setDestination(64295U);
    msg.setDestinationEntity(11U);
    msg.vid = 5773U;
    msg.off_x = 0.715068692749;
    msg.off_y = 0.477333062078;
    msg.off_z = 0.691828279808;

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
    msg.setTimeStamp(0.39953060264);
    msg.setSource(50308U);
    msg.setSourceEntity(36U);
    msg.setDestination(2754U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.888384373543);
    msg.setSource(15132U);
    msg.setSourceEntity(204U);
    msg.setDestination(52613U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.453679633142);
    msg.setSource(25456U);
    msg.setSourceEntity(216U);
    msg.setDestination(42805U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.451275071494);
    msg.setSource(38063U);
    msg.setSourceEntity(156U);
    msg.setDestination(2301U);
    msg.setDestinationEntity(137U);
    msg.mid = 22642U;

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
    msg.setTimeStamp(0.0738213042437);
    msg.setSource(8686U);
    msg.setSourceEntity(175U);
    msg.setDestination(52623U);
    msg.setDestinationEntity(124U);
    msg.mid = 18334U;

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
    msg.setTimeStamp(0.6168775998);
    msg.setSource(63943U);
    msg.setSourceEntity(149U);
    msg.setDestination(48582U);
    msg.setDestinationEntity(156U);
    msg.mid = 29465U;

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
    msg.setTimeStamp(0.720604407146);
    msg.setSource(44587U);
    msg.setSourceEntity(169U);
    msg.setDestination(39527U);
    msg.setDestinationEntity(241U);
    msg.state = 38U;
    msg.eta = 50131U;
    msg.info.assign("FFKRRQRREICVTICHSAOPZVTFSWUHBVQLXEFGVLLWJTBXKXMNHDUHYZLPFJMFUXTODMV");

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
    msg.setTimeStamp(0.843940412478);
    msg.setSource(27372U);
    msg.setSourceEntity(60U);
    msg.setDestination(32590U);
    msg.setDestinationEntity(197U);
    msg.state = 253U;
    msg.eta = 23168U;
    msg.info.assign("CAVNVHDLZJKWIXOWSPUSRWRFMJIRWZHXNFGUAKPFPHJEEZSZHQNZHOWIDHZBKLTMBOYSDXVDCPAPXGEZUNRYHFEOCEVUILILBHUKFJFKKYYALPKBQDARWLVSIYCQCFEGTGYVTDJVMZBIKJMTDASGMVLCAXMJGIXFQPJQLBRCENSNIEDRJCBKQUVNPGXLAOWQWNBDSQTTMTFMSVYCGQBGDOZ");

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
    msg.setTimeStamp(0.661119003917);
    msg.setSource(27410U);
    msg.setSourceEntity(37U);
    msg.setDestination(20974U);
    msg.setDestinationEntity(93U);
    msg.state = 178U;
    msg.eta = 30583U;
    msg.info.assign("VGTLDHOSSBXRJYNSNFTXAQJYMNLOQAIDUOPEXFCMQYGPCBBDGWVGOTRGUTLPMXCMJEBWJAPKCARWETVZOVVJNOFUSZVMXZJENPQUGREQSKYRSKHYLYZVMLPRHWAVWQKGDCWHNBVZGTRAJDPDXBDPMIRSPQIKYLW");

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
    msg.setTimeStamp(0.944372030793);
    msg.setSource(5606U);
    msg.setSourceEntity(135U);
    msg.setDestination(32U);
    msg.setDestinationEntity(108U);
    msg.system = 32701U;
    msg.duration = 3944U;
    msg.speed = 0.0900388189237;
    msg.speed_units = 190U;
    msg.x = 0.349509312509;
    msg.y = 0.502754456857;
    msg.z = 0.510685992722;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.0667601954625);
    msg.setSource(16756U);
    msg.setSourceEntity(150U);
    msg.setDestination(25067U);
    msg.setDestinationEntity(141U);
    msg.system = 19542U;
    msg.duration = 1440U;
    msg.speed = 0.242257256321;
    msg.speed_units = 252U;
    msg.x = 0.700763927476;
    msg.y = 0.991442388843;
    msg.z = 0.379447373944;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.507063476032);
    msg.setSource(5660U);
    msg.setSourceEntity(95U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(118U);
    msg.system = 50981U;
    msg.duration = 6882U;
    msg.speed = 0.636179177602;
    msg.speed_units = 1U;
    msg.x = 0.0675182689757;
    msg.y = 0.737412263273;
    msg.z = 0.0225813579692;
    msg.z_units = 115U;

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
    msg.setTimeStamp(0.361549305987);
    msg.setSource(6267U);
    msg.setSourceEntity(252U);
    msg.setDestination(9768U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.0682939434377;
    msg.lon = 0.321159307924;
    msg.speed = 0.99018235314;
    msg.speed_units = 97U;
    msg.duration = 15756U;
    msg.sys_a = 11993U;
    msg.sys_b = 34824U;
    msg.move_threshold = 0.0779770067666;

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
    msg.setTimeStamp(0.552092006497);
    msg.setSource(4705U);
    msg.setSourceEntity(105U);
    msg.setDestination(50557U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.824383255723;
    msg.lon = 0.611967145413;
    msg.speed = 0.174432201046;
    msg.speed_units = 9U;
    msg.duration = 43393U;
    msg.sys_a = 16110U;
    msg.sys_b = 11094U;
    msg.move_threshold = 0.203041201771;

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
    msg.setTimeStamp(0.496288484198);
    msg.setSource(8803U);
    msg.setSourceEntity(111U);
    msg.setDestination(61188U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.671079779891;
    msg.lon = 0.69832450163;
    msg.speed = 0.681292143162;
    msg.speed_units = 68U;
    msg.duration = 8061U;
    msg.sys_a = 1509U;
    msg.sys_b = 36933U;
    msg.move_threshold = 0.0718460013955;

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
    msg.setTimeStamp(0.725589105578);
    msg.setSource(4532U);
    msg.setSourceEntity(248U);
    msg.setDestination(15030U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.933641407136;
    msg.lon = 0.743079235969;
    msg.z = 0.983543170575;
    msg.z_units = 93U;
    msg.speed = 0.374982541404;
    msg.speed_units = 198U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.501972701759;
    tmp_msg_0.lon = 0.932546739939;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YLNKRLAKUOHDPXCGXQEREAXTOXGMFZUVSWQYJLMLHUGDWTSWVOKOAIOPFMNPXOBDEYHNZSMPWRM");

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
    msg.setTimeStamp(0.7554435205);
    msg.setSource(13219U);
    msg.setSourceEntity(45U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.280310490653;
    msg.lon = 0.663164707148;
    msg.z = 0.119880884963;
    msg.z_units = 180U;
    msg.speed = 0.67553895285;
    msg.speed_units = 128U;
    msg.custom.assign("ZWSUYXMNWAZFJBBNKQVYITFQOGUHWVQLVESLJPSQPGU");

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
    msg.setTimeStamp(0.711858494123);
    msg.setSource(42286U);
    msg.setSourceEntity(253U);
    msg.setDestination(47622U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.646811192109;
    msg.lon = 0.25586876313;
    msg.z = 0.21164797117;
    msg.z_units = 239U;
    msg.speed = 0.476583162964;
    msg.speed_units = 136U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.512706218677;
    tmp_msg_0.lon = 0.109704206949;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JNXMOERNCUAALIBPJPJLMYZSKYIBCFWZWLBPEKSCAOVUVGZJQNZHSZYABXYRFYEVOBOQENSXCRPEZUKMLHCRLNAYHADOKONVWRKVJQOMLJHMNTJLZICBDKCHVXHNTMXUBKDGOGIXVISVKTRJTHWVCTIKSWNQESBWEYSDQZDDFRWQAHEAMCFMUZTAPFQPMPGZHDOYQXSRMTBFFFKBLUXUEPJYNF");

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
    msg.setTimeStamp(0.0457973546586);
    msg.setSource(20142U);
    msg.setSourceEntity(81U);
    msg.setDestination(13306U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.891739732131;
    msg.lon = 0.462061911387;

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
    msg.setTimeStamp(0.960036914792);
    msg.setSource(2385U);
    msg.setSourceEntity(145U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.456240772618;
    msg.lon = 0.171777912139;

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
    msg.setTimeStamp(0.26282104873);
    msg.setSource(48265U);
    msg.setSourceEntity(182U);
    msg.setDestination(39254U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.610773403877;
    msg.lon = 0.864105352115;

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
    msg.setTimeStamp(0.789244355388);
    msg.setSource(52193U);
    msg.setSourceEntity(220U);
    msg.setDestination(24834U);
    msg.setDestinationEntity(118U);
    msg.timeout = 62912U;
    msg.lat = 0.162170896262;
    msg.lon = 0.897134231246;
    msg.z = 0.548825656955;
    msg.z_units = 55U;
    msg.pitch = 0.257093674088;
    msg.amplitude = 0.198294678817;
    msg.duration = 54365U;
    msg.speed = 0.05302283499;
    msg.speed_units = 217U;
    msg.radius = 0.500954681105;
    msg.direction = 76U;
    msg.custom.assign("UOSJJXQZCOMPLMTJZUHDNBXCUFWBKTRLPAYHOHLJDINVTYESCDLJSDGMRTNGRXCEJFMVMFWQAEAIRRGELBAEUMRRMKVCUSSQXVTRANJBNPWPOGQFQFFNRWSDOUKGTUKQGDYJVYGBEBGSHGSSILKPIFQWANMNREVVTD");

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
    msg.setTimeStamp(0.791182332268);
    msg.setSource(45290U);
    msg.setSourceEntity(224U);
    msg.setDestination(41055U);
    msg.setDestinationEntity(110U);
    msg.timeout = 15925U;
    msg.lat = 0.937598834698;
    msg.lon = 0.0523893870861;
    msg.z = 0.668978757378;
    msg.z_units = 134U;
    msg.pitch = 0.867738261354;
    msg.amplitude = 0.727398422689;
    msg.duration = 18115U;
    msg.speed = 0.897775260016;
    msg.speed_units = 216U;
    msg.radius = 0.153500824888;
    msg.direction = 23U;
    msg.custom.assign("HXJESKULDAWSSXDJKXQMMTLVQPGRGCAPFULJQGLTWGWNALHYCKZXBYKQMHUVEKADYAGOSFFNRWAWQYKVXGYDYJUBJFLRYDHGWSCKXFSPUGOKBDAXHXNNHPTFFXZLIRJIPRNTJDOZBCEURAZERDIWCZPNNOEKCIUBCTTPBOIIJBMPIMSLBLIYQUOWVNQEOHIFCTOZFONEBIPRHSVVKQHYMZGEPJFHUZTEUTETVOJDMZDLNMV");

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
    msg.setTimeStamp(0.415813301649);
    msg.setSource(35681U);
    msg.setSourceEntity(203U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(36U);
    msg.timeout = 39224U;
    msg.lat = 0.399886762816;
    msg.lon = 0.491193257993;
    msg.z = 0.23713318111;
    msg.z_units = 140U;
    msg.pitch = 0.284571433732;
    msg.amplitude = 0.755875131701;
    msg.duration = 37590U;
    msg.speed = 0.0630528110217;
    msg.speed_units = 225U;
    msg.radius = 0.862114315216;
    msg.direction = 251U;
    msg.custom.assign("DXHITUOAKSRLZWINERDECGXSROCQDQKOBEWZZT");

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
    msg.setTimeStamp(0.255131628322);
    msg.setSource(30489U);
    msg.setSourceEntity(33U);
    msg.setDestination(46087U);
    msg.setDestinationEntity(196U);
    msg.formation_name.assign("CTMAWSTKTLCNZRGIBKSEZLVRMEVAYIDDOZEDCDYZODFZFMJZSSEINTFPKIWWBUDREXBLCSJEGONPBACOXMHUJRTUPWFUFPHWIYYGJXR");
    msg.reference_frame = 140U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46564U;
    tmp_msg_0.off_x = 0.132327127838;
    tmp_msg_0.off_y = 0.263725475415;
    tmp_msg_0.off_z = 0.0866296103441;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BQWUWAXKISOLPUCAGEFSFKDBVRTXMRTEYPDYEXSSYGVDPINZTGCHXYNHXCPBPLIBAPXAFCOQLH");

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
    msg.setTimeStamp(0.807374419191);
    msg.setSource(48967U);
    msg.setSourceEntity(79U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(72U);
    msg.formation_name.assign("KYXAQNUVDVOEEHLXHVDOOSBJEKHWKYGQFZIOADFSFNGMIMEHHUXBBFSGIFXRTGZMVKLQANHTLBRQAZGBWLVOYPOCRSHMMUKXCZHPMZSUB");
    msg.reference_frame = 55U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48320U;
    tmp_msg_0.off_x = 0.814967956591;
    tmp_msg_0.off_y = 0.601124968127;
    tmp_msg_0.off_z = 0.689198188289;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JQOFGHKCUUZFIHHBFJWYDRMPMGENSPFNLZJTBUOGVRDRMALOACKVACYQOUWOPQAELDWYBLPDCXDIKUXKHMRBT");

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
    msg.setTimeStamp(0.989118739782);
    msg.setSource(34239U);
    msg.setSourceEntity(64U);
    msg.setDestination(51338U);
    msg.setDestinationEntity(152U);
    msg.formation_name.assign("SYJYLPEMFCXABCSQOCWBZDFWPZJIKARFBTUHITTICJQPRVKNJOURCKDFYSEBEVZHBCVKCONKWKLBTDDQTVZQMYCVQNETUZROKEFAUBRSVGPOZXAQOOHTIDXXWFOVOEYJXUFAQLSUMMAINDEKHKWGLOSYCNZLLFPBPZPNYDYKDIMDDNUWFZLJGJHUIWMMXTUHWIRSPLGIHEQAUG");
    msg.reference_frame = 219U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2981U;
    tmp_msg_0.off_x = 0.794608930726;
    tmp_msg_0.off_y = 0.782060410565;
    tmp_msg_0.off_z = 0.519490649923;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SXLMSYIPKXWSJBEZDALCNXJHBV");

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
    msg.setTimeStamp(0.709004830722);
    msg.setSource(3516U);
    msg.setSourceEntity(197U);
    msg.setDestination(3078U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("HBLLVHUVRDYXUWMPFTNYFJGDINDQCJSOZPMYKCVWTTDOROBHGUSPELRAJFAQILZVQLTRTEKMRVDNLBMMNIZTQAISKCXWTSIKEJGBLCDNMSEYALRX");
    msg.formation_name.assign("JXHDEXUYVQAQKMIPRBUJMEVGALBIUSCZENNCGIBZWMXGAFFNZRFYASQOLZCMTCOSEEWOBDNXTRBGHZLEPOPQBYWYHS");
    msg.plan_id.assign("OAPLDUWCZMLPOOOBMIOGZXKEQUHRVFINTMPJSRXVSEGANUWUHCQPTXXVYSTOMGZNLFBDFWHXJNRQCJCPNGPAXSICDJDSMJESXHZQUJBEBTZSNMNQKAGWF");
    msg.description.assign("LBHZGVMNMUOXWEFJTMOMUNHMFAYEJWDXWOBYHHJIWS");
    msg.leader_speed = 0.102223473573;
    msg.leader_bank_lim = 0.230278884885;
    msg.pos_sim_err_lim = 0.0698904357932;
    msg.pos_sim_err_wrn = 0.0828564315881;
    msg.pos_sim_err_timeout = 6472U;
    msg.converg_max = 0.143247898775;
    msg.converg_timeout = 27050U;
    msg.comms_timeout = 4940U;
    msg.turb_lim = 0.385229398754;
    msg.custom.assign("ALOPNDGIXIINKLDQCLTPIUKKFKDZPSCECMZYQRZMZGQWXMWGYKBIUQMTSJNOBIUHWBKGZVEACDQSVDGAFVRTFEKJPVGZFQGJNNBNLJWHGUTFOGRIDPERQHAGZLHMJNDLOXUOMHOHLCPHDARIBFBWEJTRXUTKCQRMXEZAASHCYEVBJCWUTWUMVPMXAFAWQIYVBV");

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
    msg.setTimeStamp(0.440152537782);
    msg.setSource(23663U);
    msg.setSourceEntity(99U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("IMDLQKOELWDGGJHFVCEJLJASJFLEWNBDSWVCQIAXXVGEWRAHRTDVINPHYUOXTCNTHGUTFOZCNAXVQMWFVPBDFICSZVAUUEPTKMRKRGJXTUEBRQLSNHCMPWRVSXMTYFHSFKYPVPRIEUWEHAUWLDFLZT");
    msg.formation_name.assign("GIIONUAYNWQWEONRIEZUQWDEIBDQDDODYIRITYIYROMZBAKOCJCKBHUZXFQFPMSEFHKPKASORFQGKHMXBFPSWYSAJFNXINQRTTVUDHXFFZLLECBNNNLHCSFYHQWJVBXAJBHYAVGBVMGTNLPVOIAZEYDTAMSPPWFPTDQETYCWUOZLSCTWGJKMSLYZRCJOCDIPHGRSJAVCUGXR");
    msg.plan_id.assign("NRVHEIFAZKZALHDEWUQIQCIMPSGXJGBJPNZRICWVDTGKICVXDYSDQFATCBJYQOAAICSHVAJOGEGYUBUSMUEPLCYHRQHVFULSSOKAPEFYHWSLB");
    msg.description.assign("ECXDNFPLYKPAEEFJRMARUHKIPQTWHULFOMFSZN");
    msg.leader_speed = 0.971993018746;
    msg.leader_bank_lim = 0.420809106771;
    msg.pos_sim_err_lim = 0.70154255711;
    msg.pos_sim_err_wrn = 0.585032402012;
    msg.pos_sim_err_timeout = 32122U;
    msg.converg_max = 0.19234097317;
    msg.converg_timeout = 37376U;
    msg.comms_timeout = 20559U;
    msg.turb_lim = 0.357073472644;
    msg.custom.assign("ZYYDIPRWUYPMEVNAW");

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
    msg.setTimeStamp(0.992772676335);
    msg.setSource(42745U);
    msg.setSourceEntity(68U);
    msg.setDestination(64780U);
    msg.setDestinationEntity(166U);
    msg.group_name.assign("COTGRXYVBSHIQNFKRMXCBJBXFTQTMVWIJAFXPHNWTJRLYTLHDFMJCEUCKSHCUSLKZVFPCRYDZYSXOZQLHFIDGUQXGPLTIIIUJEBELNEKUAAOBKLZWYUBQLPFKGDBXYXDJAAKGQAWBSXRGLOEIMROPCTVBTDDVCHITDVWKLMAWNESJJZWNRHRPEHSMYODPCFUNAZKQUSNSJEBMGODFSRVQQYWNRCOFMNHN");
    msg.formation_name.assign("COBPYKSNIKAIJOHSCABSCRYKZUWYTFDTJRYMFIUOQSEHUGTXLNFJRQIXLNPCRVAWOGCTEVTGNFBUPUBDGACKR");
    msg.plan_id.assign("GUBEARECAOPLQUZWFXFIVGWWZEKVJDZVYKOMTGOXLIADSUIFJXOTMFSWSTXYPNBFHWNGHSCKNMRKYBEXLVARJWWBAGHSZPJTKNZYEGPWIQABGZMEYVYCKRFYBLRIOHKOJFZTXQZQWUNHXSFULNUCSMRYQEAJTDCLREPGTNIEHJMVLVJDBIUXMKOSPABMTCQDBUD");
    msg.description.assign("BXPDWZYKLJOILGZOLKGETSOYMLPYAIJOFQSPSNLYIEVBIWXGQYFQTWUUCCHREOUSBKUPXZZETMVVQYULBBHPANWXCKTZWXXEQIHSCNZGNIFN");
    msg.leader_speed = 0.30659243379;
    msg.leader_bank_lim = 0.863387370527;
    msg.pos_sim_err_lim = 0.30031946487;
    msg.pos_sim_err_wrn = 0.328962255514;
    msg.pos_sim_err_timeout = 44683U;
    msg.converg_max = 0.017267157569;
    msg.converg_timeout = 55612U;
    msg.comms_timeout = 56979U;
    msg.turb_lim = 0.665924413261;
    msg.custom.assign("PKGIXUEUDLJESTRBMCQMQGRBZAMTHGVHATZCJOKFFGHZYEDXRGNTOYYHLVLSFVUDRVPINCUFXKNPMJBXLEMWSHCPEPLMXTZOJUXQGYIUFLUVBPFFSGROGNTDSFNRAPJYYCVKIQGXMOAIYUPZLQVZASBCEVC");

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
    msg.setTimeStamp(0.795268189608);
    msg.setSource(37698U);
    msg.setSourceEntity(161U);
    msg.setDestination(9905U);
    msg.setDestinationEntity(56U);
    msg.control_src = 4821U;
    msg.control_ent = 134U;
    msg.timeout = 0.57915344707;
    msg.loiter_radius = 0.264527004643;
    msg.altitude_interval = 0.938120142302;

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
    msg.setTimeStamp(0.581547907592);
    msg.setSource(46816U);
    msg.setSourceEntity(69U);
    msg.setDestination(53953U);
    msg.setDestinationEntity(129U);
    msg.control_src = 16550U;
    msg.control_ent = 164U;
    msg.timeout = 0.23495840683;
    msg.loiter_radius = 0.118741508628;
    msg.altitude_interval = 0.89098817389;

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
    msg.setTimeStamp(0.359659696126);
    msg.setSource(11358U);
    msg.setSourceEntity(25U);
    msg.setDestination(40226U);
    msg.setDestinationEntity(200U);
    msg.control_src = 41506U;
    msg.control_ent = 40U;
    msg.timeout = 0.6230351959;
    msg.loiter_radius = 0.810771620872;
    msg.altitude_interval = 0.416969421824;

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
    msg.setTimeStamp(0.627524628218);
    msg.setSource(46908U);
    msg.setSourceEntity(31U);
    msg.setDestination(18745U);
    msg.setDestinationEntity(232U);
    msg.flags = 71U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.579253629935;
    tmp_msg_0.speed_units = 102U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.616476628598;
    tmp_msg_1.z_units = 217U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.559835573662;
    msg.lon = 0.0243918628761;
    msg.radius = 0.719411943794;

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
    msg.setTimeStamp(0.0351028772814);
    msg.setSource(24816U);
    msg.setSourceEntity(192U);
    msg.setDestination(22650U);
    msg.setDestinationEntity(170U);
    msg.flags = 129U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.321610787386;
    tmp_msg_0.speed_units = 26U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0077160633074;
    tmp_msg_1.z_units = 29U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0516293436216;
    msg.lon = 0.951592026966;
    msg.radius = 0.498292450043;

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
    msg.setTimeStamp(0.981748252494);
    msg.setSource(48141U);
    msg.setSourceEntity(67U);
    msg.setDestination(50607U);
    msg.setDestinationEntity(151U);
    msg.flags = 15U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.218426036556;
    tmp_msg_0.speed_units = 228U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.835296199793;
    tmp_msg_1.z_units = 33U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0391387122212;
    msg.lon = 0.530674479216;
    msg.radius = 0.321006253661;

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
    msg.setTimeStamp(0.987404666622);
    msg.setSource(9078U);
    msg.setSourceEntity(122U);
    msg.setDestination(38285U);
    msg.setDestinationEntity(54U);
    msg.control_src = 56888U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 98U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.435127871784;
    tmp_tmp_msg_0_0.speed_units = 55U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.764183008532;
    tmp_tmp_msg_0_1.z_units = 10U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.792698429006;
    tmp_msg_0.lon = 0.217545756825;
    tmp_msg_0.radius = 0.75123845268;
    msg.reference.set(tmp_msg_0);
    msg.state = 11U;
    msg.proximity = 103U;

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
    msg.setTimeStamp(0.873728675159);
    msg.setSource(33470U);
    msg.setSourceEntity(77U);
    msg.setDestination(12128U);
    msg.setDestinationEntity(95U);
    msg.control_src = 32415U;
    msg.control_ent = 69U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 58U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0701527053351;
    tmp_tmp_msg_0_0.speed_units = 222U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.076676706996;
    tmp_tmp_msg_0_1.z_units = 221U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.779944700413;
    tmp_msg_0.lon = 0.582206351048;
    tmp_msg_0.radius = 0.671339693185;
    msg.reference.set(tmp_msg_0);
    msg.state = 67U;
    msg.proximity = 250U;

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
    msg.setTimeStamp(0.107798328246);
    msg.setSource(46343U);
    msg.setSourceEntity(196U);
    msg.setDestination(19498U);
    msg.setDestinationEntity(26U);
    msg.control_src = 56624U;
    msg.control_ent = 188U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.774485396252;
    tmp_tmp_msg_0_0.speed_units = 89U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.805253189051;
    tmp_tmp_msg_0_1.z_units = 241U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.978586467879;
    tmp_msg_0.lon = 0.190672974408;
    tmp_msg_0.radius = 0.446482192609;
    msg.reference.set(tmp_msg_0);
    msg.state = 77U;
    msg.proximity = 58U;

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
    msg.setTimeStamp(0.151773964909);
    msg.setSource(59805U);
    msg.setSourceEntity(25U);
    msg.setDestination(63953U);
    msg.setDestinationEntity(111U);
    msg.ax_cmd = 0.405960427443;
    msg.ay_cmd = 0.580588480839;
    msg.az_cmd = 0.697748310541;
    msg.ax_des = 0.739846962042;
    msg.ay_des = 0.604436113762;
    msg.az_des = 0.278609097874;
    msg.virt_err_x = 0.994981733705;
    msg.virt_err_y = 0.473587755552;
    msg.virt_err_z = 0.79309499288;
    msg.surf_fdbk_x = 0.998593710741;
    msg.surf_fdbk_y = 0.247327325457;
    msg.surf_fdbk_z = 0.814809086234;
    msg.surf_unkn_x = 0.392851173073;
    msg.surf_unkn_y = 0.212832728338;
    msg.surf_unkn_z = 0.782518411376;
    msg.ss_x = 0.688220612728;
    msg.ss_y = 0.724070403283;
    msg.ss_z = 0.743017590167;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RFTPNZXZTXZHBBIDEOWMVJQEQIKIVVGVLZJKMBMSOJWNFGPHYZWFXDKNYQTMLOOIKELMGUITULJUNERQAYLORJRXNCAFCQUTVSNFDLUBYYANOHANPSABTFXHDWXAYFIJGXBPZWIWRJDYWVOGQDSCRVTFRRKCPGFDLKPIYSLHENJJSEB");
    tmp_msg_0.dist = 0.230856711507;
    tmp_msg_0.err = 0.419433402717;
    tmp_msg_0.ctrl_imp = 0.678326819568;
    tmp_msg_0.rel_dir_x = 0.637320268459;
    tmp_msg_0.rel_dir_y = 0.895704847759;
    tmp_msg_0.rel_dir_z = 0.638683078616;
    tmp_msg_0.err_x = 0.809543885594;
    tmp_msg_0.err_y = 0.631098991861;
    tmp_msg_0.err_z = 0.391878529604;
    tmp_msg_0.rf_err_x = 0.0974621112905;
    tmp_msg_0.rf_err_y = 0.965240781851;
    tmp_msg_0.rf_err_z = 0.283397097352;
    tmp_msg_0.rf_err_vx = 0.479629805187;
    tmp_msg_0.rf_err_vy = 0.16844086865;
    tmp_msg_0.rf_err_vz = 0.963559170457;
    tmp_msg_0.ss_x = 0.533869994727;
    tmp_msg_0.ss_y = 0.383480351278;
    tmp_msg_0.ss_z = 0.799670038809;
    tmp_msg_0.virt_err_x = 0.654756178402;
    tmp_msg_0.virt_err_y = 0.712935683319;
    tmp_msg_0.virt_err_z = 0.451369648467;
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
    msg.setTimeStamp(0.481573073296);
    msg.setSource(19454U);
    msg.setSourceEntity(209U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(222U);
    msg.ax_cmd = 0.566809754951;
    msg.ay_cmd = 0.0161172877368;
    msg.az_cmd = 0.30596331628;
    msg.ax_des = 0.844277702994;
    msg.ay_des = 0.198337940099;
    msg.az_des = 0.091257304535;
    msg.virt_err_x = 0.701543646995;
    msg.virt_err_y = 0.636695345547;
    msg.virt_err_z = 0.125509592872;
    msg.surf_fdbk_x = 0.588096757195;
    msg.surf_fdbk_y = 0.0843130488206;
    msg.surf_fdbk_z = 0.0483188628562;
    msg.surf_unkn_x = 0.749980174745;
    msg.surf_unkn_y = 0.724901487577;
    msg.surf_unkn_z = 0.945948474654;
    msg.ss_x = 0.0770000663595;
    msg.ss_y = 0.702345058458;
    msg.ss_z = 0.135923259901;

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
    msg.setTimeStamp(0.860861921491);
    msg.setSource(63196U);
    msg.setSourceEntity(168U);
    msg.setDestination(35432U);
    msg.setDestinationEntity(216U);
    msg.ax_cmd = 0.512176120124;
    msg.ay_cmd = 0.801690023178;
    msg.az_cmd = 0.569017034991;
    msg.ax_des = 0.188090327623;
    msg.ay_des = 0.486823290909;
    msg.az_des = 0.219165963449;
    msg.virt_err_x = 0.126393315232;
    msg.virt_err_y = 0.447152838854;
    msg.virt_err_z = 0.242395523488;
    msg.surf_fdbk_x = 0.271479299329;
    msg.surf_fdbk_y = 0.00103380582616;
    msg.surf_fdbk_z = 0.101139421385;
    msg.surf_unkn_x = 0.473643021044;
    msg.surf_unkn_y = 0.546766558017;
    msg.surf_unkn_z = 0.207630043556;
    msg.ss_x = 0.967920962766;
    msg.ss_y = 0.551930195143;
    msg.ss_z = 0.837986543074;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FOWMDWTBIFVSLWCOTMFHOSQQPUVFGEBUUXVDZTECTLIZUILFIYEBNJGMKIKPDJOQJFUBGXKRRBCGENTYWKTMBXSPEOMHZNZQRLTPAHESYUDXZJLKWCPYRHBCKMEOAMUASYVAKNJTDCSBUCRQAGVCSYQAFPELGJMINZIKWCDGBOGWHUVDJYZKNYTXQHPXVXRREJOCGJJPNSNLQHAVVNIVINDWFZLBYRHYZLESODRXSXZMQXKLWAGIPMWFTDOQFA");
    tmp_msg_0.dist = 0.497603249971;
    tmp_msg_0.err = 0.169489241007;
    tmp_msg_0.ctrl_imp = 0.897684288757;
    tmp_msg_0.rel_dir_x = 0.434673742282;
    tmp_msg_0.rel_dir_y = 0.243821798465;
    tmp_msg_0.rel_dir_z = 0.0287206969928;
    tmp_msg_0.err_x = 0.606525234312;
    tmp_msg_0.err_y = 0.559269561198;
    tmp_msg_0.err_z = 0.542722706724;
    tmp_msg_0.rf_err_x = 0.709974012436;
    tmp_msg_0.rf_err_y = 0.136316915962;
    tmp_msg_0.rf_err_z = 0.3557191335;
    tmp_msg_0.rf_err_vx = 0.463370052743;
    tmp_msg_0.rf_err_vy = 0.502552564875;
    tmp_msg_0.rf_err_vz = 0.225829318464;
    tmp_msg_0.ss_x = 0.301835652465;
    tmp_msg_0.ss_y = 0.492732707444;
    tmp_msg_0.ss_z = 0.266484799869;
    tmp_msg_0.virt_err_x = 0.864241362214;
    tmp_msg_0.virt_err_y = 0.603506322293;
    tmp_msg_0.virt_err_z = 0.277155269949;
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
    msg.setTimeStamp(0.255872573742);
    msg.setSource(37963U);
    msg.setSourceEntity(254U);
    msg.setDestination(34313U);
    msg.setDestinationEntity(124U);
    msg.s_id.assign("DOGSUIORXZKIMYNTZRSGVCYCHAVBHJZJDUEZGFRXPTDQAMEHEUDEEDXNBTMGAVPGLONMQPTALYSAHERKHVYTRQWKFNRQENMZUFRCUUBAPLIICOTAVFZBVZXWJXULKSRMEOTJFKTIPQEBIJDNHYBEBNJNJXTQPDVFZPPYNHKDYIPWJMPIGCORLWZAQCWXLGRDOQOSHUIVKQUNMLBYWWAL");
    msg.dist = 0.919905015994;
    msg.err = 0.883819627765;
    msg.ctrl_imp = 0.752174200171;
    msg.rel_dir_x = 0.705225314569;
    msg.rel_dir_y = 0.0573604491489;
    msg.rel_dir_z = 0.127966534947;
    msg.err_x = 0.266907727496;
    msg.err_y = 0.498872915794;
    msg.err_z = 0.683726876664;
    msg.rf_err_x = 0.727095631242;
    msg.rf_err_y = 0.492416489263;
    msg.rf_err_z = 0.127543112754;
    msg.rf_err_vx = 0.192711466583;
    msg.rf_err_vy = 0.298663581884;
    msg.rf_err_vz = 0.954826456165;
    msg.ss_x = 0.392708288978;
    msg.ss_y = 0.250159725409;
    msg.ss_z = 0.430067329914;
    msg.virt_err_x = 0.686591807706;
    msg.virt_err_y = 0.394391762033;
    msg.virt_err_z = 0.796245411782;

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
    msg.setTimeStamp(0.219682350325);
    msg.setSource(16225U);
    msg.setSourceEntity(178U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(245U);
    msg.s_id.assign("MULHXZXVUTZHXOAQDKBTKBFUJRHYWGVYZYBQYZJDALKFYRNLSROUCBGUEKNOPDJHRSJDOFOHDWQUIUXFKRREPNSAQVNCBSRJSYILMTMSEPOIDEBBMOZYCFCWEMGQOLBWWUCNKQPDPPBHXIJEZSIGHCGAWHXQCZMEMVZARDXJYNIEQUAVGAV");
    msg.dist = 0.424626368351;
    msg.err = 0.775388529717;
    msg.ctrl_imp = 0.904793918805;
    msg.rel_dir_x = 0.779133108457;
    msg.rel_dir_y = 0.2334543025;
    msg.rel_dir_z = 0.559630828519;
    msg.err_x = 0.442098924083;
    msg.err_y = 0.091768143099;
    msg.err_z = 0.647397307006;
    msg.rf_err_x = 0.287712769519;
    msg.rf_err_y = 0.528670080533;
    msg.rf_err_z = 0.872662045555;
    msg.rf_err_vx = 0.232166645334;
    msg.rf_err_vy = 0.103996548072;
    msg.rf_err_vz = 0.452842502675;
    msg.ss_x = 0.715420869098;
    msg.ss_y = 0.546664087514;
    msg.ss_z = 0.643601053884;
    msg.virt_err_x = 0.429393351405;
    msg.virt_err_y = 0.565137539233;
    msg.virt_err_z = 0.142405497642;

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
    msg.setTimeStamp(0.126915721671);
    msg.setSource(20482U);
    msg.setSourceEntity(56U);
    msg.setDestination(39159U);
    msg.setDestinationEntity(148U);
    msg.s_id.assign("KZVAESIXPFWRGDKYAHLBLZTSLFTAUMMRRHPXUXNTFLTVZQBFZGBSUJVECNJSZNGNXPVROTXDWYEYLJVJZRBOEUHKXPAOQPJOGOGOVRGIYVVRAOHCEDVYKTNDCTSMVLYTKJECPGMWKPAQWXGYMZOYQUMRQCQNJKIFBCZBSIUHSODHTYEAPAPFKWLBZQGDTNXHFRJSIBBWMLDHUSOIKGCFNELXJFUULQRHNUNDCCZIJWA");
    msg.dist = 0.999289670503;
    msg.err = 0.636757724335;
    msg.ctrl_imp = 0.807280075835;
    msg.rel_dir_x = 0.404732813638;
    msg.rel_dir_y = 0.646837352749;
    msg.rel_dir_z = 0.732146072553;
    msg.err_x = 0.828336378777;
    msg.err_y = 0.321511286721;
    msg.err_z = 0.82797563314;
    msg.rf_err_x = 0.0199759777174;
    msg.rf_err_y = 0.472081318749;
    msg.rf_err_z = 0.634922618233;
    msg.rf_err_vx = 0.203875744824;
    msg.rf_err_vy = 0.0527598398845;
    msg.rf_err_vz = 0.446329629055;
    msg.ss_x = 0.483991944146;
    msg.ss_y = 0.135273466304;
    msg.ss_z = 0.121732432616;
    msg.virt_err_x = 0.706786897809;
    msg.virt_err_y = 0.306253200974;
    msg.virt_err_z = 0.607901411283;

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
    msg.setTimeStamp(0.812724083872);
    msg.setSource(60548U);
    msg.setSourceEntity(170U);
    msg.setDestination(9763U);
    msg.setDestinationEntity(232U);
    msg.timeout = 10302U;
    msg.rpm = 0.739259886055;
    msg.direction = 38U;
    msg.custom.assign("WRFQYBVQKACBTTYFMUSKRHHZDMNZSNTZZKXXBZTNLAYOFDRKGFJPSDFATYIRADPVIUMLXKWVGQBJNXUXLBQO");

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
    msg.setTimeStamp(0.66411695697);
    msg.setSource(18927U);
    msg.setSourceEntity(51U);
    msg.setDestination(50756U);
    msg.setDestinationEntity(218U);
    msg.timeout = 21550U;
    msg.rpm = 0.899541485222;
    msg.direction = 105U;
    msg.custom.assign("OFOJAZDZCSQSVGXLWGKHXNQPUFQCKOVXKADYCMYJYQTLMAZRFLDHZBUQPAISINJJFXZVUMVATVRWV");

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
    msg.setTimeStamp(0.145159961155);
    msg.setSource(24084U);
    msg.setSourceEntity(51U);
    msg.setDestination(48653U);
    msg.setDestinationEntity(6U);
    msg.timeout = 36116U;
    msg.rpm = 0.94061828993;
    msg.direction = 251U;
    msg.custom.assign("XOLQUTOHAUGUHWCQVGEOWSMSWQMKLKFHTVRFYVSQLGSLVDOCDWVKTWCZAISTNEYNFOUWWBOROYIDTAPU");

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
    msg.setTimeStamp(0.425362711446);
    msg.setSource(41339U);
    msg.setSourceEntity(186U);
    msg.setDestination(65441U);
    msg.setDestinationEntity(8U);
    msg.formation_name.assign("TMCYAOKCREOFHMIVLRMIRPMPHAIWXUGPBNJAJGUBIJOSUWDTKGKQCIQCRDQACFZKKZWDJHUZIZOWVCSXSSOULFLHNXABIQYXQDEPEPLJLOTHOZAYWDYVZRJSEYXWNLKANMUPDEWVEHKBXMTRIVAYTEYUGFNSCTQBFOXJAVAJTYHLXFFNZIVZGJVUOQQGPCHLJSHTUPWTNMHNWBSPVDLKRSKMEFYDUBRYMMQFGBXKFCLDGNRZBGENBDCPERVT");
    msg.type = 133U;
    msg.op = 137U;
    msg.group_name.assign("LMSDCEZZHBRFOATOPPGNHQTPKPTJDHUDWYZACEFWPZXZFXXCINGSWOLBHROEFKGCXLEKOAOWAJLVNAZCPUTRTONGRGUY");
    msg.plan_id.assign("MWMAPSJOKZBQJXHVBEIUMSBGRKIEDLYMQVPBFTAFIURKPJCEJQACRWWGNEDOXDSYLJJLKCHTKOTAAXGDGXAIAHNWTKEVHNIWDYWHHBLPHVMGQWWDJQLFGNMSPBYQYDZURCPGTNUOVNCCZNPEXOHTUOZEHGEFQGAEYKYJTAB");
    msg.description.assign("BPUZZVNWJJHMVYLFIMMYWCFNTISNAHIGSGGBPUEBREHEXYOQDJLIXDVLDAZXMJEXWPECJRPMVWNUONMFYEGFSKXQEAEVPXOXTRCFLBMUYKWSVSTNWCQCIDOCD");
    msg.reference_frame = 220U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8882U;
    tmp_msg_0.off_x = 0.153260213243;
    tmp_msg_0.off_y = 0.968696795529;
    tmp_msg_0.off_z = 0.205065960924;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0315647477907;
    msg.leader_speed_min = 0.235439915065;
    msg.leader_speed_max = 0.0947141011267;
    msg.leader_alt_min = 0.376544066619;
    msg.leader_alt_max = 0.313371726283;
    msg.pos_sim_err_lim = 0.336712755091;
    msg.pos_sim_err_wrn = 0.114190749436;
    msg.pos_sim_err_timeout = 41U;
    msg.converg_max = 0.708505216281;
    msg.converg_timeout = 55134U;
    msg.comms_timeout = 43379U;
    msg.turb_lim = 0.652903303299;
    msg.custom.assign("NJXLNMGVHYDEJZVRBULJUGQVUJHZFRAXJPOYBWFHZZZCHLZCOFNBRXFWHOHHPVAPBAEMTPANUMSTCKQRGGTCQYRLAVBZODIDKPAVZCDGQJWGEHSDSLBFGOFSLGYQCMUSYSNTPIZMNIJCEWLMYIOFEPOVNDWEEBFYHKXDKXHPUUWOKFXQAMLQNAWLNQNSIAMTBDRPLGXCSYMQIIRWGMQTRXZVDWJB");

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
    msg.setTimeStamp(0.401985638931);
    msg.setSource(35529U);
    msg.setSourceEntity(177U);
    msg.setDestination(12434U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("VEQVBWMTIYYZTAZLHYTQPXLNKYUBXYRXWUSKEYLMKHXFOEOPIQKBWIEDAPCTULWBJOUZUJQMZZJWGFOVERATHRJWCKEDPTQKATFBCADXIIFLRJOVURMYJPZUSHECTRCGLCKLXKNSAZMQSYLNIDAAFMMHJTLHZHHYEXFEVSFRGCRGBIBGPDVCNOA");
    msg.type = 60U;
    msg.op = 60U;
    msg.group_name.assign("YGCTCWPUGBZKEVKHCQRNYYGFNIQTLJDMMZPBCEPOXBESKOJDWUIVKYSUCVFLYYLFRWOBLRRXEMHAAABUNJFGYNLILTBHISVBFXMVZWZEJIKWIZAJSDRDNXLBSHMUZHGTSOUVHQSZJNQOMZZAANKVG");
    msg.plan_id.assign("XHTYGPSQVOYFKYKXQPQBCIJJVWLXYHRTEFMEFEHFFAAWGEGIKCMLPJJLEUMWZCDAAIGCR");
    msg.description.assign("PLSIIBFYGCJWJBKNHFLRCSIUCVWPQSCANNWDSOBBOVALXWTLQPJLWYEHAMQMIIVFCYFJBXBIZV");
    msg.reference_frame = 227U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60638U;
    tmp_msg_0.off_x = 0.320924413357;
    tmp_msg_0.off_y = 0.308797973662;
    tmp_msg_0.off_z = 0.959492842118;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.603107537093;
    msg.leader_speed_min = 0.335441712342;
    msg.leader_speed_max = 0.46416822093;
    msg.leader_alt_min = 0.0932714816223;
    msg.leader_alt_max = 0.506506379804;
    msg.pos_sim_err_lim = 0.932393482908;
    msg.pos_sim_err_wrn = 0.773836023028;
    msg.pos_sim_err_timeout = 4121U;
    msg.converg_max = 0.521871538869;
    msg.converg_timeout = 27881U;
    msg.comms_timeout = 19863U;
    msg.turb_lim = 0.106794254065;
    msg.custom.assign("MZRRXFCQNCGAJJGTCHLOYAIBWKNYSKCKTFBHNLQVJPIUSEZWQVUTAZMXCFWHGEFNXEFOPOXDJVBPEZNBUSBZWZFIVTERITKQPQLGMTAYARSSCIDDVBDVVGOVSMEOCXLVGUWNROTOUORPWUJRUKHICAERFXBJYPMYUHIYQHWJEGLGKKMQAHMDHXPSXBVTJEWIYNOIMZUZDULNLSYDAJPXXKWDCOWFLQFYGJM");

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
    msg.setTimeStamp(0.845477993252);
    msg.setSource(17205U);
    msg.setSourceEntity(54U);
    msg.setDestination(48263U);
    msg.setDestinationEntity(98U);
    msg.formation_name.assign("DQWTRNLZHBDZSSSMPDTUZYFHGDOSWSOPQIJLMEFNVXJPNDCDVGCUZEIPTVGUPIALBQOHFLYGBWIMGRZOMXKVLKUMAFXYMXBPTEJLUDWOZTKTXPGKWYTJIAWHZRWQGJXMLDWIZKONHZAHMOEEBAH");
    msg.type = 84U;
    msg.op = 84U;
    msg.group_name.assign("NOMCMUFHQIVTXBXTDBWABLVKRTCEHJNIHBLEGIWBMFQOKEMHOPGCWBEBBUUZJRRZSMDGUNEFVFBERD");
    msg.plan_id.assign("AYFZGLOWEMYXCBWVERNPKIDSTBPAHVZGSXWGODMLOEMQKRPEZOQJKCLQTSGUCJUWXPJINERNFBWOYYBIWGODIRRWBMMLMZKVUBKQ");
    msg.description.assign("EVCPMYKLUXLXXPCKLVPYUCKFXSWBJNIFZYEEJHUBPQLBRFODNVTHQUOGQCXFOFILLOWOVPRSAYHHMMPMANRYLQCEGNKXDZGMESZPRNWIRBOTIVXBAUPAYQOIBPNXR");
    msg.reference_frame = 242U;
    msg.leader_bank_lim = 0.773712731591;
    msg.leader_speed_min = 0.725451853505;
    msg.leader_speed_max = 0.8269723873;
    msg.leader_alt_min = 0.751378257527;
    msg.leader_alt_max = 0.721577661692;
    msg.pos_sim_err_lim = 0.725809386462;
    msg.pos_sim_err_wrn = 0.498699525702;
    msg.pos_sim_err_timeout = 47276U;
    msg.converg_max = 0.0647752677923;
    msg.converg_timeout = 43191U;
    msg.comms_timeout = 42624U;
    msg.turb_lim = 0.59678512939;
    msg.custom.assign("EVVGANZFQCQXOULYLCCNMQBHJOQSMSPVORFKNSRFSKSORLDRHXMPAMIDNUFHIGFAQKBAICEYSTY");

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
    msg.setTimeStamp(0.3836170245);
    msg.setSource(34788U);
    msg.setSourceEntity(51U);
    msg.setDestination(19472U);
    msg.setDestinationEntity(227U);
    msg.timeout = 2399U;
    msg.lat = 0.876628849489;
    msg.lon = 0.437891417089;
    msg.z = 0.640521054493;
    msg.z_units = 165U;
    msg.speed = 0.894305845222;
    msg.speed_units = 138U;
    msg.custom.assign("FEQMIAZVHOKXUQPZMCSOWVAIXDYJLOIDERBUTVGGDBQQXLTUBQGTPAHKPRDIHIGMPZTYLTQNWOKUL");

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
    msg.setTimeStamp(0.735415964815);
    msg.setSource(599U);
    msg.setSourceEntity(213U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(55U);
    msg.timeout = 42929U;
    msg.lat = 0.103226917145;
    msg.lon = 0.0671033064197;
    msg.z = 0.156602452343;
    msg.z_units = 239U;
    msg.speed = 0.340409599982;
    msg.speed_units = 222U;
    msg.custom.assign("RRLYLCPYFZZECHZOOMIOVELFKWSUPGRNTXGVNQDZDCJJKMASNUQOMM");

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
    msg.setTimeStamp(0.0659396470839);
    msg.setSource(32671U);
    msg.setSourceEntity(53U);
    msg.setDestination(7502U);
    msg.setDestinationEntity(204U);
    msg.timeout = 38395U;
    msg.lat = 0.198842675435;
    msg.lon = 0.784552561155;
    msg.z = 0.867102006921;
    msg.z_units = 170U;
    msg.speed = 0.423815094447;
    msg.speed_units = 27U;
    msg.custom.assign("CGBEDDLHKVFJQIFABASHJSXYBCSQTTNEGIDOKBEURRVLUGYQDSMZOGTHZHQFWVIYHDPWUVFZVONCGHPNFEATNCISUALSACRSPFXIOPUGSURVWNZJWEEKAAREVXOJDWWNLHZNTVPLNMUXJZTUIJTQDVIMIIOMTQBGEBYBAKCXCFUKLEYLJKTPFCRBGKO");

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
    msg.setTimeStamp(0.301211546482);
    msg.setSource(48972U);
    msg.setSourceEntity(7U);
    msg.setDestination(27576U);
    msg.setDestinationEntity(240U);
    msg.timeout = 34512U;
    msg.lat = 0.659198331416;
    msg.lon = 0.298909041326;
    msg.z = 0.0521360328305;
    msg.z_units = 229U;
    msg.speed = 0.0153672331086;
    msg.speed_units = 222U;
    msg.custom.assign("QYFTEJPBVDKNFKQZLJFFNHUAIMSKENKDWOALKQFRSTFCHXXNYDQBXKWRTTHYK");

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
    msg.setTimeStamp(0.27238202696);
    msg.setSource(43492U);
    msg.setSourceEntity(220U);
    msg.setDestination(15147U);
    msg.setDestinationEntity(203U);
    msg.timeout = 10149U;
    msg.lat = 0.710170298995;
    msg.lon = 0.861601668178;
    msg.z = 0.241002623281;
    msg.z_units = 78U;
    msg.speed = 0.894871653119;
    msg.speed_units = 249U;
    msg.custom.assign("LEEFLRHIJHSRFQNNNYTTIIETMLIFSCPFTNRUAZZAZHQFQQIABCKUOLIO");

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
    msg.setTimeStamp(0.59404941888);
    msg.setSource(61741U);
    msg.setSourceEntity(199U);
    msg.setDestination(16238U);
    msg.setDestinationEntity(3U);
    msg.timeout = 57848U;
    msg.lat = 0.0347603976804;
    msg.lon = 0.319523281554;
    msg.z = 0.749857766493;
    msg.z_units = 128U;
    msg.speed = 0.415906416246;
    msg.speed_units = 79U;
    msg.custom.assign("SRBEDHAOHWVSDRMAKRFUDEXLTILJFONLKPBJGYJRXUATDJZQKU");

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
    msg.setTimeStamp(0.305095461878);
    msg.setSource(34214U);
    msg.setSourceEntity(152U);
    msg.setDestination(2076U);
    msg.setDestinationEntity(69U);
    msg.arrival_time = 0.212110337048;
    msg.lat = 0.902917697105;
    msg.lon = 0.664471803229;
    msg.z = 0.728196736099;
    msg.z_units = 49U;
    msg.travel_z = 0.386044709875;
    msg.travel_z_units = 222U;
    msg.delayed = 16U;

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
    msg.setTimeStamp(0.525932107461);
    msg.setSource(7873U);
    msg.setSourceEntity(250U);
    msg.setDestination(20634U);
    msg.setDestinationEntity(167U);
    msg.arrival_time = 0.11090640206;
    msg.lat = 0.915285700477;
    msg.lon = 0.0901249615063;
    msg.z = 0.975974827121;
    msg.z_units = 84U;
    msg.travel_z = 0.865982227075;
    msg.travel_z_units = 34U;
    msg.delayed = 199U;

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
    msg.setTimeStamp(0.143171928015);
    msg.setSource(9317U);
    msg.setSourceEntity(3U);
    msg.setDestination(45510U);
    msg.setDestinationEntity(211U);
    msg.arrival_time = 0.378778762756;
    msg.lat = 0.483670969765;
    msg.lon = 0.472028252397;
    msg.z = 0.643825846023;
    msg.z_units = 120U;
    msg.travel_z = 0.101209622067;
    msg.travel_z_units = 177U;
    msg.delayed = 238U;

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
    msg.setTimeStamp(0.894729031176);
    msg.setSource(6175U);
    msg.setSourceEntity(120U);
    msg.setDestination(52882U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.0476319216562;
    msg.lon = 0.67116056536;
    msg.z = 0.277303755909;
    msg.z_units = 207U;
    msg.speed = 0.38220291864;
    msg.speed_units = 1U;
    msg.bearing = 0.237751193691;
    msg.cross_angle = 0.320485164196;
    msg.width = 0.825198337603;
    msg.length = 0.342650978013;
    msg.coff = 3U;
    msg.angaperture = 0.899387298267;
    msg.range = 22589U;
    msg.overlap = 139U;
    msg.flags = 25U;
    msg.custom.assign("AJUXWCTKEOAHYHKTVJLEBFRQVFTXRCNKBIDSSGSVBWKVTQVPZ");

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
    msg.setTimeStamp(0.371677229896);
    msg.setSource(43576U);
    msg.setSourceEntity(147U);
    msg.setDestination(62463U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.385461076547;
    msg.lon = 0.111771687721;
    msg.z = 0.634056138006;
    msg.z_units = 241U;
    msg.speed = 0.259864523644;
    msg.speed_units = 225U;
    msg.bearing = 0.355095292932;
    msg.cross_angle = 0.977689674982;
    msg.width = 0.281781882656;
    msg.length = 0.614834109952;
    msg.coff = 66U;
    msg.angaperture = 0.886523734679;
    msg.range = 56544U;
    msg.overlap = 222U;
    msg.flags = 201U;
    msg.custom.assign("RPFRKWCZMQYPFKPGUIJXLEDXURPUCVQOITCDZKNYSYJLSERGLJBTCJBQKBLONXWEQGZVFVDLRWMEMLTNIHTHCAFXNYVIDZICTUEGXAIVBZEJKOWENHOCBWQFZWTFIPUWDJLHLPCWQRKYYASPQPZARAECGTSKKHCOIGUHHOKKMZDXLXAHSDDJJBENNSVFYRDAUOAFSTXNZHVJOBGFYNRSNQMMXSMMUTQWOGXZQIIRPWPYYABBBEOSAMHGTUJ");

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
    msg.setTimeStamp(0.480816600163);
    msg.setSource(28253U);
    msg.setSourceEntity(29U);
    msg.setDestination(32784U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.307864364591;
    msg.lon = 0.0439166366073;
    msg.z = 0.12393482614;
    msg.z_units = 240U;
    msg.speed = 0.0786269097906;
    msg.speed_units = 131U;
    msg.bearing = 0.365637361437;
    msg.cross_angle = 0.149535612435;
    msg.width = 0.155657543633;
    msg.length = 0.299254104413;
    msg.coff = 218U;
    msg.angaperture = 0.920501005566;
    msg.range = 42555U;
    msg.overlap = 77U;
    msg.flags = 145U;
    msg.custom.assign("QFNERFYQIDAHXREMHIDHQYSGBBVMJAUNOXLEUHDVWYUJTIOSYLBUNFLLDHPRSZIQLCDULFLFLYUCLXXECSTKWKTEDJEXFZGTEHMGKPUHBZGZJCDCANKWVMQBEIIDYSMKCPSJTJRJTFOIHOGQMXUGNYGQVCFSMGFIWZHWCWXROGGRHVQQPAWZQANWPRAASCNBAAVKVJUKUZXPCYOPLETJ");

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
    msg.setTimeStamp(0.170875501069);
    msg.setSource(6525U);
    msg.setSourceEntity(133U);
    msg.setDestination(10441U);
    msg.setDestinationEntity(197U);
    msg.timeout = 15250U;
    msg.lat = 0.652733532076;
    msg.lon = 0.659391667424;
    msg.z = 0.745716752114;
    msg.z_units = 93U;
    msg.speed = 0.770506670665;
    msg.speed_units = 41U;
    msg.syringe0 = 126U;
    msg.syringe1 = 81U;
    msg.syringe2 = 76U;
    msg.custom.assign("TSBRNZVTPQGJTBCDUDGVRRTVOKBFMBUBLEUKXGLNWDXLQEQPGSTOAEAYMQIHSYQUANPLSYHASRTCPJKFCZUDAPVZVTQSRRIMJCNCNGCJRKXOMHLWUCPKOFZXGZGXXRAOWYAWYQXJQHIXPKFIMEGMV");

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
    msg.setTimeStamp(0.342794100392);
    msg.setSource(40466U);
    msg.setSourceEntity(89U);
    msg.setDestination(25036U);
    msg.setDestinationEntity(155U);
    msg.timeout = 28576U;
    msg.lat = 0.523495506894;
    msg.lon = 0.974044320548;
    msg.z = 0.147441254389;
    msg.z_units = 42U;
    msg.speed = 0.863727292291;
    msg.speed_units = 110U;
    msg.syringe0 = 144U;
    msg.syringe1 = 190U;
    msg.syringe2 = 50U;
    msg.custom.assign("GNBIAODKODBSRFHJPGGRNKQECVLVITXGHUCPHQFWHZXDHYJBMEAOQNWTXEYIFUBQLFKTKJVOWBBCCFXMHRKMJNEQXYRYLGMGXHPPKWGGVAAXBWEPQTDDPLSMMSCRUGOBNZOTZMDURLKKUIENAHVDIVRUZIQCWZSJPWSZXAOEDFJLPQYIQAMOXRSEHYQHSJIGZVEJSTYNYALDWXWYNFYCVTRZMBKSLPOEFOSZMFVVIJTTNJRFC");

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
    msg.setTimeStamp(0.252108135524);
    msg.setSource(32254U);
    msg.setSourceEntity(27U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(172U);
    msg.timeout = 11611U;
    msg.lat = 0.705849145553;
    msg.lon = 0.0832243144185;
    msg.z = 0.440533863128;
    msg.z_units = 204U;
    msg.speed = 0.662722809616;
    msg.speed_units = 3U;
    msg.syringe0 = 111U;
    msg.syringe1 = 238U;
    msg.syringe2 = 109U;
    msg.custom.assign("HSSUHNRMOZJPDDWBRGZWZICZOALDGYIUKBVOYEKSTSRYOJPWWXTQISZMNHUDMZNJHCQEHRLBDHYKLPHNFPCGCMIKTACQIOQZNVFFKXFYIVEGWLMNDXCDUSAIXENBVAQZLKNLHRPJBVPIQOANKAETRLEF");

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
    msg.setTimeStamp(0.21930821641);
    msg.setSource(22724U);
    msg.setSourceEntity(220U);
    msg.setDestination(52170U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.61992406782);
    msg.setSource(42882U);
    msg.setSourceEntity(77U);
    msg.setDestination(30417U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.554526576247);
    msg.setSource(60701U);
    msg.setSourceEntity(25U);
    msg.setDestination(52702U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.843488377019);
    msg.setSource(28570U);
    msg.setSourceEntity(238U);
    msg.setDestination(11866U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.367188354541;
    msg.lon = 0.828175833977;
    msg.z = 0.731805602015;
    msg.z_units = 212U;
    msg.speed = 0.0158307359755;
    msg.speed_units = 105U;
    msg.takeoff_pitch = 0.123785877231;
    msg.custom.assign("RDUYTIQOHSZNLWHCXIUOVGNRYFVZQWKJOGXYDRRXLHKCMMTHBCRNGUXQITGNBUFJEFEMDCUZZSOYNBBNSFWEWGLVABSFSNAWHDKVGLLEVCRBPSOFJSLLGXCLCAVPTWJJQKCYJAVAERFZSSXDYZOELPNWWEURJYAHVEIATIZZZWMVOMGTAPKBJTTCDFKDDELQGPOPQIIHXIZJIBOPBPRQKHMHEUXYFQPRTWXKOMJNMMPAYDVG");

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
    msg.setTimeStamp(0.431398385271);
    msg.setSource(17365U);
    msg.setSourceEntity(251U);
    msg.setDestination(16830U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.24793917713;
    msg.lon = 0.226011281667;
    msg.z = 0.556341724999;
    msg.z_units = 146U;
    msg.speed = 0.0771280269778;
    msg.speed_units = 80U;
    msg.takeoff_pitch = 0.411750960347;
    msg.custom.assign("YSCQODJMVTUCCKAXKMANWJSBKSPBMWBJFSLHRMTZDWEYTLXHXSRUFOFIDOMOJOSGUTQBGUKICOBKHLAJEPNDIBCBRWAUTERXZIEXRVKVNWHGUKIZZDJRNNAKCNBTWGXQSSVMYQUQWMVOJHYANVUZROYCRJTWHCPHLMQZGDNPVEPPVBWNVYHPXSEEAHIXGEIYJFUIAF");

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
    msg.setTimeStamp(0.589444078073);
    msg.setSource(8635U);
    msg.setSourceEntity(43U);
    msg.setDestination(19513U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.520343811452;
    msg.lon = 0.387148392711;
    msg.z = 0.480790256537;
    msg.z_units = 230U;
    msg.speed = 0.807854653169;
    msg.speed_units = 8U;
    msg.takeoff_pitch = 0.394918243455;
    msg.custom.assign("MQNWRSKWTVZXNKHXYGBRVKEHJUPPIMSFMVNQLCIRECTKHMSKHSMAYTWTVACLXDJNVATEWIGSYCLHXOGOIEEPZRAJCVJOLFTRFSIQJADNDGSBQWZHIUCDTQVOCATMLOVUJOLYFSPWFZIZZMLEUIXYHBZGQKRKWGOLFPQDNAYXWUJJRMEBUIMXYOXZTTNKQQEEBRFPKBPKUSADLCBXJEHZQDVIVUXHUGCDHOGAGFWYDPYFMWNZOAFYJGDSRRC");

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
    msg.setTimeStamp(0.332203718804);
    msg.setSource(8870U);
    msg.setSourceEntity(104U);
    msg.setDestination(41940U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.669391146461;
    msg.lon = 0.675816921776;
    msg.z = 0.657978063504;
    msg.z_units = 79U;
    msg.speed = 0.543027870687;
    msg.speed_units = 22U;
    msg.abort_z = 0.508634625085;
    msg.bearing = 0.922777387634;
    msg.glide_slope = 177U;
    msg.glide_slope_alt = 0.388341350817;
    msg.custom.assign("UUZRJHYTMBBPTUKQZKGNRVXRNNKUGCYKFVQOBJHZTWRMYHWYXLSQSWFTFBDVNQMGNWBZYGCORAMICPDTAMEUADWAXSEABWIJBJFOLFIHJJFDSQADNVXXSRWZHMTALSKDFZEDHVPZJPZTYRGQCOXYREYVOXVXWVGKSNQCCMJKATLFSLLCDPYHAUEIUHMVRUBPXSQJMWR");

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
    msg.setTimeStamp(0.355892910315);
    msg.setSource(54606U);
    msg.setSourceEntity(161U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.584944002462;
    msg.lon = 0.188532765677;
    msg.z = 0.531515500169;
    msg.z_units = 142U;
    msg.speed = 0.652925298539;
    msg.speed_units = 99U;
    msg.abort_z = 0.659508501525;
    msg.bearing = 0.748700656682;
    msg.glide_slope = 202U;
    msg.glide_slope_alt = 0.987500003248;
    msg.custom.assign("QHPFZJGWAZLEEYSFTWVCFXOCQNMVNXMQHUIRMHUNHLRRUSOBVQKHIXMPABNFFVDIGNCECJYPDDPSYPYMUUODGBTMCWRFCLGTPEWDPXMPGIYJLADWORIFKKRICRUDYQMISSDKVTJAVFSKSHISWTLFRTAONOJGJGSOTELTECQYTZXADZBHBVJOAYQKLUTGCNHOZBZRWQFZVGLSBBINPXXUIRJQ");

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
    msg.setTimeStamp(0.66872856291);
    msg.setSource(15982U);
    msg.setSourceEntity(198U);
    msg.setDestination(35599U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.75347900424;
    msg.lon = 0.0231717112189;
    msg.z = 0.406340433905;
    msg.z_units = 61U;
    msg.speed = 0.700754023826;
    msg.speed_units = 111U;
    msg.abort_z = 0.585206414841;
    msg.bearing = 0.664254481527;
    msg.glide_slope = 141U;
    msg.glide_slope_alt = 0.576280262581;
    msg.custom.assign("RDYZJGSILOBUWMHVRPIXTZUJXLISEUXEVDNJKNAPDRDILFPDGARTWICWDOFHBYSVNRHGPYBOQCCSNYLPNTOLOUMYIMXEJGXCKWMEJFROZGVJCWBKUWVWMCPQNHGCDQFBWMFGSHUANANKPVTYMQKQTCFXGYINVZKKTFECDZBBEYJIMKMODIQCHFSHUHOFKQAGMRFSHUGRWPVTYLZONHATRJKLZXXDBOZZUEA");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.392684962003);
    msg.setSource(5520U);
    msg.setSourceEntity(148U);
    msg.setDestination(31735U);
    msg.setDestinationEntity(135U);
    msg.op_mode = 180U;
    msg.error_count = 23U;
    msg.error_ents.assign("RURZHYSMWZOFEWYDMXEMITHFGTUNEENZLOTFMSRYYKNITCBDTSXVBBZWUARGNEDBMMIOGKQLEUPRIVIIPCDVUKLIZXUQJLTFRBSQNADNBCHNFWQDHLJXLXETEBRUSGWJKXGIOTTAEQNANWGAVDFJRQKSPPQEALJIKPRJAAWBSWQTSMRYZPDKS");
    msg.maneuver_type = 61313U;
    msg.maneuver_stime = 0.874330836487;
    msg.maneuver_eta = 53769U;
    msg.control_loops = 4252029930U;
    msg.flags = 28U;
    msg.last_error.assign("XZHFDLNYAMJGEVNVXLYNTLGUTEKPRYZTFFUGKMBSGPLNXXPWZRMWOVVGZCVYMIBIOSBBLTDANIJOMAXWLGPUFKFQQJUQHKQJRIKOCRKRVSJCEVJRWFSOFYYIODSAWQFUNZJIYPMWDCI");
    msg.last_error_time = 0.404323156735;

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
    msg.setTimeStamp(0.227647657822);
    msg.setSource(30506U);
    msg.setSourceEntity(85U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(63U);
    msg.op_mode = 93U;
    msg.error_count = 211U;
    msg.error_ents.assign("AJAGOVDZSJZYUBIZQJSJPBDXBGYOYEVBFYVCNPRRTWYZLKZENQDFUSQQFZMVDELTJCYODJZOSNFOUANPCIHVWTPOGWYMCATAVLHYHXUEHLMBRBYICWFNQETNUKOKKRMKPGRWMAQGXINAXPKJBTKLQDTX");
    msg.maneuver_type = 29876U;
    msg.maneuver_stime = 0.769680934342;
    msg.maneuver_eta = 48835U;
    msg.control_loops = 2257046635U;
    msg.flags = 92U;
    msg.last_error.assign("CBEFFVRQTUHIXVLCUQILHTXXWGQFJTDZALKGDEVQXGHDFPEMOYQGWFEOXNJCXSPNSFFBZZPTIPWVUAJTJUYPMHSKVEZIGRRGAZWOAXVSHLYEBTDCNBXTRIMBUTIPSCNJWICYODHPPVLVHCUZLYGCIDGDQQMEDTGOEURVMQBMMGCVNSKDJZBLJJJYNLXKJRKOWQIP");
    msg.last_error_time = 0.69242956987;

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
    msg.setTimeStamp(0.303253749686);
    msg.setSource(49894U);
    msg.setSourceEntity(242U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(179U);
    msg.op_mode = 1U;
    msg.error_count = 47U;
    msg.error_ents.assign("ELKSDPBCOCCWLLFADCFUVGYWNAGPLSDPVZQHHAUSXUTGPMGJHQYBTLJVFERAUQCSZQQQZNVJSKDOHYVPSEKIIBTAWSLUFMQGTIZWLGBRBZMOWKKAARMVUVXTUNHINTEHTXAPPLXMWPYHEIUTQLRMFZDZGQERDRANOKGBBSJHKERDODSYEOOLSFJRI");
    msg.maneuver_type = 1811U;
    msg.maneuver_stime = 0.710722126162;
    msg.maneuver_eta = 239U;
    msg.control_loops = 3694684011U;
    msg.flags = 176U;
    msg.last_error.assign("WSJQOXBZOOIDVZADERYNLKAEWOVKXDJAIHWSVYHMWVHTUTBRMTICSWFCWYYJHRXYKOUARTSWMPRDJBEUXPKXIHWXUETJVIXIBTMKLQVOQMGRHULIPXDMMFN");
    msg.last_error_time = 0.818593279441;

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
    msg.setTimeStamp(0.62781006455);
    msg.setSource(61095U);
    msg.setSourceEntity(205U);
    msg.setDestination(13851U);
    msg.setDestinationEntity(34U);
    msg.type = 31U;
    msg.request_id = 49043U;
    msg.command = 201U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.274093402645;
    tmp_msg_0.lon = 0.218705425333;
    tmp_msg_0.z = 0.633375812843;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.speed = 0.282285585046;
    tmp_msg_0.speed_units = 135U;
    tmp_msg_0.takeoff_pitch = 0.580819093059;
    tmp_msg_0.custom.assign("NXWMDBTDMBNWEPOYVZKIVXATIWPABNIWCDAVKKDJABHP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37912U;
    msg.info.assign("ALPZQBZSAACCESBVIDELYJURKLNMSIYPYBATOXVVFHUMEYMVBAQWSIFOUDHFNZKLSECOPBVGKQZCMDTAMJNHQLUYIMKLMVVXPRAGXGOKA");

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
    msg.setTimeStamp(0.264267921903);
    msg.setSource(61632U);
    msg.setSourceEntity(217U);
    msg.setDestination(4171U);
    msg.setDestinationEntity(112U);
    msg.type = 123U;
    msg.request_id = 28370U;
    msg.command = 129U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 48638U;
    tmp_msg_0.rpm = 0.613439394656;
    tmp_msg_0.direction = 38U;
    tmp_msg_0.custom.assign("KQMEDOSJDLCMRVITCXCWVGVNBZZBGIWEGNBDINDXSFSAJOHXGPFONYTVLZKBBEZSHBZNIFGKTWUNJVPPXCBDVRNCWHNQJQGFJYERAWHRZANAKXTIKUQPDWSEPHYCJYQLIUYQTITKZHVKTFBXRQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56948U;
    msg.info.assign("IKHGGDLYTJHCENLKPPVIHLEYEQMZSMZXBZWTDRNWLFZOHUEEWGUGOLMLTBSNMQPHXWNEZOSQYTOSHUKTNRCPVSLAVCNJIOKIABIJSZFTAEXWUXXNIPWXQLEXOZGYXICQZRNGKRUAHPOYJSCFDGAKVBZLFCVDFZPTCVQOKOBWWVUFDJYLQYUDTFSSRMYDIHKCUFTAVERRBAAJMKGIPYFDMBTADXW");

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
    msg.setTimeStamp(0.721603518925);
    msg.setSource(35687U);
    msg.setSourceEntity(106U);
    msg.setDestination(14264U);
    msg.setDestinationEntity(83U);
    msg.type = 156U;
    msg.request_id = 15100U;
    msg.command = 142U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 61682U;
    tmp_msg_0.flags = 234U;
    tmp_msg_0.lat = 0.137306590752;
    tmp_msg_0.lon = 0.113775307766;
    tmp_msg_0.start_z = 0.774430754247;
    tmp_msg_0.start_z_units = 108U;
    tmp_msg_0.end_z = 0.0069760994424;
    tmp_msg_0.end_z_units = 231U;
    tmp_msg_0.radius = 0.621174873568;
    tmp_msg_0.speed = 0.424307542213;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.custom.assign("ZDYSZWJJKUCMZFYCUOFPCDQWJIVNABOYIHARJAIKZLUWNPTQSFTIMWAZLWGVEAPMXETBDXFEIDQGOZLFOVJZMMKEUWSIYJXRHHTDVDPQCOSRJVIXOWNGACLGVHJHKLRTNTPRSHSCLZNHSXZBPQCMJTVZXQRTMWETGACUNBAOJVPDSQHVEPELRYQBGUCYQBKKKRBCXDNGYFQYLUDFVWUYUXRXNFHIYTAAOPENKILMBINRGBSPFUG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40814U;
    msg.info.assign("FQIMJKOFBLNBNCRABJ");

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
    msg.setTimeStamp(0.904590877656);
    msg.setSource(45055U);
    msg.setSourceEntity(28U);
    msg.setDestination(29438U);
    msg.setDestinationEntity(234U);
    msg.command = 220U;
    msg.entities.assign("SGKNIHQENMTMCQHWFEFFCMFTHKCUSWCROIQIDSRMHCTERSRZKSHLPYGJGRLSBDPOOPNWCOVEQAJKCAXJJMSUJLXFBPNUGEIPMJUVLTAXEDUKBKFRDROOXLJWQDYELFQBUBJZAPGTOBPIYDUZQNLKGIAHNGBDXSBLOKIKZESODUATXQQXGZCNRHCRYLJHEHWXXYTCWVT");

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
    msg.setTimeStamp(0.565605778145);
    msg.setSource(53729U);
    msg.setSourceEntity(205U);
    msg.setDestination(14840U);
    msg.setDestinationEntity(123U);
    msg.command = 244U;
    msg.entities.assign("VTTWERPYLSACFWJCSGDBZNDGEGYMLFOMUKRXZORVBW");

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
    msg.setTimeStamp(0.659120374021);
    msg.setSource(61014U);
    msg.setSourceEntity(217U);
    msg.setDestination(52791U);
    msg.setDestinationEntity(27U);
    msg.command = 252U;
    msg.entities.assign("CNQGFPFDDRHXCIIBFIZUHVHIASEJSTUZMPSUUCLWYJUKTXKMWVQRMGLPQVOKDOZXKCNZSBBAKGUFBDYDOGAKIXVZAKAIWCQDURLOWSFSTLDUVBZ");

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
    msg.setTimeStamp(0.50392745669);
    msg.setSource(52011U);
    msg.setSourceEntity(152U);
    msg.setDestination(12746U);
    msg.setDestinationEntity(138U);
    msg.mcount = 206U;
    msg.mnames.assign("WEAGXCGOWZFBCEFOJUNTLBPHKQALGJVYHADJWFHPPXDMNZHYQEYOMLRPUGGJKCHCWAIMDJAKVTYQDOMKNFQHYUSS");
    msg.ecount = 151U;
    msg.enames.assign("FFIREXJFKSZQPDILEHNXBKMNAMIPHDOUDOJRPRQVSNYTTYLDFQLGEOGHRYPEKSSAGMCVCIYABSTWZYBSXUAIIMRQUHCWCHBLGFIVFSDRJFLLIJREMTWVJQDOHTKAXYTPKZXQQAJ");
    msg.ccount = 13U;
    msg.cnames.assign("HYGMVCBUOLJWKDGBRLJDQYFSDQECJAXBZARWVXAOBHOF");
    msg.last_error.assign("NBGWMSYGXHBCLMHULILIEUPRGHXMVCJLUHLQYXMAYEZDRUZVOADNKZKNHDWRSMUGOYUNQBHUEBCTQJPFWHOBVZOJXQPZSAZDGQBKFBIRWQETKOTTXERCYLEJJ");
    msg.last_error_time = 0.480539919078;

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
    msg.setTimeStamp(0.896919431836);
    msg.setSource(37520U);
    msg.setSourceEntity(243U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(200U);
    msg.mcount = 157U;
    msg.mnames.assign("VBMLVILJDUMCMPVQIEDKHCMSDXINQIWXNARYCBCARTVAGSYSLDALIHOOJWVUUDRDMAPNSCBUIPFHEKTQFGJZXORBIRZJWWSHXNZPXRKKHHUYSR");
    msg.ecount = 183U;
    msg.enames.assign("HUVOIPCJKPWHUXHUTNGSEIWFGAWPRJDUQXTKJVGVYZPMCKBHNLQPDVBVQIQGJSCYNTWEGLAYRRBSOBLCZTVKJIGLYIISCS");
    msg.ccount = 135U;
    msg.cnames.assign("LMRNOGOKCUCZJNZUVPDHOKVDRFFQHHLFZDDQUKAJHRPFEPIANFORIECTCOWESWFVRJWLDLSOAAQITMECOJNMJNMP");
    msg.last_error.assign("OUDXLRPXEDZVGAQKXNZJNPNCFKIEYTKBARKOHSSHYEGPVHKRMDFZYIORRAWEJJSNOVCCNQOTTWFMHAVQGWJUXSPMJIQMHTQJSCKVKRTLBANSTDQLGFYXVDIXZSRDJCOMHWSBXBUPVIPBYZDCLMBHDLW");
    msg.last_error_time = 0.450686518533;

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
    msg.setTimeStamp(0.350378904083);
    msg.setSource(57996U);
    msg.setSourceEntity(161U);
    msg.setDestination(265U);
    msg.setDestinationEntity(5U);
    msg.mcount = 219U;
    msg.mnames.assign("OQOJELLUTHKABYOUIPIUDJTRVNPUEDQZBHHYWNNPPIAVHGDZFJXFXWGGTLAAOSELMVXTOCKDAVVNPUZOPGKEDBFQGMURVCSWJHRUYSWZFXCLUXWNYFTSZECMJNWORBCIWTMRDGGFKMAIVIDWQYQZNIPGRMMTKIQQLVXVNRRJEGZBAZCIAYTKSFKHMXAOEQQXYOLXLDJSOFCBTHYSJNRPYGDYPDLNBSQE");
    msg.ecount = 153U;
    msg.enames.assign("KTHGPQVCRTSKZXWSCAJWHNHWKFKNJBXMIVCATUOBYYENTENIIILMUGPFFIARVXIISLEJNMNKYXSHEMHQYDLPBRBFZDCYBDXFFOLVAEKTDSNTITBGIDKRZTKOJCFGUUYWKLGSCRWLRDOGLDEYFGGPOCGMWZOSAZQORHUZVTGOYZXLDZXQDPUAUROAUNRMKQQYJSJTJSQMBJ");
    msg.ccount = 196U;
    msg.cnames.assign("RNKQARUICKLVFUINGLPEKCGSODIWEWRTVBGNYQJKLFODCDDZZEZEXVNRWOQMTCRBIVYNYPJEGFYXPSGLJXYCBIIEJZLAJLHHSVQKDXQBPAONSCUFLJOTQADBSTVZNWAILMRGDRUOPPRCPPSKTOOKMXUULZZUBNKAJRDQAWVOGQATNWVMSXYBHSFMMMXEMVJUHIAYMBEGUGHTWZHHHWCJTQSFMXGKIENZRAOWXETZCPYPUFYKTLXIYFQVWSBBCD");
    msg.last_error.assign("HNVFVAQLNXBOIWTNROJWVILEOJLOPUHPIAUQRWPNXCFZUKGKEXHFFPJMMQTSBFMGDUIBIPZUSCGOCSFQVYLBSVNZJUULQYGXSRWJQGZLALJMYKBRTXPMSPMTQTOKJYDAESNTDDVSAGCQBEZCRGCFLHHJDWVIINOALGIXMEEZKVUPWXHHTEIAKHJUPBADMDBCFNZMXYCWRAELYYPDQVSRZSTNRHZKTZEKJTWOWDVOQXGMUKIBKRO");
    msg.last_error_time = 0.957261803352;

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
    msg.setTimeStamp(0.118565496037);
    msg.setSource(7529U);
    msg.setSourceEntity(159U);
    msg.setDestination(24828U);
    msg.setDestinationEntity(161U);
    msg.mask = 100U;
    msg.max_depth = 0.0618294375956;
    msg.min_altitude = 0.0840380873767;
    msg.max_altitude = 0.55783553229;
    msg.min_speed = 0.729977233684;
    msg.max_speed = 0.661690804585;
    msg.max_vrate = 0.225961155072;
    msg.lat = 0.373524097795;
    msg.lon = 0.770504454765;
    msg.orientation = 0.998942371177;
    msg.width = 0.28096312963;
    msg.length = 0.0561048739716;

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
    msg.setTimeStamp(0.641114145073);
    msg.setSource(47155U);
    msg.setSourceEntity(7U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(122U);
    msg.mask = 179U;
    msg.max_depth = 0.578229313031;
    msg.min_altitude = 0.998642176126;
    msg.max_altitude = 0.132623842229;
    msg.min_speed = 0.906398276195;
    msg.max_speed = 0.466565394322;
    msg.max_vrate = 0.495220426588;
    msg.lat = 0.270642832956;
    msg.lon = 0.413420738951;
    msg.orientation = 0.609676166589;
    msg.width = 0.286420853634;
    msg.length = 0.351855720397;

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
    msg.setTimeStamp(0.128500138337);
    msg.setSource(41785U);
    msg.setSourceEntity(64U);
    msg.setDestination(41724U);
    msg.setDestinationEntity(18U);
    msg.mask = 4U;
    msg.max_depth = 0.152121684842;
    msg.min_altitude = 0.817812485486;
    msg.max_altitude = 0.0671603628492;
    msg.min_speed = 0.676544667326;
    msg.max_speed = 0.817232899419;
    msg.max_vrate = 0.536000213107;
    msg.lat = 0.11112802406;
    msg.lon = 0.411729646144;
    msg.orientation = 0.242216250781;
    msg.width = 0.897575876526;
    msg.length = 0.523016124469;

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
    msg.setTimeStamp(0.145858714522);
    msg.setSource(29591U);
    msg.setSourceEntity(94U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.408981107589);
    msg.setSource(40621U);
    msg.setSourceEntity(170U);
    msg.setDestination(7805U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.700955608227);
    msg.setSource(17372U);
    msg.setSourceEntity(133U);
    msg.setDestination(13031U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.38472162128);
    msg.setSource(48906U);
    msg.setSourceEntity(156U);
    msg.setDestination(46554U);
    msg.setDestinationEntity(88U);
    msg.duration = 991U;

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
    msg.setTimeStamp(0.0152579793588);
    msg.setSource(32698U);
    msg.setSourceEntity(215U);
    msg.setDestination(10431U);
    msg.setDestinationEntity(153U);
    msg.duration = 25527U;

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
    msg.setTimeStamp(0.109583664361);
    msg.setSource(12633U);
    msg.setSourceEntity(139U);
    msg.setDestination(18859U);
    msg.setDestinationEntity(109U);
    msg.duration = 21190U;

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
    msg.setTimeStamp(0.626108166445);
    msg.setSource(14689U);
    msg.setSourceEntity(61U);
    msg.setDestination(12933U);
    msg.setDestinationEntity(137U);
    msg.enable = 69U;
    msg.mask = 3599724426U;
    msg.scope_ref = 3962800813U;

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
    msg.setTimeStamp(0.2132378204);
    msg.setSource(3551U);
    msg.setSourceEntity(174U);
    msg.setDestination(53805U);
    msg.setDestinationEntity(88U);
    msg.enable = 25U;
    msg.mask = 170487358U;
    msg.scope_ref = 2972305726U;

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
    msg.setTimeStamp(0.98064271946);
    msg.setSource(27586U);
    msg.setSourceEntity(254U);
    msg.setDestination(14484U);
    msg.setDestinationEntity(0U);
    msg.enable = 186U;
    msg.mask = 12044154U;
    msg.scope_ref = 2659075062U;

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
    msg.setTimeStamp(0.0348229528215);
    msg.setSource(37039U);
    msg.setSourceEntity(15U);
    msg.setDestination(61542U);
    msg.setDestinationEntity(13U);
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
    msg.setTimeStamp(0.854151852422);
    msg.setSource(46018U);
    msg.setSourceEntity(254U);
    msg.setDestination(36845U);
    msg.setDestinationEntity(81U);
    msg.medium = 203U;

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
    msg.setTimeStamp(0.274944199084);
    msg.setSource(38312U);
    msg.setSourceEntity(87U);
    msg.setDestination(29434U);
    msg.setDestinationEntity(163U);
    msg.medium = 74U;

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
    msg.setTimeStamp(0.551974609092);
    msg.setSource(28068U);
    msg.setSourceEntity(183U);
    msg.setDestination(1149U);
    msg.setDestinationEntity(157U);
    msg.value = 0.329594204103;
    msg.type = 151U;

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
    msg.setTimeStamp(0.0798896241262);
    msg.setSource(61036U);
    msg.setSourceEntity(175U);
    msg.setDestination(43321U);
    msg.setDestinationEntity(158U);
    msg.value = 0.90113156275;
    msg.type = 125U;

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
    msg.setTimeStamp(0.227885277938);
    msg.setSource(57781U);
    msg.setSourceEntity(131U);
    msg.setDestination(35868U);
    msg.setDestinationEntity(202U);
    msg.value = 0.762519426104;
    msg.type = 156U;

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
    msg.setTimeStamp(0.44070166414);
    msg.setSource(26011U);
    msg.setSourceEntity(42U);
    msg.setDestination(30770U);
    msg.setDestinationEntity(85U);
    msg.possimerr = 0.188893700649;
    msg.converg = 0.268098955716;
    msg.turbulence = 0.0918488890573;
    msg.possimmon = 112U;
    msg.commmon = 3U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.132270532821);
    msg.setSource(54503U);
    msg.setSourceEntity(81U);
    msg.setDestination(4893U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.573280457818;
    msg.converg = 0.633680493841;
    msg.turbulence = 0.392120035667;
    msg.possimmon = 90U;
    msg.commmon = 119U;
    msg.convergmon = 20U;

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
    msg.setTimeStamp(0.364690239482);
    msg.setSource(13029U);
    msg.setSourceEntity(46U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(222U);
    msg.possimerr = 0.292796849435;
    msg.converg = 0.77795275461;
    msg.turbulence = 0.22404506521;
    msg.possimmon = 151U;
    msg.commmon = 72U;
    msg.convergmon = 202U;

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
    msg.setTimeStamp(0.552733142014);
    msg.setSource(44371U);
    msg.setSourceEntity(193U);
    msg.setDestination(35773U);
    msg.setDestinationEntity(251U);
    msg.autonomy = 78U;
    msg.mode.assign("BMTYHIIHNVBRHGCLOJLRPZCVRFULSATWYLRITCNPQDMYGNGSKTVYONOTLKKZVAMQDOAQZTUEZG");

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
    msg.setTimeStamp(0.0603105152394);
    msg.setSource(54578U);
    msg.setSourceEntity(87U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(241U);
    msg.autonomy = 193U;
    msg.mode.assign("ZDHUPZCJQHASFXFTNEDCNDXGPVA");

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
    msg.setTimeStamp(0.997692089284);
    msg.setSource(22562U);
    msg.setSourceEntity(145U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(209U);
    msg.autonomy = 112U;
    msg.mode.assign("WFLHRXOQINSKUMRNBXUVQOVDNZBLKWKMURETWZHAYKVACLDCUOTPVRMVFZDYIJYKPCQARIXHNHANJLZWSRBXEODGXIVCMJGUHSWPVJHBZEWKBGBIFKCNSBSAGEPEOGFNVIAXSSYCMFBTFHXRDOFJHAFYTLIQVRYAQALKNYPUJXCPCHTCMZJYLPG");

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
    msg.setTimeStamp(0.11411756489);
    msg.setSource(15562U);
    msg.setSourceEntity(196U);
    msg.setDestination(23836U);
    msg.setDestinationEntity(66U);
    msg.type = 141U;
    msg.op = 33U;
    msg.possimerr = 0.126701889369;
    msg.converg = 0.813588241923;
    msg.turbulence = 0.678857487955;
    msg.possimmon = 98U;
    msg.commmon = 202U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.0212992793759);
    msg.setSource(2953U);
    msg.setSourceEntity(144U);
    msg.setDestination(29495U);
    msg.setDestinationEntity(81U);
    msg.type = 166U;
    msg.op = 252U;
    msg.possimerr = 0.183331012447;
    msg.converg = 0.0782861859241;
    msg.turbulence = 0.463811575655;
    msg.possimmon = 34U;
    msg.commmon = 67U;
    msg.convergmon = 58U;

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
    msg.setTimeStamp(0.0824361919423);
    msg.setSource(60321U);
    msg.setSourceEntity(16U);
    msg.setDestination(62892U);
    msg.setDestinationEntity(133U);
    msg.type = 105U;
    msg.op = 72U;
    msg.possimerr = 0.391907922401;
    msg.converg = 0.0260814058498;
    msg.turbulence = 0.518113504982;
    msg.possimmon = 237U;
    msg.commmon = 70U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.0202800283375);
    msg.setSource(11579U);
    msg.setSourceEntity(216U);
    msg.setDestination(30127U);
    msg.setDestinationEntity(196U);
    msg.op = 10U;
    msg.comm_interface = 26U;
    msg.period = 31527U;
    msg.sys_dst.assign("ATDJLSECUIWGXPOAW");

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
    msg.setTimeStamp(0.0876045148667);
    msg.setSource(12747U);
    msg.setSourceEntity(148U);
    msg.setDestination(5459U);
    msg.setDestinationEntity(29U);
    msg.op = 243U;
    msg.comm_interface = 121U;
    msg.period = 27529U;
    msg.sys_dst.assign("EINPSAOSRKRMYZJSHJDONIKAKQTYVAZFSFLACKGKKSUGMEGMLPNIZVLNXXQTRKPXCUVSSBJHQPHHGLOTVQWIROPJWECFLIVEDDJWQMNBDWNBPOPWIXOVAGWBMFYNMTEXYDFCNXQQUARCXZUJHJFELGXABLIKRTYYMTBYEDHDFWPZAMMDGU");

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
    msg.setTimeStamp(0.426225806377);
    msg.setSource(60373U);
    msg.setSourceEntity(215U);
    msg.setDestination(38240U);
    msg.setDestinationEntity(243U);
    msg.op = 135U;
    msg.comm_interface = 127U;
    msg.period = 36521U;
    msg.sys_dst.assign("MWJZENHPEAJDETIMADMPFPFPSMOSLYLMHROIDSJMBSBTROJXCIBOXJNQKNJSHQAFVPYWSMHKZICRIKYTBDHSHTPXGXNDBVLKIUYEYEQDXUFFZZXDWBEIUBLVVLUAJTWUAALHHKCHOEYJAWNTMVXPVANKGNGRZZCBSFQULDTUGETWGIOGVMXZWZCUNFSVFQVKMKPWNSGQXGRQUAFOPFYOWRLNOCJDRVG");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.454694235039);
    msg.setSource(50612U);
    msg.setSourceEntity(194U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.755218488758);
    msg.setSource(51423U);
    msg.setSourceEntity(188U);
    msg.setDestination(40134U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.274769624629);
    msg.setSource(65439U);
    msg.setSourceEntity(123U);
    msg.setDestination(58245U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.556638542215);
    msg.setSource(24928U);
    msg.setSourceEntity(212U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("OKWDXVORCHVMSRXCMFGNECAFHANLKDXWXBJKRXORUQVTTJBHWAQNVQGFISSKWIQNDMXYTZCZTEMBJUCVQWSZJITSSBHCTGUZOITEFABPEYPOGUNGWQUMIEFYOKAUFPAAERRWLNKUDVAMJTDSGMIWADOZSTPNXSJCKDTH");
    msg.description.assign("VKZOFGBTFKWANGETHYCROAZIRODOMMLXGIWJDQLLWIORGZDUYPTFVJNXPTFLEMELUWJVYXGSEOARALKXSHUIBDSSDKBRCNQTBVMTCPQCHWMHDLUNSZITLHZQEDGYTKGHOEVZXPAYCXFKXPZAHVLESARNGXMS");
    msg.vnamespace.assign("XKANRNJHPHVCYNLXOZXBWRDBLOGDJTZFKZWOLETSMQGNNJSMTRSCEQIAAECXHBLYEQBWGUZCPWBFMTAVXSIFHRSRSBWIRLHUEYMLMTJJPXPAJVCZLSIKZHKUONICOUGGFJBHDUKFQIPFPDPUYQSMSAAXQYEKMKTGDCHLPEHI");
    msg.start_man_id.assign("AVNJGNVESEKLWPJTZBCQOLJFEQUUJLAFXJQQSIEUNGKVXHIKVQI");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QWWZLEZYSYQBXVSQTKHMXBODHBCNYUFCYOBGPAIZUILHPRORSZGWDZXHNXUGHDTCVBBTNGKLVIPVRN");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.907529573593;
    tmp_tmp_msg_0_0.lon = 0.964933749877;
    tmp_tmp_msg_0_0.z = 0.412610315441;
    tmp_tmp_msg_0_0.z_units = 127U;
    tmp_tmp_msg_0_0.speed = 0.651499603646;
    tmp_tmp_msg_0_0.speed_units = 242U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.719068372047;
    tmp_tmp_tmp_msg_0_0_0.y = 0.386131485281;
    tmp_tmp_tmp_msg_0_0_0.z = 0.611102197269;
    tmp_tmp_tmp_msg_0_0_0.t = 0.391797894797;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 45122U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.99442560333;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.585028487462;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.875197360225;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.start_time = 0.0851669441243;
    tmp_tmp_msg_0_0.custom.assign("LZVLPZUEICYEBTQRMQPLPCEUDWDYCHODNSTZYSXAFAWXGKHPLYONPMXIFNZWGCXBFYIPHVRUNVIWZRMUIIKBIOGAVHBHEVGNOZEXAWCSVKOUFDRTFWGUFJHNTAEOEOGDBQVZTJEAQLNBJBSMERUQSKHYOWCCRPJJSALRCZIWEXXZRGUZVRJQNTXKSQPTDYTMUVAHDJNTMKSIBV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.263449777738;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PBZPMJBTBIOYJLKRAUUTBYMZVSJCVOVHDQRZDXPWQARDKCZVNFHEHKWWAHEUWKPXBTKYSLQPZTUIMAAMQAHNLOZQIMOPUXBYYYMZFTQZXOCEEHYNVKLEPHCNURQITOXGQWSJROXWMLIJGONLQCECDXBHGSHKAVDMRGILCGGOEGRTPTLGSSYYINFCDWIWFZRUTNSJCSXBFAJVWZBSWFLKRJGJXPRNFXVLMKKOHFCANUYFBTIVVSPJDAGQIDUDEF");
    tmp_msg_1.dest_man.assign("BBXOXROPFQEBIFCCRAATSYZOVFMSBUOYZDANKFLTMNNSPLYFAIHKHGQWQNAPVUSDRYMDZSCSRGP");
    tmp_msg_1.conditions.assign("SNSCJFFWLBYRPIBKBUWXIEVMPBIYADGULYFHPVURZNYXQUVKQQLDLAMGIHDOGYO");
    IMC::Phycocyanin tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.447725820354;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::RhodamineDye tmp_msg_2;
    tmp_msg_2.value = 0.225982878831;
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
    msg.setTimeStamp(0.329811914991);
    msg.setSource(47869U);
    msg.setSourceEntity(242U);
    msg.setDestination(38235U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("FQFTCKRXQYIOFLPMKDBPJTCWQXLOWYJKHZXAAUGLDMNAMLWGRVPAEZGVYSWSUHNOSKWBRKVEBGPLFNGFNHHIZEWGRBFFDMHJCGJFNOVUYBQGWPXKSUEQMCDTKZEOHVZRCCVOTOANEIZIIRCVLKMMZRIOBZSAJIEDLFZTSNPQXBHOJNKJURMMJW");
    msg.description.assign("RMVBVOOMEIWEXBILCGHRGXVTCZSTIZKTHRQCNWCTKLMCWFUSQEYNUORPGNCFTNPLXNYFHRSDWDVJGVMAIJQRRARPTLOMIUTFBAKZSHBAAMJFYDDCSFXAPVWYY");
    msg.vnamespace.assign("FQDOFTECLCNCAJDPLOQUPGOKYHXMGDGLT");
    msg.start_man_id.assign("JHDMJKREPLDVECNFWONXGANVQQMNGILPDYSTIQCPJDQSILYDLGORCXCZOETWBUIBWGGGAZTRQNMQAKIMKJFWVKLBBNIXHFRM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MHXFLKFLNJJCVWXEIQKBYMVWWCEMBGDRSQETUCUCUKHFLXLOQYPVTIHWQHWQYBKZGSBXGSNGZGYTONMOCOCPUANAFSFVFQJLBZXTHDPCGGJXPNAVTYOIRKFWVQLRLVGIHFYTUUJTWRIKPADCMDMWGZIDSKSVEZJNNKDIECUPNKRNAYZERPUMBSAJCAYZREPOYHWFPLQHDQVWNSKXHSIRDFDUAEVRXXMZOOJAOBRXT");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 43259U;
    tmp_tmp_msg_0_0.control_ent = 161U;
    tmp_tmp_msg_0_0.timeout = 0.622076449156;
    tmp_tmp_msg_0_0.loiter_radius = 0.704938790283;
    tmp_tmp_msg_0_0.altitude_interval = 0.745726030782;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PushEntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("ZJCFNWVABTBZRQPLHLZMJXPPFGMSJUYAHRRYSNEAURECWBEXUDDIXOSTGLBOOVWNPXNGJQXHAGAABFUFFWFDTHHZKGVWLSJEMKSJDIOYNGZWSABVYURTPIICIUWESIBNGCXMLTUPQFEPRWOZMXMQZMKYNEIYRFTSOTPCQKQBQSVAOBMYWKSEIZHLVDLUHEPTYJKCCLKHNVDXVUGDGVKXFCNMOCQIHZTIKMZHLDUQJD");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SetThrusterActuation tmp_msg_1;
    tmp_msg_1.id = 113U;
    tmp_msg_1.value = 0.320378612809;
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
    msg.setTimeStamp(0.576084674907);
    msg.setSource(52726U);
    msg.setSourceEntity(97U);
    msg.setDestination(27307U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("QZKTTDCBFRTMXRDGPSZCQUACPZSRVJRBVPXASMYMCBYFLAXYPQQPQGMDBGGVLOTGLIXKBNUUHFNPNSTLWEGHYFUEBUOKIKPLXEOYMZFLZBOWJXATHYYXKYTAOSSZAIFRODQERWQHQDRUHRDNIIVUJZOIEJFNJIPYZCBCWDWEUGCLWAXEWKGVOJVJMGVTLKSVDICIONDMFWALMRSIXZQFUKBWJKAJOMVSDEJCHCBNWTMKFNEH");
    msg.description.assign("CXLLKRTFDNXIPAFKPVVXHZKCITYEYSBTNLMZSLYFPFDSUMDOVCDLVGXJWETXUJSWOBXAVNTZYBOIVTEGBPQBZWGYODDKKCDPWPFFANNQHVXHGQVBOLUCSVKWGPUOHWSGOQLY");
    msg.vnamespace.assign("AMXQIARGYAWLIUSMLIXVUBZKGDFNTBQJCXBVABRBRAMETMVNJORCZEKUPBAKULKPBOCNEZASFUVYHPJKFNQSDRXDLBSGOFIWGUJKGWYBSNZMSTSMOIZWHCFYPZAWTDWZLEPDOIGNOIQNNVQTHXCWXHHXXZOITYPCDWERRVTJCVSDUYEBOHKPTHMFTHLESZFJDHLZNVUCGAEQYNFPMCQQGLFJKHIYEDLVOJRWXCARYPGQQEMMKSFXUURKW");
    msg.start_man_id.assign("TANFMLWFEEHGERKNJBJPPVZDPJDYLEXDMTJSVMSUKVCIWBZOVWCJXIRHMPTLXYRAGZAAOEKHEPONGRBZXTZDFNCAPKMOUYCEZDUXLUSSMLSMYYJPBRDUBDHSZQRCLIHBEUMTJRFRDYTPYKBFOBWVAUJLQHZFNXWQKKWIJTDONGTQGIVYPVWQUVXOTAKIWKWICQUXQRIPCAQDCZMGSZHFMOHCFALGLGENRYBVSSVKJHIS");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BMHNUDIUVABXFYYOGFKUTHYMRWNTEPHGBFXXDDFTKALPVLWKDBEYWGBREGMCCCYQJMOUXDKIKSWITZCQMQBSWSFLJWFRMSPPSAQJHMLQCTIVYLNCSYXGTDPJTUANZYIWJPICBKLSRNVFPAMIBXACKNOBJQJEFGIQGVHFJRVHOIFHEOQXUTMEZLCGAENHADYSWZRHUKHOA");
    tmp_msg_0.dest_man.assign("LVJOALFVZKGPFYPJCFIDKTAWYPGFZJQIFWQOXBUYLECKNOFEXVNNWPEZLJOXLMTIRELWKHCKANZITWBQMHOHSYNCXMHEGOGGSVXQIGOUGCVWIVJGQOFSDPDYHMTFEHYUKXWHZOAXKPNJDVIUATUJARQLDBGINTEHSYXTKDBLBYMQABAFZRUMBDYIKTBURZXYIULPSAJRJSTTSWCQNCNUNMFERUMSRSHPRVWVPCDP");
    tmp_msg_0.conditions.assign("IAMPCDFBANGXSRYQBJMBCGJETVPRRANCGMCLFOVOULZKMOTKQNIQZKBOSWCWAQYILZFEVEKBNDNSUWRMTZOLCHGJDYXJFASXHRFSADDNZKESIKLVOCRPGZEWDRMJBZFHUQBPRSVJHGUPQTPJYYMTUEEITFTCYXOOTWFXAPINUORLBWXVLHDAYPCKDGAFTICPWQVQIKXHFYNJVUVQRDJNUEMZHEH");
    msg.transitions.push_back(tmp_msg_0);
    IMC::DesiredThrottle tmp_msg_1;
    tmp_msg_1.value = 0.312996424363;
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
    msg.setTimeStamp(0.482963582413);
    msg.setSource(41832U);
    msg.setSourceEntity(44U);
    msg.setDestination(1352U);
    msg.setDestinationEntity(161U);
    msg.maneuver_id.assign("CSKUPKXMYORTVOZNYZJEYJBN");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 2032U;
    tmp_msg_0.control_ent = 99U;
    tmp_msg_0.timeout = 0.0724608477256;
    tmp_msg_0.loiter_radius = 0.404180670824;
    tmp_msg_0.altitude_interval = 0.299390453862;
    msg.data.set(tmp_msg_0);
    IMC::UsblFix tmp_msg_1;
    tmp_msg_1.target = 49599U;
    tmp_msg_1.lat = 0.779474621655;
    tmp_msg_1.lon = 0.224967647551;
    tmp_msg_1.z_units = 96U;
    tmp_msg_1.z = 0.0484245976042;
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
    msg.setTimeStamp(0.326368371082);
    msg.setSource(58394U);
    msg.setSourceEntity(53U);
    msg.setDestination(51448U);
    msg.setDestinationEntity(56U);
    msg.maneuver_id.assign("XKZVHOTSISVWKTIBAMYDQPCTQMQPRQGFBCBEUKKXEIVJMAHLCNMWSMRVLWBYYVZTULBBSFSSMETCBSICIUTQATRWDEBKNVVWNYUNRUDZNYLZRDEJJFBNPAJNQPMZFCOTYHIXZDLQJGHKHWGUIHDGGUTAOMYUKGHEMEGKPZYPWLPNJYAJXIQAXSXXUJCDDCLXULGMFOQRROVFHXLLETSNYOOFIWVSXQNCFEZDHEKZABORVR");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.987563714779;
    tmp_msg_0.lon = 0.345133308097;
    tmp_msg_0.z = 0.575532618779;
    tmp_msg_0.z_units = 53U;
    tmp_msg_0.radius = 0.0885334055264;
    tmp_msg_0.duration = 54888U;
    tmp_msg_0.speed = 0.00252888530922;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.custom.assign("SFGLOZFIZIRRSNZWHICZKVCRNTZRUNVUAERRMSTEQEWDTWTULLUHGIMKUMAQJJZZOKLPYVYLEWCGNQDPVEDBGNPIJCDBDGDQXNFFZCBRJSXWEHCJNBMEWCKASKBOOKHPFMTEJGAIMHMLXHPYFEUAYHLQUJYYUIRQYCQTBIXFWQXJZAXBHESM");
    msg.data.set(tmp_msg_0);
    IMC::AcousticOperation tmp_msg_1;
    tmp_msg_1.op = 39U;
    tmp_msg_1.system.assign("EJELGMHWCDAUSIMZTIYUYHMHFORUHRHSPARWGIOBZQYLKVWMDVDABCSEWCMKQQAIZBUDRSLBELKXTQJFRVYOKPWLMJOXKGPCGDHTDZNFPNYQFWIHWJJABORTCCBAGLLQUNORNEXNNHOTY");
    tmp_msg_1.range = 0.586711621838;
    IMC::PWM tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 69U;
    tmp_tmp_msg_1_0.period = 1855785836U;
    tmp_tmp_msg_1_0.duty_cycle = 1735308101U;
    tmp_msg_1.msg.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CommsRelay tmp_msg_2;
    tmp_msg_2.lat = 0.465980292354;
    tmp_msg_2.lon = 0.561953704134;
    tmp_msg_2.speed = 0.664290325176;
    tmp_msg_2.speed_units = 212U;
    tmp_msg_2.duration = 41139U;
    tmp_msg_2.sys_a = 59740U;
    tmp_msg_2.sys_b = 28994U;
    tmp_msg_2.move_threshold = 0.950922023965;
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
    msg.setTimeStamp(0.928709145847);
    msg.setSource(49252U);
    msg.setSourceEntity(86U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(49U);
    msg.maneuver_id.assign("RJHDDXMDTFYGVLREQYMFGANMTVLPKZGNUPQXHBIERLZVSYQECCQUSWIFIGZRGLJXEERKYTSUAGNASHRWTNNJBJKUYVHEAMKROFIWDZHHHAPXASGRHVWMTDFXGCUNBZYKQDLBSEJOC");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.223707226948;
    tmp_msg_0.lon = 0.873521364225;
    tmp_msg_0.z = 0.219473661348;
    tmp_msg_0.z_units = 59U;
    tmp_msg_0.speed = 0.77132590713;
    tmp_msg_0.speed_units = 60U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.686944733155;
    tmp_tmp_msg_0_0.lon = 0.957174202643;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PHEKXBDAPQZENXJEPDKNODAMSMRTXQOTQAPEQIZDRKFWSJOFIVSZFUELGMTYNSVNCBDPOVDLVKEMLXHOUYIKLBCGIWIZJLUAPTTZSQVNNKECJBLYYWGQHAVHCJCOLHRYSRCUOXMURDWLJTYAXBMOMEGKAQUOKPJLPPZHUGRBISGYJRJYUVZEECFODQQUXVZMIUFRQWTKSRRSWFAJLIVXFCHB");
    msg.data.set(tmp_msg_0);
    IMC::Brake tmp_msg_1;
    tmp_msg_1.op = 88U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PathControlState tmp_msg_2;
    tmp_msg_2.path_ref = 1111855754U;
    tmp_msg_2.start_lat = 0.783552002633;
    tmp_msg_2.start_lon = 0.262401150304;
    tmp_msg_2.start_z = 0.17491490114;
    tmp_msg_2.start_z_units = 60U;
    tmp_msg_2.end_lat = 0.468282953802;
    tmp_msg_2.end_lon = 0.385313465395;
    tmp_msg_2.end_z = 0.216971869377;
    tmp_msg_2.end_z_units = 25U;
    tmp_msg_2.lradius = 0.690260721248;
    tmp_msg_2.flags = 137U;
    tmp_msg_2.x = 0.598391768604;
    tmp_msg_2.y = 0.420978453014;
    tmp_msg_2.z = 0.259898793563;
    tmp_msg_2.vx = 0.113547816374;
    tmp_msg_2.vy = 0.506943725298;
    tmp_msg_2.vz = 0.594401133128;
    tmp_msg_2.course_error = 0.770873004177;
    tmp_msg_2.eta = 53818U;
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
    msg.setTimeStamp(0.993064086061);
    msg.setSource(24748U);
    msg.setSourceEntity(221U);
    msg.setDestination(16799U);
    msg.setDestinationEntity(158U);
    msg.source_man.assign("WASACQMNJLFOCOHNPDVFMDECTBXZMIVROZOHVUNHMGCDGBVGHV");
    msg.dest_man.assign("BZHMXZSQTXUFTBMXYYWRIAPFZXDVJYCJQCAHKMUGNXNVGKAHFWPHOD");
    msg.conditions.assign("ZAOYNKUCRDZQUPRTDQPDWPOSWVHWRTCKCSCICVEVUBIGMPGUFLOKKQBXNNWEWLMBXDAPLZQLHROGDAFMYCLEQOHMXMZJQWXGEFDQXODNROJXHJYOFUVEVEHBAMXJDTBTUPHDLSDETEPPTBYVJPFSUAQIFOYKKGVIWSHJUTSNNFVCFMYVZYJQFOEANMZSYMBBBXUHTXZWKULEPWSRNSLTIRQLGZXNGZJGKAVICIIGRAHBNMRSIAYHGCLIZ");

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
    msg.setTimeStamp(0.38970991086);
    msg.setSource(36142U);
    msg.setSourceEntity(227U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(68U);
    msg.source_man.assign("ZIGJBCEUGJIXBUCBBEK");
    msg.dest_man.assign("WYAWXEYDYNFMFEILMJPKPVLDKGETGYIQKOAGCQFHSWSMRBWMWLXXRHDOGQTZAWMTNUGHEMKWXTADHZZLCKBCBKOQIJBANISWVESZTHGGTZDSOYYVBAHQTVRBIW");
    msg.conditions.assign("YTFCDRMBKEMNTC");

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
    msg.setTimeStamp(0.995474011806);
    msg.setSource(22172U);
    msg.setSourceEntity(249U);
    msg.setDestination(51322U);
    msg.setDestinationEntity(13U);
    msg.source_man.assign("JNGUWBMQGHFLIVZEDWPSKLZXRVMDJODJLZSURJETTEDACMNRSNWBMUFXSAKAYELSEBYQKKDXADTISHGCPYFIHYIQUFPPNLQBKEJVEMZTCRHQYUMLICTGMDCPMMUXMFSRWZIXOGWRSNYSIFNZVIHWDUOOBLYPJOPCEHKNRIPGVKWJVNQARYBRNVUACQWJKSXUOTCFLGWGWHXJTKLBA");
    msg.dest_man.assign("CSLAHZSVWLRQYORMNJXEGPERVXPNWBIEIMHOIVLJHNIBYZWMXHWRYTFUMTDLQTNUMMKDIDAMVQFGAFYP");
    msg.conditions.assign("SAZRLPKUVMXTAEEYOOWT");
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 188U;
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
    msg.setTimeStamp(0.3778444615);
    msg.setSource(9032U);
    msg.setSourceEntity(162U);
    msg.setDestination(25237U);
    msg.setDestinationEntity(14U);
    msg.command = 53U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LOGHBNGBTVHFCNGDEIPTVDXRNZEQLTYHLJIVROLMYUZZJYWPMCVBNQTZGFTNHKYORKOLMZKPSZNEYGPUDGPKECXFTLRMSROXVQUSIPVJUIJREBVPQHUM");
    tmp_msg_0.description.assign("WXCXQSTZQYFTNMVCKSJQJYPHUUNPMOHWJJSQVORKVSPRHQABLKZNZQGBIBHIEUXBFDMORSDLJGKDDYEQEFYMPQTYNMNRIYJFOLABRTFRTSJBGPKLONNHEHMRLGGXIRXGQT");
    tmp_msg_0.vnamespace.assign("QRUBJQTTQBWSISLHTZMYHZWSXYYRJOZUXXZJAJFPVLHCREAQXILNPAYMWNBLDNKFIMOVWWOKXSIOBGFIFUKSUBGYXJLVLBSMKVDNUDCYJHEVNBJNWQGWCPBDCTDOGLAPHRVZXFIRGUCPERAYNQHZHASUMAGFAPGEFWEQUYWEVCESTPCDFIOGUTVGDEBTUTLVVISPPCDTMQTOZRONDJZMKQIMOKRZXYMRYDZ");
    tmp_msg_0.start_man_id.assign("ASMWAXDTIGFZVBYKVHRAALSZZZFEUYTQZOQGZJFUQDTTUBKCPRQMXVMXPWMEOIUOWHSTELGXNJCBJNKTEOXTXNUEQOABRKLLDGGXXELRBSLQFDAWYLATCCVZZPNH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JOYISMQGHVWBFMIVUPDWBCQSOPWAXDBYMGRGPLLRJJSMZCJKOEFRZIJPHZSSYOKZWBPCAZF");
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 18988U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.173058399469;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0885270892608;
    tmp_tmp_tmp_msg_0_0_0.z = 0.218928718369;
    tmp_tmp_tmp_msg_0_0_0.z_units = 113U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.134602149369;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 251U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HSICULILOQTDFUTLAEAKLYRPXCLPGMEACJXTWXHDUNZWBZQWMPNFGAQNIBJTIJVYQUVYMFXCXQUGOYEHLGDXLATCQBBROFKIGAIQOCSIEJVDPMGRFPIEWNRPQMJTDFGFVZSXZSZPSVPMZEEIFUUIWZHMGVOVXXAPO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Takeoff tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.0599658613836;
    tmp_tmp_msg_0_1.lon = 0.528578655671;
    tmp_tmp_msg_0_1.z = 0.387517138873;
    tmp_tmp_msg_0_1.z_units = 20U;
    tmp_tmp_msg_0_1.speed = 0.864767808444;
    tmp_tmp_msg_0_1.speed_units = 45U;
    tmp_tmp_msg_0_1.takeoff_pitch = 0.829076532796;
    tmp_tmp_msg_0_1.custom.assign("QCLIGIYPICPUTLXTFLWCSORDHNQNOEKLBPZNNTURAHBAZSYCIIMGMKPDCWUQKFKYPSEGAQEDTZVDBZFPFDBVPLHHYEIRMFVFRSGRKVAHMERSVCQNZETQJYZHXMHMKOBADXTJASSWNVNFXOVJMWLLYZYSPKRABFUAIBOGXXBZQQQVZYYDPTKTYXKGOZNJSVOWEDMMWJNISWMOITOQCOAHWDCWGEEHGBRJJGLRFKFNUAJWUIRCUXCBJJU");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.98297927886);
    msg.setSource(35641U);
    msg.setSourceEntity(95U);
    msg.setDestination(33407U);
    msg.setDestinationEntity(34U);
    msg.command = 125U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VZSBXCVQTZCUPIZASEIOYBFSXSVWDYBEJWNHYXCBFBMQPCEDOWXCVUTZPEYZNPJKWSKBMMOEZXK");
    tmp_msg_0.description.assign("ZMBRXXVXBAVEFVFBNTXXIDSTBGKXPREYQAZPEJVETMUIVBYVQKYTEYDDIKRBTEOJRWHHNDEMNUY");
    tmp_msg_0.vnamespace.assign("DVCWOPMCIHKURZQMUXVMSOKDDAALEYYUSAIRPEIXBEQOLGLYGFGRPYUOYEKUXIONLJZPWADQFDYPNLMJQGFVKQKFGWKTSBRPMNWWNBBQAXOUCOHBOHHILNFBJMNAYCXTMZ");
    tmp_msg_0.start_man_id.assign("TUCLQBWEKSBBDJDYOBFISXGEZCWUVNWUXDRFZHGMUCGDWNHMNUFOAAZLSAJUWKTTJBQSGPPWBGIAIJFKTCKPTVZFYPQGTAXCIHEPUCEHMXIZLXVQAJGSEOXRBPIVMXTNYZJORJVNAISRSMHSRTVQAFRYBGVEKDWOIECKYCPZODTWLFVYOXZLSMWRHOMJKQHYGQVLNUKGFEFDZBCXLYMEJPOQTSYLRAPFNLUMCRZOUMIJDAYHN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AIMGTIYTEWYVAQJYMWWRENKTAQHSCFRPJ");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 17705U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.395357682435;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.440373157457;
    tmp_tmp_tmp_msg_0_0_0.z = 0.529486016754;
    tmp_tmp_tmp_msg_0_0_0.z_units = 41U;
    tmp_tmp_tmp_msg_0_0_0.duration = 9085U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.659577746562;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 169U;
    tmp_tmp_tmp_msg_0_0_0.type = 95U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.483283351534;
    tmp_tmp_tmp_msg_0_0_0.length = 0.739068212242;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.90954131854;
    tmp_tmp_tmp_msg_0_0_0.direction = 101U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BAJKSQYDCEGONAVMMIQJKMMHGORSZPQBKKJCTMFIFIPOERNGLVJNIQNSTPZSWRTMPCIJUPGZGEEBMVBGUHXUCJREYZLHWDDGEFHHSEHPDDVYRMWETLNEVSQSWGBHRAQDTWBVXLUPRJQTWLUZL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AutopilotMode tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.autonomy = 29U;
    tmp_tmp_tmp_msg_0_0_1.mode.assign("CIEPJQAYZO");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::CrudeOil tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.793222804654;
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
    msg.setTimeStamp(0.984200268909);
    msg.setSource(35213U);
    msg.setSourceEntity(200U);
    msg.setDestination(37412U);
    msg.setDestinationEntity(202U);
    msg.command = 57U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QWYZSDANKRKHYAAOHCFJJDFWNFXKDXUPQSQABDXUAULHIPEMVMEBCNHVIEHJREQWJBNWCPMCAEICZSJEMKZPUXTKYKJRTGSHRLPDWIOGLYRKGBLITPIIVZCTOMHXLOCLYORYQAGLBRHBUQFUUSEGQFJWPDBFTGLVXULWHAFMXPHIMYOINDNYTPIDOSNNGCNGTZVVWGWKDJT");
    tmp_msg_0.description.assign("VNRTAFLQYQVASOYNVDPZWCRESDKKPAUBBJPYRHXUXCGDYDTCXIPBRIHCNZEHKSZKBSOMZYLJYRYLJLHZBWEXDXTUAFHIMILKPWOUTWOLIREIARIHWVGWVIKYMAQENGHOMJTIZQENCNGAZGEFQMQPFOEZVWGFTKGAGPQACKHUBGJQQDMJCWLOSAEPURBWSNMBSSXFZOBTXTCSKRYEVFNBMXFMLJVLDVJ");
    tmp_msg_0.vnamespace.assign("LMWRTLGJEHVSFZOPFIRM");
    tmp_msg_0.start_man_id.assign("ZLTOHYSGOXKCLHDLSURDQIBLCPIASKGSHLRZZDUXNEZWYHVIKUFEPKXNGOBCTGDEVJMAMAXUGLYRYWPZWQBRVBROPXCRTQZHQVNBLJUKWJJMWASUHNNKKVFBBWRDTLUQYXALCAJSCNCAPSFGNUAROFJQSXFBNHYMMJFPISEHSWTVQKOXEZGHQKOVTPFYTPCEBFFTWDPZOMZKMEQGVRHTGJFTYDYVCIXLIYMIABOEZPQIIIJANDCXWVJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TBMGXLUULBFGUFTWZDZXLBMDTCYZVIDQMDSOYJYJGPDR");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.138193355191;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.466879830108;
    tmp_tmp_tmp_msg_0_0_0.z = 0.025025860847;
    tmp_tmp_tmp_msg_0_0_0.z_units = 130U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.373311633066;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 80U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.0970754167586;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.418732727896;
    tmp_tmp_tmp_msg_0_0_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SAGHVSWNFTFBQVUAZGMJLVFGKCDPLWBBKONLJNQPEORTUAXRBCVHCOYELPD");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JLQARVFKXQKLVWQWAVYTDBLEOOXLYHNRZKPKWBCIPXYRBKMSTOHPFZXPKSANOZZFGBLJGGUCYHRMBDMNEQYSPKWCBXYHJCDINPREMWWLJNQXIUMLGHOUTNNUKVCQGJ");
    tmp_tmp_msg_0_1.dest_man.assign("ICTKRRXUIVJORDGGJJYWCHNLRDEFCEMVLAELLDKQENQBTQPCTAKSLRPFJZIXIFHABWMHPRBJLOVRRPOPXUKSWWQJOLPTWKUTHHZMDVUGQMSFYLOECVHMGSQAWMDZYVWWQBGVANXEXQUISRFNMGNENLDJXUXZUFKHNBBTMJZFEAYKBPWIOZMXFDKPHDTBIYDTGSJNTICVUQELONCFACOGXZIYOUBFCZRAPIYSHUGHQOYWESB");
    tmp_tmp_msg_0_1.conditions.assign("OPUXICCZFFAPKJWMPNDHFOZSQTHFSNAJSBDYJQOJIBKWWILZDJFKVLVVRPRXWIMGMGTIMJXGHHBEBPNEMVTYSHFSCEGEUAMYEBNRMMTLOENRRIDSWTYSKEUQUROIHDYJPHJKYHMIUBDAAVSBIQCWNXTXBFV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Conductivity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.299672143872;
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
    msg.setTimeStamp(0.301195696678);
    msg.setSource(46652U);
    msg.setSourceEntity(69U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(157U);
    msg.state = 211U;
    msg.plan_id.assign("VYFMCPNIYSCBXRGLEFRLJYZFFWJRDIHCMFLDLRXVFVEWFEYFVWKYQUBCVMWNIZKLIXYBDLEMJBUOZXSNHNOXIP");
    msg.comm_level = 105U;

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
    msg.setTimeStamp(0.20166638734);
    msg.setSource(25957U);
    msg.setSourceEntity(150U);
    msg.setDestination(51457U);
    msg.setDestinationEntity(42U);
    msg.state = 67U;
    msg.plan_id.assign("EGKTNMGSSDYPIDLYZOOGXRATLXMOKFVIQUIGZQQSYYJPWUAALJWFRAIAHWDKZEHEOGTMXCXJXRJBKRTHDCQZJAFLMNRFYHTGVFUUSXPXRLXQGWYTKBI");
    msg.comm_level = 65U;

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
    msg.setTimeStamp(0.0597581196693);
    msg.setSource(51963U);
    msg.setSourceEntity(5U);
    msg.setDestination(18979U);
    msg.setDestinationEntity(164U);
    msg.state = 205U;
    msg.plan_id.assign("FSQPYHQQDQZJKXCHMHVDMTBEYATAFKMBNWRUITXLSIMXAKTAQAWKBSYFWPPTNMGCPQTISGWLUPANLVJVYNEJZAXUIZMEZUNWWSGQZFCFHLIDIVISKYESJUOLXHGVBPWOCYBOZISXRVCJPGJNTOUSOECBTXCZVVVZCBBHFLFYXDPDQJKTRGTOHEK");
    msg.comm_level = 251U;

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
    msg.setTimeStamp(0.664617175909);
    msg.setSource(19856U);
    msg.setSourceEntity(135U);
    msg.setDestination(17110U);
    msg.setDestinationEntity(213U);
    msg.type = 80U;
    msg.op = 159U;
    msg.request_id = 45807U;
    msg.plan_id.assign("TEFYQOUMGXQDEWLFXOFLODNBKWJUINADEVPHGCLDFVGWAQVHBMHMXVKZLGWZAEUTDNKCITKAOQTROSYUIJGAUGTBPMTCEAHYTJMHIYFDDIKDSPZNKCUTJGBFEGHJXJQRSWRYLUBGXMRENSNRWOSZAWIQIRZTVDCUCPJHVZLEHRNJOYLEXITQBRHVFAUENQCPVSBL");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 114U;
    tmp_msg_0.htime = 0.792365126596;
    tmp_msg_0.context.assign("TSFUXUQMWZADPKBVBMFDRXNSXVBIQDKHGUAGGPTZCEKPLKVJBUYWCWBOZTFGLTGCWOVMYKVXNYPJVSEQDVLLMDFCQJWUPQYVIDSUZYGXMIUADBWRSIPXOHLXJNPEOZMIHECQNAZYZTWRKJKTLREDKJFDCZHFSCWQYCJNESONDXUZQMLRBLMHATISHMCQIAHBE");
    tmp_msg_0.text.assign("BKSMVKXQTMSDOJHLCPVFCHKZSTANGLPSTWUCBDSVIIIBAOUKNMGFFACEXTJZNLWMSLEDKHZYQOEUSQIWGWAGUXFEGRXDXHARHKJSFKYAEUJDFSFBNCWWTMIBEYOIJQPJVQXNCYTWIVOOFAXLCZDOUMVNKUKSBBEHFVHRPDLHGMPZLCBN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("REHNRSJEBOANRHDZOSSCHOMBFHNISFUBZITBEVPMGTTTDYCKWZSMAHNRUZKIRYTQYQXWYQXKQUPKYHRGPFWHRCGVNJZTXAHPAOTLVQMIVPOWIXPVDXUJJFLEADTGMKUMYDMMSSJVVCHKPLPXWSXDAVEQXXZLCIYFEGGCJCZMLKWBLNJQOUFQLAWGBUYGKCLRLUZTWFRBJNQADUQOZXNAIYPVIOWEF");

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
    msg.setTimeStamp(0.682951269388);
    msg.setSource(12575U);
    msg.setSourceEntity(152U);
    msg.setDestination(51689U);
    msg.setDestinationEntity(122U);
    msg.type = 74U;
    msg.op = 125U;
    msg.request_id = 21797U;
    msg.plan_id.assign("IYPQXTNFVREBHCEUVYQXBIUNHLSCLNMEXN");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 127U;
    tmp_msg_0.actions.assign("WJOCYXGVYOTQSJNB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VZADNQSGQNCYHXIJBGLHGZMONLJYOBLQSYIPGVZXACPWHGNUTZBVKSKWJAXZGCMINEMZBWVAFATSH");

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
    msg.setTimeStamp(0.515219473859);
    msg.setSource(37391U);
    msg.setSourceEntity(36U);
    msg.setDestination(54574U);
    msg.setDestinationEntity(100U);
    msg.type = 211U;
    msg.op = 93U;
    msg.request_id = 21729U;
    msg.plan_id.assign("GJTWKWDJLUOBNCYKMZLHDXZOPWQYROWBARGCYGMKSYXLPCMHDIGVVXDUETLMTOBIWGSREPCPPCZSNALFZUOGJPSEFTSISHTFAVXIHKVZECMEPNQOBDWSQJNBBYLWHOIWRJFJTKTYVXCRUEHJXRAGQYRVMDAMBMNTQWTMUPBXBHVAKRKZDEBIKOIDYHFPALZUZZDTSQLGEQIQEVYULCENDPKOYQMNCJFSFNAAUVIJ");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 38040U;
    tmp_msg_0.lat = 0.0697278152336;
    tmp_msg_0.lon = 0.209463525752;
    tmp_msg_0.z = 0.23929918364;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.pitch = 0.926394626467;
    tmp_msg_0.amplitude = 0.3297974319;
    tmp_msg_0.duration = 40335U;
    tmp_msg_0.speed = 0.392287618779;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.radius = 0.496478354546;
    tmp_msg_0.direction = 183U;
    tmp_msg_0.custom.assign("QBIWPBWWCCZZBNIILRGZSZOPHWSZMQADORUICDGVMRUBYOTLJGNFNVHXAIDMKPPMBQNPFIAGDDVTTXANLYGSNHYOLSIFUUOXTTMAVGJCXTAPYGJKSDYJYBSVWLQVXEEDRRFJUUJOSRSQFAKRZMVNEJWEPTWFNKZKHPGS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VMOTWJTBMZUKIKYVPOINZPGOWGGLCGDNMEYGNFPSOOESSKXTVZQBIRJZFIBHHXPQDRXISWQVHPGPLTOPJLMAXRDHKQEFCNMLEJCTOMOARALSSMHJEJRXCNYETVBXIBRIRMGASHYHRHYQVLBZRMWUFRXLPGLELDWUX");

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
    msg.setTimeStamp(0.503732190185);
    msg.setSource(10278U);
    msg.setSourceEntity(26U);
    msg.setDestination(36693U);
    msg.setDestinationEntity(189U);
    msg.plan_count = 26747U;
    msg.plan_size = 1606869068U;
    msg.change_time = 0.803358087882;
    msg.change_sid = 40637U;
    msg.change_sname.assign("TPFOHASMLRCUDQTQJTIDHJNYAZIFUUXZRFQIGFIFVHRTEN");
    const char tmp_msg_0[] = {69, 106, -10, -5, 34, -84, -2, 75, -113, -90, 110, 70, -35, -85, 28, 68, 69, -79, 105, 96, 94, 87, 41, -60, -85, 119, 43, -86, -91, -51, 114, -88, -6, 105, -35, -15, 10, -60, -48, 11, -120, 13, -116, -94, -78, -119, -56, -111, 18, 51, 6, 29, 18, -21, -35, -51, -106, 53, -45, -112, 75, 119, 8, 30, -28, 1, 121, 123, -114, 108, 80, -78, 83, 43, 79, -119, 88, 6, -36, -47, 74, 111, 9, -67, -91, 98, 26, -120, -50, -4, 34, 78, 99, 125, -21, -83, -8, 49, 72, 72, -127, 4, 94, -28, -88, -77, -119, 5, -54, 40, -82, 35, 27, 60, -8, 74, -89, 57, -27, -102, -107, 105, 24, -95, 95, 15, -18, -76, 111, 40, 28, 40, -54, -28, 117, -6, 44, 105, -18, -10, 73, -77, 45, 64, -36, -91, 104, 119, -79, 126, -69, 87, 19};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JNOKNWCPXEMDYOORGMPZKTRPENNCFSUUSVCQGDVLJXWEBBMPBTWFEGIASXHHOVFVCQJXPZAPXFALQFUSQNDNMOKYJRZLKQEWLETEBIZDOTIODDKYKLUEIHJBLGHOWZYVRKGYKTSFKRWMBACQSAVHJLPUFCEARDKZTFYOAUHFDBZFHBGPGVTSUWTTCNN");
    tmp_msg_1.plan_size = 49158U;
    tmp_msg_1.change_time = 0.112217430988;
    tmp_msg_1.change_sid = 25912U;
    tmp_msg_1.change_sname.assign("ZKQNIPBDFBHVCVKHMZJWPFQKKHQXMPXDJHGFWDMOSEMMWHJIEVTYFDEROLOVMCTEQLNJISAVVZLOSXNTFSRFGHQEPGMIYZUSEDURDYPOXZOKTMQGCYRDIXJLBTNZESOWQHUCSWKPTLBETADGVPLITDRJ");
    const char tmp_tmp_msg_1_0[] = {-50, 123, 100, 75, 59, 71, 68, -44, -103, -85, -68, -110, -10, -73, 45, 0, -19, 60, -7, 65, 84, 21, -67, -60, 4, 114, -6, 39, -30, 115, 37, 123, -78, -88, 77, 76, 71, 85, 89, -71, -101, 103, 62, 29, 77, 9, -103, 30, -81, -101, 44, 44, -116, 83, 121, 32, -79, 58, -63, 32, 50, 8, -114, -15, -47, 7, -60, -111, 4, -112, -107, -27, -25, -47, 58, -77, 96, -44, -71, -16, -33, -30, -100, -113, -26, 71, 11, 16, 99, -19, -30, 80, -118, 103, 84, 112, 11, 116, 85, -59, 26, -93, -20, -80, 15, -108, -104, -101, 95, -50, -71, 121, -86, 123, 13, 55, -115, -80, 7, -113, -10, -126, -42, -114, -79, -97, -71, 16, -22, -71, 118, -43, 117, -14, 15, -34, 99, -26, -102, -3, 2, 85, -93, -27, -41, 111, 125, -93, -49, 50, -37, 67, 68, 121, 108, 77, 93, 91, -59, -97, -113, 48, -114, -95, 103, -82, 2, 70, -122, 71, -60, -37, 92, -67, 20, -3, -84};
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
    msg.setTimeStamp(0.349522696855);
    msg.setSource(104U);
    msg.setSourceEntity(221U);
    msg.setDestination(29516U);
    msg.setDestinationEntity(72U);
    msg.plan_count = 26444U;
    msg.plan_size = 1046760325U;
    msg.change_time = 0.232945781398;
    msg.change_sid = 6952U;
    msg.change_sname.assign("IRBUREZJDCWSXZHMYRAZAQFNPXTANLMERSDORGVGHMPJBMTHYXOSZLXPNTUGJEFAQQPQIYQVWIBDKIBDHJNWFLOQKMCIMUZFOWTUGIGJKOVUUOROKTDAM");
    const char tmp_msg_0[] = {-40, 109, 62, 108, 17, -88, -72, -41, 33, -37, -1, -43, 17, -101, 68, 102, 108, 97, 99, -32, -42, 19, -73, 56, 97, 33, 113, -75, 82, -101, -44, -48};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ORFVTICYUNGNMVRILSWETZBDXDKJWXYMDIPAUATLISNYUXGLEB");
    tmp_msg_1.plan_size = 62904U;
    tmp_msg_1.change_time = 0.348398310834;
    tmp_msg_1.change_sid = 20003U;
    tmp_msg_1.change_sname.assign("YBIXCNIIVOXAFTRCPOSJVDTXUJBUZZENLVRGHIZDFQPPLEGL");
    const char tmp_tmp_msg_1_0[] = {10, -18, -79, -51, -40, 28, 14, 56, 103, -106, -92, -76, -97, -67, -90, -75, 12, -97, -56, 91, -54, -21, -10, -49, 9, 75, 98, -1, 43, 101, 57, -87, 95, 59, -83, 94, 47, -104, -95, -68, 126, 119, -63, 70, -94, 105, 125, 52, -56, 44, -76, 26, 71, 61, 17, -89, -95, -15, -105, 97, -49, 95, -77, -47, -30, -82, -91, 86, 78, -88, -28, -83, -90, 48, 31, 8, 71, -55, 114, 45, 111, 88, -87, 54, 55, 122, -109, -69, 65, -104, -52, 54, 41, 76, -31, -60, 20, 87, -38, 25, 110, -26, 104, 81, 14, 14, -64, -110, 73, -69, -20, 34, -46, -77, 95, 108, -55, 45, -2, -86, 45, 111, 91, 126, -57, -112, 97, -78, -111, -89, -15, -27, 2, 9, 26, -50, -80, -73, -29, 117, 110, 3, -105, 101, 126, 18, 75, -11, 27, 92, -6, 69, -77, 96, 123, -110, -85, 96, 62, 83, -4, -81, -126, 68, 64, 38, 10, -115, -83, 121, 105, -36, 87};
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
    msg.setTimeStamp(0.809329754546);
    msg.setSource(8909U);
    msg.setSourceEntity(233U);
    msg.setDestination(32920U);
    msg.setDestinationEntity(200U);
    msg.plan_count = 16573U;
    msg.plan_size = 3267852468U;
    msg.change_time = 0.0355115702468;
    msg.change_sid = 49590U;
    msg.change_sname.assign("MDQPJOAKBGNRDYPUWIBBYBKEBIDABLITTCSATLYFNENKSIEGWPAHLCOSMEGIFYHQNWTVHFPPQJTIQIUORHQIUHMTOEOHAKTYXMEOCVEBLFGRCBZVPKZQVCOYLBRWRUFVVDLXGWUXRQZ");
    const char tmp_msg_0[] = {108, 42, -15, -62, -63, 35, -100, -34, 115, -11, 95, 0, 8, 125, 125, 101, 73, 91, -30, 24, -9, 125, 13, 40, 106, 64, 40, -104, 0, 100, 72, 102, -52, -81, -19, -24, -98, 16, -19, -61, 50, 98, -122, -112, -101, -53, -11, -74, -7, 84, 4, -97, 44, 61, 0, -13, -125, -53, -52, 37, 120, 94, 103, 65, 69, 47, -116, -34, 120, -32, -4, 25, 74, -106, -2, 77, -28, -53, 9, -105, 6, 49, 114, -10, -92, -100, -72, 89, 57, 29, -14, 95, 103, -12, 118, -90, 95, 87, -19, 120, 0, -25, -77, 46, -97, 48, -45, -54, -62, -55, -97, 0, -47, 87, 55, -115, 72, 122, 123, -52, 39, -10, 95, -23, 72, 86, 55, 38, -66, -81, -46, -95, -76, -31, -127, -68, 3, 28, 7, -73, -9, -117, 121, -8, 105, 39, -46, -119, -109, 75, -73, -105, 9, -62, -21, 39, -58, -62, 27, 86, 73, -36, 35, 17, -12, 95, -70, -128, 13, -4, 33, 88, 18, -128, 61, 108, 54, -38, 110, -87, -15, 82, 63, -103, -36, 55, 115, 120, -104, 105, 65, -128, -74, 4, 104, -118, 35, 0, -22, 53, -32, 40, 125, 47, 42, 80, -56, 106, 122, -111, 12, -24, 88, 47, -13, 104, -94, -52, -31, -41, -121, 120, -50, -65, -81, 100, -118, 19, -109, -120, -61, -8, 48, 40, 2, 117, -109, 100, 117, -77, 96, -88, -89, 47, 79, -108, -24, 32, 28, -51, 25, 66, 103, -67};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TOVMITJGGZNSRFLEWUTUQPDUNCEDZYNBQSFGXKQMERWOJDXKUIOZZDLXFNARENSNVOGMWGLTBEJYQCZPATFVKNAWZOFDCRLYABTYYRIIZLYIFEBOGLFFCCA");
    tmp_msg_1.plan_size = 55025U;
    tmp_msg_1.change_time = 0.0151693740453;
    tmp_msg_1.change_sid = 48987U;
    tmp_msg_1.change_sname.assign("EZHQSHSKSQWIIWMAEJDZFLFOBPUNBYGDZDGOHVKVIMNZOUIUDYATH");
    const char tmp_tmp_msg_1_0[] = {-58, -94, 108, -112, -113, -102, 114, 92, 15, 107, -57, -109, -60, 37, -100, -87, -44, 61, 98, -83, -53, 41, 78, -57, 78, -56, 1, -12, -97, -58, -110, 23, 55, 4, 114, 35, -75, 5, 89, 32, 118, -89, -31, -77, -80, 35, 39, 29, -56, -18, -37, 90, 47, -39, -87, -85, -57, 75, -76, -31, 89, 37, 63, -109, -19, 109, -45, 47, 26, -60, -34, 44, 76, 45, -58, 12, -79, -65, -115, 46, -103, 107, 29, 59, 111, 110, 61, 97, -70, 47, -113, 108, -47, 35, -33, -118, -122, -34, 0, 42, 107, -101, 17, -35, -46, 75, 63, -99, 113, 46, 118, 76, 17, -61, 31, -11, -94, 113, -105, 57, 120, -21, -93, 92, 32, -56, -69, 117, 90, 82, -15, 52, 68, -116, 4, 28, -41, 87, 50, 19, 17, -33, 104, -6, -115, 48, -24, -121, 50, -4, 27, -47, -66, 103, -115, -41, -96, -73, 92, -55, 65, 72, -92, 37, 7, -14, -1, 108, 57, -100, -116, 12, -115, 82, -80, 56, 87, 13, -26, -100, -110, -99, -106, 89, 29, -34, 113, 57, -93, 29, -20, 79, 119, -122, 120, 0, 79, 62, -108};
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
    msg.setTimeStamp(0.206572474186);
    msg.setSource(25750U);
    msg.setSourceEntity(59U);
    msg.setDestination(24111U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("HJENBAKPVENUOMMNAAQTFCMWNNRYQCRDDITQSFLVWOWRCCTBEZUSRIJUKCHSAEKLXBTSAQILGIOBJBDYZJKDQYNLAFBECNZOKJWO");
    msg.plan_size = 791U;
    msg.change_time = 0.16383872409;
    msg.change_sid = 18956U;
    msg.change_sname.assign("HWKCMGPYQLBJLJSHKTQKYLUGFCAXXBZUAFSOHJDZUDIZYXNEVAUEUKMNLWJWKXBPQSYJJZGIPMWOLZYGOAICEFGOCDPEHMGTVAUIS");
    const char tmp_msg_0[] = {-108, -57, 2, 7, -77, -86, 62, -45, -56, 90, 70, 61, -76, 71, 105, 20, 92, 36, 126, -101, -119, -49, -122, 51, -87, 22, -18, -77, -18, 47, 19, 41, -49, 60, 106, 111, 56, 97, 80, 9, 13, -117, 61, 93, -68, 108, -75, 33, -24, -108, 0, 76, -26, 78, -7, 71, -17, -58, 108, -74, -54, 85, 20, -54, -111, -102, -45, 37, -110, -89, 78, -15, 87, -27, -41, -122, -108, -112, 106, 33, 53, 74, 8, -112, 102, 57, -63, -108, -90, 60, 125, 123, 57, -37, 31, -15, 65, 8, 119, 34, -31, -16, 57, -18, -75, 87, -63, -98, 41, 106, 105, 79, 53, -15, -96, -35, 124, 61, 43, -89, 70, -85, 17, 90, -71, -74, -35, -80, -16, -46, -51, -122, -41, -58, -2, -12};
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
    msg.setTimeStamp(0.579328384017);
    msg.setSource(40282U);
    msg.setSourceEntity(181U);
    msg.setDestination(35640U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("QJJLOCORQYJVNSLUGTFGGOXZJIDHBAJIFAESTHVVZNPKXRXSBWYXIGMLMURKEQGFDLGPWPYVIIJTEAPBUSTKOLDBIXNCXQVSXOGHDJHCDINBKKBAOZLBYZOXRYULDQTYZWVNTCKGQGZFBSYADAQESHTCFVAUVYHRPYNEODIANHFPPFDJATEEF");
    msg.plan_size = 61366U;
    msg.change_time = 0.47140994725;
    msg.change_sid = 26513U;
    msg.change_sname.assign("IHASPIJJNHXODWRQVGMHTBTOPUGLV");
    const char tmp_msg_0[] = {-28, 6, 107, -89, -6, -80, -33, 29, -82, 110, -16, 31, -114, -49, 35, -4, 15, -115, 109, 24, -102, 75, 81, 26, -14, 68, -62, -62, -87, 4, 80, 118, -63, 47, -100, 64, 103, -12, -76, -46, -19, -7, -20};
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
    msg.setTimeStamp(0.0128723420085);
    msg.setSource(28340U);
    msg.setSourceEntity(107U);
    msg.setDestination(28644U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("WSYQOHLXUXAVQLQWEJCMJFNHLBHMURZKSNFNARSWHYJSKWCIZYHQROPYQGTLOBACYIPUBXETEZJWXWJJGEFCPRUDGQTCXWFUSSLKDIJC");
    msg.plan_size = 48542U;
    msg.change_time = 0.288162818677;
    msg.change_sid = 53385U;
    msg.change_sname.assign("NQTXEOAXEZGJKFXOKHQDPFAKMFNKQQCWVHZJBGIOHCBTFEBNHIVRVDHNTZZRMUKLIS");
    const char tmp_msg_0[] = {108, -40, 52, 65, 73, -9, 121, -57, -115, -74, 73, -22, 77, 54, 77, -61, 57, 16, 36, -24, -114, 19, 121, 4, -36, -59, 87, -32, 75, -125, 82, 77, 124, 56, 48, 62, -56, -113, -25, 38, -6, -110, -89, -62, -52, -10, -28, -87, -5, -60, -114, 100, -100, 70, 11, -19, 111, -116, 11, 95, 18, -78, 13, -42, -85, 96, -35, -91, -125, 25, 108, -42, 124, -64, 6, -73, -32, 81, 30, -34, -43, -51, 55, 88, -83, 101, -128, -24, 65, 24, 52, -80, -125, -17, 30, 110, 13, -70, 117, -97, -105, -128, -71, 111, -36, -123, 110, -50, 79, -108, -22, -109, -107, -35, -47, -87, 116, 117, -34, 50, -70, -114, 33, 93, -86, 2, 1, -13, -49, 86, 63, -112, 68, 78, -121, -74, -121, -36, 27, -24, 3, 4, -17, -15, 23, -95, -101, -19, 9, 67, -112, 45, 86, -85, -13, 29, 7, 44, 33};
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
    msg.setTimeStamp(0.47682315225);
    msg.setSource(8281U);
    msg.setSourceEntity(156U);
    msg.setDestination(18306U);
    msg.setDestinationEntity(46U);
    msg.type = 67U;
    msg.op = 19U;
    msg.request_id = 63131U;
    msg.plan_id.assign("YNWOCUPMEDHUXLPJCRKAHMCLLRZFHZNDHVQUDRQGYZEQOFYEUPHDSJNNBBXARUSICLFLKWHEVWTJRPAFASAIXOQWQEAQEXVUJXDGOIBONOZWUHLNYDBTZYUNBPCORIPDMDGXZUWDCGZYGHSKTFXRWQJAACVDWGMPESSPIXLPGMIVTTJVRMSLYGTBZMFQOBWYRYIKEMAKOTPIKWJTVVXUFAKQNZQMIJCYKGSCNGZXIVLFRHFSLTESKBONFM");
    msg.flags = 29236U;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.869323132458;
    tmp_msg_0.z_units = 32U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VCFFUZMSVRUSMFZERVRMXIDIVXRYRJBYWOKWASDBFAWYYYHKXQQODKZLNHGJUPQQBDQJPAGJUZGXSQBTSGVXWZXHBTNLNWDYMJVEHSDMZECWTNUPANQJIFADEAVBYKVWHUIXCEOGPIHANRQIOCKOHERTDOXKPJNSDDMOYPLAVBGLJGVCPEMZ");

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
    msg.setTimeStamp(0.225777217823);
    msg.setSource(58935U);
    msg.setSourceEntity(15U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(91U);
    msg.type = 2U;
    msg.op = 37U;
    msg.request_id = 65105U;
    msg.plan_id.assign("EFPEMMJYNDDYBJNXRWMHQQLVREBIYYPMXGFODGOTIVEYCIUSMLKFHGTHFUAPVKUXIDTTBPMCPRNIPMWOMANKEFTFGHKPKZGHYRSWPRWCEVZJSNSRZWJUSGBPKWHJHTLQACLFZEFJJRBDWXVUEWQCBDOM");
    msg.flags = 40492U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 38739U;
    tmp_msg_0.lat = 0.682506973607;
    tmp_msg_0.lon = 0.791316593753;
    tmp_msg_0.z = 0.413537188888;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.speed = 0.077153749447;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.custom.assign("QBLIVWQMXTYJQKXRWLMZDSOGILFDPLUAREKGPWQSHRFTEVKCXIQCCZAUYJZNRFNZYVURHRKRTEZHOCUKBMIKOCXJMDPXKZEJMRUEXGCDEZALXPYYYKBQOHVHITWJDLSMFNBJDQPJXHEPUTMNCENBOWFDVVUTVTFHIYJJQDLYUGCAUYIWSBOPAZNNEAOSJBGMPIFPOCBOXTYFGMSCNHQSWTVAASIBBGSKVZWWGAXOPLSTFDVNMGRWNAIGFHEUDR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XJKZPNJMUQDOYUWUTPOVFVBEJCJOQFKCSWLQDURAKXLKFNDQZAWLTRCHCMTAAEQUBVRQXOHSXGXTMPQGZDZTFTCOKBMKFKSRGCYRXHRLVVYZPPRHTDLFITGYZGXOTNFEA");

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
    msg.setTimeStamp(0.267559339239);
    msg.setSource(2939U);
    msg.setSourceEntity(202U);
    msg.setDestination(39105U);
    msg.setDestinationEntity(63U);
    msg.type = 66U;
    msg.op = 71U;
    msg.request_id = 51526U;
    msg.plan_id.assign("XMDIYIQONLHRNOIEQKGWTLUTUOAZKBDLNFMDSHCCGISYRXXGLRPXMVEGEXYCWQWIVGSRBOHWKMSKPBTLJMUKOLZBZQEMMZSGQVDXSEMLXBGCBSRDFLBJFADNYHATWPFGCREPJKDEGYJUGQZACRUYHIOPKNQLUPXDFMJQLYPPATANZYKVCSTCKZWTCYJOOOUSURSOVIVEWTJPPBFIEANIKHFDJXFWAQRTM");
    msg.flags = 10968U;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.720798023688;
    tmp_msg_0.base_lon = 0.94555376119;
    tmp_msg_0.base_time = 0.47923478516;
    const char tmp_tmp_msg_0_0[] = {90, -46, -114, -39, -85, -4, 89, 63, -61, -116, -89, -57, 48, -4, 31, 22, -58, -93, 74, -45, -14, -62, 66, 87, -78, 19, -24, -83, 110, -37, -19, -69, -121, -11, 73, -22, -123, -53, -54, 33, 51, -59, 79, 46, -38, 30, 64, -127, -10, -78, 60, 103, -67, -39, 45, -117, -82, -12, 83, 84, 56, -116, -120, -63, -126, -121, -122, 94, 30, -35, -100, -37, 26, 47, 47, 19, -65, -100, -105, -127, -32, -118, -125, -38, -119, -115, 52, -65, 24, -121, -99, 73, 7, 126, -117, 117, 32, -78, 1, 92, 8, -37, -51, -50, -54, 125, 30, -124, -113, -99, -85, 124, 29, 49, -17, 87, -78, -79, -59, -87, -98, -62, 31, -6, -85, -117, 12, 123, 57, 88, 67, 58, -114, -55, -53, -30, 11, -55, -20, -49, -23, -4, 28, 27, 66, -70, 50, -89, -37, 7, 4, -7, 58, 80, -62, -21, 1, -119, 60, -78, -79, -12, 6, 77, 118, -101, -123, -66, 3, -78, 118, 113, 106, 0, -32, -126, -51, 96, -28, 7, 13, 99, -61, 55, -54, -58, 85, 33, 75, -21, 105, -95, 82, 52, 72, -70, -108, 63, -110, -2, -19, -56, -57, -4, -41, -68, 8, 121, -80, -126, 59, 47, 111, 113, -89, 26, -128, -124, 126, 59, 17, 104, 4, -103, -24, 44, -24, 36, -84, 5, -84, 123, 51, -91};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BDRAIMDLDVCLGQVHFKVHSZSCESQNSKQTRZHMCCWANPYKLRKYTXOVZCXMGGTSMMNJWTIHBKOJGRIWHHRKUTNXBIVUXSRLJXAUFXXUXBMAJYAKBLWXFBLOZFJJPLIPTBPWNYFQHLQCOYIPCUCXAOSOPDRRKQMYLFDSNHDZHTRJFDPNOBBEVYGYHQADZSNWJUGOWUGVAIEMAFEGPUVZYTKKSMCZVMUWJYTNQNWUG");

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
    msg.setTimeStamp(0.583816581255);
    msg.setSource(32898U);
    msg.setSourceEntity(53U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(93U);
    msg.state = 125U;
    msg.plan_id.assign("GBMGJZZEYFGRYCETACEJEIVRABELSZIWTHUXVKNHMMPHKJ");
    msg.plan_eta = 1097369628;
    msg.plan_progress = 0.311006307517;
    msg.man_id.assign("DSLZCKNVFQEGLWBUYHOATNWFTMROUXAMIJZPKQSPACVRZCXHWADUHWWHCYTRRCEIRIPGXVGXWNSTZURNAZFWVXHDRTEGGIEOUJFMBZFIBXBBABPVYSRIZJCLIJEOMNBMLIKDGGDNSDMYSIKLEQGBXDJCSWOYXFOJ");
    msg.man_type = 2799U;
    msg.man_eta = -1690413120;
    msg.last_outcome = 44U;

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
    msg.setTimeStamp(0.110761680624);
    msg.setSource(40082U);
    msg.setSourceEntity(222U);
    msg.setDestination(8285U);
    msg.setDestinationEntity(142U);
    msg.state = 17U;
    msg.plan_id.assign("HPXKWFXERLMRPDUWYUYEYMJLNYKFQVSIVGTEGDRKGOLSUMLKOAQEQDLSRCXVSUWBNXAIWTFQPRHAHOFJZGUBSNGNUYODNAIZKGCAPCCFBXDPBDAPDJFZQQSTOYKFMHBSVLVQOIUJXDMJMESAWMIJTKBNWKZKIHEIPE");
    msg.plan_eta = 1557829727;
    msg.plan_progress = 0.266703703435;
    msg.man_id.assign("MLJSWJNMKBUSYKUIIDRUMZRTGCSGCPQOWJQSEGYOOKGYTXXWUFRBKE");
    msg.man_type = 5170U;
    msg.man_eta = -1468378125;
    msg.last_outcome = 50U;

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
    msg.setTimeStamp(0.381257240769);
    msg.setSource(8238U);
    msg.setSourceEntity(25U);
    msg.setDestination(17393U);
    msg.setDestinationEntity(113U);
    msg.state = 218U;
    msg.plan_id.assign("SZVRROQSXKHQJERCZFHGDZKFLAMQZWJRGTSFODPBYUYUAYMAKVWFWZNVNEGYRDOCVJOBXYNPLUMMXQHNFWJMBCIHIETCSNKWAZRUSUDHQS");
    msg.plan_eta = -1318410180;
    msg.plan_progress = 0.540831728314;
    msg.man_id.assign("EHABRZHXYDNBBVAXACAIALH");
    msg.man_type = 63909U;
    msg.man_eta = 2070747457;
    msg.last_outcome = 24U;

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
    msg.setTimeStamp(0.437490649786);
    msg.setSource(27938U);
    msg.setSourceEntity(119U);
    msg.setDestination(18481U);
    msg.setDestinationEntity(125U);
    msg.name.assign("HBWCBBRGRLROCSBXRDSLYSAXOZLMVTNUDQPIHMIUGVATUIHXCDLGQYXGTCWYKOKYZAPWROVPKXJGCCXNSZNJVRMGEFPDRNUHYPGAQIUXTVNFAEAYJHJZBNEBLKLAOMNDLXSQHTWLJUMZNDFPKQIEJNIERAFPJPGJPQYZUWIKBTHSCGWHXWMOFEVNTBKSIYZOXVOFLMUIECOYDMZMET");
    msg.value.assign("RWSHCSZXHJXPKLJVWROFSFACYIAPRVZTPOLKZEQCQLZKVWBRSJWFPOEHFFD");
    msg.type = 125U;
    msg.access = 224U;

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
    msg.setTimeStamp(0.350358866737);
    msg.setSource(45931U);
    msg.setSourceEntity(181U);
    msg.setDestination(40511U);
    msg.setDestinationEntity(44U);
    msg.name.assign("JBDSIOHGDTVWHRPVEMIYSOFESZOVXAPYPTRNXZQUIJWIRQBIFGHYCCKGQQKNQCECGDUCWAAUUQYOHEPAAFBMQLYAWCFOMJXZPGVFXNKJZQZUEQSJJHDNXLNMIRGMVXZLYLKNKUHCTXEXNOTCPWNJTTBFWLGVGVORPNSKBLZDWFYKABLSKWLYFCPXBMAHDJBYRTVDMZZEVPVEZABHDIEHGUTDXKAUMSUFLIBIOJ");
    msg.value.assign("BCOPYFQEZBFSGEAYHSXWAGSRSAYVLWKXEBTPQYIQDGGEZFMCGYRXRFMZIPHKDVUQTUZORDMVYPJLNMVIWAFPXLICLMGORWBUOAETHRNVOUQHEJCBZHGCXVUNENQKYOBJAAPPWCXDJKJYJXLFWLSDKSZDKEQQT");
    msg.type = 120U;
    msg.access = 104U;

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
    msg.setTimeStamp(0.483734929464);
    msg.setSource(31970U);
    msg.setSourceEntity(123U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(254U);
    msg.name.assign("SEUGFRHEKUHXVIVEQTULGZRCNWSRDIQCUYLCEOSYQPYTN");
    msg.value.assign("INCESZQGAAAVQWVHFTVYUSEPLTWYJRFGUDLXNHJLQWCCOPUWIONQMRZWDOOBMURPENVC");
    msg.type = 15U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.0391145481415);
    msg.setSource(13575U);
    msg.setSourceEntity(96U);
    msg.setDestination(1528U);
    msg.setDestinationEntity(167U);
    msg.cmd = 160U;
    msg.op = 245U;
    msg.plan_id.assign("WVMYJUMNMPHTWRFSBDCLNQOEGEQHZXEAPGOTHVLZOANOAXZENCENIQWLKRAVDBKNUPFWDSCXBCJGAOBUYIFUAWMHHDKSFYZVMFRLJSBSJQIOORAMTGDJIKJA");
    msg.params.assign("SVLMFODFZBGNGXHEDAPDMWYTSRZRHMVLVZHUGMKIOYYTEFLLEGJGFJEDQOCNKPQOSWHPUHOCTJELQDGAKRBTYZUTPNDBXVKNEFLRZUIMGPXTOOXJRQR");

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
    msg.setTimeStamp(0.620428082172);
    msg.setSource(4092U);
    msg.setSourceEntity(143U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(107U);
    msg.cmd = 210U;
    msg.op = 192U;
    msg.plan_id.assign("YIAJNSCBUJJPENZYQNGVHSVEYRVJPTWXOMPENJCFUJPMINDGAWIHWOERCYRNUECBHCOXBODSZOKKATRWWDFZZUHWIUPTRRHFTTHSGOOXQWNKBKSFNWKJZADYTCKMBVCEQLRDOJMWJGSLGXQROQTTLKQEMMBYRPTHAFOKAEBSLLCMMZPDVGYTKAJYPUSQZUULXALSBZLIIXXHCPGULZWYDDRYFK");
    msg.params.assign("MQFLEZDAGUNWRUJJRPEWIRKIHQQRXLACOYIIRJZCDQNVXSGSASMXUFMOFETDLVUCVTVAABYBPSYCBARALGXWKGPYGGHJEXTSZMROUIQWKFOUZBJSYGJWQFNHBPYLAFNADOYOLYKMUQKUOMCWHBPLZCHGWXYMVPEKHEUVXTOVLWUJDETCCLPFWSDFIZZMFMZXDBNETIWCSHTJVPJKLSXKZNQPDAHGBRSFVETNOTDIIBRCIHMHPOJN");

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
    msg.setTimeStamp(0.89120864027);
    msg.setSource(27089U);
    msg.setSourceEntity(63U);
    msg.setDestination(17701U);
    msg.setDestinationEntity(149U);
    msg.cmd = 224U;
    msg.op = 249U;
    msg.plan_id.assign("LQVJXTSCFRABVZNOOAXERYAGIPNTDTJZHJTMELYDDHCCFOBMJXTECMPWLCZNUAIAIMBXMRUBWWDHPRWQVLMDVDQBEUWYZRRZFKXFFQZJVNRHWWNHEMKKTBTONPECPTO");
    msg.params.assign("SZTSJLRWUJHOFBLECXNMLAZTWWCOJJYDZORJXPIFFKGKPN");

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
    msg.setTimeStamp(0.696705720076);
    msg.setSource(34024U);
    msg.setSourceEntity(23U);
    msg.setDestination(49905U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("JEUCYNPCKUUUEZXMTSBMWBJBJBKYONTLATIUKSCWPAFGMFOEHDKKTHALREXNTLYHZJFORHOIGZIBGWUWPGTWOIVIGQBNFTZNSEGVXSORDZHREVIBXPLSRCZVKCPWZNGHEQUCJLQVDAJVLAFDDWQJLTHXWNZXBMYRXBOWNBCILAQDVMQPQYLAEEIYDGKIPMTFXMQC");
    msg.op = 178U;
    msg.lat = 0.520682497814;
    msg.lon = 0.0242430099951;
    msg.height = 0.338524072918;
    msg.x = 0.46211633334;
    msg.y = 0.616121878233;
    msg.z = 0.870884751303;
    msg.phi = 0.167709405507;
    msg.theta = 0.443569860976;
    msg.psi = 0.20847451183;
    msg.vx = 0.166625661819;
    msg.vy = 0.254679195165;
    msg.vz = 0.218946072869;
    msg.p = 0.474230975915;
    msg.q = 0.531586595502;
    msg.r = 0.648416494928;
    msg.svx = 0.769113075762;
    msg.svy = 0.877500485737;
    msg.svz = 0.194386594126;

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
    msg.setTimeStamp(0.0264363376489);
    msg.setSource(30358U);
    msg.setSourceEntity(4U);
    msg.setDestination(41858U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("OCDQSAKCWPYBVPHZDOGLWPCDYHJHVESXITFZBJIIIVUDTCTYWSQQPUZJGQMYBNXJCMGALSPHIYPARQIEOXVFWNLLVPRCLFEIEZEOTYALINMSKOMGRKZQLXSUNUGMNPXTVISCOENQMKDIJEJKFGUZD");
    msg.op = 40U;
    msg.lat = 0.0944113138543;
    msg.lon = 0.310018633751;
    msg.height = 0.513667239006;
    msg.x = 0.770183575272;
    msg.y = 0.593015702321;
    msg.z = 0.959599214749;
    msg.phi = 0.345072131332;
    msg.theta = 0.952837250199;
    msg.psi = 0.382120489063;
    msg.vx = 0.263620215878;
    msg.vy = 0.0473643797127;
    msg.vz = 0.832300956136;
    msg.p = 0.765416983455;
    msg.q = 0.67187238079;
    msg.r = 0.174337861219;
    msg.svx = 0.479032626358;
    msg.svy = 0.206385216161;
    msg.svz = 0.547271029523;

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
    msg.setTimeStamp(0.558518366401);
    msg.setSource(6356U);
    msg.setSourceEntity(39U);
    msg.setDestination(52589U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("BWDSRIZGDTMWXOQUWRQEIJSCWAXYVBPRKNCEBKTSVPFAMNNZBALRHDDEOHIRBRMMSEFMRSGNYFALZWVLMCCIIYUUVVLFEIJQRXFBPJPHXMCAUTDXKPZ");
    msg.op = 106U;
    msg.lat = 0.326621460353;
    msg.lon = 0.843876260375;
    msg.height = 0.980769785658;
    msg.x = 0.678861130779;
    msg.y = 0.15253524343;
    msg.z = 0.564784024185;
    msg.phi = 0.609842181078;
    msg.theta = 0.794843537986;
    msg.psi = 0.097247282875;
    msg.vx = 0.597887331057;
    msg.vy = 0.573641030707;
    msg.vz = 0.504374582371;
    msg.p = 0.0860288401325;
    msg.q = 0.873426227033;
    msg.r = 0.293599937992;
    msg.svx = 0.880956134733;
    msg.svy = 0.342611193211;
    msg.svz = 0.903578042086;

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
    msg.setTimeStamp(0.754167611147);
    msg.setSource(47460U);
    msg.setSourceEntity(185U);
    msg.setDestination(12014U);
    msg.setDestinationEntity(97U);
    msg.plan_id.assign("EMHJDSREZWZQRBQPKFDJHRKFJPCXHCLTLPUZNVPYPKNOYIXAHYUFWEJNNIOWFTVMTQQXFGCDYLDALAXDKGQKTHSPSTXLBRVJHNTOAWZWRPCCFDSTZZNDKGQKSGLTA");
    msg.type = 235U;
    msg.properties = 248U;
    msg.durations.assign("IHGZMHFFGLSLPWNOBDDVUZPDKZTISHMAWAXVPBIUELETRROHYKLTDRFFLOYGAJMOWEXTOBYTARPWKZJRGFLPIQFEKKQCMUFQKCJOUQSOCGBCUBEQBJUCJSWCLOWAMYNRNNYEIB");
    msg.distances.assign("UXHDQLXNTIJIDUVWICJRWTFUWPJEZHTWDEYRFLGNYHDBXXCBCDAPXOEVZADKFINKFBHDEGUP");
    msg.actions.assign("IJEARBJKDTNLZSMPVIXFKMUAUPERTQLHCKPDQRUVKMTDATBCWSZNRYNFKTWXZYYAXKOCGKHOLZOEWGWXOTBTLUWVUZIGNQOLCNGQXIJLJPRUASJIFKUSSXQPQPGBOIGADMAGBZTRUFFUKOESIPLBCOIDXIVBDDCRQMQYMWHVFWEXMZXSHQSYVLZMABR");
    msg.fuel.assign("STPDEDSYCSXQVJAELKXOPFWDCOLRCWBZMGFJRTYMXVOQUYPEVEWNTIZRJADKICTPYJQGYBUEZJIUIBEFAUIZCXQNRDVMWNRUZFNUQPXRMQGEPGSNQTFKZJOZFDAHVHFCQFGMXLLJIVSVWKIKZSHKHEOUXFTJKWLPBBOXANEKRLYHONHMGYDAMYBWTLYXNLWOHVKALHIYTMZBBGCBFUOCPNGVPUCBHISQSD");

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
    msg.setTimeStamp(0.554826011298);
    msg.setSource(19496U);
    msg.setSourceEntity(100U);
    msg.setDestination(30662U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("QXEABNDAVYNUFHRKVUQXYSNGWJWVUPWJFZIYFHLKSZJNOWALJXBYLTBJBXDDTGOMAFCPDRGPCYFZWSOYOEMENEGLVIGPRTTNRQUYUSGRVWCBGOABDRCQNVKLTOJIEHXSDSYCMIJQGMENLIKHZTKGWPFZLFQMZHJWKXNUBOIWLLUETOCRKZBICFMLXKSSQHUTHERFZNDARQXQXAHZPI");
    msg.type = 135U;
    msg.properties = 28U;
    msg.durations.assign("XNQHDANCQITQJDSUYVOBWTETRZWXWYIJILGTLZPTWQROOHNGSGGJEZCRPJDBSKLCJDMFRUDTCYEA");
    msg.distances.assign("RNAZZTGEPXWSBJWNBNPTQXSFBMGRPVLUOFBXSHDTOVUTBVXIQNMEKNWSXZWITCERHQDBNJPTDLBWMOYNYYMKIGNPQRMCLBQESCQLKEYIVGKDJWSLJPD");
    msg.actions.assign("NOCWWOAGCSKDSBQYZGVYCKZZTKXKEMPQHVNRDVPHFWUJQREMCLZIKOFYQFCFDIEZPWXDXMOVDSKRUESYNNCBJPNZFMRFLYODDLLPJIGQKFAQNWTFYCNPSVCIRFR");
    msg.fuel.assign("UCFEOVLVPBHDIMYAIIBGAUZWNHTSPEOBLLKNBLQXXXQYAGUMSFCIURHWQPDZNHMTKWZKZOIKYCDESXTWEHOCTSVSNWHFTUQVGQXTDJDNISQVLJLQFDBRYTWCFNTARPWXKKXCVNTADBEAR");

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
    msg.setTimeStamp(0.867499359926);
    msg.setSource(45397U);
    msg.setSourceEntity(158U);
    msg.setDestination(42071U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("TZYQZCSCFBVJDPIIOQNCCBNMUTNAPOASKUFTRWPWRIGKBFQZADGKBVHEZDROXJMTJWEWAXZOGAJWSEHJTZNWVKILKGYO");
    msg.type = 64U;
    msg.properties = 56U;
    msg.durations.assign("DEFGEAFKKP");
    msg.distances.assign("YWESNSPYMSFAHWQXEMXAZKKYDOCLOUROVFDRTKOHUZDFZIKBGJVSCMRGDWWRVGKARGVINSCKBIPQEIFMVMPIJQZIBQNHGCYEDPBCZYMSTRBKPABOIFVTAFEEMQSAEAUZL");
    msg.actions.assign("OIWIANYWFGGXYUTEWTYQHGTVFGTESCSJPFOQSCKXMKZURQPPYSHVJZDENTHD");
    msg.fuel.assign("HNSCVOAWRJSIXZSIMYLADIKSVCOXBLRAURNZTNTOEXHYJEXXNYGFYTVQPCUWDOZCLIJSDVDYCQGQOBGXKTFU");

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
    msg.setTimeStamp(0.687908016028);
    msg.setSource(12863U);
    msg.setSourceEntity(154U);
    msg.setDestination(54075U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.794352942868;
    msg.lon = 0.0256434665871;
    msg.depth = 0.418410328164;
    msg.roll = 0.481183983318;
    msg.pitch = 0.343976968707;
    msg.yaw = 0.197726315988;
    msg.rcp_time = 0.275482040473;
    msg.sid.assign("HLUCGIBULDHUPXMFHXQCHTXOYGYRQJVQUBHOUNNXRGWXHGSZRKSNEPDYIBSDKIZMVOPBSDNTOLFQFXVTABWROBBPRMIYCUSZPPLMVPFTEESKJIWQQCBOKJAECYHNEPDVUGVFVAGXUMRNDJCQYQANWZX");
    msg.s_type = 137U;

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
    msg.setTimeStamp(0.633185732679);
    msg.setSource(46674U);
    msg.setSourceEntity(5U);
    msg.setDestination(34326U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.145453598941;
    msg.lon = 0.0516929890635;
    msg.depth = 0.988782572377;
    msg.roll = 0.98183160267;
    msg.pitch = 0.939597868749;
    msg.yaw = 0.131580048875;
    msg.rcp_time = 0.736144612176;
    msg.sid.assign("BJMYOZSZGCIKBIZROEGDWJAEOAMJEJPGTPKBDGNTUFVPQUXXMSKCKQNTRYEFZNN");
    msg.s_type = 238U;

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
    msg.setTimeStamp(0.610467325767);
    msg.setSource(61670U);
    msg.setSourceEntity(41U);
    msg.setDestination(62865U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.941995043588;
    msg.lon = 0.619349178507;
    msg.depth = 0.654665247872;
    msg.roll = 0.906491687698;
    msg.pitch = 0.364924577833;
    msg.yaw = 0.553562944798;
    msg.rcp_time = 0.370133441404;
    msg.sid.assign("AQKDFJHWSMVQBNCXFSPMTBNWVNSMPHLRPFZURWIQSWORLDPCDCHOUTYOCECYSNEVBDLMRHSVOFQOBWTWQASVTXGZLXVOIFYHABJSMGEKWQZUPVUBZQMNHNJGRG");
    msg.s_type = 128U;

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
    msg.setTimeStamp(0.82740995074);
    msg.setSource(34528U);
    msg.setSourceEntity(149U);
    msg.setDestination(16880U);
    msg.setDestinationEntity(92U);
    msg.id.assign("PXGBTABMPFVGZYJGFCHVDXMTBNKXTOLZCSDXNPZPMDAQIEZRFQZWIITSRUHYWEOFNLHSHMHHOCOWVHMPLL");
    msg.sensor_class.assign("YNHRYKXMUQLZQMSDDURJPTWWZVCMFKXVGTDQLIVWFRGSVIBSHLBUQFXPJQONWPEFAOIJXRRVYYJOCQJT");
    msg.lat = 0.970956911784;
    msg.lon = 0.741329480527;
    msg.alt = 0.252247657125;
    msg.heading = 0.388289601084;
    msg.data.assign("JLHSTWPFWIVDDMDEGMUCTJGQRKHOAJEDFNZYLDGMFMQTAJBOIFHWSWZQIXXKWYGHYYSLIZKROWXHMKRIBPCFIPBUZHSDBVPDOPHZFRPRKIUXMTTPLMDENAIOCSWOGOOBYKKYFHBJFCVFKCANLXQZKNPBTT");

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
    msg.setTimeStamp(0.0144894755459);
    msg.setSource(9070U);
    msg.setSourceEntity(37U);
    msg.setDestination(62795U);
    msg.setDestinationEntity(208U);
    msg.id.assign("DJIKMUKILTLGUZFGNGSLBITUVAOCPRUEHEHKBMWHXWMJAIGXNWSANVSFOTVKRHFAYBJFWLUYSSLIFXBOHOVCACCQKCEUGQPXIJZQORG");
    msg.sensor_class.assign("OFPUXQVQRCQSOTGANGGGMZYXDJMNOQHJSVQVFCIOHOZPSYHFJFTAAEFAMKELFZSSLVPGPNABLHNKHDKYSEWLOLNXXBNWPWYISVTJULACTMWBKSGMAUJIZRKCRGHEJRDUGTBYUNHBZLGPTIQIKZYMXIMKCUXREDWCOYAIBBLRXLPYJBQVDUFDDWDCLQMSGNRJIOD");
    msg.lat = 0.321962384699;
    msg.lon = 0.703713435772;
    msg.alt = 0.402549756416;
    msg.heading = 0.207942359818;
    msg.data.assign("YLYNPSOKAXORNNCOLXGVQENJRAFBDVAMKQUPANXHXUWYLTNTSVOBIFEBBKWVRVHHDGNYSESAUHBMPOINHGEWCJLJPTFDEXRFDMQLJHBSFYZVKCJDJMDZIARRQMWHDDGUKLKZOOKZSUZAFYCHEUMQVXPRGQEFICGGZXERHSQDWKIEWSINMOTTMWCJIBGFLPFDQZBBCRLVLKPQPGJACYFSXJUYTMINPTIIAZU");

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
    msg.setTimeStamp(0.226519172747);
    msg.setSource(7543U);
    msg.setSourceEntity(158U);
    msg.setDestination(11148U);
    msg.setDestinationEntity(186U);
    msg.id.assign("PPNQQDKEDFIOTCUDWFNLMBXLARNYBLOTYIEQWMVEPLUVIAAJJYRNSDEKGWOBRSYZBHSMRFHKQJQHDULBHJQPXRSXKPTLZEUFTPMOTCSMZGNVCKYENUFWQBOQCJDAUJKBCWXDHXGKXGFCHXVWHWVCAEEGYGLVHZVAEAIPOVMSZJL");
    msg.sensor_class.assign("HQJEISUXHSPVVCTQTTZWZSFLVPXUUZJVIMYXLPKTIZHBQLEVRAGTDAIFLJDANCISEVCLIRGNOFIOCPBMKVRSPBGXLXJCJEWQPKTEXOFIJPMWHQLRKZGZCJYYBMQMWUABUNOGWVCBXH");
    msg.lat = 0.84647932369;
    msg.lon = 0.892785149108;
    msg.alt = 0.814410955677;
    msg.heading = 0.775543255168;
    msg.data.assign("HQIUAVMFWNFTFPXDKDJOLNJMYVFREFNCAULJVPXNHGNJNVRRWQIVPQBSCTXQXOMJBLLHIBYURKAPRDOKKJFHKWSXHSZEPIHESAMPGIFCLHOMJVPUTXAZSXZHOGRQEYQASEWTYWDYGCEZPYDBKMGBLHKMIGVZUGABZTCWTYAKOELDMCZEHALORTKPSUFCGWWDUIXPQJDSMSSUTLBNZDGCYFERVWUCOCIFNGAVBIJD");

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
    msg.setTimeStamp(0.576004606793);
    msg.setSource(31481U);
    msg.setSourceEntity(240U);
    msg.setDestination(8543U);
    msg.setDestinationEntity(1U);
    msg.id.assign("EUYNVUFFTGKEWSKLZQMBBVHGHPWYTSWTPQLKJXWVGBDCQWQDGBTBSZGUIRFHLDIRDTBMJLPBEDGZINSWZPY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RRUFHOTLNGQITWLRMUKXCZJIAFWRDGEYYMNPQXELHLVQPSTFEKUOVLKYNONQYGCWBABCJUANTKIKLIRJPRXFXWJKOBGXIPWR");
    tmp_msg_0.feature_type = 99U;
    tmp_msg_0.rgb_red = 145U;
    tmp_msg_0.rgb_green = 21U;
    tmp_msg_0.rgb_blue = 204U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.95674666596;
    tmp_tmp_msg_0_0.lon = 0.899839743516;
    tmp_tmp_msg_0_0.alt = 0.461155860171;
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
    msg.setTimeStamp(0.14409507886);
    msg.setSource(13074U);
    msg.setSourceEntity(200U);
    msg.setDestination(48005U);
    msg.setDestinationEntity(226U);
    msg.id.assign("EJBZTTYPWCXGZTNTWMWDEZYVKEAZUUOM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DBSAPFZIBSFLVPMLSRIEGJTTEBXUTTJQXOOWBDXQNTOYNLTRGCCWTHFYICGWPBUUSGUFKBEAWIPDJVBKKOIWPFLVNRNVJXKIJEDZMDATMMKKSBBFFYNWVYKAVRMZRHPLJCCRNNIPVQYULETADJNYIQQSBMGMJLMOZXNYSFPDQH");
    tmp_msg_0.feature_type = 81U;
    tmp_msg_0.rgb_red = 208U;
    tmp_msg_0.rgb_green = 246U;
    tmp_msg_0.rgb_blue = 89U;
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
    msg.setTimeStamp(0.781263183095);
    msg.setSource(6872U);
    msg.setSourceEntity(8U);
    msg.setDestination(19404U);
    msg.setDestinationEntity(32U);
    msg.id.assign("MCOUKAOIATEYSRKEAPUHSHBYFUOLHURBLXKXWLZPYENH");

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
    msg.setTimeStamp(0.925098688951);
    msg.setSource(48372U);
    msg.setSourceEntity(192U);
    msg.setDestination(53466U);
    msg.setDestinationEntity(124U);
    msg.id.assign("KSGKFDCONXUWUDXIVDHBCCORAWPTRNMDYMATALVHSETGGMUCYCJNODZFPAEQZNMJCNNTYVNLWHGSBOMVGQHMVSKAZYXYWCIWWTJWCKXIVKHKPYFGJRTOFBYFKAUEFVZUBOPERZHZPWRAQXRIJUVPTULNCQROHKSFBZUSSMSDOTDCQ");
    msg.feature_type = 125U;
    msg.rgb_red = 35U;
    msg.rgb_green = 160U;
    msg.rgb_blue = 232U;

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
    msg.setTimeStamp(0.66260852309);
    msg.setSource(52957U);
    msg.setSourceEntity(109U);
    msg.setDestination(38117U);
    msg.setDestinationEntity(141U);
    msg.id.assign("YGUCPVYCMOHFPIMGVDJQKLERTUGZUSFSHZKQYAFEEOILAVVGZMVNXKFRIUMJXNUOKNAYWWJZJFGLXHUYIHZUXXBANENDTEEWNXDBPGGVARZJFSBHTRHZLEKOQLCMCAZLMPSCTYCCDBYWIQARJWWDCDLHPJWIXOKTQMRDSNKHWIXNCBKDOQIQEVISFBTHFXRERUBWJSYKVO");
    msg.feature_type = 70U;
    msg.rgb_red = 17U;
    msg.rgb_green = 190U;
    msg.rgb_blue = 159U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.889212101652;
    tmp_msg_0.lon = 0.66319798303;
    tmp_msg_0.alt = 0.547125668338;
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
    msg.setTimeStamp(0.879648055248);
    msg.setSource(56331U);
    msg.setSourceEntity(24U);
    msg.setDestination(23648U);
    msg.setDestinationEntity(144U);
    msg.id.assign("HVKTDQWUHHQDRPGXDWOXSLZUNMCVVBCPQYWMOERAAPIGGLZJFJQBGKQAPYFBSBWOAMYXMPSAMOWRYZWMBGNGSOIVVTIHBNYFTCLRITVMDWUCJMNXUETUPWOETWNHASXDTJLLBXQILCTUKXEFMKOKLNQZPQBDOYSNLCLYNJVFYIUNFUQMUGZDRZFREEERQHDFEHPZWZCAYEDJKPOATIKAXFKYSVGISUCHZBJKNJIAPCVXDISKGJRHXHZO");
    msg.feature_type = 134U;
    msg.rgb_red = 3U;
    msg.rgb_green = 243U;
    msg.rgb_blue = 238U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.397979617611;
    tmp_msg_0.lon = 0.704635180647;
    tmp_msg_0.alt = 0.443598052692;
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
    msg.setTimeStamp(0.461449408313);
    msg.setSource(49612U);
    msg.setSourceEntity(183U);
    msg.setDestination(50292U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.735856471488;
    msg.lon = 0.531502907205;
    msg.alt = 0.625946004482;

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
    msg.setTimeStamp(0.547661410525);
    msg.setSource(19321U);
    msg.setSourceEntity(119U);
    msg.setDestination(4118U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.308635632293;
    msg.lon = 0.589154722123;
    msg.alt = 0.424584242844;

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
    msg.setTimeStamp(0.156046465359);
    msg.setSource(42630U);
    msg.setSourceEntity(226U);
    msg.setDestination(57206U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.49675500753;
    msg.lon = 0.527709755209;
    msg.alt = 0.180058561777;

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
    msg.setTimeStamp(0.486631975425);
    msg.setSource(12800U);
    msg.setSourceEntity(232U);
    msg.setDestination(9125U);
    msg.setDestinationEntity(50U);
    msg.type = 159U;
    msg.id.assign("JRCQXNYFIQXZVQSNIFZMBYKQVDBKZZKPVCGDOJJMHLRLQMEOJQYAAAJIVOHTCOBVLGNEUVPHNFSLTRWTMRUZTQSEITRZKQJAJDPAXZEUSCGUPJXEXIVOPZCYYOQPLDKLBNEIGCGZXBMNGJOFNBCKDTCDDIXXNFRUTFEFHVHDGGMMTFFWCFWSHQMAKKWUMWALXOZIWYSLIVPUBRHLIPKURBGDHUBYWWHTOWRTYYKGPAMCVSPWE");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.725382991181;
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
    msg.setTimeStamp(0.728503347979);
    msg.setSource(65370U);
    msg.setSourceEntity(251U);
    msg.setDestination(37641U);
    msg.setDestinationEntity(203U);
    msg.type = 131U;
    msg.id.assign("KEDIDYSXFOAZOUSINVNLQMWKTZRUETIUGBPALVGSAPCBOUOJZQIDPFHVJTSVEBQTVJJUBBXPUWXDRCRQHBQPVCWDYFEEDTCTZNAYNYDMROHCFGHUJGKSGZKTTSWTAJLGQIBWZMYKMLMNPNIDGFFRAJQJXKLBSAZSHXVWIUNGTOPYFNMXSUKAMGLZXXORNHRPKWFCZAYJOWNRREIP");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 104U;
    tmp_msg_0.angle = 0.736789411674;
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
    msg.setTimeStamp(0.408054323298);
    msg.setSource(24928U);
    msg.setSourceEntity(56U);
    msg.setDestination(42644U);
    msg.setDestinationEntity(247U);
    msg.type = 136U;
    msg.id.assign("BDUTCGGBMOLVBJGFVVDHBUPQALLAEFTBYRPMIXLGYTEHCENNZJLFXSOFDUMGYWJQZNNFCAWHVNSDYZRGKTDQLGGXXWQIKYWGDAONUSCZBJOMPWMADMLLPUCWXUJRTKUNIRC");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 223U;
    tmp_msg_0.value = 0.965335758385;
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
    msg.setTimeStamp(0.921869098066);
    msg.setSource(51883U);
    msg.setSourceEntity(213U);
    msg.setDestination(39852U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("PCDZBOKIPZSXXGEWXRADHTCDLNNCBVPUUEBJLIOYOQKFMLLZKIIJLRQDHEYFZTMSCVJNSJHDCKSKLTEXFNIHHFKGNFOGQMDIVOEZSYQBRPAMWSLOAPDIGVUHMEKMPTWVKTYQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NKDZMOSEQODTSWNBHFZLDIIERKDSWKUOZXINVJBSPEOARPGN");
    tmp_msg_0.sys_type = 215U;
    tmp_msg_0.owner = 18974U;
    tmp_msg_0.lat = 0.934564487334;
    tmp_msg_0.lon = 0.759374686473;
    tmp_msg_0.height = 0.953215304635;
    tmp_msg_0.services.assign("HJWGQGRUJZEFIRKDLTBIMPPDMJSIUYQFNQMOCUWWJRGAAGBGJDNOLOLJXOOIHAVOLUWSTUISCZQNVZEZJVDCPDRGAWSUEVXLKBFMAXYKGNVPOQMBVDAMVWHDTZNMRKCBLSDEBCOYTEDTRMEPBCKPFFTZSSCJEQCRUJRIHTNUPKHCBGYNHJYKNRXTNKFPIXWSOHVY");
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
    msg.setTimeStamp(0.668264273907);
    msg.setSource(4045U);
    msg.setSourceEntity(205U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(201U);
    msg.localname.assign("FUZTSIWVKIXPDENRURIMIIYGAUPOMCHDKSQYEWRZTJKMGWTIHFSOFQKGKDPHBSFBICNETGQMVUAUQRTYLCOFAFDUUJLYGJBKNZJJZEEACQNCJTFFYPVEXGCHKSYAKRPBOCJUDZLNXLYBYATBFNRATLMGNKDEDGWMDPGVQQXVLXAEXMPFVLBCXRNWECZVXTMVOBJOHMWTDWSQZIMVWSDJHYRZNUKOPQQUPWAJHXCPNHVGHSRBOSE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UGZEIJHWDLVSBVQCXVHDLVQNZJRPQYLEQTQRHHOMTAICFFPWCLTJENJDUWLTFPUIANGQNOMZXIBUKYKGSNBQNWMCSIQKVFECGJHLBFEHMBOIRVXSITJKSFAQDOGDHPIRVGTAUUEWDNCMEOSFXXDXIBCTAURSDRCBMPCYNKOOMWAYWEBBWXAHZROFKNDFZMPJVOSGRBX");
    tmp_msg_0.sys_type = 128U;
    tmp_msg_0.owner = 51106U;
    tmp_msg_0.lat = 0.848041089607;
    tmp_msg_0.lon = 0.744592040472;
    tmp_msg_0.height = 0.379561463559;
    tmp_msg_0.services.assign("RWSYWKGRGVSVIEDVEOHSTNRJBEJXOCAJGZPVOHAXDEWBLTUCZLWSGZEAKRNYSCBIHNKPMRYRGJYIKJONBGFTVUPFDMJMHUMBQZGLEKQTFAJMODHBKGXEJTFALRHYWDSMTOZSHPFATPUKAUOQLQVPOPVHRSNSFIIZLFZXEHDBCNMCPQEANYJZQQEAPCRSUBKPZUDCABNNXLWTLGYZNWJICMVIYBFQUWTWGKQCR");
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
    msg.setTimeStamp(0.863928069708);
    msg.setSource(32514U);
    msg.setSourceEntity(184U);
    msg.setDestination(22867U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("BNLUMSVVTEHQPWPJNFYKFAMPPCSYKDAEBPFNPVEOLAWCSVAIZACOMFEFCIWPGPHKSXQIHDWDLSCBAUOBKJGBHFRVYERRDGTNLXRRRRUIYHMEFCODAGBGIMOQHLTTWAYKKZTCYXTYMTVEHFBJKXIQDHOAZQYAWUCIUJXJKNDGLCNOIJYSIXGMQZXTJVUZMCQGFTJXHZUXNQOOVLXWSVUMSBZULMGGRPENSEEDJZNNIHWS");

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
    msg.setTimeStamp(0.693968134622);
    msg.setSource(13586U);
    msg.setSourceEntity(204U);
    msg.setDestination(1061U);
    msg.setDestinationEntity(137U);
    msg.timeline.assign("NXOQFMOYRDPQJGVVFLHLBDHOYHWZARPWXEINYCYZGYEBHXFJCBXREKLUVDKUBTVUZXNFLRNCFQCFEMTXAPAEDKLVNHESCWVGJZFQJJLFNCSKSWKBTXFSVDUJGSOPGRVMCPXKYKQJIKDGJCRXZHUJAITSOSYNTQWMQUOBZKBNMRWTMGNXZHRIZHRTAMAGNLGPPIYGCBOECSPIPUAHIEMOLQYZBWDSEDKEFDIWLTMSOTMIOUAUAPILVTWUYQWR");
    msg.predicate.assign("XUVVYZUSIRFFGKJTKSJVUPFAWAZUFRMWZLMJTGBGHHIEKSCCGCXALPTTRQADNJXADTXJQFAPVCSSSOGOBU");
    msg.attributes.assign("XEAXHHMSRJSGTPRGCJRDCZSBWVHSKORDAIMTPRBTCHXSGXQDNVUTMXOPCBZBCAYENIQSDANKNARNPFWPMGIQMJVYELOYWEBMFTZXQIJV");

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
    msg.setTimeStamp(0.206879139499);
    msg.setSource(20268U);
    msg.setSourceEntity(145U);
    msg.setDestination(26490U);
    msg.setDestinationEntity(110U);
    msg.timeline.assign("TETYRGKWANFGDZXPOMAVKDNTIFXHPVTQARQQRWNZJYWLUKJWRJSEDZZIOEBJDUIBZXENHXGH");
    msg.predicate.assign("FNEOOKHZINHFYZVZENGYUJSTDXTDYLWBFDTJUPPYENIYHFZU");
    msg.attributes.assign("LDKCDPTHYIUBRHUNMJ");

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
    msg.setTimeStamp(0.0962157773433);
    msg.setSource(10185U);
    msg.setSourceEntity(226U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(135U);
    msg.timeline.assign("ZQYTBBZEHLDPTJSQCFDTXHHWXLMGYTCPUAPYNWORXXIUIMDHJRSMKVZTELKGDVBDYQRKUVQOUZNZFFECIOAUOLWOYBGRMFJJSQANMYKGCRLLAI");
    msg.predicate.assign("IXAYYEHYYWLRHLAVONVPAWBMURIMMFWBOCGTPEWYSCBLUFRYDSZFCJKJHDORBPQZFESZXNODHPUXXVNEPHTIQUQBKTKUYJBVGVVKSNCSZIOMHDQNWTCQCFZSDAHJYAIUBTMOAQAEZJEVLXZBBKNMHGERZJRPIMXUKTFSGUHYGTNNSOMRJMFBG");
    msg.attributes.assign("VRAGZCVDWEOOOXDSOCILPRAHFGKPVCBA");

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
    msg.setTimeStamp(0.321138478741);
    msg.setSource(4812U);
    msg.setSourceEntity(90U);
    msg.setDestination(51807U);
    msg.setDestinationEntity(180U);
    msg.command = 41U;
    msg.goal_id.assign("QUJUDYZZGCJWXQWBUIFXMSOHWZIJIWZYNFTTSHIBBQJQHCAFFUDDHERFLCDSENKZMGNOKAEPYATUESYLAQSAOPOWAHWFIHCCMPGQLJGYRCPERSUBLBVYVGDPHSBHSUKXHBMKPTLKDMKIQPVZCXGOKGUVMDVLILBXVFQFPNXATNXVIEWBXB");
    msg.goal_xml.assign("DPAPCGVCJVWLLPALIZRWMJKYGFJYEPWTKGDXQRBYCTLKLAAEEOGVTUMJBQOHIPQQGMCVDY");

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
    msg.setTimeStamp(0.91100810177);
    msg.setSource(12277U);
    msg.setSourceEntity(210U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(155U);
    msg.command = 67U;
    msg.goal_id.assign("MUXBUHDCITSJAXLUODWBLWSDXBMCJZGKIMFZVZJLTTPBEPVMGHWWYQVZCYHRGLERMOXSORCNOJYEGDCTTGHAYAQNPNUGWVLSNSSFCIXFTJMRKJEZTXWKQTERMXZSIRXQCRHUNBQYMRSCABXQFWZOVJWLPHAVMASKGDZWQDL");
    msg.goal_xml.assign("VUHIZNSSVFWQWKZS");

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
    msg.setTimeStamp(0.119375819313);
    msg.setSource(7810U);
    msg.setSourceEntity(214U);
    msg.setDestination(52972U);
    msg.setDestinationEntity(60U);
    msg.command = 161U;
    msg.goal_id.assign("KRXBWFWJQEJXXSVDCHJRXYIQVIBPGLKDAOZLWMPMXFFNUDQGSUGRUSNJKTORTVZOVHZJBSYWAQJBJVLNHICAMNASAUWBPLTSBKTWMEQXGQTUSXBLYMIXWUPRJECLNIFKEFAYVZQVNMMG");
    msg.goal_xml.assign("WCWUOXMNGEEISLXITOODRYRPLJXZVVJDLDCCQKUP");

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
    msg.setTimeStamp(0.866523936286);
    msg.setSource(23343U);
    msg.setSourceEntity(129U);
    msg.setDestination(7674U);
    msg.setDestinationEntity(203U);
    msg.op = 24U;
    msg.goal_id.assign("QLQMHESUMLQIFZYSJGNUYUCRSTGWMJJNGNSODBLKGWKUHWEGZQKDDCXSPOJRNHQSJLTAPSHBFAKHDBYCVEKIQLTBMKEATPZCMGLUEHAVCPVJJINAIOBWQPOXBZHCISO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XCZPURTEORCXYMWZLTVLEEBPUTXQOUAVBFYGJKSSSFVBFPYZFCIWHUOADKLVQMNSRGOABZLKMNJYDUANMDBXXZNRZREHFFKXGOKMQUYODTRIWPBSLXYZDPCKGCJAXJTAMZKGGWUTNEMVQRRGIDHVHHZOIOZDPQMADFNIBSYJKMUIAWVUHLSJQHKFNHEEVINJHSTYDIGFHGTPVCKXRC");
    tmp_msg_0.predicate.assign("RVOACTAPQBKJBIQSCPOPVXQDOTHKRUXQBWHCDTLRCNNBCZOISKYVMBCYSWZMKPDIXJMYNBCRRKBDNGGXDTYRXURSMHKOIIITCJLETBTLWFUQXHTFFPEWXUSXYUHPZBFAJRXJVWWEEIKSEZFNMNLJACZAKDFAZIQFZDZBJJGVYVKGYUWLTQJGGVGALQDVPAPESENRMFOVLNPWNXCYVWSGYSKZZHHEQELGQSUNP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BXULCXDKLHVEPMYBJNZDOSTZFSDRPPPISXTHZWKEMRRVQMFBBLMVJWEEACKHWUKLSDVHCFJEQQIYSDYQMUDEFXINWTRYOVHTLMUBDZLWXLGQPUYTMGNSNYZQOEXOKLTHEEMDA");
    tmp_tmp_msg_0_0.attr_type = 141U;
    tmp_tmp_msg_0_0.min.assign("AGWMNZJSWDKGFTNHFUCLHOMTLXYQPNQCDIFQRYBHWEWYLSWLEMEOIWXUIPYUGZXGRDNTCFXK");
    tmp_tmp_msg_0_0.max.assign("TLVONRZVSCPATBCFEWNXWBZYKLBEIKXGNSFMQICGUSWWSIGUOYYIOOBKQXONBYFEVQJTYXLQFPCUUGLAMDZL");
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
    msg.setTimeStamp(0.00697824406108);
    msg.setSource(48069U);
    msg.setSourceEntity(206U);
    msg.setDestination(29243U);
    msg.setDestinationEntity(15U);
    msg.op = 30U;
    msg.goal_id.assign("GVMOCNASVFGYNGDDBVFL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NHCCPYAZKRFJIJTBJTKFNDDCSZDEYOGWKYHPVWMTVICOMMVUWKGSKOYCZNWNIFNQDYFJUGLBUEBXVAYDIUXGPJSZGEWBFTRBKEPHCEQXEXXSOJBAAROSMJZFUVRLJEQMPRIJUYDPUCALTCQRSVQDWXOPMBSPLOHUBWVXDUEYFTHHNGVFKQQGWOAXVQCYKMNGACZSQNOTINJGGIFTMSYMPLTAD");
    tmp_msg_0.predicate.assign("VCAHKCAWAHIRBHUERJZLMZRINNFCBGVDVHPEFJQFLIONHVZKOBIQJNKXHYZGLZUETBFAKJKLVIPGWEZGBXJCPUWDXORSAAUSVMDWKOFTOQYUYFSQDNWUXBJQNXQYMGCWSVEPPEZLYOPIDJNMLLKOTCBTRCDXLVBEJTXCURFDSLNTACXYXTFKGTAUGPSQOKPHDAHHUTFEVCJMRQPDYUIWZMMSHZBKOSQQEZR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AFHHKJIKMQDVINDOBMCTKYXYQECNXPVBXFTADWBPUSPPJKAENCOXHCTWNIMBIUCKATUQGBFZKMXLWRAUEPKJQHHGTFIIQKCMXWJEQLEQFVZJSASJYWZVCLZFODZHJAUOPJYYGFYGNNDXSLVIEHONTOLOPRYQCSFNTHMWPFSRHBHQLRIUSDKFGWXKROPCCAYRGZAMXUVBMWLOZGGGQDOAEXTRZNLVZLSDTWBP");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("CCMPEBYUVJCCWYGNHKMPIJQBMDHWMTSXACJUIWKQFPMVJIRLTSNLBSANQRXNOKYGQKATDALUZOZPQJCSCGSMFZWZEHDHAPJJFQZBWIYVTVUSOZXUNRNEGIJRTDTLOYEAGMWRINKHLGDQJYZCJETRYQDGKMOXFHNSDUQAOGYFWKHUSPPVEQGKFUBOXHBMOVBAITVFSTFLGALKLXWLZFXEVUYBETZIXDNDOOESIXRHCYVLZPBBDUVRMNAE");
    tmp_tmp_msg_0_0.max.assign("LIGPXQKEKDPUBQHWZAFHTKMBJECCYTJLWQQENRUERUXLQVMPOORKJAOSLYMITGWAIGYCZDVNZUHNPINFYPAXOPVOTCFCMEMAKHWJRKLIUVDIZIOBALSZTPKRJAZVJHIBKRTSXGSQSWHTJUEYQKLZBFQBOYUMVHOSRVFNMNBNIDDQGCOVMYELTVCDDRFMAZHGZNPAXRGFAFWRUBUXDZLWTSCEPHWNYXJXXQCJFXWVTNIJCSDS");
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
    msg.setTimeStamp(0.717568224491);
    msg.setSource(37903U);
    msg.setSourceEntity(13U);
    msg.setDestination(4558U);
    msg.setDestinationEntity(202U);
    msg.op = 43U;
    msg.goal_id.assign("KMWUXUEWOFFGBXEQSQMDUHDHIKTWYCMQVYLLONENIOPKCHXZVKREBTYTSZWGFVRYLJWOLMGUVQXCXYBXWJHFHQYNQUXBOCGXIHWZIBNZIPVLSJBHRADEFCITFNZVGGAIINUCOFFAMJEJPHARDEKBETCSZMVZPVNCKMDKTVUCGAJHTJRZOQNBNZYDPYJSQTWRJSPBXLPTZGMFFERADSPOXAUKQSKUQJGCHDLILNDKLMRAW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TFWCVDKVPBFSKGTEVSZMNKUYJQNWWOELFAUTHVAKSKOTBXBFQQIIOGPOCCMJRMHDJVUTHYLRFJXFAWPUKRZXNLYENXG");
    tmp_msg_0.predicate.assign("YSLRVRHMNFJCODZLACPXGGWMEFGPRMOWQUOTZPKXQUVDWWSNJWSDDQATIDNJHBEFQYMYTJTAIBQIGXUIVPANZMBSMCCOSSFPXETLMVXGAZJTIFXQZXKOEIHOBNQREYHLCYWAYJPYVLKGBFVORVVUSBLKCIJVTWEJTBZPNEFRRWMIAHRKJKLDHVUUZZFENKXUGHIDBWNNTBCZDRHIKNGJBTXUAYWXMDPQHSHOEFLUPFGOEQ");
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
    msg.setTimeStamp(0.839194153364);
    msg.setSource(60131U);
    msg.setSourceEntity(100U);
    msg.setDestination(19017U);
    msg.setDestinationEntity(141U);
    msg.name.assign("WEZPDOGYQDYSXCAJRFG");
    msg.attr_type = 4U;
    msg.min.assign("POYDBAFIFBWHBLVHEEVWUMIGJQZNPAVPIHLROYYADXSIEJLLCKXFKFZECIM");
    msg.max.assign("VHLJWGUOUSGZTPWZTCAJKBLXIXQCCVINIAA");

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
    msg.setTimeStamp(0.838262300202);
    msg.setSource(10851U);
    msg.setSourceEntity(133U);
    msg.setDestination(9910U);
    msg.setDestinationEntity(94U);
    msg.name.assign("DBSNPBGJHFUGNDXIZTEJSTCYNZEQAVXXXKBBZVYXCEIEMLPOTKPSWITIKCIXQUNLHLDPTAKXMTQROWCWPGJFJAWHJCQUBJUPGEQYGEQCSYJS");
    msg.attr_type = 220U;
    msg.min.assign("QMWPXXBNIAWRRBMTYIFUVHDIGWJKGSEBJMNSOASKUASHBYJWJZJXITTTQDEJRDZDOMQPBZMNONOZXAVYWLOMMSKMZPUEYCNENQWUVGGENOVYZYLLSEBIRBPPCPRXIXARKARHMGTKGZDQXZJPXYQCHIHCJQHUUTDUXENCVFQIAOCFLWCPTCQUYDLJOM");
    msg.max.assign("ZQXQZQXARZNNSPJHGDTJWOLDROPDYZCISLBBJSKZZPVVFFGZCMJIKODLVNDMPOQUYPNRQAGDCAVJCXAJNMQCTKQCYPWMBNXJHKWWAGQVSRPMXRKUHLOYOLETYYXNFUIGKUFVEIIFJPVGMTTDAYKHFYAEYECMQOBVWWHBVRGFROBWALPUUKZTTJOIAHTMWEE");

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
    msg.setTimeStamp(0.942267949186);
    msg.setSource(54167U);
    msg.setSourceEntity(47U);
    msg.setDestination(18956U);
    msg.setDestinationEntity(84U);
    msg.name.assign("SLJVHYMYAUOYNMGCABBBDWOIQVMOEUVPADGEKXETANVBSRSFDFDPBVPZRLENSILTZOFH");
    msg.attr_type = 81U;
    msg.min.assign("CYDHMWUAYBBIAEWABEMHXKNXGPIJXQKQRIWTPLFNZFYUHXTUYEGKGXNNXBCHJGBLRKFAGAOXHVOQDRVFRZMSOHSNHWVPHQFQYXDJMVONJUASXNDTJJBCLEGDWAVEWGRRUZSLHAGOIJPWTIZCNEOKRMSTS");
    msg.max.assign("GHXGYLPTPZKPKHNGLXWSKCEAIKGSHHIXFAOYOXEJUWQAIBEJYRJHQFZEKEZHDXUDKQWWJJBCYBLMYP");

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
    msg.setTimeStamp(0.273894734162);
    msg.setSource(36646U);
    msg.setSourceEntity(57U);
    msg.setDestination(64014U);
    msg.setDestinationEntity(203U);
    msg.timeline.assign("YRBFAGGMSYYADZUHTQVVXOWBCZOVIWFPPJQBKQJWYDUJGTGGQASKKTUXOHW");
    msg.predicate.assign("WLNMLJHYGXJVNGOMXGMWTWMUPZGLDCUFHDANWPEKFGJXVGJOPLXDFCFEQHFBBHNSLLIQBAIYVZTURMHTHWYNCVATXKAEKYYEDSEIOCOGIIRZVMKBR");

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
    msg.setTimeStamp(0.923985931484);
    msg.setSource(49061U);
    msg.setSourceEntity(136U);
    msg.setDestination(30454U);
    msg.setDestinationEntity(108U);
    msg.timeline.assign("XDLMQOWZBKCTWQRXBUZLAERHCOPYBATMNEYYOPMRIUHCDXZICFKT");
    msg.predicate.assign("VDQXKMDXRPJRTQHNSBWZTNYVUENDBNOZGAXVMFPJZUDUDBTIUOZYORPTLPLKVXPGIZYTMALVZJOFSNUJPMLNZVJUFVBKQSURSXDYIRFUZNPESBBHCQXYGHLYCJTGXIFESYMKDWGHLFYOWQWQESKXIADRHXQWTENLMBCWPIKSLAOAUZDIQIAEFNNLZEBRTSFPTFJJVAMDLTKMAOCHXEKJCEGM");

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
    msg.setTimeStamp(0.246515797982);
    msg.setSource(21349U);
    msg.setSourceEntity(120U);
    msg.setDestination(62188U);
    msg.setDestinationEntity(35U);
    msg.timeline.assign("NUGRVYLMLEHHBSUQWSOPUDBZVLIAMSWOPTHROWBGPWSXTSCZQGVLUFOMYJNGAZIAIJROXRKFMDNLQYQSMBVKNGSUWBTBMPCFKICRSUJHFYJFHWHCAGEIWPJPPNCTCLRNIDGDHECBOFUZXWKWFZDXMEXCVPHTQKATNJZMASVAUCQKFFRYXZEEYRPQPARXQADJZFEOITMILKSTVYKVDINGBUXCNEANLJL");
    msg.predicate.assign("CTWIFIRGYWJFVVDHTNTOJELMCGUMBYSWEX");

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
    msg.setTimeStamp(0.195914967195);
    msg.setSource(25987U);
    msg.setSourceEntity(149U);
    msg.setDestination(31039U);
    msg.setDestinationEntity(193U);
    msg.reactor.assign("QDUKGYRIEAPOXBOHJJZYRMR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VYNXMVNFKLOVIQRZLLETSEIOAGVLWUDCGRMXKMEJFB");
    tmp_msg_0.predicate.assign("FEEQUGGBJIDBICVJTXLZKFORHYWWMBNKITRIQLCBZYTUEDCVPCJKGIQSYHFPHKKNNLEMTIPEECOPGAYXLJQTSTOLRCQUSU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DQNFHRXDTWGKMMMPJIIYGUCCZAPXIOTQVJUPSRRKPSDXKTHEFRHOGFPFGNV");
    tmp_tmp_msg_0_0.attr_type = 173U;
    tmp_tmp_msg_0_0.min.assign("NAVUHHGEGKSBUJOBSICQZFJYNRSCWEUSHTTJYVBXUWXVVMSKJSAODHQWNWUKAXMWYZVFIAOTISLCXKZKXAWCHAZJFTJOIDQOKDCXJPAXYBMZWFZCLHAQMTBRRQHDVGASMGYQPULEKJOLKQQZJDXDURNEYVMPXFNQDPEELTZYWVYLHTMNOBHBZUGQWVTINAGPORRECFBLPIEMKFFMKOI");
    tmp_tmp_msg_0_0.max.assign("KNSHOKUCOYVSMNLYOZRVZVYWRRUUBPHQSEMVICHKJOYEQBIZBNKZXENXLPSAAXDEGXAPNRLCEKPJODIDQJSUMZSCSIJNVDTKLDBPQJNJWAPSODUPDFZUHTJIPBCITYBWAXTMMFNXTXLFRGFRUALBNIKKGUIUCTPDRGIMSRJCWHSEAOCEQGYFJLDWWWO");
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
    msg.setTimeStamp(0.425934906477);
    msg.setSource(27740U);
    msg.setSourceEntity(125U);
    msg.setDestination(9299U);
    msg.setDestinationEntity(209U);
    msg.reactor.assign("FJUREXEWRXGHPGOPLJAZYMHWOBGVAEOXWUUCZZLKQDMGTSQSUMDYPAG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TSPHEZDNUSMJXDDJGRZGQOHXKBFJBDRNADWKFCNAYVEEGBERVOXHIQMMHXZSTTJKNWPVPPGXCC");
    tmp_msg_0.predicate.assign("VMQEFERMLUJLGHSRRTHKGJGHHVPGFRBJNXUWHNLZJJGZAUSEQZPCOVWTWDBCDCMBXGOLBYZNEFKNIGBZWNSWHFGAUMNMVTLVYYPOORCPOETHKQBVBXIDHJITFESEKYFBYLPGNFDPSYNTNLPXVLDARCQSGQUIWVAFQYEUZZQRCOJLJJXPXWMEPWCKXIHKZWECFLFSCZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PRMIVRCZFNTDAAVOGWEWFMBVEWIGXUEBKUCWNMGUVGZABFQYYKRLCEZXDCZVXBXINTOSCHDXSRGFZQXIBRMJYSUDPYWTANYHOPWQOTUJKAMZSFZSAWURGUVHLPNTDUKATCBCKFGBBHWJMHPQENUNQIKAMSWSDIOX");
    tmp_tmp_msg_0_0.attr_type = 101U;
    tmp_tmp_msg_0_0.min.assign("JHMNXABWLDJYPTYJPNUHNDRTPHFDCTCLDZCXTQRLWCJMDLBTNXRDHLOCCTGKOFZWIPUAKNMVFERNSJGMQHSZYCFWGORGVAOLJLSPKWNIGESEYNWZHRQEIZJVXIVXDEOGFIHGORUUFOCIKAASTFYCFGOSPIBXFQUHDFUYLSSBVBIKTWUTKCTEZKQY");
    tmp_tmp_msg_0_0.max.assign("FFNRLYUMKG");
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
    msg.setTimeStamp(0.0734955117509);
    msg.setSource(36040U);
    msg.setSourceEntity(91U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(194U);
    msg.reactor.assign("BCEVVHSNBIWXBRNJNLWJRYCEBGXQVDAHMQRBEIOCTIVWPYKJLXFFEKNFLEOHYCTIKDRFQMMNSLPTBDFSQVLCRUNAWAIWJSLENMUDDIMYJALXCTZGG");

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
    msg.setTimeStamp(0.47224237612);
    msg.setSource(48380U);
    msg.setSourceEntity(40U);
    msg.setDestination(26036U);
    msg.setDestinationEntity(76U);
    msg.topic.assign("PZLPCFPPVTONON");
    msg.data.assign("EBBVGPTXOAAFILKINZEOCRVGHVAPOPHOTSYZVUCXLUCGYUTUUGJIAFHJYREQJLWYABJNMBXGSGNWDOYTPSUGTXXDCOMWPDSPBIEYUFIRCQKQSXFZIBHVEFGEHYRRUQCVETZWXLYRNMAYD");

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
    msg.setTimeStamp(0.58168620304);
    msg.setSource(3749U);
    msg.setSourceEntity(224U);
    msg.setDestination(56637U);
    msg.setDestinationEntity(11U);
    msg.topic.assign("IAQIDPTJKJFGSLCSGTSOBZZOAFJTFHNKNKKDUUNZQVHGAANPFOKWTEDQNPLXRQIUZWJXVYUNRGYTUFMOZLRTPYLPRXIWBMVEBJUDJCZMXMYARGQRXLLKEUZTYOQAMNDG");
    msg.data.assign("DUPBSWJEFBRBQGVCDKTIFYITVYKKKSPEAGYJRNSYEVCHRDAEEBNMMUZNCWIZSFXCWMFWWOQKJJSDRVNRWGFUQJQTWREHXUTIFVT");

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
    msg.setTimeStamp(0.531463241124);
    msg.setSource(37471U);
    msg.setSourceEntity(5U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(142U);
    msg.topic.assign("GARCDQSLXXYHVWMBKDFZTNGTEQQFPDMMUFZJSRMGXWINIZGCEHKHGWABWKLODUAUZDHQME");
    msg.data.assign("HGAPJCQBLNTIGLHREKWJMYQJTOSPBIUBVHCECFWWPVBSWUVCDKMKYEPOOLXYZWPUGYUNSMHXACHRUYPMPIOZRZLDYFTRLJBEWBGXSEOBYKDSMTOVNKIDZWXLXJJGOIHDTGOKSVAQEVNMFF");

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
    msg.setTimeStamp(0.754824630303);
    msg.setSource(54431U);
    msg.setSourceEntity(88U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(3U);
    msg.frameid = 238U;
    const char tmp_msg_0[] = {-43, 57, -29, 124, 85, -8, -61, 19, -48, 125, -69, -115, 96, 40, 77, -90, 104, 118, -115, 29, -111, -117, -97, -19, -110, -64, -77, -116, 72, -39, 33, 102, 78, -72, 74, -69, 26, -122, -118, -121, 68, -117, 71, 102, 112, 121, 38, -92, -99, 116, 104, 121, -93, -30, -50, 75, 18, 111, 57, -81, -66, -45, -73, 70, -12, 65, 48, 64, 101, -59, 98, -50, 121, -64, -80, -54, -114, -22, -47, -41, 92, 71, 9, -98, -88, -58, 19, -37, 8, 17, 58, 23, -118, -15, 76, 49, -3, 54, 9, -15, -100, -97, 21, -113, 35, 76, 114, 61, -25, 117, 123, 113, 117, -127, -14, -35, 109, -23, -4, -75, 79};
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
    msg.setTimeStamp(0.83245117871);
    msg.setSource(44244U);
    msg.setSourceEntity(195U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(220U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {53, 46, -82, 74, 120, -95, 81, 63, 4, 51, 24, 102, 0, 32, 91, -34, -105, 86, -92, -74, -32, 102, -83, -116, 52, -107, 87, 7, -48, 58, 5, -121, -11, 57, -78, -97, -43, 118, -76, -40, -9, -105, -19, 13, 5, -113, -111, -123, -87, -91, -116, -44, 35, -8, 8, 62, -40, 9, 35, 10, 100, -76, -108, 45, 26, 37, -51, 16, 113, 38, -53, 59, -104, -67, -59, -23, 118, 29, -99, -71, 45, -18, -82, -15, -83, 75, -62, 16, -41, 48, -112, 16, -89, 81, -21, -97, -34, 12, -90, 65, 60, -127, 122, 65, -73, -7, -45, 84, -88, 65, -50, -77, -100, 12, -127, -40, -89, 116, 64, -47, -41, 94, -113};
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
    msg.setTimeStamp(0.579777525046);
    msg.setSource(30495U);
    msg.setSourceEntity(123U);
    msg.setDestination(14214U);
    msg.setDestinationEntity(96U);
    msg.frameid = 221U;
    const char tmp_msg_0[] = {106, -114, 87, -21, 74, -105, 77, -65, 47, -12, 79, 92, -94, -98, 36, -75, 97, 39, 44, 59, 96, 11, 29, 72, -26, -36, -112, 1, -93, -63, 35, 109, -21, -30, -6, -76, 35, 63, 29, 87, 22, -15, -60, 106, 110, -5, -4, -96, 73, -94, 40, 55, 110, -41, 108, 41, 119, 109, 55, -92, -57, -88, 101, 73, 126, 91, 50, 102, 116, 3, -11, -59, 117, 15, -71, -110, -10, -10, 82, -85, -35, 91, -115, -90, -22, 8, 94, -122, 95, 61, -111, 35, 39, 44, -59, 74, 66, -96, 68, 66, 62, -41, -33, 29, 114, 101, 52, -95, -56, -20, -78, -25, -117, 36, -15, -108, -106, -29, -22};
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
    msg.setTimeStamp(0.771630106089);
    msg.setSource(10469U);
    msg.setSourceEntity(19U);
    msg.setDestination(41262U);
    msg.setDestinationEntity(169U);
    msg.fps = 11U;
    msg.quality = 119U;
    msg.reps = 96U;
    msg.tsize = 167U;

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
    msg.setTimeStamp(0.953411393165);
    msg.setSource(57272U);
    msg.setSourceEntity(100U);
    msg.setDestination(42910U);
    msg.setDestinationEntity(201U);
    msg.fps = 254U;
    msg.quality = 238U;
    msg.reps = 2U;
    msg.tsize = 64U;

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
    msg.setTimeStamp(0.842385987165);
    msg.setSource(27035U);
    msg.setSourceEntity(59U);
    msg.setDestination(26798U);
    msg.setDestinationEntity(60U);
    msg.fps = 190U;
    msg.quality = 117U;
    msg.reps = 93U;
    msg.tsize = 152U;

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
    msg.setTimeStamp(0.490780408256);
    msg.setSource(58247U);
    msg.setSourceEntity(97U);
    msg.setDestination(46823U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.36109667104;
    msg.lon = 0.691024394279;
    msg.depth = 88U;
    msg.speed = 0.014100904138;
    msg.psi = 0.798956886054;

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
    msg.setTimeStamp(0.212269231364);
    msg.setSource(3505U);
    msg.setSourceEntity(73U);
    msg.setDestination(8730U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.0425516214324;
    msg.lon = 0.996274684283;
    msg.depth = 221U;
    msg.speed = 0.934285034271;
    msg.psi = 0.908446367235;

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
    msg.setTimeStamp(0.382502965032);
    msg.setSource(13280U);
    msg.setSourceEntity(206U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.861590969131;
    msg.lon = 0.0320087212082;
    msg.depth = 52U;
    msg.speed = 0.845433537033;
    msg.psi = 0.376486742094;

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
    msg.setTimeStamp(0.497058326929);
    msg.setSource(60822U);
    msg.setSourceEntity(68U);
    msg.setDestination(50739U);
    msg.setDestinationEntity(154U);
    msg.label.assign("PZTNUTIAKHIKKL");
    msg.lat = 0.839920852333;
    msg.lon = 0.664226496865;
    msg.z = 0.614837695019;
    msg.z_units = 23U;
    msg.cog = 0.12889544657;
    msg.sog = 0.502260455985;

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
    msg.setTimeStamp(0.12537325428);
    msg.setSource(17135U);
    msg.setSourceEntity(169U);
    msg.setDestination(46802U);
    msg.setDestinationEntity(106U);
    msg.label.assign("MJWUXYGNXPZGLVSYITUCENHRNUEJNTEJNZQESDXYHHJRMWWXSIPSBBWOWXBATNHEKYFWKZTOKTOTYFFNTKJGOSFCEIMLZXVGPQAMJDOQRCFJJVFKSIYQNZKQHFQQSURJABQVDVVAXQXONEIDPZHBFLKEDGTXRUVBAALHSLLCDRUUBYMFPOPXPPGMHYJAZRBDKIAYILCCLAZCZLVWORG");
    msg.lat = 0.939599755073;
    msg.lon = 0.703459687233;
    msg.z = 0.241329626419;
    msg.z_units = 25U;
    msg.cog = 0.854559825304;
    msg.sog = 0.384427984417;

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
    msg.setTimeStamp(0.394365274252);
    msg.setSource(16824U);
    msg.setSourceEntity(134U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(25U);
    msg.label.assign("TLCYUEQAHKAJYAUSFARBLDWCLTGVXVDRRZSGQIRVJXYBHOKWJISNJQGOGDBTFNWYXRKEJYLXSYPNRFVPLKMEVHSFUWKXWHJDZHCDBXVJKEYUFGPNMGSBNSBOIHQZYOALELOMMXWTEXZZIPFUUAPOMZDBFDWNXRCINFUNKRQWUCDYPGPSZJQCYIMIBOQDCVBM");
    msg.lat = 0.845707243301;
    msg.lon = 0.0686610122314;
    msg.z = 0.0178279221448;
    msg.z_units = 48U;
    msg.cog = 0.566168842532;
    msg.sog = 0.816067906768;

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
    msg.setTimeStamp(0.85892367494);
    msg.setSource(55562U);
    msg.setSourceEntity(98U);
    msg.setDestination(569U);
    msg.setDestinationEntity(87U);
    msg.name.assign("DXNOOFJOJVVBFCXCNGGMPUMYVDTLWOJSBNLOSIWRYIHOCXGAQKOAZYHAZXTKRYWHBDWBPFUGFMTKRIQFMITBPQSQAFEQUQYDWYKCVQJHHGWDZOU");
    msg.value.assign("QVKGFZDOYGULJEOKNJTO");

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
    msg.setTimeStamp(0.754357259756);
    msg.setSource(24583U);
    msg.setSourceEntity(175U);
    msg.setDestination(58515U);
    msg.setDestinationEntity(209U);
    msg.name.assign("TLNGETHMVFVOYBRYJHGYUWHWCLUQXJSUKJKFPJOAVZFOFYRAPRZHYBPAQWEMBVOQFVLRXXEFRNKRDHIMEMEOTCBPQMNTWDIWVR");
    msg.value.assign("CRUSWYGETVCBIATDBBJSKXZDERLDEPCZFGGKLOKGVVBUNWMWZTFMMUVESMHQNOGYPLOKPRGDKYENIWAUERMBLKHSUANUSPFVROVWTWAOWZVORXREGYHQHUHTANHTMCLKDWYFZWHEXBGBXOIAXJBCLIJMJZAIPNJLQVUSQNYXEBMFSJHYQYANCDJPUNGIFFPQVCA");

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
    msg.setTimeStamp(0.12119480118);
    msg.setSource(53044U);
    msg.setSourceEntity(36U);
    msg.setDestination(42550U);
    msg.setDestinationEntity(41U);
    msg.name.assign("VRUQUPORXGCJDVRKUNIAFOKYPOEDVGZYSSEWOHFZDTIZZVXINAEXCAUNNYDYLBJUMEUELLLGZKGEQKYWSMMDHYOOSTSCKKPGFKBSHYIFKJHRCWMYJCPJXHQPJZSJGCXLFBSHRIVNMNORFAFJIVQTEGIBWTLW");
    msg.value.assign("KETOENHFORKDWEZNNACTGGUCVHJRMFQTOIYMCGINIUINKXDFDZHKGLJOZVLVTYCYBVJAEXTLKIWRAETTCMQZJJWOFXEGPGBYDZDFDCFYOWSUEKPWPVEMAYIYVPQFXMEPNLZIBONWSCXBJKACRHOVYCAZSQOXLRRHSHSGUQIRMPGJNQUFNMMWPIZBACOJHDQKGQVLTQBUWVTYTLSKSHGHZYLBZAM");

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
    msg.setTimeStamp(0.22973531415);
    msg.setSource(8552U);
    msg.setSourceEntity(212U);
    msg.setDestination(12331U);
    msg.setDestinationEntity(125U);
    msg.name.assign("URWDHZSOCPHQBLSWQHJHQZITRIRUOVMUXTFALAMUQJEYORZJRNODRMDOQRDDEJSTHSGUYPEFBIGSKBSTJTMGKKAFJXCOHJUXVZBCXDWSWYGCVKEPZNUNBCDGPPQMTWUMXKHCIRWPGTLQGPZBFXMVKFGTYCALAQFOXXIFLRZAPAPNNYFBOLXNSWKEGNKRVEZDSLVLBQOEH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ERNFCUSUFYTTCWXIZRKPVSTDSFRVJRLNGSRHTNMWURKBSLQMHYCCIWKOCRIIPBQBUDXFBLQTDDXVEAWOCNBCPHUHZFLWOSDVVLDCOTYKGQYFPNOBIHZYLNEUTZGASJEDSHAPLFXJFJMGAUANANPHKGQYJQXWCWBEWUPYJ");
    tmp_msg_0.value.assign("UIDLJPWBBZFEQKXBSWJHGGENRNMCAOZAGERIQDUTMHJHRAOVVDBOMSTIPQERUKSMYHWHMBEFCXXDPCTFFTSRRUXMPLNQLNSVLZISOJJAXQDIWMQFNNGEAJZSQUKLVOAKEJJWOULZQDDNYXSOYZJCTQLXMLBHPFRZAHECPGICUEOMNPZIGJZOBAXPGKPZYMTGEKRWCHIX");
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
    msg.setTimeStamp(0.423100601064);
    msg.setSource(22936U);
    msg.setSourceEntity(1U);
    msg.setDestination(37979U);
    msg.setDestinationEntity(240U);
    msg.name.assign("XUSPDWWCLTDRHCYXYNFUCLMBBSPHKWFYKQIACZOKJMPMSCZUWBCVCOXOXIYAIEIFVUUTLOPNKEYVGEQMXVHPWLSTFAOOAUGXMANUSCVQNGIIPNGHVWDOJVMTCRDOGJFVAQGTFAKTJTZBNGMSKGIHZDREERUEFEPBGBFGSHLSWHQVZZMRJQRNSBTCRLIHAQDKLYLBBEZUWXPUJXZQDLJHWEKMJYZBHFIYQKJODPDZXO");

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
    msg.setTimeStamp(0.598218671912);
    msg.setSource(2191U);
    msg.setSourceEntity(14U);
    msg.setDestination(55620U);
    msg.setDestinationEntity(204U);
    msg.name.assign("WSVNWMJGLDKIABWWTLWSIYLFNVZKJCGKQPVXHVZBCTRUPNOFMUXUUQQGRAXHXTM");

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
    msg.setTimeStamp(0.42999037991);
    msg.setSource(24880U);
    msg.setSourceEntity(65U);
    msg.setDestination(638U);
    msg.setDestinationEntity(36U);
    msg.name.assign("RSHUKCWFXOOXXTGW");
    msg.visibility.assign("OCICELLSANIYHOFLINUBMMPWNUGRNXCWAVHLUMKFUUTBBQKVCREQFEFEWITUIVZKHFJNJRKTYJCOSVRROSDVBEM");
    msg.scope.assign("RJAQRETEGMHUNZYZBNBJRWLXBTZIVCTGUIZOAMYUOAPXFGIPNPEBFTNUKVSLWIQGCGOPUAVPTPQYTNQLYQYMDVOVHZHMEJZNCKUVSHUNJVIPDEOHREOBMYJSESLKNXWLQMLJDDHU");

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
    msg.setTimeStamp(0.425315451042);
    msg.setSource(6156U);
    msg.setSourceEntity(14U);
    msg.setDestination(20958U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ZRCTHMWKJYKZGRRAWWPQCDVAACIONWKZBGTTLTIHDMTHMVXSEDLUUU");
    msg.visibility.assign("DHBCBEAWTGTDFZBVENCSKWBASYLPVFJAEBVVIAINALTXMMVKCYMUMSXGMSUVRTCDRPIWFIPKLWOHYLCJZLUOKSJMJSLUBKUHOFSRQVWZREELHRYYNENPJWKYTCBPGHIQHDVPRQZFUFGVEPZLCIQJMFOQ");
    msg.scope.assign("VMHOFYYVLBROQTFZLPIEOWWLBMSMAAUAXFPTGNCIUIJWZSTYPUFNUEEIPHGLNZIDJSPGANWXEBHBWZMQNZAYJLZDFXGRKNKPHFOBWGSQTRDWEYRMLZKITSSNCRGVOVRCTRVNCJELKPUYDLFNTKSSADZQSIFUDHQWJNCUVGHVCOHVUQMCHSOMKXIOBOLI");

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
    msg.setTimeStamp(0.165270414076);
    msg.setSource(45666U);
    msg.setSourceEntity(117U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(51U);
    msg.name.assign("FEIMHJPTWQKYTNQYPGCXNAGXBKNDOIBCQHAUQEOABHASBHPAEMZVZIPCMEWFWMMSTQNRZPOBG");
    msg.visibility.assign("XGYXEJTASXEKNIRLKRSMVZWKEOYEIMBEQLLXJMPZTKFYQIYVUWGBOYPNGYIFHOLGLBKIDGFFFLPBK");
    msg.scope.assign("XFFRBOBPNMIEREXIFOSSUDZJGTUPKMJOHMXZTFOVDMWYMTZFGGLQMBUF");

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
    msg.setTimeStamp(0.641574265111);
    msg.setSource(52236U);
    msg.setSourceEntity(56U);
    msg.setDestination(9993U);
    msg.setDestinationEntity(111U);
    msg.name.assign("NFJJVORWOBWTNXNWBOKDIYATINUSNQKSSZFHYVFOGBGGHGQDICCCLLKLHMTKFMWFVZNAILJQLGXYVVRYKBIOVFEPFXEVMPSHSNAUTASZYPXWCMMCJXKDEHAXBYJEKJNTECWRACHXLIZMOLAE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EVCSDMZIMCIGQNRCMDRYJMADPGFGWLLRSKAVFGQHUNTVHNJIZWIEOGUKKIFJLHZSWBWNBYHUDTJUTKXTCAWWNDUCIECSXPZEMZIQDVCXYECXHSAJKNZSQYWPSAVDTXPJRFWKHFOXSKVWLYBORSXQYVQHWNBGYELQYGZEMMXNCIOLNLFRTTFZABELJJEJTFHUVSIAKEUDXCHKOYTRUBPTLOVAZOUROAXQFUFPKNBQRMPVDABBMBHGDOGO");
    tmp_msg_0.value.assign("LONEPKKCIAJSFQLBCILOSIMXYGWMAISAVRVDZCKWZQWSTNFHXAHDBEUUPMFXCDBUCIVNCRIPTWJRIPONRCMEZDOBNBXQQZQOEDTXEREFWHSXIFDYVKWLVF");
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
    msg.setTimeStamp(0.0178672906418);
    msg.setSource(3736U);
    msg.setSourceEntity(247U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(74U);
    msg.name.assign("SQPHAIXVFVWAMWRYLEWKOBUPQNBBM");

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
    msg.setTimeStamp(0.718050328548);
    msg.setSource(41296U);
    msg.setSourceEntity(250U);
    msg.setDestination(48315U);
    msg.setDestinationEntity(177U);
    msg.name.assign("HTEBLGWJDNLOBWSJQYBEIKOQPNFZJJFGGEELNCOLGXAGVUXMZTOXAHTXQEJIMZVYTZUPTMWEZNOGDDALXKABSDPDSOCGJRYYYPVAWRBFPMFPZMYJBIMVHVITVKFWFRMCHSYCNNZJTQVFPBUIMHEREQOQNCVZXSCNBTP");

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
    msg.setTimeStamp(0.207132166485);
    msg.setSource(62158U);
    msg.setSourceEntity(91U);
    msg.setDestination(62241U);
    msg.setDestinationEntity(76U);
    msg.name.assign("YTNZRCLMZCHFPJENQZKVWLVXKHTBYDWVVUIVXSKXEYCLKOFTHLQIMAMRJQHDRNIWPIIBQNRGDBAJDRVAGQUICPZTGOWJPZHLGLMSYSODZZRWJUKIZDUASSQKNNAWHIMEECFTXSHPXRQTFUGPSHKOYXFEWKGKOYTQNUEWRMMUXQ");

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
    msg.setTimeStamp(0.958846823834);
    msg.setSource(5606U);
    msg.setSourceEntity(153U);
    msg.setDestination(32404U);
    msg.setDestinationEntity(145U);
    msg.name.assign("ODIVPONNFMPRUHVFOURJSQPGSNYXMLAGQJKZVHBZKWWYXFKYPNILBXMAQEINJHXAIUDMEAJIRPGIMRGCSSZFXGFWHWLEQVZAJEQLEEBXKKOBVUVUYQCCAEFSRTHOICUWYDSTNHWLTKBKCTATVWOHSAQYRPMWXYUDGBQGXFCRICUFSDZTTLAHMN");

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
    msg.setTimeStamp(0.671276366804);
    msg.setSource(13321U);
    msg.setSourceEntity(31U);
    msg.setDestination(25126U);
    msg.setDestinationEntity(174U);
    msg.name.assign("GMOBXCYMVSATQCYMFNUNILZVSZBTKLSVOMPEBAKKQQIAWUEIDGVSCARUEHLPXOASJCIYYMKAMFQBAYQRFPWJHNJMRXFGTBLKQYPSJQVDGTHNWHJFLYPGPOJMJITEXFZPHKNUNXTHPIYCHKVXGAQEYMWBECLOCPJIOU");

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
    msg.setTimeStamp(0.695319550996);
    msg.setSource(64487U);
    msg.setSourceEntity(210U);
    msg.setDestination(46655U);
    msg.setDestinationEntity(165U);
    msg.timeout = 2024232729U;

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
    msg.setTimeStamp(0.441391491968);
    msg.setSource(62270U);
    msg.setSourceEntity(233U);
    msg.setDestination(26474U);
    msg.setDestinationEntity(36U);
    msg.timeout = 2904466396U;

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
    msg.setTimeStamp(0.482723956557);
    msg.setSource(54869U);
    msg.setSourceEntity(25U);
    msg.setDestination(36233U);
    msg.setDestinationEntity(39U);
    msg.timeout = 2193317320U;

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
    msg.setTimeStamp(0.849262532928);
    msg.setSource(6220U);
    msg.setSourceEntity(93U);
    msg.setDestination(10980U);
    msg.setDestinationEntity(179U);
    msg.sessid = 115199953U;

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
    msg.setTimeStamp(0.383255415071);
    msg.setSource(35007U);
    msg.setSourceEntity(125U);
    msg.setDestination(63854U);
    msg.setDestinationEntity(195U);
    msg.sessid = 1991551743U;

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
    msg.setTimeStamp(0.485224960641);
    msg.setSource(47269U);
    msg.setSourceEntity(64U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(76U);
    msg.sessid = 3765518286U;

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
    msg.setTimeStamp(0.322481431106);
    msg.setSource(35704U);
    msg.setSourceEntity(121U);
    msg.setDestination(18846U);
    msg.setDestinationEntity(32U);
    msg.sessid = 129332211U;
    msg.messages.assign("LMXUDEQHSQTMNKEBWXWTVNPMUVMUSITBEUCYZULWQHXIUBAPTCYOGFPLQENDNZRJYFDHFZYKEOLBHZMIOROYEIOWTXTAZLOCDWVVAPIQAKSRISDZROOKLPBJFBGWHHHGXEMBOMNVRGAIYGFTFHJWQSVANVPXOUQQAZCTXRDUYYVCKYUCCRAYJFGP");

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
    msg.setTimeStamp(0.553004065248);
    msg.setSource(27U);
    msg.setSourceEntity(8U);
    msg.setDestination(46991U);
    msg.setDestinationEntity(54U);
    msg.sessid = 3346325088U;
    msg.messages.assign("FSQVYDPGDXCFJLPYWPRQDOXOPGILETAZKLCOFNWLXDQXZRFABYAUCJNRMMDUWZTCKIFDBWVVECKKEZMBGBJWYHKNCZXVHHMQGAVWYVUTKCSLAHXJHZIXFOJBNUNSPETAFISJIMENOLEEGUYRAQECQPXBZARYXFBHWGITRLGSNURKUTQSUZQLQLEUETAIRHQVTOPMVOYVBKMJPVWGTH");

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
    msg.setTimeStamp(0.851916835013);
    msg.setSource(12696U);
    msg.setSourceEntity(166U);
    msg.setDestination(5473U);
    msg.setDestinationEntity(239U);
    msg.sessid = 296161503U;
    msg.messages.assign("GLJPMHFMBGSAMKOPXLSQVBPLCNYADPCQNMRKGCPXFUVFZANWWCATLEOLQGBXNOTMFULJTKWYSQQYEIBEBWQIRCURJOOHIIPTVFSTIJHTTZMJIFDXIWRGODXHFHCZRINENBYURLXHVCGFJGTWANWBPGKHZDSQZRLPNRZDMAHDUVFZDVOHRCEXXNDEJQAVWUJLFPIUKVVAJZOKZKU");

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
    msg.setTimeStamp(0.808190706307);
    msg.setSource(10036U);
    msg.setSourceEntity(87U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(36U);
    msg.sessid = 2824727833U;

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
    msg.setTimeStamp(0.670578979643);
    msg.setSource(9615U);
    msg.setSourceEntity(214U);
    msg.setDestination(35101U);
    msg.setDestinationEntity(29U);
    msg.sessid = 2941980812U;

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
    msg.setTimeStamp(0.561946177856);
    msg.setSource(5573U);
    msg.setSourceEntity(163U);
    msg.setDestination(11581U);
    msg.setDestinationEntity(5U);
    msg.sessid = 3085556942U;

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
    msg.setTimeStamp(0.717575349246);
    msg.setSource(19309U);
    msg.setSourceEntity(179U);
    msg.setDestination(63492U);
    msg.setDestinationEntity(19U);
    msg.sessid = 1693050835U;
    msg.status = 217U;

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
    msg.setTimeStamp(0.313835267872);
    msg.setSource(41030U);
    msg.setSourceEntity(130U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(84U);
    msg.sessid = 91062218U;
    msg.status = 221U;

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
    msg.setTimeStamp(0.325581945831);
    msg.setSource(16379U);
    msg.setSourceEntity(36U);
    msg.setDestination(44175U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3286542215U;
    msg.status = 182U;

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
    msg.setTimeStamp(0.862988498182);
    msg.setSource(25690U);
    msg.setSourceEntity(48U);
    msg.setDestination(4439U);
    msg.setDestinationEntity(72U);
    msg.name.assign("OEVSVIGWOFLFTYFGNHUMYUUNODZRELSRKYCIMMWGMGXOFZUNVMCURCWIYASJZIOXIQXUGQATOXJVDOKORPLJJRNSSQVDASECNZCKYTGLGCAHFWKUFTXHFAPKBDRLQPKDZWXQVULBZUOERQZRCVEDGWUZFNIYILVYIAK");

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
    msg.setTimeStamp(0.76241357671);
    msg.setSource(36854U);
    msg.setSourceEntity(229U);
    msg.setDestination(53271U);
    msg.setDestinationEntity(69U);
    msg.name.assign("BCWFRZDCBWAVMKQGUWUWJVDYLQJCNFLUJLUQIMKDXHBPRHCPVSVTHDSAPIHGLEUSHJTYGYKSMZULOZCOXZIWLFAPWKOCPPOQIIJAUOECRJADKMKTN");

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
    msg.setTimeStamp(0.44713866719);
    msg.setSource(28383U);
    msg.setSourceEntity(32U);
    msg.setDestination(47011U);
    msg.setDestinationEntity(175U);
    msg.name.assign("PKEBRABOHUVZOMVIVHKDSWLSDZAQTXULPZVPIXGTHRSAHQYTELOYJGSFNHSP");

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
    msg.setTimeStamp(0.626914733835);
    msg.setSource(32799U);
    msg.setSourceEntity(196U);
    msg.setDestination(65174U);
    msg.setDestinationEntity(243U);
    msg.name.assign("LSILCZADLTHPBLXSUQBAVOTOKYDYNAYWRXGYEOTWWSFPYMIFUABRXKVUNPGRGTCDCQXKJVLSBKIGJVGXHDEWTLWIRMCTFXZMSNFBHBRFHAVLHIOVVEPWHCPVTLUCPZSPNFWCIEWNZKQRKYODCIQGHSKPFNDZSDLOAZYJPJTHJMDFINQUNKDSAGEYJIAXMEZMXHJBEZNYJMQXUROEJZQOBUMRAWLYOQQGSEBQURAGVJFTBUVUTOMDIC");

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
    msg.setTimeStamp(0.696011210207);
    msg.setSource(44047U);
    msg.setSourceEntity(24U);
    msg.setDestination(31331U);
    msg.setDestinationEntity(68U);
    msg.name.assign("YQEZXUQVHJXKDOKCXBPYAQYSZXBXWENFLJQCLCRMKCTWRVOIIZVVLPWCRFAODMMGBAYZJDTQFXHYVNWDVKTRLHISRUMORASCJOMJS");

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
    msg.setTimeStamp(0.491376474645);
    msg.setSource(39759U);
    msg.setSourceEntity(52U);
    msg.setDestination(56537U);
    msg.setDestinationEntity(8U);
    msg.name.assign("SGIUWYORCGZWUAJCRTNSEEKBAPCWQJWCKJIHWUFZYHSBRPQCHUIYIZZLKHYXYHWBRMZUQMPNFOJQXGSDFTBUDKLDIGQWYPVHPVSZACVXKRFOLUMNIBIZDAFAFGEVETVOSGGSFMESQUVTGFOXFETREYSUIDMQXKP");

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
    msg.setTimeStamp(0.0430457099203);
    msg.setSource(10789U);
    msg.setSourceEntity(80U);
    msg.setDestination(10759U);
    msg.setDestinationEntity(158U);
    msg.type = 110U;
    msg.error.assign("BXGEJAVPUGGEJCBWUEFNLSRTHJCDTLQHAMEFAXMFRSICWLFGITHTDYEOQUNISZJKFHMPDZVGSFGVLOHFXTDZZMUCCYOIRNCXCUIWNJBDAYTUIDMNLLBAQXXGYJYPZJSPGMNPVPJSBRAKOEKH");

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
    msg.setTimeStamp(0.895165367442);
    msg.setSource(54711U);
    msg.setSourceEntity(170U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(203U);
    msg.type = 3U;
    msg.error.assign("IBDPVEFQVYCXFULEVFGYHJEVKPKAXHXCYKVRQTQOMSWJGDROYHYUZCJCWWLLYEIQOLOGACICDJTDRIOVTHTAESIDJBUXJZUGLXFHAEGBPUOKTKIGDONXOOQUSLPRFPPRTFNSPNJMFWYZ");

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
    msg.setTimeStamp(0.572505389085);
    msg.setSource(1255U);
    msg.setSourceEntity(172U);
    msg.setDestination(42865U);
    msg.setDestinationEntity(97U);
    msg.type = 103U;
    msg.error.assign("PDURKZCEPQ");

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
    msg.setTimeStamp(0.401383571477);
    msg.setSource(58927U);
    msg.setSourceEntity(146U);
    msg.setDestination(9188U);
    msg.setDestinationEntity(51U);
    msg.seq = 30056U;
    msg.sys_dst.assign("JRZITIWLGHJCEUBOFXPVLWIADOBAXICUVTLPSKFFVPXMNDMCKPINAAVEXVBQQWF");
    msg.flags = 206U;
    const char tmp_msg_0[] = {95, -111, -13, -65, -26, 113, -39, 67, -126, 119, 70, -64, -108, 22, 78, -120, -83, -93, 92, 54, -92, -37, -19, 70, 15, -92, 16, 66, -31, 87, -29, 124, -29};
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
    msg.setTimeStamp(0.659885439265);
    msg.setSource(64335U);
    msg.setSourceEntity(212U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(201U);
    msg.seq = 15924U;
    msg.sys_dst.assign("PWWYXHMTKMNPAHQONFUFEFQIBIHBIBVBMJTXAMWPDQCHFLGIIQDONZLDTPSYDEXJTAGZCFFKZWETNCABLYLAEFZQUSCRJWNOVJEVJKXOGIQNDUSUENIYHHYYSBTEYOTALGRKDLMH");
    msg.flags = 28U;
    const char tmp_msg_0[] = {-42, -65, 95, -35, 8, -82, -16, 27, 9, 91, 72, -52, -81, -87, -6, 95, 109, 113, -112, 47, -51, 105, -70, -85, 9, 91, 87, 65, -10, -25, -99, -115, -110, -16, -72, 55, 96, 43, -8, -30, -58, 77, -16, 104, -128, -78, 122, 23, -75, -57, -71, -51, 104, -78, 26, 42, 113, 67, 19, -126, -18, 18, -117, -35, 76, -51, 88, -30, 66, -77, -31, -91, 53, -27, -74, -110, 105, -105, -65, -93, 54, 65, 60, 68, -66, 89, 13, 96, 125, 119, 40, 40, -16, -83, 122, 40, -125, 95, 40, 18, 55, -11, 95, -43, -43, -30, 11, 63, -107, 94, -97, 41, 54, 121, 54, -125, 118, -100, -35, -40, -69, -82, 91, -33, -24, -112, -95, -40, 101, -32, -76, 4, 106, -114, 91, -88, 19, 68, 110, 35, 92, 65, -13, 47, 27, 54};
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
    msg.setTimeStamp(0.72216205917);
    msg.setSource(50134U);
    msg.setSourceEntity(219U);
    msg.setDestination(38737U);
    msg.setDestinationEntity(145U);
    msg.seq = 43900U;
    msg.sys_dst.assign("YNGJZWSCJVGCUQTDOIYMTWBCE");
    msg.flags = 25U;
    const char tmp_msg_0[] = {-85, -61, 17, -93, -118, -84, -18, 104, 58, -6, 18, -20, -106};
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
    msg.setTimeStamp(0.458178048689);
    msg.setSource(59464U);
    msg.setSourceEntity(31U);
    msg.setDestination(25162U);
    msg.setDestinationEntity(71U);
    msg.sys_src.assign("TPYXSJXOAJLIWTQVWFBEAQRDYQLHVQDXKGLJ");
    msg.sys_dst.assign("LIWPXXLBSMLNIWHTOJOFTODMVWMYWQJHKENELSHJJQAWMXCJONUZ");
    msg.flags = 176U;
    const char tmp_msg_0[] = {-104, -53, 39, 80, 118, 42, 113, -58, 108, -113, 78, 23, 73, 109, 14, 77, 106, -14, -67, -83, -58, 69, -118, 28, -48, -12, -76, 6, 50, -68, -40, 84, 102, 70, -45, -59, 105, 66, -44, -64, 91, 81, -56, 44, 6, -1, -123, 2, -89, 96, -94, -77, 100, -82, 122, -62, 3, -104};
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
    msg.setTimeStamp(0.407521589904);
    msg.setSource(63753U);
    msg.setSourceEntity(62U);
    msg.setDestination(24155U);
    msg.setDestinationEntity(109U);
    msg.sys_src.assign("YDLDFEKOIMUMYWHIHSGSGVLMZOMBCAPEWLNJCHIGHWTXONXWEPEXFUSUTQOKTXRKOTJBKIPLAREREKLKPPJBOSAAWKHBZNATQGGNDQHDNCVBJCZHCMMPKGEOOITITBZUYJLNBAJAXHMRBFAYWDQCJZGUZQPYWDINXYDXYFSGLDCJIRLPFTSVFQRZYXJHFSUGNVSUFQVUTVEEXRHVWJZMPSCBSNLIZOBVGRDVVFDRYWCFLCWOQKRXYUEMNQZ");
    msg.sys_dst.assign("TUBRXMVXZBLJKYRLNWDKJQQQAQDOUOKDKRKILZHNMMOUVOTHSQSNGFJDSIFHUCBEDQZKMSSSBFVZWVQZDELIPBVWAYCUUCYHEOCAMZWRUSHHHLSCVWW");
    msg.flags = 215U;
    const char tmp_msg_0[] = {90, 55, -110, -27, 39, -23, 60, -52, -56, 81, 118, -11, -110, -70, 67, 17, -1, 38, -50, 11, 53, 49, 12, -70, -108, -123, 24, -96, 27, -101};
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
    msg.setTimeStamp(0.278680570789);
    msg.setSource(51506U);
    msg.setSourceEntity(181U);
    msg.setDestination(45115U);
    msg.setDestinationEntity(148U);
    msg.sys_src.assign("XVJBMFMNIQVSTOSSEOODJKXJHUDYGDTZGDPUCBHHSARNYRLWXGQSUKOOORQUXIPTLNO");
    msg.sys_dst.assign("ELADJFWZUKKNRCJGZWCCENMIPMJMJOWWQVFEQPZDBSKDFEXRESSPXAKAMRKITOSGZUAMCRWYOIGHTANZNYUDTUHYJNAUF");
    msg.flags = 87U;
    const char tmp_msg_0[] = {-61, -22, -8, -100, -79, -97, -128, 20, -3, -5, 111, 97, 34, -78, 56, -91, -21, 5, 121, -50, 6, -52, -122, -107, 19, 65, 62, 84, 92, 46, -40, 104, -106, 33, 23, 96, -102, 82};
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
    msg.setTimeStamp(0.294570514656);
    msg.setSource(50347U);
    msg.setSourceEntity(88U);
    msg.setDestination(22040U);
    msg.setDestinationEntity(128U);
    msg.seq = 46017U;
    msg.value = 13U;
    msg.error.assign("MRVMTSEHDLVPHACE");

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
    msg.setTimeStamp(0.791397661438);
    msg.setSource(484U);
    msg.setSourceEntity(15U);
    msg.setDestination(26012U);
    msg.setDestinationEntity(131U);
    msg.seq = 35893U;
    msg.value = 121U;
    msg.error.assign("JXMSOYIRENNMEYFFHILEQHXQIQKHEWVBNXUYWLCADRNDPHQYTLACYQKRAZFKGDFXHPUBVVCXPCESBVNBEHJVBAOXMOOOVDJTTQCZRSILKTWSYKGMDDBFJQFLDTUBOPFALNTVAEMTXKKMMUZHZHZNFALUUHJIERWQCGIWAAFPZLCGWGCNZVXRPCUTPBLWGRLGNUOWTJJUGKBIYJZYTQISJVSCON");

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
    msg.setTimeStamp(0.212756235007);
    msg.setSource(32964U);
    msg.setSourceEntity(216U);
    msg.setDestination(17964U);
    msg.setDestinationEntity(231U);
    msg.seq = 50848U;
    msg.value = 53U;
    msg.error.assign("SUJVHVFCVWORHFMCKEGYDIUQDGDFYLYCLMJXTTTNROQCJIMIGAVKODXBACHMFEUUYTXGCZPRZXJOSAWKUQSLNFGNOTVEDHWEIXYMFHCWCJPWRXXOAZIPIAVZCZAZSRBANGHYZKFRCUIUOWIAEVNNJPNLLTMYZURUSWBHSYDEATBNLRIDFPEWGBPZLBQMDWDGGVZHMRVQPQLROTMIWHSLPQMJLKJQTKOK");

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
    msg.setTimeStamp(0.192754663331);
    msg.setSource(35673U);
    msg.setSourceEntity(239U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(34U);
    msg.seq = 20396U;
    msg.sys.assign("OPUXBPCPWMDOXRKJKLEBBHAQOFXSWAAFGVCKQGROSEJZSBNDEQLLQEDCJXAZSNNZCITAMRVZSWDUCJGDMNFWSLJHQCIGTBRTFKFCBRKQMLGFYLGMCYMFWNJRPOWLFESVOTHXAKPLNIRUYWIYOTPVYMOIFPDYAIAEMHKUBWZJGXNBZHZHEYJRJKVXEAXNPQEDSTY");
    msg.value = 0.983343766001;

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
    msg.setTimeStamp(0.487351061852);
    msg.setSource(60672U);
    msg.setSourceEntity(92U);
    msg.setDestination(26038U);
    msg.setDestinationEntity(93U);
    msg.seq = 38602U;
    msg.sys.assign("VLMGFYOZSCFWZJEKQODLKRYUAPUNUUUNTZYMIPZESMHDBQCXLVOUHXIELJIQIAOMAVVFCEWQFDSVCRONWXPIPMJWQZRDVSYXZCSMSAOPKMOXRRFDXCHTGUTXLNHSVDZFLEWOBZCKHYRPHWYRLARDABATJFANUMNTBNTBCIYCSJLAUXIQJGCZWSKFEGNBFEGPWHTKYPYBXKSBIGHIVEWTEHWVRJTPMKYQ");
    msg.value = 0.579566936752;

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
    msg.setTimeStamp(0.281470278818);
    msg.setSource(40136U);
    msg.setSourceEntity(76U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(239U);
    msg.seq = 17267U;
    msg.sys.assign("ZJWJEHNSQFQDLLIHKGMXEQNFYHPYJIBOKMCQOMBJXWTAHTPRZXWTUVROCZOGPLOEYGUYNWEBPNCTBSCJFVWUKAVLXLQKPDUBRLADWRMRJLCFUKMOHBRXWKSPECWDFHESZINFPOMVGBHDSANKFMJXWVTJFMUSXUF");
    msg.value = 0.0929653864844;

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
    msg.setTimeStamp(0.191969790824);
    msg.setSource(41440U);
    msg.setSourceEntity(2U);
    msg.setDestination(31623U);
    msg.setDestinationEntity(128U);
    msg.action = 165U;
    msg.longain = 0.269081143188;
    msg.latgain = 0.0402493067283;
    msg.bondthick = 504201283U;
    msg.leadgain = 0.495387508885;
    msg.deconflgain = 0.260694026884;

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
    msg.setTimeStamp(0.75055296167);
    msg.setSource(24788U);
    msg.setSourceEntity(41U);
    msg.setDestination(35667U);
    msg.setDestinationEntity(158U);
    msg.action = 69U;
    msg.longain = 0.733425410903;
    msg.latgain = 0.735784274167;
    msg.bondthick = 2352189053U;
    msg.leadgain = 0.976477245946;
    msg.deconflgain = 0.984473230539;

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
    msg.setTimeStamp(0.399677261544);
    msg.setSource(42578U);
    msg.setSourceEntity(139U);
    msg.setDestination(61049U);
    msg.setDestinationEntity(114U);
    msg.action = 227U;
    msg.longain = 0.406195146227;
    msg.latgain = 0.0768242992382;
    msg.bondthick = 3812309828U;
    msg.leadgain = 0.69353033594;
    msg.deconflgain = 0.985032969544;

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
    msg.setTimeStamp(0.0045834766472);
    msg.setSource(18513U);
    msg.setSourceEntity(237U);
    msg.setDestination(57680U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.827710196373;
    msg.dist_min_abs = 0.762085601575;
    msg.dist_min_mean = 0.245380484896;

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
    msg.setTimeStamp(0.543108847614);
    msg.setSource(46667U);
    msg.setSourceEntity(206U);
    msg.setDestination(55403U);
    msg.setDestinationEntity(113U);
    msg.err_mean = 0.185269716914;
    msg.dist_min_abs = 0.206095605497;
    msg.dist_min_mean = 0.357907428607;

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
    msg.setTimeStamp(0.743861706785);
    msg.setSource(40057U);
    msg.setSourceEntity(145U);
    msg.setDestination(5178U);
    msg.setDestinationEntity(74U);
    msg.err_mean = 0.350019173906;
    msg.dist_min_abs = 0.362755739238;
    msg.dist_min_mean = 0.539834760166;

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
    msg.setTimeStamp(0.803828797975);
    msg.setSource(14034U);
    msg.setSourceEntity(208U);
    msg.setDestination(21968U);
    msg.setDestinationEntity(97U);
    msg.action = 108U;
    msg.lon_gain = 0.33848917156;
    msg.lat_gain = 0.948732071816;
    msg.bond_thick = 0.660406495715;
    msg.lead_gain = 0.642453556058;
    msg.deconfl_gain = 0.989049234182;
    msg.accel_switch_gain = 0.798897575901;
    msg.safe_dist = 0.947154361043;
    msg.deconflict_offset = 0.200817228488;
    msg.accel_safe_margin = 0.224502633026;
    msg.accel_lim_x = 0.760127294616;

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
    msg.setTimeStamp(0.0892006066982);
    msg.setSource(15253U);
    msg.setSourceEntity(166U);
    msg.setDestination(8851U);
    msg.setDestinationEntity(232U);
    msg.action = 150U;
    msg.lon_gain = 0.847418170568;
    msg.lat_gain = 0.540331830919;
    msg.bond_thick = 0.880914205291;
    msg.lead_gain = 0.244846833172;
    msg.deconfl_gain = 0.192899757967;
    msg.accel_switch_gain = 0.368012552001;
    msg.safe_dist = 0.907683682881;
    msg.deconflict_offset = 0.949297618432;
    msg.accel_safe_margin = 0.283440693434;
    msg.accel_lim_x = 0.169824501697;

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
    msg.setTimeStamp(0.272482378809);
    msg.setSource(13633U);
    msg.setSourceEntity(8U);
    msg.setDestination(43137U);
    msg.setDestinationEntity(104U);
    msg.action = 27U;
    msg.lon_gain = 0.195235679817;
    msg.lat_gain = 0.911258269758;
    msg.bond_thick = 0.351974638206;
    msg.lead_gain = 0.756540105729;
    msg.deconfl_gain = 0.716784133316;
    msg.accel_switch_gain = 0.0763608787017;
    msg.safe_dist = 0.15996270501;
    msg.deconflict_offset = 0.840118150424;
    msg.accel_safe_margin = 0.185710948495;
    msg.accel_lim_x = 0.785174668734;

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
    msg.setTimeStamp(0.377988808857);
    msg.setSource(54448U);
    msg.setSourceEntity(166U);
    msg.setDestination(27197U);
    msg.setDestinationEntity(180U);
    msg.type = 177U;
    msg.op = 103U;
    msg.err_mean = 0.288971046224;
    msg.dist_min_abs = 0.716722243009;
    msg.dist_min_mean = 0.814932584967;
    msg.roll_rate_mean = 0.268083282476;
    msg.time = 0.945209686825;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 60U;
    tmp_msg_0.lon_gain = 0.812852673804;
    tmp_msg_0.lat_gain = 0.292053794734;
    tmp_msg_0.bond_thick = 0.890366777437;
    tmp_msg_0.lead_gain = 0.508817232903;
    tmp_msg_0.deconfl_gain = 0.363779554732;
    tmp_msg_0.accel_switch_gain = 0.373920481807;
    tmp_msg_0.safe_dist = 0.906520492798;
    tmp_msg_0.deconflict_offset = 0.451680689516;
    tmp_msg_0.accel_safe_margin = 0.398258644867;
    tmp_msg_0.accel_lim_x = 0.00146646643611;
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
    msg.setTimeStamp(0.615717164977);
    msg.setSource(27685U);
    msg.setSourceEntity(248U);
    msg.setDestination(25728U);
    msg.setDestinationEntity(100U);
    msg.type = 163U;
    msg.op = 32U;
    msg.err_mean = 0.942257643971;
    msg.dist_min_abs = 0.684906056502;
    msg.dist_min_mean = 0.948759840286;
    msg.roll_rate_mean = 0.633234359305;
    msg.time = 0.512696061003;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 25U;
    tmp_msg_0.lon_gain = 0.761219926182;
    tmp_msg_0.lat_gain = 0.842021873109;
    tmp_msg_0.bond_thick = 0.935122417977;
    tmp_msg_0.lead_gain = 0.637879563399;
    tmp_msg_0.deconfl_gain = 0.0478606811176;
    tmp_msg_0.accel_switch_gain = 0.648899377123;
    tmp_msg_0.safe_dist = 0.975717403331;
    tmp_msg_0.deconflict_offset = 0.950872426517;
    tmp_msg_0.accel_safe_margin = 0.250750586197;
    tmp_msg_0.accel_lim_x = 0.0803955129104;
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
    msg.setTimeStamp(0.41337207157);
    msg.setSource(25090U);
    msg.setSourceEntity(108U);
    msg.setDestination(44660U);
    msg.setDestinationEntity(32U);
    msg.type = 244U;
    msg.op = 117U;
    msg.err_mean = 0.0299758106786;
    msg.dist_min_abs = 0.761134883939;
    msg.dist_min_mean = 0.627079086869;
    msg.roll_rate_mean = 0.599823976282;
    msg.time = 0.24139392319;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 199U;
    tmp_msg_0.lon_gain = 0.12292574183;
    tmp_msg_0.lat_gain = 0.749572490074;
    tmp_msg_0.bond_thick = 0.346106610618;
    tmp_msg_0.lead_gain = 0.63141263905;
    tmp_msg_0.deconfl_gain = 0.0256685920263;
    tmp_msg_0.accel_switch_gain = 0.241756682708;
    tmp_msg_0.safe_dist = 0.750032211485;
    tmp_msg_0.deconflict_offset = 0.346456415477;
    tmp_msg_0.accel_safe_margin = 0.130451960791;
    tmp_msg_0.accel_lim_x = 0.337465377172;
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
    msg.setTimeStamp(0.576773846485);
    msg.setSource(13135U);
    msg.setSourceEntity(203U);
    msg.setDestination(44025U);
    msg.setDestinationEntity(98U);
    msg.uid = 220U;
    msg.frag_number = 224U;
    msg.num_frags = 12U;
    const char tmp_msg_0[] = {35, -113, -68, -79, -44, -92, 74, 113, 87, 34, 20, -46, -32, 83, 73, 17, 63, -78, 87, 104, -27, 100, 50, 48, -105, 106, -58, 99, 28, 104, -96, 71, 19, -15, 25, -77, 69, 44, -31, -17, 100, -29, 85, 113, 34, -49, -1, -50, 38, -71, -71, 40, 18, -113, 9, 114, 34, 51, 48, 11, -122, -76, -29, -12, -15, 84, 101, 43, 4, 55, 34, 121, 58, -73, -104, -128, 94, -61, 69, -96, -111, -49, 45, 15, 61, 34, 61, 77, -119, 5, -39, -84, 22, -57, 121, 73, -1, 77, -44, -70, 19, -64, 39, -88, -114, -5, -54, 75, -82, 90, -5};
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
    msg.setTimeStamp(0.980037686497);
    msg.setSource(48223U);
    msg.setSourceEntity(79U);
    msg.setDestination(43857U);
    msg.setDestinationEntity(28U);
    msg.uid = 119U;
    msg.frag_number = 110U;
    msg.num_frags = 60U;
    const char tmp_msg_0[] = {81, 65, -91, -74, -63, -124, -38, -88, 118, 86, -35, 80, 87, 18, 119, -63, 27, 43, -8, -113, -86, -59, 106, -73, 72, -56, -60, -10, 14, -97, -31, -107, 2, -99, 54, -82, -122, -7, 28, -109, 45, 37, 35, -53, 62, -40, 27, -63, 65, -24, 115, 101, 100, -25, 24, -113, -76, 13, 119, 37, 13, -10, -15, 43, 87, -20, 69, 3, 126, -64, -105, 30, -51};
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
    msg.setTimeStamp(0.0633574091905);
    msg.setSource(54099U);
    msg.setSourceEntity(124U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(16U);
    msg.uid = 244U;
    msg.frag_number = 42U;
    msg.num_frags = 124U;
    const char tmp_msg_0[] = {53, -40, -90, -72, -63, -15, 85, -4, 27, -87, 110, -67, 70, -89, 60, 62, 94, -21, 79, -92, -69, -80, 105, -26, 32, 67, 37, 35, -58, 90, -94, -111, 124, 44, -43, 119, 125, -80, -32, -2};
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
    msg.setTimeStamp(0.373788935562);
    msg.setSource(61928U);
    msg.setSourceEntity(93U);
    msg.setDestination(52901U);
    msg.setDestinationEntity(252U);
    msg.content_type.assign("XXBEUEVBIDBNLZNCPRNWONWWXRQQQGQVWZSWOULFRQWSCHGCTCSVYRQUUJNRUENZMGYLJAIKRCWZJOKPLDTAYCHDUPHEMFKSDUZGCUTGSFOELYTVIYKPXAJMTEOKIKNFDSAPLXBAGXPXINCKZMYASZOJNJBZYPHKYTBMZCRPHPYGJQSMYB");
    const char tmp_msg_0[] = {-39, 115, -52, -65, 118, 51, 42, 38, 39, 21, -42, 41, 2, -24, 112, 74, -49, 1, -48, -42, -46, -123, 80, -60, -128, -51, 66, 57, -50, -61, -27, 15, -49, 52, 21, 93, 9, -111, 92, 65, 66, -31, -37, 107, -105, -113, -117, 44, -50, -42, -32, 41, -26, -46, -27, 99, 3, -35, -93, 73, -58, 39, -26, -75, -114, 72, -38, -118, 32, -7, -77, -81, -84, 103, 14, -77, -12, -118, 8, -14, 46, 37, -112, 124, 110, 66, -101, -52, -84, 3, -22, 53, 6, 26, 83, -125, -114, 114, -69, 103, 26, -69, -31, 114, 122, -94, 115, 72, -53, -108, -20, -109, -29, 51, -58, 101, -72, 97, -40, 120, -2, 47, 110, -70, 11, 123, 92, -51, 25, -63, 27, 53, 87, 12, 9, -115, 8, -16, 93, -96, -103, -106, -24, -23, 21, 36, -114, -16, 66, -9, 88, 31, 40, -68, -109, 90, -85, 50, -50, -107, 14, 119, -119, 13, 100, 126, 51, -89, 42, -75, 46, 35, -91, 36, 28, -112, 90, 93, -12, 82, -32, 118, 90, 125, 1, 83, -30, 89, -121, 92, 26, 60, 8, 8, -111, -89, -89, -81, -116, 56};
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
    msg.setTimeStamp(0.227271211085);
    msg.setSource(45473U);
    msg.setSourceEntity(173U);
    msg.setDestination(25987U);
    msg.setDestinationEntity(170U);
    msg.content_type.assign("ULKEVDREAQOBHJVZALXTTDJKOPZEVEMEQWWKFCAX");
    const char tmp_msg_0[] = {-74, 2, 95, -72, -65, -53, 9, -98, 98, -31, -70, 31, -126, 77, 48, 98, 126, -33, -12, -125, 60, -85, 22, 25, 38, 70, -43, 15, 84, 20, -11, 17, 35, -2, -93, 84, 9, 51, 24, 112, -46, -128, -102, -27, 33, -90, -36, -41, -91, -41, -48, -104, -106, 119, 92, 70, 62, -93, 50, 4, 117, -83, -114, 28, 111, 1, -15, -21, -109, -119, 21, 75, -1, -124, 122, -115, 20, -118, 91, -50, 105, 58, -65, -19, -17, -98, -83, 17, -70, 42, 54, 46, 40, 57, 43, -61, -77, -36, 122, 32, 46, -103, -112, -62, -68, -66, -91, -75, 10, -82, 61, 23};
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
    msg.setTimeStamp(0.0274409123349);
    msg.setSource(17971U);
    msg.setSourceEntity(242U);
    msg.setDestination(35318U);
    msg.setDestinationEntity(162U);
    msg.content_type.assign("MBPTQDBNYEFDAPNGQELCJYCKZSTXIMDHHXSGUADXJBAIERYYQNTRJCKUDXAKPLUOCWGUJKICPKFLHEDAXCMGZWINPRFQMHISKTKRSWONXQMGJVTODANFUPYEPDWSVOGRQXCNABLVYCJXCIJWXFFSURECNZBPULZPZLMQZKBBHZLTHWRXOHO");
    const char tmp_msg_0[] = {-25, 25, 80, -72, -65, 97, -25, 14, -90, -103, 77, 36, 68, 82, -12, 125, 73, -19, 102, 35, -52, 2, 92, -127, 32, -110, -32, 48, -109, -89, 92, -86, 14, -114, -47, 66, -13, -28, -18, -4, 69, -53, 23, -127, 61, 120, 74, 86, 58, -4, 103, -128, -44, -42, -61, -110, 83, -118, 116, -70, -9, -64, 66, 84, 97, 108, 60, -128, -91, 23, -37, -108, 30, -75, 1, -110, 67, -33, -81, 60, 53, 76, -112, 111, 35, 14, -32, 123, -15, 117, 91, 85, -25, -60, -70, -36, -119, 19, -23, 25, 96, -113, -50, 101, 52, 93, 1, 33, -119};
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
    msg.setTimeStamp(0.430785574256);
    msg.setSource(19277U);
    msg.setSourceEntity(26U);
    msg.setDestination(44393U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.152771400116);
    msg.setSource(10890U);
    msg.setSourceEntity(246U);
    msg.setDestination(9974U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.650984587833);
    msg.setSource(17806U);
    msg.setSourceEntity(42U);
    msg.setDestination(35348U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.110909827029);
    msg.setSource(26924U);
    msg.setSourceEntity(39U);
    msg.setDestination(38046U);
    msg.setDestinationEntity(144U);
    msg.target = 48334U;
    msg.bearing = 0.580777513134;
    msg.elevation = 0.112545179861;

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
    msg.setTimeStamp(0.741889487717);
    msg.setSource(53682U);
    msg.setSourceEntity(239U);
    msg.setDestination(5495U);
    msg.setDestinationEntity(51U);
    msg.target = 43352U;
    msg.bearing = 0.385144147656;
    msg.elevation = 0.0932918222894;

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
    msg.setTimeStamp(0.0826011991239);
    msg.setSource(34252U);
    msg.setSourceEntity(52U);
    msg.setDestination(4373U);
    msg.setDestinationEntity(80U);
    msg.target = 45981U;
    msg.bearing = 0.500154088482;
    msg.elevation = 0.557810124719;

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
    msg.setTimeStamp(0.360945039778);
    msg.setSource(9183U);
    msg.setSourceEntity(194U);
    msg.setDestination(27812U);
    msg.setDestinationEntity(249U);
    msg.target = 60441U;
    msg.x = 0.03913959314;
    msg.y = 0.431695392163;
    msg.z = 0.207454115174;

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
    msg.setTimeStamp(0.712186001083);
    msg.setSource(8501U);
    msg.setSourceEntity(46U);
    msg.setDestination(21340U);
    msg.setDestinationEntity(245U);
    msg.target = 25649U;
    msg.x = 0.908905118266;
    msg.y = 0.475731766219;
    msg.z = 0.322539220247;

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
    msg.setTimeStamp(0.215603627763);
    msg.setSource(40909U);
    msg.setSourceEntity(215U);
    msg.setDestination(14075U);
    msg.setDestinationEntity(123U);
    msg.target = 14110U;
    msg.x = 0.885341990503;
    msg.y = 0.685443417706;
    msg.z = 0.825860864374;

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
    msg.setTimeStamp(0.478860808643);
    msg.setSource(3031U);
    msg.setSourceEntity(154U);
    msg.setDestination(55446U);
    msg.setDestinationEntity(242U);
    msg.target = 23696U;
    msg.lat = 0.286405277863;
    msg.lon = 0.174504269357;
    msg.z_units = 119U;
    msg.z = 0.858801827517;

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
    msg.setTimeStamp(0.199348990555);
    msg.setSource(9348U);
    msg.setSourceEntity(57U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(123U);
    msg.target = 17348U;
    msg.lat = 0.205864235098;
    msg.lon = 0.858526344649;
    msg.z_units = 140U;
    msg.z = 0.784467591595;

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
    msg.setTimeStamp(0.635170936003);
    msg.setSource(23762U);
    msg.setSourceEntity(86U);
    msg.setDestination(4931U);
    msg.setDestinationEntity(34U);
    msg.target = 13311U;
    msg.lat = 0.661794344308;
    msg.lon = 0.597238738379;
    msg.z_units = 142U;
    msg.z = 0.24975355139;

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
    msg.setTimeStamp(0.26556569022);
    msg.setSource(42652U);
    msg.setSourceEntity(160U);
    msg.setDestination(32391U);
    msg.setDestinationEntity(168U);
    msg.locale.assign("TSDSPCUJGGNEODPSMFLNTEQLPWLIYXGZXHSRLZUCRKVRECHLXQTZGGSUNXVTWKZIGEEIQUOVFYWAJXTAOOQRVKOZMLNBRLVWWTBTD");
    const char tmp_msg_0[] = {44, -33, -47, -68, 34, 70, -78, -66, 9, 88, -72, 80, 92, -45, 92, 71, -55, -36, -55, 93, 82, -33, -51, -111, 92, 25, -89, 120, -125, 45, -88, 114, -10, 110, 108, 14, -113, 101, 36, -84, 113, 24, 37, 104, -41, 86, 41, -68, -82, 43, -31, 121, 70, -113, 16, -84, -14, 12, 109, -120, 101, 91, 126, 52, -102, 60, 15, -4, 65, 7, 63, 7, -100, 49, 62, 18, -39, -104, -42, 46, 24, -54, 50, 76, -36, 80, -1, 90, 110, -14, 125, 121, -62, -68, -114, -116, 77, 93, 26, -128, 118, 111, -40, -97, 49, -54, 2, 0, -126, 16, -120, -118, 59, 83, 43, -9, -117, 58, -104, 35, 83, -36, 70, 40, 97, -85, -9, 51, -48, 105, -128, 47, -8, 67, -91, 5, -78, -117, -74, 10, 36, -50, -33, -11, 111, 9, -126, 71, -73, 68, -69, 87, -75};
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
    msg.setTimeStamp(0.887166625482);
    msg.setSource(45435U);
    msg.setSourceEntity(141U);
    msg.setDestination(49553U);
    msg.setDestinationEntity(151U);
    msg.locale.assign("MJBVDXVOVARUGIQSEAHSHIIOCYPNOQLUXRUQOWZXCLCZXKUEBYYFSHZUTAALMQWKTRPYNBIQGIBTYINETU");
    const char tmp_msg_0[] = {82, 5, 53, 85, -49, -117, 52, -10, 68, 35, 97, 39, -74, 13, 49, -116, -97, -51, -126, -16, -16, 104, -2, -116, -85, 83, 32, 43, 35, -54, -19, -24, 12, 102, -75, 17, 5, 56, 35, -54, 90, -36, -60, 94, 14, -23, -125, -8, 5, 56, -30, 81, 82, 126, -7, 1, -57, 94, -119, -106, -23, 53, 32, 88, 87, 106, 9, -127, 74, -40, -90, -41, 54, 120, 9, -99, -4, -119, 26, -123};
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
    msg.setTimeStamp(0.105551967645);
    msg.setSource(40964U);
    msg.setSourceEntity(95U);
    msg.setDestination(46059U);
    msg.setDestinationEntity(135U);
    msg.locale.assign("WMTDGZFNNQSYPQASZBZMMXCZLGKYTTSISQYPKCVJREZOMLOECURUEWQLLFZLKHSHYSVGXYFRFYYIORTLBDDLTWPKGVHGEXMDCCHOKIZEONGWIMUUDCUQSPXHNWTMCWTKQHDLVCIDJPTBEHGGRPEFGWFDAFRPNNBNWABAKVNJNCDTAKKSJPOXYHRKAURUB");
    const char tmp_msg_0[] = {-22, 56, -86, 76, 71, 65, -10, -46, 77, -48, 119, 65, -37, -85, 46, 93, -40, -14, 71, -32, 17, 52, 94, -38, 70, 87, -101, -120, -64, 47, -1, 38, -38, 27, -17, 124, -36, 50};
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
    msg.setTimeStamp(0.855271320481);
    msg.setSource(5812U);
    msg.setSourceEntity(202U);
    msg.setDestination(64352U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.751024435157);
    msg.setSource(56024U);
    msg.setSourceEntity(45U);
    msg.setDestination(59864U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.621900995194);
    msg.setSource(54968U);
    msg.setSourceEntity(80U);
    msg.setDestination(22901U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.144551119246);
    msg.setSource(35404U);
    msg.setSourceEntity(106U);
    msg.setDestination(16718U);
    msg.setDestinationEntity(196U);
    msg.camid = 14U;
    msg.x = 22589U;
    msg.y = 28361U;

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
    msg.setTimeStamp(0.38857650082);
    msg.setSource(5273U);
    msg.setSourceEntity(198U);
    msg.setDestination(2477U);
    msg.setDestinationEntity(242U);
    msg.camid = 224U;
    msg.x = 8650U;
    msg.y = 48449U;

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
    msg.setTimeStamp(0.877049995224);
    msg.setSource(15823U);
    msg.setSourceEntity(227U);
    msg.setDestination(28406U);
    msg.setDestinationEntity(156U);
    msg.camid = 21U;
    msg.x = 26083U;
    msg.y = 54494U;

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
    msg.setTimeStamp(0.342189225178);
    msg.setSource(15869U);
    msg.setSourceEntity(110U);
    msg.setDestination(36851U);
    msg.setDestinationEntity(208U);
    msg.camid = 114U;
    msg.x = 36164U;
    msg.y = 9946U;

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
    msg.setTimeStamp(0.378014210708);
    msg.setSource(15190U);
    msg.setSourceEntity(22U);
    msg.setDestination(22762U);
    msg.setDestinationEntity(6U);
    msg.camid = 129U;
    msg.x = 11317U;
    msg.y = 12761U;

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
    msg.setTimeStamp(0.851179340798);
    msg.setSource(17883U);
    msg.setSourceEntity(135U);
    msg.setDestination(58603U);
    msg.setDestinationEntity(5U);
    msg.camid = 83U;
    msg.x = 10631U;
    msg.y = 6765U;

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
    msg.setTimeStamp(0.135283719225);
    msg.setSource(61791U);
    msg.setSourceEntity(89U);
    msg.setDestination(34573U);
    msg.setDestinationEntity(31U);
    msg.tracking = 225U;
    msg.lat = 0.26480089641;
    msg.lon = 0.303826139236;
    msg.x = 0.26021431129;
    msg.y = 0.814518324432;
    msg.z = 0.888693134763;

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
    msg.setTimeStamp(0.13797693338);
    msg.setSource(5604U);
    msg.setSourceEntity(196U);
    msg.setDestination(58697U);
    msg.setDestinationEntity(113U);
    msg.tracking = 58U;
    msg.lat = 0.26516381974;
    msg.lon = 0.216894082883;
    msg.x = 0.804861512253;
    msg.y = 0.938334650565;
    msg.z = 0.101159942706;

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
    msg.setTimeStamp(0.367657289204);
    msg.setSource(41741U);
    msg.setSourceEntity(175U);
    msg.setDestination(19358U);
    msg.setDestinationEntity(175U);
    msg.tracking = 242U;
    msg.lat = 0.00753462515654;
    msg.lon = 0.460239109483;
    msg.x = 0.11649945372;
    msg.y = 0.405002509959;
    msg.z = 0.749563806344;

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
    msg.setTimeStamp(0.619814036503);
    msg.setSource(47948U);
    msg.setSourceEntity(103U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(177U);
    msg.target.assign("MBSGVMCHXUNMWUTFIJTIMXFEKDDGZOEFNCKCCDZJXKYMOOJCLMFJHAZGNZBXPBSBXLGJTAGOPEHYRFAN");
    msg.lbearing = 0.234726922138;
    msg.lelevation = 0.0975449603923;
    msg.bearing = 0.864629196389;
    msg.elevation = 0.025001417967;
    msg.phi = 0.288840629314;
    msg.theta = 0.68992396619;
    msg.psi = 0.622734302479;
    msg.accuracy = 0.0761954313347;

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
    msg.setTimeStamp(0.695828316477);
    msg.setSource(16409U);
    msg.setSourceEntity(128U);
    msg.setDestination(18568U);
    msg.setDestinationEntity(39U);
    msg.target.assign("DLYWZXYNEGYDEOHOHPEUUCEXXUVRLAMSYLEJWSIISVJQTEQAMFZKTQFPAOPQOBBBUIJZBVNTOCQCATIBBIAWRGXFBKNIBGEQWSZPMDRSXAQYNHIQLIKDNWVFZPGDRPUTKLZFHSAMXLCWJWQSUOSOGNMPWUZBFYJLRZCCKZRVCGLCHDBOMUTFDZHVGHTGGJVTIEJIXVYJAESTYQMRPWK");
    msg.lbearing = 0.248461805686;
    msg.lelevation = 0.154570535142;
    msg.bearing = 0.347233144992;
    msg.elevation = 0.655879683795;
    msg.phi = 0.792528763815;
    msg.theta = 0.880945895692;
    msg.psi = 0.898176577105;
    msg.accuracy = 0.272466564058;

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
    msg.setTimeStamp(0.946399089878);
    msg.setSource(29351U);
    msg.setSourceEntity(200U);
    msg.setDestination(46925U);
    msg.setDestinationEntity(173U);
    msg.target.assign("LIAUQIZNLQYNLAJYLECGGNJLXCRSVUAVBQOGGNPJCEIBTJYPBJZBFAYYNPLIAGKYAKZVGUESFUTAUYORTUIPLHFLUYKMDIIPUDZJOZRVFMWWVCVWAHFXKHPFHSSNCMDISVEXQGHGRDTQRCSNKXMRWHDQELNRGBPWYWCFWADTXMJPBSOWCKBJZCEEQFDIXOQPXULZOTWXMKXQFKANSDZU");
    msg.lbearing = 0.360489124645;
    msg.lelevation = 0.444364985848;
    msg.bearing = 0.169464535716;
    msg.elevation = 0.236363629677;
    msg.phi = 0.842802176386;
    msg.theta = 0.13970190835;
    msg.psi = 0.767209973481;
    msg.accuracy = 0.919507563632;

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
    msg.setTimeStamp(0.961604244279);
    msg.setSource(51569U);
    msg.setSourceEntity(195U);
    msg.setDestination(45948U);
    msg.setDestinationEntity(105U);
    msg.target.assign("AXNOYJUZDXXUSWBRLYRTNPOCQJJDSFFCAXJMYWFZMTROYKBIJGUPQWWRNCDKDIGOLSKPTEAMPVBTSPNPHOAUAHLGMGGNWKCCMAXGXFHYQKMTPWEVSWEXPFHEIETKRUVXWJRCNZVXRKIBIISMZUCEIFISYJBAKYVAWGDYLOQVJIUANJDXDFZCQBBYICPNUWHNOLSVGSQJQTSHTFVTULLQHQVLDELEBRHAYOZDOK");
    msg.x = 0.566734770682;
    msg.y = 0.628650191287;
    msg.z = 0.316785583233;
    msg.n = 0.393861140879;
    msg.e = 0.239335530654;
    msg.d = 0.57229816912;
    msg.phi = 0.834401445962;
    msg.theta = 0.325875839015;
    msg.psi = 0.800630540621;
    msg.accuracy = 0.0853742740365;

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
    msg.setTimeStamp(0.290545787001);
    msg.setSource(15918U);
    msg.setSourceEntity(63U);
    msg.setDestination(15332U);
    msg.setDestinationEntity(14U);
    msg.target.assign("EBPSFXTKWQQGFRHAOOBUYZZZEIEGYZEYMAWVKDYXIBDUXXDUOXGHNY");
    msg.x = 0.521543709537;
    msg.y = 0.722288562697;
    msg.z = 0.597216531043;
    msg.n = 0.549772819593;
    msg.e = 0.351095377249;
    msg.d = 0.394076367569;
    msg.phi = 0.923212652352;
    msg.theta = 0.227824143075;
    msg.psi = 0.615232728017;
    msg.accuracy = 0.366065057782;

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
    msg.setTimeStamp(0.0851978758892);
    msg.setSource(7646U);
    msg.setSourceEntity(101U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(192U);
    msg.target.assign("TYJAOMCHWVMDPBWIHYGXODPXSIDPCWIVYKYSUJHIWAXRTDGNNJVZCJQNDPKHUWZHIXVLWXKHRQEEOXGEFOMZAMELUKYFRVAP");
    msg.x = 0.701090326417;
    msg.y = 0.245590799961;
    msg.z = 0.406754958674;
    msg.n = 0.885041927567;
    msg.e = 0.25338618662;
    msg.d = 0.311663613431;
    msg.phi = 0.414932250716;
    msg.theta = 0.380764355747;
    msg.psi = 0.972211714314;
    msg.accuracy = 0.690528205181;

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
    msg.setTimeStamp(0.353214448775);
    msg.setSource(33472U);
    msg.setSourceEntity(95U);
    msg.setDestination(26042U);
    msg.setDestinationEntity(100U);
    msg.target.assign("GSOYKAJGUQKXJNZCFSIHCUICDBHQHAFPSNRBXZHFMHFXKUKRNAWBRQKSUVZKLEGGWNPPNWSQLTMMWPBTGQQXOZSYGNMUOSYAMWYMOTLRZIEUZWEGQIOVBDFDTYYOZPYVOAMWCEOPDFLAQVHYJRKDGIXBJJXFFELFYDNXKNCEBXEORKIJTMIZSCZUEDRVQGXLXCHTHATIRVHUWCLTIJETAB");
    msg.lat = 0.132249088769;
    msg.lon = 0.385156682366;
    msg.z_units = 204U;
    msg.z = 0.778004435773;
    msg.accuracy = 0.581394322997;

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
    msg.setTimeStamp(0.400891739966);
    msg.setSource(12442U);
    msg.setSourceEntity(146U);
    msg.setDestination(38016U);
    msg.setDestinationEntity(26U);
    msg.target.assign("XWBYMJBHGTDRVPPUOZGBQPUIADWLNJDLBDUARFYWXBHNXCCPJGFSNGQAIENRTKKGZTEYAHRXXIHXWQWPYCTFZIVKRWOSNLNV");
    msg.lat = 0.650749893037;
    msg.lon = 0.352370741431;
    msg.z_units = 207U;
    msg.z = 0.0852840032988;
    msg.accuracy = 0.265248325662;

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
    msg.setTimeStamp(0.0145359670419);
    msg.setSource(18224U);
    msg.setSourceEntity(127U);
    msg.setDestination(33860U);
    msg.setDestinationEntity(54U);
    msg.target.assign("LSRZGRCOJRTUFIEFFSNVTENPQYAFCDPSOFTMQPCBKBPFGXFTKMTUDVSLOFSRJBCKUJXSNDMLTVQZQTXQHWKRPASSGVBHNNJIVGTGYIQMZMBOVKBXROJZCJYMDGEZDLCEJMTWZLWNXCJDILWPYVBRNJWOAHWIXWIEZMRSGKPCKZVDDX");
    msg.lat = 0.433633196961;
    msg.lon = 0.761749058871;
    msg.z_units = 235U;
    msg.z = 0.891634708574;
    msg.accuracy = 0.690111304701;

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

  return test.getReturnValue();
}
