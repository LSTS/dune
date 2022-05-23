//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 178dfd0b52bf8c21b369e36600d2af46                            *
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
    msg.setTimeStamp(0.0356011678824);
    msg.setSource(25633U);
    msg.setSourceEntity(215U);
    msg.setDestination(11028U);
    msg.setDestinationEntity(198U);
    msg.state = 74U;
    msg.flags = 40U;
    msg.description.assign("KDGXCYJPJGZEXCHSAKREVKLBOZEXLHCYDDXSJVHJUSINVEAIEFZDXACTENVFTWAFFDBUDK");

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
    msg.setTimeStamp(0.639153539405);
    msg.setSource(59400U);
    msg.setSourceEntity(153U);
    msg.setDestination(20687U);
    msg.setDestinationEntity(119U);
    msg.state = 66U;
    msg.flags = 220U;
    msg.description.assign("VUOBHUYPBGGLUXWNGJCVCINXHDUNAWILARYNSJLMZKTXRYKSDDALECCXMAMWLESGYGZITNWKGAZZNTFOTJVOQIQFPSKRPYBBDZOULTEGIPTMLXUHAEOOENSDVOPFQASYLSJVAEISQEMXQHYOGCLOZYJPSFRMUYBUTJEMHXTIJDZPIRBWJFHIOBBRJFCKTZMHDPACMCAKRBFNRXIRXWWMGFCSFH");

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
    msg.setTimeStamp(0.84555597285);
    msg.setSource(59307U);
    msg.setSourceEntity(180U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(48U);
    msg.state = 146U;
    msg.flags = 169U;
    msg.description.assign("HSQCEDZUVOBGWCNLILWBXQELHJROEWQNYLRONKYQVPFDSXXIMJFLCMTBCILZRDJPEPJTBMCMWWZYIKKYFIBKTLNDHUE");

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
    msg.setTimeStamp(0.0318152043483);
    msg.setSource(58405U);
    msg.setSourceEntity(128U);
    msg.setDestination(13279U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.346320275886);
    msg.setSource(47552U);
    msg.setSourceEntity(48U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.548988923781);
    msg.setSource(61298U);
    msg.setSourceEntity(0U);
    msg.setDestination(64102U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.892711264345);
    msg.setSource(49515U);
    msg.setSourceEntity(185U);
    msg.setDestination(58913U);
    msg.setDestinationEntity(240U);
    msg.id = 136U;
    msg.label.assign("ZZHPWWCKYUWKQFDWBHGPLTFVITTZLIPHYPDIYHBBZSMIXGOSAHRMNIQTXHJXPFGNYXNSSBKMCOTEDVJOASEQMUIZLOTOUDSQXCKNEMMBQMUXWCWBATKIUYNCKDCDMUNVDQFSLKNXAQETADIJJRLVBYIJSGWSHYGPGFHLEPQACWOYUQRCGEFFHZWRJPJN");
    msg.component.assign("ZYSWFHKYJWPAWUGMHDQWRNRNGUFLYWHUXNITOYLNYKIG");
    msg.act_time = 23196U;
    msg.deact_time = 46965U;

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
    msg.setTimeStamp(0.994450549797);
    msg.setSource(61952U);
    msg.setSourceEntity(65U);
    msg.setDestination(37335U);
    msg.setDestinationEntity(169U);
    msg.id = 123U;
    msg.label.assign("NXLABVUKZMCOKSYAECWOWQIVHAFOJQRNPLTIFWADTSTEUXOFBHSKTQLWMFNAGKRRZJZZIQBEGESQWDPIXYCMXHKLGBEIZOZCJPEKJOYGMSVWLLKVWRSLEYZDUPADBGOUZZBKRYHYSAIUWLSOTZTIVNEMYSBSCPUDYOVMNTMIXCHRRPNIFTWICQHQGRNGYBFUPEKDNEVNLMDTGQXGWLGMDAQVU");
    msg.component.assign("BSXBVVOFBEBDRWGRFOGPIVRTTRWTVBKYCWJMJMAAEZYTUWLUKPNGCOLGFQFBYNXQZXIPZXCCFLCHFOURLZDTSVHZNDZMTUJJYHLYQQKVKOIAEDOFQRRNJPSDXPSHMPDOWCKRCBSAWWSIAKRXYMTVRZHWFNKVDDFLETBHUFAXMSQKZAUAGIPLCYTSWGLMNLJOZNJCJNPUYIOKQKEQAAMCBETPIGUVNOYPQJSZMDVLEBIGHSXJNQEWEIXUE");
    msg.act_time = 16304U;
    msg.deact_time = 56288U;

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
    msg.setTimeStamp(0.395380448528);
    msg.setSource(64237U);
    msg.setSourceEntity(114U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(160U);
    msg.id = 121U;
    msg.label.assign("NBZKZQVPCBSFZWZVGJRTJIXN");
    msg.component.assign("PAIVQGCSUAUCRQTBISZYUUQRNGOTUBCCYMKIJFULRCQUTGZSKZPPYOLVXJWBJHMJQAEAXACXLHPEFPZRFVYDXMMMYBKSNKFBZDHGTBXXSDVJNVHSDEBADQZMTGNVWNLCJJILPRHTGHGBFEKUGJWDEJCAZMSYZFWQOXF");
    msg.act_time = 19001U;
    msg.deact_time = 25619U;

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
    msg.setTimeStamp(0.170760163779);
    msg.setSource(16586U);
    msg.setSourceEntity(75U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(48U);
    msg.id = 117U;

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
    msg.setTimeStamp(0.112785248625);
    msg.setSource(25104U);
    msg.setSourceEntity(10U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(97U);
    msg.id = 145U;

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
    msg.setTimeStamp(0.858674884501);
    msg.setSource(34055U);
    msg.setSourceEntity(162U);
    msg.setDestination(18424U);
    msg.setDestinationEntity(94U);
    msg.id = 240U;

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
    msg.setTimeStamp(0.731484223753);
    msg.setSource(21808U);
    msg.setSourceEntity(254U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(138U);
    msg.op = 54U;
    msg.list.assign("JDGBPHPNISVVHDXZFGYFPLEHKKTCTIQLSDBPUWYXKXVDUZVUHXVLMYHKYFADWAHHUEUMABZQWNK");

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
    msg.setTimeStamp(0.82362186188);
    msg.setSource(41127U);
    msg.setSourceEntity(105U);
    msg.setDestination(38049U);
    msg.setDestinationEntity(122U);
    msg.op = 181U;
    msg.list.assign("HGJPDZKHHFRPCZPIULZOWXQVTSGQFPLSGMDZFWRQFLYQQYUKEBKGFTYAOGODJIGSZDSULORAQUMOADWWOTYJCQIEGVUYETEUUOIPIWCNSXHJSTXNIDXPXTEKWQECOBLJJGJXKBANVTZPHCYLBDUJACMHRJNNUQZVEKYMHSMLRXWBIFFTOJZKSSMNXBTUANCVHGFZECMGFTBEDHNRBIIRVYRBXEDLKLRANKBPVXVCAYPSVKWYFCOMQLWMD");

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
    msg.setTimeStamp(0.138707287014);
    msg.setSource(29418U);
    msg.setSourceEntity(89U);
    msg.setDestination(31687U);
    msg.setDestinationEntity(227U);
    msg.op = 70U;
    msg.list.assign("SYWLFMRUYVTYERWVXXAOZSEUZPLRBTRZIZAQKVVZGQPPJNRETNYYAXQLMENJXVKBZCSWFIDANBTIUMAJEGHQZENFWFOLKLWGCSGPQTKYAEESY");

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
    msg.setTimeStamp(0.616284747902);
    msg.setSource(13398U);
    msg.setSourceEntity(157U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(181U);
    msg.value = 5U;

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
    msg.setTimeStamp(0.0432942958018);
    msg.setSource(50814U);
    msg.setSourceEntity(122U);
    msg.setDestination(27630U);
    msg.setDestinationEntity(190U);
    msg.value = 140U;

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
    msg.setTimeStamp(0.833080964701);
    msg.setSource(7723U);
    msg.setSourceEntity(201U);
    msg.setDestination(5096U);
    msg.setDestinationEntity(209U);
    msg.value = 112U;

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
    msg.setTimeStamp(0.486876139983);
    msg.setSource(44136U);
    msg.setSourceEntity(177U);
    msg.setDestination(62956U);
    msg.setDestinationEntity(76U);
    msg.consumer.assign("KWPAVTFSCVRAUIMDZBZUSQMIQUUCOIAHXTGVJMLAFHXQCTXOAPUQPRFMNAHIXJAQRRUIFWMNFXMWDOUBEKRVBYRZZETYXMKJVXOTOEIOIDUKLXECXHAWJVPGJZWJWKTGISZZLJPSDEBCSWLYEGVDYBKOQQGUHGYLFWTDDLOHTNTQIWCVNYSYRHJCRTPGBC");
    msg.message_id = 51149U;

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
    msg.setTimeStamp(0.875963338718);
    msg.setSource(48961U);
    msg.setSourceEntity(135U);
    msg.setDestination(35696U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("WWPDLNYEXOXLDWWSZKFLSXNBWFJTPBWMJQYTRXUNHJOAYHIODYFDMQMPLGAEVOIYIBPGAHCDGHSYLHJEJRKIAUTCUJSPGTQFDKRNNOCTRSTLVWXPPPEAAVDCYLGQMUKQLCSWQUZAURKVBBMDUIYMXVFDFEUHSLNKOHGZBTFESEOTZDIQHORZVHRVNHJP");
    msg.message_id = 40692U;

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
    msg.setTimeStamp(0.206527074951);
    msg.setSource(45993U);
    msg.setSourceEntity(105U);
    msg.setDestination(31699U);
    msg.setDestinationEntity(43U);
    msg.consumer.assign("XMNTMTJCBVDUBUJVNQKTWIZPKDQEKOYQNLSFXKOKSEEBBNYDOPHHIVNGHBOHQVMVDGPADDLCZFEYYRHWRXVOEOFRZOAEBQJIJLGCGTYOVLC");
    msg.message_id = 8205U;

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
    msg.setTimeStamp(0.0274903481266);
    msg.setSource(54231U);
    msg.setSourceEntity(11U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(184U);
    msg.type = 232U;

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
    msg.setTimeStamp(0.140015823444);
    msg.setSource(22704U);
    msg.setSourceEntity(192U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(171U);
    msg.type = 123U;

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
    msg.setTimeStamp(0.755464995668);
    msg.setSource(7393U);
    msg.setSourceEntity(213U);
    msg.setDestination(12179U);
    msg.setDestinationEntity(237U);
    msg.type = 87U;

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
    msg.setTimeStamp(0.124136291849);
    msg.setSource(7845U);
    msg.setSourceEntity(152U);
    msg.setDestination(55423U);
    msg.setDestinationEntity(152U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.350498583051);
    msg.setSource(15587U);
    msg.setSourceEntity(171U);
    msg.setDestination(60440U);
    msg.setDestinationEntity(190U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.187661115148);
    msg.setSource(34405U);
    msg.setSourceEntity(11U);
    msg.setDestination(29537U);
    msg.setDestinationEntity(242U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.668060293464);
    msg.setSource(53018U);
    msg.setSourceEntity(126U);
    msg.setDestination(23019U);
    msg.setDestinationEntity(192U);
    msg.total_steps = 234U;
    msg.step_number = 147U;
    msg.step.assign("IBYRPQVJRLPRNALDQQZZAKLIFNULFJZTNGXRNJXNPSKRTFAGUMMOTQVXPBNTBSLWNPWHOGKEDUBYJMHWUKYEZQARWGWQKMAOHJOWLPPKXCGQDDJFUBHIOOOBFSIXYJVGSIYEZTDHZDECDCNZWUZWVOKSBXWESYLWDZQAASMSCGIVUAMIRPXHGXYLNVMTIISUSQJMFFHVEROMCYLDTBUFEFAPHRIPHECQCZG");
    msg.flags = 214U;

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
    msg.setTimeStamp(0.638970650833);
    msg.setSource(54887U);
    msg.setSourceEntity(235U);
    msg.setDestination(53191U);
    msg.setDestinationEntity(98U);
    msg.total_steps = 123U;
    msg.step_number = 234U;
    msg.step.assign("KXXHJEOPNIDDWCULTRZJFKDUEPLTHYUUKHUSJEPLRPNNXFYJDUXMLRWSYNQGIQBMZATQVLMYUMRBHNMQBHSAZWSPFFLXBMVYCCHLSYZIXAMIHJJMNBKARCJE");
    msg.flags = 231U;

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
    msg.setTimeStamp(0.418231636639);
    msg.setSource(39691U);
    msg.setSourceEntity(241U);
    msg.setDestination(55892U);
    msg.setDestinationEntity(242U);
    msg.total_steps = 95U;
    msg.step_number = 70U;
    msg.step.assign("VYQMQUIRKDSEBWCZPINMZTHVWBVHMKLNJOJIVPCRLWMDJUZRGTSCFMVBMRVJOHFACEGRYIEXNCEQLSXAOPBYYDQBYPNVFVEPXRIYFURTFDESVCAUBGAKGHLTUVWFROBFOZ");
    msg.flags = 226U;

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
    msg.setTimeStamp(0.323493158126);
    msg.setSource(47521U);
    msg.setSourceEntity(175U);
    msg.setDestination(47267U);
    msg.setDestinationEntity(187U);
    msg.state = 99U;
    msg.error.assign("DRIEHUYQRQEGODGMVZCVTOCOHJQXLFXBMMKLRHHSNHZDKBWHYLNEBUINBMQFWNLQCDPCXUMTTZYCEEXTOPPRKNKWVVYZRUBCOYAUNUFWLJISKRISQGJEHUZZPG");

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
    msg.setTimeStamp(0.268988796163);
    msg.setSource(39723U);
    msg.setSourceEntity(214U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(157U);
    msg.state = 169U;
    msg.error.assign("JWPEQEDTJBHJZGCNTYKJTCNYFIFBWJGMJPOAQCUZLVNNYAOOHRTCOVMWZKFWZXSBNFKCKIUVQKMNDAXSDRDHYTQSEYRZBQCMAVSMXYPTOGZBLOFXNBGWFSPTDBVRZIPOBYDTPTNMMEMGLNIRXWBQKQWJYMOSAHDTGRRLERMGSWIWQFUHKFXEANDHGDKVVCXJPCPUVOHEHDLESUGVOQRAHPRCGXYLKKHSLWFAUVXFQZPAJEZZELUJ");

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
    msg.setTimeStamp(0.436304129252);
    msg.setSource(37371U);
    msg.setSourceEntity(40U);
    msg.setDestination(55278U);
    msg.setDestinationEntity(174U);
    msg.state = 93U;
    msg.error.assign("IJWPWUZAVCLNAPLSLBFJAYQFAYABBUEYGVPGRQQHDGERSETGUBMOMOFSYWUKDOAUSOXHIUGMZKVPTJATFTHKVDCLNUMYHNINDCXNQHBZQWX");

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
    msg.setTimeStamp(0.496189525241);
    msg.setSource(34806U);
    msg.setSourceEntity(145U);
    msg.setDestination(49616U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.420850854891);
    msg.setSource(38539U);
    msg.setSourceEntity(228U);
    msg.setDestination(53936U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.788548068021);
    msg.setSource(46683U);
    msg.setSourceEntity(3U);
    msg.setDestination(57031U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.188860056974);
    msg.setSource(23152U);
    msg.setSourceEntity(206U);
    msg.setDestination(7796U);
    msg.setDestinationEntity(207U);
    msg.op = 52U;
    msg.speed_min = 0.445985651725;
    msg.speed_max = 0.542038200137;
    msg.long_accel = 0.491983127226;
    msg.alt_max_msl = 0.133018357529;
    msg.dive_fraction_max = 0.859287327664;
    msg.climb_fraction_max = 0.466965360576;
    msg.bank_max = 0.605886950524;
    msg.p_max = 0.650746142139;
    msg.pitch_min = 0.920814378176;
    msg.pitch_max = 0.12508723655;
    msg.q_max = 0.962585980412;
    msg.g_min = 0.930048699606;
    msg.g_max = 0.425119447591;
    msg.g_lat_max = 0.534281912906;
    msg.rpm_min = 0.706993620564;
    msg.rpm_max = 0.603527503255;
    msg.rpm_rate_max = 0.576250852361;

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
    msg.setTimeStamp(0.740724365324);
    msg.setSource(63685U);
    msg.setSourceEntity(212U);
    msg.setDestination(12509U);
    msg.setDestinationEntity(99U);
    msg.op = 81U;
    msg.speed_min = 0.602151903447;
    msg.speed_max = 0.525238778817;
    msg.long_accel = 0.799269541387;
    msg.alt_max_msl = 0.505931082644;
    msg.dive_fraction_max = 0.755394195007;
    msg.climb_fraction_max = 0.884961150563;
    msg.bank_max = 0.415353026561;
    msg.p_max = 0.741207052143;
    msg.pitch_min = 0.669746234314;
    msg.pitch_max = 0.618523968523;
    msg.q_max = 0.991848346433;
    msg.g_min = 0.438381468815;
    msg.g_max = 0.411166266133;
    msg.g_lat_max = 0.37017861278;
    msg.rpm_min = 0.445561217503;
    msg.rpm_max = 0.944029956496;
    msg.rpm_rate_max = 0.103106134918;

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
    msg.setTimeStamp(0.515261048177);
    msg.setSource(12733U);
    msg.setSourceEntity(202U);
    msg.setDestination(61823U);
    msg.setDestinationEntity(69U);
    msg.op = 50U;
    msg.speed_min = 0.706685974386;
    msg.speed_max = 0.72829575518;
    msg.long_accel = 0.404013242657;
    msg.alt_max_msl = 0.149295575883;
    msg.dive_fraction_max = 0.835707514;
    msg.climb_fraction_max = 0.726905458472;
    msg.bank_max = 0.525850695021;
    msg.p_max = 0.755983442165;
    msg.pitch_min = 0.325144871454;
    msg.pitch_max = 0.126798109726;
    msg.q_max = 0.533404605033;
    msg.g_min = 0.634729415017;
    msg.g_max = 0.751734702458;
    msg.g_lat_max = 0.354516320455;
    msg.rpm_min = 0.390098032493;
    msg.rpm_max = 0.972895045942;
    msg.rpm_rate_max = 0.133281396637;

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
    msg.setTimeStamp(0.413582741727);
    msg.setSource(13679U);
    msg.setSourceEntity(55U);
    msg.setDestination(50810U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.643244466665);
    msg.setSource(17058U);
    msg.setSourceEntity(49U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.257493957173);
    msg.setSource(13580U);
    msg.setSourceEntity(205U);
    msg.setDestination(43139U);
    msg.setDestinationEntity(247U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.987161469897;
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
    msg.setTimeStamp(0.638271952473);
    msg.setSource(15925U);
    msg.setSourceEntity(189U);
    msg.setDestination(13652U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.149615198061;
    msg.lon = 0.355959321936;
    msg.height = 0.393879281362;
    msg.x = 0.710581025111;
    msg.y = 0.0585427511132;
    msg.z = 0.599690975327;
    msg.phi = 0.474486703626;
    msg.theta = 0.527085038525;
    msg.psi = 0.547191884465;
    msg.u = 0.879744314908;
    msg.v = 0.943649011216;
    msg.w = 0.430252607374;
    msg.p = 0.633231672674;
    msg.q = 0.905297311995;
    msg.r = 0.706594472215;
    msg.svx = 0.270937689328;
    msg.svy = 0.99869051718;
    msg.svz = 0.433479321568;

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
    msg.setTimeStamp(0.978810425801);
    msg.setSource(21852U);
    msg.setSourceEntity(99U);
    msg.setDestination(45027U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.0772682740312;
    msg.lon = 0.270163004056;
    msg.height = 0.0263533729491;
    msg.x = 0.949963832057;
    msg.y = 0.0536721736985;
    msg.z = 0.955414121178;
    msg.phi = 0.804148205008;
    msg.theta = 0.140212283346;
    msg.psi = 0.928575066008;
    msg.u = 0.880960098559;
    msg.v = 0.714149145898;
    msg.w = 0.417046677278;
    msg.p = 0.496400809415;
    msg.q = 0.410306489757;
    msg.r = 0.484784626117;
    msg.svx = 0.045470131216;
    msg.svy = 0.930114218267;
    msg.svz = 0.803252412208;

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
    msg.setTimeStamp(0.717859290517);
    msg.setSource(30927U);
    msg.setSourceEntity(92U);
    msg.setDestination(39913U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.881053798657;
    msg.lon = 0.407092051422;
    msg.height = 0.0247867164627;
    msg.x = 0.749844761639;
    msg.y = 0.16602954966;
    msg.z = 0.475588627711;
    msg.phi = 0.418524561584;
    msg.theta = 0.105285998506;
    msg.psi = 0.0105334294375;
    msg.u = 0.74205957868;
    msg.v = 0.979144542254;
    msg.w = 0.0681348448337;
    msg.p = 0.643518982072;
    msg.q = 0.771870025475;
    msg.r = 0.682573443817;
    msg.svx = 0.387680258357;
    msg.svy = 0.749772353316;
    msg.svz = 0.334447550885;

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
    msg.setTimeStamp(0.673558174795);
    msg.setSource(22452U);
    msg.setSourceEntity(216U);
    msg.setDestination(4113U);
    msg.setDestinationEntity(225U);
    msg.op = 219U;
    msg.entities.assign("TKZUCARCDIQZCXBHHRMAYSYESFGLYTYNUGLAJUZHPSIPGLOZTFWEJUCXKBQUCJMUXDQWUMFYHVIGFHAEAQBWJOFVFFZDPQKPRLUSJLEVNPXNRKTNQIRYGNRVPRMABOYDMWTBXENDSHCJEVQWKABWVEWVOJXBCOIITGLFTRNDPRNLJEIKYDOMJLDZXQBAXW");

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
    msg.setTimeStamp(0.850745272046);
    msg.setSource(5980U);
    msg.setSourceEntity(162U);
    msg.setDestination(3829U);
    msg.setDestinationEntity(132U);
    msg.op = 142U;
    msg.entities.assign("OZJXKKLGTTZNIDSLLRAUKEZZWIULHIHJGCPUFVVIGJREB");

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
    msg.setTimeStamp(0.124971105381);
    msg.setSource(244U);
    msg.setSourceEntity(35U);
    msg.setDestination(15689U);
    msg.setDestinationEntity(233U);
    msg.op = 54U;
    msg.entities.assign("ROBXKODCNIILGIMEAFMGCLFBNOPXCWJLGBXAGPYU");

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
    msg.setTimeStamp(0.445529327442);
    msg.setSource(39028U);
    msg.setSourceEntity(157U);
    msg.setDestination(27723U);
    msg.setDestinationEntity(105U);
    msg.type = 25U;
    msg.speed = 7549U;
    const char tmp_msg_0[] = {13, -25, -75, 82, 72, 79, 58, -84, -106, -83, -60, 78, 22, 74, -95, 110, 20, 85, 119, 108, 78, -56, 125, -111, -44, -112, -71, -97, 94, -6, 82, 99, -46, 27, -108, 39, -85, 119, -107, -59, -57, 100, -104, -50, 29, 59, 86, -45, -81, -92, -120, 125, 73, -5, 88, -79, -83, -53, 113, -19, -50, 124, -8, 90, 52, 85, -53, -26, -118, -52, -123, 90, -118, -55, 122, 92, 29, -92, -40, -24, -35, -119, -15, -117, 123, 71, 35, -42, -49, -83, -89, -80, 23, -64, -63, 12, -118, 92, -59};
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
    msg.setTimeStamp(0.875881503972);
    msg.setSource(32227U);
    msg.setSourceEntity(182U);
    msg.setDestination(49861U);
    msg.setDestinationEntity(167U);
    msg.type = 188U;
    msg.speed = 5321U;
    const char tmp_msg_0[] = {19, 124, 113, -4, -123, -102, 91, -99, -32, 123, -31, 38, 13, 39, -71, 0, -82, -9, 49, 112, -105, 100};
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
    msg.setTimeStamp(0.918038015707);
    msg.setSource(35832U);
    msg.setSourceEntity(145U);
    msg.setDestination(30237U);
    msg.setDestinationEntity(25U);
    msg.type = 21U;
    msg.speed = 29765U;
    const char tmp_msg_0[] = {-25, -3, -86, 74, 55, -39, -76, 85, 43, -33, -67, -44, -18, -76, -120, -4, 36, 31, -50, -80, 54, 94, 42, 68, -125, 72, 91, 26, 21, 46, 118, 111, -97, -59, -15, 98, 76, 13, -97, 47, -73, 8, -86, 51, 9, -93, 44, 33, -96, -72, -119, -86, -23, -69, -75, -8, -13, 78, 111, 106, 67, 82, 39, 67, -98, -45, 21, -55, 116, -2, 112, 41, -42, 66, -2, 123, 70, 15, 38, -10};
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
    msg.setTimeStamp(0.437087003012);
    msg.setSource(4042U);
    msg.setSourceEntity(106U);
    msg.setDestination(35U);
    msg.setDestinationEntity(146U);
    msg.op = 179U;
    msg.tas2acc_pgain = 0.127507534063;
    msg.bank2p_pgain = 0.100037577971;

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
    msg.setTimeStamp(0.861719281645);
    msg.setSource(49710U);
    msg.setSourceEntity(232U);
    msg.setDestination(50693U);
    msg.setDestinationEntity(210U);
    msg.op = 13U;
    msg.tas2acc_pgain = 0.70906785189;
    msg.bank2p_pgain = 0.531819607956;

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
    msg.setTimeStamp(0.703942777228);
    msg.setSource(6710U);
    msg.setSourceEntity(156U);
    msg.setDestination(31539U);
    msg.setDestinationEntity(125U);
    msg.op = 111U;
    msg.tas2acc_pgain = 0.970572412449;
    msg.bank2p_pgain = 0.44626726095;

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
    msg.setTimeStamp(0.846119946871);
    msg.setSource(32916U);
    msg.setSourceEntity(216U);
    msg.setDestination(4702U);
    msg.setDestinationEntity(22U);
    msg.available = 1945913894U;
    msg.value = 224U;

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
    msg.setTimeStamp(0.77575964443);
    msg.setSource(8830U);
    msg.setSourceEntity(80U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(26U);
    msg.available = 1392278790U;
    msg.value = 79U;

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
    msg.setTimeStamp(0.344914988038);
    msg.setSource(57275U);
    msg.setSourceEntity(183U);
    msg.setDestination(64237U);
    msg.setDestinationEntity(25U);
    msg.available = 1037590666U;
    msg.value = 169U;

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
    msg.setTimeStamp(0.48310223071);
    msg.setSource(46227U);
    msg.setSourceEntity(245U);
    msg.setDestination(1492U);
    msg.setDestinationEntity(241U);
    msg.op = 13U;
    msg.snapshot.assign("WFRGROTEINKYYCAFHLWOIAIUCUJWIELVEZKMRDAFMHZUTDNWYKDGZORQAVAGRZVPRSXZDZBMNXTLOZMLPYJCUEXQSSILSBDVJHCCXHIXDJYNDDUKTXBMWUQGHMLACUPWECKVPTSQBMGIFHVQXYGHKICPGWTZTJPHJEMBNORGMVAOIERSLEPWOYNUFSSTFVLILQURFCBKQDPQBAFKNQJNMVHSOBRYTTLPJNNEJFXBYYUPKOGJKESGVOQWCZ");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("OMTSGZKOIWJEJPNZPPPFABLQPLAMLELYJTUSXCEYNBDFHIOIPMZVIHCBXSONYVYVPUDKDVDUFXGVAGGEQWKSDJSFOBN");
    tmp_msg_0.op = 156U;
    tmp_msg_0.lat = 0.968440112867;
    tmp_msg_0.lon = 0.337793278943;
    tmp_msg_0.height = 0.951363726016;
    tmp_msg_0.x = 0.954169551452;
    tmp_msg_0.y = 0.701579434275;
    tmp_msg_0.z = 0.579884018374;
    tmp_msg_0.phi = 0.119982272147;
    tmp_msg_0.theta = 0.677529148423;
    tmp_msg_0.psi = 0.533260966175;
    tmp_msg_0.vx = 0.227813579202;
    tmp_msg_0.vy = 0.610590864526;
    tmp_msg_0.vz = 0.0617468893976;
    tmp_msg_0.p = 0.722576953818;
    tmp_msg_0.q = 0.0078113977764;
    tmp_msg_0.r = 0.0970863423231;
    tmp_msg_0.svx = 0.784525631765;
    tmp_msg_0.svy = 0.547794894657;
    tmp_msg_0.svz = 0.485563640183;
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
    msg.setTimeStamp(0.451129288581);
    msg.setSource(35808U);
    msg.setSourceEntity(55U);
    msg.setDestination(63828U);
    msg.setDestinationEntity(99U);
    msg.op = 101U;
    msg.snapshot.assign("QMNXPNMOQPPAVYUDINOGWQIOEPXAELFEF");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 20U;
    tmp_msg_0.op = 180U;
    tmp_msg_0.request_id = 52262U;
    tmp_msg_0.plan_id.assign("NFPCYLJVEZZXJHZVMORTMWOMRACAWDGSAFAECUPXFSXW");
    tmp_msg_0.flags = 46869U;
    IMC::TrexObservation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("CNEVLCLQGWHXRGBOIPKKQTBRYOWGZLWIAOJPATIICRYCQKSSJZNTAQCGCGFYXTASCFXACDYRLSFDJRVODYHTTFWQQLZDLXDPMTFZNPIKCDMXWUNJKQSZOAFGBLUEXOTYGYHV");
    tmp_tmp_msg_0_0.predicate.assign("PEISBWBZTVMOHAJRQXQCDGNGXMZBPWOOSPYLTKXMDRKFQHLPMUQNCGSPXBENVQUQDFEXTTVLZLKVLHCAUMHJKAXGCWLPATWOJCGNTRLVEYPJJZGJG");
    tmp_tmp_msg_0_0.attributes.assign("GRFSARUMZGQEGHZYKGRPFKGIIKSJFZPYCSNDEBNSUWTWAYNNIBWSHQEAIZMNQZEXXKGUUILPYCSXNMVTIREXOZMLOQTMAHLFYCNKYHVOVGDKIBPNFWGOSOWXLNSVLOKTDUJMCBSQXTJTFYUOZCCWOJKIALXDEIHJVDDKVQXZDICPGQFNPHBAERUFBMKHYVPHLTVWRVQDREUXPTGUSJCHVAOBURLXLMMLRW");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("XCGOGZFRJWYAUFBETIEEAGALIKXNVWNNPQWELCUTSSXUQQPQHMYTQPRLVHXRDWPUQVBUJTQSCRZGRGTNSAIFUUHEGZMNVVDVDCPXFFIIBKEFYRHLMYLPPUPCHANAFKWSZBDYEDWOQJ");
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
    msg.setTimeStamp(0.395704958437);
    msg.setSource(3449U);
    msg.setSourceEntity(40U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(223U);
    msg.op = 49U;
    msg.snapshot.assign("JZFJVUECCIUFRIWVPDEBILEKNXHWABOPJGDYCL");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 237U;
    tmp_msg_0.error.assign("MFDHQLTBUFNSYUVUMOPLLRDHUICUJBQFPQNZBNBAFGJQHWTFEIGKSCJJDUKOSOECBYBAHWAVWCJCKGLRKYKODLMPBZDZIXOPXLVYPZRAJXPVCEWPAECJTXGRYLNDTGNVLMPRRFCJHZVZIZKDWTRDMOGQXDIBXKCAFGQSFVXAUSTFEEUOPPIKIWGHSJMMQMVHUFEWOHHXLNANYGYZDJTLSIAXBWETQ");
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
    msg.setTimeStamp(0.364664301922);
    msg.setSource(32021U);
    msg.setSourceEntity(169U);
    msg.setDestination(54019U);
    msg.setDestinationEntity(109U);
    msg.op = 139U;
    msg.name.assign("IHKLOWKYQFQINIYCZXGCRWQQ");

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
    msg.setTimeStamp(0.889833484564);
    msg.setSource(29982U);
    msg.setSourceEntity(39U);
    msg.setDestination(53297U);
    msg.setDestinationEntity(232U);
    msg.op = 117U;
    msg.name.assign("CWEUYYSROTOHKVQJRAIJAAMNIODDSVGROWNAXFFVSNGBEUMTUUPZSYXMXLZXCBAMIQYNYKIMARSIPRKKFCHCKMHEJNQALOKGQHJFYNQBZFTMWPVDJDRJJYJZGTCSNBMTGKLRSLWLVVRFSLUDFCTKZDOAWPCGGTPYPXCTVUWDJYMZUEMDBKLPBZOAHPPNUFZZVLWEWITUGOVCXWZBOWQSITENJECSHUNRXPBXHQFLEHYQI");

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
    msg.setTimeStamp(0.173363105151);
    msg.setSource(33669U);
    msg.setSourceEntity(16U);
    msg.setDestination(29672U);
    msg.setDestinationEntity(140U);
    msg.op = 176U;
    msg.name.assign("LJQGZHRFZBGVPCWWGXOIDFRMRDGXCXYERONVXLIQCLBUSNZLMKXJJPTTYKAFHCGTIDMHXTITKYDUJVAQMWPCTHO");

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
    msg.setTimeStamp(0.340238687431);
    msg.setSource(20178U);
    msg.setSourceEntity(184U);
    msg.setDestination(33965U);
    msg.setDestinationEntity(23U);
    msg.type = 226U;
    msg.htime = 0.257420596729;
    msg.context.assign("SHYWDESUUNBKPRYCNWOUULVLMNSNHWTACMOSOELPAHDGKEKIJPXCJQTSVYFRBUNMOMPGBAHZCWCAQOKDZAIYDWLEWMHEANFJXDJBRWJTSVRFHZCOHRRZZULJQAXXGBNDVJTXPEPXWTDPQDKQVCFBOTIAIHRJFIOZOCBVBGTWYXZIHXGVUVNXLXKGZZTNDYGTVFMLAQPMKLVQEIYGESEJ");
    msg.text.assign("MXSLFUNGRIKHLBZHTHKPSWDANIWLQSGUNXCDSTBVXCSGAMKTZROEFUUWWOVWNPDDQOQTYZPTHDJBKKTFUZPTQWIUFHQCKDYGQOPXOGPJCWLNBODMEEYANQOCFTWRAKJUGGAIIKMRBSSSUZNCYLALLYEMFBUCTVJAIBYBFFMQHJZYMKDRLNOIBEV");

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
    msg.setTimeStamp(0.313978022696);
    msg.setSource(50105U);
    msg.setSourceEntity(101U);
    msg.setDestination(60521U);
    msg.setDestinationEntity(21U);
    msg.type = 160U;
    msg.htime = 0.923703967716;
    msg.context.assign("LIDJCQCHZK");
    msg.text.assign("XZKFVWUSOWUHWWPDRXKDGDKDABMBPNDRNJLNARXIRDJSMEIFNORALGHBFVFYWFIUMGWNZCKVEYTAZHQGVPLKDFCCKCVERUTSTZOBHRNEGBFYYSZOOUETSZCIQVEQIMLMTPLBTWNJHHMLJOWOHEYWHPHXXUATRYCUCQXMQYUVJAFWDUYQLILSPPPXQUCTOMZOZGHQGZXSNYFPISJERVENLRDZXT");

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
    msg.setTimeStamp(0.671537718675);
    msg.setSource(50570U);
    msg.setSourceEntity(208U);
    msg.setDestination(57933U);
    msg.setDestinationEntity(211U);
    msg.type = 244U;
    msg.htime = 0.594699893209;
    msg.context.assign("QWDYARWGWSTHMTKGEHUVBYDVLSQFZJOJWXGELQIJJOFIBYMZTAQGIVAHNIGYMVPLWMFYTWIEGNXKFSXNGHZQQUNYCPAIVMFUXJIOPZQTPMROXYLVPLOBRKAQINDFUSAFKJDCBXOXNJMGASUZSULTPDPBNRKRDWRHEDTCOCVEOKLLADHCDBURZBXPVMYKZZNBBAOJESTERM");
    msg.text.assign("OSYGMWZDREETTHGPIBHUQVHPMSQHNIKZRWPBDWDNUXZIFGUSECUMQKOUVYBBBTMTRARUZEVJWQTFMYXFSLPRLYNCKBVWWIIRPPMBNLKCNUEPTIHVMAZSEJMODACTFFMHLDQXGKWCIZKOEKUDEVJJZRYB");

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
    msg.setTimeStamp(0.480439599846);
    msg.setSource(22409U);
    msg.setSourceEntity(94U);
    msg.setDestination(47320U);
    msg.setDestinationEntity(199U);
    msg.command = 128U;
    msg.htime = 0.67971288639;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 195U;
    tmp_msg_0.htime = 0.419576979031;
    tmp_msg_0.context.assign("CWXZKCLQSQLJPVKYEZHSZCDAOAXIRUQAUJHRFEYCBJEUTOVDPHMMANKRFTVNXZMXJTDUEBYAHCQYXHFDYTLL");
    tmp_msg_0.text.assign("NQMIUGIDTEWMJWORCPWHOIDQESBJUFBWJXWZKGVXDKALCUEOSUAIROYYWFELZANLBR");
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
    msg.setTimeStamp(0.536360285851);
    msg.setSource(29058U);
    msg.setSourceEntity(162U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(138U);
    msg.command = 217U;
    msg.htime = 0.43796393624;

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
    msg.setTimeStamp(0.237130717381);
    msg.setSource(25937U);
    msg.setSourceEntity(4U);
    msg.setDestination(58342U);
    msg.setDestinationEntity(181U);
    msg.command = 161U;
    msg.htime = 0.49977526142;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 210U;
    tmp_msg_0.htime = 0.295404485863;
    tmp_msg_0.context.assign("HWSWXJAGGRZKURDBVBMEPPWNNWYMFJXSEVVDNQOLFPLFCHGHOYXVIGEKOLNEOMEZLPRN");
    tmp_msg_0.text.assign("XRPMEFHSQCDJRAISDPJLXBCCPLQFYGLGDDTBMNYUAKWEGSVVOBVLTLJKHXHTIBGPMVYXMMRIFMYEQOSDPTLUTPGZJYCVKRBAFSUEKONVZHPRQWECMKDIRMJDKNHGCUFZIAAJQFWNZWLWIZXUFWIGNAXEEYHHOTXQIQWKBSWCKWQUDLLMTZOBDEVORJKNNTJXKOVBSXUUPPJZIVC");
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
    msg.setTimeStamp(0.264044085777);
    msg.setSource(4745U);
    msg.setSourceEntity(4U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(161U);
    msg.op = 69U;
    msg.file.assign("XAYBURTLABOYWYAUYRTSWQPFEAGOMQPEZZQZAATLDCBOYOUMBBYGKMDQOEXPLVYNSIWFDHDENCEGMARJGXVVWHKPLFUPMQNJHUKVGKIOSHEMHRHHFXTJOXFICZWTVNEDJWISNRRYNSURXIB");

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
    msg.setTimeStamp(0.415125344035);
    msg.setSource(63442U);
    msg.setSourceEntity(185U);
    msg.setDestination(40055U);
    msg.setDestinationEntity(38U);
    msg.op = 210U;
    msg.file.assign("JNMYQXXPTWAYDVANJRUUCZNZTDDULNALYBMTOMVGSVHFTCZENOOOIGTYPCWLJWGUUVWUODLXFGTBCSBAKCYJXVWEFWIDGSEUBFHWHHPZQKANCMBRBLNJACAOEGGKNHJVPMROFNGYIAIALLKFSPJIRAWBBKHZIRGYKZCEFQHIHXKCIWYYEGSVLQHIQJOURCORMKKXJQQDJEVZMDRPXYLQESFMZXTZRPFREXWPXDEUITDSBVPMHSSODNFMLSKUT");

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
    msg.setTimeStamp(0.305649036293);
    msg.setSource(36547U);
    msg.setSourceEntity(10U);
    msg.setDestination(14067U);
    msg.setDestinationEntity(147U);
    msg.op = 7U;
    msg.file.assign("WCJDHFKJDIARXNLEHFAGEBWFNQTVVYAHQDSERODJZNPELWSPKSZEKMDGMTJINAIXLLTTRNHLWCHIROZECQWBWOSOXUMTHKSXGBDSVKAKFAEYPYZPRAWUPMLZCBGECFVCTUVUUCYSPTTOGMCVFGNJSWAFRQBINODZUHAWFILZHAOMYTGRHQESLPGJRQOCCVQBZYDBNIQYNSYVJQ");

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
    msg.setTimeStamp(0.890294102939);
    msg.setSource(44197U);
    msg.setSourceEntity(233U);
    msg.setDestination(51595U);
    msg.setDestinationEntity(123U);
    msg.op = 86U;
    msg.clock = 0.524939210175;
    msg.tz = 13;

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
    msg.setTimeStamp(0.648509566891);
    msg.setSource(35503U);
    msg.setSourceEntity(204U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(29U);
    msg.op = 53U;
    msg.clock = 0.416936288879;
    msg.tz = 75;

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
    msg.setTimeStamp(0.250985378845);
    msg.setSource(42850U);
    msg.setSourceEntity(38U);
    msg.setDestination(34319U);
    msg.setDestinationEntity(242U);
    msg.op = 143U;
    msg.clock = 0.249275057639;
    msg.tz = -3;

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
    msg.setTimeStamp(0.83645220454);
    msg.setSource(55110U);
    msg.setSourceEntity(254U);
    msg.setDestination(55706U);
    msg.setDestinationEntity(194U);
    msg.conductivity = 0.995290629523;
    msg.temperature = 0.918119238235;
    msg.depth = 0.41842037225;

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
    msg.setTimeStamp(0.516205948769);
    msg.setSource(47380U);
    msg.setSourceEntity(173U);
    msg.setDestination(1937U);
    msg.setDestinationEntity(190U);
    msg.conductivity = 0.390600087053;
    msg.temperature = 0.0965674075021;
    msg.depth = 0.567477606459;

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
    msg.setTimeStamp(0.231928784377);
    msg.setSource(12574U);
    msg.setSourceEntity(79U);
    msg.setDestination(37330U);
    msg.setDestinationEntity(14U);
    msg.conductivity = 0.620616773816;
    msg.temperature = 0.373227533435;
    msg.depth = 0.673880174134;

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
    msg.setTimeStamp(0.740343422894);
    msg.setSource(61820U);
    msg.setSourceEntity(47U);
    msg.setDestination(36651U);
    msg.setDestinationEntity(154U);
    msg.altitude = 0.0036307466824;
    msg.roll = 45234U;
    msg.pitch = 28969U;
    msg.yaw = 5978U;
    msg.speed = 16774;

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
    msg.setTimeStamp(0.137462608607);
    msg.setSource(56122U);
    msg.setSourceEntity(95U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.77030348189;
    msg.roll = 26705U;
    msg.pitch = 37732U;
    msg.yaw = 65162U;
    msg.speed = 570;

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
    msg.setTimeStamp(0.426231454694);
    msg.setSource(8843U);
    msg.setSourceEntity(30U);
    msg.setDestination(36682U);
    msg.setDestinationEntity(92U);
    msg.altitude = 0.0876921373147;
    msg.roll = 7080U;
    msg.pitch = 26222U;
    msg.yaw = 56141U;
    msg.speed = 12862;

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
    msg.setTimeStamp(0.612493490461);
    msg.setSource(5912U);
    msg.setSourceEntity(3U);
    msg.setDestination(18581U);
    msg.setDestinationEntity(83U);
    msg.altitude = 0.456133419762;
    msg.width = 0.109997478751;
    msg.length = 0.204409229821;
    msg.bearing = 0.21325415495;
    msg.pxl = -1682;
    msg.encoding = 70U;
    const char tmp_msg_0[] = {-11, -103, 77, 100, -79, -69, 21, -45, 114, 3, 65, -19, 32, 41, -24, -20, -21, -19, 50, -14, -116, -127, 76, 100, 109, -28, 44, -5, 3, 75, 58, 9, 61, 88, 57, 98, -32, 54, 13, -49, -59, -95, 117, 2, -29, 44, 9, 64, -9, -3, 47, 120, 55, 36, -36, -78, -14, -120, -105, 81, 32, -21, -27, -119, 109, -114, 28, -82, -23, -99, 84, 77, -114, 65, -45, -54, 102, -38, -125, -102, 72, -8, 78, -59, 13, 97, 78, 4, -46, -128, -88, -106, -70, 118, 93, -86, 29, 25, -72, 36, -112, -1, -93, 95, -98};
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
    msg.setTimeStamp(0.815745782168);
    msg.setSource(61162U);
    msg.setSourceEntity(141U);
    msg.setDestination(44152U);
    msg.setDestinationEntity(120U);
    msg.altitude = 0.898381682736;
    msg.width = 0.91877581395;
    msg.length = 0.765488792612;
    msg.bearing = 0.701096424104;
    msg.pxl = -21468;
    msg.encoding = 93U;
    const char tmp_msg_0[] = {-76, 37, 95, -36, 66, -24, 51, 118, -117, 116, 22, 14, -115, 76, 101, -72, -38, -112, -86, 36, -7, 118, -59, 83, 92, 37, 32, 57, 73, 117, -5, 91, -27, -109, -42, -46, 41, -41, -46, -11, -37, -109, 38, -110, -16, -105, 21, -36, -3, -17, 72, -11, -60, 42, -77, -117, -83, -49, 34, 5, 24, -2, 6, 4, -100, -90, -7, 52, 90, 89, -49, 30, 44, 16, -38, -106, -65, 16, -87, -102, -35, -99, 122, 43, -17, 118, -51, 51, -67, 96, 40, 102, -47, 44, -69};
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
    msg.setTimeStamp(0.914431295212);
    msg.setSource(51815U);
    msg.setSourceEntity(179U);
    msg.setDestination(61961U);
    msg.setDestinationEntity(227U);
    msg.altitude = 0.0404459116517;
    msg.width = 0.702297411738;
    msg.length = 0.965276951833;
    msg.bearing = 0.107678031811;
    msg.pxl = 9860;
    msg.encoding = 55U;
    const char tmp_msg_0[] = {96, 116, -45, 120, -124, 45, 29, -91, -39, -28, 30, 20, 50, 45, -47, 107, 21, 20, 125, 18, 33, 27, -120, -37, 5, -90, -39, 22, 44, 117, -62, 83, -49, 5, -79, 27, -5, -79, 47, 9, 29, 47, -14, 18, -127, 72, -88, 74, 48, -76, -60, -23, 98, -122, -18, -112, 13, 105, -30, -76, -1, 120, 62, 40, 41, -121, -25, 47, -95, 67, 34, 81, 17, -80, -114, -20, -29, 46, -72, -85, -23, -97, -5, 51, 91, -97, -120, -115, 54, 86, -110, 52, -67, -44, -82, -106, 124, -47, 110, 114, -31, -37, -61, -12, 89, 31, -124, -104, -59, 16, 34, 13, -64, 49, 75, 48, 61, 103, 28, 105, -126, -66, 52, 106, 72, 39, -32, 42, 31, -124, 2, 44, 85, -52, -87, 69, 29, -19, 105, -95, -22, 91, -104, -72, 103, 44, -20, -11, -25, 47, -30, 40, -4, 66, -56, 64, 106, -78, -76, 53, -3, 91, 29, 6, 65, -54, 107, -86, -21, 83, -105, 42, -43, 111, -126, 41, -54, 41, 5, -115, -18, -14, 74, -27, 111, 80, 116, 22, 99, 68, 80, -75, 21, -64, 85, -68, 54, -2, -35, -38, 115, -44, -81, -76, -97, 10, 0, 58, 116, -123, -72, 89, 36, 56, 34, 102, -64, 124, -34, 44, -73, 11, -89, 110, 91, -75, 64, -92, 34, -96, 108, -71, -107};
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
    msg.setTimeStamp(0.743676687819);
    msg.setSource(24307U);
    msg.setSourceEntity(21U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(121U);
    msg.text.assign("WTWZNTBHMSIJCVGQFXUOIVJEDHEPTFPHTEANVHKQZMDCBRWXOODFWGIQBPJNEBS");
    msg.type = 235U;

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
    msg.setTimeStamp(0.119554901486);
    msg.setSource(39575U);
    msg.setSourceEntity(218U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(253U);
    msg.text.assign("AJNJJGYMHXEANZLYQIUQUMUNHWXWTVJCRLLAQKFRKZOCYVGHMOOECPONLHXRBWGMYFMUAPWKFLARVLIBVDITPPMODOOAYTKSMBGGOARBKXVUFZCLICDDESGIQNMRDIJSZEFDNHWVEZJZUVWKGPDVIHFNKPYAXUVYKTATYYQJQSCLBPFHKOGLGFODBCFMHEMXPRQJIWNCJWVSZWZXSTBFDHXJYTNTDZGPZ");
    msg.type = 236U;

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
    msg.setTimeStamp(0.0726816564027);
    msg.setSource(65185U);
    msg.setSourceEntity(118U);
    msg.setDestination(22269U);
    msg.setDestinationEntity(75U);
    msg.text.assign("HZCENTDQAYQSDVFMXDWXMEWGRDFE");
    msg.type = 207U;

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
    msg.setTimeStamp(0.199324293597);
    msg.setSource(59060U);
    msg.setSourceEntity(80U);
    msg.setDestination(54516U);
    msg.setDestinationEntity(198U);
    msg.parameter = 251U;
    msg.numsamples = 67U;
    msg.lat = 0.343882841237;
    msg.lon = 0.404208872649;

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
    msg.setTimeStamp(0.912328305896);
    msg.setSource(56687U);
    msg.setSourceEntity(236U);
    msg.setDestination(25438U);
    msg.setDestinationEntity(229U);
    msg.parameter = 152U;
    msg.numsamples = 63U;
    msg.lat = 0.635480509415;
    msg.lon = 0.0234974062729;

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
    msg.setTimeStamp(0.765306715136);
    msg.setSource(1227U);
    msg.setSourceEntity(64U);
    msg.setDestination(9460U);
    msg.setDestinationEntity(212U);
    msg.parameter = 4U;
    msg.numsamples = 111U;
    msg.lat = 0.924231130592;
    msg.lon = 0.531198054458;

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
    msg.setTimeStamp(0.586865987853);
    msg.setSource(38569U);
    msg.setSourceEntity(162U);
    msg.setDestination(23731U);
    msg.setDestinationEntity(123U);
    msg.depth = 30752U;
    msg.avg = 0.0929546247437;

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
    msg.setTimeStamp(0.130709479533);
    msg.setSource(64704U);
    msg.setSourceEntity(188U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(144U);
    msg.depth = 58796U;
    msg.avg = 0.0509944848524;

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
    msg.setTimeStamp(0.0308876315527);
    msg.setSource(8531U);
    msg.setSourceEntity(100U);
    msg.setDestination(32715U);
    msg.setDestinationEntity(113U);
    msg.depth = 49934U;
    msg.avg = 0.92554951484;

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
    msg.setTimeStamp(0.377707854834);
    msg.setSource(33893U);
    msg.setSourceEntity(231U);
    msg.setDestination(41856U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.608885850008);
    msg.setSource(37202U);
    msg.setSourceEntity(38U);
    msg.setDestination(58508U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.00575111862244);
    msg.setSource(31006U);
    msg.setSourceEntity(208U);
    msg.setDestination(35754U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.621879042357);
    msg.setSource(44236U);
    msg.setSourceEntity(95U);
    msg.setDestination(35519U);
    msg.setDestinationEntity(9U);
    msg.sys_name.assign("TBTOLZRGUYQWWNIGQCALVVXHPSJGTFXXQODBKXIJPTMEWDDYZSKHMNDDKTFCTOPDWSRXSVTNYSQRUSSAAORPIF");
    msg.sys_type = 250U;
    msg.owner = 41734U;
    msg.lat = 0.569211767253;
    msg.lon = 0.0971476144218;
    msg.height = 0.393195107322;
    msg.services.assign("ZSZQKOLGXNAMWZOOWQIDSUNYBWXUZIRAMDHEFCMXYYJEGETCDKRAKGJXJWVZUVFMPPBRBORLPINWXREKVLPEUCIRQCBTIGYHHCLKLICKITYGZ");

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
    msg.setTimeStamp(0.433870723302);
    msg.setSource(34453U);
    msg.setSourceEntity(124U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(127U);
    msg.sys_name.assign("ZZLOCOEOJFPMBHINBROZKLSZJQKXKCKQBRPQBNJNVCTBSXBPAFZUHEZVAIKOAVFDEMFPDCDPXCKMUQWYGWAYDUYXSPEGVYZLIXVIMA");
    msg.sys_type = 89U;
    msg.owner = 9667U;
    msg.lat = 0.85950885991;
    msg.lon = 0.348896029708;
    msg.height = 0.270091490376;
    msg.services.assign("XXYLPDMYYTLNCKQQEZEOGZVGIWXLCPDXFBMCXVQGPHUDXMPZVMZNOYJYKQEFWKOLSNNFIDDXDPSEGOV");

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
    msg.setTimeStamp(0.547490355701);
    msg.setSource(30489U);
    msg.setSourceEntity(142U);
    msg.setDestination(57708U);
    msg.setDestinationEntity(224U);
    msg.sys_name.assign("PLQVDJSQPPAZTVRBDVCVBIVGYYMMCGTOYHPFTCESXTHUQOPWREVUUIIFLNUXKNYFRXYWBFHDQSWGSDLWJQWNJNBKJHSEWKAFCGDPJCMDA");
    msg.sys_type = 64U;
    msg.owner = 51184U;
    msg.lat = 0.74295972376;
    msg.lon = 0.60791550419;
    msg.height = 0.234140685308;
    msg.services.assign("ZZEPWMHJDEUTNGBIJHYXOFPOGKXBKPYFKFFNLWSENMTQDRWINJOIUSPZAACBRTLRFMVUWQROVTSQMALPVBCCBVWM");

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
    msg.setTimeStamp(0.806339902176);
    msg.setSource(45743U);
    msg.setSourceEntity(115U);
    msg.setDestination(46638U);
    msg.setDestinationEntity(17U);
    msg.service.assign("XPXGSOIDODWLJMGOEAXWDRYUXGBIQYFAOZPTAYHXZSNPIWQXADTVJHDXLARFJLFUQWMCFUBLJEAUWFPZTUVYPZYUIEPJORDESZGAPWRELNCTRKVIVHUSXLWBMBTJPQYNLBROFOEOBMHIVGEVHJMMLKRGNFNQBLIKKMMKRUJXGFXEJTCQHQGKDSHUJYTEVKCHZSACBBZBQIPUKWOHNYCHVADAYMTIDSR");
    msg.service_type = 50U;

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
    msg.setTimeStamp(0.591767630085);
    msg.setSource(50849U);
    msg.setSourceEntity(247U);
    msg.setDestination(44357U);
    msg.setDestinationEntity(34U);
    msg.service.assign("KMJNLJTATOTGTVLDHDZWDVAAVWXFHOLBJEZSNPZJCQGVQQNUZCLWUCSONCM");
    msg.service_type = 208U;

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
    msg.setTimeStamp(0.652920729382);
    msg.setSource(32939U);
    msg.setSourceEntity(58U);
    msg.setDestination(18317U);
    msg.setDestinationEntity(147U);
    msg.service.assign("UMDEJGXNRTARWRHYOKFLXFCDPANMXFCZLMMXRFHFEQUIOQISLASOQBIRZWTQXJRMZNRVVHWBLAFPYPKWDBLIKIELLFBCFJKNMZUQTFVGCYUOEXSQQYTITSHBOAUUSWJGBSPODVVTWGTBODYKGOCGLLYDMELYSA");
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
    msg.setTimeStamp(0.26903437365);
    msg.setSource(62486U);
    msg.setSourceEntity(169U);
    msg.setDestination(55395U);
    msg.setDestinationEntity(205U);
    msg.value = 0.530726238207;

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
    msg.setTimeStamp(0.293555240977);
    msg.setSource(42456U);
    msg.setSourceEntity(84U);
    msg.setDestination(35649U);
    msg.setDestinationEntity(178U);
    msg.value = 0.515171571413;

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
    msg.setTimeStamp(0.734792190895);
    msg.setSource(48630U);
    msg.setSourceEntity(35U);
    msg.setDestination(10079U);
    msg.setDestinationEntity(99U);
    msg.value = 0.173635886542;

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
    msg.setTimeStamp(0.133998098404);
    msg.setSource(49223U);
    msg.setSourceEntity(52U);
    msg.setDestination(43086U);
    msg.setDestinationEntity(84U);
    msg.value = 0.827549095959;

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
    msg.setTimeStamp(0.962107494097);
    msg.setSource(56738U);
    msg.setSourceEntity(62U);
    msg.setDestination(47700U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0387934934989;

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
    msg.setTimeStamp(0.71176768286);
    msg.setSource(12048U);
    msg.setSourceEntity(32U);
    msg.setDestination(9258U);
    msg.setDestinationEntity(224U);
    msg.value = 0.0319643432857;

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
    msg.setTimeStamp(0.15704725359);
    msg.setSource(11335U);
    msg.setSourceEntity(253U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(44U);
    msg.value = 0.316071827292;

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
    msg.setTimeStamp(0.526352211185);
    msg.setSource(61140U);
    msg.setSourceEntity(220U);
    msg.setDestination(5526U);
    msg.setDestinationEntity(135U);
    msg.value = 0.42765308758;

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
    msg.setTimeStamp(0.883867193835);
    msg.setSource(51082U);
    msg.setSourceEntity(158U);
    msg.setDestination(30112U);
    msg.setDestinationEntity(98U);
    msg.value = 0.434152528965;

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
    msg.setTimeStamp(0.136907759284);
    msg.setSource(15219U);
    msg.setSourceEntity(96U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(109U);
    msg.number.assign("QLHCWJUHZVUIIKQAWYWGLOUHFVMNRDNXTFACJKHIYAKFCFCLRMYSWYPGFPCHSNDRVKWXJOLFUIZZYXJFLGAZBRDCDTNLYEEJAVTZVFXBPSXOBBKVSLKFBDEMTXTQMUNHSYDHRJTGXTKROEJOUKOZPFANZQGCDGDOZOAVULPYWPMQRHJLGIRISQQEPCXAEXWNNHNYPVJRODXEMYSKBBBHPWWCAIMTMWPQMSNOEVEGDATISBZUG");
    msg.timeout = 62918U;
    msg.contents.assign("NPSFZQCPCELTOYRFQSRJCGOEMYKFIAKNLVFEZWNITKHHHOZDUETKBCGJYPJUCAUQCPGIOQQBAHSIDQBWJJXD");

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
    msg.setTimeStamp(0.279422642417);
    msg.setSource(54552U);
    msg.setSourceEntity(0U);
    msg.setDestination(40216U);
    msg.setDestinationEntity(155U);
    msg.number.assign("ZSTTYAZEJDFQTEPWPFNTCZSZGCBOSQGWRVVGAKBHMEWHWRXUJIRLNLVJMFXIJFGMPUKZGYGQPTHPMCVUZOLSOODXWKHUJCJAHSJNCVVVCEYDYOTBJRKFYVNDCSOPBRTGASWRKPXXHAXRCHUUUAWLQBYGXHRONYEQUWLIQKALTKHVQJMENSTODGDI");
    msg.timeout = 26359U;
    msg.contents.assign("VHEOQHAZGETKLUATAYQPKDIJXZCIVSJZDUXCWWMYCGMMUYNNUTFKTKSROERQZKRJFGLVXOXJJPOVWGMRRBTBNYIPRBNONVFXGSHBWFKSNULNIADKVJEVLGIEDVELOYLSWZQGZWZLEBEADTZJMYIBPWFRJICALWCARIHNJSXEIKXZCGHRSMGDSYXPAZSHOAVFUUHUQTWPFOCETUISHTCCUWACHQLNPYNMDQGBKQPYRMBQJ");

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
    msg.setTimeStamp(0.425546077099);
    msg.setSource(8014U);
    msg.setSourceEntity(24U);
    msg.setDestination(47390U);
    msg.setDestinationEntity(244U);
    msg.number.assign("NCZTVPFOCMUXAYILKBPJZOOQRIVNGTVIXBKYZWBYJXZIZIDMSJWGPMAATQSLW");
    msg.timeout = 31989U;
    msg.contents.assign("YMTXNAFDDPPNJDHSQYVEZNVRBCEHXNSYIVCCOYYNXYTLQIQBGXWXLEOUKKTPTJTACWBZAYSAQJUESNZMKTKIHECWJMRPOWIGPUNFVODLEBVNJSGBSAXIAWANQLWJJUIORTURFDDFEUOYWZRYIWJPZRFPCMKZCKLPIHKLXAMQVXZOZTDOWK");

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
    msg.setTimeStamp(0.172123224559);
    msg.setSource(63327U);
    msg.setSourceEntity(213U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(249U);
    msg.seq = 1196760309U;
    msg.destination.assign("RUDBHQSRTVEJPLLKXMDAJDRTOKNUEOEZIKWJYBGAQICUYUMCDKOWBSWGJPZYJIKFXEWCPQVRFSCFKGDIHYDEWNUHPBESVGLSPHHFAZLBXMLKAJDVAOSQUTSNCLVGXCHWUXWRVTDVERYZRRKFMKZNGQEPVGNOXYNCZJ");
    msg.timeout = 48401U;
    const char tmp_msg_0[] = {38, 47, -99, 73, -118, 57, 102, -25, -107, 17, -20, -114, -121, 78, -96, 14, 36, 72, -39, -33, -2, -30, 45, -36, -77, -125, 2, -72, 96, -119, -90, -125, 90, -47, 120};
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
    msg.setTimeStamp(0.627215862908);
    msg.setSource(18774U);
    msg.setSourceEntity(77U);
    msg.setDestination(41243U);
    msg.setDestinationEntity(102U);
    msg.seq = 987357193U;
    msg.destination.assign("LAGIBRWLYYPVFIIXNRIVREUQHCRCQZYFCVHOHHUFRFAQOLMITAZYTCWGMRMZWEISSJXUZHJTMZAUEQIYHGBCBSGPCQDDKLYJSQPNEGXKGLKBVPHOFPTZJMXANADZWUEGDEANHKMSVEKPJITRVWLCYSGJHKXFSTXYAUWIFTOUJVQOBBELTGMLQRPENLDGBBWZYNZMIOXPULHMXX");
    msg.timeout = 47455U;
    const char tmp_msg_0[] = {72, -45, 87, 101, -25, 94, 106, 93, -117, 50, 125, -73, 38, -68, -126, 52, 51, 27, -13, 95, -53, 12, -84, -92, -86, 40, 117, 112, -42, -15, 56, -14};
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
    msg.setTimeStamp(0.526422888306);
    msg.setSource(27208U);
    msg.setSourceEntity(109U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(11U);
    msg.seq = 3787106447U;
    msg.destination.assign("SRECTPEKVESLKZTOIZARKWYETHTPJGZUDRBBWNIMJFYXAKSLMZRMPSVYHEJBQPLFGENINKFLVYNNJSAWKLHNSYCEYUXBMXJXMMTCIICAHMFWVUOFOKRRYCHXYNWVIDQXLHDPQHCAOFTQSEBWPSXQGFNJBGADDZXOJHPBGMTJLEXCLQKVOPUDFRREQODBNUACQPRAIMCOOHWLVSRPAOICGJKGHVTKDQGZJQVWMYZTDSNTZGYUGI");
    msg.timeout = 13012U;
    const char tmp_msg_0[] = {-27, 39, -51, -41, 105, 77, -49, 73, -107, -82, 27, 85, -53, -34, 27, -59, 102, -80, 84, 9, 30, -106, -99, 84, 82, 121, -17, 2, 114, 99, 45, -6, 42, 125, 61, -4, -127, -71, 94, 68, -97, 81, 86, -13, 88, -44, -116, 18, -107, -124, 33, -80, 122, -85, -69, -78, 22, -83, -111, -45, 123, 95, 64, 74, 13, 57, -21, -82, -114, 74, -87, -30, 96, -57, -96, 90, -43, 48, -123, -102, -2, -99, -29, -13, 95, 118, 6, -50, -58, -70, -81, 62, 115, -49, 58, -46, -125, -22, 76, 15, -21, 2, 110, -126, 101, 113, 74, 92, -29, 63, -62, -108, -49, 4, -83, -68, 19, -105, -50, 0, -46, 121, 72, 103, -27, 72, 33, -115, -16, 26, -122, -73, -49, 88, 12, 119, -103, 30, 115, 20, 85, -82, -33, -122, -46, 113, 30, -99, -114, -96, -67, -25, 60, -63, -93, 32, 98, -122, -74, 25, 124, -8, 86, 100, -116, 61, 58, 63, 62, -60, -6, 108, 84, 59, 126, 33, -29, 20};
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
    msg.setTimeStamp(0.315382800912);
    msg.setSource(22599U);
    msg.setSourceEntity(99U);
    msg.setDestination(21385U);
    msg.setDestinationEntity(134U);
    msg.source.assign("BIWBNTEXAJVOBSPQQOWNJGAJYBCHOZSUVPLRCCIGBVQKINNQLRDDREEKQUZSYOEGMOVLZUWZFQVXRMVCPDNGUZJYRYNFWZKWOARCUJCHUHSXABOISPGKFTKMTTEXHYLNKVPXPBWDOEVKZCTHQDDGAJNBRPZDYEGFFKMSXHRSJK");
    const char tmp_msg_0[] = {-32, -96, -4, -72, 35, 21, -39, -105, 71, 103, -110, -43, 83, 9, 25, -71, 19, 43, -24, 23, 109, -88, -79, -49, 30, -69, 25, 93, -108, 97, 69, 119, -62, 82, -8, 27, -13, -9, 6, -80, 19, -19, -48, 93, -118, 55, 55, 97, 106, -71, 105, -55, 41, -85, -1, -91, 57, -4, -87, -99, -55, -23, 100, 19, 10, -63, -15, -3, -80, 30, 68, 113, -61, 87, 56, -50, 83, 24, 3, 122, 0, 91, -86, -121, -67, 91, 36, -49, -2, -37, 90, -4, -14, -63, 60, 14, -9, 31, -44, -35, -81, 108, 34, 23, 109, -2, -17, 3, 7, 14, -81, -70, -33, -77, 83, -45, 54, -120, -80, 87, -21, 9, 68, 87, -106, -3, 90, 13, -114, -53, 60, -66, -90, -50, -53, 21, -8, -86, 13, -99, -16, -52, -37, 107, -101, -87};
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
    msg.setTimeStamp(0.267107811433);
    msg.setSource(37467U);
    msg.setSourceEntity(19U);
    msg.setDestination(24955U);
    msg.setDestinationEntity(110U);
    msg.source.assign("VQYEBXEYPIYGLQZNNBDHHNCSDGXQBVASGUCKLJQJFSYFELSHEWLDPKAYQHVJOARGGFGOAFJHAQXLESNZNTKAIDAZIRVUEBCTXLCIOXPUAMVMJGWZUWFNMJCHXGREMKOHUITKVYWNOURPQVVSYHWRZOJTROLBVDCIZZFRMCONSMSKBEPTIDKLTSIGMUPAMZBQJIYPIORRGNPHX");
    const char tmp_msg_0[] = {122, 124, -45, -87, -84, -40, 98, -56, 54, -44, -10, -105, 60, 56, -39, -91, -70, 43, -63, -32, -75, -18, -123, 39, -5, 13, -69, 28};
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
    msg.setTimeStamp(0.667878287518);
    msg.setSource(52490U);
    msg.setSourceEntity(48U);
    msg.setDestination(40011U);
    msg.setDestinationEntity(187U);
    msg.source.assign("MTPRXHQHVLFNVVAZRDHFQLQBWPUJHSODTGPHYDJKDSVGMZGMPZCVIWMGUKYDFYJZCBOWEYMQCLLWJLCDVAGTUXAICDRXEORFBECODUWJKPKFSBHNAVUSUBNEZRZBMUEQCBIJTCOEXK");
    const char tmp_msg_0[] = {93, 46, -5, -85, 8, 51, 59, 63, 66, 63, -88, 21, -59, -56, -92, -38, -99, -31, -12, -77, -77, 84, 113, -117, 57, -76, 43, 82, -32, 53, 63, 71, -31, 79, 105, 52, 74, 116, -71, -127, 94, 82, 22, 61, 70, -116, 124, 32, -93, -10, -58, -90, -35, -42, -89, -34, 21, 71, -76, 18, -45, -33, 40, -97, -69, -100, -52, -47, 2, -50, 95, 110, 24, 76, -42, -81, 35, 31, -118, -62, 107, -46, -72, -17, -7, -32, 59, -38, -10, 103, 40, -13, 71, 21, 113, 117, 23, -16, 108, 49, -96, -55, 50, 108, -63, -88, 87, 67, 126, -65, -75, -26, 73, 94, -61, 21, 38, 117, 22, -76, 10, 6, 112, -105, 112, -50, 74, 38, 75, 88, -37, -45, 52, 2, 4, 54, 24, 115, 83, -103, 81, 57, -21, 66};
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
    msg.setTimeStamp(0.64236138108);
    msg.setSource(56815U);
    msg.setSourceEntity(172U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(244U);
    msg.seq = 47427935U;
    msg.state = 210U;
    msg.error.assign("FPGPNRYCTITIPBSVVRLSSKZBBICMEPRLSLAQMXGXKVIYGWDQVZFFWXTUFMYOMSJSLJNZXUCPAFIZINXZDEGRQIHWJUCPUGUNQHCLEZDRMXKDOVZVOQAHETRDKBGAZIHZPRKBCRHJIYWOFUWGYETTKWVVBMJNNYNRKTDQJCJEOQMJAMMFGAXQLJBWXJPMBEFYSAEASWXRUODNOLVXVCUHDEKNGIOQDGPHYHQFSOYAWPWUTALSZLUOHDL");

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
    msg.setTimeStamp(0.906623029627);
    msg.setSource(36871U);
    msg.setSourceEntity(67U);
    msg.setDestination(20032U);
    msg.setDestinationEntity(94U);
    msg.seq = 337003173U;
    msg.state = 156U;
    msg.error.assign("FFUMBQIHZQXOIZLELSOWXHWYMECBEVGJCJBTYGVWUGPBLOKFRSTRABUKFZKWGRFBNNYDVGODXXAJVNAJNARCJSEMZPLAXYFOSCOHZLJOCQHVMGXRXODMPGKNLFQZ");

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
    msg.setTimeStamp(0.9199466055);
    msg.setSource(48876U);
    msg.setSourceEntity(242U);
    msg.setDestination(55283U);
    msg.setDestinationEntity(207U);
    msg.seq = 3609476553U;
    msg.state = 139U;
    msg.error.assign("XKUUTSSCNMUQAEJPYEZKOPDOXQGMBCRQLDAEBFTKZNIAIGPBPINNNLZBF");

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
    msg.setTimeStamp(0.671225190916);
    msg.setSource(38625U);
    msg.setSourceEntity(168U);
    msg.setDestination(60215U);
    msg.setDestinationEntity(220U);
    msg.origin.assign("IYBYWYIRJUGQMWRACZUMQTXRGFYEPKOEHKDAOZFBMHCOVUZSMXUZJVPQMDBJCEEGNCRRXMKBQOL");
    msg.text.assign("CQHGPJKOSDBIUDXVEDGXJMMGOYQYFHGETEMMXTKLMNAOTYQWNDQLVURTYCYZUYASOBZJJKEFVTALIREXSRKVAFIKYMDBQXVVZPBXRMGHEXAJJCCFGOXWTOIIHZUTPRIFRUKQDHOIQCWGADQYONVWQAWCVASHBZPNECNRCLGVI");

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
    msg.setTimeStamp(0.734758449381);
    msg.setSource(3653U);
    msg.setSourceEntity(145U);
    msg.setDestination(26583U);
    msg.setDestinationEntity(169U);
    msg.origin.assign("SRXNLYEVMCULPYBGJEXQNUMPGKJXTETZHGPSMWGEZRSCIILIFFTBIRFCZVIMWKNLAHKBAWAIOZOPVMLQWJLJIKRDAMKIYRRGHWUEXYWKDSFJNVXVOWTCJHAZRKEOECTJQLTXAOFHMSANQGZRFKAVYWQUPQPHPLZQEGUDSXDSBXWM");
    msg.text.assign("UGDCVPFUPLPDJRBOZNFORGFGHMZCNTVSMEJTUEZSGFEIKQYVTDIWDWBSCBXNUBEPPHKYQGLKWFGJKXIJMEUFBAITYDKMQZNGLOYLWKRQACNHIRBMBCJWLOOOAYNCTJAXLGPVHOAFYWCVYHPHWTHZDLQXJVSQAUMSGXIRUPQSVWOSHZEIKRIZLMFHZRDQABEBAACOEGYKIMOCTHFQNXMIVQCDZAPRZYJEXDTDBWSN");

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
    msg.setTimeStamp(0.221630574464);
    msg.setSource(8125U);
    msg.setSourceEntity(34U);
    msg.setDestination(9869U);
    msg.setDestinationEntity(40U);
    msg.origin.assign("VECRMRJMZPUOKQIGSBNNEBLZXUHVFXSPSDUSIWTARHAPLYPKWMYCPESQSNCHQWXIGLZBVEBQWZGOLRMXANJXWLUFMMJQXCQALTWRRVHOPGAJLGE");
    msg.text.assign("TQWMVHIEUNKFFXPUGCAEVDDWKAQNIFUXFQBKJGDDHNSXLPHOKIURKTBIWCKHYHUJIRXFLLTKKFIYZMWVZMQOPKZXYSTMLOTSYVDOGOBMRGLAAUPUMQKNGGDQEZZAFNZUETJNRRCWAPHCJMLLPMTHDYHDYIPCWYCSQCGOTEBJVRVRHEQIYJAVGLWMNNBYWOQAQPUSMRFZSGBJLTSIW");

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
    msg.setTimeStamp(0.677630485444);
    msg.setSource(48245U);
    msg.setSourceEntity(223U);
    msg.setDestination(48290U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("VBOKTISRGI");
    msg.htime = 0.774885204179;
    msg.lat = 0.718471045886;
    msg.lon = 0.228406916775;
    const char tmp_msg_0[] = {-111, 85, -63, -95, 87, 79, -44, -33, 10, -90, 43, 73, 4, 6, -18, -82, -121, -83, -97, -17, -78, -34, 46, 61, -103, 71, -128, -62, -19, -113, 57, 82, -46, -56, -37, -5, 64, -49, -112, 91, 117, -38, 98, -80, 0, -104, -112, 36, 12, 6, -30, 52, -95, 83, -128, -74, 114, -57, -52, -14, -65, 77, -23, -107, -45, 114, 44, -86, -49, -109, 9, -36, 5, -100, 38, 110, 49, -26, 64, -32, 55, -40, -66, 84, 47, 98, -89, -84, 33, -55, 66, -92, 23, -51, -15, -12, -112, 42, -37, 51, -114, -127, -121, -121, -36, -39, -11, -69, 125, -35, -37, -109, -38, -85, -127, 125, 64, -82, 103, -42, 118, -81, -124, 47, -83, 111, 107, 87, 15, 72, 2, 112, 13, -13, -91, -98, -78, -33, 85, -110, -53, -21, -111, -29, -16, 44, -107, -94, 76, -100, 15, -39, -74, -89, -34, 59, -74, 53, 62, -65, 29, -122, -1, -23, 109, -6, -100, 85, 3, 99, -117, -45, -31, 49, -74, 32, -109, 35, -50, 49, 115, 22, 115, -80, 21, 82, -62, -59, 106, 117, 20, -66, 47, -66, -14, -81, 47, 45, 122, 5};
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
    msg.setTimeStamp(0.375558590347);
    msg.setSource(31232U);
    msg.setSourceEntity(34U);
    msg.setDestination(9831U);
    msg.setDestinationEntity(41U);
    msg.origin.assign("SCVIZKAICLJILIHKSNFUWZRGQDNGIGKSOAXKJGCLLOQQAOLMTEERRRHDXQYKTOYNDDPPUSGC");
    msg.htime = 0.079551247526;
    msg.lat = 0.964131021911;
    msg.lon = 0.817612933107;
    const char tmp_msg_0[] = {78, -33, 83, 48, -102, 21, -21, -24, -49, 42, 6};
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
    msg.setTimeStamp(0.391266004492);
    msg.setSource(609U);
    msg.setSourceEntity(70U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(191U);
    msg.origin.assign("QTOJPAIJBXJNFZJCWFOGDHVHLPBHFRFIAWJHRUZNHKUIZKUMWFCRYYXYJYAJKXBMTKGEKVZTRVREWOQSNIWSXIXSIIDSGBRAEQMBDMTAVWNLHFVGVBHIRGCZOJKVMPECATQYLISVYUOCZCPWUXUWOELVASZZQGPQXMPEYAMTKHUPYCEDMNOPNODSWERXNUOGAQSNBDGBKPELPRSCFLQDGTDBJHWLMSDZXLBTFVUUHRYOXICDCTLQTFEZYKG");
    msg.htime = 0.614284732193;
    msg.lat = 0.10812175885;
    msg.lon = 0.787727931224;
    const char tmp_msg_0[] = {-87, 22, 46, -14, -6, 9, 30, 88, 25, 120, -38, 78, 62, 79, -93, -95, 40, -44, -36, -68, -98, -128, -97, -23, -46, -127, -72, -122, -99, -99, 19, -30, -118, 7, -35, 51, -40, 62, -100, 28, 79, 113, -55, 125, 8, 3, 110, 106, -93, 38, 124, -51, -108, -33, 30, 30, -44, 64, 31, 30, 71, 117, -37, 52, 110, -118, -10, -103, -79, 29, -95, 33, 58, -71, 64, 120, 66, 52, 8, -66, -82, -14, 122, -71, -18, 38, -100};
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
    msg.setTimeStamp(0.734747341716);
    msg.setSource(50550U);
    msg.setSourceEntity(74U);
    msg.setDestination(56764U);
    msg.setDestinationEntity(73U);
    msg.req_id = 15927U;
    msg.ttl = 45992U;
    msg.destination.assign("NTDESWKNGMSOTMCOBFFKDHIZXUFLXVJAAHYUBLZQJUQCASZSUFLITWNGNOFODSKAPZSDMFOCFMWJVRGUWZQAUITABXXVVLGFCMTHYHIHSWRY");
    const char tmp_msg_0[] = {-54, -95, 93, -89, 102, 29, -117, -27, -60, -24, 11, -90, 89, -2, -114, -14, -83, -55, -93, 113, -98, 37, -15, -42, -4, -80, -81, 18, -53, 3, 56, -105, 38, 16, 123, 14, 34, 8, -92, -95, -37, 7, 63, 33, 93, -56, -77, 51, -22, -117, -113, -66, -74, 125, -25, 40, -127, 79, -1, 12, -44, 65, 64, -54, 70, -63, -9, 25, 15, 53, 19, -76, 11, 89, -96, -127, 44, -13, -31, 104, -72, 91, -62, 106, -1, -49, -119, 108, -5, -122, 101, -105, -33, 117};
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
    msg.setTimeStamp(0.924357768174);
    msg.setSource(12358U);
    msg.setSourceEntity(204U);
    msg.setDestination(652U);
    msg.setDestinationEntity(154U);
    msg.req_id = 45449U;
    msg.ttl = 48412U;
    msg.destination.assign("IJHXGRDVTBNNPROEHEAWXPBOQFCALOWTEPMFLGCCJUCSZDMWKGSRXTQLMZQUVMTMEWABLFGSKMJPMYIPNHLYUYWGTDFJENEHSEOHEHZRXHLRKVYJCQDNFVCRSOTYBNGTARDJUBAXOXFUAPZYVOKCYEVDSXGKFKGGMUDDIPWJWPKVCQOSACTUZXWIFYLOBQSVNUFFIZHQABJIVLWJ");
    const char tmp_msg_0[] = {107, -68, -97, 37, 3, -33, 103, -37, 31, 44, -34, 45, -19, -80, -94, -21, -81, -106, -37, -21, 126, -111, -62, 84, 99, 91, -78, -100, -94, -122, 23, 110, 90, -3, -47, -75, 108, -12, 36, -87, 62, -4, -56, -11, -39, -72, 117, 32, -23, -28, 31, -7, -50, 2, -106, -51, -28, -100, 114, -58, 123, 103, -121, -22, 45, -79, 0, 26, 39, -125, -20, 84, 113, -35, 113, 5, -102, 67, -109, -107, 65, -65, -40, -1, -108, 25, 107, 40, 28, -36, -120, 78, 72, 47, 98, -30, -26, -94, 116, -39, -55, -4, 90, 94, 8, 37, -8, 28, 73, 68, -61, 104, -85, 7, 111, 124, 30, 40, -77, 76, 65, -13, 10, 112, 72, -113, 1, -22, -90, -20, 13, -71, 0, -38, 12, -84, 71, 102, -73, -17, -1, -40, 56, -8, -73, 93, -17, -83, -85, 0, 89, 4, 66, -54, -17, -32, -126, 14, -71, -34, -102, -102, -92, 1, 6, 109, 30, 14, -57, 99, -1};
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
    msg.setTimeStamp(0.880024188481);
    msg.setSource(30503U);
    msg.setSourceEntity(215U);
    msg.setDestination(50407U);
    msg.setDestinationEntity(214U);
    msg.req_id = 18093U;
    msg.ttl = 26242U;
    msg.destination.assign("NNEQKHZCWXUBACHFXXAIJRPRPSYDELBVLOSRCN");
    const char tmp_msg_0[] = {-27, -110, 95, 52, 103, -86, -123, 15, 6, 14, 28, 20, 21, -75, 19, -47, 69, -9, 76, -96, 72, 36, 101, 95, -7, 26, -82, 40, -85, -105, -86, 125, 29, -127, 116, -74, -45, 43, -102, -2, -36, 7, 3, -86, -76, 55, 124, -124, -62, -79, 118, 17, 57, -83, -101, -16, -72, -114, 65, -91, 42, 2, 66, -78, -124, 21, -25, 11, 70, 91, 69, 72, -75, -14, -5, 24, -1, -108, 19, -108, -94, 123, -12, 78, -83, 98, -42, -93, 87, -101, 101, -21, -76, 7, -104, 43, 6, 122, -4, 23, 87, -29, -101, 26, -101, 72, -7, -64, -107, -83, -22, -118, 27, -123, -6, 74, -128, 49, 90, 77, 72, 81, -2, 12, 93, 64, 59, 3, 1, 95, 60, -84, -116, 11, -111, 74, 125, 115, 90, 38, 108, 53, -6, 31, -97, -78, 114, 72, -10, 22, 80, 43, -35, -50, -32, 90, -47, 1, -111, -56, 79, 90, 30, 59, 45, -74, 64, 117, -99, 124, 112, 80, 40, 87, -105, -33, 115, 20, 115, 2, -29, 32, 66, -88, -21, 61, -44, -59, -80, -68, -40, -87, 64, -34, 57, -68, -99, 120, 1, -126, -74, -11, -90, 58, 60, -110, 103, -76, -100, 87, -116, -45, 35, 40, 12, -109, 1, -65, -15, 110, 118, -58, -128, -37, 52, -75, 106, 96, 3};
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
    msg.setTimeStamp(0.6964099349);
    msg.setSource(40060U);
    msg.setSourceEntity(158U);
    msg.setDestination(7122U);
    msg.setDestinationEntity(46U);
    msg.req_id = 38795U;
    msg.status = 30U;
    msg.text.assign("WIECRBRSFJLWZHYZSITBGNKJRSGEFUFYRAOGNAWJIJNHUMRDGTXDZKZREMYKQXRPVEHMBBTUPJGCGWQLKVPVEULSLMZQJWYPJBZLVCBFDCDJNABCCSXS");

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
    msg.setTimeStamp(0.131894532141);
    msg.setSource(64747U);
    msg.setSourceEntity(232U);
    msg.setDestination(50740U);
    msg.setDestinationEntity(209U);
    msg.req_id = 37896U;
    msg.status = 127U;
    msg.text.assign("UPODOIXIIQZRDHUKJICBYGOYWAARPLPGMERBGFSEULOKHGWBYMVPWPHJWJTEMQNJZQXBHXBLMYMHVCKWAOEDJVEGTBSFPIGTZWQDKHOOVMXNSTIJLXVVCZAWNIJIYPEFVZCMYBVMFQZFDRONLUSMRKZFQNCQGFMQCLXSDUTBRLHGQKKTAGEHUITAUWLHAFUPWYXLKZREYXDKEJATFDDJXSWOYHSSEVSRPNVDQXNCJZBCSTPYLN");

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
    msg.setTimeStamp(0.460112506092);
    msg.setSource(64579U);
    msg.setSourceEntity(173U);
    msg.setDestination(3469U);
    msg.setDestinationEntity(216U);
    msg.req_id = 47690U;
    msg.status = 240U;
    msg.text.assign("TDXZQBCRFKKOWGWLONNJNWSXZVXYQGHPPSQIGSCHCVILHNSQRLWXYFUQBISKQNUGCLOZDXCBCJJYDKVGZPZNIJMPHKXOCFCEYYBD");

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
    msg.setTimeStamp(0.929542868038);
    msg.setSource(12334U);
    msg.setSourceEntity(247U);
    msg.setDestination(47101U);
    msg.setDestinationEntity(29U);
    msg.group_name.assign("ZBVCQFUIXIZYEXGEPBJMQTZHRSMNGCNUJFRW");
    msg.links = 3800446841U;

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
    msg.setTimeStamp(0.925096107607);
    msg.setSource(34172U);
    msg.setSourceEntity(230U);
    msg.setDestination(29756U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("PXXZJGXMGWMYHRJVZYBEPTWFATWWXXUTLFTWYYSMISSAELAVSEZLIYGTDBBJMCORTGBVIINLQNMKNR");
    msg.links = 1807108636U;

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
    msg.setTimeStamp(0.196941053545);
    msg.setSource(33930U);
    msg.setSourceEntity(215U);
    msg.setDestination(10778U);
    msg.setDestinationEntity(15U);
    msg.group_name.assign("LQHEGUOLRKAUYYIIZRRQUNSKODFIRVAGWZRKFBEEYXQQNNLFKDCPOBXUTLMWVEKR");
    msg.links = 4153470780U;

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
    msg.setTimeStamp(0.966241985741);
    msg.setSource(33020U);
    msg.setSourceEntity(99U);
    msg.setDestination(54165U);
    msg.setDestinationEntity(234U);
    msg.groupname.assign("DFMFLPPXAQJAHSNYRGUYNOSVVPXDMIIYRUJKTPZLFYUIXENXLCISRPGERYVQJVEHEZCTMXNCVXBWQQWYUHFGVFUPIPDSBETFVSPOADKEQWHDTADGRZIGKWWQIECLHKHLAURIOYZWWTMGVKDCAGGRJPIQ");
    msg.action = 197U;
    msg.grouplist.assign("TEOPKBGSFYZDLIGGDRCIHVSWUOPUETOQZBKKGAKSNTKALZVVLVWWJFETLUAJBONRQPORCEMFDXGBARXIKRAUXRSXNBFCJOPWEMTNYMHQHVHYKEZUWOTYDIWGJQZLLUQKVHTJPLQPGLFUNWHFEXMJENIRHYN");

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
    msg.setTimeStamp(0.283768644827);
    msg.setSource(50085U);
    msg.setSourceEntity(247U);
    msg.setDestination(46379U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("YZEBROTYAIECTVRLLRUBTFPHPBKZGNCAJHRKNKYAUZCRMOSCMPOEPIGGFUFG");
    msg.action = 186U;
    msg.grouplist.assign("ZFVHVEYVTVEBTMVMWGCKABKAZHJCPCGMIZVRFLEKZJAYBCANWPMCXGUUDQTPTSRUESWWXYSFRNSQZYDXOTGIMUHROESRBLFXFZKQHAFCADOVAWENKIERGELMPOIVCUHWGDAHLJTTPBQVYWGXDLMNJJQBCPNANJPTXOJIIBJMQOXLXUFBBSYLGZJTDXWHMJMKDUUBKIAELSRROFPIWFQQNKKYCPPGITZHSRSNYSWOHEUDNZCORFQKQZLDVIDGNX");

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
    msg.setTimeStamp(0.340318612428);
    msg.setSource(64058U);
    msg.setSourceEntity(163U);
    msg.setDestination(56186U);
    msg.setDestinationEntity(99U);
    msg.groupname.assign("HWBMVEJGZNDYLDZONZJLPSXWICWBBPNANAJKCQJPXBPAAXYKTZRNIJAEGGTUVLOHUXDEVGBCGCWPLTTKMBYSHUEIWYUJOLHSIMDFZFHZPIOSFOQQBLUMCT");
    msg.action = 107U;
    msg.grouplist.assign("SGUIYPHYPFFXTFPYMZGELKFDLXIBMRZKQWOAXDOEROIQPHXQJOINWJZESZKOMWGZKNXPBZKBELMJGHLLNPYANCFVKCRJUGJXWTBPLMHIVEJVUTASHJDCQKSBUIUAARUQCDNLUKYQJDWYRMBSHBDE");

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
    msg.setTimeStamp(0.478516031026);
    msg.setSource(38481U);
    msg.setSourceEntity(170U);
    msg.setDestination(55023U);
    msg.setDestinationEntity(58U);
    msg.value = 0.308056629263;
    msg.sys_src = 6882U;

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
    msg.setTimeStamp(0.104608207621);
    msg.setSource(2239U);
    msg.setSourceEntity(25U);
    msg.setDestination(17999U);
    msg.setDestinationEntity(228U);
    msg.value = 0.107541171795;
    msg.sys_src = 29009U;

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
    msg.setTimeStamp(0.280509814548);
    msg.setSource(20014U);
    msg.setSourceEntity(10U);
    msg.setDestination(20330U);
    msg.setDestinationEntity(84U);
    msg.value = 0.118049292975;
    msg.sys_src = 56458U;

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
    msg.setTimeStamp(0.737833253057);
    msg.setSource(5064U);
    msg.setSourceEntity(123U);
    msg.setDestination(15325U);
    msg.setDestinationEntity(165U);
    msg.value = 0.217093277057;
    msg.units = 101U;

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
    msg.setTimeStamp(0.536254000837);
    msg.setSource(18538U);
    msg.setSourceEntity(245U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(27U);
    msg.value = 0.938902229385;
    msg.units = 236U;

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
    msg.setTimeStamp(0.345481679479);
    msg.setSource(22790U);
    msg.setSourceEntity(136U);
    msg.setDestination(32411U);
    msg.setDestinationEntity(197U);
    msg.value = 0.232059672626;
    msg.units = 61U;

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
    msg.setTimeStamp(0.102799576615);
    msg.setSource(48245U);
    msg.setSourceEntity(36U);
    msg.setDestination(46815U);
    msg.setDestinationEntity(180U);
    msg.base_lat = 0.621803434311;
    msg.base_lon = 0.252823916967;
    msg.base_time = 0.330071518689;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 21642U;
    tmp_msg_0.destination = 40239U;
    tmp_msg_0.timeout = 0.944797620118;
    IMC::RhodamineDye tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.051306755992;
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
    msg.setTimeStamp(0.739154535397);
    msg.setSource(45970U);
    msg.setSourceEntity(11U);
    msg.setDestination(49354U);
    msg.setDestinationEntity(34U);
    msg.base_lat = 0.564443235313;
    msg.base_lon = 0.622662700622;
    msg.base_time = 0.588897189073;

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
    msg.setTimeStamp(0.174475794392);
    msg.setSource(22779U);
    msg.setSourceEntity(111U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(58U);
    msg.base_lat = 0.38208284119;
    msg.base_lon = 0.00760888556218;
    msg.base_time = 0.996991061886;

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
    msg.setTimeStamp(0.961142292259);
    msg.setSource(65159U);
    msg.setSourceEntity(160U);
    msg.setDestination(23999U);
    msg.setDestinationEntity(179U);
    msg.base_lat = 0.194658086035;
    msg.base_lon = 0.344879664363;
    msg.base_time = 0.413932146853;
    const char tmp_msg_0[] = {125, 60, 54, 95, 80, 40, 23, -45, 107, 107, 50, -3, -30, 95, 119, 61, 126, -111, -121, -58, -16, -108, -37, 51, -67, -50, 96, -71, 15, -26, 53, -65, -106, 12, -14, -126, 53, -100, 109, 16, 0, 34, 87, 102, -106, -57, -126, 49, -6, 80, 8, 98, 121, -8, 97, 8, -119, 8, 27, -7, 64, -80, -54, 6, 52, -30, -91, 85, 88, -84, -57, -88, -121, 55, 31, 79, 70, 22, -115, 33, 126, -50, 23, -59, 66, -26, -62, -91, 23, -63, -69, -49, -51, 45, 55, -100, 3, -55, 50, 37, 29, 119, 12, -121, -77, -101, -43, -108, 26, -82, -21, 71, 48, 79, 41, -73, 34, -72, 2, 76, -88, 103, 3, -56, 83};
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
    msg.setTimeStamp(0.636743333786);
    msg.setSource(27559U);
    msg.setSourceEntity(41U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.349215305318;
    msg.base_lon = 0.540578703163;
    msg.base_time = 0.528379624385;
    const char tmp_msg_0[] = {37, 66, -34, -56, 5, -46, -56, -77, 80, -46, -116, -28, 93, -106, -125, -39, 51, -85, -87, 84, 23, 45, -20, 124, -100, -128, 30, -31, 77, 114, 50, -126, 29, -78, -37, 30, 33, 103, -32, -13, -123, -122};
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
    msg.setTimeStamp(0.667579563361);
    msg.setSource(1808U);
    msg.setSourceEntity(136U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(193U);
    msg.base_lat = 0.4945557621;
    msg.base_lon = 0.836432027918;
    msg.base_time = 0.580907840589;
    const char tmp_msg_0[] = {122, 50, 70, -26, 78, 67, -62, 30, -86, -6, 94, -24, 36, 81, -78, -11, -20, -27, -4, 3, 25, -103, -49, 83, 114, 26, -38, -55, 46, 64, -99, -62, 52, 76, 67, 60, -77, -15, -107, 120, -39, 117, 122, -110, -88, -37, -5, -57, -37, -68, 104, 60, -123, 1, -20, -77, 74, -32, 71, 39, -90, 99, -55, 126, 87, -17, 65, -20, -44, -98, 47, 108, -121, -125, 84, 60, -15, 114, -81, -65, 107, 31, -5, -99, -88, 122, -106, 114, 53, 112, -85, -37, -63, 111, 114, 73, -54, 115, -119, -92, -75, -1, -7, 101, -100, -72, 92, 8, -80, 46, 101, -48, -31, -63, 95, 98, -74, -68, 83, 14, -61, -122, 119, 15, -33, -7, 112, -16, 7, -77, 51, -86, 80, -72, 65, 8, 35, 27, 116, 83, 116, 121, -29, -56, -124, -37, -42, -73, -90, 43, 46, -109, -32, 118, -33, 88, 85, 92, 23, -17, -14, -99, -3, 114, 91, -127};
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
    msg.setTimeStamp(0.873812244068);
    msg.setSource(19318U);
    msg.setSourceEntity(77U);
    msg.setDestination(42927U);
    msg.setDestinationEntity(13U);
    msg.sys_id = 46779U;
    msg.priority = -23;
    msg.x = 8012;
    msg.y = 6679;
    msg.z = 17205;
    msg.t = 1520;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 172U;
    tmp_msg_0.entities.assign("CHVFKGPSDZRJVOADRXPXNHGZIHDTUNGWFTUJBJVBHFRAJGLMHYENXBLSWLMFYZVQICASQNQTORLWHIPZUEYBOOJTUIOBVKTJNAJILEYQPKSXDAZZIXLSDTCMFFISEDUOLSOESPRMMGXTHUCVJXDKWUXEFITYEKSWREYPFVTZHGGLPKIKLW");
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
    msg.setTimeStamp(0.43767020402);
    msg.setSource(34806U);
    msg.setSourceEntity(208U);
    msg.setDestination(40650U);
    msg.setDestinationEntity(212U);
    msg.sys_id = 37143U;
    msg.priority = 124;
    msg.x = -16937;
    msg.y = -4508;
    msg.z = -9563;
    msg.t = -18854;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 200U;
    tmp_msg_0.list.assign("GAKDRTBKYVRSRZDYBAVYPYMANUGBGIMVZWHAE");
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
    msg.setTimeStamp(0.162566297667);
    msg.setSource(41164U);
    msg.setSourceEntity(235U);
    msg.setDestination(37535U);
    msg.setDestinationEntity(131U);
    msg.sys_id = 22340U;
    msg.priority = 24;
    msg.x = -26516;
    msg.y = 30327;
    msg.z = 3020;
    msg.t = -2560;
    IMC::ManeuverDone tmp_msg_0;
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
    msg.setTimeStamp(0.866769502984);
    msg.setSource(47376U);
    msg.setSourceEntity(42U);
    msg.setDestination(44634U);
    msg.setDestinationEntity(83U);
    msg.req_id = 7807U;
    msg.type = 105U;
    msg.max_size = 48563U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.980763884398;
    tmp_msg_0.base_lon = 0.997202399819;
    tmp_msg_0.base_time = 0.236399671793;
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
    msg.setTimeStamp(0.253363628187);
    msg.setSource(3093U);
    msg.setSourceEntity(129U);
    msg.setDestination(7240U);
    msg.setDestinationEntity(224U);
    msg.req_id = 43591U;
    msg.type = 132U;
    msg.max_size = 27301U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.318061816869;
    tmp_msg_0.base_lon = 0.163190327233;
    tmp_msg_0.base_time = 0.837289971598;
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
    msg.setTimeStamp(0.850948014617);
    msg.setSource(6247U);
    msg.setSourceEntity(110U);
    msg.setDestination(59742U);
    msg.setDestinationEntity(137U);
    msg.req_id = 37283U;
    msg.type = 65U;
    msg.max_size = 42032U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.436876288075;
    tmp_msg_0.base_lon = 0.44079292276;
    tmp_msg_0.base_time = 0.755283934196;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 24939U;
    tmp_tmp_msg_0_0.destination = 19443U;
    tmp_tmp_msg_0_0.timeout = 0.592958594977;
    IMC::Chlorophyll tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.388645416602;
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
    msg.setTimeStamp(0.626675429384);
    msg.setSource(60473U);
    msg.setSourceEntity(187U);
    msg.setDestination(48480U);
    msg.setDestinationEntity(254U);
    msg.original_source = 29646U;
    msg.destination = 57071U;
    msg.timeout = 0.638902733687;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.671592128961;
    tmp_msg_0.ch02 = 0.231572654117;
    tmp_msg_0.ch03 = 0.639396890536;
    tmp_msg_0.ch04 = 0.835663779092;
    tmp_msg_0.ch05 = 0.909301629245;
    tmp_msg_0.ch06 = 0.812335342395;
    tmp_msg_0.ch07 = 0.199609621256;
    tmp_msg_0.ch08 = 0.202590902746;
    tmp_msg_0.ch09 = 0.3034692157;
    tmp_msg_0.ch10 = 0.104713289866;
    tmp_msg_0.ch11 = 0.230814357669;
    tmp_msg_0.ch12 = 0.916044236798;
    tmp_msg_0.ch13 = 0.377779824804;
    tmp_msg_0.ch14 = 0.8709835697;
    tmp_msg_0.ch15 = 0.229622233089;
    tmp_msg_0.ch16 = 0.832516742659;
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
    msg.setTimeStamp(0.850876011463);
    msg.setSource(35504U);
    msg.setSourceEntity(9U);
    msg.setDestination(24160U);
    msg.setDestinationEntity(87U);
    msg.original_source = 9435U;
    msg.destination = 48694U;
    msg.timeout = 0.755857435257;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.539067642295;
    tmp_msg_0.temperature = 0.3944788696;
    tmp_msg_0.depth = 0.921658505495;
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
    msg.setTimeStamp(0.667976051927);
    msg.setSource(56474U);
    msg.setSourceEntity(0U);
    msg.setDestination(4504U);
    msg.setDestinationEntity(223U);
    msg.original_source = 59219U;
    msg.destination = 23524U;
    msg.timeout = 0.913609725889;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 108U;
    tmp_msg_0.range = 0.578984716143;
    tmp_msg_0.acceptance = 213U;
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
    msg.setTimeStamp(0.539623353397);
    msg.setSource(48706U);
    msg.setSourceEntity(12U);
    msg.setDestination(19076U);
    msg.setDestinationEntity(5U);
    msg.type = 87U;
    msg.comm_interface = 32334U;
    msg.model = 18767U;
    msg.list.assign("NFZVSPSSRZOHOWLMLMVKGKSSOQWJYAHRPKTQMEMDXSMXIZPBTDWECJXARYEERDHLUWLSCECKYJCDNIQVNFRJOIPQBDKFYKKIZUPXCNZUXQZGQTOSNIDFOJAPBCAXFGWABJBGBJVLCUHZCUAZMUQLENBFUVDYVNTRLIVJIHHXTIVOPBZLYPUMXCTTGSGRJGHFFKWQTGYQFNVJAULAMTSRRATHKLGKWNFO");

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
    msg.setTimeStamp(0.845514515351);
    msg.setSource(49149U);
    msg.setSourceEntity(69U);
    msg.setDestination(33932U);
    msg.setDestinationEntity(75U);
    msg.type = 220U;
    msg.comm_interface = 42207U;
    msg.model = 26837U;
    msg.list.assign("IEFYMPNFWXLURKIWBGCVHHJOKPXKEIITMWFMJEJXAAPCPQNWOHKJQNRZNRALIFDYGOAVWVHBNUVZMBRIUQLXTNZEXGCTLOEFOHZYSDKKSUUBFDEQCICBSTYXACVBAB");

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
    msg.setTimeStamp(0.557150217506);
    msg.setSource(34448U);
    msg.setSourceEntity(114U);
    msg.setDestination(7544U);
    msg.setDestinationEntity(242U);
    msg.type = 67U;
    msg.comm_interface = 4701U;
    msg.model = 10357U;
    msg.list.assign("ZDPLGUMRSPSQJNTNWJYGXOWSNQYCLMLPYNCWKZYDOPBAYZLXRXFVXTDOEHGAVQUKTUCJSSFTDIDFGQIXRDHJIFFELSCUSBCWFORWBGOVGIENOAEGOSBCMKCWINREOFUKORPLDLEZIJGRAEFIEYQHQWEAIVTCKPDNBLXHDTMHXZPZVSTNS");

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
    msg.setTimeStamp(0.674111283182);
    msg.setSource(61570U);
    msg.setSourceEntity(45U);
    msg.setDestination(57062U);
    msg.setDestinationEntity(247U);
    msg.type = 154U;
    msg.req_id = 3012531565U;
    msg.ttl = 32556U;
    msg.code = 176U;
    msg.destination.assign("JACGPVLOUOYNCSHNMFFPDQXWZBQLWTNJIUNYJUYAGLKARHMOXVLDRHKWLUSPOFIVOEEJLUZYPTCGDEBVDK");
    msg.source.assign("PRBFCFPGKPSHTLVKUXMSNNXBAZVZQEZGCYTULLGYPMBWNARQMHYCMLJWJQBXQIMVCHGTKLQFLDRJCJXEKVVBNVXOYFIBNUESWGMVTBKFXPAIHUHQGMOARHGTUWCRCVVZGSMEWA");
    msg.acknowledge = 129U;
    msg.status = 28U;
    const char tmp_msg_0[] = {-32, -12, -13, -96, 104, -109, -117, 91, 125, -122, 15, -14, -60, -78, -42, -111, -84, 98, -53, 52, 26, -104, 13, 33, 63, 111, 55, 29, 117, 25, -95, -29, -44, -95, -45, -85, -76, -75, -64, 63};
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
    msg.setTimeStamp(0.171717832269);
    msg.setSource(38219U);
    msg.setSourceEntity(229U);
    msg.setDestination(48145U);
    msg.setDestinationEntity(147U);
    msg.type = 191U;
    msg.req_id = 334275928U;
    msg.ttl = 21058U;
    msg.code = 174U;
    msg.destination.assign("JYTNYEOJQUPKRVJLSYWULMZVEDPERPKMITZPBOQDHCXADLKNSBJGEVCXWZFYSWOQBXBHUEKUWLICOWDBQOFRDZJFQDRTCMIUFJNBUF");
    msg.source.assign("OJGIZVVFJLALSSEJAFWXEOCGFHYWKVBYXDFEOSLAELSVTWCMAVRACYQXAPENDDMHQGHBTKQOXJTXTRPFGUOKUMJBLWUURZDUUUZWKXXS");
    msg.acknowledge = 221U;
    msg.status = 13U;
    const char tmp_msg_0[] = {25, 40, -109, -72, 42, 100, -40, 99, -114, 108, 23, -80, -14, 58, -106, -84, 125, 15, 56, -50, -28, 101, -19, 34, -103, 108, -85, 77, 45, 67, 123, -58, 58, 67, -113, 33, -67, 53, 51, -127, -30, -60, -120, -96, 12, -68, -30, -50, -96, 89, 5, 107, -3, -116, 105, -77, 86, -18, -113, -26, 96, 47, 24, 3, 91, -68, -90, -43, 123, 43, -112, 78, 5, -116, 94, 21, -48, -55, -93, -36, 72, 81, -103, -75, 84, 42, -120, -4, 93, -65, -120, 42, -84, -31, -54, -20, 106, 103};
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
    msg.setTimeStamp(0.147933277452);
    msg.setSource(36253U);
    msg.setSourceEntity(136U);
    msg.setDestination(64348U);
    msg.setDestinationEntity(148U);
    msg.type = 230U;
    msg.req_id = 3206228255U;
    msg.ttl = 8759U;
    msg.code = 115U;
    msg.destination.assign("UOVIZTCSIYCIDFKOTAXCRVNFRBLOXLJNAVDUSGHVBMGOQNAZIJIWWPQNMXFUDRBTKDXDIFELIFSBHSWJVNVPYMUNJTTPCLUHBRYHIHUCNUWHYQGCFKZZYOMMMUSLHDAWGQHHJFRBWJZKCFJRPEAIEZTNBWKGPTXHRTBAOROVADFSLBWSRQKWLXXONVKTMLVGUDEOQMQPLGTEFJGSBGYJRNSWGKPAPEEKPYLEXCVQKDEQYA");
    msg.source.assign("CPZGIBKYHIMCVDGEREKYGZADGXKEQDVMQQRVZSZYCXXCMSWPMBPHQBZMSNKPYNIERBHZAOQDIRUSWGURVNJLMBZMIUBUBRVQHTWWHNKDAXGUZANFQJXABY");
    msg.acknowledge = 131U;
    msg.status = 211U;
    const char tmp_msg_0[] = {-116, -118, -64, -10, 100, -45, -49, 77, -87, 54, 100, -25, -70, 101, -119};
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
    msg.setTimeStamp(0.385888489206);
    msg.setSource(30978U);
    msg.setSourceEntity(88U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(113U);
    msg.id = 77U;
    msg.range = 0.0909833689165;

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
    msg.setTimeStamp(0.187233963954);
    msg.setSource(30574U);
    msg.setSourceEntity(208U);
    msg.setDestination(22733U);
    msg.setDestinationEntity(154U);
    msg.id = 68U;
    msg.range = 0.607873667683;

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
    msg.setTimeStamp(0.264699339213);
    msg.setSource(64447U);
    msg.setSourceEntity(239U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(143U);
    msg.id = 192U;
    msg.range = 0.135992285379;

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
    msg.setTimeStamp(0.836209527917);
    msg.setSource(21282U);
    msg.setSourceEntity(60U);
    msg.setDestination(51230U);
    msg.setDestinationEntity(34U);
    msg.beacon.assign("ILIUNBIXWDUJFRVPUQQXLVAYMXOBXYQDGPXOKETGHZUQPPLLSUUJWASJEJZGDMGIDSFSZNMR");
    msg.lat = 0.687262505755;
    msg.lon = 0.555854816664;
    msg.depth = 0.640715355982;
    msg.query_channel = 9U;
    msg.reply_channel = 27U;
    msg.transponder_delay = 3U;

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
    msg.setTimeStamp(0.321038960765);
    msg.setSource(23999U);
    msg.setSourceEntity(47U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(171U);
    msg.beacon.assign("NHEVUTDFZTZBDNFMDQJZSRXCLMRDIBGTJSYELQPKFLKRVKSGJVVELBBFDIJBFKNNKLUBJQRSMAANJYHNYWNUHHMLZYQWHOTDUYZUAOUGXAVYDOXVCXNWGIBAYWIDXILUCXSMQPPICZEXYRQWLZLQMPWDEIEATYQPPNXRIGROFBCFOOKSTXGGWJWAUZKJCFMMSQRYKCFERTGCWOLGPPHBTURDEPAXEZKWVSVCJ");
    msg.lat = 0.813376168022;
    msg.lon = 0.465752344208;
    msg.depth = 0.929619659633;
    msg.query_channel = 9U;
    msg.reply_channel = 96U;
    msg.transponder_delay = 145U;

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
    msg.setTimeStamp(0.778584498977);
    msg.setSource(14893U);
    msg.setSourceEntity(180U);
    msg.setDestination(60993U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("BFZOUWCOYTRBWMNUCEHAQHSWQSSGBPNAWTKOPLCTLHMAZPVLCLGCADBUUEGTARF");
    msg.lat = 0.880794893451;
    msg.lon = 0.786005308791;
    msg.depth = 0.0331658017745;
    msg.query_channel = 252U;
    msg.reply_channel = 224U;
    msg.transponder_delay = 16U;

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
    msg.setTimeStamp(0.962055871581);
    msg.setSource(58879U);
    msg.setSourceEntity(12U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(55U);
    msg.op = 94U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZAYUZVZPFRPXJKZABIDLNURNFWBBFOCWYEVEYQSRRMRKEONEKHYHWHSIJXLYLXJUGSMDTMQOHFRU");
    tmp_msg_0.lat = 0.666278483528;
    tmp_msg_0.lon = 0.857221884674;
    tmp_msg_0.depth = 0.635834857197;
    tmp_msg_0.query_channel = 31U;
    tmp_msg_0.reply_channel = 251U;
    tmp_msg_0.transponder_delay = 254U;
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
    msg.setTimeStamp(0.900284121649);
    msg.setSource(52978U);
    msg.setSourceEntity(35U);
    msg.setDestination(20247U);
    msg.setDestinationEntity(71U);
    msg.op = 80U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JUDCIIMSAFTVUYXPOLPRGRUEXSGZRBRJWMOVPITTYESDPWQPYRRVITTEQMZAQCAOJDWFXLYAZMGCDBCHUSHPPVQQGNLUNGIELVHYUWJHKSLXMNLZBAKYDWJVXOTTCNFLHBOFSCFXIXYBAUOCZPFJNHBGYDTKIAXCYLRSIOHVDIJDQCFYVZFKPMGIFVHERNWAQKCXUUZOELRJKQNWAMRNSKQHGWNSVPZZSZBKKEMBAEJWQKNB");
    tmp_msg_0.lat = 0.55998302551;
    tmp_msg_0.lon = 0.144359848119;
    tmp_msg_0.depth = 0.198918809575;
    tmp_msg_0.query_channel = 53U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 125U;
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
    msg.setTimeStamp(0.102823576238);
    msg.setSource(17218U);
    msg.setSourceEntity(232U);
    msg.setDestination(48562U);
    msg.setDestinationEntity(214U);
    msg.op = 161U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LEIMZEGVNXBNGSLOJYRNXJDLYHICCJFXSWSKQUTDFHKOUGSARCGDAYHAQSQBCXNKVMTRQOFYBVNKGBOWWISOITYFRFNKY");
    tmp_msg_0.lat = 0.828822169126;
    tmp_msg_0.lon = 0.432496466144;
    tmp_msg_0.depth = 0.185901110924;
    tmp_msg_0.query_channel = 98U;
    tmp_msg_0.reply_channel = 137U;
    tmp_msg_0.transponder_delay = 28U;
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
    msg.setTimeStamp(0.390119793882);
    msg.setSource(51644U);
    msg.setSourceEntity(198U);
    msg.setDestination(12401U);
    msg.setDestinationEntity(121U);
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0537036124174;
    tmp_msg_0.y = 0.323542975442;
    tmp_msg_0.z = 0.958274903821;
    tmp_msg_0.t = 0.287294301857;
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
    msg.setTimeStamp(0.417173586174);
    msg.setSource(42382U);
    msg.setSourceEntity(23U);
    msg.setDestination(13741U);
    msg.setDestinationEntity(49U);
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 62131U;
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
    msg.setTimeStamp(0.647438834953);
    msg.setSource(58847U);
    msg.setSourceEntity(123U);
    msg.setDestination(48645U);
    msg.setDestinationEntity(139U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("DXAFHTWZUURWCCNARSJGYSMFPQSLVHFLIDPENIIAZYNDLKTSHOQIIWRGGBRVXCGJQQCFWXPMTNHCBYIONYXBJBOLXFXKFVTZEDJKTSVZWNGAWAVLPSBQAWDTVLVHIKSARQSUUFOPBPTTGJNFKEBAMRJDJBRXRZCRTOEWUDZCMZPKOEHMIEPQQVXAGK");
    tmp_msg_0.state = 53U;
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
    msg.setTimeStamp(0.797775507029);
    msg.setSource(48172U);
    msg.setSourceEntity(21U);
    msg.setDestination(39641U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.591456941893;
    msg.lon = 0.756421067946;
    msg.depth = 0.571699765324;
    msg.sentence.assign("NWETVKEHGSDHVSZNFEXLBCTGQLOPMRIQGRSNQMUMTLXKZSMWUUAZCSWTRWBPYNZJWBCYFDSTQCLGXEIVKGPDDNVFNHXUYMI");
    msg.txtime = 0.488972281294;
    msg.modem_type.assign("JILOZQIDYJOMHPHBOWFFCEPGEQOMIDMQTQSAHGXHMSWXKSROLENABUCZYYTXYCWUFMJBXJUPWNOSHQOKTMKAZFBPDB");
    msg.sys_src.assign("VVTCVYTBHDQGWYUXEMEE");
    msg.seq = 56909U;
    msg.sys_dst.assign("IAQBAWECEJJKTTQDCJ");
    msg.flags = 5U;
    const char tmp_msg_0[] = {-70, 96, 26, 17, 113, 25, 67, -24, 122, -58, -124, -60, 9, 17, -123, 59, 3, -72, -108, 45, -20, 44, 105, -92, 17, 20, 85, 65, -16, -109, -47, -16, -62, -80, 123, 76, 31, 24, -99, 83, -64, 106, 33, 77, -40, 100, 55, 34, -39, 86, -5, 111, 57, 123, 59, -42, 120, 21, -125, 55, 38, 125, -88, -8, -8, 83, -54, 47, 3, 96, -48, -31, 71, -95, -94, 82, 63, 14, -63, -83, -31, 92, -23, -8, 111, -99, -60, 48, 26, -102, 44, -105, -16, 126};
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
    msg.setTimeStamp(0.74544874208);
    msg.setSource(63894U);
    msg.setSourceEntity(220U);
    msg.setDestination(11800U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.800560108295;
    msg.lon = 0.663039719528;
    msg.depth = 0.400339705119;
    msg.sentence.assign("KRXRHGJRWNCWFCNEDFITFUBJYQFMUCRDOAETODIBVNADAEOAKALBKTDNPPQHHZJZYGCSVTSTWNECOYBBBXLSHKQIPDPXPOTSHORHFMOXBXMFQQMLAGWUGRZYMLVPQEUPXIDRGGSYCNPNZUDEZWJMSQYFQVZOFXVJWQAYHSUMUDSXVFMAGAEZKITVCNJLOEKWTCHYNCHLOWKLDPSJIAMGJYZNJXISRUBUZRZY");
    msg.txtime = 0.708850199395;
    msg.modem_type.assign("DHQAVNHKTVLYSIZMLBDZPRHNODHFACONFILEUCINJJYONHSRPQRCZDUJDPEZZNDEGWYZPBWULXVWPUZMXTWQMMWBWGXGLIJPVQVDVNWKNTJOESRBBFGWZCEDTQXUFOLEXY");
    msg.sys_src.assign("VZHJZKMQEPGYXTFYPRIYKMGAMHVO");
    msg.seq = 20295U;
    msg.sys_dst.assign("CJRGCDYOAPQFXCKHCTLEDILNFEHUKBXWEZABRNFQWQZIHRGOXZKRMJQURRKWNBOLVGZYSYZBVOULIPDACRSGVZNISEFTAGXDWPPDKVXIYSQ");
    msg.flags = 155U;
    const char tmp_msg_0[] = {25, 125, -84, -46, 126, 52, 16, 84, 34, 45, -36, -99, 36, -95, 11, 3, 35, 40, 86, -118, -78, -122, 89, -35, -73, 15, 16, -28, 124, -86, -48, 26, -28, 1, 122, -105, 63, -60, 23, 73, 56, 100, 70, -105, 70, -2, -72, 109, -19, 77, -96, 77, -74, -121, -67, -89, -54, -80, 120, 9, 47, -60, 112, -122, -82, -22, -83, -112, -104, -51};
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
    msg.setTimeStamp(0.782898212452);
    msg.setSource(2194U);
    msg.setSourceEntity(148U);
    msg.setDestination(54873U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.697638036923;
    msg.lon = 0.696619482264;
    msg.depth = 0.261756038078;
    msg.sentence.assign("KBAUNEVZWAPNLKBPSYGTYLFDQZWJOFBIUYZCXGIHMFMQPOVHQVHKFPOIAGPPVBW");
    msg.txtime = 0.379526770736;
    msg.modem_type.assign("HFWEPANZYKDAOJVPOCIRJCXUBBXMMCKVUHWTKVMUZRWCYG");
    msg.sys_src.assign("VEAVCHZWEJMEEJKOLFVSFUNBMGL");
    msg.seq = 48885U;
    msg.sys_dst.assign("YLOHRTIZJLQPPACHRIDND");
    msg.flags = 188U;
    const char tmp_msg_0[] = {24, 93, -75, 94, 13, -24, 76, 42, 123, -11, -40, 60, -116, 62, -71, 8, 72, 100, 120, 103, -122, -108, -42, 55, -58, -30, -78, -105, 93, 44, -128, -71, -47, -84, 79, -19, -127, -37, -25, -17, -23, -93, 12, -20, -104, 119, 22, 50, -45, 69, -46, 63, 102, -12, -63, -21, 36, 111, 98, -8, 52, -102, -54, 0, -117, -2, -93, -34, -127, 21, -104, -118, -63, -59, -38, -30, 3, 82, 76, -17, -18, -105, 80, 14, 96, -107, 69, -1, 17, 108, 60, 45, 81, -54, 32, 90, 4, -121, -1, 85, 74, 110, -79, -71, -7, 24, 81, 111, -32, 66, 50, 44, 40, -123, 57, -20, 26, -40, 77, -24, 47, 122, -127, 14, 113, -79, 73, -122, -98, 41, -69, 14, -124, -73, -33, -33};
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
    msg.setTimeStamp(0.512738167302);
    msg.setSource(57505U);
    msg.setSourceEntity(190U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(197U);
    msg.op = 57U;
    msg.system.assign("JWZDEUIHUQXEUHBOMACMFOXIWBGIMNHGOQSVQPZALYUZXVIVQABNCTBRFPMBCLRNDPJRDVTTGBLSCZVMCKRUDAWNFRZXOWGKRJXWDDUCXKZWGIBJYPPFMVAFSDPGPLJYLSZMHHPJVUOEORYEGTCOWIYVEHXDPESSINFMT");
    msg.range = 0.223680724242;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 172U;
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
    msg.setTimeStamp(0.00117325526929);
    msg.setSource(26974U);
    msg.setSourceEntity(252U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(199U);
    msg.op = 144U;
    msg.system.assign("BBQJRRSINYCMJUFVUZIBUFWDPNHVYXTDNQKIBEOCMHAWPQLGKEVNOFHKRWNBNBYXSACPZVWPJFDWIMLCEOHLGAFFOPRNSMLPS");
    msg.range = 0.732159194137;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 31866U;
    tmp_msg_0.rpm = 0.486449171326;
    tmp_msg_0.direction = 217U;
    tmp_msg_0.custom.assign("HTGVOFCLWZKOKMLQUWHJWCYVKEFSRUYXVEGOLMENSBODPHTZRJEFEZHCLVOBFUTOTYIJHBVUIJBDKTDGGHJPYVLYUXHQFOEKGFCESSMXVCCPCZINIPNMHHQOICXUWUGMJZGAMQPRUIMNRADQXWKBLNWYZJQVKBQCUVWRTIPQFKWMZBFYSPPMGZATYR");
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
    msg.setTimeStamp(0.135287736234);
    msg.setSource(26930U);
    msg.setSourceEntity(20U);
    msg.setDestination(40920U);
    msg.setDestinationEntity(122U);
    msg.op = 105U;
    msg.system.assign("DESFRCVMGPOBHNQDIAJZXXORNMZRQNSGRCUAYZSTLKJYLCHXHICUCEIZEKKOXVQYFDFCPBHKTNXMTPDBMBAGFOALOKOPWAOJTFRBXKNQAVXYIJQHPTYEHYLZOWZRSUHHZPTRG");
    msg.range = 0.178300563552;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("ZEUPFIZDVWSXVBPNAUVOVMGUTHJCHBTBOLKLCTNVNCZWQEQRCSAZUGXUPZATMGUXQHMRYWXJPCLBXZKBBYKIFLYQQCJBUAGNVCPYFFWNIKNPSRUOAHAIETIBXEQYNVZJESFGKFGZGXNDHLWYFEDLKDOYIPAIROMODNGPVJJRSJKDDHHEVMDTAEMQOTWZUJFOYPPYBM");
    tmp_msg_0.rssi = 0.0151683297287;
    tmp_msg_0.integrity = 4804U;
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
    msg.setTimeStamp(0.276074945184);
    msg.setSource(13759U);
    msg.setSourceEntity(138U);
    msg.setDestination(60098U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.789485650388);
    msg.setSource(52280U);
    msg.setSourceEntity(117U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.51153226053);
    msg.setSource(7815U);
    msg.setSourceEntity(92U);
    msg.setDestination(61531U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.515474210979);
    msg.setSource(27070U);
    msg.setSourceEntity(97U);
    msg.setDestination(44994U);
    msg.setDestinationEntity(193U);
    msg.list.assign("JAOPZVXPYXYVRJYUDMQGAWDNYMORUSTCIBMFGZYSTALGJUEKKOKEPYFWTJUCXHNEAHBFFYGIYXHHCOJCSDCNOHRFRORIUUBNDTMIHAGZLZHQACBJVNDYFQAAOEIMSVVVJKTWPLKOC");

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
    msg.setTimeStamp(0.260531437859);
    msg.setSource(38824U);
    msg.setSourceEntity(134U);
    msg.setDestination(28093U);
    msg.setDestinationEntity(37U);
    msg.list.assign("GNFMPHOULPYVOEXUXLFNHWONCRSXGLXJSGJYBPKSLLEPCHYQVHQKOBFWYPZWCTLDKGIXJEVHKVVMIOAWAVCAXZQJRTAVUIQSCNEUYYBTMLJRDUWBD");

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
    msg.setTimeStamp(0.548824400679);
    msg.setSource(49184U);
    msg.setSourceEntity(177U);
    msg.setDestination(51547U);
    msg.setDestinationEntity(100U);
    msg.list.assign("ORODXOGZPOITPGIDAMSWYHMFGAIARVDMNXKSVVSYKPVKXPVSMYWEJMQFNGWAJCIXBUFVYFHPZIZNHXTJRQUJNCLFKZHYPWRU");

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
    msg.setTimeStamp(0.0774628917695);
    msg.setSource(14072U);
    msg.setSourceEntity(188U);
    msg.setDestination(32659U);
    msg.setDestinationEntity(120U);
    msg.peer.assign("TPMQVOKAYTSOSDXWPRSLETUGJPYFQMHJVDCNJKXLVFPQHEPUGVVPLQDBRQXTIIWCVC");
    msg.rssi = 0.895671328349;
    msg.integrity = 54124U;

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
    msg.setTimeStamp(0.45252575023);
    msg.setSource(31297U);
    msg.setSourceEntity(67U);
    msg.setDestination(9156U);
    msg.setDestinationEntity(50U);
    msg.peer.assign("QUDNQOYLYOSGOVHQMVQUAYDNCMDERBLTATFIKKINRDECTWQWBYATKOPEAMKSLJWYRB");
    msg.rssi = 0.90551784876;
    msg.integrity = 62682U;

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
    msg.setTimeStamp(0.664161933794);
    msg.setSource(56392U);
    msg.setSourceEntity(106U);
    msg.setDestination(19830U);
    msg.setDestinationEntity(107U);
    msg.peer.assign("VFYNDRWCKLKSBGTOVFQZUODPJVKYEIPNMRBLWAELEBQBMTFLBOWULZJPJUVFEBEVVZTRNKIZVUCXUVEMHOLLQHATBTUYIFZSSSIRUKFACJMAXPQGEZMRQHJZEYFLAMAKDWKVCRNFCJKSOHFGBMXQXVUQXZDTOS");
    msg.rssi = 0.0575208664115;
    msg.integrity = 64212U;

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
    msg.setTimeStamp(0.197777853221);
    msg.setSource(37105U);
    msg.setSourceEntity(171U);
    msg.setDestination(37148U);
    msg.setDestinationEntity(197U);
    msg.req_id = 47481U;
    msg.destination.assign("GDZFSMSYBALNGPZWMVDCIIKDIFVSNEAYNNRGQJQJURSXHQRDXSQBEXVSGVUGZCUWAFRAUCPFZOBPYIOIKWKPZKXKLRTNGAFM");
    msg.timeout = 0.759007035829;
    msg.range = 0.873024155535;
    msg.type = 58U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 4058U;
    tmp_msg_0.lat = 0.619981997713;
    tmp_msg_0.lon = 0.313012580203;
    tmp_msg_0.z_units = 222U;
    tmp_msg_0.z = 0.101225676813;
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
    msg.setTimeStamp(0.209179890837);
    msg.setSource(24608U);
    msg.setSourceEntity(200U);
    msg.setDestination(63366U);
    msg.setDestinationEntity(239U);
    msg.req_id = 17429U;
    msg.destination.assign("JWVWLJJGWTASMDLVDMLSGCYLJTSFJKGZMSKWSIKCOFWBDHOUEQBOZQSPGFQYBAPDCZEBCRUNKIFDBRVMXXHKOITPYFOYVBRMZVCZOKZYPSAUEGFXJUAHTVRPNGAIOUMXPPCWDFRZWTYNEPVQDSPOHGUBFUAWQVHEXALDNVKXLEMRRBOZFBAXCQPCAYYJSMICJIXAHJEGNRHWZRIQYQFMLSIWCKOUHTNQLDE");
    msg.timeout = 0.609170402722;
    msg.range = 0.737826007081;
    msg.type = 26U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 64320U;
    tmp_msg_0.lat = 0.075634795076;
    tmp_msg_0.lon = 0.540727895561;
    tmp_msg_0.speed = 0.455628316416;
    tmp_msg_0.speed_units = 1U;
    tmp_msg_0.custom.assign("CRBIDYMGTOPARFDTECUNKTUCUMIWJGSIFLLTIFQHFHEVDAHBJTQBLSYWSVYDGSIMXOCEMNKMWXZUAIUWRKYTPPO");
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
    msg.setTimeStamp(0.944025537071);
    msg.setSource(29245U);
    msg.setSourceEntity(53U);
    msg.setDestination(12567U);
    msg.setDestinationEntity(142U);
    msg.req_id = 580U;
    msg.destination.assign("UUWJDAAWQDSXKGSMNCUVEBLDRXQFFJZIEWWRCUIZNTYGAMXXPVJFXTQWGMUIOHLCWKOUVTQOCPDRAZOLRWPOVENVMNMXKHZKNPNHTBABDOXMKTCNRYEFIUPRGGJHFSZSKLYWTSLCFHS");
    msg.timeout = 0.998680194728;
    msg.range = 0.0421498271771;
    msg.type = 229U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 3894U;
    tmp_msg_0.lat = 0.289204827077;
    tmp_msg_0.lon = 0.445941016953;
    tmp_msg_0.z = 0.595867979858;
    tmp_msg_0.z_units = 38U;
    tmp_msg_0.speed = 0.277816156042;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.bearing = 0.127501324126;
    tmp_msg_0.width = 0.671899589976;
    tmp_msg_0.direction = 92U;
    tmp_msg_0.custom.assign("AFMMXBYXGGOIUGPHEDIPNTXLNVHRAWPRLSRERGNJGWQLBMZROIZFQWYJTEBKSYMVJGMHNBWPWQMOEXVJQDOKLMYGU");
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
    msg.setTimeStamp(0.241362643628);
    msg.setSource(33411U);
    msg.setSourceEntity(15U);
    msg.setDestination(9271U);
    msg.setDestinationEntity(132U);
    msg.req_id = 39840U;
    msg.type = 37U;
    msg.status = 250U;
    msg.info.assign("CUPSQLODPFXSKBFPJTQJMJGNPAFNWYKXONUIWQUFSWGJQHJGONMFVZVHHNHEEFZRRYXRMDPJWQWOTRFKXCKJHTBTNUAOBHUIJKIWNICDZNOYQHYILWLYXSSUOGVYOPCIMTTUBGZTKTGILWIAEIHDBMZNAOLDUCERYCPXZGLAKSQGVD");
    msg.range = 0.288297486155;

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
    msg.setTimeStamp(0.521482512397);
    msg.setSource(65470U);
    msg.setSourceEntity(131U);
    msg.setDestination(41226U);
    msg.setDestinationEntity(150U);
    msg.req_id = 14610U;
    msg.type = 211U;
    msg.status = 229U;
    msg.info.assign("XKXFESEVTWWHMCNDQPDMLOXSDJGEIUJAWPBIQAYOKNSISHKKYPZARSPKZFWZPGFUJAYQZBWVOZUZEWCBPKIXCQRRWCCWKWUMJHRDGCSFFTPALYVLCFEJAEMXGTXMQYGBUTTAULWMPNYTHUHCEQOBUMYVZEQGJBRUDKHGDZZRVBOXLLAISVDQJE");
    msg.range = 0.476507929783;

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
    msg.setTimeStamp(0.32473114029);
    msg.setSource(63296U);
    msg.setSourceEntity(183U);
    msg.setDestination(50071U);
    msg.setDestinationEntity(179U);
    msg.req_id = 59832U;
    msg.type = 248U;
    msg.status = 225U;
    msg.info.assign("SLBXPPOFLRECNHQRVYXZZYLHCIJBPMSAKOFSSGDCNKLSDNRTVITZIUQZCKTSGFFZACMOECLKTFJNSKPNNSLIODEADJZWQJMBLCZXKKRVUKWRXSQFEUUMYCEEDVEDPXMAOVQLJZHWQEDJRBH");
    msg.range = 0.32573084951;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.577385545103);
    msg.setSource(21156U);
    msg.setSourceEntity(149U);
    msg.setDestination(34143U);
    msg.setDestinationEntity(100U);
    msg.value = -17149;

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
    msg.setTimeStamp(0.382321314848);
    msg.setSource(17992U);
    msg.setSourceEntity(224U);
    msg.setDestination(42717U);
    msg.setDestinationEntity(120U);
    msg.value = 30037;

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
    msg.setTimeStamp(0.774259323683);
    msg.setSource(38934U);
    msg.setSourceEntity(129U);
    msg.setDestination(61698U);
    msg.setDestinationEntity(204U);
    msg.value = -30149;

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
    msg.setTimeStamp(0.308421190211);
    msg.setSource(43335U);
    msg.setSourceEntity(209U);
    msg.setDestination(18615U);
    msg.setDestinationEntity(28U);
    msg.value = 0.0509745283698;

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
    msg.setTimeStamp(0.431408243096);
    msg.setSource(47340U);
    msg.setSourceEntity(41U);
    msg.setDestination(22928U);
    msg.setDestinationEntity(10U);
    msg.value = 0.566422480912;

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
    msg.setTimeStamp(0.674240303822);
    msg.setSource(40900U);
    msg.setSourceEntity(96U);
    msg.setDestination(31596U);
    msg.setDestinationEntity(228U);
    msg.value = 0.155260834563;

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
    msg.setTimeStamp(0.629803033466);
    msg.setSource(12502U);
    msg.setSourceEntity(155U);
    msg.setDestination(12645U);
    msg.setDestinationEntity(134U);
    msg.value = 0.38364296573;

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
    msg.setTimeStamp(0.48379578846);
    msg.setSource(38734U);
    msg.setSourceEntity(98U);
    msg.setDestination(26880U);
    msg.setDestinationEntity(115U);
    msg.value = 0.187273443378;

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
    msg.setTimeStamp(0.37343053332);
    msg.setSource(62530U);
    msg.setSourceEntity(79U);
    msg.setDestination(32796U);
    msg.setDestinationEntity(196U);
    msg.value = 0.930446321905;

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
    msg.setTimeStamp(0.439186067491);
    msg.setSource(51298U);
    msg.setSourceEntity(149U);
    msg.setDestination(28417U);
    msg.setDestinationEntity(231U);
    msg.validity = 51166U;
    msg.type = 192U;
    msg.utc_year = 3259U;
    msg.utc_month = 220U;
    msg.utc_day = 189U;
    msg.utc_time = 0.973065834579;
    msg.lat = 0.561057186058;
    msg.lon = 0.674536858565;
    msg.height = 0.757429742113;
    msg.satellites = 192U;
    msg.cog = 0.27420089141;
    msg.sog = 0.675690056178;
    msg.hdop = 0.359814751118;
    msg.vdop = 0.043593093633;
    msg.hacc = 0.79252039194;
    msg.vacc = 0.884402575153;

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
    msg.setTimeStamp(0.870217169262);
    msg.setSource(9009U);
    msg.setSourceEntity(20U);
    msg.setDestination(51869U);
    msg.setDestinationEntity(168U);
    msg.validity = 2708U;
    msg.type = 192U;
    msg.utc_year = 34594U;
    msg.utc_month = 55U;
    msg.utc_day = 127U;
    msg.utc_time = 0.0879747604043;
    msg.lat = 0.413163923786;
    msg.lon = 0.797785470988;
    msg.height = 0.00304718586618;
    msg.satellites = 66U;
    msg.cog = 0.909638648512;
    msg.sog = 0.190970172765;
    msg.hdop = 0.773893812569;
    msg.vdop = 0.79831120788;
    msg.hacc = 0.315190098201;
    msg.vacc = 0.0602216533389;

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
    msg.setTimeStamp(0.845659699061);
    msg.setSource(55537U);
    msg.setSourceEntity(161U);
    msg.setDestination(7622U);
    msg.setDestinationEntity(244U);
    msg.validity = 34328U;
    msg.type = 85U;
    msg.utc_year = 51575U;
    msg.utc_month = 166U;
    msg.utc_day = 165U;
    msg.utc_time = 0.44623081596;
    msg.lat = 0.742613298994;
    msg.lon = 0.103116553636;
    msg.height = 0.667512407109;
    msg.satellites = 239U;
    msg.cog = 0.280542248488;
    msg.sog = 0.695063999297;
    msg.hdop = 0.139138588417;
    msg.vdop = 0.158409951481;
    msg.hacc = 0.913587150106;
    msg.vacc = 0.304704738617;

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
    msg.setTimeStamp(0.830902547057);
    msg.setSource(25376U);
    msg.setSourceEntity(192U);
    msg.setDestination(17266U);
    msg.setDestinationEntity(12U);
    msg.time = 0.359447426059;
    msg.phi = 0.747840312789;
    msg.theta = 0.775890451371;
    msg.psi = 0.929081484945;
    msg.psi_magnetic = 0.571652958269;

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
    msg.setTimeStamp(0.830792058417);
    msg.setSource(17527U);
    msg.setSourceEntity(140U);
    msg.setDestination(52116U);
    msg.setDestinationEntity(117U);
    msg.time = 0.962976990709;
    msg.phi = 0.765949109933;
    msg.theta = 0.382626997359;
    msg.psi = 0.273252197129;
    msg.psi_magnetic = 0.77145710383;

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
    msg.setTimeStamp(0.075128741098);
    msg.setSource(17502U);
    msg.setSourceEntity(235U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(55U);
    msg.time = 0.731491650145;
    msg.phi = 0.336231664528;
    msg.theta = 0.61009204895;
    msg.psi = 0.102934133799;
    msg.psi_magnetic = 0.172500425501;

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
    msg.setTimeStamp(0.577335240232);
    msg.setSource(50682U);
    msg.setSourceEntity(162U);
    msg.setDestination(45775U);
    msg.setDestinationEntity(164U);
    msg.time = 0.498945894324;
    msg.x = 0.167783114588;
    msg.y = 0.973260587565;
    msg.z = 0.944077168677;
    msg.timestep = 0.961640602188;

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
    msg.setTimeStamp(0.220173067786);
    msg.setSource(10119U);
    msg.setSourceEntity(232U);
    msg.setDestination(5001U);
    msg.setDestinationEntity(190U);
    msg.time = 0.393806649087;
    msg.x = 0.961724916014;
    msg.y = 0.69951297216;
    msg.z = 0.599306874496;
    msg.timestep = 0.200759172697;

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
    msg.setTimeStamp(0.285599878203);
    msg.setSource(53195U);
    msg.setSourceEntity(88U);
    msg.setDestination(49851U);
    msg.setDestinationEntity(243U);
    msg.time = 0.460774468196;
    msg.x = 0.68282984426;
    msg.y = 0.285855259314;
    msg.z = 0.828470886848;
    msg.timestep = 0.756992252607;

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
    msg.setTimeStamp(0.340409118259);
    msg.setSource(31024U);
    msg.setSourceEntity(249U);
    msg.setDestination(28688U);
    msg.setDestinationEntity(208U);
    msg.time = 0.371266609933;
    msg.x = 0.903743957378;
    msg.y = 0.0457950484021;
    msg.z = 0.919984414605;

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
    msg.setTimeStamp(0.713961177209);
    msg.setSource(10673U);
    msg.setSourceEntity(194U);
    msg.setDestination(10525U);
    msg.setDestinationEntity(162U);
    msg.time = 0.288244161524;
    msg.x = 0.476417844618;
    msg.y = 0.630310011401;
    msg.z = 0.876811059181;

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
    msg.setTimeStamp(0.530091241906);
    msg.setSource(20230U);
    msg.setSourceEntity(189U);
    msg.setDestination(33878U);
    msg.setDestinationEntity(231U);
    msg.time = 0.219762241195;
    msg.x = 0.0145745213291;
    msg.y = 0.0879291437469;
    msg.z = 0.281540093807;

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
    msg.setTimeStamp(0.468289198992);
    msg.setSource(376U);
    msg.setSourceEntity(123U);
    msg.setDestination(25952U);
    msg.setDestinationEntity(9U);
    msg.time = 0.376419541557;
    msg.x = 0.0171213650471;
    msg.y = 0.0386476235209;
    msg.z = 0.110597924321;

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
    msg.setTimeStamp(0.143834785961);
    msg.setSource(44249U);
    msg.setSourceEntity(207U);
    msg.setDestination(6041U);
    msg.setDestinationEntity(223U);
    msg.time = 0.409837872349;
    msg.x = 0.702988770152;
    msg.y = 0.13494393691;
    msg.z = 0.761444675533;

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
    msg.setTimeStamp(0.546326327847);
    msg.setSource(61050U);
    msg.setSourceEntity(198U);
    msg.setDestination(54192U);
    msg.setDestinationEntity(147U);
    msg.time = 0.114199877288;
    msg.x = 0.136121715996;
    msg.y = 0.574189010441;
    msg.z = 0.951676530754;

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
    msg.setTimeStamp(0.397725248851);
    msg.setSource(35343U);
    msg.setSourceEntity(241U);
    msg.setDestination(39642U);
    msg.setDestinationEntity(192U);
    msg.time = 0.0804944616501;
    msg.x = 0.234841930773;
    msg.y = 0.386538687128;
    msg.z = 0.265520537414;

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
    msg.setTimeStamp(0.953174843884);
    msg.setSource(16910U);
    msg.setSourceEntity(94U);
    msg.setDestination(43536U);
    msg.setDestinationEntity(88U);
    msg.time = 0.313690229104;
    msg.x = 0.196494558693;
    msg.y = 0.903698293715;
    msg.z = 0.581127747415;

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
    msg.setTimeStamp(0.551522002615);
    msg.setSource(6718U);
    msg.setSourceEntity(166U);
    msg.setDestination(31080U);
    msg.setDestinationEntity(70U);
    msg.time = 0.500707740472;
    msg.x = 0.256710607335;
    msg.y = 0.724040928586;
    msg.z = 0.45025208761;

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
    msg.setTimeStamp(0.0789269622895);
    msg.setSource(64294U);
    msg.setSourceEntity(2U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(143U);
    msg.validity = 217U;
    msg.x = 0.816515659649;
    msg.y = 0.443004090318;
    msg.z = 0.569863985028;

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
    msg.setTimeStamp(0.174218356587);
    msg.setSource(37850U);
    msg.setSourceEntity(63U);
    msg.setDestination(20177U);
    msg.setDestinationEntity(159U);
    msg.validity = 135U;
    msg.x = 0.0446796756568;
    msg.y = 0.381937829543;
    msg.z = 0.683222594007;

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
    msg.setTimeStamp(0.20779615818);
    msg.setSource(17594U);
    msg.setSourceEntity(215U);
    msg.setDestination(17700U);
    msg.setDestinationEntity(173U);
    msg.validity = 246U;
    msg.x = 0.534709001738;
    msg.y = 0.643930713232;
    msg.z = 0.246166065655;

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
    msg.setTimeStamp(0.938041685523);
    msg.setSource(64503U);
    msg.setSourceEntity(246U);
    msg.setDestination(51750U);
    msg.setDestinationEntity(133U);
    msg.validity = 182U;
    msg.x = 0.563331529005;
    msg.y = 0.366135916931;
    msg.z = 0.90383909855;

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
    msg.setTimeStamp(0.181605587495);
    msg.setSource(59247U);
    msg.setSourceEntity(89U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(172U);
    msg.validity = 207U;
    msg.x = 0.726980835471;
    msg.y = 0.500920129224;
    msg.z = 0.764684702975;

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
    msg.setTimeStamp(0.903893515628);
    msg.setSource(61121U);
    msg.setSourceEntity(96U);
    msg.setDestination(45447U);
    msg.setDestinationEntity(84U);
    msg.validity = 216U;
    msg.x = 0.151963299223;
    msg.y = 0.637916067472;
    msg.z = 0.204019647447;

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
    msg.setTimeStamp(0.679825004696);
    msg.setSource(22330U);
    msg.setSourceEntity(156U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(204U);
    msg.time = 0.777673496761;
    msg.x = 0.0316391520506;
    msg.y = 0.911916384969;
    msg.z = 0.632519135839;

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
    msg.setTimeStamp(0.664961966342);
    msg.setSource(13554U);
    msg.setSourceEntity(245U);
    msg.setDestination(43756U);
    msg.setDestinationEntity(137U);
    msg.time = 0.507500702745;
    msg.x = 0.0315223125608;
    msg.y = 0.149114756112;
    msg.z = 0.711132854241;

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
    msg.setTimeStamp(0.621328434975);
    msg.setSource(59601U);
    msg.setSourceEntity(230U);
    msg.setDestination(34260U);
    msg.setDestinationEntity(205U);
    msg.time = 0.0172763605138;
    msg.x = 0.958008409124;
    msg.y = 0.571770213376;
    msg.z = 0.107056958096;

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
    msg.setTimeStamp(0.657059790779);
    msg.setSource(53436U);
    msg.setSourceEntity(7U);
    msg.setDestination(51089U);
    msg.setDestinationEntity(87U);
    msg.validity = 219U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.164328085563;
    tmp_msg_0.beam_height = 0.804153889965;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0219702235421;

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
    msg.setTimeStamp(0.20689481967);
    msg.setSource(6525U);
    msg.setSourceEntity(165U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(222U);
    msg.validity = 215U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.17908912708;
    tmp_msg_0.beam_height = 0.0833960799452;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.29742321677;

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
    msg.setTimeStamp(0.0634488705055);
    msg.setSource(27661U);
    msg.setSourceEntity(171U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(168U);
    msg.validity = 137U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.819101836693;
    tmp_msg_0.y = 0.0255195579135;
    tmp_msg_0.z = 0.233216871617;
    tmp_msg_0.phi = 0.347218016522;
    tmp_msg_0.theta = 0.383140871579;
    tmp_msg_0.psi = 0.824232084774;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.189882194595;
    tmp_msg_1.beam_height = 0.453529095547;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.681166428874;

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
    msg.setTimeStamp(0.930712782848);
    msg.setSource(14038U);
    msg.setSourceEntity(156U);
    msg.setDestination(34826U);
    msg.setDestinationEntity(171U);
    msg.value = 0.140537362258;

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
    msg.setTimeStamp(0.528704172551);
    msg.setSource(26259U);
    msg.setSourceEntity(117U);
    msg.setDestination(4569U);
    msg.setDestinationEntity(199U);
    msg.value = 0.113903431283;

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
    msg.setTimeStamp(0.868524902412);
    msg.setSource(34601U);
    msg.setSourceEntity(192U);
    msg.setDestination(535U);
    msg.setDestinationEntity(124U);
    msg.value = 0.813943817976;

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
    msg.setTimeStamp(0.531455633609);
    msg.setSource(56845U);
    msg.setSourceEntity(38U);
    msg.setDestination(7124U);
    msg.setDestinationEntity(206U);
    msg.value = 0.664814561079;

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
    msg.setTimeStamp(0.458720734742);
    msg.setSource(14386U);
    msg.setSourceEntity(103U);
    msg.setDestination(62282U);
    msg.setDestinationEntity(200U);
    msg.value = 0.28430397485;

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
    msg.setTimeStamp(0.205083074474);
    msg.setSource(17169U);
    msg.setSourceEntity(2U);
    msg.setDestination(11126U);
    msg.setDestinationEntity(39U);
    msg.value = 0.578798257508;

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
    msg.setTimeStamp(0.295398284385);
    msg.setSource(10622U);
    msg.setSourceEntity(47U);
    msg.setDestination(64700U);
    msg.setDestinationEntity(106U);
    msg.value = 0.269373619856;

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
    msg.setTimeStamp(0.544969482403);
    msg.setSource(29287U);
    msg.setSourceEntity(75U);
    msg.setDestination(52932U);
    msg.setDestinationEntity(176U);
    msg.value = 0.527620448144;

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
    msg.setTimeStamp(0.0224346753235);
    msg.setSource(45431U);
    msg.setSourceEntity(252U);
    msg.setDestination(1357U);
    msg.setDestinationEntity(3U);
    msg.value = 0.122517733307;

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
    msg.setTimeStamp(0.444798890511);
    msg.setSource(48132U);
    msg.setSourceEntity(116U);
    msg.setDestination(22324U);
    msg.setDestinationEntity(245U);
    msg.value = 0.428611395458;

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
    msg.setTimeStamp(0.86119808881);
    msg.setSource(56323U);
    msg.setSourceEntity(147U);
    msg.setDestination(54156U);
    msg.setDestinationEntity(60U);
    msg.value = 0.428570185901;

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
    msg.setTimeStamp(0.349988944887);
    msg.setSource(30049U);
    msg.setSourceEntity(205U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(23U);
    msg.value = 0.84528384468;

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
    msg.setTimeStamp(0.441934484036);
    msg.setSource(52604U);
    msg.setSourceEntity(208U);
    msg.setDestination(36762U);
    msg.setDestinationEntity(33U);
    msg.value = 0.566801198092;

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
    msg.setTimeStamp(0.468536693787);
    msg.setSource(630U);
    msg.setSourceEntity(98U);
    msg.setDestination(47992U);
    msg.setDestinationEntity(93U);
    msg.value = 0.390273792459;

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
    msg.setTimeStamp(0.622244844525);
    msg.setSource(50412U);
    msg.setSourceEntity(227U);
    msg.setDestination(9393U);
    msg.setDestinationEntity(248U);
    msg.value = 0.607188167501;

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
    msg.setTimeStamp(0.598318688766);
    msg.setSource(60015U);
    msg.setSourceEntity(132U);
    msg.setDestination(49630U);
    msg.setDestinationEntity(213U);
    msg.value = 0.637012225383;

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
    msg.setTimeStamp(0.7045156221);
    msg.setSource(19478U);
    msg.setSourceEntity(233U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(31U);
    msg.value = 0.539785483912;

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
    msg.setTimeStamp(0.601776665476);
    msg.setSource(26141U);
    msg.setSourceEntity(155U);
    msg.setDestination(13690U);
    msg.setDestinationEntity(74U);
    msg.value = 0.0634242723475;

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
    msg.setTimeStamp(0.999079008298);
    msg.setSource(24373U);
    msg.setSourceEntity(93U);
    msg.setDestination(65423U);
    msg.setDestinationEntity(205U);
    msg.value = 0.401702315253;

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
    msg.setTimeStamp(0.375104242477);
    msg.setSource(11879U);
    msg.setSourceEntity(57U);
    msg.setDestination(54647U);
    msg.setDestinationEntity(223U);
    msg.value = 0.0913708838725;

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
    msg.setTimeStamp(0.733461390177);
    msg.setSource(8844U);
    msg.setSourceEntity(182U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(164U);
    msg.value = 0.570573522302;

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
    msg.setTimeStamp(0.195675778149);
    msg.setSource(13316U);
    msg.setSourceEntity(50U);
    msg.setDestination(63888U);
    msg.setDestinationEntity(220U);
    msg.value = 0.507273407413;

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
    msg.setTimeStamp(0.859271298248);
    msg.setSource(1919U);
    msg.setSourceEntity(4U);
    msg.setDestination(19189U);
    msg.setDestinationEntity(91U);
    msg.value = 0.638083230413;

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
    msg.setTimeStamp(0.179422465195);
    msg.setSource(19553U);
    msg.setSourceEntity(191U);
    msg.setDestination(45019U);
    msg.setDestinationEntity(102U);
    msg.value = 0.129789733949;

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
    msg.setTimeStamp(0.913735972637);
    msg.setSource(19488U);
    msg.setSourceEntity(10U);
    msg.setDestination(38090U);
    msg.setDestinationEntity(114U);
    msg.direction = 0.247500117439;
    msg.speed = 0.772847529321;
    msg.turbulence = 0.088422393983;

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
    msg.setTimeStamp(0.268756018226);
    msg.setSource(4447U);
    msg.setSourceEntity(5U);
    msg.setDestination(18668U);
    msg.setDestinationEntity(241U);
    msg.direction = 0.511234908387;
    msg.speed = 0.130099100421;
    msg.turbulence = 0.487943732806;

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
    msg.setTimeStamp(0.842101582716);
    msg.setSource(15229U);
    msg.setSourceEntity(17U);
    msg.setDestination(48735U);
    msg.setDestinationEntity(227U);
    msg.direction = 0.605487876796;
    msg.speed = 0.154013884286;
    msg.turbulence = 0.0958507532212;

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
    msg.setTimeStamp(0.817491246738);
    msg.setSource(1088U);
    msg.setSourceEntity(5U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(96U);
    msg.value = 0.138929515509;

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
    msg.setTimeStamp(0.194901251928);
    msg.setSource(52984U);
    msg.setSourceEntity(206U);
    msg.setDestination(58517U);
    msg.setDestinationEntity(251U);
    msg.value = 0.00386176912584;

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
    msg.setTimeStamp(0.301760158284);
    msg.setSource(23169U);
    msg.setSourceEntity(142U);
    msg.setDestination(47464U);
    msg.setDestinationEntity(25U);
    msg.value = 0.213874104752;

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
    msg.setTimeStamp(0.784836077129);
    msg.setSource(2412U);
    msg.setSourceEntity(210U);
    msg.setDestination(28213U);
    msg.setDestinationEntity(244U);
    msg.value.assign("SUBZDGHKVCOOOFODIZIJTEAMLJNQWAEMFWZIDSCWFGNVEQRMEFASLPGXKBAJNVEVQRPZJWEKUCMTEMUZCKYSRNDQGILNDGKAVQQTDYBGYLFJVGYFEHWPZBUVOSQXMHSLBAILCPZWHFIAFDTIECUXZRBJAPVSBNLPSJCHQZUHYUPIGOXAEMOMNDNQHWFH");

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
    msg.setTimeStamp(0.516359811515);
    msg.setSource(30484U);
    msg.setSourceEntity(24U);
    msg.setDestination(55285U);
    msg.setDestinationEntity(103U);
    msg.value.assign("WVQXHNYGKXYLUADWGCIFXVHKASLUOGIFFBDFPOGDZQSZSNGATCSLPZCAINBJRUEQYOLJFXSTOGKIZLWIHWWOMZJBCRQOPBMXENQTVRIHMJELDTOFKHTEHPRKGPOVIASFAESFYTEHGSH");

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
    msg.setTimeStamp(0.723823803219);
    msg.setSource(24832U);
    msg.setSourceEntity(152U);
    msg.setDestination(29028U);
    msg.setDestinationEntity(64U);
    msg.value.assign("HNWRGTYPVHGQDAKOHTXQMJESOJBXPTGLSAFKUWUWIBCDPDQXTVRAJWNJSUPDFKCKRSPCCOPAILOZIVBVZMHHQXUUOETALJL");

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
    msg.setTimeStamp(0.481585080094);
    msg.setSource(23525U);
    msg.setSourceEntity(50U);
    msg.setDestination(61884U);
    msg.setDestinationEntity(85U);
    const char tmp_msg_0[] = {77, -13, -74, -55, -105, -72, 21, -36, 45, 80, 88, 106, -71, 58, 6, -37, 81, 85, -27, -70, -86, -89, 48, -128, -48, 113, -88, 66, 3, 115, 116, 56, -110, 126, -43, 90, -18, 55, -78, -65, -92, -32, 51, -30, 82, -128, -107, 7, -15, -28, -70, 87, 30, -6, 104, -90, 55, -1, 74, 10, -41, 55, 77, 124, -8, 69, -83, -100, 53, 0, -109, 119, -24, 33, 115, -127, -55, -76, 8, -30, 17, -102, -79, 74, 71, -72, 2, -43, -30, -84, 6, 15, -128, 86, -42, -127, -5, -20, 34, 118, 55, -77, 118, -32, 107, 109, 79, -73, -110, 57, 5, 105, 70, 4, -68, -25, 26, -115, 95, 56, -100, 79, -21, 47, -105, 76, 16, -95, -102, -104, 111, -98, 117, -4, 90, 113, 76, -10, 3, -63, -112, 113, 25, -93, -75, 57, -83, -38, -45, -113, -31, 92, -100, -35, -57, 76, 33, -61, 6, 42, 61, 122, -81, -52, 72, 61, -73, -68, -71, -88, -45, -65, 72, -36, -43, 81, -8, -111, -76, -19, -109, -116, -59, 119, 64, 42, -104, -107, 117, 76, -39, -69, 57, -117, 7, -59, -48, -125, -54, 10, -116, 85, 53, 79, -31, -13, -92, 98, 5, -128, -91, -15, -19, 4, -80, -90, -26, 70, 124, 22, 8, 85, 89, 68, -64, 63, -109, 23, -10, 56, -51, 14, 14, 23};
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
    msg.setTimeStamp(0.998254867973);
    msg.setSource(32036U);
    msg.setSourceEntity(0U);
    msg.setDestination(22419U);
    msg.setDestinationEntity(220U);
    const char tmp_msg_0[] = {-85, -7, 60, 28, -10, -12, 29, 25, 26, -62, -101, -9, 14, -62, -50, 83, -94, -111, 90, -42, -85, -61, -30, -122, 29, -26, -124, 89, -15, 75, -119, -128, -100, 76, 7, -54, -65, 103, -112, 12, 69, -77, -74, 112, 19, 8, 69, -88, 87, -44, -86, 15, 7, -21, 42, -24, 94, -97, 41, 70, 52, 27, -19, 121, -122, -93, -82, 27, 118, -77, 28, -27, 124, -60, 8, 7, -80, -53, -111, 13, -105, 110, 57, 12, 56, 92, 29, -90, -111, -58};
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
    msg.setTimeStamp(0.20798180335);
    msg.setSource(9724U);
    msg.setSourceEntity(145U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(221U);
    const char tmp_msg_0[] = {-36, -78, 62, 75, 58, -29, -53, -122, -95, 92, -45, 69, 28, 49, 59, 73, 28, 99, 21, 7, 21, -128, -98, -121, -27, -18, 78, -115, -8, 92, -119, 57, -67, 62, -48, 65, -124, -26, 64, 45, 79, 0, 122, 34, -119, 30, 41, -41, 34, -14, -55, 12, -61, -3, -84, -121};
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
    msg.setTimeStamp(0.105573329894);
    msg.setSource(37501U);
    msg.setSourceEntity(53U);
    msg.setDestination(409U);
    msg.setDestinationEntity(51U);
    msg.value = 0.484303130608;

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
    msg.setTimeStamp(0.0706800209433);
    msg.setSource(836U);
    msg.setSourceEntity(236U);
    msg.setDestination(2585U);
    msg.setDestinationEntity(9U);
    msg.value = 0.557210594935;

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
    msg.setTimeStamp(0.692891004199);
    msg.setSource(54058U);
    msg.setSourceEntity(197U);
    msg.setDestination(60406U);
    msg.setDestinationEntity(80U);
    msg.value = 0.930446576646;

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
    msg.setTimeStamp(0.558983647509);
    msg.setSource(49601U);
    msg.setSourceEntity(204U);
    msg.setDestination(11227U);
    msg.setDestinationEntity(23U);
    msg.type = 216U;
    msg.frequency = 3438804388U;
    msg.min_range = 28666U;
    msg.max_range = 29815U;
    msg.bits_per_point = 75U;
    msg.scale_factor = 0.260291690354;
    const char tmp_msg_0[] = {-69, 89, 25, 46, -17, 73, 19, 4, 39, 9, 99, -89, 90, -14, 78, -85, 16, 54, 92, -110, 54, -117, 19, 13, 99, 59, 86, 44, 13, -54, -78, 101, 41, -72, -118, -90, -127, 64, -103, 106, -13, -12, 82, -55, 59, 124, 31, -126, 34, 110, -38, -7, -124, 74, -9, -76, 88, 33, -18, 18, -61, 61, -121, -38, -109, -10, -65, -51, -46, -104, -35, -47, 40, 9, 18, -19, 56, -73, 29, 31, 65, 7, 33, -92, -111, -104, 50, 126, -3, -102, 16, 110, 51, -8, -31, 93, -59, -128, 84, -62, -56, 4, -52, -25, -72, 116, -90, -48, -58, 108, -2, -27, -19, 13, -52, -99, -16, 63, -45, 61, 88, -49, 104, -36, 4, -127, 6, -59, -53, 45, -11, -115, -59, 23, 3, -26, -116, -118, -61, -98, -29, -33, 75, 39, -121, 10, 104, 88, 107, -1, -27, -32, -113, 8, 87, -48, 117, -9, 85, 4, 122, -107, 88, -44, 8};
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
    msg.setTimeStamp(0.261093703081);
    msg.setSource(49109U);
    msg.setSourceEntity(76U);
    msg.setDestination(51756U);
    msg.setDestinationEntity(41U);
    msg.type = 146U;
    msg.frequency = 596356496U;
    msg.min_range = 51317U;
    msg.max_range = 51654U;
    msg.bits_per_point = 112U;
    msg.scale_factor = 0.115079747539;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.188499810461;
    tmp_msg_0.beam_height = 0.56613695611;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-123, -74, -109, 122, -91, -63, -54, -66, -11, -108, -23, -117, -45, -60, -66, -119, 38, 110, 112, 10, 44, -90, 7, -98, -31, -59, 119, 105, 68, -13, 113, 27, -114, 76, 81, 38, -25, 55, 69, 5, 121, 33, -27, 100, -10, -65, 97, 76, 64, 4, 74, -24, 97, -18, 19, -2, 34, 34, -4, 122, 75, -72};
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
    msg.setTimeStamp(0.751245773903);
    msg.setSource(49255U);
    msg.setSourceEntity(32U);
    msg.setDestination(62313U);
    msg.setDestinationEntity(137U);
    msg.type = 4U;
    msg.frequency = 3158419434U;
    msg.min_range = 54940U;
    msg.max_range = 20063U;
    msg.bits_per_point = 163U;
    msg.scale_factor = 0.285521644092;
    const char tmp_msg_0[] = {-65, 17, 78, 47, -61, -127, -34, -25, -118, 89, -84, 55, -98, 126, 4, 51, -128, -37, 83, -58, 64, 85, -7, 49, -8, -93, -39, -61, -117, -85, -50, 60, -15, -64, 98, -94, -17, 41, -109, 82, -31, 48, -27, -34, -66, 69, -47, -83, 101, -125, -69, 76, 33, -64, 0, -52, -88, 92, 75, -2, 66, 80, -4, -11, -85, -122, 43, 62, 78, 71, -50, -103, -6, 126, 112, -92, -25, 83, 38, 108, -92, 23, 21, 61, -84, -79, 101, 44, 60, -20, 14, -95, 28, 54, 112, -126, 69, 22, 98, 98, 91, -94, 112, -15, 111, 1, -123, -71, -54, 14, -123, 0, 33, -30, 41, 70, 96, -41, 75, 94, 82, 33, 38, 4, 83, -112, -95, -56, 30, -90, -91, 60, 79, 106, 113, 1, 109, -13, -77, -127, -79, 89, 121, -44, 90, -93, -9, -37, 75, -120, 56, 126, -126, -114, 61, -100, -40, 102, 37, 69, -74, -95, 24, -2, -23, 95, -31, 27, -116, 60, 99, -23, 125, -96, -35, -14, 0, 95, 97, -44, 120, -2, -52, 18, -90, -83, -19, 8, 67, -16, -24, -39, 82, 21, 90, 21, 53, 20, 104, 113, 112, -48, -40, -120, 16, -16, -85, 77, -95, 2, -26, -57, 106, -122, 73, -90, -128, 89, 89, -120, 57, -121, 64, 124, -89, 105, 68, 15, 3, -102, -63, 1, 122, -61, -28, 75, -119, -9, 108, -20, 123, 76, -84, -7, 18, -105, -58, 106, 10, -47, -83, -108, 125};
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
    msg.setTimeStamp(0.529466870657);
    msg.setSource(29393U);
    msg.setSourceEntity(19U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.750177286316);
    msg.setSource(39638U);
    msg.setSourceEntity(138U);
    msg.setDestination(31646U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.621186366717);
    msg.setSource(47222U);
    msg.setSourceEntity(157U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.411736285986);
    msg.setSource(38139U);
    msg.setSourceEntity(215U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(57U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.441207794839);
    msg.setSource(4210U);
    msg.setSourceEntity(206U);
    msg.setDestination(18096U);
    msg.setDestinationEntity(178U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.791912378676);
    msg.setSource(26800U);
    msg.setSourceEntity(17U);
    msg.setDestination(1831U);
    msg.setDestinationEntity(222U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.838018469644);
    msg.setSource(47048U);
    msg.setSourceEntity(57U);
    msg.setDestination(16910U);
    msg.setDestinationEntity(252U);
    msg.value = 0.311804678919;
    msg.confidence = 0.125221001015;
    msg.opmodes.assign("WNMRNIGXFXDYGAQUOGATXVYVVFBYKEOQSWRFOFJUARJUURTXPWZTJPAFJCPAIKLKYTQJFIAIZDPXBIGBERNFHSMSCOTDJEVDJSZUQEKWRLLLQGBELHWHOMRYQUSFNMEDAGWBNROMRWVNLYQG");

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
    msg.setTimeStamp(0.0526198786426);
    msg.setSource(37286U);
    msg.setSourceEntity(235U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(76U);
    msg.value = 0.189021140729;
    msg.confidence = 0.693722655484;
    msg.opmodes.assign("LOPEREBGPRVXFQATIGNCDVBSHZRCDFWTFNNEMVEPSUUJZMIYHSXMICEEDXCSXTEIUHAQKJJKDBGTQRUBNHOYCLBZEFZBTAYKRTJKLWQTQVVFKNDFWUOLJEMLNJZFOMQOYCZQMGYLFGKDJPV");

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
    msg.setTimeStamp(0.440166962848);
    msg.setSource(13723U);
    msg.setSourceEntity(105U);
    msg.setDestination(61748U);
    msg.setDestinationEntity(18U);
    msg.value = 0.291381960901;
    msg.confidence = 0.990492602828;
    msg.opmodes.assign("EVXQOISHZPSDUKISBVIIYDFNONURJZNNWZJEMCPGCMUMLQGLUPVDNJCOIXVKOEBGWHGIGJWQAEFTVOSFBAZHKLXLFXRCQYIEUOOLSAYHGWLQTFMWVMSGBEYRDQQXBJRHTRWZ");

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
    msg.setTimeStamp(0.304638563135);
    msg.setSource(59996U);
    msg.setSourceEntity(29U);
    msg.setDestination(26273U);
    msg.setDestinationEntity(104U);
    msg.itow = 2421838042U;
    msg.lat = 0.377927144966;
    msg.lon = 0.178547049159;
    msg.height_ell = 0.0729724681578;
    msg.height_sea = 0.851458220868;
    msg.hacc = 0.743032055398;
    msg.vacc = 0.243868494717;
    msg.vel_n = 0.706589217529;
    msg.vel_e = 0.211037780849;
    msg.vel_d = 0.487495779;
    msg.speed = 0.874356973957;
    msg.gspeed = 0.559542774361;
    msg.heading = 0.65998713522;
    msg.sacc = 0.463988123349;
    msg.cacc = 0.10815885918;

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
    msg.setTimeStamp(0.909422924769);
    msg.setSource(40844U);
    msg.setSourceEntity(115U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(44U);
    msg.itow = 992444559U;
    msg.lat = 0.128388524907;
    msg.lon = 0.871158167439;
    msg.height_ell = 0.897893756558;
    msg.height_sea = 0.3496425365;
    msg.hacc = 0.891611516918;
    msg.vacc = 0.60901935253;
    msg.vel_n = 0.531375442804;
    msg.vel_e = 0.0705417843244;
    msg.vel_d = 0.659506601083;
    msg.speed = 0.98848795991;
    msg.gspeed = 0.56274284864;
    msg.heading = 0.12344407018;
    msg.sacc = 0.964139610333;
    msg.cacc = 0.406862845626;

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
    msg.setTimeStamp(0.318933900527);
    msg.setSource(55509U);
    msg.setSourceEntity(178U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(96U);
    msg.itow = 2549416907U;
    msg.lat = 0.691008029907;
    msg.lon = 0.880601693133;
    msg.height_ell = 0.444430579819;
    msg.height_sea = 0.474785271226;
    msg.hacc = 0.536347758418;
    msg.vacc = 0.868005668329;
    msg.vel_n = 0.483347907721;
    msg.vel_e = 0.803384633529;
    msg.vel_d = 0.199337306783;
    msg.speed = 0.276922242795;
    msg.gspeed = 0.823012270645;
    msg.heading = 0.610595665384;
    msg.sacc = 0.713915409889;
    msg.cacc = 0.740302022151;

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
    msg.setTimeStamp(0.157106187041);
    msg.setSource(2140U);
    msg.setSourceEntity(137U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(62U);
    msg.id = 110U;
    msg.value = 0.554678804946;

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
    msg.setTimeStamp(0.0497407546263);
    msg.setSource(4919U);
    msg.setSourceEntity(59U);
    msg.setDestination(20373U);
    msg.setDestinationEntity(222U);
    msg.id = 50U;
    msg.value = 0.917766852571;

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
    msg.setTimeStamp(0.157672087159);
    msg.setSource(31050U);
    msg.setSourceEntity(243U);
    msg.setDestination(48033U);
    msg.setDestinationEntity(218U);
    msg.id = 134U;
    msg.value = 0.541828012363;

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
    msg.setTimeStamp(0.310504461425);
    msg.setSource(35944U);
    msg.setSourceEntity(156U);
    msg.setDestination(51228U);
    msg.setDestinationEntity(37U);
    msg.x = 0.548176218755;
    msg.y = 0.166451487854;
    msg.z = 0.797058422982;
    msg.phi = 0.243694435758;
    msg.theta = 0.591847597436;
    msg.psi = 0.955585853359;

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
    msg.setTimeStamp(0.824535567401);
    msg.setSource(41047U);
    msg.setSourceEntity(8U);
    msg.setDestination(61055U);
    msg.setDestinationEntity(33U);
    msg.x = 0.709487253618;
    msg.y = 0.748799216927;
    msg.z = 0.767089164971;
    msg.phi = 0.776322406677;
    msg.theta = 0.283546153139;
    msg.psi = 0.99848674442;

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
    msg.setTimeStamp(0.326671539726);
    msg.setSource(6413U);
    msg.setSourceEntity(150U);
    msg.setDestination(56517U);
    msg.setDestinationEntity(97U);
    msg.x = 0.855918085501;
    msg.y = 0.114485358827;
    msg.z = 0.477053875186;
    msg.phi = 0.497575770175;
    msg.theta = 0.57275714445;
    msg.psi = 0.726891180879;

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
    msg.setTimeStamp(0.955828829379);
    msg.setSource(59837U);
    msg.setSourceEntity(81U);
    msg.setDestination(23532U);
    msg.setDestinationEntity(64U);
    msg.beam_width = 0.274902265147;
    msg.beam_height = 0.260565563542;

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
    msg.setTimeStamp(0.313582254919);
    msg.setSource(59941U);
    msg.setSourceEntity(20U);
    msg.setDestination(21517U);
    msg.setDestinationEntity(246U);
    msg.beam_width = 0.817640247907;
    msg.beam_height = 0.317480943247;

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
    msg.setTimeStamp(0.709844106577);
    msg.setSource(35849U);
    msg.setSourceEntity(90U);
    msg.setDestination(6309U);
    msg.setDestinationEntity(9U);
    msg.beam_width = 0.535784314994;
    msg.beam_height = 0.310134575702;

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
    msg.setTimeStamp(0.741121089863);
    msg.setSource(24954U);
    msg.setSourceEntity(168U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(93U);
    msg.sane = 187U;

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
    msg.setTimeStamp(0.639647626601);
    msg.setSource(7188U);
    msg.setSourceEntity(48U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(84U);
    msg.sane = 208U;

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
    msg.setTimeStamp(0.0993803484881);
    msg.setSource(36614U);
    msg.setSourceEntity(245U);
    msg.setDestination(62470U);
    msg.setDestinationEntity(100U);
    msg.sane = 250U;

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
    msg.setTimeStamp(0.80122634466);
    msg.setSource(2502U);
    msg.setSourceEntity(23U);
    msg.setDestination(23588U);
    msg.setDestinationEntity(18U);
    msg.value = 0.865342689171;

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
    msg.setTimeStamp(0.499889457828);
    msg.setSource(7803U);
    msg.setSourceEntity(15U);
    msg.setDestination(56579U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0447602817291;

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
    msg.setTimeStamp(0.028482343336);
    msg.setSource(26780U);
    msg.setSourceEntity(172U);
    msg.setDestination(56948U);
    msg.setDestinationEntity(87U);
    msg.value = 0.451907499189;

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
    msg.setTimeStamp(0.508543201836);
    msg.setSource(33652U);
    msg.setSourceEntity(233U);
    msg.setDestination(65287U);
    msg.setDestinationEntity(210U);
    msg.value = 0.449819982204;

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
    msg.setTimeStamp(0.0593255893267);
    msg.setSource(2859U);
    msg.setSourceEntity(8U);
    msg.setDestination(22768U);
    msg.setDestinationEntity(213U);
    msg.value = 0.531972155602;

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
    msg.setTimeStamp(0.359326095685);
    msg.setSource(13521U);
    msg.setSourceEntity(181U);
    msg.setDestination(45898U);
    msg.setDestinationEntity(71U);
    msg.value = 0.347886607341;

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
    msg.setTimeStamp(0.752203863013);
    msg.setSource(54911U);
    msg.setSourceEntity(167U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(226U);
    msg.value = 0.322836586524;

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
    msg.setTimeStamp(0.174614865831);
    msg.setSource(1166U);
    msg.setSourceEntity(69U);
    msg.setDestination(20683U);
    msg.setDestinationEntity(221U);
    msg.value = 0.14795385334;

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
    msg.setTimeStamp(0.310025605072);
    msg.setSource(61593U);
    msg.setSourceEntity(6U);
    msg.setDestination(28461U);
    msg.setDestinationEntity(46U);
    msg.value = 0.080317468912;

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
    msg.setTimeStamp(0.97073215351);
    msg.setSource(28080U);
    msg.setSourceEntity(129U);
    msg.setDestination(54127U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0823714468264;

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
    msg.setTimeStamp(0.814225443386);
    msg.setSource(16179U);
    msg.setSourceEntity(49U);
    msg.setDestination(44113U);
    msg.setDestinationEntity(232U);
    msg.value = 0.885155559259;

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
    msg.setTimeStamp(0.315155853968);
    msg.setSource(59587U);
    msg.setSourceEntity(134U);
    msg.setDestination(48005U);
    msg.setDestinationEntity(35U);
    msg.value = 0.832674261121;

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
    msg.setTimeStamp(0.623625314349);
    msg.setSource(41265U);
    msg.setSourceEntity(168U);
    msg.setDestination(54090U);
    msg.setDestinationEntity(160U);
    msg.value = 0.653302080705;

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
    msg.setTimeStamp(0.473147198772);
    msg.setSource(14563U);
    msg.setSourceEntity(32U);
    msg.setDestination(52704U);
    msg.setDestinationEntity(129U);
    msg.value = 0.146861488273;

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
    msg.setTimeStamp(0.269871911524);
    msg.setSource(33229U);
    msg.setSourceEntity(224U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(90U);
    msg.value = 0.434435177744;

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
    msg.setTimeStamp(0.75528558465);
    msg.setSource(63014U);
    msg.setSourceEntity(186U);
    msg.setDestination(39424U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0464821872442;

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
    msg.setTimeStamp(0.0548192329032);
    msg.setSource(59840U);
    msg.setSourceEntity(180U);
    msg.setDestination(46595U);
    msg.setDestinationEntity(21U);
    msg.value = 0.576442110002;

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
    msg.setTimeStamp(0.428918838995);
    msg.setSource(2718U);
    msg.setSourceEntity(94U);
    msg.setDestination(13842U);
    msg.setDestinationEntity(41U);
    msg.value = 0.186272614615;

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
    msg.setTimeStamp(0.712212286824);
    msg.setSource(6885U);
    msg.setSourceEntity(172U);
    msg.setDestination(19226U);
    msg.setDestinationEntity(197U);
    msg.value = 0.73818855756;

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
    msg.setTimeStamp(0.734720219855);
    msg.setSource(31842U);
    msg.setSourceEntity(80U);
    msg.setDestination(51171U);
    msg.setDestinationEntity(49U);
    msg.value = 0.505506791696;

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
    msg.setTimeStamp(0.0690196070244);
    msg.setSource(61251U);
    msg.setSourceEntity(219U);
    msg.setDestination(10791U);
    msg.setDestinationEntity(208U);
    msg.value = 0.676699207243;

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
    msg.setTimeStamp(0.583148655056);
    msg.setSource(63643U);
    msg.setSourceEntity(77U);
    msg.setDestination(7741U);
    msg.setDestinationEntity(230U);
    msg.value = 0.71523801628;

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
    msg.setTimeStamp(0.744615780158);
    msg.setSource(13815U);
    msg.setSourceEntity(10U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(50U);
    msg.value = 0.724249196755;

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
    msg.setTimeStamp(0.456275070354);
    msg.setSource(52603U);
    msg.setSourceEntity(53U);
    msg.setDestination(13887U);
    msg.setDestinationEntity(178U);
    msg.value = 0.0295244980246;

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
    msg.setTimeStamp(0.628831954593);
    msg.setSource(9859U);
    msg.setSourceEntity(29U);
    msg.setDestination(30701U);
    msg.setDestinationEntity(127U);
    msg.validity = 23954U;
    msg.type = 44U;
    msg.tow = 1881712532U;
    msg.base_lat = 0.637051797505;
    msg.base_lon = 0.952545221842;
    msg.base_height = 0.88891144528;
    msg.n = 0.670832477598;
    msg.e = 0.0988449048424;
    msg.d = 0.2463113942;
    msg.v_n = 0.208307238367;
    msg.v_e = 0.0373045747529;
    msg.v_d = 0.824522900758;
    msg.satellites = 85U;
    msg.iar_hyp = 40594U;
    msg.iar_ratio = 0.35871648528;

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
    msg.setTimeStamp(0.303820836499);
    msg.setSource(45259U);
    msg.setSourceEntity(68U);
    msg.setDestination(50348U);
    msg.setDestinationEntity(249U);
    msg.validity = 28816U;
    msg.type = 196U;
    msg.tow = 3050803574U;
    msg.base_lat = 0.156158656638;
    msg.base_lon = 0.712759694526;
    msg.base_height = 0.251602908433;
    msg.n = 0.395264885933;
    msg.e = 0.653975734214;
    msg.d = 0.709066625909;
    msg.v_n = 0.308980529747;
    msg.v_e = 0.504623764894;
    msg.v_d = 0.491781894996;
    msg.satellites = 190U;
    msg.iar_hyp = 52202U;
    msg.iar_ratio = 0.222867522036;

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
    msg.setTimeStamp(0.864732946655);
    msg.setSource(16997U);
    msg.setSourceEntity(38U);
    msg.setDestination(8053U);
    msg.setDestinationEntity(216U);
    msg.validity = 6645U;
    msg.type = 249U;
    msg.tow = 893813720U;
    msg.base_lat = 0.480971745991;
    msg.base_lon = 0.69963802591;
    msg.base_height = 0.977569338757;
    msg.n = 0.294535685023;
    msg.e = 0.890616839168;
    msg.d = 0.112681401738;
    msg.v_n = 0.692951348045;
    msg.v_e = 0.78969958078;
    msg.v_d = 0.444539797243;
    msg.satellites = 175U;
    msg.iar_hyp = 10493U;
    msg.iar_ratio = 0.814632187837;

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
    msg.setTimeStamp(0.376808899951);
    msg.setSource(28574U);
    msg.setSourceEntity(220U);
    msg.setDestination(23778U);
    msg.setDestinationEntity(88U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0327197205926;
    tmp_msg_0.lon = 0.834416998403;
    tmp_msg_0.height = 0.377222724195;
    tmp_msg_0.x = 0.120953848741;
    tmp_msg_0.y = 0.58228934799;
    tmp_msg_0.z = 0.802854456702;
    tmp_msg_0.phi = 0.435905878179;
    tmp_msg_0.theta = 0.676828905142;
    tmp_msg_0.psi = 0.663351435869;
    tmp_msg_0.u = 0.00738766257311;
    tmp_msg_0.v = 0.88651660323;
    tmp_msg_0.w = 0.323388109528;
    tmp_msg_0.vx = 0.447329306395;
    tmp_msg_0.vy = 0.175686874063;
    tmp_msg_0.vz = 0.591072137591;
    tmp_msg_0.p = 0.150711376947;
    tmp_msg_0.q = 0.75167569756;
    tmp_msg_0.r = 0.817023636346;
    tmp_msg_0.depth = 0.773632756362;
    tmp_msg_0.alt = 0.76046484261;
    msg.state.set(tmp_msg_0);
    msg.type = 245U;

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
    msg.setTimeStamp(0.1814644202);
    msg.setSource(9380U);
    msg.setSourceEntity(89U);
    msg.setDestination(5588U);
    msg.setDestinationEntity(150U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.544313172232;
    tmp_msg_0.lon = 3.56412772612e-05;
    tmp_msg_0.height = 0.660977135203;
    tmp_msg_0.x = 0.877118951264;
    tmp_msg_0.y = 0.554700824873;
    tmp_msg_0.z = 0.29566650237;
    tmp_msg_0.phi = 0.355660131587;
    tmp_msg_0.theta = 0.832353675551;
    tmp_msg_0.psi = 0.264102374608;
    tmp_msg_0.u = 0.266233085988;
    tmp_msg_0.v = 0.490219478687;
    tmp_msg_0.w = 0.782950094784;
    tmp_msg_0.vx = 0.0605689266269;
    tmp_msg_0.vy = 0.87450038269;
    tmp_msg_0.vz = 0.504605126822;
    tmp_msg_0.p = 0.620854683641;
    tmp_msg_0.q = 0.537831799769;
    tmp_msg_0.r = 0.69412040134;
    tmp_msg_0.depth = 0.720163578512;
    tmp_msg_0.alt = 0.974799240144;
    msg.state.set(tmp_msg_0);
    msg.type = 168U;

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
    msg.setTimeStamp(0.0475300760908);
    msg.setSource(61163U);
    msg.setSourceEntity(243U);
    msg.setDestination(3203U);
    msg.setDestinationEntity(177U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.720762026272;
    tmp_msg_0.lon = 0.199070138348;
    tmp_msg_0.height = 0.427119989044;
    tmp_msg_0.x = 0.653129257392;
    tmp_msg_0.y = 0.153537045726;
    tmp_msg_0.z = 0.588659828633;
    tmp_msg_0.phi = 0.327181983106;
    tmp_msg_0.theta = 0.147194229019;
    tmp_msg_0.psi = 0.393097058111;
    tmp_msg_0.u = 0.210170312024;
    tmp_msg_0.v = 0.408387200645;
    tmp_msg_0.w = 0.149903530978;
    tmp_msg_0.vx = 0.716331669213;
    tmp_msg_0.vy = 0.523411939041;
    tmp_msg_0.vz = 0.11800859908;
    tmp_msg_0.p = 0.699142169131;
    tmp_msg_0.q = 0.646804312149;
    tmp_msg_0.r = 0.0275982726798;
    tmp_msg_0.depth = 0.686378238654;
    tmp_msg_0.alt = 0.904235931306;
    msg.state.set(tmp_msg_0);
    msg.type = 183U;

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
    msg.setTimeStamp(0.494830265809);
    msg.setSource(18706U);
    msg.setSourceEntity(205U);
    msg.setDestination(10016U);
    msg.setDestinationEntity(50U);
    msg.value = 0.946651625871;

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
    msg.setTimeStamp(0.699377388886);
    msg.setSource(9464U);
    msg.setSourceEntity(164U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(22U);
    msg.value = 0.738162496179;

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
    msg.setTimeStamp(0.459084700265);
    msg.setSource(52168U);
    msg.setSourceEntity(224U);
    msg.setDestination(5295U);
    msg.setDestinationEntity(70U);
    msg.value = 0.761430347456;

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
    msg.setTimeStamp(0.261681889104);
    msg.setSource(3890U);
    msg.setSourceEntity(111U);
    msg.setDestination(3937U);
    msg.setDestinationEntity(26U);
    msg.value = 0.438725418493;

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
    msg.setTimeStamp(0.925858799834);
    msg.setSource(38561U);
    msg.setSourceEntity(186U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(97U);
    msg.value = 0.659562270627;

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
    msg.setTimeStamp(0.266828880517);
    msg.setSource(57614U);
    msg.setSourceEntity(70U);
    msg.setDestination(3836U);
    msg.setDestinationEntity(183U);
    msg.value = 0.300872407722;

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
    msg.setTimeStamp(0.825514746798);
    msg.setSource(9424U);
    msg.setSourceEntity(138U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(87U);
    msg.value = 0.842868950422;

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
    msg.setTimeStamp(0.370055788155);
    msg.setSource(33337U);
    msg.setSourceEntity(168U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(243U);
    msg.value = 0.955234298412;

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
    msg.setTimeStamp(0.0623056442243);
    msg.setSource(56778U);
    msg.setSourceEntity(65U);
    msg.setDestination(2132U);
    msg.setDestinationEntity(42U);
    msg.value = 0.320423654059;

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
    msg.setTimeStamp(0.110554027806);
    msg.setSource(25906U);
    msg.setSourceEntity(192U);
    msg.setDestination(23520U);
    msg.setDestinationEntity(80U);
    msg.value = 0.0152014873919;

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
    msg.setTimeStamp(0.940615808102);
    msg.setSource(39958U);
    msg.setSourceEntity(20U);
    msg.setDestination(15317U);
    msg.setDestinationEntity(140U);
    msg.value = 0.536404640786;

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
    msg.setTimeStamp(0.714133953765);
    msg.setSource(22422U);
    msg.setSourceEntity(128U);
    msg.setDestination(497U);
    msg.setDestinationEntity(129U);
    msg.value = 0.369679840153;

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
    msg.setTimeStamp(0.62389647202);
    msg.setSource(55303U);
    msg.setSourceEntity(239U);
    msg.setDestination(52904U);
    msg.setDestinationEntity(85U);
    msg.value = 0.568713070151;

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
    msg.setTimeStamp(0.155015840435);
    msg.setSource(328U);
    msg.setSourceEntity(210U);
    msg.setDestination(12369U);
    msg.setDestinationEntity(86U);
    msg.value = 0.230189132777;

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
    msg.setTimeStamp(0.5827428026);
    msg.setSource(34250U);
    msg.setSourceEntity(124U);
    msg.setDestination(33758U);
    msg.setDestinationEntity(102U);
    msg.value = 0.124807748285;

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
    msg.setTimeStamp(0.119340252461);
    msg.setSource(26640U);
    msg.setSourceEntity(24U);
    msg.setDestination(28916U);
    msg.setDestinationEntity(172U);
    msg.id = 151U;
    msg.zoom = 101U;
    msg.action = 99U;

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
    msg.setTimeStamp(0.218962243727);
    msg.setSource(50385U);
    msg.setSourceEntity(244U);
    msg.setDestination(38224U);
    msg.setDestinationEntity(213U);
    msg.id = 209U;
    msg.zoom = 161U;
    msg.action = 45U;

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
    msg.setTimeStamp(0.188744986799);
    msg.setSource(31005U);
    msg.setSourceEntity(207U);
    msg.setDestination(56661U);
    msg.setDestinationEntity(226U);
    msg.id = 87U;
    msg.zoom = 84U;
    msg.action = 181U;

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
    msg.setTimeStamp(0.218823071204);
    msg.setSource(54131U);
    msg.setSourceEntity(34U);
    msg.setDestination(40914U);
    msg.setDestinationEntity(48U);
    msg.id = 148U;
    msg.value = 0.495160194862;

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
    msg.setTimeStamp(0.559688084169);
    msg.setSource(63133U);
    msg.setSourceEntity(244U);
    msg.setDestination(34035U);
    msg.setDestinationEntity(23U);
    msg.id = 170U;
    msg.value = 0.93754238482;

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
    msg.setTimeStamp(0.0532004727118);
    msg.setSource(55147U);
    msg.setSourceEntity(40U);
    msg.setDestination(45818U);
    msg.setDestinationEntity(23U);
    msg.id = 19U;
    msg.value = 0.161583860764;

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
    msg.setTimeStamp(0.288440988432);
    msg.setSource(53298U);
    msg.setSourceEntity(78U);
    msg.setDestination(47576U);
    msg.setDestinationEntity(41U);
    msg.id = 170U;
    msg.value = 0.630097770586;

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
    msg.setTimeStamp(0.127765033986);
    msg.setSource(51869U);
    msg.setSourceEntity(94U);
    msg.setDestination(62827U);
    msg.setDestinationEntity(125U);
    msg.id = 72U;
    msg.value = 0.101823248846;

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
    msg.setTimeStamp(0.566185480298);
    msg.setSource(9037U);
    msg.setSourceEntity(208U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(99U);
    msg.id = 4U;
    msg.value = 0.308606253082;

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
    msg.setTimeStamp(0.421548822722);
    msg.setSource(17960U);
    msg.setSourceEntity(33U);
    msg.setDestination(20717U);
    msg.setDestinationEntity(82U);
    msg.id = 58U;
    msg.angle = 0.974967987475;

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
    msg.setTimeStamp(0.067421298157);
    msg.setSource(38083U);
    msg.setSourceEntity(143U);
    msg.setDestination(31796U);
    msg.setDestinationEntity(231U);
    msg.id = 1U;
    msg.angle = 0.000501182083371;

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
    msg.setTimeStamp(0.740038998978);
    msg.setSource(14185U);
    msg.setSourceEntity(88U);
    msg.setDestination(38311U);
    msg.setDestinationEntity(165U);
    msg.id = 232U;
    msg.angle = 0.105740512043;

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
    msg.setTimeStamp(0.598664434904);
    msg.setSource(30959U);
    msg.setSourceEntity(179U);
    msg.setDestination(24703U);
    msg.setDestinationEntity(253U);
    msg.op = 123U;
    msg.actions.assign("MNSWVQBCZKMOOAMPKQXZREISCMDODYQDQZQIELXOUNLZQWGXTPMAIGBIDYHVTTGE");

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
    msg.setTimeStamp(0.99598058415);
    msg.setSource(43769U);
    msg.setSourceEntity(97U);
    msg.setDestination(9400U);
    msg.setDestinationEntity(50U);
    msg.op = 240U;
    msg.actions.assign("DRPKORVRVARLEYWCCNHGIGOKBNNENNQHUXSYPTJJS");

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
    msg.setTimeStamp(0.681403503255);
    msg.setSource(47467U);
    msg.setSourceEntity(75U);
    msg.setDestination(36164U);
    msg.setDestinationEntity(171U);
    msg.op = 189U;
    msg.actions.assign("QCEUUFAYBMOSQQJHMHNAGGCKPYTSKKVRYZLRUZKOOPGRVIXPSBMQKWT");

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
    msg.setTimeStamp(0.333207864643);
    msg.setSource(46416U);
    msg.setSourceEntity(55U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("ZKJWJOXKANDQPIJLFNVVSERCANRATWSYRCKXBNEBNXUGFGRCNTXBRZLYRDWXOKDOTQCUHBPXOAGUOCFQZQEYEPHEMWPYPYRTFIOMCWMLJFFKZEULAVGXMBHMIIHTBMKLQNSSIAGJWVRXUICFYPGKYGLSMHYHSVHZTDEWPHKVJWRORCQZDGDJIQGFVSUOXOJILEPW");

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
    msg.setTimeStamp(0.707755222672);
    msg.setSource(29933U);
    msg.setSourceEntity(137U);
    msg.setDestination(55412U);
    msg.setDestinationEntity(112U);
    msg.actions.assign("TMEHKZDLOGCSLEDLFIGCWAIYTJNGSDJUMCAIIFHYJWEXPQHIOSZQYIFUSARLLC");

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
    msg.setTimeStamp(0.47971699265);
    msg.setSource(33560U);
    msg.setSourceEntity(58U);
    msg.setDestination(41250U);
    msg.setDestinationEntity(83U);
    msg.actions.assign("ZSUEFCUMVJGRRILZUURSFHYMAFEYTDLJKKHKGYOAPOHZLV");

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
    msg.setTimeStamp(0.397512820891);
    msg.setSource(27345U);
    msg.setSourceEntity(151U);
    msg.setDestination(51633U);
    msg.setDestinationEntity(36U);
    msg.button = 145U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.886537047358);
    msg.setSource(19846U);
    msg.setSourceEntity(39U);
    msg.setDestination(11367U);
    msg.setDestinationEntity(199U);
    msg.button = 161U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.402250694218);
    msg.setSource(31187U);
    msg.setSourceEntity(83U);
    msg.setDestination(41151U);
    msg.setDestinationEntity(234U);
    msg.button = 216U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.574857673558);
    msg.setSource(40011U);
    msg.setSourceEntity(205U);
    msg.setDestination(49402U);
    msg.setDestinationEntity(173U);
    msg.op = 116U;
    msg.text.assign("UIWRSHPJELERRVGGHKR");

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
    msg.setTimeStamp(0.557629789149);
    msg.setSource(31640U);
    msg.setSourceEntity(207U);
    msg.setDestination(23863U);
    msg.setDestinationEntity(237U);
    msg.op = 60U;
    msg.text.assign("BXXUIBFULLHGTTRVJEBYHZKGPKALCQERYRQUZEWKYCYHWPVDUVFDXSMPN");

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
    msg.setTimeStamp(0.825471755169);
    msg.setSource(49713U);
    msg.setSourceEntity(152U);
    msg.setDestination(32740U);
    msg.setDestinationEntity(44U);
    msg.op = 96U;
    msg.text.assign("QBVYJFAHWBWUYJEDZFDUJFQGGVZQKHNGNTNKCJXOBQVPPOJVRCCNQSZVMVRLCUGGZYAABBUSFPAFATWXPXMTWDUBOGPBHILMSNYHUPVJMOJHMLDROEPDAZSWMTVEOCNTKTHEURNVIIRNMKSSLOIUZQLZSLINTIWAYOGKGAFQCE");

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
    msg.setTimeStamp(0.434376155265);
    msg.setSource(18577U);
    msg.setSourceEntity(4U);
    msg.setDestination(56742U);
    msg.setDestinationEntity(91U);
    msg.op = 18U;
    msg.time_remain = 0.321753726338;
    msg.sched_time = 0.181436584224;

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
    msg.setTimeStamp(0.0244841367166);
    msg.setSource(18501U);
    msg.setSourceEntity(26U);
    msg.setDestination(65456U);
    msg.setDestinationEntity(229U);
    msg.op = 210U;
    msg.time_remain = 0.125927863779;
    msg.sched_time = 0.733902723634;

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
    msg.setTimeStamp(0.656854441572);
    msg.setSource(29617U);
    msg.setSourceEntity(10U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(219U);
    msg.op = 241U;
    msg.time_remain = 0.552138171603;
    msg.sched_time = 0.49374130146;

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
    msg.setTimeStamp(0.449371963688);
    msg.setSource(32043U);
    msg.setSourceEntity(108U);
    msg.setDestination(49397U);
    msg.setDestinationEntity(53U);
    msg.name.assign("PSZUJZWKHSTKWCQLEGPRHNAKFURYGMAXWQT");
    msg.op = 103U;
    msg.sched_time = 0.449213352044;

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
    msg.setTimeStamp(0.0198570295373);
    msg.setSource(64999U);
    msg.setSourceEntity(254U);
    msg.setDestination(38035U);
    msg.setDestinationEntity(157U);
    msg.name.assign("KVMOCGGMVYASEAZJDCRMIWBLTHTNSAEJXBITJJTPKYTBHMNVKIFHTWDWWDIQXDUNJANSWNHEZOHJEBEUPCAC");
    msg.op = 0U;
    msg.sched_time = 0.262325507069;

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
    msg.setTimeStamp(0.265725480253);
    msg.setSource(14308U);
    msg.setSourceEntity(211U);
    msg.setDestination(42780U);
    msg.setDestinationEntity(147U);
    msg.name.assign("KDNSFAVBUIXLLQSSQEOTQHZSHFZAFYMJYPXMPTPOGKRGEMJYJUDDHVRPJQKTOYJIXKIGBKMNCPJLDOEYSWERMDYTMCGXPUUNXKQDVCYVSWAHZZMTDZTFGVUREAFAVYCCXSIXVTLFHLHDUPMQCISLUFWOREZWSNJVJWBNAHFINNKYPJFQGOGXGCBUOCPKZBUNERRGRPYADHMZZARBWHNQBSOEDOLWBWOVJWRZKQBBXI");
    msg.op = 132U;
    msg.sched_time = 0.467627344262;

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
    msg.setTimeStamp(0.655015859562);
    msg.setSource(19287U);
    msg.setSourceEntity(118U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.154703575013);
    msg.setSource(598U);
    msg.setSourceEntity(60U);
    msg.setDestination(8194U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.321303870249);
    msg.setSource(28474U);
    msg.setSourceEntity(188U);
    msg.setDestination(27523U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.0659802017709);
    msg.setSource(32058U);
    msg.setSourceEntity(171U);
    msg.setDestination(36921U);
    msg.setDestinationEntity(57U);
    msg.name.assign("IQAQQBGRHOQTNODYFPPAMYIBKCPVFXHRFAWPVXTFENNNZGOJSRFVLBWSBUSAIRUUJQTZEPCXTCIJVKGKYFYGHIQTRJSEHJMXMKMZAGGNFQHWNMUELOSECKZZXWRVOTXBTAMDGBQMMKVBLNYSZWHTSKLIHDRLBWIHTKYDEXUPMRYELCCVSWAGWALNFJECKUWCLJVALURFJYO");
    msg.state = 67U;

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
    msg.setTimeStamp(0.0669850058026);
    msg.setSource(26143U);
    msg.setSourceEntity(131U);
    msg.setDestination(16342U);
    msg.setDestinationEntity(177U);
    msg.name.assign("RVNLRUKHQJIPJTQYGBCRIDCCMAFNWOUTRSW");
    msg.state = 249U;

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
    msg.setTimeStamp(0.366747363152);
    msg.setSource(26463U);
    msg.setSourceEntity(60U);
    msg.setDestination(30153U);
    msg.setDestinationEntity(215U);
    msg.name.assign("NSLYNEFKGKWIDBXLE");
    msg.state = 38U;

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
    msg.setTimeStamp(0.832265607262);
    msg.setSource(17499U);
    msg.setSourceEntity(85U);
    msg.setDestination(27485U);
    msg.setDestinationEntity(109U);
    msg.name.assign("PGJAWUFCOBRUOSCEEBOPDDVMKPKXYBORCWFJLZEBIBMNWYNFYSUJYMRPGVHZNMXIHQYMADMXDITZTXNFPFTLOHCICTTMNQNGVGAZTSUEGERLCGPJLFYBSZBEXEKIPZJQIHXGHTNXQYADXDRUOKEACBGXOAWWUALUVVVWYSBFIANFQQCHPAKMVHDYEI");
    msg.value = 183U;

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
    msg.setTimeStamp(0.719796239139);
    msg.setSource(2635U);
    msg.setSourceEntity(234U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(97U);
    msg.name.assign("GWSZKYYTFLVFOXKZQFYJEZRLDMTYUQDSGLCBORHVBDOHJOZPMBMCJVGOIUTBXNXWTNY");
    msg.value = 193U;

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
    msg.setTimeStamp(0.00373040624739);
    msg.setSource(38870U);
    msg.setSourceEntity(60U);
    msg.setDestination(24360U);
    msg.setDestinationEntity(109U);
    msg.name.assign("QICKWSPUKOBJWOKVNZZFSNGDBBXEIEVJTLQXDSYKBGHADTEKECFMMYURPANEUCIZQNZQLGZQJUOVCJVRKDFWEORAUQMEYOMIFLBOHEWWMLS");
    msg.value = 224U;

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
    msg.setTimeStamp(0.772040963306);
    msg.setSource(10093U);
    msg.setSourceEntity(200U);
    msg.setDestination(2983U);
    msg.setDestinationEntity(101U);
    msg.name.assign("MVOXMZJROUSYVJZUQJQZMQCUBLLGKWIJBHDNPISOHYINVCLYQJGPBPZUJJVRRTPUIREQISKSCZGOWWLFKYAOOHLMDFXXYSPOCEDGKXADTCBVFDIPUGMQFPAJCZSOCKDIEELEHVVETFMXVODUBYQNXURR");

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
    msg.setTimeStamp(0.681126986844);
    msg.setSource(51909U);
    msg.setSourceEntity(164U);
    msg.setDestination(15090U);
    msg.setDestinationEntity(165U);
    msg.name.assign("GWOIVEMBBHUIRLMRSDKSFIGDZZLIFWKCKPPXBKZAOPHXALYFUAQKIDJDMPYYFUJUTDYEXHOUOCNDLTLPFMVWFMJHZAHVTDJPWGJPDGETBWOQLOYPUOHEICHIFFLMCBX");

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
    msg.setTimeStamp(0.662265074443);
    msg.setSource(55739U);
    msg.setSourceEntity(171U);
    msg.setDestination(25731U);
    msg.setDestinationEntity(225U);
    msg.name.assign("MLGJYTSQXEDVGVWGHDXMFCKWQPECOFLLVL");

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
    msg.setTimeStamp(0.141074144625);
    msg.setSource(18712U);
    msg.setSourceEntity(67U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(250U);
    msg.name.assign("PHIRWZZSAOMNAGMRMCLXFOUEEWOKVDQJRLUHONVYAO");
    msg.value = 163U;

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
    msg.setTimeStamp(0.900299979511);
    msg.setSource(17970U);
    msg.setSourceEntity(102U);
    msg.setDestination(44495U);
    msg.setDestinationEntity(1U);
    msg.name.assign("MOHQPYNMMGEDZKHGZLBDFXJYWOQLVRCULIATURPX");
    msg.value = 217U;

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
    msg.setTimeStamp(0.704948290332);
    msg.setSource(59457U);
    msg.setSourceEntity(71U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(78U);
    msg.name.assign("WUSZURTXUQICVUDTCKYVZZPBDCLXJFRGRVKBRSYHNWRWLHWXYNJQCNSWFMNCGPIFOPOBMECL");
    msg.value = 9U;

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
    msg.setTimeStamp(0.25179882551);
    msg.setSource(19602U);
    msg.setSourceEntity(175U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(169U);
    msg.id = 213U;
    msg.period = 2568483797U;
    msg.duty_cycle = 462469732U;

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
    msg.setTimeStamp(0.580735548602);
    msg.setSource(28235U);
    msg.setSourceEntity(19U);
    msg.setDestination(46228U);
    msg.setDestinationEntity(97U);
    msg.id = 39U;
    msg.period = 961763974U;
    msg.duty_cycle = 708503601U;

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
    msg.setTimeStamp(0.681181273678);
    msg.setSource(34909U);
    msg.setSourceEntity(238U);
    msg.setDestination(1879U);
    msg.setDestinationEntity(13U);
    msg.id = 169U;
    msg.period = 3145747143U;
    msg.duty_cycle = 2374074651U;

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
    msg.setTimeStamp(0.545532843364);
    msg.setSource(27298U);
    msg.setSourceEntity(57U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(131U);
    msg.id = 82U;
    msg.period = 1380253214U;
    msg.duty_cycle = 74403670U;

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
    msg.setTimeStamp(0.61843618297);
    msg.setSource(9637U);
    msg.setSourceEntity(171U);
    msg.setDestination(34633U);
    msg.setDestinationEntity(248U);
    msg.id = 115U;
    msg.period = 2366208216U;
    msg.duty_cycle = 3094026123U;

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
    msg.setTimeStamp(0.573926884351);
    msg.setSource(28454U);
    msg.setSourceEntity(26U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(40U);
    msg.id = 210U;
    msg.period = 3995858397U;
    msg.duty_cycle = 1369527410U;

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
    msg.setTimeStamp(0.11334327798);
    msg.setSource(60771U);
    msg.setSourceEntity(80U);
    msg.setDestination(61064U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.725696067432;
    msg.lon = 0.900337802844;
    msg.height = 0.0326984900234;
    msg.x = 0.415623771237;
    msg.y = 0.501224456019;
    msg.z = 0.212472823693;
    msg.phi = 0.201317775051;
    msg.theta = 0.757692490324;
    msg.psi = 0.647247737557;
    msg.u = 0.216603527482;
    msg.v = 0.871037859315;
    msg.w = 0.397720593162;
    msg.vx = 0.0991985261735;
    msg.vy = 0.126171512614;
    msg.vz = 0.118292096295;
    msg.p = 0.498305231398;
    msg.q = 0.172743859223;
    msg.r = 0.812533920703;
    msg.depth = 0.58759472243;
    msg.alt = 0.324997531279;

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
    msg.setTimeStamp(0.729681410529);
    msg.setSource(50014U);
    msg.setSourceEntity(148U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.111940147436;
    msg.lon = 0.510643108721;
    msg.height = 0.93507244306;
    msg.x = 0.496139551561;
    msg.y = 0.0800024505896;
    msg.z = 0.865342812871;
    msg.phi = 0.120043096563;
    msg.theta = 0.673855952539;
    msg.psi = 0.711312275737;
    msg.u = 0.0998082864202;
    msg.v = 0.141062993437;
    msg.w = 0.255822105662;
    msg.vx = 0.983762197381;
    msg.vy = 0.583397925887;
    msg.vz = 0.384184632461;
    msg.p = 0.507725873408;
    msg.q = 0.597188576526;
    msg.r = 0.337654596278;
    msg.depth = 0.809947740539;
    msg.alt = 0.237777361662;

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
    msg.setTimeStamp(0.810193945487);
    msg.setSource(48243U);
    msg.setSourceEntity(79U);
    msg.setDestination(11654U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.159319573357;
    msg.lon = 0.937433590911;
    msg.height = 0.791608018268;
    msg.x = 0.809835461629;
    msg.y = 0.233360993451;
    msg.z = 0.88758791478;
    msg.phi = 0.894640906063;
    msg.theta = 0.305713621255;
    msg.psi = 0.305619314322;
    msg.u = 0.739239383205;
    msg.v = 0.936602172513;
    msg.w = 0.404271784735;
    msg.vx = 0.465819911231;
    msg.vy = 0.773784920147;
    msg.vz = 0.195028637137;
    msg.p = 0.765897315754;
    msg.q = 0.381600488518;
    msg.r = 0.0221187710849;
    msg.depth = 0.314216720505;
    msg.alt = 0.0146964517184;

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
    msg.setTimeStamp(0.3995517865);
    msg.setSource(37937U);
    msg.setSourceEntity(212U);
    msg.setDestination(29135U);
    msg.setDestinationEntity(132U);
    msg.x = 0.151247138616;
    msg.y = 0.264485468663;
    msg.z = 0.141130764062;

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
    msg.setTimeStamp(0.294447227696);
    msg.setSource(45518U);
    msg.setSourceEntity(205U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(186U);
    msg.x = 0.198918848774;
    msg.y = 0.106303477444;
    msg.z = 0.285458094543;

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
    msg.setTimeStamp(0.446038083978);
    msg.setSource(5361U);
    msg.setSourceEntity(245U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(217U);
    msg.x = 0.25472545016;
    msg.y = 0.165608715783;
    msg.z = 0.473837404489;

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
    msg.setTimeStamp(0.120793824887);
    msg.setSource(40391U);
    msg.setSourceEntity(101U);
    msg.setDestination(46048U);
    msg.setDestinationEntity(66U);
    msg.value = 0.10844370573;

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
    msg.setTimeStamp(0.491568533602);
    msg.setSource(57451U);
    msg.setSourceEntity(174U);
    msg.setDestination(63639U);
    msg.setDestinationEntity(59U);
    msg.value = 0.0958123373848;

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
    msg.setTimeStamp(0.626646453591);
    msg.setSource(592U);
    msg.setSourceEntity(143U);
    msg.setDestination(55781U);
    msg.setDestinationEntity(50U);
    msg.value = 0.919841287703;

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
    msg.setTimeStamp(0.164851977513);
    msg.setSource(37640U);
    msg.setSourceEntity(195U);
    msg.setDestination(44288U);
    msg.setDestinationEntity(4U);
    msg.value = 0.652189290264;

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
    msg.setTimeStamp(0.102448107593);
    msg.setSource(48725U);
    msg.setSourceEntity(190U);
    msg.setDestination(23742U);
    msg.setDestinationEntity(74U);
    msg.value = 0.821553779519;

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
    msg.setTimeStamp(0.109271507112);
    msg.setSource(46430U);
    msg.setSourceEntity(26U);
    msg.setDestination(34058U);
    msg.setDestinationEntity(39U);
    msg.value = 0.140986063252;

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
    msg.setTimeStamp(0.514015404048);
    msg.setSource(36253U);
    msg.setSourceEntity(87U);
    msg.setDestination(44157U);
    msg.setDestinationEntity(188U);
    msg.x = 0.0974815688632;
    msg.y = 0.211686080132;
    msg.z = 0.784692840083;
    msg.phi = 0.120149278189;
    msg.theta = 0.0265983270288;
    msg.psi = 0.772261151282;
    msg.p = 0.0641976214143;
    msg.q = 0.925222592879;
    msg.r = 0.463313029673;
    msg.u = 0.0626477068553;
    msg.v = 0.439134028217;
    msg.w = 0.231910405735;
    msg.bias_psi = 0.605094854019;
    msg.bias_r = 0.19940616196;

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
    msg.setTimeStamp(0.400481019801);
    msg.setSource(30114U);
    msg.setSourceEntity(243U);
    msg.setDestination(32613U);
    msg.setDestinationEntity(80U);
    msg.x = 0.935926978299;
    msg.y = 0.933159045949;
    msg.z = 0.51628651477;
    msg.phi = 0.838045140655;
    msg.theta = 0.876324388545;
    msg.psi = 0.59069989013;
    msg.p = 0.309516676632;
    msg.q = 0.456197739339;
    msg.r = 0.766380947198;
    msg.u = 0.385090418816;
    msg.v = 0.896612218317;
    msg.w = 0.836842999872;
    msg.bias_psi = 0.993946794356;
    msg.bias_r = 0.175810006142;

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
    msg.setTimeStamp(0.184302142753);
    msg.setSource(21450U);
    msg.setSourceEntity(228U);
    msg.setDestination(45817U);
    msg.setDestinationEntity(208U);
    msg.x = 0.440568587593;
    msg.y = 0.0126484967694;
    msg.z = 0.780212869611;
    msg.phi = 0.785329959497;
    msg.theta = 0.87788306392;
    msg.psi = 0.221640218749;
    msg.p = 0.850872691063;
    msg.q = 0.670720905889;
    msg.r = 0.362593810607;
    msg.u = 0.249257726259;
    msg.v = 0.753580161707;
    msg.w = 0.801030015532;
    msg.bias_psi = 0.690058599428;
    msg.bias_r = 0.643466495619;

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
    msg.setTimeStamp(0.0289112194469);
    msg.setSource(50576U);
    msg.setSourceEntity(104U);
    msg.setDestination(3157U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.747396783536;
    msg.bias_r = 0.995053076223;
    msg.cog = 0.835420016739;
    msg.cyaw = 0.415458123474;
    msg.lbl_rej_level = 0.805713441507;
    msg.gps_rej_level = 0.318459089442;
    msg.custom_x = 0.0511311496349;
    msg.custom_y = 0.292727964933;
    msg.custom_z = 0.864633625649;

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
    msg.setTimeStamp(0.961961250926);
    msg.setSource(8249U);
    msg.setSourceEntity(66U);
    msg.setDestination(63144U);
    msg.setDestinationEntity(195U);
    msg.bias_psi = 0.240867684411;
    msg.bias_r = 0.523591414768;
    msg.cog = 0.907836112677;
    msg.cyaw = 0.292091820847;
    msg.lbl_rej_level = 0.785279288884;
    msg.gps_rej_level = 0.227935170121;
    msg.custom_x = 0.0103623923575;
    msg.custom_y = 0.0904791843575;
    msg.custom_z = 0.599232121975;

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
    msg.setTimeStamp(0.257187822749);
    msg.setSource(30481U);
    msg.setSourceEntity(193U);
    msg.setDestination(43726U);
    msg.setDestinationEntity(116U);
    msg.bias_psi = 0.686227900302;
    msg.bias_r = 0.961269215931;
    msg.cog = 0.288919019511;
    msg.cyaw = 0.201160880814;
    msg.lbl_rej_level = 0.977288412098;
    msg.gps_rej_level = 0.153320498291;
    msg.custom_x = 0.437208004738;
    msg.custom_y = 0.748853968702;
    msg.custom_z = 0.463882456559;

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
    msg.setTimeStamp(0.288626360559);
    msg.setSource(13185U);
    msg.setSourceEntity(224U);
    msg.setDestination(54158U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.893746817559;
    msg.reason = 138U;

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
    msg.setTimeStamp(0.550270346585);
    msg.setSource(6376U);
    msg.setSourceEntity(22U);
    msg.setDestination(29751U);
    msg.setDestinationEntity(59U);
    msg.utc_time = 0.937590778454;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.512643647756);
    msg.setSource(44377U);
    msg.setSourceEntity(103U);
    msg.setDestination(39671U);
    msg.setDestinationEntity(117U);
    msg.utc_time = 0.349952915263;
    msg.reason = 89U;

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
    msg.setTimeStamp(0.208798552723);
    msg.setSource(54084U);
    msg.setSourceEntity(237U);
    msg.setDestination(29534U);
    msg.setDestinationEntity(122U);
    msg.id = 128U;
    msg.range = 0.948040833898;
    msg.acceptance = 25U;

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
    msg.setTimeStamp(0.134790959119);
    msg.setSource(47535U);
    msg.setSourceEntity(91U);
    msg.setDestination(36939U);
    msg.setDestinationEntity(22U);
    msg.id = 165U;
    msg.range = 0.0754248732055;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.077918739977);
    msg.setSource(26854U);
    msg.setSourceEntity(54U);
    msg.setDestination(44710U);
    msg.setDestinationEntity(186U);
    msg.id = 29U;
    msg.range = 0.324120790443;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.109677560719);
    msg.setSource(56820U);
    msg.setSourceEntity(29U);
    msg.setDestination(31550U);
    msg.setDestinationEntity(217U);
    msg.type = 175U;
    msg.reason = 166U;
    msg.value = 0.56217730725;
    msg.timestep = 0.79588314924;

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
    msg.setTimeStamp(0.14317598115);
    msg.setSource(6948U);
    msg.setSourceEntity(121U);
    msg.setDestination(38652U);
    msg.setDestinationEntity(206U);
    msg.type = 109U;
    msg.reason = 147U;
    msg.value = 0.70295595768;
    msg.timestep = 0.113436598595;

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
    msg.setTimeStamp(0.203261034166);
    msg.setSource(10048U);
    msg.setSourceEntity(49U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(51U);
    msg.type = 36U;
    msg.reason = 167U;
    msg.value = 0.763711472794;
    msg.timestep = 0.728698857357;

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
    msg.setTimeStamp(0.0668581499421);
    msg.setSource(21416U);
    msg.setSourceEntity(151U);
    msg.setDestination(27471U);
    msg.setDestinationEntity(85U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FKCFJQDQCIKGLWUAXJYGYFBOGZEHNNBADXQLFNOBY");
    tmp_msg_0.lat = 0.879727158165;
    tmp_msg_0.lon = 0.990716864213;
    tmp_msg_0.depth = 0.714439706999;
    tmp_msg_0.query_channel = 115U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 209U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.140346036318;
    msg.y = 0.398279834108;
    msg.var_x = 0.13351714228;
    msg.var_y = 0.881123446568;
    msg.distance = 0.492065604211;

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
    msg.setTimeStamp(0.368154215486);
    msg.setSource(39680U);
    msg.setSourceEntity(18U);
    msg.setDestination(14864U);
    msg.setDestinationEntity(155U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TIUOBOMZHMXWCEREGSPQWQFLOZPXFJXANNIAKYAKDHOUCLISWURWJUCVYMCYDQYHGVRYBJSGHYISOQWAJOHBFFTCDGYFGKVUZSXXOVBKUMJMGZAVERAFKEDRPCZMXDQLLSTIUYSIKLAWCPPD");
    tmp_msg_0.lat = 0.898911803303;
    tmp_msg_0.lon = 0.411496744792;
    tmp_msg_0.depth = 0.172212299645;
    tmp_msg_0.query_channel = 175U;
    tmp_msg_0.reply_channel = 179U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.954621321552;
    msg.y = 0.17962102976;
    msg.var_x = 0.371996608772;
    msg.var_y = 0.274009246729;
    msg.distance = 0.451952840528;

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
    msg.setTimeStamp(0.308587849017);
    msg.setSource(27434U);
    msg.setSourceEntity(156U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(81U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CVXAARUFJYRWDCUXSZZHTWEPWNIHHNFYGGBYNAUDAYEDMHCCONBYGGIRLAFFKNDIQQWFTHVDPTIGMMOSYTDUBAOHSNU");
    tmp_msg_0.lat = 0.937084867261;
    tmp_msg_0.lon = 0.0621990065373;
    tmp_msg_0.depth = 0.165032348769;
    tmp_msg_0.query_channel = 242U;
    tmp_msg_0.reply_channel = 251U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.455724554696;
    msg.y = 0.879863273551;
    msg.var_x = 0.214505945725;
    msg.var_y = 0.335073937749;
    msg.distance = 0.640876121407;

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
    msg.setTimeStamp(0.707877008054);
    msg.setSource(27886U);
    msg.setSourceEntity(202U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(231U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.000424114322033);
    msg.setSource(43058U);
    msg.setSourceEntity(39U);
    msg.setDestination(42453U);
    msg.setDestinationEntity(167U);
    msg.state = 90U;

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
    msg.setTimeStamp(0.379316621196);
    msg.setSource(38436U);
    msg.setSourceEntity(220U);
    msg.setDestination(59167U);
    msg.setDestinationEntity(213U);
    msg.state = 100U;

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
    msg.setTimeStamp(0.170027121752);
    msg.setSource(1715U);
    msg.setSourceEntity(18U);
    msg.setDestination(40007U);
    msg.setDestinationEntity(222U);
    msg.x = 0.085457558372;
    msg.y = 0.132075292656;
    msg.z = 0.609300260285;

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
    msg.setTimeStamp(0.843305431159);
    msg.setSource(41323U);
    msg.setSourceEntity(19U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(19U);
    msg.x = 0.102227144894;
    msg.y = 0.318716488184;
    msg.z = 0.0526533011533;

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
    msg.setTimeStamp(0.0992972273452);
    msg.setSource(40460U);
    msg.setSourceEntity(78U);
    msg.setDestination(43322U);
    msg.setDestinationEntity(189U);
    msg.x = 0.832193281771;
    msg.y = 0.985774491707;
    msg.z = 0.000471619055202;

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
    msg.setTimeStamp(0.731283076911);
    msg.setSource(39530U);
    msg.setSourceEntity(112U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(58U);
    msg.va = 0.752246433512;
    msg.aoa = 0.326752518444;
    msg.ssa = 0.78224899067;

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
    msg.setTimeStamp(0.33856027026);
    msg.setSource(42030U);
    msg.setSourceEntity(242U);
    msg.setDestination(10633U);
    msg.setDestinationEntity(147U);
    msg.va = 0.810217916464;
    msg.aoa = 0.240447025956;
    msg.ssa = 0.462850116876;

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
    msg.setTimeStamp(0.41413622609);
    msg.setSource(64709U);
    msg.setSourceEntity(0U);
    msg.setDestination(9416U);
    msg.setDestinationEntity(211U);
    msg.va = 0.772841039451;
    msg.aoa = 0.848521286177;
    msg.ssa = 0.833975381072;

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
    msg.setTimeStamp(0.400247059483);
    msg.setSource(1827U);
    msg.setSourceEntity(118U);
    msg.setDestination(44165U);
    msg.setDestinationEntity(183U);
    msg.value = 0.349774282762;

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
    msg.setTimeStamp(0.897402486539);
    msg.setSource(17537U);
    msg.setSourceEntity(65U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(28U);
    msg.value = 0.851572393178;

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
    msg.setTimeStamp(0.149617155235);
    msg.setSource(47519U);
    msg.setSourceEntity(125U);
    msg.setDestination(38609U);
    msg.setDestinationEntity(53U);
    msg.value = 0.142099841131;

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
    msg.setTimeStamp(0.295485336082);
    msg.setSource(36073U);
    msg.setSourceEntity(251U);
    msg.setDestination(13183U);
    msg.setDestinationEntity(17U);
    msg.value = 0.354256423289;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.806752709649);
    msg.setSource(56662U);
    msg.setSourceEntity(224U);
    msg.setDestination(34015U);
    msg.setDestinationEntity(206U);
    msg.value = 0.371074121836;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.333373514544);
    msg.setSource(59275U);
    msg.setSourceEntity(186U);
    msg.setDestination(32034U);
    msg.setDestinationEntity(253U);
    msg.value = 0.10491882049;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.864610019473);
    msg.setSource(26574U);
    msg.setSourceEntity(166U);
    msg.setDestination(44183U);
    msg.setDestinationEntity(155U);
    msg.value = 0.740202979475;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.0936582665357);
    msg.setSource(26155U);
    msg.setSourceEntity(239U);
    msg.setDestination(39089U);
    msg.setDestinationEntity(207U);
    msg.value = 0.969237665143;
    msg.speed_units = 139U;

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
    msg.setTimeStamp(0.0788930242428);
    msg.setSource(3718U);
    msg.setSourceEntity(251U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0469143334826;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.727112529699);
    msg.setSource(14214U);
    msg.setSourceEntity(203U);
    msg.setDestination(29699U);
    msg.setDestinationEntity(164U);
    msg.value = 0.372196261508;

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
    msg.setTimeStamp(0.105328675903);
    msg.setSource(28636U);
    msg.setSourceEntity(168U);
    msg.setDestination(57941U);
    msg.setDestinationEntity(217U);
    msg.value = 0.746574518903;

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
    msg.setTimeStamp(0.389905474144);
    msg.setSource(62743U);
    msg.setSourceEntity(238U);
    msg.setDestination(24231U);
    msg.setDestinationEntity(113U);
    msg.value = 0.368952502221;

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
    msg.setTimeStamp(0.204918094305);
    msg.setSource(61950U);
    msg.setSourceEntity(71U);
    msg.setDestination(48639U);
    msg.setDestinationEntity(100U);
    msg.value = 0.566508571438;

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
    msg.setTimeStamp(0.80798291439);
    msg.setSource(14383U);
    msg.setSourceEntity(197U);
    msg.setDestination(34704U);
    msg.setDestinationEntity(176U);
    msg.value = 0.644701206853;

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
    msg.setTimeStamp(0.739692124344);
    msg.setSource(19346U);
    msg.setSourceEntity(109U);
    msg.setDestination(47844U);
    msg.setDestinationEntity(1U);
    msg.value = 0.710580040582;

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
    msg.setTimeStamp(0.985393129012);
    msg.setSource(30126U);
    msg.setSourceEntity(80U);
    msg.setDestination(55027U);
    msg.setDestinationEntity(10U);
    msg.value = 0.596334889348;

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
    msg.setTimeStamp(0.296396160144);
    msg.setSource(11728U);
    msg.setSourceEntity(118U);
    msg.setDestination(46519U);
    msg.setDestinationEntity(221U);
    msg.value = 0.935365342816;

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
    msg.setTimeStamp(0.0750157088071);
    msg.setSource(35892U);
    msg.setSourceEntity(253U);
    msg.setDestination(46371U);
    msg.setDestinationEntity(197U);
    msg.value = 0.431442023729;

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
    msg.setTimeStamp(0.926998956335);
    msg.setSource(51088U);
    msg.setSourceEntity(213U);
    msg.setDestination(8967U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 3961917405U;
    msg.start_lat = 0.601523118141;
    msg.start_lon = 0.389509910027;
    msg.start_z = 0.544798106295;
    msg.start_z_units = 9U;
    msg.end_lat = 0.389320680555;
    msg.end_lon = 0.407162911992;
    msg.end_z = 0.522353282403;
    msg.end_z_units = 117U;
    msg.speed = 0.885014459074;
    msg.speed_units = 151U;
    msg.lradius = 0.850526150149;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.257190236585);
    msg.setSource(59988U);
    msg.setSourceEntity(66U);
    msg.setDestination(44183U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 1495047720U;
    msg.start_lat = 0.0645244364698;
    msg.start_lon = 0.700068479325;
    msg.start_z = 0.203278510315;
    msg.start_z_units = 98U;
    msg.end_lat = 0.688903562219;
    msg.end_lon = 0.0789145068336;
    msg.end_z = 0.111888538597;
    msg.end_z_units = 60U;
    msg.speed = 0.00428916657139;
    msg.speed_units = 94U;
    msg.lradius = 0.0369390431198;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.868993990456);
    msg.setSource(6647U);
    msg.setSourceEntity(177U);
    msg.setDestination(19031U);
    msg.setDestinationEntity(223U);
    msg.path_ref = 1146054979U;
    msg.start_lat = 0.140590088392;
    msg.start_lon = 0.21845281076;
    msg.start_z = 0.600994107209;
    msg.start_z_units = 142U;
    msg.end_lat = 0.806999841876;
    msg.end_lon = 0.983916985677;
    msg.end_z = 0.308764784891;
    msg.end_z_units = 59U;
    msg.speed = 0.523864798364;
    msg.speed_units = 129U;
    msg.lradius = 0.244751912319;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.679551204402);
    msg.setSource(3321U);
    msg.setSourceEntity(5U);
    msg.setDestination(44267U);
    msg.setDestinationEntity(226U);
    msg.x = 0.328264503644;
    msg.y = 0.895619964108;
    msg.z = 0.256086277977;
    msg.k = 0.391329975546;
    msg.m = 0.1637078555;
    msg.n = 0.243937321553;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.820057157407);
    msg.setSource(31057U);
    msg.setSourceEntity(40U);
    msg.setDestination(36724U);
    msg.setDestinationEntity(100U);
    msg.x = 0.811688095982;
    msg.y = 0.849107139299;
    msg.z = 0.780788987868;
    msg.k = 0.168295816161;
    msg.m = 0.0447253493214;
    msg.n = 0.294693085487;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.707908265704);
    msg.setSource(11710U);
    msg.setSourceEntity(157U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(200U);
    msg.x = 0.0144514201353;
    msg.y = 0.320505366165;
    msg.z = 0.199366836162;
    msg.k = 0.431526773625;
    msg.m = 0.410898872483;
    msg.n = 0.0406066621778;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.120653133518);
    msg.setSource(27833U);
    msg.setSourceEntity(42U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(160U);
    msg.value = 0.496311930167;

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
    msg.setTimeStamp(0.289767395191);
    msg.setSource(48383U);
    msg.setSourceEntity(163U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(106U);
    msg.value = 0.914106966792;

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
    msg.setTimeStamp(0.523538461075);
    msg.setSource(12264U);
    msg.setSourceEntity(254U);
    msg.setDestination(1868U);
    msg.setDestinationEntity(116U);
    msg.value = 0.437723071481;

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
    msg.setTimeStamp(0.281167286513);
    msg.setSource(24942U);
    msg.setSourceEntity(143U);
    msg.setDestination(9643U);
    msg.setDestinationEntity(131U);
    msg.u = 0.2132173499;
    msg.v = 0.687383064094;
    msg.w = 0.0703166551739;
    msg.p = 0.39279457328;
    msg.q = 0.88133585977;
    msg.r = 0.116056172679;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.751653216933);
    msg.setSource(64792U);
    msg.setSourceEntity(88U);
    msg.setDestination(44210U);
    msg.setDestinationEntity(135U);
    msg.u = 0.776275303962;
    msg.v = 0.672002387598;
    msg.w = 0.893809098005;
    msg.p = 0.00290972847646;
    msg.q = 0.667134873102;
    msg.r = 0.251981936044;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.885272567015);
    msg.setSource(57765U);
    msg.setSourceEntity(87U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(210U);
    msg.u = 0.968409554367;
    msg.v = 0.33930912366;
    msg.w = 0.709306632901;
    msg.p = 0.0277721376588;
    msg.q = 0.832106363142;
    msg.r = 0.737181053787;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.0691427584041);
    msg.setSource(31004U);
    msg.setSourceEntity(198U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(201U);
    msg.path_ref = 1973158406U;
    msg.start_lat = 0.861324846972;
    msg.start_lon = 0.656252881;
    msg.start_z = 0.615846319752;
    msg.start_z_units = 8U;
    msg.end_lat = 0.26890997809;
    msg.end_lon = 0.963470277726;
    msg.end_z = 0.23301607371;
    msg.end_z_units = 252U;
    msg.lradius = 0.168503367828;
    msg.flags = 29U;
    msg.x = 0.584050596989;
    msg.y = 0.288769827661;
    msg.z = 0.885244567086;
    msg.vx = 0.349674970553;
    msg.vy = 0.138079417445;
    msg.vz = 0.0284323044097;
    msg.course_error = 0.0663245743757;
    msg.eta = 23096U;

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
    msg.setTimeStamp(0.950239943848);
    msg.setSource(62020U);
    msg.setSourceEntity(144U);
    msg.setDestination(29069U);
    msg.setDestinationEntity(60U);
    msg.path_ref = 2647082790U;
    msg.start_lat = 0.745916062001;
    msg.start_lon = 0.522815949893;
    msg.start_z = 0.567526495498;
    msg.start_z_units = 149U;
    msg.end_lat = 0.08281449995;
    msg.end_lon = 0.387991017965;
    msg.end_z = 0.252122896975;
    msg.end_z_units = 7U;
    msg.lradius = 0.342101883441;
    msg.flags = 16U;
    msg.x = 0.470105346028;
    msg.y = 0.127764270017;
    msg.z = 0.746908891927;
    msg.vx = 0.793812126336;
    msg.vy = 0.169946221304;
    msg.vz = 0.491611669949;
    msg.course_error = 0.235866385574;
    msg.eta = 40532U;

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
    msg.setTimeStamp(0.360806365239);
    msg.setSource(17806U);
    msg.setSourceEntity(36U);
    msg.setDestination(2072U);
    msg.setDestinationEntity(160U);
    msg.path_ref = 3144375322U;
    msg.start_lat = 0.220785195081;
    msg.start_lon = 0.237821242316;
    msg.start_z = 0.4622926113;
    msg.start_z_units = 212U;
    msg.end_lat = 0.00869853243956;
    msg.end_lon = 0.246015223347;
    msg.end_z = 0.926315465858;
    msg.end_z_units = 33U;
    msg.lradius = 0.305914318272;
    msg.flags = 237U;
    msg.x = 0.629528362526;
    msg.y = 0.000595344264812;
    msg.z = 0.122875201709;
    msg.vx = 0.311083728897;
    msg.vy = 0.25331528943;
    msg.vz = 0.583792102072;
    msg.course_error = 0.0817696455263;
    msg.eta = 15703U;

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
    msg.setTimeStamp(0.577437595757);
    msg.setSource(39405U);
    msg.setSourceEntity(211U);
    msg.setDestination(11070U);
    msg.setDestinationEntity(62U);
    msg.k = 0.765680962011;
    msg.m = 0.447957449819;
    msg.n = 0.317678406523;

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
    msg.setTimeStamp(0.834942919377);
    msg.setSource(54286U);
    msg.setSourceEntity(101U);
    msg.setDestination(1301U);
    msg.setDestinationEntity(253U);
    msg.k = 0.70026869313;
    msg.m = 0.622404321506;
    msg.n = 0.711470903955;

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
    msg.setTimeStamp(0.641316025495);
    msg.setSource(45392U);
    msg.setSourceEntity(161U);
    msg.setDestination(18192U);
    msg.setDestinationEntity(27U);
    msg.k = 0.822257042421;
    msg.m = 0.940658249156;
    msg.n = 0.857670332353;

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
    msg.setTimeStamp(0.0533720963417);
    msg.setSource(24062U);
    msg.setSourceEntity(182U);
    msg.setDestination(24375U);
    msg.setDestinationEntity(185U);
    msg.p = 0.801373947333;
    msg.i = 0.887681463486;
    msg.d = 0.0757305477111;
    msg.a = 0.894055474264;

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
    msg.setTimeStamp(0.424579815628);
    msg.setSource(7482U);
    msg.setSourceEntity(216U);
    msg.setDestination(25131U);
    msg.setDestinationEntity(18U);
    msg.p = 0.222003562637;
    msg.i = 0.479013829463;
    msg.d = 0.312353988622;
    msg.a = 0.213152491091;

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
    msg.setTimeStamp(0.310139263332);
    msg.setSource(27516U);
    msg.setSourceEntity(22U);
    msg.setDestination(14612U);
    msg.setDestinationEntity(216U);
    msg.p = 0.0255327260203;
    msg.i = 0.00133441122955;
    msg.d = 0.920133613812;
    msg.a = 0.627620786236;

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
    msg.setTimeStamp(0.635326885785);
    msg.setSource(64421U);
    msg.setSourceEntity(164U);
    msg.setDestination(65288U);
    msg.setDestinationEntity(136U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.71759035232);
    msg.setSource(1646U);
    msg.setSourceEntity(37U);
    msg.setDestination(31074U);
    msg.setDestinationEntity(32U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.723933508643);
    msg.setSource(64144U);
    msg.setSourceEntity(157U);
    msg.setDestination(57909U);
    msg.setDestinationEntity(85U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.973317684554);
    msg.setSource(31189U);
    msg.setSourceEntity(166U);
    msg.setDestination(32699U);
    msg.setDestinationEntity(20U);
    msg.x = 0.974672898892;
    msg.y = 0.852269698229;
    msg.z = 0.848519458789;
    msg.vx = 0.00348003878338;
    msg.vy = 0.665473853885;
    msg.vz = 0.873045708515;
    msg.ax = 0.345234257874;
    msg.ay = 0.00621529586985;
    msg.az = 0.0637928498893;
    msg.flags = 64537U;

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
    msg.setTimeStamp(0.644116399772);
    msg.setSource(26031U);
    msg.setSourceEntity(148U);
    msg.setDestination(64754U);
    msg.setDestinationEntity(68U);
    msg.x = 0.167429623226;
    msg.y = 0.301656372732;
    msg.z = 0.761180593599;
    msg.vx = 0.647159475963;
    msg.vy = 0.182337458839;
    msg.vz = 0.393040748047;
    msg.ax = 0.99798592099;
    msg.ay = 0.384658844574;
    msg.az = 0.0150654309777;
    msg.flags = 46236U;

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
    msg.setTimeStamp(0.441215840433);
    msg.setSource(54149U);
    msg.setSourceEntity(24U);
    msg.setDestination(17124U);
    msg.setDestinationEntity(86U);
    msg.x = 0.626044201056;
    msg.y = 0.854399311804;
    msg.z = 0.965350919231;
    msg.vx = 0.0307679168326;
    msg.vy = 0.251634761527;
    msg.vz = 0.443613608049;
    msg.ax = 0.885130947228;
    msg.ay = 0.466298076422;
    msg.az = 0.766741155713;
    msg.flags = 23873U;

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
    msg.setTimeStamp(0.697356213311);
    msg.setSource(47413U);
    msg.setSourceEntity(113U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(166U);
    msg.value = 0.563213284901;

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
    msg.setTimeStamp(0.748886486045);
    msg.setSource(1365U);
    msg.setSourceEntity(84U);
    msg.setDestination(31551U);
    msg.setDestinationEntity(216U);
    msg.value = 0.814269545307;

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
    msg.setTimeStamp(0.401666569782);
    msg.setSource(48318U);
    msg.setSourceEntity(131U);
    msg.setDestination(48726U);
    msg.setDestinationEntity(55U);
    msg.value = 0.996748397278;

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
    msg.setTimeStamp(0.774799510028);
    msg.setSource(63857U);
    msg.setSourceEntity(1U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(22U);
    msg.timeout = 3549U;
    msg.lat = 0.820784441658;
    msg.lon = 0.307316319099;
    msg.z = 0.260046083755;
    msg.z_units = 187U;
    msg.speed = 0.0914080323848;
    msg.speed_units = 98U;
    msg.roll = 0.0860392252726;
    msg.pitch = 0.135538019287;
    msg.yaw = 0.13618627936;
    msg.custom.assign("LMEGTDBQXHGRSBNZFJCLWLFPFJCRBTBNDQQNOWPLUHJABFWNCDKZRIQHHKTFVXPQXASPKHIUTUHGLICVECWUWZSAYQORXUJUNXKKKYXOONHLYIEJHWCPOGLZVOPDFGCSPWDBXLUIXWVXMAGEVSFFJSMTUTYBRNEOYAIMALRDUDBHYILNTGQRMPMZMFAYAMQGSEIKZ");

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
    msg.setTimeStamp(0.926733017389);
    msg.setSource(4846U);
    msg.setSourceEntity(112U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(72U);
    msg.timeout = 118U;
    msg.lat = 0.758651159148;
    msg.lon = 0.503504662151;
    msg.z = 0.485790782957;
    msg.z_units = 14U;
    msg.speed = 0.980607653324;
    msg.speed_units = 212U;
    msg.roll = 0.717141548429;
    msg.pitch = 0.9613950431;
    msg.yaw = 0.230553335038;
    msg.custom.assign("WIHZAOANUMFIFBETFIOGBRTZHDVVYZHWYSCVFUEUAEDWUTSUFZMGDVDISLTAJ");

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
    msg.setTimeStamp(0.404806763416);
    msg.setSource(52579U);
    msg.setSourceEntity(98U);
    msg.setDestination(60477U);
    msg.setDestinationEntity(178U);
    msg.timeout = 56640U;
    msg.lat = 0.0507547418462;
    msg.lon = 0.997093335318;
    msg.z = 0.315059064688;
    msg.z_units = 72U;
    msg.speed = 0.249627348873;
    msg.speed_units = 234U;
    msg.roll = 0.337228169527;
    msg.pitch = 0.912797872711;
    msg.yaw = 0.882167070289;
    msg.custom.assign("MWPBMRPSPYWSTQYOWUPGZLNGURTUIXYIWGDLHFTMBIRGTJEFHENEHTAJSMQXZGTCASEOCIELKFWZIQQYWLOQXUNRZQAEUVBDUPBDJBMVNRHKCVRCZNXBOHRINOTMKPMFFSDDYPTKISFAMYH");

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
    msg.setTimeStamp(0.0654340754448);
    msg.setSource(27433U);
    msg.setSourceEntity(180U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(145U);
    msg.timeout = 28223U;
    msg.lat = 0.308136954932;
    msg.lon = 0.565629403312;
    msg.z = 0.297752925093;
    msg.z_units = 145U;
    msg.speed = 0.0251163568161;
    msg.speed_units = 192U;
    msg.duration = 12950U;
    msg.radius = 0.675174693233;
    msg.flags = 144U;
    msg.custom.assign("GIQWHDXKNYXBMGNYERDTRMREYNASQGUKNUAMAFJKFHSVGTFXLFXZENNQCWPHIGTRPSDQGOVCCIUZVYIXUMWLWWTYJAHXCXGFRKIHEORMIVYPFUEHMYAZOXVBTZLCBKUJMLHTLBEZCCZNKSZJTAWVJUQJOQEIJ");

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
    msg.setTimeStamp(0.393341857877);
    msg.setSource(60176U);
    msg.setSourceEntity(230U);
    msg.setDestination(33020U);
    msg.setDestinationEntity(163U);
    msg.timeout = 20005U;
    msg.lat = 0.0969243833618;
    msg.lon = 0.909769065791;
    msg.z = 0.895334619664;
    msg.z_units = 152U;
    msg.speed = 0.371546421025;
    msg.speed_units = 137U;
    msg.duration = 4271U;
    msg.radius = 0.153767945648;
    msg.flags = 102U;
    msg.custom.assign("NBIWLYOPUHGXCQPEZLOITNW");

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
    msg.setTimeStamp(0.844833303243);
    msg.setSource(9640U);
    msg.setSourceEntity(83U);
    msg.setDestination(4952U);
    msg.setDestinationEntity(125U);
    msg.timeout = 65093U;
    msg.lat = 0.716787037202;
    msg.lon = 0.874544383098;
    msg.z = 0.822820697458;
    msg.z_units = 32U;
    msg.speed = 0.460939678624;
    msg.speed_units = 71U;
    msg.duration = 61294U;
    msg.radius = 0.434665093232;
    msg.flags = 83U;
    msg.custom.assign("YJGMFTPSFFTGYCGRNVPULPZKJTLCGPTHBVMYHJKLHRMCRQRKKUPOZWFLQRSXWJRBDNMEIDVIZQPQQAENBRZQQHKGLTKIDOBRIZLMFEAGEMYOGCBATHDSENMYXEBHJXFXSFNJIGEFICASNOXQRWAWDBXSDSMXUHP");

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
    msg.setTimeStamp(0.204275200165);
    msg.setSource(28234U);
    msg.setSourceEntity(88U);
    msg.setDestination(23152U);
    msg.setDestinationEntity(253U);
    msg.custom.assign("EGHHZQRYNSHHKPOJ");

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
    msg.setTimeStamp(0.573595897172);
    msg.setSource(54330U);
    msg.setSourceEntity(229U);
    msg.setDestination(6443U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("LBMZHDNDHUEGJPOYSZNMLQYSGJUHJFUCOZQLFAVWZBQOXJSWNHJNBTYRMSXQGGPGKOANCBZXIQZTIODRPCYCSFICTUBHVAPMSH");

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
    msg.setTimeStamp(0.910214057251);
    msg.setSource(36599U);
    msg.setSourceEntity(221U);
    msg.setDestination(30785U);
    msg.setDestinationEntity(197U);
    msg.custom.assign("JFRHMCSEXJALHZKLNDIBANPOKETROEHERGAXBPPQCWOVGNDLVWACHDYHSYWICWYBUPRPULACKNGFFAKPFYQWHZBXXSDFNYMBUJMKTTOZJGOKYGANNLGZQBUMYFBZJMIDAODCVPWYRVIUFLHZD");

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
    msg.setTimeStamp(0.173934359537);
    msg.setSource(26745U);
    msg.setSourceEntity(179U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(211U);
    msg.timeout = 24368U;
    msg.lat = 0.790077709223;
    msg.lon = 0.0519347850395;
    msg.z = 0.816556665847;
    msg.z_units = 152U;
    msg.duration = 44770U;
    msg.speed = 0.535577564399;
    msg.speed_units = 251U;
    msg.type = 130U;
    msg.radius = 0.570959175289;
    msg.length = 0.986643914507;
    msg.bearing = 0.91336810214;
    msg.direction = 5U;
    msg.custom.assign("AAZGNMIXQJSOINEDFLXQSZILEAMNOJZPWCFEASMUWIXDHKZWGVELMWYWBQTJFVYUFIZKZFAFAJANVDXXQTFTOZNXMDHWDIXHUDIRQLKLOCTFMFBTPMTNPTGGYCRBRSD");

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
    msg.setTimeStamp(0.636358876649);
    msg.setSource(17039U);
    msg.setSourceEntity(141U);
    msg.setDestination(51875U);
    msg.setDestinationEntity(136U);
    msg.timeout = 34566U;
    msg.lat = 0.936108114287;
    msg.lon = 0.605166825441;
    msg.z = 0.825253535497;
    msg.z_units = 147U;
    msg.duration = 58438U;
    msg.speed = 0.668526791622;
    msg.speed_units = 94U;
    msg.type = 232U;
    msg.radius = 0.608718504656;
    msg.length = 0.763694856269;
    msg.bearing = 0.351177143722;
    msg.direction = 189U;
    msg.custom.assign("UDGCTKBXTEILKCNLRQCEFBETJIJLFNOCJIDWQNVYPPZYAVABFBLOYKYPSBFKFJFIEVAAQVUWFZPQVBCUZIJHYRBGMRMGOSXRWJXQKZGKITTYPBHCDZUHDRXOHVNUDPCSXEGZQORUEKANEFFZRJNHJDSLWWGSOVDSZAUMNMEMAWRR");

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
    msg.setTimeStamp(0.480151100659);
    msg.setSource(55432U);
    msg.setSourceEntity(136U);
    msg.setDestination(12711U);
    msg.setDestinationEntity(212U);
    msg.timeout = 58077U;
    msg.lat = 0.0611854006153;
    msg.lon = 0.265695950337;
    msg.z = 0.906253810319;
    msg.z_units = 73U;
    msg.duration = 62688U;
    msg.speed = 0.779671241114;
    msg.speed_units = 241U;
    msg.type = 158U;
    msg.radius = 0.621015555549;
    msg.length = 0.187657858327;
    msg.bearing = 0.311081010207;
    msg.direction = 202U;
    msg.custom.assign("MATRTSFJBWRNWMAWKZQSWQLSKFZQPVCEPUMCOYQRKXFDGOGDYUYSTBSYZMSQZLLECVSKTWTRHPBIDFBNCKPIZUQEJKRTMXZQXLLLONVIENHBNCXIIXMZVVLHGHEUGZAJAAPHYSUOPYBRDOQGI");

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
    msg.setTimeStamp(0.0790915558649);
    msg.setSource(51626U);
    msg.setSourceEntity(210U);
    msg.setDestination(27717U);
    msg.setDestinationEntity(244U);
    msg.duration = 14253U;
    msg.custom.assign("IPTAWGUBUWNVVCQOJTRXIJGDHADUZFGRSVUJJWPLMBLGNHOKEGTSWZFXDIXACHFQPWSKPMTKMPENFXVPVSVCGZKMCNEGKARJTHHYBYOYDQQYCJZHHABMOLIXFXLFEM");

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
    msg.setTimeStamp(0.254270039508);
    msg.setSource(10456U);
    msg.setSourceEntity(209U);
    msg.setDestination(49486U);
    msg.setDestinationEntity(86U);
    msg.duration = 42076U;
    msg.custom.assign("QFQPCELVISHVKBIYEOFXFVAPREEXAXOGBAZZVZYIKWZTEFJPQCCFBYUBOTOGNCERIZAZHUYEILLTPIFAWBHJRKXSHNDSWTGSYMDUYCRNVMUTWKZGNJDVQZFUDISDPOQSNDKAUDHECUNRKOHGQOJHFQNMIQSUIRLBTRWVFGPKJLTSOCTJM");

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
    msg.setTimeStamp(0.18731993696);
    msg.setSource(22045U);
    msg.setSourceEntity(50U);
    msg.setDestination(8347U);
    msg.setDestinationEntity(155U);
    msg.duration = 32842U;
    msg.custom.assign("NZHFBVRPHLKCFBWPOLCSXHHQNFKVKODMSUXQCTTEGHCZABXZMQQRUQOMHMQXSLEMJWNPGOUKHTOKSYDJJUDUELDGMXLAOJRQKPZRUKD");

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
    msg.setTimeStamp(0.163404071238);
    msg.setSource(10782U);
    msg.setSourceEntity(175U);
    msg.setDestination(7332U);
    msg.setDestinationEntity(174U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1005774403U;
    tmp_msg_0.start_lat = 0.768358285668;
    tmp_msg_0.start_lon = 0.696069310636;
    tmp_msg_0.start_z = 0.397291842322;
    tmp_msg_0.start_z_units = 91U;
    tmp_msg_0.end_lat = 0.465396720367;
    tmp_msg_0.end_lon = 0.604145744089;
    tmp_msg_0.end_z = 0.680390999791;
    tmp_msg_0.end_z_units = 12U;
    tmp_msg_0.speed = 0.503609717594;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.lradius = 0.486032932525;
    tmp_msg_0.flags = 238U;
    msg.control.set(tmp_msg_0);
    msg.duration = 8586U;
    msg.custom.assign("FCEHGJYZTBUOUOVPQGZKHKTXHCPAWSERJZOAYNTERQXBNTGPVGLRQEXRDILITDQFWGKXWHQQABOXBUKQVRVOAQAPLBYHZVBJSEDKICRLHNFOYFIJHDXACDUUNSE");

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
    msg.setTimeStamp(0.690705193914);
    msg.setSource(17188U);
    msg.setSourceEntity(201U);
    msg.setDestination(5999U);
    msg.setDestinationEntity(97U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.935516804484;
    tmp_msg_0.speed_units = 60U;
    msg.control.set(tmp_msg_0);
    msg.duration = 49246U;
    msg.custom.assign("RHEBCBAOIKSMIKTCQRZDDGYPCYXJANHEDAQVGDBDHAZEWCBRCDHRVCAUVEKWKDXRXQFGGCFMAMFSDOGMXSQBUIHHYBMIJWSETLMOQARZCIIJUYPWAJWXYHWBOKASPMUZXLSCB");

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
    msg.setTimeStamp(0.328774138919);
    msg.setSource(34898U);
    msg.setSourceEntity(192U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(227U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.242834606951;
    tmp_msg_0.z_units = 88U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10341U;
    msg.custom.assign("LXQWBZMRPVEZEHGOYXHUDOUEPTUNZCIUBNWITJZMNPGCQAEFIVUBMZFMYOJTKURMUCMAFTLDRQVLSRLHALKXSKMJVPBAIDHSNAEKCJFTFKDAORXXYGZWTENGTBGQRYSPRCAQFT");

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
    msg.setTimeStamp(0.655536351834);
    msg.setSource(18711U);
    msg.setSourceEntity(186U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(32U);
    msg.timeout = 13862U;
    msg.lat = 0.437442230243;
    msg.lon = 0.82876319733;
    msg.z = 0.467448217036;
    msg.z_units = 30U;
    msg.speed = 0.779751099126;
    msg.speed_units = 227U;
    msg.bearing = 0.781152935851;
    msg.cross_angle = 0.608901538165;
    msg.width = 0.817055674295;
    msg.length = 0.281038578806;
    msg.hstep = 0.678646509658;
    msg.coff = 222U;
    msg.alternation = 73U;
    msg.flags = 193U;
    msg.custom.assign("KHMBMSGEKNSAIUEDFLUEBXBDGQRVYQULWSYXUOGIEWDFHUTFJRMIYUKTNZIADHPRSYFAKUWMYCHZXFTAWIBTXFDZZENKPSZNOQTMQVRDPCFEQVBLRZGJDIQORAMVNAVLFLGHPOBCCGHVDJKVYWIONETXGMLAOLKSDJCGPRTMBOJSRICYACMSXNTIKAJZYBPNUGKORHPJTZFPQXSECZHXFUHTANXLJPIDVHWKULWQPWCBZJC");

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
    msg.setTimeStamp(0.973292106349);
    msg.setSource(41357U);
    msg.setSourceEntity(172U);
    msg.setDestination(44802U);
    msg.setDestinationEntity(90U);
    msg.timeout = 39480U;
    msg.lat = 0.341028878212;
    msg.lon = 0.000237390819323;
    msg.z = 0.98604862883;
    msg.z_units = 94U;
    msg.speed = 0.71427418351;
    msg.speed_units = 234U;
    msg.bearing = 0.916183966306;
    msg.cross_angle = 0.320068709729;
    msg.width = 0.118023817794;
    msg.length = 0.921815282558;
    msg.hstep = 0.310478764225;
    msg.coff = 134U;
    msg.alternation = 142U;
    msg.flags = 69U;
    msg.custom.assign("GZRTSGGDXUCFQUPAQAPWTBPWRLATTZSDZEODXIHJJNRKWVBLYMWGIQLEPBVWRFZGYGNLODWVPAEUNPBOIBIOUVUEJBITMATYPGLJMKKYSUBKXHLTGNCPQWMNZVSDHUNHSCQFMJQKFEGWRFFBNVZCCIADEMOMPCLGROBPYJVMXKXDAOEZXUIKZHTWKLYARFXFCFKVDHQOFXYIEBWXNJQQHEYYIHQYDDCMAIETSLRSZHLSJAMSJNUOOCUKHSRXR");

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
    msg.setTimeStamp(0.4032135681);
    msg.setSource(33346U);
    msg.setSourceEntity(199U);
    msg.setDestination(39360U);
    msg.setDestinationEntity(246U);
    msg.timeout = 52317U;
    msg.lat = 0.81707200923;
    msg.lon = 0.961443352276;
    msg.z = 0.211385359648;
    msg.z_units = 22U;
    msg.speed = 0.624218615729;
    msg.speed_units = 50U;
    msg.bearing = 0.366856589986;
    msg.cross_angle = 0.979667852068;
    msg.width = 0.948494991543;
    msg.length = 0.197962069718;
    msg.hstep = 0.75235805323;
    msg.coff = 21U;
    msg.alternation = 254U;
    msg.flags = 208U;
    msg.custom.assign("KJGLOHVPWZBCAQFOBHPMLCIPSWSXUOJFQACXFWUNASGWPLEOVDJXKYBOWSYZQXVTQAGANSDPUKRJRFDWGGAZTRHFZOLDSLRGFIBFHIAISPUJMVTBBZTHUYBVCYDHJZZXYNYKCNYTEXXQVXYTNWKOUSRKMZEG");

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
    msg.setTimeStamp(0.378090258062);
    msg.setSource(11420U);
    msg.setSourceEntity(215U);
    msg.setDestination(53174U);
    msg.setDestinationEntity(127U);
    msg.timeout = 4845U;
    msg.lat = 0.69590680006;
    msg.lon = 0.166079836345;
    msg.z = 0.263294347487;
    msg.z_units = 109U;
    msg.speed = 0.202994415714;
    msg.speed_units = 6U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0861622155959;
    tmp_msg_0.y = 0.178698168068;
    tmp_msg_0.z = 0.530859598459;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SYVVURIJTHCEMTWDUTWHQODNRNQEJLICOXVPUSJXXRDDSZHLXYIXFTIUJWFM");

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
    msg.setTimeStamp(0.242860405641);
    msg.setSource(37163U);
    msg.setSourceEntity(19U);
    msg.setDestination(38597U);
    msg.setDestinationEntity(222U);
    msg.timeout = 39042U;
    msg.lat = 0.929801108099;
    msg.lon = 0.580620830997;
    msg.z = 0.0929452171561;
    msg.z_units = 151U;
    msg.speed = 0.415748317755;
    msg.speed_units = 52U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.373269494171;
    tmp_msg_0.y = 0.265368625485;
    tmp_msg_0.z = 0.416107751946;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IWWVEOPGIORHIULBTYJWDAGUNRUCGRBTCHLVYPHFEXXDUNPUWBDTCSLTZSLTXSKMDMEMEOVJDYHTYEASLQZGPPFVYXHJZHAAWAZEBMIXERPRLLQCEVIVGF");

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
    msg.setTimeStamp(0.277073812579);
    msg.setSource(32841U);
    msg.setSourceEntity(243U);
    msg.setDestination(61195U);
    msg.setDestinationEntity(177U);
    msg.timeout = 41027U;
    msg.lat = 0.534597856384;
    msg.lon = 0.158926950144;
    msg.z = 0.829891407574;
    msg.z_units = 254U;
    msg.speed = 0.848145038788;
    msg.speed_units = 238U;
    msg.custom.assign("VIPRKJKWCIBCSGLDXXMIUCSIJGPJJRSFHXKWSIJZOKUSDTHJTTYVXPAVUHTDDFDHEBNWOZCXRJZWULPMYKFSREEETMEKAJXNEPUYBMIZUWDQRNFQOFMOCMTOZORNIZTQHFZWCLGNGSFVBAABOQOKYTIKBVLUZRYUPNALADAAINCHAGIEEJBJPLDZEPLLXFNZYXUGQYQDVHVMWKXGKMFGYRVRQLDCNWMBSMHFUSHGQGBYPHQNO");

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
    msg.setTimeStamp(0.414218076711);
    msg.setSource(59243U);
    msg.setSourceEntity(103U);
    msg.setDestination(32118U);
    msg.setDestinationEntity(226U);
    msg.x = 0.201271665618;
    msg.y = 0.672234203789;
    msg.z = 0.147301027819;

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
    msg.setTimeStamp(0.955338273138);
    msg.setSource(13594U);
    msg.setSourceEntity(211U);
    msg.setDestination(37852U);
    msg.setDestinationEntity(104U);
    msg.x = 0.112684086552;
    msg.y = 0.403386606669;
    msg.z = 0.126845853055;

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
    msg.setTimeStamp(0.0711553553557);
    msg.setSource(9454U);
    msg.setSourceEntity(105U);
    msg.setDestination(26825U);
    msg.setDestinationEntity(135U);
    msg.x = 0.730935359691;
    msg.y = 0.404076626071;
    msg.z = 0.618628203356;

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
    msg.setTimeStamp(0.0209640673171);
    msg.setSource(30720U);
    msg.setSourceEntity(144U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(18U);
    msg.timeout = 62742U;
    msg.lat = 0.901286223735;
    msg.lon = 0.373752568784;
    msg.z = 0.101257191131;
    msg.z_units = 25U;
    msg.amplitude = 0.450687547385;
    msg.pitch = 0.639663460762;
    msg.speed = 0.34910129708;
    msg.speed_units = 63U;
    msg.custom.assign("SCSAWUWNXCFJUVPIRKPAQFTJMAHRXIPSHDTESMPBEXYZPRDGDYPQYTGBORSCAOVULZBVOUMQNUWYQREWEEWZGYOKSNHVWSOZVYVLTLJCU");

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
    msg.setTimeStamp(0.811520320294);
    msg.setSource(17179U);
    msg.setSourceEntity(50U);
    msg.setDestination(11044U);
    msg.setDestinationEntity(92U);
    msg.timeout = 43119U;
    msg.lat = 0.433335772408;
    msg.lon = 0.421420147323;
    msg.z = 0.86268326598;
    msg.z_units = 149U;
    msg.amplitude = 0.232567612147;
    msg.pitch = 0.783138318632;
    msg.speed = 0.990083100072;
    msg.speed_units = 254U;
    msg.custom.assign("UYMUQDJMGKHHQRXESOKTCEUNYT");

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
    msg.setTimeStamp(0.646726365451);
    msg.setSource(5232U);
    msg.setSourceEntity(216U);
    msg.setDestination(51039U);
    msg.setDestinationEntity(204U);
    msg.timeout = 40024U;
    msg.lat = 0.743051286164;
    msg.lon = 0.487328623217;
    msg.z = 0.501887775665;
    msg.z_units = 85U;
    msg.amplitude = 0.94627837804;
    msg.pitch = 0.82288914912;
    msg.speed = 0.864984277192;
    msg.speed_units = 149U;
    msg.custom.assign("MMOFYQUYAOJZHGDNADRKCVRSFUILBDDJUCSKKLSJECZWYONTHGURBWVATYKCXOHAWEBVJTDRLWDLMKZXFNQYSFAZHAZGPMLBNGQSMNIDBUPPHECLMYTIDVIUVZAWUOGCIQGPIULVNDGQAHPUEEGKUPIOOLRCNHXIHOTYXR");

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
    msg.setTimeStamp(0.370317497072);
    msg.setSource(37504U);
    msg.setSourceEntity(88U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.406256885086);
    msg.setSource(42734U);
    msg.setSourceEntity(22U);
    msg.setDestination(43552U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.510925113177);
    msg.setSource(61993U);
    msg.setSourceEntity(141U);
    msg.setDestination(34396U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.183853564237);
    msg.setSource(35839U);
    msg.setSourceEntity(222U);
    msg.setDestination(59398U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.402675142373;
    msg.lon = 0.735116500302;
    msg.z = 0.530649910576;
    msg.z_units = 49U;
    msg.radius = 0.390063827768;
    msg.duration = 32898U;
    msg.speed = 0.44561086945;
    msg.speed_units = 48U;
    msg.custom.assign("MPAVYCBIRJTAOZLHCLZKEFKYVDMJEQYJIHZRFHFQONZGL");

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
    msg.setTimeStamp(0.952813333409);
    msg.setSource(17396U);
    msg.setSourceEntity(90U);
    msg.setDestination(3503U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.484008399094;
    msg.lon = 0.794208927207;
    msg.z = 0.883844711513;
    msg.z_units = 31U;
    msg.radius = 0.588736974174;
    msg.duration = 48182U;
    msg.speed = 0.883090506872;
    msg.speed_units = 99U;
    msg.custom.assign("OKNZTLJLBAMRNIUVCUNYRTXLSNJBDHVVJPXHRXGPKFAURMOKQXGBBOVTLFQMUEHFGMKZJERYREBQCXTBILFYGGWH");

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
    msg.setTimeStamp(0.916632588265);
    msg.setSource(50031U);
    msg.setSourceEntity(37U);
    msg.setDestination(12309U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.655722722572;
    msg.lon = 0.980250252127;
    msg.z = 0.592824518993;
    msg.z_units = 224U;
    msg.radius = 0.551451786203;
    msg.duration = 50450U;
    msg.speed = 0.974964316387;
    msg.speed_units = 152U;
    msg.custom.assign("WWVKEOALROZZEGBDPHXMJJTXTACUEFGKHIBUJYBSGKIVVHFIZCWFNCZQVPPWGJKBMFJL");

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
    msg.setTimeStamp(0.74019327797);
    msg.setSource(4463U);
    msg.setSourceEntity(79U);
    msg.setDestination(28286U);
    msg.setDestinationEntity(223U);
    msg.timeout = 26223U;
    msg.flags = 122U;
    msg.lat = 0.965513377583;
    msg.lon = 0.00625647948002;
    msg.start_z = 0.0713409542;
    msg.start_z_units = 78U;
    msg.end_z = 0.340606393585;
    msg.end_z_units = 169U;
    msg.radius = 0.29207045674;
    msg.speed = 0.0672138939027;
    msg.speed_units = 0U;
    msg.custom.assign("RVZBQOWXETXRWOOFVTRBZAMYYHMDWXNPRGMOTJTQSQGFDLGZLDDEUDKAINMCIEYGOSBNZCLHGVAHFWKUWNBRXJLZWLEKTVASIQYHQWQTDHVQLSHSCMJIZWFVMPJUXTPSSFPBZRXPFPCMFEBXBYZVUMNOTLQCRPIJAKBHMMGRJUEOIOWFYVCUDRJXUZQOGPXILCVQNYBGPRZGUPWAVCAHHYNJXKDKFTAHOIJNDGJNAYKUEKSI");

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
    msg.setTimeStamp(0.883100515008);
    msg.setSource(54814U);
    msg.setSourceEntity(41U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(229U);
    msg.timeout = 2895U;
    msg.flags = 110U;
    msg.lat = 0.162486016509;
    msg.lon = 0.877711301087;
    msg.start_z = 0.511457217471;
    msg.start_z_units = 233U;
    msg.end_z = 0.314271753604;
    msg.end_z_units = 88U;
    msg.radius = 0.420173512487;
    msg.speed = 0.628668431588;
    msg.speed_units = 112U;
    msg.custom.assign("CYQGYTWLCJLKBYLHOZZJZZUYGCQTUEKVHWRMKDKLQWJSDRIVFLIIPSNTBJDLXVGVYFYRUCOCPPERQMBNFMFGYTTUWOGECMUUNSKJNQKSMWDGMXFSRFCDBWNNZXXMVHKAGIBRXMJXUFAKBKXRPGGJJOCBDVSZQPNDNMTVVAFQACRESEEPDZIEWOYSIIPUWETHZBIVFHYWFLRULVZRXHEQQBS");

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
    msg.setTimeStamp(0.0424588395352);
    msg.setSource(53727U);
    msg.setSourceEntity(147U);
    msg.setDestination(34528U);
    msg.setDestinationEntity(60U);
    msg.timeout = 41531U;
    msg.flags = 184U;
    msg.lat = 0.992273476075;
    msg.lon = 0.0760781017577;
    msg.start_z = 0.385019254131;
    msg.start_z_units = 161U;
    msg.end_z = 0.420361720156;
    msg.end_z_units = 100U;
    msg.radius = 0.96907708054;
    msg.speed = 0.279190259985;
    msg.speed_units = 246U;
    msg.custom.assign("FZYGKIBYWFKFHLVFYMHKHQRBLGXUIYJICQIFPEBXBVANBRSGLWCKJXTTPNFWKKDEOUMKRUYOQTZIDDZSREZBQQLEIQAXTHDPSAIPFQWLQPFTTINLSWGSYUNAZPYGOXSMCTJRGMWXHVKVSDWMKOUMBSHCOEDVI");

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
    msg.setTimeStamp(0.214133883254);
    msg.setSource(41861U);
    msg.setSourceEntity(115U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(205U);
    msg.timeout = 4657U;
    msg.lat = 0.491943770486;
    msg.lon = 0.265544072062;
    msg.z = 0.474819166863;
    msg.z_units = 99U;
    msg.speed = 0.778667449946;
    msg.speed_units = 201U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.858115597684;
    tmp_msg_0.y = 0.54599235628;
    tmp_msg_0.z = 0.794073097339;
    tmp_msg_0.t = 0.564697871107;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ERTDHZPLRJRZMOGANDAEXFEFUTFNXFEAYSIUGXLXHWHTKPCFFQMKJIVVHCQLOQLUWABRQYNPYVOVCMURXIBXNUWDAHSIMVBOLIQKDRMSAAYBRSXFOXMOJTWURMUONZGKCVTOHDGUWKWHNTJPUSPYTPHBGNZZPNHJVIWEMSJGCVGDZBKOFLMIZBBBDJQIZEEFCRVQZDZLQWSACCFSYTEWBSYSTY");

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
    msg.setTimeStamp(0.426923644425);
    msg.setSource(47164U);
    msg.setSourceEntity(59U);
    msg.setDestination(56283U);
    msg.setDestinationEntity(165U);
    msg.timeout = 760U;
    msg.lat = 0.40328352059;
    msg.lon = 0.996510975565;
    msg.z = 0.0517353518969;
    msg.z_units = 164U;
    msg.speed = 0.0363371608126;
    msg.speed_units = 148U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.192385442871;
    tmp_msg_0.y = 0.576657502296;
    tmp_msg_0.z = 0.745356688112;
    tmp_msg_0.t = 0.58386584482;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FEMSLAOFNHTPVBJEXXSXTWJPBFZPGEELBLUPPGRGBCNI");

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
    msg.setTimeStamp(0.0421193312073);
    msg.setSource(59730U);
    msg.setSourceEntity(201U);
    msg.setDestination(13067U);
    msg.setDestinationEntity(106U);
    msg.timeout = 22852U;
    msg.lat = 0.242778903393;
    msg.lon = 0.371867857562;
    msg.z = 0.693565116102;
    msg.z_units = 76U;
    msg.speed = 0.957085920664;
    msg.speed_units = 175U;
    msg.custom.assign("CYRLZELEIYRKVMHJONXWYUEWBSNXMEAYOYLRSSTNILWEJCCKDAUIYJPKBIZPGNBRBOGUGBPHANNMCWCSKHYGZTUDVLZ");

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
    msg.setTimeStamp(0.9422574677);
    msg.setSource(27977U);
    msg.setSourceEntity(65U);
    msg.setDestination(25646U);
    msg.setDestinationEntity(119U);
    msg.x = 0.503275796465;
    msg.y = 0.777727068571;
    msg.z = 0.0624136328677;
    msg.t = 0.951814710493;

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
    msg.setTimeStamp(0.0331591191267);
    msg.setSource(9343U);
    msg.setSourceEntity(198U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(195U);
    msg.x = 0.914532785344;
    msg.y = 0.643661290636;
    msg.z = 0.0429504763609;
    msg.t = 0.550260347257;

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
    msg.setTimeStamp(0.435852918315);
    msg.setSource(3159U);
    msg.setSourceEntity(180U);
    msg.setDestination(5350U);
    msg.setDestinationEntity(137U);
    msg.x = 0.131089943003;
    msg.y = 0.44435518287;
    msg.z = 0.0423925102583;
    msg.t = 0.12152268708;

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
    msg.setTimeStamp(0.476966161857);
    msg.setSource(40437U);
    msg.setSourceEntity(247U);
    msg.setDestination(49713U);
    msg.setDestinationEntity(73U);
    msg.timeout = 17454U;
    msg.name.assign("UNRFIUOMITXRSBJIVDWXLTSLHNDPWYQZCKZMPQQCLCNLWOLZJQUXMJANBYTVXUHLNBRKSEPGCBGUXJSVTOYIDDYHMMMMTIPNEGMOAAKZWNCISPRWBGZZZVUFEOYREGCQYYFWISLAFPGGTPOQWBXHRAJBRDKJPZGFBYAIQDEDVCDLBEFJCKXKUNXYUFRLSJUVOVEQDTSAGHM");
    msg.custom.assign("FKATSRBLFURJPQQISIRRTNPAHODLEBXWYIMMMEZTEGTCYBWJBYIWZWYAIGSZYPRRFYEUIDBUALIVOUPSFSCJHDXHTKJZL");

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
    msg.setTimeStamp(0.507307770397);
    msg.setSource(57188U);
    msg.setSourceEntity(161U);
    msg.setDestination(17262U);
    msg.setDestinationEntity(53U);
    msg.timeout = 64245U;
    msg.name.assign("TTBXOPRDQKWDQPMVOGKZSPYJNXKBARQXFPVRMGXCHYIGEVTLAAHQJBKCTKBHBB");
    msg.custom.assign("YRZZYPGELXPYJNSCKRFPRCZVCWUIECDSTBTGYSHSKMKXTAYKJNQWJJLSMJBGTBPLMRECMTLHWMZNJHSLCPTARVAJHTUFICFOMBXYQMVGHGTCTIENDKEFOGANUUPDOCEXAQWBQSOZXIMBZIRUSHIFZKCIQNUWVAQOWY");

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
    msg.setTimeStamp(0.395322337165);
    msg.setSource(41866U);
    msg.setSourceEntity(167U);
    msg.setDestination(32987U);
    msg.setDestinationEntity(195U);
    msg.timeout = 51392U;
    msg.name.assign("EQBNZPYWYJYIQHDYAVEFLRNTNLJVIZWBNTKNVWQ");
    msg.custom.assign("XNKSPXEKAYHPQQXVYIDWUCOXNCIZRPZFGOCEZKECSQNEHAAGODSOCFWVLRVWBSMLWNTUCDTHJLLNKWODVPOBZTUVJQ");

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
    msg.setTimeStamp(0.0976334758173);
    msg.setSource(18121U);
    msg.setSourceEntity(111U);
    msg.setDestination(12163U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.977494243797;
    msg.lon = 0.79337563824;
    msg.z = 0.619761854234;
    msg.z_units = 238U;
    msg.speed = 0.204268327644;
    msg.speed_units = 205U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.125049177656;
    tmp_msg_0.y = 0.0117347113118;
    tmp_msg_0.z = 0.127771155407;
    tmp_msg_0.t = 0.631489991213;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.945683560423;
    msg.custom.assign("UPOKPRPIZDEFUKALALNBLAVXBQEIZWYAVFSTIFFKTRGXJUHBWANCDGVOVROMMVBLJECVUZNDPMSRSSHJIUFHQQAMEBFZZZANYUOPKSGCOYPLJBSWNNKTGLOWVWLPTCXFXLNCXFKKYCFQYRWTJXRQZEEGYHD");

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
    msg.setTimeStamp(0.710648022797);
    msg.setSource(30678U);
    msg.setSourceEntity(132U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.697370624185;
    msg.lon = 0.589344638394;
    msg.z = 0.681129070419;
    msg.z_units = 17U;
    msg.speed = 0.0497431363774;
    msg.speed_units = 85U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.11675677319;
    tmp_msg_0.y = 0.566196869496;
    tmp_msg_0.z = 0.402863999899;
    tmp_msg_0.t = 0.0612504292965;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0773604571172;
    msg.custom.assign("BWROBAPXZXRIGDSDSRRCQZGBVFVVIHHIMHKPBUCJQEDQYGAYGALLL");

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
    msg.setTimeStamp(0.42220260244);
    msg.setSource(5578U);
    msg.setSourceEntity(149U);
    msg.setDestination(48718U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.277980621933;
    msg.lon = 0.147822302986;
    msg.z = 0.602594380327;
    msg.z_units = 239U;
    msg.speed = 0.423869704194;
    msg.speed_units = 81U;
    msg.start_time = 0.746852930797;
    msg.custom.assign("KXKJRAMIDECETUWAYOQXNOBQOHVPKWWINRUDRCSWTIFPYSTUZMOFKQROIMUSOBTEBBOXHCHQTYRNAWNGUPGBJTC");

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
    msg.setTimeStamp(0.830741704916);
    msg.setSource(39727U);
    msg.setSourceEntity(218U);
    msg.setDestination(1300U);
    msg.setDestinationEntity(23U);
    msg.vid = 47983U;
    msg.off_x = 0.150637713425;
    msg.off_y = 0.9458118883;
    msg.off_z = 0.246222225949;

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
    msg.setTimeStamp(0.686938095402);
    msg.setSource(747U);
    msg.setSourceEntity(230U);
    msg.setDestination(61803U);
    msg.setDestinationEntity(75U);
    msg.vid = 59660U;
    msg.off_x = 0.412016403342;
    msg.off_y = 0.688071098334;
    msg.off_z = 0.019567172636;

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
    msg.setTimeStamp(0.864958629523);
    msg.setSource(54223U);
    msg.setSourceEntity(142U);
    msg.setDestination(26467U);
    msg.setDestinationEntity(246U);
    msg.vid = 25453U;
    msg.off_x = 0.47638749261;
    msg.off_y = 0.426979023812;
    msg.off_z = 0.642738056368;

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
    msg.setTimeStamp(0.647343108709);
    msg.setSource(52692U);
    msg.setSourceEntity(29U);
    msg.setDestination(23238U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.00438966679852);
    msg.setSource(58809U);
    msg.setSourceEntity(76U);
    msg.setDestination(39082U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.821675756154);
    msg.setSource(41066U);
    msg.setSourceEntity(35U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.938140117978);
    msg.setSource(22847U);
    msg.setSourceEntity(118U);
    msg.setDestination(54080U);
    msg.setDestinationEntity(32U);
    msg.mid = 23233U;

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
    msg.setTimeStamp(0.857849207629);
    msg.setSource(56066U);
    msg.setSourceEntity(149U);
    msg.setDestination(19192U);
    msg.setDestinationEntity(229U);
    msg.mid = 21009U;

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
    msg.setTimeStamp(0.362065296391);
    msg.setSource(16166U);
    msg.setSourceEntity(226U);
    msg.setDestination(8712U);
    msg.setDestinationEntity(245U);
    msg.mid = 32455U;

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
    msg.setTimeStamp(0.734005484623);
    msg.setSource(11725U);
    msg.setSourceEntity(184U);
    msg.setDestination(56726U);
    msg.setDestinationEntity(22U);
    msg.state = 113U;
    msg.eta = 8048U;
    msg.info.assign("ASJOCRZAQNSMXPHPNVXZDKKLFXWUYSQBGBXGLFTVUCJCUKEGTHFELQWFVUCVHPPHVJXGOXYINQHKCEWVOREWMFDGISLNKLEXRKMQEOHDZHHPPDAKDFBDUAANPSBIXZTJ");

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
    msg.setTimeStamp(0.650971113393);
    msg.setSource(49917U);
    msg.setSourceEntity(9U);
    msg.setDestination(49482U);
    msg.setDestinationEntity(204U);
    msg.state = 23U;
    msg.eta = 43072U;
    msg.info.assign("DVOXYMFHIQQRUCTYWGPUUTWTOSXEDKHMXSBKYCHYYNRMDVBQSVWOSPPPQJODLCCRNNZJWDGAPIJVBJLEMYELCFSLZAUQWICGKFSGVNEKGLQEOWUCVYZAWZDMIMVTTMKMUSLHPALPBAIBDBBKRGZBJEFKNXNHZBNTQAYVRNUFFJIHFSIWHCRHDJDEZWBVVXGRPTXZJGAPUOJKZMK");

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
    msg.setTimeStamp(0.872974718522);
    msg.setSource(50894U);
    msg.setSourceEntity(131U);
    msg.setDestination(5187U);
    msg.setDestinationEntity(182U);
    msg.state = 151U;
    msg.eta = 35062U;
    msg.info.assign("TYIPPODMXKICAXUUZGARPOTYVZCBRSGWQAYEVLADBRNGVBBNIWNPSBHRBZXKVAGZPMJGZWAVAMERHSFJTJNQEYUMWSTDCKGJVFUVYCQIWRGPETADYZOFLFXLHEGMMXIEMPNIRUNTFLRVEYDFROQOYRPTZQ");

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
    msg.setTimeStamp(0.894396141616);
    msg.setSource(10526U);
    msg.setSourceEntity(247U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(210U);
    msg.system = 17828U;
    msg.duration = 59809U;
    msg.speed = 0.945746153179;
    msg.speed_units = 72U;
    msg.x = 0.397271568356;
    msg.y = 0.014635792719;
    msg.z = 0.397959696984;
    msg.z_units = 32U;

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
    msg.setTimeStamp(0.330473476455);
    msg.setSource(61204U);
    msg.setSourceEntity(162U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(237U);
    msg.system = 38864U;
    msg.duration = 41819U;
    msg.speed = 0.552304214803;
    msg.speed_units = 135U;
    msg.x = 0.709380364299;
    msg.y = 0.753122817101;
    msg.z = 0.0976643302695;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.114858112417);
    msg.setSource(8395U);
    msg.setSourceEntity(47U);
    msg.setDestination(1506U);
    msg.setDestinationEntity(127U);
    msg.system = 35241U;
    msg.duration = 8075U;
    msg.speed = 0.855227568832;
    msg.speed_units = 116U;
    msg.x = 0.35226362235;
    msg.y = 0.0242115303856;
    msg.z = 0.162660477048;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.39073311155);
    msg.setSource(12996U);
    msg.setSourceEntity(173U);
    msg.setDestination(3364U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.346426771393;
    msg.lon = 0.778322812879;
    msg.speed = 0.783480566916;
    msg.speed_units = 131U;
    msg.duration = 61730U;
    msg.sys_a = 44934U;
    msg.sys_b = 50932U;
    msg.move_threshold = 0.224016118146;

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
    msg.setTimeStamp(0.717340914992);
    msg.setSource(55499U);
    msg.setSourceEntity(246U);
    msg.setDestination(63759U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.535082539177;
    msg.lon = 0.541172504073;
    msg.speed = 0.744445897543;
    msg.speed_units = 249U;
    msg.duration = 19233U;
    msg.sys_a = 46506U;
    msg.sys_b = 13231U;
    msg.move_threshold = 0.639724122508;

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
    msg.setTimeStamp(0.503786130027);
    msg.setSource(9299U);
    msg.setSourceEntity(183U);
    msg.setDestination(29292U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.983971095901;
    msg.lon = 0.481464870765;
    msg.speed = 0.493528238456;
    msg.speed_units = 102U;
    msg.duration = 11465U;
    msg.sys_a = 17700U;
    msg.sys_b = 8414U;
    msg.move_threshold = 0.520367428293;

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
    msg.setTimeStamp(0.0713269899576);
    msg.setSource(25815U);
    msg.setSourceEntity(247U);
    msg.setDestination(39307U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.767690845841;
    msg.lon = 0.850342131855;
    msg.z = 0.564981570323;
    msg.z_units = 25U;
    msg.speed = 0.353451625946;
    msg.speed_units = 70U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.937768060997;
    tmp_msg_0.lon = 0.804920382796;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DHSJZDQRAMKKUARNTFHIFLCUCRZNJFLSNTRJWAFJMCZKOYGLYDOBRLAWUTDNTOCDWGMMDIIQFHEYNXHOGPWXXWTLKWTQCEGALBJXUEBQPMUZWFXRCAMTQPEVVHYXZLQGLVCJQJJNMDJWZRY");

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
    msg.setTimeStamp(0.0386239567264);
    msg.setSource(9742U);
    msg.setSourceEntity(215U);
    msg.setDestination(60745U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.201015780955;
    msg.lon = 0.0540968830189;
    msg.z = 0.774465416816;
    msg.z_units = 178U;
    msg.speed = 0.043353174887;
    msg.speed_units = 87U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.684414720925;
    tmp_msg_0.lon = 0.610495267986;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BSVUDYOSTWGFILZIZHCOVKVXQANJJJMSOTAROPXWMFAKJEUDKUUBIYMOMYIEHJZGRKVOGDEEZDWPBTVLEQOXWBZGCQBAISLENFOQHPREHEFQKISVRSBDBXEXRFASVPUAPYXFTGQKWIMPTVUTRVTUYQRZUFLHZWGFPYCHOCMUTWXDZQVLHLDSNNXCMWHJCNSAKZCG");

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
    msg.setTimeStamp(0.852749852638);
    msg.setSource(36327U);
    msg.setSourceEntity(230U);
    msg.setDestination(62756U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.636114683936;
    msg.lon = 0.621168782393;
    msg.z = 0.307313209533;
    msg.z_units = 194U;
    msg.speed = 0.161095312508;
    msg.speed_units = 194U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.656220824338;
    tmp_msg_0.lon = 0.836125431052;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("USPBUULJTNXETOLTKHRJDRDLPMAFCTQSCJLSYBWQMGGFROFJZVAADADGBFCDSPOVVWDEKYYRFTLQHSWZYGHCYJLJZOUVMJUPBAISOWEQKAXQYVSWUNHKPJXMLFLQBNCWOHQCINAQSIQSZPTWLHZITTEPEADRBIYOFBNMSDVXECKNIWFMECVNIIGXGE");

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
    msg.setTimeStamp(0.43833798184);
    msg.setSource(62743U);
    msg.setSourceEntity(230U);
    msg.setDestination(21678U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.157739408202;
    msg.lon = 0.130877587637;

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
    msg.setTimeStamp(0.742233944391);
    msg.setSource(10447U);
    msg.setSourceEntity(179U);
    msg.setDestination(15305U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.0149774585099;
    msg.lon = 0.64336638389;

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
    msg.setTimeStamp(0.196052227356);
    msg.setSource(49030U);
    msg.setSourceEntity(72U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.521015657333;
    msg.lon = 0.181244541055;

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
    msg.setTimeStamp(0.921183766402);
    msg.setSource(17674U);
    msg.setSourceEntity(146U);
    msg.setDestination(7320U);
    msg.setDestinationEntity(75U);
    msg.timeout = 2905U;
    msg.lat = 0.151997609925;
    msg.lon = 0.411732353066;
    msg.z = 0.692932283543;
    msg.z_units = 5U;
    msg.pitch = 0.778891830173;
    msg.amplitude = 0.980228020208;
    msg.duration = 49121U;
    msg.speed = 0.792057464617;
    msg.speed_units = 136U;
    msg.radius = 0.670153504886;
    msg.direction = 239U;
    msg.custom.assign("TDGFAUEACFVKLWNCZRLMINYTQGBYIXCNOFCZAIVYKGUVXNBZIKRDHSCNEPOEXBCTDBJMQOFXDZPOAWJURPMNOMWQJUBVZOLPYZWEKWQIYQSOVUPMYMXKKWZHYNAJJXAWQKDIDXXYRMSTFJHGFETDGRRWBDKEGHJVTPORLLMBJCTYOCSUIVCKNMBJDJVHEQVZZVFEIGFPLLRUPIAPBULWHOXSETRGGHSKWSDESL");

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
    msg.setTimeStamp(0.997020167029);
    msg.setSource(23162U);
    msg.setSourceEntity(254U);
    msg.setDestination(56727U);
    msg.setDestinationEntity(132U);
    msg.timeout = 60539U;
    msg.lat = 0.490461122104;
    msg.lon = 0.571609409246;
    msg.z = 0.364681318568;
    msg.z_units = 96U;
    msg.pitch = 0.250288791861;
    msg.amplitude = 0.381883286036;
    msg.duration = 3369U;
    msg.speed = 0.577044995125;
    msg.speed_units = 20U;
    msg.radius = 0.463997362632;
    msg.direction = 204U;
    msg.custom.assign("OIFOQGHFOYJZBEMNWXPGRYRAVYZPCRCOFGBERQURQNNKRFMTDQNPSKGOHWBLDHTLVBJJOHSGDMODVAYFLBZCISZSTTCBMWXEPXUATKPGDMX");

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
    msg.setTimeStamp(0.834049372627);
    msg.setSource(60720U);
    msg.setSourceEntity(119U);
    msg.setDestination(5316U);
    msg.setDestinationEntity(194U);
    msg.timeout = 36519U;
    msg.lat = 0.120328948344;
    msg.lon = 0.0838191069442;
    msg.z = 0.0552245008635;
    msg.z_units = 194U;
    msg.pitch = 0.00203590702378;
    msg.amplitude = 0.210459323574;
    msg.duration = 33409U;
    msg.speed = 0.586727282485;
    msg.speed_units = 232U;
    msg.radius = 0.655285448352;
    msg.direction = 197U;
    msg.custom.assign("MAVLFYEAGAWOIYAJZRHUPRHCSDTONSQODSCWRQPGKOUNEOMUENUEQACDKHIXIWEEADGEKHYYXEALZISVQGSZGFWFJZTCQNMRUUHHNJRDLPTWZZJFKU");

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
    msg.setTimeStamp(0.182898702091);
    msg.setSource(18833U);
    msg.setSourceEntity(226U);
    msg.setDestination(48314U);
    msg.setDestinationEntity(110U);
    msg.formation_name.assign("VMAWKUMLTITOMVEPURTBRJMMJQI");
    msg.reference_frame = 213U;
    msg.custom.assign("MAUGSKHXUFCKHHQLSZOVAGPVZLUBGTRCWDERRUXIEJDKINUVNVLTEIAXCCHBFVYXJLJFRRGTXBWFMAGSWWTKSKYCSIRVKHMIPCPLNFENDTVMTEXOZOAAIWFDIPEDBDJNPIZQBQWNLYUYTNPHZFMXGLPMBWBPOIAQZLXNIOONDGVTYQFKYXRYWOYCLEWXHHJGSCJZGMPPNASKJKMQOLEOFZSDSMJYRWUACJTACQDRQZVHFUEZHKJSDBBMB");

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
    msg.setTimeStamp(0.960806259254);
    msg.setSource(8164U);
    msg.setSourceEntity(33U);
    msg.setDestination(19788U);
    msg.setDestinationEntity(149U);
    msg.formation_name.assign("PADLKYITIPFDIORSQIOJGXESLAYPOTAEFNNEDXRSMWSMMWIUDXZMUJJDIBBFGCXYIJWNSHUKSIBNDFNAKJMOQHGMUYKZUECTHJKAS");
    msg.reference_frame = 254U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57427U;
    tmp_msg_0.off_x = 0.178930474906;
    tmp_msg_0.off_y = 0.779068869164;
    tmp_msg_0.off_z = 0.299718336019;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EKYUWYHKSOZRCTIZFYZZWHEFPPQRODTUIWXOBDJAQDHIOAMQGJREGFUAMSQRCGUEEPUGCQVSKXAQHCXJUVLYFEAJTBHUUYZ");

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
    msg.setTimeStamp(0.62969081943);
    msg.setSource(13060U);
    msg.setSourceEntity(228U);
    msg.setDestination(30014U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("BHWMRBRESPHJLOULBKZIWGSAIJUUJAVZELHCFOOBWBKPFEOUDTZSRJHTXCMADGPOVFOUXLYWKYSZGSQZWUNAMRXVKLWGSIYGMKNWAYHDDMQPZNGTPJBGIECODKCMYZNDPBAVIUEHJTLCRWYRFCCJNVGWIJALVRSZQFOBRZXPVHPXFEEHUMQNYAIQBCVTQJQEZANNTQDKHGELUCLRSQRFDONDHIJ");
    msg.reference_frame = 17U;
    msg.custom.assign("ABQFYLZTEHWMFGCCBYIJJGLVAGAVTLXSYASONRUCBFAIAWPYQINHQDJICPRHTZVTDREKUMDJQRXMDSLLVVKERMUAIJAFIKDQPJBPCFFGPFBSNNPUJEXEGUSOUGDBOEXWWINOHQPZTZVKVYDLYXWVWLKTUZUTHUKHNBCUBQNTGMLAFLZYM");

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
    msg.setTimeStamp(0.68505121909);
    msg.setSource(60907U);
    msg.setSourceEntity(126U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("PQFXJEKJNTOIYFWSARUGCTJTRVGDEGMRWLBIYAUABUXFFLDOJSWNSTNPXHPTQDGJSKVYGZTQGUBUPMOZWNNISHLFZAMOZGCQRKBKWPDVMLEXKVMQHSVCZGAXPFRVTOVZGYYOTKBWCQLXOWBXOSLIAADEIYMJCMXCPFLUKHHMYWQENICYJWDEFYBCVWDFBJOJLJEVESGINNFHBQUUEKCTRSAYBADPILRZKSMVINIQXRMHANHXTDLZ");
    msg.formation_name.assign("ENZUOAHQIXBAOYMLKXBZGLXAQFPLRHFLMWSQIBBHVICNCANUYQAGADCCGJZOUWGEAQKBNPDEODOBFCOTPEXOLIUJXZFHWDDRTRYXPQJHWHACKTQV");
    msg.plan_id.assign("LZDNYVBMHMBSPTZQEOIDADQSOQAATXRGCFGGCZSXLKORNMDONGYYNBUUTSKDXNIDFCAJJBDCCWYKTQGJZRPJAAIWVIR");
    msg.description.assign("TSIKIMXIHTGEPYYJZQVRSQBGHXGXCMDRHWWSQAZXSHUMUMURCORRYJUMTDAOBSGSKNWTFJDGPPASHNLWMEBEFQYGCPVPTJUFJIOTCAPZWDDQLJBFKVWDNUYGMBOLGNLIEZWOIETFVLQRHUXLKLSHMZJDUIKPEXCHCEOKOZVBJEVTHYACNAQQTBVKXLIANNOAZURYXEKTRKAQIJZYYWVEHCDSSNFNZNLFMKQCFRPFBWCJUBPIYDGOWBOXM");
    msg.leader_speed = 0.599601299621;
    msg.leader_bank_lim = 0.22295287306;
    msg.pos_sim_err_lim = 0.575866944526;
    msg.pos_sim_err_wrn = 0.796843727573;
    msg.pos_sim_err_timeout = 43200U;
    msg.converg_max = 0.881586552358;
    msg.converg_timeout = 55685U;
    msg.comms_timeout = 43922U;
    msg.turb_lim = 0.672329426201;
    msg.custom.assign("TJAGRUTGPWTRHTPBPUIOIAZOEWCBJNYFVDVQBOBANDKRCBJKVFNLUKKNIHGIZMAHEEFZIKHCSHBQGOGBYGWYPSRYJAZKLFIGJSWKHNWQUXENMMCUUZLWJXTXLXOLCFYMLZZZUPIFLEXDQFCSQLADMQAZLRFIRZGYQKBPVNTGEVDFYASXMCVSVRPXJRXSDEONMVWNYDNEHBJYYTOAFMHWQTMKJX");

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
    msg.setTimeStamp(0.357232655416);
    msg.setSource(44215U);
    msg.setSourceEntity(86U);
    msg.setDestination(10279U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("DIVYGAGSKTSDUKBTWKIQORUJMBTSLHGVTZICKBUEXFWFZWEHPUOIQMAQYQWWZDYDKBTGLFIAWFPZNQWKYEBVTCFQRDEKLIOLGLBJNGBSYCXOETHSMHNHIRZXPIEGHZDOODENDSMONRIYPPNLFCVPUVLVZVBXXEWCRMAAM");
    msg.formation_name.assign("QMGUSYDFLZFAGUEEORKTCTLHRLZEEYIYGSJNQIVRJZJDWIHDBYMVGBBLBTJLPINMRMISQCLUKVNFQNARDACFKYVWAZUMXTWGJKUAQAHEZZKZCEGQVEKSJXVDIWWTSUOHXNXCEVXKZRPJAVBDQTDERGWUDCNTMNQPIHGJIYUBHWHWNZGMLEWIPHPKVQLPMIXCBOFXARKTFPSCZMFSRLGACYQKO");
    msg.plan_id.assign("TDIDSLQFKUCWHPTRMOENPLYVNDJGXYGWFWECPVSJZCQXXDAUEOEHZYUMTBAOGSKCKQNBRZVLLGLDCRTEYDEVGOBJSWIFMGIRCWHYHOLZUWOMXCYUZMZEIUPMNJGSQDVLHROSKBIXKVQVYAWHCNJZUXAJJDIWOMBKHAVRESATT");
    msg.description.assign("LPMEFLINOULRDWGURWVPLYERFKFKYISSEQSFWVSHCUWDENONDMAQTHMLGROPQLBQQGJNINFJFXEWKWEWIPBYIAVXBEUXZPJU");
    msg.leader_speed = 0.505686149581;
    msg.leader_bank_lim = 0.835806413635;
    msg.pos_sim_err_lim = 0.641279649562;
    msg.pos_sim_err_wrn = 0.201217261125;
    msg.pos_sim_err_timeout = 34013U;
    msg.converg_max = 0.337401498599;
    msg.converg_timeout = 50813U;
    msg.comms_timeout = 20562U;
    msg.turb_lim = 0.855919452494;
    msg.custom.assign("NSCPQMKYXVWGWFSHUHDGUZBQANSREHGSOFAU");

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
    msg.setTimeStamp(0.364734212347);
    msg.setSource(18962U);
    msg.setSourceEntity(28U);
    msg.setDestination(25761U);
    msg.setDestinationEntity(29U);
    msg.group_name.assign("BDMMEXFRINWUBJOEYRYGBADUUKTQKGQWBMDPBENYLWUOMPFQEHHRVGTZCXDCJGASBCFPBFZMXVMPWSSTBYAMASLXANNKDVWRUUJCTHKRNZRPQEGXTKSVZSQNZOWAFRPWJIVQONUFQLCHDZLIPEOMWTKIVUJOLUIYWFNMBSGOKHLAAGOZIJCXAQKLSZHRTVKOVRPLMEJIIPTYFLTGNXEXKXDFELCPJSBEHCDTDUWQRXSY");
    msg.formation_name.assign("RUSORIGABNEGKFZOBRQXXJPNQSFEFEHNHTNVWPETOVKP");
    msg.plan_id.assign("MGYVUTFNOJULWWSENBLKQTOHVCMEHBPKSWDR");
    msg.description.assign("BZOWBFZINOQMTCRXLROBZNCPZCQUFHTLVUKVFXDVTWWRHJGUJDJZDCALLIAMUHXEBJLEGOBAHXKXNVMIVTKQFEFOVYZSVDNCCMDNOYCTIRYBOLAOMPLDQLAYKUZSQHKDQQBHWGMYJENUZPHUUTNCDWPFIQPDSIYWCLRHAXTGSSFRIRFQKPPMOYR");
    msg.leader_speed = 0.480468046783;
    msg.leader_bank_lim = 0.071398509611;
    msg.pos_sim_err_lim = 0.904011425231;
    msg.pos_sim_err_wrn = 0.0895105516017;
    msg.pos_sim_err_timeout = 59149U;
    msg.converg_max = 0.409086798874;
    msg.converg_timeout = 15544U;
    msg.comms_timeout = 52599U;
    msg.turb_lim = 0.262197835686;
    msg.custom.assign("DOHTLWKIPNYNWOSHPFWZKXSUWVXAIGJCBXCRRDJLRDYQHNBDBDXVMEHVUJNVNXYYKQCFJOVQNBLJKAHPNTYPSFGHESEZWEIAUMUTOPDMPNZBRVTQCUPPXEGISRIWVQYATMFNYGG");

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
    msg.setTimeStamp(0.335503160435);
    msg.setSource(13389U);
    msg.setSourceEntity(41U);
    msg.setDestination(934U);
    msg.setDestinationEntity(163U);
    msg.control_src = 54002U;
    msg.control_ent = 239U;
    msg.timeout = 0.112752105515;
    msg.loiter_radius = 0.812489381775;
    msg.altitude_interval = 0.533034155921;

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
    msg.setTimeStamp(0.204754533131);
    msg.setSource(5853U);
    msg.setSourceEntity(220U);
    msg.setDestination(15697U);
    msg.setDestinationEntity(14U);
    msg.control_src = 5113U;
    msg.control_ent = 228U;
    msg.timeout = 0.248827800599;
    msg.loiter_radius = 0.805166309981;
    msg.altitude_interval = 0.377018127024;

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
    msg.setTimeStamp(0.082291222139);
    msg.setSource(11995U);
    msg.setSourceEntity(242U);
    msg.setDestination(56634U);
    msg.setDestinationEntity(245U);
    msg.control_src = 34592U;
    msg.control_ent = 182U;
    msg.timeout = 0.820659246543;
    msg.loiter_radius = 0.384810750855;
    msg.altitude_interval = 0.355030225146;

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
    msg.setTimeStamp(0.306825942322);
    msg.setSource(14746U);
    msg.setSourceEntity(171U);
    msg.setDestination(3663U);
    msg.setDestinationEntity(99U);
    msg.flags = 101U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.175142446964;
    tmp_msg_0.speed_units = 113U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.130212478856;
    tmp_msg_1.z_units = 199U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.122221722735;
    msg.lon = 0.31642142019;
    msg.radius = 0.418594255981;

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
    msg.setTimeStamp(0.822429426117);
    msg.setSource(29074U);
    msg.setSourceEntity(158U);
    msg.setDestination(1126U);
    msg.setDestinationEntity(89U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.556239480511;
    tmp_msg_0.speed_units = 230U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.495167209249;
    tmp_msg_1.z_units = 182U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.973065331577;
    msg.lon = 0.830420486128;
    msg.radius = 0.0688180018408;

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
    msg.setTimeStamp(0.759816234114);
    msg.setSource(9854U);
    msg.setSourceEntity(88U);
    msg.setDestination(3461U);
    msg.setDestinationEntity(94U);
    msg.flags = 221U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.477531753318;
    tmp_msg_0.speed_units = 203U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.470760880743;
    tmp_msg_1.z_units = 81U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.864566584846;
    msg.lon = 0.851411246519;
    msg.radius = 0.227059770994;

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
    msg.setTimeStamp(0.283788369822);
    msg.setSource(3785U);
    msg.setSourceEntity(0U);
    msg.setDestination(13834U);
    msg.setDestinationEntity(67U);
    msg.control_src = 36526U;
    msg.control_ent = 248U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.179024225138;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.521769676015;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.204851335976;
    tmp_msg_0.lon = 0.307338805577;
    tmp_msg_0.radius = 0.263661384038;
    msg.reference.set(tmp_msg_0);
    msg.state = 150U;
    msg.proximity = 43U;

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
    msg.setTimeStamp(0.33050384431);
    msg.setSource(53329U);
    msg.setSourceEntity(31U);
    msg.setDestination(10259U);
    msg.setDestinationEntity(100U);
    msg.control_src = 55390U;
    msg.control_ent = 67U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 206U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0210641471132;
    tmp_tmp_msg_0_0.speed_units = 15U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.180070856606;
    tmp_tmp_msg_0_1.z_units = 36U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.487125155981;
    tmp_msg_0.lon = 0.68096811718;
    tmp_msg_0.radius = 0.584563072084;
    msg.reference.set(tmp_msg_0);
    msg.state = 152U;
    msg.proximity = 200U;

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
    msg.setTimeStamp(0.246257953447);
    msg.setSource(49919U);
    msg.setSourceEntity(15U);
    msg.setDestination(36731U);
    msg.setDestinationEntity(207U);
    msg.control_src = 9071U;
    msg.control_ent = 155U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 200U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.775100036625;
    tmp_tmp_msg_0_0.speed_units = 71U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.15852097706;
    tmp_tmp_msg_0_1.z_units = 44U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.670513312159;
    tmp_msg_0.lon = 0.413515235631;
    tmp_msg_0.radius = 0.0765059786383;
    msg.reference.set(tmp_msg_0);
    msg.state = 141U;
    msg.proximity = 245U;

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
    msg.setTimeStamp(0.0917620013895);
    msg.setSource(8310U);
    msg.setSourceEntity(243U);
    msg.setDestination(37711U);
    msg.setDestinationEntity(161U);
    msg.ax_cmd = 0.480927772314;
    msg.ay_cmd = 0.454822983113;
    msg.az_cmd = 0.716337114268;
    msg.ax_des = 0.138318355627;
    msg.ay_des = 0.0451422892938;
    msg.az_des = 0.794737105667;
    msg.virt_err_x = 0.933170552175;
    msg.virt_err_y = 0.158864193998;
    msg.virt_err_z = 0.403917509781;
    msg.surf_fdbk_x = 0.0605010987008;
    msg.surf_fdbk_y = 0.437569541518;
    msg.surf_fdbk_z = 0.908260695701;
    msg.surf_unkn_x = 0.693737846346;
    msg.surf_unkn_y = 0.703771274231;
    msg.surf_unkn_z = 0.130101535771;
    msg.ss_x = 0.797666125105;
    msg.ss_y = 0.940283222321;
    msg.ss_z = 0.190659439212;

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
    msg.setTimeStamp(0.0613532957826);
    msg.setSource(871U);
    msg.setSourceEntity(145U);
    msg.setDestination(1905U);
    msg.setDestinationEntity(57U);
    msg.ax_cmd = 0.487402598451;
    msg.ay_cmd = 0.980052981975;
    msg.az_cmd = 0.46960423492;
    msg.ax_des = 0.171494857123;
    msg.ay_des = 0.992436629632;
    msg.az_des = 0.576548198909;
    msg.virt_err_x = 0.276927932405;
    msg.virt_err_y = 0.868814602185;
    msg.virt_err_z = 0.277482404776;
    msg.surf_fdbk_x = 0.624585559346;
    msg.surf_fdbk_y = 0.689456430822;
    msg.surf_fdbk_z = 0.10464980059;
    msg.surf_unkn_x = 0.638342694855;
    msg.surf_unkn_y = 0.289309927599;
    msg.surf_unkn_z = 0.343448498192;
    msg.ss_x = 0.572794686103;
    msg.ss_y = 0.397460086666;
    msg.ss_z = 0.679903351927;

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
    msg.setTimeStamp(0.960595452566);
    msg.setSource(53824U);
    msg.setSourceEntity(105U);
    msg.setDestination(52332U);
    msg.setDestinationEntity(192U);
    msg.ax_cmd = 0.213654551641;
    msg.ay_cmd = 0.689193070046;
    msg.az_cmd = 0.124944231027;
    msg.ax_des = 0.186382941469;
    msg.ay_des = 0.966022834818;
    msg.az_des = 0.591851051669;
    msg.virt_err_x = 0.658021766495;
    msg.virt_err_y = 0.0991964367663;
    msg.virt_err_z = 0.685071748983;
    msg.surf_fdbk_x = 0.715579294225;
    msg.surf_fdbk_y = 0.864214147151;
    msg.surf_fdbk_z = 0.063303363384;
    msg.surf_unkn_x = 0.69149728046;
    msg.surf_unkn_y = 0.913335554603;
    msg.surf_unkn_z = 0.789163482086;
    msg.ss_x = 0.114990467108;
    msg.ss_y = 0.894347370849;
    msg.ss_z = 0.137100196536;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RWWNNEVNYMJZYPPZLHBUOADTDJFMCSXPQCPRFGHGYIKDSIFXJLVHJKMZTAZAUXMGHVJBPRLPBRNAZWXHEIRBSUXRONEQQKMZLVYOTQGICTPPKLFBASLYEWNTHGJUDULF");
    tmp_msg_0.dist = 0.136730682739;
    tmp_msg_0.err = 0.455093764473;
    tmp_msg_0.ctrl_imp = 0.777370841053;
    tmp_msg_0.rel_dir_x = 0.218760020319;
    tmp_msg_0.rel_dir_y = 0.879933823032;
    tmp_msg_0.rel_dir_z = 0.397076929859;
    tmp_msg_0.err_x = 0.636379595789;
    tmp_msg_0.err_y = 0.596304267244;
    tmp_msg_0.err_z = 0.36336956007;
    tmp_msg_0.rf_err_x = 0.397168194252;
    tmp_msg_0.rf_err_y = 0.800748094891;
    tmp_msg_0.rf_err_z = 0.248340141108;
    tmp_msg_0.rf_err_vx = 0.163216027805;
    tmp_msg_0.rf_err_vy = 0.553158972197;
    tmp_msg_0.rf_err_vz = 0.665307273567;
    tmp_msg_0.ss_x = 0.300343280698;
    tmp_msg_0.ss_y = 0.294720417864;
    tmp_msg_0.ss_z = 0.668892069088;
    tmp_msg_0.virt_err_x = 0.384875982671;
    tmp_msg_0.virt_err_y = 0.37222232834;
    tmp_msg_0.virt_err_z = 0.534540387406;
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
    msg.setTimeStamp(0.954811866428);
    msg.setSource(59256U);
    msg.setSourceEntity(173U);
    msg.setDestination(55262U);
    msg.setDestinationEntity(66U);
    msg.s_id.assign("DCZQSAJUZVJMLIJTPHOUODFOGBOHWTOPNQIRMEUXUWOFZWJYAAGAKVAPLHTNVWTSFXYQFCYXBGRFHCGOWLPOMIULBGHSL");
    msg.dist = 0.396491664005;
    msg.err = 0.134410802361;
    msg.ctrl_imp = 0.516304041448;
    msg.rel_dir_x = 0.451754515058;
    msg.rel_dir_y = 0.233206165382;
    msg.rel_dir_z = 0.224185738785;
    msg.err_x = 0.971794492027;
    msg.err_y = 0.934910518276;
    msg.err_z = 0.53705748821;
    msg.rf_err_x = 0.906453694898;
    msg.rf_err_y = 0.0379758146815;
    msg.rf_err_z = 0.116025168226;
    msg.rf_err_vx = 0.995380036229;
    msg.rf_err_vy = 0.381041586815;
    msg.rf_err_vz = 0.837589465653;
    msg.ss_x = 0.329099833092;
    msg.ss_y = 0.0816381463054;
    msg.ss_z = 0.931381481792;
    msg.virt_err_x = 0.0906802975506;
    msg.virt_err_y = 0.682183776773;
    msg.virt_err_z = 0.196149378197;

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
    msg.setTimeStamp(0.303657236057);
    msg.setSource(56315U);
    msg.setSourceEntity(117U);
    msg.setDestination(29220U);
    msg.setDestinationEntity(159U);
    msg.s_id.assign("DPUNPFDTHDVBWWFXRDKZSNWNYPKKCISCVJMNTQQBBJVIGMTGCOWHAYLRYWZATMYDLPFRBMJEUYAHETYLWSUJQMPUZQUEWXKVVVQNPLNIORQRAQRSBDCTDKHBMPWZXOFCHHLUEUATAXC");
    msg.dist = 0.595144795148;
    msg.err = 0.984687869918;
    msg.ctrl_imp = 0.676639696423;
    msg.rel_dir_x = 0.985152681993;
    msg.rel_dir_y = 0.91667918172;
    msg.rel_dir_z = 0.104293952398;
    msg.err_x = 0.0517026696234;
    msg.err_y = 0.736004007878;
    msg.err_z = 0.651134138578;
    msg.rf_err_x = 0.113187912823;
    msg.rf_err_y = 0.769115306519;
    msg.rf_err_z = 0.920347142524;
    msg.rf_err_vx = 0.765179065329;
    msg.rf_err_vy = 0.760602341134;
    msg.rf_err_vz = 0.837837902546;
    msg.ss_x = 0.42992921183;
    msg.ss_y = 0.824023247268;
    msg.ss_z = 0.975004936501;
    msg.virt_err_x = 0.885380063055;
    msg.virt_err_y = 0.123156958688;
    msg.virt_err_z = 0.403127313417;

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
    msg.setTimeStamp(0.803801934668);
    msg.setSource(41933U);
    msg.setSourceEntity(212U);
    msg.setDestination(27814U);
    msg.setDestinationEntity(0U);
    msg.s_id.assign("CSOOITSQKPVHMSQKFZWVXUYNECMOBCBFRAYDVZTUIHGGCLJZGWWSXDKSDNYBEYCOGARJHAVSIAIUWQPLUATKESXYQERANNGMKDDJOAKWFWEZRFZNYAWVYBHZMJWHXFUFIFQUTULIRYQDXZQJMQFPLPDMLHDYPIROMRNGCVZTVXBAZWCLXBNGGUMXSJDNKDRFTEPSPPJTOUFTPXBCLOJEKYLRRJPJOWHIMABG");
    msg.dist = 0.30194744841;
    msg.err = 0.265993315941;
    msg.ctrl_imp = 0.177964554889;
    msg.rel_dir_x = 0.544403185923;
    msg.rel_dir_y = 0.634758289742;
    msg.rel_dir_z = 0.92805216294;
    msg.err_x = 0.566634734834;
    msg.err_y = 0.774126276066;
    msg.err_z = 0.0419596924207;
    msg.rf_err_x = 0.732959027201;
    msg.rf_err_y = 0.31681751072;
    msg.rf_err_z = 0.336493354673;
    msg.rf_err_vx = 0.201967047423;
    msg.rf_err_vy = 0.750789478345;
    msg.rf_err_vz = 0.97249245836;
    msg.ss_x = 0.85129403256;
    msg.ss_y = 0.152267372483;
    msg.ss_z = 0.885483167886;
    msg.virt_err_x = 0.724215928814;
    msg.virt_err_y = 0.392463027239;
    msg.virt_err_z = 0.121957838735;

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
    msg.setTimeStamp(0.291148240598);
    msg.setSource(24621U);
    msg.setSourceEntity(51U);
    msg.setDestination(2332U);
    msg.setDestinationEntity(77U);
    msg.timeout = 49448U;
    msg.rpm = 0.970372214816;
    msg.direction = 203U;
    msg.custom.assign("ROUQWCTIGEHOLZYYAVVHTZSDXWXDRHFQZHNENXHLSCMXSNUMVCGVIQPHWVZLKIATBJGOKZDXTDIBYBMRYRZNAEFCIVRDNXGPENLQPJOMAFUQQGFAOKGKFGORWYEXJCFGASSIPQZEBBHKTYCTDISJMQQUOJUAWWYNUS");

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
    msg.setTimeStamp(0.0803105558051);
    msg.setSource(34193U);
    msg.setSourceEntity(62U);
    msg.setDestination(15120U);
    msg.setDestinationEntity(145U);
    msg.timeout = 33116U;
    msg.rpm = 0.219561956853;
    msg.direction = 228U;
    msg.custom.assign("IWMUMATPLBEJHBIDPEKIPQUZUHZDRTLJZMNEGNJGDBQMEYARYTOBCOQSGVDJTTMLLBAHYFTFLFGNZCIPGCKBUFQIKYRJBUQMVNWAIVUGYDGZSSRODROXYMHTXCFEPJZSQRSN");

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
    msg.setTimeStamp(0.87916010522);
    msg.setSource(3252U);
    msg.setSourceEntity(29U);
    msg.setDestination(12130U);
    msg.setDestinationEntity(4U);
    msg.timeout = 36456U;
    msg.rpm = 0.817036049776;
    msg.direction = 213U;
    msg.custom.assign("JSAUCQVAHBFQIVHYUVGINTGLAMPECJTZQHMSEULKKRPDOEBMOJJUSOLFKNZBBGXSJISTYTUOICMUWVOQLKXKEXXYONIKRXTOELAHRSZPVMUTHFOJTCBWAARSNBSGYQIHYEKCSWCXLVHDFNAIQWWWCIFUJPZTRDDVTLXAKYYMZPNBEURLJAKRXQQPEFIRGKZYHBHPXNNNCVYJGSGHDCQPOZPBDVEXJFGG");

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
    msg.setTimeStamp(0.230599779565);
    msg.setSource(44925U);
    msg.setSourceEntity(94U);
    msg.setDestination(40746U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("AJZTHQGQLVIOOTHPHLEZIFYKATVXWWBOSGCRVOSVMCEHCVLLIGAVEWQMJDYUPMEFGCJSNVNJUUYZIUPYAZWFLDJABGKOXXIYOY");
    msg.type = 49U;
    msg.op = 28U;
    msg.group_name.assign("FXHVVPEXUXPMCLTXMVWPAVINQGOQRZADIHGIZYTDWSXOVOKOKMFMMUPIKFHVMVRCSFGQHXFELFRNYJZTLYGGBRSUTWTYJJCCXPMDHZEAOYZDCLUJFQEGHESIMVBOILWDRNBNSUWUUWSKWTBVTXRJNILJUAENTWMFEOFQRADWYKQGHZNLZVPDJOXJIJFUBZKQKKHZDNCCLBXGSNRRBTYOJCZSOMYEBTLUQQRAINQHLYIPACGAKWBKDSSHPGABD");
    msg.plan_id.assign("GINBFTCRQAOZRMUIVJRLNOHYQXVYGYZUHOZWMBRJDSORUQXFKEVTVCHUA");
    msg.description.assign("EXQQACMZLJPFOCTMKNYHGAGIKTPYNKZTZUBCZQYWDARHUOIRVXZELBHLQXCHKEPWSJDJTVSLFNXEGPVRXKGFCTPCCRAIDDBWYNTGPVDWGRKOOOXIQTMYGRCJHKNLXHJIIEOSENAPMMXXWJIUWDCZKNLSUVGVUZJVHMOFMLUBDDECWVHQSAYRVFSZKDKWWDPAUBLSV");
    msg.reference_frame = 91U;
    msg.leader_bank_lim = 0.017656814777;
    msg.leader_speed_min = 0.596436550094;
    msg.leader_speed_max = 0.288536073845;
    msg.leader_alt_min = 0.590218325866;
    msg.leader_alt_max = 0.228188969299;
    msg.pos_sim_err_lim = 0.747951044222;
    msg.pos_sim_err_wrn = 0.962871081507;
    msg.pos_sim_err_timeout = 45512U;
    msg.converg_max = 0.00478188213067;
    msg.converg_timeout = 7378U;
    msg.comms_timeout = 1691U;
    msg.turb_lim = 0.403656153502;
    msg.custom.assign("WHVYYAFEMCOPXWLUOEDUKIJGTGSKBQUUXPICNUBTDBOIPOVXMLCEKEOBWVFHAMRBWSINJETCPJJNHQYZFBYWNDVATJLMRGISOUZOWUBPIGZNFYMNGSVPVLRXTLWITKIGVHWZMYKHQSSNBDDAJKUQPSPLIIXHJGDMAXROFGYXTCJMLVHFLREQYAJZHBKAORJAEGAQYCMSOQQPNCMWCGEZZX");

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
    msg.setTimeStamp(0.355610861362);
    msg.setSource(12904U);
    msg.setSourceEntity(38U);
    msg.setDestination(25407U);
    msg.setDestinationEntity(121U);
    msg.formation_name.assign("RMMPOLSVJIIKYVMNXHYXRTCCSQEJBBLMCOSUQGFSRTZYJNOQEGSMPZURNOBBIQECZJIQQGNNEHDCI");
    msg.type = 131U;
    msg.op = 133U;
    msg.group_name.assign("ZMOMHEOGYFRKWQHTSUBDKUXPTIQDGNCUNAPZLTCALWWXTCVKOBPHAWNOJSVQJTXSSILIYMWUDNAKNYJJIUCRJROKGELZYWQBUHHEFHFHKAXFXSSVDREEKLVFYPQRLLASZSQYIPJR");
    msg.plan_id.assign("PWLZYOOJYPHY");
    msg.description.assign("SIAOPFYFVJBVTOYFGHMQAKDEJLNIIHEVGPUZPHWRZVZJRNDXLBVQSXNUZNAYPVGYVHNSTFQDGZIPYKPWLQQTCZUFCTOEEOHHEKFEPPKYEYAMIWNXWRWUDFCNYFDUXNQXWJOAWBULJRKSZDWMPZJUQGXRJACGMKMLSLBQMXNCGYPCASKJQORCTEJIIBKLDZXXHBRWKWSTRELMAYTURDCDOUFACGGCMDQTLBBRAHGHVKBOSHVFMMIJTOXSZN");
    msg.reference_frame = 175U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32116U;
    tmp_msg_0.off_x = 0.789459509099;
    tmp_msg_0.off_y = 0.532485241306;
    tmp_msg_0.off_z = 0.959910610275;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.647531471112;
    msg.leader_speed_min = 0.463376237663;
    msg.leader_speed_max = 0.101654250421;
    msg.leader_alt_min = 0.354313525099;
    msg.leader_alt_max = 0.418856774318;
    msg.pos_sim_err_lim = 0.700974943579;
    msg.pos_sim_err_wrn = 0.282532621281;
    msg.pos_sim_err_timeout = 4834U;
    msg.converg_max = 0.0668923157867;
    msg.converg_timeout = 5568U;
    msg.comms_timeout = 51689U;
    msg.turb_lim = 0.687611339768;
    msg.custom.assign("DGYBATJMWPODFLDALQBCHIYZNIIDZICUHOOKSKGFFYXFSTQVURGRUWUOUGEXUNQLPKNIEJVXQDVNQSKTAUHNKMVESWXSECWUHNFLUKYPRMMAAZONJNICXHVEACRDZGLESDKZTWHSGEHRTJCIOYBAVTYMDZBFWEIILMBTYQMOBBEJTOWFCDJLQHWBPPZGKJPAAWDZPPRXGFPJVCSYTRLGVOLOTMNWEKQBYRBJJSGPRYKXFFSHXVNVQAXCCH");

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
    msg.setTimeStamp(0.392345156642);
    msg.setSource(22349U);
    msg.setSourceEntity(101U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(152U);
    msg.formation_name.assign("GLDZFAOCNXTQCKPJOECRTWEPJRJMCNOVEVVTXWAGYOSHLDUOPJCVVBUDPNXXHZSNXFJFPVHFGZENHFHYKYKIZIOAESRCUYKBKYFEOIHDJMGYZQHLUXUVAAAKLTDJBEFMCMNZWGHPBZNYQXEPCMGBNGWEXKARPYNSUQZQLGABKQCJALLDLOVDTUTRVLEWNQYSPFFIRQIBYMIMQKWIMOMITBDRKFJMW");
    msg.type = 37U;
    msg.op = 95U;
    msg.group_name.assign("MXBTZADNPWEJKAKFPDYGTQ");
    msg.plan_id.assign("KJOQPWGBXYFARQQKSXVVYQOOZYURKLIKQMGHIUVDAYAUIJUWVHGRVJJZPHTSVBJXMMIHULGCPCSMAXEUCDLRVFFQPXWWDGHYWOERTIWDZAPEYHXVCULJJCOTESNIRHMDPMXLHSIIEMXOFIPMEMLFKJYSSLAQDOICDEWDXDZFOGV");
    msg.description.assign("MDIINGALPVRKIJKKEMUEXMVBSZWKHDJBLJYWIBIYCNEORSDOIHJXJNETYMUIKYKEQIOSCVFHBYCEELUZQHTOFBUGAPOAYGHDDFUDJFESNKTMFB");
    msg.reference_frame = 31U;
    msg.leader_bank_lim = 0.01063142265;
    msg.leader_speed_min = 0.431563502447;
    msg.leader_speed_max = 0.607381308863;
    msg.leader_alt_min = 0.466893830056;
    msg.leader_alt_max = 0.417183724732;
    msg.pos_sim_err_lim = 0.429374243544;
    msg.pos_sim_err_wrn = 0.283335300912;
    msg.pos_sim_err_timeout = 17408U;
    msg.converg_max = 0.433339359755;
    msg.converg_timeout = 21470U;
    msg.comms_timeout = 40846U;
    msg.turb_lim = 0.663405482611;
    msg.custom.assign("OVTSBXNUAUXSJECUTEWGFNOWIANPWDPIPAIOOZTVDVVWRRUQIFWRXTAZNMJYDXBXHBCDPXQALBYUERZZGEJUVMUQPLCIQHLNSKHVBAJULQLVRGMZCOSNZGQYKCGKFKMMFUZSOBSZGCBQEHASLJXKYLFRXETNYVCNPHODHERDWHOJYYBTRHJUIAMDPQPIBLYMGWVXNCTXYKSPDEJKEMQHJCMZLAGFTQSTKIWOFPELTFRIAZBKWI");

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
    msg.setTimeStamp(0.220025251063);
    msg.setSource(7636U);
    msg.setSourceEntity(25U);
    msg.setDestination(9933U);
    msg.setDestinationEntity(142U);
    msg.timeout = 57736U;
    msg.lat = 0.779276232914;
    msg.lon = 0.45189978466;
    msg.z = 0.314639488314;
    msg.z_units = 38U;
    msg.speed = 0.680755691419;
    msg.speed_units = 38U;
    msg.custom.assign("HVZUCQTOTPKQPTFTCYLVZYGGMTHMJZGQRSGBQSPYLUKVNRQRJETVINZWHFJXRVPUJONNIPLSXGPCOZJTXOSCQAADFXEBSYHROKPRDCDJDIMKBRBICMNLBXRXELRWAAFSHNZNFFCSFQMCSLBHIWOBDNPMOREAUPKAWXOIKUYDEYHYXGEUQVYHDWVZNNJDDZEJE");

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
    msg.setTimeStamp(0.208251307045);
    msg.setSource(39962U);
    msg.setSourceEntity(100U);
    msg.setDestination(52690U);
    msg.setDestinationEntity(220U);
    msg.timeout = 37962U;
    msg.lat = 0.51216512909;
    msg.lon = 0.765548808239;
    msg.z = 0.594769315904;
    msg.z_units = 53U;
    msg.speed = 0.348633887325;
    msg.speed_units = 212U;
    msg.custom.assign("KSURUEFUCIDSHXMWHCLTLZHLUMWMDOVORONFWGXYOOJDLMNRQBZBUOYOOFYIJFGBABJXYBWPEPRTQUAZNNMUCSYXZZUNVSLGLZVFKJVBKWCRNQNEVIDETWWV");

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
    msg.setTimeStamp(0.564428019221);
    msg.setSource(22543U);
    msg.setSourceEntity(136U);
    msg.setDestination(61632U);
    msg.setDestinationEntity(146U);
    msg.timeout = 60875U;
    msg.lat = 0.381754079811;
    msg.lon = 0.900211483717;
    msg.z = 0.766702321033;
    msg.z_units = 168U;
    msg.speed = 0.926617532553;
    msg.speed_units = 7U;
    msg.custom.assign("XIERGSNFJDPPAAXGVOSSLQYNOANEXSRLILHTAMIXUEEAVUBMENPDICQUUFJWYMPUBIWUSNKHTTTHAJRMEZFQFJAYDCGCEARWTODRIHTMPRTJECVYCYNJRUVDGNBYZKKLKQGIGSTJVBSZCFBQQDKHGPQVLZMRJBKGICBROOOYQ");

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
    msg.setTimeStamp(0.879616186074);
    msg.setSource(56700U);
    msg.setSourceEntity(175U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(27U);
    msg.timeout = 37122U;
    msg.lat = 0.563286513774;
    msg.lon = 0.536753734029;
    msg.z = 0.988358656408;
    msg.z_units = 40U;
    msg.speed = 0.988864260935;
    msg.speed_units = 82U;
    msg.custom.assign("DSGIJYYIGQIDAKQTEUAYOGRUZGRJDHFMOMQPTGFFTHWCIPWOEAZXEFRBWWCIMMWDMIYNKLUQJXBBEZQWFFIUSKHYTBBAZVZDBSQPJIDRGJELBUXYENOLDTZJMSFMMBAIIUMSDYXHKXEN");

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
    msg.setTimeStamp(0.315386692917);
    msg.setSource(40566U);
    msg.setSourceEntity(235U);
    msg.setDestination(8217U);
    msg.setDestinationEntity(89U);
    msg.timeout = 50656U;
    msg.lat = 0.00733230571981;
    msg.lon = 0.554799104156;
    msg.z = 0.642488843875;
    msg.z_units = 190U;
    msg.speed = 0.206627806816;
    msg.speed_units = 214U;
    msg.custom.assign("YUTQYCLWWLTXHBGFTZTXHMACXGLWMIIYIPYQOQZJFSOXXYIDYJSUZFBEIBCEQNXBLVTRKFKGVJLUEOICHWPGPICMCWCWOHSGDSLTVUNGHFMKIFEZIPGIAEDJNSDLZZTTAFCNRQYPDKJVRVSSNNBDJKXHFASQONMMKAUUDKDKONUVVRTOHMRCHUNJCXZTKOEWYKEVLEGOPLDGQRRMPHBBDUVXXSBZJALZEJWHQGFSFJNPBUORYMB");

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
    msg.setTimeStamp(0.559140713796);
    msg.setSource(58465U);
    msg.setSourceEntity(75U);
    msg.setDestination(36676U);
    msg.setDestinationEntity(54U);
    msg.timeout = 63671U;
    msg.lat = 0.461191586258;
    msg.lon = 0.221322120852;
    msg.z = 0.511793624854;
    msg.z_units = 81U;
    msg.speed = 0.111483308715;
    msg.speed_units = 80U;
    msg.custom.assign("YEITMEYSPWSUJORQGYQRFESLSNMJROZCIVBJEGQKYOLLTLCFPXPPHADBXOCRXYKQBRKUKAEXTPYEWXAUTRMSKIUJUXJLFFCHMPFYWNJHMEGFXHKIONAAZGYWSENVLNIHCWLZXWVUGQFVXTGGDCYNCHVWSHBDILDVISQSBINJCABNZVWMMOXLQVBPZDOFIFKSUTRDDLIKWENJQOCPVDTWGUORZRBOAHTAAYZKZ");

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
    msg.setTimeStamp(0.876751520636);
    msg.setSource(47666U);
    msg.setSourceEntity(250U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(21U);
    msg.arrival_time = 0.909480087214;
    msg.lat = 0.120370120928;
    msg.lon = 0.764528684631;
    msg.z = 0.37125191649;
    msg.z_units = 67U;
    msg.travel_z = 0.536970447234;
    msg.travel_z_units = 12U;
    msg.delayed = 129U;

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
    msg.setTimeStamp(0.601003288484);
    msg.setSource(13322U);
    msg.setSourceEntity(173U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(72U);
    msg.arrival_time = 0.0897517932254;
    msg.lat = 0.818402584053;
    msg.lon = 0.632611569631;
    msg.z = 0.125769134517;
    msg.z_units = 133U;
    msg.travel_z = 0.553041534377;
    msg.travel_z_units = 213U;
    msg.delayed = 64U;

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
    msg.setTimeStamp(0.154072661761);
    msg.setSource(3460U);
    msg.setSourceEntity(210U);
    msg.setDestination(57018U);
    msg.setDestinationEntity(253U);
    msg.arrival_time = 0.0205084247326;
    msg.lat = 0.414970715625;
    msg.lon = 0.616481804955;
    msg.z = 0.621673082641;
    msg.z_units = 200U;
    msg.travel_z = 0.428109555453;
    msg.travel_z_units = 143U;
    msg.delayed = 138U;

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
    msg.setTimeStamp(0.873945113474);
    msg.setSource(17988U);
    msg.setSourceEntity(88U);
    msg.setDestination(2106U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.658819035291;
    msg.lon = 0.0479613319843;
    msg.z = 0.26497086424;
    msg.z_units = 6U;
    msg.speed = 0.869781053035;
    msg.speed_units = 74U;
    msg.bearing = 0.0636917913451;
    msg.cross_angle = 0.949642741265;
    msg.width = 0.232333966799;
    msg.length = 0.620160110679;
    msg.coff = 165U;
    msg.angaperture = 0.488033573204;
    msg.range = 33959U;
    msg.overlap = 143U;
    msg.flags = 46U;
    msg.custom.assign("TKWMUNOKZXQIECULDNBAYUTMIJHVPETNYGQOYQQLXFTZKKRRIFIHOJJZDTPIWUBJCWMECVJYCLEGEAVLBMFSTGGFQVSJRYZYBBDEGHEUBEDVJFWOZHHQXSWABORXCIOWNINDYG");

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
    msg.setTimeStamp(0.487209968844);
    msg.setSource(45773U);
    msg.setSourceEntity(33U);
    msg.setDestination(8584U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.0792126203157;
    msg.lon = 0.915229578154;
    msg.z = 0.920647497611;
    msg.z_units = 106U;
    msg.speed = 0.0479401943982;
    msg.speed_units = 41U;
    msg.bearing = 0.873935091247;
    msg.cross_angle = 0.44197336553;
    msg.width = 0.750082095473;
    msg.length = 0.0585272748615;
    msg.coff = 103U;
    msg.angaperture = 0.728429553054;
    msg.range = 63506U;
    msg.overlap = 56U;
    msg.flags = 20U;
    msg.custom.assign("RQFXCAZAUTKIBHVUDPRCGGEKRHESEDBNQNXETZZHTDMOWJZRSAXQVEAIBCXQKTGIOVNSWKSBYUSVVTPVFOHDMGQ");

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
    msg.setTimeStamp(0.349396064043);
    msg.setSource(14244U);
    msg.setSourceEntity(63U);
    msg.setDestination(48380U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.288314787891;
    msg.lon = 0.235899103048;
    msg.z = 0.349173785935;
    msg.z_units = 235U;
    msg.speed = 0.396590106926;
    msg.speed_units = 192U;
    msg.bearing = 0.502722649689;
    msg.cross_angle = 0.181308798699;
    msg.width = 0.686742051199;
    msg.length = 0.520936639353;
    msg.coff = 64U;
    msg.angaperture = 0.275094419585;
    msg.range = 14388U;
    msg.overlap = 162U;
    msg.flags = 129U;
    msg.custom.assign("CPZHQSFYWAMGRJBBYRNWBLAYCOIGBAFEADUCBVCKDOCNBSOIZPXEXUPVHCLVDLFXXVPBEZJTSJSIBVPUMYOROZFXYZZDAYAHQHLFPHYSHEIKNVLDEEDMOVTXKRVPDURKKKBMQQKGWFTOYDYQUDQSUNHWGGTEEXNFEXUZCITGNZFGJMWTNJCVWGIJFNKWWGUSIRWSWYVHHMPQOTTTJPQNLKA");

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
    msg.setTimeStamp(0.717962225592);
    msg.setSource(53178U);
    msg.setSourceEntity(55U);
    msg.setDestination(25274U);
    msg.setDestinationEntity(128U);
    msg.timeout = 22600U;
    msg.lat = 0.115279276105;
    msg.lon = 0.641459392621;
    msg.z = 0.98448698209;
    msg.z_units = 88U;
    msg.speed = 0.0317714085714;
    msg.speed_units = 18U;
    msg.syringe0 = 130U;
    msg.syringe1 = 157U;
    msg.syringe2 = 84U;
    msg.custom.assign("KPHYJFOZGOOZFLHWUTXOGJOVNRJTGVYRCVEEAINGPLYNALIAXDKCJZASDBDAUZDAKXLSWUUVRQPJQLZEGHMRMPXEYXTHTJGNFYSQRRTJNCSXWFFVFMILHEBQIVZCCZCOXNQUDUFCMBELWRBMQDFKYMWVSORIVPKWKFOMDTBBYHWIKPAYXTNGBMHUZAISWXNPSBHFOJ");

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
    msg.setTimeStamp(0.610767295884);
    msg.setSource(21229U);
    msg.setSourceEntity(179U);
    msg.setDestination(4491U);
    msg.setDestinationEntity(226U);
    msg.timeout = 25629U;
    msg.lat = 0.345427027853;
    msg.lon = 0.835807006646;
    msg.z = 0.223981946754;
    msg.z_units = 150U;
    msg.speed = 0.480311942595;
    msg.speed_units = 90U;
    msg.syringe0 = 169U;
    msg.syringe1 = 154U;
    msg.syringe2 = 217U;
    msg.custom.assign("QBQTIDPKFLCGQOXBBJPJACHXFWYGGJNRFEMFTNJTXPMTCGLDTVCYHHBRQIVVZMOGYOLS");

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
    msg.setTimeStamp(0.540457052511);
    msg.setSource(6365U);
    msg.setSourceEntity(77U);
    msg.setDestination(46021U);
    msg.setDestinationEntity(78U);
    msg.timeout = 24195U;
    msg.lat = 0.687448699126;
    msg.lon = 0.445020305898;
    msg.z = 0.14804583564;
    msg.z_units = 161U;
    msg.speed = 0.901663245027;
    msg.speed_units = 252U;
    msg.syringe0 = 2U;
    msg.syringe1 = 238U;
    msg.syringe2 = 79U;
    msg.custom.assign("ZCVVBINGTNVBJABNLHXMOEWIPUFTPJPUBDVROOEVSZNZFQCEWEWNFFSQBGBQPWEVAUVOQDMGGMPYFHTHSHXMRALWWSCRMUJEISKQJVZNYDVURBJVBOIJXOALKSHRNRMTXCQJDXQYKSPRISGGDZZPXLWCHPIFLKUEDHF");

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
    msg.setTimeStamp(0.945793224301);
    msg.setSource(11791U);
    msg.setSourceEntity(150U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.232177118896);
    msg.setSource(58604U);
    msg.setSourceEntity(221U);
    msg.setDestination(18870U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.799292929311);
    msg.setSource(20232U);
    msg.setSourceEntity(136U);
    msg.setDestination(40054U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.544461435388);
    msg.setSource(34219U);
    msg.setSourceEntity(235U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.747858398141;
    msg.lon = 0.225003386281;
    msg.z = 0.491788801003;
    msg.z_units = 8U;
    msg.speed = 0.259472521201;
    msg.speed_units = 3U;
    msg.takeoff_pitch = 0.953777435103;
    msg.custom.assign("HQUZKXKVVPPOSHGVHSBURLMAXFQRWULZLHGGLHPMHFFXRZQCKETNSSJDGISMTIEUYSFDJKHAZBAVOCESQWSYCMXDQDURYPWWOTFLXEJETYQGYCNCSNNUBMKXIAZMUPYKORLIPKUGWPBDBXIJUZEIWFLGMAAQXRVDPOWTRGWFWUNJSBAZNIYYERFBGQXLNKOLJDOTCBTNAADCJEQVIGVYYJCTJPOO");

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
    msg.setTimeStamp(0.366370419775);
    msg.setSource(53345U);
    msg.setSourceEntity(113U);
    msg.setDestination(28689U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.163241281143;
    msg.lon = 0.311308487757;
    msg.z = 0.762377315493;
    msg.z_units = 107U;
    msg.speed = 0.229554669949;
    msg.speed_units = 40U;
    msg.takeoff_pitch = 0.551556929871;
    msg.custom.assign("AYXMKDTBPAASQWAKZBVNHCFWRXMXYQHYATAKGFXAVUTURVQLCLLWQUMGEOCXLVLIPLEEIWIDCHKXIAUNRYZNIUXGFTBWSBFKXGOQVKNMBJSMBJWOFPBZNEOMWPLOGYECDGDCYRMKYSCETHSWLFRMUJPZJJESEPPOTVGYNIJQSRWTIFBJHTMHNHDQKUMUVZDUHAOPPRSRHDDTFJXTEQCIHZJFXZONRVCIJSZNGOGNABBKVPCZYVSK");

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
    msg.setTimeStamp(0.323876295587);
    msg.setSource(3831U);
    msg.setSourceEntity(42U);
    msg.setDestination(35891U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.939408595481;
    msg.lon = 0.351581936588;
    msg.z = 0.415879316901;
    msg.z_units = 62U;
    msg.speed = 0.793763354303;
    msg.speed_units = 170U;
    msg.takeoff_pitch = 0.972729815814;
    msg.custom.assign("FDWZTGLENVWKXIYSJJRZMLTJFAWKXOTXIEUUSUOODNICQKDUTCYFQIKKPOCUOCCJXLASWGMZFSNJBTBUCEXTVVQI");

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
    msg.setTimeStamp(0.762582193602);
    msg.setSource(12324U);
    msg.setSourceEntity(57U);
    msg.setDestination(55304U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.00723786158489;
    msg.lon = 0.820715088631;
    msg.z = 0.219450310481;
    msg.z_units = 115U;
    msg.speed = 0.0135693064066;
    msg.speed_units = 180U;
    msg.abort_z = 0.716924068892;
    msg.bearing = 0.201675546529;
    msg.glide_slope = 3U;
    msg.glide_slope_alt = 0.985377931779;
    msg.custom.assign("PZFCQHWJVXETENKWKBELDGQHYSHBERTSBAGRVAYOTQFWBCPOHNNMRUUVPJMRPRLYPXJGBKSJQNRXWRIBDNUUCFAXIFGEDSCGYUFJADZKDIDXQDVBXUGZWYIJJOHVZMUAVUYTZJEOMGY");

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
    msg.setTimeStamp(0.524764451788);
    msg.setSource(56649U);
    msg.setSourceEntity(97U);
    msg.setDestination(12275U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.747033333382;
    msg.lon = 0.679937003187;
    msg.z = 0.640222178942;
    msg.z_units = 25U;
    msg.speed = 0.65586208065;
    msg.speed_units = 195U;
    msg.abort_z = 0.0307924396054;
    msg.bearing = 0.207490413706;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.0766982543587;
    msg.custom.assign("DABGHDBFAVBHNLWRVMAPSOSPHKOHBQCRSNMPSPAOPMLACEFGGNZZWAPBWELNMMRTWOZDDEGQMNHXIPMTTCCIRLOGXNJSTUCAVLJSFKJ");

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
    msg.setTimeStamp(0.136096362387);
    msg.setSource(41946U);
    msg.setSourceEntity(25U);
    msg.setDestination(38963U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.0669527797045;
    msg.lon = 0.944633892554;
    msg.z = 0.639011893587;
    msg.z_units = 233U;
    msg.speed = 0.124233061616;
    msg.speed_units = 224U;
    msg.abort_z = 0.833161299651;
    msg.bearing = 0.492394766;
    msg.glide_slope = 46U;
    msg.glide_slope_alt = 0.241201618103;
    msg.custom.assign("WCTMXRRIUZVZNAAUOTCFNYFSLVTXGYNOPGVEHUPUQKABYLPASSPKQICPDCWOYLIBSRGPOUEORHNJKFRUHVDZGDGPCEGFKKLWQXAXZQNEWROLEZTMGMAXCTQWRZEHQIXOJABKUMLHMAMSYYSUEJYBZLSJKCHTD");

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
    msg.setTimeStamp(0.493326013034);
    msg.setSource(24997U);
    msg.setSourceEntity(170U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.625980114511;
    msg.lon = 0.00688279077644;
    msg.speed = 0.0181592006006;
    msg.speed_units = 230U;
    msg.limits = 90U;
    msg.max_depth = 0.831352261626;
    msg.min_alt = 0.673632775526;
    msg.time_limit = 0.476593314986;
    msg.controller.assign("KSERUVRIJANGQXXCUXIOSDRIHTVU");
    msg.custom.assign("FVLNVIBFWNUMDLGLKIFZZHSFJXOXJUFBABHUJROZYQRBJKMLFSQPJSLOMOOHXLVCTVLMLNIIJPWXCQINIQUSYPFAWDBQVHKOETYBDZSKZINXBPWVNXSPGVYJEVUWGCBDQEDTITKPSAWPTOUJNENHDPEZJTCEQGGPMBZXZYHWHGDDGSHOKQYGIRLAMJAIACUMEARQFPCNWYUSCRHYRAXRKDTRXVQCECMOESUKZXRGAFUVWHMDCKTMTYN");

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
    msg.setTimeStamp(0.515978633895);
    msg.setSource(48546U);
    msg.setSourceEntity(240U);
    msg.setDestination(27061U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.582400582025;
    msg.lon = 0.967550239314;
    msg.speed = 0.396644499692;
    msg.speed_units = 104U;
    msg.limits = 205U;
    msg.max_depth = 0.199431891927;
    msg.min_alt = 0.413489312927;
    msg.time_limit = 0.113174562033;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0251643075955;
    tmp_msg_0.lon = 0.702232485965;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FUYXVGNZZSWCPDKGKYNANQRLZNOCFCTQQVUPYDKXAERCXPKGNVCAELPAYDDUMTRWVMVRSBLQQVBCKONBWECXVSJUJYEYHKJTISRHMUOMGEQUMFBTRHYDZUIWRZITCOXITMYDHHNASXQLPBOGFXEJCQGZHHPKDZPKPOFLSAWQWDFUUIARTOSBIGZGTFAJPBCQXLTGJSHWWWXBRLONJD");
    msg.custom.assign("KGBNWLJMPOOQHTQTFCVJAPGXSIOZEWSWYTOUESOIAREPDCGTUQUNOEXVIRUIZZPMUMETJKLBGTOJKYAIWEMDAVHFMOHXJBAKZZFALWFVWEYPENACBGYRHHNFXJBVCONVZYNCLALABNVSRUHBFGJVVKHVDWCNFPRJYYILXWYMRLJDXQSSRPYDDHDGEXGSLBCDSKHFAWQSXJRPDLZOTURCMTBGUC");

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
    msg.setTimeStamp(0.741974056471);
    msg.setSource(29238U);
    msg.setSourceEntity(218U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.486139915364;
    msg.lon = 0.0216311534516;
    msg.speed = 0.434608950659;
    msg.speed_units = 176U;
    msg.limits = 43U;
    msg.max_depth = 0.974226112577;
    msg.min_alt = 0.390552507225;
    msg.time_limit = 0.24633182448;
    msg.controller.assign("JTGECIVBZHBZUUMKLQKGIFTZVAJQPXFBFRMVASHTRTWPONNGASCJXRKRXWOICGMUBELTYTBHCHEJHXZAENWCDLJDFLDUPZMJGVMBOGMKTHARGWOOLZLAAMJMYPXBFKISQPZPRZPBNLQSQRYLXKQJIXQAXUWHYWVMUSWOYNSGTEPDRWLZWNWILXAEIEOZENKUSIYOCIDCFFOYGNRSYVSKVFKFU");
    msg.custom.assign("KOAEZHDWKHPBXNHKUCRNTXXHRSIDMMDANQZNBBSZVXENJISSWBQMDEYCBVRAEQPJXCTHUKDAYMDHLUZECQZSUEAEVVRIFUHVLRIPTOMSBABWTWBARTVCGGCPGWOVRKVPWCIMOIFLJGDPWPFBJRDMCNBCSPAITFLLAYFEMKOZLGGLNZGPOWOE");

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
    msg.setTimeStamp(0.769536044223);
    msg.setSource(22969U);
    msg.setSourceEntity(105U);
    msg.setDestination(63541U);
    msg.setDestinationEntity(23U);
    msg.target.assign("JESNIUJTMQCJK");
    msg.max_speed = 0.85451994735;
    msg.speed_units = 176U;
    msg.lat = 0.89616752308;
    msg.lon = 0.346294294188;
    msg.z = 0.85966820332;
    msg.z_units = 77U;
    msg.custom.assign("NDRKTDZOUHBELRSLCRKPPOQSIZWVRUAKUHVNNLGIVXIPIUW");

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
    msg.setTimeStamp(0.410039964175);
    msg.setSource(1386U);
    msg.setSourceEntity(100U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(251U);
    msg.target.assign("CEBALONPDEMSHGRZHUIKFAALYSHPRTQKKYHKEAFZOCACKEWDMJSXIJZBDVJTYNBPNHLYIRNVSWUIBUEAZXQTWVQITGINUJCGGYFYLRMPAUWPDESBISHMGTNJVQEDN");
    msg.max_speed = 0.847789233689;
    msg.speed_units = 188U;
    msg.lat = 0.745867775449;
    msg.lon = 0.345001951116;
    msg.z = 0.246459326295;
    msg.z_units = 137U;
    msg.custom.assign("RLULGBCNUCKMHZDHBKTUXMZPGEYLFXVXRCCZUFHNPUTIVQFDSTNYSBXOKGIRMVEAMDLJDCJNQXHWGYPFJUDKEINIXYMGVGHZOWWA");

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
    msg.setTimeStamp(0.327519384896);
    msg.setSource(30681U);
    msg.setSourceEntity(53U);
    msg.setDestination(3912U);
    msg.setDestinationEntity(219U);
    msg.target.assign("BYPTGIADHCYLIYOFQGYAKYWMPMMQMLXSBVPLFMRBNUHZTWVEHHMXTUYKVNBFLZHXTBNVDESGLNSAKHDJUZXFDKDZSHVWHWQVLJCEYWIIXMZQJVFUUJSOBKAKOFYOQZOERQTRIXXOCCJUAUZPKWEDSDPTBANWHOTCFOUJNCTERKUOSGKWXGRAIMDFGECVLWLMEKRPRCD");
    msg.max_speed = 0.906431837741;
    msg.speed_units = 5U;
    msg.lat = 0.746152218605;
    msg.lon = 0.268737885622;
    msg.z = 0.199325341478;
    msg.z_units = 95U;
    msg.custom.assign("CVFQTIDVXXVNQMXXHUUOCVNADOHZDXVNDAYRJDPDOCPCDKRUZUMHYLEFJRPHBVGRCVNTRRSGLLNEHAOCDYPAAKRMFZWIG");

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
    msg.setTimeStamp(0.117967887793);
    msg.setSource(22777U);
    msg.setSourceEntity(70U);
    msg.setDestination(14863U);
    msg.setDestinationEntity(66U);
    msg.timeout = 31019U;
    msg.lat = 0.45798749914;
    msg.lon = 0.0963016913765;
    msg.speed = 0.298413276888;
    msg.speed_units = 26U;
    msg.custom.assign("EOEUCMNWDSRFSLQZDUJXWNWLHDABITEOGXIPECSKJFODTPFOQVTKMYUPXBJTCAVBBODYQREULEITVZBZMSPRRXGDALJRWKGAHRXWMFYEIFKTNZYSXMMJVYKPZOWBZWTHNISHMTIOUYGRULHLPFBEMBIVJWMSGQWVQGOFCTRUPUPBFXIHQOLVAJYCATNYJ");

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
    msg.setTimeStamp(0.562575221831);
    msg.setSource(32018U);
    msg.setSourceEntity(84U);
    msg.setDestination(7594U);
    msg.setDestinationEntity(134U);
    msg.timeout = 32249U;
    msg.lat = 0.242123696826;
    msg.lon = 0.643615749835;
    msg.speed = 0.618942852974;
    msg.speed_units = 215U;
    msg.custom.assign("RAAYEEYTMVSDPMJOBHBHLDCSQGLLUULBUKOWWZTMPKPYQIKJVRZVYPDOQEXTCOMCXFSHBXRCGAGXTFVKRICYLRKSMPJOGKIIVGOUDEAGHZRBNXZSHACVULTFNHHWDNSTNPFUWFBDJMEKWNRZBOIQYKWCRUPZNQWMEVVWI");

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
    msg.setTimeStamp(0.149450013054);
    msg.setSource(7689U);
    msg.setSourceEntity(65U);
    msg.setDestination(38005U);
    msg.setDestinationEntity(35U);
    msg.timeout = 50110U;
    msg.lat = 0.207597378392;
    msg.lon = 0.730609657939;
    msg.speed = 0.769851741318;
    msg.speed_units = 194U;
    msg.custom.assign("KQWDAVHLXPAMGQHIWVSUKEREJMAKSKADXAPOYUYNZDGNLURNKJPIPZZAJBUTPHJQXMJOHCJCFDWKMHAGBCCBXNJYRIICPRTNDEFTCIJFCYZLFKMEFQBXOOYDTMBEOBQQLBSHDMSEYHAYRQDCLUGCVHUXYQODXRBV");

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
    msg.setTimeStamp(0.702057363759);
    msg.setSource(53697U);
    msg.setSourceEntity(72U);
    msg.setDestination(39663U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.292463989535;
    msg.lon = 0.895896186716;
    msg.z = 0.298292310534;
    msg.z_units = 164U;
    msg.radius = 0.499216146176;
    msg.duration = 11616U;
    msg.speed = 0.473321239416;
    msg.speed_units = 177U;
    msg.popup_period = 55584U;
    msg.popup_duration = 62755U;
    msg.flags = 213U;
    msg.custom.assign("ABSJHZWOVTKNUICNRBCREYZAVEUBKZYSJUSWKOHBDHVXOKQNLIDVSEUKRFXCXNJYBFITOAMDN");

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
    msg.setTimeStamp(0.0893560736479);
    msg.setSource(647U);
    msg.setSourceEntity(241U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.213903238827;
    msg.lon = 0.369462905799;
    msg.z = 0.288096319084;
    msg.z_units = 60U;
    msg.radius = 0.990693453036;
    msg.duration = 22747U;
    msg.speed = 0.160772330468;
    msg.speed_units = 11U;
    msg.popup_period = 51693U;
    msg.popup_duration = 25644U;
    msg.flags = 132U;
    msg.custom.assign("XOCPFTHSGDOWYMHTLVIJMIUQFLLVOEHILVJPCZLFKFMCBCXYLADKGQNPCZHBNKRFXDNUOAZTCABCXFSDZRUMBNUNZOQATMKNQJBWQUOVHEPIILEVTOEDJUVLIRQPZODWNFBBXMGSEJHYXRHDPDKBIOXI");

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
    msg.setTimeStamp(0.764702070666);
    msg.setSource(51905U);
    msg.setSourceEntity(227U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.917631865192;
    msg.lon = 0.321896055456;
    msg.z = 0.236321381111;
    msg.z_units = 213U;
    msg.radius = 0.479301699561;
    msg.duration = 45323U;
    msg.speed = 0.208354122337;
    msg.speed_units = 141U;
    msg.popup_period = 47507U;
    msg.popup_duration = 15311U;
    msg.flags = 2U;
    msg.custom.assign("DZUPSFNTHNFXBADFVONRMRSRKSIUOXQEWJSFWBVRYDSGVNSHIZCTHMLLHXBTEUQMPOTOVJWXLTQRQGYCDQLYPEXHXCZVGADOAAZKNBHOVYYDWRETEUCZNQAGKYBHQADVOGNDCEKIFWAAXMRKBNLOEMFKBCTGSUTLCUSCUTNFMLDJFJGPKHPIYIBZJPXUJIGQKOMNJZIJVKYFSACVBGALZFQWLM");

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
    msg.setTimeStamp(0.950049273797);
    msg.setSource(9255U);
    msg.setSourceEntity(47U);
    msg.setDestination(39966U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.126042362536);
    msg.setSource(32119U);
    msg.setSourceEntity(215U);
    msg.setDestination(59618U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.288745712677);
    msg.setSource(65109U);
    msg.setSourceEntity(63U);
    msg.setDestination(54317U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.576827674754);
    msg.setSource(9330U);
    msg.setSourceEntity(149U);
    msg.setDestination(31706U);
    msg.setDestinationEntity(241U);
    msg.timeout = 4499U;
    msg.lat = 0.651675115195;
    msg.lon = 0.357366609339;
    msg.z = 0.203383163469;
    msg.z_units = 26U;
    msg.speed = 0.582400058462;
    msg.speed_units = 183U;
    msg.bearing = 0.554429071634;
    msg.width = 0.326189485688;
    msg.direction = 143U;
    msg.custom.assign("ZZEVVYNTRKNEQKJQLBZNMSJGFAXWDAZIHCWHOHIVPPIETKCVQEFLZALGAHXIFMIXKQRKBJONFPA");

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
    msg.setTimeStamp(0.881916202186);
    msg.setSource(22009U);
    msg.setSourceEntity(13U);
    msg.setDestination(42317U);
    msg.setDestinationEntity(86U);
    msg.timeout = 57708U;
    msg.lat = 0.562805004608;
    msg.lon = 0.436062132299;
    msg.z = 0.838344947975;
    msg.z_units = 6U;
    msg.speed = 0.0255281965789;
    msg.speed_units = 142U;
    msg.bearing = 0.151528925418;
    msg.width = 0.323965444202;
    msg.direction = 72U;
    msg.custom.assign("VQZJEHOTYXQYCCJCXXMZOWLTENLHDCSVROMCWIMPGUCBYAPNNHXETNTKJWGHELSNWHPVULWDIMQSGBKFAIRONVZRMNOVLWTHIMLQVSMFKDKEDMHWZNVFDSURSHLDIJZMFFJIXFUVJSGLQAFEBSGIBOTEGBPHAEUBSAYKFZVQQRLRCQKDMCOVYJAWKXWAIYBBJYOKRX");

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
    msg.setTimeStamp(0.0338778574265);
    msg.setSource(15034U);
    msg.setSourceEntity(194U);
    msg.setDestination(36106U);
    msg.setDestinationEntity(32U);
    msg.timeout = 62799U;
    msg.lat = 0.937890371441;
    msg.lon = 0.866234288433;
    msg.z = 0.430389551197;
    msg.z_units = 0U;
    msg.speed = 0.385472918873;
    msg.speed_units = 21U;
    msg.bearing = 0.0206382776984;
    msg.width = 0.311864052601;
    msg.direction = 238U;
    msg.custom.assign("RDRZMYUWONHCZKULAGFKANAOATTYSVSFBBIRHWBXMLZWRLQKMHFSNQFFKXGFISGZ");

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
    msg.setTimeStamp(0.462946382823);
    msg.setSource(44417U);
    msg.setSourceEntity(75U);
    msg.setDestination(55535U);
    msg.setDestinationEntity(37U);
    msg.op_mode = 100U;
    msg.error_count = 199U;
    msg.error_ents.assign("ZQTKNDNZOPBUVDHKBQJYCHEXTKRDEYICTQISSCALSHZQGFMELOLXHPGFGKGTLIGVFWGYLISMLPOVRKVUXUUFLVEYCWBEWVNYTTZXRVWHSXRSQABSIEAPNFAJPANZQUOKBDSIQDMZJFAYIMPPJJTKXQRUNW");
    msg.maneuver_type = 9896U;
    msg.maneuver_stime = 0.813298726169;
    msg.maneuver_eta = 43511U;
    msg.control_loops = 209177487U;
    msg.flags = 215U;
    msg.last_error.assign("EUAOVCXGTFVCAOTILMZLFIKRKPNRLKESPWABCBGWXXCWVCQIJJMTLRHQFNFNLJKBSBSLOVWBNESZZJDUMQGCLKIOHVJMUVNWAHUESNBGNR");
    msg.last_error_time = 0.914937484524;

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
    msg.setTimeStamp(0.327829910993);
    msg.setSource(20963U);
    msg.setSourceEntity(23U);
    msg.setDestination(48848U);
    msg.setDestinationEntity(128U);
    msg.op_mode = 94U;
    msg.error_count = 126U;
    msg.error_ents.assign("PCIJUYHHXMWIZXOWHMVVZDSAGEHGHSMLAFDRBIAQAYMYQJIQWWATGLGVSXCGXIZGHUVRQLOBCNOURRNDEMZSELKCCSAFBBAJUDPOEVSNZIOXUZUVITNMQVTRHWOODLRMXXENBRMQUGNDEKQITNLENORBXPPSTVDJN");
    msg.maneuver_type = 9378U;
    msg.maneuver_stime = 0.783914052119;
    msg.maneuver_eta = 58258U;
    msg.control_loops = 1064093860U;
    msg.flags = 139U;
    msg.last_error.assign("OUJDJXFJCZQIPITBGAZFTHZHZKXWWYUSGOSEHJLNRZZBUKYBLCYAVGXWGNVWOVJYPEXJQXWRCMPGKSCTNZBPVEMNZKAPSHQWYHDXROULSNKRQEDIBFOBICUSMUASL");
    msg.last_error_time = 0.295547942366;

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
    msg.setTimeStamp(0.832480080341);
    msg.setSource(15499U);
    msg.setSourceEntity(39U);
    msg.setDestination(56027U);
    msg.setDestinationEntity(191U);
    msg.op_mode = 21U;
    msg.error_count = 123U;
    msg.error_ents.assign("QGFJXIPBLXOHSXUYJPSEUXYAJPRHGTFSTWADGKNQDFUUORCVWWABQVXSDJQDMLUYZIK");
    msg.maneuver_type = 35110U;
    msg.maneuver_stime = 0.355961439784;
    msg.maneuver_eta = 30259U;
    msg.control_loops = 2554272856U;
    msg.flags = 90U;
    msg.last_error.assign("DXWSAPVCQHQWFQWSLKGXSAESPDQCHJDENVMZZHOEAOFORZSLPAXUIISACQILKRYXBBCMFBHLTDPJXRJZABDKTNVESHYKPWLJHMDMULBAWCJCUXTGHENGDFSPNGRQ");
    msg.last_error_time = 0.893024774367;

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
    msg.setTimeStamp(0.898935576629);
    msg.setSource(51774U);
    msg.setSourceEntity(218U);
    msg.setDestination(35214U);
    msg.setDestinationEntity(96U);
    msg.type = 36U;
    msg.request_id = 22843U;
    msg.command = 104U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 43309U;
    tmp_msg_0.lat = 0.238464863913;
    tmp_msg_0.lon = 0.238038681229;
    tmp_msg_0.z = 0.531122913749;
    tmp_msg_0.z_units = 215U;
    tmp_msg_0.speed = 0.451080520939;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.custom.assign("ALHTSRTRTPJUOYJDBGBWLLWSRIZGGEGIQCBNDJXLEIHYSWUJFQBQDYNJYVZQNNBIDPWTLVXFMJKGAMOHSCLMUOXKFYZICAYQBRFPSGMP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62108U;
    msg.info.assign("OJKPRGEHBETBTKGLTLWZVISPSOBYHBIHXYHWQIOUKYTZYOJAELBGKUQHNLANVTGAYBCJJWAYFCISFHMJXCJELSXPSONUVVMCPJKVXDXPWACDSZCNDOQBURRQWMGUOSKDRTMHMLHZEAYRVGZDTPRDRWEUWKGUWIBFJNDSN");

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
    msg.setTimeStamp(0.788214416112);
    msg.setSource(13144U);
    msg.setSourceEntity(10U);
    msg.setDestination(65391U);
    msg.setDestinationEntity(254U);
    msg.type = 186U;
    msg.request_id = 8794U;
    msg.command = 155U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 30909U;
    tmp_msg_0.lat = 0.71795974514;
    tmp_msg_0.lon = 0.0614885415013;
    tmp_msg_0.z = 0.720343943728;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.521402907829;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.custom.assign("FYOKKCEXXZPNXMEJFZFXMIRLULKUNV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34296U;
    msg.info.assign("XZILMTVJZAILQWFRLHWTIKNMHCVNFYPDPYTVHSMEYSKTGBLOTKUNTJIPSGUOTBUEATEWKXIZBOSPDYSCKOALUJDFYSWVGQBETO");

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
    msg.setTimeStamp(0.200718941113);
    msg.setSource(55496U);
    msg.setSourceEntity(15U);
    msg.setDestination(9389U);
    msg.setDestinationEntity(126U);
    msg.type = 254U;
    msg.request_id = 50373U;
    msg.command = 60U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.0398411914503;
    tmp_msg_0.lon = 0.138496489811;
    tmp_msg_0.z = 0.903694478953;
    tmp_msg_0.z_units = 143U;
    tmp_msg_0.speed = 0.112837317635;
    tmp_msg_0.speed_units = 167U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 37792U;
    tmp_tmp_msg_0_0.off_x = 0.725885754165;
    tmp_tmp_msg_0_0.off_y = 0.310431224058;
    tmp_tmp_msg_0_0.off_z = 0.784432902944;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.755742049256;
    tmp_msg_0.custom.assign("VFGCEHKHNBRDKXUCIXNURHQSTLMDGMOUXQEWNPTKTECHSDGIXBYNIACEPQWEOGQIWOPLDCZBOJBABYFESXRSEHLCPBGAVMDFKYKHIGWUADKADJIQPUQROMCLPZRBQJYNAGNNVDY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12855U;
    msg.info.assign("XTCRKDOTEPNIMXJLYETDENOVLBOSSSPHIZQXNRTPULCSUUYXLXCZJHFDXZSYBURFENSKIRTGXVXWQQRXZHHAQFILDTTLABBDJVEGATAWBVGIFMGAESGKGYYOKYWHWURZWLWDONMDMZQAQZGVAPQJFCPKBRWFYVMEAMBFFRNUHKWNGFOJGCMKEKVIJPUJZICOKGVICLEPADJIVMHUDBVNHOQKCYZNHWYHJSXMMSTFBOPUJCWURRDCQSLL");

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
    msg.setTimeStamp(0.148725422228);
    msg.setSource(8726U);
    msg.setSourceEntity(253U);
    msg.setDestination(36948U);
    msg.setDestinationEntity(71U);
    msg.command = 178U;
    msg.entities.assign("ZMXNFXMLKDTHFOCPNFIVYYPNSJANADOHAKEGSJDTGHMSLEYAIBWVIDHKNWLFGARMIETPBMUWXCZSDFFNWJVEQYYZDMKMPYRBVCOQYKVODOJLUROJRSWHPUCGMIJZCVPRIHSIOZ");

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
    msg.setTimeStamp(0.925984838466);
    msg.setSource(23977U);
    msg.setSourceEntity(215U);
    msg.setDestination(5988U);
    msg.setDestinationEntity(198U);
    msg.command = 250U;
    msg.entities.assign("EKYTKQUUQBLPFKBAHKOYCNNTCOKBZDMIHZAZJTVRXWASGOZELFHFEKXNEAITWJZHHMGEQRWPSDY");

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
    msg.setTimeStamp(0.556983380167);
    msg.setSource(43021U);
    msg.setSourceEntity(29U);
    msg.setDestination(26543U);
    msg.setDestinationEntity(92U);
    msg.command = 95U;
    msg.entities.assign("JZUEVHRLFWRDZSPZXMHTGNKFUCNMXUQNNKXIWSBXADXVQSQTHAVJKXCHTWOYRZMYUXEEGRVSSJFHSJGZRFQTWYTAZLDCNFPWQZKGKPCGLRBQBDAFVJPCMFWDBGABULIRZHNYR");

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
    msg.setTimeStamp(0.512839165313);
    msg.setSource(3481U);
    msg.setSourceEntity(208U);
    msg.setDestination(1253U);
    msg.setDestinationEntity(36U);
    msg.mcount = 235U;
    msg.mnames.assign("OTTQTEMRYLXPAUUGXFOCENFOGOKOIUJDDTZAVWQXUGMBVDHQSZWPFQLBMOUOWMGYZILHRMYEDSXMRRTYNDQSLTRG");
    msg.ecount = 159U;
    msg.enames.assign("IYEGMXMPEWOBPPRROMWYHZTACTSHXFZBFOHJDIHGAKRHDHWUZLALVNFAQZGQLYXANBMKXTANMXSRMEWJOTTICYBHOSQXCPYLLBODTZECRQYGPSWQGNJGPTZVCJGPBEKVQUYVGZDNNLIUVOSBUGWYYOTIYRNJKDVCKXTRUPRLDSJXHSUSQOACIBVLQAIJCWWZJKJM");
    msg.ccount = 167U;
    msg.cnames.assign("JSVXENORRENUZXKWYHZXZDUFJZYIMGJCILQKFRGIQPMJRHPEVDSZYUNMWLYVSBFNCGASOL");
    msg.last_error.assign("KCCBBOYXCSYEUGUGBVZWECHLCHAAVRKYYMWAASKHJZYEBVOFZYDXIXGZOZQSQVLUCJCGERHYFAJIGQEGONRQBVCMOCMNBKTQTRDCRSNQJBTIWZOUPZPQWXEJGTIKPNZOAEXNKZDBDMVSRLXTLMOWPTBLDAHKUILPINGVDPXHEMTDDKLBHWXWUA");
    msg.last_error_time = 0.0618471635181;

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
    msg.setTimeStamp(0.255013790301);
    msg.setSource(16512U);
    msg.setSourceEntity(49U);
    msg.setDestination(27609U);
    msg.setDestinationEntity(135U);
    msg.mcount = 39U;
    msg.mnames.assign("EXPBBHUIYGMKKOAIPJSSPWTHLGZJXRLNARCARTLXKZFSPQLULZFYMPDAZBVZUFVBWEIWSUMCFQKUVQFWLJRKHIXJOXJVFCUQYDNESUWYMHHMDNIGTVDAVMNMRBXZAINREXESLPGYECYJCDNWJSIHIXVKBESZCGAWAPNPKUQIQOGT");
    msg.ecount = 190U;
    msg.enames.assign("QQUIOHCENFYHOZIOGXBVEJZTJGZYCRIUKAOIYJNKNBWCZLPHFFMBFFNLTXRIVTKDTELCDJQASAPLNPAQPSSYDYBXRXPLFWMSQAAFOMJVYVNRREKOUDPYEGYZCDNEQASQZUUTVJHHVMXCFVMEZILAGNGFDSTTPODNGGUKACWUELYPSMEKOBPBGDHJELCBDMOSKQTZYCKHXJIVQBXCUAIJLNRRRQWOHSWWPKHDMSVUWGZI");
    msg.ccount = 54U;
    msg.cnames.assign("DYKLJBUEHXRABWLPGMVNSWVHJHFOEV");
    msg.last_error.assign("SWZTLDTZAHOYTYEQAUFABTORUIYN");
    msg.last_error_time = 0.0274839931467;

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
    msg.setTimeStamp(0.477863078159);
    msg.setSource(19293U);
    msg.setSourceEntity(129U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(5U);
    msg.mcount = 233U;
    msg.mnames.assign("LHPBOUDGYWXKQJQTSKQKYMEGDKXEDXRARFBSTPAJQXNRNLUJYSRNOUWFIOJUFWMPHIVBFFFAOUCGNIAEKBEYHOKGVZLATQZCPSXEBKDXUDVIVSYWNTDVSMEEGIVCQHKHYL");
    msg.ecount = 130U;
    msg.enames.assign("MXEEMSWGYLVTIZCOOUJQNDDALUBZOQQAUFTEAPHASFSKMYEAVGBQJNXCPSFPKGSRRZZDWFNYNVWFFCWTPWPIQPOGOLSUQILTVVCDHKRZFSDNXOLMHHBEOGYBXBIIDHDJZWPSDJXLNJEUTCUEREBIGHJRJVEWXPNCKPXVBDKWLCKM");
    msg.ccount = 118U;
    msg.cnames.assign("MBTBPPUQWAAGIHCESBFEXQCEHLMUGPNKJLMOOWUBHWVJSDJAWMRTFHMXVTOFGWDOYOJGZGIJPBUDYSSRFSXRBYVONHBPFTAAKTSLQQJLRIZPZJLUTNXGPSOFFJUYPKIMBTXDDSSCLDZVIWNRFAJAIKLICNZNDHBUANVQXZGUNFMJNECCZKCBZWEVGQXSYPFKAOZIIUVLTREHEYQWXLGCVQCXEYVHZOUDQTKKIPDQWREXYCKTGNYD");
    msg.last_error.assign("AJZJPMWSRJMOFWMSBIIUVLZVMXWKPEXHQGZHNJBIFWYIGPRVBTWNOWRAHCKUZRFDLNCEQOVYBPCUXWSLRYNKTOTXFGJJSGUNCCIFDHFKAMAVNDOXVUFFQARZEQDFWSNBMJJSGOVHYKIPGDQBEENHKYUTDDLWQBHIHXIABEKYLFQXPZGPATWXHORQZTLVPOZLSMDCZCSAUBUPQMSATCAGILTVOCRQMELBDGJLJ");
    msg.last_error_time = 0.207841543647;

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
    msg.setTimeStamp(0.793321992157);
    msg.setSource(20311U);
    msg.setSourceEntity(126U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(85U);
    msg.mask = 154U;
    msg.max_depth = 0.585600910023;
    msg.min_altitude = 0.429536954905;
    msg.max_altitude = 0.640141873445;
    msg.min_speed = 0.991313632065;
    msg.max_speed = 0.501844850545;
    msg.max_vrate = 0.837937787155;
    msg.lat = 0.376258231132;
    msg.lon = 0.466028450796;
    msg.orientation = 0.267401707769;
    msg.width = 0.276967262286;
    msg.length = 0.935762314932;

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
    msg.setTimeStamp(0.790590757404);
    msg.setSource(19483U);
    msg.setSourceEntity(254U);
    msg.setDestination(41094U);
    msg.setDestinationEntity(7U);
    msg.mask = 196U;
    msg.max_depth = 0.624148149096;
    msg.min_altitude = 0.235028946504;
    msg.max_altitude = 0.765102752106;
    msg.min_speed = 0.54635896381;
    msg.max_speed = 0.358617108238;
    msg.max_vrate = 0.581679644733;
    msg.lat = 0.51981533082;
    msg.lon = 0.341263925358;
    msg.orientation = 0.356046252118;
    msg.width = 0.0172726861616;
    msg.length = 0.391980491139;

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
    msg.setTimeStamp(0.984500571902);
    msg.setSource(21060U);
    msg.setSourceEntity(185U);
    msg.setDestination(22917U);
    msg.setDestinationEntity(90U);
    msg.mask = 240U;
    msg.max_depth = 0.0693390967674;
    msg.min_altitude = 0.290483497923;
    msg.max_altitude = 0.732391352558;
    msg.min_speed = 0.615724130451;
    msg.max_speed = 0.799853041076;
    msg.max_vrate = 0.480812676017;
    msg.lat = 0.663780919551;
    msg.lon = 0.267196652695;
    msg.orientation = 0.0140925356642;
    msg.width = 0.222646740859;
    msg.length = 0.920992712074;

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
    msg.setTimeStamp(0.153614103743);
    msg.setSource(15564U);
    msg.setSourceEntity(53U);
    msg.setDestination(48734U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.48458626253);
    msg.setSource(38932U);
    msg.setSourceEntity(115U);
    msg.setDestination(48866U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.65302245331);
    msg.setSource(18909U);
    msg.setSourceEntity(39U);
    msg.setDestination(6383U);
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
    msg.setTimeStamp(0.7470863215);
    msg.setSource(51587U);
    msg.setSourceEntity(132U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(71U);
    msg.duration = 43152U;

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
    msg.setTimeStamp(0.494885550802);
    msg.setSource(24719U);
    msg.setSourceEntity(59U);
    msg.setDestination(64027U);
    msg.setDestinationEntity(10U);
    msg.duration = 9678U;

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
    msg.setTimeStamp(0.0507400980581);
    msg.setSource(62148U);
    msg.setSourceEntity(50U);
    msg.setDestination(46385U);
    msg.setDestinationEntity(13U);
    msg.duration = 59407U;

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
    msg.setTimeStamp(0.398425983378);
    msg.setSource(31518U);
    msg.setSourceEntity(13U);
    msg.setDestination(41936U);
    msg.setDestinationEntity(29U);
    msg.enable = 167U;
    msg.mask = 1214045346U;
    msg.scope_ref = 497929078U;

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
    msg.setTimeStamp(0.601222120434);
    msg.setSource(6130U);
    msg.setSourceEntity(147U);
    msg.setDestination(61220U);
    msg.setDestinationEntity(210U);
    msg.enable = 118U;
    msg.mask = 3509755794U;
    msg.scope_ref = 2145692781U;

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
    msg.setTimeStamp(0.755819010704);
    msg.setSource(60051U);
    msg.setSourceEntity(12U);
    msg.setDestination(6697U);
    msg.setDestinationEntity(77U);
    msg.enable = 138U;
    msg.mask = 4259247012U;
    msg.scope_ref = 912960299U;

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
    msg.setTimeStamp(0.18034827147);
    msg.setSource(35196U);
    msg.setSourceEntity(189U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(230U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.538401398125);
    msg.setSource(12529U);
    msg.setSourceEntity(237U);
    msg.setDestination(13170U);
    msg.setDestinationEntity(150U);
    msg.medium = 71U;

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
    msg.setTimeStamp(0.836349062142);
    msg.setSource(16927U);
    msg.setSourceEntity(69U);
    msg.setDestination(18053U);
    msg.setDestinationEntity(250U);
    msg.medium = 125U;

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
    msg.setTimeStamp(0.300712670698);
    msg.setSource(32417U);
    msg.setSourceEntity(17U);
    msg.setDestination(4936U);
    msg.setDestinationEntity(82U);
    msg.value = 0.390963779197;
    msg.type = 124U;

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
    msg.setTimeStamp(0.294847897376);
    msg.setSource(63996U);
    msg.setSourceEntity(31U);
    msg.setDestination(24699U);
    msg.setDestinationEntity(135U);
    msg.value = 0.765338222821;
    msg.type = 252U;

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
    msg.setTimeStamp(0.142879479498);
    msg.setSource(56405U);
    msg.setSourceEntity(87U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(53U);
    msg.value = 0.184042747408;
    msg.type = 55U;

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
    msg.setTimeStamp(0.286557915074);
    msg.setSource(8360U);
    msg.setSourceEntity(88U);
    msg.setDestination(17818U);
    msg.setDestinationEntity(61U);
    msg.possimerr = 0.250354056303;
    msg.converg = 0.533888970412;
    msg.turbulence = 0.585460233433;
    msg.possimmon = 221U;
    msg.commmon = 127U;
    msg.convergmon = 87U;

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
    msg.setTimeStamp(0.844071831065);
    msg.setSource(26341U);
    msg.setSourceEntity(131U);
    msg.setDestination(58665U);
    msg.setDestinationEntity(123U);
    msg.possimerr = 0.0623198476068;
    msg.converg = 0.752029264407;
    msg.turbulence = 0.973312743651;
    msg.possimmon = 249U;
    msg.commmon = 221U;
    msg.convergmon = 40U;

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
    msg.setTimeStamp(0.809761986331);
    msg.setSource(20821U);
    msg.setSourceEntity(2U);
    msg.setDestination(2208U);
    msg.setDestinationEntity(253U);
    msg.possimerr = 0.184056437868;
    msg.converg = 0.33056321098;
    msg.turbulence = 0.880482602735;
    msg.possimmon = 236U;
    msg.commmon = 47U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.830418274436);
    msg.setSource(16095U);
    msg.setSourceEntity(56U);
    msg.setDestination(36038U);
    msg.setDestinationEntity(149U);
    msg.autonomy = 125U;
    msg.mode.assign("HRMUYIHMMEDNTSVOXWXEUVFFPOQHCJPZROHYBDFVQCKWEBENDLGKTEPNJWMJZJGTILSDYODDGTFDJROEHZDKNIZKPELLVFRETRQQMYSDIPGQLAMTGPJBLQBWZHIJBOVBMBS");

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
    msg.setTimeStamp(0.53752838394);
    msg.setSource(21048U);
    msg.setSourceEntity(3U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(190U);
    msg.autonomy = 132U;
    msg.mode.assign("FKRMXOYMEHZGWSVJSBI");

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
    msg.setTimeStamp(0.154652154271);
    msg.setSource(17708U);
    msg.setSourceEntity(208U);
    msg.setDestination(52788U);
    msg.setDestinationEntity(143U);
    msg.autonomy = 100U;
    msg.mode.assign("JJPOEOMKMYKWSVTHJZHUPLRVRMFLZNYFMJBKIZNEKUEGMEGBNERSCIQNUKATPISRVFQQZGIWRWVZKWUTRPVDKMIXGEZALLGHOOOLYGSTSFQCUJOFXVZHQNLLNPEBTTACCKUVSMYHWADXGEBNTWSZXQFRFCJPJTYHAXLQUIAPAOBAFNEDYSQHDDCORCTFULADMNUKYBZJOHAGINSOWVRQMBSCIJTJXQBHRYDIBMZGXXWXWFEC");

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
    msg.setTimeStamp(0.0331145805489);
    msg.setSource(61285U);
    msg.setSourceEntity(240U);
    msg.setDestination(31389U);
    msg.setDestinationEntity(164U);
    msg.type = 161U;
    msg.op = 78U;
    msg.possimerr = 0.526835903736;
    msg.converg = 0.844082211147;
    msg.turbulence = 0.953989327826;
    msg.possimmon = 24U;
    msg.commmon = 236U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.118176021297);
    msg.setSource(55891U);
    msg.setSourceEntity(130U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(111U);
    msg.type = 64U;
    msg.op = 214U;
    msg.possimerr = 0.451603251328;
    msg.converg = 0.269606716605;
    msg.turbulence = 0.0419465352708;
    msg.possimmon = 140U;
    msg.commmon = 158U;
    msg.convergmon = 230U;

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
    msg.setTimeStamp(0.0094700095386);
    msg.setSource(28630U);
    msg.setSourceEntity(154U);
    msg.setDestination(58978U);
    msg.setDestinationEntity(20U);
    msg.type = 152U;
    msg.op = 100U;
    msg.possimerr = 0.895361083404;
    msg.converg = 0.0899152061623;
    msg.turbulence = 0.108699721965;
    msg.possimmon = 228U;
    msg.commmon = 244U;
    msg.convergmon = 93U;

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
    msg.setTimeStamp(0.716093628359);
    msg.setSource(19490U);
    msg.setSourceEntity(2U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(145U);
    msg.op = 0U;
    msg.comm_interface = 158U;
    msg.period = 20153U;
    msg.sys_dst.assign("DCJQBRMKXVUKQTPBCUSYXPAYWDAYDWJNNT");

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
    msg.setTimeStamp(0.61881362361);
    msg.setSource(65506U);
    msg.setSourceEntity(126U);
    msg.setDestination(34702U);
    msg.setDestinationEntity(87U);
    msg.op = 105U;
    msg.comm_interface = 250U;
    msg.period = 21905U;
    msg.sys_dst.assign("NLSWBWFWMQJJMIJVQHUKIPCOJQNTGDQRQESGLBURZOVWLSUZANZRYKGYPUTXVODEIITVNFDCWPH");

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
    msg.setTimeStamp(0.816797015458);
    msg.setSource(42586U);
    msg.setSourceEntity(13U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(116U);
    msg.op = 187U;
    msg.comm_interface = 32U;
    msg.period = 57836U;
    msg.sys_dst.assign("ZUYHJSBPDEZXHAUWSRFWMLBNKONDJCNEBLUDYLHAHPIZUKNATXEJHYDOMPNNJBOOAEMJGILRXSAMKAKXYG");

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
    msg.setTimeStamp(0.980241787859);
    msg.setSource(18502U);
    msg.setSourceEntity(188U);
    msg.setDestination(46147U);
    msg.setDestinationEntity(42U);
    msg.stime = 3895782344U;
    msg.latitude = 0.286540103896;
    msg.longitude = 0.588895336127;
    msg.altitude = 21405U;
    msg.depth = 63042U;
    msg.heading = 38311U;
    msg.speed = -2052;
    msg.fuel = -7;
    msg.exec_state = -119;
    msg.plan_checksum = 26872U;

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
    msg.setTimeStamp(0.29083513747);
    msg.setSource(7934U);
    msg.setSourceEntity(56U);
    msg.setDestination(59722U);
    msg.setDestinationEntity(109U);
    msg.stime = 3600586088U;
    msg.latitude = 0.251971276565;
    msg.longitude = 0.542592288004;
    msg.altitude = 54739U;
    msg.depth = 22937U;
    msg.heading = 19717U;
    msg.speed = 7671;
    msg.fuel = -101;
    msg.exec_state = 66;
    msg.plan_checksum = 62910U;

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
    msg.setTimeStamp(0.972792884532);
    msg.setSource(42980U);
    msg.setSourceEntity(71U);
    msg.setDestination(52124U);
    msg.setDestinationEntity(135U);
    msg.stime = 2381396241U;
    msg.latitude = 0.78199105128;
    msg.longitude = 0.973330031418;
    msg.altitude = 38647U;
    msg.depth = 16113U;
    msg.heading = 40164U;
    msg.speed = -908;
    msg.fuel = -102;
    msg.exec_state = 2;
    msg.plan_checksum = 29698U;

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
    msg.setTimeStamp(0.288813582483);
    msg.setSource(45956U);
    msg.setSourceEntity(123U);
    msg.setDestination(39411U);
    msg.setDestinationEntity(142U);
    msg.req_id = 60842U;
    msg.comm_mean = 210U;
    msg.destination.assign("AGJBZTEFOJVLWYFOWDUHKBEXTBXTKHEVCNAVLJAOEDZRJHZBGAOGAWNDQLLBZPPSWMKGOYBPQHHYHKIQQYRABFFNUNNJSCBJEGXNAXVORYUYLDTHWLIFDCPHMZGSAQDWRJXCLUDZVTRQWGSX");
    msg.deadline = 0.960550707863;
    msg.range = 0.578129165536;
    msg.data_mode = 90U;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 175U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JFTCWDZOIRFVITOSAGOIQPWZAYOCGVYZTAROXJKVYSXGEZXROAVEBUBJPOZBHDFKEKWIALRRKVHCPSCMPKLZEWUMXXOIJUQXFULKCEQXPJGOEAPBYLANQBSVLJRVWRUCRHTJSHZUXDQKFJXTSHZICASFIQTUWQMHNUFLSHEFYMFSQKVKBLHN");
    const char tmp_msg_1[] = {92, -43, 37, -23, -121, -8, -36, 104, -97, -116, 86, -71, 92, 21, 50, 61, -53, -82, 9, 92, -10, 114, -124, 114};
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
    msg.setTimeStamp(0.831454164073);
    msg.setSource(5137U);
    msg.setSourceEntity(108U);
    msg.setDestination(33798U);
    msg.setDestinationEntity(220U);
    msg.req_id = 46510U;
    msg.comm_mean = 17U;
    msg.destination.assign("CJTQBOZGARWQJJPLSLTNBXEHZXGARQAUXSZDVAWTMOXKLLDWHEJGCDBUTSVQOAMJIZMPEREJTJSNHERFCUIKUEAZDKWJUIYFCMMYGSGYHEYPDVTBXJHYSFBHTEMGWFHGVXNXMXKUNLPGINKAWCSTGFYRKQG");
    msg.deadline = 0.184155120423;
    msg.range = 0.809450102489;
    msg.data_mode = 91U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.983324058584;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NWFLMGZMNCYGBURWJOJUIGYMYGLDZAXRILJBGBHHFLZCWQSCYXHHUZKSGUMADVVQCBUOJGCXJPIFWAHEMZBZQOIOTHYERTETMLZWLIFEAFDSKRMMXVANKPVNCVVSUENDLTLLSDKRATYDVDDQOPKEOSPTFJMEIGJARPOAAUICLUTNXBJKQPEICSCNKPXQTRYYAVWSVQJNTTUKSXRBJPFHQDNXUVXZWFNWR");
    const char tmp_msg_1[] = {-118, -119, 15, -112, 28, -34, -43, 116, 25, -11, 9, -21, 38, -82, 58, 97, -38, -77, 34, 72, -82, 43, -59, 2, 46, -18, 65, -126, -26, -64, -95, -118, 15, 1, -37, 84, -53, 68, -35, 1, -5, 86, 83, -1, -7, -126, 32, 9, 12, 93, 44, -32, 71, -117, -26, 24, -32, -119, -70, -123, 75, -109, -70, -17, 29, 33, -48, -69, 22, 23, 92, 42, -78, 115, -101, -7, -95, 55, 114, 125, -86, -41, 44, -74, 105, 64, -125, 123, 35, -46, -53, -62, -85, 124, 24, -2, 94, 106, -23, -58, -100, -32, 105, -58, -118, 62, -27, -75, -13, 98, -20, 123, -12, 92, 16, 61, -4, -48, 114, 36, 38, -15, -10, 93, -39, 98, -71, -128, -108, 109, -48, 72, 63, 30, 10, 73, -31, -124, -12, -96, 61, -82, -27, 14, -24, -80, -54, -15, 85, 43, 21, -53, 117, -90, -23, 57, 16, -39, -96, 66, 58, -36, 104, -33, -3, 14, -127, -46, -122, 61, -61, 56, 107, 50, 72, -21, 15, 3, 103, 29, -115, 120, -17, 78, 109, 24, 46, 46, -63, -45, 9, 7, -49, 29, -44, -119};
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
    msg.setTimeStamp(0.153547452378);
    msg.setSource(6875U);
    msg.setSourceEntity(64U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(229U);
    msg.req_id = 33461U;
    msg.comm_mean = 116U;
    msg.destination.assign("IAWTXCKGDZVLXJPBEJYHHYMLSWJBFMWGLBVEUQEKHDVVTGRXRWXDCRBRNMRTPGAUHFYXREJYKWNGZOAVASMQHECXUQN");
    msg.deadline = 0.459340477569;
    msg.range = 0.509406332595;
    msg.data_mode = 172U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("HPJRTEOAUJPKNPBVXIWFXTGQDPSJVDIDIDQPVRSCWSXIOJZKKPIMPZUDOYVUPZGTNKOOYZTFCACQYEBVXQAJIGQEBSHFYU");
    tmp_msg_0.op = 1U;
    tmp_msg_0.lat = 0.0144449619121;
    tmp_msg_0.lon = 0.2316434427;
    tmp_msg_0.height = 0.899767660319;
    tmp_msg_0.x = 0.347032529797;
    tmp_msg_0.y = 0.970985332934;
    tmp_msg_0.z = 0.136780430156;
    tmp_msg_0.phi = 0.923890201737;
    tmp_msg_0.theta = 0.0710558693603;
    tmp_msg_0.psi = 0.936812898226;
    tmp_msg_0.vx = 0.0909546585254;
    tmp_msg_0.vy = 0.487363538956;
    tmp_msg_0.vz = 0.242971783766;
    tmp_msg_0.p = 0.477089756969;
    tmp_msg_0.q = 0.378039524443;
    tmp_msg_0.r = 0.899848041388;
    tmp_msg_0.svx = 0.383252542893;
    tmp_msg_0.svy = 0.485236174349;
    tmp_msg_0.svz = 0.561627165428;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YVDRJLGWYVBTEIUFEXZMKZRHJRPIASRFUJTRIEMQHUSAXQDIXJTFUNDQTXHSTDLHNGZUCWRTLDNGEYBECHRNQGVWCKKFWYESCBNNDKWCXCKZSDKCVJMMOGPJFYCUILZOPAMHANOTLTUYOPSUKQWDCNJEFAROXWZKA");
    const char tmp_msg_1[] = {29, 94, -103, -31, -55, 24, -14, -69, -97, 11, 111, -81, -23, -12, 23, -34, -95, -72, 11, -52, 43, 83, 36, 125, -32, 48, 48, -40, -6, -5, 57, -47, -75, -45, 20, 89, -97, 57, 80, -63, -58, 58, 108, 0, 72, -26, -7, -25, -121, 81, 42, -74, -63, 87, -56, 77, -7, 21, 101, 88, 122, -96, -1, -43, -78, 51, -93, -111, 19, -53, 117, 99, 120, -116, 74, 110, -127, 118, -88, 105, 59, 108, -38, 9, -48, 101, 94, -21, 14, 58, -109, 14, -109, -86, 56, 25, 41, 17, -126, -109, 4, -124, -16, -69, -23, 78};
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
    msg.setTimeStamp(0.758520073588);
    msg.setSource(63504U);
    msg.setSourceEntity(54U);
    msg.setDestination(58113U);
    msg.setDestinationEntity(203U);
    msg.req_id = 51579U;
    msg.status = 248U;
    msg.range = 0.168901527984;
    msg.info.assign("AATBRWKAHBGNHOSSZLPEFBRWLFTKENNVUZMGNBCQRMXDLTGRXFWTUORTNSOOIIDTBJVIVUXQABFUYWBSUHQDCECLQDBWXCXQUPXSRDKWC");

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
    msg.setTimeStamp(0.483915885727);
    msg.setSource(11901U);
    msg.setSourceEntity(23U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(191U);
    msg.req_id = 44252U;
    msg.status = 186U;
    msg.range = 0.40028486912;
    msg.info.assign("KCCQYUHVTUKHFHGRPHNYPZJLWOLDDYKYYNXDGGV");

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
    msg.setTimeStamp(0.31805256477);
    msg.setSource(15549U);
    msg.setSourceEntity(165U);
    msg.setDestination(13387U);
    msg.setDestinationEntity(103U);
    msg.req_id = 48929U;
    msg.status = 177U;
    msg.range = 0.193784595472;
    msg.info.assign("TEGRVYAUXPYXPQDYBCODZNSZLBHCXKNOBUFXREBCFCMAXOHUYYIADFAOXRUVFJYMQVSUBEFQKWPIYJNMJFHWSATQLVGXVTRLZSJAGTVRPTNUDECZNAOPSJLKPQZMDOPHHEBNRUDMWNPIJRLKHMLAAOZCPNZEGJSTWTELPSTWNGMFZZIKWSLBYQFFEBUCUKEGIUQQKRGOCDRKVDQ");

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
    msg.setTimeStamp(0.683233376689);
    msg.setSource(61875U);
    msg.setSourceEntity(75U);
    msg.setDestination(60773U);
    msg.setDestinationEntity(135U);
    msg.req_id = 58700U;
    msg.destination.assign("BLEETRSEHFRTBFZGYNXTOHSZJIKQVKFTXQMZCUUFCKJUPAQAUXVAVIHYDCNPWEFXQMCVPZDNLKTPOLUXBXAFYBZNBBLMCUXQOCDOSGLZGOIYQSJJUVSMPPBRGLQZAATKJEYSKRMYDKYPRSLAWTJJPEHZWNFEKRGMIIDDOHYZXVRSIOLAROCNWVQGTBWQWZDMMVFMUIOIEIXKTHJARGNGXWSFL");
    msg.timeout = 0.665427793192;
    msg.sms_text.assign("MOUDAHIBYIJMNLEMHDEGUHGFXOLYCLDEJKXFDOUWPJVBAHZR");

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
    msg.setTimeStamp(0.841098214891);
    msg.setSource(33316U);
    msg.setSourceEntity(250U);
    msg.setDestination(37766U);
    msg.setDestinationEntity(105U);
    msg.req_id = 45811U;
    msg.destination.assign("EHYYWJCHTEPDILOTZHICNXNVWSSLKQQUPXDYSAKBFVHZNXMNKOEYZUFRWVXKBLFIAZQVQCGGGXOBROJROSAPCBZDVTKLBUWPWDKOWALNWLBRXQIXYYQQPTDARNRTSQELDFFJFLGBBIFCEAIRJTRIFNJAZRNMYSKLPZRDMXKQLMPNIOUKMMEVXAZJSEQMJBIUGDHECZFBWMXCGSMTOUEAGGIDVOHTHFSWGSHTVOJ");
    msg.timeout = 0.897207155466;
    msg.sms_text.assign("UYFEJTLFNVWBOFGIXZWCRRXMRTIHLUMXBMVEYQLQJXUEODNMAWGHOTMOYEESMPAGCQKIUPIJSVJGSFTIVLDUVXPGAHEAQPWGFOJHKHNAFDEKFDBXFJHPHOWGWF");

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
    msg.setTimeStamp(0.609673153382);
    msg.setSource(65012U);
    msg.setSourceEntity(84U);
    msg.setDestination(16787U);
    msg.setDestinationEntity(4U);
    msg.req_id = 29022U;
    msg.destination.assign("ZXUXQSWFEXQGQMLIWZPIKUXNOJFZPGSCTDEVPWYEHCSOJLTAFKBXDHLOCIFNSBAYXPKBCPHQAZXQCYTYHTDXZKFUDHWNDUONLTGAUGVMIVMUGYWOWPRTIIPTRHEKXWSBMLDVDJKYSQFAARMALAYVVLKKZGSE");
    msg.timeout = 0.253886473401;
    msg.sms_text.assign("XYPVDNWVRQFRAMQLBRLUVQWGFJQOCGGLSJAGQCCKKAOZOKBAIMYSJOUFOXDEXFNEUMLZKDWDWRTSTYNROKXNNXVFZEEPRITKTAMPDSCVYZXAWTUPAGDIKEBTWOCQERRYDKEIGEQPHJBBYPODPPHNHVKLXZIMKZBIMVSXTZQSLQJBIURDSXMQCYHVPXJNNFBRBTSLHUECGJHWFOADICNJCVWTFFLUAUVTZMSLAGMYFWHH");

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
    msg.setTimeStamp(0.980908337672);
    msg.setSource(48412U);
    msg.setSourceEntity(231U);
    msg.setDestination(42504U);
    msg.setDestinationEntity(13U);
    msg.req_id = 24612U;
    msg.status = 224U;
    msg.info.assign("CKDANJHVELEXAHUZHELZLKJYPOVTBLKHGNTXJDUASYTDGRCRVRPXWOTQCFGTJKSQXQSQUSECLEBYCHMELQFYHKLLJBBLERKEMDWITGOVANFPFIQRFOPZMIHUQ");

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
    msg.setTimeStamp(0.875492031158);
    msg.setSource(44325U);
    msg.setSourceEntity(48U);
    msg.setDestination(888U);
    msg.setDestinationEntity(190U);
    msg.req_id = 51146U;
    msg.status = 90U;
    msg.info.assign("SRKZYZWUCKHBZLUHOHTRCQEUTOPTNRXOMCLIEBNKNCIMVEMXKYOFQQREFGLYGKVDVGEFTGMLWGSYKOSJAPXZNHKLONYBILBEYHVPHDTJJFIVTIBEHJMIAXJYKRXBPMTFFWRIIDQFLOLCRJCWVNRAASJLYBGPUEDRJXPMQRDSVDQWUXONQMJAEOGAWNPQYTCFD");

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
    msg.setTimeStamp(0.800027179662);
    msg.setSource(43632U);
    msg.setSourceEntity(148U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(12U);
    msg.req_id = 55213U;
    msg.status = 21U;
    msg.info.assign("XFQCLZNUBJEQPFPIOPKHYMCHCABRKAKWLEUGGTKJEKMEMBDYXHUSJLIZLTEYGYAOUTWXVPHQAVSZWEODRTFOMZQANTTLHIKJGVFJDCBSTEUGJIRGLFYSNABFWJOTMWGAXALDNQOOIKCSDHNWBXHNIPIEJSYLWIROPMZXGZHDRJDVZLNYVVWCJBXMCDPSQEPBWASICUPDKXUUBMKVZFRVRXGWKNLTQAZYQSFYYUNEPHBRCSF");

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
    msg.setTimeStamp(0.782102867847);
    msg.setSource(42809U);
    msg.setSourceEntity(142U);
    msg.setDestination(47981U);
    msg.setDestinationEntity(181U);
    msg.state = 222U;

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
    msg.setTimeStamp(0.178993198515);
    msg.setSource(60482U);
    msg.setSourceEntity(55U);
    msg.setDestination(45235U);
    msg.setDestinationEntity(226U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.0991498308221);
    msg.setSource(25266U);
    msg.setSourceEntity(217U);
    msg.setDestination(63789U);
    msg.setDestinationEntity(235U);
    msg.state = 132U;

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
    msg.setTimeStamp(0.585039116258);
    msg.setSource(49343U);
    msg.setSourceEntity(187U);
    msg.setDestination(43291U);
    msg.setDestinationEntity(0U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.966342707193);
    msg.setSource(13049U);
    msg.setSourceEntity(184U);
    msg.setDestination(9517U);
    msg.setDestinationEntity(3U);
    msg.state = 118U;

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
    msg.setTimeStamp(0.400222399905);
    msg.setSource(34497U);
    msg.setSourceEntity(111U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(246U);
    msg.state = 121U;

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
    msg.setTimeStamp(0.859630574734);
    msg.setSource(38803U);
    msg.setSourceEntity(71U);
    msg.setDestination(6141U);
    msg.setDestinationEntity(225U);
    msg.req_id = 33744U;
    msg.destination.assign("VSXUYMPLDDQAAFSOOYOKLLTZMPMDVBOPXHMQGXCWHS");
    msg.timeout = 0.614738494813;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 196U;
    tmp_msg_0.lat = 0.257512265514;
    tmp_msg_0.lon = 0.549844003619;
    tmp_msg_0.x = 0.88752349131;
    tmp_msg_0.y = 0.193863395551;
    tmp_msg_0.z = 0.0117995668912;
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
    msg.setTimeStamp(0.495161886573);
    msg.setSource(53474U);
    msg.setSourceEntity(22U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(16U);
    msg.req_id = 9496U;
    msg.destination.assign("JUWCGTHQSWVETFRKZHRUMYDGEJRFOIFUGNUNIDBPQGULAXLFW");
    msg.timeout = 0.282337907163;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.764261271697;
    tmp_msg_0.confidence = 0.635001667642;
    tmp_msg_0.opmodes.assign("DGMJUXTKOVIVBRGHJXLQLOJOXIZOQOYYFDWKIWNBACYYSXVVQAYSPROSKIJHRTPUSMEHOJYBCZTTBBWIZTUEJZFELGGNRZHJKZPVSIDMCWMOYRKHPRZLLQCTPXIPTFNPUEZVERLGMNCNXRKQFYCFXEICSFHALTVCDNLMCGWNMZBOSUNWYUHQAQSWSWREIRAAKUMGFWXPNBVPPUXDEUDVM");
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
    msg.setTimeStamp(0.682175170294);
    msg.setSource(3344U);
    msg.setSourceEntity(160U);
    msg.setDestination(56358U);
    msg.setDestinationEntity(115U);
    msg.req_id = 58719U;
    msg.destination.assign("ZUIFORAHSNWHAJXINWZLDZTVKGOBJFJNAMKJOOUROTQHFUOMBYLAWLBSMRSQQRYPGBFNUIVOHTNSWRKFCQEIXUCEBQMUGBSC");
    msg.timeout = 0.52020277886;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.5986703142;
    tmp_msg_0.units = 19U;
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
    msg.setTimeStamp(0.101420708803);
    msg.setSource(52123U);
    msg.setSourceEntity(69U);
    msg.setDestination(5907U);
    msg.setDestinationEntity(187U);
    msg.req_id = 20193U;
    msg.status = 156U;
    msg.info.assign("PFRBXZUKXKHTMLQBJROVMOARJPFIIGNVOEMVKZLFAZOCMHVQFEIUBEJSZRGRIKWIHABGUXDLWMTATCCZKSSCQRTUDRGXIOCBWFHJRSKQLDMVTYFWZZXGOZPOLX");

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
    msg.setTimeStamp(0.754958439605);
    msg.setSource(45398U);
    msg.setSourceEntity(232U);
    msg.setDestination(2044U);
    msg.setDestinationEntity(91U);
    msg.req_id = 60097U;
    msg.status = 79U;
    msg.info.assign("EYJNKYSRWGEPUHMONYMOBKISPMZHLRSCGTTEHFTVXWDGZLJKOFXNMGVHAADQUTBATHKLRWXRUMXGQUARDJPYNFZKCYFDLPGVZEWPFWKRTQNOOZDYCTCPFBRJNBCGOUWLPZDZXMFHQECIJATWAJIYBSITUEAXE");

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
    msg.setTimeStamp(0.0441199143529);
    msg.setSource(6914U);
    msg.setSourceEntity(123U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(30U);
    msg.req_id = 54417U;
    msg.status = 184U;
    msg.info.assign("QNSGMSWBRCVYAUTKPBBMWNFPCCCBPNZ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.774084409998);
    msg.setSource(2741U);
    msg.setSourceEntity(37U);
    msg.setDestination(52462U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.873836597142);
    msg.setSource(45436U);
    msg.setSourceEntity(58U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.696744638121);
    msg.setSource(38187U);
    msg.setSourceEntity(74U);
    msg.setDestination(939U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.139360370083);
    msg.setSource(65059U);
    msg.setSourceEntity(187U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("DWPSNBNIQGRQRRXNNUXUJUTVOIFQOZCDUBQY");
    msg.description.assign("ZKUFRPNPWLNKKINOUREITTADAJIKSMOYHRCVUNDYAUPMSEMZWFTIXRSECHOUJXFSBCUCBWPDLJHCJGGDWULIPTQVYJBIBKRCELBSNGZBOA");
    msg.vnamespace.assign("SSQDGSKRGWVFYJRABLIWZHGSPJZLRVDRVXGBQNRASGLUYOUODAFFOYAPXEHPHYHLUPPMRKRQQKVCUCWJSPCVHAMSBTBWJJKRWPZTFYXNAMCXECILRCXIJOGZHAFJBMUOCANTETBNHVMTLNEVBJIYPEYUQEOMKCKWDSMNEKLYMFAIGWZZURUBSQQCXMLHZPVVZITZTGXGIFKDODBEMNPGBDTNKDTKJJIHOX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ALBRMYIAYXDYMOHKTSUNAPALCMHYAZGLKDLOEVIIVOBIWYNRBCFKFPXGIXDXZTYPQIFVVJKMUQTJTOOUXDEHWAONKIZDERJDBEQJOVPGN");
    tmp_msg_0.value.assign("FABWOEMZYIGLMWIGUYQPDGKVTZBNXO");
    tmp_msg_0.type = 26U;
    tmp_msg_0.access = 84U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HQKWSZERJDZBRDNAEXGNMICJABMPRLPPOVVZRHTSMQDNTYRJKTWIOCDVWDZWOIRBKELUPFYOUCKDKASADHJVNVOLCKRYNGUFOQAJVUFZLUHFNWXXTQXMQSXWPAXGZCMUZIKETGREHHYTTFQDPMVSCVQTIZKBWGQRJIWVIMLASSUFEFGLHCUWMUOGHCJYFBJIOBNLNEYFVGDNHZQAYMSEBBZYIOB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KIJCUKQFLKMHPTYZGYMXWNVXYHMGDUWDUYDYZFAGOPFQKWYRVOXPTABTNQGJELCXGCCHWEYMTPIASARNVPFQBIBORIQHLVEUOCUWEPVOKHDPZJNZYJNKSDMTWUETUECGJMVSJN");
    IMC::CompassCalibration tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 24720U;
    tmp_tmp_msg_1_0.lat = 0.243068802514;
    tmp_tmp_msg_1_0.lon = 0.512052982427;
    tmp_tmp_msg_1_0.z = 0.239947782074;
    tmp_tmp_msg_1_0.z_units = 236U;
    tmp_tmp_msg_1_0.pitch = 0.235237692703;
    tmp_tmp_msg_1_0.amplitude = 0.453403728282;
    tmp_tmp_msg_1_0.duration = 58405U;
    tmp_tmp_msg_1_0.speed = 0.996819705365;
    tmp_tmp_msg_1_0.speed_units = 54U;
    tmp_tmp_msg_1_0.radius = 0.605112304482;
    tmp_tmp_msg_1_0.direction = 45U;
    tmp_tmp_msg_1_0.custom.assign("VDPQCLXFHMWEBLTKUEAQHUPWHMUQQJ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MUNKWBCUHCXIZANKJWORJEJEIDWNJAJAVNODRHQQSERJANVDMLFPTHNQLOCZXVWBHKWDHKGUDMUJSRBSCQJMPYYETFHQYAVWTFBRVSQKREOP");
    tmp_msg_2.dest_man.assign("CODJNUXFVVWOURCAJNTGJIQEBJTSCNRHGXYOELNZDRBHWFRMACHXBFZENZDCIOHVAZSSQTHSQFUXSDNISPCEOGWRWEZOLHMQXIVRBIJCCQXTLMXWEKFZPWKMVAKMMHYXNHYJRUOLTTRQSODRIK");
    tmp_msg_2.conditions.assign("UFCHDCYTHJIKLYZGOECAWWZQZXKBNODVTAQRURBLTDXIGSXYGUUSTJDQSDRCXAYQPBYWAGVTSOZIEYYVEWIMPKNQJWWIDXUMOPKYRPRQJTLSHBNTXWJUZXNMJKDRGUYFNOFNGVTMIFHDBCHUOKMAXENBCHIFNJMQWRKKEJFVZZVIRBHAFPMONOVSEXEQZCWSEJOKGLSLFBVVUMKYGDZGZCLLGXPNWJBRQELMQIPVPCASPMARCFUOBP");
    IMC::UASimulation tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.type = 198U;
    tmp_tmp_msg_2_0.speed = 51007U;
    const char tmp_tmp_tmp_msg_2_0_0[] = {121, 2, -93, 12, -92, -45, -13, -125, 100, 33, 11, -97, 103, -117, -21, 62, 120, -24, -11, -118, 14, 51, -73, 63, -28, -95, -61, -79, 39, -57, -4, -18, 121, -69, 72, -109, -35, 17, 30, 96, 63, -89, -85, -97, 37, 122, -65, 124, 117, 15, 41, 126, 19, 104, 76, 44, -7, -80, 87, -81, -121, -65, -8, -42, 98, 24, 90, -98, 17, 34, -64, 29, 103, -53, -20, 68, 91, -19, 46, -109, -102, -92, -49, 2, 6, 22, 40, 112, 15, -9, -52, -39, 49, 65, -4, 111, 60, 68, -120, -9, 76, 101, -81, 6, -104, 23, 98, 120, -95, -25, 52, 56, 35, -19, -50, -126, 70, 77, 46, -1, 28, 74, 126, 110, -2, -62, -122, 3, 69, 80, 121, 91, 19, -55, 68, -81, -53, 18, -57, -23, -35, 126, -124, 79, 32, 44, 70, -67, 99, -109, -16, -35, 99, 86, 14, -125, 94, -45, -83, -47, -60, 3, -52, 50, 6, 54, 14, -32, 7, -29, -122, -75, 56, -34, -116, -70, -18, -78, 49, 90, 74, -123, 74, -43, 121, 35, 39, 40, -9, 7, -27, 83, 85, 63, -115, -25, -116, 101, -31, -60, 80, -99, -80, -14, -124, 14, 44, -45, 53, -92, -44, -51, -109, -37, 79, -27, 18, 110, -125, -115, 96, 102, -33, 53, -97, 83, 18, 85, 31, -30, 45, -33, -61, 28, -91, -37, 126, 18, 14, -58, 70, 65, 1, 71, -56, 71, 79, 123, -20, -69};
    tmp_tmp_msg_2_0.data.assign(tmp_tmp_tmp_msg_2_0_0, tmp_tmp_tmp_msg_2_0_0 + sizeof(tmp_tmp_tmp_msg_2_0_0));
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::CcuEvent tmp_msg_3;
    tmp_msg_3.type = 59U;
    tmp_msg_3.id.assign("JCRNCYQQCWCESAOFQDUAYFSPOGYYJVHVPUUGXIVWLRKNVZNSUDXSAJVYCKZJWURL");
    IMC::ControlParcel tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.p = 0.280564507333;
    tmp_tmp_msg_3_0.i = 0.385086136907;
    tmp_tmp_msg_3_0.d = 0.377595952914;
    tmp_tmp_msg_3_0.a = 0.618861397124;
    tmp_msg_3.arg.set(tmp_tmp_msg_3_0);
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.940972099814);
    msg.setSource(2124U);
    msg.setSourceEntity(180U);
    msg.setDestination(58796U);
    msg.setDestinationEntity(40U);
    msg.plan_id.assign("FEJELARMLPJKEOXROVLCUDIZWKOOHHPQGXTHJNNMBLUZKLQNDPWJWZWEQIMXBIDLYQQSAYGSPMGYFOXSWYYOVMXZKRPYVVKISFGQFRTKWKUCOKLXSOIEMHFBZTBPJXVTFATSKNUNWOJIXCOUQNDTDCFFACVMHFYZHJIMUBAHURWRRSHJVWUXLQDHTVEIRSDNANRADCUZEABHJVWN");
    msg.description.assign("TELNANRNMNHFBDWEAIDZUIBUPHEMEKKYDCWVSSZARCODYUZMXZBIFXYCCPURJPAQJFQTOABWFCDXVPBYJKOUXBYLBGAKMUWNGHHGFUXCYIOOTOKMMLXPGWYMRPUVWUUVZELRANJJFZHLZBRAQKIJGQIEFXSYTWOVLEHDIDTFGCVKISJ");
    msg.vnamespace.assign("DKULZDVTZMRQZEXAQNOYRDATURSSMTAVJIFZFBVUIFAQXKPBBTDGRSQQLMWRGYCIJBFVSJYCYWOYMGSUAXELUYTUEYJOBJEWCBHUPCFSPWJRFFXDOGQHNTZBLHCSUXHVOPBOJCEMOKHMRCXHILVWMQRCZERKWKXCYONFBHPJYIHLGLNWQUUDWAODZEQVGKNFNMLWTPKDVXIHDTIJGHPBNIPNIDZZPAYPNGTCMQRMEJFGSTXSVZWKAXALVI");
    msg.start_man_id.assign("VCNDOKYTPWBQPENWUJGEXKTFQLMRGXSEXKHCXQERMSHVDDSNZJVPPVURZYHTPQMWRBPHTWYYZQDXYLSBNDOYCICUJZYVQMIUPLKRWCYZLIYRTEWXEKCVCKABCEFDGTDVGNOIMNCHSZUZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YWSVGBPNGIWKYTMRGCKPUMLBVRNDIXOOCSQEXXKWGOQFAXC");
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("TYBDVWNDSLLJFXBZXYJKOJSYNKIVBWLKGJZNTQEURCDPQYHBKKFAOLVHSNWIHNGSATFMKCCHJIAOSBDZYGSXDT");
    tmp_msg_1.dest_man.assign("JGROLAMJKKEKUYHQJQILLFBNMWQTZSLDKINEGLBVTIGMXQUEJMHDXTYDWSVJIJRTZFIHKATQNPXROACNHFIPLBYCJHKWMXPDXBDZMUVQXFYFLXJPX");
    tmp_msg_1.conditions.assign("ZTLJMKPRGSBOTQIFCBVMOSAYVVGRTQLICHUGFVNJOQDKDDAPDWXYHQTZPEXKMNZGWQEFMWSLUUXRGAHMLYCIVMDEAYKZKBRLNSBPTINRUVJXUSDENOZLWZFCQYGVXXCWWDFOHRQKBUDAMVMVOKJWBZITRYEUCCMHGBSLUEUYJHWQAIGIDEPEZPTBXYQPXOZAPFNUIRSN");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Land tmp_msg_2;
    tmp_msg_2.lat = 0.546833273508;
    tmp_msg_2.lon = 0.161275570285;
    tmp_msg_2.z = 0.088518344796;
    tmp_msg_2.z_units = 151U;
    tmp_msg_2.speed = 0.0790446346235;
    tmp_msg_2.speed_units = 232U;
    tmp_msg_2.abort_z = 0.387567258292;
    tmp_msg_2.bearing = 0.749332760657;
    tmp_msg_2.glide_slope = 32U;
    tmp_msg_2.glide_slope_alt = 0.665343697417;
    tmp_msg_2.custom.assign("KYENYIGBARWTIWFJUPW");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::ClockControl tmp_msg_3;
    tmp_msg_3.op = 176U;
    tmp_msg_3.clock = 0.682445464551;
    tmp_msg_3.tz = 33;
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
    msg.setTimeStamp(0.500364629731);
    msg.setSource(49874U);
    msg.setSourceEntity(221U);
    msg.setDestination(2102U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("IPCGFWMUMOVVTHQVPFCTGYSCIGYNZOOKKBASLQLGZIGGLJICIQRYUZVNBPKXBYUREHDSUMHIAFJJDUOSDRNIYNAKOCZFFESSZKVZJOLDFEEWOXSGYHOPAPMKYWMYBILYQKJWG");
    msg.description.assign("WDDWWGEGDQHTXYWQMPRPYATJDUOCDTZXCJNUSPNUNIHQVMZEGXKCYEORKMJMRMFV");
    msg.vnamespace.assign("LPZAXWCFEBQHELEAADHVVOYTRKDRILJSDLWGROKNXAXFZNECPPJNRQIPYAZZCAYMTFYZMLILVXVQMIUDLGAXUFTFOUFISBQYHEBXWHRHUIJTESKJRVZIMTBKMCPFVEKBCWGPVUDFILSTRSGJCZOHOLDCBMJGOHUNKQGDNMXZFNWTMSZNEVRIUCWUXOQHZWWQUTVN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XIOFKURLGUEJUHVORKSUZCUWYQQWERWSAKAYYYVFJPZXNJOBZARVRQJMFLIXNAXDTWAMAD");
    tmp_msg_0.value.assign("XMMOPEMWPKABWDNZIVFIOAZNLFLGQKDYWFAKENBYWCIUREAYRUVXXPTCOOHVVWXQLOLJBPNMVLLBGBFQYVKNFSGTUZWLGHEIQSCFSOLQSDYGNZPPYYHKCZVANTDQONGTAGZZNORMFDRKXOHQTFPJTMEDEICRBVCXUPSVOSTJUIYRZHXJCWWMKDRDFKBHTIPREUNKMMYJUPRKJCZXUAVUHDISIYJABWAZ");
    tmp_msg_0.type = 38U;
    tmp_msg_0.access = 189U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RNRXGONAGNHVAHIXTOBCGWAFDUJPAANKTHTAPKZJBWEIEBMDFLMNNHJEBYXGIROCYOVJSMZGRWGPYQFCPCBNSKAVQCNNTPURWKQRRLHWUACDDSSFMLAOQPHHQRGPBKFMCHEQHDVCYJUSMILEEUKYDCKODGFVUXPMSVMXXIIBFYYLQDLBOBMCTSXTWLTPWODVPUZFNXJZEOEFTKVLVBIIYFUQRYSZQQIMAXRXLUEVD");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PBVRMBSRZJCBFCWMQLNRFDKKMCAFIURBADEHYYQQHRFQXBYOSUKLINKGAZLCXJBNOAZEKFGAJTOKJSPXHOISVGVUXLMHXIOWMUTTGTRJYBURVCUEOYTNJDLVHSLZDCL");
    tmp_msg_1.dest_man.assign("PPDCXNCFZXSEHQYRMLAWMGQWHEFPOKNPSOORZWGMZISXGFOTMIFPLPCYQNBAQDQMLDATLLIOAVCXGECNTFCIDPRRUWUKKXTFHIBIUYWY");
    tmp_msg_1.conditions.assign("CYSUUVGQLDOBVHCLJXAAOWZJCLPDIADBGRSRNMMKZFTZISVRDIGZPDRLQENXMHIOYURZPKSRKQIESDNUJAAJJHYGFLWVIORJAQGVXEXUPMHUQTQBYTZWYKMMGEOCDQPRSODIYYPMFKPQTBAGEBDQOCWVGSKINFWYOXXFXNFAXKKEHCLILNWSGMZCEAFZQHKFJKCCWNBHEXPIVGWTSVJTPXBJEWDTTOVNVUCRMNLPHZBUZTY");
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 111U;
    tmp_tmp_msg_1_0.angle = 0.756152762456;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SoundSpeed tmp_msg_2;
    tmp_msg_2.value = 0.806379405663;
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
    msg.setTimeStamp(0.375590035346);
    msg.setSource(55680U);
    msg.setSourceEntity(20U);
    msg.setDestination(53613U);
    msg.setDestinationEntity(198U);
    msg.maneuver_id.assign("BQBNVZWXECTOTCZIDNKGHUZXORKFWCHYVCELVAJCLKASFKQJOPJVQVTDEAGEFKKQPEWTRIUFMMNLDIJUXWDXMWJKYRDRTQSJBYBXPQZZPIFRESUVZBMYRCXLDFMKONEHFNGIYCQZGNMJXTLGYXEBOPJTGPRHSOOFCQTYEZMUYIGHGNJVLBELWDORDMPWL");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.30680340613;
    tmp_msg_0.lon = 0.287080128471;
    tmp_msg_0.z = 0.584408598315;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.radius = 0.194021027621;
    tmp_msg_0.duration = 61539U;
    tmp_msg_0.speed = 0.532822094844;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.popup_period = 153U;
    tmp_msg_0.popup_duration = 27615U;
    tmp_msg_0.flags = 180U;
    tmp_msg_0.custom.assign("YOFIATFUVNUGLMAOMIQYLIRCCKJJGJVVQCVWXEXSGJNUUEURTILNPPOIRTKHMNTPODXXYLAKKGYUATZDQTWKBQLEGMBPXCZVDWLDONVZPAJEWOUSSAAGCQHRQSNJCMPASWPISCHABTGDWIGFMVOLCYHOFGEWWDEKEHYUZZNBRBXMIFWHNVDPOZZZSXQEBITQNIFCLKYKNXKJZSTVBXJPJFMBYAL");
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
    msg.setTimeStamp(0.986183399394);
    msg.setSource(11069U);
    msg.setSourceEntity(37U);
    msg.setDestination(42737U);
    msg.setDestinationEntity(94U);
    msg.maneuver_id.assign("SXPVOGYHAZOBCOQUGQWCPJDTFXTSUYJOKNHKXNDCDMTXSTPTGSWLKGMYAMADULCHHRUUGBVYLEAUSJQRZGGTRJEHYYDYNLNZHXRMKJXDEDOHCIMMLPBBDZWRDUIINOIEWLAUBFZOAWRKFVKKKJJHATZEXPXRHFQOEYFTWYZSBCTCJIJCLKPSVBEBVTCQAJBERMSQVINFVEWNRQZPDLWQGRSNQZAAPMWZW");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 49238U;
    tmp_msg_0.rpm = 0.469057892418;
    tmp_msg_0.direction = 122U;
    tmp_msg_0.custom.assign("PAQIXUHCKMEUUCXSFYUDQVCDSPZFDLFBJMHENVSSMGRWMQBDZDSHKOEDNRI");
    msg.data.set(tmp_msg_0);
    IMC::FormationState tmp_msg_1;
    tmp_msg_1.type = 95U;
    tmp_msg_1.op = 124U;
    tmp_msg_1.possimerr = 0.223592124865;
    tmp_msg_1.converg = 0.858930118117;
    tmp_msg_1.turbulence = 0.444878192218;
    tmp_msg_1.possimmon = 55U;
    tmp_msg_1.commmon = 62U;
    tmp_msg_1.convergmon = 130U;
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
    msg.setTimeStamp(0.524655727727);
    msg.setSource(26446U);
    msg.setSourceEntity(196U);
    msg.setDestination(54040U);
    msg.setDestinationEntity(235U);
    msg.maneuver_id.assign("BTVKQAYRRX");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 40379U;
    tmp_msg_0.flags = 226U;
    tmp_msg_0.lat = 0.380954957147;
    tmp_msg_0.lon = 0.210851922602;
    tmp_msg_0.start_z = 0.190005866435;
    tmp_msg_0.start_z_units = 249U;
    tmp_msg_0.end_z = 0.5545443122;
    tmp_msg_0.end_z_units = 254U;
    tmp_msg_0.radius = 0.57616524676;
    tmp_msg_0.speed = 0.845999201216;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.custom.assign("EACIBNYXJGPVPZDJXXCKVZXTQSRWKFZLULFYLQEPGTJDDMVEDBTERPOQIYUCWNABUBDNCRSWZRMJHEPI");
    msg.data.set(tmp_msg_0);
    IMC::QueryLedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("PJQDMTKFTVSYZTGULFXEKZHBTSZIVDWUYNTKVODWWXUXAHVEYJUIVYNEQKERSUIDXTUPFWLWBYPDQHZLDALZQSHLCSGGJANZROOELJMTQUJEBDSAYMEPBRHFPKCXINBRGCXQGCFVGHZLKSOQCIZMBUAPRCWXGTKIARIKFMMXSTOMCMPZHEJRFHPGEUSWZQENHQDLJFMKN");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PathControlState tmp_msg_2;
    tmp_msg_2.path_ref = 2118572121U;
    tmp_msg_2.start_lat = 0.268253373807;
    tmp_msg_2.start_lon = 0.868388210036;
    tmp_msg_2.start_z = 0.855263597629;
    tmp_msg_2.start_z_units = 228U;
    tmp_msg_2.end_lat = 0.929977905283;
    tmp_msg_2.end_lon = 0.894081130775;
    tmp_msg_2.end_z = 0.614853738462;
    tmp_msg_2.end_z_units = 62U;
    tmp_msg_2.lradius = 0.970281031194;
    tmp_msg_2.flags = 146U;
    tmp_msg_2.x = 0.865173566033;
    tmp_msg_2.y = 0.272285237936;
    tmp_msg_2.z = 0.461762404185;
    tmp_msg_2.vx = 0.145584959415;
    tmp_msg_2.vy = 0.185067716366;
    tmp_msg_2.vz = 0.67493475794;
    tmp_msg_2.course_error = 0.105119264138;
    tmp_msg_2.eta = 37465U;
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
    msg.setTimeStamp(0.281786528149);
    msg.setSource(11278U);
    msg.setSourceEntity(219U);
    msg.setDestination(16342U);
    msg.setDestinationEntity(35U);
    msg.source_man.assign("JMHVFXFSJSSUNXNYOQXNCEDGGJDBYTDZJCBZSPDKXDFOROVBMAPKCDBMYQUBOKOQREURNNZETGWEMVWMZYWKPXRXQFQDGIHMJYVJINKIQCANYPHLTVVEJTCFLOUIHETXSZRBHAFQYFVBSWETJKSV");
    msg.dest_man.assign("OMTVMNRPJBZEMSHYPGYZXJBCBNLWIUKFNETUBCRCHUWHIXXNLSOZKFXNKOBRAUJTQWRQWWNYPQPSLFEDBRTSDDVRFYVKADPWFLZYUYCAKZRVVFVYZOQEYLBIPHGIPZFFUQLTQOKMEDCBPBDNHJVLSWGIGRMOJWXFGIHVMZLGEUCSKKVGXHCHMLIFOSJDTDHSISHOXYQQ");
    msg.conditions.assign("QYKBATRTAHNUVCGQCRISPCLUVELODYPFZOWNWFENSZEPNIXMHQOQOTADDXAHJPLZECNLWVFAWSXPRFXIMDRKTDYIQIKTIHHLGUGOTHJVQTUD");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 192U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("SICDNILYSFROTHGSAOHEIDJAEBSVQSHOPORPASUREOACWUNUZNTZDYCBHBEEFPPBQDWIRVCQEWEUUCEQAMDNGQZBXJDVUYBKWWWOFLKCJJMHJVLJKWVPHMT");
    tmp_tmp_msg_0_0.lat = 0.481950135193;
    tmp_tmp_msg_0_0.lon = 0.503776450466;
    tmp_tmp_msg_0_0.depth = 0.621143167859;
    tmp_tmp_msg_0_0.query_channel = 5U;
    tmp_tmp_msg_0_0.reply_channel = 155U;
    tmp_tmp_msg_0_0.transponder_delay = 165U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.368498643059);
    msg.setSource(45234U);
    msg.setSourceEntity(234U);
    msg.setDestination(38027U);
    msg.setDestinationEntity(113U);
    msg.source_man.assign("ZDXOEAZBEYHDGWCMH");
    msg.dest_man.assign("BOOYLRYVJKMYQVNRJLEGZUJELZLCTFRWKAYPCWDQSBFAFFQDXIFSUNSKRHSYTPCROGFAFHKLHNNBMPNBGEASTAMOPOQMCVPPISSTHXUUCJR");
    msg.conditions.assign("QRDQEEUIPMGBKOPTVDHEAFQYRNZIGMSZQRDAMEBNFJDSQCLFYKXTKYRFEWKOIVPYNIONXPXIMWAGYKLMLRMCNDOAPKSXINKDTSZUNEDMHWLUVTSBWODAOVLJCDZBCZHJXHNJUCHTFGGYYZMZOVKT");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("BHNBHSZORWEVCFDELQDHPNWDIIHPPTCQWEKGBLCEY");
    tmp_msg_0.max_speed = 0.877298198118;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.lat = 0.39267855441;
    tmp_msg_0.lon = 0.517389539755;
    tmp_msg_0.z = 0.116613245946;
    tmp_msg_0.z_units = 119U;
    tmp_msg_0.custom.assign("UWZPPMHZKAXGMINXUQYSQHJBQDGJPTATNBGMEYEHBBAWZROQPVCEQTZCZKNWEOCNGBCDSENABJF");
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
    msg.setTimeStamp(0.659128738416);
    msg.setSource(5775U);
    msg.setSourceEntity(110U);
    msg.setDestination(44464U);
    msg.setDestinationEntity(26U);
    msg.source_man.assign("HPDVOQBOQHOBYSPCWBXFKZAGVGAIFBMCBMGAYJKPDDLMZMJZOXYTVJZURDRHGZRXLYOPARUASSUFXQPGCVYXNEIPWRXFNVWIXTAPUWKFSTDQIBIEGMHCTDWFLIACAKRWDKMOLMHUYLHKUFNWBMXTZTFKLCIJERVGEMRRRHBUCHISOSNQXLTDYWNPH");
    msg.dest_man.assign("AGXJPZEKTJKHVBROXMMSHHDWUJZXYJFHGOTYEYRTUIWZWTQLUQDCAWCLQEZPGXYLKCVSCDXZABRTIVOBCSYSLBDAPLKZZANCPWDJTQZNVRFPFBEFNHFMKJQLFAISKSCMXHOXJNNGEAJTKBREWGOCGQUVJDYNTQLLYMNFZIDPFAUMWUV");
    msg.conditions.assign("GDRJDGHTDOEZBKFCJLUDTYTQNTUHDYBYGZGUANIQGHEDZFKPQTDVOVIYEPACHFHIARRKAVSZPTKWSZNPLECBPPGNACSGKUDJSJFXXNSCEASXXKMEFI");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.520720262035;
    tmp_msg_0.y = 0.862728391851;
    tmp_msg_0.z = 0.320875075266;
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
    msg.setTimeStamp(0.353853806319);
    msg.setSource(31405U);
    msg.setSourceEntity(117U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(201U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LLRJUKZQCWXBAGNAACBIXQRGZQTQNHWJTXXNXVGVDCOGFLHZDTRVKSMJRPOYJIAVDQOCWRHIIQFOHWHNXFEPKCDWEFKVS");
    tmp_msg_0.description.assign("JGWAFDFBEGUJHXIRUKYAZONQDVVLSMUGRRIARKPJGEKSQFCJNNBSLGORKJQALBYLKDSUZOYTMJBGATIUFMAUUWQNIJVWLFPBDVWHJTZHOSQCXXTTBEBXIFIPS");
    tmp_msg_0.vnamespace.assign("LLZXLWIZIWELOPEKFXHMS");
    tmp_msg_0.start_man_id.assign("MBFFFKLAEDRYSGFNPEBNFCIFISAIKAQSWGPUPUEVMHLHCDAQQNCFVZAXPTHUJKXRTHEDZBVPVSERNRWWUMGUZIVDW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MOGPQLFUKAHXCLWNUAHYROGVFKHRTPWGXQGYALYDXHOHRCCPCESJVTNVVBWGWVZVHGDRBNOCTQTCDZTIPSVSSWSAUOBIFNTEXQBCDSGPEGHEKNSITATKJQQFKIDXWEXSUJLBQJUOBVQEBCDYUNHZUDYKYHZJVRMMYMKEXIIGTOOLFKSBJWPNEPWYIBUJEWCRPANZZNLZIKPQATUVGNPRFZZZSJMCADLAJ");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 9800U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.635878338596;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.125425682028;
    tmp_tmp_tmp_msg_0_0_0.z = 0.995821450512;
    tmp_tmp_tmp_msg_0_0_0.z_units = 58U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.611295164107;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.750277912373;
    tmp_tmp_tmp_msg_0_0_0.duration = 41739U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.390431017962;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 118U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.0141720505966;
    tmp_tmp_tmp_msg_0_0_0.direction = 191U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("WDJQILBSZZPNBUMFCZNBNIOSOGZXTLMFYRMGJLUBBTHFXUPRRCSXVZXPSZTDKPLYQZGKEPNCYGGHEMTLTICLYUJVUFQFOUTGOISWDXNAURWYDENADHNLVPISVAEQIEQAHKOBYRQMTJASAQVZWKGKJDPQCIMNGRVGFFWABMQMUTJHCIDFD");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CommSystemsQuery tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 160U;
    tmp_tmp_tmp_msg_0_0_1.comm_interface = 54011U;
    tmp_tmp_tmp_msg_0_0_1.model = 19371U;
    tmp_tmp_tmp_msg_0_0_1.list.assign("EUGGKBYAAUNFPHXUXJAXYEPANSJTIORGJHLTWHJMWBUFEXKTUYRLCDCYAENDEZAILJU");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TAKYKEWIMRDBLXHDRRMXINSVZIXOQPIDZCADBQQRBUOXJQSFOEYYWFCFWKAUCPHPXLGTOKKMLWLPXEBXFUNVFECQAHYJNYW");
    tmp_tmp_msg_0_1.dest_man.assign("ZZSTSSEUVBCDFNCDBMYHASMZJVGLKWWTFMWKNFSWUBVEFUVZDGFG");
    tmp_tmp_msg_0_1.conditions.assign("CAWQEZNFEFCYIJWYLSHOUCCFKNMKIHJCZQRSKQCOTQKBVFZBRLBNJOGFJNAOOMJCEGPXUKGXPUZOLJTMPEDAMGBIDRWTTFZQWNJYTDSZDYECMXBTHEFJSYLNTIVSMTDWGNEPUPFEUBRAMVDQZQGWYSKVRGXKLPRPIAUGXKAPVLHORZXI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ScheduledGoto tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.arrival_time = 0.25523387442;
    tmp_tmp_msg_0_2.lat = 0.764144047047;
    tmp_tmp_msg_0_2.lon = 0.513579142318;
    tmp_tmp_msg_0_2.z = 0.0870952414786;
    tmp_tmp_msg_0_2.z_units = 100U;
    tmp_tmp_msg_0_2.travel_z = 0.502471441888;
    tmp_tmp_msg_0_2.travel_z_units = 54U;
    tmp_tmp_msg_0_2.delayed = 108U;
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
    msg.setTimeStamp(0.0591810270944);
    msg.setSource(18119U);
    msg.setSourceEntity(212U);
    msg.setDestination(38505U);
    msg.setDestinationEntity(105U);
    msg.command = 11U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KICPMRYDHCLWPAVXSFNMJRIVYEISANZHWVZHIHZKXMVCPUFNWNIZURSFCYKNPAOXIFCVJXYEBHEVHXYOGWUUJZQUKNBGTZSJUKEEBDTABNORPPBMTFVXUGWQOMOTUOBXMLAQJOESHBZFKCYLSZDLWYCLPGZGVCBHRIBMQJADQXMWII");
    tmp_msg_0.description.assign("RUKRPUUMNZGQLHIFRFBHLLLUKXEAALQOJANCUNROSP");
    tmp_msg_0.vnamespace.assign("ILIFEGNVUOVCARZIQHLMBETCTOEEDAVMPMDOETFTIQJSAVMDXEXUIVGSYQAQQLCQPOBNOSLKJBXQFJBCYSXPHNHEGAGLRJVZSYQXUKQAZTHEUCROOKHIRWPFBNJYJGTVUTLWPLTDKXXAWBKDIXKDWOFFGUCOZNROJNAILGVFHWNCRUSCWYHWSVYFNAKBZBERVNX");
    tmp_msg_0.start_man_id.assign("NKFYSEZZCEPDNSKIALRNTTPLWNEVFMPWAQJOOQVBKLWYDZXLZWXUXDQEMBMXYYJLRWAOIZHUGCUGTJBFCDUDIYCYCNLORTOHQKEUVNFMSIPZMPDYNQYHCAOSOMTGUUUBWVXKEQAPBGZXMPIKERSCDFBVBFIRJESDTBSHIBMWTCHHLDAS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YDDPOWYBZEUQTSADKAMBCNSARAHRQDXJXVNHFINSTMJOIXMLFHPGIFZWMBSZHWTOIELVCVUCZVPASPPLEKESHAUHZPNBQWDVXLWACJQLBRZAHFCMHJCKURQVIBFKYXVYJFBWXRRQTMUGOZUNRJXFAWIFWSOMJNIKKOURMCQZINPOYAQZEETPRTJVKIYHTCGXMBITKLYJGHFPLVQNDGVUBPFTNKGGOWXGKQXEMYDEEUDTU");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.705649997076;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.183128113691;
    tmp_tmp_tmp_msg_0_0_0.z = 0.687797965924;
    tmp_tmp_tmp_msg_0_0_0.z_units = 17U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.508344834671;
    tmp_tmp_tmp_msg_0_0_0.duration = 33287U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.333983013576;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 202U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 31177U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 13580U;
    tmp_tmp_tmp_msg_0_0_0.flags = 251U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TMIUVGBXOCXEBQQRXQMLSSCHERDQJSOGSYLBPBLMJZOGXKWCZVAUVMNFAYWNKNFFVCOPZMFXIRPIDKJZMLHXYMERSPHSWDHIKUEYXNPEMJKVDVOQAEYTGWTLBTCKHLKHVDWEVPPBSNAWKQFWLYJUWCABYGIPEPOQZNUDFTWNMHUETNYQZCJUVNRVGDCWILHAGJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Redox tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.539644417738;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("OQIJTLFZQAIKJBMHGCAPDZIEFLCVYVFUORHWMOSBLWWTNGSMDFKTFVANIXQWXMUUJYRYUMXXAERFLYAGSXXWYJZNJHKTSGDUBREIQLYWPDCOJGGXNH");
    tmp_tmp_msg_0_1.dest_man.assign("TRPCJWLAQBKOSPCVIJEQFHTIMYJMRAEXXTRKVUEKMREMCVBOZWCYPZUHVJEQKKTGLHSAGJQWNZCEPDLLTJYHNKUOWXWSNPEFZXXASUEBQTMYCNMBSRLMFPOPTYWITNBSDLWHGADUTDYLYCGPEGUMBYOFVIZBUIKFVRKMRQXZVYBJQLJOZFQOBBLSNAGHRLNKAZXRFIYWCSVJFOJCSKASZGIH");
    tmp_tmp_msg_0_1.conditions.assign("QDJZZZKOLSOQNBLISQRMPNWCGMCGSAVVZIBQCXZVBYSLRNYTDFEUDOPQBDEMVENVRHJLOEWRCQIGKUGNSWKCFYHEGMWNXXOTVVKRUYCNRGLDDHPXLMCKZODAJHXQJIGKZILMYFYTUICPBZJWPRLCMIZAOHHKPEU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityInfo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 40U;
    tmp_tmp_msg_0_2.label.assign("VPBVWDQFPQGPJVQWPEUENKYRTRCPFTQAOCODNUWVOHQWUEVDHWGBIAIAXNYKRICFLEEILISAWTSTEVCESSYJBBHVVNSRVDMICAGWMYHODUXMYQOQZMLJLCSJXJXWSIKNQBJGTCZBPLZBCJ");
    tmp_tmp_msg_0_2.component.assign("PXZMHJMMBJAASKGVFKVXBTMXYZCADYBNWNFKCNWOGHWHIZVWILNMZJGFBQXZDTSIJKIQKVBKYHTSENZMMGBTLLEQELTWYTRMERFFXCXTIKUCTPONRRWDQSEPHPHJMNUXXVFSNWOIJUVGZTOAQYQOLDSPHEQXDPUJYFPFSRAZLURFPDRQOSAOSWVBLJKJZCOPEHKICOCGYNZGCEMUL");
    tmp_tmp_msg_0_2.act_time = 6376U;
    tmp_tmp_msg_0_2.deact_time = 4697U;
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
    msg.setTimeStamp(0.415952823065);
    msg.setSource(50013U);
    msg.setSourceEntity(172U);
    msg.setDestination(32070U);
    msg.setDestinationEntity(162U);
    msg.command = 188U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LPHIWDIZUCUFWSXWRLAWXZDFGJAUOAJAPDJKUAJSSYYXHYTZFPLYVHIQOEOKOCCRGFBNAEFXFXMBZWVTLBUGVMRERQLPRJRGIGCZQMIGUVDTPNHKUYKKEQABSZFHGPHNKSVDXMNSN");
    tmp_msg_0.description.assign("INKAUBXDJJISXHQVAMKKVBFNGQETZPKEWHXJTCDTDIOLYOKGCPBYODKKQTXETQEHOELQYMNROOGIJWDMYBHSCVCUQSEGEOOP");
    tmp_msg_0.vnamespace.assign("AVCASRISEVGAWBITETRNZXPNDSTTJVQNIRWFEQRQXOOKZUGGHYQCDXDLWLJAZPAWSFUTXAONFRWLSRZMSLOIFUTDCKMMSFGCVJVWHZNCXNHEKOXDWVSQLFJKPAWPIQHJDWYUKCMSHOPOJEYMTIBMYEBDYHUMEBBNKVZGUCJZTPCLLIP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WSTZMLJZDDRGPVROXZEQWXQICNLYHXPDGUHFOMRAUBELTASMYIIYSTIZMRCUHEXWYQKMKXKEMUEDDQQNFHTGBAUOVOAWNBXUBLSRPOWQZBKVAKU");
    tmp_tmp_msg_0_0.value.assign("NBCCRNXCBGQLOVWXVWAVAIKKTANHPXLWXNJBPTZAFJTXSVRFVRYXQISDHYFHMUVWETFEDZNBFWULQIWRDZEPHCTFKYORGAMHVIOVCEQPCLAUBZDKLSDMOJMYGTGZTLJUFSEI");
    tmp_tmp_msg_0_0.type = 70U;
    tmp_tmp_msg_0_0.access = 73U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CATATKZJHCOVGOEMACHIUDAXZCBFHOLMBDPUICBBWJNNYEVJIGULHVYUWIYNMFQPPKGTEPFTKCPGAIULPUDNCAIKMWPZMRKJZOGZGOBISXEUXKLEWHZRYGEYOGRDATJJWFQYNQFKVVJQYIVSPTCQTAERHHDSBIFIQRVBURNPLLNXSKXABTUOSQWYCHMRSPLMWMTLFMHEZXSDSXGLVNNZLDVDF");
    IMC::DesiredRoll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.13061105274;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Alignment tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 51159U;
    tmp_tmp_msg_0_2.lat = 0.610131558199;
    tmp_tmp_msg_0_2.lon = 0.238931224327;
    tmp_tmp_msg_0_2.speed = 0.506311904647;
    tmp_tmp_msg_0_2.speed_units = 203U;
    tmp_tmp_msg_0_2.custom.assign("ADOACDKFOPKKMXYZNLBNBYXVLZQKHAQVTCVMYTHAQWRDGREFKO");
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
    msg.setTimeStamp(0.278618388476);
    msg.setSource(13786U);
    msg.setSourceEntity(73U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(179U);
    msg.state = 189U;
    msg.plan_id.assign("IEZAENALZVKUKNPYWZAHOEVSTJHIMXIPOIXSBFZMUNRATRFLKNJSLLJRIQUDGTJRUKLPNPRFENBUCQZNCWIWVAJDIDJBYFP");
    msg.comm_level = 140U;

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
    msg.setTimeStamp(0.174679721691);
    msg.setSource(33462U);
    msg.setSourceEntity(66U);
    msg.setDestination(19826U);
    msg.setDestinationEntity(19U);
    msg.state = 50U;
    msg.plan_id.assign("WCVKSXHPGXVEBOUWSRVNDVWJMEHCYNJOEPFQCZQZPZGQXKWKLVYUFCLBJUAUILGJRMZTINSXXEXHPRXAVJKNVKLJTAJNGBISBUATOBYCJYRQFXOPLCEALBCNYSNJVYEZTKRWZRHDVSGGBMXTYFBRFQIATOCEMBJEPSLRZEIMDYNZLDWQNRCSZMMWPAQIQHVTCUTDADFKLPAEWPWKHUAYU");
    msg.comm_level = 83U;

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
    msg.setTimeStamp(0.585098125616);
    msg.setSource(55074U);
    msg.setSourceEntity(15U);
    msg.setDestination(62515U);
    msg.setDestinationEntity(186U);
    msg.state = 16U;
    msg.plan_id.assign("HFMENRIPTVIYDYBEIWUCOEIVXFCWHNMIEWTCZBHGZCKQREXKGGEUFBFZQSRPAYTWUMDJLCIISXLDOITANJVWZNSQCNSCEGPKXJZYHXWSUPWBI");
    msg.comm_level = 0U;

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
    msg.setTimeStamp(0.807201608601);
    msg.setSource(15470U);
    msg.setSourceEntity(57U);
    msg.setDestination(5806U);
    msg.setDestinationEntity(63U);
    msg.type = 151U;
    msg.op = 239U;
    msg.request_id = 7264U;
    msg.plan_id.assign("UCDOGQATUSHITNSZCFYKVYZBFDWWAAKZQFPMRCVHLVKSBLHGNSYEUKLFOKOKFHSTZPVEBKUDPOQELZJQGQMBNIEUDROXAIGXHFXNSZSBLI");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.974145653617;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NHXLGIWWFVVVERTZWDMMHHUPTNXPKXBSPIBYFFZRERTUQPYODYXTGSIQOJXKOWOZDSDUIZENJRPJJVCIDQQSTELLQOKIPDIECBCAWJBGTFFGYCMZQPILNMGACZBLHCLGAVTSBYRXBYQDUYJQZAJBYNJRHJDULRVWRSIFNNGTETWDUNGKHFGIXUFOVMELAWNMAGEXLTHFFBZQCMXNMKUWKESSBADKAKRUXOMAALVCEPZOVCYOVHMUWHSO");

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
    msg.setTimeStamp(0.969716980552);
    msg.setSource(23719U);
    msg.setSourceEntity(52U);
    msg.setDestination(58382U);
    msg.setDestinationEntity(193U);
    msg.type = 200U;
    msg.op = 157U;
    msg.request_id = 58614U;
    msg.plan_id.assign("PHWNZDRGUHMFTUZLCCVFIXTYSRXXUZHXBIDDWFKCOGCLHBBZHZQSNFTPEKLKQJDIJEFPKBIOOONMVMSV");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.503625727885;
    tmp_msg_0.i = 0.68325191406;
    tmp_msg_0.d = 0.586517333039;
    tmp_msg_0.a = 0.217125594942;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YGKANKBRWSEBRQUSZDRPACWYXHJPMPEBISQTFIVNTDGMBXOOZHZFSXVELVPJUEKNZBCUNVAKLNOAMVUHUKOPGJQFDMNSNTHJYSZHSQRHDIBIGLUXGXHPDCRGANG");

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
    msg.setTimeStamp(0.346475589338);
    msg.setSource(44322U);
    msg.setSourceEntity(224U);
    msg.setDestination(39974U);
    msg.setDestinationEntity(79U);
    msg.type = 115U;
    msg.op = 51U;
    msg.request_id = 46346U;
    msg.plan_id.assign("TVECTJPIZYEHLKBWNOLLSUBHIKDNFDTQTFXNJJSHRTANMOZCGAGHKWYQZUQCVKBRFBQLZHKHMAEVBTNUDTAIOURJJAMXJGGAFJPEGTCORCYFLZFYQWEAWJXUDRGDWBZTYEEUPJLFFCZSHXGSSWOPMQVAWQEB");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 164U;
    tmp_msg_0.frequency = 4076862431U;
    tmp_msg_0.min_range = 18623U;
    tmp_msg_0.max_range = 60030U;
    tmp_msg_0.bits_per_point = 99U;
    tmp_msg_0.scale_factor = 0.415831537427;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.0792168269997;
    tmp_tmp_msg_0_0.beam_height = 0.249903676107;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {-103, -14, -80, -126, 46, -22, -45, -120, 74, -61, 107, 70, -5, -53, 31, -63, 123, 118, 116, 14, -54, 54, 12, -128, -115, -25, 70, 9, 63, -82, 61, -67, -83, -113, 98, -72, -109, 105, 24, -109, -32, -70, 22, -12, -55, -121, -109, 60, -116, -25, -124, 19, -60, -42, 115, -5, -68, 43, 64, 61, -63, -17, 26, 9, -111, -29, 48, -17, 126, 96, 110};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OJTCDRQSZCVIRJHKMGYQCZYSIERUQRTXSGHSMGYXVHFFQCBIBHECJVNFGKAOTSWANYOO");

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
    msg.setTimeStamp(0.509694116794);
    msg.setSource(14816U);
    msg.setSourceEntity(166U);
    msg.setDestination(46015U);
    msg.setDestinationEntity(202U);
    msg.plan_count = 51680U;
    msg.plan_size = 683521668U;
    msg.change_time = 0.0493373452217;
    msg.change_sid = 25300U;
    msg.change_sname.assign("SDIMFWDZCFREMSNRTCQPJVWTSAYVOZTTAJOLQKLULKLETZJOBGULSOMESTFQGDZIXTMCDGXBLRYAGNQDINYFIHZPJRKYUWJWDXXAZGVFUCHHINBRUXLBZXYNYXPRFYUMIQEGSTQXVZABYHVFRKJVLYBMBRIOWHCHVCIQEPHTCQAVBEKOVUMXKMDSKCPWESDGBFZQBAN");
    const char tmp_msg_0[] = {105, 74, -32, 55, 34, -50, 30, -45, -105, 44, 13, -27, 1, -93, 62, 100, -41, 77, 43, 108, 78, -21, -12, -117, 65, -96, 99, 61, 67, 44, -85, -52, 17, -43, -78, 15, -13, 1, 22, -89, 78, -67, 88, -57, -99, -101, 80, -22, 113, 1, 47, 76, -58, -6, -125, 2, -78, -32, -92, -33, -80, 90, 38, 112, -88, -78, 59, -45, 93, 83, -105, 118, -46, 16, 31, -49, 44, 90, 83, -37, -50, -41, 66, 20, 28, 16, 100, -20, 75, -15, 27, 90, 0, 101, -79, 59, 123, 25, 94, -114, 95, -57, -1, 22, 88, 78, -42, -64, 95, 24, 124, -58, -58, -32, 125, 91, 82, -64, -52, -4, 49, 50, 0, -81, 94, 102, 89, 50, 32, -34, -113, -111, 58, -83, -49, 73, -53, 4, 108, -26, 35, 122, -85, 115, -8, 71, -51, 16, 50, 38, 84, -14, 67, 126, -31, -41, -38, -114, 17, -66, -20, -4, 96, -86, 88, 49, 81, -113, 46, 116, 11, 103, -16, -122, -89, -34, -112, -54, 75, 94, 93, -97, -69, -8, -102, 103, -41, -111, 29, 47, 72, -80, -92, 19, -48, -107, 15, -48, -93, -68, 15, 44, 37, 95, -78, 6, -28, 86, 123, -59, 58, -94, -53, -57, -83, 53, 106, 19, -3, -80, 32, -103, -8, -13, 109, -17, -44, -23, 34, 0, 6, 38, -105, -124, 84, 34, 89, -119, 62, 0, 94, -9, -28, -18, -120, -30};
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
    msg.setTimeStamp(0.975741341663);
    msg.setSource(55882U);
    msg.setSourceEntity(79U);
    msg.setDestination(23361U);
    msg.setDestinationEntity(16U);
    msg.plan_count = 39510U;
    msg.plan_size = 4009546050U;
    msg.change_time = 0.303190295452;
    msg.change_sid = 57073U;
    msg.change_sname.assign("PLQPGGHVJOMRPVISYAMLXMAKWHHHIGORSPWDNUKBAMWSXVXNVNADSZTNQKLJPWU");
    const char tmp_msg_0[] = {-15, -121, 11, 4, -117, 85, -91, 17, 68, -85, 110, 56, -81, -111, -2, 92, 27, 96, -6, 65, 82, 19, 29, 126, -81, -104, -103, -86, -128, -100, 107, 76, -123, -74, 119, -105, 62, -66, 72, 110, 15, 112, 44, -35, 78, 26, -117, 119, 20};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZMYHATJUTBOCJSQGNFTNHCQLSKBXTXGLVQGBZIOIBWZRNAEKCJZAIDPMYPWGWDOCJURUNKYRYFWBRERALTOZCBSTXMGQYOCBFUDFDYJHGSGLKAJTPWETHCAESNNHWFHIEVVJXGFORUUDRAZQLLMGYHQZVKXPJEJYATSKWXXVUJDNVBDWFDEUDLSNIUMYIAP");
    tmp_msg_1.plan_size = 12219U;
    tmp_msg_1.change_time = 0.574315195029;
    tmp_msg_1.change_sid = 19260U;
    tmp_msg_1.change_sname.assign("XQDDXWOVDUDNMTUCZDPJNBKCUAZKTLCXPPWRUVMGYNGFNZHHPYRBYCOZGCXHDLBSGRGQVVQADLDENSMXPEHCHKBFWKBTXWZBIXTOIFATGRRQFSOJRVEEMEYGZUQYFYQCSLPJVIOHNRPMJUMWLNTJDUSONSLACIBZOVBUOWXVTY");
    const char tmp_tmp_msg_1_0[] = {-105, 64, 13, -47, 6, -5, 123, -68, 76, -39, 30, 2, -20, -5, -31, 68, 91, 12, 88, -36, 121, -39, -62, -94, 61, 33, 123, -29, -32, 95, 71, -109, 54, -98, 63, -123, 40, -85, 105, 114, 54, -30, -49, 93, -52, 44, 57, -47, -27, 125, -40, -30, -76, -52, -101, 45, 109, -29, -49, -57, -37, 90, -89, 37, -51, 67, 30, 16, -39, -92, -38, -89, -76, -40, 88, -114, 89, -40, 10, -121, 4, 8, -97, -3, 9, 123, -121, -37, 72, 42, -49, -30, 14, 21, -102, -76, 92, 112, -107, -14, -42, -28, 22, 98, -37, -27, 57, 116, 1, 0, 86, -126, -121, 111, -85, 99, 36, -25, -22, 43, -26, -2, -117, 101, 61, -94, 28, 41, 55, 58, -5, 42, 83, -88, -50, -104, 109, -122, -94, 4, 60, 60, -114, -1, 4, 40, -114, -110, 14, 108, 48, 100, 103, -30, 101, -105, 9, -31, -89, 37, -109, -39, -63, 22, -83, -69, -104, 28, -97, 95, -113, 70, 34, -83, -53, 19, -45, -54, 93, -120, -65, -65, -21, 58, -81, 113, 66, -55, 11, 13, -32, 26, -105, 50, 29, 13, 6, -40, 112, 22, -111, -100, -106, -2, -57, -11, -99, 29, 22, -41, -87, -113, -115, -79, 34, 105, 78, -107, -4, 30};
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
    msg.setTimeStamp(0.56338366222);
    msg.setSource(25013U);
    msg.setSourceEntity(240U);
    msg.setDestination(54321U);
    msg.setDestinationEntity(27U);
    msg.plan_count = 30834U;
    msg.plan_size = 238136829U;
    msg.change_time = 0.276718579384;
    msg.change_sid = 21318U;
    msg.change_sname.assign("ZIRJAHLDHUWANNKHCOXMCIGMXVFBIIBCADFTDVQEDJEPBRUIWFRYSKIFPGUNLYQPKWLYWRSGZBBMSFANEHCHUTOAMFSCRYWKQZPORGWOPIATALPYPYSWXVQAGQWSZARUDMPLJOUTHJWUBDANVKFBEVSILKZHNJITXOTYMHNJFJRNMQDK");
    const char tmp_msg_0[] = {-77, -43, -122, 112, 97, -75, -50, 15, 59, -89, -56, 14, 82, 65, 17, -48, 35, 49, -51, 60, 56, 46, 117, -98, -34, -85, -104, 90, -82, -58, -30, 57, -112, -80, 107, -102, 60, -124, -57, 68, -11, 108, 66, 115, -64, 100, -19, 68, -15, 3, -94, 96, -27, 121, -29, -7, 51, 51, -53, 78, 97, -115, -14, -30, -113, 71, -41, 19, -49, 40, 124, -54, -64, 86, -76, -67, -81, -77, 83, 42, -39, -118, -62, 110, 13};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VOXFMRTVALDRCKMWEGBSZMLCWNVDOCLLPRGYKDBLIHPHJSNPUJKSOOEZRXEVQBOJWBFTHYNXHTYTBGMIVISUMTZBEJCZFHEARDTNHKNSNDMLPTEIJOWTJGGLCACUZD");
    tmp_msg_1.plan_size = 52255U;
    tmp_msg_1.change_time = 0.650273795871;
    tmp_msg_1.change_sid = 47282U;
    tmp_msg_1.change_sname.assign("OAZUWHBDWGCKZMGTMVRYSINELURJCFVHAOWYQMLQMCDENHSFQYCSPNXWHPWIKYOEMBEORUGXLKXELGHJAZRPUQPNOGKVUANWTBYCSGIAUQRDPXKPXBWQMVICAKKZTHEZXFGPOMGLWXNUAHZYKDXVQLVMBPYORSXJJWQSZONFLSPHITIBCVLYDHDTAIVBVSFGTOQRRDCAUE");
    const char tmp_tmp_msg_1_0[] = {25, -52, -38, -52, 109, 89, 74, -20, -89, -107, -70, -35, 63, 74, 71, -63, 23, 66, 71, 70, -47, 19, 30, 90, -82, 33, -89, -26, -53, -114, 49, -76, 11, -63, 70, 17, -58, 105, 93, 28, 17, -123, -64, -27, 30, 58};
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
    msg.setTimeStamp(0.321106278667);
    msg.setSource(851U);
    msg.setSourceEntity(64U);
    msg.setDestination(64629U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("CYKEYJPMDICZQDFGBWMEAUNKGWVBXOSIPQDPBUCCMWXCWAVZ");
    msg.plan_size = 59602U;
    msg.change_time = 0.599485668453;
    msg.change_sid = 5313U;
    msg.change_sname.assign("SSZBGNPYPFDIHTOICWDGBACAOVGLCUBMHLNDMIKERYEURGWTRGBZVCMSEVUBKRWNUTLEWPWDJNCAUMHSQZZRUHHYKBWHMUAOTVIVJAMUDXN");
    const char tmp_msg_0[] = {30, 4, 38, -128, 76, 22, -102, -72, 73, -41, 35, -17, 60, -21, -114, -95, 88, 60, -95, 82, -102, -109, -35, 31, -69, -56, 106, -88, 28, -15, -4, -12, -6, 22, -123, -24, -96, 17, -100, -110, -35, -119, 20, 60, -41, -98, -123, 63, -116, 122, 11, -114, 41, 106, 80, 61, -14, -76, -71, -37, 119, 100, -90, -7, -88, -68, -70, 15, 91, 119, -112, -96, 4, 1, -55, -108, 88, -3, 110, -120, -52, -126, -12, 22, -44, 39, 94, 0, -68, -66, -90, -11, 94, -58, -114, -56, -51, 29, 51, -104, -87, -88, -125, -42, 38, -119, 122, -37, -44, 43, -85, -8, -63, -62, -20, 4, 89, -33, 70, 14, -40, 125, -69, -100, 117, -43, -46, 33, -6, 47, -89, -38, 111, 19, 51, 93, -28, -10, -92, -33, -3, -121, -3, -122, -100, 98, 108, 53, -44, 10, -1, 111, -19, -53, 125, 88, 6, 8, -31};
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
    msg.setTimeStamp(0.321785343669);
    msg.setSource(4912U);
    msg.setSourceEntity(191U);
    msg.setDestination(30235U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("TYQWYRPCRYLDJQRWFWWUTHCGFAAANWTGEIYTRYWFVODBENZUEZPOLMCMSPEOIOKTVIIPEVLURSKUFOAUXDBXLQJEJMDPNLJJHUDEJCXXBVKOZMENSZYFKXYQJHFXZDMTTPEZGPYBGCVAYOHXOAXDBWHSWGPUQBTIOHCJSZBVNDNKTKQVDQCC");
    msg.plan_size = 53980U;
    msg.change_time = 0.580952365143;
    msg.change_sid = 38802U;
    msg.change_sname.assign("LYFHIAKIRXUIHOZAQCVYCTESHLDPNYFWKEVUHWQBFOZKD");
    const char tmp_msg_0[] = {109, -57, 50, -99, 105, 125, 64, -70, -21, -85, -98, 107, 17, -27};
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
    msg.setTimeStamp(0.038545357298);
    msg.setSource(49099U);
    msg.setSourceEntity(2U);
    msg.setDestination(29450U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("OWWKNCLCFXZVRKIVYISALQWKWXDTZJGLZXWLOBCMZAYDTFEUQSDTGKSJPXKKGFEBAUVXCFRIWRYCKI");
    msg.plan_size = 38364U;
    msg.change_time = 0.11665252589;
    msg.change_sid = 59626U;
    msg.change_sname.assign("MJTNEPVILJRHWYVCCGSCHOCLIYCTUVRILTKEKRQUFBTQYKKSEBJAND");
    const char tmp_msg_0[] = {51, -73, -87, -77, 121, -21, -90, 106, -83, -6, 4, -93, -12, 74, 41, 15, -123, 112, -89, 70, -97, 95, 56, -41, 12, 90, 21, -126, -49, 98, 57, 20, -20, -6, 78, 80, -21, -102, 98, 24, 62, -39, -128, -96, -66, 82, -49, -18, -52, -27, -9, -110, 7, 71, -40, 106, -93, -35, 100, -71, -86, -38, 119, 62, -9, 109, -30, -97, 20, -81, 44, -107, 19, -61, 45, -68, -119, -94, 75, -26, -33, 16, -79, -9, 64, 115, -1, 101, -28, 17, -38, 81, -92, 86, -29, 20, 80, 34, 115, -97, -41, -101, -20, 104, -66, 47, -47, -37, -109, -3, 12, -123, 1, 42, 124, -43, -60, -112, -39, -106, -103, -112, -77, -43, -58, 54, -34, -108, -6, -28, -58, -128, -92, -46, 54, -48, 77, -32, -22, 39, -107, 79, -103, 52, -44, 108, 80, -50, 103, 98, -45, -1, -89, -72, 111, 75, 65, 126, 27, -31, -94, -93, 118, -20, -47, -65, 79, 75, 73, -39, 106, 1, 58, 102, 95, 41, 124, 120, 113, -11, -29, 125, 70, 82, -48, -89, -48, 57, 61, -57, 48, -23, 70, -47, -79, -76, -123, 37, -27, -99, 121, -65, 13, -9, -45, -29, 24, -91, 102, 125, -125, 38, -102, -64, 15, -73, 35, -33, -13, -85, -41, -106, 32, 112, 6, -10, 83, 47, -44, 113, 108, 38, 80, -26, -18, 75, -52, 59, -17, 6, -114, 8, 92};
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
    msg.setTimeStamp(0.253343710525);
    msg.setSource(36193U);
    msg.setSourceEntity(84U);
    msg.setDestination(4279U);
    msg.setDestinationEntity(230U);
    msg.type = 188U;
    msg.op = 100U;
    msg.request_id = 8875U;
    msg.plan_id.assign("YFWVGWBOTTEKOZMPOFGFBPCEINNQAUDHSWJCSLRKFZPXLHCEEUYGUFMJUZYG");
    msg.flags = 65532U;
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.0260222822866;
    tmp_msg_0.type = 40U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OXDMATRJYSDRYGKNCVSACHBTZEZRTPLWJRQLIATKGQPFMESPNHBBWTPJITSNCXGWQBIIRCXCJRQUVMNGUMJMVWUDGLLKDBZSRNEZFEZBBCJKDYJEWHLJFPXUQKHNMDUIDNIODXOVZKYKPPHVSFUHVGWYOMLBNWTVEPOJAOYQELLVAEAHIPRJVGQAM");

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
    msg.setTimeStamp(0.654906104953);
    msg.setSource(56422U);
    msg.setSourceEntity(165U);
    msg.setDestination(7278U);
    msg.setDestinationEntity(46U);
    msg.type = 164U;
    msg.op = 220U;
    msg.request_id = 16262U;
    msg.plan_id.assign("FIIDJBSFRDRZVNWBSVQHHRSSMEVIAFROWIJMXKZWBKTLIYFSKCQLGUIUQJWFKLDSMNZHFEEODLXXPZBKNAPFNHIWKVOAVQAFSXANMYJCNUMZZLQDULPFYCDWNWVEJJPCOUSJKXBHUAMQQVPHHSKRRYEPROGGFGOKLAGXJEYTCTRETOCDWPLNEYTUHICRJLPMQNBGQKGOIXVBYTYZTNMULACAEVMJGXDAGCQZZOWPZDYXVRX");
    msg.flags = 28134U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.469723424584;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KNBUTYRKNJRECMDQHLNTXNWTBIYMONGPMJRBWKAUVUBZAXYRGCNPJELCJCBDYVVUGWZILQTNPGPSFAVJDOUHQXYIXVVTCRBSY");

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
    msg.setTimeStamp(0.639888965773);
    msg.setSource(38506U);
    msg.setSourceEntity(21U);
    msg.setDestination(5287U);
    msg.setDestinationEntity(208U);
    msg.type = 12U;
    msg.op = 88U;
    msg.request_id = 14760U;
    msg.plan_id.assign("HNITMQYUVRISHGJYLWTZIRSPGWEXEXRIDRDMJEQIZAEXZHGHYHSTFQDBPQJGMKNUOOXLKCHDDPYRWJAVLJGYPXO");
    msg.flags = 26715U;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("LYQOWEGNAFAXUNFFIQHLHHWZBYUXEPNKFWTFZDPNZFDCGDGOQJRHRMMIIPGIZZNSNYJ");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("HVIZYLLZOGTAIMXWDFCVCKOUZFZWSQPIEZQOSFI");
    tmp_tmp_msg_0_0.sys_type = 12U;
    tmp_tmp_msg_0_0.owner = 56043U;
    tmp_tmp_msg_0_0.lat = 0.316995931419;
    tmp_tmp_msg_0_0.lon = 0.829734959259;
    tmp_tmp_msg_0_0.height = 0.0505236382674;
    tmp_tmp_msg_0_0.services.assign("UXWHSZELRESCWBPEKTUQXRUZMNEMOCLPUHNCICXWUHAKIMAOTFRZBBRTIIPHYYNP");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DVMJGCOGIEQCBTPTSOPHRXAHUYESTPGOAISS");

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
    msg.setTimeStamp(0.320579737953);
    msg.setSource(42507U);
    msg.setSourceEntity(165U);
    msg.setDestination(44076U);
    msg.setDestinationEntity(181U);
    msg.state = 161U;
    msg.plan_id.assign("EUKBQNWSIDFSBAYFHMASMQVWMTBGWWPELXUZVROAVKXDSYGFQLFDJNQZGLNKTWUUCJHERBYBXHRHDQQZPGXRADVVIPDKSFWHNIWMOXNCWBCQEFPTAYQKMOGRTWEWOTPDTYTYKCNJBNLAUFPBDFNPSHGAVLARZIZOAHEXXIPGHVGZIIJMZCYOIREVXSRL");
    msg.plan_eta = 1512021814;
    msg.plan_progress = 0.249127206619;
    msg.man_id.assign("BVWGGGSDROJJZTMHVORKPSAQMJARYEELYDHCFAYCCWZPIQTOLIVHQFMOIXYGMSUCGEQTAHCUKEIZXUYNXRHTMPABJYREPONNCP");
    msg.man_type = 22361U;
    msg.man_eta = 479310122;
    msg.last_outcome = 241U;

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
    msg.setTimeStamp(0.220890095114);
    msg.setSource(32123U);
    msg.setSourceEntity(3U);
    msg.setDestination(65526U);
    msg.setDestinationEntity(247U);
    msg.state = 1U;
    msg.plan_id.assign("BFAYCGPXVPDLWBAMFBZKDITGGVBSRZUOOAYZKXTBVLNPAEQZIL");
    msg.plan_eta = 791300192;
    msg.plan_progress = 0.0717564229006;
    msg.man_id.assign("MOOJPZIJZXRDJXJUUKCNLLKLJJRVEZYNTUKJCLOXGYGRHTTFAJOXGDFGCWPGDZMISSFFDXWKSQBHLLTUZYTGXESQUZHRPYKCBVADEHOESNSLAZRHWNYMIIHWRAWBQVCUVERGZBEBCQSONPAHXCKQCIMONGJMSVQQAMDDTQWUUUXHJIRAMTOLVIMHPFXDEEPFWVOVKQPAWFNLCVRBYSDTIAOZGYLGYKTV");
    msg.man_type = 35797U;
    msg.man_eta = 122875906;
    msg.last_outcome = 80U;

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
    msg.setTimeStamp(0.996309953358);
    msg.setSource(7376U);
    msg.setSourceEntity(131U);
    msg.setDestination(23729U);
    msg.setDestinationEntity(178U);
    msg.state = 122U;
    msg.plan_id.assign("XJKIIQNWFDKEQTXGIDLJGNITRKFODRCLXUYUIJSRZXABWJPIWSZDYMCJHOKGBQCLSNLDIOMYJHLGCTMSUBKKPRCVTHTSGHUPJNAUUAKQSVALORQBZQWFMZBQHVVGOBQHBTMDPBONXZVNEDIUVAPSUWECBTWJPEMMNXVIHFYSHZXEAFLDPMFYORWLRNLROCTWEDEEPKKNLXPZOHFRSTUCESYQIZBDVFX");
    msg.plan_eta = -860792215;
    msg.plan_progress = 0.543933780151;
    msg.man_id.assign("CHZFOGJPZPKEAWOQKKSVLGIMJYRNOBIFVLSTQJXEYOSEMCQGZXYQYTQEGPFWJZCATPCDXBEWHHQEXVFSMUZNNFHVYSMOGMOIRQUGCOQHRNUQVLGYZBGKRSEJMDNRCHTWTIILECA");
    msg.man_type = 24437U;
    msg.man_eta = -961638388;
    msg.last_outcome = 40U;

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
    msg.setTimeStamp(0.193504918947);
    msg.setSource(64864U);
    msg.setSourceEntity(44U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(152U);
    msg.name.assign("KQZZQBGEJWMXOYBZEDKLIHFRCKXNSYPNJJNLTYIUCSGDWAANMKIBMZQRPZSFLTYFDLJVXOMTBXRYXTOVFOFHSVXRFDGPWQPTHSWWEHRYSNUIELCZWCAUYSADHORTJVCKMZINFXLLPEMIUWAKPXCDUICQRJRVBKPWCEFDABHOWBXAMOLEHDXQQQIGFATOKGTUBQCUGMOVVPUHOEMNZLYKTNGBVGMHPNRGAIVDHETSULS");
    msg.value.assign("FHIIKEBUUIJJKCTVUNFBRWWJSLVJM");
    msg.type = 239U;
    msg.access = 59U;

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
    msg.setTimeStamp(0.0423762954426);
    msg.setSource(2645U);
    msg.setSourceEntity(147U);
    msg.setDestination(23389U);
    msg.setDestinationEntity(4U);
    msg.name.assign("UYYEDHPEDNZWFJIH");
    msg.value.assign("AGCWZVDOBSEOKJODERLWBCHAZJOKPODCLCPZEPEDPRBDQLPISLVSTUWEIKTMJHVJHXDQFNCLTEGCLJWYJXMMHZXHIFWTABYHIPWFCULFAYBKGMYCHYLVNZVUTWAFHNRFRJQBIUQFNSAXUKAEGQQKZFSGNGNDAOYOIPTMJSEKUSLMUTUXYYWXRBNBRVROTZCAGIZVJVMKSKDOGMWESI");
    msg.type = 38U;
    msg.access = 57U;

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
    msg.setTimeStamp(0.0836994224935);
    msg.setSource(1143U);
    msg.setSourceEntity(163U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(135U);
    msg.name.assign("PFRWLNJAJFVCEWNHGFSYJBODVHNMBRUIFGZSXVRCSEENQKYGQEVZHIWMVPWXHHXJLVUNUQMJQBGXOYUWYXFRPICSZJFKRURBMNN");
    msg.value.assign("PRROYQKLTJIIRSNFYTMUARLWGDSCFTHDQMBOYAXQMSRCHDUDRLAOOSVBGBWKUGXPLVMHPELIQYZKOASVCDGJCHWPNTFVKPXNNJSCBWFWEICZJJEKDAPZELMYCKIDLFVBBIVFG");
    msg.type = 77U;
    msg.access = 16U;

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
    msg.setTimeStamp(0.0749744210042);
    msg.setSource(9019U);
    msg.setSourceEntity(254U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(106U);
    msg.cmd = 192U;
    msg.op = 36U;
    msg.plan_id.assign("EXNMSSKKFCRVQMMDBCNODQKWSEBFYKQMJOJLZHSGCAARGURDAUTSTRDZTOSXVXEGHMYFIJPGMGNWCBWDRYLBFCHJTEIGRDMCUEIQPBMLUIUTIQGFBJHNIJLDWBCTOHXH");
    msg.params.assign("XBXYWLKEAKDNCNDZYBTVUXZSRBVAHNLLDIGOQPDYOFBXQSNLPEAWDUWLUGEBWKFZBUQXSIFHNDZQCREMPZVOPAPROJMDHCXCYCLERGOPPDSFOURJOIUHQGCZZXXRMVGSRYWOGXKKGPAFPYDHNWKVMGFIHMRYVNHRCFCFOEMKJMCLAZMITTLXTUYELSJABNSAQQIVSEFCVDKZHKZJJLAMIYBBQJQTOWRNSJGPVJTMUVF");

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
    msg.setTimeStamp(0.240392371058);
    msg.setSource(59995U);
    msg.setSourceEntity(159U);
    msg.setDestination(21242U);
    msg.setDestinationEntity(40U);
    msg.cmd = 215U;
    msg.op = 130U;
    msg.plan_id.assign("UFDEUPGEKZTJICQLJWRHMZEKATSYPQQXDXKLUXXHZKFUABSWWLJPBYPQDJHOKPSMWRTEXWVROBBGCBIWQQ");
    msg.params.assign("RSZBGHNLVAPDLMTBDHQXDTEAOMGQIICSLGVWQKIOXVYFEDWVLZJUIAFIAAQOONZHOMZUDS");

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
    msg.setTimeStamp(0.264617157331);
    msg.setSource(55746U);
    msg.setSourceEntity(34U);
    msg.setDestination(29646U);
    msg.setDestinationEntity(2U);
    msg.cmd = 111U;
    msg.op = 174U;
    msg.plan_id.assign("GPVHBCSECLPXEVOMQWHGUPOBIJSQYTIXNULKZWMIUZMXSJFNDLDNPNVAFGMHBMBYUIWHUERGTHVURVPDSWJOKTFSBZRTDRDSCHHRIMUYNODBVWQAVMDDRZKEEQFZJOEKVASTAZZXOZJTRLPFQRRFCMOCVCSUSBYKVWGTYNAWNGKAXOLQNZLLFQAKBFJDXEXPAGXXGPIMINASKDYYGQNWKLRHKUQTOYBIPFIQECZTGFEJC");
    msg.params.assign("ZSUBOLVIDGRPVLGURWIZMVWTYKKRSDAAJDFQNXSTQCLPJFPPABYIRBNBDUKLSLPWXUOITRIJUQFKAGVHIPJTVUDVSJYBKNRYBWGMDTBTJNMNNOLUZPZCDPLNXJEZFCMQOZSMYLFCKFGSBBEXMFOCITASKNDCAECGIAKGLIMBGMQFWXTCHXRKYNQHTJEIVTARHYWSHKZDGQEODCWYQJVRVOUEXUW");

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
    msg.setTimeStamp(0.796387687995);
    msg.setSource(14961U);
    msg.setSourceEntity(179U);
    msg.setDestination(17045U);
    msg.setDestinationEntity(12U);
    msg.group_name.assign("ZCDJLPQADPQBPHVQYHGVOJECXKORNBTSLEUZDYNLCWKXKTSOJUWYEMQBFFXORVQIDSGICQCXVWRKISSBMZWJHDEYXBRVAGXPJRNKOPDXNPTWTPAAFZZDTTVOGTBMFINSIACCVJUYUWOQNCEEJASGGQIRUKUAZNKDJOCIWVGXXMHFKOVUFFSLGLNC");
    msg.op = 185U;
    msg.lat = 0.476408985905;
    msg.lon = 0.540494702011;
    msg.height = 0.949379127122;
    msg.x = 0.324583561315;
    msg.y = 0.599130491386;
    msg.z = 0.181315107183;
    msg.phi = 0.347989192433;
    msg.theta = 0.429761105972;
    msg.psi = 0.0354764275611;
    msg.vx = 0.541364762099;
    msg.vy = 0.76428553215;
    msg.vz = 0.691540300705;
    msg.p = 0.625337228354;
    msg.q = 0.109820394259;
    msg.r = 0.220404751911;
    msg.svx = 0.848808998369;
    msg.svy = 0.973559168776;
    msg.svz = 0.0205103096279;

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
    msg.setTimeStamp(0.299748632468);
    msg.setSource(9966U);
    msg.setSourceEntity(140U);
    msg.setDestination(59851U);
    msg.setDestinationEntity(143U);
    msg.group_name.assign("RESFSZQRGTLYFGKHVXJYODBMECCMQHULKEDDPEHMHVISXPACCYVQMGNKDLACDRBVAOWTIWTNLDUFXPRZDWBKVUEGOMMVQWBVODAHGAZAXCXTXEDKJEGNXUQLBPJBKX");
    msg.op = 141U;
    msg.lat = 0.079890576508;
    msg.lon = 0.284682245178;
    msg.height = 0.287247324478;
    msg.x = 0.0906101047878;
    msg.y = 0.814286164896;
    msg.z = 0.295796416349;
    msg.phi = 0.0451868793494;
    msg.theta = 0.293718233903;
    msg.psi = 0.885106709863;
    msg.vx = 0.732744824225;
    msg.vy = 0.361168397317;
    msg.vz = 0.556552652263;
    msg.p = 0.539829339025;
    msg.q = 0.461281588185;
    msg.r = 0.610027746171;
    msg.svx = 0.810188407834;
    msg.svy = 0.618726455654;
    msg.svz = 0.773624590198;

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
    msg.setTimeStamp(0.108264876885);
    msg.setSource(28142U);
    msg.setSourceEntity(196U);
    msg.setDestination(12149U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("HNCRLCFCVIAUSEWJFABFSQIMENJRBEUSVODLPKBTBSJTIOELCGPLEDUMYORYVFZHJXWVJVYZDSONBGDYJYABTSYTMILBLRFSU");
    msg.op = 147U;
    msg.lat = 0.0665161842698;
    msg.lon = 0.938922764443;
    msg.height = 0.128617791543;
    msg.x = 0.134636328629;
    msg.y = 0.325536637039;
    msg.z = 0.161116937614;
    msg.phi = 0.0439066930887;
    msg.theta = 0.737553419844;
    msg.psi = 0.255727359762;
    msg.vx = 0.409853902712;
    msg.vy = 0.249038628735;
    msg.vz = 0.339523341014;
    msg.p = 0.684550598814;
    msg.q = 0.781030056603;
    msg.r = 0.457803454164;
    msg.svx = 0.854386553518;
    msg.svy = 0.629748555218;
    msg.svz = 0.426714788769;

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
    msg.setTimeStamp(0.341338162829);
    msg.setSource(14714U);
    msg.setSourceEntity(192U);
    msg.setDestination(32916U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("QPHNEKQUCNNMRQMIRVPLPGZFWDVYBUXABYBBCVM");
    msg.type = 179U;
    msg.properties = 172U;
    msg.durations.assign("MKZTGELZKEUXDULTGMWLIVDZHIHTDWAXH");
    msg.distances.assign("RVABOSFYXWNZVYFBGVXBSDWPQJEKJYZIBUTHXIVYLJFTPIA");
    msg.actions.assign("NLTNLROPVIDZPSUCKZFMDYEUYTAGSOHRYLKGXCRERIMKS");
    msg.fuel.assign("XWXFSBBWQWCLTZDFVWCCIHIQBROYTYOSYLBPCXUDTMYMDUEKMLKBJPZSHZCEHLCPRJAXAMYOLYRPGKOLKBVLKGLGUINQQRGTMOZBETEMOKAHJU");

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
    msg.setTimeStamp(0.855308721648);
    msg.setSource(51140U);
    msg.setSourceEntity(23U);
    msg.setDestination(49224U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("NHECUJOQWVLVBMUVTCUPIVHUDZNRWSTJEGWNRAATQNFMBDTPJMQFSGCRKMLGRXCTAOBVOHTFLIUJXYVTHOGEZADOKXBQTPRPUNAJVEZCQLSJSPCLASJIZHGYWKLRIKXZDNJEPQEABUNJCTYDPIITGUDKZNMYNIMYCLYYFPLSXZHQXZKBHLGKBGAHDSSEFKFSWSWYXXDXBQAHWQDFOF");
    msg.type = 91U;
    msg.properties = 197U;
    msg.durations.assign("GYMQMXZMMWCTQECYXEWCBRAIHIFGSHYODQHXYAUQVJAGGGJQQCRWSONZXVRPBAXIRDLNBEPKPSJFSKIFVPYECUHKMXUZTXPWKQIJJCQRAXSQSGIWDOE");
    msg.distances.assign("XZOGHAYRPIDNWTQVRUCOCCBBYZOBXDKBEISNZTQBWQUSFANGTPPFNPQXAQRDHAOEZGSKJAKFKQWRZYORCZ");
    msg.actions.assign("FHNBWYPIAUNYCRUKJQPRAVLQXHGELOE");
    msg.fuel.assign("VNECWTLXHQGSXNSHLRLPWOZSYTRABGYWODIRXJKYYEPDWOCFAXFVUVPMWSHIVYVTVQBNPTKKOMCUHHQJYAQEPNQFCJOKKQDLCJJQCEAZNAVDSDKQMEIHTMCIEUWXEBVJGMWRGAWYKZPJBMKYREAFTBTTRQNEPOHOMWWFDIZIXUUUYIJBGGAGKNNTYRPBTBMLEOFAZL");

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
    msg.setTimeStamp(0.573305878956);
    msg.setSource(63891U);
    msg.setSourceEntity(86U);
    msg.setDestination(60978U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("MXRCDSKPAHWJUVOLGNIPEGFYGPVXTRKYOHMWPYC");
    msg.type = 50U;
    msg.properties = 188U;
    msg.durations.assign("KBLKPLUEMMKWUXCSRIDNYOJHHMWYETQ");
    msg.distances.assign("LHNZSZDNLUYVFZUQXUPAXQYCOHAUBVEQMWNECPNKLSDJQMEHDZYKUSDGVHGTJLMPSRXBOLAGPDTZPOFUFBMK");
    msg.actions.assign("NSIWIVYHQSPCZKLXRRVTOTTBCVGMOUNBVSMPGRSISIOIDAWXDLXERYXUAZVKESKCUXREFDBJFQEOMAOXLMDQSOFXKQTKWEBTTHHCNIALLNYZNHZKFCBBATK");
    msg.fuel.assign("IZFMEWODIWDHDOIJAPYWMJTNEDRTQLRDVTKGTYKDBUDRATLEKBWGRLIVQAPXZEPJNJFQKXQCGHTHXWPXRUJUZXGUDRHWIBMHRYXSMGZECUDFOMVECHCJKWTPHYCOFZYRQAYNXGCQZEMOGSNPINOOHLRLFAKMFHASXUEAJZI");

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
    msg.setTimeStamp(0.075148016426);
    msg.setSource(14047U);
    msg.setSourceEntity(58U);
    msg.setDestination(17871U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.624386380449;
    msg.lon = 0.783945372828;
    msg.depth = 0.398578404762;
    msg.roll = 0.105441046695;
    msg.pitch = 0.903867399454;
    msg.yaw = 0.181177412877;
    msg.rcp_time = 0.733445641417;
    msg.sid.assign("XLHZKKTIERZXHPMYZYZFJMLRQRLFJMCFGEBAYFWWDFOEZTXKGISAJJFDGNJGDPTYLVPXCBBISQTMHCZVNADFRSYUTSHPYZNEMCADVPAOGSMOBBQJUSHUNFEYNQQVUKRKDPAZGMXDXSVTE");
    msg.s_type = 231U;

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
    msg.setTimeStamp(0.796495802082);
    msg.setSource(64424U);
    msg.setSourceEntity(240U);
    msg.setDestination(823U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.737216481925;
    msg.lon = 0.21512857135;
    msg.depth = 0.17526134045;
    msg.roll = 0.943263029633;
    msg.pitch = 0.996021630301;
    msg.yaw = 0.111703764003;
    msg.rcp_time = 0.556325395962;
    msg.sid.assign("BRSJRZAQDITVXQVVTWJEAIQJQLXCFOHQGXKYXJWMRBEDMGVZMLIJMVFWQNWSIHLAKHXBKTUELZMFDHNPNCPRYHDJKXXUMYOYUFCLJWVARNSBEKOIIFKNANTCXCSZFS");
    msg.s_type = 106U;

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
    msg.setTimeStamp(0.979996635161);
    msg.setSource(1170U);
    msg.setSourceEntity(196U);
    msg.setDestination(64565U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.550191801087;
    msg.lon = 0.563513820738;
    msg.depth = 0.939547349296;
    msg.roll = 0.980683811576;
    msg.pitch = 0.627057178253;
    msg.yaw = 0.882979259104;
    msg.rcp_time = 0.866773521893;
    msg.sid.assign("ASPCGHGOQZPGRRSCOMHSDUXVGKZPEWXAFZLMULKMFPVVTHKFNQFUEDCDWUVAVEDMXHRPHOFCXJFAODOBMJRKSJNBWCLTSTVGUKJYPUMTDIHUYIOYAIJREOWGLXIJUKCDNSNZZHXRBTYGZPABI");
    msg.s_type = 142U;

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
    msg.setTimeStamp(0.19535390551);
    msg.setSource(51806U);
    msg.setSourceEntity(8U);
    msg.setDestination(61002U);
    msg.setDestinationEntity(15U);
    msg.id.assign("XWLPAQKBTIBINCREGKGDZBMTAPNCTJAJROBGAEEKOIUZCTBINUYGZQOICKSPNWBPYRFXZPXUSUDCXRXJAHJVHWYGFIYTJFLQVBYPSRLCGUZYFTYKPSECGVMUONHHCBSEQRLKMQEPEMFMQPYLKGHLTIAGLTSHVUZWQRMTALRFVWNGZHAJAXFEEJFLDPOHOBUDHOKSIMBWWXFKRXVQDJVJWUXVXQEZMADMTDWCFOMODSV");
    msg.sensor_class.assign("RJJHACSQPLKYQHKARLGMOLPCDUBOTEFXUQAQMCIFBNWQNDNINM");
    msg.lat = 0.763967218625;
    msg.lon = 0.231985918956;
    msg.alt = 0.619022062125;
    msg.heading = 0.527794729816;
    msg.data.assign("KSZYRBMVQDUKAELAWFMVKNCGXOOXPAHDWUAYDNIBFJWMFKNOLNCZPMZCKKCZIMLUTUBMPZHDVRURGEDBTVYSHQXTZQMVYLQ");

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
    msg.setTimeStamp(0.964422704153);
    msg.setSource(24906U);
    msg.setSourceEntity(72U);
    msg.setDestination(20361U);
    msg.setDestinationEntity(181U);
    msg.id.assign("OWSZYMOVEFUQRJMRAZZWTUCLCDJLERQKXBWBTJTGYECYG");
    msg.sensor_class.assign("TRYGUWTIWSFGNAGPPEEKUCVMHZHSQJJATOZLWBJLDRIMBDZKLRWXXNQHBWJXLKFCZOCSH");
    msg.lat = 0.233983401772;
    msg.lon = 0.794285419824;
    msg.alt = 0.861251969966;
    msg.heading = 0.297473519093;
    msg.data.assign("REXPSKKXCYBVJZDVEBEYCMBIHVWBVQMVDMGNTECNFIIVCLYOZLJSNKETWPHNMXPGCZFCHGJOQPAKUGHZATKMLYKBBDNIOCSNKHRNLVXCNWXERSQTWGYHWMMPXBZOZTULFARWFTZOWXUMJSFTOOSJTSPHXQLUDELKGJAQGBPARUUCHIDSAIOF");

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
    msg.setTimeStamp(0.83749515492);
    msg.setSource(2234U);
    msg.setSourceEntity(105U);
    msg.setDestination(171U);
    msg.setDestinationEntity(10U);
    msg.id.assign("IQMDRNYHECCGXQZTJRKLPOTPVZBMQZCZINLWSXREJAILEHSHKVYANQKYKMQYDZETKHAYOOUVNGMGPPRFASLDZVPLNJXDEEQPCGHHFFLVEBDGXUVMKBOMVWCNEBRTSQPSKUFCOFABJYCYGMSCLMHLSTUBWFBUNXXAAJAOIZIGIYBUVNVNAXGVJXK");
    msg.sensor_class.assign("YOMQRMABLAXEJLSGKBLHGWMZFOBCOVONCLUXJZOGWHZIXWWEMZDCAXROTKGPVLWFIZCDZKSZDFRHPFOJVTEYPBIMVNQIGXHGCNPHENDUNJIXDPPOSKBHKTWFTRLMBOPWCIEBJXTSAMKSHIXFJTEQMYOQKFAQUVJNUSRTKHUSZ");
    msg.lat = 0.576250991626;
    msg.lon = 0.265921143829;
    msg.alt = 0.0921913830392;
    msg.heading = 0.519573529881;
    msg.data.assign("YIIYTSBKITVOBTIFEUALOAUVITK");

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
    msg.setTimeStamp(0.700530039122);
    msg.setSource(27577U);
    msg.setSourceEntity(195U);
    msg.setDestination(3241U);
    msg.setDestinationEntity(122U);
    msg.id.assign("NCIHLZRMDKXJYUHAPABQXZONPZYKJOTSJVPFZCNHXBJZYXQBAITGSQSDKLVHOEXROIRTIMEHBXPTOKRV");

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
    msg.setTimeStamp(0.326199799653);
    msg.setSource(49573U);
    msg.setSourceEntity(203U);
    msg.setDestination(58845U);
    msg.setDestinationEntity(82U);
    msg.id.assign("AOBCZIFEUDYWDGFSGYZGKYZRXMRLEENNFBXGUEIDLJSWLCCVJIHWAVHWFIKZTOMYHVZBHOTCQQMYKGMTBHVSMIDSTLDOJJXJOSGACSNRWIFPFKP");

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
    msg.setTimeStamp(0.294865507635);
    msg.setSource(6030U);
    msg.setSourceEntity(101U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(110U);
    msg.id.assign("BCLTSPLXYLHSIBEXCBWBJGXCVKGFWFHHHJFOCHIVUENFOKGNQEEYGLPBIGQJELBMFZVNWDXVRPCYCYYVAJIMAUSZWTXZPSOXZVBIJCOXTFUGKVPZXKAWNAGUSTQXSCTFGTYEPAZRUGJNALICQFJIIYPMVBZSKDOOWMMVEOAVKRIZWMOTTDHQRPBUUXMJMUHUBKLMLFKPSQHNNYRC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ODQCMCSYVRBGPPBFNUVIUVVGQJZAGWIUMWABBJBRJMLGGRAXPISMKLAHYVZXEOPNYOMEJGPCAKJGLAYUPNRVOCJPQLDRTFSQDEJRZ");
    tmp_msg_0.feature_type = 10U;
    tmp_msg_0.rgb_red = 217U;
    tmp_msg_0.rgb_green = 231U;
    tmp_msg_0.rgb_blue = 8U;
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
    msg.setTimeStamp(0.119354401915);
    msg.setSource(60952U);
    msg.setSourceEntity(49U);
    msg.setDestination(23034U);
    msg.setDestinationEntity(189U);
    msg.id.assign("CAOGVKCNOISVGVMSCHVZSNVQSZNSFLGQRPBMTFBFQATXOKNSEYRTZMXTNBDKAEGCTKCWOTPWSFEAYJYJFBLJODEXUQYRPNMAIGYMKUKBHZPZDTRBQEULJCFJUWDQHZCIUIGJPNQ");
    msg.feature_type = 78U;
    msg.rgb_red = 187U;
    msg.rgb_green = 193U;
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
    msg.setTimeStamp(0.731166919239);
    msg.setSource(50346U);
    msg.setSourceEntity(99U);
    msg.setDestination(54730U);
    msg.setDestinationEntity(191U);
    msg.id.assign("WOZAVJFIBLFHGPTIBCAOSOWATYZZOJVXOYEGEGDWHVKXOUIEULSWRAMSRZVQOSUGWBFNERKNABGCVBPGQYGJLGXUJRNRVIQTMDPYEPHKPXHBXZPSTTCERJHIRODSWSMQNZTPSVMWQQYRYHDEWGJYKLIUFFTWYBVZZNQLNXHAULPLKHMBEAVSUIAJFNYRQPIDCDB");
    msg.feature_type = 91U;
    msg.rgb_red = 106U;
    msg.rgb_green = 77U;
    msg.rgb_blue = 24U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.123506602191;
    tmp_msg_0.lon = 0.10243331272;
    tmp_msg_0.alt = 0.174591874143;
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
    msg.setTimeStamp(0.837030726184);
    msg.setSource(58930U);
    msg.setSourceEntity(228U);
    msg.setDestination(36740U);
    msg.setDestinationEntity(120U);
    msg.id.assign("NBMUMQPKDULIZVASUPMYLNMSXHUOQPIBRFGRXLXDTEVRIYMQUOSVNVOKLQMZSZAAFFHPWPHWSHJQSGGOOGGUSIDLUNOQNRJHLZVCZCRHGUYYQDRBIJDGLKRWTPFLWPGKBJKMADEFWIOCLESXDXEQCXNZEIPXZQCRYZKDYDCWJSWTYTGRVWMYINWTKIJ");
    msg.feature_type = 104U;
    msg.rgb_red = 125U;
    msg.rgb_green = 161U;
    msg.rgb_blue = 139U;

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
    msg.setTimeStamp(0.882598875857);
    msg.setSource(47579U);
    msg.setSourceEntity(109U);
    msg.setDestination(18590U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.272363467872;
    msg.lon = 0.16933350788;
    msg.alt = 0.00694637786366;

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
    msg.setTimeStamp(0.994634443375);
    msg.setSource(17858U);
    msg.setSourceEntity(53U);
    msg.setDestination(26671U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.205851433772;
    msg.lon = 0.942378538805;
    msg.alt = 0.752443055567;

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
    msg.setTimeStamp(0.0825098735416);
    msg.setSource(9608U);
    msg.setSourceEntity(243U);
    msg.setDestination(60093U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.697252955464;
    msg.lon = 0.325196999866;
    msg.alt = 0.890537783859;

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
    msg.setTimeStamp(0.334538958445);
    msg.setSource(31896U);
    msg.setSourceEntity(94U);
    msg.setDestination(40029U);
    msg.setDestinationEntity(121U);
    msg.type = 138U;
    msg.id.assign("MRKKQAMHCNJTWULFBZCQFKZJWIIGSM");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 143U;
    tmp_msg_0.file.assign("ZOFTDZWJPCJSKVFXRGXXPJNBSMXAZOZOMOMELAVCHEHHSCFJPORSIATECSEIBRBMMDWCKEKSRTPTXTRULYGXIUALROIUWZREGYQDQHLYFZLGBGVYAPTJWWUGVDWPNXIYHTQQVDGBPVFIKAMBSTVDLFFSCIWQEXZJQONUVNLNDEMNWMOYYLRZVEFNIYHKGQMPACHSRHOLDKJKRHACTOMFZLQNQUEWZJJNGACISYQXIPDKTUABUKBKCXNFBUYH");
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
    msg.setTimeStamp(0.987808553144);
    msg.setSource(50844U);
    msg.setSourceEntity(150U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(19U);
    msg.type = 110U;
    msg.id.assign("DJUFUFFQNEMUMPQRYZHKVEUNIHBNRSKTLYQRGTHNIXTZHRFWCIAMXVCVSIVAMGNECEFPDWKJVDLCQHCOPC");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("TBCLOHLZIIPDSPCNDCGVJRGMADXMYEHKETWFGNNPFJYJBBJHSUWKJXBGYHQWDINXSQUAOMPTRUBSFBKWLHFLXDYELPZZXNXTE");
    tmp_msg_0.links = 3370054741U;
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
    msg.setTimeStamp(0.689468919463);
    msg.setSource(6148U);
    msg.setSourceEntity(52U);
    msg.setDestination(39013U);
    msg.setDestinationEntity(18U);
    msg.type = 115U;
    msg.id.assign("OBCMNTFYJYGC");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.996822306865;
    tmp_msg_0.y = 0.00179719253823;
    tmp_msg_0.z = 0.277561906234;
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
    msg.setTimeStamp(0.329341112357);
    msg.setSource(35011U);
    msg.setSourceEntity(58U);
    msg.setDestination(27819U);
    msg.setDestinationEntity(17U);
    msg.localname.assign("JCTPGISCRNALANWKKRPEXUHDMVUNHUDRYSQZOZBTSUJYCHCLAAOBZSNGCOOPGIKNYEEBNDDJSPPENQCKZIGWAIRISVVNDTLESXNFLWXWZMDYJFJLKRBTLADWBKQIEZCYQUMTQFPVLBM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PQDMNYSLCCYKHANWIDQPMOEYIWRJWVNDLHULRRKIBDHSQLYXXZVZBHRFBNGLQJYAEEZAHKFOJEFHENCTXHOJRGZROPFQIJVVYDIJOAQVTUDGVRBSNQT");
    tmp_msg_0.sys_type = 152U;
    tmp_msg_0.owner = 13287U;
    tmp_msg_0.lat = 0.505288967835;
    tmp_msg_0.lon = 0.876753705626;
    tmp_msg_0.height = 0.0956347958594;
    tmp_msg_0.services.assign("SVLGHEACLVYUYPQRGJLBISLHUSFOHTOCUSMCAMIGIMAVAVEE");
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
    msg.setTimeStamp(0.733440732925);
    msg.setSource(22125U);
    msg.setSourceEntity(239U);
    msg.setDestination(52614U);
    msg.setDestinationEntity(40U);
    msg.localname.assign("FXEFAFGMPK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QDOGTFUBAMXJIZMKUZNXEUCNBFTVTNWAREIYUKRWIXGWXMMNOSCPWTYVODPV");
    tmp_msg_0.sys_type = 42U;
    tmp_msg_0.owner = 44187U;
    tmp_msg_0.lat = 0.550705162889;
    tmp_msg_0.lon = 0.491152443605;
    tmp_msg_0.height = 0.417494219993;
    tmp_msg_0.services.assign("WFGONYZDFNNPSLFEFOFMDXNKIUMXOQ");
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
    msg.setTimeStamp(0.679804112886);
    msg.setSource(58266U);
    msg.setSourceEntity(25U);
    msg.setDestination(42866U);
    msg.setDestinationEntity(174U);
    msg.localname.assign("YMPHMYLMGBSTZCYEU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YJZJQJYBJBKEIHDOOUEZPLJWVEYLCSVFNDXTYNBYDABYPUSZVBLOCTJIGIWGEBGFLQPIXOXCNKQCARVUNQXWXRRPQCSGHDLMBFRALHNMYWASHTWECZNEGFSVUGLWGOXUTHAHFQTTDAHYITSILNYGZADWMFGQZRMEBVNIMUOKFHVPVGMWKMRPLYHAJRNHZBUD");
    tmp_msg_0.sys_type = 143U;
    tmp_msg_0.owner = 34807U;
    tmp_msg_0.lat = 0.410941797527;
    tmp_msg_0.lon = 0.0949637600885;
    tmp_msg_0.height = 0.779448472836;
    tmp_msg_0.services.assign("YUDSFKXEEULZZSHMZBGAKABEGBUVSBOROYLNREPVSPEXFN");
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
    msg.setTimeStamp(0.014036454061);
    msg.setSource(52354U);
    msg.setSourceEntity(201U);
    msg.setDestination(64594U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("JSMSYUCWKEOBMCTBSNVHQDXRPJVJSAXJBRPRUAYLTFEFQAUQCTPXWNMEABZAZGWREHUCZKPLKYEJBLACURRCMLOSIGPPVGRMLPXBFTCJPZTORJLAVKMQMSDXIDFTWQOZUZYJOUGYGDDHZSYUSKCZAKLJJLSOMOTFVHNKPZFGVLIXEFTRKQTIKYMHOGNIQFOGKANNVBGSWMHECZYHYHBIOWNUAXCVXFNNGYIEFQHDEWBWXTPLQDDVBQIVRID");
    msg.predicate.assign("FZVCLXCGGNSZESWJDSFLUORPGDXHOEYLJBKWCQBTRWPKILVRMNCBWZDEOVBTIGNVTRHUYDSMOJBJESTTZMW");
    msg.attributes.assign("LESAFRHPYOVGZMIHFJNDGIUIXDARFWGECWVLUPMQAHFZYUXFPAXSWWTHUOOGARYNQBTFQRKVWZJKKKQBZNXSBHOUBCNFHQVKEKEJZVLVNYLXOVVIATFXZEZGJMJRPNKDSCRDJUPSMMYDYKGCBCWFX");

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
    msg.setTimeStamp(0.886776967061);
    msg.setSource(36753U);
    msg.setSourceEntity(159U);
    msg.setDestination(57483U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("ZNDICMSUBHKLTUAXFWMFDZHUOECJQXGHWASXHSJVSPWPOSVAQWNHBNEBEHDOUAMZLFYRTKYIBIRKADDGFXSOEREADPXWLEDROGMCYNGZUNRUGAJLMKNOJCIJRTMXVCWTOAMGBCLVDFJDUWPNBNHVRXTMTYNQFTHZYTLFRGVBBYAYQSJQKCSKQKYPFYJXCQWRSQNVPEWTMLCVIZYPIHGSALVXIKEBCRGZFJUJKPHGKUPPIEQBZIQOFOVM");
    msg.predicate.assign("JNKATJEIBAKNYLVFKJRJMYDDGRALGDWETFYUPOESGHZHRVJFYSHKMKYJXVAOSADTSTBRXMRVYHLIBIFBXGUMHIEQRDOOWHNAEHVWQFJUMOMZWTTHBYEHWQEICFGLGXVJVCXSHXZLSLAAWWBDXDNZGCSNUUUYKM");
    msg.attributes.assign("PDLDLQPMGSOWZIWDKBIWDQJPHFCOHBYMYTTFYGVUKRKJUDABRKAKEGKDCUFMLSDKUNBWSQTXVJQBZPXRYSGHOOHCLOXLJQIFSVAVYTYJAMEISGFGMOOVFATUZERWLILFXQNMNQ");

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
    msg.setTimeStamp(0.335275539673);
    msg.setSource(9004U);
    msg.setSourceEntity(117U);
    msg.setDestination(30977U);
    msg.setDestinationEntity(23U);
    msg.timeline.assign("YNIKVGGYOAIGVEGBGKVJLKKAVPMUAMVQCTDWVTVZEXQILQKEYHUWUIFAJTZOQIMEEJTYLWXHQKEARFJSUXRRRVZXRVBJRZBSWXLDBLXDACMTAZFLWDZSJHTFSUTNZIRLMBUFZNDOPXPMJSPNPKLHMTMKXQWQQJUYM");
    msg.predicate.assign("KGZAMMDUQOQIHFOTEOYUEFHJVWQCPEXKSZSHGYZSQAREWVCAWWOBCXRINBHSJMIYJEPVRHGNECVIBNPBSVPJIZDUEGJKZUFLTVAYOXCWFJSUWPARGXDNXBNZILZYQNWBFORSNKJMNPSGRVPKCVLPEXUTRCVDKDQHMGIKOQTYQJUMLOJCBQRDIHHXKFYPBUTETLYTWMYLFBQASYBMW");
    msg.attributes.assign("CEZLHIGAHYZTQVIGLFIKSPTEJKQVLUAUDLPXGOWSQSFXPRLGBZOIKPTTMXOYPQGYBFTOQMWQCYWLFNZWROEMCLOUUIMECSFWVNNRFAFYZOHJDHAHOKFTWXQJXFMLWKUIMRIUYAJHNNYWPWYMUUBEKNVGDVVTQSBDBRGPCDA");

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
    msg.setTimeStamp(0.54849977414);
    msg.setSource(44777U);
    msg.setSourceEntity(234U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(245U);
    msg.command = 71U;
    msg.goal_id.assign("KDMBCKLDTTGGZEQPCMDLWKILQUASKLEOOVVJUVXQBHOOFQDRAXVDWYKAYIXPYWMHRMOZHPFHKFSTBPCGRVUWJULRRTZTZFUYTJBJRCDIVYBSPARA");
    msg.goal_xml.assign("FFHNGSRRMSCEDYNEYNMXCCZEOZCPUDDWJLBBARCXTDKIHXULUQGMAKQOMFNDMRAJFIMXJGKHIMNOBSKMAZEQJDLWOGXAP");

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
    msg.setTimeStamp(0.222516055692);
    msg.setSource(22008U);
    msg.setSourceEntity(224U);
    msg.setDestination(10255U);
    msg.setDestinationEntity(246U);
    msg.command = 237U;
    msg.goal_id.assign("BYVVPXWDGBONLAVEWLMQHTJYMFJWOXHBDIOEOWBSTXTCPCQHJZYZLVJNHGDRLNSUBPQMKAFGQYMIZGYWDXREENIBXPWTBJZECOKGMEFHDOJ");
    msg.goal_xml.assign("UXTNFUVMFCWLTFOQBSWLXUCXTMIFVRKEYSUVAFADVULCULKIEXLKHGDAXBWAYRKBDHRSXTJHZIQZSBCYMIZ");

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
    msg.setTimeStamp(0.434254806977);
    msg.setSource(63950U);
    msg.setSourceEntity(73U);
    msg.setDestination(37397U);
    msg.setDestinationEntity(149U);
    msg.command = 22U;
    msg.goal_id.assign("OQQMJQDHVZBNCBIVLMSPSDJTPKXHIVHCJDNGKVVGGLRSABXZYBUHLOASKNLRJILOLWZBUDIHTNHFYXFXFZLSCWQUVYXALTIBYCUFFOYNUTLIGBXCADDSJKOBVEMIE");
    msg.goal_xml.assign("FWUJTDERGBGZACBOKGRFKFNPNIFGXHRQUJKMDKWSLPIOGQDJNGLFHQNYLZCGSSHBZLUTLHXYYXBVHKFRZAFXDWRPXFTLBPNSZVOOTPMCRVWYICYHJJAPDYUCPIZZKBDQMHEIIVCAHORHYUDAOIEZUSRPMJTKWKLQNCGUYEXSRJKMTEUADECGBTBGVQEWBAOQHJNIKIBOXDTMNSEDJXTJXYSXEVQWSYNIMURVZOUW");

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
    msg.setTimeStamp(0.685162990305);
    msg.setSource(12403U);
    msg.setSourceEntity(106U);
    msg.setDestination(13101U);
    msg.setDestinationEntity(23U);
    msg.op = 181U;
    msg.goal_id.assign("PIUFGWSWVDIYUPSEQPMGBCOMJCQXXAEWZVJUAPJBIFGUHJLBCGKLXDMVYAFOEGQKFRCOMIVHLWTFHTQYVZCHDPRISLJTYLHVFRAXEDSALKCNDEJUVUMWBLOKYHVQHCEQUOMYXOYYFGNKOOCQXRGWJKZSTBJDBPIVSCNDUFOZUXSTYRNHXSOWY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PVZRJLOHKTYNQJEUVIYQPHBWXDNDHFOBYBNAIAOYNGNCCSMIHKHLCJLUZUVIARNIJZWQUJV");
    tmp_msg_0.predicate.assign("WPZZUNTVHLUUQFFZIVYGDLSFVSIWJLYLWIIDPNNEZAAMSRKQXASAECTNCPJP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KFQXEBONLGIVKJCSDBPCHNWHCVOMXXURPLKEFLDTEMVZABEHCPXBARMZIBNUIPMFSYSQDEZQSQSMDNXYCFOUOHAOTOHAWFFTGBZJT");
    tmp_tmp_msg_0_0.attr_type = 208U;
    tmp_tmp_msg_0_0.min.assign("MBQJITAJCWMXXUORO");
    tmp_tmp_msg_0_0.max.assign("PFIRBPMKONXQCPSFHRCHDWWOZZTXGYZEYAURIROIZKCSNOFOZWYNKAWEFLCSREVYOSQIVMXCRMKMGOTXHWZJKHQCMGRQATTIQDEQABYYCQPTBHFEEXRLLINWAUTLNLLVAMJNTYDKAVBUBJVPSTWHXVEJYGPKZMMPKVJVPICABFVUAGUHNEWYBQFRMISNHLDQUZIJSPBREMWGTVNJBXJISHOLUXLGQN");
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
    msg.setTimeStamp(0.419572151988);
    msg.setSource(27150U);
    msg.setSourceEntity(54U);
    msg.setDestination(29996U);
    msg.setDestinationEntity(81U);
    msg.op = 193U;
    msg.goal_id.assign("UAJCMULTCXKLXDUJNVQGTRZBVIEGOJJIIQXMWCWJCWMDRRPWWIJTEUKHNYPZNSDGLLMKQIWYVTJRAOYMRYMIKQLGREFOTYHAUOBCPQPYCLWRDPPGQXZJRDIAVHSQABVHFOCGXSYAQESNZWONQYTYUXXFIGVMZBEUJTZZRPDMDIDAANUCNWRSKHVAZEFMSKSJUEGBQSSLZMFGNFXAOHDKTKBFFX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AWREEPBNNCCOWZBBQUCSKWKOKIRPXXOGGHANCZBOKHZDPX");
    tmp_msg_0.predicate.assign("YMPHTNKGJSOAZRDYXARBRMRPZJNIBEYVIAGNJXETUUVZDYXMBAKWTZASVFACSDDYUUAZZGXICGPFCTLPVWBKVYZSVLEISCKQMHPDLHLMJKZDKYMDTONLTGOZBOQUZRHNPKOUFHXEUCGR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SMROIXUKEUQCIKGJKDNTFGRUEPIUVNPKCQAGBIKTHYTMRYJDVDGWNMKNMWWOFOINFXGHTLZUVAPHMW");
    tmp_tmp_msg_0_0.attr_type = 107U;
    tmp_tmp_msg_0_0.min.assign("XBWILTYHOHCSFCKXMXZMYUKJWPDAURTZTXZJSWITUQZSWJNOPADFRDTSESZIUXLIUGVEXHBCHRPBZGPHSKOYMLNHKDXKUYVCNMBQAEJNYWHVKPIGRK");
    tmp_tmp_msg_0_0.max.assign("GAVZHKIREOAOYHINYKKTRPKFCXNEFMUVRXYMSHYXPDJZTEQYULJMEXGFAABOJSLSWICITLUPTIAVIAQSGBOSTBGLZTNUTHNZTCIBSFVNGOQZRSCIGGCBMVOYMQRFUFQJEKRYSAHACMMZWQBDMXQSWIRFNJLJBFBDHQDCDFPWQZUGWDVKXTKRYXDVYSGLRDLUBMAKORPWVJYHKEHCWHWTMJKUNOLUOCXJVAEW");
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
    msg.setTimeStamp(0.69443004562);
    msg.setSource(62259U);
    msg.setSourceEntity(239U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(14U);
    msg.op = 26U;
    msg.goal_id.assign("DCTPJUQHSKLWAGOBRSMCRRILG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MVXBNFEOAIDDDIWMBWDZZSXJTWRJUSNVJ");
    tmp_msg_0.predicate.assign("ITEUNPHBCEJFWVGXGARGMVZLBLLBAJWCLHKOLHTLPQHIANZBVRRNLNOKAXQMVT");
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
    msg.setTimeStamp(0.516353054837);
    msg.setSource(21865U);
    msg.setSourceEntity(57U);
    msg.setDestination(64613U);
    msg.setDestinationEntity(142U);
    msg.name.assign("FJPCLSYZJSKLQTNMFEHTUECYLIOUYLCBDXFASGCNJZYBMVRLXSRZDTHHXOBFWTMYVBYQGNOQVKFKQCBKOCNPUAPNHJZVLZBMGBGGQMDAHGCENEJRJVIFTSRUJEWPDMGDFHRNOLRWG");
    msg.attr_type = 49U;
    msg.min.assign("AVWKOOCSTBLQBJVXKORZEGSAORJDIXXSCZVHNQMCJBRBQHXSCHPEMMFYVNJELXWKWJHXWNHWAZTMOHLLOHCPGMWHQQTBPUKAPTBWNUXRJDGGDJGIZRZYSEMATYDEILUTLYDRQYSLTBKRLDUROAMDZVCIMTNFAIPNOLXUEFBB");
    msg.max.assign("VQBVKJEMAEJLNXWOUUVMHQEINCSXRFMJCUMCZMBDWYDFLJTSIDIPTOYPUJQTDYCWXWXDBMSAYOPLZQONNBABLYRPZZQLGEHOEJKOPQPSKBQHVUGVGHYMOZRYRAIYEWYASWRMXAKGAOHI");

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
    msg.setTimeStamp(0.287333634104);
    msg.setSource(14253U);
    msg.setSourceEntity(196U);
    msg.setDestination(3779U);
    msg.setDestinationEntity(14U);
    msg.name.assign("BGHBSQCRPDQGRYAOXGRG");
    msg.attr_type = 189U;
    msg.min.assign("RESCIBTAXEAXDMNSOSFKKFSUDDZZKOWFSFNNYUJYRVZLKPYITVQ");
    msg.max.assign("ZVGXDXDMITADTWOVWBFEKOHMOHPUQIULHKBOJLCDVDRTHCXQGNSAAJQEQWKXUYIFSRPYFUQVZUMVJFRAILLLROKHEYJUBXRMBVLYWDCDBPAWPKAPKBFBMIKXWZOYMCRFNWZVSKJZOQWETIZNYVNUDBGJHTETGEHIHNQPFXIUAZNUGVTLOCFFETMNCBLRPSYGYWSNXIRQTPRMJAQEHJ");

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
    msg.setTimeStamp(0.981956243492);
    msg.setSource(3756U);
    msg.setSourceEntity(93U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(114U);
    msg.name.assign("FTAZAPADMDYGSRRCNZAZSGPCWXBPGWHLWFUYLKKMSXSNQRAQIPHFOFUNVQISYBXHVTGKCGAGITORLRYAKJEZRPBTWQOFHJLKFBVEQQPJZEYXVMFEWWRLPJJCKGJ");
    msg.attr_type = 72U;
    msg.min.assign("ORVNNJDNGSLGIWOFMUYIXEISUERJFPTCYOHCULMICKZAJQUCRG");
    msg.max.assign("XLRUNRRCEKGRMYIWMZTDTIHUUQPQYWAEUGFWDNTHOADNBTCOHMJFVWQDFVNMBYMAHJFQGRFFARLKOIERQOBCXHZVPBCRZSAUDTGKLBFAYQHXTFGHQFVSWJZPQHWMRTKNIPXBOLCGIAPWVYJDSYCSBUZXKCKLUTGOADNEUNENDALSYOSNXEMVDGAXMISPJ");

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
    msg.setTimeStamp(0.431267220911);
    msg.setSource(41197U);
    msg.setSourceEntity(196U);
    msg.setDestination(42497U);
    msg.setDestinationEntity(53U);
    msg.timeline.assign("IUWVZHQWIXABIFMRPIMBWDXBWKMYELECCNGSZMWGLMXZTBLXYJEVHOKUAEZXGFJDUENYTPXOVKTGCINPUQXYKJTZPMSJTTZQPRBGXJBQSZWBHFRYFAWNQAQOUOIHLPQJNDWTRTUQRVSRDWZCDDMHHDDJRTHQVGMSOLYRSVHRMHCFNGWYKHL");
    msg.predicate.assign("NYJTDCJXPOTICQOPERDOFKVADZSZHCPSNMSGOTDCNRTPITSJQSWQSPPJYZPJWEIGQVUVBMVKUUARZYZJNYBAJJFYQMSERGGURZ");

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
    msg.setTimeStamp(0.495183933963);
    msg.setSource(20543U);
    msg.setSourceEntity(201U);
    msg.setDestination(32268U);
    msg.setDestinationEntity(57U);
    msg.timeline.assign("RUBCSIOILECGHDTUWZJXDFKYUKKCLYISHLKKPVSMXPKFPQONVKCTQVPMBTJWOTSAKCAYWBJZTHZZQZQHBAQWMUFFTJRSELTECNUWEYVOXMFOMNAOUFBOVFXEDDWQOZHAVBURYALVKSZGSJEPWFMNSHLTLJRZXQVPYYGMEBJLXCNIQFAPQJRIDAWDXNNCRLIHPNSNBYEXOIFIUTINYXRTSEHPLPZJWHRECGVIHBBDMARWGAXGOURDKGVDGMZJ");
    msg.predicate.assign("BZQZTKWZIBLELAXGYAJWCYXVLBBDDWPDDDOOKMSBYNRQCPBYZIYVMIONKMIUJPNJSFLZDSURYBHRKXRKCLNOEGFHISRGOEHENPSTFSD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XXARCTNWPXPWSJQTCJIRYFPUISJADAVQVLMBPGQWDFYZNXULDWGKCJRORCVRSMRNRBZDBPATFKNQKGAPVOQJDNAMTCOSIDLZKHSJBIQEMSSBBGLXJLEXN");
    tmp_msg_0.attr_type = 217U;
    tmp_msg_0.min.assign("OFUXWESYEPMHZUPMAVSNTGJCYRIJOGRNBWJKVZIBMISPXXQNKYFURVXSJCGTKRDBZWGEXHGCGCDYCIMNASXUVWKOF");
    tmp_msg_0.max.assign("IBLWEGWSQOTBJXXVYWYMBBCFTQUUOEXAXJQJLQCSMYXKHMSNSVOXJLXGWXVMYUVFTIHMHDPTIJBDLEUUJTFHVBJWBIEUJHCEWZNXIAROZOTKHRAYVRFNKDKZTIAKRYYUOMVYIJFPCWZQUHWFCPDHMDHAEWUEMTSCALRDKEOCNQSGIQZUGDLFNRASFGTYVQVLPQCESFBKCQ");
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
    msg.setTimeStamp(0.703901789996);
    msg.setSource(7376U);
    msg.setSourceEntity(91U);
    msg.setDestination(28691U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("FBIEDLFTYRIAEUPASJNKQZCOCRVNHKOSBDOBEFMBXCYWCTQAQSLSPHKWBATTGPQHTBJUOEDQDEVSUMWKQGKRYZLUIJXZNXFTTEWNHRKALVMDSWKYLMBIUNTIRPZZHXCFOOWCBXKYOVTQBNNUFIPDUFPQCVSCM");
    msg.predicate.assign("IXPVTGKLBAK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VEKDTOQQAUBYSLUBZYHTQGTNGMJHS");
    tmp_msg_0.attr_type = 174U;
    tmp_msg_0.min.assign("ATNBSSRDRNDDKSQNJMFTDVDFRKRVGYMXVERZXIQBASUIEOINCHQ");
    tmp_msg_0.max.assign("LIXAGTNAWOZGEMXPUDJHLIEXAAPZMOSWEHTKFICYMMXPHDVIMSLBNHRCB");
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
    msg.setTimeStamp(0.156627525684);
    msg.setSource(26080U);
    msg.setSourceEntity(244U);
    msg.setDestination(19015U);
    msg.setDestinationEntity(72U);
    msg.reactor.assign("QMKCJAOZXHCTPSCJABXYEEATHTWOULBBXMELIDFPLLWLHAPAUQEGHZYSBWVJSQCKIYDMKSGJRXZTVPXDOZYSOZJZEJKJVDMXNPFIIMPGLIMXKNCKIREFHOHVBGLZTNDQAVNBDUELNYPFBNLRMSVRRKYSCKIZGMDNHWYRWXXYAXUNUQDIGVQGDWT");

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
    msg.setTimeStamp(0.971356004194);
    msg.setSource(52738U);
    msg.setSourceEntity(21U);
    msg.setDestination(44742U);
    msg.setDestinationEntity(226U);
    msg.reactor.assign("VQGNIRHKENKBXLUBUF");

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
    msg.setTimeStamp(0.013996370513);
    msg.setSource(15088U);
    msg.setSourceEntity(191U);
    msg.setDestination(30603U);
    msg.setDestinationEntity(204U);
    msg.reactor.assign("JSWXJFPUPBJRTMMKZKE");

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
    msg.setTimeStamp(0.961312396803);
    msg.setSource(16271U);
    msg.setSourceEntity(49U);
    msg.setDestination(130U);
    msg.setDestinationEntity(0U);
    msg.topic.assign("QDPMBKBVFHVYBVLYPFGNOJETSPJJQMKBAPBCWDSXNTGSXTVEUIISIAUCUZNQAIPZCYKKDSOEIUZQDRLYSGOIOBPFLSA");
    msg.data.assign("PRYKJHZRRSNDJKXMYPYGMFLOKSLWSYTARAIDRLZOLCKGLRYXOHKCQHMVTFVGGAUAHUMCPIEYEGVJSRUBGBLBZHCINVDUZZWMLVZQLXKQTAQPFZXOYUJIJBRBLEFPSQWJEIJWUUIYAXMFQPYHYZICGARNDTDFBFWAUEQHDWVSEEJIGZBXUQEASJXDNWKTDOOPXFPTFKQTVXNPNSUSJBFHEXHWT");

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
    msg.setTimeStamp(0.728660310731);
    msg.setSource(62202U);
    msg.setSourceEntity(72U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(68U);
    msg.topic.assign("OPCBJMCLZSSSKNXHSHPTEZGGDOFINYBNXXEKUMMJHTIVITKYAGCPYHJEN");
    msg.data.assign("DIEZLGGZMDNUJVAZVMLEYRVIYBOLUOPOJSCBJOWHRBVDDNDYPZALRJZAVLYDELQVFPGMXCFFJHKFCCMFXQXSFRKHEULPMMZTEX");

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
    msg.setTimeStamp(0.374351654243);
    msg.setSource(45831U);
    msg.setSourceEntity(5U);
    msg.setDestination(48647U);
    msg.setDestinationEntity(74U);
    msg.topic.assign("NOVKHPDEJBQGCCKKVWHAANAGEJCUBEYUYPOFWEMPQSBABOTSNOPSPOFTAIQFPXBQMUBKASCDGKSNQDAFHXRZFRTZCZDHGKREGJUASUQXBKGMVWIWLRJOXJPHNTZYWXMWHJMDHITUQHZWQRCXOMKTMPPESBZIFYXNISLGOLTTEMVLRIOFITJZYRUGZUYLSLYDCYMNLFJZNVMRXOVUICCQLHDLEW");
    msg.data.assign("CGDEHNZKLPRGCHEMYNPEJQXA");

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
    msg.setTimeStamp(0.064498418063);
    msg.setSource(18225U);
    msg.setSourceEntity(242U);
    msg.setDestination(34523U);
    msg.setDestinationEntity(173U);
    msg.frameid = 115U;
    const char tmp_msg_0[] = {29, -93, -80, 100, -120, -117, -23, -34, 51, -93, -2, -20, -82, 28, -106, 85, 63, 26, 22, 120, 79, 39, -106, -106, -57, 30, -57, 33, -54, -60, -49, -124, 66, 12, -80, -14, -94, -57, 78, 106, 67, 124, 107, 95};
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
    msg.setTimeStamp(0.815236643943);
    msg.setSource(43651U);
    msg.setSourceEntity(249U);
    msg.setDestination(19203U);
    msg.setDestinationEntity(159U);
    msg.frameid = 225U;
    const char tmp_msg_0[] = {-119, -11, -84, -7, -22, 52, -22, -8, 53, 82, -69, -29, 9, 21, 9, 54, 99, -60, -64, -29, -108, 94, 75, 43, 116, -35, 104, 81, -32, -90, -79, 54, 98, -22, 16, 114, -94, 56, 101, 29, -113, -20, 73, 85, -63, 9, 70, 10, 41, -115, -116, -32, 101, 10, 99, 59, -42, -84, 107, 89, 125, -74, -16, 24, -5, 55, -15, -75, -37, 32, 37, -56, 110, -83, -20, 17, -62, -32, 67, 47, 25, 95, -21, -25};
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
    msg.setTimeStamp(0.201370000881);
    msg.setSource(39474U);
    msg.setSourceEntity(43U);
    msg.setDestination(45262U);
    msg.setDestinationEntity(6U);
    msg.frameid = 163U;
    const char tmp_msg_0[] = {33, -112, -68, 17, -92, -97, 41, -24, -22, 47, 39, 54, 66, -54, 36, 106, 111, -31, 124, 58, 54, 103, -105, 39, 120, -68, -88, -83, 24, -12, -89, 19, -21, 113, 12, 74, 53, 28, -107, 116, 3, -23, -94, -54, 80, -115, 14, 74, 75, -30, -48, 120, -77, 110, 95, -14, -62, -77, -99, -123, -96, 51, -110, -125, 92, 9, -9, 107, -124, 118, -62, 8, -66, 32, 69, 98, -29, -46, 30, -98, 71, -106, 15, -69, -48, -120, 0, 26, -87, 19, -12, 83, 84, -21, 117, -100, -57, -114, -95, -41, -4, -100, 100, 40, 32, 72, 18, 42, -110, -7, -22, 79, -84, -73, 35, -49, -121, 75, 9, 37, 1, 12, -75, -71, 82, -43, 23, 52, -44, -70, 109, 31, -67, -106, -19, -86, 16, 118, 117, -107, -124, -5, -57, 68, -39, 5, 65, -112, -25, 59, -32, -2, -128, 122, -47, 48, -31};
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
    msg.setTimeStamp(0.125671228573);
    msg.setSource(64904U);
    msg.setSourceEntity(31U);
    msg.setDestination(21346U);
    msg.setDestinationEntity(95U);
    msg.fps = 207U;
    msg.quality = 29U;
    msg.reps = 15U;
    msg.tsize = 242U;

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
    msg.setTimeStamp(0.388503340419);
    msg.setSource(42455U);
    msg.setSourceEntity(214U);
    msg.setDestination(64217U);
    msg.setDestinationEntity(191U);
    msg.fps = 171U;
    msg.quality = 26U;
    msg.reps = 62U;
    msg.tsize = 52U;

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
    msg.setTimeStamp(0.0643061593122);
    msg.setSource(23977U);
    msg.setSourceEntity(169U);
    msg.setDestination(8376U);
    msg.setDestinationEntity(17U);
    msg.fps = 155U;
    msg.quality = 240U;
    msg.reps = 25U;
    msg.tsize = 219U;

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
    msg.setTimeStamp(0.507307441589);
    msg.setSource(24188U);
    msg.setSourceEntity(101U);
    msg.setDestination(20376U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.254676354451;
    msg.lon = 0.448874583573;
    msg.depth = 97U;
    msg.speed = 0.357100384597;
    msg.psi = 0.885457260216;

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
    msg.setTimeStamp(0.790158205709);
    msg.setSource(36195U);
    msg.setSourceEntity(56U);
    msg.setDestination(59123U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.345968678497;
    msg.lon = 0.0605063114418;
    msg.depth = 100U;
    msg.speed = 0.981059266329;
    msg.psi = 0.165245921094;

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
    msg.setTimeStamp(0.0502093249048);
    msg.setSource(22575U);
    msg.setSourceEntity(163U);
    msg.setDestination(45703U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.636870962839;
    msg.lon = 0.360939977536;
    msg.depth = 119U;
    msg.speed = 0.301387875788;
    msg.psi = 0.833527975533;

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
    msg.setTimeStamp(0.166073324331);
    msg.setSource(3640U);
    msg.setSourceEntity(147U);
    msg.setDestination(14705U);
    msg.setDestinationEntity(77U);
    msg.label.assign("JBMWPYSOXBFIGYFSUXGIDIDVMHBOYAPCAMDZKKMWYKLRGGORSZCLLZCEEEQPUUZUTBVROXLWYJHGMGMDFODEUKAPNUZJSPGVSTBCMKNSNE");
    msg.lat = 0.312778640742;
    msg.lon = 0.543768019274;
    msg.z = 0.0614788703257;
    msg.z_units = 78U;
    msg.cog = 0.920731364905;
    msg.sog = 0.124861552151;

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
    msg.setTimeStamp(0.469494930751);
    msg.setSource(34968U);
    msg.setSourceEntity(3U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(28U);
    msg.label.assign("BDGDOGHJEYFPYRPKHOLWVDYSFLLNTYKCSMOSYGJHSOUAQIUGAELRHWCPFKYIFURHMQUWEKJQCGCANIQPLVVVIVJCDOGLIDKFMUVAJAEWKBVJYTDTTYZBCSPSNKMHMDHFJEQVGIBACXUTQTMNRRGRELELWZIENRXWZ");
    msg.lat = 0.849739792662;
    msg.lon = 0.130620785412;
    msg.z = 0.649968758551;
    msg.z_units = 96U;
    msg.cog = 0.168519204634;
    msg.sog = 0.555718579588;

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
    msg.setTimeStamp(0.294845182444);
    msg.setSource(43665U);
    msg.setSourceEntity(42U);
    msg.setDestination(28297U);
    msg.setDestinationEntity(138U);
    msg.label.assign("UAQQRJXFIIAWNNZZLOHUNJKOFGDJHMEWGNNRNAIPQZYRTCVYBRCARKKDYZAMSLWAAFLEXGRXHFFIHHUGYWVVOLPDBEWVUTWDBVJPODENKKULPFYCHIMQLBCFBTABOMMIJTKJP");
    msg.lat = 0.578323059154;
    msg.lon = 0.945125343965;
    msg.z = 0.542214947406;
    msg.z_units = 128U;
    msg.cog = 0.941100590783;
    msg.sog = 0.0988369608508;

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
    msg.setTimeStamp(0.432879713489);
    msg.setSource(64817U);
    msg.setSourceEntity(141U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(230U);
    msg.name.assign("KEYDOZQPTDQQJNGNHKPS");
    msg.value.assign("XDRBSNOEDTZQWBIZVNWKJDHMHMHXMRMSAPWEZYHBPQEKRCHQNOYKEXISWAFFPXANPAOFJNCUTVNFXQKPIYTVEOJYLDMKPWEETHMQUHHUWPYFMXRDZQV");

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
    msg.setTimeStamp(0.197919474106);
    msg.setSource(61953U);
    msg.setSourceEntity(253U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(30U);
    msg.name.assign("CHHJCIRNZRGRSRVMSTTWGMANFTHABIFOXTSEFTABUCHGDTYTGILZXFLUYPRPXCJVGUQNJXKEWSMCAIUMWMKFOLJYOMPFQKZREZPCMEDPHYSNXBVBKAOWJQGAQODESUDYZBLSARVBDXLNKSWUIXILIODNSQQVYWBKLOHYEPULRWKXPWIAEWFZMBYEBSJKNLKAYZZOVFNDCJXDTGCVNIIPMRTGNQTJRPVHKECGCEYPGUDZQWHOF");
    msg.value.assign("KNRCNFXIJAIQLYXHEOSSUYVUFFWYTJTMSUXEBTPGSJQKQLOZNIMCMVLKCOWUXJDRSFKFCSSJAWTBHMOZFQLWMQJAQJPPACDIQYLATD");

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
    msg.setTimeStamp(0.894140128977);
    msg.setSource(31248U);
    msg.setSourceEntity(129U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(235U);
    msg.name.assign("COPMDMOVGZYOLSLJAFIJVSURJRECWAJWWBFPRPPSQZNOSPJKYUUHGDEPRXZSEHYAHSPCHLKRKDVBWSTOHMT");
    msg.value.assign("HLNMKQSYHQAWITXRNRKGMPODKRGIGHNQODOKYVTKADCIPUZIHEGSMYCVTSRNZWVMSVTLCQMTIKXDMJGNMCLLFJHUNDJBRUWLFFLBOJXNIZWXHQFAYUTVCFEOJLPQQTRZOAHXJEWDUPSOXPBHIAFCUYUEZAGPLIYDQFQMSRKJGJFXSFOJEMACEYNSZCCCJIYTH");

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
    msg.setTimeStamp(0.345144498831);
    msg.setSource(41258U);
    msg.setSourceEntity(72U);
    msg.setDestination(23383U);
    msg.setDestinationEntity(153U);
    msg.name.assign("RKITSBCAMEVUHHYNOBCSOTWASRECKHXEQTHNLTGYGEAEWCISZQEEXVDFTKMMPRWAVFZYCHULSLIMSAXRFXVQTVFMKKUGHQCGBQDESXZCOKHCJMENKSUGNJGRYHNLNPVPDXOWFKDFYMUUTKQILYRPBQFVMRJGZTDZXJNBJJAMDDPGNYWPWRUVJUAIIDWPVCMOPHFOATBIPQNYFORJZLBDGWIOZUUOPW");

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
    msg.setTimeStamp(0.925354561969);
    msg.setSource(48002U);
    msg.setSourceEntity(238U);
    msg.setDestination(64062U);
    msg.setDestinationEntity(70U);
    msg.name.assign("RKTMJYJBTXQKCBE");

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
    msg.setTimeStamp(0.616232877463);
    msg.setSource(31022U);
    msg.setSourceEntity(87U);
    msg.setDestination(7509U);
    msg.setDestinationEntity(98U);
    msg.name.assign("TRQOHKJHAUUTJCYZDUBEAGRFLHLDRDDVTFVDYESFPFVERBAYBOELMMINTXBWWIUWNBUDRPKFFUXNJSNVPGSIRI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EJDQBBNXGZHFIDNOMFBNYVVXMVKEYPLDTDSDYVTTZNJFXUYFKEJXWHAEBEIONYCXPCGJTUYWXXKGWZSEAGOANOONUPFQQGMLJHXQZPWIPPRMLZIPOVAJAMRRKYCGHHKMPZINJKYJGVTMSQHCLGWCVOHXIBDSQRAROAXZDZRCRMMAPUFFHBRVTJKUSEHIDLGIPUWLVKTWBUCSL");
    tmp_msg_0.value.assign("UNOTFGBOZVHXYHCPMGWDQETJFLXUNCEZZMVUSVTWQMYNKKMYKCABERPDHICKQZOTZHKSIHSJFFYFFESHQTLALIISWGNVETORIALDRSTDICRPALZGVBQIKXJERCMMHAXIQOVBLRDMUGXPPOFPBKDHAUYXBUWPAPBQLOTHGXYDWAQRIXCGRYVREWSNTUYCMEQYLZCPUUFNS");
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
    msg.setTimeStamp(0.720153179451);
    msg.setSource(7883U);
    msg.setSourceEntity(82U);
    msg.setDestination(64907U);
    msg.setDestinationEntity(164U);
    msg.name.assign("PRJOAOVWNH");
    msg.visibility.assign("FBGZEQBSGJMEDJRQCHMLRSANAHKLOZYREMFSCSOTTDLEOEHFRVKWYTQABCFJGHENGMLPUOJSJNHDESNJZSDQHPWCXFXINNDEKVVLKUNWIJZFYIOTSEVYWQDLWGPGKPMMXXBQWKWBTQLJQVFRAURKNYIPAYLLIIMRIPLZBYBPZQU");
    msg.scope.assign("MNRTSXEMQPYIVPDYVYGPMGBPKMFRFIEWCGYQQBODZTLQAJEQSYXZFSGVOUPXSNEHSNORMMNLUPHOHKLHVJTFFIXNAVBRCUIVDUVGCTBEGLYGMYFXUTDBSPHTMTCCTFGCYZWS");

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
    msg.setTimeStamp(0.665373952841);
    msg.setSource(27762U);
    msg.setSourceEntity(48U);
    msg.setDestination(44882U);
    msg.setDestinationEntity(2U);
    msg.name.assign("VOIUJXYUXEGMWUKQCFEGQFVZTEFAFDKVRYYHGWGVYSTVZXCKHLJCWBMBMCGAPXOLZVGCSSXFQLBHFRJTWRQMWJCJPMPSNFQHXHK");
    msg.visibility.assign("AYUPUXRWJBHRCOXLVLODSFGHNRDHKDEPDBXWYIBJOSPNEVTMAVICLEMEHRITNKPRGLWMSRUMNMVFNWJLTUTNJREADFJNAFUETZIDADMHQZEHVTLWASJGYYIQPAVLIBSKACOIKCEBXSDXSYWGZKVKXFPFIOYIFJVSOWOETYFMXQNNQZCFHYWRSJCHGLUQACCQBVBGTCQATQGXIZ");
    msg.scope.assign("RXWNLRXHTGGXQZWCTPNBENYCQYHYDHEKRPQWBGLMJNKIGMLAKPVWQXCDKWSWFMKMIUPCGGYEYUQXEILERFMEALSBUYVVEQMKSWDTHOFOQEPXJUUZPSUTUFDNUSJJUCQXHNWDKVHKAAJYJAODHBPVZHBATOGFGOXMOOPVQRHSXCHNBFJSSO");

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
    msg.setTimeStamp(0.0306014656026);
    msg.setSource(61092U);
    msg.setSourceEntity(42U);
    msg.setDestination(5541U);
    msg.setDestinationEntity(195U);
    msg.name.assign("IOZTJRZBCOKMUSZLBETQCCPIETICAFQZUDAWRWMLKREOUFTVKARPJPNM");
    msg.visibility.assign("YXRSXDNRRMPADDVLYNSUCHLGBTXNWZTITOLSRQCCJTOAMSYPXHXINYGNOVZJFNWCVMPBKMJYKMUJLODTRJMOGAVMEBVEHUDYLXFQZQGVGSI");
    msg.scope.assign("XUAXPCVDKFGARBVOIJMIXFPZGLHKQKVNZVTQRMGHWOKDMYIRZSZGTWMHAIBFKNUSFZNDNUODCKRZTHSNDJHAEHSOJURJID");

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
    msg.setTimeStamp(0.308446168566);
    msg.setSource(59510U);
    msg.setSourceEntity(6U);
    msg.setDestination(54245U);
    msg.setDestinationEntity(24U);
    msg.name.assign("YAXVDBAHIQWTBDJGBOCJEZHXKSORGQRWEGFIETEFYNNIAJOLMGYXUXYPMVVZZNQUFQCMLGKGHVBSVQRSYFBCNRIPAHVWSLONEZKYZOEDOFUWLREDPEKCDIQDXUIPJLUFDVBSAMCZH");

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
    msg.setTimeStamp(0.480085005252);
    msg.setSource(1304U);
    msg.setSourceEntity(58U);
    msg.setDestination(53109U);
    msg.setDestinationEntity(141U);
    msg.name.assign("XJWBXHUKCXERBFVMADRSWGBDCKLANZPNRJOBPOGZUSWLIVGMYQCJHKFFNHCBKQDDJTNWPYVFMNKBTVXHRAVIHZLQVFIJYTEQSQXCYMNLIXRTGYFORDQZROVULKAUWTQT");

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
    msg.setTimeStamp(0.619155305496);
    msg.setSource(17358U);
    msg.setSourceEntity(43U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(78U);
    msg.name.assign("OTVAHGDPXSFDQGBWCHLSKOSAELCFYRSHZJQQPBKTLNRVNTMWSNSWGVGKQRMPZKODNYGXSBZPBNWODXOHMALAAJVKZAUDEXIXPWKWTMCLGKHCTASMBEVCEPZMUXOHPXV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OIXFRJCKLQHWYXZZGAUNZRBMTKPDDIZGONHEFEABRNJKBJIKZFYLXGKBVMDOCCLGVUMMDSRIEBHFAEJWVAQZQKRFPBWAY");
    tmp_msg_0.value.assign("TFRONQLMRNMPWMUIXOYDVDWRPSOIDOGDZJEUHICBDARLYTOCMRJENHVYGOJJUEZIALNOKIYLBKVFTUZEBCIOCTITUG");
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
    msg.setTimeStamp(0.54869305023);
    msg.setSource(27070U);
    msg.setSourceEntity(171U);
    msg.setDestination(7277U);
    msg.setDestinationEntity(39U);
    msg.name.assign("BGKCZEVSTSCPANYONHAGGXWBTRGLJWWRARVFMDZJXCRYKJSYHPKBRFQLXAKBQYKDHPMCOGWQJFYBUITTYVTSJZPPLJZCNFDIXOFAEQOQVTXIRNDGQWWDUYBZOBZSXIM");

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
    msg.setTimeStamp(0.256538975479);
    msg.setSource(55403U);
    msg.setSourceEntity(11U);
    msg.setDestination(12230U);
    msg.setDestinationEntity(101U);
    msg.name.assign("RYDJBZWDFIWQETIVHFEIXGMDSYHBOJKEONPXGUVVMGCZNHRPALTARSFPFYYOGMUNEMNUPYOJPGFHWDKKRCKPSLKWKWXJXLYYLTXBABOFYHNOWSVXNXGESXHMZKHVQUSZTAVLOFRAFHATQEBVLTFZIRLBLDMHQTGHJNQKCTSDGQDLOJJURRVUUMXUOMDLYDPJKCOWDTFUZWARENPEZAYQWIBQ");

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
    msg.setTimeStamp(0.718982441082);
    msg.setSource(6223U);
    msg.setSourceEntity(205U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(108U);
    msg.name.assign("YUSOPDDPIXXNWOVBINIHDDFUOGRBLEPDQZRVVOSAPKKTACMHVCHRYSJMBSHUCIRNQFBYUHMXQJILNYSJKDTFRNLTCXEIKHMZPLTMAKSMIRJFDEYUVDHNWOOTVXWJLBGOPWNZMMATZSGYXCXNEMEWTPBTLIGQYOGQQIBRWCCKGFXENQG");

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
    msg.setTimeStamp(0.657408646942);
    msg.setSource(62294U);
    msg.setSourceEntity(113U);
    msg.setDestination(41381U);
    msg.setDestinationEntity(98U);
    msg.timeout = 3742199193U;

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
    msg.setTimeStamp(0.959217527759);
    msg.setSource(50244U);
    msg.setSourceEntity(248U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(34U);
    msg.timeout = 4058070778U;

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
    msg.setTimeStamp(0.230088314373);
    msg.setSource(43487U);
    msg.setSourceEntity(3U);
    msg.setDestination(6412U);
    msg.setDestinationEntity(205U);
    msg.timeout = 1618455951U;

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
    msg.setTimeStamp(0.826934901643);
    msg.setSource(3298U);
    msg.setSourceEntity(229U);
    msg.setDestination(45915U);
    msg.setDestinationEntity(8U);
    msg.sessid = 3154238923U;

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
    msg.setTimeStamp(0.309721729626);
    msg.setSource(57508U);
    msg.setSourceEntity(61U);
    msg.setDestination(48654U);
    msg.setDestinationEntity(0U);
    msg.sessid = 1001435023U;

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
    msg.setTimeStamp(0.833729694336);
    msg.setSource(34739U);
    msg.setSourceEntity(144U);
    msg.setDestination(42536U);
    msg.setDestinationEntity(122U);
    msg.sessid = 2089289563U;

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
    msg.setTimeStamp(0.155179713434);
    msg.setSource(39691U);
    msg.setSourceEntity(198U);
    msg.setDestination(1106U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3636185684U;
    msg.messages.assign("WZRZCJIRHJMUZVZPQMXMEBZIRPKTLXJDGXFYEMFVXZEFUNVYXWLIUOWUMPMORTKWHGDIUGHIUMGSVLAEHIUWUCGZCRMRIYLCVFVLJKOZDXS");

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
    msg.setTimeStamp(0.480468443401);
    msg.setSource(37584U);
    msg.setSourceEntity(5U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(184U);
    msg.sessid = 1979146402U;
    msg.messages.assign("PGYXHPFSYOUFANPBDGZINMDZSOMDUKRQGBBDLGWRATETVNYZOYCGEQMRWURSXVNCZTKXJVVABXHRLXWBOHTMLAKIVNYOTQEGWHPGFRFLTAHTMNSOIVLFJQUYUTMCJWWCIDXPHLKQWAED");

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
    msg.setTimeStamp(0.8027485495);
    msg.setSource(16036U);
    msg.setSourceEntity(250U);
    msg.setDestination(22515U);
    msg.setDestinationEntity(176U);
    msg.sessid = 2172342564U;
    msg.messages.assign("MYDFNMQQDCQNTHPFZXWEAKUFSPLFGHRLETTGSTWJXSJZBTHJYKSOHJCRQDNXPGEYNOQAMGVSBARMYRVUFKADVYDZZYQGGBDJUJWQAEWWOXRNCKLNIHCKHKHOCKXJISLHKEYCBRWWVUIMVVAOSEIMZYDALYBCEAINWLWEMUIBUDMAJSCZZKINXISBCYVTUPUUVCQFRBXXUIGLL");

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
    msg.setTimeStamp(0.279440630723);
    msg.setSource(13280U);
    msg.setSourceEntity(189U);
    msg.setDestination(7233U);
    msg.setDestinationEntity(107U);
    msg.sessid = 671507843U;

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
    msg.setTimeStamp(0.0286644268908);
    msg.setSource(34744U);
    msg.setSourceEntity(98U);
    msg.setDestination(20842U);
    msg.setDestinationEntity(214U);
    msg.sessid = 2578628756U;

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
    msg.setTimeStamp(0.570164361585);
    msg.setSource(64229U);
    msg.setSourceEntity(220U);
    msg.setDestination(37908U);
    msg.setDestinationEntity(250U);
    msg.sessid = 544521204U;

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
    msg.setTimeStamp(0.182732688261);
    msg.setSource(17890U);
    msg.setSourceEntity(80U);
    msg.setDestination(922U);
    msg.setDestinationEntity(79U);
    msg.sessid = 4361421U;
    msg.status = 39U;

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
    msg.setTimeStamp(0.188471511376);
    msg.setSource(14270U);
    msg.setSourceEntity(228U);
    msg.setDestination(26736U);
    msg.setDestinationEntity(27U);
    msg.sessid = 164323971U;
    msg.status = 243U;

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
    msg.setTimeStamp(0.459386931525);
    msg.setSource(34746U);
    msg.setSourceEntity(210U);
    msg.setDestination(47970U);
    msg.setDestinationEntity(194U);
    msg.sessid = 523879773U;
    msg.status = 29U;

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
    msg.setTimeStamp(0.154966215158);
    msg.setSource(52922U);
    msg.setSourceEntity(5U);
    msg.setDestination(46204U);
    msg.setDestinationEntity(191U);
    msg.name.assign("HHEDUFHSUTRDAXWEBOUKLTOKTHCCMZIFEUKJRAZENRZHLUQJKCAASGDSTTGGWLIXLXDVXPTZRBXUYUCLJQCUQJVCSA");

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
    msg.setTimeStamp(0.635244794187);
    msg.setSource(598U);
    msg.setSourceEntity(96U);
    msg.setDestination(2542U);
    msg.setDestinationEntity(40U);
    msg.name.assign("XGAQHVTVQMISLMLPLOOOLKDLUVYELQVFYPSFQYNDSACAUEQMIFWPPFJWVBGWISPQECGLGIWBNC");

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
    msg.setTimeStamp(0.538763206646);
    msg.setSource(17027U);
    msg.setSourceEntity(244U);
    msg.setDestination(57304U);
    msg.setDestinationEntity(30U);
    msg.name.assign("EHKDOZKXQZFLZQTPTWKRDVPFGPJBWDISEUMQTAOFMFXRQYILUXCZRADVYTJSIBGHJOEXWBKAUWZPNERBXOVEIHZRDQBMVNVWXLQVCPVGRNBDNGFV");

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
    msg.setTimeStamp(0.863711274498);
    msg.setSource(26521U);
    msg.setSourceEntity(222U);
    msg.setDestination(9754U);
    msg.setDestinationEntity(242U);
    msg.name.assign("FOBZUBVUJCLMSSBTZPROFYHMSELXXTPJBTATJPPNDIIOREOXWZCUDYXGVOELQJQPNPOIMZKWJCSATHGIGDSLMGOAFNDQUPYGGLFAPOKIBGLCUSDWVALRNTSRQHBRIYWQZPUZEHGNJRTJRSZAIBWMK");

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
    msg.setTimeStamp(0.678471014104);
    msg.setSource(3311U);
    msg.setSourceEntity(117U);
    msg.setDestination(56488U);
    msg.setDestinationEntity(201U);
    msg.name.assign("DTNHVOPCUPBOLUEGLJMJDDACQVROLKACPDLEYZSHQIBQORMJISUOROMFRXTNYMIYCLJINIIAXGPXGD");

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
    msg.setTimeStamp(0.213274768318);
    msg.setSource(35514U);
    msg.setSourceEntity(223U);
    msg.setDestination(34498U);
    msg.setDestinationEntity(195U);
    msg.name.assign("HGBQJLDNPVAKVXOHGUGWVIKRFQAHLASGXORUPTRTNHLPAOCMWKJYEYCFDXTDTJJWUQC");

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
    msg.setTimeStamp(0.826579728499);
    msg.setSource(62254U);
    msg.setSourceEntity(3U);
    msg.setDestination(13239U);
    msg.setDestinationEntity(124U);
    msg.type = 242U;
    msg.error.assign("QCUGSRONHMJJCLZMQNVHBDWFLMWORGEKDXUAEPSSMPAIERKCKTLBVSAQMSCYIPTQCAOLQPKIFZJSSEBNGOJXCUWEOLPFZBTXPYFYTUMKIIRHHQMFXOORBJDLGNTGERJKRJKQIMKGSLBZVRDGATHXHRNUIFQLPXECGWALZTEYFEBDHVZWCYVQNTNZXOBVUWSZYWJJHVOYVKHWDZHMKQLMDVGBAUWNRIXAXAAVFPEPD");

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
    msg.setTimeStamp(0.484049074527);
    msg.setSource(48850U);
    msg.setSourceEntity(215U);
    msg.setDestination(1657U);
    msg.setDestinationEntity(46U);
    msg.type = 130U;
    msg.error.assign("IQATJUKGQGAXTMJFQDVHFWETHUNINBRVFWACAWAYKZMZXKSLHVHTRUVPPCBZAUPDSXTWQNGSRVFDBSOKSOWXBDWNMMTSUKFQWLTRAUNZWVBPDMEVHCECSENGIEVHOLMYHCYFXYH");

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
    msg.setTimeStamp(0.0098423295658);
    msg.setSource(20493U);
    msg.setSourceEntity(97U);
    msg.setDestination(38061U);
    msg.setDestinationEntity(91U);
    msg.type = 128U;
    msg.error.assign("JUEYXKGFSBDQIHQUUWEJTKHRMMIAVGTWXZVMPZEOEJGLGIDFVCHKPSMRBXOZMZEFJOCODHNDPTYYBFBSOLHBPNNTLYNOAQWWVXACIXIRGUMVTCNWRYKSEHAQVLGHLPQKSJPGCQYUREXHXZFBLYTHDYKVIAGQBSHSSMOEMUAPTCPSK");

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
    msg.setTimeStamp(0.159481757725);
    msg.setSource(51475U);
    msg.setSourceEntity(69U);
    msg.setDestination(16729U);
    msg.setDestinationEntity(150U);
    msg.seq = 42549U;
    msg.sys_dst.assign("DFIFMCJKQUHFMIGROUEEDSSYAYXFEDUVNYLWVWZGPVMHTMGITSZREWDXTRMKTVBJNOZTNYCMGUOCSBSRBFXYFJVXMQSJKXZPFOKEVIIJSAXUIKHWWRPNHNGYSTQGJHSDLAHUBLGPJZDKPALIPCPCAFXUBZSEDQIVLATQFHCXWYOLGDEVJEDTUBPEPYHCBWYHALZTRZKMBCRCRQAQJORKLWQUYOGZFB");
    msg.flags = 138U;
    const char tmp_msg_0[] = {-35, 75, -108, -27, 81, -84, 109, 22, -92, 100, -85, 4, 109, -85, -121, 56, -78, 93, -17, 71, 71, 28, -18, 48, -107, -113, 117, 95, 58, -6, 35, 86, -114, -19, 87, 37, -87, -107, 70, -45, -18, -104, -45, -16, 51, 16, -40, -97, -69, 99, -84, -120, 16, -53, -15, 97, -54, 69, -29, -126, 17, 36, -13, 32, -44, 49, 87, -57, -17, 49, 73, -85, 1, 67, -28, -37, -71, -13, -90, 100, 100, -95, 6, 32, -45, 5, -68, 66, -116, -57, -70, 36, -27, 35, 92, -38, 79, 113, -16, -14, 20, -94, 17, 39, -55, -40, 65, -125, -128, 65, 72, 119, 9, -34, 18, -79, -67, 37, -27, 83, 8, 33, 63, 99, 101, 23, -81, -101, -11, 27, 6, 34, -14, -95, -74, -61, -49, -84, 2, -28, -27, -59, 25, -64, 114, -5, 75, 66, 16, 67, 87, 33, 123, 92, -24, 26, -39, 107, 70, -71, -109, -20, 85, -58, 119, -104, -123, -68, -114, 68, -95, -92, 110, 109, -20, -61, -94, -28, -120, 26, 105, -72, 102, 48, 80, 49, 48, -83, 72, 109, 112, 58, -67, 22, -55, -52, -59, -49, -116, -26, -26, -55, -78, 18, 114, -35, 0, -43, -123, 78, -92, 78, 103, -56, 55, -12, -118, -90, 47, 24, -41, -121, 46, 106, -51, -48, -79, 32, 76, 47, -93, -8, 29};
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
    msg.setTimeStamp(0.10577472769);
    msg.setSource(50617U);
    msg.setSourceEntity(102U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(94U);
    msg.seq = 11329U;
    msg.sys_dst.assign("ZANCZTNZPVCMQQOABJJNDBSQDTOXISVGQAYMIVKXECSNZYZMVWOHFKSIJOIPHERCFKURFLVPCHFWEBBXRMJRMBGJYPGKMGVYUZZCUTFWIWRONHABWIDBQGZQVYSZOKYSPHXKTBSLMJSLNKDPCGYRCXIAFPTHWBHFOXVAHLDQFBEHTKTXIQMF");
    msg.flags = 235U;
    const char tmp_msg_0[] = {28, 8, 77, -96, -66, -29, 13, 87, -89, -74, -79, -47, 32, -71, 87, -121, 86, -91, -60, 44, 33, -84, 126, 3, -22, -40, 97, -52, 80, -108, 40, 3, 78, 12, 66, 51, 35, -110, 37, 35, -77, 101, -124, -54, -80, 124, -58, 105, 91, -22, 104, -109, 43, 79, -37, 109, -4, 76, 18, -106, 11, -24, 55, 35, -126, 14, 7, -25, -101, 6, -118, 113, 123, -12, -101, -128, -46, -69, 89, 79, 51, 92, -110, -16, -88, -17, 63, 17, -75, 77, -117, 67, -78, 27, -11, 28, 95, -34, 7, 80, 92};
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
    msg.setTimeStamp(0.167983025197);
    msg.setSource(41540U);
    msg.setSourceEntity(22U);
    msg.setDestination(42379U);
    msg.setDestinationEntity(30U);
    msg.seq = 15798U;
    msg.sys_dst.assign("VLVJWDSJCRYOZDAHVXHCBOWQXCANQYUMMKEAMRRWAIWSKDSCJLLIXIIVHYOFSGWXNPPCQGRVDSSYZVXYZHOIJXFOTQFNGXPFGIVKWZBKSOETHCLYELOUBEMJZZEYFSEMUKRAZMIFHYJPUKWSUPLJZEGULVJJTWAGLZNEMNAKGYUDBBDPPOGMJDCZMFAHQRTWIFBGVTQISUBUDTKHTQOAPBWL");
    msg.flags = 138U;
    const char tmp_msg_0[] = {-16, -64, 116, -28, 92, 67, -21, -90, 109, -57, 51, 95, -124, 125, 119, 46, 39, 109, 57, 5, -78, 43, 115, -89, -5, 121, -45, -70, -87, -57, 83, 4, 50, 18, 97, 103, 14, 126, 108, 89, -88, -116, 22, 46, 6, -59, -52, 46, 21, 60, 9, -78, 40, 67, -72, -123, 105, -31, -118, 100, -116, 41, 92, -51, -72, -51, -53, 19, -110, 21, -50, -8, 102, -110, -84, 1, -25, -62, -87, 0, -121, -114, -121, -29, 44, 18, -14, -95, 95, -44, -101, 97, 24, 22, 39, 94, 115, 19, -55, -60, 31, 87, 35, 29, 115, 97, 125, -18, 126, -75, 48, -75, 18, 52, 61, 46, -92, -43, -21, 91, 100, 90, 78, 34, -60, 41, 18, -114, -112, 46, 126, -84, 2, 11, -126, -97, 5, 50, 19, -97, 49, -128, 4, 26, 3, 60, 80, 15, -43, -122, 53, 31, -34, 59, -73, -102, 122, -55, -121, -67, -115, -86};
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
    msg.setTimeStamp(0.455204925297);
    msg.setSource(39958U);
    msg.setSourceEntity(70U);
    msg.setDestination(52450U);
    msg.setDestinationEntity(175U);
    msg.sys_src.assign("TUDFGYSVSVIBAOUZVGWLOKKYTGCEUZZNRIPCZESBAMJAKNHQWUYBEFDLZJWXBTGHNO");
    msg.sys_dst.assign("QTPZJXLSKGJNZVLZIYTHGRNXCPIIDWFSRWJOAXZCWBMGNKPPAFZNQADBHJCEVSIMTMMQVHBHOTIMLVKOKOQPYCDDUTKRAGGUTQZVDOEKNLUXPGCFWRYWXZENOBWBNBTYLQGAJHWPFUEMULHFEKNUXXCLDMQIUVVBWLFHZCFPARYUWJSJEMG");
    msg.flags = 126U;
    const char tmp_msg_0[] = {62, -18, 42, 84, 51, 9, -62, -73, 26, -58, 51, 60, -82, 68, -17, -40, -25, -44, 94, -115, 30, -41, 95, 77, -78, 109, -120, -125, 43, -13, 78, 96, -18, 113, -10, 47, -7, 35, -87, -78, -26, -40, -106, -8, -114, -100, -89, 73, -94, 10, -56, 70, 90, -120, -72, 101, 119, 74, -9, 34, 61, -110, -80, -30, 1, 51, 77, -93, -53, 33, -110, -103, 18, -30, -2, 99, 125, -121, -39, 97, -47, -19, -43, 23, -28, -54, -18, 79, 126, -73, 126, -11, -44, -45, 126, 72, 31, -58, 120, -43, 9, 66, -127, -83, 69, -124, 112, -58, -67, -120, 68, 120, 37, 64, 52, -57, 43, 6, -66, -21, 70, 36, -103, 117, -15, 64, 44, 43, -109, 80, 87, 64, 46, -24, 42, 34, -100, -16, -54, 62, -77, -46, -41, -33, 31, 69, 23, -3, -86, -103, -90, -32, 103, -34, -68, -44, 61, -8, -84, -90, -90, -79, 15, -109, -50, -55, -11, -84, 120, 2, -81, -115, 113, 26, -67, 109, -35, 37, -104, 50, -100, -100, -77, 26, 106, 11, -90, 58, 126, -88, 96, 3, -106, -26, 100, -11, 111, 45, -111, 44, 62, 38, 17, 19, -16, 39, 38, -14, 64, 57, 110, 104, -102, 1, -69, 44, 39, -99, -119, 110, -76, 99, 46, -117, 104, -29, -101, -83, -16, 13, -65};
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
    msg.setTimeStamp(0.484671803906);
    msg.setSource(65141U);
    msg.setSourceEntity(157U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(25U);
    msg.sys_src.assign("LYARONEYKDWTACPXMTBQDENR");
    msg.sys_dst.assign("NSPWISLQECZHRLMVLWYWSMVVXBOQJEREOWUTJDJIUJDIYNJQAITWCWUPMGMARNDIEPTSSGZYZFVAIVAQETCHRSMZXPBNPJGGDUUXOJYFTSKUHYRZHOPFBEPGGVOWNSOBHBBDLLYBEBCMVFD");
    msg.flags = 130U;
    const char tmp_msg_0[] = {-76, 122, 82, 82, 36, 6, -60, 62, -15, 59, 50, 59, -115, 2, -25, -23, 65, -109, 90, -94, -41, 6, 59, 76, -52, 100, -1, -50, 3, -54, 68, -99, -66, -7, -98, 124, 88, -20, 62, 61, -79, 44, -1, -15, -22, -75, -65, -127, 65, -10, -92, 103, 41, -52, -80, -94, -86, 95, -125, 78, 40, -60, 91, -74, -18, 104, -11, -41, -62, -90, 102, 119, -25, -2, -32, -81, -50, -54, -46, -24, 55, -92, -94, -101, 65, -12, -16, 20, 38, -12, 20, -103, -72, 78, -107, -43, 119, -96, 25, 19, -102, -118, -118, 75, 33, -47, -73, -39, 99, -84, 103, 8, 21, 91, -123, -107, 40, 29, -73, 108, 22, 109, 9, -88, 117, 7, 6, -120, -69, 87, -49, 95, -40, -32, -98, -16, 107, -67, -62, -16, 6, 62, 22, 45, -39, 113, 94, 9, -91, 6, -47, -72, -91, 118, -79, 84, -51, 15, 28, 4, 77, -52, -28, -71, -96, 9, -64, -94, -95, -65, 13, -26, -61, 82, -17, 88, 53, -79, -113, 27, -88, -115, -124, -48, 26, -13, -10, -42, -65, -33, 94, 125, -6, -44, -56, 26, 118, 82, -33, 103, -35, -9, 124, -61, -98, -88, 125, 48, 44, 62};
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
    msg.setTimeStamp(0.155502947259);
    msg.setSource(14679U);
    msg.setSourceEntity(57U);
    msg.setDestination(47616U);
    msg.setDestinationEntity(33U);
    msg.sys_src.assign("TGSAZJBHAEBKHUINALKGOBTPVSUZNXNTVXKWLYLYDTBLEYFRLDGBDJICVLMXBZKJCTGWMYCDXAENQTFWDFFIEHSWFXEUUCVIXHMXU");
    msg.sys_dst.assign("IJRWUUNYELPMRCAWVLGABZRWBOLVRJEPACHOLWFTXSUUWSLZJCZXUSRTPQGRXNQTCVUPQWEJOEAZLTAQKBXCOQYBMPEDRVZJHMDJKODXYCNSMDEBVYZQKZKSUWM");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-45, 68, 63, 118, -95, -24, 85, 124, 68, -19, 65, -33, -113, 95, -57, 33, 100, -80, 26, -90, 107, 28, -92, -22, 86, 76, -61, 45, 14, -95, -29, -64, 27, 1, 68, 70, 21, -119, 77, 78, -128, -57, 26, 70, -96, -88, -59, 80, 85, 6, 27, -1, -72, 87, 77, 11, -4, -26, -3, -51, 79, -46, -106, 14, 16, -64, -25, 107, -35, -124, -23, -40, 101, -124, -74, -18, -36, 14, -72, 47, -18, 60, -101, -54, -23, -49, -109, -33, 19, -58, -26, -126, -88, 34, -6, -9, 99, 28, -70, -101, 31, -74, -69, -38, -56, -27, 14, 24, -123, -123, 115, 94, -109, 59, -86, -59, 107, -38, 101, -12, -115, 68, -20, 104, 119, 90, 23, -3, 42, 102, -43, -102, -58, -64, 42, 37};
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
    msg.setTimeStamp(0.419307838476);
    msg.setSource(62076U);
    msg.setSourceEntity(199U);
    msg.setDestination(7558U);
    msg.setDestinationEntity(170U);
    msg.seq = 3681U;
    msg.value = 157U;
    msg.error.assign("VKQDAIIMOURNJRRVDTLPARRHYFWWBIUZYVQPCZTBAZVUDLHFCGUHXBFQORSSRBNGPCXIUIFGKWLGJXBABFYHLWLOQCHSNMYAEQSNJXT");

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
    msg.setTimeStamp(0.630014824174);
    msg.setSource(6138U);
    msg.setSourceEntity(28U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(215U);
    msg.seq = 40071U;
    msg.value = 86U;
    msg.error.assign("IXDYVOLTANJUZKAUXXIXOMXZGMSRMPOJFPAJROBTDLUIDEIRBDSWFSMSCPKKYDDBQCKLQBHFJTWKLGANEJSKXTEZMGHNZAZPNTAPWPTOOUGBMRHFQWNOXSFS");

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
    msg.setTimeStamp(0.273976980746);
    msg.setSource(591U);
    msg.setSourceEntity(223U);
    msg.setDestination(34605U);
    msg.setDestinationEntity(111U);
    msg.seq = 38008U;
    msg.value = 172U;
    msg.error.assign("QRWFKELSYDLBLRJMXUWDFCWBABESIVITEWNWUKYKYLTPJZADEMGOMXPVGWCHVMDKQGVQZUNQOXSYVTWTPNZLCEZQTDOEZHJBQHCOYHXKVFIZULKVEGVNOAAGEYAYLFDFXEXOAZHHUISRIFASECRBJGFQTXWMNPKBRDGY");

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
    msg.setTimeStamp(0.039581259645);
    msg.setSource(57819U);
    msg.setSourceEntity(82U);
    msg.setDestination(26889U);
    msg.setDestinationEntity(25U);
    msg.seq = 10049U;
    msg.sys.assign("MLWYFUAPOWJZYXMHCUNSKZSDFCYHEQDPKMJZDQJQGQOCUVYYHSCKLEHETDVVKIAVTNPYQDGTNCXQGBUGXXIUIZUZSMFAARLRDPACGNEBARIRIRBYCWAVOFXBPHUIBVRPWLXKNGFFNYZTJFXTMHFDJOLKSZLKPTWNAAMWZJIVUQHRHEVCKKROSJQNINYOSMBSSEUPWBDZLLPGLMZBIHJFEEMRCCFSENVHTDWKOGLJTBAVXPB");
    msg.value = 0.0917313221853;

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
    msg.setTimeStamp(0.029095534441);
    msg.setSource(30446U);
    msg.setSourceEntity(241U);
    msg.setDestination(48275U);
    msg.setDestinationEntity(127U);
    msg.seq = 56096U;
    msg.sys.assign("SDBRFSMTJPEEHSIACHLW");
    msg.value = 0.973915589135;

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
    msg.setTimeStamp(0.0598298597186);
    msg.setSource(18355U);
    msg.setSourceEntity(64U);
    msg.setDestination(63725U);
    msg.setDestinationEntity(76U);
    msg.seq = 33938U;
    msg.sys.assign("SNRRPLQOFZWKJXKCMVLESVRNCNTZINTFHVXDUHFUAFIJJWHEURGEMGVIMHLKTYXCQIDHHCBHONTOFLYMXQSIKQSPZUKQZFKEQEFSBZFOAJRWNMBBEACZPOXKGGPVXGVRVRPYEOYQMLPARIHYIGIPCUKUTK");
    msg.value = 0.161818387793;

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
    msg.setTimeStamp(0.276454452895);
    msg.setSource(58543U);
    msg.setSourceEntity(137U);
    msg.setDestination(10394U);
    msg.setDestinationEntity(96U);
    msg.seq = 16077U;
    msg.sys_dst.assign("STWYAOKGFIRPMZIABALOBKRYIVJDHSYQELRNOUCBITOVWCLHATYGZHXXQCGIUDXHEJFTJXEQCCGRZHETYTWDFMVSADWMCJUOQVYOXVQJRNBBXHFNPXPYARJYESQEWLSGWOUCWPLMFMJUMFXAGPXETVDFJDDZURSOG");
    msg.timeout = 0.321157845251;

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
    msg.setTimeStamp(0.404816258486);
    msg.setSource(38472U);
    msg.setSourceEntity(124U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(112U);
    msg.seq = 41250U;
    msg.sys_dst.assign("RECNNBGCLYLKSIFDMRFKBGFXUKHDIWXTZNEEHBRDINZDGGWVYEMTKEQUFIKJPWZVOUFICWRUXJCVIBEJHJXWNBKMQILUKTJTYUXNZHCMCRO");
    msg.timeout = 0.924430241527;

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
    msg.setTimeStamp(0.626026574291);
    msg.setSource(14773U);
    msg.setSourceEntity(119U);
    msg.setDestination(11301U);
    msg.setDestinationEntity(110U);
    msg.seq = 7178U;
    msg.sys_dst.assign("WHLOSJGCVIMURXDBFRQVGSKWBVZUUXMEVIQPHRWYXNZDMLSHZGQTXYTAZFARQJAMOJSCPTTMRSMQHNMGBMUHLNMEGEDKBZYKIZBIUNCJRDPXLFTEZDHNGHYBOXFGZUSKCVFSAJUXTZRFBCFWNOESIAGWFIEQLWIDPCQJLKVQXPNGWJPXIDOKKOHUAPAQECNYPSKITSPITANUUHBEOLOVOA");
    msg.timeout = 0.287848067571;

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
    msg.setTimeStamp(0.57701947378);
    msg.setSource(22104U);
    msg.setSourceEntity(241U);
    msg.setDestination(27894U);
    msg.setDestinationEntity(58U);
    msg.action = 90U;
    msg.longain = 0.132679032674;
    msg.latgain = 0.018543444624;
    msg.bondthick = 2671833916U;
    msg.leadgain = 0.927255212658;
    msg.deconflgain = 0.535234148284;

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
    msg.setTimeStamp(0.638458830377);
    msg.setSource(34494U);
    msg.setSourceEntity(27U);
    msg.setDestination(61091U);
    msg.setDestinationEntity(119U);
    msg.action = 7U;
    msg.longain = 0.554932869164;
    msg.latgain = 0.380192746993;
    msg.bondthick = 1753311074U;
    msg.leadgain = 0.423498800696;
    msg.deconflgain = 0.633458933589;

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
    msg.setTimeStamp(0.269049488453);
    msg.setSource(30282U);
    msg.setSourceEntity(76U);
    msg.setDestination(7413U);
    msg.setDestinationEntity(236U);
    msg.action = 50U;
    msg.longain = 0.540669900007;
    msg.latgain = 0.293387431887;
    msg.bondthick = 305094702U;
    msg.leadgain = 0.0959471662299;
    msg.deconflgain = 0.150439076281;

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
    msg.setTimeStamp(0.245761411647);
    msg.setSource(61445U);
    msg.setSourceEntity(233U);
    msg.setDestination(26666U);
    msg.setDestinationEntity(158U);
    msg.err_mean = 0.58145244641;
    msg.dist_min_abs = 0.965436104899;
    msg.dist_min_mean = 0.373055675873;

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
    msg.setTimeStamp(0.973953825352);
    msg.setSource(14920U);
    msg.setSourceEntity(78U);
    msg.setDestination(7928U);
    msg.setDestinationEntity(139U);
    msg.err_mean = 0.386181413769;
    msg.dist_min_abs = 0.353081277161;
    msg.dist_min_mean = 0.1425318423;

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
    msg.setTimeStamp(0.506968429239);
    msg.setSource(20288U);
    msg.setSourceEntity(59U);
    msg.setDestination(9186U);
    msg.setDestinationEntity(82U);
    msg.err_mean = 0.199845878152;
    msg.dist_min_abs = 0.421065781313;
    msg.dist_min_mean = 0.499584349096;

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
    msg.setTimeStamp(0.336178087421);
    msg.setSource(5415U);
    msg.setSourceEntity(176U);
    msg.setDestination(42638U);
    msg.setDestinationEntity(174U);
    msg.action = 143U;
    msg.lon_gain = 0.323333294136;
    msg.lat_gain = 0.433306992274;
    msg.bond_thick = 0.0298109973244;
    msg.lead_gain = 0.961806796712;
    msg.deconfl_gain = 0.667468264678;
    msg.accel_switch_gain = 0.419051992102;
    msg.safe_dist = 0.297304193982;
    msg.deconflict_offset = 0.198819521817;
    msg.accel_safe_margin = 0.484556773865;
    msg.accel_lim_x = 0.50582470021;

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
    msg.setTimeStamp(0.337766522966);
    msg.setSource(51653U);
    msg.setSourceEntity(153U);
    msg.setDestination(38750U);
    msg.setDestinationEntity(167U);
    msg.action = 160U;
    msg.lon_gain = 0.766068130943;
    msg.lat_gain = 0.018530332497;
    msg.bond_thick = 0.798588145462;
    msg.lead_gain = 0.459723105577;
    msg.deconfl_gain = 0.583676309273;
    msg.accel_switch_gain = 0.854730182962;
    msg.safe_dist = 0.289859982604;
    msg.deconflict_offset = 0.674580064742;
    msg.accel_safe_margin = 0.074006393065;
    msg.accel_lim_x = 0.731191546379;

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
    msg.setTimeStamp(0.34043250941);
    msg.setSource(18740U);
    msg.setSourceEntity(61U);
    msg.setDestination(23613U);
    msg.setDestinationEntity(24U);
    msg.action = 224U;
    msg.lon_gain = 0.266155059361;
    msg.lat_gain = 0.00742470114017;
    msg.bond_thick = 0.785124482438;
    msg.lead_gain = 0.675624344047;
    msg.deconfl_gain = 0.236068685436;
    msg.accel_switch_gain = 0.487330066803;
    msg.safe_dist = 0.841552026949;
    msg.deconflict_offset = 0.829396167522;
    msg.accel_safe_margin = 0.127851659902;
    msg.accel_lim_x = 0.890419372435;

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
    msg.setTimeStamp(0.262058667174);
    msg.setSource(58567U);
    msg.setSourceEntity(208U);
    msg.setDestination(64736U);
    msg.setDestinationEntity(170U);
    msg.type = 167U;
    msg.op = 185U;
    msg.err_mean = 0.363021871874;
    msg.dist_min_abs = 0.342481001904;
    msg.dist_min_mean = 0.187190079903;
    msg.roll_rate_mean = 0.843166113041;
    msg.time = 0.7421748648;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 234U;
    tmp_msg_0.lon_gain = 0.838143141183;
    tmp_msg_0.lat_gain = 0.375663014618;
    tmp_msg_0.bond_thick = 0.798648975809;
    tmp_msg_0.lead_gain = 0.841462579009;
    tmp_msg_0.deconfl_gain = 0.648950376451;
    tmp_msg_0.accel_switch_gain = 0.812437134293;
    tmp_msg_0.safe_dist = 0.48556039572;
    tmp_msg_0.deconflict_offset = 0.897051825662;
    tmp_msg_0.accel_safe_margin = 0.318262687454;
    tmp_msg_0.accel_lim_x = 0.982252959784;
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
    msg.setTimeStamp(0.660175249766);
    msg.setSource(62746U);
    msg.setSourceEntity(203U);
    msg.setDestination(19421U);
    msg.setDestinationEntity(86U);
    msg.type = 238U;
    msg.op = 218U;
    msg.err_mean = 0.708257972598;
    msg.dist_min_abs = 0.962886671857;
    msg.dist_min_mean = 0.488317221437;
    msg.roll_rate_mean = 0.88097640554;
    msg.time = 0.463729791235;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 178U;
    tmp_msg_0.lon_gain = 0.74459203827;
    tmp_msg_0.lat_gain = 0.281571470236;
    tmp_msg_0.bond_thick = 0.895289834423;
    tmp_msg_0.lead_gain = 0.581596549808;
    tmp_msg_0.deconfl_gain = 0.40985992866;
    tmp_msg_0.accel_switch_gain = 0.771947623318;
    tmp_msg_0.safe_dist = 0.790867310576;
    tmp_msg_0.deconflict_offset = 0.824267155451;
    tmp_msg_0.accel_safe_margin = 0.4474103122;
    tmp_msg_0.accel_lim_x = 0.100711670726;
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
    msg.setTimeStamp(0.929962309577);
    msg.setSource(6657U);
    msg.setSourceEntity(230U);
    msg.setDestination(36864U);
    msg.setDestinationEntity(112U);
    msg.type = 77U;
    msg.op = 75U;
    msg.err_mean = 0.724358377334;
    msg.dist_min_abs = 0.889687021865;
    msg.dist_min_mean = 0.823588356207;
    msg.roll_rate_mean = 0.0797311092182;
    msg.time = 0.352357448161;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 160U;
    tmp_msg_0.lon_gain = 0.0670697773735;
    tmp_msg_0.lat_gain = 0.658114889022;
    tmp_msg_0.bond_thick = 0.290959529909;
    tmp_msg_0.lead_gain = 0.193025657156;
    tmp_msg_0.deconfl_gain = 0.209868996464;
    tmp_msg_0.accel_switch_gain = 0.0841644681206;
    tmp_msg_0.safe_dist = 0.125053704641;
    tmp_msg_0.deconflict_offset = 0.0779723894551;
    tmp_msg_0.accel_safe_margin = 0.345125671288;
    tmp_msg_0.accel_lim_x = 0.0648853098432;
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
    msg.setTimeStamp(0.935796204061);
    msg.setSource(26871U);
    msg.setSourceEntity(236U);
    msg.setDestination(41500U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.117575085249;
    msg.lon = 0.789542398702;
    msg.eta = 3924143981U;
    msg.duration = 22696U;

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
    msg.setTimeStamp(0.0367281959384);
    msg.setSource(17138U);
    msg.setSourceEntity(14U);
    msg.setDestination(26344U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.303201384026;
    msg.lon = 0.611179833013;
    msg.eta = 2775679479U;
    msg.duration = 51556U;

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
    msg.setTimeStamp(0.786656504764);
    msg.setSource(63747U);
    msg.setSourceEntity(157U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.686731674838;
    msg.lon = 0.0411489407063;
    msg.eta = 2969805317U;
    msg.duration = 14976U;

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
    msg.setTimeStamp(0.292264624839);
    msg.setSource(2184U);
    msg.setSourceEntity(80U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(232U);
    msg.plan_id = 2486U;

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
    msg.setTimeStamp(0.0777269622986);
    msg.setSource(11621U);
    msg.setSourceEntity(145U);
    msg.setDestination(51766U);
    msg.setDestinationEntity(117U);
    msg.plan_id = 10940U;

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
    msg.setTimeStamp(0.398751184245);
    msg.setSource(18298U);
    msg.setSourceEntity(19U);
    msg.setDestination(1409U);
    msg.setDestinationEntity(115U);
    msg.plan_id = 50704U;

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
    msg.setTimeStamp(0.388876688352);
    msg.setSource(54267U);
    msg.setSourceEntity(239U);
    msg.setDestination(47181U);
    msg.setDestinationEntity(251U);
    msg.type = 178U;
    msg.command = 143U;
    msg.settings.assign("RCGHAMFOGCQVEQFWMJMYUPZDXBPDTVUZHVVUWROXXPCYJRUQVPCBFWVCFPMRYWYBAOSJJSNOWJZXOPBLKDKA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37734U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.479068210002;
    tmp_tmp_msg_0_0.lon = 0.369585686709;
    tmp_tmp_msg_0_0.eta = 4193932815U;
    tmp_tmp_msg_0_0.duration = 25855U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KQUISXYHMGMFJCYWTKFJARKTAQPDRNZSISJYPIVSIYCPCBFGNFTIFYCQWOOEBAIBHNWLQRGPDVUVWPRQDZAPDRJUAQGUBYARELXUOEVQECTLHURFLPYNNCVTHGFLLMOOCAQCZXBHEKTJEUXGIFMNSIDKVMSDUEJUJOZMIRQMSVK");

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
    msg.setTimeStamp(0.750663104958);
    msg.setSource(4643U);
    msg.setSourceEntity(241U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(202U);
    msg.type = 130U;
    msg.command = 130U;
    msg.settings.assign("IDQVJCHHQLNTAXAAXAWKPZUCTXNJCQCARWQPTXWXPRFRWREDWKUWCWIZJXSLMCGTUFDFQUMFCQSPEPYVUZMWVBYGIGZAUYSCFOQPBFCPJLFHSTHDWMVYMRTIJTDEBMEPJEOTHGXKNALLARAXBUGLDKJBLERNPGPOYIXVYVBTGEOIHGMYLZZZKKZIHYGJBMTCDOHYSMNRSSDENFHVLKMOOWHOVOKNIQBNGVREBELRDZZUFNDJSSOF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30799U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.197025446179;
    tmp_tmp_msg_0_0.lon = 0.183800870868;
    tmp_tmp_msg_0_0.eta = 2937921522U;
    tmp_tmp_msg_0_0.duration = 37224U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XJNQGIHOGWRXCTMVDNCAFIQIJKAJMCVZHDWXEGXUOSOEYCJPOFKRDAPTWTJGFCUVXDVXQMYXIYVDMTACCYQYLPSJYJHULGEMSOARVNHJMARJDTOUGQIHKCBEMSUHDLGOFOFZMBNBEGAKUDUEXALSSFYYPGJBIVNTTKLWZMUNWHWQUEBCQGLEYUXKRWBKSBZYXVHLEIMQLOZPSPIZLRARAPPRVNIPQWDZOHFZRTBRTHDLIFSWVTKNSCEKNKPBBF");

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
    msg.setTimeStamp(0.855912521327);
    msg.setSource(34686U);
    msg.setSourceEntity(191U);
    msg.setDestination(58160U);
    msg.setDestinationEntity(43U);
    msg.type = 2U;
    msg.command = 59U;
    msg.settings.assign("ERYACAVMKBQJWKNKWRUOLNMTPTIWQUSYKSWMBTDGLCZCHGIQEHPACXGTQOAHOBWVSGTYJTJBBGPHVDVFBZVKPAMGOAXFTLOYYBFGPNRSIJLNLNEYKXGVRRTNDONICTHABXXGCAEAWJIERECXXBQOSMSTYJHIXQHLCISHYWPJZUFIILZEVSGCMFOHQKMXZJVFWXNDFEJUZPBERLKRWLRUYSDRDIDUMWPAVZD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 206U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.573661436393;
    tmp_tmp_msg_0_0.lon = 0.549476832539;
    tmp_tmp_msg_0_0.eta = 1895712400U;
    tmp_tmp_msg_0_0.duration = 50014U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZENXAQXKMRENNMWOEQUSGPXTIJJFZNWRKRALQZJCQUVJBQBGKCGTVTHTBETWLQYPQZGFULPCHZRPUNIRORGYOBJFWAXSZVWGEBIYJNBJUDANDPUHHOHSTRAVULKSVTBOIUDBRHPEYXGBGCMSHGHXDEDRJVAQEYOACYTYYPCLX");

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
    msg.setTimeStamp(0.997273283683);
    msg.setSource(18831U);
    msg.setSourceEntity(226U);
    msg.setDestination(21477U);
    msg.setDestinationEntity(136U);
    msg.state = 123U;
    msg.plan_id = 21470U;
    msg.wpt_id = 251U;
    msg.settings_chk = 3819U;

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
    msg.setTimeStamp(0.590797941054);
    msg.setSource(55639U);
    msg.setSourceEntity(203U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(0U);
    msg.state = 185U;
    msg.plan_id = 58497U;
    msg.wpt_id = 52U;
    msg.settings_chk = 46335U;

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
    msg.setTimeStamp(0.567101493792);
    msg.setSource(41742U);
    msg.setSourceEntity(185U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(10U);
    msg.state = 19U;
    msg.plan_id = 2943U;
    msg.wpt_id = 100U;
    msg.settings_chk = 1588U;

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
    msg.setTimeStamp(0.747382738283);
    msg.setSource(60825U);
    msg.setSourceEntity(241U);
    msg.setDestination(14066U);
    msg.setDestinationEntity(114U);
    msg.uid = 106U;
    msg.frag_number = 63U;
    msg.num_frags = 5U;
    const char tmp_msg_0[] = {-111, 47, 45, 39, 74, 9, 113, -53, 94, -76, 117, 26, 98, -95, -112, -12, 88, -117, 25, -119, 82, 25, -121, 43, -102, 57, 44, 96, -72, 63, 82, -23, 31, -119, -108, -51, -77, 79, 34, 64, -39, -17, -122, 31, 112, 101, -116, 50, 69, 28, -19, -28, -78, 19, -65, 33, 10, -127, -101, -42, 86, -77, 47, 44, -57, 94, -94, -88, -90, 14, -43, -87, 71, 1, -99, 82, -33, 88, 103, -22, -3, -86, -101, 74, 65, -2, 74, 84, -56, 95, 117, -30, 102, 45, 71, 40, 81, -36, -99, -115, 98, -63, 44, -37, -123, -35, -100, 54, -43, 6, -75, 52, 15, -125, 85, 90, -3, -72, -32, -100, -117, -113, 11, -49, -18, 7, 38, 15, 30, -10, -61, -105, -90, -23, 51, 56, -96, 40, -47, 20, -66, -44, -100, 63, 85, -77, -70, 22, -53, -35, 1, 120, -34, -38, 21, 55, 96, 12, 41};
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
    msg.setTimeStamp(0.954707504096);
    msg.setSource(28511U);
    msg.setSourceEntity(30U);
    msg.setDestination(1165U);
    msg.setDestinationEntity(131U);
    msg.uid = 113U;
    msg.frag_number = 8U;
    msg.num_frags = 8U;
    const char tmp_msg_0[] = {-37, 105, 48, -86, 52, 51, 99, 50, -30, 105, 124, -63, 59, 82, 90, 62, -78, 25, 39, -111, -85, 64, -49, 97, 113, -5, -15, -79, -105, -126, 81, 94, 124, -106, 86, 4, -116, 62, -88, 33, 95, -111, -122, -57, 67, 51, -53, -45, -96, -61, -83, -14, -87, -127, 44, 91, -8, -75, 9, -56, 19, -68, 62, -30, 8, 99, 69, -121, -127, -88, 59, -31, -112, 7, 99, -55, 17, -51, 100, 87, -114, -114, -42, -80, -82, -37, 54, 52, -84, -103, 74, -98, 110, 13, 35, 104, 44, 49, -124, -13, -101, -65, -22, 11, 114, 45, -96, -51, 85, 13, 82, -122, -80, -109, -35, -11, 16, 2, -4, -59, -78, 111, 115, -64, -115, 13, 61, 18, 43, -85, 124, 63, 60, 15, 88, 85, -109, 46, 4, 62, 112, 31, 57, -67, 116, -33, 102, 91, -100, 116, 42, -8, 48, -87, -38, -125, 75, -105, 43, 47, -73, -86, -56, -43, -110, 95, -65, 64, 56, 13, -24, 82, -54, 91, 81, -54, 4, -72, -61, -122, -82, 113, -50, 122, 93, 75, 55, -81, 15, -124, -49, 100, 119, 116, 57, -37, 121, -121, -38, -78, 40, 125, -100, -16, 39, -41, 97, 96, -98, -128, -12, -63, 79, -122, -5, 108, 13, -116, -46, -107, 40, -13};
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
    msg.setTimeStamp(0.0447065574159);
    msg.setSource(29889U);
    msg.setSourceEntity(73U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(194U);
    msg.uid = 234U;
    msg.frag_number = 81U;
    msg.num_frags = 220U;
    const char tmp_msg_0[] = {-101, 15, -18, -101, -84, -8, -77, -12, -53, -68, 79, -119, -37, -82, -30, -102, 126, 62, 77, 75, -104, 56, 34, -36, 107, 87, -52, -57, 53, 40, 79, 125, -74, -35, -81, 21, -22, -35, 29, 54, 42, 5, -43, -110, 55, -39, 98, 35, -50, 0, -63, 109, -113, -18, 88, 96, -120, -100, -74, -89, -66, 68, -41, 7, -27, 82, 96, 61, 30, 82, 96, -14, 31, -76, 15, -21, 71, 82, -126, 30, -23, 28, 2, -12, 52, -13, 106, -117, -60, -25, 78, -93, -33, -84, 108, 42, 28, -76, 86, -55, 94, 31, 113, 122, 97, -5, 8, -91, 54, 81, -67, -35, 122, -32, -7, -118, -48, 27, -26, -26, -34, -89, -45, -92, -106, 91, 105, 77, -15, 53, 74, -47, -26, 96, -2, -14, 54, 99, 47, -90, -10, -11, -112, -66, 3, 70, -16, -6, -6, -10, -9, -50, -104, 86, -93, 94, -125, -26, -103, 96, -45, 91, -21, 54, -107, -124, 80};
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
    msg.setTimeStamp(0.455697035563);
    msg.setSource(17365U);
    msg.setSourceEntity(39U);
    msg.setDestination(50282U);
    msg.setDestinationEntity(51U);
    msg.content_type.assign("IDCFIBOQVRVPXKDDEGMCGLEVYVHVJDFUDLOEKMJTBDXXWIRAUNNMHZCFNTPZVALGKIIMUGLGSZWOYPXMWVOOUKRCNQPQNREHANIQMONFYOKJSELZBEJETQCFQKLWSSTAGAEVFACAORTSYWROWTTFZDLYZGHKYFGMBPBJRJDSBIQKFTCPSMYSZHJTKHIHNQZUXNJWYWHZUDPBUTSRZLMGCJUFAPXQPRBSIXHHKLEAVIQEMXGPJXVXRYWCDYBCA");
    const char tmp_msg_0[] = {33, 99, -58, 11, 32, 64, 94, -47, 36, -29, -85, 115, 120, 40, -83, -52, -52, 86, -122, 23, 22, 58, 9, 105, 123, 62, 10, 53, 25, 64, -46, 17, -49, 23, 125, -27, 46, -37, -100, -33, -51, 6, 116, 97, 87, -110, -55, 81, -62, -12, -10, 119, 44, -85, -120, 37, -40, -120, -34, 38, -25, -80, 65, -43, -29, -30, -61, -31, -86, -78, 11, -96, 20, -40, 103, -100, 37, -18, 103, 79, 14, 12, -3, -79, -1, 24, 89, -128, -7, -59, -119, -101, 29, 76, 25, -26, 38, 96, -91, 38, -18, -107, -63, -120, -107, -64, 38, -90, -24, -102, 106, 103, -71, -125, -67, 90, 19, -120, 27, 6, -34, 44, -36, 7, 122, 68, -14, -66, -104, 16, -125, -127, 95, 32, 80, -69, -123, 56, -27, 126, 90, -99, -76, 9, 1, 33, -36, -77, -77, 85, 88, 32, 54, 31, 22, -94, -53, 44, 123, 56};
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
    msg.setTimeStamp(0.00662537068114);
    msg.setSource(8634U);
    msg.setSourceEntity(141U);
    msg.setDestination(30165U);
    msg.setDestinationEntity(227U);
    msg.content_type.assign("XAVHBSYXPYHCSKIUMJTVMAEKWYOCUPBDZRGCBWVOKCOURTAZGLLSNSQAXVTDKTQKDNWHMMKGZROGOGFRDVYEDPWRHSIDYBIEFFQBZEICMQCGRXPGZX");
    const char tmp_msg_0[] = {125, -83, -26, 58, 39, -118, -64, 110, -98, 22, 9, -113, 96, 36, 67, -65, -34, -88, -128, 76, 25, -104, -35, -93, 69, 62, 56, -89, -113, -111, 86, 76, -106, 56, 86, -111, 24, 51, -73, -120, 48, -65, -111, -65, 107, -126, -110, -95, 33, -6, 88, 38, -33, -114, -61, -78, -120, -125, -117, 74, -109, -39, -87, 108, 95, -88, -120, 54, 61, 89, 8, -77, 0, 105, -89, -46, 24, -119, 36, -81, -31, -1, 16, 110, -89, -56, -6, -103, 96, -47, 9, -4, -33, 59, -38, -99, 11, 11, 16, 93, -26, -68, -52, -115, -69, -41, 80, -122, -90, 120, -92, 111, 85, -97, 93, -65, 6, 98, -119, -18, 76, -127, -128, -41, 39, 22, -39, -78, 74, 105, -50, 76, -97, 38, -117, -47, 29, -22, 36, 0, 1, 48, 123, 108, 41, -10, -7, -10, 23, 15, -51, 98, 103, -21, 83, 60, -62, 111, 120, 11, -53, 87, 88, 21, -102, -51, -55, 51, 72, -71, 44, -56, 16, 112, -76, -63};
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
    msg.setTimeStamp(0.280802839427);
    msg.setSource(34372U);
    msg.setSourceEntity(63U);
    msg.setDestination(26307U);
    msg.setDestinationEntity(35U);
    msg.content_type.assign("WOXOIJYNHBPUAFYRLNLCIANTZOUJBHOGSZEJMYRWJZGJNTGYDKRIPWAMKZZFXFDMBLUYKSSEIVXCKQPYGDNKUGMSORMQBMNHQCUHVLUPZRBBFMIAJPQLQHBXBAVOTFEAQJGPTFBXFVFXOMQYXFZLHWVEDPMSQDCCGEJI");
    const char tmp_msg_0[] = {114, 25, -15, 126, -54, -55, 75, -27, 59, -49, 100, 82, 116, -3, 101, -40, 95, 116, -32, -69, 115, 32, -89, -85, 79, 41, 82, -97, -94, -102, 17, 80, 46, 74, 81, -11, -62, -51, 77, 24, 62, -68, -8, -46, 5, 20, -14, -58, -99, 29, 39, -112, -101, -122, 56, -64, -7, -112, 22, 89, -67, -64, -17, 40, -72, 62, -105, 52, -123, -27, 6, 22, 71, 16, -119, -35, 1, -124, -45, -84, -21, 94, 118, 29, -1, -89, -72, 94, 91, -5, -35, -21, 34, 7, 49, 39, 46, -49, -47, 97, 44, -95, 16, 104, 21, 42, -34, -32, -21, -92, -56, -111, -40, -59, 58, 33, -56, 38, 114, 27, -75, 18, -80, -8, -51, -13, -81, -95, -17, -94, -12, -38, -34, -113, -116, 69, 74, -38, -61, -91, 119, -69, 81, 0, -110, -108, 42, 26, 124, -33, 41, 67, 20, 114, 26, -3, 120, -121, 66, -115, 30, 19, 125, 61, -128, -114, 3, -58, 92, -42, -94, -128, -28, -80, -66, -126, 118, -43, 102, -78, -102, 65, 8, 47, -91, 79, -34, 12, -119, -38, 35, 51, 60, -127, 50, -24, 47, 102, 119, -84, 40, -60, -116, 2, -19, 33, -21, -91, 126, -26, 16, -50, -14, 53, 125, 90, 56, 105, -6, 117, 92, -72, -102, 72, 41};
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
    msg.setTimeStamp(0.983983989593);
    msg.setSource(57652U);
    msg.setSourceEntity(240U);
    msg.setDestination(47509U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.90004144509);
    msg.setSource(26243U);
    msg.setSourceEntity(131U);
    msg.setDestination(24336U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.196673307389);
    msg.setSource(20511U);
    msg.setSourceEntity(151U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.504638503468);
    msg.setSource(50634U);
    msg.setSourceEntity(164U);
    msg.setDestination(49242U);
    msg.setDestinationEntity(12U);
    msg.target = 28504U;
    msg.bearing = 0.973650680406;
    msg.elevation = 0.0766873916684;

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
    msg.setTimeStamp(0.935648925675);
    msg.setSource(20418U);
    msg.setSourceEntity(13U);
    msg.setDestination(42366U);
    msg.setDestinationEntity(45U);
    msg.target = 30464U;
    msg.bearing = 0.757563837986;
    msg.elevation = 0.664725807392;

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
    msg.setTimeStamp(0.921857938883);
    msg.setSource(17872U);
    msg.setSourceEntity(201U);
    msg.setDestination(59256U);
    msg.setDestinationEntity(180U);
    msg.target = 53163U;
    msg.bearing = 0.275666832339;
    msg.elevation = 0.856987274204;

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
    msg.setTimeStamp(0.593397142878);
    msg.setSource(51445U);
    msg.setSourceEntity(148U);
    msg.setDestination(22260U);
    msg.setDestinationEntity(135U);
    msg.target = 29371U;
    msg.x = 0.843938173489;
    msg.y = 0.717104618061;
    msg.z = 0.13841566065;

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
    msg.setTimeStamp(0.872422113912);
    msg.setSource(9425U);
    msg.setSourceEntity(33U);
    msg.setDestination(32610U);
    msg.setDestinationEntity(248U);
    msg.target = 53318U;
    msg.x = 0.746785371639;
    msg.y = 0.158860755187;
    msg.z = 0.0228646995299;

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
    msg.setTimeStamp(0.361448679808);
    msg.setSource(4084U);
    msg.setSourceEntity(165U);
    msg.setDestination(43563U);
    msg.setDestinationEntity(110U);
    msg.target = 53358U;
    msg.x = 0.259315226738;
    msg.y = 0.737176012445;
    msg.z = 0.327854823348;

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
    msg.setTimeStamp(0.92417671441);
    msg.setSource(47269U);
    msg.setSourceEntity(18U);
    msg.setDestination(62377U);
    msg.setDestinationEntity(23U);
    msg.target = 35258U;
    msg.lat = 0.526459975418;
    msg.lon = 0.159607469308;
    msg.z_units = 223U;
    msg.z = 0.324781280273;

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
    msg.setTimeStamp(0.734650991682);
    msg.setSource(53368U);
    msg.setSourceEntity(181U);
    msg.setDestination(31670U);
    msg.setDestinationEntity(117U);
    msg.target = 50817U;
    msg.lat = 0.477459569484;
    msg.lon = 0.443414453266;
    msg.z_units = 145U;
    msg.z = 0.963100526737;

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
    msg.setTimeStamp(0.387172945971);
    msg.setSource(55679U);
    msg.setSourceEntity(65U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(168U);
    msg.target = 62716U;
    msg.lat = 0.247003069522;
    msg.lon = 0.391751793515;
    msg.z_units = 172U;
    msg.z = 0.664477395425;

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
    msg.setTimeStamp(0.114913467901);
    msg.setSource(62203U);
    msg.setSourceEntity(251U);
    msg.setDestination(41495U);
    msg.setDestinationEntity(116U);
    msg.locale.assign("WDHZPXYVLEOQHDYHAYSAGHSFRQDZRKPXUTKVKNZRJLAOGPSPDUOOZBFIKDUPZOORMLILWKJBYPFCMNWNVXKFJTUXHDTJVWGDFXRATZTZQKNCQCGFULERUJVFYVRCE");
    const char tmp_msg_0[] = {-79, 25, -8, -65, 59, 84, -55, -26, 90, -93, 80, -46, 62, 78, 114, 17, 118, 115, 93, -106, 5, 78, -11, 115, -78, -7, -96, -71, -93, -21, 93, 66, 48, 62, -24, -68, -45, -126, 9, -21, 112, -24, 12, 38, -16, 65, -36, -122, 56, 51, -23, 107, 15, -80, -126, 68, 31, -125, -29, 89, 48, -71, 3, -109, 39, -33, -105, 75, 98, -97, 66, -68, -94, -21, -76, 103, -32, -115, 113, -113, -44, -100, 41, 99, 114, -104, -69, 4, 12, 106, -75, -39, 20, -19, 49, 84, 48, -113};
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
    msg.setTimeStamp(0.42919981728);
    msg.setSource(16417U);
    msg.setSourceEntity(175U);
    msg.setDestination(44217U);
    msg.setDestinationEntity(114U);
    msg.locale.assign("EQHEDGFKGPFRFCPVOZZTWEEIXACXKCWFXDHUKKHZRDWDNHWDRCNVNJVENUKMCMFOLNZFTAGYJIYTSRHQPTGRJGDATWSAJREDZJMSIUONYLOJ");
    const char tmp_msg_0[] = {-35, 16, 51, -13, 76, -44, -43, 99, -107, -66, -47, -74, -113, -4, -52, -112, -20, 102, -71, 26, 82, -14, -42, -82, 90, 93, 109, -127, -32, 70, -50, 72, 35, 11, 67, -14, -122, -105, 35, -51, -27, 2, 77, -84, 88, 42, 25, 115, -25, 61, -109, -95, -64, 19, 16, -14, -63, 81, -61, 27, 3, 26, -48, -46, 27, 57, 47, 77, 41, -40, -49, 75, -109, 79, 12, -66, -8, -55, -31, 74, 19, 80, 40, -11, 23, 99, 87, 71, 78, -17, 87, -115, 62, -88, 61, -34, 84, -123, -4, 56, -52, 58, -16, 108, 67, -56, -39, 33, -126, 120, -92, -55, 11, -124, 89, 112, 3, 9, 52, -32, -7, 10, 101, 86, -19, 24, -104, 44, -18};
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
    msg.setTimeStamp(0.210371575963);
    msg.setSource(62898U);
    msg.setSourceEntity(162U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(199U);
    msg.locale.assign("LQPPFTMSXJYBWMILR");
    const char tmp_msg_0[] = {-115, -77, -10, 18, -27, -77, -85, -110, -65, 20, 65, -37, 70, -12, 31, 37, -78, -113, -86, 14, -40, 25, 123, 42, 33, -128, 57, 35, -4, -6, -32, -40, 97, 93, -81, 79, 86, -58, -51, 96, -68, 34, 99, 27, 56, -98, -70, -108, -33, 106, -109, -109, -70, 13, 19, -24, -21, -65, 64, 4, 36, -108, 64, -10, -103, 90, 57, -65, -66, -63, -63, 10, 24, 2, 14, -49, 98, -109, -64, 61, 1, 91, -123, 57, 93, 34, -126, 92, 66, -111, 51, 22, -4, 126, -35, 60, 106, -71, 50, 40, -7, 111, 59, 73, 89, -77, 106, 5, -3, -87, 26, -34, -90, 126, -91, -13, -30, -96, 73, -115, 107, 93, 99, 110, -17, 89, 53, -97, 67, 20, -91, 16, 107, 0, -45, 79, 58, 98, 102, 69, -1, 68, -52, -116, 21, 22, 91, -16, 27, 120, 4, -41, 110, -81, -25, 90, -8, -47, -128, 117, 32, -66, 72, 91, 74, -99, -52, 11, -25, -59, -126, 55, 60, 91, -48, -113, -78, -8, -45, -52, -58, 24, 60, 66, -97, 87, 107, 82, -105, 61, 4, 92, 78, 25, -11, 68, -6, -82, 43, 3, -116, 47, -41, 3, 125, 8, 38, 48, 118, 74, -88, -82, -78, 46, 117, 42, -113, -93, 17, -107, -56, 44, -113, -48, -80, 55, 49, -124, -76, -5, 15, -116, -71, -70, -13, 32, 102, -81, -117, -25, 71, -51, -116, 11};
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
    msg.setTimeStamp(0.0260879823906);
    msg.setSource(17287U);
    msg.setSourceEntity(19U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.278970269539);
    msg.setSource(58499U);
    msg.setSourceEntity(12U);
    msg.setDestination(41414U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.323042498694);
    msg.setSource(29512U);
    msg.setSourceEntity(152U);
    msg.setDestination(63112U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.618260739801);
    msg.setSource(57176U);
    msg.setSourceEntity(55U);
    msg.setDestination(7246U);
    msg.setDestinationEntity(82U);
    msg.camid = 136U;
    msg.x = 41467U;
    msg.y = 33947U;

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
    msg.setTimeStamp(0.26046676872);
    msg.setSource(45727U);
    msg.setSourceEntity(28U);
    msg.setDestination(30023U);
    msg.setDestinationEntity(192U);
    msg.camid = 48U;
    msg.x = 19266U;
    msg.y = 37616U;

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
    msg.setTimeStamp(0.590519747512);
    msg.setSource(47868U);
    msg.setSourceEntity(40U);
    msg.setDestination(23735U);
    msg.setDestinationEntity(195U);
    msg.camid = 109U;
    msg.x = 48601U;
    msg.y = 41197U;

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
    msg.setTimeStamp(0.899592844617);
    msg.setSource(13391U);
    msg.setSourceEntity(181U);
    msg.setDestination(52743U);
    msg.setDestinationEntity(70U);
    msg.camid = 169U;
    msg.x = 18386U;
    msg.y = 36317U;

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
    msg.setTimeStamp(0.181607184768);
    msg.setSource(45526U);
    msg.setSourceEntity(8U);
    msg.setDestination(6778U);
    msg.setDestinationEntity(107U);
    msg.camid = 61U;
    msg.x = 58904U;
    msg.y = 16844U;

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
    msg.setTimeStamp(0.961526505663);
    msg.setSource(14337U);
    msg.setSourceEntity(96U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(107U);
    msg.camid = 235U;
    msg.x = 48655U;
    msg.y = 29790U;

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
    msg.setTimeStamp(0.803460684781);
    msg.setSource(6425U);
    msg.setSourceEntity(62U);
    msg.setDestination(19663U);
    msg.setDestinationEntity(10U);
    msg.tracking = 162U;
    msg.lat = 0.207369473724;
    msg.lon = 0.453259081375;
    msg.x = 0.230663686598;
    msg.y = 0.0447953048624;
    msg.z = 0.513450027915;

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
    msg.setTimeStamp(0.000269096825765);
    msg.setSource(55373U);
    msg.setSourceEntity(172U);
    msg.setDestination(11098U);
    msg.setDestinationEntity(67U);
    msg.tracking = 187U;
    msg.lat = 0.864186722911;
    msg.lon = 0.913832015811;
    msg.x = 0.600153393106;
    msg.y = 0.391667822794;
    msg.z = 0.923128500646;

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
    msg.setTimeStamp(0.0772928750221);
    msg.setSource(6383U);
    msg.setSourceEntity(175U);
    msg.setDestination(39665U);
    msg.setDestinationEntity(240U);
    msg.tracking = 16U;
    msg.lat = 0.673278335277;
    msg.lon = 0.622479861325;
    msg.x = 0.950151388675;
    msg.y = 0.514429190063;
    msg.z = 0.649962655913;

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
    msg.setTimeStamp(0.994730940883);
    msg.setSource(42408U);
    msg.setSourceEntity(239U);
    msg.setDestination(32480U);
    msg.setDestinationEntity(155U);
    msg.target.assign("HMWYVITFZPEZWILHNFPDFXSUGLSWWEQOJKWNUHBMGUJBWKUDUEZKJYTBKXGLTSLPRBZVVAEASCMNZRVXPQOCISNJPXVFYQODKAIDCRFPVVQIEJCCXLIXGTLLZHAPJBNLZSYYDPFQKLEVJEMNZHVUCTTYVKIHURXSODMDXKOWBGRQEYXNOFRJTOQCFGMNUYROFCBIG");
    msg.lbearing = 0.54758878848;
    msg.lelevation = 0.706724917995;
    msg.bearing = 0.561675228457;
    msg.elevation = 0.288487480723;
    msg.phi = 0.68743068223;
    msg.theta = 0.656620079066;
    msg.psi = 0.639280738993;
    msg.accuracy = 0.82858925518;

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
    msg.setTimeStamp(0.549842887829);
    msg.setSource(25286U);
    msg.setSourceEntity(169U);
    msg.setDestination(13130U);
    msg.setDestinationEntity(105U);
    msg.target.assign("BEUWDLJJDQYENPDSEWTIAHFWKPZOFAKUMYXBRPISYKCRILFJHGPDRZMRCAXVVYPFXYMMVHSTVZSIHELZBOHOLCMGRYQNCGABHHQYSZSCJJDJKIAJXBXTCVTGLVKE");
    msg.lbearing = 0.313457164076;
    msg.lelevation = 0.898837249646;
    msg.bearing = 0.590961686406;
    msg.elevation = 0.514911718421;
    msg.phi = 0.835334666517;
    msg.theta = 0.273977033403;
    msg.psi = 0.563052480134;
    msg.accuracy = 0.897962304671;

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
    msg.setTimeStamp(0.524640239268);
    msg.setSource(11679U);
    msg.setSourceEntity(199U);
    msg.setDestination(21411U);
    msg.setDestinationEntity(129U);
    msg.target.assign("HVJWXNMOKALUBOVHIJFEULEUOYNCFDYXMQOPRAYCKIRPXMNPWEBRSMVRLLVJSXZHKUVABRANLKZIZCYBXUKTTOAITYXNEKDEARNBQYZZWGFNCPCQIFEGGSJHXLRPKSHIEQCDMJZPTGNFGOSUDABRSCHMYGVLVFHUVJYIWWKSTDSLJTUOGTPMZQXCQRPQLQEHBTJTJZXDRHVWYWWYWCDDLWJIFUSPOFIVKBBOCSGEFGAAQFXAIZGONMNDTZ");
    msg.lbearing = 0.131261038995;
    msg.lelevation = 0.423510184266;
    msg.bearing = 0.239572880126;
    msg.elevation = 0.237323793755;
    msg.phi = 0.0700914605249;
    msg.theta = 0.577202941049;
    msg.psi = 0.952822060675;
    msg.accuracy = 0.384761637714;

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
    msg.setTimeStamp(0.822477561545);
    msg.setSource(31974U);
    msg.setSourceEntity(168U);
    msg.setDestination(608U);
    msg.setDestinationEntity(176U);
    msg.target.assign("MNFLBPKBIHCUPMOSYIOQGFDBDHDGTHRLIZKGQYBOYGVJJQRH");
    msg.x = 0.945906442255;
    msg.y = 0.1482234229;
    msg.z = 0.844653062739;
    msg.n = 0.35929321496;
    msg.e = 0.369151924386;
    msg.d = 0.584644689581;
    msg.phi = 0.841580294012;
    msg.theta = 0.655160628831;
    msg.psi = 0.93161863365;
    msg.accuracy = 0.772351266254;

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
    msg.setTimeStamp(0.387452700655);
    msg.setSource(18412U);
    msg.setSourceEntity(103U);
    msg.setDestination(6980U);
    msg.setDestinationEntity(88U);
    msg.target.assign("DCAGZFQTTKCOPAXSTLGMKLECBCJJSZYHHAVJPMKHCWXBEPDOLDCKOWJSKYKRYLFQBULXUOFGNWOTBLDXBTJSUGDFZTQRLPMDVVIINLDFPUQHQRNZQDFXGXNOIQOEAXRVTTRJJVRGBVMUYSSDBYLEWZCUWITFIYSPPKBZYFRFVBCXWGOARDLHGAI");
    msg.x = 0.788642274692;
    msg.y = 0.305119706617;
    msg.z = 0.648399583716;
    msg.n = 0.941598803105;
    msg.e = 0.473915002678;
    msg.d = 0.874856658486;
    msg.phi = 0.140157068683;
    msg.theta = 0.106343400563;
    msg.psi = 0.903464069829;
    msg.accuracy = 0.746149224429;

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
    msg.setTimeStamp(0.527997802935);
    msg.setSource(63900U);
    msg.setSourceEntity(83U);
    msg.setDestination(55755U);
    msg.setDestinationEntity(64U);
    msg.target.assign("MESOJSRBNWOWLKKPSKREMDGKZLDHPRAXPSYJPHBXRMJEDTCWMKHVOJFZCPBPNVVIXLRURGLTYQVBOADWATXATFGXJSFRQSLZWOAQEBGOJZJKXFTIRWGHSTMQCCMGUTIILVACNDFYUJQHWLFOXSBLYICGINDTIKWVMXWXEBIYOEUUZAQOQUVHBSJLARZDVXBACZBNKQDSUHUQPHUIMOJNGWFKVNNDYDFFCPCM");
    msg.x = 0.741973579179;
    msg.y = 0.875461203335;
    msg.z = 0.687273198891;
    msg.n = 0.601171748762;
    msg.e = 0.0892965258789;
    msg.d = 0.856780317237;
    msg.phi = 0.582207216092;
    msg.theta = 0.888402063155;
    msg.psi = 0.3814673877;
    msg.accuracy = 0.394250500651;

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
    msg.setTimeStamp(0.63706597521);
    msg.setSource(30295U);
    msg.setSourceEntity(252U);
    msg.setDestination(13892U);
    msg.setDestinationEntity(16U);
    msg.target.assign("FYBYPDSHRJXGZPBPNVZLGAXKHWJUAETSLTMNQKUELISQFBGKBNKAKRSPHUOYFYA");
    msg.lat = 0.284790126082;
    msg.lon = 0.0285913431534;
    msg.z_units = 222U;
    msg.z = 0.165228412912;
    msg.accuracy = 0.453273715971;

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
    msg.setTimeStamp(0.332026885633);
    msg.setSource(19792U);
    msg.setSourceEntity(49U);
    msg.setDestination(6551U);
    msg.setDestinationEntity(219U);
    msg.target.assign("AYVGLHUCSRGAMVRNPCDIHXNHJQWFUZFHQSNNACUBZHXIYQXFXVCJBQFPVLRXFLNAYKDDDLFHBSHTDOGKTNRTZUMOHOEXYTBEEZKVABKRTKKSPTCIKAIREETZKFGPPSLOUISEJJZJWFPCCGQHZJDGTXPUZWYDOEWWNQUPMLANOZJIROIMJHXZCTWMVQW");
    msg.lat = 0.676092347008;
    msg.lon = 0.955495984384;
    msg.z_units = 111U;
    msg.z = 0.910670851099;
    msg.accuracy = 0.288516641939;

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
    msg.setTimeStamp(0.257934824431);
    msg.setSource(14154U);
    msg.setSourceEntity(233U);
    msg.setDestination(59153U);
    msg.setDestinationEntity(57U);
    msg.target.assign("JZMKFGISTTQS");
    msg.lat = 0.668463519565;
    msg.lon = 0.507261340982;
    msg.z_units = 25U;
    msg.z = 0.337404132227;
    msg.accuracy = 0.674767233668;

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
    msg.setTimeStamp(0.965076742788);
    msg.setSource(45867U);
    msg.setSourceEntity(188U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(130U);
    msg.name.assign("VMGTCVHLDUXKHAWNWQNGNQPRMDQQNYTDSCSEXGOOJOKNTUGEFY");
    msg.lat = 0.647452444894;
    msg.lon = 0.945852516103;
    msg.z = 0.991676393505;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.903104105849);
    msg.setSource(19113U);
    msg.setSourceEntity(7U);
    msg.setDestination(22817U);
    msg.setDestinationEntity(251U);
    msg.name.assign("UIWVQCNCQOGEICPVCQSOYWTSABJNPWTHUQRADQDR");
    msg.lat = 0.546976556438;
    msg.lon = 0.32775666718;
    msg.z = 0.516829672987;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.950729494952);
    msg.setSource(3659U);
    msg.setSourceEntity(252U);
    msg.setDestination(21876U);
    msg.setDestinationEntity(23U);
    msg.name.assign("YQHZWOHLUQEQIOHRBLVXVI");
    msg.lat = 0.243948073704;
    msg.lon = 0.827180804616;
    msg.z = 0.353610780414;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.602642937921);
    msg.setSource(46455U);
    msg.setSourceEntity(93U);
    msg.setDestination(43697U);
    msg.setDestinationEntity(35U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.206745978829);
    msg.setSource(42268U);
    msg.setSourceEntity(254U);
    msg.setDestination(7595U);
    msg.setDestinationEntity(139U);
    msg.op = 234U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BCXZGWVVAOQJLIOQZWJIPFBMVRJWMMMPUVRCYXEDXOBJASORXBUSVSKAJIZBNCRHVKWWYLSWDYZWE");
    tmp_msg_0.lat = 0.354871021057;
    tmp_msg_0.lon = 0.574766001516;
    tmp_msg_0.z = 0.721412782833;
    tmp_msg_0.z_units = 48U;
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
    msg.setTimeStamp(0.170465069027);
    msg.setSource(59951U);
    msg.setSourceEntity(185U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(75U);
    msg.op = 180U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XHQRFFTJYZSEADDEIWMQCBOUYYVTSOFLAJAZEMACDACDGIFBHJCRIWKEXMMHZFP");
    tmp_msg_0.lat = 0.793085422661;
    tmp_msg_0.lon = 0.824356033804;
    tmp_msg_0.z = 0.849968691848;
    tmp_msg_0.z_units = 51U;
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
    msg.setTimeStamp(0.0145395149001);
    msg.setSource(55464U);
    msg.setSourceEntity(154U);
    msg.setDestination(26572U);
    msg.setDestinationEntity(128U);
    msg.value = 0.12965118163;
    msg.type = 144U;

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
    msg.setTimeStamp(0.913713323765);
    msg.setSource(8128U);
    msg.setSourceEntity(65U);
    msg.setDestination(49824U);
    msg.setDestinationEntity(71U);
    msg.value = 0.478035624655;
    msg.type = 17U;

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
    msg.setTimeStamp(0.406129695483);
    msg.setSource(58376U);
    msg.setSourceEntity(28U);
    msg.setDestination(45778U);
    msg.setDestinationEntity(56U);
    msg.value = 0.641623781444;
    msg.type = 41U;

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
    msg.setTimeStamp(0.823343599459);
    msg.setSource(9744U);
    msg.setSourceEntity(150U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0662897516621;

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
    msg.setTimeStamp(0.496995594385);
    msg.setSource(48503U);
    msg.setSourceEntity(91U);
    msg.setDestination(6781U);
    msg.setDestinationEntity(252U);
    msg.value = 0.726516913085;

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
    msg.setTimeStamp(0.273728015478);
    msg.setSource(19083U);
    msg.setSourceEntity(213U);
    msg.setDestination(44521U);
    msg.setDestinationEntity(158U);
    msg.value = 0.777241402816;

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
    msg.setTimeStamp(0.140296212079);
    msg.setSource(41997U);
    msg.setSourceEntity(43U);
    msg.setDestination(63945U);
    msg.setDestinationEntity(187U);
    msg.timestamp_last_service = 0.528964755121;
    msg.time_next_service = 0.0758294325378;
    msg.time_motor_next_service = 0.820680701198;
    msg.time_idle_ground = 0.318440677251;
    msg.time_idle_air = 0.496244758826;
    msg.time_idle_water = 0.133450262662;
    msg.time_idle_underwater = 0.331271830467;
    msg.time_idle_unknown = 0.961672024769;
    msg.time_motor_ground = 0.341075823615;
    msg.time_motor_air = 0.801790430755;
    msg.time_motor_water = 0.413231274542;
    msg.time_motor_underwater = 0.446270436225;
    msg.time_motor_unknown = 0.70976959913;
    msg.rpm_min = -1468;
    msg.rpm_max = 4213;
    msg.depth_max = 0.801031366167;

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
    msg.setTimeStamp(0.0189462616961);
    msg.setSource(4061U);
    msg.setSourceEntity(229U);
    msg.setDestination(53673U);
    msg.setDestinationEntity(24U);
    msg.timestamp_last_service = 0.474128409185;
    msg.time_next_service = 0.561783669628;
    msg.time_motor_next_service = 0.151452587729;
    msg.time_idle_ground = 0.1177814267;
    msg.time_idle_air = 0.956119898086;
    msg.time_idle_water = 0.803924355773;
    msg.time_idle_underwater = 0.144643260105;
    msg.time_idle_unknown = 0.0704469972757;
    msg.time_motor_ground = 0.594708335019;
    msg.time_motor_air = 0.090688793068;
    msg.time_motor_water = 0.420378980003;
    msg.time_motor_underwater = 0.177309120502;
    msg.time_motor_unknown = 0.518488137724;
    msg.rpm_min = 31984;
    msg.rpm_max = 17753;
    msg.depth_max = 0.916420987437;

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
    msg.setTimeStamp(0.585918267938);
    msg.setSource(47904U);
    msg.setSourceEntity(228U);
    msg.setDestination(48264U);
    msg.setDestinationEntity(3U);
    msg.timestamp_last_service = 0.449653215456;
    msg.time_next_service = 0.626157711921;
    msg.time_motor_next_service = 0.323685044679;
    msg.time_idle_ground = 0.3249773326;
    msg.time_idle_air = 0.35724004798;
    msg.time_idle_water = 0.938847314899;
    msg.time_idle_underwater = 0.609333385217;
    msg.time_idle_unknown = 0.7199833781;
    msg.time_motor_ground = 0.973449489418;
    msg.time_motor_air = 0.920416595451;
    msg.time_motor_water = 0.200843006827;
    msg.time_motor_underwater = 0.680045415588;
    msg.time_motor_unknown = 0.0668587054481;
    msg.rpm_min = -7161;
    msg.rpm_max = -9525;
    msg.depth_max = 0.584883300078;

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
    msg.setTimeStamp(0.227451910386);
    msg.setSource(30840U);
    msg.setSourceEntity(215U);
    msg.setDestination(44681U);
    msg.setDestinationEntity(5U);
    msg.severity = 16U;
    msg.text.assign("OZCPEODBHCENFVQIAUMILXWCSUAXBLYJKZGWBPRYLSKDJKZTSKAVHMYHOEGTIGCVYXLQIUFCJLZLSOKEARSHRLJAQRDOHXPKTYBFYZSNRAQIKFIMBQBMQGFRNSWOOJGNTMINPSPVBWBSQXQWGUMLTCDMQTJVQCDGHXJTEXWZAJHPELGCTWVVUZFYKKDUAX");

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
    msg.setTimeStamp(0.799154173789);
    msg.setSource(29363U);
    msg.setSourceEntity(152U);
    msg.setDestination(37343U);
    msg.setDestinationEntity(220U);
    msg.severity = 122U;
    msg.text.assign("MWKWQADUWNZBGCABAOQQPGGMOKFULCKDSRYJJSFYAGJKFEUTZLUPZEKZYBOCNOWYRNOWPHVZJUQTXBPWLXNUXNZYUSCCSNFPTTIFVYRAMEIAEGMTDJWFSQPKBEYBYUMVQPSMLAVECGFTIITNVJFJVFQWDZVXIASZLFXRVIGEOXZDJYORDBXRHQLEALCTXHBIWDSML");

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
    msg.setTimeStamp(0.0201250250451);
    msg.setSource(13489U);
    msg.setSourceEntity(173U);
    msg.setDestination(9751U);
    msg.setDestinationEntity(67U);
    msg.severity = 138U;
    msg.text.assign("TFMTPXVQLRRASPGLZUZJOYSNGGMKAITLQMHWLOTJAKPEJNXBVOWIKNJERWPKVDIXKWTICINMZMWPDQIBXSKSDAKYQZHFYAPABUUXKZVLYAVHEZT");

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
    msg.setTimeStamp(0.177413774159);
    msg.setSource(24144U);
    msg.setSourceEntity(184U);
    msg.setDestination(11748U);
    msg.setDestinationEntity(71U);
    msg.channel = -34;
    msg.value = -1743128390;
    msg.gain = 89U;

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
    msg.setTimeStamp(0.133399251821);
    msg.setSource(52129U);
    msg.setSourceEntity(194U);
    msg.setDestination(12488U);
    msg.setDestinationEntity(200U);
    msg.channel = -105;
    msg.value = 1048021522;
    msg.gain = 110U;

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
    msg.setTimeStamp(0.0443532668926);
    msg.setSource(6826U);
    msg.setSourceEntity(200U);
    msg.setDestination(63507U);
    msg.setDestinationEntity(215U);
    msg.channel = -58;
    msg.value = -166806575;
    msg.gain = 43U;

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
    msg.setTimeStamp(0.840838631678);
    msg.setSource(63782U);
    msg.setSourceEntity(120U);
    msg.setDestination(26112U);
    msg.setDestinationEntity(21U);
    msg.ch01 = 0.21622294002;
    msg.ch02 = 0.463227063808;
    msg.ch03 = 0.521572123065;
    msg.ch04 = 0.910524667735;
    msg.ch05 = 0.44542226493;
    msg.ch06 = 0.0831202264769;
    msg.ch07 = 0.523113375248;
    msg.ch08 = 0.399460294574;
    msg.ch09 = 0.263987437683;
    msg.ch10 = 0.769764766572;
    msg.ch11 = 0.953030121992;
    msg.ch12 = 0.843645973275;
    msg.ch13 = 0.370970120682;
    msg.ch14 = 0.487862437712;
    msg.ch15 = 0.618240274688;
    msg.ch16 = 0.789377578454;

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
    msg.setTimeStamp(0.511531643814);
    msg.setSource(17278U);
    msg.setSourceEntity(192U);
    msg.setDestination(14884U);
    msg.setDestinationEntity(187U);
    msg.ch01 = 0.534235703425;
    msg.ch02 = 0.208597462203;
    msg.ch03 = 0.598738896781;
    msg.ch04 = 0.464176568153;
    msg.ch05 = 0.695619389441;
    msg.ch06 = 0.271813880283;
    msg.ch07 = 0.509659364715;
    msg.ch08 = 0.9099466254;
    msg.ch09 = 0.613871691774;
    msg.ch10 = 0.541707971124;
    msg.ch11 = 0.538413332222;
    msg.ch12 = 0.434279460883;
    msg.ch13 = 0.496869548313;
    msg.ch14 = 0.970389938233;
    msg.ch15 = 0.237107869046;
    msg.ch16 = 0.654848415878;

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
    msg.setTimeStamp(0.0983498939698);
    msg.setSource(2157U);
    msg.setSourceEntity(139U);
    msg.setDestination(62419U);
    msg.setDestinationEntity(131U);
    msg.ch01 = 0.494381051127;
    msg.ch02 = 0.153055856832;
    msg.ch03 = 0.955512472297;
    msg.ch04 = 0.769084449627;
    msg.ch05 = 0.110018120591;
    msg.ch06 = 0.291228652357;
    msg.ch07 = 0.522491648498;
    msg.ch08 = 0.590504228002;
    msg.ch09 = 0.151526343937;
    msg.ch10 = 0.0294096107698;
    msg.ch11 = 0.315073105973;
    msg.ch12 = 0.145141701994;
    msg.ch13 = 0.640579071754;
    msg.ch14 = 0.951744752039;
    msg.ch15 = 0.283038053154;
    msg.ch16 = 0.816380981738;

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
    msg.setTimeStamp(0.299273196169);
    msg.setSource(17195U);
    msg.setSourceEntity(4U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(234U);
    msg.op = 235U;
    msg.lat = 0.160023206507;
    msg.lon = 0.426183896979;
    msg.height = 0.703204972376;
    msg.depth = 0.763755091855;
    msg.alt = 0.138880812043;

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
    msg.setTimeStamp(0.357655596095);
    msg.setSource(38166U);
    msg.setSourceEntity(188U);
    msg.setDestination(9103U);
    msg.setDestinationEntity(203U);
    msg.op = 247U;
    msg.lat = 0.63528732069;
    msg.lon = 0.992357561477;
    msg.height = 0.374098148863;
    msg.depth = 0.348959631447;
    msg.alt = 0.193691719513;

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
    msg.setTimeStamp(0.211063200763);
    msg.setSource(51669U);
    msg.setSourceEntity(137U);
    msg.setDestination(64185U);
    msg.setDestinationEntity(168U);
    msg.op = 67U;
    msg.lat = 0.813177005106;
    msg.lon = 0.376899360041;
    msg.height = 0.558074053836;
    msg.depth = 0.223973964581;
    msg.alt = 0.0339460176268;

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
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.00728533843468);
    msg.setSource(37398U);
    msg.setSourceEntity(23U);
    msg.setDestination(15556U);
    msg.setDestinationEntity(48U);
    msg.req_id = 53848U;
    msg.type = 186U;
    msg.init = 2146830589U;
    msg.end = 3556060431U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.457345787156);
    msg.setSource(6436U);
    msg.setSourceEntity(179U);
    msg.setDestination(16109U);
    msg.setDestinationEntity(12U);
    msg.req_id = 20656U;
    msg.type = 168U;
    msg.init = 544654634U;
    msg.end = 2777266609U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.439610212675);
    msg.setSource(6422U);
    msg.setSourceEntity(197U);
    msg.setDestination(58274U);
    msg.setDestinationEntity(22U);
    msg.req_id = 61306U;
    msg.type = 5U;
    msg.init = 3229045863U;
    msg.end = 1187649470U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.852250875548);
    msg.setSource(9598U);
    msg.setSourceEntity(75U);
    msg.setDestination(3862U);
    msg.setDestinationEntity(185U);
    msg.req_id = 33717U;
    msg.type = 64U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("MWHPYUKOJWGIYXIHUMNPQWHLVRTJODXLXZYMBVRGXTVNSWKIIMUNADFQPCFQEHEUAAQFFYXEJBCXJPQFFEGWBMCJV");
    tmp_msg_0.frag_number = 39535U;
    tmp_msg_0.num_frags = 15846U;
    const char tmp_tmp_msg_0_0[] = {-49, 7, 80, -72, 64, 101, -54, -106, -88, -49, -119, -81, -25, 124, -90, 30, -110, 17, -118, -41, -6, 115, 67, -65, -30, 36, -118, 16, 126, 42, -84, -44, 88, -15, 77, 59, 31, 112, -27, -87, 63, -18, 25, -15, 53, -38, -64, -63, -70, 80, -21, -61, -19, -23, -37, 85, 101, 69, 16, 118, 44, -83, 121, -109, -30, -8, -15, -110, 81, 21, -38};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.132322140756);
    msg.setSource(28445U);
    msg.setSourceEntity(113U);
    msg.setDestination(35776U);
    msg.setDestinationEntity(89U);
    msg.req_id = 47854U;
    msg.type = 158U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("RUWGVTCWFNEPDWIHNTANERIYQOWSSNGLUKTZOEMSLDCVZPRIEHBGEBHXKPVUDRFQVFBDBETFONEDKSMQRXAJWHW");
    tmp_msg_0.frag_number = 44815U;
    tmp_msg_0.num_frags = 53000U;
    const char tmp_tmp_msg_0_0[] = {22, -75, -105, -39, -30, -38, 42, -121, 33, 30, 72, 120, -19, 81, 42, 93, 58, 88, 24, -112, 27, -79, -124, 122, -117, 69, -3, 113, 85};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.105023259571);
    msg.setSource(43120U);
    msg.setSourceEntity(13U);
    msg.setDestination(49128U);
    msg.setDestinationEntity(24U);
    msg.req_id = 55000U;
    msg.type = 136U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("BGQSMXGDOTSLMSOFHMDROEIDWHOWNCNQUHJLOLKIZGZICWSEVJEXABEYKVKGYRQBFOEUYUIRNMZTTKWACVEMIXCJZDXNIOZVTJRDYVLFBWZ");
    tmp_msg_0.frag_number = 11683U;
    tmp_msg_0.num_frags = 47677U;
    const char tmp_tmp_msg_0_0[] = {-5, -31, 21, -60, 97, 100, 106, -25, 104, -104, -5, 102, -119, 28, -15, -119, 14, -37, 1, -63, 116, -114, 22, 52, -40, -66, 89, 118, 123, -10, -34, -101, -54, 100, -118, -97, 56, -23, 82, 98, -89, 20, -23, -115, -104, 124, 27, -11, -101, 76, -62, -89, -116, -119, -46, -119, -128, 90, -44, -123, -14, -12, -71, 73, 65, -49, 53, -122, -52, 20, -87, 102};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.823580971273);
    msg.setSource(39418U);
    msg.setSourceEntity(210U);
    msg.setDestination(51863U);
    msg.setDestinationEntity(93U);
    msg.id.assign("CUYXIKPYWFPISYSGAZWBTIWYHJQRLNWCDDJEGSPAMSUVVTIETVOBGFLKDSTMKDRQQRFHNDRCNPTHIHACDGMFETHNIVMGGOEKAZAVMJHKLXAZEMFVLBOUDXYXJSXCQWPLKNBSOULNGTHBXWCIHJPUDRAGDKDMOUCVCL");
    msg.frag_number = 44631U;
    msg.num_frags = 63782U;
    const char tmp_msg_0[] = {90, 75, 88, -67, -61, 31, 2, -109, 111, -55, 70, 56, 60, -91, -75, -94, 80, -66, 125, -117, 125, 99, 120, 52, -67, -30, 87, -108, -71, -4, 49, -51, 52, 109, -12, 24, -73, 111, 101, -96, -77, -104, -68, -118, 34, 69, 23, 28, -52, 21, -50, -117, -58, -29, 35, 96, 90, -120, 90, 122, -127, -99, 103, 1, -54, 105, 109, -80, -60, 14, 120, -26, -115, 47, -119, -19, -65, 98, -94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.988094868035);
    msg.setSource(2606U);
    msg.setSourceEntity(122U);
    msg.setDestination(37530U);
    msg.setDestinationEntity(238U);
    msg.id.assign("MTOKRXERHQDTVNQALWJVLMRWRFCAPQDKXXZJOVCKTSTDWNUGVBJJFBTOQYKMERJNDWFKKHGNEGUOIPAUDYBWBHERPVEGQKFFPAPHIGYCAVUVJLXCOSXXUXXCFKEIFFTOHIIZDPCDIRWOGCUKMRYSLOYHZMVVQZZYS");
    msg.frag_number = 36792U;
    msg.num_frags = 22634U;
    const char tmp_msg_0[] = {-74, -3, 50, -22, 7, -14, 49, 35, 80, 124, 11, 60, -108, -109, -96, 32, 74, 0, 71, 84, 0, -107, -33, -5, 96, -81, 112, -47, -112, -9, 55, 117, -54, -112, -118, 62, -92, -24, 50, -82, 94, 39, -71, 44, -76, -111, 0, 49, 101, -100, 75, -37, 63, -119, -10, -36, -28, -116, 92, 87, 9, 84, 96, 52, -32, -115, -27, -38, 38, -42, 92, 20, -78, -120, 29, 63, -67, 25, -99, 27, -70, -100, -50, -1, 119, -67, 52, -62, -109, -83, -46, -52, -22, 90, 71, 60, 112, -75, 119, -25, 58, 12, -38, 62, 30, 0, 58, -67, -9, -68, -16, 98, -94, -32, 3, -90, 118, 110, -120, -117, 73, 117, 77, -100, -60, -69, 31, 8, -44, 107, -113, -35, 36, -63, -30, 14, -114, -19, 80, 31, -107, -123, -88, -92, -46, -50, -80, 114, -68, 14, -79, 123, -47, -70, 78, 54, -63, 12, -66, -68, -70, 13, 1, 99, 37, 13, 88, -96, -62, -89, -68, 34, 57, 58, -5, -81, 35, 103, 60, 84, 20, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.261813751261);
    msg.setSource(36714U);
    msg.setSourceEntity(183U);
    msg.setDestination(9496U);
    msg.setDestinationEntity(5U);
    msg.id.assign("WNMLUNNHDIFEQARIXRETHALZCVPHTL");
    msg.frag_number = 1316U;
    msg.num_frags = 43829U;
    const char tmp_msg_0[] = {26, 115, 112, 26, 99, 27, 22, 36, 83, 102, -100, -48, 20, 71, -23, 109, 118, -123, 77, -28, 47, -58, -51, 109, -33, -114, 18, 25, -9, 115, -32, 4, 119, -8, 79, -121, 56, 57, -18, -25, 53, 12, 30, -113, 46, -41, 1, 97, -35, 8, 18, 59, 19, -5, 103, -19, -61, -120, -40, -98, 23, 94, 122, 118, 64, -88, 105, 113, 14, 99, -123, -36, 4, -123, -46, 117, 115, -120, 9, -50, 109, -75, 120, 46, -1, 47, -78, -29, 102, 73, 50, -89, -67, -22, -20, -31, -68, -42, 71, -4, -81, 94, 10, -6, 88, -97, -80, 68, 98, 56, 89, -122, -97, 80, 53, 92, -125, -106, 100, -74, -74, 6, -9, -14, 112, 24, 99, -98, -10, 65, -25, 83, -77, -116, 69, -37, -69, -36, -120, 123, 117, 56, 98, -53, -3, 15, 117, -115, 33, -36, -110, 34, -42, -39, 7, 18, 8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #2", msg == *msg_d);
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
    msg.setTimeStamp(0.410242987032);
    msg.setSource(48445U);
    msg.setSourceEntity(97U);
    msg.setDestination(38847U);
    msg.setDestinationEntity(142U);
    msg.nbeams = 86U;
    msg.ncells = 231U;
    msg.coord_sys = 249U;

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
    msg.setTimeStamp(0.915350458104);
    msg.setSource(27973U);
    msg.setSourceEntity(63U);
    msg.setDestination(14970U);
    msg.setDestinationEntity(222U);
    msg.nbeams = 245U;
    msg.ncells = 186U;
    msg.coord_sys = 43U;

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
    msg.setTimeStamp(0.110345810996);
    msg.setSource(45089U);
    msg.setSourceEntity(38U);
    msg.setDestination(6391U);
    msg.setDestinationEntity(127U);
    msg.nbeams = 47U;
    msg.ncells = 112U;
    msg.coord_sys = 15U;

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
    msg.setTimeStamp(0.299467166778);
    msg.setSource(40599U);
    msg.setSourceEntity(43U);
    msg.setDestination(20934U);
    msg.setDestinationEntity(37U);
    msg.cell_position = 0.43388504854;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.795718022848;
    tmp_msg_0.amp = 0.0521149639872;
    tmp_msg_0.cor = 123U;
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
    msg.setTimeStamp(0.276251366529);
    msg.setSource(14994U);
    msg.setSourceEntity(20U);
    msg.setDestination(40169U);
    msg.setDestinationEntity(53U);
    msg.cell_position = 0.207782405035;

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
    msg.setTimeStamp(0.908383527892);
    msg.setSource(25456U);
    msg.setSourceEntity(181U);
    msg.setDestination(8532U);
    msg.setDestinationEntity(56U);
    msg.cell_position = 0.413252277594;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.262576824559;
    tmp_msg_0.amp = 0.695515821298;
    tmp_msg_0.cor = 190U;
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
    msg.setTimeStamp(0.134872545052);
    msg.setSource(27687U);
    msg.setSourceEntity(239U);
    msg.setDestination(48277U);
    msg.setDestinationEntity(145U);
    msg.vel = 0.577549286081;
    msg.amp = 0.922131386232;
    msg.cor = 184U;

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
    msg.setTimeStamp(0.705978613245);
    msg.setSource(40108U);
    msg.setSourceEntity(155U);
    msg.setDestination(3075U);
    msg.setDestinationEntity(21U);
    msg.vel = 0.32221991514;
    msg.amp = 0.925161496909;
    msg.cor = 217U;

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
    msg.setTimeStamp(0.418444773432);
    msg.setSource(61595U);
    msg.setSourceEntity(133U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(216U);
    msg.vel = 0.366870531549;
    msg.amp = 0.221694571171;
    msg.cor = 237U;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.571655164013);
    msg.setSource(56968U);
    msg.setSourceEntity(219U);
    msg.setDestination(61031U);
    msg.setDestinationEntity(20U);
    msg.value = 0.982820965511;

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
    msg.setTimeStamp(0.292820792905);
    msg.setSource(61466U);
    msg.setSourceEntity(227U);
    msg.setDestination(37039U);
    msg.setDestinationEntity(198U);
    msg.value = 0.274228985527;

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
    msg.setTimeStamp(0.338246024143);
    msg.setSource(12546U);
    msg.setSourceEntity(196U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(196U);
    msg.value = 0.669515081093;

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

  return test.getReturnValue();
}
