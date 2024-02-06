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
// IMC XML MD5: b467d1557b05ffd7b298f0cea6831f15                            *
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
    msg.setTimeStamp(0.040622183454416594);
    msg.setSource(55387U);
    msg.setSourceEntity(160U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(33U);
    msg.state = 228U;
    msg.flags = 241U;
    msg.description.assign("IYYVQEWQCJFDPSVFEMPSGNWYCGAKOMXEHKRGFBDQGWUXISWHYPZZTQOUDUPXJASABJLRMAGOFZMEIOQJCLKVWJJBDTYHYKTOIUETYMXFUXREUNZDTCZKMBOAZOCBDKOKNCMGNJDQQLZTVIVTWRTHFHZWFIBPAKQSFSLPTEARTUDCMIHVIQSNRXVBDWIBGHJSHYMLFEBPVQWRZXLUVYZRWEJ");

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
    msg.setTimeStamp(0.1808743309861256);
    msg.setSource(65340U);
    msg.setSourceEntity(74U);
    msg.setDestination(56059U);
    msg.setDestinationEntity(147U);
    msg.state = 13U;
    msg.flags = 242U;
    msg.description.assign("ZGLADVQMLONFOTDQKTNPSIYDSFGGXVVNBIHIYWXXLBRK");

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
    msg.setTimeStamp(0.4551099323440617);
    msg.setSource(49778U);
    msg.setSourceEntity(126U);
    msg.setDestination(14632U);
    msg.setDestinationEntity(45U);
    msg.state = 102U;
    msg.flags = 40U;
    msg.description.assign("MXVSZTRMAIJOKYBJHIUUNDPIRJJOEKEOHYWHQAELCKPQYIWVQDWGYXTATOOVXOHAOLDBWMZDWLLJJSUYRXSZGFINQDGWQCQZCFUQGVXTBJMSPDGOGDCFRFYBLHZ");

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
    msg.setTimeStamp(0.48983061374827663);
    msg.setSource(52716U);
    msg.setSourceEntity(183U);
    msg.setDestination(34388U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.4460105402121115);
    msg.setSource(1769U);
    msg.setSourceEntity(82U);
    msg.setDestination(40462U);
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
    msg.setTimeStamp(0.8266115660554124);
    msg.setSource(16433U);
    msg.setSourceEntity(78U);
    msg.setDestination(36950U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.8825282250769287);
    msg.setSource(53616U);
    msg.setSourceEntity(61U);
    msg.setDestination(26042U);
    msg.setDestinationEntity(245U);
    msg.id = 87U;
    msg.label.assign("DZLCQHNBQAVQLDYOWSOJQFOGXHPBIJEHYBUKJJRMOAMHZUDRWVRYQDNJYMKWXNENFDSPJIDICNCPUMPHTQREBHBKQUGUSKULBKZMGWTGCOUEZIASSHLZECWWXTXLZQHWNJOMLFPRKDPVRTJKTSEUMOSTVFNGVIOTYFWWZEVPZXRAENCXAAXCGYLVUAPWL");
    msg.component.assign("IHYBYLRQXSZHTOVUGSSBUTPKXVPBNKARJBJOTAEJVXPYZIZANMUIFXYLLXPXOYQCCLOTEMCWEFJUXTVGWVRNFWAHJIFVUZSRYMHKCDHF");
    msg.act_time = 48888U;
    msg.deact_time = 57047U;

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
    msg.setTimeStamp(0.280985558984731);
    msg.setSource(50822U);
    msg.setSourceEntity(210U);
    msg.setDestination(36329U);
    msg.setDestinationEntity(214U);
    msg.id = 83U;
    msg.label.assign("GVTZARMIHTOEYHRFQADKMDMIWSVXBNQTWWXJFUFJMAXRVNKRQZXBYSIKKXPHAJGLCWLDXNYTKSXUVDEUPUVTQBCUBRSNYOAOSGHXCEIJGZPDEQITFELWFOLJAQCFZQYPBGGYKPMLBHOPRGJCDASQNSEJHRBUBUJKOAIRTETBOVSKLYOFFFYC");
    msg.component.assign("AMLGAIWBPNGZEGSBGKWVOHHKPQXFPKJXCYKDRVUUZSWEGBOCNORILDFFJYHRYSJLTVVILTQMGXYUACWFLDQWOZXICZDRZDYLHNVNAVEEERUMGJDNUHMBBSKWTTAWAWTDBEOJIRNYQHZSEJBZRZWJXONPDJFMHLCKIOYPHGOLQNAYHFIZLVDOSXWQKAQAEXBSIYTGQTMKYPRCUSP");
    msg.act_time = 55866U;
    msg.deact_time = 36515U;

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
    msg.setTimeStamp(0.14480156580928627);
    msg.setSource(41225U);
    msg.setSourceEntity(130U);
    msg.setDestination(26328U);
    msg.setDestinationEntity(11U);
    msg.id = 199U;
    msg.label.assign("DMQYDJWEABBZVGFXGJDDOPIOHLEAKZOCRTTFKLWIWXUQFIIKSZYOPZBIEMCSRVBSPTVOUTJNRBSDLXFJMSHPAKJLNXSLCEVWFFAQDPRVQCZIITKGHQZNHNICVVFXKTIBJLCTOYJATHDUSHDYNBU");
    msg.component.assign("IREWGODSLLVJMJFQACBKBBQNBZGCOYXNXDEUHDNSWMBXATVTRFQUTXYYPZDXOSKZOZXGGUKJDACMEIWWXPIJKQJJPMVBHQPTCFQWRSLNERMFZUUYJMDHYELTXSKRUFZYSTNLBITUBSAEENHLRHRNFCASPMTEAKWIHGWVCYCCZMOMXEKOLHHQRVUVGGYIKJEDNCPVFLOOVJLALBQCWTOGJAFSKRIAFZ");
    msg.act_time = 51234U;
    msg.deact_time = 59835U;

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
    msg.setTimeStamp(0.17399741131931334);
    msg.setSource(39074U);
    msg.setSourceEntity(250U);
    msg.setDestination(48880U);
    msg.setDestinationEntity(129U);
    msg.id = 234U;

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
    msg.setTimeStamp(0.5161737302710485);
    msg.setSource(49020U);
    msg.setSourceEntity(110U);
    msg.setDestination(62682U);
    msg.setDestinationEntity(122U);
    msg.id = 98U;

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
    msg.setTimeStamp(0.4131058033916075);
    msg.setSource(62714U);
    msg.setSourceEntity(208U);
    msg.setDestination(21761U);
    msg.setDestinationEntity(135U);
    msg.id = 245U;

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
    msg.setTimeStamp(0.13768989118599173);
    msg.setSource(29421U);
    msg.setSourceEntity(40U);
    msg.setDestination(53062U);
    msg.setDestinationEntity(179U);
    msg.op = 182U;
    msg.list.assign("YIGUNQPUGRDKKBTQBUFFLCOYEXQBZWSVHNWLGEENKZOLJXTBVVLNTHNMAIUZVMOBMPDCSDNFQOPMWFDWGPBGFJRHJOLWIHZIBQOWAOCXIERLMVXZLPSAOKFPKSTJZF");

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
    msg.setTimeStamp(0.3016553340488711);
    msg.setSource(61148U);
    msg.setSourceEntity(67U);
    msg.setDestination(34747U);
    msg.setDestinationEntity(171U);
    msg.op = 73U;
    msg.list.assign("RFZSXLQKBIGGGZOOLIVKVQRSAPDJSAAPUSPFIWYYEZXCHODLZPANVXZQNFNUDYGWCCQWNWOLGIUCAKHYYWEKBHNLJBADIIKVSQYUEVBSDWXTVKETGLHAASVXQDWHMTOBBBFUHRCFIPPZZHXMCHTBEJVZCTNZXVRGJLJRWTCONXMGDIWWMHRRKEKBJDVEQUUFFFRPTOLPZQOMI");

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
    msg.setTimeStamp(0.07726009350134067);
    msg.setSource(12037U);
    msg.setSourceEntity(101U);
    msg.setDestination(6689U);
    msg.setDestinationEntity(136U);
    msg.op = 67U;
    msg.list.assign("EZQXOPFEBIHULHQVWTKNYSCCNRMTZTKWZHDSSOMZMARNRUGOSLOIQGGHDEDOZRKEDFMOQUWWTSGXQZGXFVFBNSBPRZIJROXGCNPREMYJLDKLCVHBFBTVJIBJPWAIEXWOUKKRNJCCZQMENKRMJFLVAHICTAPDGLUSIFWFVCHVEZPWWGGXNRNTYKPAYYIBXAYYEBQOVBXYITYHMDXITPDQXJTWALJVAMYHCLULLUCDDOSSUBVZFJQHAMAGKQS");

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
    msg.setTimeStamp(0.590809767906511);
    msg.setSource(54345U);
    msg.setSourceEntity(24U);
    msg.setDestination(37486U);
    msg.setDestinationEntity(25U);
    msg.value = 214U;

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
    msg.setTimeStamp(0.709807472822278);
    msg.setSource(9060U);
    msg.setSourceEntity(249U);
    msg.setDestination(64739U);
    msg.setDestinationEntity(154U);
    msg.value = 3U;

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
    msg.setTimeStamp(0.4124671960014783);
    msg.setSource(59034U);
    msg.setSourceEntity(34U);
    msg.setDestination(15218U);
    msg.setDestinationEntity(185U);
    msg.value = 188U;

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
    msg.setTimeStamp(0.4475309093280325);
    msg.setSource(16774U);
    msg.setSourceEntity(17U);
    msg.setDestination(28541U);
    msg.setDestinationEntity(27U);
    msg.consumer.assign("DFBGQAVEUOVXGUHFIBHDKZYMGBVLZAPBEPFWBUCFP");
    msg.message_id = 13055U;

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
    msg.setTimeStamp(0.9466628883791867);
    msg.setSource(11654U);
    msg.setSourceEntity(30U);
    msg.setDestination(25394U);
    msg.setDestinationEntity(173U);
    msg.consumer.assign("MMJBIHDISVQKJOFCANCYDFZOAVP");
    msg.message_id = 18873U;

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
    msg.setTimeStamp(0.11556203959949174);
    msg.setSource(53469U);
    msg.setSourceEntity(45U);
    msg.setDestination(39973U);
    msg.setDestinationEntity(218U);
    msg.consumer.assign("ONKQCMZIOFRQDETKCLPFFBVAQCXUYZWSUTCVYPCGEPMEMXSASBMKVLCZIMJBXLKHV");
    msg.message_id = 25122U;

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
    msg.setTimeStamp(0.4220044191827105);
    msg.setSource(61422U);
    msg.setSourceEntity(50U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(73U);
    msg.type = 169U;

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
    msg.setTimeStamp(0.6598668056238963);
    msg.setSource(59951U);
    msg.setSourceEntity(171U);
    msg.setDestination(7605U);
    msg.setDestinationEntity(69U);
    msg.type = 112U;

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
    msg.setTimeStamp(0.6096417685187732);
    msg.setSource(9872U);
    msg.setSourceEntity(196U);
    msg.setDestination(9033U);
    msg.setDestinationEntity(251U);
    msg.type = 141U;

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
    msg.setTimeStamp(0.46506311716074167);
    msg.setSource(47572U);
    msg.setSourceEntity(134U);
    msg.setDestination(39559U);
    msg.setDestinationEntity(75U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.07967732531843408);
    msg.setSource(43276U);
    msg.setSourceEntity(26U);
    msg.setDestination(2911U);
    msg.setDestinationEntity(106U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.6975621288890754);
    msg.setSource(33183U);
    msg.setSourceEntity(23U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(217U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.18122415285644677);
    msg.setSource(55951U);
    msg.setSourceEntity(104U);
    msg.setDestination(9669U);
    msg.setDestinationEntity(230U);
    msg.total_steps = 252U;
    msg.step_number = 180U;
    msg.step.assign("GYUIVFLUQJWIUACTOWBZGRBMSJACJYFCVHHEWEKDZPLJWONQSGIMKXPFOFKTEIFLMKNXYLJVAONEPBPIWRBRNRVWNUBCTSWHGYBOGIZPARUKTNUGAURYIK");
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
    msg.setTimeStamp(0.25548296236881995);
    msg.setSource(16774U);
    msg.setSourceEntity(75U);
    msg.setDestination(21360U);
    msg.setDestinationEntity(168U);
    msg.total_steps = 224U;
    msg.step_number = 103U;
    msg.step.assign("EOHBZQATZXSAORFYFGPHHTUXZJBQFMBASRHJZNLKCJFMSULSFVQGPFXNOKOJXBXMQIPMAGMGENUNEWYMFPOSNARIJVCIIHRDDHJGPLBJFGQUJZEWISVKZWAVVCHYDEDNLFHQTEEUBIXRROEBIDOLXNUQAKTDWYSKCXKVYVRHCFQPLIHULLUTCWGPSMWATOANZRICEUKTYSWGKPWARBXJOBD");
    msg.flags = 233U;

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
    msg.setTimeStamp(0.9467376177551067);
    msg.setSource(42353U);
    msg.setSourceEntity(123U);
    msg.setDestination(60334U);
    msg.setDestinationEntity(39U);
    msg.total_steps = 211U;
    msg.step_number = 76U;
    msg.step.assign("VZOLLBTLQVYTUGQXJGNKTNRRSMXABMQZYPQVFXUKBCOPKQOLMDTCOHPHRYDZGSDSXIIWWTKXUAKAFGBVKAUAWCHGVIORPDBZGDUAKFHMVIWNRQRSVPCNYKUOIPWCDHHIBLYEEULPEQOUAXLOENCGTENXJDBYWRKJIDZJQFPHDUMNNJEYZEJSJBXYD");
    msg.flags = 124U;

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
    msg.setTimeStamp(0.19843492330658796);
    msg.setSource(1044U);
    msg.setSourceEntity(176U);
    msg.setDestination(48741U);
    msg.setDestinationEntity(54U);
    msg.state = 220U;
    msg.error.assign("ZSMYOIIGFUOHATPEVGBFRZEGVBFOKDURHNTSLRJMZTXNTGMIDLNIYZWPYEPQVLPBDWLNRKSOXJMQGLFWZVIVCRFGJPZARJDAEVLUJOXDAK");

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
    msg.setTimeStamp(0.12914446467292606);
    msg.setSource(27109U);
    msg.setSourceEntity(75U);
    msg.setDestination(18686U);
    msg.setDestinationEntity(163U);
    msg.state = 149U;
    msg.error.assign("HSZBDLVXSMVWOBOLHGWPMTBJEUJCBIIAJRPL");

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
    msg.setTimeStamp(0.09648097512349052);
    msg.setSource(34046U);
    msg.setSourceEntity(38U);
    msg.setDestination(29195U);
    msg.setDestinationEntity(253U);
    msg.state = 248U;
    msg.error.assign("OEEQEXFTDCRZBOHLUKROKLBFJPKRSEKYQEHVTCFYSYLMCVUOWDVHTGVZMCVDRSAWBFTLJZNFGIEIHEIFXJZJXULVPDAHQOCBMCPUMJXZWRXGAVBPOKAMQETPCVWLRRZNLVFGIQWGPWDFSIHTPJFZSGSNAWWAKGDDDSIIIUW");

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
    msg.setTimeStamp(0.9676605281735652);
    msg.setSource(21374U);
    msg.setSourceEntity(4U);
    msg.setDestination(17453U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.46962488312841943);
    msg.setSource(54878U);
    msg.setSourceEntity(250U);
    msg.setDestination(6896U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.5645413558650493);
    msg.setSource(16226U);
    msg.setSourceEntity(105U);
    msg.setDestination(31081U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.07575973563633875);
    msg.setSource(63273U);
    msg.setSourceEntity(244U);
    msg.setDestination(2433U);
    msg.setDestinationEntity(55U);
    msg.op = 110U;
    msg.speed_min = 0.7908692494232709;
    msg.speed_max = 0.7707940344554959;
    msg.long_accel = 0.790945688789853;
    msg.alt_max_msl = 0.5476804589144337;
    msg.dive_fraction_max = 0.5648107826248103;
    msg.climb_fraction_max = 0.009440995971827237;
    msg.bank_max = 0.0552613761877353;
    msg.p_max = 0.8793089949671069;
    msg.pitch_min = 0.00594700433147588;
    msg.pitch_max = 0.35434904309602533;
    msg.q_max = 0.5980164521391276;
    msg.g_min = 0.7252657172157604;
    msg.g_max = 0.641477484371846;
    msg.g_lat_max = 0.9896670647432276;
    msg.rpm_min = 0.3350061857496164;
    msg.rpm_max = 0.21896862491115476;
    msg.rpm_rate_max = 0.7899023404915685;

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
    msg.setTimeStamp(0.3675067192306125);
    msg.setSource(28392U);
    msg.setSourceEntity(195U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(49U);
    msg.op = 32U;
    msg.speed_min = 0.6547056731823938;
    msg.speed_max = 0.4527521150393471;
    msg.long_accel = 0.6512969101467561;
    msg.alt_max_msl = 0.37781820708364333;
    msg.dive_fraction_max = 0.8865645397486273;
    msg.climb_fraction_max = 0.07111202841204889;
    msg.bank_max = 0.03746483075623719;
    msg.p_max = 0.42395647677335413;
    msg.pitch_min = 0.08416652129088964;
    msg.pitch_max = 0.31554009618872325;
    msg.q_max = 0.9610622812465698;
    msg.g_min = 0.8634859558389063;
    msg.g_max = 0.6757371165667532;
    msg.g_lat_max = 0.043456967251193634;
    msg.rpm_min = 0.2986238318901453;
    msg.rpm_max = 0.2652076249628581;
    msg.rpm_rate_max = 0.42900403229222916;

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
    msg.setTimeStamp(0.037325054329084506);
    msg.setSource(3109U);
    msg.setSourceEntity(244U);
    msg.setDestination(43040U);
    msg.setDestinationEntity(141U);
    msg.op = 148U;
    msg.speed_min = 0.8957402154413211;
    msg.speed_max = 0.21460141383420728;
    msg.long_accel = 0.883956623789628;
    msg.alt_max_msl = 0.9992933825978292;
    msg.dive_fraction_max = 0.9760118845090104;
    msg.climb_fraction_max = 0.660558214183918;
    msg.bank_max = 0.15027805630549107;
    msg.p_max = 0.24264853005502607;
    msg.pitch_min = 0.42374717478520685;
    msg.pitch_max = 0.1514261783822035;
    msg.q_max = 0.9256030103938792;
    msg.g_min = 0.21802472277448404;
    msg.g_max = 0.9051455236888093;
    msg.g_lat_max = 0.1365868410364901;
    msg.rpm_min = 0.2363506590359129;
    msg.rpm_max = 0.5687931408560389;
    msg.rpm_rate_max = 0.002224318332080699;

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
    msg.setTimeStamp(0.21941480227817733);
    msg.setSource(30055U);
    msg.setSourceEntity(161U);
    msg.setDestination(30401U);
    msg.setDestinationEntity(87U);
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -14203;
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
    msg.setTimeStamp(0.07666132330396958);
    msg.setSource(17073U);
    msg.setSourceEntity(253U);
    msg.setDestination(261U);
    msg.setDestinationEntity(27U);
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.45702561123571084;
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
    msg.setTimeStamp(0.5742614381336629);
    msg.setSource(14052U);
    msg.setSourceEntity(51U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(234U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.5628177003830377;
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
    msg.setTimeStamp(0.3340968681364116);
    msg.setSource(15556U);
    msg.setSourceEntity(57U);
    msg.setDestination(51175U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.6755420725553051;
    msg.lon = 0.3836888512577745;
    msg.height = 0.9095592426237963;
    msg.x = 0.7282713814279119;
    msg.y = 0.6416888335466244;
    msg.z = 0.16585439970014781;
    msg.phi = 0.6240530853440399;
    msg.theta = 0.7613754392048216;
    msg.psi = 0.3510344106134693;
    msg.u = 0.43100184811890285;
    msg.v = 0.5658993825508494;
    msg.w = 0.34946731131526976;
    msg.p = 0.4678600676686451;
    msg.q = 0.4001637632739671;
    msg.r = 0.8987890307680035;
    msg.svx = 0.2096005789038382;
    msg.svy = 0.368094804821377;
    msg.svz = 0.7232432945861483;

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
    msg.setTimeStamp(0.7919060454419563);
    msg.setSource(26982U);
    msg.setSourceEntity(165U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.1736621192313511;
    msg.lon = 0.40234534779744613;
    msg.height = 0.3103000358296325;
    msg.x = 0.38485580350482695;
    msg.y = 0.5031097933208737;
    msg.z = 0.46092014354339395;
    msg.phi = 0.5541262345941927;
    msg.theta = 0.5771351604094835;
    msg.psi = 0.8511119890080902;
    msg.u = 0.5021579846350116;
    msg.v = 0.6440072248837256;
    msg.w = 0.673333521581769;
    msg.p = 0.5655087905225186;
    msg.q = 0.8762185781037303;
    msg.r = 0.23088849806565126;
    msg.svx = 0.5637763270235452;
    msg.svy = 0.18159270242723102;
    msg.svz = 0.7954481135751637;

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
    msg.setTimeStamp(0.7791505699122527);
    msg.setSource(63745U);
    msg.setSourceEntity(253U);
    msg.setDestination(44675U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.34398373376693236;
    msg.lon = 0.5506068755488706;
    msg.height = 0.028269153253398183;
    msg.x = 0.7268208407360132;
    msg.y = 0.9749034322365748;
    msg.z = 0.6109673596807269;
    msg.phi = 0.0655355222555819;
    msg.theta = 0.9091371723176346;
    msg.psi = 0.9274071934545638;
    msg.u = 0.17442574468877892;
    msg.v = 0.3216478920645851;
    msg.w = 0.8831266934400047;
    msg.p = 0.43778279130101105;
    msg.q = 0.0678123037259668;
    msg.r = 0.8388097131100611;
    msg.svx = 0.5344578249208316;
    msg.svy = 0.46036803494250467;
    msg.svz = 0.48915722857125665;

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
    msg.setTimeStamp(0.16755195116772792);
    msg.setSource(35353U);
    msg.setSourceEntity(8U);
    msg.setDestination(58649U);
    msg.setDestinationEntity(60U);
    msg.op = 182U;
    msg.entities.assign("ZKDJMCTLBEXAPYEKCGPFKHRNMADGXLLZCSDLPSLMJIMCQEQOYXQFRAPRPTWNRUNJWJHEFGSTSZEEOULKZSOJBFAVBTULQAVJUFGDOQIIAETWGNQNHOAGWHDZYZFUKDHDITIFYMCNMXVOXRGRKDNFCKLEBOXOEFYUVSVQWPKGCPXHLVQIQNOHHANVISZBWUMIBTKLMVZXJRUYSPJMIGVPPAYJYVWNHAZ");

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
    msg.setTimeStamp(0.6504691317095161);
    msg.setSource(3486U);
    msg.setSourceEntity(16U);
    msg.setDestination(47734U);
    msg.setDestinationEntity(112U);
    msg.op = 41U;
    msg.entities.assign("JLAYUGXPBOEPKEAXRZWNZBGMNHSYFUCCSPQAALPHJAZHLEWPOGAQFUXRMOVXWTNDKGONQFPJYRDFYGJVJZHGSKCARWFRMTXSWHBEFDZJAETVBIWKTTNYLOUCMUCNKWZKYITOQJPGRGYMXWACLQOVCOHBNMKRKSPLVBDKFSSIDZLEQUNVMAIXXYCDXHCBNTSIGVVOH");

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
    msg.setTimeStamp(0.9514586513708383);
    msg.setSource(6349U);
    msg.setSourceEntity(228U);
    msg.setDestination(22101U);
    msg.setDestinationEntity(71U);
    msg.op = 222U;
    msg.entities.assign("PGRITBCLCOUIEDDCWRIVPNUHSC");

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
    msg.setTimeStamp(0.9919818297804147);
    msg.setSource(35803U);
    msg.setSourceEntity(175U);
    msg.setDestination(40976U);
    msg.setDestinationEntity(69U);
    msg.type = 68U;
    msg.speed = 51787U;
    const signed char tmp_msg_0[] = {70, -37, -11, -108, -78, -107, 32, -124, -10, 110, 41, 1, 98, 76, -32, 68, -7, 94, -2, -113, 84, -15, -44, -104, -27, 54, 7, -10, 55, -20, 108, -16, 50, -109, 60, -71, -96, 62, 58, 125, 72, 31, -12, 80, -30, -41, -91, -94, -80, -4, 94, 68, -42, 38, 68, -103, -80, 73, 78, 102, -91, 54, -6, -20, -4, -124, 52, 1, 48, 51, 8, 53, -33, -6, -84, -90, -1, -13, -35, -73, -70, -91, -60, -5, -118, -124, 10, 38, 2, 21, -18, -95, 60, -101, 57, 102, -25, 126, -68, 114, 100, 8, -29, 47, 106, -112, 90, 99, 102, 112, -96, 76, 56, -18, -36, 28, -48, -69, 58, -126, -56, 92, 28, -44, 85, 100, 67, -29, -22, -43, -25, -121, 72, 40, 5, 20, -27, -69, 83, -120, 117, -69, 10, -102, -43, 38, 105, 12, 58, -34, -9, 109, -127, 33, 54, -25, -17, -66, 103, -84, 64, -115, -88, 125};
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
    msg.setTimeStamp(0.4586456977514447);
    msg.setSource(20262U);
    msg.setSourceEntity(49U);
    msg.setDestination(45599U);
    msg.setDestinationEntity(40U);
    msg.type = 227U;
    msg.speed = 48109U;
    const signed char tmp_msg_0[] = {-49, -72, -113, -55, 42, -56, -67, 114, 121, 49, -117, -125, 38, -39, 89, -64, -98, 97, 71, -92, 102, -51, -95, -113, -20, -108, -96, 38, -19, -50, -57, 25, 26, -11, 91, 89, -37, -82, -110, -36, -48, -64, -89, 21, -7, -24, -42, 44, 118, -98, -113, -3, -32, -102, 56, 13, 73, -113, -97, 126, -113, 18, 99, -28, 16, 71, -10, 56, -36, 117, 27, 51, -111, -99, 25, -98, -57, -105, 21, -99, -127, 28, 66, -125, 85, 61, 93, 8, -91, -6, 34, 69, 109, -60, -112, 42, 53, 113, -44, -106, -64, -16, 49, -83, -29, 69, -2, -123, 19, -74, -80, -39, -99, -19, -12, 85, 91, 104, -90, 15, 48, -86, -126, -16, -83, -90, 86, 2, -38, 118, -27, 1, 1, -91, -120, -23, -128, 48, 83, 86, 104, -125, 73, -61, -10, -49, -8, -48, 69, -60, -17, 70, 35, -106, 120, -120, 29, -115, 65, -100, -113, 67, 61, -119, -69, -76, 29, 102, -7, -70, -111, -122, -58, 28, -87, -112, -53, -57, -84, -85, 73, 115, 56, 41, -30, 108, 95, -32, -78, 80, -23, -59, -96, -25, 63, 30, -66, -82, -21, 3, 60, 102, 119, 66, -14, -43, -78, 55, 123, -12, 35, 105, 76, -72, -102, 27, -75, 125, 92, 92, -39, 29, -38, -95, 59, 49, 122, 115, 38, 84, 7, -102, 82, -108, 50, -89, 106, -25, 0, -112, -12, 124, 0, -105, -120, -112, -29, 90, 6, 69, 74, 16};
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
    msg.setTimeStamp(0.5206929628409294);
    msg.setSource(8561U);
    msg.setSourceEntity(205U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(80U);
    msg.type = 91U;
    msg.speed = 11517U;
    const signed char tmp_msg_0[] = {99, 122, -73, -81, 53, 31, -55, -69, -119, -98, 72, 105, 92, -47, -89, 101, -92, -50, -100, -81, 126, -73, -104, -114, 85, -88, 48, 14, 100, 14, -43, -29, 23, -96, -20, 90, -65, -127, -114, -83, -78, -104, -70, -22, 60, -59, 95, -9, -21, -72, 65, -47, -109, 15, 4, -4, -19, -87, 121, -37, 119, 70, 124, 85, 11, 126, -104, -110, 9, 103, -36, 48, 26, -27, 53, -22, -115, 37, -34, -111, 29, 120, 39, 48, -87, 47, 117, 31, 4, 19, -72, -10, -17, 91, 0, -38, 74, 50, 65, 75, 122, -85, -18, -113, -49, -28, 9, -40, -76, 14, -64, 18, -59, 5, -43, 92, -25, -2, 22, -58, -72, 51, 91, -97, -78, -19, 27, 110, -27, 114, -53, 37, -30, -2, -37, -10, -12, 114, 99, -12, 2, 19, -109, -26, -17, -68, 50, -62, 45, 35, 25, 54, -14, -46, -76, 72, 104, -64, -18, -64, 86, -101, 62, 32, 24, -5, -20, -17, -70, -12, -91, 46, -119, -81, -96, -112, 57, -128, 28, 7, -35, -52, 80, -70, -120, 2, -64, 14, -24, 50, 83, 2, -14, 45, -87, 78, -108, -89, 94, -123, -38, 10, 84, 49, 22, 50};
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
    msg.setTimeStamp(0.3988247741826838);
    msg.setSource(8101U);
    msg.setSourceEntity(72U);
    msg.setDestination(61370U);
    msg.setDestinationEntity(78U);
    msg.op = 153U;
    msg.tas2acc_pgain = 0.329087672861604;
    msg.bank2p_pgain = 0.8135141786093123;

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
    msg.setTimeStamp(0.358383266249117);
    msg.setSource(35139U);
    msg.setSourceEntity(229U);
    msg.setDestination(61646U);
    msg.setDestinationEntity(228U);
    msg.op = 52U;
    msg.tas2acc_pgain = 0.6353852838401916;
    msg.bank2p_pgain = 0.8415660960075294;

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
    msg.setTimeStamp(0.8746640265379275);
    msg.setSource(4031U);
    msg.setSourceEntity(56U);
    msg.setDestination(17882U);
    msg.setDestinationEntity(56U);
    msg.op = 33U;
    msg.tas2acc_pgain = 0.9956260124235594;
    msg.bank2p_pgain = 0.3662549909498646;

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
    msg.setTimeStamp(0.5530372033258252);
    msg.setSource(14439U);
    msg.setSourceEntity(166U);
    msg.setDestination(37346U);
    msg.setDestinationEntity(245U);
    msg.available = 2417781103U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.756562597119151);
    msg.setSource(61211U);
    msg.setSourceEntity(123U);
    msg.setDestination(8108U);
    msg.setDestinationEntity(156U);
    msg.available = 4267686008U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.271566259470272);
    msg.setSource(41874U);
    msg.setSourceEntity(97U);
    msg.setDestination(25877U);
    msg.setDestinationEntity(180U);
    msg.available = 3239685536U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.07538399405217455);
    msg.setSource(21495U);
    msg.setSourceEntity(187U);
    msg.setDestination(26459U);
    msg.setDestinationEntity(98U);
    msg.op = 128U;
    msg.snapshot.assign("KKSKJTNHEZWJNDVENXQBPEBVCFKOYPQMXIVLDPVAUFCQZG");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6339765792306477;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 7253U;
    tmp_msg_0.custom.assign("VOYCPEZWGBNVVYHAZFSVTHZDUDHBTOGYZMUUEJQZJEGXMXWWHQPQLSDGBFJLXCGGQZMYCSUVDWFPETRDHFUZDWJNHETLJCKQNNESMFISETMSDTQFOPSLCXVDYPWMYAKILMZERGNXPKYUQKJVHOFHOINHXJGFKXXCSOR");
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
    msg.setTimeStamp(0.6481893691667373);
    msg.setSource(4890U);
    msg.setSourceEntity(163U);
    msg.setDestination(10555U);
    msg.setDestinationEntity(226U);
    msg.op = 93U;
    msg.snapshot.assign("YESHFPLZYFIDRJFBZYKLBCCIGHOSUXKDUQHWOFBFYU");
    IMC::ManeuverDone tmp_msg_0;
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
    msg.setTimeStamp(0.9095491714588302);
    msg.setSource(42440U);
    msg.setSourceEntity(245U);
    msg.setDestination(15452U);
    msg.setDestinationEntity(132U);
    msg.op = 210U;
    msg.snapshot.assign("NXZJERLTWJZQMGWEDLEOOAXFCMDJECZOWZNCRZVVIRPNEIJHUYMZBDABTDNEFISAQB");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.7343320013289483;
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
    msg.setTimeStamp(0.08440571570481747);
    msg.setSource(59874U);
    msg.setSourceEntity(229U);
    msg.setDestination(14373U);
    msg.setDestinationEntity(84U);
    msg.op = 145U;
    msg.name.assign("UTYVUQHKGFXMYUDJUTIXBEPZUZVTYH");

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
    msg.setTimeStamp(0.13412824931807643);
    msg.setSource(48790U);
    msg.setSourceEntity(241U);
    msg.setDestination(1952U);
    msg.setDestinationEntity(177U);
    msg.op = 180U;
    msg.name.assign("TFYXJTEZFOBUXGIDQPKOGCVWMQKNXZUICPBOFHPFRXXREISKYIDOLSSYMEAODBCRSCHRLOVHEIXQTPGXWGHHGSJJDQUMCPQNKBHPQLVWCJRLTEZTTZOKMHDUQKZXQULWNPYFHADNUIWJPMRTVSEALBPNMFUSNSJHMCGKAKLFBZUAKGNUTYNABM");

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
    msg.setTimeStamp(0.26590713634776464);
    msg.setSource(55802U);
    msg.setSourceEntity(30U);
    msg.setDestination(31448U);
    msg.setDestinationEntity(120U);
    msg.op = 246U;
    msg.name.assign("DYUCOTOUARLAWBPRFWIFTKHEXAYQGVDPUWALMDGKOPTHKJXFQHNTENRMJIPC");

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
    msg.setTimeStamp(0.360534142941371);
    msg.setSource(60000U);
    msg.setSourceEntity(31U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(171U);
    msg.type = 72U;
    msg.htime = 0.6877727266957203;
    msg.context.assign("WXYOLYMLYKODHFPNMTHUCBNRQHPGXZJBKAOBKBTDOCMHKLMZDPXZENATTSDDZLWWOPBTIVSJXUVHEFGZPMDTEBXCQJCSCHR");
    msg.text.assign("OCXKECSETSRAQLPMBA");

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
    msg.setTimeStamp(0.3249995898513798);
    msg.setSource(20794U);
    msg.setSourceEntity(147U);
    msg.setDestination(11892U);
    msg.setDestinationEntity(87U);
    msg.type = 159U;
    msg.htime = 0.8707032030793738;
    msg.context.assign("YNJHQRGXUFCWZDSXJVCWIUKWAYMTFEAFPSKBAESHPMPLLBYLDPLMYQNIAKYKCIVDWZUEVRRHMOJTOKGHDTDLQRZTPJVQBDDDANHMYWYHVCOKRTWFBDVHQGJQPEAXZOZMVFOSFCBGZKSCGSEBTGSMUTRSWJAVQXLPLPIAQZQNWNOZHRXDKNONRYYTWLSRXJHFTGICUKABWTXOBUIINUNVOEH");
    msg.text.assign("WSGVOGJQNTYYKUGUVXVBHWBXFSTJCRYJVMUZCQCVDKATLQTFYPISMNNMBDJYKHUKZXOTRTDIBCINOSLPJAC");

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
    msg.setTimeStamp(0.33311053031262694);
    msg.setSource(23288U);
    msg.setSourceEntity(64U);
    msg.setDestination(25943U);
    msg.setDestinationEntity(77U);
    msg.type = 132U;
    msg.htime = 0.22577323491257162;
    msg.context.assign("WVILWWEKRIQLVZOCBPTAMYIUEJGSDHHIHJBPDPYRQVQRKPNQAZLZKUWCBMIXLXQYAFLLSDOSBRZTGOKGXABOJDRWNONKFSBGNVDEKZ");
    msg.text.assign("AOVPDPMZZWRCOMMGBUTEJXENYYBLQPFHRUARTLBXTHITEGMOUKXZKOUJGRHCSSYRPETFLTMAQSUZCQUZXHYSJDDWWWDKZVAJWCNFWPPLMDOYNEDBAKEATHBLSXGKEEPLXIKBNYUFDKDWIIBAFGJQNQCKCUJWDACWXPCLJYQXDOBGMPSFPZVLMRIETILRUFQKJNQVAIO");

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
    msg.setTimeStamp(0.5127734198174485);
    msg.setSource(19732U);
    msg.setSourceEntity(82U);
    msg.setDestination(21493U);
    msg.setDestinationEntity(135U);
    msg.command = 58U;
    msg.htime = 0.11219643662241507;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 156U;
    tmp_msg_0.htime = 0.9011020835374661;
    tmp_msg_0.context.assign("SVXYJVTGFHACVDQXJKKDRPGYYSODABWFIMLZETJBSNRQSIHXAZWLBYDFZVHVULIQLLCUVAWRTYSRLEXOBQJQSMPRJKUGWFWNXQJCZFMAOZFSKFVAJEPZLPMWURVWMNCMNMGUMIYMTHCZXJDTPNAQIYNELVDXNLOGAINUEFUKLFBEHTZIOCPGUSZVDOPRGPBERHXONDH");
    tmp_msg_0.text.assign("GKOBSJHSMTEEQDKQYJUOXRNDCZCFWOYVJMNKFTZVQHIHYNLYCVIKOXOCFAAPGUDQVVJWXYOCSDQQNWBYBNTJHLCPVLGEAVIVIYPSJUYOHIFBUBHENDXUKRALVPZJJXGDUTCGLFZLLRCWMRUSTEUGPAWMDOTNPHTAUBSNQWVXPWFLUFMAMIWZZMTSZBGNGGFYASBRQMKEBRRNGRKYXWDSOSHFCTZEKIJDAMQAEP");
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
    msg.setTimeStamp(0.8583242772732746);
    msg.setSource(22279U);
    msg.setSourceEntity(212U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(155U);
    msg.command = 254U;
    msg.htime = 0.8434299760778126;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 242U;
    tmp_msg_0.htime = 0.8732735460708035;
    tmp_msg_0.context.assign("QQEDLOXKCVXTHZNLQQBJWSDCGFIVQVPDAFWTTJEVFWDVQLJXSPHFIDJRDNFKDTSRCYZGUYVUWUWGGZJLONWUGWJLAKHVYUCSSPZKBDKLQHGPTDIXOROZSTIYRIMLRNMYFCXL");
    tmp_msg_0.text.assign("BTCMODZSMTFHGZGHWBYJYKQUKXZOQGBIYAHQUGJLJHWDFGFWDCBODBTCYJPFZBYEPLHIQQCRLAYZWFKVAKNYXZCEAVCEALINNXPNZRMBIRKLGOHXJNRERGNUKUXCATSFXJCIDSAUPJYWMRNDIUCVUWSNHQXFRKOJLSVELQGSELBTCMNITTAOPHXSZTEINAOQWEP");
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
    msg.setTimeStamp(0.7020439828269135);
    msg.setSource(40816U);
    msg.setSourceEntity(92U);
    msg.setDestination(49014U);
    msg.setDestinationEntity(220U);
    msg.command = 176U;
    msg.htime = 0.7104298706971275;

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
    msg.setTimeStamp(0.6614281780211653);
    msg.setSource(50400U);
    msg.setSourceEntity(170U);
    msg.setDestination(64507U);
    msg.setDestinationEntity(95U);
    msg.op = 246U;
    msg.file.assign("AJONYHWDDOBDIXKNJVEZHSQQTXOOAFEUVWBQFCMHNTIWOLZCVKUNYDPYKRRNBZHSEIDRMORTXAZASTLCCCYFIZKRDEFXNYFXPCCAIWNC");

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
    msg.setTimeStamp(0.021745407040732356);
    msg.setSource(36711U);
    msg.setSourceEntity(141U);
    msg.setDestination(34940U);
    msg.setDestinationEntity(165U);
    msg.op = 147U;
    msg.file.assign("TDENZCAXSQWOTTGFVHUOIJWYXUEFWYJRRPBEBRZWIGLNNRUCUUSXRPSWKZYHAEBMDUHRCVQXOQJXGZLYWZEXEYKFJLOJPXIDVVTCLGEOMSLPIQWJFTLLXYNIMNFWSHJKC");

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
    msg.setTimeStamp(0.5898983357591848);
    msg.setSource(26710U);
    msg.setSourceEntity(78U);
    msg.setDestination(8733U);
    msg.setDestinationEntity(126U);
    msg.op = 124U;
    msg.file.assign("DJXQUMJPZKHTWAXKMGYEXIBHEBFQKYFQVEAESVGMHTARZCGUATPJBFRJQNUQVPWMCWLIKOAEPUEJLVXFRDUZLDVREEFITYBXGZSONWJKRWNXYMQVHCCZQSWLRGVWBSINPODCCWNBHTABIKHCVLGFGCUOJKDBQUIAZTMOFSQYZFSSOASPJJLVLTTOLGYDZVRNYCNIPHZNPHMDPPGNLQTESUMTHMKBJRAYDHRUOIFYXRCBMDOLADEXWYUFKXK");

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
    msg.setTimeStamp(0.9933378346573584);
    msg.setSource(23206U);
    msg.setSourceEntity(173U);
    msg.setDestination(49696U);
    msg.setDestinationEntity(19U);
    msg.op = 252U;
    msg.clock = 0.48459018254446906;
    msg.tz = -53;

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
    msg.setTimeStamp(0.20034155448602076);
    msg.setSource(42974U);
    msg.setSourceEntity(192U);
    msg.setDestination(695U);
    msg.setDestinationEntity(179U);
    msg.op = 7U;
    msg.clock = 0.9218163736327782;
    msg.tz = 46;

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
    msg.setTimeStamp(0.5504413810333035);
    msg.setSource(56966U);
    msg.setSourceEntity(125U);
    msg.setDestination(30886U);
    msg.setDestinationEntity(98U);
    msg.op = 228U;
    msg.clock = 0.5292972763879591;
    msg.tz = -66;

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
    msg.setTimeStamp(0.8988018266825083);
    msg.setSource(5714U);
    msg.setSourceEntity(136U);
    msg.setDestination(15578U);
    msg.setDestinationEntity(77U);
    msg.conductivity = 0.5774364291184314;
    msg.temperature = 0.6217386858750668;
    msg.depth = 0.30712952605886035;

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
    msg.setTimeStamp(0.5423525274988987);
    msg.setSource(13136U);
    msg.setSourceEntity(206U);
    msg.setDestination(30922U);
    msg.setDestinationEntity(243U);
    msg.conductivity = 0.42566528076317145;
    msg.temperature = 0.03445419844871456;
    msg.depth = 0.0035910962078995468;

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
    msg.setTimeStamp(0.5170347971804862);
    msg.setSource(60829U);
    msg.setSourceEntity(229U);
    msg.setDestination(13650U);
    msg.setDestinationEntity(34U);
    msg.conductivity = 0.32925099919951406;
    msg.temperature = 0.9610663697558627;
    msg.depth = 0.10109475362373421;

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
    msg.setTimeStamp(0.6988128830893783);
    msg.setSource(40173U);
    msg.setSourceEntity(28U);
    msg.setDestination(33906U);
    msg.setDestinationEntity(69U);
    msg.altitude = 0.607860130317542;
    msg.roll = 50436U;
    msg.pitch = 38054U;
    msg.yaw = 6039U;
    msg.speed = -25867;

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
    msg.setTimeStamp(0.7936671149629643);
    msg.setSource(50327U);
    msg.setSourceEntity(64U);
    msg.setDestination(3003U);
    msg.setDestinationEntity(67U);
    msg.altitude = 0.7707436473191012;
    msg.roll = 56527U;
    msg.pitch = 37380U;
    msg.yaw = 59370U;
    msg.speed = 25705;

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
    msg.setTimeStamp(0.6278818738286333);
    msg.setSource(13173U);
    msg.setSourceEntity(16U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.9197525783775774;
    msg.roll = 24986U;
    msg.pitch = 40470U;
    msg.yaw = 54950U;
    msg.speed = -438;

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
    msg.setTimeStamp(0.5194548748414952);
    msg.setSource(23756U);
    msg.setSourceEntity(79U);
    msg.setDestination(23961U);
    msg.setDestinationEntity(27U);
    msg.altitude = 0.39360239774500017;
    msg.width = 0.6540685773912946;
    msg.length = 0.7684538438546082;
    msg.bearing = 0.4047239093070504;
    msg.pxl = 12092;
    msg.encoding = 64U;
    const signed char tmp_msg_0[] = {-19, 34, -89, 92, -71, -55, 57, -41, 123, 85, 53, -8, -17, -98, 5, -70, 32, -119, -52, 16, -115, -3, 21, 31, 19, -44, 69, 54, -4, -98, 103, 85, 69, -18, 90, 21, -127, 75, -96, 90, -97, 21, -59, -52, -127, -92, -83, -122, -106, -65, 64, 78, 67, -114, 40, -124, -39, 72, 46, 66, -44, -64, -91, -21, -46, -51, -96, -54, -25, -67, 66, 123, -113, 37, -67, 72, 62, 112, -93, -63, 14, 20, 40, -79, -114, -9, 17, -108, -20, 121, -83, 102, -2, 120, 7, -69, 71, -95, 18, 57, 77, 83, 114, 105, 54, -51, -44, -66, 95, -115, -70, -31, 46, 88, -119, -57, 16, 121, -76, -120, 113, -56, -46, 92, 36, 11, 80, 93, -57, -122, -56, -65, 108, -64, -22, 102, -83, -45, -17, 90, 102, 50, 53, -66, -88, 86, -1, 80, -79, 62, -25, -24, 53, -105, 71, 2, -88, 86, 109, -31, -88, -11, 20, -74, 124, 38, -96, 58, 26, 20, -50, 16, 113, 4, -7, 0, -46, 80, -93, 53, 48, 114};
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
    msg.setTimeStamp(0.1970189396212806);
    msg.setSource(31335U);
    msg.setSourceEntity(106U);
    msg.setDestination(37175U);
    msg.setDestinationEntity(185U);
    msg.altitude = 0.5553605803673125;
    msg.width = 0.8696852370028191;
    msg.length = 0.27388916261487073;
    msg.bearing = 0.799689838661838;
    msg.pxl = 13450;
    msg.encoding = 253U;
    const signed char tmp_msg_0[] = {-48, 20, 29, -38, -22, -127, -25, 47, 56, 24, 44, 69, -89, 113, 65, -54, 0, -46, -15, -102, -18, 1, -1, -73, -56, 53, -99, 103, 112, -51, 61, 24, 0, -125, 98, -75, 114, -49, -95, 119, -91, 34, -60, -55, -115, -80, -53, -49, -90, -127, -53, 53, -116, -2, -53, 116, 16, 0, 97, 12, 33, -67, 80, -99, 68, 65, -79, -27, 13, -26, -126, 40, 109, 94, -116, 49};
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
    msg.setTimeStamp(0.5970222224067149);
    msg.setSource(1724U);
    msg.setSourceEntity(178U);
    msg.setDestination(2119U);
    msg.setDestinationEntity(127U);
    msg.altitude = 0.13226722227863885;
    msg.width = 0.9074746135107714;
    msg.length = 0.7000790940338231;
    msg.bearing = 0.2542374293829863;
    msg.pxl = 29505;
    msg.encoding = 106U;
    const signed char tmp_msg_0[] = {-13, -95, 18, 126, 90, -101, 26, -53, 113, 71, -77, 90, -80, -67, -35, -29, -33, 38, -80, 22, -87, 33, 1, 102, -118, -79, -81, -57, 100, 69, 55, 47, -69, 31, 102, -43, -18, 37, 38, -116, -69, -124, 50, 28, -94, -45, -75, 43, 78, -53, -18, -77, -78, -97, -108, -62, 77, 100, 46, 78, 116, 40, -16, 44, 61, -76, 111, -83, 125, -122, 98, 5, -52, 123, -102, -96, -5, 111, 47, -119, 37, 119, -56, -30, 47, -119, 9, -69, -11, 84, -94, 10, -122, -33, -89, 99, 113, -128, 92, -60, -110, -6, 0, -7, 47, -60, -76, -25, -96};
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
    msg.setTimeStamp(0.4063665969408551);
    msg.setSource(55178U);
    msg.setSourceEntity(244U);
    msg.setDestination(20598U);
    msg.setDestinationEntity(212U);
    msg.text.assign("AMHBKOGJHYHNMCTSQULQSHTUETZFSOCTANJJPYSGRLLIPQKBUCVIPBGUHJBFVBRZCAYCDZVOVVLMKKQRDLAXMKSVZGDWFVJMUPWMEEPUFGZPSCFLNIIHZNVBWOAEZLFFEIMRD");
    msg.type = 137U;

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
    msg.setTimeStamp(0.7854520388937936);
    msg.setSource(32379U);
    msg.setSourceEntity(250U);
    msg.setDestination(14466U);
    msg.setDestinationEntity(107U);
    msg.text.assign("BQMDYPKOOLPUVHJXGDDHBZGOCMUQKTBIGTZUCHHBYSJXWSLXNRJQEFTUMNVICWQFWYBTCVGRQEWGQMKLKEHBDZGDSZTYFLZFPVWSLHTAMJVECIXAQFHVZCOUKLPJYYCDNQEGQXVTODJFDAANOBIYXGMEXMDHXPORRLKOVOPGOCP");
    msg.type = 104U;

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
    msg.setTimeStamp(0.5727334169127756);
    msg.setSource(22498U);
    msg.setSourceEntity(3U);
    msg.setDestination(49522U);
    msg.setDestinationEntity(134U);
    msg.text.assign("HNEOQVXJEUJGVODCHKXGBTXBILYJKKQHUOSFIXSDREOQAHDHUPNRFTWMGRFPOCZCQFJHXCKZCJVYDXACIHAHUPORSZWAMRFPDDGEAWCNNMGZKXIVFMYGMKCUWPKXVWDEACRVIZKTNMZSYY");
    msg.type = 64U;

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
    msg.setTimeStamp(0.6340863312307062);
    msg.setSource(47032U);
    msg.setSourceEntity(174U);
    msg.setDestination(156U);
    msg.setDestinationEntity(185U);
    msg.parameter = 242U;
    msg.numsamples = 83U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 780U;
    tmp_msg_0.avg = 0.5463013033152337;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8904583426528004;
    msg.lon = 0.2279727307913122;

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
    msg.setTimeStamp(0.17773604870940152);
    msg.setSource(10015U);
    msg.setSourceEntity(235U);
    msg.setDestination(310U);
    msg.setDestinationEntity(111U);
    msg.parameter = 125U;
    msg.numsamples = 107U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 3086U;
    tmp_msg_0.avg = 0.2935123570765267;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7591949883463681;
    msg.lon = 0.7654528343729207;

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
    msg.setTimeStamp(0.728008016023759);
    msg.setSource(61805U);
    msg.setSourceEntity(123U);
    msg.setDestination(4526U);
    msg.setDestinationEntity(150U);
    msg.parameter = 165U;
    msg.numsamples = 33U;
    msg.lat = 0.2538714256912369;
    msg.lon = 0.8603055236941906;

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
    msg.setTimeStamp(0.27407333242080956);
    msg.setSource(63344U);
    msg.setSourceEntity(177U);
    msg.setDestination(15541U);
    msg.setDestinationEntity(21U);
    msg.depth = 28582U;
    msg.avg = 0.32776418161418364;

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
    msg.setTimeStamp(0.7295282335594174);
    msg.setSource(20404U);
    msg.setSourceEntity(19U);
    msg.setDestination(64406U);
    msg.setDestinationEntity(239U);
    msg.depth = 52270U;
    msg.avg = 0.24923417977678908;

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
    msg.setTimeStamp(0.8511224690462977);
    msg.setSource(3292U);
    msg.setSourceEntity(15U);
    msg.setDestination(51034U);
    msg.setDestinationEntity(12U);
    msg.depth = 17972U;
    msg.avg = 0.004251898362117035;

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
    msg.setTimeStamp(0.8740080208048021);
    msg.setSource(54583U);
    msg.setSourceEntity(132U);
    msg.setDestination(5200U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.307535634612207);
    msg.setSource(11295U);
    msg.setSourceEntity(75U);
    msg.setDestination(35103U);
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
    msg.setTimeStamp(0.35959626797638145);
    msg.setSource(30814U);
    msg.setSourceEntity(158U);
    msg.setDestination(19682U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.4294702312771921);
    msg.setSource(1781U);
    msg.setSourceEntity(161U);
    msg.setDestination(60431U);
    msg.setDestinationEntity(13U);
    msg.sys_name.assign("JBNHNCVRISYOWHNWIRKYLLFGFMCXKEVGEMSHLFSJRSZZNSGZDTLDQHMAZNFMTSEZRPSKJZDFEYKUAPIGXXUYIGNBZQQODBTGQVOKXMBVVNXVQHHARHQVWV");
    msg.sys_type = 230U;
    msg.owner = 34929U;
    msg.lat = 0.6321623470767819;
    msg.lon = 0.9021345291786935;
    msg.height = 0.27556366115498077;
    msg.services.assign("FSQTNJSQUYTTYHKZCZEYXMYEAGPKVKKCNAYJXNFTDCFOIHWLDSDTEXJHYRDZRCIHPDNDKWMFGRQAOMESJWBVLNGABZESNIBVBF");

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
    msg.setTimeStamp(0.9135021957177523);
    msg.setSource(36958U);
    msg.setSourceEntity(72U);
    msg.setDestination(9777U);
    msg.setDestinationEntity(234U);
    msg.sys_name.assign("PMRHCIVSJXGBSKQWKIPAJQDHNPOJZHUKDOKMXQIQNFHAIPETPRZVHHCSZP");
    msg.sys_type = 137U;
    msg.owner = 43252U;
    msg.lat = 0.5572934414230483;
    msg.lon = 0.44241994508482474;
    msg.height = 0.31711338835480507;
    msg.services.assign("UYJGYIPBQSEPSDJVUMABFXFCEXPTLELYPQOCBCGBXPGEUZOJJWHGVOTZUAKIW");

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
    msg.setTimeStamp(0.24137858876442586);
    msg.setSource(60975U);
    msg.setSourceEntity(18U);
    msg.setDestination(65139U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("RNUKRRRIQDGZOWHVFOJWUVGIXZRLOZHQSPBRMETKGQIKLOCSZNDHMTTMXAAUCGVUUFSCYFTCDKMCJFAXWTDJCBMOEFJKRBELPZXPAUYVVDSSQYZIEOTGKTBQVAIQXKJXQQEJZXOCAKFJRDSB");
    msg.sys_type = 104U;
    msg.owner = 14820U;
    msg.lat = 0.6299461646600616;
    msg.lon = 0.620814806694298;
    msg.height = 0.1548154566194665;
    msg.services.assign("WXICPSXNQIRFUHFPDVOLUIQYLYWXJMMMTONSCPEFEZHDQKABDGNPSQJAOCCLCRGUFVRIVEZEJWEXPBRZDNHYNOCHALOUEOGXSIWHFWTZLFM");

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
    msg.setTimeStamp(0.6663137731778547);
    msg.setSource(64708U);
    msg.setSourceEntity(122U);
    msg.setDestination(55640U);
    msg.setDestinationEntity(202U);
    msg.service.assign("MEWBDSLVOJATOICLDTNXGHGBGKSQORGJECJVCZLUZHVITQZAVUUFTARTTXXACQAEUAJCMSVNWVVYJEVNYLXWHPSODWIOBBLIINTBKZGRKAYGIFWADWOQBRPONRDSYXFTEOQMRFPZKEWJSOFQGIEMBZJSEMJXCDMUPJFZMKXKHMCIYJKNQSQHHUSAXKFRIDPONYBZ");
    msg.service_type = 68U;

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
    msg.setTimeStamp(0.8696792546695675);
    msg.setSource(3807U);
    msg.setSourceEntity(236U);
    msg.setDestination(63366U);
    msg.setDestinationEntity(3U);
    msg.service.assign("RUXBCDUEGTQWNCHGOYABRSGQFXKTQNVXGWPOSUNMMQOTMYKXJUORJAZYUFZDYMYVBWLGBSETXJRZLZHHJICDYDZXBVJBFCIWAOQWQWDDVKBCIWZPSILIMQPLZSMHUBDTREEFEKOLJJTNIVVNAOEHPQHSUREJBKAHKNYPFTCGAHSZACTIWRKOSPVDZNMRIKPJUQRXDXYXNUAPMZRLOCALFEYHWJTKFBPGPOVLLAWMULGIYSIGXFF");
    msg.service_type = 66U;

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
    msg.setTimeStamp(0.3661442952667331);
    msg.setSource(48765U);
    msg.setSourceEntity(46U);
    msg.setDestination(36394U);
    msg.setDestinationEntity(57U);
    msg.service.assign("XLTNUNBLEQTHLOIEHLPKGVXGEXHMENUZUEYAROPJWPVKCTGHFLQVXWXHCGGZVWWBRSNCSTOYDPFISVUBRJFUAMQSOZRRTRYSUJWZCQVWVSCDJJSCEHBCQDUXMLEOWATZUOSOPDBYYCYMLOKCAKEGQSJDZREUHXJGKQEZYHAAKOMBNAAKTCJDXMOXLFPPIIYZKQBWNMF");
    msg.service_type = 119U;

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
    msg.setTimeStamp(0.27259514331194223);
    msg.setSource(45272U);
    msg.setSourceEntity(204U);
    msg.setDestination(34222U);
    msg.setDestinationEntity(194U);
    msg.value = 0.020512193837533;

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
    msg.setTimeStamp(0.4763751485352471);
    msg.setSource(30090U);
    msg.setSourceEntity(177U);
    msg.setDestination(54178U);
    msg.setDestinationEntity(163U);
    msg.value = 0.40096442804859533;

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
    msg.setTimeStamp(0.9824645818494548);
    msg.setSource(26879U);
    msg.setSourceEntity(167U);
    msg.setDestination(19476U);
    msg.setDestinationEntity(62U);
    msg.value = 0.060208748627486375;

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
    msg.setTimeStamp(0.30100072848789394);
    msg.setSource(44203U);
    msg.setSourceEntity(0U);
    msg.setDestination(50951U);
    msg.setDestinationEntity(114U);
    msg.value = 0.40457187992661237;

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
    msg.setTimeStamp(0.7789243398089813);
    msg.setSource(2947U);
    msg.setSourceEntity(167U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(251U);
    msg.value = 0.9300368707355278;

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
    msg.setTimeStamp(0.6922376933459763);
    msg.setSource(16228U);
    msg.setSourceEntity(170U);
    msg.setDestination(55923U);
    msg.setDestinationEntity(32U);
    msg.value = 0.52777030307847;

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
    msg.setTimeStamp(0.2220665522514783);
    msg.setSource(29669U);
    msg.setSourceEntity(138U);
    msg.setDestination(40894U);
    msg.setDestinationEntity(56U);
    msg.value = 0.3232006640978633;

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
    msg.setTimeStamp(0.06685571678849989);
    msg.setSource(9341U);
    msg.setSourceEntity(146U);
    msg.setDestination(4768U);
    msg.setDestinationEntity(145U);
    msg.value = 0.11840110754548883;

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
    msg.setTimeStamp(0.5420008292987749);
    msg.setSource(1454U);
    msg.setSourceEntity(195U);
    msg.setDestination(236U);
    msg.setDestinationEntity(136U);
    msg.value = 0.3557313403900093;

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
    msg.setTimeStamp(0.6513663849646547);
    msg.setSource(36191U);
    msg.setSourceEntity(129U);
    msg.setDestination(8232U);
    msg.setDestinationEntity(221U);
    msg.number.assign("CYTDXLSPBVSUUVPAPIXDDTHCFGJSBLKGNLYBGAUWZFNZRSAQAKTAHYKFOCSXABZCRNPGZEWAOGBELJOWKDGRQFCMTHSBKFLIDROJOVNWUEQXMIHTEEXONOHYEHVRDRMEHDXWFIQCGABNPIKTWVCMFAQ");
    msg.timeout = 49441U;
    msg.contents.assign("FEZXFIGPNCNAHDBGMCCEKQBOOPVOOISVMVILKEXTRJAWKIUFOYEKTHEZZNJZJSHHGJAPRVKRZKNDCONBXBGXBUUXWECJKFTLHAMNGBUYMTFGSRYXAULHLWINLUGCEWIZNMHSOAVPDGQYFUMVIVIDYRBZVDEBTDRUCLMQYSWQSXQQTCOWCVMRGLXQLQKHLJJTYZWWWXRPXQRKHPAZJPDPFIVP");

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
    msg.setTimeStamp(0.35244404933890827);
    msg.setSource(47764U);
    msg.setSourceEntity(197U);
    msg.setDestination(31777U);
    msg.setDestinationEntity(216U);
    msg.number.assign("UFRGEPYPBYPYVMFXFUHQVQGVLMRNPNPAIQSTOTZEMRZVGWOIKEBMCAAGLUCOBQHXOZBLSGGLACANIJBKSUUKQURXJIPWMXFWNHNLWGZIMTIEOTEZCFVRBQB");
    msg.timeout = 10140U;
    msg.contents.assign("ZBBJEYFNAPFLTDCLBMGURCKTKPVMELHGUVOHCTXWUMGQHVCNWFHZFVTFVIEXKIIOJZMWCEQZBTPONNDWFE");

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
    msg.setTimeStamp(0.7341661614594285);
    msg.setSource(2227U);
    msg.setSourceEntity(180U);
    msg.setDestination(39559U);
    msg.setDestinationEntity(1U);
    msg.number.assign("DDHPCYLTFFFCPRACTWSOUSJTKXZMPINJBZRWWMHKMQXLAZFIMZTVGARDMAYPRGUNJDFQIOSZ");
    msg.timeout = 1938U;
    msg.contents.assign("LMYTXTPMFFYOVPPZTJIKASOWHVGQUJSNVPSBBMYGFELNXGLRBEVGYOKHIYEFEECWKKFRXKJOVLAKHOLRKYEMEMMHNAMHRLQJHUGLCJUDJYVBWQRJDTZWCRSXULZCPWOAADQHISNITRWPONXTCDNYIBISVVZAJRDBWDQRUEZPZDSJWXCSLSXGUUAYDDUZFMXVHGGJINQTHOFRYZCFBKNIBANWTIIPCZZPQMXKWSB");

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
    msg.setTimeStamp(0.18698540508631878);
    msg.setSource(21423U);
    msg.setSourceEntity(111U);
    msg.setDestination(47738U);
    msg.setDestinationEntity(196U);
    msg.seq = 1380596171U;
    msg.destination.assign("AIWIPZLWQJHJBRQFEEDFWQSIAEV");
    msg.timeout = 52353U;
    const signed char tmp_msg_0[] = {29, 12, 29, -107, 107, -42, 51, -40, -54, 105, 51, -5, 123, -1, 66, 112, 55, -96, 110, -24, -75, -20, 101, 96, 80, -124, 36, -67, -18, -83, -36, 98, -42, 84, -46, 100, 72, -58, 4, -46, 58, -19, -38, 100, 98, 64, -56, -101, 64, 20, 93, -70, 50, -5, -62, -8, -87, 6, 80, 96, 27, -17, 112, -77, -16, -75, -62, 29, 8, 33, 109, 88, 108, 124, 116, 32, -113, -126, -68, 61, -110, -11, -86, 44, -61, -86, 83, -3, -70, -79, -123, 72, -55, -116, -78, 47, 91, 26, 16, 99, -120, -103, -90, 126, 43, 8, -74, -117, 21, -71, 100, 96, -127, 81, -14, 108, 16, 51, -104, -19, 75, 1, 16, -72, -75, 11, 121, -50, -112, 63, 73, -128, -87, 17, 104, -28, 67, -27, -88, 45, 113, -6, -69, -111, -26, 75, 125, 35, -123, -98, 13, -88, 32, 64, -16, 41, 42, -96, 84, 28, 4, -84, 56, -55, 54, -8, 58, -73, 2, -58, 28, -52, -90, 66, -26, -48, -122, -10, -111, -96, 28, -73, 110, -64, -32, 83, -69, -36, -97, -22, 86, 29, 66, -107, 11, 33, 119, 91, -65, 82, 64, 31, 110, -38, -23, -97, -57, -4, -69, -99, -120, 74, 110, 51, 115, 70, 60, -83, 68, 104, 68, -17, -110, 58, -74, 32, 11, -120};
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
    msg.setTimeStamp(0.47933139725412444);
    msg.setSource(51296U);
    msg.setSourceEntity(39U);
    msg.setDestination(17879U);
    msg.setDestinationEntity(175U);
    msg.seq = 3638036529U;
    msg.destination.assign("HVELPGPXIVKLUNICUOGOWHAGVCZBHJBQX");
    msg.timeout = 63170U;
    const signed char tmp_msg_0[] = {42, -34, 30, 112, 19, -92, -18, 120, -78, -84, 85, 96, 47, 81, -7, -12, -44, -17, 100, -40, -122, 12, -22, 22, -9, 33, -91, -27, -32, 18, -90, -92, -67, -87, 60, 22, 18, 69, 26, 91, -85, 123, -72, -4, -20, -64, -75, 52, -74, 11, -23, -31, 77, 91, -75, -51, -111, 82, 124, 73, 93, 34, 53, 50, 40, -116, -26, 38, -8, -24, -38, 14, -83, -59, 72, 108, 75, 74, 70, 120, 110, -120, -69, 106, -126, 11, 44, 43, -85, 89, 12, 82, 20, -4, 73, 23, 118, -63, -115, 42, -74, 67, -69, -9, -22, -18, -70, -125, -5, -15, 124, -118, 66, -101, -100, 2, -22, -44, 39, -88, -13, -125, 76, -92, 67, 51, 82, -27, -59, 108, -53, 68, 122, 119, -6, 46, -59, -51, 113, -77, -118, -100, 120, -85, 58, 55, 119, -101, 61, 57, -26, -73, -57, -94, -53, -6, 126};
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
    msg.setTimeStamp(0.3971367607856695);
    msg.setSource(45862U);
    msg.setSourceEntity(135U);
    msg.setDestination(2721U);
    msg.setDestinationEntity(131U);
    msg.seq = 778089662U;
    msg.destination.assign("SYBKEASZIHTROKQRMLZNHTNPBARMTWSBEXAHCALYQXCXJUQVFLWHLJCVBCGMHDECBFITORRMJFFNPXVFTRTHWZMIOVHOSYOIVXDCPGPUDJXKBXZLCGNKQYUPAQSGWGQDTDGPOSQFGONUZUJEIAGNTVBVOMWNU");
    msg.timeout = 3027U;
    const signed char tmp_msg_0[] = {124, -34, -53, -80, -73, 59, 27, -49, -53, -89, 2, -86, 116, 15, 109, -86, 20, -15, 10, -64, -93, -66, 74, 100, -63, -9, -77, -20, -11, -66, 87, -13, -83, 114, -7, -60, 18, -7, -34, 114, -16, 71, 0, -61, 37, 27, 121, -45, -77, -5, -94, 64, -107, -1, -33, -2, -78, 37, -32, -17, -123, -18, 123, -34, 26, -27, 82, -47, 29, 76, 82, -108, 21, -72, -61, 86, 74, 26, 93, 0, -59, 11, 31, -51, 55, 65, -52, 52, 32, 23, -10, -108, -55, 23, 61, -95, -76, -38, 114, 6, -39, -16, -29, -2, 64, 10, 43, 103, -7, 72, -62, 12, -33, -19, -30, 60, -113, -74, 126, -33, -58, 101, -34, -62, 52, 94, 123, -60, -73, -110, 20, -95, 61, -1, -62, -122, 49, -78, -23, -20, 5, 74, -13, 7, -44, -21, 0, 94, 108, -3, 71, -51, -119, -23, 40, 47, -80, -24, 19, -86, 41, 68, -123, 126, -54, -89, -113, -62, -114, -74, 0, -38, 55, 108, -58, 3, 98, -92, 34, -91, -32, 21, 44, -89, -57, 99, 105, 62, -67, 25, 111, -96, -106, 38, -92, 39, 83, 41, -12, 89, 67, -126, -95, -25, 62, 55};
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
    msg.setTimeStamp(0.1241619197890046);
    msg.setSource(64577U);
    msg.setSourceEntity(141U);
    msg.setDestination(470U);
    msg.setDestinationEntity(12U);
    msg.source.assign("VCWYATFENKKNQOBJZ");
    const signed char tmp_msg_0[] = {-51, -35, 13, 75, -82, -78, -82, -60, -36, -86};
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
    msg.setTimeStamp(0.8136423942074646);
    msg.setSource(24675U);
    msg.setSourceEntity(35U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(24U);
    msg.source.assign("EDCQEOCVWGPEOVHRDBZZFXNHVSGKYANBQULBASCMDEYNNYDOQQMOV");
    const signed char tmp_msg_0[] = {118, -91, 48, -115, 92, -21, -44, 78, 107, -24, -9, -77, -21, -88, 20};
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
    msg.setTimeStamp(0.6952106716731017);
    msg.setSource(33979U);
    msg.setSourceEntity(192U);
    msg.setDestination(34321U);
    msg.setDestinationEntity(143U);
    msg.source.assign("OIBSGTZNURPWHUWLFTOLBMTUXGUQHXIKZLCIETDFABJYNCEQAFGBQJZWHHWNUJDRCJNVMDJKIPPAWZUXOVDZAGYDSEFIPFPHYXKVVDSSIDRJRPDTBELYXFKRMRFJOOLEMNRZHPSDVPMKZKGKIBGGUVPQBCVNAYUJTHTNBPZTUMGSTSFKFECYIKBB");
    const signed char tmp_msg_0[] = {-97, 53, -81, 76, 91, 99, -6, 79, -34, 113, -11, -75, -23, -99, 65, -72, -57, -31, -20, -85, 105, -122, 85, 84, -75, -14, 32, -50, -19, -98, -43, 71, 93, 43, -100, 43, 63, -51, -105, -98, -37, 54, 87, 32, -3, 50, -2, 74, -36, 79, -114, 98, -117, 3, 82, 106, 11, -58, 16, 122, 6, 37, -37, -3, -80, -38, 21, 30, -120, 91, -80, -100, 17, -17, 44, -113, 115, -91, 97, 28, -70, 22, 22, 125, -4, 73, -99, -96, 63, 88, 115, -47, 100, 80, 79, 94, -9, 8, 27, 80, -31, -24, -83, -4, -57, -128, -118, 100, -68, 62, 89, 69, 67, -107, 49, -57, -57, -81, -101, -57, 28, -64, 51, 125, -42, -17, -78, -60, -108, -58, 49, -4, 37, 80, -49, -22, -125, -19, 7, 72, -17, 63, 66, -123, 97, 89, 72, 47, -36, 77, -125, 76, -86, 87, -106, -4, -45, 111, 59, -33, 90, -45, -37, -92, -77, -12, -22, -66, -86, -9, -61, -28, 59, -74, 115, -4, 93, -61, 82, 68, -28, 81, 24, -18, -27, 59, 2, -122, 79, -43, 49};
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
    msg.setTimeStamp(0.6410490299988503);
    msg.setSource(41120U);
    msg.setSourceEntity(98U);
    msg.setDestination(61009U);
    msg.setDestinationEntity(247U);
    msg.seq = 246203187U;
    msg.state = 192U;
    msg.error.assign("IDZYKYMRJGTPTDPYSAHRUKNEDYTBOQNGCRGIYJPQTPSSKLORQXGFIZOMRLMGCMZZZXCQEAFJFGDEQPXUSXTMZNCOVLNLHSVVOFHWTZKXTSMRGFXSJMNXTWQBDJFOOBNZJUYPLIWUVBRQYCRDPYHKUOWOACUDHKFPNWZEKPSVANMLIUIBLAKXWEUKBMBLLAEVEHCIAIBHVFVHVGIIYSTMWTJR");

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
    msg.setTimeStamp(0.6281751401441206);
    msg.setSource(16114U);
    msg.setSourceEntity(207U);
    msg.setDestination(48170U);
    msg.setDestinationEntity(181U);
    msg.seq = 1809302014U;
    msg.state = 33U;
    msg.error.assign("NCCOULAAHLSLQAENDWWPEWTVDOZHXWJHYBSDFKKHTCYZUREOAXLIBZIZDQTFXDVYEXNMJYF");

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
    msg.setTimeStamp(0.762965039119934);
    msg.setSource(5958U);
    msg.setSourceEntity(136U);
    msg.setDestination(6645U);
    msg.setDestinationEntity(39U);
    msg.seq = 2192754417U;
    msg.state = 254U;
    msg.error.assign("WDXHWLQZVQCAKRBLMIKPVSKHRTWZHITUKYPOTXAGWUSKSTXJMMOSLQUGULYRGACCLQSTEGRIOXQNZMTWODEYK");

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
    msg.setTimeStamp(0.05968386269685977);
    msg.setSource(26099U);
    msg.setSourceEntity(161U);
    msg.setDestination(2291U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("PKPHDRDRLFQNZGUXIZVJEXQQPLOZRMESVUTDGKOZXFOYMCNTYVHIWDMIHVTDEWMJLIGEHXFPYOCLSMTJSDAKYPGNCPWUWBMSPRKJRWCEJFTXLUGFUPJNABVMRHACTAVCXXIBVMGQRPZOFITONSY");
    msg.text.assign("UZPRPAZTYSKGLFKGNRNTOAPSBIYTJFWEVKVSSZWMLPUUPSZZVPXCYQDTYYUMIACFIWCIGCJIXLCQNLDQHKOGOJMPMGEEGKVRREJMFSWKQFDTYYKSQJ");

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
    msg.setTimeStamp(0.7118216044670297);
    msg.setSource(47916U);
    msg.setSourceEntity(159U);
    msg.setDestination(6293U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("KUIMAEBRCYSMKWLHTBKMOOVXRDPJQPZRYAMNBSFXXXWCUZKDLOFPFFOAUQVTPJDYZKGLRJWSUXHEZUGHDGKFVNBEKIYFQXDCQOEJHMBGEQUHCRANNNJYAGNIIGCHB");
    msg.text.assign("XHAGOILHOBJLQEBIQSOREDPDWTEKEOJWFNWCTGNKVURACDPLHTBYBQUWFHFMXRPJFC");

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
    msg.setTimeStamp(0.09369085732546945);
    msg.setSource(34999U);
    msg.setSourceEntity(178U);
    msg.setDestination(31139U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("JRFNMKHRVPLOGSFMFPDRBIWLINBSWELZEJWWILQVFKQOZTLGVGAQVSCXOGWLYXNSUOIMDUPQKARUSRHETNAXQRFSELMUWBMGKQCXUIJFDVCWOPDYNTVJPBZVDEHHCPXJZIHYGEXIEXDCTOHGZXSYBJEAIGPKBOXONXCIECDABFDMYBMPAAKYOZ");
    msg.text.assign("NRFCKUZMSZASZTMCGWIPATYQDALKDBSUWLLSVZYJHMEEADVJV");

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
    msg.setTimeStamp(0.508337384393235);
    msg.setSource(54681U);
    msg.setSourceEntity(208U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(100U);
    msg.origin.assign("RAMXCWXNQWYHTDFRILELKYMRSASNMCXGTFKYNSKPGEOUORZLCWCTVDUIILUWKCVH");
    msg.htime = 0.35139263983501867;
    msg.lat = 0.6514246886250228;
    msg.lon = 0.8360827714726269;
    const signed char tmp_msg_0[] = {37, 42, 56, 82, -81, -109, -18, -113, -40, -94, -117, -110, 7, -25, 18, -124, -108, 109, 57, 9, -33, -75, 19, -18, 62, -38, -101, 72, 28, 64, -42, 109, -13, -69, 30, -62, -55, 0, -86, 72, -38, 27, -71, -8, 21, 10, 95, 48, 107, -75, 64, -120, 45, 40, -44, 16, 86, -118, 75, -34, 21, 112, 31, 1, 26, -16, -102, -14, -128, 6, -47, 73, 2, 55, -22, -121, 67, -93, 41, -102, 104, 87, -11, 45, -12, 119, -3, 117, -29, -55, -97, 42, -6, -65, 88, -110, -127, -89, -105, 47, 112, -112, -8, -107, -83, -114, 116, 75, -2, -113, 22, 94, -36, 70, 109, -40, -50, 46, -22, 103, -113, -93, 79, 76, 43, 50, -62, 29, 65, 49, 80, -124};
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
    msg.setTimeStamp(0.1844304389343031);
    msg.setSource(39989U);
    msg.setSourceEntity(102U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("ODZAOSOMGUWCALTDRUACVVYO");
    msg.htime = 0.7180269571403801;
    msg.lat = 0.7903732074450913;
    msg.lon = 0.6408329162509249;
    const signed char tmp_msg_0[] = {65, -15, 113, -98, 123, 17, -94, -77, 45, -22, -92, -46, 123, -118, 78, -87, -98, -6, 33, 4, 12, -112, -111, 7, -121, 42, -90, 42, 47, 118, -52, 65, 93, 5, -86, -6, 110, 25, -32, -103, 29, -62, -29, 115, -84, -18, 70, 82, -60, -59, -43, 4, -117, 53, -57, 9, -121, -100, 70, 75, -4, -33, 119, -122, 35, -25, 5, 13, -92, 95, 103, 11, 86, 37, 54, 21, 57, 14, 120, -85, 125, -10, 7, -120, -111, -47, -97, 123, 106, -31, -115, 2, -10, 75, 115, 119, 39, -81, 117, 57, 111, 36, 95, 73, 4, 48, -47, 24};
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
    msg.setTimeStamp(0.3751768954500313);
    msg.setSource(20844U);
    msg.setSourceEntity(202U);
    msg.setDestination(16301U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("WHYPZLHSOQRRKKCYOGGCRQL");
    msg.htime = 0.6098328795735686;
    msg.lat = 0.6373158154144182;
    msg.lon = 0.9488476774696103;
    const signed char tmp_msg_0[] = {81, 79, -20, 107, -57, -83, 87, -71, -56, -94, -85, 44, 93, 38, -25, 74, 19, 9, -123, 86, -11, 42, -85, -128, 104, 93, -38, 119, -18, -41, -28, 6, 107, -115, 8, -54, 59, 38, -99, -20, -48, 124, -24, 87, 62, -22, 103, 85, -68, 64, 64, -53, 55, 3, 61, 28, 68, -105, -124, 25, -70, 108, -2, 14, 41, 72, 90, -83, 73, -52, 118, -87, -3, 114, -24, -117, 31, 4, 86, 96, 89, -124, -56, 92, 106, -17, -16, 17, 37, 67, -9, 29, 15, -115, 122, -62, 126, -127, -15, -97, 20, -96, 103, -108, -18, 124, -98, 30, 58, 107, -5, 56, -83, 93, 51, -118, 125, 48, -54, 82, 105, 116, -114, 14, 46, 56, 106, 93, -46, -37, -35, -103, 6, -16, -54, 1, 118, 2, -81, 80, -20, -23, -111, -65, -6, -32, 79, -15, -61, -111, 16, -48, 70, -87, 45, -98, 91, -29, -99, -112, -41, -61, 69, -111, -32, -26, -110, -107, -14, -37, -86, -111, 48, 35, -14, -123, -2, 29, -99, -1, 59, 59, -28, -108, -90, -45, 106, -123, 28, -112, 98, 31, -12, 117, 109, 115, -56, -48, 51, 95};
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
    msg.setTimeStamp(0.1005343183563745);
    msg.setSource(29624U);
    msg.setSourceEntity(25U);
    msg.setDestination(25500U);
    msg.setDestinationEntity(58U);
    msg.req_id = 4439U;
    msg.ttl = 48075U;
    msg.destination.assign("VDFBMSOQHQWXZTHRLIMNFGCFLOCTYHHTAPCPLKZMPFTGUCIWYUAZFTTQPCAZHRVKYEGBLWUJXASKROOYMSQRXJWTTXNCYPRZMCMYAHVDBKISD");
    const signed char tmp_msg_0[] = {30, 2, -5, 113, -63, -44, -26, 110, -83, -109, 1, 55, 25, 46, -106, -88, 7, 87, -119, -89, 40, -72, -78, 121, 30, 83, 116, -19, 80, 19, 53, 30, 18, -89, -109, 61, 3, 117, 61, 64, -96, 11, -47, 71, -31, 51, -98, -97, -126, -100, -40, -29, -40};
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
    msg.setTimeStamp(0.3618662697013114);
    msg.setSource(20158U);
    msg.setSourceEntity(90U);
    msg.setDestination(51982U);
    msg.setDestinationEntity(247U);
    msg.req_id = 1294U;
    msg.ttl = 63148U;
    msg.destination.assign("LWQLVBRQALDKUNITLVUFCZYEZKESVAWAUVYHUMWNJEJDRVTZGMIZSZXMX");
    const signed char tmp_msg_0[] = {23, 72, -123, -126, 51, 121, 44, 109, -4, 30, 81, 117, -119, -116, -12, 39, 83, -101, -28, -61, -25, 21, -39, 13, 59, 63, 120, -89, -47, 30, -69, -47, 114, 55, 43, 47, -45, 95, -13, -56, 39, 86, -17, 71, -77, -87, 3, -72, -1, 25, -74, -111, -13, -60, 7, 95, 98, -57, -27, -48, 88, 3, 74, -87, 32, 119, -49, 60, 51, -57, 76, 95, -104, 24, -63, -44, 31, 66, 91, 76};
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
    msg.setTimeStamp(0.20526328353281798);
    msg.setSource(55807U);
    msg.setSourceEntity(13U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(168U);
    msg.req_id = 13193U;
    msg.ttl = 32723U;
    msg.destination.assign("WAQYQTKIPGYLQITSZKIZODENVJUVWLOFSKMDDHMUIDJQIKFYVFEA");
    const signed char tmp_msg_0[] = {-27, -43, 34, 16, -53, 75, 54, 123, 43, -76, -98, -108, -91, 99, 32, -61, -70, 106, 26, 112, 0, -42, -119, 60, -78, 40, 85, -5, 54, 28, 71, 79, -101, -45, 2, 30, -128, -19, 110, 115, -67, 59, -115, -42, 24, -111, -75, -101, 116, -38, 0, -82, 114, 125, 55, 59, -65, 0, -106, -107, -52, 61, 106, -98, -61, 44, -104, -122, -84, 100, -59, -96, 62, -45, -92, -9};
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
    msg.setTimeStamp(0.19031981016233934);
    msg.setSource(28604U);
    msg.setSourceEntity(16U);
    msg.setDestination(56132U);
    msg.setDestinationEntity(173U);
    msg.req_id = 6113U;
    msg.status = 75U;
    msg.text.assign("LVAKNJVVRCIGMGACRGUKEQXTQXFNFEBKUMLGJDLYIYACDXWTOPPZWS");

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
    msg.setTimeStamp(0.8612681786719005);
    msg.setSource(61425U);
    msg.setSourceEntity(199U);
    msg.setDestination(30094U);
    msg.setDestinationEntity(115U);
    msg.req_id = 17984U;
    msg.status = 150U;
    msg.text.assign("RIODNXSYOTTFRZTZHKSUPDZBHOBMPEQLMTLFKVSNZDOASGEIYDKJAKXG");

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
    msg.setTimeStamp(0.8858932671621244);
    msg.setSource(15237U);
    msg.setSourceEntity(52U);
    msg.setDestination(9879U);
    msg.setDestinationEntity(234U);
    msg.req_id = 6469U;
    msg.status = 254U;
    msg.text.assign("FAVPFBPDRPLVFQH");

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
    msg.setTimeStamp(0.10077197871202137);
    msg.setSource(6906U);
    msg.setSourceEntity(77U);
    msg.setDestination(37211U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("RWRQSVIDKAJKTBNLXACDQGBLZVWEYASAOKWSAMOTBBEJKBDOSGETXJTYBGVHPZYQRJEDRZMYHXEIMVRCNWGFDUBZBJZPKMWANKOQEATSSQKU");
    msg.links = 405098293U;

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
    msg.setTimeStamp(0.6650826245897169);
    msg.setSource(21800U);
    msg.setSourceEntity(141U);
    msg.setDestination(46175U);
    msg.setDestinationEntity(60U);
    msg.group_name.assign("FZPNLAAKRRYBNSHCFJUSXAJCEQHGPPAQBXFLPZPLQJFTKUIIOZUIQMYDWOTULNDSDEMIRVPKMJWTMUVZAEVHBKKTYEDUZVY");
    msg.links = 3407795847U;

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
    msg.setTimeStamp(0.542669327863925);
    msg.setSource(12595U);
    msg.setSourceEntity(143U);
    msg.setDestination(23212U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("ZIJCISGOPDENUHANFBKWLFXVYVBBNPZUKGJULEGEZPBVKDCCQZOH");
    msg.links = 1195216737U;

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
    msg.setTimeStamp(0.11935537303609545);
    msg.setSource(44770U);
    msg.setSourceEntity(230U);
    msg.setDestination(47693U);
    msg.setDestinationEntity(109U);
    msg.groupname.assign("ODYWPNFGYJPZMGSBPLLEJHXUCRJJEEWDVIDMGDYBMNWUGNFQNCTNAHIJIAAKFBSWZVBLRELMBULBXYLIEWMKZHOPHWTKJNJGDXFBXCDUKFYIFAHXQNQHIDMSCPAWCU");
    msg.action = 60U;
    msg.grouplist.assign("ABMWYULPSPJZWLAUCUHHHRVCDOSWIOQENMYDJDNPVPWFLJYUXQRGKBLCFESWQVSDDJTIIXCKKPYQRPWISMOMQYNIRECZFTHNTXTMUGKJBHSSQ");

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
    msg.setTimeStamp(0.9368339824183842);
    msg.setSource(55923U);
    msg.setSourceEntity(55U);
    msg.setDestination(28806U);
    msg.setDestinationEntity(94U);
    msg.groupname.assign("PYXJUQRCMGFYJHBQZNHWVZALJXWXESPGVNATGBTAMSCOFVCSEFTJVHSBWJWRDMVVDXDTQQHYRPHJXOFSMOIYWRFKXTSKMJUQMNQCIYZRLZNZWAWLNQGGOEAWUBEHH");
    msg.action = 153U;
    msg.grouplist.assign("LWFNNICTHUKLQNKSVYWUBPZSGIWWHRDDAUOCEWMGWQHQDBUDWTTJSIVRIZQWTQOGTKQLUBVIRLJPQKBTBHTIKVCBSHUDJPYXOIBENHWFTOAPEOYRXOMJNYLHAQNZUPCXAFKLPMVCKNYGIZVPFAIYRXGPRJSAFULREXTPCVXMXUCOXVLSFEDDZEJDHESSYQJRCIBMLOB");

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
    msg.setTimeStamp(0.23678246414492465);
    msg.setSource(36058U);
    msg.setSourceEntity(98U);
    msg.setDestination(49590U);
    msg.setDestinationEntity(123U);
    msg.groupname.assign("MINVCREPBARIPAHFQULMXZFFHVOFAJKKIJSZKTCEQOGDWYUIDVVKPKCWZWQCMHTRCPAEKGHZZTHFYPHCIROUTHODROZTSZXVLOKGLBN");
    msg.action = 237U;
    msg.grouplist.assign("JDDIFBRETRXZAQOQXQJHIYMEPIZSAHZLHOFQWWYHUDRCSVGKQXGLLZMGUYYMEVERTNJOILUQYXCNYFSSOLSVYSOAZZNHJOYNTORYCUKIDCKQGQUEBHSTSVXJBZXXVVVBGTBNSSIWVTRGZ");

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
    msg.setTimeStamp(0.721969331752783);
    msg.setSource(41477U);
    msg.setSourceEntity(169U);
    msg.setDestination(64453U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8264371933152127;
    msg.sys_src = 57761U;

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
    msg.setTimeStamp(0.7820276175969336);
    msg.setSource(35279U);
    msg.setSourceEntity(43U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(177U);
    msg.value = 0.41827352015884534;
    msg.sys_src = 24754U;

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
    msg.setTimeStamp(0.017906703558658088);
    msg.setSource(10838U);
    msg.setSourceEntity(17U);
    msg.setDestination(186U);
    msg.setDestinationEntity(232U);
    msg.value = 0.026255446808107652;
    msg.sys_src = 53549U;

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
    msg.setTimeStamp(0.06912622736156071);
    msg.setSource(31539U);
    msg.setSourceEntity(144U);
    msg.setDestination(54785U);
    msg.setDestinationEntity(132U);
    msg.value = 0.16094241493729267;
    msg.units = 95U;

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
    msg.setTimeStamp(0.21190033242652973);
    msg.setSource(56781U);
    msg.setSourceEntity(89U);
    msg.setDestination(3868U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8569929746124324;
    msg.units = 252U;

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
    msg.setTimeStamp(0.7593535853040728);
    msg.setSource(13143U);
    msg.setSourceEntity(128U);
    msg.setDestination(57370U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9098544832943594;
    msg.units = 153U;

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
    msg.setTimeStamp(0.4193297645342554);
    msg.setSource(25621U);
    msg.setSourceEntity(84U);
    msg.setDestination(7377U);
    msg.setDestinationEntity(103U);
    msg.base_lat = 0.5982317872964649;
    msg.base_lon = 0.6824411778812182;
    msg.base_time = 0.6566491187987951;

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
    msg.setTimeStamp(0.2818395137688775);
    msg.setSource(8192U);
    msg.setSourceEntity(205U);
    msg.setDestination(12335U);
    msg.setDestinationEntity(1U);
    msg.base_lat = 0.3823523940792489;
    msg.base_lon = 0.6548934789515586;
    msg.base_time = 0.5601610924725282;

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
    msg.setTimeStamp(0.9970572387460237);
    msg.setSource(16993U);
    msg.setSourceEntity(154U);
    msg.setDestination(52155U);
    msg.setDestinationEntity(2U);
    msg.base_lat = 0.2530092438234065;
    msg.base_lon = 0.568094915177345;
    msg.base_time = 0.1924299867866608;

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
    msg.setTimeStamp(0.47642791497987713);
    msg.setSource(34572U);
    msg.setSourceEntity(50U);
    msg.setDestination(40136U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.5480201618328839;
    msg.base_lon = 0.22897553002522186;
    msg.base_time = 0.23442484318077605;
    const signed char tmp_msg_0[] = {-77, 100, -52, -1, 72, -8, 36, 117, -87, -71, -50, -15, -36, -48, -14, 4, -128, 0, 79, 58, 7, -122, -70, 72, 51, -51, -121, -78, -70, 68, 37, -54, -2, -88, -110, 21, 24, -60, 109, 16, 59, -112, 24, 64, -80, -59, 29, -67, -18, 47, 17, -106, -46, -3, -103, 93, 95, -17, -2, -66, -64, 2, -53, -29, 4};
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
    msg.setTimeStamp(0.9192001407389997);
    msg.setSource(51941U);
    msg.setSourceEntity(172U);
    msg.setDestination(20801U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.73316027217928;
    msg.base_lon = 0.17598305750445342;
    msg.base_time = 0.1647715129519821;
    const signed char tmp_msg_0[] = {-53, -105, -44, 73, -62, 77, -23, 119, 54, -40, 16, 81, -85, -82, 8, -32, 111, 88, 60, -34, 61, 101, -4, 19, -38, 39, 46, 77, 17, -32, -60, 122, -76, 104, 52, -109, -128, -67, 74, -117, 49, 38, 46, -96, 97, -37, -13, -79, 116, 23, 102, -17, 92, 6, -112, 124, 24, 126, 75, -66, -85, -39, -3, -112, 29, 93, -79, 77, -77, -58, 96, -62, 53, 44, 73, -16, -59, 23, 46, 76, 114, 60, -101, 112, -98, -11, -71, 68, 57, -115, -88, -73, 57, 15, -122, 30, -117, 108, -91, 118, 19, 75, -35, 77, 73, -107, 126, -113, 59, -50, 14, 64, 81, -29, 112, 8, -60, -39, 84, -47, 49, 95, 52, 4, 48, 73, -29, -11, 7, -12, -66, 20, -90, 96, -37, -97, 30, -11, -88, 3, 87, 71, -66, -45, 109, 20, -34, -122, -33, -100, 57, 118, -5, 96, 14, -125, 30, 46, -80, 35, -21, 126, -46, -94, 80, -105, 4, -51, -50, 100, -126, -44, -102, -56, -8, -35, 105, -61, -36, -101, 42, -104, -63, 65, -71, 39, -11, -67, 73, 88, 36, -19, 14, 37, 98, -102, 32, -117, 99, -104, -5, 25, -104, 41, 86, 125, 8, -12, 105, -102, -14, -118, 70, -12, -20, -36};
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
    msg.setTimeStamp(0.07980314086378082);
    msg.setSource(6722U);
    msg.setSourceEntity(118U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.0573300127942441;
    msg.base_lon = 0.691804481751279;
    msg.base_time = 0.5207802003523139;
    const signed char tmp_msg_0[] = {-122, 63, -93, 63, 98, 107, 25, -104, -99, 109, 3, -7, 23, -47, 38, 57, -105, 30, 46, 99, -25, -55, -71, -106, -81, 56, 34, 117, 46, 45, 11, -71, -17, -120, 37, 19, 16, 16, -10, 11, -108, 30, 92, -39, -6, -42, 23, -91, -43, -99, -104, -53, 112, 117, -112, 125, 28, 71, 54, 19, -101, 23, 32, 119, -23, 68, -101, -5, -90, -11, -125, -43, -43, 20, 2, 0, 30, -112, 46, 102, -111, 110, -16, -91, 85, 33, -90, 125, -18, -27, 29, 88, 25, -120, -106, 122, -55, -45, 68, 30, -69, 54, -122, -96, -111, -73, 30, -47, 61, 12, 103, 96, 68, 38, -39, -3, -128, 9, -90, 116, 27, 112, -90, 101, -10, 53, 117, 126, 94, 117, 110, -27, 44, 87, 4, -123, 3, 28, -82, 34, 22, 33, 91, 21, 112, 110, -18, -21, 83, -7, 108, -76, 45, -94, 11, 38, -68, 87, -70, 10, -15, 72, 38, 96, 122, 61, -118, 107, -57, 37, 114, 50, -27, 76, -91, 75, 105, 76, 56, -113, 119, -74, -8, 79, 49, 107, 47, 31, 93, 126, 113, 98};
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
    msg.setTimeStamp(0.9397997197996434);
    msg.setSource(21209U);
    msg.setSourceEntity(138U);
    msg.setDestination(5178U);
    msg.setDestinationEntity(36U);
    msg.sys_id = 1274U;
    msg.priority = 47;
    msg.x = 24240;
    msg.y = 32490;
    msg.z = -10114;
    msg.t = 18283;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.606908981327646;
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
    msg.setTimeStamp(0.5898074636155645);
    msg.setSource(24941U);
    msg.setSourceEntity(75U);
    msg.setDestination(12753U);
    msg.setDestinationEntity(117U);
    msg.sys_id = 11443U;
    msg.priority = 46;
    msg.x = 31613;
    msg.y = -23899;
    msg.z = -7669;
    msg.t = -2684;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.726511359705082;
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
    msg.setTimeStamp(0.8528136220770021);
    msg.setSource(50939U);
    msg.setSourceEntity(140U);
    msg.setDestination(40383U);
    msg.setDestinationEntity(28U);
    msg.sys_id = 35781U;
    msg.priority = 6;
    msg.x = -20328;
    msg.y = 2471;
    msg.z = -13112;
    msg.t = -20114;
    IMC::HomePosition tmp_msg_0;
    tmp_msg_0.op = 28U;
    tmp_msg_0.lat = 0.09898692035983359;
    tmp_msg_0.lon = 0.10333004639051713;
    tmp_msg_0.height = 0.09125193714633073;
    tmp_msg_0.depth = 0.5559346505132848;
    tmp_msg_0.alt = 0.1918800736763644;
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
    msg.setTimeStamp(0.36277773172649075);
    msg.setSource(46966U);
    msg.setSourceEntity(143U);
    msg.setDestination(7550U);
    msg.setDestinationEntity(208U);
    msg.req_id = 65320U;
    msg.type = 102U;
    msg.max_size = 12851U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.181853339468931;
    tmp_msg_0.base_lon = 0.3484036599672602;
    tmp_msg_0.base_time = 0.5953480565356316;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 25531U;
    tmp_tmp_msg_0_0.destination = 15673U;
    tmp_tmp_msg_0_0.timeout = 0.5294178449284929;
    IMC::GpioStateSet tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("BXZXHNAYJNFWWSYTDBISWZCNFCIOKQEPKRBVWTRQELCCXQKLPLQIGKTGOYLZPZTQELEPUIIFXQDUEVHLSRMZVRPDQIJEQRJLONCCYMHWLDIRLBYUSHGBFUJKDOSTGQNHHESUTBVZABCRFAUMNFYYZGUJBZWNOAOABKXHHAOJPOTNMMCXDVFSMGKEJGWIKWSM");
    tmp_tmp_tmp_msg_0_0_0.value = 41U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.5833729743276221);
    msg.setSource(39343U);
    msg.setSourceEntity(242U);
    msg.setDestination(49293U);
    msg.setDestinationEntity(228U);
    msg.req_id = 45461U;
    msg.type = 95U;
    msg.max_size = 63877U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8954392564657437;
    tmp_msg_0.base_lon = 0.4654642927603396;
    tmp_msg_0.base_time = 0.340135888462917;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 55170U;
    tmp_tmp_msg_0_0.priority = 42;
    tmp_tmp_msg_0_0.x = 8586;
    tmp_tmp_msg_0_0.y = 19901;
    tmp_tmp_msg_0_0.z = -14794;
    tmp_tmp_msg_0_0.t = 23760;
    IMC::HistoricSonarData tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.altitude = 0.4538536487075686;
    tmp_tmp_tmp_msg_0_0_0.width = 0.2309187970601596;
    tmp_tmp_tmp_msg_0_0_0.length = 0.7187469671829824;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.6736523581711287;
    tmp_tmp_tmp_msg_0_0_0.pxl = 27832;
    tmp_tmp_tmp_msg_0_0_0.encoding = 49U;
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-30, -47, -62, -80, 43, -37, 108, 15, -100, 102, -85, -2, -95, 111, 118, 68, 26, -99, -18, 107, -47, -26, -72, -71, -47, -128, -121, 109, 33, -16, 56, -71, -58, -60, -75, 16, -43, -71, -5, -95, -31, 43, 84, 7, -33, -83, -48, 114, -10, 25, -84, 126, 63, -103, -31, 98, -42, -37, -12, -56, 11, 51, 42, 55, -120, -15};
    tmp_tmp_tmp_msg_0_0_0.sonar_data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.9765684780234498);
    msg.setSource(21906U);
    msg.setSourceEntity(190U);
    msg.setDestination(18454U);
    msg.setDestinationEntity(20U);
    msg.req_id = 64463U;
    msg.type = 238U;
    msg.max_size = 37618U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.71705694587424;
    tmp_msg_0.base_lon = 0.508315995406587;
    tmp_msg_0.base_time = 0.8417121590758435;
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
    msg.setTimeStamp(0.28048340679709494);
    msg.setSource(9205U);
    msg.setSourceEntity(227U);
    msg.setDestination(63410U);
    msg.setDestinationEntity(104U);
    msg.original_source = 13829U;
    msg.destination = 24049U;
    msg.timeout = 0.6378480093428315;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5884370222808968;
    tmp_msg_0.beam_height = 0.7343786612672221;
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
    msg.setTimeStamp(0.02847313331839385);
    msg.setSource(918U);
    msg.setSourceEntity(249U);
    msg.setDestination(8773U);
    msg.setDestinationEntity(107U);
    msg.original_source = 31014U;
    msg.destination = 59529U;
    msg.timeout = 0.6137540721359385;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 39U;
    tmp_msg_0.op = 96U;
    tmp_msg_0.plan_id.assign("VDNRULVVCCSFTTAICYEKDMINXYIHNVROLYBUIPBXWWFTXCAMDACDLJKEKPPUUYQWEJDTYJFOMCKKSOBWCPCKNAZYLRPYVNTDJKEODWZPNRFEBXQQJGLRUYSPJGGHUIHMYMEAXQRCEMBXFBGQQTQQYCGDOFXHZZEOASHEUMWOABKZXMDZRWRPWIOXONHIVBGTGHKZAPLLPVTZNSQHBVAUGOLVRFBJJMSUNSJLJMWKLSQSHFXRUENIWVTGHIIG");
    tmp_msg_0.params.assign("VKEZOSMWHHSGXSVGYRQPMZIDREFIYWKLLQQSNHOYXHQIAUORXJYUAFATGHZVKTAWTWPDLJJGPKMCCHYNKQQMNCFZWATGUYOXCNWQREJQFCSEGPRZXYOPYMBIOVCMXBXWDOEKLJHZBVBUJAACCTBO");
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
    msg.setTimeStamp(0.2444820775546218);
    msg.setSource(34844U);
    msg.setSourceEntity(155U);
    msg.setDestination(974U);
    msg.setDestinationEntity(12U);
    msg.original_source = 1181U;
    msg.destination = 37009U;
    msg.timeout = 0.416463660421725;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 33373U;
    tmp_msg_0.avg = 0.19290516982624284;
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
    msg.setTimeStamp(0.10623896976046043);
    msg.setSource(6429U);
    msg.setSourceEntity(11U);
    msg.setDestination(21720U);
    msg.setDestinationEntity(134U);
    msg.type = 87U;
    msg.comm_interface = 50349U;
    msg.model = 43214U;
    msg.list.assign("WZVZXHPIBVOQKLWCSBCWIJWUYGMHTGMAHGRYXXNENUGXMFFAJTTXKOYHYIKSUNWJAUOAKJNCRYZJFMCBXZTSA");

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
    msg.setTimeStamp(0.5917777273933197);
    msg.setSource(46935U);
    msg.setSourceEntity(4U);
    msg.setDestination(1344U);
    msg.setDestinationEntity(169U);
    msg.type = 193U;
    msg.comm_interface = 49076U;
    msg.model = 38038U;
    msg.list.assign("JWZFXDBEEBCWBKACMCRYLHKDBRVEUWBALKSTZFARGTIFYBXRGLOTPDPLUTNNOKHRFXZELHOPNJMNSUMMVUECXTITMQGLJXFZVPJSANLVAZIQMQSCYRECAJHDTWWZUSZOIHJXSIDXXPYOTYTGRQTKXNAEGKQJDGNPWWPDFYRAVOUHIFSPUWMXVQGGVPQNDZFCJIGDKQFOBNODRHPGYMVCUCESMBKKOJLHLWQZHRIYBSNCHWJZKEIEVLYA");

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
    msg.setTimeStamp(0.1175196379685004);
    msg.setSource(36374U);
    msg.setSourceEntity(61U);
    msg.setDestination(63067U);
    msg.setDestinationEntity(182U);
    msg.type = 139U;
    msg.comm_interface = 36861U;
    msg.model = 25040U;
    msg.list.assign("SQEJRDCNDHRFVYYLPNMOXCIOGRMVBUXENEYFDIVFIHEFAZHJAZRFZPLASJEPIMYTCO");

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
    msg.setTimeStamp(0.7139673395550099);
    msg.setSource(53507U);
    msg.setSourceEntity(140U);
    msg.setDestination(4043U);
    msg.setDestinationEntity(96U);
    msg.type = 76U;
    msg.req_id = 2066920049U;
    msg.ttl = 21516U;
    msg.code = 57U;
    msg.destination.assign("HTICOHTEFPREYBWBOXZJGMJWRNYIIEQCWXPJBZAATMVNNTQHKSYZPSVDQTPLUHMOWLLGDQMXYWCVTEGAUAERTKYWJDLPEVCVXMPAUATKINLYMJFFGHVCSGNGKKBJSFXDSRLZQQHONDUWTDMAQQZVNHUINXULABDZCPXIJRRZHXIHPGDIBMMFBOXVQQSHKRIYGKOKZCOTPBLUNFSXGUYDFWVLWJYAFDOCEROEYUJFLSNMFBEOZCUWG");
    msg.source.assign("LNWGTGDSEJKQCRCFOHEIGHLIMFZMBKQQTNCFRUDMBFVVYMOGONBORIXEWUJSPXVRHLKXWFYUBDWMNUCGDSFVMGDRSAZZJPVXQEIRJKIBROTNWDKAHDTHETAISSZLTQSFAWGYEMAYZJCOVZWPSYPOTXITVAZDDUEPLAPUZTKDXWSUHGXJYHYX");
    msg.acknowledge = 235U;
    msg.status = 145U;
    const signed char tmp_msg_0[] = {-14, -17, -109, 116, -117, -48, 14, -100, 65, -4, 103, -88, 83, -39, -58, -81, 4, 48, 101, 14, -58, -128, -105, -42, -84, -97, 27, -55, -2, -13, 98, -115, -19, 99, -115, 62, -89, 86, 20, 5, -114, 32, -15, -71, -53, -92, 126, -84, -41, -125, 102, 37, -11, -7, -13, 96, 91, -65, 53, -32, 29, 52, 93, 110, 100, 110, 87, 83, 45, -17, 119, -37, 68, 18, -105, -16, 121, -74, 36, 31, 100, 91, 12, 103, -70, -6, 60, 12, -126, 25, -32, 78, 122, -17, -51, -111, 30, 75, -92, -27, -55, 98, -74, 69, 27, -67, 35, 50, 92, 66, -20, -61, 83, -77, -16, 72, -6, -115, -66, 14, 119, 119, 109, 14, -94, 125, -31, 93, 61, 112, 24, -83, 80, -73, 105, -65, -40, 44, 112, -61, 82, -79, -71, -29, 112, 26, 68, 76, 101, 111, 98, 52, -60, -8, 65, 28, 42, -16};
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
    msg.setTimeStamp(0.8321784395895784);
    msg.setSource(15620U);
    msg.setSourceEntity(6U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(22U);
    msg.type = 226U;
    msg.req_id = 4131180140U;
    msg.ttl = 40027U;
    msg.code = 107U;
    msg.destination.assign("OMSVDPLZUOQUIXLLJSKICXEEHDMTJCFSFACFFPQNGTKNSQLATMPZCEVWRKKNNHQXZZUHIURIWCH");
    msg.source.assign("EXKRZFIJAPBPOAMDEACNFXZIRKLLYMFCYTGVCBMWJLQSXSDMAJDRBJNRNOVRCIUCKADELMYLVPPETMPNCSEWKTQOFGORKWMENWJZWTFI");
    msg.acknowledge = 144U;
    msg.status = 227U;
    const signed char tmp_msg_0[] = {30, -98, 51, -84, -22, 9, 107, -47, 85, 94, 111, -121, -42, -112, 96, -44, 17, 116, 89, 15, -49, 0, 123, 30, -26, -47, 36, 14, -14, -68, -56, -66, 86, -118, 41, 98, 63, -126, -119, 79, 122, -74, -83, -36, -45, -77, -22, -85, 22, -36, -63, 112, 36, 11, 29, 68, -51, 66, 91, 22, -56, 37, 3, 53, -92, 90, -7, -57, -31, 116, -62, 69, 58, -11, 25, 45, -126, -91, 29, 60, 120, 43, -110, -58, -53, 66, 32, -115, -48, 126, 73, -109, -93, -111, 7, 1, -80, -116, -3, 107, 28, 33, 15, 38, -24, 19, 7, 31, 9, -52, 55, -41, 39, -99, 71, -17, -60, -55, 38, -47, -16, -84, 75, -36, 118, 111, 108, 122, 32, -108, -114, 26, 15, -84, -110, 13, 48, -127, -78, -74, -98};
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
    msg.setTimeStamp(0.17799386435763853);
    msg.setSource(4103U);
    msg.setSourceEntity(135U);
    msg.setDestination(44472U);
    msg.setDestinationEntity(227U);
    msg.type = 9U;
    msg.req_id = 737826153U;
    msg.ttl = 42556U;
    msg.code = 220U;
    msg.destination.assign("BTNKVVEPXROZEKDSKZINOLLAONRHVPKZVQIVXUSHYPSKSJLKNNDBRXLYWATDOAYACWNVZVQNTCLRMUFEEUGEGCXG");
    msg.source.assign("BBFCZGGVRXBXZPRWIYMOGMSBJYVGCDHMEWXZRSRKZBTTTWZAHOMGMZKCYIFEVCNULDYFASTDMQZLFENLVGXKKJCPLHQITVVADELITPPVTSAUDQHOEGFBBPVRADJUDLWDJFJXTLUAORKHKNWQPRVPOIMEEQNSNIABOHRQUCMAQZPYSXNRHJZXNKWORQDCUEQUIHQYYGTXJXNPLONWFDMWAPSKUSUCZEAUF");
    msg.acknowledge = 14U;
    msg.status = 151U;
    const signed char tmp_msg_0[] = {103, -75, -125, 105, 60, -57, -95, -34, -90, -124, 71, -60, 44};
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
    msg.setTimeStamp(0.2344165211025797);
    msg.setSource(42909U);
    msg.setSourceEntity(16U);
    msg.setDestination(28581U);
    msg.setDestinationEntity(18U);
    msg.id = 161U;
    msg.range = 0.29222037952814517;

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
    msg.setTimeStamp(0.5564008098329669);
    msg.setSource(61517U);
    msg.setSourceEntity(162U);
    msg.setDestination(28149U);
    msg.setDestinationEntity(43U);
    msg.id = 125U;
    msg.range = 0.00130249606723154;

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
    msg.setTimeStamp(0.31409786143821905);
    msg.setSource(11218U);
    msg.setSourceEntity(69U);
    msg.setDestination(50403U);
    msg.setDestinationEntity(240U);
    msg.id = 215U;
    msg.range = 0.22475931867306165;

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
    msg.setTimeStamp(0.0018194742944260822);
    msg.setSource(35349U);
    msg.setSourceEntity(26U);
    msg.setDestination(43562U);
    msg.setDestinationEntity(37U);
    msg.beacon.assign("LFXIOPKDBORNXECFXESIBYAQJJURLFPIFOEPKQBGVWZPKAMSHNCRHJSWGOPTNGYLJOHVIQDOYNJWXACFIXZPTGSOUNPOTMCMJQWVDHKQZEJCHUMCSSGBYSLUUTVYZSTVZKZHBBYPKX");
    msg.lat = 0.8265452717455706;
    msg.lon = 0.06973282757098265;
    msg.depth = 0.7549689916887699;
    msg.query_channel = 4U;
    msg.reply_channel = 242U;
    msg.transponder_delay = 160U;

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
    msg.setTimeStamp(0.5537427310995356);
    msg.setSource(17711U);
    msg.setSourceEntity(212U);
    msg.setDestination(12968U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("UFLAGZMYTIHGQYHXPYKOSPRVTPSXEFJIZKYIBEPUWKJIOUSWNZRHLMTAGTRJLWCABNMJKFBESKOQIOEHBQJXFGFJTBRDGZSTUJZNORNWVSUCWLXYRBUUXRYXZEAQGOCKEWOTMSAMKJLZZYATMNVCJOLXHQMIZRVCQDQIVMPFMQSELHJAXIYUWLTQBFASUDVNVHNKNPKEYIDDPADWHBRNCFKBGWEWFVOVCSBYQXHHPVAODCLUCGDDEIFTXPMDLC");
    msg.lat = 0.5332176860891195;
    msg.lon = 0.029275758116868222;
    msg.depth = 0.23644501537338714;
    msg.query_channel = 67U;
    msg.reply_channel = 108U;
    msg.transponder_delay = 243U;

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
    msg.setTimeStamp(0.10235298456165642);
    msg.setSource(28726U);
    msg.setSourceEntity(44U);
    msg.setDestination(8418U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("CAABYDAWCECQVIBBYAWFIIIDYAPKHPWBIYPHDGBERSHDZEANHGAXOUGOYVMRCVVQRZHMEAZXFRGKFUESLERSOCUJIFDGYPYBZNJGAPXHXNUMXSEDVRMNUQPQQNDHTBOEBWLLVZFWWQYKGEYJKTPXQSZOXJSMRCMLWFGYKFPVOZKVNSDNJXIQGULLWVRQJBFSOMIOJITNKTTMXUAJCPOQNKTTCDWTMZVTRSWHULONMLRXBLHJHJEZLTP");
    msg.lat = 0.5006133230752252;
    msg.lon = 0.3996643258931576;
    msg.depth = 0.9755842059908075;
    msg.query_channel = 252U;
    msg.reply_channel = 121U;
    msg.transponder_delay = 121U;

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
    msg.setTimeStamp(0.34705255679728453);
    msg.setSource(97U);
    msg.setSourceEntity(79U);
    msg.setDestination(31419U);
    msg.setDestinationEntity(126U);
    msg.op = 202U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CXELNDDOXBSWIARLVYRNRLBFKCBXSECDEMZIBUVMMEEHHUZUNNQADTZUBSWOPVNCARZHXCZFQQTLWGFRQFSUUJLWVJXQPRFLNVTMPGDOPIGPAYKKWYUQNAOGAQHITYPTAOH");
    tmp_msg_0.lat = 0.6397217595318927;
    tmp_msg_0.lon = 0.09690124765386432;
    tmp_msg_0.depth = 0.46948497110617704;
    tmp_msg_0.query_channel = 59U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 76U;
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
    msg.setTimeStamp(0.49911277909605667);
    msg.setSource(9876U);
    msg.setSourceEntity(41U);
    msg.setDestination(45556U);
    msg.setDestinationEntity(216U);
    msg.op = 33U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LHQBOAGJOJEUFKXMJFNSVQGAIEKUNPNEVXYSVCDJOJKEXIZRFVFWMSHIQPNUWNRWNPYMOJTBEEWSCDAKQXEWZXDISKLLKMDUPOFJYSBWZLIRZGNXYZMQGZFEIYFHNFCCKNKLBBPCJATWTXAWCRDCRLBDBLQCVSACTRNAALYRMYPVDBOLXUHRZIVYEGRGTSIQVFOADK");
    tmp_msg_0.lat = 0.7561833225781666;
    tmp_msg_0.lon = 0.14778129566083054;
    tmp_msg_0.depth = 0.37547282782763414;
    tmp_msg_0.query_channel = 159U;
    tmp_msg_0.reply_channel = 69U;
    tmp_msg_0.transponder_delay = 81U;
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
    msg.setTimeStamp(0.36971199758535833);
    msg.setSource(30663U);
    msg.setSourceEntity(168U);
    msg.setDestination(14419U);
    msg.setDestinationEntity(113U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.041915317351200576);
    msg.setSource(63405U);
    msg.setSourceEntity(21U);
    msg.setDestination(24606U);
    msg.setDestinationEntity(189U);
    IMC::SimAcousticMessage tmp_msg_0;
    tmp_msg_0.lat = 0.3208822581313159;
    tmp_msg_0.lon = 0.00233604717213165;
    tmp_msg_0.depth = 0.11081281236782503;
    tmp_msg_0.sentence.assign("YZLEYBRNWRRPPZVIJWPUCCKBTQPHVJCGSZUXOIAMWKEQNJLGDMFWSDQZ");
    tmp_msg_0.txtime = 0.5471426151211313;
    tmp_msg_0.modem_type.assign("UKODZNUPUVSJPHBJNPYYLQOXPTHXEVNKRTCJJNIZWVJRHAQBPBQQRRSMOLGKADAPEKFHJIRN");
    tmp_msg_0.sys_src.assign("LIRFZJQKYPNMQBVZWPLGBYGRANXCXNFZAOWIMWGQBUADGFAVEXDMAPXMMMJJKTSRGTKGFKWMRHHXHUDRIVXNAR");
    tmp_msg_0.seq = 63657U;
    tmp_msg_0.sys_dst.assign("DCDYSDKPTWRTPGJIYRRTTJZNGTXJGQFXJORQAGRVNPMZKTXFLHIAGMRCPPHADMHYTEKPDHKEZPUVCQWFNIXQLWVXKUBQBPIYYKVGMPIZJRKM");
    tmp_msg_0.flags = 119U;
    const signed char tmp_tmp_msg_0_0[] = {-56, -40, 116, -7, 33, -12, -53, -7, -113, -53, 33, 115, 98, 74, -94, 95, -41, 32, 8, -38, -32, 35, 126, -52, -78, 116, -114, 12, 103, -41, -31, 46, 120, 13, 85, -22, 3, 42, -103, -83, 18, -27, 97, -101, -18, -10, 77, -62, 28, -114, 33, 21, -122, -65, 91, -17, 122, -30, 38, -109, 40, -3, 121, 89, 123, 109, 12, 84, -61, -36, -49, -121, 108, 18, 18, 114, -122, -62, -48, 44, -8, -90, 20, 65, 124, -120, -86, 48, -70, 115, 120, -49, 82, -31, -87, 114, -103, -124, 104, 120, 116, 71, -45, 20, -35, -2, -45, -26, -116, -78, -96, -12, -41, 15, -9, 106, -119, -78, 123, -14, -28, 37, -50, -81, 70, 61, -72, 8, -31, 51, 26, 83, -97, -28, -112, 13, -74, -38, -21, -103, 8, -37, 105, -43, 100, 16, 69, -71, 38, 5, 48, -85, 68, -69, -43, 80, -92, 120, 109, -69, 98, 10, -58, -124, 72, 32, -69, -34, -26, 117, 125, 104, 26, -101, 48, 8, -88, 87, -4, -122, -124, -98, 45, 27, -55, 109, 83, 47, -110, 116, -31, -13, 44, -13, 122, -111, 114, -65, -102, 114, -9, 109, 48, 99, 32, 104, 76, 113, -115, 27, 7, 96, -62, 47, 31, -19, -27, -29};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5442734182585517);
    msg.setSource(15081U);
    msg.setSourceEntity(243U);
    msg.setDestination(37340U);
    msg.setDestinationEntity(87U);
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 216U;
    tmp_msg_0.op = 100U;
    tmp_msg_0.err_mean = 0.35867694578022935;
    tmp_msg_0.dist_min_abs = 0.7183015469325882;
    tmp_msg_0.dist_min_mean = 0.0673583186654162;
    tmp_msg_0.roll_rate_mean = 0.6160990842777678;
    tmp_msg_0.time = 0.8086261298582689;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 130U;
    tmp_tmp_msg_0_0.lon_gain = 0.16209519571812647;
    tmp_tmp_msg_0_0.lat_gain = 0.5502398456154516;
    tmp_tmp_msg_0_0.bond_thick = 0.90911245279143;
    tmp_tmp_msg_0_0.lead_gain = 0.7415301730289794;
    tmp_tmp_msg_0_0.deconfl_gain = 0.30055284226491974;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.3166407363804843;
    tmp_tmp_msg_0_0.safe_dist = 0.5980819227872601;
    tmp_tmp_msg_0_0.deconflict_offset = 0.3172902978133547;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.22731414070430878;
    tmp_tmp_msg_0_0.accel_lim_x = 0.5624772249046363;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7085360959262882);
    msg.setSource(30998U);
    msg.setSourceEntity(89U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(61U);
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 119U;
    tmp_msg_0.lat = 0.8151595190419051;
    tmp_msg_0.lon = 0.2629989703719441;
    tmp_msg_0.x = 0.14498079227570793;
    tmp_msg_0.y = 0.7992724815160507;
    tmp_msg_0.z = 0.5079740364174878;
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
    msg.setTimeStamp(0.6895094866476258);
    msg.setSource(14180U);
    msg.setSourceEntity(235U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.49500875369641195;
    msg.lon = 0.32801247604419226;
    msg.depth = 0.03030925965621356;
    msg.sentence.assign("YSQDXNGCOFBWGTDPUIGBNSFJUPCROQCRVOHMGGSXXDHVBXBHHJUMXWSCERMJRIPWEESFHKGVTCSALTGRLTKASAESFUCJQDLQZYYCLHXJEODYOJTPRJIIIAMKAIVEZYWBPDFTTLQAFLZFFESKBZOLNWPCMXNFYNMHDXYZRZTEHTSQVDKARVUUNMYMBOOWPMPFLIWJKKNDKVQYGHIIPHB");
    msg.txtime = 0.7146822777480526;
    msg.modem_type.assign("PRHLFQXQMAFOEGRTBWUTUZAMFCKKZFUOYHJQPIAQJSGPVUBUENVRYQUFZMGLYDDABIWTOGXHXNSELUSGXBYCLZXDIDUZCTPRAXMLYIOWOCIXXNMNWDCPGJNXSBZDDLKKJKHJCBREDWDRWFVRQFXMTRNQTIOPABFPTHELUIYSJQTWNPFKCVCJAICKLEKOGGZSJZEAHBJWWMNHQBBINJVVTCOVVYLNTMMRSKYSPEOYA");
    msg.sys_src.assign("BBYDSPXEQZJHCZPGFRWUHVEGVWINSBERQLIT");
    msg.seq = 63252U;
    msg.sys_dst.assign("SVBVSWCNKQQJVZPUONYTMMNVEENLKAWVRJTXRBECIUEIQXHQSBZOGHRTJUCJPJWBIIPZYLVNKOAHDIYGRLCQLUAQIXSAKVDONIJRGVQEMLBXDEDJXRXYKCZAWROAKYXZUDTGJFHQATQSFZEGFWCFIBCDWYSWKPGPELWHYGOKDFUTHSRIZUHTIGPVAEOSPN");
    msg.flags = 234U;
    const signed char tmp_msg_0[] = {54, 27, -92, 21, -38, -80, 100, 80, 106, 104, 85, -83, -31, 39, -33, 98, -78, -69, -21, -16, -109, -5, -124, -50, 18, 77, -107, -95, 95, 74, -49, -20, -14, 103, -22, -37, -111, 102, 10, -33, 116, -62, -36, 69, 78, -75, 58, 120, 37, -35, -29, 104, -84, 18, 85, 83, -116, 98, 0, 46, -123, 98, 94, 107, -104, -13, 121, 108, 120, -111, 84, 50, -57, 0, 21, 81, 23, -109, -86, -10, 54, -86, -64, 107, 29, 14, -47, -13, -25, 74, 38, 96, 36, -13, 93, -91, -19, -34, 39, -37};
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
    msg.setTimeStamp(0.8366936352888158);
    msg.setSource(47706U);
    msg.setSourceEntity(4U);
    msg.setDestination(15900U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.21689281443519948;
    msg.lon = 0.9710177966092555;
    msg.depth = 0.7980554309652459;
    msg.sentence.assign("QTLSTEIUFAPPEJLEOXCRSGMNTTAGXBIQTKNZCJXRHVETPDZVRBDVLOVAZTBAUQWKC");
    msg.txtime = 0.3054384424134211;
    msg.modem_type.assign("ETGVYGWCLERRVULFURCHDXSRIWSEZKMQXQOCQSDHQHVYCXNXALVUSTFTFMSXEBFANPXKMOMYTQZRHLNBDSZZOBGESWCB");
    msg.sys_src.assign("YSNAFCPCQXZFDSZCTLOKTXBHVDMQJSNNUBQONGWGAERVDLDKBKSFNEFPBFFQEIBBMNILKWMOPOZTMZRRU");
    msg.seq = 61368U;
    msg.sys_dst.assign("JYZGEINRNXLEWNF");
    msg.flags = 90U;
    const signed char tmp_msg_0[] = {76, 82, -14, 126, 104, 26, 25, -28, 32, 112, -114, -96, -47, 44, 19, 28, -8, -64, -64, -38, -68, -24, -55, 93, -2, -89, -126, 126, 110, 44, 7, -105, 13, 15, 58, -96, 98, -13, -19, -53, -28, -100, 66, 83, -9, -40, -15, 18, -76, 39, 44, 100, -45, -59, -48, 118, 11, 7, -49, -29, -106, 19, -20, 85, 41, -53, -114, -64, 98, -20, 0, -60, 11, 47, -39, -112, 40, -67, -118, -71, 50, -13, -11, -89, -41, 121, -54, -33, 100, -7, -44, 124, -50, -87, 20, -33, 18, -54, 61, -105, -99, -8, 15, -107, 44, 35, 48, -19, 65, -111, 17, 122, -9, -11, -100, -61, -109, -86, -34, -117, 116, 62, 8, -36, 5, 62, -110, -72, -15, -57, -76, -115, -8};
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
    msg.setTimeStamp(0.9029966425391736);
    msg.setSource(58152U);
    msg.setSourceEntity(201U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.29222735667406574;
    msg.lon = 0.04044521180356864;
    msg.depth = 0.6531978866834023;
    msg.sentence.assign("JYDBOLTSRQPCEKLKGAWXOPASQQSLGVDZXJUMVFTRNIMVZMSXBGIGMPWEMHQJVUCQWMEORIXUHYZWOGDMAZFNNYRGZIKGKTBASMWMNUBEDIFITXHCAYFAVCTTJ");
    msg.txtime = 0.016152511270380532;
    msg.modem_type.assign("KIRLJMNPMEIVUGCISGORTVBPSRYFTZXRBWMKWJPMCFZRHVWQJOGOFQOAK");
    msg.sys_src.assign("RPVOSAVTTDHVKPVZDMSXCCQVWGFLEUXZJGXQBRHNKSKOBJGVZOSKMNDRICFARFELSCHYOLXYT");
    msg.seq = 20089U;
    msg.sys_dst.assign("EUJZZNKJMFCLQRSBDUFROZVHVJPBCMTKBMCCUYVOZGRDLLGLEIKQACMHBGFSPWJHTCAMDJQOSNJUHKEJAYCYYJWQUOTLPOIPVGZLVMAAERULJFDZYSRXNSSBVGDROIODPXLKDNDGESKXOTSQUDYREDEQELPOPXRNFXISXAVKGCIWBHWYMBRGHCCWTRTYZQFGWEHBFHVTHYQAHF");
    msg.flags = 170U;
    const signed char tmp_msg_0[] = {114, 18, 7, 62, 15, -85, 8, -86, 45, -36, -90, -115, 107, 36, 77, 121, 69, -51, 4, 11, -36, -13, -74, 6, -32, -65, -58, 113, 71, 117, -109, 12, 109, 91, 109, 80, -9, 42, -5, 92, 118, 61, 44, 21, 96, 101, 43, 37, -30, 9, -11, 69, 24, 28, 116, -75, -72, -24, 66, 78, -8, 99, -60, -62, -78, -92, -30, 88, -97, -82, -28, 51, 6, -23, 12, 54, 116, -103, 41, 2, 51, -52, 4, 84, -110, -62, -35, -15, 6, -19, -16, 42, -69, -86, 77, -36, -56, 39, -105, -71, -34, -102, -33, -94, 88, 22, -66, 121, 121, 15, 122, 33, -27, 18, -35, 23, 108, 59, 109, 34, 100, 71, 33, 122, -112, -12, 59, 80, -114, 76, -44, 12, 37, 23, 20, 48, -34, -62, -57, 27, 41, 89, -111, 78, -13, -28, -108, -31, -121, -90, 22, -55, 0, -73, -6, 110, 8, 85, 121, 63, 76, 121, 22, -9, 73, -25, -2, -26, 45, -111, 63, 111, -108, -64, 35, 28, 95, 39, 37, 27, -76, -116, 87, -66, -16, -72, 22, -31, -34, 21, 20, -76, 100, -52, -12, -107, -53, -80, -74, 66, -123, -8, 4, -34, 104, 13, 73, 52, -32, 23, -41, 57, 15, -66, 39, -36, -123, 74, 82, -76, -36, -77, -49, 98, 96, -81, -104, -22, 31, -110, 65, -38, -102, -69, -5, 59, -46, 99};
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
    msg.setTimeStamp(0.9532222676110124);
    msg.setSource(30082U);
    msg.setSourceEntity(110U);
    msg.setDestination(35375U);
    msg.setDestinationEntity(148U);
    msg.op = 180U;
    msg.system.assign("XBELMSDVMDAVHFVYOZPJCZICQSUUNBDPXWRLQNZVVDQZPHSNGVT");
    msg.range = 0.4316010661707905;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 181U;
    tmp_msg_0.op = 245U;
    tmp_msg_0.possimerr = 0.31484158129544004;
    tmp_msg_0.converg = 0.9886259997969572;
    tmp_msg_0.turbulence = 0.8917817900086452;
    tmp_msg_0.possimmon = 19U;
    tmp_msg_0.commmon = 192U;
    tmp_msg_0.convergmon = 157U;
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
    msg.setTimeStamp(0.5524996930663848);
    msg.setSource(58878U);
    msg.setSourceEntity(34U);
    msg.setDestination(34781U);
    msg.setDestinationEntity(76U);
    msg.op = 150U;
    msg.system.assign("ZQZXCLFEQLCEWGKDWEZWVTLEFJJQMEBQZYGYKTZDWZRWPBNUCGUXFPTWKSNKVFHHHPVYEYUXAVTCNYBAXTIHPSSWFGVNCRIHCLCMYMLFDULNT");
    msg.range = 0.7511619494646616;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 163U;
    tmp_msg_0.value = 185U;
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
    msg.setTimeStamp(0.1540005662742524);
    msg.setSource(21974U);
    msg.setSourceEntity(12U);
    msg.setDestination(38773U);
    msg.setDestinationEntity(188U);
    msg.op = 221U;
    msg.system.assign("GIJHQZXOBRVTXSAZBNXUDHRPJWBURXPERSTBMZHKIEAIELZSUASSYJNYJO");
    msg.range = 0.33840540242029593;
    IMC::FollowCommandState tmp_msg_0;
    tmp_msg_0.control_src = 29431U;
    tmp_msg_0.control_ent = 214U;
    IMC::Command tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 91U;
    tmp_tmp_msg_0_0.speed = 0.12245587007457404;
    tmp_tmp_msg_0_0.z = 0.5405814023963796;
    tmp_tmp_msg_0_0.heading = 0.8280507399064888;
    tmp_msg_0.command.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 244U;
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
    msg.setTimeStamp(0.7208640719211428);
    msg.setSource(15829U);
    msg.setSourceEntity(161U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.919733847545107);
    msg.setSource(41573U);
    msg.setSourceEntity(233U);
    msg.setDestination(53132U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.46540336202586485);
    msg.setSource(48064U);
    msg.setSourceEntity(100U);
    msg.setDestination(32405U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.6089493758074517);
    msg.setSource(17128U);
    msg.setSourceEntity(210U);
    msg.setDestination(9835U);
    msg.setDestinationEntity(166U);
    msg.list.assign("XUPITYUNEOISOXNCGRDRHNIYGPFHWDSUBIEEGVSBBHNQGWMIAZJNCLFXRHVQLCDMBKUDGXCXGSWLGCFUAABJELNMBYCIKFKZOIPQWJZEOHFPJPPHTAVQFATZHDBUVPJPMWXWKQGDQXBLMBFLWCRUYFIZJFQASULRTSBELVGFLEOMHTCOSJJKKTRKHOT");

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
    msg.setTimeStamp(0.8160864586291169);
    msg.setSource(19857U);
    msg.setSourceEntity(54U);
    msg.setDestination(46022U);
    msg.setDestinationEntity(114U);
    msg.list.assign("CEEAMOLXMDTCJOOUSXGVIIUUCRYGXRPHDGLZFMTOEJDYRLJUCPGVJAVTWWQPKXMJYUGLTISGRXPFDKGMJHRQNOVQMBOYVTPQVFBOHFLONPTHZIFQDE");

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
    msg.setTimeStamp(0.6489472240474806);
    msg.setSource(7831U);
    msg.setSourceEntity(75U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(176U);
    msg.list.assign("CZGNOUVMMZLNGOIVIQBECCLOXXYZGFJTWXXFJCGHHPSIDJWPCHWI");

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
    msg.setTimeStamp(0.5429642454830349);
    msg.setSource(4894U);
    msg.setSourceEntity(189U);
    msg.setDestination(30468U);
    msg.setDestinationEntity(183U);
    msg.peer.assign("MBLWWIZMXHIDXGRMDJWIXTWNOLMYHTTVFHCOSPDIRKVQBJOSIUHGDNKTHTAWXCUFUPQKUWTYSNSEBQQNRRHOIIWASCSEVORAI");
    msg.rssi = 0.1905787815121821;
    msg.integrity = 58501U;

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
    msg.setTimeStamp(0.6142116476350096);
    msg.setSource(54924U);
    msg.setSourceEntity(89U);
    msg.setDestination(39170U);
    msg.setDestinationEntity(44U);
    msg.peer.assign("REBLTKPUIXPRBCHJXBFQDCWFYYQRTWPLXJTPUKUCSYRAJITZPZLBHNMCWKRVASMWRGYFLAGSETOEWVOUQHKWYGMRLKUDKPPTDHVQLVMPWIFNBSLHYAXPGZWVZJBGWNWFOPUQUERUMSNZHCMSOLNQVIEZJKQYGGXLJXASDFVDSOFMIBZVITCMSCQANEVDKBIMSA");
    msg.rssi = 0.3805782089745742;
    msg.integrity = 43144U;

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
    msg.setTimeStamp(0.9379520604308801);
    msg.setSource(33363U);
    msg.setSourceEntity(195U);
    msg.setDestination(7291U);
    msg.setDestinationEntity(85U);
    msg.peer.assign("CITLSCCWNVIKYYUKBNPBERMDMROZBIEZUOHWRZZJLXHSNENDDSQAYQRFPEUGCCWLDJUGXSTOWPXIQVRVFCQNWYFUTNXJHDAPLKPJVTDEALJUAYZJSAPRLGOCHOO");
    msg.rssi = 0.6101195659698626;
    msg.integrity = 5504U;

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
    msg.setTimeStamp(0.27374899844260425);
    msg.setSource(26023U);
    msg.setSourceEntity(131U);
    msg.setDestination(222U);
    msg.setDestinationEntity(140U);
    msg.req_id = 15371U;
    msg.destination.assign("WFBCVEZLJSMKRCYKMWESNGYWLGRCOQHEJDWCTOB");
    msg.timeout = 0.4594626328572964;
    msg.range = 0.4802364674553542;
    msg.type = 13U;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("YHCKFFNBEIAVQJQDCGPJXBRYTUTQQYWNWJZOQAZSDXIBVFFMOEINVFPDXJUBHODQRGLNSNOHSCGKACVIWNHPEZZXIEEOSCPJZSHRZTMREAWBTFEOZXHDPTIGXHMYYKDBMQNPMZJRJCKMDJXPUATVWELFJKFMAHYQWKGVDIUUNWYGCSXSLNXBAUKBCPTLIZOMCKLL");
    tmp_msg_0.type = 62U;
    tmp_msg_0.properties = 163U;
    tmp_msg_0.durations.assign("JFQXDXLCAVGRKFSJTNONHXVVOAJBBPPOFZNFIPFBLUHLDRBCEIZWWDJVMUQJQYOGWDGXTXLFIHVXDNEQIKCQEUYFKKOCKELNEASGATQMHNHRMZCHTADVYMWDEABBZXIULQLSYUDKJEIRAWGUWGKSSWNTKFTVTJMPBRFICGZPYKJZLPXOQDYOHTGOMGGTLRCCVNFABOIOPHXZMBQWYPUDRWSYPSCYCMINAEZ");
    tmp_msg_0.distances.assign("ZMPTYHLOPBOYUPIDYCUUHEOUZGGRZNTVJOVFALLKPMXBZJBRQETMFRDBKPDZ");
    tmp_msg_0.actions.assign("SGGJJVLYFUWXBMTQSKNNVJXG");
    tmp_msg_0.fuel.assign("CYHDHWTJHTQKYVCMSWVIEJTNCXGCUKYWDOMXPRJAUWTWIDJIXBEDXJDHXRGORZBPIBXRQUNLKXPJNOUWTJRVQLMNLMUQVBNUUKLSMBHCUPWQOHBWFRVYZMSGBPJXNSAEWZNWCSDETPYFSCGNFCUYKMAXPQGAJITLGDSEANKRAHIVXHIMGPVPIZ");
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
    msg.setTimeStamp(0.8041294354406078);
    msg.setSource(54157U);
    msg.setSourceEntity(127U);
    msg.setDestination(41256U);
    msg.setDestinationEntity(216U);
    msg.req_id = 33584U;
    msg.destination.assign("NQHPRUHCNPROJGBVUSUUVISARFDNQQMKANFRTEXIKBHFPUPRVGDCWQJGYDWXIPXHIJFKOMKILFEMVTPFZAEUXHEXTZCJ");
    msg.timeout = 0.20603958860320182;
    msg.range = 0.9404474216555769;
    msg.type = 215U;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 6U;
    tmp_msg_0.time_remain = 0.3170626563081409;
    tmp_msg_0.sched_time = 0.4921794609498368;
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
    msg.setTimeStamp(0.10976580544912429);
    msg.setSource(7345U);
    msg.setSourceEntity(185U);
    msg.setDestination(10083U);
    msg.setDestinationEntity(223U);
    msg.req_id = 7565U;
    msg.destination.assign("PHGAOUDHOECZMQXJKJADAESECBHYZNTORVDSJDYHASWQNQPQNMOGPYMPFKOVEMZBJEKMUSFIXBZMHZYWIRBMLXGWWLPRHJTNXNKYXTLEZOMKDCUVUGAIVDRJYYWZFFUXXGNCOKVPVBVTLFYCUISABLLPSFZRTKBOHQXWOAMJJWAKSPWIVSGPTTZQIRHXHISEWAFQCDEYUQGLGCNCWUTYDFCFIRLVBK");
    msg.timeout = 0.35646760300517566;
    msg.range = 0.23355595698836162;
    msg.type = 94U;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 247U;
    tmp_msg_0.step_number = 50U;
    tmp_msg_0.step.assign("XBTAWWOAKRCVUJLDGVJNLHYSMUUQOKTVSENHFRMGNJIUJAZQCAEGVZANHRKKICGZXGOITIVPDLWDURHDGQTXKQEKLMCOVEXCKBAGAGDBPFUCJYIRDMZCTRAYYSLLYELCFYICPIWUDWKALWZQIXPUOBBVXMSYYFSPNSOLFTAVUPIFWFMNEOQZFQWGQZEJFPHQNBRKWMWPMSBJ");
    tmp_msg_0.flags = 247U;
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
    msg.setTimeStamp(0.6260372977265755);
    msg.setSource(37838U);
    msg.setSourceEntity(18U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(250U);
    msg.req_id = 58042U;
    msg.type = 8U;
    msg.status = 189U;
    msg.info.assign("KMUEUFQVSKSGGHECEUPBRMOYQYOLYIMDIXMGFYMAZXRXQUCEHTTSULHBZDDLZDACRJKJLQSSMPCYIZRBKWDXPGQJCJLUDZSVLRWIZXKYVFENGELHBHOOYGHXPIVWQNFATOWIFQTVWUR");
    msg.range = 0.023290463588383936;

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
    msg.setTimeStamp(0.10019059297397137);
    msg.setSource(49132U);
    msg.setSourceEntity(181U);
    msg.setDestination(23885U);
    msg.setDestinationEntity(16U);
    msg.req_id = 25514U;
    msg.type = 234U;
    msg.status = 217U;
    msg.info.assign("TYRZVFIOSUWTXRJDPVQOVTKKTJRPGYKWRHMANZPFYKENEONCEQLHSUDQAFAAGJBRXBSUBWNISKUSQHFHVXHE");
    msg.range = 0.7507404877319235;

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
    msg.setTimeStamp(0.5677095965766592);
    msg.setSource(20784U);
    msg.setSourceEntity(247U);
    msg.setDestination(49181U);
    msg.setDestinationEntity(237U);
    msg.req_id = 23568U;
    msg.type = 99U;
    msg.status = 51U;
    msg.info.assign("WHRGZEUHNJAFYCJDRJSNBVDZRMVDFPBVZJXDLPVXXQGYPAASKZINDUTNKKTYLSYFAHROSAJCCPUTLWWHMOXTEGDISSHLNZZRMYLNCLPOEKJEBMMNBKGPYWLCZTBXOIFLEQSFNXAUCDYOGYQYJHGQJMQHBTKFXUQIBZMRUFBRPGWCNIONHVSXQOFVKPIVHHKEQEAAJEZWQXCQAMORFJUGDUUTMILRIIUVGTFVTBLMCCTPVRIWXWEKBKWEPA");
    msg.range = 0.31785857369813797;

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
    msg.setTimeStamp(0.388894656444851);
    msg.setSource(29725U);
    msg.setSourceEntity(47U);
    msg.setDestination(42226U);
    msg.setDestinationEntity(187U);
    msg.value = 10318;

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
    msg.setTimeStamp(0.596012367455419);
    msg.setSource(1851U);
    msg.setSourceEntity(10U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(37U);
    msg.value = 16287;

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
    msg.setTimeStamp(0.2829355225082453);
    msg.setSource(49876U);
    msg.setSourceEntity(17U);
    msg.setDestination(57433U);
    msg.setDestinationEntity(104U);
    msg.value = -11941;

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
    msg.setTimeStamp(0.31508281489982004);
    msg.setSource(57244U);
    msg.setSourceEntity(26U);
    msg.setDestination(11491U);
    msg.setDestinationEntity(212U);
    msg.value = 0.6323047051642059;

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
    msg.setTimeStamp(0.26958159555939076);
    msg.setSource(63297U);
    msg.setSourceEntity(206U);
    msg.setDestination(20232U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0487866838372919;

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
    msg.setTimeStamp(0.19645463065165347);
    msg.setSource(1141U);
    msg.setSourceEntity(102U);
    msg.setDestination(42328U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5141461735370576;

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
    msg.setTimeStamp(0.49348440790944337);
    msg.setSource(52559U);
    msg.setSourceEntity(192U);
    msg.setDestination(12726U);
    msg.setDestinationEntity(34U);
    msg.value = 0.3461587971572202;

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
    msg.setTimeStamp(0.7044952480744223);
    msg.setSource(33377U);
    msg.setSourceEntity(236U);
    msg.setDestination(65003U);
    msg.setDestinationEntity(139U);
    msg.value = 0.26185602702312727;

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
    msg.setTimeStamp(0.36643241749066624);
    msg.setSource(14687U);
    msg.setSourceEntity(43U);
    msg.setDestination(29934U);
    msg.setDestinationEntity(43U);
    msg.value = 0.32595647030945796;

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
    msg.setTimeStamp(0.5403855540729011);
    msg.setSource(8463U);
    msg.setSourceEntity(93U);
    msg.setDestination(60717U);
    msg.setDestinationEntity(159U);
    msg.validity = 44354U;
    msg.type = 191U;
    msg.utc_year = 42426U;
    msg.utc_month = 67U;
    msg.utc_day = 17U;
    msg.utc_time = 0.8462318090198258;
    msg.lat = 0.9393455166946677;
    msg.lon = 0.4867022391231913;
    msg.height = 0.07629442267996522;
    msg.satellites = 157U;
    msg.cog = 0.0020043827815671156;
    msg.sog = 0.2723641344601776;
    msg.hdop = 0.020467416787788073;
    msg.vdop = 0.4326111060504506;
    msg.hacc = 0.2998869071044148;
    msg.vacc = 0.6389275537614609;

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
    msg.setTimeStamp(0.9731001315481791);
    msg.setSource(34200U);
    msg.setSourceEntity(39U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(116U);
    msg.validity = 44005U;
    msg.type = 254U;
    msg.utc_year = 15993U;
    msg.utc_month = 45U;
    msg.utc_day = 60U;
    msg.utc_time = 0.6272236919724716;
    msg.lat = 0.07666182068037364;
    msg.lon = 0.8920065015692593;
    msg.height = 0.13356436441608865;
    msg.satellites = 218U;
    msg.cog = 0.550206940601031;
    msg.sog = 0.36376975081179985;
    msg.hdop = 0.6656803083926579;
    msg.vdop = 0.08067641504782308;
    msg.hacc = 0.29268161831810624;
    msg.vacc = 0.5516297270522981;

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
    msg.setTimeStamp(0.641773271193783);
    msg.setSource(2569U);
    msg.setSourceEntity(143U);
    msg.setDestination(31434U);
    msg.setDestinationEntity(171U);
    msg.validity = 9495U;
    msg.type = 123U;
    msg.utc_year = 40041U;
    msg.utc_month = 106U;
    msg.utc_day = 218U;
    msg.utc_time = 0.6161987636698535;
    msg.lat = 0.7883198492659625;
    msg.lon = 0.1637262433410428;
    msg.height = 0.6082349472399091;
    msg.satellites = 239U;
    msg.cog = 0.5127608082659818;
    msg.sog = 0.4277781832898985;
    msg.hdop = 0.7287696887903624;
    msg.vdop = 0.7647242053614051;
    msg.hacc = 0.9366595100313097;
    msg.vacc = 0.6425219244235044;

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
    msg.setTimeStamp(0.5322037327591632);
    msg.setSource(47929U);
    msg.setSourceEntity(190U);
    msg.setDestination(22746U);
    msg.setDestinationEntity(18U);
    msg.time = 0.8873727425931811;
    msg.phi = 0.5765122041454994;
    msg.theta = 0.4091007722137412;
    msg.psi = 0.011208567628576693;
    msg.psi_magnetic = 0.3076809569542285;

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
    msg.setTimeStamp(0.48085633281231277);
    msg.setSource(43323U);
    msg.setSourceEntity(110U);
    msg.setDestination(13711U);
    msg.setDestinationEntity(23U);
    msg.time = 0.6875916154518226;
    msg.phi = 0.05477703784058585;
    msg.theta = 0.9172676687212953;
    msg.psi = 0.07383968981814482;
    msg.psi_magnetic = 0.9928334461058802;

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
    msg.setTimeStamp(0.5950023459106004);
    msg.setSource(3091U);
    msg.setSourceEntity(202U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(37U);
    msg.time = 0.1040571151789369;
    msg.phi = 0.7837472138840933;
    msg.theta = 0.6372007946272563;
    msg.psi = 0.4973327792873439;
    msg.psi_magnetic = 0.6683066944501799;

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
    msg.setTimeStamp(0.19065535215965312);
    msg.setSource(53366U);
    msg.setSourceEntity(121U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(97U);
    msg.time = 0.4468992802462748;
    msg.x = 0.16722510135217772;
    msg.y = 0.23892707776842992;
    msg.z = 0.6883983717564632;
    msg.timestep = 0.05774293156327026;

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
    msg.setTimeStamp(0.02486689064061187);
    msg.setSource(25189U);
    msg.setSourceEntity(9U);
    msg.setDestination(60014U);
    msg.setDestinationEntity(143U);
    msg.time = 0.6943005951740485;
    msg.x = 0.5813115601085276;
    msg.y = 0.7264162250726233;
    msg.z = 0.20605012844917925;
    msg.timestep = 0.15427972586431804;

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
    msg.setTimeStamp(0.916652749447137);
    msg.setSource(56720U);
    msg.setSourceEntity(53U);
    msg.setDestination(754U);
    msg.setDestinationEntity(124U);
    msg.time = 0.5945508998915904;
    msg.x = 0.4628887083160663;
    msg.y = 0.16236802569568043;
    msg.z = 0.9782509717731595;
    msg.timestep = 0.4645136315907118;

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
    msg.setTimeStamp(0.7480573252642985);
    msg.setSource(21831U);
    msg.setSourceEntity(99U);
    msg.setDestination(65065U);
    msg.setDestinationEntity(180U);
    msg.time = 0.08868168883586713;
    msg.x = 0.8584676912608092;
    msg.y = 0.9322083176462242;
    msg.z = 0.7543531136528765;

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
    msg.setTimeStamp(0.9568598183251893);
    msg.setSource(19812U);
    msg.setSourceEntity(148U);
    msg.setDestination(40916U);
    msg.setDestinationEntity(193U);
    msg.time = 0.6058477454318184;
    msg.x = 0.004669138185281252;
    msg.y = 0.12104580787606478;
    msg.z = 0.892399352078284;

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
    msg.setTimeStamp(0.3673844574881586);
    msg.setSource(42870U);
    msg.setSourceEntity(252U);
    msg.setDestination(45457U);
    msg.setDestinationEntity(126U);
    msg.time = 0.5300371650863169;
    msg.x = 0.30916919820093103;
    msg.y = 0.8304659952292329;
    msg.z = 0.8751802903593119;

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
    msg.setTimeStamp(0.46004132271032294);
    msg.setSource(31951U);
    msg.setSourceEntity(18U);
    msg.setDestination(11761U);
    msg.setDestinationEntity(41U);
    msg.time = 0.5728025747003884;
    msg.x = 0.09809934943061305;
    msg.y = 0.8141798189571399;
    msg.z = 0.5850082223453379;

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
    msg.setTimeStamp(0.11264344100782608);
    msg.setSource(40905U);
    msg.setSourceEntity(209U);
    msg.setDestination(1664U);
    msg.setDestinationEntity(115U);
    msg.time = 0.5750669809196908;
    msg.x = 0.8406280341318332;
    msg.y = 0.6038178144908899;
    msg.z = 0.6944229861216189;

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
    msg.setTimeStamp(0.7045291677943633);
    msg.setSource(11004U);
    msg.setSourceEntity(37U);
    msg.setDestination(18778U);
    msg.setDestinationEntity(166U);
    msg.time = 0.8646214380850148;
    msg.x = 0.8364456312906045;
    msg.y = 0.2886609730827763;
    msg.z = 0.8605423987791203;

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
    msg.setTimeStamp(0.36935031761706905);
    msg.setSource(26084U);
    msg.setSourceEntity(85U);
    msg.setDestination(30485U);
    msg.setDestinationEntity(134U);
    msg.time = 0.7816168180089835;
    msg.x = 0.8180598302348842;
    msg.y = 0.0738278847985584;
    msg.z = 0.6313618509936255;

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
    msg.setTimeStamp(0.8099238091851199);
    msg.setSource(58508U);
    msg.setSourceEntity(228U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(125U);
    msg.time = 0.1360463748726799;
    msg.x = 0.47711232530268155;
    msg.y = 0.347885098808563;
    msg.z = 0.3598104257020569;

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
    msg.setTimeStamp(0.8015394253625184);
    msg.setSource(36830U);
    msg.setSourceEntity(51U);
    msg.setDestination(11765U);
    msg.setDestinationEntity(142U);
    msg.time = 0.8677122098714679;
    msg.x = 0.061176963942455975;
    msg.y = 0.4841482384026552;
    msg.z = 0.17438144869483574;

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
    msg.setTimeStamp(0.5769256548401378);
    msg.setSource(46089U);
    msg.setSourceEntity(87U);
    msg.setDestination(6574U);
    msg.setDestinationEntity(49U);
    msg.validity = 229U;
    msg.x = 0.3491138670248417;
    msg.y = 0.011163934989697477;
    msg.z = 0.9249752550052326;

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
    msg.setTimeStamp(0.16793307593550366);
    msg.setSource(26384U);
    msg.setSourceEntity(34U);
    msg.setDestination(25590U);
    msg.setDestinationEntity(245U);
    msg.validity = 247U;
    msg.x = 0.8986762240624601;
    msg.y = 0.9917182820032233;
    msg.z = 0.5035170978166892;

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
    msg.setTimeStamp(0.21127174158264017);
    msg.setSource(50276U);
    msg.setSourceEntity(18U);
    msg.setDestination(21650U);
    msg.setDestinationEntity(116U);
    msg.validity = 148U;
    msg.x = 0.8548217259683161;
    msg.y = 0.5839062107816353;
    msg.z = 0.9330270002561103;

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
    msg.setTimeStamp(0.10731364117165898);
    msg.setSource(39156U);
    msg.setSourceEntity(80U);
    msg.setDestination(26371U);
    msg.setDestinationEntity(8U);
    msg.validity = 208U;
    msg.x = 0.5818957632510563;
    msg.y = 0.7365259447583461;
    msg.z = 0.7291016212367826;

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
    msg.setTimeStamp(0.2479292235441375);
    msg.setSource(10082U);
    msg.setSourceEntity(72U);
    msg.setDestination(18762U);
    msg.setDestinationEntity(152U);
    msg.validity = 21U;
    msg.x = 0.6264507733526039;
    msg.y = 0.22186013934780202;
    msg.z = 0.4966228049061405;

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
    msg.setTimeStamp(0.8437616036853336);
    msg.setSource(38154U);
    msg.setSourceEntity(195U);
    msg.setDestination(21228U);
    msg.setDestinationEntity(173U);
    msg.validity = 51U;
    msg.x = 0.0007686134390483268;
    msg.y = 0.7276136409473876;
    msg.z = 0.6170603593267232;

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
    msg.setTimeStamp(0.1870932827840477);
    msg.setSource(39573U);
    msg.setSourceEntity(196U);
    msg.setDestination(38299U);
    msg.setDestinationEntity(248U);
    msg.time = 0.0268221475134226;
    msg.x = 0.26350621642932903;
    msg.y = 0.346164269324019;
    msg.z = 0.2775556128312716;

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
    msg.setTimeStamp(0.8877896881519025);
    msg.setSource(55546U);
    msg.setSourceEntity(13U);
    msg.setDestination(48080U);
    msg.setDestinationEntity(7U);
    msg.time = 0.7272353339388776;
    msg.x = 0.4850520026517231;
    msg.y = 0.450420501126348;
    msg.z = 0.5225345680324103;

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
    msg.setTimeStamp(0.7835225981669719);
    msg.setSource(50584U);
    msg.setSourceEntity(49U);
    msg.setDestination(52967U);
    msg.setDestinationEntity(43U);
    msg.time = 0.1046046717825998;
    msg.x = 0.5450880956078302;
    msg.y = 0.20102435852949407;
    msg.z = 0.04570175142256605;

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
    msg.setTimeStamp(0.8339356936850327);
    msg.setSource(25465U);
    msg.setSourceEntity(99U);
    msg.setDestination(13492U);
    msg.setDestinationEntity(161U);
    msg.validity = 67U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5309500614360773;
    tmp_msg_0.beam_height = 0.3871147441054903;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.7429029862561897;

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
    msg.setTimeStamp(0.6767289390763606);
    msg.setSource(63794U);
    msg.setSourceEntity(244U);
    msg.setDestination(35286U);
    msg.setDestinationEntity(0U);
    msg.validity = 231U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7777800211048387;
    tmp_msg_0.y = 0.799244743936666;
    tmp_msg_0.z = 0.7686320945142369;
    tmp_msg_0.phi = 0.3484851584537314;
    tmp_msg_0.theta = 0.15531261708232302;
    tmp_msg_0.psi = 0.11408345532295283;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.39705689957294243;
    tmp_msg_1.beam_height = 0.7215024156798835;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4740927079356335;

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
    msg.setTimeStamp(0.23242649621226985);
    msg.setSource(48487U);
    msg.setSourceEntity(10U);
    msg.setDestination(62917U);
    msg.setDestinationEntity(76U);
    msg.validity = 150U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4262394586244803;
    tmp_msg_0.y = 0.7705207454491827;
    tmp_msg_0.z = 0.7576623965213356;
    tmp_msg_0.phi = 0.0696705044436573;
    tmp_msg_0.theta = 0.16326131820774792;
    tmp_msg_0.psi = 0.3822445337155358;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.3416403086792297;

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
    msg.setTimeStamp(0.8823915384619656);
    msg.setSource(4U);
    msg.setSourceEntity(29U);
    msg.setDestination(10979U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8353640845367113;

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
    msg.setTimeStamp(0.7630345247901316);
    msg.setSource(16466U);
    msg.setSourceEntity(131U);
    msg.setDestination(49678U);
    msg.setDestinationEntity(122U);
    msg.value = 0.610174963942534;

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
    msg.setTimeStamp(0.8352545265699008);
    msg.setSource(3753U);
    msg.setSourceEntity(78U);
    msg.setDestination(45129U);
    msg.setDestinationEntity(11U);
    msg.value = 0.9987065568448533;

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
    msg.setTimeStamp(0.36482925429438984);
    msg.setSource(7768U);
    msg.setSourceEntity(92U);
    msg.setDestination(58072U);
    msg.setDestinationEntity(217U);
    msg.value = 0.3884639693094222;

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
    msg.setTimeStamp(0.9658516295842241);
    msg.setSource(14024U);
    msg.setSourceEntity(32U);
    msg.setDestination(50953U);
    msg.setDestinationEntity(112U);
    msg.value = 0.28630800536951595;

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
    msg.setTimeStamp(0.7937414380578321);
    msg.setSource(16564U);
    msg.setSourceEntity(79U);
    msg.setDestination(18390U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9299046600168661;

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
    msg.setTimeStamp(0.6402073271708114);
    msg.setSource(35308U);
    msg.setSourceEntity(224U);
    msg.setDestination(29679U);
    msg.setDestinationEntity(29U);
    msg.value = 0.12353477395018575;

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
    msg.setTimeStamp(0.8540201868989954);
    msg.setSource(20842U);
    msg.setSourceEntity(85U);
    msg.setDestination(53661U);
    msg.setDestinationEntity(189U);
    msg.value = 0.32480692159008373;

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
    msg.setTimeStamp(0.350025078385373);
    msg.setSource(51986U);
    msg.setSourceEntity(153U);
    msg.setDestination(41150U);
    msg.setDestinationEntity(250U);
    msg.value = 0.5992347125822222;

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
    msg.setTimeStamp(0.5414465369575082);
    msg.setSource(32352U);
    msg.setSourceEntity(114U);
    msg.setDestination(24302U);
    msg.setDestinationEntity(236U);
    msg.value = 0.08607966303020076;

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
    msg.setTimeStamp(0.24600236938893605);
    msg.setSource(39292U);
    msg.setSourceEntity(253U);
    msg.setDestination(56679U);
    msg.setDestinationEntity(170U);
    msg.value = 0.961429209607421;

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
    msg.setTimeStamp(0.4349875171234623);
    msg.setSource(6164U);
    msg.setSourceEntity(120U);
    msg.setDestination(25168U);
    msg.setDestinationEntity(102U);
    msg.value = 0.3384571015409962;

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
    msg.setTimeStamp(0.8054402142517553);
    msg.setSource(34765U);
    msg.setSourceEntity(118U);
    msg.setDestination(39087U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5379701214117849;

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
    msg.setTimeStamp(0.5235877423563544);
    msg.setSource(39735U);
    msg.setSourceEntity(244U);
    msg.setDestination(47443U);
    msg.setDestinationEntity(156U);
    msg.value = 0.17009788550030003;

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
    msg.setTimeStamp(0.07174039580175384);
    msg.setSource(22376U);
    msg.setSourceEntity(140U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(134U);
    msg.value = 0.0158007846622491;

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
    msg.setTimeStamp(0.31959980889944073);
    msg.setSource(58951U);
    msg.setSourceEntity(189U);
    msg.setDestination(41824U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5650644792827394;

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
    msg.setTimeStamp(0.37692055931804314);
    msg.setSource(14481U);
    msg.setSourceEntity(170U);
    msg.setDestination(20074U);
    msg.setDestinationEntity(218U);
    msg.value = 0.06653768643327795;

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
    msg.setTimeStamp(0.5354529805378935);
    msg.setSource(11596U);
    msg.setSourceEntity(50U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(95U);
    msg.value = 0.38143262807957135;

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
    msg.setTimeStamp(0.05162984097412737);
    msg.setSource(38741U);
    msg.setSourceEntity(215U);
    msg.setDestination(64452U);
    msg.setDestinationEntity(188U);
    msg.value = 0.5404674844223635;

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
    msg.setTimeStamp(0.7126312851751593);
    msg.setSource(36991U);
    msg.setSourceEntity(149U);
    msg.setDestination(14179U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5656307320696844;

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
    msg.setTimeStamp(0.9201337532381442);
    msg.setSource(44095U);
    msg.setSourceEntity(88U);
    msg.setDestination(11690U);
    msg.setDestinationEntity(247U);
    msg.value = 0.41291563973121137;

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
    msg.setTimeStamp(0.031239364374126444);
    msg.setSource(18667U);
    msg.setSourceEntity(170U);
    msg.setDestination(63826U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8699937306279915;

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
    msg.setTimeStamp(0.24899133604129242);
    msg.setSource(26328U);
    msg.setSourceEntity(130U);
    msg.setDestination(50742U);
    msg.setDestinationEntity(26U);
    msg.value = 0.35555033918203716;

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
    msg.setTimeStamp(0.51055402284472);
    msg.setSource(26429U);
    msg.setSourceEntity(29U);
    msg.setDestination(2226U);
    msg.setDestinationEntity(62U);
    msg.value = 0.971182275305312;

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
    msg.setTimeStamp(0.9717934368468516);
    msg.setSource(40674U);
    msg.setSourceEntity(155U);
    msg.setDestination(11031U);
    msg.setDestinationEntity(143U);
    msg.direction = 0.6690543398910714;
    msg.speed = 0.7244433645141194;
    msg.turbulence = 0.8271789344611344;

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
    msg.setTimeStamp(0.9281931794017888);
    msg.setSource(51201U);
    msg.setSourceEntity(195U);
    msg.setDestination(55994U);
    msg.setDestinationEntity(215U);
    msg.direction = 0.5485464464689236;
    msg.speed = 0.18896710697457286;
    msg.turbulence = 0.6972239198854894;

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
    msg.setTimeStamp(0.6316162225123765);
    msg.setSource(51001U);
    msg.setSourceEntity(140U);
    msg.setDestination(4587U);
    msg.setDestinationEntity(219U);
    msg.direction = 0.15158066673389203;
    msg.speed = 0.354705962323844;
    msg.turbulence = 0.4015283169424504;

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
    msg.setTimeStamp(0.03759161833888358);
    msg.setSource(55429U);
    msg.setSourceEntity(16U);
    msg.setDestination(45882U);
    msg.setDestinationEntity(68U);
    msg.value = 0.8585616114199007;

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
    msg.setTimeStamp(0.011350260378796828);
    msg.setSource(42734U);
    msg.setSourceEntity(141U);
    msg.setDestination(65152U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6017656695792718;

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
    msg.setTimeStamp(0.9082944853087835);
    msg.setSource(63297U);
    msg.setSourceEntity(56U);
    msg.setDestination(29256U);
    msg.setDestinationEntity(220U);
    msg.value = 0.45475577057668415;

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
    msg.setTimeStamp(0.8905824339172852);
    msg.setSource(11270U);
    msg.setSourceEntity(17U);
    msg.setDestination(26265U);
    msg.setDestinationEntity(194U);
    msg.value.assign("NNLXQSPNQKNCWMEFWFRADJDWDAJKSQMULXKGEMFESOSKPGNHPUKQSOLGDCJIVUFNZDEPQURTCSULWQWFJJPKILTBWAYBYWXFPIAUBVWOWRZLOAYLUEVHORQTGPNAMVPBTCER");

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
    msg.setTimeStamp(0.5762043981289728);
    msg.setSource(943U);
    msg.setSourceEntity(65U);
    msg.setDestination(35798U);
    msg.setDestinationEntity(195U);
    msg.value.assign("ARWXROGIBJYVCTAANGWYZCHLGQFAMOABHUFYNPFOVCOCSFSBEQNHVRDNPJGXPQYWMWCZAOTDDH");

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
    msg.setTimeStamp(0.3008521747664541);
    msg.setSource(46390U);
    msg.setSourceEntity(218U);
    msg.setDestination(24690U);
    msg.setDestinationEntity(116U);
    msg.value.assign("ZWRXICLWEFSRAZVFOVBPFUBSOOXMMYZDNCTBQVQXPBHMGJVMXXXSYTLOSEQUKQJANDWABZFBNNAMGNYKJYHNYVJJJGPUDOMIJKNWYCRROVHREEWVQNAHDVKUQNYJPPKRDLKGTCDHLAWIYADBGDOUABSKFGFKKTLCCPEEPXQEZBSPFQMYGOFZULTTISWQLCRPXZVDTTWHEIMIGTHFBR");

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
    msg.setTimeStamp(0.17417264750954964);
    msg.setSource(263U);
    msg.setSourceEntity(151U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(82U);
    const signed char tmp_msg_0[] = {79, -67, 26, -126, 28, -27, -53, -100, 116, -124, 63, 39, -44, 1, -45, -98, -23, 59, 120, -98, 62, 58, 118, 121, -41, -68, -87, 63, 36, -63, 85, 30, 35, 119, -29, -108, 19, -119, 81, -2, -95, -81, 33, -48, 33, 94, -85, -126, -44, 29, -20, -59, -77, -61, 25, -56, -24, 24, -125, 60, 14, 1, 116, 7, 123, 58, 48, -29, -59, -18, 2, -4, -91, -61, -3, 58, -41, -26, 111, -40, -6};
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
    msg.setTimeStamp(0.8767695572382042);
    msg.setSource(55594U);
    msg.setSourceEntity(100U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(34U);
    const signed char tmp_msg_0[] = {94, 99, 23, -79, 111, -32, -113, -99, -83, -2, 63, -76, 13, 35, 68, 92, 118, -4, -101, -80, 26, -10, 34, 87, 115, -24, 54, -68, 101, 107, -89, 13, -96, -125, -27, 27, 66};
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
    msg.setTimeStamp(0.5488654331293852);
    msg.setSource(44631U);
    msg.setSourceEntity(170U);
    msg.setDestination(29367U);
    msg.setDestinationEntity(253U);
    const signed char tmp_msg_0[] = {-112, 77, 55, 44, -127, 120, -36, 15, -5, 74, -90, -29, -42, 56, 118, 59, -35, 121, 5, 76, -81, 125, -63, -34, -81, -7, 54, 13, -28, 74, -14, 61, -116, -54, -35, -87, 92, -58, -103, 24, -35, -84, -124, -128, 22, -69, 43, -10, -66, 93, 21, 72, 122, 64, -108, 117, 111, -46, 20, -102, 118, -104, -115, 28, -23, -40, -116, -123, 113, -104, 32, 43, -77, 86, 21, 78, -6, -16, -115, -85, 63, 8, 5, -34, 116, 84, 97, -42, 68, 30, -59, 62, -75, -117, 91, 111, -82, -89, -100, -119, -67, 71, 14, 91, -83, 104, -20, -91, -32, -15, 95, 48, 31, 78, -103, -35, -42, 20, -41, 1, 118, -59, 110, -61, -87, 20, 35, 51, 54, 94, -115, -105, 79, -24, -40, 27, -24, 121, 86, -102, 116, -18, 10, -69, 13, -22, 0, 77, 70, -58, 71, 3, -12, -120, -120, 34, 114, 53, 15, -3, -63, 64, 60, 53, 6, -113, -17, 26, -8, -51, 30, -32, 1, 61, -52, -33, -67, -78, -95, 116, 100, 55, 84, -33, 29, 5, -86, 74, 66, 15, -6, -31, 3, 33, -50, -126, -51, 14, 20, 65, -52, 7, 68, 27, -95, -108, 36, -36, -38, 4, 22, -61, 29, 24, 32, -19, -70, 122, -51, -49, -103, -81, -28, 55, -44, -49, 44, 51, -30, -51};
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
    msg.setTimeStamp(0.7718431384913086);
    msg.setSource(49988U);
    msg.setSourceEntity(78U);
    msg.setDestination(1528U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6623747451106965;

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
    msg.setTimeStamp(0.6866139242503257);
    msg.setSource(16534U);
    msg.setSourceEntity(97U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(7U);
    msg.value = 0.5251595021665287;

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
    msg.setTimeStamp(0.9425883116346339);
    msg.setSource(53176U);
    msg.setSourceEntity(63U);
    msg.setDestination(38566U);
    msg.setDestinationEntity(243U);
    msg.value = 0.507260859542568;

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
    msg.setTimeStamp(0.5795025260038652);
    msg.setSource(46520U);
    msg.setSourceEntity(236U);
    msg.setDestination(35304U);
    msg.setDestinationEntity(4U);
    msg.type = 93U;
    msg.frequency = 1369772714U;
    msg.min_range = 33907U;
    msg.max_range = 37992U;
    msg.bits_per_point = 213U;
    msg.scale_factor = 0.8366192672092922;
    const signed char tmp_msg_0[] = {-87, -62, -45, 74, -117, -69, -38, 42, 118, -15, -21, -56, -76, -105, 12, -77, -35, -58, -17, 17, -89, -14, 80, -83, 55, 32, -106, 32, -40, -24, -108, -31, -70, 49, 24, -6, -51, -46, 67, -28, -17, -35, 98, -107, -98, -19, 67, -90, -13, -109, 91, 38, -49, 7, -105, -84, 79, 81, -80, 66, -25, -124, 71, 60, -116, -23, -27, -60, 81, 26, 0, -8, -69, -30, 15, -7, 15, -14, -65, -127, -107, -89, 120, -113, 52, 110, 122, -85, 68, 110, 32, 67, 73, 101, -32, -117, -127, 102, -48, 49, 55, -85, 113, 28, -66, 102, 35, -54, -42, -118, 17, 114, 3, 117, 11, 91, -106, -6, 81, -97, -27, -94, -44, 126, 60, -12, 56, -77, 89, 66, -103};
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
    msg.setTimeStamp(0.1494387968249331);
    msg.setSource(19707U);
    msg.setSourceEntity(148U);
    msg.setDestination(64636U);
    msg.setDestinationEntity(9U);
    msg.type = 178U;
    msg.frequency = 2058081046U;
    msg.min_range = 60422U;
    msg.max_range = 41498U;
    msg.bits_per_point = 54U;
    msg.scale_factor = 0.12274735716978147;
    const signed char tmp_msg_0[] = {81, -122, -70, 98, -89, 94, -122, 110, -67, 111, -48, -123, 19, -100, 67, -33, -126, -34, -11, 118, -53, -57, -46, 42, -33, -51, -6, -122, -33, 11, -93, 21, 100, -2, -109, 116, 61, -66, 54, -105, 62, -113, -37, 24, 13, -111, 123, -104, -76, 17, -116, 51, -80, -14, 1, 71, -22, -22, -16, 21, 57, -90, 112, 6, -98, -102, 98, 119, 88, -101, 36, -13, -45, 58, -18, 113, 58, 72, 87, 112, -40, -125, -1, 120, 47, 63, -128, 19, 36, 6, -44, -31, -5, -80, 71, 33, 34, -79, -28, -75, 124, -83, -113, 20, 4, -57, 37, 121, -10, 51, 94, -113, -96, -49, 4, 62, -101, 120, -71, -76, -37, -15, 8, -27, -64, -128, -97, 85, 37, -105, -56, 13, -13, -68, -59, 85, -4, -58, 126, -128, 113, -113, 17, 26, 104, -103, -35, 100, 113, -48, 70, -23, -38, 1, -115, 89, -118, 115, 30, -124, 18, 72, -123, 92, -32, 93, -63, 103, -23, -110, 60, 14, -125, -51, 119, -100, 112, -33, 52, 4, 8, 41, 121, -53, -15, 68, -101, -43, -120, 123, 45, 4, 36, -75, -11, -15, 45, 36, 113, -88};
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
    msg.setTimeStamp(0.08108982288625965);
    msg.setSource(3608U);
    msg.setSourceEntity(201U);
    msg.setDestination(18354U);
    msg.setDestinationEntity(231U);
    msg.type = 130U;
    msg.frequency = 155370763U;
    msg.min_range = 37517U;
    msg.max_range = 3571U;
    msg.bits_per_point = 139U;
    msg.scale_factor = 0.9972033150591785;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4139319310596732;
    tmp_msg_0.beam_height = 0.23170219398939584;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-74, -109, 8, 113, 123, 78, -67, -63, -6, 93, -121, -117, -108, -120, -38, 62, -20, 34, 5, 46, -94, -86, -69, 109, 27, 7, 67, -42, 36, -46, 28, -39, 14, 50, -63, -24, -87, 106, 117, 24, -40, -122, -126, -81, 33, -82, 34, 37, -21, 75, -62, -123, 99, -49, -34, -2, -116, 45, -71, 38, 36, -110, -70, -8, -5, 112, 8, 108, -64, -5, -45, 8, -13, -20, -16, 81, 65, -67, -46, 105, -38, -83};
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
    msg.setTimeStamp(0.9715888305420425);
    msg.setSource(6958U);
    msg.setSourceEntity(125U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.4180968495876827);
    msg.setSource(38312U);
    msg.setSourceEntity(15U);
    msg.setDestination(41687U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.8823825568316203);
    msg.setSource(40698U);
    msg.setSourceEntity(170U);
    msg.setDestination(21120U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.03027467841777398);
    msg.setSource(20908U);
    msg.setSourceEntity(161U);
    msg.setDestination(64651U);
    msg.setDestinationEntity(69U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.5116911135052103);
    msg.setSource(38980U);
    msg.setSourceEntity(95U);
    msg.setDestination(28128U);
    msg.setDestinationEntity(159U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.17152479854569858);
    msg.setSource(49144U);
    msg.setSourceEntity(218U);
    msg.setDestination(57324U);
    msg.setDestinationEntity(140U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.5939572759655598);
    msg.setSource(9587U);
    msg.setSourceEntity(77U);
    msg.setDestination(44034U);
    msg.setDestinationEntity(154U);
    msg.value = 0.01764185945168506;
    msg.confidence = 0.7664317279148921;
    msg.opmodes.assign("KMGELCKJOUYTQXUAJAJBMOPIXAUKEOFHNZFLBDSLSXFZLZMNRQWQYBDTDGTY");

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
    msg.setTimeStamp(0.10140946356336877);
    msg.setSource(20119U);
    msg.setSourceEntity(29U);
    msg.setDestination(51515U);
    msg.setDestinationEntity(152U);
    msg.value = 0.4547486346170111;
    msg.confidence = 0.4205513854141618;
    msg.opmodes.assign("KMCHEIQCMYDDXTFYNWPRCNSNPKXUZORAQGYOLUEAFFDBDLKTCQBWHZ");

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
    msg.setTimeStamp(0.40469642351919266);
    msg.setSource(59904U);
    msg.setSourceEntity(215U);
    msg.setDestination(21912U);
    msg.setDestinationEntity(63U);
    msg.value = 0.6771880293532927;
    msg.confidence = 0.6033431504916926;
    msg.opmodes.assign("YFHSQTTDJVQPBGCRWLRMEJBDVXTCHBGFPWDAGJTQQPHMKVKSSDEIEWKFXCNTAZ");

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
    msg.setTimeStamp(0.6823650184004582);
    msg.setSource(48904U);
    msg.setSourceEntity(143U);
    msg.setDestination(23132U);
    msg.setDestinationEntity(83U);
    msg.itow = 1144260564U;
    msg.lat = 0.28537313115401697;
    msg.lon = 0.04767503182553967;
    msg.height_ell = 0.42450215912298295;
    msg.height_sea = 0.8707250259136448;
    msg.hacc = 0.8134651445285258;
    msg.vacc = 0.11638054581502955;
    msg.vel_n = 0.5561344734664604;
    msg.vel_e = 0.7280541266743732;
    msg.vel_d = 0.26217069953449357;
    msg.speed = 0.35120071484645055;
    msg.gspeed = 0.23639783387282975;
    msg.heading = 0.6890410071204467;
    msg.sacc = 0.17769218204184478;
    msg.cacc = 0.504680472182848;

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
    msg.setTimeStamp(0.14220398011839286);
    msg.setSource(48119U);
    msg.setSourceEntity(10U);
    msg.setDestination(36138U);
    msg.setDestinationEntity(125U);
    msg.itow = 4275404944U;
    msg.lat = 0.20300780016011322;
    msg.lon = 0.012903469027361392;
    msg.height_ell = 0.497988747716937;
    msg.height_sea = 0.7336433503921972;
    msg.hacc = 0.8441863756766755;
    msg.vacc = 0.4349356894122991;
    msg.vel_n = 0.9470210297404213;
    msg.vel_e = 0.25501784512843106;
    msg.vel_d = 0.5410063342270823;
    msg.speed = 0.7172345626637691;
    msg.gspeed = 0.5954976400181399;
    msg.heading = 0.5412570964612387;
    msg.sacc = 0.9129497328322805;
    msg.cacc = 0.5636324563943871;

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
    msg.setTimeStamp(0.6462579978343842);
    msg.setSource(16938U);
    msg.setSourceEntity(123U);
    msg.setDestination(41195U);
    msg.setDestinationEntity(235U);
    msg.itow = 1450028515U;
    msg.lat = 0.9211214723845744;
    msg.lon = 0.07277690394663261;
    msg.height_ell = 0.10062126251608594;
    msg.height_sea = 0.870301037800755;
    msg.hacc = 0.9223413443903394;
    msg.vacc = 0.4109404072788011;
    msg.vel_n = 0.6271999687619435;
    msg.vel_e = 0.7126392592056784;
    msg.vel_d = 0.7727403772277011;
    msg.speed = 0.2166442792582981;
    msg.gspeed = 0.5647023734664779;
    msg.heading = 0.3502366152221338;
    msg.sacc = 0.1100170175346249;
    msg.cacc = 0.7469862350764371;

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
    msg.setTimeStamp(0.6431807796370345);
    msg.setSource(40821U);
    msg.setSourceEntity(166U);
    msg.setDestination(28638U);
    msg.setDestinationEntity(250U);
    msg.id = 69U;
    msg.value = 0.008721034638939917;

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
    msg.setTimeStamp(0.07938488348250095);
    msg.setSource(28506U);
    msg.setSourceEntity(239U);
    msg.setDestination(21841U);
    msg.setDestinationEntity(143U);
    msg.id = 196U;
    msg.value = 0.9091920494269593;

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
    msg.setTimeStamp(0.26963371227499644);
    msg.setSource(47391U);
    msg.setSourceEntity(204U);
    msg.setDestination(23678U);
    msg.setDestinationEntity(210U);
    msg.id = 155U;
    msg.value = 0.991337669802035;

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
    msg.setTimeStamp(0.5464621682419122);
    msg.setSource(29268U);
    msg.setSourceEntity(202U);
    msg.setDestination(21946U);
    msg.setDestinationEntity(204U);
    msg.x = 0.30062725318320616;
    msg.y = 0.8550419665692073;
    msg.z = 0.1371919626183501;
    msg.phi = 0.8360315332540512;
    msg.theta = 0.15215122120532587;
    msg.psi = 0.2203393266872412;

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
    msg.setTimeStamp(0.21785250898079833);
    msg.setSource(18857U);
    msg.setSourceEntity(182U);
    msg.setDestination(27505U);
    msg.setDestinationEntity(115U);
    msg.x = 0.5690928739878631;
    msg.y = 0.037140283297512844;
    msg.z = 0.9588791120759967;
    msg.phi = 0.1730278575452343;
    msg.theta = 0.6269351431852723;
    msg.psi = 0.4559259700826469;

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
    msg.setTimeStamp(0.28926273267987224);
    msg.setSource(30404U);
    msg.setSourceEntity(69U);
    msg.setDestination(51255U);
    msg.setDestinationEntity(226U);
    msg.x = 0.5154512060316327;
    msg.y = 0.8191741500067822;
    msg.z = 0.33807150397228414;
    msg.phi = 0.6101543676066951;
    msg.theta = 0.08669576708027793;
    msg.psi = 0.2558415017926601;

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
    msg.setTimeStamp(0.42705378129633764);
    msg.setSource(10734U);
    msg.setSourceEntity(12U);
    msg.setDestination(18179U);
    msg.setDestinationEntity(99U);
    msg.beam_width = 0.6634986987384806;
    msg.beam_height = 0.7547831374805959;

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
    msg.setTimeStamp(0.688445119612094);
    msg.setSource(54412U);
    msg.setSourceEntity(160U);
    msg.setDestination(36260U);
    msg.setDestinationEntity(224U);
    msg.beam_width = 0.4743397775034074;
    msg.beam_height = 0.5063250504042694;

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
    msg.setTimeStamp(0.9125570347258631);
    msg.setSource(27712U);
    msg.setSourceEntity(75U);
    msg.setDestination(33809U);
    msg.setDestinationEntity(187U);
    msg.beam_width = 0.14567738816119968;
    msg.beam_height = 0.4954470810272966;

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
    msg.setTimeStamp(0.7018377784645486);
    msg.setSource(14724U);
    msg.setSourceEntity(136U);
    msg.setDestination(48674U);
    msg.setDestinationEntity(126U);
    msg.sane = 134U;

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
    msg.setTimeStamp(0.3108925327197979);
    msg.setSource(18647U);
    msg.setSourceEntity(244U);
    msg.setDestination(2725U);
    msg.setDestinationEntity(36U);
    msg.sane = 147U;

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
    msg.setTimeStamp(0.44667539806431567);
    msg.setSource(9081U);
    msg.setSourceEntity(101U);
    msg.setDestination(4825U);
    msg.setDestinationEntity(156U);
    msg.sane = 198U;

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
    msg.setTimeStamp(0.38438501663750857);
    msg.setSource(62067U);
    msg.setSourceEntity(166U);
    msg.setDestination(20188U);
    msg.setDestinationEntity(191U);
    msg.value = 0.03442529488819779;

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
    msg.setTimeStamp(0.702995000129778);
    msg.setSource(1159U);
    msg.setSourceEntity(177U);
    msg.setDestination(52881U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8063574776795106;

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
    msg.setTimeStamp(0.9036987803348833);
    msg.setSource(13267U);
    msg.setSourceEntity(161U);
    msg.setDestination(50262U);
    msg.setDestinationEntity(171U);
    msg.value = 0.03394137060493685;

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
    msg.setTimeStamp(0.6259752922788178);
    msg.setSource(43963U);
    msg.setSourceEntity(189U);
    msg.setDestination(15843U);
    msg.setDestinationEntity(42U);
    msg.value = 0.9868213496029158;

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
    msg.setTimeStamp(0.49787303494906565);
    msg.setSource(19125U);
    msg.setSourceEntity(55U);
    msg.setDestination(29864U);
    msg.setDestinationEntity(11U);
    msg.value = 0.9865019928604454;

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
    msg.setTimeStamp(0.8602993425783987);
    msg.setSource(47781U);
    msg.setSourceEntity(70U);
    msg.setDestination(29034U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6890878243939345;

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
    msg.setTimeStamp(0.039854490385586305);
    msg.setSource(45441U);
    msg.setSourceEntity(12U);
    msg.setDestination(5568U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6767869186887433;

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
    msg.setTimeStamp(0.6106437003124596);
    msg.setSource(45857U);
    msg.setSourceEntity(146U);
    msg.setDestination(21993U);
    msg.setDestinationEntity(5U);
    msg.value = 0.9370870217044631;

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
    msg.setTimeStamp(0.4739977197950086);
    msg.setSource(55064U);
    msg.setSourceEntity(223U);
    msg.setDestination(17477U);
    msg.setDestinationEntity(224U);
    msg.value = 0.3758305422135497;

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
    msg.setTimeStamp(0.06776017664464873);
    msg.setSource(1334U);
    msg.setSourceEntity(227U);
    msg.setDestination(49651U);
    msg.setDestinationEntity(104U);
    msg.value = 0.3105469654681503;

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
    msg.setTimeStamp(0.32775216595555323);
    msg.setSource(13409U);
    msg.setSourceEntity(216U);
    msg.setDestination(40392U);
    msg.setDestinationEntity(1U);
    msg.value = 0.4507769843583609;

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
    msg.setTimeStamp(0.5635068393030217);
    msg.setSource(55311U);
    msg.setSourceEntity(244U);
    msg.setDestination(53130U);
    msg.setDestinationEntity(19U);
    msg.value = 0.17616427410280155;

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
    msg.setTimeStamp(0.1807506929214998);
    msg.setSource(22729U);
    msg.setSourceEntity(124U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(181U);
    msg.value = 0.35903709364408454;

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
    msg.setTimeStamp(0.27494036265455035);
    msg.setSource(59315U);
    msg.setSourceEntity(210U);
    msg.setDestination(32568U);
    msg.setDestinationEntity(80U);
    msg.value = 0.7608722209461016;

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
    msg.setTimeStamp(0.037671305615370576);
    msg.setSource(62317U);
    msg.setSourceEntity(60U);
    msg.setDestination(63914U);
    msg.setDestinationEntity(214U);
    msg.value = 0.005003187678820575;

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
    msg.setTimeStamp(0.20663404557968246);
    msg.setSource(3828U);
    msg.setSourceEntity(220U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6539775928606194;

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
    msg.setTimeStamp(0.6920375746009184);
    msg.setSource(11097U);
    msg.setSourceEntity(64U);
    msg.setDestination(52661U);
    msg.setDestinationEntity(85U);
    msg.value = 0.7206795140631754;

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
    msg.setTimeStamp(0.705141123849044);
    msg.setSource(45099U);
    msg.setSourceEntity(145U);
    msg.setDestination(3283U);
    msg.setDestinationEntity(229U);
    msg.value = 0.6089371716712223;

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
    msg.setTimeStamp(0.8968588315720635);
    msg.setSource(15321U);
    msg.setSourceEntity(231U);
    msg.setDestination(40268U);
    msg.setDestinationEntity(126U);
    msg.value = 0.36834285903684905;

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
    msg.setTimeStamp(0.13513421497987843);
    msg.setSource(3577U);
    msg.setSourceEntity(176U);
    msg.setDestination(26104U);
    msg.setDestinationEntity(232U);
    msg.value = 0.47850537825909034;

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
    msg.setTimeStamp(0.6961105914685297);
    msg.setSource(50811U);
    msg.setSourceEntity(237U);
    msg.setDestination(15271U);
    msg.setDestinationEntity(71U);
    msg.value = 0.9006787193933663;

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
    msg.setTimeStamp(0.9435530880817226);
    msg.setSource(29304U);
    msg.setSourceEntity(132U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5763548789814024;

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
    msg.setTimeStamp(0.1998497835655123);
    msg.setSource(6017U);
    msg.setSourceEntity(80U);
    msg.setDestination(30630U);
    msg.setDestinationEntity(175U);
    msg.value = 0.021952591243296293;

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
    msg.setTimeStamp(0.6180805859493417);
    msg.setSource(24433U);
    msg.setSourceEntity(24U);
    msg.setDestination(24906U);
    msg.setDestinationEntity(162U);
    msg.value = 0.32346494589256447;

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
    msg.setTimeStamp(0.5804171289167472);
    msg.setSource(28134U);
    msg.setSourceEntity(153U);
    msg.setDestination(21599U);
    msg.setDestinationEntity(36U);
    msg.validity = 39856U;
    msg.type = 68U;
    msg.tow = 1551104807U;
    msg.base_lat = 0.8332543082644972;
    msg.base_lon = 0.9774350335561938;
    msg.base_height = 0.676333734582609;
    msg.n = 0.3935425889032218;
    msg.e = 0.8276968050542939;
    msg.d = 0.45142747059343036;
    msg.v_n = 0.9726998192784131;
    msg.v_e = 0.7658856655563527;
    msg.v_d = 0.8047256578736616;
    msg.satellites = 254U;
    msg.iar_hyp = 40373U;
    msg.iar_ratio = 0.09611229208863026;

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
    msg.setTimeStamp(0.2771887551812373);
    msg.setSource(53325U);
    msg.setSourceEntity(236U);
    msg.setDestination(8694U);
    msg.setDestinationEntity(101U);
    msg.validity = 33490U;
    msg.type = 145U;
    msg.tow = 4207975091U;
    msg.base_lat = 0.604741834347565;
    msg.base_lon = 0.5598026706308116;
    msg.base_height = 0.6954421491592575;
    msg.n = 0.07835085802471686;
    msg.e = 0.01494476850561166;
    msg.d = 0.7803957717384051;
    msg.v_n = 0.5356408399389472;
    msg.v_e = 0.025434862516441226;
    msg.v_d = 0.5216676779730058;
    msg.satellites = 218U;
    msg.iar_hyp = 27453U;
    msg.iar_ratio = 0.34445895338314625;

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
    msg.setTimeStamp(0.7291845143312699);
    msg.setSource(56361U);
    msg.setSourceEntity(237U);
    msg.setDestination(48524U);
    msg.setDestinationEntity(148U);
    msg.validity = 22415U;
    msg.type = 101U;
    msg.tow = 419826428U;
    msg.base_lat = 0.5387552011796888;
    msg.base_lon = 0.7887454401516095;
    msg.base_height = 0.5576298387211702;
    msg.n = 0.838068745267393;
    msg.e = 0.1091064870125481;
    msg.d = 0.8547095204475728;
    msg.v_n = 0.32440688758276726;
    msg.v_e = 0.1084827016858223;
    msg.v_d = 0.3680236298109537;
    msg.satellites = 214U;
    msg.iar_hyp = 24027U;
    msg.iar_ratio = 0.6097698193043417;

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
    msg.setTimeStamp(0.5470714802862817);
    msg.setSource(27177U);
    msg.setSourceEntity(170U);
    msg.setDestination(51017U);
    msg.setDestinationEntity(128U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.44075855467312974;
    tmp_msg_0.lon = 0.5590275479146497;
    tmp_msg_0.height = 0.6891978303945488;
    tmp_msg_0.x = 0.4912470225280522;
    tmp_msg_0.y = 0.4198162368147762;
    tmp_msg_0.z = 0.49066779091789214;
    tmp_msg_0.phi = 0.2589026660539072;
    tmp_msg_0.theta = 0.06892524019351143;
    tmp_msg_0.psi = 0.9627552247257911;
    tmp_msg_0.u = 0.5212096679546984;
    tmp_msg_0.v = 0.95429489609657;
    tmp_msg_0.w = 0.973503127442549;
    tmp_msg_0.vx = 0.2583480699361884;
    tmp_msg_0.vy = 0.5990295709759009;
    tmp_msg_0.vz = 0.28723178262815774;
    tmp_msg_0.p = 0.2739534757152008;
    tmp_msg_0.q = 0.8416095430790335;
    tmp_msg_0.r = 0.7943202528473745;
    tmp_msg_0.depth = 0.3310056255596727;
    tmp_msg_0.alt = 0.3790146356575871;
    msg.state.set(tmp_msg_0);
    msg.type = 110U;

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
    msg.setTimeStamp(0.4646074526921329);
    msg.setSource(12507U);
    msg.setSourceEntity(119U);
    msg.setDestination(34213U);
    msg.setDestinationEntity(19U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7324974058352796;
    tmp_msg_0.lon = 0.18155018561905256;
    tmp_msg_0.height = 0.7396410197609841;
    tmp_msg_0.x = 0.4432622841691677;
    tmp_msg_0.y = 0.6911922199039222;
    tmp_msg_0.z = 0.3233541384031563;
    tmp_msg_0.phi = 0.07564386827836833;
    tmp_msg_0.theta = 0.7646724588345288;
    tmp_msg_0.psi = 0.3732868803996524;
    tmp_msg_0.u = 0.12546939125203904;
    tmp_msg_0.v = 0.4060312173998004;
    tmp_msg_0.w = 0.015268093591374154;
    tmp_msg_0.vx = 0.1544675408319921;
    tmp_msg_0.vy = 0.40225599288375546;
    tmp_msg_0.vz = 0.4816547522759722;
    tmp_msg_0.p = 0.4769923189879377;
    tmp_msg_0.q = 0.254986223761248;
    tmp_msg_0.r = 0.6566541172002789;
    tmp_msg_0.depth = 0.24842779056439712;
    tmp_msg_0.alt = 0.5391442551436805;
    msg.state.set(tmp_msg_0);
    msg.type = 171U;

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
    msg.setTimeStamp(0.9046086881502148);
    msg.setSource(19085U);
    msg.setSourceEntity(98U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(86U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8682780599037861;
    tmp_msg_0.lon = 0.2821794505341296;
    tmp_msg_0.height = 0.5740656150745571;
    tmp_msg_0.x = 0.47403154889537824;
    tmp_msg_0.y = 0.653840031655394;
    tmp_msg_0.z = 0.5480757304503273;
    tmp_msg_0.phi = 0.6730396217758693;
    tmp_msg_0.theta = 0.9470061990949932;
    tmp_msg_0.psi = 0.06984440660895874;
    tmp_msg_0.u = 0.3946942824438593;
    tmp_msg_0.v = 0.803734034700892;
    tmp_msg_0.w = 0.8059578165601098;
    tmp_msg_0.vx = 0.6715062431600064;
    tmp_msg_0.vy = 0.7264366904391395;
    tmp_msg_0.vz = 0.30425289265974853;
    tmp_msg_0.p = 0.45196733089197283;
    tmp_msg_0.q = 0.21481398853368916;
    tmp_msg_0.r = 0.9540512704692151;
    tmp_msg_0.depth = 0.03298518458767774;
    tmp_msg_0.alt = 0.14742319587769992;
    msg.state.set(tmp_msg_0);
    msg.type = 9U;

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
    msg.setTimeStamp(0.2321621825272363);
    msg.setSource(23538U);
    msg.setSourceEntity(231U);
    msg.setDestination(17806U);
    msg.setDestinationEntity(111U);
    msg.value = 0.20035292426923879;

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
    msg.setTimeStamp(0.8532409474564557);
    msg.setSource(14993U);
    msg.setSourceEntity(248U);
    msg.setDestination(63972U);
    msg.setDestinationEntity(226U);
    msg.value = 0.42412495413089846;

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
    msg.setTimeStamp(0.8402668322855187);
    msg.setSource(30672U);
    msg.setSourceEntity(85U);
    msg.setDestination(15665U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6549194851625337;

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
    msg.setTimeStamp(0.35236701306700025);
    msg.setSource(36U);
    msg.setSourceEntity(242U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(198U);
    msg.value = 0.71948739265076;

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
    msg.setTimeStamp(0.47020712289637967);
    msg.setSource(35765U);
    msg.setSourceEntity(1U);
    msg.setDestination(38871U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9454909384035348;

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
    msg.setTimeStamp(0.8176635878748263);
    msg.setSource(41079U);
    msg.setSourceEntity(105U);
    msg.setDestination(526U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7029532229179988;

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
    msg.setTimeStamp(0.3439056421360941);
    msg.setSource(27957U);
    msg.setSourceEntity(142U);
    msg.setDestination(32991U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8067234049673795;

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
    msg.setTimeStamp(0.3332895682173107);
    msg.setSource(49258U);
    msg.setSourceEntity(59U);
    msg.setDestination(36298U);
    msg.setDestinationEntity(19U);
    msg.value = 0.5675555241768677;

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
    msg.setTimeStamp(0.098596392906945);
    msg.setSource(15257U);
    msg.setSourceEntity(226U);
    msg.setDestination(52763U);
    msg.setDestinationEntity(118U);
    msg.value = 0.06937962079631221;

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
    msg.setTimeStamp(0.4363521920486536);
    msg.setSource(27339U);
    msg.setSourceEntity(138U);
    msg.setDestination(8334U);
    msg.setDestinationEntity(175U);
    msg.value = 0.517570268328968;

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
    msg.setTimeStamp(0.3936978456567731);
    msg.setSource(23297U);
    msg.setSourceEntity(123U);
    msg.setDestination(8792U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5963358706896139;

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
    msg.setTimeStamp(0.5285028246450265);
    msg.setSource(39579U);
    msg.setSourceEntity(229U);
    msg.setDestination(4582U);
    msg.setDestinationEntity(244U);
    msg.value = 0.21650072450394098;

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
    msg.setTimeStamp(0.7913099104459764);
    msg.setSource(43881U);
    msg.setSourceEntity(11U);
    msg.setDestination(33125U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6018497024815751;

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
    msg.setTimeStamp(0.809294615311858);
    msg.setSource(60780U);
    msg.setSourceEntity(76U);
    msg.setDestination(10896U);
    msg.setDestinationEntity(71U);
    msg.value = 0.018443424182716717;

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
    msg.setTimeStamp(0.419017609996151);
    msg.setSource(35364U);
    msg.setSourceEntity(11U);
    msg.setDestination(36671U);
    msg.setDestinationEntity(106U);
    msg.value = 0.36767060475068913;

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
    msg.setTimeStamp(0.7750768916400422);
    msg.setSource(51066U);
    msg.setSourceEntity(0U);
    msg.setDestination(37729U);
    msg.setDestinationEntity(106U);
    msg.id = 53U;
    msg.zoom = 79U;
    msg.action = 233U;

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
    msg.setTimeStamp(0.06173940820722057);
    msg.setSource(35578U);
    msg.setSourceEntity(13U);
    msg.setDestination(57473U);
    msg.setDestinationEntity(46U);
    msg.id = 204U;
    msg.zoom = 3U;
    msg.action = 83U;

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
    msg.setTimeStamp(0.45472114724032286);
    msg.setSource(39236U);
    msg.setSourceEntity(212U);
    msg.setDestination(49611U);
    msg.setDestinationEntity(152U);
    msg.id = 219U;
    msg.zoom = 159U;
    msg.action = 45U;

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
    msg.setTimeStamp(0.8395942039188834);
    msg.setSource(38226U);
    msg.setSourceEntity(130U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(201U);
    msg.id = 102U;
    msg.value = 0.6688721190920939;

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
    msg.setTimeStamp(0.878906254994821);
    msg.setSource(34576U);
    msg.setSourceEntity(62U);
    msg.setDestination(45154U);
    msg.setDestinationEntity(206U);
    msg.id = 249U;
    msg.value = 0.7215559910080207;

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
    msg.setTimeStamp(0.21378341794159506);
    msg.setSource(39880U);
    msg.setSourceEntity(66U);
    msg.setDestination(4283U);
    msg.setDestinationEntity(157U);
    msg.id = 203U;
    msg.value = 0.30866873685797;

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
    msg.setTimeStamp(0.16286022579241854);
    msg.setSource(58251U);
    msg.setSourceEntity(40U);
    msg.setDestination(36998U);
    msg.setDestinationEntity(67U);
    msg.id = 225U;
    msg.value = 0.8022251680526272;

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
    msg.setTimeStamp(0.5791283254871652);
    msg.setSource(632U);
    msg.setSourceEntity(251U);
    msg.setDestination(15651U);
    msg.setDestinationEntity(103U);
    msg.id = 234U;
    msg.value = 0.7381570050390649;

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
    msg.setTimeStamp(0.9979318307850295);
    msg.setSource(45940U);
    msg.setSourceEntity(138U);
    msg.setDestination(54009U);
    msg.setDestinationEntity(248U);
    msg.id = 218U;
    msg.value = 0.5571613642011628;

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
    msg.setTimeStamp(0.43788065732695824);
    msg.setSource(63568U);
    msg.setSourceEntity(214U);
    msg.setDestination(48773U);
    msg.setDestinationEntity(169U);
    msg.id = 25U;
    msg.angle = 0.9546374301661029;

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
    msg.setTimeStamp(0.26454162240470414);
    msg.setSource(52917U);
    msg.setSourceEntity(25U);
    msg.setDestination(54295U);
    msg.setDestinationEntity(99U);
    msg.id = 158U;
    msg.angle = 0.13438684688875047;

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
    msg.setTimeStamp(0.9330212602023926);
    msg.setSource(30058U);
    msg.setSourceEntity(171U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(167U);
    msg.id = 70U;
    msg.angle = 0.9956232459122267;

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
    msg.setTimeStamp(0.28090453832787965);
    msg.setSource(30026U);
    msg.setSourceEntity(191U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(124U);
    msg.op = 173U;
    msg.actions.assign("LORLQXFSQAPQFDSTWTHPJMZELAQGZKXQJCEQYRXHKYFFVWHVOUKQRLQIPDOMGGIWTWEMRGYJCYNUXSMYVJCJKRISPJETDCMZNESZMCOFAUOLUFMIBGPODDBTDBSXBSHCSUWNXIZHHAQVZNAFSPLJZDKYIPCNPPNTMIVDMJ");

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
    msg.setTimeStamp(0.2426982005504178);
    msg.setSource(34744U);
    msg.setSourceEntity(4U);
    msg.setDestination(60141U);
    msg.setDestinationEntity(151U);
    msg.op = 100U;
    msg.actions.assign("PYFIEXBHSHPHMTHERKJZELZLNGIZXLKWXXPEOSAHYJAAOXOVMUYEKSMHVAFMCJSJOCBUUUGWMPCYVRLFLMDOARIGFDQBEFUWIVVMTBPFCJAOSU");

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
    msg.setTimeStamp(0.4956646061317156);
    msg.setSource(21137U);
    msg.setSourceEntity(194U);
    msg.setDestination(50153U);
    msg.setDestinationEntity(246U);
    msg.op = 128U;
    msg.actions.assign("YGDWOAYEZGNSCEZVRLPPFKNQTCGAARQVFVKKFFGUOSLAIPZDLOZWRCPDTZPAOJUOBMAMKITNOYFAEUUQHWVGYXUAWTOTHUDEBJNQXZEMUDTXMLHYAJQURDISDQGTMIULWITNEMBVNXFEDBIYROLXYKFTQPVHCGSJPGLCVUHOKIBNYRPRRBIE");

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
    msg.setTimeStamp(0.3330167065444699);
    msg.setSource(28346U);
    msg.setSourceEntity(219U);
    msg.setDestination(35646U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("UCKJOGJKLYBANIDNVWZFZANADOVDSUSFTRSIFVPYRXLWJNCGTHOPSTTWLESFGDDKKUVYXUAKBXMEZLEKUHMOAGQEWUREKILC");

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
    msg.setTimeStamp(0.5351188739976969);
    msg.setSource(46341U);
    msg.setSourceEntity(222U);
    msg.setDestination(20892U);
    msg.setDestinationEntity(248U);
    msg.actions.assign("EANBXBLIVOMWDOHCOXFSIWGCKTNVBOITOMUVSXAQBKRENEN");

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
    msg.setTimeStamp(0.7818633455184064);
    msg.setSource(62897U);
    msg.setSourceEntity(156U);
    msg.setDestination(46263U);
    msg.setDestinationEntity(145U);
    msg.actions.assign("UBBEDGNHBESROJXOLDQMYAYYAETOEBJNKABZOUZBVSLNTYIVXPGHWMQCRICVCUMMYLTPJQBZBPSJDMSIVIDUXFHATLEFDSFCCLHFNNCNWKQXQWZKVGZUUWOGCAWTRPWDCETMPDFRJJXLSNYYZWDIQLKKIFMUATAXMAWKKPCOGSUZLMTAGGTUOJHOLIQNDIVDRHYRRXYXVXPRJTNLQWPVGOZZHAKEYEXGIIWFJPKFBEJHFPQOE");

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
    msg.setTimeStamp(0.3088303234794978);
    msg.setSource(5318U);
    msg.setSourceEntity(93U);
    msg.setDestination(18643U);
    msg.setDestinationEntity(134U);
    msg.button = 152U;
    msg.value = 237U;

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
    msg.setTimeStamp(0.9588967065560987);
    msg.setSource(42369U);
    msg.setSourceEntity(181U);
    msg.setDestination(11012U);
    msg.setDestinationEntity(30U);
    msg.button = 168U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.4853048170302525);
    msg.setSource(44309U);
    msg.setSourceEntity(228U);
    msg.setDestination(53956U);
    msg.setDestinationEntity(117U);
    msg.button = 29U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.22536075407077716);
    msg.setSource(7580U);
    msg.setSourceEntity(41U);
    msg.setDestination(26362U);
    msg.setDestinationEntity(101U);
    msg.op = 111U;
    msg.text.assign("NQUGYALXJRWDAQVWIUTRNKZCTGSMCHUXPSPWWPOLPEUIJJDAPRAXVTONGCY");

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
    msg.setTimeStamp(0.2968720019748923);
    msg.setSource(52140U);
    msg.setSourceEntity(173U);
    msg.setDestination(2317U);
    msg.setDestinationEntity(104U);
    msg.op = 254U;
    msg.text.assign("VWZYDFZEMSYILMKOFKWTPPQLKNJKGISDUEXUKOMFBOIVUTVMALARFRSZZDGLZANHIHBXCPJFJEYTRLCCYZWIPTCXPHUVIALHFROLPBJPGZTXTVWMSXGNOHXGXVKGTRNSWFMHR");

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
    msg.setTimeStamp(0.5942027223674569);
    msg.setSource(17813U);
    msg.setSourceEntity(73U);
    msg.setDestination(50298U);
    msg.setDestinationEntity(27U);
    msg.op = 232U;
    msg.text.assign("BRCRHZYHKPQUNJWOGLVFCOGKYNMAAHJQTNSFXJYJTNYOYDLCWIGUIUEQCIXLFRHNOYQVELKAZSBOTRBVWTHVFUFEKUHCFFABJHIKIZBDEKVJKBETMAYOBKDYQGYVSLPUTGS");

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
    msg.setTimeStamp(0.8577239360679932);
    msg.setSource(7175U);
    msg.setSourceEntity(180U);
    msg.setDestination(50259U);
    msg.setDestinationEntity(64U);
    msg.op = 135U;
    msg.time_remain = 0.8157617835679633;
    msg.sched_time = 0.7219304967140875;

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
    msg.setTimeStamp(0.38722795794447795);
    msg.setSource(8562U);
    msg.setSourceEntity(56U);
    msg.setDestination(48000U);
    msg.setDestinationEntity(187U);
    msg.op = 45U;
    msg.time_remain = 0.31597799998144194;
    msg.sched_time = 0.7800442367920642;

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
    msg.setTimeStamp(0.5794773916052887);
    msg.setSource(12870U);
    msg.setSourceEntity(116U);
    msg.setDestination(5770U);
    msg.setDestinationEntity(71U);
    msg.op = 68U;
    msg.time_remain = 0.6283833018016937;
    msg.sched_time = 0.9071283761290582;

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
    msg.setTimeStamp(0.35630292390831175);
    msg.setSource(39493U);
    msg.setSourceEntity(62U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(47U);
    msg.name.assign("EWZXNOPFSQHGRFKPMXOBDXQGKMOWVKGWNUUEQYITCHHJBQDDPDOGEYHOGZMKKMNZBCRWMSMVATLLYRLLUGRZUNWEIEKXPCAQRZORIUNCOBTGJPZFWJICZUNEHVFWOUFUVGSGWNONT");
    msg.op = 184U;
    msg.sched_time = 0.39198718507266916;

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
    msg.setTimeStamp(0.48557340830367324);
    msg.setSource(20101U);
    msg.setSourceEntity(43U);
    msg.setDestination(10491U);
    msg.setDestinationEntity(122U);
    msg.name.assign("SGAIUSZMMUTUPJLZEXOOXPKDELPDWEXBJQIYZVGPCYZUDBLTTZRUKMRMHCDNJUQHGRRWKQNSAIZKUILKVNB");
    msg.op = 80U;
    msg.sched_time = 0.34170512456950797;

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
    msg.setTimeStamp(0.5485318651837751);
    msg.setSource(60004U);
    msg.setSourceEntity(78U);
    msg.setDestination(31225U);
    msg.setDestinationEntity(224U);
    msg.name.assign("UPPKQJLSFGGIVMQXMGQKPWQQWBTMSVOTIUAEBGHPJPZLBENROUDMYLPZHRUVSFIPRUDOCYMVPACTZLOHMNPJGCYYAOEJNUHJTHDPKLGCTFJNGXJILMRNZQREBQBLRNKVQRIAXXDZCUNTFWXSYWJIGFTDBBCXDOKSEFCLDSKKGAECWYYCNZWEFVHVMSYDEJCQTNKDWVWMUZJAIAOBXAIGIZMESRKVVTWBFFQSHR");
    msg.op = 65U;
    msg.sched_time = 0.01626885849170312;

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
    msg.setTimeStamp(0.25219375146561185);
    msg.setSource(1781U);
    msg.setSourceEntity(248U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.8360909765066922);
    msg.setSource(43715U);
    msg.setSourceEntity(186U);
    msg.setDestination(49190U);
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
    msg.setTimeStamp(0.27656464745658293);
    msg.setSource(51794U);
    msg.setSourceEntity(91U);
    msg.setDestination(45236U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.9634834280118402);
    msg.setSource(20856U);
    msg.setSourceEntity(61U);
    msg.setDestination(27760U);
    msg.setDestinationEntity(172U);
    msg.name.assign("JCLUMJJPIAJTNCSSKDKWMOKVCOVFFYDOUMPTAIXXYOYBILLWMRLDXKUQIZVARSUQXQMTUIQSFRVFXGMBYGISGYZHHEWZQGUDEZHHTTRTEICXLHWMOAYQKOZFEHWSZCPWEYGLTSSWELMQNKOECUPKUIVBWPWNUZBRXJFDAXDWHJRBDEQZOVBYRKANGLTCMBPBAPHORRQNFNZOPJECKJLJVBFKBSCUPHXTMQJTAACYXNVVDEZFNDISYAP");
    msg.state = 100U;

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
    msg.setTimeStamp(0.5424944772823578);
    msg.setSource(42006U);
    msg.setSourceEntity(87U);
    msg.setDestination(44770U);
    msg.setDestinationEntity(131U);
    msg.name.assign("IHEVBEFYGXFRKYBWILGIRVNDTEDRUOJFKCWAWHNYHVYNBLNFVNRZEGWDLSICPXDFTMSHZMJHJWMQWZJDWXIEZGMEOJKCJJEFAVIPSGTDZNQLATIOLTMPOUGKRAHURSKQUZKZEQLRDCYJAASBRAYYIUNBUQLHZNSHRYBEJCMKSPUXKXYFDSECRXQPB");
    msg.state = 151U;

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
    msg.setTimeStamp(0.552857198697599);
    msg.setSource(7794U);
    msg.setSourceEntity(10U);
    msg.setDestination(49054U);
    msg.setDestinationEntity(75U);
    msg.name.assign("YHCPKHJMKKEMAFNKYVLAJWTVRFDLEKBPXVMUCSEUWZNXRCTHEQCHEJUWUPFWJGYBRLS");
    msg.state = 175U;

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
    msg.setTimeStamp(0.46035634372141554);
    msg.setSource(54704U);
    msg.setSourceEntity(39U);
    msg.setDestination(52293U);
    msg.setDestinationEntity(85U);
    msg.name.assign("OWWYJEAZQUJPYCTFDAPJMRFTCWAOHNQFVNCIHZLVGOVBGWBSWUVOIBFLES");
    msg.value = 69U;

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
    msg.setTimeStamp(0.1412085720029458);
    msg.setSource(24583U);
    msg.setSourceEntity(187U);
    msg.setDestination(48810U);
    msg.setDestinationEntity(35U);
    msg.name.assign("NCASIPGFVYXYLSXWFDCEBPHBFXVTESCZWUNHAAFQKVDSJPRYSFAFELGPJQFXR");
    msg.value = 204U;

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
    msg.setTimeStamp(0.333170827824826);
    msg.setSource(45572U);
    msg.setSourceEntity(211U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(228U);
    msg.name.assign("KVYWZPDHPNOJDCHXUGLZRZCNDOKXQXPFBNMDNDWJASJFDACYQJWEVTKYUIMWTBQLPVCBFLYUMZCYEJUYRSZKRJBRLWSKLHPNFBIMHWVDOFVTCOV");
    msg.value = 55U;

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
    msg.setTimeStamp(0.6681444339628115);
    msg.setSource(49470U);
    msg.setSourceEntity(112U);
    msg.setDestination(9928U);
    msg.setDestinationEntity(155U);
    msg.name.assign("BYLXMRMALMZYFTNWKNDUGILNSVBDOKUXQZJYMMTJWRLSNFFPDGEYADCQQUS");

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
    msg.setTimeStamp(0.9510080625587727);
    msg.setSource(20730U);
    msg.setSourceEntity(242U);
    msg.setDestination(47672U);
    msg.setDestinationEntity(171U);
    msg.name.assign("VWNDNQDZEQYKSVCDLKGPSQMXQYLCWXLNWPAQRLKNALIPZRTRJTEEVWDRIFXEUSJJLYYYKFOINMUELRSHGVJQLYBGXCHKMOTLVOFABSPDSTKRUCAKPSQDRWMXNFTTBKNAMAMGHWDZYZBHZGNFG");

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
    msg.setTimeStamp(0.4855334899681212);
    msg.setSource(33190U);
    msg.setSourceEntity(144U);
    msg.setDestination(9963U);
    msg.setDestinationEntity(64U);
    msg.name.assign("PYYGPRQOZUJVEISGAAUMMKKYBKMTSOGEKVEJCBWXDJVXJIIDLVYOHCUUMAFEYQHPGFPHBORFMTZOLNQSUHQMKTRYBBEXDZQFKGBWSMIFCX");

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
    msg.setTimeStamp(0.5296371223000838);
    msg.setSource(54935U);
    msg.setSourceEntity(0U);
    msg.setDestination(16052U);
    msg.setDestinationEntity(107U);
    msg.name.assign("WYHFAXXSCFEKPYYXTXIHQWFMGCDAHEQZDQBOEQVPGGULVOOWJHELPMJRCBFAJYVICMBNTILYNCGTSGDYLRVURHLKVKBJCETIFUARNZZLFLBOKCTZPQOUOHIZVTDLWWBZHYZKCJYPSNJNTNNTOGDUQODZOHUGSIPEOSMLCDIY");
    msg.value = 39U;

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
    msg.setTimeStamp(0.4027746887568441);
    msg.setSource(5089U);
    msg.setSourceEntity(42U);
    msg.setDestination(37430U);
    msg.setDestinationEntity(182U);
    msg.name.assign("TBKTBSLUHTLIBQNAGIZNLQZKUQDNYXRVFMEWJZXAUQRMJMWDLRALVIMBDWSJKPZKJYYUWITRBPBZAHOKNYSOZHXQGHRXXFTVOAF");
    msg.value = 42U;

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
    msg.setTimeStamp(0.7878038127007012);
    msg.setSource(22177U);
    msg.setSourceEntity(145U);
    msg.setDestination(4413U);
    msg.setDestinationEntity(98U);
    msg.name.assign("HLDTEGFAGNQCLMFBSSWVJGPCUDQBKCMPEJHMGSEIGBJPMNLCKTZHXCICKELIMNPBLLMZZXFNNNSZDPXXWIIWVGUGUUZVFYRWNHVKHSYIQOYATRVLJAEFAUDDRWSQWXVRYKYCLPZQBRRFPVTNGIYEMYQMLFDHIMVAYRNSDCUJDXGWQYXXYAZBJZJURIDQOATXUXJIO");
    msg.value = 86U;

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
    msg.setTimeStamp(0.28596456473236587);
    msg.setSource(60526U);
    msg.setSourceEntity(221U);
    msg.setDestination(2781U);
    msg.setDestinationEntity(19U);
    msg.id = 32U;
    msg.period = 1089176463U;
    msg.duty_cycle = 2497671177U;

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
    msg.setTimeStamp(0.8279968625320877);
    msg.setSource(51033U);
    msg.setSourceEntity(32U);
    msg.setDestination(15212U);
    msg.setDestinationEntity(91U);
    msg.id = 60U;
    msg.period = 3934476940U;
    msg.duty_cycle = 3226111792U;

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
    msg.setTimeStamp(0.006169927627827643);
    msg.setSource(4785U);
    msg.setSourceEntity(93U);
    msg.setDestination(44889U);
    msg.setDestinationEntity(111U);
    msg.id = 223U;
    msg.period = 3464665814U;
    msg.duty_cycle = 1661153749U;

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
    msg.setTimeStamp(0.3147064234409226);
    msg.setSource(11801U);
    msg.setSourceEntity(229U);
    msg.setDestination(47536U);
    msg.setDestinationEntity(174U);
    msg.id = 237U;
    msg.period = 4196894137U;
    msg.duty_cycle = 2534403369U;

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
    msg.setTimeStamp(0.2722128002793759);
    msg.setSource(41236U);
    msg.setSourceEntity(115U);
    msg.setDestination(22885U);
    msg.setDestinationEntity(181U);
    msg.id = 152U;
    msg.period = 3437586542U;
    msg.duty_cycle = 685838284U;

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
    msg.setTimeStamp(0.8358361703354814);
    msg.setSource(60622U);
    msg.setSourceEntity(180U);
    msg.setDestination(9076U);
    msg.setDestinationEntity(101U);
    msg.id = 227U;
    msg.period = 3177578735U;
    msg.duty_cycle = 1306337865U;

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
    msg.setTimeStamp(0.8443527964058353);
    msg.setSource(8916U);
    msg.setSourceEntity(90U);
    msg.setDestination(14852U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.6393116124422771;
    msg.lon = 0.8522181539594963;
    msg.height = 0.36707699927439896;
    msg.x = 0.34303638836317407;
    msg.y = 0.872169818907331;
    msg.z = 0.8342116274184639;
    msg.phi = 0.34407793209416504;
    msg.theta = 0.56119993780679;
    msg.psi = 0.14015792901328605;
    msg.u = 0.6406325649380438;
    msg.v = 0.228502212454617;
    msg.w = 0.23504746865181714;
    msg.vx = 0.8909970344889356;
    msg.vy = 0.5113770200878703;
    msg.vz = 0.14540861365619295;
    msg.p = 0.2436985184078866;
    msg.q = 0.9991030969084556;
    msg.r = 0.7354478232713032;
    msg.depth = 0.7537367381173014;
    msg.alt = 0.3548590724037912;

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
    msg.setTimeStamp(0.5897060017560682);
    msg.setSource(8708U);
    msg.setSourceEntity(246U);
    msg.setDestination(40056U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.0006974859048040072;
    msg.lon = 0.9219021726623869;
    msg.height = 0.738147276140335;
    msg.x = 0.05624183498810997;
    msg.y = 0.6285703067499406;
    msg.z = 0.005642254771124566;
    msg.phi = 0.8955186880483954;
    msg.theta = 0.5241154385893435;
    msg.psi = 0.7389989921920267;
    msg.u = 0.37866571541023486;
    msg.v = 0.3830983566254368;
    msg.w = 0.194562134733685;
    msg.vx = 0.6558637491464384;
    msg.vy = 0.21909745864560604;
    msg.vz = 0.6320343387351701;
    msg.p = 0.9277555598929242;
    msg.q = 0.5176570427983236;
    msg.r = 0.9994790764265434;
    msg.depth = 0.6172950329010782;
    msg.alt = 0.9099173021090314;

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
    msg.setTimeStamp(0.7919671842022539);
    msg.setSource(61479U);
    msg.setSourceEntity(163U);
    msg.setDestination(53056U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.22987513966186557;
    msg.lon = 0.7296021314459546;
    msg.height = 0.36077634155923555;
    msg.x = 0.9974522221569272;
    msg.y = 0.5580374210130598;
    msg.z = 0.7508736214354433;
    msg.phi = 0.4996182367597183;
    msg.theta = 0.25358235246353966;
    msg.psi = 0.17983344094027143;
    msg.u = 0.8940862226983712;
    msg.v = 0.9628460424684924;
    msg.w = 0.9819925939157056;
    msg.vx = 0.6583848496917908;
    msg.vy = 0.8268477992198278;
    msg.vz = 0.07231245409460174;
    msg.p = 0.708951846903673;
    msg.q = 0.5499779399442626;
    msg.r = 0.5632239026994724;
    msg.depth = 0.6599574532528157;
    msg.alt = 0.18417925188536988;

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
    msg.setTimeStamp(0.2587892159277445);
    msg.setSource(16803U);
    msg.setSourceEntity(60U);
    msg.setDestination(26734U);
    msg.setDestinationEntity(140U);
    msg.x = 0.52788125052551;
    msg.y = 0.7642043082314928;
    msg.z = 0.6178691770787658;

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
    msg.setTimeStamp(0.3062231118348977);
    msg.setSource(59609U);
    msg.setSourceEntity(242U);
    msg.setDestination(6859U);
    msg.setDestinationEntity(142U);
    msg.x = 0.4994080332613908;
    msg.y = 0.7509481025210007;
    msg.z = 0.5527848053105305;

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
    msg.setTimeStamp(0.7342322270175903);
    msg.setSource(25570U);
    msg.setSourceEntity(31U);
    msg.setDestination(23589U);
    msg.setDestinationEntity(112U);
    msg.x = 0.07040191355628855;
    msg.y = 0.28637708788052185;
    msg.z = 0.7187952273474253;

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
    msg.setTimeStamp(0.24595586872403286);
    msg.setSource(4547U);
    msg.setSourceEntity(20U);
    msg.setDestination(6821U);
    msg.setDestinationEntity(122U);
    msg.value = 0.06484069174433327;

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
    msg.setTimeStamp(0.900119137314617);
    msg.setSource(54339U);
    msg.setSourceEntity(211U);
    msg.setDestination(15280U);
    msg.setDestinationEntity(226U);
    msg.value = 0.8011441846870494;

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
    msg.setTimeStamp(0.8421430472667004);
    msg.setSource(58522U);
    msg.setSourceEntity(71U);
    msg.setDestination(1340U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0855331662244525;

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
    msg.setTimeStamp(0.9190967369754698);
    msg.setSource(30121U);
    msg.setSourceEntity(109U);
    msg.setDestination(5689U);
    msg.setDestinationEntity(81U);
    msg.value = 0.8220513360140597;

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
    msg.setTimeStamp(0.5704340777984603);
    msg.setSource(13806U);
    msg.setSourceEntity(61U);
    msg.setDestination(25254U);
    msg.setDestinationEntity(12U);
    msg.value = 0.44114718782193696;

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
    msg.setTimeStamp(0.6936599311096188);
    msg.setSource(3839U);
    msg.setSourceEntity(123U);
    msg.setDestination(60051U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5325445797989701;

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
    msg.setTimeStamp(0.7184034945976364);
    msg.setSource(50511U);
    msg.setSourceEntity(6U);
    msg.setDestination(15299U);
    msg.setDestinationEntity(205U);
    msg.x = 0.4057515053668064;
    msg.y = 0.3416198764625552;
    msg.z = 0.1770348790412084;
    msg.phi = 0.7315883732925388;
    msg.theta = 0.9131410853750176;
    msg.psi = 0.07290584600132599;
    msg.p = 0.35685351368794593;
    msg.q = 0.7057982448728157;
    msg.r = 0.40802147302012814;
    msg.u = 0.3748204981916011;
    msg.v = 0.9579589107846654;
    msg.w = 0.37591266188789174;
    msg.bias_psi = 0.24129768220611614;
    msg.bias_r = 0.3964621459829434;

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
    msg.setTimeStamp(0.006853045864559482);
    msg.setSource(43985U);
    msg.setSourceEntity(203U);
    msg.setDestination(8169U);
    msg.setDestinationEntity(196U);
    msg.x = 0.45864244359323214;
    msg.y = 0.3404878410687515;
    msg.z = 0.18152455664070943;
    msg.phi = 0.19642024605946018;
    msg.theta = 0.5668819715284069;
    msg.psi = 0.529257656536033;
    msg.p = 0.1797952035336321;
    msg.q = 0.6520765871865059;
    msg.r = 0.8532325861322679;
    msg.u = 0.8390996323437284;
    msg.v = 0.8154171528937155;
    msg.w = 0.8857105769455222;
    msg.bias_psi = 0.2005891114963091;
    msg.bias_r = 0.3411612012430717;

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
    msg.setTimeStamp(0.792943870388635);
    msg.setSource(31523U);
    msg.setSourceEntity(173U);
    msg.setDestination(22739U);
    msg.setDestinationEntity(164U);
    msg.x = 0.30322232975278096;
    msg.y = 0.16682046091391545;
    msg.z = 0.9089211159911172;
    msg.phi = 0.8418823976897457;
    msg.theta = 0.7172195246657328;
    msg.psi = 0.20651025210804475;
    msg.p = 0.23237981025900256;
    msg.q = 0.6142861208131466;
    msg.r = 0.2041258165688662;
    msg.u = 0.13556393962873936;
    msg.v = 0.09273255423452953;
    msg.w = 0.5692402950494703;
    msg.bias_psi = 0.09075283793644817;
    msg.bias_r = 0.4933079529395924;

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
    msg.setTimeStamp(0.11387660127142707);
    msg.setSource(31433U);
    msg.setSourceEntity(43U);
    msg.setDestination(37832U);
    msg.setDestinationEntity(98U);
    msg.bias_psi = 0.030744986602889157;
    msg.bias_r = 0.7992733410436976;
    msg.cog = 0.10717593048732754;
    msg.cyaw = 0.8483378917834111;
    msg.lbl_rej_level = 0.8710519556753509;
    msg.gps_rej_level = 0.9643449023280881;
    msg.custom_x = 0.7993070455771554;
    msg.custom_y = 0.5970927130545685;
    msg.custom_z = 0.9447633963955384;

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
    msg.setTimeStamp(0.25601470852278096);
    msg.setSource(37368U);
    msg.setSourceEntity(86U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(231U);
    msg.bias_psi = 0.4588747072393885;
    msg.bias_r = 0.3478910711004677;
    msg.cog = 0.8083212030603426;
    msg.cyaw = 0.5031310855600883;
    msg.lbl_rej_level = 0.3642944869424384;
    msg.gps_rej_level = 0.6067045521889496;
    msg.custom_x = 0.5649463054433255;
    msg.custom_y = 0.5779902970893499;
    msg.custom_z = 0.5570388934741942;

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
    msg.setTimeStamp(0.5346491415751119);
    msg.setSource(47487U);
    msg.setSourceEntity(185U);
    msg.setDestination(22294U);
    msg.setDestinationEntity(233U);
    msg.bias_psi = 0.5646792058378636;
    msg.bias_r = 0.352756843872568;
    msg.cog = 0.388567781563378;
    msg.cyaw = 0.4577487060188157;
    msg.lbl_rej_level = 0.9273570558157127;
    msg.gps_rej_level = 0.34478391604856884;
    msg.custom_x = 0.8211719714481877;
    msg.custom_y = 0.5333516817763444;
    msg.custom_z = 0.21116954066636584;

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
    msg.setTimeStamp(0.9148463168116626);
    msg.setSource(39778U);
    msg.setSourceEntity(141U);
    msg.setDestination(41439U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.5725295580828957;
    msg.reason = 220U;

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
    msg.setTimeStamp(0.6010886322042924);
    msg.setSource(8162U);
    msg.setSourceEntity(220U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(152U);
    msg.utc_time = 0.02703301551557724;
    msg.reason = 171U;

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
    msg.setTimeStamp(0.7454857452348219);
    msg.setSource(28818U);
    msg.setSourceEntity(11U);
    msg.setDestination(39329U);
    msg.setDestinationEntity(10U);
    msg.utc_time = 0.33686856136251464;
    msg.reason = 49U;

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
    msg.setTimeStamp(0.6475288613698076);
    msg.setSource(55279U);
    msg.setSourceEntity(186U);
    msg.setDestination(58689U);
    msg.setDestinationEntity(93U);
    msg.id = 207U;
    msg.range = 0.7112841037417611;
    msg.acceptance = 109U;

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
    msg.setTimeStamp(0.3041957259415363);
    msg.setSource(18440U);
    msg.setSourceEntity(172U);
    msg.setDestination(15184U);
    msg.setDestinationEntity(229U);
    msg.id = 178U;
    msg.range = 0.5103443310486239;
    msg.acceptance = 143U;

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
    msg.setTimeStamp(0.17797683217719473);
    msg.setSource(32059U);
    msg.setSourceEntity(148U);
    msg.setDestination(40393U);
    msg.setDestinationEntity(57U);
    msg.id = 26U;
    msg.range = 0.6756886989641593;
    msg.acceptance = 214U;

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
    msg.setTimeStamp(0.12912352896436619);
    msg.setSource(38848U);
    msg.setSourceEntity(187U);
    msg.setDestination(52296U);
    msg.setDestinationEntity(41U);
    msg.type = 78U;
    msg.reason = 195U;
    msg.value = 0.8041479998618313;
    msg.timestep = 0.22183920680517433;

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
    msg.setTimeStamp(0.45074912094246555);
    msg.setSource(55878U);
    msg.setSourceEntity(209U);
    msg.setDestination(1516U);
    msg.setDestinationEntity(49U);
    msg.type = 20U;
    msg.reason = 165U;
    msg.value = 0.4330498310508698;
    msg.timestep = 0.5769082883262237;

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
    msg.setTimeStamp(0.6273549191678366);
    msg.setSource(14618U);
    msg.setSourceEntity(218U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(144U);
    msg.type = 49U;
    msg.reason = 207U;
    msg.value = 0.4292832418890081;
    msg.timestep = 0.2606791093086591;

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
    msg.setTimeStamp(0.5238913682362442);
    msg.setSource(40367U);
    msg.setSourceEntity(11U);
    msg.setDestination(59604U);
    msg.setDestinationEntity(6U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KZYTRILPIRABQGBMGCPNCZMEVWYBGVOJGVYBOXZICUJACCSMNHTJNVELDHGSXTPCAYPWKQSZDXKPSHSRJTJMZZNTANYTNAQTQHVWRIWAOLJEULDLUHZNEYYMVWFGMOSMUBKCFBABAETREOSRKDYDJQIQFCVXIQLAHOIXAHOZFPNMVTDDMXRFVCJIHUIPUQTRMFBQRYHPOXPLGHDIKFRWPCJWSEGFSZLFKNUDEGEKQG");
    tmp_msg_0.lat = 0.16852019624561254;
    tmp_msg_0.lon = 0.8387737135001638;
    tmp_msg_0.depth = 0.15095693565988222;
    tmp_msg_0.query_channel = 2U;
    tmp_msg_0.reply_channel = 201U;
    tmp_msg_0.transponder_delay = 182U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24254519846743117;
    msg.y = 0.5509981986756672;
    msg.var_x = 0.12539698650613706;
    msg.var_y = 0.5278577096544192;
    msg.distance = 0.9059543564642337;

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
    msg.setTimeStamp(0.04394674345428218);
    msg.setSource(43535U);
    msg.setSourceEntity(159U);
    msg.setDestination(64325U);
    msg.setDestinationEntity(229U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EPJRAQNBXANJQCFFYYLCDNRVEMOTUDTUVFMXVTKBFNSNTZFQYSEKLUYKRWILLOSZPWFJOIWCBDCMGUWRKSTAMLDDHYHKURMHDQTPPPJLMJ");
    tmp_msg_0.lat = 0.9908265479395898;
    tmp_msg_0.lon = 0.5659308538039625;
    tmp_msg_0.depth = 0.25949806226727457;
    tmp_msg_0.query_channel = 67U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 83U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9242424886810299;
    msg.y = 0.6892703866549853;
    msg.var_x = 0.09712353599965418;
    msg.var_y = 0.10092044157927571;
    msg.distance = 0.3104752232594957;

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
    msg.setTimeStamp(0.09179662897797158);
    msg.setSource(4443U);
    msg.setSourceEntity(218U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(231U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YEWDOZZIRFEEZVXCOMCAOPIGTIUWXQTFUHLKFDQBDBAJFXABLAADRRPRRZGKOGJYNTUADGOIGHYCBBXXIQMXCCYBNMSIPQTMVQLWVUQKTQLGPCECWYPCNCTUDDHPMMLESBJMHNWHELLOKOKWJJWTHRSATRNZDWMNOGFTNFZF");
    tmp_msg_0.lat = 0.7249768335123481;
    tmp_msg_0.lon = 0.6954696878712598;
    tmp_msg_0.depth = 0.2117485088867701;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 5U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.23749592913334994;
    msg.y = 0.746929717944071;
    msg.var_x = 0.6004504082058866;
    msg.var_y = 0.6406950515017581;
    msg.distance = 0.5121234433549706;

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
    msg.setTimeStamp(0.26998384039573464);
    msg.setSource(40561U);
    msg.setSourceEntity(127U);
    msg.setDestination(23868U);
    msg.setDestinationEntity(135U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.1286374410905684);
    msg.setSource(30277U);
    msg.setSourceEntity(16U);
    msg.setDestination(54736U);
    msg.setDestinationEntity(216U);
    msg.state = 138U;

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
    msg.setTimeStamp(0.8960881269055718);
    msg.setSource(8105U);
    msg.setSourceEntity(33U);
    msg.setDestination(60209U);
    msg.setDestinationEntity(86U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.7797540670605487);
    msg.setSource(53112U);
    msg.setSourceEntity(135U);
    msg.setDestination(508U);
    msg.setDestinationEntity(223U);
    msg.x = 0.10386954104378476;
    msg.y = 0.33639111486611395;
    msg.z = 0.1066954858214938;

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
    msg.setTimeStamp(0.27255077076501477);
    msg.setSource(47682U);
    msg.setSourceEntity(147U);
    msg.setDestination(24938U);
    msg.setDestinationEntity(123U);
    msg.x = 0.10569160894923957;
    msg.y = 0.24850494021647818;
    msg.z = 0.9138774442246129;

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
    msg.setTimeStamp(0.637694362668169);
    msg.setSource(12679U);
    msg.setSourceEntity(253U);
    msg.setDestination(567U);
    msg.setDestinationEntity(38U);
    msg.x = 0.7118468942746943;
    msg.y = 0.5191372581252301;
    msg.z = 0.6726364572903419;

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
    msg.setTimeStamp(0.7556474800714055);
    msg.setSource(13422U);
    msg.setSourceEntity(110U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(137U);
    msg.va = 0.48354207786984804;
    msg.aoa = 0.08888472352967614;
    msg.ssa = 0.3253180701758769;

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
    msg.setTimeStamp(0.6414404136179002);
    msg.setSource(25996U);
    msg.setSourceEntity(211U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(131U);
    msg.va = 0.462076472784275;
    msg.aoa = 0.711756866932429;
    msg.ssa = 0.924487437063654;

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
    msg.setTimeStamp(0.4698882104179153);
    msg.setSource(25201U);
    msg.setSourceEntity(218U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(97U);
    msg.va = 0.3196577428728995;
    msg.aoa = 0.18795719632839292;
    msg.ssa = 0.20800255173301063;

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
    msg.setTimeStamp(0.3095184843114621);
    msg.setSource(58884U);
    msg.setSourceEntity(40U);
    msg.setDestination(47227U);
    msg.setDestinationEntity(86U);
    msg.value = 0.6001210613769872;

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
    msg.setTimeStamp(0.9076081679498271);
    msg.setSource(1183U);
    msg.setSourceEntity(144U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(27U);
    msg.value = 0.9303007267554481;

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
    msg.setTimeStamp(0.2280113529244825);
    msg.setSource(63570U);
    msg.setSourceEntity(233U);
    msg.setDestination(59742U);
    msg.setDestinationEntity(198U);
    msg.value = 0.16143677132271816;

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
    msg.setTimeStamp(0.010553392239704529);
    msg.setSource(4463U);
    msg.setSourceEntity(160U);
    msg.setDestination(46325U);
    msg.setDestinationEntity(253U);
    msg.value = 0.4602102625591017;
    msg.z_units = 0U;

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
    msg.setTimeStamp(0.9428281099227741);
    msg.setSource(41715U);
    msg.setSourceEntity(163U);
    msg.setDestination(14021U);
    msg.setDestinationEntity(212U);
    msg.value = 0.9514627899523628;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.5771350387015778);
    msg.setSource(2443U);
    msg.setSourceEntity(245U);
    msg.setDestination(3599U);
    msg.setDestinationEntity(183U);
    msg.value = 0.19051871080160176;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.5806519232409125);
    msg.setSource(9193U);
    msg.setSourceEntity(201U);
    msg.setDestination(42068U);
    msg.setDestinationEntity(225U);
    msg.value = 0.191519463482273;
    msg.speed_units = 111U;

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
    msg.setTimeStamp(0.6948227745590189);
    msg.setSource(7873U);
    msg.setSourceEntity(213U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(147U);
    msg.value = 0.39477277025408564;
    msg.speed_units = 55U;

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
    msg.setTimeStamp(0.48330381288339685);
    msg.setSource(49255U);
    msg.setSourceEntity(139U);
    msg.setDestination(24278U);
    msg.setDestinationEntity(13U);
    msg.value = 0.795930981230359;
    msg.speed_units = 14U;

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
    msg.setTimeStamp(0.2037466230439725);
    msg.setSource(42538U);
    msg.setSourceEntity(168U);
    msg.setDestination(28473U);
    msg.setDestinationEntity(169U);
    msg.value = 0.20687641937354617;

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
    msg.setTimeStamp(0.48055956185213944);
    msg.setSource(40483U);
    msg.setSourceEntity(239U);
    msg.setDestination(52742U);
    msg.setDestinationEntity(37U);
    msg.value = 0.7350608900295751;

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
    msg.setTimeStamp(0.8433169255077114);
    msg.setSource(43710U);
    msg.setSourceEntity(99U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(4U);
    msg.value = 0.1862477539475026;

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
    msg.setTimeStamp(0.7720723333096142);
    msg.setSource(58380U);
    msg.setSourceEntity(19U);
    msg.setDestination(47030U);
    msg.setDestinationEntity(216U);
    msg.value = 0.701410394544742;

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
    msg.setTimeStamp(0.23992229148151933);
    msg.setSource(710U);
    msg.setSourceEntity(222U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(201U);
    msg.value = 0.4212899450571205;

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
    msg.setTimeStamp(0.9563139265631162);
    msg.setSource(24467U);
    msg.setSourceEntity(215U);
    msg.setDestination(58922U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6362853495168878;

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
    msg.setTimeStamp(0.8055756597675044);
    msg.setSource(33381U);
    msg.setSourceEntity(153U);
    msg.setDestination(40464U);
    msg.setDestinationEntity(66U);
    msg.value = 0.8708468323975854;

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
    msg.setTimeStamp(0.9873709730114169);
    msg.setSource(716U);
    msg.setSourceEntity(171U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(71U);
    msg.value = 0.04333838994103978;

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
    msg.setTimeStamp(0.18988446695332906);
    msg.setSource(54341U);
    msg.setSourceEntity(91U);
    msg.setDestination(22788U);
    msg.setDestinationEntity(97U);
    msg.value = 0.7966174088430394;

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
    msg.setTimeStamp(0.94844684374338);
    msg.setSource(40112U);
    msg.setSourceEntity(237U);
    msg.setDestination(62530U);
    msg.setDestinationEntity(223U);
    msg.path_ref = 1462531949U;
    msg.start_lat = 0.37328975511869766;
    msg.start_lon = 0.2749982410588421;
    msg.start_z = 0.5027545535179919;
    msg.start_z_units = 44U;
    msg.end_lat = 0.4459402117793356;
    msg.end_lon = 0.4392941173894226;
    msg.end_z = 0.9442846472942837;
    msg.end_z_units = 128U;
    msg.speed = 0.8935000309269738;
    msg.speed_units = 14U;
    msg.lradius = 0.40500578706046964;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.9756381658396436);
    msg.setSource(65509U);
    msg.setSourceEntity(129U);
    msg.setDestination(29734U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 239224840U;
    msg.start_lat = 0.9743678930885333;
    msg.start_lon = 0.40989946659101895;
    msg.start_z = 0.691999546905793;
    msg.start_z_units = 157U;
    msg.end_lat = 0.6635018143637178;
    msg.end_lon = 0.9965063994051389;
    msg.end_z = 0.8444056513056646;
    msg.end_z_units = 100U;
    msg.speed = 0.7298314140015978;
    msg.speed_units = 230U;
    msg.lradius = 0.6999275175401434;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.6389578305034856);
    msg.setSource(56682U);
    msg.setSourceEntity(31U);
    msg.setDestination(9808U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 900024946U;
    msg.start_lat = 0.33876811387063266;
    msg.start_lon = 0.04558477018717777;
    msg.start_z = 0.907645545669401;
    msg.start_z_units = 215U;
    msg.end_lat = 0.2007596111480583;
    msg.end_lon = 0.7366755468733347;
    msg.end_z = 0.802021395030335;
    msg.end_z_units = 200U;
    msg.speed = 0.7121345102669628;
    msg.speed_units = 35U;
    msg.lradius = 0.6958428143392748;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.029027472865406634);
    msg.setSource(47910U);
    msg.setSourceEntity(250U);
    msg.setDestination(48097U);
    msg.setDestinationEntity(88U);
    msg.x = 0.7316094796839645;
    msg.y = 0.7893613271891115;
    msg.z = 0.21589057515366106;
    msg.k = 0.6365070598577929;
    msg.m = 0.6084461318444709;
    msg.n = 0.06829671851461427;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.3968654047769755);
    msg.setSource(42539U);
    msg.setSourceEntity(29U);
    msg.setDestination(24631U);
    msg.setDestinationEntity(7U);
    msg.x = 0.9114048060234825;
    msg.y = 0.6798279947449706;
    msg.z = 0.6660677426557892;
    msg.k = 0.9323976906657475;
    msg.m = 0.811796780819624;
    msg.n = 0.16784377552762975;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.8737435873630549);
    msg.setSource(49946U);
    msg.setSourceEntity(131U);
    msg.setDestination(12065U);
    msg.setDestinationEntity(76U);
    msg.x = 0.710144989184835;
    msg.y = 0.39967523633825386;
    msg.z = 0.9963948402669167;
    msg.k = 0.7087022871731353;
    msg.m = 0.02523238791323612;
    msg.n = 0.1721166131111439;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.2960432405088974);
    msg.setSource(31009U);
    msg.setSourceEntity(168U);
    msg.setDestination(27084U);
    msg.setDestinationEntity(45U);
    msg.value = 0.6922357044286698;

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
    msg.setTimeStamp(0.8506903799332185);
    msg.setSource(13594U);
    msg.setSourceEntity(57U);
    msg.setDestination(6638U);
    msg.setDestinationEntity(190U);
    msg.value = 0.3325735650524074;

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
    msg.setTimeStamp(0.45402275337042697);
    msg.setSource(54645U);
    msg.setSourceEntity(251U);
    msg.setDestination(2768U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7856607693295725;

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
    msg.setTimeStamp(0.7826212409726658);
    msg.setSource(8229U);
    msg.setSourceEntity(14U);
    msg.setDestination(58086U);
    msg.setDestinationEntity(237U);
    msg.u = 0.36781906510438234;
    msg.v = 0.6912416655347616;
    msg.w = 0.3567737566721826;
    msg.p = 0.6654592014035854;
    msg.q = 0.21888957195805725;
    msg.r = 0.04200694780048797;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.1847008307319309);
    msg.setSource(27971U);
    msg.setSourceEntity(253U);
    msg.setDestination(62165U);
    msg.setDestinationEntity(101U);
    msg.u = 0.5822575015677166;
    msg.v = 0.9705232165556811;
    msg.w = 0.16656533447190347;
    msg.p = 0.4198319545079735;
    msg.q = 0.7776049015015059;
    msg.r = 0.313573144114084;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.11929747196662155);
    msg.setSource(60652U);
    msg.setSourceEntity(120U);
    msg.setDestination(3190U);
    msg.setDestinationEntity(101U);
    msg.u = 0.1921887987137333;
    msg.v = 0.8758339996254292;
    msg.w = 0.19974512993137428;
    msg.p = 0.8206601260050469;
    msg.q = 0.4172173090020289;
    msg.r = 0.6711650690263333;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.5061605826192129);
    msg.setSource(15711U);
    msg.setSourceEntity(0U);
    msg.setDestination(3400U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 1396948251U;
    msg.start_lat = 0.8282918806227031;
    msg.start_lon = 0.18371112539964896;
    msg.start_z = 0.15385696428412676;
    msg.start_z_units = 137U;
    msg.end_lat = 0.30447428232088236;
    msg.end_lon = 0.848797629799665;
    msg.end_z = 0.40051047667193085;
    msg.end_z_units = 23U;
    msg.lradius = 0.5756973857287455;
    msg.flags = 247U;
    msg.x = 0.7534754278248965;
    msg.y = 0.6027751823377487;
    msg.z = 0.5912544531958188;
    msg.vx = 0.1016424937400755;
    msg.vy = 0.4435363092843224;
    msg.vz = 0.9133646323428561;
    msg.course_error = 0.4799523246550914;
    msg.eta = 49019U;

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
    msg.setTimeStamp(0.7584342123811947);
    msg.setSource(52738U);
    msg.setSourceEntity(160U);
    msg.setDestination(59793U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 3168803115U;
    msg.start_lat = 0.39897633293573487;
    msg.start_lon = 0.16978993084999483;
    msg.start_z = 0.7828249629830137;
    msg.start_z_units = 103U;
    msg.end_lat = 0.3922721040274352;
    msg.end_lon = 0.5011971945548714;
    msg.end_z = 0.4234794622060184;
    msg.end_z_units = 105U;
    msg.lradius = 0.2523613515902936;
    msg.flags = 198U;
    msg.x = 0.9638931465331042;
    msg.y = 0.6826885381504283;
    msg.z = 0.28590876960624556;
    msg.vx = 0.913632584985302;
    msg.vy = 0.14641497516325763;
    msg.vz = 0.0870547327226785;
    msg.course_error = 0.8427802610947629;
    msg.eta = 64492U;

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
    msg.setTimeStamp(0.7625752488237554);
    msg.setSource(27701U);
    msg.setSourceEntity(104U);
    msg.setDestination(29260U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 4213599004U;
    msg.start_lat = 0.15878864729510211;
    msg.start_lon = 0.11009037641797947;
    msg.start_z = 0.16554868600011252;
    msg.start_z_units = 84U;
    msg.end_lat = 0.9454480149311949;
    msg.end_lon = 0.17040038432786797;
    msg.end_z = 0.1225672972341908;
    msg.end_z_units = 110U;
    msg.lradius = 0.23613616645343183;
    msg.flags = 28U;
    msg.x = 0.6840243417067665;
    msg.y = 0.9305340184037757;
    msg.z = 0.5765944453061757;
    msg.vx = 0.29675257875466776;
    msg.vy = 0.2951676050645985;
    msg.vz = 0.21057621614825472;
    msg.course_error = 0.17484441314544996;
    msg.eta = 57216U;

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
    msg.setTimeStamp(0.8108976780159889);
    msg.setSource(54697U);
    msg.setSourceEntity(120U);
    msg.setDestination(57039U);
    msg.setDestinationEntity(184U);
    msg.k = 0.21003681200972624;
    msg.m = 0.4765984758142383;
    msg.n = 0.5882698725057219;

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
    msg.setTimeStamp(0.08422156266912784);
    msg.setSource(60276U);
    msg.setSourceEntity(219U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(36U);
    msg.k = 0.45936904836005543;
    msg.m = 0.20636176072725843;
    msg.n = 0.7729410132525364;

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
    msg.setTimeStamp(0.7861357259069234);
    msg.setSource(40298U);
    msg.setSourceEntity(10U);
    msg.setDestination(21179U);
    msg.setDestinationEntity(167U);
    msg.k = 0.5349801393877814;
    msg.m = 0.25721503691925884;
    msg.n = 0.17011539814502008;

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
    msg.setTimeStamp(0.374585462150017);
    msg.setSource(13928U);
    msg.setSourceEntity(126U);
    msg.setDestination(4843U);
    msg.setDestinationEntity(221U);
    msg.p = 0.12476537055306314;
    msg.i = 0.5787882704375027;
    msg.d = 0.855157570839693;
    msg.a = 0.7930526400024916;

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
    msg.setTimeStamp(0.3116947369429648);
    msg.setSource(25507U);
    msg.setSourceEntity(124U);
    msg.setDestination(403U);
    msg.setDestinationEntity(124U);
    msg.p = 0.23060344427868418;
    msg.i = 0.5932095886474944;
    msg.d = 0.8883822615639207;
    msg.a = 0.505964710632974;

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
    msg.setTimeStamp(0.41479575698837834);
    msg.setSource(20051U);
    msg.setSourceEntity(24U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(229U);
    msg.p = 0.5430292003302696;
    msg.i = 0.34876366127244807;
    msg.d = 0.9450094905115096;
    msg.a = 0.60303903574267;

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
    msg.setTimeStamp(0.024017539869574334);
    msg.setSource(32328U);
    msg.setSourceEntity(166U);
    msg.setDestination(31572U);
    msg.setDestinationEntity(72U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.0873213270589629);
    msg.setSource(20375U);
    msg.setSourceEntity(166U);
    msg.setDestination(59628U);
    msg.setDestinationEntity(118U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.9629845324684031);
    msg.setSource(39057U);
    msg.setSourceEntity(142U);
    msg.setDestination(39953U);
    msg.setDestinationEntity(128U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.4023477833356337);
    msg.setSource(25527U);
    msg.setSourceEntity(137U);
    msg.setDestination(27154U);
    msg.setDestinationEntity(237U);
    msg.x = 0.4315482560031103;
    msg.y = 0.7683609324808489;
    msg.z = 0.6323488951415732;
    msg.vx = 0.45360993888749057;
    msg.vy = 0.657169772446647;
    msg.vz = 0.10069312067037495;
    msg.ax = 0.5658474248454459;
    msg.ay = 0.3966168853326043;
    msg.az = 0.09392565970670752;
    msg.flags = 45546U;

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
    msg.setTimeStamp(0.7786738816151938);
    msg.setSource(10150U);
    msg.setSourceEntity(156U);
    msg.setDestination(28472U);
    msg.setDestinationEntity(182U);
    msg.x = 0.8270803039264963;
    msg.y = 0.3661685565753522;
    msg.z = 0.6983969607262246;
    msg.vx = 0.27957261650773146;
    msg.vy = 0.31422380544481654;
    msg.vz = 0.6305469521304964;
    msg.ax = 0.33696574583731653;
    msg.ay = 0.6248320186214267;
    msg.az = 0.3275342093549146;
    msg.flags = 40971U;

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
    msg.setTimeStamp(0.4919112525625321);
    msg.setSource(2412U);
    msg.setSourceEntity(44U);
    msg.setDestination(6916U);
    msg.setDestinationEntity(176U);
    msg.x = 0.6935268972467683;
    msg.y = 0.7663265638874659;
    msg.z = 0.35695667571120093;
    msg.vx = 0.7557105372103058;
    msg.vy = 0.9730124580759097;
    msg.vz = 0.9882547435453117;
    msg.ax = 0.8651825280069293;
    msg.ay = 0.915844553885616;
    msg.az = 0.20019770938114512;
    msg.flags = 1812U;

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
    msg.setTimeStamp(0.42591804155804125);
    msg.setSource(64240U);
    msg.setSourceEntity(173U);
    msg.setDestination(26962U);
    msg.setDestinationEntity(47U);
    msg.value = 0.4787997411507452;

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
    msg.setTimeStamp(0.8171281618456425);
    msg.setSource(47847U);
    msg.setSourceEntity(65U);
    msg.setDestination(40356U);
    msg.setDestinationEntity(20U);
    msg.value = 0.6883167761832595;

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
    msg.setTimeStamp(0.20277336269471802);
    msg.setSource(55555U);
    msg.setSourceEntity(174U);
    msg.setDestination(55669U);
    msg.setDestinationEntity(254U);
    msg.value = 0.3675214372797956;

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
    msg.setTimeStamp(0.40912024830290283);
    msg.setSource(17268U);
    msg.setSourceEntity(88U);
    msg.setDestination(9069U);
    msg.setDestinationEntity(183U);
    msg.timeout = 12404U;
    msg.lat = 0.5247183414367459;
    msg.lon = 0.17260890608473933;
    msg.z = 0.3770182257953689;
    msg.z_units = 150U;
    msg.speed = 0.7525593410593076;
    msg.speed_units = 136U;
    msg.roll = 0.08828680494646646;
    msg.pitch = 0.22740865520331666;
    msg.yaw = 0.5100208889497453;
    msg.custom.assign("CTUKLKNRWOKERZSZHGGFWAVZTPWGEECOPIMYANFYHSCUFRYBG");

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
    msg.setTimeStamp(0.6378371174887238);
    msg.setSource(41707U);
    msg.setSourceEntity(63U);
    msg.setDestination(18178U);
    msg.setDestinationEntity(57U);
    msg.timeout = 22892U;
    msg.lat = 0.8368436281173434;
    msg.lon = 0.9551045378557956;
    msg.z = 0.8853250219494033;
    msg.z_units = 228U;
    msg.speed = 0.7218933162307848;
    msg.speed_units = 208U;
    msg.roll = 0.23518729877380562;
    msg.pitch = 0.8654498337278075;
    msg.yaw = 0.5166303609515406;
    msg.custom.assign("SSAXBDFYSURTATZYWZAERUQPETLOCLUCCVIXGGBSBWQCRXLQENBJFFZDRKGPQVBYRHZEEJKMNDQFYPCNHIMCKMXQCLAGLZHFSTDUHKRCKMXPTLTXURDWEXVFPJORHUJPAHTSBNCYGKUTRQIZTSKTPJNSUKPFXAXGBVZVEYGVHQOAWOVIQOHCDXVWGNIAANWJWDHBIWDJZJGKNEMKAOOPFWJDYBZORPIVFLLBLYZIDGIOMMUSNOMSEHLI");

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
    msg.setTimeStamp(0.7310576600926223);
    msg.setSource(42322U);
    msg.setSourceEntity(99U);
    msg.setDestination(62733U);
    msg.setDestinationEntity(188U);
    msg.timeout = 60787U;
    msg.lat = 0.1828701165982548;
    msg.lon = 0.4501026061896539;
    msg.z = 0.34572105502632133;
    msg.z_units = 88U;
    msg.speed = 0.720524205737234;
    msg.speed_units = 61U;
    msg.roll = 0.12513519595024325;
    msg.pitch = 0.1256530780722266;
    msg.yaw = 0.854671778973297;
    msg.custom.assign("JUFDCWWMSVBRQPHAHOELIQPACRILJZJQVDSZLOMWNBTUSGMSPGFNKDIGZPBYNJVYYTZTCAWHBHHWIKTYJNCXYTTXYKREFMEDSXAUZSIIKHVHFLZN");

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
    msg.setTimeStamp(0.773346722450507);
    msg.setSource(48172U);
    msg.setSourceEntity(162U);
    msg.setDestination(19686U);
    msg.setDestinationEntity(250U);
    msg.timeout = 27759U;
    msg.lat = 0.9004605486619509;
    msg.lon = 0.7003321093082479;
    msg.z = 0.4067253472638601;
    msg.z_units = 87U;
    msg.speed = 0.29504826889361757;
    msg.speed_units = 200U;
    msg.duration = 7779U;
    msg.radius = 0.5094211988353616;
    msg.flags = 82U;
    msg.custom.assign("MNUMEANPJLKYKFIJDNLLXXRPGAWHFODZIKYZUYGPLNAXKIQDGIEJYTGDMJLCRWXGVJAIMMBHZYZHHKIQSBGSMVYJGTMTJTRAVQQDAMIQNDEUFCHKUVCFXZFCPODFLWYKPQLOZRBYSUBTTXWNSSZKBUMYCEPQW");

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
    msg.setTimeStamp(0.12724637603876476);
    msg.setSource(18033U);
    msg.setSourceEntity(210U);
    msg.setDestination(1169U);
    msg.setDestinationEntity(88U);
    msg.timeout = 21706U;
    msg.lat = 0.5359070897476087;
    msg.lon = 0.5001162196025145;
    msg.z = 0.28581356252824874;
    msg.z_units = 17U;
    msg.speed = 0.06933642458445632;
    msg.speed_units = 4U;
    msg.duration = 50154U;
    msg.radius = 0.500684064061915;
    msg.flags = 33U;
    msg.custom.assign("QDDOKTCFUHVIIYXGOSIXYNPQCMRANEHMMWDVHHLAIZUNCRBRALTNUAQPFWLXMLBPKEAQURDJWKBKLWIVUEUCMGPNFHCXSJVTLWBGSJXFZU");

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
    msg.setTimeStamp(0.5353870307396058);
    msg.setSource(53534U);
    msg.setSourceEntity(4U);
    msg.setDestination(27804U);
    msg.setDestinationEntity(64U);
    msg.timeout = 24183U;
    msg.lat = 0.7828303113398736;
    msg.lon = 0.258394920819807;
    msg.z = 0.5606049682435754;
    msg.z_units = 27U;
    msg.speed = 0.5576035217887779;
    msg.speed_units = 225U;
    msg.duration = 52493U;
    msg.radius = 0.7944827613044423;
    msg.flags = 67U;
    msg.custom.assign("PPTPLADZWKMMNXIWHYGGREPONRQRTDKQX");

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
    msg.setTimeStamp(0.4224644722498754);
    msg.setSource(15057U);
    msg.setSourceEntity(202U);
    msg.setDestination(8620U);
    msg.setDestinationEntity(192U);
    msg.custom.assign("JTUMSHPWOGSLITLKFWAJOCBAYAXFQGCSTYNRYZNFEVEGYNKRBWMVIKPYIHYDYKNGWSJMIHCGHICYLTXVKSXZKLEGWNPDUCDNJGKUQQMFTLPPRVORTEVIFBSNPUYRWECVLKNAMAMEMZOJKXWLSCDQMLAQZMXKNSQBHXIDHHGEHBBWZDVJBXCHDZGGQBLDZUMXTWUV");

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
    msg.setTimeStamp(0.6631161227210164);
    msg.setSource(61648U);
    msg.setSourceEntity(105U);
    msg.setDestination(54584U);
    msg.setDestinationEntity(117U);
    msg.custom.assign("HENJXCDOJTUFQHHQZPXOFHEVXJUWFLENQLECLALLIUNJGVHNXSNXTIMWLOFMRSIZCAMPYYEFDXZYDAZVRNRMVLYDUOJWAPBRVOTRIEPJTVGBUZRYVGVSKPQQKCSGBKJFINJPVGWWT");

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
    msg.setTimeStamp(0.672542670720406);
    msg.setSource(22156U);
    msg.setSourceEntity(78U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(39U);
    msg.custom.assign("TXVYGIYYXIVRXRPEWZUBBEFVHDPHBSWNFSCRXMZKHSUGVTDNERRUKQQLGFFNGALILBVXEZBRWDLDJZNLTCOMPWPQNNJZCADIQJSFMRQDDFQVSLQMBYIOOUKSBUZDAITHHUHOLWNUGMMKMWNFKVJSRNTEJYLAO");

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
    msg.setTimeStamp(0.21890599946404654);
    msg.setSource(3302U);
    msg.setSourceEntity(58U);
    msg.setDestination(5600U);
    msg.setDestinationEntity(0U);
    msg.timeout = 56715U;
    msg.lat = 0.536490160247041;
    msg.lon = 0.5012708445519061;
    msg.z = 0.3927219949248473;
    msg.z_units = 172U;
    msg.duration = 9544U;
    msg.speed = 0.45744128706388554;
    msg.speed_units = 56U;
    msg.type = 93U;
    msg.radius = 0.7086342627770144;
    msg.length = 0.45274030692911615;
    msg.bearing = 0.36033526216592726;
    msg.direction = 70U;
    msg.custom.assign("OITNPNOBOGYYMLHTYSMIQMRTWOFLQLUXVADCVHHDSFBMDGDKSXMUUUFAWBQYOOXQDIQBZEXQPYHEVYDBOTIVQJXCWPGRCEDMWBDFKWLRIEAPZNLCLYHOGWWJAHUTJSZZNREJVKUKOX");

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
    msg.setTimeStamp(0.18025551063040846);
    msg.setSource(17824U);
    msg.setSourceEntity(78U);
    msg.setDestination(881U);
    msg.setDestinationEntity(93U);
    msg.timeout = 14674U;
    msg.lat = 0.3418525238876463;
    msg.lon = 0.45014631251455506;
    msg.z = 0.6312576454587928;
    msg.z_units = 2U;
    msg.duration = 5335U;
    msg.speed = 0.8593695113841578;
    msg.speed_units = 1U;
    msg.type = 247U;
    msg.radius = 0.06720386973848191;
    msg.length = 0.9322339264906399;
    msg.bearing = 0.11063754318245855;
    msg.direction = 221U;
    msg.custom.assign("PLKAPTRMJOXCKVSPWWAKHIFVYZBJKHPXDVYYQGFCZCTGBLSQYXVJXDGKYTSVAETZLHRUDTIAONMOTUNYYGELGSWGQLCGBZHKIDMEOSFESIDRLHWVDPLFPJNHAGWMLZBHMPBWWMDQYQRTERKABMKIIFNCDPBKQVXYGTOJFHXUV");

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
    msg.setTimeStamp(0.9117080051345303);
    msg.setSource(11277U);
    msg.setSourceEntity(162U);
    msg.setDestination(16050U);
    msg.setDestinationEntity(14U);
    msg.timeout = 18538U;
    msg.lat = 0.7485727390434762;
    msg.lon = 0.3805903608755308;
    msg.z = 0.047741241910188026;
    msg.z_units = 69U;
    msg.duration = 42U;
    msg.speed = 0.7191781171478534;
    msg.speed_units = 182U;
    msg.type = 109U;
    msg.radius = 0.5942891107176992;
    msg.length = 0.8249890288661051;
    msg.bearing = 0.65910925254931;
    msg.direction = 171U;
    msg.custom.assign("YKPUEYBNXRTHXOJCXPGQDCAOJCATAWGTZBESPLEWFWPDJOVHCPWMFBIYHFNQNVNSGKYSMAOCKZUSRGXUQIMEJVHMZMSDQBILCMOLLARRVCJHGPXBCRIHRAVJSTWWZTESTNQYICXSLDFWMOSZRDFVFDEDVGKHKIJWJFOAQRAPUOHUETWNZFUJLUNPDYUFQZCKUWLNYXTBY");

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
    msg.setTimeStamp(0.4450873667757185);
    msg.setSource(54622U);
    msg.setSourceEntity(209U);
    msg.setDestination(15831U);
    msg.setDestinationEntity(246U);
    msg.duration = 59431U;
    msg.custom.assign("AJOUQPWIDSGLPTGHBZEYDBHTICVSURNXHXDWWPQBZLBWWEQTFNSCMRTQOKQZCNUNYYSIIDADDLKZHJZSXFLCXAHOOVIALJRFQRYGOTXKFHMPUFZZWMMSGISVCGJRGTCWVHCVSIYBXJDPVJIJXUQHWYPZUNYAKRVDCSPOKGLNUBMZARBOZTKPTNIGMENAKEELJARUERQWVYMKJPSOM");

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
    msg.setTimeStamp(0.08421230352727671);
    msg.setSource(54974U);
    msg.setSourceEntity(205U);
    msg.setDestination(10838U);
    msg.setDestinationEntity(224U);
    msg.duration = 42869U;
    msg.custom.assign("CWDQHBGJXZTDAFSCPICTMKGZUYVXRJUXQVSDQLVPFHPYWSFUCAZJPNIGAOSKGXOTULRNYMQOBKNPSQGZCIEEPYELXIVOWOAABYYBJBNDDXAZNJXTMXJGXUNFTGVTRZMWQAILRWEWGPNBSOP");

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
    msg.setTimeStamp(0.9684732197304197);
    msg.setSource(42642U);
    msg.setSourceEntity(185U);
    msg.setDestination(47282U);
    msg.setDestinationEntity(149U);
    msg.duration = 36692U;
    msg.custom.assign("SHFNHHQCRWSYQOEDQPAHWNEVEGBIOZFGLBOINYECPQZJJUHTTRTYEGTCWZQOXGNNUBJOTXZRYNDKDVXNBZIPDXPLMGVLLW");

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
    msg.setTimeStamp(0.6464920203734518);
    msg.setSource(18703U);
    msg.setSourceEntity(25U);
    msg.setDestination(6355U);
    msg.setDestinationEntity(216U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4926221913917441;
    tmp_msg_0.speed_units = 254U;
    msg.control.set(tmp_msg_0);
    msg.duration = 64164U;
    msg.custom.assign("NBQWNKHQURVDJWNIMVARMRWCYBSZXDLVNFMKNBFLDSTQAUINEZSJOHECHUKMWECOFJHWVCDXITGCPEEPIBRSKCCOVINGIEPTYXPROHGSFHUSDTKBXWFKSGGAZWQTOERQMFHLJANQXZBQB");

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
    msg.setTimeStamp(0.21765742031087776);
    msg.setSource(26400U);
    msg.setSourceEntity(134U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(191U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5127682987395599;
    msg.control.set(tmp_msg_0);
    msg.duration = 35858U;
    msg.custom.assign("NVRWGFAZIQMIGYKVORGPOSXXCTPJMMGMLMJPJJKBOHUWAPCUDUNELVVRSDEQPYSRQZIIUFBNGBWXGUAJEFYPZZMUDCFKTHTNGHSYHRSVCXFIWQZKQJXDKOZXYYJDDFXRFLUPTCLOSYKEKWEUAHFZYISBCCHWQGPDNGTTNBHSEFXNVAAQSMWVB");

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
    msg.setTimeStamp(0.12740321526397957);
    msg.setSource(57559U);
    msg.setSourceEntity(220U);
    msg.setDestination(33641U);
    msg.setDestinationEntity(243U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8189638365914957;
    msg.control.set(tmp_msg_0);
    msg.duration = 51659U;
    msg.custom.assign("OWAHIJQABRIXVMWDCHWBNUGBORZNCOEKEQWTBQTXPVGSUEGDVLRLEYLJOPCYSULYPTAXVJFPFFQSVMXIIMRBSKYMSONUWHKYRDBLGZGK");

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
    msg.setTimeStamp(0.07538515184147532);
    msg.setSource(5484U);
    msg.setSourceEntity(66U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(155U);
    msg.timeout = 10656U;
    msg.lat = 0.7106899784168307;
    msg.lon = 0.7654542461071926;
    msg.z = 0.4397217872960889;
    msg.z_units = 163U;
    msg.speed = 0.3862738861822437;
    msg.speed_units = 41U;
    msg.bearing = 0.3240654288941367;
    msg.cross_angle = 0.008756042497594652;
    msg.width = 0.7907993994947109;
    msg.length = 0.5802160615734034;
    msg.hstep = 0.808398494639327;
    msg.coff = 71U;
    msg.alternation = 63U;
    msg.flags = 8U;
    msg.custom.assign("KYHSKDPNCOKTVDOYVMRFJQGMHYNWDCVEEXTSUXMVYUAEVMEZBPO");

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
    msg.setTimeStamp(0.273688010377204);
    msg.setSource(42070U);
    msg.setSourceEntity(34U);
    msg.setDestination(14422U);
    msg.setDestinationEntity(216U);
    msg.timeout = 60714U;
    msg.lat = 0.32826145049066946;
    msg.lon = 0.43152126002930113;
    msg.z = 0.46741271539103246;
    msg.z_units = 54U;
    msg.speed = 0.6982492641370256;
    msg.speed_units = 192U;
    msg.bearing = 0.282971233430491;
    msg.cross_angle = 0.09915322665773663;
    msg.width = 0.6745478874480518;
    msg.length = 0.972068675341914;
    msg.hstep = 0.12709180153902344;
    msg.coff = 90U;
    msg.alternation = 60U;
    msg.flags = 48U;
    msg.custom.assign("AGJYRMUJMODKFHEPHHNYIYLURVIIJZCYZCLYVMJSJIVLERBSTCFPBOEUFQVQSNHXIACYAIDKBTXXMKNNIP");

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
    msg.setTimeStamp(0.939503802410538);
    msg.setSource(31336U);
    msg.setSourceEntity(227U);
    msg.setDestination(39685U);
    msg.setDestinationEntity(113U);
    msg.timeout = 2182U;
    msg.lat = 0.4922528459488533;
    msg.lon = 0.16777125078476252;
    msg.z = 0.7167789277550508;
    msg.z_units = 124U;
    msg.speed = 0.25227357489768043;
    msg.speed_units = 225U;
    msg.bearing = 0.373892270787863;
    msg.cross_angle = 0.05029655232041219;
    msg.width = 0.43078846293343487;
    msg.length = 0.46096033068789;
    msg.hstep = 0.09807786296943755;
    msg.coff = 101U;
    msg.alternation = 96U;
    msg.flags = 113U;
    msg.custom.assign("PXPFFWOPNE");

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
    msg.setTimeStamp(0.25527194812199405);
    msg.setSource(28216U);
    msg.setSourceEntity(86U);
    msg.setDestination(56746U);
    msg.setDestinationEntity(141U);
    msg.timeout = 36134U;
    msg.lat = 0.39897273175020176;
    msg.lon = 0.5828930446860374;
    msg.z = 0.21359651161692939;
    msg.z_units = 247U;
    msg.speed = 0.3560926869891633;
    msg.speed_units = 98U;
    msg.custom.assign("DREQBTWTPBWFXXYSIVCCDDXIWURBBHXDRGVAALGTVPKJZHERPPMUJMUQLXZHZQFIGTCSSGJOCROFFTZZCMEDNKDIFPIAJQKLSLLJAIBCXERJUKXA");

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
    msg.setTimeStamp(0.5032107434907003);
    msg.setSource(4172U);
    msg.setSourceEntity(138U);
    msg.setDestination(11414U);
    msg.setDestinationEntity(158U);
    msg.timeout = 19470U;
    msg.lat = 0.5921638166222071;
    msg.lon = 0.2317237729469015;
    msg.z = 0.5902529898530712;
    msg.z_units = 21U;
    msg.speed = 0.19019816340275153;
    msg.speed_units = 71U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5739602187353806;
    tmp_msg_0.y = 0.38285803829639875;
    tmp_msg_0.z = 0.22950130632457943;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VNICTPMGTFNRONZIDZJZBVGWRMUDKHNDCCJEVBWFYQZMSWXLFMADDDDHCAIAWRKEFGDSMLJUANIKQEHOLBZXBONIRFBLVKFOHTSJOAIMY");

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
    msg.setTimeStamp(0.030873060481284798);
    msg.setSource(28906U);
    msg.setSourceEntity(150U);
    msg.setDestination(42119U);
    msg.setDestinationEntity(177U);
    msg.timeout = 15073U;
    msg.lat = 0.443993425253135;
    msg.lon = 0.725447713147366;
    msg.z = 0.791704370941413;
    msg.z_units = 83U;
    msg.speed = 0.4535312040998507;
    msg.speed_units = 10U;
    msg.custom.assign("GVFEIVELQEXAGQOQJMTHBANPVUMRILWYEKXTNLQSZLZTJZZVETHBXABTKVQWKMFGMBOLOHUDEKXLBKODXVAMWPTRHMMEUYKJGBPUJCKBUIHDNCWCCDNJAAOLYXILTIUISGMCFSXCDDXOGBMGMVZNWXRHJWGUNQSRHLIIGDPDPWSRTUKIRPFWESQUYOAZRPDFUYNZSDVQNBNRKNS");

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
    msg.setTimeStamp(0.28184402813627163);
    msg.setSource(31147U);
    msg.setSourceEntity(148U);
    msg.setDestination(25077U);
    msg.setDestinationEntity(33U);
    msg.x = 0.47516769069489007;
    msg.y = 0.03277699263470468;
    msg.z = 0.5493829273234214;

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
    msg.setTimeStamp(0.16647403685725437);
    msg.setSource(22120U);
    msg.setSourceEntity(145U);
    msg.setDestination(15196U);
    msg.setDestinationEntity(141U);
    msg.x = 0.03377475484518455;
    msg.y = 0.0009177950413465918;
    msg.z = 0.023422223142032572;

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
    msg.setTimeStamp(0.35850421814795275);
    msg.setSource(63406U);
    msg.setSourceEntity(50U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(153U);
    msg.x = 0.9948149877457908;
    msg.y = 0.7703261313358533;
    msg.z = 0.8577180972491841;

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
    msg.setTimeStamp(0.08425258880552766);
    msg.setSource(7858U);
    msg.setSourceEntity(95U);
    msg.setDestination(22199U);
    msg.setDestinationEntity(27U);
    msg.timeout = 11023U;
    msg.lat = 0.941252218961217;
    msg.lon = 0.765646559322925;
    msg.z = 0.5573145163270138;
    msg.z_units = 148U;
    msg.amplitude = 0.043671784257923285;
    msg.pitch = 0.6733442375083267;
    msg.speed = 0.2102450442378988;
    msg.speed_units = 37U;
    msg.custom.assign("IRBCLNCBXMTWQLZSKMVJECYZKFUADKHAGXVQPFCKCEOVYQPYIDGLIUUPBWJSGHJEN");

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
    msg.setTimeStamp(0.5948066491801967);
    msg.setSource(25215U);
    msg.setSourceEntity(188U);
    msg.setDestination(12423U);
    msg.setDestinationEntity(237U);
    msg.timeout = 53754U;
    msg.lat = 0.18127278351904563;
    msg.lon = 0.32986309872883735;
    msg.z = 0.947294222737443;
    msg.z_units = 140U;
    msg.amplitude = 0.5776090406150047;
    msg.pitch = 0.6181012195996108;
    msg.speed = 0.051627214735163074;
    msg.speed_units = 231U;
    msg.custom.assign("DUAMDGPXUKNSORNILTQGAEKBZXEAFWRCZRBOKOSKYKUSMJGZAGPFTYPSSLRAPIELLHYNQISLXOYZJTYHUGEDNVNEGDXOATXKHHHZXKMCWGMHFBMPSEKOORVJIZDTOIJTQVFYQIXLXQQPCWZQDJUDPQFTUBPZZWBDUUJBHHCFLQMNHCO");

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
    msg.setTimeStamp(0.3576182181382307);
    msg.setSource(60247U);
    msg.setSourceEntity(58U);
    msg.setDestination(41861U);
    msg.setDestinationEntity(40U);
    msg.timeout = 35321U;
    msg.lat = 0.14715161519326447;
    msg.lon = 0.4693353523128968;
    msg.z = 0.09248681043702311;
    msg.z_units = 9U;
    msg.amplitude = 0.4083297662920191;
    msg.pitch = 0.7612517073624298;
    msg.speed = 0.9759664818048538;
    msg.speed_units = 234U;
    msg.custom.assign("ZCJJJIQOZWBIOCGJWXKPQGMPAFHLDDKWRSITPBLXQHYMSKISBABSUYLODGLNYHEKQAIGDXFECCFTFCLEYXPABRTEPKDSKLVBKAHZWNIONUFBS");

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
    msg.setTimeStamp(0.3359974715579669);
    msg.setSource(5083U);
    msg.setSourceEntity(80U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.5614133762697793);
    msg.setSource(35799U);
    msg.setSourceEntity(192U);
    msg.setDestination(57378U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.35116183667656);
    msg.setSource(60830U);
    msg.setSourceEntity(94U);
    msg.setDestination(47227U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.23038490110295462);
    msg.setSource(24934U);
    msg.setSourceEntity(159U);
    msg.setDestination(35825U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.6801123786818066;
    msg.lon = 0.85351638277786;
    msg.z = 0.48895763365836675;
    msg.z_units = 20U;
    msg.radius = 0.6519918594459135;
    msg.duration = 32484U;
    msg.speed = 0.5638095618989576;
    msg.speed_units = 29U;
    msg.custom.assign("TOIDISTOPRBYYQJPSIXGLTTBMQNVHRDBIJGEFZSXPDYPYOWUBBJVSTXHLEXRAMVAAMPROBKSJVKLCKYIUIMKXNVWITLQZHCMQCLZRNBEGAGUFCJSXELUZRIKJOFPAFKJDAWFSEFUSZPTWBMQCEFRYQGPXSWZEQGCOMMWLPMFILNUAIDBVNEJNKWHRTODKHQNQAUOYHWCJWPYGNBWKJCNGFXH");

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
    msg.setTimeStamp(0.5244444308901643);
    msg.setSource(29078U);
    msg.setSourceEntity(116U);
    msg.setDestination(51423U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.39629802854367324;
    msg.lon = 0.4675271653854879;
    msg.z = 0.2852990932382806;
    msg.z_units = 130U;
    msg.radius = 0.0015859773380600961;
    msg.duration = 21035U;
    msg.speed = 0.08282177354229026;
    msg.speed_units = 193U;
    msg.custom.assign("HGFMQZEAVSYNZJPLOJNIRCAQWBJFMXANFRZUZSRLWUQZENIQKFIOLWVDLOCUPIQMVEUTYQMPUGWTPRSNMS");

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
    msg.setTimeStamp(0.466237381711748);
    msg.setSource(1216U);
    msg.setSourceEntity(135U);
    msg.setDestination(24065U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.38928883134825365;
    msg.lon = 0.7698548048337923;
    msg.z = 0.6277833903048688;
    msg.z_units = 192U;
    msg.radius = 0.9181570226109895;
    msg.duration = 53154U;
    msg.speed = 0.0683539843892409;
    msg.speed_units = 71U;
    msg.custom.assign("WHMNWSAKSTULKSOIAJEUTWLHZDBBFOQAAYCDXZMRFPYHQRIBTIUCJUQNADJLEEHVCLPAHOMCDBUWWJWXKZHHAXGOVOAFJTNZUUPFAIEMYNEDIRVGFPKRJWGYGTYITXZYOOPIIFNPNFQZQESLQDJXBEKQMMKFNGRUCRTYPXGVVRIYLRTMBRNYLEQCKVXSWOSHGMLXE");

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
    msg.setTimeStamp(0.4479104478896593);
    msg.setSource(2539U);
    msg.setSourceEntity(80U);
    msg.setDestination(36086U);
    msg.setDestinationEntity(93U);
    msg.timeout = 5571U;
    msg.flags = 111U;
    msg.lat = 0.720759856036476;
    msg.lon = 0.2343318487015612;
    msg.start_z = 0.9976233443878637;
    msg.start_z_units = 95U;
    msg.end_z = 0.3636533086780024;
    msg.end_z_units = 199U;
    msg.radius = 0.4249904203545398;
    msg.speed = 0.7500841762877105;
    msg.speed_units = 239U;
    msg.custom.assign("OHRGCHJPWRGZAZIDFSGQNZDIIAALFQUYDUTNHBYHYVBROYLDUUJVIRWDMXUPWQMCYEBXJOLGQBYBSFJIKOTCNZKXADIPLLFQYRAKHHZPKUNUVNPLCBJVUFIXKPTCZTGFLIMBHKXLPWXTQXNCXAOGFOCCEGVAZSQFSGWWMRCRWPRSZBDDMRDMUODEKNYQWJYEEVJNTKSVNRLHFBJHOWSAOTEYHEZKJSMSXKMTFXJ");

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
    msg.setTimeStamp(0.406271017266276);
    msg.setSource(27761U);
    msg.setSourceEntity(254U);
    msg.setDestination(1619U);
    msg.setDestinationEntity(82U);
    msg.timeout = 43161U;
    msg.flags = 234U;
    msg.lat = 0.7307702941761419;
    msg.lon = 0.9278426548812156;
    msg.start_z = 0.6894392626677484;
    msg.start_z_units = 52U;
    msg.end_z = 0.17409674708429956;
    msg.end_z_units = 234U;
    msg.radius = 0.18285088148017803;
    msg.speed = 0.8165149677646261;
    msg.speed_units = 84U;
    msg.custom.assign("CAQYTQNIONTREVWLJBSMXWUZOAEWFNOPWCRHFOANJPDXWPVVDAFQCFDDVEFRMGGVFDOTINSHIHBLHYGUVPHIXWGYBBXZELRUOFIJRMCRJSBRUMZYGHUYUVJTKJVRTWKNJXWKELHURUODXNAPAYBVITZMBSDOQHXLQEKZEFSDTGYGOMMHUJEQDINKSMDFTQPSGELZKEYNGLGCCCIQZLMXAWAX");

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
    msg.setTimeStamp(0.4531619345459035);
    msg.setSource(28061U);
    msg.setSourceEntity(16U);
    msg.setDestination(49034U);
    msg.setDestinationEntity(83U);
    msg.timeout = 12423U;
    msg.flags = 49U;
    msg.lat = 0.06608934108759246;
    msg.lon = 0.9774094520058209;
    msg.start_z = 0.11642807893376117;
    msg.start_z_units = 116U;
    msg.end_z = 0.4964027474506424;
    msg.end_z_units = 113U;
    msg.radius = 0.14701841220345102;
    msg.speed = 0.7234322946002233;
    msg.speed_units = 179U;
    msg.custom.assign("IZCEIDIBOHRNUCIJLZCNAZDIKWAQUHYLFMUNEXFYNMQYSLTLEUNQEVVQBJHJGPKCIBHFSWYRZRFDXFOBNCHBGBZQPHAPKPMXORDYMJWDQVRCTKPOGBWTARTCMMWLRWGYDVKHUZFTWXUCYRESGTNLKAMFSWUOTJWFD");

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
    msg.setTimeStamp(0.7453048975684757);
    msg.setSource(50043U);
    msg.setSourceEntity(71U);
    msg.setDestination(55543U);
    msg.setDestinationEntity(100U);
    msg.timeout = 32570U;
    msg.lat = 0.2902661115615115;
    msg.lon = 0.5680987421010838;
    msg.z = 0.6238638266418554;
    msg.z_units = 111U;
    msg.speed = 0.975370976696232;
    msg.speed_units = 79U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7087446694091049;
    tmp_msg_0.y = 0.5683209782843931;
    tmp_msg_0.z = 0.5098170127011732;
    tmp_msg_0.t = 0.20026923604932412;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NSARDWQMZESMLILRDMGKWZLCMWLGKMECJOKGHDQAQJEUKTGJMVQMDKNQOQWAUWBXBNJBJKXHYPYXKCTTVTLFGNFURTELVOTN");

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
    msg.setTimeStamp(0.30996463301335175);
    msg.setSource(57310U);
    msg.setSourceEntity(53U);
    msg.setDestination(11826U);
    msg.setDestinationEntity(217U);
    msg.timeout = 13194U;
    msg.lat = 0.23618246648167185;
    msg.lon = 0.5271218381607647;
    msg.z = 0.7694527825871709;
    msg.z_units = 18U;
    msg.speed = 0.37865058758402514;
    msg.speed_units = 30U;
    msg.custom.assign("VTPXZZOCIMTFEVQEHKHUAOFRIWXSYJIQCSRHTCDPNJKSWVJBEZWVPCJSPQLCZHMEYONCGNYDLQLVQGEHJNENUSTBABRHZZAPUVSGQEJIGEWSSNIV");

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
    msg.setTimeStamp(0.12584177122656381);
    msg.setSource(18512U);
    msg.setSourceEntity(65U);
    msg.setDestination(35278U);
    msg.setDestinationEntity(221U);
    msg.timeout = 55394U;
    msg.lat = 0.8448259044867845;
    msg.lon = 0.6181236872512488;
    msg.z = 0.9130864014615011;
    msg.z_units = 162U;
    msg.speed = 0.7172643113090876;
    msg.speed_units = 123U;
    msg.custom.assign("WGPVWUKWONV");

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
    msg.setTimeStamp(0.8746358280009612);
    msg.setSource(12961U);
    msg.setSourceEntity(55U);
    msg.setDestination(16405U);
    msg.setDestinationEntity(69U);
    msg.x = 0.6198556172398999;
    msg.y = 0.5575504512773259;
    msg.z = 0.017563276923466487;
    msg.t = 0.1796659155090975;

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
    msg.setTimeStamp(0.6558750683512186);
    msg.setSource(5599U);
    msg.setSourceEntity(182U);
    msg.setDestination(45513U);
    msg.setDestinationEntity(70U);
    msg.x = 0.26136889579972933;
    msg.y = 0.597910881753416;
    msg.z = 0.7411903577757677;
    msg.t = 0.48989485676766;

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
    msg.setTimeStamp(0.4674773381730354);
    msg.setSource(55216U);
    msg.setSourceEntity(110U);
    msg.setDestination(41954U);
    msg.setDestinationEntity(49U);
    msg.x = 0.22591231354865926;
    msg.y = 0.3932229418654727;
    msg.z = 0.7479789926299932;
    msg.t = 0.4821555088699706;

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
    msg.setTimeStamp(0.9992821425169023);
    msg.setSource(48196U);
    msg.setSourceEntity(109U);
    msg.setDestination(17089U);
    msg.setDestinationEntity(20U);
    msg.timeout = 5594U;
    msg.name.assign("EJMSWEDOYGLYNTSVJCVIMDFFVNEROSVXQQGEAOHGHFYFBPROUWFAXDXLXJLG");
    msg.custom.assign("ZLKMNCELPCWAUXUPHKYSDNSPAAUBSIGYKGKHIQSITVHAYEZTRSFPADFVRUWGKYNUCGACRIZTPHDNFMMQQEQXJOWLVYFQJIHMGUERLOVCQDFDTEMLBHVVNCNRBOJOTFGFORXUWIZINKJVATKJSBUPXJHBJBVQXLKMZOZDBXZFTQXPWIDJXGSCCMKQARIELELWFNPOWTJGDHZPCZSRZUWTABYLRFNOHHSGYRSWQPVYMXJWGXOIADTYKCLMEO");

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
    msg.setTimeStamp(0.5828486132782316);
    msg.setSource(55426U);
    msg.setSourceEntity(220U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(31U);
    msg.timeout = 25278U;
    msg.name.assign("GSVFJMDLNBDPWMC");
    msg.custom.assign("XYYPLHLCCSKLULMEGPXCAHIIZPVAUXHVYXQDGBZUPRFDKYGMEBWCESFTNSJNVVRPEAXD");

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
    msg.setTimeStamp(0.8467848537832846);
    msg.setSource(53038U);
    msg.setSourceEntity(127U);
    msg.setDestination(31488U);
    msg.setDestinationEntity(216U);
    msg.timeout = 54398U;
    msg.name.assign("HKFATLOMBKAUYORUYQIMJXHXBXSPEAJCKJXEQEZI");
    msg.custom.assign("CAKNPBQNFDHWOKJZGEWIMUSYBSRQIWLJNCMADHENUDBENYZQOMWXMAGYFCIQCAPBUUPTIKTVZEZMRVCIHEHROXVADRYJLWI");

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
    msg.setTimeStamp(0.5964941041624516);
    msg.setSource(46419U);
    msg.setSourceEntity(144U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.5642991652575245;
    msg.lon = 0.7006551903166761;
    msg.z = 0.44739564424040945;
    msg.z_units = 142U;
    msg.speed = 0.6810993699679232;
    msg.speed_units = 59U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8967383267447205;
    tmp_msg_0.y = 0.43891444105057753;
    tmp_msg_0.z = 0.6467378588942272;
    tmp_msg_0.t = 0.887722822459296;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.41773294602392663;
    msg.custom.assign("EJUZTOKEHESRBJGPTQKHWNHWVROAZJGORANMHUBHXMNMPFKWKLBLMGKVJVUAWMCTTCZYLBXSUQFZDBPDADIKXYRYPOXEHRQVFYEOFFIWMCWFJGPNCUELNJLSQBABDMEUUZJGPPIHITYTRUZSFMWWQGZJXXGNNH");

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
    msg.setTimeStamp(0.6713250607991308);
    msg.setSource(43296U);
    msg.setSourceEntity(195U);
    msg.setDestination(27079U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.8565256234614519;
    msg.lon = 0.9666820485808096;
    msg.z = 0.7872298559944279;
    msg.z_units = 207U;
    msg.speed = 0.8352001021970288;
    msg.speed_units = 152U;
    msg.start_time = 0.7610792641351888;
    msg.custom.assign("VLPJJVTBRYTLBGKHOBGKAXSRYNQHQZITYMKIDZDZLXRWHRDKMUNFMEBCXNFQFOFUFKQSBPZMJGUJPAIGESEPYAWPDQGWPTOYCNITROBILSTNDWOJMFHYAOCJROARQNESSWPEHAKEYNWRPZWDVUGYVUJUHQOFLJLZRVBSUPDKXMEH");

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
    msg.setTimeStamp(0.35006325873023425);
    msg.setSource(30587U);
    msg.setSourceEntity(142U);
    msg.setDestination(10050U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.27192701485390136;
    msg.lon = 0.583176732117349;
    msg.z = 0.0779825773408509;
    msg.z_units = 239U;
    msg.speed = 0.11479874868788242;
    msg.speed_units = 22U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13005U;
    tmp_msg_0.off_x = 0.5741334488827291;
    tmp_msg_0.off_y = 0.9136766719584817;
    tmp_msg_0.off_z = 0.3606433900134264;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.693278030467206;
    msg.custom.assign("DQLCELTAOCLHRPRKORLGFAXBYSQEKYIQFMEOXBIYODIOGVBGSVHZFMZWKWHOWRYNYIJSATKXYZGCPDMIUBUMCBMRZFYYGIEPDASXTG");

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
    msg.setTimeStamp(0.5229306147387229);
    msg.setSource(46044U);
    msg.setSourceEntity(231U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(181U);
    msg.vid = 62934U;
    msg.off_x = 0.948847607283088;
    msg.off_y = 0.8675861783175689;
    msg.off_z = 0.44472975034336015;

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
    msg.setTimeStamp(0.6494942320123891);
    msg.setSource(48606U);
    msg.setSourceEntity(230U);
    msg.setDestination(64518U);
    msg.setDestinationEntity(184U);
    msg.vid = 718U;
    msg.off_x = 0.5009912981758049;
    msg.off_y = 0.9368027321597552;
    msg.off_z = 0.43799385115059275;

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
    msg.setTimeStamp(0.24918599169537137);
    msg.setSource(19812U);
    msg.setSourceEntity(148U);
    msg.setDestination(46369U);
    msg.setDestinationEntity(247U);
    msg.vid = 4534U;
    msg.off_x = 0.6146232843852681;
    msg.off_y = 0.1619198166373983;
    msg.off_z = 0.043178150023332806;

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
    msg.setTimeStamp(0.2883858641473154);
    msg.setSource(42114U);
    msg.setSourceEntity(76U);
    msg.setDestination(29270U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.8304900956870761);
    msg.setSource(47126U);
    msg.setSourceEntity(136U);
    msg.setDestination(38321U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.23230761471778283);
    msg.setSource(9619U);
    msg.setSourceEntity(122U);
    msg.setDestination(1501U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.8451854455874657);
    msg.setSource(10652U);
    msg.setSourceEntity(134U);
    msg.setDestination(20664U);
    msg.setDestinationEntity(123U);
    msg.mid = 10683U;

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
    msg.setTimeStamp(0.9121465650547675);
    msg.setSource(49737U);
    msg.setSourceEntity(67U);
    msg.setDestination(10352U);
    msg.setDestinationEntity(200U);
    msg.mid = 49122U;

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
    msg.setTimeStamp(0.6382035829095807);
    msg.setSource(61494U);
    msg.setSourceEntity(173U);
    msg.setDestination(46991U);
    msg.setDestinationEntity(251U);
    msg.mid = 44703U;

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
    msg.setTimeStamp(0.6629260989408865);
    msg.setSource(58529U);
    msg.setSourceEntity(244U);
    msg.setDestination(54856U);
    msg.setDestinationEntity(137U);
    msg.state = 54U;
    msg.eta = 6544U;
    msg.info.assign("CEXIFCITSSWESYV");

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
    msg.setTimeStamp(0.31704536940611905);
    msg.setSource(56367U);
    msg.setSourceEntity(246U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(211U);
    msg.state = 153U;
    msg.eta = 3815U;
    msg.info.assign("PYCSBUXIWBOJWDDMAMLBLEEUMTEJKOQPUQPDNDLXDGYCZHRFUFJPACYHPSGDTZKFAYKUEWGVCTXJCUJTXKMSNIWBBAOAIRRZNLBRVMOITRDXXYYNFZAVBIFQEAGQWTVTCHLJGEJ");

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
    msg.setTimeStamp(0.13740800563748734);
    msg.setSource(59276U);
    msg.setSourceEntity(71U);
    msg.setDestination(45674U);
    msg.setDestinationEntity(171U);
    msg.state = 86U;
    msg.eta = 57160U;
    msg.info.assign("GRUOYINHERNSPACQJFXNJOPYUSOMDJMKEHACUFZOXERRTTVEVXEJUYNPVWBYVPIFWQOKKBTUSVPJCFZHPKUBIQLBQVNDGYFLZGAPNQMMKDPQSLJMBVJGCSQTUEOHSIBSDLZHMOXXYFXTSKHWURTTXLWAZCPOIVNEGZZQRIQCWJGZEBLMMWDWYLGCFZHESKOVTFGDSR");

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
    msg.setTimeStamp(0.7175285918907022);
    msg.setSource(18927U);
    msg.setSourceEntity(155U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(90U);
    msg.system = 49276U;
    msg.duration = 57633U;
    msg.speed = 0.6049839284028162;
    msg.speed_units = 82U;
    msg.x = 0.5797854860351415;
    msg.y = 0.5392580447097687;
    msg.z = 0.6886372606094053;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.7390703169350823);
    msg.setSource(30393U);
    msg.setSourceEntity(226U);
    msg.setDestination(31332U);
    msg.setDestinationEntity(49U);
    msg.system = 34398U;
    msg.duration = 24187U;
    msg.speed = 0.5549418658426376;
    msg.speed_units = 122U;
    msg.x = 0.13211205095088618;
    msg.y = 0.3002201031366113;
    msg.z = 0.7074836301819595;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.9710055249782978);
    msg.setSource(3486U);
    msg.setSourceEntity(49U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(123U);
    msg.system = 21094U;
    msg.duration = 20245U;
    msg.speed = 0.7159304554192503;
    msg.speed_units = 122U;
    msg.x = 0.7418215548371229;
    msg.y = 0.5570168736761933;
    msg.z = 0.7181734929845078;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.24527560961684458);
    msg.setSource(57585U);
    msg.setSourceEntity(151U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.6132700201401425;
    msg.lon = 0.715170876095391;
    msg.speed = 0.3939494205241877;
    msg.speed_units = 116U;
    msg.duration = 2099U;
    msg.sys_a = 55650U;
    msg.sys_b = 25603U;
    msg.move_threshold = 0.03283448188368554;

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
    msg.setTimeStamp(0.060636175072210086);
    msg.setSource(30824U);
    msg.setSourceEntity(214U);
    msg.setDestination(3757U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.9438273700785971;
    msg.lon = 0.4880584465452191;
    msg.speed = 0.11533698338852838;
    msg.speed_units = 178U;
    msg.duration = 11698U;
    msg.sys_a = 55158U;
    msg.sys_b = 19796U;
    msg.move_threshold = 0.20316903257858776;

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
    msg.setTimeStamp(0.053775761843486536);
    msg.setSource(56751U);
    msg.setSourceEntity(10U);
    msg.setDestination(42763U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.3967966134218611;
    msg.lon = 0.6043152820285226;
    msg.speed = 0.34629775931407414;
    msg.speed_units = 115U;
    msg.duration = 22074U;
    msg.sys_a = 20204U;
    msg.sys_b = 31396U;
    msg.move_threshold = 0.098035291073718;

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
    msg.setTimeStamp(0.1576587832955152);
    msg.setSource(33777U);
    msg.setSourceEntity(82U);
    msg.setDestination(42038U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.35640661549864605;
    msg.lon = 0.24815508788711882;
    msg.z = 0.43363614697662267;
    msg.z_units = 241U;
    msg.speed = 0.534457945083054;
    msg.speed_units = 10U;
    msg.custom.assign("SGLWHUIZNWXMZSIFUDPEKMRRDKQENYDWCYRCGXIMXUZKQMRAYVQDKTCKFBSWTOXACBBPKGIEFCNAUQOUFPRSNTYHJSVNZHOFJWROTJMPQLTFPNVMPOSTQKFXXKJDOHJRVTFZXBNVGGXWPMAUVXOXEHLTAILDEITYDSYCNEZKMIJDBCBOVGPRCJLIBRYQSGCZSWMQLBYDHJTYKEVJNIWSFVBR");

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
    msg.setTimeStamp(0.34563631610775325);
    msg.setSource(16029U);
    msg.setSourceEntity(85U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.707474666699322;
    msg.lon = 0.09732239796641062;
    msg.z = 0.767558074251802;
    msg.z_units = 37U;
    msg.speed = 0.8938917257107156;
    msg.speed_units = 84U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6260144905784764;
    tmp_msg_0.lon = 0.43105868169101547;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YFXFXCEICSOWFPARSMGIJENNSUIXXLIRUJEMNJGQRWLAGBHXVDINQWCKBPUDYVBFQPHMEVLHQQCWBXPWOLTTDBVUOAXZTOKFCKISKDVIYGBUYVFKIE");

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
    msg.setTimeStamp(0.9622537925711111);
    msg.setSource(9830U);
    msg.setSourceEntity(132U);
    msg.setDestination(10485U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.18028845674165417;
    msg.lon = 0.42988243507364743;
    msg.z = 0.9079301252150993;
    msg.z_units = 54U;
    msg.speed = 0.9881772007138526;
    msg.speed_units = 211U;
    msg.custom.assign("VSWMVBOPHLYBYVSEBNTHZOAHNRKGLXPJESTZUMJVGDJTNCOXQZZUOKABEUEBKRBZBMNLCEHGKUFUEHZAWWVFOOWTGYAFYPRIDQLTKWXOXCSZOCIQNGRKUWIUIDBCSGCJRNASZCGISDQQYXAPAKHKQMWBHVVRLMRCLFDSJFAKHZJDC");

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
    msg.setTimeStamp(0.5699321975869727);
    msg.setSource(49225U);
    msg.setSourceEntity(97U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.7235089594205499;
    msg.lon = 0.6232312948322671;

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
    msg.setTimeStamp(0.9333945255058103);
    msg.setSource(10955U);
    msg.setSourceEntity(44U);
    msg.setDestination(8517U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.14555413064951872;
    msg.lon = 0.0364835335576118;

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
    msg.setTimeStamp(0.5948002037537373);
    msg.setSource(30465U);
    msg.setSourceEntity(20U);
    msg.setDestination(26760U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.6135676300038537;
    msg.lon = 0.9268107372750031;

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
    msg.setTimeStamp(0.5664786381555411);
    msg.setSource(29059U);
    msg.setSourceEntity(87U);
    msg.setDestination(31769U);
    msg.setDestinationEntity(225U);
    msg.timeout = 15727U;
    msg.lat = 0.8978374881463609;
    msg.lon = 0.7953137321334989;
    msg.z = 0.5253170388166347;
    msg.z_units = 246U;
    msg.pitch = 0.8137018738100475;
    msg.amplitude = 0.9937028108589202;
    msg.duration = 16761U;
    msg.speed = 0.13703757184797172;
    msg.speed_units = 73U;
    msg.radius = 0.5139916299845494;
    msg.direction = 49U;
    msg.custom.assign("VBPQOETVNSRRWRKUDRBKHYPVZDOMBBSAJGUOCHGWWXNLLCVZIUNPQDZRSS");

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
    msg.setTimeStamp(0.7250831701769475);
    msg.setSource(32347U);
    msg.setSourceEntity(160U);
    msg.setDestination(4254U);
    msg.setDestinationEntity(191U);
    msg.timeout = 39573U;
    msg.lat = 0.47629969994389887;
    msg.lon = 0.6077146544059798;
    msg.z = 0.4163353004015319;
    msg.z_units = 104U;
    msg.pitch = 0.6785483006836044;
    msg.amplitude = 0.5724829590299403;
    msg.duration = 6090U;
    msg.speed = 0.5523606788722146;
    msg.speed_units = 67U;
    msg.radius = 0.02304416784030683;
    msg.direction = 56U;
    msg.custom.assign("YKTKRKBLQFBJUKQURJVFGZVGXLZCXPOOFWDACMBEIRMIWPDCSLGIIKISZFCLTHHNDIRGLSYATHGYMLBOEWBOCIPKGALXQWTWPLMHDVZVUFTQFVTMVBSUFEONURHADIMANJQAOHFPIDRQSNQBNXYBBHTPATEJAJYBPZOZEJUDAJXJOFCWTGGOQERKVNKUZZZTLCSGVCPMYMXIFVSQNSPYWONXJWLNMDRHSUUWHKVWD");

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
    msg.setTimeStamp(0.6950509685594171);
    msg.setSource(43360U);
    msg.setSourceEntity(242U);
    msg.setDestination(42971U);
    msg.setDestinationEntity(148U);
    msg.timeout = 39146U;
    msg.lat = 0.8294901965242792;
    msg.lon = 0.24292973631542758;
    msg.z = 0.5886807042696443;
    msg.z_units = 63U;
    msg.pitch = 0.17855131485685083;
    msg.amplitude = 0.6906242964202679;
    msg.duration = 18429U;
    msg.speed = 0.7941917151869017;
    msg.speed_units = 115U;
    msg.radius = 0.9889596503205776;
    msg.direction = 1U;
    msg.custom.assign("MCFBUJSFGTGGDIBJVJLYUSZVCECRXOCSGUHHEIRWOBCVOLZNPLGOYPKMVIAVJFVAEYWLVUZLHMTNNODNXEDYDVUSYMMQSEZQWRGUQJFENBKRIPLUWWIWPQKTTCRFPHXNHVTPERMNFLYFDJPKLXOHXSFYAUDQBVAKZDKXGWTZKGZPHRUTZNCSBTQOHHAIXOWFSAFPZMYKYKICIDITAXLRJWXDSTBJHOMLBUQJKEMJAXBM");

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
    msg.setTimeStamp(0.012662172338661293);
    msg.setSource(21967U);
    msg.setSourceEntity(211U);
    msg.setDestination(12114U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("NPTHHMZUZICGQMOWXVSOVJKTZVVENIKWGMLUGNUESNDTQPMCCF");
    msg.reference_frame = 139U;
    msg.custom.assign("LISLOUMXBGNRCHCYOTAMIHDKZQSCAJODHOXIVKRXFQVOUWHXKLSWRPMIPLAUPXFJMALMSQAFELQUKEFZSGEZKYDACMPHWYKVFIPGBOWWMCJUQFWAGAYCBJHVPSDROLBREVNVBXVFMZTKWZJPDCVDVQNGXIUYTOEQYEISZRRDSJXMIKGQFLPHKZEXIZYETNQWJLTRDSMKTYVRUYSNDJLBENRHDGH");

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
    msg.setTimeStamp(0.5031035817116282);
    msg.setSource(45735U);
    msg.setSourceEntity(99U);
    msg.setDestination(49389U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("BGMKLKPNYPNASDQMTJXCBTLGFGPRUWQOQRDWJUMILMLTFIKKZFQXXCATEPURQVYITVAPYAJCWHQFHRHMOZOKWUNCDULOLOGEDCY");
    msg.reference_frame = 150U;
    msg.custom.assign("HRDFUDFXKWDKZPZTNYGZHCIOKBAALJVMXALEAJIRVHCTLBAVCYVXNYFXEBCGJSSTZVPYBTXGRPKEBGBI");

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
    msg.setTimeStamp(0.5759260457481217);
    msg.setSource(528U);
    msg.setSourceEntity(92U);
    msg.setDestination(65431U);
    msg.setDestinationEntity(93U);
    msg.formation_name.assign("PXCQZWMVIPYUBGVRDNRCYFOQOHHCILKAWTXYZJLXHJDNGTGGAYKBJSQIQEDCZKIXEOJPSEMCDVHKLSPFFYBEZWOUVAUYYAXOWEGBHIWZKLJABPRDMUCJMFBVLAXFJRMCFNXUEGZPQQUOGSMURNNSMHTQUTWWSJA");
    msg.reference_frame = 200U;
    msg.custom.assign("WVTHHGQZRLPSYFFAFNXROQHURXTJKIGEXRPDMUGOCMCYQIYWZLLIIGRGSASNGGOUILDDQNKOPVFKPMUECZVQMENKHCWOYDBJNMPKRDFFYNZWBTEMXICWBPTLPVDYJEAUOZOSYVBFUQWXGZT");

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
    msg.setTimeStamp(0.021823577274771355);
    msg.setSource(11750U);
    msg.setSourceEntity(157U);
    msg.setDestination(13822U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("ZYMKSHHBCNZZVAWDWZJGPVVTIWOGAUMUEGSGNCNCRDGJWSQARKTXBIBXQNZPVXVPKLYPHKYBKRQKALLDETWJDTAVRH");
    msg.formation_name.assign("PZRCYGWVECBRFLPHVNEUDAPUJJMQAXDBILXRQDKHCTTJSLWMEUKWPHABZTHVHMGLBYGPVWUMRSVNIGSRQZKAMVDRIWZXENCCPOQJNIIQVVJBYUESOBLKEJVTIRDIFOCXTAQQVMUBYSFHYRUWTXHLNZOLCPNKQSMITQILMJXHZKGEXESFBUUYOAFSOCNKCNJFTOKFKOZBZRBHFYAGDRGYKWQNTNEWFXDOPMACIWXAEMHSZDLG");
    msg.plan_id.assign("IWOABVUNAXAAVMGTYJBTUVTRILBHIEGKDVZKFAZNXYJOXFHKALQJQEOXFTVOAVRLSCNSKPQZSWZCCHFJHXQZMJIRQHIBTPERPILKUGUJLDFGXVLHBFDNISPPHMYZNZVECJDLGOWYAGVFIYGATZSQWRFOHNRDRCEYMJCLBDXTWQKCEPWYSBUPOYND");
    msg.description.assign("OYQUAMSDZPNOEZIVFUIFHGAKMYCOKQHRVQHBISTVECFPXRRDXDNDWCNWSGINZQQGNMJKEYBZAUTJZRLLVVGYKBRBNBXSTHEDGZFCAOLMAWGWXDXOVGIMPPQWPRZWQBUNCFJAESSAVFLTHJMJVF");
    msg.leader_speed = 0.03263997263622842;
    msg.leader_bank_lim = 0.8694461518540233;
    msg.pos_sim_err_lim = 0.47293680338342226;
    msg.pos_sim_err_wrn = 0.4251091327151708;
    msg.pos_sim_err_timeout = 51022U;
    msg.converg_max = 0.559418854483685;
    msg.converg_timeout = 35133U;
    msg.comms_timeout = 33949U;
    msg.turb_lim = 0.23641104976886773;
    msg.custom.assign("INGQAMDUHTAZZLAMUYIROQUIPXEYPECLMLB");

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
    msg.setTimeStamp(0.6669634542560695);
    msg.setSource(33189U);
    msg.setSourceEntity(207U);
    msg.setDestination(3725U);
    msg.setDestinationEntity(243U);
    msg.group_name.assign("GYNVWWPVFOXAUKEPQYRZJTXWSDAPCPEWZSKZLMMECZFZDMZMEILBNYAPJCTTSKUUVFEOGXAYDLBCUSXFDYBFOONNKHWSBXJFTJKDRQIHQQQRYGZQHCSHNPNRDGBRFHUTNVMKWPDBFULMBIROJIMZOSWMARKIPFGCVAOHPUIKGEGHRWUBYAABBNLPIDOMLTMYQQJ");
    msg.formation_name.assign("QMMRDJGCSIXURXEHEJZTPKCDJQMHRWMYKOLWBBJLSGXMDWQVDYMSLSPHTUOBAVLNHJUINLRUWLQVQCGUQGZNVYNHKAZOTOABGSICEBMNSRWECEZH");
    msg.plan_id.assign("GTWWFYPZFXWCFNKANOZKPXJBUKKGHTSAAWVOPOCUQTJEMYYCVZBAACEQGTGIKCYTPMLPIQUDBFUELXPDJHLYITSJBJLWBUWTRHMQSYFRAHKLNZDQISXXLDAFHGGDET");
    msg.description.assign("WOFLURMERNEJPFQSTTLUBZOKODFOUGTEVFDOQSYDUBWXBCFRCXVLFDZDOININAHUKNW");
    msg.leader_speed = 0.38366607445597123;
    msg.leader_bank_lim = 0.9661967174437468;
    msg.pos_sim_err_lim = 0.4728966242759668;
    msg.pos_sim_err_wrn = 0.9504825610694246;
    msg.pos_sim_err_timeout = 14329U;
    msg.converg_max = 0.007261551426740009;
    msg.converg_timeout = 13582U;
    msg.comms_timeout = 24695U;
    msg.turb_lim = 0.40882418579467206;
    msg.custom.assign("RYAPATLMCCOQMSZOTDEMQNAIQWNFLDNTKGAURJYNGJSKFPOIWDNLHSPQNSIZUCAEJKZXNDETRLEGICMSWUIOWNYMSJCQJTZCTECKZVVJPMFYBLSYBTHVQKAVBFOHWAEZLKGQIKDBWBUPBHBCUEHMVWXOLCSERRTBAGJWOKXYFDSV");

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
    msg.setTimeStamp(0.9808173086263628);
    msg.setSource(37120U);
    msg.setSourceEntity(102U);
    msg.setDestination(5447U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("AODGQZIMSBUXYRDERUIW");
    msg.formation_name.assign("QVPVPUCJIFMNUBKRAZSIUNEZRALDFMZXCCZEKUFLUYJWFKBBFECMPSEATPDAOVGQTWNOGWELXXQDQQHAJMQAITDYCBVFVGJJXVOBVKGWDHYIFLXSSNLQ");
    msg.plan_id.assign("XALSWZYMKKQMHKNWNIXMTJENPEPZJJBLLCGSYJGADYQYDXOXHLUNSOEVRHDTCGKFQXDWRASGTPAOBTLEPIIVUZNRWDGRFCAXBHUWLFPHQUMSAMLJVATHFJWBUIWDKVZXDWPHMEVTDONFZSBVTNQGCGDZZERHFUAPZPFOJJHTNYKYFOQUKEUSCUBVCQHPFASITPJNWLOUMTRRNEVJYXIFCXRRLOQEIISSYMQRGBIDCEBKYAYMVGWZCMOBIX");
    msg.description.assign("JZHRKTQHDBHWLYFKVWDVTUAKPGYEXTVRBXZRCMVEAFUHVTLDSPQQIL");
    msg.leader_speed = 0.828606835893347;
    msg.leader_bank_lim = 0.09771151170210435;
    msg.pos_sim_err_lim = 0.12283172973487844;
    msg.pos_sim_err_wrn = 0.05033516081306122;
    msg.pos_sim_err_timeout = 5629U;
    msg.converg_max = 0.3519256842141367;
    msg.converg_timeout = 21008U;
    msg.comms_timeout = 33160U;
    msg.turb_lim = 0.6044476022204784;
    msg.custom.assign("HJWIODROZUNAIEKVZSIZNCLHMDTLBMGWEOMMVLXXUCEXGMCSOGYBIQWHAAKD");

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
    msg.setTimeStamp(0.6020456570701537);
    msg.setSource(36748U);
    msg.setSourceEntity(156U);
    msg.setDestination(11928U);
    msg.setDestinationEntity(16U);
    msg.control_src = 39839U;
    msg.control_ent = 132U;
    msg.timeout = 0.6034064418508797;
    msg.loiter_radius = 0.2008581564201356;
    msg.altitude_interval = 0.8217739347111593;

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
    msg.setTimeStamp(0.3711347539332577);
    msg.setSource(11189U);
    msg.setSourceEntity(235U);
    msg.setDestination(29876U);
    msg.setDestinationEntity(199U);
    msg.control_src = 18322U;
    msg.control_ent = 21U;
    msg.timeout = 0.010916905777604735;
    msg.loiter_radius = 0.5099688611400086;
    msg.altitude_interval = 0.7428704797787707;

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
    msg.setTimeStamp(0.8139762718351473);
    msg.setSource(44958U);
    msg.setSourceEntity(57U);
    msg.setDestination(21510U);
    msg.setDestinationEntity(31U);
    msg.control_src = 56716U;
    msg.control_ent = 113U;
    msg.timeout = 0.009980217493270938;
    msg.loiter_radius = 0.26043206847919165;
    msg.altitude_interval = 0.40378661112675795;

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
    msg.setTimeStamp(0.13301059356645195);
    msg.setSource(790U);
    msg.setSourceEntity(166U);
    msg.setDestination(62446U);
    msg.setDestinationEntity(173U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07849617962021893;
    tmp_msg_0.speed_units = 3U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5597302767818778;
    tmp_msg_1.z_units = 203U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8628886492414541;
    msg.lon = 0.862295850126752;
    msg.radius = 0.35017035189758594;

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
    msg.setTimeStamp(0.12905912617102377);
    msg.setSource(19317U);
    msg.setSourceEntity(158U);
    msg.setDestination(29357U);
    msg.setDestinationEntity(241U);
    msg.flags = 239U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12489135013979391;
    tmp_msg_0.speed_units = 76U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6147615382042078;
    tmp_msg_1.z_units = 0U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5834293450401886;
    msg.lon = 0.055892720947225305;
    msg.radius = 0.16479173011948145;

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
    msg.setTimeStamp(0.8964808168616165);
    msg.setSource(7117U);
    msg.setSourceEntity(11U);
    msg.setDestination(28343U);
    msg.setDestinationEntity(180U);
    msg.flags = 88U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9287836079709567;
    tmp_msg_0.speed_units = 15U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9844501490942434;
    tmp_msg_1.z_units = 22U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7000218727519606;
    msg.lon = 0.21734801425850792;
    msg.radius = 0.11787356232567248;

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
    msg.setTimeStamp(0.10437398796716824);
    msg.setSource(45187U);
    msg.setSourceEntity(127U);
    msg.setDestination(63174U);
    msg.setDestinationEntity(189U);
    msg.control_src = 26643U;
    msg.control_ent = 103U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 140U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7852791667258885;
    tmp_tmp_msg_0_0.speed_units = 50U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.15198823458635347;
    tmp_tmp_msg_0_1.z_units = 169U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5459913874924013;
    tmp_msg_0.lon = 0.5060614053070314;
    tmp_msg_0.radius = 0.5932630101587327;
    msg.reference.set(tmp_msg_0);
    msg.state = 112U;
    msg.proximity = 253U;

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
    msg.setTimeStamp(0.6758799373766917);
    msg.setSource(21907U);
    msg.setSourceEntity(235U);
    msg.setDestination(13403U);
    msg.setDestinationEntity(154U);
    msg.control_src = 59345U;
    msg.control_ent = 195U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 59U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9567805331126187;
    tmp_tmp_msg_0_0.speed_units = 166U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.17133722446630362;
    tmp_tmp_msg_0_1.z_units = 250U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24658776116179848;
    tmp_msg_0.lon = 0.8627155601150359;
    tmp_msg_0.radius = 0.261600723049738;
    msg.reference.set(tmp_msg_0);
    msg.state = 144U;
    msg.proximity = 151U;

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
    msg.setTimeStamp(0.9453723336552341);
    msg.setSource(10003U);
    msg.setSourceEntity(188U);
    msg.setDestination(57758U);
    msg.setDestinationEntity(31U);
    msg.control_src = 11975U;
    msg.control_ent = 77U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 211U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.11001549204446126;
    tmp_tmp_msg_0_0.speed_units = 83U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7096818434161255;
    tmp_tmp_msg_0_1.z_units = 186U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6659206307911856;
    tmp_msg_0.lon = 0.3497425373062084;
    tmp_msg_0.radius = 0.5956130812474821;
    msg.reference.set(tmp_msg_0);
    msg.state = 183U;
    msg.proximity = 185U;

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
    msg.setTimeStamp(0.8167798907254006);
    msg.setSource(48380U);
    msg.setSourceEntity(213U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(231U);
    msg.ax_cmd = 0.03156365175908693;
    msg.ay_cmd = 0.10499672543485905;
    msg.az_cmd = 0.17314563107367686;
    msg.ax_des = 0.21143217713843043;
    msg.ay_des = 0.44769421394820785;
    msg.az_des = 0.2774326442917707;
    msg.virt_err_x = 0.49791135377920115;
    msg.virt_err_y = 0.6917966979531224;
    msg.virt_err_z = 0.2620183014707428;
    msg.surf_fdbk_x = 0.2777352714014676;
    msg.surf_fdbk_y = 0.9299240551246971;
    msg.surf_fdbk_z = 0.17321684163502638;
    msg.surf_unkn_x = 0.30320220033234946;
    msg.surf_unkn_y = 0.8403315462650679;
    msg.surf_unkn_z = 0.7939252836495055;
    msg.ss_x = 0.48425169130420564;
    msg.ss_y = 0.23814718674705426;
    msg.ss_z = 0.8066879071845814;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ARAVOYAAHIMKHDOFQNUFRMNWSSNBUUGCPIZINHHPVXTQCZDMFOPQLTJUFTXEDKTWHAFUZLCFDMJTLIOQNCXTJDLMCGRECJWXELHSIXRWABZVE");
    tmp_msg_0.dist = 0.6357176910115101;
    tmp_msg_0.err = 0.6859505446784316;
    tmp_msg_0.ctrl_imp = 0.3373308270278149;
    tmp_msg_0.rel_dir_x = 0.019358414452451123;
    tmp_msg_0.rel_dir_y = 0.23375955520759628;
    tmp_msg_0.rel_dir_z = 0.41731755821728334;
    tmp_msg_0.err_x = 0.2814863735986082;
    tmp_msg_0.err_y = 0.07140714662030445;
    tmp_msg_0.err_z = 0.5895380813327884;
    tmp_msg_0.rf_err_x = 0.47808370780478926;
    tmp_msg_0.rf_err_y = 0.6415586982228212;
    tmp_msg_0.rf_err_z = 0.18548771592268853;
    tmp_msg_0.rf_err_vx = 0.109309325734404;
    tmp_msg_0.rf_err_vy = 0.8585494821686266;
    tmp_msg_0.rf_err_vz = 0.13115130417707066;
    tmp_msg_0.ss_x = 0.09446998013282248;
    tmp_msg_0.ss_y = 0.13690977711754826;
    tmp_msg_0.ss_z = 0.7772594431053473;
    tmp_msg_0.virt_err_x = 0.7014927152460605;
    tmp_msg_0.virt_err_y = 0.2569022875109108;
    tmp_msg_0.virt_err_z = 0.06994614225749063;
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
    msg.setTimeStamp(0.2141835234791747);
    msg.setSource(8864U);
    msg.setSourceEntity(77U);
    msg.setDestination(64059U);
    msg.setDestinationEntity(73U);
    msg.ax_cmd = 0.569168972571879;
    msg.ay_cmd = 0.21245262429878542;
    msg.az_cmd = 0.4103344517422657;
    msg.ax_des = 0.19501767292960692;
    msg.ay_des = 0.47264274280787855;
    msg.az_des = 0.48535704365970367;
    msg.virt_err_x = 0.7033112628374226;
    msg.virt_err_y = 0.6668954540062896;
    msg.virt_err_z = 0.4681206968331335;
    msg.surf_fdbk_x = 0.5802066559648431;
    msg.surf_fdbk_y = 0.7457608452462194;
    msg.surf_fdbk_z = 0.4914689662033471;
    msg.surf_unkn_x = 0.90043101695242;
    msg.surf_unkn_y = 0.3868178420448163;
    msg.surf_unkn_z = 0.0746338701977346;
    msg.ss_x = 0.6092445009662196;
    msg.ss_y = 0.610636149783632;
    msg.ss_z = 0.03827345400595317;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CEZDPCUOKUXMXYJQGQWYFVFFXPNVKQJVODKVULABCUKBHREZJAIVTWCSKDSWIPFGDAXSZSANEYXJHOBWNFGDIMHWMCZHTTXWUFUIEOBQMRNMWHXISOJLNWZZGLLSSINGIRUDWYACBPVDZJAOQDCTGPSTVXGEDUXVREPQUNIQKSMFNLYTRKEUCENTAPQPVNOFBEHAYFLDOIWAQLRKYPPZOXLHCLJSIJHZEKJRCRBRVYLJQHBM");
    tmp_msg_0.dist = 0.7781879562538587;
    tmp_msg_0.err = 0.9490552158367502;
    tmp_msg_0.ctrl_imp = 0.24105454244113955;
    tmp_msg_0.rel_dir_x = 0.5663201201483766;
    tmp_msg_0.rel_dir_y = 0.6744124056778753;
    tmp_msg_0.rel_dir_z = 0.7560585263011995;
    tmp_msg_0.err_x = 0.9092737509904344;
    tmp_msg_0.err_y = 0.03232721742779876;
    tmp_msg_0.err_z = 0.41626758523097596;
    tmp_msg_0.rf_err_x = 0.26715362214687266;
    tmp_msg_0.rf_err_y = 0.1493360880104252;
    tmp_msg_0.rf_err_z = 0.4314562780474658;
    tmp_msg_0.rf_err_vx = 0.2420458650688747;
    tmp_msg_0.rf_err_vy = 0.25893227708898203;
    tmp_msg_0.rf_err_vz = 0.6733748338406456;
    tmp_msg_0.ss_x = 0.0772036951257512;
    tmp_msg_0.ss_y = 0.2325130766988217;
    tmp_msg_0.ss_z = 0.39163185126603717;
    tmp_msg_0.virt_err_x = 0.9122514407658272;
    tmp_msg_0.virt_err_y = 0.672001711584714;
    tmp_msg_0.virt_err_z = 0.9387179062920251;
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
    msg.setTimeStamp(0.5807364745830146);
    msg.setSource(13727U);
    msg.setSourceEntity(91U);
    msg.setDestination(57996U);
    msg.setDestinationEntity(210U);
    msg.ax_cmd = 0.9102642229091388;
    msg.ay_cmd = 0.61168147030406;
    msg.az_cmd = 0.819701600875774;
    msg.ax_des = 0.8764766422029197;
    msg.ay_des = 0.5314959517607406;
    msg.az_des = 0.2458362428483204;
    msg.virt_err_x = 0.8779050581184943;
    msg.virt_err_y = 0.07482718491825635;
    msg.virt_err_z = 0.6742417394655466;
    msg.surf_fdbk_x = 0.7867528853301682;
    msg.surf_fdbk_y = 0.6545958555687483;
    msg.surf_fdbk_z = 0.8962375179615583;
    msg.surf_unkn_x = 0.6839020050036666;
    msg.surf_unkn_y = 0.47175000033418435;
    msg.surf_unkn_z = 0.8097340549134486;
    msg.ss_x = 0.9060561104263667;
    msg.ss_y = 0.7411125901854034;
    msg.ss_z = 0.3907023889450181;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GVSNBVQAARWRNTTRYOBGWDZTVVSDLCZBOIXVDENT");
    tmp_msg_0.dist = 0.13450448770142154;
    tmp_msg_0.err = 0.8003598615813488;
    tmp_msg_0.ctrl_imp = 0.171574535875483;
    tmp_msg_0.rel_dir_x = 0.27131846340423926;
    tmp_msg_0.rel_dir_y = 0.6802666505629174;
    tmp_msg_0.rel_dir_z = 0.11423474557533086;
    tmp_msg_0.err_x = 0.7771788768912449;
    tmp_msg_0.err_y = 0.8070121750670913;
    tmp_msg_0.err_z = 0.8157627668024308;
    tmp_msg_0.rf_err_x = 0.48667759419309453;
    tmp_msg_0.rf_err_y = 0.09621230485413657;
    tmp_msg_0.rf_err_z = 0.07592409987361337;
    tmp_msg_0.rf_err_vx = 0.12370070657404986;
    tmp_msg_0.rf_err_vy = 0.5255141706455457;
    tmp_msg_0.rf_err_vz = 0.5704971702709022;
    tmp_msg_0.ss_x = 0.20993340930468785;
    tmp_msg_0.ss_y = 0.3738667149506758;
    tmp_msg_0.ss_z = 0.10617371544121279;
    tmp_msg_0.virt_err_x = 0.129889097101619;
    tmp_msg_0.virt_err_y = 0.6309952697998467;
    tmp_msg_0.virt_err_z = 0.09116144755668043;
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
    msg.setTimeStamp(0.5816030855827828);
    msg.setSource(47463U);
    msg.setSourceEntity(47U);
    msg.setDestination(4569U);
    msg.setDestinationEntity(99U);
    msg.s_id.assign("RPKVANZTXVGUOGXODYOTRMCAGZJSMKEEOXHTSQNBYFCFQOIKHWTYAIMMJQMB");
    msg.dist = 0.17958356958840282;
    msg.err = 0.927460256693805;
    msg.ctrl_imp = 0.6076071712891505;
    msg.rel_dir_x = 0.6516397679533681;
    msg.rel_dir_y = 0.8063911659249967;
    msg.rel_dir_z = 0.29326789047801105;
    msg.err_x = 0.7311733408926355;
    msg.err_y = 0.3513419582375811;
    msg.err_z = 0.225966877242197;
    msg.rf_err_x = 0.020480448153490594;
    msg.rf_err_y = 0.3676629700509314;
    msg.rf_err_z = 0.5750240903046325;
    msg.rf_err_vx = 0.740708749708765;
    msg.rf_err_vy = 0.8199994878033063;
    msg.rf_err_vz = 0.5835553848422618;
    msg.ss_x = 0.5788282305202528;
    msg.ss_y = 0.6662093676787696;
    msg.ss_z = 0.5996979300067328;
    msg.virt_err_x = 0.0235439713446558;
    msg.virt_err_y = 0.07432306609943162;
    msg.virt_err_z = 0.14201633104932743;

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
    msg.setTimeStamp(0.17702113007740028);
    msg.setSource(2152U);
    msg.setSourceEntity(228U);
    msg.setDestination(40806U);
    msg.setDestinationEntity(85U);
    msg.s_id.assign("INZCQQTVHKMTWVFQGWPPOBNQGPNXLCIMUEQNCYSSPHKZFSXACFSQOLXYFEBUGCZBONNHFSKRYAMFDHYCLRJUWLTOAQFGXAOMSTWDXGAMWZKMVLRVZELDZPWEPSLTAYRKDETUOJX");
    msg.dist = 0.15623807125002265;
    msg.err = 0.9860493577892242;
    msg.ctrl_imp = 0.02720082565792148;
    msg.rel_dir_x = 0.41628764920090455;
    msg.rel_dir_y = 0.0790438407531121;
    msg.rel_dir_z = 0.7123185840075172;
    msg.err_x = 0.6011538904839894;
    msg.err_y = 0.03666659008086348;
    msg.err_z = 0.7064223218930856;
    msg.rf_err_x = 0.2542112377209411;
    msg.rf_err_y = 0.27479661530259947;
    msg.rf_err_z = 0.3577381481230092;
    msg.rf_err_vx = 0.9610910791829539;
    msg.rf_err_vy = 0.610613531059477;
    msg.rf_err_vz = 0.09562272177698417;
    msg.ss_x = 0.5093606397099478;
    msg.ss_y = 0.6752812372018888;
    msg.ss_z = 0.13104228210351976;
    msg.virt_err_x = 0.27661330000748874;
    msg.virt_err_y = 0.15347294038069126;
    msg.virt_err_z = 0.7105678361163045;

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
    msg.setTimeStamp(0.44854924072038305);
    msg.setSource(46377U);
    msg.setSourceEntity(11U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("KBLPGIURQJXMVZIXPONZYJOIZRYVRJDAPMIFWJGUBSKWWADCWETLSCEEXGDMCNHEZVIUMBVUTTPQJSRUYRQVHTODNSLGTBIMTKCBFEVPOWPKFHSVYALXAFBQZENFQORMXLSSMQNGLAOHVUSIGFZHEC");
    msg.dist = 0.5155650117490935;
    msg.err = 0.7217521658927699;
    msg.ctrl_imp = 0.19263230242654306;
    msg.rel_dir_x = 0.500008005719396;
    msg.rel_dir_y = 0.9983675486826545;
    msg.rel_dir_z = 0.3860375592893788;
    msg.err_x = 0.5114527045192752;
    msg.err_y = 0.9896598299596716;
    msg.err_z = 0.1354198026731489;
    msg.rf_err_x = 0.11277596045675309;
    msg.rf_err_y = 0.09345811542928928;
    msg.rf_err_z = 0.7888820612521061;
    msg.rf_err_vx = 0.1733965817942683;
    msg.rf_err_vy = 0.11738313890337149;
    msg.rf_err_vz = 0.1430765249070466;
    msg.ss_x = 0.01683595923219816;
    msg.ss_y = 0.10778061864655752;
    msg.ss_z = 0.8109772615951196;
    msg.virt_err_x = 0.16782613549739245;
    msg.virt_err_y = 0.538105489787668;
    msg.virt_err_z = 0.860395296983698;

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
    msg.setTimeStamp(0.8551942708191884);
    msg.setSource(40817U);
    msg.setSourceEntity(195U);
    msg.setDestination(13382U);
    msg.setDestinationEntity(202U);
    msg.timeout = 13968U;
    msg.rpm = 0.2780269425785985;
    msg.direction = 79U;
    msg.custom.assign("VRCWBNMDXZSEGQFTZFW");

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
    msg.setTimeStamp(0.8781523449923209);
    msg.setSource(45874U);
    msg.setSourceEntity(206U);
    msg.setDestination(39318U);
    msg.setDestinationEntity(192U);
    msg.timeout = 22873U;
    msg.rpm = 0.9877610776679704;
    msg.direction = 110U;
    msg.custom.assign("UHITBMEOZZPNVWUXGNIGSRCOBNNHIEQHMVRUTHFZLFBPGNLAYUOPSWDBTLGHRSVTOBQJUSLKYLERSXHQVRJVYCNXWBGMKKEDTYLZXDSJWEXOFOTUDELKPQMQAGOZBJLJAVWCUUDKVKGAPOIHONAFTSFYNRDFJEIMPPXLSYTACRXCHGCMCWZQGSYDRPSJRVKIKHFEZMBVIYCDYBMKATNQFHIJAAYVUWL");

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
    msg.setTimeStamp(0.47824373391464237);
    msg.setSource(50144U);
    msg.setSourceEntity(67U);
    msg.setDestination(64471U);
    msg.setDestinationEntity(128U);
    msg.timeout = 34831U;
    msg.rpm = 0.17968874704477766;
    msg.direction = 60U;
    msg.custom.assign("WPLDXZNGTXVNYZHZKTAWQOHTVRIARBPOFZZWSQNGYPNGHRIPKLGHLOSXKPVWDJRVSQZJGYZOOFECNBEJKAJAJZMYMNWORIBVWBFLNPKYKXJHWLYQA");

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
    msg.setTimeStamp(0.29491085743212564);
    msg.setSource(2911U);
    msg.setSourceEntity(42U);
    msg.setDestination(47805U);
    msg.setDestinationEntity(48U);
    msg.formation_name.assign("EEFKTHFTAHHQWSEWKIVJHVZBOQNGBXZH");
    msg.type = 155U;
    msg.op = 185U;
    msg.group_name.assign("BCVKUITIJWLBHEUQBSDIYBJMVZFDOFTKCQMNQQTEYYSXGAUGFBKSOUPGODPGTQGGXRPXEJHWCZFRMCYRCQBDZRVHMZOFLNQCVWZYYVWLIBJYVAXHPQDMJWTAHSHDHJGZKFERXLUKYWDPSZXESKWDEWJFKAMCGBEXDOZZYCGBRVVNNIHATNTJ");
    msg.plan_id.assign("LMBHKHGRSTOUMPWMWXSGWFPAVYIVNDMSIURRQIMVCEDATODNKHBFTUJFCVOWQWHLLTNIQTXKNTAUGJOZNACULDDXXQQGVPPBDZAYTZLUCQAFRXEOSCYXRMBNTNYWAHWUTUPGEGZZOMEGGPLBDFTPESOINLJJSZBYJXAFQEBSHRFVYDSCEPKJFIEFRLBKKVXOJRKJH");
    msg.description.assign("OQTHGCUMYONLOF");
    msg.reference_frame = 212U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9515U;
    tmp_msg_0.off_x = 0.3604688358099223;
    tmp_msg_0.off_y = 0.2707103936401578;
    tmp_msg_0.off_z = 0.6444142935203749;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.1757542337240261;
    msg.leader_speed_min = 0.7258545098875034;
    msg.leader_speed_max = 0.07729467555091185;
    msg.leader_alt_min = 0.5171664590488098;
    msg.leader_alt_max = 0.2290876564861689;
    msg.pos_sim_err_lim = 0.9411358916146972;
    msg.pos_sim_err_wrn = 0.92981461799868;
    msg.pos_sim_err_timeout = 58760U;
    msg.converg_max = 0.810945639194662;
    msg.converg_timeout = 34051U;
    msg.comms_timeout = 51542U;
    msg.turb_lim = 0.41692221172874544;
    msg.custom.assign("NWGPQOUWSBXVGTNIEWLWPEIJWLUSZNZILDYFERFVKYJOFKZFRZIHPJUXAXLBFJFZCNWMVOCPHMSETGMCBAJFHMGXWXSUOQQSUAYPYPBCJAULVCDZNROGQYLVJDGMGXKLEFXVDBJTLJEQUQKRTEMSXRTKCCFXFKRWKAWAESHOBVDLHTDMNIPDHPNYDKIYKTBAGLYSOZHJUNHCEVIVBIRZATTOCQPHOQNVMMMBIZYAOUGQUDAHWBTZR");

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
    msg.setTimeStamp(0.9493846477730273);
    msg.setSource(9629U);
    msg.setSourceEntity(41U);
    msg.setDestination(2332U);
    msg.setDestinationEntity(227U);
    msg.formation_name.assign("SHLIYRIMCKNXCKG");
    msg.type = 37U;
    msg.op = 180U;
    msg.group_name.assign("KGEGMHBSAPQJAHYFFJWOFFNUJAWFDLRNRTAIT");
    msg.plan_id.assign("AZKRPXEVMQHAZPUBCVFVQLSJE");
    msg.description.assign("UQFYWBXMIAMWZMCBFPCFNPDXXGZJOANSYSTVJXYJEQLSMBMZKAJOHDHPEKZSOEUUOAQRRPFORFYBOEVLPPQAUNQUYNVIWGQJGZRODECLCSKVUWIZFWMNIKGVBTESJSJXDI");
    msg.reference_frame = 184U;
    msg.leader_bank_lim = 0.76810489868256;
    msg.leader_speed_min = 0.7199123349351196;
    msg.leader_speed_max = 0.44268481312847663;
    msg.leader_alt_min = 0.7608479366314354;
    msg.leader_alt_max = 0.5802974316293329;
    msg.pos_sim_err_lim = 0.07613008824875278;
    msg.pos_sim_err_wrn = 0.016050631697008155;
    msg.pos_sim_err_timeout = 23800U;
    msg.converg_max = 0.804264206037996;
    msg.converg_timeout = 2727U;
    msg.comms_timeout = 27406U;
    msg.turb_lim = 0.9416391281573298;
    msg.custom.assign("NSFVWVNLUOPUUSHGARXPKVKAXOSQWDBFTIDPOMBOQTXJMJEHGETGRSPAQFYYCLOQSHULYMLVQDEZOEDOOKTBFBXTJFBTYHNICUM");

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
    msg.setTimeStamp(0.9350329398175855);
    msg.setSource(22930U);
    msg.setSourceEntity(227U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(216U);
    msg.formation_name.assign("SHKFNVFIYZOROVSZHFJQWZ");
    msg.type = 79U;
    msg.op = 75U;
    msg.group_name.assign("JOOCFKCUMWIKYWFSTNDGOHXVTGJLEZJDCPYX");
    msg.plan_id.assign("XHADOFLNEGPMHEREXBJLXPNCXSAHIGUZPMCMYNZUMSWITIWNFCJDXVJFKYEQSBGVWCURSZPNKQAROPEZYEATODOMJZVSLHHBNJQZIHSWLHKBCDLFWMLVPGFEETMBXNMJVVJUQLCN");
    msg.description.assign("NJODHKOUXDNUQDNKVSJGVQIXV");
    msg.reference_frame = 44U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31844U;
    tmp_msg_0.off_x = 0.5405751584245472;
    tmp_msg_0.off_y = 0.511350596637243;
    tmp_msg_0.off_z = 0.9815512489890528;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.535774555034791;
    msg.leader_speed_min = 0.6599996814105622;
    msg.leader_speed_max = 0.586878993875575;
    msg.leader_alt_min = 0.9025141697584204;
    msg.leader_alt_max = 0.06183835607409116;
    msg.pos_sim_err_lim = 0.7140873552850842;
    msg.pos_sim_err_wrn = 0.07891142319831845;
    msg.pos_sim_err_timeout = 27672U;
    msg.converg_max = 0.6907952198933603;
    msg.converg_timeout = 37694U;
    msg.comms_timeout = 25403U;
    msg.turb_lim = 0.2549719423562684;
    msg.custom.assign("CTWIQMLAUBAMBZMUJCFQXWEOSQZOTSHWWZNYGBJNNCQIXRUERSZEZOXALXNIUBDNRPMIHVTBLKHAPVZJFUNBAQFXYOCDDDYITUOPPYALKXZDSEYWTKJBGQUVVUWSSXHGCPROATKKJPCMQERTJVKCBDGGAWGDLHRMNAJJVPODQPEP");

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
    msg.setTimeStamp(0.2252134617188195);
    msg.setSource(22192U);
    msg.setSourceEntity(51U);
    msg.setDestination(20687U);
    msg.setDestinationEntity(118U);
    msg.timeout = 23922U;
    msg.lat = 0.6880395350215619;
    msg.lon = 0.9608777036368215;
    msg.z = 0.04089698070274195;
    msg.z_units = 251U;
    msg.speed = 0.2821148608040619;
    msg.speed_units = 138U;
    msg.custom.assign("GIERMKGMUUDTOJUQBJXEWACHOXTVPZULJVGJTAONCFFVYFARCISCMYTHRHGVHVYEDVBVIMDCMOZTXUZBSAFDZKLINCBKQIISIQWXYQNKFRORPVSPCXEDBDPERWGOMYIUDUWUEHRGNPSXHXMFCOWMYS");

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
    msg.setTimeStamp(0.8570036009173266);
    msg.setSource(64133U);
    msg.setSourceEntity(238U);
    msg.setDestination(1023U);
    msg.setDestinationEntity(209U);
    msg.timeout = 55646U;
    msg.lat = 0.735384985114133;
    msg.lon = 0.8219963051298868;
    msg.z = 0.3370489565457133;
    msg.z_units = 207U;
    msg.speed = 0.6418338397758232;
    msg.speed_units = 216U;
    msg.custom.assign("UJPXCKQFXCGHPWXVOCZOASEPFPBGSVUIYEDHKNNJGJQBGTRHMGIRXOOVEULXWQZBTK");

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
    msg.setTimeStamp(0.43514403158002146);
    msg.setSource(64544U);
    msg.setSourceEntity(20U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(43U);
    msg.timeout = 25559U;
    msg.lat = 0.4576964647202213;
    msg.lon = 0.3024860981363705;
    msg.z = 0.3166246682515719;
    msg.z_units = 197U;
    msg.speed = 0.292959871729378;
    msg.speed_units = 28U;
    msg.custom.assign("OLXXPMMGNBRCUEWIXSQIAOXLBUDMYHGR");

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
    msg.setTimeStamp(0.543728317772081);
    msg.setSource(27892U);
    msg.setSourceEntity(149U);
    msg.setDestination(47642U);
    msg.setDestinationEntity(20U);
    msg.timeout = 56425U;
    msg.lat = 0.4297531000912985;
    msg.lon = 0.7844472132548602;
    msg.z = 0.9918188186857126;
    msg.z_units = 70U;
    msg.speed = 0.9922438491893734;
    msg.speed_units = 197U;
    msg.custom.assign("OGOBJHROYNUOHUFBXWORZEJPNIQHKVSDOFPGTYDMADJLOBVVBLMLXKJZJQRRSUHLSFRDDLLACNMLMYXVRCRUWCLWRVKXEHYSV");

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
    msg.setTimeStamp(0.6512640609214906);
    msg.setSource(37579U);
    msg.setSourceEntity(119U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(83U);
    msg.timeout = 8192U;
    msg.lat = 0.5551067899057327;
    msg.lon = 0.8883994874157565;
    msg.z = 0.18735167412130493;
    msg.z_units = 175U;
    msg.speed = 0.5528546740954766;
    msg.speed_units = 101U;
    msg.custom.assign("LPZIJGFDDKWNELDBXHNCTLAWQAHVXIOJNBQRRIVLGMCEWLXAMLULPSYBJHVSPPKZCBDJNMFDGNPJBJOCOULOZ");

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
    msg.setTimeStamp(0.31960709434515233);
    msg.setSource(23430U);
    msg.setSourceEntity(209U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(245U);
    msg.timeout = 57949U;
    msg.lat = 0.12580600593563473;
    msg.lon = 0.5628106302932642;
    msg.z = 0.44264255075584635;
    msg.z_units = 208U;
    msg.speed = 0.6714150138621608;
    msg.speed_units = 204U;
    msg.custom.assign("ZXPASUGDIZOKYZDDMQJBXQTRPKPWFZJWHOSHIYEJTYWFWEVXGJITQFBHHDSMKWXGLNLXOGFUSPBMQQVPPOIWDKRKNOBAGHRPGKKSJVJPBIWBMXFNNOOELRPNJHRZTXEAIDTOKARCEPCRIBVASMEDFQRXRMQDJJHSYCLOVGWVUETCZCBFLADVEFFLQXEAF");

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
    msg.setTimeStamp(0.42083106528355585);
    msg.setSource(4250U);
    msg.setSourceEntity(252U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(52U);
    msg.arrival_time = 0.4444122212368993;
    msg.lat = 0.44224357157500727;
    msg.lon = 0.049586313463458875;
    msg.z = 0.158941375162181;
    msg.z_units = 96U;
    msg.travel_z = 0.30286773149333857;
    msg.travel_z_units = 73U;
    msg.delayed = 124U;

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
    msg.setTimeStamp(0.5946404578698964);
    msg.setSource(52471U);
    msg.setSourceEntity(217U);
    msg.setDestination(49440U);
    msg.setDestinationEntity(128U);
    msg.arrival_time = 0.5091307582286426;
    msg.lat = 0.5814162964997955;
    msg.lon = 0.023115406356034818;
    msg.z = 0.7061536354442229;
    msg.z_units = 98U;
    msg.travel_z = 0.39465875643058124;
    msg.travel_z_units = 200U;
    msg.delayed = 25U;

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
    msg.setTimeStamp(0.7292603313875745);
    msg.setSource(41771U);
    msg.setSourceEntity(48U);
    msg.setDestination(52683U);
    msg.setDestinationEntity(44U);
    msg.arrival_time = 0.024137981033702682;
    msg.lat = 0.8241334748852692;
    msg.lon = 0.3021943962160497;
    msg.z = 0.4080484858984387;
    msg.z_units = 254U;
    msg.travel_z = 0.13873080358484724;
    msg.travel_z_units = 26U;
    msg.delayed = 80U;

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
    msg.setTimeStamp(0.37379050407183523);
    msg.setSource(32748U);
    msg.setSourceEntity(154U);
    msg.setDestination(23362U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.4466149812375886;
    msg.lon = 0.3512289443129861;
    msg.z = 0.49006418496734105;
    msg.z_units = 130U;
    msg.speed = 0.5118046479521813;
    msg.speed_units = 61U;
    msg.bearing = 0.16206628011257118;
    msg.cross_angle = 0.36516689028533733;
    msg.width = 0.16773346531435618;
    msg.length = 0.9117667756552462;
    msg.coff = 202U;
    msg.angaperture = 0.9281372734073559;
    msg.range = 56954U;
    msg.overlap = 29U;
    msg.flags = 73U;
    msg.custom.assign("ERVLNOLDGSTRJIUYBRNLOUMMDQLOZOOJYHEJJALEHHGJIDRNEJCMQZGHCAHCIGOXBWNLQJREWFFUUNJYXZYCXWIVMNBBKFXGUPPTWLYDXZUVYGOVQXTQMHAILKQWECPKKSENYDRQOJUVPCKKVHEAFTZPNRZCGIDMVXDFFSELVCIMZQJWHMBOSISTINAAZHGFTXDFQQSRBYBLMTIKPARFVSGCOWPRTY");

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
    msg.setTimeStamp(0.12065244603072667);
    msg.setSource(22711U);
    msg.setSourceEntity(79U);
    msg.setDestination(57212U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.7510562233095104;
    msg.lon = 0.180045235291172;
    msg.z = 0.5182198603407157;
    msg.z_units = 115U;
    msg.speed = 0.30148063377029477;
    msg.speed_units = 7U;
    msg.bearing = 0.6821695213373812;
    msg.cross_angle = 0.2863605195802771;
    msg.width = 0.07236872806508587;
    msg.length = 0.9075329628517844;
    msg.coff = 156U;
    msg.angaperture = 0.7954876189057818;
    msg.range = 32083U;
    msg.overlap = 136U;
    msg.flags = 253U;
    msg.custom.assign("VWLKCTYCGFZZFVCWDMLIPVAETPPPBUHMBQWBFGDKFWMSQGNIILHCOUSAYOYINCKYCTOEZEAWHSSIGABGRYUWAHNALHYJBDLXBIATRXRKMVXCBKAXHXSSXKSJTQUMTVUXCWWVVGDYOSULCLRZ");

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
    msg.setTimeStamp(0.9336065855221879);
    msg.setSource(5895U);
    msg.setSourceEntity(73U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.1406649214480291;
    msg.lon = 0.5545913174370575;
    msg.z = 0.15069297660253012;
    msg.z_units = 110U;
    msg.speed = 0.7838411893338334;
    msg.speed_units = 205U;
    msg.bearing = 0.8315843160494922;
    msg.cross_angle = 0.611343331154749;
    msg.width = 0.33357118405411734;
    msg.length = 0.6724122828390708;
    msg.coff = 183U;
    msg.angaperture = 0.12468450334132675;
    msg.range = 54038U;
    msg.overlap = 222U;
    msg.flags = 23U;
    msg.custom.assign("HFXSJPEGPCCRNUHLREXBYAIOTLIHTFAYSPJLGMTLNVDBXO");

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
    msg.setTimeStamp(0.6886176134998011);
    msg.setSource(50819U);
    msg.setSourceEntity(27U);
    msg.setDestination(47283U);
    msg.setDestinationEntity(81U);
    msg.timeout = 27998U;
    msg.lat = 0.03950805464649654;
    msg.lon = 0.16525897122168054;
    msg.z = 0.3044260436993925;
    msg.z_units = 213U;
    msg.speed = 0.7984675784828369;
    msg.speed_units = 85U;
    msg.syringe0 = 163U;
    msg.syringe1 = 201U;
    msg.syringe2 = 249U;
    msg.custom.assign("PMNCQKRIDWEQUAKMIVJXAAUCEVUYXNZTMCULCWUAINZENYQOUUHGQHVLDJAXTICNWYDHRFPGSBIBNFDYPBFXLSVTTBDNQANJPGLLGPAWZSFJBYRXJZOSCMUQILFQXYCGZPDDEKBTOKVHRSYSWWOKDUGILXGPOBYPCEZLWKLVHFEHRWZCMELQMVHRJJAGDRONTIRSSGREJSNBOBQPCQKTFOMSXYUIEOZKVTFWWKOTYDMVZBIXZKGJHMEHHRPMJ");

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
    msg.setTimeStamp(0.7578584280006833);
    msg.setSource(27176U);
    msg.setSourceEntity(69U);
    msg.setDestination(46311U);
    msg.setDestinationEntity(65U);
    msg.timeout = 31150U;
    msg.lat = 0.3857653002523973;
    msg.lon = 0.6211137474278249;
    msg.z = 0.4781444955681553;
    msg.z_units = 5U;
    msg.speed = 0.922424524919073;
    msg.speed_units = 1U;
    msg.syringe0 = 90U;
    msg.syringe1 = 113U;
    msg.syringe2 = 14U;
    msg.custom.assign("IDWTPUOKXSWHXRZZQNREIPJBLDKVZNTZQZSNFLOMGPNQSAAJZTTKWCACEQWUFNOLBQCZOVOCBHFTGWFJOMSWPRRPKMYKJHQISDLDTBRYPBBUKXDE");

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
    msg.setTimeStamp(0.5524806959043485);
    msg.setSource(41588U);
    msg.setSourceEntity(40U);
    msg.setDestination(38238U);
    msg.setDestinationEntity(183U);
    msg.timeout = 62035U;
    msg.lat = 0.21812218920287274;
    msg.lon = 0.7769925724866158;
    msg.z = 0.5323404398747289;
    msg.z_units = 21U;
    msg.speed = 0.18978832108896826;
    msg.speed_units = 34U;
    msg.syringe0 = 250U;
    msg.syringe1 = 227U;
    msg.syringe2 = 180U;
    msg.custom.assign("FOLVOWZLJRUNSBHIFMULOAJYSARHDDZICLEQYZKUEKICYESKTFBWJXYNZIMQAMNMFHMDTHXVBCJOFPEETCSZWNO");

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
    msg.setTimeStamp(0.0933478343657771);
    msg.setSource(23495U);
    msg.setSourceEntity(95U);
    msg.setDestination(25799U);
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
    msg.setTimeStamp(0.21632417371648383);
    msg.setSource(49020U);
    msg.setSourceEntity(138U);
    msg.setDestination(39294U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.35272026198447903);
    msg.setSource(6039U);
    msg.setSourceEntity(171U);
    msg.setDestination(44851U);
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
    msg.setTimeStamp(0.8212344983788237);
    msg.setSource(34652U);
    msg.setSourceEntity(168U);
    msg.setDestination(28082U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.013094357827702408;
    msg.lon = 0.8985727792141047;
    msg.z = 0.40843899187497457;
    msg.z_units = 89U;
    msg.speed = 0.8900351965555218;
    msg.speed_units = 163U;
    msg.takeoff_pitch = 0.1037878414177219;
    msg.custom.assign("EAWNSCOVOUPDIUHADPVGGFJSURGLQTMZZYKMKXEBGJEMMNDHINEXXNCVJMQGUZMFPGRRUPREAYWIQWTTIFFDKUKPDTVECQBMLXNLZJYHMSABAUGSRBKZSOKLCRCVXWZCGECUJWYBTQOLHCIVANOXESBHPQNJFRQVSTYDVYJFAFPTWXWTYQEHEZOYBLZXNPDSGSFHFVCXFMCQBYVT");

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
    msg.setTimeStamp(0.9827131152991019);
    msg.setSource(14428U);
    msg.setSourceEntity(136U);
    msg.setDestination(30216U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.5664177938996279;
    msg.lon = 0.6283847416083568;
    msg.z = 0.8527220860191671;
    msg.z_units = 81U;
    msg.speed = 0.42469559044009286;
    msg.speed_units = 220U;
    msg.takeoff_pitch = 0.4894787611706587;
    msg.custom.assign("BKFVAIOMKWHXWXVWGJLKNEUFUNUGAZFYNDIBSFGRXZHUWQRILTGLPUDRCCJDGUMTBQYXDRZOLEIQBAWTSYPNROJDAXVVUCYLNKCMDKPVCYLSXGTLWZSIPBCDWJTFZJIFQZEZJHHPXSVQOMQYOBPQBGRHQMOLSMOAKNKAKABEFTA");

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
    msg.setTimeStamp(0.3558901791797109);
    msg.setSource(13838U);
    msg.setSourceEntity(17U);
    msg.setDestination(26592U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.18093771144585524;
    msg.lon = 0.3522442016594851;
    msg.z = 0.8455368532028537;
    msg.z_units = 250U;
    msg.speed = 0.1690314120386801;
    msg.speed_units = 146U;
    msg.takeoff_pitch = 0.6957900458108867;
    msg.custom.assign("QKPOIVNGMBYMEDHIBYXOSXJOPAFJPATLCLHELVOIECICXPUPCMUPCFVQOGRLZBRRTKSIVWYBBRPFMZXXYORHEXTGZZCQFAUFAXMDCYIUCAZQZCQDLVKERMPXVFQZMNJJGHDGMQJZGDXADHFMUVSBJKUFWYOAPTXVETFPBDQYLBJOSEKUEESSWULEKYDGTMKFIRNWWWLOWHRRIZDJAJBUZDC");

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
    msg.setTimeStamp(0.6824143926516514);
    msg.setSource(12205U);
    msg.setSourceEntity(81U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.5055534105710501;
    msg.lon = 0.13151573700898844;
    msg.z = 0.7591769274966073;
    msg.z_units = 47U;
    msg.speed = 0.1406966416192772;
    msg.speed_units = 134U;
    msg.abort_z = 0.058477582061207456;
    msg.bearing = 0.9977322787656234;
    msg.glide_slope = 80U;
    msg.glide_slope_alt = 0.6374058851695321;
    msg.custom.assign("XGELVHNVVTPAGQQDTPXRNASAQOSEIGMWZDIMKYCUBPHWMJUHWEBSGXPDRDIJTLMSJCZZXHFIFLEYBFPJSITOZOAREISEVNLEBIQHUGQUESNLDFMOUWIVSMYMKGCGLFKCBFVEAXKQDJB");

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
    msg.setTimeStamp(0.9201194265579882);
    msg.setSource(1703U);
    msg.setSourceEntity(162U);
    msg.setDestination(40197U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.23210983996534884;
    msg.lon = 0.7548763462472207;
    msg.z = 0.1227459570244207;
    msg.z_units = 91U;
    msg.speed = 0.1331807450881548;
    msg.speed_units = 108U;
    msg.abort_z = 0.016570547609780384;
    msg.bearing = 0.42232612470622644;
    msg.glide_slope = 96U;
    msg.glide_slope_alt = 0.33480555286710534;
    msg.custom.assign("VWXDMBXNSKGCCXZHVZQYDBTBPTFJCMDLHRKAHIUYOELJPTMCKQEVLZNGVKELLYWBOSILEKAHEYWDOIVMRWAPHRQNXMGOUWZZTQRDPE");

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
    msg.setTimeStamp(0.09551451478501316);
    msg.setSource(7562U);
    msg.setSourceEntity(183U);
    msg.setDestination(25015U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.6366573249665264;
    msg.lon = 0.7063851562380172;
    msg.z = 0.9702553647300457;
    msg.z_units = 156U;
    msg.speed = 0.19328306157041597;
    msg.speed_units = 2U;
    msg.abort_z = 0.7998014201559607;
    msg.bearing = 0.6623920661514543;
    msg.glide_slope = 97U;
    msg.glide_slope_alt = 0.6706254866426045;
    msg.custom.assign("EXEXBDMSILQIIHESOLXJIDHVUFKWTVSNPTHNAVEUKAEPVFLAANXMWGQLCOOXNRMLGFCAVEZHYTDULWGFXJXNVKKTCYITTERZNUSUCVAWYRSBBCOGWBTHZMGUFPIWUADCQORGSWDGZOJZISAFYHUMQIXGTDQHBKCXYSZPRYVPLSRMRRXQEGCMZBUWBQQBDNSJJEHJQRKYIPKZ");

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
    msg.setTimeStamp(0.5181068842485584);
    msg.setSource(32322U);
    msg.setSourceEntity(25U);
    msg.setDestination(10882U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.24191370338136697;
    msg.lon = 0.02872683580244928;
    msg.speed = 0.17034095502006663;
    msg.speed_units = 123U;
    msg.limits = 25U;
    msg.max_depth = 0.9163057170143614;
    msg.min_alt = 0.2292307624350295;
    msg.time_limit = 0.4366180929108736;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2529411178722635;
    tmp_msg_0.lon = 0.9165645064772234;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TNWVVZBRSGOKHAXEYJTOQDKQMESHIKFRIRFFMNSCKRWCJDYUDLIYQGYUQSZYPTNRKHXBDGXCPHORHGZOJFVUCIBMIMPIAPTBIZKUZZNGYATNWQSCPPDCNQSJHSFUFQIHAMUQRAXLTJHAODMVEEWQWRWJBUOP");
    msg.custom.assign("PKSYKPAYPTVFHRZIAACLKBATFVDYDHUKABVSNRJTWKZUMENWVYIAIYUGNDCTNUTCJDNNKXZYIREWOFSSPMLBLBNPGZJCFEQJRLGZLSHSYTQEDXWGRXDUVOYSDIEWXP");

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
    msg.setTimeStamp(0.7654734715526951);
    msg.setSource(8185U);
    msg.setSourceEntity(144U);
    msg.setDestination(6784U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.5892881656401021;
    msg.lon = 0.5362700664639317;
    msg.speed = 0.13474445860192263;
    msg.speed_units = 88U;
    msg.limits = 16U;
    msg.max_depth = 0.5975650723399945;
    msg.min_alt = 0.9154639480965027;
    msg.time_limit = 0.4107788943428434;
    msg.controller.assign("WDNSTLMICFTSAUTSBMBVKGHFZWSRPCKWXFDPIYOOOOJQYAKESHEKRXRYFZWQKNBJCYEIFRXUMIJYPHKQZJMJVQ");
    msg.custom.assign("VNNDGDKZGBR");

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
    msg.setTimeStamp(0.6768862800045281);
    msg.setSource(38185U);
    msg.setSourceEntity(175U);
    msg.setDestination(21465U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.5306734413041001;
    msg.lon = 0.7564479446729149;
    msg.speed = 0.024592803362281312;
    msg.speed_units = 146U;
    msg.limits = 40U;
    msg.max_depth = 0.3660951005016463;
    msg.min_alt = 0.4531892710008527;
    msg.time_limit = 0.8354761212856114;
    msg.controller.assign("ILBKUFZJMBTXBWBDVTUHCJMHHPGWFEOZYAFSYNPAYEUNBYPGERDORJNOWYJVYGZQFDNRGERWSWTMIKHBGILCIWXAKCAEIVODLSZPTXUGCWBKKBLSVMGWDLGMWANUVQWDIIROQXCVHOJQUMINUQSJNZGZQLMRVXDLVFOIQYXMQPBFIKEXFLJZMZJAEXSBPGEHCAONFYAUYSKKTPNFTQUYHOAXKSV");
    msg.custom.assign("KSLBOPRIDJUMLXTGVTIRCMOHXGLQXRHHBCAEHHJPRBBGWJYWPRQZASKEEUQDCYSYSNXSDXXFX");

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
    msg.setTimeStamp(0.671154979715448);
    msg.setSource(12280U);
    msg.setSourceEntity(114U);
    msg.setDestination(5155U);
    msg.setDestinationEntity(228U);
    msg.target.assign("IASKYUBHQENWEXTCOSZXVMARTLUQPSTYEFVSZDRMQUIFHJYJKADBTAEEXTTQRTKLDNWFQHQVKGBNHOGMOPQJMOURGUZKHRXHAZUTHTUDFIGVDLWGZZEDFPPSVMFXNNQNDLAHXYPCCBNIYJBCZOEOCJVGWMYULOCJHWA");
    msg.max_speed = 0.07393206592347246;
    msg.speed_units = 137U;
    msg.lat = 0.08239983514125182;
    msg.lon = 0.7124984216902469;
    msg.z = 0.10913696144881158;
    msg.z_units = 178U;
    msg.custom.assign("LCGGEPTSGQIVYFBNBMLYYHXZDQYQHIRBLHULTPMALNFLUXCAWPJRYASFFRNECXKDZSTZVJMKVPLXSUIXNCIDGETZWHJIQUZPQZOAIIRKTMBKGZOFVGEJOIAEQAWRJQRABKRAPNEUSHVQUNVMEXGQTNBUWRYRTUOOEONZEFHMZBAFZTOWTOCLCDSXWKYWSPJJFMHOSKWDGPPPBMVDHRJOQDWJGCJFNKXCMDMTSIBCBYHC");

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
    msg.setTimeStamp(0.8597550811125786);
    msg.setSource(50695U);
    msg.setSourceEntity(73U);
    msg.setDestination(12338U);
    msg.setDestinationEntity(217U);
    msg.target.assign("DGXERMRFRDUWLHSPYHUJAHD");
    msg.max_speed = 0.5250163485066496;
    msg.speed_units = 101U;
    msg.lat = 0.6290840356032151;
    msg.lon = 0.8642906170998106;
    msg.z = 0.733076643059552;
    msg.z_units = 145U;
    msg.custom.assign("BYMUIEVNQNDNLAYVQCYWCEVDQTNHDDXZKPIEZSJSFZHKUUBVJGPZOSQDWQNEJLCQPZXTNISLYDIRUICBWEOGLAGTQMSJHNVLLLMFBYJRVOELPGUKCRFWMEKUTWFGACRHSUDHXSPISVOOYJQBOOATQHRTPOIRVAGBYXMTFWFJATNHPJXXDIBOBWYNZOYZWHDBUMKEVANHQJCRFDXGSKAACCPRIEYKPGKCEBRFTZFVUWPULTL");

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
    msg.setTimeStamp(0.9148661831803188);
    msg.setSource(29003U);
    msg.setSourceEntity(54U);
    msg.setDestination(5338U);
    msg.setDestinationEntity(239U);
    msg.target.assign("PNEAMHZZUPFPARQLZIYCGNWMYWBYIWAWOYCKVSSOIYHMSAWNUHFMVKTCVNQAIDXNKKQIMGNRVTZXOFGEXDPXFDDEDBUVSROFGXGQUTSLRLIEUBHAWHBZDLTGPROOBCHTQHMAIWEJHHNLBBTOZLEWCRNJHCSWGGIS");
    msg.max_speed = 0.8868104598392834;
    msg.speed_units = 115U;
    msg.lat = 0.7947700638003924;
    msg.lon = 0.7681604281265053;
    msg.z = 0.943411684711356;
    msg.z_units = 121U;
    msg.custom.assign("ZXDTMUPFQPCHAGLRSHNYGQAEVYKORHIGKMJCRUUWORYMWZFTJOBKDORBVTFNLDVTEDBQJFRWDCBQHOPLVTEGVCPLIMTBWLNUFHZJICOWEAAFZEZHATLMKRSJBMFKUVSQZPMJIHFIZXZDOPJNCKAIXDARIIGKQJUAIKXNWLLSVEGWQTXRFCQADWCUQHPXCVKPZJCNJBTETONEHWYXUGBQBSMOSUYMWIVYEVGXHYGXPSNKBSMFNNYLPDYOEDG");

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
    msg.setTimeStamp(0.17878594552284333);
    msg.setSource(10447U);
    msg.setSourceEntity(228U);
    msg.setDestination(52082U);
    msg.setDestinationEntity(148U);
    msg.timeout = 12633U;
    msg.lat = 0.5703334244476137;
    msg.lon = 0.021746341624465426;
    msg.speed = 0.7615842401671228;
    msg.speed_units = 159U;
    msg.custom.assign("BQTATMMPTFNJDDETAVOWKTXEHSVFVSDCKHRJARAZBQCXQIMCGUIDFRYAUSZRYVUWPERCLAEWA");

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
    msg.setTimeStamp(0.5989238043786779);
    msg.setSource(48428U);
    msg.setSourceEntity(84U);
    msg.setDestination(45433U);
    msg.setDestinationEntity(80U);
    msg.timeout = 10662U;
    msg.lat = 0.47200738772295114;
    msg.lon = 0.2592349271939959;
    msg.speed = 0.3342866363971708;
    msg.speed_units = 144U;
    msg.custom.assign("RZVCJOHFNEXBR");

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
    msg.setTimeStamp(0.2803951776155692);
    msg.setSource(54164U);
    msg.setSourceEntity(133U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(198U);
    msg.timeout = 6709U;
    msg.lat = 0.3164699664620475;
    msg.lon = 0.25651888866941863;
    msg.speed = 0.8263027181576637;
    msg.speed_units = 134U;
    msg.custom.assign("VQQVNGUVMGXVCHHUINWKUNPOGEOXJEQYJYAWEACMFKEJSTJBMWPMCQBMBKJSDRZPGAUVMRTTRCQXLGVSRCWTKAOWDEXUAIPLPTCBYOPRQLYNAPZZEILTHCWNNFSYF");

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
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.9421909277839737);
    msg.setSource(49548U);
    msg.setSourceEntity(242U);
    msg.setDestination(5200U);
    msg.setDestinationEntity(237U);
    msg.control_src = 55036U;
    msg.control_ent = 152U;
    msg.timeout = 0.15851556944248701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.07562791334622909);
    msg.setSource(65341U);
    msg.setSourceEntity(104U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(59U);
    msg.control_src = 64692U;
    msg.control_ent = 109U;
    msg.timeout = 0.3365596932759415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.4692553323918318);
    msg.setSource(59382U);
    msg.setSourceEntity(236U);
    msg.setDestination(15324U);
    msg.setDestinationEntity(191U);
    msg.control_src = 19682U;
    msg.control_ent = 28U;
    msg.timeout = 0.6211373337378818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.5081686589688788);
    msg.setSource(1645U);
    msg.setSourceEntity(250U);
    msg.setDestination(36903U);
    msg.setDestinationEntity(134U);
    msg.flags = 249U;
    msg.speed = 0.37905615201550324;
    msg.z = 0.28213045729167907;
    msg.heading = 0.83326157562344;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.15321165210723264);
    msg.setSource(55685U);
    msg.setSourceEntity(11U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(124U);
    msg.flags = 61U;
    msg.speed = 0.883108585093451;
    msg.z = 0.9137540008366897;
    msg.heading = 0.3245040261589299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.8463623984832456);
    msg.setSource(56885U);
    msg.setSourceEntity(102U);
    msg.setDestination(51209U);
    msg.setDestinationEntity(216U);
    msg.flags = 52U;
    msg.speed = 0.8316211209309704;
    msg.z = 0.7899686264130419;
    msg.heading = 0.13335230674769416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.29778751002213455);
    msg.setSource(60597U);
    msg.setSourceEntity(75U);
    msg.setDestination(38713U);
    msg.setDestinationEntity(179U);
    msg.control_src = 39865U;
    msg.control_ent = 32U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 122U;
    tmp_msg_0.speed = 0.04966439000483558;
    tmp_msg_0.z = 0.6577978703632479;
    tmp_msg_0.heading = 0.845385288545522;
    msg.command.set(tmp_msg_0);
    msg.state = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.7690548562525529);
    msg.setSource(46107U);
    msg.setSourceEntity(201U);
    msg.setDestination(64999U);
    msg.setDestinationEntity(116U);
    msg.control_src = 40022U;
    msg.control_ent = 113U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 216U;
    tmp_msg_0.speed = 0.36576302699983454;
    tmp_msg_0.z = 0.1106183216529405;
    tmp_msg_0.heading = 0.05344581648707425;
    msg.command.set(tmp_msg_0);
    msg.state = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.7340199207632789);
    msg.setSource(51241U);
    msg.setSourceEntity(248U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(221U);
    msg.control_src = 25125U;
    msg.control_ent = 229U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 5U;
    tmp_msg_0.speed = 0.6587021558178126;
    tmp_msg_0.z = 0.6564047980409055;
    tmp_msg_0.heading = 0.08313414592857693;
    msg.command.set(tmp_msg_0);
    msg.state = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.22428597822255347);
    msg.setSource(37986U);
    msg.setSourceEntity(66U);
    msg.setDestination(28374U);
    msg.setDestinationEntity(45U);
    msg.timeout = 23755U;
    msg.lat = 0.6351830762002986;
    msg.lon = 0.7418004394337869;
    msg.z = 0.7770424280484372;
    msg.z_units = 186U;
    msg.speed = 0.10829541839859946;
    msg.speed_units = 11U;
    msg.bearing = 0.08656141325925026;
    msg.width = 0.8345151471842431;
    msg.direction = 142U;
    msg.custom.assign("BZJKUVRTNCEKCDLIIKVJNHXGQHSKOPHIDLTLMWGEUWYSEQPHXVMAOWQOFHROIJTYQANUGVIKTDLUIWZMXZTAFFJHAWQQIEGYNRVICTNCQEBPGXLQVSYCZMBEGYPKABBKDOJSTGMZDRYVSDULYRFPFLXXRUKXGLXYMZPNUOCSYKHSIXFVAOGSEOLBTDDEURMCSSBENNJMBTIBDQZFFZVZA");

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
    msg.setTimeStamp(0.8806187089547688);
    msg.setSource(31795U);
    msg.setSourceEntity(88U);
    msg.setDestination(29535U);
    msg.setDestinationEntity(244U);
    msg.timeout = 21768U;
    msg.lat = 0.08997032467562593;
    msg.lon = 0.8206476183355158;
    msg.z = 0.9183794008435877;
    msg.z_units = 90U;
    msg.speed = 0.13357014762139574;
    msg.speed_units = 128U;
    msg.bearing = 0.7545737906873331;
    msg.width = 0.7507387846235933;
    msg.direction = 116U;
    msg.custom.assign("EVDKCWKOMXSLSIQEUNTKUCHTAQWIENJHKDIERYUEMFHCIKWNGUYJFFLAFFYXAXKZFTYXRPQKLDUHNVGGZULMBYXVAGVVSTZSZJBPJUFYJHVJWMQUOYFDJOJTMPNCXAPSFXQTGAESSGNBRQZCREDOROIIHDBKBOKRGPQQNTDB");

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
    msg.setTimeStamp(0.7857234097259416);
    msg.setSource(59761U);
    msg.setSourceEntity(98U);
    msg.setDestination(43488U);
    msg.setDestinationEntity(20U);
    msg.timeout = 43224U;
    msg.lat = 0.06123098338375543;
    msg.lon = 0.16830262779622396;
    msg.z = 0.9560752718872318;
    msg.z_units = 31U;
    msg.speed = 0.9384265714660266;
    msg.speed_units = 180U;
    msg.bearing = 0.307176440676863;
    msg.width = 0.6401070438692157;
    msg.direction = 18U;
    msg.custom.assign("PCQHGDLKMXHFQSLQBLAMFVRNRLMMTDVZYJHSTZTFNNMHMJGRWXOIPCXAOBQEPXIPYTAUUISEYKKNLBTKRAKKUNSHWLDXAZXTQQEPEPIVLJOGRWZFVZOAKRUEZORPDEGUCDBMFVBOJQFSJBMMYXIVCQGJRKHBUVBTBRGMIGSZPCCDQRYZYNXSSGUOJYOWDNALLGXQFWDCTWI");

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
    msg.setTimeStamp(0.9008316925873371);
    msg.setSource(6928U);
    msg.setSourceEntity(108U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(252U);
    msg.op_mode = 122U;
    msg.error_count = 13U;
    msg.error_ents.assign("YTODRROJMBSDWPUZNFNFEUXALXZEUQGSFZSELHENYCTSCERNKUJAPADDBKLDIDGOLVSAOIKJXBCWCWEWXKTNOBBPTYLXQIJTUGBOMROQYFTHYKCVNFSWYBPWKGHRYYFYCHAMBIMOJWHQPTEKJVZVRCZMAIZSCTUNZW");
    msg.maneuver_type = 13862U;
    msg.maneuver_stime = 0.09585579907049624;
    msg.maneuver_eta = 25721U;
    msg.control_loops = 620188014U;
    msg.flags = 102U;
    msg.last_error.assign("NQKGAZMDXJJSDXAVUJESQBFOGCQWAXWACLMEERNBVPDA");
    msg.last_error_time = 0.5905171252846436;

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
    msg.setTimeStamp(0.7970905733397503);
    msg.setSource(48997U);
    msg.setSourceEntity(140U);
    msg.setDestination(2384U);
    msg.setDestinationEntity(15U);
    msg.op_mode = 191U;
    msg.error_count = 8U;
    msg.error_ents.assign("SQEHXGZVOJFYACIVNZZHDRCROZKXAPRHULWKYQTDKFYRJIHSGHGHEBPEFEBNEUVZIQLPCJBDTNNEJYPXEURNMQYDRSEYFZHKKKBWDIMBDUOMIOOMOYJMVHLTGUDUIZMZZXCVKAKQIGNFLYOAKPUVASAQZGVMUBFLHADJGRPCQJBDLTOVPONHBBRTFPMXESXMWOSGSRYLBGWDLSFLTICATQWLRWPNIINCT");
    msg.maneuver_type = 61534U;
    msg.maneuver_stime = 0.1947747290757733;
    msg.maneuver_eta = 37959U;
    msg.control_loops = 1730771924U;
    msg.flags = 15U;
    msg.last_error.assign("WSQSLUGNUOLZVFMCGIKGQPRXBUVDUDPYKNKCWVQPUWRUVGTAMAFJWYNMQEDOUEPBOJBDROSNGDIUXQHLJZRKTALCAGUBZBTSMXYBJOXMPRVCSRILITXKKGJCAEHCJNEMQZYDMBXLJKTGNOQTMPLSIWBVLGBXAEHHWZKESNIFXCEOYSZHIYPPPAIMTNDKDOVISDVVVYHFFOCZMCAYREFJRQWFOLWWELHZNHFJYTQGQTAKDZPSYAFZCHXHX");
    msg.last_error_time = 0.516327889168794;

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
    msg.setTimeStamp(0.7712023734785352);
    msg.setSource(51089U);
    msg.setSourceEntity(254U);
    msg.setDestination(56733U);
    msg.setDestinationEntity(18U);
    msg.op_mode = 143U;
    msg.error_count = 247U;
    msg.error_ents.assign("HCHBIJMMOVJNLKLLAPKBAVZDNCENAPHGHNKYISAPOLVVIZAUXNXVLGSYNCP");
    msg.maneuver_type = 59781U;
    msg.maneuver_stime = 0.9965341884995271;
    msg.maneuver_eta = 48927U;
    msg.control_loops = 146747764U;
    msg.flags = 159U;
    msg.last_error.assign("QEZWCZUJWNKQPLVOCORGRGOHKRIDUFOCVHBMYMEAHHUMQQEQZIPIBLMNRGTHPDKLKNHAWGMRZKJVVDWOWYELKYMJXW");
    msg.last_error_time = 0.5699485140919305;

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
    msg.setTimeStamp(0.9328246300257335);
    msg.setSource(11416U);
    msg.setSourceEntity(213U);
    msg.setDestination(55851U);
    msg.setDestinationEntity(201U);
    msg.type = 86U;
    msg.request_id = 3785U;
    msg.command = 187U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.43765908189676295;
    tmp_msg_0.lon = 0.5050276741646076;
    tmp_msg_0.z = 0.17236723535942533;
    tmp_msg_0.z_units = 118U;
    tmp_msg_0.radius = 0.30825782941729196;
    tmp_msg_0.duration = 29020U;
    tmp_msg_0.speed = 0.5296404539840235;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("WROZBCLIZJIOGBLDAYUQHSMUKMDHPTXCEQOOFPLVMGYNNRGPMBTNYEUJMCSQCEZLIFQHPON");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55053U;
    msg.info.assign("ROTWBHHXLVQBWMYWNNJSZPKWASUZZTYAP");

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
    msg.setTimeStamp(0.2742332259071826);
    msg.setSource(42587U);
    msg.setSourceEntity(66U);
    msg.setDestination(1353U);
    msg.setDestinationEntity(154U);
    msg.type = 38U;
    msg.request_id = 41024U;
    msg.command = 183U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 34583U;
    tmp_msg_0.lat = 0.48329458266322733;
    tmp_msg_0.lon = 0.08032067134417142;
    tmp_msg_0.z = 0.8190364729024823;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.speed = 0.4688556239073437;
    tmp_msg_0.speed_units = 137U;
    tmp_msg_0.bearing = 0.635698891328651;
    tmp_msg_0.width = 0.3236524981402841;
    tmp_msg_0.direction = 47U;
    tmp_msg_0.custom.assign("CVNYHQYFDAUNCEHSMZXERPUPHYWJXDOJZUPQYBJLCMGDGXTYWLLJYVFCRZIDXMEHSPCDTPIHCNEXVIFRIA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31695U;
    msg.info.assign("CAKVMKEBGNQWHJAPYD");

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
    msg.setTimeStamp(0.5761063525896238);
    msg.setSource(35910U);
    msg.setSourceEntity(52U);
    msg.setDestination(38223U);
    msg.setDestinationEntity(150U);
    msg.type = 154U;
    msg.request_id = 15310U;
    msg.command = 17U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 3551U;
    tmp_msg_0.lat = 0.14803034507588975;
    tmp_msg_0.lon = 0.1398784576533998;
    tmp_msg_0.z = 0.30821885945207683;
    tmp_msg_0.z_units = 170U;
    tmp_msg_0.speed = 0.25249994656726493;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.custom.assign("EUKVYPSYHOUHNZDJYRONQSAEKNSBOAEVVKJJSGVRBOHZXNMFBZVSFTAGBIIUEGFM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40076U;
    msg.info.assign("CUHSTTERWZPZMOJSPNYRLSARAKWUJOQGCLLQN");

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
    msg.setTimeStamp(0.7714553239734735);
    msg.setSource(49459U);
    msg.setSourceEntity(21U);
    msg.setDestination(13678U);
    msg.setDestinationEntity(19U);
    msg.command = 57U;
    msg.entities.assign("WIIUGKMTSSLLENFRUJMYIBTUGAPMZFKFRAGVQJIIRJWDTLMGXNYDSVROBLAHCTEEPDCZUBYDKKCMCXNFAWKJDMOWTWZGNSJENTUJHNPXQJFHREQABGHDVGGVKXDCNEEZYODFOTHVXBRKVIYXMLKYGFXXRVLYZAAOROQQVBQCRTYDULZSBIPWOJWSTZEDNZYPPLPWLAIKBGASPRFLWWBMCQSHNIMQEPHUJYIHOUCOFSK");

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
    msg.setTimeStamp(0.314904732629509);
    msg.setSource(41673U);
    msg.setSourceEntity(114U);
    msg.setDestination(62868U);
    msg.setDestinationEntity(47U);
    msg.command = 160U;
    msg.entities.assign("LQUHWFDKCUORJYJKHBWMYSUBWAXHVHIEZCGKQSZHOJSPPZBHTDIEPZXM");

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
    msg.setTimeStamp(0.5952706365868905);
    msg.setSource(47145U);
    msg.setSourceEntity(91U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(180U);
    msg.command = 27U;
    msg.entities.assign("PBRJELWMJITDYUOZHKWMBUALMNURFXYSKHVZAYQWJQQSKRUYT");

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
    msg.setTimeStamp(0.953085358335783);
    msg.setSource(42721U);
    msg.setSourceEntity(41U);
    msg.setDestination(16532U);
    msg.setDestinationEntity(48U);
    msg.mcount = 221U;
    msg.mnames.assign("NQRIKXSYVOHVNILAYHQGOSSBZUBKWNUTDXAOBDFRJGDCUUEQGLBDEWHFPTPJVESPETKNTWREBKAWDJOAQLMCVJICJLHPQWPFASEEXAVVWCOCGUIWYTSPYKACNUIDZGIWURMGJZYFDTQIMLVIYADTHHILKXYOQTPWCVSRSQZHMUZGHQURBRXJXOLZREPQMYCVNTCFJMUXFYRXHNBSXAZFOZFGKXPIMTYOMMESV");
    msg.ecount = 93U;
    msg.enames.assign("TZKEBNIBTTPKQQJKDOUTIWMJTBHMENDHPCNDEARWYXDOYQAFPMGSMXNGOCHJWRAJ");
    msg.ccount = 174U;
    msg.cnames.assign("FHOENVQWPBBGCZSYOCXXAFDBUQVGUTOFZCZGJJSKJFGNZKFEHWNZ");
    msg.last_error.assign("GPDZJEJBLGKJAJBQRHGZPALVLNMRVIWHSHCYVQMXLEODGBVHSWIEBELOOHFXMUTYOWQGXHHDQPCHAWAVYLJUMGBFYSR");
    msg.last_error_time = 0.13608959472806925;

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
    msg.setTimeStamp(0.7661242181598649);
    msg.setSource(46612U);
    msg.setSourceEntity(202U);
    msg.setDestination(51055U);
    msg.setDestinationEntity(39U);
    msg.mcount = 60U;
    msg.mnames.assign("LNOWYNHMCKVUHWHXGJMUJWDRRTTWSHPRFEZXBZUKDSDFEWLKKLQGIFDSNBAOSRIEALRMLZHUTCLFLKYIFYZNJVBIPJGTPZNYKVMPUKAVVENPYAOWAMOBVAHEVXOVDZBJRPWMSOHTQCVUNUWACBZQALFOEXBPSQTEDRYOIMPRTBJZEYSFBXTIEYGHKIWYFDCGJXSAVXFGCCUYDCIQQHQ");
    msg.ecount = 42U;
    msg.enames.assign("SYHDBASYWINLEIWZNZVCQONTBXIIELDUGRGSDRSGDCFZRDOGVAHKXPSUYLXXITAZMQHYLOEPCYNMAUJLLJDGGADKNVPLVZVYBUUUOJAFTJFBCGWGQDMRSGSFYVSJNPOBCVPKFTXITWRHWPEIBQSUMOHYLPBAZAFRVZMEWZLXOHKTKZQJMPCABIOAVPHMMCECNKFNWTEBXOHTBRHUIXNDLWVGOECFQDTPMJWQWMXXIKRQFKYKNERCHZQU");
    msg.ccount = 96U;
    msg.cnames.assign("FCOHSHHZDBQUSSHYJWTIOEQYBSWRBMSLKZSRGAABINDCTFPVTRMBNWLDSABUQMHPUGVXGNRIKKLQZIBMTTNUOVBIFCTHHDKEQIKCFGRWLMRGZXOVHFFZTSCUUCSLKAGRVEAEAXPANFLJKJATMRZDKYZMG");
    msg.last_error.assign("RZKXWPQOYHVOCENLAZXVHURWRMSOHWLFAXWWTBLBKPFMCGMYOYAKHOAEEIUMHWELPZGVQDYXKNMSAXGQSO");
    msg.last_error_time = 0.3632165031060246;

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
    msg.setTimeStamp(0.7316599973748812);
    msg.setSource(30430U);
    msg.setSourceEntity(180U);
    msg.setDestination(31556U);
    msg.setDestinationEntity(222U);
    msg.mcount = 93U;
    msg.mnames.assign("PSXIMBRNEIYOSZIDJVDYSIVCMHWKDAWBFWDYCURKOSSARDQKQEQYTFLTUCBUHKUHXFJGTQGHQUOGZKYCTFJNYHMHFEIQXUKOORJPLRRRVZ");
    msg.ecount = 149U;
    msg.enames.assign("DXSVBXQELESAHLZKXLXNDHQBXCRPZEOIHUUEXMMBDVJYDQHIFYRGLFGWZZABAMOFGARTNHCFVTYEDZEOCIJFWGFQBHLDFEQHEDSKNNZBQJNCPCLLTSVIYTCSZKXPEMHWMJULUVPGIMPMWIRNZAWDRWT");
    msg.ccount = 120U;
    msg.cnames.assign("QOXZIZHJOQICDPYLARSFZGGSDUGAPXWRVIBJKSDZKCEPENAHUUIVDXCMMJFIAMQFEYXJRXYXHBUSLQGSIQSEGJJFWKXKPVDAYRVVBFNTDRWAKCHOLTBIZRYW");
    msg.last_error.assign("WBYDYJHSSICZOZKDTRQVWCYEWUIJFBVCCDUJREFEGFROXBDAZDVRUNTTMKFQIFLECJZKAZMDYCDGNJOOVTDTLKIPBXOILOXHNBKPSHTMGOKYMXDMVYAONNTPXRKGRWEPFEQMPWPRBLWZQXUUEHVIXYRFSABQLRNPKNMQEGZNXJYOPYHVUPDLXAJZHQALQAIICPGOACSSZVRFKBLGKSVTJFGTTI");
    msg.last_error_time = 0.23731776662050463;

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
    msg.setTimeStamp(0.945870543738186);
    msg.setSource(40418U);
    msg.setSourceEntity(18U);
    msg.setDestination(34916U);
    msg.setDestinationEntity(207U);
    msg.mask = 76U;
    msg.max_depth = 0.2866163222138618;
    msg.min_altitude = 0.7456087091516129;
    msg.max_altitude = 0.34453474348675217;
    msg.min_speed = 0.9501810361169156;
    msg.max_speed = 0.5428609778428993;
    msg.max_vrate = 0.028611958407433913;
    msg.lat = 0.9997137177624377;
    msg.lon = 0.2581980618287274;
    msg.orientation = 0.08933322369454733;
    msg.width = 0.05722287815666849;
    msg.length = 0.4203182533827672;

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
    msg.setTimeStamp(0.19711295835203402);
    msg.setSource(53277U);
    msg.setSourceEntity(211U);
    msg.setDestination(50946U);
    msg.setDestinationEntity(80U);
    msg.mask = 133U;
    msg.max_depth = 0.38680916147277655;
    msg.min_altitude = 0.22384981863697362;
    msg.max_altitude = 0.8352621826347548;
    msg.min_speed = 0.2918720427659526;
    msg.max_speed = 0.4516474527829467;
    msg.max_vrate = 0.5933938576923818;
    msg.lat = 0.49323595685616806;
    msg.lon = 0.06383313436871108;
    msg.orientation = 0.968267312239909;
    msg.width = 0.8730607917611147;
    msg.length = 0.5553993273836296;

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
    msg.setTimeStamp(0.9404677044540826);
    msg.setSource(180U);
    msg.setSourceEntity(22U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(76U);
    msg.mask = 20U;
    msg.max_depth = 0.45402710341471875;
    msg.min_altitude = 0.5408059686790307;
    msg.max_altitude = 0.7641027058632338;
    msg.min_speed = 0.24738159716944275;
    msg.max_speed = 0.033089873014020554;
    msg.max_vrate = 0.9623509234057849;
    msg.lat = 0.0167954895480249;
    msg.lon = 0.6882736325188407;
    msg.orientation = 0.29559498408854956;
    msg.width = 0.20791775065505558;
    msg.length = 0.31697170452883816;

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
    msg.setTimeStamp(0.9342319618142386);
    msg.setSource(1416U);
    msg.setSourceEntity(166U);
    msg.setDestination(36948U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.37047794749362006);
    msg.setSource(48275U);
    msg.setSourceEntity(17U);
    msg.setDestination(35088U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.3019158497099267);
    msg.setSource(20522U);
    msg.setSourceEntity(187U);
    msg.setDestination(16143U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.4711692253797408);
    msg.setSource(29485U);
    msg.setSourceEntity(145U);
    msg.setDestination(390U);
    msg.setDestinationEntity(39U);
    msg.duration = 40132U;

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
    msg.setTimeStamp(0.5630819754754164);
    msg.setSource(4610U);
    msg.setSourceEntity(194U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(94U);
    msg.duration = 39611U;

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
    msg.setTimeStamp(0.9811219703962576);
    msg.setSource(39724U);
    msg.setSourceEntity(36U);
    msg.setDestination(21079U);
    msg.setDestinationEntity(192U);
    msg.duration = 22869U;

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
    msg.setTimeStamp(0.18386885002968612);
    msg.setSource(18025U);
    msg.setSourceEntity(214U);
    msg.setDestination(28087U);
    msg.setDestinationEntity(3U);
    msg.enable = 145U;
    msg.mask = 3965159325U;
    msg.scope_ref = 248591344U;

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
    msg.setTimeStamp(0.9646598315209655);
    msg.setSource(18287U);
    msg.setSourceEntity(145U);
    msg.setDestination(8549U);
    msg.setDestinationEntity(57U);
    msg.enable = 224U;
    msg.mask = 3986767683U;
    msg.scope_ref = 945027988U;

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
    msg.setTimeStamp(0.08701178290359446);
    msg.setSource(15343U);
    msg.setSourceEntity(82U);
    msg.setDestination(59224U);
    msg.setDestinationEntity(137U);
    msg.enable = 245U;
    msg.mask = 1415466570U;
    msg.scope_ref = 779856998U;

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
    msg.setTimeStamp(0.9549834660006102);
    msg.setSource(27291U);
    msg.setSourceEntity(224U);
    msg.setDestination(3685U);
    msg.setDestinationEntity(94U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.9700298937405846);
    msg.setSource(50738U);
    msg.setSourceEntity(139U);
    msg.setDestination(8563U);
    msg.setDestinationEntity(134U);
    msg.medium = 1U;

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
    msg.setTimeStamp(0.5685522353131458);
    msg.setSource(13072U);
    msg.setSourceEntity(201U);
    msg.setDestination(43248U);
    msg.setDestinationEntity(6U);
    msg.medium = 182U;

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
    msg.setTimeStamp(0.10201491912455607);
    msg.setSource(48648U);
    msg.setSourceEntity(42U);
    msg.setDestination(60898U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7019149896545421;
    msg.type = 34U;

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
    msg.setTimeStamp(0.23492104780945988);
    msg.setSource(9604U);
    msg.setSourceEntity(43U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(27U);
    msg.value = 0.26491169682273763;
    msg.type = 98U;

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
    msg.setTimeStamp(0.12120484856883817);
    msg.setSource(19064U);
    msg.setSourceEntity(26U);
    msg.setDestination(35919U);
    msg.setDestinationEntity(226U);
    msg.value = 0.21172103226365913;
    msg.type = 117U;

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
    msg.setTimeStamp(0.45922291258872217);
    msg.setSource(61605U);
    msg.setSourceEntity(253U);
    msg.setDestination(15914U);
    msg.setDestinationEntity(201U);
    msg.possimerr = 0.007849550669256078;
    msg.converg = 0.31952012412786834;
    msg.turbulence = 0.985210139157815;
    msg.possimmon = 21U;
    msg.commmon = 185U;
    msg.convergmon = 234U;

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
    msg.setTimeStamp(0.25228487972460956);
    msg.setSource(48726U);
    msg.setSourceEntity(27U);
    msg.setDestination(33622U);
    msg.setDestinationEntity(231U);
    msg.possimerr = 0.2305428676841681;
    msg.converg = 0.5461201901090292;
    msg.turbulence = 0.7896774750473606;
    msg.possimmon = 11U;
    msg.commmon = 191U;
    msg.convergmon = 0U;

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
    msg.setTimeStamp(0.008540097039196781);
    msg.setSource(34152U);
    msg.setSourceEntity(93U);
    msg.setDestination(20831U);
    msg.setDestinationEntity(94U);
    msg.possimerr = 0.6474504970912182;
    msg.converg = 0.7726050114264165;
    msg.turbulence = 0.05680454543881752;
    msg.possimmon = 28U;
    msg.commmon = 152U;
    msg.convergmon = 207U;

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
    msg.setTimeStamp(0.15967040074537164);
    msg.setSource(59517U);
    msg.setSourceEntity(226U);
    msg.setDestination(32251U);
    msg.setDestinationEntity(155U);
    msg.autonomy = 4U;
    msg.mode.assign("NVSLMXPTUOVYLGTHTEUEYYOAZUPKQIUAECYXPAVMWARXIVWGMJTJTVACHCIENZBDLSNCXCDIKYKUNPDKOGRZFUDZECQTXLYNXYLVHFWRBGXFZIFDGYT");

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
    msg.setTimeStamp(0.700203874735302);
    msg.setSource(52155U);
    msg.setSourceEntity(122U);
    msg.setDestination(32246U);
    msg.setDestinationEntity(150U);
    msg.autonomy = 48U;
    msg.mode.assign("BTVFTDLCMAVONWQEYBUHBDYPRVSPMOIOHKUDPASMERAMCLGWMCEWQTFKZCAFOEDUZFVHCXPXYSNMOOEGJJZJKIKLEEUNZJJGUQZQMVKN");

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
    msg.setTimeStamp(0.09139274170927147);
    msg.setSource(52763U);
    msg.setSourceEntity(182U);
    msg.setDestination(22809U);
    msg.setDestinationEntity(48U);
    msg.autonomy = 75U;
    msg.mode.assign("YWPIZCQVPNFZFRUYFSTIBLJWGIJILEYWVPNNKIRHZLJMOAURVCIYJADMOVWFMOALQMQTYETKUBOVHJFUWABECZAGEHTGFNXEGVACNUKMNSXJGJVLT");

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
    msg.setTimeStamp(0.1078816188053412);
    msg.setSource(1333U);
    msg.setSourceEntity(222U);
    msg.setDestination(9078U);
    msg.setDestinationEntity(136U);
    msg.type = 235U;
    msg.op = 46U;
    msg.possimerr = 0.5003426438604004;
    msg.converg = 0.9940246870592582;
    msg.turbulence = 0.30543285673524234;
    msg.possimmon = 64U;
    msg.commmon = 51U;
    msg.convergmon = 230U;

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
    msg.setTimeStamp(0.3472230364467208);
    msg.setSource(13067U);
    msg.setSourceEntity(117U);
    msg.setDestination(64706U);
    msg.setDestinationEntity(104U);
    msg.type = 6U;
    msg.op = 108U;
    msg.possimerr = 0.34075820691170633;
    msg.converg = 0.15986929305820885;
    msg.turbulence = 0.14770537628157154;
    msg.possimmon = 198U;
    msg.commmon = 60U;
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
    msg.setTimeStamp(0.10364904092592553);
    msg.setSource(4517U);
    msg.setSourceEntity(4U);
    msg.setDestination(4126U);
    msg.setDestinationEntity(101U);
    msg.type = 115U;
    msg.op = 39U;
    msg.possimerr = 0.7394772465753496;
    msg.converg = 0.17422540452865787;
    msg.turbulence = 0.7124317114141712;
    msg.possimmon = 173U;
    msg.commmon = 87U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.16335500328169794);
    msg.setSource(29520U);
    msg.setSourceEntity(126U);
    msg.setDestination(21676U);
    msg.setDestinationEntity(11U);
    msg.op = 179U;
    msg.comm_interface = 104U;
    msg.period = 51968U;
    msg.sys_dst.assign("FAAHJIABOSGVULHDYLLRYJOYIMHNSQMNSGUEMJFOPGSAUFDXGVHPXGCYCQONYWXBQWATWVRWVBVFUSMCZBQSCZUNEJA");

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
    msg.setTimeStamp(0.7287999205789408);
    msg.setSource(6531U);
    msg.setSourceEntity(242U);
    msg.setDestination(33287U);
    msg.setDestinationEntity(34U);
    msg.op = 137U;
    msg.comm_interface = 40U;
    msg.period = 29316U;
    msg.sys_dst.assign("AZEHGXWZJVBAQHQOFAGFDRATBWSRLFSRDDYPEDLTOGRQNRKFVZMPC");

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
    msg.setTimeStamp(0.25894012376814723);
    msg.setSource(30985U);
    msg.setSourceEntity(12U);
    msg.setDestination(1366U);
    msg.setDestinationEntity(32U);
    msg.op = 131U;
    msg.comm_interface = 109U;
    msg.period = 600U;
    msg.sys_dst.assign("KRDQPOVBCOIOSXVODVMCTTALXSTRGISYTDSEMWEZGUGQCTVDMALSARJOKKFHINWILSOBGAGOSCYHUFWUZMRIBALTBGDUXRJXWYZMNJWOFPIABQQVZQNAFJJDDJEJTNDRQYPRKJHVWKUZNNFFOAGYPJSVT");

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
    msg.setTimeStamp(0.14742280097645888);
    msg.setSource(8989U);
    msg.setSourceEntity(75U);
    msg.setDestination(37607U);
    msg.setDestinationEntity(39U);
    msg.stime = 57104646U;
    msg.latitude = 0.03402678951381877;
    msg.longitude = 0.8617926611341666;
    msg.altitude = 47905U;
    msg.depth = 24705U;
    msg.heading = 44180U;
    msg.speed = 1383;
    msg.fuel = 90;
    msg.exec_state = -127;
    msg.plan_checksum = 75U;

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
    msg.setTimeStamp(0.0292641464036949);
    msg.setSource(20471U);
    msg.setSourceEntity(12U);
    msg.setDestination(42020U);
    msg.setDestinationEntity(76U);
    msg.stime = 1953957303U;
    msg.latitude = 0.3919728991343697;
    msg.longitude = 0.5170820339912314;
    msg.altitude = 15765U;
    msg.depth = 5752U;
    msg.heading = 7820U;
    msg.speed = -21935;
    msg.fuel = 9;
    msg.exec_state = -2;
    msg.plan_checksum = 26018U;

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
    msg.setTimeStamp(0.5351450019951339);
    msg.setSource(41805U);
    msg.setSourceEntity(79U);
    msg.setDestination(49778U);
    msg.setDestinationEntity(166U);
    msg.stime = 1448447806U;
    msg.latitude = 0.3448732507486454;
    msg.longitude = 0.555623013952931;
    msg.altitude = 41075U;
    msg.depth = 61628U;
    msg.heading = 49593U;
    msg.speed = -27873;
    msg.fuel = 89;
    msg.exec_state = -54;
    msg.plan_checksum = 36766U;

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
    msg.setTimeStamp(0.10885445102182645);
    msg.setSource(49647U);
    msg.setSourceEntity(143U);
    msg.setDestination(27285U);
    msg.setDestinationEntity(37U);
    msg.req_id = 35322U;
    msg.comm_mean = 101U;
    msg.destination.assign("TKMKRVRUWWFRXWUJUGWZVYKYQXRBFAADMOVNPUPTZTPGSTDYIAIMVLHSZXDALWHJNUCZBJFDFIWHRXJAHZQDQGDEFPNPBSHZKZMTGEKGCSIJFSEVTQHHKXKNHAOGRVXFLIDCYYBWEPFYNOKIJM");
    msg.deadline = 0.20168457468001455;
    msg.range = 0.1118345651473166;
    msg.data_mode = 151U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("MEJTZGLRRYQWSOKALEUGPXLEJTIDPGGUCZIQANAXSCKJKBNUNMSMVGGOFBEINSGDPSXJJMEBKONSYQYRXJUHFUCEOCKQHPBEARXRUFBXBOLLSQCOQHFROZUSFUWOMPLTPCMHPVRGMWFXAIFNEYDZUQMC");
    tmp_msg_0.service_type = 115U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NXLILUQADYEVEWUIBAMPWTSSUZKWXYGCCCJVIMLVPOMSDTEFRVJCCZEVUVHXQTTKKPTHQJHBZCPLCDYTSMQEEIHGHBUJXYOUIXWMOJ");
    const signed char tmp_msg_1[] = {26, -120, -77, -30, -119, -6, 121, -10, -22, -91, -65, 30, -62, -76, -63, 85, -123, 126, -57, -75, -62, -60, 50, -17, -86, -50, -58, -119, 51, 104, -61, -52, -27, -37, -107, -89, 2, 46, 76, 37, 77, -103, -66, -99, -17, -94, -56, 72, -72, -22, 113, 26, 21, -109, 105, 126, -8, 67, -67, -1, 30, 63, 64, 19, -60, -21, -25, 35, 95, -45, 47, 17, -105};
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
    msg.setTimeStamp(0.2813954903667186);
    msg.setSource(49542U);
    msg.setSourceEntity(237U);
    msg.setDestination(61028U);
    msg.setDestinationEntity(16U);
    msg.req_id = 26500U;
    msg.comm_mean = 216U;
    msg.destination.assign("DUXQTBCIPLKZJCNWPQBWQEECZSSORBZRRFNANRBYUOSJBPKLNFREYVQYXGLKTOTUCEBIRIBRFGHFPIDTAKJIAHPHTQATMMHMXSVVWSXCEWFXCKBYSFTYSLLOAMJGBAXAZLQINCKSXUUWTDJMGPDHVWDUDYQHGSRLVJEPWVUJXENZHYFHDDODIATOKHSZKZJLIMIGOURFIZQQFFYWNDOABXEPMTQKPUGXJMCGRMYAVULNYMJLEKWZVVC");
    msg.deadline = 0.5406541538793507;
    msg.range = 0.2759747842334207;
    msg.data_mode = 7U;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("ZOBNBZSULRGLJTPQGNUSNDGYMYGRAGCFMA");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("PARBCPHQHGIIFNRIQQRTDDGWWRRDYXFRECMQWEBXUHOIXTXKPXLHFKKZKSAIZCTGDCWIBOBPBKPDKJFSLSIVLFPYHFUXBVVRWZMDDJBNZCPMCZWJCFGZAZNHQFJGOQGYHALKVENEVMOXLHZYZVJYDGBIEOSJ");
    tmp_tmp_msg_0_0.feature_type = 10U;
    tmp_tmp_msg_0_0.rgb_red = 120U;
    tmp_tmp_msg_0_0.rgb_green = 99U;
    tmp_tmp_msg_0_0.rgb_blue = 219U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.46586544519747863;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.41064720410951905;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.7538090752665402;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WQVEPOMNEUSTXXQZLVRRIVFYVJGUOACSOGOYIRWJXNFQYINQUNELSSPEVGMELAGQIDBXKURXSOTNWDGKZALRFCDPAXHSYKFBHGSWDDGSQXSCMKKULUBHZCAU");
    const signed char tmp_msg_1[] = {-38, 6, -92, 42, -125, -111, -30, -77, 45, 56, 22, -5, -79, 21, 83, -57, 1, -85, -56, 42, -75, -51, -4, -110, -81, -34, -117, -30, -14, 1, -70, -25, 75, 32, 56, 73, -122, 96, -31, 73, 14, 84, -68, 6, 108, -23, 8, -28, 58, 41, 27, -101, -21, -58, -41, -104, -31, 103, -103, 25, 43, 58, 100, -93, -102, 105, -61, 64, 54, 106, -107, -19, -17, -34, 16, -55, -6, -127, 115, -46, 84, -11, 9, -89, -21, -105, -18, -62, 80, -109, 89, -15, -51, -6, -68, -94, 37, -89, 10, 103, -13, -36, -126, -106, -126, -79, -60, 7, 9, -67, 87, 96, 0, -98, 10, -128, 102, -91, 7, -105, -54, -33, -76, 99, -60, 102, -124, 62, 58, 115, 14, -120, -50, 99, 69, 55, 17, 93, -116, -48, 125, -30, -46, -43, -64, -105, -116, 49, 55, -80, 12, 37, 67, 119, 66, -40, 93, 113, -69, 63, -67, -92, 39, -31, -6, -52, 77, -17, -115, -53, -88, -37, 6, -105, -11, -35, 62, -44, -58, -7, 79, 10, 94, 101, -121, 5, 106, -29, 124, -110, -50, -48, -95, -19, -124, -87, -32, 84, 22, -60, 99, -34, 72, -29, 80, -49, -15, -126, -26, 93, -117, -83, -31, -121, -53, -125, -21, -4, 22, 21, -24, 47, -44};
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
    msg.setTimeStamp(0.24415348339113585);
    msg.setSource(40986U);
    msg.setSourceEntity(176U);
    msg.setDestination(33781U);
    msg.setDestinationEntity(133U);
    msg.req_id = 27973U;
    msg.comm_mean = 108U;
    msg.destination.assign("TLBKFVNPTWPKMUJAIGECHUARZJQLTDLFKXVCZOWXKJKIDGSLUZYDHTTTEATNEVMINEHOZWSGJJKALCRAOCXWNUTMOWGURKLOMYXFNFLYGSDFCFUPBIUUTRSYNUMQQYDGZDSRCSPGGZXQPQDXVQEVRHMWQFSYZIIFYXRHNSBOMBVOCL");
    msg.deadline = 0.29297059666274183;
    msg.range = 0.6918162586847947;
    msg.data_mode = 45U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8075920235948835;
    tmp_msg_0.y = 0.6263522427101329;
    tmp_msg_0.z = 0.009808831882045288;
    tmp_msg_0.phi = 0.0855714378250304;
    tmp_msg_0.theta = 0.14793056121653392;
    tmp_msg_0.psi = 0.7086243981784612;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LNAJVTCGMLDVMMBK");
    const signed char tmp_msg_1[] = {57, 16, -10, -39, 126, 1, -127, -43, 109, -19, -86, -69, -95, -57};
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
    msg.setTimeStamp(0.4563672992572332);
    msg.setSource(32672U);
    msg.setSourceEntity(97U);
    msg.setDestination(5651U);
    msg.setDestinationEntity(87U);
    msg.req_id = 28883U;
    msg.status = 4U;
    msg.range = 0.07222353465476394;
    msg.info.assign("DCJZCNLYGZAYO");

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
    msg.setTimeStamp(0.5904323819780433);
    msg.setSource(52339U);
    msg.setSourceEntity(35U);
    msg.setDestination(26347U);
    msg.setDestinationEntity(153U);
    msg.req_id = 12411U;
    msg.status = 209U;
    msg.range = 0.7428446975455899;
    msg.info.assign("JXHMQOAVGNYNKTHQOEWIAHIIPQUFSICBDBFGMURTUXLFGYGVXVZHTHSKDWRNPGDHOCJZATJOYBKLPPOEZQQCGCEHQZXENJLUNJYNZCUNVHVJUQPXPXXTWRSZZGXAMLEJFHSLKFMTUDEAZSKBUHTSIIJBQYFDRMISYZNWFDMRTGQRVQMBWMRDULMTFASDDOEKIULSCWCKMDIROLPYWONETKAYGSCFKOOWLRBWZVJ");

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
    msg.setTimeStamp(0.8367427816988774);
    msg.setSource(64170U);
    msg.setSourceEntity(243U);
    msg.setDestination(64893U);
    msg.setDestinationEntity(143U);
    msg.req_id = 17807U;
    msg.status = 91U;
    msg.range = 0.6358317319807415;
    msg.info.assign("KTDEVYHORAMLETBYLBIZARNHWQSILPDNZKVHPTIZUMYTDDEEJO");

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
    msg.setTimeStamp(0.08573461117041803);
    msg.setSource(27037U);
    msg.setSourceEntity(13U);
    msg.setDestination(22570U);
    msg.setDestinationEntity(213U);
    msg.req_id = 10639U;
    msg.destination.assign("FBLCEREKTWBPCNPLUVBYEZYEMNPZSFZIAKOGCDISNOQHDVMVHHRATYMMPQYPGFIGGPOMAGMQWTEVGEBCKNRRLGORSITUQNOEZJJEIKKHDJSTXAFHBLFTWJUFCHNIDOARTQSWOMJANUIWQBTPZXJASSOYFLLWXNJUXVUXCKKLQMHNAXYZDBZDGVGVTQAVWZHHRQKZGVSKRUPELSDEWWDNSYTFQX");
    msg.timeout = 0.556305711714299;
    msg.sms_text.assign("LHZGQGGRHFBTUNBGPXIDERPNKLPDCEANEU");

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
    msg.setTimeStamp(0.5974323941700116);
    msg.setSource(12670U);
    msg.setSourceEntity(58U);
    msg.setDestination(10215U);
    msg.setDestinationEntity(48U);
    msg.req_id = 41309U;
    msg.destination.assign("XXVAMHMJSLFVHIZFEBSXVKNXGAYBFSGMGIGAYHNAGZREBUTTJNWDUEZWCJBKFLETQKQHSNOMOBIMLKCPHPQXOMJUQVDFCDHVOEWPBDXET");
    msg.timeout = 0.7048339379399706;
    msg.sms_text.assign("YBLVUJGEUJNGJVSEUEXVUVXBOMDYRWXYWEQJHFMHGWPEZZKPCCRIIGXBRPPGIZOXRTKPURAFCPEVPFIFZBOGNBOPZLTNQAIBMYJNWZVTDDTBDATMXGDJFQQR");

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
    msg.setTimeStamp(0.867733393879192);
    msg.setSource(13320U);
    msg.setSourceEntity(198U);
    msg.setDestination(13899U);
    msg.setDestinationEntity(180U);
    msg.req_id = 8271U;
    msg.destination.assign("ZHPRCTKKQRCSIOCMTFNRJVSWIXBLYIFOTDWWUGKIPVMZCBHLUCREWPLIVKBXVCRQOTDAMBEAOILNYZOXJSUREWXPVGJHBDHZUCVLAUYIXACWVROE");
    msg.timeout = 0.8109590646140389;
    msg.sms_text.assign("WFMFXQPRMGUXAGNIVBBIOUVLINSOVUPYFUFHXVTWLNXASQRQELABKUYERIPPJYMXSOWAGWHEWTISQTBYSLRAUTRJXNYFNJHQAPRTZACGDEGVCBERIMDJWJPPPHJAHZNBUHNKZLJENLPONTMHIIYYYHBTJTOQEWBCMZDOCCKUCIBKXKCWYFIFTMDO");

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
    msg.setTimeStamp(0.7089869120599551);
    msg.setSource(19098U);
    msg.setSourceEntity(45U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(197U);
    msg.req_id = 19167U;
    msg.status = 71U;
    msg.info.assign("OBYJPXPVLTTJSAHUZSSEYGFYLFDIWVBCFEAODRUABYEPBWLBJHSZZVUXZNNDDRETVZYHPTUKFDQFJGQAHKRWIYACULCONDOGFPXGQOMSERCWWTDIGLEFOHJIPAVBISKXUSLPKDQOFQXBTCYHQUJ");

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
    msg.setTimeStamp(0.4891764567866391);
    msg.setSource(53049U);
    msg.setSourceEntity(148U);
    msg.setDestination(60170U);
    msg.setDestinationEntity(27U);
    msg.req_id = 46778U;
    msg.status = 85U;
    msg.info.assign("PKFFHGMOLOIHGHJGNVJSBFSQGJQTSGDCOJGBYIFUXZIWOMTEYYBQILPOZXZYQCFJWDGAKVUBWIJSTGOTCCSTSPKHUZFEYQBDSUXKMPSCIQGUAUAISUWVPONMNLZEQTTRYGLIVMQFZTJEPVZXHBRRAXMDRRVKVEULXKNDPRAWLYWTFHNAADKOFORBLZBUCELZBDHP");

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
    msg.setTimeStamp(0.6046318896709387);
    msg.setSource(45511U);
    msg.setSourceEntity(141U);
    msg.setDestination(12958U);
    msg.setDestinationEntity(254U);
    msg.req_id = 59707U;
    msg.status = 156U;
    msg.info.assign("UYZSAXOVVFNNSDVFLPPGXCBKOACEKGTIUQYGHZODOROKRJBHNDXGNKFMLISNAVHEQKEQRWMMTBIYSWMKSZHKFVWWPPWJAXGTDKBGCGRSZMOEPJIHBNDLEASIERZFJBTQ");

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
    msg.setTimeStamp(0.6429870604667823);
    msg.setSource(34426U);
    msg.setSourceEntity(212U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(53U);
    msg.state = 79U;

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
    msg.setTimeStamp(0.009461163708783138);
    msg.setSource(1870U);
    msg.setSourceEntity(223U);
    msg.setDestination(58829U);
    msg.setDestinationEntity(132U);
    msg.state = 156U;

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
    msg.setTimeStamp(0.8763412239034127);
    msg.setSource(39466U);
    msg.setSourceEntity(10U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(55U);
    msg.state = 254U;

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
    msg.setTimeStamp(0.6966594778371292);
    msg.setSource(24153U);
    msg.setSourceEntity(147U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(139U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.7298352966353346);
    msg.setSource(5767U);
    msg.setSourceEntity(35U);
    msg.setDestination(35120U);
    msg.setDestinationEntity(123U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.8810118559597692);
    msg.setSource(27402U);
    msg.setSourceEntity(29U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(115U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.11419496875429891);
    msg.setSource(27617U);
    msg.setSourceEntity(67U);
    msg.setDestination(28814U);
    msg.setDestinationEntity(233U);
    msg.req_id = 62911U;
    msg.destination.assign("MRUGCGLNHQUFTJMVYTJMVOLKDEKSERTMKBXDCNWAMSHQVQLBIEEQCUFNTXBFAWGZTIMIZGSKFCISGHCGUMPAMGFAAXLLWWIPFTYKPFIBZSGKVQZR");
    msg.timeout = 0.2693383763866176;
    IMC::DevDataBinary tmp_msg_0;
    const signed char tmp_tmp_msg_0_0[] = {77, 57, 125, 44, -44, -120, -81, 79, -113, -75, 112, -48, 57, -72, 73, -82, 92, 99, 1, -68, 108, 75, -95, 50, -3, 48, 42, -94, 46, -94, 36, -52, 71, 76, 103, -18, 70, -122, 12, -71, 23, 51, 30, 95, 80};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.08385677657118507);
    msg.setSource(1545U);
    msg.setSourceEntity(97U);
    msg.setDestination(49631U);
    msg.setDestinationEntity(33U);
    msg.req_id = 16063U;
    msg.destination.assign("KZFFHXOWTPSGUSBCXCNFQPSAYRTYEHVBMXFBEJYYWEURETYGBVOWTIKKIISDAYMVCNPZGEZVCDLAKFQJCSPVVGRNTWJGMWTNPIUZFPUCPZXGFRORNYXUARYOYIFBENUMOADXRSNZOULBNDKSQRIYIQSFDAPXUMNMDAIDPHVWLZJMVCLJLIGTKLCAEDRGEOHHJLBXZMTQOQDSBQQKJWXKQLQNJ");
    msg.timeout = 0.622522854964527;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.20968849314074012;
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
    msg.setTimeStamp(0.9818374559386388);
    msg.setSource(36388U);
    msg.setSourceEntity(7U);
    msg.setDestination(58716U);
    msg.setDestinationEntity(140U);
    msg.req_id = 33273U;
    msg.destination.assign("MHKTQOGICIMCGBIAFWNUFJURYPVXRVRVPMYLIOBHLMTQYCNBOLJUZOWDKVCFFLFYSUODTMJHZXRNKFUKTOWCNJEKYDLPWTLMRZBCBQR");
    msg.timeout = 0.42181015991297477;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6094241455355971;
    tmp_msg_0.lon = 0.6730168514873571;
    tmp_msg_0.alt = 0.8045411424136956;
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
    msg.setTimeStamp(0.5667353476266529);
    msg.setSource(789U);
    msg.setSourceEntity(106U);
    msg.setDestination(8769U);
    msg.setDestinationEntity(21U);
    msg.req_id = 20285U;
    msg.status = 152U;
    msg.info.assign("SRDNZHLAGOCECKOZYUCKNFXKBNKZBZFUNSPOEMFNOCIIYOVWRVVLSUJWWWHCHYSMEFNQLHATMNEGSEDUWQWMTZXSYDTWTOFZYOJUGGIEGCKHLNBQYXHAICYOQUTTB");

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
    msg.setTimeStamp(0.3242205503675556);
    msg.setSource(45737U);
    msg.setSourceEntity(239U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(146U);
    msg.req_id = 37175U;
    msg.status = 73U;
    msg.info.assign("CVEYQACXTFZEQPYVNJPJAZAPWCFQTQGXKHOKWGCBLXMMBBUBGFFOOERKDBMNVLHVZNOWOLYTTMHWQZCVMEDYJSGWFSATHCHSAOYFIZLLUVIR");

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
    msg.setTimeStamp(0.47934176724374444);
    msg.setSource(58122U);
    msg.setSourceEntity(225U);
    msg.setDestination(18804U);
    msg.setDestinationEntity(48U);
    msg.req_id = 59540U;
    msg.status = 90U;
    msg.info.assign("LLVJENOCMEVIDAYWCZSZZETDCJZCHSPPNGUJUAELPOZZAABGVAXFAFYVBOSUONIGEARD");

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
    msg.setTimeStamp(0.22326007450500673);
    msg.setSource(65122U);
    msg.setSourceEntity(245U);
    msg.setDestination(64168U);
    msg.setDestinationEntity(48U);
    msg.name.assign("JLDEOVXDLLOFESPEDZFFITAMAJIPIGKYBSOFUXXBQVSVEGJPPAMPFYWBYUXUIOLZCCVRTRKNIWZIPDKFCGZFWRVYELOYJOWDXTURIQAMQQSWNBZUMUENRCXZUNWROHYHHZADBGTRVTHAJBIXMTWCFQEUAKYZBFLSPHKBJMIGAWLFSHXPQCRCOHNQWOHGDSKWNVXLNGH");
    msg.report_time = 0.29053506357716574;
    msg.medium = 172U;
    msg.lat = 0.8632138836429587;
    msg.lon = 0.6982716771210967;
    msg.depth = 0.24394655117819686;
    msg.alt = 0.26289213376522513;
    msg.sog = 0.29049629119057574;
    msg.cog = 0.9299945580905254;

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
    msg.setTimeStamp(0.7882228584785959);
    msg.setSource(40701U);
    msg.setSourceEntity(104U);
    msg.setDestination(42952U);
    msg.setDestinationEntity(182U);
    msg.name.assign("WVUXVMYVLDDNOXIJUYAKUECAOBYXTFMLZJVNPFTARBEQZGVWKMKPXSIOMTBTTWRNPWTEETLFLRSYNCPQVDKGJQULHDGGKZXUIWCHECJBZHFKSEIPRASSLROIVOOQGB");
    msg.report_time = 0.9086223402576757;
    msg.medium = 82U;
    msg.lat = 0.7443951532495592;
    msg.lon = 0.49979737251942846;
    msg.depth = 0.008211344460418046;
    msg.alt = 0.11648804437190008;
    msg.sog = 0.10961893258394051;
    msg.cog = 0.23411578664972976;

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
    msg.setTimeStamp(0.933448062530837);
    msg.setSource(44355U);
    msg.setSourceEntity(135U);
    msg.setDestination(23619U);
    msg.setDestinationEntity(18U);
    msg.name.assign("EUQHZKRKIXLDFOUYCMHQJWVGATCTMCBISVGMUYELXFUZLNAUPXUKIKHBEHWNTOINXAREGYHGTFVLYULOAPKYDKOGNGQQYNXGXBEAPFMATZMGKRBCGSLPFXMJVZSOSPUDCNREKCBXVBHSSQLEGSTSHOJVDJQIM");
    msg.report_time = 0.17760778357737672;
    msg.medium = 63U;
    msg.lat = 0.8183952010912036;
    msg.lon = 0.36198821940817005;
    msg.depth = 0.8202078443776463;
    msg.alt = 0.8025245300020956;
    msg.sog = 0.5530576720813093;
    msg.cog = 0.5866631519649849;

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
    msg.setTimeStamp(0.22661944528668043);
    msg.setSource(53210U);
    msg.setSourceEntity(69U);
    msg.setDestination(33986U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.38407318995469386);
    msg.setSource(29532U);
    msg.setSourceEntity(11U);
    msg.setDestination(46364U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.820345628509313);
    msg.setSource(57002U);
    msg.setSourceEntity(94U);
    msg.setDestination(6954U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.350532371635371);
    msg.setSource(49559U);
    msg.setSourceEntity(19U);
    msg.setDestination(52205U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("XIIKQNWWJCVFNYZBNVBDIMZHITELLGRSAIQHSECMFUXFCHCTIQYYKYVJJJVBAXNEA");
    msg.description.assign("ZFOZZPFGPDWLXMQQHSESNQWYKAECGYJMKYLTXSPOXDMDQMSTQQCBLRRCBLALENFIWWRZRXEVGKFHCWNCP");
    msg.vnamespace.assign("BNLAGVYCMEQSLCPEBXGPVGXLLYEGIOOLUMDSYRBAWDHFOPXVKZKPZBQIRXVBQTRJIHOXAFMWGAUAUKTNOUNCDVHSFCEKIRAHIMFVGPBQDPQHEWKXSZUZMZSTUAEJGFWJGYHOHMYPOCZYDUOCDAVJM");
    msg.start_man_id.assign("QXYTYRSQLWOYNHGWHJLYZXDWJWIGVUMATMACFPMLJKSSVGPGZQGSFMPVLQEUKBNFHFBRPETIVYWCTGHFOIZHTUDCDANCUXQPBSDARIPZXQRSOUNOLAMHLZZGRVBPFZJJROVWBTCQCGFBKJMCYOIFZDIRATKYNXAQXXVMAVSEKNRDULCTDMFQMEKUWHJPBRHVELBOA");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 133U;
    tmp_msg_0.step_number = 87U;
    tmp_msg_0.step.assign("JKDISOTSGPWGYHZVYXOVZLTKKFEBDUYWDOLHXXTSCCUSBZQVMAYFZWKOOYHZETEDIHFNUQJYJEWPPMJUGLLNRRPQXVZNDUGUCEQSWKKLQMYARMJVJCLUHBJHHKRAXESWAKJL");
    tmp_msg_0.flags = 50U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8917608828166051);
    msg.setSource(42963U);
    msg.setSourceEntity(5U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("SGQXGNYMHDKMCULIBRIZADTYCEZHCFKXBAJBTBPYPCULGWDUOIHKFUBUOMVJNZYPMHTQNSAVLNQNPINWESSIJDSQAORPYEYJLEWYQLYMPORUYETZJATBAIWJGBSQGYXCKQROCROVNATMFSRRHDXRDEFVGOTMFQOEVWITZPWNXSVDTXRHKFWPVGZUGIUZAPSL");
    msg.description.assign("GQTPOQCFFRZYYOKZJDCWKGTNFXPVNPBLIXBJEBJFDKEENJQ");
    msg.vnamespace.assign("CGBCYDVLUTKXAYKAAGICPLGWSDHWMFNZRPYBMYJYTGYPVQNBUEONJVRAZIVHWEPNDCLINTZQPOZQNEJHTWHZUBEMLLPXJGXVF");
    msg.start_man_id.assign("CUDFHMOEZADIQYLZRPLTEKZCQM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CMICTBQRCMYKGGUHNCDNMVHGEIMKAJLRKRYUSLVVDAJCQOFNNQSPJVRVPWELBRULFPKDLUFTETOPZMXYJEJJCOZQNRTOQBIXNBKIELSNUHPRGHGEFCFEJVHUWOIQGCMBFLODWLYXZAAIZBXSGDVDZDASKVQUIIHAXSZMFGJWNWXYBOTWBPJWMTFZYDYGOWF");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.02813729504156004;
    tmp_tmp_msg_0_0.lon = 0.018106906595032557;
    tmp_tmp_msg_0_0.z = 0.7669179442302712;
    tmp_tmp_msg_0_0.z_units = 111U;
    tmp_tmp_msg_0_0.speed = 0.9563641382121042;
    tmp_tmp_msg_0_0.speed_units = 239U;
    tmp_tmp_msg_0_0.bearing = 0.29870459445011144;
    tmp_tmp_msg_0_0.cross_angle = 0.7899544393451314;
    tmp_tmp_msg_0_0.width = 0.6491450826426968;
    tmp_tmp_msg_0_0.length = 0.8897038112571117;
    tmp_tmp_msg_0_0.coff = 3U;
    tmp_tmp_msg_0_0.angaperture = 0.9640110174464581;
    tmp_tmp_msg_0_0.range = 49044U;
    tmp_tmp_msg_0_0.overlap = 59U;
    tmp_tmp_msg_0_0.flags = 112U;
    tmp_tmp_msg_0_0.custom.assign("CLEJVTDJZNGYOTQHMFVRKSTOLHPRIYRXOXRKKPZVPQEUDRYEOAEVDEKUALVRUQOBZKYNVVAISMSOHXMJALCDKAWUADQWMNLPGSSPWSGJSMSFUHQJPNYXDBCNHCQYAXYLOTFZMEPIFTGGOCWFRHDVGGZARFNLTJNHSXDTYDILIWMNYCIIZIWZFFMGYQWZWUEGXUCKQPPDRIBHVJETZOWAEG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DevCalibrationState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.total_steps = 45U;
    tmp_tmp_msg_0_1.step_number = 60U;
    tmp_tmp_msg_0_1.step.assign("XZLAGUGKDFFIMQABHVR");
    tmp_tmp_msg_0_1.flags = 251U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ReportControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 208U;
    tmp_tmp_msg_0_2.comm_interface = 210U;
    tmp_tmp_msg_0_2.period = 2056U;
    tmp_tmp_msg_0_2.sys_dst.assign("TFOIYJVGHOSCUVAZEKNXHCNFQSBALQLNFRKJWLDJDJMRWQKFVWJUXIHTOMZVETPSURTOAZXEGTGYPNSHYTIBCYGKJDMDLQRMVEWMVRNKIVLTXZS");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::IridiumMsgTx tmp_msg_1;
    tmp_msg_1.req_id = 49445U;
    tmp_msg_1.ttl = 23206U;
    tmp_msg_1.destination.assign("CTNWSGRNWJMORJTQZYVAFSTIQGQXKOPJUZCHBYXEKXLXDWSVPUVCQPLBMCJRLSFKCBTTPHYSOQXYENUIWMCGGZRUBFBVOSUUALJNERGFJOPROLTQQXECNGDDQXKJBUMVQKQKSNTLEWTEMSZZHPGHKPYBAHMLGOJCFNGCXIWFZAIFCFMXAUSFUMWHWARVYIPBDIKRWHDYIBADPHODKRSJDWDLEDATFEZIOITVZPROGJMVKYVVY");
    const signed char tmp_tmp_msg_1_0[] = {126, -115, 17, 83, -70, -15, 31, 14, 79, -6, 97, 66, 56, -43, 109, -52, 116, -53, 30, 94, -121, 68, -48, -59, -7, -118, 89, -12, -33, -49, 119, -101, -8, 26, -73, -72, 87, 73, 10, 119, 21, -28, 93, -70, -78, 69, -125, -120, 11, -117, 82, 38, -26, 46, -95, -124, 72, 94, -69, 42, 41, -111, -95, -95, 5, 125, 80, -76, -20, -114, 48, -116, -78, -30, -59, -116, 111, -91, -24, -126, 49, -56, 16, 19, 94, 29, -10, 115, 36, -65, -117, -114, -48, -36, 120, 116, 112, -58, -101, 25, 62, -51, 0, -27, 22, -67, -113, 67, -33, -53, 69, 30, 60, 22, -39, -115, 74, -14, 78, -31};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.5173731543634986);
    msg.setSource(30097U);
    msg.setSourceEntity(192U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("XRMZDRGYEWUCLLWDQTANRSKVONCIVADMYBNOXMLGPEODPXEXXRSQFFCDEPXETHYIAILUBFAHTIVCWCQQONSLRUEIDJOYSSKZRKXJMXNUIWNKJHIWQCGZPEFTHEBHDHOBQBFZBBEZVVWQDTFTNCYMGIRTFHGOUMXNYBKAUPLPJLOPSBYWRMSUKZJJVJGSRKSAKMLKVMHGO");
    msg.description.assign("EXOGHNGACLXTGUWTEBMFYRCMSIDEDWFANRMNUERTUDEKADYKBZWOJKGZHFOSLOICVILBCANNEVJJAXTYMSNWCDEBQSFMVQIZEOTBLHWVSLFZBPPMTUUWOAJZG");
    msg.vnamespace.assign("CCYUWTTZXQGVKUKGSVXPIOPGHPIKDFQXMKWTFUZKDJKCBNOCYVFZSWROTAJHSSGYNTMLOPQIHCTXJQYKZCMPXUYBCRZR");
    msg.start_man_id.assign("WERZURFXCHASZSKQAKGISVCDPJZHSIQCANXISLEXGUNDDEGNWYFOJTCVOHXGRVQQEINRUORHMVYZLDUFLEZJKBQXNBHTDQYBJGAZEHFPQPGSTKFFVBRMBUJNKOVTATLSYZCLOUWXQJDOZAOWCYZARCMEUZWVYLMPIWUSIRKAYCFWYROM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KEJKHLHUPBAGVZMXNQKWDYOCVQODJKTTQWIT");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 16933U;
    tmp_tmp_msg_0_0.lat = 0.9829383160763444;
    tmp_tmp_msg_0_0.lon = 0.6237203690031865;
    tmp_tmp_msg_0_0.z = 0.19819853487536176;
    tmp_tmp_msg_0_0.z_units = 172U;
    tmp_tmp_msg_0_0.speed = 0.955700415431661;
    tmp_tmp_msg_0_0.speed_units = 248U;
    tmp_tmp_msg_0_0.custom.assign("XITAVUYZEPLGZUXWUSKGKOTLCGIYJTYTXNEXIBEPWKLAMRSKGTRNOCFSJSTEQMBVKPHSMVBDZFCUPEYPCGYLBZRKCQIICSAQPVSVMZLIPBHFNRUXBHFTTUJRIQFSNTKAZVWOPDBAGODJOCLFODJEBDWCXQEUNYXGHCWHNOIHWWKJYLWVULIQEHXSQKANKAUZWAPXURVDYMMMNQTMJDMLEHJHPWGLANJQFCVZFSMYRDZDIHYBNOZDOFXO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EHFKGAWVLXDNPEYGUZUSHBPVLYZBHXTLUVWFYJPFCCBOCJDTLZKFEMHWLRPOSNOMPHACNDAIFTIQSIBBOROTPSBUQDZAUCNPUKRNXMPLMTSDWBYJRCEMSEVJKBRRSXGVIITFIWAPJLFENWRKXAIGHTAKJWYLCAWXNCDECQVORRMJAXKZQGDVNEGSCUIWLQEMYFDDXGBPGZVSEOMDKQUUHJNQSHMBYXVHZFQKYZTZIZGUXRQHMFJVQ");
    tmp_msg_1.dest_man.assign("RIVEANLVTHRKBPCVROYMLCYUDXOTQIAJTYKHEASKJLZLJAMMDWNNEAUEFAWFDPCQQTJHVMJQOXSOHFKAOHOSFGXKKUUINVFIHFLEXZCIOGZTDOCLZWWOESGZSDSPMVLVABUFPHPPSRYUZRGVUERBFGPLDEZCSLBTFQRIEBVLNYKPPWRBXGCJUPTQNWDZKN");
    tmp_msg_1.conditions.assign("GTYZRJHRITLQGWRHJQEBLAKONQYLKZQRECHIKEZMPUYJWHEUWFZKYDTITPBNTXRPQPXHENESMQYXWDQHJUAZFUOOKWBASFQPYVBFYARMDLD");
    IMC::EntityActivationState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.state = 44U;
    tmp_tmp_msg_1_0.error.assign("XSASEQVWWBZEMVKKUANTRWVFNBKOTZCRHSBXDUOVHRSCCOTHVEHSIFRUSAPXEKROKAIWERWHURGVNNPRHLHFOGQINSPUGLXLTFGZLPNLIMAYKIBJNQGLQUYZIUXOVPDAYXPTDMQXOCFBDBOCWIBDXHXZQUAFGQDAWNNYEEJEWSADQTFFBJMGKCUJJZTZZFGEZMPVKMEHLCY");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8243850762452714);
    msg.setSource(11736U);
    msg.setSourceEntity(137U);
    msg.setDestination(40419U);
    msg.setDestinationEntity(54U);
    msg.maneuver_id.assign("LUZGANNNSCABEJXSCUXODNQTTIMTGNHPWIWUWGQCDCSBMLYWMAJBPSJCZPGBLWSRLJWZVAVVZEKOYDNQYLBYFLCDAIMNRVIFUXOBMPVLIKFTTVSOPSNHGSDIXFCRUJKRRCFVNFGANQBOPRKZAVWEFTXZTWCZHMOQUEUXZTDOGRMEZWFIOUDAQHJJXLHEAKFIKVYKHYKQEIHWTSJUYQRDJPBZPPDHQDVGEMOAXLCTHSEI");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.14798934078697912;
    tmp_msg_0.lon = 0.6555269102456966;
    tmp_msg_0.speed = 0.27653367121112826;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.limits = 108U;
    tmp_msg_0.max_depth = 0.18683921158102001;
    tmp_msg_0.min_alt = 0.07792150381052754;
    tmp_msg_0.time_limit = 0.528391984296209;
    tmp_msg_0.controller.assign("UXXBOAKOEATBJTKJEEGLCDIKFTUHNMWEIBHGXCOVVJBEGODMO");
    tmp_msg_0.custom.assign("YSXPWAPMGZIDEPFDYJWGNCQKSSMHGWKRUUUKIVFJ");
    msg.data.set(tmp_msg_0);
    IMC::DesiredThrottle tmp_msg_1;
    tmp_msg_1.value = 0.6171242789302173;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityMonitoringState tmp_msg_2;
    tmp_msg_2.mcount = 225U;
    tmp_msg_2.mnames.assign("BZESNKMVSAMRDTDTRJNDCAQHSLCGHYAGPQESCGJMPQPPQXHEMXVQVDNMZZXOLBTWVCPMABUNHYFFZYFTZCYFJRBMUZPUM");
    tmp_msg_2.ecount = 237U;
    tmp_msg_2.enames.assign("ZCMQOLRDZDHAMEMJSDEGTNWNVVXQTDTJGKEWSKKNBHPUBSPQHBXATLVWZFYFRKTIBKFIEDDCDBHSPREMAQITYGVIOPJSTWALYKVMILKULCCZNOLUNAEVWFOOFAAJUJNXBKVXDYFVGQFYHJHUMGXMJXMWPFENRSRRUBCJGYCCAVLQNHWZCSHZQPCXMGIYRASFASUOLNOLQIOOQILUENYEYCIEPRUXJPTGZZBRUYHBDVQWFWMRHBOKX");
    tmp_msg_2.ccount = 58U;
    tmp_msg_2.cnames.assign("DOQXJIIBRJXWOETQELBSJFZHAQMPQJAAORYPGNJKTPTKFSVEIDORHPKDZOXZGZNLUBWTTWYDYURVMIEBKJWJZVSNZMXFWUQNFXSSOGGIKBRCJLVVIEKHUWHSDCAYAKNZHSYQAYDLDCMCDUYPFMNAJCEBLVCLEOUIZUJXDHLGZCXRPMROIMLKFSSFIREPRPCEWXWFQGG");
    tmp_msg_2.last_error.assign("EZWDFOOMCRYVIHBLUIPZTGEAMNZYZXEAYCTMPMGVXLOMPVFWXEQYKEGHCWDARQPYSRRFIJDTPBQTFNJJVSNITBPQUCWNGFCGTJYAOAVHKICCFYNEAOHXBOKSDUZESDSJUABUVMXNWJNPDUVAWYLEMIKSRPPBQVALDWKQWRXZIRIFOSBWJCDJELDQZKHLFLRQUMHPCHUQHURNGOFKDVK");
    tmp_msg_2.last_error_time = 0.955863602453211;
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
    msg.setTimeStamp(0.9648639267877605);
    msg.setSource(19359U);
    msg.setSourceEntity(204U);
    msg.setDestination(28095U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("ISIDXMPXAYJCWRMHELOJRFQNRO");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::NavigationData tmp_msg_1;
    tmp_msg_1.bias_psi = 0.4795318599876739;
    tmp_msg_1.bias_r = 0.47968470033524413;
    tmp_msg_1.cog = 0.7392343536998226;
    tmp_msg_1.cyaw = 0.240014656419818;
    tmp_msg_1.lbl_rej_level = 0.28337988349235643;
    tmp_msg_1.gps_rej_level = 0.9687069327465437;
    tmp_msg_1.custom_x = 0.05123920623591849;
    tmp_msg_1.custom_y = 0.6189166494953844;
    tmp_msg_1.custom_z = 0.6884035993015885;
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
    msg.setTimeStamp(0.22349881025899587);
    msg.setSource(4232U);
    msg.setSourceEntity(171U);
    msg.setDestination(12386U);
    msg.setDestinationEntity(96U);
    msg.maneuver_id.assign("FIWESUQNFXVFHQEEBTXXZFKBARXZDOQBIKKWWYZEFQKCJFGMSNMICYTLXAHNMGSMQJTLWFBGJHCWKDKVDPYQHMACAGOSOZRGDNDEUKDSIHIYWTCVLRLONIMGZPMVZKCJFJRGCHWYJURUAJSCGSOBLWZXDTVKNXIJRTPJFXBBRUTEUWAVELYUVPMNHPRZHHALUUNM");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 20314U;
    tmp_msg_0.lat = 0.9749832542617546;
    tmp_msg_0.lon = 0.4947123009101303;
    tmp_msg_0.z = 0.28398297984535814;
    tmp_msg_0.z_units = 104U;
    tmp_msg_0.duration = 61936U;
    tmp_msg_0.speed = 0.663934214099882;
    tmp_msg_0.speed_units = 196U;
    tmp_msg_0.type = 140U;
    tmp_msg_0.radius = 0.4166339947325989;
    tmp_msg_0.length = 0.009711421863702108;
    tmp_msg_0.bearing = 0.9951253982173606;
    tmp_msg_0.direction = 9U;
    tmp_msg_0.custom.assign("MWLPTGHTMETDUBSTBUZSQCCJYQUVIWZMHLKEPCVWOOZJGKQPMEQUVWGSXZBREGNDUQA");
    msg.data.set(tmp_msg_0);
    IMC::YoYo tmp_msg_1;
    tmp_msg_1.timeout = 58495U;
    tmp_msg_1.lat = 0.3568963134391938;
    tmp_msg_1.lon = 0.5877273849315022;
    tmp_msg_1.z = 0.9505352235001212;
    tmp_msg_1.z_units = 38U;
    tmp_msg_1.amplitude = 0.175242986286544;
    tmp_msg_1.pitch = 0.7224252535345359;
    tmp_msg_1.speed = 0.429600381501579;
    tmp_msg_1.speed_units = 74U;
    tmp_msg_1.custom.assign("DBBDJUEYSZXFGBQSTCRTKNFRLCBZPLZJPQDMMJNSOHGOYAEWYMWOYYFQAKIFYWNZAGCCIEUQJFHQHBJZUGNXLTNVESLFCBDAZTYKMSNEMTMDNVEORDOPUWPGPVJUHIKZLCTQGT");
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
    msg.setTimeStamp(0.7614590193321522);
    msg.setSource(57903U);
    msg.setSourceEntity(130U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(72U);
    msg.source_man.assign("ICFJPQDUFEHSTAQKYOSNRYWPLBJAKPGIEKLDOPXWIITGUCMVGQXVHXOCVQFSYYOASZSENJRYMHKJCOSSLSZLQOQDXVBOCCVNZFTASZFTXKDLUBEVVUGPLNLHJNHBQENZAWLZZZKVFBDHDWRAHGYUMJYUZEMMNIFRNPGUNPFPXAWWD");
    msg.dest_man.assign("HXJGNTKTDPQRPPRKJBRUOISGIEWTLXZENWQVNKCSTZQQPTYZZHSBFJSQBZDWJZYJUFZRBXMEARPAGYUNEMPABFJMBECKOVINBPQLDXFDRCRXWGHMZTMHDGHOAUCCHMHDXIPXXTBILWXTKLWIBLSVFSYKPFSKGJVUFWEDNEAOFYKACFTKVLEMNIIUVPVLWQW");
    msg.conditions.assign("ZAJAGAONWLXVVFQWBEKAUWHBQHLELSSZGVGSIWCTTZQNMISEYPDKNFTTPRSTMWRACBAHYTZIZFYPKTQADSDCTQBXRIJVVEGMIELHYV");

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
    msg.setTimeStamp(0.18308464889148923);
    msg.setSource(5517U);
    msg.setSourceEntity(106U);
    msg.setDestination(56839U);
    msg.setDestinationEntity(186U);
    msg.source_man.assign("TIUDPKXSQLTNEYIZWJWWZKZIILHNFHPZGNPYLLCUFMXYRDJJVFYXTXULFOABLSAPBEXVCQYHCJOMETSGVDERZJMRZCCDBIQUNRLDWWHBEAGTZKIJFRCYZPVFNPDQBAH");
    msg.dest_man.assign("ZOACLDRMAGHPMLJTRCIYIROGOUPLBGNQUEFYMXHVUCYJFFWYSETDNZERSISLGICASWJLONPMGFZPFBDHVACQOBTCOXOUCEXJAQJMYXQQZZEAVMVTKIDTFKPKJMWEGIFKRIDEKROHUVBCNUUZDQXDDLKHVKBTSWYJQGCRUETZMLNHXHZWYDGWNHSXFQLBWSUTYX");
    msg.conditions.assign("DZXAENZEUVXSJQRFZFOPOLHIAHRMNXENCPCRGSWDOJXANJTYEXYJKIUPTATSBFBTDCYIH");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.8393248534680879;
    tmp_msg_0.confidence = 0.4791444629041657;
    tmp_msg_0.opmodes.assign("PEUVTEALHBZZ");
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
    msg.setTimeStamp(0.9521820997042206);
    msg.setSource(6066U);
    msg.setSourceEntity(89U);
    msg.setDestination(56079U);
    msg.setDestinationEntity(25U);
    msg.source_man.assign("WUFBDMDKZIQCKBRERKPAGBDQBODZHPWHJJZJPYOINHVYXCGMAQUSUQBH");
    msg.dest_man.assign("WLOBAFOYMXGSBBDWOZDYCPRDFLIRXWWQSZRU");
    msg.conditions.assign("OCWEMHBUAJBFVOCRKXIKUWSTRUGQXFKIAAMZTTSIBNTGCVHQWKMFMZPINUNASLENZXCYCYYEXVPFMUOVUWFRWNXONWJKLKOZVEIFDRPZZVOVGSZARYSKHXHRLLQDOGYSCAUHGFYHPULXTHYQBHYLWRBIQTBVGJTEQPTENUSDRDDMGWPQJJZUGAD");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 9U;
    tmp_msg_0.max_depth = 0.9244587702023828;
    tmp_msg_0.min_altitude = 0.4735726644637299;
    tmp_msg_0.max_altitude = 0.9526913443027785;
    tmp_msg_0.min_speed = 0.28654415103693087;
    tmp_msg_0.max_speed = 0.8593785514896591;
    tmp_msg_0.max_vrate = 0.3669216429303117;
    tmp_msg_0.lat = 0.6234632929613964;
    tmp_msg_0.lon = 0.9374865872981183;
    tmp_msg_0.orientation = 0.06680008327516596;
    tmp_msg_0.width = 0.5380614948703697;
    tmp_msg_0.length = 0.3226949460653491;
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
    msg.setTimeStamp(0.7588670851238413);
    msg.setSource(13797U);
    msg.setSourceEntity(143U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(26U);
    msg.command = 202U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PRRWSLLUWQTXZUJVYSZXQAMWJMTILWFIIADNSQNWLOJEYFJYUBKCKCAWENPBLLKCRMCSFTDPBZHCEOGGVYZQJHTXDWTBXAAVLUOVSOAEBDWAJSMCNGAQLMZQFJJKGKQISVQZVHCPDTKPWSDOUICUJYWGNHFGCMMHTXYQMZXINNYMREUX");
    tmp_msg_0.description.assign("SWIVCYWCPNTWSVIYYVYHUJFMDMGUVXKBCRTWFECTJBORFAELNIIPNQGHOUBDUMDCOXESSRFKTNIZPMZGTPTRGNJFWYEVNQKBSDANPAGUCXWEHRCWJNEZHOQBOBQPJKGKLDHHIOKMUOFXDRYFHUJWJPPXQJQGLEDHDHREJZAFZLZGKDSPOXBLBZZMWWODLKXIVLALHPUUZQNZEIXVVSXMJMSSRMGAIQOBTCTVQVA");
    tmp_msg_0.vnamespace.assign("WMXRHVASLQWKZOILNHWMTBISKUOKUNEDTROPKQCEOXEQYYLF");
    tmp_msg_0.start_man_id.assign("LUDOLNDIWAKBAVMSCTLPRXQMYBPIVBYQTMJKGCZQFMTKYVYXEHXWOFURGTHPRBPJZVKYWAKMZFSIYLOSEZDRXZEFGAQLQJADKRNTKUSZFGBHFIIWOUAWRHQYPARCCAGPIYXDSEZTJLJINWZVTDIMDOXZYXCHNUNNUFABUSMZOBC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RDNVXLXBPGKQBCZTPDDVCWSUHGDXYBRPBUOQYJXNDKGZTFVBFJXTWRBAZSAAYZEDZMWRUSYRCF");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 18842U;
    tmp_tmp_tmp_msg_0_0_0.flags = 125U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8115177156358234;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2001533788997284;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.03736981260305228;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 253U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.42064502772498524;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 76U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.6550001627704882;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.09080928165283586;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 254U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("QLNISVNSKMUVVMDRZIBQHVBEERDPXZNXGZABJOATGAJJTHYDBXNCDQWUEQNRIXJVLNYWAIJSKPBCKHPODSYMPLZWNIGIRTEMWFHCMPSCQOISRJXWXKBYMPQRAHJXOCMZJXDVCDKOFFVRMEZSEYXWLGELROCAXLFLVGOEHBLUKVTSOKMATFBHYTCHPDFYLPZGWUOTGHUAY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("CPTXCWCUBBQRHUXQVRUEHDRETVVTKHOSKTRMZAYENKROKOMLTTYYZJZUFFYMNIZEQAYHIKUOUNLXLRDVKMXWLWNWCBMMCMXOUNWGFYPWPYLHSGLTDSATXIWJDOJDEKXWRVJNQRGEHYPSFVWDVZPCJUKGABLVUBZTDZQOFOCFIQZFPIFLHGABNHYQMBYMBAZFSBSXIJCPKVEZECORQEAGTDREBHMPSGS");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("CIXRTTMHKTBCMJOSKASVYUQQSHOYRTCWFNJLXHZNCGDGQEMIDEJKKPJFATXBCFPFIRPRKMLOPSIUUWXLAQJDYNODPTPXGZFBSACMLKRJMOCZAYCFNHNMXEHBHHOUWGVVKNFAUQWNNVLSDREWZLSKMAXJVHOESDSBGEGGIRTEJFPOYREZBAFYYZFUBXNCAQRBUPGETIPHTDLMVWVPS");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("ECGWRXUCZTCZAYSXFNPPFKLQRNIQPRDHDGDYPYIJNXBQKOWEJKZVOBNAGCUWNSNVBLIFTACXQOJQMTGOYAADKRUNMA");
    IMC::SmsRequest tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.req_id = 64553U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.destination.assign("GTXIKZJRKGASADEUAPOPNNEBOIYVPRFXVHDWHDNFVLTLKHRUMGOHYDSUWFCTDFWJAVELARKFXMAGSHAWUPEKBSTCEKNZIZVBCNUJPZIFGVWHVBPVYQGOTTA");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.timeout = 0.02335424143467113;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.sms_text.assign("NWZAYLHAQOSIVSCBDOJSEHAYRLBEXNUJGKPWGTSDBGWFKWNRZUKZMGDZRBKSTMUHCIHTIQLSNDAAQKVVWPLCOQJVMOUJTMAKPZNQFBFCONYEDBWPCVFJCCJXGTZKFUJNHRHHQEXJPRKGFHWMONKIELMYXADSCXOLGSQXXBQDSUGMIFYPEZZPLIYYVWDXIWFFUAPRTBGTRYCWMFNNBSUAUIKEBV");
    tmp_tmp_tmp_msg_0_0_1.actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.995055745659614);
    msg.setSource(39520U);
    msg.setSourceEntity(84U);
    msg.setDestination(16028U);
    msg.setDestinationEntity(140U);
    msg.command = 238U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AAXDWIVTTMDYOZZLBUQBNOYRWHEJNMTAMCYTGPWFJZVYFCCEVDYZZIWOFHHZJTEDTCBFBRPMROAPNHNLQYJJLLPQZELLVJULVYXFDENBIFJTXMSAHKNQHGVMPMXUXGNWTXVGBSNUOXDSBCKHRSVKURVTYYWSUHORNLPKK");
    tmp_msg_0.description.assign("MSSRFNCEATOUVBLVYVJPFAGJPCMFOOHZFDRGSQUWXVGDISWQSYZCOWYDYOAQLASHFMGZTLMFYEZUMEVMFMLNCMUDKZEIGXZBAZGVPJOINTXEAYKFPWHECJRYHWTIBJKK");
    tmp_msg_0.vnamespace.assign("YKSDYRUIBFDGNFUFSWDIAJFJFBOXVHBFHHNSLEFPJJNFBTOPITSGUARTMWZOIACJBYGWGYYCCRLEBQBAWGEBXEEFPNJRCZKHRKMGWMIVQPSAQEGSJAWTILWNNKGUUIUZOJEXQHCYIZNNVTLMVDVUHRACZTKDPSOBUCWQLGVDXLVRILCAPMKWVPDAWXMR");
    tmp_msg_0.start_man_id.assign("MIHKIDVHPUGFZXVKOLSVJRKBNEGUWTPXXPFCSTUZFUYPPFUMIJRLGKHWKNZQNAVBLQOUNOCDHRMAHVEFHZOCPWSTSECMINENAZQYSVBGTTYNQAHLNCPSEKUQSCOJJDYRFWLRFHSIBVOQJGZMYNTWOUBGKJTNXYJUQIDWCLEYWAZMXCBBJLPIGWDBBDCCZKYVEWQY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FANKAUIRGTLNKORQWFQQNJBSVHMQUXCUGECJLLMDHIYDAWYDGXNQHYVFVAETGWETVHNLSRNDYZSFFCEVMYOOPRWMSRKYIIHOZWZUDUYTKMLBFACUPTGPKPWBETNZEBQOHJQRDFTCLRCZOPJXEBXPKVNZQNA");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.889662716037904;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2985405871209107;
    tmp_tmp_tmp_msg_0_0_0.z = 0.4590019616871469;
    tmp_tmp_tmp_msg_0_0_0.z_units = 223U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.045907441637069946;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 228U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.8259825499202782;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.890104685337411;
    tmp_tmp_tmp_msg_0_0_0.width = 0.8220646423020521;
    tmp_tmp_tmp_msg_0_0_0.length = 0.6646040991214524;
    tmp_tmp_tmp_msg_0_0_0.coff = 154U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.5741476884218082;
    tmp_tmp_tmp_msg_0_0_0.range = 19592U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 205U;
    tmp_tmp_tmp_msg_0_0_0.flags = 62U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GEDQWKNITSGNLDCPZNVLJNSIAYVCCNTEKQTGEDAIWGBOLCUZRUZFQLZDGJWBAITZEGFDDKBXSU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Loiter tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 3908U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.5118550389232367;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.34444752091021513;
    tmp_tmp_tmp_msg_0_0_1.z = 0.9068789188908317;
    tmp_tmp_tmp_msg_0_0_1.z_units = 170U;
    tmp_tmp_tmp_msg_0_0_1.duration = 11896U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.9717277127742523;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 188U;
    tmp_tmp_tmp_msg_0_0_1.type = 189U;
    tmp_tmp_tmp_msg_0_0_1.radius = 0.708897021128253;
    tmp_tmp_tmp_msg_0_0_1.length = 0.8834272318957677;
    tmp_tmp_tmp_msg_0_0_1.bearing = 0.0903044106238482;
    tmp_tmp_tmp_msg_0_0_1.direction = 214U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("HOPDGEIECSRWNEJHUTPBROSJQWEPABBKLCDHJSZDXKKMTJGRYRUZYUPTKOXXIKVGGMXXMSZBUWQLANQFJRQABSHEZEZZWFKCPRZNCDHNGQMKZACYGCWICSYITOLFVOJOQVIVTBRITPZRITSAXNOUGLXOABVTYILHDPDJDYUVNWQRAKUIYL");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EAEBODEYLQDGCDVPXYSKDOSPLLGSRJIFCWFMZHPDUFHXMISXSDTGJHYJFBORWQSBXAYZMEBIIWMJL");
    tmp_tmp_msg_0_1.dest_man.assign("JRLFZGKMCGYFGDLACDPBWZYNBNGSMJIOKIWUGJRSZTUXYZUSTAPXVASLRAAIVAUWVADVZX");
    tmp_tmp_msg_0_1.conditions.assign("DEMNHZFQVEOSCLWBXPVFQDWKXXROTOOIQVQYMGIOUJAKVIFIPWJPCPFPMTLLOWKACFGUCSUGPKEWRXGOAHBGSKRWYZUDTENCETAEINIRYYHFBKYZNNBXWHHRBQLZIRARJXKANS");
    IMC::ExternalNavData tmp_tmp_tmp_msg_0_1_0;
    IMC::EstimatedState tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.3384668300585433;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.5618629986398516;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.height = 0.879510956306383;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.8450109381967038;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.5584638099147754;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.36664173119798926;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.phi = 0.09636209940517138;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.theta = 0.04685596673672443;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.psi = 0.34605211613950704;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.u = 0.8647013718725223;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.v = 0.0965823345604424;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.w = 0.44824760793762664;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.vx = 0.002295762295712045;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.vy = 0.7374297451202405;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.vz = 0.7554368770692665;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.p = 0.7038670092773731;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.q = 0.9207725484557786;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.r = 0.0048081587897530476;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.depth = 0.25842061378078385;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.alt = 0.5614902423400605;
    tmp_tmp_tmp_msg_0_1_0.state.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.type = 228U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Redox tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.17241141973233265;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Collision tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.4712301817594752;
    tmp_tmp_msg_0_3.type = 181U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.23551294609391737);
    msg.setSource(6521U);
    msg.setSourceEntity(78U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(72U);
    msg.command = 136U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BPHIQNSVYFMVTYBCJTAUXZQJQDGJXVZCLTBUETWRNFDGSFEJCULNCZEPNPQOMWBCZUNEDBKJIKGPHVLMSVRIYNPSFZTTKUTQLHUIWTVBUHKRRWBRQCLEYOBROJRNDSPLGAWLMKKNVXMTEOIJKXXHOMLDYWDQVMCHRFOUKBKGWUCEIAJHMAXGUXAKQAWDGSADWJINDXOFIOQVPETYHAOZDCYVFAYRHZMEAQFXBWZGYPSRGZILFSYFCSJPXGSIM");
    tmp_msg_0.description.assign("LZQBJAKEMGFEELPIQZTAXHIYRFQXKKCNUASCJGIHAPIVZKZBROQDSWKIKPKIDDMQJTNORUDTKRNVONUBTSLWZDLFLWVYHXUNVLGHFIDFXEOXAGRFSYTZSBCPMPZYHOGOVAQZUVBJNTTSLGVGDCVJSMFLBBPYUYWHORIWGOCMAYYWHJRFVEUZCEMQCTRRMONHUJNXWCMXNA");
    tmp_msg_0.vnamespace.assign("MPTYMQAAMMLGHKOITNFCMOLZZCNLRNYWEKJRD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XGEWLCJVWFQFQMISLKOKZSRFSSQUYLDCZCCPTQYARTPWEYEAJGFWCXZHOYRENPQKRAUMLKUVREUVLJQBUTFNWPBYLKQE");
    tmp_tmp_msg_0_0.value.assign("TQCZTNZROZBKIGCWWAKULLMFIZRFIRDOEWIYTUMYEFXRLLQROXXCDZBQXQCBCANFIHDVJZXMJUWSHRVSIGVUMAMBDXWBBGNPMOLQRPVSNRVBNUJJUAYSEKEGBKORBYEH");
    tmp_tmp_msg_0_0.type = 157U;
    tmp_tmp_msg_0_0.access = 86U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DNOYESBFGQSOYULRCLOGYVCHTKLHVMFRWNDDSMEFPCXHZYJJVIGXCCPEXUKEFMMUKITMFWZKB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JYSOINTMDRDNPBOUYXPMEOTROQBTZEVZWLXAWPMHCPKWKIVXTJCIXRGGCZBFOGKPNYHDUFGKCATPNSVXDFWLHOYFIGYJWTUSHMAOGUTSGENDPLGRAIUCTQQIQXLLKSVHWDHQIMBZHJFCAUYESSXXEICALXQFCYWAJKVMFCDEMJMYRMRSZPWODKRUFEVUUJZQNVHJVYDRLIIZMROXJLNPNEBTHKLCTBEWWK");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 34625U;
    tmp_tmp_tmp_msg_0_1_0.flags = 116U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5894829500738908;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7771460801071396;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.36280918843416665;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 63U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.9279488515570173;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 233U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.8493439650881256;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6420316882109582;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 156U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OWVIFGQKJXIIVXSGUJNYAPNXAIMHGGGAPASHXGCHFJFIEXCUBYYZWKVTTWMFFZUORFRWEQNBZFBCHJWJHHOGLBFMGLKQKUZMSMXEEVJTCRDTKZNVTLRQDVIIBPKAWUECLLICSOMLOWYSSVMXBDMVPYJBNSDDQOTTNCZUHBYANOYPSZWOGRLHRTUETZQXRNSFEKAEJJKIUPXDGPBYMAUOZDLQLBQDNRNACCQOPQKSDTAPWYVFZDEKJHHUPRXV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Throttle tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.44488673272790813;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("SYXEMUJHQCHRCFJBYUDBCVDLMSTQPYOGFDKEITIECUKHPMJXTRXDNJASIJFOWAKTIEKSEFZRFWWLIDXPZNJUHNWXFORFPZLLCIOQVULXRRUPIFSBSXPKMMKDDKXMQBPMQSMLEUGTT");
    tmp_tmp_msg_0_2.dest_man.assign("OYCBHCLFSRVJMWAK");
    tmp_tmp_msg_0_2.conditions.assign("SCQLXHJAKLWUNEUJQQYCNRQNUYMWIPBHZPMMGNSLSKEETPBNAUOSFJPFKFEEMCOYHMZRZZDYGOKEJRHHULAKBJUXGWRNYGWNPIBIYQVLBGRCFJOSZWYOIAMUDDAZKYMMDO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Rpm tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = -4483;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.45504363027437933);
    msg.setSource(28877U);
    msg.setSourceEntity(175U);
    msg.setDestination(2682U);
    msg.setDestinationEntity(240U);
    msg.state = 0U;
    msg.plan_id.assign("FICHCUCGADTNAGNKEMJERUUQDCGQNJCBYIVLGTKHVJWSNDCHTOUHMGIDAQPVAGQXSIHIQATHOCEDWWGJYKLFXQVFANRVLYGRBXBWYJZDIMTTPUOAYVXKWXKQATZSUSD");
    msg.comm_level = 245U;

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
    msg.setTimeStamp(0.6336122373012169);
    msg.setSource(19101U);
    msg.setSourceEntity(47U);
    msg.setDestination(31062U);
    msg.setDestinationEntity(163U);
    msg.state = 248U;
    msg.plan_id.assign("CFQDWRFJNPAHYAWSJMBUBFVSCKBOBLCIRZNNIHDZQFICJOGOXGAHYELPWERYOVCSLKGTUFQRGIDVZMRAXQNHXAKPGJTJQXSHJKZVHXTTOOMHRUWOYVTYFDRJKGNWUXPTVNHDPPIMZNWLCJIKXVAGVEICSGFVOPCZUUUABJSKSFQYGUODLLFLRZHBMKZXLQODMRTPKBRJBNQCBZTIHKTQXTLMFE");
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
    msg.setTimeStamp(0.7946508896231625);
    msg.setSource(61940U);
    msg.setSourceEntity(163U);
    msg.setDestination(27889U);
    msg.setDestinationEntity(5U);
    msg.state = 80U;
    msg.plan_id.assign("IZXCPKZPUVTHJLMVTQMRIZCLSUSFDLEAJFWJRIDFNNZGMGKMSKEYBWZGQPREAPCSTQSXILBPOPFFBONAHZBYLKURHNJOAOTJGIHMYXDBUWOPNQEEPFTTHGLIYYAMQJVMSJDCLRXDJNXSLETQBHSWWOPYUOIUOHWCQXTUGFHVYEDJBTLGNHQBSAKKUUEBNPYKWRCDNYHXORZBAMKFSMLUQCXEFCGJRFAZVYR");
    msg.comm_level = 197U;

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
    msg.setTimeStamp(0.9660090149909671);
    msg.setSource(46282U);
    msg.setSourceEntity(2U);
    msg.setDestination(1337U);
    msg.setDestinationEntity(58U);
    msg.type = 241U;
    msg.op = 7U;
    msg.request_id = 7164U;
    msg.plan_id.assign("IYVUPZZWUKLMJMZLPRCAUNPEOLUOXHXGZLGZMREVSXKENQIBOTQZYVMECPAPBKVEDLZKCUKPDIBPHKTUAUFNRFVTLIHOSQJTXBUZDWFXDGXQRXABVNPCDNQSNKJYJSJVEHVIBORSKEWMTZZCWDDIEOIHHACDMOOBWYNRKGXEIHCFGOGHVHXQLDSANMGAYFTQUJITOSYRAFCYYTBCWCBQWRUNGFKJJTQELDXBP");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.3993419931216946;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WNHFXBOZRVRKUSVURMJTYFEKTOMLEOXAYBNHLFHHYLMRDALJPEWZMPYDVBIPUYFIRWSPBYGGOJAZEWCFOUFUNGJPBRQUSNKXWDMFHDDKJUEQ");

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
    msg.setTimeStamp(0.8702425028114938);
    msg.setSource(55113U);
    msg.setSourceEntity(230U);
    msg.setDestination(53869U);
    msg.setDestinationEntity(200U);
    msg.type = 188U;
    msg.op = 232U;
    msg.request_id = 23114U;
    msg.plan_id.assign("PUSBIBNOYFEKPPXBHKCDBAWMIDJC");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 194U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TRBJFNTTJFYGZDXODGQBLMJSJQVFCRMIJNTPMVQUIUKJRNHVYMQOQICRKLEHTDKQCSDKEDZSFJLNXAWAKZOPEVLENABXXUGWZHAZDEKAEJBGXUCAWOCONZFHEWGABECPYDPYDGLSXFQPWOYWEBLTFLVSLPINBTTOGMKINMRINSVUZQMCVHULIYHQAZT");

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
    msg.setTimeStamp(0.3078610501429281);
    msg.setSource(21046U);
    msg.setSourceEntity(199U);
    msg.setDestination(65374U);
    msg.setDestinationEntity(184U);
    msg.type = 50U;
    msg.op = 247U;
    msg.request_id = 24525U;
    msg.plan_id.assign("PWCIUFZUAGLIOBTIFCDRWVPATDNKGTIUHZSXDTKQRNWUEZEUOMEPUOAHVGJZLMFPIGGCHTKYWUSANCHVEESOOQCALLISJWZTKFPOQSFH");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 155U;
    tmp_msg_0.op = 9U;
    tmp_msg_0.plan_id.assign("AEBSKDVFYFAHKVPFQAVIOOMSLYVWKWDKSUHGOBKJZGYJVOVQWSTXZWIRLQOCGADEFSETWLXCDMDSNPJUSFPBBUUNARIYVFDYQHHTLRLQJGPHIBIDQKOCJBXBHJBYNPFQZRNXHMZSZEJWYUWCTRXOVGJEDIXSVZPNLZRC");
    tmp_msg_0.params.assign("MASIXKZZUGFAQWJCMATPBFZRSERQGFTPSQAPTZCDGHYUD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MYPTNKYZUX");

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
    msg.setTimeStamp(0.4264822742205371);
    msg.setSource(46281U);
    msg.setSourceEntity(195U);
    msg.setDestination(31435U);
    msg.setDestinationEntity(229U);
    msg.plan_count = 1948U;
    msg.plan_size = 3540663554U;
    msg.change_time = 0.12592032716798607;
    msg.change_sid = 5676U;
    msg.change_sname.assign("YIYGOZIYPUKKFNFYTQFTEPDXSFDHGSRBWSDVRNWZEHOMDQZEQZANURCSCDAPNFPTJPGMXHTACLJJOYRPBWUTYO");
    const signed char tmp_msg_0[] = {-24, -50, 25, -5, 40, 29, -72, -99, 107, 56, 97, 9, 124, 63, -124, -78, -71, 105, -63, -26, 28, 111, -28, -93, -67, 15, 63, 80, -94, 29, -96, -16, 96, -92, -61, 18, 22, -42, -12, -35, -28, 30, -42, -31, -95, -107, 22, 81, 112, -77, -29, -90, 89, -110, 43, 43, 61, -115, -70, 4, 116, -54, -17, 118, 50, -68, 114, 7, -94, 68, 76, 65, 112, -84, 114, 61, -44, 56, 74, 102, -5, -2, -86, 51, -127, -86, -91, 85, 93, -14, -24, 55, 64, -108, 10, 101, 56, 111, -12, -44, -57, 98, 100, -82, -47, -108};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MIICTKVTKSVLXCQNELJWBTCODAVPGMYXJQACIFUCEMYFXHMHODJGGGHFMVDZZNFBXENUVLJDXTZMYHLXQKWBZAXDZMJWTTRNHKBEADHJSIUJAKUPSPCIOVWKNQDQALSWCZPOFYRPBDMBIRORDBAYQFYVTAYOSILYAILCYEWJSOQGPQN");
    tmp_msg_1.plan_size = 46388U;
    tmp_msg_1.change_time = 0.7417649051240185;
    tmp_msg_1.change_sid = 59172U;
    tmp_msg_1.change_sname.assign("DQJXKMWPMFRBWTRANDXUIEMXVLWXAMNDNEFYPDATGRNGVDFQADLSKULJAGVHYZIOMOKMELOSITGACHCMZTYNCYPOJIIUCTJKCNDEJQBQBPBZZRWKKZSSOJINKPLWXUXVKUNTIQTGKDERQDDLBVFQVWBREGFYXOEBUROPIXSLYUFJSOJRIBMYWWHPKYGAVSZI");
    const signed char tmp_tmp_msg_1_0[] = {74, -99, -57, 42, 12, -76, -17, 12, 108, 78, -27, -27, -103, 119, 16, 103, -12, 98, 77, 84, 26, -32, -127, 13, 24, 25, -4, 22, 10, 72, 50, 17, -119, 27, -113, -114, -117, 108, 18, 117, 75, 90, -101, 122, 49, 29, 81, 18, -19, 14, 46, 111, -42, 95, -99, -104, 109, -92, 83, 8, 113, 120, 2, 38, -8, -90, -41, 74, -88, 92, -119, 63, -123, 56, -80, 93, -33, -93, -114, 16, -54, 5, 4, 116, -49, -109, -127, 84, -98, 59, -30, -32, -110, -105, -31, -107, 105, 25, 119, -43, -126, 77, -118, -82, -7, 108, -118, 63, 97, 25, 112, 24, -36, 29, -43, -127, 89, -9, 71, -39, -119};
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
    msg.setTimeStamp(0.9188866601066734);
    msg.setSource(8171U);
    msg.setSourceEntity(130U);
    msg.setDestination(108U);
    msg.setDestinationEntity(13U);
    msg.plan_count = 25149U;
    msg.plan_size = 2748034792U;
    msg.change_time = 0.3644082979069674;
    msg.change_sid = 36668U;
    msg.change_sname.assign("ICAAKVCTLEOWMTZSFJDXGPZZXNIEPSJYMHUHNRUULZCPBDUEONICRDIGJXFGHECFEOGRZKPSHLVLOHSVNJKMIYDRFRRXIYWWHZSJTNFSUBVEXTA");
    const signed char tmp_msg_0[] = {-11, 111, -39, -121, 39, -24, 38, -92, 31, 75, 7, -97, -40, 45, -11, 53, -53, 34, -65, 18, 85, -23, -104, 67, 79, -47, -67, 11, -69, -84, -115, -95, -70, -46, 69, 107, 119, 83, 30, -77, 14, -44, -72, 24, -98, -110, -72, 32, 39, 64, -63, 101, -37, 52, -61, -59, -46, 120, 116, -19, -117, -122, 45, 66, 92, -105, -84, -59, -8, -55, -11, 63, 107, 18, -3, -7, -88, -106, -7, 14, 125, -76, 90, 67, -108, 1, -113, -4, -40, 83, 16, 38, 53, -92, -57, 61, 56, 86, -17, 26, -28, -69, -34, 59, -17, -12, -72, -34, -58, 20, 45, -49, -98, -43, 75, -82, -15, 5, 126, -4, -41, 42, -1, -58, -54, -103, -15, 56, 31, 71, 73, 58, -84, -59, 5, 76, 12, -128, -63, -56, -106, -62, -34, -89, -94, -28, -65, 120, -33, 1, -87, -9, 85, -15, 72, -4, -41, -50, -86, 64, 26, 84};
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
    msg.setTimeStamp(0.740761823684713);
    msg.setSource(12971U);
    msg.setSourceEntity(67U);
    msg.setDestination(6683U);
    msg.setDestinationEntity(111U);
    msg.plan_count = 51864U;
    msg.plan_size = 218916548U;
    msg.change_time = 0.03847632254562916;
    msg.change_sid = 32904U;
    msg.change_sname.assign("EHUUCNHSMPKTNSIDBURZNDABFXJVDAQYRJQXEFRAWGTXMYQABCWSUCOLFNJBPXYZZHWYWARTYPAFGLJAOUCIPRVYEHEWPYGTDOKDTKMRCUYVLBWYEHJSMNIV");
    const signed char tmp_msg_0[] = {78, -128, 34, 60, -98, 104, -101, 51, 18, 95, 88, -89, 108, -14, -44, 75, -35, 93, -89, -114, 110, -123, -109, -18, -86, 8, 67, 80, -98, -46, 21, 80, -107, -104, -61, -112, -47, -72, 49, 78, -8, -30, -88, -105, -28, -65, 110, 19, -52, -58, -78, 97, 61};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OHCWBOVPQMTJDXSXAAQEZHTSHHMYBOBPSGCYAUNSWJGOROJUNEYKMPZWIHBHZQWQTJQDDHNGYQESRTEIPQCHDMRLIKJSZEJVGFSXFGRUE");
    tmp_msg_1.plan_size = 2851U;
    tmp_msg_1.change_time = 0.3099899788169961;
    tmp_msg_1.change_sid = 53024U;
    tmp_msg_1.change_sname.assign("QMJITBVIXRVWGTRIGCQJZVRUJLCVMAASCWAJBSTZIOZ");
    const signed char tmp_tmp_msg_1_0[] = {60, -40, -67, -55, -74, -3, -80, -63, 33, -83, 81, -28, 13, 77, 47, -83, -78, 9, 34, 87, -113, -101, 39, 85, -125, -87, -59, 29, -87, 107, -48, 86, 108, 2, 39, -74, -51, 95, 100, -69, 105, -25, 5, -123, 60, -52, -35, 125, -56, 109, 102, 12, -10, -80, -14, 57, -57, 64, -41, 80, 116, 59, 32, -30, 30, -17, -128, -83, -51, 23, 114, -103, -33, 56, -46, 91, -85, 88, -63, -55, -122, 59, 13, 117, 74, 31, -71, 60, 25, 0, -16, 63, -94, -65, 107, -86, 68, -63, -46, -45, 118, 46, -98, -70, -70, 79, -98, 49, 49, -16, 81, -79, 73, 18, 46, 108, 44, 119, -52, -75, 85, -6, 97, -14, -65, 24, 80, -74, -76, -71, 108, -63, 41, -89, 30, 114, -89, -94, -105, 104, -87, 71, 104, 85, -28, -74, -13, -113, -109, -23, -71, -37, 37, 19, -48, -15, -20, -93, -89, 74, 80, -123, -21, 79, 3, 24, -20, -105, -128, -19, 64, -58, -13, -96, -122, 108, 32, -96, -4, -20, 13, 98, -122, 126, -90, 114, -40, 11, -105, -52, 20, -116, 80, -18, -57, -105, 126, 6, -28, -56, 59, -51, -51, -100, -5, -123, -110, -117, 59, -4, -51, 45, 57, 19, -127, 91, 106, 15, 64, 22, 98, 40, 85, -104, -108, 40, 93, -64, -27, 85, 101, -126};
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
    msg.setTimeStamp(0.842325833983372);
    msg.setSource(56164U);
    msg.setSourceEntity(143U);
    msg.setDestination(27873U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("XKCZDXWFNZDRJJYUVERBSSXRXHFCESSRYIPTDIHNGMQPWCMIKBQILBWJBBQWZMEPTHKOAPBNUVTDPLLNNROFAZYTKTQJYYZWBEAADKXWGMQLAKLIVDMBUYHFZYUMGDHOQHVZQAXMCGAVMUJONPKHEIRERVEOSIJZVWPMNTRXNUDCQIFOOKPICBRKLQLVUZCJGDHFUFCDUHGFSTFOOFWCYHTGSSESITSYCEPGLJUALRZAJLGY");
    msg.plan_size = 46451U;
    msg.change_time = 0.257949587585083;
    msg.change_sid = 321U;
    msg.change_sname.assign("PLGEBTVCQFRGVIWOPMWHTBTAWOPBSZOOQFJLXKMMKQECYORZPIDGXGKZIFBEQTLWAHDWDJCJPNCTHDIVGNKVOXDQNLXVSIOKZMSMVSXKLCIRFETBFPTYBSOBHXJHEMOLUKLQUVBFTMKACZCUYQSHUFHRFFATXIDWMCUEQYQIJSGKZRLWUGRDXYDNRMYVMANGYACPRZLHCWB");
    const signed char tmp_msg_0[] = {-81, -3, 36, 20, -3, 109, 1, -98, -65, 81, -65, 102, 20, 101, 34, 107, 106, -98, 100, 97, -80, -98, 89, -27, -34, 71, -60, -55, -115, -125, 10, -74, 108, 92, 47, 49, -107, 44, -86, -52, 119, -14, 48, 88, -61, -47, -80, 38, -64, 78, 20, -83, 82, 10, 40, 68, -47, 72, -50, -44, 85, 100, -42, 124, -10, 67, -24, -15, 90, 12, 83, -2, 1, -57, -21, -23, -70, -58, 56, -52, -22, -43, 61, 108, 19, -65, -19, 119, 79, -79, -128, 91, 75, 123, 96, 40, -30, 39, 113, 29, -100, -54, 120, 104, -58, -86, 73, -51, 54, 121, -98, 40, -75, -108, -25, -96, -77, 76, 114, -54, -51, -26, -85, -79, -99, -23, 113, 3, -52, 78, -65, 124, -88, -49, 41, 29, 92, 21, -59, -37, -108, 69, -106, -62, 123, 65, -46, -111, -45, 73, 9, -15, 72};
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
    msg.setTimeStamp(0.35450354575552023);
    msg.setSource(30082U);
    msg.setSourceEntity(132U);
    msg.setDestination(2338U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("EBFGMIKHPYOQMXYLUYOONVQOBMHPVBHKDQBBMNSLWMMXDXOZYLLIMTFEDPZCHTJYBRKFZBWJGNKFCLGSKJHEIXWGNAYGDFQEDWSICMZICRLSAFZRUGXJIULKJDWXIRGTZHHJHYILHVVWE");
    msg.plan_size = 55190U;
    msg.change_time = 0.009765140604205524;
    msg.change_sid = 18589U;
    msg.change_sname.assign("DVDFJQICDHHOMPKMMVINMPEVOLTZRGTXWVFZBMUTGONFYMRRBTLHZZYUMWJIRIIYKOPAVPNKOJECDKPMQVDUQDYOYLUGAGVREOXJPQHBALIIDLGNEJJSVDKITKBXYQZUSMPWLYSKJDFFNRFWBCNEENBXGIQAWWXKLFBOCGARIYATSNPZHTCTNXOJHHNLSUUSLCEFCTZVOJZPPHAAFLGJASWSBDERG");
    const signed char tmp_msg_0[] = {-25, 97, -74, -50, -92, 79, -74, 16, 45, 4, 36, 73, -30, 36, 42, -74, 85, 57, 37, -11, -57, 32, -111, -72, 57, 9, 107, -34, 65, 111, 11, -5, 115, 100, -10, -2, 15, -100, -15, -112, 62, -110, 11, -113, 17, -50, 37, -99, -27, -66, -65, 51, 42, 25, -6, -64, -90, -41, -14, -123, 63, 95, -124, 15, -19, -45, 50, 78, 111, -127, -41, 35, -27, -4, 10};
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
    msg.setTimeStamp(0.5088528572921832);
    msg.setSource(56731U);
    msg.setSourceEntity(226U);
    msg.setDestination(12213U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("STVAOYWGHUYAXKOXHCRLAMHRUMUDJM");
    msg.plan_size = 27168U;
    msg.change_time = 0.8579043825736652;
    msg.change_sid = 51675U;
    msg.change_sname.assign("CHESZPSIZPQJCDCQQBLCURAWEGBIBEGSOBQLXGTJSWYARHSARZFGLFRHYPWNVLSTMNMEYTUHQKXRVUHEWDCIPDPVYZNMWXUDVBNDFEZCZMMJFJQQOIDRGIKTNXBXLSHFYLHASMMKCFBDJCRZGOMPNFHGIUMVURYEUBZAKIKFIPFWPDQUNYOW");
    const signed char tmp_msg_0[] = {25, -60, 36, 78, 125, 19, -96, -7, 125, -108, 76, -54, 104, -105, 62, -38, 99, -27, 51, -53, -81, -111, 77, 88, 80, 26, -70, -72, -21, 0, -31, -119, -54, 70, 85, -10, -64, -53, 106, -57, -81, -66, 30, -42, 99, 46, 73, 97, 27, -70, -18, -54, 4, -51, -116, 23, 75, 14, -52, -64, 93, -111, -56, 33, -71, -56, -7, 102, -46, 0, 90, 18, 100, 111, -121, 57, 94, -49, -78, -110, -8, -67, -26, 89, -66, 65, 107, 84, 60, 43, 20, 1, -92, -30, 92, 91, 30, -9, -11, -44, 117, 97, -125, 55, -105, 0, -27, -116, -4, 108, 110, -61, 30, 57, 55, 3, -59, -86, 63, -2, -127, -9, -28, -86, 100, -3, 47, -89, 70, 114, -86, -48, 38, -79, -37, 91, 24, 32, -18, -38, 42, -11, -47, 31, 85, 5, -9, 45, -117, -1, 0, -40, 55, 57, 61, 45, 119, 86, -71, 46, -6, 8, -4, -74, -108, -8, 41, -24, 22, 45, -2, 18, 72, -33, 26, 33, 80, 79, -78, 124, 66, 94, -31, 65, -81, 80, -73, 87, 88, -119, 13, 47, 69, -20, 102, -94, -16, -12, -57, 81, -60, -73, -116, 75, 1, 120, 106, -100, 21, -57, -116, -82, 28, 81, -72, 44, -42, -2, -48, -119, 36, 104, 44, -52, 97, 113, -52, -87, -50, -119, -116, 33, 32, -65, 106, -64, -63, 97, -77};
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
    msg.setTimeStamp(0.4728047093614246);
    msg.setSource(62500U);
    msg.setSourceEntity(195U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(6U);
    msg.type = 2U;
    msg.op = 163U;
    msg.request_id = 63538U;
    msg.plan_id.assign("POMEMOTHKBRTTHBMFCSEDLHCWDACISHIQDDPBVTXHVEGGDLQHRF");
    msg.flags = 64359U;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 202U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZOTWTJNTNFQHYPVWYZZIYZAHMTXDWEDEAUTDHOCWFJODGHWCAKDMKMPBQAPUIRCFUBNZIQYIMWMGFCCDKZYKXSJOELTYFZQSEQTHXDXMVLFMEWNVGTUYKRBBOSTVPYPSJPGLEWCKOOLVBNGFJGVSRIUEAQUSURXJBRZQMXHIVJSXTNWVADBLIOPJHDLVNRSSUABRQGKHAYSJOLLKEMFIGVNKPRZGC");

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
    msg.setTimeStamp(0.5478947329720092);
    msg.setSource(13880U);
    msg.setSourceEntity(110U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(179U);
    msg.type = 253U;
    msg.op = 71U;
    msg.request_id = 24403U;
    msg.plan_id.assign("ZYURFCMWQVYUQAVJOLPEHANAOEZVMSLNUUCZUBRZBGWIRNNTYWDSYBGELIVLPQICTMRAXQHMUDSTGQZESRNDYIEVSPKGXGKTHKHYLOOLAXFUZWPJDHDAETVNPGZPWERD");
    msg.flags = 61229U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 210U;
    tmp_msg_0.zoom = 148U;
    tmp_msg_0.action = 154U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZXBSELGXZCAIQNBYQQZANYWDPREUOYJRXAWMLJTU");

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
    msg.setTimeStamp(0.376122026117121);
    msg.setSource(41182U);
    msg.setSourceEntity(123U);
    msg.setDestination(64941U);
    msg.setDestinationEntity(245U);
    msg.type = 103U;
    msg.op = 118U;
    msg.request_id = 2580U;
    msg.plan_id.assign("WESNKTTDHUPLRLPVQIDSPJVTLGGEECMUKPOOAFISTJCIZOQNYJQNKSFYRYPTYQHOMZ");
    msg.flags = 19882U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 58773U;
    tmp_msg_0.lat = 0.8768900757654552;
    tmp_msg_0.lon = 0.25906179622268855;
    tmp_msg_0.z = 0.05669343870521193;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.speed = 0.8051108713136335;
    tmp_msg_0.speed_units = 50U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.2033068225833088;
    tmp_tmp_msg_0_0.y = 0.570317549166584;
    tmp_tmp_msg_0_0.z = 0.24238227395013645;
    tmp_tmp_msg_0_0.t = 0.8169593719844577;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NTMHNFKAOSIGWMCZZCGQEFEYXDROCLPBJIBSHRIHLXFVDWKPIGFPTYRNVQMFSPWNERXSNRKJAQBLQBEIXKUDTZZXKFKJTIIJKGZCMNOPAXOHURIZGCBNDXYHMMXWTWVBGOELSHXECRBTMOHYGDTXQFBSLPYVHCPDZGUJHVCGWVFOVUGDECTAUWSPNODYQHVAALQBCRLUQJUPRKIORWDAEBSNJMMJAFIYVAJEFZSLTMAOQQPZEVWJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JNHETVOKJSYUPYRJSXZVUFFGRLAGAZAWSBPJVHBQRERDVIDGASOFEZJKXCPRHDECTYOYBMDRTBGW");

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
    msg.setTimeStamp(0.02430455155700939);
    msg.setSource(11400U);
    msg.setSourceEntity(228U);
    msg.setDestination(60907U);
    msg.setDestinationEntity(8U);
    msg.state = 244U;
    msg.plan_id.assign("OSCMUGLDDRXENOSUOBWLSVIOBXEIJWCCKFTVFZVAWWIKBUSGLWLRJSKZDCJNQHFZYCRQXGHZTNTKQVYYMNXWMQALDUZMKJPBFSVAYQJPJCBNETDUSFJTYSCLPGERPALXQSYYBKRDAMEORKBDXAUOBJDXGOIIEGXMARNOWEGNIMHK");
    msg.plan_eta = 1465242559;
    msg.plan_progress = 0.9294726772736237;
    msg.man_id.assign("VDCUEDYWPYNUGQKWDNCCSSOVLNGCFHVATZGNZEEUIXBZYYFTQSNHEQWFIZKHAPRFWBPDTHHQIIXVDQLEDFHPSLXZSBFMWEXNJAHCKAYUHRGVSPOKISLDECTZIWNOCBZKTEJKWQNPGUC");
    msg.man_type = 62607U;
    msg.man_eta = -1317738388;
    msg.last_outcome = 157U;

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
    msg.setTimeStamp(0.14460717222316832);
    msg.setSource(63120U);
    msg.setSourceEntity(145U);
    msg.setDestination(12714U);
    msg.setDestinationEntity(138U);
    msg.state = 175U;
    msg.plan_id.assign("WTZFWAATEZOBRGSQOCOSIYMUXFGRDCVSLNMCIJIMWSRYILVWXSCXGWHCTLGOQLSIJGXEMZNBJEURNMJEAHYTZPQ");
    msg.plan_eta = -1313755270;
    msg.plan_progress = 0.029109759326024665;
    msg.man_id.assign("IZLVWBCNLIETYKIQZFKSJZMPLDVPWIVDRRETH");
    msg.man_type = 10911U;
    msg.man_eta = 1535316429;
    msg.last_outcome = 92U;

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
    msg.setTimeStamp(0.05407521590323261);
    msg.setSource(38190U);
    msg.setSourceEntity(23U);
    msg.setDestination(12499U);
    msg.setDestinationEntity(65U);
    msg.state = 105U;
    msg.plan_id.assign("GTJLEFFQRHQPLTHDDAFOGXLWPTSUWXTWLCQDRGHLSRPLTKIIKYJACYERQNNYACEIEUNJPGQHVSTHZANHZXOXGIWMJOXQSWVAOOTJNVPLSEKUGJRDFMJJSINMYARMYGLDHOCBMDPUCVMRXBKRCHUROQLBKXBQHXMEKFTUFPTJXGFUDYBIBIAPPZVNOZGSKNBLNEDIBMYSDWROONYXKBBPZST");
    msg.plan_eta = -213422172;
    msg.plan_progress = 0.7497865041169798;
    msg.man_id.assign("GLDJMVRMYJZBDSDAVWBOTTAFSUXVNUKYWERZFNG");
    msg.man_type = 13831U;
    msg.man_eta = -2019744876;
    msg.last_outcome = 98U;

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
    msg.setTimeStamp(0.10935663560667064);
    msg.setSource(56595U);
    msg.setSourceEntity(202U);
    msg.setDestination(26328U);
    msg.setDestinationEntity(111U);
    msg.name.assign("XPKGRIDHKZQONAXEBIAPFBOJFBWUC");
    msg.value.assign("PEJLANCYZJRIXSTFTOXZJMCBXYMZTCQCWQCTONMPMXVLWPMHFYRWFOYLHDBKFLHNEMUSYEDPLQHAUQCVGIRFRASVNOGAZBVTJWYBVHCLDYGZEYOEAESIPXPCORBPTELLPNNXBQVDKVWVIDLIKZUUTJJBUWJUGXSGOHWSUKFXFTAVRBIDRSHNQUHRHPD");
    msg.type = 172U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.09176585746677857);
    msg.setSource(21897U);
    msg.setSourceEntity(143U);
    msg.setDestination(54083U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ZGEMLJTAUMBXEAWLKMRQAORINBVXERPPCKVPGQNZIYWJQTFUOCBQMLGAYBXESQHNNIGDRJBGSDOOATTKMJREOOZHUBFODKZESMEUCJDNYGNKKPRVMLTUIDHVZNVDWTIBQSBJUJCIMXYXSNGZZYDFXCEXRYXVRAMLQCSW");
    msg.value.assign("NYOTAKPSQLMJZXTGFFOFZPSWASBETDFPQCFSWBXWHGQOPLSWHIAUXTMGTPYAFNPBIKDBRUEYBXHXILMVFVYCHCBMDSFBFOJMGPQUIULEYXUSKPAKSIUZYGMZGYECIWUDHRMAAEVWVIJVOZEZYITUKZNQTRKCHYCNVSEJGDWXZNVXLGXWJKRVEODNDQIO");
    msg.type = 15U;
    msg.access = 80U;

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
    msg.setTimeStamp(0.6829318022495259);
    msg.setSource(45569U);
    msg.setSourceEntity(147U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(24U);
    msg.name.assign("KKWXBRGBGPFNDRIAXQFXDVRCTFMTBGUJYAHHEXJUIACKZFWFQOOSSUTPZAAZPYDQJSGOZZHRIPUVPATCMMQQVUVWZHQXIPUKTDLDXILHFJKBLEWWLKKQZJYCUGUQCQBJEDKPJBSOVDDNNSERQHNAMIOJYMFSBITOYMVSYGLTELIMXKVLNPKVOWONRCBGCGHTRGWACYCDHFRLNVZOHXAPGDCOE");
    msg.value.assign("ANLPZZFWBKQPPTCCZCDRVCGLBYYSQTXHYWHZEBQKRMPTFFJGWVSXOHD");
    msg.type = 54U;
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
    msg.setTimeStamp(0.15657835479192883);
    msg.setSource(5315U);
    msg.setSourceEntity(161U);
    msg.setDestination(43534U);
    msg.setDestinationEntity(134U);
    msg.cmd = 28U;
    msg.op = 171U;
    msg.plan_id.assign("OBSSWUZWMGHYPOXDMERKUHDNPJBNIUSJIPURIREYKNYTUARQUHHFVLOEVBCKYCPGMPSIVTYQMCHGACKXUATPCGMQVWOIFMSDYDCZEDBYIWXJFSBJCMPDDWXSGDGGZZLOTLBXONAUOXKETBVSMZSHALQHKJNPLRZZQRYBRVDOPLECTTJBHRKQYPVJGHMNMGEFFWTXCCAZXDQVIIQZJIAFVEEUKQKVTOEANALRLGQFKBLAJORSZUWW");
    msg.params.assign("QOSESWRQLUXFQWMKFXPGLOZOQJUMHZUFFCYYKBTJA");

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
    msg.setTimeStamp(0.9210711929762732);
    msg.setSource(6691U);
    msg.setSourceEntity(63U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(32U);
    msg.cmd = 244U;
    msg.op = 95U;
    msg.plan_id.assign("OQORYYIQFBSZJNRQQJBLSYLWLZMPXLTCOHYXVRUWXYLBUVNSFBJADFMPCWHQADLTMRMVIAFIXWQOUGZUHKUNMBOSVQGTOHJHZPLSWFKVYDIIEAJCZKKGPOJRLAPWSEIEYMGNCBVESZNGCJKZNCWKHEOEHHZAAXTPMLPRJYVKGENFOBUVEWGTNEICEXVASPZTYTRUZQVJF");
    msg.params.assign("ZEICOVAPGCGCUBOKCUOAOXXQRCAIRXASXPURZFOYRBIAJ");

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
    msg.setTimeStamp(0.7257802415391104);
    msg.setSource(42894U);
    msg.setSourceEntity(201U);
    msg.setDestination(36169U);
    msg.setDestinationEntity(207U);
    msg.cmd = 84U;
    msg.op = 119U;
    msg.plan_id.assign("HIYELKKYZAEBLZSLPLRCURTDOWJRKXJMJOVZHXOGENWVLKVQREUJZLDDBNACWDBTTFDXPEZNDTHIPVMUJUYJMNCOSEZSAAMQURFVBOQCXIHQPODBTPXKGEBDBSCTXTQGSHSGSBFPYSQXYYIPVGAMABDRCALGWIXWARUJGQKAEAMVHONCZROFPLWCVFGYXPFIJNTFFEKNIHGIHOTYMGPZKDZMCUWYQRUEITHWVSFNNNKMQQCUZRULXWW");
    msg.params.assign("JHTLTQDZDMBPUYCHDNWWAIJNVVNHPYWVEXSLIJGMJZMQJLVSVYDBNCHAFKPJGTIOTWEIQXFCPWFHVRZOUKVTUAYCGUABZMTISOXCJPSRPYBOQHJEJKHPBRCGGQFDWCVPZCRGGBTLFUVXKRAWFHIYKARKDEWVKSMZOE");

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
    msg.setTimeStamp(0.49064295857344997);
    msg.setSource(52145U);
    msg.setSourceEntity(40U);
    msg.setDestination(3068U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("OKRQQBLVGQENQQIZNSYSFSWWRWLNPTIQBQCZZIXCOTKTTXDHMZYIHUJFHKBDJGSXRDWKXVAJRYWDPIQCHEPHSAOTBVUOCF");
    msg.op = 50U;
    msg.lat = 0.9376410451196845;
    msg.lon = 0.9508404982878353;
    msg.height = 0.1815696723596405;
    msg.x = 0.30014405984060866;
    msg.y = 0.7101991867358914;
    msg.z = 0.5981937404251442;
    msg.phi = 0.2665420414768933;
    msg.theta = 0.48242943982774544;
    msg.psi = 0.2918848069697981;
    msg.vx = 0.20049990146690033;
    msg.vy = 0.8913104664903194;
    msg.vz = 0.29097742468507504;
    msg.p = 0.6173605968686923;
    msg.q = 0.028120313440906375;
    msg.r = 0.1996648010832326;
    msg.svx = 0.5061657703956445;
    msg.svy = 0.45624173983047056;
    msg.svz = 0.7036584628152511;

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
    msg.setTimeStamp(0.20535877539970449);
    msg.setSource(2305U);
    msg.setSourceEntity(194U);
    msg.setDestination(5001U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("MBQRMYFDVCUFSVNQPWQKWUXORUPZJNLIZQGDP");
    msg.op = 187U;
    msg.lat = 0.31994197568132876;
    msg.lon = 0.6493908314981103;
    msg.height = 0.9527992342194422;
    msg.x = 0.24946324026700173;
    msg.y = 0.12083772885020982;
    msg.z = 0.09926313483602567;
    msg.phi = 0.36231846526299194;
    msg.theta = 0.34896922013338105;
    msg.psi = 0.6751214152119127;
    msg.vx = 0.8852922682429392;
    msg.vy = 0.858182890985102;
    msg.vz = 0.5013841989538892;
    msg.p = 0.629546069779277;
    msg.q = 0.12246592066900219;
    msg.r = 0.7128176089115723;
    msg.svx = 0.20947619700088493;
    msg.svy = 0.5863524894191093;
    msg.svz = 0.10629662978929644;

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
    msg.setTimeStamp(0.42502078047985803);
    msg.setSource(22363U);
    msg.setSourceEntity(156U);
    msg.setDestination(20065U);
    msg.setDestinationEntity(15U);
    msg.group_name.assign("VRKHJPQYIBAWWFRGJNIVUFRBGUZDVRHASNYJKMYYIIDGPRILVPNBHSPOASNKBTOPUQULNQXWSBOUYOTTNWYKOAXLROKXGOWDXNFCDQIMXHZPRTLCYTZYVGKJZWPLIXZFSOMBVEUZDHFRLRIWKULDDKUQPHVJEVSJMEBJSEUGTTNOGFIJLEQTYJAMMZMHPTRQSCHMCAEHFAEFAFMHCXXWPBBZVENKZWGCAJQEMFWLYAKCDDIOLBGN");
    msg.op = 244U;
    msg.lat = 0.11062875803211214;
    msg.lon = 0.7983699793017871;
    msg.height = 0.5383428052480561;
    msg.x = 0.2597119350617886;
    msg.y = 0.1624867057239604;
    msg.z = 0.4371387767558056;
    msg.phi = 0.4743299370079369;
    msg.theta = 0.5945059911628143;
    msg.psi = 0.8758383564365118;
    msg.vx = 0.7321035629594854;
    msg.vy = 0.4189300620179869;
    msg.vz = 0.8587306744890373;
    msg.p = 0.7518185173409027;
    msg.q = 0.7831940798512392;
    msg.r = 0.4044776383749743;
    msg.svx = 0.21743411789794442;
    msg.svy = 0.06026072767200796;
    msg.svz = 0.4993197596212654;

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
    msg.setTimeStamp(0.6069586632351437);
    msg.setSource(2996U);
    msg.setSourceEntity(182U);
    msg.setDestination(57475U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("OVLLQXPKRSUDNWYQWUKYAGGVSPEYKRTDOTNDKTLPKBFXMFTIIOJRGJIYMBWZFHHJBRTFKFXPWCUILZFAUHIVTXMJFCVEOUPDGHVMJUCHIZWMXOSZRAOSZUYMAPMWHPXQULCEERBFERCNXFESMQNRZQCYXZLNHVWZIEAGBKCDOP");
    msg.type = 225U;
    msg.properties = 41U;
    msg.durations.assign("IKWCOITBOJRIWHYYCCZ");
    msg.distances.assign("NQLQDWHNXPWPNATEYKUROZSLSPYTGBFRSERAJTKQUCJAUDVFDHDXWFYBVNTMXKHMJOZZOHPMLUKWWEGEKPMBBAOGYRRDPWVUQBCIAGSMCYFAFEAGIZSEMSKFZCXVALGBJVJOPUNYDINICIITQXCJVXZGWXKSUSNTWOALCZFQHLBHTOWDGBHVQTYUQDVDRLHCMKMCRSFFUANXYHESEBGJNIROQUIKIFXHNPCPIZZGLLETTRYJDYREJO");
    msg.actions.assign("XUCPXRFQRCHANODWAXUCRWTLNJSYJAPQIBGOIEIMTKXKVCPDNBEYDZUTUNFZWKQDANBQKJZBMWAOEGJZXEJCSMDKVOILGBYKSBGWTJDVHQOHSWXFTTOEOZBJAMEYGMPVGPJGFYLLRKQFNLZACOCZXMEOKCRYUQHPVWENYLZGVHPTSYLGLHTOCVFNDFUCVRIKVIHMMYQTRYWNBSULDFHKZDHSITLFSRIZDVFUJWAUPI");
    msg.fuel.assign("DTAQDJOOSLKNVAMXBFUQCBROFGHPXPOTKWLASHDZHIMEJHNKJYTGXQVTACZGBYYAJRPPDDRNRKLETSZBBLBKRTWQONUGWGOVKQJRUBUITSEESDMKBDHIFNRXXTQMWJWDSRVNYNSO");

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
    msg.setTimeStamp(0.7678061033101963);
    msg.setSource(528U);
    msg.setSourceEntity(26U);
    msg.setDestination(19750U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("WIPJGXBDMPQJJAKWLAURRJYLHOIKXWQOCXZQBYAZGJHRWUCKRKJSUBVHRNTDEWETUEZSCBX");
    msg.type = 108U;
    msg.properties = 224U;
    msg.durations.assign("IABTGFPHQAPMJJWMQIVYPITJTRZNGUKQXJBDAQXXDBCCCFLSHOMVWVWWEALZSMXQGACHGKVVEETVHAQJDVMSUYBNXJSYBSKRUWSIXQKUKDYCFZBLOIGWVKTEZFFZFWNYZBIPMJRMBXHUWSGUXGVNYCPCNTPLKULHNZELGZMCKDIDMPUGOROREJRHASJIHOQOTPF");
    msg.distances.assign("CIPKYIVPLIMFBCZGEKYQHEZBZGGYVWTNCYMVMMNDDZOSCAU");
    msg.actions.assign("GQYIOTABAZSYJFKKXYVMMETMHHAWBCNNHHOPJLZAPKFAEJBRERURCIYYLGINEUCVQPRUHCKQACVPLPKQDWZIUDKYWCV");
    msg.fuel.assign("YAGSEHYXVPMVXBYZRBFYWXDLHUWYICHQZKPRGJITRDRFZOSIKEZKSVTEHNARFQZJCOXPYUJHCXNFIDPZOJNXJPQBRVJTEIVWTLOJGHFZZDHL");

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
    msg.setTimeStamp(0.3232170339334707);
    msg.setSource(20300U);
    msg.setSourceEntity(125U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(243U);
    msg.plan_id.assign("LKAGHTLEKYOWJJVXXTMVKVURXSOFOKRTRVGWWGZMISZHJQIEWMZXBQBMLUAJYBIBQVLWCVFZDSMUJPDCH");
    msg.type = 132U;
    msg.properties = 71U;
    msg.durations.assign("HAVIFGKZFUUOVET");
    msg.distances.assign("VEFYRDQRSGFQVSISKOCLMZUGTONLTTLCPKWHNJZTFJMXEAEWBSTJICVYKGZYWANHNGZAEMXVCBAOWNMUBPDMYNPYKJXIFLMVOUIWOJGEXPRFIGWBRNOPAFYKBDXQHSMVUCLEKPHTOYEYDFQUJPCXQAKZJKPDCSLSMEJLNWIQXVLAXHDRGFBAYITGTQVOBQSTDLKGBDPHMHZPRUZHNXVWZD");
    msg.actions.assign("QFZQOENUWTPTKDBSHLZJDPAMPMSOJOHFATGXTKRBYWBBUOMIBQZGDJOZMVUVNAANHIIDANCPNVRXYWKRUYLXABFBENJRLIKOMSVSJQQZDATL");
    msg.fuel.assign("BMIRJGHFKRHMGJVDBQKAXVOTQVYSTUXLWMUNGXRARELHZPFUJLSODVHDLGPSDHOFXGRNNUAZKQPKKTFAWWIPUPPZUNYBNRSZABXBDEYCEXYJOZJALIPWBNPCCLAOBKMEPVJUSMHZMVCKSMIYERCPGZESFSCXDQEMXWCJWLENFWAGUCWNVEQCLZBALDYZIKVNJQTOITSGYGOBTRFHCHGYKQFNVQITBWORIKM");

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
    msg.setTimeStamp(0.43344847020209853);
    msg.setSource(15432U);
    msg.setSourceEntity(108U);
    msg.setDestination(42288U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.26646033196071506;
    msg.lon = 0.9322775573883003;
    msg.depth = 0.8818462401345682;
    msg.roll = 0.8662571377709645;
    msg.pitch = 0.018075025381365184;
    msg.yaw = 0.5891345898378356;
    msg.rcp_time = 0.07892964106420097;
    msg.sid.assign("TRJHEXNJUBQADPEELUIKGVIKGCPWDMYHOHRMKDRZBJZPDIXUBWUNASYYQWLVACXOIGRWYTZSCVHRIHXTVINWLXJUYJOACZEFUXLWUSYXKNTRVKHTJEFWTFFBJPFLRYVLQMIDTEDDSRVYTAYAHBFWSANNQFSIQOZDCXYLQXZLGQMCQZGNHZVSIBKOZPPZBXSGMG");
    msg.s_type = 205U;

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
    msg.setTimeStamp(0.8847746758408077);
    msg.setSource(38048U);
    msg.setSourceEntity(60U);
    msg.setDestination(36687U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.8527914179100922;
    msg.lon = 0.14047458180452033;
    msg.depth = 0.05431385436280789;
    msg.roll = 0.6787799344009451;
    msg.pitch = 0.3511223310929057;
    msg.yaw = 0.4035359400670663;
    msg.rcp_time = 0.38248802464961673;
    msg.sid.assign("XGRSFNXPNCNFGZQYTRMYCALJXOJLELVHHIBRWLMIQVRSLKBPZUJWBMTVZWMWSNNFJDXFBZWXEAMQNUHTPIHXPQPKOHESWGRCYFUOIZPONCJZUNOLVTDOSIELGLQYUBXOGI");
    msg.s_type = 249U;

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
    msg.setTimeStamp(0.7102607184184218);
    msg.setSource(41983U);
    msg.setSourceEntity(59U);
    msg.setDestination(19126U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.18665365111699672;
    msg.lon = 0.5829001296175594;
    msg.depth = 0.5690271991440577;
    msg.roll = 0.4548123576272205;
    msg.pitch = 0.4763409582053212;
    msg.yaw = 0.6231620920623392;
    msg.rcp_time = 0.8714219586814591;
    msg.sid.assign("CMNJYRRGARXSISNLAKUTQEDIJKRKKFHXDEIZFBHACROKSUBMGVNXILWFECODHOYVVDMNSAQMTTUAKKENZVSUULODTQNMPILMDRQHLEIVPZTFIIVHWHWGQCCUYPZNCTBBSVNVASMBVPTOPXOZZNKPWJWUDBPYCFBYJBGRFUGFZOYMGXCTOTEFWOPBGVAMNWJFJMXHBXRDUDFEXQXESCDSJRIYOUHH");
    msg.s_type = 49U;

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
    msg.setTimeStamp(0.6442378456055499);
    msg.setSource(51325U);
    msg.setSourceEntity(90U);
    msg.setDestination(54723U);
    msg.setDestinationEntity(196U);
    msg.id.assign("IDYHXOSGMAJVNGIVVRWVDKZKCFLUFAETHIHPZDEWOAWWUFEVCBCHKAYEZTXPBJRQDZOYVENGTMHUINJGIORRKZPKRZUXDSOBN");
    msg.sensor_class.assign("YJQAYOWLNKOOECDNVHTQMILOENLBAYYMGFEVVEHZEDYVCUQATZXNXWLRSCPM");
    msg.lat = 0.865038806164697;
    msg.lon = 0.4663046443174791;
    msg.alt = 0.38396694804379194;
    msg.heading = 0.749865586791981;
    msg.data.assign("FZJTIBOIXLDZZYMOGQRWCVEHQPIMHAMEODAJESNOTHJYYVFRDAGPLDJGHBYRYWBBYXRYAXXB");

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
    msg.setTimeStamp(0.10005258072602363);
    msg.setSource(56455U);
    msg.setSourceEntity(68U);
    msg.setDestination(10119U);
    msg.setDestinationEntity(180U);
    msg.id.assign("UPYIEEVEMJVFDBNAWDUGVLKUOTUEFHWIWMJALQUOGIQTYKJYIOMAJIMRKUVTDFIWITCTNYCXQFRLPRIWLKBGPBMOOSXCVJSJCESFBRHNDLUMWTCQYXHPZFGCHPQZHEBARRALXHCVHPXNWHKNAZYAZQFTDJXNSRIIQRBJMGCGALMTRMOSBKTZD");
    msg.sensor_class.assign("KKXTUZAAFIXUSRVBQIZVGKTTDZCWQWKOBZPZAUJPWVBDIVKJHBHRFHXFFCSOLICOJYLBNEESLEKJVMGBNEFBFNMHLRTMXLVDQFXDSUTYMZOZWYPGYGPYQWOPSTQRKHZSUJTHXUDIMOANBVNLDSVAAATFCSYNRPWULNEGWTEQVPLMBNROFBMHYRKCTYURHQCYOCNRGGGDGHDXJCIMYIEXMQLNXKKUPHCZEWQAUEPSOSMDWGJCOLJJXAJZRVIII");
    msg.lat = 0.9070737689568593;
    msg.lon = 0.3577149273176067;
    msg.alt = 0.4973268689099347;
    msg.heading = 0.4771562990155649;
    msg.data.assign("EBJIVXRBIUDWAOZXNGADTHTAISIDZVZMRUSISWQOCQDJHYZVLDNQJKH");

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
    msg.setTimeStamp(0.9200953030182725);
    msg.setSource(15943U);
    msg.setSourceEntity(105U);
    msg.setDestination(43623U);
    msg.setDestinationEntity(14U);
    msg.id.assign("EFBFUEPGZXRMNXISLFWWUSWZBL");
    msg.sensor_class.assign("TANUPLHZODIGYZFKZVUTSMUKJXSRHRYLWVYRKQBOHECFKCVAELYNQFJGRMZQCCRPULQSSJNYURYDNPDPMWPEXXFUMJGIJCBPIGTHKWYHBFGDWADIEBNMWRMOITPFKPRCWWEFLJAZIHLOLEHHD");
    msg.lat = 0.008644933876275407;
    msg.lon = 0.8834666634516469;
    msg.alt = 0.24090798261304247;
    msg.heading = 0.7884278475064095;
    msg.data.assign("DOJCROBKKSMDXJKAAQGWJNTKFJJNCAQJKTBTQQQFHXQMNHSLWSL");

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
    msg.setTimeStamp(0.2170137200588822);
    msg.setSource(42495U);
    msg.setSourceEntity(251U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(185U);
    msg.id.assign("ZZNJAMTUUWDDDHDFCJDXFOVMNZERFHPTXIWQXGUAZYBSKWPPXMWHXHDMYSIFXOIYOJQWTRSOHSPEJLLLHCKVXPCSEHZKZNDHMKIRAYTZNFRGVABTWZLVVRMFCLDIWUJUEAPGPVOBTTGVCFCBUJYQCUIBJZJEJPCMOTUBLTTEQBROOLRWNLIFIUMNOYEKCSJBFDASSGK");

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
    msg.setTimeStamp(0.9833732500972524);
    msg.setSource(54832U);
    msg.setSourceEntity(155U);
    msg.setDestination(48445U);
    msg.setDestinationEntity(151U);
    msg.id.assign("SRJSGAXCDMGGNIZAQVKKPBTKTEUBMQSDJQYEBJQZKXOXJKTLKQTWSHCBFHBMUGTVUIZFKFCXGIZCQZIGIWNSJCLIHGNAYWAVSTDYOHLZOYARPNQTKEWEYUIMREUYLXFWRPXXVSOMJOUGNULRNAHZRWXMDHWVYEDSYRNLMOZPSPIFUHPFGBEXMSEHEJAVMH");

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
    msg.setTimeStamp(0.12034870445962975);
    msg.setSource(11789U);
    msg.setSourceEntity(26U);
    msg.setDestination(61089U);
    msg.setDestinationEntity(54U);
    msg.id.assign("NTHFAYJMDRGKJQBQLAHSGLWKRLSEEVZIXNCNRPNBDVNXI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YGQCZFYBHFKXLNLBLIXKMSRLLVTHWAKNJGHUZIVFPFAKCUEHSYNCCJPEUYTBFMSEDARZTAXYMXRUUPKGBNVCFCWZTLQVMKZGTRQWZRJOLYTWQCMEZFGJJBXRNJSJWYQBQTPRCMIIIQPDKSXGDBPOFJVTQQWPOPHMOAKYLEBEIUHLHDJHUXOEXAEHTDZORNFNDKRVTNIOMOPDDQAHWGONEPVZWSIUVRBUOWNY");
    tmp_msg_0.feature_type = 26U;
    tmp_msg_0.rgb_red = 240U;
    tmp_msg_0.rgb_green = 115U;
    tmp_msg_0.rgb_blue = 88U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5344861003653973;
    tmp_tmp_msg_0_0.lon = 0.5047665554724211;
    tmp_tmp_msg_0_0.alt = 0.6199416636998144;
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
    msg.setTimeStamp(0.867043825939749);
    msg.setSource(28672U);
    msg.setSourceEntity(228U);
    msg.setDestination(44860U);
    msg.setDestinationEntity(138U);
    msg.id.assign("OUQUIGDJRRTCWDZPKPWFBQLHJIXIFMJGUEXRXNORNDAJEGHTMZWKM");
    msg.feature_type = 115U;
    msg.rgb_red = 33U;
    msg.rgb_green = 17U;
    msg.rgb_blue = 98U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.810845532469888;
    tmp_msg_0.lon = 0.3228446947283362;
    tmp_msg_0.alt = 0.5844018663337165;
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
    msg.setTimeStamp(0.5538408799199658);
    msg.setSource(35945U);
    msg.setSourceEntity(128U);
    msg.setDestination(45635U);
    msg.setDestinationEntity(148U);
    msg.id.assign("CHETDELXBYJLKNPJSVYRJMCUJMUYGKHHBAUFKCCDBUOKQYMSXWNWZZIVZSYOEVJCSITOSUTGNCJDVUTAGEWKXJDQRAQNDIVIIQFCQDTGYNRCDPHHLPZIILKQMINZPIPZEDZROZTQDXWFYZSNRHCXOS");
    msg.feature_type = 214U;
    msg.rgb_red = 237U;
    msg.rgb_green = 254U;
    msg.rgb_blue = 132U;

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
    msg.setTimeStamp(0.02671547151203868);
    msg.setSource(282U);
    msg.setSourceEntity(134U);
    msg.setDestination(25415U);
    msg.setDestinationEntity(149U);
    msg.id.assign("BWTRHNDVDURKTZSUAXKDYKVBIVWZJTZLHYRKZSORMODLVVSVGOIYEXNZTDANBWCZBPDCQYNTBXNJIRGSSUNLRUSPYBEGZGECIRHTHZPCEACLTSWZGPADCFIILWFFHFXTOODIBQKJUVROJGCKMGQWATMQJFYXJNAMCXROSVCVYBOTPBGEJASMLMHEAXGGLXIQICMBEOQZUHEPPXPY");
    msg.feature_type = 117U;
    msg.rgb_red = 77U;
    msg.rgb_green = 144U;
    msg.rgb_blue = 219U;

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
    msg.setTimeStamp(0.8367381352364786);
    msg.setSource(45471U);
    msg.setSourceEntity(203U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.7970159889852133;
    msg.lon = 0.8407049046353453;
    msg.alt = 0.9004669551854363;

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
    msg.setTimeStamp(0.5094805320394743);
    msg.setSource(12146U);
    msg.setSourceEntity(188U);
    msg.setDestination(144U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.7490696286638616;
    msg.lon = 0.24786582536369994;
    msg.alt = 0.5392125316598221;

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
    msg.setTimeStamp(0.03273515181298636);
    msg.setSource(47207U);
    msg.setSourceEntity(184U);
    msg.setDestination(8300U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.42934520062459136;
    msg.lon = 0.1120970707212472;
    msg.alt = 0.3067666632361593;

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
    msg.setTimeStamp(0.8240993002074731);
    msg.setSource(19395U);
    msg.setSourceEntity(96U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(83U);
    msg.type = 237U;
    msg.id.assign("GCQVRQQDHCTRRABJNGMJLDIWLRZKDTSMKOHFTXSQOLMWIVQFCRADTAAJIQNXHUHCPHOGFWGBYCSUFIYWBTWHTTXIPRIOSJRKMRUMEOXVBBGMNVHLAXILXNISKCJZVSFEYMBBPUDWCCJZLNFXNOGGTIZOAYWVBSUKUAALCSFGWYQLPKFVTQYPMOOUYNZEMDYQZOLNYZZENTZVWIDQADFAUUKKXUPFEPNSJSMHKJGEVRXDEHPEE");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 60021U;
    tmp_msg_0.lat = 0.44131702736697853;
    tmp_msg_0.lon = 0.9238899333004814;
    tmp_msg_0.z = 0.3846354920563798;
    tmp_msg_0.z_units = 117U;
    tmp_msg_0.pitch = 0.7008963804865425;
    tmp_msg_0.amplitude = 0.07625980905323715;
    tmp_msg_0.duration = 15744U;
    tmp_msg_0.speed = 0.5949114333993365;
    tmp_msg_0.speed_units = 51U;
    tmp_msg_0.radius = 0.32502793894118576;
    tmp_msg_0.direction = 111U;
    tmp_msg_0.custom.assign("CJJLMTAXGXBSWFRKYZNUICFEBDACQTUWLUETNALDZG");
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
    msg.setTimeStamp(0.35210467790070243);
    msg.setSource(56404U);
    msg.setSourceEntity(191U);
    msg.setDestination(23163U);
    msg.setDestinationEntity(160U);
    msg.type = 42U;
    msg.id.assign("TARCQJIUUCQVFRNSXMBBRYNQHJFCWYOYHAEOLMISOTPVAJPEBUJAWFDULOQXCLXXMCEMRZWXCVLDMQOUQFEKG");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("FTNBQEZQEJAIHXRJKSQNBXVQRYEUVZNZAXPKIBDCAODAHSARNTDMXEQJVYIMJGBQJRMXLSVPLTTDCAVYMXCLOHQNGIYDUMKFUYLOPPPFWWYQWPTKHMHDRPHTDENAWGUJBOJOFMYCRZMWRXAZJGNHKUGBEURZLONWLTZLSFIWFLWRCFDFOBXIBYCVHKFGQUKKHDMGVGSUGIZTZBAWAYCKC");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("TCLDDHSJOKQPXEJTCYGRBAUPKWBZCFV");
    tmp_tmp_msg_0_0.sys_type = 47U;
    tmp_tmp_msg_0_0.owner = 49273U;
    tmp_tmp_msg_0_0.lat = 0.20230618946368184;
    tmp_tmp_msg_0_0.lon = 0.9057893111533432;
    tmp_tmp_msg_0_0.height = 0.862222480584396;
    tmp_tmp_msg_0_0.services.assign("RAFLDKQGHHLEHPSFQKSUDPMKPTRCKNMGVNXGZDZUJITZIBIOBBCTAJXFAARQTVTFZSJLBLALSEIWNXSYUEHPVWNOKNBBPBZHTFGOXGTQDZLZMO");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.47212009971640534);
    msg.setSource(54385U);
    msg.setSourceEntity(129U);
    msg.setDestination(54460U);
    msg.setDestinationEntity(38U);
    msg.type = 154U;
    msg.id.assign("SQSVURYTLRBHAVELUZGLQNKPWRXCUSOYAUYVHHNRMALEKMUWKHMQPZEXUNTRSDTPLOZIMDNESWQMJHBBPDFAITABILGLZOYXKRGWQMIVVJPUWTAIFBHXOQFTYFTVOAKPEGDFXSZFBCITAWMENBHVOIZFDZDVXEWISJQYQCANDHGPSHCKJTVKMDYCREULCTGYWNJNEJULCDOOXJRNDMPMBJYJZFGLISPKZKCFBORSVPQKXROUYIXBGXCHEGZGJW");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("GGANDZCNWDMQHBJWWGUJUHYGWSLYD");
    tmp_msg_0.message_id = 45105U;
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
    msg.setTimeStamp(0.5223830457272727);
    msg.setSource(47142U);
    msg.setSourceEntity(245U);
    msg.setDestination(25199U);
    msg.setDestinationEntity(218U);
    msg.localname.assign("MMKAWSWXTQRFVWDCLXEUPWFGJTRHGPTPUGPHDOSQNEWGRTVAFEKPRORHCBNZQYUJQLHREQJYQABMMLLCSCRXJHGJPJYDXNAZANDXVKJOGASIZWKIPAASYHUAIRGFTDDRRSZEHEZKTFIIBLKIWOHSPBTQBCMNKIFZDVSZVKYXMEZUWULUEIQOPVZLXWQBGLEMJVSFYZCHLNYGEKVWDBLY");

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
    msg.setTimeStamp(0.3609261590575681);
    msg.setSource(56320U);
    msg.setSourceEntity(153U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(182U);
    msg.localname.assign("PWTYHLUTKQVPEEZQFTPEQTZVKGOKBSBMBULJLGPSGCOJDQFUESRHDXXADZTERVJARPKTXVGLHVVINZZLMRNIWFBEDGGZYMJYPELGSGKIDODWULXAFJGHOCEBIISWSFOZWDKOKCCYOFTDAOPCNZRBWFVQBXUBYFWPYNUIIYKSLJHTTCXQYMSMPALRXNDCZELOSQAHJFURYIZOGHIRRAMNMNWAHMYCAHQWEFUIWXBVHBMKNJAN");

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
    msg.setTimeStamp(0.11997556815198462);
    msg.setSource(52914U);
    msg.setSourceEntity(86U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(63U);
    msg.localname.assign("QRLIWOATUDTKCTZYHRMIJYJLMTSVAVBOPEFQBMNYMBFIDULBRZDSHWXMUZXRRINBZAVNASQEW");

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
    msg.setTimeStamp(0.47520594518088755);
    msg.setSource(58767U);
    msg.setSourceEntity(70U);
    msg.setDestination(39313U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("AKGFXAZUFISKSNKABQUFHYTUMEDTHDUVIJSGMNWIYEKGCBBBPOVQXMOGSWNAWXALLHDMDFAJJTFFGENRIUILFXMPTEWHNPDLYVYWGTFFUMVHPBCPLISGIJAWXCEQMRYZTGHHOQOSBWZZRBPYRVYERJXPBZKS");
    msg.predicate.assign("GTVCDDNNXFTXWGQEDDJGPBACZWWASPXLOPSTHOPZYIBQJRIELWMLTFOXNOYQKRNHVOEUNVERMYATCRPLZO");
    msg.attributes.assign("JYHZBHNLYPRGTPVXKUQKNFFQQVNOWINDUCZLINYDGUXDSILOUJQOENJZRCWNASAOSLEMRVURUANBUCLYRDPCWIJAMMKKTAIUVYDDHCRKOPAZVKQLMGQBJOSFYIVEYIJWCJBSWGGVQCHYAQXEPWFQPKRTBMHFVKNTGNXXPWTRZFUOWLJOEBJFYISMTSXAIGDOESGLBHCDJVZMMEFTBCPKCYSFZ");

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
    msg.setTimeStamp(0.09297919678569366);
    msg.setSource(53997U);
    msg.setSourceEntity(201U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("OXZHQESGMYAFJOACMGYTDVVWDWHHKXBRTZLFPFKJVRESBMTVLCLDIPAVRSZWQNHQFASNSXXVNMIMXBTQGMNVDKMUYNAKKKTIWXBAIDUIUPIZFWHEEVCEUUPYONDFEMLJQJCWDCKJJBHNIJGXRBOHEEDHPZOFQQQRSJWWRRHULOTKGUZFNCLFKRMGSGPUPZEBLXIPAOMTYPLAUUTGRDCICQYSZBNLVOJTGYYLYAHONZTEBKQPOIAWWF");
    msg.predicate.assign("TIHMKWXWCYEXXRDMDAMRXUCAYEAUPFDQUKTZBBULTHJCKWJLSORKSPJPMXIPWBXRODGDQRVMAWSNZUBNCDDLQCMKENLQGTECAOTMJRXHBXIPTVHKBIFDLCOGFVSBJWUVZ");
    msg.attributes.assign("AZFVKCWUSNGNYBMUFCKDKXTLUIGGIOCDCPFBTNJDFDQTHTGZMVUFWPYJBAHNLTZKSXLMGHZXGWBORDISDMWVORGLSAMBJVWISSHBOFZZRRCWEIKPNCVLVENYEQLAEBYMDFLOEAKTDUYZPYRYPNOGPCOITVX");

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
    msg.setTimeStamp(0.9138099141653263);
    msg.setSource(4882U);
    msg.setSourceEntity(89U);
    msg.setDestination(10586U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("MTDNTKJGABPQMHSXSLYGHMWSEPLLTPWCUVMERGKRZUIYSVBRTQSATIAR");
    msg.predicate.assign("DOIDYRQTFTFWCVNGSBCATZXVCSLWGUWIKSLBCXGDXSDEZHAMTKIDCGOKTPLIFRQHMGNYATLBNBAKYMESZUMVZDFJGKQXCMPEPPUMJFASYEAQLZDFWSXVNNWYAKPMWLXBVIQLBHHVIIAEJMFQLNXJIZXVPODBTYHSQAPGYUMRLQMKPUZJEOXBJYRHQOZNYIOBVTISRNWOWYRKNUJ");
    msg.attributes.assign("XXAJVTHDIMCPUBVKMDIQLXUFBKCJNXKQFAEVAJBSKBTPIRQFNNXRHCUXAFZFWIFOOZWAKYZGLPJYONVQGJUPRULPMPCAAJVOVIQEULYCLSKZZBZTYWLOGMROHFZKPGMTOHJEPDPCSYAYHLGNQWTXEOCRMGDSWFBONYNYEUQZCYNVRHIKEWIGNBDQMSLTRSDKTCWTHADUNSVHAGQSIJCWQFXDSSEKRZLEIMZWFIBUWBERTJLPDHVBXMJEGGHM");

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
    msg.setTimeStamp(0.32177216355822014);
    msg.setSource(44254U);
    msg.setSourceEntity(212U);
    msg.setDestination(55123U);
    msg.setDestinationEntity(104U);
    msg.command = 200U;
    msg.goal_id.assign("YBNYGQSHAFVGRQWNQKPYHSERLEAPLRUQXJPOPFSZOVOGEWCLPWOEQXVLTZVKOPLEABXMZDJOMKMMUJAMYDYYGHPXTPKHVMIZXASYOXJJ");
    msg.goal_xml.assign("QRCEGPNTAMLFKXFODZWMUMUAJLOIVIXBRKTAUGZSDHITMBOUJJISFYTKAHPLMLMZQKENXGAJDGUYVHFVQQXPURTSHESJPYBSEZDDHOWSIKVAWGBBOFRZBVMPJTLXKACWXASCGJETWHCMXTLYYQRHYOIRXINLQCPHXFSNQQVCNBZYDVUBUAMPDQDGYZCNWASKHLERLFCW");

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
    msg.setTimeStamp(0.12905437729854152);
    msg.setSource(60440U);
    msg.setSourceEntity(177U);
    msg.setDestination(18381U);
    msg.setDestinationEntity(15U);
    msg.command = 10U;
    msg.goal_id.assign("AHNJXJPFXKYREUYMGRKFSPFTLZPKEMKUQFIFCNUEZRRDDTBJLCXZZTULHLYMTIXBDNJSFGPSVVXEHQCZYTJDFHHOGYXCNLRCJMAFDBIYOEDWWERITYUCWTZQDKWOMBTAEEMBRGXMPJVMXAGSDZLKQYHOOWNUDHVXIZJ");
    msg.goal_xml.assign("FTSNEKEQQOQJDCKIJAPNZLUBWGJXCGUYGKLGYWUXMLNCIALOPVZTCTPSWRXGZRKECIRWCQXSFTHOGVHJWIVVZPDNUOLWUQTDAUGYRIMXSPYFDQRSUZPVZKYSMLJGHHCMXIGJBVQXYAVWUBNLIBVDOJKEICBJLMFVZWMOFESPDHATNDEGTQ");

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
    msg.setTimeStamp(0.09944875070333392);
    msg.setSource(62743U);
    msg.setSourceEntity(246U);
    msg.setDestination(62553U);
    msg.setDestinationEntity(34U);
    msg.command = 196U;
    msg.goal_id.assign("RFUQOBJDINGDQNXRQIKKDYGSMLLLBMHSEPMPEQZZPLZHCDXIBXERJKFAPSEZLAWOGOQHEDYODYLEVCWVSOEITYURZXUJQPZTTGHCIATJPRWCOJLUVWQAXAMVDECGKQFPGGUFHXOIMFVYTORAKKCSCBTIMOLFYBRPETHABEDXLMQRIFAVLCGMMQNJTJJHDOSIFNKWCGHPJWHYTWXSWWPBVWUZKMKYNYRSUUNJSBVHFCXNUVXFNGT");
    msg.goal_xml.assign("HKNFTSUYORAWBDHTRXGKXVJASXCRMEYCXOEUMQCBIBZMUVCQITIUNCZSPWDAZZHTEOECKEFFJQIUCTUAZQPGGNDDKA");

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
    msg.setTimeStamp(0.17867248073560116);
    msg.setSource(41067U);
    msg.setSourceEntity(121U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(224U);
    msg.op = 233U;
    msg.goal_id.assign("KMWUAVEPQFDOTLYKDWFDIUWPDPMXKXXSIQHABSBUBUGYCUZCUZMUWSBGIECQRPHJKQGOMJITCRYOHYXUZETVANHKZURPSJKDFPCQHGBIAKFRRUNJSWAXFDIYDSNFMZJAORHSMJWFZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JHOXAYVZEQPNPCRVVHRNWIWHSEMHCWFBQLVKRCGHFFKVXNJDSPNEDTQCQPNVHCHREIJEVIDBEOPLXDIIENPBGT");
    tmp_msg_0.predicate.assign("ZUQGTHCMHOWVQSPZILRLUAZZGVPDLXDFWMNRFVCKEWUKSGPRKBQQUQFXYFBSTCYFBOHSBAQIGQRJJSOYDOYLPDBAFGJWOTWJRUHHHBNIALVSZYHNSTTJIDLEEMBTWJAOMGXTWMDSCUCPFYZPDPNFIPOBMJSKAWYRGQTNWVONJMGKHVERMVVELUREGXEZJIYXCCESYAQXCBIURIHKICZNTVKLHXOTMDLJINUKV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CPTKSPRONBOOPNYXISWLEUEBFOIISOWEDJTARQZHFMSUARZOIDDCEPWHQOKXILLGEJUDFKXTVPAFILHTTGDYPDCHNIZOQAJDRQTYQBSSMUEVHNGJCMCFBVWZMREVHICKKVJWKTNQBWTFUPAGOWVBYMSXKYUVOIZECWFAXALHQRCYYNLDZQU");
    tmp_tmp_msg_0_0.attr_type = 31U;
    tmp_tmp_msg_0_0.min.assign("SMEJISLWKECOGHCINHKFIUIXYLA");
    tmp_tmp_msg_0_0.max.assign("RKIQKOOLNAYJBKGEZZSHMJBKCZOYJQTRDXBTKFBVXPPMBFCBSRWVYCNPGZBXTHUUFCENIRDFMXPOXITDLLUXSAW");
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
    msg.setTimeStamp(0.8238691214827275);
    msg.setSource(10814U);
    msg.setSourceEntity(17U);
    msg.setDestination(64794U);
    msg.setDestinationEntity(230U);
    msg.op = 179U;
    msg.goal_id.assign("QNVCCVEPQSFSKLKMWOGHZZSSNEMDULDBBUAWSIHLIBYCFXWCHSTTWKNGEMYEXKQRHHEJMREQHRATCQBJTLLJXKFMCARZRRBEJZJGUDITOJGWRGRZBPHNUDRGLOYPGLIBGPFFJQLTIPCGWQFUXIXPAWINWAYEQZTFFHVKNPZGMNKEPXXYLXNNROIYVWOAOALAPVAXDBUAVKFSQVVHCDNIOPHMDDSYSMTVITUYOZBYDXJKOZCKWEOUJQCSDZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MDARYCAGSFCKNXHHKOAIGDLSBIOUTSYDNPIOEONZCRROFZNZWKRJAUDVYVDOSGGYRNVNMKMQVUTG");
    tmp_msg_0.predicate.assign("PODMPFALUBNOZTCJYBJUSAGVJBYHDYSXPRORPNLMIIXFYQEEDQCIYRPIWCWNCUIGEIRCBVUZRQCVAPQMDKJHISFOCRMMHSGHBGRWIADKGKPQQQKPXUKWFAJGU");
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
    msg.setTimeStamp(0.5873500480280307);
    msg.setSource(28858U);
    msg.setSourceEntity(97U);
    msg.setDestination(52400U);
    msg.setDestinationEntity(174U);
    msg.op = 91U;
    msg.goal_id.assign("LRGSDIXMANTSSWNQTDCXPRLCSGUCQFJOOWWJLIHEMZWDDZYWELAGGJIJMNKVKYGPYBBNSUDSEVDFWOXITAFIOFZLMQOJRKFCZYNKTUPEHUCGFVBAUZMVAXKNVXWPHFPJFPAFQMERSXV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YMHCPEBMCRKLZAQHLNLLLKEDSLMDZPXITUXWYFWVVGFIYSTOZBMOGSTLNEEHHJCANFOVGWHMSVSWDVPQYTFHCDQVAYKPLVRMFPYDAPOHEGKIUXRUCNWUTGJXDIROZSUQMGGEPGBHUQFOQ");
    tmp_msg_0.predicate.assign("NLIGKSRYBXYOQMPDERMJTLBZNRZQCPLUWEAJVJBKVHYENAGUTWXUYQIQQXVZECTAMVZQAPVLISXTCWKTJEFOUWYWDNUCCRZTOGBFBUEYXPZBVHJSYFTLNSFMGPILRDHHFODDFDKNZYODE");
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
    msg.setTimeStamp(0.029345068552217968);
    msg.setSource(51032U);
    msg.setSourceEntity(57U);
    msg.setDestination(33559U);
    msg.setDestinationEntity(2U);
    msg.name.assign("KEHNUIJLDUQZRUHWAIEGHDMTRIWZCMKNBCUOPRZIAYOYODYMAUXQSQVHFCMPMWQPTPSXWESJYGCROLIZETBVODB");
    msg.attr_type = 149U;
    msg.min.assign("RJLNMNPSKRWYTHFGYPYNGDGOEULQIBVAIIJLAMMQGJZVUBTFFYVQAP");
    msg.max.assign("FIZUWRTWBQZORPZEIDZNMDPGIIHCREAGVGVJRLPEESTANOAWXPOHNGUFZAINPSNEXVGKCNJBYRTRAXBOKHISXPCUNTSQPFALVYKQEXOIMGFLGKVNTXV");

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
    msg.setTimeStamp(0.2955316972445807);
    msg.setSource(20111U);
    msg.setSourceEntity(32U);
    msg.setDestination(60359U);
    msg.setDestinationEntity(18U);
    msg.name.assign("WRYUHFJZQSYGIBSEXJVXKTLYGSCMOWARUOEDNNERNZJXLXRHGZKFBBPTADKTOVASCMIWPEOJSXVNDHQMJZKSFIHZPSUAVUGPEDUWMKAXQKZJOEQHCIXEZCDYWEGHWCFKROBFIDFTNEVQQFITVPRMXOIOS");
    msg.attr_type = 32U;
    msg.min.assign("AQWSLJRTJXWJQUMAGKFCYRXXINWN");
    msg.max.assign("BXFYYPQRCPVVGIVUXZZQOYHDTFJNCGMZVNZMGM");

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
    msg.setTimeStamp(0.7261716958382064);
    msg.setSource(53304U);
    msg.setSourceEntity(40U);
    msg.setDestination(36127U);
    msg.setDestinationEntity(94U);
    msg.name.assign("XYIZZWTKBVVKUKGPRCNZAYVWZMGKUFPUGBOIEVMV");
    msg.attr_type = 126U;
    msg.min.assign("JMNQBWADTMHDECWTIBLYUDSYQUWGOUXFGCVLAKMDUMBERRVYPOGNHXSKUVBJBMIAZPJZQSTFRJYPLISASENMKSCXLCXAIJLVWDYRUVAPIEKQYFBOZHXVTDHVAIEEYSGE");
    msg.max.assign("TSPLKCGUXUPBNMZXLRRUIBOXVGIYKEJJZTRAMOEGUQHMZCWZEMYAQTWDDKEXYPVKQSSGDWFIZFNCYJLKZFJGLLDHVSJBQWGBRVVTHWFATSKEVXCXVNHKMXEATOOBUIWIHFLBVBPKTWAUIOESUOINAJESRTFROCAHTCDNMDEPXQECFJKRJAPYOZDCQUJJPPKBAFOUM");

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
    msg.setTimeStamp(0.9986813055229273);
    msg.setSource(21886U);
    msg.setSourceEntity(180U);
    msg.setDestination(60734U);
    msg.setDestinationEntity(128U);
    msg.timeline.assign("BYUOSVEWSGIUHHGEBRADWMSAKBTDJPGBCBIGDBCYRNBLYQQSODUMDDWFERRVLNFXGLAXIGFOSLGJVNYTPVWIQAGKXQLTOKZTONWXDWFANPDUMFHMECZRVICSQTTXYTJCMHTYPMNHOYOXOSRCJAWMEDJLQFQZAZVPKEPHPUKUYXJVTCZVEHYOMNFBFPBSZHIINCXUJVNQWZUQHLAKXBZWEAKWUIENXJROCS");
    msg.predicate.assign("PCHMMRCWPVETOODOUDOKGISPNMAJXMQKGPUUHMMSDZWQXRWSUPIJLFHLUNOQTFLNJVVSFHYDKGQEAEFUFPKVRLVNWYSBKGKFSCWKZRBWWRRDAOTLVYNLQXBZOPEUTCDYIHQZGMYUBYAHASNGZCSGJJAEMDXZPXYQIPNOJETXBLHYPBEODTHDUGZQUJWGIAJWLIGZILVFJETBIZLTQCYESI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DOTHKOAMDSAKVLBQTSBHJRJACTLMAYXHVWIIOZVAJERGGENIMNHLXWTLCTRDZHZP");
    tmp_msg_0.attr_type = 78U;
    tmp_msg_0.min.assign("IFXONZZWMUDIPDNGXOCFLZXRKDNLICECHHJESPONRMWQPGMXTGWHQELSEJBQCHP");
    tmp_msg_0.max.assign("CCSZTAVHWRCIITJGRDCABOTIZOGVLDOTQHHU");
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
    msg.setTimeStamp(0.7475341708248596);
    msg.setSource(53718U);
    msg.setSourceEntity(245U);
    msg.setDestination(4762U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("BSKHEXMGCIXNOSLHRRVLXTLNBLCYFMXEAZNGJSPFJIRMZXQJXSWDCFVAEGUMHZUVOEDRNCJHJVDCKZTQJFSFMUAPBLLYRWMNFHBTKRWYZFHUDQIPOOIGHTVHWNQPUOJSGRYTYIERKCNNPGWFUTCIDPSQSYDZPQNEIKTWADIXATLFWCTJJAVYCBKQZDBKYYAXZMIQMXUPKDAGAGLUVWOOBZLNEVKQSAJPCRVOEZHF");
    msg.predicate.assign("WCVEOHPERYBWQOKNLBRXN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ONJPEMBOGRWACFWEJYWEXUTPBWCUTQMJBPKGNEGVGFDXGHMAZFVLJAUEZGYUNGGWUHCEZUIZVQHCKAEBJLXVSPCKBZMHILLAQITLZOYWRMTDDDOGMIZTBBFXENFMJATTIOFHVHWNLWKBTOSJYKPDCKQYLVFFQHSPUPROSCXCHQXDIJYINIALRAVLRRRYZPZXKEORKHWORBTKVISAJPYDHUXATXLUFSWQIUJ");
    tmp_msg_0.attr_type = 148U;
    tmp_msg_0.min.assign("KEVGFVLYOYMDQUBHNIFUQMPXJGATZUWGFIHPOMFWSTWBYJONZBQSGYVIAHSERRTMOPNXRLTLNFWPDIKAWMDDYKCMRJLTZRDXQWBWBMZPNLCCAKUAGTCKJZQZOAXQXLURIEGMYCUNCSAVHBYCJAKEGRKXPFUSBSZEJGQVEHULKTMYQYEXRPVFDISJBXHXHOCWOJCJFNHRJQNXHFWNEKOVLCZAINUPZGTVAZ");
    tmp_msg_0.max.assign("TLYCDMEKCYGDMHTXGSFQXASOMXEUJWZXIEFXZMUCTTWMVOGACNKGCWJYJWIYODNNPIAPFKRPXJNHGFFJRFVGGACGDITKEHHPCNCSUMPGBTJQT");
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
    msg.setTimeStamp(0.472526515557383);
    msg.setSource(10345U);
    msg.setSourceEntity(186U);
    msg.setDestination(57400U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("DJRVAXTCMZMGPMZSPPDZXTRFWZFIZKRGENXKSOSNYVHTKVLLBEUKLDZRYXTILPTNYWCALJNGQAIQYANEJSPHCWKCQODKYTNJSESYGLVVGSGUWEJQKTRZSHBRXIKZMQAOGCYBTUBPEAEOURFXOOMTHJGJYEILNCAQAXKTCVBLIUUVBIIPQVFMBHRCDMFLNPCMYHFGNZNCDXDQGDQHRQWOHBXSAPOUUPRIMH");
    msg.predicate.assign("ULLGXIZWEYDQYARGHPJPJFVYCVTCPWUSNSLTTKTGEHSXNHZPCVBUBCAMKRQXYOECZYIDGZWLDFBRAGQZQNAHUWFGIEUOOMHPZLJRDUKUPSKYPOBDNSJSKTYDGJEUESFMTIWMUZASDMYTWKLHJRPRRSFVGWAKXXXFMANXJLOQVRQ");

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
    msg.setTimeStamp(0.062219412550344244);
    msg.setSource(34255U);
    msg.setSourceEntity(167U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(81U);
    msg.reactor.assign("AIKUDKWBKYWCAXWJIQJDZDZSHCCUTGBWIWIDUFFXTWLQEMEMYXSMECGJKHAIRSAXVQNHIPQKJKXHLECMYTATHORYVGNKPBUZCSZRNTGYZHUUALVSWPJTLFSDNBNRTEJGVPVXMP");

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
    msg.setTimeStamp(0.7806394342964831);
    msg.setSource(38911U);
    msg.setSourceEntity(91U);
    msg.setDestination(43997U);
    msg.setDestinationEntity(76U);
    msg.reactor.assign("QHGOFJJAJDXWIKRQESAGBHDRGSYRVPCWOBKZQOWIFODIKKDWXJFYFVLPDZNMNQLQDYFFCFCFAAYRWSH");

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
    msg.setTimeStamp(0.16487099201526345);
    msg.setSource(3912U);
    msg.setSourceEntity(191U);
    msg.setDestination(53674U);
    msg.setDestinationEntity(229U);
    msg.reactor.assign("YJGQKSLNRXEYEKZAZMGI");

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
    msg.setTimeStamp(0.6454051344685959);
    msg.setSource(22325U);
    msg.setSourceEntity(14U);
    msg.setDestination(40741U);
    msg.setDestinationEntity(233U);
    msg.topic.assign("KVXWDZMVJTIIWAUBRJJSMYNIMBEUSKBJGPAMAAVKYVRKOJSFTGLKAXFDPPEYZQGHNWZITZFHGVAVYQWENTDUDFUMDIGEWHMOTCKXFPTIMYBUFLFLRRQFGJPUVB");
    msg.data.assign("PEFPNURDNPWABCDWNMMAMXXBQFSVNNWSKLHWYBKBQFJNGKYLYYQXBYBRYTSHSFGO");

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
    msg.setTimeStamp(0.5111198855719113);
    msg.setSource(26683U);
    msg.setSourceEntity(74U);
    msg.setDestination(39574U);
    msg.setDestinationEntity(72U);
    msg.topic.assign("DGYOSUVFACAWQEIZHVOWSDYXVLOKRPKXKYOTNLWLSCRVRGNSDQZJMTDBDABOAZEI");
    msg.data.assign("JCBXBLZBQRIZYLMSFETBULSRYYMDNKPOUKVSKJOCRQVYHUQJMGOMTJBLCPELKUBAZVPNSGZGAVDZGXOJUEC");

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
    msg.setTimeStamp(0.26799059281353144);
    msg.setSource(12571U);
    msg.setSourceEntity(33U);
    msg.setDestination(37661U);
    msg.setDestinationEntity(82U);
    msg.topic.assign("TUMEDYSHCNEQHWPRJTKBJLMNIGFNLNNPZZFXXFWMGSKUXBFWQEJMDQGTUZOBZTGPCBLHPAWSITHBETIRYPMHLFJOTFILNOBGKWOTSYEHSRYCZUAATVKVIZJMUVCVOWM");
    msg.data.assign("EBIMUJMXTABRNMOAZGZRJRZQDSJXYGZXZAUOQFBKHDZMKUGQADCKXTNTVLBTGXJUIRRGIFYPVPPOVFKSRNUUMNSDXEBBQGQJMUFDTOTSJKUFQIRTMWWPVYIOHCGHKFOCEDGLFESNOWWFLLYBDCUKAHVQQZLLZXWMCKCPYYGC");

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
    msg.setTimeStamp(0.9205858647626438);
    msg.setSource(26220U);
    msg.setSourceEntity(188U);
    msg.setDestination(31706U);
    msg.setDestinationEntity(56U);
    msg.frameid = 215U;
    const signed char tmp_msg_0[] = {-19, -24, 103, -11, -86, -11, 91, 58, -42, -118, -22, 17, 100, 73, -83, -125, 87, 111, -71, 69, -127, 47, -43, 82, 13, 11, -11, 83, 40, -96, -83, 124, -86, 19, 14, -38, -98, -104, -124, -26, -46, -42, 9, -41, -30, -61, 92, 96, 75, -99, 79, 50, -63, -1, -79, -110, 1, 5, 124, -109, -50, -125, 46, -116, 112, 14, 74, -127, 51, 30, -27, 123, 110, -6, -35, -22, 90, 50, -86, 97, 48, -41, 112, 114, -9, 66, 43, 5, 36, -34, -101, 88, -28, -23, -15, -9, 109, 91, 72, -87, -109, 55, -96, 109, 44, 84, 25, 64, -58, 119, 89, 56, 37, 27, 45, -57, -101, -120, -110, -78, 60, 51, -87, 34, -59, 78, 65, -116, 1, -18, 124, 77, -82, 112, -122, 57, -4, -100, -107, 126, 107, 48, -108, 107, 112, 42, -97, -37, 47, 126, -29, 5, -66, 103, -46, -65, -62, -47, 34, -60, 65, -28, 18, -67, -113, 109, 74, -18, -60, 104, -81, -105, 88, -41, -92, 8, 37, 78, 94, 116, -29, -1, -88, 123, 115, 102, 23, 21, 2, -110};
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
    msg.setTimeStamp(0.6804267134445485);
    msg.setSource(30353U);
    msg.setSourceEntity(107U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(0U);
    msg.frameid = 51U;
    const signed char tmp_msg_0[] = {-26, 19, -23, -64, -3, -1, -120, -86, 45, 28, -26, 17, -103, 18, -25, -28, 83, 125, 40};
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
    msg.setTimeStamp(0.10220345099744332);
    msg.setSource(37845U);
    msg.setSourceEntity(152U);
    msg.setDestination(64588U);
    msg.setDestinationEntity(40U);
    msg.frameid = 1U;
    const signed char tmp_msg_0[] = {72, 71, 46, -19, -128, -126, -6, -20, 70, 67, 26, 14, 55, 81, 51, -118, 84, -94, 79, 64, 104, -45, 11, 14, -50, 38, 2, 73, -70, 15, 109, 108, -25, -61, -88, 10, 70, -120, -36, -112, 84, 19, -57, -122, -40, -112, 42, -78, -16, 40, 120, -2, -40, 108, 79, -96, 116, -63, 76, -40, 13, 102, 122, 80, 49, 35, -4, 2, 107, 18, -128, -22, -51, -2, -45, 23, -19};
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
    msg.setTimeStamp(0.12164059963691543);
    msg.setSource(28539U);
    msg.setSourceEntity(48U);
    msg.setDestination(63844U);
    msg.setDestinationEntity(56U);
    msg.fps = 174U;
    msg.quality = 96U;
    msg.reps = 148U;
    msg.tsize = 85U;

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
    msg.setTimeStamp(0.023250452483860373);
    msg.setSource(20892U);
    msg.setSourceEntity(113U);
    msg.setDestination(8835U);
    msg.setDestinationEntity(78U);
    msg.fps = 205U;
    msg.quality = 210U;
    msg.reps = 20U;
    msg.tsize = 7U;

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
    msg.setTimeStamp(0.6766628061134083);
    msg.setSource(16464U);
    msg.setSourceEntity(228U);
    msg.setDestination(5697U);
    msg.setDestinationEntity(112U);
    msg.fps = 18U;
    msg.quality = 208U;
    msg.reps = 47U;
    msg.tsize = 243U;

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.469503093923471);
    msg.setSource(29121U);
    msg.setSourceEntity(61U);
    msg.setDestination(23844U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.10919883669851338);
    msg.setSource(18843U);
    msg.setSourceEntity(164U);
    msg.setDestination(10431U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.8674447894034945);
    msg.setSource(5904U);
    msg.setSourceEntity(8U);
    msg.setDestination(29474U);
    msg.setDestinationEntity(163U);

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
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.5634820551189484);
    msg.setSource(22435U);
    msg.setSourceEntity(114U);
    msg.setDestination(51638U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.19295341432003876;
    msg.lon = 0.45967771394606627;
    msg.z = 0.40429551772340344;
    msg.z_units = 41U;
    msg.radius = 0.5437336594033189;
    msg.duration = 14214U;
    msg.speed = 0.009736021707023368;
    msg.speed_units = 79U;
    msg.popup_period = 25886U;
    msg.popup_duration = 44218U;
    msg.flags = 102U;
    msg.custom.assign("LAEZVFZPLVFOWXSGCNFUFPDQMMUNGBFJNCTUSEGYNWWQDLXEHFHKUACILYFUOMNVWBUVBDILZBZPIXR");

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
    msg.setTimeStamp(0.2508408678101546);
    msg.setSource(37577U);
    msg.setSourceEntity(252U);
    msg.setDestination(26013U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.505782836295383;
    msg.lon = 0.493826090064884;
    msg.z = 0.7401682130086963;
    msg.z_units = 206U;
    msg.radius = 0.13627328380943926;
    msg.duration = 34736U;
    msg.speed = 0.719680295365881;
    msg.speed_units = 93U;
    msg.popup_period = 29479U;
    msg.popup_duration = 37365U;
    msg.flags = 87U;
    msg.custom.assign("RGUZKTOJVURTCTLFJTNCDRYNZYTHWABUVSBOVBUQULFGWMXVKOWQZZLKQYTHINEMEXSJIRMCQQALKWVMDOBIMXHVJXPXMAEBCATJBJYSSZENGKPAOOELUIVSJYDWVPHDQQXBZGKKSTFCDRYBUSWLFPSVGLZFAMDNDOKKLFJMZERMRGWGCPUYCNCPTFHYPUHNWTXIPAXABAHXNGNIQIHQEHMPKFXOGFRLZYUCWBY");

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
    msg.setTimeStamp(0.8196725673993692);
    msg.setSource(17760U);
    msg.setSourceEntity(103U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.28320761413184115;
    msg.lon = 0.9248050299430437;
    msg.z = 0.7386173378429475;
    msg.z_units = 235U;
    msg.radius = 0.4131573410247449;
    msg.duration = 40288U;
    msg.speed = 0.4493580911621926;
    msg.speed_units = 126U;
    msg.popup_period = 51287U;
    msg.popup_duration = 10184U;
    msg.flags = 130U;
    msg.custom.assign("OCYXVPHBOEMQXRVQYASDZNMWXANUX");

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
    IMC::RemoteState msg;
    msg.setTimeStamp(0.31260788565624964);
    msg.setSource(47609U);
    msg.setSourceEntity(157U);
    msg.setDestination(47767U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.9055498696011267;
    msg.lon = 0.6767943786576257;
    msg.depth = 91U;
    msg.speed = 0.21154602596056005;
    msg.psi = 0.7896012438385416;

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
    msg.setTimeStamp(0.39141679919192274);
    msg.setSource(28930U);
    msg.setSourceEntity(76U);
    msg.setDestination(49838U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.009951259025058556;
    msg.lon = 0.4344339483431594;
    msg.depth = 234U;
    msg.speed = 0.6887242229992554;
    msg.psi = 0.5730948005480737;

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
    msg.setTimeStamp(0.10203258410024263);
    msg.setSource(55077U);
    msg.setSourceEntity(193U);
    msg.setDestination(25111U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.007141256854133693;
    msg.lon = 0.639939447041137;
    msg.depth = 94U;
    msg.speed = 0.3801992149523802;
    msg.psi = 0.26356165483322824;

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
    msg.setTimeStamp(0.8882711937632659);
    msg.setSource(38209U);
    msg.setSourceEntity(146U);
    msg.setDestination(58621U);
    msg.setDestinationEntity(150U);
    msg.label.assign("TAJXRQHIECHQJMMAPPOLSOMTYTUHIACVFDZAVIOWDMBRVWAMAFZQHZJLLRBRZSHEFGWQUHNKXFWVZHGLWMNRQXVXIZYFYLSWQPGXDPOKOKHCYMSTRIEPIEFAFNWSNGNUYIJTZWFDSPELZWAHKVXJNBPGIJBBQOKD");
    msg.lat = 0.896750666391515;
    msg.lon = 0.08806457628727038;
    msg.z = 0.6943160857793667;
    msg.z_units = 142U;
    msg.cog = 0.1467566604987387;
    msg.sog = 0.16646722959281646;

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
    msg.setTimeStamp(0.11354219035069579);
    msg.setSource(41012U);
    msg.setSourceEntity(216U);
    msg.setDestination(886U);
    msg.setDestinationEntity(4U);
    msg.label.assign("VTQCTZYVNFJQSODXZTAPJCKULSETIZEYNWKOVMHECPECRNMGKOPLMHINASRTJGBNYMPLUNMLNZJOYDRDWGZYZTWFEGBIBKQGSFGDLRPCRGOXWAHSYXTJBBBIUBOUVYNEVGXCQWQZUBDOAXFWQXHSQDYLRVUSKPSHXYW");
    msg.lat = 0.6181973348467711;
    msg.lon = 0.1505924106318084;
    msg.z = 0.16137519795270305;
    msg.z_units = 136U;
    msg.cog = 0.365859125433056;
    msg.sog = 0.36380203929846866;

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
    msg.setTimeStamp(0.4794022017507755);
    msg.setSource(48385U);
    msg.setSourceEntity(195U);
    msg.setDestination(58008U);
    msg.setDestinationEntity(228U);
    msg.label.assign("FBENRFKKMVZYHYDOXQQZWTCQ");
    msg.lat = 0.9876406005009042;
    msg.lon = 0.1595098640260093;
    msg.z = 0.1884382915138051;
    msg.z_units = 72U;
    msg.cog = 0.585435248607554;
    msg.sog = 0.5274175215142978;

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
    msg.setTimeStamp(0.5212309684385927);
    msg.setSource(24514U);
    msg.setSourceEntity(185U);
    msg.setDestination(61009U);
    msg.setDestinationEntity(180U);
    msg.name.assign("EUVGWRYBORBLDHDPPQSEMTEEOEMVALBMMZQSQHIOQRKKDZILLMRCJBDTQHVWWCYXPFUIZUANUBNJSLTYFXCEBSJZKIBTOFKXSEUWJYDSZTSYCGISNTRJGAEUALMGAQUNXJDMFJRDVUTGYRYVVFWLSQHACWPO");
    msg.value.assign("DOHBQMBIPHWJTMDHVRLYNKFIIRLQQWSISGZRFHTYZDTWLPMIETFIENUOUFGPOAQSRKKLLNYVDESCNRTUNNKJPXSYLLMDWFDWMFYSWY");

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
    msg.setTimeStamp(0.41525025701577545);
    msg.setSource(44410U);
    msg.setSourceEntity(69U);
    msg.setDestination(56898U);
    msg.setDestinationEntity(76U);
    msg.name.assign("KHAADAIHITWYDGSRESIYPWNIVLDFJIYUSZXMZELTOBPCWBIRNFJHHOTXYNKNQHGAFBMMKPIQOTUUPTEFRSAKGDYOJFADGZHRO");
    msg.value.assign("FMZLQTFVOWEDCRISCZAFPARFSCLELDDPUNCONSFAMHVEEKLXAMGIJCFPOURUJXQGDUXWTOXWLRPRTDPGRPREJWYVJLRWJSTW");

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
    msg.setTimeStamp(0.6603822028287271);
    msg.setSource(12936U);
    msg.setSourceEntity(214U);
    msg.setDestination(58869U);
    msg.setDestinationEntity(213U);
    msg.name.assign("MKAIKDYNYIGFOVUCQLLECTTNMTXMSZQKGHHVQSHVPJINNWCAXPNSLXZIPGFHKHLRJXIOAWZKTEFVZOYDZJJKATVUCXNSTRDOAFZVRGYMQBOQLFETSFO");
    msg.value.assign("LBRSHXPYONWUUYSVBLSYKCVMOTDJHXBIFQXIIRCTJDJPYZSZRQP");

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
    msg.setTimeStamp(0.04660471970765079);
    msg.setSource(56417U);
    msg.setSourceEntity(43U);
    msg.setDestination(65384U);
    msg.setDestinationEntity(56U);
    msg.name.assign("QCXOTRULGMQGCHLYDMCEMUGSATYMWNODXXILWVVBWQVTJJJVSZKOLSVPGUIRIHBCBSCAUBMTXZKPMTEGMNEYYNNONCPRUZSZFPSWFVUOHISAKNAOEKITKYDTJVWGZBUFLEBYRJKEDHYXEM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TVHNEQUXBLBLTLTCOYREGBVALMTVGRQJFQUBYZZZSXNXFCEAQWPVPNSSWYROKUMAAQOXGEDGQBZJIAVQJWCVIKFDTRLDZTHJSBNUDUGCXNORGOFOMAFRMHIPRPDHYD");
    tmp_msg_0.value.assign("ZGIJUXJRGMQBNVNBXVHOMZMKCNCXCJRGSBHYBHGTCHQFLNIGELDUMLYEUUFFOGLW");
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
    msg.setTimeStamp(0.5529382759741654);
    msg.setSource(60718U);
    msg.setSourceEntity(137U);
    msg.setDestination(19373U);
    msg.setDestinationEntity(78U);
    msg.name.assign("VQKXTEQSBEBZJUSHHIWASVYCSOFIMFUPOFNMSXEKCPMNPXGQVTHUVBLNZQMRMZPTNCZYJBJUGKRNLTQYWJRXCRNHGPBECDYGADSWSUJWBRNMGLRJMJTKIEDYLDAAZSXHEWFQPLJXIELDTTGIDI");

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
    msg.setTimeStamp(0.12985470644217434);
    msg.setSource(65460U);
    msg.setSourceEntity(128U);
    msg.setDestination(57758U);
    msg.setDestinationEntity(2U);
    msg.name.assign("UXLMWCLRNBANPQHDMRRKWRLDDUKIXBITMINDPFNQABOFJGVKCPQGLCMXWPOIHDYYTTJZXVUWIXFTRNENOPLRWOBYVPCHLDUUGZVINYNUCJTOSXYXCZQOZLWHREWRESKAMYPJJYAG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VUBOJHQCCUDUOUVWUBQMUIOPRWKBXDCGGPSXLBPZQOMROYGNYNHCBVRRHWJMIRVENDSYANIBAZTGQSRVJJFCMAEZPKOVZWTWLEGKSLWDNYJHRAZYAJQIENPBPKQZCGRGDAJLALSPYNELYHDQWLAOKWMCPZGEEESWADFRKIUVIKBZLTTACTSXOPUIKBTHNTXVSUJHSQXFPXCOFMSE");
    tmp_msg_0.value.assign("JLUXCFZRAJCBLVTGPTVOTGFMHXVKPWOURNAQFMIPBRBWUQQZHWTYXAGIGABLDYCXBBEVMJJWSXMVBGZEJONHGYRBHMCQPGTUEODOCIUOLJGMJKYKTCTHYSGKWUZWIZNQSYEEXNPRRLGA");
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
    msg.setTimeStamp(0.06725212767883193);
    msg.setSource(18396U);
    msg.setSourceEntity(49U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(157U);
    msg.name.assign("RIKUCQDMZYQXQVENIDEJGFGUKONCPIUDSKOGXNKHJAGMRJKVOTTFELXTOYZXRIIJLSBXEPZYZFCILVJHUUAQKHHHBTZMZBIPLLWHOMBDLSYYSZBDBFMGRICGNPOMWZWUAPSVVOMKQKBELPGQXDWMHZORGRZJVBPAOEEAJBVDWQTAP");
    msg.visibility.assign("VBJTARIXVOLHXKTSKPFBFAAJPSTUBBKLNCLDMPAAHWDWSGIRXYQVHQROUECUWPKIMTMRMQMDRQDLCHSGBWWVADRZNDEQGYHKRZHIYOYWNQDLBRZXNLHAGKFUYRBRWOCKBEZNYKSUVCUJALUTEYJSXXCEMHJWGAJXBYXLBVAVJFIKQULCYOIDODJUNCEPDZNF");
    msg.scope.assign("VYOEEACDWSANWFMNOHJCZEUCMPAKCEPQXYCOIZGBDPKNUSGMUBRSMENOIVLMUPCRULYPEXAFRCJDKPSUOHRHMQDPRFRTYLTDDZMPOKHYSQQLOB");

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
    msg.setTimeStamp(0.859615840820223);
    msg.setSource(38468U);
    msg.setSourceEntity(161U);
    msg.setDestination(12587U);
    msg.setDestinationEntity(180U);
    msg.name.assign("TYWCDRWDQUOFHQANWBTGSRUGCPQPQYMVQDWZFGXZABDMUFOSRVGXKQHNYIAJELVFYYLOODYGMVWEALJOMRDSXHSGSISGBNNKLRHEKMBTUZAMEZNLWPYTHPWOECBCSIEDXQVNESCPKWJVSRUBYVKEMEFOQCZHLLPKMYGJHLOWKTUAUKFPXPXJITELBZMADVHVGICPUXDZOKFRYMINTXTHXVLKJFNFXURBUOZSQAT");
    msg.visibility.assign("DJYRWKTITCQXWVEOJCPJGKEPFMLNQWMCLODZORNNYEWUBQRGIXWFFTWZFHTJYCLXQSHLBEOEGDNTFCTCMABRPBHGNGMCPAIDJFMVIJZTCXVKRVRWJBKKOUNLMIUACOUJEIHPBYDPENOEKRWTGDSQQIVZXVSXWIAUBELXYOUALKN");
    msg.scope.assign("NHMQOQNEBXYMDZHIXEUBJIVJGEILNHJVDWHILOTZTULRWPJNPCYQIZKGMPUGQTWAALTSQNHVOUZLPUOSOFATSFKCCRMORXCGEZTFVBJBYAMLYKHVSHQGBKRADDNRBFYCTIMWQBVPVFNMJAFGMCVXYUKRPDOJUYWFBAVJANRGPKLYGDEXHSXLZJQCOQUXTLZDKVCNREQYUIYIHSWMEHCSDSKXEEIDCONBPTRRA");

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
    msg.setTimeStamp(0.8826802799624399);
    msg.setSource(49429U);
    msg.setSourceEntity(250U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(4U);
    msg.name.assign("BTYLDQTUICGTDUOCMMNAEMOFTWJQSVLCFYQEBVIKQVEOPEMARHWZWJMPHXBFZNUS");
    msg.visibility.assign("FXEFTPBKBLHANMIWYTDNSZIRQOXOESALOBUSCUCBMPVCYSPEXXGVXGFDGAJQEMRNLZVASRVGGASEZORQNBDWHCKWBXKAFLRJUKHGAFRFTWQAPQTKYCIITOMUDVZVIKJWQHHWDWQVENIEZJIXGYHDTI");
    msg.scope.assign("IIFAOTSEZYMFWVELCUGXXVCFBIKMLFYRQDOUAESAWAUENSPZTFUWTHBXVZYVKSWPEPTPJHGLZUZYBTXONAKXWJLLNSHRVMTVEYWKCOBZIOCBFIAVZVMURXHKOKDNMNBCDFFOCYQCOZDPSDNJLZAQLGQGMRVHWIGGURLJXKKCSATXJGSAHWYJBTKPQQRFHMINPIREQYMLXXCBITPAJJYNEMHEPIDNSWRQHRUROJQKYLTCGGMWBUHGDBN");

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
    msg.setTimeStamp(0.5344515682970599);
    msg.setSource(29877U);
    msg.setSourceEntity(231U);
    msg.setDestination(13362U);
    msg.setDestinationEntity(76U);
    msg.name.assign("ZXTGZUFKURZGLMUXEWRHERPSAFOTJFNYOCUYQUFXXPDKCDAIVMBXIIUJCOMGYKNPNHDDEJUGOOSYOPIZHJYBLXSEEGRSUQKVTZVUDAIXRLBLSDCVCOMBLQFKIWGHVJVGBLHATSQPELWLWSHPDSBDCHINZGMBVDWNGKPWWREQFNNXWGSDEZYRZEZYQJOXTJACNMOQJ");

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
    msg.setTimeStamp(0.4919253003496018);
    msg.setSource(52289U);
    msg.setSourceEntity(33U);
    msg.setDestination(6649U);
    msg.setDestinationEntity(64U);
    msg.name.assign("DWBUNMGTFMBZECTKKANLYYXQNHIQXORMFUWNZOHUBEALFV");

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
    msg.setTimeStamp(0.7148213524553101);
    msg.setSource(18054U);
    msg.setSourceEntity(214U);
    msg.setDestination(6163U);
    msg.setDestinationEntity(115U);
    msg.name.assign("DMYAPNSNGLEBMIBZJEMPBWLLWSTUAKTVHZLQFGZSXDHKNHY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DFNHYUKMGPMIRUQR");
    tmp_msg_0.value.assign("BBCIXHYJVMMWKYJORTBKRHYLXMHEFVGVFWTXDTHALUODSGAOOUAGENTKZLUHIKCUQMVQZGNUXQJMFKZZOAKNFOEJHEZWGXCLGPDLCPGPBQBREVFSMAYWTCIOSXFAYVTAQIRYAYPGHKCOVZTNIRCWQLOPJDDSJNPKBRVWUFRXDHUNMQPFUJEICIJWTUQBOSPPZBEXDNMZYSZICPRIBQ");
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
    msg.setTimeStamp(0.7074620177416506);
    msg.setSource(17374U);
    msg.setSourceEntity(246U);
    msg.setDestination(46053U);
    msg.setDestinationEntity(234U);
    msg.name.assign("ONAGCBVHTJEXLQCYYHEDBTEFZPJGBPNFMDIKVRNZKGACDGPNEBJUUULLXMIBVDXBOTDCB");

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
    msg.setTimeStamp(0.01957264154762739);
    msg.setSource(47210U);
    msg.setSourceEntity(198U);
    msg.setDestination(49733U);
    msg.setDestinationEntity(85U);
    msg.name.assign("PQVGUNUBAMLDYUUZEVABHJKTPIWDTRFBUCDPADGTMFZDWTQNZRQLJWUJGXMTSWGMITDNGEBOCRWFNMLNKVQSKALDPBTRFHIVHHXCXBIZNYQVREFIEMVNOWDJALPNGYOGFJJEELFCLXMLZWYAREJBOPYWPVXRRNTOOPCXYBQURBJQUCFHVHTQXZHAQPCAKOGYWEKKDLBIUGSRQXVCUZSFHHZMMSJIKISEAMLKZYSTO");

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
    msg.setTimeStamp(0.11614851935005455);
    msg.setSource(59337U);
    msg.setSourceEntity(198U);
    msg.setDestination(63897U);
    msg.setDestinationEntity(206U);
    msg.name.assign("KKPSHRHHIOBKFFAQNGVELLMONXYSBMJUTWWDMLAYCLBMJWAZDCVCUZAUHQIQXURJTBNRAEDBRMGNGYTQCKSYWRGNZCKRXQLRZYSPAYNWWSDUZFPIXUNSLLUPEKQGFGCTXGWITKIYSCUXTEFHXYJVJNEVGMDOVDIOFCSVKPJAPFOJBEVJPORDCFSMFO");

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
    msg.setTimeStamp(0.22290735786174443);
    msg.setSource(20848U);
    msg.setSourceEntity(221U);
    msg.setDestination(54698U);
    msg.setDestinationEntity(105U);
    msg.timeout = 237983647U;

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
    msg.setTimeStamp(0.38234542510025593);
    msg.setSource(36233U);
    msg.setSourceEntity(237U);
    msg.setDestination(57873U);
    msg.setDestinationEntity(150U);
    msg.timeout = 3434812795U;

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
    msg.setTimeStamp(0.7172775724672683);
    msg.setSource(8727U);
    msg.setSourceEntity(144U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(38U);
    msg.timeout = 1912914048U;

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
    msg.setTimeStamp(0.27280625694486826);
    msg.setSource(53559U);
    msg.setSourceEntity(238U);
    msg.setDestination(32350U);
    msg.setDestinationEntity(252U);
    msg.sessid = 680474833U;

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
    msg.setTimeStamp(0.23758812252441708);
    msg.setSource(3321U);
    msg.setSourceEntity(155U);
    msg.setDestination(57536U);
    msg.setDestinationEntity(8U);
    msg.sessid = 415628342U;

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
    msg.setTimeStamp(0.08288239919969287);
    msg.setSource(9177U);
    msg.setSourceEntity(95U);
    msg.setDestination(12749U);
    msg.setDestinationEntity(74U);
    msg.sessid = 1844844862U;

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
    msg.setTimeStamp(0.3886025802071631);
    msg.setSource(3121U);
    msg.setSourceEntity(244U);
    msg.setDestination(7702U);
    msg.setDestinationEntity(12U);
    msg.sessid = 2756288678U;
    msg.messages.assign("HYWLODDZZQSJSACVTCRFNZAOYZPFQKOKBUVYPCITOENLHEEBEIKDTJHSRF");

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
    msg.setTimeStamp(0.9001999025108279);
    msg.setSource(14157U);
    msg.setSourceEntity(86U);
    msg.setDestination(12799U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1033885367U;
    msg.messages.assign("NIBONUEARUMFLQAOFVYQQRALLNGGIJNDIBYNAMYVGGPTOZYVRYSTIKVMHPXOTZJSSGMYXBAPHODLQEXBNQHEOFCWXXEOVPICDHSDWCPPDYHKGZORVUROVEEKMSCIUFZXAHAAFXWONKKCFJIAITWYUJKTJQKWMMPPHDDXYKZNTFLZWLVUDEHWU");

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
    msg.setTimeStamp(0.7744194360844033);
    msg.setSource(3277U);
    msg.setSourceEntity(236U);
    msg.setDestination(20550U);
    msg.setDestinationEntity(223U);
    msg.sessid = 429585663U;
    msg.messages.assign("SGSHENYUJMNSUGXJTIKNQWMHGGVSROZPQIVKFMZPUFUSMLFNSJVZCKNQAWTSHWICUNPQFIPODZHEMASYHXOEQFMVUCKYQXQGSMXDRJ");

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
    msg.setTimeStamp(0.5170130187773001);
    msg.setSource(41018U);
    msg.setSourceEntity(147U);
    msg.setDestination(65513U);
    msg.setDestinationEntity(62U);
    msg.sessid = 733332809U;

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
    msg.setTimeStamp(0.8354053176086769);
    msg.setSource(28129U);
    msg.setSourceEntity(222U);
    msg.setDestination(5143U);
    msg.setDestinationEntity(51U);
    msg.sessid = 2680546259U;

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
    msg.setTimeStamp(0.02571630486801335);
    msg.setSource(11852U);
    msg.setSourceEntity(220U);
    msg.setDestination(3210U);
    msg.setDestinationEntity(250U);
    msg.sessid = 3197722687U;

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
    msg.setTimeStamp(0.25458761965587573);
    msg.setSource(45893U);
    msg.setSourceEntity(206U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(254U);
    msg.sessid = 1567838687U;
    msg.status = 137U;

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
    msg.setTimeStamp(0.04710862990457776);
    msg.setSource(59251U);
    msg.setSourceEntity(54U);
    msg.setDestination(702U);
    msg.setDestinationEntity(253U);
    msg.sessid = 3703070231U;
    msg.status = 4U;

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
    msg.setTimeStamp(0.7738675803532936);
    msg.setSource(6727U);
    msg.setSourceEntity(201U);
    msg.setDestination(17792U);
    msg.setDestinationEntity(3U);
    msg.sessid = 535451180U;
    msg.status = 238U;

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
    msg.setTimeStamp(0.08373034862857964);
    msg.setSource(39495U);
    msg.setSourceEntity(124U);
    msg.setDestination(37159U);
    msg.setDestinationEntity(80U);
    msg.name.assign("AASEVAWJYHMXYYJFQFKSEDHMQCPRYYEOPTIUGHEPVRCZIZPMVDPCRBWVOBSBTVDFDSIUZYGUHXABTCMVNPDOVUCERLNAWBHFMJHDXMFWEVLUCIISWGDHIOEA");

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
    msg.setTimeStamp(0.17544304286689738);
    msg.setSource(39071U);
    msg.setSourceEntity(156U);
    msg.setDestination(36941U);
    msg.setDestinationEntity(206U);
    msg.name.assign("LYFCVAUTHFGNRWXTCBDNPQGLLOGGNDIRZXXCNIUCAVTEJGBLLNSYVVJDISHIYHPMWUPNFHTIEKOOVCBRAZZOWUKEFRWJZEZQXLITHYQRCLUVSNJBTBEEKFUZXSSZMSSLEXHIPEJQPKH");

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
    msg.setTimeStamp(0.6324064455127932);
    msg.setSource(13828U);
    msg.setSourceEntity(0U);
    msg.setDestination(57085U);
    msg.setDestinationEntity(52U);
    msg.name.assign("NJOMTIXFKDKIEGLGQWMVUZTFBXVUMCUEAMXBSQRLOTAAASASWTQZKAQNRJIWHBMSHRBFDVHEWEHOIFZKHDSEJYYXCRBQWIGFUGMNIQSVCPECNDIHJDIZJORGJWCDJHLOENYEVVRNFW");

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
    msg.setTimeStamp(0.47787057900983265);
    msg.setSource(56031U);
    msg.setSourceEntity(158U);
    msg.setDestination(39541U);
    msg.setDestinationEntity(104U);
    msg.name.assign("EHKQEPXCOFFYUGZMEYQNUYBBVEZDIBIVGWTTGDDE");

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
    msg.setTimeStamp(0.25615737710082487);
    msg.setSource(8521U);
    msg.setSourceEntity(129U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(94U);
    msg.name.assign("PEEVQGUCOZHKFIRVCWKPGXMHMSVARIJXJSOCONJRHIXQOCWQJBZUAFOKTHBHRSZMZQTREKTTOXWJBYBPFVQECJIWISCLPAVXKJOUZOUHZVWKEADMKDEYYPHQWDHNWRNYERLFDAURTCEBN");

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
    msg.setTimeStamp(0.821861973057171);
    msg.setSource(26037U);
    msg.setSourceEntity(68U);
    msg.setDestination(48300U);
    msg.setDestinationEntity(151U);
    msg.name.assign("HXXSWTMDTUZHDSPLSZOGJLUVEQMQMPIMCNDOBWIEJRRMZBFVGCAKODVYNKATEJWDLGXFHEYZRUBWXFBBBYQGXMAJWBYGFJGXQQEJVNOBSVLKJCFPPYUJJUTSCYHOFNLIKWNRERYHIPNAACKXDIAIRLWUZRTOHFDSENIAVOWUQKNXVEGYZDNQPERSKOOSUXITADTKMPCZOL");

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
    msg.setTimeStamp(0.16293033747501262);
    msg.setSource(25089U);
    msg.setSourceEntity(179U);
    msg.setDestination(46481U);
    msg.setDestinationEntity(20U);
    msg.type = 90U;
    msg.error.assign("PNSEHYCRFXISMZOPVOZGIHBUSPLWCWPLKOKZENFVULEFZUNBGBYEWFDHDQWMKGGVMIZXYWEUCOQOARQDYNAGCTMNPQVYJBRZZZJCKELLISAYQUXGJEPOUJFDRCOVXTOUFMPBAJTYVJBVEXDCAQFLBTNKIGCDWXXQKRHULWKRLSDHJCNMRKSWPHRLSXXADA");

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
    msg.setTimeStamp(0.06920542123047246);
    msg.setSource(41237U);
    msg.setSourceEntity(17U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(89U);
    msg.type = 215U;
    msg.error.assign("XWRTNIZYEEOAAXGUNBWVSWMUANFITJBUCVEAHYMJTCBXYAQCMLDIELYQKCTEOFFRPDCAEXNUNMXWX");

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
    msg.setTimeStamp(0.5793109105900186);
    msg.setSource(57629U);
    msg.setSourceEntity(30U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(210U);
    msg.type = 11U;
    msg.error.assign("JWBHNVQAAOPXDIJLNVXJWULXALQQWAPOVYUETFLBOJZWHNTCKXXMCHMVK");

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
    msg.setTimeStamp(0.14284136046504292);
    msg.setSource(20912U);
    msg.setSourceEntity(147U);
    msg.setDestination(28254U);
    msg.setDestinationEntity(54U);
    msg.seq = 20514U;
    msg.sys_dst.assign("NWHVXANBMCUFSKZYOQIGPMPCOKFEFSXNIYDBOWUQMTUYFDCPDOJWJQFBCQIHYASKAVEMSDDZ");
    msg.flags = 33U;
    const signed char tmp_msg_0[] = {119, 74, -22, -105, 106, -1, -115, 20, -9, -60, -103, 20, -88, 53, -30, 4, -50, 16, 38, -26, 87, 122};
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
    msg.setTimeStamp(0.30012025408322884);
    msg.setSource(37607U);
    msg.setSourceEntity(134U);
    msg.setDestination(6290U);
    msg.setDestinationEntity(37U);
    msg.seq = 39635U;
    msg.sys_dst.assign("EDTOUBBYNMBTFSUDOHMSYLFHHKPKALNZJYLFTYRRENDEYXIXRWVGEGOIPFOWUDIPCZFTEORLCICFNXSKRQQKNJORFBQEHHLKWXNUROYGDUWLLQRECGWGAMIZKYNMFWKZNYJSUUIUMXWDQVFBJJSYAKFDTVOVPVVGURHHAQPZHQQ");
    msg.flags = 146U;
    const signed char tmp_msg_0[] = {-83, 116, -37, -10, 100, -9, -111, 120, 46, 95, 31, 69, 121, 98, -62, -67, 114, 51, -50, 18, -66, -60, 17, 71, 118, -58, 111, -102, -123, -43, -93, 95, -53, 2, 28, -53, 96, 44, -28, -14, 34, 110, -32, -107, -24, 29, 87, -21, 101, -101, -41, 22, -26, 2, -22, -15, 113, 63, 120, -114, -37, -117, -2, 119, -115, 8, 126, 70, 110, 104, -97, -62, -11, 28, -85, 108, -70, -83, -118, -6, 6, 102, -44, 59, 118, -3, -73, 100, 63, 90, -114, 14, -82, 19, -57, 100, 50, 71, -36, 70, 49, 95, 45, -122, -79, -116, 58, 120, 15, -64, 120, 54};
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
    msg.setTimeStamp(0.5086636067561733);
    msg.setSource(40269U);
    msg.setSourceEntity(111U);
    msg.setDestination(4177U);
    msg.setDestinationEntity(182U);
    msg.seq = 43511U;
    msg.sys_dst.assign("AVBUZCHJQOCAPXGKLFTHKVSBRSQUDROLEOVKWBYNSZOMFTRLXCJLABEWGLEZEFIXVIVZBFTTKKPACUNWQIRZYJPPFGCOPBHKNDJUCEEJBDQMMYNHBJNWCDYXXQOKCAEDMPSLJQESFMUWAWLGVBXJIVCSXLVRWSWAHHAQGKPRCHISGYFWDKYFPLHN");
    msg.flags = 48U;
    const signed char tmp_msg_0[] = {110, -86, -72, 86, 57, -86, 59, -24, -26, -61, -43, -92, -44, -97, -111, -119, -10, -119, -107, 16, -94, -35, 64, 66, -7, 96, -77, -2, 73, 93, -77, -95, 121, -119, -79, -75, 37, 95, 122, 44, -83, -28, -61, 126, -50, 46, -76, -90, 122, 55, -4, -117, 21, 56, -116, 74, -114, -74, -111, 16, -50, 63, 122, -22, 92, -32, 126, -82, -48, -51, -72, -65, -63, -77, -122, -21, -45, 53, -68, 20, 126, -68, 117, -117, -33, -60, -79, -67, 17};
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
    msg.setTimeStamp(0.34339634000355745);
    msg.setSource(23480U);
    msg.setSourceEntity(62U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(227U);
    msg.sys_src.assign("ESIRDVJVHUXENJYKFMPXDJNRGJMLINZEVLPLGBBOUHQDJKJCEACFHZCMMOLOBHWNPZPDJEWGTRXTTNTZREUKZULOKIQFTAYVSMSDYAUQXSQVZYGFMJFVOWXBAYWXZZTHHTVFZZ");
    msg.sys_dst.assign("PXYEGQJYXXEMLXTJFBODFXNOOZRETOTHSSEDDFJUXICGRD");
    msg.flags = 4U;
    const signed char tmp_msg_0[] = {-22, -11, 40, -7, -100, -52, -9, -5, -15, 84, 114, 59, 112, 9, -93, -2, -59, 110, -81, -62, -22, -108, 17, 117, -7, 83, -95, -78, -125, 83, -107, -7, 52, -53, -25, -105, -81, 20, 82, 12, -125, -67, 44, 93, 57, -119, 58, 101, -40, 58, 4, -73, -100, -63, -121, 118, 73, 63, -2, 125, -95, 69, -106, -12, 98, -28, -22, 17, -83, 109, -6, -37, 114, -54, -31, -118, 60, 52, -103, 41, -115, -75, 14, -61, 80, 77, 98, -49, 11, 74, 77, 117, 11, 124, -42, -37, -100, -73, 119, 119, -5, -101, -16, 67, -87, -65, -117, 61, -99, 13, 61, -11, 111, 78, -95, 94, 110, 78, -2, 72, 125, 52, 94, -94, 81, -113, -126, 75, 92, -96, -102, -12, 52, -60, -26, -4, -118, 40, 4, -95, -17, 21, 122, 72, 110, 59, 84, 123, -7, 83, -74, 64, -8};
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
    msg.setTimeStamp(0.49038772234019523);
    msg.setSource(42391U);
    msg.setSourceEntity(217U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(40U);
    msg.sys_src.assign("EJQZYZTJMNNACSTCWQPTWHKFHSLYSTPSVHMKTCZZDXSWUVXLEFNKZJHXPHYIEIGAPVMITLLCCRGBRIWSCDUBGYWUAHJNRGXVFBMOKLYQWAAVKITJXOWLSYIOADGIJVTVWHMCQWVXFJBENBDQPZYA");
    msg.sys_dst.assign("NGPJJKDMQZOSMC");
    msg.flags = 54U;
    const signed char tmp_msg_0[] = {-38, -125, 52, -80, -86, 21, -126, 71, 93, -80, 4, -9, 67, 55, 120, 109, 28, -74, -21, 95, 105, -13, -53, -31, 28, 8, 3, -40, -27, 80, 71, 4, 76, 30, -14, 112, 113, -110, 38, 11, -106, 71, -5, -78, -69, -10, -29, 105, -123, 78, 105, 114, 41, 77, -19};
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
    msg.setTimeStamp(0.9647468092502954);
    msg.setSource(15134U);
    msg.setSourceEntity(129U);
    msg.setDestination(42559U);
    msg.setDestinationEntity(48U);
    msg.sys_src.assign("MRZUZEBBFST");
    msg.sys_dst.assign("IIWSKWDUHZLEXBTHUEYMCLMQOGCAKDQAPZRDGIACYQODNVXAJNNBBLWGOOFJRMMSGOUZAVUJCZPFYFWOVANBIIMPLZEXGPXZPNFTKMSLLZDZKCNMNTRGYRVBQGEK");
    msg.flags = 58U;
    const signed char tmp_msg_0[] = {-22, -58, 109, -76, 19, -4, 93, 94, 7, -118, -120, 110, 120, -24, -89, -36, -85, -58, 7, -52, -96, 51, 56, 24, 108, 49, -61, 23, 12, -114, -74, 59, 3, 60, 75, 92, 73, -30, -90, -82, -55, -17, 12, 26, -4, 37, 22, 16, 8, -19, 91, -111, -51, 52, 22, -2, -45, 11, 108, -16, 30, -21, 2, -46, -82, 81, 26, 4, 125, 6, -55, -68, -74, -1, 12, 40, 115, 8, 75, -124, -44, 77, -83, -40, 37, 95, 87, -39, 66, 108, 104, 102, -11, 56, 27, -127, 40, -19, -79, 72, 1, 101, 1, 82, -3, -78, -28, 33, -127, -58, -99, -99, -53, 80, -39, -43, 26, -99, -101, -106, -108, -45, 53, 11, 32, 15, -25, 78, 99, -69, -17, -50, -62, -16, -71, 6, 37, 23, -126, 34, -18, 12, -99, 85, 119, -16, -82, -37, -23, 46, -18, 53, 77, -95, 20, -74, 69, -98, 115, -3, 96, 61, 15, -126, -109, -10, -69, 102, 23, -59, -105, -87, 50, 15, -8, 99, -57, -95, 53, 33, 39, 69, 78, 114, -93, 99, -75, -32, 4, -9, 51, 55, 82, -24, -10, 104, 114, -95, -119, -58, -25, 93, -112, -75, -32, 104, -46, -5, -71, -123, 48, 111, -41, -124, -92, -102, 124, 66, -125, 28, 29, 97, -28, -45, -84, -21, 122, 98, -47, -56, 96, 77, -45, 115, 29};
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
    msg.setTimeStamp(0.5110523519075525);
    msg.setSource(48799U);
    msg.setSourceEntity(22U);
    msg.setDestination(40305U);
    msg.setDestinationEntity(23U);
    msg.seq = 6315U;
    msg.value = 99U;
    msg.error.assign("SDDCNHKTYOPCWULBI");

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
    msg.setTimeStamp(0.4170630551184973);
    msg.setSource(43922U);
    msg.setSourceEntity(117U);
    msg.setDestination(20385U);
    msg.setDestinationEntity(191U);
    msg.seq = 49194U;
    msg.value = 242U;
    msg.error.assign("YNWHSZWEMVSZPXGWPFYYUZHIFUSAJGEOVFACJOVTEPPIXOQLAYWIURRPRNATYKNFHDRZMNWKYBUPOJQEVQGVPESCWVJETSCEVFTTXPJKLOYIZUSMIZLCWFHDR");

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
    msg.setTimeStamp(0.9447383699330868);
    msg.setSource(188U);
    msg.setSourceEntity(140U);
    msg.setDestination(4548U);
    msg.setDestinationEntity(249U);
    msg.seq = 39876U;
    msg.value = 248U;
    msg.error.assign("EAIKJPRGAHABISYKMPYLWFECMGWCDOMKKRNLZZIFCQBVRGDPHYXSVZSAXEXJZNDBQWLVPBYTZXVCLHMUBCZQDSCBLPDWIOFUTLLWMASBTSEHGKIOWPTZKHBEBHFDUUTFXGQFBMUURYKOQWDKPXVJISNXSNRDTJGJESVEJZKORYSHOMAOVTWUIFPG");

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
    msg.setTimeStamp(0.5077956050071099);
    msg.setSource(44047U);
    msg.setSourceEntity(27U);
    msg.setDestination(49010U);
    msg.setDestinationEntity(0U);
    msg.seq = 27067U;
    msg.sys.assign("JRTQMELDNQNISIWOISIOAFJYPAOVOMDQENDIUASZEGLEZYCPLAMRMJGKXHJXQJBJPEHVCJVGEWCFACDLYFWSKRHQPOXSKHANXSCXNHGHKWTVAWLBKFBKNYKILCSSEOGHQKANBTQLCDZVZZTEOTPXGYPGLXRNLATUGZEBYMGNOVBURVTMCVQGZHTWDPXDUBPCYCBXUJUYFMISKXYIDFRDLNZHURYMRBQEIAUPVUZWOR");
    msg.value = 0.9944082359473645;

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
    msg.setTimeStamp(0.2763370918356617);
    msg.setSource(39854U);
    msg.setSourceEntity(105U);
    msg.setDestination(37615U);
    msg.setDestinationEntity(41U);
    msg.seq = 42513U;
    msg.sys.assign("QGRUWXEMWCQFOAYCFYUOLXQJVINWENJLI");
    msg.value = 0.6715281665456759;

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
    msg.setTimeStamp(0.4179114671968327);
    msg.setSource(6230U);
    msg.setSourceEntity(44U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(253U);
    msg.seq = 54859U;
    msg.sys.assign("KCFNSBLUQORIAAPUUJXQKFPUYUKSZVLCHIFGUSLOQMETAXTNXNDREEPAMTYZAFOOJBNMYJEQQSNHRULQVRMGSJVXRPHCZZMLGUXBIQZADSTLYMVRSDPPGCRFCBRTOMXAJKHLFGQOHAIDKOPQYWZOKKMPNIMUWZABTTJEDZDQWSKIVHIBSYGXTLZSVJLVFWHCBNDIEEGCWYNJYHBPKVXGNYPJDWOEDRJWZOXFAIC");
    msg.value = 0.8953494757167959;

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
    msg.setTimeStamp(0.1247810051267676);
    msg.setSource(19090U);
    msg.setSourceEntity(233U);
    msg.setDestination(53059U);
    msg.setDestinationEntity(36U);
    msg.seq = 28708U;
    msg.sys_dst.assign("ZLXSCULWFJRQUQFXWPLUBQVYETVWNSZHKUJKAVHTHJHTBJOAXQBBJFXMACXBFCYVFOUORXGINRHEETLBLRIZNCVVEIHEGHODAEKUBDCYSYJTQKQAMLPEVDPSNGGKNMAAZSTIRDONG");
    msg.timeout = 0.26285092971877;

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
    msg.setTimeStamp(0.48047689592079557);
    msg.setSource(29695U);
    msg.setSourceEntity(121U);
    msg.setDestination(48330U);
    msg.setDestinationEntity(176U);
    msg.seq = 55121U;
    msg.sys_dst.assign("VLMWPURBATGPCEEDFFQGEPFVSRZNGZLROMVDYWYEOOYHYWWBNMRJKPVUJYACZUIUEQSIUUWQ");
    msg.timeout = 0.9930949079842624;

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
    msg.setTimeStamp(0.03766477876470953);
    msg.setSource(35905U);
    msg.setSourceEntity(237U);
    msg.setDestination(29679U);
    msg.setDestinationEntity(122U);
    msg.seq = 14303U;
    msg.sys_dst.assign("LLNGLTHDGPIZCGFRTJRNSVQVJRVOCMQNEBCJCIWCHMNRRAFKJGURHZWDTWYIUGKPLWCOEYGQFBNURCXOZUSDHDEJGQOADCPZBWQOYTFYMXUKZLHN");
    msg.timeout = 0.022522562179255523;

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
    msg.setTimeStamp(0.3406065549725473);
    msg.setSource(45048U);
    msg.setSourceEntity(45U);
    msg.setDestination(30617U);
    msg.setDestinationEntity(120U);
    msg.action = 140U;
    msg.longain = 0.26807198642467267;
    msg.latgain = 0.18133471477699947;
    msg.bondthick = 1449246132U;
    msg.leadgain = 0.6676157252486484;
    msg.deconflgain = 0.12673751188233162;

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
    msg.setTimeStamp(0.34543898953391516);
    msg.setSource(52602U);
    msg.setSourceEntity(22U);
    msg.setDestination(27860U);
    msg.setDestinationEntity(167U);
    msg.action = 123U;
    msg.longain = 0.04393242639250772;
    msg.latgain = 0.76834750387265;
    msg.bondthick = 846987011U;
    msg.leadgain = 0.12615704245577852;
    msg.deconflgain = 0.7192897749851725;

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
    msg.setTimeStamp(0.3405556021477689);
    msg.setSource(59768U);
    msg.setSourceEntity(129U);
    msg.setDestination(50129U);
    msg.setDestinationEntity(13U);
    msg.action = 58U;
    msg.longain = 0.971670678442294;
    msg.latgain = 0.3937325774871796;
    msg.bondthick = 107095127U;
    msg.leadgain = 0.8477265724924009;
    msg.deconflgain = 0.03266511704848196;

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
    msg.setTimeStamp(0.3242333911996854);
    msg.setSource(6147U);
    msg.setSourceEntity(124U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(62U);
    msg.err_mean = 0.08401618776293673;
    msg.dist_min_abs = 0.8558485737281482;
    msg.dist_min_mean = 0.14470191634821838;

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
    msg.setTimeStamp(0.4055702969028091);
    msg.setSource(33869U);
    msg.setSourceEntity(65U);
    msg.setDestination(21461U);
    msg.setDestinationEntity(102U);
    msg.err_mean = 0.43483873352514824;
    msg.dist_min_abs = 0.3629691324822474;
    msg.dist_min_mean = 0.5444782864108568;

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
    msg.setTimeStamp(0.7270942343936192);
    msg.setSource(35687U);
    msg.setSourceEntity(117U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(98U);
    msg.err_mean = 0.02656560448471068;
    msg.dist_min_abs = 0.7737202350092045;
    msg.dist_min_mean = 0.7721174686091488;

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
    msg.setTimeStamp(0.20682297834991437);
    msg.setSource(18580U);
    msg.setSourceEntity(22U);
    msg.setDestination(62191U);
    msg.setDestinationEntity(197U);
    msg.action = 222U;
    msg.lon_gain = 0.600430601875976;
    msg.lat_gain = 0.5210624711346874;
    msg.bond_thick = 0.7307641957572172;
    msg.lead_gain = 0.22388860334742766;
    msg.deconfl_gain = 0.09704270647362778;
    msg.accel_switch_gain = 0.6056814950470402;
    msg.safe_dist = 0.08406464424495119;
    msg.deconflict_offset = 0.6676449997884158;
    msg.accel_safe_margin = 0.4243271410862305;
    msg.accel_lim_x = 0.5019127666156249;

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
    msg.setTimeStamp(0.017415165760853446);
    msg.setSource(7568U);
    msg.setSourceEntity(220U);
    msg.setDestination(4301U);
    msg.setDestinationEntity(58U);
    msg.action = 134U;
    msg.lon_gain = 0.3836049979749362;
    msg.lat_gain = 0.044655383666047266;
    msg.bond_thick = 0.2823071539529828;
    msg.lead_gain = 0.5524151081461037;
    msg.deconfl_gain = 0.86423644565696;
    msg.accel_switch_gain = 0.174091832869799;
    msg.safe_dist = 0.4976898164593021;
    msg.deconflict_offset = 0.7295587802646923;
    msg.accel_safe_margin = 0.4479243886791757;
    msg.accel_lim_x = 0.8451570389032589;

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
    msg.setTimeStamp(0.4847783890701831);
    msg.setSource(28202U);
    msg.setSourceEntity(97U);
    msg.setDestination(1397U);
    msg.setDestinationEntity(54U);
    msg.action = 130U;
    msg.lon_gain = 0.5360308645039159;
    msg.lat_gain = 0.32157273115352725;
    msg.bond_thick = 0.022457729877665922;
    msg.lead_gain = 0.814850668179614;
    msg.deconfl_gain = 0.8299862521052085;
    msg.accel_switch_gain = 0.12108831173200518;
    msg.safe_dist = 0.6275879439901566;
    msg.deconflict_offset = 0.36051934467324986;
    msg.accel_safe_margin = 0.48258893645182344;
    msg.accel_lim_x = 0.16592967480401288;

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
    msg.setTimeStamp(0.5934329470219044);
    msg.setSource(12635U);
    msg.setSourceEntity(64U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(26U);
    msg.type = 226U;
    msg.op = 29U;
    msg.err_mean = 0.9953593497943652;
    msg.dist_min_abs = 0.0564513222989137;
    msg.dist_min_mean = 0.7096588824958671;
    msg.roll_rate_mean = 0.5108246772800382;
    msg.time = 0.3267293052000305;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 205U;
    tmp_msg_0.lon_gain = 0.42314652028488553;
    tmp_msg_0.lat_gain = 0.46738817555370116;
    tmp_msg_0.bond_thick = 0.25891706007963533;
    tmp_msg_0.lead_gain = 0.8336863096127655;
    tmp_msg_0.deconfl_gain = 0.4738124368101405;
    tmp_msg_0.accel_switch_gain = 0.6448944245034692;
    tmp_msg_0.safe_dist = 0.806588724124161;
    tmp_msg_0.deconflict_offset = 0.30728269458880664;
    tmp_msg_0.accel_safe_margin = 0.6442388447959043;
    tmp_msg_0.accel_lim_x = 0.9462620485875721;
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
    msg.setTimeStamp(0.2396215492570576);
    msg.setSource(35260U);
    msg.setSourceEntity(158U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(226U);
    msg.type = 164U;
    msg.op = 53U;
    msg.err_mean = 0.8413250705960055;
    msg.dist_min_abs = 0.6093387065897381;
    msg.dist_min_mean = 0.8723401937813398;
    msg.roll_rate_mean = 0.3213099144597803;
    msg.time = 0.13512341492852276;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 125U;
    tmp_msg_0.lon_gain = 0.61286227821946;
    tmp_msg_0.lat_gain = 0.07315887746622685;
    tmp_msg_0.bond_thick = 0.710438091775537;
    tmp_msg_0.lead_gain = 0.8365152834837499;
    tmp_msg_0.deconfl_gain = 0.29338822265404774;
    tmp_msg_0.accel_switch_gain = 0.05662790616314606;
    tmp_msg_0.safe_dist = 0.15081295520919458;
    tmp_msg_0.deconflict_offset = 0.4085422222681363;
    tmp_msg_0.accel_safe_margin = 0.2109804682413654;
    tmp_msg_0.accel_lim_x = 0.19942382987033846;
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
    msg.setTimeStamp(0.02623646306526206);
    msg.setSource(29426U);
    msg.setSourceEntity(27U);
    msg.setDestination(56175U);
    msg.setDestinationEntity(180U);
    msg.type = 6U;
    msg.op = 123U;
    msg.err_mean = 0.13583406324584624;
    msg.dist_min_abs = 0.21082223342431494;
    msg.dist_min_mean = 0.9476990133040986;
    msg.roll_rate_mean = 0.10122190249221996;
    msg.time = 0.7217133394321253;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 240U;
    tmp_msg_0.lon_gain = 0.05985334740296766;
    tmp_msg_0.lat_gain = 0.6659993326940732;
    tmp_msg_0.bond_thick = 0.7408404321929746;
    tmp_msg_0.lead_gain = 0.12028129468518667;
    tmp_msg_0.deconfl_gain = 0.6543908564447177;
    tmp_msg_0.accel_switch_gain = 0.10867543548392011;
    tmp_msg_0.safe_dist = 0.33228731931559863;
    tmp_msg_0.deconflict_offset = 0.48169926943462904;
    tmp_msg_0.accel_safe_margin = 0.9934458107324083;
    tmp_msg_0.accel_lim_x = 0.446081905676879;
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
    msg.setTimeStamp(0.3415681849663649);
    msg.setSource(62181U);
    msg.setSourceEntity(181U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.17780967159713268;
    msg.lon = 0.3368030389276382;
    msg.eta = 1046033700U;
    msg.duration = 23138U;

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
    msg.setTimeStamp(0.23461055001908182);
    msg.setSource(42854U);
    msg.setSourceEntity(20U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.8237692363970811;
    msg.lon = 0.3862245072093736;
    msg.eta = 3667670472U;
    msg.duration = 61607U;

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
    msg.setTimeStamp(0.03735804910941576);
    msg.setSource(7233U);
    msg.setSourceEntity(144U);
    msg.setDestination(2186U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.8855953923545786;
    msg.lon = 0.6161708643816401;
    msg.eta = 3079852949U;
    msg.duration = 43225U;

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
    msg.setTimeStamp(0.08754868921825032);
    msg.setSource(34278U);
    msg.setSourceEntity(234U);
    msg.setDestination(18126U);
    msg.setDestinationEntity(29U);
    msg.plan_id = 14240U;

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
    msg.setTimeStamp(0.04129049120579564);
    msg.setSource(7514U);
    msg.setSourceEntity(175U);
    msg.setDestination(51301U);
    msg.setDestinationEntity(103U);
    msg.plan_id = 3921U;

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
    msg.setTimeStamp(0.5735761535883046);
    msg.setSource(28334U);
    msg.setSourceEntity(245U);
    msg.setDestination(38826U);
    msg.setDestinationEntity(138U);
    msg.plan_id = 52185U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.22285948776962639;
    tmp_msg_0.lon = 0.8616756564536707;
    tmp_msg_0.eta = 2911841370U;
    tmp_msg_0.duration = 29748U;
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
    msg.setTimeStamp(0.884263374175744);
    msg.setSource(53909U);
    msg.setSourceEntity(150U);
    msg.setDestination(9962U);
    msg.setDestinationEntity(83U);
    msg.type = 124U;
    msg.command = 219U;
    msg.settings.assign("WOZKCMVOBNZZSEAHKASTLUJNUQUKQYRIEEIJDITKATBDAWGJPWMWAHBFSQRAUDMBPGSMHXQCQNOUEJLOJVTRGWYOLOYHEFFIFNXPXXWANHGTZHSGZKXIGHYHCXCLNWIMHFJNDWOCNYYPTBJUCCMZSRHUWZIZDMDBMSYRGKYXKDOKQBVVKQKVFTSR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17554U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5293154177277398;
    tmp_tmp_msg_0_0.lon = 0.4815945401787327;
    tmp_tmp_msg_0_0.eta = 1301325149U;
    tmp_tmp_msg_0_0.duration = 19809U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PHMOACVZYILUVXIGRPQPUQIWGDCIQXDEWAQAKBERTUGBTMWMBSFYAZSFSOS");

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
    msg.setTimeStamp(0.04414018577702927);
    msg.setSource(57155U);
    msg.setSourceEntity(101U);
    msg.setDestination(64055U);
    msg.setDestinationEntity(102U);
    msg.type = 38U;
    msg.command = 227U;
    msg.settings.assign("YLUPYWQKPLTAPLVERCGMWHAKWWFY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9656U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8425282168859277;
    tmp_tmp_msg_0_0.lon = 0.27692769989461574;
    tmp_tmp_msg_0_0.eta = 2284357615U;
    tmp_tmp_msg_0_0.duration = 14177U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EZGJQVTRIHEDRIARDQUMPNENYOUZPDLKHFYCKMIKFJPDTOAHGDMKLCLBVXBFYGYNOBWORHDKFJHAMRUVVCJOXHJWHICUABPZWSXDAILYQWXI");

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
    msg.setTimeStamp(0.29128417859407874);
    msg.setSource(21634U);
    msg.setSourceEntity(187U);
    msg.setDestination(33216U);
    msg.setDestinationEntity(58U);
    msg.type = 175U;
    msg.command = 3U;
    msg.settings.assign("POMLDAVVLTGNNOYRDJROFVNJRIXXLIHOQHLRSKLKFSMFJYTUIUIIDNMEJYHGBOCRT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19954U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UQDSYMVKZISGVETXWLGYMVGBFQKWNOZBKORFXQCBQPECPSEHHWEKYNQOEXQYJTCRBSHGTUFHFLFPYSVAZYINUAMZAOCPKFAVMHNDHHVKRMFZUMFTJSPCDVJLRVUSMYOUTXKFLWCXIIOAZBIUHIZWTDVFTWOAMSIIGWJTPHCERPEERDAXZAVUROWJKHAQYEJGLXLXGSQDDBLUAJGIDBZQEUWKMRNJLCXIGDPYNCBMN");

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
    msg.setTimeStamp(0.3284963285594338);
    msg.setSource(40622U);
    msg.setSourceEntity(32U);
    msg.setDestination(25271U);
    msg.setDestinationEntity(166U);
    msg.state = 65U;
    msg.plan_id = 29926U;
    msg.wpt_id = 45U;
    msg.settings_chk = 7647U;

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
    msg.setTimeStamp(0.46096422229898815);
    msg.setSource(51865U);
    msg.setSourceEntity(216U);
    msg.setDestination(64134U);
    msg.setDestinationEntity(88U);
    msg.state = 67U;
    msg.plan_id = 17553U;
    msg.wpt_id = 146U;
    msg.settings_chk = 24962U;

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
    msg.setTimeStamp(0.4521625669681345);
    msg.setSource(42471U);
    msg.setSourceEntity(251U);
    msg.setDestination(24216U);
    msg.setDestinationEntity(66U);
    msg.state = 188U;
    msg.plan_id = 7704U;
    msg.wpt_id = 53U;
    msg.settings_chk = 63637U;

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
    msg.setTimeStamp(0.4210529123880129);
    msg.setSource(36071U);
    msg.setSourceEntity(2U);
    msg.setDestination(15228U);
    msg.setDestinationEntity(63U);
    msg.uid = 21U;
    msg.frag_number = 250U;
    msg.num_frags = 28U;
    const signed char tmp_msg_0[] = {6, 79, 29, 62, 36, -3, 21, -5, -68, 58, 18, -77, 27, 118, 42, -70, -4, -19, -79, 19, -18, 106};
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
    msg.setTimeStamp(0.48973981783891674);
    msg.setSource(43542U);
    msg.setSourceEntity(126U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(60U);
    msg.uid = 161U;
    msg.frag_number = 143U;
    msg.num_frags = 20U;
    const signed char tmp_msg_0[] = {-29, -103, -59, -32, 46, -126, -122, -115, 69, -21, 107, -109, -108, -37, -54, -34, -4, -96, -38, 36, -85, -78, 91, -116, 11, 107, 35, 64, 102, 29, -9, 49, 123, -13, 42, -40, 112, -30, -37, 113, -42, 27, 122, -23, -90, -102, 7, -10, 60, 39, -57, -13, 37, -63, -119, -5, 60, -83, -22, -13, 78, -3, 40, -102, -21, 67, 42, 14, -127, -124, -43, 52, -70, 29, -87, -22, -52, 12, 48, 11, -16, -97, -115, 116, 54, -40, 123, -63, 107, 98, -14, 66, -76, 15, 119, -42, 69, 86, 50, -9, 123, 119, 64, -123, 105, 112, 124, 105, 63, -66, -116, 88, 81, -121, 55, -83, -124, 115, -50, 99, 82, 77, 29, -26, -120, -34, 81, -110, 112, -116, 51, -36, -33, -31, 81, -88, 12, 4, 107, 6, -16, -48, 98, -15, -94, 72, 45, 28, -100, 92, -45, 101, -78, 97, -117, -101, -70, 41, -124, 121, -113, 87, 55, 31, 87};
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
    msg.setTimeStamp(0.8016597741064199);
    msg.setSource(57543U);
    msg.setSourceEntity(94U);
    msg.setDestination(50589U);
    msg.setDestinationEntity(59U);
    msg.uid = 108U;
    msg.frag_number = 134U;
    msg.num_frags = 34U;
    const signed char tmp_msg_0[] = {48, 64, 99, -47, -50, -8, -66, -22, 2, 38, 31, -128, -39, -93, 45, 86, -94, -53, -47, -14, 35, 67, 13, -98, -45, -86, -32, -68, -90, 123, 3, -66, -30, 42, 68, 1, -14, -67, -29, -46, -28, 23, 64, 24, -124, 25, -107, 57, -48, -47, 20, 19, -8, 33, 58, 46, 34, 81, -51, 3, -115, 126, -91, -69, -96, -116, 9, 46, 109, -125, -80, 82, 107, -13, 80, 116, -55, 99, 104, 6, 107, -93, 12, 73, -57, -93, 68, -42, -100, 115, -68, -113, -86, -115, 30, 68, -95, -105, -56, -51, -24, -121, 85, 70, -93, -56, 36, -22, -27, -108, 89, -107, -29, -3, 92, -125, -32};
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
    msg.setTimeStamp(0.8517606359741766);
    msg.setSource(16939U);
    msg.setSourceEntity(143U);
    msg.setDestination(51239U);
    msg.setDestinationEntity(162U);
    msg.content_type.assign("ECRAGHWVEZALAPIIRTBHYVHAZCHGONYMUMLVVZOKSMNGWAXUWULHLPWXSABDGRSTBKRYFFLVVOYXWXKKTQIJUQMXFLLHGTBIJYPRNFQJKTDI");
    const signed char tmp_msg_0[] = {-72, -128, -54, -104, 14, -94, 75, 117, 98, -69, -13, 105, -111, 30, 119, -59, 65, -95, 61, 6, 89, 53, -25, -26, 57, -77, 7, 120, -84, -59, 93, 51, 84, 22, -24, 58, -93, -10, 50, 10, -32, 73, 118, 4, 21, -117, 24, -78, -42, 72, 19, -99, -78, 60, -95, 14, 28, -106, -29, -31, 54, 76, 14, 79, 111, -14, -5, -8, 97, 0, 79, 94, -92, -78, 83, 37, 50, 72, 8, -51, 99, -26, 116, -63, -30, 31, 55, 122, -107, 41, -45, -23, 60, -79, -57, -96, 107, 30, -3};
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
    msg.setTimeStamp(0.6243180540542649);
    msg.setSource(15513U);
    msg.setSourceEntity(160U);
    msg.setDestination(54777U);
    msg.setDestinationEntity(53U);
    msg.content_type.assign("VHVUNWZOCIIQBUVYRDEKTJYXDSNJWGXWITMBOAOCLAEWSQIJFGPCEBUXJCUWGBYTQXAMJSOAXXGIPEVPEHROFCTRZLGXLKRFLCCWOHVQDZHULGCZJUOCFKRNBJVJX");
    const signed char tmp_msg_0[] = {-39, 84, 126, -18, 12, -91, -113, 52, -25, -14, -84, 109, -89, 27, 30, 26, -70, 57, 32, 93, -44, -12, -48};
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
    msg.setTimeStamp(0.49979230003267716);
    msg.setSource(15308U);
    msg.setSourceEntity(79U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(156U);
    msg.content_type.assign("RDDWJRLCKXBVUKLCFXNGFAWMYEJPAEUEEFZGCVVPRJJTGKIXYKMARIZCWRBVUXNDPUBGNAZQMCJ");
    const signed char tmp_msg_0[] = {14, -68, 118, -93, -119, -46, 25, 88, -89, 111, 120, -62, -85, 99, 0, 84, 108, -61, -9, -87, -128, 60, 87, 65, 5, 87, 120, 4, -114, -78, -2, -55, 97, -112, 87, 120, 34, 118, -6, 53, -82, 102, -54, -125, -8, -77, 51, 35, -74, -72, -120, 91, -89, 116, 42, -33, -19, 124, 46, -127, -79, -30, 114, 21, 56, -21, -14, 87, -17, 34, 69, 21, 51, 76, -60, 49, 126, 4, 117, 100, 61, 4, 80, 104, 5, -28, 57, 3, 54, -95, -99, -57, -1, 23, 6, -91, 104, 82, -7, -35, -86, 102, 40, -69, 87, -62, 74, 126, -116, -76, 120, -31, -13, 90, 3, 7, 122, -115, 108, 94, 47, -43, 73, 93, 62, -15, 53, -108, -12, 41, -71, 36, 8, 31, -37, -110, -18, -85, 63, 120, 35, -28, -69, 57, -54, 39, -28, 3, -6, -71, 126, -24, 109, -46, 74, -90, 20, -85, -116, -10, 88, 116, 12, -44, -56, -38, -94};
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
    msg.setTimeStamp(0.5973037534653982);
    msg.setSource(25046U);
    msg.setSourceEntity(134U);
    msg.setDestination(17812U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.8437574233339504);
    msg.setSource(101U);
    msg.setSourceEntity(148U);
    msg.setDestination(56753U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.4664694450210708);
    msg.setSource(47651U);
    msg.setSourceEntity(208U);
    msg.setDestination(35035U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.9151617401642018);
    msg.setSource(61806U);
    msg.setSourceEntity(34U);
    msg.setDestination(7312U);
    msg.setDestinationEntity(34U);
    msg.target = 18413U;
    msg.bearing = 0.3163657995282665;
    msg.elevation = 0.8439479854399246;

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
    msg.setTimeStamp(0.9039148889029841);
    msg.setSource(31170U);
    msg.setSourceEntity(135U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(7U);
    msg.target = 46793U;
    msg.bearing = 0.30133040319673665;
    msg.elevation = 0.9725932096497888;

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
    msg.setTimeStamp(0.4000494497433006);
    msg.setSource(17393U);
    msg.setSourceEntity(4U);
    msg.setDestination(54941U);
    msg.setDestinationEntity(139U);
    msg.target = 10509U;
    msg.bearing = 0.11977104437012742;
    msg.elevation = 0.06622530577952412;

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
    msg.setTimeStamp(0.29819910240978775);
    msg.setSource(37023U);
    msg.setSourceEntity(32U);
    msg.setDestination(53051U);
    msg.setDestinationEntity(128U);
    msg.target = 44969U;
    msg.x = 0.30516809379736387;
    msg.y = 0.7142939078232645;
    msg.z = 0.7847904210873516;

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
    msg.setTimeStamp(0.06451640775599565);
    msg.setSource(6855U);
    msg.setSourceEntity(214U);
    msg.setDestination(65377U);
    msg.setDestinationEntity(195U);
    msg.target = 1539U;
    msg.x = 0.8343710295585781;
    msg.y = 0.14238196459953978;
    msg.z = 0.4249442083104934;

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
    msg.setTimeStamp(0.13981258958732679);
    msg.setSource(43807U);
    msg.setSourceEntity(44U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(155U);
    msg.target = 58622U;
    msg.x = 0.76235586576234;
    msg.y = 0.03616864490995486;
    msg.z = 0.1879199386174345;

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
    msg.setTimeStamp(0.12808985883102864);
    msg.setSource(19050U);
    msg.setSourceEntity(198U);
    msg.setDestination(4821U);
    msg.setDestinationEntity(164U);
    msg.target = 57217U;
    msg.lat = 0.36852151130223487;
    msg.lon = 0.007528207799401554;
    msg.z_units = 40U;
    msg.z = 0.8759721564491906;

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
    msg.setTimeStamp(0.6856632317959762);
    msg.setSource(12099U);
    msg.setSourceEntity(153U);
    msg.setDestination(7715U);
    msg.setDestinationEntity(99U);
    msg.target = 24707U;
    msg.lat = 0.40064723514065936;
    msg.lon = 0.7841563979096935;
    msg.z_units = 234U;
    msg.z = 0.6180118908878979;

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
    msg.setTimeStamp(0.6211891273984106);
    msg.setSource(22090U);
    msg.setSourceEntity(223U);
    msg.setDestination(5115U);
    msg.setDestinationEntity(110U);
    msg.target = 41850U;
    msg.lat = 0.15913861505720184;
    msg.lon = 0.10570638165073598;
    msg.z_units = 53U;
    msg.z = 0.25776955897698706;

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
    msg.setTimeStamp(0.21996649882062702);
    msg.setSource(44380U);
    msg.setSourceEntity(131U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(222U);
    msg.locale.assign("TAJJARBMZHRQYBMQLNOYJHECETBKKOUQBNGYGWNQJEZVTVZAPASNUTLCUJXPKKTSEVNUSGPMIJLSTTMRSLHOFACTFHTCCELJXXZYQXBTAXKWBEZWOAWKXCJVOVBRNFPLNMFNIBEUGMIHKBYFFSDLOEVSXVKSPXQYVCZZZRIOGDMMGWZKARQYLHUDSIXNOUDDHGWRVHCEAKIIPUDBWVWIFOFIIMGDGNRUPFDLPDWO");
    const signed char tmp_msg_0[] = {7, 102, 34, -5, 119, -72, 126, -89, 85, 14, 35, -24, -35, -55, -119, -15, 16, 64, 64, -55, 80, -69, -100, 3, 65, -77, -123, 9, -122, 92, 16, -97, 118, -17, -34, -2, -126, 30, -87, 14, -97, -95, -18, 22, -12, -31, -35, -12, -37, -113, 40, 46, 24, 51, 91, 92, -97, -89, 1, -77, 104, -77, -60, -32, -47, 7, 2, 53, -54, -38, 44, 108, -54, 20, -13, -15, 97, 90, -12, -66, 53, -85, 3, -9, -41, 11, -50, 5, -24, -73, -117, 3, -91, 122, -108, 12, 52, -65, 113, -52, -107, 1, -52, -48, -67, 49, -97, -68, -36, -90, 4, 55, 120, 106, -122, -92, 21, -13, 17, 108, -122, 89, 13, -105, 48, 97, 104, -36, -90, 65, 75, 112, 38, -10, -55, 52, -68, 76, 108, -99, -81, -59, -57, -102, -47, 120, -122, -123, -97, -22, 68, 41, -123, -84, -18, -108, 23, -121, 117, 48, 27, 104, -80, 6, -29, -120, 91, -122, 64, -100, -4, -35, -96, 107, 15, -31, -29, -84, 85, 105, 67, -87, 18, -54, -57, 84, 87, -69, 114, -82, 46, 125, 72, -53, -52, 112, 75, 122, 8, 12, -71};
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
    msg.setTimeStamp(0.6463701696987152);
    msg.setSource(22847U);
    msg.setSourceEntity(179U);
    msg.setDestination(21007U);
    msg.setDestinationEntity(38U);
    msg.locale.assign("MMKCFVSVHTUGLJDAQLWCLQUORIFLXCOPJQPRUDRMPEEZOXXZNVMZKHMFBKQJKCVAIOUEMSIFJBABTBLHYKYQPOHAECHVYEEUXXFJDERITXZADHSNTMORLBNWNYWAFWYIWZEPCSJMF");
    const signed char tmp_msg_0[] = {114, 114, 85, -21, -85, 56, -55, -31, 122, -46, -75, 61, -104, 31, -43, -72, 4, 32, -126, 82, -104, 84, 93, -7, 47, 88, -60, 34, -102, 53, -91, -24, -23, 106, -119, -7, 13, -61, 52, 34, -10, 30, -9, 87, -35};
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
    msg.setTimeStamp(0.6475210359758514);
    msg.setSource(17893U);
    msg.setSourceEntity(225U);
    msg.setDestination(48663U);
    msg.setDestinationEntity(250U);
    msg.locale.assign("MIRIVJMSKDLYQUMNRLYTKCWMKLSYUDWGHZGWXXVPPZTWVACBHAQKLLPZKJWHDOPBGJOZFXYQEOQRJZVAKCCTNUHASIKCLUJSTHBZFPEIFFJPWUKWGOVK");
    const signed char tmp_msg_0[] = {-17, -33, -43, 86, -92, 55, -113, -71, 105, 74, -77, -82, 31, 20, -113, 63, 50, -91, -61, 78, -125, 123, -26, 77, -93, -26, -116, -40, 26, -46, -37, 48, 7, -29, 71, -7, -78, 20, 42, -96, 63, -60, 99, 72, 9, -3, 119, 17, -85, 90, 20, -63, 57, -4, -107, 58, 94, 99, -7, -12, 89, -57, -123, -21, -50, 115, 108, 122, -1, 96, 57, -1, -105, 82, 45, 98, -42, -45, -89, 11, 11, -84, 38, 77, 30, -117, 107, -57, 11, -27, 75, -11, 0, 91, 7, -102, 93, 51, 13, 49, 82, 66, -108, 111, -73, -36, -5, 90, -119, -64, 38, 2, 60, -59, 42, -41, -92, -104, 34, 26, -101, 26, -108, -128, -11, 96, 11, -119, 103, -8, -50, -80, -71, 33, 43, -26, 101, -31, 41};
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
    msg.setTimeStamp(0.4803444679123313);
    msg.setSource(15587U);
    msg.setSourceEntity(195U);
    msg.setDestination(20038U);
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
    msg.setTimeStamp(0.4998406802478369);
    msg.setSource(42692U);
    msg.setSourceEntity(91U);
    msg.setDestination(24466U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.6060090827119606);
    msg.setSource(9202U);
    msg.setSourceEntity(245U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9976927121070226);
    msg.setSource(28860U);
    msg.setSourceEntity(56U);
    msg.setDestination(34674U);
    msg.setDestinationEntity(193U);
    msg.camid = 78U;
    msg.x = 19139U;
    msg.y = 51411U;

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
    msg.setTimeStamp(0.5783838497671161);
    msg.setSource(38763U);
    msg.setSourceEntity(250U);
    msg.setDestination(31446U);
    msg.setDestinationEntity(176U);
    msg.camid = 40U;
    msg.x = 58988U;
    msg.y = 59200U;

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
    msg.setTimeStamp(0.7994952965291092);
    msg.setSource(43589U);
    msg.setSourceEntity(139U);
    msg.setDestination(21741U);
    msg.setDestinationEntity(241U);
    msg.camid = 174U;
    msg.x = 22238U;
    msg.y = 17055U;

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
    msg.setTimeStamp(0.7515916502557619);
    msg.setSource(20821U);
    msg.setSourceEntity(215U);
    msg.setDestination(44672U);
    msg.setDestinationEntity(235U);
    msg.camid = 221U;
    msg.x = 233U;
    msg.y = 43477U;

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
    msg.setTimeStamp(0.030798992995131225);
    msg.setSource(56541U);
    msg.setSourceEntity(171U);
    msg.setDestination(24049U);
    msg.setDestinationEntity(142U);
    msg.camid = 46U;
    msg.x = 18635U;
    msg.y = 11787U;

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
    msg.setTimeStamp(0.32618272044339125);
    msg.setSource(15508U);
    msg.setSourceEntity(127U);
    msg.setDestination(2414U);
    msg.setDestinationEntity(22U);
    msg.camid = 30U;
    msg.x = 62425U;
    msg.y = 51269U;

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
    msg.setTimeStamp(0.669617575019749);
    msg.setSource(41073U);
    msg.setSourceEntity(224U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(88U);
    msg.tracking = 245U;
    msg.lat = 0.24064675585683493;
    msg.lon = 0.15403053827713675;
    msg.x = 0.7993876964879507;
    msg.y = 0.9669953661309413;
    msg.z = 0.5646920504682332;

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
    msg.setTimeStamp(0.8861904673067931);
    msg.setSource(25721U);
    msg.setSourceEntity(86U);
    msg.setDestination(28709U);
    msg.setDestinationEntity(173U);
    msg.tracking = 3U;
    msg.lat = 0.19697111373770704;
    msg.lon = 0.622205674107139;
    msg.x = 0.625923881817356;
    msg.y = 0.8784574040866453;
    msg.z = 0.9277335473401102;

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
    msg.setTimeStamp(0.8525632743494587);
    msg.setSource(26342U);
    msg.setSourceEntity(98U);
    msg.setDestination(58482U);
    msg.setDestinationEntity(2U);
    msg.tracking = 90U;
    msg.lat = 0.04121983655755279;
    msg.lon = 0.08363041048086595;
    msg.x = 0.9335685850264859;
    msg.y = 0.7549187059103725;
    msg.z = 0.6196285776617332;

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
    msg.setTimeStamp(0.07056922008146793);
    msg.setSource(1977U);
    msg.setSourceEntity(192U);
    msg.setDestination(27309U);
    msg.setDestinationEntity(109U);
    msg.target.assign("FUVNWYTGVFYGFOWPZAOXZRZBQCZVEATJCDINMYDPXTRDECGFGKZLJGKFAKQNVPKSZMVRXCOLMXLXBJVARRYKKUUYASFHUQANQFEIDKOXWATWLQYIOGZ");
    msg.lbearing = 0.7382788448881323;
    msg.lelevation = 0.3513211971045066;
    msg.bearing = 0.7223881539005222;
    msg.elevation = 0.26136700848592187;
    msg.phi = 0.4741709649781086;
    msg.theta = 0.790428021000893;
    msg.psi = 0.06489408122293994;
    msg.accuracy = 0.16387267698552033;

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
    msg.setTimeStamp(0.7839583695728884);
    msg.setSource(30527U);
    msg.setSourceEntity(86U);
    msg.setDestination(35116U);
    msg.setDestinationEntity(16U);
    msg.target.assign("VPAJSTUTZTSJTIFAPHHPEEHVDMUPRKPQDLNFXJCIEJHN");
    msg.lbearing = 0.4786812354171849;
    msg.lelevation = 0.6781190792424698;
    msg.bearing = 0.8919197890117392;
    msg.elevation = 0.13261041543733076;
    msg.phi = 0.046471136555377934;
    msg.theta = 0.2619730106722278;
    msg.psi = 0.07542138778817187;
    msg.accuracy = 0.643535720380724;

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
    msg.setTimeStamp(0.2893439250078782);
    msg.setSource(12922U);
    msg.setSourceEntity(187U);
    msg.setDestination(49870U);
    msg.setDestinationEntity(18U);
    msg.target.assign("VDEKHOIWCLRJTQMMSPUSFJOHSKURQOHGEORWHNBSDQLDEJGFMBPETVYFJKGRJZAHTKDHCKIMVCBGVUWPRNXQKEJQADWSAHEWULWZOQYDZUGZBMCOIXYANLBEHPNNPBGZNFNIDIXCUUJYFAJXLXYRXGXPQIVLKLYEIEYRFRNNOWANTCOJMVBMFTPLLXWGVDASYXFVFHYIJHV");
    msg.lbearing = 0.6887671077216405;
    msg.lelevation = 0.2009383463669091;
    msg.bearing = 0.4460302439315017;
    msg.elevation = 0.3741237226905596;
    msg.phi = 0.5607582785952274;
    msg.theta = 0.5915172162663654;
    msg.psi = 0.46599990971407146;
    msg.accuracy = 0.667761602708247;

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
    msg.setTimeStamp(0.656283934173139);
    msg.setSource(41966U);
    msg.setSourceEntity(237U);
    msg.setDestination(36890U);
    msg.setDestinationEntity(195U);
    msg.target.assign("ONHGIIXSDIMGTOGAOSJOMDTZBCPWTOYVNCZQEPOSCNMQFERWISJCMXGJPCUDCRCIQCJUKKWJTUGXFVPUXAWQLXLHQUFUPNDQNEOGBVDYTOLIHJSIAZZMYSPUOVAKSRKMJUVKKQELMIRHGLGDINYRWLZHHHHA");
    msg.x = 0.009319538447696507;
    msg.y = 0.6588350094820509;
    msg.z = 0.7251923710957483;
    msg.n = 0.7444994514317933;
    msg.e = 0.03684004990656897;
    msg.d = 0.9499275663962158;
    msg.phi = 0.8778467931584664;
    msg.theta = 0.9899209740801117;
    msg.psi = 0.10841587930636876;
    msg.accuracy = 0.6392901867438601;

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
    msg.setTimeStamp(0.9572197953953587);
    msg.setSource(15736U);
    msg.setSourceEntity(39U);
    msg.setDestination(37231U);
    msg.setDestinationEntity(214U);
    msg.target.assign("EKYIHJHRDBPTACEXFAUACNEBZJMBURXGLWTZDSYVVPBDHMPNWLENXWCSNXOZKRYMEKFIHCQDVGWZRBKUCDQUNODOJURXBCFQTORLMMGEBSKTYFDJOFJTOGIJFPEJGHTYZHQCNTYLPCJISPQBVFAAUDHVQJLHORDKUUOEVXVALA");
    msg.x = 0.4469625228324954;
    msg.y = 0.7499352629628316;
    msg.z = 0.383070200813879;
    msg.n = 0.41822315379826736;
    msg.e = 0.2655922070413893;
    msg.d = 0.036918182289884416;
    msg.phi = 0.8764775015580661;
    msg.theta = 0.07074918780818718;
    msg.psi = 0.1834490159500285;
    msg.accuracy = 0.2266187339418918;

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
    msg.setTimeStamp(0.6608087345839919);
    msg.setSource(19242U);
    msg.setSourceEntity(236U);
    msg.setDestination(21747U);
    msg.setDestinationEntity(86U);
    msg.target.assign("APDZDAZNNITYQJPIGKWOTZUFCALIFFEVXCVIEUHZQEYRYSZDEFZVXGOHEGPBLFLYALNYDDRTUBFCUKJRRVCRNQ");
    msg.x = 0.5131078942557511;
    msg.y = 0.03201299666373081;
    msg.z = 0.8563070355440011;
    msg.n = 0.057967191687645414;
    msg.e = 0.5689074644759362;
    msg.d = 0.47071365831150747;
    msg.phi = 0.8868550499425676;
    msg.theta = 0.8110405727579644;
    msg.psi = 0.1315338732852338;
    msg.accuracy = 0.2674002776994867;

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
    msg.setTimeStamp(0.26089090298386375);
    msg.setSource(26748U);
    msg.setSourceEntity(26U);
    msg.setDestination(14853U);
    msg.setDestinationEntity(129U);
    msg.target.assign("PUYVNGGMLLVMGDYOVZIQSCIQEKLXUWHMDYNCFLAPXDHBJIDWSMGFWAWGCDEAOCCMPKJSCAURXEFUYIEHVBQHKAXFBISJUZVWGGRPAIHHDPWSZOMWLVYPQHKPWISMZISFOQGXDYCOFUUQUVJVRTMECNRXYTBBQHUXPBTZFTALRXNMDENROLROJLHOKGABJYTPQBKSZEARUMTOKBZZZSQNOQTWJXKTWLDPRFEVYBCJNDTEJNCIXKA");
    msg.lat = 0.6688748580005234;
    msg.lon = 0.39930309083065185;
    msg.z_units = 226U;
    msg.z = 0.7565220267222655;
    msg.accuracy = 0.938906665937039;

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
    msg.setTimeStamp(0.06070828245075921);
    msg.setSource(15390U);
    msg.setSourceEntity(113U);
    msg.setDestination(26153U);
    msg.setDestinationEntity(167U);
    msg.target.assign("RLCTYFJYPCZHLEHDIMIWQKAEZROBOURVDNPIANWCKQGJBFRSJGUABITDMWUFMTYHBXEKRITRDBPEOTOXBAVVUCLSLAJNQUGMIPKRFKNJIFVZCVWXPLZVVOCEHFOKKFMZZQTGFLHHHWMFJSJWIYZNQTKITSHMGGDCDYEUAALYCLVZSTXGBSXPULBDNNKGSYGQPYA");
    msg.lat = 0.5238767883970306;
    msg.lon = 0.7037589937995139;
    msg.z_units = 238U;
    msg.z = 0.10279191384323227;
    msg.accuracy = 0.08399463888289072;

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
    msg.setTimeStamp(0.1894021430981454);
    msg.setSource(44215U);
    msg.setSourceEntity(124U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(233U);
    msg.target.assign("ZUJYEJFGNQESMAKFNDDMIXDBNAUHSTFKQSIJDMGOUKNPIRYVRX");
    msg.lat = 0.03891069703938865;
    msg.lon = 0.25272142384929797;
    msg.z_units = 232U;
    msg.z = 0.5302670363243615;
    msg.accuracy = 0.22109392348548373;

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
    msg.setTimeStamp(0.2259961194561877);
    msg.setSource(1304U);
    msg.setSourceEntity(10U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(8U);
    msg.name.assign("AERVSKSKJNBLXWYSTULPEPULLZGGNWPGUDZOMJHCWUDAJTJENJMWVPKKUHFCBFIMCTQYXISUDBIKQEEFUYCQGHVNAIFFCKYFTXLQANJKNRWDYHKSZXQSPVIZFSYLBHIEBWAJJPBVZOXLYICMLNRCQVVPUOZASOQEKGRPDJMMTZHWMB");
    msg.lat = 0.1425333659902639;
    msg.lon = 0.28407222134772914;
    msg.z = 0.7532673621055993;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.09363585112983641);
    msg.setSource(37663U);
    msg.setSourceEntity(205U);
    msg.setDestination(40786U);
    msg.setDestinationEntity(103U);
    msg.name.assign("ISOJWOZOCGMVV");
    msg.lat = 0.5233215848887153;
    msg.lon = 0.1686136776810908;
    msg.z = 0.9533530887589912;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.6275344570637051);
    msg.setSource(44101U);
    msg.setSourceEntity(33U);
    msg.setDestination(44147U);
    msg.setDestinationEntity(249U);
    msg.name.assign("GMIXUNNBMEWOAVIBJSCKYMHNQZNNVUQHRKYSTPPALIJBMLTCXXUCNFVUUJXMZSFKHZJUGPQCQYBXDXPGEOLTQJATKBYDLHKWUFYSOGBEZHWOAPDPIRCIYJKCXUBFAQSZDEASKKTPOVPMVMWLBHEMNXCETECWPJZQUTMSCFKQMJGGSVHYRKRTLNFIDATNGRINVAEILBHVYCDOSYLLZEWAQWDHXERLVRSJWF");
    msg.lat = 0.9064287347303102;
    msg.lon = 0.7393820225959802;
    msg.z = 0.7793258453129909;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.6191239227884655);
    msg.setSource(60172U);
    msg.setSourceEntity(232U);
    msg.setDestination(63908U);
    msg.setDestinationEntity(114U);
    msg.op = 248U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MWLIMDHPAQMCKNZHHBLOIQJTXLVSZKPFVOWUKYSFKIUTJHFQCFNJAVDGCLFBGWQWKYIXUQMNSJXBYURWEGYISGGUDOBNEPNKMYGSNNRTYUEYHLMUAOIFWKAMIRZASREVNDTBBVFJJTZROALDCGPGBYFPFCDXKIQEWOQHHCLUESLXEJTXABOXOGEYPSIXFWCYPRDIVCVZQVRWHPPLLUAMBDTTX");
    tmp_msg_0.lat = 0.9867415158551874;
    tmp_msg_0.lon = 0.6209037308626284;
    tmp_msg_0.z = 0.11281727987034718;
    tmp_msg_0.z_units = 178U;
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
    msg.setTimeStamp(0.682555003595025);
    msg.setSource(52005U);
    msg.setSourceEntity(40U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(195U);
    msg.op = 2U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KAIJNMMMLZXAPGGNMVLUCJNHFYTFFCNLZMYADQSJHBQBNRCYUOPZHTQBUAKBBREACDGZSDVIYALIDHVVPBJSUIWTMLSKPIOWQHTEMJFWWRLLFTUFRWXMDIQCODGHRCYZOIKSQFVUECGDVRYJVOBLRXLWRSLMPGPAGQTI");
    tmp_msg_0.lat = 0.525730743566357;
    tmp_msg_0.lon = 0.024810714598229366;
    tmp_msg_0.z = 0.4639482980186771;
    tmp_msg_0.z_units = 13U;
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
    msg.setTimeStamp(0.8757024623412325);
    msg.setSource(53658U);
    msg.setSourceEntity(56U);
    msg.setDestination(23518U);
    msg.setDestinationEntity(37U);
    msg.op = 11U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IEFMIEWIFVVADJCGHRIQIWCYQLAWQKMNBNPKBHYHFNWYBVDICQWUYUDSGQSXDHRFCZZPRFVJKWMEJETTPLNOSF");
    tmp_msg_0.lat = 0.36650536492695185;
    tmp_msg_0.lon = 0.04884175728309503;
    tmp_msg_0.z = 0.12359716717247282;
    tmp_msg_0.z_units = 91U;
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
    msg.setTimeStamp(0.20246447640231557);
    msg.setSource(28968U);
    msg.setSourceEntity(190U);
    msg.setDestination(48211U);
    msg.setDestinationEntity(69U);
    msg.value = 0.12511504805951534;
    msg.type = 81U;

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
    msg.setTimeStamp(0.31950046999077586);
    msg.setSource(7616U);
    msg.setSourceEntity(9U);
    msg.setDestination(41140U);
    msg.setDestinationEntity(172U);
    msg.value = 0.08471961092042402;
    msg.type = 197U;

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
    msg.setTimeStamp(0.9658823600432088);
    msg.setSource(63294U);
    msg.setSourceEntity(32U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3273918464065705;
    msg.type = 83U;

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
    msg.setTimeStamp(0.30444333004557456);
    msg.setSource(61728U);
    msg.setSourceEntity(222U);
    msg.setDestination(33574U);
    msg.setDestinationEntity(243U);
    msg.value = 0.03775835870381794;

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
    msg.setTimeStamp(0.13547624176501194);
    msg.setSource(30892U);
    msg.setSourceEntity(71U);
    msg.setDestination(37946U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9915150606927283;

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
    msg.setTimeStamp(0.5671470585877095);
    msg.setSource(60460U);
    msg.setSourceEntity(137U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(196U);
    msg.value = 0.7356274684673816;

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
    msg.setTimeStamp(0.026465493349120517);
    msg.setSource(45420U);
    msg.setSourceEntity(85U);
    msg.setDestination(6465U);
    msg.setDestinationEntity(14U);
    msg.timestamp_last_service = 0.16907185512744738;
    msg.time_next_service = 0.9407128735951618;
    msg.time_motor_next_service = 0.8122975721068968;
    msg.time_idle_ground = 0.6249083456345547;
    msg.time_idle_air = 0.3814944013562972;
    msg.time_idle_water = 0.2157617049036662;
    msg.time_idle_underwater = 0.9452287796235483;
    msg.time_idle_unknown = 0.6781022318450609;
    msg.time_motor_ground = 0.4690561720894154;
    msg.time_motor_air = 0.6807275450415257;
    msg.time_motor_water = 0.6216545980173052;
    msg.time_motor_underwater = 0.9973979955152303;
    msg.time_motor_unknown = 0.573634371216079;
    msg.rpm_min = 5156;
    msg.rpm_max = -29573;
    msg.depth_max = 0.5838715210022414;

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
    msg.setTimeStamp(0.4037612400911911);
    msg.setSource(15022U);
    msg.setSourceEntity(168U);
    msg.setDestination(8845U);
    msg.setDestinationEntity(221U);
    msg.timestamp_last_service = 0.25232749421036405;
    msg.time_next_service = 0.8919985638984276;
    msg.time_motor_next_service = 0.43847889999230016;
    msg.time_idle_ground = 0.9874914884527011;
    msg.time_idle_air = 0.8930596095354912;
    msg.time_idle_water = 0.38836076527205043;
    msg.time_idle_underwater = 0.5083204398999333;
    msg.time_idle_unknown = 0.5020288966534178;
    msg.time_motor_ground = 0.044175591708093265;
    msg.time_motor_air = 0.6303452200017062;
    msg.time_motor_water = 0.5529944045895192;
    msg.time_motor_underwater = 0.22372168445791696;
    msg.time_motor_unknown = 0.4191991728902198;
    msg.rpm_min = 14733;
    msg.rpm_max = -16788;
    msg.depth_max = 0.1672793120616578;

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
    msg.setTimeStamp(0.3798417286934982);
    msg.setSource(23256U);
    msg.setSourceEntity(215U);
    msg.setDestination(14181U);
    msg.setDestinationEntity(123U);
    msg.timestamp_last_service = 0.20897294554180934;
    msg.time_next_service = 0.4231289608779103;
    msg.time_motor_next_service = 0.5112741202738651;
    msg.time_idle_ground = 0.17194692550610657;
    msg.time_idle_air = 0.8683889699093328;
    msg.time_idle_water = 0.8837298145945243;
    msg.time_idle_underwater = 0.8544660964984111;
    msg.time_idle_unknown = 0.9644006013304489;
    msg.time_motor_ground = 0.12118465982154569;
    msg.time_motor_air = 0.6787691222931749;
    msg.time_motor_water = 0.41614918817288604;
    msg.time_motor_underwater = 0.8812062117445542;
    msg.time_motor_unknown = 0.21565644659088634;
    msg.rpm_min = 28925;
    msg.rpm_max = -8925;
    msg.depth_max = 0.4095027200408352;

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
    msg.setTimeStamp(0.12066372779508594);
    msg.setSource(7997U);
    msg.setSourceEntity(144U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(38U);
    msg.severity = 104U;
    msg.text.assign("QVVALWUCEDHJNTBGRBTZXKAOVCQTNYMJTKPKWFWOYM");

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
    msg.setTimeStamp(0.528859319593428);
    msg.setSource(36668U);
    msg.setSourceEntity(204U);
    msg.setDestination(63069U);
    msg.setDestinationEntity(118U);
    msg.severity = 233U;
    msg.text.assign("QEPSZXEFOQIHRRGXXAYAEVQCABVGHORCICNIUKKGKVZTKUMBEBTUZJMLRIUMXQWPYDJVJGCVWGBZLSGTHROQFDUGMZLFGFXHYJQWNEPTRAMNSTFOKJAWUOPFPXNDVLIVHOQYLSRPSUJXHEYJBWNRCHWAAOCOSWEIDMEWJLRDTWQIKYKSKSAYFITFBZXCVCVUZNFCDVZANZF");

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
    msg.setTimeStamp(0.9436596346035542);
    msg.setSource(104U);
    msg.setSourceEntity(44U);
    msg.setDestination(6520U);
    msg.setDestinationEntity(140U);
    msg.severity = 110U;
    msg.text.assign("AADOSTZZNBBCAIZXFHGLQIVLVDDYLHZRGBCWYOHGNTJHUQYQXWRNYMLWTKRNDOSHTYMSVXGZEJEBCAQLAUTZDRCERVFKPXHYIWNEKTMMPJXINFLIBFFFMMDQPROIQWGVAJMXWGZOZUHKXMLAKNSCKTDAJBTEQDYJMRATXZSOPDCBJHVUPHPPBLJFIKSYKSWRFWGD");

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
    msg.setTimeStamp(0.8526674480546359);
    msg.setSource(9109U);
    msg.setSourceEntity(141U);
    msg.setDestination(27487U);
    msg.setDestinationEntity(136U);
    msg.channel = -14;
    msg.value = 969103831;
    msg.gain = 160U;

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
    msg.setTimeStamp(0.1669178534958522);
    msg.setSource(44721U);
    msg.setSourceEntity(206U);
    msg.setDestination(58760U);
    msg.setDestinationEntity(215U);
    msg.channel = -32;
    msg.value = 1711843163;
    msg.gain = 124U;

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
    msg.setTimeStamp(0.38740633476022557);
    msg.setSource(21527U);
    msg.setSourceEntity(79U);
    msg.setDestination(30545U);
    msg.setDestinationEntity(199U);
    msg.channel = -14;
    msg.value = 1302899968;
    msg.gain = 207U;

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
    msg.setTimeStamp(0.9493686254213571);
    msg.setSource(59826U);
    msg.setSourceEntity(200U);
    msg.setDestination(27450U);
    msg.setDestinationEntity(92U);
    msg.ch01 = 0.8517990851054608;
    msg.ch02 = 0.8016879544540952;
    msg.ch03 = 0.20265742401429532;
    msg.ch04 = 0.4148149853293579;
    msg.ch05 = 0.2897285111490361;
    msg.ch06 = 0.5480777504703539;
    msg.ch07 = 0.0521579995670407;
    msg.ch08 = 0.498810971398547;
    msg.ch09 = 0.3798345661068142;
    msg.ch10 = 0.7384858915693262;
    msg.ch11 = 0.9940500507197146;
    msg.ch12 = 0.37482653852025594;
    msg.ch13 = 0.09855060490141587;
    msg.ch14 = 0.5740020632214601;
    msg.ch15 = 0.9386441819355397;
    msg.ch16 = 0.6683052880741682;

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
    msg.setTimeStamp(0.15008355431326248);
    msg.setSource(61431U);
    msg.setSourceEntity(226U);
    msg.setDestination(45781U);
    msg.setDestinationEntity(164U);
    msg.ch01 = 0.045127023530953436;
    msg.ch02 = 0.930267338140388;
    msg.ch03 = 0.23264806815993888;
    msg.ch04 = 0.5241412529684605;
    msg.ch05 = 0.8141212720868098;
    msg.ch06 = 0.5663238067752345;
    msg.ch07 = 0.7696206169497719;
    msg.ch08 = 0.5224283826589254;
    msg.ch09 = 0.927784000532506;
    msg.ch10 = 0.7218057475376679;
    msg.ch11 = 0.1853629542368096;
    msg.ch12 = 0.9279308455016153;
    msg.ch13 = 0.1735097388521174;
    msg.ch14 = 0.05990916007983493;
    msg.ch15 = 0.18551396753251925;
    msg.ch16 = 0.15009594734198672;

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
    msg.setTimeStamp(0.570249221104674);
    msg.setSource(14939U);
    msg.setSourceEntity(88U);
    msg.setDestination(20490U);
    msg.setDestinationEntity(101U);
    msg.ch01 = 0.7097674578247999;
    msg.ch02 = 0.1794259262554121;
    msg.ch03 = 0.49760020036861985;
    msg.ch04 = 0.2197967016617034;
    msg.ch05 = 0.22341176478722669;
    msg.ch06 = 0.6987323501799987;
    msg.ch07 = 0.9475284662958996;
    msg.ch08 = 0.46654693404896486;
    msg.ch09 = 0.6164329386895412;
    msg.ch10 = 0.45942594432789285;
    msg.ch11 = 0.029881015985462223;
    msg.ch12 = 0.010600212438463097;
    msg.ch13 = 0.04597557835450805;
    msg.ch14 = 0.4145104563414058;
    msg.ch15 = 0.9622412241396822;
    msg.ch16 = 0.5802112355051808;

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
    msg.setTimeStamp(0.18222370422664902);
    msg.setSource(14144U);
    msg.setSourceEntity(24U);
    msg.setDestination(2644U);
    msg.setDestinationEntity(185U);
    msg.op = 62U;
    msg.lat = 0.38042136637605306;
    msg.lon = 0.5586013668255129;
    msg.height = 0.7720565623935065;
    msg.depth = 0.9210937764309768;
    msg.alt = 0.4733077402184367;

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
    msg.setTimeStamp(0.06915923711932837);
    msg.setSource(12160U);
    msg.setSourceEntity(237U);
    msg.setDestination(61090U);
    msg.setDestinationEntity(127U);
    msg.op = 0U;
    msg.lat = 0.4249333504207735;
    msg.lon = 0.21002248499408027;
    msg.height = 0.041253939298610987;
    msg.depth = 0.6623115588550276;
    msg.alt = 0.7497386464731728;

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
    msg.setTimeStamp(0.4663891076098229);
    msg.setSource(33810U);
    msg.setSourceEntity(16U);
    msg.setDestination(41123U);
    msg.setDestinationEntity(124U);
    msg.op = 51U;
    msg.lat = 0.12465272585832876;
    msg.lon = 0.6599177998597122;
    msg.height = 0.9438917015289795;
    msg.depth = 0.9286593328581559;
    msg.alt = 0.6160184976149311;

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
    IMC::ChargingState msg;
    msg.setTimeStamp(0.13081694904535446);
    msg.setSource(58860U);
    msg.setSourceEntity(233U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(59U);
    msg.is_charging = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ChargingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ChargingState msg;
    msg.setTimeStamp(0.22329774944498015);
    msg.setSource(27697U);
    msg.setSourceEntity(134U);
    msg.setDestination(11180U);
    msg.setDestinationEntity(100U);
    msg.is_charging = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ChargingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ChargingState msg;
    msg.setTimeStamp(0.66706339295897);
    msg.setSource(55238U);
    msg.setSourceEntity(9U);
    msg.setDestination(45244U);
    msg.setDestinationEntity(41U);
    msg.is_charging = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ChargingState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.18170163751284674);
    msg.setSource(35241U);
    msg.setSourceEntity(201U);
    msg.setDestination(38010U);
    msg.setDestinationEntity(63U);
    msg.nbeams = 179U;
    msg.ncells = 46U;
    msg.coord_sys = 45U;

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
    msg.setTimeStamp(0.8694362818323311);
    msg.setSource(48724U);
    msg.setSourceEntity(253U);
    msg.setDestination(6416U);
    msg.setDestinationEntity(144U);
    msg.nbeams = 25U;
    msg.ncells = 60U;
    msg.coord_sys = 57U;

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
    msg.setTimeStamp(0.5542155918484929);
    msg.setSource(3031U);
    msg.setSourceEntity(216U);
    msg.setDestination(62693U);
    msg.setDestinationEntity(236U);
    msg.nbeams = 40U;
    msg.ncells = 73U;
    msg.coord_sys = 241U;

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
    msg.setTimeStamp(0.3173365524102757);
    msg.setSource(5300U);
    msg.setSourceEntity(83U);
    msg.setDestination(56105U);
    msg.setDestinationEntity(84U);
    msg.cell_position = 0.8850733065957803;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.49092727686404924;
    tmp_msg_0.amp = 0.6952993216474275;
    tmp_msg_0.cor = 140U;
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
    msg.setTimeStamp(0.5001983252446742);
    msg.setSource(58385U);
    msg.setSourceEntity(68U);
    msg.setDestination(14686U);
    msg.setDestinationEntity(40U);
    msg.cell_position = 0.34520742984687036;

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
    msg.setTimeStamp(0.6806751158089381);
    msg.setSource(59048U);
    msg.setSourceEntity(253U);
    msg.setDestination(43413U);
    msg.setDestinationEntity(52U);
    msg.cell_position = 0.1497787081173484;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6176156341615205;
    tmp_msg_0.amp = 0.5769588563233692;
    tmp_msg_0.cor = 50U;
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
    msg.setTimeStamp(0.23177078051723443);
    msg.setSource(9067U);
    msg.setSourceEntity(52U);
    msg.setDestination(49136U);
    msg.setDestinationEntity(28U);
    msg.vel = 0.7820871462328041;
    msg.amp = 0.5590279628325264;
    msg.cor = 40U;

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
    msg.setTimeStamp(0.4067426586404016);
    msg.setSource(47677U);
    msg.setSourceEntity(57U);
    msg.setDestination(22198U);
    msg.setDestinationEntity(41U);
    msg.vel = 0.16121457329742517;
    msg.amp = 0.8586541431448421;
    msg.cor = 213U;

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
    msg.setTimeStamp(0.2941559757661699);
    msg.setSource(54243U);
    msg.setSourceEntity(216U);
    msg.setDestination(56526U);
    msg.setDestinationEntity(201U);
    msg.vel = 0.9818833250600827;
    msg.amp = 0.6971865179833913;
    msg.cor = 154U;

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
    msg.setTimeStamp(0.04642849888745981);
    msg.setSource(18436U);
    msg.setSourceEntity(198U);
    msg.setDestination(33816U);
    msg.setDestinationEntity(96U);
    msg.name.assign("MBXDRRHGXWELKNDSSWBYIELAFHRBIXRXARAGATNGSNXRLCTZWPDQUFBIDMBCWIFQXVVPZSUUTXSTAQOONQIGCHOYBLEHVHLEDKYQVKHFMOOBBYSKPPKPFJFZQTCZJNHVJKKJVYQNIGZN");
    msg.value = 227U;

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
    msg.setTimeStamp(0.10311727634512147);
    msg.setSource(22641U);
    msg.setSourceEntity(21U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(208U);
    msg.name.assign("AFPQDOHEGVBWAKALBDUEALSNEFSGIHZHQIHVGAUYBNSRBDYTCWTSWIZXLZPMFKKKAKMQIVOURXBAXMZJQPUTZDQECFGTMXEZJXJCFSCSXJSKHCRYIGNTQOINZVESZBMGMVJVBEHFSQGFLGUYCCKEDWKDDUUIXWTYEWNTPRXHZUKYUYNJHVIOCPRPRUMPZYNMWQREJPIWTFDBDOHAVVGDILOJRPCHW");
    msg.value = 136U;

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
    msg.setTimeStamp(0.45757562054350864);
    msg.setSource(46132U);
    msg.setSourceEntity(198U);
    msg.setDestination(51786U);
    msg.setDestinationEntity(157U);
    msg.name.assign("UPVZAWZJLDSRWQOSDQBVWTHORIEMUPOFSFWTJJARUUXZNFXOKIILKTXUYASEIGBVJZRNRKMCUCRYIJHHIBFCXKALNGZWBVENTQYFDPFFINDECHCAQQCYTMMCLLEGDOWOTRWJYGGXPDZGPKFNHUAENPWBSCK");
    msg.value = 221U;

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
    msg.setTimeStamp(0.38150782331642585);
    msg.setSource(46257U);
    msg.setSourceEntity(153U);
    msg.setDestination(87U);
    msg.setDestinationEntity(213U);
    msg.name.assign("CPLEXQLUFHSBEDLVRFW");

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
    msg.setTimeStamp(0.1323328808989852);
    msg.setSource(9992U);
    msg.setSourceEntity(7U);
    msg.setDestination(7215U);
    msg.setDestinationEntity(154U);
    msg.name.assign("ECYXBQIWUJUTTOIZJMCOAGBMBMKSNHMPGXEZMAHAPLFLINLTHDAFFDPHOCXZGYHRSXGAPKIYCDWJJWXTFCWJKAOJQUJBFIESPNGJPZMUKEQYVDSQNUYSTBRDBSILFIVNQRKGPRVYKYWHALZLUINXISBNAXDRFYHLFXWZGQMN");

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
    msg.setTimeStamp(0.5209264841209795);
    msg.setSource(12142U);
    msg.setSourceEntity(149U);
    msg.setDestination(16100U);
    msg.setDestinationEntity(172U);
    msg.name.assign("AHIGZZQVVMVZFSHADXEEKFAXQLKGYQTEHGMFCJIDOHBQWVEZUUEUQIDBDPDPSCKNERTIBYANOUEUYWYCICCYNPPLWHNPABOLBRNRMGFMCLAAOZISQURKKKJTCGIWNISQMSZXXPRYHGLCCTS");

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
    msg.setTimeStamp(0.16191960365696878);
    msg.setSource(30467U);
    msg.setSourceEntity(105U);
    msg.setDestination(20283U);
    msg.setDestinationEntity(25U);
    msg.name.assign("DDPZWIKDVAPCEAPYRESWHCXVQVMNGEGRVNTQHDUBMWEZGKUBPVZDXGTRGPKCQHWRNVCROBUXZDZJLFUNDNXJSUMOILLCSJUAGINXVQFK");
    msg.value = 35U;

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
    msg.setTimeStamp(0.8280513214105625);
    msg.setSource(65339U);
    msg.setSourceEntity(249U);
    msg.setDestination(24542U);
    msg.setDestinationEntity(244U);
    msg.name.assign("YZBGLMZEABXIZIANJLHQFTLTHINGXHYLJTYMUNHOIGHRZXWXJUBWQNFPYCTBNWPKONJBRQCDRWBSSEIJVLKUMFTSWYBMTQHAZBADGNUQDCXDRGOKQCBXRNRYPZRTPKOIRIKGGVOD");
    msg.value = 195U;

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
    msg.setTimeStamp(0.7308426546753874);
    msg.setSource(51520U);
    msg.setSourceEntity(204U);
    msg.setDestination(29195U);
    msg.setDestinationEntity(188U);
    msg.name.assign("NNEXLYWZEUDFRTYMLTWKCKIADJWZRSZQBBTBUJONOSYNPFTGYRJRSCDHCPBIQDUU");
    msg.value = 7U;

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
    msg.setTimeStamp(0.4023360507926145);
    msg.setSource(30577U);
    msg.setSourceEntity(133U);
    msg.setDestination(1383U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6218014274087952;

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
    msg.setTimeStamp(0.8590537662139562);
    msg.setSource(9259U);
    msg.setSourceEntity(30U);
    msg.setDestination(42795U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7593072624637874;

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
    msg.setTimeStamp(0.40775102128238516);
    msg.setSource(20583U);
    msg.setSourceEntity(166U);
    msg.setDestination(57025U);
    msg.setDestinationEntity(166U);
    msg.value = 0.3399963151293056;

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
    msg.setTimeStamp(0.5190937992149391);
    msg.setSource(60906U);
    msg.setSourceEntity(138U);
    msg.setDestination(43552U);
    msg.setDestinationEntity(57U);
    msg.value = 0.8004505767858159;

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
    msg.setTimeStamp(0.11665019084132089);
    msg.setSource(12155U);
    msg.setSourceEntity(13U);
    msg.setDestination(55634U);
    msg.setDestinationEntity(73U);
    msg.value = 0.940441784145401;

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
    msg.setTimeStamp(0.46266278964624397);
    msg.setSource(34162U);
    msg.setSourceEntity(106U);
    msg.setDestination(11608U);
    msg.setDestinationEntity(156U);
    msg.value = 0.1436985644341151;

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
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.6112351617094139);
    msg.setSource(42901U);
    msg.setSourceEntity(176U);
    msg.setDestination(57751U);
    msg.setDestinationEntity(211U);
    msg.req_id = 49811U;
    msg.ttl = 24885U;
    msg.expiration = 1321233057U;
    msg.destination.assign("SYZVBTORPCUPPPTCQQAHRQUKWSCXZUAKTHYPZGZQHWSFZIEVGLDZYJMNYKVXRMBNJCPGMCODNQZTKINRRNHYCOHRNTYBUFZEFXKFJXCUIDLPFESTMQVQWHYRSTGBDBFQAVLDIKRWEMAGIMOGFHFEISSGVNYTBXGILDLXOUZISLONDBJVUWTMHXOABRWXKQVZMNKWCPLK");
    const signed char tmp_msg_0[] = {103, 34, 125, 96, 74, -66, -113, -117, 88, -27, -111, -81, 64, 72, 107, 63, -62, -90, 102, -65, -72, 11, -84, 12, -84, 88, 117, -1, 117, -123, 75, -1, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.2570447689080323);
    msg.setSource(35800U);
    msg.setSourceEntity(235U);
    msg.setDestination(62851U);
    msg.setDestinationEntity(158U);
    msg.req_id = 31692U;
    msg.ttl = 36793U;
    msg.expiration = 3520722908U;
    msg.destination.assign("GQPXFANRSICXDCYIUSIZGBYLMPPLKTYDUMXPWPKLUDSEXZNWVZWTZUFBHQXQICAUOHWMRGJJJZQYTVMQPHVIALTFGYCULMUIWBRCQOYCYCCWASFDDPKNUNGDHVPSKVSEARLMEQBJOFSPBKMEEEEBHUVCBANEDLHOTAPBJFXHRAYIQSZJG");
    const signed char tmp_msg_0[] = {-49, -82, 15, -36, -65, 71, -54, -94, -116, -69, -57, 35, 79, 32, 103, 22, -41, -30, 96, 52, 12, 125, -76, 92, -96, -84, -64, 3, -8, -75, 49, 87, 87, -18, 16, -73, 42, -12, -126, 122, 78, 30, 48, -47, 38, -92, 47, -22, 28, -101, 113, 123, -99, 110, 73, -112, 18, -48, 126, -8, -105, 42, 51, 98, -9, -102, -19, 55, -114, 23, 59, -66, 114, -124, -41, -37, -57, 114, 24, -56, 75, 10, 11, -56, -78, 45, 30, 81, 28, -14, 35, 117, 123, 31, 40, 13, 76, 38, -107, 10, -97, 34, -18, 96, 49, 23, 114, -19, -7, 45, -97, 69, 80, 53, 51, 13, 4, -77, -69, -49, 70, 20, 89, -54, -71, 99, 4, 80, -89, -35, 43, -71, 20, -75, -3, 114, -116, -40, -73, 72, -80, -81, 73, -77, 71, 81, 16, 96, -72, -17, 5, -80, -31, 111, -43, -41, 99, 37, -11, -65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.9532273770147721);
    msg.setSource(47620U);
    msg.setSourceEntity(34U);
    msg.setDestination(48468U);
    msg.setDestinationEntity(93U);
    msg.req_id = 41532U;
    msg.ttl = 3551U;
    msg.expiration = 986564440U;
    msg.destination.assign("LBBNYVZDRZSSLFBAUGLOYJVNDLYCVVFORWWTTKTLNWCBPAWOIDXHCBUGWBFUPDRCXOQESDKLYQWKTAKMGEUREEMPDDZKSMATKQCMEVOQTHZVHFJRLMQNKOCYHFNIARHDNIWIUSMSBJJZJILLPIRNCGJHHFTZZGQFRWXEDMGGPMEDJGQTWMCVBAOPTH");
    const signed char tmp_msg_0[] = {121, 54, -70, -67, -23, 84, 27, -69, 15, -56, 42, -17, 82, 56, -106, -120, 8, 15, -79, 61, 68, 96, -46, 73, -73, -2, -54, 112, -12, -100, -100, 61, 26, 8, 121, 35, -48, 110, 111, 65, 62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5340797581392068);
    msg.setSource(60429U);
    msg.setSourceEntity(124U);
    msg.setDestination(6270U);
    msg.setDestinationEntity(62U);
    msg.value = 0.2605680383248785;

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
    msg.setTimeStamp(0.4244625507636368);
    msg.setSource(34547U);
    msg.setSourceEntity(235U);
    msg.setDestination(7933U);
    msg.setDestinationEntity(125U);
    msg.value = 0.5904903345325835;

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
    msg.setTimeStamp(0.19721433191202065);
    msg.setSource(41112U);
    msg.setSourceEntity(43U);
    msg.setDestination(45658U);
    msg.setDestinationEntity(131U);
    msg.value = 0.3167720967339166;

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
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.5000948657247946);
    msg.setSource(51110U);
    msg.setSourceEntity(235U);
    msg.setDestination(48377U);
    msg.setDestinationEntity(117U);
    msg.type = 187U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 4U;
    tmp_msg_0.op = 138U;
    tmp_msg_0.request_id = 4981U;
    tmp_msg_0.plan_id.assign("CFGZILSCCYWEJANPOYZMOYAVWIIVPLVUFGGAGZXMTHC");
    IMC::EntityMonitoringState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.mcount = 67U;
    tmp_tmp_msg_0_0.mnames.assign("BIHMXLWJPNSYSIGELFUZRJXCMUOHYWZDKIHNEDDSFHZBEJOWGPPELAKBVNCVVMVQRETQCXAZISSSONEXYFTBFPIDNLNAMMBYSQRYQCDKKODGWUIPARQACWBNOIPBRYPXJXJKXRBUR");
    tmp_tmp_msg_0_0.ecount = 218U;
    tmp_tmp_msg_0_0.enames.assign("FOBSTNHKQBSVRNCFEVNPEKQAUIKOQUFHCVZBPFVVORPQWKZSMRLQWZBJXBHBYUHZFTIDRTLGGGHOPWAWWCVDEGZXGIQPYNEMAJPPHYCPGCJJBVJKYLTXORAIOSFZDWUEMYUOQKRNYRTGGSMNHXDAEMVIIHLIZ");
    tmp_tmp_msg_0_0.ccount = 123U;
    tmp_tmp_msg_0_0.cnames.assign("PJWUKNSMJODAVRTHABDTPRMZYTSGVQZJDCBUEZFAFVIANISHYSVKCRPHUYYNPMLMIGUGJJIAVYPKXYDCLHOZOLRSFHGIBRYXUPVIZBDGTZSHDDQVFEIOLUJOFFOEYCXKATKBXGSPNANMOWXRJCXFTDHKQCIEPKJMQCQASZCMJCYWRAIOKWXQWQGDTTPMVFBMHLSZNMXBVERRFQOKELTOUTNZEBGNLLJHQCQZLXYWUIWNSEEKVFPDG");
    tmp_tmp_msg_0_0.last_error.assign("OLFPIIRUZHKHFSSIUFCMPCAOBUQOETWMRTVEXBCLGIMPBUJHLQDMLYDWNRQXNOTNKAQSF");
    tmp_tmp_msg_0_0.last_error_time = 0.0403764960649573;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("IZYBEIMSVEENBNMSRZZGVNYMZSEQSONQRHVUQVDAXRALDATTZFIVFGRULKJPXRITWLEJCYLRVHBNHABCPWWHWPZGBATCPHRDYMWKPZAURXFBCFVQYWFCDJJEJTYSUKJIVGDKWQUBLKPQKISJWXEUJBQXHIYKEDYGSUEWOEOOKM");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.28229051626911594);
    msg.setSource(35236U);
    msg.setSourceEntity(30U);
    msg.setDestination(3707U);
    msg.setDestinationEntity(17U);
    msg.type = 234U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 249U;
    tmp_msg_0.op = 22U;
    tmp_msg_0.request_id = 28183U;
    tmp_msg_0.plan_id.assign("XHEAEIHMPPANTHPNOJPFUOTRMADBWZBVXZVYWEHUDYDYQDWOKFICVDLSWBJFLXVGRQSOKFNFQKXIGQBWQACUG");
    IMC::LoggingControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 190U;
    tmp_tmp_msg_0_0.name.assign("TGOZWOJCAOYFAYWKBGSESPD");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("UFGRUFNZMDYLOKHVWVBJEBRZELXAOMHWQKICXPUTIWNBASBRSSCBDUQCXVTWSZJITYLJFZORHMEWTNXOUPMOLOTGVCJUPKYCMBGPGZPEDMZJV");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.0001297152128101331);
    msg.setSource(16395U);
    msg.setSourceEntity(113U);
    msg.setDestination(50134U);
    msg.setDestinationEntity(151U);
    msg.type = 166U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 90U;
    tmp_msg_0.op = 183U;
    tmp_msg_0.request_id = 28593U;
    tmp_msg_0.plan_id.assign("GYLFQGNGXNNGSWZWDLYRRUGXJTBFYOCWGEPRMLZOFURWMMZQVDKFLZKKXVXEZVEETISALLCKCZQPVFXRMACWYPMNEDSNZNOFPONCLAOAEUJJBPHAFXBYGDOWDOCZIURNRMFTYHPHOCXZHGSRLITIXSWQJVTPRLYGVQQUJOKTRTXBJDMHMIBVNTPHQKHSGVBQUDKMFAHSBIJAYSYEAJBLEDJIIKJWQSVVCEOAIBHWKNAYPIDUWSCFUPUB");
    IMC::WifiNetwork tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.essid.assign("TRWGQMSRUDYMDBSESESRPDDIKQGYLGSXOIXTKYKXAJAGVLLRUNFMEKWZOZAGDLFFISYMYNADNCZTHBJTLRKEHAVCGSJNOPFQMHWEVPQRIWMYZTOCBGNQJZWBODPYOPWUUJBBCLECQIXFKNDIJNYQTLOTCMIORLUVZKTXGJXPOEZSQUHSCFKAMJHROEHXBNBXACVSJQ");
    tmp_tmp_msg_0_0.mac.assign("RLWHEVQIQDTYHVYUHKJJAHGLXRFRMGZJEONNIMIUGGBOYNQKPGOYSSSEXBBRVZHKWBJVHEHCVYXQRAJOQNREWSTAGPHFKUIKVHQYYCTNVFBECDNTSZ");
    tmp_tmp_msg_0_0.signal = 26763;
    tmp_tmp_msg_0_0.noise = 8132;
    tmp_tmp_msg_0_0.ccq = 53;
    tmp_tmp_msg_0_0.channel = 227U;
    tmp_tmp_msg_0_0.freq = 0.4246056227312969;
    tmp_tmp_msg_0_0.security.assign("MCHVMUZNMCJBONPFHJZXNFHBRIBLGSQBZDIDWOYSRAWXASUGWAYXFZFIOPIKLKIRNLDEJAKMUHYFH");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("YKHSXMRSJWRHQKKWGAGVUE");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8673422959511893);
    msg.setSource(52188U);
    msg.setSourceEntity(229U);
    msg.setDestination(1739U);
    msg.setDestinationEntity(122U);
    msg.restriction = 174U;
    msg.reason.assign("DISPVLSHOYDEATJSTEPXNWWCOZIGJXQOOZQCAHMQAOMRYDXMYXCSCWGWCVRWIEAVFSONGFFZCRFBEOTJZSXNVHURTMLYHBWVZRMIZGBGYUJROOUVHXMKFEDRZNMNKLXBSJIKSQCPATPWGKYINDZZDHKPLUBQNBEIZAUEWTUCJEGLUNABFDFKAMBKAUDSQ");

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
    msg.setTimeStamp(0.1716469884659232);
    msg.setSource(2983U);
    msg.setSourceEntity(39U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(114U);
    msg.restriction = 94U;
    msg.reason.assign("KCLEMXFQWIYKZHOFLODDGDSFNJOJJQILUXMCNLCGNEZYRAAMYETHEHZGWILQUHWCKAGXLRWRNTUVUGNXPQXBLBBYEDQGIQDLDJATEUCZBCLQQSKQNBJZIKSO");

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
    msg.setTimeStamp(0.5104317794382683);
    msg.setSource(47972U);
    msg.setSourceEntity(126U);
    msg.setDestination(11180U);
    msg.setDestinationEntity(214U);
    msg.restriction = 174U;
    msg.reason.assign("PTKJRAUHRRCHHNAMFJTNIJUGUOFLMCJKNJURNQZCNXPGXOOABATPBKYBCJKAYLRCVEWWCROBHMSMVXGWHPIPGICYYRWTCGDLUBYBEEJPQKISUDDPVMMIKLBWMITXLTQYWOYVRJLJSZNZNAWIEDSOZFNOZAPPXXUOQKHFYSVBVTTIDASQKHLJGLMDTEDXCFVGQSBDSGXNUMZYFCVXZKSKEOZUPHMVTSFQIXEWHG");

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
    IMC::WifiStats msg;
    msg.setTimeStamp(0.15727151730354327);
    msg.setSource(58050U);
    msg.setSourceEntity(109U);
    msg.setDestination(25816U);
    msg.setDestinationEntity(91U);
    msg.mac.assign("LRDNTMLXBKBMCFIRDWUNRKJIWXVTSFZMJBFJGDCRRQYWLDETGVPNHLFCOKSGPXVMXYHNDGPACYOZTQTORQVKQYZXWNBWDJVIDWYOFGUFBHSLJIPXZNBMHMADKRQSSXZCTHIEPVCNAJRVTJNNUPIFWNAPMOBUSYSLHZAKIOFIEPATGBHKEEWA");
    msg.ip.assign("GVMSGSKTQUMZGJNFKVSTIRXQOCEGEUMBZXAKHCPJHCRNZPEOHTCCDYUOYBRYLNDMDHLFPLPDVTVJBELAWUANDWGIRQDBOXTFAFXLDQQURTONCLOUMSQRYVAFEYVPPKGUWPPVZWPOSUZCJYQNMJIYBZYTIXTWWMYIJXHZVBBALSFBCPCKMKGBXQBZKMER");
    msg.ccq = 183U;
    msg.noise_floor = -31061;
    msg.signal = -3568;
    msg.rssi = 44159U;
    msg.rx_rate = -14652;
    msg.tx_rate = 12187;
    msg.tx_latency = -13538;
    msg.tx_power = 2276;
    msg.rx_count = 1316901196U;
    msg.tx_count = 2262508218U;
    msg.distance = -26799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.6709697119020337);
    msg.setSource(554U);
    msg.setSourceEntity(35U);
    msg.setDestination(48036U);
    msg.setDestinationEntity(139U);
    msg.mac.assign("ITLDLLPWNVJOEGPFGSOLTMTYLMDLSBAKBQSXFCPWTVTEOKOVGWLZHZPBWGVZYMOFKNRRNJKRZOFCXVRUFGXQYEVBMPDKRAATYRGOCNRERHHGUAJUZBVJAKCBJSMWDWXQQKFNQZSUUDWQIQNWCEHXDCZWOTNDMSCXMUOFDKSLTRCFKPUXUAYIGDRIPNLBETJIASFIMAJMJKJHVBMAHGYJBSUZTQYBVVWF");
    msg.ip.assign("VLTPIHSGWQTXEMYKKCTRAGPDFOHSTWNOWFKEAYVRKULFWAPOQHHJEWWCOMFUZGLXOHYYOBLSKVMNXEIQHYDIQCQVQXBDJIOKXORUREZMMMSBLRIDYZUJSIGKEVJPKPMIYYAVZLABDFADLGJURDNSEJCEJ");
    msg.ccq = 83U;
    msg.noise_floor = -14936;
    msg.signal = 17680;
    msg.rssi = 45166U;
    msg.rx_rate = -10695;
    msg.tx_rate = 30774;
    msg.tx_latency = -21352;
    msg.tx_power = -25665;
    msg.rx_count = 720628231U;
    msg.tx_count = 93756503U;
    msg.distance = -3597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.3312454651439908);
    msg.setSource(41121U);
    msg.setSourceEntity(110U);
    msg.setDestination(8952U);
    msg.setDestinationEntity(26U);
    msg.mac.assign("JDBBONAKNGTAHXOPVGRUWJIVNKEJLFIGLKNBMWQQQOEEUDLUSZOFHQPLGKQCPZMHCTOYZWDCAESDTIPVKYLZXRBCUIRJPYRTJPGFNJAHLOEOKFWZRZXHYLBZJTNAPFJDYXLOTITTXMXAISKDMKHHXNYAVSBMWKEUZCIFVQYEAZRACJUMFSQGGCDYYUIPBGNRIFNTP");
    msg.ip.assign("AEIDBPVPPORHECCYFMHKIOWSDMAJTPXEVBRSVVJXR");
    msg.ccq = 188U;
    msg.noise_floor = 26061;
    msg.signal = -10698;
    msg.rssi = 12717U;
    msg.rx_rate = -1104;
    msg.tx_rate = 28643;
    msg.tx_latency = -9161;
    msg.tx_power = 826;
    msg.rx_count = 1264904001U;
    msg.tx_count = 2333251562U;
    msg.distance = 30395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.6830786134992265);
    msg.setSource(52706U);
    msg.setSourceEntity(119U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(246U);
    msg.essid.assign("KEPCBDFYONKQDUORNPHPOKMJTBNVZAMLCXSJMGWIRLRVGVIUQSXDLWYSDTJBNCRNRPTNHEVXFUHGTYIFJZHIKSTYLTOCYBMYJMIPOTNEVKROUFQCFXHKUUOAKZVYFTTABMHLDFXHBGYOEIUALWFJLGJZCMRERWPQABLMHIPIPZAZSQXKWZWVGDRQCQUJIJNAKVYSBSXSXWXCWGGUZLHDZANJGM");
    msg.mac.assign("EVZPBMERDLDDPBFACLRBQCIBCCJXWUHUUOTUPFRNOJFSAQVRKWTJGFVOIQVCGKYEKFWPELGXFNSGTYCWMZNALQUNEVWZSRDSGAIVNENHAHGMQXDOZUFNGIXJXOYYHLRJDMHJKBMFUCOWVLP");
    msg.signal = -30843;
    msg.noise = 16146;
    msg.ccq = 25;
    msg.channel = 94U;
    msg.freq = 0.23715359537705605;
    msg.security.assign("LISRRECVJVMGSZAOETZHDKHECSYPRRQLIXPRBHHGBUWFDZIMNVMDSNPAURKECOAQZYDIMYKAYVHNUQKLLWGNWHXOLSITWOSHGDNFVAKXYGTCGYRCTFNJVOTJDXICWOXUHRNAQZKLLJSOTFWFIXJLQWPPYJKVDGCJQBTUZTUMFTNXIITEEBUAFXWENKUHCDJVQJJAEWBWXSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.5359252132033496);
    msg.setSource(9447U);
    msg.setSourceEntity(19U);
    msg.setDestination(27349U);
    msg.setDestinationEntity(218U);
    msg.essid.assign("IXAYGHPVNNYDYFJPKLQJGLAAWKHNFQIMIMKKFPEEHWXJCYQGGDXUKCWMWVTOSLFVGPSGPERSNAWMOCBDJOJULUZTRTHJGXULGKDNECRCHBIEURNEQSGSHKZOPVMBTTIHZDQZBFAPGLLPQAVAJQJDIMNIUCTOKCVVBQYYHWLRXCJBXRFEOQEWXMSTORSMULUOAXZKRBRZHZYLSTXDEBZFUYVZYXDSPNVAHCD");
    msg.mac.assign("UZELPGMRNDSQKDLVNXDTJAFQSITMAZNPHQUBHMJWEDTERCQXTSAVNJHUGPIGVEOWXWCFIRKEKIMPRGEQTXPXTBXBYSKGPXEKIFSIBHDLKVCJKEIWBADSDZYFTONVXLGEJPCYFBMBOVIYRADOHLKQZXGSGAYUHQZCMUNALPHOOMOSSIWZVIHFVWMFBRCCUKCOFCCXLNJUURJMTWAWRULYWPHNQTZGVYNSBUJDZDLHOLKQPRJ");
    msg.signal = 22819;
    msg.noise = 16031;
    msg.ccq = 75;
    msg.channel = 110U;
    msg.freq = 0.09387255433812491;
    msg.security.assign("BRQUDMTNEPXSBIOJGBCYVAECHGPNUKCSXEMZBTDHUBTZLVQWWHVGDFRSDILNWAKXNJUFNGLZLURSVSFDHIJWRNTXJLFQZQBVOSZZJZCXPURKPBQVOEZJQFFJFJYUIYIGAYVOKIDWHHLKAHSRERIJTBEOYKQSBCZRKOTSDIGIQPBMAOMJYWYWWFHUVXOZPPCNLLXITHYPVQUOHWMURNSTYQAFNNGCMYKEDGFTXDRTMAXAKGWCLPMMCAECELM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.3251608059449015);
    msg.setSource(25979U);
    msg.setSourceEntity(0U);
    msg.setDestination(46717U);
    msg.setDestinationEntity(165U);
    msg.essid.assign("LNAHPYJNNDXNTIZAVPQTFKRRIBUXAMPBBOSTLMATARHFJFFYYZPKAJMZVLZWXYWVSWDDSKOUXMFBGQRFJIJBXWCQNTDDEGCAQYEBYPVDKT");
    msg.mac.assign("LUIFHVTMGDQTQNSBLWZJBFKHTADMKTXWNPHTYUKADLBKEWDKGCIBKDGJQIOJIYMSXJAYWOIZLWJACXRYJZELFVXORYNQSRIMAVEJYCKVOFWQPNH");
    msg.signal = 25835;
    msg.noise = -22489;
    msg.ccq = -89;
    msg.channel = 192U;
    msg.freq = 0.15834787440075326;
    msg.security.assign("TXVUJNHGKRIDOBVUGZSVVFFSREBNCJPVKDDXGIECJYLUBRHCSFRRBMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.6755453577768352);
    msg.setSource(25128U);
    msg.setSourceEntity(243U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(206U);
    msg.frequency = 791727901;
    msg.pulse_length = 1618781028;
    msg.time_delay = 1857066578;
    msg.simulated_speed = -1297561581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.5690958961347251);
    msg.setSource(8144U);
    msg.setSourceEntity(195U);
    msg.setDestination(30358U);
    msg.setDestinationEntity(37U);
    msg.frequency = -575831269;
    msg.pulse_length = -1023951798;
    msg.time_delay = -90482549;
    msg.simulated_speed = -216207126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.194818204499836);
    msg.setSource(60807U);
    msg.setSourceEntity(8U);
    msg.setDestination(491U);
    msg.setDestinationEntity(158U);
    msg.frequency = -1256840840;
    msg.pulse_length = 75433392;
    msg.time_delay = -503308816;
    msg.simulated_speed = 946428831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HealthCheck msg;
    msg.setTimeStamp(0.02711472389856262);
    msg.setSource(62539U);
    msg.setSourceEntity(218U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(157U);
    msg.op = 81U;
    msg.request_id = 1662529606U;
    msg.entity_name.assign("NRKQLWVXSQENKVDWUTUQTUGBBYDAJJSCHRVWOJYVFBMYSSUCAWAOEXEZEWQIAHMEXMIOPGHZACBWLIOSQRJGBZZUIMJPVKMKLCTXILNSUGPKAFVTXFPEYLLPKLGWMJXSNVMHCHPMNHJEAHNKNARTGCBSRVTYSXOOFZPZNDFERMZCHPBOIYMZHVIREYTRKIDDAFYCIRZRKQNWDCFOBUEOXQGQPTLDYDG");
    msg.status = 41453U;
    msg.text.assign("VSYPZFYZQIHQQTEYYFDBVOABGUHXGDGTLFEQKWWKKGTIMXYJACCLAMZOWARLAQNRZWYPKIMAIJPHRKGFFSWENOCDEQCHUNCJIZOFOSGARTVTNMXSJXTMYDFKZLWXEIKHQNBBECTHVJXSLJLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HealthCheck #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HealthCheck msg;
    msg.setTimeStamp(0.7064011069535883);
    msg.setSource(60147U);
    msg.setSourceEntity(236U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(7U);
    msg.op = 181U;
    msg.request_id = 1143443360U;
    msg.entity_name.assign("UUGRKYLCCSMYTUZMTNGZTPBMCVBDFMGVMSDIROKFKGINANJWRIHQCVTZCTGUEI");
    msg.status = 12644U;
    msg.text.assign("CIDZZOJORGZATIDYJJKFCIPHPBRPYASYRBYWGZDNZHNHYASNWETEDEJTBKMQJXSQNQBXOENWPVCDRMGVLHMEKBQADSEAKNGSOOSXHCGBOKBZRVXJCZMWJDAWWLTIHKFRUQQXPARWTIXFOUEDZTGYDUKSMTYCVJKFXFAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HealthCheck #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HealthCheck msg;
    msg.setTimeStamp(0.06888109504732942);
    msg.setSource(8496U);
    msg.setSourceEntity(27U);
    msg.setDestination(1272U);
    msg.setDestinationEntity(33U);
    msg.op = 89U;
    msg.request_id = 3589469725U;
    msg.entity_name.assign("RLZMOPXHJKAUKLHIRAIXSTAAKQASJIZWDWIWVROOJVSXSHNKSMGPEPCDPQSLBJLJVNLNEWCZECYBAJBCXABKMKHIYLRBFSVYQNJPLLYWKFVOIBTFVXKDSUMQOZZMGDZZNTQ");
    msg.status = 56353U;
    msg.text.assign("ZTXEWILXNUWCVYTKBMJRGLDLXGSQAYAMFZEQWYANVMOJOLKXWSRYHFKFRTHEECHRTXDCXVPKUHFPKGWRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HealthCheck #2", msg == *msg_d);
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
    msg.setTimeStamp(0.07517622750585429);
    msg.setSource(28453U);
    msg.setSourceEntity(58U);
    msg.setDestination(10941U);
    msg.setDestinationEntity(224U);
    msg.op = 69U;
    msg.request_id = 3978525323U;
    msg.entity_name.assign("EYKOZQNXNGMHSFUKXXMTRPRVVLKSQMEDNEZATLOLUNOQWVLYCEVZHCIXDPYQDBRQJQWNZGPVKVRCPGABJIRGAFMJSTNBJTIDRMAKYLIXPJKHNLRWYADBHNJSOTFCEAWWKHPSTUULDVDVQBODPOBBFCJGDNMEJBHRKVFWBXGCFCTQZEZLUEHPXOFYCRSCSYHPVWUZIOAWFQOEDZKXCTAJEFIHIIULTLIPGZSFRUYGMHMYKMIZWUYGWXOUJNXA");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JOGGVIGZSIFCHFOOHJVBKTBTRUUTENYWELZLLLWMSPXKCHNYYKOMBPOPZOXJBVRLLHDWKQRRFAHSEQFZACYKPYYRBWIMQZCPZJJLUNZYQSEUIXNBDKGKHNPKVCQLJQBHVEJZRMJCEAMEOLHIVWWFDCYXFUIDRSTWPVSMEVSRIEYAVGAGUINDBWFXFYNEQAJTODINMQHAIADCOVGKDJUPQUOGUKXZFTSDMFQMTARGL");
    tmp_msg_0.type = 237U;
    tmp_msg_0.default_value.assign("HWHKGTUZXGUIUKTRPBIHVDNVFXETJSVCPPZJFLPITEENWVEKAWDFDVTOZMDRLAQBBAGMAIFIHNOUCPVHVTXCSOTFZDMZZAXEOJXUFKJEZBDLMEQURKYMKRARYRVWTIIWYGBTCGYBTMELWQVJNQSHKLSORLSUIKOIQCNMMXOABZBAPF");
    tmp_msg_0.units.assign("PCTLIINWJVWRXSJPDXCYLKMHXDRXGGJFODBAQNHCNPVHIXMIAMQSCJZREAEMZXXUFSIAGTFRCQGEVKAGJWOLXEHOVUZEVFUNSRNSKSBOMBCMNSOVTGYTARVCHULBBEQHPJRDDVZ");
    tmp_msg_0.description.assign("VDIQIVBLMFZHYECERC");
    tmp_msg_0.values_list.assign("IEYQRQXQRULFPFHHKDHAFTRTKWTBMZGMVOOUNQWSVSFAATBQOGPBLACZIUMXIYMWACCDPGXTNHJXNHKXTOUETYSKNFRFNBBHFWEDTIOUFDQCNZCIRUVZJCVOJSWKJZPAXEEEYAAOGUMCJPHCWAIXKZVIMJYJLDTZSWHYPRDJDQJZDGXYBRRNCERAVPGQOBEOBNJLLHMSKLOFMKNLWPMVINZXBPZMUGPYLLHIGLEUKWXSVDSRCWYGBUFQGKTQID");
    tmp_msg_0.min_value = 0.5599791899969834;
    tmp_msg_0.max_value = 0.1497796708816701;
    tmp_msg_0.list_min_size = 7U;
    tmp_msg_0.list_max_size = 17U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("UACCDTCTXQHDRVFEEXJJHLCNFPHBOTNUAIHURCIGHZJYOPIDOKAJUODOKVQDGYJYMWHDWDHBREQLPROKOZMLATUUSJCRZZGFTSLWIIELAUZNOYQBCCMFHFGNSLENDUMOWSKNLDUXSNEMPXPZYDBWGQBVMEVYFAGGWKIRBTCWRGXPCXGQRXZHIYWIVLAYMJAAYPVXEWIKNSVJTSVTFLXZBEFWKPIHKBSQPSMLEQAPQGKKNV");
    tmp_tmp_msg_0_0.value.assign("CSYJZEWYUTCDELLQCQIHPVOIHXUZMXOYXBAWWGQFKUHIKXWMNBMEFIKFTTWUKJCIHWTZLUZRKOAUJLHPR");
    tmp_tmp_msg_0_0.values_list.assign("OGGESBJVYFLWSXVNJWEDMOQCBPQVTMDKQLQVRJMUR");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 100U;
    tmp_msg_0.scope = 219U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6049589140653551);
    msg.setSource(59298U);
    msg.setSourceEntity(2U);
    msg.setDestination(23856U);
    msg.setDestinationEntity(73U);
    msg.op = 162U;
    msg.request_id = 2828513049U;
    msg.entity_name.assign("SVLTXSEZSNAMLEPOJBFRNEOBZXFFZVMXKSQVZNVFMGJKCQITXAGZKMRRILLKTEIRIXXDZMWICAOBTFLQWRGBDCYJLDVPUHCGSJHYRGLVIRIQAH");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UZXKYUGJFASQQAVPPLQWSPSVZJZSWDGNXXQFTBDGHZWMRKKEKSLMUHYABOWBBYOWWQMWGUFLIZNZDEIXJKILZOHCTNRQDIWTYBJYRGTDLYLXKJLMEELFXOKGSBOFPWVFOFPHDTINAJBOENVHZBSSRELIAIIWBDRHSXUGCGVJYZHNXRUUKRCVRXRCNPNH");
    tmp_msg_0.type = 155U;
    tmp_msg_0.default_value.assign("LGZYHELHYGDPBBKYXIJPWDTEVADHOEETXKFSUJTWWAAGJYBDWRZLNZPZOCHSOGKVRUXZPVTQSCPNNBBRBVKJJUHYEMLTXUZKFXTFHVOMYGSMMWIQRUKMAPKQGOUAFUDSFNCDTCOBFGNQIEPVXLIBPYJCNRXRMGIFBFELMYYOVTOSVDCQFUJLSQDDONNIWVQRMQTWEEAHOWEJZNLGANVSKZQHLXIBXCRZJKMQHIASURSYGMIXTPC");
    tmp_msg_0.units.assign("UBGZCMENJAFOLADXSWKEDASAIYHHNFAUZJTEJUMWCJHDASV");
    tmp_msg_0.description.assign("SOUJWKABDINPPWSRLVBCTSWGNPDDRTIMBWBT");
    tmp_msg_0.values_list.assign("BOPWBKDNMXGULKEUJXFIEOQIHUTTRNVWVRFIUZJNOWAGAYPFMKEAJTLSWPKOMGJBZQWMXHEAPSPDQUDSRZCZQMSOSVZPQIFGNCOLMSIKUNOMUZGKEBAVSXDXYLHFXLEWHENMYCQCK");
    tmp_msg_0.min_value = 0.5974531579880228;
    tmp_msg_0.max_value = 0.9422046194788296;
    tmp_msg_0.list_min_size = 152U;
    tmp_msg_0.list_max_size = 58U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("BCNJYIYSJVPBLOWTVKARJZKNQMGOZHGSYEMQTXLLARIHQXIGRPAFLOPLBVGWWFZXKAXDZBCVLFBIVSRUKYVUIOCYQYBDZRHQSIRUDHQFJFXQUWMDFHIIAHWJZYTDOVLNSBZWSMMEODEDBIUFLWXNTRSGUPYMPHABCMGNAVFEBAQM");
    tmp_tmp_msg_0_0.value.assign("FCEVZCHHRBIBXYBQKYMJCAPKZHYFBWDKSNTQJLVRQTPAR");
    tmp_tmp_msg_0_0.values_list.assign("MMLCETUGKCZLOIZGUWHYNGRWKVGOYXVSRNNUAQFPAYUHZCTFOXXCRJLFLKSXEEBLPFPREZILJ");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 170U;
    tmp_msg_0.scope = 105U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4911466752064073);
    msg.setSource(318U);
    msg.setSourceEntity(38U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(135U);
    msg.op = 26U;
    msg.request_id = 4132295439U;
    msg.entity_name.assign("TCYCZNFJYJNDBTBHAEMBNJRGJTPHTVWVQPDWCPNPAFHKXVXIOJLRGEFNDBZCRGGOTNLMUXWPSVDGYGFVGSHNQIJALHFUUHYWAWRJZXIZODAFIDYHJKXQSLKSJLWLACFTNQOAQLKKPWCIHXABKZERUQNVFKRGCJKKRIHXXCEASRBDPSOWZTTMYLXSIY");

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
    msg.setTimeStamp(0.05397474828597382);
    msg.setSource(5662U);
    msg.setSourceEntity(40U);
    msg.setDestination(55375U);
    msg.setDestinationEntity(216U);
    msg.name.assign("YHTSBYDAZBPCMKLHBSFCHJJQUAFZMNIVRRZIPRKZUCZWOXOELTHAHJQXFLEBTYSVGRKMPYWAJXSSCNQAHRVFEKDARICWCZUWMYUNURBPZEOGIMUEGADQPTAVIYZQFUWCWBLJOSOHVSIKMPHUCSXKPVOLTQBWUQIKTPKFIWRGLXSNBAKJBXYQMDGGGPDOJICFQJMKVDXNHDCTEIVJRBETTXDYMRFDWFJGS");
    msg.type = 49U;
    msg.default_value.assign("MRBHZDYFXDTYEXAZNLJPRSQKDSFVSOTCAURGEETEOZDLGKMKGJVJIQPOVQUTEPIVEENCCIMXNIKIONYZANGCIPCYGXOZALTQQCPUJWDPBRFYCBNTAQOYUTTSGQMNYLRVFKBMXNGZRWNAIKYXUGSHWFPFJVWMZSFZBEFLTHZMDLSXWLSVBAKRMHHNYFGVJCKVCWHYFBAQUCBORGUPDESJDPXBHLHUVWPUSKLXMDJWJKOXLT");
    msg.units.assign("AMPFBYPUCAOZUPSLVTCMIPQKVAJFIPYRSUUSLXFCBIUWLDUNENMWDAMIWXHWSJDGOVATKFNUKUTSVVHXRZNGQNPYDTEEQMLC");
    msg.description.assign("PZTMSQHMPVKGJPTNJCAEHGSVSYSFBEUXIBMPEGYNRGAYUDQGUALCNQIXFHIGLLSOEXDCVUSDPNJDZPKUEJKPNGLZLQLIIJRWBTBWPIHHQYFDXZDWRBTYLWZQEUCDLGARNXVKXAKGJXGHNMAMYEOICWRFFIAMVUAYEWZK");
    msg.values_list.assign("YHUDRALCPHAMHTQUNCPCZNGIOEQKPBVVSVJXDVTOSQGIMCIEUPHMLWQYTQVYHAWYJTTECDLRJEIGRMNXDCEELDNBQDRDZNXAAAAGVRRWYFGGCJNMZWBNVIUSVBFRYHUFTOKJVEBTVLBWHXXIFUTUGMISYFREKQBIFJKQMSSILIHGXQJMMOXFFDUUSJKECMZPXJEZOZOFCLYLDKWZ");
    msg.min_value = 0.7302230865113521;
    msg.max_value = 0.3980409630981828;
    msg.list_min_size = 239U;
    msg.list_max_size = 65U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("LVFOPUVDZTWYCBIVGWDIOTCSQJ");
    tmp_msg_0.value.assign("LFEXMVAYGHJDUXOXKJJMTTHKYDR");
    tmp_msg_0.values_list.assign("GZZRABEPJGCKJYCAJQVNMDSOXUALUIHMRYBQXZNTWWZLADFZILHLJCDDDTSTXOMRLPTNPGZEAQIMQQMSSQASUPTFBKRUGEVYRNMIQEYZUDOEIKLXKRBVFWNUQFHVOJACIXRFBONQKWEAFXWCHBCEYTOO");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 172U;
    msg.scope = 81U;

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
    msg.setTimeStamp(0.6253752390552194);
    msg.setSource(5423U);
    msg.setSourceEntity(6U);
    msg.setDestination(28933U);
    msg.setDestinationEntity(198U);
    msg.name.assign("BHIUZIDTCHFRPWRSUDBULT");
    msg.type = 163U;
    msg.default_value.assign("DTMYJYCSQJLXOAFYCBTMWQBMYWTNTXHUJKLETEXNGHSQMCLCZBCDHVPSRJTNHGCURHIJZEYZIJRWSZRFSHUAUXZZMGKNOEIDANXGLQUCTUGLQMOBCSRIVVPKDPGCDFCIXTKVJFUEWBFLG");
    msg.units.assign("RKODEBJHZAAURWACGKOIOTZCBQZWLMJUNPYMBJSREZPPNOMEHLSRFTTDHSOCVMBUHXZPFQCTZXQGRUKDLUYYILYGIHHVFPAWZGCOCSICUNVKUXQGRUENIZWCWXMDSLVBVSKJYXATNPVIXEJLKROYXSVNPIXKQADESYNTDJUTQPAJKUKNFMBVXAMRZMNLZIWEFNIGCKVTQSFLYFQTFBGQBALHMHEORYWXJBWILEFOGRDYTE");
    msg.description.assign("KGTGJOSRCAQFINLJVZYDVIRUPFMRYARQKAJRNHBBDQEMXXTDSGJISPTSBFACGLZMLKAMTMRZNMUJXJFRPFXYWBYEKIYQMXPXESIWNLPEJJD");
    msg.values_list.assign("AVLOIKNEHFHGCFJVJYWKASQSSWBIWIXCKVLDMNKDIGIYYMBLJPFDXYTUPLZVMLMNWRNZUWGSUGPCNWFAELZDQEIWCJBWQSUWOLZJTXDPDMIUNEDAVBEPXQWEJGEGMFSSOQMCVZUXNRTKYXTUZIMRFQVFSAHSQBZCPFAEIBBAHATDXKZPTURNXHMQYDPCOOHJBPQXOJOZMOSHNLAYGXGNYRYEKHEHD");
    msg.min_value = 0.3704593779262323;
    msg.max_value = 0.26028723712541635;
    msg.list_min_size = 65U;
    msg.list_max_size = 230U;
    msg.visibility = 207U;
    msg.scope = 243U;

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
    msg.setTimeStamp(0.9650208661120983);
    msg.setSource(64462U);
    msg.setSourceEntity(198U);
    msg.setDestination(56988U);
    msg.setDestinationEntity(156U);
    msg.name.assign("GBYWDSFRRXILFTOWTDGPPYAOKWSCDASCRQTVUAMLEPIRAFJGQUQAQZCMMSVBYEFQROVAYHYNDOQAIQKIMNTJEBIWJJJLULNWYSBUERCWSPRCZRFDBBCTJRMUCFKCUIWKXZNJPHHKZGYHNDPVEJTPFSGEVZTVZVIKONWNDXLVLCNLPNLMCUHSILJFATYXQBFGDYKBDMYOXZGTXJHDOAMUTEIFWOVBQXKHUOXAWZEKL");
    msg.type = 192U;
    msg.default_value.assign("UXEFPTNKFUX");
    msg.units.assign("OIYAFTBVRXLFSVOOPPSCMWZWDJTSNNFUOFZHZTLMJZNNRGEYVCHSMFPUTHBVOSIPLRUGDWUFGCPIMTEZZYEUXZELUIQKWZBBYXRDGIVHSGWNMAOUXYIGXOTHRABYMCSROTAQJVCCZGLTUFIIPAYAJDYFKQXBKEVKJBWDBPSDWWT");
    msg.description.assign("QNJELCBSPMLTCVCCPDGJIFJOBQWTGMAPFTCPJSBMVINYMNSOVUFUWRTJGIWSTN");
    msg.values_list.assign("JXARHXHMFRVGPNSTA");
    msg.min_value = 0.36443450333058525;
    msg.max_value = 0.562774732076233;
    msg.list_min_size = 105U;
    msg.list_max_size = 170U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("ZIVPJIXFQGUZPESDKTAZADEEBHBPFVLPCICAHYBOWMZUZGDNOOREUTQNMKIYLFCIQPFJMJANJTNQDIKEYUKEYDBXHGWWBGJNZPAIPRTAMNZACMKCVQOMIHMXSUDULOFOCOWVIOCVFKYFWRTWWLHYKXRJDLEGZSQLJPLXQHMQLPTBTUTKKFVJWVJWHXCLHVQXBOEMOSNRESXZQUKRGNSBGGVRXFGTB");
    tmp_msg_0.value.assign("KOMUZOZQLIRPEZBZIMHORADYQAEXWCQZTVSGJANAXVOFMRYEUUQCTGFUPSFQNJ");
    tmp_msg_0.values_list.assign("DJGAVCBNCMYHTKURZISMZAEZZBDTUZUTNKCLFEHDVUBQWVGYXGGKHRXXOGXSBBWWFXVVMQUHTFMCCZQLMRUPKBAEGGPFABJWDSLQAIARTWZQCISOSZWYMOPSTVMNLMJNNRGKNOZPOOQUYHUPNJPRSKICPEBUQS");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 203U;
    msg.scope = 156U;

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
    msg.setTimeStamp(0.1400456247308569);
    msg.setSource(7222U);
    msg.setSourceEntity(85U);
    msg.setDestination(28690U);
    msg.setDestinationEntity(246U);
    msg.param.assign("KQEJSIUYRNXACBOUOGXUTPTLCMAS");
    msg.value.assign("JXXFCVSOVSRSOZBVOFZFZGLWNPBRWNTCSKNBJJUZTGRIMQNEYTERRVCKUMZLGDBFOPYXDESIBKKCYYHZELDJKVEOWCAUNRUJQAO");
    msg.values_list.assign("DJQOXOSMQJLLDEZTMDFFKSPVHXYBFMUGFWPEXWFAEVTJDYWHHBHOZHTKPFLLMKFYRUNZBWQFWFANZXDAYMIPNBRXPMJIRZRBSCVELUAOXSETPQXPPPUXQZTVGTKCKDXQVIJYNGMGVCMBTBZELRLVJBLILHCRSMYOWNUKOSUMIUSOACHAWEYGDLNEDCGQQSJWGHUPKISKWZNUONCTAKGSGHHIRI");

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
    msg.setTimeStamp(0.8747436259924716);
    msg.setSource(48312U);
    msg.setSourceEntity(82U);
    msg.setDestination(3873U);
    msg.setDestinationEntity(65U);
    msg.param.assign("KHLBTTDDAMXAIZQPSZINSQVQJVXZWLAFUXEGCRFRDUBHELGBWLMCGJAQLBTAOIKKFMMVZBKNZCQUGIYOKIXLIVYLAWKOFRADOXYXVLYVMPYNWHKCBFZMHPOVFYDEHTTXUTIFOZJRSXCNOEGIYSALECGBQJSVORHMJYKYJNDNZJJYHFQZVOVJPWAHIWGRSPFIWDTEQQQTDKUJNPUZHECNTFBGT");
    msg.value.assign("HFWUUNFUFRGLATWBXSHOBQBMZPKWDXGFGVZOCEYARZRDCZWIJLMBIMCBHWFIPRHCVXGITTEWAFQUJU");
    msg.values_list.assign("XUIZELOHZNTUARPSORLDQFPXUXUMHVICNZMBJSBFSCQENWWZRZNU");

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
    msg.setTimeStamp(0.2768240580217274);
    msg.setSource(37350U);
    msg.setSourceEntity(164U);
    msg.setDestination(7324U);
    msg.setDestinationEntity(196U);
    msg.param.assign("BLXZXUOZQKKGLWBMJYFDUSBBCEQEXKOCRIBUWNIJWSAKEHUNMBEVEGLJCHELPSWMWOMRIOGDHRUUN");
    msg.value.assign("UOOEGDZTGVHNOVSFKDSRCXQDRMNUMAMYTSV");
    msg.values_list.assign("IHVPKYYKTSJHBNGRWWBQOHCPIXVTXJCGNVWPAXUEGDMBTLPETYOBKVYPPBGFBAZVIPMRVTJWYLXMDMOKABYCCPEGPOOLRGSWEYQVKLYWJQVBVZEMRGYAFRFMFIMNEHCQTRSFKYAWWRN");

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
    IMC::DirSonarData msg;
    msg.setTimeStamp(0.8134231875067215);
    msg.setSource(7083U);
    msg.setSourceEntity(232U);
    msg.setDestination(34258U);
    msg.setDestinationEntity(63U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.08420679659586039;
    tmp_msg_0.y = 0.08414684711146381;
    tmp_msg_0.z = 0.7932165773850892;
    tmp_msg_0.phi = 0.606165923531084;
    tmp_msg_0.theta = 0.20051661845849278;
    tmp_msg_0.psi = 0.5632787518876771;
    msg.pose.set(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 16U;
    tmp_msg_1.frequency = 1675761108U;
    tmp_msg_1.min_range = 22598U;
    tmp_msg_1.max_range = 27886U;
    tmp_msg_1.bits_per_point = 35U;
    tmp_msg_1.scale_factor = 0.7475962076876806;
    IMC::BeamConfig tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beam_width = 0.5563427107935195;
    tmp_tmp_msg_1_0.beam_height = 0.17053021313223438;
    tmp_msg_1.beam_config.push_back(tmp_tmp_msg_1_0);
    const signed char tmp_tmp_msg_1_1[] = {-114, -3, -90, -101, -95, 86, -8, -24, 26, 114, 122, -77, -52, 122, 9, 41, -11, -14, -48, 67, 18, 42, 29, 69, 79, -120, -84, -118};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_1, tmp_tmp_msg_1_1 + sizeof(tmp_tmp_msg_1_1));
    msg.measurement.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DirSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DirSonarData msg;
    msg.setTimeStamp(0.8078126519875688);
    msg.setSource(38729U);
    msg.setSourceEntity(173U);
    msg.setDestination(45360U);
    msg.setDestinationEntity(71U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5353798004361515;
    tmp_msg_0.y = 0.09909621586922046;
    tmp_msg_0.z = 0.5827889922941927;
    tmp_msg_0.phi = 0.7206652949484378;
    tmp_msg_0.theta = 0.2768514710873934;
    tmp_msg_0.psi = 0.5300095035753637;
    msg.pose.set(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 183U;
    tmp_msg_1.frequency = 2286264202U;
    tmp_msg_1.min_range = 9247U;
    tmp_msg_1.max_range = 5201U;
    tmp_msg_1.bits_per_point = 115U;
    tmp_msg_1.scale_factor = 0.9511020836899242;
    const signed char tmp_tmp_msg_1_0[] = {16, -2, 78, 43, 108, 4, -51, -37, -83, 49, 27, 119, -94, 42, -66, -125, 9, -60, 82, -91, 85, -98, 62, 119, -96, -35, 4, -55, 72, 119, -54, 97, -54, 119, -112, 96, 45, 59, 116, -18, 19, 120, -127, 25, 37, 101, 85, -94, 83, 60, 126, 13, -18, 93, -6, -93, -59, -97, -105, -26, -122, 116, 4, 72, 84, 33, -125, 64, -116, 99, -61, -98, -98, 26, -88, -73, 64, 121, -78, -99, 73, -39, 112, 58, -15, 19, -74, 13, -47, 125, -114, -3, 103, -20, -48, 63, -115, -51, -14, -29, -48, -100, 0, 84, 13, 17, 5, 85, 2, -73, 33, -62, -88, 49, 111, 89, -66, 43, -38, 97, 101, -75, 77, -105, -40, -79, -43, -39, -88, -41, -106, 25, 28, -92, 93, -90, 10, 88, 115, -48, 106, -41, 53, 23, 58, -62, -29, -98, -46, -19, 59, -53, 11, 106, 89, 15, 105, 119, 22, -57, 10, 59, 85, 21, 20, -75, 10, -43, 72, 79, 48, 72, 120, 19, -74, 123, 48, 124, -32, 82, 102, 75, 9, -19, -89, 95, -101, 23, 71, -100, 100, 21, -28, -37, -96, 119};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.measurement.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DirSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DirSonarData msg;
    msg.setTimeStamp(0.299099025482217);
    msg.setSource(13119U);
    msg.setSourceEntity(38U);
    msg.setDestination(27699U);
    msg.setDestinationEntity(162U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.45737040120515937;
    tmp_msg_0.y = 0.21069801935397603;
    tmp_msg_0.z = 0.4350019510097727;
    tmp_msg_0.phi = 0.7822293836692692;
    tmp_msg_0.theta = 0.31899357972187903;
    tmp_msg_0.psi = 0.6225417072532782;
    msg.pose.set(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 63U;
    tmp_msg_1.frequency = 3751038394U;
    tmp_msg_1.min_range = 1584U;
    tmp_msg_1.max_range = 39668U;
    tmp_msg_1.bits_per_point = 242U;
    tmp_msg_1.scale_factor = 0.30882011194703074;
    const signed char tmp_tmp_msg_1_0[] = {-62, 8, 51, 54, 7, -102, 31, 70, -69, -47, 6, -47, -65, 12, -41, -84, 35, -50, 31, -1, 125, 40, -73, 83, -64, 32, 69, -99, -50, -68, -59, -65, 82, -110, -29, -126, -80, 77, 84, -69, 113, 62, 68, 87, -64, -119, -107, -23, -46, 27, 95, 113, -64, 57, 118, -17, -30, 93, 19, -101, -65, -42, 12, 45, 2, -60, 109, -39, 34, -65, -105, 114, 37, -44, -100, -51, 80, -49, 57, -18, 103, 103, -14, 61, -33, 7, 39, -22, 74, -117, -57, 48, -43, -128, -20, 45, 45, -70, 77, 34, -92, 87, 105, -79, 20, -103, 22, 83, 43, 19, 118, -14, -44, 40, -74, -126, -7, 12, 91, -41, 63, -64, -53, 84, -105, -120, -61, -118, -63, -77, 42, -80, 109, -59, 38, -10, 46, 118, 107, 120, -115, -14, 56, 9, -34};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.measurement.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DirSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverResumed msg;
    msg.setTimeStamp(0.6960039688266382);
    msg.setSource(35055U);
    msg.setSourceEntity(78U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(126U);
    msg.man_id.assign("QTVBLPRNYOTZJUEWIDUKHSNNYAYHIWWJOQSBJWZUIZCPVPOAZBLJLGYCEVPFZTIFEQJEWJVWXGMMIBMRBVDKESIKRDDKCEXWPBMJYEHCXRDSORHFAXAKLIWRDQETFQOLGYXHQAGYPVXTWDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverResumed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverResumed msg;
    msg.setTimeStamp(0.9497765819409425);
    msg.setSource(27012U);
    msg.setSourceEntity(146U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(170U);
    msg.man_id.assign("UKWYHXIRBMTPZJCQXSAMFDKBLKPVIQSLFDSOHXOLWFNVBUZARVGNLGAQLFAWNLHBLCWPWKTIUYUCKJATCXMBHEDNYHSLGORUBJCAIIDHZYBIEQRFQEQWNOKQOTMCDPDVRDJXMIRXFKEFONGRNODMTNPPTCJVPYMJZSZMREBEQWIGMNAZXBJSSEOHQPUKCZUALGYWTXYTSUSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverResumed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverResumed msg;
    msg.setTimeStamp(0.7121324516714762);
    msg.setSource(56820U);
    msg.setSourceEntity(208U);
    msg.setDestination(8045U);
    msg.setDestinationEntity(129U);
    msg.man_id.assign("KAOMCWEORDIKRCBLJAYDKOETVQZDLOQXUDDFEASBFGHFFXQKPZTVPSDRDRCXFCPQPSPHMLJBAPJUNDYAFTSWJXRZRXCTSHIFAZGARUPMJMQYJEVOPJKGVNJLMEHYTBQAVKZDHQIHLFTOOIOXVUVIKUZZHSTQSBZNGAYMNGNWUGO");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 20830U;
    tmp_msg_0.lat = 0.5249112790410737;
    tmp_msg_0.lon = 0.9975709601132268;
    tmp_msg_0.z = 0.6412272534530074;
    tmp_msg_0.z_units = 10U;
    tmp_msg_0.pitch = 0.4526315244936605;
    tmp_msg_0.amplitude = 0.9931234824231779;
    tmp_msg_0.duration = 10568U;
    tmp_msg_0.speed = 0.7561324446684722;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.radius = 0.31532184691847165;
    tmp_msg_0.direction = 233U;
    tmp_msg_0.custom.assign("KVNBSORWOHWKXBPQRBYQUHAIJCQGTKRLOIUHDRDQHDNFMNLPDYXLHIADZTFPDYTUXJOYWOQPJWZPBFYYHQETXGJTHDOLKXGXZWWMEZIVS");
    msg.man_list.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverResumed #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3006626032539854);
    msg.setSource(43167U);
    msg.setSourceEntity(176U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(180U);
    msg.op = 84U;
    msg.version.assign("JHLSCKROWQSSKWOVAGIRXECWDZBIDEVZPPOYOWUAKGHCXPGIWFFZPRMRGKZCFTUWIRQBHMMQSHJTSKCYTMIEXIJGDSBFXTVYZNHWUZTVSQAXGOMLDAHKMXEQZYALKUFQESVAFBGKCJUTLPSCXTBU");
    msg.description.assign("SMNFMOYVWBDNOUAVALFLBYOYZEYRQJOCBFDAIEAZUKZSAPFMCACBHPHXVFCSRNGTGKMLNETIQMFBGJJWX");

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
    msg.setTimeStamp(0.49704754941244245);
    msg.setSource(39229U);
    msg.setSourceEntity(130U);
    msg.setDestination(17265U);
    msg.setDestinationEntity(211U);
    msg.op = 9U;
    msg.version.assign("MDZUHIEBFBAOMUXFAEAZWAEKVDDPGSJQYTPLTZKZXZGMYQAACFSBCOFECKYVJDAONNBLSHVPQRCGRJYLZZTNSRFZCTSRNSUDBWCWPCLVNJYTQRW");
    msg.description.assign("BOEMZULQGWAYLWAHGEOJTNIXMFSKXKLEEZIOIBZMTNLIYGKEXOZHEHUIWHSVAQHKZYPACFGOQLFSJBTSLAWUD");

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
    msg.setTimeStamp(0.7538766552662647);
    msg.setSource(42967U);
    msg.setSourceEntity(231U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(73U);
    msg.op = 142U;
    msg.version.assign("LAXQZYFVDIHZFARIBRZLPKKEZJQPXNQDVWOVG");
    msg.description.assign("WCLXQBPMTAJEZVENRKYMQPAREFFSNAZRYJETQFNXCDTWBL");

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

  return test.getReturnValue();
}
