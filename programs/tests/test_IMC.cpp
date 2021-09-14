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
// IMC XML MD5: 4d99b55d10626ecd861a267ba61d4731                            *
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
    msg.setTimeStamp(0.18762837997172688);
    msg.setSource(45369U);
    msg.setSourceEntity(127U);
    msg.setDestination(1965U);
    msg.setDestinationEntity(30U);
    msg.state = 100U;
    msg.flags = 97U;
    msg.description.assign("YVGCRZROFIKKJHTZVWGFTFCTWCLEGPEHVIHOKFFDNDKVYIGQIFOKABWMMMXEZMIPEGBUVNPUCEDWXJLERAAQGUHJILGTMXZURVWYYETPMSTQGFRJZYDCKEQZMYFYDOJUGSQHFLPDJPWHSTMNIQUVLTHJIZSLQBMSNRDCTXRPL");

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
    msg.setTimeStamp(0.6588248724453277);
    msg.setSource(19373U);
    msg.setSourceEntity(13U);
    msg.setDestination(15028U);
    msg.setDestinationEntity(108U);
    msg.state = 53U;
    msg.flags = 117U;
    msg.description.assign("YLTJTNDMFJXVBWCDGPNZKFSYAQSFMGKXEMXSCOWZEMPUZFXMAWUHJWACGIRBRIRCVULIJODLPISIHRXUGXASQFBZBQWFMXKAOFDCFROUAZUUHLRZSOCJRVGOQNTBVLKONLVWPBBNRNWPHCFTKEGIIBWSPLGWQHVTKSDDMIEYHKZKDZQPGDUETIZNBSGGREHYFRXVQQVJZXENMHNJWAYPACDYKLETOPJNMLAJESTTUYTVMBOJQAHILUEYVYQXH");

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
    msg.setTimeStamp(0.9728308116531924);
    msg.setSource(31031U);
    msg.setSourceEntity(89U);
    msg.setDestination(20741U);
    msg.setDestinationEntity(42U);
    msg.state = 52U;
    msg.flags = 66U;
    msg.description.assign("DZHSPXBRDUIEROHRJXGMEABIIEOMZDMXMBCWCYXDKKUVRFLXPCRLFJHQDUZWIBAHYTTKNDNGJBJYVENYALHFTWGMNHULQORHFSMFDRXCKVSAYTQEUOFVAJZEQASKZIXIPQCNYXOCIUJZLSTRMTJSFYLNCNOPTHSBVRRKPJDSLIDJEPECGAYXGUETHLMWZNSFTKUWBONWOBBGFGXGQYLVKVZQMPWZJEWAYCNAC");

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
    msg.setTimeStamp(0.059935577160497244);
    msg.setSource(11972U);
    msg.setSourceEntity(250U);
    msg.setDestination(25806U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.4367791522441421);
    msg.setSource(30980U);
    msg.setSourceEntity(81U);
    msg.setDestination(25037U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.8382833146503195);
    msg.setSource(5678U);
    msg.setSourceEntity(84U);
    msg.setDestination(13139U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.2270698707672857);
    msg.setSource(28122U);
    msg.setSourceEntity(227U);
    msg.setDestination(38586U);
    msg.setDestinationEntity(102U);
    msg.id = 171U;
    msg.label.assign("UQXWSDKHURJKVWHKOCSKDLEJZRCAERWSNIHIZUGYLRJBFQIHJLABSLVQOIIFCARMNUIDFBP");
    msg.component.assign("WUZOHEWCGBPZWZLDLRORUDEBDGIOYGGJOAJFXRMNCVBGJZSFVVPKKFP");
    msg.act_time = 51253U;
    msg.deact_time = 15375U;

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
    msg.setTimeStamp(0.4066818975659783);
    msg.setSource(25736U);
    msg.setSourceEntity(131U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(20U);
    msg.id = 250U;
    msg.label.assign("ARZQCLOZEIZRIXMIXPYSSCCWYQDCFYRFGABJROVKALOSNAXLIZPJDLHILYWPKPAIZCFHIIBLJNECMDSEMONYZHAHWBRHHDWFPGO");
    msg.component.assign("KEFGGVWPOZJTNSDLXMMBKDBOESGHQHIIEYAZCSCGOGOAQYNASGRYTEYHWSDHRGBJDFDZCHIJZUTPCFZUUHNQGQCMANAPSZEIWVUWKFMOTHNYMSVEQAZWZONACBQLIFDRIWWXKKQTUGVPIRRWCOAGR");
    msg.act_time = 14618U;
    msg.deact_time = 45625U;

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
    msg.setTimeStamp(0.20870020610582962);
    msg.setSource(2525U);
    msg.setSourceEntity(138U);
    msg.setDestination(24389U);
    msg.setDestinationEntity(87U);
    msg.id = 14U;
    msg.label.assign("BNPIXWFGXWASFFTPWQGXLKAANJNNGSUJTXTMJFMJSMCYNKTCUNYVFMHSMQYVNVFRFCPZEGTJEYNHTKTCOGUSLWZSGQWEPGEPMDCRHCYNHPRNLAXWYVOUZYDEBIZBO");
    msg.component.assign("OASGLGNLLPZWJKVIUJFEFZCKKWHCUSBOWMORTOOENNCVIICZNKXCBXOIGQBXVHUJTUOEHMOPOYUFITQJDABRUZCGDZKZIPQPXYFLVDHPSMVTEHDFKQAAMAWXRYKIMDYMTPVVNULMDWSPCQAMNQDJTSWCDBGSCRPORJDGQWBYXQEFUYTRZYFRJBRWFXPWYHJHGLRHZL");
    msg.act_time = 12086U;
    msg.deact_time = 18047U;

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
    msg.setTimeStamp(0.8791658620841472);
    msg.setSource(46566U);
    msg.setSourceEntity(112U);
    msg.setDestination(3934U);
    msg.setDestinationEntity(133U);
    msg.id = 81U;

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
    msg.setTimeStamp(0.35067114798156473);
    msg.setSource(36738U);
    msg.setSourceEntity(58U);
    msg.setDestination(59903U);
    msg.setDestinationEntity(189U);
    msg.id = 125U;

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
    msg.setTimeStamp(0.41809685533656626);
    msg.setSource(9938U);
    msg.setSourceEntity(122U);
    msg.setDestination(52971U);
    msg.setDestinationEntity(238U);
    msg.id = 21U;

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
    msg.setTimeStamp(0.5617479527304191);
    msg.setSource(29649U);
    msg.setSourceEntity(80U);
    msg.setDestination(53729U);
    msg.setDestinationEntity(102U);
    msg.op = 28U;
    msg.list.assign("ZQEBQPKCBSXOCSERLVVFNLSNHMHGIHQJLMWUFYIETQTGFVRSGMJYNCRUJJLZTYOKBWRMYYQJZCHPYWUXHBAETUVJOAQEKXNACTBAEOLWWPLDSGQIISGXZLTVNMOXJNDWIZTEHPHUWWFOCPOQKOAOMSNPDTJNRSRU");

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
    msg.setTimeStamp(0.084619377780361);
    msg.setSource(45376U);
    msg.setSourceEntity(71U);
    msg.setDestination(59487U);
    msg.setDestinationEntity(113U);
    msg.op = 195U;
    msg.list.assign("UTSFKKSTPMVQBUDMNYZXEMJVPURUEQVGIHYJXPWAQAKDMTUEBWGQIIXTWHHBHVGSXISCNFWPRAWVIR");

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
    msg.setTimeStamp(0.8029056838457898);
    msg.setSource(5104U);
    msg.setSourceEntity(151U);
    msg.setDestination(47843U);
    msg.setDestinationEntity(146U);
    msg.op = 90U;
    msg.list.assign("DQNBNAPGEALDJCGZFOTINZZMIWSFKZUAEXKEPWFMSOTOVWGYVZNTCOLSVKAARCLUMBMUPOIHJYJZORNOAFGEEMEHMLECPXLERFFYDUXKSQQXKWSWMGVPNNQQWNXTPRFSCFBKXQODPDGCPSVATBWXCGIJMXTKRMEVQSQZIYVDRXUBPDAJUFHKYNBAZYEHRVBRATGHYUDTCUQWW");

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
    msg.setTimeStamp(0.8775430219794257);
    msg.setSource(31580U);
    msg.setSourceEntity(70U);
    msg.setDestination(57070U);
    msg.setDestinationEntity(154U);
    msg.value = 107U;

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
    msg.setTimeStamp(0.8383509344150005);
    msg.setSource(11554U);
    msg.setSourceEntity(6U);
    msg.setDestination(26897U);
    msg.setDestinationEntity(162U);
    msg.value = 99U;

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
    msg.setTimeStamp(0.35020525815950754);
    msg.setSource(15313U);
    msg.setSourceEntity(209U);
    msg.setDestination(48698U);
    msg.setDestinationEntity(31U);
    msg.value = 174U;

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
    msg.setTimeStamp(0.7696680595334315);
    msg.setSource(47683U);
    msg.setSourceEntity(194U);
    msg.setDestination(44726U);
    msg.setDestinationEntity(99U);
    msg.consumer.assign("TQZXFFRKAPSNQZOWYCJRLJIBRGDZYLCBTYHQDITXJYGLUKSSUXSIHNPXTRHETUZFLIEIPPBICGMYKFHVKAWXECBRFMWDUNDDOHOWWPLUUADFUTHEJZJFAN");
    msg.message_id = 38364U;

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
    msg.setTimeStamp(0.7764355883777863);
    msg.setSource(11823U);
    msg.setSourceEntity(120U);
    msg.setDestination(62289U);
    msg.setDestinationEntity(117U);
    msg.consumer.assign("AJCJRQKXBEJDORJGRBCKRHMEJMQSPDSVBBSKARSXIOLDLGJNWEEVUFFQEDVIVUAKQSGIECLXFGYURVBAZDFTPLMJUFXCCOASUKGBZYIWNFHW");
    msg.message_id = 13696U;

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
    msg.setTimeStamp(0.9746395469073924);
    msg.setSource(1659U);
    msg.setSourceEntity(169U);
    msg.setDestination(59879U);
    msg.setDestinationEntity(105U);
    msg.consumer.assign("IDLHKSNVUXKBEBMWVIQILPAGRNQMPIDYUOJMKENQKZMRNFQXHNDDXTQYEIZZFASCUDPNHKVWZLVAGMFERTNPOEKQQMPWHSMYFWGRZCESOFHFJALYZXRRONZIAUYORFTYFZEBVWEAEDIBFXBSDCTVVWOXQXHYHCHIPUTBQUBGDEIBXZRGYFYCTJKZDBHCYGGWOCSUNNAWLIOSRLJJAPMKGLBPLWPJL");
    msg.message_id = 62667U;

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
    msg.setTimeStamp(0.6449806446833087);
    msg.setSource(32244U);
    msg.setSourceEntity(69U);
    msg.setDestination(59896U);
    msg.setDestinationEntity(100U);
    msg.type = 88U;

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
    msg.setTimeStamp(0.5678258406192767);
    msg.setSource(56729U);
    msg.setSourceEntity(61U);
    msg.setDestination(17637U);
    msg.setDestinationEntity(90U);
    msg.type = 247U;

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
    msg.setTimeStamp(0.09137963768628743);
    msg.setSource(10006U);
    msg.setSourceEntity(232U);
    msg.setDestination(11194U);
    msg.setDestinationEntity(89U);
    msg.type = 202U;

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
    msg.setTimeStamp(0.5701961034532069);
    msg.setSource(24319U);
    msg.setSourceEntity(168U);
    msg.setDestination(29274U);
    msg.setDestinationEntity(99U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.21811156735737502);
    msg.setSource(41651U);
    msg.setSourceEntity(22U);
    msg.setDestination(45618U);
    msg.setDestinationEntity(154U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.9160069473176973);
    msg.setSource(48720U);
    msg.setSourceEntity(149U);
    msg.setDestination(7770U);
    msg.setDestinationEntity(81U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.3641249967642253);
    msg.setSource(45134U);
    msg.setSourceEntity(119U);
    msg.setDestination(38727U);
    msg.setDestinationEntity(153U);
    msg.total_steps = 115U;
    msg.step_number = 81U;
    msg.step.assign("DBCYCHVZAZNPOFRFBAPITHMHOHFKMZSNVPIHZCBJIDWTVRQCJZWUOKMNAGOGNJWDLYLBLEYEONBVQDWYWMFQUFOHHVZULIXTEWSIMRKSEGEALCJOPBXKEJPJVQKAFEUMNRZYGYZQBOLWGTUGURQUPAEYHDARFSAWLCVJQTMIGXCXSJPPGUKORWSYNXBBMUKUTAAPEQNC");
    msg.flags = 220U;

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
    msg.setTimeStamp(0.25079642701823246);
    msg.setSource(18957U);
    msg.setSourceEntity(188U);
    msg.setDestination(44482U);
    msg.setDestinationEntity(155U);
    msg.total_steps = 142U;
    msg.step_number = 150U;
    msg.step.assign("JDGLCRLDGZSUAEGAJNSLWBQDZQZOSXOEVKXRFQMSYTBBPWHHSOZBVOKPGYUAGKVMBUCTNLIHMLERDMTHNAVMZRLKEQJVRPIVBIZAAXCOWSQUYQ");
    msg.flags = 223U;

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
    msg.setTimeStamp(0.9851369152747056);
    msg.setSource(13092U);
    msg.setSourceEntity(218U);
    msg.setDestination(52078U);
    msg.setDestinationEntity(208U);
    msg.total_steps = 248U;
    msg.step_number = 119U;
    msg.step.assign("ZZLTUMFCRFMYRAFEQEOFOOQVZUMAKLJRYJYBSYFQIEHQRRXLQGTLUYMWPCDKWUSBOGGNVDAWAJSFCKAEBWEMXNRKBUVOSZRTHGEHGCNPKQWJGIXNMPSUVEWMCBLFQANZVPYVCY");
    msg.flags = 93U;

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
    msg.setTimeStamp(0.2805216949690885);
    msg.setSource(18061U);
    msg.setSourceEntity(201U);
    msg.setDestination(47903U);
    msg.setDestinationEntity(143U);
    msg.state = 54U;
    msg.error.assign("BMYQRSLQNPMSWTONDFVIOJMJVBGLYDBYDTVLLAIOCKQUGQTBNVOUTUIWDAFNHPGEKVBFNXHKZCHKRQYJSZPFITRPIQKTCPVSHKONECKWZXHJR");

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
    msg.setTimeStamp(0.9646778980583272);
    msg.setSource(54411U);
    msg.setSourceEntity(114U);
    msg.setDestination(54138U);
    msg.setDestinationEntity(198U);
    msg.state = 118U;
    msg.error.assign("RNSAGQSNXKGJXIAVGUOOM");

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
    msg.setTimeStamp(0.4190934883938007);
    msg.setSource(57379U);
    msg.setSourceEntity(228U);
    msg.setDestination(20547U);
    msg.setDestinationEntity(106U);
    msg.state = 60U;
    msg.error.assign("GWFWSIEIOOCGJIYJJFCVIVISUQTAJJYATDHZILYAZCZUVCELMXMTHLBKSPLHPQNXDFEIAXROAXXHHDSTTLYPMTHETANRFFWRKLFKSKQEBDYDMMXDRUNOKFKACIMVUXHRGZYKXMCUGZJKPQEPLIRGUWNTOAJNVCZOUSOFBOMYZKBBSYWZHOEUQGFNTQVWRBDLVVIXQBQPGVPWDECZMAGCNCFSRWOHKDLLENPRBNUYWDJASWGRGBBJYEN");

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
    msg.setTimeStamp(0.9812443975143563);
    msg.setSource(20099U);
    msg.setSourceEntity(240U);
    msg.setDestination(33516U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.17034955833031185);
    msg.setSource(41896U);
    msg.setSourceEntity(91U);
    msg.setDestination(25464U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.22578970209396498);
    msg.setSource(16376U);
    msg.setSourceEntity(172U);
    msg.setDestination(29362U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.9032737267536587);
    msg.setSource(56123U);
    msg.setSourceEntity(101U);
    msg.setDestination(60704U);
    msg.setDestinationEntity(85U);
    msg.op = 170U;
    msg.speed_min = 0.9057010305060289;
    msg.speed_max = 0.06135378833082994;
    msg.long_accel = 0.662472771690751;
    msg.alt_max_msl = 0.4253439435259724;
    msg.dive_fraction_max = 0.021012410917828683;
    msg.climb_fraction_max = 0.14802631706069247;
    msg.bank_max = 0.48334106236745766;
    msg.p_max = 0.0386634977878223;
    msg.pitch_min = 0.945225146366928;
    msg.pitch_max = 0.5828190575200767;
    msg.q_max = 0.23714490626387508;
    msg.g_min = 0.8757399333886324;
    msg.g_max = 0.34169118632407913;
    msg.g_lat_max = 0.21162174895068198;
    msg.rpm_min = 0.10077072843605117;
    msg.rpm_max = 0.532685192285502;
    msg.rpm_rate_max = 0.8903766459340952;

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
    msg.setTimeStamp(0.9273268056069965);
    msg.setSource(18384U);
    msg.setSourceEntity(127U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(120U);
    msg.op = 141U;
    msg.speed_min = 0.7612742752460534;
    msg.speed_max = 0.6207636417905449;
    msg.long_accel = 0.5071240283985122;
    msg.alt_max_msl = 0.09918161440118067;
    msg.dive_fraction_max = 0.23000524664759336;
    msg.climb_fraction_max = 0.14383180598898748;
    msg.bank_max = 0.6771754537332512;
    msg.p_max = 0.4910645538514954;
    msg.pitch_min = 0.038883788616308146;
    msg.pitch_max = 0.32009094869286736;
    msg.q_max = 0.5519393130810508;
    msg.g_min = 0.451199513196877;
    msg.g_max = 0.1797439961416708;
    msg.g_lat_max = 0.30701477809730493;
    msg.rpm_min = 0.22602302940745744;
    msg.rpm_max = 0.2618460469734386;
    msg.rpm_rate_max = 0.7223552563695528;

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
    msg.setTimeStamp(0.01586594948239084);
    msg.setSource(51133U);
    msg.setSourceEntity(137U);
    msg.setDestination(29445U);
    msg.setDestinationEntity(158U);
    msg.op = 54U;
    msg.speed_min = 0.8055409713504523;
    msg.speed_max = 0.02314980427919633;
    msg.long_accel = 0.20808128505180967;
    msg.alt_max_msl = 0.5869392690523987;
    msg.dive_fraction_max = 0.8391457936505978;
    msg.climb_fraction_max = 0.7827514470797013;
    msg.bank_max = 0.9202412120761236;
    msg.p_max = 0.7572702679770171;
    msg.pitch_min = 0.5129837293527867;
    msg.pitch_max = 0.46108285559627415;
    msg.q_max = 0.5374760337442894;
    msg.g_min = 0.6495051602011697;
    msg.g_max = 0.6390795292104522;
    msg.g_lat_max = 0.8697207050681506;
    msg.rpm_min = 0.10267648022460585;
    msg.rpm_max = 0.6949639053026746;
    msg.rpm_rate_max = 0.43250995330112574;

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
    msg.setTimeStamp(0.2787712029820878);
    msg.setSource(49308U);
    msg.setSourceEntity(126U);
    msg.setDestination(757U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.4436621646490677);
    msg.setSource(61329U);
    msg.setSourceEntity(43U);
    msg.setDestination(24825U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.9605330521146825);
    msg.setSource(15553U);
    msg.setSourceEntity(253U);
    msg.setDestination(21792U);
    msg.setDestinationEntity(74U);
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("QLUVYQJPMQAJJAYLFFMGBCRGADFPSFYNOKUHZMFBXILIOEIHRDXXFMROSQVOOEQXDOWVHTJRHWGMHCLNSDNERZHQLJVWPKJGJ");
    tmp_msg_0.lbearing = 0.11437438219559681;
    tmp_msg_0.lelevation = 0.7938282995271788;
    tmp_msg_0.bearing = 0.18026351187263734;
    tmp_msg_0.elevation = 0.5927440904383728;
    tmp_msg_0.phi = 0.9222939746260315;
    tmp_msg_0.theta = 0.5200406945549361;
    tmp_msg_0.psi = 0.9219695698201804;
    tmp_msg_0.accuracy = 0.1430169408995592;
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
    msg.setTimeStamp(0.7479932748636113);
    msg.setSource(52574U);
    msg.setSourceEntity(148U);
    msg.setDestination(13056U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.03372523573597874;
    msg.lon = 0.06881754245347926;
    msg.height = 0.5997429694794497;
    msg.x = 0.20479199630742528;
    msg.y = 0.24671836626832744;
    msg.z = 0.5941955057355132;
    msg.phi = 0.12132531715045125;
    msg.theta = 0.5293529338416435;
    msg.psi = 0.384308812819811;
    msg.u = 0.1859501003491565;
    msg.v = 0.8172478924778287;
    msg.w = 0.924836707515005;
    msg.p = 0.5209333751418849;
    msg.q = 0.8826489964566437;
    msg.r = 0.8327722084186656;
    msg.svx = 0.254135588477173;
    msg.svy = 0.8807758671821966;
    msg.svz = 0.6287517223361774;

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
    msg.setTimeStamp(0.43507940189596095);
    msg.setSource(39282U);
    msg.setSourceEntity(144U);
    msg.setDestination(50653U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.6052078540194438;
    msg.lon = 0.9421981300100486;
    msg.height = 0.8987389145848156;
    msg.x = 0.6318876506727497;
    msg.y = 0.6108155069389134;
    msg.z = 0.8085043094374573;
    msg.phi = 0.4450666609192202;
    msg.theta = 0.7586668876327476;
    msg.psi = 0.9018038330333793;
    msg.u = 0.796600634779727;
    msg.v = 0.6587562395161418;
    msg.w = 0.6980512648449804;
    msg.p = 0.39057563565423137;
    msg.q = 0.9378289282782816;
    msg.r = 0.9521328123785892;
    msg.svx = 0.24105526426332324;
    msg.svy = 0.970436423179521;
    msg.svz = 0.8509874640223313;

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
    msg.setTimeStamp(0.42328820994137784);
    msg.setSource(2643U);
    msg.setSourceEntity(95U);
    msg.setDestination(5284U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.9845168405474664;
    msg.lon = 0.7198139695885764;
    msg.height = 0.9377081327884615;
    msg.x = 0.8591297501260292;
    msg.y = 0.7642661790935762;
    msg.z = 0.21491325300542197;
    msg.phi = 0.7740274108826902;
    msg.theta = 0.40941723061245605;
    msg.psi = 0.6529680768152397;
    msg.u = 0.16794698849056444;
    msg.v = 0.2568210391800766;
    msg.w = 0.3651442004297881;
    msg.p = 0.25166016442991446;
    msg.q = 0.38664255782398593;
    msg.r = 0.36563174777673524;
    msg.svx = 0.09337420354117343;
    msg.svy = 0.2869142081327083;
    msg.svz = 0.23337797000957872;

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
    msg.setTimeStamp(0.45934581617463577);
    msg.setSource(21776U);
    msg.setSourceEntity(35U);
    msg.setDestination(17758U);
    msg.setDestinationEntity(89U);
    msg.op = 142U;
    msg.entities.assign("BKNOWTCOUCLEGEFYPSUOHLBFVHUINBWDZURCXLNNMBAWXSPMPEYLMTQVXRSXFZIFQBMBABLWCSDWTAGGQUCJZUWKFCVVTPVAMRFXSKRBRKKQKFIGYQFJRVSLEOAQERIKNHXFCV");

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
    msg.setTimeStamp(0.4491269025030302);
    msg.setSource(32656U);
    msg.setSourceEntity(102U);
    msg.setDestination(36335U);
    msg.setDestinationEntity(49U);
    msg.op = 136U;
    msg.entities.assign("CMBFVTYYVOFSOLNGPBDZLBYCSMTWJPPVIXFEZRLBNEWFXTEEDRSNYTCVQYRHUWVOETSFCRAWAUQIKXKDOXFIYIGPPONQJZRDDYQIFVNCEULCXDDKHSAHHKJCHSTMIANNZMQLBFTZUAMKBBLHZIAOTVPWWBYDJGGOSXXRWSDSKEQZANJGAMTUFUHYQXEXZIOLWOCLOMBRZHEGMJFGKSPEKKJQAGUUJHVAXRKYWNDGUR");

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
    msg.setTimeStamp(0.21587368721033462);
    msg.setSource(31034U);
    msg.setSourceEntity(37U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(88U);
    msg.op = 75U;
    msg.entities.assign("IRUIMJBGYCHJKSEFKVLMAMWRYAIZTXODCWGXQOVWADSJOCHTPKKNIDSLQNSDVGADFNXNEPBXDOTIKWRBPYDXFYGNDOKAPAZHILIEQNEWKEUZLPTNLQPYBJMBUZNDRLMOVBUGOXHBHTTPXGGWLYUCZRRJBXXIACSDZWFFTSNGMPBONHLFSHJVLERAWSVVPWRVCKKIYSFJHRZJQQEAGZYLACJOTTMBEHUGEZCSVMJFU");

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
    msg.setTimeStamp(0.7492421544757465);
    msg.setSource(6320U);
    msg.setSourceEntity(229U);
    msg.setDestination(47270U);
    msg.setDestinationEntity(57U);
    msg.type = 105U;
    msg.speed = 23900U;
    const char tmp_msg_0[] = {24, 89, 28, -2, 98, 79, 109, -38, 58, -68, 24, 30, 70, 3, -89, -122, 125, 6, 37, -15, 76, -23, 54, -15, -31, 5, 83, -46, -83, -122, 83, -91, 42, -30, 15, -41, -99, -7, -51, 108, 37, -100, -124, 21, 97, 84, 64, -75, 65, 93, -80, 78, -45, -115, 112, 81, -84, -27, -11, 2, -1, 75, 42, -63, 23, -65, 27, 41, 52, 125, 59, -60, -17, -28, 93, -44, -21, -76, 9, 45, -3, 84, 34, 52, -93, 100, -78, -97, 112, -43, 56, -34, -20, 91, -35, -51, 49, -71, -70, -66, 65, 9, 55, -99, -82, 119, -103, 25, -10, -118, -74, 69, -67, 104, 35, 87, -22, 74, -3, 94, 62, -110, -24, -1, -19, 29, 35, 121, 61, -127, 6, 117, -48, 20, 101, 82, 24, -46, -81, -93, 56, -55, 44, -87, 88, -128, 38, 125, -21, 92, 15, 41, -121, 126, -36, -9, -83, 24, -1, -56, -56, 13, -54, -59, -126, -36, -38, -34, 113, -26, -18, 43, 115, 120, 119, -82, 71, -51, 63, -34, 15, -9, -113, 53, 39, -92, -94, -20, 114, 81, 99};
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
    msg.setTimeStamp(0.4476850084666948);
    msg.setSource(56231U);
    msg.setSourceEntity(237U);
    msg.setDestination(41431U);
    msg.setDestinationEntity(58U);
    msg.type = 180U;
    msg.speed = 12276U;
    const char tmp_msg_0[] = {-75, 35, 98, -14, 48, -17, -74, 10, 19, 115, -9, -30, 51, -80, 39, -25, 67, -25, -76, 60, 104, -76, -78, -33, 28, -31, -18, 100, 75, -109, -81, 103, -109, 19, 27, 78, 47, -45, 89, -83, -22, -45, 52, -69, 0, -90, 91, 122, -59, -103, 82, 79, -35, -9, -120, -65, 62, 32, -48, 109, 40, -84, -52, 17, 57, 51, -58, -16, 5, 51, -16, -46, 31, -59, 9, 110, 5, 57, -6, -7, 81, -120, -76, -117, -31, 2};
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
    msg.setTimeStamp(0.39451285698136174);
    msg.setSource(7919U);
    msg.setSourceEntity(111U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(250U);
    msg.type = 102U;
    msg.speed = 384U;
    const char tmp_msg_0[] = {-27, -41, -115, 19, -2, -96, -23, 68, -65, -49, -10, 121, -77, 102, -124, 42, -66, -72, -39, 96, -40, -117, -57, -67, 70, 92, -13, 104, 3, 86, -62, 39, -5, 17, -80, -108, 95, 58, -22, -7, 84, -48, 100, 89, -53, -114, 90, -69, 125, 44, -13, -12, -70, -110, -67, -11, 111, 54, 69, 117, 91, 23, -49, -119, 88, 44, 11, 125, 60, -59, 97, 81, 70, 0, 3, 43, 120, 120, 41, -81, 118, -42, -64, 6, 32, 59, 39, -86, 97, -59, 40, -93, 0, 91, 43, 69, 117, -31, 78, 63, -26, 66, 96, 9, 29, 18};
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
    msg.setTimeStamp(0.11493854388719715);
    msg.setSource(38566U);
    msg.setSourceEntity(60U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(221U);
    msg.op = 124U;
    msg.tas2acc_pgain = 0.014845476667169177;
    msg.bank2p_pgain = 0.812187581737034;

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
    msg.setTimeStamp(0.9941756379636004);
    msg.setSource(36573U);
    msg.setSourceEntity(216U);
    msg.setDestination(17293U);
    msg.setDestinationEntity(228U);
    msg.op = 58U;
    msg.tas2acc_pgain = 0.3405062609091729;
    msg.bank2p_pgain = 0.828571575694652;

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
    msg.setTimeStamp(0.5836637961700603);
    msg.setSource(30340U);
    msg.setSourceEntity(100U);
    msg.setDestination(30204U);
    msg.setDestinationEntity(17U);
    msg.op = 66U;
    msg.tas2acc_pgain = 0.5342012568477844;
    msg.bank2p_pgain = 0.7757101305405631;

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
    msg.setTimeStamp(0.23667412585971093);
    msg.setSource(57496U);
    msg.setSourceEntity(19U);
    msg.setDestination(43450U);
    msg.setDestinationEntity(13U);
    msg.available = 1958579570U;
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
    msg.setTimeStamp(0.6490614950645429);
    msg.setSource(10882U);
    msg.setSourceEntity(232U);
    msg.setDestination(46002U);
    msg.setDestinationEntity(185U);
    msg.available = 3719699084U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.7549210863047047);
    msg.setSource(17186U);
    msg.setSourceEntity(163U);
    msg.setDestination(29186U);
    msg.setDestinationEntity(3U);
    msg.available = 34555862U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.43467602425945406);
    msg.setSource(2542U);
    msg.setSourceEntity(209U);
    msg.setDestination(59813U);
    msg.setDestinationEntity(67U);
    msg.op = 197U;
    msg.snapshot.assign("SGCULRLQPUOIXUV");
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.10844097128282126;
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
    msg.setTimeStamp(0.04562479435524569);
    msg.setSource(64800U);
    msg.setSourceEntity(232U);
    msg.setDestination(41710U);
    msg.setDestinationEntity(70U);
    msg.op = 131U;
    msg.snapshot.assign("DOXCEFCOLWIHURHKNEOUPFKTEFESJOMRLXOCTLSEXFUBGEUEZCDRQYLJVJXMSVGWIANAATMHYKJVZNMQWCFIAAKMXTCWBHKYJLNRJSHYWPQSVNDCTSQFLTOHGFXPGKOGCJVDIPPYFWUMPQUZBCGLSDSANUXYVQLIEWODJAZMAPYZDVPDXURWZSEYMUGUTVNAINFZLMR");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 20U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("IFLLWIVKVGAUYYXYBZRUEEJVVVWALERHKTIKMZFDBGOZFWCUQLTZAHQTHIOGAWCPJMTAUIQOJSS");
    tmp_tmp_msg_0_0.lat = 0.6264299663036985;
    tmp_tmp_msg_0_0.lon = 0.6347593275812309;
    tmp_tmp_msg_0_0.depth = 0.2798659831662378;
    tmp_tmp_msg_0_0.query_channel = 232U;
    tmp_tmp_msg_0_0.reply_channel = 184U;
    tmp_tmp_msg_0_0.transponder_delay = 124U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7505040927960943);
    msg.setSource(47754U);
    msg.setSourceEntity(218U);
    msg.setDestination(30914U);
    msg.setDestinationEntity(49U);
    msg.op = 94U;
    msg.snapshot.assign("RDHXBMTAQARIJKLWNZJNAXNSJRYIZICTOIXLQCBZAQPVEQPBUJLBZIWHCVGGQHCTTSGHEJKULWWNJODNRHKSLZCYWEZRUZXVFRLHOMFQNABXPOJPDESTUTPWLZVJNYTLNFRKVCOFMIDPCYMBOHWPIIHMPT");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("ITKREBKSQRNMKCBPWKVOTWOFVECBLUIQJNKUVHHIKACOEXOQRZYNALFVZTXUTGCJCCXRWBPEPTSXHZMCJMGIDLXDTLXDQZELSZAYOQUZSXMRWDFFIJBQQBHIPEGNQKOYZCJRAUWTYBSVHNDPJROSCMYIDKFGLFLDHHPYAWRTUVWPBYUVUVESIBLRF");
    tmp_msg_0.predicate.assign("WVZSNMREHYUUDRKCFONPFPVZXAVWCNAJNZEOSBXRCXIIGHBSFJRWRKKDTPBCHPQGRULJGJQEMTHKRXEDBINTTEGOOGMZGSSAFCAVVGLAYOUWLALVMGHNTZKRIYBDXKXLRWVZCQOQQVATOSQJHPKWGMLASFSNNPJJSUYOOWZAMLICWOABPWEDPXGUZKMFVDYFMUBYEISHTIENQCYZLHPEKBUQXIKJUBYXQVLXNLWFEDTTFHBYMMFQYIJJZ");
    tmp_msg_0.attributes.assign("SWOXLUIBWVSORDVTOOEBDKDXVXHOCQI");
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
    msg.setTimeStamp(0.9561622760619596);
    msg.setSource(23714U);
    msg.setSourceEntity(61U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(221U);
    msg.op = 227U;
    msg.name.assign("XCYGFYXHAEKSLAPMQPJZFQNXZHRKEGLCFFEOCTJUSNTSSCZDZQAELPGWQLMVONEUBTKCDFJOELVRDTAOPMVABVYPDYZDNIOTRJBQXLCXWMHNAQEHJEYFGNATKVNPTIKNUQHXRGGWKSSSEASZZDKMIHVUIGZSZLIWMPEFUPBYJDARHYVBKNKTX");

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
    msg.setTimeStamp(0.7586329951220164);
    msg.setSource(42642U);
    msg.setSourceEntity(95U);
    msg.setDestination(17810U);
    msg.setDestinationEntity(35U);
    msg.op = 58U;
    msg.name.assign("GQXQCBSTRZSEPPLNYTSABLLMK");

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
    msg.setTimeStamp(0.8857771717651285);
    msg.setSource(64724U);
    msg.setSourceEntity(45U);
    msg.setDestination(14284U);
    msg.setDestinationEntity(238U);
    msg.op = 11U;
    msg.name.assign("VYNYVJWOKFWCHUXXDWBAM");

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
    msg.setTimeStamp(0.7114466895466568);
    msg.setSource(58911U);
    msg.setSourceEntity(239U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(152U);
    msg.type = 150U;
    msg.htime = 0.7476340932128563;
    msg.context.assign("SLHBMXNDIWWYNBQWKWEMGSCBSQJWHUIGOUHIELHBAPZMERVDNEEPVDYVOSXBPAUQYHHRFXMZRHESCJQFKNAWWHUALLDMLJALIPKXPRDJHRTGRFZBRITUOFIAGCYSQTJNLZNQOJUFQAJTFFVDXZZKZXEHKRYZGPODKMPOOVTIABSGIRLMZCUQ");
    msg.text.assign("LQSHRLOZDYBOJOPTTDRHKFYURMXQYNKFPOKJKSACTPLRSPJOXAYGBTIACJPULQWPHXZDAXBQHWUXQHLFNGEZENDYRSNEQDVTRQBSVHNWFMHFCPMQCGOZOTVEHIQXNBUBOEGSIQXROGJUNESDAZWWXSTFKDYCTFLGGLCUGXYWZTEZMVMXUJIARJARJJSVWVNBPIOIFFKIAMLZR");

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
    msg.setTimeStamp(0.7580354478777472);
    msg.setSource(17951U);
    msg.setSourceEntity(10U);
    msg.setDestination(14272U);
    msg.setDestinationEntity(190U);
    msg.type = 228U;
    msg.htime = 0.5989267967463421;
    msg.context.assign("IERNQKTHAEJFWQDCLOAZKVWOBEVQWRZY");
    msg.text.assign("JBSWTHHLNVOFEDSYHSNUGYLJYKEAGWZQDZKMDTMTFUHDRTRCISMEIRPLOFVAUKEAYVYLJIXMCZAGKPVVOXGOKUFUFFZDEWFZSMBOSPLIUJXAKLEBDTHWRBV");

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
    msg.setTimeStamp(0.7435738157873548);
    msg.setSource(23135U);
    msg.setSourceEntity(176U);
    msg.setDestination(32319U);
    msg.setDestinationEntity(18U);
    msg.type = 136U;
    msg.htime = 0.5612500119021773;
    msg.context.assign("UFLJKMMQSDXGJIIEEEWGKWDUICFLQXFZDNSVAGLHNQXXYHOZMLIAYHOJSGIVTM");
    msg.text.assign("NIOGRTXYKWECMYRDMRTZFPKOCJFYCESCVLEZTRGDLEIU");

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
    msg.setTimeStamp(0.6406200613772324);
    msg.setSource(42836U);
    msg.setSourceEntity(51U);
    msg.setDestination(7287U);
    msg.setDestinationEntity(103U);
    msg.command = 161U;
    msg.htime = 0.9264917204192252;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 171U;
    tmp_msg_0.htime = 0.9648850447136954;
    tmp_msg_0.context.assign("DYHTXWORJTSSSUFTESJOVQNILFUXJCGYOEGPKYANUBXGSIYLQKHWQJDFPGKZKTUMRMSDRYDU");
    tmp_msg_0.text.assign("IRSESGPXGABESEODULHWQCSUVDHXKZCBEJOOKLXRMHABMAGOQWSEVONHPBAIRJUOSITTIPZKLCJFOJFYMGKAKBMYRMHQXTMVDLGPUFRUVVXECXFUCWIZNQTYRSYHLUGCZLCALPXYVEPUZXOZHIRXBMIFPYTQFZNQDDCYHRGDRJWEOFAEMWLYD");
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
    msg.setTimeStamp(0.2996186438934352);
    msg.setSource(1449U);
    msg.setSourceEntity(68U);
    msg.setDestination(34726U);
    msg.setDestinationEntity(106U);
    msg.command = 107U;
    msg.htime = 0.7272391323854744;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 35U;
    tmp_msg_0.htime = 0.32533082428335736;
    tmp_msg_0.context.assign("NKYOZTLBYMDFJXTVRSRKXJBSNCFQODIHEDDAGSBXWYWFZSJVADENATOIJQYQUHPMMVMUYWPNMPTDJGXXOILSZJALIEVP");
    tmp_msg_0.text.assign("RUWJFPYKAJUVQIIVKXBYROFVNSPLBEZMSFOHYGPSEWQUSTWQXNIBOYASQEWRYGDZPBJYUJXUQLUBDZCVHODMFMFPTUFJAZJTABRDBMCVEVVDRPSAQCYJZHDLKCELKGXYAKURWNIKVCHY");
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
    msg.setTimeStamp(0.2679552055522346);
    msg.setSource(28904U);
    msg.setSourceEntity(181U);
    msg.setDestination(64535U);
    msg.setDestinationEntity(25U);
    msg.command = 190U;
    msg.htime = 0.3542286503346662;

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
    msg.setTimeStamp(0.19384821499358817);
    msg.setSource(24393U);
    msg.setSourceEntity(246U);
    msg.setDestination(14570U);
    msg.setDestinationEntity(52U);
    msg.op = 3U;
    msg.file.assign("PMITIBSJCQHYENEYNWOALULESVYGXGEAXPLUGFLSDRBPSJQRMILGWKQRPDEAKRUMQJYFRVQTNQWKXTVRSMOGGPXUWBIZFXUYTOMZBJTWQFTRXWLTSIKZWLEDAITIIUMCYQJCWFNNZFONZLACLDJJRFPALOHGTDCXEVCMZXKCHDCUTBMIDOPGREHSDONKVHMIXCVJFJENEWMHOXOUYSZJBUQYBPAKSKUFAPVNZBVVDPBWYVSOFZCKZHHKYHGGQN");

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
    msg.setTimeStamp(0.4298044084335074);
    msg.setSource(49652U);
    msg.setSourceEntity(80U);
    msg.setDestination(25536U);
    msg.setDestinationEntity(17U);
    msg.op = 203U;
    msg.file.assign("VATGDPWGYSCETBRAVTPWUSTNKZCGXYPHKEEXEEAWEHJDFWHW");

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
    msg.setTimeStamp(0.5100720605058651);
    msg.setSource(26487U);
    msg.setSourceEntity(7U);
    msg.setDestination(35558U);
    msg.setDestinationEntity(137U);
    msg.op = 77U;
    msg.file.assign("IRCISHPCDGXUEOJSDMWOMDGRELVTOBEGZKEZQXXRJJKVZWYLFLSXYNRUDEABGQZFAYHZUKAPGDPGMCUKNOVKFIAQWCQVJCLMTJBEWKJSBRQNPVSCQBGTHSUTUWHYPHMHEYBMOFJWFVNDZNXSJLXEZVQDHBMEYOTIYIADRFIRWATOKLXENIRGGWNCTKPUPTLBVYGPFXYZLQWZLQWHHIODVXNCSLAMBIAUPJNKOSHQUXFPNJFDMUFITAAOBTR");

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
    msg.setTimeStamp(0.7050936806573838);
    msg.setSource(25341U);
    msg.setSourceEntity(53U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(89U);
    msg.op = 118U;
    msg.clock = 0.22493936479666887;
    msg.tz = -128;

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
    msg.setTimeStamp(0.7439568447803653);
    msg.setSource(1601U);
    msg.setSourceEntity(161U);
    msg.setDestination(36761U);
    msg.setDestinationEntity(46U);
    msg.op = 29U;
    msg.clock = 0.46075205462782476;
    msg.tz = -29;

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
    msg.setTimeStamp(0.19169192023767834);
    msg.setSource(39153U);
    msg.setSourceEntity(84U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(204U);
    msg.op = 236U;
    msg.clock = 0.7120526119825837;
    msg.tz = 74;

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
    msg.setTimeStamp(0.2830145022156473);
    msg.setSource(60634U);
    msg.setSourceEntity(20U);
    msg.setDestination(58906U);
    msg.setDestinationEntity(180U);
    msg.conductivity = 0.8296750875721045;
    msg.temperature = 0.8366481615569393;
    msg.depth = 0.4140245706711251;

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
    msg.setTimeStamp(0.503734400209018);
    msg.setSource(21796U);
    msg.setSourceEntity(121U);
    msg.setDestination(25221U);
    msg.setDestinationEntity(183U);
    msg.conductivity = 0.8130042981085187;
    msg.temperature = 0.08074743732804712;
    msg.depth = 0.2208673310453375;

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
    msg.setTimeStamp(0.6105318115248306);
    msg.setSource(64626U);
    msg.setSourceEntity(180U);
    msg.setDestination(64037U);
    msg.setDestinationEntity(146U);
    msg.conductivity = 0.6138149986316814;
    msg.temperature = 0.9946323089833571;
    msg.depth = 0.40086014632137545;

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
    msg.setTimeStamp(0.3970949946192588);
    msg.setSource(50140U);
    msg.setSourceEntity(233U);
    msg.setDestination(13685U);
    msg.setDestinationEntity(118U);
    msg.altitude = 0.608030391613896;
    msg.roll = 28244U;
    msg.pitch = 32883U;
    msg.yaw = 11388U;
    msg.speed = 21183;

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
    msg.setTimeStamp(0.19334588080622161);
    msg.setSource(6571U);
    msg.setSourceEntity(92U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(33U);
    msg.altitude = 0.19323431488555953;
    msg.roll = 44889U;
    msg.pitch = 39296U;
    msg.yaw = 38465U;
    msg.speed = -20392;

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
    msg.setTimeStamp(0.7876077097982818);
    msg.setSource(7938U);
    msg.setSourceEntity(232U);
    msg.setDestination(20848U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.5986828638815113;
    msg.roll = 17993U;
    msg.pitch = 57357U;
    msg.yaw = 64434U;
    msg.speed = 11184;

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
    msg.setTimeStamp(0.7400115829887709);
    msg.setSource(38361U);
    msg.setSourceEntity(156U);
    msg.setDestination(2115U);
    msg.setDestinationEntity(1U);
    msg.altitude = 0.2693396538870766;
    msg.width = 0.8122624858308857;
    msg.length = 0.20178648463076043;
    msg.bearing = 0.6405208725109531;
    msg.pxl = -4894;
    msg.encoding = 197U;
    const char tmp_msg_0[] = {69, -53, -93, -23, -23, 45, -99, 37, 66, 43, 30, -115, 106, 59, 122, -106, 0, -70, -9, 92, 115, -94, 73, -111, 108, 120, -30, -124, -29, 31, 80, 95, 78, -107, 126, 19, -122, 75, -22, -38, 84, 12, 87, -19, 72, -35, -101, -107, 17, -91, 36, 79, 95, 72, -8, 78, -97, -31, 19, -26, -59, -112, 22, 57, -32, 4, -14, 20, -50, 36, 110, 47, -96, -6, 34, 75, -31, -7, -72, 109, 85, 40, 9, -27, 67, -95, -46, 109, 84, 20, 7, -48, 21, 111, 14, 60, -10, -37, -81, 67, 28, -106, 11, -25, -5, -13, 37, -84, -95, -88};
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
    msg.setTimeStamp(0.23695007780271937);
    msg.setSource(7190U);
    msg.setSourceEntity(80U);
    msg.setDestination(11389U);
    msg.setDestinationEntity(119U);
    msg.altitude = 0.6360170804736246;
    msg.width = 0.11125829677515287;
    msg.length = 0.45095714820707444;
    msg.bearing = 0.47939685547154987;
    msg.pxl = 2473;
    msg.encoding = 36U;
    const char tmp_msg_0[] = {23, 42, 66, -19, 44, -95, -65, -14, 68, 71, 35, -80, 18, -46, -71, -52, -85, 68, -19, 54, 90, -4, -90, 35, -92, -108, -25, 29, 53, -27, 85, 15, -80, 54, -89, -119, 55, -16, -14, 10, 124, -72, 110, 4, 27, 62, -14, -7, -47, 1, -106, -78, 108, 122, -4, 28, -50, 10, -55, -80, 10, 44, -43, -118, 120, -94, -69, 114, -119, -4, 23, -100, -105, 65, 112, 27, -50, 50, 81, -54, 11, 34, 95, -39, 18, -24, -120, -47, -100, 54, 98, -8, -30, -70, -58, 122, -104, 19, -4, 15, -110, 55, 86, -52, -70, -8, 11, 52, -119, -24, 26, 1, 62, 73, 66, -29, -22, -88, -106, -107, -38, -108, 97, -117, -88, 116, -37, -103, -83, -13, -112, -38, 54, -118, -101, -94, -102};
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
    msg.setTimeStamp(0.06234310365748352);
    msg.setSource(60918U);
    msg.setSourceEntity(232U);
    msg.setDestination(55533U);
    msg.setDestinationEntity(133U);
    msg.altitude = 0.36011680079950714;
    msg.width = 0.09457477882691234;
    msg.length = 0.1375169823285074;
    msg.bearing = 0.44038092898891656;
    msg.pxl = -32759;
    msg.encoding = 119U;
    const char tmp_msg_0[] = {-108, 53, 124, -106, -1, -65, -73, 12, -64, 21, 112, -75, 76, 2, -15, -116, 102, -10, -55, -5, 94, -6, 120, -66, 81, -31, -117, 29, -16, 61, 69, 0, -68, 74, 52, -97, -94, 21, 60, 65, 52, 118, -121, -74, -43, 89, 113, 67, 53, 102, -109, -60, -12, 52, -17, 4, -15, -91, 32, 75, 105, 4, -70, -88, 3, 122, -65, 18, 67, 72, 14, 55, 115, -4, 10, -21, -125, -70, -92, -64, -42, -76, 28, -109, -58, 26, 107, -7, -28, 13, 76, 48, 42, 27, 112, 106, 8, 1, -35, -125, 20, 122, 8, 72, 46, -9, -94, 65, 68, -110, -127, 7, 9, 105, -87, 83, -121, -70, -17, -99, 24, 17, 8, -12, 8, 9, 55, 121, 17, 118, 34, -89, -126, 101, -40, -12, -24, 75, 119, -82, 111, 18, -101, 32, -110, 12, -122, -109, 50, -90, 31, -55, 51, -118, 47, 82, -27, 122, 90, 8, -121, -69, 7, 1, 77, -16, 101, 79, -118, 66, 30, -64, 104, 24, -124, -33, 104, -36, -91, 42, -51, 29, 101, 33, 13, 89, 59, 14, 0, 125, 60, 73, 122, 49, -70, -79, -64, -17, 68, -20, 53, -23, 92, -64, -64, 27, -38, -90, -50, -63, 31, -88, -49, -102, -128, -80, -102, 36, 12, -2, -62, -46, 51, -14, -32, -104, 65, -66, -128, -91, 78, 119, 86, -6, 49, 54, 33, -84, -63, -66, 62, 102, 63, 33, 84, -34, -14};
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
    msg.setTimeStamp(0.9989189860526371);
    msg.setSource(25511U);
    msg.setSourceEntity(147U);
    msg.setDestination(24567U);
    msg.setDestinationEntity(81U);
    msg.text.assign("PLYBXZJUKKUYCDPPFRCZARWYFWINBLQHGX");
    msg.type = 45U;

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
    msg.setTimeStamp(0.9074425290229905);
    msg.setSource(49076U);
    msg.setSourceEntity(225U);
    msg.setDestination(3079U);
    msg.setDestinationEntity(138U);
    msg.text.assign("HBWFWOFTLDRNAULUMIKDSXWMCUFIQGVCOTOEMEHLWXKKQMBAZXPNGLKNOVTWOYRXPLUCTAQTYVUOOBHNPERMRLMKCEYUQJJSZPEWVVJAVICVJOYNYYXEECZJIJIBJABPDILFSVTKRKLPQDTWSFCGHHVCLGQBKRXYZDDHYBPWIADDAUERGIZUDMSJNBXNMASOFTQRZEPWNMNSEUBINFGAOHKGHHBRFXVGJHWQPZG");
    msg.type = 228U;

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
    msg.setTimeStamp(0.29545661513809185);
    msg.setSource(30353U);
    msg.setSourceEntity(90U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(202U);
    msg.text.assign("ENEXROAJOCJBKOAYYFQTZNARAYSHNUVDHQCVDPYHLCIOIGKVEERHTIUCQJXSWAYHMAEBREFYJPYETWAGVBOVZDAQZPWPONAVJLGHTJCXPGGNIUSRGZUFFVBMTQKBYSZXKFCCWSPTVZFNLXMWTDBNJOZRNDLGIJPXENYMFMWHBWOE");
    msg.type = 23U;

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
    msg.setTimeStamp(0.2462659260490745);
    msg.setSource(1886U);
    msg.setSourceEntity(198U);
    msg.setDestination(2223U);
    msg.setDestinationEntity(236U);
    msg.parameter = 254U;
    msg.numsamples = 78U;
    msg.lat = 0.024675274651995704;
    msg.lon = 0.21608793661370707;

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
    msg.setTimeStamp(0.5870205579280617);
    msg.setSource(62152U);
    msg.setSourceEntity(227U);
    msg.setDestination(57193U);
    msg.setDestinationEntity(116U);
    msg.parameter = 247U;
    msg.numsamples = 0U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 49652U;
    tmp_msg_0.avg = 0.33570359097995384;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.38131242349863703;
    msg.lon = 0.9227088401013605;

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
    msg.setTimeStamp(0.9703219406108141);
    msg.setSource(39403U);
    msg.setSourceEntity(154U);
    msg.setDestination(50248U);
    msg.setDestinationEntity(180U);
    msg.parameter = 120U;
    msg.numsamples = 44U;
    msg.lat = 0.058126405261815006;
    msg.lon = 0.6487707604981517;

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
    msg.setTimeStamp(0.019954269019175297);
    msg.setSource(2554U);
    msg.setSourceEntity(83U);
    msg.setDestination(49147U);
    msg.setDestinationEntity(39U);
    msg.depth = 41162U;
    msg.avg = 0.457854643807045;

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
    msg.setTimeStamp(0.5846894476097297);
    msg.setSource(52638U);
    msg.setSourceEntity(186U);
    msg.setDestination(34564U);
    msg.setDestinationEntity(163U);
    msg.depth = 60573U;
    msg.avg = 0.8541737209717183;

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
    msg.setTimeStamp(0.5402760287410289);
    msg.setSource(13624U);
    msg.setSourceEntity(196U);
    msg.setDestination(31510U);
    msg.setDestinationEntity(27U);
    msg.depth = 31633U;
    msg.avg = 0.03278964568572318;

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
    msg.setTimeStamp(0.6607296241738082);
    msg.setSource(59489U);
    msg.setSourceEntity(229U);
    msg.setDestination(41957U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.31542184349882474);
    msg.setSource(59881U);
    msg.setSourceEntity(217U);
    msg.setDestination(65502U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.9984365181120034);
    msg.setSource(62473U);
    msg.setSourceEntity(237U);
    msg.setDestination(29581U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.6135035796740261);
    msg.setSource(20264U);
    msg.setSourceEntity(154U);
    msg.setDestination(49337U);
    msg.setDestinationEntity(243U);
    msg.sys_name.assign("GCMKINAYPANYDPESHHPSVTAFQHZNOILCSXHXMPYIPLMMHXKTGOLCQDVAAAJFFEKMEUWNTDQHPOTQSQZFKBUCJTDUFPUQGTBJGWUYONLVHZKYNTSNSGRPZDQNGZRJWRIFDLWQILVEYCGZMTDMXDYAIKKWCTMRRIBERQUWMCLWIGPBPYZEOKGXUNUARZQXDJLOOBJVBSJUFSVYUHRVZWWIVBTVCJXFZEJWFXHJOAEHAXCKXRBVBNGIYCOEO");
    msg.sys_type = 44U;
    msg.owner = 11571U;
    msg.lat = 0.966976219203763;
    msg.lon = 0.9168010739881015;
    msg.height = 0.2810600257533661;
    msg.services.assign("BMPBSTEPZHVJEZYJMJUEEJPOYKWUIHOMEKZMAFFHPKBJAUJFCIKXLZGEOHZGDMDBBNIEFSDQASMPMNBAUWRFYAZFIRTURVXVCLRKSOKRQBIWCJKSFJCYQAOGPLGXTQNZAZKKGJTFGKXILEWRILMZXXSWXIIYWFNRGOHVBWAGYAXNNQVHRMOSSDTLTQFOPNTCXBVVDECN");

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
    msg.setTimeStamp(0.8092369326279195);
    msg.setSource(23865U);
    msg.setSourceEntity(103U);
    msg.setDestination(7969U);
    msg.setDestinationEntity(209U);
    msg.sys_name.assign("VILLCHALOWTRS");
    msg.sys_type = 185U;
    msg.owner = 35655U;
    msg.lat = 0.35087243736721474;
    msg.lon = 0.12992475334792541;
    msg.height = 0.5899939085731051;
    msg.services.assign("RIPSFTUDBZKEFLPMTZFGZTBWXJFVNDZUQHSDSZOECYKNGVRLUIQELJEOIVYDFGFBPTSFHBETPXNMWYOFACPJJGEAITNUFRAPCOXVDIZTALGKSKEUJDBAIHRNKKSTWXQDEBVR");

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
    msg.setTimeStamp(0.04612332940843333);
    msg.setSource(49849U);
    msg.setSourceEntity(244U);
    msg.setDestination(56850U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("ZOCXDDEDQMWLDTVISCUGWSIEOZSRJEQCNPMXPMHIJTJOAJOTSTFXFWCBLATXGOGKOIOYDZGQECSEWGTUQGYTNIIBMRMABBFQKBKZVLAEPUJPRKBFNRIKGZUCHPHH");
    msg.sys_type = 230U;
    msg.owner = 2946U;
    msg.lat = 0.7766899022373004;
    msg.lon = 0.7388280320647935;
    msg.height = 0.45763498461015406;
    msg.services.assign("SSFVNXRMOBHYYWWWTBQSUAZOLGEAARQMGPFAWYEKZGZUODFOTQVXNIKNWCRFYHIMWXUFVQPXAVDISBTRSMDBEYSBTVAXPGQUGFBRTHBXAUZOVFYFJPNNCLRIZDKCROFTGECJDMGWMSSYWNINCHRPMC");

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
    msg.setTimeStamp(0.06069112737809035);
    msg.setSource(55881U);
    msg.setSourceEntity(13U);
    msg.setDestination(38941U);
    msg.setDestinationEntity(15U);
    msg.service.assign("UWIEDSCCSZJGSIPHWVCTCULAMVPNUNRVYABSATMLOEVWVECIRBOUGYOJMQKFINQPEIXYKELYMJDWDJPFSOOFQDVERKCQCKCGCPJWTDFWMUMIUMKRQUNNTZZZCXQGZHTA");
    msg.service_type = 44U;

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
    msg.setTimeStamp(0.8070763106231683);
    msg.setSource(64221U);
    msg.setSourceEntity(57U);
    msg.setDestination(35877U);
    msg.setDestinationEntity(102U);
    msg.service.assign("GUQKITCJXMEXZFGISZIFNFSZNUJLSWNLJMPIDXCUBDVPWBDKCTLVLQODAMWWCEYXUVBIATFAQWXPOJDQAYTFJUQXARWDEZG");
    msg.service_type = 251U;

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
    msg.setTimeStamp(0.44572624944356853);
    msg.setSource(33443U);
    msg.setSourceEntity(102U);
    msg.setDestination(43130U);
    msg.setDestinationEntity(241U);
    msg.service.assign("JFLSMMDINBUNUANEDDBRYYPKXLJWTWMIFHWVFNLGVKYRBATDQLIBTLAIPHDTGZZCFONUPXETQJALMHYUKZGXHRVYNGXXJSFEJAOTHCEBOYGS");
    msg.service_type = 137U;

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
    msg.setTimeStamp(0.4167641040805663);
    msg.setSource(32257U);
    msg.setSourceEntity(172U);
    msg.setDestination(10077U);
    msg.setDestinationEntity(208U);
    msg.value = 0.8446413859743352;

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
    msg.setTimeStamp(0.7347821165862458);
    msg.setSource(56219U);
    msg.setSourceEntity(69U);
    msg.setDestination(54122U);
    msg.setDestinationEntity(150U);
    msg.value = 0.34619517587430393;

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
    msg.setTimeStamp(0.23402870444497104);
    msg.setSource(11199U);
    msg.setSourceEntity(227U);
    msg.setDestination(40583U);
    msg.setDestinationEntity(92U);
    msg.value = 0.33040335332303317;

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
    msg.setTimeStamp(0.9683243299353371);
    msg.setSource(65429U);
    msg.setSourceEntity(79U);
    msg.setDestination(25686U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6744299820220125;

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
    msg.setTimeStamp(0.19714644739686782);
    msg.setSource(62418U);
    msg.setSourceEntity(122U);
    msg.setDestination(47202U);
    msg.setDestinationEntity(78U);
    msg.value = 0.1588258830206205;

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
    msg.setTimeStamp(0.7883229711182231);
    msg.setSource(39354U);
    msg.setSourceEntity(78U);
    msg.setDestination(30614U);
    msg.setDestinationEntity(146U);
    msg.value = 0.4447102150652015;

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
    msg.setTimeStamp(0.931516709039643);
    msg.setSource(8273U);
    msg.setSourceEntity(148U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(232U);
    msg.value = 0.6119409915749453;

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
    msg.setTimeStamp(0.3500970038982605);
    msg.setSource(54383U);
    msg.setSourceEntity(78U);
    msg.setDestination(12470U);
    msg.setDestinationEntity(209U);
    msg.value = 0.5971610921367951;

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
    msg.setTimeStamp(0.323656308234481);
    msg.setSource(3665U);
    msg.setSourceEntity(48U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(187U);
    msg.value = 0.8245325826525931;

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
    msg.setTimeStamp(0.0032713857454748085);
    msg.setSource(26528U);
    msg.setSourceEntity(34U);
    msg.setDestination(32394U);
    msg.setDestinationEntity(218U);
    msg.number.assign("UDMIKWNOBSIMAEGEOUZUCLTHGGTDMQJFZMYKWPPCRPEARIAYHJZYIQZPQDVTIBKHFZRUZZYHVGKAOSKLLUUAXOWOVVKRCPVUSAWCNBFFWSVVNGESZCBMKDNDGNVEYWJNXTNLAPICJQHHXGLTAIPMDBFA");
    msg.timeout = 18154U;
    msg.contents.assign("XHANUGTFPYCIGPZVJFUDQATOVBHDCHXIKWCHTZTYHWEYXORVFTLWRKIUIXGFIYGUJCCKQEXIRMSXNQQOTBJDCJTGEWYJPEPCFELNZTGEZGIPPFZMUPRVKSUROPHMXFSOQKDNZLJRVXTLNAJUCLEADMLIMRAGVLHZVFASKRDSMNMIYPYFTZOH");

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
    msg.setTimeStamp(0.15926216941766702);
    msg.setSource(48288U);
    msg.setSourceEntity(2U);
    msg.setDestination(46496U);
    msg.setDestinationEntity(50U);
    msg.number.assign("ONZFSLSVIKSEHEQQFAGDNTTGBEQOQLEWNJDRBAJXVVACNLCLFHJQHN");
    msg.timeout = 393U;
    msg.contents.assign("CFMZMMIGKHSGDGOIHFBFQPOZNUOGZMTBNJMEIYCCTZHRREPSMUAEQZIITQMLERSITJLVBQSVEHVSOAPJSZVHLOMFGYQUCWPABRPJNXQNRDCBAMJAAETFLYPNUZPGBXDUEGAXYKKQNRHWDJXXVNXVDBHNICWKKLCDJSFQJYIKWVDMCANBOTXROXTZSWCJWAKHUZLATSYW");

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
    msg.setTimeStamp(0.777015194776185);
    msg.setSource(22400U);
    msg.setSourceEntity(162U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(189U);
    msg.number.assign("BYPUGFSOVVGIHSQOTTYROUYLKJJCMCLNAAUMOFKPZNYZVDVYDOTULGJFIZMWFRVGBJLEJYCQNYDBEFQQNOHOFAYVQEBJVLBCCDDISHXHYRXTLBKJUVDYIKGANPUERRBTXXKWSSWMIODUMHOFWNTMKOAASDJCKURWSZEWIVCINUMPZPZAMTEHGRKCSITUXCNSDXZSBEAXZBHQGKLNPDNGXQWCZLARHLPQEEKHLMAMPIFQGJJRRZXTWGWEHQBFPP");
    msg.timeout = 32676U;
    msg.contents.assign("CGENTZPEXZESDPWZMOSVNRSVPGHWUGRUEMLNJBRLUZFCJVZFGMLZQILIDHTDQRGJUYPNEQYQYNAVOMJKWMUFFUAXDZCKIBIAJEJFJKCSKTCRXHVDDMKYQECNTNQMZWHOOBUGYQLSGDZHDKFOVHTXIOECKIVVAUAWTFYLBMTDTMJOPDVBIQIHHAAGHXVYSBRTKRNGPLLCXYPCIPPNOQAEOSRTAWX");

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
    msg.setTimeStamp(0.5822481911332997);
    msg.setSource(22298U);
    msg.setSourceEntity(84U);
    msg.setDestination(12040U);
    msg.setDestinationEntity(179U);
    msg.seq = 3942641673U;
    msg.destination.assign("HNEQYSGLQMYFZJMKDDRGZLVKBDMISTMVOJUTCHPPFDCPZZPYTEFLXLLSFEMQSGVSSPAPOVSAXFWUYPRVZZJVAKANEOBCCGHHCIFUEYQNRKDCDYLXURGBBUROVJYBSAICQJMOMLDQURJHQIEFIBWBTWTUDNQIRGITKILOPEOTZNIZWOJANLUMOXACEHJKKNFATKVPKXJVDERBSQZBOMWDHNXNRHTIBHGCWJUMGSLZHNEYXXWW");
    msg.timeout = 9489U;
    const char tmp_msg_0[] = {-53, 3, -14, 95, 34, -92, 112, -103, 20, 5, -116, 109, 111, -73, 115, 22, 81, -35, 123, 112, 81, 3, 4, -42, -79, -113, 18, 81, 124, 46, 96, -35, 14, 106, 60, -50, -115, -2, -78, -53, -105, -8, 45, -27, -91, -99, 120, 34, 12, -12, 30, 30, -61, -99, -56, 45, 69, -63, 0, -95, 117, 122, 113, 10, 122, -62, -41, -52, 5, 11, 80, 34, -37, -63, 91, -64, -118, 23, 59, -103, 15, -17, 11, -29, -121, -2, -16, 32, -22, 47, 28, -90, 88, 66, -104, -99, -64, -93, -102, 22, 43, 103, -44, -89, 9, -77, 16, -72, -83, 25, -35, -75, -100, -31, -70, -111, 114, -94, -42, 80, 1, -79, -88, -24, -36, -39, -103, 19, 126, 2, -127, 72, 105, 42, 61, 97, -74, -51, -42, 104, 124, 105, 109, 66, 105, 29, -57, 111, -110, -82, 35, 22, 93, -74, -15, 108, 36, 53, 92, 55, -69, -35, -32, -52, 108, 101, 119, 73, -55, 3, -99, 121, -84, 36, 68, 54, 86, 16, -30, -39, 6, 120, -25, -60};
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
    msg.setTimeStamp(0.8166244231310814);
    msg.setSource(27586U);
    msg.setSourceEntity(174U);
    msg.setDestination(35919U);
    msg.setDestinationEntity(76U);
    msg.seq = 1043332271U;
    msg.destination.assign("PFPKBLZHKJJGHETOECCCNPURWFBFSZLHXVWXCXAUGWPMOOBXQJBMAGLTECRZJAFAIUUDUPKMRKYMNIRC");
    msg.timeout = 13746U;
    const char tmp_msg_0[] = {-40, 112, 123, 30, 115, -69, -123, 17, 18, -5, 92, 114, -70, 24, -60, -78, -23, -110, 21, 112, 1, -12, -48, 98, -50, 92, 63, -64, 94, 98, -124, -76, 85, -112, -34, 23, 54, -79, -120, 22, 68, -8, -21, 10, 80, 57, 49, -66, -19, 72, 8, -96, -101, 32, -105, -49, 5, 30, -107, -125, 93, -106, 108, -58, -1, 84, 120, -32, 6, -126, 28, -25, -79, -126, -66, 57, 84, 4, 5, -71, 117, -78, -92, -47, -50, 92, 49, -51, 32, -13, 49, -80, 13, -36, 69, -76, 18, 112, -18, 109, -110, 87, 13, -31, 18, -74, 55, 80, 11, -42, -89, 104, 112, -7, -109, 17, 119, -52, 59, -40, 122, -18, -127, 72, 85, -84, 79, 22, -116, 35, -73, -19, 52, -120, -16, -64, 18, 53, -59, 116, -80, 2, 90, -93, 46, 87, -50, -7, -8, 40, -49, -56, 107, -69, -104, 118, -10, 61, 11, 85, 46, -51, -57, 78, -22, -48, -95, -22, -37, 18, -68, 50, 80, 119, -73, 28, 32, 20, 109, -54, 67, -116, 104, 27, 55, 42, -92, -36, -106, 88, -114, -128, 10, -49, 125, 91, 1, -19};
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
    msg.setTimeStamp(0.9254389248818439);
    msg.setSource(11933U);
    msg.setSourceEntity(11U);
    msg.setDestination(46883U);
    msg.setDestinationEntity(56U);
    msg.seq = 604197576U;
    msg.destination.assign("QQUYIMUXTATMEWUWQKTILKBOETQLAARBKUWNSXMQGBYCLOYJAFXSJPETHWCYV");
    msg.timeout = 29346U;
    const char tmp_msg_0[] = {-88, -107, -89, 107, -76, 21, 54, 16, -73, 97, -46, 29, 119, 57, -108, 35, 121, 123, 30, -125, -123, 89, -30, 96, -65, 20, 97, 9, -68, -91, -117, 31, -38, -117, 32, -121, -30, 88, -26, 107, 102, 33, -87, -11, -89, -49, -111, 14, -36, -59, -106, 40, 4, -123, 66, -23, 125, 98, 93, 50, 45, 75, -31, -121, 120, -99, 126, 66, 27, -10, 12, 53, 91, 18, -109, -2, 88, -98, 65, 21, 55, -119, -24, 35, -27, -48, 104, -104, -122, -11, -70, -7, -107, 49, -49, -35, 116, -26, 29, -120, -11, 63, -112, 84, -68, -96, 110, -104, -11, 110, 28, 79, 51, -83, 105, -118, 67, -99, 92, 18, 112, -104, -91, 61, -27, -59, 27, 18, 65, -67, -55, 70, 45, -83, -119, 59, -67, 32, 7, -33, 76, 116, -37, -75, -37, 61, 121, -55, -36, -26, 58, 70, -47, 102, -84, 122, 103, 89, -85, 121, -112, -114, 0, 0, -120, 35, 100, -80, 27, -24, 95, -20, -53, 124, -38, -54, 49, -10, 13, 69, 53, -39, -123, 102, 121, -123, -119, 126, -91, -51, 7, -18, 44, 96, 59, 29, -123, -87, -38, -39, 84, 91, -79, 42, -12, 52, -10, 62, 77, -21, 21, 115, -60, 4, 102, 66, 28, -34, -110, -101, -35, -27, -51, -105, 65, 99, -107, -36, 58, -93, -18, 16, -29, -16, -105, -88, -25, 55, 8, 44, -103, 98, 29, -115, 96, -123, 120};
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
    msg.setTimeStamp(0.2569459703394107);
    msg.setSource(51385U);
    msg.setSourceEntity(191U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(164U);
    msg.source.assign("XAIOPVESJWCAPYBTGRJANCDIHOSUNZMJAFCJSDCEHPZJOSKBLLDMIXRKQKIUSLKIQZFULZJIOGMFXPPLERIYTNVBSFZOBHBZJTKWXWGNTGMVEDUGJUMFHRHMVFVKUHMIBDZDAXKTDQWYUQQRLNOPSWGXDVVSRYCLSYLVLNOASTKALCNRIUCEPHBQFYZUQWHUMKRATZEOMNKQFEETPFRXGP");
    const char tmp_msg_0[] = {-81, -57, 42, -87, -20, -54, 84, 16, -3, -95, -121, -59, 68, -121, -40, 50, -37, 46, 57, -23, 36, -43, 59, -124, 27, 108, -88, 76, -102, -70, 49, -128, 38, -87, 46, -82, 99, -110, 93, 75, 65, 103, -67, -85, -7, 52, -96, 118, 30, -120, -27, -70, 28, -70, -21, -79, 92, -33, -46, 59, 83, 40, 35, 19, 6, 105, -2, -70, 100, 98, -60, 31, 43, 79, -8, 12, 31, -127, -100, 76, 30, -4, -46, 83, -128, -99, 103, -112, -45, 4, 105, -51, 67, 85, 82, -61, -118, 43, -71, 31, 88, -125, 3, -15, -78, 12};
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
    msg.setTimeStamp(0.9766586407265087);
    msg.setSource(55180U);
    msg.setSourceEntity(41U);
    msg.setDestination(56371U);
    msg.setDestinationEntity(20U);
    msg.source.assign("MQOVTXFSZNUNABBIOKMRWGULSYYUIWTSVVEPGAVWGTOMBHILPSTMVYMTDRJFKFDHWALAQTYRKCWYOEJINQYQRZSWHTRNLTLJLORQYHGHKAJSZBDUKJEVKDEFCASVDDRYCVEAGEKFVGOQVLKCZEGWNHHNMOFIATUBPBCMUCULNYPPHRBPHNEMCMMXGQCSIHPBUXFKXZZQQDFZZAXNYOBISRCJCZJIBGDGOWWUXDLJXPNODPPSJUT");
    const char tmp_msg_0[] = {44, 75, -82, 62, -74, 37, -87, -98, 97, 52, 52, 98, 69, 99, 24, -110, -120, 66, 62, -41, 23, 122, 5, 111, -35, 100, 95, -113, 52, -77, -105, 93, 49, 90, 109, -54, -19, 78, -7, 107, 120, -78, -66, 99, 120, -20, 25, 53, 46, -20, 66, -10, 1, -9, -93, 90, 28, 107, -120, -20, 12, 99, 12, -39, -99, -45, -18, 97, -37, -85, 91, -116, -71, -99, -55};
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
    msg.setTimeStamp(0.3702143383221076);
    msg.setSource(9315U);
    msg.setSourceEntity(12U);
    msg.setDestination(52119U);
    msg.setDestinationEntity(157U);
    msg.source.assign("RKMXULWWVLTBRP");
    const char tmp_msg_0[] = {44, 54, -63, 91, -3, 121, 55, -86, 64, 103, -51, 122, -103, 72, 86, -31, -61, 37, -42, 85, -34, -126, -41, 86, -108, -26, 46, -118, 123, 117, 91, 93, -8, -111, 83, 111, 109, -27, 18, 20, -104, -66, 13, -96, 15, -70, -4, 121, 42, -127, -86, 126, 40, 54, 48, -32, 19, 6, -127, -51, 54, -55, -84, 4, 88, 92, -48, 3, -76, -88, -6, 94, 28, 21, -11, -56, -128, 12, 19, -70, -60, 97, -74, -68, -98, -48, 83, -40, 52, -11, 41, 89, 123, 88, 98, -13, -50, -59, 114, -15, -58, 40, -25, 104, -28, 71, 70, -58, 16, -28, -62, 36, 86, -106, -50, 72, -58, -84, -83, 66, -30, -93, -92, 57, -114, 78, 102, -122, 35, 125, -13, 32, -88, -78, -104, 53, -54, -98, -27, -12, 115, -39, -61, -61, -128, -93, 101, 88, -53, -92, -23, -82, -119, 121, -119, 0, -83, 29};
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
    msg.setTimeStamp(0.15805436386406868);
    msg.setSource(14540U);
    msg.setSourceEntity(240U);
    msg.setDestination(13753U);
    msg.setDestinationEntity(242U);
    msg.seq = 3783401231U;
    msg.state = 92U;
    msg.error.assign("EULLKXEVJFNEGLSLCOBUGALKZWWTBJSDBJZPHABGAFOATVEQITCIKMXYOTHRDVLELOUMYUBGVRZCXPOEIRVOQRUYWKPQMGTZBGZUMAXXNFQSEQUKIMSZSJDVKBSBPFISDDIVRITQXLUAYRISKCZHFCMRMAUNMNXFYOJWACFSCJAWPYJTDTJJZEIHBWFKOK");

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
    msg.setTimeStamp(0.8583345455799036);
    msg.setSource(23403U);
    msg.setSourceEntity(185U);
    msg.setDestination(44798U);
    msg.setDestinationEntity(39U);
    msg.seq = 3937679436U;
    msg.state = 247U;
    msg.error.assign("IUXAYSNQKFESHPKYBLJJIUOAWKSTPQICNQCFYBTGBJEWALTIOAHPVHTUTQVELMDXMTTWDEOUMGFDOFXOMVASNHYUELKQLCAVEJWHZADXDEPYOZWPOMDCLAIGEVZWDVQVHHUTNFZMDRYNW");

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
    msg.setTimeStamp(0.2872060542653738);
    msg.setSource(19417U);
    msg.setSourceEntity(118U);
    msg.setDestination(2019U);
    msg.setDestinationEntity(174U);
    msg.seq = 450654991U;
    msg.state = 191U;
    msg.error.assign("VBNVSUEVXREGFIQLSLJIALDTZREVKBFCPFAVXRACHTYHDDOXQZKSPQDMNGQLQOCDGKRSWFJNZREMKOIGZTZM");

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
    msg.setTimeStamp(0.6140469965719696);
    msg.setSource(12942U);
    msg.setSourceEntity(111U);
    msg.setDestination(42272U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("BHCHFAYAIAMHRSAOUKNOGTKDBPXIGEGVEUVFXJXSQAYIETVAONZ");
    msg.text.assign("EPCOVVAUDLRAUWESMVIVNBLWKMZZMCVFDTWRZREGHABIXDMHZIOFGYNIJBZDYLJHQJYYRJPVLHTOHNVGJXTMWGLSXTBNKXIIKSWSOPQBGFXRDMYPXUEOJQAWFEDPNAPGQRHYGXUFFLGUIQVRCBTQKCKOUYPHOSFPJAATGZIBYEKPAQAIHKNSLOXFGQCUIUKOJYUWEMOJXCBJKVLZBTDTECNXHSFC");

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
    msg.setTimeStamp(0.9951000764129444);
    msg.setSource(52214U);
    msg.setSourceEntity(112U);
    msg.setDestination(8815U);
    msg.setDestinationEntity(167U);
    msg.origin.assign("SWGKVCMFPVZOYYMRXDIADJGXNRPOYLJTUCJWADQFQZEJVEADEZBKLUISKKFGNZBFMZMFFWFRNNWBQJZBZKQPODDOVPFLWHFCSCWNIZHLJLTPNHBHHKHWSXUHXENJFQTZIVWYBAJIPUOZETYTSKJUSTPSKANLQUMEQRGORAJMDXRLVCMXMTUIOCIGPAYLNXXEOHYR");
    msg.text.assign("LSMUEWCEQXTAKPUTIOZBMZWBJLJUAJTRKHPNTFCOD");

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
    msg.setTimeStamp(0.2969559924658661);
    msg.setSource(54245U);
    msg.setSourceEntity(129U);
    msg.setDestination(20253U);
    msg.setDestinationEntity(188U);
    msg.origin.assign("YIHUTRWKPKWLNWNKLTTCSDKTEGAZFSYEFUNJCXMIFMFCDKDEOBYPEWRLRAFKGOIBVKAHJVVQTWMPETXZIODYJBDOPVSDEFUNRHLYDWDBVBVQKHTAGUGWSPKCBULNTNUJAHC");
    msg.text.assign("KINFDNZTOGCBTEIJLYKQTDEROMUYBIAJPQDWTCHPLOJGKGUIHZNMCPAYPDQVJXCNPKFAJEVJVTIWSZEVRZEUGSVXSZSPXQZZCBYZDVWFNPMOFBOLAPKWAYHXYYUUMMSWUDH");

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
    msg.setTimeStamp(0.4861593815491738);
    msg.setSource(18419U);
    msg.setSourceEntity(46U);
    msg.setDestination(49079U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("FRRUWNHNTNMGVKZTXFFXOQRWJAXUPAKGFCWPGLVMJNNIHBKPSBMZBVHJDYRAXKBRLSJCYCUCZUTYMWKLTQEIAWH");
    msg.htime = 0.47252675214029105;
    msg.lat = 0.153613648509197;
    msg.lon = 0.3199779548291274;
    const char tmp_msg_0[] = {-47, 109, 98, 32, 8, 115, -66, -66, 2, 10, 49, -50, -83, 82, 101, -114, 15, -41, -63, 87, 118, -56, -39, 34, 21, -118, 84, 96, 92, 118, -7, -117, -24, -19, -112, -123, 58, 125, -70, -51, 96, -10, 114, -68, 39, -25, -76, -54, -12, 13, -85, 80, 126, 103, -81, -65, -106, -102, 124, -97, 17, -62, -47, 60, 91, 42, -27, 43, -58, -118, 34, -119, -55, 87, -120, -113, -3, -109, -113, 68, 78, -22, 67, 43, 100, -36, 54, -92, -25, -108, 91, -81, -26, -89, 3, 32, -73, -118, -99, -106, 70, -70, 33, 32, 24, -27, 18, 37, 41, 18, 110, -79, -2, -94, 14, -112, 82, -109, 76, 48, 91, -59, -47, 62, -3, -26, 39, -23, -61, 17, -81, 67, 25, -83, -127, 96, 104, 38, 100, -111, 53, -80, 41, -17, 43, 22, 77, -19, 3, -44, -25, -116, 45, 60, -1, -102, -1, 53, 101, -125, 15, 82, -88, -59, -87, 33, 100, -108, 49, -98, 62, 79, -29, 43, -41, -67, -115, -36, 113, 45, -9, 96, 48, -95, -105, 28, 40, 101, -18, -90, -121, -38, -119, -59, -32, -60, 12, 125};
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
    msg.setTimeStamp(0.8586851587331031);
    msg.setSource(24875U);
    msg.setSourceEntity(216U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("ELIEEFKIMPTPCFDQLZZVNFJIZVWRYDLOSKHENIGCJCVQKUAHBRZEGYCCWRMLTUHOYJGSBULGCSOITEKYZJMKMSIPOSHOTRSBPRNTWOVCZAEQBPHFNXTOXDYDTZATJJXAPDPWVJZXPHBHLOSVFJXDHXXRURMFSTBVMUBXQGGMLNIARYWPGANGVXRYAKWZVH");
    msg.htime = 0.8827369715418061;
    msg.lat = 0.8651382401248522;
    msg.lon = 0.642955810590952;
    const char tmp_msg_0[] = {99, -12, 0, -21, 71, -22, 80, 32, -106, 51, -73, -17, 15, 6, -93, 47, 113, -59, -110, 104, 1, -29, -12, 110, -84, -118, 41, 116, -101, -32, 106, 123, 112, 80, -124, 34, -73, 126, -50, -66, 13, 94, 114, 86, 5, -70, -116, -58, -92, -16, 56, -68, 58, -69, -75, -120, 5, -60, 100, 108, 31, 39, 113, 57, -127, 64, -77, 77, 92, 106, 108, 26, 119, -82, 121, -32, 14, 12, 61, -18, -48, 83, -127, 2, -18, -53, 119, -5, 24, 104, -7, 56, 20, 25, -111, -123, -87, 5, -63, -9, -62, 82, 114, -117, -67, -50, 120, 31, -123, -18, 57, -90, -54, 37, 8, -103, 35, -41, 0, -66, 117, -8, 47, -60, 5, 108, 35, -73, -28, 21, -88, 69, 59, -63, 28, 9, 30, -76, -47, -127, 57, 51, -124, -18, 114, -1, 84, -70, -31, -39, -128, -72, -93, -63, -82, -107, 35, -52, 100, -119, -39, 53, -66, -2, 66, 79, 57, -116, -73, 15, 54, 58, -75, 108, 35, 35, -11, -37, -56, 70, -64, 31, 27, -42, -19, -79, -108, 57, -24, 120, 69, 77, 65, 70, -49, 93, -10, 114, -54, 46, 54, 112, -84, 122, -114, 31, -92, 115, 2, 38, -117, -122, -20, -96, -120};
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
    msg.setTimeStamp(0.5002859683696002);
    msg.setSource(49719U);
    msg.setSourceEntity(213U);
    msg.setDestination(3702U);
    msg.setDestinationEntity(190U);
    msg.origin.assign("FYMUXYSGFHSWHCVAJDTYABYZXNAJWCNOGIFZOYONVQHRMJEMBDOWEPNMDSXBZCUPTOLTRCYKCEMDGJXJFFVIBEBEKFUPKNUXCHAVIAUSBJPGVERQRBC");
    msg.htime = 0.42552379574137866;
    msg.lat = 0.7749586068942862;
    msg.lon = 0.38580138438747824;
    const char tmp_msg_0[] = {78, -18, -88, 15, -92, -128, 75, -112, -91, 108, 9, -86, 82, 126, 104, -92, -89, 37, -49, -102, -109, -102, 25, -106, -58, -102, -47, 65, -41, -26, -45, -48, -39, -23, 71, 113, -79, -29, -121, 121, 55, -50, 34, 114, -114, -69, 57, 0, 60, 66, 89, 97, -18, -108, 20, -117, -85, -14, 0, -95, 43, -115, -7, -30, -98, -31, -78, 72, 75, 96, -54, -100, 46, -15, -50, 101, 123, 28, -37, -90, 87, -51, 26, -116, 99, -71, 72, -117, -40, -117, -36, 69, -115, 61, -25, 69, 53, -58, -70, -78, -60, -32, -20, -45, -70, -96, -84, -121, 84, -10, -37, -128, 90, -91, -125, -97, -49, -40, 109, -41, -40, 97, -73, -122, 2, -119, 125, -37, 121, -111, -88, -113, 117, -101, -74, 49, 5, 107, -15, 70, -111, 43, -98, 38, -75, -27, -20, 18, 9, 18, 53, -96, 105, 121, -20, -116, -59, -15, -38, 40, -27, -106, -2, -59, -125, 75, -112, -43, -123, -9, 74, 84, -53, -37, -123, 29, 57, -75, -73, -19, -47, -85, -57, -39, -43};
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
    msg.setTimeStamp(0.848639583615051);
    msg.setSource(33053U);
    msg.setSourceEntity(181U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(69U);
    msg.req_id = 50274U;
    msg.ttl = 31344U;
    msg.destination.assign("ABNDVYXCCDTYDKWCHKAKGTLNUSZLBFQZEUMNLLEOHZMWBCXVRYDYMUENPBYCRYGMHVRUYNR");
    const char tmp_msg_0[] = {46, -30, 83, 24, 14, -7, 80, -53, -67, 111, -84, 71, -17, 47, 87, -57, -76, 100, -55, 108, 122, 1, -45, 121, -84, 11, 88, -85, -20, -4, -95, 46, 85, 111, 116, -89, 105, 93, -94, -77, 86, 76, -17, -127, 102, 11, 83, 56};
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
    msg.setTimeStamp(0.800151819628689);
    msg.setSource(21899U);
    msg.setSourceEntity(11U);
    msg.setDestination(11787U);
    msg.setDestinationEntity(252U);
    msg.req_id = 30976U;
    msg.ttl = 12859U;
    msg.destination.assign("DPGAIYJEELSDTWOGRITLHZUCVHPWHITSVWJFIBOBFLNYNXOQLDRHDXFWJYOWJBNPYNAZAHMZCNSTVZAGTVNYMYSKPMYUHPQEBCRQGINRLLXFPFPGHTSVXGPPYDABGXSFEECFZBOTZMCURDBR");
    const char tmp_msg_0[] = {47, 17, -93, 120, -125, -117, 87, -121, 39, -17, 30, -86, 123, -16, 28, 82, -93, 31, -120, -95, -19, -58, -35, 17, 91, -78, 112, -68, 42, -102, -111, -60, -95, -1, -27, 58, -69, -114, -36, 77, 33, -16, 81, 56, -124, 29, -118, -36, 57, 25, -71, 9, -42, 23, -116, 43, 114, 60, -109, -80, -95, -11, -72, -46, 82, -64, 0, 76, -51, -71, 9, -54, -115, -77, -103, -115, -113, -105, -1, -69, 18, 123, -60, 8, 54, 28, 62, -101, 86, -52, -69, -102, -61, 20, 40, -94, 108, 101, 98, -77, -79, 54, 20, 72, 35, -108, 123, -18, -35, 118, -47, -39, -23, -25, -28, -51, -4, 111, -120, -28, 43, 81, -8, -127, 122, 6, -25, -117, 11, -89, -106, -93, 94, -42, 16, -65, -73, -94, -48, 53, 64, -8, 88, -86, -110, -33, -17, 47, 35, 111, 70, -61, -74, 58, -18, 24, 84, 17, 25, -64, 18, -98, 25, -73, -48, -16, -95, 8, -64, -4, 7, 113, -45, 56, -19, -52, -110, 24, -95, 89, -31};
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
    msg.setTimeStamp(0.5154010321867821);
    msg.setSource(48117U);
    msg.setSourceEntity(43U);
    msg.setDestination(18943U);
    msg.setDestinationEntity(208U);
    msg.req_id = 17145U;
    msg.ttl = 55478U;
    msg.destination.assign("AMCXLWDPOJYWQLIAFEDBRWDYOLDUTCYCOFKUTHVNDXGLBAFPEEALXVCOFQPEPDZEWBGZJGGHZBMVNZTTYHQGOSHMVARQSQCUKHJRTXNPK");
    const char tmp_msg_0[] = {-28, -85, -40, -23, 49, -34, -110, -17, 29, 107, 31, -98, -42, -48, -124, 50, -119, 43, 18, -119, -45, -46, 56, 3, 47, 47, 92, 2, 82, 7, -111, 104, 75, 109, 82, -122, 33, 12, 37, -62, 119, -87, 23, -82, -101, -80, -126, 92, -66, -51, 58, 114, -12, 5, 2, 76, -30, 94, -89, -16, 8, 68, -52, -125, -101, -84, -69, -78, -91, -59, 108, 60, -60, 88, -85, -53, 58, -62, 80, 47, -46, 109, -29, -110, -75, -114, 73, -55, 48, -29, -65, 114, 105, 123, -73, 72, 52, -48, 17, 34, -32, 49, 3, -99, -59, 58, -83, -46, 54, -42, 78, -122, -102, 83, -104, -15, 114, 40, 10, 11, 119, 90, 114, -60, -68, -1, 88, 105, 0, 88, 40, 31, -97, -116, -8, 52, -50, -73, 74, 6, 47, 118, -46, 87, 30, 14, -39, -37, -39, -115, -51, 17, -64, -40, 68, -100, -52, 101, -38, 46, 33, 56, -22, 52, 124, -106, 18, -96, 99, 37, -24, 43, -121, 68, -22, -67, -108, 93, 59, 31, 97, -91, -40, 103, 50, -88, 99, 46, -12, -69, 110, 84, -33, -8, 65, -125, 115, -88, 51, 23, -114, -5, 88, 124, 4, -92, 31, 48, 115, 64, -119, 98, 66, 46, 68, 67, 21, 99, 70, 30, 13, -59, -71, 79, -68, -116, 90, -55, 110, 15, 33, -124, -99, 21, 120, -58, 59, 4, 50, -48, -43, -28, -124, -89, -43, 59, -110, -85, -66, -23, 84, -4};
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
    msg.setTimeStamp(0.41630939839480763);
    msg.setSource(29340U);
    msg.setSourceEntity(108U);
    msg.setDestination(46610U);
    msg.setDestinationEntity(247U);
    msg.req_id = 59352U;
    msg.status = 99U;
    msg.text.assign("CZYJKMPMBLSX");

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
    msg.setTimeStamp(0.05704483486491563);
    msg.setSource(1489U);
    msg.setSourceEntity(7U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(32U);
    msg.req_id = 40858U;
    msg.status = 248U;
    msg.text.assign("AAKJDLSOUBITFERDVKQUDYKFVTJDMOOWAUAHQYQXMDKPAGLBNHPWCRNFPEUGAZPPGCRHZXWLATRMAWSCBVYIVNNCMFFQGCXOOSINBIGUBXWXXZMYFZQTYTHUGRZSBMUUYEJIPQLBRWVKPCCUBNTFWZIVRHHXSXJPHOFZSSMTEIOGMEKADQSGINVWLXBLDZLHKJKSQJVEO");

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
    msg.setTimeStamp(0.848388388549817);
    msg.setSource(52531U);
    msg.setSourceEntity(159U);
    msg.setDestination(14092U);
    msg.setDestinationEntity(254U);
    msg.req_id = 9226U;
    msg.status = 1U;
    msg.text.assign("XDQDYUMLBZDMQPZFKIPQJJZIHRPJZVDUKUOTFGIIEQPLXDTYWJMDUKPYJHINVZAFTSQDQZEETSIYTHHFCNCSPLWTXFCDAMBEYWPBIMXVGHJNISWGYECKOHYEACJRSXSLFXOPBHMBYFVEFCIGXVNNUVWCZLVRWBWZPMAJOQJWHIHGQZUCLOUT");

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
    msg.setTimeStamp(0.12075906743547826);
    msg.setSource(55414U);
    msg.setSourceEntity(247U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("HOBJJKXPTORSPBDCGIAXGKSEFADIAEMTMVOBXKVJVMANFVMRWWXANUXHDJXLRERLDKCTVFUHHQMYLZNATDEGISYHWVVIKWWVRUMXMJTGQNCZBRVETJCQOMPDBMASAZYNPUGKEZTPYSOMGOOLQIUSCLDJZAAPUWCIEHYSVQDELNQGRCQDFROREGFXPYSNTKKUXKIFWZWJSNGIERZJNCTLUBYWBQIZTLFWDSCLCHQYJUHQUBP");
    msg.links = 117168095U;

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
    msg.setTimeStamp(0.7224456015416828);
    msg.setSource(19239U);
    msg.setSourceEntity(1U);
    msg.setDestination(30069U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("MJWXGZFOZWOAOIGCCSEPODMYBWGDKPFOLSXXHQOGOKUYWJVZSCCWRIEGIHPOQBAJAMGSFYNVOAXCWNITQYEXXZCSQPXZZDUNBISLEHHFTBNLFRBTQQUPLVHNJVICSLFDGPJDNKRVVQRWRKUMDQFKKBFNPI");
    msg.links = 1194233811U;

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
    msg.setTimeStamp(0.08053024869328185);
    msg.setSource(42642U);
    msg.setSourceEntity(204U);
    msg.setDestination(12207U);
    msg.setDestinationEntity(81U);
    msg.group_name.assign("GIEUBRPDDHZBEOVUAYNFJZKXQMPQEYPUXUJDRRNBBWSOHKOXYWOKAAXWPXVMIASCBCZGKPIPDVTCPXFGOTRVIMBPAXKRZJQQFXHYVXEVVGRENMBMTHLYMUKLSHJOZJBLUELIICDZFRORIWMWVSDUKOVSNYQKAJFMTYHOCNGKFELAXQOTINZICIDPFLHNWHQWERVZDPJWMSJLQJAGFCNYQTKZUZRDGGTES");
    msg.links = 3739207196U;

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
    msg.setTimeStamp(0.05462611650946503);
    msg.setSource(44658U);
    msg.setSourceEntity(6U);
    msg.setDestination(1465U);
    msg.setDestinationEntity(48U);
    msg.groupname.assign("HOHAOTYDVNLLQIJDUEWHWKZBLMRMYQVTVQYSGQDZHMIHFXSRVZMRWXJGFAFSMCHSWIARVTIJPGZFOSAOBAPEWH");
    msg.action = 85U;
    msg.grouplist.assign("UJKYERJZRPSJZQIGKHHFMVWSXMBLQHQCSCSMGMZPSGBDAUKINRCBNHXEHDQTCXAPDDRATIOXCAXXMPEODZNWGRVTDIBYUKEPFDAOZWJRIRSAPYJZWQJVYLPUTMBMELOHWRUSUYPWDJQFQNINHCFOBOTOBAVHIGLNMEPZFSACVLYFGCUEJSKYLHNYIQTFXEYZVVJGWUPSEEWIYVKQKDTWRTTNBXCFNKOLX");

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
    msg.setTimeStamp(0.6557262890966115);
    msg.setSource(19595U);
    msg.setSourceEntity(179U);
    msg.setDestination(20611U);
    msg.setDestinationEntity(181U);
    msg.groupname.assign("BJCGBKVPROCPQRSAVTCFKFDGWEXTJUNTMPZQZWBOVBNPZIZUUOJUULAVYCERASICSIFMXQPRLJKQSLYRRJNJSCUNKIJLMIWLVSEWFEWDANTEFPQGDDNZOFWWQANSZILZI");
    msg.action = 83U;
    msg.grouplist.assign("IDOTACDZQGUVKTMNOXAISPENEPLNETSPTSPCVWKXATZVYHXAIBFRMAMWGGESRLKKFUJHBXRQLTBNWJMNUAHFEQBJPEJACYYLSU");

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
    msg.setTimeStamp(0.8533433085631735);
    msg.setSource(31938U);
    msg.setSourceEntity(223U);
    msg.setDestination(38507U);
    msg.setDestinationEntity(47U);
    msg.groupname.assign("IRCOXLMEEWJIKPLIUQMQNFKJBJRKQHNGFFQSXGKRPVZJPTEJNIKYIDDEOFFASKDNWIUSTIRHXLCPPWGAXSSNHJUOQZGYGEYOMHYWVAXNUHMYNRFOZSSGWNFLMPMKGGPKHPQREDQSVALVSMSTNLRNQABGQEBOJIHDDUTHVWUCAMXEBODHZKFLZKX");
    msg.action = 220U;
    msg.grouplist.assign("QCRXUGYLLMQMONDNMKDYDEFSOP");

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
    msg.setTimeStamp(0.30626921288131304);
    msg.setSource(15714U);
    msg.setSourceEntity(84U);
    msg.setDestination(22918U);
    msg.setDestinationEntity(92U);
    msg.value = 0.9734663432519075;
    msg.sys_src = 61489U;

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
    msg.setTimeStamp(0.40396645721900504);
    msg.setSource(30309U);
    msg.setSourceEntity(198U);
    msg.setDestination(13937U);
    msg.setDestinationEntity(220U);
    msg.value = 0.17730103708477296;
    msg.sys_src = 17962U;

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
    msg.setTimeStamp(0.9473717202156827);
    msg.setSource(14521U);
    msg.setSourceEntity(214U);
    msg.setDestination(9145U);
    msg.setDestinationEntity(77U);
    msg.value = 0.06991195324568134;
    msg.sys_src = 56160U;

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
    msg.setTimeStamp(0.33792177228919906);
    msg.setSource(30631U);
    msg.setSourceEntity(218U);
    msg.setDestination(30070U);
    msg.setDestinationEntity(95U);
    msg.value = 0.7859365396472415;
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
    msg.setTimeStamp(0.25395072655262674);
    msg.setSource(58970U);
    msg.setSourceEntity(13U);
    msg.setDestination(53136U);
    msg.setDestinationEntity(146U);
    msg.value = 0.31052944565956253;
    msg.units = 50U;

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
    msg.setTimeStamp(0.4552742460730813);
    msg.setSource(58821U);
    msg.setSourceEntity(2U);
    msg.setDestination(6302U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7318287933500387;
    msg.units = 85U;

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
    msg.setTimeStamp(0.06491758058078978);
    msg.setSource(18116U);
    msg.setSourceEntity(90U);
    msg.setDestination(12182U);
    msg.setDestinationEntity(231U);
    msg.base_lat = 0.4125031576824356;
    msg.base_lon = 0.7382710804915011;
    msg.base_time = 0.8748633467130549;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 33437U;
    tmp_msg_0.priority = 38;
    tmp_msg_0.x = 19501;
    tmp_msg_0.y = -13277;
    tmp_msg_0.z = -15714;
    tmp_msg_0.t = -31722;
    IMC::SessionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 2271003728U;
    tmp_tmp_msg_0_0.status = 138U;
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
    msg.setTimeStamp(0.49029708249108583);
    msg.setSource(12558U);
    msg.setSourceEntity(119U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.48502062612496155;
    msg.base_lon = 0.6631313139173011;
    msg.base_time = 0.2030668897447081;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 4271U;
    tmp_msg_0.destination = 40959U;
    tmp_msg_0.timeout = 0.45702985785469963;
    IMC::UamTxStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 32715U;
    tmp_tmp_msg_0_0.value = 110U;
    tmp_tmp_msg_0_0.error.assign("GPFJELTDZMFVREHZNHIBYUKLOYQVTKORRYQBAELHPIWZACNOSFUQCITETLGRGNYFSCIDHPDIEMFEZKMHRZFMGLUJOBELQHCCOPNHOOGHUKCANXMAPFTPKWPQWUGLCZDQJWWCGXXJIXBENFWOMBTBXKSVZLYOXVKMMWFAUSYCRLXIALVNXTSSHDNJQJNDGESVBXQJTVZBHQDTJBXCSRDEKBISPZWZKUGKVUMSUGPIJ");
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
    msg.setTimeStamp(0.17570703421058842);
    msg.setSource(57076U);
    msg.setSourceEntity(150U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(148U);
    msg.base_lat = 0.29968185417242155;
    msg.base_lon = 0.2971816080781928;
    msg.base_time = 0.603084757164714;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 14371U;
    tmp_msg_0.destination = 33354U;
    tmp_msg_0.timeout = 0.6533342398618823;
    IMC::RSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.691187191711784;
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
    msg.setTimeStamp(0.8259711155876349);
    msg.setSource(16295U);
    msg.setSourceEntity(173U);
    msg.setDestination(47308U);
    msg.setDestinationEntity(89U);
    msg.base_lat = 0.9900015258945483;
    msg.base_lon = 0.5738803596960635;
    msg.base_time = 0.15078440724794884;
    const char tmp_msg_0[] = {-90, -121, -34, -83, 43, 11, -106, -70, 121, 96, 41, 81, -74, 108, -105, -120, 38, 80, 33, -56, 85, -16, -71, 77, -121, 118, -64, -45, -5, -22, 116, 98, 98, -116, -75, 97, 65, -60, 91, 8, 8, 4, -88, -125, -28, 5, 91, -122, 95, -121, -10, 18, -99, 95, -36, 6, 54, 51, 27, -34, -43, -72, -30, 116, 1, -22, 0, 29, -77, 19, 46, 92, 73, 88, -40, -93, 39, -40, -46, -56, 47, 37, 29, -1, 105, -39, 84, 18, 1, -56, 18, 85, 8, 122, -94, 48, -50, -69, 93, 52, 53, 55, -105, -38, 34, 105, -112, 17, -22, -92, 62, 8, -45, -15, 82, 66, 113, -122, -52, 57, 75, -38, 55, 45, -89, 43, -111, 23, -88, 112, -91, 111, -82, 74, -15, 8, -16, 93, -68, 4, -39, 37, -122, 69, 42, 124, -71, -46, 57, 105, -101, 38, -68, -40, 113, -89, 57, -89, 95, 94, 68, 67, 5, 20, 9, 17, -112, 93, 81, 37, 30, 60, -116, -50, -8, -10, 11, 104, 5, 65, 76, 53, 120, 50, 112, 100, 56, 85, 117, -54};
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
    msg.setTimeStamp(0.6467491002892687);
    msg.setSource(19894U);
    msg.setSourceEntity(187U);
    msg.setDestination(62722U);
    msg.setDestinationEntity(25U);
    msg.base_lat = 0.9978663103725175;
    msg.base_lon = 0.2232987100676046;
    msg.base_time = 0.9720246739854845;
    const char tmp_msg_0[] = {95, 99, 7, 2, 92, 75, -86, 84, 49, -47, -68, -5, 94, 4, 51, -40, -30, 123, -84, -81, -11, 4, 28, 122, -6, -59, -105, 58, 73, 34, 117, 61, -104, 107, 70, -92, -78, 46, 98, -1, -2, 58, -20, -84, 95, 83, -10, 53, -125, 34, 107, -116, -25, 95, 88, 67, 109, -53, 49, -7, -46, -69, -43, -3, -128, -47, -100, 23, -71, 71, 56, 79};
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
    msg.setTimeStamp(0.5829555684202924);
    msg.setSource(63738U);
    msg.setSourceEntity(241U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(78U);
    msg.base_lat = 0.03526783312084192;
    msg.base_lon = 0.016606501847220456;
    msg.base_time = 0.5530187708560883;
    const char tmp_msg_0[] = {-43, 122, -43, 100, 61, -83, 115, 35, 35, -126, 117, 3, -123, 77, 76, -71, -77, -5, -112, 83, 48, 17, 62, -37, -92, -125, -35, 78, -65, 97, 71, -52, -112, -15, -80, -116, 0, 118, -119, 36, 12, 72, 45, 126, 28, 73, 82, -5, 27, -98, 64, 111, -94, -99, -15, 100, -16, -102, 36, -97, 5, 47, 112, 49, 69, -26, 74, 98, 125, 57, -96, -77, -57, -111, 3, 122, -21, 80, -35, 116, -33, -26, -28, 42, 76, 82, 89, -89, -91, -125, -85, 103, -68, -92, -99, -59, -26, -79, -103, 119, -29, 22, -65, -21, -44, 117, -24, -52, -126, 16, 67, 7, 126, 101, 63, -32, -36, -51, 87, -116, -52, 88, 37, 117, -114, 72, -95, 120, 91, 49, -16, -97, -86, -90, 111, -74, -121, 77, 41, -68, 78, -47, -49, -34, 98, 21, -74, -30, 77, -17, -86, -45, 82, 111, 102, 49, -78, -61, 115, -8, 32, 97, 49, 49, -109, -116, -108, -3, -82, 64, -13, -124, 66, -30, 63, 120, -15, -6, -64, -23, 81, -7, -58, -23, 33, -35, -70, -28, 0, -35, 2, 62, -64, -92, 79, 77, -80, -97, -12};
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
    msg.setTimeStamp(0.6432520836942897);
    msg.setSource(6820U);
    msg.setSourceEntity(163U);
    msg.setDestination(64728U);
    msg.setDestinationEntity(178U);
    msg.sys_id = 33057U;
    msg.priority = 57;
    msg.x = 5899;
    msg.y = -9044;
    msg.z = 753;
    msg.t = 9791;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 61739U;
    tmp_msg_0.flags = 154U;
    tmp_msg_0.lat = 0.4016617250366371;
    tmp_msg_0.lon = 0.06892645832485778;
    tmp_msg_0.start_z = 0.3903965016413885;
    tmp_msg_0.start_z_units = 222U;
    tmp_msg_0.end_z = 0.8170779521808524;
    tmp_msg_0.end_z_units = 52U;
    tmp_msg_0.radius = 0.5588272813990677;
    tmp_msg_0.speed = 0.5098483222097633;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.custom.assign("WKULVCUVQVYBRJFEGMDWZZTBYFJQPKXSDARDTYEQLSSSNKBHGPWOKVMXUGINSNCFPYFBDWRLBFAFOMQHEGQGZFJJAYBBXIKTQMXVKWXOIYFVOPHVUTTDHMSTVJRJHUELRUUNXQFBWLHSKYBHCEXGDECAWDDOKONNUPURMEYZIAOMVHGLEHIOJSSPDNQRRHCEMRXBDTCZTJIYNZAPGPCIKSPGQ");
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
    msg.setTimeStamp(0.5224098824568107);
    msg.setSource(13199U);
    msg.setSourceEntity(132U);
    msg.setDestination(329U);
    msg.setDestinationEntity(212U);
    msg.sys_id = 25704U;
    msg.priority = -57;
    msg.x = -14138;
    msg.y = -5771;
    msg.z = -22101;
    msg.t = 15656;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 27801U;
    tmp_msg_0.duration = 47205U;
    tmp_msg_0.speed = 0.7737583326214247;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.x = 0.126798744204775;
    tmp_msg_0.y = 0.064896425904581;
    tmp_msg_0.z = 0.7675473421237421;
    tmp_msg_0.z_units = 156U;
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
    msg.setTimeStamp(0.6309541318463611);
    msg.setSource(21418U);
    msg.setSourceEntity(227U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(155U);
    msg.sys_id = 35419U;
    msg.priority = 28;
    msg.x = 6009;
    msg.y = 15910;
    msg.z = 17233;
    msg.t = 24179;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.2846452830817766;
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
    msg.setTimeStamp(0.6257507693700071);
    msg.setSource(62793U);
    msg.setSourceEntity(207U);
    msg.setDestination(64901U);
    msg.setDestinationEntity(8U);
    msg.req_id = 16294U;
    msg.type = 116U;
    msg.max_size = 57404U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.01874292929153598;
    tmp_msg_0.base_lon = 0.38976495003085565;
    tmp_msg_0.base_time = 0.5635234582015461;
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
    msg.setTimeStamp(0.6986181214520779);
    msg.setSource(35351U);
    msg.setSourceEntity(224U);
    msg.setDestination(64072U);
    msg.setDestinationEntity(119U);
    msg.req_id = 9893U;
    msg.type = 78U;
    msg.max_size = 59389U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.229351254022366;
    tmp_msg_0.base_lon = 0.7438320550472524;
    tmp_msg_0.base_time = 0.5233979942612729;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 45158U;
    tmp_tmp_msg_0_0.priority = 8;
    tmp_tmp_msg_0_0.x = -23971;
    tmp_tmp_msg_0_0.y = -22806;
    tmp_tmp_msg_0_0.z = -30816;
    tmp_tmp_msg_0_0.t = -7607;
    IMC::LeakSimulation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 232U;
    tmp_tmp_tmp_msg_0_0_0.entities.assign("GYEHOHCYFEXOZWSWLLNUKTNAXERZAFRMGZJABCFPHILEUGUGPMKEXTADWYBOXHSNTDGTSEAHNIVJBQIASKFPEBMACAXDBUWAYJKWVVVGWFRRZGQQCOOJDIISLQLMKJQPSYANJWMNXPWHPRCFLINZRWNRSOXKESOZBFDB");
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
    msg.setTimeStamp(0.9397911921002412);
    msg.setSource(38424U);
    msg.setSourceEntity(158U);
    msg.setDestination(35339U);
    msg.setDestinationEntity(124U);
    msg.req_id = 27024U;
    msg.type = 58U;
    msg.max_size = 57719U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9694334217059969;
    tmp_msg_0.base_lon = 0.25445243359834424;
    tmp_msg_0.base_time = 0.828928335046494;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 32380U;
    tmp_tmp_msg_0_0.destination = 7378U;
    tmp_tmp_msg_0_0.timeout = 0.3296593769176366;
    IMC::EntityInfo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 21U;
    tmp_tmp_tmp_msg_0_0_0.label.assign("IVVEJAKOCAXIEDXLTDLZWRWAOZBWMIEQSASUVFWGBCGVHBYGIVXCTBZSEPJBXJTPFCNCYYMBEPXIGLNKAJNPRBUMVIILFTXTEHUQGWRFAL");
    tmp_tmp_tmp_msg_0_0_0.component.assign("BBTBHVAYBVZOTMYKLIQVWZIFFHMXKSUFQMINLDCHFCACJGN");
    tmp_tmp_tmp_msg_0_0_0.act_time = 20792U;
    tmp_tmp_tmp_msg_0_0_0.deact_time = 3107U;
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
    msg.setTimeStamp(0.23935550365401848);
    msg.setSource(56875U);
    msg.setSourceEntity(57U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(7U);
    msg.original_source = 59148U;
    msg.destination = 10789U;
    msg.timeout = 0.2051388046870738;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 51859U;
    tmp_msg_0.lat = 0.7947711857545391;
    tmp_msg_0.lon = 0.0988815570002396;
    tmp_msg_0.speed = 0.1583751821896351;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.custom.assign("QLRBEJKJXSMNKXAIINLBSSTXUWDDHDFRXXOOHKMWEHETGUMOQMFWGOPYBFUNXNLZGJLPFHRRNWOLQOKXGLBCXKQZCGSKLFWYJPIHHVJUDKBVQDYJBACJECCFQEIPANOAVAMONPGWRIWUNCVVNJTJCWMGDYUAMQXRPBIEYIVVTHRZLPSSQFWMRHYJXDPTCDTDZAZ");
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
    msg.setTimeStamp(0.1850692893673891);
    msg.setSource(60444U);
    msg.setSourceEntity(247U);
    msg.setDestination(37220U);
    msg.setDestinationEntity(214U);
    msg.original_source = 7225U;
    msg.destination = 22618U;
    msg.timeout = 0.4380776613412788;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("JIJHGCGZAIGFLXSPBBUSEMJWUSNUWUGFNMQNVYORQSANVPLHWALGOHSRSXKDNUCJ");
    tmp_msg_0.x = 0.2629196775133863;
    tmp_msg_0.y = 0.05729374436931356;
    tmp_msg_0.z = 0.9582081222045524;
    tmp_msg_0.n = 0.7665132702895875;
    tmp_msg_0.e = 0.5179432211255192;
    tmp_msg_0.d = 0.3180586596552677;
    tmp_msg_0.phi = 0.35645820715781573;
    tmp_msg_0.theta = 0.6281955392201781;
    tmp_msg_0.psi = 0.6469517091585796;
    tmp_msg_0.accuracy = 0.9532429085949536;
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
    msg.setTimeStamp(0.6544055544003932);
    msg.setSource(45671U);
    msg.setSourceEntity(68U);
    msg.setDestination(37760U);
    msg.setDestinationEntity(20U);
    msg.original_source = 5781U;
    msg.destination = 64029U;
    msg.timeout = 0.9606623662695793;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.24541505238413008;
    tmp_msg_0.aoa = 0.6690939435851825;
    tmp_msg_0.ssa = 0.9136704373877776;
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
    msg.setTimeStamp(0.03315170592710348);
    msg.setSource(24286U);
    msg.setSourceEntity(65U);
    msg.setDestination(37573U);
    msg.setDestinationEntity(67U);
    msg.type = 186U;
    msg.comm_interface = 19314U;
    msg.model = 37325U;
    msg.list.assign("WIRIMSULSEDTFQYQTZVEBZGIRUPGBXRGNCYPGGUPQRXYUPEXAJBDXMNNEDXJUZUZLEVJYKGMWWSEUVOTVTDQRXFPKBCICAAILRSFLBWCHQVYWXOCPIXBOZLSWDOPCMOQBKTMJDAONHZSTHFWYPMQKMWSRPEYRHDFGJLTJVENIVYFRNZAIEAVZCQHKYDHAOOGOUMRFIBQHEHTZTHQJCPKUKHJITANONAMGUFDLVMBYGCZDKCKXXAKLFJNSLWB");

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
    msg.setTimeStamp(0.6653383015176003);
    msg.setSource(24728U);
    msg.setSourceEntity(197U);
    msg.setDestination(29959U);
    msg.setDestinationEntity(247U);
    msg.type = 237U;
    msg.comm_interface = 24072U;
    msg.model = 39249U;
    msg.list.assign("HNSYBVZPFUKBIREPUUIJLGWJMBQMAZNRAAOWVFGQJDZKMEJCSJHUFGUFNVMRLYNYPOKIITZKZJLILSRBLRUPPLBTKDHGPVENLIWFMSDAFHYLZLXVTOTVQEWHINFYGNXNVFRHUNZNTYPCEOIJQWRB");

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
    msg.setTimeStamp(0.8201484857532252);
    msg.setSource(289U);
    msg.setSourceEntity(18U);
    msg.setDestination(56011U);
    msg.setDestinationEntity(175U);
    msg.type = 154U;
    msg.comm_interface = 58140U;
    msg.model = 6485U;
    msg.list.assign("BINCYUJLDUUATADIRP");

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
    msg.setTimeStamp(0.706175152239458);
    msg.setSource(10234U);
    msg.setSourceEntity(168U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(145U);
    msg.type = 189U;
    msg.req_id = 1820626060U;
    msg.ttl = 18280U;
    msg.code = 227U;
    msg.destination.assign("NJDCWEOKJUZEDCADTQXHXAQVTCHUTWMEGXSISBNZEFJRLXXMUOASPIBICIDOSQDPZVFXOGGLOFQJWCFJLTRBKGBNWRZHSHNSKMTCTSQLZYPUKTFMJUICYEWKULICHKAGXBWP");
    msg.source.assign("ASCHRUZXYPIDCZBFOJJLOMXWVEAUNNWKBLVCCCRWJUINWISZKXBHUSZKSSWRCSCWPXYHPKGZDBLKTMODKQNFWUMVBXOZLDBLFASALPEZMTPYETARHGLVXYQYOHZMNGSP");
    msg.acknowledge = 12U;
    msg.status = 113U;
    const char tmp_msg_0[] = {23, 16, -107, -30, -96, -95, -85, 22, -42, 66, 21, -92, -30, 36, -117, -47, 110, 102, -118, 35, 20, 13, -73, -51, 6, 68};
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
    msg.setTimeStamp(0.8333921206920388);
    msg.setSource(16631U);
    msg.setSourceEntity(38U);
    msg.setDestination(60871U);
    msg.setDestinationEntity(41U);
    msg.type = 83U;
    msg.req_id = 150792509U;
    msg.ttl = 14288U;
    msg.code = 193U;
    msg.destination.assign("JRMMDKFWKAKRSWLIUQFBQSEKWQUGEDUXVWLHHXDPZTIBFTGAVHEJZMUTXFYEAATJBVOMOCXFQNZTVCTCLDZXWVHSKDMIJJJGMZNEMKGGNCBBDZORSXHRIUKQQSGPJTRULDWRFCWGROHZWVXSPUBYQAPUKIAQPBTXLDWYCONLWPYHSMIGZFOOCKGARIYTZZNIFAIQDVCONBRYXPKYHDSMNYLPXCJRYJGEQPHLTLVF");
    msg.source.assign("INPWKGTWCCVQXZXOPOSXHTFXSCPWSYEQYICHVDDYVAAXZLRINZRBGSOMOMZNFGMATNPVQFZFNWVSEJKRODUUQJQDYJGALFFYRYTAHUCKTTCLPILGHVOPMCSBPHGKJKUXDHBIABWGYFUBBRZMNZCHWHCSS");
    msg.acknowledge = 86U;
    msg.status = 249U;
    const char tmp_msg_0[] = {76, 94, -91, 117, -104, 14, 73, -75, -19, -19, -107, 41, 125, 38, -11, 7, 37, -49, -127, -98, -53, 69, -10, -47, 80, -19, -18, -32, -121, 105, 48, -79, -98, 102, 54, 86, -126, -51, -102, 123, -47, -11, -85, 126, 84, -72, -75, -19, -85, 62, 122, 26, 27, -37, 95, -6, -26, 88, -7, 121, 79, -75, 90, 123, 101, -75, 17, -27, 72, -81, 65, -57, 117, 2, 49, 86, 124, 37, -10, -126, -42, 5, 68, -70, -70, 12, 79, -9, -66, -91, -85, -85, 10, 86, -107, -94, 88, 126, -115, 35, -23, 107, -44, -102, 111, -46, 46, -46, 75, 100, 95, 32, -93, 68, 40, -90, 94, 11, -105, -9, -102, -7, -24, 3, 43, -57, 101, 58, 0, 33, -1, -9, 37, 3, 29, 18, -40, 107, -3, -9, 65, -88, 38, -88, 34, 115, -115, 100, 4, 115, -81, -64, 68, 21, -29, -1, -89, 119, -83, 59, 23, -11, -52, -20, -108, -83, 56, -102, -43, 50, -122, 87, -104, 121, 1, 34, -81, 91, 14, -39, -90, 56, 34, -87, -23, 67, -93, 57, -26, -90, -56, 66, 30, -9, -33, 13, -95, -34, 90, -113, 6, -41, -97, -103, 27, 6, -26, -80, -120, -77, -14, -46, -117, -90, -9, 106, 34, 118, -128, -53, -23, 58, -6};
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
    msg.setTimeStamp(0.17621129650837075);
    msg.setSource(16661U);
    msg.setSourceEntity(92U);
    msg.setDestination(25628U);
    msg.setDestinationEntity(27U);
    msg.type = 211U;
    msg.req_id = 2282252209U;
    msg.ttl = 2005U;
    msg.code = 34U;
    msg.destination.assign("KZOQUBBKFABQVPJPBMPRYHMUHWYCCBICSNDUIHJZTMWUDPTGPAVRICOUGUQSARWUGXDRRCDULOMLTKRHGSAOKTXWZLFZSHTWFMLDVDQKXQQCMYBRCIZZQASQSNIIAZBMHYXTMYYEJRGHSOFORVFSSTHVBJEUNJNXFE");
    msg.source.assign("JJXAFTRXFOEUDPYIEHYMRKCRJNNAEBGCBGDNTVYXESGPSXQLEJSCIRWKZZCQCMHCACDZYYTEOQDEKVVKSMXSP");
    msg.acknowledge = 94U;
    msg.status = 7U;
    const char tmp_msg_0[] = {12, 39, -15, -38, 24, 64, -120, 51, 58, 103, 69, 100, -57, 16, 30, 81, -15, 55, -62, -15, 126, 82, -39, 38, 46, -13, 47, 54, 104, 55, -126, 76, 95, -58, -68, 121, -91, -39, -51, 29, 77, -90, 60, -87, -14, -108, 49, 107, -120, -32, 8, -124, 55, 76, -123, -13, 117, 29, 29, -2, 60, 21, 105, 77};
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
    msg.setTimeStamp(0.8406932563860847);
    msg.setSource(59564U);
    msg.setSourceEntity(162U);
    msg.setDestination(54460U);
    msg.setDestinationEntity(92U);
    msg.id = 65U;
    msg.range = 0.3797553964466468;

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
    msg.setTimeStamp(0.8063805415259294);
    msg.setSource(6693U);
    msg.setSourceEntity(134U);
    msg.setDestination(22036U);
    msg.setDestinationEntity(165U);
    msg.id = 186U;
    msg.range = 0.22597015829582334;

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
    msg.setTimeStamp(0.23266944496389041);
    msg.setSource(20554U);
    msg.setSourceEntity(196U);
    msg.setDestination(6082U);
    msg.setDestinationEntity(170U);
    msg.id = 42U;
    msg.range = 0.8464197929154915;

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
    msg.setTimeStamp(0.8056937080457857);
    msg.setSource(8771U);
    msg.setSourceEntity(42U);
    msg.setDestination(59687U);
    msg.setDestinationEntity(52U);
    msg.beacon.assign("FWQCAWQORRKHJMPPSMKXFRCZKXNTJAYPZAXDXNKBNOGVPWQX");
    msg.lat = 0.7952658458916141;
    msg.lon = 0.971909822714276;
    msg.depth = 0.8952298141004487;
    msg.query_channel = 21U;
    msg.reply_channel = 70U;
    msg.transponder_delay = 114U;

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
    msg.setTimeStamp(0.2840768061483704);
    msg.setSource(15738U);
    msg.setSourceEntity(148U);
    msg.setDestination(25151U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("ZUKFOTKQBAUHDSOFTLFCVHOYCXBNSZFRQMFIXISICPEDDVENBLWRSQRXSAYPFYDINPUOWVKCKOZAOBEPXGMSHITARBRKQUQMSDGYWEGIMEGSNUHOHZXKJQGLJCUOJELRVZNBKYUEXEXTDGYFCGXNPMUEWWLFAAWLCWNUHAMVJMBPIHDJVZYYZUWJIQDYHLVLPJGQORZAO");
    msg.lat = 0.4273883947415438;
    msg.lon = 0.42598995517540805;
    msg.depth = 0.573877187353717;
    msg.query_channel = 6U;
    msg.reply_channel = 52U;
    msg.transponder_delay = 36U;

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
    msg.setTimeStamp(0.7994379479563407);
    msg.setSource(6655U);
    msg.setSourceEntity(180U);
    msg.setDestination(62204U);
    msg.setDestinationEntity(212U);
    msg.beacon.assign("ZDCSQCVHUTNFPLMM");
    msg.lat = 0.7948030926590052;
    msg.lon = 0.8723430983675883;
    msg.depth = 0.028690592071217713;
    msg.query_channel = 158U;
    msg.reply_channel = 19U;
    msg.transponder_delay = 222U;

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
    msg.setTimeStamp(0.5984947907473317);
    msg.setSource(63065U);
    msg.setSourceEntity(84U);
    msg.setDestination(24604U);
    msg.setDestinationEntity(223U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.8359377885623755);
    msg.setSource(9771U);
    msg.setSourceEntity(153U);
    msg.setDestination(17194U);
    msg.setDestinationEntity(165U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.23836523095312867);
    msg.setSource(13969U);
    msg.setSourceEntity(181U);
    msg.setDestination(32627U);
    msg.setDestinationEntity(21U);
    msg.op = 60U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EHNMCSIOTIZCZZHAMPELJEIFLGBGKTBVHFVESQYFMYVDKFXXNGURXATIVREFQRKPHJJHCBLTCSLUJUGYTCZALRKTWSJUDIPQFXOTZHBNQXADZZQVBNHPOYUKLPUXUIPWJNOWGMCYQTKMOKHNZWSMIWTORXBFLSJKQRVRQMRJFAMCKYDYQPB");
    tmp_msg_0.lat = 0.5867777992860943;
    tmp_msg_0.lon = 0.7343458560994038;
    tmp_msg_0.depth = 0.1371260857847727;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 3U;
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
    msg.setTimeStamp(0.6724669005177397);
    msg.setSource(41987U);
    msg.setSourceEntity(168U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(229U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 57211U;
    tmp_msg_0.custom.assign("NFBCPRADLDMVCCDIULTILSRSUAALECVMPVPLYQKJPXQIJTFUSZYTADQDJSXVUUZYMIIJYWDVBOOONOEAEGGNORAFUAKMDNTTQYHQKSYDIFXGIBEUKFRHMPWDPTKENHVHJZM");
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
    msg.setTimeStamp(0.24492505358505434);
    msg.setSource(49586U);
    msg.setSourceEntity(248U);
    msg.setDestination(36024U);
    msg.setDestinationEntity(113U);
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("ZDXINTFYBRQBNSOEQEQMCQYAKBSCSUXXKSVZTOXLYABUNHUTZTCJLPLJFTVBGKDUWQZAFOCHJNIHKVGTDXDODNMMZCCEASVYHPKOPQBFYBSPQWHUGNHDFMKFMTPVJDGFJFLSVRMDZXDIJZXIUMPRBNIYTLAOOYLORBHLECEAYVRRAWPZGJUIZGCWINKRVMYORGEFHIZGUQNWT");
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
    msg.setTimeStamp(0.5403649076372393);
    msg.setSource(5566U);
    msg.setSourceEntity(36U);
    msg.setDestination(58536U);
    msg.setDestinationEntity(68U);
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 2U;
    tmp_msg_0.comm_interface = 107U;
    tmp_msg_0.period = 41537U;
    tmp_msg_0.sys_dst.assign("CZJJLLKAGUNTBVBQFSLEMBXDZJLGAIMHBZNVTRHUDUCOAPJYFW");
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
    msg.setTimeStamp(0.8327659822864373);
    msg.setSource(58707U);
    msg.setSourceEntity(101U);
    msg.setDestination(11897U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.6791353183200868;
    msg.lon = 0.9326450525450563;
    msg.depth = 0.3492622970294087;
    msg.sentence.assign("NFZWRZDAXKRVJTGPENUCSXHSOWPXHBSPVLEVIBCWRCZGXQVIRYRJUNNTQGNXTYYHAKIB");
    msg.txtime = 0.6752852922415187;
    msg.modem_type.assign("MWYJWZRFNTMXUDXVKLPGZGM");
    msg.sys_src.assign("WNEBWJXYUUNRONSZOLDAVLFDKFZLWWKHETOIDSVBMMYYPCAIFDJZEMILTGFPGTFCEOPSRMFQWRTUKZHHIGGHQESCVGXIVPJMCNQUEJHGOEWVAQBCMZLXADDZSOKIXAYQZLIKLJTNYBZPKWVVUJHWJBNNFNHXOGFMLCBJXYYDQAPDAFZNQUXWXXCCHEJEUKTRBSBZMBMRSRVOQOTEKSUOGVYHFANIYHASQWRKVPLDTPICQTT");
    msg.seq = 49527U;
    msg.sys_dst.assign("GCXPMMKPNWSQEPRAMDWOEDJKIHUHFRKFATPRJSBICIWYSIGGKQLAOSTVVYVKPEQZILIZTRCDEXZBMOPAVGZUGFWNQGIACRQJUNUJMOHSOCCHJVHXKGYBMNQTWSBQZOADLUTBDEYNUEDIJSUSRFKPOYXHVTGTQBDJOOBYLDW");
    msg.flags = 228U;
    const char tmp_msg_0[] = {51, -121, -30, 92, 74, 30, 92, 85, -43, 86, 17, 61, -55, -45, 68, 120, -8, 84, 123, -56, 91, 105, 20, -9, 43, 20, 17, 12, -56, 15, -103, -32, 96, 119, -108, 11, -59, -111, -82, 86, -20, 64, -72, -98, -45, 60, 57, 92, -33, 105, -7, -38, 85};
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
    msg.setTimeStamp(0.8397908357017819);
    msg.setSource(625U);
    msg.setSourceEntity(108U);
    msg.setDestination(51902U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.9717190039934958;
    msg.lon = 0.12426973380596285;
    msg.depth = 0.3580096027820293;
    msg.sentence.assign("AAZBNRMHENXVGZEJNXQQSTDZREZETUAWNKOMZYYHSRJDOFWOLXAIJXULQVCVDKQNRKLDSDOFGKQUYYNQVPPTLTLFOQHLPGPITMCZCBCHNKTLDTIDSKCZXSVFGAFURNJDUJWSMZJQWEWTFGTAUYSRNXPPIUDBVCFBPARYHPITAODRLYJOBHIEBVVPWMCSBWVYNJZBJUMBMGAPYGRIFQFWUFWOBEKMXIHHGEXU");
    msg.txtime = 0.41897885823546277;
    msg.modem_type.assign("QPKEXMIQGLXYZCXAMXOUWWVBELDKOAWSPPZBZOPAYROLZMTEMQFNGZXDUWCOEQDTKYRCWXCXXUKFTLIWWGOFREGYJOKNQYBOUCLRHRGVTBQVCRVIHJBFLIGVIWJTNHWYQDRSSHDUSGFIYJIMREPVNREIDZKVHOPTZZATNFMJPASHUVYANFMEFGMDYJBTFXILBABUJCAUA");
    msg.sys_src.assign("MGQEEBETVYRMAUMLMSNNGTXFUEUBFQXJONHEACGAJZQZKBYNOXLFYINWGDCDGREMXXOJLJCOSWRSDPUWBEDVZBHJROLJRWXFPFWVFQNFIJAKZHAQPQOIAYSBYVSPVSCHBLYFCLCUVTXVDMCNITODWKCOFXTHHHUDOHYGAAXUYDNRPIDEIKZQHGGSLZU");
    msg.seq = 62912U;
    msg.sys_dst.assign("NXSGJHAQBTOKPONJANPCBQUPIETPRTMJGRQQFWQVSCUMIPVXIWYKFIWSKXGBDUXZAOLHTAUZCEWEHOFZHQYNIIKRNABRMR");
    msg.flags = 65U;
    const char tmp_msg_0[] = {-114, 36, 84, 70, 125, 39, -5, -106, 35, -122, 0, 45, 125, -109, 59, -81, -49, -7, 35, 69, 50, 60, 75, -16, 28, 30, 104, -81, -105, -66, -110, 97, -116, 77, -36, 123, -48, 43, -40, -43, -111, -33, -31, 126, 40, 46, 14, 18, 105, -55, 75, -66, -90, 80, -26, -11, -1, -9, -110, -34, -9, -54, 15, -93, -55, 84, 69, 17, -99, 8, -103, 18, -12, -36, 55, -91, 61, 36, 88, -73, 98, 101, -72, -61, -122, -68, -110, -84, -2, 118, 120, 37, 14, 17, 107, -50, 126, -106, 62, -47, 46, -31, -122, 101, 80, 6, 77, 125, 2, -84, 65, 40};
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
    msg.setTimeStamp(0.3229213452409807);
    msg.setSource(63751U);
    msg.setSourceEntity(122U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.031204428549786223;
    msg.lon = 0.182522692631921;
    msg.depth = 0.11000559152506706;
    msg.sentence.assign("FGTWOCLVSDZQJYHHFSQQXOIEUUZKMCMBBRZULYAGYWJSSCSYBDCHMKJNROCLEOMMAKDNGIDCSRFSAWDRIARFIZXBIOCSCTWQJWOPGYJZOJNTBNVFPUUMVGEFKTDXLYLXZEHRYHEVPTYBGKHINHTGHJWHDVPFTOFKEEQNZAPZDLLUVIWSLNAVCXKZXFXQQENGFWJOLIPCABXNBGPRDPGTDKAXYWTVEQRXSAQYMNRUBMJIVPWUOLRKBHPZE");
    msg.txtime = 0.7525527679862916;
    msg.modem_type.assign("MSOBLVDCOXPNJLABPDUHCIAGGYRAAIXNWVAWDEEPMNQFUDIYTWHWXOXFQQYMUNBKZUXFZQKTKJSDIUWLBANPSDHFLRHFMSXIWYZVFYJFBOGBTPUGVEKCTDCNJODEHYEGCCYTWQJTVGRMLKXUVIMJLRTGCSWQVAUEEATTBVQUMFYLIIHZFZIQMCADSPNHDBNBERHOKROHOGSHYAMMPSGLCGKRJEW");
    msg.sys_src.assign("MUQOOPUBRDSOIACPGEVGLGOENKREXTEXEOFWPHNJHOFUAOKRNYUNFWVCDLKPAQILRLTTHHHEXOQARQVTALHMPKNRGVPPJVQVYWDQQCDWBRLCVNFLHFKIPRKTTKDXKZCXMKJOTYFRYMZNQZWGSSSYCWMKQGFDCUMNSJSBZCUVDXLYYZFNFUAJTIUABZZXJBWEMNMSLJDCMPSGYGHIVIYZLX");
    msg.seq = 30885U;
    msg.sys_dst.assign("ZWKRQAQAOJMGDUPJMDNSBDNFCYKAXANQDBQDSFISMIQUTCVQRBIUOTZEXNZHXYZMLEOZNUOFFTHVFCQNWYSJGIVWHBDKVGKPTXWFLNTWKMTIEYQJSBCJHRBECIRQOFRLJUIHOTMTGMCTBAUWFLSZXSOKVLMALKPORJBGWVKPYPNJRVOPQJWMWHBZCXSTILEFMPAIESKNGUZBEJV");
    msg.flags = 166U;
    const char tmp_msg_0[] = {-69, -119, 94, -121, -66, 5, -1, -46, -26, -28, -46, -101, -60, -46, -117, 86, -3, -11, 18, 29, 51, -117, -127, -27, -85, -36, -83, 92, 54, 126, 40, 28, 36, 90, 52, 124, -82, -13, -54, -89, -67, -113, 12, -61, -61, 124, -92, 81, 84, -26, 79, 4, -56, 54, -52, 7, -52, 73, 15, -71, 62, -40, -77, -86, 108, 49, 83, 52, 106, 72, -29, -22, 122, -95, -126, 27, -86, -83, 0, 2, -2, 52, -62, 92};
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
    msg.setTimeStamp(0.5153234870606763);
    msg.setSource(39660U);
    msg.setSourceEntity(95U);
    msg.setDestination(5570U);
    msg.setDestinationEntity(5U);
    msg.op = 211U;
    msg.system.assign("CQPTDMDAFSMYFNSMXQORJGJUYHHWQRCODXHTFHEBBREHWQZUDTVFYUDEDJAXPNEXIMKKTEXVVOJHJPGYQRZWKTNXJJOYQMLWOGVZRFHVPNPARSJLSZHLSKFAPAFLQPLSGNBVACSWKTIFNVICRHTUIIQABR");
    msg.range = 0.0724363208701233;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.6866074152638274);
    msg.setSource(15876U);
    msg.setSourceEntity(200U);
    msg.setDestination(47961U);
    msg.setDestinationEntity(152U);
    msg.op = 118U;
    msg.system.assign("QFKFLXRIJWSEHVGXDKVYHRUXKPEPODWKEXQQRCMRJLGMZJZGRDDAPNHQIBTLEBBPIAOZFNTRYSUNTKLGVZNWMCFPNJCXYDJUPLXKDSFHTZNTHJAYOIELIDCGVBSBEHNBCMFSSOPABMWHYADJEIP");
    msg.range = 0.7824609601105023;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 254U;
    tmp_msg_0.x = 0.9196656410731565;
    tmp_msg_0.y = 0.2507534243696361;
    tmp_msg_0.z = 0.7527029026808689;
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
    msg.setTimeStamp(0.8338751233582639);
    msg.setSource(40082U);
    msg.setSourceEntity(47U);
    msg.setDestination(59233U);
    msg.setDestinationEntity(0U);
    msg.op = 248U;
    msg.system.assign("RKZQECOUJYBBBTUWVRVVNTFXRZPUQWVBWOOXOWJKXXBWRXCGAQLPNREIMLLABDKTVVDQJSTMHZBAMBICRGHXDYUUTDWOKXEERAENMGUBDCFWHAHGSIHHEZYIKZLPVFEQNXQNSSJSOCLGQDMYJMKLMFILPIHCWRNDHJFKIZGWUJTBSFKZUGSAPQYAJAEKPSYPGFODGLVVCQOOEKGDIILDSEMHAPXMCWFPJZQ");
    msg.range = 0.4232519327385005;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1142766786U;
    tmp_msg_0.start_lat = 0.6982294540433232;
    tmp_msg_0.start_lon = 0.295216403990895;
    tmp_msg_0.start_z = 0.24882907146586974;
    tmp_msg_0.start_z_units = 235U;
    tmp_msg_0.end_lat = 0.9181461926515497;
    tmp_msg_0.end_lon = 0.04269905818344266;
    tmp_msg_0.end_z = 0.4670215250990557;
    tmp_msg_0.end_z_units = 183U;
    tmp_msg_0.speed = 0.7848280437400599;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.lradius = 0.38807356114132596;
    tmp_msg_0.flags = 121U;
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
    msg.setTimeStamp(0.4773279674679546);
    msg.setSource(24915U);
    msg.setSourceEntity(139U);
    msg.setDestination(41539U);
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
    msg.setTimeStamp(0.678608702444305);
    msg.setSource(6199U);
    msg.setSourceEntity(85U);
    msg.setDestination(48328U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.3413015416839418);
    msg.setSource(25440U);
    msg.setSourceEntity(204U);
    msg.setDestination(7563U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.8102597609590165);
    msg.setSource(46488U);
    msg.setSourceEntity(157U);
    msg.setDestination(4783U);
    msg.setDestinationEntity(137U);
    msg.list.assign("NTJGCKZKDSKQP");

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
    msg.setTimeStamp(0.883854589972773);
    msg.setSource(20573U);
    msg.setSourceEntity(3U);
    msg.setDestination(15720U);
    msg.setDestinationEntity(122U);
    msg.list.assign("JRNEGZBAAGZELWMZBMPRTFQJCCLCOQZXUOHRONWWYZMKBGMIRCERDAYFDEIKSFTTEVUYREBHUJKHD");

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
    msg.setTimeStamp(0.7493125166810785);
    msg.setSource(21660U);
    msg.setSourceEntity(27U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(88U);
    msg.list.assign("NSKEJEJBRETJIIZAAOUNMPUAFSYR");

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
    msg.setTimeStamp(0.25179261262374986);
    msg.setSource(18925U);
    msg.setSourceEntity(179U);
    msg.setDestination(17060U);
    msg.setDestinationEntity(5U);
    msg.peer.assign("YDPCEWFFJILPABRUMLPSMJYZDOQPUXUNMPUDKHOOLTOUOIJHNBAVHL");
    msg.rssi = 0.37654244538517745;
    msg.integrity = 1542U;

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
    msg.setTimeStamp(0.13345505541352076);
    msg.setSource(60892U);
    msg.setSourceEntity(217U);
    msg.setDestination(40876U);
    msg.setDestinationEntity(117U);
    msg.peer.assign("ZXVPENJOLVYJNWFJQTUGZSGKTMCUJFZODDHHWQDVYSNXHCMEOZHMLBTPOYSDXQFWNQPAITZVLBAFNCLIBEFJXWZKVWRSBRKT");
    msg.rssi = 0.15070931502620377;
    msg.integrity = 28415U;

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
    msg.setTimeStamp(0.558159836715614);
    msg.setSource(38528U);
    msg.setSourceEntity(229U);
    msg.setDestination(956U);
    msg.setDestinationEntity(6U);
    msg.peer.assign("CMWXAGYXXJOIZTIFHYVTKZKMLNICYKDHRQAPICHPNKTNCYPJALBNONLCRGOEGBHLQPUMMXRWJSSVHMUXVQGGTZGHWRPNYXPHRIBDHFSUFQZKXQTUUSMUFRUCUVFJVBMCWCOOVOAJJJTSOCDQWPQGFYNTZPODTEAILHBRWIJVBQSEPGRMXENLZEWBDSYLXVLEESEKAATIQKDBNYBFUMKFLZDDBVGOPYTWLSGAYDUZNEWMF");
    msg.rssi = 0.5538954155088162;
    msg.integrity = 5230U;

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
    msg.setTimeStamp(0.015171721333841703);
    msg.setSource(3660U);
    msg.setSourceEntity(67U);
    msg.setDestination(8423U);
    msg.setDestinationEntity(36U);
    msg.req_id = 23285U;
    msg.destination.assign("KBDIEQBYMZTHJNPFHLPILYYZSQOYRFBAPVGCNJFYISSLDMTWDSJVJUE");
    msg.timeout = 0.24859935107857256;
    msg.range = 0.22757049410845742;
    msg.type = 56U;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 28650;
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
    msg.setTimeStamp(0.9142649167403646);
    msg.setSource(31875U);
    msg.setSourceEntity(73U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(130U);
    msg.req_id = 25830U;
    msg.destination.assign("EWENDDTSGMPLKTDSICQVCSDLWZMVZKLNVCINBIFHDMMGUJKAMJQGRJFOQRCGJZFPCWBXIBJXHSDDLLFQHTUZFUSMYWWOUFRTWBELEPVNZLOEGPLISFGUBJNRJTOCBYHBVGIACGWUOTPHGLYKWAREVFKFWXOSPQZNDJTSYHVBQNYNVCYUXARHECCROOVTNBTPIUPPRAYKUJXTVEKHXAQXXEKIWYLQGK");
    msg.timeout = 0.5262408821344697;
    msg.range = 0.27961931048227373;
    msg.type = 1U;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 27436U;
    tmp_msg_0.status = 5U;
    tmp_msg_0.info.assign("JRGCYQKLYEGVCZOZIZKPYNDUOSXOGWODYIAVEPUGQKPNPSRWRNHLIEQMUHBINFVXHMXSDQAKNXTPYWXJMHRWDCTIFFFUEPGLMASUNLBKQILTTKJSSRSWXQEBWVOLAKDGBQFZJRYFFKMIMYCUNSFQCTAVCPZIEHHXDLJZURORSAVGYEVPTKTLWOWN");
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
    msg.setTimeStamp(0.4070207207801002);
    msg.setSource(8965U);
    msg.setSourceEntity(86U);
    msg.setDestination(26976U);
    msg.setDestinationEntity(181U);
    msg.req_id = 57574U;
    msg.destination.assign("VKOFMDHFJLKWQOEWXGSNBZYQPFBQKXKVSUHWLUXMZJTBDCLMSOAKOJNTZJRODPVRTVNIYTABDPVVWAWQEIYIRGREKUFWIEERQFYODJMAQBCPLOUNPMDDVBNSWHCGIGEQLXYPXSOMGIYOISRWANLQEXZHCTSHJCGIEZDPCKVNAKAAKRHUHBBYRLJAXFMTZYHSBTFP");
    msg.timeout = 0.7509679669384642;
    msg.range = 0.7827537186736505;
    msg.type = 177U;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("KLCAHJQMLDSAJXGJXHDZZKEXTBGXSPIFZEFDPQNTWIOEZDNDTGTJBNWGBICVDJCELZTPRITSFULNHIPMBCFRHBEWMPGBLOYAUSVPXUACAFTMYHRFVGUAPEJOUKCQKMNJYOGQMNMIKANEOMRQEZHGOKQCISVLXRWTIRFBQTLMYYPZZUOYRUQDWSIYVFRLVSVKNQLBXOWHHGXS");
    tmp_msg_0.text.assign("WGUGOZQPDOXO");
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
    msg.setTimeStamp(0.8810398065120292);
    msg.setSource(57915U);
    msg.setSourceEntity(15U);
    msg.setDestination(45990U);
    msg.setDestinationEntity(97U);
    msg.req_id = 22497U;
    msg.type = 155U;
    msg.status = 50U;
    msg.info.assign("DCHIVPGVZXZLFQFCPUYDCSWBSEYUAAVLXZWMDKMVFWEXMHDBWHYFFUERCHYWFXJOYSSUVTDKXIDJCCWZMD");
    msg.range = 0.2948495710577127;

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
    msg.setTimeStamp(0.9211321540298768);
    msg.setSource(40945U);
    msg.setSourceEntity(88U);
    msg.setDestination(4279U);
    msg.setDestinationEntity(66U);
    msg.req_id = 33992U;
    msg.type = 126U;
    msg.status = 128U;
    msg.info.assign("ZRDHFKVCTUJUAHJLOQPLNDZNHLCSIMJGOXKVZOEGLBXNKVXRPEDRNBBGCVQSNZOAYDRTZNHPASQGBFJEUTIEFLDMZYTYUOYVPPNXXBWEGAWTYVMHIERQLLIPITFCPHHBSQFNDYQLO");
    msg.range = 0.1413391071591663;

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
    msg.setTimeStamp(0.37560967612073237);
    msg.setSource(11727U);
    msg.setSourceEntity(88U);
    msg.setDestination(3633U);
    msg.setDestinationEntity(202U);
    msg.req_id = 10063U;
    msg.type = 184U;
    msg.status = 214U;
    msg.info.assign("AWNDZPWHXFMJBUONHQZLBIIJKGLCKMTUOJFLHRGCQQKNITFDVLPFQESGEQURNBLNDZPRKXYYIKGMRXDZFJXXVCAEQTPGCYLGGFDSXWEIJSARUVYNDMUUGETQBZEAFWXWYVKAIXHYYBPPWTATMJZSBORSTLEDPMJYSIM");
    msg.range = 0.4784483194220428;

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
    msg.setTimeStamp(0.7366816911997575);
    msg.setSource(38963U);
    msg.setSourceEntity(14U);
    msg.setDestination(24231U);
    msg.setDestinationEntity(221U);
    msg.value = -13067;

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
    msg.setTimeStamp(0.7284404992923407);
    msg.setSource(10271U);
    msg.setSourceEntity(84U);
    msg.setDestination(35520U);
    msg.setDestinationEntity(153U);
    msg.value = -1954;

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
    msg.setTimeStamp(0.8878901508425473);
    msg.setSource(38354U);
    msg.setSourceEntity(63U);
    msg.setDestination(20182U);
    msg.setDestinationEntity(217U);
    msg.value = 30078;

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
    msg.setTimeStamp(0.25706159198345546);
    msg.setSource(22108U);
    msg.setSourceEntity(225U);
    msg.setDestination(40916U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8535912799714555;

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
    msg.setTimeStamp(0.06703775964681735);
    msg.setSource(55000U);
    msg.setSourceEntity(59U);
    msg.setDestination(35751U);
    msg.setDestinationEntity(167U);
    msg.value = 0.5445380066973284;

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
    msg.setTimeStamp(0.523665927172262);
    msg.setSource(38473U);
    msg.setSourceEntity(183U);
    msg.setDestination(13407U);
    msg.setDestinationEntity(194U);
    msg.value = 0.16905721655604955;

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
    msg.setTimeStamp(0.6687561775565647);
    msg.setSource(33495U);
    msg.setSourceEntity(47U);
    msg.setDestination(61610U);
    msg.setDestinationEntity(251U);
    msg.value = 0.627588575279158;

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
    msg.setTimeStamp(0.17639136218961193);
    msg.setSource(5981U);
    msg.setSourceEntity(107U);
    msg.setDestination(51110U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9088272030687489;

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
    msg.setTimeStamp(0.8814977142512364);
    msg.setSource(53894U);
    msg.setSourceEntity(52U);
    msg.setDestination(52763U);
    msg.setDestinationEntity(60U);
    msg.value = 0.13991463694565498;

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
    msg.setTimeStamp(0.11332781882492149);
    msg.setSource(58587U);
    msg.setSourceEntity(71U);
    msg.setDestination(49507U);
    msg.setDestinationEntity(81U);
    msg.validity = 39514U;
    msg.type = 72U;
    msg.utc_year = 39361U;
    msg.utc_month = 33U;
    msg.utc_day = 45U;
    msg.utc_time = 0.03746291118107703;
    msg.lat = 0.9655458788554067;
    msg.lon = 0.786041611534975;
    msg.height = 0.6172572574371322;
    msg.satellites = 25U;
    msg.cog = 0.8850732540807854;
    msg.sog = 0.8758207164331699;
    msg.hdop = 0.48002678327087434;
    msg.vdop = 0.6153672798137043;
    msg.hacc = 0.6679482846463604;
    msg.vacc = 0.03018828018713926;

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
    msg.setTimeStamp(0.05877235106540557);
    msg.setSource(61280U);
    msg.setSourceEntity(36U);
    msg.setDestination(30128U);
    msg.setDestinationEntity(157U);
    msg.validity = 29372U;
    msg.type = 240U;
    msg.utc_year = 56722U;
    msg.utc_month = 53U;
    msg.utc_day = 229U;
    msg.utc_time = 0.3579820120645747;
    msg.lat = 0.9862817502175131;
    msg.lon = 0.7740044888192823;
    msg.height = 0.9477201032193349;
    msg.satellites = 39U;
    msg.cog = 0.742325748431016;
    msg.sog = 0.8451470552226579;
    msg.hdop = 0.7628810572317166;
    msg.vdop = 0.7582008978690971;
    msg.hacc = 0.8062688179626191;
    msg.vacc = 0.25774968047157254;

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
    msg.setTimeStamp(0.9818414105818294);
    msg.setSource(25644U);
    msg.setSourceEntity(243U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(205U);
    msg.validity = 11620U;
    msg.type = 236U;
    msg.utc_year = 64919U;
    msg.utc_month = 196U;
    msg.utc_day = 64U;
    msg.utc_time = 0.2693915464250981;
    msg.lat = 0.7822541505375994;
    msg.lon = 0.6988631414682971;
    msg.height = 0.03293664015700781;
    msg.satellites = 226U;
    msg.cog = 0.4880573110059576;
    msg.sog = 0.39455368120415535;
    msg.hdop = 0.09728640228879915;
    msg.vdop = 0.7694433734396504;
    msg.hacc = 0.07439086327533351;
    msg.vacc = 0.405588830702981;

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
    msg.setTimeStamp(0.670959242234359);
    msg.setSource(36511U);
    msg.setSourceEntity(172U);
    msg.setDestination(1114U);
    msg.setDestinationEntity(131U);
    msg.time = 0.4811278302424433;
    msg.phi = 0.6580800479393855;
    msg.theta = 0.6054404340660322;
    msg.psi = 0.32456670184462155;
    msg.psi_magnetic = 0.12865057670002855;

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
    msg.setTimeStamp(0.2679832863090883);
    msg.setSource(56717U);
    msg.setSourceEntity(55U);
    msg.setDestination(26052U);
    msg.setDestinationEntity(253U);
    msg.time = 0.8914293136634467;
    msg.phi = 0.04086758883087904;
    msg.theta = 0.5233933322965392;
    msg.psi = 0.4560113190524253;
    msg.psi_magnetic = 0.34902574093217975;

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
    msg.setTimeStamp(0.49554541223610427);
    msg.setSource(35836U);
    msg.setSourceEntity(28U);
    msg.setDestination(561U);
    msg.setDestinationEntity(109U);
    msg.time = 0.1348004421296376;
    msg.phi = 0.031150333156842125;
    msg.theta = 0.5201077585860205;
    msg.psi = 0.057774709000566804;
    msg.psi_magnetic = 0.04613892558230326;

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
    msg.setTimeStamp(0.5560161533853121);
    msg.setSource(38965U);
    msg.setSourceEntity(217U);
    msg.setDestination(23129U);
    msg.setDestinationEntity(3U);
    msg.time = 0.4677060757157332;
    msg.x = 0.6787436100473591;
    msg.y = 0.5336211468939736;
    msg.z = 0.7367032722902641;
    msg.timestep = 0.2514138444295255;

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
    msg.setTimeStamp(0.9156976627826477);
    msg.setSource(5903U);
    msg.setSourceEntity(158U);
    msg.setDestination(17263U);
    msg.setDestinationEntity(73U);
    msg.time = 0.2718264669082374;
    msg.x = 0.5189870685049255;
    msg.y = 0.3412992935610839;
    msg.z = 0.46396819410386836;
    msg.timestep = 0.4616671864795262;

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
    msg.setTimeStamp(0.6174586295868331);
    msg.setSource(4197U);
    msg.setSourceEntity(169U);
    msg.setDestination(7125U);
    msg.setDestinationEntity(139U);
    msg.time = 0.14065147461967398;
    msg.x = 0.6107576450534867;
    msg.y = 0.5956963242909208;
    msg.z = 0.030374474431055898;
    msg.timestep = 0.6047719185549109;

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
    msg.setTimeStamp(0.7762635187695932);
    msg.setSource(64837U);
    msg.setSourceEntity(192U);
    msg.setDestination(8931U);
    msg.setDestinationEntity(148U);
    msg.time = 0.18650239237129218;
    msg.x = 0.10822556277095197;
    msg.y = 0.46913647695712657;
    msg.z = 0.049327278758815596;

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
    msg.setTimeStamp(0.009211471168211638);
    msg.setSource(2710U);
    msg.setSourceEntity(160U);
    msg.setDestination(6505U);
    msg.setDestinationEntity(212U);
    msg.time = 0.09880918957446128;
    msg.x = 0.2832251744102783;
    msg.y = 0.6082361262057224;
    msg.z = 0.6802386576843894;

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
    msg.setTimeStamp(0.4822162193008289);
    msg.setSource(2603U);
    msg.setSourceEntity(170U);
    msg.setDestination(13512U);
    msg.setDestinationEntity(113U);
    msg.time = 0.6397025702278879;
    msg.x = 0.8232813506859574;
    msg.y = 0.9105011116230404;
    msg.z = 0.0735782726724814;

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
    msg.setTimeStamp(0.7416441668344198);
    msg.setSource(3370U);
    msg.setSourceEntity(157U);
    msg.setDestination(6043U);
    msg.setDestinationEntity(147U);
    msg.time = 0.7650832007336734;
    msg.x = 0.9714454471166902;
    msg.y = 0.07448071867465145;
    msg.z = 0.5258407277504384;

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
    msg.setTimeStamp(0.8676861290013206);
    msg.setSource(33166U);
    msg.setSourceEntity(236U);
    msg.setDestination(18410U);
    msg.setDestinationEntity(74U);
    msg.time = 0.6989370662378743;
    msg.x = 0.015302905133719014;
    msg.y = 0.11623817275243109;
    msg.z = 0.33546215423004777;

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
    msg.setTimeStamp(0.65888627567223);
    msg.setSource(18530U);
    msg.setSourceEntity(88U);
    msg.setDestination(2249U);
    msg.setDestinationEntity(4U);
    msg.time = 0.9675482170464355;
    msg.x = 0.07016865406464567;
    msg.y = 0.8691651314483435;
    msg.z = 0.743262578593572;

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
    msg.setTimeStamp(0.2951593063607394);
    msg.setSource(23358U);
    msg.setSourceEntity(64U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(168U);
    msg.time = 0.4738349560261542;
    msg.x = 0.2176639148768008;
    msg.y = 0.5358403412303171;
    msg.z = 0.3290427604352365;

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
    msg.setTimeStamp(0.9015868602018676);
    msg.setSource(1226U);
    msg.setSourceEntity(71U);
    msg.setDestination(47972U);
    msg.setDestinationEntity(67U);
    msg.time = 0.9162446741203828;
    msg.x = 0.5028408935866664;
    msg.y = 0.13529694331105302;
    msg.z = 0.15491706138404593;

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
    msg.setTimeStamp(0.9482331832995217);
    msg.setSource(65264U);
    msg.setSourceEntity(132U);
    msg.setDestination(7058U);
    msg.setDestinationEntity(35U);
    msg.time = 0.6530718497963214;
    msg.x = 0.7746205583197902;
    msg.y = 0.8041416195553649;
    msg.z = 0.9016115058442669;

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
    msg.setTimeStamp(0.07553769063852056);
    msg.setSource(52429U);
    msg.setSourceEntity(28U);
    msg.setDestination(53360U);
    msg.setDestinationEntity(229U);
    msg.validity = 46U;
    msg.x = 0.9304521935336426;
    msg.y = 0.34103108773930746;
    msg.z = 0.769056450400706;

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
    msg.setTimeStamp(0.6486178973193046);
    msg.setSource(21920U);
    msg.setSourceEntity(66U);
    msg.setDestination(2182U);
    msg.setDestinationEntity(226U);
    msg.validity = 24U;
    msg.x = 0.2738290318882063;
    msg.y = 0.1341020166671989;
    msg.z = 0.736782093571213;

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
    msg.setTimeStamp(0.5750062665433278);
    msg.setSource(50663U);
    msg.setSourceEntity(155U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(22U);
    msg.validity = 84U;
    msg.x = 0.5243306123943412;
    msg.y = 0.9223970860649365;
    msg.z = 0.32949652499872795;

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
    msg.setTimeStamp(0.947470815946762);
    msg.setSource(51000U);
    msg.setSourceEntity(29U);
    msg.setDestination(38450U);
    msg.setDestinationEntity(20U);
    msg.validity = 167U;
    msg.x = 0.6296486750110052;
    msg.y = 0.9614007402281076;
    msg.z = 0.8420455727495377;

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
    msg.setTimeStamp(0.9751886395295238);
    msg.setSource(20020U);
    msg.setSourceEntity(247U);
    msg.setDestination(58275U);
    msg.setDestinationEntity(46U);
    msg.validity = 190U;
    msg.x = 0.9007116104323079;
    msg.y = 0.11885985557505174;
    msg.z = 0.3333468832363963;

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
    msg.setTimeStamp(0.20978222710927785);
    msg.setSource(36529U);
    msg.setSourceEntity(64U);
    msg.setDestination(23515U);
    msg.setDestinationEntity(81U);
    msg.validity = 148U;
    msg.x = 0.9515755969439317;
    msg.y = 0.6265822397457548;
    msg.z = 0.942031562065128;

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
    msg.setTimeStamp(0.7265893989084482);
    msg.setSource(44617U);
    msg.setSourceEntity(110U);
    msg.setDestination(34273U);
    msg.setDestinationEntity(115U);
    msg.time = 0.4461832632385473;
    msg.x = 0.46966154439552243;
    msg.y = 0.23920436282548252;
    msg.z = 0.3484985484671007;

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
    msg.setTimeStamp(0.8117689309855044);
    msg.setSource(27541U);
    msg.setSourceEntity(83U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(77U);
    msg.time = 0.7851812322359615;
    msg.x = 0.6143063065046277;
    msg.y = 0.5131092965911355;
    msg.z = 0.047296412463124105;

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
    msg.setTimeStamp(0.14869278888748627);
    msg.setSource(1722U);
    msg.setSourceEntity(185U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(163U);
    msg.time = 0.3182724397316543;
    msg.x = 0.3271172586782186;
    msg.y = 0.5775566118926104;
    msg.z = 0.12103292725783299;

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
    msg.setTimeStamp(0.1467273286997024);
    msg.setSource(34269U);
    msg.setSourceEntity(80U);
    msg.setDestination(30185U);
    msg.setDestinationEntity(22U);
    msg.validity = 137U;
    msg.value = 0.7337219301872746;

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
    msg.setTimeStamp(0.2525384670592622);
    msg.setSource(42833U);
    msg.setSourceEntity(94U);
    msg.setDestination(30076U);
    msg.setDestinationEntity(72U);
    msg.validity = 100U;
    msg.value = 0.2081350517769166;

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
    msg.setTimeStamp(0.404676428660658);
    msg.setSource(44652U);
    msg.setSourceEntity(52U);
    msg.setDestination(50469U);
    msg.setDestinationEntity(205U);
    msg.validity = 178U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.02752078888251308;
    tmp_msg_0.beam_height = 0.3645091041144013;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.24300812519379644;

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
    msg.setTimeStamp(0.0599897783118023);
    msg.setSource(6447U);
    msg.setSourceEntity(90U);
    msg.setDestination(40559U);
    msg.setDestinationEntity(204U);
    msg.value = 0.8771882508038734;

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
    msg.setTimeStamp(0.0032727153096958617);
    msg.setSource(61008U);
    msg.setSourceEntity(202U);
    msg.setDestination(32227U);
    msg.setDestinationEntity(26U);
    msg.value = 0.45804842043403504;

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
    msg.setTimeStamp(0.14367428554269634);
    msg.setSource(19241U);
    msg.setSourceEntity(107U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(107U);
    msg.value = 0.7228521392813154;

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
    msg.setTimeStamp(0.3819560635049395);
    msg.setSource(53796U);
    msg.setSourceEntity(93U);
    msg.setDestination(8658U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8681501165924635;

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
    msg.setTimeStamp(0.356051426370407);
    msg.setSource(46288U);
    msg.setSourceEntity(13U);
    msg.setDestination(12927U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5885576679633681;

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
    msg.setTimeStamp(0.8409696334317103);
    msg.setSource(60511U);
    msg.setSourceEntity(159U);
    msg.setDestination(20650U);
    msg.setDestinationEntity(95U);
    msg.value = 0.5454316379188425;

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
    msg.setTimeStamp(0.938037998687655);
    msg.setSource(55068U);
    msg.setSourceEntity(68U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(247U);
    msg.value = 0.46740854249567665;

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
    msg.setTimeStamp(0.17086808927762087);
    msg.setSource(62487U);
    msg.setSourceEntity(117U);
    msg.setDestination(30534U);
    msg.setDestinationEntity(216U);
    msg.value = 0.8302484592605398;

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
    msg.setTimeStamp(0.41223924355144337);
    msg.setSource(56924U);
    msg.setSourceEntity(214U);
    msg.setDestination(21379U);
    msg.setDestinationEntity(207U);
    msg.value = 0.22109333373891593;

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
    msg.setTimeStamp(0.6194710573264615);
    msg.setSource(38066U);
    msg.setSourceEntity(163U);
    msg.setDestination(27261U);
    msg.setDestinationEntity(129U);
    msg.value = 0.3638739486739142;

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
    msg.setTimeStamp(0.23456827534721203);
    msg.setSource(19456U);
    msg.setSourceEntity(64U);
    msg.setDestination(19220U);
    msg.setDestinationEntity(196U);
    msg.value = 0.347296933206767;

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
    msg.setTimeStamp(0.3896976665186088);
    msg.setSource(28210U);
    msg.setSourceEntity(37U);
    msg.setDestination(50351U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5167924214031684;

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
    msg.setTimeStamp(0.21413933485880887);
    msg.setSource(62146U);
    msg.setSourceEntity(39U);
    msg.setDestination(1337U);
    msg.setDestinationEntity(167U);
    msg.value = 0.01344770967679787;

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
    msg.setTimeStamp(0.3220608484519206);
    msg.setSource(16724U);
    msg.setSourceEntity(211U);
    msg.setDestination(18672U);
    msg.setDestinationEntity(253U);
    msg.value = 0.3961260147112098;

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
    msg.setTimeStamp(0.8711838925239642);
    msg.setSource(9778U);
    msg.setSourceEntity(237U);
    msg.setDestination(11655U);
    msg.setDestinationEntity(230U);
    msg.value = 0.47035548216140166;

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
    msg.setTimeStamp(0.128579925390221);
    msg.setSource(9689U);
    msg.setSourceEntity(191U);
    msg.setDestination(23819U);
    msg.setDestinationEntity(8U);
    msg.value = 0.34467732581821275;

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
    msg.setTimeStamp(0.3825539146276371);
    msg.setSource(21571U);
    msg.setSourceEntity(158U);
    msg.setDestination(51101U);
    msg.setDestinationEntity(33U);
    msg.value = 0.1097115522986033;

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
    msg.setTimeStamp(0.6276432744160397);
    msg.setSource(12466U);
    msg.setSourceEntity(191U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(36U);
    msg.value = 0.35222591660337366;

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
    msg.setTimeStamp(0.8262613342985049);
    msg.setSource(23658U);
    msg.setSourceEntity(139U);
    msg.setDestination(62548U);
    msg.setDestinationEntity(218U);
    msg.value = 0.10634028750630287;

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
    msg.setTimeStamp(0.24425801142082681);
    msg.setSource(8068U);
    msg.setSourceEntity(12U);
    msg.setDestination(47803U);
    msg.setDestinationEntity(239U);
    msg.value = 0.33032763657731645;

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
    msg.setTimeStamp(0.9644788105268541);
    msg.setSource(22828U);
    msg.setSourceEntity(167U);
    msg.setDestination(23958U);
    msg.setDestinationEntity(189U);
    msg.value = 0.07647492599066785;

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
    msg.setTimeStamp(0.3890962401279753);
    msg.setSource(61446U);
    msg.setSourceEntity(75U);
    msg.setDestination(7978U);
    msg.setDestinationEntity(213U);
    msg.value = 0.9031357618277456;

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
    msg.setTimeStamp(0.1953274651041761);
    msg.setSource(40440U);
    msg.setSourceEntity(26U);
    msg.setDestination(31614U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9664736483749068;

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
    msg.setTimeStamp(0.41576515364996613);
    msg.setSource(51028U);
    msg.setSourceEntity(179U);
    msg.setDestination(22701U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9210897348010104;

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
    msg.setTimeStamp(0.030497282376629853);
    msg.setSource(527U);
    msg.setSourceEntity(39U);
    msg.setDestination(5009U);
    msg.setDestinationEntity(253U);
    msg.direction = 0.5886304636580293;
    msg.speed = 0.3456193943417015;
    msg.turbulence = 0.1716524961461483;

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
    msg.setTimeStamp(0.9228513580633484);
    msg.setSource(17723U);
    msg.setSourceEntity(181U);
    msg.setDestination(36900U);
    msg.setDestinationEntity(86U);
    msg.direction = 0.32093608742713053;
    msg.speed = 0.36684165627223;
    msg.turbulence = 0.4982835075381613;

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
    msg.setTimeStamp(0.1784469696205837);
    msg.setSource(4761U);
    msg.setSourceEntity(105U);
    msg.setDestination(55611U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.11558734726119069;
    msg.speed = 0.6975539132184342;
    msg.turbulence = 0.5151706653332675;

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
    msg.setTimeStamp(0.1571472804574462);
    msg.setSource(30755U);
    msg.setSourceEntity(250U);
    msg.setDestination(14794U);
    msg.setDestinationEntity(145U);
    msg.value = 0.05919305280229292;

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
    msg.setTimeStamp(0.6314491779586169);
    msg.setSource(17463U);
    msg.setSourceEntity(126U);
    msg.setDestination(49279U);
    msg.setDestinationEntity(25U);
    msg.value = 0.9071662632364405;

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
    msg.setTimeStamp(0.3794816464924291);
    msg.setSource(47132U);
    msg.setSourceEntity(246U);
    msg.setDestination(32798U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5417960244204153;

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
    msg.setTimeStamp(0.09833333508689424);
    msg.setSource(16961U);
    msg.setSourceEntity(0U);
    msg.setDestination(9427U);
    msg.setDestinationEntity(116U);
    msg.value.assign("FLTVTSYTBHMNXPAPQMIEQMIGLENHZRDSOFCLKASTSOKBDPTAUWGRTKZOCRINGBGYRJHYJXVQFZELMECJEIPYGPSWABBVTKORWTVDYZNAGVRSDRYSAZFVDFHKUXIGLFTEOWZPWRMHKFSWQAXZJCUKQOEIVHCMXSOBYAIBUAWXCX");

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
    msg.setTimeStamp(0.8061081592065429);
    msg.setSource(21660U);
    msg.setSourceEntity(182U);
    msg.setDestination(25405U);
    msg.setDestinationEntity(153U);
    msg.value.assign("WTETKGXQHQEJNUSFLUBHTYKLLXYXVPIEOBWABDFZHKIUGXKSGKZOIYDWUXIFQCYOHPENNHPWEKWMRIRNMBNUDYJHCZRTFUUNOVXDPEUGSPSSA");

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
    msg.setTimeStamp(0.9712753253664786);
    msg.setSource(29360U);
    msg.setSourceEntity(55U);
    msg.setDestination(25194U);
    msg.setDestinationEntity(33U);
    msg.value.assign("LQXPVTVZRCOPFCYHFJOUOHHAUMIWNDPCSDYNMPDWADWQTGZRMLHWXDDWVBNFSBN");

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
    msg.setTimeStamp(0.8195042646675601);
    msg.setSource(42265U);
    msg.setSourceEntity(254U);
    msg.setDestination(21498U);
    msg.setDestinationEntity(91U);
    const char tmp_msg_0[] = {-26, -84, -40, -35, 101, 122, -38, 61, 31, -128, -70, -30, -61, 115, 48, 58, 42, -102, -73, 55, -128, 70, -91, 30, -30, 45, -123, 111, -31, 24, 81, -126, 70, 50, 35, -4, 99, 100, 78, 61, -107, -17, -10, -114, 90, 92, 56, -7, -110, 33, -11, -5, 102, 3, 124, -71, 116, -34, 121};
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
    msg.setTimeStamp(0.6702691625422214);
    msg.setSource(27802U);
    msg.setSourceEntity(39U);
    msg.setDestination(25898U);
    msg.setDestinationEntity(186U);
    const char tmp_msg_0[] = {-58, 82, 59, 3, 34, -117, -18, -123, -53, 63, -57, 110, 50, 60, 19, 110, 26};
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
    msg.setTimeStamp(0.9150664609059954);
    msg.setSource(12745U);
    msg.setSourceEntity(91U);
    msg.setDestination(38088U);
    msg.setDestinationEntity(1U);
    const char tmp_msg_0[] = {-1, -15, -36, 108, -75, -73, -106, 78, 86, 69, -52, -115, -39, 32, -75, 114, -126, 49, -100, 51, -109, 36, -72, 84, -119, 98, -64, -6, 8, -54, 99, -101, 119, 108, -103, -6, 44, -88, 27, 88, 60, 125, 54, 120, 67, 42, 45, -65, 6, 24, 119, -93, -67, -81, -128, -34, -9, -73, 77, -75, -108, -39, 100, -74, 124, -106, 102, 108, 90, 2, -23, 44, -64, -108, -42, 63, -9, 87, -2, 109, -125, -61, 16, -102, 9, 72, -93, -21, -20, -21, -62, 74, -10, 75, -45, 15, -5, 40, -2, 88, -17, -30, -11, -94};
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
    msg.setTimeStamp(0.32759937144900797);
    msg.setSource(19133U);
    msg.setSourceEntity(117U);
    msg.setDestination(42790U);
    msg.setDestinationEntity(148U);
    msg.value = 0.4896608160915231;

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
    msg.setTimeStamp(0.7062094296593272);
    msg.setSource(20246U);
    msg.setSourceEntity(188U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(103U);
    msg.value = 0.09125391790981552;

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
    msg.setTimeStamp(0.10293087508052345);
    msg.setSource(816U);
    msg.setSourceEntity(232U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(142U);
    msg.value = 0.3797758107953765;

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
    msg.setTimeStamp(0.24787926882976674);
    msg.setSource(23013U);
    msg.setSourceEntity(252U);
    msg.setDestination(416U);
    msg.setDestinationEntity(36U);
    msg.type = 177U;
    msg.frequency = 2458012601U;
    msg.min_range = 23572U;
    msg.max_range = 27989U;
    msg.bits_per_point = 209U;
    msg.scale_factor = 0.046256459196237554;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.48211548774976043;
    tmp_msg_0.beam_height = 0.640212690607356;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {77, 79, 17, -38, -88, -25, -70, 124, 2, -111, -83, 79, 46, -56, 55, -18, 26, -63, 21, 112, -60, 63, -93, 14, -55, -3, 104, 82, -122, 107, 85, 71, -13, -22, -42, 101, -9, -12, 59, -30, 69, 98, -30, 88, -79, 121, -106, 20, 120, -43, 96, -36, -83, -114, -24, -58, 111, 51, 104, -127, 108, 33, -125, 46, 107, 126, -75, -89, 100, -93, 48, 100, 107, -45, 109, -107, 96, -8, -12, 48, 27, 65, -16, 40, 118, -90, 95, 104, -117, -11, 79, 23, -116, 35, 87, -64, -71, 124, -112, -1, 83, 126};
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
    msg.setTimeStamp(0.8474732483177496);
    msg.setSource(12575U);
    msg.setSourceEntity(50U);
    msg.setDestination(14695U);
    msg.setDestinationEntity(82U);
    msg.type = 162U;
    msg.frequency = 3321994146U;
    msg.min_range = 15171U;
    msg.max_range = 12107U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.878699551795249;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.25212587514587415;
    tmp_msg_0.beam_height = 0.7257345716222504;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {79, 71, 0, 85, 102, 61, -35, -12, -121, -78, -61, -10, -81, -26, 31, -51, -98, -35, 36, 6, 57, -101, -6, -29, 104, 30, -15, -4, 4, 108, -109, 57, -39, -9, 110, 89, -126, 89, -104, -31, 22, 42, 102, 78, 65, 17, -58, -22, -83, 17, -72, -116, -117, -92, 104, -24, 72, 30, 18, -13, -119, -107, -124, 56, -117, 23, -24, 65, -37, 2, -63, 95, -119, -53, 42, 60, -85, 32, 96, -50, -44, -112, -88, 82, -12, -58, -94, -78, 26, 1, -107, 90, 52, 96, -91, 74, -29, 26, 46, -95, -58, -54, -126, 100, -14, 93, -106, 79, -63, 123, -53, -60, -88, -83, 54, 13, -85, 112, -84, 80, 4, -125, -20, -93, 12, 41, -103, -106, -97, -74, -47, 64, 15, -128, -100, -128, -72, -119, 104, -21, -75, -42, 35, 44, -38, -124, 5, 44, -5, -122, 59, 77, 72, -17, 20, 107, 93, -44, 111, -110, -26, -83, 69, -115, 107, 17, 0, 43, -16, 98, 12, -105, -121, -44, -46, 35, 117, -2, 109, 96, -126, -57, 60, -6, 37, -90, 72, 115, -53, -74, -127, -39, -20, -67, -122, -68, 119, 5, -29, -2, -128, 1, 27, -54, -8, 44, -98, -93, -96, 107, -116, 66, -11, -17, -124, 85, 0, 62, 95, -21, -11, -6, -60, 42, 44, -63, -109, 100, -124, -76};
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
    msg.setTimeStamp(0.507117914709734);
    msg.setSource(43606U);
    msg.setSourceEntity(74U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(5U);
    msg.type = 88U;
    msg.frequency = 1235710302U;
    msg.min_range = 48826U;
    msg.max_range = 61626U;
    msg.bits_per_point = 44U;
    msg.scale_factor = 0.9803614404784168;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7302087694201673;
    tmp_msg_0.beam_height = 0.9917322197821732;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {35, 65, -104, 11, -57, -14, 84, 21, -75, -55, 60, 32, 101, -76, 101, -128, 121, -114, 92, 48, 64, 2, 48, 88, 66, 33, 45, -2, 84, -71, 56, 110, 97, 16, -93, 58, -20, 35, 65, -9, 13, 77, 88, 85};
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
    msg.setTimeStamp(0.5196921888238238);
    msg.setSource(12158U);
    msg.setSourceEntity(60U);
    msg.setDestination(58163U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.20031616501636496);
    msg.setSource(16974U);
    msg.setSourceEntity(127U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.14972585574133446);
    msg.setSource(58868U);
    msg.setSourceEntity(240U);
    msg.setDestination(64666U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.67685598136913);
    msg.setSource(61581U);
    msg.setSourceEntity(92U);
    msg.setDestination(20317U);
    msg.setDestinationEntity(223U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.6392543634880429);
    msg.setSource(46212U);
    msg.setSourceEntity(63U);
    msg.setDestination(14427U);
    msg.setDestinationEntity(24U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.9034686606193021);
    msg.setSource(59077U);
    msg.setSourceEntity(50U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(17U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.7823341069776361);
    msg.setSource(58588U);
    msg.setSourceEntity(246U);
    msg.setDestination(15722U);
    msg.setDestinationEntity(50U);
    msg.value = 0.515651154928516;
    msg.confidence = 0.38290810376041795;
    msg.opmodes.assign("SGHIRINUUXPLATCSKTWPLSBPAPYEIDQHVXXTBNWFMDKNZRVMJOUGXLAGGAIHKWQRGKEGHZYSBYOFMNNJEJKWLHMVIMSDMXVUXNCCBZAWBGVVCPAPYQLTKPTEZGAWOVSFBBCGMCDMONDMCOVFRQQMIEVOQSJFLIRSRYFUJPLPDUURUHOSWEYUFHZJTYKKQSZKCDIZRBXOWVJXJUDOXHLNRZJFHKQQNEYOLTBEZAGNJITHLBTDARYIACFTWE");

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
    msg.setTimeStamp(0.011645858719351976);
    msg.setSource(8763U);
    msg.setSourceEntity(106U);
    msg.setDestination(17U);
    msg.setDestinationEntity(120U);
    msg.value = 0.30270594345258295;
    msg.confidence = 0.6724940415947869;
    msg.opmodes.assign("AGTNUIIOWEGFEYKCGGDZWPUO");

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
    msg.setTimeStamp(0.22439768271426963);
    msg.setSource(51132U);
    msg.setSourceEntity(113U);
    msg.setDestination(56887U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5858711549760208;
    msg.confidence = 0.3531897085563007;
    msg.opmodes.assign("FHXDZDYFKCJWYCTXRCGGPFOXDXVNSOMNIAYQBOFFNUWNLXRQZKLYVAADCEPCLJDGMYXBUJUQUIFWNXQETZTOYISHOUTEOEVTTFBZNBADXVWTBITWGMJTUPMTMZQSGHGVAFIQLNWZLRNPABMASWDYWJBHRULRDSUDRQWLRURMBGZKPGLCRE");

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
    msg.setTimeStamp(0.12423789429205345);
    msg.setSource(11512U);
    msg.setSourceEntity(211U);
    msg.setDestination(38647U);
    msg.setDestinationEntity(202U);
    msg.itow = 370585663U;
    msg.lat = 0.747538041723113;
    msg.lon = 0.17680642234235644;
    msg.height_ell = 0.6858228986224127;
    msg.height_sea = 0.2757027352781646;
    msg.hacc = 0.6400256366704503;
    msg.vacc = 0.10075705059800133;
    msg.vel_n = 0.3622246108175452;
    msg.vel_e = 0.3734848126821012;
    msg.vel_d = 0.7058896145342926;
    msg.speed = 0.934601594443556;
    msg.gspeed = 0.958011660415242;
    msg.heading = 0.2898756348709761;
    msg.sacc = 0.05235015293365297;
    msg.cacc = 0.313900964801369;

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
    msg.setTimeStamp(0.7066910143952094);
    msg.setSource(24692U);
    msg.setSourceEntity(121U);
    msg.setDestination(33732U);
    msg.setDestinationEntity(165U);
    msg.itow = 4161741408U;
    msg.lat = 0.7755542444082136;
    msg.lon = 0.9633020208728792;
    msg.height_ell = 0.37552789370347905;
    msg.height_sea = 0.5782391733036788;
    msg.hacc = 0.5815214106562808;
    msg.vacc = 0.8896800367448781;
    msg.vel_n = 0.9948364949515882;
    msg.vel_e = 0.8353958091447212;
    msg.vel_d = 0.9122072425163411;
    msg.speed = 0.1976078047320271;
    msg.gspeed = 0.8337381694863129;
    msg.heading = 0.7126954336307525;
    msg.sacc = 0.5035584350319224;
    msg.cacc = 0.43540907754010705;

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
    msg.setTimeStamp(0.06017814115317066);
    msg.setSource(62447U);
    msg.setSourceEntity(138U);
    msg.setDestination(15611U);
    msg.setDestinationEntity(131U);
    msg.itow = 627451264U;
    msg.lat = 0.8180981269762259;
    msg.lon = 0.6374558500334165;
    msg.height_ell = 0.971101389793285;
    msg.height_sea = 0.9439092626000591;
    msg.hacc = 0.6053595661453435;
    msg.vacc = 0.28164245906168406;
    msg.vel_n = 0.33941592730130277;
    msg.vel_e = 0.40708488836506573;
    msg.vel_d = 0.7775770615795299;
    msg.speed = 0.3058880987886554;
    msg.gspeed = 0.19833152477198002;
    msg.heading = 0.034210029074851156;
    msg.sacc = 0.8750572917127395;
    msg.cacc = 0.3083437193349682;

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
    msg.setTimeStamp(0.5724221865586543);
    msg.setSource(4993U);
    msg.setSourceEntity(15U);
    msg.setDestination(19272U);
    msg.setDestinationEntity(69U);
    msg.id = 250U;
    msg.value = 0.8477767116114346;

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
    msg.setTimeStamp(0.015316417859306153);
    msg.setSource(20365U);
    msg.setSourceEntity(183U);
    msg.setDestination(11027U);
    msg.setDestinationEntity(95U);
    msg.id = 103U;
    msg.value = 0.4362012826193411;

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
    msg.setTimeStamp(0.8128616173757909);
    msg.setSource(5242U);
    msg.setSourceEntity(21U);
    msg.setDestination(26976U);
    msg.setDestinationEntity(248U);
    msg.id = 176U;
    msg.value = 0.4377592155897243;

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
    msg.setTimeStamp(0.40148392623116524);
    msg.setSource(49768U);
    msg.setSourceEntity(155U);
    msg.setDestination(47095U);
    msg.setDestinationEntity(247U);
    msg.x = 0.4255754300261202;
    msg.y = 0.24169861799189574;
    msg.z = 0.3380525939447788;
    msg.phi = 0.2936271020338076;
    msg.theta = 0.26025656405766884;
    msg.psi = 0.5651400474474111;

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
    msg.setTimeStamp(0.7212554646236581);
    msg.setSource(36802U);
    msg.setSourceEntity(205U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(138U);
    msg.x = 0.09245894409231548;
    msg.y = 0.42876018888930856;
    msg.z = 0.6356053492128788;
    msg.phi = 0.005907167512409606;
    msg.theta = 0.35175457439177227;
    msg.psi = 0.21290649321282995;

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
    msg.setTimeStamp(0.6255232411226314);
    msg.setSource(34374U);
    msg.setSourceEntity(246U);
    msg.setDestination(22957U);
    msg.setDestinationEntity(198U);
    msg.x = 0.1783742714383496;
    msg.y = 0.17775727917365647;
    msg.z = 0.6936028543807116;
    msg.phi = 0.016182374993983117;
    msg.theta = 0.38491115845596724;
    msg.psi = 0.22931528833998815;

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
    msg.setTimeStamp(0.3626205232130354);
    msg.setSource(1973U);
    msg.setSourceEntity(145U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(156U);
    msg.beam_width = 0.9634432357071293;
    msg.beam_height = 0.9354104707637307;

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
    msg.setTimeStamp(0.4822792575236513);
    msg.setSource(29751U);
    msg.setSourceEntity(217U);
    msg.setDestination(44912U);
    msg.setDestinationEntity(175U);
    msg.beam_width = 0.7859255838470866;
    msg.beam_height = 0.3250935376305738;

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
    msg.setTimeStamp(0.4979155119607369);
    msg.setSource(28502U);
    msg.setSourceEntity(39U);
    msg.setDestination(17709U);
    msg.setDestinationEntity(55U);
    msg.beam_width = 0.24953343964480168;
    msg.beam_height = 0.09808127173683556;

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
    msg.setTimeStamp(0.09790907776584346);
    msg.setSource(30681U);
    msg.setSourceEntity(151U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(139U);
    msg.sane = 34U;

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
    msg.setTimeStamp(0.7911046996078777);
    msg.setSource(17557U);
    msg.setSourceEntity(207U);
    msg.setDestination(21477U);
    msg.setDestinationEntity(155U);
    msg.sane = 88U;

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
    msg.setTimeStamp(0.6582075778157271);
    msg.setSource(40001U);
    msg.setSourceEntity(19U);
    msg.setDestination(42465U);
    msg.setDestinationEntity(175U);
    msg.sane = 96U;

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
    msg.setTimeStamp(0.049744486335840055);
    msg.setSource(20953U);
    msg.setSourceEntity(190U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(15U);
    msg.value = 0.7806060503967803;

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
    msg.setTimeStamp(0.5104215894420535);
    msg.setSource(63857U);
    msg.setSourceEntity(118U);
    msg.setDestination(5099U);
    msg.setDestinationEntity(225U);
    msg.value = 0.009890244199163623;

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
    msg.setTimeStamp(0.6808642062660873);
    msg.setSource(38790U);
    msg.setSourceEntity(168U);
    msg.setDestination(39883U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9385597024819003;

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
    msg.setTimeStamp(0.9483798476086255);
    msg.setSource(29270U);
    msg.setSourceEntity(59U);
    msg.setDestination(929U);
    msg.setDestinationEntity(16U);
    msg.value = 0.733436072479654;

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
    msg.setTimeStamp(0.6722671691230698);
    msg.setSource(35065U);
    msg.setSourceEntity(22U);
    msg.setDestination(2324U);
    msg.setDestinationEntity(72U);
    msg.value = 0.3301091960964202;

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
    msg.setTimeStamp(0.131508868761126);
    msg.setSource(39114U);
    msg.setSourceEntity(125U);
    msg.setDestination(35010U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5148922764361165;

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
    msg.setTimeStamp(0.23461888862874125);
    msg.setSource(19891U);
    msg.setSourceEntity(24U);
    msg.setDestination(22118U);
    msg.setDestinationEntity(117U);
    msg.value = 0.3934205493271822;

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
    msg.setTimeStamp(0.7563641985302035);
    msg.setSource(39778U);
    msg.setSourceEntity(248U);
    msg.setDestination(9506U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9834116378130007;

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
    msg.setTimeStamp(0.03820080647456203);
    msg.setSource(33833U);
    msg.setSourceEntity(182U);
    msg.setDestination(14328U);
    msg.setDestinationEntity(43U);
    msg.value = 0.29034255042072266;

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
    msg.setTimeStamp(0.4222636418897998);
    msg.setSource(30960U);
    msg.setSourceEntity(165U);
    msg.setDestination(65164U);
    msg.setDestinationEntity(132U);
    msg.value = 0.3086681102910578;

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
    msg.setTimeStamp(0.9843397996575247);
    msg.setSource(26876U);
    msg.setSourceEntity(176U);
    msg.setDestination(11610U);
    msg.setDestinationEntity(190U);
    msg.value = 0.1479264898961794;

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
    msg.setTimeStamp(0.18701058442837704);
    msg.setSource(11752U);
    msg.setSourceEntity(122U);
    msg.setDestination(6571U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9246880438176384;

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
    msg.setTimeStamp(0.5003306443520863);
    msg.setSource(62664U);
    msg.setSourceEntity(64U);
    msg.setDestination(60115U);
    msg.setDestinationEntity(236U);
    msg.value = 0.44225688529566154;

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
    msg.setTimeStamp(0.3004654163409418);
    msg.setSource(32513U);
    msg.setSourceEntity(49U);
    msg.setDestination(21719U);
    msg.setDestinationEntity(213U);
    msg.value = 0.492159795482915;

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
    msg.setTimeStamp(0.1328521248397183);
    msg.setSource(6517U);
    msg.setSourceEntity(161U);
    msg.setDestination(17072U);
    msg.setDestinationEntity(70U);
    msg.value = 0.7619164811406928;

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
    msg.setTimeStamp(0.2970599647498784);
    msg.setSource(56873U);
    msg.setSourceEntity(171U);
    msg.setDestination(43634U);
    msg.setDestinationEntity(89U);
    msg.value = 0.9730568553492499;

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
    msg.setTimeStamp(0.2498460799897292);
    msg.setSource(20881U);
    msg.setSourceEntity(37U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9449747607042335;

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
    msg.setTimeStamp(0.4566585224982185);
    msg.setSource(8852U);
    msg.setSourceEntity(249U);
    msg.setDestination(64471U);
    msg.setDestinationEntity(22U);
    msg.value = 0.8798308916562024;

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
    msg.setTimeStamp(0.49720649450913923);
    msg.setSource(64462U);
    msg.setSourceEntity(165U);
    msg.setDestination(52583U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6556097783064178;

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
    msg.setTimeStamp(0.9406839904708998);
    msg.setSource(7855U);
    msg.setSourceEntity(46U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(252U);
    msg.value = 0.513309567482033;

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
    msg.setTimeStamp(0.7813782132721367);
    msg.setSource(50108U);
    msg.setSourceEntity(75U);
    msg.setDestination(21436U);
    msg.setDestinationEntity(110U);
    msg.value = 0.5848011348507061;

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
    msg.setTimeStamp(0.03288783219688074);
    msg.setSource(14010U);
    msg.setSourceEntity(77U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(138U);
    msg.value = 0.11866523303265242;

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
    msg.setTimeStamp(0.6430046930822192);
    msg.setSource(12985U);
    msg.setSourceEntity(185U);
    msg.setDestination(65016U);
    msg.setDestinationEntity(208U);
    msg.value = 0.4496407228695011;

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
    msg.setTimeStamp(0.06796708554701347);
    msg.setSource(32211U);
    msg.setSourceEntity(91U);
    msg.setDestination(55041U);
    msg.setDestinationEntity(102U);
    msg.value = 0.4872925036990806;

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
    msg.setTimeStamp(0.01766178087110637);
    msg.setSource(17498U);
    msg.setSourceEntity(113U);
    msg.setDestination(54443U);
    msg.setDestinationEntity(132U);
    msg.validity = 10761U;
    msg.type = 163U;
    msg.tow = 1250607281U;
    msg.base_lat = 0.2964377429234669;
    msg.base_lon = 0.2805847800971253;
    msg.base_height = 0.743844543255198;
    msg.n = 0.7682524721253219;
    msg.e = 0.5626123610587896;
    msg.d = 0.6804374882983157;
    msg.v_n = 0.10886728420683756;
    msg.v_e = 0.9297103405934852;
    msg.v_d = 0.6391905307954628;
    msg.satellites = 74U;
    msg.iar_hyp = 62922U;
    msg.iar_ratio = 0.9582396560970119;

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
    msg.setTimeStamp(0.11987758493350198);
    msg.setSource(32088U);
    msg.setSourceEntity(61U);
    msg.setDestination(64645U);
    msg.setDestinationEntity(15U);
    msg.validity = 17446U;
    msg.type = 15U;
    msg.tow = 2660929948U;
    msg.base_lat = 0.9260802130698336;
    msg.base_lon = 0.5926760417854255;
    msg.base_height = 0.6146315744497;
    msg.n = 0.6345821503621296;
    msg.e = 0.42502256084004353;
    msg.d = 0.14014188357336566;
    msg.v_n = 0.7326832156921228;
    msg.v_e = 0.49724579808895286;
    msg.v_d = 0.5194108236060595;
    msg.satellites = 52U;
    msg.iar_hyp = 5215U;
    msg.iar_ratio = 0.008856145038795393;

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
    msg.setTimeStamp(0.27901159870233916);
    msg.setSource(44952U);
    msg.setSourceEntity(215U);
    msg.setDestination(52596U);
    msg.setDestinationEntity(82U);
    msg.validity = 44153U;
    msg.type = 167U;
    msg.tow = 2197804176U;
    msg.base_lat = 0.09838690152324181;
    msg.base_lon = 0.02117002102248422;
    msg.base_height = 0.4686225752197579;
    msg.n = 0.1357888411968331;
    msg.e = 0.6981904827224523;
    msg.d = 0.02463069158867437;
    msg.v_n = 0.7997136213187555;
    msg.v_e = 0.9604768110806762;
    msg.v_d = 0.8802558803347753;
    msg.satellites = 189U;
    msg.iar_hyp = 23028U;
    msg.iar_ratio = 0.1956289223692278;

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
    msg.setTimeStamp(0.32877867512458125);
    msg.setSource(14883U);
    msg.setSourceEntity(50U);
    msg.setDestination(4409U);
    msg.setDestinationEntity(169U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9522047310293457;
    tmp_msg_0.lon = 0.9127255661158357;
    tmp_msg_0.height = 0.9186377792886309;
    tmp_msg_0.x = 0.6676517166091775;
    tmp_msg_0.y = 0.5466472878561109;
    tmp_msg_0.z = 0.12494419971269732;
    tmp_msg_0.phi = 0.24066876955743532;
    tmp_msg_0.theta = 0.9510631106254973;
    tmp_msg_0.psi = 0.9667238488633794;
    tmp_msg_0.u = 0.28111199673621245;
    tmp_msg_0.v = 0.09571264854906036;
    tmp_msg_0.w = 0.869288186431859;
    tmp_msg_0.vx = 0.8169292294533256;
    tmp_msg_0.vy = 0.6414138332126219;
    tmp_msg_0.vz = 0.20939672755673955;
    tmp_msg_0.p = 0.42006104336571704;
    tmp_msg_0.q = 0.2344507987100276;
    tmp_msg_0.r = 0.23872361088519245;
    tmp_msg_0.depth = 0.97467395052885;
    tmp_msg_0.alt = 0.10137302379724489;
    msg.state.set(tmp_msg_0);
    msg.type = 111U;

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
    msg.setTimeStamp(0.45338423138337236);
    msg.setSource(34162U);
    msg.setSourceEntity(91U);
    msg.setDestination(9685U);
    msg.setDestinationEntity(108U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.14330236849631806;
    tmp_msg_0.lon = 0.09188036702549662;
    tmp_msg_0.height = 0.578274036313537;
    tmp_msg_0.x = 0.04234830150332358;
    tmp_msg_0.y = 0.44727638610841636;
    tmp_msg_0.z = 0.7959018210222468;
    tmp_msg_0.phi = 0.989125482739204;
    tmp_msg_0.theta = 0.6747666838670846;
    tmp_msg_0.psi = 0.0832644809560652;
    tmp_msg_0.u = 0.8811524060573757;
    tmp_msg_0.v = 0.9558149542685506;
    tmp_msg_0.w = 0.5852426504881442;
    tmp_msg_0.vx = 0.10171513362784845;
    tmp_msg_0.vy = 0.20593073688595576;
    tmp_msg_0.vz = 0.3433528142653506;
    tmp_msg_0.p = 0.32305705288198483;
    tmp_msg_0.q = 0.8714168451693798;
    tmp_msg_0.r = 0.7695634060748462;
    tmp_msg_0.depth = 0.9077214278582053;
    tmp_msg_0.alt = 0.5042219642706062;
    msg.state.set(tmp_msg_0);
    msg.type = 37U;

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
    msg.setTimeStamp(0.26664426520874995);
    msg.setSource(51004U);
    msg.setSourceEntity(139U);
    msg.setDestination(58028U);
    msg.setDestinationEntity(171U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.23185735699351917;
    tmp_msg_0.lon = 0.8826481866874542;
    tmp_msg_0.height = 0.30427255765934547;
    tmp_msg_0.x = 0.40705497387180334;
    tmp_msg_0.y = 0.811775717478039;
    tmp_msg_0.z = 0.15146471815149998;
    tmp_msg_0.phi = 0.23127178659040837;
    tmp_msg_0.theta = 0.2909472271314575;
    tmp_msg_0.psi = 0.6225636053878457;
    tmp_msg_0.u = 0.9016413884251837;
    tmp_msg_0.v = 0.5498584593627271;
    tmp_msg_0.w = 0.29680287079770284;
    tmp_msg_0.vx = 0.3409961305962478;
    tmp_msg_0.vy = 0.6036910641751161;
    tmp_msg_0.vz = 0.8180652058608112;
    tmp_msg_0.p = 0.46950462808547144;
    tmp_msg_0.q = 0.5832523830084139;
    tmp_msg_0.r = 0.4702069105833486;
    tmp_msg_0.depth = 0.2267846085556715;
    tmp_msg_0.alt = 0.13721890474678045;
    msg.state.set(tmp_msg_0);
    msg.type = 63U;

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
    msg.setTimeStamp(0.5587411000074939);
    msg.setSource(55071U);
    msg.setSourceEntity(23U);
    msg.setDestination(58804U);
    msg.setDestinationEntity(46U);
    msg.value = 0.25634991222779835;

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
    msg.setTimeStamp(0.06470299207090513);
    msg.setSource(45983U);
    msg.setSourceEntity(250U);
    msg.setDestination(48856U);
    msg.setDestinationEntity(252U);
    msg.value = 0.0860439481363986;

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
    msg.setTimeStamp(0.9957889149805307);
    msg.setSource(1239U);
    msg.setSourceEntity(163U);
    msg.setDestination(33392U);
    msg.setDestinationEntity(244U);
    msg.value = 0.4441365655269538;

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
    msg.setTimeStamp(0.798135481541071);
    msg.setSource(9627U);
    msg.setSourceEntity(243U);
    msg.setDestination(37295U);
    msg.setDestinationEntity(34U);
    msg.value = 0.24075942301182807;

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
    msg.setTimeStamp(0.875078151894508);
    msg.setSource(9889U);
    msg.setSourceEntity(215U);
    msg.setDestination(32375U);
    msg.setDestinationEntity(21U);
    msg.value = 0.6318112713403737;

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
    msg.setTimeStamp(0.7827352017273338);
    msg.setSource(57160U);
    msg.setSourceEntity(18U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(78U);
    msg.value = 0.867681440835942;

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
    msg.setTimeStamp(0.27996893957179614);
    msg.setSource(50856U);
    msg.setSourceEntity(36U);
    msg.setDestination(60514U);
    msg.setDestinationEntity(155U);
    msg.value = 0.4316617744992871;

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
    msg.setTimeStamp(0.7017308879205147);
    msg.setSource(55102U);
    msg.setSourceEntity(232U);
    msg.setDestination(58760U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6001947783306492;

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
    msg.setTimeStamp(0.1065976485403185);
    msg.setSource(794U);
    msg.setSourceEntity(62U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(104U);
    msg.value = 0.4814411027315587;

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
    msg.setTimeStamp(0.041177353913116055);
    msg.setSource(64237U);
    msg.setSourceEntity(208U);
    msg.setDestination(24051U);
    msg.setDestinationEntity(172U);
    msg.value = 0.3987012289763129;

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
    msg.setTimeStamp(0.36749818309248405);
    msg.setSource(60460U);
    msg.setSourceEntity(2U);
    msg.setDestination(12161U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7645530061405001;

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
    msg.setTimeStamp(0.8143467162305659);
    msg.setSource(2898U);
    msg.setSourceEntity(207U);
    msg.setDestination(21336U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7798541131762559;

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
    msg.setTimeStamp(0.24320156629950285);
    msg.setSource(38367U);
    msg.setSourceEntity(186U);
    msg.setDestination(41286U);
    msg.setDestinationEntity(152U);
    msg.value = 0.5139913971466612;

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
    msg.setTimeStamp(0.8984735487736011);
    msg.setSource(9666U);
    msg.setSourceEntity(66U);
    msg.setDestination(14402U);
    msg.setDestinationEntity(109U);
    msg.value = 0.6547292969847791;

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
    msg.setTimeStamp(0.5635203969158077);
    msg.setSource(18615U);
    msg.setSourceEntity(62U);
    msg.setDestination(40903U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6587508080593449;

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
    msg.setTimeStamp(0.8934017989628718);
    msg.setSource(15037U);
    msg.setSourceEntity(224U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(184U);
    msg.id = 194U;
    msg.zoom = 193U;
    msg.action = 64U;

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
    msg.setTimeStamp(0.12327423706982599);
    msg.setSource(30659U);
    msg.setSourceEntity(84U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(207U);
    msg.id = 7U;
    msg.zoom = 195U;
    msg.action = 247U;

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
    msg.setTimeStamp(0.07168280445650443);
    msg.setSource(27222U);
    msg.setSourceEntity(145U);
    msg.setDestination(39249U);
    msg.setDestinationEntity(164U);
    msg.id = 242U;
    msg.zoom = 100U;
    msg.action = 189U;

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
    msg.setTimeStamp(0.3138505754101911);
    msg.setSource(42854U);
    msg.setSourceEntity(245U);
    msg.setDestination(51353U);
    msg.setDestinationEntity(201U);
    msg.id = 153U;
    msg.value = 0.6411940609664868;

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
    msg.setTimeStamp(0.018093976896945252);
    msg.setSource(60060U);
    msg.setSourceEntity(77U);
    msg.setDestination(21854U);
    msg.setDestinationEntity(67U);
    msg.id = 75U;
    msg.value = 0.39018864552110555;

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
    msg.setTimeStamp(0.689137908767482);
    msg.setSource(9962U);
    msg.setSourceEntity(208U);
    msg.setDestination(57483U);
    msg.setDestinationEntity(6U);
    msg.id = 10U;
    msg.value = 0.8476694341493927;

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
    msg.setTimeStamp(0.23184727605014055);
    msg.setSource(57039U);
    msg.setSourceEntity(170U);
    msg.setDestination(6823U);
    msg.setDestinationEntity(148U);
    msg.id = 167U;
    msg.value = 0.11411402784208291;

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
    msg.setTimeStamp(0.8006651684781726);
    msg.setSource(4948U);
    msg.setSourceEntity(229U);
    msg.setDestination(64672U);
    msg.setDestinationEntity(103U);
    msg.id = 122U;
    msg.value = 0.01674098411785918;

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
    msg.setTimeStamp(0.03520082734497121);
    msg.setSource(21116U);
    msg.setSourceEntity(195U);
    msg.setDestination(33778U);
    msg.setDestinationEntity(132U);
    msg.id = 167U;
    msg.value = 0.2656806339763109;

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
    msg.setTimeStamp(0.7143564120644297);
    msg.setSource(13114U);
    msg.setSourceEntity(225U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(12U);
    msg.id = 155U;
    msg.angle = 0.5590987026043999;

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
    msg.setTimeStamp(0.24249104253214437);
    msg.setSource(45448U);
    msg.setSourceEntity(102U);
    msg.setDestination(56958U);
    msg.setDestinationEntity(27U);
    msg.id = 54U;
    msg.angle = 0.6065294454309393;

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
    msg.setTimeStamp(0.09759521501612722);
    msg.setSource(5947U);
    msg.setSourceEntity(221U);
    msg.setDestination(2993U);
    msg.setDestinationEntity(94U);
    msg.id = 54U;
    msg.angle = 0.5716007449664754;

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
    msg.setTimeStamp(0.1545739428874391);
    msg.setSource(42582U);
    msg.setSourceEntity(168U);
    msg.setDestination(42028U);
    msg.setDestinationEntity(157U);
    msg.op = 106U;
    msg.actions.assign("KGOFGUGDNXADWERHAGQJAYEJEBFUTZOGSXILSUZYLEEEDLOWXCWCDTIMWTWETXJTKCPBBKKRQDMIHHWSCGCKSMHIPQJWOILHSLTLZJVTIHFNJUHIGSASVOWKFQQOXPZMAWBRUNRUSVYNBPAA");

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
    msg.setTimeStamp(0.2892543240966273);
    msg.setSource(16460U);
    msg.setSourceEntity(34U);
    msg.setDestination(33070U);
    msg.setDestinationEntity(218U);
    msg.op = 233U;
    msg.actions.assign("BHDKANAJDHGYXCPIEXRJWXIHWQQVUUMDRVZFQTBNIQVKVLCSKDLJZVWSZSBYYRWDQCHQRYGFCSUCEBASWVOTGWLYJQMAIZLFQORMRIVAOATKHNMFSXUSJWGBSDJGAFLWMEYOFGDTKPCMJBMKCYYSTUPRIELEYGQKDCHJPTVFTEHXPHSRFNYDBNFEKXZOWUPTKJVMZNLVQENGZLMBFNKZPHRXTXUATON");

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
    msg.setTimeStamp(0.9409777023857551);
    msg.setSource(7423U);
    msg.setSourceEntity(145U);
    msg.setDestination(51400U);
    msg.setDestinationEntity(252U);
    msg.op = 84U;
    msg.actions.assign("VNNFGLCKCWFXDHFLQQKHJJHGLOFRGVQJGJCJVRIMDMWPUSTHXCBTRAACQSFRWKONGCSSDXWOIUHBAUHWRAODMSYVYQOWXDMHBZKIYPPTXYUNEMVVXIETBMINQZZEEIALSEJOQKQYELVAFS");

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
    msg.setTimeStamp(0.41621957252013964);
    msg.setSource(50697U);
    msg.setSourceEntity(15U);
    msg.setDestination(46983U);
    msg.setDestinationEntity(185U);
    msg.actions.assign("BAGSOMGEXHYOPLRKZSSDPVAHUVJMELAYIJFYPDBNNQEKVXWFMARGRCQQBLFEZRRBOTNBPMPLIUZJAIVN");

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
    msg.setTimeStamp(0.08651608309890502);
    msg.setSource(42506U);
    msg.setSourceEntity(160U);
    msg.setDestination(58073U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("NWAWKSTNXGPISCVYBHAPGZWZVYJZARBHHLFXXKFQOXZKXLWXUBJDDAXUNDBKBTCFFOFISJKTRKSCDSIVNCPJYAWDEIUTHISRROWTXQSDCGLBCRODDYOTBWAMRAGQLALZONVMDGWGUQYQOMVEFIPZGCHNAJPKEGHRHQSBU");

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
    msg.setTimeStamp(0.7048118926706871);
    msg.setSource(53763U);
    msg.setSourceEntity(225U);
    msg.setDestination(28395U);
    msg.setDestinationEntity(115U);
    msg.actions.assign("WUMCTGOISELQWJALHTAUUSYDYCXUETFFMBEOZJFYKKVQPKTRASDHQVVNZ");

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
    msg.setTimeStamp(0.312030699117019);
    msg.setSource(54816U);
    msg.setSourceEntity(94U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(75U);
    msg.button = 204U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.6975868648402926);
    msg.setSource(39220U);
    msg.setSourceEntity(92U);
    msg.setDestination(27424U);
    msg.setDestinationEntity(69U);
    msg.button = 62U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.8154982152074729);
    msg.setSource(44922U);
    msg.setSourceEntity(190U);
    msg.setDestination(6042U);
    msg.setDestinationEntity(215U);
    msg.button = 7U;
    msg.value = 234U;

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
    msg.setTimeStamp(0.15570166179881506);
    msg.setSource(28453U);
    msg.setSourceEntity(141U);
    msg.setDestination(62955U);
    msg.setDestinationEntity(218U);
    msg.op = 209U;
    msg.text.assign("YBXCJZAWXHHJILQZNVWGBVDFKVGQXKDTFOAPFSQAMFLEQXCIRUDEORWWRAWPLGJYNTKTDZU");

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
    msg.setTimeStamp(0.420810145630115);
    msg.setSource(39609U);
    msg.setSourceEntity(156U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(3U);
    msg.op = 223U;
    msg.text.assign("RESQWMCZAPNUOOQRXTIPTUAOEUUORNTKHJFNFHXIKQENONAZSIOYAPNSZDNTUPJHVGBLFMGXWTHJZPXYGDMWSKDFSCWJJERGWUKHLBCJWNDRH");

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
    msg.setTimeStamp(0.8961331573376494);
    msg.setSource(36425U);
    msg.setSourceEntity(43U);
    msg.setDestination(13519U);
    msg.setDestinationEntity(12U);
    msg.op = 168U;
    msg.text.assign("UFNVUYQZAEALZZJLXXICYMPIBOLCEABVJKDSPFWWUPDFCM");

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
    msg.setTimeStamp(0.062238942343208814);
    msg.setSource(10564U);
    msg.setSourceEntity(247U);
    msg.setDestination(23841U);
    msg.setDestinationEntity(102U);
    msg.op = 18U;
    msg.time_remain = 0.7995087817734393;
    msg.sched_time = 0.014187542610051396;

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
    msg.setTimeStamp(0.547956346994376);
    msg.setSource(32590U);
    msg.setSourceEntity(84U);
    msg.setDestination(12134U);
    msg.setDestinationEntity(72U);
    msg.op = 19U;
    msg.time_remain = 0.12812137800991197;
    msg.sched_time = 0.016508165932990093;

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
    msg.setTimeStamp(0.8334710110295902);
    msg.setSource(12099U);
    msg.setSourceEntity(123U);
    msg.setDestination(33294U);
    msg.setDestinationEntity(219U);
    msg.op = 129U;
    msg.time_remain = 0.96680845265644;
    msg.sched_time = 0.985519518134084;

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
    msg.setTimeStamp(0.8541850086332397);
    msg.setSource(22264U);
    msg.setSourceEntity(162U);
    msg.setDestination(39509U);
    msg.setDestinationEntity(169U);
    msg.name.assign("SIFPJLRDOHONJJTSCBKNXAEVGIUX");
    msg.op = 175U;
    msg.sched_time = 0.07104503168306331;

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
    msg.setTimeStamp(0.13127507662719695);
    msg.setSource(2277U);
    msg.setSourceEntity(89U);
    msg.setDestination(40715U);
    msg.setDestinationEntity(73U);
    msg.name.assign("LRHYFXQTRBRIBDQUIUQHAWLCSQEUUQHLWIVQWPZJUOIPJPICGOFRKAOJBTTTGYXABHITAWHFAQDKTVJSMEVNPKBPKNZSMFKBALEZXINWBEYFJEJUOMCLYBWAUYFHUCDSJFJTQVRXMOXNXJNLURVGQS");
    msg.op = 206U;
    msg.sched_time = 0.04928810556055152;

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
    msg.setTimeStamp(0.4065305473868739);
    msg.setSource(48610U);
    msg.setSourceEntity(217U);
    msg.setDestination(24063U);
    msg.setDestinationEntity(76U);
    msg.name.assign("TVYZZNYVIQQUWBJVVGBGDROCTPOFEGJWOVZYAIWOCXSREEIMRQBCHIDWWSURYEIKJHCJCIDCNQUSLHBQXUAAJKFTEMPOJSYAUAPLLYLZLUTPMSYBVJXWBAQERVFIREOFMESXTZLXSHEMVNPGFDPMSJWQNRKBH");
    msg.op = 105U;
    msg.sched_time = 0.7420178946771707;

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
    msg.setTimeStamp(0.5876593181807809);
    msg.setSource(43534U);
    msg.setSourceEntity(224U);
    msg.setDestination(18762U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.8127246957078778);
    msg.setSource(39483U);
    msg.setSourceEntity(208U);
    msg.setDestination(65424U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.7602404918288729);
    msg.setSource(63294U);
    msg.setSourceEntity(16U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.35455515035967455);
    msg.setSource(1603U);
    msg.setSourceEntity(198U);
    msg.setDestination(62721U);
    msg.setDestinationEntity(48U);
    msg.name.assign("MRWXZZUGOFUEHQEJHFSFHXPGPSD");
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
    msg.setTimeStamp(0.4224239046297802);
    msg.setSource(61414U);
    msg.setSourceEntity(113U);
    msg.setDestination(20719U);
    msg.setDestinationEntity(173U);
    msg.name.assign("ZKPXFJDKPGUJIUJFOGMGMBCPYJGCXQYNSVVARBHOHGRUIGQMWULKSFFXNGWBCRJLQBVLYRTIMAMDQAINRWOMIBYXWTBUDHKEUQZBHKNBVOTTNUNVYZEZIDVOBPEIHXNDPEUSRRFZSECTMEOHSCZXYAHPRATYELXJSHXQXMGYLZJWJQAJWZICWLUDDPKGSMOKPIODSZQTLFFOGPFNITAA");
    msg.state = 114U;

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
    msg.setTimeStamp(0.10563341131451098);
    msg.setSource(58767U);
    msg.setSourceEntity(233U);
    msg.setDestination(5292U);
    msg.setDestinationEntity(169U);
    msg.name.assign("PRXDETIJJZHHXDSZKQYNGRQLKHVIUYQRIDRHXBAVNSQKBEINJXFLULZGOCTPEXVANGGWABLPTVEJGHYBVVXFKQYJPGQTGUMZFVTYNOWCOCSMLXRCBACZVPTAHBMPUEQECLWSQ");
    msg.state = 211U;

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
    msg.setTimeStamp(0.3456997320023465);
    msg.setSource(52219U);
    msg.setSourceEntity(196U);
    msg.setDestination(65129U);
    msg.setDestinationEntity(100U);
    msg.name.assign("ADYGHJRRGFXCWQIHRHKDOULUCEGOVWMZBMDUIUEBZVQOABBNFKSKKTGKSIATNLRRJXONOWGQYVQBIZHUEMXCTRVMTMTNJDXPOMFFYEDLHOJVUPMDDDWQVSHSJERWPFKIJAYBLSHDCBYQMP");
    msg.value = 186U;

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
    msg.setTimeStamp(0.19595070887897348);
    msg.setSource(53316U);
    msg.setSourceEntity(101U);
    msg.setDestination(23388U);
    msg.setDestinationEntity(119U);
    msg.name.assign("PBFIEQQPVHATBMADHFEIGFUTLXHQXQEORMSPPSUWYTYDUPYXUVXJMOTFIFRBXMJENGQWLVPYUMDIHYCSTXLALOKIFAHJXIHJVNZQMDUKLEHEZZGACOBPBRTBSZMROWXFJCAOONZERPVTCCQMDCYRKRCVKNWDSLVTVUINCRHIKTJVFKGRGAGYANFGEWQPZPYSSUOWNQZYCQJTWFZSEUXIZSYDINLK");
    msg.value = 222U;

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
    msg.setTimeStamp(0.8676895382129035);
    msg.setSource(30909U);
    msg.setSourceEntity(46U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(233U);
    msg.name.assign("JTKIMYWZLVMGKRXJSLXU");
    msg.value = 248U;

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
    msg.setTimeStamp(0.9758485197321717);
    msg.setSource(37466U);
    msg.setSourceEntity(163U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(176U);
    msg.name.assign("DMWZSMSLKQXDQWVZQMJFTDF");

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
    msg.setTimeStamp(0.2989489192155942);
    msg.setSource(41977U);
    msg.setSourceEntity(79U);
    msg.setDestination(8873U);
    msg.setDestinationEntity(152U);
    msg.name.assign("CSJAHULLNAHJILXWFOIYVWCDVXRZZOXVNHSUTWBAMJDAIGPTHVUGLEWHAGWSBRTZSSHZKKOHILUGOFSTYFZWWZXTFDJBFBRMDGOQXNICZCCTTRDXJECJMIVRFLKKRMP");

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
    msg.setTimeStamp(0.008614775618425496);
    msg.setSource(39547U);
    msg.setSourceEntity(178U);
    msg.setDestination(57091U);
    msg.setDestinationEntity(99U);
    msg.name.assign("WCHSZWNPFGORRXNITGMBBHLDMIGBBLFJCKJEBEPRYADTLZAMONAXSWWJEIKVXCBVQFOTTNZHGVRDIYDTFOEGGREDBOVJJWFTYNIPHLILJMPWQMHGEAZZHVBRQQYSDEZMOUXOXPQGNUEMXCXYFQLHTVJFKYSGOWWDAZRBNFDHQOMSKCLQAYSDMUSJATIXUUSYRCJVKZ");

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
    msg.setTimeStamp(0.8962979085804395);
    msg.setSource(11211U);
    msg.setSourceEntity(134U);
    msg.setDestination(48834U);
    msg.setDestinationEntity(145U);
    msg.name.assign("WTQZUECHMNXZA");
    msg.value = 226U;

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
    msg.setTimeStamp(0.36590806619074423);
    msg.setSource(17987U);
    msg.setSourceEntity(31U);
    msg.setDestination(65409U);
    msg.setDestinationEntity(0U);
    msg.name.assign("EJGRDYTSTPJBUMUUDGCPIUKTZMESCWGTTLFQYGJXKSUDXGJQSTPDSROWPLZANGNBSHLVLJERPODDYRJYFPOPDWEKOEMNTUSZOXAQYGBCBFQHFQXXQKXSVVDUNALPWRFKEIEPONVIAZCMIUMRBVHOSNHNYHXUWLTRJHMKWCVQSJNZYCCIFBEUIVZHXBKYQKYOACWEBJFMRFIYTNJIMFCVLZOGBTKNWKQAVRAPHLGFZAAHMRAWCGDHQ");
    msg.value = 69U;

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
    msg.setTimeStamp(0.10127670659091903);
    msg.setSource(34458U);
    msg.setSourceEntity(182U);
    msg.setDestination(14235U);
    msg.setDestinationEntity(84U);
    msg.name.assign("WBDMVIFTYZDKTTYPYAIWQINBKOYSXLZYUEUBQWCZMTFGAFULBEZZFMPNRVHJSSEBQFSDEAOJMVNTLQNDFASJNDVVNJZOVNBVNRRXWUOYXIUCNBGGCRKGWIIWZIHFPCTCLWJDVCCGUPOKJEVSKRTXKRBAPMMLKEIPAKZQOSXGTRLTWJXQCOHYEJCHPQHELFHPDRRYLDBQLEFQPIBUNGOUMZWARWXSASGDSUDEAJO");
    msg.value = 160U;

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
    msg.setTimeStamp(0.7956440804383942);
    msg.setSource(41772U);
    msg.setSourceEntity(103U);
    msg.setDestination(38349U);
    msg.setDestinationEntity(19U);
    msg.id = 54U;
    msg.period = 20503950U;
    msg.duty_cycle = 2905493442U;

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
    msg.setTimeStamp(0.12146404330363081);
    msg.setSource(39327U);
    msg.setSourceEntity(183U);
    msg.setDestination(7436U);
    msg.setDestinationEntity(137U);
    msg.id = 0U;
    msg.period = 3831682860U;
    msg.duty_cycle = 4022861436U;

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
    msg.setTimeStamp(0.21150416254016224);
    msg.setSource(4403U);
    msg.setSourceEntity(226U);
    msg.setDestination(59362U);
    msg.setDestinationEntity(114U);
    msg.id = 14U;
    msg.period = 713425912U;
    msg.duty_cycle = 3869862589U;

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
    msg.setTimeStamp(0.9768047225591233);
    msg.setSource(26823U);
    msg.setSourceEntity(65U);
    msg.setDestination(31048U);
    msg.setDestinationEntity(73U);
    msg.id = 99U;
    msg.period = 397064023U;
    msg.duty_cycle = 3255748455U;

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
    msg.setTimeStamp(0.2765069266221074);
    msg.setSource(30769U);
    msg.setSourceEntity(220U);
    msg.setDestination(37164U);
    msg.setDestinationEntity(125U);
    msg.id = 34U;
    msg.period = 989006320U;
    msg.duty_cycle = 3939197645U;

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
    msg.setTimeStamp(0.26307814733636403);
    msg.setSource(31445U);
    msg.setSourceEntity(103U);
    msg.setDestination(41293U);
    msg.setDestinationEntity(147U);
    msg.id = 182U;
    msg.period = 1332963500U;
    msg.duty_cycle = 3593710020U;

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
    msg.setTimeStamp(0.28012206474176393);
    msg.setSource(58242U);
    msg.setSourceEntity(249U);
    msg.setDestination(29859U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.6852282761411607;
    msg.lon = 0.5925972067108162;
    msg.height = 0.9823945341448123;
    msg.x = 0.9186501013933873;
    msg.y = 0.4900220853605719;
    msg.z = 0.2519062205855219;
    msg.phi = 0.3421374662984811;
    msg.theta = 0.8592874938609153;
    msg.psi = 0.2573286304373835;
    msg.u = 0.5557046794659871;
    msg.v = 0.701593075183627;
    msg.w = 0.31299396885070196;
    msg.vx = 0.7319202545366351;
    msg.vy = 0.31607366817379257;
    msg.vz = 0.13738586133556374;
    msg.p = 0.936391728459374;
    msg.q = 0.07404039526574968;
    msg.r = 0.2659046700158342;
    msg.depth = 0.6634154036193155;
    msg.alt = 0.2389353418404805;

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
    msg.setTimeStamp(0.8878976761354855);
    msg.setSource(60426U);
    msg.setSourceEntity(46U);
    msg.setDestination(39998U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.8676906428587557;
    msg.lon = 0.19713528322666107;
    msg.height = 0.8676502019531614;
    msg.x = 0.12549850387589567;
    msg.y = 0.9589703616189856;
    msg.z = 0.2521351970787047;
    msg.phi = 0.3607699392410406;
    msg.theta = 0.4053293972400325;
    msg.psi = 0.9918313487693673;
    msg.u = 0.5670517717709478;
    msg.v = 0.6720439863794097;
    msg.w = 0.607996715214979;
    msg.vx = 0.37767498934144184;
    msg.vy = 0.17618150392277399;
    msg.vz = 0.08442765768024707;
    msg.p = 0.5841391859834336;
    msg.q = 0.14456960541789066;
    msg.r = 0.7132507641743745;
    msg.depth = 0.09634091960253055;
    msg.alt = 0.8687218940036109;

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
    msg.setTimeStamp(0.8186114643126254);
    msg.setSource(17288U);
    msg.setSourceEntity(224U);
    msg.setDestination(31142U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.06946401280034464;
    msg.lon = 0.5322438215469117;
    msg.height = 0.9648830093263348;
    msg.x = 0.6118779051642008;
    msg.y = 0.9560378095646702;
    msg.z = 0.311838082417524;
    msg.phi = 0.5585621952056435;
    msg.theta = 0.8370957300101552;
    msg.psi = 0.6922621483950812;
    msg.u = 0.21139209282149685;
    msg.v = 0.789382589930687;
    msg.w = 0.8103161254043754;
    msg.vx = 0.3323222565267151;
    msg.vy = 0.7750670934419974;
    msg.vz = 0.015241648046624201;
    msg.p = 0.8281569577087249;
    msg.q = 0.5800552002317302;
    msg.r = 0.4978196366722115;
    msg.depth = 0.07068088712185949;
    msg.alt = 0.28236616903617084;

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
    msg.setTimeStamp(0.18735236226939);
    msg.setSource(31958U);
    msg.setSourceEntity(45U);
    msg.setDestination(60692U);
    msg.setDestinationEntity(96U);
    msg.x = 0.11351915621078124;
    msg.y = 0.6708064266304319;
    msg.z = 0.3473812019509206;

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
    msg.setTimeStamp(0.24035506058948441);
    msg.setSource(33642U);
    msg.setSourceEntity(79U);
    msg.setDestination(37405U);
    msg.setDestinationEntity(136U);
    msg.x = 0.45182688710054786;
    msg.y = 0.2216856785814577;
    msg.z = 0.8338505798629773;

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
    msg.setTimeStamp(0.8891804539307947);
    msg.setSource(53141U);
    msg.setSourceEntity(152U);
    msg.setDestination(60996U);
    msg.setDestinationEntity(152U);
    msg.x = 0.34090862405158084;
    msg.y = 0.8101055107583354;
    msg.z = 0.6331124619593801;

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
    msg.setTimeStamp(0.6510374733641764);
    msg.setSource(17805U);
    msg.setSourceEntity(133U);
    msg.setDestination(10373U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8696397841237281;

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
    msg.setTimeStamp(0.04144907515542873);
    msg.setSource(50870U);
    msg.setSourceEntity(80U);
    msg.setDestination(5434U);
    msg.setDestinationEntity(248U);
    msg.value = 0.11064223103051718;

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
    msg.setTimeStamp(0.010193370845510419);
    msg.setSource(20543U);
    msg.setSourceEntity(235U);
    msg.setDestination(26903U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7362361733022464;

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
    msg.setTimeStamp(0.8241065375433897);
    msg.setSource(9661U);
    msg.setSourceEntity(32U);
    msg.setDestination(55879U);
    msg.setDestinationEntity(192U);
    msg.value = 0.5906575679756471;

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
    msg.setTimeStamp(0.1306843304521852);
    msg.setSource(31108U);
    msg.setSourceEntity(86U);
    msg.setDestination(16677U);
    msg.setDestinationEntity(248U);
    msg.value = 0.27838340532429595;

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
    msg.setTimeStamp(0.7491369802299979);
    msg.setSource(20336U);
    msg.setSourceEntity(148U);
    msg.setDestination(2022U);
    msg.setDestinationEntity(200U);
    msg.value = 0.7259483802305138;

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
    msg.setTimeStamp(0.695940989581699);
    msg.setSource(61403U);
    msg.setSourceEntity(194U);
    msg.setDestination(22050U);
    msg.setDestinationEntity(172U);
    msg.x = 0.3552919414410777;
    msg.y = 0.2303552840063785;
    msg.z = 0.8569527703058416;
    msg.phi = 0.05555552836588662;
    msg.theta = 0.02669752115519508;
    msg.psi = 0.7117675383880119;
    msg.p = 0.9297994243734705;
    msg.q = 0.5596948981512662;
    msg.r = 0.6903965309288436;
    msg.u = 0.6332308892548993;
    msg.v = 0.1948635973200401;
    msg.w = 0.797241147577793;
    msg.bias_psi = 0.8604468183775986;
    msg.bias_r = 0.8720469455817965;

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
    msg.setTimeStamp(0.18388661674296192);
    msg.setSource(54551U);
    msg.setSourceEntity(33U);
    msg.setDestination(51760U);
    msg.setDestinationEntity(142U);
    msg.x = 0.9747373867285197;
    msg.y = 0.5834165242828595;
    msg.z = 0.7593226137193904;
    msg.phi = 0.5764502365820824;
    msg.theta = 0.757460655273814;
    msg.psi = 0.07520298716404583;
    msg.p = 0.5761497284403008;
    msg.q = 0.07984963549770152;
    msg.r = 0.5583613946077196;
    msg.u = 0.6301242591633063;
    msg.v = 0.6432213882839557;
    msg.w = 0.1838047492892716;
    msg.bias_psi = 0.8280723545653558;
    msg.bias_r = 0.14728435017122987;

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
    msg.setTimeStamp(0.021849287332271206);
    msg.setSource(29237U);
    msg.setSourceEntity(59U);
    msg.setDestination(42944U);
    msg.setDestinationEntity(0U);
    msg.x = 0.12272334301998578;
    msg.y = 0.031269211211881975;
    msg.z = 0.2251811739222046;
    msg.phi = 0.7106535661085084;
    msg.theta = 0.6782616644271462;
    msg.psi = 0.8446498376000217;
    msg.p = 0.44070296990210867;
    msg.q = 0.3170150785501804;
    msg.r = 0.5024033928810075;
    msg.u = 0.8591600682760824;
    msg.v = 0.2591752622278911;
    msg.w = 0.4278718152701947;
    msg.bias_psi = 0.8217148186226776;
    msg.bias_r = 0.3291481389227765;

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
    msg.setTimeStamp(0.10642096214010266);
    msg.setSource(33312U);
    msg.setSourceEntity(58U);
    msg.setDestination(21378U);
    msg.setDestinationEntity(44U);
    msg.bias_psi = 0.2912527667302105;
    msg.bias_r = 0.9300313490985312;
    msg.cog = 0.37487861932750255;
    msg.cyaw = 0.10989636225977473;
    msg.lbl_rej_level = 0.5184552596362693;
    msg.gps_rej_level = 0.6072996558545597;
    msg.custom_x = 0.6684812252498158;
    msg.custom_y = 0.4146899178874631;
    msg.custom_z = 0.8899200685793278;

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
    msg.setTimeStamp(0.6631250743729296);
    msg.setSource(50724U);
    msg.setSourceEntity(181U);
    msg.setDestination(18634U);
    msg.setDestinationEntity(103U);
    msg.bias_psi = 0.7822085822194347;
    msg.bias_r = 0.2921728041176306;
    msg.cog = 0.5801870649628611;
    msg.cyaw = 0.8387946532084604;
    msg.lbl_rej_level = 0.38775984933810537;
    msg.gps_rej_level = 0.5245019479289812;
    msg.custom_x = 0.5592540706655503;
    msg.custom_y = 0.08276301934075048;
    msg.custom_z = 0.1472888361382093;

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
    msg.setTimeStamp(0.3020600753612578);
    msg.setSource(48700U);
    msg.setSourceEntity(179U);
    msg.setDestination(55647U);
    msg.setDestinationEntity(53U);
    msg.bias_psi = 0.398886350274012;
    msg.bias_r = 0.4728225128889325;
    msg.cog = 0.9734907110386259;
    msg.cyaw = 0.43149010227980256;
    msg.lbl_rej_level = 0.41987148638828053;
    msg.gps_rej_level = 0.49411321127098184;
    msg.custom_x = 0.9166809815935119;
    msg.custom_y = 0.7346824398248611;
    msg.custom_z = 0.3409186854104549;

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
    msg.setTimeStamp(0.500715827541847);
    msg.setSource(6342U);
    msg.setSourceEntity(189U);
    msg.setDestination(38458U);
    msg.setDestinationEntity(161U);
    msg.utc_time = 0.13274736060575054;
    msg.reason = 107U;

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
    msg.setTimeStamp(0.6859314107563287);
    msg.setSource(32177U);
    msg.setSourceEntity(62U);
    msg.setDestination(29870U);
    msg.setDestinationEntity(107U);
    msg.utc_time = 0.4279169707830478;
    msg.reason = 4U;

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
    msg.setTimeStamp(0.9083321750729961);
    msg.setSource(7345U);
    msg.setSourceEntity(63U);
    msg.setDestination(39982U);
    msg.setDestinationEntity(11U);
    msg.utc_time = 0.062112962384409665;
    msg.reason = 85U;

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
    msg.setTimeStamp(0.6505326965139968);
    msg.setSource(3386U);
    msg.setSourceEntity(80U);
    msg.setDestination(11038U);
    msg.setDestinationEntity(71U);
    msg.id = 189U;
    msg.range = 0.8047866797881346;
    msg.acceptance = 202U;

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
    msg.setTimeStamp(0.8389526116487009);
    msg.setSource(39181U);
    msg.setSourceEntity(92U);
    msg.setDestination(21259U);
    msg.setDestinationEntity(138U);
    msg.id = 30U;
    msg.range = 0.9757336922840111;
    msg.acceptance = 3U;

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
    msg.setTimeStamp(0.08846088791634465);
    msg.setSource(47647U);
    msg.setSourceEntity(79U);
    msg.setDestination(43720U);
    msg.setDestinationEntity(13U);
    msg.id = 77U;
    msg.range = 0.935119927980829;
    msg.acceptance = 205U;

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
    msg.setTimeStamp(0.9800132136281444);
    msg.setSource(22133U);
    msg.setSourceEntity(82U);
    msg.setDestination(27584U);
    msg.setDestinationEntity(242U);
    msg.type = 6U;
    msg.reason = 10U;
    msg.value = 0.16448558088801035;
    msg.timestep = 0.362867365622876;

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
    msg.setTimeStamp(0.053589509782907);
    msg.setSource(7358U);
    msg.setSourceEntity(184U);
    msg.setDestination(13689U);
    msg.setDestinationEntity(153U);
    msg.type = 140U;
    msg.reason = 99U;
    msg.value = 0.08367519303089677;
    msg.timestep = 0.6711644226781306;

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
    msg.setTimeStamp(0.33394927585130607);
    msg.setSource(30117U);
    msg.setSourceEntity(143U);
    msg.setDestination(8894U);
    msg.setDestinationEntity(102U);
    msg.type = 216U;
    msg.reason = 247U;
    msg.value = 0.8873041028663509;
    msg.timestep = 0.09586774620909311;

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
    msg.setTimeStamp(0.4379899974612309);
    msg.setSource(29872U);
    msg.setSourceEntity(218U);
    msg.setDestination(1809U);
    msg.setDestinationEntity(148U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DDPMQHMQZBNISUDBPXECVGZGSCTGPQERGXMCRMHBKBUANRBGEVPSLXIKJYNWRJBALHR");
    tmp_msg_0.lat = 0.8197560913279499;
    tmp_msg_0.lon = 0.02897038277697994;
    tmp_msg_0.depth = 0.297111773718592;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 135U;
    tmp_msg_0.transponder_delay = 238U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6431670748185042;
    msg.y = 0.015671513732479103;
    msg.var_x = 0.6957380441689138;
    msg.var_y = 0.8347600646966172;
    msg.distance = 0.8034929122098581;

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
    msg.setTimeStamp(0.29561648258785533);
    msg.setSource(30010U);
    msg.setSourceEntity(111U);
    msg.setDestination(13476U);
    msg.setDestinationEntity(234U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WUGOOXGUUHLRKQHYLWRGWDEAXKIFRNYZSXHYAAAJKJFWNYSTSKRESBVFJCHOODMOTVZSCIYUFIEVLKKTREFYQDELQFIQPHTZVALDRBPIOQHDDFXMKFPWSHIXIWBEVQCGIBPB");
    tmp_msg_0.lat = 0.6262069230220197;
    tmp_msg_0.lon = 0.7395037536087589;
    tmp_msg_0.depth = 0.0023682039431106583;
    tmp_msg_0.query_channel = 233U;
    tmp_msg_0.reply_channel = 7U;
    tmp_msg_0.transponder_delay = 193U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.04048358065054802;
    msg.y = 0.6373679902601399;
    msg.var_x = 0.3664010797376315;
    msg.var_y = 0.4205709493612295;
    msg.distance = 0.16054019918849893;

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
    msg.setTimeStamp(0.6613103828225145);
    msg.setSource(25535U);
    msg.setSourceEntity(192U);
    msg.setDestination(25318U);
    msg.setDestinationEntity(134U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JSVNUHEGOHBXVTZUUNLCZXHVBWESGIVDDLHBQKHSOPTXMFLITFJHTZJJUNWTMGFAVVLDQJNYKPDHUQREAMIYLAUIZCHZVPEIEHBUDMYHOSELKJGMWKMBZORYJGIFTLPLDXPKMPAVIRLRXBSGAGLYOYZWBKGTVARUCTYCSXCPZAFWENWAKNMWYXFNCIKOFDOCPVNBWCRRJJCDMIQKDGSMTFAXOEUZNRQTNQYFBFCXOSUGPIEX");
    tmp_msg_0.lat = 0.4075453278186759;
    tmp_msg_0.lon = 0.003815213376672566;
    tmp_msg_0.depth = 0.20281226948618036;
    tmp_msg_0.query_channel = 24U;
    tmp_msg_0.reply_channel = 91U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8467522013017155;
    msg.y = 0.14229124138725024;
    msg.var_x = 0.791109346536036;
    msg.var_y = 0.4414062690156725;
    msg.distance = 0.09376853460629031;

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
    msg.setTimeStamp(0.7151190197913605);
    msg.setSource(21518U);
    msg.setSourceEntity(221U);
    msg.setDestination(2608U);
    msg.setDestinationEntity(31U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.061136604318811294);
    msg.setSource(28318U);
    msg.setSourceEntity(139U);
    msg.setDestination(50989U);
    msg.setDestinationEntity(215U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.49849012832228623);
    msg.setSource(46578U);
    msg.setSourceEntity(1U);
    msg.setDestination(53213U);
    msg.setDestinationEntity(30U);
    msg.state = 214U;

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
    msg.setTimeStamp(0.8660657403925658);
    msg.setSource(31279U);
    msg.setSourceEntity(84U);
    msg.setDestination(9755U);
    msg.setDestinationEntity(236U);
    msg.x = 0.3334590207315862;
    msg.y = 0.0052462818557741375;
    msg.z = 0.24739713925124296;

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
    msg.setTimeStamp(0.7085391860945197);
    msg.setSource(8811U);
    msg.setSourceEntity(183U);
    msg.setDestination(10495U);
    msg.setDestinationEntity(139U);
    msg.x = 0.41233749965805544;
    msg.y = 0.9801613541736619;
    msg.z = 0.2778456516565446;

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
    msg.setTimeStamp(0.4055281517491611);
    msg.setSource(10645U);
    msg.setSourceEntity(164U);
    msg.setDestination(62036U);
    msg.setDestinationEntity(231U);
    msg.x = 0.519628399482205;
    msg.y = 0.9337810285148611;
    msg.z = 0.24912557912292288;

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
    msg.setTimeStamp(0.37359952366571314);
    msg.setSource(18296U);
    msg.setSourceEntity(240U);
    msg.setDestination(46819U);
    msg.setDestinationEntity(0U);
    msg.va = 0.9899094526833271;
    msg.aoa = 0.40369693002948603;
    msg.ssa = 0.5894161903368175;

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
    msg.setTimeStamp(0.15605042709146755);
    msg.setSource(47674U);
    msg.setSourceEntity(170U);
    msg.setDestination(12002U);
    msg.setDestinationEntity(108U);
    msg.va = 0.10946509036456509;
    msg.aoa = 0.35678673234942926;
    msg.ssa = 0.6025271464199856;

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
    msg.setTimeStamp(0.4370206685864002);
    msg.setSource(47207U);
    msg.setSourceEntity(164U);
    msg.setDestination(39089U);
    msg.setDestinationEntity(90U);
    msg.va = 0.5640559889762934;
    msg.aoa = 0.4742495036468236;
    msg.ssa = 0.5510619546193897;

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
    msg.setTimeStamp(0.24739555740542363);
    msg.setSource(31654U);
    msg.setSourceEntity(155U);
    msg.setDestination(31127U);
    msg.setDestinationEntity(76U);
    msg.value = 0.5831204984406324;

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
    msg.setTimeStamp(0.8656173841421022);
    msg.setSource(58519U);
    msg.setSourceEntity(105U);
    msg.setDestination(2047U);
    msg.setDestinationEntity(253U);
    msg.value = 0.500029803020701;

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
    msg.setTimeStamp(0.11669873036774714);
    msg.setSource(8763U);
    msg.setSourceEntity(118U);
    msg.setDestination(28545U);
    msg.setDestinationEntity(194U);
    msg.value = 0.8156701356079741;

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
    msg.setTimeStamp(0.5998112491968672);
    msg.setSource(34993U);
    msg.setSourceEntity(5U);
    msg.setDestination(6808U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7280339239481672;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.9943018763342948);
    msg.setSource(36794U);
    msg.setSourceEntity(212U);
    msg.setDestination(33546U);
    msg.setDestinationEntity(254U);
    msg.value = 0.8208954664909031;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.06941995893720754);
    msg.setSource(7242U);
    msg.setSourceEntity(84U);
    msg.setDestination(39639U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9348531414024924;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.8895702221563137);
    msg.setSource(26517U);
    msg.setSourceEntity(163U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(63U);
    msg.value = 0.22718506328626586;
    msg.speed_units = 77U;

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
    msg.setTimeStamp(0.5724223245238194);
    msg.setSource(38687U);
    msg.setSourceEntity(74U);
    msg.setDestination(63498U);
    msg.setDestinationEntity(61U);
    msg.value = 0.9203596205716185;
    msg.speed_units = 226U;

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
    msg.setTimeStamp(0.10161240405508765);
    msg.setSource(62142U);
    msg.setSourceEntity(216U);
    msg.setDestination(16058U);
    msg.setDestinationEntity(98U);
    msg.value = 0.3368240549530449;
    msg.speed_units = 19U;

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
    msg.setTimeStamp(0.3605793392835309);
    msg.setSource(33040U);
    msg.setSourceEntity(58U);
    msg.setDestination(5795U);
    msg.setDestinationEntity(75U);
    msg.value = 0.9591073205178356;

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
    msg.setTimeStamp(0.25398149324358166);
    msg.setSource(23524U);
    msg.setSourceEntity(167U);
    msg.setDestination(19893U);
    msg.setDestinationEntity(179U);
    msg.value = 0.36696423597995975;

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
    msg.setTimeStamp(0.3774476824351817);
    msg.setSource(52154U);
    msg.setSourceEntity(224U);
    msg.setDestination(23263U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9473616056021953;

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
    msg.setTimeStamp(0.0014166471666395841);
    msg.setSource(41962U);
    msg.setSourceEntity(127U);
    msg.setDestination(52984U);
    msg.setDestinationEntity(51U);
    msg.value = 0.4958031210574223;

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
    msg.setTimeStamp(0.6549538418991181);
    msg.setSource(12446U);
    msg.setSourceEntity(232U);
    msg.setDestination(35765U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8243985206561879;

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
    msg.setTimeStamp(0.43972481205087277);
    msg.setSource(2534U);
    msg.setSourceEntity(234U);
    msg.setDestination(48385U);
    msg.setDestinationEntity(10U);
    msg.value = 0.017898516970102363;

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
    msg.setTimeStamp(0.9296182114700089);
    msg.setSource(52697U);
    msg.setSourceEntity(221U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(161U);
    msg.value = 0.23059741678937018;

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
    msg.setTimeStamp(0.5096816032390582);
    msg.setSource(63000U);
    msg.setSourceEntity(207U);
    msg.setDestination(58400U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7695932492913123;

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
    msg.setTimeStamp(0.264447827293228);
    msg.setSource(23519U);
    msg.setSourceEntity(128U);
    msg.setDestination(30568U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8270424076737658;

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
    msg.setTimeStamp(0.9685389333000821);
    msg.setSource(32170U);
    msg.setSourceEntity(184U);
    msg.setDestination(27126U);
    msg.setDestinationEntity(71U);
    msg.path_ref = 502564099U;
    msg.start_lat = 0.49607346109351735;
    msg.start_lon = 0.3742881937033371;
    msg.start_z = 0.40918840279885604;
    msg.start_z_units = 254U;
    msg.end_lat = 0.5225811096100268;
    msg.end_lon = 0.10155431449134;
    msg.end_z = 0.08046438669222178;
    msg.end_z_units = 187U;
    msg.speed = 0.6902864990458798;
    msg.speed_units = 104U;
    msg.lradius = 0.2035541810645155;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.7098916847755368);
    msg.setSource(27250U);
    msg.setSourceEntity(199U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 401990255U;
    msg.start_lat = 0.9730579542386;
    msg.start_lon = 0.5058995365008337;
    msg.start_z = 0.5689772344360509;
    msg.start_z_units = 157U;
    msg.end_lat = 0.8220660837172513;
    msg.end_lon = 0.3738232776670891;
    msg.end_z = 0.27261091678129723;
    msg.end_z_units = 49U;
    msg.speed = 0.810972611487045;
    msg.speed_units = 154U;
    msg.lradius = 0.24908643612436177;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.5594771550304718);
    msg.setSource(26398U);
    msg.setSourceEntity(12U);
    msg.setDestination(26955U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 3453190901U;
    msg.start_lat = 0.6740977370584621;
    msg.start_lon = 0.30156592755254763;
    msg.start_z = 0.6674062282023758;
    msg.start_z_units = 62U;
    msg.end_lat = 0.26073776671471893;
    msg.end_lon = 0.6196549202735799;
    msg.end_z = 0.17486960771998528;
    msg.end_z_units = 32U;
    msg.speed = 0.2408066119085307;
    msg.speed_units = 215U;
    msg.lradius = 0.4717331718351123;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.8816717900871197);
    msg.setSource(27037U);
    msg.setSourceEntity(136U);
    msg.setDestination(45391U);
    msg.setDestinationEntity(219U);
    msg.x = 0.5817243993482965;
    msg.y = 0.04267160990942531;
    msg.z = 0.8766519792800859;
    msg.k = 0.9240111517435591;
    msg.m = 0.2527087650791424;
    msg.n = 0.40052729643381857;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.7557904321274009);
    msg.setSource(5437U);
    msg.setSourceEntity(53U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(190U);
    msg.x = 0.33970107182139575;
    msg.y = 0.4324448974488827;
    msg.z = 0.2368602888255943;
    msg.k = 0.08519055729590552;
    msg.m = 0.11912653500149573;
    msg.n = 0.9889327975483535;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.7667249980412003);
    msg.setSource(39779U);
    msg.setSourceEntity(177U);
    msg.setDestination(21057U);
    msg.setDestinationEntity(81U);
    msg.x = 0.7167190802492346;
    msg.y = 0.08760830838430322;
    msg.z = 0.9455864998334106;
    msg.k = 0.008090416951440416;
    msg.m = 0.7611729832597652;
    msg.n = 0.6892984206628255;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.9202463347803245);
    msg.setSource(38631U);
    msg.setSourceEntity(21U);
    msg.setDestination(2272U);
    msg.setDestinationEntity(240U);
    msg.value = 0.27797371239805135;

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
    msg.setTimeStamp(0.10852439841490025);
    msg.setSource(19563U);
    msg.setSourceEntity(251U);
    msg.setDestination(27697U);
    msg.setDestinationEntity(147U);
    msg.value = 0.6312619794800728;

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
    msg.setTimeStamp(0.20392579281303003);
    msg.setSource(25902U);
    msg.setSourceEntity(147U);
    msg.setDestination(6709U);
    msg.setDestinationEntity(132U);
    msg.value = 0.9615569043157378;

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
    msg.setTimeStamp(0.3336466186395458);
    msg.setSource(1796U);
    msg.setSourceEntity(19U);
    msg.setDestination(21531U);
    msg.setDestinationEntity(7U);
    msg.u = 0.4035271197356032;
    msg.v = 0.9556856410879517;
    msg.w = 0.03293206101253776;
    msg.p = 0.34328026609163387;
    msg.q = 0.5007793152781032;
    msg.r = 0.40475333551176784;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.34156858693638614);
    msg.setSource(28951U);
    msg.setSourceEntity(195U);
    msg.setDestination(21527U);
    msg.setDestinationEntity(211U);
    msg.u = 0.21059204023803146;
    msg.v = 0.6095580624905117;
    msg.w = 0.31376054663768826;
    msg.p = 0.48861578391724825;
    msg.q = 0.8336538822014451;
    msg.r = 0.2820796920219081;
    msg.flags = 80U;

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
    msg.setTimeStamp(0.5357666604777246);
    msg.setSource(4697U);
    msg.setSourceEntity(45U);
    msg.setDestination(14699U);
    msg.setDestinationEntity(251U);
    msg.u = 0.46721879779196174;
    msg.v = 0.3669636733375973;
    msg.w = 0.6217794415478612;
    msg.p = 0.9819082862090616;
    msg.q = 0.6203329129608088;
    msg.r = 0.4355173228242931;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.9886110837919471);
    msg.setSource(17870U);
    msg.setSourceEntity(215U);
    msg.setDestination(12294U);
    msg.setDestinationEntity(90U);
    msg.path_ref = 3849548426U;
    msg.start_lat = 0.3072363904642268;
    msg.start_lon = 0.7024706589818046;
    msg.start_z = 0.6276153295561552;
    msg.start_z_units = 88U;
    msg.end_lat = 0.5834911225168194;
    msg.end_lon = 0.9413128538470282;
    msg.end_z = 0.9130717700463753;
    msg.end_z_units = 6U;
    msg.lradius = 0.5445994321711352;
    msg.flags = 119U;
    msg.x = 0.7968787088107177;
    msg.y = 0.9323220544782191;
    msg.z = 0.513409548414371;
    msg.vx = 0.6419971065490284;
    msg.vy = 0.36922868233316086;
    msg.vz = 0.6843245326786697;
    msg.course_error = 0.4876254205166979;
    msg.eta = 59316U;

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
    msg.setTimeStamp(0.28417147131600173);
    msg.setSource(6129U);
    msg.setSourceEntity(190U);
    msg.setDestination(60631U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 1846152422U;
    msg.start_lat = 0.14244296570546933;
    msg.start_lon = 0.17312512771714061;
    msg.start_z = 0.1144640954697641;
    msg.start_z_units = 38U;
    msg.end_lat = 0.7622969172199237;
    msg.end_lon = 0.4720274659283935;
    msg.end_z = 0.17839071953689267;
    msg.end_z_units = 103U;
    msg.lradius = 0.0665937012422847;
    msg.flags = 165U;
    msg.x = 0.9760411245735386;
    msg.y = 0.8471070342137613;
    msg.z = 0.13268621249225343;
    msg.vx = 0.048183915608395855;
    msg.vy = 0.996309418939074;
    msg.vz = 0.33862521959908143;
    msg.course_error = 0.7346435624016976;
    msg.eta = 64857U;

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
    msg.setTimeStamp(0.3689288647471364);
    msg.setSource(1683U);
    msg.setSourceEntity(229U);
    msg.setDestination(45769U);
    msg.setDestinationEntity(96U);
    msg.path_ref = 103820730U;
    msg.start_lat = 0.41963288907476326;
    msg.start_lon = 0.5486279110371874;
    msg.start_z = 0.40220910482686556;
    msg.start_z_units = 124U;
    msg.end_lat = 0.7335835763604206;
    msg.end_lon = 0.8648179046665628;
    msg.end_z = 0.6652028703499205;
    msg.end_z_units = 105U;
    msg.lradius = 0.412396492315777;
    msg.flags = 226U;
    msg.x = 0.5767736324102125;
    msg.y = 0.6083495164919349;
    msg.z = 0.8743289656902076;
    msg.vx = 0.8649487365014157;
    msg.vy = 0.03864967830772392;
    msg.vz = 0.8307041104101331;
    msg.course_error = 0.9121494828690434;
    msg.eta = 43507U;

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
    msg.setTimeStamp(0.12285507711600419);
    msg.setSource(63307U);
    msg.setSourceEntity(111U);
    msg.setDestination(27706U);
    msg.setDestinationEntity(139U);
    msg.k = 0.9146813357091076;
    msg.m = 0.8472490108033381;
    msg.n = 0.4358311034472325;

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
    msg.setTimeStamp(0.6494806904241086);
    msg.setSource(43075U);
    msg.setSourceEntity(178U);
    msg.setDestination(25384U);
    msg.setDestinationEntity(24U);
    msg.k = 0.2254678355302736;
    msg.m = 0.8787449098923653;
    msg.n = 0.6192357567217833;

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
    msg.setTimeStamp(0.29102539892159596);
    msg.setSource(56310U);
    msg.setSourceEntity(149U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(209U);
    msg.k = 0.9106999767946894;
    msg.m = 0.12803335916609082;
    msg.n = 0.5095761579944041;

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
    msg.setTimeStamp(0.8270687737376063);
    msg.setSource(13172U);
    msg.setSourceEntity(106U);
    msg.setDestination(16089U);
    msg.setDestinationEntity(163U);
    msg.p = 0.5329621790443787;
    msg.i = 0.4499886972755067;
    msg.d = 0.18358247443020526;
    msg.a = 0.547374311235656;

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
    msg.setTimeStamp(0.03130878691369754);
    msg.setSource(55904U);
    msg.setSourceEntity(131U);
    msg.setDestination(46415U);
    msg.setDestinationEntity(188U);
    msg.p = 0.41778024971026895;
    msg.i = 0.4156300704182532;
    msg.d = 0.5124198042317679;
    msg.a = 0.8531126205925165;

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
    msg.setTimeStamp(0.172567646886845);
    msg.setSource(4908U);
    msg.setSourceEntity(243U);
    msg.setDestination(33667U);
    msg.setDestinationEntity(55U);
    msg.p = 0.9521737639887811;
    msg.i = 0.9632919952162367;
    msg.d = 0.46153372489314626;
    msg.a = 0.8577666390211057;

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
    msg.setTimeStamp(0.3345821641940744);
    msg.setSource(46535U);
    msg.setSourceEntity(121U);
    msg.setDestination(63762U);
    msg.setDestinationEntity(185U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.6280551855529156);
    msg.setSource(44483U);
    msg.setSourceEntity(39U);
    msg.setDestination(39018U);
    msg.setDestinationEntity(200U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.15466916310575496);
    msg.setSource(60482U);
    msg.setSourceEntity(73U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(94U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.5662865726004352);
    msg.setSource(47859U);
    msg.setSourceEntity(210U);
    msg.setDestination(51952U);
    msg.setDestinationEntity(17U);
    msg.x = 0.6949486322966093;
    msg.y = 0.9884210592581308;
    msg.z = 0.45776896275096446;
    msg.vx = 0.15332518940653483;
    msg.vy = 0.23980309596935012;
    msg.vz = 0.2774259876092152;
    msg.ax = 0.25641780389527136;
    msg.ay = 0.3287387915286182;
    msg.az = 0.8989800342700903;
    msg.flags = 48011U;

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
    msg.setTimeStamp(0.4472304518498459);
    msg.setSource(59535U);
    msg.setSourceEntity(122U);
    msg.setDestination(55196U);
    msg.setDestinationEntity(222U);
    msg.x = 0.03733858730728756;
    msg.y = 0.6487531142136914;
    msg.z = 0.8124442834697697;
    msg.vx = 0.674565910199193;
    msg.vy = 0.8627436989204408;
    msg.vz = 0.6608583719215191;
    msg.ax = 0.1286573303046854;
    msg.ay = 0.7514873664933741;
    msg.az = 0.6136767430818025;
    msg.flags = 25581U;

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
    msg.setTimeStamp(0.1421712695223798);
    msg.setSource(48719U);
    msg.setSourceEntity(126U);
    msg.setDestination(32240U);
    msg.setDestinationEntity(18U);
    msg.x = 0.009558034669208793;
    msg.y = 0.12313382837227849;
    msg.z = 0.6818765779474019;
    msg.vx = 0.9527227487808757;
    msg.vy = 0.46310129967738123;
    msg.vz = 0.12319420775365997;
    msg.ax = 0.41293428970657764;
    msg.ay = 0.9481439255503079;
    msg.az = 0.2865308271862994;
    msg.flags = 57246U;

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
    msg.setTimeStamp(0.09982462713952067);
    msg.setSource(38739U);
    msg.setSourceEntity(199U);
    msg.setDestination(52537U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8749422467174794;

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
    msg.setTimeStamp(0.46316383978938214);
    msg.setSource(62449U);
    msg.setSourceEntity(116U);
    msg.setDestination(28417U);
    msg.setDestinationEntity(147U);
    msg.value = 0.3412804008647691;

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
    msg.setTimeStamp(0.21980406594671797);
    msg.setSource(29991U);
    msg.setSourceEntity(74U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6359613046634022;

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
    msg.setTimeStamp(0.678645950426816);
    msg.setSource(28104U);
    msg.setSourceEntity(242U);
    msg.setDestination(65062U);
    msg.setDestinationEntity(190U);
    msg.timeout = 44199U;
    msg.lat = 0.5974815249195825;
    msg.lon = 0.8030861149581106;
    msg.z = 0.5263088041709625;
    msg.z_units = 218U;
    msg.speed = 0.9428906772410198;
    msg.speed_units = 135U;
    msg.roll = 0.5240811975895991;
    msg.pitch = 0.19833922401178716;
    msg.yaw = 0.785681999233433;
    msg.custom.assign("JXMYMIMUHOXBXJVHXQSFVJDOEIRRKJTFQBBAPKYLFADMZZWXTYCYOVBIAONIXLQFKYKZWYCWFTRHTRBMQKE");

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
    msg.setTimeStamp(0.5174480348759771);
    msg.setSource(44357U);
    msg.setSourceEntity(1U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(149U);
    msg.timeout = 28137U;
    msg.lat = 0.6577493138093189;
    msg.lon = 0.1946313657634885;
    msg.z = 0.2670831826767007;
    msg.z_units = 123U;
    msg.speed = 0.12607526397065616;
    msg.speed_units = 1U;
    msg.roll = 0.7592405231555248;
    msg.pitch = 0.00744720879019245;
    msg.yaw = 0.6535774768882229;
    msg.custom.assign("HUACBJQGSQYVOAXMWJOHFMYIIIAVYYRGOUJOEINDRQBTXCNKZLMQQWAJJESXUJZLAXXSDOPCCBDPRMRQRVHIADONERBBTBJMFKPBPG");

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
    msg.setTimeStamp(0.2299602000627018);
    msg.setSource(19790U);
    msg.setSourceEntity(156U);
    msg.setDestination(45429U);
    msg.setDestinationEntity(75U);
    msg.timeout = 28388U;
    msg.lat = 0.9443156878293385;
    msg.lon = 0.3893278544685208;
    msg.z = 0.47872052782490926;
    msg.z_units = 106U;
    msg.speed = 0.4268819962133066;
    msg.speed_units = 56U;
    msg.roll = 0.15079471707410774;
    msg.pitch = 0.7422459681632073;
    msg.yaw = 0.17563816261863874;
    msg.custom.assign("LRJFUXFDKIGGAVJKUGLWDTLGQZPUQSGXTXRYVQILFORDEHLWCWUPTWNUQXQMWGNSKYAURNAUDDIOARUCMYRAUIOLJAKCTJHQRYWBBYCWHHEDPEAWOZEFQVYODJCMNTZPBSAHHEOMRMTBMIBNFGRGXWZPEXVZKSOC");

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
    msg.setTimeStamp(0.839284505354114);
    msg.setSource(8699U);
    msg.setSourceEntity(162U);
    msg.setDestination(59296U);
    msg.setDestinationEntity(116U);
    msg.timeout = 45732U;
    msg.lat = 0.3111740875422705;
    msg.lon = 0.1614302655445401;
    msg.z = 0.826111184623606;
    msg.z_units = 58U;
    msg.speed = 0.3805813453468031;
    msg.speed_units = 111U;
    msg.duration = 39578U;
    msg.radius = 0.600058394267511;
    msg.flags = 6U;
    msg.custom.assign("NOWRJYRHCKLVWGZWVEZACXFEQTYKEGJEIIHDLKXDSBTXZSMYJKNQKUHKNVHCNJRPRZHCEIMOTLPCJPSUW");

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
    msg.setTimeStamp(0.10480614728594406);
    msg.setSource(51535U);
    msg.setSourceEntity(56U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(142U);
    msg.timeout = 45777U;
    msg.lat = 0.2804788059967839;
    msg.lon = 0.07906733798418664;
    msg.z = 0.506224875884625;
    msg.z_units = 253U;
    msg.speed = 0.013927648031838324;
    msg.speed_units = 206U;
    msg.duration = 64753U;
    msg.radius = 0.8318368218076674;
    msg.flags = 69U;
    msg.custom.assign("OKOENWVABNTFWTLHCXQDZKZDMZNJLXXLAIRDANUIMQKFRNQAIWFFHEOECEVOPCECXYPNSZAPYVYMSRLCNJNSWAMGHTKJHFGKIYRSTFITQZVCJYXIUZDOBI");

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
    msg.setTimeStamp(0.8420590410802324);
    msg.setSource(53900U);
    msg.setSourceEntity(190U);
    msg.setDestination(17237U);
    msg.setDestinationEntity(75U);
    msg.timeout = 41396U;
    msg.lat = 0.4857289409326021;
    msg.lon = 0.5926370681500674;
    msg.z = 0.29769406713090396;
    msg.z_units = 62U;
    msg.speed = 0.5684411383765555;
    msg.speed_units = 61U;
    msg.duration = 50213U;
    msg.radius = 0.4972118360011044;
    msg.flags = 213U;
    msg.custom.assign("CVCRWGEBDIPDHHGQURYKNCPTNNEGKQQVLPUECSKMIUUBFZCSOSONQRPAWBKXOAMVHHEFIIQXFBDRIEMXZJFXGODJDTYIAMJEPGJVXMZUJOPJGNUOJOALXYRBGTCZQXRQL");

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
    msg.setTimeStamp(0.7892539567865362);
    msg.setSource(19628U);
    msg.setSourceEntity(129U);
    msg.setDestination(42527U);
    msg.setDestinationEntity(106U);
    msg.custom.assign("XQGILNGECPCPAOALJPRPVUTSDCQPOOHKLIZMDKYMYKNVENPBTRDYWGKWFXGXURCTVEGF");

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
    msg.setTimeStamp(0.23459796031127644);
    msg.setSource(39124U);
    msg.setSourceEntity(40U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(41U);
    msg.custom.assign("RWDTSUJZLHBCKWRLXEBFFMSCAWUDRXWMVKIPBLNMYXFWNFJJBVOWVXYYVCTAMDZNELKQELNVEPMIQEKWBJRLSMAECUULHZEGYPGNJRSTCBMAUOTUVQLRQTLGZTJIJVHPHFRZCHBUHNZTXFIPGXMXTGOMXQGKSVZPFNHSQNKWYXIQDWOZWRHOCKJTNTPCPIHQPJEXA");

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
    msg.setTimeStamp(0.9416995755216448);
    msg.setSource(65517U);
    msg.setSourceEntity(185U);
    msg.setDestination(17519U);
    msg.setDestinationEntity(27U);
    msg.custom.assign("XKNXURJNZRIYTNREKSPOAYXLRPDFMPIFIWFWEMIDITBXDQYJMEVHSHRWVUCTA");

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
    msg.setTimeStamp(0.3778939263563976);
    msg.setSource(3515U);
    msg.setSourceEntity(38U);
    msg.setDestination(3367U);
    msg.setDestinationEntity(83U);
    msg.timeout = 49501U;
    msg.lat = 0.4825047395669526;
    msg.lon = 0.9248291646508198;
    msg.z = 0.2895020466603182;
    msg.z_units = 140U;
    msg.duration = 56232U;
    msg.speed = 0.77443036289831;
    msg.speed_units = 232U;
    msg.type = 23U;
    msg.radius = 0.920981347299032;
    msg.length = 0.7435231455704716;
    msg.bearing = 0.11690747231959153;
    msg.direction = 227U;
    msg.custom.assign("QUWDRPVKNOXWJEJFSQSSEHFYLWUYBBIBRAZBFGRHQXGMHUUDGEENLMATOQSRQYTWTCTGONKZKJSGBC");

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
    msg.setTimeStamp(0.9147024095787194);
    msg.setSource(33288U);
    msg.setSourceEntity(216U);
    msg.setDestination(5416U);
    msg.setDestinationEntity(248U);
    msg.timeout = 58996U;
    msg.lat = 0.5686376308825385;
    msg.lon = 0.6626396429453141;
    msg.z = 0.9161567682047437;
    msg.z_units = 88U;
    msg.duration = 8808U;
    msg.speed = 0.6710752483348725;
    msg.speed_units = 5U;
    msg.type = 106U;
    msg.radius = 0.011803022402939511;
    msg.length = 0.7266476530458095;
    msg.bearing = 0.24973610800315116;
    msg.direction = 42U;
    msg.custom.assign("FDPINVESJAZOIDVH");

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
    msg.setTimeStamp(0.32186228348762624);
    msg.setSource(57109U);
    msg.setSourceEntity(56U);
    msg.setDestination(13612U);
    msg.setDestinationEntity(230U);
    msg.timeout = 10348U;
    msg.lat = 0.49705070506312043;
    msg.lon = 0.8856781812235619;
    msg.z = 0.3047955638883908;
    msg.z_units = 27U;
    msg.duration = 42710U;
    msg.speed = 0.7731614712598834;
    msg.speed_units = 68U;
    msg.type = 75U;
    msg.radius = 0.7031228343210301;
    msg.length = 0.08425100668996821;
    msg.bearing = 0.02279413762617022;
    msg.direction = 61U;
    msg.custom.assign("NFTQTRFTTIJDSNJHVTHASDAWFQRCOARAAYOMVRTJQFLBVELUPSDHUKOWJTVWKJXJGSVXVUWWLTOFMXSKBLGEHYZPNCTGYIBCHWLYSQJCIEBN");

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
    msg.setTimeStamp(0.09165927259806061);
    msg.setSource(3038U);
    msg.setSourceEntity(98U);
    msg.setDestination(12175U);
    msg.setDestinationEntity(18U);
    msg.duration = 7941U;
    msg.custom.assign("DYSETUPGJZOOBXWNXORBZIOCBKCJQUIPUVGMVVFNICPNRPMUYBWWEXPMUDGIVNSCJDHYXLTGRKRMHLWHSKTUUFLEVDZHOZNNJFTGEFMUMFOOBNWAYWFCTEVLXPOXJTLWQAQEQGONZZIKPYCYRFRXCSIFJJDXKLKJRASKUTDCHQFICLVQVDZBP");

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
    msg.setTimeStamp(0.08914350157589912);
    msg.setSource(5985U);
    msg.setSourceEntity(35U);
    msg.setDestination(42983U);
    msg.setDestinationEntity(232U);
    msg.duration = 6294U;
    msg.custom.assign("KSMCQFVHYCUIGBVKHBGEZESKCWIYTOQAJWZKFSMLFQPCIAGSPVEANVPOTFZLLIHXREMORSELERIBFZMBFDWGMJLUJZXDWUBFTIOYYYYUXRTEGDEXGTHHTTSKCYDLVOZIOXADJWPTNHZANDMQNWAIQLYQCKXGUNLSHXBPRBAFSMVJENQOMQSOU");

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
    msg.setTimeStamp(0.3844276864622178);
    msg.setSource(51612U);
    msg.setSourceEntity(158U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(30U);
    msg.duration = 46517U;
    msg.custom.assign("TWPQZCXADYIUV");

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
    msg.setTimeStamp(0.33119496792825487);
    msg.setSource(18196U);
    msg.setSourceEntity(191U);
    msg.setDestination(22267U);
    msg.setDestinationEntity(106U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8100641440335825;
    msg.control.set(tmp_msg_0);
    msg.duration = 30188U;
    msg.custom.assign("DADCVCBBHNIPZJDUOFRNTGYTCRPRPEMTMFHRYHULUUVUFOEKSIWPFEVCMHGVAYE");

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
    msg.setTimeStamp(0.23369178920201894);
    msg.setSource(16539U);
    msg.setSourceEntity(160U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(175U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5609969387874402;
    msg.control.set(tmp_msg_0);
    msg.duration = 5108U;
    msg.custom.assign("VZOOWRCEURULDMQYPLIFAOQNJBJYYIPWIFWXCIATJJNGJJKEHFESVMQIEVGKXZYKNNROICQEHURSYDDJDDZZAIUMDGGZKCO");

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
    msg.setTimeStamp(0.41734870774921695);
    msg.setSource(15406U);
    msg.setSourceEntity(253U);
    msg.setDestination(43265U);
    msg.setDestinationEntity(37U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.2544969980091746;
    msg.control.set(tmp_msg_0);
    msg.duration = 36446U;
    msg.custom.assign("BQBMNPJJUMKTAPFYUOAWAXCPQLUEFWVPKGIIDWIZKMFEGTCYPISFKDQUZOJBOONXSUEBBAADRMSJGKGDOYIVADCLOYBXGBHDUXMHHZRQFNXPUIWZMVVHJZRCLGZIRWFIHKUJLRLCIJUONSDRDWZDNBFPTEJXVPLLYMMTQXYRWKSNQKQSNRPGYVLBBWEPQXRHGTZNHEYSGVAAOXVDOGJTTAHSZHTAFYMCJKCVKFCHSEEWZWCNCRQS");

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
    msg.setTimeStamp(0.695349378076863);
    msg.setSource(10319U);
    msg.setSourceEntity(56U);
    msg.setDestination(56219U);
    msg.setDestinationEntity(114U);
    msg.timeout = 9439U;
    msg.lat = 0.8499207084830077;
    msg.lon = 0.8503708693825234;
    msg.z = 0.13590311098529495;
    msg.z_units = 11U;
    msg.speed = 0.46605981387646667;
    msg.speed_units = 227U;
    msg.bearing = 0.4579699057043949;
    msg.cross_angle = 0.31583584120842156;
    msg.width = 0.8211865541741994;
    msg.length = 0.07298176410163448;
    msg.hstep = 0.24118591765898845;
    msg.coff = 20U;
    msg.alternation = 141U;
    msg.flags = 28U;
    msg.custom.assign("AUGVRZDVURJPJCFZLPORCUICMJYUEDXATRSVTMWMZYKWXHRXCQPUGZFRLFHWKWNTXJPIWBHNBEZWEWQXNIAVFFBMQNMHBLVKPQMRCUXOHEVBASDWIDYSYSALUMYEMIEOKGWHLNCSGAKMEVSZDTFPJFLBCZQQIZSDZFDNFVYSINP");

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
    msg.setTimeStamp(0.952413265023816);
    msg.setSource(9275U);
    msg.setSourceEntity(253U);
    msg.setDestination(19995U);
    msg.setDestinationEntity(34U);
    msg.timeout = 56621U;
    msg.lat = 0.5749394574415623;
    msg.lon = 0.8370451524538414;
    msg.z = 0.34708799669620516;
    msg.z_units = 251U;
    msg.speed = 0.3048996520488392;
    msg.speed_units = 101U;
    msg.bearing = 0.4503145376888712;
    msg.cross_angle = 0.7543766069591985;
    msg.width = 0.11374043135725487;
    msg.length = 0.6886390629063841;
    msg.hstep = 0.990314267601171;
    msg.coff = 216U;
    msg.alternation = 233U;
    msg.flags = 42U;
    msg.custom.assign("GCEGPVOWEFCLKLTZXAAXFPCYPPOFWDMFSVJRJGGRANGNHEEOKCDENAFQRPHUCKCAIKHBSLHXJUUSXOOVKIFPIQIYLYQNSIFJKZTVQXNEBEDBXBUPVWXWAMUTCFEYCDQDMZKYVBRUZQRZFTIGJBNKDSHZXWSUCTOLQSJOZRSHMUTJEBSIINHXDGDMTVAQEIZNOKSTVCAGJQTNWYYUFMGPLXGJUYWBZVOHAHWRPIKMZD");

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
    msg.setTimeStamp(0.5901800237092882);
    msg.setSource(25326U);
    msg.setSourceEntity(136U);
    msg.setDestination(53299U);
    msg.setDestinationEntity(154U);
    msg.timeout = 48626U;
    msg.lat = 0.11567709471818488;
    msg.lon = 0.1753865295868583;
    msg.z = 0.8268499879815843;
    msg.z_units = 211U;
    msg.speed = 0.628403760195161;
    msg.speed_units = 115U;
    msg.bearing = 0.5285995313123193;
    msg.cross_angle = 0.5638969331687279;
    msg.width = 0.05761328838985924;
    msg.length = 0.5254484146666621;
    msg.hstep = 0.7249690887986227;
    msg.coff = 25U;
    msg.alternation = 42U;
    msg.flags = 191U;
    msg.custom.assign("ZJPCETFNYMXJDYRDHLKDVRUGAJFXNLLUUWUQIZPGBCXYVJAPNRKKDSXVLRDOPOPESQSUFOHJCVCIZRDLGEFIBWLOVIHQ");

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
    msg.setTimeStamp(0.2504884903035661);
    msg.setSource(25906U);
    msg.setSourceEntity(22U);
    msg.setDestination(61587U);
    msg.setDestinationEntity(235U);
    msg.timeout = 46390U;
    msg.lat = 0.49328182266639276;
    msg.lon = 0.876544030734627;
    msg.z = 0.82175325244244;
    msg.z_units = 22U;
    msg.speed = 0.9073802728802925;
    msg.speed_units = 98U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.15667083245237845;
    tmp_msg_0.y = 0.3915607667618175;
    tmp_msg_0.z = 0.5020850050118175;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OASHGBQSXUCZXHZKYCMQPNYZORFMICAOQGEUBTEXKRJMBINEOHBPCJOTZVGXVXRNUKWFHKMCPZVVJGCYJIGRTQWXYVDQIUHWWDFBTIDZECJPUUOKOJWGPYILNFGNTVVFBWHLDZLNSPREARJDKDFLAHMWOAPUAXQSDFKJVPEQTGYFMRIHJUZJXLQSLVYPLRLTWGQMHKCINSLBXDEBDATHUMXPISRSSQDGZRTBFBFCYEIAENSONT");

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
    msg.setTimeStamp(0.10145576861973171);
    msg.setSource(3117U);
    msg.setSourceEntity(125U);
    msg.setDestination(48027U);
    msg.setDestinationEntity(244U);
    msg.timeout = 53150U;
    msg.lat = 0.5090469950031309;
    msg.lon = 0.19294113804418855;
    msg.z = 0.4164835816261201;
    msg.z_units = 58U;
    msg.speed = 0.7831118556148916;
    msg.speed_units = 173U;
    msg.custom.assign("ESHIGEIPLHIWWVBFWGFLWHMAPOJVCGUPWAOFHYMCEICINRDLOKQSDNNKZCVAPVOCGQGFEUAISKTSHLQJJXXRTQZRVHTMOZSTOJWZBHBRGMIDVZBANMQYVDKDTAJDPADYMIMWFKBEENQTQHLJPOOTFOZQKTXWNYY");

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
    msg.setTimeStamp(0.8552986408046239);
    msg.setSource(28582U);
    msg.setSourceEntity(159U);
    msg.setDestination(65033U);
    msg.setDestinationEntity(36U);
    msg.timeout = 19694U;
    msg.lat = 0.9927132820351892;
    msg.lon = 0.30217709648881297;
    msg.z = 0.706322875585977;
    msg.z_units = 199U;
    msg.speed = 0.24547212212569014;
    msg.speed_units = 159U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7928808310781557;
    tmp_msg_0.y = 0.01614056920765894;
    tmp_msg_0.z = 0.2978384841257301;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CINUBPQPWTXZDQPZGFDCFFYNLSTSWIDJDTXELPPZJCPFQOFETPUHRHUTGVSZLWHWBOZGKKX");

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
    msg.setTimeStamp(0.47497961771503416);
    msg.setSource(43613U);
    msg.setSourceEntity(73U);
    msg.setDestination(19234U);
    msg.setDestinationEntity(73U);
    msg.x = 0.7725108095981619;
    msg.y = 0.07008774303113108;
    msg.z = 0.3985739342838358;

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
    msg.setTimeStamp(0.22329272715639303);
    msg.setSource(54185U);
    msg.setSourceEntity(139U);
    msg.setDestination(51725U);
    msg.setDestinationEntity(195U);
    msg.x = 0.6347997349720411;
    msg.y = 0.7869470935133225;
    msg.z = 0.3680246953582056;

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
    msg.setTimeStamp(0.14405723401817128);
    msg.setSource(20255U);
    msg.setSourceEntity(4U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(252U);
    msg.x = 0.3804846204824104;
    msg.y = 0.4488555972892485;
    msg.z = 0.13042806576068688;

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
    msg.setTimeStamp(0.11070848920944099);
    msg.setSource(56828U);
    msg.setSourceEntity(226U);
    msg.setDestination(14094U);
    msg.setDestinationEntity(18U);
    msg.timeout = 51851U;
    msg.lat = 0.5870862188983368;
    msg.lon = 0.9186479553468183;
    msg.z = 0.5003505996908898;
    msg.z_units = 15U;
    msg.amplitude = 0.8116238302141477;
    msg.pitch = 0.7349415144321615;
    msg.speed = 0.09383009263882802;
    msg.speed_units = 86U;
    msg.custom.assign("VSLQXYBQMKFHDKZYZLCPEGLQJMSJBYOZWRPCMKEAMUWGSMRHQFNHBEMRIJXTTHBBPQRYNUBIOLHGWTFGWWBWRTDJSYYXRPRAVICJDKDBMXIQQZLLEVCRRQOEDFUMCZDIEVFAVDMULTHFAUPJPOOYVCWBSAANGSZNUASERINIPEKAHFFKEHFOXPZLTFVPDGXHKMCK");

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
    msg.setTimeStamp(0.3999531657357147);
    msg.setSource(25321U);
    msg.setSourceEntity(128U);
    msg.setDestination(2255U);
    msg.setDestinationEntity(31U);
    msg.timeout = 56896U;
    msg.lat = 0.9980485799519656;
    msg.lon = 0.8236287954787191;
    msg.z = 0.7451076067691618;
    msg.z_units = 191U;
    msg.amplitude = 0.9427224919397565;
    msg.pitch = 0.881797819751775;
    msg.speed = 0.6893133059179906;
    msg.speed_units = 85U;
    msg.custom.assign("UFNRSBKNIOUXTRKGYRTDAFFHWKMIBEMDEHOYOMVDXZGWYZGTJBFVZDPWPXFEHBLQYAMAVNRCRQICAQUYFGXZXFFLWVLKBXISPTAVPGMLZBSMQTKUKXYPNMSLZEOXWACFTOSPQVJNVJDJSBMATRRHAETPUDZRSBWKNVXFIAOYJTNVYHHWPQJHICDJOGNKQSLKLUOUMDDLIWZVBWRCJUPGEHEGBUNUQIOOQLASEIGEZKRHGIQCH");

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
    msg.setTimeStamp(0.4256681460276307);
    msg.setSource(7076U);
    msg.setSourceEntity(45U);
    msg.setDestination(33234U);
    msg.setDestinationEntity(71U);
    msg.timeout = 29436U;
    msg.lat = 0.737690091443273;
    msg.lon = 0.7330455550831566;
    msg.z = 0.043271658727982776;
    msg.z_units = 147U;
    msg.amplitude = 0.6178963221917094;
    msg.pitch = 0.7217257732382686;
    msg.speed = 0.26891785549791536;
    msg.speed_units = 208U;
    msg.custom.assign("UQNGCSDFXBTCXSRRLHFGCJMBTBZUGKARKICJIIDTSUOAAIMBMXATMF");

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
    msg.setTimeStamp(0.20955844524901746);
    msg.setSource(57513U);
    msg.setSourceEntity(51U);
    msg.setDestination(48606U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.05069249661611641);
    msg.setSource(51162U);
    msg.setSourceEntity(241U);
    msg.setDestination(11170U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.5026501119131623);
    msg.setSource(39350U);
    msg.setSourceEntity(204U);
    msg.setDestination(41868U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.8498930507178892);
    msg.setSource(608U);
    msg.setSourceEntity(30U);
    msg.setDestination(43707U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.8086796577437649;
    msg.lon = 0.9333652584468923;
    msg.z = 0.021668378457815884;
    msg.z_units = 12U;
    msg.radius = 0.024980617055902044;
    msg.duration = 15165U;
    msg.speed = 0.3937790621239121;
    msg.speed_units = 21U;
    msg.custom.assign("IHDPURKEKJKAEHKSHCOMAMOUJHXACNIDQNRLCKCXSXPQTREVWFATRHJFXZGVJOCYOTSMKHNPGDPCDYQAJMMCXLBZKMULDMDWNNFQCLOBPIGNPLTYRITUXBQTTDSGTTYDIZNBKKYLBZAPRXAHUUSOSEKXGANVMQRWUYWEECZQ");

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
    msg.setTimeStamp(0.6649105200030736);
    msg.setSource(5782U);
    msg.setSourceEntity(66U);
    msg.setDestination(35572U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.006109920919954881;
    msg.lon = 0.08420937860105471;
    msg.z = 0.21378170092927895;
    msg.z_units = 214U;
    msg.radius = 0.5572122580155712;
    msg.duration = 16078U;
    msg.speed = 0.5152412285822502;
    msg.speed_units = 231U;
    msg.custom.assign("MWRPDAZVRLJGNSPTWLSAHNDUKUEISMAXUVOVSMMDQNJDRGSMFCCQRCHEKQHDYSLKVBSZGKKXWXHJWULQMCBGTEIERPBULBXBLKYQFWWAZNZRCNLDVBHFHIAPJYXZJYCIWYTAPNBHMEOEBGNNXQDEOOQTOBZKTFCDEOPVUBFGHYFXEORIZCOOYCFQTZIPJEQYRKTOHYUPWNPXHRLNAGVYJCXKIWUFDS");

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
    msg.setTimeStamp(0.8299169518960168);
    msg.setSource(8994U);
    msg.setSourceEntity(94U);
    msg.setDestination(29991U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.9981813990196375;
    msg.lon = 0.3875027207556868;
    msg.z = 0.4148327007235887;
    msg.z_units = 232U;
    msg.radius = 0.40766094300028544;
    msg.duration = 9744U;
    msg.speed = 0.4971900875926103;
    msg.speed_units = 118U;
    msg.custom.assign("YUDTMIIEVSMRZKGDCRHTNOPFKTRZJFPDZSTDGHBEYWUWMRI");

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
    msg.setTimeStamp(0.3248210620909613);
    msg.setSource(13764U);
    msg.setSourceEntity(229U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(38U);
    msg.timeout = 53340U;
    msg.flags = 208U;
    msg.lat = 0.9172804712345725;
    msg.lon = 0.6868691404691974;
    msg.start_z = 0.517448233553948;
    msg.start_z_units = 93U;
    msg.end_z = 0.07746650883064787;
    msg.end_z_units = 97U;
    msg.radius = 0.8974155542037543;
    msg.speed = 0.9739001984228929;
    msg.speed_units = 163U;
    msg.custom.assign("WKJUOUPTYDMBFJLQCHTOQICHBLNHLVPAGDXJBFMIMNIWGWKMYPAWDNVIKLSYJBMPVJOSKAEZXSZTEHXSUFRCRPRWFTNVCBLACXRVPAJNZIEULQTWUUESGFRJMQNCCJQHDSRTAFJOIQUXDDOCVFZGKHGBDEHYURLORFUIFVJPKWRWQKDMSNTCGMYCEWPBHYSPOZVZMUIQNYZWYYLXTHEXDATTIGDBSF");

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
    msg.setTimeStamp(0.6768816942985372);
    msg.setSource(5057U);
    msg.setSourceEntity(26U);
    msg.setDestination(34488U);
    msg.setDestinationEntity(209U);
    msg.timeout = 32172U;
    msg.flags = 162U;
    msg.lat = 0.37984059719755237;
    msg.lon = 0.6028655450954478;
    msg.start_z = 0.48442057862296606;
    msg.start_z_units = 80U;
    msg.end_z = 0.38001296830054276;
    msg.end_z_units = 125U;
    msg.radius = 0.1864136959706848;
    msg.speed = 0.33743742087894724;
    msg.speed_units = 39U;
    msg.custom.assign("IFUPGKGOHJZBWQVPWEMGXJWUCBDGEZUTOVRYHHUXJTFTIQDIZYOFOZNQLSEQXIHSKMGLPRUQVNOYBAWYMCOKNPYZBASXTICGYVASMKMLPVSXLXWUPNJWGBZZNDISQKRADDSSFKYMXSFPYQAXYSETHUTHPJDHHRIKCEQNJCFORRJADQCNOAWRKVIXEELFYFZMMVTKJBULEWTECTGKNPLVFBWFOV");

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
    msg.setTimeStamp(0.2818783020631799);
    msg.setSource(49528U);
    msg.setSourceEntity(34U);
    msg.setDestination(43554U);
    msg.setDestinationEntity(183U);
    msg.timeout = 37662U;
    msg.flags = 20U;
    msg.lat = 0.47178739030600714;
    msg.lon = 0.4008135629806825;
    msg.start_z = 0.4190414730990608;
    msg.start_z_units = 61U;
    msg.end_z = 0.5919037063675893;
    msg.end_z_units = 239U;
    msg.radius = 0.5869205022917169;
    msg.speed = 0.25492412345437876;
    msg.speed_units = 220U;
    msg.custom.assign("DYLYQEVKWNGJOTRKEVSKIOANEJLABRCXFIKGJIRWZHCPLIURKRLXVBIWMCALOCBYYHAOOUGNMWAWHJJZAYUGCXWQECQXETIXUHQQJVFJVJLEKQZBUWEYBPFKVLMAZMSSSYNTQFGFDXKMHSPFQQRYFNSPXHHMISR");

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
    msg.setTimeStamp(0.6267844850079084);
    msg.setSource(17813U);
    msg.setSourceEntity(241U);
    msg.setDestination(57214U);
    msg.setDestinationEntity(174U);
    msg.timeout = 63329U;
    msg.lat = 0.3951231298306729;
    msg.lon = 0.6020522688469364;
    msg.z = 0.9618840060925672;
    msg.z_units = 169U;
    msg.speed = 0.04045533309899374;
    msg.speed_units = 182U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.469625457452543;
    tmp_msg_0.y = 0.3753654913497517;
    tmp_msg_0.z = 0.9945853808568061;
    tmp_msg_0.t = 0.9761398862920041;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NSMJDMDGFXTMTSSRPRLDINYRYHZYILWBIWVPJDCQLTZCOZQKFQONBBKJGJSMXOEZMENSGXOECWAPHEHAICYHFEJKUIBQ");

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
    msg.setTimeStamp(0.25408273238407775);
    msg.setSource(25898U);
    msg.setSourceEntity(127U);
    msg.setDestination(63780U);
    msg.setDestinationEntity(150U);
    msg.timeout = 22998U;
    msg.lat = 0.1712694361935697;
    msg.lon = 0.5769465015248915;
    msg.z = 0.2801217244589923;
    msg.z_units = 207U;
    msg.speed = 0.3318203422074234;
    msg.speed_units = 143U;
    msg.custom.assign("MSLSNUKJRPWGLXTHNQGXVFVTAKMQEGTOXKZWEGCJCAFULIDKSMMBG");

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
    msg.setTimeStamp(0.47886627302370677);
    msg.setSource(31162U);
    msg.setSourceEntity(74U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(89U);
    msg.timeout = 9773U;
    msg.lat = 0.24312034279293682;
    msg.lon = 0.3947538224728975;
    msg.z = 0.6817138411327689;
    msg.z_units = 100U;
    msg.speed = 0.05484847531867676;
    msg.speed_units = 113U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6552701108912325;
    tmp_msg_0.y = 0.1594855902168436;
    tmp_msg_0.z = 0.9496893402393163;
    tmp_msg_0.t = 0.24739303602735696;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OCEXLADAYPNKZNTKQRDAOGOCGJASCBEJSBDROWNPQSMSCSWSTFJUPVKUGQNNBVVXUZVYPQCZOXRCPZPYMWUECISRMJNVEVJVOWTCTHHALAKE");

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
    msg.setTimeStamp(0.7493929695012005);
    msg.setSource(57603U);
    msg.setSourceEntity(42U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(197U);
    msg.x = 0.4090553451847597;
    msg.y = 0.7994592642257;
    msg.z = 0.9836311725339334;
    msg.t = 0.8298259836580569;

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
    msg.setTimeStamp(0.2543595009663947);
    msg.setSource(43076U);
    msg.setSourceEntity(181U);
    msg.setDestination(39370U);
    msg.setDestinationEntity(232U);
    msg.x = 0.8406367590829442;
    msg.y = 0.41015567296085353;
    msg.z = 0.1669182739233812;
    msg.t = 0.030785470897632727;

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
    msg.setTimeStamp(0.8361142387599292);
    msg.setSource(26824U);
    msg.setSourceEntity(251U);
    msg.setDestination(22008U);
    msg.setDestinationEntity(210U);
    msg.x = 0.04470158913109534;
    msg.y = 0.9162734592031678;
    msg.z = 0.6327639197233548;
    msg.t = 0.5295135283010923;

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
    msg.setTimeStamp(0.04622121575472471);
    msg.setSource(12309U);
    msg.setSourceEntity(19U);
    msg.setDestination(26459U);
    msg.setDestinationEntity(136U);
    msg.timeout = 15476U;
    msg.name.assign("WKPTXNSJOMHVNNYDWBYIJSJPAHKVQHDKPSAHMEUVYKOPOQVHCCFFFSLCXBRMHPVLUPDAYATODZXEEYDIFRPZIGECXCMYKGKQRHCMGRKSMSGLDIZOVTEVKNRAUWAFEXSLTFHBBQENUGWRTVQUGTQLPHUW");
    msg.custom.assign("JVNBDFRNVRGEMMCWZOCYUJLWBUNHAPZGDLTVSNKGAKTMEACSYVXAMFVSEKDJQWXQROHWWHHRMSADVMLFXUCYDETVPNZRIW");

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
    msg.setTimeStamp(0.8249324653251857);
    msg.setSource(20685U);
    msg.setSourceEntity(0U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(213U);
    msg.timeout = 4109U;
    msg.name.assign("GRITFHYAGZICZHRCLDNZKPBEQQHPZRMHQVVODZEZUHGEIKRRWFUFATGQVNCJBXXWGXAVYVAUMIILDAFVLDTDQOLJPTXDMARDQPECEG");
    msg.custom.assign("QDGTXUDJOJHHBWFUPZXTYMSEPGUXLZSIOWRANOCMRFZSYRLOYIVRQHLZFCDILRSVBHOWIRKKDDXTTLEDVBZXKQRJUGSIFLNHILQPGAZSCVGOOJNMXHQNKOQVCKFBZLTCEKQVCJUYAPPEXMEWAFQDRFEPUQJHBIYSPBIWDTKETSYVCXBVGGNMHWRNNPEZYHEKAJALKFJMABHGMMFJONLCEBYFZCIRSVQAWWXOIYMXCJGMNSYNTP");

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
    msg.setTimeStamp(0.4873838373414562);
    msg.setSource(34935U);
    msg.setSourceEntity(19U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(160U);
    msg.timeout = 33498U;
    msg.name.assign("KLZYEYZNGBV");
    msg.custom.assign("VRACJBTCHTMFDHNBAJI");

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
    msg.setTimeStamp(0.0784790826871875);
    msg.setSource(20913U);
    msg.setSourceEntity(190U);
    msg.setDestination(59852U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.7553579337708756;
    msg.lon = 0.33244277534915345;
    msg.z = 0.0775469578410769;
    msg.z_units = 134U;
    msg.speed = 0.800503121392064;
    msg.speed_units = 93U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6180701180409824;
    tmp_msg_0.y = 0.10733613856481561;
    tmp_msg_0.z = 0.217331952509341;
    tmp_msg_0.t = 0.2235640287845353;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.2025704220301171;
    msg.custom.assign("JCANTQSVKXGGKGLMKDEZWGDVHJQEKSTNHFYDAUPTTTCGRBAMFECNDSINILM");

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
    msg.setTimeStamp(0.6017244208433337);
    msg.setSource(11773U);
    msg.setSourceEntity(102U);
    msg.setDestination(22408U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.6392605098736428;
    msg.lon = 0.6629124216844793;
    msg.z = 0.14008131790366196;
    msg.z_units = 245U;
    msg.speed = 0.1402297086052865;
    msg.speed_units = 219U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.19976035799585257;
    tmp_msg_0.y = 0.2435494520774497;
    tmp_msg_0.z = 0.2185568858177055;
    tmp_msg_0.t = 0.898724177926378;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.29323785731658436;
    msg.custom.assign("QBCQPYYNUUBQGGCKTWHEWJOTDCLPARXMROZPWWFCTJNZWAJLUFZXEGOQOHRGNSRRCWBUMTSXJILAJKERWUBUQCINYCBOPDODJPQNAHCUVHLBTSHMAVMPDSAAOVIQXOIHZEFLLSKVIFTSWMHFDRNRYKQGBFIIYXPUFTZCSBWXIAUVUNEKXJENPBXDHYLGKPZKSIVFZKQXGQFZKKRWCMYDDZLMFHMTMSBYYDNXTSTVELVOAAPJZMEGJLND");

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
    msg.setTimeStamp(0.36565496955531507);
    msg.setSource(37860U);
    msg.setSourceEntity(130U);
    msg.setDestination(23333U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.8924539385870308;
    msg.lon = 0.505871703691443;
    msg.z = 0.6089130818133437;
    msg.z_units = 191U;
    msg.speed = 0.3612387375912631;
    msg.speed_units = 92U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.08381813056201459;
    tmp_msg_0.y = 0.09510551257219657;
    tmp_msg_0.z = 0.0970988204279043;
    tmp_msg_0.t = 0.6613462898524707;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7959355043791688;
    msg.custom.assign("XLBDYZVTAAGOTIUFQMRESNJLHCUIXGWFAMXHTRKRFSOGEFDTOIUXYOIZRLHKELAPLEV");

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
    msg.setTimeStamp(0.7887277131496149);
    msg.setSource(64254U);
    msg.setSourceEntity(82U);
    msg.setDestination(26100U);
    msg.setDestinationEntity(31U);
    msg.vid = 47890U;
    msg.off_x = 0.1742754719366787;
    msg.off_y = 0.968637360286123;
    msg.off_z = 0.6566035588641488;

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
    msg.setTimeStamp(0.31479056683478723);
    msg.setSource(65365U);
    msg.setSourceEntity(194U);
    msg.setDestination(52430U);
    msg.setDestinationEntity(130U);
    msg.vid = 14175U;
    msg.off_x = 0.06349092814574109;
    msg.off_y = 0.6324700189073217;
    msg.off_z = 0.49905290973162386;

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
    msg.setTimeStamp(0.854577804192995);
    msg.setSource(7535U);
    msg.setSourceEntity(14U);
    msg.setDestination(23190U);
    msg.setDestinationEntity(206U);
    msg.vid = 61861U;
    msg.off_x = 0.14076778125387157;
    msg.off_y = 0.5868061030674857;
    msg.off_z = 0.6055623752214179;

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
    msg.setTimeStamp(0.9471845021828437);
    msg.setSource(22675U);
    msg.setSourceEntity(118U);
    msg.setDestination(35276U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.20138848422943179);
    msg.setSource(45179U);
    msg.setSourceEntity(36U);
    msg.setDestination(26044U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.43349079318673645);
    msg.setSource(49650U);
    msg.setSourceEntity(197U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.7945928882698786);
    msg.setSource(4296U);
    msg.setSourceEntity(142U);
    msg.setDestination(45650U);
    msg.setDestinationEntity(75U);
    msg.mid = 7657U;

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
    msg.setTimeStamp(0.009497277957488226);
    msg.setSource(18372U);
    msg.setSourceEntity(185U);
    msg.setDestination(39517U);
    msg.setDestinationEntity(227U);
    msg.mid = 4891U;

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
    msg.setTimeStamp(0.21428062007665472);
    msg.setSource(2183U);
    msg.setSourceEntity(10U);
    msg.setDestination(27874U);
    msg.setDestinationEntity(205U);
    msg.mid = 45272U;

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
    msg.setTimeStamp(0.8696496492034917);
    msg.setSource(7255U);
    msg.setSourceEntity(48U);
    msg.setDestination(58782U);
    msg.setDestinationEntity(84U);
    msg.state = 164U;
    msg.eta = 6157U;
    msg.info.assign("GDOAVQMUZPLBJBVQOJDFBCPTCXCYXCYRTKPNWFZGFWINIULGSLJQUEXHQMQGZIHEIZWQSIVVLJKSRWIRRMRRNTGKTBYHWPBHATDQPYGBYMTEAZMEONHQWQLNUXYWKJYVUALMOXVOWAIQVKPWOOBBCBSFDUAEUEOPNMDEXSJPJLEHSTEAGDLSAJKPBVUFSDUHDZGHTJAKPNGLTDVFESZ");

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
    msg.setTimeStamp(0.5950416927715416);
    msg.setSource(22992U);
    msg.setSourceEntity(89U);
    msg.setDestination(60179U);
    msg.setDestinationEntity(192U);
    msg.state = 132U;
    msg.eta = 21767U;
    msg.info.assign("HDTRNUEIDZUPSFFQCULAVTQVVIVRFCFOAJGKKCENUYUMEHSBMEKQRWIPTWBKTCOUCVKXCXNZQVSQWQHJVTJXPPKNOEWPGWUASZTDJQPNRFCHIJOB");

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
    msg.setTimeStamp(0.8539038479643529);
    msg.setSource(56782U);
    msg.setSourceEntity(96U);
    msg.setDestination(20159U);
    msg.setDestinationEntity(239U);
    msg.state = 132U;
    msg.eta = 56669U;
    msg.info.assign("AKBTUNWLLFRBQNRAHEKGXCROUZSWFGZQMPLSDSZSBJKRMKJVQVTGKXWTDXSFYCGDDOJHFYAIPHZIMOIUWVQLOXVWSTDTIQCFLFTUEWHZQWBHMINRNKPAPXCPEWQXMZCJZPANAUVPEUJIMDHSLEVKLMSENQLYSTDOYAOOYIRLAPZSGVFIBFGYGGAHYUTCNDJGIICVPZCQWWECJYRXVTHEBBALCKYDDNRXUUGEQTJJZBNXXFBOVYMORNBJHEUK");

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
    msg.setTimeStamp(0.177234394719758);
    msg.setSource(162U);
    msg.setSourceEntity(234U);
    msg.setDestination(15685U);
    msg.setDestinationEntity(145U);
    msg.system = 5420U;
    msg.duration = 33452U;
    msg.speed = 0.06125824746383002;
    msg.speed_units = 214U;
    msg.x = 0.730474489754177;
    msg.y = 0.3044648860616562;
    msg.z = 0.8798060810576478;
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
    msg.setTimeStamp(0.6297190065965778);
    msg.setSource(23007U);
    msg.setSourceEntity(61U);
    msg.setDestination(26685U);
    msg.setDestinationEntity(224U);
    msg.system = 9769U;
    msg.duration = 53878U;
    msg.speed = 0.06389724475563985;
    msg.speed_units = 11U;
    msg.x = 0.9804752728935425;
    msg.y = 0.7399845944596156;
    msg.z = 0.7498744327628271;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.3252791040972981);
    msg.setSource(36895U);
    msg.setSourceEntity(205U);
    msg.setDestination(24117U);
    msg.setDestinationEntity(101U);
    msg.system = 1747U;
    msg.duration = 11771U;
    msg.speed = 0.9078262250578896;
    msg.speed_units = 251U;
    msg.x = 0.5951567065354401;
    msg.y = 0.27895805186286626;
    msg.z = 0.36948704808319566;
    msg.z_units = 99U;

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
    msg.setTimeStamp(0.36369108988350696);
    msg.setSource(17093U);
    msg.setSourceEntity(81U);
    msg.setDestination(24347U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.02388120925578041;
    msg.lon = 0.8783376302372876;
    msg.speed = 0.3131041659969651;
    msg.speed_units = 226U;
    msg.duration = 13810U;
    msg.sys_a = 666U;
    msg.sys_b = 32877U;
    msg.move_threshold = 0.658489106599782;

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
    msg.setTimeStamp(0.7353706570989654);
    msg.setSource(41548U);
    msg.setSourceEntity(222U);
    msg.setDestination(14072U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.5189998512667299;
    msg.lon = 0.42579509182991127;
    msg.speed = 0.8094146542548835;
    msg.speed_units = 233U;
    msg.duration = 64372U;
    msg.sys_a = 40254U;
    msg.sys_b = 7676U;
    msg.move_threshold = 0.4913297184874048;

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
    msg.setTimeStamp(0.6773156541597175);
    msg.setSource(37472U);
    msg.setSourceEntity(36U);
    msg.setDestination(41977U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.6545582470296025;
    msg.lon = 0.8534685056379155;
    msg.speed = 0.31601801499493365;
    msg.speed_units = 77U;
    msg.duration = 48865U;
    msg.sys_a = 42548U;
    msg.sys_b = 51651U;
    msg.move_threshold = 0.2522112426467932;

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
    msg.setTimeStamp(0.6351571679840953);
    msg.setSource(22278U);
    msg.setSourceEntity(101U);
    msg.setDestination(31106U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.2669649521145764;
    msg.lon = 0.025232255277954807;
    msg.z = 0.3938770152701352;
    msg.z_units = 109U;
    msg.speed = 0.5132838041245383;
    msg.speed_units = 12U;
    msg.custom.assign("GPBVFTLOHZGSXJLADSPMWIULDKXSKRZTAYUGUDZCVGNJRNEHKHDFXTUEZGCNXKAPHRYFJIPONFMQCTWHVINBJHDZERMRPLQXEIAYJTLZKCPCEZIWBHYQGPONWRBVYDKMGZVCOJOSFNCYFWRNSQFAKWACBLQMVYQIFXATILLUTPVAYGCFDHKQBXOQSWMHIAJETWXMYECKMEUNVWFOVBMUPMZRXVDHOSGDRBP");

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
    msg.setTimeStamp(0.5796673409404013);
    msg.setSource(905U);
    msg.setSourceEntity(180U);
    msg.setDestination(6114U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.7572102293139616;
    msg.lon = 0.41183988447933584;
    msg.z = 0.18617755101776023;
    msg.z_units = 121U;
    msg.speed = 0.2775472977485808;
    msg.speed_units = 233U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7652107264724102;
    tmp_msg_0.lon = 0.504273093394323;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TBWZLXVZXNFOPPAUQUGUOYGHKFWFAPVIGRNPKQHFCXGDNNFSWZSJHZDZJEMDEQCSVNIUKTPCLSMRAPJJIWSFGJTKGIYKMTHNJUWHSUXUVGSZUBMTZXLAAAXLECQPHTMXQEWVLMXNIFFLTDOZQEYIOCEYKRRFZVDVTBGHQZEYOMAYJJLTDHKRBLYDBPKCJCBDWRBCLKVCMVQNOPEMXHHSTWYVRPOESWCBONIADIYFQBR");

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
    msg.setTimeStamp(0.3307908807134369);
    msg.setSource(38622U);
    msg.setSourceEntity(76U);
    msg.setDestination(17108U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.194382414035716;
    msg.lon = 0.35557995238295903;
    msg.z = 0.2714782272992142;
    msg.z_units = 145U;
    msg.speed = 0.9798593949524902;
    msg.speed_units = 124U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.21840841084281604;
    tmp_msg_0.lon = 0.056707182496053665;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CHLPDYQHGOQRXKXRUEELEOPWIUYVCLRTZNWHJPFTQDINPUTRKSIQDPJCKNHWYYWLLYRATJNZKNZIVJNODXXLQZVAECAZUKKOSSIJZGMBMINNHMFLYHKEVKDASVABQGBRTMJNWTHUDLJ");

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
    msg.setTimeStamp(0.4177983143322299);
    msg.setSource(29029U);
    msg.setSourceEntity(20U);
    msg.setDestination(32072U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.03923160294793948;
    msg.lon = 0.01740196595515553;

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
    msg.setTimeStamp(0.41727110833123304);
    msg.setSource(12191U);
    msg.setSourceEntity(83U);
    msg.setDestination(731U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.5877704560358669;
    msg.lon = 0.45557311804286627;

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
    msg.setTimeStamp(0.44545368388487694);
    msg.setSource(52696U);
    msg.setSourceEntity(131U);
    msg.setDestination(8462U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.5992486392613849;
    msg.lon = 0.1451043521345552;

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
    msg.setTimeStamp(0.36824334883849197);
    msg.setSource(25406U);
    msg.setSourceEntity(24U);
    msg.setDestination(8221U);
    msg.setDestinationEntity(221U);
    msg.timeout = 42817U;
    msg.lat = 0.2263228509995474;
    msg.lon = 0.1943636793185617;
    msg.z = 0.056832273036496295;
    msg.z_units = 106U;
    msg.pitch = 0.9447591507339458;
    msg.amplitude = 0.7678949631050975;
    msg.duration = 14866U;
    msg.speed = 0.06504114432373842;
    msg.speed_units = 177U;
    msg.radius = 0.17394619317586357;
    msg.direction = 231U;
    msg.custom.assign("YVCYQPPJONLURWJJJZEESCMGDACRTRBWINKOMNEEKEWHZCHLEXNARKYLPEZIEQNHTDTGAUUULPAQYAFBNUTVOOODHJKTSWWVGWDAXCFXFXMRBIXHXWVEFSFNFAPQVLWALYDSCZLTJAOWMLSFBNQPSMMCGYHMTOZDMPSSYDBZENHZGGCVRVGBIISMKITBMTBJORQVUIQPZKPQDHKVJFKSCD");

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
    msg.setTimeStamp(0.39089973246602383);
    msg.setSource(24712U);
    msg.setSourceEntity(129U);
    msg.setDestination(28028U);
    msg.setDestinationEntity(48U);
    msg.timeout = 13749U;
    msg.lat = 0.6514513531467561;
    msg.lon = 0.5802401912617908;
    msg.z = 0.6056778364353675;
    msg.z_units = 134U;
    msg.pitch = 0.14667148219061754;
    msg.amplitude = 0.47298775872736876;
    msg.duration = 57904U;
    msg.speed = 0.5246873299519252;
    msg.speed_units = 94U;
    msg.radius = 0.7179434909745437;
    msg.direction = 40U;
    msg.custom.assign("MLPXXMZYQFLTESKQDDXCFEHQYMCKFTGJLPHDEIYXQCIQPVVCTJOTVKNLVWSYKNFZHPPMANVCURECIHOBLDWBGUAQJBSLIZRLTUQDRYAETRDDDFSPUIVAZCGKUWHOHVYEULOOJWXKWTCPGIFQIQMTCXGMOZNDPBFHIWBEMOOZLPZANRAFMFINZYMRVFHVXCTHKWAJRNJJUUSGENWWBRUEKABGKYAVBORLKQJDZNRGWEBXSSSXYJPGITJXS");

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
    msg.setTimeStamp(0.1105804321042495);
    msg.setSource(5653U);
    msg.setSourceEntity(232U);
    msg.setDestination(12323U);
    msg.setDestinationEntity(73U);
    msg.timeout = 9708U;
    msg.lat = 0.20576560558978163;
    msg.lon = 0.3176786892793303;
    msg.z = 0.4414226894156076;
    msg.z_units = 1U;
    msg.pitch = 0.5903797012047246;
    msg.amplitude = 0.8241717057487012;
    msg.duration = 48038U;
    msg.speed = 0.0719954521954771;
    msg.speed_units = 87U;
    msg.radius = 0.09630689699500505;
    msg.direction = 241U;
    msg.custom.assign("OTDUDRIILDWGLQRQFFYKPMWIFQNCUIKHSPZYIEPHKPTGJHCGZWWAMQVJUAVLHOGCOMTFEVATJGAJXBDCSEIFXVIHOT");

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
    msg.setTimeStamp(0.6075342308507551);
    msg.setSource(8791U);
    msg.setSourceEntity(117U);
    msg.setDestination(13129U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("SQNDLTEPFMUSQIASVDRUALZZLRZOTHFLNEBOPBEXHXHYURYWCCOQRKQNIYPVDIWGIPASLCMTJDLZALPHCZAJMPNQBTRCUYLOOBSEANUMOGVRCFNWGJVSDLDFKZTOETREIXRXCBUKFDQVJMIHFQKFBKGXPEYRXDWNPHKVWWFVNQZTJYENKUJOYSMBWOTZKAMGBSHIFPMSJYYQWFVEVKGHEPGIJCXGQR");
    msg.reference_frame = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7989U;
    tmp_msg_0.off_x = 0.8153946881486224;
    tmp_msg_0.off_y = 0.6504519835348258;
    tmp_msg_0.off_z = 0.14934248221343394;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZXQTVQOWAWIWXJDCYHQFTFASWHSUXCKMQGPRVMNCVMEJMDYWKHGMFSXYZCZUJZUWFBQLCATVGXYBASNQWXJPIVTYILSVDBHXOHYPKUNIELREMLNLKZANIOIICKOKOZDXPSNEKPUTLRGXFNPGDPUEPCFKVJSTWTROGJDSCYRLEYOINEBHHULABYBJEWJLEGRZQTAXUKUMYLRQHOHWDDPIEGSRCFMJGOBZMKZFRVFHRCJBIVBBVAAOAPDNZ");

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
    msg.setTimeStamp(0.3153686674101138);
    msg.setSource(55554U);
    msg.setSourceEntity(214U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(124U);
    msg.formation_name.assign("RJUTKLTPLJCCBXQTKUJOQAIREDENOVXXNTRPPYDWUVOOURSMZWIATOFALPGZNKQHAXDWDHCQFIQEKFUVBWPCSCQGVTQOQCGXSHWYBUWEPMEDFSTWAWYKZEICQNONKIRUBOMDFXWTZ");
    msg.reference_frame = 84U;
    msg.custom.assign("ZCCNRXBJZRSQKXID");

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
    msg.setTimeStamp(0.5836715484955287);
    msg.setSource(61211U);
    msg.setSourceEntity(89U);
    msg.setDestination(4606U);
    msg.setDestinationEntity(55U);
    msg.formation_name.assign("YAPPSRSVJRCZCKIOHCOXIRIGPFELEDTPNQBDPAKSKBGVIU");
    msg.reference_frame = 134U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49859U;
    tmp_msg_0.off_x = 0.4200440746615356;
    tmp_msg_0.off_y = 0.7116052166266963;
    tmp_msg_0.off_z = 0.38796542491583286;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BASWOGHHNDECEWCVNEHQIBMOHTAVGPFZEBJVJQXMMKKSPIVCLJOICCAUZPUXFOGGCEQHRYVRBTOHNSWCBIJSEBTFNOOJXUAUVUGZLMWVMTDSZPPVXQQMZQTXUGVKZLDPILPGBIMTKYSWYKCWZHFJIBKOABSRGBSZKKDIFMQCFYEX");

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
    msg.setTimeStamp(0.01812692334883137);
    msg.setSource(8406U);
    msg.setSourceEntity(50U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("AVOZSPHSWZKFPDZMUEEDDKLYFHZMMQXWOCGIXGONCRJAHMNBRKUNPE");
    msg.formation_name.assign("RUYISCKUHXEOQDLOUUKVVFECAUCGHSIOODRQGPIZETXMBKEUMXPMHZXXWCLHMALVTBFFULHWYPSVZNSMJWNPANQQXKLAZDJARZBRANUFZDRICWJQIOVQHKTTZGSKYTTXEEDVZGROHORMPPVZDLWJGPMQHDHDKBICWDQPXYMPVRTKMWFBAYXBLJCTENJNJIEAQIASONGBYSLSIJVENFZGTVMPNFKROYKC");
    msg.plan_id.assign("YBPMWGDKFFUDAVSASETDZUCBNBTOFSLHKADDANGEVSSIQJHAGTEXOJJVIKCNMFQPMLOWKORLXEHYNFWURMZZEYBUPNPGDQQUNEHAMAJCKVCMPBSXERJWKYCFKYIFWOUSLADPPTFNVGHJQZOTKUXLUHUITCROBGIRZVYDQIXZOZSAKOTQDVTGDMZQWPCLBXRRJJZRTCYOCWS");
    msg.description.assign("DROZXDPDGLMBUKJWBSTTNRHPXWFKZQXAFYAWWRSXTXSVLVFIHFDAOMORUKVTQMBCDAQEKNUYRJZNKHIV");
    msg.leader_speed = 0.837769431798272;
    msg.leader_bank_lim = 0.6800339669863646;
    msg.pos_sim_err_lim = 0.9787684320869692;
    msg.pos_sim_err_wrn = 0.7639742232718775;
    msg.pos_sim_err_timeout = 21295U;
    msg.converg_max = 0.7380769284558203;
    msg.converg_timeout = 3627U;
    msg.comms_timeout = 20604U;
    msg.turb_lim = 0.6731319153960583;
    msg.custom.assign("GLCWGBKUOBLMBMBXGTKXHXIOSIIYRWWUAPOYASECRTXYYDVXRPVPNNQCNCDAXKTMNLGCGNRFOTEMUBJIEVASMAJFSMZATDMQXSIFXFCJYJKPLRQHQHMNVJWPJQOVPLSKANBZNSLBSDEDOGEZRDYTJKWHQVZRHGBHVJWUIPVLMICCOBXYMFEHWZAYRNULTAEEHFIFUUGRDFEXZNPCDPTFZQTWDGOO");

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
    msg.setTimeStamp(0.6574556622989994);
    msg.setSource(36053U);
    msg.setSourceEntity(153U);
    msg.setDestination(35203U);
    msg.setDestinationEntity(153U);
    msg.group_name.assign("MIDQJSLUWZXPCKQMUAOIYCGMJ");
    msg.formation_name.assign("PCFEGOTWRDMINQCGNUDDZQKIEEJTINKLZBQCVYWUUDHXHEBEOQZRYPKICVPCWLZLFEOGBYYULMIBR");
    msg.plan_id.assign("DTQAHRJDVGWCDPBFCRGKCMHOSSGJIQYIBYSXPIORPXJGFZQSFCGOKROTUMIVTOPEZHMUKNCZRELXKL");
    msg.description.assign("YYSVLIAJQENITUZHOCNSHZQUZNOXXBGKTWGHBIVCKPBFUNJQPRONTFYDLPLFAKWIEXRBQQOUQHVUKTTDFCMLDMSVMTXXXHKMSLPIAIBZUYVYRZKGSHMZMRMNBECDBHJHVMYKCPPHDASNGFYRVSEKQCMNCSRFGVODZLWYB");
    msg.leader_speed = 0.4873784764954745;
    msg.leader_bank_lim = 0.43047685847398687;
    msg.pos_sim_err_lim = 0.3769412769289834;
    msg.pos_sim_err_wrn = 0.8237148027055012;
    msg.pos_sim_err_timeout = 48199U;
    msg.converg_max = 0.4551133808935609;
    msg.converg_timeout = 3425U;
    msg.comms_timeout = 41800U;
    msg.turb_lim = 0.6076079128891172;
    msg.custom.assign("FQNVYHBDDZYDFMLRHKIGKTDIZMTNOUQZPRCOCV");

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
    msg.setTimeStamp(0.2806692785290448);
    msg.setSource(6419U);
    msg.setSourceEntity(22U);
    msg.setDestination(60754U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("DFIOFPQYSESLQSGNHDRJMUFKAOWIHMRKTCXDXPSZZUSURNDQYJHWXQAAICHFLHJERZWBFYYSZEIEGRISHKVNX");
    msg.formation_name.assign("DJOHYIZKSOOEQGKXZPLBQNZGFAEZKNPQMXBGTKRBUIHXWUQDFDMITMSQWJIEYABPTPGASXTVVXHWYNRLRSDGLTYLWRNRDQJNYHUILBJYBKQUVF");
    msg.plan_id.assign("MKJIPCDTPILPGIOBKPDEHDHTBYNXNQAXDVGTZYQZDGPLJJTKWSLFXQDRAYEOBHZXGWZPUMCRHADUKMFYOTXQRBPLSEFBHPBGIBWNXZMZQJNHTBYXQOEWVSSRQNVJJXUTIFRWTFZAOOOWUIPCSAGSFHJNCJODCYUMJRDMV");
    msg.description.assign("ODRVYYOBGECRABTFVLCVKRCVACBMSWJLGQERIBZIFWUYPLSXBAWDKBJDFMYUCGYMCRJYUKLJFITPSHWQSQSBFLKQHPVEMGQWHNEAOXFXGTUGOXAQHDECPXFNJSHOPWQYURIJRZMHSZAN");
    msg.leader_speed = 0.8960252849191213;
    msg.leader_bank_lim = 0.17668994133502325;
    msg.pos_sim_err_lim = 0.9837949042013883;
    msg.pos_sim_err_wrn = 0.26457625433446785;
    msg.pos_sim_err_timeout = 7901U;
    msg.converg_max = 0.9268235171181847;
    msg.converg_timeout = 58477U;
    msg.comms_timeout = 23996U;
    msg.turb_lim = 0.5590893793828698;
    msg.custom.assign("AYEYXNFHBSIIHCRCLJCMOPVDHUNQYOLQMZUXDXNUMPPCTZGXPAANBNBKUGQLLTISYGWFBOBAQZDOQCQTEXQFRZWVANRPHHXPQVSPQTFJTERVVDRGUJILXSMOMKGRETHNWNBVESJZGZOVYMAZCWMUEDUKXUYJTTDKKEFDCYZKAAROCKWDRPVZSSLFRLLAVCJXWOLEIUMZYHKIHBIJUDIFMRNGGJXQSYKIAKWWFNEFSJTGYHBLGTWFSDOWBCP");

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
    msg.setTimeStamp(0.061113228806303876);
    msg.setSource(5545U);
    msg.setSourceEntity(49U);
    msg.setDestination(31242U);
    msg.setDestinationEntity(133U);
    msg.control_src = 21025U;
    msg.control_ent = 40U;
    msg.timeout = 0.5523009221866227;
    msg.loiter_radius = 0.019291377475137317;
    msg.altitude_interval = 0.9035019888946652;

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
    msg.setTimeStamp(0.054558618856755614);
    msg.setSource(1678U);
    msg.setSourceEntity(243U);
    msg.setDestination(55128U);
    msg.setDestinationEntity(110U);
    msg.control_src = 46829U;
    msg.control_ent = 43U;
    msg.timeout = 0.001451841743972504;
    msg.loiter_radius = 0.02704538096123943;
    msg.altitude_interval = 0.7926958947691435;

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
    msg.setTimeStamp(0.8167082772743594);
    msg.setSource(11003U);
    msg.setSourceEntity(51U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(20U);
    msg.control_src = 63552U;
    msg.control_ent = 156U;
    msg.timeout = 0.8968774143711823;
    msg.loiter_radius = 0.6933255921275022;
    msg.altitude_interval = 0.7910124107947206;

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
    msg.setTimeStamp(0.23594353877845575);
    msg.setSource(61345U);
    msg.setSourceEntity(248U);
    msg.setDestination(50874U);
    msg.setDestinationEntity(221U);
    msg.flags = 189U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7133056795675722;
    tmp_msg_0.speed_units = 191U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.010235781026450397;
    tmp_msg_1.z_units = 31U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7836908468807725;
    msg.lon = 0.7017532068572054;
    msg.radius = 0.3757686456244662;

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
    msg.setTimeStamp(0.05361138186450909);
    msg.setSource(26726U);
    msg.setSourceEntity(65U);
    msg.setDestination(6482U);
    msg.setDestinationEntity(75U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6119267996823985;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6876501823868525;
    tmp_msg_1.z_units = 96U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.12268121932396303;
    msg.lon = 0.05512683277293473;
    msg.radius = 0.4878912552739716;

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
    msg.setTimeStamp(0.8309611851295945);
    msg.setSource(10472U);
    msg.setSourceEntity(34U);
    msg.setDestination(35072U);
    msg.setDestinationEntity(247U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.19340370686771113;
    tmp_msg_0.speed_units = 148U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18107714310003542;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7815465985600796;
    msg.lon = 0.24205688850746598;
    msg.radius = 0.7558551421354761;

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
    msg.setTimeStamp(0.24712873983485606);
    msg.setSource(38742U);
    msg.setSourceEntity(230U);
    msg.setDestination(22904U);
    msg.setDestinationEntity(91U);
    msg.control_src = 35490U;
    msg.control_ent = 144U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 250U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.30055217530199607;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7467080421009241;
    tmp_tmp_msg_0_1.z_units = 212U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1656409627399631;
    tmp_msg_0.lon = 0.7132120909427105;
    tmp_msg_0.radius = 0.38583157491323405;
    msg.reference.set(tmp_msg_0);
    msg.state = 16U;
    msg.proximity = 213U;

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
    msg.setTimeStamp(0.779658794772134);
    msg.setSource(22344U);
    msg.setSourceEntity(253U);
    msg.setDestination(62858U);
    msg.setDestinationEntity(202U);
    msg.control_src = 21957U;
    msg.control_ent = 101U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 187U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9020777098743008;
    tmp_tmp_msg_0_0.speed_units = 205U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.44665036711878625;
    tmp_tmp_msg_0_1.z_units = 191U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3959950089267439;
    tmp_msg_0.lon = 0.7042678386553524;
    tmp_msg_0.radius = 0.641206461525898;
    msg.reference.set(tmp_msg_0);
    msg.state = 228U;
    msg.proximity = 161U;

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
    msg.setTimeStamp(0.6596767679778422);
    msg.setSource(4739U);
    msg.setSourceEntity(99U);
    msg.setDestination(22864U);
    msg.setDestinationEntity(73U);
    msg.control_src = 50094U;
    msg.control_ent = 144U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 61U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9712372347181492;
    tmp_tmp_msg_0_0.speed_units = 185U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.23811681461739542;
    tmp_tmp_msg_0_1.z_units = 41U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.44761896504930876;
    tmp_msg_0.lon = 0.6649370369863601;
    tmp_msg_0.radius = 0.7258996611405746;
    msg.reference.set(tmp_msg_0);
    msg.state = 145U;
    msg.proximity = 190U;

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
    msg.setTimeStamp(0.7957258826114771);
    msg.setSource(55279U);
    msg.setSourceEntity(2U);
    msg.setDestination(14893U);
    msg.setDestinationEntity(145U);
    msg.ax_cmd = 0.635693145110451;
    msg.ay_cmd = 0.21660488838989467;
    msg.az_cmd = 0.13435745740071836;
    msg.ax_des = 0.5242221175357508;
    msg.ay_des = 0.6888205688228286;
    msg.az_des = 0.9363857959921713;
    msg.virt_err_x = 0.6096727889213044;
    msg.virt_err_y = 0.31728025014628025;
    msg.virt_err_z = 0.4002445973948623;
    msg.surf_fdbk_x = 0.4430708128731514;
    msg.surf_fdbk_y = 0.023565761804643426;
    msg.surf_fdbk_z = 0.9115500757002942;
    msg.surf_unkn_x = 0.9455505968692686;
    msg.surf_unkn_y = 0.21866322869802712;
    msg.surf_unkn_z = 0.4504339475046558;
    msg.ss_x = 0.053561483734205106;
    msg.ss_y = 0.9877147152991778;
    msg.ss_z = 0.44234991119276545;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ANALDYKMDXFJXEKRQGNEWMOPKNTNCQVJBQCWLGTVFFVQLTGOQYQHLNPHOXLFRFNAFUKRMYBFJEHHSDSZIOHSFUAQBDMWYYQCDKARSYMXWHUAOZUBZHPLXSNKMIDTCCJEYQMJYREFGCUOTDXGTPPSBZDDATSEVN");
    tmp_msg_0.dist = 0.7496189792720225;
    tmp_msg_0.err = 0.023075386236181106;
    tmp_msg_0.ctrl_imp = 0.31545556550138143;
    tmp_msg_0.rel_dir_x = 0.7216976633426212;
    tmp_msg_0.rel_dir_y = 0.9475069476108784;
    tmp_msg_0.rel_dir_z = 0.9461435807672677;
    tmp_msg_0.err_x = 0.2120845728344658;
    tmp_msg_0.err_y = 0.36319647698703883;
    tmp_msg_0.err_z = 0.9741046485396274;
    tmp_msg_0.rf_err_x = 0.25760379560090685;
    tmp_msg_0.rf_err_y = 0.41967100788088063;
    tmp_msg_0.rf_err_z = 0.9839982488510169;
    tmp_msg_0.rf_err_vx = 0.5307694267598013;
    tmp_msg_0.rf_err_vy = 0.6894794060819677;
    tmp_msg_0.rf_err_vz = 0.1379217369337542;
    tmp_msg_0.ss_x = 0.511502348226383;
    tmp_msg_0.ss_y = 0.4948947456126801;
    tmp_msg_0.ss_z = 0.1942926852763407;
    tmp_msg_0.virt_err_x = 0.4225067566467916;
    tmp_msg_0.virt_err_y = 0.3518859758538406;
    tmp_msg_0.virt_err_z = 0.8841637797242604;
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
    msg.setTimeStamp(0.3162654905710167);
    msg.setSource(62911U);
    msg.setSourceEntity(113U);
    msg.setDestination(325U);
    msg.setDestinationEntity(110U);
    msg.ax_cmd = 0.24867300381032098;
    msg.ay_cmd = 0.5611834532386987;
    msg.az_cmd = 0.4032583267750254;
    msg.ax_des = 0.1752578698694084;
    msg.ay_des = 0.36377710104175665;
    msg.az_des = 0.8106062999722048;
    msg.virt_err_x = 0.5612111005268254;
    msg.virt_err_y = 0.3455030791576257;
    msg.virt_err_z = 0.5829878424356767;
    msg.surf_fdbk_x = 0.4452607013879264;
    msg.surf_fdbk_y = 0.355118081181506;
    msg.surf_fdbk_z = 0.7140039244656933;
    msg.surf_unkn_x = 0.7304210235427686;
    msg.surf_unkn_y = 0.40093640256761043;
    msg.surf_unkn_z = 0.08905082422900334;
    msg.ss_x = 0.27343106545030005;
    msg.ss_y = 0.7604931297298959;
    msg.ss_z = 0.5757506408895429;

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
    msg.setTimeStamp(0.12211626850900292);
    msg.setSource(14192U);
    msg.setSourceEntity(249U);
    msg.setDestination(35145U);
    msg.setDestinationEntity(90U);
    msg.ax_cmd = 0.5016215717677566;
    msg.ay_cmd = 0.27352445271618253;
    msg.az_cmd = 0.10042612115328198;
    msg.ax_des = 0.7441356545764825;
    msg.ay_des = 0.20122375535121684;
    msg.az_des = 0.5782693142917824;
    msg.virt_err_x = 0.1482630382348108;
    msg.virt_err_y = 0.5736669170875186;
    msg.virt_err_z = 0.37854304617818313;
    msg.surf_fdbk_x = 0.5395584333775478;
    msg.surf_fdbk_y = 0.9709434525103984;
    msg.surf_fdbk_z = 0.0011159966560455592;
    msg.surf_unkn_x = 0.8116628479652158;
    msg.surf_unkn_y = 0.4831944007019766;
    msg.surf_unkn_z = 0.5692364496469199;
    msg.ss_x = 0.5775450181322594;
    msg.ss_y = 0.5201743321214377;
    msg.ss_z = 0.6239434208293961;

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
    msg.setTimeStamp(0.7101507019973251);
    msg.setSource(12764U);
    msg.setSourceEntity(14U);
    msg.setDestination(62380U);
    msg.setDestinationEntity(210U);
    msg.s_id.assign("JJCOJRPYVCZHHGEPEQEJNDLBJUNZMCBHEKASVHGZKELDILMYTDDXBRGINFSAPUDRXPNTKSFRCOVSKTGPMBZWQNQTMAIJLRZUNLVEKPUXUOORAYRHRDEAINTICEYJDPBGFKCIFGOATBWVLWLHVYMXFZWSJTSVWYUVMDUGXWHXASBMXDHIQCBWILBTNRFNTIQZPUJQEYSFLMCNUQYMFZYXIQXKKGYLOFXVZVPS");
    msg.dist = 0.5191451528464682;
    msg.err = 0.9953372836331127;
    msg.ctrl_imp = 0.9778981825801629;
    msg.rel_dir_x = 0.38824811688445837;
    msg.rel_dir_y = 0.6172140701516196;
    msg.rel_dir_z = 0.5775135758488702;
    msg.err_x = 0.2651104836411936;
    msg.err_y = 0.8532648248099951;
    msg.err_z = 0.8664451222394226;
    msg.rf_err_x = 0.9686001741612194;
    msg.rf_err_y = 0.5060085557186178;
    msg.rf_err_z = 0.09327525512414658;
    msg.rf_err_vx = 0.7081698236647016;
    msg.rf_err_vy = 0.16537031620760811;
    msg.rf_err_vz = 0.0681803367229189;
    msg.ss_x = 0.4796691471043675;
    msg.ss_y = 0.8120034096403387;
    msg.ss_z = 0.4267310526933834;
    msg.virt_err_x = 0.6356947705799845;
    msg.virt_err_y = 0.03428749869649972;
    msg.virt_err_z = 0.2328932533184609;

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
    msg.setTimeStamp(0.010996187670480051);
    msg.setSource(14524U);
    msg.setSourceEntity(8U);
    msg.setDestination(5793U);
    msg.setDestinationEntity(43U);
    msg.s_id.assign("OAVFAXBXTBJMZQMCPGKGNOKELGTYRPMFXVWAANCBQDDWGMTHRIOQYSNBLJLWCUDQFGGRVGQBPRMNQYDLLYYSPKYZDOIFJDRFUIQXCJWIKVMVSXEHJYFUOOJXVDICFTAYKRHSEZBWJNDVMNTXWKXZPLOCHATLGSXWHPAJUELSGBYRNUZHJXKFHVIWBUCYCWPMSHEQEKLRZSCUGZTIPEMPIKUZIMUANEVBTNCE");
    msg.dist = 0.14081985690180066;
    msg.err = 0.6027336210519352;
    msg.ctrl_imp = 0.9734524113988517;
    msg.rel_dir_x = 0.07902827710282545;
    msg.rel_dir_y = 0.9508215517520454;
    msg.rel_dir_z = 0.7762434957257882;
    msg.err_x = 0.5472235981588771;
    msg.err_y = 0.08606442508175838;
    msg.err_z = 0.34512416627081155;
    msg.rf_err_x = 0.2386101406226132;
    msg.rf_err_y = 0.8858546239372563;
    msg.rf_err_z = 0.6468642060297556;
    msg.rf_err_vx = 0.9548524938673281;
    msg.rf_err_vy = 0.8569074372324675;
    msg.rf_err_vz = 0.18637242134334686;
    msg.ss_x = 0.8347684203130775;
    msg.ss_y = 0.7463391916363463;
    msg.ss_z = 0.4925659759870178;
    msg.virt_err_x = 0.8146411895962321;
    msg.virt_err_y = 0.11807218157841448;
    msg.virt_err_z = 0.9746925101423201;

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
    msg.setTimeStamp(0.6276916434213488);
    msg.setSource(18498U);
    msg.setSourceEntity(135U);
    msg.setDestination(34889U);
    msg.setDestinationEntity(83U);
    msg.s_id.assign("GUUWNKVLKTPSKCWWVUEFVNRLKLUNHTQBLOOZHOTBTCYEPNGGLRYUIKLVPZTISOXFBSCHZKHHEDAQTAERFXRBSYDRUHJOZMPHMXYESWEQIGNFIWSUCMNMVXVMRBKVLBISHJNWLOAJDTKNGYTTBLYOMIURCQLAEJZJEMAVQDFYJAWGFZPDXPNXE");
    msg.dist = 0.36945625717427666;
    msg.err = 0.548986135911433;
    msg.ctrl_imp = 0.773412820241285;
    msg.rel_dir_x = 0.952865248124419;
    msg.rel_dir_y = 0.2848166934631092;
    msg.rel_dir_z = 0.26291992330575165;
    msg.err_x = 0.6492944017266182;
    msg.err_y = 0.08968056150317694;
    msg.err_z = 0.5081969631673927;
    msg.rf_err_x = 0.9967504382004264;
    msg.rf_err_y = 0.7866289771871309;
    msg.rf_err_z = 0.45710761647195786;
    msg.rf_err_vx = 0.6852050006331999;
    msg.rf_err_vy = 0.3992389809262975;
    msg.rf_err_vz = 0.8160586007585796;
    msg.ss_x = 0.5783120437492576;
    msg.ss_y = 0.12028264920572618;
    msg.ss_z = 0.019513133683168205;
    msg.virt_err_x = 0.5331756333223816;
    msg.virt_err_y = 0.6248001928048716;
    msg.virt_err_z = 0.38220047536012214;

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
    msg.setTimeStamp(0.13283532165392709);
    msg.setSource(41464U);
    msg.setSourceEntity(65U);
    msg.setDestination(57947U);
    msg.setDestinationEntity(106U);
    msg.timeout = 42729U;
    msg.rpm = 0.47897179397734757;
    msg.direction = 149U;
    msg.custom.assign("XHSEDSDMKYGFCSEBMRPFVAURNQSOPE");

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
    msg.setTimeStamp(0.7379466962663386);
    msg.setSource(18662U);
    msg.setSourceEntity(199U);
    msg.setDestination(29037U);
    msg.setDestinationEntity(215U);
    msg.timeout = 56043U;
    msg.rpm = 0.030329441337926477;
    msg.direction = 160U;
    msg.custom.assign("BZVWEQSFIPPVEADSGIEOFSCKLBW");

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
    msg.setTimeStamp(0.5876165957974976);
    msg.setSource(22090U);
    msg.setSourceEntity(145U);
    msg.setDestination(44144U);
    msg.setDestinationEntity(195U);
    msg.timeout = 23889U;
    msg.rpm = 0.20207864797321307;
    msg.direction = 181U;
    msg.custom.assign("DHSHOVTSLUNWWKACAJSGGQMRGNAVHRVPXHOLFDFFSRGBXUKBIKTWFIOCZTENYBACYWJQEFGMCJDHBDNBKKZTOIDDBVJPESZWNMUOCVHCQPULVAWYGXUJVVEDTWCLPPXTMPQPIMRDBMXIKYXRCZJZHEVSFUMIKAYBOJQPMNGLQQUZHYYPLFGUZXNFSRIBYLTAOITFYUXLQSVSMENGPUILWEERWJKNSBXZOZROWAJZM");

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
    msg.setTimeStamp(0.3586563559724497);
    msg.setSource(36072U);
    msg.setSourceEntity(87U);
    msg.setDestination(41916U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("TTWCGEXAUIONSGAMEBUBRPSCTHIFGLHPKGAVQLDRJPFFMCGJXBPCXQXNQFIKSWCXGJUYAIUHNTLVZOYKGYDYXTICNVQWROSFHHCJKVSUXZZWEMGCSFSNUREMQWJDROLNDFIDHLRBSTSWKFMLLAKJQVTYZUVVKZTJYVUJDRPAZ");
    msg.type = 80U;
    msg.op = 198U;
    msg.group_name.assign("YABUWSCDVZFGXHQXVMOSWWQFTIKJWHJDCWGQKEXVLSORXDWLMBCSSHDIBACNNIIDRVBZJEEPYHAOMLFWQKXTSGIYNIGLYA");
    msg.plan_id.assign("PIWTHFBOICNUUMHPPNBMMXWYPDWUOBOAYKJDANDYXKLETSLFXFOQYWSJETQWKPLHJFKLQZNRGIUWACCLCGLTTKVBVMKYASEKPVQXTFHQFNUSXOBDVRSCCLOVZEENFBJPQDKGZRUAPQQQOWMARELXEFXYDFZLSYCNASRZIKMVVCBDTBGNZFXPGYAJVTJHIHASRXBPOVUGZATWBRQRWGHMOXWVCIEZYHJRIZOMZHLDNHDEJSEJGRDIUUTM");
    msg.description.assign("DCHNVTWTYBOSUIIWDHXMNMFAQDKNASQPNXUUXJYEEBVBYWEWLMVJKQFKTALVYWITKYPLRGQVDUSRDOQNECLCMZSPKQEAOJDLBAGBLLKWSYVINGHSHLRRRMYZRRLZCOFGZDZWBSZYOJUUIVBVTPPFWKXPJAXRJHZSZXFWXPKBGHBUIVIFEATCUEEHUNEKESYPQZNQMFULGGCIDHQOIT");
    msg.reference_frame = 26U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40779U;
    tmp_msg_0.off_x = 0.5428943867303262;
    tmp_msg_0.off_y = 0.30594466260932296;
    tmp_msg_0.off_z = 0.42459941316909044;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6512851456518844;
    msg.leader_speed_min = 0.17088481610973683;
    msg.leader_speed_max = 0.755364460342535;
    msg.leader_alt_min = 0.07931261389457345;
    msg.leader_alt_max = 0.44049595591028434;
    msg.pos_sim_err_lim = 0.35194601812014614;
    msg.pos_sim_err_wrn = 0.5226777958610971;
    msg.pos_sim_err_timeout = 45023U;
    msg.converg_max = 0.9444228168752693;
    msg.converg_timeout = 23072U;
    msg.comms_timeout = 34708U;
    msg.turb_lim = 0.15986063034861997;
    msg.custom.assign("QGFNXUUOTRZPPABZWPLSMNDIFQXWYSDZNLINVICGEMAOOJAKNBHMWXRPJNSZCTIVKDIPZGNAOXLMRVRTEEVSBUBKCFKHIEJOHYBHCRFKJZOPKGTWIBLQVESFAVYWBUEXXFQTMHOGDLUYTIASXSUEZHDVJMJAHCFGHLRPEWIQWTJYCUUENAGDKFFRQDNKHYPFAGQTHJMBQWNWRBOSTCPYCRULYGDEQODVZVYY");

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
    msg.setTimeStamp(0.9659350168288643);
    msg.setSource(311U);
    msg.setSourceEntity(148U);
    msg.setDestination(14433U);
    msg.setDestinationEntity(73U);
    msg.formation_name.assign("MMRZKUKDOPADPQTRUCMHNBQIQPQWJBBFEECLOANBIDSRCMGCAVSUSZWKGTANQWHXXQBEGJHILWRKSXVUVOKCZWRIHGRPXVPLXFIGZPKTZOAXCOEHDEVLWECNGJLJCPZMFZMVEQJYHTPVYHMPFBHSDZJURQLEHVYCTYNJGJYFAKFXBFDOTJKUUFROKWSTPIZGXXVNAQ");
    msg.type = 253U;
    msg.op = 227U;
    msg.group_name.assign("LCVUBMOKTHOUCQKPHQMHSWRRGPIGPEEYIQCNZIFYFGONURSAPQYOPXRTFMLVRRDITHDTAZNHZJCHMMDIBAPNBFUKANFSULJBVBKDMGRWOSEVKEQAASWPLGROZI");
    msg.plan_id.assign("RNJSZQLQYWRMGSPYGPDQAXGNOEXREBYCKNFVMQTDUYILJBJWFOWGSODYDMATKGNNBASJCTJLABVEIEALEMWCMHLTXYFNKOPJUEGKTMUFMSZTJFPZWCZWVUBIBROWYBWMPAVTUQGOWJKHRXHBQVLSYZPIHNZXKMLDOFAAOZEXIUZ");
    msg.description.assign("NXOHIDFXUINEOWCDEMXHQMLLRVHADGJSSHFLIFACWKAVRGMJBVDLUGSLVEYPKZQQWFRJOXCKYRWZEBMCIKLIVPFPBQTGMCUZQ");
    msg.reference_frame = 39U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63386U;
    tmp_msg_0.off_x = 0.45004906232998554;
    tmp_msg_0.off_y = 0.6872837463416609;
    tmp_msg_0.off_z = 0.2624603641683938;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5270647135843558;
    msg.leader_speed_min = 0.7979716292863814;
    msg.leader_speed_max = 0.9369158508458688;
    msg.leader_alt_min = 0.8969827160371706;
    msg.leader_alt_max = 0.6165214051370381;
    msg.pos_sim_err_lim = 0.8219591450169068;
    msg.pos_sim_err_wrn = 0.7232773050597802;
    msg.pos_sim_err_timeout = 6090U;
    msg.converg_max = 0.9642678101529156;
    msg.converg_timeout = 32501U;
    msg.comms_timeout = 47442U;
    msg.turb_lim = 0.3526737639440731;
    msg.custom.assign("DWEIJDTUTPAKTCIXKHDJIBZFILAEFXHVBMKVGHQNENNXCFXFQQSMHVVYOTJDRHOUPYDKFUOBAODTYZNEBLIZPVETADBXURKSZCTLILZEMTMWGVEMXWWUQYWRFFHWJQYZSXZYPGOOCFSWOYVCJNXRLPBGTNWIGCPTGLYAMARUGIDPGXEWPJIZAKINFLAXUJMHQOYMLUMMNHFSQV");

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
    msg.setTimeStamp(0.9487246263478695);
    msg.setSource(5727U);
    msg.setSourceEntity(82U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("JDQYJWRIEIIEUERTLGVFOVCNFHVDQLPNAVRMLHAXCNPUFQZNZPLYSBWJDKNMHVBYDNGRZMIASVSCNKGUVXKFLQATOGKJLYXREPGOQHQZPYAETFTXUPJWGXCJBCDHCWZELYOKTIWWAMPPQCJJJMGZWTTXIOMWOEOHEPYAHVBBBQZQNHOUTAHUOGGCQZKXZXJBGEFRMSSRHVDDRMKSEKBXOUUBBPKLIN");
    msg.type = 180U;
    msg.op = 64U;
    msg.group_name.assign("IEMSGLPQJIDULJGGQZJNWXINHEYWHEAZZCXQ");
    msg.plan_id.assign("OMCKYGNREAIWQOTXSGAGLTCPKLUMDFHYBOWOITQSFBNMDOCYNLJISRFQQAPIHXQRJBKABKKNVYCBUPEICXWCTVHKQLGLNXELWIIGGJGCHJHNPZYCYFAKTZWWUDIJVYSSFODNZFMPVEYSXHVVOBONWIERDMRANQJFT");
    msg.description.assign("DOWQNOOUAXLYZBIMCEZZINFLGUHMTWGREJXBFAAQDCHYFXIVFRNWXSQWJENSQVSSZRTHAVSYMRUOZEKHTLOGBU");
    msg.reference_frame = 11U;
    msg.leader_bank_lim = 0.2737208574336607;
    msg.leader_speed_min = 0.16973386153315528;
    msg.leader_speed_max = 0.6082607037643867;
    msg.leader_alt_min = 0.8120537087186481;
    msg.leader_alt_max = 0.4921271592698616;
    msg.pos_sim_err_lim = 0.2844065933772987;
    msg.pos_sim_err_wrn = 0.4489041943819718;
    msg.pos_sim_err_timeout = 27002U;
    msg.converg_max = 0.9615960776141705;
    msg.converg_timeout = 37170U;
    msg.comms_timeout = 42557U;
    msg.turb_lim = 0.1418787610405443;
    msg.custom.assign("PNHDAULSUSGJLBWYDJHKZFUGTNHKQVRPYBNORNHHKFHHCCWXPFOUVCKSMZSSLIYEXIXFJYPSQZ");

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
    msg.setTimeStamp(0.4683061598182243);
    msg.setSource(6482U);
    msg.setSourceEntity(119U);
    msg.setDestination(2929U);
    msg.setDestinationEntity(10U);
    msg.timeout = 15182U;
    msg.lat = 0.9694617829009295;
    msg.lon = 0.7638902782687936;
    msg.z = 0.8578621509357232;
    msg.z_units = 43U;
    msg.speed = 0.3237611160818733;
    msg.speed_units = 151U;
    msg.custom.assign("ZMVKRUYUOEXTSKFUHDYUNGWRPQITFJPPCCYEVQJPKHZETNEJIBPCYAWZNSMOVRKHQORBHRCVSDZTDFAIVJBQNMQFQVGCTUIBXWUPYTFEVSEMLGJIXLYWLRWXHDIXKCFASDUGVSSIJJOVFCOHKTKLECBNRMJTBYAOHXNEEGZOSMLFXADTACAHPNAEMKNBZLADLKXRGBGQWPGWTJDDBCR");

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
    msg.setTimeStamp(0.5264791779854108);
    msg.setSource(345U);
    msg.setSourceEntity(164U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(18U);
    msg.timeout = 7569U;
    msg.lat = 0.7822148084415748;
    msg.lon = 0.06250157121987865;
    msg.z = 0.3047782123251078;
    msg.z_units = 148U;
    msg.speed = 0.9966818788743882;
    msg.speed_units = 42U;
    msg.custom.assign("IFQYYDCDFMFGRTQHMJWEABHIKOCTOCOSSFIXBFNBYQEAICVLWVJELYQJIOZUTDZAVCBCSKLMFMCWRXETLSCHZCRRBWZXEDKYUWZMQGBYHBEZXLHDVNIZRUSOOXFFJPCVPPURAUBWDOLEHVIQTYGQPFQNDPPIJVNQKMXYGGRRUXYHUKOXSVJMUOKAVTDFJKZJPNSGUTLKG");

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
    msg.setTimeStamp(0.7626267467332352);
    msg.setSource(5118U);
    msg.setSourceEntity(50U);
    msg.setDestination(26365U);
    msg.setDestinationEntity(240U);
    msg.timeout = 45091U;
    msg.lat = 0.21407590773825713;
    msg.lon = 0.09557529360462091;
    msg.z = 0.1009190633324949;
    msg.z_units = 16U;
    msg.speed = 0.2663725820961268;
    msg.speed_units = 140U;
    msg.custom.assign("RJOGZWRBWSQSWQAQUSMGUPSWEJOYCDOVEYDLCXAIFAKIUUFBGXBOPAXCGGOVYEHNUWPTRFIDCLMMEHMJGMBDRLFDTWAAUXBETHIYIKXCYUOMNSNMXXLFUPHNWUJFNQTMKUTVDBLPMVDETENFJKSNVDKQACOCRXYAZHREPGHMWVHTDPIGKZZGSBNZQKVZCIIJTJQBCVEPSHTESQYSLLORLBJCYHNTORFFVWNQKYHAL");

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
    msg.setTimeStamp(0.8433499225362499);
    msg.setSource(18706U);
    msg.setSourceEntity(50U);
    msg.setDestination(22478U);
    msg.setDestinationEntity(143U);
    msg.timeout = 50923U;
    msg.lat = 0.0568477654571965;
    msg.lon = 0.29238908878142833;
    msg.z = 0.9094340186083248;
    msg.z_units = 134U;
    msg.speed = 0.4649665026506121;
    msg.speed_units = 29U;
    msg.custom.assign("ELLUSCIUNEJCVFSRWUDVDYYUMDFVYEKVXXALJUMZAJKEVVTCLBYPZBXIDTNNXSKOXANGQGGXMLPUKZTWNEJULZOTUHZTKPRZIOWVAYPFCLQWMKGRPBYRPEQQMXZCYHSNDERKMTCFHFXOGRLPQQZFHRSJETVVCOHPIJSSRDQNOJDZDGWOCFKNYKJARXZHGBQOPLB");

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
    msg.setTimeStamp(0.7011251633241579);
    msg.setSource(19598U);
    msg.setSourceEntity(210U);
    msg.setDestination(61953U);
    msg.setDestinationEntity(153U);
    msg.timeout = 21216U;
    msg.lat = 0.6658967099645307;
    msg.lon = 0.9968242931968702;
    msg.z = 0.6530913509382776;
    msg.z_units = 65U;
    msg.speed = 0.4640376520020453;
    msg.speed_units = 245U;
    msg.custom.assign("AFRBHZAKHSWDMJXFWUSBKCQQENLWXBGRUFQSVXDCZBPRSUATOOQBLXJSTZUKOVNAWALP");

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
    msg.setTimeStamp(0.5953515491147603);
    msg.setSource(36750U);
    msg.setSourceEntity(172U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(73U);
    msg.timeout = 14188U;
    msg.lat = 0.045495788026935546;
    msg.lon = 0.019682973947739546;
    msg.z = 0.3218558738310552;
    msg.z_units = 123U;
    msg.speed = 0.9794660203956085;
    msg.speed_units = 140U;
    msg.custom.assign("HRHBRZOMKCHCXLQMQNMTUROGNXHOKSGZYTJZHQIJSPFNPDLVVJMYBBVSHQYOVJXMLY");

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
    msg.setTimeStamp(0.013842281296907344);
    msg.setSource(56588U);
    msg.setSourceEntity(9U);
    msg.setDestination(36822U);
    msg.setDestinationEntity(25U);
    msg.arrival_time = 0.2822428026542311;
    msg.lat = 0.2408979145700879;
    msg.lon = 0.4342419535640136;
    msg.z = 0.46752441733863725;
    msg.z_units = 150U;
    msg.travel_z = 0.18992547589039988;
    msg.travel_z_units = 215U;
    msg.delayed = 210U;

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
    msg.setTimeStamp(0.1402507237856776);
    msg.setSource(41546U);
    msg.setSourceEntity(20U);
    msg.setDestination(36070U);
    msg.setDestinationEntity(54U);
    msg.arrival_time = 0.25639237580267027;
    msg.lat = 0.9442108862112307;
    msg.lon = 0.07307880232881736;
    msg.z = 0.10969065466544181;
    msg.z_units = 223U;
    msg.travel_z = 0.809074089764549;
    msg.travel_z_units = 151U;
    msg.delayed = 151U;

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
    msg.setTimeStamp(0.3539927547830479);
    msg.setSource(20466U);
    msg.setSourceEntity(37U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(149U);
    msg.arrival_time = 0.6794324891915205;
    msg.lat = 0.19711770728779177;
    msg.lon = 0.5270649366185404;
    msg.z = 0.7010337110178193;
    msg.z_units = 135U;
    msg.travel_z = 0.5471449840491186;
    msg.travel_z_units = 143U;
    msg.delayed = 231U;

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
    msg.setTimeStamp(0.4468180745638838);
    msg.setSource(38855U);
    msg.setSourceEntity(31U);
    msg.setDestination(54655U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.4917797692762893;
    msg.lon = 0.9344331141439756;
    msg.z = 0.6958937889337719;
    msg.z_units = 55U;
    msg.speed = 0.27090497680065784;
    msg.speed_units = 43U;
    msg.bearing = 0.4666483154648353;
    msg.cross_angle = 0.7639487008514613;
    msg.width = 0.6603618281473128;
    msg.length = 0.8735004845907927;
    msg.coff = 42U;
    msg.angaperture = 0.1819435671399453;
    msg.range = 36905U;
    msg.overlap = 242U;
    msg.flags = 211U;
    msg.custom.assign("SLODXDFWNCIFXLFMDWBEICUTPGXMRVJMQQSZZIPEYITNVTYKRTTSQWBRZOPZECVDOECRZIAFPKGQKFVWUCXGELCVGIGOYOLI");

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
    msg.setTimeStamp(0.5092134499797748);
    msg.setSource(9328U);
    msg.setSourceEntity(19U);
    msg.setDestination(37226U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.2993815429824329;
    msg.lon = 0.8212489200872851;
    msg.z = 0.6203752050553075;
    msg.z_units = 44U;
    msg.speed = 0.3667685141256629;
    msg.speed_units = 14U;
    msg.bearing = 0.6800387977933456;
    msg.cross_angle = 0.772531196254278;
    msg.width = 0.3525026542505739;
    msg.length = 0.8906133432536318;
    msg.coff = 215U;
    msg.angaperture = 0.2515328751442797;
    msg.range = 63841U;
    msg.overlap = 40U;
    msg.flags = 104U;
    msg.custom.assign("CQJJMRWYOOJSZMKEOJEQNQCWMBOPHOUCVFXUKUYDWX");

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
    msg.setTimeStamp(0.4868921133535634);
    msg.setSource(57962U);
    msg.setSourceEntity(17U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.6146430769657858;
    msg.lon = 0.08253713145044672;
    msg.z = 0.7736657730073042;
    msg.z_units = 153U;
    msg.speed = 0.7419573749963136;
    msg.speed_units = 31U;
    msg.bearing = 0.6362307787299271;
    msg.cross_angle = 0.7823585360335745;
    msg.width = 0.4004341661080173;
    msg.length = 0.058911269011218126;
    msg.coff = 153U;
    msg.angaperture = 0.0024167011617375334;
    msg.range = 52881U;
    msg.overlap = 30U;
    msg.flags = 138U;
    msg.custom.assign("KWXJOOJGRWGUNGIMPDVUIAUXSBRKNEKPKUANCUPYDWHTGFEBKFHRHDXAVDYEBJOYVPCLAMTOOCINBCOENWLRTZKWQMOPPWYCITTAHJVQIRUCPFANKHYLZDWRALTMEDJDDBFFPZQTXZUJUXIJZQHSDYYLLBBEXEUZBGBZGZSM");

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
    msg.setTimeStamp(0.42959212627757226);
    msg.setSource(35030U);
    msg.setSourceEntity(21U);
    msg.setDestination(52194U);
    msg.setDestinationEntity(211U);
    msg.timeout = 41864U;
    msg.lat = 0.34073175575137404;
    msg.lon = 0.04438199489774053;
    msg.z = 0.654607987312115;
    msg.z_units = 182U;
    msg.speed = 0.2053447529768888;
    msg.speed_units = 197U;
    msg.syringe0 = 230U;
    msg.syringe1 = 7U;
    msg.syringe2 = 173U;
    msg.custom.assign("CAEWYIYPJBTMSIMENLXQXQINHDXTOCSFDAJOXSXFGEBYGFAKEOYSIPGN");

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
    msg.setTimeStamp(0.2522181646417152);
    msg.setSource(20109U);
    msg.setSourceEntity(113U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(38U);
    msg.timeout = 27291U;
    msg.lat = 0.7983106000036689;
    msg.lon = 0.7154873147515416;
    msg.z = 0.35196015592961793;
    msg.z_units = 245U;
    msg.speed = 0.770218178748888;
    msg.speed_units = 8U;
    msg.syringe0 = 97U;
    msg.syringe1 = 68U;
    msg.syringe2 = 209U;
    msg.custom.assign("AYMIXSWZWSGQNOTNOWVRKMPYCSRKDWIJRBZRXEAHNNTOEUCSEFCJXRWDJDXQFIPZSNVYYYISMOGEDKOHSMGHUF");

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
    msg.setTimeStamp(0.35341230405885027);
    msg.setSource(50951U);
    msg.setSourceEntity(121U);
    msg.setDestination(16265U);
    msg.setDestinationEntity(252U);
    msg.timeout = 33215U;
    msg.lat = 0.4448004219188978;
    msg.lon = 0.714548909406196;
    msg.z = 0.596998116795935;
    msg.z_units = 20U;
    msg.speed = 0.6835381968827051;
    msg.speed_units = 123U;
    msg.syringe0 = 191U;
    msg.syringe1 = 236U;
    msg.syringe2 = 162U;
    msg.custom.assign("MVPAQJXWMGUDCNUJHYOVGVQXTEOLCKCWQTASXPZFCTAGKSKPXTTUYBLQFKIKYRZGDREMZVJBEELOLNRPZRLSOWRDTYGSIMIOPCTENDFBUVHFXJ");

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
    msg.setTimeStamp(0.3136482229206111);
    msg.setSource(49010U);
    msg.setSourceEntity(174U);
    msg.setDestination(64093U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.43715638010594526);
    msg.setSource(26352U);
    msg.setSourceEntity(85U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.7822028118241728);
    msg.setSource(12757U);
    msg.setSourceEntity(227U);
    msg.setDestination(24689U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.04515047837753361);
    msg.setSource(56248U);
    msg.setSourceEntity(89U);
    msg.setDestination(41632U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.46834470380902116;
    msg.lon = 0.6568016015267769;
    msg.z = 0.288016433544941;
    msg.z_units = 167U;
    msg.speed = 0.8697099325222319;
    msg.speed_units = 34U;
    msg.takeoff_pitch = 0.9539605268157567;
    msg.custom.assign("AXIOGHCAKRNBRCQNTIMXDLURLVMFIEDLELLADKYVOAPBAUFESSTNMMXRYWWGHEGSHAIODEJJESRMFTGTXOYYXGXMQPJHMTJQVLHRZFKUCZYJYKVQOTBDWRNCXIMAPEDHRVOYFBIAQVVGTZAKXBUDEUQOPIJQJQPKYXADHZFTFTIBCVESWIQWPXMTPI");

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
    msg.setTimeStamp(0.7133257223733387);
    msg.setSource(53330U);
    msg.setSourceEntity(87U);
    msg.setDestination(1220U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.8112311132232464;
    msg.lon = 0.1546981887386235;
    msg.z = 0.8990019498283403;
    msg.z_units = 62U;
    msg.speed = 0.10497807001137494;
    msg.speed_units = 193U;
    msg.takeoff_pitch = 0.9002967903242802;
    msg.custom.assign("IYEIQZLPBMJNELCQJYLWUZDHOXGAFTKEIWVGYJGXNSNYMXKOWGVAFXECKELXYWPSLUWPFNLKKBQWRICSBZDJGVDIPAQXUSJCBUFZTHUOBWOMJFXOSALNPBDVHLHCKMEPNPROXITPVQFHZUAIVCYVVIUBIPRBDFIKCNZHHXSAM");

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
    msg.setTimeStamp(0.6714101347895631);
    msg.setSource(50352U);
    msg.setSourceEntity(138U);
    msg.setDestination(38244U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.7483164199087601;
    msg.lon = 0.9452760567125221;
    msg.z = 0.912566620200078;
    msg.z_units = 47U;
    msg.speed = 0.9883122626186227;
    msg.speed_units = 35U;
    msg.takeoff_pitch = 0.9006165769198224;
    msg.custom.assign("ZDBOPRYPMQDLZHURRLODSFWXNSLZHIQLSCGUHWESYPQDHYFXQCIPGFHCKBVTOYQXRQXEREMCATKJXVZJSF");

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
    msg.setTimeStamp(0.6534449515058451);
    msg.setSource(20993U);
    msg.setSourceEntity(174U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.6230974031142025;
    msg.lon = 0.5787982706310191;
    msg.z = 0.019984725545611592;
    msg.z_units = 70U;
    msg.speed = 0.3811636620443165;
    msg.speed_units = 148U;
    msg.abort_z = 0.7279935950605179;
    msg.bearing = 0.5924143344729991;
    msg.glide_slope = 40U;
    msg.glide_slope_alt = 0.1714172376270392;
    msg.custom.assign("OBFPEQNPGXRYQNJESZJVJLLHZQEYCAAFSJTZSPFSUKXZZCFCESTDMXDOCKWBABIOPKIRMNHRXPRHUYQGZHANIBVVQDWHYOOREOGLLWNLGAJVKIDJTIN");

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
    msg.setTimeStamp(0.7664482311010115);
    msg.setSource(50092U);
    msg.setSourceEntity(64U);
    msg.setDestination(14405U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.05572183841974343;
    msg.lon = 0.233013933991425;
    msg.z = 0.1463458552249126;
    msg.z_units = 66U;
    msg.speed = 0.6834384160533379;
    msg.speed_units = 97U;
    msg.abort_z = 0.6267888786345159;
    msg.bearing = 0.6509726530618929;
    msg.glide_slope = 232U;
    msg.glide_slope_alt = 0.4088068172648439;
    msg.custom.assign("CIQUHIWDVGWMQDJXSQVOOURAPAMTFYQVUFPAHYIIAAKPGNOCXWNCMTMLEKMJEXGTZUZTDAKKHTBCYOJNZLPPOCUMAWPRIMDOJHWNHSJFFIBRYEGNCLSZXXLUZILQBSCMTKXFNUHRTTFVDDMSHEZREYSBYJFJVNVJSPEHBRUYWSEYLYSZNRWLKIQOEVPLEZWRWAKLKBQQDMZHVFNGKCTDJIPQZRPOEA");

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
    msg.setTimeStamp(0.015906679172270843);
    msg.setSource(8251U);
    msg.setSourceEntity(229U);
    msg.setDestination(46848U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.2504921189317615;
    msg.lon = 0.37577452035427095;
    msg.z = 0.11768184966126272;
    msg.z_units = 91U;
    msg.speed = 0.8225091814187487;
    msg.speed_units = 49U;
    msg.abort_z = 0.4332361732101311;
    msg.bearing = 0.10193191449061567;
    msg.glide_slope = 147U;
    msg.glide_slope_alt = 0.15890400540441263;
    msg.custom.assign("MATMPGNVFXHPOLZIXQJLQRIGKHVDUPAQTAYZGFSQEJVLUJXJPKLSKNRZSXCCLPFNQDAKCUQHQBJBYOMXFNAIVQLJGDZCTIZKBYCLUEYUXEZDAEP");

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
    msg.setTimeStamp(0.8931385085169307);
    msg.setSource(14135U);
    msg.setSourceEntity(89U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.5763499426389009;
    msg.lon = 0.42389036473991804;
    msg.speed = 0.41067979116233344;
    msg.speed_units = 17U;
    msg.limits = 208U;
    msg.max_depth = 0.6727599015649447;
    msg.min_alt = 0.9189429845533331;
    msg.time_limit = 0.12113157393542828;
    msg.controller.assign("OZIRUYXASAOSWOEEQFDTQPMLIIXCNCJJQZFWYLLMNCHJUHKMLAKRYXARZKHGDVVFIWQZTLQLPNVFUWZPZULMTBNXAUHKFTJGXOEVQRVRLKNHRJZUTANBBSCYTKNDKSTBRBMYKQWGDDNEXAWMFSWVJLPNEPVEGHIVPIGSXEHJETIHDWYOJDJZPTLOCMZKXINHDP");
    msg.custom.assign("FDACJHUNAZRSBMPGZWGXVTIBTKKLNEDRCACGRQZVYYIOXCWTGFJZWAWWXTZRMSZTDRLCQEXAITCUNJVDIKWWFFJSBGRCUAQQOFNDVWLCOPNMLQFMTRIXEFXLVZSDXLSLPJBQGTLPPTPKJGDCGPMHNBYHYDNOJNSEBJEXEBPIZCLGUHBDHWOULYRISUXVYFHYIIEMDSFVHVEMQVZKP");

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
    msg.setTimeStamp(0.9465902670626736);
    msg.setSource(25617U);
    msg.setSourceEntity(69U);
    msg.setDestination(12078U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.23936974114427279;
    msg.lon = 0.9644161184684089;
    msg.speed = 0.24897995862794864;
    msg.speed_units = 98U;
    msg.limits = 192U;
    msg.max_depth = 0.8400540001277601;
    msg.min_alt = 0.10944372834357696;
    msg.time_limit = 0.6227276979560247;
    msg.controller.assign("QSZIYQTQIAVCVTZPCZSMBDXLVMGNEYWXHFHYVGPLLPFFNTQVIVGKLFFRUCNEUJWFRZNTOBIKAXQNNGFHACOHSRPVQTZLNUTBPKAQUDKHTWCSYXRPAMDZMRNDEVLEAISIJGNQRNMKRYDCIIOXBOLYETMYRFHAQPGXLJKAVJUGYLAWGKEDWDYDMJTPUCRXQJOEBKHKJYWPZSHAOBWIFSDCEOLGVWOOJMDUUSHZPUMOEBBUSJMFWKTSZRI");
    msg.custom.assign("GTTAMDLDUSFVWEPRXLDQDASCZWXQQGCFBWUJLVYRPWANEHBVDEIUURJBXYNPZBHGVONZYHOXNLPIVTQOZIZIFDAGGCFOQXKRBMCUDCYKPUAXSDWKABTXRREJYM");

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
    msg.setTimeStamp(0.6857757489561114);
    msg.setSource(12311U);
    msg.setSourceEntity(158U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.8217332706336248;
    msg.lon = 0.7019717863889919;
    msg.speed = 0.39860621014364117;
    msg.speed_units = 37U;
    msg.limits = 117U;
    msg.max_depth = 0.6593785019094804;
    msg.min_alt = 0.691164608845158;
    msg.time_limit = 0.8991656617647378;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6701660486170238;
    tmp_msg_0.lon = 0.39037718913409547;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("SQXFBEDETCGHOOMDLKNWMTVYACDUPHONBNAVVFIXHBRYFXTIJKSXZITHJJXMJUXGGLZMMGUGPCBXYKNUBHWZSPAYOCTJEGEEGVJIEJJKCQNYPVRQSRDAAOKCLR");
    msg.custom.assign("GELJCCSMZURVJSPQSKQNKSHMXVTLIJDFEXWHIFBGXTAQGHFRQALYDOOFDNPYTRWVDOHNJZZXXTOAOGLUTAIKMEEO");

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
    msg.setTimeStamp(0.09525655611593586);
    msg.setSource(34718U);
    msg.setSourceEntity(143U);
    msg.setDestination(25092U);
    msg.setDestinationEntity(89U);
    msg.target.assign("BHKBQHXGESDQSSBRXSIGFHKVUATIJVMNHJCZHOLSECMIBLUQYJXZZDCSXHYNXESBAPJPCCGGAKMKQKOZHDPEEFOUAYTOCWUVATURJGHZKYLNCQYDZZEWZPXNIGVCCJDFGTVIMAJELJBVVKAMWVNPMWXORSPQORLYIWEWQWUVMKYKQMZGTBNKQUFEFMARPWPZDLTDHYLFONTYPHGPJVTSF");
    msg.max_speed = 0.251605009405104;
    msg.speed_units = 136U;
    msg.lat = 0.5452173258643469;
    msg.lon = 0.7113422384405019;
    msg.z = 0.8980332063556011;
    msg.z_units = 148U;
    msg.custom.assign("OWYMBQFHBEPSDHGSEERWPTWUPDANLUR");

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
    msg.setTimeStamp(0.9155794068562989);
    msg.setSource(38718U);
    msg.setSourceEntity(26U);
    msg.setDestination(59084U);
    msg.setDestinationEntity(198U);
    msg.target.assign("LLRZTKNIJLRETYOFGBKIKAWOPFADSUESCUKEUXBHKLQLLJKVZEDOFTOSSSLWHYBRONNFQQXHPRXVAMZWREIHTEXDNWAAXQOPTCZJBNTKTQPGMDSRCGQGLYYZKRVMUJNVXNAIEVZBZISYBWMOCFQPSTZYRMIUHSFMKCIPRJGHCG");
    msg.max_speed = 0.35719886010461843;
    msg.speed_units = 91U;
    msg.lat = 0.6222887555556416;
    msg.lon = 0.8869913642724672;
    msg.z = 0.42796194452540826;
    msg.z_units = 39U;
    msg.custom.assign("IFZCHHRGYMTBYAIPNZJQUVQMBBMOFKQQZIZKWALEKALVZFGRLTSCYXUSJAQHWBADOSGLCFFGULVEKZZDZDXSJJKCGPVTTUKKFDLXOXSZIQBUVPLASXTLTYTIABXJJNSRMYGRRRDLOBPIBRHDRHIUZJWHDPMKFGMQXXYPAYPCNWVJHAHFMOCLWPRQEABFMUYOJWIJVVUWENMNKCQEIODYOSXKVSSVQTEGNHOHERGPMDEWNGFEEPCIONCTYX");

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
    msg.setTimeStamp(0.01607189805011111);
    msg.setSource(20063U);
    msg.setSourceEntity(166U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(209U);
    msg.target.assign("GEVORXDEHPDWXIIDSUOFTTQXRYHGYBMVEVZNUVQQHDPKUMGZCIDJBVAKJIQYHPNTOYNKZBUDACWGAXMTAMIXNLBZRLPAXEURAEFLSCENBSYAPOZABJXRGKDMZRBKCVVWYHCGUGNWLWKJCJJHQVTOTHCEFECGFQFAQJRLZEXEOJZTLNVWYBDHYTLMXXWBSPSQQPGUF");
    msg.max_speed = 0.4707378462727525;
    msg.speed_units = 216U;
    msg.lat = 0.06909050244469339;
    msg.lon = 0.19451226184591264;
    msg.z = 0.42459618980504243;
    msg.z_units = 95U;
    msg.custom.assign("BLZNLHEJBTFTICKLBDGQULMHNUMGVVPWWOTKFLOABTERPSXNWXDGQHFVABBBJHWDMEAQIBIMGZSXUDEPI");

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
    msg.setTimeStamp(0.8702401990574579);
    msg.setSource(1200U);
    msg.setSourceEntity(115U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(32U);
    msg.timeout = 41076U;
    msg.lat = 0.9715151350723975;
    msg.lon = 0.8879984120504946;
    msg.speed = 0.7597948876438689;
    msg.speed_units = 152U;
    msg.custom.assign("LAVYZZJYWHJUEQWDOXTGLATSXKYDBKASCMZUEHYLERPYBLSNUGFOHVEVBCAVGJYNEXDDF");

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
    msg.setTimeStamp(0.4013821694775791);
    msg.setSource(41205U);
    msg.setSourceEntity(55U);
    msg.setDestination(33486U);
    msg.setDestinationEntity(86U);
    msg.timeout = 8865U;
    msg.lat = 0.814266543520118;
    msg.lon = 0.8229650582693283;
    msg.speed = 0.3203601297062302;
    msg.speed_units = 247U;
    msg.custom.assign("CIDEIYBFCCJBVOUPLEEKLTTZCDRZMXROUBX");

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
    msg.setTimeStamp(0.8759392956236945);
    msg.setSource(5940U);
    msg.setSourceEntity(206U);
    msg.setDestination(53739U);
    msg.setDestinationEntity(184U);
    msg.timeout = 59400U;
    msg.lat = 0.31575380872433123;
    msg.lon = 0.2928817060190254;
    msg.speed = 0.4715339116762718;
    msg.speed_units = 101U;
    msg.custom.assign("YFWZHPQCFUALMVEKEBCBTMOCQTLKUXEYZRFMIWBNRGTXYENYCISVQHXSRCOCUWRVPDRUBJFDQMVXHOPJYJIEZCWIKWKVMUUXMHAKGCNZLOKREHZSSADPEQBCJJCTIRXJNBELTDPUOOGJJTUMJYPYZKQNLADFVXHQGNPFVDOG");

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
    msg.setTimeStamp(0.9424171818978958);
    msg.setSource(16257U);
    msg.setSourceEntity(102U);
    msg.setDestination(22191U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.08845184449440224;
    msg.lon = 0.3578912653532791;
    msg.z = 0.2705920398341053;
    msg.z_units = 242U;
    msg.radius = 0.5842143902427483;
    msg.duration = 31671U;
    msg.speed = 0.20296157705253748;
    msg.speed_units = 67U;
    msg.popup_period = 11725U;
    msg.popup_duration = 28471U;
    msg.flags = 214U;
    msg.custom.assign("ACHTFDYZQZGQEMCSQKQHMNRYJERPAYOFAEXKOSAZCGRGLKXUCVPVOTCFXTHVZFXPRTDOLQFBEFPQBRBGMJEUKNNONMIWZTSMWVQLGOGCVBVSLDHRHCTNKKVYBINILYXKABYTMZOKWWZUAARBYVGVMFQRHJZBSWDIUXTDLYJPMLRPICEHIDYEHKTLEPFQUUOJSNPRLJQMUDAWXASCBIFNJZHXNZOBVGPSATKWJGCIHFU");

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
    msg.setTimeStamp(0.23525807186438907);
    msg.setSource(51833U);
    msg.setSourceEntity(28U);
    msg.setDestination(5811U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.06028731269421583;
    msg.lon = 0.7834383941170996;
    msg.z = 0.003999846807334673;
    msg.z_units = 45U;
    msg.radius = 0.8983330706995066;
    msg.duration = 59109U;
    msg.speed = 0.2968925445948545;
    msg.speed_units = 13U;
    msg.popup_period = 46757U;
    msg.popup_duration = 59613U;
    msg.flags = 99U;
    msg.custom.assign("VQTVFGGODKWSJYKJUMLRZRIJNWBZAAOILZKHNWTLPSESTZPYEQYBSEVJJFTSARHRILZMFOB");

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
    msg.setTimeStamp(0.9334102238987618);
    msg.setSource(14337U);
    msg.setSourceEntity(76U);
    msg.setDestination(25334U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.3736694826817456;
    msg.lon = 0.8099624211046852;
    msg.z = 0.2621467404681558;
    msg.z_units = 37U;
    msg.radius = 0.5493947245819142;
    msg.duration = 39299U;
    msg.speed = 0.9480985614816702;
    msg.speed_units = 138U;
    msg.popup_period = 23585U;
    msg.popup_duration = 10870U;
    msg.flags = 188U;
    msg.custom.assign("LIUXDXALHGRQYDQUZKSGEAFDJTPQBASTGEWJEBPYVVIRVPLSDFPHIFEDDEHQQVEUFGSHMKNXGHIJZJLVIFDGOMFSDEYQRRTKYGXQYAUCZCCNAQPKJWXQWTANTVJFNBHRBCEYIOMSXHJTZOILLMZCCMYQGZKRJAK");

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
    msg.setTimeStamp(0.34032409801180163);
    msg.setSource(53377U);
    msg.setSourceEntity(132U);
    msg.setDestination(12318U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.6330891271997406);
    msg.setSource(41031U);
    msg.setSourceEntity(20U);
    msg.setDestination(19646U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.6347184293529371);
    msg.setSource(51602U);
    msg.setSourceEntity(233U);
    msg.setDestination(61284U);
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
    msg.setTimeStamp(0.7722284084977163);
    msg.setSource(36476U);
    msg.setSourceEntity(239U);
    msg.setDestination(51038U);
    msg.setDestinationEntity(26U);
    msg.timeout = 63955U;
    msg.lat = 0.6660802598258867;
    msg.lon = 0.7250764983538344;
    msg.z = 0.12009295053120728;
    msg.z_units = 62U;
    msg.speed = 0.46473703460116755;
    msg.speed_units = 178U;
    msg.bearing = 0.3200383492053924;
    msg.width = 0.07130047243807802;
    msg.direction = 109U;
    msg.custom.assign("CZVZQGNWQMPVRORAWYKSBXLGECVKIHNKZZGXWBBPRPOKHCYEIGMNUJOHJGDEEFVXFFAGEASJQQMFZRAONUIUDPXNWVSYATNBAEXNTLVCAKKMXKWSSLTDXTCIUGMHVWLYCFBMZJTXZTWRSHDJBQLYPGWFBPTEDIBRRKDLYQXISSZZMMYOIJYBTHDLUPVFF");

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
    msg.setTimeStamp(0.014339992331889317);
    msg.setSource(39621U);
    msg.setSourceEntity(35U);
    msg.setDestination(49545U);
    msg.setDestinationEntity(133U);
    msg.timeout = 16859U;
    msg.lat = 0.5447859117430112;
    msg.lon = 0.42528790520954396;
    msg.z = 0.9942010302990977;
    msg.z_units = 96U;
    msg.speed = 0.7226580987287023;
    msg.speed_units = 216U;
    msg.bearing = 0.5937997695120675;
    msg.width = 0.7243010976013389;
    msg.direction = 192U;
    msg.custom.assign("WVJDPZXQNENAEBRVWGFOLDUQHLWUZRUVTYUCOPIIDJLHJHZYDLXAWHMFFPJIEIOMNSHXSDHJNYMCLOBTXVEXMMSSXNGPGDVUIBNEQJOEPOSYWIIZIEAXAVFBQTWDQGPGBTBBKURG");

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
    msg.setTimeStamp(0.05698360278715697);
    msg.setSource(20450U);
    msg.setSourceEntity(96U);
    msg.setDestination(12602U);
    msg.setDestinationEntity(115U);
    msg.timeout = 49056U;
    msg.lat = 0.4572835260627316;
    msg.lon = 0.6689034052553657;
    msg.z = 0.901567049924439;
    msg.z_units = 180U;
    msg.speed = 0.8115821756960749;
    msg.speed_units = 235U;
    msg.bearing = 0.19395927963072424;
    msg.width = 0.20647264173739754;
    msg.direction = 156U;
    msg.custom.assign("EDTKOTGREDIYGHCVEURRDVRBQHQAQXUOWBPNHHPMFUUEGYMTKTIQBSHXNUMGRBBSAFFVSFZGPTLCGKSCOXVPJZKCRYFBAUOIRWLWKWLODNXSKVNBRSSDDYHJCDHQVCJEWIYTWVGKXLYNMVIPFSWFZNBUEFPZTZAWAVZXPAZQMYXL");

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
    msg.setTimeStamp(0.5536174568333273);
    msg.setSource(10917U);
    msg.setSourceEntity(217U);
    msg.setDestination(30106U);
    msg.setDestinationEntity(26U);
    msg.op_mode = 110U;
    msg.error_count = 59U;
    msg.error_ents.assign("NPYRBSWIDJJBTZPNSUUIBAKLFABMSNVFECKPXWXTZICWPXLURTMFJAAVSSBGIQMCQRYGKRVMEPPRMLIXKJODFIEHZEUGAXDEWDNWIXABXMTPDXMCFJETOGQRWCUUXNRZJENJHSPTWJNYOVMYWPBOZQUKOOGLODLKHWFHVHJCDSASVXHEQIETNZRVZHPLGBGLNVRGHIQCLYTWSJASDZV");
    msg.maneuver_type = 60215U;
    msg.maneuver_stime = 0.5069452747205982;
    msg.maneuver_eta = 18430U;
    msg.control_loops = 3882345653U;
    msg.flags = 23U;
    msg.last_error.assign("AKDROPQLUBHAMMRCWBPVUDDWNJMRZYNJHGZIMOEPITUBKQFDZYGEZDVHDQMFQVCTSLUTRLCULWWANARBYHTCTJYEZKWLPHGEOBPSKOPWSOJESCG");
    msg.last_error_time = 0.3069123513577362;

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
    msg.setTimeStamp(0.49318720767540936);
    msg.setSource(54171U);
    msg.setSourceEntity(195U);
    msg.setDestination(38991U);
    msg.setDestinationEntity(70U);
    msg.op_mode = 226U;
    msg.error_count = 227U;
    msg.error_ents.assign("QAVAXHNIVUVGBMQPELSZWEEXTQDTDMZRNCLYPHQTCXGRWHOBJIZDYTFCMAVTCNOAYISGGSGTHBPPKNNCFIFGUOUNCQAKHBQROCFBSEVWRCLXJUOSWGVRELXWUKPIWSLUJJUOWMFOGKFKHQEFZEJOQPDFLRRPSNHVFVIMSZJMPTXGISXNKBWHXWMHYHZIEYRJJBPVTDDZFQBWCNDYCLVMAOLZJUMRYTORTMKY");
    msg.maneuver_type = 2244U;
    msg.maneuver_stime = 0.5588133259001087;
    msg.maneuver_eta = 64608U;
    msg.control_loops = 2119647454U;
    msg.flags = 75U;
    msg.last_error.assign("YAZBNBTVBVLTEJTJEZXQAGZBWRLEZSGTMMXXNCOVPISBGZWGUTSILRNSNIDIWFFHGUHFCYGWNQHQNBEAKHOEVKDKRRJDFQRKRGPDUHEVYUDZQJSENNULJSQLYKKOVOWJCCGDGDWZOMYAMAMJYIYXMKHXVXULPMAHQBANWIVQLCVKPMKHCYFOLXCDKQPMULZZISBROTWTUU");
    msg.last_error_time = 0.6423131284762297;

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
    msg.setTimeStamp(0.10371195695332491);
    msg.setSource(28424U);
    msg.setSourceEntity(138U);
    msg.setDestination(1519U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 196U;
    msg.error_count = 29U;
    msg.error_ents.assign("JRVFBZLSEUBUGTWKDJLUCLMEXFPRZNVCMDMMBHBIMCHUGFXQWWWXENKAPQTUOSHEXKSUXVBYOPWKDYWQDGTXKJLQZATVEQUHYNJNZDKWSVLULIUHVTRILOEGPQOHAKIPOZPREVQQTDIBOHYFDIXZFRJHLOKNFASNIBBJVRREAOYQDCMNIEYOCSISXDCAMARQPPGTIGVARKSYFCNJZNXJZCJSHLSF");
    msg.maneuver_type = 37064U;
    msg.maneuver_stime = 0.91705712051402;
    msg.maneuver_eta = 64567U;
    msg.control_loops = 2258696825U;
    msg.flags = 252U;
    msg.last_error.assign("UXUEQIWVYJCN");
    msg.last_error_time = 0.9240248752887414;

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
    msg.setTimeStamp(0.314501867068648);
    msg.setSource(1932U);
    msg.setSourceEntity(70U);
    msg.setDestination(40730U);
    msg.setDestinationEntity(22U);
    msg.type = 236U;
    msg.request_id = 32992U;
    msg.command = 52U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.9946782983142174;
    tmp_msg_0.lon = 0.46167052833526423;
    tmp_msg_0.z = 0.6946822727231069;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.radius = 0.16881238006152688;
    tmp_msg_0.duration = 59295U;
    tmp_msg_0.speed = 0.4586055989442216;
    tmp_msg_0.speed_units = 111U;
    tmp_msg_0.popup_period = 12218U;
    tmp_msg_0.popup_duration = 13667U;
    tmp_msg_0.flags = 54U;
    tmp_msg_0.custom.assign("HBIUAVSQGBCOOHXXHMUZKHNIDWMNHDHDRRLFQSQGGLQTSNPFHT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1130U;
    msg.info.assign("HRJLBBYPPMWMHXBDCOTRNPKFRJWGIBHTAWFNISZQGGSYAQOCDDLQEGTLKSZNOMCYUMMJVPSK");

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
    msg.setTimeStamp(0.00015867782432277266);
    msg.setSource(19281U);
    msg.setSourceEntity(160U);
    msg.setDestination(23282U);
    msg.setDestinationEntity(109U);
    msg.type = 208U;
    msg.request_id = 38729U;
    msg.command = 228U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 25105U;
    tmp_msg_0.lat = 0.7369416174862788;
    tmp_msg_0.lon = 0.7623695537185777;
    tmp_msg_0.z = 0.24473755286935805;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.8842204890521663;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.duration = 59066U;
    tmp_msg_0.radius = 0.8820069485459762;
    tmp_msg_0.flags = 117U;
    tmp_msg_0.custom.assign("QEQKULWBOSEIOZDJPZSNHUAZUJBKJGTDFZLANCUYXWPRFXDKEBMEXHNVLIJFLRKCFRXPBUJBLMOUENLADRFIPGODFEANWAFRAKMWGTMPCKIVTVGPCFRLBTQYHXGBMJYOLZSZIMOMMHEEXPTVSWTMVKKOGXIRBWGNUYTIFTGIPPFHAYWZZEHZE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63150U;
    msg.info.assign("WUKGHSOKVXKRWIJBVJSPNFQPJLBKVCPKESDYNXHPJPUKQDMQJYFCIWHHGFYWFNDNSUHOCMXZNCUPGYPQKDYQ");

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
    msg.setTimeStamp(0.38255816001108434);
    msg.setSource(39452U);
    msg.setSourceEntity(75U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(192U);
    msg.type = 30U;
    msg.request_id = 22581U;
    msg.command = 156U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 43782U;
    tmp_msg_0.lat = 0.12891560923367273;
    tmp_msg_0.lon = 0.7607360709953217;
    tmp_msg_0.speed = 0.07968433109267681;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.custom.assign("PRNCMEPYHBBRJXFYCHBWFJQZIFZOXZEHPKRNUYRSIAVZTQQRYIUJLIOBOMSONFJMUOFAXPZDSRBZMGAWPXEHBDKISTVKJQLWIXDNRUKLVXMXQTNEUNTFOPZFYBSTCEALTECAVFHAJFGNAZLJGEUMHQKAKASWDRLETSKDGIPGYXJKWXQGOHPWWUMDCTLWIJGH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44938U;
    msg.info.assign("LOMDKCNYFFBPJZCUOQGGKDQFMGWLATOUSZRUQBOHSTVFAHZOOISPKAEJWIVGVHAVXOYCGQUQAPMWVIYHGDWMZPBYJYLGCLKBNYXQXNTIVTPMCXJRLUKZPZUA");

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
    msg.setTimeStamp(0.32614388898037394);
    msg.setSource(24892U);
    msg.setSourceEntity(24U);
    msg.setDestination(46265U);
    msg.setDestinationEntity(170U);
    msg.command = 51U;
    msg.entities.assign("UGZVDMVVZMZXUUYDQMVBCPAGTMHPFKRCRWSTAESXZGIMJTONHSSGTTBAJRDVZJNANSVSYGAIDCUZYWHQIBOFGIYQAOFRCUANQHDGXMCTQWYHZBROMAPEDLXNAVQOEMJBZUHHZXXSWPDBHCKPLIJXHIPNDJREKPKYUFNILECPCYDESSWBZHEQQYUKQREKVUCJGVBOTCTMQFLWIBIX");

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
    msg.setTimeStamp(0.4218622541513116);
    msg.setSource(5692U);
    msg.setSourceEntity(167U);
    msg.setDestination(21277U);
    msg.setDestinationEntity(35U);
    msg.command = 87U;
    msg.entities.assign("HSNEZTUVXDQLZVFVIMUXQKQBFINXBEQRGNPEAFQKDJSHUMHFMWLPDAJIXBHIPDGGCCGYOFYHYPMJRKNXZQAXCDPTFLGSYBSWIRPBWYRQDCBLDINLMVOL");

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
    msg.setTimeStamp(0.5570005336805792);
    msg.setSource(10942U);
    msg.setSourceEntity(73U);
    msg.setDestination(2534U);
    msg.setDestinationEntity(24U);
    msg.command = 161U;
    msg.entities.assign("RTSVEVZLPUQOQDGSQNGXOYCMOQPEUEBKIZF");

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
    msg.setTimeStamp(0.007554203788261216);
    msg.setSource(5220U);
    msg.setSourceEntity(156U);
    msg.setDestination(52502U);
    msg.setDestinationEntity(200U);
    msg.mcount = 195U;
    msg.mnames.assign("OAQUKNRCGWIWDGRXVMRDGTCZORXELEUTQRGZJDANPQAWPFBMZWIEEGQPZEVSTIYSDLAELDXBYUOJVZIDSSLHWIUVVIZDCCYJVK");
    msg.ecount = 69U;
    msg.enames.assign("AERMAUAOOOLODPHXHSMMEGGQVYCOUJQUEHKNELONAZLKNDKZXCWWZBTGSALYQEW");
    msg.ccount = 48U;
    msg.cnames.assign("OTLLEZHIJCNKSERHKWSDXINUXTNFENJDAGXBHPNWKCDBKLOSUGJQSVGRBETABZXTMFVJMTERMGNMOOKDNIABEFRXCXGRUBLQLPHGSZZRHGLRHFLCALYIUXWZHQGCCXPHEOPUBBLTYVEYMOTUMCTRHVFWZQQFFDQPZUKAFSPCMNYKQWRPWWEVODAUJYHOIPETUADYCFGJPIYVMNNQJXQMVZDVSTFVYIJJYWDW");
    msg.last_error.assign("YFEJFWABZWALZQVHARNAABJRVVNSVGKMDIVSCMIGYLCVAFASDNWNGJJYOEGYDGFPWAFFMWXRPPTKOYUBQPEDZPULXDVMHLGCUDHYZQXFFILKVMEBVEBROOECTTPNHXQOMWDNBLJXNBBOTLUJMLSKPKTDORTH");
    msg.last_error_time = 0.11874357747516207;

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
    msg.setTimeStamp(0.22386039530355195);
    msg.setSource(4334U);
    msg.setSourceEntity(248U);
    msg.setDestination(64484U);
    msg.setDestinationEntity(105U);
    msg.mcount = 229U;
    msg.mnames.assign("SGMOWJRBCLIVJEDYVZVHDQKQEYREQUURZXRICWBWACIPVJHAOEOSWMNUGIECYNAJOPTRPGGPLIIEFYSQJBPUHCHGCFB");
    msg.ecount = 244U;
    msg.enames.assign("YUJGQVRBFFNXRFGIAZGZZCJJLEKOVCYZYUAJRGTARYADHMXIQZSBCXMEPLWHUVDNCCLNDVTBTHNPGTCTIKEQYISVEHRMVKJXHBKOGCDEKOERRYTWJYGUMBBFLDAXEDSFVWAHDBHPWPOWOZZWM");
    msg.ccount = 166U;
    msg.cnames.assign("RVLJAJGFIJLYNYDZKFHZKZKJSQYEZUFMCOQYLXIBUMQITEFRKYPADRSHMA");
    msg.last_error.assign("DXQGOMOVIOKMNANFRPICCDYE");
    msg.last_error_time = 0.02452668764486876;

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
    msg.setTimeStamp(0.8403876144353006);
    msg.setSource(19722U);
    msg.setSourceEntity(121U);
    msg.setDestination(23624U);
    msg.setDestinationEntity(104U);
    msg.mcount = 170U;
    msg.mnames.assign("UCMYNUEOJLBTGJBIALITHTBVPWWCFTFQWIBZSAUQJPIDYCYNLEVEBKDUCUGSGKGIMNLWCMRSHAQOKAOVCXLYXMFHPSIX");
    msg.ecount = 156U;
    msg.enames.assign("XDJLZECNQYUVWOAADDCXEEYYZWGCKIOAZZVLNOUPEHZGVNGSBGSYPFNNJZDWNSJODIXETSPWYOFAVFBFJXXBXPXLKSJLUWZMQLUHADFTSQMRMEHKCBHPCKFEIAGQJYBVLHUVHXRMTQJMRWZSAKTTQGJQUTXCUATYIKBIFMSGBWCOJHRRBPIQBDRMIHQMFLY");
    msg.ccount = 87U;
    msg.cnames.assign("FKLNATZEMPCOEYKPXIVJQSLWGOOFTFIPTVZMNRWVKXRSAMQBASDKFHH");
    msg.last_error.assign("BPGONLJTBGQNRXLXSWUQZFWSRUGVHXZIVPCJNQNKPJCCXYYHYQUNGRIOAGQPTMLHIJRUMIYOEOBVRGHPMKRWBORLXEPAXJABAERBTQTZKAFMKFDYTPSLKVZUCSAKGSQEJFLDWDIEO");
    msg.last_error_time = 0.543670401649734;

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
    msg.setTimeStamp(0.8174396388507635);
    msg.setSource(43752U);
    msg.setSourceEntity(68U);
    msg.setDestination(27291U);
    msg.setDestinationEntity(29U);
    msg.mask = 122U;
    msg.max_depth = 0.9266515507666742;
    msg.min_altitude = 0.30880660964478945;
    msg.max_altitude = 0.054398447575499276;
    msg.min_speed = 0.8871722437391841;
    msg.max_speed = 0.5560174376214919;
    msg.max_vrate = 0.3619783410824149;
    msg.lat = 0.7707854255465632;
    msg.lon = 0.14611918805229962;
    msg.orientation = 0.7983502475272658;
    msg.width = 0.11239326545162742;
    msg.length = 0.9134199638231714;

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
    msg.setTimeStamp(0.012304002269157732);
    msg.setSource(37126U);
    msg.setSourceEntity(52U);
    msg.setDestination(62231U);
    msg.setDestinationEntity(75U);
    msg.mask = 7U;
    msg.max_depth = 0.5646672101529483;
    msg.min_altitude = 0.3968810761621643;
    msg.max_altitude = 0.23584842421277052;
    msg.min_speed = 0.6881394729758741;
    msg.max_speed = 0.9836776242277145;
    msg.max_vrate = 0.6451525718364254;
    msg.lat = 0.3753395563515103;
    msg.lon = 0.9099285205195778;
    msg.orientation = 0.23029795760100347;
    msg.width = 0.21471884662541385;
    msg.length = 0.6379367433383555;

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
    msg.setTimeStamp(0.29292848715714037);
    msg.setSource(30110U);
    msg.setSourceEntity(253U);
    msg.setDestination(61152U);
    msg.setDestinationEntity(113U);
    msg.mask = 201U;
    msg.max_depth = 0.19036716994787817;
    msg.min_altitude = 0.7800417645309717;
    msg.max_altitude = 0.0023635999247392236;
    msg.min_speed = 0.9229540029901998;
    msg.max_speed = 0.7250495105901836;
    msg.max_vrate = 0.45976333740732056;
    msg.lat = 0.7087028404958942;
    msg.lon = 0.21058390170575614;
    msg.orientation = 0.2870981016332158;
    msg.width = 0.822231604316668;
    msg.length = 0.5330639249716036;

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
    msg.setTimeStamp(0.05967752734240994);
    msg.setSource(37598U);
    msg.setSourceEntity(118U);
    msg.setDestination(24421U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.8302834692111366);
    msg.setSource(1616U);
    msg.setSourceEntity(119U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.31980646332315443);
    msg.setSource(33508U);
    msg.setSourceEntity(59U);
    msg.setDestination(53351U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.4597708672400763);
    msg.setSource(41960U);
    msg.setSourceEntity(221U);
    msg.setDestination(21919U);
    msg.setDestinationEntity(76U);
    msg.duration = 44217U;

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
    msg.setTimeStamp(0.026693578423193642);
    msg.setSource(38633U);
    msg.setSourceEntity(201U);
    msg.setDestination(45436U);
    msg.setDestinationEntity(234U);
    msg.duration = 50600U;

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
    msg.setTimeStamp(0.2796181326691036);
    msg.setSource(51138U);
    msg.setSourceEntity(64U);
    msg.setDestination(19248U);
    msg.setDestinationEntity(237U);
    msg.duration = 44940U;

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
    msg.setTimeStamp(0.8054526713116463);
    msg.setSource(47263U);
    msg.setSourceEntity(107U);
    msg.setDestination(19382U);
    msg.setDestinationEntity(235U);
    msg.enable = 152U;
    msg.mask = 3981653799U;
    msg.scope_ref = 1258295425U;

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
    msg.setTimeStamp(0.9004649488368793);
    msg.setSource(38329U);
    msg.setSourceEntity(167U);
    msg.setDestination(19865U);
    msg.setDestinationEntity(54U);
    msg.enable = 153U;
    msg.mask = 3838343736U;
    msg.scope_ref = 3574957748U;

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
    msg.setTimeStamp(0.7570783472676803);
    msg.setSource(7560U);
    msg.setSourceEntity(239U);
    msg.setDestination(6459U);
    msg.setDestinationEntity(169U);
    msg.enable = 66U;
    msg.mask = 2404211797U;
    msg.scope_ref = 2557098202U;

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
    msg.setTimeStamp(0.21631443447929588);
    msg.setSource(5579U);
    msg.setSourceEntity(251U);
    msg.setDestination(42693U);
    msg.setDestinationEntity(163U);
    msg.medium = 111U;

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
    msg.setTimeStamp(0.3467287274687887);
    msg.setSource(13208U);
    msg.setSourceEntity(48U);
    msg.setDestination(17328U);
    msg.setDestinationEntity(139U);
    msg.medium = 87U;

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
    msg.setTimeStamp(0.796094892537578);
    msg.setSource(51518U);
    msg.setSourceEntity(154U);
    msg.setDestination(5627U);
    msg.setDestinationEntity(101U);
    msg.medium = 245U;

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
    msg.setTimeStamp(0.9378433853275889);
    msg.setSource(53084U);
    msg.setSourceEntity(101U);
    msg.setDestination(18773U);
    msg.setDestinationEntity(231U);
    msg.value = 0.7941760184271766;
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
    msg.setTimeStamp(0.774550267399811);
    msg.setSource(23331U);
    msg.setSourceEntity(166U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(245U);
    msg.value = 0.9159036610876402;
    msg.type = 119U;

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
    msg.setTimeStamp(0.8861574142580473);
    msg.setSource(63059U);
    msg.setSourceEntity(76U);
    msg.setDestination(18219U);
    msg.setDestinationEntity(15U);
    msg.value = 0.25039786113250306;
    msg.type = 187U;

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
    msg.setTimeStamp(0.8282649554453448);
    msg.setSource(55817U);
    msg.setSourceEntity(107U);
    msg.setDestination(58303U);
    msg.setDestinationEntity(153U);
    msg.possimerr = 0.8441041661552456;
    msg.converg = 0.48616503341453776;
    msg.turbulence = 0.7336073577133152;
    msg.possimmon = 143U;
    msg.commmon = 59U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.6643568911829643);
    msg.setSource(31210U);
    msg.setSourceEntity(183U);
    msg.setDestination(9820U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.4236358744759646;
    msg.converg = 0.27468643001715576;
    msg.turbulence = 0.430303080468346;
    msg.possimmon = 41U;
    msg.commmon = 5U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.14143044507472669);
    msg.setSource(39321U);
    msg.setSourceEntity(99U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(244U);
    msg.possimerr = 0.5230852045111715;
    msg.converg = 0.08536867252657332;
    msg.turbulence = 0.026990329664531743;
    msg.possimmon = 181U;
    msg.commmon = 132U;
    msg.convergmon = 145U;

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
    msg.setTimeStamp(0.49505501024551635);
    msg.setSource(43213U);
    msg.setSourceEntity(27U);
    msg.setDestination(26743U);
    msg.setDestinationEntity(118U);
    msg.autonomy = 143U;
    msg.mode.assign("ZWQDQLIZPERIGYHCFTWBPBRCIGINUVUSZHLTHJLXOGOCPJQUTNMZAYXAUVQFFBNNNVPSYMLTLHCCXRJCQBXEAOSGDBBCKSWFFT");

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
    msg.setTimeStamp(0.672586887828355);
    msg.setSource(64594U);
    msg.setSourceEntity(41U);
    msg.setDestination(23604U);
    msg.setDestinationEntity(71U);
    msg.autonomy = 151U;
    msg.mode.assign("IKSQIOSTCYG");

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
    msg.setTimeStamp(0.09813967304006643);
    msg.setSource(43784U);
    msg.setSourceEntity(42U);
    msg.setDestination(27770U);
    msg.setDestinationEntity(160U);
    msg.autonomy = 119U;
    msg.mode.assign("OMRMQGWVMSBXYWNHWGFVCDXJMAZUWZKGDEKYLBZAOHFEOZYSLUFMRPHNFILAJPPKGYGAWNFBUIKCVHJLWCSLECSYXBAKFDKUGRBEETIHAVJIPQPBIZKVQORYCZOESBDODTIXSHCOSMDJVLNLARPUWJANDDRHRZTZFUSGVMAFQUTF");

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
    msg.setTimeStamp(0.7320006486358956);
    msg.setSource(50520U);
    msg.setSourceEntity(253U);
    msg.setDestination(52776U);
    msg.setDestinationEntity(242U);
    msg.type = 52U;
    msg.op = 60U;
    msg.possimerr = 0.42544286479223703;
    msg.converg = 0.58643817847491;
    msg.turbulence = 0.7559646593249413;
    msg.possimmon = 97U;
    msg.commmon = 111U;
    msg.convergmon = 185U;

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
    msg.setTimeStamp(0.5037639768368724);
    msg.setSource(47082U);
    msg.setSourceEntity(207U);
    msg.setDestination(11422U);
    msg.setDestinationEntity(164U);
    msg.type = 193U;
    msg.op = 136U;
    msg.possimerr = 0.5220406410497422;
    msg.converg = 0.011998667638343452;
    msg.turbulence = 0.3615015543390214;
    msg.possimmon = 228U;
    msg.commmon = 202U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.9868656575255902);
    msg.setSource(63087U);
    msg.setSourceEntity(220U);
    msg.setDestination(6137U);
    msg.setDestinationEntity(149U);
    msg.type = 151U;
    msg.op = 158U;
    msg.possimerr = 0.03119687934870452;
    msg.converg = 0.9831659668471974;
    msg.turbulence = 0.698969448907992;
    msg.possimmon = 17U;
    msg.commmon = 190U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.5972764671049959);
    msg.setSource(22253U);
    msg.setSourceEntity(77U);
    msg.setDestination(28406U);
    msg.setDestinationEntity(106U);
    msg.op = 19U;
    msg.comm_interface = 64U;
    msg.period = 65497U;
    msg.sys_dst.assign("PVBVXYVZRBUGRGDDWCDJSCMNLVMBKSAQIQOAPGEZAKYOYFLNVUMYQKSHKHUGARMTXKFJBSCTIHNOQYWOPVOEJWPJATMJGQGUYDHWWMLCIONBKERZNOCEUDZXFHJANYSIE");

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
    msg.setTimeStamp(0.48157775023828475);
    msg.setSource(3293U);
    msg.setSourceEntity(11U);
    msg.setDestination(13905U);
    msg.setDestinationEntity(246U);
    msg.op = 226U;
    msg.comm_interface = 72U;
    msg.period = 33968U;
    msg.sys_dst.assign("GZPKFEXPMHGORICAMHUTJITTCLYEFUFWRVTRXXVXCMONZ");

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
    msg.setTimeStamp(0.7753686854667536);
    msg.setSource(60803U);
    msg.setSourceEntity(216U);
    msg.setDestination(23505U);
    msg.setDestinationEntity(251U);
    msg.op = 233U;
    msg.comm_interface = 43U;
    msg.period = 22493U;
    msg.sys_dst.assign("NDGDXZCILXJOXTFPDJKMBLORJHYNQSBPJHSGEEUZFBTMBCKABITXXZEKBCUQEPFLDZKUOEUPNBGDKLSEKAEYPPYFGYIWGANOOWPIFLQOSAAFDIXQMCFFRP");

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
    msg.setTimeStamp(0.7571978579885372);
    msg.setSource(19219U);
    msg.setSourceEntity(79U);
    msg.setDestination(25463U);
    msg.setDestinationEntity(44U);
    msg.stime = 3034118059U;
    msg.latitude = 0.6040238461538113;
    msg.longitude = 0.3745607640653228;
    msg.altitude = 22033U;
    msg.depth = 9930U;
    msg.heading = 41912U;
    msg.speed = 12066;
    msg.fuel = 29;
    msg.exec_state = -40;
    msg.plan_checksum = 12662U;

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
    msg.setTimeStamp(0.05856231200950135);
    msg.setSource(25291U);
    msg.setSourceEntity(217U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(7U);
    msg.stime = 3505393728U;
    msg.latitude = 0.3317101243876728;
    msg.longitude = 0.8288096320545265;
    msg.altitude = 10969U;
    msg.depth = 53028U;
    msg.heading = 31126U;
    msg.speed = -22600;
    msg.fuel = -116;
    msg.exec_state = 68;
    msg.plan_checksum = 24272U;

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
    msg.setTimeStamp(0.12377661439744714);
    msg.setSource(32995U);
    msg.setSourceEntity(13U);
    msg.setDestination(53689U);
    msg.setDestinationEntity(97U);
    msg.stime = 1241593737U;
    msg.latitude = 0.2943943420334775;
    msg.longitude = 0.2251939954904899;
    msg.altitude = 34828U;
    msg.depth = 5138U;
    msg.heading = 44039U;
    msg.speed = 22652;
    msg.fuel = -3;
    msg.exec_state = 9;
    msg.plan_checksum = 24380U;

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
    msg.setTimeStamp(0.4653856174225405);
    msg.setSource(61209U);
    msg.setSourceEntity(105U);
    msg.setDestination(61728U);
    msg.setDestinationEntity(220U);
    msg.req_id = 35721U;
    msg.comm_mean = 69U;
    msg.destination.assign("WBEJILTIVRRKAQHWFIGDPQBSXEWUBSIUDZLOLVKLKDWHDAFDVLODKBDGVPYZROHHYTICYTSUTBGJEJSFPQYHNORMCMAJNVOYMNAFTPLPSTIAKCLQKUQUFEJTINORJIZCNIOGXZBOFSNYHJA");
    msg.deadline = 0.4332221535370806;
    msg.range = 0.025455117893846912;
    msg.data_mode = 8U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 36778U;
    tmp_msg_0.lat = 0.0853628792508383;
    tmp_msg_0.lon = 0.6372621327250789;
    tmp_msg_0.z = 0.37258644883981873;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.024378260824752807;
    tmp_msg_0.speed_units = 0U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8076329177289047;
    tmp_tmp_msg_0_0.y = 0.6904194471371368;
    tmp_tmp_msg_0_0.z = 0.1475130423541514;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FGBKKYPEJBVSEZCYFDFORFXRQSLOYTRIWVHALVPJUXMUXKTUZQDYZHTFBDTHFMGNLZQRAUIAIKSMPBGAHKMYQZBTVNXGLVSBJJHIOCSVPMFWPYAKRTQPQXIWBWOGCAROCDJECWNCFRBSWGSZN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PGFLAOJTIRKMWZYXRVTFEIQLKCDSSBOBTYUCFZXQOXPRHWJCTUIWGMXRFONUSBWZIAQWJOXAPUNKWUYXSGKZIWZFFNHVJJYRGEQSSBAMTTEVBAUJMLCRDOVBCNPQLENTHISCFVVGNQVDSVWFLAHPNOTRMYPHBBQZOZEDOUJSKPWOLDKMXKJBGERGIUDEGDVVAFDMYBD");
    const char tmp_msg_1[] = {50, 32, -124, 83, -112, -108, -24, -13, -86, -63, 42, -80, -112, 78, -110, 34, 66, -125, -86, -80, -82, 126, -27, 5, 8, 16, 1, -10, 80, 25, -18, 37, -65, -81, 8, 49, -63, 57, -18, 39, -69, -55, -63, 105, 76, 10, -36, 126, -2, -118};
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
    msg.setTimeStamp(0.5034899291522423);
    msg.setSource(15972U);
    msg.setSourceEntity(42U);
    msg.setDestination(14538U);
    msg.setDestinationEntity(172U);
    msg.req_id = 33551U;
    msg.comm_mean = 176U;
    msg.destination.assign("KGMSGROIYJTANXIBRXVALTVJAYPQJJDYBOCTSDMXWHFGCVMDAHKPLGZQKWMEKNFBXNZIJDAFBYVWMMWITKDSIRDYTPGHDTPGUCQZUVLOPIHEAZRLTYREBNXNOJEVZQEXJRRNFHKYYOSULCWNLD");
    msg.deadline = 0.09720630043567402;
    msg.range = 0.6461118165407773;
    msg.data_mode = 142U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1388933074270675;
    tmp_tmp_msg_0_0.speed_units = 88U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.08636051929317345;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.47235219434611464;
    tmp_msg_0.lon = 0.5969797419661935;
    tmp_msg_0.radius = 0.7211788090848907;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FNXUJMBPIBOZZVVINVZSGGVQEXSZTCMMESKPHLYEGEVVXSYKKNOMIOYWDCCYDHPSYDALHUBOVIXFARRSGIPXAGPZBFUQNDPKWUVBFARMQIOKDMWPILOOHGSLXDAJQBNTIGFETJGJYHNXWRCHPERNI");
    const char tmp_msg_1[] = {-113, 85, -71, -75, 44, 108, 32, 25, -92, 52, 111, 103, -96, -123, -5, 46, -50, 99, 31, 105, 119, 8, -108, -11, 19, -10, -72, 107, 25, 70, 81, -104, -97, 17, -10, 70, 25, -1, -102, 88, -61, -101, -110, -33, 12, 83, 67, -92, 121, 123, -42, 21, 113, -88, -35, -87, -102, 1, -6, 6, -60, 49, -46, -110, 114, 80, -128, -8, 84, 36, -122, -54, -13, -105, -73, 95, -77, -109, -117, -95};
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
    msg.setTimeStamp(0.41634296701810325);
    msg.setSource(11098U);
    msg.setSourceEntity(216U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(142U);
    msg.req_id = 39379U;
    msg.comm_mean = 55U;
    msg.destination.assign("IEITNAEGWJROKPRXFLAWVFDQBJQZYESAUNNRHDEMGPKUOMVPLFJQKGIMCVHYGLBTGWJVRNTPHQXVZSLWXFEVQBNODURYPKXNJ");
    msg.deadline = 0.8952883903652771;
    msg.range = 0.9122849095881578;
    msg.data_mode = 19U;
    IMC::ImageTracking tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TRFSKTDXEFAQICLZKV");
    const char tmp_msg_1[] = {1, -72, -9, -104, 57, -11, 80, 32, 116, -57, 69, -21, 15, 121, -26, -50, -64, -109, 110, 90, -118, 15, 6, -122, -2, -43, -72, -67, 3, -48, 18, 10, -90, -15, -21, 58, 61, -122, 67, -69, -3, -25, -102, -97, -117, 112, 74, 112, -8, -83, 41, -100, 49, 11, -111, -97, -18, 25, -32, -58, 31, -92, -22, 96, -90, -6, 119, -86, 118, 59, 88, 89, 8, 59, 15, -13, -104, -11, 43, 98, 53, 76, -34, 84, 47, 67, 91, -71, -34, 93, -68, 32, -115, -120, -103, 23, -65, 100, 24, -82, 102, 11, 21, -37, 2, 86, -84, -33, -127, -36, -44, 36, -117, -66, 54, -4, 76, 90, -124, 68, 3, 82, 123, 6, -108, 37, -25, 14, 115, -68, -58, -90, 0, 24, 96, -70, -119, 86, 125, 41, 119, 83, 36, 123, 94, 90, 46, 108, -69, -49, -32, -96, 74, 20, -65, 78, 0, 95, 57, 69, 94, -42, 38, -7, -101, -45, -83, 5, 119, -47, -95, 79, 51, 24, -71, -95, -119, 67, -41, 68, -31, 25, 13, -20, -13, 94, 45, 124, -68, -20, 6, -87, -5, 41, -57, -109, -109, -77, 118, -29, 116, 95, -108, 83, 69, 63, -68, -93, 29, 91, 62, 106, 19, -100, 44, -17, 22, 96, 79, 99, -4, -35, -78, -65, 64};
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
    msg.setTimeStamp(0.08314413044071334);
    msg.setSource(18983U);
    msg.setSourceEntity(162U);
    msg.setDestination(23719U);
    msg.setDestinationEntity(233U);
    msg.req_id = 20199U;
    msg.status = 3U;
    msg.range = 0.16586873749499043;
    msg.info.assign("KWPCAZWMOBQKPVFIPNEGMVIACLVFLDFBSNDTVUEPKQIGMXPITOJFQEWMVHUWJLYPYDRSJTODHENJKSAXWBLZXCTALUQJORYHERWNXXTCKYAAXMZFGUHEAHSBRRPUHPKSOOAYZJMGXUJCCYOZQFTBFSOZGNGQSNJORQEMKAIXDVBLENVFLECYBXUHVHCXLEMYSMDGDTBWICCNAWDNHVRYKJGFDSNUBRIIQZPT");

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
    msg.setTimeStamp(0.1259055933704143);
    msg.setSource(60662U);
    msg.setSourceEntity(183U);
    msg.setDestination(14425U);
    msg.setDestinationEntity(131U);
    msg.req_id = 43030U;
    msg.status = 58U;
    msg.range = 0.05485166056622626;
    msg.info.assign("ICUWWXDAFNIRZZWBMWYNSSPAZASTVQBECREJTLVKLNEILKIJPEDQWBPDPQACAJKDMMIXEEDVFIAOQVNVYBGTETUULVQXNSPYPYPODQWGSPTXKHTXKORSQCXNE");

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
    msg.setTimeStamp(0.7589558577396583);
    msg.setSource(22011U);
    msg.setSourceEntity(137U);
    msg.setDestination(65386U);
    msg.setDestinationEntity(237U);
    msg.req_id = 36729U;
    msg.status = 122U;
    msg.range = 0.7074405855322583;
    msg.info.assign("LWVIYINYWOLLOYMFIJUBQCQNEGFPWHLWUEODX");

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
    msg.setTimeStamp(0.3113227101490764);
    msg.setSource(29335U);
    msg.setSourceEntity(183U);
    msg.setDestination(1858U);
    msg.setDestinationEntity(100U);
    msg.req_id = 26397U;
    msg.destination.assign("IEWVEFXYVLTMDPHJJGDQJMAZPOHRBLZKQCHMYITLUBVKQVRIJZBDKMEAULLEVQGPAGBDCYECWGFTXKLPYPGXXGAEHKSVXHUOUOEKHFKXPQUNGQSUFMYJKXLRSDLBCIKJORRLOQNBWUSCGCFXXPNATZUFYYJMAHHCWFGDBHFPYQAODIINYBXMSEDJWTWPVNO");
    msg.timeout = 0.2532258247871706;
    msg.sms_text.assign("TVRQVQHWOQZEELFDQPAZJNJCGUDVVXEHKYOMMFAKEHAIAPDBFCCRZESURUXPSIGNQPTGFUENAXPFZUKMYUWQOWCXBMIOOTQIBGDRLHTYUMJM");

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
    msg.setTimeStamp(0.23064269343818677);
    msg.setSource(43570U);
    msg.setSourceEntity(10U);
    msg.setDestination(13408U);
    msg.setDestinationEntity(146U);
    msg.req_id = 30060U;
    msg.destination.assign("GPHAFIMSBSFBJXYNJKTBWORDKJLQSWNKTJAIQODXZNUZTBIMPWERMROJMVSSUEVHCEKJBGWOLCFTYVNUXWJCTIUVPXYYZCCRBLIKFWMIXDFRLOGGYIJQUNMLSZSPXEYKDZHPHTADAPPMZIPMLFCAQUSKWMDVQAWXIDUOEGQRJBWYAGEKCTWNCTXFZOEXVEZRXRZCHGKFQHYPUOIBRNTLNVQLKAQNHDVHYGPUMBVAELCGZTR");
    msg.timeout = 0.12348149331667324;
    msg.sms_text.assign("TYSPYPJEOHZZZUVJXLPHLZAWOTHIDLANFCVDHQWMIFBLQWNXAOLVRXQYITJLFMGSEMOGUXZPGQSDYMLTZRMASHEGBTVDBUPQVCYQIPCMSUSBDIQKMGAYFERATDWUIVPZNKKOBXXKMMRKRNNVKNEBJBFWBWWJLZLQLDRHWSGOICTCCZEO");

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
    msg.setTimeStamp(0.7698944799396491);
    msg.setSource(48259U);
    msg.setSourceEntity(132U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(209U);
    msg.req_id = 40641U;
    msg.destination.assign("FOXAUKOPTEYHVNUSNUBQCKQXIJLVGNKFLMWJLRAMJMYMLVBTSUKDJDHRGOTUUCXORPHCRTEOPOHYTHPHWEFWFXPMAEQILXNWRNSUNCREFZNQZDVLYOCSEQGDHAMTSJBVMKBSEQXMVMSZLXCPCNKGLXPRWIEYWQDWZQZPROU");
    msg.timeout = 0.20180073039431135;
    msg.sms_text.assign("BIXKKCOGUSNDTBVHSLVSFGJNIHTCBVHYPBQPGOXBOSOAYMZMABACMMQRPARMEHZOT");

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
    msg.setTimeStamp(0.4428694624516296);
    msg.setSource(35413U);
    msg.setSourceEntity(229U);
    msg.setDestination(48U);
    msg.setDestinationEntity(43U);
    msg.req_id = 29448U;
    msg.status = 164U;
    msg.info.assign("UHBHZESCJMRABPGDANVKSDVKXJWAPRXUMYZDHLEVUEYAPNSHCNQOSNEPOZWBWSOIMZMNQTBSTMVYSRFLHCEWSGOPAJFWCDMHJNIKIX");

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
    msg.setTimeStamp(0.006223435990475923);
    msg.setSource(43100U);
    msg.setSourceEntity(30U);
    msg.setDestination(24119U);
    msg.setDestinationEntity(187U);
    msg.req_id = 2279U;
    msg.status = 194U;
    msg.info.assign("PLFMRIUOZVHQLDHYBWIFNHFDQYPDKUXQTQWSSOBKMPXSVWCCLZWPISEOJCDRPDKNTLUPZPFEQRUTNBWWMRDCEQYTSCUUPXZGBMCHELOHLEIZRRZCFSDYISWMENGZVVNUAJRIHJHELVL");

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
    msg.setTimeStamp(0.9996329892580165);
    msg.setSource(19122U);
    msg.setSourceEntity(98U);
    msg.setDestination(5135U);
    msg.setDestinationEntity(84U);
    msg.req_id = 62688U;
    msg.status = 252U;
    msg.info.assign("XIDHSKQZLBZVFGAVWCGCLSAVODSWOECXFKALRKKNXQHJZBIBPTZWVEINUOIQIGDFVDYCQFYUFAPNUPQBAUJALHHFTXMQNZUJJESRCBDBVRLOEXMGYPKVMJPABFNNJPEVTPFBYRIWYZUGNXMHGPLKEMULRXKFMQYCQTHDTNXIURSRKTMXLAVKWAYMHIYGQWVZTEEZYHPXCNBU");

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
    msg.setTimeStamp(0.5968756658256438);
    msg.setSource(12502U);
    msg.setSourceEntity(197U);
    msg.setDestination(31001U);
    msg.setDestinationEntity(112U);
    msg.state = 87U;

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
    msg.setTimeStamp(0.8757947317341973);
    msg.setSource(14490U);
    msg.setSourceEntity(8U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(37U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.7480267818206022);
    msg.setSource(3681U);
    msg.setSourceEntity(244U);
    msg.setDestination(47209U);
    msg.setDestinationEntity(40U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.3527451158824102);
    msg.setSource(37555U);
    msg.setSourceEntity(136U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(77U);
    msg.state = 237U;

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
    msg.setTimeStamp(0.6764146608371274);
    msg.setSource(48903U);
    msg.setSourceEntity(122U);
    msg.setDestination(8441U);
    msg.setDestinationEntity(108U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.843349652955056);
    msg.setSource(63234U);
    msg.setSourceEntity(199U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(102U);
    msg.state = 210U;

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
    msg.setTimeStamp(0.14328795808932504);
    msg.setSource(37513U);
    msg.setSourceEntity(254U);
    msg.setDestination(30861U);
    msg.setDestinationEntity(208U);
    msg.req_id = 18073U;
    msg.destination.assign("UIXMYZKPGJOKWATNMPVEKSCNVORGQIXFFNZJNDIAIVARXBZYWAVOTDIHECPXGOIACEYPOKALYMSBJWUHTWOTLEXCTSXFVAOZMSWKHQKJRCDDUJIZEURKGWRUWIXOACWNBCLBZTMHTHQMHUFAKNFTRDJQRPPLFCZCUVLYNAILHEZNLTMNPGGSBJLOYJJBWIZLYUDQVQRYBNYRQMDVHSESDQESPUBXQHHFM");
    msg.timeout = 0.09996800277760431;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 104U;
    tmp_msg_0.tas2acc_pgain = 0.2738639088627507;
    tmp_msg_0.bank2p_pgain = 0.899671900968489;
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
    msg.setTimeStamp(0.2109907704024907);
    msg.setSource(5584U);
    msg.setSourceEntity(30U);
    msg.setDestination(11320U);
    msg.setDestinationEntity(183U);
    msg.req_id = 62069U;
    msg.destination.assign("ZCOTDPPQRMBLCPGZBJNDATOTOCFZRQVLEUBQAYGWKTBZJWSVCMEAHWELUVKXEKZRIZLYIM");
    msg.timeout = 0.8005140686246455;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 91U;
    tmp_msg_0.error_count = 107U;
    tmp_msg_0.error_ents.assign("MKTTNOBJUNDHCSJZKFKIDWETKFDGTQRRHWPIEWHVZRVUFVTACPEZODSIZYGREXNNPXUVISAWZGIHTYCMEQURAMKMNIGKYLDZQFQBC");
    tmp_msg_0.maneuver_type = 28357U;
    tmp_msg_0.maneuver_stime = 0.09915203523140759;
    tmp_msg_0.maneuver_eta = 36191U;
    tmp_msg_0.control_loops = 324086258U;
    tmp_msg_0.flags = 190U;
    tmp_msg_0.last_error.assign("WJEPPMRNCBUQKFYYNMZLVTQPHDXGBKVSHKXRVADUP");
    tmp_msg_0.last_error_time = 0.2996949319590394;
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
    msg.setTimeStamp(0.5844758347048061);
    msg.setSource(34091U);
    msg.setSourceEntity(247U);
    msg.setDestination(17503U);
    msg.setDestinationEntity(231U);
    msg.req_id = 47577U;
    msg.destination.assign("DGBUVTMHYHBAPBWNYAHWTZKUSUYZFWROHQDDZPEOSMNECNCYGSGYUXMPBQKMQQHXLRTANPKGAGSPNOAZZTIFOVAIKDQPFTKKWEHYTRLGQADGRFBXICVJKIIYMIWAEBHZCVBJRMDB");
    msg.timeout = 0.4452685081975496;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SPCBIPWTIJHXDOWAOEINBUZLPPVRDBHHPTQZNWSMWZABDSWPIGQTKISSLAQAUMMSRUNXDVDYI");
    tmp_msg_0.predicate.assign("UUABQUYHKIATRWIIGAQXBUHMHYZXPIQGMXSIBRYGXELJMVXNUDFPYHIZJQXEVVRWVNKLWMBGNUPNHEKUGXOMNLCUDZSZTLOTQYIWJMZMOGRUDSTHODQJWBBDAQEWYLEEPVGTFOPXKECPWHZTDNROLSSCQLARFMAQPAOTKCXYTKLHAACJJPGXQEIFZFB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JGELFASOZUVDIZMJMNEJKQGSSAKGFRHNDRPRCBVCPLTLWRWIFBNUXYMATMEDYAJMOKOXTLZJXWSZCLWREPXKCDCDOFQWLEUWWNUFJQIYTQECPUUIIHXRRLAAZVYFVPYMSKVBXAZSXPRGPHDOKFDZHOGBYCNMOYABGDVXRCFIEWTGTUNTQLKXZTZJVHFSDRMQPLZSKQAQMFUNBG");
    tmp_tmp_msg_0_0.attr_type = 122U;
    tmp_tmp_msg_0_0.min.assign("PANCKIGGPEGLVBCNOZKGYKQDWEJKOCLBQNHBACFGUFGVSPHJMWOMIQUEWEVUKSNZFDWAWBRZRNZXCCIJWTLXKIYTWMMQUMKITVFHTTRBLGHDTUDJ");
    tmp_tmp_msg_0_0.max.assign("OFUZEMRMNXLZFFCACSPZWPJVXOPDKZCHCXWWIWYZHNIPVOBPJOBSBTFUNHLXWWHTOKECAMTNQQGXZKYVDTQTBJYTQYEIFJSZJJTNEHRNCJGBKUHNGCVIFIBGSDOVMDIZFAWVXFNGEEYXMUMPRODBOYYKPROUMQT");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.08893215230824536);
    msg.setSource(51829U);
    msg.setSourceEntity(79U);
    msg.setDestination(43614U);
    msg.setDestinationEntity(9U);
    msg.req_id = 1334U;
    msg.status = 106U;
    msg.info.assign("PNOXWCMYNJDNGOBAUCJRHSKDKJVFCBFVKRASTXZILHNNKTBHOWOCTXJKVFMZONMARCCGPRYPONLZAGGEUJFDQQXPYFRIDQISIMELZXEADJCHUO");

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
    msg.setTimeStamp(0.7758067651081844);
    msg.setSource(38060U);
    msg.setSourceEntity(236U);
    msg.setDestination(16794U);
    msg.setDestinationEntity(49U);
    msg.req_id = 38168U;
    msg.status = 129U;
    msg.info.assign("SYOPBNCEAJIUFIPGZLZRCXNVXXTCKHDIEABSCVWRJUCILZMFANANLSFDHUYLQSLVXDZTEFJKNSPDCGDMEMKVJKTXZIGFZQWRQGIXKVFPBJPXBZWWHTHFBHAYDBSTIQKKYGTHROYDLHVBFCAZBXVVKEPUMWRDHUMYUQMYWNGDGSIIPKPTY");

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
    msg.setTimeStamp(0.7905889826437835);
    msg.setSource(40391U);
    msg.setSourceEntity(79U);
    msg.setDestination(63458U);
    msg.setDestinationEntity(193U);
    msg.req_id = 25327U;
    msg.status = 200U;
    msg.info.assign("VNRUGKAKRAPYDEZBOZLKTKSLAHKTWLJSAYCBYRDQEIZBZUAUMQEHIOCPKUIUBTRYVDRTSGLEWECDTYCSJAVWOGNFLYNMIBASMILSVWAPCXJWYDOLDJUQBHAWJSFQWDQEXYEIHNPKRCPCDX");

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
    msg.setTimeStamp(0.4213289366467473);
    msg.setSource(7826U);
    msg.setSourceEntity(112U);
    msg.setDestination(43282U);
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
    msg.setTimeStamp(0.5695549914215187);
    msg.setSource(29742U);
    msg.setSourceEntity(98U);
    msg.setDestination(23742U);
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
    msg.setTimeStamp(0.9088861574917746);
    msg.setSource(58313U);
    msg.setSourceEntity(65U);
    msg.setDestination(44759U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.1864843404409694);
    msg.setSource(36531U);
    msg.setSourceEntity(180U);
    msg.setDestination(19368U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("UYEYMYDASKFSPDQLKNLBKSUORNSLGVRNEJRNTLPYCZPXAFWSRXZCOCCJRXATNUOMYKIWHTENOBDKTLESRSAXKFWCEPGTHDLTBHFEWJRAJNLGQUICCVRIHMOZJJBOZAHBIZKAMYDOMNNIXQZTZNMHMPWSCQWFEJZOCEIXULVHVUVZ");
    msg.description.assign("BVAYMMNTJLQIZXRGNJHQBZECKACBKDTSXOHJRXZNUVFVZSWRWEYJRUITXDLSYHQOZVOGGKKDZEPIOPZMYFJSFGLNPSIGIMNFFGFDDQ");
    msg.vnamespace.assign("VZVXFCKMBYDGSILKZPOMAOVTSZXUMERMMIWSUYQAPDUODWRSTYFKGUCQBJFPGDGWGEGXJZXKVONAPTNAUFUQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CBDFNCNYLVGRUWSNBBVLFEUGJOAZEHMHYZPXIUDNHSQGFADPXBFNJQRYJSAYVIZTBWHYKNRCLQHPNHKMTADCFEJOTIMFQINDVRSGFEYCAMBYTXJRRLXCPVMTGEXLJZJGUFEGIBJPXEEOIOKQSVRZCWTOEQQIBPKPAWOZUXMPAKMHWVUCTXRKTLWVADNQJHBVIZWYVUKUOYOUODLDFCMKSZQRWRXTBDPLLMUFHGSQSXTKNLODZYWSPWHIGG");
    tmp_msg_0.value.assign("CSGQSQRGQMUHCNZFKIWXTPQSQKNIUPRBWWJVJSDAMFOZWBJZYXAJSIZGQMUSQFOKIXMLKAXBHORNDDXMXYGEEABAUCPWVFQGNLLDVODLXRENMDTIHDTILHAYRZSGAXVOMWTRETLUSLZJWZNMLOJDCIJYVTBFCCCKGRNGZUJVTCTPEAEHBZLSPRVUBFIKP");
    tmp_msg_0.type = 122U;
    tmp_msg_0.access = 49U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MLQAJTPQGZOUIAAXAQCOWHRVRJIGXLJWESPR");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("GMBNJGDIMSJUZEJRKQWMKQQTFHWGCDBNUWUTBYNUDQPTKM");
    IMC::StationKeepingExtended tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.14719969119096188;
    tmp_tmp_msg_1_0.lon = 0.08914833799488453;
    tmp_tmp_msg_1_0.z = 0.4910450361789038;
    tmp_tmp_msg_1_0.z_units = 106U;
    tmp_tmp_msg_1_0.radius = 0.5493943842845846;
    tmp_tmp_msg_1_0.duration = 11170U;
    tmp_tmp_msg_1_0.speed = 0.13779623394727514;
    tmp_tmp_msg_1_0.speed_units = 65U;
    tmp_tmp_msg_1_0.popup_period = 62003U;
    tmp_tmp_msg_1_0.popup_duration = 20571U;
    tmp_tmp_msg_1_0.flags = 122U;
    tmp_tmp_msg_1_0.custom.assign("JYOLUAEXRIJZHSUZZXMRTICGTLUFBHMXGYSSMWTNMPLIRBYJKJIVEZFBXJRSQOIVHTPFRMPRUFZOKDQPOUAWMWJMEGAIZQCEQLXONKTGVNGPZZWDODQXISPSNCLCABGKTHYEAYLTVFBQBOZBRGCNDUUNPKHQZGGXUWWHAQNFMJVNWVIKTMOFDPKDHDYACEXAJBSDEEKJUHULWVPCHQCFFNAXTRTQDJLKBCBASVFXMYYSNPYGOHVYDRRWLL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Calibration tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.duration = 43273U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("BUWJZXIARUZLYXUJRSKDCQLFKBSVVFNVHEBQREWRZLIVJGCFJMRESEXKRZOLCWJDHGKNLUVDXYGQICXYELWDIOPAIKIOSKVITPRRTPKYFMOEGXMDHXCABUOASVQTCYHKWWOAQECWKAUYZMQNMUXUFLEZBSUMXLIRWTNJDHNMJGQTCSTNBWZNEC");
    tmp_msg_2.dest_man.assign("YENAOKQSCDSHZTQITXKLIQPEIMBJQCZMWJSXCMVGISKYYBRAGGVOPZLRVSUEVNOUAMNGXUHVIGXPMENFROGPDWEVAOCVHTJMTJTRAUDUDRJJLUOANPXWETZTYSUDIFHHUZCVBMYTNYPKNBNDTWFKA");
    tmp_msg_2.conditions.assign("XDYHTXNQOYNKBGXRMBFQCTIMLDFYMEIVDOYRZKBDUGTBCARKEUEOLVPWKGUXCLOCPCTDVFXJGVPITHDESYNVHEOSRGVCJSTWQKJLDLHQMRGYSHMYGJHJHZFNFHDTZZUPMZVIOKLPXPUPWZFOJFXCPRQWBEQCNENWJQBXUMQSSLJRIQCAPZKYEBBQGWADNWBOAKIUVMOHRTNSAPEWFGSDFUUVZGULWEYOLALSXAXICK");
    IMC::Dislodge tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 58054U;
    tmp_tmp_msg_2_0.rpm = 0.4990943113804678;
    tmp_tmp_msg_2_0.direction = 170U;
    tmp_tmp_msg_2_0.custom.assign("EOHFEHICBNRGVRSGVHDPMDITCVSILLIVNTLKGFFBXNUPVQFKURXHXQNEZVKSKWEHBXZPZOUSTAECWAZTCULWZNQOCOFQWPHGHPYQGWBOQTBXYZNRUWEJATIMDBFNUGKNJBVRJ");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.22054981632688408);
    msg.setSource(22536U);
    msg.setSourceEntity(182U);
    msg.setDestination(55193U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("EOOVXMQYISUVLXOFFWMSMPJOKHPYPZFAIDEIPWUKTSJGVLAVCNQDGLXGPOVMLCUI");
    msg.description.assign("GAHEUCKNYBUZSJLTYTDMVBHUXECGHFCQWMRXOIDKUSSQIMVLBSGVJOANEGLLDPTKAPDAMBQIKDRFOHNUAHQWPMPQVLXGSNQKIGYKMGPCTSAYPNRJCYULAIVIYQYJXSRU");
    msg.vnamespace.assign("KBFIMDFJEWFWCPEJNZXQDGWDJAONMMOSWQGBHTVVNETSAACZSAZPYHIUBAPGZGOXVJHEJKCUTFHRMVBTEXSCRHFUVVIGLOEDVFKILXQOCTNMRMSFEUTSLLVGYATBQDCSLWJDQDRDJZHEXMNIOUHQLOBATGWUICIMOZNKBPMFEHGXZGWPIRBRRLLYNZHDQCVXLWYBPFWFAKYHNKLRJXUSTAQKVPUWZJQXEPKDPCAZOKYRMCNUYGYX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RBXCXRHISGQUZXRRZWKCZPCKSDFLWGIVUJJESMYPWKFGHLHDKTMBNFPCRFHYFEMFZARAMOZXVDSXYLIQUOYBCBWUAMXLCIONPGHMGEBQQCPNXCKSMLVORAYYILGPZBFJLXQXFNOFJWZDYIW");
    tmp_msg_0.value.assign("RBDSVHYKRXKFBUCDKMZLNAKOFGVA");
    tmp_msg_0.type = 11U;
    tmp_msg_0.access = 245U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NDCTWKABOKXYBADTVGMPSCWLRAXTOQXJMVNIBDLYUEHSIDHANMHABXCJNZLDLQNQLEWSSJOOXWPZQQPESGZIXFRMYNYPRDEZBGRXIFUUJGJECSPCCEGVTOGL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MXNKYXYWUAGFJGCOYCEFNYTRJLMRGVQQOQIBKTOISRMGSJQIDELGGPTAPAFWYMXIXTZUJARWRUHCSSCHUFKLKDOPTJHEMVXZPWZMDVVDMBPLZYRPUDTHKVEKHKBWCLZDFLJBHZHUARSXIXVJHOFUFTSFQXVYNAFPRWNPBRCDAMLZVNIGICNAIYIBWBOXZZSULUQXHOTAEENKOCSQMONKWC");
    IMC::RowsCoverage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.5870696170670656;
    tmp_tmp_msg_1_0.lon = 0.8532948436280207;
    tmp_tmp_msg_1_0.z = 0.8999292505313654;
    tmp_tmp_msg_1_0.z_units = 247U;
    tmp_tmp_msg_1_0.speed = 0.27702690257306306;
    tmp_tmp_msg_1_0.speed_units = 132U;
    tmp_tmp_msg_1_0.bearing = 0.17007344340663422;
    tmp_tmp_msg_1_0.cross_angle = 0.10195761155099337;
    tmp_tmp_msg_1_0.width = 0.7831095766622698;
    tmp_tmp_msg_1_0.length = 0.7832642089848914;
    tmp_tmp_msg_1_0.coff = 116U;
    tmp_tmp_msg_1_0.angaperture = 0.3877150363689914;
    tmp_tmp_msg_1_0.range = 1139U;
    tmp_tmp_msg_1_0.overlap = 233U;
    tmp_tmp_msg_1_0.flags = 175U;
    tmp_tmp_msg_1_0.custom.assign("NKQCNFTDHDSCRFPGPUSYJTHOQNUSVHDLEGNMDEXBWFXDHQSUEVJJNLNIBKEXTBMPNTPKXIXLFNDEDKILOCFWPJFGYHBMLFMRAKKAVYGTZSHXLUQZFMRZMKKDWWVTRLOKGGZCCLRGCVVZOAIUMVPFAIEMMQBHGXISEEZWYAZZYQNYAZYJQOWZDJVJBAUXAQTCBOUUPXBXHORUIJGHTJIOSRGYCWOCPSKHNQRSIWLQEYOVMBYDRJCBTU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::GpsNavData tmp_msg_2;
    tmp_msg_2.itow = 3566425936U;
    tmp_msg_2.lat = 0.7821331712550829;
    tmp_msg_2.lon = 0.021903726687712455;
    tmp_msg_2.height_ell = 0.918190081487139;
    tmp_msg_2.height_sea = 0.6041903973310776;
    tmp_msg_2.hacc = 0.10196106105838443;
    tmp_msg_2.vacc = 0.6292467746476641;
    tmp_msg_2.vel_n = 0.6221799391405932;
    tmp_msg_2.vel_e = 0.054550497215906324;
    tmp_msg_2.vel_d = 0.385658948269583;
    tmp_msg_2.speed = 0.6563204142864516;
    tmp_msg_2.gspeed = 0.7941939266463489;
    tmp_msg_2.heading = 0.6430353401239621;
    tmp_msg_2.sacc = 0.2637610819007632;
    tmp_msg_2.cacc = 0.38511053710808807;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::RemoteCommand tmp_msg_3;
    tmp_msg_3.original_source = 37618U;
    tmp_msg_3.destination = 64549U;
    tmp_msg_3.timeout = 0.6555266150935481;
    IMC::ApmStatus tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.severity = 43U;
    tmp_tmp_msg_3_0.text.assign("ISZCPBPMSDBNIOOPCQEXDGHJQGSVWSHLGGSVVAJWOMFCRCTKBMJYMFJHSAMMTQUAUZNQFANKRGUYVWGCWHPYUDDCRZKONQOBCJTYLFFBIGXEWJDLUFNMWIFLFTBDLVKQZAWRPXPIHDDIYPJYNXMGHZBBPUQTUSRTWFOZBTCSRCXAVIILDWAQSPOUDLJJQSWHHVCLRRMENVXIU");
    tmp_msg_3.cmd.set(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.2974177783899178);
    msg.setSource(30029U);
    msg.setSourceEntity(169U);
    msg.setDestination(63306U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("KCAGVFQSYLRQPDQLDASBRHYAJRSMQLFOJFQBDUZATLJKONOHWABEVSUQZPWFWJFPXFVEQINUDFMPPMHNUFCKMTGIUWINNQRKDPQMTIRJZPBRNDIWATQOETMBPGVEHEHKMJLKBVAMXCYVXRXBXHYLNDNYTSDSWXEAAGYXVISOHGOTZIGMGCDVKPTXROERMLLCGOZYUNVZIJUHTJPBWKRBUZEYITCENCWLCHYZHJFXJIGSKZWSLAE");
    msg.description.assign("KUGKXRTDSZVVREUEPEIGYAVOPRLIMCJASICEBCINOWAJSASUUGASKKWRJZZSYUITCXNPJQZFFRDQGULXYKHJWLLWMZOTIGMVCNSBQQPHLKBRCPZANMXXOQZDKVUDFFFEGSPQZHEMRBJGPOYVKPHCWTFBMMYBLOLVHWYQTYGQSNEWDOAHNPPDTBVQVFH");
    msg.vnamespace.assign("UCLFKCZTJNRONBJDOBELCKRHTSAUHOYUNPCNHIWAQVKWBPYVIWXHUJBNFHTYVXGGHKSJKWXTYAVWSSQAMZHMKVGERDKQPNDEVRTHRCIPFYBCCKGOLUESPJWXEGIPOFGVMRSFSXMPXADDAIOZBJUDVIQYLAP");
    msg.start_man_id.assign("TZBIHKCIEOBLHRNB");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("OXWUOYQZRAFSHYBZCKIQHUXBMKSPFDNUFNVRWJDRATOKYMCYOLMYPPXUOEVZWHGGPAYGKSIRNAZHFFQFBZNODQPKEAFSJCUJZJSYTHMNHIASC");
    tmp_msg_0.dest_man.assign("HMXQRBCATWXNDMLEFSAXFQLDQAEQFOCWJSHXPFTZHTFBUMIRVIDWWYAVYBSKRNTBQQJNKTCTPHKGTPYBBCCFYP");
    tmp_msg_0.conditions.assign("VYDIVMLGXOMGUGPWPBRGSATNQNXUFCWAANQSLH");
    IMC::Current tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9917602362177654;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::HistoricSample tmp_msg_1;
    tmp_msg_1.sys_id = 44884U;
    tmp_msg_1.priority = 13;
    tmp_msg_1.x = 29809;
    tmp_msg_1.y = -12416;
    tmp_msg_1.z = 32275;
    tmp_msg_1.t = 18267;
    IMC::DevCalibrationState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.total_steps = 240U;
    tmp_tmp_msg_1_0.step_number = 156U;
    tmp_tmp_msg_1_0.step.assign("HDQUGDKZMYTPWIDJWBPKXQGWQBBSYBEPOBJEOPTTRLIMFEJ");
    tmp_tmp_msg_1_0.flags = 14U;
    tmp_msg_1.sample.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.8716987605904257);
    msg.setSource(16986U);
    msg.setSourceEntity(158U);
    msg.setDestination(13881U);
    msg.setDestinationEntity(221U);
    msg.maneuver_id.assign("YDEARVBNMLUCENTEJJBCWWZJSXLMNFUGOAAJGCXPTOLMMBPORFKZIKTLOFPZHRWWRCQSNXTRCDXAIBQMPCEVVAUHTNPSMRDVXXWEUWLGGVTIDNMXPTGZJH");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 55394U;
    tmp_msg_0.control_ent = 108U;
    tmp_msg_0.timeout = 0.046042394431020095;
    tmp_msg_0.loiter_radius = 0.5457206336720921;
    tmp_msg_0.altitude_interval = 0.14058652028760033;
    msg.data.set(tmp_msg_0);
    IMC::PolygonVertex tmp_msg_1;
    tmp_msg_1.lat = 0.6591188543012153;
    tmp_msg_1.lon = 0.594838580095978;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Abort tmp_msg_2;
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
    msg.setTimeStamp(0.29811298661605934);
    msg.setSource(59578U);
    msg.setSourceEntity(130U);
    msg.setDestination(21584U);
    msg.setDestinationEntity(1U);
    msg.maneuver_id.assign("RIEDIKPXCYZRYWOSQEZNQZSLZUSLAHGYDTPZLISOPIEDDNXWJEONYFRZUCVZUIJWH");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 21151U;
    tmp_msg_0.custom.assign("ZSDZTBSFNYTDNINUCBPTMVLIRKLK");
    msg.data.set(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.6017394029360009;
    tmp_msg_1.x = 0.6688500197275115;
    tmp_msg_1.y = 0.4560069029534526;
    tmp_msg_1.z = 0.26310972809518907;
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
    msg.setTimeStamp(0.4266581074850856);
    msg.setSource(5306U);
    msg.setSourceEntity(158U);
    msg.setDestination(6795U);
    msg.setDestinationEntity(106U);
    msg.maneuver_id.assign("JWIUPMQVMJNDJVFFXPBPRWLYCYLAJKKBMHFWUMCNDBORYUUISPOSBMBZXRKVNNIRRNOBDZUUQGHEKDMBCDYGIQIGQTNKFGSQPLAWQBABTHKSZNYD");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 39233U;
    tmp_msg_0.lat = 0.6538405978756792;
    tmp_msg_0.lon = 0.530169466908763;
    tmp_msg_0.speed = 0.4743573603646287;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.custom.assign("GPSOBTLCXOPPWZJIGBGEZYMNTVOVVSAPETVNMHKNTDXRAFRAMYBLUIYKVCPUKXWHOYQVLALCNSAMXIUOHJJSCFWFRQQEMTQCEBRROTIJDITAKRJXDCLGDWZGEPVFZOMUHMHTDUEEQLZKUPVMIFGOYGRNYBKZNHCHTKADSNRLGPXZJQUFVUNEJIXSKXXALCNRDSZQF");
    msg.data.set(tmp_msg_0);
    IMC::SetControlSurfaceDeflection tmp_msg_1;
    tmp_msg_1.id = 146U;
    tmp_msg_1.angle = 0.37148382242477285;
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
    msg.setTimeStamp(0.4375137144584419);
    msg.setSource(33362U);
    msg.setSourceEntity(185U);
    msg.setDestination(44180U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("QUUTDLAEUPKXDKXIFJXKVXFFVGYOBOLHBXNJNQTRQTTSGRDPKVIEOPCPRDAHVESYJMUCYILMRGNCYZIBMUPHDKTMEZWDFMAMVJCJJB");
    msg.dest_man.assign("ENJPYOOODCJHXSUFDIAHTCMAKPRRLUQKIBEOVNJILOWXVBFZYXAYZDDEFGKLBPTENPBJMPWRBOZQXTQSWMSSCVCNCKANGYFQBZGGPUPUYKHZLJONJLSIETGLRJCGKVGYBYKXHCYRARXBCPVDSTQXWEQEGMHXURUADJZHIIFFUIMIOAYCBBGKZDWWHGUHJTRMLSDFJANQVCHIPFMW");
    msg.conditions.assign("LEFKPBUJYPQNFVPLXTVJQWDMIFGDMJXOEDUIPFQIGIRJZWNUIKAVBZTQOEVLGZCOYUZJFPDQKSNDCTOIUPVXYLHKGVXLAKNQHUWBVAAQPSOKWXBCLCQAOXJ");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.2846779277577778);
    msg.setSource(5002U);
    msg.setSourceEntity(4U);
    msg.setDestination(38061U);
    msg.setDestinationEntity(199U);
    msg.source_man.assign("HXGUWWTFVRXFDBSVXWIBGPVWJZBSNQMYQTRVNFWPTQOZHEIQUPKLVDQXCRNBAZVXWPKSYBGUPTSOCMJIDSMDJPAKYIGGNYWZKEDNFLFUOCGKYSOECSYLBFPKHRZ");
    msg.dest_man.assign("DDQRCEFXEDAWUPDHFPNHKHOQBMVXZNQLYCGVMJPDYSJMLJPWASUBTFHHCJCFBQKZXLHZZGZXJEFBPGLUBKBHEIEKAFEQCRDICVITDKARUHTEXOIKAYRFWPNTVJIVNLOKHBSOJOVKTIMMDUNNHLLXFBWBNUGXCZLKYGTQ");
    msg.conditions.assign("SBJIGLCGWSIFZAFQMRBWFPGKHTMPGODARNUXCLVTNZQOJOSVMZQJTBYCUHNY");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 201U;
    tmp_msg_0.text.assign("KSVUFNUZQRBXEOKBDFHRQIKWNVIPZNKTVQHIAPDJSXNYYPVSKZLXXIFWNPHLUUQTBAUPTWMMQFRGCCUASPCFJAQLDWCCOYTMSILIZRYUGBDRAMVWNRCMIVTQUCFXXIERSDJMJEPATPHDYBCGPTMAIYLABCGJPHWDFSRZDLEHJOHWNOXFKZAEVQQBHM");
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
    msg.setTimeStamp(0.669759766668561);
    msg.setSource(47354U);
    msg.setSourceEntity(114U);
    msg.setDestination(42079U);
    msg.setDestinationEntity(152U);
    msg.source_man.assign("PNQTIRJQWRTNUMMNAFGGNHZABDQYICGAFMYGOXAMELZZJMAPEVQURENJPMXLZQRGKUBFXLXOZLPCBKXFEEXOKTQYBIFWVWCIWPRHAAUYTTOLBFUIBRHSVDUUWDZEQVYNTRISDWCDHVPSQBGOAFCLQLVYYJGUWYHKOZTSVKJWMFTMOKDSDSZOPWGACHIDKSRSENPIGKXWKXEQJVPRUJXSIVEDGYBRJHZFAMCFYB");
    msg.dest_man.assign("MNLWBTVNPCUPNTTJVDHZNWCSCLTFBPYGEESASHTEYTVPIAIVOSYBOEGQRGAU");
    msg.conditions.assign("MESBTVOHXQXDHFINPMLQNOHJUPSYJWRSEZQFOCXUNHNXALILHGQVVDZVWFLERCGGSUXDOWADEVKPTCWNNSKMSLIKKQTMJYJPJOYIYBKFAUCDBSRT");

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
    msg.setTimeStamp(0.37778111616776955);
    msg.setSource(33426U);
    msg.setSourceEntity(62U);
    msg.setDestination(46070U);
    msg.setDestinationEntity(144U);
    msg.command = 250U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GGZLMFJUIZTLOKEQTUXUOCS");
    tmp_msg_0.description.assign("SPVZHDMKTMREWCKMJTXAYJWCFMSVPCPOQBRUMRJZQLDCKUCPXBDL");
    tmp_msg_0.vnamespace.assign("RTKLGUDLTMMJIQPQTYNFYYLATNSHNNUAQLLWCARKQLTSMCVAEZWUVRJVWNHYIBXDTXBTKYZFPGVGRQPCSNOGHVMJFXMZACBJJGOKMRRIFUIPRDUCDHBKRFUEPVDSYTNYJXOYADAMDPVHOPXISASFZEVSHINBEWLRWSGYFJPOBZQKCODGUAIBDMKGQKJITWCHUHYWWHZHOJLEVIZALDFRWGZXEMEBOZWCPVNQXFINQXQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JURQGJGBEJHLZGQNDDZWDXBJPYWICM");
    tmp_tmp_msg_0_0.value.assign("BLGJTBDQVDYBQNGXULTQFLWXZ");
    tmp_tmp_msg_0_0.type = 15U;
    tmp_tmp_msg_0_0.access = 168U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JKSLRCUOXOPJMDOHMOHIKKQLVWBDCLBCKXMZSJFKGTQAINOATNTNVVHINBQSSGFRHZAFOCQATILXKSAHUGZYFJNFUYPGEVIDEIQYKBFQGTNOIBYXIXBTBAJREXGRWBVUIJYSHSXPEKYQJXTZVFRVCQAPDEODZDTDCLJNESPGNDLASKHYVGWOXTRWEZAWMYPWRULDURUZUHDHPOWQIBGCNJZEMPWHMLZCVNXMQCREYZYBVMLTUWJKFFG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PXCYIZGSNKOSUUMFVUIBKHTVALSUSAHMUATDGVESJPMDOQDPCKCLYCRLKJEHBKZTRYYZGRRAFVUJILBDEDZPTQMIMCNMFVHOHAQWNXEGOAAIQZTTMBZEEZGFKPORLYEIFMLDTOETWRXFDHOUNWQWILMWWAFKAVDLGNTDZBUPAJVPUHXSRJSYXJCXJCWKKYZOQGLSFHPNGWOJJRRSHWNOBQQ");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.arrival_time = 0.20460771115535425;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.8360285894820542;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6163111537118573;
    tmp_tmp_tmp_msg_0_1_0.z = 0.8481835353539773;
    tmp_tmp_tmp_msg_0_1_0.z_units = 48U;
    tmp_tmp_tmp_msg_0_1_0.travel_z = 0.6825071104598004;
    tmp_tmp_tmp_msg_0_1_0.travel_z_units = 31U;
    tmp_tmp_tmp_msg_0_1_0.delayed = 83U;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.7642240694293989;
    tmp_tmp_tmp_msg_0_1_1.z_units = 90U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::CompressedImage tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.frameid = 85U;
    const char tmp_tmp_tmp_tmp_msg_0_1_2_0[] = {-17, 13, 34, -41, 53, -9, -74, -57, -112, 117, -92, -102, 60, -58, 59, -44, -57, 40, -20, -14, -125, -8, 71, 79, 109, 81, -75, -59, -6, 84, 83, 121, -103, 75, -48, -114, -91, -105, 5, -36, 78, 68, -91, -73, 56, -43, 120, -15, -70, -76, -80, -102, -89, 86, 60, -25, 11, 5, 108, 105, -11, -66, 96, 126, 84, 118, 111, 93, 19, -37, -119, 79, -91, -21, 117, 51, 37, -99, 112, 111, 89, -42, -82, 70, -111, -85, 98, -25, -112, -100, 111, 81, -93, -103, -89, -71, -26, -111, -53, -124, -115, 96, 49, -98, -52, -36, -13, 39, 69, -68, 54, -120, -24, 65, 7, -49, 12, -60, 84, 13, -41, -29, -30, -22, 62, 65, -6, -107, -127, -1, 92, 112, -22, 82, -21, 62, 36, -35, 11, -68, 32, -51, 120, 47, -48, -92, 51, -115, -73, 123, 15, 45, -37, 1, 108, 21, -5, -113, -89, 48, -41, -72, -101, -4, 23, -28, 114, 15, -20, 104, -65, -121, 11, -81, -112, 24, 123, 40, 21, 5, 109, -75};
    tmp_tmp_tmp_msg_0_1_2.data.assign(tmp_tmp_tmp_tmp_msg_0_1_2_0, tmp_tmp_tmp_tmp_msg_0_1_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_2_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("MXFGOIECZAYVYAAFFREZD");
    tmp_tmp_msg_0_2.dest_man.assign("XLDLYIHUPIUZCLTWRJBWZCAFQZNGBOWBMIPKGGNUZROMIMQEJUFKDSRPEOPNQGMETFCCCRBRYYSLCREOGVVFSAFWI");
    tmp_tmp_msg_0_2.conditions.assign("TGVBMHGMZYELTIZWTAFNJYHKCCZBOFVZRNFKUDQJHJVUOGWWAGKDRFPFJVUZIPQOLUIMEDJGHHWYC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::TrexObservation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeline.assign("RJAFEWULUIGYRYYCWJRCGAWYTQSTSKCFMIDHRTVCBRJMOKGSJFOZILJSIDEVWCXZLODMSKXANBZUQYVKRHOOTNLZUWKQSYNIPVWXPVXVF");
    tmp_tmp_msg_0_3.predicate.assign("PTASIPAGJUYNCVMEFIACKOXJICWQKFKDFFZISCQLTGSXTCPONMDUGARUFPDGHWNBIGZKIUVMRBLPTQNHXYLOYUKYKYLVJBSAUBSDCFTMRHFGHSTO");
    tmp_tmp_msg_0_3.attributes.assign("UBYMVYKKTOSKUZDNNMRGFYTSXHKBZDLODTKQZIZNACIYBVAORVOIJBPKFHYRETEAXQOGMHHXQMQWKQFCRNDKWEHBDFUAYLSHTJMOXNFMEIRTYCVNJVWCUSZRZBUXALEGVIUJWPXPEH");
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
    msg.setTimeStamp(0.10070834150008812);
    msg.setSource(23437U);
    msg.setSourceEntity(127U);
    msg.setDestination(32342U);
    msg.setDestinationEntity(2U);
    msg.command = 161U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AKIMPSCVUNNHAGTZJZBGVVPQORSOFZIYJRFKGRWZBHAEYBHNJIXTFFMISJEVUTAVAPGAYELBVWNAWYJOMXUVITDYZEIHBWTDZNSMKOGHIUBMJQPCZPCZRHLWFXYKTETKAKCJUQPRUDNQPROPHBQAMFDMSXZQFWIXCRJYEM");
    tmp_msg_0.description.assign("LONHJANOODDRUPIVCHIQDOMSYIRFCFDYPGTDMFCKDHTMZUYTUUQZILQNACSVKBGVPABNWLKRORFXSVXTSVWEYBWVPZRHTNZQXFEHWVNNGFSMUCIXCSGLIYLPMQIENQJHAGJZJGSPLMZFWBIJSDZPJGAXRYZKLMGTHPXBCQBKJPREVWNO");
    tmp_msg_0.vnamespace.assign("DULLTWXLEQLOMCYSCEQODUM");
    tmp_msg_0.start_man_id.assign("RJJYIWNAWGRZRTZTNXVQBOUXNXWEKKUM");
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
    msg.setTimeStamp(0.48668227800529384);
    msg.setSource(41190U);
    msg.setSourceEntity(19U);
    msg.setDestination(55973U);
    msg.setDestinationEntity(88U);
    msg.command = 72U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GGKZNWSWBMJYYUVZSVOFLSBAOWFIXUKHXHBEVKNPOCZREBQIBCPZQFAFEYOTELPIXNNDTDUECOJD");
    tmp_msg_0.description.assign("KNBCRXAKTWXXRGAWDHICHZTPABNBOEUOYHQLWKZSDTEMKMIJNHJCWQSUDTZYEFPSZIUFAZRAHI");
    tmp_msg_0.vnamespace.assign("YUBJLSTHMYZPQKKTBCQZURSWMVDPXVYMQFPXFDMBNSUXKGYRQIWOKCKVLUCUGMFXSTRDHZDNCQPRRNVNWNCTBHYLGMOIEJNSSBUAPAVBZSRJZQVXLVVR");
    tmp_msg_0.start_man_id.assign("PDKPXDEIPYQOJAIHBCQHFKYBRIPLKNQAYHAWNBWDZBWZYNFDYALDXKZSJCMMKSJMWJKWTNJOOKTVMHNEGJGFZIGMELMCWRUAZTCZCLXAYFGYTULRSFRRGRKCSNAKEBDQREMTK");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YWMMVWGSLCOYEYDBMUAXLRAYPFXPCKQYKJTMYPHJGPVQMKSAHUBFIVSEKPRUNXFYAEPNOSVQMDKSFFFPOJCZWHPDZIFCYDRLJCQOCCIQZUSARZMJOEVNZKGWPJNYFXTVCIAKMVEQRWCNNWNFOITFZDISHCQXMRTZDLNSIJKELZBVOOUVIUZERJGBHDBLXUDQIJHOKLWU");
    tmp_tmp_msg_0_0.dest_man.assign("GRZIGOVGMQBPCCEXJKIBCSMRTXDUIYXANCMZNMZPEYEROTKWJUMSKTZBRHBO");
    tmp_tmp_msg_0_0.conditions.assign("LJUOTLLZGPAFMPESMXVEVWKIZUBZQBDIRLAXPHSJTJLBFZWLPCXDGLQUQCOSOGZXCAKBQHZNMZFVERBSTJBUPERODMNQUMOSHJRFMNMWYDGN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.023183858187254325);
    msg.setSource(16475U);
    msg.setSourceEntity(61U);
    msg.setDestination(39218U);
    msg.setDestinationEntity(7U);
    msg.state = 240U;
    msg.plan_id.assign("ATKHNWUMCPILJULMEFICEWXBQCBZUPTUSPSTFOFARSFUIPBEAZAYYGWQBULMBZPMAYQWXEDKQYLIDHIXJVEHZJOGSPVBITXDJQ");
    msg.comm_level = 58U;

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
    msg.setTimeStamp(0.8652164569255362);
    msg.setSource(1419U);
    msg.setSourceEntity(71U);
    msg.setDestination(41108U);
    msg.setDestinationEntity(70U);
    msg.state = 133U;
    msg.plan_id.assign("XHTOROCUEHPRFBHLUFPJCGKDVVIZDBSOEPZMVDIWYDRMSCWLEFRDONFIWDRTGHDABSNGOBFANQXUTWECXPTOAJKP");
    msg.comm_level = 162U;

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
    msg.setTimeStamp(0.32892045591307073);
    msg.setSource(60509U);
    msg.setSourceEntity(240U);
    msg.setDestination(42245U);
    msg.setDestinationEntity(54U);
    msg.state = 173U;
    msg.plan_id.assign("CICGSZDFZRNNZOZLCEGTKRJMIHDCWFMBCRZHDZBGZUUBHIKAQENVBVIQXKUPTEYOJORXOWYQDASOQQDFVWDIZFHRXXLNBOPYGYYCXSJYFJAHBUANAYVLIUEGXSPKVRZYXSPLDIRVWYSOTBMMWVBHEZMETQPOGWPUYO");
    msg.comm_level = 104U;

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
    msg.setTimeStamp(0.6025341908076278);
    msg.setSource(21068U);
    msg.setSourceEntity(244U);
    msg.setDestination(8325U);
    msg.setDestinationEntity(251U);
    msg.type = 84U;
    msg.op = 54U;
    msg.request_id = 22892U;
    msg.plan_id.assign("DFVWVURIKWVIRXANEQ");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.29907691577301376;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZJULVDMFHSGT");

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
    msg.setTimeStamp(0.9615700219083517);
    msg.setSource(1063U);
    msg.setSourceEntity(183U);
    msg.setDestination(11252U);
    msg.setDestinationEntity(176U);
    msg.type = 99U;
    msg.op = 64U;
    msg.request_id = 21386U;
    msg.plan_id.assign("UUSWFIMDEGIMBTUVXIHPNXGSJICTLSY");
    IMC::HomePosition tmp_msg_0;
    tmp_msg_0.op = 51U;
    tmp_msg_0.lat = 0.6157518601022651;
    tmp_msg_0.lon = 0.7231109060973016;
    tmp_msg_0.height = 0.14004487170600066;
    tmp_msg_0.depth = 0.9867201192965822;
    tmp_msg_0.alt = 0.21936544790615264;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TNCOWMCLCYIXFGADOYPEVHTCEGJLEIGRZNIXAKYBWASOIGSBDQLBCKJUTDNMPEZSKFTBHOQWYVSCOSEFMHMEANOKTTZNTZGUQLXDXGYUOKTGRZIVXFLRLGNEMZJJEVHOMAPSMC");

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
    msg.setTimeStamp(0.586598130921459);
    msg.setSource(662U);
    msg.setSourceEntity(140U);
    msg.setDestination(41843U);
    msg.setDestinationEntity(31U);
    msg.type = 196U;
    msg.op = 155U;
    msg.request_id = 5263U;
    msg.plan_id.assign("NRGMTUUZSBKPXXMKTOGPQQEIPJJRKGANBSDHMQNYUGWPFIZXHULPFOQEAILSQKLYXPRYBAWKVKUIGIQVFMGMBYSLDOMUEUNPEQEWYKGNDILOZFADTVSDYQBTJBSVHHPPXTIJJCNORNSHRXXBZVOWWJYJCTVAOVBYZFJZFFYHXCVLQCSDDAHVFTNXWEFSGW");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.6841304130919906;
    tmp_msg_0.phi = 0.4167242016914342;
    tmp_msg_0.theta = 0.0271876257944752;
    tmp_msg_0.psi = 0.5926877116514819;
    tmp_msg_0.psi_magnetic = 0.6218962426555351;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDKQVGJFHHWOFOCPPPWADBNCUHZTMWBIXSSFJGWEZRWSSHNXPJBKKUMSLQVXAYLGIUCRYLKOPMHJGNKBRQTDSIAYTHIGLWRWNVXOGARTRHVXPYUPSDFTLPNSEJYWOPQABDEDKILXZRRYAVBAOJUYUFKZGNNMVOHBTSMQBQWBJHNWDR");

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
    msg.setTimeStamp(0.885502014056988);
    msg.setSource(29156U);
    msg.setSourceEntity(77U);
    msg.setDestination(28367U);
    msg.setDestinationEntity(211U);
    msg.plan_count = 8546U;
    msg.plan_size = 3743185909U;
    msg.change_time = 0.34170445479644296;
    msg.change_sid = 51388U;
    msg.change_sname.assign("UOFBZOHPQUOVBCPWUAZNFTKQCJEFHWRSENUNOJYYSVKJUWHWMRYIKNJZBCHITRHGBSQYCZNONFDIKEIHXNCGPWCTGMTMQXRXCDSSVPACVZGZLJOJSVKVQJNXKIOARMSWEYBLNAIKSVPBPDO");
    const char tmp_msg_0[] = {-28, 30, 124, 102, -59, -44, -106, -19, 89, 50, 104, 71, -37, 118, 99, 6, 77, 60, -92, -95, 48, -75, 17, -125, 26, 32, 17, 113, 126, -118, 32, -91, 82, 6, -1, 70, 121, 96, -61, -33, -110, -54, -78, 68, -128, 65, -22, -5, 25, -128, -89, -30, 41, 113, -10, 10, 67, -31, 74, 64, -117, 65, 89, 43, -115, 69, 52, -18, -112, 87, 54, 56, -86, 7, 9, 23, 79, 3, -30, -65, 4, 48, 110, -29, -83, 125, 13, 99, -8, 87, -17, 27, 41, -34, 37, -5, 77, 49, 21, 32, 122, -102, 38, -72, -85, -96, 30, -65, -65, 50, 23, 105, -107, 60, -26, -44, 56, -124, -104, -34, 75, 101, -89, 71, -57, 24, -78, -41, 49, -124, 68, 84, -75, 19, 8, 103, -3, 75, 34, 122, -125, -126};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RIQUZWHHTLWGKEDJUMXCLOAYJBQFWF");
    tmp_msg_1.plan_size = 38413U;
    tmp_msg_1.change_time = 0.7643051364221783;
    tmp_msg_1.change_sid = 50826U;
    tmp_msg_1.change_sname.assign("ZFSBHMUUQOWJKDDCLGFEVSHPIIIPSAWCUVOCN");
    const char tmp_tmp_msg_1_0[] = {114, -113, 4, -52, 65, -86, 37, -60, 102, 43, 52, 114, 21, 77, -62, 22, -10, -9, 1, -77, -120, 13, 66, -125, -89, 118, 68, 80, 65, 113, 109, -16, 68, -96, 102, -120, -112, 59, -105, -108, -15, -113, 65, 27, -86, 108, -20, 109, -22, 80, 100, -91, 61, -4, 45, 120, 65, 43, -31, -18, 80, 68, -13, -9, -73, 43, 89, 118, -78, -83, 9, -36, -59, 76, -107, -46, -43, 14, 40, 23, -7, 77, 49, 84, -65, 46, -28, 7, -32, 39, 8, -22, -66, -13, -11, 117, 110, 103, 82, 74, -32, -69, -78, 37, -110, 111, 126, 100, -101, -17, -41, -101, 52, -32, 88, -21, -28, 74, -27, -96, 86, 80, 46, -51, 22, 21, -64, -25, 81, -97, 1};
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
    msg.setTimeStamp(0.5961298072541593);
    msg.setSource(13231U);
    msg.setSourceEntity(151U);
    msg.setDestination(30541U);
    msg.setDestinationEntity(23U);
    msg.plan_count = 36745U;
    msg.plan_size = 3971160642U;
    msg.change_time = 0.00990775751289208;
    msg.change_sid = 5988U;
    msg.change_sname.assign("ELXOTUWYNCBSUVMSVWNOOREGRFXIKAEWWDJWUHMQNNLKC");
    const char tmp_msg_0[] = {-20, -128, -112, 76, -100, 31, -45, 10, -28, 19, 75, -64, 51, -128, 40, -32, 112, -56, -27, -85, 84, 120, 46, 10, -14, -69, -25, -98, 29, 30, -73, 124, 100, -73, -66, -102, -27, 35, 91, -41, -65, 96, 64, -11, 66, -50, 14, -53, 0, 99, -98, -105, -50, 117, 69, -33, -36, -119, -57, -96, 125, 122, 118, -6, -24, -95, -21, -56, 16, -88, 116, -24, 47, -42, -86, 31, 97, -88, -56, 14, 85, -94, 14, 77, 98, -18, -86, 9, 103, 59, -1, 58, -122, 114, 59, -12, -56, 123, -36, -10, -48, 54, -32, -119, 69, 120, 74, 99, 0, -124, -10, -107, 53, 25, -37, -85, 31, 44, 49, 45, -30, -94, -95, -1, -102, 22, 102, -4, 55, 53, -48, 14, 36, -63, 30, -116, 72, 116, 1, 27, 54, -52, -55, -9, 73, -21, -86, -7, 40, -7, -114, -96, 90, -53, 48, 48, -14, -87, -90, 112, -11, -110, 59, -64, 38, -12, 84, 87, -40, -77, 53, -3, -112, -29, -94, -3, 96, -7, -92, -103, 85, -7, -67, 121, -125, 58, -26, -59, 40, -112, 125, -107, 4, 59, 99, 60, -43, 36, -16, -22, -33, 68, 19, -9, 1, -46, -82, 81, -95, -25, 106, 14, -122, 98, 110, -32, -58, -81, -78, -34, -84, -21, -19, -99, -56, -38, -119, -117, -27, -69, -79, -34, -4, -26, -50, -119, 98, -126, 58, 1, 32, 109, -50, -75, -76, -117, 37, 83, 17, -76, 91, 15, 67, 119};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("COSACVXWQPNXLBGQFTOHQKSWTURMFYTEG");
    tmp_msg_1.plan_size = 46962U;
    tmp_msg_1.change_time = 0.08264248784212525;
    tmp_msg_1.change_sid = 18233U;
    tmp_msg_1.change_sname.assign("MUKPJDEHVIKGMQANEIXUQ");
    const char tmp_tmp_msg_1_0[] = {-7, -6, 48, -85, 76, -110, -92, -53, -5, -86, -19, -32, 11, 37, 64, 56, 11, 8, -10, 89, -36, -110, -11, -107, -83, 109, -114, 66, 24, 51, 85, -90, 62, 90, -43, 62, 8, 70, -5, 124, -122, -68, 86, -43, -113, 97, 22, -37, 4, 108, -27, -29, -45, 122, -25, -101, -56, -105, -120, -62, 79, -89, -99, 49, 97, 44, 91, -97, -51, 25, -35, -61, -107, -62, 70, -13, 51, -36, -118, -53, 50, -76, 56, 19, -89, 2, 73, -119, -16, 47, -15, -106, 80, -63, -120, 119, -57, 75, -111, -9, 57, 41, 92, 124, -117, 38, 42, 50, 9, -8, -12, 121, 3, 11, -67, 47, -35, -122, -72, -121, 95, 69, -50, -93, 76, 124, 81, 50, 51, 75, -100, 73, 76, -81, -63, 113, -90, -59, -66, -47, -28, 51, -42, -45, 38, 84, 29, 84, 59, -80, 56, 52, 70, -46, -94, -116, 102, -107, 115, -31, -108, 57, -59, 76, 67, -60, 103, 70, 37, -40, 125, -14, 10, 96, -62, 90, -35, -108, -30, 80, 23, -47, 124, -56, 82, -89, 34, -125, -86, 63, -29, 54, 10, -94, 58, -49};
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
    msg.setTimeStamp(0.4596154200978041);
    msg.setSource(60333U);
    msg.setSourceEntity(106U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(199U);
    msg.plan_count = 42346U;
    msg.plan_size = 120902503U;
    msg.change_time = 0.25879991011550385;
    msg.change_sid = 9039U;
    msg.change_sname.assign("SAKDRPSFSZETRQUZVTNABYKKBJTHTQFYILFBRUUEQBNLCHINWECSFOGWDNLVJYXIROSRYXAHPGHZEGJMLLJNCWXHKBUWAHIZUBXZMJVPIOMTOHDJEYTIYKLCPSMMQQQVXETKMVRCJLPZTGSANPFNWMBZFLULMDBYUGDOICOXRWOCWAAZAWQWHINQYNTFGXJDHNVVIGWPXTEUFPODKJQVSDIAVLRRPKUXBQZZMUGKPOFYDJKSHCGEDERGEYB");
    const char tmp_msg_0[] = {-53, -25, 24, 51, -6, -66, 58, -15, 88, -73, -55, -16, -104, -96, -58, -8, -76, -19, -58, -16, 47, -98, 40, 72, -112, -73, 47, -103, -23, 89, -61, -109, 21, 46, 54, 44, -38, -111, 58, 122, 51, -125, 27, -24, 23, 1, 18, 47, -58, -14, 56, -83, -126, -88, 15, -1, -17, 108, 92, 120, -44, 43, 105, -86, -113, -31, -72, 79, -23, 98, -36, -103, 86, 43, 93, 3, 27, 56, 121, 15, 111, 58, 19, -9, 122, 56, 30, -128, 19, 122, -117, -30, -82, 63, -74, 97, 42, 22, -3, 85, -7, -53, 26, 14, -12, -9, 124, -113, -51, -43, -120, -92, -50, -61, -128, -12, -51, 45, -45, -75, -97, -105, 43, 59, -32, -97, 57, 90, -121, -10, 20, 3, 4, 112, -1, 63};
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
    msg.setTimeStamp(0.9153700588036833);
    msg.setSource(16328U);
    msg.setSourceEntity(58U);
    msg.setDestination(14495U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("WBWDONMDNKDAFYJXZIDKOLTAURZBCMQPAZJLENRSJTVHMRHOEYUHIZWTTSXEEIXHAAVYPJHQOYNLHMFCMRQOXMSZLILTWJEXNIRGUGYPFOZBPCEWNMBIKGGOFIPUAKYDSBHFMOALXTGBFVAXWRKJGLVGCXPROIYYHIVQJPGGZQXUJGUVAVYKQDMFCZNV");
    msg.plan_size = 38382U;
    msg.change_time = 0.8676882536049565;
    msg.change_sid = 253U;
    msg.change_sname.assign("UYULDSZWMUUARTWBWSUVCRFUVVWMVEEJMSCC");
    const char tmp_msg_0[] = {112, -72, -90, -51, -48, 84, -69, -30, 33, -8, 91, -121, 22, 38, 107, -116, 79, 6, 109, 71, -50, -36, -53, -14, -24, 33, 57, 34, -17, -102, -30, 100, 108, -11, 89, -60, 20, 114, 23, 40, 120, -95, -117, -108, 94, 111, -69, 83, 75, 125, 97, -2, 101, -120, 19, -52, 5, 45, -42, -26, -31, 57, -79, 48, -70, -108, 56, -32, 37, 86, 72, 20, -7, 32, 84, -13, -33, -55, 1, -97, -126, 85, 92, 18, -13, -119, 11, -24, -61, -58, -70, -53, -70, 47, -124, 9, -108, 97, -26, -128, 41, 44, 30, 32, 61, 32, 105, -71, 33, 30, 62, 72, 13, -8, -102, 81, 88, -116, -8, -35, 102, 90, -53, 21, 51, -66, 57, 126};
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
    msg.setTimeStamp(0.023900914029687303);
    msg.setSource(26421U);
    msg.setSourceEntity(61U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(56U);
    msg.plan_id.assign("LZBCHUGQELKBYEUQBMBNAAOWIFXVGPDROALTCHZPWYKWKNNYQJLFPSJRFZOKGTMVHCQEJZILCUVBPPYJLBKSHUYNKGKFWMUZZYFXOEATIMCERVITYZAOVVMCCSRLFUNJVSNJDFTFUMARDSSKAERJPYRYODJL");
    msg.plan_size = 18564U;
    msg.change_time = 0.24294176988992977;
    msg.change_sid = 40379U;
    msg.change_sname.assign("DIBAMONLWZIXHUJNTFZYXQYOIJGHGNIJXCIUHWPYVARSKXJPASWCSOQEERDZAFZNVNRDCDEOSRBUCNTKWBFPMZCRHTEBSWZTBRIFUDTOUGVSWXGGBYBFQUEQPQVLKQNZEYMQSLAMGLYAWMOTPHXYULDWJAZJDLKDDCUTHTHXESFMPYKVSGVPWK");
    const char tmp_msg_0[] = {104, -44, -117, 85, 7, 30, 16, -115, 57, -109, -110, 98, -67, 84, -4, -75, -27, -46, 119, -99, 90, 26, -52, 21, -20, -15, -75, -30, -123, 16, -32, -74, 75, -88, 64, 79, 116, 15, 112, 119, -110, -105, 8, -120, -6, -17, -112, 71, -126, 6, 83, 56, -59, -91, -58, 45, 86, -72, -94, 39, -104, 118, -35, -12, -5, -19, 37, -47, -122, 105, 84, -112, -61, 10, -125, 38, -20, -10, 123, -124, 115, 27, 31, -128, 42, -18, 71, 27, 126, -117, -69, -10, 19, 126, -21, -79, -73, 59, -98, -44, -86, -20, -49, 36, -16, -128, 67, -12, 105, -91, 58, 68, 32, 20, -75, -45, 77, -92, 74, 58, -88, 118, 95, 96, -18, 123, 47, -65, -31, 126, -61, 33, -100, 115, 123, 13, 9, 97, -53, -106, -93, 121, -17, 33, -68, 56, 113, -113, -38, 98, 103, -48, 22, -82, 65, -66, -67, 28, 56, 92, 73, -75, 114, -16, -38, 84, -98, 93, -56, -19, -13, -11, 3, 77, -11, -29, 126, 83, 26, -86, -100, 15, -46, 52, -95, -19, -78, 31, -69, -80, 26, -78, -77, -47, -127, -48, 98, 45, 68, 39, 85, -100, -17, -99, -66, 82, 15, -62, 9, -58, 56, 65, -104, -69, -108, -25, 79, 59, -94, -26, 124, 18, -3, -78, -84, -18, -57, 4, 115, -67, 48, -67, -122, -31, 18, -75, -41, -71, 16, -125, -10, 56, 58, -126, 80, -5, -116, 89, -92, 121, -39};
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
    msg.setTimeStamp(0.9003698049885118);
    msg.setSource(644U);
    msg.setSourceEntity(97U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("IBUUEKRBPPXNGWOYVGJVQMNKCCRLKRZFITLNCQKUBYEFEDODEDFJXPYJCXWGYQWHRSRTUSKMUQOJARRHTTNIRQQLHOKVDXMANFYUWLAGATFOWCYZJCDLKZMKZVRMOBXWCNZBXFSNJNRQPPQHYUMJZHBDZXAPSIHUBAENWTNTLBBSOBIVHPOAPUTCIWGTFPLDEZMYEWXLSMKXSHLIJFQADHWCFVCGPVGKYEVOHUZSLXVMJOISAGZMQAGEJFDED");
    msg.plan_size = 4154U;
    msg.change_time = 0.9881639798402229;
    msg.change_sid = 35009U;
    msg.change_sname.assign("YQHPTPHPUFNLNUKMMQNDDTJDZEPHLXBFEFWUMZSDBCUZRLHZMNERJMQQKQGZRIVKRIHRWGBDUACWXRLSUVBKNPCWHCTQOTVALMICQCBNEYCKAALYFVODMJIJZEYITPGEEFBIOOYPZOWVNLJWBCZVZUSNKCRTXXSXTMFQLE");
    const char tmp_msg_0[] = {-50, 11, 35, 74, 78, -80, -15, 4, 55, 122, -75, 97, -3, -21, -29, 80, 80, -64, 101, -30, -106, -28, 81, -114, -126, -50, 26, -43, 53, 109, -94, 86, -46, 122, -122, 64, -83, -51, -99, 54, -121, 112, -38, -60, -78, -116, -87, 0, 7, 86, 53, -95, 8, -18, 45, -76, -110, -79, -85, -85, 47, 70, -77, 50, 8, 42, 76, 98, 57, 89, 106, -34, -101, 98, 39, -105, 108, 97, 23, 105, -77, -120, 64, -84, -82, 106, -52, -102, -58, 112, 36, 24, -44, 124, 66, 20, 90, 22, 117, -53, 75, -87, -39, 98, -113, -55, -69, 97, -92, -92, 35, 104, -57, 57, 115, -32, 1, 40, 59, -128, 25, 108, -94, 105, -54, -6, -66, 64, 91, -88, -69, 15, 52, -66, 71, -10, 66, 52, -27, -9, 52, -88, -71, -9, -80, -69, 78, 16, -32, 62, 54, -79, 31, -21, 88, -17, -16, -72, -2, 67, 119, 95, 56, -50, 38, -2, -102, 46, -114, -104, 94, -29, 113, -101, 6, -90, 116, -10, -41, -127, -124, 96, -88, 100, 23, -82, -79, 73, -29, -94, 95, -118, -106, 98, 16, -22};
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
    msg.setTimeStamp(0.8630118126983841);
    msg.setSource(60067U);
    msg.setSourceEntity(183U);
    msg.setDestination(45947U);
    msg.setDestinationEntity(218U);
    msg.type = 27U;
    msg.op = 9U;
    msg.request_id = 30892U;
    msg.plan_id.assign("BOEVAYRPSDTJLLKCAEGGYRMOYWTAJPKZNDQHFOPVMVQLWSKKJXQKJENSPDQXMIWGIUBLXUYUUBZTZFWHQHIGQ");
    msg.flags = 36260U;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 21U;
    tmp_msg_0.comm_interface = 98U;
    tmp_msg_0.period = 54944U;
    tmp_msg_0.sys_dst.assign("BAYIOZZVIXRKBEYWMLHKUOJRNSEHNMRNGBCGNDRXZDDOGKIMAWUZIETGQXOTBUOFLSUWETIOLXDNBZEJKVUWLFSGPLGNDTSYYFKVQOCTYSIPHWYUHQXOVSIPMAANJOLPCIC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PSIZMXODFNRTYCEDQLLAAURJWGIFJVNNQHEAPXZICYEEBHMYNUCRCPHKDPVUHJASSMGFKLZEQCHGDCXDMMSUDII");

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
    msg.setTimeStamp(0.009298859059688969);
    msg.setSource(35096U);
    msg.setSourceEntity(82U);
    msg.setDestination(7755U);
    msg.setDestinationEntity(16U);
    msg.type = 24U;
    msg.op = 173U;
    msg.request_id = 60021U;
    msg.plan_id.assign("FGDMLVKSFFOUNQDNZQZNECQNOSXAAUJPUPZYJSCSEYDVTQ");
    msg.flags = 14037U;
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 44U;
    tmp_msg_0.op = 73U;
    tmp_msg_0.request_id = 14388U;
    tmp_msg_0.plan_id.assign("ZLJEJEGPVOMZFFUTTNFBCUDDOTAUYWXKIROKBEYLFUWGHJCOZNYGQDYMYMBNJKDJYRIWAVNLOUERCDLWQAHJICDKNNRRGAFPSZUVNUPHDXBPGWIVPQRPAXPHWJTLSRKXMERQYHFSLTWWLSKXZDVJQKNYRSGLXICBLXUAIPIUHBAMHWGGOCBUQFGZADTJDAMFKQGCSVZOCHIZTCHXIFNQMVPBMWTKKSXHQZLCSBSPZBXYOEONRMVYTEQMOAFVI");
    tmp_msg_0.flags = 21303U;
    IMC::LogBookControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 168U;
    tmp_tmp_msg_0_0.htime = 0.7776047183726731;
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 157U;
    tmp_tmp_tmp_msg_0_0_0.htime = 0.6774413670935041;
    tmp_tmp_tmp_msg_0_0_0.context.assign("JQBHTQHUXKIJLTTNEWIPAVMZYJHDHEFGMSNJDKMCEWUHSNRXBXAVDBYAZNPGSLXOKXRIERJMNLTAAUROKXVGWLOXGGWQGROADQLHPTUWSFXZMNCVTBFPPVQQATJARLGBBPEWDREZSXUCUZETPYJUO");
    tmp_tmp_tmp_msg_0_0_0.text.assign("YNDDNXOHHJGCSCKGKTSZNSXOOWIIFJVWJKLYDXXBJRFKLRBQOSKRFSWHMFUEBRBHGTACBGXGACPSTAJNQEKUMWYHMCSDSQRLXKEYJFGYQDGOPCFCUIVLLIQTMTMSXECHBVAQMYPMLMMRZHFNZMAOJDIKOUWJUEQPEWWNZEAGZJLNADDQZCFGVGSWVHFCPJXVWBPTYZQ");
    tmp_tmp_msg_0_0.msg.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("LQFFVOSKJMKMZCJGGIEUHKBRSROGEWDMFAZIWQSGSSCUFPBJCOEUQKQPYWDUQQLHISHXPDTZWBNNMCUDAQODVLQIYXTKHUWGYD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AXJGLCDWYOVVGFQUGDFZRMQJRVYCLEQDRSHPIPBYORTCHUVSYFWPNZJSQNHQALUZYJMMUSPKPLPUAYQRYJCMBNCTMXONKCBOTKJOWTQHSBFZXCXZZRYSNPAYTJFBVPXIEWWVRGGQDXMJSDFCDETUDGLFVRKWZWKRKMXXKUGATBVULHINFNECHHEPDWLAHBKDIMEUUQTGFZOJLFQBHRISAHKNNALTBPE");

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
    msg.setTimeStamp(0.1365920030236275);
    msg.setSource(76U);
    msg.setSourceEntity(120U);
    msg.setDestination(26652U);
    msg.setDestinationEntity(33U);
    msg.type = 3U;
    msg.op = 243U;
    msg.request_id = 18385U;
    msg.plan_id.assign("JAFNPRUXCDXUUWRRVZBMNOKAOZKLUNREJEHRUKTSKPHQGZFXYELIDVUTLFUNPEJONRJRCHCOEOVNXFD");
    msg.flags = 12405U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2599872326U;
    tmp_msg_0.state = 186U;
    tmp_msg_0.error.assign("QLUENSMSIZFAZVRULEOQLHJKUOCDRVKQVMWCNAJNCEWVOAYADPGA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ULWLWKJVJYKVNSQQSWQXCBKWWGTHTOEUAHTQOCETAEYJOXGPYRAQDJDBNPUM");

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
    msg.setTimeStamp(0.3652557784795877);
    msg.setSource(45645U);
    msg.setSourceEntity(244U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(34U);
    msg.state = 127U;
    msg.plan_id.assign("XQKWCEYTYUWLVIGVP");
    msg.plan_eta = 1228692745;
    msg.plan_progress = 0.9653391939932131;
    msg.man_id.assign("HACKXBUJHPMIVFGQFJJQFMKVRFVDAZUXJIHHFYOBNZNBCSQOWCFSTZWNYPYJIZAFGUXUOEXXOFUYMRWCMFGGPPLAGVJTUMEDOSNDQOJKZHFGQZPVTLIQHSOKKDYKSUIQRIUCBCQCYTPWLGMXVDATVDBQZXYWLPRQHLKINDASIJCHT");
    msg.man_type = 44776U;
    msg.man_eta = -2033455344;
    msg.last_outcome = 149U;

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
    msg.setTimeStamp(0.9112530888345806);
    msg.setSource(15792U);
    msg.setSourceEntity(13U);
    msg.setDestination(52997U);
    msg.setDestinationEntity(55U);
    msg.state = 112U;
    msg.plan_id.assign("DTRBAOXMWASAUOKUIQBNQPXLIXELLZNUCDWRDQDZTWKWXHVPFLHYTLFTBQGNTZZUVJUJC");
    msg.plan_eta = -2073846381;
    msg.plan_progress = 0.5185555550379362;
    msg.man_id.assign("ZMJCMWIQEITOCIVMUFQTKQDWOCYUPXBAYUJKELVMPYTFDONDGGYLUVCVJONNDSBQLAPGTWSDLFWKVCMZBPJNIKBVQDXAXXREDCMKAQGEWTACVIILWRUADNRIEVJBHGMHJQPJKNTIMUZFCSGNLEUVEXPDZHFJKTSRRJEPQORLEPFKOURBFVZFSHFAGWYHBUSMTTCBHZIAKBLNPOOWLSXXSOHGISKXGGMFXWTYABQZYEYLRNWOUZNZQY");
    msg.man_type = 27453U;
    msg.man_eta = 687384941;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.4998688342797647);
    msg.setSource(52969U);
    msg.setSourceEntity(238U);
    msg.setDestination(9537U);
    msg.setDestinationEntity(182U);
    msg.state = 34U;
    msg.plan_id.assign("XUZQAVWSROUOAIWVDDHXZTBWMERDONBJOYYPGXFOFZSPFPLEDXKHHRRMJKACLNIKGUQBNWXPPEUCJATKIQIRHRBTUHJMNJGQLHYGDSQGOSCUERJNLOQVWSQNMZYMEPZPIVBCQLOKSZEYNXASLTGZSZ");
    msg.plan_eta = 1086752827;
    msg.plan_progress = 0.6453354717528339;
    msg.man_id.assign("TTXCCKNSQTWTHOOGYPJVJYVUDVCJDGXVPWLLZXMKDQKVXTQPBEIDZVTGWOQQTUEKYBUDHRSZSZQXPQXPKAUTEIZOMBBSYANMAAUSMTDAMRPUUIMLVCNSORZFKILWQIVIEORUNLXMDXJBFKFHDBBDPM");
    msg.man_type = 57985U;
    msg.man_eta = -227070559;
    msg.last_outcome = 254U;

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
    msg.setTimeStamp(0.11986578162629791);
    msg.setSource(17600U);
    msg.setSourceEntity(32U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(94U);
    msg.name.assign("FTKGVVEGUMRPGHKADQLVTOCQQRVUXBYBYPHZHNBITGRJRUKRLOCRHDGJTIXJMUCT");
    msg.value.assign("ZAKAYUWSSOIPBLIINXXYGHYMZUMISNIRLWTCUGBUKYMVNCPFYZAHWICJDLHNACLIOTXLFNVPOHCARFQWVBPEMVFQBKUVXSYWOQWODBDKZEYCS");
    msg.type = 132U;
    msg.access = 12U;

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
    msg.setTimeStamp(0.10681366546543292);
    msg.setSource(59058U);
    msg.setSourceEntity(245U);
    msg.setDestination(25071U);
    msg.setDestinationEntity(147U);
    msg.name.assign("GMLEENVDCBMEA");
    msg.value.assign("BOEUFEATNTQSNOYGEQPNIWKXFMYGMNIJYXHPEZWLFBCBXOJVARZTPWKLBYXQMFNNTGMEKSXUPVLJVSKPDXOQIAVKFPMHFWUKMMUSBEGTIJFHLHTABRZTQCNYWGLNICYCZDILGQUHNOWMQYOZVGIBRTNVAUOUFKTGUZQRHRKYEDDXYEOJJMVOXUKISWFDZSLSPVJSZLCHVWAXZBKQLFURSRJ");
    msg.type = 24U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.47867480088429326);
    msg.setSource(25796U);
    msg.setSourceEntity(38U);
    msg.setDestination(38430U);
    msg.setDestinationEntity(58U);
    msg.name.assign("FYNQWKSJGFPIAMMUAHHMBEOGDTEMULCNHTLXMYDAAZRJXLJDZGUEUGYTIASFNIYVGVLJVYPAVOFOQQWZEPYKSHKGQQJIPUXSXLLFCKYUYRXVNBZOPUIAWOWXZPCCFVSZPRQTWNBWEENDSABEHHFXWEGDWSODAMLMROJWYBPRJSRWTFOXRVCXXKTFQZKKJTTBTBVFKCPCRNAOLIHLBNILCCGCURMZVHIDTPODDUKRDGZEMNEBHQBQ");
    msg.value.assign("NINCUVGAAUYXPM");
    msg.type = 254U;
    msg.access = 70U;

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
    msg.setTimeStamp(0.7407343990012828);
    msg.setSource(41468U);
    msg.setSourceEntity(3U);
    msg.setDestination(38627U);
    msg.setDestinationEntity(103U);
    msg.cmd = 236U;
    msg.op = 17U;
    msg.plan_id.assign("BUPMYKSQPMHWLULB");
    msg.params.assign("LCLTNGMUAQIKQIBSVBKMFLFLBTNVUYFVWPZMALNJHZEIYOWJIQWUZIWTXNFHIZJBIBBNHPZNSSLNVRZOKHJALMGGBOMZYRFDVXCMJUYUSFAMADKRHWEHRCQAYTGFPEHKTXSKHYSQEPAOQQOIXXFCS");

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
    msg.setTimeStamp(0.23574296682518436);
    msg.setSource(650U);
    msg.setSourceEntity(205U);
    msg.setDestination(11602U);
    msg.setDestinationEntity(228U);
    msg.cmd = 104U;
    msg.op = 68U;
    msg.plan_id.assign("OSIQFXVCLOXXCANRPRYJPBWUWSPDZXMHIBMTEXEWIYMPCLNFQSKDBQSSPBEDHEKITNLKRMFMUQLQWFHSFHFCEMHIVFRIBTGVTAVQUTDUJKRNUTFRZVUYLSXGCBATNYAYOL");
    msg.params.assign("MEANDAWCPJQYIKDIJLRZSGIMKNEICYAZVIKVDGCNVBZHPTTNDPRDXMBCBVMTXFMTDROAXB");

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
    msg.setTimeStamp(0.6006229183958949);
    msg.setSource(60511U);
    msg.setSourceEntity(52U);
    msg.setDestination(34631U);
    msg.setDestinationEntity(104U);
    msg.cmd = 205U;
    msg.op = 33U;
    msg.plan_id.assign("RUBUVUZEOHENLKYCGFWGDSQRCQFCZFVJMHWZSTUTLPNENEYPKWJNNPGCHRUZKOPLVTAYETFRDNMRWNUTLOJZUSTALKXPWTGBGCGPDCIYUTVEXWIJXOEZKHJXSGADDSISHJHKQEQWOWBKXKMCVNVZFKWFBBIULX");
    msg.params.assign("EBGXNJOWBQXGFCYYRRFNHFJOPAWHORRLRACAIETOWZNRTBODRWLFCCMXJDPNKUJKCSCCWKDDKJSZSPHTEZHLGIVSXNIQEJQMRMHQUJMXBSKSNAMNDMBYPUGKQQYLVXVXOZESIBOFVZYWUIXIJZFGLQLUQWAACQILEVTXYGYAHRPTZHNSPTLMIDBKGZKPDHUFOVF");

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
    msg.setTimeStamp(0.6093368144609401);
    msg.setSource(23719U);
    msg.setSourceEntity(44U);
    msg.setDestination(45365U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("MMOLVZRHHJKQAZPHRVSYYRJAACFSGUBLYUXSRSVBBTCC");
    msg.op = 199U;
    msg.lat = 0.8522319368492765;
    msg.lon = 0.3358581864604766;
    msg.height = 0.9836179210137189;
    msg.x = 0.6391813959134184;
    msg.y = 0.073667561393843;
    msg.z = 0.09204687819171797;
    msg.phi = 0.09264395888127319;
    msg.theta = 0.5561316531009818;
    msg.psi = 0.20671433983590548;
    msg.vx = 0.3279913823046162;
    msg.vy = 0.36038632046581454;
    msg.vz = 0.24894337205650452;
    msg.p = 0.13493540651867342;
    msg.q = 0.9435999380378025;
    msg.r = 0.942816149193413;
    msg.svx = 0.4109936559772627;
    msg.svy = 0.8793614596958139;
    msg.svz = 0.0021584691914180443;

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
    msg.setTimeStamp(0.06656448740179666);
    msg.setSource(5534U);
    msg.setSourceEntity(248U);
    msg.setDestination(8396U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("BXBJEOMFAGXFYCFLZCJPRGWBYTJLLWQSWOBMLAUCPTKUJGGLYAZHDDNCWZTCVCWUJKYEXGHRJQTMRZLAVVPDDDPCIXBMOSGPRDMZSXTNQMMMDXVKSRKTOSPRDNBUQBRFOEOWMRHSUSCYSTFHUQKYVNVTIXWAQEGJJNABFWKFEILBHLVBAUEGPQDSLZKNHPCYQNITJWYZOZUQENWGHZTIEHIROAXJKAISNEEIHUFNKVIDGCZAR");
    msg.op = 15U;
    msg.lat = 0.830832539473844;
    msg.lon = 0.11174241712579847;
    msg.height = 0.551821298609823;
    msg.x = 0.14399798278538845;
    msg.y = 0.6994887959990862;
    msg.z = 0.44761902464487935;
    msg.phi = 0.7386844647301297;
    msg.theta = 0.09640765597814227;
    msg.psi = 0.34552692136392005;
    msg.vx = 0.6915068699982819;
    msg.vy = 0.5112669189739407;
    msg.vz = 0.9044797658231356;
    msg.p = 0.29896713578117395;
    msg.q = 0.67893160983445;
    msg.r = 0.003042854942468476;
    msg.svx = 0.12474561047557975;
    msg.svy = 0.13158675870074377;
    msg.svz = 0.5189620058369336;

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
    msg.setTimeStamp(0.057950663312830386);
    msg.setSource(56629U);
    msg.setSourceEntity(136U);
    msg.setDestination(14012U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("SMWXLJMVUYCTORPPXZCWKWSGBEZRPUDJAILODLIBYPXAOWKSMHHVKNVHRDFMSRXOGOKAUZAJOQFJRQVDUKUJLCIZGEXIETYYHSSCEV");
    msg.op = 145U;
    msg.lat = 0.37949663248442156;
    msg.lon = 0.35323810433118696;
    msg.height = 0.4283114692013351;
    msg.x = 0.10250599539174154;
    msg.y = 0.8379249010318125;
    msg.z = 0.1410967805242217;
    msg.phi = 0.40732712402156024;
    msg.theta = 0.11221732099805881;
    msg.psi = 0.517758656439178;
    msg.vx = 0.054765779118501;
    msg.vy = 0.1476495766710081;
    msg.vz = 0.16416193664586842;
    msg.p = 0.4916424720641671;
    msg.q = 0.8277285465585438;
    msg.r = 0.285703213721056;
    msg.svx = 0.116172702976576;
    msg.svy = 0.9611919550595363;
    msg.svz = 0.3167473155705026;

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
    msg.setTimeStamp(0.46220424134398774);
    msg.setSource(62381U);
    msg.setSourceEntity(55U);
    msg.setDestination(22105U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("HEHCKNYZBRLVJEXLUFUVMJRFZXUXJITZPEHOXRNEHPGL");
    msg.type = 14U;
    msg.properties = 189U;
    msg.durations.assign("BELSGSPXAQUENVMAENFRBTNFMSOEZSJTAFODWGFSIZIDXATQGPSGHNGNUYMCXFYCXMGYTQCTVKVDZFPIUMVUJUHKWEOZVRZBHYXXCBZVDDHQJJMLNKHIBXDLOIIPSTPSUGQKNBVVMJAOCENWYITBQHXRXGIRBWHENPRHJWQTVLWCTOFNWLAKZPOUCQHARYPMYSULFSYQTKUOGDRJUCWLKAIALGFKZ");
    msg.distances.assign("BARRFBSPUSRACVYQFYHSNXMSTXITHZSWKFDGOPYPDBCJGFTWGXJWXZCOGZSMNNBOUGSASYMFUHFYQIPJRKHMOIQMRCZPHHSTQXVSWPLLCKHQJEZKOXNDVCHIPEXA");
    msg.actions.assign("RQCWOAXTLXNRYKCYKXIJDHWZVMBTUZMPOSSUKOFVKSCAXJZUMIJTGFSESRBRGBGXSYNYZDTPIMOLJWCIGWNUCGAHNVNCMUPXBRZZHYHIPGOCBBXOPUNTGMBRRZUTGFAWAHQDKQEIUMQHKRLEFNSGSFQFHPPYLVCEOFOJJXFHDPKEDMZVVISWCKWYLOYJIEADQNXA");
    msg.fuel.assign("LFAPHUNBJSWOJDZDFDREYLGDWTFPUTWUIGCKHTAVETMJEJBCGSPGUBEHOQWHZJFEAMVMCNUQLDVQCYWLDICWNMSDNZXTHMLSGITBZEXBUUONAJASAAVTKGZFQOMTBMRWIVKIEXQQRMSKOJPQLZYRXIMEOCYEKCBXUXOHBOPVVDLCAPSOQNXKF");

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
    msg.setTimeStamp(0.406524593823946);
    msg.setSource(36065U);
    msg.setSourceEntity(180U);
    msg.setDestination(29444U);
    msg.setDestinationEntity(96U);
    msg.plan_id.assign("SMZBWIIYAZBYGKEUAJTPCQGQSNZIRXAZQTPDYQKOXHHMSKKERZDRCPCKXNFIAXQKVTJWUKMIGDQKJUMSWLBLDRLWUCAONWBDOQTWCBYHEVAXKSJGDEJBRDSWVFHYOJZVZFYCQQFPOFXFUJNZARRNFHCHGFOCERAWXBLYLHPRHVJGVGDRCWHEOJCTLOPIBSILYVLEB");
    msg.type = 141U;
    msg.properties = 12U;
    msg.durations.assign("RFEBOGUIKYRWHJPTASKEDSLXMFUVLQSBCEHUWNHCPMNZSIBPSUYRABOIGMGIGUANWZBRRFEQGDEJKUFCUGPBWEBJLBAVSPMVXFYIDPOOHIDVNTLQNNQYSLTWRZJMGWIFKDNELZZVXTCMYWZODQEXPKHFWVTKGAMEJKZSLJVDAOQOHIWJGVVCCRHXFROXLYDIYTAXZNAHUTROPAGCCRWIYLTQPQLP");
    msg.distances.assign("UMWRXNROPBKYIQZHFMXPCKAJZLDNIUSOIANWGMGXALKBYGVVSSDWBIWONYCQGUGIFYYOTKOBXEHTARFGMTIPUR");
    msg.actions.assign("KJDSOIDHYIWQLJDUTFTIRPAHRCGOAMMWPQNHBFYJGNYJGJWEEPHIDCFLBUAB");
    msg.fuel.assign("EKMRVKMKOCRCJGYZAUGETQOXJEPDSZQMXAEKJYUEQAVYFMNIVBCQRKZUSNIDRFHNTHHT");

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
    msg.setTimeStamp(0.8380127675987704);
    msg.setSource(8846U);
    msg.setSourceEntity(87U);
    msg.setDestination(38273U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("XDOPXPGYXXYHXJWJQCYJOSERUNKIBETFZIWLNZWILZQVRFPFJGGAKVCBLWYKSHSBHQEKNYSVPXKCZZVEWWMVUXSAOHRVFEAMDRFHINODVZRULALRYYHDHVMNAGTCHIA");
    msg.type = 70U;
    msg.properties = 174U;
    msg.durations.assign("MUTZOAQESXBDUYQWKIDCUMXKJYKMNBTANQISLINDRHJRCIPWKDEJDGMRLHDVBHXOAOQODPOKENZLCBYQRSIUGOQGVVFPPZCCYFNACXCVLBKHWBNYQFSVZJEPMXWNHQVXTEMJTWERQULWSFHOJXINSYDPKFXZFASOUTIXMAHYGKRAPIVRQNGBHGVDUVKPOIRURAUZMEGFWFCWE");
    msg.distances.assign("ENCTXYJBIUMWMERTNHNDSUFFGYMCIPH");
    msg.actions.assign("KLBGHZYOXHSXFIBMYUQRTEQBWYZUMCRNOZUDFHFLWMIEUXOGJESUKSHPWAASPXGRSGXYCKONEIMHJYYJDEBKPPCBULFHLCIAADFVMLKNLVHTTMBXQZBSVDZFAVNL");
    msg.fuel.assign("GFUJPYXVCWNBTKGJDLAZNYJRTVUVNQCZPLOTJIUMLXSTHAGGVEMJGQZEMLDOYZMVDCNDRHOJBA");

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
    msg.setTimeStamp(0.4888089349546244);
    msg.setSource(32865U);
    msg.setSourceEntity(137U);
    msg.setDestination(40144U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.872308919201893;
    msg.lon = 0.5545998601376084;
    msg.depth = 0.5736670290775393;
    msg.roll = 0.6067934171522339;
    msg.pitch = 0.11739425035071438;
    msg.yaw = 0.7344856920816405;
    msg.rcp_time = 0.2544891672430588;
    msg.sid.assign("HFJJYUSTXIKDLELPAPYEGRJEKGKSXLBDSAOCQSCPBZRLIHEZILBIOQ");
    msg.s_type = 196U;

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
    msg.setTimeStamp(0.7147148917840955);
    msg.setSource(58948U);
    msg.setSourceEntity(211U);
    msg.setDestination(15836U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.9089406920979407;
    msg.lon = 0.9109177205264471;
    msg.depth = 0.7047335033166865;
    msg.roll = 0.046603009565789555;
    msg.pitch = 0.5040673623664662;
    msg.yaw = 0.812278717123018;
    msg.rcp_time = 0.6487004550480414;
    msg.sid.assign("AQCIVQTAPAEHKRYZJJDSMRKFEOCYJBWIOSORDFNYFJRBZLGEYAJUYQMNXCCDEXNCCTNNWZUDHLGKWSKMZFJZLXBZPXJOTMZHKSODXQJFDJTPLVEWCDMCGGSVRBWMFVVPASQUNQFOAYDXDEVEGPKCOG");
    msg.s_type = 107U;

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
    msg.setTimeStamp(0.5323684252951569);
    msg.setSource(1399U);
    msg.setSourceEntity(36U);
    msg.setDestination(32504U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.8132060414167271;
    msg.lon = 0.9373235618440457;
    msg.depth = 0.27624100983724686;
    msg.roll = 0.010673261155927039;
    msg.pitch = 0.0064612557144312355;
    msg.yaw = 0.1023786066143717;
    msg.rcp_time = 0.012419998314058156;
    msg.sid.assign("QGPEYBFPKOMYNCJCHXQWMAKJNUSIAROJWNRUDKUXPO");
    msg.s_type = 195U;

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
    msg.setTimeStamp(0.06715715995351801);
    msg.setSource(1430U);
    msg.setSourceEntity(248U);
    msg.setDestination(24978U);
    msg.setDestinationEntity(28U);
    msg.id.assign("CKNSKPMSHSFBOTCOTRTTQTLGYRYMDDQMOJHWDWOETOUZSKUAK");
    msg.sensor_class.assign("AIIEVJQXNEBOQF");
    msg.lat = 0.13152984912019472;
    msg.lon = 0.577386920936273;
    msg.alt = 0.9201589724165852;
    msg.heading = 0.5520545931714708;
    msg.data.assign("LVMLFAJTYEIQDWSPKSCKMJTIWFLNERRPFOBTMDZBEACEFXXGYXPXGEGLLQIANOVBVMGOPESRYKGXXEWNGVRZNZPVQQUJIAOBDFIZJPYTDRFKZWJJHZBYMMUQWNRYHUPRDDWTUBNUSEZIHWLIJUYFNVVEOLDHFFAHBXTMHUCOACAOCGKQG");

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
    msg.setTimeStamp(0.6920138773031687);
    msg.setSource(25400U);
    msg.setSourceEntity(10U);
    msg.setDestination(11933U);
    msg.setDestinationEntity(150U);
    msg.id.assign("JVSXUUOWACAUYRFDMADNOBVPTSQJTXGDLM");
    msg.sensor_class.assign("FVPRKMUZIPLZRBJMCQEUJENUYSZHCEQXIYOJDVNXDJMBJBESVJCXSTLXCWGCXSRAFTWNWOJORIYUSORWFDOBXHLVRGHUTISWQMFABLEANIYYDQJHEUHCWMGKZAODGNLFDWXANMEICUHRKPJNAKYQELPZVTOBWGAQBSSCMRFTIIQTGNLKEIXPKFHAJFTPOUBAPGRHPFUKDGDDYRAZBPKLC");
    msg.lat = 0.7252120721430304;
    msg.lon = 0.06472276673090493;
    msg.alt = 0.04998196650945341;
    msg.heading = 0.4235472846130106;
    msg.data.assign("USIKEIFJFPYITVUQYUVZJVPRTRWGPTKSVHRZRILCPYJAPCELNRXNMBFGOBDNJKFUNMBTFKTVVOMHKLXEZMKNHCZLSUXQEAEWCJVWBRJUDHWOFPDOWBIJABYQCLOBHWPVYDOROWLXMKCAVBRZUQUPESXFXITOQHAUTIZQMAGZMWOSBQDUZSAZGGHDEDGEDNXNYPYAJMLLKHQHQCTJEDLFGIYSIQYHKAAXN");

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
    msg.setTimeStamp(0.6676904289322994);
    msg.setSource(5563U);
    msg.setSourceEntity(45U);
    msg.setDestination(34610U);
    msg.setDestinationEntity(0U);
    msg.id.assign("TOAGDQEEALCBUYAQGRELPFIKFZMXZJSEASCYTMBQYWSCRVSXXVRBCHBDDJSJBQOXYMTDURGXATKSNUVCHFHNFQIVXMRPGHCXKDGMAEJWWWBPGTFIZWNMPCWXNLUIMAQBKUOTWQVMDPSHQIZQOJLJPAFHROPLOGQHFOLTWBSHLGPKFAGZHVZAWYOPRZIJEXVCKOEBJNZVFDOVEDLKYKLVCENRTHUT");
    msg.sensor_class.assign("ZVZKYVGLQNESYRQIMFANMSZLXOSRXTSPIMWBYWOMODDXNXEFTGLXBBNQSUYHACTDKJJZLUFODIROTCGEYQCTBFZNKEROHGJTVMDYAKLXGVVQBCYEJRMIJNAJGVJDFWWTALBAYWEDPLMFSGKH");
    msg.lat = 0.09680716166077763;
    msg.lon = 0.08599117525239619;
    msg.alt = 0.773842959079117;
    msg.heading = 0.7977505831846762;
    msg.data.assign("XEXRLOMAXTAJHFJLNQABOMACVTSPEQZUXMJ");

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
    msg.setTimeStamp(0.35547107201083117);
    msg.setSource(41440U);
    msg.setSourceEntity(96U);
    msg.setDestination(28311U);
    msg.setDestinationEntity(254U);
    msg.id.assign("NMLULKCXDEDJBJEWTUCXKHGFOKKQEFSRSZUYHSCFNIYBODNNDYCNEUBKFTRZUAJCIRSIOMIZBQYDWDOTVAWBBAKTRBFPIUKWCHPCTKQFEWRJPYPNMGBONXEN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MHNLUZIBHKUBAZKPQNIYOPXDDGHWTXMMTJDDFGXPZBZRNRJOXVALOZHLYCQVVUCLJBNFEKFBQUTCBLQSFATALCIGXIVRSNEZUCBAFEKEYZPPXGQWSAWQASIGDPCNUGFVMVJRVROKRLMCURHVWWCDYFJJXSSPPKEXXONORYWLMFMAZCNTMEBVDQDAYHSOJGKMYQDRPVSWJP");
    tmp_msg_0.feature_type = 45U;
    tmp_msg_0.rgb_red = 98U;
    tmp_msg_0.rgb_green = 0U;
    tmp_msg_0.rgb_blue = 103U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6284127334346001;
    tmp_tmp_msg_0_0.lon = 0.4375210199574414;
    tmp_tmp_msg_0_0.alt = 0.7761811761913024;
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
    msg.setTimeStamp(0.9816607616756515);
    msg.setSource(15128U);
    msg.setSourceEntity(11U);
    msg.setDestination(63296U);
    msg.setDestinationEntity(247U);
    msg.id.assign("FBJBDZOWYWMAACUIPDHNKAWYQBILVAAGGNSWZCURJCZCYPPFSCYXRCBGTODJLBRXOUEJQVPMXAXRVVERFVSMHOTXIXGVGQMWETKEGIIFAQUDXDSWMQZCNYUIVSJZPKCUBRQGOYVLLKNJLEVGBZOIIEKPFTSNSGQZDDQTPQWDYPHAGLPUUHAYBFWJL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QHMABVBIJBAECYIAVKATBLPQWAALRPXRCUWVZOFYMLIVFQBSHSNUFYNSIXFIJXAUYWOQCYVJTBMBFNGVOGLLPZUEZJGMOURGDUXIKVZIQAFSWCEJCDKHJBCXXPMREPAZDNOZSHLMEPFZDRKBTSWS");
    tmp_msg_0.feature_type = 87U;
    tmp_msg_0.rgb_red = 185U;
    tmp_msg_0.rgb_green = 159U;
    tmp_msg_0.rgb_blue = 25U;
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
    msg.setTimeStamp(0.4566963420539851);
    msg.setSource(43771U);
    msg.setSourceEntity(230U);
    msg.setDestination(51788U);
    msg.setDestinationEntity(215U);
    msg.id.assign("PLCFUYZAQKFEAXREEIRJTMKBNGCOUSJLCJLOIWHABARBBHNFSNSGWSSNHZVYBFVNIZGO");

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
    msg.setTimeStamp(0.2210164546135489);
    msg.setSource(219U);
    msg.setSourceEntity(53U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(121U);
    msg.id.assign("TLZSKRFLONXEIHGMOWGCGCOTJOVZEFXSKUMLIEHBUMFYZBVARZULRNIEVEXSDKRGJXWFMGRRCTQCBIBNNHDUYFCYLBBOIXYYNPEBPZPYMDGIYTQQHTIJCCXAHZKNNSKLJUSMDSXOQOXWWEHVDBPPRFLHBKQTDQKFYSJFTHUDKGTKYLMNFVVCRIACXOPMANWWTALWTFEPUIZSXHEON");
    msg.feature_type = 199U;
    msg.rgb_red = 87U;
    msg.rgb_green = 229U;
    msg.rgb_blue = 5U;

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
    msg.setTimeStamp(0.3774685480694482);
    msg.setSource(44363U);
    msg.setSourceEntity(96U);
    msg.setDestination(55408U);
    msg.setDestinationEntity(62U);
    msg.id.assign("FYCFGDUNOWWIPSARPONBSVJJMMBAYBDOGHUQYDZMXJBVBUTIGTUBULPUIBXADIEIFSTSOGNTRZPHMLRTZKSDVTWDHFMHNKTHLPGLOMGOYWQZQVJCGEZAKWQNKAGQIDLCIDKBEOEKJFEWSWIXJSGHIJMYXVBXPNQLUZBGZVDKRYSIPTJRKUMXFKHQRSFCQNFOHLUPAVMEXMQLWXTZKZCY");
    msg.feature_type = 80U;
    msg.rgb_red = 171U;
    msg.rgb_green = 130U;
    msg.rgb_blue = 4U;

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
    msg.setTimeStamp(0.2510417814036101);
    msg.setSource(13735U);
    msg.setSourceEntity(123U);
    msg.setDestination(10132U);
    msg.setDestinationEntity(130U);
    msg.id.assign("RCUVEHEQXUBTNREZURVREMEXGKILBDBQDTKMZNGSZSCCOHKXCCRPYTYESSTCZUXEIMQHKOIIMZNYGIJWDCBLTFHVZXXFQAORWKFRWFFXZAPCNNGMYHTJRJLKPUFD");
    msg.feature_type = 240U;
    msg.rgb_red = 73U;
    msg.rgb_green = 153U;
    msg.rgb_blue = 56U;

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
    msg.setTimeStamp(0.43639616620984656);
    msg.setSource(39995U);
    msg.setSourceEntity(171U);
    msg.setDestination(16828U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.42778679688761856;
    msg.lon = 0.25171964264339275;
    msg.alt = 0.28653287759180635;

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
    msg.setTimeStamp(0.6739156900184704);
    msg.setSource(65254U);
    msg.setSourceEntity(34U);
    msg.setDestination(61353U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.46832833481872105;
    msg.lon = 0.7620968041216827;
    msg.alt = 0.752699170586857;

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
    msg.setTimeStamp(0.9599165051332673);
    msg.setSource(63208U);
    msg.setSourceEntity(253U);
    msg.setDestination(5710U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.5108978044721726;
    msg.lon = 0.4729676779961045;
    msg.alt = 0.6705881441353648;

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
    msg.setTimeStamp(0.4534232939915789);
    msg.setSource(14218U);
    msg.setSourceEntity(156U);
    msg.setDestination(39573U);
    msg.setDestinationEntity(115U);
    msg.type = 53U;
    msg.id.assign("JLGMIIHLDHIA");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.46411697497250903;
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
    msg.setTimeStamp(0.1480206885179043);
    msg.setSource(60802U);
    msg.setSourceEntity(67U);
    msg.setDestination(27029U);
    msg.setDestinationEntity(232U);
    msg.type = 58U;
    msg.id.assign("BZGJLXGXOVTRFUAZYRDYHJOQZZLZLANEOWHKQUTGNWNCLFRLDDFCOFLECCKTMCBAWBUAFPYUGWPWIYZJOJGQPXJFTOKWMELV");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 14989U;
    tmp_msg_0.lat = 0.18843125289604246;
    tmp_msg_0.lon = 0.438613572035894;
    tmp_msg_0.z = 0.0396343052534015;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.amplitude = 0.2776427062339937;
    tmp_msg_0.pitch = 0.6093411606221647;
    tmp_msg_0.speed = 0.4026767664992106;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.custom.assign("MIGKHEZROXYDNNGBZLEZTWJSNNIHOIIHIRHRGEADMMCAHVYOWZNCBHSNHTQDASQMOAJFZAJTGSNJIICQECUFPKJMXUOECZWROLEVKOWQXZQKYBPWUWSUQPBWMMJBANGKJOLMFGLXXAYURYPFFJQBWDFGVCILFEASCYWIXZCBGPFDXEHDKBSVPP");
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
    msg.setTimeStamp(0.13136943989285033);
    msg.setSource(59444U);
    msg.setSourceEntity(118U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(217U);
    msg.type = 196U;
    msg.id.assign("VPTZXFZKEQHDYWLVGA");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("FYPWHYUJAQXIXFZSTMMESVOCUAWBCLXMYQHSLEUDUWMDTVOHXATAYBQUEDUCNIVORKTUNMVGOOUJYKYWNFLEXFNOLDIWZKJRPZUNAGHLEGSTTDPIJLRSJDSINPRFTVCTXWFIRDOPSTHXGGGROPMVDFVEOZEFIJZHCKWDEXSBKCAJMBEKMHLQGZHCBZXRFNJWCNATGVBQIIYMRZPRWNNGYXZWPQYBBGSVZMCJC");
    tmp_msg_0.reference_frame = 147U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 18944U;
    tmp_tmp_msg_0_0.off_x = 0.32305385274052545;
    tmp_tmp_msg_0_0.off_y = 0.7996647162345308;
    tmp_tmp_msg_0_0.off_z = 0.3707588183320999;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("IJLHCQHDOELCUTMLTQRFOXTQQYIEPJXASWTTNQKWIMZJUYDDWKTFMACZIJZPMOXNIGPSSCHEWBKTOUPOXYFNSDHPCJGAWARUYGMUEIZPDNTZGUCNZDEBIBEVSRFAPXFLASJMYLJBOQEYKRDRYPTNVFKGWDZXROGCKAAKSVRTBAFSZSVGQLBHKRLVDCPXUANMBJUFH");
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
    msg.setTimeStamp(0.025838647720400787);
    msg.setSource(7521U);
    msg.setSourceEntity(87U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("POCZSQLOQQBKFYEJXPMQCRITKIGOJCXYVLIGBZLUUZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LDWAAFRGIRMJTUCCXXROUKXSIYFAKRYVMNFCUSTONDXTWSFSLBMSEGSWVIOFJCWHLRFZBAYLHCCQLCOMBAQAJUPYSEVPZISNQPQVULPTMDZFEYZDBVGNWYBSHAPQPOHOQKQVKMOIGAJETTIEDEMJJLZDVGZYREYFSKLKJQGVBRNJYZBCYXUGCNULKGFZGWGCUKHWKTPONWXHMLTOOHPIXXXDBH");
    tmp_msg_0.sys_type = 18U;
    tmp_msg_0.owner = 46496U;
    tmp_msg_0.lat = 0.4891928554588234;
    tmp_msg_0.lon = 0.9615455199302879;
    tmp_msg_0.height = 0.16694478510969146;
    tmp_msg_0.services.assign("MJAFLGPTVSAJRZWRQRWHXGJZXDXRPGWQQYJEEDTLRHEKDLDLTYPWOSIJNYILMCPAHVVIOVSUSWNKOFDGQPEBSVFCKNZOMBWCCSAXYBOLMCUJACEFDUFFVKKEHUBUABZTNIBKSMQNRVZAHMWDFU");
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
    msg.setTimeStamp(0.2880973840840132);
    msg.setSource(17741U);
    msg.setSourceEntity(120U);
    msg.setDestination(63174U);
    msg.setDestinationEntity(183U);
    msg.localname.assign("LSRPLGHMOSNBVZNIDBIRWPUKXQEWVEURHXIGIEKXFJSYVIXIJRIWAQMKNTGMCCHCZWRAJGZECWFAFPHOTJYDUBAQVWPXLAVENNTSCXDW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CDFZPVTJJFLOGRSQQINAZUYRFNAEBVYHFSPTXTXBJBNPTULCDKKPXUWUINWEKWVRKDVXGCZZYDRXVSGDATBAHDJQJUSIZQMKNKYABXYEMKARPYUXVDINWOZHGBHEGYCQSLEFFMWBBPPIWNBQQCBSELQQWRVYOHHRTMJRADSDAWIETAZRVMNUOAHXLCCKVTEFVIFOFGETXSZMOGLNNOPLIOEMLPUXZWJHQSJPUKRHMLWJKIMYGGGOCYDLSHCCFZ");
    tmp_msg_0.sys_type = 241U;
    tmp_msg_0.owner = 50963U;
    tmp_msg_0.lat = 0.19066351529225556;
    tmp_msg_0.lon = 0.8818897965598208;
    tmp_msg_0.height = 0.16493494169052747;
    tmp_msg_0.services.assign("TMUYYGSPBYQLBEMWWROBNJZCJTQDQITCOGVKNCKKHNCEPVZAOCYTBQJBOFIRQVWMZAQOGURHTXNRMNIPXNKXVEJRZWFYTGHMDVVWAPYGBLFDOGEPXLEEHJISRZUUIJFHIHAXLNLHFACQAOBFZGBGSMCZYFWUQTPCSXEYWNEKEROPQJI");
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
    msg.setTimeStamp(0.4560624469709371);
    msg.setSource(46932U);
    msg.setSourceEntity(178U);
    msg.setDestination(55367U);
    msg.setDestinationEntity(87U);
    msg.localname.assign("HDMCWSCWHPYZGUEBTVFIZSVNXTABEDPTLVFBYVMXIFJQMYWHZJQEYPRMMBRNTYIQWPOOZZTVTUXBJSNKDDAPKGKGCTVRSPDQSKUFCRUZLZQJFOGWPLBGSNMXCOJRTEHHGOKVJPIAQBGIWMGQRNXQLGNIFKLYWUYNSHO");

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
    msg.setTimeStamp(0.4143317405176621);
    msg.setSource(46682U);
    msg.setSourceEntity(81U);
    msg.setDestination(51323U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("QQPYLTINUGEGSJCWYCVZALTTMDKZAZAAORHBOWRTXRXSZFPVJKGUPLMTYXCWGOEPXTAUUUWMDXKHVKRREMYBHXYFAJNWOGCVTFVUHBSJPZTGSQSNAPIUBATYIJLQNWQNCFQMOHCEVDWPSBNDFYHFEYBJHXTIOPLYRQXEULEARBFZMJVPCSLEOEZRGBPDQCENBMHRWVUNDGFYJZBQFGZI");
    msg.predicate.assign("CRKWXOFUGDTOPGNTWRBCCCDLFGTNXFOKLCKUXQRYSBKWKCPJUTMARTTGCWEUFMHLMAJYHBMREZNZDYDPZQBEFRIDHLPSUAYFVLQGRZNZSOMEIDULPXDMDVBHMXWJJNKSIWAVIFXIBQZHHOT");
    msg.attributes.assign("NXFZPWXLJLLWTPDBRUEXSAOEQWWXZBSBPYC");

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
    msg.setTimeStamp(0.01661350399027628);
    msg.setSource(46590U);
    msg.setSourceEntity(116U);
    msg.setDestination(10594U);
    msg.setDestinationEntity(65U);
    msg.timeline.assign("HLITFWYUJKZCPFOAJQHQPKBDWBONSQHTELNKUFPGEXVRECYOBRWXZWNGCKQMHTWRTWYOJLZSMWENDMFZTVXXNJMPPMATLUBVBIMFODZLOCDUORNIGAHZDAKSPCIXRNHFVTRBNRAMSJPBLCAGUCKJEPYGQVEIWGDCHQXSXQLUYBPQGTLYDAEWMRXYIOASEKGATARKJOIKNIVJMVZUYLYOTFNJQIUXBHYZVZFSDZH");
    msg.predicate.assign("NWBKWFTRBZQAMYBTFVKZHZIDOIENGWCPSLOVJPXJNIPIAFUTU");
    msg.attributes.assign("HFAOVMGLSKCFDSUKEXNDZPXXQYQFSULTATVKBRFZRQIJHGLBLHKFFIITJZYXDPYMTLMCOHXMFHJLDAAPMXBHUZVVNOCYWURPGDHULMKLOKPTTZAWAUODBJHCLYGRRPWVTMNDYDZAWMWIVCABUGJPESCSQGAQNTVEJUJHBNXOK");

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
    msg.setTimeStamp(0.05436197728670722);
    msg.setSource(12253U);
    msg.setSourceEntity(182U);
    msg.setDestination(39212U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("LOJZUTVTKNILZYTQGDWDLMVFSOVIYLJJEHTVGJLCXHROPMZE");
    msg.predicate.assign("QZSMBVNVNPZHMLJGUHHBXHDLXKYYAQKVFQLTKTSDWBPQFEDYKQFSLSCWOLGTPNBTNAKDXRZYUPQOKMJXGKHTCHZVAMZWBJESIFOECFLYOOEQNWCZLDKMYJXIMXCUJTSAMQSIIQZUYCOOVEAGIWVDJSUGNEXWPDJZBBFUC");
    msg.attributes.assign("KCRUOHIZJUVCZTWRMMATSPQBYANCUEUMELXILNIPHTFBJSAEKSGLPACPSVXCVODCPCWTDHMACMZYRXVHGWCJFJOSQMLHERXGHRQZDMJBYDTBUFTGVAUYFQEYPRVSGLRMOSFBPJRMTENEBUHLDGHQPFAJVIPQOBBRWNSMKDWXXLQNTAXZXNFIHKNLBOVZKNSGIKWEDTVHJGUKLSQFVIBTGJCUYWEYOEKNGYFAWOWOZUXZFLJXZ");

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
    msg.setTimeStamp(0.44523423773010073);
    msg.setSource(54745U);
    msg.setSourceEntity(142U);
    msg.setDestination(17408U);
    msg.setDestinationEntity(169U);
    msg.command = 138U;
    msg.goal_id.assign("XGXHQCITQHVZNRKBPMLXBQYYWGTZEKHZTDMEBHAFUCXQWEDWTVYAYFIVLSRSPDSGNWTHUHAJHHINKKPTGAMFJORELPPYQIFUPWLBEESEIXAMODIENKOFTXXDPSQMFPXVMKPLYNWYFYJFEVNTCBDCXTJGZSQWNVRVKSBUBVHSY");
    msg.goal_xml.assign("ASNBVCAZSADVUNMFBBPTRGKQUHEIETWBHNHFDKSYGCLMQGLYNJGRVOLOEAFDMRCOGTZTAVGDVECCLYZQPXODPAZFH");

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
    msg.setTimeStamp(0.9109539932469494);
    msg.setSource(10892U);
    msg.setSourceEntity(8U);
    msg.setDestination(19408U);
    msg.setDestinationEntity(99U);
    msg.command = 116U;
    msg.goal_id.assign("ZEBVHGHWYREIDVOPCRSECCIMAJANMQOPDVSVIRDYWSPVWNAYLATLUZZNFSZTNNXSPPDANRZURVGKSBUILCFYQDWWPLOKPXAESXPOLWXNIJUNYGEMHKKCXYTMJULCLQEMRFSAKDCUMSIKVIDZEFIEXVQJWWOQGQLGTUNBMVCGT");
    msg.goal_xml.assign("OVNPVQQWQURLZBLQPBFNXWDMCWSECHJJVGXCDJLPTJDMRAXKSGTC");

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
    msg.setTimeStamp(0.7515622778684741);
    msg.setSource(35406U);
    msg.setSourceEntity(212U);
    msg.setDestination(57524U);
    msg.setDestinationEntity(52U);
    msg.command = 170U;
    msg.goal_id.assign("FKNVKVAZXSESFIZZWTBGWTCKIEHYGZUXVOYKLBONGWNMBUGOEEBDMGRZTMHXJVQIPQXIDAINTAOOMAXPJTLHJTNZJKYX");
    msg.goal_xml.assign("QKFAMXIJQQULYDCKRBXCGVMGMKYOEHFLAOTGZGPUUUPUKQDYPFLTRHTOANNICMYNUOZDSYJOVDSZTTBAUIPHSSDMKJWFMIZHBTJJFSUWGNBN");

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
    msg.setTimeStamp(0.1281114539179825);
    msg.setSource(32255U);
    msg.setSourceEntity(232U);
    msg.setDestination(52798U);
    msg.setDestinationEntity(97U);
    msg.op = 230U;
    msg.goal_id.assign("FUMLWCYSEPFRSXEQXGWJLWLNMSPQPGHKTGSXMQHUQZMXCSXOMDGLAEFTLIUEUZX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KLFHRNNWHNIEPBWWQMUEWSQSIJMZQCBVWADBGORNIJSDAJLLEZLMQYUEUVDRRSLHQCKKUBTFRYEJOPZVRHWUVDMWGCIDMACEVYFIETNEKAIYBJZTXJUVQXWSLCFZGHMZBPGNRPFRNZASPISYXHVTZFTLLKAIUQAPOATMXQJVPORMZGSYJFGMUSYKBLUOKTCDPPOX");
    tmp_msg_0.predicate.assign("SXUSZIIQMJLCULDHLMT");
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
    msg.setTimeStamp(0.9333158314548087);
    msg.setSource(65126U);
    msg.setSourceEntity(109U);
    msg.setDestination(38787U);
    msg.setDestinationEntity(241U);
    msg.op = 84U;
    msg.goal_id.assign("LCOOJRYZFGMNRHTCJLEDIPXWVULIQJBBWXWIWMFMEESERFXIFXUGKVGCKDEKZQEKTSRZUDGHLHISMGRBTLMUPYIDZXQCOYFHCWKMXLRMNBYOCDLPSBBZKOQNHNXHASGHVSGWVGHSPYYYSVOBAOTYJVCEBIOKXRTRQSAWIGNGWPZJRRAAKTEQSNJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MBEWYLTYNPDUNVZWPYPKDNQMBXHVIKIHOQVXFYUZPSJIQJJUREBGKFNDHJJSVTMVIBBFATXRTQQEQRSDIXDTHLPDPNMCIYUAHWANWUZZQJOHDXGZAVSLKBPLOCTQJIUKRFNRVGGCCOPYWOOHSNASZYVKYTISAUEFKTORRMXELUJMWHYGLJXFDBXDPCRVEAHTJWAWEAVCSFCOZLMQEKLYMCXDOGSSRZWQF");
    tmp_msg_0.predicate.assign("QJJAYKCPLMHKGBHFFLDCIZDXQUAJYRVJTYPEZGPRVYBDNAUNFDUOSFTVFWCIJBZWPUVKCUOOQXOICSHHKFZLZSHUPUEGELVNKYSXZMYMRMMG");
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
    msg.setTimeStamp(0.7628471760512469);
    msg.setSource(65213U);
    msg.setSourceEntity(205U);
    msg.setDestination(33195U);
    msg.setDestinationEntity(214U);
    msg.op = 205U;
    msg.goal_id.assign("JJGXAEMCYANKSYLPEZUHHIOZYFKYABYCJONDEAQN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BSXCRVZCFBQWAPQOORIDWWPHLEYSRQYDOIJZZOEGHSIXVVCOKWMXEMZIPDJFPOUL");
    tmp_msg_0.predicate.assign("WPEDXPEQXDEKGSPNGCHSAFNRILHYRSBJMLKYRCKPQWPZYLIFIQHRYGYJSFBXRIFDEOGZJLYEGJGYCNKZNRMCVASZHBJMZIUWTQYBOVJUPVLOPZTVVGSFNYMAUTRIIRJEKASTXWQLZOBLXWDAJWPHCUECVWQGFIDZMGNXJUOCQLUTPURAMTESDEIUCSVQBFOQMAPZJBVFTFLVDBOXWBYCFSZOKTTOIALXOUMHHNTNDHNUKWXDEAAHQRX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LREKECKPDABPPNXJGIZCHYBXEDRCKGWUPGOHXQEPORWTMYTMNYWFUOIIMTVRLULXPKFDAIKWLJZAHVGHHBEMWWSDTVUEEATJODLBMBXUPEHOIDHAUQRJTFNGIYDTFZSXJFUYBQFMAJICFTMNHJHDFLZVTASASVWXSBLORENSHQVIJFNKQBFGEQPTLKMNQSIGJZCQZSBVQSIGCOJOURSXNRNCCYLKAWRAKQVZYYLGXMKUPVVDG");
    tmp_tmp_msg_0_0.attr_type = 53U;
    tmp_tmp_msg_0_0.min.assign("HMVOFJGEKIONJKDPYIYTDQEYKIPENXIIPFSGJWQNDWEKIRSKPMSJQWBLFDBNLCLVYRMDKSJNBLKWNHXAAHJVWEYYTZOPJBXPIJXUVCMBUIQIEURQRHDOTCTYLQVQAQFDTUBNBAOZHHKMKCBTLZMXYCGQHPLSWRACFAPJPXMACOKCWSZSGXLFRTURBHGMVOUU");
    tmp_tmp_msg_0_0.max.assign("TOPKKKONFMHIGNYMZBSEWCNIGCNTLAVKVJMVESJNADQSXZOUBHNUBCLRSWCLGMWUXFSWCXWGGTULDVPFYIYXHATQTPYKSFMWELFAEDLVDICYYQORUWBNGFDQEOKO");
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
    msg.setTimeStamp(0.24476123086913038);
    msg.setSource(59398U);
    msg.setSourceEntity(198U);
    msg.setDestination(51085U);
    msg.setDestinationEntity(216U);
    msg.name.assign("KCRHMMLDHUQTB");
    msg.attr_type = 169U;
    msg.min.assign("CURNBHNHQRKTMKUHANASGZUHYXOPICOWDHNFOJEWEUHLFVMWYAYJIFLQBFSTFYPTNNSBBUOXILXOGLXCUTVVZBCIOVGRQWFMEKKPGKISMHKYHTACRMDLERKAJUOLRJRGSMADQVHUYTAJGDZXEWS");
    msg.max.assign("VSIQNDWTOAJZLKFUTETVZQRCYBGTEFATRNIIQVZVNPUDSXJW");

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
    msg.setTimeStamp(0.7732173185305607);
    msg.setSource(14523U);
    msg.setSourceEntity(235U);
    msg.setDestination(62809U);
    msg.setDestinationEntity(132U);
    msg.name.assign("QOJONSWCMXGVGGTLKHPALJYMHMMWQQNLUAGDXRIZNLVL");
    msg.attr_type = 28U;
    msg.min.assign("SPTJPUSQLDGNBZKJEXXIIXSTCKORRJDUFHPZRJYQFGTOQOYBPOKYYFPPIPNQUVBRTWBGNINSWHUEZKHWGDOXCVCUURAWGJVJIRDUWLCORODEAVJEBLFYVZQIKHIQIBOHWAIUHMAZEAJQYCCMYBVZGRGKMDCTFTMIVHXQTYBQCOWELALSWLNMLHTFCEF");
    msg.max.assign("ICBHPHESLFXSKYIFKFRANUBRZDUZZTPXHLBNGQFETSBVOWUZHOSWGNWVFNHLKJDWGXEMSARVALQUJFSRLVFNKGSOCDNIHDTXXPCIWETILBTWYRHAEODTDUQPDQAXAL");

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
    msg.setTimeStamp(0.7129394098942544);
    msg.setSource(13821U);
    msg.setSourceEntity(193U);
    msg.setDestination(1039U);
    msg.setDestinationEntity(43U);
    msg.name.assign("IPUUALQCAQRVAXZBDVZCXUVVMOPQVPUCGFUZIXHOVFJUMHOAIFBJPHTEOXEKASZVJHEWTDCWSBLOHSERBNMNDDNJMHEPFTLWALLQIIFWFRYYKNGGSMXYGW");
    msg.attr_type = 44U;
    msg.min.assign("QWMCUYOKBFPAIYIHDRQVCVSHSVOINPATDWFTACIXDRLQYUWTJOZXKDWYBAGZN");
    msg.max.assign("YHLWMMMCPMKSKIWLZZMZSLCRGFIDPELTXBNWPVBFXWRRPSFTZRPEIOEBNAPWKRCCYKHXIAIIEFJXLJYABGDSKGNBVQHOZPFNMFLMYKWAFGKUUIQCHAMVRWHHTOJVQZUS");

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
    msg.setTimeStamp(0.6396815320266839);
    msg.setSource(41252U);
    msg.setSourceEntity(125U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("NOEJTLKLXUZJXPTGAMMSPDXLJEVCGAGNDVUTVXANJNDWFRYVGORDNKAHTZREOCXYDDGYJIEGGHBOVIQDCOVFJWJKPQBYQAUDPNJHLTIZYBRHKVHQCG");
    msg.predicate.assign("OYTAYXLXOEAFCEGFVIMWJTOKHOGUAXHAUWMSUTSHZBWZODELGQTHAEONULPCBVXIUUNNRCI");

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
    msg.setTimeStamp(0.5203424438908983);
    msg.setSource(47989U);
    msg.setSourceEntity(43U);
    msg.setDestination(60627U);
    msg.setDestinationEntity(222U);
    msg.timeline.assign("JCTTACEMPRYOGJCPKOXLQCUSJLQAMTXRZLUGVFLRDYZHBEGMOWPFVDUQZWYOVCYWOZEKERIBQIINMNWZOBJHPHRJAHBQKOJSLQOMVTLBSQSKFGVXXTDJHPGKKULKNWSIYWFZJGMCUCHAPOHLAFWYYMLIBVFDPUVBTDKUDHNACMVSEIAC");
    msg.predicate.assign("DLAEYEGXKTJLFQVZSBJZFQJVXBSTVFTSPTHOFHMWVESXWKJPBSEQGICMECITKWHFJPALHKOPNUDCFKZPISWAGZIYRSWWYYLXAYNTHNOBWDKPIMOCGKDGBOADYOFICMIELZRICGODYNXKXZLIAPRJZXXDRHYBUGJMZAQKWGEYLTHPNBVKCTSVLDZIVUTYMSMQUMUJUNESEGRDOFAXMWRXBJFBNCVQBRURNJMPQULLNOGDHPCQA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XBLACHWZKSIIUSNSYSZVIVYALQEXMIDJYXCGMNXFRXFNKZLFIIUSTRIELTGDCHPXVZMNWJETGSFUNMVBRRKQAAFDNKOEMPPOIJEUKKFPQVSPWVMBDOWTZZCBYGYRQULBQVJZLJERNCHHESJNOQSOXBALURWYTRKAHDOGEPVTWKBCGBYYADYFSHWWTMTV");
    tmp_msg_0.attr_type = 38U;
    tmp_msg_0.min.assign("OUMWQOCUAAMUEQFCYVOHZLNRSTMQDSAXJMKJQJCZEFNYEIKWWQSKTUZDDDODMSVGTTDCCPWVNFZWIEEQZMVXGLVNMALSGYZYHBIUCLLHDQHHDKAUUOJEVFMKFOYLBBNREOOSUIJFITNCBGBIKTIGPZHQGXNVBNZXPARUYJBBRP");
    tmp_msg_0.max.assign("SOHSVXYUOBUHJNLOAGPBPBVKERUXDHPUTUZZRMLMZNHMJZVJFAQVXGTGCULFWSALOJTQNYWSAVFFLMCQXRIWBR");
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
    msg.setTimeStamp(0.8686157707072816);
    msg.setSource(53221U);
    msg.setSourceEntity(170U);
    msg.setDestination(62823U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("SBHWXMHQUFWPYDAHPSAEAFJQCTJVBORSZGIVENGXANQLRZCTTWRJQINEZIYWSGSZZMJQEJFFXAXDTRCP");
    msg.predicate.assign("ATFVHXYQGECWJGDDNWRJHDTAGJRHBFMPJSQSGTTVEBOCYYQEFNAXECPBRYABLPEZIWNVIEN");

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
    msg.setTimeStamp(0.3226758344691425);
    msg.setSource(52469U);
    msg.setSourceEntity(80U);
    msg.setDestination(16953U);
    msg.setDestinationEntity(146U);
    msg.reactor.assign("BFLSAHLSBXBYOZVLQGDQNKATASCLJQCGGUESNOYESHDHLMIXNTIWZJSNPYAGMUVDVL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZUCHSOCILTNVKOKCKSWGYDVBTAJJXTFWHXCJWWKIBFMESWWRPLBGJNHAHRKBKQUZLSMIMMHUYZTOUVJMDZEGHVWJGNNPNOCQ");
    tmp_msg_0.predicate.assign("OCSXQNWXTCAFQUFCXQJLVQYULRZLDNRMTPBMIHBSGSGJDUSDIFUKJUUMLGLLOCSYVPAIWKZKAZUYBZMAZSXNRXLUJQWADWREEERPUCBKXHVHPTQRHZPZWEVBCFPNEID");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CYBBRUNWDDJZVFXAKLEIJLEPVDYQLYFOONHFRNLUCPYNOKUWEJGJUPZICJKMFGUQGMVIFOBYINYJVDWSKIWDORUPRLBTKAADYQMCSRVPFG");
    tmp_tmp_msg_0_0.attr_type = 112U;
    tmp_tmp_msg_0_0.min.assign("YURIJKMEHABSXOPPSNDLASMEPJZTROWETACLTITUKGSYNWABXNZYLOIRQLDOXTQFJNPMVTLXBZWCQEXXC");
    tmp_tmp_msg_0_0.max.assign("ZYOPLWOQYMUABMLFQNBSOJRRNODUTHUKJAIJEQGYACVXLNFMODVPERRXGPLMBMAQZOKZLFFJIVAKRCZWZPLZCULDECFRKBBMLAWYFGNQWHVTELYUGUJIPGEZJXXHBNGNDVDXEPSHYYHWSIFAYQTFSSVKCIXWSITGXEPKWLV");
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
    msg.setTimeStamp(0.08178382300564757);
    msg.setSource(47435U);
    msg.setSourceEntity(120U);
    msg.setDestination(48654U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("IZEMWDBQPVWNZSCTZDLGQGASDVOBPNJEYAUPKUOSYTUXMAOIPSKVEVPLVDTSYSMONKWPKNFZHHHCIUYILWZFHOTLQYVGFFBLGCYJMTBMRUXAWJIZJLDVOQEDQXCUKJSIRCNEJUXNAURAQJ");

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
    msg.setTimeStamp(0.8859800925814085);
    msg.setSource(41155U);
    msg.setSourceEntity(51U);
    msg.setDestination(55213U);
    msg.setDestinationEntity(116U);
    msg.reactor.assign("EBNSXFGKGARZXAFZAZSVYBTKLRKK");

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
    msg.setTimeStamp(0.974103112035007);
    msg.setSource(63822U);
    msg.setSourceEntity(127U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(196U);
    msg.topic.assign("OBLUTBXJGWENFYIYDTALBIQVCKFPDPQTSNUZGIRRPJCFFJYORSKTIJHTCBFNGLAXTYGPSEPBABVXJHSDMPVBAYYIJEBKIIVXZDDMEQZGMMLUHABHEQFMEDHZTNXWQOMDPACNZXHYUUQWCTTLVRXZMQKAKHNWCWJLFZRJEELWEWNDSMYWZZVWCCJIXRGAS");
    msg.data.assign("NMTKMVQGDTDCTVJXGMIOPIZQDEEMOFESUJUVNPPJAPAHRXMIRFSMAMSEPWCDANFBAQEZBQPKTBYRILWJGYWZFQCJKSWSQNCKRHFIFNXIGIXHPGUE");

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
    msg.setTimeStamp(0.34333421380075957);
    msg.setSource(32345U);
    msg.setSourceEntity(131U);
    msg.setDestination(18795U);
    msg.setDestinationEntity(155U);
    msg.topic.assign("ZGCXJBWRXNBDHTCOKDLYBXWPDWRKAVCERXSJXYNVUYEVPSRRCTPCKZSFMUVYQVSWYGUQNEOQAMZUQLGEZGPLVFROBIMDJKHWCYDWSFQMXHYHHKT");
    msg.data.assign("MXPZCXHHWLGFFUTWRRCLUFNZXDRBLFXSNJMQCANJAJFLHBRBGIAGSHQXCFJGNGCSOOJSKLTLVADD");

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
    msg.setTimeStamp(0.7034744829989245);
    msg.setSource(53561U);
    msg.setSourceEntity(65U);
    msg.setDestination(60098U);
    msg.setDestinationEntity(79U);
    msg.topic.assign("QGJFTCKKXWLGNLDCRKSXMMUVVAQJHEKSYZCTGWLD");
    msg.data.assign("CYRTXWGPWNSAXBEUUZVYHJTKDEUOCZVQNLDIFRGPXAMAXBEYLGFUMXXQENESFDXMJADOFDWCQTKKDFGENANSGKHYVQMMQCPYHYBWDQWDTSLTRUEANKYGKBLHHRZMQZKBLPJBEIZVXSONTWBFGNFNWVZQJLACGDAR");

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
    msg.setTimeStamp(0.7955273359440949);
    msg.setSource(5688U);
    msg.setSourceEntity(107U);
    msg.setDestination(1509U);
    msg.setDestinationEntity(126U);
    msg.frameid = 93U;
    const char tmp_msg_0[] = {-78, -1, 121, 40, 14, 48, 20, 49, -36, -42, -109, -93, -50, -88, 35, 117, -85, 103, -45, 49, 9, -97, 12, -52, -84, -77, 23, 76, -22, 17, 40, -41, -118, -37, -107, 101, -17, 99, 56, 90, -31, 0, -26, -103, -117, 85, 65, 94, 80, -76, 28, 126, -66, -6, -110, -67, -124, 62, 28, -70, 24, 10, -27, -20, 66, 94, 83, 66, -83, 126, 51, -86, -50, -99, 78, 1, 106, 47, -56, 81, -24, -31, 64, -32, -111, 113, -26, -13, -56, 104, -123, 68, 87, -128, 6, 37, -55, 63, -121, 42, 29, -4, -73, 10, -7, 18, 60, 2, -113, -100, -53, -68, -120, 4, 84, -44, 98, -45, 72, 108, -84, -118, -69, 117, 50, 107, 14, -69, -39, -91, 88, 32, 94, -63, -47, -25, 29, -81, -5, -116, 3, -48, -108, 38, -124, 17};
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
    msg.setTimeStamp(0.32038024818440214);
    msg.setSource(53148U);
    msg.setSourceEntity(251U);
    msg.setDestination(27996U);
    msg.setDestinationEntity(100U);
    msg.frameid = 118U;
    const char tmp_msg_0[] = {-17, 32, 45, 15, -119, 8, -70, 89, -93, 41, -104, 32, 90, -68, -78, 121, 123, -38, -24, 35, 67, 77, -48, 13, -124, 82, -34, 8, 65, -84, -119, -31, 24, -56, 10, 96, 126, 5, 83, 62, -26, -24, 40, -70, 108, -121, -122, -126, -98, 90, -61, 27, 85, 2, -49, 99, 126, 122, 98, 12, 41, -14, -75, -51, 41, 63, 74, -41, -104, -8, 36, 40, -6, -20, -92, 23, 83, 112, -93, -68, 28, -68, -97, 41, -99, 124, -56, -90, -91, -58, 67, -77, -83, 121, -9, 80, -3, -52, 51, -37, 88, 103, -68, 114, -29, 63, 56, -49, -79, 103, 5, -54, -93, 70, -30, 73, 113, 9, 90, 4, 9, -39, 20, -47, -63, -103, 92, 54, 75, -112, 123, 53, 17, 12, 3, -42, -98, -73, -75, 86, 37, 98, -51, -7, 4, -44, -105, 4, 39, -23, 67, 87, 122, 121, -35, 84, 102, -68, 71, 15, 87, -127, -46, -43, 102, 99, -93, 56, 77, -71, 10, 78, -64, 120};
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
    msg.setTimeStamp(0.28281066969838353);
    msg.setSource(65368U);
    msg.setSourceEntity(200U);
    msg.setDestination(25893U);
    msg.setDestinationEntity(209U);
    msg.frameid = 53U;
    const char tmp_msg_0[] = {-36, 21, -128, 108, -53, -49, 1, 105, 76, -52, -32, 38, 11, -27, -117, -1, -97, -83, 74, 89, -48, -88, 105, 76, 68, -87, 121, 2, -18, -60, 19, 58, -108, -31, 90, 79, 3, -44, -54, 36, -48, 121, 61, -71, 36, 22, 86, 70, -106, 112, 103, -20, 92, 1, 108, -118, -66, 39, 18, -15, 31, -18, 10, -14, -48, -52, -120, -105, -81, -51, 86, -68, -113, -70, -46, -70, 12, 29, -99, -69, 114, 75, -62, 62, 15, -70, -33, -90, 38, 63, -73, -65, -7, -9, -102, 126, -14, 92, 10, -80, -1, 35, 49, 19, 50, 118, 77, -100, 104, -42, 38, -81, -108, -3, 93, -126, -63, 14, 43, 40, -8, 121, 59, -43, 72, 23, 90, -48, 31, 79, -73, 124, 66, -27, -118};
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
    msg.setTimeStamp(0.19577112970850952);
    msg.setSource(49656U);
    msg.setSourceEntity(224U);
    msg.setDestination(28334U);
    msg.setDestinationEntity(91U);
    msg.fps = 221U;
    msg.quality = 72U;
    msg.reps = 7U;
    msg.tsize = 192U;

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
    msg.setTimeStamp(0.5149153144479797);
    msg.setSource(760U);
    msg.setSourceEntity(247U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(213U);
    msg.fps = 83U;
    msg.quality = 131U;
    msg.reps = 76U;
    msg.tsize = 173U;

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
    msg.setTimeStamp(0.1807221191804378);
    msg.setSource(50675U);
    msg.setSourceEntity(70U);
    msg.setDestination(60007U);
    msg.setDestinationEntity(216U);
    msg.fps = 136U;
    msg.quality = 44U;
    msg.reps = 118U;
    msg.tsize = 235U;

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
    msg.setTimeStamp(0.5286426039613866);
    msg.setSource(46181U);
    msg.setSourceEntity(34U);
    msg.setDestination(6539U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.07633043541869955;
    msg.lon = 0.1963972729602581;
    msg.depth = 82U;
    msg.speed = 0.040487652680864405;
    msg.psi = 0.958168347915772;

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
    msg.setTimeStamp(0.9620467726277392);
    msg.setSource(39008U);
    msg.setSourceEntity(218U);
    msg.setDestination(12902U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.042177753410320706;
    msg.lon = 0.4971785481248936;
    msg.depth = 240U;
    msg.speed = 0.13356450091820093;
    msg.psi = 0.5324716513780856;

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
    msg.setTimeStamp(0.16368988247278016);
    msg.setSource(45805U);
    msg.setSourceEntity(1U);
    msg.setDestination(49884U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.6959408555334502;
    msg.lon = 0.7444565308882649;
    msg.depth = 219U;
    msg.speed = 0.0717457427770648;
    msg.psi = 0.3816148128062353;

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
    msg.setTimeStamp(0.30526761770332766);
    msg.setSource(51844U);
    msg.setSourceEntity(226U);
    msg.setDestination(25552U);
    msg.setDestinationEntity(26U);
    msg.label.assign("KGSZXNUDZRJUKLOVMSQGXRCHPZMKQJHHUXCLSWAYXJQEBYXPNUOAFQYQTPFVRHRTQCXSZFMCXR");
    msg.lat = 0.6485272366526834;
    msg.lon = 0.5351511148130087;
    msg.z = 0.9729653683480376;
    msg.z_units = 114U;
    msg.cog = 0.1674357677677537;
    msg.sog = 0.4407317225174956;

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
    msg.setTimeStamp(0.5111777564136416);
    msg.setSource(51790U);
    msg.setSourceEntity(87U);
    msg.setDestination(1858U);
    msg.setDestinationEntity(166U);
    msg.label.assign("JDYPEMZTUIEHFN");
    msg.lat = 0.04753511326206583;
    msg.lon = 0.5443682747421467;
    msg.z = 0.6197927230674204;
    msg.z_units = 44U;
    msg.cog = 0.3217940526158315;
    msg.sog = 0.21889083220925143;

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
    msg.setTimeStamp(0.4523711526226515);
    msg.setSource(64617U);
    msg.setSourceEntity(130U);
    msg.setDestination(1569U);
    msg.setDestinationEntity(152U);
    msg.label.assign("ZRTDZPDIRRKWHSOGUKILUFKOGLISYDYVFSMZNPYKWTBCYFETPQXVVSZQJNEUJCVDXUOOXICFXPCRRXQBLSFYMHNZWTTFICWWQQQZJDCWYSSDWGPMWANABUULIOBQMLKWGHTAIMNRFSHGHIMCBAPDGNCGWFVJATGQJAPSKJEYRFNAJSQNOCTDKDIHUMVMR");
    msg.lat = 0.7480061494702392;
    msg.lon = 0.8755095080964292;
    msg.z = 0.26778666671529894;
    msg.z_units = 83U;
    msg.cog = 0.5656887215836006;
    msg.sog = 0.48454878692329717;

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
    msg.setTimeStamp(0.01356944070603272);
    msg.setSource(62602U);
    msg.setSourceEntity(136U);
    msg.setDestination(38171U);
    msg.setDestinationEntity(153U);
    msg.name.assign("SVBREKGJUOXCZZJERAPNHSPIGZVNFHQTGHGLZWBYKBOHVQUBJEUCMPKIDJWYNLGOTRQFINAXSNYGDNDEXYVBNJ");
    msg.value.assign("KUIMFBBTKZQYUOCIACPJGMWIAMZFRLLAXXXKZHZPSBYIYOSTHDNKZGMOGTWHYSKLHNKBOLGTETXJXVFPFVTCDRFFJQLNNLDSXSZPJDJMJBIOTOCIGNBVNQVQEYBWQDRW");

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
    msg.setTimeStamp(0.6637660418498383);
    msg.setSource(55922U);
    msg.setSourceEntity(254U);
    msg.setDestination(8555U);
    msg.setDestinationEntity(118U);
    msg.name.assign("TGFOVVCPRYRLOJACQPOBARXYBJLNVOVUCTUKJUIOSQTHZTMINPJECXKJQDWHLYLDXXUGPGYMWYHZQXESQWFOFC");
    msg.value.assign("SCPKOQTKWDQSCBIONVIZFFWTZQFCWRN");

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
    msg.setTimeStamp(0.08806425837966059);
    msg.setSource(4530U);
    msg.setSourceEntity(110U);
    msg.setDestination(16981U);
    msg.setDestinationEntity(232U);
    msg.name.assign("GUIVZOLUXHEDUSQCWJBECVJSMLPDPAVABROWPGNAQEZMSGFFPTJBMKFKSAWIIBTPXBNGVHYWCLRRGFRTRCYDXMYWKUVPZCOMXEYMHJNQAAFLQMGOKDWRSMKQEZDRWJLESXIFASFGTEWZZYVNLJNOYDDFAPOPSZJZJYCYBCITZBSNXSUKYNHTURLBLOTPC");
    msg.value.assign("EBCEMWHTYTVBCUZXIPDNMFEXCTQPTGIBVUSUMWCKHJCQLRGAZYLWRHPAJMQXMJPETFBVWCWQICA");

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
    msg.setTimeStamp(0.09605642366780864);
    msg.setSource(60541U);
    msg.setSourceEntity(105U);
    msg.setDestination(30380U);
    msg.setDestinationEntity(209U);
    msg.name.assign("PVLPRRNNFIZJFUQSCMDLFGBAZVEBGZQLPOCUUAISCGZLYBHHJHXJOHFOKZUSKANWGKPTVYEOVTDTOWVLDVADKPFFANLYFLNVIGWOTKHZHSZXWQCURRRVPEOEPCEIGTXBREUXKWBWHTILCBDJSUNBWJGGPSKJXYYTLQZXQRRI");

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
    msg.setTimeStamp(0.5664890024500682);
    msg.setSource(18752U);
    msg.setSourceEntity(253U);
    msg.setDestination(39193U);
    msg.setDestinationEntity(89U);
    msg.name.assign("KLCBQCEALVLRKZPQNUNGXWDDPGSAAIW");

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
    msg.setTimeStamp(0.6285534427454531);
    msg.setSource(45301U);
    msg.setSourceEntity(247U);
    msg.setDestination(38789U);
    msg.setDestinationEntity(168U);
    msg.name.assign("MXTKCWHDQWZXSVKQALAEODXTIOJSNJIVFKBUZDRSFMYGNURVNCREQCCWQUVKZYDZPMIHBXYALIFMWEQAXREMZKZRXMJAIMFGCRQQPFLTLYGAUZVSNCQGOBUOYORRTHTWVOLAKLJHWFGXAVSNUGRSDNLGPYEBWESEVIIDXHZPTLUMTBHDKXPGHPAPQ");

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
    msg.setTimeStamp(0.24487692917361947);
    msg.setSource(23851U);
    msg.setSourceEntity(239U);
    msg.setDestination(1115U);
    msg.setDestinationEntity(6U);
    msg.name.assign("QGSETREFSFTPBPRAGHQRIUURWIJBMLRKXSGGOVCZUYFXCDAMITCKPCEMTHYBDKLHCNIQRXFSKVLBFSVXFCBILDUVXNUJPTDCLAZBJJOMWUPYVHEEWZGZNVSJQVJLKKKMLMJMSAZJIKWMXCAOGMUHRZRBDFYZNNEHGFFABOIMYDOPTHERNXHYUESAYJTSQUCWVOVNYWQAQEGYLPQTJITWPNQ");
    msg.visibility.assign("NTQLBHHZPHUWXUGXMJLAGBMQWLGMIVQSGVWFXFUXVTZXQHEMMNIEZSOOAYYWOLXXYPOHPESDIQRWAHVYQNIBZXTERSKYMCEAJYBARBDQBJMJTNPNKHTOWJAZMFZUCZFBUPTCHVUKTFRJMGREOSRIKGZC");
    msg.scope.assign("TCUKIJEYMHPDHWQOKVOQUJWOVDYRSGUARBJPHLBIKOBSIVTFXLRKPTFAYWIMRBPWHECZJZEEKESTYUBNPXCNFUZNUYCNTEGDMOZCNJAQXGJUJMVXLGOKJRVFGMQLCBHWZPAZMDRAZKJLICZWIFXSAFTILMAVSZBHXIYDNQLANOQKXAHJBPQ");

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
    msg.setTimeStamp(0.3206629137705672);
    msg.setSource(36790U);
    msg.setSourceEntity(83U);
    msg.setDestination(28856U);
    msg.setDestinationEntity(215U);
    msg.name.assign("QXXQTRCZXJURXNAEKBIAWMJCLGCEKXSKKHLHZCOLTHPPUTKRKJOHYLJGLXCFMVKKMVEYMUTFTWVZHQWRZIIWZ");
    msg.visibility.assign("HNJUSVYFKRRIVXPDXRAVXGDZQBFCDSYEMYWCASKVBTCWP");
    msg.scope.assign("SQSBKECVWQMQNHNDI");

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
    msg.setTimeStamp(0.019419125913906377);
    msg.setSource(9684U);
    msg.setSourceEntity(89U);
    msg.setDestination(61864U);
    msg.setDestinationEntity(235U);
    msg.name.assign("BTVCGIYBDWIUCXSSHXIWVNHPZPXELHGTTAHYTVKLQPMRGNBWMOYLETWSHMOG");
    msg.visibility.assign("CXHHEHGBCWJGURZGKXRYJAIPUEDOTFIRQKDQDJNRJJOVFFXAPTQMCNNOFVCDQLTVXBBMUQBEDSGHPYKRBKGRHIINMWPDBYYZGQNCUSCBPJHIFIAVAJLWUBFPUELWMKMJFAXBYWESOUNSDXVSLSEUMCDPRKAOYKGYSWHVNGWLC");
    msg.scope.assign("GYGNNWWQRULPSMREGSVKCECHJDMTVQWCDUKTMYBGQUBOQONUAHSJLBFKLQEZAYVNBILOKESWHXXJOGOANRFJAXVZLVMZTCFFVDESRWBVTKCEPLXCCJYONOZVHPNSZHWKOTXHDYXSFXDEAIQQJQYIDBTYFSPXRGRFTIJSZIZMCWVNGWEMEPDQMOAMHEIFWUFLTDHRLNPLWBKZPZXTTAIS");

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
    msg.setTimeStamp(0.9396275106531006);
    msg.setSource(45449U);
    msg.setSourceEntity(64U);
    msg.setDestination(48857U);
    msg.setDestinationEntity(108U);
    msg.name.assign("GLZVSCWWEXKDWJQUWLQXQQPRDPFDVPJGVOSRCDQIBGOONOBXMCEFZKNPTMMMHLPAQNFXAVRSGWUAEORCKAJKDVTVZEMWIEURZSHGOTFTYQLDBAILUZHUFYHBRY");

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
    msg.setTimeStamp(0.7666694612350161);
    msg.setSource(23987U);
    msg.setSourceEntity(35U);
    msg.setDestination(15454U);
    msg.setDestinationEntity(110U);
    msg.name.assign("SREIZLXFGPHASBHMKFCFSJWJTTXVZXKUFEVHGROKKLQIILTHIRIFPRTUWVMQYMIYPDACEABYPDVCYKYJVAQEDCXRGKTLJNMXCZT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WQBQBGQAZWJCSEFALOXEPDHDEYCAGZUYPOIRCKKFOKKHYVRPYVSMOUQWLULTPGS");
    tmp_msg_0.value.assign("ATGUTNBAJCKDBLGHKIZPYIPHMXTDXMSSROEPMOUKEMQHJBRIDVLIQWZCYMOYQSNGXWVHCSGTVQFFREJBWUGSRSMSDTYVDVK");
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
    msg.setTimeStamp(0.40006772451953043);
    msg.setSource(64836U);
    msg.setSourceEntity(231U);
    msg.setDestination(63272U);
    msg.setDestinationEntity(150U);
    msg.name.assign("CQDLDRURXLNOPBXYMGLVWQAJVEIIMUKVBNEUVYGURENBABMXPE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GOGNGTZNHIMSYCZJZDRONSQVHYFCXXVTKCNRIABKRLXDOLPNQCKGGUFOCKSNTLRQHFFQCWEAXETOENKVDYSUUFMVXLGXKZCZJPADTIWEBEWTBENBWJJKUWMRWYQWADYPPMIJEDOPEGMSAXWDHMVRTYGMXOVIAJUNBRQC");
    tmp_msg_0.value.assign("MCBNWJZFUKQTHWTYPNYGOLYVSQICZXTNOXFEBLMAUUOZIYAHIOBSOWSTPVQDUHHARLZLGCXLBLKTPGVDPKWCKCVYXRGJXDNXESPUJJSPRNEVKGKKAFCRPMSFEFAOWIQUZIQUCBRDEENQLBUIFGJJLEDXAWATMIMGSENJNFOMOTGEFPVRMVVKZSYRBMVBOCHDTGWKIMHJWWXHYLQXQXUHRJPYWBZAHCVDGFQZPORDFTNICJBNEQKLD");
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
    msg.setTimeStamp(0.8191842365267541);
    msg.setSource(52974U);
    msg.setSourceEntity(226U);
    msg.setDestination(7234U);
    msg.setDestinationEntity(175U);
    msg.name.assign("LNTFSTAVVIH");

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
    msg.setTimeStamp(0.33342186972197774);
    msg.setSource(51691U);
    msg.setSourceEntity(207U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(23U);
    msg.name.assign("QPNJUDTLOUOENMZSFPPAZDHEYVDLEOYORUXETRCCLIQIYIRMJSRSLVGVKRFTDHPUNYNQQCABVHOKBZPIAFHRBIHNUNNATA");

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
    msg.setTimeStamp(0.01875603168090889);
    msg.setSource(11426U);
    msg.setSourceEntity(11U);
    msg.setDestination(37287U);
    msg.setDestinationEntity(246U);
    msg.name.assign("HVTAMKAEQSBIEHRCQQ");

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
    msg.setTimeStamp(0.29336384872800403);
    msg.setSource(22051U);
    msg.setSourceEntity(251U);
    msg.setDestination(6989U);
    msg.setDestinationEntity(49U);
    msg.timeout = 3764206506U;

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
    msg.setTimeStamp(0.8081621269857551);
    msg.setSource(35669U);
    msg.setSourceEntity(29U);
    msg.setDestination(9078U);
    msg.setDestinationEntity(31U);
    msg.timeout = 695175568U;

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
    msg.setTimeStamp(0.5534581663907385);
    msg.setSource(41105U);
    msg.setSourceEntity(213U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(163U);
    msg.timeout = 2868253636U;

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
    msg.setTimeStamp(0.36036877889890395);
    msg.setSource(10935U);
    msg.setSourceEntity(254U);
    msg.setDestination(60093U);
    msg.setDestinationEntity(108U);
    msg.sessid = 3725061222U;

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
    msg.setTimeStamp(0.6513003698465376);
    msg.setSource(5481U);
    msg.setSourceEntity(206U);
    msg.setDestination(3843U);
    msg.setDestinationEntity(60U);
    msg.sessid = 1199863999U;

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
    msg.setTimeStamp(0.7090362022821947);
    msg.setSource(45823U);
    msg.setSourceEntity(181U);
    msg.setDestination(35981U);
    msg.setDestinationEntity(245U);
    msg.sessid = 385362262U;

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
    msg.setTimeStamp(0.11522212536503829);
    msg.setSource(17760U);
    msg.setSourceEntity(185U);
    msg.setDestination(30541U);
    msg.setDestinationEntity(72U);
    msg.sessid = 3512295225U;
    msg.messages.assign("VMYNWHPMQORPBIBMBNBIGKUUWXDTJYGAOCMKYUHJNGDQSSMYWJSSDPCQQTTFCOIGNVVNKMFMKLYMLZGCEUDHVRAZZVXRWUARIAEFZMXOABDLOZURKKWTRHUPHZOLFYIOXL");

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
    msg.setTimeStamp(0.5929697380356881);
    msg.setSource(52614U);
    msg.setSourceEntity(98U);
    msg.setDestination(36885U);
    msg.setDestinationEntity(234U);
    msg.sessid = 1486064302U;
    msg.messages.assign("HFCGLBPXYXTDIWJJMHDQKMBZRMIGLEKVYGXCBKEKKXPCHOISMNCCJLYMHGUVRKUNNHGZBZFOCFSPNHKXTJVUTASVRQGVYIWZRXDHEXABANQANSAZFOCLPSRINVYRZEPIUDUZUTJOSYFWFDQMDOWEOTESPFSOJIEPLDUOEAAVUV");

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
    msg.setTimeStamp(0.6097246587762595);
    msg.setSource(20668U);
    msg.setSourceEntity(37U);
    msg.setDestination(6835U);
    msg.setDestinationEntity(142U);
    msg.sessid = 2292557379U;
    msg.messages.assign("TRGJAKYEXRXFPLJQXNRBVDNFGIADGTLOIFCFKUYZIZGZNZPACBEAATRDONHMHDZORSUTCLQCWVAHAPHMKMBPGIERAINWOVPVJQ");

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
    msg.setTimeStamp(0.20878113552780264);
    msg.setSource(39276U);
    msg.setSourceEntity(2U);
    msg.setDestination(61638U);
    msg.setDestinationEntity(125U);
    msg.sessid = 1956577283U;

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
    msg.setTimeStamp(0.795001016184877);
    msg.setSource(968U);
    msg.setSourceEntity(8U);
    msg.setDestination(3847U);
    msg.setDestinationEntity(88U);
    msg.sessid = 1232955485U;

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
    msg.setTimeStamp(0.520399647236479);
    msg.setSource(30169U);
    msg.setSourceEntity(93U);
    msg.setDestination(33839U);
    msg.setDestinationEntity(8U);
    msg.sessid = 1284111244U;

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
    msg.setTimeStamp(0.3124175443121775);
    msg.setSource(25163U);
    msg.setSourceEntity(133U);
    msg.setDestination(22777U);
    msg.setDestinationEntity(188U);
    msg.sessid = 3115535018U;
    msg.status = 134U;

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
    msg.setTimeStamp(0.6857977023844887);
    msg.setSource(58110U);
    msg.setSourceEntity(90U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(10U);
    msg.sessid = 2782575332U;
    msg.status = 98U;

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
    msg.setTimeStamp(0.4805262045360983);
    msg.setSource(13180U);
    msg.setSourceEntity(95U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(237U);
    msg.sessid = 2188043702U;
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
    msg.setTimeStamp(0.2893507672757173);
    msg.setSource(63012U);
    msg.setSourceEntity(149U);
    msg.setDestination(5270U);
    msg.setDestinationEntity(145U);
    msg.name.assign("SXKMNFLOLBROKQWNFRTYRFWJPAJSBDPLPRFCHLNRUMOCHGILAONVRZKDGZBMFFZKTDWYOSTAQWUTXBTFUBKVOATSBSDZRCAQECMKEVPRJDEWRQWAGGFCMYMDEGVYSNXUODZAEFOHGSNDPZYMPHIQBQQEXKIULSJUVHEOJUGLJTIXXXWPTAZIHZVQIGELHGPIVDUFYNTIPLKCMVSNWUZVEJNWBHAIJCEMJSYVUARYCHTMGJK");

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
    msg.setTimeStamp(0.5190260330697043);
    msg.setSource(25663U);
    msg.setSourceEntity(128U);
    msg.setDestination(25296U);
    msg.setDestinationEntity(187U);
    msg.name.assign("GZDQDLAEZPVKRZPPQEKLJVZKMEKRETWFXENSIGANTDFYZVGSYLKWAAHGBKI");

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
    msg.setTimeStamp(0.8837011790778566);
    msg.setSource(45042U);
    msg.setSourceEntity(35U);
    msg.setDestination(36365U);
    msg.setDestinationEntity(109U);
    msg.name.assign("NQGMRCVPICHCKOWTXENVFORZVMIOCPUIVKHOAWKTHPZXRESAKVJLHNGHJBGYWDFVSJVDIQDFCLYFDYFBPLCXIWIUMOWEQRMLBUGAKZBDHANPYYCFJBBPLZZEXDXAPPABVQKROGMSUOUUJCSKTGXTPOTJWIEBJQLNTNDWWTJSYGKXGRXEUMMPLAQTKSNFBLENQZ");

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
    msg.setTimeStamp(0.09253563444516988);
    msg.setSource(22733U);
    msg.setSourceEntity(4U);
    msg.setDestination(34956U);
    msg.setDestinationEntity(142U);
    msg.name.assign("QHOYBXIVIBWCBMRLNZMJONZGZFNJPFSNHOUNWMMGVRTBEEWZWBZTXEPTRKSTLFWJIPDAUDGEQKSRACLGCJHZKSLJPVDOAVWIWCAUXTHNZINHPRGFUEBPQQDFIOUJXJQQJTOADLZFQZXQWLYWDKCARLBKYEUQUNXVYDMLXVDBOTPVTCGIAPMRBKFMYHRKYGYC");

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
    msg.setTimeStamp(0.9722766569837875);
    msg.setSource(7524U);
    msg.setSourceEntity(215U);
    msg.setDestination(48087U);
    msg.setDestinationEntity(32U);
    msg.name.assign("NYRGSSIETZDAUNQDXVIUZNMKRZUHPWROUYCCBUXRKLOGNEJQQVJABWOIEWRCOTEDPHXRSJTLEMVTMIXMGBQNICYFFPYBKSINBLIPDOFZPDXFK");

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
    msg.setTimeStamp(0.846867811938693);
    msg.setSource(58330U);
    msg.setSourceEntity(5U);
    msg.setDestination(49655U);
    msg.setDestinationEntity(179U);
    msg.name.assign("BIGUBDZZADIZRCMFDZPJQOWPOWHGAKWQBFKDQUTHWCZLPCVKWGRCYFXTPYRHEBHWLXXUILENRGFVQVTUEEEGVJYMNNXTHFHMCT");

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
    msg.setTimeStamp(0.08414427157211812);
    msg.setSource(54100U);
    msg.setSourceEntity(222U);
    msg.setDestination(26858U);
    msg.setDestinationEntity(203U);
    msg.type = 18U;
    msg.error.assign("BRZGADWUXIRAMYIIAEQHJHNGOXGKEPFVWDAFWCMABSKMQZSAYIICXOOVXDPZEKCLMLNMQARVEDOUBCEH");

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
    msg.setTimeStamp(0.8563379922102865);
    msg.setSource(53416U);
    msg.setSourceEntity(49U);
    msg.setDestination(59435U);
    msg.setDestinationEntity(92U);
    msg.type = 99U;
    msg.error.assign("DMLNMIXIFZOPAJUYQAHCYCXTHLJBGDPPZFAWWTUIZFKPTCBRZUXGDLENZLMFNCWUDJZTXCLNEJBMSSQYAAZRGVWPHBAEHXOVKEVBIQYEXMTSOITYVRSDYQMOGASDJTSVUOUKLONBHGNGIPBOUSTLRMYCNNVVRKTYQZGEQRPZSFHHKPEIWRCGDCUWBFKBRN");

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
    msg.setTimeStamp(0.30563782476713475);
    msg.setSource(20675U);
    msg.setSourceEntity(4U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(201U);
    msg.type = 164U;
    msg.error.assign("FEWVJEEQTQEQNCCHXXKDUXMYGATJGOZW");

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
    msg.setTimeStamp(0.4714424410147463);
    msg.setSource(40432U);
    msg.setSourceEntity(75U);
    msg.setDestination(22151U);
    msg.setDestinationEntity(63U);
    msg.seq = 57737U;
    msg.sys_dst.assign("ZJFUGHWODLTKNBECEPIVRTYJBNTYMMKCXAQCKKBUSBZSNWXESICJZXAOAVERJNLMVKAOWCDDOFXFDQSOZPDYLZBZFYTPUFNQEYARRFDALRKTBQJWVLPOMIWIYLVJPPEMIMYXSAJKYEGMMQFSJLGEGBRBCSNOGYXGUOPTNOUAGFCVUDHXWEHIINDZWWTISHFWPGDH");
    msg.flags = 220U;
    const char tmp_msg_0[] = {65, -86, -94, 114, -119, 88, -32, -58, -120, -73, -20, 79, -68, -70, 81, -36, -49, 79, 115, -128, 52, -50, -62, 101, 96, 4, -98, -1, -108, -22, -123, 83, -33, -91, 107, -53, -36, 67, -64, -31, 25, 41, 121, 4, 47, 93, -109, -16, 63, 64, -103, 81, -27, 68, -119, 80, 52, 27, -88, 32, -9, 97, -95, 81, -89, 65, 26, 123, -111, -42, 9, -59, 120, -53, -22, -102, -68, -1, -94, 50, -37, 121, 12, 34, -68, 90, -47, -10, 40, -63, -56, -26, -91, 48, -28, 6, -87, -11, 97, -75, -121, -123, 37, -22, -105, -126, 111, -94, 115, -107, 23, -20, -65, 119, -73, -45, -97, 100, 17, -73, 5, -53, -68, 59, -85, -25, 29, 88, 22, 91, -59, -113, 43, 63, 3, 45, -81, 64, 55, -121, -27, -4, -59, 7, -90, 46, -12, -72, -75, 59, 37, -86, -108, 106, -27, 39, -37, -1, 88, 100, 18, 74, -105, -32, 31, -122, 117, -19, -14, 73, 16, 124, -114, -35, -70, 4, -110, -76, -92, -29, -86, -48, 47, -34, 37, 45, 8, -72, -9, -125, 87, 14, -83, -126, -83, -27, -92, -37, -28, -33, -38, 83, 44, -51, -28, -65, 63, 30, 82, -98, -32, -61, -91, 9, 116, 95, -25, 11, -51, -104, -18, 66, -19, -51, 50, -72, -104, -66, -101, 33, -110, 42, -10, 81, 105, 105, 81, 72, 33, 109, 26, -127, 7};
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
    msg.setTimeStamp(0.5722400659321222);
    msg.setSource(7251U);
    msg.setSourceEntity(78U);
    msg.setDestination(44650U);
    msg.setDestinationEntity(227U);
    msg.seq = 28503U;
    msg.sys_dst.assign("EBMEMUPJPCFCBPQHAHTOKREQEQKMNYGAQXSHDYFDFMFAVXIROSPDBXGTYTSU");
    msg.flags = 99U;
    const char tmp_msg_0[] = {28, 10, 86, 111, -127, 98, -44, 91, 109, -97, 105, -21, -7, 115, -29, 66, 83, 95, 92, 87, 48, -44, 78, -69, 43, 49, 119, 3, 109, 87, -34, 77, 16, -52, -107, 43, 42, 98, -4, 26, -36, 44, -49, 118, 32, -71, -104, -85, 72, 12, -101, -95, 125, 43, -59, -63, -60, 52, -42, -55, -103, -127, -92, 103, 34, -54, -125, -45, 101, -15, -34, 22};
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
    msg.setTimeStamp(0.5650114853956695);
    msg.setSource(52256U);
    msg.setSourceEntity(87U);
    msg.setDestination(24282U);
    msg.setDestinationEntity(193U);
    msg.seq = 46859U;
    msg.sys_dst.assign("BPFJTPNISRLJGDLUIJRBSWJRINKCCEOHEWIGSSBOCNXUCAHGWQZCLDOTXWZCVDJXYEBQOFUMIJYAEYWMMHZREIXPHPFDFZPBQFSRTDAOYTSKGKWUTGZKQYK");
    msg.flags = 110U;
    const char tmp_msg_0[] = {-16, -17, -113, 86, 48, -13, 80, 23, 30, -9, -123, -104, -30, -22, -102, 117, -93, 46, -58, 20, -85, -76, 111, 59, -59, -126, 97, -56, -62, -11, 48, -12, 3, -87, -10, 10, 123, 113, 116, -101, -16, 4, 79, -122, -52, 121, 124, 103, -12, -30, 44, 112, 20, 21, 81, 116, 7, -10, -123, 6, 109, 51, -72, -31, -84, 43, -78, -82, 6, -61, 73, -4, 102, -128, 123, 125, -23, -121, 116, -43, 67, 123, 6, -127, -76, 76, -15, -35, -11, -93, 59, 15, 106, -79, 62, 38, 17, 123, -31, 84, -76, -103, 5, -91, -99, 117, 47, 4, 121, -109, -86, -69, -115, 116, -28, 66, 31, -52, 99, -81, -44, -17, 33, -55, -126, -124, -124, 38, 69, -55, -104, -47, -101, -42, -120, 21, -10, -66, -51, 72, 57, 126, 27, 23, 61, -39, -87, 111, -13, -81, -40, -64, -14, -84, 55, 31, 59, 121, 90, 17, 123, -86, 41, -61, 0, 105, -47, -118, -54, -117, -86, 113, 6, 119, -29, 104, 54, -102, 122, -110, 69, -68, 50, -59, 53, -105, 105, -112, 27, 63, 115, 57, -52, -1, -125, -84, 26, -128, 86, 97};
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
    msg.setTimeStamp(0.8220974753360327);
    msg.setSource(2407U);
    msg.setSourceEntity(35U);
    msg.setDestination(16156U);
    msg.setDestinationEntity(4U);
    msg.sys_src.assign("BQTBMRQEUCPKUXZNNHBPLJUTLFZTQXBDTDVJLCKLLWFJPDEACWHXLRSIZSFIDEMJWTYFWHYWOSY");
    msg.sys_dst.assign("OYXLQMEOLUUIYCGRQIMAGLDQCKSGHIUCDEIONZZDNHNKOPRKCTJYBPEZFPXHZYILENZLGMZAQXOFWJFRQPOFUJSWABJGDQHQVPZFMUYBSFQWTZGRHYDFJMSXVBDJXBGHNSXMGAXUAYRLDRONGMUJTVZWWYXIPVUVMMPCKAKEMRBLBEIYWSESTXYIJPCBCTRAXODSDKBTUEAENIDVIWWCHVQKKC");
    msg.flags = 87U;
    const char tmp_msg_0[] = {-10, 50, 63, -61, -1, -85, -95, 121, -73, 109, -123, 70, 15, -125, -68, 46, 56, -104, -81, 71, 3, 60, 6, 39, 96, -21, -101, 8, -106, 26, -8, 52, 46, 108, -49, 36, 86, -53, 109, 18, 116, -33, 17, -66, -23, -36, -67, -110, -71, 25, 41, 124, -26, 22, 17, 97, 48, -128, -58, 93, 115, 86, -17, -34, 43, -103, -120, -11, -65, 42, -119, -70, -92, 55, 33, -79, -92, -101, 10, 117, -72, 117, -118, -44, 3, -49, -50, 84, -58, 69, -66, -47, 43, -93, -124, -71, -10, -36, -104, -25, 79, -11, -93, 4, -126, 24, -114, -111, -46, 45, 60, 84, 114, 77, -86, 87, 108, 9, -107, 102, -113, -127, -119, -47, -93, -43, 27, 33, -125, -27, -100, -57, -16, -99, 36, 114, 17, -4, 62, 24, 1, 68, -77, 45, 25, 39, -34, 43, 108, 64, -97, -110, 101, -82, -125, 66, 44, 92, 64, 107, 119, -81, -61, 86, 119, -80, -128, 119, 64, 64, -69, 94, -44, -22, 105, 65, -90, 59, 75, 101, -19, 12, -59, -67, -41, 8, -67, 67, -26, 44, 9, 108, 55, -91, 101, -43, -100, 32, 14, -80, -123, 95, 94, -55, -127, -120, -70, 92, -100, -56, -68, -31, -18, 93, 79, -69, -111, 15, -90, 49, -11, -17, -18, 59};
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
    msg.setTimeStamp(0.12135437071252175);
    msg.setSource(25831U);
    msg.setSourceEntity(145U);
    msg.setDestination(23734U);
    msg.setDestinationEntity(251U);
    msg.sys_src.assign("UKFIMROJTAWBTNZ");
    msg.sys_dst.assign("IXLEJBTAKDMALYTDUUOPISTMFTMPFCZAOOZWBMNWNZPJRAHFWPXYGLDVQUNKWLMDFKUXETGDAJRORRQFOSIRIKBXADPEVZLGWLCPHBLSKTNPMYBYUNMLAWEKCHCXEHYGCZGCROUVVIJANQVMNCJUEQPVMIVXGHUJWZFQSWJYPYCLUZXHTINAJFTJ");
    msg.flags = 185U;
    const char tmp_msg_0[] = {-86, 107, 88, 1, -36, 76, 98, -29, 56, 31, 80, 62, -48, 74, -109, 44, -64, -121, -10, -77, 28, -64, -92, 38, 55, 4, -29, 121, -118, 45, 58, 77, 46, -72, -12, 15, 112, -54, -69, -113, -50, 64, -46, -2, -32, 31, -16, 77, 13, 94, -100, 125, 85, 117, -32, 67, -116, 42, 43, -78, 16, 67, 38, -55, 67, -29, 34, 58, 7, 4, 92, -74, -53, -108, -44, 90, 61, 21, 107};
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
    msg.setTimeStamp(0.25053848064140194);
    msg.setSource(12387U);
    msg.setSourceEntity(79U);
    msg.setDestination(56983U);
    msg.setDestinationEntity(139U);
    msg.sys_src.assign("NWRPMQQZHWLEIKFVPHJNRQXYHEZTZYZVEGRUBOAQNCSLOVWMVFBEPCLRDYAKLSNJLIAMULXTVKZJMKYPNGDJECIPRXDIPUDIACFBCWEKLFFRYEJXFIZKGHUKRVYGACAWTMHW");
    msg.sys_dst.assign("NJJFNVIDWQQVXYBFFZHJCPQGKWFAZXGIYHDDFRBWQLMNIMPVRZPNECAAHCMBQKOMDWACTTLYXRCUEGZLHBNKAHLDYXSOPIQYYBMYRJSUVLSBEGCSEQRVKVLVGVTOUPMGJIASAUWUINRAWGPKGOWYTBOQWYBCORWHVJULPJOQSXRKXTFHSNPFTTJMZTDJEEXSI");
    msg.flags = 66U;
    const char tmp_msg_0[] = {123, -78, -70, 35, -122, 120, -44, 120, 107, 108, 72, 100, -46, -45, -59, 73, 101, 112, -58, -86, 50, -16, -6, -110, 7, -95, -45, 106, -19, -8, -51, 4, 48, -96, 44, 44, 95, 125, 114, -85, 44, 78, 70, -125, -37, 0, -62, -103, 126, 103, -112, 68, 119, 17, -126, -69, -68, -29, 90, -81, 2, 52, -55, -29, -38, -10, 48, 14, -39, 46, -96, 99, -46, 34, 90, -66, -33, -23, -120, -107, 33, -107, 56, -37, -93, 62, -39, 8, 2, 12, 61, -71, -15, -49, 93, -93, -14, 52, 65, -63, -24, -59, -118, 32, -93, 118, 92, 74, -113, 104, -109, 57, 26, 121, 30, 96, -111, -36, -114, -123, 87, 75, -93, 81, -26, -109, -66, 17, -54, -91, 91, 33, -23, 64, 21, 80, 23, 55, -119, -60, 109, 64, 27, 86, 42, -78, 50, 60, 78, 60, 39, 96, -27, 91, 89, 98, -4, -68, -4, -113, -97, -12, 108, -101, 76, 112, 80, -77, -80, -121, 45, 101, -105, -119, -75, -101, -44, -26, 3, -87, 42, 102, 42, 36, 73, -58, -30, -38, -112, 31, -126, 25, -33, -103, 45, -105, 76, -24, 35, 20, 54, -76, 62, -102, 77, 46, -60, 113};
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
    msg.setTimeStamp(0.7015783390971595);
    msg.setSource(28670U);
    msg.setSourceEntity(160U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(64U);
    msg.seq = 62230U;
    msg.value = 72U;
    msg.error.assign("VNQOSCKTILCEWLYIFXPAASUDKEIQHXCGBQZKFOWWBSLKWNKGNVUHKKNITPGHUOHZRTXSEYZDPTSMYOLSC");

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
    msg.setTimeStamp(0.4531674622763805);
    msg.setSource(18614U);
    msg.setSourceEntity(171U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(189U);
    msg.seq = 64170U;
    msg.value = 3U;
    msg.error.assign("BTJCMASUQOAYMDRZBIDVLXIWDNKZJLHMYESZRMTVFUHNZCPTEPNKVKKJXFPDBCGBDXIZOQYHWWAGBVNPGFOZZCYDTJJRSJSOJRMFFLHNSCMUTFYPUKZLZXVMOAIUYNCAXNCBSXGOOCH");

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
    msg.setTimeStamp(0.9340026664472098);
    msg.setSource(42934U);
    msg.setSourceEntity(165U);
    msg.setDestination(54693U);
    msg.setDestinationEntity(120U);
    msg.seq = 21065U;
    msg.value = 216U;
    msg.error.assign("FYKCKFZDDMGTBLOMIAVFWJRKWBRHUNMNDQNGPTMUSZSLHMORKIBWLPPTNDAWJCOTJBLFSZOADLKXGCTXNSOVPQVECXRZGHHERUTHQVTYZILPUKWRUYCOLQJHNXTZJVZVZDNESXRAAMCIIQJYAWGQCHKPCGANGRHZJXXLESYAFSPOIKYEBWURGIUEFBRXQVQCMNFIVQAWFVDSDPBCXMKGUWBL");

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
    msg.setTimeStamp(0.39442784882694015);
    msg.setSource(13060U);
    msg.setSourceEntity(205U);
    msg.setDestination(39422U);
    msg.setDestinationEntity(112U);
    msg.seq = 65496U;
    msg.sys.assign("IYBIFKKLDIMBFZUQYPECYDKNBVDTYPHISETJTYTWOGEASAKNUPWYNPXRFOSQHXIANAFUCZXJFFNOCGWDPKRVAFLBHVXAZWYNDVEQVECBPYXJBLLUZXGGFOQIRXCMSWEZJCDWSRDUQOAKSSXUDWKGQCVVBRVOEIVQZRKPTZHZVMTFMLOAN");
    msg.value = 0.7737996655160235;

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
    msg.setTimeStamp(0.6306919997946872);
    msg.setSource(6747U);
    msg.setSourceEntity(211U);
    msg.setDestination(23440U);
    msg.setDestinationEntity(37U);
    msg.seq = 20055U;
    msg.sys.assign("XNUPQOZGNUJLBWEQKBEAARCRFDZPXQTHATAZEQKEZRJFXFMQRFRINZYYLSDFVWRGFGDAQOCNMOWDHEITQOIXKKSYQMYBKSHAGBKTWWGFOHLNUNZYVOSJOGWVYPIYMAPSVFEXBZEXJLFBBDXXPVLZEKTCTNJPSGBDJNNDCDUPSOTLIAJLMJXCKTIQUKMYDPCVSHOHMHTUIUPZHRORHWPCWMRFVLGEVUADQCRJHYWNIYVVEGLUSC");
    msg.value = 0.7514203698053061;

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
    msg.setTimeStamp(0.24356697380513348);
    msg.setSource(42777U);
    msg.setSourceEntity(163U);
    msg.setDestination(2042U);
    msg.setDestinationEntity(95U);
    msg.seq = 40830U;
    msg.sys.assign("CRIUZYFCIBAAVUZTMDILDJOFRBOMFKVYKKXXEVHPTDQZKGFDLGPRMHIPWWOMPLBAVHMUQKEWCAKN");
    msg.value = 0.8164238978503839;

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
    msg.setTimeStamp(0.28203856086890156);
    msg.setSource(19909U);
    msg.setSourceEntity(91U);
    msg.setDestination(45470U);
    msg.setDestinationEntity(224U);
    msg.seq = 27982U;
    msg.sys_dst.assign("PBNCHTSPPSCCXJITZSNZOMQJIVHOMKWFZOEDDUYPMOTQRDBKFPGCLIXIGPSSSDFRMOVZGAULGWUWXBIPUPEXRZKKKQLJOUWMHJESOZHMMHAQVORTYFNNWSFUEIADHBGAMYZWDQAVLJWYYKCXUIZREWFKZLDPFQSUGYEXXYVORCLNMBLNTJVZVPCQKSIDGGUBREFDD");
    msg.timeout = 0.183430673207719;

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
    msg.setTimeStamp(0.5339730903637593);
    msg.setSource(40384U);
    msg.setSourceEntity(64U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(162U);
    msg.seq = 47099U;
    msg.sys_dst.assign("OAYXAWGPDYYNVEEEBZGZVXWGJPOCJSDLYHAGTERKDNQPSPJMGKIRZWCJGBMIY");
    msg.timeout = 0.8891957859550074;

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
    msg.setTimeStamp(0.12930150749723446);
    msg.setSource(55329U);
    msg.setSourceEntity(142U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(251U);
    msg.seq = 40259U;
    msg.sys_dst.assign("GVREHMNVRMRCBJKKBQCTHBJMATBVEWVCIAMGTNIKSVKUPTLFLWZWJZGYDUXQWHDKDYSHDKVFLLELHZPWVENAYABOBNCRLFOAEGZCFPTYQALTNVMWZ");
    msg.timeout = 0.4817273404687502;

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
    msg.setTimeStamp(0.07677402136208233);
    msg.setSource(59317U);
    msg.setSourceEntity(197U);
    msg.setDestination(11894U);
    msg.setDestinationEntity(30U);
    msg.action = 51U;
    msg.longain = 0.3999978141366236;
    msg.latgain = 0.024892494434371915;
    msg.bondthick = 4028847803U;
    msg.leadgain = 0.06441540038033966;
    msg.deconflgain = 0.9656107521524473;

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
    msg.setTimeStamp(0.8855776478332053);
    msg.setSource(41210U);
    msg.setSourceEntity(7U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(133U);
    msg.action = 110U;
    msg.longain = 0.7852204544441125;
    msg.latgain = 0.12007173904204538;
    msg.bondthick = 803106150U;
    msg.leadgain = 0.39911548939789443;
    msg.deconflgain = 0.7440429541548776;

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
    msg.setTimeStamp(0.285116446741015);
    msg.setSource(25229U);
    msg.setSourceEntity(29U);
    msg.setDestination(127U);
    msg.setDestinationEntity(11U);
    msg.action = 83U;
    msg.longain = 0.9200338202071713;
    msg.latgain = 0.9998989718819343;
    msg.bondthick = 1793416624U;
    msg.leadgain = 0.021889440983296038;
    msg.deconflgain = 0.859291992114718;

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
    msg.setTimeStamp(0.625823402450674);
    msg.setSource(38727U);
    msg.setSourceEntity(99U);
    msg.setDestination(2104U);
    msg.setDestinationEntity(127U);
    msg.err_mean = 0.6502571961349403;
    msg.dist_min_abs = 0.8761445042896396;
    msg.dist_min_mean = 0.9393815238205575;

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
    msg.setTimeStamp(0.8593688418360451);
    msg.setSource(9971U);
    msg.setSourceEntity(188U);
    msg.setDestination(6167U);
    msg.setDestinationEntity(234U);
    msg.err_mean = 0.391545856537985;
    msg.dist_min_abs = 0.2505753900549197;
    msg.dist_min_mean = 0.07963483750019229;

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
    msg.setTimeStamp(0.4662485117043056);
    msg.setSource(21649U);
    msg.setSourceEntity(164U);
    msg.setDestination(54221U);
    msg.setDestinationEntity(39U);
    msg.err_mean = 0.5886884217587326;
    msg.dist_min_abs = 0.35774365244535467;
    msg.dist_min_mean = 0.26009531523916984;

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
    msg.setTimeStamp(0.417365331118457);
    msg.setSource(26017U);
    msg.setSourceEntity(8U);
    msg.setDestination(57245U);
    msg.setDestinationEntity(57U);
    msg.action = 71U;
    msg.lon_gain = 0.6264048284263514;
    msg.lat_gain = 0.6093540919987351;
    msg.bond_thick = 0.7014909307472573;
    msg.lead_gain = 0.8597209743546057;
    msg.deconfl_gain = 0.664572791835408;
    msg.accel_switch_gain = 0.15766875904667588;
    msg.safe_dist = 0.6827150897204326;
    msg.deconflict_offset = 0.6570554604521639;
    msg.accel_safe_margin = 0.6185845056809581;
    msg.accel_lim_x = 0.11876370218559618;

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
    msg.setTimeStamp(0.4063763867904804);
    msg.setSource(60841U);
    msg.setSourceEntity(120U);
    msg.setDestination(7247U);
    msg.setDestinationEntity(110U);
    msg.action = 167U;
    msg.lon_gain = 0.14162076935263823;
    msg.lat_gain = 0.07419448450701338;
    msg.bond_thick = 0.32742112130095213;
    msg.lead_gain = 0.2612439046501619;
    msg.deconfl_gain = 0.38591946992297277;
    msg.accel_switch_gain = 0.33756804437659094;
    msg.safe_dist = 0.3546498639654383;
    msg.deconflict_offset = 0.03705094018466115;
    msg.accel_safe_margin = 0.6531752059201379;
    msg.accel_lim_x = 0.740088649853687;

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
    msg.setTimeStamp(0.9279935409305538);
    msg.setSource(3449U);
    msg.setSourceEntity(230U);
    msg.setDestination(26817U);
    msg.setDestinationEntity(119U);
    msg.action = 223U;
    msg.lon_gain = 0.5760879353060021;
    msg.lat_gain = 0.7220960278737074;
    msg.bond_thick = 0.947301476290818;
    msg.lead_gain = 0.17713862381356282;
    msg.deconfl_gain = 0.16294480213858364;
    msg.accel_switch_gain = 0.7293222355566316;
    msg.safe_dist = 0.009420460446247447;
    msg.deconflict_offset = 0.4320809987937866;
    msg.accel_safe_margin = 0.39414608445447197;
    msg.accel_lim_x = 0.32916471651944723;

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
    msg.setTimeStamp(0.8574551675956129);
    msg.setSource(60706U);
    msg.setSourceEntity(94U);
    msg.setDestination(26335U);
    msg.setDestinationEntity(254U);
    msg.type = 110U;
    msg.op = 233U;
    msg.err_mean = 0.8864764096574465;
    msg.dist_min_abs = 0.8313797450737344;
    msg.dist_min_mean = 0.5960583970675538;
    msg.roll_rate_mean = 0.7527841221855086;
    msg.time = 0.810823184911642;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 26U;
    tmp_msg_0.lon_gain = 0.6112611644558192;
    tmp_msg_0.lat_gain = 0.8536918622846311;
    tmp_msg_0.bond_thick = 0.49624515213393106;
    tmp_msg_0.lead_gain = 0.1377799500136596;
    tmp_msg_0.deconfl_gain = 0.8027215847658816;
    tmp_msg_0.accel_switch_gain = 0.9467897357037965;
    tmp_msg_0.safe_dist = 0.5412101935834721;
    tmp_msg_0.deconflict_offset = 0.2040002273728162;
    tmp_msg_0.accel_safe_margin = 0.6109066264390692;
    tmp_msg_0.accel_lim_x = 0.5902189378645889;
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
    msg.setTimeStamp(0.016290206019558884);
    msg.setSource(54039U);
    msg.setSourceEntity(186U);
    msg.setDestination(10787U);
    msg.setDestinationEntity(173U);
    msg.type = 101U;
    msg.op = 104U;
    msg.err_mean = 0.9938752517801173;
    msg.dist_min_abs = 0.4003451811023213;
    msg.dist_min_mean = 0.6561873247093876;
    msg.roll_rate_mean = 0.13777377939791557;
    msg.time = 0.6902703348971807;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 57U;
    tmp_msg_0.lon_gain = 0.8881303709699923;
    tmp_msg_0.lat_gain = 0.9359965025894873;
    tmp_msg_0.bond_thick = 0.19631841406672945;
    tmp_msg_0.lead_gain = 0.6061543920040506;
    tmp_msg_0.deconfl_gain = 0.5337690072190235;
    tmp_msg_0.accel_switch_gain = 0.6315075116464265;
    tmp_msg_0.safe_dist = 0.952713981600736;
    tmp_msg_0.deconflict_offset = 0.5919567431517542;
    tmp_msg_0.accel_safe_margin = 0.4370938728165956;
    tmp_msg_0.accel_lim_x = 0.04998661246824887;
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
    msg.setTimeStamp(0.07678569985200545);
    msg.setSource(23592U);
    msg.setSourceEntity(84U);
    msg.setDestination(62569U);
    msg.setDestinationEntity(21U);
    msg.type = 124U;
    msg.op = 96U;
    msg.err_mean = 0.4775369606668566;
    msg.dist_min_abs = 0.3459751469438388;
    msg.dist_min_mean = 0.34809503229993877;
    msg.roll_rate_mean = 0.9113515313842743;
    msg.time = 0.14290602701557586;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 65U;
    tmp_msg_0.lon_gain = 0.45294552485994155;
    tmp_msg_0.lat_gain = 0.6278824685783164;
    tmp_msg_0.bond_thick = 0.6585652597600753;
    tmp_msg_0.lead_gain = 0.46925784058403996;
    tmp_msg_0.deconfl_gain = 0.32980371964919775;
    tmp_msg_0.accel_switch_gain = 0.8563935011464794;
    tmp_msg_0.safe_dist = 0.860791219773107;
    tmp_msg_0.deconflict_offset = 0.5089844884902204;
    tmp_msg_0.accel_safe_margin = 0.7613704571064741;
    tmp_msg_0.accel_lim_x = 0.6438362101156836;
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
    msg.setTimeStamp(0.9874791608473403);
    msg.setSource(63247U);
    msg.setSourceEntity(154U);
    msg.setDestination(61242U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.8973650209955278;
    msg.lon = 0.33469489927477025;
    msg.eta = 1798345322U;
    msg.duration = 14920U;

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
    msg.setTimeStamp(0.5493417594709913);
    msg.setSource(19495U);
    msg.setSourceEntity(76U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.27501477096904814;
    msg.lon = 0.5561719797542855;
    msg.eta = 718321509U;
    msg.duration = 19209U;

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
    msg.setTimeStamp(0.27874165044095134);
    msg.setSource(50304U);
    msg.setSourceEntity(0U);
    msg.setDestination(63224U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.5025347328922243;
    msg.lon = 0.06187098992438911;
    msg.eta = 1086021660U;
    msg.duration = 31423U;

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
    msg.setTimeStamp(0.18135328270004447);
    msg.setSource(60065U);
    msg.setSourceEntity(55U);
    msg.setDestination(43201U);
    msg.setDestinationEntity(30U);
    msg.plan_id = 53728U;

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
    msg.setTimeStamp(0.23984900666038123);
    msg.setSource(4474U);
    msg.setSourceEntity(33U);
    msg.setDestination(29974U);
    msg.setDestinationEntity(70U);
    msg.plan_id = 10036U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4863092303030758;
    tmp_msg_0.lon = 0.8299219370878954;
    tmp_msg_0.eta = 1561345974U;
    tmp_msg_0.duration = 29916U;
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
    msg.setTimeStamp(0.9464161778139937);
    msg.setSource(53446U);
    msg.setSourceEntity(163U);
    msg.setDestination(64740U);
    msg.setDestinationEntity(244U);
    msg.plan_id = 63718U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.02376260826773713;
    tmp_msg_0.lon = 0.9835847657269228;
    tmp_msg_0.eta = 3521252407U;
    tmp_msg_0.duration = 40853U;
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
    msg.setTimeStamp(0.8644475409420425);
    msg.setSource(26377U);
    msg.setSourceEntity(220U);
    msg.setDestination(4002U);
    msg.setDestinationEntity(93U);
    msg.type = 124U;
    msg.command = 200U;
    msg.settings.assign("MHTTMPOYREVUFXGIDMVGJLBKYESHRPAZNYQWJMUGAMVYQKFGGWZUDSOASNLFBEXOHRITCACHSVGUTAE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27304U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UOPPXIGQOGNJVLWIIYDQKBEDEXGIFARCTYJLTHXWUGCCLRXUDYNNRRDJGYMVXMMGMZMVZZVHYMAARXPVWYVAEBCQXPNDSCFDLHZKSFBPAHUHGINEYFBZBFISUNAFPTZBTDLWTKWJESASFOOTLDSTBVOJKQZGWKJKVUIQSLMZYZVAVRWSQXOJEWUHSNUNJCQIFNQWHBFYIEOPOTOYKXEQQICXRCEUJMDBSLKJFELDRCHHTKOPWRNAPBKM");

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
    msg.setTimeStamp(0.26499966081825677);
    msg.setSource(9242U);
    msg.setSourceEntity(251U);
    msg.setDestination(16545U);
    msg.setDestinationEntity(96U);
    msg.type = 70U;
    msg.command = 61U;
    msg.settings.assign("YOWSHKFJYHUXUMARGEXMBMGUQSQSLRRUTELIRSNGTVEWLPRRDXNBJUCVWTNCKOHSZZKMWRXGXNXWIPIJOPDVJOOPLCIPYQLVLDAXPMSMLDSCJPRWDHOACKTAEYYZLDQBKT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 6221U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6097041805950564;
    tmp_tmp_msg_0_0.lon = 0.46931695558446196;
    tmp_tmp_msg_0_0.eta = 3245113961U;
    tmp_tmp_msg_0_0.duration = 33121U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BNEBKKPUZENJMYJHKYHHERRHDICLAPDSFVYPXOUKIJGGXQRLCDKGWFZLZIBKBPSQLAZDVURXRLYUPIXQXXYWIMMUNXGXYESONZBKFMNLBTYUGRLAVZBRWVOYOGQIQAZYEIHSCUWFOFXRVNOSIGOFTPDRQIDFCL");

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
    msg.setTimeStamp(0.0780835959883327);
    msg.setSource(24061U);
    msg.setSourceEntity(15U);
    msg.setDestination(43954U);
    msg.setDestinationEntity(18U);
    msg.type = 164U;
    msg.command = 62U;
    msg.settings.assign("XMMGEMHTNZZYLNUROGDMQUKBKH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10227U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SZJXLLHWGPTUKXGJSMIJFVFLTNFZHMVBQDZNFYPSKXMOLQISADPQJVDVTYGYROYBOZLDQMNFNNGNAOBJOSBEFMYPYSFEUPRCXPQCSMCQBOZLXPAETILNDZTDTVHOUKUIXHWQHGDAMUGFZATKJIZWQTUUCLHORRDOGEPKBMUWBNXJWIFVCYWRIBJGZCLREXVUNMFHRQWHYEEEWVODHCHKKAJTBTSUD");

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
    msg.setTimeStamp(0.8039273228764876);
    msg.setSource(5751U);
    msg.setSourceEntity(86U);
    msg.setDestination(15646U);
    msg.setDestinationEntity(219U);
    msg.state = 162U;
    msg.plan_id = 9129U;
    msg.wpt_id = 188U;
    msg.settings_chk = 14864U;

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
    msg.setTimeStamp(0.15219260277943936);
    msg.setSource(49423U);
    msg.setSourceEntity(222U);
    msg.setDestination(23877U);
    msg.setDestinationEntity(57U);
    msg.state = 2U;
    msg.plan_id = 13576U;
    msg.wpt_id = 98U;
    msg.settings_chk = 16169U;

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
    msg.setTimeStamp(0.21998204582066105);
    msg.setSource(58617U);
    msg.setSourceEntity(71U);
    msg.setDestination(32436U);
    msg.setDestinationEntity(46U);
    msg.state = 50U;
    msg.plan_id = 17110U;
    msg.wpt_id = 236U;
    msg.settings_chk = 7478U;

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
    msg.setTimeStamp(0.3914302853140963);
    msg.setSource(58328U);
    msg.setSourceEntity(30U);
    msg.setDestination(58921U);
    msg.setDestinationEntity(175U);
    msg.uid = 91U;
    msg.frag_number = 141U;
    msg.num_frags = 188U;
    const char tmp_msg_0[] = {15, 17, -66, -101, 85, 68, -3, 27, -70, -77, -114, 105, 36, -19, 2, -79, -125, -19, 115, -88, 76, 80, -63, -60, -70, 98, 38, -85, 72, 100, 18, 57, 11, -10, -122, 44, -48, 116, -18, 123, 85, -29, -118, 102, -9, -11, 115, -58, -30, -9, 124, 20, -64, -40, -102, -44, -26, -91, -68, -31, 55, -87, 126, 25, 76, -29, -33, 105, 88, -59, 14, 89, -7, -17, 67, -62, -20, -59, -87, -5, 84, -59, 47, -63, 3, 51, -74, 14, -113, -80, -123, -51, -32, -109, 25, 97, -71, -69, -5, -51, 74, -40, -113, 58, 71, 23, 82, -55, 58, 56, 11, -72, -112, -25, -48, -22, 37, -72, 41, -28, 24, -8, 77, -114, 100, 87, 67, 50, 56, -52, 56, -30, 79, 78, 9, -76, -98, 91, 118, 118, -103, -109, -114, 41, 29, -3, 67, -33, 78, 100, 10, 10, 32, -3, -83, -116, 1, -57, 1, 0, 53, -86, -25, 85, -38, -90, 93, -99, 96, -64, -94, 41, 75, 29, -113, -97, 49, 82, 53, -46, -55, 115, -10, 65, 40, -48, 51, -81, -74, -86, -113, -34, -63};
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
    msg.setTimeStamp(0.24119798832704797);
    msg.setSource(36715U);
    msg.setSourceEntity(92U);
    msg.setDestination(48041U);
    msg.setDestinationEntity(63U);
    msg.uid = 95U;
    msg.frag_number = 109U;
    msg.num_frags = 78U;
    const char tmp_msg_0[] = {80, -16, 108, -88, 70, -27, -10, 98, 15, 122, 45, 112, -112, 55, 103, -28, -51, 22, -91, 123, -88, -30, -83, 46, -127, 48, 71, 7, 105, -81};
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
    msg.setTimeStamp(0.025256780401690215);
    msg.setSource(38026U);
    msg.setSourceEntity(149U);
    msg.setDestination(1079U);
    msg.setDestinationEntity(191U);
    msg.uid = 199U;
    msg.frag_number = 41U;
    msg.num_frags = 145U;
    const char tmp_msg_0[] = {-45, 89, -70, 102, -94, -117, 79, -114, 122, -14, -102, -33, -119, -106, 91, 11, -41, 106, -21, 9, -44, 31, -71, 120, 27, -94, 62, 36, 89, -111, -74, -81, -74, 7, -99, -100, 120, -2, -31, 46, -10, 19, -89, -103, -113, -9, 66, -11, 7, -100, 46, -127, 42, 11, 29, 64, 97, -126, -114, -44, -4, -20, 31, 44, 0, -107, 98, 31, -40, 124, -77, -98, -2, -92, 2, 54, -10, -112, 36, 63, -41, 16, 89, 44, 9, 113, -48, 18, 106, -62, 46, -99, 37, -118, -19, -127, -5, -18, 2, -62, 39, -21, 2, 9, 40};
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
    msg.setTimeStamp(0.2827066405027663);
    msg.setSource(22766U);
    msg.setSourceEntity(142U);
    msg.setDestination(39638U);
    msg.setDestinationEntity(245U);
    msg.content_type.assign("QHEAMQYZYSYZERHLXSOGEFDIONCJKUVYTMQJXRKRLIGQVZTWRFOEQTPKJC");
    const char tmp_msg_0[] = {-101, -5, 10, -97, 66, 38, -56, -108, 77, 16, 70, -45, 123, 70, 26, -100, -119, -12, 95, -13, 79, -89, 94, 78, -31, -23, 98, -61, 100, 10, 54, -102, -91, -92, 110, -48, 9, -51, -73, -74, -76, -80, -105, 55, -71, -37, -22, -122, 28, -15, -98, -48, -17, -68, 79, 32, -110, -74, -26, -34, -58, -38, -119, -32, 67, 14, -126, 36, -35, -119, -103, 92, 96, 56, -52, 0, -53, -53, 36, -15, 73, -84, -3, -42, 14, -13, -77, -96, -78, 90, 78, 79, -37, -61, 107, -47, 27, 63, -87, 39, 26, 123, -124, -105, -94, -15, -108, -19, 98, -56, -65, 39, -35, -58, -12};
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
    msg.setTimeStamp(0.35714462222007126);
    msg.setSource(28727U);
    msg.setSourceEntity(56U);
    msg.setDestination(48310U);
    msg.setDestinationEntity(153U);
    msg.content_type.assign("PNFAYMXIRWOQSCCWWTESRUTTRVBWPLSSJRCLALTUGUKKFQLRIOZGMZQFKREKILGHWIBEABIBAMRCIFDGTYMMUXUJPONQVBREVDDEEVWAHPQFDMZODGSHNBVOZFQTMV");
    const char tmp_msg_0[] = {101, -73, -48, -32, -88, -2, -121, 51, -128, 61, -67, -34, -50, 75, -33, 18, 39, 60, 26, -63, -4, 114, 122, -80, 80, -92, 68, -124, 12, 74, 5, 114, -118, -99, 37, -32, 77, -97, -128, -117, 32, -10, -36, 76, 107, 85, 35, -84, -55, 25, -17, -31, -32, -73, 13, 119, 126, -90, 53, 54, -17, 0, -66, -13, 56, -77, 97, 97, 11, -44, 51, -93, -127, 76, -106, 111, -92, 36, -96, 86, 99, 24, 94, 43, -71, -22, -103, -114, 92, 91, 34, -42, -101, -45, -27, -90, 74, 96, 103, 119, 104, 22, 94, -18, -41, 99, 75, 119, 35, -2, 101, -71, -92, 3, -56, 91, -1, -32, 42, 51, 88, -126, 108, 107, 26, -47, 104, -46, -96, 97, 60, 99, -104, -93, -118, 17, 18, 120, -107, -1, 104, -12, 69, -114, 93, 106, 56, 32, -69, -38, 11, 31, 75, 124, 115, 54, -43, 63, 119, 110, 25, -48, -68, 67, -121, 53, -94, -79, 64, -33, -105, -123, -94, -42, -38, 96, -85, 21, 87, -98, -85, -84, -87, -28, 106, 17, -34, -86, -65, -71, 101, -86, -16, 114, -81, 25};
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
    msg.setTimeStamp(0.8969366965779155);
    msg.setSource(2269U);
    msg.setSourceEntity(37U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("TOXTFNELBWDYNAUHGOIWJXVBKQYECBPACV");
    const char tmp_msg_0[] = {96, 43, 110, -119, 112, 54, 32, 108, -36, -98, -69, -127, -40, 5, 112, 38, -110, 125, -78, -13, -40, -18, -29, -101, -123, -36, -109, 21, -90, -5, 108, -38, -57, 14, -25, 92, 123, -113, 42, -65, -108, 107, 110, -126, -72, 80, -40, 96, 98, -92};
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
    msg.setTimeStamp(0.9008340847879597);
    msg.setSource(28922U);
    msg.setSourceEntity(99U);
    msg.setDestination(11541U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.36146622616233137);
    msg.setSource(41184U);
    msg.setSourceEntity(29U);
    msg.setDestination(23246U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.32799558922820593);
    msg.setSource(58546U);
    msg.setSourceEntity(191U);
    msg.setDestination(38303U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.9882071883586437);
    msg.setSource(37720U);
    msg.setSourceEntity(234U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(177U);
    msg.target = 50275U;
    msg.bearing = 0.006582939742624139;
    msg.elevation = 0.5586141864949088;

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
    msg.setTimeStamp(0.0868409786149208);
    msg.setSource(16118U);
    msg.setSourceEntity(161U);
    msg.setDestination(16330U);
    msg.setDestinationEntity(220U);
    msg.target = 48322U;
    msg.bearing = 0.9112935852995706;
    msg.elevation = 0.7539814739450442;

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
    msg.setTimeStamp(0.12037472305533592);
    msg.setSource(22369U);
    msg.setSourceEntity(18U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(222U);
    msg.target = 59663U;
    msg.bearing = 0.6601483741187919;
    msg.elevation = 0.15971312586932962;

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
    msg.setTimeStamp(0.016834908203059107);
    msg.setSource(2696U);
    msg.setSourceEntity(203U);
    msg.setDestination(19047U);
    msg.setDestinationEntity(15U);
    msg.target = 24712U;
    msg.x = 0.38849291656788865;
    msg.y = 0.13696950802108587;
    msg.z = 0.0014942393121694098;

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
    msg.setTimeStamp(0.8049899572945179);
    msg.setSource(45625U);
    msg.setSourceEntity(101U);
    msg.setDestination(38377U);
    msg.setDestinationEntity(84U);
    msg.target = 21244U;
    msg.x = 0.8012948408972227;
    msg.y = 0.9721338547566459;
    msg.z = 0.26314759836632995;

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
    msg.setTimeStamp(0.32727302182494356);
    msg.setSource(36959U);
    msg.setSourceEntity(173U);
    msg.setDestination(36254U);
    msg.setDestinationEntity(165U);
    msg.target = 21787U;
    msg.x = 0.9760348929399366;
    msg.y = 0.1423502383630909;
    msg.z = 0.30003238391969056;

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
    msg.setTimeStamp(0.3486736579625441);
    msg.setSource(62011U);
    msg.setSourceEntity(157U);
    msg.setDestination(47403U);
    msg.setDestinationEntity(132U);
    msg.target = 19952U;
    msg.lat = 0.7376748473290811;
    msg.lon = 0.6798978060916888;
    msg.z_units = 49U;
    msg.z = 0.7590017868607101;

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
    msg.setTimeStamp(0.20128443987185696);
    msg.setSource(30437U);
    msg.setSourceEntity(185U);
    msg.setDestination(37333U);
    msg.setDestinationEntity(182U);
    msg.target = 6827U;
    msg.lat = 0.7113555951976556;
    msg.lon = 0.9126111966010324;
    msg.z_units = 121U;
    msg.z = 0.09483167098321565;

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
    msg.setTimeStamp(0.2118472044055657);
    msg.setSource(49851U);
    msg.setSourceEntity(216U);
    msg.setDestination(19733U);
    msg.setDestinationEntity(24U);
    msg.target = 27163U;
    msg.lat = 0.47715406430412854;
    msg.lon = 0.6462662987387531;
    msg.z_units = 43U;
    msg.z = 0.946861716514987;

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
    msg.setTimeStamp(0.12468573598236432);
    msg.setSource(21273U);
    msg.setSourceEntity(5U);
    msg.setDestination(62849U);
    msg.setDestinationEntity(165U);
    msg.locale.assign("LDNMACKXFMIYRJUMFDZFTZNTQPXEMMFFNBCITKCTTNTZSVQSDAGCBVIWMSGAPKXDXVWHWORHQEUFDPJRPIJHL");
    const char tmp_msg_0[] = {15, 101, 62, 97, 5, -124, 37, 15, 7, -4, 121, 121, 66, -26, 121, -35, -23, -105, -47, -38, 12, -85, -82, 109, 7, -34, 60, 61, -10, 82, -14, -87, -66, 65, 60, -25, 71, 67, 60, -15};
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
    msg.setTimeStamp(0.9640366243556122);
    msg.setSource(25587U);
    msg.setSourceEntity(134U);
    msg.setDestination(63280U);
    msg.setDestinationEntity(127U);
    msg.locale.assign("KYRPQLPBYYGSJGGFJECBJAJDIHSRUFVYEXMPZPOOINDMVCVNOQKKMTUXVRTTVVNX");
    const char tmp_msg_0[] = {2, -32, 98, 21, 122, -45, 115, 111, 88, -33, 16, -118, -14, 88, -41, -76, -18, 93, -20, -16, -105, -25, -17, -49, 34, -45, -18, -26, 77, 60, 63, -66, -4, -118, -99, -77, 4, -64, -60, -46, 123, -45, 19, -17, -117, 65, -81, -104, 110, -38, 33, -110, 112, 37, 81, 39, -82, 34, -28, -71, -103, 61, 41, 48, 21, -54, 14, 53, -24, -119, -69, 19, -101, 47, -40, -64, 68, -42, 53, 29, -73, 6, 14, 51, -5, -123, 98, -9, -88, -59, 6, -15, -6, 69, 35, -7, 50, -80, 96, -106, -34, 103, -103, -106, 93, 94, -72, -93, -12, -103, -64};
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
    msg.setTimeStamp(0.8734477854965698);
    msg.setSource(11690U);
    msg.setSourceEntity(80U);
    msg.setDestination(50814U);
    msg.setDestinationEntity(152U);
    msg.locale.assign("THKYPJGVLCIONEXGVKUSWISOMTKCWLNUEBHRYFEZWYAWAUVCIKJZIBDJYLLLSNEPUZCAVJPHRK");
    const char tmp_msg_0[] = {70, -69, -89, 109, 53, 63, 80, 50, 3, 77, 41, 61, 92, 42, -111, -16, -107, 56, -102, -106, 12, -18, -15, 42, 112, 53, 112, 93, 67, 116, 56, 65, -42, 12, 123, 62, 32, 84, 97, 65, 55, -104, 98, 87, -108, -58, 40, 87, -10, -74, 50, 95, 72, -65, 4, 65, -40, 94, 43, 12, -66, -103, -34, 7, -85, 99, 84, -4, 106, 10, 49, -82, -33, -90, -118, -111, 33, 31, 119, -36, 56, -49, -38, -85, -110, -97, 89, 119, 58, -23, -87, 78, 103, 102, 6, -105, -18, -16, 27, -128, 54, -89, -61, 1, -90, 125, -51, -38, 108, 50, -82, 114, 4, 86, 56, 102, 33, -92, 77, 61, -65, -67, -61, -50, 40, 113, 71, -49, 118, 90, 114, 112, 69, 47, -125, -34, -115, -87, -111, -20, 64, 40, 43, -109, 48, 47, -98, 43, -66, -13, 80, -63, 78, 10, -33, 19, 118, 52, -96, 88, 66, 94, -50, -56, -110, 61, 64, -101, -21, 126, -48, 20, 105, -107, -62, -68, 54, 124, 95, 62, -80, 98, -6, -10, -23, -75, -15, 82, -63, -40, -29, -11, -71, -79, -1, 5, 106};
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
    msg.setTimeStamp(0.12734255659509752);
    msg.setSource(21751U);
    msg.setSourceEntity(77U);
    msg.setDestination(47216U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.5326569255919054);
    msg.setSource(29310U);
    msg.setSourceEntity(224U);
    msg.setDestination(41126U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.036434854409059136);
    msg.setSource(60420U);
    msg.setSourceEntity(129U);
    msg.setDestination(51731U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.006188949954496703);
    msg.setSource(41339U);
    msg.setSourceEntity(248U);
    msg.setDestination(57549U);
    msg.setDestinationEntity(80U);
    msg.camid = 226U;
    msg.x = 13219U;
    msg.y = 39011U;

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
    msg.setTimeStamp(0.8048299320606241);
    msg.setSource(62483U);
    msg.setSourceEntity(35U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(83U);
    msg.camid = 63U;
    msg.x = 41537U;
    msg.y = 57259U;

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
    msg.setTimeStamp(0.3662477307285533);
    msg.setSource(32261U);
    msg.setSourceEntity(218U);
    msg.setDestination(25893U);
    msg.setDestinationEntity(143U);
    msg.camid = 75U;
    msg.x = 9150U;
    msg.y = 28592U;

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
    msg.setTimeStamp(0.10715642432872186);
    msg.setSource(62944U);
    msg.setSourceEntity(31U);
    msg.setDestination(29394U);
    msg.setDestinationEntity(115U);
    msg.camid = 71U;
    msg.x = 34193U;
    msg.y = 12488U;

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
    msg.setTimeStamp(0.9762443246926622);
    msg.setSource(7169U);
    msg.setSourceEntity(13U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(124U);
    msg.camid = 92U;
    msg.x = 28960U;
    msg.y = 47407U;

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
    msg.setTimeStamp(0.9925998435739208);
    msg.setSource(11447U);
    msg.setSourceEntity(117U);
    msg.setDestination(30602U);
    msg.setDestinationEntity(29U);
    msg.camid = 159U;
    msg.x = 22190U;
    msg.y = 41737U;

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
    msg.setTimeStamp(0.4060256043398134);
    msg.setSource(23479U);
    msg.setSourceEntity(21U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(181U);
    msg.tracking = 140U;
    msg.lat = 0.5461132571682464;
    msg.lon = 0.3724179255393233;
    msg.x = 0.2884413616219864;
    msg.y = 0.34454077287511187;
    msg.z = 0.578791405621393;

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
    msg.setTimeStamp(0.618354991248362);
    msg.setSource(36124U);
    msg.setSourceEntity(107U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(174U);
    msg.tracking = 178U;
    msg.lat = 0.746127996299561;
    msg.lon = 0.7040814323528909;
    msg.x = 0.9562499073137867;
    msg.y = 0.04673307026908324;
    msg.z = 0.7464952950308041;

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
    msg.setTimeStamp(0.5927783244723551);
    msg.setSource(39984U);
    msg.setSourceEntity(60U);
    msg.setDestination(31703U);
    msg.setDestinationEntity(140U);
    msg.tracking = 60U;
    msg.lat = 0.32183489461669146;
    msg.lon = 0.36129182990804953;
    msg.x = 0.8423463277660864;
    msg.y = 0.0768242095944266;
    msg.z = 0.17942047956452056;

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
    msg.setTimeStamp(0.9605347159993854);
    msg.setSource(6055U);
    msg.setSourceEntity(62U);
    msg.setDestination(5606U);
    msg.setDestinationEntity(157U);
    msg.target.assign("XPRYUWADSTFVVXNUEWOZIDSAQHZHPTOCJMVYKMFKAAWNIZKFXTNBEOLHIKIRCPXFIPMVHWISQQKUUGQXDXSMECZOAIRNQLSKRMHUCBCRWVVQPMQHPJRUAPSOEYXDLCDZFTEEOJQLGNGUYHLZSXRAOTANBIVQNLXZXTNCWMVYWJLRBDLGDBKTJEGGDKHFJZHIMBVJLZKWWDOBW");
    msg.lbearing = 0.3027690119671693;
    msg.lelevation = 0.29369226368396584;
    msg.bearing = 0.9899387668136638;
    msg.elevation = 0.5237417446568144;
    msg.phi = 0.5781965543850023;
    msg.theta = 0.9343458120839969;
    msg.psi = 0.47461668914799016;
    msg.accuracy = 0.817175641350525;

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
    msg.setTimeStamp(0.7832532379186666);
    msg.setSource(36600U);
    msg.setSourceEntity(116U);
    msg.setDestination(12976U);
    msg.setDestinationEntity(72U);
    msg.target.assign("CNWNRFEMLBYTHOZUYQPTOLDGEVNGDWIJCWMTGKVPYYUXKSIAFQFMQHYIUKOGGRYDASLABPHDTZPHRLXHXWCQZCAWBVYWBPXSLMAXZBPRQFTPUIDOPZVKIEVXZMZIDGHMDVLKQOJREMBGVIGXYABBQCQIMPWJEXKFJVKTSHOJSEFC");
    msg.lbearing = 0.6352085542208055;
    msg.lelevation = 0.03490271625697372;
    msg.bearing = 0.8807944401695429;
    msg.elevation = 0.6401356343981961;
    msg.phi = 0.6034947773001935;
    msg.theta = 0.19865856667948634;
    msg.psi = 0.75778100984794;
    msg.accuracy = 0.6910280725566341;

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
    msg.setTimeStamp(0.6018391980536052);
    msg.setSource(60147U);
    msg.setSourceEntity(146U);
    msg.setDestination(49389U);
    msg.setDestinationEntity(190U);
    msg.target.assign("FBKRWZOYITXEYLZPJ");
    msg.lbearing = 0.21073162510892773;
    msg.lelevation = 0.08385020806712451;
    msg.bearing = 0.6895863309761403;
    msg.elevation = 0.35593556348279054;
    msg.phi = 0.18816898633949686;
    msg.theta = 0.49334207561683197;
    msg.psi = 0.6096480580884563;
    msg.accuracy = 0.31822467818418343;

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
    msg.setTimeStamp(0.21548231778963256);
    msg.setSource(55098U);
    msg.setSourceEntity(116U);
    msg.setDestination(7037U);
    msg.setDestinationEntity(116U);
    msg.target.assign("BGPOAQDYAOZTYOQYSRKVOPLRUYUOVTTHERWLPOHFRZWOSTTCFVFWZKURTVLNWTTZMKCWNXUARELYHZDSVGHEGMPPDKAXUDEXJFYGIQSUWYCDHECCBKWUXVZJSJCLNNTDFFSBXZXBCQALJRKMXWBNADCLFEBQINJPXZGYGRHEJBIOLLSFTKNWMJEHNYAEOIXJVBLISKZIOAGUIAQEMRQCND");
    msg.x = 0.6027655263023588;
    msg.y = 0.4661602770918789;
    msg.z = 0.12922187130806984;
    msg.n = 0.883193922346659;
    msg.e = 0.7444026686396897;
    msg.d = 0.7218308677332437;
    msg.phi = 0.6780703922864231;
    msg.theta = 0.31045581769974284;
    msg.psi = 0.37404161819391124;
    msg.accuracy = 0.9046282899596362;

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
    msg.setTimeStamp(0.4316084346194883);
    msg.setSource(33656U);
    msg.setSourceEntity(32U);
    msg.setDestination(6204U);
    msg.setDestinationEntity(35U);
    msg.target.assign("AOJHRNLSQBLWEHRXOPENHTNJZSFKSNNJNRINCLMGJFCOUPKZIOWZUNXMGWGIWJPFKBEULITESDQBVLSXFYRKGNBBUCPVTAUAQGPDBRYMEPVCFYKSOOZJIXTZJXDRKHVGOFMFUOBYEFYREXJGRCQMGHQCGIQAVP");
    msg.x = 0.09861696693976252;
    msg.y = 0.7386773517477256;
    msg.z = 0.4970198927282309;
    msg.n = 0.9700429178124691;
    msg.e = 0.42569584345445677;
    msg.d = 0.07433747729102236;
    msg.phi = 0.42243688715522865;
    msg.theta = 0.5704730363062108;
    msg.psi = 0.2671053629079889;
    msg.accuracy = 0.06983282364187615;

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
    msg.setTimeStamp(0.8617882127938887);
    msg.setSource(53004U);
    msg.setSourceEntity(241U);
    msg.setDestination(45264U);
    msg.setDestinationEntity(88U);
    msg.target.assign("ZIGRHKLZSJWKKKQISJIRDOXSHGMXGWRYLUWARHIVNJTVFPCWZXVBVTVDYJWSVGHQYMFBPEUHOCUATZXJAIOCPIWBWHZYSZVQPACNMFDXUTDEFMMDNQQBYGUWUWKQAYVNJTOBFZAKIELGSPRYORNBDCUANXOVLFEMLLAXDBMPCCLWHFT");
    msg.x = 0.31338874001640327;
    msg.y = 0.5384247909514809;
    msg.z = 0.8880626937968418;
    msg.n = 0.6685116034411844;
    msg.e = 0.7127761108741276;
    msg.d = 0.6887547053464996;
    msg.phi = 0.5185966448258004;
    msg.theta = 0.2532852748915839;
    msg.psi = 0.9595761333531917;
    msg.accuracy = 0.23198299928683996;

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
    msg.setTimeStamp(0.6729998574338011);
    msg.setSource(60992U);
    msg.setSourceEntity(194U);
    msg.setDestination(37816U);
    msg.setDestinationEntity(24U);
    msg.target.assign("TEAVJHKERGIJRVTOGNTXNPNPIUMYZEBCWIFOYVWYFGIDSGMSHCQTSOXYVIORTSZVCYFWNNRFQDBSKPPTMDSMABAXHMUBIYUQOFMWWLSYAELYJMXFCBI");
    msg.lat = 0.8278925288165596;
    msg.lon = 0.2767312666841186;
    msg.z_units = 12U;
    msg.z = 0.5312577881879802;
    msg.accuracy = 0.0070513924988099275;

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
    msg.setTimeStamp(0.35560820145803973);
    msg.setSource(18269U);
    msg.setSourceEntity(249U);
    msg.setDestination(52906U);
    msg.setDestinationEntity(36U);
    msg.target.assign("FCOZAOLSCUQBRLPHCYXVCBBRFTMERQLPFKMMQVIGYOEKJQYUJFXSBYWWBILTGSTNILFIADDYDZIWFIDEZGQIPQWUZWXJHBQYVUOSABIJVZLJXRASCCPQOEDQGBGHFKGNDHAVUHCOTUOMPNEKEHPMZVVIMKDQGNFEKLRBFAYYBWSKTTOWHTEMPMXZZZJRMGZESAILVEXPAJUXHSF");
    msg.lat = 0.13961876223359326;
    msg.lon = 0.31885185227766155;
    msg.z_units = 188U;
    msg.z = 0.7184489341978735;
    msg.accuracy = 0.7705981549979586;

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
    msg.setTimeStamp(0.9360172781577767);
    msg.setSource(17556U);
    msg.setSourceEntity(31U);
    msg.setDestination(41559U);
    msg.setDestinationEntity(53U);
    msg.target.assign("JMFYOZUBGDEXYYDFUSKWTFTRVAJYOHIPLQUJCUYDMCJFKSQBPFSVIGNIOVSLNUZKHAKZOCTRGWNHTMZFVRDBIULJYVNOEWXLEHUBGXIVDLFTNVXEHQHNDJSDXLMFNZOWXRVGALQRQHGRSSEEZGAQIDBUQNCOEBAHEPPSGRJNWLCYJQIGXPZZPXCTYAPIMAIHKCMQCXRIPWEDZUBPXMJFJBYKCSVFMARBLKOTQWWNOEBGAHTWTZCMSVMTUYK");
    msg.lat = 0.7960977142677201;
    msg.lon = 0.6479026543925571;
    msg.z_units = 187U;
    msg.z = 0.18358222618941733;
    msg.accuracy = 0.8772323837792028;

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
    msg.setTimeStamp(0.8099158813937708);
    msg.setSource(40189U);
    msg.setSourceEntity(25U);
    msg.setDestination(55257U);
    msg.setDestinationEntity(34U);
    msg.name.assign("RWHVONLAYABSEXMBXUCDRRUZWKPCICNKUKMCIUNTNHTSZTQXRTMALFQGXOIHPEMYKGDRVDAJLDFMAQKVNOQUDUJCXDJJVVQVECXKQLNOTHGSMPXBSYIZKHPVEFSZLYZNCVMQXMROBBORAJXQIJPGFLWSERJHOREIZUOUVGBTUAYIQSG");
    msg.lat = 0.4122534962404637;
    msg.lon = 0.6299830078023188;
    msg.z = 0.8126043781288343;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.2279433569389001);
    msg.setSource(13071U);
    msg.setSourceEntity(62U);
    msg.setDestination(325U);
    msg.setDestinationEntity(4U);
    msg.name.assign("CQUMUCQHKYVMSDRODGCJHXUSZYDLKGHPNYDPXYLGECQBUGMHMMJFNHVLFFQJZYGZZRRVMTEORQLWLFAIUIXZNLOPFYBUNGDKDINLPDHEMTAARWSSUOBAXAAUKKOKNTRRJWVDXBTKJFJPSXXLPEJPGICBMQBNVVZZMEPSOTQTBUZWGZCQQEQSOTWVWPYWLYINJAMDCBPKOAJWGCFKSNIFGNEXEHT");
    msg.lat = 0.42007568514337756;
    msg.lon = 0.5974217890263259;
    msg.z = 0.37993888740934334;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.39247796187883177);
    msg.setSource(22981U);
    msg.setSourceEntity(132U);
    msg.setDestination(50868U);
    msg.setDestinationEntity(134U);
    msg.name.assign("NSCESIKONCADPUWXBZNHHVPWHUFSKRLFTHWBHMUSLWONJRIJITPMCJWVCNOK");
    msg.lat = 0.7766033053826049;
    msg.lon = 0.9044220844880793;
    msg.z = 0.7264143528249015;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.8257636569504223);
    msg.setSource(1110U);
    msg.setSourceEntity(116U);
    msg.setDestination(54239U);
    msg.setDestinationEntity(169U);
    msg.op = 87U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JYPWXDXFNWVYYHSDZZKGPMJVIQRQADFPKGNZGKBXXKVMYRNSCHYTCRMUCIHDZDWWQEMVARNKUZFICFNSSMAVWAOCJGVVGLCYVXKWBZVYRHSJZOMNXEUMADURGETJXBHQPUXO");
    tmp_msg_0.lat = 0.2990717798509003;
    tmp_msg_0.lon = 0.4402703711950119;
    tmp_msg_0.z = 0.15476885792849548;
    tmp_msg_0.z_units = 19U;
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
    msg.setTimeStamp(0.40785636722087315);
    msg.setSource(60989U);
    msg.setSourceEntity(97U);
    msg.setDestination(49735U);
    msg.setDestinationEntity(53U);
    msg.op = 23U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YPRIJOPEAMMZOYHAGCYDZXACYTOIQKGWIEGECBAIMYBQCDVVUVKEKHPYBKMSUUGASWDBDYRDKQHCIZTLMRWFRNMTOGBVTFYVAENDCDQDVSJQUONTOPXKOEMTFQXOBWPISOUHKISPFUSJXJTLAAVHKIPI");
    tmp_msg_0.lat = 0.18557141804598698;
    tmp_msg_0.lon = 0.7761991595311063;
    tmp_msg_0.z = 0.009923006590425443;
    tmp_msg_0.z_units = 138U;
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
    msg.setTimeStamp(0.8018701808147377);
    msg.setSource(12996U);
    msg.setSourceEntity(141U);
    msg.setDestination(46208U);
    msg.setDestinationEntity(70U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.8885728299211457);
    msg.setSource(52510U);
    msg.setSourceEntity(60U);
    msg.setDestination(41154U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5858025603259615;
    msg.type = 181U;

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
    msg.setTimeStamp(0.5015443247205381);
    msg.setSource(61409U);
    msg.setSourceEntity(179U);
    msg.setDestination(36218U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7118535797798364;
    msg.type = 223U;

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
    msg.setTimeStamp(0.34418663596027976);
    msg.setSource(27436U);
    msg.setSourceEntity(118U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(179U);
    msg.value = 0.14987175744505932;
    msg.type = 20U;

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
    msg.setTimeStamp(0.7280745157263248);
    msg.setSource(13844U);
    msg.setSourceEntity(46U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(229U);
    msg.value = 0.20682543256755026;

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
    msg.setTimeStamp(0.26349915406555136);
    msg.setSource(48198U);
    msg.setSourceEntity(68U);
    msg.setDestination(23441U);
    msg.setDestinationEntity(96U);
    msg.value = 0.1861431833401237;

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
    msg.setTimeStamp(0.9930038386839117);
    msg.setSource(5651U);
    msg.setSourceEntity(223U);
    msg.setDestination(28670U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6908062408541547;

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
    msg.setTimeStamp(0.9220913858856489);
    msg.setSource(19385U);
    msg.setSourceEntity(169U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(53U);
    msg.timestamp_last_service = 0.5263268292944249;
    msg.time_next_service = 0.38868895405067216;
    msg.time_motor_next_service = 0.138637480371554;
    msg.time_idle_ground = 0.8287731232988713;
    msg.time_idle_air = 0.7325349968617333;
    msg.time_idle_water = 0.8291624821159025;
    msg.time_idle_underwater = 0.5461313391347599;
    msg.time_idle_unknown = 0.788672480265072;
    msg.time_motor_ground = 0.49453915995944053;
    msg.time_motor_air = 0.24829286791947747;
    msg.time_motor_water = 0.17017555538996942;
    msg.time_motor_underwater = 0.898783330909463;
    msg.time_motor_unknown = 0.8276506493782821;
    msg.rpm_min = 664;
    msg.rpm_max = -16485;
    msg.depth_max = 0.18636642550400706;

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
    msg.setTimeStamp(0.007989914368336293);
    msg.setSource(47937U);
    msg.setSourceEntity(250U);
    msg.setDestination(11172U);
    msg.setDestinationEntity(186U);
    msg.timestamp_last_service = 0.07134459662447779;
    msg.time_next_service = 0.9696194284358537;
    msg.time_motor_next_service = 0.4744083431989661;
    msg.time_idle_ground = 0.36515043735819197;
    msg.time_idle_air = 0.45903046881569576;
    msg.time_idle_water = 0.10850606681131214;
    msg.time_idle_underwater = 0.18782479340478164;
    msg.time_idle_unknown = 0.5860502902460727;
    msg.time_motor_ground = 0.31098213664472907;
    msg.time_motor_air = 0.3442852356618995;
    msg.time_motor_water = 0.37703909860243245;
    msg.time_motor_underwater = 0.0075235175661954035;
    msg.time_motor_unknown = 0.04715741364124171;
    msg.rpm_min = 18239;
    msg.rpm_max = 18543;
    msg.depth_max = 0.425616999249704;

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
    msg.setTimeStamp(0.4746102631289707);
    msg.setSource(37568U);
    msg.setSourceEntity(252U);
    msg.setDestination(52470U);
    msg.setDestinationEntity(78U);
    msg.timestamp_last_service = 0.8190498754275037;
    msg.time_next_service = 0.8998849289999798;
    msg.time_motor_next_service = 0.9786286774669907;
    msg.time_idle_ground = 0.21759773734067545;
    msg.time_idle_air = 0.2293335812757925;
    msg.time_idle_water = 0.9168407875676428;
    msg.time_idle_underwater = 0.48089137314002584;
    msg.time_idle_unknown = 0.8856896155929211;
    msg.time_motor_ground = 0.856259348257441;
    msg.time_motor_air = 0.2972636915941991;
    msg.time_motor_water = 0.6901936907596607;
    msg.time_motor_underwater = 0.1519010886265163;
    msg.time_motor_unknown = 0.0023378913251116407;
    msg.rpm_min = 15514;
    msg.rpm_max = -24844;
    msg.depth_max = 0.056144539804282356;

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
    msg.setTimeStamp(0.5650314717841306);
    msg.setSource(22093U);
    msg.setSourceEntity(249U);
    msg.setDestination(4254U);
    msg.setDestinationEntity(130U);
    msg.severity = 52U;
    msg.text.assign("VZWVTQHMVKBPWPPIYWSUECQFONPQSQSEYRCJDMLCMQEJTHNWGXJKNWRNHLAMNDWDJKKJIOVCKGCFVAVLZGYYTYMJURXFGFGZRIWJTPQHKBZMOILWTEPYYFXLVCXOQOGVTXBURBETXBGEHXJC");

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
    msg.setTimeStamp(0.2568930315068939);
    msg.setSource(37885U);
    msg.setSourceEntity(63U);
    msg.setDestination(15516U);
    msg.setDestinationEntity(18U);
    msg.severity = 10U;
    msg.text.assign("TNMDDXYFYRHFLCHLLMAULQAJQXMGHWYOSDCNNPDVTUPXHXVAGZXKOZCFMESPSMSSVEIFIXZLLZKWTDWXANXNKLBX");

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
    msg.setTimeStamp(0.3911007144299813);
    msg.setSource(17673U);
    msg.setSourceEntity(175U);
    msg.setDestination(33635U);
    msg.setDestinationEntity(220U);
    msg.severity = 65U;
    msg.text.assign("KSXSXCYCRNWALEXGOHTWXCQIALVJHWMNPWXKUPTRFCDLSWFWOYFZZSJIRDZYOOMTRGLNBFCVMDREHPYMFZRNCKAYTTXOJRUGNFKUBKIJMWIAAKRXGDOZBXUVQTZXBJKVLIPIRJBBOGZPPSAIVYKDFQHSQDCBVGNIWUUJPZMKLFFGRVP");

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
    msg.setTimeStamp(0.5671729107940432);
    msg.setSource(55637U);
    msg.setSourceEntity(227U);
    msg.setDestination(50352U);
    msg.setDestinationEntity(200U);
    msg.channel = -69;
    msg.value = -1813503557;
    msg.gain = 128U;

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
    msg.setTimeStamp(0.31499085288330697);
    msg.setSource(40370U);
    msg.setSourceEntity(181U);
    msg.setDestination(4579U);
    msg.setDestinationEntity(243U);
    msg.channel = -99;
    msg.value = -1505221187;
    msg.gain = 148U;

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
    msg.setTimeStamp(0.5345672361008479);
    msg.setSource(46137U);
    msg.setSourceEntity(235U);
    msg.setDestination(42450U);
    msg.setDestinationEntity(64U);
    msg.channel = 27;
    msg.value = 501505436;
    msg.gain = 123U;

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
    msg.setTimeStamp(0.056894576059249746);
    msg.setSource(22244U);
    msg.setSourceEntity(53U);
    msg.setDestination(42796U);
    msg.setDestinationEntity(83U);
    msg.ch01 = 0.30949870004845315;
    msg.ch02 = 0.7933863192334167;
    msg.ch03 = 0.7652688097824485;
    msg.ch04 = 0.4614077630393918;
    msg.ch05 = 0.33305563529658444;
    msg.ch06 = 0.7156328732680197;
    msg.ch07 = 0.07025835878226672;
    msg.ch08 = 0.7946309922201488;
    msg.ch09 = 0.0963997517061631;
    msg.ch10 = 0.13855744185454621;
    msg.ch11 = 0.868830514921159;
    msg.ch12 = 0.022172387633157542;
    msg.ch13 = 0.7585526052439698;
    msg.ch14 = 0.7812162363106624;
    msg.ch15 = 0.33125802435116336;
    msg.ch16 = 0.40560854313374384;

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
    msg.setTimeStamp(0.697876451913057);
    msg.setSource(64966U);
    msg.setSourceEntity(134U);
    msg.setDestination(57970U);
    msg.setDestinationEntity(195U);
    msg.ch01 = 0.6240883305376883;
    msg.ch02 = 0.6559126837940126;
    msg.ch03 = 0.04650591670252058;
    msg.ch04 = 0.14529553359006897;
    msg.ch05 = 0.12313917860104273;
    msg.ch06 = 0.8006422412772543;
    msg.ch07 = 0.4823656088337861;
    msg.ch08 = 0.920215782251096;
    msg.ch09 = 0.6654430455257804;
    msg.ch10 = 0.8059536776302552;
    msg.ch11 = 0.7920228904054302;
    msg.ch12 = 0.9383918046749665;
    msg.ch13 = 0.6072350979495951;
    msg.ch14 = 0.483206880755329;
    msg.ch15 = 0.6525421285061296;
    msg.ch16 = 0.6454021865076844;

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
    msg.setTimeStamp(0.07545468598498806);
    msg.setSource(46223U);
    msg.setSourceEntity(228U);
    msg.setDestination(3107U);
    msg.setDestinationEntity(173U);
    msg.ch01 = 0.05344781763090767;
    msg.ch02 = 0.3663017563826726;
    msg.ch03 = 0.8888187351139761;
    msg.ch04 = 0.9711813144457313;
    msg.ch05 = 0.417948642880296;
    msg.ch06 = 0.8334238673600588;
    msg.ch07 = 0.89529038734661;
    msg.ch08 = 0.15661920112722982;
    msg.ch09 = 0.6770514849375381;
    msg.ch10 = 0.15747916879324408;
    msg.ch11 = 0.8901857461308057;
    msg.ch12 = 0.8164936852018921;
    msg.ch13 = 0.2058674147303069;
    msg.ch14 = 0.22127527463486285;
    msg.ch15 = 0.7027877902062465;
    msg.ch16 = 0.01920925707206078;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8612995215093278);
    msg.setSource(41621U);
    msg.setSourceEntity(234U);
    msg.setDestination(39114U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5209196912633764;

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
    msg.setTimeStamp(0.21068371070506464);
    msg.setSource(54615U);
    msg.setSourceEntity(61U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7391463146035383;

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
    msg.setTimeStamp(0.9716788577165459);
    msg.setSource(62887U);
    msg.setSourceEntity(123U);
    msg.setDestination(56181U);
    msg.setDestinationEntity(67U);
    msg.value = 0.33544925572110595;

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
    IMC::HomePosition msg;
    msg.setTimeStamp(0.4098565053288693);
    msg.setSource(7301U);
    msg.setSourceEntity(218U);
    msg.setDestination(41900U);
    msg.setDestinationEntity(36U);
    msg.op = 74U;
    msg.lat = 0.1512233770567598;
    msg.lon = 0.7392536209726313;
    msg.height = 0.9895780406850716;
    msg.depth = 0.42624598208015607;
    msg.alt = 0.02332079913511642;

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
    msg.setTimeStamp(0.6200778543606776);
    msg.setSource(32071U);
    msg.setSourceEntity(45U);
    msg.setDestination(63134U);
    msg.setDestinationEntity(93U);
    msg.op = 51U;
    msg.lat = 0.7647924512303818;
    msg.lon = 0.3934884066167843;
    msg.height = 0.2619622822331127;
    msg.depth = 0.9246043186006938;
    msg.alt = 0.9038724859282637;

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
    msg.setTimeStamp(0.5016488166807079);
    msg.setSource(27679U);
    msg.setSourceEntity(230U);
    msg.setDestination(55231U);
    msg.setDestinationEntity(202U);
    msg.op = 5U;
    msg.lat = 0.6316822094357505;
    msg.lon = 0.45939469786020604;
    msg.height = 0.7239315052005024;
    msg.depth = 0.8506394251329453;
    msg.alt = 0.3443150850465476;

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
    IMC::DtlsMessage msg;
    msg.setTimeStamp(0.6039014614732064);
    msg.setSource(28445U);
    msg.setSourceEntity(5U);
    msg.setDestination(24624U);
    msg.setDestinationEntity(108U);
    msg.fielda = 0.5502837635618949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DtlsMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DtlsMessage msg;
    msg.setTimeStamp(0.39541271912987985);
    msg.setSource(31493U);
    msg.setSourceEntity(190U);
    msg.setDestination(43170U);
    msg.setDestinationEntity(59U);
    msg.fielda = 0.04191781901975311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DtlsMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DtlsMessage msg;
    msg.setTimeStamp(0.7745365087175354);
    msg.setSource(53659U);
    msg.setSourceEntity(73U);
    msg.setDestination(46308U);
    msg.setDestinationEntity(129U);
    msg.fielda = 0.5663134861282202;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DtlsMessage #2", msg == *msg_d);
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
