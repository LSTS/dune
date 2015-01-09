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
// IMC XML MD5: f5945eec02448bc770e01e984183d2aa                            *
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
    msg.setTimeStamp(0.8738475768223356);
    msg.setSource(65062U);
    msg.setSourceEntity(148U);
    msg.setDestination(9992U);
    msg.setDestinationEntity(253U);
    msg.state = 102U;
    msg.flags = 145U;
    msg.description.assign("WXDTMNMYSGPNWKIKBYOIKOPPKIQAQ");

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
    msg.setTimeStamp(0.8986989871616055);
    msg.setSource(59307U);
    msg.setSourceEntity(78U);
    msg.setDestination(8648U);
    msg.setDestinationEntity(252U);
    msg.state = 85U;
    msg.flags = 218U;
    msg.description.assign("MZSDWNGFMKNHCJDHFHXAHNRRXEUDHNSBDPCTJSQBPMASGTYZLSDZONEOBQGLPLNZZTWCJLSACTZLCYGHZJDPEQISVRCWQBQQIIXJKGSNUCLAWEWZRKYBRIUFFYWMDBIDKNWHNBETBXKHIK");

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
    msg.setTimeStamp(0.5104477839045194);
    msg.setSource(45747U);
    msg.setSourceEntity(123U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(121U);
    msg.state = 105U;
    msg.flags = 159U;
    msg.description.assign("VIYSEYCDQCGOEVHSQBMZPQNBYUIBBTPAZPVWZQJAPGWSFNWORAUFUMZUHHBODKKVYBTNTPNMUWRXJLPFHUOSTEVTNVZMHDKFXRMGQFHJ");

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
    msg.setTimeStamp(0.6716172523174903);
    msg.setSource(65178U);
    msg.setSourceEntity(116U);
    msg.setDestination(32400U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.21645131167584974);
    msg.setSource(53239U);
    msg.setSourceEntity(71U);
    msg.setDestination(42669U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.6913270815765264);
    msg.setSource(43275U);
    msg.setSourceEntity(57U);
    msg.setDestination(59269U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.24930822442260747);
    msg.setSource(31724U);
    msg.setSourceEntity(165U);
    msg.setDestination(12241U);
    msg.setDestinationEntity(185U);
    msg.id = 215U;
    msg.label.assign("AOWRMSABCZAQFOFBLWNIPGGJIKKQEUOZHDWXNNSFXSHRVITIGYJVXCQPSSLWGSUNLDTP");
    msg.component.assign("YFZIJLADRQZKQKHPNULUDUFANXEUUXYJWSMJAXYTIMXQYWERZHCTZBAZEHNOICQCBSLSBPZKVBUNWEXJXCDYXUGEPIOSFCSGCRDSPYMBOLHGMOEQKOTUWGFRYPXJEYJMGKRBEYAGZMBFIAVRFKXWFAVVFTRWIQNCHHJQ");
    msg.act_time = 23464U;
    msg.deact_time = 51875U;

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
    msg.setTimeStamp(0.6032545453160424);
    msg.setSource(32970U);
    msg.setSourceEntity(240U);
    msg.setDestination(18668U);
    msg.setDestinationEntity(245U);
    msg.id = 37U;
    msg.label.assign("YUDUZXOIKNGPVNCMOQAKXQLPBDPEWRPRLLHIDQVJHNWXMXHJESUIYXBOUNYZKEQJYUWBLASQYVXFKBMQCZAPAJIZMMBLNXLPFHGEBRDEWVNLROSVYPWFVUGAXHRPKFSMWHXTZFUWTOIIATSAZDPEFZHYZTDENDTLNIUJBQJDOLDJTZTYGKGIUROFGIJFPW");
    msg.component.assign("AVYIJVMCPKOCSEADQQMZXROTOKSRNPMESOPMINCRMFOFQMNKSNEHVDULDRRWDCJVZJHYMSDFZCQLHGHPYBUIWXGWUBKCKBPMVKVNRRXVJZKNZEDNCHDIKXJAEAJTPIDAFNNEL");
    msg.act_time = 40566U;
    msg.deact_time = 38582U;

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
    msg.setTimeStamp(0.5357222996659621);
    msg.setSource(21792U);
    msg.setSourceEntity(238U);
    msg.setDestination(63527U);
    msg.setDestinationEntity(176U);
    msg.id = 193U;
    msg.label.assign("ZNSJTYFHIOVYLEIJEAMOFRAPOHWXJLNEENCHDGYXNOOEHGYRCBTJGCEGFAQRCWAQALCTKGGSSPRMCKUMKVWQHDTBZLGOAQEPLXVPOSTMJGGEJQKYCHCALOBQIZRPHIXXMXWPQIFQPXJVSVFCVWQYULA");
    msg.component.assign("UKZFLJTOSOJLNDILHQIIKANTUJOBXRJCAVFATENLWCZIPYGWMUFOACANFSQBUPKBDRTOAEVAVQUTNXVPCHGHUEDHQVEIFWMHMYJBIULGZMPYGSOTWNQLVGZUGMFFHR");
    msg.act_time = 50597U;
    msg.deact_time = 49552U;

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
    msg.setTimeStamp(0.09382264931687512);
    msg.setSource(26534U);
    msg.setSourceEntity(234U);
    msg.setDestination(52337U);
    msg.setDestinationEntity(41U);
    msg.id = 49U;

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
    msg.setTimeStamp(0.24255735717486504);
    msg.setSource(64017U);
    msg.setSourceEntity(144U);
    msg.setDestination(134U);
    msg.setDestinationEntity(137U);
    msg.id = 147U;

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
    msg.setTimeStamp(0.476845516476745);
    msg.setSource(20764U);
    msg.setSourceEntity(17U);
    msg.setDestination(3771U);
    msg.setDestinationEntity(217U);
    msg.id = 110U;

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
    msg.setTimeStamp(0.312166109443779);
    msg.setSource(770U);
    msg.setSourceEntity(188U);
    msg.setDestination(58451U);
    msg.setDestinationEntity(17U);
    msg.op = 135U;
    msg.list.assign("ALXQAJHVQOMXBCCWDVDFMFBNSYWQYWKCGYHXDBRCXDGYRYIPIAZJLCQPYUMTHKHFKNELIKXMCJVFEFABKGRZSBAASPWZINDLOEDQNQTWGYTASFVOYWHOUUUDKFGLVCVTNAWSEHZFSRKPEMRMNRC");

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
    msg.setTimeStamp(0.39775350780010477);
    msg.setSource(29467U);
    msg.setSourceEntity(89U);
    msg.setDestination(39397U);
    msg.setDestinationEntity(117U);
    msg.op = 161U;
    msg.list.assign("KFJZHQOAFYTYORNGROULAJIPOUYGHQXSYHUYZIXHKMESPIDOHEQCSNZVCIETWAMFMXDKVUTJSASWBLYTJWDTTTCZXZTXMNBKHNLNQFCJIGUKBRGVPDRCLIPKPWNVXVQWKWCASYGZIWYLLRDQABKFQFSPVYLNPPNOHGRBAVEMTFQOSOKFHJWERDCZAXIDWDZMGDUUUEREJJEXRTJZLECKSSOHAABNRMJGGCMENVLIBWVICBBYQO");

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
    msg.setTimeStamp(0.3838920375859276);
    msg.setSource(13056U);
    msg.setSourceEntity(99U);
    msg.setDestination(390U);
    msg.setDestinationEntity(248U);
    msg.op = 39U;
    msg.list.assign("LFZUKGEBNBZBZPULKMZKUKYZVERWPQDGANGFSWTMOFJZHAVSPKAOOWTZNVLIOQRDXPTBXJ");

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
    msg.setTimeStamp(0.5239250026911395);
    msg.setSource(6872U);
    msg.setSourceEntity(20U);
    msg.setDestination(45642U);
    msg.setDestinationEntity(205U);
    msg.value = 106U;

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
    msg.setTimeStamp(0.5146961546643032);
    msg.setSource(51738U);
    msg.setSourceEntity(160U);
    msg.setDestination(40193U);
    msg.setDestinationEntity(49U);
    msg.value = 17U;

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
    msg.setTimeStamp(0.49597399857700253);
    msg.setSource(17327U);
    msg.setSourceEntity(123U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(174U);
    msg.value = 232U;

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
    msg.setTimeStamp(0.3737946406890035);
    msg.setSource(46673U);
    msg.setSourceEntity(73U);
    msg.setDestination(36338U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("NAZDNJYXDGTFMCFXRLRWCEOHZGLRHWYVZJMGBUAWFJSEYSBSDQMLUOVUYFQTOHJJHKPWBURKPYTFCIYCCMNJBURUEGWGULLXXKJVWLPGMGDDZCIMEMIABPLMXKOSOHRGAYKVXJSRYWKNEDFAKTVNQBBFQYJSTPDILERVXHJSOQQY");
    msg.message_id = 33806U;

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
    msg.setTimeStamp(0.4345636672758568);
    msg.setSource(56777U);
    msg.setSourceEntity(161U);
    msg.setDestination(47650U);
    msg.setDestinationEntity(212U);
    msg.consumer.assign("GLNAKPWGMMFIUBRHWZGEFFFIKKVDUFASQXHZRORKCNLQDANWZYXMJPGZXAWSBOXYCILDLYLRIODCJTBFXMVINEOXLAAXBTJPRBUDTTFNVIPRRDNLECCINAUIRQKKNHTQHCEAKKZBQAVCMTREGOYTUYVBXBD");
    msg.message_id = 23291U;

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
    msg.setTimeStamp(0.23210492377222125);
    msg.setSource(65441U);
    msg.setSourceEntity(25U);
    msg.setDestination(43122U);
    msg.setDestinationEntity(50U);
    msg.consumer.assign("VOVJXPBIZFNHUCBZXZHJYRMIXQPPLTOMIYKZWDEMKLWLJTRMNSZYITPJOSIBHRLPHHIIFWDAFMTIHMCGISCPYEEFSVAGLRFEVQWKCKWDRFXYHORVEEUPMXDNJCTRNYZZSOBSRRCEEDUUXCACJDZADGQDJNLBLKVQUSGEAXQTYXGOAQTSMLKAKRBQKUUGLPVXWAWJKNEAOWITWJCHGHMMHZGBBUNQCTQGZUW");
    msg.message_id = 25321U;

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
    msg.setTimeStamp(0.1447161156788226);
    msg.setSource(64467U);
    msg.setSourceEntity(104U);
    msg.setDestination(37058U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.9372001850210855);
    msg.setSource(6934U);
    msg.setSourceEntity(87U);
    msg.setDestination(19928U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.5359639503723481);
    msg.setSource(61055U);
    msg.setSourceEntity(176U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.967085627235652);
    msg.setSource(23289U);
    msg.setSourceEntity(5U);
    msg.setDestination(33830U);
    msg.setDestinationEntity(95U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.37898280485548896);
    msg.setSource(57984U);
    msg.setSourceEntity(120U);
    msg.setDestination(63697U);
    msg.setDestinationEntity(12U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.14563487989203794);
    msg.setSource(59402U);
    msg.setSourceEntity(197U);
    msg.setDestination(15888U);
    msg.setDestinationEntity(45U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.15376674048845274);
    msg.setSource(64992U);
    msg.setSourceEntity(46U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 14U;
    msg.step_number = 61U;
    msg.step.assign("TJVTFTCXXZTYYSELRBDCMZQBECFCOUEGYKHLPPYSSNPRCEODZHOFJSNARSGTJOENXRMN");
    msg.flags = 136U;

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
    msg.setTimeStamp(0.3147656283663969);
    msg.setSource(63967U);
    msg.setSourceEntity(110U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(240U);
    msg.total_steps = 183U;
    msg.step_number = 138U;
    msg.step.assign("UBHPURNTDOQLRVEZBOSDGVWVLMICITBSEQBVSYQOWZMEDLAOZZUJCTMLLKKSHPOIUXXKKZFOISMR");
    msg.flags = 88U;

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
    msg.setTimeStamp(0.37486561784624695);
    msg.setSource(31125U);
    msg.setSourceEntity(188U);
    msg.setDestination(63450U);
    msg.setDestinationEntity(167U);
    msg.total_steps = 8U;
    msg.step_number = 12U;
    msg.step.assign("GYKSHMZUSAJUYOFRBDQXGBNLSVRWTDNNGYVZMDZMQPPVQLMAOTUSUOXBWNGOOKAPDQGCWFVWAUBYIMXXQHEXITRZCEYKSADZEPGCMCYCAERBVZEKJRJBNKJOTDTPFVWVKLFADGZKIHQVTWWFFEIIAHMSREDUKQHNFGXXVPWULTNMSHBXSCZLDIIPOJGIPJBI");
    msg.flags = 54U;

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
    msg.setTimeStamp(0.49804728377900576);
    msg.setSource(30202U);
    msg.setSourceEntity(87U);
    msg.setDestination(12842U);
    msg.setDestinationEntity(5U);
    msg.state = 175U;
    msg.error.assign("IYRJYOCLPKLDBSUBWQAHTTUNHSILYSUCXGJVBQVPHSRTSKKXICUWLE");

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
    msg.setTimeStamp(0.544163037981831);
    msg.setSource(59757U);
    msg.setSourceEntity(228U);
    msg.setDestination(40375U);
    msg.setDestinationEntity(237U);
    msg.state = 181U;
    msg.error.assign("SFOUCXXDYCFBOIPFYCNCYMNYHGKJRMFPTYYVDGTHKNPDORSJQAZZMDVJUWEFULXWRADPMWSVMDWAEHCXPYHYLIPHPOGFNLUVJLNBLETNDRKDXTOLCFGQTKSWCPBNKRZNUWGUUCAISHFIMBUAQZJEUHBGBKJTNEAXKCOJMQEQKFGWYCBBZVGDHQESSMQZSQKLOLQERJGZZLTIBYOVTBJZWFGTAWSRXAEIQPOTRWLDIRHPEXXRXMAINOU");

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
    msg.setTimeStamp(0.6963288525416503);
    msg.setSource(24503U);
    msg.setSourceEntity(191U);
    msg.setDestination(30293U);
    msg.setDestinationEntity(201U);
    msg.state = 114U;
    msg.error.assign("NFVGDIHCHDBXKHLPUQDZPUJXTLAEQYYQFOZLDORRPUJAHXDVKHEMEKCPCHTRRSSELPSMUWPRNWIJVMUUVQKYDVXKUQBFYDUETKIYBISOMPJSWARZMRSHWJQRBDTXKDCOFEYJCBZLMGIXZMIKVYIWAZPNKOJEGLS");

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
    msg.setTimeStamp(0.813104999720893);
    msg.setSource(58479U);
    msg.setSourceEntity(193U);
    msg.setDestination(41083U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.6582767926371759);
    msg.setSource(58953U);
    msg.setSourceEntity(167U);
    msg.setDestination(13306U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.7002949608434815);
    msg.setSource(44466U);
    msg.setSourceEntity(125U);
    msg.setDestination(35773U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.1142811026204088);
    msg.setSource(32145U);
    msg.setSourceEntity(162U);
    msg.setDestination(58412U);
    msg.setDestinationEntity(157U);
    msg.op = 90U;
    msg.speed_min = 0.4480249110103206;
    msg.speed_max = 0.34699018849091445;
    msg.long_accel = 0.9242308434631149;
    msg.alt_max_msl = 0.3854447639739662;
    msg.dive_fraction_max = 0.0009348601258200029;
    msg.climb_fraction_max = 0.4596316115921385;
    msg.bank_max = 0.7896635617285356;
    msg.p_max = 0.794926822647176;
    msg.pitch_min = 0.7009909011977802;
    msg.pitch_max = 0.9722956392279005;
    msg.q_max = 0.7590055854135259;
    msg.g_min = 0.014125274522511777;
    msg.g_max = 0.5476710207802328;
    msg.g_lat_max = 0.7729970996440034;
    msg.rpm_min = 0.17364776079617494;
    msg.rpm_max = 0.549076794673844;
    msg.rpm_rate_max = 0.4929993267138971;

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
    msg.setTimeStamp(0.1346615442499728);
    msg.setSource(26987U);
    msg.setSourceEntity(113U);
    msg.setDestination(18625U);
    msg.setDestinationEntity(97U);
    msg.op = 78U;
    msg.speed_min = 0.1046886924822743;
    msg.speed_max = 0.8830197830936523;
    msg.long_accel = 0.31135885994215506;
    msg.alt_max_msl = 0.4540824978078084;
    msg.dive_fraction_max = 0.786234928496489;
    msg.climb_fraction_max = 0.1603316922009892;
    msg.bank_max = 0.33822049731360204;
    msg.p_max = 0.3688595961033976;
    msg.pitch_min = 0.33742795767968514;
    msg.pitch_max = 0.3622062329107889;
    msg.q_max = 0.5271943646507833;
    msg.g_min = 0.6334552585037254;
    msg.g_max = 0.21299747970479843;
    msg.g_lat_max = 0.3810189484617885;
    msg.rpm_min = 0.9308070200187147;
    msg.rpm_max = 0.9940387735966819;
    msg.rpm_rate_max = 0.9815861723288605;

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
    msg.setTimeStamp(0.9975106018109956);
    msg.setSource(32200U);
    msg.setSourceEntity(212U);
    msg.setDestination(2703U);
    msg.setDestinationEntity(150U);
    msg.op = 243U;
    msg.speed_min = 0.8560878212851325;
    msg.speed_max = 0.38815001150449857;
    msg.long_accel = 0.9347454161591727;
    msg.alt_max_msl = 0.9211665135643566;
    msg.dive_fraction_max = 0.6005609667014606;
    msg.climb_fraction_max = 0.5763286390891432;
    msg.bank_max = 0.6657104385740265;
    msg.p_max = 0.13403134764643243;
    msg.pitch_min = 0.813103541738868;
    msg.pitch_max = 0.04929353549894877;
    msg.q_max = 0.6702896739723219;
    msg.g_min = 0.278150243350645;
    msg.g_max = 0.11378962561213457;
    msg.g_lat_max = 0.872709800877759;
    msg.rpm_min = 0.7933056424984808;
    msg.rpm_max = 0.8758284151434915;
    msg.rpm_rate_max = 0.3971585583042302;

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
    msg.setTimeStamp(0.08174135783840353);
    msg.setSource(12398U);
    msg.setSourceEntity(62U);
    msg.setDestination(50964U);
    msg.setDestinationEntity(254U);
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 173055733U;
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
    msg.setTimeStamp(0.47228941642153033);
    msg.setSource(41706U);
    msg.setSourceEntity(112U);
    msg.setDestination(12896U);
    msg.setDestinationEntity(5U);
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JCISRGDSTZCNOHHMTSZQISDXL");
    tmp_msg_0.value.assign("NOOBHYCRGHQQLGHXYYEFIMXUPLRSHEEUCWRXTPAFGKBWMHKSAOATCKRHQKQMFKSLQRIFTAIAGENUEUISJBRPEHDUVANKBBDMMUPDRSZOKXNXYBLIDOXXGTQYRBWDMDJPZWTMEYJVOWBFMIFZVNJULGVUGJHVVCVFQPCDABUNHKDOWQYGCPPWLXPBWFQGCVNRAMFTZNSPIHJTGLTWSNDLYIDSMZWIVJOCKQOTYNCAZRZJE");
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
    msg.setTimeStamp(0.17904017264524041);
    msg.setSource(25147U);
    msg.setSourceEntity(189U);
    msg.setDestination(32677U);
    msg.setDestinationEntity(224U);
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 325975475U;
    tmp_msg_0.id.assign("FHRMXLIPGYCRQHPLKUUEBZIOZPSPOHQ");
    tmp_msg_0.memento.assign("ZBLNMLSLIOJOAKOVUHVPUQFLWHAUCYBUWUYKGCKYFZIJKCLVENBIQGMQBSHFTZBZSJCTODMSSCKAQUAIJDPXBXNINTRQWREZFEVYGPBDDWLSRUWIFHESKKRJNFGMXURHHXFORAEGPBFKOONZTAYVIJZXJS");
    tmp_msg_0.timeout = 15180U;
    tmp_msg_0.flags = 216U;
    tmp_msg_0.lat = 0.2353942248017704;
    tmp_msg_0.lon = 0.27435435073345027;
    tmp_msg_0.start_z = 0.6042052028564657;
    tmp_msg_0.start_z_units = 47U;
    tmp_msg_0.end_z = 0.6055600794826606;
    tmp_msg_0.end_z_units = 247U;
    tmp_msg_0.radius = 0.32619546357841034;
    tmp_msg_0.speed = 0.06340781177239518;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.custom.assign("XMPHAVZUBAETXGOTIBLAQSKFPJJUJCCQCDCYABBWIQALXTTNAERYZQRMWNYCKLKQRVMSWRMDQFUWHPWMJEMNBNTDAWXSKZJQPOBDWZREGCRJIBOPTNDNSOSHPROYVLMJHYPYKFOEWAXUGZLJFIMTPTIHXKQIDFYDNQLBFZHIGNZXPVOHJSVLCUTISLXKFERUKGLPRKDSRXHHACZVQGSVFONBGKUYOGLUYSIAOTVBCYDMVEGE");
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
    msg.setTimeStamp(0.24808640636776635);
    msg.setSource(22757U);
    msg.setSourceEntity(134U);
    msg.setDestination(57951U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.273420911178625;
    msg.lon = 0.5479563389256685;
    msg.height = 0.9087407923870332;
    msg.x = 0.8247670854991334;
    msg.y = 0.16484085679254068;
    msg.z = 0.41228393857020296;
    msg.phi = 0.681857622295486;
    msg.theta = 0.6917267190538131;
    msg.psi = 0.6455945274328923;
    msg.u = 0.8081627877159819;
    msg.v = 0.9925081270696907;
    msg.w = 0.5084626471923044;
    msg.p = 0.20121988341079744;
    msg.q = 0.3718365870197369;
    msg.r = 0.2249639192576668;
    msg.svx = 0.4990899331426377;
    msg.svy = 0.7794732088912768;
    msg.svz = 0.4928749316996265;

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
    msg.setTimeStamp(0.9047160659527171);
    msg.setSource(38590U);
    msg.setSourceEntity(83U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.4057587789168027;
    msg.lon = 0.8949797375669588;
    msg.height = 0.6829853832699359;
    msg.x = 0.17689759460938137;
    msg.y = 0.3054238789438851;
    msg.z = 0.7268273607829384;
    msg.phi = 0.3903659737830807;
    msg.theta = 0.3782735522693641;
    msg.psi = 0.8326439990139656;
    msg.u = 0.06540578711851308;
    msg.v = 0.607767600042272;
    msg.w = 0.601157332290255;
    msg.p = 0.10588362485703173;
    msg.q = 0.8219935864249643;
    msg.r = 0.5550006664319462;
    msg.svx = 0.43775306147054827;
    msg.svy = 0.2510721624016058;
    msg.svz = 0.4472969572419544;

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
    msg.setTimeStamp(0.8897937224879514);
    msg.setSource(1431U);
    msg.setSourceEntity(177U);
    msg.setDestination(52878U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.5006742541820864;
    msg.lon = 0.24307832903635818;
    msg.height = 0.3623828713396463;
    msg.x = 0.0346352437174009;
    msg.y = 0.45451711138499484;
    msg.z = 0.587612042888955;
    msg.phi = 0.6323220111820034;
    msg.theta = 0.12418826564979202;
    msg.psi = 0.9704341532807085;
    msg.u = 0.031163614798699224;
    msg.v = 0.5464650747294456;
    msg.w = 0.8609157044133626;
    msg.p = 0.8382189791561825;
    msg.q = 0.2265547843330078;
    msg.r = 0.5918233136358511;
    msg.svx = 0.7356695793056953;
    msg.svy = 0.6563563554595322;
    msg.svz = 0.43092672769677376;

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
    msg.setTimeStamp(0.3442639311564363);
    msg.setSource(38557U);
    msg.setSourceEntity(198U);
    msg.setDestination(26875U);
    msg.setDestinationEntity(20U);
    msg.op = 182U;
    msg.entities.assign("SAYRQYYBDOQMBMBMEVEKZROQODXNUJJHOXXAGLZEBKKSFIHGDJUPATTCEHZTLPSKCFMHFKSS");

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
    msg.setTimeStamp(0.875063848361613);
    msg.setSource(27504U);
    msg.setSourceEntity(38U);
    msg.setDestination(38417U);
    msg.setDestinationEntity(47U);
    msg.op = 146U;
    msg.entities.assign("HRVGSMCDHZUIPYMTETILKPVRLLCCSAFHWDKZBPBMJWTZKNIOQVPBFOMNBURDMBNVXBTPVZCTKAXQRBHPFZAQKVJSOZLIZRFIOBSWGHUAXWKKNKIHMTNCQLXXDEZMRQEXCVOYAJCI");

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
    msg.setTimeStamp(0.6777605246024191);
    msg.setSource(12379U);
    msg.setSourceEntity(33U);
    msg.setDestination(2557U);
    msg.setDestinationEntity(235U);
    msg.op = 31U;
    msg.entities.assign("UBSDMASBYIDQGWMYKJBTXZWSGHRQOHCPIIWOKKETVPRVDGXLYCCRWGVEZUHRACONQEDLPGERQUZKEUOPQNZATHWSDVITPQMHMJNAIQDJYXHVLTWRXBUAVHEZWGTEKIVFCLFFLAYZTUKFASKRQOCKJORTJWCJEBXNWOPYPMLXJSKDGBMUILBZUDBEGZGFNWRAYFXNLVIHAYZJSCUFVC");

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
    msg.setTimeStamp(0.3351337078368878);
    msg.setSource(65499U);
    msg.setSourceEntity(204U);
    msg.setDestination(52625U);
    msg.setDestinationEntity(111U);
    msg.type = 166U;
    msg.speed = 35169U;
    const char tmp_msg_0[] = {14, -26, 120, 1, -61, 67, 4, -90, 57, -112, 75, 105, 118, 118, 84, -57, 61, -109, 52, 73, 91, -59, 29, -7, -118, 78, 115, -7, 66, 15, 14, 76, 93, 42, 37, 79, 8, 126, -1, -109, -126, 21, -76, 12, 60, 32, -29, -20, -114, -55, 72, -116, 95, 87, 25, 25, 19, 15, 90, 38, 106, 21, 15, -29, 64, 41, -95, 72, 37, -49, -87, -56, -117, 10, 71, -33, -87, -81, -26, -99, 117, -111, -107, 87, -57, -103, -82, -109, 62, -73, -40, -85, 49, 25, 20, -73, -105, -72, 46, -128, -104, -38, 39, 76, -14, 114, 96, -7, 82, -67, -35, 95, 91, 25, -1, -75, -28, -63, 84, -3, 71, -81, -77, 29, -25, 87, 45, -40, -40, 76, 82, -124, -100, 124, -10, 58, -87, -79, -119, -107, -6, -2, -63, 31, 56, -43, 87, -109, -27, -53, -94, 71, -12, 10, 1, 94, 88, -50, 75, -128, -115, -56, 119, -33, 99, 106, -2, 115, -48, -91, -110, 99, -98, 0, -105, -64, 46, -53, 50, 43, 85, -78, -95, 105, -100, -74, 58, -49};
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
    msg.setTimeStamp(0.8320732148020085);
    msg.setSource(51612U);
    msg.setSourceEntity(26U);
    msg.setDestination(44637U);
    msg.setDestinationEntity(213U);
    msg.type = 107U;
    msg.speed = 31746U;
    const char tmp_msg_0[] = {0, -84, 57, -69, 119, -44, -33, 99, -15, -3, -127, 91, -32, 122, -36, 33, -118, -45, -50, -3, -6, 116, 79, -63, 103, -60, -19, 30, 115, 14, -33, -5, 91, -48, -14, 55, 116, -97, 14};
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
    msg.setTimeStamp(0.9862115436529738);
    msg.setSource(10001U);
    msg.setSourceEntity(47U);
    msg.setDestination(34180U);
    msg.setDestinationEntity(203U);
    msg.type = 119U;
    msg.speed = 14138U;
    const char tmp_msg_0[] = {65, -52, -115, -108, 45, 79, 88, 54, 82, -103, 125, 50, 71, -40, 106, -34, -65, 81, -65, -49, 3, 49, 40, -114, -80, -66, 19, -85, 106, 40, 115, -45, -83, 53, 55, -56, -71, 114, 4, -25, -61, -90, 7, -57, 10, -14, 28, -39, -122, -97, -32, 12, -77, 102, 109, -18, -102, -81, -36, 125, 62, -2, 87, 31, -80, 42, 34, 53, -63, 87, 71, -126, -97, 34, 114, 15, 9, -82, 97, -46, 94, -29, -104, 40, 73, 83, -67, 36, -101, -41, 98, 4, -86, 88, 81, -111, 82, -59, 21, -105, -102, 123, 22, 52, -78, 101, 26, 96, 101, -1, 106, 94, 33, 42, -97, -127, -70, -108, 86, -128, 105, 52, -39, -18, 29, 77, -67, -63, 96, 107, -115, -79, -24, -32, -30, -95, 31, -39, -61, 56, -101, 111, 84, -58, 50, -14, -23, -66, 62, 45, 121, -82, 108, 118, 0, -12, -83, 70, 28, -83, 122, 42, 45, -114, 82, -7, -104, 14, 72, -30, 125, -127, 19, 97, -10, 110, -99};
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
    msg.setTimeStamp(0.9779211292103035);
    msg.setSource(57518U);
    msg.setSourceEntity(43U);
    msg.setDestination(46077U);
    msg.setDestinationEntity(211U);
    msg.op = 166U;
    msg.tas2acc_pgain = 0.8712234066661846;
    msg.bank2p_pgain = 0.0837858359635767;

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
    msg.setTimeStamp(0.5609034663907678);
    msg.setSource(49736U);
    msg.setSourceEntity(236U);
    msg.setDestination(33542U);
    msg.setDestinationEntity(53U);
    msg.op = 220U;
    msg.tas2acc_pgain = 0.4108367050267381;
    msg.bank2p_pgain = 0.46288307478976265;

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
    msg.setTimeStamp(0.6794423066503197);
    msg.setSource(56724U);
    msg.setSourceEntity(101U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(66U);
    msg.op = 197U;
    msg.tas2acc_pgain = 0.9996379442117038;
    msg.bank2p_pgain = 0.4201613853664544;

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
    msg.setTimeStamp(0.554855648883386);
    msg.setSource(42118U);
    msg.setSourceEntity(105U);
    msg.setDestination(24967U);
    msg.setDestinationEntity(219U);
    msg.available = 3068232005U;
    msg.value = 25U;

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
    msg.setTimeStamp(0.8605949899675116);
    msg.setSource(24752U);
    msg.setSourceEntity(8U);
    msg.setDestination(27746U);
    msg.setDestinationEntity(145U);
    msg.available = 1470455263U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.1793718084044561);
    msg.setSource(43399U);
    msg.setSourceEntity(76U);
    msg.setDestination(46887U);
    msg.setDestinationEntity(153U);
    msg.available = 420572102U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.8956602726711075);
    msg.setSource(17720U);
    msg.setSourceEntity(71U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(109U);
    msg.op = 15U;
    msg.snapshot.assign("ROJDUBZQWUCEZPMWBHBVAJVFAD");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 63056U;
    tmp_msg_0.value = 230U;
    tmp_msg_0.error.assign("QIWRQZFIYNTWANUQWCAZYJKLPKJAKHGVSTKQTDTVBGAEWTJOZYUZCKHEVEFTNRIODFLMBFOVQJJPEUQGRBFIEXBWKNXCNCZVSABNVSLKZHWQLCDEFAUPGPDOYOLMMQOHFDPUJBMICSNZLXNHSUZCTGYWGUSONRPHIWFRJRYDHBJNSXGUKGBHYCPZHIASAABWLHTGM");
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
    msg.setTimeStamp(0.7446064631660864);
    msg.setSource(24505U);
    msg.setSourceEntity(188U);
    msg.setDestination(60716U);
    msg.setDestinationEntity(242U);
    msg.op = 2U;
    msg.snapshot.assign("NKYOUQVNKIWSTMBSHARTAALXAVJOAXYNFJQVCJHSNSYCMFCITPBYDYWEXRZZRGTSLVDWOLLBAKPKDARSDNDFCNHCAPBOJCBXGMEORTMXZYSFOLZKCNLMTGDMVZBIPQQHJJWXTHEUSDFIEYGHIUPUCRHLPJEKIYOTZEWWIXJICXNSUGPF");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 142U;
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
    msg.setTimeStamp(0.157311556705786);
    msg.setSource(33533U);
    msg.setSourceEntity(112U);
    msg.setDestination(30169U);
    msg.setDestinationEntity(153U);
    msg.op = 111U;
    msg.snapshot.assign("OOKSWQFEAZHXEBIGCGTXGVVPNAYVBUCPIKVAXHBHIKIAYHWLRHIWZTTVSXLFWMCEIXNZDDJPFMROLCWFVSXLAJEFYUATVZLECLJOKAFJPOKDRFKBAPPRQGYXBERYNQIOWWJKSTXCDOPGMNZQSEJNPLUFZIXAMUESQTQNJUTAJDUMORKQCSGCJKNUSBTOYNGZSFHHRUPQEBPQDVZYZMWM");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 124U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1290950484596397;
    tmp_tmp_msg_0_0.speed_units = 102U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8807427110191584;
    tmp_tmp_msg_0_1.z_units = 253U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7025331120579744;
    tmp_msg_0.lon = 0.6891885875631305;
    tmp_msg_0.radius = 0.3567792717207622;
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
    msg.setTimeStamp(0.1772867023282585);
    msg.setSource(499U);
    msg.setSourceEntity(195U);
    msg.setDestination(23571U);
    msg.setDestinationEntity(253U);
    msg.op = 224U;
    msg.name.assign("UTVNGYIBMJEVRCEMDAIUOHDWPAIXATGFSJZJNQWHQUIRRFJIPZQPECFOCKZJTEBWJUPHHLZXDZYGUWSMODPBLFVCTLVERZQJLEJIDOMNFLZXRTVXDGOLGFTYKPIUATXBVGWZYNFWZXNUIBKYJHDYKNSISGNFKMBPPYCKMYP");

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
    msg.setTimeStamp(0.44717658400424176);
    msg.setSource(17495U);
    msg.setSourceEntity(241U);
    msg.setDestination(34767U);
    msg.setDestinationEntity(118U);
    msg.op = 8U;
    msg.name.assign("BSGHVAWFUDDSQYKIKGACSPBYEIWPZJYZLUBSHSDQRPOAKEGPLQVWHHCARLCGE");

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
    msg.setTimeStamp(0.6081408604575991);
    msg.setSource(4265U);
    msg.setSourceEntity(4U);
    msg.setDestination(55397U);
    msg.setDestinationEntity(247U);
    msg.op = 104U;
    msg.name.assign("RUDEBUXEGNPWSQEGACCMBCBWRIUUHVZYXFXGZATSFTMKFTUIEDXWRGUJLJWIBMBSOKWUCIFBFGJHAYRPXSPPDQFQXIMXNJJQQOTAVKDXABDQPIWPTFZKTDLZOARIHLGDDCCRBENMVKKLXPMXKLAJPYRHAFURQCSNWZHSEOYWTMSNYGCYOLQRHJZIYDKOUPWMQHVZUVLEGTNYOEHLSDKMNOIAYJJTWVHAFRHZVVYZKQIOJBSM");

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
    msg.setTimeStamp(0.5721123909480141);
    msg.setSource(46711U);
    msg.setSourceEntity(156U);
    msg.setDestination(17645U);
    msg.setDestinationEntity(122U);
    msg.type = 141U;
    msg.htime = 0.01178866219511554;
    msg.context.assign("QVODFTBACVPKPDMUXKERWEHBGSWBBWNQZYFUMENJMOGZPNRWEEEUBSLUJCYSXINZQGVLYIORERTOHAGUXCXMKACFQEIWJSXBGKOGNTSJVASIZLKFHNAWMIMNZTDHJBMRTTQSNFAKZQBAQRZAICTBRPXYNTWLCODXPUKVVYULZRINJTYRJCOZGVGOGYXPCLISEISWFHKYULVDWXMHYGPDUXQPOKDMZJQILHVAMKJQDDHHJFYULPCHEDWFBC");
    msg.text.assign("VDZBZNMPWZHITOCTYITRCURUKOUYSVYEBALKPVXRWGQUUALAXBQZIQEJXTNSLJFKWHVDJFAJFDCAVDMKBXXNYSNZCJUQOKPNUUMSTIGEZGOSYTCEPBPFQGTEGNWMWKDCTAUCIILKGJKHVXCQOFHHZI");

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
    msg.setTimeStamp(0.8489752241159056);
    msg.setSource(52583U);
    msg.setSourceEntity(159U);
    msg.setDestination(15276U);
    msg.setDestinationEntity(117U);
    msg.type = 37U;
    msg.htime = 0.094859357301045;
    msg.context.assign("ESQZQCQAHHHMPZMBWOHKKYIIMVKRMBXPOLVPAGKZSUDDGILQMZXMCEJTJBFKKROCHIDTKUNMIEKVFUCSZVWYXGWTSGEJQPGOEODZCVTIKFZOURLTSRBZILHVUQUWYJEDWNWPGWNLQLBAVSOXBLPLUXFDIMPCFYUGFBA");
    msg.text.assign("ODUACGOJCCEADRUZNLKPPEXQULMLWZCEDWGLZMMEUANMFQGFLTRKCZFRFXPZTSZATEAHJDYISYODQIADSKEIRNXENHPFHUOIXAVYMVKWVUFJEIGYHNSV");

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
    msg.setTimeStamp(0.6588716406168817);
    msg.setSource(20716U);
    msg.setSourceEntity(3U);
    msg.setDestination(46691U);
    msg.setDestinationEntity(232U);
    msg.type = 239U;
    msg.htime = 0.38341868556113756;
    msg.context.assign("IBJOXQXTEEEQYOIFLVWAQAHJNVZHOLAEGZYRUISWVCVAPAXOKGUXRNUMOIHNSZHEUGNMYVFUTUMFWDRMQVIRNUELPFSUIKZTMVHBBKYAHKZJDDLXWVLBCEGKSGZEHPPGKFSJFNTXGCDWNYQIMTQIRPDPLOFWBFHMBRWWRGSQCZDRETXIFZYBNLDYDOAITSDLHWOTHMSRXOFSYVPYLNMCCBCUXNKGEJJKCGJTBPTAQVQA");
    msg.text.assign("NFXAHSHUQSMBUYFGJOXKIFWNEAYYQUISMPIKGPLPRPZWCWFVLYCWQIJAOEBZXHZQIZPTGVYATNBSZKLYDZB");

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
    msg.setTimeStamp(0.9843715250972688);
    msg.setSource(35991U);
    msg.setSourceEntity(37U);
    msg.setDestination(16953U);
    msg.setDestinationEntity(205U);
    msg.command = 150U;
    msg.htime = 0.9379134299211235;

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
    msg.setTimeStamp(0.25746528689574033);
    msg.setSource(42266U);
    msg.setSourceEntity(197U);
    msg.setDestination(15314U);
    msg.setDestinationEntity(50U);
    msg.command = 26U;
    msg.htime = 0.6662690947537472;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 10U;
    tmp_msg_0.htime = 0.6887190946743804;
    tmp_msg_0.context.assign("DEGXKKWJTFJVOUEPRJSHJORTPXQLBYTXIOEXPRWEZBJMXBHA");
    tmp_msg_0.text.assign("TSIXQKMSBYHVAWAHOLZDQMKTRPYPDNDEOISKEGNSXMBVZCQZOURBVHNZAXJEXFIXNRJPUZUZLHSXEDCFFQZEENVPSPMRCATIWULNQDQNNRCJUHGJAHEICMXLLHYRVK");
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
    msg.setTimeStamp(0.1902013958090516);
    msg.setSource(18162U);
    msg.setSourceEntity(204U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(94U);
    msg.command = 65U;
    msg.htime = 0.3732409376004534;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 185U;
    tmp_msg_0.htime = 0.2268533401669598;
    tmp_msg_0.context.assign("PHDWFSCAGTEBZWBAINVHVPGXXWLFYMEZMMNSHWRWDRSZPYTTOQKZJIQJUTWCLRMDSKRSYOKOAJYEHEBQTBPHKCHUQKOVMOZPZRGIKIQTGXFXXINKNK");
    tmp_msg_0.text.assign("XPMICELFJBSELNPZYYFESEBXRDTMKEUQDYSQBNFHPUFXFZPKHEMFWSROTKMKJJQIDCAPLIRNKHZTOGAHEROVSUGHGLUYPDNPIMIFAMBDELBUQDHWOTHDILCSAYIQZXWRTRQCCXISJNGMCNRVNLTVGAVUQZANTHEJHCKWOIKKVGWYPKNOJMHZSFURGJWJZVYPWYEGLJOXKBWSZOZGYRAQXQIMVDWQPTGTCANLCLWTRUOCXYAVDBDJUO");
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
    msg.setTimeStamp(0.35411730213176074);
    msg.setSource(1006U);
    msg.setSourceEntity(177U);
    msg.setDestination(44951U);
    msg.setDestinationEntity(55U);
    msg.op = 213U;
    msg.file.assign("PMBKYDGSTIWTULIGPXYQIJABCQBSAZKZNRGWJJRELEUHEWWWTJNNFVAXWXQNFFFVJQVJIHSPLENPQKRDYOANZWCRCHRUIEFAAJDLASELBCOOKDOQKIFDLLPVIUYMMUKMCHBAVZDTFGTXXYXIJBMSZAXEZGMTFHBIHPLMFKCOVH");

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
    msg.setTimeStamp(0.11171523925191951);
    msg.setSource(9683U);
    msg.setSourceEntity(253U);
    msg.setDestination(53467U);
    msg.setDestinationEntity(33U);
    msg.op = 69U;
    msg.file.assign("WIYHEMENMAZAILUVZTIFPOKXBLXOEJAJCQDEOXSIRFCRRSLJFSWNLSMTIAPZMRHOXCFHYPWNBHHIZ");

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
    msg.setTimeStamp(0.4721128691872918);
    msg.setSource(11380U);
    msg.setSourceEntity(2U);
    msg.setDestination(30706U);
    msg.setDestinationEntity(173U);
    msg.op = 157U;
    msg.file.assign("QRGGJEKZKDIVWIDVBTYPXMMUSWYBKGPDLXBOELMYURBYRDXQSAMTGWCOYZAEYHIRAJXYUUYOFWKQFKLV");

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
    msg.setTimeStamp(0.8384141219491311);
    msg.setSource(3493U);
    msg.setSourceEntity(210U);
    msg.setDestination(7793U);
    msg.setDestinationEntity(81U);
    msg.op = 43U;
    msg.clock = 0.21422801084086462;
    msg.tz = 17;

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
    msg.setTimeStamp(0.36777064317977703);
    msg.setSource(39544U);
    msg.setSourceEntity(212U);
    msg.setDestination(21400U);
    msg.setDestinationEntity(53U);
    msg.op = 92U;
    msg.clock = 0.9979746745515826;
    msg.tz = 108;

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
    msg.setTimeStamp(0.7606059275744388);
    msg.setSource(57151U);
    msg.setSourceEntity(4U);
    msg.setDestination(24775U);
    msg.setDestinationEntity(199U);
    msg.op = 220U;
    msg.clock = 0.4578132090406568;
    msg.tz = 95;

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
    msg.setTimeStamp(0.9010100418325298);
    msg.setSource(25903U);
    msg.setSourceEntity(208U);
    msg.setDestination(43288U);
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
    msg.setTimeStamp(0.1757886768382324);
    msg.setSource(29656U);
    msg.setSourceEntity(118U);
    msg.setDestination(9077U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.3292039024617629);
    msg.setSource(29131U);
    msg.setSourceEntity(236U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.009641311223969273);
    msg.setSource(58388U);
    msg.setSourceEntity(250U);
    msg.setDestination(36940U);
    msg.setDestinationEntity(142U);
    msg.sys_name.assign("MPBDSMIXRDZESFFIICBZZYJZCNHOMTGKPHZGZFKURMXNWPKHDRMBVWCLXPRVDPCROQAUHNOFCXRSKQYPPXZALFQNDXOJVIGUFSRCDAHVACSIOHTONWOBXYHJYFWWHSJEOXNKZGVVNIFBFJYXJUAHGTPGQRTEURPVLOYAKBCDMTDKWVBQWMWNZGWLTLVQNEJTWJBEAEQBGJ");
    msg.sys_type = 213U;
    msg.owner = 20331U;
    msg.lat = 0.9382805579148881;
    msg.lon = 0.9947231103996709;
    msg.height = 0.9203815936958719;
    msg.services.assign("TLJJAIFTDJLQSOXPPQETDEZSLHQIPOQMCYAHOYXFELLCZDEBIEWGCNYGIPIABKOPOJTKVJPQCYHVSKJFNLHUXFXYUKZDMHRKDHZFSWMBNKUWRTXZGMXAVNJNMOSNDJNARBPNOVUXBXGRRFMVZQBZIICWSHRPDMRMGIKIDFFYEKV");

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
    msg.setTimeStamp(0.2640626920720611);
    msg.setSource(43110U);
    msg.setSourceEntity(209U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(141U);
    msg.sys_name.assign("NFJAWKIMZWMXDPFXOSDYPPIHPICHBIRGGUYEKLNIEFDDGUMTMLTWUBLGSKPJOVFQEJZAMCBAYGTKZWJWSKOFRVBJTINTIIQCDEASPKURAUBQQVTKZQXMHENZTAMXEXEXPTLSCDUAQHJESLYXZCSFOVOWCNBIRLSYAYBETKGCGEHRPHUYGVFFVNVOWDAQFWPOZUQCRZBQLBY");
    msg.sys_type = 185U;
    msg.owner = 13056U;
    msg.lat = 0.30167677761617107;
    msg.lon = 0.9910660825826085;
    msg.height = 0.5847811746368806;
    msg.services.assign("KIQJJGXFKKXKIUVDHUHSVRODCZCESFBSOJUFGIYHSXOTAHRYDMXIC");

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
    msg.setTimeStamp(0.12031217634142899);
    msg.setSource(6965U);
    msg.setSourceEntity(15U);
    msg.setDestination(53330U);
    msg.setDestinationEntity(57U);
    msg.sys_name.assign("LREKAJTFGWVRSAYUPZTPDZTONAUBQFTLQWIWXOZDPPYYKVBUNPMKTDSPZKISVJKEGFKSOYMNYGZBVBFBPQWZHAQJICFMPXLVULVIOMBHXSBZLHUYAOFNMRPOLOCHUCHNLGFHVOJWRSSWWJCPGDKGNXZDJGAFABEAKERXDCYDKTDLBILXMWNZQAIJQCJFRBRGJTYNIDQTQTNURMMSIUFEERXEDIEGXKALS");
    msg.sys_type = 28U;
    msg.owner = 16658U;
    msg.lat = 0.8495380158894809;
    msg.lon = 0.15122580874939118;
    msg.height = 0.5490348787657109;
    msg.services.assign("CTQURABJKVGJOPIXUCEYGBMHZNMQQAOMFMKRRDRUPQYVKXQXRMBLAJCXSFLTLFIXTQNWIKVDZZHKSXAYM");

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
    msg.setTimeStamp(0.3270587139432105);
    msg.setSource(45067U);
    msg.setSourceEntity(74U);
    msg.setDestination(39563U);
    msg.setDestinationEntity(215U);
    msg.service.assign("JYFLTZNUVISGQYUGHATPICKCAI");
    msg.service_type = 72U;

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
    msg.setTimeStamp(0.6502834076051264);
    msg.setSource(56713U);
    msg.setSourceEntity(242U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(206U);
    msg.service.assign("XNNFORMLHWXHNDKBAGLJAXICISQDORNLTVOE");
    msg.service_type = 229U;

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
    msg.setTimeStamp(0.9804093557337782);
    msg.setSource(57302U);
    msg.setSourceEntity(252U);
    msg.setDestination(48105U);
    msg.setDestinationEntity(209U);
    msg.service.assign("DUPTDBMFSQMONNHXTSMLRYCXSKCZGTTGZOYEXPPKGBXSDSXW");
    msg.service_type = 127U;

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
    msg.setTimeStamp(0.6533779986951599);
    msg.setSource(20445U);
    msg.setSourceEntity(210U);
    msg.setDestination(1362U);
    msg.setDestinationEntity(45U);
    msg.value = 0.9148108854352396;

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
    msg.setTimeStamp(0.0002649506294004622);
    msg.setSource(1858U);
    msg.setSourceEntity(186U);
    msg.setDestination(2842U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8126951508921362;

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
    msg.setTimeStamp(0.3592539978834818);
    msg.setSource(55603U);
    msg.setSourceEntity(221U);
    msg.setDestination(61637U);
    msg.setDestinationEntity(14U);
    msg.value = 0.14060510795824255;

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
    msg.setTimeStamp(0.9211692789074235);
    msg.setSource(32367U);
    msg.setSourceEntity(226U);
    msg.setDestination(49836U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7603360533340482;

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
    msg.setTimeStamp(0.910604143609413);
    msg.setSource(30361U);
    msg.setSourceEntity(48U);
    msg.setDestination(55786U);
    msg.setDestinationEntity(18U);
    msg.value = 0.24567072070822915;

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
    msg.setTimeStamp(0.6260337452443165);
    msg.setSource(7213U);
    msg.setSourceEntity(19U);
    msg.setDestination(33442U);
    msg.setDestinationEntity(131U);
    msg.value = 0.46936364706889055;

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
    msg.setTimeStamp(0.947830029694572);
    msg.setSource(15499U);
    msg.setSourceEntity(6U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6505449230776718;

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
    msg.setTimeStamp(0.38631838234642446);
    msg.setSource(57104U);
    msg.setSourceEntity(115U);
    msg.setDestination(27659U);
    msg.setDestinationEntity(165U);
    msg.value = 0.08636438274706304;

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
    msg.setTimeStamp(0.13877280384017254);
    msg.setSource(4375U);
    msg.setSourceEntity(43U);
    msg.setDestination(17723U);
    msg.setDestinationEntity(0U);
    msg.value = 0.13240316084149473;

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
    msg.setTimeStamp(0.10204887518101946);
    msg.setSource(6247U);
    msg.setSourceEntity(208U);
    msg.setDestination(6181U);
    msg.setDestinationEntity(142U);
    msg.number.assign("NQGPVVCVGFCEURPVCJDMTTIEBBQTZIVGUIACLZEENVBJDTGKEAFRCMAKHSTUOQOSWMOAUFAGIFPKWOLOXQILXQDQOXDTBNCIDHSGFRLCIMURDAVNXPRRSWQXSBGACUYDPOSCIYIHJPZWFDPHLPREUVMTOKYRZZWYNHKRBSHKYGMBMKF");
    msg.timeout = 26224U;
    msg.contents.assign("BJOYDSROTRAHIPWXCOMILKKDYDSCUVUSHYFXMZMIBUEGEDHQOYQDPUGVPFCXZHKANAHPIQNKCWEIPFLGTRBNDPMPBQ");

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
    msg.setTimeStamp(0.25349072960202856);
    msg.setSource(47004U);
    msg.setSourceEntity(234U);
    msg.setDestination(16548U);
    msg.setDestinationEntity(126U);
    msg.number.assign("JDLTYKRKITPXXPYKXZZLIUPMWHHRGSYLYMDQAKSVFDLTPGTXSMJGTETRQRZJDVAAISHKROHUZGLTFYVKGMPNDTCPIYNJGKWEBNUSVCELBBEUUHRYRYSKDNFWOWUBNZXVAWJBJXLWZBAFTGVIUDXGFMCIICMU");
    msg.timeout = 2975U;
    msg.contents.assign("GAZHWTPDZQUPZZFUTHTDEXTNHXKGKPOROWGQXGPJVILKHRMBTPPVKSASNUGIDWNQMQTGLEIDBKFDMCMJAFAZQAOHJLKRLWOVSMLZBALNQIYFSRVJNEEAHQXYRKZCKLINFXUWRVESVD");

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
    msg.setTimeStamp(0.4483432658367058);
    msg.setSource(47668U);
    msg.setSourceEntity(104U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(57U);
    msg.number.assign("LMZZRCMNWRQDKFAGXVNTQZRZZTHVXZHSHANOLVJXNDCWIGHUFDRFBBMRPJMMBYMRFUCZTEQKKUCBOKFSPOQJLLRQABCYIBPWJTYWTXPBTPQATYDVLUXKPOPZSLCNBLOMJMAIWQCHJWPSGUHIYDEQTYVMFGIXYGLUEXX");
    msg.timeout = 27365U;
    msg.contents.assign("DOSZWXACMPCGWXKQLJRHFOGBCUWCZMMUZBLCPAJSQSUILQPMIKIXLQEERDTDHYTWBYYUELQAPAE");

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
    msg.setTimeStamp(0.9833208737886079);
    msg.setSource(57785U);
    msg.setSourceEntity(234U);
    msg.setDestination(44458U);
    msg.setDestinationEntity(123U);
    msg.seq = 2847704478U;
    msg.destination.assign("FRSJDXBDCGEIUYPEKSNKBVMKXQL");
    msg.timeout = 20965U;
    const char tmp_msg_0[] = {-99, -42, -61, 48, 53, -97, 30, 110, 109, 108, -74, -74, -121, 25, 22};
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
    msg.setTimeStamp(0.5141124439202494);
    msg.setSource(47764U);
    msg.setSourceEntity(77U);
    msg.setDestination(32569U);
    msg.setDestinationEntity(123U);
    msg.seq = 1750654919U;
    msg.destination.assign("GYBMHFZDLLIWJAPVVAPGYYTDLWRCKVZJKCVFQSAFJKKZPRC");
    msg.timeout = 20205U;
    const char tmp_msg_0[] = {-58, 11, -55, 12, -114, 69, 73, 76, 119, -122, -116, -53, -64, -24, -67, 54, -109, 49, -48, 106, 70, 96, 77, -24, -94, -43, 39, 110, -22, -116, -68, -47, 96, 59, 119, 92, 2, 47, 35, -40, 48, -67, 103, -95, 57, 77, 8, 23, -77, 107, 6, -92, 112, -71, -78, -123, -15, -100, -6, -31, -50, -58, -38, -104, 58, -40, 47, 109, 32, 44, -83, -66, 16, 121, 23, -117, 30, -85, 85, -94, -92, -80, 114, 2, -108, 53, -20, -116, -38, -113, -22, -79, -99, 3, -46, -64, -88, 74, 81, -15, -10, 5, 84, 89, -17, -68, -119, -26, -91, 36, 113, -91, -32, 72, -26, 111, 79, -84, -113, 111, 75, 29, 74, 6, -127, -90, 4, -122, -96, -58, -24, -120, -45, 109, 111, -111, -77, -57, 27, 85, 96, 71, 20, 77, 15, 26, -9, 81, -31, -123, 115, 85, -39, 69, -57, 99, -8, -59, 25, 121, 17, -12, -94, -11, -118, 1, -36, 53, -97, 90, -66, -98, -124, 116, 83, -25, 117, -24, -27, 105, 49, -31, -55, 0, 36, -125, 77, 33, 10, 109};
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
    msg.setTimeStamp(0.9606840844940938);
    msg.setSource(49175U);
    msg.setSourceEntity(0U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(187U);
    msg.seq = 2926132883U;
    msg.destination.assign("IZFBDDNDCHWXGPVAFUUJRLUIRDHKBPHYNKIAOYPSIESFNMEJHXRDRWTXLBWMETANPIYSIQXMIZNMBQQDUIFXWGWMVOSYKPTOJUSKDJMTZGUKAPCQKYLKEQUGFLYCLKCJXHAZBRBHXFQOMBNNJYCLZSYEEJDJEPAKTHVCMEZLWBSUXZHOSTLQPVZOVDKCAMWPQTRVCBNMGGEVGPASHR");
    msg.timeout = 38237U;
    const char tmp_msg_0[] = {-43, -98, 92, 75, -25, 120, 69, -120, 77, -26, 78, 74, 16, 43, -3, -2, -30, 87, 101, -104, 117, -68, -69, 61, 45, -122, -36, -15, -73, 40, 16, -9, 124, 7, -99, 56, 45, 49, 102, -71, 86, -25, -127, 99, 106, 21, -88, -27, 9, 98, -61, -6, 58, 56, -85, 57, 73, -40, 118, 91, 111, 120, 109, -2, 61, -100, -12, 95, 23, 103, -36, -122, 79, 72, -98, 47, -95, -111, 90, -52, 95, -55, 91, -6, -71, -111, 46, -111, 43, 58, -96, -2, 92, 10, -40, -17, -86, 33, -46, 9, -10, 42, 39, 22, -99, 22, -3, -28, -50, 91, 118, -19, 94, 88, 46, -51, 117, 123, 79, -15, -97, 19, -13, -42, -32, -40, -64, 42, 108, 66, 80, 122, -63, 58, 42, 47, 20, 42, 77, 93, -40, -37, -35, 109, -10, -109, 101, 39, 110, 68, -75, -81, -83, 104, -40, -27, 79, 58, -84, -124, 65, 49, 40, -87, -37, 95, 19, 43, 21, 99, 69, 81, -76, 10, 11, 64, -114, -67, -17, -32, -102, -43, 121, -13, 80, -4, 24, -111, 3, -17, -126, -14, -14, 118, 38, 25, 38, 47, -91, -43, -7};
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
    msg.setTimeStamp(0.8187838153630547);
    msg.setSource(2292U);
    msg.setSourceEntity(250U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(100U);
    msg.source.assign("FQNUCMGOLAXAAJBQKCXXKRBJNENVPAOOZEPTHLEFJETNRHATYPTARANTDNTGUW");
    const char tmp_msg_0[] = {-51, 98, -82, -40, 90, -6, 0, -86, -67, -45, 71, -104, -118, 66, 53, 24, -5, 59, 47, -106, -114, -53, 22, -79, -6, -22, -30, -56, 112, -30, -47, -113, 5, -40, -4, 77, -11, 43, -123, -107, 38, 74, -82, 118, -41, -78, 41, 120, 119, 51, 5, 93, 118, -90, -81, -66, 87, -122, -102, -61, 72, 105, 69, -115, -64, -1, 63, 37, 107, 57, 53, 50, -87, 122, 115, -44, -92, 10, 13, -63, 16, 62, -5, 52, -102, -114, 105, 57, 0, -107, -20, -3, 24, -27, -40, -101, 82, -41, -77, 77, 43, -5, -108, -5, -91, -101, -40, 12, -73, 82, -11, 106, 119, -29, -59, -73, -14, -44, 118, -117, 22, 124, -46, 115, 9, 89, -78, -105, 70, 59, -38, 70, 49, 3, 103, -117, 41, 16, 48, 35, -85, -81, 107, -20, -44, 86, -31, -111, 98, 87, -85, 34, 33, -102, 118, 113, 121, -73, -99, 126, 89, 41, 47, -109, 70, 37, -41};
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
    msg.setTimeStamp(0.760685178957427);
    msg.setSource(8531U);
    msg.setSourceEntity(82U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(241U);
    msg.source.assign("HOGSQZXXDFKCCTQRTSZZYLUAABXWDICBOHKBXWAOEIKPAKDGSJWUUZRHMMDIFNSHBEBWLEEWCDODYQDZHNOIEBJMEUMPKVWCTNGKIZFCGTPDVFAQFRGXMZWFSDJVLONHUNQOUOJVLHLSPQNCNIPMCJVUGTQWQAUNLYBKNZVJGIXAYKTDFPLZMERWEXOVSFHLTTJ");
    const char tmp_msg_0[] = {-4, -103, 79, -59, 26, 2, 7, -87, 5, -50, -21, 72, 126, 19, 70, -11, -112, -97, -112, -103, -13, -27, 14, -46, 40, 79, 5, -113, 102, -121, 50, 77, -109, 112, 87, 28, 70, 67, 74, -98, -37, 109, 15, 48, 76, 8, 117, -29, 118, 59, -83, -96, 123, 32, -76, -71, -91, -128, 11, 1, -107, 65, -41, 49, -111, 5, 93, 30, 36, -41, 68, 84, 37, 19, 40, -33, -107, -31, -78, -64, -99, 96, -14, 67, -119, 18, -87, -66, -20, 36, -115, 112, -25, -98, -111, 93, 116, 33, 106, -118, -26, 21, -85, 109, -37, -35, 59, 78, 114, 94, -118, -113, 9, 80, 78, 96};
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
    msg.setTimeStamp(0.310126395146332);
    msg.setSource(65308U);
    msg.setSourceEntity(123U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(118U);
    msg.source.assign("JMSPOXBCMXNDDVPWIKOUCURWBSHQNQVZISKLOOWFXBVWBBFYVOAXZHTIRUOLEFCXVWMBCJHYJRHQICEREGJUYTRHGAWULLQIPQQTNDPREANHNOKGITFPZHZVGFAKCIUEPRJKDMWYDSZYVUVZQEEAHUUMXTFSPUERAYBGINWHJSDNMKKDXLGCFPBJXJSJLQNTJLTFHFPYDTBGRFPCYICWBYCGZXGOSEMAZDDMMVOVZS");
    const char tmp_msg_0[] = {-83, -122, -14, -97, 118, -70, -116, 121, 91, 87, 7, 59, 86, 103, -78, -105, 11, -1, -10, 28, -44, -103, -95, -70, -7, 51, -102, -119, -74, -43, 87, -41, 45, -30, 8, 6, -59, 82, -92, 117, -27, -14, -51, -74, -75, 37, -57, -7, 63, 30, 0, -71, -75, -17, -55, 34, 113, -115, 43, -44, 56, 8, -127, 70, -17, 124, 84, 30, -81, 30, 123, 13, -16, -69, -34, 59, 51, -27, -12, -118, 29, -80, -79, 104, 85, -5, 37, -22, 20, -100, 27, -112, 123, -87, 123, -22, -92, -125, 91, 68, 99, -40, -100, 118, 105, 74, -85, 43, -58, 125, -43, -104, -37, 48, 18, 42, 88, -101, -123, -87, 30, 15, 104, 61, -62, 41, 86, 39, 8, -64, -19, -111, -28, -1, 107, -121, -119, 36, -36, -21, 34, -45, -28, -106, -116, -96, -37, -26, -84, -6, 41, -60, -16, 114, 98, 98, -69, 41, 71, -5, 3, 119};
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
    msg.setTimeStamp(0.38171346405875495);
    msg.setSource(25599U);
    msg.setSourceEntity(79U);
    msg.setDestination(17953U);
    msg.setDestinationEntity(92U);
    msg.seq = 1034643059U;
    msg.state = 201U;
    msg.error.assign("QXVCWQOIZMJSFHSFBXDGZRSDSFNKSEVFFBBXPFKULNADITMNQOUWBICZFGEZHDSTOCTQVECLVQXJYPXWAUYEFYILQYCZRRQPAHOUHIXBPWJPZVTPJNYHULIFBAVKMQPAKTVVSAYKEKGSSMGHTHEOWNRJAKRDIZXQRBYDYOGOUGMKMONAXYCHNSMJYVWVQLATPDUZENOLLMLJBWLBOIIRMP");

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
    msg.setTimeStamp(0.7707580094405927);
    msg.setSource(33582U);
    msg.setSourceEntity(87U);
    msg.setDestination(25242U);
    msg.setDestinationEntity(149U);
    msg.seq = 2578820344U;
    msg.state = 101U;
    msg.error.assign("MSMFWHYUIIIQZSTQYEIAQJZRNCFUUGSSOBXJRBNEPDLQAPYTGNCCVWNEHSDWATHXLLJXMDNWRYXKTMGNSBPHHBGVZCMSCKFAUJPEOVJPOKBWRGDFDRSWVLNKHXTPSTYXZKWRLKCURPHQZIEIXYRHMVGDQIUWYEOTAMGAJECIOBHFUJVFTVBGILFUOMTSEOFCFWDGECAJXXRBRVZHMOADUDBLYZZKQLKQNL");

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
    msg.setTimeStamp(0.2504962696205295);
    msg.setSource(31129U);
    msg.setSourceEntity(106U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(86U);
    msg.seq = 528273386U;
    msg.state = 126U;
    msg.error.assign("IXIOPFVUMZXNLIREUWUGZOSDTOMGBTQHSYWZESFNTVNKICHVNSZVSDIAVRFMFLKXLYARZCEDXEBCLVFRRQTVSWYMYLMPXESUQHWFESDRCAGQBCTPPZGPGJBTAOMGUVMKTEYQDXYXVQEHBBLPJJUHMFJPOLGFXDZGTYNWYD");

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
    msg.setTimeStamp(0.3309954717231214);
    msg.setSource(1397U);
    msg.setSourceEntity(218U);
    msg.setDestination(41581U);
    msg.setDestinationEntity(236U);
    msg.origin.assign("PSVPIBRYJKZAECYDSLBGDZXPILDNCZHRHSVQLEOKLGOOIREOFGTINOPEGPDSZHKFQLUZWZBMMHQTTVQAJPNJVGCOYURAVDGRZCFXWMILJEALAEKDIVZRSICMFYROTIYMPANQEWFFQWEUJCUSYGSBFUTXILAMBLDWQHXHYKJOVTAWXBJWHUZPDXJVNUUTGTYMPXQVNXSOQUSGHYW");
    msg.text.assign("WXDVAJIWPHYJNFGIZIPFTOFICUQEDBDNJCXLVJESLDPVECYMDKQKVVTDZFKUQOIRPAPGCXZEHAIHFEOWKQZYHLXLKNWTRTYSGPXHHELGBJKHGAIQRLHNKRGXSTRSEYMBACYUUULJAJMINKBSUZUPAQDZNJZDXMFUWJGSERTSYVBNMTCTGBPOMXPQWUOLRVBWEAFDANNWA");

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
    msg.setTimeStamp(0.5974233240339409);
    msg.setSource(48981U);
    msg.setSourceEntity(162U);
    msg.setDestination(27151U);
    msg.setDestinationEntity(172U);
    msg.origin.assign("IFKFXRBTOTMUZZLHDVQGJFKRZQFOSPKSDHEJLXYAWHVYXKDIFEHBUSZRI");
    msg.text.assign("BEPGIIBYDHWNGTLDPPIYZOLZSAUXMMRJYMAFIDZMQHKKHZIZVVPCMUYXCTOHWAONFXUXBTPCJNOVYHEESZDBQWGXLFQDYEOITTCSAJELCJWOWRQKBXDSWICLFQDOS");

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
    msg.setTimeStamp(0.596627696662122);
    msg.setSource(31193U);
    msg.setSourceEntity(90U);
    msg.setDestination(13883U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("SNZTQEEECBCGHCFVRVEXIGYKIMTZUMIVRSWTBKIVQQBDZVXLXSEOSLJOPWRKPQURJKWIIYHNJXQBFUHNOODOKNWOBBNGRVVFCDMCWDQYWLQEMDLUUTANOIPISESVYTAENYUXFPRMCUJHRXBLGAAAHGKYPJWPFMJCAOVJQSFZRXXCWPEZZTLMRMSLYAGTVDEDJQYHGIDMCHWTFJZNRDAUHUWLZONZQTGBFFPXSAKIMYZ");
    msg.text.assign("VJCIGYXQIKEURDOSPXEWAUPBXXCGJFIPSQBTIAQEEJIMPMEACMHPBFMMNYULFJCSFUPIDRZQZVXGFJXHPLEWXOBXMNNKJQTNZTZTLNLWKQRKUKJVOUMGTGABRZKOYHQJAEMDWINHUFDCTQCHHGYAFEHOBCXBYYQNRTDOYTKCJMGLDE");

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
    msg.setTimeStamp(0.42756749079923007);
    msg.setSource(2441U);
    msg.setSourceEntity(56U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(235U);
    msg.origin.assign("RIERJSBDQWCBQIFDDZDEHTBJWKELRTWYQZZKLXQYXHMGLYTZSGYCVKLUXVEBREVCGHGUIUYOCWQLVYOWMCPTVRMATDKDPQFUJSNGHFAWKPLBUWCVYJMBNOCRZAWEATMBZMIHMORFNBVCWRSPAHALNKXQBZUJSPHRYUBPFFEFEYJZJNMPOKDTMNFUDJGOYQDOSONRQTPIUEUXHSKEKIVCVCGAHO");
    msg.htime = 0.061464408872917486;
    msg.lat = 0.898449209635289;
    msg.lon = 0.4366794150020369;
    const char tmp_msg_0[] = {-98, -123, 18, 103, -50, -108, 98, -91, 39, 23, -102, -126, -86, -10, -52, -33, 102, 22, 31, -109, 93, 95, -5, 47, -31, -91, -75, -26, 125, -31, -126, -4, -11, 16, -84, 109, 69, -69, 117, 22, -126, 67, 48, -79, -34, -17, 110, 27, 0, 82, 75, -26, -34, 93, -34, -128, 86, 122, -41, 119, -100, -35, 39, 38, -120, -44, 113, -69, -71, -71, 5, -58, -59, 120};
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
    msg.setTimeStamp(0.8960596956184487);
    msg.setSource(6933U);
    msg.setSourceEntity(34U);
    msg.setDestination(6496U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("XXSOQFJBHZEZFCEJRBDUQBFIIGSTEJHRGPKDHOPDPDKMHENTFETNTMRTCMPEWVHKGPSJCDBQQFTLFSQRDLMFALYLNJHXCGZWAUYMUYVQGCUZXLNILVOVKSTVOARISUALNBFYJXGJYLIUHDRGNVNZZPUYMROGBVYTIMTYWXGSBQACDCWWFWZMNEIZBOOMATRVKOXDKS");
    msg.htime = 0.9635117030787997;
    msg.lat = 0.08521710524088433;
    msg.lon = 0.8512832148030609;
    const char tmp_msg_0[] = {43, 77, -108, 79, -98, 20, 72, -67, 81, -66, 16, -79, -73, 23, -16, 108, 2, 31, -77, 107, 94, -106, 105, -76, -19, 11, -73, 56, -33, -26, 60, -71, 117, 60, -33, -51, 107, -72, -75, -53, -57, -40, -96, -16, 0, -90, 9, 12, -19, 114, -65, -40, 80, 40, 21, -42, -45, -110, 81, 24, 125, -32, -32, 21};
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
    msg.setTimeStamp(0.5606936755672631);
    msg.setSource(11813U);
    msg.setSourceEntity(48U);
    msg.setDestination(11865U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("SNYQMODUBQPVIZKXIKYRRJWMEWPWEBQLJVIRCHRUASBRTKFABDMWCNLVFCLWUJHMNRHPIPFAFSFGIBKCQTTWNBZSCMVOHYIQUVPYZOQNZKYXVDUBAPCLLPGEHMSJRPLISGEJGACOODTCNEHLXJKUGTUZGHRLPKEZROYWMDFKBIUXFTEJYHGGZATTVNMDTXOWSGXBOEDUEQCIAAMKWYVYGFRFATYHJ");
    msg.htime = 0.05312422967605679;
    msg.lat = 0.9003367658613404;
    msg.lon = 0.4343556871087745;
    const char tmp_msg_0[] = {-19, 62, -81, -20, -54, 69, 34, -86, 81, -88, -23, -77, -76, -8, -27, 74, 27, -10, 22, 37, -45, 64, -35, 70, 4, -19, 116, 108, 1, -18, 114, 62, -68, 62, -15, 101, -102, -46, -79, 15, 51, -61, 85, -38, -102, 90, 29, 107, 25, -117, 50, -43, 5, -86, 10, -122, -41, -12, -76, 65, -64, -32, -121, 113, -12, -19, -19, -117, -90, -40, -90, -105, 66, 92, 67, -85, -72, 17, -123, 41, -21, 25, -123, -116, 84, -119, -1, -103, -97, 115, -21, 99, 47, 72, -27, 115, -107, 113, -118, -36, -118, 0, -113, 90, 48, 117, 113, 112, -96, 67, 97, 2, -82, 78, 76, 113, -38, 1, -1, -125, -103, 19, 88, -87, 85, -18, 24, -103, 107, -126, -106, -31, 92, -78, 29, 118, -54, -34, 78, 59, -54, -112, 29, 121, 107, 18, -91, -46, -5, 125, -104, -100, -22, 9, 98, 54, 96, -83, -70, 79, 15, 49, -10, -115, -37, -82, 34, -3, 85, 45, 91, -10, 82, 107, -9, -66, 32, 98, -4, 126, 43, -35, -61, -100, -19, 82, 114, -63, -38, 126, -20, -128, -58, -58, -11, -127, 101, -65, 27, -49, -41, 59, 42, -69, -37, -45, -75, 27, -58, 38, 109, 19, -6, -91, -89, -122, -24, -4, 72, 5, -64, 20, -40, 105, 121, -62, 58, 23, 114, 71, -32, -7, -49, 112, -78, -15, 65, -36, 71, 68, 43, 66, 98, 20, 115, -69, 28, -100, 106, 72, -5, -80};
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
    msg.setTimeStamp(0.9561844765611184);
    msg.setSource(35054U);
    msg.setSourceEntity(37U);
    msg.setDestination(20275U);
    msg.setDestinationEntity(198U);
    msg.req_id = 1793U;
    msg.ttl = 23847U;
    msg.destination.assign("IRTRBKDQFZLEHQTISUYYYYNOFLDABNB");
    const char tmp_msg_0[] = {-66, 2, -115, 99, -61, -49, 108, 15, -84, 109, -6, 7, -65, 32, -92, 92, -36, 24, 16, 36, 18, 36, -77, 60, -96, -25, 67, -29, -61, -37, 87, -43, 17, 107, 65, 71, -82, -12, 8, -70, 124, -2, -117, 73, -53, 114, 71, 94, -124, 124, 103, -11, 80, 74, 31, -41, 92, -44, -14, 108, -32, 85, -20, -96, 115, -79, -2, 79, 22, 21, 74, -51, -99, 115, 9, 89, -109, -74, 5, 108, 69, 51, -27, -3, -35, -7, -44, 68, -13, 39, 76, 81, -52, 110, 44, -49, 14, -125, -25, -17, 102, 31, -44, 107, -29, -127, 65, -39, 48, 40, -4, 46, -41, -22, 29, 77, -5, 90, -41, 40, -20, 92, 80, 11, -88, -16, 73, -49, 34, 105, -7, 118, -76, -22};
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
    msg.setTimeStamp(0.36957891793149233);
    msg.setSource(60040U);
    msg.setSourceEntity(118U);
    msg.setDestination(45148U);
    msg.setDestinationEntity(186U);
    msg.req_id = 62282U;
    msg.ttl = 51096U;
    msg.destination.assign("CXSMIXVBGPEADAFQYCPVWYOMLUSWNRQJKKGVOZPWFVFFTCDPIZKGYMBYTVEWASYWPXVUOCDFCJUCKODGJEMERUPVZLHNTKOETIUEARRSAWQTOJHOMNGTAXRPUZCKJNGMQLGJQQAQEJDOGTLCHZLLHHRYXIBWPYMIBHKZEGLBFURBSIDIWLDZNKOIZJSHFGMSKWHR");
    const char tmp_msg_0[] = {122, 107, -13, -98, 6, 122, -77, 2, -49, -91, 26, -1, -79, 40, -26, -56, 60, -27, -53, -8, 63, -108, 60, 47, 73, -114, 32, 95, -32, -21, 101, -126, 57, -36, 119, 76, 95, -91, 85, 25, -104, -4, -79, -79, 124, -79, -71, 98, 9, -108, -4, 63, 41, -112, -117, 61, 100, 103, -55, -65, 75, 12, 52, -99, 98, -57, -124, -78, -103, 94, -48, 1, -96, -125, -113, -45, 13, -65, -14, 107, 50, -41, 30, 17, 106, 54, -73, 91, -14, -75, 61, -36, -67, -43, -63, 125, 24, 71, 107, 63, 8, 5, 111, -50, 60, -104, 6, -88, -39, 39, -106, -100, 95, 6, 17, -28, 76, -56, -67, -17, -40, -125, -48, -18, 27, -6, -14, 58, 26, -96, -57, 113, -91, -86, -123, -87, -7, -119, 91, 18, -59, 68, 23, -37, -14, 42, 50, 81, 61, -47, 7, -22, -92, -128, -99, 112, 56, -45, 23, -45, -124, -104, -50, 35, 5, 80};
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
    msg.setTimeStamp(0.8153863800050688);
    msg.setSource(41395U);
    msg.setSourceEntity(233U);
    msg.setDestination(55031U);
    msg.setDestinationEntity(3U);
    msg.req_id = 1639U;
    msg.ttl = 55286U;
    msg.destination.assign("ULPAVHTIPCCRIHXENKILCWAGQRFPNAETJBKGLRVFWROQWTUDJKDCTIOXYOQBQJNRLFIUBWEAHSTRQEZVLSZKGWOXBIPRZDQZKWVNIKFFXZNLZPSBQSGXVHYPSXHCCAVFBDAHELMYDJEMWRMGDKZKKFOKIEZMURTXATZYYFNDHXSMFCBCGOJMFOISYYNSHVJULUCDOIGTQNTNDM");
    const char tmp_msg_0[] = {-110, -46, 27, -115, 37, 118, -66, -74, 22, 49, -19, 92, 99, -113};
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
    msg.setTimeStamp(0.9782587274164994);
    msg.setSource(48610U);
    msg.setSourceEntity(171U);
    msg.setDestination(8739U);
    msg.setDestinationEntity(93U);
    msg.req_id = 52458U;
    msg.status = 247U;
    msg.text.assign("TSVAKMLKUYPLUHXOKLUCPPNSYTUJPNIJFMCTFZY");

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
    msg.setTimeStamp(0.5237044334204847);
    msg.setSource(10963U);
    msg.setSourceEntity(50U);
    msg.setDestination(25429U);
    msg.setDestinationEntity(163U);
    msg.req_id = 10535U;
    msg.status = 50U;
    msg.text.assign("NYYQHELJZYSZXEOSLBAIGFIDKSARMGGEPDTBNPHKIGBWDGFSIFMDVRCUUVFYXDCOVGZLKQKNWHQMCUOLXNCZTUUMBFMPVHVWEYRFBTYLKMXCEQEROMRIHWCD");

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
    msg.setTimeStamp(0.23497500020829576);
    msg.setSource(50100U);
    msg.setSourceEntity(218U);
    msg.setDestination(41225U);
    msg.setDestinationEntity(58U);
    msg.req_id = 12824U;
    msg.status = 212U;
    msg.text.assign("PMETWBOXSWPLQVEUWXILORFIOYCQQJESOSDSHRSVCOABEYWUPHSBWVATNQPFJXQAYIZFGUUGUDGFGAZBXUCYZGVXTERNZKMBDREOQVAZEHAJITVIYCJPNIPZONGCYRYDMNHNLXWBKXFMGVBRWJLCERNHTDLSNVMSLUKATMJCNCHODLGXETKYTFURZ");

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
    msg.setTimeStamp(0.6875319875431107);
    msg.setSource(27555U);
    msg.setSourceEntity(62U);
    msg.setDestination(49322U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("AQKBIJMQRBSGNYCWQMNTQQUDFSVPHIDQUSGZYKUFDDEMBYOIXVRKGTJVLV");
    msg.links = 4107004231U;

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
    msg.setTimeStamp(0.30598965390731425);
    msg.setSource(47770U);
    msg.setSourceEntity(19U);
    msg.setDestination(10388U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("DTHLFVDLKXLPRTYHDBKBNOCPVGRBZRRRXEGZGMUIJINXDZTBZAQWJHJZHOFVGYAWZLAJKJJUEUNDXPQWWLWSMXQVAKNKOQ");
    msg.links = 3856705420U;

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
    msg.setTimeStamp(0.23521082180130937);
    msg.setSource(16294U);
    msg.setSourceEntity(17U);
    msg.setDestination(51815U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("FLFDUFSJADFDVZHTKYGQZRUFMGYCWRAPLHNDVMQFNEWMBVAOWIPWPFSLFPHXVVJYRXCRYHCI");
    msg.links = 2303207829U;

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
    msg.setTimeStamp(0.7622159398303718);
    msg.setSource(56931U);
    msg.setSourceEntity(60U);
    msg.setDestination(19794U);
    msg.setDestinationEntity(19U);
    msg.groupname.assign("IKFEYMHWPKFUNWGTWMTDUAUPCAANY");
    msg.action = 248U;
    msg.grouplist.assign("IRQVONVCPSO");

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
    msg.setTimeStamp(0.7028668873247804);
    msg.setSource(53311U);
    msg.setSourceEntity(142U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(175U);
    msg.groupname.assign("DHMJOFZVKPZDSVVEQDFIGAANOJEFJGFCXDYCCJBYOPIOAEWGVYQBTRMEJMPSGWONKPMFDNPUXHNUOEHOTYPSBKXWMLRQLEZHDLHYIGUTMVAZJCYNPCZCACRKKKBBDNQIBUGPXQTTVFSIRBGAYURMHQHFLJRWJVALIXUWERLNXWAZXSIMWKZUUQSLEDBOSEDLLTCGWXAYCSPYKHBANSZKTI");
    msg.action = 211U;
    msg.grouplist.assign("YRMMQWBXLDYWQA");

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
    msg.setTimeStamp(0.7306236150374611);
    msg.setSource(40663U);
    msg.setSourceEntity(203U);
    msg.setDestination(56718U);
    msg.setDestinationEntity(211U);
    msg.groupname.assign("CHWLGTNOUNGUXBELDSQWZEXOXMTDNBHROAANFIUASSOFDLJREJGXZUZFYXMAPWHGPUYLIHAGIGUZAPQMDNHIYQSQUDHFWYCXBCMLVSGIDAOASQVCIJCNHKXTTTKAQLBRVQQLQZREKZZYCHJHBGOVVABCKWKRZJULFJJJZSUVPYKGWKEOOOMDWPNJRPRCQTTICZYYIBVNDGFNWIHIPMJMDFNWLFTESTXMLKEVMBPYPRKSBPFYEDFVXTM");
    msg.action = 74U;
    msg.grouplist.assign("HZUSIFGJGEMJULGAMUGTRCJBKQPWVFDYHEMACRKVBQQACDFODMLPKYHPJYRVQWEXSHOIFHOMAKBQQGOXNLKMYSBAJVTGNCKGZYRPBWNRUXZLFTIHBTCWVVNPRWAZUFCQUIJYEFEQVLYPBSBXSESCQGIOAAAIUNSFFVMUKVNVKIBWPMYEZMOIRCNZLEDBKUFMZOTWDDSPOTETWTHHQOXIXXGRLEDITLLGJZSZRAWRWSLJDNOXPYCUXC");

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
    msg.setTimeStamp(0.45104467527685854);
    msg.setSource(38224U);
    msg.setSourceEntity(157U);
    msg.setDestination(45376U);
    msg.setDestinationEntity(165U);
    msg.id = 175U;
    msg.range = 0.32290184809177547;

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
    msg.setTimeStamp(0.9659879516770254);
    msg.setSource(3972U);
    msg.setSourceEntity(23U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(128U);
    msg.id = 252U;
    msg.range = 0.4342230948953636;

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
    msg.setTimeStamp(0.9511025898395726);
    msg.setSource(3064U);
    msg.setSourceEntity(54U);
    msg.setDestination(28053U);
    msg.setDestinationEntity(187U);
    msg.id = 167U;
    msg.range = 0.6462206189453263;

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
    msg.setTimeStamp(0.7135759403013912);
    msg.setSource(47256U);
    msg.setSourceEntity(238U);
    msg.setDestination(31739U);
    msg.setDestinationEntity(73U);
    msg.beacon.assign("TMBBQVNYEANHJWPWZCSRIJIOUILTRSUERJBGUIJFHTOCDNAIKWSAYOFCKTGOXBNPMEMDBEUAPARFEKDRLQZCDRPFYAIVTVUBLNITQVW");
    msg.lat = 0.49949316978820646;
    msg.lon = 0.30848768995545417;
    msg.depth = 0.057885881990111465;
    msg.query_channel = 63U;
    msg.reply_channel = 99U;
    msg.transponder_delay = 189U;

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
    msg.setTimeStamp(0.3524693149749175);
    msg.setSource(33112U);
    msg.setSourceEntity(13U);
    msg.setDestination(32424U);
    msg.setDestinationEntity(19U);
    msg.beacon.assign("COHGXQIVIBPHPJNIZTKZZEWCGTIYDGQVEPGUKRXMEFSNURYFGLQDHUCGPXRYNZYRXATSXYCKVIOLNLMUZWDDUTFOVOMAXKZZNKIGUOJWCLLAVHUBQRUNBJPBIKOYOSCOAXTRCKUMWEPSGVHEAQXTAWRJFJZZVOCEMRSYYPATJDHFHRGBQNODXBMXYWLVWMTFERVWKQFHDEHJSGEQISLAIMPTJMCWBJFINYLFLKBDZS");
    msg.lat = 0.274146239237407;
    msg.lon = 0.7932921277455804;
    msg.depth = 0.08062636528320422;
    msg.query_channel = 250U;
    msg.reply_channel = 189U;
    msg.transponder_delay = 76U;

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
    msg.setTimeStamp(0.13491055516007766);
    msg.setSource(61282U);
    msg.setSourceEntity(161U);
    msg.setDestination(30295U);
    msg.setDestinationEntity(233U);
    msg.beacon.assign("GYNKUNKKMNANMNONRWFJQUFKDOAKNZYCRYVWLTLXLMPVFIJTNBIPPEHXGZCCPCZXQQKIBCXPGFEOGGRSIHOGCARGIRSSRYSBFQYJDTVHUTODVWKXJQXYLUDQCHUBOODQWQ");
    msg.lat = 0.6625846880203693;
    msg.lon = 0.05191975917450464;
    msg.depth = 0.2362207231065362;
    msg.query_channel = 57U;
    msg.reply_channel = 199U;
    msg.transponder_delay = 14U;

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
    msg.setTimeStamp(0.7004831478087931);
    msg.setSource(49317U);
    msg.setSourceEntity(11U);
    msg.setDestination(60379U);
    msg.setDestinationEntity(59U);
    msg.op = 119U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZEGTBZTAOFGRMMWULZEQVEXJQXUMVFTDLFFLSZAOAJJCCLQUNAPJQXNVZFJXQGHPVLYXSZTIGQYTRMSWPWFPNNRWUOZORUHCAGKM");
    tmp_msg_0.lat = 0.35958921131901145;
    tmp_msg_0.lon = 0.5375432337337748;
    tmp_msg_0.depth = 0.1348723093105747;
    tmp_msg_0.query_channel = 41U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 128U;
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
    msg.setTimeStamp(0.40930441644663096);
    msg.setSource(60798U);
    msg.setSourceEntity(189U);
    msg.setDestination(37892U);
    msg.setDestinationEntity(230U);
    msg.op = 226U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RWAEIJCOMWEWQHLMYBBQPAFJHIDRGUQNVGQSLBBYVDLCZ");
    tmp_msg_0.lat = 0.0830555301276018;
    tmp_msg_0.lon = 0.3820711089166051;
    tmp_msg_0.depth = 0.7597022850510458;
    tmp_msg_0.query_channel = 45U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 62U;
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
    msg.setTimeStamp(0.8451309481568549);
    msg.setSource(35032U);
    msg.setSourceEntity(119U);
    msg.setDestination(30030U);
    msg.setDestinationEntity(250U);
    msg.op = 153U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LPZRKJOVMAUFOUUTRTFZIJDNEIWYFGVAQCPIVSTJQGOLWBYBVGPMYZDIQGWBKXCBHMBVGFRSLZNMTKJSESIQTIMKWXRTEGTEOMONOKMEMBEEIYKHRLBPWXLERSNCEKDYOHPPJLCCJSUAHSULDPYQPZOHAZPUQSRPJNHYDOXAQDQXTZWAGMIYAFKGZCKVUIELBYRFJFKGWHZACNVAVHSHQOIDWTNCCNHXFFZJSQXXCFXNWAYWRVD");
    tmp_msg_0.lat = 0.07628496198607249;
    tmp_msg_0.lon = 0.8690552961414135;
    tmp_msg_0.depth = 0.7006860980124953;
    tmp_msg_0.query_channel = 190U;
    tmp_msg_0.reply_channel = 160U;
    tmp_msg_0.transponder_delay = 200U;
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
    msg.setTimeStamp(0.141484299948888);
    msg.setSource(35069U);
    msg.setSourceEntity(98U);
    msg.setDestination(51498U);
    msg.setDestinationEntity(135U);
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 55U;
    tmp_msg_0.goal_id.assign("FHXADGGSFSUSINOGPKHVMRSDLAVKWRYQPTSCQURGARSVLEGNPVFVDMFMCQXGOPBWXEFFYPDMRBJZUXXUIUAIJLYWUXJOOLPXXWPEDJKHAZBCKAGEXYJQHIRVKDZUZYWAKZQZBHCNNPIOJ");
    tmp_msg_0.goal_xml.assign("OFOJFSQGXUDYF");
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
    msg.setTimeStamp(0.6342272336765147);
    msg.setSource(48325U);
    msg.setSourceEntity(73U);
    msg.setDestination(27215U);
    msg.setDestinationEntity(156U);
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.8449897584034652;
    tmp_msg_0.phi = 0.6891612743226334;
    tmp_msg_0.theta = 0.14615035075938554;
    tmp_msg_0.psi = 0.1971115503617269;
    tmp_msg_0.psi_magnetic = 0.1736528399655236;
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
    msg.setTimeStamp(0.7554399236090127);
    msg.setSource(41399U);
    msg.setSourceEntity(11U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(136U);
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 233U;
    tmp_msg_0.label.assign("CRYWWRXMEFEGEUFMNJORINZZTQUDHZIOMFPNVWQAZPAHNASBYITPWGFECIXVNDSXVUAJYCZSBKIJABDVQDGJQCILCGNHXYMKDTJAPUOEYGWNRTMWVHQTBBQHITZERHFOGTCMIFUSZVRERZ");
    tmp_msg_0.component.assign("ZKIWKOHIYPSXTQYOLOWJCQKEZQABONUJUJWRPUXRXVJAQSNGAXTBETMNAQUPVUJCODIG");
    tmp_msg_0.act_time = 45960U;
    tmp_msg_0.deact_time = 64255U;
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
    msg.setTimeStamp(0.546347290662348);
    msg.setSource(63007U);
    msg.setSourceEntity(55U);
    msg.setDestination(63177U);
    msg.setDestinationEntity(143U);
    msg.op = 242U;
    msg.system.assign("KVVJXEEBEPCDXPGVWFXNOBGAPZSOHBWVCDRRWNNHAWIRKQYEYSBFZUKCGQKTCIUVWSFOBAWHRYEGUZRVLBTCNMQQKXELZOGIFHAMNCKTYJIVZTILAMAFJTMXHXOZLQTJPSQQWNIBUEYZGYUSRJXUPVCUVSLUXTPYMLYPFWMHJRPKRYENNJFKIRNUCJIQFKAMFJDTLPOAOSDBJSAMDAGIWFSHCMTQZTSLYO");
    msg.range = 0.1810340775525643;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("JQSCITTZXTLXCRXQD");
    tmp_msg_0.sensor_class.assign("EJUSQFPDSXYWBNQVUTPKOKICALTNNLLVB");
    tmp_msg_0.lat = 0.2861911444735298;
    tmp_msg_0.lon = 0.16994253260153103;
    tmp_msg_0.alt = 0.25561892488508364;
    tmp_msg_0.heading = 0.7242406573498984;
    tmp_msg_0.data.assign("ZNMQIKVBJUBWWBIDTZVHFUWYPJTEAPTNZYEOTPKQMMKBHKDPXOFFBVVBRSJHLJRUSPPIYGJLEBSKKCBCLMSFPCCZZNSRAOXLNAYMMOEGSDIYEQQVTWUDQXZYKJSJXAOTXKYERLJJAUIUCGVZJARLRFPCVDTHASNZVXKCRDHGWHOVKVUQGHHBQNUYYGUFSNGIATFFZIFDGIWOFORSBGXLAUIWGDHXWAQ");
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
    msg.setTimeStamp(0.9618533201660683);
    msg.setSource(41058U);
    msg.setSourceEntity(113U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(183U);
    msg.op = 135U;
    msg.system.assign("GZCPXCBZJBIPHMHNPLIQNWCAYVBWTKIGPFTQSIZIGQMXSLHUJOGNLIWEXMDTOLVPZJKOQQOSTXCBPODSPEVAMVHKARUIMUCSVQERNQTKDEJKBOWGAWEXJKWHHQVDSTSZJIWWVSTBZNGBHOALBVTXKAYDVIBJSRBSHFJMFJNYFIMNLDEFNXLUGCCWRRGAZDMHUAJOAUFOCYYORDUKVQGYRKQEKLCRRCNRPEHDAZLTEYWYXUZ");
    msg.range = 0.6649580298075695;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 2U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("IGTSVCQXBYOFFTKXWCPSONIITWKSAPKJKUFXAWRBHTNODDTPGNYYDLLCRPENHPZNGWMQTUSNVMFSEEVJSCWYRWPZAECDLVORWIKJGGYGAXQQVCBEOIDXAHZOHMCDDSVPLBDHZYBHBAURIVUUNJRSXFABLOMJOZBWIZJQLTXHHYGELAASDWRQFJMMOFYZZTGXEKVEUEUAMNRXHBIQPQUUKYIJCDCZKJYJVMTWNLQVULPNGPRRCGLXEZHMKKFF");
    tmp_tmp_msg_0_0.lat = 0.1186312739519696;
    tmp_tmp_msg_0_0.lon = 0.14168310981314758;
    tmp_tmp_msg_0_0.depth = 0.4950302000187702;
    tmp_tmp_msg_0_0.query_channel = 106U;
    tmp_tmp_msg_0_0.reply_channel = 142U;
    tmp_tmp_msg_0_0.transponder_delay = 150U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8908700610067621);
    msg.setSource(1921U);
    msg.setSourceEntity(21U);
    msg.setDestination(58732U);
    msg.setDestinationEntity(119U);
    msg.op = 180U;
    msg.system.assign("YFPZDYLPUQTBLCIRKLLHIGJEIGMXYXZGQCIIUTFHRTEKMNMAHWEWCUQYUFSRFZKTODQLAOZYTODNXPYLOHZATYWDBUSVRPJADMJGENPKSHTLOWITFBBJVAOVYFKSHCVBWXZSJIMVRVK");
    msg.range = 0.09960204521093652;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 207U;
    tmp_msg_0.error_count = 58U;
    tmp_msg_0.error_ents.assign("OMCAAZZXJLPRVQXZYYKDECCQIIEHOEEBBBZYUQIGODKVFVAKHLIWBMBFMGQWLPKAWGDYAXWNCGPWOEOFUUQMIBNBDRKIPBPVZXRDJLABYREOPGIUQWPHYIETMFVQSJ");
    tmp_msg_0.maneuver_type = 24153U;
    tmp_msg_0.maneuver_stime = 0.12023818660022167;
    tmp_msg_0.maneuver_eta = 43031U;
    tmp_msg_0.control_loops = 1006105032U;
    tmp_msg_0.flags = 19U;
    tmp_msg_0.last_error.assign("OLOUUQUFEJCNJPVQIWDSETDYMNZLXGOKBSVTJXGWFNEZSHJTKJLVSVIDEHUTMXWXCIQCLUNNKZLSVQMVCRGJJFPBQXBVMLOCFFZPAHKUDJWOEYAPFUEYYFZMWGGZCADRBTHJAXHMOHAKXXMEABKMZAQTUOTZSROQRSGWCBIPZGIYTSDEAVKCRQQOAXAPNCYYGISLIMKWNLWPUDRHNMEEHYRSNORDD");
    tmp_msg_0.last_error_time = 0.5084254472720381;
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
    msg.setTimeStamp(0.09637858882652839);
    msg.setSource(28628U);
    msg.setSourceEntity(164U);
    msg.setDestination(41265U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.6931663259930513);
    msg.setSource(50553U);
    msg.setSourceEntity(98U);
    msg.setDestination(28029U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.029855048676372453);
    msg.setSource(11858U);
    msg.setSourceEntity(111U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.32376136671111777);
    msg.setSource(49529U);
    msg.setSourceEntity(226U);
    msg.setDestination(62936U);
    msg.setDestinationEntity(222U);
    msg.list.assign("WHUUHBTDQUVUROBJLGXQVYQNCLGKTNCCZDBEVPWYSSMMKFVDQIYKKKGUPKCRDQTM");

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
    msg.setTimeStamp(0.4650433842468349);
    msg.setSource(21640U);
    msg.setSourceEntity(4U);
    msg.setDestination(40045U);
    msg.setDestinationEntity(60U);
    msg.list.assign("MXBDWXSPNFUQNXTEK");

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
    msg.setTimeStamp(0.8855948789726329);
    msg.setSource(61294U);
    msg.setSourceEntity(227U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(100U);
    msg.list.assign("XEJXIBILZAYDKVPCHDNBMDYWURBMCPBWKGRJTEGLWQYCIFORUJOXMPSYJRGXVK");

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
    msg.setTimeStamp(0.66003421453059);
    msg.setSource(18354U);
    msg.setSourceEntity(59U);
    msg.setDestination(34613U);
    msg.setDestinationEntity(48U);
    msg.value = 18392;

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
    msg.setTimeStamp(0.1793860038111016);
    msg.setSource(47639U);
    msg.setSourceEntity(27U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(161U);
    msg.value = 26833;

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
    msg.setTimeStamp(0.7988581293188479);
    msg.setSource(9706U);
    msg.setSourceEntity(226U);
    msg.setDestination(28451U);
    msg.setDestinationEntity(224U);
    msg.value = -6807;

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
    msg.setTimeStamp(0.19636976293395247);
    msg.setSource(64893U);
    msg.setSourceEntity(157U);
    msg.setDestination(7032U);
    msg.setDestinationEntity(173U);
    msg.value = 0.5418207522642334;

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
    msg.setTimeStamp(0.9401923386005011);
    msg.setSource(12069U);
    msg.setSourceEntity(66U);
    msg.setDestination(9943U);
    msg.setDestinationEntity(129U);
    msg.value = 0.29870646535926837;

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
    msg.setTimeStamp(0.2879287373616011);
    msg.setSource(62062U);
    msg.setSourceEntity(40U);
    msg.setDestination(56203U);
    msg.setDestinationEntity(241U);
    msg.value = 0.34687000933514234;

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
    msg.setTimeStamp(0.9282501869911247);
    msg.setSource(60778U);
    msg.setSourceEntity(85U);
    msg.setDestination(22827U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7670815812323247;

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
    msg.setTimeStamp(0.9901127958489778);
    msg.setSource(37874U);
    msg.setSourceEntity(133U);
    msg.setDestination(42005U);
    msg.setDestinationEntity(34U);
    msg.value = 0.9328280967604466;

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
    msg.setTimeStamp(0.8150029520722829);
    msg.setSource(13901U);
    msg.setSourceEntity(19U);
    msg.setDestination(17821U);
    msg.setDestinationEntity(39U);
    msg.value = 0.1650280796952558;

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
    msg.setTimeStamp(0.8085364521078471);
    msg.setSource(29082U);
    msg.setSourceEntity(232U);
    msg.setDestination(59992U);
    msg.setDestinationEntity(26U);
    msg.validity = 46467U;
    msg.type = 197U;
    msg.utc_year = 26734U;
    msg.utc_month = 127U;
    msg.utc_day = 150U;
    msg.utc_time = 0.3897562428700829;
    msg.lat = 0.5827631297492494;
    msg.lon = 0.5165837353667065;
    msg.height = 0.5034832948816002;
    msg.satellites = 135U;
    msg.cog = 0.9185541176748147;
    msg.sog = 0.9784528869898569;
    msg.hdop = 0.9212712731442728;
    msg.vdop = 0.4326693609076552;
    msg.hacc = 0.9350318573550603;
    msg.vacc = 0.4469554649034668;

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
    msg.setTimeStamp(0.5936140709619674);
    msg.setSource(61173U);
    msg.setSourceEntity(38U);
    msg.setDestination(57506U);
    msg.setDestinationEntity(55U);
    msg.validity = 27004U;
    msg.type = 24U;
    msg.utc_year = 39029U;
    msg.utc_month = 88U;
    msg.utc_day = 247U;
    msg.utc_time = 0.914217872766004;
    msg.lat = 0.28089045252631517;
    msg.lon = 0.9588187349277321;
    msg.height = 0.12428010476538476;
    msg.satellites = 181U;
    msg.cog = 0.12177299582777246;
    msg.sog = 0.31971087336714477;
    msg.hdop = 0.3951440444279659;
    msg.vdop = 0.036253983667335565;
    msg.hacc = 0.2083373125775796;
    msg.vacc = 0.36002474766304304;

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
    msg.setTimeStamp(0.3710818580912971);
    msg.setSource(33015U);
    msg.setSourceEntity(0U);
    msg.setDestination(44577U);
    msg.setDestinationEntity(175U);
    msg.validity = 24987U;
    msg.type = 34U;
    msg.utc_year = 60251U;
    msg.utc_month = 112U;
    msg.utc_day = 96U;
    msg.utc_time = 0.5861113583155911;
    msg.lat = 0.7271425850360667;
    msg.lon = 0.9554900302136996;
    msg.height = 0.8548990476154693;
    msg.satellites = 163U;
    msg.cog = 0.41082498830268355;
    msg.sog = 0.9497833352607309;
    msg.hdop = 0.3194635043321198;
    msg.vdop = 0.7516555795124052;
    msg.hacc = 0.3615138041883431;
    msg.vacc = 0.39414788477934537;

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
    msg.setTimeStamp(0.6821252426838007);
    msg.setSource(37640U);
    msg.setSourceEntity(237U);
    msg.setDestination(40315U);
    msg.setDestinationEntity(190U);
    msg.time = 0.6939564098874682;
    msg.phi = 0.4352571424492425;
    msg.theta = 0.6613661968147475;
    msg.psi = 0.9123008888693834;
    msg.psi_magnetic = 0.48533687937606307;

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
    msg.setTimeStamp(0.7271004841811441);
    msg.setSource(11721U);
    msg.setSourceEntity(16U);
    msg.setDestination(4756U);
    msg.setDestinationEntity(55U);
    msg.time = 0.7997086826784259;
    msg.phi = 0.8094843285884068;
    msg.theta = 0.8467510638130372;
    msg.psi = 0.9962549892341114;
    msg.psi_magnetic = 0.26598381779926705;

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
    msg.setTimeStamp(0.6925409739819944);
    msg.setSource(29035U);
    msg.setSourceEntity(117U);
    msg.setDestination(57583U);
    msg.setDestinationEntity(228U);
    msg.time = 0.28604311337230826;
    msg.phi = 0.9596556631437276;
    msg.theta = 0.1735155323398665;
    msg.psi = 0.046007601513888385;
    msg.psi_magnetic = 0.054185377937796875;

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
    msg.setTimeStamp(0.7564128691343505);
    msg.setSource(63603U);
    msg.setSourceEntity(153U);
    msg.setDestination(21019U);
    msg.setDestinationEntity(128U);
    msg.time = 0.6593159060434414;
    msg.x = 0.5058585434468731;
    msg.y = 0.8466612426918636;
    msg.z = 0.5537795863787669;
    msg.timestep = 0.824322309950696;

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
    msg.setTimeStamp(0.807392405250812);
    msg.setSource(54274U);
    msg.setSourceEntity(89U);
    msg.setDestination(28838U);
    msg.setDestinationEntity(156U);
    msg.time = 0.11786263811878461;
    msg.x = 0.572131655332448;
    msg.y = 0.5130846628468598;
    msg.z = 0.23978984402163883;
    msg.timestep = 0.9238151592595237;

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
    msg.setTimeStamp(0.7640307014866828);
    msg.setSource(52385U);
    msg.setSourceEntity(181U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(213U);
    msg.time = 0.6226251203305683;
    msg.x = 0.2509165845561234;
    msg.y = 0.34450816657834704;
    msg.z = 0.5581948732210935;
    msg.timestep = 0.08169080203819357;

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
    msg.setTimeStamp(0.6609898492618332);
    msg.setSource(40933U);
    msg.setSourceEntity(197U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(164U);
    msg.time = 0.7573630948437465;
    msg.x = 0.21506936769639062;
    msg.y = 0.2941361189201971;
    msg.z = 0.8450792377820829;

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
    msg.setTimeStamp(0.07759265557485251);
    msg.setSource(34307U);
    msg.setSourceEntity(201U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(45U);
    msg.time = 0.29718613534851923;
    msg.x = 0.10359078284386558;
    msg.y = 0.08848234146130551;
    msg.z = 0.15262128468098723;

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
    msg.setTimeStamp(0.7695827286773123);
    msg.setSource(29294U);
    msg.setSourceEntity(125U);
    msg.setDestination(55897U);
    msg.setDestinationEntity(26U);
    msg.time = 0.14490534295763402;
    msg.x = 0.9497480284096779;
    msg.y = 0.5886751609823889;
    msg.z = 0.5559958846196904;

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
    msg.setTimeStamp(0.3233228712658438);
    msg.setSource(37170U);
    msg.setSourceEntity(236U);
    msg.setDestination(46190U);
    msg.setDestinationEntity(42U);
    msg.time = 0.8839622653685432;
    msg.x = 0.6292976353902615;
    msg.y = 0.8306387385502604;
    msg.z = 0.9018848356946808;

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
    msg.setTimeStamp(0.32961939666232776);
    msg.setSource(39927U);
    msg.setSourceEntity(115U);
    msg.setDestination(26491U);
    msg.setDestinationEntity(45U);
    msg.time = 0.42728273290775876;
    msg.x = 0.945318838029858;
    msg.y = 0.291800600066505;
    msg.z = 0.4421726509200412;

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
    msg.setTimeStamp(0.05673025061576198);
    msg.setSource(52764U);
    msg.setSourceEntity(242U);
    msg.setDestination(2162U);
    msg.setDestinationEntity(232U);
    msg.time = 0.1538085698804862;
    msg.x = 0.08109646933987691;
    msg.y = 0.146983344627849;
    msg.z = 0.2182017421526491;

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
    msg.setTimeStamp(0.5544253546196356);
    msg.setSource(33812U);
    msg.setSourceEntity(53U);
    msg.setDestination(41277U);
    msg.setDestinationEntity(238U);
    msg.time = 0.08495249628138002;
    msg.x = 0.7401773559002645;
    msg.y = 0.618032542157233;
    msg.z = 0.7947720402529163;

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
    msg.setTimeStamp(0.429994694772339);
    msg.setSource(18836U);
    msg.setSourceEntity(33U);
    msg.setDestination(11592U);
    msg.setDestinationEntity(111U);
    msg.time = 0.20573958152319105;
    msg.x = 0.3871050603464773;
    msg.y = 0.45351444429336485;
    msg.z = 0.030193906538393933;

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
    msg.setTimeStamp(0.11261360179755875);
    msg.setSource(51645U);
    msg.setSourceEntity(113U);
    msg.setDestination(21932U);
    msg.setDestinationEntity(197U);
    msg.time = 0.885428345756633;
    msg.x = 0.9312541709589599;
    msg.y = 0.0330850506300453;
    msg.z = 0.21012338920493467;

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
    msg.setTimeStamp(0.7160386004040059);
    msg.setSource(59224U);
    msg.setSourceEntity(227U);
    msg.setDestination(45424U);
    msg.setDestinationEntity(202U);
    msg.validity = 244U;
    msg.x = 0.3992805640559135;
    msg.y = 0.4432214894860821;
    msg.z = 0.12169088494621316;

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
    msg.setTimeStamp(0.4748861428079766);
    msg.setSource(767U);
    msg.setSourceEntity(78U);
    msg.setDestination(52775U);
    msg.setDestinationEntity(186U);
    msg.validity = 63U;
    msg.x = 0.8891649131337914;
    msg.y = 0.4075214185543604;
    msg.z = 0.5720254086143624;

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
    msg.setTimeStamp(0.9884450797894168);
    msg.setSource(54433U);
    msg.setSourceEntity(205U);
    msg.setDestination(12367U);
    msg.setDestinationEntity(180U);
    msg.validity = 162U;
    msg.x = 0.5048718605313801;
    msg.y = 0.49829400675478774;
    msg.z = 0.6715834049106894;

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
    msg.setTimeStamp(0.35091747870759604);
    msg.setSource(47900U);
    msg.setSourceEntity(248U);
    msg.setDestination(29112U);
    msg.setDestinationEntity(79U);
    msg.validity = 80U;
    msg.x = 0.7354514755751219;
    msg.y = 0.026901247252842597;
    msg.z = 0.4544278763663294;

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
    msg.setTimeStamp(0.5670656637690429);
    msg.setSource(893U);
    msg.setSourceEntity(94U);
    msg.setDestination(55696U);
    msg.setDestinationEntity(187U);
    msg.validity = 114U;
    msg.x = 0.7077532940085063;
    msg.y = 0.2599573324596839;
    msg.z = 0.8306348571980916;

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
    msg.setTimeStamp(0.023416244668197805);
    msg.setSource(34156U);
    msg.setSourceEntity(105U);
    msg.setDestination(24840U);
    msg.setDestinationEntity(224U);
    msg.validity = 178U;
    msg.x = 0.40140777992502286;
    msg.y = 0.9908232826532272;
    msg.z = 0.730297037336903;

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
    msg.setTimeStamp(0.7541617091871335);
    msg.setSource(33008U);
    msg.setSourceEntity(30U);
    msg.setDestination(26448U);
    msg.setDestinationEntity(144U);
    msg.time = 0.525284424561215;
    msg.x = 0.3955977790140893;
    msg.y = 0.15159640227919446;
    msg.z = 0.7700821688976375;

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
    msg.setTimeStamp(0.6502898032372504);
    msg.setSource(32505U);
    msg.setSourceEntity(179U);
    msg.setDestination(62124U);
    msg.setDestinationEntity(196U);
    msg.time = 0.743538959108863;
    msg.x = 0.14381066367879525;
    msg.y = 0.9333791218606569;
    msg.z = 0.326181104871587;

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
    msg.setTimeStamp(0.6677321187617898);
    msg.setSource(35150U);
    msg.setSourceEntity(42U);
    msg.setDestination(46724U);
    msg.setDestinationEntity(91U);
    msg.time = 0.8844088417985699;
    msg.x = 0.8504317129836861;
    msg.y = 0.469715124699546;
    msg.z = 0.9461841679932131;

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
    msg.setTimeStamp(0.7793449759484422);
    msg.setSource(21488U);
    msg.setSourceEntity(3U);
    msg.setDestination(15826U);
    msg.setDestinationEntity(32U);
    msg.validity = 21U;
    msg.value = 0.14788440818919568;

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
    msg.setTimeStamp(0.8545144739261878);
    msg.setSource(18111U);
    msg.setSourceEntity(194U);
    msg.setDestination(19304U);
    msg.setDestinationEntity(97U);
    msg.validity = 189U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.32766450303168526;
    tmp_msg_0.y = 0.7271180850774548;
    tmp_msg_0.z = 0.5324707083755373;
    tmp_msg_0.phi = 0.29801929093074464;
    tmp_msg_0.theta = 0.5052704633858285;
    tmp_msg_0.psi = 0.4347262492762698;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.364283187104117;

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
    msg.setTimeStamp(0.17529264878407513);
    msg.setSource(11875U);
    msg.setSourceEntity(221U);
    msg.setDestination(23704U);
    msg.setDestinationEntity(155U);
    msg.validity = 63U;
    msg.value = 0.06915292906628256;

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
    msg.setTimeStamp(0.026073207781572516);
    msg.setSource(16539U);
    msg.setSourceEntity(87U);
    msg.setDestination(25305U);
    msg.setDestinationEntity(234U);
    msg.value = 0.1633757921398602;

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
    msg.setTimeStamp(0.008720892122619173);
    msg.setSource(4578U);
    msg.setSourceEntity(195U);
    msg.setDestination(5310U);
    msg.setDestinationEntity(202U);
    msg.value = 0.36791128152825936;

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
    msg.setTimeStamp(0.6538960879510409);
    msg.setSource(30952U);
    msg.setSourceEntity(168U);
    msg.setDestination(2937U);
    msg.setDestinationEntity(69U);
    msg.value = 0.25007447789426707;

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
    msg.setTimeStamp(0.9726574782302628);
    msg.setSource(10506U);
    msg.setSourceEntity(179U);
    msg.setDestination(26908U);
    msg.setDestinationEntity(42U);
    msg.value = 0.9161386045005736;

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
    msg.setTimeStamp(0.24147045444811344);
    msg.setSource(12105U);
    msg.setSourceEntity(109U);
    msg.setDestination(12398U);
    msg.setDestinationEntity(175U);
    msg.value = 0.2381177207395927;

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
    msg.setTimeStamp(0.4655098747747588);
    msg.setSource(56449U);
    msg.setSourceEntity(39U);
    msg.setDestination(50016U);
    msg.setDestinationEntity(40U);
    msg.value = 0.624592203929825;

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
    msg.setTimeStamp(0.9058608237300004);
    msg.setSource(52399U);
    msg.setSourceEntity(25U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(213U);
    msg.value = 0.11528388744138185;

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
    msg.setTimeStamp(0.3966581880195722);
    msg.setSource(18007U);
    msg.setSourceEntity(195U);
    msg.setDestination(53122U);
    msg.setDestinationEntity(32U);
    msg.value = 0.8022112194451624;

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
    msg.setTimeStamp(0.7777436905780727);
    msg.setSource(55808U);
    msg.setSourceEntity(168U);
    msg.setDestination(11618U);
    msg.setDestinationEntity(78U);
    msg.value = 0.11610091507870146;

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
    msg.setTimeStamp(0.11889519366095402);
    msg.setSource(6332U);
    msg.setSourceEntity(42U);
    msg.setDestination(35131U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7667172686346201;

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
    msg.setTimeStamp(0.3537667119702005);
    msg.setSource(15155U);
    msg.setSourceEntity(185U);
    msg.setDestination(48664U);
    msg.setDestinationEntity(240U);
    msg.value = 0.20612520874301488;

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
    msg.setTimeStamp(0.7407659233903289);
    msg.setSource(57309U);
    msg.setSourceEntity(172U);
    msg.setDestination(29225U);
    msg.setDestinationEntity(193U);
    msg.value = 0.277480793690861;

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
    msg.setTimeStamp(0.09075904758958064);
    msg.setSource(28335U);
    msg.setSourceEntity(105U);
    msg.setDestination(50626U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5039512506669677;

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
    msg.setTimeStamp(0.061850131308048395);
    msg.setSource(56247U);
    msg.setSourceEntity(157U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8402460018070472;

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
    msg.setTimeStamp(0.7507887274846825);
    msg.setSource(7898U);
    msg.setSourceEntity(136U);
    msg.setDestination(46971U);
    msg.setDestinationEntity(136U);
    msg.value = 0.2170928949202494;

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
    msg.setTimeStamp(0.7424307801769752);
    msg.setSource(30536U);
    msg.setSourceEntity(220U);
    msg.setDestination(55238U);
    msg.setDestinationEntity(222U);
    msg.value = 0.1711070282663938;

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
    msg.setTimeStamp(0.4359024194924598);
    msg.setSource(60506U);
    msg.setSourceEntity(173U);
    msg.setDestination(45866U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5993115944054305;

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
    msg.setTimeStamp(0.3365761781487401);
    msg.setSource(43660U);
    msg.setSourceEntity(154U);
    msg.setDestination(61264U);
    msg.setDestinationEntity(27U);
    msg.value = 0.9452384744953038;

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
    msg.setTimeStamp(0.5262121607699314);
    msg.setSource(13175U);
    msg.setSourceEntity(120U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(69U);
    msg.value = 0.24516002605627574;

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
    msg.setTimeStamp(0.07940445448692146);
    msg.setSource(21916U);
    msg.setSourceEntity(232U);
    msg.setDestination(61072U);
    msg.setDestinationEntity(220U);
    msg.value = 0.11695166693306491;

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
    msg.setTimeStamp(0.3913661526175938);
    msg.setSource(18627U);
    msg.setSourceEntity(230U);
    msg.setDestination(23531U);
    msg.setDestinationEntity(246U);
    msg.value = 0.44503986054318245;

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
    msg.setTimeStamp(0.8018992243509221);
    msg.setSource(10183U);
    msg.setSourceEntity(213U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6524736155722445;

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
    msg.setTimeStamp(0.6130080866081401);
    msg.setSource(46524U);
    msg.setSourceEntity(200U);
    msg.setDestination(11971U);
    msg.setDestinationEntity(86U);
    msg.value = 0.3653903081451241;

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
    msg.setTimeStamp(0.26363966691658725);
    msg.setSource(16583U);
    msg.setSourceEntity(19U);
    msg.setDestination(61216U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6127771568799769;

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
    msg.setTimeStamp(0.9590480422836027);
    msg.setSource(44165U);
    msg.setSourceEntity(83U);
    msg.setDestination(59321U);
    msg.setDestinationEntity(243U);
    msg.direction = 0.43163130090966484;
    msg.speed = 0.6473825029152513;
    msg.turbulence = 0.10853069554756234;

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
    msg.setTimeStamp(0.5326978839509413);
    msg.setSource(32370U);
    msg.setSourceEntity(159U);
    msg.setDestination(1733U);
    msg.setDestinationEntity(203U);
    msg.direction = 0.34487144503617406;
    msg.speed = 0.7984871493152259;
    msg.turbulence = 0.19933066778615072;

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
    msg.setTimeStamp(0.535933320346747);
    msg.setSource(47558U);
    msg.setSourceEntity(249U);
    msg.setDestination(64841U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.6671377040057683;
    msg.speed = 0.3678859906547436;
    msg.turbulence = 0.5100786810249042;

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
    msg.setTimeStamp(0.3314525671608233);
    msg.setSource(45457U);
    msg.setSourceEntity(21U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(100U);
    msg.value = 0.8749628762135718;

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
    msg.setTimeStamp(0.30045814459279974);
    msg.setSource(49997U);
    msg.setSourceEntity(184U);
    msg.setDestination(28798U);
    msg.setDestinationEntity(14U);
    msg.value = 0.41401070560408637;

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
    msg.setTimeStamp(0.8222258266327431);
    msg.setSource(1986U);
    msg.setSourceEntity(131U);
    msg.setDestination(28020U);
    msg.setDestinationEntity(77U);
    msg.value = 0.4473124007672634;

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
    msg.setTimeStamp(0.9455457530067822);
    msg.setSource(24768U);
    msg.setSourceEntity(91U);
    msg.setDestination(32982U);
    msg.setDestinationEntity(81U);
    msg.value.assign("MXFTKRBPIZXSXUESIZUQQDJKKOFVKHUOGTZLPSMDNEFJPMCWPHOEWDVCMUWXATTZTLBXVZBYOCMNBEEVLAXHZKJIGIBDQXTYPAGZWKPGNNJSQGDXJYMVR");

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
    msg.setTimeStamp(0.05182144650625908);
    msg.setSource(36735U);
    msg.setSourceEntity(129U);
    msg.setDestination(34517U);
    msg.setDestinationEntity(161U);
    msg.value.assign("CFALHLSEHEWSXBZUEARYHRZHOKKXNASESZUGQSJOEPFDBGMFMDUCMHLIMUVKOOPPZDKQTBFGFTHTQABAZUZHBENRVCCPRAPMYAXJTFOVXIQNSJLERRENXJANGOAVWYZCGVWIZVIUXVLNKGISTQIOOBMYYTGKEOYTMMVBYCJNRRDSKAWFSXINUYWINPPQIBWJGMWIPQCBLDDRPHCJDYTULFWSJJLRLBQUGZCKVGWZDQHFVDFKJETP");

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
    msg.setTimeStamp(0.5799118948645878);
    msg.setSource(54058U);
    msg.setSourceEntity(162U);
    msg.setDestination(64758U);
    msg.setDestinationEntity(221U);
    msg.value.assign("LNBELTNOWSRFCGDTHZOXTAVQICPHOAFYJQKLPPJMVJXSXWOLNXWDTDIETOBZFDQRRIEEPSVFADANJGWDSVHLXQYHJJTUFXGPTGEUMBIZWPOKFLSDZAHNLLVYOCXOYNZDKN");

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
    msg.setTimeStamp(0.8371119014906355);
    msg.setSource(466U);
    msg.setSourceEntity(71U);
    msg.setDestination(28114U);
    msg.setDestinationEntity(123U);
    const char tmp_msg_0[] = {-54, -26, 18, 16, -109, -16, 75, 89, -61, -90, 93, 105, -112, -40, 76, -88, -45, -53, -57, 37, 35, -73, 55, -100, 69, -127, 72, -74, 40, -113, -43, -114, 8, 115, 57, 28, -6, -58, -12, 65, 96, -109, -2, -80, 90, -35, 65, 104, 67, -79, -99, -25, -90, 38, 85, -42, -117, 30, -86, -67, -7, 110, 56, 77, 94, 60, -16, 6, 125, 126, -12, -10, -127, 39, -72, -40, -33, 124, -112, -32, 69, -68, 74, -73, 67, 62, -27, 123, 113, -124, -121, 113, 71, 23, -119, -8, -51, -93, -118, -49, 24, -39, 47, -99, 92, -101, -21, -45, -59, -67, -5, 38, 113, 37, 1, -128, 57, 20, 109, 110, 106, 83, 45, -105, 84, -122, 0, 115, -93, -57, -18, -33, 73, 0, -55, -2, 26, 126, 54, 110, -107, 89, -117, 20, 34, -108, 83, 109, 125, -100, -107, 17, -52, 124, -96, -5, -71, 25, 75, 32, -93, -32, -92, 117, 3, -37, -60, -56, -112, -6, 46, 69, -108, -64, 27, -80, -92, -59, -126, 15, 94, 41, -118, -56, -71};
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
    msg.setTimeStamp(0.38750241257368157);
    msg.setSource(45311U);
    msg.setSourceEntity(130U);
    msg.setDestination(40213U);
    msg.setDestinationEntity(171U);
    const char tmp_msg_0[] = {102, -3, -102, 78, -113, 111, 95, 24, 32, 59, -68, -63, 89, -102, 24, 40, -37, 111, -10, 37, -117, -88, -13, -107, -13, 59, -37, 10, -61, -45, -25, 82, 17, 24, -60, 45, -122, -109, -63, 24, 102, 48, 92, 56, -10, 87, 2, -39, 113, -64, 18, -123, 44, -99, 86, 86, 109, 85, -26, -63, -90, -78, 71, -2, 4, -34, -30, -56, 77, -107, 120, 87, 34, -22, 31, 1, -7, -101, 57, 11, -54, 50, -59, 73, -47, -62, -57, -115, 102, 23, -18, -14, 42, 66, 40, 79, 121, -72, -9, -123, -107, 76, -125, -93, -98, 79, -98, -36, -107, 2, -3, -95, 37, -102, -58, 56, -79, 38, 79, -80, -117, 27, -98, -100, 73, 48, 36, -44, -117, 99, 91, -75, 122, 12, -96, 122, -7, -96, -36, 14, -85, 91, 72, 58, 39, -113, 62, 57, -100, -116, 104, -27, -19, 82, 64, -57, -102, 117, -61, 27, 22, -89, 25, 14, -33, 6, 16, 17, 68, -71, 96, -20, 42, -39, 110, 72};
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
    msg.setTimeStamp(0.40877778477147586);
    msg.setSource(47474U);
    msg.setSourceEntity(110U);
    msg.setDestination(43461U);
    msg.setDestinationEntity(74U);
    const char tmp_msg_0[] = {114, 16, -69, -110, 124, -120, 53, 105, 2, 36, 24, -126, 54, -38, 40, -37, -29, -90, -36, 117, -11, -115, 113, -89, -68, 102, -118, -48, -101, -29, -115, 24, -43, 43, -22, 99, -5, 102, -67, 15, 37, -54, -5, -84, -72, -16, -68, -70, 72, 123, -11, 11, 115, -23, 115, 0, -122, -71, -60, 45, 3, -41, -38, -53, 118, -20, -49, 108, 107, 88, -90, -25, -101, -9, -3, -87, -11, -77, 61, -5, -28, 1, -27, 99, -47, -67, -82, -108, -11, -112, 100, -74, 11, 108, -116, -5, -51, -41, -115, -77, -2, 32, 75, -6, 120, -20, -26, -62, 60, -68, 14, 81, 80, -124, 70, 55, -58, 16, -6, -111, 88, -40, 1, 80, -74, -8, 23, -14, 18, 88, -64, 36, -79, -26, 76, -87, 0, -42, 92, -12, -45, -108, -117, 13, 31, 66, -11, 32, -61, -71, -68, 6, -104, -46, -85, 90, -97, -107, 77, -52, 76, 61, -68, 113, -11, 53, 115, -113, -92, 66, 118, 119, -37, 96, -120, 76, 46, 7, -54, -99, -16, 98, -4, -93, 52, 44, 39, -98, 6, -53, 57, 38, 117, -22, 45, -93, 35, -39, -50, 20, -89, -34, 79, 51, 2, 93, -109, 122, -57, 39, 68, -10, -1, 52, 30, -24, -39, 53, 70, -87, -89, -90, 63, 39, 42, 38, -70, -117, -15, -57, 12, 100, -94, 28, 100, -6, -72, 20, -25, -31, -91};
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
    msg.setTimeStamp(0.3658601775104957);
    msg.setSource(1719U);
    msg.setSourceEntity(100U);
    msg.setDestination(20833U);
    msg.setDestinationEntity(179U);
    msg.type = 32U;
    msg.frequency = 944074388U;
    msg.min_range = 5903U;
    msg.max_range = 24720U;
    msg.bits_per_point = 241U;
    msg.scale_factor = 0.6482954532291921;
    const char tmp_msg_0[] = {61, -93, -15, 14, -115, 39, 71, -72, 23, -119, -39, 48, -111, -125, 50, 113, -39, -65, -70, 86, -7, -3, -65, -74, -68, 45, -81, 33, -22, -50, -38, 13, 74, -79, -119, -46, 78, 61, 44, -23, -33, 119, -77, 113, 102, 100, -20, -57, 112, 44, -16, -84, -107, 84, -59, -5, -32, 102, 8, -105, -11, 72, -108, -24, 19, 37, 35, -61, -79, 28, -97, 38, -47, 13, 113, -36, 54, -114, 25, -40, -81, 97, 92, 60, -82, 26, 38, 13, 38, 87, -34, 124, -9, 80, 77, 49, -106, 38, 71, -98, -67, 106, 20, 61, -3, 25, 95, 36, -100, -122, 10, -114, 62, 15, 125, -124, 30, 72, -63, -13, -36, 11, 26, -88, -60, -86, -60, -82, 102, -63, 5, -17, 18, -24, 6, -48, -75, 51, 123, 18, 87, 78, 56, -118, -78, 53, 30, -24, -33, 91, 92, 75, -97, -83, -16, -83, 68, 34, -6, -34, 39, 58, 3, 41, 36, 39, -104, -50, -101, -81, -110, -127, -67, -124, -53, -89, 31, -63, 55, 44, 92, -71, -105, 32, 55, -126, -55, 19, -77, 39, -23, 105};
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
    msg.setTimeStamp(0.015219687241930235);
    msg.setSource(14976U);
    msg.setSourceEntity(196U);
    msg.setDestination(29886U);
    msg.setDestinationEntity(130U);
    msg.type = 245U;
    msg.frequency = 4158210081U;
    msg.min_range = 64806U;
    msg.max_range = 46596U;
    msg.bits_per_point = 119U;
    msg.scale_factor = 0.005174828705192924;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4662603740431974;
    tmp_msg_0.beam_height = 0.09304229314112045;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-57, 119, 13, -61, 14, -55, 46, -109, 28, -61, -13, 118, -96, 104, 103, -17, -109, -67, -110, 14, -28, -83, -61, -123, -78, 43, -46, 11, -22, -66, -43, -86, -114, 121, 28, 45, -87, -45, 10, 0, 5, 31, 27, -35, -36, -46, -32, 70, 117, 54, -109, -55, -53, -70, 102, 8, 37, -119, -108, 34, 95, -84, -54, -14, 77, -31, -99, 4, -109, -33, 122, 57, 16, -104, -97, 26, 26, 110, -83, -101, 70, -37, -94, -61, -11, -91, -47, 96, -9, -40, 67, 16, -1, -103, -45, 28, 0, -40, 85, 117, -10, -108, 101, -101, 107, -30, 77, 82, 97, -71, -46, -54, -49, -3, -25, -23, 63, 125, 60, 21, 117, 51, -39, 33, 123, -67, -117, 32, -67, -116, 53, 108, 123, -87, -83, 18, -11, -11, 11, -37, -85, -37, 107, -115, -56, -114, -62, 43, -104, 107, -80, -83, 55, -67, 47, 43, 43, 56, 111, 34, -99, -125, 0, -70, 68, -93, -93, 15, -94, -27, -29, 35, 24, -35, 61, 17, 66, 58, -99, -18, -42, -36, 98, -87, 55, -1, 53, 0, -33, -109, 39, 9, -88, -32, 81, -96, 28, 56, 53, 94, -17, -23, -1, -72, -37, -121, 11, -128, 34, 30, -24, 34, 48, -82, -87, -15, 57, 123, 125, 106, -24, -12, -115, 92, -85, 55, 94, 38, 106, 105, 3, -87, 93, 89, -60, -58, -45, 40, 117, 30, -104, 94, 68, 5, 101, -71};
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
    msg.setTimeStamp(0.8201458063434248);
    msg.setSource(7735U);
    msg.setSourceEntity(136U);
    msg.setDestination(38710U);
    msg.setDestinationEntity(152U);
    msg.type = 191U;
    msg.frequency = 122173702U;
    msg.min_range = 27401U;
    msg.max_range = 35574U;
    msg.bits_per_point = 181U;
    msg.scale_factor = 0.0299710559712012;
    const char tmp_msg_0[] = {-7, 2, -10, 65, 3, -23, -87, -82, 61, 54, 108, -102, 125, 94, -29, -97, -83, 32, 40, 15, -51, -30, -72, -33, 94, -121, 53, -75, -59, 65, -7, -111, 114, -31, -56, -19, -102, -58, -3, 72, 49, -42, 33, 32, -6, -108, -51, 2, -23, -15, -55, 13, 15, 114, 56, 109, 41, 92, 121, 83, 3, -43, 53, 35, -50, -72, -48, -120, -31, 21, -64, 104, -9, -12, -26, 2, -102, -30, 57, -107, -119, -85, -51, 55, -53, 14, -77, 69, -99, 19, -96, -3, -73, 40, -31, 60, 24, -81, -75, -112, 13, -69, 124, 123, 9, -99, -9, -76, 57, 106, 91, 23, -112, -40, -26, -47, 76, -43, 12, 29};
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
    msg.setTimeStamp(0.27936810566119874);
    msg.setSource(47366U);
    msg.setSourceEntity(160U);
    msg.setDestination(25459U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.12084524375601158);
    msg.setSource(10983U);
    msg.setSourceEntity(56U);
    msg.setDestination(52439U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.4052834781464486);
    msg.setSource(7715U);
    msg.setSourceEntity(98U);
    msg.setDestination(59379U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.6156524250624271);
    msg.setSource(29498U);
    msg.setSourceEntity(112U);
    msg.setDestination(43544U);
    msg.setDestinationEntity(25U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.9935443438256986);
    msg.setSource(43774U);
    msg.setSourceEntity(182U);
    msg.setDestination(35653U);
    msg.setDestinationEntity(154U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.32790625997450795);
    msg.setSource(16078U);
    msg.setSourceEntity(174U);
    msg.setDestination(56562U);
    msg.setDestinationEntity(86U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.21046321260840428);
    msg.setSource(18118U);
    msg.setSourceEntity(111U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(240U);
    msg.value = 0.14984341990943284;
    msg.confidence = 0.8201822681422877;
    msg.opmodes.assign("VIBCALXNQWIAAZZQOZFUZJHYCDBTTAHCVMNUMZETDLWJAZEGZHDIXSQINQAPJROQDOBXECNRBLBURIOFLBNEGMWWSYXTTTURVXUPANAWIOWVZRHETGEMFCVSANXFESZDXCFYPOYFKHMPVJVGCNJPO");

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
    msg.setTimeStamp(0.23167486169494345);
    msg.setSource(58554U);
    msg.setSourceEntity(207U);
    msg.setDestination(52189U);
    msg.setDestinationEntity(76U);
    msg.value = 0.5560265227429914;
    msg.confidence = 0.20706968662224423;
    msg.opmodes.assign("ILYKMZCXVICKAGPGOUNOFFEAQLTNJRIEQCTQYXWJBQGZGNSTSBWZURKFRXURCZALBDSWDGYEXGOAHFAAYUHIFQVPDYWOFXRMWNFPTTACRDHVPZONDXRBWFJMJZMLEYVEQMHUPCLEKPJRGDLMSAHROWXJCDFLSXOTGJMOMVHPDOWQDLSBHZWPZM");

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
    msg.setTimeStamp(0.5496138603099033);
    msg.setSource(63061U);
    msg.setSourceEntity(219U);
    msg.setDestination(27397U);
    msg.setDestinationEntity(99U);
    msg.value = 0.7425367806632504;
    msg.confidence = 0.7746740436507545;
    msg.opmodes.assign("ROFPUMWGOKATOEPIJKTYZRUJMCGQY");

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
    msg.setTimeStamp(0.7902878703765268);
    msg.setSource(19107U);
    msg.setSourceEntity(60U);
    msg.setDestination(43838U);
    msg.setDestinationEntity(217U);
    msg.itow = 2238134134U;
    msg.lat = 0.34006760438871475;
    msg.lon = 0.6132005863002926;
    msg.height_ell = 0.41724228418956466;
    msg.height_sea = 0.6290650345622192;
    msg.hacc = 0.9794038127513864;
    msg.vacc = 0.23105953761411102;
    msg.vel_n = 0.3083339616701777;
    msg.vel_e = 0.22168694191393967;
    msg.vel_d = 0.07946053955558774;
    msg.speed = 0.4661155308682753;
    msg.gspeed = 0.5747769630592192;
    msg.heading = 0.30072878355855237;
    msg.sacc = 0.682099276426154;
    msg.cacc = 0.3059745415480366;

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
    msg.setTimeStamp(0.6278153169830808);
    msg.setSource(55509U);
    msg.setSourceEntity(251U);
    msg.setDestination(56139U);
    msg.setDestinationEntity(207U);
    msg.itow = 538894780U;
    msg.lat = 0.4732997727470869;
    msg.lon = 0.6461458844028865;
    msg.height_ell = 0.46319537615970396;
    msg.height_sea = 0.5303930989051957;
    msg.hacc = 0.8199573510120087;
    msg.vacc = 0.7133482030995708;
    msg.vel_n = 0.2533224502668152;
    msg.vel_e = 0.6009665318996108;
    msg.vel_d = 0.12776609671060357;
    msg.speed = 0.8901123776267603;
    msg.gspeed = 0.807206268453707;
    msg.heading = 0.09175593921126979;
    msg.sacc = 0.23092995218425216;
    msg.cacc = 0.5307978527212016;

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
    msg.setTimeStamp(0.8732566948177585);
    msg.setSource(13059U);
    msg.setSourceEntity(67U);
    msg.setDestination(1465U);
    msg.setDestinationEntity(96U);
    msg.itow = 1056324006U;
    msg.lat = 0.7106029344532163;
    msg.lon = 0.29298234217678365;
    msg.height_ell = 0.6627976139743523;
    msg.height_sea = 0.15835116233773783;
    msg.hacc = 0.1484519281772363;
    msg.vacc = 0.8892679782467602;
    msg.vel_n = 0.9839937760049878;
    msg.vel_e = 0.27875391023869134;
    msg.vel_d = 0.02807193312112033;
    msg.speed = 0.12644842867936246;
    msg.gspeed = 0.9345649653313024;
    msg.heading = 0.9044865404307141;
    msg.sacc = 0.19265755887400215;
    msg.cacc = 0.6131207136154504;

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
    msg.setTimeStamp(0.48961643842686997);
    msg.setSource(11744U);
    msg.setSourceEntity(40U);
    msg.setDestination(46481U);
    msg.setDestinationEntity(129U);
    msg.id = 62U;
    msg.value = 0.3630704059501525;

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
    msg.setTimeStamp(0.6083542079465907);
    msg.setSource(20325U);
    msg.setSourceEntity(144U);
    msg.setDestination(61531U);
    msg.setDestinationEntity(197U);
    msg.id = 177U;
    msg.value = 0.45891940437143863;

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
    msg.setTimeStamp(0.38615909967618756);
    msg.setSource(29656U);
    msg.setSourceEntity(184U);
    msg.setDestination(13866U);
    msg.setDestinationEntity(125U);
    msg.id = 62U;
    msg.value = 0.6230452083518065;

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
    msg.setTimeStamp(0.467939066289613);
    msg.setSource(3360U);
    msg.setSourceEntity(78U);
    msg.setDestination(17662U);
    msg.setDestinationEntity(242U);
    msg.x = 0.8543118104436268;
    msg.y = 0.6411964997040643;
    msg.z = 0.3664795264172739;
    msg.phi = 0.47604645034897963;
    msg.theta = 0.375689566850788;
    msg.psi = 0.8688342858311521;

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
    msg.setTimeStamp(0.7698961177342954);
    msg.setSource(62670U);
    msg.setSourceEntity(116U);
    msg.setDestination(16026U);
    msg.setDestinationEntity(102U);
    msg.x = 0.18565287328291147;
    msg.y = 0.3041344250661353;
    msg.z = 0.30763770993936324;
    msg.phi = 0.36642083124262403;
    msg.theta = 0.09244569743116104;
    msg.psi = 0.5445551992532149;

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
    msg.setTimeStamp(0.4706114301835571);
    msg.setSource(27186U);
    msg.setSourceEntity(129U);
    msg.setDestination(42382U);
    msg.setDestinationEntity(4U);
    msg.x = 0.20969993750814242;
    msg.y = 0.5114790095625645;
    msg.z = 0.7190569195832475;
    msg.phi = 0.6265468809582625;
    msg.theta = 0.44523865576243893;
    msg.psi = 0.4069973885520727;

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
    msg.setTimeStamp(0.8312868591804251);
    msg.setSource(5655U);
    msg.setSourceEntity(241U);
    msg.setDestination(35812U);
    msg.setDestinationEntity(152U);
    msg.beam_width = 0.5999180731858996;
    msg.beam_height = 0.4563163887652899;

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
    msg.setTimeStamp(0.42445120223422483);
    msg.setSource(32343U);
    msg.setSourceEntity(194U);
    msg.setDestination(48593U);
    msg.setDestinationEntity(230U);
    msg.beam_width = 0.12819181042447048;
    msg.beam_height = 0.4894631886516312;

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
    msg.setTimeStamp(0.8621838428424673);
    msg.setSource(12678U);
    msg.setSourceEntity(158U);
    msg.setDestination(28892U);
    msg.setDestinationEntity(137U);
    msg.beam_width = 0.5274135369900445;
    msg.beam_height = 0.266811065363737;

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
    msg.setTimeStamp(0.873776560060436);
    msg.setSource(48351U);
    msg.setSourceEntity(54U);
    msg.setDestination(43160U);
    msg.setDestinationEntity(44U);
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
    msg.setTimeStamp(0.8743658113586259);
    msg.setSource(1854U);
    msg.setSourceEntity(195U);
    msg.setDestination(2846U);
    msg.setDestinationEntity(184U);
    msg.sane = 206U;

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
    msg.setTimeStamp(0.719549512328664);
    msg.setSource(31695U);
    msg.setSourceEntity(105U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(112U);
    msg.sane = 190U;

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
    msg.setTimeStamp(0.6799195846620254);
    msg.setSource(29562U);
    msg.setSourceEntity(39U);
    msg.setDestination(54951U);
    msg.setDestinationEntity(64U);
    msg.value = 0.00789963745290001;

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
    msg.setTimeStamp(0.33675058168412353);
    msg.setSource(27851U);
    msg.setSourceEntity(231U);
    msg.setDestination(46158U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5765936550362926;

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
    msg.setTimeStamp(0.053215346335487745);
    msg.setSource(4579U);
    msg.setSourceEntity(147U);
    msg.setDestination(14340U);
    msg.setDestinationEntity(176U);
    msg.value = 0.8869793204413101;

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
    msg.setTimeStamp(0.6306527638510037);
    msg.setSource(12729U);
    msg.setSourceEntity(79U);
    msg.setDestination(10981U);
    msg.setDestinationEntity(166U);
    msg.value = 0.045359253053721016;

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
    msg.setTimeStamp(0.15659441580367783);
    msg.setSource(55083U);
    msg.setSourceEntity(150U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(64U);
    msg.value = 0.969564854905201;

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
    msg.setTimeStamp(0.023968105619620372);
    msg.setSource(24920U);
    msg.setSourceEntity(141U);
    msg.setDestination(59664U);
    msg.setDestinationEntity(27U);
    msg.value = 0.268875513337423;

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
    msg.setTimeStamp(0.0683564008538019);
    msg.setSource(50001U);
    msg.setSourceEntity(80U);
    msg.setDestination(47548U);
    msg.setDestinationEntity(228U);
    msg.value = 0.19388173641864093;

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
    msg.setTimeStamp(0.6394091733800019);
    msg.setSource(40458U);
    msg.setSourceEntity(79U);
    msg.setDestination(27862U);
    msg.setDestinationEntity(224U);
    msg.value = 0.998715102902621;

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
    msg.setTimeStamp(0.854790626189303);
    msg.setSource(6212U);
    msg.setSourceEntity(116U);
    msg.setDestination(15774U);
    msg.setDestinationEntity(19U);
    msg.value = 0.10035685148272544;

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
    msg.setTimeStamp(0.2547135776082624);
    msg.setSource(38205U);
    msg.setSourceEntity(180U);
    msg.setDestination(65248U);
    msg.setDestinationEntity(228U);
    msg.id = 86U;
    msg.zoom = 97U;
    msg.action = 138U;

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
    msg.setTimeStamp(0.7306879392668706);
    msg.setSource(11714U);
    msg.setSourceEntity(171U);
    msg.setDestination(60039U);
    msg.setDestinationEntity(191U);
    msg.id = 31U;
    msg.zoom = 70U;
    msg.action = 97U;

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
    msg.setTimeStamp(0.5539696446790148);
    msg.setSource(35684U);
    msg.setSourceEntity(32U);
    msg.setDestination(32256U);
    msg.setDestinationEntity(80U);
    msg.id = 95U;
    msg.zoom = 145U;
    msg.action = 29U;

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
    msg.setTimeStamp(0.2731001807696888);
    msg.setSource(41612U);
    msg.setSourceEntity(32U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(89U);
    msg.id = 16U;
    msg.value = 0.8184288100693227;

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
    msg.setTimeStamp(0.6994513599009777);
    msg.setSource(15568U);
    msg.setSourceEntity(75U);
    msg.setDestination(54341U);
    msg.setDestinationEntity(64U);
    msg.id = 46U;
    msg.value = 0.1587300931209621;

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
    msg.setTimeStamp(0.41015126736485885);
    msg.setSource(62939U);
    msg.setSourceEntity(140U);
    msg.setDestination(38346U);
    msg.setDestinationEntity(198U);
    msg.id = 188U;
    msg.value = 0.3319846008637074;

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
    msg.setTimeStamp(0.7147964328493807);
    msg.setSource(34975U);
    msg.setSourceEntity(77U);
    msg.setDestination(42283U);
    msg.setDestinationEntity(5U);
    msg.id = 127U;
    msg.value = 0.24745226295077138;

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
    msg.setTimeStamp(0.685798544683405);
    msg.setSource(64190U);
    msg.setSourceEntity(16U);
    msg.setDestination(57864U);
    msg.setDestinationEntity(247U);
    msg.id = 239U;
    msg.value = 0.9228410331050041;

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
    msg.setTimeStamp(0.4107178428272906);
    msg.setSource(2337U);
    msg.setSourceEntity(102U);
    msg.setDestination(19004U);
    msg.setDestinationEntity(227U);
    msg.id = 181U;
    msg.value = 0.4681743781905495;

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
    msg.setTimeStamp(0.8148150571188827);
    msg.setSource(35777U);
    msg.setSourceEntity(126U);
    msg.setDestination(12342U);
    msg.setDestinationEntity(117U);
    msg.id = 147U;
    msg.angle = 0.5740259934676367;

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
    msg.setTimeStamp(0.48076267491412694);
    msg.setSource(65452U);
    msg.setSourceEntity(161U);
    msg.setDestination(33726U);
    msg.setDestinationEntity(36U);
    msg.id = 144U;
    msg.angle = 0.017371968560551232;

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
    msg.setTimeStamp(0.40602376517329375);
    msg.setSource(7273U);
    msg.setSourceEntity(63U);
    msg.setDestination(1984U);
    msg.setDestinationEntity(147U);
    msg.id = 57U;
    msg.angle = 0.20192432240621516;

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
    msg.setTimeStamp(0.12997553067197498);
    msg.setSource(7825U);
    msg.setSourceEntity(232U);
    msg.setDestination(16319U);
    msg.setDestinationEntity(130U);
    msg.op = 53U;
    msg.actions.assign("VIWWMNQDCQEKSPZCIBYIXRIYRKHPXCFHJVOJEUHTGOGFLTYGHXSSKHRQBBANNPKCIBGZZCTSAREYENOBWZYRJXVJDHDEEZGABJECEBYCNWGPUWQODTVXPRXALWMUYKABOYTWZNITMTKDKXFOQABMUHQJZHJSINPDFLKZFFXIUGOZUMUWPTJHWMDKGLPFCAVLOSXOFUFFDAYLVDDLCMASXKRNPMLHLPSUITCMMNSWJUGQOGZRQL");

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
    msg.setTimeStamp(0.04327615783969607);
    msg.setSource(35204U);
    msg.setSourceEntity(198U);
    msg.setDestination(19669U);
    msg.setDestinationEntity(167U);
    msg.op = 135U;
    msg.actions.assign("XEIHWWKMJZVRTHVOTQSYUDDITIKSUPOWPPRHGDCXQSURZJMGJHXBNYMPPWCOYSNOWESMVKLGWFOUMBYQUFYFUETPZKGBTDXGHZONGNAORHNDZIGKNUBSWLVRVAXYYGXPUDZQMLIGEHKJCDEAFXCDBIKIKACVSYVOHCZLXOIZSUDFTJFBNPTNWBQVEVUWRFATQLBMCLLPASBJKJATBWAFMEXSRJTCHZZICQRNGJMHRQYDIM");

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
    msg.setTimeStamp(0.8433860110693618);
    msg.setSource(47498U);
    msg.setSourceEntity(81U);
    msg.setDestination(34761U);
    msg.setDestinationEntity(199U);
    msg.op = 177U;
    msg.actions.assign("WWZURKUOREXSNALDIIWPEHJFPUMTCPXWHYMEERARBRQOODXYMS");

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
    msg.setTimeStamp(0.5692424940912328);
    msg.setSource(21228U);
    msg.setSourceEntity(91U);
    msg.setDestination(10108U);
    msg.setDestinationEntity(231U);
    msg.actions.assign("MNNXCGKPEWHPFPCXOTIXPHAEYBTHTWQXYHCAKYAVWQGBAAURYGSUIPXCLKNPQYCRWQMBJCOHPYZARKEFCBXDOONSSEEBADJZKMTNFBJLVGTSLFUQRBSIAYORNQTHHIITDMDQZZUJRRLKVKJDNOMWEDNBN");

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
    msg.setTimeStamp(0.4614436836714665);
    msg.setSource(1569U);
    msg.setSourceEntity(104U);
    msg.setDestination(7448U);
    msg.setDestinationEntity(84U);
    msg.actions.assign("UOTTJCHCGRLWAUOLUOCDWAUGEQEZTZKRRDWNTCXLXMYYUDYIPXDUWXMESQEFQTKUVTXSFZQFHRMPIYPOLMESEFBPXZEGMCLPBYSVNABZEOHBDRZRDJNFIVMYOCDCCILFBZNDNALEWPTPKLMWDKZWVRGQOBG");

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
    msg.setTimeStamp(0.32044683053717804);
    msg.setSource(23849U);
    msg.setSourceEntity(163U);
    msg.setDestination(34801U);
    msg.setDestinationEntity(181U);
    msg.actions.assign("JHLHTPKWUZAASPIXZMCWDURZOAAXOAVALNCHFZGWGSQJPGMVHLRTSXHEVKFADNQMTGMZQYVFEBSMX");

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
    msg.setTimeStamp(0.7219245654041205);
    msg.setSource(26861U);
    msg.setSourceEntity(134U);
    msg.setDestination(21472U);
    msg.setDestinationEntity(99U);
    msg.button = 197U;
    msg.value = 226U;

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
    msg.setTimeStamp(0.36112617020538373);
    msg.setSource(38690U);
    msg.setSourceEntity(161U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(52U);
    msg.button = 101U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.24871591120448566);
    msg.setSource(15814U);
    msg.setSourceEntity(94U);
    msg.setDestination(854U);
    msg.setDestinationEntity(44U);
    msg.button = 26U;
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
    msg.setTimeStamp(0.9910920865523347);
    msg.setSource(32710U);
    msg.setSourceEntity(107U);
    msg.setDestination(42700U);
    msg.setDestinationEntity(183U);
    msg.op = 80U;
    msg.text.assign("XRZOARRVPKELECBTDCWKHIJHJTMHULTTBSPQPIWHEHRAQZHEZFJRCAUAUVNWOUAZQCZUBRPDAZNIVWXCBYGOQCJMBGMNSYYGNOHSEHRTCPS");

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
    msg.setTimeStamp(0.39006598122348646);
    msg.setSource(38332U);
    msg.setSourceEntity(65U);
    msg.setDestination(33383U);
    msg.setDestinationEntity(117U);
    msg.op = 4U;
    msg.text.assign("ZHXVNNYQEGWDJWQTKOWTRS");

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
    msg.setTimeStamp(0.8395379965453876);
    msg.setSource(3266U);
    msg.setSourceEntity(166U);
    msg.setDestination(35435U);
    msg.setDestinationEntity(43U);
    msg.op = 169U;
    msg.text.assign("BVLRZEUUIQLKIEHRNUEKKCEHIIVCTFIQSEHGXDAMXPPOCJSPCNNGWFMYDPHSFUJKGDRZXFYXCMVPMWLYMZUVDEYAGCBHCBDXFTPYJQXRUPTZTLVDHHIVAYRKWGSNLOYWZGVTTKCQREDJHHFYPIRJKBVWBWYESBMKGXTFNLPGBJPMRNSXLQQZZNBHZQOAEWMSLSKNZINUJSOAIBAUSOAQOQBLGDADUAFYTIVUMRGMWOCQETT");

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
    msg.setTimeStamp(0.5284595472856077);
    msg.setSource(39521U);
    msg.setSourceEntity(52U);
    msg.setDestination(35950U);
    msg.setDestinationEntity(130U);
    msg.op = 86U;
    msg.time_remain = 0.6983566062719594;
    msg.sched_time = 0.34175411523085386;

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
    msg.setTimeStamp(0.6651734083619146);
    msg.setSource(34196U);
    msg.setSourceEntity(91U);
    msg.setDestination(29633U);
    msg.setDestinationEntity(89U);
    msg.op = 47U;
    msg.time_remain = 0.9139691198187543;
    msg.sched_time = 0.4942099527812175;

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
    msg.setTimeStamp(0.7608301496565152);
    msg.setSource(59069U);
    msg.setSourceEntity(250U);
    msg.setDestination(60495U);
    msg.setDestinationEntity(220U);
    msg.op = 159U;
    msg.time_remain = 0.3449766383418509;
    msg.sched_time = 0.45599979247386846;

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
    msg.setTimeStamp(0.18917587094339894);
    msg.setSource(9551U);
    msg.setSourceEntity(168U);
    msg.setDestination(47938U);
    msg.setDestinationEntity(71U);
    msg.name.assign("GLVOIJDQVEZWOFARVAWBXEBPLLNHJKZTQESRUBYKTXRQYISGQKCHCXATOPWDZFESLYJDGMRMMXWGHMNMJXRYPBLJXFWLXJKUXDNAQJFQSKFTWVATADIMQHMFDNZUNONGHOTRGEBFURPOAHTDA");
    msg.op = 229U;
    msg.sched_time = 0.5244532104336502;

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
    msg.setTimeStamp(0.5838891629245029);
    msg.setSource(55641U);
    msg.setSourceEntity(173U);
    msg.setDestination(56735U);
    msg.setDestinationEntity(77U);
    msg.name.assign("HZWPUTIGXCHVZEXNSRZLDMUWTSEMSWGKRMPNXKFAKOXKFKLDRCWBFVRBBTXFANFQYKRJSFTDRELZSBACVMPIAVFVIGJAIOGWOCYJSVBZEAXZUWDRPIHWXTGIJLZGSVJMLAWYZPXOPGZBLIFSNUYQUIVABHEDWEOBTFVSTVMWYTQPRQNUSDOUEXJXNGEJQMNEPQLFAHPYHNYMCBCDEKMO");
    msg.op = 233U;
    msg.sched_time = 0.17563548435842458;

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
    msg.setTimeStamp(0.546523201576044);
    msg.setSource(59861U);
    msg.setSourceEntity(139U);
    msg.setDestination(18995U);
    msg.setDestinationEntity(117U);
    msg.name.assign("AQCWSHENDN");
    msg.op = 193U;
    msg.sched_time = 0.27165668694868295;

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
    msg.setTimeStamp(0.5874951735956221);
    msg.setSource(29629U);
    msg.setSourceEntity(8U);
    msg.setDestination(53999U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.8197126901249571);
    msg.setSource(14038U);
    msg.setSourceEntity(165U);
    msg.setDestination(554U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.5622846151797924);
    msg.setSource(5042U);
    msg.setSourceEntity(134U);
    msg.setDestination(36460U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.5014246096911407);
    msg.setSource(55477U);
    msg.setSourceEntity(239U);
    msg.setDestination(42931U);
    msg.setDestinationEntity(76U);
    msg.name.assign("VUSQOBTUYMONEDIGQHBMUJWSUPUFXLYRZQGAOSMHNQGOPHVHCGJLQTKYWPGCIHOPILSWCOSORLTBDGZPTTRKXAJRFKVOKAYSXEXDGGFCDJAHMNQCDKCIIJENZRWMUXWBZDMI");
    msg.state = 63U;

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
    msg.setTimeStamp(0.5620120242163147);
    msg.setSource(62386U);
    msg.setSourceEntity(148U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(178U);
    msg.name.assign("JRPRJPOHZYGQDLGYNZYVIXJDNBKXUGJLHFQXHFKBVIYBSTYIEWSQWGUCXZUAOYMQTYEWPMCDSIEDOPCKAPVNSMJTCVTGALLQKD");
    msg.state = 118U;

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
    msg.setTimeStamp(0.022207000498128848);
    msg.setSource(38697U);
    msg.setSourceEntity(95U);
    msg.setDestination(50918U);
    msg.setDestinationEntity(96U);
    msg.name.assign("WDCUIXKHNYRLLVRDRTIBZ");
    msg.state = 233U;

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
    msg.setTimeStamp(0.5737680650232148);
    msg.setSource(5505U);
    msg.setSourceEntity(91U);
    msg.setDestination(45854U);
    msg.setDestinationEntity(171U);
    msg.name.assign("ZJPWMYXYIQOBIIBWXNFBASVRTGLKEUKD");
    msg.value = 11U;

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
    msg.setTimeStamp(0.8882131621878644);
    msg.setSource(19367U);
    msg.setSourceEntity(167U);
    msg.setDestination(54845U);
    msg.setDestinationEntity(242U);
    msg.name.assign("HCTFXMPOCNVLPDETFVKCDJELBFKYHYIUYLEEIKFAIAZBHTHSUYTVNOYFKRQGENYOATKPQRLMHNZCOSXCDIEHKATRJDNOGCZMHOJHARFQMKQQRCSMRFOZLAWPAYGWWNXKDSEUOFGWIJAFICUXWIDGXVLEXLXYWNVTMXRANHJRZPPVJTTEQCFMUZSVPGLZMBBJDYUBVILJGKXJPEL");
    msg.value = 147U;

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
    msg.setTimeStamp(0.8861705395839226);
    msg.setSource(62472U);
    msg.setSourceEntity(167U);
    msg.setDestination(64411U);
    msg.setDestinationEntity(69U);
    msg.name.assign("ORTCESTQAGQDWUAMUXPTSELZMKRRAIKAT");
    msg.value = 180U;

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
    msg.setTimeStamp(0.1718251574952282);
    msg.setSource(31392U);
    msg.setSourceEntity(2U);
    msg.setDestination(56019U);
    msg.setDestinationEntity(200U);
    msg.name.assign("DECDODQWTLJVIGYBSMPBZLKIKMZNXMAFATQIUQYCBFXFKOWXPVBHEEIECZBXACJISHVJGDS");

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
    msg.setTimeStamp(0.13207171637996296);
    msg.setSource(13221U);
    msg.setSourceEntity(244U);
    msg.setDestination(30037U);
    msg.setDestinationEntity(71U);
    msg.name.assign("YCQFVHHLUAXWVPHVSJRMRJYESQKKFRGEPNBTUKBZOHYSTEMVMBGZROZULDCLWWLTZAJAMBFFALQMFRCSEZYNWSUJDDIERPCBLWTHTWMXFEXIXRINJIGQDPEWQVAVO");

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
    msg.setTimeStamp(0.13248484390329007);
    msg.setSource(61521U);
    msg.setSourceEntity(87U);
    msg.setDestination(33003U);
    msg.setDestinationEntity(177U);
    msg.name.assign("OQAWIIKXXBRXWOUTTBTKEXQMCQKBVBLFWUMCZWNBYZURAKMKNNYTLRFASAXHFHBLYRDVBSZEJXRYBDFWOUTAGOEDKTBCTPZGKGDSUUSYBGIQOTEACDSJYHPENMFPRDILMVAGCZXOOZPEHKNFWYEPHJQVCJVNCCFKIRPIIQOLGSGVVARNEFJCXZEJZPHMSSGVDYPHYKPIFZGIFQUUVEGZWLSJNLAQVUWIJLRNXMMWDOLPJSCQ");

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
    msg.setTimeStamp(0.6820811952833317);
    msg.setSource(54814U);
    msg.setSourceEntity(43U);
    msg.setDestination(5320U);
    msg.setDestinationEntity(175U);
    msg.name.assign("USRQNEGNZWFAOGMGLJUAFXRJHVZBXIQLGFMWVSRKNSXREEBZWPHGBUTIZFEZEPMDLWYRJNMRMAQIYIZJUQNVOOETWCTYHKBSGESIHPINUUZWXDVDXVADMBAPCQKSYHMMPIRTVJTJBTCQQDCAIZHMYZZKJ");
    msg.value = 125U;

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
    msg.setTimeStamp(0.5225891453435041);
    msg.setSource(15199U);
    msg.setSourceEntity(211U);
    msg.setDestination(16810U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XMELJDRANMAQSONZQNTLZTLJEBFMNTPDXSLRHVBKWKHUCFSUXGSQYMZRAFSDIKHYBOGUQBVXCTUCKEEYMTOAUTFOOFNTPOWIMSXEQYRKBZRPIVFZPQLECGQAOQHIOGSVMPVIRUGJRIZEWIPEWDUEBRZVPXFNBHLSVQZNWCGCMDTKWDCJVKAVFLXLPH");
    msg.value = 250U;

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
    msg.setTimeStamp(0.7993313738209313);
    msg.setSource(13290U);
    msg.setSourceEntity(12U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DGAGIEAVKPTTGCDDWCWMPVSVGBXURLVLBTQZCTZDKEUIFOHSACHKQSKCJZMWYZIOLDIZOPNFY");
    msg.value = 241U;

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
    msg.setTimeStamp(0.5920251625031924);
    msg.setSource(4254U);
    msg.setSourceEntity(235U);
    msg.setDestination(39137U);
    msg.setDestinationEntity(168U);
    msg.id = 134U;
    msg.period = 1348896385U;
    msg.duty_cycle = 2843068011U;

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
    msg.setTimeStamp(0.12672704870906126);
    msg.setSource(1860U);
    msg.setSourceEntity(250U);
    msg.setDestination(37U);
    msg.setDestinationEntity(151U);
    msg.id = 243U;
    msg.period = 682502206U;
    msg.duty_cycle = 4153230340U;

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
    msg.setTimeStamp(0.6083765864595084);
    msg.setSource(16440U);
    msg.setSourceEntity(109U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(104U);
    msg.id = 140U;
    msg.period = 3174892180U;
    msg.duty_cycle = 775513233U;

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
    msg.setTimeStamp(0.16101957651894627);
    msg.setSource(14041U);
    msg.setSourceEntity(16U);
    msg.setDestination(42801U);
    msg.setDestinationEntity(234U);
    msg.id = 158U;
    msg.period = 3623543366U;
    msg.duty_cycle = 1977982747U;

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
    msg.setTimeStamp(0.45629774201099005);
    msg.setSource(58672U);
    msg.setSourceEntity(101U);
    msg.setDestination(57757U);
    msg.setDestinationEntity(170U);
    msg.id = 238U;
    msg.period = 1485029115U;
    msg.duty_cycle = 4121162204U;

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
    msg.setTimeStamp(0.47067389081676014);
    msg.setSource(11361U);
    msg.setSourceEntity(4U);
    msg.setDestination(23333U);
    msg.setDestinationEntity(107U);
    msg.id = 230U;
    msg.period = 1533915184U;
    msg.duty_cycle = 4269233343U;

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
    msg.setTimeStamp(0.2978625376065789);
    msg.setSource(40962U);
    msg.setSourceEntity(43U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.735484842805228;
    msg.lon = 0.7881699637790494;
    msg.height = 0.15768230858846477;
    msg.x = 0.041451163971207516;
    msg.y = 0.5483722936451609;
    msg.z = 0.09117022309729528;
    msg.phi = 0.9725466713483514;
    msg.theta = 0.4166363494431712;
    msg.psi = 0.6628989661192028;
    msg.u = 0.612008873499082;
    msg.v = 0.8930259182906606;
    msg.w = 0.5233049326230602;
    msg.vx = 0.8612399847437624;
    msg.vy = 0.8991045235831184;
    msg.vz = 0.3493363219007328;
    msg.p = 0.2551883319236633;
    msg.q = 0.3943018714037084;
    msg.r = 0.16411420267301768;
    msg.depth = 0.03835894113846883;
    msg.alt = 0.39136782162384187;

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
    msg.setTimeStamp(0.1721119176284862);
    msg.setSource(10232U);
    msg.setSourceEntity(213U);
    msg.setDestination(42455U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.055799706582896236;
    msg.lon = 0.6953838354513913;
    msg.height = 0.06520205461133155;
    msg.x = 0.28796194044825985;
    msg.y = 0.6868725300260803;
    msg.z = 0.7682186221952039;
    msg.phi = 0.6843694976327694;
    msg.theta = 0.12899095328804666;
    msg.psi = 0.919283145630941;
    msg.u = 0.006534023009888257;
    msg.v = 0.8661616189350342;
    msg.w = 0.9511916320897339;
    msg.vx = 0.845595419311241;
    msg.vy = 0.7523624902123974;
    msg.vz = 0.2511522842014102;
    msg.p = 0.38495912288385103;
    msg.q = 0.2290996059524376;
    msg.r = 0.5691684352817966;
    msg.depth = 0.4757496885514817;
    msg.alt = 0.3828543921090599;

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
    msg.setTimeStamp(0.3221381920919365);
    msg.setSource(13509U);
    msg.setSourceEntity(204U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.768614414376788;
    msg.lon = 0.8110407323218839;
    msg.height = 0.526338498180852;
    msg.x = 0.09429010464061749;
    msg.y = 0.6754409229480468;
    msg.z = 0.2506193958575226;
    msg.phi = 0.6838566352328617;
    msg.theta = 0.01783355900207495;
    msg.psi = 0.752088137522217;
    msg.u = 0.7787683650975017;
    msg.v = 0.6365995572147963;
    msg.w = 0.8033157806697153;
    msg.vx = 0.1049812450851576;
    msg.vy = 0.042041234006779615;
    msg.vz = 0.24153825014067754;
    msg.p = 0.8964103740309662;
    msg.q = 0.09386561187440745;
    msg.r = 0.38808524836316394;
    msg.depth = 0.7250617973320459;
    msg.alt = 0.22191444808353245;

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
    msg.setTimeStamp(0.0653445772033997);
    msg.setSource(46441U);
    msg.setSourceEntity(49U);
    msg.setDestination(22358U);
    msg.setDestinationEntity(46U);
    msg.x = 0.23475509888014956;
    msg.y = 0.4403135052221231;
    msg.z = 0.4143842892167572;

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
    msg.setTimeStamp(0.18143779629154766);
    msg.setSource(36147U);
    msg.setSourceEntity(189U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(7U);
    msg.x = 0.7915376421386807;
    msg.y = 0.4968678352876186;
    msg.z = 0.6375791561032444;

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
    msg.setTimeStamp(0.650215057293715);
    msg.setSource(30183U);
    msg.setSourceEntity(69U);
    msg.setDestination(40843U);
    msg.setDestinationEntity(164U);
    msg.x = 0.49267030952801916;
    msg.y = 0.6077555910933181;
    msg.z = 0.3749944012074772;

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
    msg.setTimeStamp(0.4343313774794145);
    msg.setSource(7782U);
    msg.setSourceEntity(160U);
    msg.setDestination(10421U);
    msg.setDestinationEntity(230U);
    msg.value = 0.22940530810598214;

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
    msg.setTimeStamp(0.5356818985077624);
    msg.setSource(29968U);
    msg.setSourceEntity(123U);
    msg.setDestination(47657U);
    msg.setDestinationEntity(21U);
    msg.value = 0.6974566001687583;

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
    msg.setTimeStamp(0.029634196612404184);
    msg.setSource(47065U);
    msg.setSourceEntity(25U);
    msg.setDestination(24647U);
    msg.setDestinationEntity(91U);
    msg.value = 0.06691263772826583;

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
    msg.setTimeStamp(0.5327219681349402);
    msg.setSource(54830U);
    msg.setSourceEntity(168U);
    msg.setDestination(47035U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9880729605489278;

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
    msg.setTimeStamp(0.4267469942618919);
    msg.setSource(30946U);
    msg.setSourceEntity(109U);
    msg.setDestination(42005U);
    msg.setDestinationEntity(165U);
    msg.value = 0.2232650637421436;

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
    msg.setTimeStamp(0.6419988381952257);
    msg.setSource(12356U);
    msg.setSourceEntity(28U);
    msg.setDestination(36979U);
    msg.setDestinationEntity(47U);
    msg.value = 0.615388455329494;

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
    msg.setTimeStamp(0.22123675689340472);
    msg.setSource(54785U);
    msg.setSourceEntity(244U);
    msg.setDestination(28739U);
    msg.setDestinationEntity(186U);
    msg.x = 0.7744832419060245;
    msg.y = 0.01789014626102392;
    msg.z = 0.9265584574495119;
    msg.phi = 0.8721893282161759;
    msg.theta = 0.6912021789805036;
    msg.psi = 0.0764000262161314;
    msg.p = 0.8317642116707665;
    msg.q = 0.3495466740480051;
    msg.r = 0.8065096688654039;
    msg.u = 0.20118187898092488;
    msg.v = 0.8402165722785341;
    msg.w = 0.9082866972486436;
    msg.bias_psi = 0.9579988797401742;
    msg.bias_r = 0.6643568711832962;

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
    msg.setTimeStamp(0.6113108106548168);
    msg.setSource(63520U);
    msg.setSourceEntity(124U);
    msg.setDestination(47230U);
    msg.setDestinationEntity(118U);
    msg.x = 0.528032570519384;
    msg.y = 0.7557091732441586;
    msg.z = 0.5323924492223292;
    msg.phi = 0.4497183835192988;
    msg.theta = 0.10299504105238111;
    msg.psi = 0.9197707363891092;
    msg.p = 0.3803374912479759;
    msg.q = 0.8718776360388633;
    msg.r = 0.4530198368893281;
    msg.u = 0.4283314767324701;
    msg.v = 0.7631805891202995;
    msg.w = 0.624333495410266;
    msg.bias_psi = 0.6884349304209643;
    msg.bias_r = 0.9932146934206897;

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
    msg.setTimeStamp(0.6097456196918176);
    msg.setSource(21505U);
    msg.setSourceEntity(84U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(109U);
    msg.x = 0.12843514240527265;
    msg.y = 0.10629976850119482;
    msg.z = 0.6757828603934286;
    msg.phi = 0.3824722697707419;
    msg.theta = 0.4667595765156368;
    msg.psi = 0.08762161366744126;
    msg.p = 0.09738983910760779;
    msg.q = 0.12951982108661064;
    msg.r = 0.9754901503760963;
    msg.u = 0.842247836488816;
    msg.v = 0.1809842324551697;
    msg.w = 0.20175990160637114;
    msg.bias_psi = 0.8250329726274794;
    msg.bias_r = 0.42825862544549453;

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
    msg.setTimeStamp(0.6500088346616326);
    msg.setSource(48616U);
    msg.setSourceEntity(243U);
    msg.setDestination(63448U);
    msg.setDestinationEntity(95U);
    msg.bias_psi = 0.17468840569362865;
    msg.bias_r = 0.623210731645819;
    msg.cog = 0.7896317627003925;
    msg.cyaw = 0.5766506226671874;
    msg.lbl_rej_level = 0.39681969607874723;
    msg.gps_rej_level = 0.39866352614564327;
    msg.custom_x = 0.6676012200607461;
    msg.custom_y = 0.23271097209248526;
    msg.custom_z = 0.8538764762777195;

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
    msg.setTimeStamp(0.011173614641864837);
    msg.setSource(10236U);
    msg.setSourceEntity(130U);
    msg.setDestination(31685U);
    msg.setDestinationEntity(136U);
    msg.bias_psi = 0.1375738292869333;
    msg.bias_r = 0.8879390777300233;
    msg.cog = 0.42303587883773075;
    msg.cyaw = 0.6099997028047137;
    msg.lbl_rej_level = 0.2120472405718251;
    msg.gps_rej_level = 0.7776226435764452;
    msg.custom_x = 0.27199142671858845;
    msg.custom_y = 0.3703477676872724;
    msg.custom_z = 0.008537613260995447;

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
    msg.setTimeStamp(0.9112573551235998);
    msg.setSource(33249U);
    msg.setSourceEntity(244U);
    msg.setDestination(60697U);
    msg.setDestinationEntity(55U);
    msg.bias_psi = 0.727173118601461;
    msg.bias_r = 0.8081505965967596;
    msg.cog = 0.9147346579003172;
    msg.cyaw = 0.9493476839551092;
    msg.lbl_rej_level = 0.2852608320963024;
    msg.gps_rej_level = 0.4845616180700316;
    msg.custom_x = 0.5526623852109809;
    msg.custom_y = 0.6580902428541332;
    msg.custom_z = 0.31991271572663726;

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
    msg.setTimeStamp(0.17769587760203576);
    msg.setSource(3848U);
    msg.setSourceEntity(10U);
    msg.setDestination(11323U);
    msg.setDestinationEntity(199U);
    msg.utc_time = 0.2070527271445889;
    msg.reason = 219U;

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
    msg.setTimeStamp(0.4306121569355069);
    msg.setSource(7635U);
    msg.setSourceEntity(109U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(253U);
    msg.utc_time = 0.8619124200509616;
    msg.reason = 177U;

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
    msg.setTimeStamp(0.6053928978419542);
    msg.setSource(60469U);
    msg.setSourceEntity(128U);
    msg.setDestination(59296U);
    msg.setDestinationEntity(148U);
    msg.utc_time = 0.5924882846735819;
    msg.reason = 70U;

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
    msg.setTimeStamp(0.8494377619139826);
    msg.setSource(41902U);
    msg.setSourceEntity(135U);
    msg.setDestination(50369U);
    msg.setDestinationEntity(248U);
    msg.id = 248U;
    msg.range = 0.08865307258236443;
    msg.acceptance = 70U;

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
    msg.setTimeStamp(0.5619495824845426);
    msg.setSource(20854U);
    msg.setSourceEntity(93U);
    msg.setDestination(32455U);
    msg.setDestinationEntity(100U);
    msg.id = 7U;
    msg.range = 0.34246329003773146;
    msg.acceptance = 213U;

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
    msg.setTimeStamp(0.20120822244672132);
    msg.setSource(19962U);
    msg.setSourceEntity(81U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(211U);
    msg.id = 94U;
    msg.range = 0.799279208225473;
    msg.acceptance = 141U;

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
    msg.setTimeStamp(0.05562344586523704);
    msg.setSource(10261U);
    msg.setSourceEntity(19U);
    msg.setDestination(2243U);
    msg.setDestinationEntity(76U);
    msg.type = 187U;
    msg.reason = 82U;
    msg.value = 0.5238816563697944;
    msg.timestep = 0.8648923429309933;

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
    msg.setTimeStamp(0.49077521605183194);
    msg.setSource(2710U);
    msg.setSourceEntity(224U);
    msg.setDestination(32812U);
    msg.setDestinationEntity(202U);
    msg.type = 107U;
    msg.reason = 85U;
    msg.value = 0.5422626732417786;
    msg.timestep = 0.09885641323312755;

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
    msg.setTimeStamp(0.05632646283675402);
    msg.setSource(58384U);
    msg.setSourceEntity(148U);
    msg.setDestination(10713U);
    msg.setDestinationEntity(9U);
    msg.type = 3U;
    msg.reason = 51U;
    msg.value = 0.04241246346789862;
    msg.timestep = 0.8298401737573083;

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
    msg.setTimeStamp(0.9332988104729801);
    msg.setSource(47921U);
    msg.setSourceEntity(245U);
    msg.setDestination(28665U);
    msg.setDestinationEntity(89U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WSLHDCYMZRRWJRQUJEWHHZGUQGLCNEOUFPDENGDCDTORRHFSIVDGOUSHLNSAQNPJYBXVOKMUSWMCFIYLMAYYRUXTUFETAXJEVJLCGDTERIOMCWEQACRRPZIDJLZKQOEPZMSXWKDAMKJZCQOBMQLIHSANDZPZIVXHKPCBGIQI");
    tmp_msg_0.lat = 0.16586919580761728;
    tmp_msg_0.lon = 0.12858769825782967;
    tmp_msg_0.depth = 0.43976281257765215;
    tmp_msg_0.query_channel = 163U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 21U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3291168257423722;
    msg.y = 0.38967138898807774;
    msg.var_x = 0.274976971025236;
    msg.var_y = 0.12395325729817563;
    msg.distance = 0.9049089890484903;

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
    msg.setTimeStamp(0.21173505785841829);
    msg.setSource(62044U);
    msg.setSourceEntity(209U);
    msg.setDestination(38306U);
    msg.setDestinationEntity(74U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TTJIDMQHHLBDRULJEESIERUGBVWZIOUCCGWQLZMCTWLFWV");
    tmp_msg_0.lat = 0.2563100423636617;
    tmp_msg_0.lon = 0.597917925948924;
    tmp_msg_0.depth = 0.7636100728599892;
    tmp_msg_0.query_channel = 95U;
    tmp_msg_0.reply_channel = 37U;
    tmp_msg_0.transponder_delay = 240U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.46627156261706093;
    msg.y = 0.8572633461602984;
    msg.var_x = 0.08384579082950672;
    msg.var_y = 0.7386639362859585;
    msg.distance = 0.21905670013905143;

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
    msg.setTimeStamp(0.19686964308820631);
    msg.setSource(5079U);
    msg.setSourceEntity(117U);
    msg.setDestination(60689U);
    msg.setDestinationEntity(146U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EOHEYYFVBZRJATRKZFMGTIJSHUOO");
    tmp_msg_0.lat = 0.7479109032948608;
    tmp_msg_0.lon = 0.18033645985384916;
    tmp_msg_0.depth = 0.8648389892788386;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 50U;
    tmp_msg_0.transponder_delay = 186U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.016693900232116254;
    msg.y = 0.7350553720168147;
    msg.var_x = 0.3436181853402098;
    msg.var_y = 0.5952264836876003;
    msg.distance = 0.012060757204156447;

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
    msg.setTimeStamp(0.934127487040066);
    msg.setSource(6917U);
    msg.setSourceEntity(114U);
    msg.setDestination(47741U);
    msg.setDestinationEntity(167U);
    msg.state = 50U;

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
    msg.setTimeStamp(0.33081310147696885);
    msg.setSource(51780U);
    msg.setSourceEntity(162U);
    msg.setDestination(43112U);
    msg.setDestinationEntity(158U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.4132841504881025);
    msg.setSource(38932U);
    msg.setSourceEntity(91U);
    msg.setDestination(65299U);
    msg.setDestinationEntity(138U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.3892468784304115);
    msg.setSource(31876U);
    msg.setSourceEntity(25U);
    msg.setDestination(32755U);
    msg.setDestinationEntity(235U);
    msg.x = 0.2687648199005781;
    msg.y = 0.6137861538249842;
    msg.z = 0.9793783324460167;

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
    msg.setTimeStamp(0.6194142150642039);
    msg.setSource(64595U);
    msg.setSourceEntity(30U);
    msg.setDestination(33769U);
    msg.setDestinationEntity(98U);
    msg.x = 0.5242390238633249;
    msg.y = 0.5987043212067318;
    msg.z = 0.3466578629128717;

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
    msg.setTimeStamp(0.0036962846968670027);
    msg.setSource(35079U);
    msg.setSourceEntity(136U);
    msg.setDestination(34845U);
    msg.setDestinationEntity(117U);
    msg.x = 0.754335516094589;
    msg.y = 0.05889476785308523;
    msg.z = 0.7833904098323529;

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
    msg.setTimeStamp(0.060421323812982264);
    msg.setSource(16015U);
    msg.setSourceEntity(64U);
    msg.setDestination(47936U);
    msg.setDestinationEntity(77U);
    msg.value = 0.20765354673460357;

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
    msg.setTimeStamp(0.7561234969890861);
    msg.setSource(64167U);
    msg.setSourceEntity(4U);
    msg.setDestination(55165U);
    msg.setDestinationEntity(112U);
    msg.value = 0.1072573709003779;

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
    msg.setTimeStamp(0.7877443381805058);
    msg.setSource(49377U);
    msg.setSourceEntity(7U);
    msg.setDestination(40541U);
    msg.setDestinationEntity(155U);
    msg.value = 0.6935502947463476;

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
    msg.setTimeStamp(0.6466906986497349);
    msg.setSource(54895U);
    msg.setSourceEntity(203U);
    msg.setDestination(56049U);
    msg.setDestinationEntity(199U);
    msg.value = 0.4592960947242779;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.8042298727918967);
    msg.setSource(22753U);
    msg.setSourceEntity(224U);
    msg.setDestination(63322U);
    msg.setDestinationEntity(47U);
    msg.value = 0.44808125766934437;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.26229334404403604);
    msg.setSource(22702U);
    msg.setSourceEntity(1U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(97U);
    msg.value = 0.019624231664032044;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.6186182605461862);
    msg.setSource(11545U);
    msg.setSourceEntity(73U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(57U);
    msg.value = 0.7820360742111157;
    msg.speed_units = 165U;

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
    msg.setTimeStamp(0.7754200352962157);
    msg.setSource(13282U);
    msg.setSourceEntity(226U);
    msg.setDestination(37833U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9034096193428632;
    msg.speed_units = 164U;

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
    msg.setTimeStamp(0.7945383539832747);
    msg.setSource(5086U);
    msg.setSourceEntity(72U);
    msg.setDestination(4573U);
    msg.setDestinationEntity(161U);
    msg.value = 0.08701737800316678;
    msg.speed_units = 224U;

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
    msg.setTimeStamp(0.09135867920041485);
    msg.setSource(31117U);
    msg.setSourceEntity(101U);
    msg.setDestination(25726U);
    msg.setDestinationEntity(47U);
    msg.value = 0.11947859155511786;

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
    msg.setTimeStamp(0.6100137611432316);
    msg.setSource(35881U);
    msg.setSourceEntity(68U);
    msg.setDestination(5581U);
    msg.setDestinationEntity(53U);
    msg.value = 0.8531145339160352;

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
    msg.setTimeStamp(0.6713564305533202);
    msg.setSource(38379U);
    msg.setSourceEntity(34U);
    msg.setDestination(4839U);
    msg.setDestinationEntity(185U);
    msg.value = 0.04775555922087438;

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
    msg.setTimeStamp(0.981800144124268);
    msg.setSource(44281U);
    msg.setSourceEntity(23U);
    msg.setDestination(26259U);
    msg.setDestinationEntity(254U);
    msg.value = 0.10553312015907235;

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
    msg.setTimeStamp(0.5157558989385301);
    msg.setSource(4673U);
    msg.setSourceEntity(85U);
    msg.setDestination(10137U);
    msg.setDestinationEntity(59U);
    msg.value = 0.8917122328800343;

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
    msg.setTimeStamp(0.3639074993491538);
    msg.setSource(32006U);
    msg.setSourceEntity(7U);
    msg.setDestination(24326U);
    msg.setDestinationEntity(19U);
    msg.value = 0.04646235583812841;

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
    msg.setTimeStamp(0.3394622512161528);
    msg.setSource(15024U);
    msg.setSourceEntity(71U);
    msg.setDestination(23186U);
    msg.setDestinationEntity(219U);
    msg.value = 0.22545311531309775;

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
    msg.setTimeStamp(0.24531880101534909);
    msg.setSource(21377U);
    msg.setSourceEntity(43U);
    msg.setDestination(55914U);
    msg.setDestinationEntity(125U);
    msg.value = 0.07230712027711017;

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
    msg.setTimeStamp(0.4373004318533944);
    msg.setSource(29510U);
    msg.setSourceEntity(103U);
    msg.setDestination(28944U);
    msg.setDestinationEntity(88U);
    msg.value = 0.14520113701552095;

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
    msg.setTimeStamp(0.6954581961683317);
    msg.setSource(51595U);
    msg.setSourceEntity(38U);
    msg.setDestination(14405U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 2183333216U;
    msg.start_lat = 0.7216931467041946;
    msg.start_lon = 0.1008676171314088;
    msg.start_z = 0.9993135073401871;
    msg.start_z_units = 94U;
    msg.end_lat = 0.9857421504166194;
    msg.end_lon = 0.848198176070176;
    msg.end_z = 0.4449060482108852;
    msg.end_z_units = 17U;
    msg.speed = 0.8023313308307418;
    msg.speed_units = 200U;
    msg.lradius = 0.7778613340175945;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.35653935805099024);
    msg.setSource(49074U);
    msg.setSourceEntity(221U);
    msg.setDestination(39289U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 1939435349U;
    msg.start_lat = 0.9464671781885432;
    msg.start_lon = 0.13585698009132063;
    msg.start_z = 0.3783729638981089;
    msg.start_z_units = 21U;
    msg.end_lat = 0.6904668332342682;
    msg.end_lon = 0.7233514931547139;
    msg.end_z = 0.6604827593412077;
    msg.end_z_units = 95U;
    msg.speed = 0.2802084137733897;
    msg.speed_units = 101U;
    msg.lradius = 0.6531950879172921;
    msg.flags = 116U;

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
    msg.setTimeStamp(0.768309391795844);
    msg.setSource(1200U);
    msg.setSourceEntity(175U);
    msg.setDestination(64666U);
    msg.setDestinationEntity(101U);
    msg.path_ref = 113870671U;
    msg.start_lat = 0.3047719781023903;
    msg.start_lon = 0.8338656621772325;
    msg.start_z = 0.06887273583944054;
    msg.start_z_units = 149U;
    msg.end_lat = 0.8552939314987034;
    msg.end_lon = 0.7398072899502376;
    msg.end_z = 0.7480032593576601;
    msg.end_z_units = 32U;
    msg.speed = 0.8781397973147284;
    msg.speed_units = 222U;
    msg.lradius = 0.7419182382848658;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.681523880234083);
    msg.setSource(58307U);
    msg.setSourceEntity(201U);
    msg.setDestination(21492U);
    msg.setDestinationEntity(166U);
    msg.x = 0.5697998917599756;
    msg.y = 0.5590643080984865;
    msg.z = 0.2905374408054011;
    msg.k = 0.3757557345450453;
    msg.m = 0.41391030565728715;
    msg.n = 0.5122090705351929;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.6294399484024623);
    msg.setSource(58822U);
    msg.setSourceEntity(64U);
    msg.setDestination(22265U);
    msg.setDestinationEntity(74U);
    msg.x = 0.7689348498063732;
    msg.y = 0.06767383532847193;
    msg.z = 0.5901791622125024;
    msg.k = 0.32270453263172316;
    msg.m = 0.24356880920437385;
    msg.n = 0.6540406907248137;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.7258580909456482);
    msg.setSource(56461U);
    msg.setSourceEntity(23U);
    msg.setDestination(51778U);
    msg.setDestinationEntity(213U);
    msg.x = 0.4459640889570716;
    msg.y = 0.01757744015953011;
    msg.z = 0.27988868225194263;
    msg.k = 0.2393494867477507;
    msg.m = 0.4606747856192115;
    msg.n = 0.09024784388690177;
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
    msg.setTimeStamp(0.9044538807436071);
    msg.setSource(13446U);
    msg.setSourceEntity(108U);
    msg.setDestination(30702U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8569640220136056;

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
    msg.setTimeStamp(0.06871293024299874);
    msg.setSource(32544U);
    msg.setSourceEntity(156U);
    msg.setDestination(58661U);
    msg.setDestinationEntity(137U);
    msg.value = 0.7213709414095038;

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
    msg.setTimeStamp(0.9138575894463876);
    msg.setSource(42569U);
    msg.setSourceEntity(216U);
    msg.setDestination(4138U);
    msg.setDestinationEntity(32U);
    msg.value = 0.08464850309549032;

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
    msg.setTimeStamp(0.7438993270521231);
    msg.setSource(12914U);
    msg.setSourceEntity(210U);
    msg.setDestination(57634U);
    msg.setDestinationEntity(62U);
    msg.u = 0.9551907926864702;
    msg.v = 0.7045170383028646;
    msg.w = 0.8742525614632009;
    msg.p = 0.26663992103512857;
    msg.q = 0.819326880640388;
    msg.r = 0.6451567851105712;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.3759430270368469);
    msg.setSource(7353U);
    msg.setSourceEntity(193U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(116U);
    msg.u = 0.8086163385248437;
    msg.v = 0.11612772012546246;
    msg.w = 0.47049760302959276;
    msg.p = 0.9843933868162832;
    msg.q = 0.1577316084952315;
    msg.r = 0.9189609283075633;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.7036908157460605);
    msg.setSource(33417U);
    msg.setSourceEntity(21U);
    msg.setDestination(49192U);
    msg.setDestinationEntity(245U);
    msg.u = 0.529527137640365;
    msg.v = 0.8029146581513067;
    msg.w = 0.5176392848550039;
    msg.p = 0.6516477743956485;
    msg.q = 0.9049057909970087;
    msg.r = 0.2858985591378155;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.49719048296053436);
    msg.setSource(49485U);
    msg.setSourceEntity(26U);
    msg.setDestination(63998U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 551655228U;
    msg.start_lat = 0.4684050888494855;
    msg.start_lon = 0.3295840296846646;
    msg.start_z = 0.752844776128444;
    msg.start_z_units = 71U;
    msg.end_lat = 0.829545590819526;
    msg.end_lon = 0.4904625383943221;
    msg.end_z = 0.5844835206213116;
    msg.end_z_units = 190U;
    msg.lradius = 0.4797852449569344;
    msg.flags = 202U;
    msg.x = 0.4936951829672722;
    msg.y = 0.11314824251931066;
    msg.z = 0.8528102687693232;
    msg.vx = 0.8007957458242505;
    msg.vy = 0.7410677953545436;
    msg.vz = 0.43599193195723396;
    msg.course_error = 0.8394012717063053;
    msg.eta = 53432U;

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
    msg.setTimeStamp(0.1745528791808295);
    msg.setSource(55814U);
    msg.setSourceEntity(6U);
    msg.setDestination(32877U);
    msg.setDestinationEntity(58U);
    msg.path_ref = 1710252544U;
    msg.start_lat = 0.02011613409477153;
    msg.start_lon = 0.3381650498776626;
    msg.start_z = 0.34687464787602384;
    msg.start_z_units = 42U;
    msg.end_lat = 0.7964107428623537;
    msg.end_lon = 0.8787064141034719;
    msg.end_z = 0.8479619007352304;
    msg.end_z_units = 190U;
    msg.lradius = 0.7320485449072459;
    msg.flags = 18U;
    msg.x = 0.535683948049428;
    msg.y = 0.20068931638384868;
    msg.z = 0.7537667608850057;
    msg.vx = 0.6002046321712493;
    msg.vy = 0.8614970773486653;
    msg.vz = 0.5240722083578849;
    msg.course_error = 0.83859784933011;
    msg.eta = 37352U;

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
    msg.setTimeStamp(0.5373358767803794);
    msg.setSource(32109U);
    msg.setSourceEntity(17U);
    msg.setDestination(43130U);
    msg.setDestinationEntity(125U);
    msg.path_ref = 2803616743U;
    msg.start_lat = 0.45924241673454247;
    msg.start_lon = 0.6015988594817546;
    msg.start_z = 0.38484263655491124;
    msg.start_z_units = 17U;
    msg.end_lat = 0.5530440556344544;
    msg.end_lon = 0.8972314400719318;
    msg.end_z = 0.2678432827420091;
    msg.end_z_units = 3U;
    msg.lradius = 0.13275731952041558;
    msg.flags = 227U;
    msg.x = 0.4566731392135166;
    msg.y = 0.48571617201200623;
    msg.z = 0.9608121586829214;
    msg.vx = 0.7725338524039458;
    msg.vy = 0.7054014443999345;
    msg.vz = 0.8960638298471817;
    msg.course_error = 0.07047129750918468;
    msg.eta = 61753U;

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
    msg.setTimeStamp(0.633080935142267);
    msg.setSource(21179U);
    msg.setSourceEntity(57U);
    msg.setDestination(40381U);
    msg.setDestinationEntity(118U);
    msg.k = 0.5892540104598623;
    msg.m = 0.1314530009588203;
    msg.n = 0.6525125918570095;

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
    msg.setTimeStamp(0.389797101992873);
    msg.setSource(6396U);
    msg.setSourceEntity(50U);
    msg.setDestination(39809U);
    msg.setDestinationEntity(126U);
    msg.k = 0.4995473149711376;
    msg.m = 0.798955759695192;
    msg.n = 0.16717879640955746;

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
    msg.setTimeStamp(0.8478224941116124);
    msg.setSource(19468U);
    msg.setSourceEntity(228U);
    msg.setDestination(55539U);
    msg.setDestinationEntity(97U);
    msg.k = 0.6714906980978979;
    msg.m = 0.09907200477754796;
    msg.n = 0.08680369031022783;

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
    msg.setTimeStamp(0.15404439410241044);
    msg.setSource(41989U);
    msg.setSourceEntity(201U);
    msg.setDestination(18946U);
    msg.setDestinationEntity(84U);
    msg.p = 0.9901288110319115;
    msg.i = 0.3544692802416528;
    msg.d = 0.312743729229193;
    msg.a = 0.23592777999056636;

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
    msg.setTimeStamp(0.7024992931414348);
    msg.setSource(20576U);
    msg.setSourceEntity(138U);
    msg.setDestination(35514U);
    msg.setDestinationEntity(148U);
    msg.p = 0.6523934643493782;
    msg.i = 0.5209340155986897;
    msg.d = 0.5391490583902036;
    msg.a = 0.8502684156969241;

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
    msg.setTimeStamp(0.5920375401708303);
    msg.setSource(18433U);
    msg.setSourceEntity(119U);
    msg.setDestination(9032U);
    msg.setDestinationEntity(95U);
    msg.p = 0.03350814326246787;
    msg.i = 0.7304417301289773;
    msg.d = 0.8538406531485102;
    msg.a = 0.8169917650212972;

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
    msg.setTimeStamp(0.8027776808838154);
    msg.setSource(28505U);
    msg.setSourceEntity(224U);
    msg.setDestination(25961U);
    msg.setDestinationEntity(90U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.15267294395210018);
    msg.setSource(31337U);
    msg.setSourceEntity(81U);
    msg.setDestination(23175U);
    msg.setDestinationEntity(67U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.9164346521957113);
    msg.setSource(61979U);
    msg.setSourceEntity(127U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(131U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.2229199703147171);
    msg.setSource(48766U);
    msg.setSourceEntity(48U);
    msg.setDestination(25870U);
    msg.setDestinationEntity(237U);
    msg.plan_ref = 947927820U;
    msg.id.assign("IWDDYGNZAWDRJSOMPCSCCDDJFCWGGQJQUUNIOPSFOXMOSTTTKIPTIAJBSUEBLXYSBZVPEHVPKWXHRPYOFSRLFCHCBZKDNGUCIEUWYIBUFTKMHRLWPVBUIPYUAOYUXQFDYQSVAOZMJLFOXZNEGJDIIPJONEAVESHQLEDBROKWJHLZLGJQHXQHKMLGBHVEYXDWESNPMKHMXAWVWTZFJ");
    msg.memento.assign("JSPNGSLQSHIGAWJNEBNBSFEKLXCHVCLGSEYDAOXTMFIAYIPDOADQRRJXHPUPVZALIPTROSYCQCJWONRCQAVMYFPFIMHADMULDEZFYKYEVJIUQUHRCDTWUCNWEAGIGVRGVGXHLRWLWRFPQKSBUOJAKRKBCTWVUXDGYMGWXBMBTKOSZWNJLZZNXZ");
    msg.timeout = 56936U;
    msg.lat = 0.8902723594603429;
    msg.lon = 0.1815083806532204;
    msg.z = 0.3331923542399887;
    msg.z_units = 235U;
    msg.speed = 0.5345224688301378;
    msg.speed_units = 6U;
    msg.roll = 0.7258221910196573;
    msg.pitch = 0.46910471338847426;
    msg.yaw = 0.8092338826609589;
    msg.custom.assign("ORTPWSGZZDYKTSAXXJFSUJHKZIUCDFIWRFDCOGNXBGQYLRPQVEFVZIQQBXLTVSKMNPPIDTBDVBZMMIOPHUAPLMWJDOQMYYIWYAECYDNAUXGLEGHRAYNSBVINECXNJBSLVWZRFDEKNCFAWRJKRFYSSFVHGPMIOIURLHXTTXZAUNHQKMAENRGJWVAZUTLOYFHWYOCHCKJCGEENBUAWSEHQVPJPUQROEILWBQLTBXZOJDJX");

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
    msg.setTimeStamp(0.09636748175280507);
    msg.setSource(12702U);
    msg.setSourceEntity(198U);
    msg.setDestination(37636U);
    msg.setDestinationEntity(221U);
    msg.plan_ref = 857623956U;
    msg.id.assign("GDWZNXQROGFQNSWJDSBGLMIPIIJXLEETVYHARKBTOXIKAWJSKUAPVPYTWQTHCWUBOCKMVBFQCGKESPZYJVVGPHOHLDCTNDIUCQVRMDYOEDZTABCLDYIGOOZYWKAVJFGWITMPNQFFSFOXSTLYHTZJJDUXSRFNGNBXUUXZAYWS");
    msg.memento.assign("SVSWXQYXVFUFJVLYFCIATLHEINBLCRLDWGZWJQIWPMONGVGQJNMRKVHPSNADDSTUDYJUGJXXTKIFICQJQTRVYDEXFLAETTKCUEVSOQTBQREBWPM");
    msg.timeout = 55255U;
    msg.lat = 0.2775508453163962;
    msg.lon = 0.6285441023324359;
    msg.z = 0.1800716363229038;
    msg.z_units = 164U;
    msg.speed = 0.16535697309104924;
    msg.speed_units = 161U;
    msg.roll = 0.1615909597647921;
    msg.pitch = 0.7135456351892929;
    msg.yaw = 0.24894666480726013;
    msg.custom.assign("KZJZVJTUCJIKMKVSSFSLSYQYXZCMVQBBZTFGLCSDOKBWOOYZDZTVHYILHFCFPBUOMJTJOWKZQGCWUTINWBTFHAIRMOVJXKKNENVLSLHMPXHLIIMINPGPVLEMCDKFLADZQGDXRXZORYTQFABKEYEYWLFUAV");

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
    msg.setTimeStamp(0.39788227040030677);
    msg.setSource(16934U);
    msg.setSourceEntity(87U);
    msg.setDestination(24966U);
    msg.setDestinationEntity(166U);
    msg.plan_ref = 784866416U;
    msg.id.assign("BLXHHAFCCZEKSPJEGOLNTNGHEVDLDIGCUGHVPUTCQVM");
    msg.memento.assign("ADPPRJLEFIJLUOJBKCBYWTMPHGLBQPKQEWWEBCBTWITFWMFXCDRUIJQHIRORBCABPWUSRDAXAWMVPUJKEFUFOWACTNMNYPVYQWUGGIKSCENIHNABGXFMNTZZHHJIMGJJZXPMZDLD");
    msg.timeout = 27700U;
    msg.lat = 0.8203972278324917;
    msg.lon = 0.8741583309162076;
    msg.z = 0.0996232872595787;
    msg.z_units = 35U;
    msg.speed = 0.4445781943046053;
    msg.speed_units = 38U;
    msg.roll = 0.8750469805226303;
    msg.pitch = 0.8420916394409687;
    msg.yaw = 0.9753285388376173;
    msg.custom.assign("NMJWJYLGNKNYFODQMQTDBUVSKBPVAPMVXCGEZJCVNGFLKDHVARBWZLUKLDOJISWGKEIQAOFFCRICBUDWTDXURTZQTPMHHHNJTQTFEZEERHLDMZPWQXXNREDEUFCXMIFKVXGHLMYQWGAJUJRWWQRSSLONHXJBKTMWUAVAPZAHVUFSBQTMJOPVSESSJPSICPMYGNPRO");

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
    msg.setTimeStamp(0.2123035592193);
    msg.setSource(27907U);
    msg.setSourceEntity(194U);
    msg.setDestination(39296U);
    msg.setDestinationEntity(172U);
    msg.plan_ref = 821166082U;
    msg.id.assign("ZCZYRJBYZNMPBKGGZLFLMNFCWLPLJQLDRIHVGYEYTKUNMYVQZOGFURQVNYTIAEPAOYAUB");
    msg.memento.assign("WJFYXMUCEYSBQNQCGFCHNOEFOVUKFTGQZKZGPVJOKELLYRPNAJMACBVHLRVQRMIQTXFRLBOGPOHIRQUUWSSGLXILZDTMNNKXBVDZUQVVQVDFXHUYTOAIZYXPZGATMFJOSKUAUYBHAILCTSDBSGKHZRTWSEGWAJKYDXRHPWBSOEZIMGNAYZFJEPJDOSLFEZDPJIGVWNCPJDWUMALMEAOPBSMRETRQKXHBDKHCWLIJMUXN");
    msg.timeout = 7064U;
    msg.lat = 0.0443431624636742;
    msg.lon = 0.24471927298105212;
    msg.z = 0.08279285955323779;
    msg.z_units = 145U;
    msg.speed = 0.33013095756987754;
    msg.speed_units = 125U;
    msg.duration = 30271U;
    msg.radius = 0.24738710361745275;
    msg.flags = 63U;
    msg.custom.assign("ZBSWRSELUGVORZWWEBXNOYVMLGJITHMQHFAPXJMTQTWXYEUGOMZTIRDRQGIXYSEWKKBFUMFBSNRUGQDLDZFHBQBWVTALYOJDQYKIMSJUIBMFCCWGLJGAUSDENZNOTVIKPAXICUHNQDWHYCEPPTFLOVBURKOJQUSWPVJCMPZYXKCVRAGBXKHYAPNTOXIONNHDPJS");

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
    msg.setTimeStamp(0.5653598295080813);
    msg.setSource(14975U);
    msg.setSourceEntity(218U);
    msg.setDestination(11003U);
    msg.setDestinationEntity(207U);
    msg.plan_ref = 3585234241U;
    msg.id.assign("VGDINBKWLTCAZPBBCGNLRXASTGEDFAFGPMWRDZNSEUNBLWFPDWTOVRDSHNOUKLWXFXGRNLANAEVQRMXAGS");
    msg.memento.assign("WAXKQIKAEFIPDKCYVKIFKDRLWZMVEXVJSCUNWWGGCSEWTVCAOHOVTBPZQPOUAYADTYWYYMXJXPRMNJLEBYWBIWSVDUTLFDAMQBFMKUIGLZGHDGFVHEOJFCSJIEDNQJLSUBTSZBBXNBEOCNAYSUETJQRAQPROPCUEGPDSSUNJNRWCGFYDPXLKTZFLJREDXKMWVRB");
    msg.timeout = 29821U;
    msg.lat = 0.5557120351384307;
    msg.lon = 0.08701697685043441;
    msg.z = 0.05926895404659971;
    msg.z_units = 15U;
    msg.speed = 0.7316415075897517;
    msg.speed_units = 164U;
    msg.duration = 62012U;
    msg.radius = 0.8753482870199427;
    msg.flags = 139U;
    msg.custom.assign("KMEQTOCGFSXBQRKLRTTRJQNDCIUKZYQBSFIZDKYIJTSUYGLTVXWUCEAZXBNYIKORCBVSCWACYRVQEPWAEOIBYZWGWPMKJPGDAYOAAFPKRFZHLPLC");

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
    msg.setTimeStamp(0.44815021804952293);
    msg.setSource(29673U);
    msg.setSourceEntity(72U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(44U);
    msg.plan_ref = 4050132055U;
    msg.id.assign("HHDXPZQCTIYKPPANZATTREBLSWEQTBVJB");
    msg.memento.assign("YISNJCOPZJGVSTWXUBNQRFPQWMVAAWLMNPKGMIWIOBSHHKWFVEHYLFJREJZJHIADAHQRGUYGVTKLITSKMVUGOJCOLJJOXTXFSACAQCCMVNCCLTJZHGDPITYBBNEYKEFTHOKFGXUKUJASBRGFZDWRNPAOQPTCFEUNXEFDGZW");
    msg.timeout = 19280U;
    msg.lat = 0.49558453344803965;
    msg.lon = 0.8096688485447449;
    msg.z = 0.13579223656165385;
    msg.z_units = 167U;
    msg.speed = 0.6877207240297495;
    msg.speed_units = 26U;
    msg.duration = 45971U;
    msg.radius = 0.8003435230827839;
    msg.flags = 69U;
    msg.custom.assign("NWITSURASWYLCGRPXLJQMPCYLCEGYHUWHZPNAWNESCBEZZVMAPNMRDJXELKHHGGVVNVXMFPDZQAWSGWYPXRNZOBLRHIEOZKFQXQEOMWQSWIDMFLOGOHRJLDLPOHIWJZIMGANZKBCATVZTUTTTDSRJTHHIVEPCTU");

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
    msg.setTimeStamp(0.9894969355887006);
    msg.setSource(45757U);
    msg.setSourceEntity(56U);
    msg.setDestination(27084U);
    msg.setDestinationEntity(130U);
    msg.plan_ref = 641906292U;
    msg.id.assign("KJTKBJSUJLEBYAYVHBPJFRUIWTONDGIGDZTDVGOILUSUYWCXYHOTXWOEOSFPDMTQFHFLRRMGYUWRPELOOSFUPWXKABVQGVRYBGRMZMESVNSERZVJYJYMBEKMDTIIJWLVALCQPLDRLXWCEBXALTZRNFCPFYHSRQPXIMIUJXMKNBGUFJGDZNYHOMSCEZQKITCPFQGDDQMKXECAQWUSOPCHQNBZPCVJUWIANWSZGHCZONLKEABTXAKZHDNKX");
    msg.memento.assign("FGIXAKGIQIFQUFQZXPLDKDWHATOBNQTKYSURPZKJZXKPQIADEMAKNFDHEMWOSVYLZIUARYRPVDPFXJFGPHTZJVFGVVERKMHQXMNZLVRSUGYEBCIWSCTUJWBCXSYKLCOQIBCNNGHECLWBSMGKJUDODPFTPUHATNXNJDQQBSOLBXIYYMEWDRVGMORNTCFHOAGWXWGSWTLHJLRYZECZAEMCSMUPXTDOVJZORNCALEKIW");
    msg.custom.assign("MZHOOGJADGWZIFFLRORBIPZQPCZWFLXDRILYQPVDJPTGSLEEKYQFXEMMHVZIAQQ");

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
    msg.setTimeStamp(0.7820969346949656);
    msg.setSource(51678U);
    msg.setSourceEntity(7U);
    msg.setDestination(13196U);
    msg.setDestinationEntity(116U);
    msg.plan_ref = 3433312309U;
    msg.id.assign("NMUMSAFWMXLBNZSIZHIVFATWEOFJFDZHDNEPYDQ");
    msg.memento.assign("PBUZWCAGSZTOLRCCUTXARALLGRWSFWQEEPXDWSWDNGANKCUUZYUGVAJCYHYMPKMNIQJLYTOBNVMVJHAUFCNBJQNITLQNRYPGRSQDEJRILFOJJGRRVHTVZCQHXDDVD");
    msg.custom.assign("UXWPMALQPIHZKYUXGMWDSAVHUZMSXNNGROLQNFYRENNPVSYEFMHYOIEPSVVXGCAFQLETRAWAMBYYB");

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
    msg.setTimeStamp(0.08679229461939819);
    msg.setSource(39030U);
    msg.setSourceEntity(102U);
    msg.setDestination(3439U);
    msg.setDestinationEntity(90U);
    msg.plan_ref = 1620898009U;
    msg.id.assign("RXIDJTWTXNIOXB");
    msg.memento.assign("INOYRTKTXRCEHZCXIGCVUKKOQAMSYNYDHWTWMUHASXBNDBRFGFKVSZTAPKCEUNOVYEBDNNJIOCFCVMULQLPTXJQMIQJVFGBSUFNGTWJTOSPBSKRQGFFAVQDINPLXAVJROWKQEMWJLSMHRZLXLOGEHW");
    msg.custom.assign("QEILLKQHNBNMDGUSUFYWBVCHPJQXTPVRTOCFYUVEEMVCQETWSPPOUZABHLJKXKNMTJFOORSIYLCQSANTBNPXYJUKNCDIIUINUHVRDRIJMFXRKQHRDAYGBXKHBCSYQOXDEOXMJYZJFLGHLPDSXDRGSLFXEYETZRIYLPZRPNWPSWBAVDAOMVAZCDOFXKBQHZDLBWUQEWCSJRWNBGKTPOFUGTEWUKEWVSCVNWVLIIGGFHQJ");

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
    msg.setTimeStamp(0.7459165790029942);
    msg.setSource(57154U);
    msg.setSourceEntity(253U);
    msg.setDestination(41681U);
    msg.setDestinationEntity(182U);
    msg.plan_ref = 4029605976U;
    msg.id.assign("SRVMFRIHQXFVWIUNKVRVWABOJUHJTMMXVCUAUNOTVQSPHRHZBSEPCKPOEGZNIFZTOGQCDFYSDWVPADRUEY");
    msg.memento.assign("POJLNKAIKMCMMCTNWSBJMEGUEYWDWDAUQAPTKOQJRJAKXLXBNDRXVSDUSZQNAFNOKCHOJMZLYNCFSHMLDDILFZ");
    msg.timeout = 2236U;
    msg.lat = 0.6032304699348708;
    msg.lon = 0.7283997830482438;
    msg.z = 0.918407784514176;
    msg.z_units = 211U;
    msg.duration = 40947U;
    msg.speed = 0.7884567685422119;
    msg.speed_units = 236U;
    msg.type = 1U;
    msg.radius = 0.5251825297765848;
    msg.length = 0.46017383222776775;
    msg.bearing = 0.6595431850349983;
    msg.direction = 44U;
    msg.custom.assign("CUDYWADHKVNDUUKWHFIUZAUGKOSHQRPXORTIZVSGAJWALMGKMKVARWCNOFXKOTTBAZEWHJFDGNBLZUTIXKODALYNUKQQBLCSLUEMIWPJHSWYAMIPBVCONSBTSXVMZLDQCVPSJGFBKNHVZ");

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
    msg.setTimeStamp(0.04480826512995395);
    msg.setSource(4512U);
    msg.setSourceEntity(169U);
    msg.setDestination(31008U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 1937086012U;
    msg.id.assign("MKJIKUIQFJRYATNWHLEGBXHAXSNAOCDTWUFVVWCNNFVOWLYAIMTGRCQLPMOZNMEHXFQRBDKKFBYWAMNUTJOLIRJKSPNJXONQPIWGZQQBRBXHZXZGYXHULSGTYVOJDPOUHXVXVHEBKJEMS");
    msg.memento.assign("OEBESFOQASDVPVHUYMSUSILZLQRPQXJRQAAUUVEATYRKPMONUWWMJAXHCETMTNZOWKUAPXUZQYRDVKTIJOMYLWPYBCNRLGBFPCWKXBADXIKSGRMCJDYNVXMIZTGHDHIYHYJHFTLPOYXLABDZXKVGGRTTEWUZQGDBADVPNHCTFEZ");
    msg.timeout = 49656U;
    msg.lat = 0.5193117526575616;
    msg.lon = 0.793890141946536;
    msg.z = 0.27187334170594757;
    msg.z_units = 44U;
    msg.duration = 58125U;
    msg.speed = 0.18123452047721;
    msg.speed_units = 241U;
    msg.type = 74U;
    msg.radius = 0.4101706877139746;
    msg.length = 0.22698156596342844;
    msg.bearing = 0.9279785999198975;
    msg.direction = 39U;
    msg.custom.assign("EJVBBOAOLEZLEDETZXQLNDZBZPDRGVPAOOOIKDKNGSMXK");

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
    msg.setTimeStamp(0.5466127547716813);
    msg.setSource(37223U);
    msg.setSourceEntity(43U);
    msg.setDestination(21620U);
    msg.setDestinationEntity(235U);
    msg.plan_ref = 1054580199U;
    msg.id.assign("BQSCTPHHSXNENDJBHGPTESQIASEJELUOOCCAFZTKPNGMVSMLRZQPVQALLKGCVCFJWMDEWKDXVWMKDCKTBMFLCEQGKWWDIRPDIDBOGSUDXRVQZAMYJVSHUQHCXQAXXMXUVKJGPFWSZIUOUZINUSRLZQOGRBNATYOTBKTFKABPREZWHUYYLTWYVJRTPGLLLAAVJOHIRYERVBJIMNYOYOHWIPNDZBCTGUCKN");
    msg.memento.assign("EYKRECPLASXWTUOVTTPBCCQAZRKWUQCXLSZUXVXFBMYTHRAVYXORYKZQHAMFMUWGWJPWVYUSFNYHPIDCYHTAOZNZCROGLFEDLSJD");
    msg.timeout = 2062U;
    msg.lat = 0.05019105628464049;
    msg.lon = 0.789491479721557;
    msg.z = 0.32250755157374633;
    msg.z_units = 41U;
    msg.duration = 4192U;
    msg.speed = 0.737245891818965;
    msg.speed_units = 192U;
    msg.type = 91U;
    msg.radius = 0.23682781701470068;
    msg.length = 0.2169048886434507;
    msg.bearing = 0.3167395871449692;
    msg.direction = 96U;
    msg.custom.assign("BEORMFFFAVGBFXHGPJUIXOQKGTLMSJGSONDSUEEHXPTPODHFZGDSBZMUHWHLJDSNVAFQVIDWBUVGOVBNRGYXDCALNJJJRVOLURDZWNTPRAVSTQOZRPVNLAKUVXRKRWTGUQDKYWMJIPYILFXIZBZYXQBVFSHWUETIENIXXBGECYWQPPCLFWAYCPS");

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
    msg.setTimeStamp(0.4446635468945511);
    msg.setSource(47749U);
    msg.setSourceEntity(240U);
    msg.setDestination(34021U);
    msg.setDestinationEntity(72U);
    msg.plan_ref = 1287964775U;
    msg.id.assign("ZAJCDUBXDMJNVJBNXOTUDDVYUYTFPFORWUWLINWSADLPSUVUOFM");
    msg.memento.assign("JKEMTXHHSKGIYAWPYXEVZCAHVPNQICXOJKDCKXSBTQRWRMAXTESWOVBKCLWWAQMVQWUUMVJUSQTMCQIOKSHXCIZZLDGZZPIFKSHJYVDROCDYSCBSEMATNFUGIXTJWBUZFODJTHEYHPWBDORJBRUZNUOFZONGGEMO");
    msg.duration = 55585U;
    msg.custom.assign("MSVLNVTHUNBUZJJDHTYDWAQFUSSUMYRPBKIIZKJMAJPNYIUPLLEMTCFZRCIZQYBQVHDJVMAZDCOZVRFMPCNUWJLSGANOROAFABCVKHQFYQSKCHZQOIGUEEXVXMYMPPGVUZLFGRWAKLXLMQCOIJDXFAEBIRIWEGPHDTPYAOWDGDQWXEDVHXNSKTGONKE");

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
    msg.setTimeStamp(0.12614014515716898);
    msg.setSource(2941U);
    msg.setSourceEntity(121U);
    msg.setDestination(58546U);
    msg.setDestinationEntity(77U);
    msg.plan_ref = 416855215U;
    msg.id.assign("DYJSZYOJSGLQIFTMFEOAWKLMNBMOJVXAXCFNZOVPGXROIBNTIU");
    msg.memento.assign("TGBJUEHYLFCDYAPLZSKIBNZHORMQLXAJVWQVRRUGDZRHFUZCFRPKEHJOGZJSWBXESJKYIERBVTWWIMGIOWNBFLFJTGMZQBGEIR");
    msg.duration = 5094U;
    msg.custom.assign("XXYGDHTZTYIBAQKUDQGUPSHRQFNTWGTI");

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
    msg.setTimeStamp(0.44711661645634326);
    msg.setSource(44379U);
    msg.setSourceEntity(87U);
    msg.setDestination(11938U);
    msg.setDestinationEntity(67U);
    msg.plan_ref = 3357547756U;
    msg.id.assign("GTKISHWAOMVCQNYIPUVPACCUZVZETUAGHTSYOLDYSKOBMVREIYJSJGAGXDSTITPEMPHURHMFAOGRUENDOLWWFMZBSKOP");
    msg.memento.assign("ZOQEQKCGWVISNKFJYKZASBLDLNVZIVPHVXCEBDBSLFDOQLQRBOXHXYJHTHGPSRBAKTZMRJXDAMOLNOWJMPXEWJAVIQNISRVYEEMFKKSADGLSDIJHLVKUYRYMTVGIFPYWFXJPTXZOHSKPQWLNTCHAJGYCPNVQDCIZBUUMEPGTNSAERCUQHDXWJOZPWFOFVYWEJTMCNILCABATTWKHUMGUOBCYTDXWZYR");
    msg.duration = 43037U;
    msg.custom.assign("JTIDKYGYIEOHCERAXNEMSSJMKRGAMDELFIAOBXSFENWPEJXBQNSQCJDIGBBJXCJNMWJNOKYZRSCVQLREUDPXSMENLBIPIXTYWCBDRXZCFXZQKYYWWKOAUUGTHCOIVGWFZSNFTRKUTRCVTJHHMBUHETKWGHQWUSNHRUIHUZFBMOFLYGVAYIOPYVLQPGVSWATHEZKJBXWLCQLOPDLYTMVVD");

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
    msg.setTimeStamp(0.02528491688831014);
    msg.setSource(22910U);
    msg.setSourceEntity(25U);
    msg.setDestination(31129U);
    msg.setDestinationEntity(25U);
    msg.plan_ref = 477874273U;
    msg.id.assign("EABQNVGFVLFTZSKBMIYEJAJSCZCUMPOHXNABKEGHMBMIENIPSHAHYOMXLRAUYTUZSXLHFEDSDJMSLLHUJDMIJNDOZQBUKCWGQXQOWTMGCDRPORAQKVZKXYCEVWZGNZWLRGIOVYYAJSUFOBPAPLDBFDKGBQNTLMXDVHNFCTWKOWUJPFTZPUPCGTQTITZVHQVRQCXIWKJNSCSXLLKFAMKNJDQPWUFRDHOEYRYRIWONXPYYTESWXUZVHERGCBIBE");
    msg.memento.assign("EGXENVTFRUBWPEDWBRNPJKSKPLWUVCNXJMGHMCPPYGYKIVCJQMAXXCMEYTQIDFFKUYQJZSGLFFHRBWBZDYROCZXTMJQEIRUGOHLOSPZURBWTHAHUQZVQMADASZERTGWIXCJHPQCXUZFAHLFLZPNJLMAEINFDRSBOGXNSWVQBIADZIDTYVSOKMIOVINALMWBSTGBVLY");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3470010693U;
    tmp_msg_0.start_lat = 0.2778385103769412;
    tmp_msg_0.start_lon = 0.6411947259661946;
    tmp_msg_0.start_z = 0.32798773714051055;
    tmp_msg_0.start_z_units = 94U;
    tmp_msg_0.end_lat = 0.6759533069359175;
    tmp_msg_0.end_lon = 0.7361686373218571;
    tmp_msg_0.end_z = 0.07418888093386866;
    tmp_msg_0.end_z_units = 43U;
    tmp_msg_0.speed = 0.10921108000758206;
    tmp_msg_0.speed_units = 80U;
    tmp_msg_0.lradius = 0.5986572851699374;
    tmp_msg_0.flags = 135U;
    msg.control.set(tmp_msg_0);
    msg.duration = 56087U;
    msg.custom.assign("CJZLWYAQXMPQVXHGYGNIGSNQPXTHFMATWBYOOFMCJDZPBEEJPWARQKDUMCHMISAKDSJT");

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
    msg.setTimeStamp(0.1472114277862121);
    msg.setSource(50877U);
    msg.setSourceEntity(203U);
    msg.setDestination(61968U);
    msg.setDestinationEntity(148U);
    msg.plan_ref = 3251882466U;
    msg.id.assign("XCCFSZJJSDTEZIGBORLEAJGNZWDBXWIRWHXRTVOIEAAYGMECMNAMSLJQUNKDIELUBGVWXESHJTQGPPPNQQMFNVCDGAAQKQYPRUGGQBVORVSHSLZCWIMVTGWVNZYPCTTIBFRYMFLFLHSXXMYRKTRMLYANSNFPUZDWNPICQKIEBKPHHJOAKFRUZZYBRXXXZLJUHOOYVBKSLOAOJKDUYVXCMJ");
    msg.memento.assign("KCTTEKNKXXFEMQGNLGNIHBZMFGIDJOHZBSGYZTJDKBBUTOEVBEFCMXGJQNFAUCCVSRSLSZBEJTYARZBGWURVMPNLQASLLPKAPYCDWVTPSUDRMFVHCNAVOWTLIYYWCLUBDBXNMJNLXMZQWUDYHRGLBQAXSWEQOOPHZRQVEIIHIAODKROPTVGHHXZXCFITNKWKOQKGMWGMYEPFHYDRQVJXOEUPYSDSXTUPKAJNLSRCEUJJHA");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.04992198536996417;
    msg.control.set(tmp_msg_0);
    msg.duration = 44584U;
    msg.custom.assign("VYDOCUAGIJLCOISKLRKQFULCNGZDUIPOFARJGQDWRMWXEWLWFXMWHUWPQBEPNSICOAIKSKWSSIVJTPVEQAHYSMDXKLIVXYNMPOPTVYOSUTPPGWFTMFBZORQGJNYFDNYHXMGRZTPTEBIZKWRALXORSYNHNZYKHQHYZLDIM");

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
    msg.setTimeStamp(0.027204718580578047);
    msg.setSource(34201U);
    msg.setSourceEntity(3U);
    msg.setDestination(13527U);
    msg.setDestinationEntity(149U);
    msg.plan_ref = 1876036689U;
    msg.id.assign("RKPNRGGEWENKWTSCTJNRQFMCSAZTHMWYBNLOVHMIAJVLZIWDVNXFKQLNEDWBENAPPTNMPAKKYTXSKUFVVXMPMQUQLHYODUGFHKYLZHBGSDQYEPIRRHTYJBGZVRDSQCJYGA");
    msg.memento.assign("TFVLXRKOIWRBDIRYBSHTRLYASOZAHXJJTCZRJILSWKUBQUPCHFZWLGOHCCFQRBDNWKMBNUWIAHIFVPNZZXZWILBDMMYONOCSYCGZEKLSSYSWHBJKMHGWNUBNDHMM");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8865662579792876;
    msg.control.set(tmp_msg_0);
    msg.duration = 14417U;
    msg.custom.assign("GOMRWQJVPYNKCGXYIUALJSWYRLKCRPNGJFMAWSAZAESHFMVBQVLROQBNJRWKLAMHZ");

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
    msg.setTimeStamp(0.6945843571383501);
    msg.setSource(23524U);
    msg.setSourceEntity(78U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(83U);
    msg.plan_ref = 2414819129U;
    msg.id.assign("GPKMQSSVJHGZSAHKACPSMLOOMHICOVQBYRNBQGHCXIZLKCKRWFWCQPSWTELSJBBJEGUUWIZWEOOHEYQMDFAPYSPXUNECOLESXHACMWVBXTAGKTYTWXJVWEOKLBOZLHFYIDNIZJTVQVXPCNMECKZVFZJRTHVXZBTTYVIDOAIQHMMAKKRFNYENBZIFGKUJOUXFPZGWYWDHDNRUXQFDU");
    msg.memento.assign("PQVVDEPEJBYFJL");
    msg.timeout = 19042U;
    msg.lat = 0.5859766670930535;
    msg.lon = 0.40894005481631956;
    msg.z = 0.6286718473537604;
    msg.z_units = 218U;
    msg.speed = 0.5026698047042505;
    msg.speed_units = 23U;
    msg.bearing = 0.26098219150613267;
    msg.cross_angle = 0.6177493382146931;
    msg.width = 0.22005929576174454;
    msg.length = 0.4889771121011264;
    msg.hstep = 0.5059594973940618;
    msg.coff = 5U;
    msg.alternation = 192U;
    msg.flags = 77U;
    msg.custom.assign("NUWYHHANMVWGSJUOZBTFGMSZQXDXZRWBEYNMFTOSELDIHDEWDHSPFMWUZIWZDEFOQBXJREZDQWFNMAKGKYDTCPYUMPLWDXHVXYUJPKCNQXTEVFAJPCIEVBJMNASFNLPCQLICRNQYGSIVORATLUQZIGVQNMBKMCXMPUUSKCLRTJXZISBRKLDXJ");

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
    msg.setTimeStamp(0.2790948602202502);
    msg.setSource(10125U);
    msg.setSourceEntity(167U);
    msg.setDestination(16554U);
    msg.setDestinationEntity(109U);
    msg.plan_ref = 3813064083U;
    msg.id.assign("VAVHEZKXSQYYFHATB");
    msg.memento.assign("SDPHPMJAAMACTIIKBFUXPCROPTHAGWDOYGXNQJOGYSOYMJOZHCXEAWQDYJEFCNAUGXSHNURQMBKCWLSVICSOVMLQTVYPEHTQYVWCMADRLFNWRGMZWJPUXHOIXYFJRELGBTZFSJZIXKUEZQIMBKBHIKVHOTOXRBBPEBFJLWTTVFCIZVVNKJQWNUXTINYVFRNSPEQWKTOBRUHPZQYDG");
    msg.timeout = 59348U;
    msg.lat = 0.08574322602538276;
    msg.lon = 0.9905004860732807;
    msg.z = 0.8240172536203977;
    msg.z_units = 145U;
    msg.speed = 0.09727158927240176;
    msg.speed_units = 143U;
    msg.bearing = 0.6323658709595047;
    msg.cross_angle = 0.16036155741524438;
    msg.width = 0.1732485065144218;
    msg.length = 0.6341998239244001;
    msg.hstep = 0.7305295134264668;
    msg.coff = 186U;
    msg.alternation = 15U;
    msg.flags = 13U;
    msg.custom.assign("EVLVDRSBRYDAUMPLWMJOQCGSHNJTKHAIBETGBDXIPQDDWQYJAIHYMIOWMRWMTKTMZQNDAKQHGHALULAPPQWRFKMOMJZHAPYPRIZGUMUFXZSFZSNTNKZFVQHSEGUCNIEYLFDEXCUALSDFAUOGSNUWZSEEGWRBLRWTYXVZYFTXCZRVBSOBKXIOCTUDFNJTELRJPFOVWKPEQEXXHINPUVKBALCBHYCVGBSKGNRJVGVCOYDJBLMQTWPOZJINIHJX");

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
    msg.setTimeStamp(0.789627956492849);
    msg.setSource(64885U);
    msg.setSourceEntity(240U);
    msg.setDestination(24924U);
    msg.setDestinationEntity(159U);
    msg.plan_ref = 2528576232U;
    msg.id.assign("XEHIEPBFDYOYUZZHDSUJKCOPEOEUBWVGSKVRAJADOKCNENUCYRCIQIMGABLUFJKZRIJXZNAROFHL");
    msg.memento.assign("LYNUNMXJLVLRMHSYRIGRLFYDQHYJUUKPYWJYGFZGKZCVDTJW");
    msg.timeout = 36444U;
    msg.lat = 0.010552720253314773;
    msg.lon = 0.37990231824072085;
    msg.z = 0.22900521280553965;
    msg.z_units = 14U;
    msg.speed = 0.13789158286424286;
    msg.speed_units = 239U;
    msg.bearing = 0.0660987109784108;
    msg.cross_angle = 0.5286496218068413;
    msg.width = 0.37314487678311814;
    msg.length = 0.8191876599615172;
    msg.hstep = 0.33459564716709633;
    msg.coff = 27U;
    msg.alternation = 75U;
    msg.flags = 111U;
    msg.custom.assign("JJSADPSFNIINUKCOFWOILLGRYQMBENYGYWMBVPGKBJHDERHVJBPGQCTUVAECQORBFPRSSZQEXMSFUUDNTBWMX");

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
    msg.setTimeStamp(0.2945127802457358);
    msg.setSource(23615U);
    msg.setSourceEntity(114U);
    msg.setDestination(45594U);
    msg.setDestinationEntity(35U);
    msg.plan_ref = 2395719685U;
    msg.id.assign("QHGBIPXJLRPNXEWVQGAHONIEMLQZAURTKBFTNZJNDLRJGXEDRATQGLLEFPZMUIMSJZMVTNLVQXNVKIEDRRXKCFGVPYKZSDAKKOZTHYBCNSCWRYWGHXAMLFUZJPUNKUDCTTUFTPJRYYGJENH");
    msg.memento.assign("ETIREBIWLQMLFDARFJVKXYJMAZCSMOYJLCQPKUMFGINAARUGGSCTVQHMLKDNPADZVNPZDTBPYPTSPWQJYMISCNUMXELWGGMJJFIVNCBUXXFZOCHEYQHBGWWSKBTXQLYDYPKVETOQXZKPUUQTXBETLADEHZHTDBXKBAZOWPSXJRRFGHQUEAOGDPYJCOIFSSZONWSLVDRVJIKDHVLOCNFQAFYHNAWEZWTBNWOLGZURIHEHBUMKNCIRJIXVM");
    msg.timeout = 11039U;
    msg.lat = 0.9509074364255741;
    msg.lon = 0.9990298860453045;
    msg.z = 0.016915522609939226;
    msg.z_units = 191U;
    msg.speed = 0.4316433433634548;
    msg.speed_units = 87U;
    msg.custom.assign("UHVPWAVZHHNFENWGOALYUZZJSBGYHZTPVWWRAJDDMRVJQXKQHGBUIYENRCOHXQKZXNBALOCFFDISADAEREEKXMGMUIRJTGKMIFBSJVQTFYMKKWWZTNAUVOELLBYTDCFFYPLRLY");

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
    msg.setTimeStamp(0.6029659974181285);
    msg.setSource(33462U);
    msg.setSourceEntity(110U);
    msg.setDestination(51457U);
    msg.setDestinationEntity(123U);
    msg.plan_ref = 3122366909U;
    msg.id.assign("CPZPYQBTPETIQAXHDWNRDAKXZURRYPY");
    msg.memento.assign("WLOVVUTZMCZAQOMSFNIMLBLRBKHUHJKTPPIQSDZYGAAVQOENEFSDBEICEONYJFWLIYHMHKEPUZCNIGMYINSTNCSW");
    msg.timeout = 46965U;
    msg.lat = 0.20465338610202588;
    msg.lon = 0.4649541561978162;
    msg.z = 0.4721035241723667;
    msg.z_units = 58U;
    msg.speed = 0.16781253189174428;
    msg.speed_units = 241U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.20686492714346294;
    tmp_msg_0.y = 0.6745538317827364;
    tmp_msg_0.z = 0.7974730345658153;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PUDGIUFJGFXCRSQNIHNDNOVODYHHLYIAMLGXTJVQSOXBBCALAEYSZHVLIOWPAFIYPCZMLPYMBJKRWGARKZJZUVDGQRFGENZKSNTNWYCNOUJLKLDUCRKYATJDISFMBTHTRUIAOUFYQEMKIIAEBVKKBSAOZPWYJKSWTPUELHTMHCQNIBVCBNBWMUPMRPDCQRXGYWEWOZXTDHFTOSXGHZSEBPJLCCUTZM");

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
    msg.setTimeStamp(0.4222810476141311);
    msg.setSource(29303U);
    msg.setSourceEntity(74U);
    msg.setDestination(7150U);
    msg.setDestinationEntity(195U);
    msg.plan_ref = 3483210550U;
    msg.id.assign("FVBYSQKHHPTTLGKZIZLGZOQYUECBBOGHWTRVJONNIKQKNKAFDUYDWEPPWVVIHVVFSUKWTWLKJMNAYSCUMCRLKSHRNNZQIPOZCPWDMPEHXZWZCGXIADHHBNZFDUVWOIFNVDAUM");
    msg.memento.assign("XBTQTDSTELCIKCKNJVXSZIFPUNEQJORCPDYRZAHQCKWCSWLKKWWGDEFQYFBVVAGTIPHTUBBVJGQN");
    msg.timeout = 534U;
    msg.lat = 0.889067310034858;
    msg.lon = 0.18844089396260844;
    msg.z = 0.3805883405804512;
    msg.z_units = 247U;
    msg.speed = 0.1349185908916395;
    msg.speed_units = 44U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.11931405598363443;
    tmp_msg_0.y = 0.3224706968735461;
    tmp_msg_0.z = 0.9422757713588059;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TMOOULUQDKKMOTUMNTJBHKFFWQDMODFDUDIGSSRAZYEBLPVASROAOOLJJJLTKVGEYQPMGRMCYBNWVJHHZZHYIMGHGTHCHCMCLZKSNL");

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
    msg.setTimeStamp(0.22729048218978798);
    msg.setSource(64668U);
    msg.setSourceEntity(254U);
    msg.setDestination(63110U);
    msg.setDestinationEntity(9U);
    msg.x = 0.8997594614874218;
    msg.y = 0.62485535756545;
    msg.z = 0.5717434755085675;

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
    msg.setTimeStamp(0.42862096003800143);
    msg.setSource(37929U);
    msg.setSourceEntity(145U);
    msg.setDestination(60397U);
    msg.setDestinationEntity(149U);
    msg.x = 0.39934323075711475;
    msg.y = 0.8262364039222546;
    msg.z = 0.25061263269225487;

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
    msg.setTimeStamp(0.0840112585374081);
    msg.setSource(61411U);
    msg.setSourceEntity(219U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(208U);
    msg.x = 0.9711341709509248;
    msg.y = 0.9167778842412387;
    msg.z = 0.9393824303083942;

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
    msg.setTimeStamp(0.12201038281074039);
    msg.setSource(50562U);
    msg.setSourceEntity(13U);
    msg.setDestination(45544U);
    msg.setDestinationEntity(19U);
    msg.plan_ref = 1553219039U;
    msg.id.assign("RORMKVKAFVHTGIUZFNLJPSUNZE");
    msg.memento.assign("CSRNOEPHZTJJZEKSDOAVPDNVDIHPVUIZWQRWUELGKJAUAEHYYPBHCYCFODWNSEBWKYTOIAXRCKQKNFOYNVZSQRLZBNBUOAQTUPFVTYKPRMGZMUKUTQWHHGVJSUNYQAHDTKVLIFDESONWIXTOGCAZXFFFBSLRMALHBIGQBDUEBZVSJBOTFWAGDJTGEWMHRQPMPJEXLYJCGPIWMXXSMQDYAVXZDJLXPCMIMQRHCEZMCL");
    msg.timeout = 48964U;
    msg.lat = 0.974394986928634;
    msg.lon = 0.6098108302538592;
    msg.z = 0.2171461175244449;
    msg.z_units = 73U;
    msg.amplitude = 0.9690640231032163;
    msg.pitch = 0.31244556489041997;
    msg.speed = 0.607355026408667;
    msg.speed_units = 66U;
    msg.custom.assign("TNLUYXLWRRDHKCFKPHSVFFNLIDZQHDNFTYZLTBUAQYVYSHNSSAXCYGEGEVYTIGVZUBNRZYISJJROOFKMGLIRWTWZHLBBJVIVIECJUQXIARFWECPDDPTFQXOPSAGDBRANAUCO");

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
    msg.setTimeStamp(0.9395490700208262);
    msg.setSource(42506U);
    msg.setSourceEntity(54U);
    msg.setDestination(65437U);
    msg.setDestinationEntity(34U);
    msg.plan_ref = 460502012U;
    msg.id.assign("QEZNBSZYUYDCRJOVNUDYHAIKBBSEKGQBYMEJBWBEMCGATOJMMBUSUVLRFHKWTZPYWNGYUSMKMEUSPURLRLANHPQFDPCXQRDARIWDMYAXOTKOPIF");
    msg.memento.assign("JEOVQCKSMQDPAACMCICHXCRUBVILVEGNHXLOYBZEFJECZIGKUYIKZVMUSPADAPQOVSUIFWSWTPMWBKKMHWUCQRTWGXQRGNGDQMKHVTADICAGNUYFLVPIEYBTGXCTLDXM");
    msg.timeout = 24198U;
    msg.lat = 0.31628356923188206;
    msg.lon = 0.09017617504219988;
    msg.z = 0.5591495806441207;
    msg.z_units = 40U;
    msg.amplitude = 0.49069906696715526;
    msg.pitch = 0.2006077144256403;
    msg.speed = 0.012664809347408656;
    msg.speed_units = 194U;
    msg.custom.assign("UBNEBYGNTFDPOAIIGGEOZXDWCZNRYEAQSWESIU");

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
    msg.setTimeStamp(0.3736169481653622);
    msg.setSource(45881U);
    msg.setSourceEntity(27U);
    msg.setDestination(22775U);
    msg.setDestinationEntity(149U);
    msg.plan_ref = 1022954048U;
    msg.id.assign("ENQJEIIJJLJBHLLDWVYGKZXSMWCLFMFBYRNTDOEPKZPFBIBVGTYGCNFUQNTDBOCAHVEVPVANSCYYPFORQSFNEPHSY");
    msg.memento.assign("CKUVAHDDAPBPSKNQMFXUJDAHLCUOIZBKWFXYTCFXCSBRKSBSKLXNRQJJWDWYMTYODIANWRLRZTPVBZTEXETXNNNQYDJYSGPLEGNRWUPGBSULVUYAEHXWCHIBRHOMXQPNJPZTRICPOQGTRBCMVAZEOUUFKMGVZPJZQVUM");
    msg.timeout = 6888U;
    msg.lat = 0.967458188022914;
    msg.lon = 0.12654955800508993;
    msg.z = 0.26252756130299104;
    msg.z_units = 84U;
    msg.amplitude = 0.5107025409125905;
    msg.pitch = 0.7346571817338169;
    msg.speed = 0.3542448972571164;
    msg.speed_units = 243U;
    msg.custom.assign("FIBFVJOAOSVQSFKALYXICNOTXRBEHSRUYDETFPUEGROMUKOXDHVKNINCHYYVKKPXEWUSTWQULWEMGJUMFDHJNNUEERWIPIFRANNNZYGPDOKIEBTKAJCQ");

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
    msg.setTimeStamp(0.6186529771886973);
    msg.setSource(40790U);
    msg.setSourceEntity(193U);
    msg.setDestination(17629U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.07472427524572389);
    msg.setSource(38120U);
    msg.setSourceEntity(131U);
    msg.setDestination(63964U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.46132353265288195);
    msg.setSource(3613U);
    msg.setSourceEntity(48U);
    msg.setDestination(17655U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.19957199413732774);
    msg.setSource(7254U);
    msg.setSourceEntity(227U);
    msg.setDestination(29258U);
    msg.setDestinationEntity(20U);
    msg.plan_ref = 3546478062U;
    msg.id.assign("GDJZQHBWGZWBVGIKAADMGPJPVTHEVMGHJQRUWBFQPXGWBZJAXKJVEGPFUIEYKCNXUSOUQUZCGNFPDVWALYOHVBNFUWEXYOEYMFDRMVTZNZKUMCITXSRJJENVJCAMXOKKTGMIDTDBYMBODFLKCTEHHQPSKEEXVWJRHJDRCPIDCWSACRILQYBCT");
    msg.memento.assign("MABLOABHTLIIFCHOFXZABRAPGRYVCBQ");
    msg.lat = 0.07556355035861662;
    msg.lon = 0.21283815119228955;
    msg.z = 0.9008889885355281;
    msg.z_units = 191U;
    msg.radius = 0.6210571242223817;
    msg.duration = 9984U;
    msg.speed = 0.5345407485441213;
    msg.speed_units = 75U;
    msg.custom.assign("RWFVNMGHBJQALWNLXTADUQZFEIGDDYZLAKUOLOPUBRDUQOGPNSIGTFQXDGKIITNAACREALFUHOPXTZJSOQJZVWKMJOVHOIUQEXCCCHIIEPYESPFRFFNTHGEMBAMDBPWNYSMHLGY");

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
    msg.setTimeStamp(0.18498894953184852);
    msg.setSource(51173U);
    msg.setSourceEntity(211U);
    msg.setDestination(7452U);
    msg.setDestinationEntity(226U);
    msg.plan_ref = 2459555865U;
    msg.id.assign("CBUCQOIGYPWZLQTFFHMEDCGZYEMMQDAYQOSKYNLYXHYGHTDCZU");
    msg.memento.assign("GCHZCZODMDCNCHZGLOEYLTIMNVXQSUUHJOVIVXMRVKJESVUGEYWJTOUCAPEUOTOWPURJRBEZEIPKAHHLZIQVOTPQMGBIARPABTSOMPJZDYWCFNKNFZNFTUHCSHZYIFWXJINSGXPNKDQLXJQSDBGVEALBHEVEKXQLXQBYYMJPRUKWZDIWGSQYTXMIFCDYWYLAFGBKWCWKEPNJFRBSABXMXSORVPLQMLRMC");
    msg.lat = 0.4237918344685231;
    msg.lon = 0.5740013625387079;
    msg.z = 0.45777137506078913;
    msg.z_units = 60U;
    msg.radius = 0.36869203542577855;
    msg.duration = 43624U;
    msg.speed = 0.11125412001920898;
    msg.speed_units = 217U;
    msg.custom.assign("CXXIBTFGVFKPOWVFYDOPSKRVRCTRNRJTEJVXJRINENWSNMGMLKATGLSMGHQLZCYDMADEYMKIFUJVKKCHQQQHGFTCIWBGQXNUWXNEJLDJEZYIGBCBTICYQHIPSBTODKPGDSSYQRFVWJIGUCYUCJJZPBEMNBQFAVHWUFDXBTWRRVYA");

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
    msg.setTimeStamp(0.09379339981747514);
    msg.setSource(963U);
    msg.setSourceEntity(181U);
    msg.setDestination(60116U);
    msg.setDestinationEntity(3U);
    msg.plan_ref = 1623578866U;
    msg.id.assign("JWYZUXZLUSJVWNSDOUIRRQLQHOBIIXNIGJNPYZCIAPFGEWYXCZQKOTRCXGQVHHADZQGSQROMZIMABEMFVCPYMCUEZXOGTDHNPHYBMBWUWNMOHSSDUINELKRMZKULWYAVXQRNKSZWJJBJFQTWYTABXBFJVLDGLLMDONIOEGEHSKFGVVAFYKCTCTPDRBCLHAGTRESCIRFWNIVX");
    msg.memento.assign("OKHSSBYCDFYIOBBHKODWOKWVFHZPXSVZPDGBZSVTTRNYMNQMCEDUFZQOGYNWLGIPQPQFIPGYLWDZPBVJCHBTCLGJSOXHVXLMALFLRGKUIDEQYXAYRUDWKJGCVZDQXFVINKMJHCEWNARDXFIHJSMIQZWJEFRNGTNSAOOVCBRCVOBKLANCPCXTBFTZXZWAHNYKITJJKSLEQUQTVEWURUPQIOPPIJURMAMY");
    msg.lat = 0.9267937550197031;
    msg.lon = 0.1858934230468826;
    msg.z = 0.06457326931384744;
    msg.z_units = 50U;
    msg.radius = 0.38788996076253446;
    msg.duration = 4853U;
    msg.speed = 0.9822362827734665;
    msg.speed_units = 240U;
    msg.custom.assign("WZKGAWDRBPGULHVSCCJFMGEMXLFIUKHXMXJJBBCQKQCPDCUKHLTOFCMUGFTDKFZYKTYFLTQGLJQYBAZZJHYLYVYCNEITMXTBPSTC");

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
    msg.setTimeStamp(0.2477088971527911);
    msg.setSource(18145U);
    msg.setSourceEntity(203U);
    msg.setDestination(60764U);
    msg.setDestinationEntity(9U);
    msg.plan_ref = 2389711008U;
    msg.id.assign("GGVMIHUOSNZHZGURVMAPDJJLJQEYVLCFAMFKJJLUQXPSFAANJNTPWRLEUQPEVSSBYMRSG");
    msg.memento.assign("AWPEHTHPTNNDMXYNTFDGEBWSFQIEGOCEMFPIXAFQULKNNDMZRAYHLEZUCGRGTJSWSNPSZBPYJJVAJHITIHHJJMATZEWLBLSXTSVIZLQDJNKPXYCMAERXYNWEYCWUBKRYORFXXFPHUQJLYNAOCYQUHPKBAPRHRRVBGTMKVXJVGVJALDYCFDWTIIZNMKDOAUZFWSKLVOUXEEGRBGMDKGIDZKRZLBWFIOOOUMSLCCKOQUQQPHBMQTOUSX");
    msg.timeout = 13518U;
    msg.flags = 45U;
    msg.lat = 0.20805893608614956;
    msg.lon = 0.13010222763039392;
    msg.start_z = 0.18288831004792427;
    msg.start_z_units = 8U;
    msg.end_z = 0.15823866038642076;
    msg.end_z_units = 47U;
    msg.radius = 0.945336383986391;
    msg.speed = 0.2992222521751814;
    msg.speed_units = 49U;
    msg.custom.assign("XDBOBMTJXTMJVFUCGZDLPFIIKVQTVDQFTRKIEZAUTCJOISNXVSQNISWRHYPLZACGFIZLSJUZOMCVOUCBAHZZBLHROWMXBQWEDRFMSZCHYFOBZZVBQMAPYINQTCEP");

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
    msg.setTimeStamp(0.7811708734228721);
    msg.setSource(5600U);
    msg.setSourceEntity(115U);
    msg.setDestination(20184U);
    msg.setDestinationEntity(206U);
    msg.plan_ref = 652507036U;
    msg.id.assign("QFSPUYEQXLHJQMQRYLDQXFNLNPDDYAWLUEWASHRBAZBNKEQZNRPMURHHJEMRGPUGSAXCOJIENNONIOGYHPMRIIAHETSGB");
    msg.memento.assign("YNONDRLVQWRTEMTJEZWVXFAHZCGHMRQCBXKEQIGAWMTZZQIIPLMCWYQNIKGSGTYFBAIENJLHUOJRBPWRGZTYCQRKOVTBEASDZULCAKATUFYILSUFUUZNPJSEXXFWXBGKYLSVFJDAVNTRSSSBUFXFLPGCOHCDDOXNUVXHWPHAQZYKBHNRMISOBOWMCPRYVGMKMDE");
    msg.timeout = 39400U;
    msg.flags = 172U;
    msg.lat = 0.2392255482202842;
    msg.lon = 0.9853408869324486;
    msg.start_z = 0.36717501143919495;
    msg.start_z_units = 161U;
    msg.end_z = 0.05576704616509065;
    msg.end_z_units = 20U;
    msg.radius = 0.32650873681455095;
    msg.speed = 0.9038795412453569;
    msg.speed_units = 55U;
    msg.custom.assign("DFWLXVKRXBIQWOPEHPDIMMBUFKJJVCAGCSPEAEQQHYHGVIFFBCMIXATXNBXWPDMG");

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
    msg.setTimeStamp(0.7368043522519586);
    msg.setSource(31638U);
    msg.setSourceEntity(112U);
    msg.setDestination(22825U);
    msg.setDestinationEntity(37U);
    msg.plan_ref = 2358581005U;
    msg.id.assign("LFVDGIULDBPNSQREUZIFFYRQOAPWRIELUAJHBYKDTQTULUZZWCIAVSXQQCJTVOQRUBQMWANKCSHUVXFPGWSKCIORJWFJHVEOJMHMKPBCDILBLYZIJT");
    msg.memento.assign("OVKBBXDQCXIR");
    msg.timeout = 50008U;
    msg.flags = 238U;
    msg.lat = 0.0967897205904461;
    msg.lon = 0.574092819690163;
    msg.start_z = 0.8892622603959857;
    msg.start_z_units = 51U;
    msg.end_z = 0.08192815144313448;
    msg.end_z_units = 194U;
    msg.radius = 0.35566550518326245;
    msg.speed = 0.3450682052033496;
    msg.speed_units = 230U;
    msg.custom.assign("MXWZTAKWYPEDWWKTRLUXAURCNBTWBQGYFVWPHJIDRKJOUNDLIMVDUMQLPFRASNJFMEBOSFHNLVIJLDVNFTJLQPTSHTPROHCJXAUVCIGBMJXXLSEUFCZJQBZQYOKPESOQZRULDJXCEFKNZOYMOWI");

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
    msg.setTimeStamp(0.12941689524659283);
    msg.setSource(34762U);
    msg.setSourceEntity(43U);
    msg.setDestination(49449U);
    msg.setDestinationEntity(100U);
    msg.plan_ref = 1079900030U;
    msg.id.assign("WPONRIJNFWAATDQTJIDHRACUTXULRQETFYJDMBXHGRXCBDUEEAJFOFIQMIHSCXFYSSSTKHDEPGGZKGVYKYVOCVMOZXOVWTRIUGFWIONUJABJKWANMFMGDDAMNNLPSUXWOUIFLMQLKYGKCDSLGZXLEEXVZVAZTBHOKNKCLWQRPVBBWZRQHZRUEQYPRINAUZUPOYHJFTCSCWHKVNDSMJQBGTN");
    msg.memento.assign("JFIGLCZOEAKUQEQEMMPZBXCUOPCYGXAOIATTDVLUIBGLIMZPUZHMWSPWBMFSYBHHDETTWFLYPSLVNZJZVUGQRVNVZSLWSHEGYWJECUIUKAMYZCYMQANIROMXJRWXJQPOVNGGLJSIQHAIXWCFKPIALVYKNFRTBHWLRNDSKETXKBOQWTRZJEZPLK");
    msg.timeout = 5591U;
    msg.lat = 0.8904047783104604;
    msg.lon = 0.7296291094830247;
    msg.z = 0.19260720426371603;
    msg.z_units = 12U;
    msg.speed = 0.29918842725099093;
    msg.speed_units = 120U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8262607140732903;
    tmp_msg_0.y = 0.5036959163541951;
    tmp_msg_0.z = 0.4948377571118078;
    tmp_msg_0.t = 0.8248988159493551;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UERTLXIHOWWDVNGNKHLVPHDFYLVEEMUOLIUIJJRFSPBIRWINYEBMXUFQLHEGFTXDTYSQFQIKPKJDOKCPAHMBZRXFNTXJDQSZZYZLMZEXPRHWBAIQRNVKLHGATJBJDPGYMORCOSUKCTWDVBWKUAEDPNPHZJZCU");

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
    msg.setTimeStamp(0.5091144390811079);
    msg.setSource(36285U);
    msg.setSourceEntity(243U);
    msg.setDestination(22023U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 4256364325U;
    msg.id.assign("UGRXPYTFUMNCDOCOULBZOKLBJSRJOQUOPITIXABAZVQIIJLHMMRGOGEFIMWYWXYIRPCVMCJVNMCADHXGEKLANXYCNSFRKYQMUHZJWKHTMULNKDIDQFGGBWQXOKYSQSOEFKDPSFHBVZQLDLXVSCWRALAFYOYQFEVKTCSJZEPAERQRHDDGW");
    msg.memento.assign("WRCWXWNDGGFZTGPWXCGRQAELSMYNPLYJGVHFXEODQTCYCGLIDKUFDLZMQZDWNNBIQTXHJABFTHFKPCZLGKHQVVDPFTKUPZLRFUTRAKXVJVIBBRPICSHMUSDYYBSSFQDBTWIVROQYSYAJSHHLXEMXLHFOVMJDSC");
    msg.timeout = 54910U;
    msg.lat = 0.046870961938337286;
    msg.lon = 0.8018598540601153;
    msg.z = 0.7444402888101392;
    msg.z_units = 214U;
    msg.speed = 0.8819494673961581;
    msg.speed_units = 164U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7723891683652688;
    tmp_msg_0.y = 0.575160706907944;
    tmp_msg_0.z = 0.6684894516048305;
    tmp_msg_0.t = 0.7172053320689946;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VXNGQZVNLGMNYRIFSJYRLGNYGFYRVDD");

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
    msg.setTimeStamp(0.41131708187091653);
    msg.setSource(52019U);
    msg.setSourceEntity(67U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(193U);
    msg.plan_ref = 1747064116U;
    msg.id.assign("OKMBXSUDQRCPPCUSBITJICJGYRZVPZDKOVDGAEDZAXOMMDYBSQIVWFUDEXZONNPHRTVSBNRWMJKGYPWNCIOQYZTDETLFQL");
    msg.memento.assign("WIDGQOPNDKILUADCMXVWPZCRBPIDSNFSCCKHVWMKXGVLZFIEUASRRHQJJMYZOEAPUPEJNWLLHMKTORSUDNLZEILXYZRTQXLHOYIRTYFUTCGULBAQQTRYSFRYSFQMOVNADPGWUSTFFHFVAPGFQTNEOICKKKYWITGCKJVNJMZMAUJYZMYVY");
    msg.timeout = 24305U;
    msg.lat = 0.023842935526532383;
    msg.lon = 0.17384637464504626;
    msg.z = 0.2251327763970964;
    msg.z_units = 190U;
    msg.speed = 0.8541516679386533;
    msg.speed_units = 65U;
    msg.custom.assign("VCEEEYMSANIQQTBXSDNWWALWEDLZWRBOFRAAIMNUIRVBLARSYVGVQTEHQFVFPBWIGYFTROCGQGONNDTUCJKJINSATEKULXJCVYHADQHDDKZGUAGPKOYFMXZIZULHFPYTZKZXUTJTVHSOXDYOIIPJVOUPPGCHSWMOVRPFLMSCRPCXKOEZQJDUKUMHNWZUJNYCHWWNPFZIF");

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
    msg.setTimeStamp(0.8068297680215036);
    msg.setSource(31357U);
    msg.setSourceEntity(152U);
    msg.setDestination(34181U);
    msg.setDestinationEntity(222U);
    msg.x = 0.09162328521271768;
    msg.y = 0.9279949973639897;
    msg.z = 0.9638278424106809;
    msg.t = 0.6368904158589234;

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
    msg.setTimeStamp(0.7223271649219504);
    msg.setSource(26017U);
    msg.setSourceEntity(217U);
    msg.setDestination(28047U);
    msg.setDestinationEntity(87U);
    msg.x = 0.6053956064880821;
    msg.y = 0.44075411062159986;
    msg.z = 0.13552703248156528;
    msg.t = 0.18785969716896367;

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
    msg.setTimeStamp(0.005409345761120732);
    msg.setSource(8507U);
    msg.setSourceEntity(245U);
    msg.setDestination(9979U);
    msg.setDestinationEntity(107U);
    msg.x = 0.9027600922874756;
    msg.y = 0.17037558503963368;
    msg.z = 0.22309319669511873;
    msg.t = 0.2898827292495374;

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
    msg.setTimeStamp(0.2770464981751539);
    msg.setSource(60621U);
    msg.setSourceEntity(4U);
    msg.setDestination(12201U);
    msg.setDestinationEntity(45U);
    msg.plan_ref = 2581310265U;
    msg.id.assign("YZVAMCLDYTYQIQNPNFMCFBMJHSNXRQMWKSVKQPHFVVDGABZNBKERKNUJJFPBGKLXGEOCWYPUTCJBOPEJKIZXUSAYJCGKCQBWQWLSTXZISHSGQAZRDOEYLWFWJFMLEUAXOOCTOVKADBURYTTSUDGVODNFMDBLSHPSKHKWWTBACWMMPQFAXUTMRXZNIHLVCDRZIHTVDPYZBPGOEJDGVGYQIE");
    msg.memento.assign("UIXYSGBCWPAWUBNKGOOLPSBQIEPQUFDGWQXMHXXWORTSQMAUMBAABZESNJPOGBNJVFTBOPRFATDUHCKVHMJQMFUZSKNTEYTCKRRLNSYDCHIBJZEUIJEQTSYKYDZCCRGGOCZKNWGRJXGUYIXPAMDBLWBLJNKR");
    msg.timeout = 430U;
    msg.name.assign("WTYJUHDGOQGSRNPPKRBMARERSUYESAPWYMML");
    msg.custom.assign("GKTGMNOTMHBAOWGESFYRCXJHVSTKBHNBERLMBNFMHETQQNTIJNBLCLUQABFTZKSZPNOIKJSYVXWMBKQNGVNBBSUYWWZXWNERPJJKQZMETJJDUICXLWGOGDYJLGDMUUHILXHAZZFTXOVQESCRFEVCWRKFJPFEVWYZMXFEPZLLQSCTPOJYZDGHDIUYYSUAQGXQUCNAVFKKPVKPRH");

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
    msg.setTimeStamp(0.5886316108559266);
    msg.setSource(36814U);
    msg.setSourceEntity(110U);
    msg.setDestination(51176U);
    msg.setDestinationEntity(204U);
    msg.plan_ref = 4118758431U;
    msg.id.assign("ZOGGIDKQQYYARDLGEOXYPYUCUXVMRBTPOMAVHTMXSDRRSCWOAKOJZBAWSZSWJDDSAJRNVGUGMUKKPRFXIWDTEOFPBXHAZMMLRUINGQVKYLLMQAJEIZTNIXJIRPONKIBXUVYBKBTCNDTXEXFSLSLHFGPKHWHMHEIFNTGPQETZCVECKVUVMNQHPXOABVQCUTWYWZVLYFSBHEJWOQNSGODCLYH");
    msg.memento.assign("HFCSFWMWBLLPOMKUKXXNEXDNHZLRMVCGLAKFYPOKURRMIJUZZBGBQRQVUECPIVYOJWBQUTWHPTGWYBDZCSPJFRNQBPNENCRTYALIHBGHVZJWOBJOAFMIGTVIDVORESKZOUDABYFIQHNFNPQFCPQJQIYDTDWNNYAABLUWIDGLCAZLDXGJIGQICVCALUUZDXETNTQVMEOETXMRSWHFYKTKVRSSZPYKEXSDAWJGXH");
    msg.timeout = 39821U;
    msg.name.assign("RCDOSHJHMOATZTXJPPXRLQAUZKZSI");
    msg.custom.assign("OWCECFXWQKQMLAODILSQDJRYWAZWMOMKGVZCDMBCRRMCSNVAJJUJWXLHHAKIXRQEGLGYKEGSXDTPFUMDCIBUYIBYXNZNDJYLOQMPCRCFWJPPBPUFREPVIHVIGEOWHIXKLPBZGCYKLYFNYXEKFPNOSSGARORFZFEGAEHOTGFCMQSDILQZXUSDFLAANZVKWTHUUZXTSQWNBRMSIJZZPBJRVDYKNTBJHXGUTLNHU");

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
    msg.setTimeStamp(0.8543136065124894);
    msg.setSource(1585U);
    msg.setSourceEntity(107U);
    msg.setDestination(30352U);
    msg.setDestinationEntity(6U);
    msg.plan_ref = 643487435U;
    msg.id.assign("COPJWCFRXYIAIEAESQJVXXJSGXTIGXJJLPSHLHNJDMUBJTSQFWVVYTZSMZANQNIVCBPXSGPQNMKHHIYDENWLOAIERMPHCDZZQNOGHAIKYEHDIWNOBCENWSLLDSTNKDMGGEPUMQVZFAFOLOSOFLLVXTBLTRXJKCBKRTBRZFFBZXRFYHWFIAEFRTRRUDDZEQUMMBVYZDKHLVJQCWMEVJGUGVUCAHPKPDNWPUBYMATKTCQUYSPYUKIROWGOZB");
    msg.memento.assign("CBICGDWNESOFGWBSGFQPJSAXUKSJQCRECORXYVDVLGMHRXOTJMPUVFTBUPLDAQNHQTEICBJINXVHRXTSSJWDJBFXBLZKUNGBKRKITXVDUFAONFNKODIZNYMHYQMUKHVSJGOLPWOVAPFXPYAKWNUWUSSBAHRRQRINGHFOIPZELMQYFOIAETVTQAKYERCHMDDKZZJEVWRWPILCCUXMNGFWETZPHQJPGMYEMZ");
    msg.timeout = 22334U;
    msg.name.assign("HRCKYOZMCUBAQMFJALWBPXQDNNXRRWP");
    msg.custom.assign("AWJCQFLGHNXXBXTWSLBAZAOEXMAPHOVPC");

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
    msg.setTimeStamp(0.29951654257483906);
    msg.setSource(16617U);
    msg.setSourceEntity(208U);
    msg.setDestination(31369U);
    msg.setDestinationEntity(46U);
    msg.plan_ref = 2598569287U;
    msg.id.assign("PGRSFWLIMIHAYCBHSGSDWMGRRUFCETQNWMZFXMKXOKINNLJVKGQMMSZXOTDSSPNRQIFNDP");
    msg.memento.assign("VATELAWHXNPSAZXSEGDDNTUYRKGIFGLYVMQBVEXSNFNRMZTNAKOAQWWPJRMPZZVFKNJLQBWUHCCXVHOUBQXPWRUVOLZOISAFEFUUZHTYBLHUPQANGHICEEYCXRHSCJRKFPVLRQIXDMSPULFEHHIMMWDMDFPZKDJUWYZDVCIYELTBQLDNLSZEJRBANGBGZSKJMBIWWJFGGTYOPKWOYEYSOODKRXCBAXIGKDIJUJCQCGMQHOVCNTBARVXPMT");
    msg.lat = 0.22454042921177286;
    msg.lon = 0.9398966627622332;
    msg.z = 0.05731104022387601;
    msg.z_units = 57U;
    msg.speed = 0.1930577753869802;
    msg.speed_units = 33U;
    msg.start_time = 0.3456876023305575;
    msg.custom.assign("BAKJZXHEHYMXQJJRSLGBWSRZGXCNCHXVABGWBPTDJQMLGJKXRKQTRICYOKAANJQCJCIUCGJSLD");

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
    msg.setTimeStamp(0.9687807430535313);
    msg.setSource(38803U);
    msg.setSourceEntity(21U);
    msg.setDestination(36143U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 3237957127U;
    msg.id.assign("GHOAAQBAQIVFWTLXSEYWBYAARSEJEPTUXXZPFTIRQJHSOGFWJQHMMXQFNEVVUDGCUFXLESITGGNYZKAIXOFYPVJDPEGOZTKPQIDGIWGHUTVBJMULTHKDRRKNCLNYBEVZSMZBJXNHKHVRCRYMMTPDJYJKXPDNIKFINCYRMLMLZEDFQSONIPCBBJLVFDHRAUSZBLYKOOAOCKWNENLGSZRXEWCYOUWDTPRVAZPSWLQABVCMK");
    msg.memento.assign("MPLLOEAODBIABVRJNKKTBKGMRJNGGYAWMOMEJHJJIFFWHDKIACYDENQQYKVKLIBXYJDHUUTVXZFZNWWHQVPTRRTHDKSGXITDZAPSKUKABIJLGOURVNBYYESUSWXHTROTDMFAMDEGCFEVYPOXZLQRZSQHWPI");
    msg.lat = 0.48919233837293497;
    msg.lon = 0.999857076989645;
    msg.z = 0.6717088173567727;
    msg.z_units = 46U;
    msg.speed = 0.7789422724955551;
    msg.speed_units = 8U;
    msg.start_time = 0.750170707542901;
    msg.custom.assign("GQHZSMGQFUPDUIJRMYKMPJWFTLWTMPWZJXPKUCLMADFSCGOGJLNXNOYBHD");

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
    msg.setTimeStamp(0.0007174140614428781);
    msg.setSource(345U);
    msg.setSourceEntity(187U);
    msg.setDestination(3067U);
    msg.setDestinationEntity(248U);
    msg.plan_ref = 8445257U;
    msg.id.assign("DTTZHPVYHIKEOOOUFZGPAKCHNKBEGZHBOJTFEVRGLYRCYCHUJLYMWIDQNMXWJDLSVUFVRCYMIVZQFBNHUCMAOLZOEWEJECVBJIXYUOSALEKDQIJCRAFEWWGKNQPZSLRLCPMZBESINDGSTKSPXXUOCXALLJDGRPHEHWQQGOATMFMXBGMSHXKTYIIMNABYNRGLTIVWVPQYPRBSRVTAQVWHZCTYJUD");
    msg.memento.assign("YYFSDDEPZVHRQJMDPFXWSVLCLKZPKFCIOFIJQFXGTXPNFZLDMOAVTPTUCTBESKPPAGDTMXYJJZOTAJKSYSXQEIILQVCEJXKRHUNRZKJHCNGFUAQSLBBQSYTXNOLJBORCUVIBQKCZUFUARXDGINUKERUBUGERAWUEKYFCDWGQBMAPEQCWGWXLZON");
    msg.lat = 0.20796738796832193;
    msg.lon = 0.6642017606291164;
    msg.z = 0.6184296654793866;
    msg.z_units = 218U;
    msg.speed = 0.4520310065808276;
    msg.speed_units = 136U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9152249122664545;
    tmp_msg_0.y = 0.55953060690006;
    tmp_msg_0.z = 0.5824498573934667;
    tmp_msg_0.t = 0.3024791182633374;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 12644U;
    tmp_msg_1.off_x = 0.8683986744568728;
    tmp_msg_1.off_y = 0.8738888232798553;
    tmp_msg_1.off_z = 0.18601549420889107;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.3028588562960197;
    msg.custom.assign("LBBVYREFZMVZOQHQKRCOMJEWBCQYNHPVXUQEMOVUIGMRSEFTSHRYOMUSBGUFRTASXHPHTDJLECWZWLMEZURVZMZFDAMXICDIOPDPDTAUVMNNANQKFVPQKFJGLGBOYWVISZJDFXRNBWAIYQVKRNYDEWKYQLBOISJGSPNCPOBQAXAKAIHUCOQLUXEVMDXZCGXDUPFGJTCNZAJLXRTRHSKKGCSYLZIWHNYKYJDPNGGFTTKLJEIIUECFJH");

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
    msg.setTimeStamp(0.6104613416241064);
    msg.setSource(7620U);
    msg.setSourceEntity(212U);
    msg.setDestination(48126U);
    msg.setDestinationEntity(127U);
    msg.vid = 11485U;
    msg.off_x = 0.4631573651721106;
    msg.off_y = 0.14029851842897023;
    msg.off_z = 0.785122924690018;

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
    msg.setTimeStamp(0.9317668186314937);
    msg.setSource(30449U);
    msg.setSourceEntity(164U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(116U);
    msg.vid = 22373U;
    msg.off_x = 0.16937339390118777;
    msg.off_y = 0.7495564454087399;
    msg.off_z = 0.8307702398385144;

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
    msg.setTimeStamp(0.6024846408906874);
    msg.setSource(15667U);
    msg.setSourceEntity(69U);
    msg.setDestination(8940U);
    msg.setDestinationEntity(251U);
    msg.vid = 62612U;
    msg.off_x = 0.5801919269464577;
    msg.off_y = 0.9553204279144951;
    msg.off_z = 0.43328068966032196;

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
    msg.setTimeStamp(0.4556224306404719);
    msg.setSource(61058U);
    msg.setSourceEntity(250U);
    msg.setDestination(31982U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.6780533073777381);
    msg.setSource(49100U);
    msg.setSourceEntity(251U);
    msg.setDestination(3595U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.5427685710398483);
    msg.setSource(40163U);
    msg.setSourceEntity(236U);
    msg.setDestination(19566U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.827849557809633);
    msg.setSource(11791U);
    msg.setSourceEntity(103U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(168U);
    msg.mid = 27857U;

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
    msg.setTimeStamp(0.5900212324043558);
    msg.setSource(30010U);
    msg.setSourceEntity(78U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(117U);
    msg.mid = 45307U;

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
    msg.setTimeStamp(0.4739875928058753);
    msg.setSource(20616U);
    msg.setSourceEntity(98U);
    msg.setDestination(37543U);
    msg.setDestinationEntity(63U);
    msg.mid = 43105U;

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
    msg.setTimeStamp(0.9007138118121599);
    msg.setSource(8552U);
    msg.setSourceEntity(2U);
    msg.setDestination(7456U);
    msg.setDestinationEntity(127U);
    msg.id.assign("HEXEQSTASWTTSPVZV");
    msg.type = 41496U;
    msg.state = 161U;
    msg.eta = 50547U;
    msg.info.assign("XJYVLUGBTSSNGMKNXCMGERRFVPBCQAXTNEJRNDGWIXAOTJQGFVQLHSXRCLULHAVFYBHRVDKTLZDDAYJTPOMGOEFBKPPQQGTBHPYTPQIYKWAWMCZXQNFAFHZKFRHTVIWDPDKMROUOEEEQJEOUSYIIHUMQ");

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
    msg.setTimeStamp(0.2986867647221846);
    msg.setSource(56804U);
    msg.setSourceEntity(134U);
    msg.setDestination(55447U);
    msg.setDestinationEntity(146U);
    msg.id.assign("TEPQKSXOACZOQNOGABDIDXXABKUZSEMHLUDHNOJLYAPPLHNFRWZZUJJMWPNQJACZNLDYH");
    msg.type = 60662U;
    msg.state = 118U;
    msg.eta = 52786U;
    msg.info.assign("BJDTFMIRHXHKLXMGBLMXRRBDYAFUKXWVTSTPKYTCXQHQOHDJGDDZPNWDSTGMLQFCEMINAQZZMPUDFCLPALVLJGTYAYWAFKGZNLWJJICBWPEKQWOUCKHGDSXB");

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
    msg.setTimeStamp(0.07300972983099763);
    msg.setSource(50766U);
    msg.setSourceEntity(254U);
    msg.setDestination(41424U);
    msg.setDestinationEntity(123U);
    msg.id.assign("PBUMBHVGPYRKBLCJMOFANYJQMCXSZFQVHGDUQDJHHJDRTMTNKUSUZYNNYNPUTDAQQMTZOKQWEI");
    msg.type = 23584U;
    msg.state = 234U;
    msg.eta = 50942U;
    msg.info.assign("UCPQCUXSGCXGNWWYFHZNMRJQRDPOUWSNWOWMRQOWIMUYZPDGLSFCGMKTOXKTALGMVZOFZYUEKMANBTYJXZHPCKRCDRSHFNIHAIUSOHEVOSDPDITVJVNZIBFJJEAYURJEEAWELMLSRDAUHWBZPMMIOPXTMPOLAFFAYVHBJXFBCISF");

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
    msg.setTimeStamp(0.6385369189502743);
    msg.setSource(17545U);
    msg.setSourceEntity(204U);
    msg.setDestination(844U);
    msg.setDestinationEntity(214U);
    msg.plan_ref = 3075625679U;
    msg.id.assign("QABYJRTVXRBZOZAUJTGMXWJSUOQZTJPMBFEYNSEYOMYKSQRIANPKLGHUGQEMNEDVZNRYTLHOALTIWFJWFTXGLLJZKSBYBICSDFTEBXHWAOHEKDAUSCLQGIINGHMXNZLPDETJTBAGDLBFTFSEOPFCSLDVYYPDKGOYNCMPMIAZAJCXDQMUIWVSPIRXKKGFRQPIPERYUUMZXJGKWXNVWZD");
    msg.memento.assign("GHAYFMWXXHOUHCJXTJVAFZEFPAYILVWSOWGDHBBGSMSPIRTQLZUCHTYCKULCUWKJJKBADIXUTWBJITLJXEXFEENNNVGUVNZLZYLGP");
    msg.system = 34847U;
    msg.duration = 43687U;
    msg.speed = 0.7588006609004345;
    msg.speed_units = 56U;
    msg.x = 0.021923818649341897;
    msg.y = 0.8140183362227745;
    msg.z = 0.38972951478078266;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.9762871360618657);
    msg.setSource(4125U);
    msg.setSourceEntity(154U);
    msg.setDestination(45370U);
    msg.setDestinationEntity(202U);
    msg.plan_ref = 2603120027U;
    msg.id.assign("ZSFAORDNZOFEWKYGNNSHDEDMTBMDKJYLHJLIZVHMKBUTLBYSEJPZWWGSVUJBSAUIZSFLNLBXVCRQCJFXMZCNQIVWDCQRLPOYRVKALLQKJPNDPFNDEXMCVIJETMEFIAUPXKFAWWDSKKQGEZHTIXNBICYRCYOTLBGNJEMUHFYAICYPGLHZIQURIHHNEUVOWTXUQXXORPMKBDKVWPODRUSGOATGQT");
    msg.memento.assign("MHZSPPYMTRIVNVBCKRNQPAIJNVOMRPUWLXOOMTZYFPOVPGKWGAESJYCQFNOMQXYALOSGFWHUGELLEKELUDINDXEJHAYXZTFDNMAHPCLHGQXBJJDECTESZBCPGIKXHZHDURSCILDQBQJBOVADWFRFMTNTSEZAQLZPUNPFWMOYUIZIFADCHQUKJLWFXNKTDCIVKW");
    msg.system = 46364U;
    msg.duration = 54021U;
    msg.speed = 0.919879972770081;
    msg.speed_units = 103U;
    msg.x = 0.9366312569362651;
    msg.y = 0.36624156462029955;
    msg.z = 0.9871250495768498;
    msg.z_units = 189U;

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
    msg.setTimeStamp(0.5497271278598589);
    msg.setSource(55847U);
    msg.setSourceEntity(200U);
    msg.setDestination(26463U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 2058556576U;
    msg.id.assign("XFYUNBUGLHCTFRMBYRWCRDJZLFVYOUDSMINVBXRVVJCKTTVISVKTLQUNIAJREVDVQHOPKBKPPZLFQMMAJEMIEGNXICTZHOGDPW");
    msg.memento.assign("LFETTMAMXKGERMZJUIIXCXPFPGIXDZLLDZEZKITPVNUSSHALJXBHIDFCGYIEQVMSHFXVAHRHAJJTIQSNBGKDQYAUVOZHKCYJSNKEFCMBNBVOFLDVNQQAKKGEUMYAGWJLYWUWBOHMTRWVBQCPYTNZJDTBPXSRCTUOISKNTBSFCYLGPIPLHEOOYWGZETQXOPRCDLEMVFDAOOBVXHAUWHUZNUCMWFSXRMQBDJPGYOQSNJ");
    msg.system = 10620U;
    msg.duration = 17342U;
    msg.speed = 0.2454942517723001;
    msg.speed_units = 72U;
    msg.x = 0.27551020110588276;
    msg.y = 0.8439238704511635;
    msg.z = 0.3160064625978365;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.16856033090202194);
    msg.setSource(28627U);
    msg.setSourceEntity(203U);
    msg.setDestination(7098U);
    msg.setDestinationEntity(95U);
    msg.plan_ref = 1213076431U;
    msg.id.assign("RSDYFIJBANQDCDMHHZSZAKBIDQADPMMQDLWACURIKSHJJOUGSFIKLRDKGGSOGBJKABBHTZXZYYYUPVCRJRVHWFTYXGATXSJEHTZENUINSRENHKCQUFVPUPYBFFOYTYZGTKMVQCMOMDGI");
    msg.memento.assign("FUBQELZTQYWVJXSPKTXEMYWBSRDXDYZMDVSFUSBYYJCYNQWIHWNRLHOLXVUNMMERFCBGZAGPMFFNBLHPRHLVFOGCKCQPRDEUKAECAVVDFOAZIJGUCEDSITDIKBZFZRFSDUESRCWPWTIYWQMPNHNIDWXEYLSKCJQJOLGMTFGHKRGTGISZXMPRPOJZBASKOQBYBPWVGHVVLXQYUWMRECCQUB");
    msg.lat = 0.8748899852994074;
    msg.lon = 0.9603261982902069;
    msg.speed = 0.12213882807050314;
    msg.speed_units = 141U;
    msg.duration = 2063U;
    msg.sys_a = 23550U;
    msg.sys_b = 26917U;
    msg.move_threshold = 0.6322397077034403;

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
    msg.setTimeStamp(0.960781363599926);
    msg.setSource(26059U);
    msg.setSourceEntity(110U);
    msg.setDestination(27345U);
    msg.setDestinationEntity(249U);
    msg.plan_ref = 2417285342U;
    msg.id.assign("IYFPUBMBAZQLPBRCKSXRTEZQEYTNHIYEQRDXAOWSYHLIOWYTKSXTTJAVYOIRVPDUVVPKTUGJZZIFDXGXAEFPOSOLMBWWWAJZNSBCNVVHCLZRQKDUOZUCEJBUHSFOXHZCWDOYQTQQUNCQNYRJMJLWPAHEZMEPGKNZMG");
    msg.memento.assign("BSOPSRZMZBURNBBUFSHMUIFF");
    msg.lat = 0.5797271592188641;
    msg.lon = 0.7497008263913109;
    msg.speed = 0.9198360335425131;
    msg.speed_units = 242U;
    msg.duration = 16034U;
    msg.sys_a = 18718U;
    msg.sys_b = 41595U;
    msg.move_threshold = 0.8088387229022233;

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
    msg.setTimeStamp(0.8084639897445977);
    msg.setSource(35069U);
    msg.setSourceEntity(94U);
    msg.setDestination(53104U);
    msg.setDestinationEntity(235U);
    msg.plan_ref = 1980511361U;
    msg.id.assign("VQCFJMSPITJUEQNTXJYPNRNMGQWVGPDBOSBBCFEQBFKNAVGPSUNIYHIFWMETMATISXRNUPVDOTPLGIRHJRPOTWSSBVJLJEKALWQDCLYGFLYNMUXLZJKYDU");
    msg.memento.assign("ZHFRJNUPBXVZVRTZTNMKALDRWDJXIBXBGHHGZRLMWMBZTAWAYOHQQKYANLDQUEAWKOMNVUQDJDUFEISPVWRAWIMTDUFBDSINNEKYOZABJHPVWECCIK");
    msg.lat = 0.7480824556645742;
    msg.lon = 0.6847848708733971;
    msg.speed = 0.29554412268269015;
    msg.speed_units = 181U;
    msg.duration = 9228U;
    msg.sys_a = 53835U;
    msg.sys_b = 354U;
    msg.move_threshold = 0.28543611753693077;

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
    msg.setTimeStamp(0.2109862500719204);
    msg.setSource(18737U);
    msg.setSourceEntity(144U);
    msg.setDestination(34048U);
    msg.setDestinationEntity(199U);
    msg.plan_ref = 347648438U;
    msg.id.assign("EVDZYPKOTOLFKPBPSRBYYXAWZGHJIUMEMEWOIDYHXVTZIKQYLKUPPOASNCHFCABJYBJLNNRGDFIQJWLLBILPKEHRVWIRXMCQAJXZVRAFDNTEBSNOAFOQXGIXCQTOUFIAVDDBWMOUHYKYCPXGZMEWHZLLCKCMNEAWNRVGTBLQNTPHBDZDKIVYFTDUQR");
    msg.memento.assign("NLFRBFAKRIEYVRZGNMQLMMWBUUXXGQIDKPSOUBOAWIWJDJQGBPGATZRUICXGWPSLDDTCQTOYYCEQALBYMWDBQJQDJHMAZMBHHEOOTNFDWRCCTZOYNSSKOVIHTUVHAYNJWNTBVHWZVDIVKRLASJADVEEXUFHMULGOLCZEXRXYNUIKJPIYXSTLHZXDOKVJ");
    msg.lat = 0.041411700872817536;
    msg.lon = 0.6648866685653628;
    msg.z = 0.515234356907764;
    msg.z_units = 39U;
    msg.speed = 0.20126953792112312;
    msg.speed_units = 43U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6962351114085396;
    tmp_msg_0.lon = 0.9834207768822463;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZZLMPTMINTUMJNXYMPELFGZJTSRTUHXQEEBONPHKGDSXPSWRDCFOAABBIHJJHVRJKKCWGVKSEDLJQBVZOHDEGORVZLYOMAMSLQFUEMZEVBXFITUZNNRBXPNEKSFRGAIIYVWNAUCRYVYGQPFCMKHHQLZILXDIQARJWTCCOORWPNYWCMNHCTUHDXTSJPDJJAQGCFAPD");

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
    msg.setTimeStamp(0.04750436882890907);
    msg.setSource(58496U);
    msg.setSourceEntity(218U);
    msg.setDestination(16991U);
    msg.setDestinationEntity(246U);
    msg.plan_ref = 536913418U;
    msg.id.assign("VJCOKTRUTRMFPFNZBWLIQBSAHSVLGLDGY");
    msg.memento.assign("AYUVXTYNSKJNYQWIZACGAJLMXFDTPRKXUKDBTXFINYRIMYXOZDWYAKNCIEVMZPUVXBFOEUFSEGGSVBCSBWPCMQQQZERVHZWEDBHWPMCGMSDDQDUXZROUWXFLKTOCTCKJEHEGHNJDNGOZYHSVYCETWBRZBSYZUNOAJMXNQJFTLVSUFHIOLHJVGTP");
    msg.lat = 0.8902093258954472;
    msg.lon = 0.7497650925650813;
    msg.z = 0.4818700731444182;
    msg.z_units = 137U;
    msg.speed = 0.6967695881686606;
    msg.speed_units = 7U;
    msg.custom.assign("JBQALKCZNXIZOUQNDPMVAWUQYICETYAKMKVGKGIFCRATE");

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
    msg.setTimeStamp(0.5299078695682771);
    msg.setSource(52029U);
    msg.setSourceEntity(226U);
    msg.setDestination(17548U);
    msg.setDestinationEntity(76U);
    msg.plan_ref = 3847639956U;
    msg.id.assign("WLLZYEMOQMDSOHYEOUYHKUQFHIFCNQWLXRBLVCIMJGCATISHQUITUUCYISAMTXNRIMNDLOIPOCWJGLSQEXJAFMTRNCDVBXYBWGFCGSQVYPPLADVCRSPSNIJRTFFGREOEDZTUXGWMKPTEKNNFLKTANADURYNVPSFXUKMGJIAOPHXPRWKVYHWBQGZVDWFQZYSDTHVCGQAEYHBBEMJZCPJDZKIJJHXKKOAB");
    msg.memento.assign("DJOJZHJPDLHWERECNHNRJSOTNBQHCFDQVKOWRVGFBBLBITMJVYUBPV");
    msg.lat = 0.6990401922447959;
    msg.lon = 0.6167576013711554;
    msg.z = 0.5157200368462186;
    msg.z_units = 234U;
    msg.speed = 0.4956848256449594;
    msg.speed_units = 188U;
    msg.custom.assign("TZNYFPOPIBSLIRYQTOJHUHRXQXCNMRYL");

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
    msg.setTimeStamp(0.44306251267483565);
    msg.setSource(47500U);
    msg.setSourceEntity(87U);
    msg.setDestination(43997U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.9721036916158324;
    msg.lon = 0.6412972470534343;

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
    msg.setTimeStamp(0.7137396989177223);
    msg.setSource(11320U);
    msg.setSourceEntity(214U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.15040753342757962;
    msg.lon = 0.5719936389691708;

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
    msg.setTimeStamp(0.049038786737565676);
    msg.setSource(46347U);
    msg.setSourceEntity(232U);
    msg.setDestination(38996U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.023146726056523903;
    msg.lon = 0.7310845884846116;

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
    msg.setTimeStamp(0.44293996701662564);
    msg.setSource(26641U);
    msg.setSourceEntity(120U);
    msg.setDestination(8194U);
    msg.setDestinationEntity(10U);
    msg.plan_ref = 3469938649U;
    msg.id.assign("NNTFQUJPSSFDYUKMIIFYQCUEDAHBYWFCGLFQZJOOURZBIHBUYJKAFZAUCKPNDJRNWTWLUZWWIBKDHSDGOIGEMPXOMZDJFWETMLUKTCVNRYUOSSBTWDXMY");
    msg.memento.assign("PWJAPRUVHRZKEJDUGTXRXIOEJAXHNIPEFIUPGOVMZTETDBLBNUSGLULQGUGBIHYRXNUMRQJFYCQKQGKWXCCHYPZTZLKWWKQTZFFHXINDGOBE");
    msg.timeout = 20304U;
    msg.lat = 0.920381543640514;
    msg.lon = 0.918950381480216;
    msg.z = 0.8785795651451787;
    msg.z_units = 221U;
    msg.pitch = 0.1622435860965321;
    msg.amplitude = 0.07613303984620057;
    msg.duration = 38087U;
    msg.speed = 0.5222210883316526;
    msg.speed_units = 177U;
    msg.radius = 0.8988091972074651;
    msg.direction = 251U;
    msg.custom.assign("CENOIPYXAIMTXXEVSFYIGDANQYCBRLFTSHCDDHVUTTKNPBASCNZVDQWNLIGZQUXKTAOOPZLUMRZBYCFQCGTYFVGEP");

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
    msg.setTimeStamp(0.5959499230607486);
    msg.setSource(51632U);
    msg.setSourceEntity(108U);
    msg.setDestination(44964U);
    msg.setDestinationEntity(222U);
    msg.plan_ref = 486045106U;
    msg.id.assign("QRVGZHQKBKKBMIXBJKVJWBXLASBRYMDOHDOYWTFAMEYIGKRJARRITHDHDLBKQCHYUWNLCZYEOZBFOZVSQFEVANLOTLABWPTXOGQZZNHEBIWHTYTDCRVTWSIVAOGPEVUJMODSGCZLLFHNZCUMQSSICAXRNAFZGXAJXEKXBYPNSLGFETMTFUCWNMRPYUHLTPRMKJSMUIJUDPHAOIWYJFJQXIXCVZGWQVKFCUNEQFDELCEIPGNQSVDDOMJPS");
    msg.memento.assign("NYSEGBIFLEEYMADMNGWFCAHUKLRKWLMDZXWSQTTIWOWRKSXMRXNVNPYPSXHBECVHHAFIMCLDKJQSJQGQTWMUZFHMTFTVKNITCOBGDXLVIJFIKBBIZBXPVFOVJTGPTLYUNBFUGECXWZ");
    msg.timeout = 44508U;
    msg.lat = 0.028746843465259464;
    msg.lon = 0.03964462560348625;
    msg.z = 0.7182844437950366;
    msg.z_units = 1U;
    msg.pitch = 0.2960436235775591;
    msg.amplitude = 0.814861262262949;
    msg.duration = 57571U;
    msg.speed = 0.24561013625026007;
    msg.speed_units = 138U;
    msg.radius = 0.9085322477220394;
    msg.direction = 192U;
    msg.custom.assign("XCOCAFDCIZEEIMROYKHKNAGOJATWNRYUIYXVEMBSDDTUMHPSGLIHUPZNPGIRQPLCGPCUABWHKYGEDCEVWEJWTJEJCPKPTULJODKCNYSMMYTJLWQWXJBKFONXFTQEVIJGBVOUJLATKHOSWTFBMHFRVXWQUQUNFSIVDLTQHZIQNYDMMQNEOJZYRMYWSGAFSUKLSUKFARBFVNQIDZW");

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
    msg.setTimeStamp(0.3116246417879649);
    msg.setSource(21669U);
    msg.setSourceEntity(9U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(237U);
    msg.plan_ref = 1851563036U;
    msg.id.assign("JJECPCJRTIRAKMMPSYWSPRSMTFKEWQCDEXZVPYOJ");
    msg.memento.assign("RGFHBWEVBJGNXMKQHPMSCVTOXRNGYVZJQRHZXRKJLFCKACTSNHHCQQOPMLOYFHNCHZETFSCEDSUCUNIIUGVWBNLONDMVAWIKYIBRTFEUMJRWKYSVMNQKJA");
    msg.timeout = 60531U;
    msg.lat = 0.42502757364210486;
    msg.lon = 0.2464213621307485;
    msg.z = 0.6707653263391521;
    msg.z_units = 14U;
    msg.pitch = 0.9077873424922952;
    msg.amplitude = 0.8709469865638076;
    msg.duration = 2566U;
    msg.speed = 0.6172796095870017;
    msg.speed_units = 153U;
    msg.radius = 0.9938063226111306;
    msg.direction = 157U;
    msg.custom.assign("HDEJXXHUMBLS");

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
    msg.setTimeStamp(0.8933110226363601);
    msg.setSource(43530U);
    msg.setSourceEntity(95U);
    msg.setDestination(20783U);
    msg.setDestinationEntity(88U);
    msg.formation_name.assign("UZRUVNBVLVSTGBSQIRKWXQSCYAUNYYSRQZIMOFBWNYCRWKZLBUHMYMXINQXMKEDMVHGZAKSY");
    msg.reference_frame = 27U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63661U;
    tmp_msg_0.off_x = 0.4161600010406794;
    tmp_msg_0.off_y = 0.11054760891192861;
    tmp_msg_0.off_z = 0.21852251511061338;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LPXOIWKSLRPXIEGSJGORXUSJCHZLCTGDQWUFOQDBEZEYMULVKHARIPVSFJHBVYGPBRMIRENADNXOJOV");

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
    msg.setTimeStamp(0.6165586249448193);
    msg.setSource(44032U);
    msg.setSourceEntity(114U);
    msg.setDestination(58006U);
    msg.setDestinationEntity(246U);
    msg.formation_name.assign("BVYGWQOQBUYXXVUVMVTMRUZHPPXHXIFLJFVGMIZRIDPLABNAOSXKDYGYKDCHEMJRJGQAUQBIPAZDTGQXETFNLWURQOBXMNOKHDDVDTMICLCEKPTPUGDHEATUSGCCOPSWHCUFMDZRZYHYLSWDKIMAWSIZQQZYRNNATBBFLIXFNWEMVSLYOPOGWJRKAYOQCTWJQVPJWCBKN");
    msg.reference_frame = 53U;
    msg.custom.assign("FPQWVIGJSKGEKUKZLLMIWGZNHDDKXOYICGDLVWDLQEC");

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
    msg.setTimeStamp(0.7746032176398362);
    msg.setSource(51745U);
    msg.setSourceEntity(235U);
    msg.setDestination(55295U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("FOGOJBCBSSNQMCZTFIYPMKVAXIMVIQFVOWYBCLPBUIJZJHVEAQDW");
    msg.reference_frame = 218U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65075U;
    tmp_msg_0.off_x = 0.32311510600376503;
    tmp_msg_0.off_y = 0.9319037670168009;
    tmp_msg_0.off_z = 0.00038464660213166635;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XHETEGZXOGWOTBNDVSUOMZERJRSKURPIGHQUXGCKQVJBWMSZPWVMPJNFZTWOATWQTMRIKDLBAVHQVGIPOCFIIYJHJDMRVAZTZBZKPYNBRJKXUYJPAINRTLYAKCWILPKLFWOWNFVXQMOPARFFBSQFGSYVHLOYCTEMXTEVTHGYPMDQLKGWFNPBYSFWCEZMUHASDRKLXQAXDQDD");

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
    msg.setTimeStamp(0.9873690371092773);
    msg.setSource(17671U);
    msg.setSourceEntity(105U);
    msg.setDestination(25812U);
    msg.setDestinationEntity(44U);
    msg.plan_ref = 2906930846U;
    msg.id.assign("KUIDWZDHIDKSARVQEJBQPWUIGWHACTORRTKTTCCADEGFCQFONYUWVHBHXTMWJYJPLXWPWGILSLBMPKTKYACFGOYBADHKDAJTLHMZSMQAMVCXXMREYKSANGVSCXHISYOZDRWNQDEGEIZFIFONTYRYZ");
    msg.memento.assign("QOBXIMWAFUZZ");
    msg.group_name.assign("KTLZZOBAFRLSZCGYVWPTYXOQISBJMEODTCDHJTMWIMPLTEAMRWHBSZIQJKFRNQALXWDMLYNQCZGPHRZBIBNNAPXVFBSWVWWVPZFFGBGQJFMINYVINPOGNICEAXSLVHUTGDHLWD");
    msg.formation_name.assign("YQPDIXWZUANMBZSADXPMRVNKOLQFRLZTFY");
    msg.plan_id.assign("AYTQIGBCVUMEOOIVVBUVXYDLAJJVZLUKVCTTMYKZPCVYPHBZGZRRZ");
    msg.description.assign("PJDGYGJHLZQIFBUCWDNIBYVBXTCPGVRUDSVUGRMTFSAAARKYVAAAKOUTRLBFIDSKFSFHPSMQLXCMWMNIWSIMHQHVGORQESYKQUWTQEELSODNXTETYANPQNOZYKZJXXOIJZUKWYKUGUZTZDPWHPGTHBNOWBYPHRIIZXUSMBZMY");
    msg.leader_speed = 0.6195795422863384;
    msg.leader_bank_lim = 0.679064622628282;
    msg.pos_sim_err_lim = 0.08719855979585711;
    msg.pos_sim_err_wrn = 0.5375474660037028;
    msg.pos_sim_err_timeout = 23585U;
    msg.converg_max = 0.08055354943478676;
    msg.converg_timeout = 18575U;
    msg.comms_timeout = 52940U;
    msg.turb_lim = 0.6400688487735415;
    msg.custom.assign("ZXTWWSLTGZLSRQLKCSMUIFHEOFUZRPMEZIGTJAIRGNBIDWZHPUOUVCLDRENBNYJAHCEVMDYYFPTFUBJVCZYUUKJEGLEQHRTVROPKMQTXDWAODDZOVOGYLSFIJZWEBCIVYJBKPJXPTZTNTLDASFFBYBHAMQTOKCPGNZHQFMKSQEXQFKWOPLISMSPRVGPUNNHYAWYEKACIXIJWJRJDVHX");

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
    msg.setTimeStamp(0.6255087633486586);
    msg.setSource(31220U);
    msg.setSourceEntity(49U);
    msg.setDestination(6133U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 803978550U;
    msg.id.assign("VHZWSKJZDUSPTSBACFANDNSOQZQCKACTHPJLESWHIXPOYSOVQYBYQEWHDEYFGVAPDPDRWWDWMZPGGQTATCLITVZVAXDEIFRAPOWFWDILQEZWKUYIOJBILRQFJPUJFGMCHHKGLJUKMTCJCULTOBENCXSEMFYXROHXNBFCHLVKIKENURMOATHVBRUASLUDXQV");
    msg.memento.assign("ICOASCIWVVJLZBXSHSGNVCRTNDOIHDFYEGFSQSWNWCAMINPOEPZGOTNUQDGEIQMFOMQSKLAGMVXWAJIWLIAYBTUQRBEJUKFCMVWGZGFVXOXZYLPYSIMVFLGTKDCTTFUPHXRQWXXMEKRKREPKRERXHBNVQZPTODBRBKZAYKUPCOJHIAGOJG");
    msg.group_name.assign("BAELXBECFXQMGBBUZGTGOXCLYBXXZGIVJTZLYUGNIVSDAZYPHXHXCCDNOZHZEIKVEEYEMSWTLDUKFLBALFHWOSRYSWKPVVJOPUTFPAUWLTACZFLSJTRFPADCIMZRNBPSIKPJDQOUSLRRERMTOOBAQTWWZJDSCGUVKQUYKVIHFFQPNIW");
    msg.formation_name.assign("MGINLXRXDVDCNZBPIFTGSLLJPWRAWADZXHEKGSLPFODYOSOVEWBBCKXMXAPQJSPVJEMSQRAKSIVFIXOYKTLVFWYYFEJGKBAVHXLMESZYTQNDOEIZLURTVTDNKUYPPWWOFFXVZFUILGURSTQNJWNJYYAAIMCCHXZLGFMTWGQBZHTDCOVBOYUB");
    msg.plan_id.assign("LWZPEYOAFBOWOJGMOMUJMCVMDLXWIATHXGEAFFHGHKKWBLMYKFHUTXZHMCRNJENJVYZZQDGYHPSKGOTPTMIUISEBJCIVYRESLAQJVHZRELSFOQKQLAXDFTCBNBETQNWSWENIRDJUUZLCDYWIWGBXFUJUXVGSNCMBWKDACKLTOWRFRVUIIOGTLPHXCUVZNDZPSSAPGEMPJASQOVYNFQNYLKSBXTR");
    msg.description.assign("HKQIMNZFNNGYACWWJGL");
    msg.leader_speed = 0.26285857009324476;
    msg.leader_bank_lim = 0.3333737419658551;
    msg.pos_sim_err_lim = 0.9486751993949228;
    msg.pos_sim_err_wrn = 0.7866420362306032;
    msg.pos_sim_err_timeout = 41231U;
    msg.converg_max = 0.5885769223000908;
    msg.converg_timeout = 38317U;
    msg.comms_timeout = 33380U;
    msg.turb_lim = 0.12666800995311644;
    msg.custom.assign("CGHYVKQOIJBNJYHUIKNPAFKNTBVWEKHMWENLSLGZRIIIUXUTAZULRNPYEYDMTPLQZHOQTQTZXRDMBWDKPEDIZSSXAPFSCHQDXIODUZJMGROXLVFSRMJXTRNNZFZEFTHWGQMFKOQTWQGDRMFMDRWWVJIZCOJAKPMCEUPCGLYABHLYCNJGUEBRAYEAXRJKCOUSVPELQAISZAYJGGYAPFGPNCLUSNCJXBKHLWBVSFBUTXMWEHYVOBWVKDC");

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
    msg.setTimeStamp(0.4348802599983973);
    msg.setSource(35194U);
    msg.setSourceEntity(115U);
    msg.setDestination(46639U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 1766379840U;
    msg.id.assign("VZWMYECSRJFIHFEXFAAHQHVCZMCUCOKNDDZBINCUWIVRFGTO");
    msg.memento.assign("TDCZRBTTWTOZICFFXVCMQVFNNCFBBRPIVDXDKVRRDPLYRXUFODNDQXMQOGVYLYERMHTLJLNWMIGQEVBUIEQAHAAUMUSKUGSAHECGDAXWLSVLDEGMZNLQXZHVCUJIOZGTQNMMHHESSBWXBGQIFDYKJAFJXWSPEXEKITIDPLRTGGYOOZOQMFHYJNHZFNKCTAPPUKPVQJYBYFRJIWYOZJNOULUNGPVTZRZSRCUWPM");
    msg.group_name.assign("PLQLKPMXIIZDPUYPKZUGOZASQNYCGQHFGVUXHQCXBAVILMYZFTSPNFCSEVPCEMRLMNZTZDIGDRIWOTSXDVOFUZBOJFHJEJGPHAADYIEERWJBCOWQ");
    msg.formation_name.assign("HXOKPSYKNHJVMZVEADHEUCWFWYBUOKTJMQTHMJLRKCFZQOQMPVLWYAJBLQOJWGDVDUHRMMEIDZDOAGPFUVBSSKSQUHZXVUHKCHXDLGXICBUNPQZIKOIDBQEKZEGSBKEQAKUOXVNMGMNDFLRNRLZINDGWLPONUFXCRQSWWPGCXEYAOYEJZWHPYFYMBAIHTYS");
    msg.plan_id.assign("CSIUUBIHVMNFWAKAUHGOWGJPHZBOTHUDWRYTGBJFI");
    msg.description.assign("ZGULDMWVRUAIANITSKLICJNRMIGUFIHTRMHISOOAGFFMZVJYVXSPGQQERXVCSEBHTDQZLJBUEZNFEMZNBKVGQQTDPXHXITAAZHGTOALLRLMPUSJOLMDCPCQUQBJQRWSZWBPDSKYYGEZWXBEFYKCHYLZLUDKWKSPTNENPDY");
    msg.leader_speed = 0.8033660112641102;
    msg.leader_bank_lim = 0.893266299426945;
    msg.pos_sim_err_lim = 0.9694173447918195;
    msg.pos_sim_err_wrn = 0.2513507167933642;
    msg.pos_sim_err_timeout = 43201U;
    msg.converg_max = 0.48097712214069344;
    msg.converg_timeout = 4612U;
    msg.comms_timeout = 49091U;
    msg.turb_lim = 0.6501836271765971;
    msg.custom.assign("FLKXWWFEGKULMDTRHOMDGPZONFHFLCZYBQVECWZPFXZOTCUGCENKZRABZNUBVGCRJNGUYCVYOFGBKQXQJSHBPLKTEYDQHVQIWGVYLOZJJKATJYLVWYPZAITJHAMDDCYFBNUCYWAPFERQUIJAXWUPFMTDKUOEMXLSFBAIPDHACVZJREXNKXRQNWLBSVHQSAGSRMLORTLVBXEIIIIIKJMRMCZOSOENTUTGPUTO");

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
    msg.setTimeStamp(0.42456140824677424);
    msg.setSource(46832U);
    msg.setSourceEntity(240U);
    msg.setDestination(33754U);
    msg.setDestinationEntity(185U);
    msg.plan_ref = 2462410361U;
    msg.id.assign("CEASTFXWBACMCDKLTNWVKHFDJVWKNUUHGTVUPWMQIITAVYNYTITXAUFNFWIBGDMCOYSDGJZUXP");
    msg.memento.assign("POZUBNEIETRGOQXPUYFQTFHOLEPIAKKTBEYMJIKZMEITXNGAXWKDONUSJDCWVWGKBPSDZMHUBBYLWTFJYTXAJMLVRNUXDSHNAQILRZYREOUKUIDTBHVPGNC");
    msg.control_src = 16073U;
    msg.control_ent = 129U;
    msg.timeout = 0.878980949329636;
    msg.loiter_radius = 0.28444025384393334;
    msg.altitude_interval = 0.6176342993354969;

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
    msg.setTimeStamp(0.8234373611258635);
    msg.setSource(31458U);
    msg.setSourceEntity(153U);
    msg.setDestination(47233U);
    msg.setDestinationEntity(228U);
    msg.plan_ref = 2041120774U;
    msg.id.assign("BACEIWTZBQFTUXCDANZOZMIUNNDVZPYQHBHWKIVWXIDKZGIZWRJCQODIWMDRVJJUNLRXHYZOWNQVYABUMABFRESNQGDSDFOEBOIAPPFQEUXTVKOPMRCJCSCQFXKAVCDHJWPHGVGIX");
    msg.memento.assign("ZXKADDNLFHGVZHIMAOXBEBBRBHXNVEFJHTDPSXECIJSOKOXRRNIUHXJYXCDWUOTCZNEFHLHOIIJBAAOYQRFYRIKGMMZCPLSSULUWGURMJSQQRYUSPWSXMTYDZTQGLXCNGSKDQWWIJCNZKFZQCHEKRYRVEAFVTAJFBCBQICUQVWGCFGLWBEAEKEMEOHALUKJUTFLVMKXGMYBOM");
    msg.control_src = 34589U;
    msg.control_ent = 218U;
    msg.timeout = 0.474682158748721;
    msg.loiter_radius = 0.6632012058725885;
    msg.altitude_interval = 0.6590044039725799;

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
    msg.setTimeStamp(0.9531891765338226);
    msg.setSource(41559U);
    msg.setSourceEntity(207U);
    msg.setDestination(25400U);
    msg.setDestinationEntity(93U);
    msg.plan_ref = 3960746301U;
    msg.id.assign("LRJZYBYAHYZLFBXSDZQWIWMFNMJKKHXJMNCZRRGYIFHTBEKTPPSKAEAKKOXLUQASZTCYDMLBADJIV");
    msg.memento.assign("LSZJUJMQADEKEQRQUJHPZBHSPXFRJHLUWJPSVRMASIQOHLXCKWBRURKHRPCBZFPIAJAGOYWVVBIEVZLFMDTOTGGWNMCYDQXNVOVCHNPIIAZPOIGOGXKLIGZKGIXHUEYUJMWPUYEJBTKCTQNOTSDEHDUBMZDDQYTLSJLNGDUQRRKYXNVEEJHFALGBYIXRFMWNUZCVWXMSPHXBP");
    msg.control_src = 13429U;
    msg.control_ent = 98U;
    msg.timeout = 0.593122614922127;
    msg.loiter_radius = 0.13527477765721052;
    msg.altitude_interval = 0.0975772888912444;

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
    msg.setTimeStamp(0.3742208377519529);
    msg.setSource(62029U);
    msg.setSourceEntity(158U);
    msg.setDestination(1647U);
    msg.setDestinationEntity(117U);
    msg.flags = 77U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8152485990515462;
    tmp_msg_0.speed_units = 2U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9075798655824756;
    tmp_msg_1.z_units = 230U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2506210103041919;
    msg.lon = 0.8201960693014793;
    msg.radius = 0.5438402309619753;

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
    msg.setTimeStamp(0.7106275455392569);
    msg.setSource(55014U);
    msg.setSourceEntity(202U);
    msg.setDestination(54615U);
    msg.setDestinationEntity(103U);
    msg.flags = 67U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.11158715243463746;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.45355696849127547;
    tmp_msg_1.z_units = 172U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.756343862949797;
    msg.lon = 0.3714620801552867;
    msg.radius = 0.10287335233007233;

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
    msg.setTimeStamp(0.6438863565532026);
    msg.setSource(16792U);
    msg.setSourceEntity(145U);
    msg.setDestination(57178U);
    msg.setDestinationEntity(221U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.058394332586746645;
    tmp_msg_0.speed_units = 194U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.796362792285299;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.48464117105196647;
    msg.lon = 0.2594094634319992;
    msg.radius = 0.6442051978051798;

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
    msg.setTimeStamp(0.2763004127024531);
    msg.setSource(9675U);
    msg.setSourceEntity(10U);
    msg.setDestination(39804U);
    msg.setDestinationEntity(65U);
    msg.control_src = 59470U;
    msg.control_ent = 251U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 231U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.05990547645631272;
    tmp_tmp_msg_0_0.speed_units = 213U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6886285403818064;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.256433101007991;
    tmp_msg_0.lon = 0.30753970392699814;
    tmp_msg_0.radius = 0.8524918935400791;
    msg.reference.set(tmp_msg_0);
    msg.state = 90U;
    msg.proximity = 208U;

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
    msg.setTimeStamp(0.5629106627181508);
    msg.setSource(6068U);
    msg.setSourceEntity(171U);
    msg.setDestination(26173U);
    msg.setDestinationEntity(147U);
    msg.control_src = 65104U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 42U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.41584036460292606;
    tmp_tmp_msg_0_0.speed_units = 143U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.05407036658005415;
    tmp_tmp_msg_0_1.z_units = 149U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3966736731522438;
    tmp_msg_0.lon = 0.13655081130979074;
    tmp_msg_0.radius = 0.1781634519861457;
    msg.reference.set(tmp_msg_0);
    msg.state = 223U;
    msg.proximity = 40U;

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
    msg.setTimeStamp(0.8390996907078503);
    msg.setSource(44712U);
    msg.setSourceEntity(54U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(87U);
    msg.control_src = 32533U;
    msg.control_ent = 78U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 199U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.16395623687380367;
    tmp_tmp_msg_0_0.speed_units = 100U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5487998277860786;
    tmp_tmp_msg_0_1.z_units = 186U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.20479560032271416;
    tmp_msg_0.lon = 0.20810892448488272;
    tmp_msg_0.radius = 0.6261964273844786;
    msg.reference.set(tmp_msg_0);
    msg.state = 88U;
    msg.proximity = 217U;

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
    msg.setTimeStamp(0.8556963291855377);
    msg.setSource(8718U);
    msg.setSourceEntity(79U);
    msg.setDestination(57461U);
    msg.setDestinationEntity(199U);
    msg.ax_cmd = 0.20952189749824945;
    msg.ay_cmd = 0.43563415146589235;
    msg.az_cmd = 0.35218868473661136;
    msg.ax_des = 0.004162860701693916;
    msg.ay_des = 0.023500494746432676;
    msg.az_des = 0.26022624208519896;
    msg.virt_err_x = 0.49709188981680275;
    msg.virt_err_y = 0.788862388094894;
    msg.virt_err_z = 0.31417643703142584;
    msg.surf_fdbk_x = 0.4359331597252082;
    msg.surf_fdbk_y = 0.9140320593724632;
    msg.surf_fdbk_z = 0.12803977225909002;
    msg.surf_unkn_x = 0.7151806778841093;
    msg.surf_unkn_y = 0.9912277516703272;
    msg.surf_unkn_z = 0.08369160214044735;
    msg.ss_x = 0.4898784614116478;
    msg.ss_y = 0.3505816134555221;
    msg.ss_z = 0.5452810225281555;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RXIRUWXZLWJXGIAAPJYENSQZSMWRHLAPTBZUXOXCUGOAZLOZTHGCQOHYRSBCHWCJGDXKNKVPPFOMTKHFMAJCPCYFVWVBIQPWBSSGIUHTJPACMHHSDVJOXDYLLFKVEGBAEVJRPLBCSWSNOIYLNIZWYUVTUKFNKKG");
    tmp_msg_0.dist = 0.3531726682955779;
    tmp_msg_0.err = 0.39564771656473785;
    tmp_msg_0.ctrl_imp = 0.3063401407337899;
    tmp_msg_0.rel_dir_x = 0.43748956933953376;
    tmp_msg_0.rel_dir_y = 0.4509085563187737;
    tmp_msg_0.rel_dir_z = 0.931269159432924;
    tmp_msg_0.err_x = 0.9564926486937311;
    tmp_msg_0.err_y = 0.9429146596728581;
    tmp_msg_0.err_z = 0.3572262321516686;
    tmp_msg_0.rf_err_x = 0.25551198990808444;
    tmp_msg_0.rf_err_y = 0.06290589863548568;
    tmp_msg_0.rf_err_z = 0.4440292536984276;
    tmp_msg_0.rf_err_vx = 0.2963691617026293;
    tmp_msg_0.rf_err_vy = 0.17281825045297805;
    tmp_msg_0.rf_err_vz = 0.25245903403937386;
    tmp_msg_0.ss_x = 0.4299188582869403;
    tmp_msg_0.ss_y = 0.44873889158115166;
    tmp_msg_0.ss_z = 0.4356218530137509;
    tmp_msg_0.virt_err_x = 0.38026964183342526;
    tmp_msg_0.virt_err_y = 0.8890293251959879;
    tmp_msg_0.virt_err_z = 0.760154977500451;
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
    msg.setTimeStamp(0.9798176614039551);
    msg.setSource(6936U);
    msg.setSourceEntity(221U);
    msg.setDestination(55480U);
    msg.setDestinationEntity(6U);
    msg.ax_cmd = 0.5939974848342442;
    msg.ay_cmd = 0.4716704476847704;
    msg.az_cmd = 0.33388891040138347;
    msg.ax_des = 0.5567726854753324;
    msg.ay_des = 0.3455372643951431;
    msg.az_des = 0.9627995740193827;
    msg.virt_err_x = 0.5956612839884919;
    msg.virt_err_y = 0.9696265482107779;
    msg.virt_err_z = 0.6785702287394404;
    msg.surf_fdbk_x = 0.5531078068169434;
    msg.surf_fdbk_y = 0.21527770850409178;
    msg.surf_fdbk_z = 0.5447953107573712;
    msg.surf_unkn_x = 0.7034624980547353;
    msg.surf_unkn_y = 0.6484928956726278;
    msg.surf_unkn_z = 0.46524410822369056;
    msg.ss_x = 0.4160825720578738;
    msg.ss_y = 0.23356265681851762;
    msg.ss_z = 0.4678843821191906;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OXYQFYVGXARRRVJDTDOGUAJIKBMRLQHUUXNCGKSHJOWZKYPPDGTTAPPLFEPCNMPJZMCKBYJILKPOQVSDBICMLTEYMJPBQQATQNSFRTLEJJRTWDKNECDDOKZAIECTUOQVORKWLVCIXICMX");
    tmp_msg_0.dist = 0.7206982749195191;
    tmp_msg_0.err = 0.39827728184203115;
    tmp_msg_0.ctrl_imp = 0.40752570113439335;
    tmp_msg_0.rel_dir_x = 0.947565347169254;
    tmp_msg_0.rel_dir_y = 0.5756414660025413;
    tmp_msg_0.rel_dir_z = 0.9928985345033583;
    tmp_msg_0.err_x = 0.2519979354532683;
    tmp_msg_0.err_y = 0.5876537518074565;
    tmp_msg_0.err_z = 0.35795022810018473;
    tmp_msg_0.rf_err_x = 0.11616554836003945;
    tmp_msg_0.rf_err_y = 0.6766642886116596;
    tmp_msg_0.rf_err_z = 0.8167919827605971;
    tmp_msg_0.rf_err_vx = 0.7637626469865871;
    tmp_msg_0.rf_err_vy = 0.5447261759244557;
    tmp_msg_0.rf_err_vz = 0.15554099971457835;
    tmp_msg_0.ss_x = 0.6417182463337106;
    tmp_msg_0.ss_y = 0.6174483619482406;
    tmp_msg_0.ss_z = 0.5294365221191254;
    tmp_msg_0.virt_err_x = 0.7733743913553544;
    tmp_msg_0.virt_err_y = 0.9038056150265898;
    tmp_msg_0.virt_err_z = 0.45825410964988356;
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
    msg.setTimeStamp(0.8823689038444728);
    msg.setSource(4253U);
    msg.setSourceEntity(87U);
    msg.setDestination(5866U);
    msg.setDestinationEntity(144U);
    msg.ax_cmd = 0.6263978151445136;
    msg.ay_cmd = 0.8372125047809801;
    msg.az_cmd = 0.6550389978567228;
    msg.ax_des = 0.18838795409554776;
    msg.ay_des = 0.13171741703600015;
    msg.az_des = 0.8035723796858977;
    msg.virt_err_x = 0.20440006681228584;
    msg.virt_err_y = 0.8788387608427778;
    msg.virt_err_z = 0.18278334318401224;
    msg.surf_fdbk_x = 0.4176582248112367;
    msg.surf_fdbk_y = 0.9434754446597633;
    msg.surf_fdbk_z = 0.5752234438030837;
    msg.surf_unkn_x = 0.8921083730166925;
    msg.surf_unkn_y = 0.5657307187351098;
    msg.surf_unkn_z = 0.5625816334596798;
    msg.ss_x = 0.6989249542706768;
    msg.ss_y = 0.659912757389141;
    msg.ss_z = 0.6288250895790124;

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
    msg.setTimeStamp(0.008654500014337208);
    msg.setSource(1970U);
    msg.setSourceEntity(80U);
    msg.setDestination(15899U);
    msg.setDestinationEntity(98U);
    msg.s_id.assign("RJEQHLHVPKXCGTYYTCMZQCUQILVDMNRBUBEFDQTHGYVFHLHVFOGROOBJEQYMISDAWLKKRUSWGOGRPYATDXGZQTOVXORJHKVBBQLLMZKRHMIYINPNFGDDUWUSHADCWJOPMVCHSJFDSSCJQTWCLHDSZWJZZVSFOLXYRUNRINLFPBMNOCZIWXUEQVP");
    msg.dist = 0.43192707846990075;
    msg.err = 0.3866032597110195;
    msg.ctrl_imp = 0.7520368706363235;
    msg.rel_dir_x = 0.405449785638734;
    msg.rel_dir_y = 0.5789009981568837;
    msg.rel_dir_z = 0.7847556847403836;
    msg.err_x = 0.07411122008339621;
    msg.err_y = 0.27755950667881424;
    msg.err_z = 0.8257028282905958;
    msg.rf_err_x = 0.6839403340297233;
    msg.rf_err_y = 0.1370964270587849;
    msg.rf_err_z = 0.7334206283371919;
    msg.rf_err_vx = 0.40316044383838134;
    msg.rf_err_vy = 0.3977399560777043;
    msg.rf_err_vz = 0.9931559459511616;
    msg.ss_x = 0.933209721401835;
    msg.ss_y = 0.5016186956675917;
    msg.ss_z = 0.6426769084564016;
    msg.virt_err_x = 0.4430815427728213;
    msg.virt_err_y = 0.5869242627704884;
    msg.virt_err_z = 0.029305257289186093;

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
    msg.setTimeStamp(0.022488650063581805);
    msg.setSource(18043U);
    msg.setSourceEntity(53U);
    msg.setDestination(61688U);
    msg.setDestinationEntity(253U);
    msg.s_id.assign("HJQFBBFYYJUFHUPYCGKEYDREMRSONIZKLLUAQWXQEHUBBUWLINSLBCPVSZOEGGXHCIUGAARLMQESSZZITDNUQAOOZWOYVLZTJRYTGWDEPHNITMCYAPJRDHRXAQNVKHCGXKYFBBSAKQFJDMMCTGTFATXKZPWAWVZESVXTGQENJDCPRHXZYWNIEFUDMVIH");
    msg.dist = 0.5243166683002436;
    msg.err = 0.5621344307921854;
    msg.ctrl_imp = 0.3534835669406393;
    msg.rel_dir_x = 0.7919476182842681;
    msg.rel_dir_y = 0.3036715274327094;
    msg.rel_dir_z = 0.4541024541083515;
    msg.err_x = 0.26587703281791897;
    msg.err_y = 0.49860900581227174;
    msg.err_z = 0.47437588273997544;
    msg.rf_err_x = 0.17388125987296554;
    msg.rf_err_y = 0.6104657237222649;
    msg.rf_err_z = 0.05559639383362336;
    msg.rf_err_vx = 0.13573878315487875;
    msg.rf_err_vy = 0.8139410455230807;
    msg.rf_err_vz = 0.6051457156607383;
    msg.ss_x = 0.8822086240803465;
    msg.ss_y = 0.7358461573878199;
    msg.ss_z = 0.0021558565801437224;
    msg.virt_err_x = 0.4893387156787936;
    msg.virt_err_y = 0.5893563579506936;
    msg.virt_err_z = 0.5760496525649593;

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
    msg.setTimeStamp(0.6976017791912561);
    msg.setSource(33839U);
    msg.setSourceEntity(156U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("QDCFUJDCQOHKCSYXNUWVMXQTGEPLYPVAMRKNAOLJSITWYGDQTVRMHHUWBIDFNWV");
    msg.dist = 0.37006146776072457;
    msg.err = 0.7265783797514724;
    msg.ctrl_imp = 0.042194398238398434;
    msg.rel_dir_x = 0.3927675836051031;
    msg.rel_dir_y = 0.2587757018736344;
    msg.rel_dir_z = 0.6606568392676908;
    msg.err_x = 0.44548767650462284;
    msg.err_y = 0.5248483618298555;
    msg.err_z = 0.38125288369884247;
    msg.rf_err_x = 0.304565675806698;
    msg.rf_err_y = 0.58466439011506;
    msg.rf_err_z = 0.7111056607268714;
    msg.rf_err_vx = 0.8168142317003597;
    msg.rf_err_vy = 0.07629428910065683;
    msg.rf_err_vz = 0.5569859073616158;
    msg.ss_x = 0.7064644951208532;
    msg.ss_y = 0.6475383814834621;
    msg.ss_z = 0.29342285846515437;
    msg.virt_err_x = 0.22582828287367662;
    msg.virt_err_y = 0.4924644825486493;
    msg.virt_err_z = 0.9060076176821369;

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
    msg.setTimeStamp(0.12930807227345453);
    msg.setSource(10321U);
    msg.setSourceEntity(238U);
    msg.setDestination(25323U);
    msg.setDestinationEntity(50U);
    msg.plan_ref = 1002192331U;
    msg.id.assign("SLJEXMKIYIWHVEYWUQMBPCQFOGKICSLYUGBKMVAVMQAPZPYUYQFSXJUPABSOAAYMWCGVWOGZXNRMKHUZDPOVMRLZXTKNCISUULPNAAWQQBPIERDTEBLXNVXVCFNYIUIAWTETMLHORFHDKJCDFRBWHFGHXDEGJWNBWDORNZLSBJCNFHGDGKCXDYCIPTJD");
    msg.memento.assign("YMDWVCZFJKLVTOUJNPPUXZHDTWQMBDMEQBFPLIDSCKRNKDLAEATYPTWGLOGPBCWWHNWHOVUEZXXIQDYJOLAPAJRLDANSGOHVLIGQIHFKCSZUOMWVUIGNUKTNJYSFFTYMQFPZREBERKQFFJCXAMDRBKDXNBXCNPUCERAXGARICRHALYMEID");
    msg.timeout = 28716U;
    msg.rpm = 0.5591967007444762;
    msg.direction = 54U;
    msg.custom.assign("ANOFIUNAECXQPKHJWJZVONQTDXYHKCGKKGQIFVAJMLVAZIRROKNBVBEEOWWUHIDTWKSDGTXBMQMIPLUCCJMNWEEKMGAGRJMBKOROCDFPBIUPGZLGUTFNSMQHIZBYRSGKRSCVMJZXFLPWJZPSEFHESJNDVHBTYHZRQTFGXSNCRTUPTYOFDAXLMDPWLDAKDBOHYUVAMUXVBIUQHYCGRCTWHABVFSQLRXYEUQYIWVTPZAFPOYXL");

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
    msg.setTimeStamp(0.966214866650845);
    msg.setSource(13926U);
    msg.setSourceEntity(89U);
    msg.setDestination(24638U);
    msg.setDestinationEntity(221U);
    msg.plan_ref = 1136946818U;
    msg.id.assign("DDEJKAGTMUXPTPQPVDEFWWNUZGBCUHBVZVRSXBPLCFIAUDOYVHIKAGYRTQUOLOQDSYQWARXOHWHBCLNQJWAFERIRJMSXZIWGGYZYHGDLQLRFZNHWFRVUKZEIKZYKXYOCLAPPNS");
    msg.memento.assign("JDLCMIYWQBWFZSBGRRVLFLBGLSHIISUMUWWAYVVYQETJFRPOA");
    msg.timeout = 26257U;
    msg.rpm = 0.9870134581485411;
    msg.direction = 97U;
    msg.custom.assign("JZZGRFSFRRRZAIJGSIJTNZYKFAYECBDXVCBTDQGYS");

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
    msg.setTimeStamp(0.2704796294174239);
    msg.setSource(41479U);
    msg.setSourceEntity(163U);
    msg.setDestination(21736U);
    msg.setDestinationEntity(170U);
    msg.plan_ref = 218634671U;
    msg.id.assign("IUFRNCZHZXOOPBUBPMSIDSOLERSJHKCUJVQKOGNCYKDADPDHTEJMDLTOGGEEEKIEBDEXWAMXBZKQHVIKJDAUASNVTZXQMTCJUPEORIZWUYZXXDYWLQBCTLCGIWXGALSYWHLPYAZNNZNHIUQZKEBRXRHSCVQHFMZRAIGJVRNKQQVYMILFLOSYMODSYAERDJFNMFLGCFUWJSFTTUPHRIMFQVGCWOBTXGGPFQYCASKBVTPFPYHROWTBV");
    msg.memento.assign("JQIVVMBBELCHLSCJBYKYVTLGPRTJXYAIBWWRLOEXEHKFFWPPSJDXWVRIOARBDDKBNZHQYWCCKQWBMNUGSFFOPLBYKTVEHURMGSFZMW");
    msg.timeout = 43529U;
    msg.rpm = 0.44218906154968196;
    msg.direction = 228U;
    msg.custom.assign("EAWENFQLZNHCONCAKNIYVPFXXUMOBQBCGFSWJCEZXZPBPRSGJNAAQAFDZRWPXEPMKZTXK");

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
    msg.setTimeStamp(0.06288313233229537);
    msg.setSource(39570U);
    msg.setSourceEntity(33U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(159U);
    msg.plan_ref = 1001177415U;
    msg.id.assign("PSRFMMKSJVNLBHCVWPFQLMKAXUAYJXETOOCJWRXDJMUDYYSQHRAWZRRHZLTVOSTCCVESTHUKMCRNRFWSISXWGDIYNHFOFKAXYGNMUATKGQEPGJKHCXIENWFNTEIQEIMEQZEDEBSWIZPKDLZNUOXWLVPBXSYNJLQALBJLHPBXIGZZNVTXHJQTRFDKOBAU");
    msg.memento.assign("ODRAOMVOPUCVXELEKFLAQYKENUMMVMTITK");

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
    msg.setTimeStamp(0.03885050041644589);
    msg.setSource(62961U);
    msg.setSourceEntity(243U);
    msg.setDestination(13201U);
    msg.setDestinationEntity(178U);
    msg.plan_ref = 3399101684U;
    msg.id.assign("PZLRURTUDAEFBSZVQVEQZNIYINEWLRHZCAMJBYHRSYHGKOJOXBSMHXNAUBCGKWFOKCMWRWIJLRWEVTGTOXRSMKCBMJZMIYNDPOIWRNZHONWDJNWTRSFSPLOVBSFAGPLYKZNGTHVDSGUQEPQBSLFYLHDILVYMPBZQZBDEHPOXTVYDDYWHNCGKLCIMJGQKOACEFEFMIWPGTADVXKSFIHNCYUUFAOAJXQMKCFQXPUCGEKPJXXEAJQQUTLVIUVT");
    msg.memento.assign("TNRCAHTMGLREJLQZCETPZQZBAWFVOBJYAJXZRUGRQHHXAEEHQFKLVYYNMFNAYKYHFQPKXMCPMVPJSXBVMCWZKUDETVFKDHRUTTNTCSPJSDIOEUEKJGXYIYWWJCTLCBRMVBOBSAHOULLUVTXQCLLDOYUPYFXGFSFKDWZZFIRDD");

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
    msg.setTimeStamp(0.6249309734482722);
    msg.setSource(49654U);
    msg.setSourceEntity(228U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(251U);
    msg.plan_ref = 903249831U;
    msg.id.assign("MFNTLPMQVYIXJHQAGFYNSDYEPYJEWUMPDAPHFGAZWHTSMQDGFLTNJYISWOVGOWZYJEQALNLZSODNGKAXUYZZHHHXCSEJUQBEQSAIFDIJCKHXXORPANAMHKBHUKCBQCXIKDPZICBRUVKNFZBEWUVHQVKTRGFRWIEPKLCLXLLEBDRG");
    msg.memento.assign("YJBAWUTLIDGBEYCPABQLWHGJDBRPUPWDFZXUVHKFKTDCJWTPLUYLFUKBPLYBNRDNQLTRP");

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
    msg.setTimeStamp(0.6737881552004535);
    msg.setSource(35058U);
    msg.setSourceEntity(124U);
    msg.setDestination(49510U);
    msg.setDestinationEntity(129U);
    msg.op_mode = 209U;
    msg.error_count = 112U;
    msg.error_ents.assign("QYWKQROJOFPWPDDKHILXSVXCTBJUUJYACDTEZMWAFMECRKUDXJFKJVMDSQYSBMYPBASNEUIMQCHLBURMECGAPTKOBIEVPBUZTGX");
    msg.maneuver_type = 17881U;
    msg.maneuver_stime = 0.6439594344944911;
    msg.maneuver_eta = 34997U;
    msg.control_loops = 368125202U;
    msg.flags = 185U;
    msg.last_error.assign("ABYAATWBINZJIXVLVBQXLISHUTYFMGEQVOUMHBZXSNPWWPQBQKHVXKYJEMVJOOMORXDK");
    msg.last_error_time = 0.12110664662373394;

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
    msg.setTimeStamp(0.8777871200546655);
    msg.setSource(11964U);
    msg.setSourceEntity(39U);
    msg.setDestination(24016U);
    msg.setDestinationEntity(234U);
    msg.op_mode = 235U;
    msg.error_count = 210U;
    msg.error_ents.assign("VCJQRIVOHPPNXLEUDSYFMNDIPXQJEKUQFRFPKKXEOMRZAUULGRFDDOMMHZVFYVPOVNWFGMGENZLIGYXZEBZLPTLATOMBAPNSRSBEQQXOBUKOVWNKJMYBSAJAITTVFGT");
    msg.maneuver_type = 6379U;
    msg.maneuver_stime = 0.3345386134865401;
    msg.maneuver_eta = 5173U;
    msg.control_loops = 685135626U;
    msg.flags = 161U;
    msg.last_error.assign("SHIMRUQNFNRWGIBBDKSJNRCLEQZMIXGWCQNVDBWOE");
    msg.last_error_time = 0.43472825777787194;

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
    msg.setTimeStamp(0.7010508703804127);
    msg.setSource(12346U);
    msg.setSourceEntity(39U);
    msg.setDestination(41012U);
    msg.setDestinationEntity(142U);
    msg.op_mode = 152U;
    msg.error_count = 175U;
    msg.error_ents.assign("XBMFEDIFGWWWCKQXMJPFLAOOTWXIGCUZCGRATLWGRWQTRPLEJQYDRADNROHQNUJDKHVFTOXJUOMBFIECMBPYLOXPAGVIHYVRPFVZGXEXXZKBFWJLMGVLTVPN");
    msg.maneuver_type = 8937U;
    msg.maneuver_stime = 0.0944567906273528;
    msg.maneuver_eta = 56624U;
    msg.control_loops = 478382442U;
    msg.flags = 196U;
    msg.last_error.assign("IOZRUMFGTGE");
    msg.last_error_time = 0.48841403847505027;

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
    msg.setTimeStamp(0.7774445242181768);
    msg.setSource(18269U);
    msg.setSourceEntity(166U);
    msg.setDestination(58035U);
    msg.setDestinationEntity(11U);
    msg.type = 122U;
    msg.request_id = 29658U;
    msg.command = 246U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.plan_ref = 403279207U;
    tmp_msg_0.id.assign("MFHWCOYYYYDTJZZIXESCNQUNJSHYNQXBSAML");
    tmp_msg_0.memento.assign("JNERNWNFMIGFRLUDCLAATDWCIRVPUEXFOKCQUJVAJSJKPGGNQHTGTYNQEFETEZEDTEKSBZWAHJFXCQQNFMCUAMDKROPJVJWGZNUTLKXODTGYIMNDSXUBRZDPCLLZLSGMPJZDCCMEOCXIOUVHYKSZFKWWIDQHVHROWPCNAKOSRWBQBFHXLYXXQMMYRVXSGVWLUYGTIIDJGSQTRPYHAQZMRHIILYFPSIYO");
    tmp_msg_0.timeout = 38134U;
    tmp_msg_0.lat = 0.3716772746670024;
    tmp_msg_0.lon = 0.5423186136183826;
    tmp_msg_0.z = 0.44932851012070674;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.amplitude = 0.7385599481655833;
    tmp_msg_0.pitch = 0.6797955776258804;
    tmp_msg_0.speed = 0.08182909267334226;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.custom.assign("IUFKVOHZCSNNPIGXEHUJWEZWDNSZTLYMKFCPZKBOMAJBPBIFYYJCSTHYGRTGRPFNDOGOITGQAPALMRPGQXZUPQTURXDDFZVMWDZWYJABNCRSMNMXXETHLYEKICBSHCUCQBBHAXRXMHAHSDWZUQQOFEKFCSLVLVZJYDTRIXLWWNMGPLSJIPQQBLJYIYMWLVUYCKFEOATVDHOKCJASIDSEMGVRURFVUGDJZKAXBFE");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("HOFAQZYMWTGGDQMWOENXQELPWAXXZVMAYVAWJZXYYOFQRELXS");

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
    msg.setTimeStamp(0.056621336373883335);
    msg.setSource(64148U);
    msg.setSourceEntity(16U);
    msg.setDestination(18498U);
    msg.setDestinationEntity(119U);
    msg.type = 239U;
    msg.request_id = 55431U;
    msg.command = 164U;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.plan_ref = 1275008188U;
    tmp_msg_0.id.assign("ITWFRFOGPM");
    tmp_msg_0.memento.assign("KWKAWBVUQZEXJZLZPIFELZRATSOXKH");
    tmp_msg_0.system = 27634U;
    tmp_msg_0.duration = 56035U;
    tmp_msg_0.speed = 0.8375229350711657;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.x = 0.17806600317838384;
    tmp_msg_0.y = 0.9126683002920151;
    tmp_msg_0.z = 0.10373305141294442;
    tmp_msg_0.z_units = 120U;
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("HPZNUFJGAOSUPFQOBEJDURBEZFPUEXIPCMJAHDQSMOEJNWSOAEFKWRFBQAJKXSNVYGYDOVQMHPUIMAILYVHQMDGTWAYJHWEOCGRPCKDTBQSAYIRYWVPZGMQYKRWFOKNMIZMVBRRGTQGLVDZOWJTDGOTBNNJHHPUKSRNQISXTKYNLIDJFEPXRKRLQLHXAMLBXSSIUXXCWWNOTLKCVFVIEZBGVKCUHN");

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
    msg.setTimeStamp(0.13485593092804937);
    msg.setSource(64276U);
    msg.setSourceEntity(228U);
    msg.setDestination(5085U);
    msg.setDestinationEntity(171U);
    msg.type = 1U;
    msg.request_id = 7510U;
    msg.command = 155U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.plan_ref = 224265530U;
    tmp_msg_0.id.assign("FTCPWLPTKIHYMNQGUDTYYDLOLRXYSABSOKZFJYGJYOQGAWSJHQIBECESVLAJVKMFKKHFQCNJCPXYPTUFWJJUVUHBLCLXPGKXVHJIEUTRHENFYAVQTIOCZKSRMUGPAXVDOGIZFUMCHFRHVTRRLOZBDPIBCZLDWXWIWXUGNXDUESMJRGZKEMLNEVGPYNOTZOTABONCQYH");
    tmp_msg_0.memento.assign("DEXNAHPOMSLAYRVQNERVOYIGOCJWZBBPWIEGTJZQDYHGJYXKOXIUXWRHPOOCOKVZQNMCMPVXIGJSWDOHHKLCQANGZXMWUVYKFQINXLGYRZFTUAFDLICMRCEWCJTRJBMZMEIHFPUKATLDZSBGUKLKRCBLNHCDTPFASWYVGTKCFQDWSHRSNBPFJSNZWHUEYYXEAUYMFTHIQZBRMGKUALSVFKWEUDDUILOBQEJLDBNIGXAVSPQSPJTNEVOFRXT");
    tmp_msg_0.timeout = 29421U;
    tmp_msg_0.lat = 0.9049016741381923;
    tmp_msg_0.lon = 0.24529971173593323;
    tmp_msg_0.z = 0.32302601176228074;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.5812972344950952;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.bearing = 0.9834814502827037;
    tmp_msg_0.cross_angle = 0.9784709002271463;
    tmp_msg_0.width = 0.8689545896025783;
    tmp_msg_0.length = 0.28887088696893126;
    tmp_msg_0.hstep = 0.42174334893980703;
    tmp_msg_0.coff = 40U;
    tmp_msg_0.alternation = 0U;
    tmp_msg_0.flags = 87U;
    tmp_msg_0.custom.assign("BEUGHGMLKMAJYPVXJZVITVEBBFOIHJDYLJTAWLVQZNULFSCFSNEZUNFHDTTQNGRKBPCAQLHLNYTDUECWKSZONARJSQOHWQKVSGUHJNIEPDOJTUCDMBDUWPXTXFOYRDAFEPCIMYQAKOKSAMTQVJEPRRLIZVJKXHNILPMRYUNIDRXVAZLBTOIENWMFXOAFSWBZZCXRFVYPYWSFTUWMXPBBYKICEJAZDXSGOC");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("XVEARHJESPGRPUCLFOZNXCOGBDITWQAICQARLBUSBAYHOBLQAOFBGWYHDNNCMCEFXXSDWJKLUGZIRCSTIOOUUSKQKUIXZXYLMGYIJZQFDBTWDBTQTJOQSDMDIWFHANZXEPTSPKMVGAZVWQUSEJGEYFKARLSKCFUFLKKYGRJNTEGWMBZDEHXNNPFWOOCXMYXJRJZUWHAKHVVQTHCMRMHYPIOHLPGEDCJVVKSJBIYZPLIWATMDMQNRZ");

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
    msg.setTimeStamp(0.8048379633826068);
    msg.setSource(12703U);
    msg.setSourceEntity(100U);
    msg.setDestination(59532U);
    msg.setDestinationEntity(118U);
    msg.command = 181U;
    msg.entities.assign("RUSBBUNINFMOKBPPYZCFJMNKXFYHWVKIGCRRDTULKOICYPSVJYZQVBAXFEUOXGMQFNXCDUWOECGVZSSKZLLRKEBDTRLTYQ");

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
    msg.setTimeStamp(0.7807586449867006);
    msg.setSource(25758U);
    msg.setSourceEntity(222U);
    msg.setDestination(51681U);
    msg.setDestinationEntity(43U);
    msg.command = 121U;
    msg.entities.assign("SEPGCBCHGXQRRVSFHWVYPIFKAUYPVPKOYBUWJKNWYQSPYLSLHRXQJCIUIHRXMPTAKZZTGFTGEVQYEDBRLTWMEIQFCDGTRTOFHUAMAXXRIKGWBNBDZLDDQVSYDPEGRMXUCJBZJANJTOQZXZVFHKJCAQYXVGCEUTEVUCOEZNEMODKFFNSBBSIGNLJCDVIQXKHBSFTLEZINTSXMWPOZUWLBGORVNULFMLRJMOJHASLJWHKAHWYUPW");

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
    msg.setTimeStamp(0.5193189983027628);
    msg.setSource(40965U);
    msg.setSourceEntity(236U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(0U);
    msg.command = 40U;
    msg.entities.assign("JECOIPHUBLJYEPVXISNBYKLJWUMKAODGPVIHLSPCVRJHYDLIWLSBAOZWSRDQASDJZKIXQCCRWYDRUWKAGDYEUULOAPLEH");

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
    msg.setTimeStamp(0.19048924224089347);
    msg.setSource(51239U);
    msg.setSourceEntity(25U);
    msg.setDestination(41315U);
    msg.setDestinationEntity(191U);
    msg.mcount = 201U;
    msg.mnames.assign("KJSMWZKABXJRGTOQZUMRCNJSRUZECQZBVNPMPJPEFWZXETEIDFNIEWTTQTUIQ");
    msg.ecount = 124U;
    msg.enames.assign("DQTSWGHMISDCRDRCAITOUICKUDXOBSFEZYWXKNFDHDFJMDZALJAOVAJTBYPTGJEUQVKAKTJHJZKMQSPBNHCREFLMYBVNGANXGVAVUIUWXRAOPAPIDIERHEPGJFNOORQWYZSJNEEXKLFQGNMYORSCQIEDSDROXPZWCUHKIMIUCIPZPTHNZLFEBLYUGKPBKBUFMWZB");
    msg.ccount = 205U;
    msg.cnames.assign("ZDSCWMRRJDWEXCDLAXLVYPGYEHIHKQZHHAOMIEKNUVDVXRCFGFCRVYDNASQGLWBDDUOOSXMAQZTPKEMJACJUJYGKIJOFIRFGXXYNWZQDGVXIUOKATOEASQNTJQKHIEQHPLS");
    msg.last_error.assign("DWVFITMJSBLFKSFGVXPEENLCJIGVJXJRDINWUXCFQWFRZYEYWWSQZZBMGCYQWOEDWNJGFZIWKURCIOKZUBEZWSULENKAVWCOGSAPSQYPAMDCVZCHNQBECSPFSAJXVYHLRUCTUKZTUGLMYIFHGKEKQBHTUBIRDOBGRPVGSHJDKOAOMXMAZHSDTPLNYQYCDHPXEOLMPTJOUF");
    msg.last_error_time = 0.27712531151537423;

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
    msg.setTimeStamp(0.3603941544152447);
    msg.setSource(11670U);
    msg.setSourceEntity(160U);
    msg.setDestination(13132U);
    msg.setDestinationEntity(119U);
    msg.mcount = 245U;
    msg.mnames.assign("QQASLEABPRDQWOVJAKJMCZDONVMCVBASTELDDDHUINGLQXUMKEJWVPPYNPDSRIEZFPFGURCOAKHCVWFOSGMAZMYHSYMULHCSKXWJZQQOGECCYTGIXFWYLOOTTRUCKKLKHPYEVP");
    msg.ecount = 193U;
    msg.enames.assign("NNXWPJOZOYPSRDCBJCUAQBBLVMNYDXHYETTCUZURCHTFOFHLQWXJJADYNPZDYERSLCTBHLXZXGCEBMHJHFUXQKSYRGOFVCMJEEMPGXQCBKOWKGINFBXGUSVASCNQDSGRPBAQMUIUMEHZDWOWDVKRRFMAPNPQDWWKELZ");
    msg.ccount = 136U;
    msg.cnames.assign("OVIYQTUULYOZUNMCDWZUSYNAQDDCCBTQMRTPMQGASRHHWIFGEXIQBWMHUZCGEJGWRAHDOAEPPYIUKDFRWJSSERJIDFFTTKNUPXOUTZXSGLXBNVBGHZPIMTYQBPLDMACKEXOAVVVVCJGLQINLXWCWFJRWYNOAFMMBVUVSLLSOYMILTUZCHGHKOABWJKIFZHADLEPLSRVDPYJQTEEIJHPYDXNBXQJK");
    msg.last_error.assign("IHXKRYSHCOTVFCADWDBLSOWPNGSTYRCXIEMLHTYFTESYVQEYOGXXHMOSZTSZLKFRIOHWQZZLORREJRODLSY");
    msg.last_error_time = 0.7362807972481163;

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
    msg.setTimeStamp(0.8626072612219068);
    msg.setSource(18686U);
    msg.setSourceEntity(167U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(87U);
    msg.mcount = 156U;
    msg.mnames.assign("TASOPDNMMMINUIBDEBOIHWZYBMBHTBIEYQJOVHYLHCEQQIKMGMKCAVZYUZPGAHJJDLFBGGRAAUWNZRTGUDXXEJCXGFXZWECISSFHVOYWNUVMRXUZHQNOHDBCWEXOCYXHDIPMPXTXJGLPLCOQTVJQTPYFDSSTAVVNVGNKLWPQB");
    msg.ecount = 42U;
    msg.enames.assign("XWBEVUTECSHKGAOYDN");
    msg.ccount = 212U;
    msg.cnames.assign("HGHNUMFJDEFWNSWTNQLCXCKUFOYBGXVTUMCKDZBUBYZMPFJAZIAKUPRMGHVNEYGDTWAWOKYOXEEPIFXXRXFJIUOIJHKFKTQJMDTPVOSPKHSZRQEEYZTYERVMLABDPAKBFQTMQWRLOAHJWEWAIELBJXOJIVQSIPMIHYKYCLKGSVVVZOXSQCDYRIGDRVNW");
    msg.last_error.assign("QOJONIWWQUHGERMMXJDLURGQJJNOBZXEFYIQAVYLVTEXEHOTSEODBZHDCXXSJIAFVTVNQJYJXMUOGDBRPCFRGUSDTMXCPIQCGNDELNPITBKGVGJSIVJHSVKXRTFFWAAINQKPDIZMUUBZDKAOKMTGUBVQHBCWNRJWMPASXTTCWSLQLRCKVHRPIPVNTSY");
    msg.last_error_time = 0.7209876894290697;

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
    msg.setTimeStamp(0.0916218159013219);
    msg.setSource(10279U);
    msg.setSourceEntity(54U);
    msg.setDestination(33122U);
    msg.setDestinationEntity(24U);
    msg.mask = 138U;
    msg.max_depth = 0.839506637306384;
    msg.min_altitude = 0.3237787522699561;
    msg.max_altitude = 0.6829725216128779;
    msg.min_speed = 0.15029398916298586;
    msg.max_speed = 0.34341020862943794;
    msg.max_vrate = 0.13340505155056415;
    msg.lat = 0.045965632121649835;
    msg.lon = 0.6700538890832926;
    msg.orientation = 0.5752142671259362;
    msg.width = 0.45517776041031366;
    msg.length = 0.8407877350598723;

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
    msg.setTimeStamp(0.806007468674517);
    msg.setSource(59389U);
    msg.setSourceEntity(228U);
    msg.setDestination(34661U);
    msg.setDestinationEntity(98U);
    msg.mask = 177U;
    msg.max_depth = 0.09585314602047879;
    msg.min_altitude = 0.7762451895317901;
    msg.max_altitude = 0.8728867623475955;
    msg.min_speed = 0.10631732357203738;
    msg.max_speed = 0.8028883069556025;
    msg.max_vrate = 0.2301696632958734;
    msg.lat = 0.5686897802416432;
    msg.lon = 0.6745401563596289;
    msg.orientation = 0.7625132344835248;
    msg.width = 0.6019003427011184;
    msg.length = 0.32347190459297503;

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
    msg.setTimeStamp(0.6484907689176482);
    msg.setSource(38095U);
    msg.setSourceEntity(34U);
    msg.setDestination(53108U);
    msg.setDestinationEntity(151U);
    msg.mask = 37U;
    msg.max_depth = 0.44412777219898203;
    msg.min_altitude = 0.9277350575349581;
    msg.max_altitude = 0.4490224997114375;
    msg.min_speed = 0.15836890007973126;
    msg.max_speed = 0.8844360737995524;
    msg.max_vrate = 0.44171053710250463;
    msg.lat = 0.41317402148247284;
    msg.lon = 0.5990906759653617;
    msg.orientation = 0.3254670863087622;
    msg.width = 0.7884298877894133;
    msg.length = 0.42840097237030184;

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
    msg.setTimeStamp(0.6308520865886103);
    msg.setSource(37560U);
    msg.setSourceEntity(33U);
    msg.setDestination(26120U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.9890915280672304);
    msg.setSource(25835U);
    msg.setSourceEntity(78U);
    msg.setDestination(335U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.2639092878842255);
    msg.setSource(58307U);
    msg.setSourceEntity(182U);
    msg.setDestination(58228U);
    msg.setDestinationEntity(98U);

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
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.08082285803953326);
    msg.setSource(33608U);
    msg.setSourceEntity(104U);
    msg.setDestination(6596U);
    msg.setDestinationEntity(32U);
    msg.enable = 196U;
    msg.mask = 669132222U;
    msg.scope_ref = 1371619554U;

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
    msg.setTimeStamp(0.5027254464059797);
    msg.setSource(20891U);
    msg.setSourceEntity(244U);
    msg.setDestination(10927U);
    msg.setDestinationEntity(231U);
    msg.enable = 231U;
    msg.mask = 1948243327U;
    msg.scope_ref = 3744879264U;

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
    msg.setTimeStamp(0.8324827902484452);
    msg.setSource(9562U);
    msg.setSourceEntity(70U);
    msg.setDestination(3350U);
    msg.setDestinationEntity(23U);
    msg.enable = 160U;
    msg.mask = 2963203064U;
    msg.scope_ref = 2209853631U;

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
    msg.setTimeStamp(0.251587062685502);
    msg.setSource(38819U);
    msg.setSourceEntity(213U);
    msg.setDestination(63905U);
    msg.setDestinationEntity(206U);
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
    msg.setTimeStamp(0.5466038672857698);
    msg.setSource(43709U);
    msg.setSourceEntity(55U);
    msg.setDestination(60749U);
    msg.setDestinationEntity(45U);
    msg.medium = 68U;

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
    msg.setTimeStamp(0.40831206567769474);
    msg.setSource(15078U);
    msg.setSourceEntity(113U);
    msg.setDestination(16046U);
    msg.setDestinationEntity(74U);
    msg.medium = 231U;

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
    msg.setTimeStamp(0.43678110563131567);
    msg.setSource(43147U);
    msg.setSourceEntity(237U);
    msg.setDestination(38261U);
    msg.setDestinationEntity(27U);
    msg.value = 0.6612886447938665;
    msg.type = 225U;

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
    msg.setTimeStamp(0.9310561593350586);
    msg.setSource(35305U);
    msg.setSourceEntity(96U);
    msg.setDestination(37853U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6563574184921124;
    msg.type = 231U;

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
    msg.setTimeStamp(0.8130394343214566);
    msg.setSource(51319U);
    msg.setSourceEntity(193U);
    msg.setDestination(24676U);
    msg.setDestinationEntity(48U);
    msg.value = 0.979914793028242;
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
    msg.setTimeStamp(0.6073818365238342);
    msg.setSource(41526U);
    msg.setSourceEntity(155U);
    msg.setDestination(37782U);
    msg.setDestinationEntity(192U);
    msg.possimerr = 0.8008406288663068;
    msg.converg = 0.44723529021547737;
    msg.turbulence = 0.731365572338979;
    msg.possimmon = 235U;
    msg.commmon = 158U;
    msg.convergmon = 203U;

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
    msg.setTimeStamp(0.6906743773897615);
    msg.setSource(16962U);
    msg.setSourceEntity(42U);
    msg.setDestination(32634U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.3917853293865692;
    msg.converg = 0.9716007972021331;
    msg.turbulence = 0.21407399511088787;
    msg.possimmon = 81U;
    msg.commmon = 244U;
    msg.convergmon = 25U;

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
    msg.setTimeStamp(0.7059170356259388);
    msg.setSource(15858U);
    msg.setSourceEntity(42U);
    msg.setDestination(21848U);
    msg.setDestinationEntity(154U);
    msg.possimerr = 0.11863841638918715;
    msg.converg = 0.01605985262354337;
    msg.turbulence = 0.9566611750055108;
    msg.possimmon = 158U;
    msg.commmon = 16U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.539630176544419);
    msg.setSource(18183U);
    msg.setSourceEntity(51U);
    msg.setDestination(1188U);
    msg.setDestinationEntity(205U);
    msg.autonomy = 164U;
    msg.mode.assign("PSICLVBGKXGFYDZNPBHBAUMYMPOSFYFFV");

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
    msg.setTimeStamp(0.13394635150158707);
    msg.setSource(15288U);
    msg.setSourceEntity(61U);
    msg.setDestination(59550U);
    msg.setDestinationEntity(147U);
    msg.autonomy = 46U;
    msg.mode.assign("NGSHZDAKGROMANZPQZQAFTRDJVEHCZPOIFMDJBEZCDIJYISDXBEELQTQWLNXUPZJKLGSGHLMAKIXWFPVEHBVMTZTJWGTELRZHSPUHJPNCEVQJQABFDYTUTSCXFGITSOUYRKZSOFLYNGKM");

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
    msg.setTimeStamp(0.5970076106646288);
    msg.setSource(34785U);
    msg.setSourceEntity(61U);
    msg.setDestination(51301U);
    msg.setDestinationEntity(15U);
    msg.autonomy = 158U;
    msg.mode.assign("JMXMSURJRHVFYTGLSMCEWCSGQUHBFXD");

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
    msg.setTimeStamp(0.8183252006059214);
    msg.setSource(39052U);
    msg.setSourceEntity(99U);
    msg.setDestination(7251U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.8946520361118169);
    msg.setSource(51489U);
    msg.setSourceEntity(52U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.962438417242731);
    msg.setSource(13311U);
    msg.setSourceEntity(98U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.7265597036919091);
    msg.setSource(18219U);
    msg.setSourceEntity(222U);
    msg.setDestination(994U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("WSNCJQTTFJTEYXGUVWKVIMQIEYDMKYZBWYSOILOGYEUBCNZRKELARQSXXFRNTPPRHAIG");
    msg.description.assign("PRJRVNEASMEJGAFGCDTTLKUQYFSSWJTWNRAZHEBBXWYOTVODBBHWNXLWQUZZPPGPBJOLIHNIAMIJYMUUAYZZR");
    msg.vnamespace.assign("VBIQOCNKBIXPCTQGXTDRXWIAULHQJEYXLAERIKBNUGCRBCMCSLFPIGMGXTOZDMWTBWHJSWGVHNVTKMWHCYRLBKDDUGX");
    msg.start_man_id.assign("MYUJIZKAZSOZBYGXNGICQTFSTGNEZODLLCBMVJIANLOPPCLQDNWHRSRAPLEKJJQVEQKBEVOSAONJJZKFQELNCNIQDTSWUCEBHRIAVICUMOZTKRRIDWQYXWZJIMWGZTJUMRGEFKVFUERQIUAVNYIXSLM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MERTSNXGOAJTRLPJHDIPXAUADKKLDDZTMYXIAOIZVMQLWPYMSQTWVOELNBHYEAMGCKXKTHGFCMURHVWJCBGNNRGLJSGLICXQOQRHDFDJSZINWAWZEKJWZOVBLYSZVOQHEGPQYYNPMBXUISRBHATFDURLFHESMXFUQKRWJIBCEUQYPLTCYKHFWBCXSYXFUJPDVVE");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 871195947U;
    tmp_tmp_msg_0_0.id.assign("EUEVDFGYZPNHCYFTSLEMULDOLNKWLVXRFCEJYHBRNMWYZQSAPJQONCZQXTVWEMVWBAQIUTQYQRLCFBMPMOAFRBTXBDXAIFYSTPEYXPUBLGILKZUSZURHUGQEBSWOFOKZGIVIFCJHWNXCRAIAEHEJYUTZZMSJIKCJIKZPUANJSGMYCKNDPGJLKHLYDNBRVVAJASQXUPBOOPWJMKTMBHZHCTQWDVVGHVRFOGHWXTR");
    tmp_tmp_msg_0_0.memento.assign("MOZVPUXBMLGSFXLRGMKNNWOHRPSIFYHOPCBQVLZPDQDQGONBSFRDWJICMFAZKQWQUVUTKUZYTWBSDYNEPLAQUCTTUFEHXVUHJLCQXJUUWASCDDLQGGJKZAG");
    tmp_tmp_msg_0_0.lat = 0.14013905363202706;
    tmp_tmp_msg_0_0.lon = 0.3909771175876535;
    tmp_tmp_msg_0_0.z = 0.8505553130197093;
    tmp_tmp_msg_0_0.z_units = 37U;
    tmp_tmp_msg_0_0.speed = 0.46481984801272125;
    tmp_tmp_msg_0_0.speed_units = 226U;
    tmp_tmp_msg_0_0.custom.assign("NEZSKKMUYHOXPNJVKYKWMFIHTJVYXBJMGCZFLZSENUVWTAZRTKKFPALFUHBXSBUWWTCGRXPYVGTUCKIXFFRWHGDTQDSDZPNLPSQPRGIMOSVYVDAQAHGCLXJEBCZJRXJCZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QIVRCOFUFFIAAIQJQECVRJLCDTBWQGMQYMKJHHTFKTPFIWCXYSWQYWOFLSZRQDYFHRKPOHDQ");
    tmp_msg_1.dest_man.assign("KGPXQTWDKQJW");
    tmp_msg_1.conditions.assign("ZTPUOYKTGGMJQGFTFDZCWMKERQBMPWRTOEDOCJXUQBEJCKWHKCJQGNVEIFFDDQEUPVKVFABEZGMKZUPVWCXFZKVECNYHLTBRRJMHKCGNBRQOJPNXIEMHHQCLSVGMWYSIPFXHTZOLZMBYXDADJBXZTDWATNIWMSZYTNGWXASISSLIDLAUONVHHNUNL");
    msg.transitions.push_back(tmp_msg_1);
    IMC::SetPWM tmp_msg_2;
    tmp_msg_2.id = 172U;
    tmp_msg_2.period = 3332620882U;
    tmp_msg_2.duty_cycle = 33608192U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.35072351903389787);
    msg.setSource(30737U);
    msg.setSourceEntity(233U);
    msg.setDestination(34627U);
    msg.setDestinationEntity(143U);
    msg.plan_id.assign("PTZZNEZHVDKONBUQEGXJQFHXROCSRSLNHAGSPOJTWJYTAREDEMRZBJEQPCIMZITKLGDOHXIVWLVPWLRVFTWCZRJKPISKRSDEHNXDWFZPLYFQNAVSYJBUVUUHAVMWXOEVMPAEBOCQIQSUUIGLZBKIAJYBNGYMKUNGZDFFVKRHTMWCIEFAKRJGNFXXLPUXYTCDPJIMIXJYXGBSQPBFMAKCFHCDURLNLOZKSHAY");
    msg.description.assign("TBNFHMFLNYMOULMKEAZDSFHLMHXGAIEJIHJEBGDUGGCPEVTZDXHOSHSBQFFAMXYYNTLQSCUUVWMILDADPQGNSKIQVAWNQMBWEZIWL");
    msg.vnamespace.assign("HHKSTNYCFARVIBTVYZGISKPMJSAYZPSTPQTNLOBBYNFEZCFQBGX");
    msg.start_man_id.assign("XNFESWLERBZFRCWWPTAYSNQTITYQZHCOSPURWGHNLLAMMYZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LVWMUESZCNSZHMAFIJTPQYTWRQCOSBLJGQCQXAVHREBWYIACKAXQAHNMGNPAVLZDOBRZPGLDNJ");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 2778480894U;
    tmp_tmp_msg_0_0.id.assign("UTOEIEWEHXBKPGHDHFFFCKWBCNWRGESHMPXLVJYNFDPUFUTKSMKGZBZBSLUNELYBZEDRZZXRRGSTYRZOEJIKXPJSMAAIVVOSHIRGAYOOLTWSWDGUHNDLJXZURYTHIQ");
    tmp_tmp_msg_0_0.memento.assign("ZOELVVWWGWFZJEGSUOCQXNIQYMSZLIIFMYKXXVIFBIRBEXQJHBPQHXBMUVZCOYSDJHCOYKIQOGVBPYRPRDCMNCGFJKTXKSVPAXUAQHDLFZWWBWQKFPEGDDFDNZNKTGKASKPMHSCDVLITIUESTTZEAKYBLVJUEDXTUBLNEJXDMFGSTRJM");
    tmp_tmp_msg_0_0.group_name.assign("SZUQQWFEMMTYLHRFZDIHFMACDCKTKUSFJSJVQCMUPOCIPUOIZHZJKNXWPXDBAQGLJJYZEBXKMZSFWHIRUVFEGGHAVHJPTYDLPKTKEGHVTNXREYLTEKDEBYOIMDRTLDUOPNAQABEQGNNZUIGTLEMWZXGUJVVOCQMDNPQQCVSOCWSIMVWBIPALIUTOKKYLYYBKXCBWFHZFIBNJRELANUTFAQSVCOPPSRBADDJXWGSXX");
    tmp_tmp_msg_0_0.formation_name.assign("QXLSMIXGWWAZFNVQEMBLAKHAKTBVQAPGMLXUMPZOWFVBECCTRCPJBGXHTIPFHVQHPFOSIWVUYDLGGAJMXWBTESZQWVRFSMJLHVWNJZCXPEHAHDEJJ");
    tmp_tmp_msg_0_0.plan_id.assign("QNEAMKUKTQUSVQDOTJWCUCRHTAUPMHGZIVVDKJDETHMEQIRSZXRCNRBGFTZRUFQYMPYAKBYWNHSINTQKVWIRONJKNJHXLHKBBLUQSTNPNMEFCPALFLEJWUVWEYDMKOFIGOEVDRJVYXCFXKQZEXWUIPBUDVYS");
    tmp_tmp_msg_0_0.description.assign("CZGIZTRXEIWKYJMULJPHVZHSLNADLFYOLTZCNHPQJLXZWOXOKPIEKCDTJWRPXMPMTBTCDGBGDME");
    tmp_tmp_msg_0_0.leader_speed = 0.7530422409762637;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.9695249491135332;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.6624589126513706;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.6298332422412424;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 36266U;
    tmp_tmp_msg_0_0.converg_max = 0.6993621883058071;
    tmp_tmp_msg_0_0.converg_timeout = 39957U;
    tmp_tmp_msg_0_0.comms_timeout = 17239U;
    tmp_tmp_msg_0_0.turb_lim = 0.7323401622843634;
    tmp_tmp_msg_0_0.custom.assign("WXEOFJRJDDIMPTSWZUKBISCFVKFERWPBEYPXNTOLHSCEMDOMXKWSQWNNVJHLJZVTJCGNGSXCRVZLWGDYGEJTEVIJIXAWDZMUOKMLFXHABLY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Dislodge tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_ref = 854186810U;
    tmp_tmp_msg_0_1.id.assign("FWDURVYRCSZKHMLMFSQKNIBBIDGUJGKBQARWWNHCTIVJUUJNRYIUPOIML");
    tmp_tmp_msg_0_1.memento.assign("THCDFLNJKPGMLSHZUCWJIUMZDHFIRVPADPNWBLAEPJUSUXKCAORLVBMGFJJOBUMLOURAGKFSCUBWLLHDVIYVEQZMOVUVTQXWAANYEQSGEQSJSYCJOMNRKFCNSAUZQIXTQYKMOTBIQEWKEADXHLVIOODRIBKS");
    tmp_tmp_msg_0_1.timeout = 7245U;
    tmp_tmp_msg_0_1.rpm = 0.1041729092471343;
    tmp_tmp_msg_0_1.direction = 13U;
    tmp_tmp_msg_0_1.custom.assign("SHHQXCMUPKQTZCDRMUHVKCCRFGZGTSPBGJWDVCDAXPCJWLSTGIEJWTJANJROCGDLUYUYTNPBYNPGHLXRJBZSMXNPIDXYSIAVTMWOZSBNTHWWBWINMXULAKJIBPRDLTUBITJUE");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanMemento tmp_msg_1;
    tmp_msg_1.id.assign("IGFEQIGQMCSDLRJPIGLXEUDHIEBHPFECTSYJUBMAVBPYZNUKIVRDZMOSKZUOZHDAZLEOCDJYEOUYIKOFWYBNIFLTDFTJKHOKQOAOTZCTJTXLNSWBWVINJULXXMNWBWBSYVDNUXZAESFJGFSVGURAVUZ");
    tmp_msg_1.plan_id.assign("LDICMXDFLVTYUTUWIYXVYNYQMKBJQSKAURKSMOCJWNJIPCRUJEIIDNZGFBVCHELQUFZSDARLCFYQWCQWBTPRJAFJREZMWONOPCZQXTBYEHAKHTWZJAZUTSNGKYYUBZFBIKUSAZWPYFPGGWMLHLMIDTVLOITHMGKLDROLEKAHVHRGFMGEENEONCOPCOWSADSJMTCRPUNDELXPXBGQBIXKDQQONXYBXGOJSNAXVWRSQHPPKHTUXVR");
    tmp_msg_1.maneuver_id.assign("LYENFVHVGKZSGOBDUIJHRDALBKKZUXDGSTYAFMRTFSYWMTAVXMMDJMXPKQOIWUQHRVWCVKIUEZILWLCNLCCYHWYCQBSZMNSEPPRVLFLOPOIPCUTXIFPEUGVLGAIDUGRNHAQBULDEITBGWTOTEJWBWXSHVANZYJCGJRGPWAZZYOTMOMVTXQAFKJKCJIVFNCRYEDHOETAUKZFIXXSKYXMHFRQAOFGNDQPYJJBMPEPBUH");
    tmp_msg_1.memento.assign("FDULYCIYMRZHVMEKULZEIRSWCCIMYYEPRYXUCOXVPYSPZFJTTEBWWJCIXCOVJGFKWQK");
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
    msg.setTimeStamp(0.4996698700856227);
    msg.setSource(43022U);
    msg.setSourceEntity(148U);
    msg.setDestination(46798U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("VECCJUIYALICPILPYQELNYUDEFDDCZZHCPCLMGGHLBJODIHXZVMGOHQCANWBJWPONOQZPFXXKKATHRAGGJMRHFRBGEKBSGTSTRQBWPUBGKRIVEAJWRXCNHYRNLFKWQIKRGAVJRKLDXKWLWPLWUYJPAHCOZSJKYSYZOIUBZYMQNDZFVWVVVUXCESZGTTHMFMDSSDRQYNUVXNWQOMASDIOBJPEMZMUXTMOQ");
    msg.description.assign("GQNGDSVTIBRHGQYMEZAUIBRCFWQKQMEKZQLVCWEKQNNWMACIBWWGEXZEDDKWMZGJSHIZJXJFDJATFDBXKSRHCGBFIQPYPMQEXGMOPFPVPCCIUOOAALBAJFTNKGVCRTWRNFJKOOY");
    msg.vnamespace.assign("TBPBBWRTKCAVBQLJJDEMUNZZURVDGCHNMFSIHWPHNGKEXOFJCHXQNCYRMMHUVCNQKOZKWHTURFIKAZSBXOPWMXLOFWEJAISGHRJROYGMJADYXSYAGZFIKSTLIJBRLPUDTPVWBPCLXYOJTGAZIDIFKRLABDVDTMNYGFHERCSUVVPHYI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DWJQGUTRJZIAGEVSWPAJNKXVPIFABQLCERIKPASZNQRYSAHKNEJ");
    tmp_msg_0.value.assign("VAOYPMLCXGYLVCQJRQNSTTKVQFNJHFXDEHUJWZLQBBGYWTCOHCZLNCBBIYIXNXGRXPCHGJGAFUFADKGLSSMZJWZYSFQI");
    tmp_msg_0.type = 220U;
    tmp_msg_0.access = 227U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MQCREONMENMHHZMSBPFSQJOPFSEFMWNDNYJZSIOTDXVRKUEYRDYCAZQIHDNSILHXCRWXETAVEHATQIPTQAJZJUDRXEUGARBSTZFDNOYHTBIUSHUGHGKKKMJOLXVHJVNFBBCVGKVGRGWBXUOWOQRBMJLGYJMLLJNHNPXPKACUPYISZWALMLCLUCWAFCOWJYYIWYBSXPTWVQWVETRDBVFKZU");

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
    msg.setTimeStamp(0.056357651807958487);
    msg.setSource(26598U);
    msg.setSourceEntity(219U);
    msg.setDestination(20897U);
    msg.setDestinationEntity(178U);
    msg.maneuver_id.assign("NPHACNCKXWVKPZEXYUQPKFLVFJRMKVEHSNYNFOAWTTWWQXUBGFMSKIJQCCZNSMOXEXQUEAFFHJJAUW");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.plan_ref = 1641076966U;
    tmp_msg_0.id.assign("RTMCXBQDZFFTIRDOHWGPYXLPSYNREOSSBGRBSXVNLBHDFGNRHJQPAQMBKDYAEOXUCJSXGZLGCFOPFJLQLWVEJZDVQOMGZ");
    tmp_msg_0.memento.assign("DPERRRIPBQGTKSZNAMSVLYNQDKPBFKABXBUJFLJOZOPOXXXWFGTUYYAXUWPVCWDHIJENKUMEZIZDCFYFIYB");
    tmp_msg_0.lat = 0.8770111946051145;
    tmp_msg_0.lon = 0.5979494669697785;
    tmp_msg_0.z = 0.39417446509454035;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.speed = 0.9966378564560959;
    tmp_msg_0.speed_units = 89U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.842018723942433;
    tmp_tmp_msg_0_0.y = 0.16810551512452065;
    tmp_tmp_msg_0_0.z = 0.16575925618979048;
    tmp_tmp_msg_0_0.t = 0.081660020243426;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.008998208146417275;
    tmp_msg_0.custom.assign("DILSUPENZIYFVGZNLKHLIQP");
    msg.data.set(tmp_msg_0);
    IMC::ImageTxSettings tmp_msg_1;
    tmp_msg_1.fps = 78U;
    tmp_msg_1.quality = 25U;
    tmp_msg_1.reps = 214U;
    tmp_msg_1.tsize = 227U;
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
    msg.setTimeStamp(0.8448147872831516);
    msg.setSource(53896U);
    msg.setSourceEntity(89U);
    msg.setDestination(13002U);
    msg.setDestinationEntity(173U);
    msg.maneuver_id.assign("FJKOEAYULBGDHIHTKCVCEOOMZRBVUWRDUPESSWKGDHOKAKYWHBONQQMFDZOFNIGYLFNNHANUFIGQTQWACXVYQGPFDRVODBYIWLZWTPXVUNNZDNRPFKHMRHMKUVQGARVJXYGYFRUTTBMGCT");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.plan_ref = 2420731275U;
    tmp_msg_0.id.assign("AKPKENEWACAYKUWSLROPGIFBCYGTJDJPJZMSKCCAADZJZMPSLOGJ");
    tmp_msg_0.memento.assign("JPLERPHYJAMJMNXKRUJGZISYFZFGFPURSHWNXWYWQVYNNDAXNNTMZSWVZRSHEDLIOSXYEPMTBDXJICURLAEVPGBWQHBJJAOCGXQEBIJYPYDWBSXADLMPUZOZTOFKCTWHMIFAQEKHVCHLSRWMAXNTVOGDIQXIBCUOTWETOIHGTTKV");
    tmp_msg_0.control_src = 56699U;
    tmp_msg_0.control_ent = 62U;
    tmp_msg_0.timeout = 0.8567452931645702;
    tmp_msg_0.loiter_radius = 0.1627936827789569;
    tmp_msg_0.altitude_interval = 0.3238437996613944;
    msg.data.set(tmp_msg_0);
    IMC::Sms tmp_msg_1;
    tmp_msg_1.number.assign("RGYNOKGHZCSAWNPEPMLZWZITJXQNMTJOWDITWUUTIJHKSZFBYLRQWQZYSZOJJVBPCQHIDKPLUGKJYCAKOOJFCRFXOIVFBWBSXCYX");
    tmp_msg_1.timeout = 1087U;
    tmp_msg_1.contents.assign("DNQOJFXHKGQTJQNENPLXZFXVVOIAEHSDMVAQWIUHDUUNBBHQJOYRDTPUPCNKMKKPXTMSKXZTZMCEISDYYVVGEPMCQRVWBIIRTPLSRJAJYQYCMZGLFLORDUNJLATDGGKUEMVHWFIVLNHBIAYEZWEQMCBORCFAHRWCQPSSIFBJUGITFYSFEXEWFZNGWOGOFEOJONURSMPCRSNZAHGPXZVSDPBCORCAXBYBUT");
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
    msg.setTimeStamp(0.7141272711245091);
    msg.setSource(29502U);
    msg.setSourceEntity(68U);
    msg.setDestination(1679U);
    msg.setDestinationEntity(60U);
    msg.maneuver_id.assign("UYLZAOUJHLOHTKAXPKSPXMBSMYVTSWEMNKYRTTBDAFDQDKSJCPBCYXEAGUTLLRNAFFJQEENLJWQHGIGXVWKNSHEFCNHMEAJTLBLZTUNIBHPIFIQTLORVXVKZWUYGIMZWROYGPMXQQLKRSASHZLCNFZUDIDGVVGFUOWQVONO");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.plan_ref = 3991366651U;
    tmp_msg_0.id.assign("AAWMPYYINYVWPSOUUNTRNSMLBFYJWQBXRMXYETUCXDPXXWQUUSQWMNNNALOBTJNZOHEGQYYCHSEBXFSRGJXDKBBCHAGOLKSBGIQGLVDURWHKIPUMCFCGZLUVDZRHZQRNKDPLTSQOJOVFJADSHQWSTVIZEDCHNBXDPKKCYEUJPYXCELJFOKQZVOTLAVPRGLBKFODBGKGFNICRIREWMMTTUHMELIJJIAVVGTWEIPDHZWQTCPFZIASMVHXMEKYA");
    tmp_msg_0.memento.assign("TGNJHCSPESXWYFLRTWYEXGTMZYZMEHETSSOYHRGILGURDMKIBQBECLQNSIVKNWSQFNVVIAMSYDHQLYOAGYVPVMKFXPCEVAGDDXZFDOSAZNDKRBOLLYFZMQTTJPVPQJKFRULACKBISDAIFHIAFHASXVLZWWXRRPBUPEIQJZBQ");
    tmp_msg_0.timeout = 43442U;
    tmp_msg_0.lat = 0.9853905203888372;
    tmp_msg_0.lon = 0.8396221019476042;
    tmp_msg_0.z = 0.26959559944583844;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.01862410542429993;
    tmp_msg_0.speed_units = 177U;
    tmp_msg_0.roll = 0.34037756416310927;
    tmp_msg_0.pitch = 0.17218839510403783;
    tmp_msg_0.yaw = 0.9670957903019162;
    tmp_msg_0.custom.assign("RSXUJXTOZTIWETDSDJCONCGHHQDDFBQMGLWLYBRFJPEXMRJOWYTUSKOCPWQPUHLFBODIJMOVTAAKWXIBTCARZFKQRVXAPCMVVEPSVRFLLSHFZJGVHILYSMDSNWILAEIPZBZJNRONBUXVRHKNYCGPPTGMPKHZCLAJHLNUCQOBVKYEHEDJXMGUBMJXYXNBLUTEQCYFKPAWIWMQRZQRIZNKYGDIQAUCF");
    msg.data.set(tmp_msg_0);
    IMC::RSSI tmp_msg_1;
    tmp_msg_1.value = 0.9913792902976944;
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
    msg.setTimeStamp(0.30148626164392334);
    msg.setSource(25475U);
    msg.setSourceEntity(161U);
    msg.setDestination(21782U);
    msg.setDestinationEntity(175U);
    msg.source_man.assign("OGYXKGRZJAJTBTNWCXRIUXHITBMQOHRMCFWBPCINPTZCFCYTAUCKMKQMGAABWLDORYXTVQRBEZSLFYYQZDFKVJYH");
    msg.dest_man.assign("PBBWNWKUJTCZDUSRWMFBNVUVUVLUPAXQPYHCATOLNQRKCSGMXYFXXDYTHWGXGEORYOKNMQUDITWNDLZKBIAFFJZPRQKKAYOSJQIEHEJCYFGMMRAAZJGKUGJMLIHORVDTRPYCCXKCQYOJVXZETRKMDZOSWTFAWMEIHKOQJLIZDSSTZFBCZSJTXMM");
    msg.conditions.assign("VAIFNCYMFATLMVHPRWOOALSKLUUGKKJBGZNSBLAVDNKOPDGSREVTRFTAYECAZCXFNSQYMKEFXKBSXUDJOZIQQDJFRBRSXHRLLFPBYPZBLXIHGVAJQENDKBHCVSCCUPEHNRZGXQUMXTMWDYQBTTM");

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
    msg.setTimeStamp(0.9034411435918013);
    msg.setSource(33636U);
    msg.setSourceEntity(43U);
    msg.setDestination(30842U);
    msg.setDestinationEntity(15U);
    msg.source_man.assign("PDJEGZYYHSDVGWLWTOK");
    msg.dest_man.assign("UFSOJUVIPKKDVUWKNIGSDJLWYUBRYCICVTZCODBZSEPXCMTYKKIXJEMXVFPUVDNFAKTMZQBWMHNNQZUTMITABQDPGPUQSXSMINPNTDARFRHODWPXBJFLGSHZJLLHTZEOLFLRJQXACVHBFDZXYBGVMEHOSWARTRYNGBQAEKZMCWBOCUYMYKICBPJOVETCMZHXHSA");
    msg.conditions.assign("FUVLXAUNQMDPQADGALKUESTNXBFKPDHJBKWWMUCNVVMOCSSYIGNTXKHIQFSVYSBKIQWYRELNKXFRXRZHEWEZESTMISBXCUOTIJGPJDJDCNUQYHYAZUFGGWQNPVJCWAFLIZLIPLPUZZFWQVRMYZAZBURKOOOSVSGMIM");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 12U;
    tmp_msg_0.tas2acc_pgain = 0.2712238679512845;
    tmp_msg_0.bank2p_pgain = 0.7712231375400402;
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
    msg.setTimeStamp(0.9590003310839846);
    msg.setSource(62283U);
    msg.setSourceEntity(117U);
    msg.setDestination(34608U);
    msg.setDestinationEntity(198U);
    msg.source_man.assign("YQDTWRKVWIFYZXCOKQNJHGFHZWGMNUUSNLANEFNN");
    msg.dest_man.assign("TNMCEURBKDTTDUICQCHPDWOSGGVT");
    msg.conditions.assign("JVXDDPQYVEULSRFNWORCTKSBZSGDXPUNCROCVBXUEJEBNRVXVEABCHFWE");
    IMC::MsgList tmp_msg_0;
    IMC::SoundSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.40161331785695054;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.26810692949928294);
    msg.setSource(65169U);
    msg.setSourceEntity(132U);
    msg.setDestination(44076U);
    msg.setDestinationEntity(87U);
    msg.command = 151U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FZDIPOALXYZBQRPUFTUNXCIXRXASHFAYTTOQOKJFQCKNEZWXDDNRVCQVUJKLTYKLBOPJGMEAZZFEDEJUOSUDHRYJHMQILOLMGKDMAJNBZGZNBYFVWWYAPVETXOEIBYCSCQRWMUHMASGWMMHURARHJVHCESLWBNXM");
    tmp_msg_0.description.assign("OKVJMEGXGIITKPGLBRQZZDNUCFOFZTIVXUNITDSDIUZFCRGXYCUTLNOTBDRVTAFKARDIYNRYEFTUYPKELKPRRJJNWHKFCZTSFPOOQKKYVQOLWCWHUPBULDMVMEEQBLCSZPMHCWGEVDCAESVJVYURBLRGQJBHOABMZABWDHLFSHHSYCB");
    tmp_msg_0.vnamespace.assign("ZJVJPWXEDKTNJMHTGRWUNXPVAHNFJCNLLUYOKUTIZIZSHDLQXQTSRLPMVLSAMOQPWIEGGYOJCQRPOGBFFOLPOFXHZXGNRFAYMI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AIQATYCPAXESVFKUFGKMPEEEDZLIH");
    tmp_tmp_msg_0_0.value.assign("QMRAFLAVREQBWCNKODVDXNGFNBSWQUDIHEKEENUIRTDINGXRPFVEPWVUMCFJZMYVFNGVMOWBANGTMSIJHOXVGLUFGFAUCXKHSKRBPIIXCQZODYVYICMKIOAYZAZRUMPAQZJCQPGG");
    tmp_tmp_msg_0_0.type = 164U;
    tmp_tmp_msg_0_0.access = 223U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JESUNHYOJRNCVGRJZFUTPUOPWZJGDGORRFDWPUJHILGUCTTQVJQEGLAKAMGWGCYXUGVPFZGXEKHOZHUUACYTCIPBMZKXFBRJXDMYCESNHPOWVBDWEVXQPYZKMILHDVIZQDCZKQWZXKPAIFWSTRTSVUBWNPYHKGDWLCBYDMJD");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("OFPVFYVJLYEPLGSDAXDEKTCDTXJSAPENCBHNOSXMU");
    tmp_tmp_msg_0_1.dest_man.assign("DXOOIOQGNGAYTSCUHRTZINBPZGLTAYUBAVJJSDSLLZTRHOUJHPMTQKVVMLCCJZUXFGVJEINOVNSURJXBRY");
    tmp_tmp_msg_0_1.conditions.assign("SBCVINLISAWRCIYKLLIPUJVZUELXJFCADGNOGJHCTZMNRVCAUJBTCPTZXWNXVSLUKZGDXOWWJDQEMPFPSIDJIHPBMCGRHYAQNTFZIYOAVHAWGPXZHLTQNTJMTYGLPSYZFYPKEEJQEKSDVFVBOUCSREORSERMOUWNKBYQKAXKNUWFTRHYQSMUMLTVLCBAOEWNXHDJQQIVLAPVKIWFFSFHZUGWYYRNCPBGREHDEXQFOX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::IdleManeuver tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.plan_ref = 1966419362U;
    tmp_tmp_msg_0_2.id.assign("DQLBOTDKOMXXLUOAEVOFIOATZVKDJTNBLRERZGGMQGGRFSOUZRIHSQWUNNHPVEQFKOWSGKMXEAGVPABOZGFEYLTKJXRVPNZXFIWJHWHLYYISVMXJUBULUEJHCQJVRFMNDTITFBXPNIWBVNBHTLHHOIRNCSPQCPAJTGK");
    tmp_tmp_msg_0_2.memento.assign("NLSYVCVBFJNMELIWVRQGXGSMAHENBOOJYYGTRJZKLTDVSTRKPCWPJXMS");
    tmp_tmp_msg_0_2.duration = 20212U;
    tmp_tmp_msg_0_2.custom.assign("VJMPPOQOHLJUMXORFDJDSAEATGDKZUGZFGUOZJYWQULJEPBBUJRNMHRZRBIBESDPXWQUNFKFLGTGCHOTSSSMHBFOQPCFTBZWVLMOBEGCNLAMMLPYARNJSCDPYFEVYSK");
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
    msg.setTimeStamp(0.7935757886230619);
    msg.setSource(18009U);
    msg.setSourceEntity(148U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(101U);
    msg.command = 105U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YMCZCUFEKJWVSJATIDHQWPIGRFSGDOGFXYCIFNLIAHSMSUZARBHLKTFJPOIATGRQYBLOGYFLIUDQUWGNRNLYUVHMXPCZJPJEJUABSONQQRAMUZKTHDOZMMVYXENEKBPDQGLBMECZLXSDTVWXKHNMBJNWJLWIBKFYOCYWWHKLBVZXCPALJRTHVYAWEQWTVUORZEPRYUGQCXPICIKKTTRJ");
    tmp_msg_0.description.assign("ZXEJJSSZVRTHPQFVTTFRFWWAJZMISUNGCDBCWNLGSJKLTPRWMBEDGAQEYEDEKBNFZNRTSKFJPQBQMLYINOMUATTVEXPDNZHHYLRJAGHMBGADLPFIZOQOLYOMRYPOLWSAKGRWLKFVIYZEUYVSKZIJGGEXUOUQSDIXNXWJYCMRCCHYVNQEVQPHDCKRZYUHDIPJETUCMXKWB");
    tmp_msg_0.vnamespace.assign("VWNBWDWHAKRARIRDELIMMPEFSUSJWAGLFIVMQVSFKWFWLTUYZGPUZIFMHUMJJGDX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UHDWSNMIMRXRBTZXEDWEPWFTAOTKDKAQGGGMSFYGXBMJESPPEOXOBMRZHGAERLVAGWUJKHZVRFKSDLCMZIYCYETJOCYJLFHQUCZLRJGVLQMFZYHGNKXOYJQAPUPOHXTPBNUVPVIVCCNIADEITSUHRHOICBSXFVIKVUQCXVTLYMBCDNNYFNOZSQEZIPBWSAQUDQMJKWUFTQPKWHOLLRTNCV");
    tmp_tmp_msg_0_0.value.assign("FFXAUBUGZLFANPJZTYRSZDLJOUQFLQDLTIXLAGSTQJGHYUIYLSOCFYBPPIHTDIEPFYHXHGERBLRFPVQRISXKGOAJZHEIFLWKKJBKNOPJMIODVCNJWUAFSXMONWICVKNPEHGHIKJQAP");
    tmp_tmp_msg_0_0.type = 173U;
    tmp_tmp_msg_0_0.access = 99U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GAQQMXYMXLYMCKSPBWPSNVILYXCQCFSSRUQFLQIBF");
    IMC::DeviceState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.586962709647103;
    tmp_tmp_msg_0_1.y = 0.40364845421643614;
    tmp_tmp_msg_0_1.z = 0.8851497547019976;
    tmp_tmp_msg_0_1.phi = 0.08223624185704981;
    tmp_tmp_msg_0_1.theta = 0.39344226936423077;
    tmp_tmp_msg_0_1.psi = 0.6659911371045198;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5790092556373129);
    msg.setSource(7492U);
    msg.setSourceEntity(76U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(1U);
    msg.command = 24U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JDWQYEFRGVUNPUSHGECNXDCHTMRBZGLQTHZQBTMEQWBBMRELACUBGBETHDPGPIXLSJJAFJDPLNLAUTIZOYTQBMTAACKIEPNGGDKVSCMGHKJNDWXXAXTZLYFHTCDSSINYTHQZDKRHXRMVMWYIGRJEBNFOAFOPOSIOBIVLSDQWNPQBVYYYPVWRZHWVXUWFZKLJERAE");
    tmp_msg_0.description.assign("PZKFHVHOLNQKQMQJXZWJFSDUYIBCLJZJOLALMHLEAAPVOELFRSVGXYYZDOKVYTGASRLMIIGHRIYYOZCPCWTEUWSWMFGZNSGJAPYBJNAELXQTUAWPYQBAYBSOHWBRXFGTRPTRKKESLPOREBRABLJIJNNMTGWFWFCAWMDCHEZDBXXIUXVVDXXJOMQYMBTUCWPIQCDSIKNGHJCTVUDHSZEMZQONUVXFRFNUHNHCQTSV");
    tmp_msg_0.vnamespace.assign("CGHGJZRMAVQNYOKKNOODHSLEQDQFVRKGWSXKHCHFCIUNLISABSXNTVHEQZWNIZRAKDGVMPSDDXDTLKPWYXQPJHGZSMRZOIRLVJKAHBTMKGEAZNQOBUUMXNEEPMWWACQLVDDKRVXQTBCLGBGF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JDYUYNNHXRIZNUEDUBWOGDFLVCYCLQBYTBEWHVQPUBHVWRXLFQGQKYQGDJMKLPMWGVTKLDOUXCAJZTHPCJAYBSHREVFUAQLMIRMVEONIHCOKNAIYRKESBYOBQTYTB");
    tmp_tmp_msg_0_0.value.assign("HIPPZDHUOQVSUXXTPUDWDQQJZSFCLZRVLTSETZCWEXJVFLXERCYNXMSTWXQFNFIQ");
    tmp_tmp_msg_0_0.type = 225U;
    tmp_tmp_msg_0_0.access = 58U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XWFEPUCOXXTZEUVLRFQYEBUOVQQXMFOIQLEPIVVHJGQNMLYRVPKUJWFEJUIZPRRWKYIXMPOTVGQGDYMNHXOGIHKYKCJRTTIRPMHNZMJMDCRWHRLDUCEDTDAGJKIHTIPSTDAOAVDBIANYFSOBBDAQYGKTAWLSYGNCAAFTSSKUPFLHCIWUJSWLBJHPUOYEGHBXSA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("IYRDEOHEQXZIAAMFFQCXREPHEGLIVEJNSKQEOZPYKKKZUELTNBKCARHHRANJXPBOZHLUKFVTZXZYMUBRUTWVXFWHBXUJKMVJWQBBPDPPOVCDXSUZTGJPSDLNGCARRBXBXRQTLNWUPXCHSQQYVFADJYOPIGTWCYGKTLGACMTQJGUASWSMTYAYISJEARWDVWNGPNFZIODQDFMOULSBSYKZKIVCMJJLFCILMHWNSWN");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 3626805580U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("TTMWLHVWFJYBWPICZXLSUTBHRBFHFHDWTJQORQNJIEECAVWMRVNNDEEKGSTCUDQYZSNHXMVGQPXUMLLCMIAKIPQZOILFVPZJVLBRSTFFUPARMDTZOYUBBGAEXRYZRFBSGARWWAOXYHZKU");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("FAKFEEZHYWQOEHCJWMKNIJZGICWDTYIGTZCIULXYWOGJKRNPOSAOXESXLQRYBDAQRNBAABZWDZVCRHQVKDRPQHXGVBMLIDKDMQQAIVDPTUZHNGSNSJFX");
    tmp_tmp_tmp_msg_0_1_0.timeout = 53214U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.11544683334826034;
    tmp_tmp_tmp_msg_0_1_0.direction = 84U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BTVFRAAOKJLRMFROJWWJNFPHGMJEYNFYNRADOZGNWMQVO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrexObservation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeline.assign("ZNFRJYWWBOKOEPWAFHJIVFHBZOLJOUPWAGFNZTEHLWMVNHQOHPPDJEBGCKEJCXFSRFPBMLSFYIWOTDDEXKTYMAQSGVAZICUDUYITQXQVZJKBFONJCXGKMINBDELWIZXHUYSAQUTIBSGJTQXYKUNLBXHZCMEKKVACCRTYZKYPQLOUQGHGXRMNCPSTYEWFPALUIMRCBWRPSDQVRIJCMBZHVGUSUMLQJNMFLYAEWXVRRTNXVDDDLVESOGRN");
    tmp_tmp_tmp_msg_0_1_1.predicate.assign("GLQJBQYHGVHQDIMNDNLZDUWCYHRNELCBUDESVVPEIBWEIYTOGAKXGUOKBEMSYSAPSJYDMTHIRPVPEXWBKNHSCBHAHY");
    tmp_tmp_tmp_msg_0_1_1.attributes.assign("ONSGWFEUBOEWDCUHNPHMDVHWLATESKRYPARCZXRDHCBWINROXRHKBKYAADNYAQVCJMZTIOBDOZYQGMPIZZUPIVGWCXTSMGNIVEOJCFZMWDLUTPFUMJCPEGGNTMBUXVASOQVVXMIBAJRFSZSYUCHPSJOXFKLNLHIDKJKJBIKLGAQKEUTGRHIHESFRBRFQKSMJBWPGTKWXWVHLYLN");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("NRPJEGGWLJIWPLXZCSWGDXOMJMEMHSAJWKMYBEGUAMXSTZOZEQEKQFRKYMFHPLRUMISDAHXWEMRKCFRSRITRDLVCHSKMNSBELBGNTOISINTDUFKXTBOXUHFQQUDTOIZHVAAEYVLKQTVGPNZUFVHJNGBCGZFZJQLYDHIFPAKCOPTHJOIAYEFCLTCRVWJIYWCPWPXXIVQN");
    tmp_tmp_msg_0_2.dest_man.assign("ZHLCQWMJITRPFHHLIDOUWVFIMOLDRSRQOJWLPGXIRIRYJDUMHYMYMXQDNJUEZDFUSLIORISDBQRQKKBUWLAZKAGMKYUVXMHEBTECJFMYAOPIEAOZBVEOWTSBVKOOBZTEXTKNAZFKQJLQYJVXVFZJBKITDGFNTASPSPGQVLENARXNPRCYTOUXVWNZPCDYBUZEPSQHGWGPAGNWCNZXEHWBRSHNXHCSFTYFAKTQEHLVJYFDPCIKGLG");
    tmp_tmp_msg_0_2.conditions.assign("MRISRZBVRIJOEYZTJBLVFFNRPBERDLGVTR");
    IMC::UamTxStatus tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.seq = 41927U;
    tmp_tmp_tmp_msg_0_2_0.value = 198U;
    tmp_tmp_tmp_msg_0_2_0.error.assign("JFWEJNTRHJPENGNHPWMDHZIJPJZYQUSKVGRHOPKSXOMQACEKFUVQAIQZTLDIHRASMKXCLRUEWPUSOTL");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.29832249182613046);
    msg.setSource(31833U);
    msg.setSourceEntity(122U);
    msg.setDestination(29396U);
    msg.setDestinationEntity(248U);
    msg.state = 118U;
    msg.plan_id.assign("QERNQJISPNUDIOFWHSFNBBXXENHEIRCRPZPCMTWTZXHZWZMXVCOJNWQSXCGGBKWUVNBDQHIPYSTRVLLMNADFAAVLOKMGLLYCYYBECDZJABKNJXWPXEQIFWFBFQENFROHTYAAUXHQOPDNGYLWITWGRZZGATTQMELFZUOVUAOZHJJTAPKBYLEMVQEMDJURWGGTLYBIBTRIIJKKAKXUDIJSLPOJSGHPSKSVCSVUOROHKFUMSYD");
    msg.comm_level = 165U;

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
    msg.setTimeStamp(0.5426377754312085);
    msg.setSource(16389U);
    msg.setSourceEntity(155U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(122U);
    msg.state = 220U;
    msg.plan_id.assign("IPBAOVNFRSULHDNYBJMORJEXQLXTPWIFTGGOKKVTRENPCTBOYTNVATQKWFJXLQYBXRRKDHDHOXVIFQCUVZXYCPDPJESDPAZUEDWIIAOCUANWBRAVCAGARKZJSHZQZFIQLPMETMGDSKJDFAZ");
    msg.comm_level = 176U;

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
    msg.setTimeStamp(0.9660243400402224);
    msg.setSource(55320U);
    msg.setSourceEntity(121U);
    msg.setDestination(40801U);
    msg.setDestinationEntity(55U);
    msg.state = 86U;
    msg.plan_id.assign("AJXOFZKAUUQNROEPGXAQTRINYFMKXZTQYUUASXCEPIKENOIDGZLLGCHVHDQTZUGJWROVAHVJDEZPBWZKGCJWYFZYFQOTALRXHAFAMGNWLDYNTVQJDMQTBRLFHOHCMGWSXCMWPIMVXDKZOHVVESJPPLETEBBVDWVCIEYBXBJKOUUYPDNXCLFCSOWTWQMWHPZQNKAGINJMLIRUHOXSNYYSDJRUTRASLCMKHKITFPKREGB");
    msg.comm_level = 204U;

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
    msg.setTimeStamp(0.13218457555735075);
    msg.setSource(10108U);
    msg.setSourceEntity(102U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(236U);
    msg.type = 245U;
    msg.dt = 77U;
    msg.op = 146U;
    msg.request_id = 26161U;
    msg.object_id.assign("ZYIGIUFKXBWOTXLCOIZICKCROZVEBNHNHQHGZEPPZXCOWUFVTIMGQAAVKUHYPHZFKKCPTVBWSJSIHJNHMBVNIMPGNMXVEOCHOYODYPMSPRNKYWAHIUGCSRTTTERHWNPADNFNYWBRIXWXMWLLWVMKJCYCEAPZQF");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.object_id.assign("WGIISQRRHQSYJUVVOTCDHHJZEMGRONJDKIEBOJGRTOUTLCYRVFLPDFDMGZKIHHFOXZECWQEGETBKLAUJBJCMJXSUZATPGPOQNNDNXDVPGYLZKHURKUNYTTPAVFXLWJIUIXNTPQQFILWTFFMZWUGDRMGBAJ");
    tmp_msg_0.object_size = 34498U;
    tmp_msg_0.change_time = 0.029367634728285852;
    tmp_msg_0.change_sid = 6368U;
    tmp_msg_0.change_sname.assign("OSWHXEGIVBZDONBWCBHMAMEYOILWUOUTNBPIBJDYVRLKJYADABDVTYKLQCJDGYCMSGCIOEZABAVVIGHFVRPCFRRQXPAUFPMJNBPQORKCZSAIGMZZPKJZQHQSXWAKZGYOFFK");
    const char tmp_tmp_msg_0_0[] = {99, -109, 8, -97, 25, -24, -34, -29, -78, 40, 104, 2, -119, 101, 86, 64, 17, 69, 50, 41, 35, 91, 79, 90, -35, -41, 97, 23, -102, 82, 103, 27, 31, -87, -33, 46, -126, -112, -61, -113, 3, -27, -56, 83, 101, -8, -112, 76, 108, -5, 1, -7, 30, 9, -6, -67, 76, -14, 4, -113, -98, 99, -102, -124, -119, 3, 50, -51, -60, 96, -115, -123, -38, 100, 50, 97, 7, -70, -14, 86, -120, -44, -16, -15, 86, 82, 100, -83, 105, -16, 95, 87, -56, -92, 121, -43, 112, 13, 10, -57, 20, -100, -20, 114, 92, -19, -59, 62, 29, -72, -1, 23, -125, 86, 27, -25, 39, 113, 91, 98, 110, -117, 4, 40, 22, 55, -113, 99, 12, -41, 32, -41, -119, 86, -89, -54, -88, 87, -26, -116, -46, 1, 78, -117, -12, -2, -66, 27, -128, 65, -100, 124, -13, -126, 76, -116, -37, -116, 5, -2, 119, 117, 28, -92, -93, 51, 87, -123, 70, 111, 26, 20, -91, 3, -40, -8, 85, 6, 2, 110, 103, -14, -20, 41, -12, 97, -64, 66, 22, -45, -63, 14, 55, 45, 101, -21, 43, -12, -35, -93, -72, 113, 34, 74, -60, -89, 37, 42, 22, -55, 83};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    tmp_msg_0.complementary_information.assign("FHJFZFXIFOEOHIUCPAXPUAMLGKJIOYRJALGMRRHQGQHMDTQKQWOVPKUCXWZIUENZEFVHOPSJQIFKGBEXWCQGSYBBOCTDDDVVNQCTSMNBWRBJNJPXBWTRPPODZXTMAYNBOSSALSZUEXKSHMYSMHGIZIJGCBLWHNKKZMTVGXNUFYYQEPKDHGEOFWIDVMWRFACXLJKQSQNYW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IWBPRNMRUXKWYZGLQAGFWFGCXHBONSZTWW");

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
    msg.setTimeStamp(0.2971673870969419);
    msg.setSource(34101U);
    msg.setSourceEntity(195U);
    msg.setDestination(55822U);
    msg.setDestinationEntity(247U);
    msg.type = 100U;
    msg.dt = 102U;
    msg.op = 121U;
    msg.request_id = 39452U;
    msg.object_id.assign("XNUBXGUJASOKADCJWNLSNUMKHFRRIZTPDGCVCBZSUKLQVFKBXPDJPLGQUQSFEJ");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZHKVVUMQQBZNWGLDJUAARJBXBOBEVHTEPQGAQZYXDBLKZLLJILGXDRYYXPHDBFRFOODOGRIFRIFKOEOEWXCLXTWMJNCIVFYXVSLOUTHCXHOEPRMYKUOPFNWSTTQPZVWCKAAMCDUXCRQQULAAXQJEKIQNUGWNYMFAMRJHSWWZSYTTVKENLCHPQNTJFZEDBJGYUOAWEGGIJPMGIRAPSCMNSSUZSDIHUMCBN");
    tmp_msg_0.dist = 0.4119346972709431;
    tmp_msg_0.err = 0.1369380210192731;
    tmp_msg_0.ctrl_imp = 0.5065971126741371;
    tmp_msg_0.rel_dir_x = 0.311531715380277;
    tmp_msg_0.rel_dir_y = 0.9005796487748352;
    tmp_msg_0.rel_dir_z = 0.3229390460755688;
    tmp_msg_0.err_x = 0.9409067153280709;
    tmp_msg_0.err_y = 0.6419618342800173;
    tmp_msg_0.err_z = 0.6990218305472472;
    tmp_msg_0.rf_err_x = 0.3257785054711889;
    tmp_msg_0.rf_err_y = 0.6577770242313017;
    tmp_msg_0.rf_err_z = 0.9011549145062163;
    tmp_msg_0.rf_err_vx = 0.5304913905486213;
    tmp_msg_0.rf_err_vy = 0.6154480495053717;
    tmp_msg_0.rf_err_vz = 0.7075870658668311;
    tmp_msg_0.ss_x = 0.42457270343762554;
    tmp_msg_0.ss_y = 0.031404608583297744;
    tmp_msg_0.ss_z = 0.48895499201316983;
    tmp_msg_0.virt_err_x = 0.6908502090062426;
    tmp_msg_0.virt_err_y = 0.41129605242697564;
    tmp_msg_0.virt_err_z = 0.40097647256176183;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WMLPNPRJEYUOOUPNWKBTXTCHFADJADKVBBVGAZGYJCTQCOXGKVXYGNVRLZUSBYSXRPZPHTAJFHBVZNEAILTEWUVANXDGISKIIRAZZNQANFVFKZUKCJERFLKEHHCM");

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
    msg.setTimeStamp(0.0067286284365071225);
    msg.setSource(32550U);
    msg.setSourceEntity(185U);
    msg.setDestination(36591U);
    msg.setDestinationEntity(253U);
    msg.type = 107U;
    msg.dt = 154U;
    msg.op = 122U;
    msg.request_id = 57336U;
    msg.object_id.assign("ZIFDNXTBZPVIVSLZWEKXIQDBHJRNWIVLIVKMKXQP");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 2610527117U;
    tmp_msg_0.destination.assign("POKWMVSBTABXTLLUWEZERENRBQPBKDZKHDADHILCPWFUAWCMZBKONZHDTKKRVVDEXLQZWVFGYMPXPIEG");
    tmp_msg_0.timeout = 51380U;
    const char tmp_tmp_msg_0_0[] = {-44, 38, -55, -38, 105, -27, 47, -33, 48, 57, -122, -50, 22, -50, 33, 6, 119, 118, -34, -79, 46, -53, 40, -78, 76, -80, -75, -113, 24, 24, 18, -92, 111, -79, 32, -67, -86, -52, -124, -66, -93, -17, 19, 40, -8, -51, -43, 19, 82, 60, 30, 15, -83, 55, 105, 82, 104, 107, 48, -40, 12, -13, -40, 81, -51, 62, 55, -75, 27, -59, 63, -59, -7, -72, 71, 105, 65, -53, 97, -41, -77, -93, 101, 18, -53, -4, 94, 10, 29, 92, -79, -97, -104, 67, -49, 122, 116, -21, -112, -93, -83, 93, -90, -76, -74, -100, -43, 6, -62, -55, -46, -47, 55, -54, -27, 75, -46, 43, 42, 74, 49, 78, 21, 114, -1, -60, 44, 42, 89, 106, 65, 105, -20, -94, -120, 8, 105, -128, 108, -57, -105, 14, -71, -72, 93, 38, 105, -107, 58, 24, -96, -120, 71, 98, -47};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VAHPVTOKYQHSQYWXIJAFLCNKLJUNBDTRNDQLECVDIDEYVIMKULOMUDWRMAQMZMZLTGMAGPKAYINLZMOYRFAXXRJNATSQPEPJCIEZFRQVTHITFTPB");

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
    msg.setTimeStamp(0.11790120913148794);
    msg.setSource(46428U);
    msg.setSourceEntity(195U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(211U);
    msg.object_count = 25835U;
    msg.object_size = 1339324054U;
    msg.change_time = 0.08897596853745948;
    msg.change_sid = 2699U;
    msg.change_sname.assign("DSVLCQMGQXLFDJSZXUOKEYLWCCWZKIUDWOCEISOBQCIDUGIXZ");
    const char tmp_msg_0[] = {51, 60, 35, 98, -112, 26, -88, 108, -70, -44, 69, -104, 25, 74, 16, 27, -103, 8, 70, -14, -52, 113, -118, -38, 100, -75, -125, -103, 91, -3, 70, 1, 31, 109, -71, -48, -121, 50, -87, -6, -77, -44, -99, -37, -103, -99};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("YATVOGWDKCMLWZXRSWHYNINMLALDPZYGBIBDJSPTPONWLFZKCJQJFJINSRRMQUATRDQAKXHTVGSZJGJGQIXVVPHVN");
    tmp_msg_1.object_size = 9971U;
    tmp_msg_1.change_time = 0.4391008877222182;
    tmp_msg_1.change_sid = 5710U;
    tmp_msg_1.change_sname.assign("LBGKQZWTVPRFQUGBPHIUTPMKSLZMNNE");
    const char tmp_tmp_msg_1_0[] = {46, -106, -28, 126, 52, -118, -87, -60, -25, -107, -71, -44, 103, 107, 100, -114, 80, 96, -88, -67, 61, 114, 63, -118, 8, -24, 60, 55, 13, 39, -74, 50, 47, -104, -92, -33, 33, -116, -51, 118, 15, -119, 77, 61, 16, 26, -33, -105, -25, 103, 105, 39, 53, -56, -94, 33, 19, 51, -1, -94, -121, -52, 98, -2, 60, 38, 92, -105, 113, 69, 27, 27, 17, -17, -67, -112, 116, 9, 15, 95, -116, 92, 87, 18, -41, 45, -66, 23, 113, 58, -49, -104, -2, -65, -41, 0, -19, 2, -103, 53, 56, -94, -30, -11, 60, 38, 96, -50, 50, 3, -54, 91, 3, -30, 101, 105, 2, 92, 15, 77, -117, 10, -79, -14, 56, 63, 96, -75, -67, 51, 103, -4, 38, 110, -105, 77, -7, -29, -103, -119, 112, 103, -49, -87, -2, 24, -59, 1, 2, -38, 23, 88, 39, 52, -2, -46, 101, -69, -17, -5, -80, 23, -4, 94, 20, 116, -26, 17, 56, -115, 3, -116, 50, 76, -102, 41, 5, 2, -13, 85, 11, -86, 38, 21, -61, 76, -6, -63, 1, 15, -84, -34, 104, -69, -84, 68, 96, 63, 112, 125, -16, 63, 34, -82, 76, 83, 19, -81, -9, -24, -17, 62, 19, -56, 51, -94, 16, 74, 54, 115, -25, 37, 97, -27, 65, 95, 23, 82, 14, 86, -73, 101, -13, 73};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("ZDDOFSBJACDGKJVMTURCYGLHAUMNEZFZBRRXCPSQTPVIGEMBTGXEJNALCQYXWUSBTYLDEYKTVULKYKPWDZQWVYUXAWINWYYPKSCVHBKAZQSNPNXQHWAJLCHZOZSFJ");
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
    msg.setTimeStamp(0.3360136736975322);
    msg.setSource(23015U);
    msg.setSourceEntity(176U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(158U);
    msg.object_count = 44145U;
    msg.object_size = 472844919U;
    msg.change_time = 0.13697533301126574;
    msg.change_sid = 13497U;
    msg.change_sname.assign("BWOGFKNHCVDWJVZCWXZPBMRXVGJVSRWBWXJYUQPVYLIRIKLINSLAZHGKFWVLAKJIEGSSAYUMUIGDPSXRMNDGYGIXDCOUJYDXCDTPLHSKUYJISFMFXZOUGLWARZIAWDMPROCPCHBEXTONQFEAHZHJNJLRULHNPEFBHSATAON");
    const char tmp_msg_0[] = {67, 88, -74, 67, 33, -51, 4, -88, -78, 79, -72, -69, 35, 83, 110, -119, 75, 52, 59, -71, 1, 24, 45, 12, 43, -95, -78, -101, 96, -106, -23, 26, 60, -3, 50, -121, 67, 112, -127, -110, -35, 89, 14, -20, 59, 69, -28, 118, -38, -4, 103, 33, -81, 76, -114, 78, 70, 38, 49, -57, -6, 62, 2, -61, 84, -27, -101, 3, -44, -76, -80, 91, 8, 39, -70, -42, 95, 16, -75, 125, -67, 81, 110};
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
    msg.setTimeStamp(0.9884420850229554);
    msg.setSource(55316U);
    msg.setSourceEntity(143U);
    msg.setDestination(23169U);
    msg.setDestinationEntity(28U);
    msg.object_count = 31919U;
    msg.object_size = 3820037684U;
    msg.change_time = 0.3997450599685498;
    msg.change_sid = 39836U;
    msg.change_sname.assign("BRERSTIPYODRTJOQMPHILVZLRMTTUSEXCWABSNCCKWIVGAHWWSUWLKZDAKTGCXRYMLFGHSSNAFJPXKMAYVNCBXQKRUZEWYSFNGDPZKJIRDQOULETHVOMYVBIZUJDFFWEIZNEXHKZGVXXFXNEQJUEDRFBBBIDDVPBZATTQAOIQYCGLVJVEWUCKBXCZSYMPLWDUERTNJMNJABJXYODHGYGHKGUAGOLJOIOMCOFQQRKNYLQVFSZMHLWQTHSP");
    const char tmp_msg_0[] = {-47, -13, 30, -44, -93, -125, -90, 18, 82, -99, -66, -35, -105, 27, -40, 98, 17, 64, 114, 111, -13, -37, 29, 22, 51, 30, -9, -87, -10, -4, 72, 12, -50, 54, 57, 12, 4, 30, -50, -75, -57, -30, 42, -100, -51, -37, -77, 43, -6, 9, -21, 58, 56, -31, 45, 111, -93, 93, 86, -98, -40, 56, -58, 103, 124, 79, 34, -64, 42, 44, -55, 21, -52, 98, 87, -2, -61, 4, -52, -18, -116, -64, -104, 97, 108, 81, 107, 47, 62, 78, -41, 24, -3, 87, -58, -127, -119, 19, -79, -31, -56, -75, -18, -52, 48, -54, 68, 40, -64, -57, -23, -37, -18, -40, -126, -10, 67, 79, 98, 105, 76, 108, -52, -4, 25, -74, -101, 118, 14, 37, 25, 107, 23, -27};
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
    msg.setTimeStamp(0.25605158334955336);
    msg.setSource(42781U);
    msg.setSourceEntity(167U);
    msg.setDestination(26993U);
    msg.setDestinationEntity(58U);
    msg.object_id.assign("ISHFNBDCSSWJOUMNCGFMHDJIXGNFMNGXTKSUHKUTSMVNSLAZPOWCIAJLDQMCAAICZUHRZKNHRGJIFLJIJOYZMOECGSZXPLKNH");
    msg.object_size = 20811U;
    msg.change_time = 0.7570589241033192;
    msg.change_sid = 36389U;
    msg.change_sname.assign("WNSTWOISLJNWTWYXBEPNOUFBETIEZIHTKMREPCZHGTOAQMSUIJKLESLENAQLYKTUJGDAUERQOOCINPIZWXCBSFKQDOVVQQURAKYYLQDMDUHDR");
    const char tmp_msg_0[] = {53, 53, -105, 64, -80, -34, 57, 110, 72, -104, -26, -61, -68, 92, -15, -122, 40, 78, 36, -4, -127, 96, -101, 40, -40, 7, -88, -46, -20, -125, -96, 95, 63, -100, -89, 16, -116, -76, -116, 14, 45, -112, 67, 22, 10, 104, -67, -47, 29, 112, 11, -104, 36, -77, 114, -120, 31, 104, 89, 3, 71, 96, 13, -12, 40, -48, 92, 85, -54, 79, 28, 103, 101, 121, -108, -59, 5, -77, 103, 122, 90, -66, -116, 73, -113, -98, 61, 113, -33, 121, 91, -127, -57, -4, -7, -86, 104, 74, 38, 80, -86, 118, 7, -104, 107, 108, 25, -121, 67, 9, -38, -91, 126, -32, 23, -125, 41, -120, 109, 43, 84, 113, -100, 67, 5, -44, -119, -94, 111, 67, 109, 35, 29, -34, -17, 32, -60, -56, -89, 96, 56, -97, -73, -12, -61, 87, -114, -77, 25, -118, -112, 21, 116, 86, -48, -110, 4, -124, 92, -76, 34, 9, -93, 107, -45, 55, 7, 5, 88, 55, 124, 98, -110, -46, -30, -73, -46, -90, -88, 88, -72, -33, -41, 7, 96, -88, 106, -114, 41, 83, 49, 19, -63, 41, 121, 48, 65, 116, 60, -40, -64, -41, 66, 18, 95, -44, -42, -105, -51, -33, -84, -114, -62, 98, -70, 80, -99, -124, -3, -107, 54, -65, 60, 49, 37, -97, 37, 58, 90, -19, 58, -96, 31, 71, -40, -12, -76, 68, 91, 70, -60, 82};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("JFUNUKIXOOCRIFOWRFCHMEDMCIESDLFUUSDVIXZHJWDVLPWXILISIAVPQZMLLVRQESTYJAKLFHLCLFHZAQCPTVGTBYNZXRZZGFUHAWQDNCNYOMNZIJPEUVTBQTKVRTKXAKHTYDCGEKFYULRGJXG");

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
    msg.setTimeStamp(0.011319815956216672);
    msg.setSource(62785U);
    msg.setSourceEntity(53U);
    msg.setDestination(31971U);
    msg.setDestinationEntity(162U);
    msg.object_id.assign("SMBKZDIOJGZBLUTWHVTERQOIHQARJKMNQFLSXWQUJXAOCQGWCGITUBIXFJKENEUBEPZTCHVCTVWPCNXDPONYEPAYTLRFADKVRHZLBOGIEDFVRUPMITMYGMFYMOOHZRNXRWLYITPUJYKLAQRHVABLUWWAJJTEWPSKCXEIVGBOHQ");
    msg.object_size = 11475U;
    msg.change_time = 0.708081483986874;
    msg.change_sid = 8567U;
    msg.change_sname.assign("YIJWLNVUEMZSUEKECXAFWANSQIEKDJDXKBQBDKWMHZDKMHBMPVOJREFHDWTMJPIDEJPSOCXOHNSZFTOALTNNNKGXBEOSXTKKABYJOQIJGBZWQJNEGRFUAQVMNETHIPXRDFEYNCPBQVVASYVHRPALIUPJBOFVTVTAPPYZL");
    const char tmp_msg_0[] = {-18, 14, 123, 96, -120, 20, 79, 8, 80, -77, -42, 22, -117, 14, 58, 124, -103, -47, 27, -4, 27, -8, -55, 41, 124, -114, -26, 12, -16, -125, 9, 11, -10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("HHWTYSOZBXCRPDRUBJRKRIUZJVZRJCMWBCAGBBNGNFFBKNOKAUPZHUFGJFUAMUJKMSAXWWQWQYIORDEOMIQFAVFTKLETMLDOOKIWHXYD");

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
    msg.setTimeStamp(0.9399446341005419);
    msg.setSource(62046U);
    msg.setSourceEntity(80U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(60U);
    msg.object_id.assign("VQIVVMZTJHLTBRGHNLLLMJEDMGMZTXFFHKTZOEJVXWPDMSISLHSSJAVFENCHBPWFVRINIWAGMDAUBHFDSUHHIFZLQYRVQDOCEWOBAPUPQVOJURQZXFNTYZVRRXYCDKWTSNWCPSBRZANKPWILKSJFVYOFLUXEUJKXLKNACOWCTGGCRPRMQEWOAQFXGEDKIA");
    msg.object_size = 53393U;
    msg.change_time = 0.9272959859813259;
    msg.change_sid = 40143U;
    msg.change_sname.assign("GSRDPWSHIRDETNILHFZIETJPVIBLNVGOOHWCNLVECMBSJUVBTUEGDDAGAVGZOXHUJKNTQVLBWPEYFYQKPTPWPRKUNLARGLLFWTYMMRCIYBJDRYKKCFXCJSLTKEBSOHQURNQFDEWPCKSNCRUFZJUVUNDJOQMDSFZZAXDHCAJHQPYFZPOBXUMUVYGSAAQKYRWQMAQZSE");
    const char tmp_msg_0[] = {43, -81, 24, -127, -51, 45, -116, 55, 19, 121, -46, -79, 26, -75, 114, 52, -108, 36, -3, -42, 0, 63, -4, -50, -43, 39, -55, -27, -30, -75, 17, -125, 36, 96, -68, -92, -29, -64, -58, -25, -111, -9, 124, -116, -68, 100, 33, 108, -66, 83, 73, -31, -45, 32, -26, -52, 0, 32, -24, -124, -59, 17, 94, 50, 60, -96, 61, 57, -121, -101, 62, -97, 53, 17, -15, 95, -52, 7, -15, -111, 9, 10, 62, -111, -100, -105, -60, -107, -6, -6, -86, 110, -7, -62, 85, -119, 16, -88, 11, 13, 119, -30, -85, 60, 49, 120, 45, 78, 117, -106, 58, -116, -7, -46, -32, -81, 71, -40, 12, -90, -88, -41, -16, -10, -122, 37, -44, -42, -106, -14, 120, -4, -35, 70, 5, -92, 90, 92, 109, -49, 42, 15, -42, 88, -105, -48, -108, -71, 13, 63, 6, 110, -18, -77, 17, 10, -20, -126, 123, -21, 11, 101, 102, 14, -52, 59, 57, -14, -124, -56, -49, 86, 106, 18, 86, -66};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("PNSIPLRWYDDOMMFUSPDVFFNOEBMVTZUGVTREKKFPDCQGSVKQWDBKBRNEYHPXGAQUXWLTETMDNBTZJIQWHGUVCTSYMBSYXXVNICOJESDRFQCKQVNHOORPLWCEYPVNIOAJIQBHMWRGCJYJJKEXIKXJVKZKAWSRECYLADDGBLJUCAWXFHZAXDGZSMNHSCFHO");

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
    msg.setTimeStamp(0.6157476076073293);
    msg.setSource(12852U);
    msg.setSourceEntity(164U);
    msg.setDestination(62088U);
    msg.setDestinationEntity(165U);
    msg.type = 68U;
    msg.op = 152U;
    msg.request_id = 2851U;
    msg.plan_id.assign("HUBJDLLUBTTSMPUYIGZVNDSLUETVYMKXRUPSSEVPBHLWXHQWLTECZLRUOMHMNQVRRBQJFOSJPXUBYTUQROXBCGGDXOSEOATILKCAFTDKTKBKJQAJUTHSWDZEMINMJEVUFOHTNVFRQFCZFPLHGOCASXYFSEAR");
    msg.flags = 25603U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 189U;
    tmp_msg_0.op = 174U;
    tmp_msg_0.plan_id.assign("XVLSXOWKRGYQRIHEAATEKYLDGTONEIJFNSDSBDJHZRCWVCCCJCTKDPAPEABTVAYWAWIZEOCOUVRBFZLMBHNREPBIAFIBODKZRNOTUZYMZFLWFQKSGVRNOALNGXITJBSFOIMQKJWVPQUXMMPDCHUGRTLWWQDKDZYFHFBOUUCCYQXVMUQXZEHSVIPHGPBCKASRDQJKGMPUNWHHETQTVMMRYQPHEJLKONWDXFUSIGMSXNGVLZEUJSJALYXXYFTZ");
    tmp_msg_0.params.assign("YFAFOHWKDUCOLVZVXNJUCGQFYXQPYXHPLNDIXFTORVVJQDOMIFXTUZLJUKVTRNSIMDERWIWBYNKCSZXZRAAMORMFOBGRPONSROIBVJLGTGWAMPAENBGYMQJGDOQBEAWEDZETELLY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OXYZAJEPOMBOPLRSVTJBXATVCEIRWDNESBGZFUUDDH");

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
    msg.setTimeStamp(0.7171961512901526);
    msg.setSource(26634U);
    msg.setSourceEntity(34U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(99U);
    msg.type = 13U;
    msg.op = 34U;
    msg.request_id = 6370U;
    msg.plan_id.assign("QNUNIVIGGXKKATWZBZQPKVXTSLEMZWYCFGXRBTUMYJYTBNGAGBCRIHGPVFVCLSLUNHHGWIVTHKZQBRUNYWNCKDOSUWIVIPDQCMOOKXWUJYCVTFEOREEOQEFIYDMSTLFPRDROOWDYCFMIEQTPDTHHJAUURJJLBXXBQEAPLADJSKJBGDSBAOMEVNZQPJSAFHPEMNZDHFEM");
    msg.flags = 47362U;
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 186U;
    tmp_msg_0.op = 140U;
    tmp_msg_0.request_id = 60270U;
    tmp_msg_0.plan_id.assign("HVHNIABVWD");
    tmp_msg_0.flags = 48061U;
    IMC::RemoteActionsRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 222U;
    tmp_tmp_msg_0_0.actions.assign("MCMWOJZFHIIEUAULAZHSKWKRKXPAWHRIOYQNIGRYFPAYDHNLCMMZXYVCMJPOYAVBUUQDOSAAZO");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("FULBMFRHCFMSJEENNCGHIVJCPVYYGVDOHQLGUCEPKRQBBNWDTIEDBUFNXQWKLMKKUUSXEICZNBYQNJOCQZKLLOFITAMMHTASDARHTUFRB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CAJMDAMHQVLUVZFPQHFRUNWBHGAKUBOHNFEBYTFUVBDTACVQEGCYVMUZLLNTSOJXFOGRGJFNRDBOIWXTCIIYCJDVPCESRMKOFFTGJVWMEHESSLWUMNWXQYDPRKNXHWHGBQKGCPXWHJQVBRTIIQZLEKZFXPLQENUMILZXTGCDHORWWLYIXPWKOEDDYJPEUXPKBASZIIYR");

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
    msg.setTimeStamp(0.8540641441938208);
    msg.setSource(63645U);
    msg.setSourceEntity(230U);
    msg.setDestination(25813U);
    msg.setDestinationEntity(52U);
    msg.type = 208U;
    msg.op = 28U;
    msg.request_id = 20460U;
    msg.plan_id.assign("JXTSWBRWXWYTZPXPLEVOBUJRRGQGTHTKFQPXGHDFSQGKMDDKGTKCPIALCADMYOIBISSAHUNMUIHLIAYQWCCYOJKCGVKGFDAOFSIROJJZNWIICWULSNXCFKEESBNIAEVJPPATVOHNVDNMXMHPXEAKDBVMBWBXSOTZUULREMCUFJVSOZVZFYXDWGKFHNWDOBZAQVRPUMLTGIUAHHREKPJMOQYBHJGXEBDREFTLRVNMLYNZJQCNQZZEYRYQPTZSLC");
    msg.flags = 62573U;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WFDEIKZUBCUVDTTJHITTHSKKPPCSC");
    tmp_msg_0.predicate.assign("BJAHCJPDJREZEHDUDYWLLZSPNYXKOLCFDACZEJINZEKQEPYABRVSNMLWQMXYKJMOHKTAXSMRBPUOYFQZFPXVVGMIBSMRWOVWWDGXSQUUBCKMQNGTSWZNSRJTGTCQRIAYZTRVZORCXWUGQJHUBDMTM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DBZROIVJHNPYSGCMLHLBSNCUBDNOVXIGCYIMJGNANLSETDMCXGQABSDJPITCWPKYHNEYEVWYEVSUKTQVIFCMOKILXOYBAPILPOFVDFETLIZVZRPIAPPFWXDJOEGYRBOUXJHCGSIMWVDANHJGRCYLMLMZZRZTPDOZFAZQCJWKEPXAJOUVTLDBAKQTKXTWSBFRXWGERGQDTKXBKRZRRSQNSN");
    tmp_tmp_msg_0_0.attr_type = 197U;
    tmp_tmp_msg_0_0.min.assign("JEEYGVVVZICZIBPQBWMHVGKSMWNOQCRZDPUQOMESKLVBKUKRXAITWHFLHLUHQNZPGSIOWZGGPZFLYIKATUBHRBSXJMANYOTPIDHNUTJENZHFWZQIBQLGIFYVSEJQNYVTTUMAJFDESDOXOTQQNKIEBEFLRRLAXCRJYPCMOHMDOPOXIWRJKDXHCTTPRXWKRLPRGKAAWAAWZAMCBMZXFVJXXDMBDTLFVCVGYSJYUEDGNUNSKWFFEHGCYPOUJCUSNC");
    tmp_tmp_msg_0_0.max.assign("SZXOMNFWMEHVXAQICASCYOAWPKFNSCQBPIPRQXIOOVQPBMGPPILTBUMUZMEJDEFFDLHJZEBUUZQONHBHYYDNTTKYRFTAUDKRQVHBPYYDUGUQHVSQEM");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IPOJVTWLIRQPGOILUYNTNETKXCGMKMYWOVSHXRHCYADUDVQALWRNTS");

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
    msg.setTimeStamp(0.3002650711680682);
    msg.setSource(52796U);
    msg.setSourceEntity(251U);
    msg.setDestination(36959U);
    msg.setDestinationEntity(82U);
    msg.state = 52U;
    msg.plan_id.assign("TACMUSIDEMEQBZLGRDSGHTDZMIVDLRAYGZTHDARQFZXBTRCFUWFUYIHYOPJPROESEKBEENPOVIJUPHUAWOHQWBNEXVMDRDNFSXJPWWGLXHBSFUFNKJIL");
    msg.plan_eta = 889905970;
    msg.plan_progress = 0.9488656454114894;
    msg.man_id.assign("LGIFIOOITJLUTJIYOKCTKXVUMNLGYDKQUVBWYGWWEPAOMMFGHZJPXTDRZOLFDOEOKOGWQRHLLALRDSYSIWVAAYKAHANSCNHZPPHVJYLBQBFP");
    msg.man_type = 55360U;
    msg.man_eta = 2118681762;
    msg.last_outcome = 129U;

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
    msg.setTimeStamp(0.12635428244974434);
    msg.setSource(56101U);
    msg.setSourceEntity(129U);
    msg.setDestination(9187U);
    msg.setDestinationEntity(98U);
    msg.state = 168U;
    msg.plan_id.assign("ALRXLQKWXHHBMIZDDKYHGLPJZSABKABUFJXADWUTNCUDODHBIBLSVJBRVGNEUAMPAOFYNITGAOZIEZWHWSS");
    msg.plan_eta = 723168814;
    msg.plan_progress = 0.268153958075004;
    msg.man_id.assign("PRHPQDCSXSKXSJTOOBZNZXSIGAWCFLSTAWGMLZJDUTXEDAMSHOWIQJFRVMLXFYRECNFEGBACVUQDFHJLOBIGRZZTQEQNXCLYOIPAHLBIJPFKBTXXDMFELNAMTSJQRYEWWYYBHUOKNNDKVOLVPUFATMBHQRDWUWCGQIJMESYVEJASPJNVUIHYZKXTIKFHZHMJVDNNUKWZZRGTBCRVUPOBYPVCYCNLKGASYCGLOUKTOPMWFZIBXV");
    msg.man_type = 11620U;
    msg.man_eta = 774736865;
    msg.last_outcome = 125U;

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
    msg.setTimeStamp(0.6591696530938075);
    msg.setSource(56858U);
    msg.setSourceEntity(148U);
    msg.setDestination(62465U);
    msg.setDestinationEntity(98U);
    msg.state = 77U;
    msg.plan_id.assign("FFPEPXHIZWDQCSABBCPBHLLGMIMZOJJUOEQCASCJDLSWNMSZAOLEUYVAVGDUTRUCQHKRTRNVPUKVWDTQGDTMBLJZWVNEZIMDRFQAQFPTCWNZMQSFYARXIBEWAZHGIGUHXSOUNCHNGFXPYUWVOLZJETZLXTZSKSEJMIOFMIXHLWIHGCKBFR");
    msg.plan_eta = -252185615;
    msg.plan_progress = 0.5775622849231441;
    msg.man_id.assign("JYQHVDECABQPCRLIFXJQDGCFWTTINGARSJZEVHMLOWYQNHTVOKUFHBSDBYELNVFPEFUQNJIUAWCPGULGXSYYMWMXGDSGOQRMWXXGASOPIBLQNPNTKHDLHROZZNMQNLYZSCVRKUITUOEXCVWNGAOKZZKGLMHZBSFDEUHFCZBVXBWAPGKPWOWMVEAIFDJOQXRWZLIYXPECAETMZIDIBBJJHMESUKTIUATYSLVJUFRMKR");
    msg.man_type = 16861U;
    msg.man_eta = -613157142;
    msg.last_outcome = 74U;

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
    msg.setTimeStamp(0.7143278536720562);
    msg.setSource(16671U);
    msg.setSourceEntity(94U);
    msg.setDestination(55975U);
    msg.setDestinationEntity(146U);
    msg.name.assign("YPWABWJMQAOQRQRLNVCUOPQVJNGLAYTMEXQYAXUHDIFODQPZWDLLNPYILGTPBEVUHWOFCKTNDBCVSODHTGWGRHNBMKRXRZQPOKPJCZYFAGMPJAYIKRHKVFOHBOSFBUIXDFETNJKIMKZMEOMACIARRJGVEXWXUFKSECXSZXAFLUTDCBJNGJQYCTQDVHVMRGGSPYNLECFZSNVBWWKSLMSBHKXDEMJUYZNWJBHIZSTGHVSUYEIU");
    msg.value.assign("PWGFMVTTBMLTGZDCCSTYQCSMWKE");
    msg.type = 41U;
    msg.access = 214U;

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
    msg.setTimeStamp(0.47613099418914584);
    msg.setSource(47297U);
    msg.setSourceEntity(72U);
    msg.setDestination(52246U);
    msg.setDestinationEntity(250U);
    msg.name.assign("VPZPKRCHRKFFSAIWHFPCMJOZLMNCZORQVRKVQIOVTTBIPISGJSUROAAYNIWRTDFKJMLHBXPOXXMWOGIFVCFZRWHRNPNLOVZCMHVVLCJWBSWHVZELXYTHAZUGSDNTEQZSCJXGLEUTITLDXWSEUUWAUKPJGXFBYUYNYYEKGGAAP");
    msg.value.assign("BRJTSPCCONOHHZRRZKZRQLFYLUKEKGUONJQDDRCVZLPCIYWJEGAHYLUZDABUIHCFSBZUMPUMTGGFKEDTTZNTZRWLMXJAODTVJCCHMDEXOOSZBNTDOAVKIYPUVVGIRYGUFNAPIDHUAOEBKEMEBLFYKXWIHZPJYFWEPQIHRPMBXFQXGYVGLWESQXMHQVBAVYMDSTF");
    msg.type = 88U;
    msg.access = 126U;

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
    msg.setTimeStamp(0.3726748368534152);
    msg.setSource(30011U);
    msg.setSourceEntity(214U);
    msg.setDestination(36592U);
    msg.setDestinationEntity(167U);
    msg.name.assign("DQADGAXAPFTSHQUYXVXOUHQSHDSPAGYGLCFHAJNATGQWRUXARRLUCJYPORWQPERKZSIHPMBJWICSTOZBORNLGOTDCZEYWZMCJXMCOFNYEUSFIVPKXIYYELYNLKGKYDSKPFAOVFHRRKHGXHDUMFDBJXMHKCRTNBZVNWRMWPGVXLUCQIIFDFTQCLWEGDWASBBBJKXUITPLZWUQMIJEVLBSYEDTCONSVETIBGNEUZZQMO");
    msg.value.assign("HIMBFIVAXNXZFCUJPYZOTTYJFWTNRJRWCMRPFZXJAVGYWLFNEKNSTWIKKNCDHGSJBQYRAKEGNTOUPPXC");
    msg.type = 87U;
    msg.access = 220U;

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
    msg.setTimeStamp(0.6909942023213449);
    msg.setSource(20299U);
    msg.setSourceEntity(218U);
    msg.setDestination(16080U);
    msg.setDestinationEntity(134U);
    msg.cmd = 74U;
    msg.op = 106U;
    msg.plan_id.assign("AMMGDBPRJVXNPDVXJKLHQBMKPDQIWBLTOIOVILWCQYJOKGQUPNHOVACMGSTZAOSZTJCDYNTYMCJACIFLQWEWJFFSZUIBYXYROBIMNPTCOGYPMYZESQKGWULMLCUDNPLNBWBFEFIECRPFZFUDDDJBRDXSVGHHA");
    msg.params.assign("PRTMBYNXJBOSOVYYWGBJZOZVNEUVFUOIRYVZUQJLQAOFWUJQUDWDCYLIJNMTTGMXKOFJANGAKCCOWAPQXPUQDTZINEHDBMYFLDGNPGUKBTJXDMNQXPZUWDTXHHRIRHIQKEGDBBOFHWKBFRLQRVKDKDVZLZCFLKSECAXQSZPIVMWFOGJWUEPCR");

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
    msg.setTimeStamp(0.1439348445731231);
    msg.setSource(12550U);
    msg.setSourceEntity(0U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(62U);
    msg.cmd = 119U;
    msg.op = 228U;
    msg.plan_id.assign("QKZHMICPXYVKWEGHHOGFAZQUCKKBKFMVNAFPNIXJIHSUBYOLOWANYNTSURULNNHAQAZBGJQRUFRLFTTPBZHWTQPZOROCBLWJJESCFDIEXAHVVGHDMHXYACGLKXQOZXESGDMPPGXNEVVDIEILCDJHIUSTFDIYYBBVU");
    msg.params.assign("ABHHIZZECUFMHQSPDEJTOROWMYAOMSRRZOHKBUDNCJOFLCLDDFOKVFGMNHNKSDYHPUPGBCLPWFTBSERKHKJCUGWFDNYBWMQDXNKGLVEIJCV");

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
    msg.setTimeStamp(0.3670295782975619);
    msg.setSource(38476U);
    msg.setSourceEntity(172U);
    msg.setDestination(19129U);
    msg.setDestinationEntity(251U);
    msg.cmd = 124U;
    msg.op = 29U;
    msg.plan_id.assign("WEEDWCUTIUXNRYASCQUBIYSPTVTOFRDOBEFCWRKNRPEAVMTBXCMDAOAVAFDFCSXSDSXKYCLGBSLLFYXQCLBCJMMPHPBYJTLWDVFZNNJIQWEPKGOQKGQDZEYHPVNIZJIZJASKKSKOHKWTDNUIJIHRMMUBGJOFVWZVKZHIEKGLYXPQVPNSTNVJMMUUWXFEHXZAMLHPNLGLUQART");
    msg.params.assign("LSQDGTHXDCEIPCTFXOCQDNSMNIRIDODRSPMEFSGUFAKCUBKRGUPIVVLMSCGAVYUGKWIMAAGLNWEZZMMYBSLWBBEBTEZVOCHHXZQOVQNPHETNMVMXBBWKIGCFTHQRYZPJJLSINTHXMNKLKQCJPMOEXCUODHFPJFVYQAQBYJOUUYPNRSWAJEGYKKKRNAOTWFXGXVWWLYQVZSFLRWIPFIHHRQLYRJGUZ");

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
    msg.setTimeStamp(0.22062611129801613);
    msg.setSource(47741U);
    msg.setSourceEntity(85U);
    msg.setDestination(25740U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("ODLAUOINTEZVIRSMXAWXHFLGGNZJSBAGZXLOIFHNPBZCJEBIHIOSYQXFLKYEYUQMRKPGJPMQIFUDWASOILBPQXEBWOSCRAAEYENZNTVNTVITKKIVAHBWDVHSTWJTBQFFHGEHGJUNKBEUXKVCWVXMQKFFDWEZGCRVPRWYCAAULUMNVBJCCKUYCOXMDXKNG");
    msg.op = 254U;
    msg.lat = 0.9624699087215739;
    msg.lon = 0.8514763209432494;
    msg.height = 0.5428793200971709;
    msg.x = 0.6483856819562742;
    msg.y = 0.26966100628917344;
    msg.z = 0.4022827847434164;
    msg.phi = 0.684139278596833;
    msg.theta = 0.969558753253599;
    msg.psi = 0.44962380389466405;
    msg.vx = 0.1841567826214967;
    msg.vy = 0.4244738236983435;
    msg.vz = 0.005711843691246665;
    msg.p = 0.8190926819283888;
    msg.q = 0.41993723393077376;
    msg.r = 0.761558762282391;
    msg.svx = 0.24726366936487865;
    msg.svy = 0.7818903439113815;
    msg.svz = 0.20877825374001102;

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
    msg.setTimeStamp(0.5721796390924558);
    msg.setSource(18590U);
    msg.setSourceEntity(137U);
    msg.setDestination(39825U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("BIVGGHATFDKRYDVRJOFRMXPFIRPBTHTOH");
    msg.op = 233U;
    msg.lat = 0.6173851736131355;
    msg.lon = 0.3368872380433594;
    msg.height = 0.3145317502579277;
    msg.x = 0.5906745052450337;
    msg.y = 0.0655759128726694;
    msg.z = 0.2070755375269412;
    msg.phi = 0.17638223053372837;
    msg.theta = 0.13638618876183106;
    msg.psi = 0.024200981651629427;
    msg.vx = 0.9177218568462108;
    msg.vy = 0.03648691097856771;
    msg.vz = 0.6512512740852987;
    msg.p = 0.952854187250321;
    msg.q = 0.9941052245569155;
    msg.r = 0.1425014143930593;
    msg.svx = 0.31471243478772215;
    msg.svy = 0.6446106330742818;
    msg.svz = 0.2533967112128179;

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
    msg.setTimeStamp(0.9907985161697273);
    msg.setSource(22526U);
    msg.setSourceEntity(184U);
    msg.setDestination(48365U);
    msg.setDestinationEntity(193U);
    msg.group_name.assign("DBJXYBFAWEDQZVXHQROCSOQKCGRPQSGSRICYSTQEYLHDJJZLZGPMEZNUSBQTPVRJHAWVSRKACDU");
    msg.op = 20U;
    msg.lat = 0.10067622937856724;
    msg.lon = 0.2850071602279859;
    msg.height = 0.923063750883067;
    msg.x = 0.9239340137486226;
    msg.y = 0.4025108596292466;
    msg.z = 0.7300080248544888;
    msg.phi = 0.6059631491774803;
    msg.theta = 0.16889864194473658;
    msg.psi = 0.5364774195078695;
    msg.vx = 0.5180680712518474;
    msg.vy = 0.654007020963145;
    msg.vz = 0.4962724357429451;
    msg.p = 0.9660204227989662;
    msg.q = 0.8581262579875532;
    msg.r = 0.8661383007336197;
    msg.svx = 0.6624585869814824;
    msg.svy = 0.9763896770834735;
    msg.svz = 0.5789522869194326;

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
    msg.setTimeStamp(0.0859903857898392);
    msg.setSource(19875U);
    msg.setSourceEntity(244U);
    msg.setDestination(65333U);
    msg.setDestinationEntity(96U);
    msg.plan_id.assign("DCIUMBIXQKNVWNOXKYVRLSYEKIBSVUWANCQOGOECKNMTHTGPWLENHFAATUVRPGAZNMBZOYPDJTJMTGQNJWLZRVIGBUJEYTXJYIHXZSEUSXDUDGXUJAFTFIJGKCNAMQBAYVSPWPMJWPEEHTRZWRCMYMPYKAZTFCGLNLFDPIBAROOQRISGMNVGRXFWLCTQAQCXSUYQVKHQLKUXSWMBRHDQHLDZBBHFFEEVDSJBCYWDEKFVIOKSZIZPLXHUOPLCO");
    msg.type = 123U;
    msg.properties = 25U;
    msg.durations.assign("OWEIGYHKRXMHISLYJAKMENIKLHQXITNMIEYBVUJSWDTNDRTUZBHJXKDGFYZSMNSGETWLOFRALNJCRAUMSKHDJAWBGNZCHOVVEYJWNUFKBOCBRXXFRPQGHASMLCKTIQMZEXFPCFSZAQHOYFIARISIWHEJVBLPWOZLAGRBOUCWCYRFDYONPQQTUGVNENQICTJBKJDZSXPWUTQBLVJCPDFVGZXYAOVPKMTDVXXGFESDRUCQTPMYGELUHBOUPL");
    msg.distances.assign("UOQAPRJPEBTQJCFAWXLEHUVVJYVHAXUAHLBSMLTCEHZPMLBTGPFXHBMGYYNY");
    msg.actions.assign("IROVYGCGVNOPKYUOITUBSCGJMMGLLLSEMEAZKYJLQMPTJEDBNBEJDNLLSMLDKQCZQMQSBVRRBFSOFENHXHAHDT");
    msg.fuel.assign("OMYIAAJMRDGHFPCDMOJABHKZYRFHTFQVFPU");

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
    msg.setTimeStamp(0.7627949266275394);
    msg.setSource(53261U);
    msg.setSourceEntity(214U);
    msg.setDestination(47657U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("MYBFYIFPUNLUZRPOZQESUVOZXIZVBYFBYHNQMDNQHKBVFGATZXVECTSTEXQGKUZFPDEVHDNKVLXWIKDFMHRDYLYTEPADAVNVQIRMGOPQAOCOSPMOE");
    msg.type = 49U;
    msg.properties = 193U;
    msg.durations.assign("GGSHJQHWWRVHYWZZQSOZZLTWDJJMYKJPZRJFUXNYWCUCJABBPBYCVTIHIDQLDURLMPMDMFIFKIBSOQLUTDFSGAKCAVEPGOBEEMOAA");
    msg.distances.assign("PATXLFUJAAFKRHKDZVXBOMVSFDABCYJKBUNTKCYUIUUQXYACZJBXKRGKIZTOHXNVTPCYDGJHWPNLQSMFQKGDSPFYZICZFSIBGNVLOEYJJMASBZHZXKGDTAQAVLJHEEMLQCWVNOZGPLRCWAMMIYUXJTNDEVFQGFKNOIXTJHTGFEUQPIWOEDERXZOTDGWPKPDRJOSYQBLLIASIRCLVTBMUXWSRHUEUOREWPELMBF");
    msg.actions.assign("YDVJYGAQFUKENFPRIHILMHWDNCXVDWQXXYSQSWPBJEODTMOKNXCITBJRLPUCYRXTRZSUMDGNEFTFEFVBAGNEZGFCIMMAHATSPIFGHSZZMCDLQARVUVMNHZHVHUJSBKOWFWSDKLLSXVPJEDBIKUPOJADTIVWLRWLGBQZMOZEPHPJRHUUNQKJNIKZOGQTBBOQZXBYGOXYTWVYXANSMIJFYOZDLYTEJRFAKVESCBWYC");
    msg.fuel.assign("RRDUCIGRNKPKILGGYRQXATZNHUXZXZLUHSDYDJOBFXISUDIMDNPWFVEABEWOZGJLMKBTDRLEKFSISVTWBCGKSTOQJLBVQEKVYPXALGNMJUPAFWMMHWEZRPATSGPOBTDMQANKNMFISAYWOKEXZRCSCLCMDKKHCVFIBAETFHULYRLCJZHOYUOQFIHRED");

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
    msg.setTimeStamp(0.9390342771726933);
    msg.setSource(2150U);
    msg.setSourceEntity(159U);
    msg.setDestination(45996U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("ZTRJUQPOJKHHIVWXORQROONSEEUYZUVFGXXKUHPMGPMQRFSUXMBNPBLDTISOZMJC");
    msg.type = 93U;
    msg.properties = 121U;
    msg.durations.assign("QPKUMDLANILQDOWDXPYZFHPZOTUIILVVRNEDBYLWVETBPZEBITB");
    msg.distances.assign("WCKSIKBYUSGHEDAKBQTSBCQOOOVENEAPXHKMNRYYSDFNLLPRLMUWYWMVFLIPJWJDJGVZNZAEOLDRWTCHFQCYGUOIAJZLUJHFHDZISFNKAZFBQZURSTROVBIELSQSEJBHYEQAFJFVKBTRCXWNWGCMPXVR");
    msg.actions.assign("SAXHWCNHAKBUOPWVLZIDIRXZADYKECKHOCGPPMBJLQCIZVCVOJRUMFUJWQUSYADALKGSNBHYSDEWRLIYHPNEFYFHZXMQFTTDMFOXXCBOGRBOFPYHLTZZORSQLUFJRPLPYOBLDYTHJZGJNKAYADMWVCSTCXBCGQRZDIRBQNMMGHSEDJ");
    msg.fuel.assign("RQLJFSCHDHG");

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
    msg.setTimeStamp(0.4292090714059167);
    msg.setSource(12938U);
    msg.setSourceEntity(60U);
    msg.setDestination(55176U);
    msg.setDestinationEntity(106U);
    msg.id.assign("VNYYDPIHEHBUJXSJYZVBMBLUWTSWVLKADMNBPRDRGQDOTOHEFDLCJGWFHSGNHNCHVRCQXKPZUMOGMWKSBZTXGSJZCBMRMTPCRMPVKXAKOEDUQAWFCITMBRLUHRHFSENNQXQJLDCIAZOIJIWIFSEEASTVZVXSFHJFBVYWSNHAAPKFLXEUGXTKANMLYJVBFQYZRKVUJODDRZ");
    msg.plan_id.assign("NEPMLUNJFCPDKSPMEPMGFNLWKXGEXHWJAGYYDJIHRVYGCKVKHMUOIFSUWGVZDTADOFRWBPPBPEVXKRZZOTTYUYWAIFXDVPAHGQJALQROGWQFMUGKLQLOFXSLICWNC");
    msg.maneuver_id.assign("YXSLJBHTVNVLURUKBHQZEINXKRSTWEAKYMCBWEMABHGCZLMTFZOCJUYOGLIAIEZMRHWAVZPRUQDYKLCWNCLZJUJGOATIAPCQAORXXNGHMTZSJFYOIZSWKYCJEGBCQPPMTYUGDKURZQSO");
    msg.memento.assign("YEBLDQJSSMADMJZXHOHIASRJQKXKQKITSUWBDCBC");

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
    msg.setTimeStamp(0.9460822037852348);
    msg.setSource(48454U);
    msg.setSourceEntity(44U);
    msg.setDestination(60391U);
    msg.setDestinationEntity(30U);
    msg.id.assign("HFMYTIOSMBMSNPLYRGWYXHHNEBXBNZUHQHAWNUJJKKCGXPZROVQCOJTPGCQBDSQWMDURUYFZVHOQNHPOLTLHONITVAQDYNJSAAMGOFBSQKSJUOMOGIGESYJUKNSWWPKRFODVEIUDDIFAERVVIPIAEWDQYBKLLJWHSDCFEBXNZXLTYBATUXLUZIGPMAGGBZEEJLYMLYCXZDWHRPFEDTLK");
    msg.plan_id.assign("QBLUHALVHTSQFNZRHSTQXUGCQGTSLMCFATEOWJVNJTFBJQLNUAECHBICZYXPXDSKHIUVQCBVMZESZLBNNUWSCGMFVYWGMFEDPEXRDZXYQIODPZVMPTHWOKSOMGTYVKRYUAYPRLKHBNBQGGYASSEIFLEVOKWTIURUILNRDMMUO");
    msg.maneuver_id.assign("DHALBEGRBSEMUXOVMTCJIYUWIVFAXRSOCJVCTEHFKGHKBFXUXIMSNPWCYYNDYDGIXKZNGUPTPITEBTGQLYREHPXAFBSWRZAQOVPPDHJ");
    msg.memento.assign("XOEITJOCNNGXTFGUIWVKJZOFOTEELWAPSDGKGCFUBRZFDUTRVYPWRQLIZPHYTUSFYPWHJTQJPLSHJRMOJLW");

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
    msg.setTimeStamp(0.7755387417974887);
    msg.setSource(42177U);
    msg.setSourceEntity(1U);
    msg.setDestination(28824U);
    msg.setDestinationEntity(129U);
    msg.id.assign("CXBTVGEYLAVWROJFFDQZJECSQIAZXEBWFOYDXWLKNYJQDKQZBRFLFLHMBPAUAZCZEHUHUDAWDXFAUAPLEKLILYVEYQTNMINPKOVXLBMDYVGSWCRTPIHQKCNRPZNJBRZJROQWBTTDZWCYDKJGORXGNDMAPOSSUNIWEMNLBKMGRXYQSECUMJQGSHCRRYITWMPHZFJSELGOSVXAKGIHEBSXFWJOVUGKTTUYZITNITA");
    msg.plan_id.assign("KYZHPRIAOWHPQOCJACHQMHTYPIDZMERIRVXLIHZKU");
    msg.maneuver_id.assign("QUYFHNVFDJOCPHTPUUHNBPZMUPTGJIJWNXUTWVGMSRAXDHNLRMHQMXYTDWFHWVBBZEXWVTIQKRBUSPQLDEXDFWYWRSNJVKUMSQEZGYENGNSP");
    msg.memento.assign("URFRJBUTJSOFGFVWEUHPSSQPIZUCGBVWJPYSNAGGVKBVCYMVOSDJDFZIALXLZQCNRIDBOWFJWTZ");

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
    msg.setTimeStamp(0.6604419241587646);
    msg.setSource(31144U);
    msg.setSourceEntity(36U);
    msg.setDestination(21177U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.49960315504575614;
    msg.lon = 0.34687361820339;
    msg.depth = 0.051795306865579205;
    msg.roll = 0.17535150744636063;
    msg.pitch = 0.9586144712232977;
    msg.yaw = 0.7790499046794395;
    msg.rcp_time = 0.26622587004690457;
    msg.sid.assign("GXNZPCPEHGDLZSEIADBXSUVRNTMFDKVPSXMHIOCLIYCDKVWRZBXHMEXJZTOFJWZCQRHEJYZLJEOANSTP");
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
    msg.setTimeStamp(0.09643865749265601);
    msg.setSource(32403U);
    msg.setSourceEntity(58U);
    msg.setDestination(21189U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.6489942630563582;
    msg.lon = 0.8913128870191895;
    msg.depth = 0.5998564366962396;
    msg.roll = 0.3981588238353846;
    msg.pitch = 0.7505835186517976;
    msg.yaw = 0.24521710221764625;
    msg.rcp_time = 0.8925014536221955;
    msg.sid.assign("QOXPFDOVJKMHFUWFJFVUOEPMUAOGPIPIARSBUYDPPNBXZXEIXPJMTZBLFDQWEZRAFKLRABWUEESCHQFYLGYQSUDQGKWVSFVTRGKBNKSZOACZWYDLQQMQGVJOMNNQKN");
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
    msg.setTimeStamp(0.19467114176364986);
    msg.setSource(14711U);
    msg.setSourceEntity(47U);
    msg.setDestination(18676U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.9024217547861201;
    msg.lon = 0.29965151444795834;
    msg.depth = 0.2335371248246848;
    msg.roll = 0.15164429410700642;
    msg.pitch = 0.40027255567293685;
    msg.yaw = 0.2533143956128622;
    msg.rcp_time = 0.8301159789826767;
    msg.sid.assign("PALXMSDWRYETGHASCGCCDZFWFDFUJFZSQBANYTZJSFHCIVIJVDXROQQKSDGHPCSAJNNYOIJVLDUKBTNSLKKPWVYTZPSOUHRTBDHNRJLMACBNEZLLLBXRGRZIQVI");
    msg.s_type = 25U;

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
    msg.setTimeStamp(0.14702398446543297);
    msg.setSource(10038U);
    msg.setSourceEntity(10U);
    msg.setDestination(13152U);
    msg.setDestinationEntity(109U);
    msg.id.assign("OSDWIDTWVQRVJLHPBBINRUPFHJRZDYJMHSUAZFLNHMYBKLAIQGHRXOLGUXELPBSQAQFLLVAAOJNINMKKHDCVBLFZXTYVAYSAPBSQMVDKFTEYFAZBIMCBGZPBJSFXVLJWUPSMXBLGSGKDEHZWXOWAIDDRYJOCUIQMADUTGTCCRU");
    msg.sensor_class.assign("FNHYBVOZJDMBPDHSVSUKQDGFACZIWVNBTMJOPZSVINXRTUJXNPMWLKSZTUDQGFLRYHWYDBXCZCSEFMXMVYVMHMHJNPFIGUOXLKDWVXTXKCGCWKBEPOIAJJFUXAGLPUWHETRCLHRQKQOB");
    msg.lat = 0.08976745135359077;
    msg.lon = 0.07864232226297452;
    msg.alt = 0.38985935053727694;
    msg.heading = 0.8648446001536495;
    msg.data.assign("MVGJYSEVBLNDHKEQUCKVWAEBMSPBKIPVHIWRYPXLYOHNWGAIBWTPXKQMONNEGYDVGOJMXVZURAIPRLHXUANJSFDKGOFNGPUSBJIWDTQHJBMQUIZVGCQRPDYHUKVICUQTZRMJLTYWXCNZTIOFOOSGFRINJMDKAMFZTZADSWWYHQOKNGXCEXAXFESBDEGLHCLLODYCPVAXKURCMQFFLPCEEQ");

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
    msg.setTimeStamp(0.21380375376971428);
    msg.setSource(31118U);
    msg.setSourceEntity(204U);
    msg.setDestination(4531U);
    msg.setDestinationEntity(138U);
    msg.id.assign("QPIIUOWPBZVEHHXHVFKEUBPPYHZKIDCRZSMFFFZFHPKFLOTNMJBBJFOLPVWUJSGDWQUEMADHGLUPKHYRTQXZJQWXKTZXTASOWOCFNBRGTJWRMEDWIPDHYGVRMQYKCQCLYCIVLPOAMQMJJRAGTOAGHWHLCKLGQADMSDBVXAJESEXKVQNGCOVDMEOETYAIJZN");
    msg.sensor_class.assign("KAFWMGVHKLNYHHOMFVGNEAQTJYAZNAQAGTGXMBPRJARSUHXLLCOBIYPEWPZPKIXUFNNIUROMWLKDHJLOIZVATCYRZMTLGEBOWEQXBQDFHLKBIVIR");
    msg.lat = 0.6901348418829989;
    msg.lon = 0.4950024338703427;
    msg.alt = 0.5021997811398994;
    msg.heading = 0.7854201116163104;
    msg.data.assign("QXQLYDKFCMSOBEAPAITPRDV");

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
    msg.setTimeStamp(0.7581780649466769);
    msg.setSource(2332U);
    msg.setSourceEntity(98U);
    msg.setDestination(7424U);
    msg.setDestinationEntity(91U);
    msg.id.assign("PKATUCAVBYMAWWJMUZVVPWEFHYHUTVHBYQPGOLFXNZVRRXPZEFFRAHMQKPVOMICQDECOXZNSBWLZQYXFDOBGRPLURWTISINAAUNQKJEQHISKZRSRKRHLDINSKAT");
    msg.sensor_class.assign("ATLBBRWFSQBMCBWJFIWOZWGMGVAPLENUDETTLIURTAEKFAHUUCXWSNJUCHQKUDPJNQHHXITSOQEKHTWALFXIPRNSCEOIZFZEVXOBVVGYMMFPEEYYNCRZUKKVONZRBGOMVHJPCGPUUFAFQVPLWMGHHX");
    msg.lat = 0.32675074380591085;
    msg.lon = 0.045876731348801214;
    msg.alt = 0.668626262994302;
    msg.heading = 0.01382044114141967;
    msg.data.assign("YUKTJFSWHFCYBQNMABUVXXAUETNKTGELCQJGDIJDPFCNGRVLOQNYCDXGSKRAVZYZPBRJNFILSLWPSHDHMKSGLVSQDBLKWABRQCPWI");

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
    msg.setTimeStamp(0.2828487591943193);
    msg.setSource(1545U);
    msg.setSourceEntity(124U);
    msg.setDestination(41297U);
    msg.setDestinationEntity(106U);
    msg.id.assign("FOXQPGQLEJVKLGROUXGHEFBESDGCRCJJWEXYQYWKIBVWBMGZZQPUZSBZMLUONKDDXAFLXNREORKDHLSPWNSPYXATJZIIFNZJFLIUKBHXAQGHDCYSYWSDITMYYBCMHXMJUNEMUTBQKRVCORVRHWUMZPPFEOMCJTQYASKIOGBNKRCTALXPTTXQUCNPUDTNBAZHVCLVIDFHVHLENZ");

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
    msg.setTimeStamp(0.7402032482447759);
    msg.setSource(32617U);
    msg.setSourceEntity(150U);
    msg.setDestination(57305U);
    msg.setDestinationEntity(73U);
    msg.id.assign("WKCZWFWAIMOBCSZRTWGDSDIPYCAESFZSXNJNCPMKPVUBHXPHXHXHUTUCILBUBPKDAYIGJFOFGTHTNEBMTFUGPIAIRQQZYUVGDSMWVRIVRELMQVAKUEURFHIUZCAMQRNJMEQMGDEALVJOXBLTKVQPZYTONCXHPDKKJOKWILA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HLAXVAUFKRYASCNYKYJWMBGNTTJRPWKGTXYOZHLGCTYYMDJDONAXZWMQVNSVNISEVUTECFVSCLABNHKIDXLFSICQDECIYRFXHTKML");
    tmp_msg_0.feature_type = 205U;
    tmp_msg_0.rgb_red = 249U;
    tmp_msg_0.rgb_green = 14U;
    tmp_msg_0.rgb_blue = 32U;
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
    msg.setTimeStamp(0.44126985248681094);
    msg.setSource(2653U);
    msg.setSourceEntity(45U);
    msg.setDestination(12811U);
    msg.setDestinationEntity(3U);
    msg.id.assign("DJGZGDOMHGEKLGUXYTSAQMMWVNIFRKYXWBNQT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YYKOIJDSSPQXIFOLUOVRTNWRFEWWXQDLUEXXIBCBOGGQCSKZDXSLEHNKBKLALY");
    tmp_msg_0.feature_type = 248U;
    tmp_msg_0.rgb_red = 193U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 152U;
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
    msg.setTimeStamp(0.19110017435883964);
    msg.setSource(53885U);
    msg.setSourceEntity(243U);
    msg.setDestination(62028U);
    msg.setDestinationEntity(56U);
    msg.id.assign("FAMJFJUWTRTKCCMEMHHRDOUYTAIHAYYGEYEYTHULAPVJEODLGDXZZCVTGDASEOSYJUVIFLPZKXSGPSKHKBBAOKMAJQFWSOMVSJTTKNOMCMCFXWGJWUKEQHSBAPLTIKJCPAQWFBWPRWOKTGXFRGZBQXTZYNQNCEJIEWSNYMLFCSRVFMGDEIUCQPVZHP");
    msg.feature_type = 50U;
    msg.rgb_red = 96U;
    msg.rgb_green = 18U;
    msg.rgb_blue = 126U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5419577457226917;
    tmp_msg_0.lon = 0.21401001043903767;
    tmp_msg_0.alt = 0.9563870783187087;
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
    msg.setTimeStamp(0.2433570933543987);
    msg.setSource(22229U);
    msg.setSourceEntity(119U);
    msg.setDestination(62668U);
    msg.setDestinationEntity(31U);
    msg.id.assign("OHDLPMNZXQSTHYWKLWUQWATUXQOEAIPEIGEDLSCJZEQXAVAYIWRYVQDNOWNMVEUTENPUYJOVN");
    msg.feature_type = 212U;
    msg.rgb_red = 49U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 129U;

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
    msg.setTimeStamp(0.3880217163441978);
    msg.setSource(50737U);
    msg.setSourceEntity(159U);
    msg.setDestination(46246U);
    msg.setDestinationEntity(217U);
    msg.id.assign("MVBPNOAVMVBYYNZDYZBWJOEFUIWELENLLGZPQWDRYXJKFMWJSAZNURUFKBSJHTSXDUVPIDQALAZHGXTMEGGMYYDEKCHCDYRVTIHWHTMRFKHQXSIETHONZCGCESYDMGBBGPLABSDXWEHTROJHXULLOJOUWQIDCGPNOPYAKQFBVVJLUAELQRRIKNSKTXCXJTPQZKCRPUIOEBVSAGMPGJVIZ");
    msg.feature_type = 250U;
    msg.rgb_red = 155U;
    msg.rgb_green = 54U;
    msg.rgb_blue = 177U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9840132297564688;
    tmp_msg_0.lon = 0.08133768494010185;
    tmp_msg_0.alt = 0.2234263017441792;
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
    msg.setTimeStamp(0.024328417904021626);
    msg.setSource(43882U);
    msg.setSourceEntity(125U);
    msg.setDestination(16871U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.19356951264791245;
    msg.lon = 0.9175896984129603;
    msg.alt = 0.06493260767173104;

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
    msg.setTimeStamp(0.37447731219936164);
    msg.setSource(29229U);
    msg.setSourceEntity(7U);
    msg.setDestination(18093U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.9986539379021052;
    msg.lon = 0.09488074720120376;
    msg.alt = 0.438292661668253;

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
    msg.setTimeStamp(0.09141796313929318);
    msg.setSource(13361U);
    msg.setSourceEntity(109U);
    msg.setDestination(27410U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.6559689949853352;
    msg.lon = 0.2976617510011067;
    msg.alt = 0.15688810366839157;

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
    msg.setTimeStamp(0.6131460873864827);
    msg.setSource(34266U);
    msg.setSourceEntity(132U);
    msg.setDestination(48425U);
    msg.setDestinationEntity(157U);
    msg.type = 170U;
    msg.id.assign("NSXOLLEQHJCSKBLVNMRFGRYSUBSOVCBUNECJEZORNVMZJPZFWQQTRURKQIUFLPPHJFLDJYPFLYQGOBHXDCUVEEOXCIJBDWHNSXTMEMMVIMXPVIZWJPACJAFUPIPNVCYRQZNXVZGVUYWINFAMTDTHDLSHRGDXOYAGTOPIXVQEWQHKATDHWCFQETGYNGHZSSWBWIYEOXEJTLTKBIODPAZZFKNLAYQKWUKXSGZBIUGKMR");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 73U;
    tmp_msg_0.range = 0.792674807351317;
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
    msg.setTimeStamp(0.8435655440514248);
    msg.setSource(13080U);
    msg.setSourceEntity(86U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(164U);
    msg.type = 237U;
    msg.id.assign("HBUZAJBUSFTAJBGPKLEJCEFVERJEPFPOHMYHINNDSOWNIQHELUYEUADKLCPGOMABOTIUMYRBZQFUXYOCVYADPWSVRKRPRHLTKSAQHDQHNPYPENSXKVFFQRVZMBDGXZVDNFCIYWRMFQXVHGFSGSYXKJLNZIWRVTWITSMXAOZNDPTCZEVNOOO");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 105U;
    tmp_msg_0.dt = 15U;
    tmp_msg_0.op = 148U;
    tmp_msg_0.request_id = 44407U;
    tmp_msg_0.object_id.assign("NNPARNJMESCGHUEUHYBQBFZPWJMSOFTSISCRAEZYAIBCWLBPTZAUWLSWDKGPAOKYFBDKHJGDCVRADGJO");
    IMC::SmsTx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 3811981175U;
    tmp_tmp_msg_0_0.destination.assign("JQFXSIFEDXMLNWGKLZGYLATIUDSFHVEZ");
    tmp_tmp_msg_0_0.timeout = 36332U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-18, 13, 81, -113, -60, 36, -102, -123, -53, 34, 88, -72, 28, 97, -54, 90, 76, -90, 42, -81, -76, 83, 71, 20, 45, 109, -48, 116, -69, -46, -27, -70, 62, 8, -3, -84, 3, -75, 116, -34, 110, 112, 7, 92, 21, 15, -33, -5, 20, -19, -29, -74, 119, -64, 101, 100, 88, 49, -104, -54, 19, -102, 119, -34, 121, -111, -76, -77, 3, -11, -65, -26, 121, -121, -74, -18, 52, -111, -87, -122, 68, 79, 6, 63, 94, 120, -125, 54, 114, -14, 59, 40, 7, 3, 76, 14, 102, 41, -121, -117, 36, 11, 117, 50, -61, -2, 5, -21, -86, -94, -4, 51, -18, 105, -105, -110, -96, -49, 109, -42, -116, 86, 35, -77, -63, 79, 65, -26, -22, 123, -66, -114, 29, -104, 42, -42, 126, 112, -68, 92, -14, -120, -2, -48, 100, 86, -47, 28, 93, 68, 81, -45, 110, -43, 40, -124, -110, 88, -50, -121, -119, -44, -107, 45, 34, -2, 17, 0, -66, 75, 50, 85, 47, 74, -52, -72, 94, 84, 60, -15, -52, -1, -67, 83, -6, -4, -51, 37, 1, -30, 56, -17, 12, -87, 83, 112, -75, -25, -29, 113, -127, -93, 47, -105, 36, -21, -108, -118, -95, 27, -86, -88, 80, -119, -54, -111, 43, -83, -27, 79, 104, 33, 119, 60, -2, -38, -81, -18, -16, -27, 120, -102, -55, -66, 123, 116, -5, 10, -14, -68, -84, -22, 66, -20, -122, -43, -96, 94, 119};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("IBSPNVEURKUWZMQTFAOFMQXUKNZLSMHSORKVVMHBNGXSDYACKISPEIVPMVNZDCPHKJEWYFVIRCAZRNTOJFLEINHGPZCGPBDLQFEUDCLTBJYKPWURUGY");
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
    msg.setTimeStamp(0.9147557656423261);
    msg.setSource(45769U);
    msg.setSourceEntity(234U);
    msg.setDestination(35333U);
    msg.setDestinationEntity(66U);
    msg.type = 45U;
    msg.id.assign("NYXJJSLFODBPYONWCDZ");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 246U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("QNVRCUGEAPSWHYCAFROKPZDVZTNTTEOUHAQXHTTFOJTVPRBLWRAWLCSESEISOPZXDFYTNVMDNWCQWLMMJDKQBKXOMLXIRDKGFOSGZBVOGZBOQWQXVQIUWNJNUUUVVBGXRURUJQFOKDMJCIYZDGPWJHJTXLKGBLULRISGJNCQNSLPTEFPPODACKDYNGBGYFYKIEZBCWFVLQHFEVSSSAMALIBMZXYY");
    tmp_tmp_msg_0_0.description.assign("JLPIVUNOLBLBABHVWMKLYXMOASUBFPPWCEWRVZRDKWKEDASXCFFPQOLNSCMESYIDYXDZPKJTOGDVYNIQXRHCBKCJAGWNOGEXPQUHFQUHDTKKXHMBUWEZWRSCLOQSZVRRU");
    tmp_tmp_msg_0_0.vnamespace.assign("XRCNMAYPZSHSCEFIHSWKZQHAKTDVTDLFIHFBLZPFXMMYBTBUOPDBMREYSEJPJQGGIOUOWGTJPLYIDXSXWGKGNBV");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ZSBVIIMXDZQZGGTJMBVWIQDXCYEAYNREQHSEWOCUUPZHRSCPLHDLRVGCQYFXYRQNMVLTEBMXKVLAWWTJBAEVGUACKZMEJIYWJPTMKGRRUUKCOAJLYXOALAABRLJTSPXFNTKWPJHPXGERNJUGNV");
    tmp_tmp_tmp_msg_0_0_0.value.assign("BEHUMADFSYOFWOKULZWBMVGSNXOJFKXKZBDQWBNBQDZGURIGPIVJ");
    tmp_tmp_tmp_msg_0_0_0.type = 216U;
    tmp_tmp_tmp_msg_0_0_0.access = 213U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("SLWMGXYSHYMPZLFKBRDCIBBWVBMVTZOIXDLYCPJIHZFKAJBJTTWSONPPXISFUPDQZJBZGQVOHJBZUYYHURDVNXFCKKYNLJODMESLXTCIHXAIMRFRXWTTMJPUANRFVZRECOIUYDRPGDRPVAUSEDCMUWAVYOEWESVIPBNFAJWQKHYKCFLEKSRGVCLLLOMQNXHHNTYGOGUSQFM");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("EGYCNQKTRQIIDWQOZAYWELBOVOLJEBMTCGYRISWJGGXMLRHTTOCNIZZKSEXVXNFQEYDLNXXKUFCNDMYHKAFDFQBRPWJJQYXSMJPHTSEWDSDEQTJOISCIASFVKWCDGZNUXTCZAKQBCVVPBZBXMOIHFETFPKCQJGZGLEDPGFUURPAUYWHHOAMAGYROPURVOHHJXTYIFDPNWGBUZLMWZIAOEKLRKHWMAIPNVCTLPASR");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("TIXFHXDEYDIQMQMKVWMIIIZOPAGYM");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("RSPXJMXPDWZUWBFKBDGZAVNGNISWCIUGTHXTYLOMYIHPBXZTEXSCFITCYVECCQNLWPXDYOAEWZPBKQCHTUCBMSKUGBLNJDMLGKTTENIOPUNVROIFQUABQARXFKZWPNPMJHQGFEVMOJEHZE");
    IMC::LogBookEntry tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.type = 22U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.htime = 0.01661315848967715;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.context.assign("PCKHRHOHULOFJPREFUVSZAELJLBRYQZZMAEDHDQMTXENSFIKOWFCTCTIAVTXYBE");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.text.assign("WOONGDHGRJPBKCQFJTAYLIDLUGORIVYIXEDNTHYARLBRXWEQMMVTJZDDTAKKUJEJHTSZZRVXFBFOVZRUNJIYEINMBOPRAEJKKSVALTIMWGQBLEBBPPZXPDCCNKJWLCAAWSYPLZJMBZOKWAQTPCVUKHTTFNARYUSSLCDIHJXUBXQNGOMZNPFYXHMLNMGPQYSDHSVYFPDQDHHQEFFGORSSBINFUWCLWEECWUQXCSMZGWHKAOGXFOVIXCKGR");
    tmp_tmp_tmp_msg_0_0_1.actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PopUp tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.plan_ref = 221315409U;
    tmp_tmp_tmp_msg_0_0_2.id.assign("YMXMRLVMIQHBGBXMPBRZSBILALONYTRLDWXHJSNGXEEJFNPIADTKYDEZMEPPNDIJECWRLHUQHLYDZVWGBTKQUSMPYDKJUVCVVUWFLCRBGLMZKHWHOQDYNGTFIAOUROHYRFBSEQOMFEUNEPHVZLHJYNAZNQBKXZGAXAKSMRI");
    tmp_tmp_tmp_msg_0_0_2.memento.assign("VXMHEQUYHOBPVONAZUIJHWCRPNAYRAXSIHIXKKHTXKUVVNZLDABBKDJPRQEMSTRCDZOFIQCFNGRZKDGIJMXGWYDQEBPOCECMNGRKXJVLTUBQFHFPVWPGIYEBOFHNSNUSIESZGGSAHXWQIKVTDWTFUUQV");
    tmp_tmp_tmp_msg_0_0_2.timeout = 42783U;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.6194511799191036;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.28087304898623455;
    tmp_tmp_tmp_msg_0_0_2.z = 0.8023701770489992;
    tmp_tmp_tmp_msg_0_0_2.z_units = 36U;
    tmp_tmp_tmp_msg_0_0_2.speed = 0.17377562490148635;
    tmp_tmp_tmp_msg_0_0_2.speed_units = 11U;
    tmp_tmp_tmp_msg_0_0_2.duration = 32672U;
    tmp_tmp_tmp_msg_0_0_2.radius = 0.5900024298697083;
    tmp_tmp_tmp_msg_0_0_2.flags = 217U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("AZKJRYNSLBXPDCCHSTKTEINNITNBZYOBFYRLSX");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.664247487440508);
    msg.setSource(39257U);
    msg.setSourceEntity(192U);
    msg.setDestination(59609U);
    msg.setDestinationEntity(102U);
    msg.localname.assign("DIUIDWBZHWABLCWQNUKPWXNNJOSJYAAHAHQGZIPJBPSYFVEBFBQYLTYBMWGLRUEQWGONAPYVDRIRUKYXCMLXJMTYIEHUMPPIFFDPLAKOHTZQZMZJZRNLSWGNPRTXXCVGFMKZKQMADAETVZHERSKVJUHCORODWEQAHFCQHGSDNZLNEDISGCJSBUXILKTOMABOXGFMOWJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KYGITQEFYHVXVZIIFOBUZLMFAEJADQJSNLUGCVOCKSWTCTYRCENFZUYCNJSWVJZOBJENHTVJNEMADEIJIYDKVULHUXOPDPATXTZIZGZVBDYPXBXNKMUPEZLOXWHOTAGHNRRIAWNPYTBCUQWFWBXCDQOSHXXODZQUPVFKBCOMSKRRPHPSWRKAHTWMSBAGBFF");
    tmp_msg_0.sys_type = 75U;
    tmp_msg_0.owner = 5027U;
    tmp_msg_0.lat = 0.2717938026563591;
    tmp_msg_0.lon = 0.9166302824719269;
    tmp_msg_0.height = 0.48694060450333043;
    tmp_msg_0.services.assign("SZHJWQQAXEWWZJXXQORPTDXIHNEFZOBGQISABVZOJLEFINCGNJDHMDQIFUYQVHNKOJCZOILALSBHADOPWHSFPVKVUYMYSEKCLYQGTMVFTPLDSYYIBNJZWGXHDECBTTPATJZHGCBRTJGIROBDVYRWFZUM");
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
    msg.setTimeStamp(0.5294651506798549);
    msg.setSource(1948U);
    msg.setSourceEntity(191U);
    msg.setDestination(28761U);
    msg.setDestinationEntity(251U);
    msg.localname.assign("MLQUZPZILZOEDRAYXXDQYPMEXDDTEKUOEZRGFGDAJYSHEIRHJIFSEZAWMDNKPJLISGTGOZXVAGTPWXKNSHKDMPIUYKDXVFCJKLTOVGBRHXIXWJIULPLVWHLDLFYUHNWNSXWFVUAIFPOSOPKMATOQJQVEBOAJQSZBHYKNNNBCEPYLTCUIQNQ");

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
    msg.setTimeStamp(0.12429303277592751);
    msg.setSource(38583U);
    msg.setSourceEntity(67U);
    msg.setDestination(44678U);
    msg.setDestinationEntity(208U);
    msg.localname.assign("QPQORGROVSKEEOXLPGOZJMORPEKDAVIRVOAMNSQYHJJNYAANEUEKXCBDRXYTPZYNLCNWFUXUMWHZICUKJDCCSQWULTZBISFQNLUIUPRZVUWEMBYDZLFYXFIDQNWOPBETBAXVHXMWSQTADIPYUVYFCZBMDJMCRLTIQYFNUHFBOHSNJILHTTZMHRQKJIIHKWAVZKPGJDREBDSJJVXZLGCKBTPKFGTEKGRELGHLVTGMBWSQYCOWWFGSCFXPNAG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YZMMGDUZOXRVWZRDMNNCDNMNSPSAENXCQWBOKAVWAMVDWYEBKVCLJJBCHEWTRRSCXPFSAPGRRBEBXKQOGKNOFLEXBITYCFDKGDVHZALQTSTOAAKFAHDZQAWXUEECQPXYLLHUFIGPMTRDMSSMPLHUF");
    tmp_msg_0.sys_type = 13U;
    tmp_msg_0.owner = 59950U;
    tmp_msg_0.lat = 0.032056059871647946;
    tmp_msg_0.lon = 0.8494689149258895;
    tmp_msg_0.height = 0.9088290207070834;
    tmp_msg_0.services.assign("HWEVQHNVNHLKPARKIJEPAGRKQSQUNLZAMBOVQHMMZSHJKYIFOXDFZCFPHLORHCCYRDUKSFTZRTGSCKIWYNHESNWQETQSBBNWDIYEGROUVBJOCWUDVUTVJYSARYWBDJPXLFOALIMULEOXLPZUWNQXZTEONBRGKFXBODCPIEXXWTBLBIAJZHVDQYDMFNSMYPXCJCKGFSPXVGGJZHEKUYMPPRGEJZZOA");
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
    msg.setTimeStamp(0.08153269301310351);
    msg.setSource(27684U);
    msg.setSourceEntity(189U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("JUTEMMUYGWZEWUXQLFCJTCLYGPQNPXXIAFKRQFPOMXEFOJAVJSVQRNPKULQBLXWMDIKDNQTVXEGCNNIHINDKQYRGMTOIUTYNZLQWZSKXFBIODKKAUVJYGDCGVDPBTZAOEHJHFRVLOERNLAYRZ");
    msg.predicate.assign("CJWPGHFADXZGVQCBQQDDZJAHDDCGWYHCUNFTCIDJLUFYHHARZRSXWKTIQXQHHGSMORNAWFHCURWLIPYZFSOLAOJSZRAEPKTINULVKVUXVGULXFTWWYOBWXBPLYCNRMV");
    msg.attributes.assign("WTMUJIYEJWILMYPUBTRDNDMQHCLNUYTRGZOVWCXBBNNQYDMLKDJPTDPLWGNWSSCWTXAOTKJRDKHSVWYHWAIQOWOVJKXEPCVIGOXTSYRGCGMUIZQLLZYUTZGJCLGNUUQAFUENVFXLMZHDPPBEBKUCQIFYIXAVICMZOIKRKAABIGFDQNFOUWEZAOSSTRBALLQENQFCRZPRGJHFOFZYEVXXKXTPSVQ");

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
    msg.setTimeStamp(0.386518043249898);
    msg.setSource(48848U);
    msg.setSourceEntity(60U);
    msg.setDestination(20170U);
    msg.setDestinationEntity(28U);
    msg.timeline.assign("QIFSWVDDCYNKGOUVMMRBLPFIFWLXLBLFHDGYZSULSXMLGIYATMPRYYHMRCRJOCDWKEHTIPKWAJPUUURZPZHVQAHOFYZOADSASBXETJBRDMJRLCZDMWHKNALXJOENXHEYTKTELSNYGTZONZECNNUPLPKVJWWBGGQQAISXRMQKKHITXFAWXQTEUTFIBOFJPGVIGSDBVHJNQQQBIMAKRPRFUJOSXZVKXCPDCCSMOEBAUZCGWVV");
    msg.predicate.assign("QVIHVMGOOXARRDKAMIKGAZVCKBXTGKHLHJURGPNDFJUSTZNZICBGRJOJKEGJZPKMNHBSDSSEXTLMPGSIWLWXNCYOUZENHUUJREDYUFIEYPVQEHVTRLYUOVGCVQXMSBSPADQNNLOHRZCFIETLOWQKBYMM");
    msg.attributes.assign("MIQVLRJZPIRBTFRGTTIFSTAOOXJEQFCVPDABKQSAFDBULKBBUGAAKIFKGSEGUVUGXPPUWVHTQZDHLDBFJCRDMFVLYNBREXXINJQAKZZWMNNNDUJPQNCWWFYWNSEHDLDUXEUTOVJKMJLSXHMVNXRARYHCGXVQ");

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
    msg.setTimeStamp(0.5471574154870666);
    msg.setSource(41968U);
    msg.setSourceEntity(107U);
    msg.setDestination(14165U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("QQJPRWFVABNYQIAFOLOEWV");
    msg.predicate.assign("AMLRYFTSVKHXNHLCGFMDZPQTQJUXUGRCQEMSMFOQUEGLOSGDPBQAJVNHFYCWQAUPXJEDKLSPZBNAPAKCLYZSTRLUVCKTOAIXRGYPNPHYFXKZKLCFOWKLVGUDSWJEZVNZWIZ");
    msg.attributes.assign("YLSBTCKQPMUNWOSDRBODXKCTZMAOKGIWSIXDQEMBBHTGPPIEDWRCCSKEQFVKYNZWNUMBWCYHRNEIIQRKILHALARMUJQZOOQVBZZEGGUDVGZHYZIKUAWDALMGWNEBJHEXHMVWCKHGCLKDFJVQFWTGJISRVTJSV");

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
    msg.setTimeStamp(0.6080757433902849);
    msg.setSource(30234U);
    msg.setSourceEntity(130U);
    msg.setDestination(62965U);
    msg.setDestinationEntity(211U);
    msg.command = 87U;
    msg.goal_id.assign("BLZMIYWLFUSOFPPIRBAVNNFQUHBPSCICZIAMMZSQDJPCBFTWGJAOMXGGCKMGZYDJVNPLFYRKETWVXFVHBAJNYWHHAFEUXZKEATMLPGQOULEZDPRZAHVAUABXTMZGPCAYIBNKUXQZRKEUSGDQSKXXJPTSI");
    msg.goal_xml.assign("YORCFFNYKAGMHOYQBTKHJXTXLEMOEWVMUUCQCBETHOHVEGQSQHQKDEJCTZJBVYHNOUGWWMUTTCTAMHXSGEPTF");

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
    msg.setTimeStamp(0.9371095285882378);
    msg.setSource(33290U);
    msg.setSourceEntity(32U);
    msg.setDestination(56313U);
    msg.setDestinationEntity(206U);
    msg.command = 153U;
    msg.goal_id.assign("ZPFHRETBLEVCTRWQNYLHXKBSJYGQLPIVKMAFSSQHWZGKBIWJYQDBNGHTDTZCUDGLOXZMGAPCPGNUPGTWCJILCPNVBEINOMUMFYCOIRUAWYMKGUDAJMVEOSI");
    msg.goal_xml.assign("BBIDUKEQDXOQWLTWHYMWUWHJDUTSZNTRNLFNSVCACDKQCMXJJRPPOAHYBYJWCHILZCBDPFSSHFFABIJZGHTGYVHBGLNVQTCGVGMZYOBTGAHAVJGKVWAOQYLZJUPQRVGREMUIOSYUNVPWASIWDIK");

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
    msg.setTimeStamp(0.3482491458230512);
    msg.setSource(49789U);
    msg.setSourceEntity(135U);
    msg.setDestination(8277U);
    msg.setDestinationEntity(193U);
    msg.command = 199U;
    msg.goal_id.assign("YECFJSLFIBDISVZEWWCUZSECWHESKDQHJWXBFJSEWACAJXDKSWNRORQBYHEJIZSISNBT");
    msg.goal_xml.assign("CXTIERKLNRVNIWFFTOKGGBFSRPQAJJHUBKMHLJHTXWRFEJSRWUOOQIWIEHEZCPDYABSSCWDDPGWFZQBGQGLKIEZZDUTDA");

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
    msg.setTimeStamp(0.5535085553884884);
    msg.setSource(65007U);
    msg.setSourceEntity(95U);
    msg.setDestination(28987U);
    msg.setDestinationEntity(254U);
    msg.op = 241U;
    msg.goal_id.assign("PIXEHSVJRTCDZUIQFPBYLIUUXVEDWHUKXKIBPKXLCKGTXTDBERDKPYVHRQPAAPXFFLMYMTDSAWTSBIQOSYUPFGVICYOPGTRJUGDZEDOESWVDKVJMVHZRGAQM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UMODVOJRELPVIUCFKLMZCIHWMVDKGXXXYZTFSAHGFICSEMUGQXPHOZEILIHCNSSBIJYNHXQAVQDTFGUOQDKYSCDMHIDPKUKPWPNNFJWVPEQNRLIGSZRTGQYKBCWWNVOTGTBKGWQJMBJYBEESRJHFWWHZRPBDUQBASOKRDFPBYRAEQBESNJFZWXYGXLYYMLUNBVHAIEQDLCRVZNAJKTVUZMZPWLTAYGPRHAZCEUXJMFT");
    tmp_msg_0.predicate.assign("UUIVJOCWILLYAHSOSVKKMWYYZJUEQYGKCTDGQIYS");
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
    msg.setTimeStamp(0.3940212625201005);
    msg.setSource(10895U);
    msg.setSourceEntity(142U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(96U);
    msg.op = 213U;
    msg.goal_id.assign("FDRRRYBTQZWMEECLUPSUEIGQZUTRSWTKAQWWMCPSCGVLFLMGFZQOMBRSQHKKJZLRUHQAUFCRSBNJJGNWNKAALBHSADEYDWJOZGRSFBIIJKP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ATGMGJCZGIJVXIWLRCWKPCDSOVMXVSBXHLAGHBLNGEWHMBMKILIBAWVETNPUIQASPOCFMDNTJCMEFWRODKHRWDERYSSBFJZXHEDNTSWPZNLCTYEQNILCZUBQHXROXKSRZQFV");
    tmp_msg_0.predicate.assign("YVSBOQTTFBFZRSNQTVPJMZNWLHZNYEVMULOLHDXIAADQNMUYHLOPWDMMGOWPNWRYNSUHBPPFAUYBVSQTVDPMROINXOUQKXJSFIQBEZIKZJCELSXFCEJGJBTPFHJIWUIMNSXGJYURBXUGQEAJEOVKLWHNUHRBKDKMGQVKVTLZLSGX");
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
    msg.setTimeStamp(0.15338832310325767);
    msg.setSource(39915U);
    msg.setSourceEntity(63U);
    msg.setDestination(23348U);
    msg.setDestinationEntity(205U);
    msg.op = 155U;
    msg.goal_id.assign("UVQORZPIFLTXTQDVKOLRMPPAAYPTULHFPNUJECGRVUQUKPSSFZWSNFGRRBVKIXSLBYXACDMVYMKCNIKYFTLTSNFCHZYINNAUJOLQUZAGSOLIMDWRVQRIPUDFXSOZPVXDYZFGECQGN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VWNKJVWDHGOGAALYODZFFLNOUOVXJQBILMIXBMCTJIPQXHOEVQAYXKXUQRGYPQNRPBURYYVSWDPLRDRKAUYHQLCFZBCVKLLHMKPCFJUNINJJEGTDGWRISSIBSSEQMEQGZHGEPTX");
    tmp_msg_0.predicate.assign("QOKRYCFMOOIMHZCGKWJSYAAZBHISZLEXWQXNMNUIXHTDRJUQFWETAVEAMAHJWVGXSWXQNESYBNVTTKCYRAVGNZOSUTRKGDPMTOFSORXWYINIZACOJKEEWPZIJGOGUSCUSUFVFCQYDCUVRFUBTMFLPONEYXBXLHQMYTJMKYHKFRVHFLDLL");
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
    msg.setTimeStamp(0.3511258728848875);
    msg.setSource(47427U);
    msg.setSourceEntity(35U);
    msg.setDestination(12568U);
    msg.setDestinationEntity(41U);
    msg.name.assign("COKRQNSYYMA");
    msg.attr_type = 55U;
    msg.min.assign("XRKFQOGKSFXVWQIMSAGZMHJHNPZFXQUGMBXJZQGEEBOAHIWYZHVJWTV");
    msg.max.assign("MHPKOANRPIUSMTLGGIDESKAPJXAQVUYEGPIUZQRLOSALTHVCZMDFNFKNYJONLGQNMKAUNBVYGXGXBFBOSDXRMDLPLTZYQAQPFGSRHWYXIMYKBOCMEKHJSEQHACYIFTGPXYONIBCZEFUKOIBLWQBJHVZSQREHDFZWWMCZWDVJETTABNSRWOKTHRSDEUMFJICRUMDCTVQCVBAFTDJYZWUELPXONXEWLCGPVJ");

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
    msg.setTimeStamp(0.7392450836033472);
    msg.setSource(23083U);
    msg.setSourceEntity(254U);
    msg.setDestination(22519U);
    msg.setDestinationEntity(139U);
    msg.name.assign("PEZZQLCVHMNKJCAZQSJIVAHPLNAFEZBXQCRISUPZAGTUSOKEPZBBXCYWQGABPIHXBRVHGTFVJTDEHUOSECADYSZIPPZWKMQHKUXVVYOYXAURRYQEIUCHHNFJNTZJKGMDBDNNMEXJJBLQDPTKBIWLYHRXGUTSWUWOWMKNKGHFRCPBQTNNBFIJVWGIMVJMFFSGFDYLAGYLOWTCSYXUMPTCDMILOQOMWRLAWDCDOIDGALUOQXVREFTLKN");
    msg.attr_type = 102U;
    msg.min.assign("DDMWDQGWPORLVMVSCCMLKUHGQYAUUWAYATHBILDZMVJPFBAUKDNUUOGWLIDYXVTIWLYXPLYDQXFSZTIRV");
    msg.max.assign("OXSWCQLJEIDGKWAPIPZZKNXUDKMVREKCUKYSMLXQTVDIMNQNSMNPVEOBBTSLQTCWIRMLAQHJOSFORIUTJUHJAWGBBSRAHMJLYPUHVXPQQIUFVNZDUQBGFJHPRGAWUISAYMSUCWZDOGCSRMKYVBFXEEROTFVWELCCZFGZYUROTGTAXWLCBGHQNFQPCBXYKIHBXFYZNWJFDHLTJEGOJNDVVZDXROKLOHGEX");

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
    msg.setTimeStamp(0.4254919126792308);
    msg.setSource(35319U);
    msg.setSourceEntity(200U);
    msg.setDestination(44319U);
    msg.setDestinationEntity(15U);
    msg.name.assign("YIFNRUHMXUIBEUBTALVWJJJWNOVQFNDTOMIDAGAYOVYHTJFHYEROZBYHMOX");
    msg.attr_type = 170U;
    msg.min.assign("NBBBISXATTFPOINBWVWGHYTBRVAKTVWTWNGIGDIFOUEJUPRKWCBBQFIPMDUMFGDMDFTZDQMJYPYQCQGBZSHVCGOJBWUOVRULHUXASYRMVEKLYSXRAIWAHQYSNNZXCFKZJENHZLUZGWKYJXFCVHQLRHOKFIEUCTSIAVJHFOEPPHSCQXMADQHNG");
    msg.max.assign("NBGPIJRKMKFALYZTVAUHGESFACGMEZXTMYUOVRLEBGWMCNCWZEJXBSCZYFAKHEWWTQQOFUQCDRESWEIPSRVPVCDOSHNONRWYOPOBWQT");

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
    msg.setTimeStamp(0.49025693366170786);
    msg.setSource(33824U);
    msg.setSourceEntity(219U);
    msg.setDestination(8853U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("FSCFJJGXQTAIWFLIILXYGIOEBNESTVMRYDOVHNRLXNVRDEJMTMZBYDYFPEPAPSMHQPRWWCJTAXUBWBRLSRNTVDREHMZLCEFPSTIBLHISATCIZHOVDIOYMQHQOXDDGJULMZMVXZUXAOWBPPSMBCOJZVWAYYQRMUKZKIQLSNEBHVBVNOKCKUPCTSABGZHIRFQC");
    msg.predicate.assign("RSAHNDDETXEYBWPZSQWJKJPGXRBTYTPZTUMIUIZKXQECFMGJSSRKNLQDXFNYEHJVSYLSORUFJMTPROKLIKZDYITWQRVYAAAXQWCQTGIFWSRLOYQRLAYLOKJOKZEKWVGMXBHUHLGCFHFHGCVPLSDDZPOXFFMWUUPXGBTZNCMFEIRAHJDMIEPKMOBJXVOJYEBLXGQNCRJVBUAAPCHQDINCUV");

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
    msg.setTimeStamp(0.5162394983104498);
    msg.setSource(32979U);
    msg.setSourceEntity(30U);
    msg.setDestination(56497U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("VAALIOGQEZSPRKZVUPOAMFMCRYHMNCTTTRWDHMPCPNCQTWNMTYZQCGAHBHHNSYIWPGBBHFDWDXTQAGJDXTKCJSIBBQJWTPEJJKSPSIAOWKUGOBCXCELOHPUIJBRVFKKUGHVDSDLQIOFKEMJYNZTULAXFUEUUPZRYQELRDIOUNNZISSIURQODSJWKFNVRMVBWFVGVENGFYVCI");
    msg.predicate.assign("XROVNBDHUTHCYKNXWEIVAIPWLEGUIMMQMOSQKGDCZXHYPJDWBPSHZRQNUPSXRNRVSKGLJFKGZTMXKIXVQOFAEWFDEJYYFWNTLZIOS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UTRDSZJXQUUXRVS");
    tmp_msg_0.attr_type = 75U;
    tmp_msg_0.min.assign("BKBEPIALQETJNNMPKLAAMHFSNZSGGHUCKXTCCOVTHOGJRCWKBCMQQXUHHCJLWKTCCWPODQGUEQVETHOYFSGXEXRXMTSZIDAUTWQSHOLYGFITLILZNRPAEDPYZUWYYBOZDBNBGUXCSUEJZKGZSYWIJZQGMIJDFBMRRJKIZLLDNWWFIYDPOPVUDVLWYNV");
    tmp_msg_0.max.assign("CYVSZZISREBBCIYFNOZEIGMUSXPGCVFUODVDSHLPTBANDBPRCPZNPKDRELHLNLWWJOIERKNDWLHVADXAAQZJBOECISRHVCQBGCWVXYMTRAAIEJAGDPTQNIQZHKLQVMYVFITDJYQZJLLYSNQXKWHXXKUTXM");
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
    msg.setTimeStamp(0.12676097946443798);
    msg.setSource(5542U);
    msg.setSourceEntity(131U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("RQYEGUHFXMINHDZVOBIKOCTATTSKXBJDGVLJMRZEKCCTJMMHAWQJJEHABMAOFGTIVNRDXMHXEZTSUQSEURYWSTLPYTWHQOJVXGKXXFTSPTPBCKYLIIOEWJQEPFFXIRHPGCBVZMYACQWNDQVSYBGNVI");
    msg.predicate.assign("OCFBKMTYWOYEZCNGKIESRVIAFRUSVWJSKTWMEOPCXVFOULQSPFLWJWCGKHWNQDIBFSITEELZJVACMPQQJDSBNBAUBVLPZHTCHRB");

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
    msg.setTimeStamp(0.5225614469803329);
    msg.setSource(13560U);
    msg.setSourceEntity(88U);
    msg.setDestination(48908U);
    msg.setDestinationEntity(85U);
    msg.reactor.assign("AELLWXSWCCNHTEXTXKDIXVMDIUQNEENDWOXGNZOCKYSRAOPZYUFIAFVMWLPYQYEVWPLDPD");

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
    msg.setTimeStamp(0.7401992707674887);
    msg.setSource(56060U);
    msg.setSourceEntity(185U);
    msg.setDestination(944U);
    msg.setDestinationEntity(72U);
    msg.reactor.assign("VNAZINWRZXCRSYFOXPLPVVEGCUHKTYXQZMKGHMYXRLLREUVFMDBYIMCJKWSWEYPTNWMOQCPFCXGIDVVFIAKKQTQZSEDQYFRDONNRHDZTIMVTFNHSXBMEOAWBLKNQULPYEDSOCRJQKKXJKAJJRTTATULGFXUACBPQHZMHCJPNSGIIQB");

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
    msg.setTimeStamp(0.07010316915695336);
    msg.setSource(44254U);
    msg.setSourceEntity(49U);
    msg.setDestination(6465U);
    msg.setDestinationEntity(236U);
    msg.reactor.assign("PFEFGGWREYJFLBILWKXNWUPEEZVIMETASSJBRTPISMPSAXPGOZTANYDXWTUDKDVFUVMVHWMTKBNIGXECCCSGHDITKORKKHVSXWJZTQMDRZJFBRIOLJDBATZMOJROYKZXVNFJYBVBUQRELNFICJGCCNHA");

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
    msg.setTimeStamp(0.9841774985831453);
    msg.setSource(32846U);
    msg.setSourceEntity(160U);
    msg.setDestination(472U);
    msg.setDestinationEntity(80U);
    msg.topic.assign("FQILKTOTFAMOYTPQLVJUEKLPHQAGBVQKBIBSTMJTVZAJAXHABNIEYFHZSAKHDHSPMGHVFONNNCXIJQWCARHDLLPNKPPDEYSZOFERBSEJIHWANUNWQXOGCURARBXJWRERXYIDJQCBUQFTPMMOBZRISRTJGGGAZVHTDFBKLBDFFLGMJOHGZPEEXYCUDKPEIWOZQ");
    msg.data.assign("BZPDMHTXZGAGOWWHWCHVZTDBGIDLKPJZNVCABIQURJPFLULCBHTYIFCLPSREUGXXUZBDVKAQQPEKJRGXUCMKRIOUDSTSOQZNUFGRSUCPXYISTWHFEL");

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
    msg.setTimeStamp(0.5826182358567936);
    msg.setSource(62965U);
    msg.setSourceEntity(95U);
    msg.setDestination(53216U);
    msg.setDestinationEntity(122U);
    msg.topic.assign("UPYCFSQXXVEGPDMQTVVMWJRYNPSFIWWTSTXIKOYZYQLOZRAAQZVFHDGMBKFZLBCUDZEZJAQFJHUVWNZOEHEXZBORBLXMMXGHIODAKQKECBJMHKYDBEXPLRIWLZNCJYUPEHIKPWUMFTWIIGDRVDQXKGDSNMCTXUBLCDRLHCGBPAIO");
    msg.data.assign("UZHCSYIXDKCSDWWTWBZWRJYPNSUHDDPOPOYSXIVJYLZRHCOVOMWSLKFMWQUZCBVSOAOEVB");

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
    msg.setTimeStamp(0.39937251136465945);
    msg.setSource(11857U);
    msg.setSourceEntity(114U);
    msg.setDestination(45967U);
    msg.setDestinationEntity(144U);
    msg.topic.assign("EWGKISTCACYNMHBTMIFHCRWRCYRMGLXPVRSGJJYEFTERBOLYPATSQFTPKUXISEMIEFWPNUWQCZNZMBUPDOYQY");
    msg.data.assign("RFVGVRDYFYDDETEQKWTLDYUPMREQAPYIDIARSWBTGOMUVBFYHWEFCIAXJXJFLKBMFTWEWEKQDASELHKPHCVTXFVXDIZPPTSOSZVWYKUMIDPLBUGCNWAATUCASBMDTXZZQIGJPMCOTHI");

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
    msg.setTimeStamp(0.35147614283905404);
    msg.setSource(46382U);
    msg.setSourceEntity(18U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(190U);
    msg.frameid = 62U;
    const char tmp_msg_0[] = {78, 19, 118, -61, 20, 126, -43, -27, 72, 85, 95, -113, 83, -87, -118, 5, 119, 93, 102, 5, -87, 93, 69, 79, 3, 89, 35, -67, -123, 80, -43, -17, 21, -35, 92, 23, -58, 96, -23, 9, -55, -89, -10, 69, -68, 8, 115, -98, -107, 17, -14, -84, -34, -90, -18, 51, 45, -110, 72, -28, 44, -1, -72, -68, 65, -108, 115, 25, -94, -37, -118, 124, -43, -27, 30, -124, -42, -16, -122, 82, -14, 13, 39, -37, 99, 84, -122, 85, -56, 4, 114, 17, -53, 18, 97, -32, 73, -43, -86, -83, 30, -32, -70, -53, -71, -11, -16, 52, 110, -74, 73, 22, -122, -18, -104, 47, 117, -18};
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
    msg.setTimeStamp(0.9412148591187329);
    msg.setSource(62879U);
    msg.setSourceEntity(251U);
    msg.setDestination(45930U);
    msg.setDestinationEntity(152U);
    msg.frameid = 201U;
    const char tmp_msg_0[] = {13, -99, 58, 81, -113, 28, 93, 102, -31, -59, -14, -35, -3, 6, 85, 66, -26, 5, 3, 5, 87, -45, 81, 2, 57, 42, -8, -62, 89, 58, 72, 96, -10, -64, -69, 112, -114, 99, 82, 67, -100, -119, -118, -57, -114, 99, -13, -65, 39, 51, -6, -114, -106, -10, 48, -7, -40, 26, -19, 10, 66, 53, 93, 105, -11, -71, -99, 93, -118, 111, -13, 3, 117, -54, 112, 53, 113, 53, 23, 79, 3, 71, -18, -30, -21, 37};
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
    msg.setTimeStamp(0.9638457827558201);
    msg.setSource(40250U);
    msg.setSourceEntity(244U);
    msg.setDestination(38028U);
    msg.setDestinationEntity(52U);
    msg.frameid = 84U;
    const char tmp_msg_0[] = {72, 111, 26, -4, 6, -20, 59, -8, 56, -102, -29, 96, 13, 126, 59, 22, 61, 126, -11, 85, -23, -84, -94, 19, -77, 66, -80, -90, -108, 52, -66, 126, 111, -34, -1, 123, 58, 103, -33, -31, -109, 24, -52, -109, 85, -121, 82, 74, 2, 70, -80, 47, 5, 11, -44, -36, 18, -67, -110, -97, -32, -118, 56, -9, -72, -60, 0, -76, 38, -45, 73, -48, 116, -98, -102, -69, 64, -61, -96, 73, -39, 55, 105, 67, -21, -116, -45, 60, 81, -23, 29, 82, -84, 53, -16, 22, 83, -85, -16, 21, -98, 67, 126, -91, -17, -79, -108, -73, 105, -99, 34};
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
    msg.setTimeStamp(0.2785155903867056);
    msg.setSource(39012U);
    msg.setSourceEntity(89U);
    msg.setDestination(63505U);
    msg.setDestinationEntity(204U);
    msg.fps = 141U;
    msg.quality = 179U;
    msg.reps = 250U;
    msg.tsize = 36U;

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
    msg.setTimeStamp(0.09664446747335675);
    msg.setSource(31047U);
    msg.setSourceEntity(127U);
    msg.setDestination(28342U);
    msg.setDestinationEntity(173U);
    msg.fps = 76U;
    msg.quality = 75U;
    msg.reps = 215U;
    msg.tsize = 193U;

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
    msg.setTimeStamp(0.9446494820980934);
    msg.setSource(51393U);
    msg.setSourceEntity(53U);
    msg.setDestination(45924U);
    msg.setDestinationEntity(83U);
    msg.fps = 43U;
    msg.quality = 78U;
    msg.reps = 230U;
    msg.tsize = 137U;

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
    msg.setTimeStamp(0.14904358059482192);
    msg.setSource(23677U);
    msg.setSourceEntity(252U);
    msg.setDestination(12643U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.5386947723250255;
    msg.lon = 0.16740133283009784;
    msg.depth = 97U;
    msg.speed = 0.6583294839739788;
    msg.psi = 0.9561022459061326;

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
    msg.setTimeStamp(0.533979212657895);
    msg.setSource(32658U);
    msg.setSourceEntity(245U);
    msg.setDestination(15084U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.6395889679225111;
    msg.lon = 0.2592116529790802;
    msg.depth = 71U;
    msg.speed = 0.45544064788051863;
    msg.psi = 0.9231364607453578;

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
    msg.setTimeStamp(0.7433204100100766);
    msg.setSource(57356U);
    msg.setSourceEntity(136U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.2800895520432658;
    msg.lon = 0.06780131299361614;
    msg.depth = 153U;
    msg.speed = 0.3439338450450078;
    msg.psi = 0.42094328774602086;

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
    msg.setTimeStamp(0.8084670126519842);
    msg.setSource(50690U);
    msg.setSourceEntity(244U);
    msg.setDestination(54164U);
    msg.setDestinationEntity(165U);
    msg.label.assign("MBRDVLODMWGFUZAAHOBWNYVFMEPLHTVSFXBQKTKCEADXETHHLVNSGWRWHPWXDGMJCZWMTNQIRSCPVHNJCLUNCZN");
    msg.lat = 0.560793681082329;
    msg.lon = 0.2176720139675622;
    msg.z = 0.06838634578206892;
    msg.z_units = 69U;
    msg.cog = 0.5510236124941983;
    msg.sog = 0.17294516594712006;

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
    msg.setTimeStamp(0.3590374977693537);
    msg.setSource(55408U);
    msg.setSourceEntity(92U);
    msg.setDestination(29125U);
    msg.setDestinationEntity(167U);
    msg.label.assign("WQEIWFVMCQCQLCUIEIZXQHKDBZTZJNESMXOFAR");
    msg.lat = 0.19995266407349555;
    msg.lon = 0.8760391440914129;
    msg.z = 0.9873240903462992;
    msg.z_units = 125U;
    msg.cog = 0.5126528921462097;
    msg.sog = 0.6821098426995531;

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
    msg.setTimeStamp(0.9933686681917364);
    msg.setSource(1968U);
    msg.setSourceEntity(144U);
    msg.setDestination(47396U);
    msg.setDestinationEntity(191U);
    msg.label.assign("OOVDIGTZWWLKNJHFHKWMRGVMDGCTCPLEJNKXSCNFJDLAXYZZDYCVVCWSPFAIZOXVBEQGGOMNDINAKYTKZRXRDHRIWNEKSLTPQMFMUOSNAVQKBIMTLOVGREKBHISEPJPITBICZJAWAWHBCSZLMGJISATQPJYZLPQMNUCJWMAYBBJXULJDYEDKFCNFQTVBGZRQYU");
    msg.lat = 0.5715291201180039;
    msg.lon = 0.08959863125465295;
    msg.z = 0.988704397350595;
    msg.z_units = 227U;
    msg.cog = 0.23595442344973794;
    msg.sog = 0.3698388768476575;

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
    msg.setTimeStamp(0.5562567123333128);
    msg.setSource(10609U);
    msg.setSourceEntity(31U);
    msg.setDestination(3281U);
    msg.setDestinationEntity(222U);
    msg.name.assign("WCDUTKHHLALPUWDMOJGACFXZAXDQYHOMTTLMRPIUYBTITUTZQQRRMXGWJKMLXGWSYWHJZJBOBCJHLRSYZSSAHCKDYZVLZWCRTCLEGEIOBNEKMUGJQQQFAKFPFPNSLSYJKDVSWPTQQXDUBPRIILGMFCFUXPNZCIXEPNXAWXESAOOBGUMUGKFRVKZBVVKTNMHEBANRJOENDVNEHIVGZVHEAMOAQIYFZSBCWRSGXPFEFROYPDDDYU");
    msg.value.assign("FHXRSNXJUZYQSPPRVPUZIFACYAEBXEXAWLRXIKNUMCVTUTWOQQYLHLCSCYQBAVODIAPMPFQOPCTJKDPKDDFSJYGQLNHPWENSBXLKGQCRVBHLVGMYMAILDUCJUFRJDYEWIHMHGRYNRTTVFARZIOCHDLBWCXGWLOKDKFDSKUEJHBGKFIGMVSMANGEHFXOSLKJOZIFZENEIBTVAQGJTZYHIZEMAOXMNZZNOQBUCOTJBBPTVNDTKWXSVWUWJY");

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
    msg.setTimeStamp(0.25984649388115444);
    msg.setSource(30083U);
    msg.setSourceEntity(98U);
    msg.setDestination(9204U);
    msg.setDestinationEntity(224U);
    msg.name.assign("RHHIXEEGXRYERJIXSRQOXRKWNEIOSPHPQZQFPXWFQOATFVKCEADOALYEXYPBYAENOMTABVRZYWUUULITUJKMDTUKINOAMGDVDYNPDRCMNUNJFJMQZZVXSTAGEDLXWPQDWBJNDCLVWTSSXGZQODW");
    msg.value.assign("OXHDXDQXKYLDNLVPGLTFIBOYZREAZHFUVKPCCIZFSEHRRGEAFNHRKDBIMHDNTLNCBLKSQEYRJTBNMGKNGQTUTWALYKOGNBUMERVYJHMSTJVTYXSGQWNNZKYUARVOBXQKXJCJJBSDDQESJIJXTWXPVOQZYMDRKPIXNJELOVAMZCGWFDDQMFQIRAAMZZGICWSUGBUZEWQCMVOECFPZUJUHBWP");

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
    msg.setTimeStamp(0.1238521003335662);
    msg.setSource(35015U);
    msg.setSourceEntity(18U);
    msg.setDestination(34284U);
    msg.setDestinationEntity(180U);
    msg.name.assign("VWYFHASAJJXAVPRWBJXNBNJILJBDLUCQMYWIBCNFGGFWUFEHZSOCYUTWDABUM");
    msg.value.assign("PEBCWCJQOPJOXEVMSYLMIFKGXNSYRZNTSCZXJLOPHOXBTDEVJTWQAFFKMRHLOIHIWUKTMZHWXTDFTOGFHAIMVVIRBIEXWZXCAUYVDMGWMHNELSIQQZLLJJBTXDSWMDWBIFOUMCUEZYIALNFLGAQYGNNOCRPVZPXEARVGEECFVJBJ");

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
    msg.setTimeStamp(0.6142762048757159);
    msg.setSource(26505U);
    msg.setSourceEntity(251U);
    msg.setDestination(31760U);
    msg.setDestinationEntity(63U);
    msg.name.assign("XHPWQPYDROKOWMKVAULOGQDKAHFDJTSLIBNZYMYWNPUQVGRBJIYZHVMPHCREAUCAJGRNOEDUPGQLWXQFGPZNYWVXETMJUEBAKTIEUKNJSOACPFGGYPNEXLUXQESOGBFMRCUTMUBRDZYTWDITSBBWHWXPFCSSENDOTERVTQOMFIVKB");

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
    msg.setTimeStamp(0.8549457308716314);
    msg.setSource(56312U);
    msg.setSourceEntity(248U);
    msg.setDestination(62629U);
    msg.setDestinationEntity(172U);
    msg.name.assign("ZIVFTLYHOPCNUXYJRXAMGXWYCVCDNWRQYYSXEDNZTDYSSJIJFMWTBKEAOYVCEUIUVPHMQNQGTGDRQWMVZJLJSDBHTDSQNTVFZPCGSTDWCAQOKLWNMRKGMPKKXSFHVGIOXESGMBZREIQFLSIRQKADEBYRAOOBUMXHHIUN");

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
    msg.setTimeStamp(0.5996078615027113);
    msg.setSource(40142U);
    msg.setSourceEntity(4U);
    msg.setDestination(5242U);
    msg.setDestinationEntity(36U);
    msg.name.assign("PLPJHHNXYUVELJTXRKVGRIZFKCGSBKODODYBLNIKNRYQAHNYJMPBPOKWYJZEPIDUWAKRAHRMVPLTBWPFMFAAGADFFTEEKNMMBEAHH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IISTKDBEAHWQAVZGZYUQVFYNNOIRQOGAPJZXJDCRBADDRRXNJCQKKUDSBPZNENFYKPTFKTSBEGCEEVSHCFUWOZQOBLSLYHPICOFWIFCAAVYHRLMLPEODLLBIZZHXEMMAPJWPNNOUBUNTEKSDRLJOGQMTLTVYQMNGWROJVMMXSJZWWAGDRKLACIGTZBGFPXIGWXYFEDRISJXHVTJUHQTRUMJKQBHFNZUXCYTSQXGWIHUPDXVYLAO");
    tmp_msg_0.value.assign("OWMJYEWGKXZEOMXXHSNWIBEXPWJFVBQMBYGMBWGFSYENMQUMVGDCFCVDVNWLAXYIRUEFGKJVMTFQ");
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
    msg.setTimeStamp(0.3494692591570958);
    msg.setSource(33457U);
    msg.setSourceEntity(192U);
    msg.setDestination(12230U);
    msg.setDestinationEntity(2U);
    msg.name.assign("NCPDPQRYKPFXXECHSHOPOSOZJBGRNAZVNHBOUGKJZWFXLELIQIXDFZXWBKQMLITWEKZMLEPRROGLOMCPDHYJJCDVBIUDUKBSBCIISNNYTUTORVSBRQSQLP");
    msg.visibility.assign("UVNOFWEUHACLTMAANWEIKNKRADHXHFWSKALXIYAOHDTAXJVGIYPYCUMZKRHFBTCMRGKSIOVQFMTVJUPYQIWQMXERUOLZDELQCDPBHYVQBIIXYSGSMGKECMZENBMRGPEPFXJONQJISBKOZHDECLEDWDZCHUONQZSHTRBMRFBLYTJQBVGWWZKAPFYWSRJBOGPDTQGPEFFLZNRVNGCLXTCCHQXAN");
    msg.scope.assign("CNFYJYLTXZTSJKNIUJSACCMOIASIHQGCLUHFBTNAHPIPTLKUFZEOGYSXPCKFSDOPQYGHQJOVWUEQQVBUGDRZYFRMYMRCDKBJVSJVPRUVXZBHRCVQORMDVJOONXZLXUB");

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
    msg.setTimeStamp(0.36374850020407057);
    msg.setSource(49849U);
    msg.setSourceEntity(14U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(28U);
    msg.name.assign("XCFBQITSZKHYGUQYAVUPTPSDSFJHSVMOCYDBCOJJQAJMFQBTKDUFOIBAOZDZROLYADTYJWFSWBLANGXDVYBXXHRUSSSENNKKEKNEKNUJBCKWMGPWQFKRHXCGPZCDUNCWQLLPRVVWHEIEPVLPUTIAMOEZGPO");
    msg.visibility.assign("FNTYQEMBOVKAGZCGKZYAJLXTJTEFYTPCCSYFIXQONDSESDSVHYPQKXANRXYUOLNLOXPMWNJGIMGWDRYMWWKCAATHKHHPLDEZCZIUSMMQHLSMPCCZXNLJRVDCGUJKEUHEBAUWUNWFDLCZRGJUDXJFDGQFSWV");
    msg.scope.assign("KPRWJTTUMDOQOQCTFHRNHJTUDGXZQCFNXVDQPZ");

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
    msg.setTimeStamp(0.5265910131049607);
    msg.setSource(51812U);
    msg.setSourceEntity(24U);
    msg.setDestination(4381U);
    msg.setDestinationEntity(125U);
    msg.name.assign("HGITZPVHJWOWXZEEFNWVVBIJCQXSRAEJLFDPTOZBWUGPTKOGAZMPSBZDUUXLUNJV");
    msg.visibility.assign("CVWPINTKRFAWNUYVEKQEDEAOVIJCQFNXRXTOQMLZDEMSKELTAZWMOKNKHLCYBGORPWLY");
    msg.scope.assign("ZQEDKGACTGMGPIIWUKYEOPZGORSILEOJBCGYLGXXZYOJARAUKA");

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
    msg.setTimeStamp(0.632550456809297);
    msg.setSource(61891U);
    msg.setSourceEntity(160U);
    msg.setDestination(50334U);
    msg.setDestinationEntity(121U);
    msg.name.assign("TYSQBQMTLZRHIEDWNWINELRAUTAIFLFLQMDMHCPQRGSSPTLFYKDFMUPJEFSULYNUWPZOQAUTMZAZCUXHIEWBOHBXRGABARBMXPGVGMPOFYLSYHQDQBCFESMPXOKSCVKYVEARVZRQFKGDVE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GDEVUZWFBJQWEICUQLP");
    tmp_msg_0.value.assign("OEXSCUXFXXSGZLBYNSLIUWJYAKUBPMBXL");
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
    msg.setTimeStamp(0.7957219299811104);
    msg.setSource(36744U);
    msg.setSourceEntity(39U);
    msg.setDestination(18002U);
    msg.setDestinationEntity(31U);
    msg.name.assign("KWHHMHBHYETYTDJLUNWOENSTIPGWCLIUZDBBRLONVMFGZAXPOJIAUEPPAXTEDVNBKHLWNSIHKZWQUAVNZEJUYQYLJGOWCBZFACJAPEAJDVKIQTVVYUJFPDRVFFJUJVQTYKGMDXGHIKPVFCLACZGKFRCBFZLSEB");

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
    msg.setTimeStamp(0.5023112827255233);
    msg.setSource(49606U);
    msg.setSourceEntity(244U);
    msg.setDestination(10809U);
    msg.setDestinationEntity(71U);
    msg.name.assign("LFRKZLTDNWXWXCJBQDMDKPYGWRXPCGMJZGHIUWYXBYDZUKCISRDSMMEJFENLEAXGRQQATGYVZLNPOSTJXDEONRJYGAZYBOGPEXCKTOJTKFYKVBAUCRASQYSVNERSJMUILLWKMFTMAISRHZIDQCVQUEHWMVACBSNLOZWVNFSVTUIZOGCHFPVSOMPFYXUVUFOWQPPJIOAACITHHMKGZBVFIUB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DWIFSQUOKTFIFVNJBEPJUEPVWENEZXGKLPBNMGGNHPZWLAZXFBRVSISKSPCKRPTGNQDWZIOFGCLTZSMWJGQOVYIQVBGKCVXDFJLIDAYWXFCXGOJPHPTQBYRLHZMRBZWEYBCDYDPFZREZYCEREARSPAZOUCDGATTXMYTKQMNAHLHURKNBIHRMXOTAIWXCOWHEQMBCSHMIANY");
    tmp_msg_0.value.assign("UUDALAIBICXCHCKJODYGZPITHREFRWNIFVTUBKOVGBFJHWWRNSKWGOLDZALPPHZQWGGJSSICAKIJCCOBWDPWKYEQOTSPJUKEDEYVILZMPJQOVHFFQXAZPBMGERKOUWUQRFRIKRTTHSBPTTJELTVMICAYRDXQFHLDXRENYAMYCMAVBFSNRVQXKEULDANWCENQGFYSYLGXVHIDUMEXMXTYGT");
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
    msg.setTimeStamp(0.36140379496997865);
    msg.setSource(14196U);
    msg.setSourceEntity(191U);
    msg.setDestination(20822U);
    msg.setDestinationEntity(17U);
    msg.name.assign("TEKCCAETSHPXRMHTUULZVHKSBVVMWZHYGLXCVGRINGUPJFPISILBQPVBQCIJWSNBARDUDMLSYIKRZIJMZOOCLERATGGAGKLANFMMYDBPGRUQQJ");

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
    msg.setTimeStamp(0.018894437077689563);
    msg.setSource(30922U);
    msg.setSourceEntity(203U);
    msg.setDestination(29099U);
    msg.setDestinationEntity(224U);
    msg.name.assign("ZIFVOARJMXDINOKH");

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
    msg.setTimeStamp(0.582758903611503);
    msg.setSource(35948U);
    msg.setSourceEntity(111U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(171U);
    msg.name.assign("DPOYOBYFUJRVAPQYXPWUQDQDBERLWRGLBGWAPCVIFBRJESZKJXKWNHLNXDZCTKUMDCXBEGWQXJLDSFFKQLEHSSZLHKXMUENGBRBPJNWUVAKJNTDSKBIIZJAEGJAFWEOYLLFZDVYOCCHALOZTBTCVGGYMGQSORFMOUPIIIAUTWANJMDQZZRT");

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
    msg.setTimeStamp(0.6434386707683364);
    msg.setSource(24858U);
    msg.setSourceEntity(143U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(134U);
    msg.timeout = 3031621693U;

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
    msg.setTimeStamp(0.9154590709934598);
    msg.setSource(14572U);
    msg.setSourceEntity(212U);
    msg.setDestination(22741U);
    msg.setDestinationEntity(166U);
    msg.timeout = 3318002861U;

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
    msg.setTimeStamp(0.14316586068450654);
    msg.setSource(54594U);
    msg.setSourceEntity(150U);
    msg.setDestination(45014U);
    msg.setDestinationEntity(190U);
    msg.timeout = 543688246U;

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
    msg.setTimeStamp(0.4603997657693566);
    msg.setSource(54387U);
    msg.setSourceEntity(14U);
    msg.setDestination(48573U);
    msg.setDestinationEntity(119U);
    msg.sessid = 2612163336U;

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
    msg.setTimeStamp(0.007580687617431248);
    msg.setSource(59383U);
    msg.setSourceEntity(115U);
    msg.setDestination(46078U);
    msg.setDestinationEntity(58U);
    msg.sessid = 2644750299U;

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
    msg.setTimeStamp(0.8015931456928377);
    msg.setSource(42016U);
    msg.setSourceEntity(162U);
    msg.setDestination(65018U);
    msg.setDestinationEntity(207U);
    msg.sessid = 703416238U;

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
    msg.setTimeStamp(0.680961443225029);
    msg.setSource(2314U);
    msg.setSourceEntity(20U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(86U);
    msg.sessid = 2989565543U;
    msg.messages.assign("WBXCXSRNYHEDMJAIJXABVGXUMFDXGSXSYVUTHVMRADGSLVDTZLLQNRZSWJIEIFJWKIEMNBXCYDMQWNSUAOUFTDPZOJHYYQCYWWCKGHRVBTCHZVTRGRVGGVIAMRHZAMMCSPYQEYOLDZXNKVBQPILFPGKNPXOLTBFEAPEOKLADCSOHNNQJGLCBLUWRPQLKORUDAMWEPZICYSKTIQEFVGWOQCMIQBNRUTFHHOJJFDK");

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
    msg.setTimeStamp(0.3975699147086834);
    msg.setSource(45214U);
    msg.setSourceEntity(153U);
    msg.setDestination(59432U);
    msg.setDestinationEntity(205U);
    msg.sessid = 3698100973U;
    msg.messages.assign("NQYSDXKPAENJNQNTDJYQOYCSPCUDEDCPUPYAVGZJFXWUBCLQFUXBVCFVNKSXDGCFZRFMFISURJBHKHZCIXRJRVFNOFHTWUBJTTMWZMHIYWPEBWZLLVBAANTRKEQWDLTLWUZODSAGKSMSIWGYLRHPHRGSCHRKDAYVQROJIMVGMPQSIEOYGEITNHOEVBVATNXUZNOK");

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
    msg.setTimeStamp(0.5678402294116754);
    msg.setSource(46790U);
    msg.setSourceEntity(98U);
    msg.setDestination(15787U);
    msg.setDestinationEntity(248U);
    msg.sessid = 490691976U;
    msg.messages.assign("LLSPOMTPIQGRWTXCYBRPVNXYOSBRODWBMDDKSVGFLXCWZAWRTKPGOTFGHDNATJPHPYNJBQGSDIAVKURQOWKAHJAQR");

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
    msg.setTimeStamp(0.5203585147017836);
    msg.setSource(38759U);
    msg.setSourceEntity(189U);
    msg.setDestination(58321U);
    msg.setDestinationEntity(167U);
    msg.sessid = 4032630968U;

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
    msg.setTimeStamp(0.9318316687028633);
    msg.setSource(4415U);
    msg.setSourceEntity(127U);
    msg.setDestination(18980U);
    msg.setDestinationEntity(82U);
    msg.sessid = 1744490812U;

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
    msg.setTimeStamp(0.42283597451645916);
    msg.setSource(58159U);
    msg.setSourceEntity(29U);
    msg.setDestination(8907U);
    msg.setDestinationEntity(83U);
    msg.sessid = 2742957344U;

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
    msg.setTimeStamp(0.22135123962716063);
    msg.setSource(15784U);
    msg.setSourceEntity(236U);
    msg.setDestination(21618U);
    msg.setDestinationEntity(100U);
    msg.sessid = 1174764505U;
    msg.status = 75U;

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
    msg.setTimeStamp(0.7369462230659096);
    msg.setSource(36411U);
    msg.setSourceEntity(188U);
    msg.setDestination(43692U);
    msg.setDestinationEntity(160U);
    msg.sessid = 857406175U;
    msg.status = 109U;

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
    msg.setTimeStamp(0.03775703252327922);
    msg.setSource(58700U);
    msg.setSourceEntity(96U);
    msg.setDestination(35869U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2351937829U;
    msg.status = 191U;

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
    msg.setTimeStamp(0.6064941883202138);
    msg.setSource(45309U);
    msg.setSourceEntity(11U);
    msg.setDestination(46179U);
    msg.setDestinationEntity(29U);
    msg.name.assign("KALOUXWIKLGEQSZUXESDBDPJYNUJIMMLFCBIATJAXR");

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
    msg.setTimeStamp(0.5365475087860229);
    msg.setSource(48254U);
    msg.setSourceEntity(140U);
    msg.setDestination(61777U);
    msg.setDestinationEntity(66U);
    msg.name.assign("KAVHZDFOACGWEUIYWFSIPDZBFAMVRAHC");

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
    msg.setTimeStamp(0.1958108559076397);
    msg.setSource(21933U);
    msg.setSourceEntity(155U);
    msg.setDestination(34894U);
    msg.setDestinationEntity(237U);
    msg.name.assign("UYUGIGGOIWQVCDLUYZNMXWBUKUAMYSMEBABHRSDBDWKLEPCVKSPWDVFFQUETJSDEBPHJXJPBPAJFLPSJTLXCWYGKDXMSROTCZAJJQQXFQHODIAWUVIAHTACKRCLWQIGNH");

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
    msg.setTimeStamp(0.6334172561964176);
    msg.setSource(60627U);
    msg.setSourceEntity(24U);
    msg.setDestination(1684U);
    msg.setDestinationEntity(173U);
    msg.name.assign("SFGRSRIMZRDUSCMOWJULBRULBINXQYOOVDRPVHGIOAOLDDKJEGWBDTAUHAPAWAXMTPWSRYEUQNKFUQWJOHLAOMKSQJQYERLXZCERCYNQVBPXNDTJWQITGGVZSAVUJWTYIVUEEEHHTSPKIQJPDCZWWVHGBDXLBHXEDCWIUZXMFCHRTCLPR");

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
    msg.setTimeStamp(0.19067939770107567);
    msg.setSource(63850U);
    msg.setSourceEntity(22U);
    msg.setDestination(9983U);
    msg.setDestinationEntity(247U);
    msg.name.assign("WHZNOTGAWUMTRBILDRQAGFGQEPELPGHUVAANOF");

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
    msg.setTimeStamp(0.08270698824491651);
    msg.setSource(6079U);
    msg.setSourceEntity(121U);
    msg.setDestination(553U);
    msg.setDestinationEntity(120U);
    msg.name.assign("RLEHDIHIGPRPMTPZNHTUKCCEHBYKKUCGRLSWCXRMRBZGMSCIRKLSYMVAQWZEJYSBVNVZODMINAJYKCJZQFVCHLOBTDVIFUAQUGATT");

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
    msg.setTimeStamp(0.7633982745083684);
    msg.setSource(39712U);
    msg.setSourceEntity(146U);
    msg.setDestination(13204U);
    msg.setDestinationEntity(250U);
    msg.type = 101U;
    msg.error.assign("NGMHOOHBBZVUIASCCQVFZTMWDJXXUHRARBPSGIQTGKREPSMMKXCLHDJXAWDPZGUSETCUTMPJDCPFFLOVJPHYEWIEEPMKINZASAOQRCGLNKBMKWROSXGMVVVYIUTGEEVXKJOVJKOCKITFDHTNLJUWQPEXKYJOFFMXGNFYHSTYYILUNRRTDCRQOPZFQSBQZXIHNYBAUNSLDWCYDZHPGQEFBMYCBXQVOZKLZRSVWLZLBD");

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
    msg.setTimeStamp(0.2435560149926318);
    msg.setSource(51907U);
    msg.setSourceEntity(245U);
    msg.setDestination(1044U);
    msg.setDestinationEntity(229U);
    msg.type = 76U;
    msg.error.assign("UOICFHWSJGYSVMILEMYZDKBXQYICEHBHPHWOJTFNJOODCKVVSTSPLASYUZGGVPFZYBNTWRQUAETOVXJECLYXFEHWRGUNVWPCETEQAOJZNCVRMNBDGPDKWIAFZYSKLUQFWRJTRXJDLFCYICNKCMTXGGWIAQAGXIAGXOIBUFSZZHWBZDXPHBPVTAASORPJLHMYQNUQIZKTVKCEDQMSLBNVTIMFFPEQZHDQWKMKUDMHUJXBRUBSOG");

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
    msg.setTimeStamp(0.6067319239519966);
    msg.setSource(39229U);
    msg.setSourceEntity(237U);
    msg.setDestination(16600U);
    msg.setDestinationEntity(31U);
    msg.type = 116U;
    msg.error.assign("JWZUUDYFMQFRMCNHWQGKGEMBOMWKFIBYTPZIIWKOLHKJFZCZCZVBZBQRUZJLHVFOIJINCVXMUPNSJEQRCNDSCTCQDTEXGNPMAMJUPXAYSHNLWULKZXO");

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
    msg.setTimeStamp(0.8934604542206105);
    msg.setSource(9599U);
    msg.setSourceEntity(171U);
    msg.setDestination(34610U);
    msg.setDestinationEntity(114U);
    msg.seq = 38663U;
    msg.sys_dst.assign("UAMIYSNURCXBAHDPHGDUFNPEKNSOJYFKHYLKDJUCFLAVQDTKGMQBZKFSEWPJGSEXRHVDBMMHGFDHLIQCWQYW");
    msg.flags = 4U;
    const char tmp_msg_0[] = {86, 33, 112, -11, 78, 40, 103, -96, -117, 21, 114, 35, -15, 111, -34, -21, 7, 112, 14, -69, -10, -74, -116, -69, 36, 122, 103, 35, -33, 104, 19, -14, -49, 12, 65, 65, -105, -126, -110, 94, -11, -110, 2, -92, 124, 36, -79, -1, 63, -46, 52, -84, -114, 67, -77, -24, 17, -8, -73, 35, 82, -113, -87, -15, -53, -68, -24, 88, -64, 20, -29, 32, -14, 72, -79, 16, -89, 91, 83, 39, -46, 42, 120, -44, -92, -79, -64, 68, 78, 84, -118, -121, -107, -51, 65, 110, -101, -4, -93, -16, 123, -77, -108, -78, 18, -107, 69, -43, -110, 62, -108, -83, -85, 92, 90, 98, 24, -105, 11, 86, -68, 28, -83, 6, -71, -47, -13, 44, -69, 85, -88, -59, 44, 14, -51, -32, 107, 107, -75, -5, -42, -111, 10, -99, 20, 75, -107, -38, 34, 31, -1, -100, 118, 72, -109, 67, 53, 110, 30, -3, 14, 17, -73, -33, -77, -42, -101, 113, 90, 80, 25, 76, 69, -27, 14, -29, -123, 108, -80, -85, -118, -121, 85, 82, 38, 10, -106, -33, 121, -11, 56, -92, -36, -17, -93, -38, 28, -74, -122, -86, 26, -101, 23, -80, -128};
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
    msg.setTimeStamp(0.3989946792884824);
    msg.setSource(24529U);
    msg.setSourceEntity(17U);
    msg.setDestination(22839U);
    msg.setDestinationEntity(2U);
    msg.seq = 25680U;
    msg.sys_dst.assign("JXHDVOMZJHBJWQCZTBRVTANQTVJORCNVDFPUKQZTMXKLFVPEPLUYFJIDYETACFLTGSGUGWQQDFCKKLDWWGXBYCNGZLOGFPWJDBELZBNTEEUNHEXDOPA");
    msg.flags = 226U;
    const char tmp_msg_0[] = {77, 93, -65, 107, 120, 110, -105, 80, 121, 104, -123, -124, 86, 75, -21, 122, 9, -100, 78, 76, -43, 22, -16, 116, 124, 2, 106, -112, 56, -79, -76, 8, -86, -17, 93, -63, 102, -90, -32, -80, 54, 37, 7, 65, -3, 81, -112, -12, 68, -10, 44, -94, -40, -65, 31, -20, 35, -78, 20, 18, 18, 4, 28, 89, -105, -19, -114, 6, -70, -47, 90, -25, 105, 80, 120, 70, 99, -40, -127, -17, 56, -44, 39, -109, -31, 85, -20, -108, 105, -38, -52, 75, -83, -108, 117, 104, -93, -53, -51, -29, 72, -57, 69, 113, -84, 43, -12, 10, -93, 124, -81, 48, 21, -31, 9, 7, 2, -81, -97, -84, -30, 23, 106, 13, -72, 102, 113, 66, 88, -116, 115, -108, 86, -109, -112, -89, 72, 29, -17, -65, 99, 98, -113, -31, -10, -40, 103, 60, -121, 103, 65, -9, -10, 26, 108, 74, -89, 67, -96, 43, 97, -58, -42, 9, 121, 86, -46, -77, -3, 15, 87, 80, -61};
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
    msg.setTimeStamp(0.9868523991160835);
    msg.setSource(46007U);
    msg.setSourceEntity(170U);
    msg.setDestination(43201U);
    msg.setDestinationEntity(72U);
    msg.seq = 35706U;
    msg.sys_dst.assign("QXYFBDPVMMHDUZDPUMNLLLZNKABTCPSVKCGYSAYNRWPWZJIJHWWYVVYFOBTSKTJUNQIGFFQIIDBECDOQWMRBMJOAAYQTYXHGBSVWIKMCZUPIZORSFBCUBKRXDXAWLTENTRRPKFZRLZDEZAAEEELVECQWBAHJOXXWNOGFCTQRKTXPCLZUTAUOJHJKODQLNDLEOCISGKSIPYKCEIPXFXVBGOUXFGJ");
    msg.flags = 121U;
    const char tmp_msg_0[] = {-89, -84, -28, -83, 96, 115, 12, -93, -103, 21, 28, -98, 124, -125, 63, 10, 18, -121, 36, 56, 108, 43, 99, 72, -85, -126, 27, 33, -64, 73, -21, 116, -94, 123, -42, 89, 50, 39, 8, -62, -77, 81, 29, -74, -43, -53, -52, 74, 41, 14, -2, -98, 87, 33, -66, 42, 50, -101, 63, -117, 36, -22, 124, 24, -126, -44, 51, 74, 81, 3, -120, 83, -92, -121, 23, -55, -95, 42, -100, -108, 21, -41, 105, -124};
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
    msg.setTimeStamp(0.5427851288112722);
    msg.setSource(31087U);
    msg.setSourceEntity(118U);
    msg.setDestination(57770U);
    msg.setDestinationEntity(132U);
    msg.sys_src.assign("OUNNOVKLRYDIUHEDTFCISPPCYMOWNUCKYZLATGUYIXPNGURWCPJYLCOUZFHYHTGMCEFMXSFJAWXEFSJWNVQQOEZBOBTGVBEPNRTPTEWKNSWHJTLIIRYULOHKDHRLVREXINAIBGSSRJUSBSDJIPHAYQOCZPICQDCAVZGGFYTVWWPQXCBVADQVDXBZFKARXHHQVPUBZTGQVQLLKIGRGUMLNMRMSEMMBAXLAJATYXQOMFDEJ");
    msg.sys_dst.assign("OWKVVCYGYLUYINFGOOPZKXINYNXWNWRANPRQMLOSDPLLXHFSEMTVUWGBWZOKLNCMIBHWQMAEDEKZZVYKFVTEHIARFTKPJHSCUGCCAOFDPDEMRCHTAWVRJSTARMJFTZQDGPSXULDSQIQZPHGAJUFSXRUJCBKTNHJK");
    msg.flags = 156U;
    const char tmp_msg_0[] = {80, 10, 112, 115, 96, 99, 43, -7, 48, -37, 43, -69, -61, -86, -118, 91, -73, 112, 105, -35, -111, -5, -71, -93, -115, -64, -68, 6, 77, 96, 56, -84, -34, 118, -42, 116, 5, -21, 96, 114, -89, -65, -34, 7, 117, 124, 36, 27, 64, -46, 109, -7, 79, -39, -29, 52, 64, 110, -42, 78, -50};
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
    msg.setTimeStamp(0.4179008725996608);
    msg.setSource(40435U);
    msg.setSourceEntity(9U);
    msg.setDestination(12483U);
    msg.setDestinationEntity(45U);
    msg.sys_src.assign("NPPWYXHXYNHRUGROFUCVBHMZGFZCRVYRSMRLJMCWKIEYHIWVCKOTDBDDKWXKVNJMBFACYUUILVZQEIPEGQLQNBJAUEVHLKTINUJTPAHHUBWXTBGFXMXUFNKVHAXCACBHCDFLJLIYLSROKWJPEDPDGFLZDZDAHEJNMSRILQSTFOOTCYNYOGXGVSYQKZRSESIBTOKDSZGIDXYQOQT");
    msg.sys_dst.assign("AFWDPJYPDOSAEIAJAHSOQWUNEEBIXIGQRTDJXVELVTKCGOCEMQKWODHYKVGWBZDBFUYCCYNZWOOSFSPNCYZAVQVFYDQDXIBT");
    msg.flags = 126U;
    const char tmp_msg_0[] = {-56, -3, -46, -87, -32, -20, -93, -23, 107, 92, -68, -56, 93, 24, 97, 122, -89, -26, -15, 6, 23, 67, -77, 68, 22, 110, -2, 88, -105, 58, -18, 37, -97, 63, -63, -86, 84, -70, -31, 59, 86, 38, -94, -108, 64, 126, 32, 29, -123, 61, 100, -42, -102, -74, 69, 66, 19, 105, -94, -7, -41, 108, 10, 124, -34, -25, 107, -21, -51, 13, 68, 27, 0, -26, 33, -103, -43, 81, 122, 23, 12, 35, -55, -69, -34, 1, -70, -123, -14, -92, 72, 103, -13, 56, 56, 48, 77, 50, 81, 87, -28, -89, -23, 33, -104, 90};
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
    msg.setTimeStamp(0.7442505894691261);
    msg.setSource(45522U);
    msg.setSourceEntity(78U);
    msg.setDestination(14458U);
    msg.setDestinationEntity(228U);
    msg.sys_src.assign("JFGJWRCLALTAQDUMOXBZQNLRRFXENQJREXBGBLHKOYIYTRGTCWCEIAZEYPUOFHRODBQCEXZNBTWXZIXYWOJMZO");
    msg.sys_dst.assign("HVJUAJTYNJXYLOEVWXDKUQAVAQQAWRGCLCKINOJCWYGVPZGJBDZWBSBUPQBMQDTHOELBIUGKMAFEARJMRPSGIGBNHVNP");
    msg.flags = 40U;
    const char tmp_msg_0[] = {-25, 95, -20, 109, 101, -16, -67, 96, 21, -69, -59, 64, -54, 108, 87, -89, -12, -103, -15, -38, 28, -85, 111, -77, -89, 105, 113, -93, -82, -15, -8, -4, -37, -71, 114, 76, -107, -16, 72, 84, 54, 30, 105, 67, -73, 110, -37, -109, 121, -90, 39, -16, -97, -10, 5, -121, 63, -81, -117, 12, 4, 116, -90, -100, -95, -80, 12, 25, 25, -51, -28, -87, 17, 13, -12, 45, 36, 4, -82, 69, 13, -79, 126, 78, 45, -44, -55, 4, 124, -82, -93, -3, -24, 86, -6, -110, 6, 91, -68, 78, 102, -67, 103, -105, -99, -25, -74, 97, -60, -24, -12, -14, 116, -47, 90, 112, -96, -46, -127, -58, 0, 20, 73, 112, -116, -128, -70, 31, 58, 45, 116, -94, -61, -87, -36, -31, -89, -55, -78, -30, 47, 85, 12, 60, -72, -74, -64, 21, -63, 78, 53, 49, 90};
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
    msg.setTimeStamp(0.6820735499220048);
    msg.setSource(64977U);
    msg.setSourceEntity(111U);
    msg.setDestination(2504U);
    msg.setDestinationEntity(158U);
    msg.seq = 28014U;
    msg.value = 231U;
    msg.error.assign("WEQJRAUESVWWYRBHTXOPZODGGNBVRDXUHNTVOFDKQKAMIMCJXNAKHYNUYXCCJPWLCCIDVCEOGIQGGKFLEFDYHGEQJAOQOMYZAXKKJWRSIPZGUDRLNKLKVYDZWRCIMCJNXSABTTWTAXRNSHOLTXKQFFEEQAEULOZMPYPHBZ");

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
    msg.setTimeStamp(0.8307315146026983);
    msg.setSource(27985U);
    msg.setSourceEntity(30U);
    msg.setDestination(23793U);
    msg.setDestinationEntity(134U);
    msg.seq = 7580U;
    msg.value = 252U;
    msg.error.assign("AFUTUKVDIJRLWGGWGMPIRWIZBKCLUILHKEMVQNTUJONFLUQOMCMEZAJMTMSHDPIQOKCYOWVBVMDEXXWYGGKEFHAQBPLTXCAJDSYYXLCAFEZLICERJIYUCSFWTGZKZNSPROLCRQJVQTHFLVYOEIATHCXNWRMB");

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
    msg.setTimeStamp(0.5780347541421166);
    msg.setSource(4135U);
    msg.setSourceEntity(117U);
    msg.setDestination(42162U);
    msg.setDestinationEntity(1U);
    msg.seq = 40864U;
    msg.value = 194U;
    msg.error.assign("MXHPVBCMOUOWNOZTNSQQJQGEIQSVSJORHCFMIKYXRSKAWRBOWBBYIZLGSDLTFXQEPCQPHTCGQCRYIXPHZRPNLEJGDSJJVPYEUVCWLPRLMZIAULAKIYXNICYOUUZPHTFZLLOLZQDTGCHBJVDKOXJBVENNHKJTMFFZAETDUYI");

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
    msg.setTimeStamp(0.4808177352812695);
    msg.setSource(12292U);
    msg.setSourceEntity(123U);
    msg.setDestination(60174U);
    msg.setDestinationEntity(45U);
    msg.seq = 4834U;
    msg.sys.assign("YTWYGNNLXVMCBUQAIARYFDIMOQVQBZVHPUCRPJZIQZCXGUHATDJMBPELQTEYKOSOWEHIKUXYDNWENSLJPEXOSSVAEKNHPPOCPLYFFIDTNYKFYHUJFFJNKKZBDWKKDEYAPTKMQKJVWFWDZOGNBUPXGRZC");
    msg.value = 0.9652132265974188;

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
    msg.setTimeStamp(0.6641323006723384);
    msg.setSource(34494U);
    msg.setSourceEntity(99U);
    msg.setDestination(34720U);
    msg.setDestinationEntity(35U);
    msg.seq = 21839U;
    msg.sys.assign("KCRPBLJNKQALXWDUPTYIPYIIGHSXLUUFKSWOBTSRWCFWVLNHYRTPWBOLRQZJOBQYIEIJCMWFSEBNNLUWSQCZGHRIHCVYSJDOVFWVGDBSTIUKDNDKAHMJACOQHENMGPZEHVLPPUPXTASJRSEJRYWMHMNGKLUAJORTOSEDYRXDXFVDXGTYIEYP");
    msg.value = 0.22706450524615274;

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
    msg.setTimeStamp(0.4156786729424178);
    msg.setSource(22734U);
    msg.setSourceEntity(142U);
    msg.setDestination(31940U);
    msg.setDestinationEntity(113U);
    msg.seq = 29324U;
    msg.sys.assign("VJPMAIXPTAVUDQDHGTZDTZTWIULUGVNDZBGRPMOMREEQIQSKBAKFSXUJCTPUYFARMNPHFQWGSDKZIKLXLOVWPWOVGSCTXWHKPNDJCJXY");
    msg.value = 0.0187812506389039;

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
    msg.setTimeStamp(0.20141885687048278);
    msg.setSource(13971U);
    msg.setSourceEntity(242U);
    msg.setDestination(22688U);
    msg.setDestinationEntity(185U);
    msg.action = 43U;
    msg.longain = 0.8399744145028543;
    msg.latgain = 0.9604000832515864;
    msg.bondthick = 3476676143U;
    msg.leadgain = 0.8935764177345966;
    msg.deconflgain = 0.6011671385670793;

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
    msg.setTimeStamp(0.62951357107486);
    msg.setSource(50364U);
    msg.setSourceEntity(72U);
    msg.setDestination(32162U);
    msg.setDestinationEntity(108U);
    msg.action = 119U;
    msg.longain = 0.6819317114697409;
    msg.latgain = 0.5726135921490917;
    msg.bondthick = 420534970U;
    msg.leadgain = 0.020993927793186873;
    msg.deconflgain = 0.6460716335795437;

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
    msg.setTimeStamp(0.22037355361017608);
    msg.setSource(57518U);
    msg.setSourceEntity(135U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(157U);
    msg.action = 180U;
    msg.longain = 0.7857223381951509;
    msg.latgain = 0.5265769930638513;
    msg.bondthick = 736026237U;
    msg.leadgain = 0.43331556527325965;
    msg.deconflgain = 0.3011252908763128;

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
    msg.setTimeStamp(0.8403976762303992);
    msg.setSource(16298U);
    msg.setSourceEntity(126U);
    msg.setDestination(62122U);
    msg.setDestinationEntity(113U);
    msg.err_mean = 0.3295196235049155;
    msg.dist_min_abs = 0.8016375279017567;
    msg.dist_min_mean = 0.09970273989317224;

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
    msg.setTimeStamp(0.9761541788938547);
    msg.setSource(5341U);
    msg.setSourceEntity(17U);
    msg.setDestination(42931U);
    msg.setDestinationEntity(18U);
    msg.err_mean = 0.748252550466275;
    msg.dist_min_abs = 0.9028984012077518;
    msg.dist_min_mean = 0.45354359634632746;

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
    msg.setTimeStamp(0.7403763292682354);
    msg.setSource(48430U);
    msg.setSourceEntity(215U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(235U);
    msg.err_mean = 0.26433255499206254;
    msg.dist_min_abs = 0.9548819910250229;
    msg.dist_min_mean = 0.6248763846182485;

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
    msg.setTimeStamp(0.3022781279781469);
    msg.setSource(37577U);
    msg.setSourceEntity(213U);
    msg.setDestination(58740U);
    msg.setDestinationEntity(165U);
    msg.uid = 26U;
    msg.frag_number = 227U;
    msg.num_frags = 136U;
    const char tmp_msg_0[] = {66, 49, 11, -29, -4, -76, -120, -80, 21, 49, -54, 123, -74, -38, 93, 103, 38, -69, -4, -49, -94, -53, -34, -94, -65, 58, 55, -119, 58, -51, -63, 8, -79, -2, -35, -39, -24, -98, -16};
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
    msg.setTimeStamp(0.7024087140098004);
    msg.setSource(274U);
    msg.setSourceEntity(196U);
    msg.setDestination(27368U);
    msg.setDestinationEntity(227U);
    msg.uid = 219U;
    msg.frag_number = 75U;
    msg.num_frags = 63U;
    const char tmp_msg_0[] = {2, 94, -120, 74, -90, -4, 95, 114, -19, -36, -49, 44, -77, -6, 86, 49, -4, -60, -92, -98, -76, -28, -87, -100, -89, -39, -23, -65, -127, 43, -95, -120, -14, 121, 125, 10, -5, 63, -112, 49, 97, 122, 68, 68, 88, 44, -65, 104, -52, -110, 54, -116, 8, -75, 8, 26, -7, 121, 7, 28, 103, -81, 116, 13, 109, 79, -9, -112, 49, 36, 81, 44, 77, -12, 40, -74, -35, -108, -80, -20, -26, -125, 90, -51, 81, 117, -81, -53, -91, -63, 93, -10, 2, -46, 11, -113, -20, 125, -13, 105, 123, 3, 84, -29, 110, -6, 91, 74, -128, -105, -82, -67, 10, 36, -84, -55, 123, 25, -95, -32, -70, -85, 94, -46, 117, -43, 66, 93, -55, -107, -54, 47, 33, 7, -24, -116, 65, 37, -65, -81, -125, 51, 22, 89, -65, -82, -87, -100, -105, -64, 40, -98, 78, 61, -71, 126, -112, -17, -84, 65, -108, -5};
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
    msg.setTimeStamp(0.8274478929992646);
    msg.setSource(29131U);
    msg.setSourceEntity(75U);
    msg.setDestination(51530U);
    msg.setDestinationEntity(139U);
    msg.uid = 211U;
    msg.frag_number = 50U;
    msg.num_frags = 42U;
    const char tmp_msg_0[] = {36, 28, 90, -97, -114, -54, -125, 64, 7, 105, 72, -30, -78, 29, 56, 52, -112, 15, -17, 104, -40, -102, 34, -52, -10, 104, -50, 33, -58, 48, 103, 14, 88, -6, 116, 3, -42, 111, 46, -55, -17, 101, 16, 51, -85, -53, -93, -79, 48, -108, -65, -57, 61, -109, -128, 27, 53, -127, -81, -3, 82, -18, -46, -74, 46, -101, 112, 49, 108, -83, -78, -22, 21, 76, -11, 25, -57, 74, 32, 68, -61, -67, -32, -60, 63, -62, 74, 25, 25, 83, -40, -57, 22, 43, 42, 82, 11, -35, -18, -118, -82, -98, 123, 113, 24, 39, -122, -37, -14, -67, -3, -2, 11, 51, -29, 114, 96, -19, 76, 94, -128, -97, 126, -78, 38};
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
    msg.setTimeStamp(0.14385266700720845);
    msg.setSource(22203U);
    msg.setSourceEntity(223U);
    msg.setDestination(58121U);
    msg.setDestinationEntity(212U);
    msg.content_type.assign("HLCYXYQJCSPAIZVAIMHLFEFLHRGWKBHDMCNDBKVUTPQWBPJNOVKOLIECLRNGVPDBHQJLNEPYSMVGLSCNZSAQPWQXZAFENBXGETGKNJGKSODMFHLUUERDQDUKWMXPBGFTUQVEPHCSTZCWYAITXNUWWNUSTJBGWVDKJSKYZMIAQRRAJHLIHJMGYZEBONURTAMDAOIEIZCTBXOSRVBX");
    const char tmp_msg_0[] = {-45, -76, -18, -84, 52, -125, 16, 40, 98, -23, -92, -116, -79, -36, 4, -81, -16, -24, -42, -110, 10, -53, -112, 94, 9, -107, 27, 56, -18, -67, -39, -113, 98, 100, 66, -63, 44, -83, -96, -97, -54, 105, 5, 77, -103, 125, 67, -11, -86, -5, 42, -32, 41, 28, -59, 45, -20, -122, 110, 98, -126, -63, -111, 24, 27, 47, 13, 23, 112, -95, -39, -8, -3, -47, 73, -29, 85, -63, -100, 50, 66, 71, -98, -56, 86, -1, -22, -12, -13, 115, -80, 18, 26, -70, -43, 106, 97, 93, 93, -108, 87, -118, 112, 11, 84, 26, -112, -123, 121, -53, -103, -106, -70, 80, 117, -68, 102, -124, 36, -84, 32, -15, 42, 23, -21, 37, -125, -32, 97, -81, -69, -115, -21, -98, -38, -106, -102, -32, -1, 91, -18, 19, -112, 66, 34, 42, 112, -120, 42, -42, -17, -37, -126, -10, 8, 107, 62, -28, -81, -118, -128, 30, 125, 116, -14, -51, 43, -106, -88, 72, 46, 75, -123, 102, -41};
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
    msg.setTimeStamp(0.6818225527754208);
    msg.setSource(628U);
    msg.setSourceEntity(173U);
    msg.setDestination(17799U);
    msg.setDestinationEntity(165U);
    msg.content_type.assign("VJFPZVHOYO");
    const char tmp_msg_0[] = {-87, 92, -84, -53, -52, -68, 105, 60, -68, -25, -76, -89, 111, -92, -74, 57, 122, -103, -14, 22, -53, 108, 16, -45, 24, 46, -104, 96, -123, 43, -103, -122, 23, -120, 6, -97, 32, -49, -14, 79, -10, -97, 40, -100, 54, -68, -51, 51, 14, 28, 109, 12, 116, 41, -88, 46, -121, -111, 80, -66, -127, 12, 52, 105, -114, 96, 33, -73, 117, -34, 35, 47, 88, 34, 120, -14, 41, -40, -53, 64, 94, -2, -79, 46, -33, 62, 99, 101, 22, -106, 4, -46, -74, 29, 122, -46, -47, 40, 36, 119, 3, -56, 93, -42, 42, -55, -74};
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
    msg.setTimeStamp(0.3102407487564275);
    msg.setSource(52346U);
    msg.setSourceEntity(123U);
    msg.setDestination(45170U);
    msg.setDestinationEntity(30U);
    msg.content_type.assign("HZZDTKANRCWUNPXEWIQCALKPHRSSMYRVCWYZNCEUTKWFJKBWLAVJYQLQPKFPQRFBRILSXJJXGDMZCZUUWZJFTJUFVAUGSNZGVV");
    const char tmp_msg_0[] = {29, -36, 81, 110, -38, -20, -110, 61, 116, -66, -15, 68, 101, 95, -80, -120, 86, 81, 39, -124, 95, -76, -96, -37, 23, -39, 110, -125, -22, 46, -80, 60, 65, -84, 91, 119, 15, -107, 120, 26, 81, 20, 91, -46, 103, -100, -57, 17, -108, -41, -26, -58, 109, 107, -14, -101, -27, 52, 13, -101, -80, -121, -108, 40, 28, -68, -32, 97, 94, 7, -62, -115, 1, -98, -76, 37, -7, 19, -1, 43};
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
    msg.setTimeStamp(0.7382416829807136);
    msg.setSource(9252U);
    msg.setSourceEntity(24U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.7122565269706017);
    msg.setSource(52554U);
    msg.setSourceEntity(116U);
    msg.setDestination(11256U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.31737598049632665);
    msg.setSource(37479U);
    msg.setSourceEntity(247U);
    msg.setDestination(31310U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.14403038771741905);
    msg.setSource(53885U);
    msg.setSourceEntity(164U);
    msg.setDestination(23186U);
    msg.setDestinationEntity(249U);
    msg.target = 41726U;
    msg.bearing = 0.8091637636582316;
    msg.elevation = 0.8069206722343144;

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
    msg.setTimeStamp(0.6496221705626682);
    msg.setSource(18777U);
    msg.setSourceEntity(105U);
    msg.setDestination(48235U);
    msg.setDestinationEntity(221U);
    msg.target = 41497U;
    msg.bearing = 0.8651535454851728;
    msg.elevation = 0.7608629928167607;

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
    msg.setTimeStamp(0.1478593124319586);
    msg.setSource(3162U);
    msg.setSourceEntity(251U);
    msg.setDestination(37516U);
    msg.setDestinationEntity(57U);
    msg.target = 6625U;
    msg.bearing = 0.9266362184428301;
    msg.elevation = 0.36340357313000093;

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
    msg.setTimeStamp(0.353070581239466);
    msg.setSource(44800U);
    msg.setSourceEntity(145U);
    msg.setDestination(45758U);
    msg.setDestinationEntity(74U);
    msg.target = 28779U;
    msg.x = 0.02381487252780401;
    msg.y = 0.5608769751578176;
    msg.z = 0.4513211943089327;

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
    msg.setTimeStamp(0.28112765897941705);
    msg.setSource(5919U);
    msg.setSourceEntity(196U);
    msg.setDestination(7384U);
    msg.setDestinationEntity(106U);
    msg.target = 33146U;
    msg.x = 0.17969209795454522;
    msg.y = 0.849286838278955;
    msg.z = 0.13849861977575662;

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
    msg.setTimeStamp(0.42646161439969976);
    msg.setSource(42407U);
    msg.setSourceEntity(67U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(76U);
    msg.target = 50950U;
    msg.x = 0.9835211769371816;
    msg.y = 0.43772258976000833;
    msg.z = 0.15211464679122522;

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
    msg.setTimeStamp(0.31112937431711984);
    msg.setSource(64571U);
    msg.setSourceEntity(115U);
    msg.setDestination(4819U);
    msg.setDestinationEntity(83U);
    msg.target = 11735U;
    msg.lat = 0.5643072587617819;
    msg.lon = 0.4786755476787332;
    msg.z_units = 167U;
    msg.z = 0.8632213004748028;

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
    msg.setTimeStamp(0.9137141922559248);
    msg.setSource(5515U);
    msg.setSourceEntity(238U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(40U);
    msg.target = 40539U;
    msg.lat = 0.4170208321428466;
    msg.lon = 0.8904668126198854;
    msg.z_units = 139U;
    msg.z = 0.47650844895882305;

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
    msg.setTimeStamp(0.6955293921014106);
    msg.setSource(60386U);
    msg.setSourceEntity(111U);
    msg.setDestination(55777U);
    msg.setDestinationEntity(59U);
    msg.target = 7255U;
    msg.lat = 0.20939187619729038;
    msg.lon = 0.9075814147953956;
    msg.z_units = 118U;
    msg.z = 0.30658370170658755;

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
